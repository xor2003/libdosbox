/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group2:
    _begin:
sub_11f4e:
	// 3995 
#undef var_2
#define var_2 -2
	// 3998 var_2           = word ptr -2 ;~ 0396:000E
ret_396_e:
	// 4638 
cs=0x396;eip=0x00000e; 	X(PUSH(bp));	// 4000 push    bp ;~ 0396:000E
cs=0x396;eip=0x00000f; 	T(MOV(bp, sp));	// 4001 mov     bp, sp ;~ 0396:000F
cs=0x396;eip=0x000011; 	T(SUB(sp, 2));	// 4002 sub     sp, 2 ;~ 0396:0011
cs=0x396;eip=0x000014; 	X(PUSH(si));	// 4003 push    si ;~ 0396:0014
cs=0x396;eip=0x000015; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 4004 mov     [bp+var_2], 0 ;~ 0396:0015
loc_11f5a:
	// 4639 
cs=0x396;eip=0x00001a; 	T(MOV(al, 0x1B));	// 4007 mov     al, 1Bh ;~ 0396:001A
cs=0x396;eip=0x00001c; 	X(MUL1_1(byte_2c805));	// 4008 mul     byte_2C805 ;~ 0396:001C
cs=0x396;eip=0x000020; 	T(MOV(bx, ax));	// 4009 mov     bx, ax ;~ 0396:0020
cs=0x396;eip=0x000022; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2))));	// 4010 mov     si, [bp+var_2] ;~ 0396:0022
cs=0x396;eip=0x000025; 	T(MOV(al, *(raddr(ds,bx+si-0x1827))));	// 4011 mov     al, [bx+si-1827h] ;~ 0396:0025
cs=0x396;eip=0x000029; 	T(MOV(bx, si));	// 4012 mov     bx, si ;~ 0396:0029
cs=0x396;eip=0x00002b; 	X(MOV(*(raddr(ds,bx+0x9C6)), al));	// 4013 mov     [bx+9C6h], al ;~ 0396:002B
cs=0x396;eip=0x00002f; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 4014 inc     [bp+var_2] ;~ 0396:002F
cs=0x396;eip=0x000032; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x19));	// 4015 cmp     [bp+var_2], 19h ;~ 0396:0032
cs=0x396;eip=0x000036; 	R(JL(loc_11f5a));	// 4016 jl      short loc_11F5A ;~ 0396:0036
cs=0x396;eip=0x000038; 	X(POP(si));	// 4017 pop     si ;~ 0396:0038
cs=0x396;eip=0x000039; 	T(MOV(sp, bp));	// 4018 mov     sp, bp ;~ 0396:0039
cs=0x396;eip=0x00003b; 	X(POP(bp));	// 4019 pop     bp ;~ 0396:003B
cs=0x396;eip=0x00003c; 	R(RETF(0));	// 4020 retf ;~ 0396:003C
sub_11f7e:
	// 4030 
#undef var_2
#define var_2 -2
	// 4032 var_2           = word ptr -2 ;~ 0396:003E
ret_396_3e:
	// 4640 
cs=0x396;eip=0x00003e; 	X(PUSH(bp));	// 4034 push    bp ;~ 0396:003E
cs=0x396;eip=0x00003f; 	T(MOV(bp, sp));	// 4035 mov     bp, sp ;~ 0396:003F
cs=0x396;eip=0x000041; 	T(SUB(sp, 2));	// 4036 sub     sp, 2 ;~ 0396:0041
cs=0x396;eip=0x000044; 	X(PUSH(si));	// 4037 push    si ;~ 0396:0044
cs=0x396;eip=0x000045; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 4038 mov     [bp+var_2], 0 ;~ 0396:0045
loc_11f8a:
	// 4641 
cs=0x396;eip=0x00004a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 4041 mov     bx, [bp+var_2] ;~ 0396:004A
cs=0x396;eip=0x00004d; 	T(MOV(al, *(raddr(ds,bx+0x9C6))));	// 4042 mov     al, [bx+9C6h] ;~ 0396:004D
cs=0x396;eip=0x000051; 	T(MOV(cx, ax));	// 4043 mov     cx, ax ;~ 0396:0051
cs=0x396;eip=0x000053; 	T(MOV(al, 0x1B));	// 4044 mov     al, 1Bh ;~ 0396:0053
cs=0x396;eip=0x000055; 	X(MUL1_1(byte_2c805));	// 4045 mul     byte_2C805 ;~ 0396:0055
cs=0x396;eip=0x000059; 	T(MOV(bx, ax));	// 4046 mov     bx, ax ;~ 0396:0059
cs=0x396;eip=0x00005b; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2))));	// 4047 mov     si, [bp+var_2] ;~ 0396:005B
cs=0x396;eip=0x00005e; 	X(MOV(*(raddr(ds,bx+si-0x1827)), cl));	// 4048 mov     [bx+si-1827h], cl ;~ 0396:005E
cs=0x396;eip=0x000062; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 4049 inc     [bp+var_2] ;~ 0396:0062
cs=0x396;eip=0x000065; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x19));	// 4050 cmp     [bp+var_2], 19h ;~ 0396:0065
cs=0x396;eip=0x000069; 	R(JL(loc_11f8a));	// 4051 jl      short loc_11F8A ;~ 0396:0069
cs=0x396;eip=0x00006b; 	X(POP(si));	// 4052 pop     si ;~ 0396:006B
cs=0x396;eip=0x00006c; 	T(MOV(sp, bp));	// 4053 mov     sp, bp ;~ 0396:006C
cs=0x396;eip=0x00006e; 	X(POP(bp));	// 4054 pop     bp ;~ 0396:006E
cs=0x396;eip=0x00006f; 	R(RETF(0));	// 4055 retf ;~ 0396:006F
sub_11fb0:
	// 4063 
#undef var_e
#define var_e -0x0E
	// 4065 var_E           = word ptr -0Eh ;~ 0396:0070
#undef var_c
#define var_c -0x0C
	// 4066 var_C           = word ptr -0Ch ;~ 0396:0070
#undef var_a
#define var_a -0x0A
	// 4067 var_A           = word ptr -0Ah ;~ 0396:0070
#undef var_8
#define var_8 -8
	// 4068 var_8           = word ptr -8 ;~ 0396:0070
#undef var_6
#define var_6 -6
	// 4069 var_6           = word ptr -6 ;~ 0396:0070
#undef var_4
#define var_4 -4
	// 4070 var_4           = word ptr -4 ;~ 0396:0070
#undef var_2
#define var_2 -2
	// 4071 var_2           = word ptr -2 ;~ 0396:0070
ret_396_70:
	// 4642 
cs=0x396;eip=0x000070; 	X(PUSH(bp));	// 4073 push    bp ;~ 0396:0070
cs=0x396;eip=0x000071; 	T(MOV(bp, sp));	// 4074 mov     bp, sp ;~ 0396:0071
cs=0x396;eip=0x000073; 	T(SUB(sp, 0x0E));	// 4075 sub     sp, 0Eh ;~ 0396:0073
cs=0x396;eip=0x000076; 	X(MOV(byte_34f30, 0x80));	// 4076 mov     byte_34F30, 80h ; 'Ä' ;~ 0396:0076
cs=0x396;eip=0x00007b; 	T(MOV(ax, 0x0E8A));	// 4077 mov     ax, 0E8Ah ;~ 0396:007B
cs=0x396;eip=0x00007e; 	X(PUSH(ax));	// 4078 push    ax ;~ 0396:007E
cs=0x396;eip=0x00007f; 	T(MOV(ax, 0x0A9C));	// 4079 mov     ax, 0A9Ch ;~ 0396:007F
cs=0x396;eip=0x000082; 	X(PUSH(ax));	// 4080 push    ax ;~ 0396:0082
cs=0x396;eip=0x000083; 	R(CALLF(sub_29b46,0));	// 4081 call    sub_29B46 ;~ 0396:0083
cs=0x396;eip=0x000088; 	T(ADD(sp, 4));	// 4082 add     sp, 4 ;~ 0396:0088
cs=0x396;eip=0x00008b; 	T(MOV(ax, 0x0A9A));	// 4083 mov     ax, 0A9Ah ;~ 0396:008B
cs=0x396;eip=0x00008e; 	X(PUSH(ax));	// 4084 push    ax ;~ 0396:008E
cs=0x396;eip=0x00008f; 	R(CALLF(sub_10d62,0));	// 4085 call    sub_10D62 ;~ 0396:008F
cs=0x396;eip=0x000094; 	T(ADD(sp, 2));	// 4086 add     sp, 2 ;~ 0396:0094
cs=0x396;eip=0x000097; 	X(MOV(byte_2bedf, 0));	// 4087 mov     byte_2BEDF, 0 ;~ 0396:0097
cs=0x396;eip=0x00009c; 	X(MOV(byte_2becc, 0));	// 4088 mov     byte_2BECC, 0 ;~ 0396:009C
cs=0x396;eip=0x0000a1; 	T(SUB(al, al));	// 4089 sub     al, al ;~ 0396:00A1
cs=0x396;eip=0x0000a3; 	X(MOV(byte_3750c, al));	// 4090 mov     byte_3750C, al ;~ 0396:00A3
cs=0x396;eip=0x0000a6; 	T(SUB(ah, ah));	// 4091 sub     ah, ah ;~ 0396:00A6
cs=0x396;eip=0x0000a8; 	X(PUSH(ax));	// 4092 push    ax ;~ 0396:00A8
cs=0x396;eip=0x0000a9; 	X(PUSH(cs));	// 4093 push    cs ;~ 0396:00A9
cs=0x396;eip=0x0000aa; 	R(CALL(sub_13c62,0));	// 4094 call    near ptr sub_13C62 ;~ 0396:00AA
cs=0x396;eip=0x0000ad; 	T(ADD(sp, 2));	// 4095 add     sp, 2 ;~ 0396:00AD
cs=0x396;eip=0x0000b0; 	T(SUB(ax, ax));	// 4096 sub     ax, ax ;~ 0396:00B0
cs=0x396;eip=0x0000b2; 	X(MOV(word_2c942, ax));	// 4097 mov     word_2C942, ax ;~ 0396:00B2
cs=0x396;eip=0x0000b5; 	X(MOV(word_2c93e, ax));	// 4098 mov     word_2C93E, ax ;~ 0396:00B5
cs=0x396;eip=0x0000b8; 	T(MOV(ax, 0x0E97));	// 4099 mov     ax, 0E97h ;~ 0396:00B8
cs=0x396;eip=0x0000bb; 	X(PUSH(ax));	// 4100 push    ax ;~ 0396:00BB
cs=0x396;eip=0x0000bc; 	T(MOV(ax, 0x0A9C));	// 4101 mov     ax, 0A9Ch ;~ 0396:00BC
cs=0x396;eip=0x0000bf; 	X(PUSH(ax));	// 4102 push    ax ;~ 0396:00BF
cs=0x396;eip=0x0000c0; 	R(CALLF(sub_29b46,0));	// 4103 call    sub_29B46 ;~ 0396:00C0
cs=0x396;eip=0x0000c5; 	T(ADD(sp, 4));	// 4104 add     sp, 4 ;~ 0396:00C5
cs=0x396;eip=0x0000c8; 	X(PUSH(word_38a9e));	// 4105 push    word_38A9E ;~ 0396:00C8
cs=0x396;eip=0x0000cc; 	X(PUSH(word_38a9c));	// 4106 push    word_38A9C ;~ 0396:00CC
cs=0x396;eip=0x0000d0; 	T(MOV(ax, 0x0A9A));	// 4107 mov     ax, 0A9Ah ;~ 0396:00D0
cs=0x396;eip=0x0000d3; 	X(PUSH(ax));	// 4108 push    ax ;~ 0396:00D3
cs=0x396;eip=0x0000d4; 	R(CALLF(sub_10ee0,0));	// 4109 call    sub_10EE0 ;~ 0396:00D4
cs=0x396;eip=0x0000d9; 	T(ADD(sp, 6));	// 4110 add     sp, 6 ;~ 0396:00D9
cs=0x396;eip=0x0000dc; 	T(MOV(ax, 0x2500));	// 4111 mov     ax, 2500h ;~ 0396:00DC
cs=0x396;eip=0x0000df; 	X(PUSH(ds));	// 4112 push    ds ;~ 0396:00DF
cs=0x396;eip=0x0000e0; 	X(PUSH(ax));	// 4113 push    ax ;~ 0396:00E0
cs=0x396;eip=0x0000e1; 	X(PUSH(word_38a9e));	// 4114 push    word_38A9E ;~ 0396:00E1
cs=0x396;eip=0x0000e5; 	X(PUSH(word_38a9c));	// 4115 push    word_38A9C ;~ 0396:00E5
cs=0x396;eip=0x0000e9; 	R(CALLF(sub_1ab87,0));	// 4116 call    sub_1AB87 ;~ 0396:00E9
cs=0x396;eip=0x0000ee; 	T(ADD(sp, 8));	// 4117 add     sp, 8 ;~ 0396:00EE
cs=0x396;eip=0x0000f1; 	T(MOV(ax, 1));	// 4118 mov     ax, 1 ;~ 0396:00F1
cs=0x396;eip=0x0000f4; 	X(MOV(word_2beda, ax));	// 4119 mov     word_2BEDA, ax ;~ 0396:00F4
cs=0x396;eip=0x0000f7; 	X(PUSH(ax));	// 4120 push    ax ;~ 0396:00F7
cs=0x396;eip=0x0000f8; 	R(CALLF(sub_2714e,0));	// 4121 call    far ptr sub_2714E ;~ 0396:00F8
cs=0x396;eip=0x0000fd; 	T(ADD(sp, 2));	// 4122 add     sp, 2 ;~ 0396:00FD
cs=0x396;eip=0x000100; 	T(SUB(ax, ax));	// 4123 sub     ax, ax ;~ 0396:0100
cs=0x396;eip=0x000102; 	X(PUSH(ax));	// 4124 push    ax ;~ 0396:0102
cs=0x396;eip=0x000103; 	T(MOV(ax, 0x0C7));	// 4125 mov     ax, 0C7h ; '«' ;~ 0396:0103
cs=0x396;eip=0x000106; 	X(PUSH(ax));	// 4126 push    ax ;~ 0396:0106
cs=0x396;eip=0x000107; 	T(SUB(ax, ax));	// 4127 sub     ax, ax ;~ 0396:0107
cs=0x396;eip=0x000109; 	X(PUSH(ax));	// 4128 push    ax ;~ 0396:0109
cs=0x396;eip=0x00010a; 	T(MOV(ax, 0x140));	// 4129 mov     ax, 140h ;~ 0396:010A
cs=0x396;eip=0x00010d; 	X(PUSH(ax));	// 4130 push    ax ;~ 0396:010D
cs=0x396;eip=0x00010e; 	T(MOV(ax, 0x0A77));	// 4131 mov     ax, 0A77h ;~ 0396:010E
cs=0x396;eip=0x000111; 	X(PUSH(ax));	// 4132 push    ax ;~ 0396:0111
cs=0x396;eip=0x000112; 	T(MOV(ax, 0x2500));	// 4133 mov     ax, 2500h ;~ 0396:0112
cs=0x396;eip=0x000115; 	X(PUSH(ax));	// 4134 push    ax ;~ 0396:0115
cs=0x396;eip=0x000116; 	X(PUSH(cs));	// 4135 push    cs ;~ 0396:0116
cs=0x396;eip=0x000117; 	R(CALL(sub_178ec,0));	// 4136 call    near ptr sub_178EC ;~ 0396:0117
cs=0x396;eip=0x00011a; 	T(ADD(sp, 0x0C));	// 4137 add     sp, 0Ch ;~ 0396:011A
cs=0x396;eip=0x00011d; 	T(CMP(word_3a178, 0x13));	// 4138 cmp     word_3A178, 13h ;~ 0396:011D
cs=0x396;eip=0x000122; 	R(JNZ(loc_1207a));	// 4139 jnz     short loc_1207A ;~ 0396:0122
cs=0x396;eip=0x000124; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0x80));	// 4140 mov     [bp+var_E], 80h ; 'Ä' ;~ 0396:0124
cs=0x396;eip=0x000129; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x91));	// 4141 mov     [bp+var_2], 91h ; 'ë' ;~ 0396:0129
cs=0x396;eip=0x00012e; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0x92));	// 4142 mov     [bp+var_4], 92h ; 'í' ;~ 0396:012E
cs=0x396;eip=0x000133; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x94));	// 4143 mov     [bp+var_8], 94h ; 'î' ;~ 0396:0133
cs=0x396;eip=0x000138; 	R(JMP(loc_1208e));	// 4144 jmp     short loc_1208E ;~ 0396:0138
loc_1207a:
	// 4643 
cs=0x396;eip=0x00013a; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 4148 mov     [bp+var_E], 0 ;~ 0396:013A
cs=0x396;eip=0x00013f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 4));	// 4149 mov     [bp+var_2], 4 ;~ 0396:013F
cs=0x396;eip=0x000144; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0x0C));	// 4150 mov     [bp+var_4], 0Ch ;~ 0396:0144
cs=0x396;eip=0x000149; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 4));	// 4151 mov     [bp+var_8], 4 ;~ 0396:0149
loc_1208e:
	// 4644 
cs=0x396;eip=0x00014e; 	X(PUSH(cs));	// 4154 push    cs ;~ 0396:014E
cs=0x396;eip=0x00014f; 	R(CALL(sub_13b22,0));	// 4155 call    near ptr sub_13B22 ;~ 0396:014F
cs=0x396;eip=0x000152; 	T(CMP(byte_2becc, 0));	// 4156 cmp     byte_2BECC, 0 ;~ 0396:0152
cs=0x396;eip=0x000157; 	R(JZ(loc_120a0));	// 4157 jz      short loc_120A0 ;~ 0396:0157
loc_12099:
	// 4645 
cs=0x396;eip=0x000159; 	T(SUB(ax, ax));	// 4161 sub     ax, ax ;~ 0396:0159
cs=0x396;eip=0x00015b; 	T(MOV(sp, bp));	// 4162 mov     sp, bp ;~ 0396:015B
cs=0x396;eip=0x00015d; 	X(POP(bp));	// 4163 pop     bp ;~ 0396:015D
cs=0x396;eip=0x00015e; 	R(RETF(0));	// 4164 retf ;~ 0396:015E
loc_120a0:
	// 4646 
cs=0x396;eip=0x000160; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 4169 push    [bp+var_E] ;~ 0396:0160
cs=0x396;eip=0x000163; 	R(CALLF(sub_27031,0));	// 4170 call    far ptr sub_27031 ;~ 0396:0163
cs=0x396;eip=0x000168; 	T(ADD(sp, 2));	// 4171 add     sp, 2 ;~ 0396:0168
cs=0x396;eip=0x00016b; 	T(MOV(ax, 0x41));	// 4172 mov     ax, 41h ; 'A' ;~ 0396:016B
cs=0x396;eip=0x00016e; 	X(PUSH(ax));	// 4173 push    ax ;~ 0396:016E
cs=0x396;eip=0x00016f; 	T(SUB(ax, ax));	// 4174 sub     ax, ax ;~ 0396:016F
cs=0x396;eip=0x000171; 	X(PUSH(ax));	// 4175 push    ax ;~ 0396:0171
cs=0x396;eip=0x000172; 	R(CALLF(sub_26fb8,0));	// 4176 call    sub_26FB8 ;~ 0396:0172
cs=0x396;eip=0x000177; 	T(ADD(sp, 4));	// 4177 add     sp, 4 ;~ 0396:0177
cs=0x396;eip=0x00017a; 	T(MOV(ax, 5));	// 4178 mov     ax, 5 ;~ 0396:017A
cs=0x396;eip=0x00017d; 	X(PUSH(ax));	// 4179 push    ax ;~ 0396:017D
cs=0x396;eip=0x00017e; 	T(MOV(ax, 1));	// 4180 mov     ax, 1 ;~ 0396:017E
cs=0x396;eip=0x000181; 	X(PUSH(ax));	// 4181 push    ax ;~ 0396:0181
cs=0x396;eip=0x000182; 	T(MOV(ax, 0x0E788));	// 4182 mov     ax, 0E788h ;~ 0396:0182
cs=0x396;eip=0x000185; 	X(PUSH(ax));	// 4183 push    ax ;~ 0396:0185
cs=0x396;eip=0x000186; 	R(CALLF(sub_28b34,0));	// 4184 call    far ptr sub_28B34 ;~ 0396:0186
cs=0x396;eip=0x00018b; 	T(ADD(sp, 6));	// 4185 add     sp, 6 ;~ 0396:018B
cs=0x396;eip=0x00018e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 4186 push    [bp+var_2] ;~ 0396:018E
cs=0x396;eip=0x000191; 	R(CALLF(sub_27031,0));	// 4187 call    far ptr sub_27031 ;~ 0396:0191
cs=0x396;eip=0x000196; 	T(ADD(sp, 2));	// 4188 add     sp, 2 ;~ 0396:0196
cs=0x396;eip=0x000199; 	T(MOV(ax, 5));	// 4189 mov     ax, 5 ;~ 0396:0199
cs=0x396;eip=0x00019c; 	X(PUSH(ax));	// 4190 push    ax ;~ 0396:019C
cs=0x396;eip=0x00019d; 	T(MOV(ax, 2));	// 4191 mov     ax, 2 ;~ 0396:019D
cs=0x396;eip=0x0001a0; 	X(PUSH(ax));	// 4192 push    ax ;~ 0396:01A0
cs=0x396;eip=0x0001a1; 	T(MOV(ax, 0x0E792));	// 4193 mov     ax, 0E792h ;~ 0396:01A1
cs=0x396;eip=0x0001a4; 	X(PUSH(ax));	// 4194 push    ax ;~ 0396:01A4
cs=0x396;eip=0x0001a5; 	R(CALLF(sub_28b34,0));	// 4195 call    far ptr sub_28B34 ;~ 0396:01A5
cs=0x396;eip=0x0001aa; 	T(ADD(sp, 6));	// 4196 add     sp, 6 ;~ 0396:01AA
cs=0x396;eip=0x0001ad; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 4197 push    [bp+var_4] ;~ 0396:01AD
cs=0x396;eip=0x0001b0; 	R(CALLF(sub_27031,0));	// 4198 call    far ptr sub_27031 ;~ 0396:01B0
cs=0x396;eip=0x0001b5; 	T(ADD(sp, 2));	// 4199 add     sp, 2 ;~ 0396:01B5
cs=0x396;eip=0x0001b8; 	T(MOV(ax, 5));	// 4200 mov     ax, 5 ;~ 0396:01B8
cs=0x396;eip=0x0001bb; 	X(PUSH(ax));	// 4201 push    ax ;~ 0396:01BB
cs=0x396;eip=0x0001bc; 	T(MOV(ax, 2));	// 4202 mov     ax, 2 ;~ 0396:01BC
cs=0x396;eip=0x0001bf; 	X(PUSH(ax));	// 4203 push    ax ;~ 0396:01BF
cs=0x396;eip=0x0001c0; 	T(MOV(ax, 0x0E79C));	// 4204 mov     ax, 0E79Ch ;~ 0396:01C0
cs=0x396;eip=0x0001c3; 	X(PUSH(ax));	// 4205 push    ax ;~ 0396:01C3
cs=0x396;eip=0x0001c4; 	R(CALLF(sub_28b34,0));	// 4206 call    far ptr sub_28B34 ;~ 0396:01C4
cs=0x396;eip=0x0001c9; 	T(ADD(sp, 6));	// 4207 add     sp, 6 ;~ 0396:01C9
cs=0x396;eip=0x0001cc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 4208 push    [bp+var_8] ;~ 0396:01CC
cs=0x396;eip=0x0001cf; 	R(CALLF(sub_27031,0));	// 4209 call    far ptr sub_27031 ;~ 0396:01CF
cs=0x396;eip=0x0001d4; 	T(ADD(sp, 2));	// 4210 add     sp, 2 ;~ 0396:01D4
cs=0x396;eip=0x0001d7; 	T(MOV(ax, 5));	// 4211 mov     ax, 5 ;~ 0396:01D7
cs=0x396;eip=0x0001da; 	X(PUSH(ax));	// 4212 push    ax ;~ 0396:01DA
cs=0x396;eip=0x0001db; 	T(MOV(ax, 2));	// 4213 mov     ax, 2 ;~ 0396:01DB
cs=0x396;eip=0x0001de; 	X(PUSH(ax));	// 4214 push    ax ;~ 0396:01DE
cs=0x396;eip=0x0001df; 	T(MOV(ax, 0x0E7A6));	// 4215 mov     ax, 0E7A6h ;~ 0396:01DF
cs=0x396;eip=0x0001e2; 	X(PUSH(ax));	// 4216 push    ax ;~ 0396:01E2
cs=0x396;eip=0x0001e3; 	R(CALLF(sub_28b34,0));	// 4217 call    far ptr sub_28B34 ;~ 0396:01E3
cs=0x396;eip=0x0001e8; 	T(ADD(sp, 6));	// 4218 add     sp, 6 ;~ 0396:01E8
cs=0x396;eip=0x0001eb; 	X(MOV(word_2bee0, 0));	// 4219 mov     word_2BEE0, 0 ;~ 0396:01EB
cs=0x396;eip=0x0001f1; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 4220 mov     [bp+var_6], 0 ;~ 0396:01F1
cs=0x396;eip=0x0001f6; 	R(JMP(loc_121d9));	// 4221 jmp     loc_121D9 ;~ 0396:01F6
loc_1213a:
	// 4647 
cs=0x396;eip=0x0001fa; 	R(CALLF(sub_10f58,0));	// 4226 call    sub_10F58 ;~ 0396:01FA
cs=0x396;eip=0x0001ff; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 4227 mov     [bp+var_A], ax ;~ 0396:01FF
loc_12142:
	// 4648 
cs=0x396;eip=0x000202; 	T(MOV(ax, word_2bee0));	// 4230 mov     ax, word_2BEE0 ;~ 0396:0202
cs=0x396;eip=0x000205; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), ax));	// 4231 cmp     [bp+var_C], ax ;~ 0396:0205
cs=0x396;eip=0x000208; 	R(JZ(loc_1213a));	// 4232 jz      short loc_1213A ;~ 0396:0208
cs=0x396;eip=0x00020a; 	T(MOV(ax, 0x41));	// 4233 mov     ax, 41h ; 'A' ;~ 0396:020A
cs=0x396;eip=0x00020d; 	X(PUSH(ax));	// 4234 push    ax ;~ 0396:020D
cs=0x396;eip=0x00020e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 4235 push    [bp+var_6] ;~ 0396:020E
cs=0x396;eip=0x000211; 	R(CALLF(sub_26fb8,0));	// 4236 call    sub_26FB8 ;~ 0396:0211
cs=0x396;eip=0x000216; 	T(ADD(sp, 4));	// 4237 add     sp, 4 ;~ 0396:0216
cs=0x396;eip=0x000219; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 4238 push    [bp+var_8] ;~ 0396:0219
cs=0x396;eip=0x00021c; 	R(CALLF(sub_27031,0));	// 4239 call    far ptr sub_27031 ;~ 0396:021C
cs=0x396;eip=0x000221; 	T(ADD(sp, 2));	// 4240 add     sp, 2 ;~ 0396:0221
cs=0x396;eip=0x000224; 	T(MOV(ax, 5));	// 4241 mov     ax, 5 ;~ 0396:0224
cs=0x396;eip=0x000227; 	X(PUSH(ax));	// 4242 push    ax ;~ 0396:0227
cs=0x396;eip=0x000228; 	T(MOV(ax, 2));	// 4243 mov     ax, 2 ;~ 0396:0228
cs=0x396;eip=0x00022b; 	X(PUSH(ax));	// 4244 push    ax ;~ 0396:022B
cs=0x396;eip=0x00022c; 	T(MOV(ax, 0x0E7A6));	// 4245 mov     ax, 0E7A6h ;~ 0396:022C
cs=0x396;eip=0x00022f; 	X(PUSH(ax));	// 4246 push    ax ;~ 0396:022F
cs=0x396;eip=0x000230; 	R(CALLF(sub_285fb,0));	// 4247 call    far ptr sub_285FB ;~ 0396:0230
cs=0x396;eip=0x000235; 	T(ADD(sp, 6));	// 4248 add     sp, 6 ;~ 0396:0235
cs=0x396;eip=0x000238; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 4249 push    [bp+var_4] ;~ 0396:0238
cs=0x396;eip=0x00023b; 	R(CALLF(sub_27031,0));	// 4250 call    far ptr sub_27031 ;~ 0396:023B
cs=0x396;eip=0x000240; 	T(ADD(sp, 2));	// 4251 add     sp, 2 ;~ 0396:0240
cs=0x396;eip=0x000243; 	T(MOV(ax, 5));	// 4252 mov     ax, 5 ;~ 0396:0243
cs=0x396;eip=0x000246; 	X(PUSH(ax));	// 4253 push    ax ;~ 0396:0246
cs=0x396;eip=0x000247; 	T(MOV(ax, 2));	// 4254 mov     ax, 2 ;~ 0396:0247
cs=0x396;eip=0x00024a; 	X(PUSH(ax));	// 4255 push    ax ;~ 0396:024A
cs=0x396;eip=0x00024b; 	T(MOV(ax, 0x0E79C));	// 4256 mov     ax, 0E79Ch ;~ 0396:024B
cs=0x396;eip=0x00024e; 	X(PUSH(ax));	// 4257 push    ax ;~ 0396:024E
cs=0x396;eip=0x00024f; 	R(CALLF(sub_285fb,0));	// 4258 call    far ptr sub_285FB ;~ 0396:024F
cs=0x396;eip=0x000254; 	T(ADD(sp, 6));	// 4259 add     sp, 6 ;~ 0396:0254
cs=0x396;eip=0x000257; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 4260 push    [bp+var_2] ;~ 0396:0257
cs=0x396;eip=0x00025a; 	R(CALLF(sub_27031,0));	// 4261 call    far ptr sub_27031 ;~ 0396:025A
cs=0x396;eip=0x00025f; 	T(ADD(sp, 2));	// 4262 add     sp, 2 ;~ 0396:025F
cs=0x396;eip=0x000262; 	T(MOV(ax, 5));	// 4263 mov     ax, 5 ;~ 0396:0262
cs=0x396;eip=0x000265; 	X(PUSH(ax));	// 4264 push    ax ;~ 0396:0265
cs=0x396;eip=0x000266; 	T(MOV(ax, 2));	// 4265 mov     ax, 2 ;~ 0396:0266
cs=0x396;eip=0x000269; 	X(PUSH(ax));	// 4266 push    ax ;~ 0396:0269
cs=0x396;eip=0x00026a; 	T(MOV(ax, 0x0E792));	// 4267 mov     ax, 0E792h ;~ 0396:026A
cs=0x396;eip=0x00026d; 	X(PUSH(ax));	// 4268 push    ax ;~ 0396:026D
cs=0x396;eip=0x00026e; 	R(CALLF(sub_285fb,0));	// 4269 call    far ptr sub_285FB ;~ 0396:026E
cs=0x396;eip=0x000273; 	T(ADD(sp, 6));	// 4270 add     sp, 6 ;~ 0396:0273
cs=0x396;eip=0x000276; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 4271 push    [bp+var_E] ;~ 0396:0276
cs=0x396;eip=0x000279; 	R(CALLF(sub_27031,0));	// 4272 call    far ptr sub_27031 ;~ 0396:0279
cs=0x396;eip=0x00027e; 	T(ADD(sp, 2));	// 4273 add     sp, 2 ;~ 0396:027E
cs=0x396;eip=0x000281; 	T(MOV(ax, 5));	// 4274 mov     ax, 5 ;~ 0396:0281
cs=0x396;eip=0x000284; 	X(PUSH(ax));	// 4275 push    ax ;~ 0396:0284
cs=0x396;eip=0x000285; 	T(MOV(ax, 1));	// 4276 mov     ax, 1 ;~ 0396:0285
cs=0x396;eip=0x000288; 	X(PUSH(ax));	// 4277 push    ax ;~ 0396:0288
cs=0x396;eip=0x000289; 	T(MOV(ax, 0x0E788));	// 4278 mov     ax, 0E788h ;~ 0396:0289
cs=0x396;eip=0x00028c; 	X(PUSH(ax));	// 4279 push    ax ;~ 0396:028C
cs=0x396;eip=0x00028d; 	R(CALLF(sub_285fb,0));	// 4280 call    far ptr sub_285FB ;~ 0396:028D
cs=0x396;eip=0x000292; 	T(ADD(sp, 6));	// 4281 add     sp, 6 ;~ 0396:0292
cs=0x396;eip=0x000295; 	X(ADD(*(dw*)(raddr(ss,bp+var_6)), 2));	// 4282 add     [bp+var_6], 2 ;~ 0396:0295
loc_121d9:
	// 4649 
cs=0x396;eip=0x000299; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0x121));	// 4285 cmp     [bp+var_6], 121h ;~ 0396:0299
cs=0x396;eip=0x00029e; 	R(JGE(loc_12200));	// 4286 jge     short loc_12200 ;~ 0396:029E
cs=0x396;eip=0x0002a0; 	T(MOV(ax, word_2bee0));	// 4287 mov     ax, word_2BEE0 ;~ 0396:02A0
cs=0x396;eip=0x0002a3; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 4288 mov     [bp+var_C], ax ;~ 0396:02A3
cs=0x396;eip=0x0002a6; 	T(ax = bp+var_a);	// 4289 lea     ax, [bp+var_A] ;~ 0396:02A6
cs=0x396;eip=0x0002a9; 	X(PUSH(ax));	// 4290 push    ax ;~ 0396:02A9
cs=0x396;eip=0x0002aa; 	R(CALLF(sub_10f80,0));	// 4291 call    sub_10F80 ;~ 0396:02AA
cs=0x396;eip=0x0002af; 	T(ADD(sp, 2));	// 4292 add     sp, 2 ;~ 0396:02AF
cs=0x396;eip=0x0002b2; 	T(CMP(byte_2becc, 0));	// 4293 cmp     byte_2BECC, 0 ;~ 0396:02B2
cs=0x396;eip=0x0002b7; 	R(JZ(loc_121fc));	// 4294 jz      short loc_121FC ;~ 0396:02B7
cs=0x396;eip=0x0002b9; 	R(JMP(loc_12099));	// 4295 jmp     loc_12099 ;~ 0396:02B9
loc_121fc:
	// 4650 
cs=0x396;eip=0x0002bc; 	R(JMP(loc_12142));	// 4299 jmp     loc_12142 ;~ 0396:02BC
loc_12200:
	// 4651 
cs=0x396;eip=0x0002c0; 	T(CMP(word_3a178, 0x13));	// 4304 cmp     word_3A178, 13h ;~ 0396:02C0
cs=0x396;eip=0x0002c5; 	R(JNZ(loc_1220c));	// 4305 jnz     short loc_1220C ;~ 0396:02C5
cs=0x396;eip=0x0002c7; 	T(MOV(ax, 0x2C));	// 4306 mov     ax, 2Ch ; ',' ;~ 0396:02C7
cs=0x396;eip=0x0002ca; 	R(JMP(loc_1220f));	// 4307 jmp     short loc_1220F ;~ 0396:02CA
loc_1220c:
	// 4652 
cs=0x396;eip=0x0002cc; 	T(MOV(ax, 3));	// 4311 mov     ax, 3 ;~ 0396:02CC
loc_1220f:
	// 4653 
cs=0x396;eip=0x0002cf; 	X(PUSH(ax));	// 4314 push    ax ;~ 0396:02CF
cs=0x396;eip=0x0002d0; 	X(PUSH(cs));	// 4315 push    cs ;~ 0396:02D0
cs=0x396;eip=0x0002d1; 	R(CALL(sub_13ace,0));	// 4316 call    near ptr sub_13ACE ;~ 0396:02D1
cs=0x396;eip=0x0002d4; 	T(ADD(sp, 2));	// 4317 add     sp, 2 ;~ 0396:02D4
cs=0x396;eip=0x0002d7; 	T(CMP(byte_2becc, 0));	// 4318 cmp     byte_2BECC, 0 ;~ 0396:02D7
cs=0x396;eip=0x0002dc; 	R(JZ(loc_12221));	// 4319 jz      short loc_12221 ;~ 0396:02DC
cs=0x396;eip=0x0002de; 	R(JMP(loc_12099));	// 4320 jmp     loc_12099 ;~ 0396:02DE
loc_12221:
	// 4654 
cs=0x396;eip=0x0002e1; 	X(MOV(byte_34f30, 0));	// 4324 mov     byte_34F30, 0 ;~ 0396:02E1
cs=0x396;eip=0x0002e6; 	T(MOV(ax, 0x0E9F));	// 4325 mov     ax, 0E9Fh ;~ 0396:02E6
cs=0x396;eip=0x0002e9; 	X(PUSH(ax));	// 4326 push    ax ;~ 0396:02E9
cs=0x396;eip=0x0002ea; 	T(MOV(ax, 0x0A9C));	// 4327 mov     ax, 0A9Ch ;~ 0396:02EA
cs=0x396;eip=0x0002ed; 	X(PUSH(ax));	// 4328 push    ax ;~ 0396:02ED
cs=0x396;eip=0x0002ee; 	R(CALLF(sub_29b46,0));	// 4329 call    sub_29B46 ;~ 0396:02EE
cs=0x396;eip=0x0002f3; 	T(ADD(sp, 4));	// 4330 add     sp, 4 ;~ 0396:02F3
cs=0x396;eip=0x0002f6; 	T(MOV(ax, 0x0A9A));	// 4331 mov     ax, 0A9Ah ;~ 0396:02F6
cs=0x396;eip=0x0002f9; 	X(PUSH(ax));	// 4332 push    ax ;~ 0396:02F9
cs=0x396;eip=0x0002fa; 	R(CALLF(sub_10d62,0));	// 4333 call    sub_10D62 ;~ 0396:02FA
cs=0x396;eip=0x0002ff; 	T(ADD(sp, 2));	// 4334 add     sp, 2 ;~ 0396:02FF
cs=0x396;eip=0x000302; 	T(MOV(ax, 1));	// 4335 mov     ax, 1 ;~ 0396:0302
cs=0x396;eip=0x000305; 	X(MOV(word_2beda, ax));	// 4336 mov     word_2BEDA, ax ;~ 0396:0305
cs=0x396;eip=0x000308; 	X(PUSH(ax));	// 4337 push    ax ;~ 0396:0308
cs=0x396;eip=0x000309; 	R(CALLF(sub_2714e,0));	// 4338 call    far ptr sub_2714E ;~ 0396:0309
cs=0x396;eip=0x00030e; 	T(ADD(sp, 2));	// 4339 add     sp, 2 ;~ 0396:030E
cs=0x396;eip=0x000311; 	T(MOV(ax, 0x0EAC));	// 4340 mov     ax, 0EACh ;~ 0396:0311
cs=0x396;eip=0x000314; 	X(PUSH(ax));	// 4341 push    ax ;~ 0396:0314
cs=0x396;eip=0x000315; 	T(MOV(ax, 0x0A9C));	// 4342 mov     ax, 0A9Ch ;~ 0396:0315
cs=0x396;eip=0x000318; 	X(PUSH(ax));	// 4343 push    ax ;~ 0396:0318
cs=0x396;eip=0x000319; 	R(CALLF(sub_29b46,0));	// 4344 call    sub_29B46 ;~ 0396:0319
cs=0x396;eip=0x00031e; 	T(ADD(sp, 4));	// 4345 add     sp, 4 ;~ 0396:031E
cs=0x396;eip=0x000321; 	X(PUSH(word_38a9e));	// 4346 push    word_38A9E ;~ 0396:0321
cs=0x396;eip=0x000325; 	X(PUSH(word_38a9c));	// 4347 push    word_38A9C ;~ 0396:0325
cs=0x396;eip=0x000329; 	T(MOV(ax, 0x0A9A));	// 4348 mov     ax, 0A9Ah ;~ 0396:0329
cs=0x396;eip=0x00032c; 	X(PUSH(ax));	// 4349 push    ax ;~ 0396:032C
cs=0x396;eip=0x00032d; 	R(CALLF(sub_10ee0,0));	// 4350 call    sub_10EE0 ;~ 0396:032D
cs=0x396;eip=0x000332; 	T(ADD(sp, 6));	// 4351 add     sp, 6 ;~ 0396:0332
cs=0x396;eip=0x000335; 	T(MOV(ax, 0x2500));	// 4352 mov     ax, 2500h ;~ 0396:0335
cs=0x396;eip=0x000338; 	X(PUSH(ds));	// 4353 push    ds ;~ 0396:0338
cs=0x396;eip=0x000339; 	X(PUSH(ax));	// 4354 push    ax ;~ 0396:0339
cs=0x396;eip=0x00033a; 	X(PUSH(word_38a9e));	// 4355 push    word_38A9E ;~ 0396:033A
cs=0x396;eip=0x00033e; 	X(PUSH(word_38a9c));	// 4356 push    word_38A9C ;~ 0396:033E
cs=0x396;eip=0x000342; 	R(CALLF(sub_1ab87,0));	// 4357 call    sub_1AB87 ;~ 0396:0342
cs=0x396;eip=0x000347; 	T(ADD(sp, 8));	// 4358 add     sp, 8 ;~ 0396:0347
cs=0x396;eip=0x00034a; 	T(SUB(ax, ax));	// 4359 sub     ax, ax ;~ 0396:034A
cs=0x396;eip=0x00034c; 	X(PUSH(ax));	// 4360 push    ax ;~ 0396:034C
cs=0x396;eip=0x00034d; 	T(MOV(ax, 0x0C7));	// 4361 mov     ax, 0C7h ; '«' ;~ 0396:034D
cs=0x396;eip=0x000350; 	X(PUSH(ax));	// 4362 push    ax ;~ 0396:0350
cs=0x396;eip=0x000351; 	T(SUB(ax, ax));	// 4363 sub     ax, ax ;~ 0396:0351
cs=0x396;eip=0x000353; 	X(PUSH(ax));	// 4364 push    ax ;~ 0396:0353
cs=0x396;eip=0x000354; 	T(MOV(ax, 0x0A0));	// 4365 mov     ax, 0A0h ; '†' ;~ 0396:0354
cs=0x396;eip=0x000357; 	X(PUSH(ax));	// 4366 push    ax ;~ 0396:0357
cs=0x396;eip=0x000358; 	T(MOV(ax, 0x2464));	// 4367 mov     ax, 2464h ;~ 0396:0358
cs=0x396;eip=0x00035b; 	X(PUSH(ax));	// 4368 push    ax ;~ 0396:035B
cs=0x396;eip=0x00035c; 	T(MOV(ax, 0x2500));	// 4369 mov     ax, 2500h ;~ 0396:035C
cs=0x396;eip=0x00035f; 	X(PUSH(ax));	// 4370 push    ax ;~ 0396:035F
cs=0x396;eip=0x000360; 	X(PUSH(cs));	// 4371 push    cs ;~ 0396:0360
cs=0x396;eip=0x000361; 	R(CALL(sub_178ec,0));	// 4372 call    near ptr sub_178EC ;~ 0396:0361
cs=0x396;eip=0x000364; 	T(ADD(sp, 0x0C));	// 4373 add     sp, 0Ch ;~ 0396:0364
cs=0x396;eip=0x000367; 	T(MOV(ax, 0x0EB6));	// 4374 mov     ax, 0EB6h ;~ 0396:0367
cs=0x396;eip=0x00036a; 	X(PUSH(ax));	// 4375 push    ax ;~ 0396:036A
cs=0x396;eip=0x00036b; 	T(MOV(ax, 0x0A9C));	// 4376 mov     ax, 0A9Ch ;~ 0396:036B
cs=0x396;eip=0x00036e; 	X(PUSH(ax));	// 4377 push    ax ;~ 0396:036E
cs=0x396;eip=0x00036f; 	R(CALLF(sub_29b46,0));	// 4378 call    sub_29B46 ;~ 0396:036F
cs=0x396;eip=0x000374; 	T(ADD(sp, 4));	// 4379 add     sp, 4 ;~ 0396:0374
cs=0x396;eip=0x000377; 	X(PUSH(word_38a9e));	// 4380 push    word_38A9E ;~ 0396:0377
cs=0x396;eip=0x00037b; 	X(PUSH(word_38a9c));	// 4381 push    word_38A9C ;~ 0396:037B
cs=0x396;eip=0x00037f; 	T(MOV(ax, 0x0A9A));	// 4382 mov     ax, 0A9Ah ;~ 0396:037F
cs=0x396;eip=0x000382; 	X(PUSH(ax));	// 4383 push    ax ;~ 0396:0382
cs=0x396;eip=0x000383; 	R(CALLF(sub_10ee0,0));	// 4384 call    sub_10EE0 ;~ 0396:0383
cs=0x396;eip=0x000388; 	T(ADD(sp, 6));	// 4385 add     sp, 6 ;~ 0396:0388
cs=0x396;eip=0x00038b; 	T(MOV(ax, 0x2500));	// 4386 mov     ax, 2500h ;~ 0396:038B
cs=0x396;eip=0x00038e; 	X(PUSH(ds));	// 4387 push    ds ;~ 0396:038E
cs=0x396;eip=0x00038f; 	X(PUSH(ax));	// 4388 push    ax ;~ 0396:038F
cs=0x396;eip=0x000390; 	X(PUSH(word_38a9e));	// 4389 push    word_38A9E ;~ 0396:0390
cs=0x396;eip=0x000394; 	X(PUSH(word_38a9c));	// 4390 push    word_38A9C ;~ 0396:0394
cs=0x396;eip=0x000398; 	R(CALLF(sub_1ab87,0));	// 4391 call    sub_1AB87 ;~ 0396:0398
cs=0x396;eip=0x00039d; 	T(ADD(sp, 8));	// 4392 add     sp, 8 ;~ 0396:039D
cs=0x396;eip=0x0003a0; 	T(MOV(ax, 1));	// 4393 mov     ax, 1 ;~ 0396:03A0
cs=0x396;eip=0x0003a3; 	X(PUSH(ax));	// 4394 push    ax ;~ 0396:03A3
cs=0x396;eip=0x0003a4; 	T(MOV(ax, 0x63));	// 4395 mov     ax, 63h ; 'c' ;~ 0396:03A4
cs=0x396;eip=0x0003a7; 	X(PUSH(ax));	// 4396 push    ax ;~ 0396:03A7
cs=0x396;eip=0x0003a8; 	T(SUB(ax, ax));	// 4397 sub     ax, ax ;~ 0396:03A8
cs=0x396;eip=0x0003aa; 	X(PUSH(ax));	// 4398 push    ax ;~ 0396:03AA
cs=0x396;eip=0x0003ab; 	T(MOV(ax, 0x0A0));	// 4399 mov     ax, 0A0h ; '†' ;~ 0396:03AB
cs=0x396;eip=0x0003ae; 	X(PUSH(ax));	// 4400 push    ax ;~ 0396:03AE
cs=0x396;eip=0x0003af; 	T(MOV(ax, 0x2715));	// 4401 mov     ax, 2715h ;~ 0396:03AF
cs=0x396;eip=0x0003b2; 	X(PUSH(ax));	// 4402 push    ax ;~ 0396:03B2
cs=0x396;eip=0x0003b3; 	T(MOV(ax, 0x2500));	// 4403 mov     ax, 2500h ;~ 0396:03B3
cs=0x396;eip=0x0003b6; 	X(PUSH(ax));	// 4404 push    ax ;~ 0396:03B6
cs=0x396;eip=0x0003b7; 	X(PUSH(cs));	// 4405 push    cs ;~ 0396:03B7
cs=0x396;eip=0x0003b8; 	R(CALL(sub_178ec,0));	// 4406 call    near ptr sub_178EC ;~ 0396:03B8
cs=0x396;eip=0x0003bb; 	T(ADD(sp, 0x0C));	// 4407 add     sp, 0Ch ;~ 0396:03BB
cs=0x396;eip=0x0003be; 	R(CALLF(sub_1d787,0));	// 4408 call    sub_1D787 ;~ 0396:03BE
cs=0x396;eip=0x0003c3; 	X(PUSH(cs));	// 4409 push    cs ;~ 0396:03C3
cs=0x396;eip=0x0003c4; 	R(CALL(sub_13b22,0));	// 4410 call    near ptr sub_13B22 ;~ 0396:03C4
cs=0x396;eip=0x0003c7; 	T(CMP(byte_2becc, 0));	// 4411 cmp     byte_2BECC, 0 ;~ 0396:03C7
cs=0x396;eip=0x0003cc; 	R(JZ(loc_12311));	// 4412 jz      short loc_12311 ;~ 0396:03CC
cs=0x396;eip=0x0003ce; 	R(JMP(loc_12099));	// 4413 jmp     loc_12099 ;~ 0396:03CE
loc_12311:
	// 4655 
cs=0x396;eip=0x0003d1; 	T(MOV(ax, 1));	// 4417 mov     ax, 1 ;~ 0396:03D1
cs=0x396;eip=0x0003d4; 	X(MOV(word_2beda, ax));	// 4418 mov     word_2BEDA, ax ;~ 0396:03D4
cs=0x396;eip=0x0003d7; 	X(PUSH(ax));	// 4419 push    ax ;~ 0396:03D7
cs=0x396;eip=0x0003d8; 	R(CALLF(sub_2714e,0));	// 4420 call    far ptr sub_2714E ;~ 0396:03D8
cs=0x396;eip=0x0003dd; 	T(ADD(sp, 2));	// 4421 add     sp, 2 ;~ 0396:03DD
cs=0x396;eip=0x0003e0; 	X(MOV(byte_34f30, 0x80));	// 4422 mov     byte_34F30, 80h ; 'Ä' ;~ 0396:03E0
cs=0x396;eip=0x0003e5; 	T(MOV(ax, 0x0EC0));	// 4423 mov     ax, 0EC0h ;~ 0396:03E5
cs=0x396;eip=0x0003e8; 	X(PUSH(ax));	// 4424 push    ax ;~ 0396:03E8
cs=0x396;eip=0x0003e9; 	T(MOV(ax, 0x0A9C));	// 4425 mov     ax, 0A9Ch ;~ 0396:03E9
cs=0x396;eip=0x0003ec; 	X(PUSH(ax));	// 4426 push    ax ;~ 0396:03EC
cs=0x396;eip=0x0003ed; 	R(CALLF(sub_29b46,0));	// 4427 call    sub_29B46 ;~ 0396:03ED
cs=0x396;eip=0x0003f2; 	T(ADD(sp, 4));	// 4428 add     sp, 4 ;~ 0396:03F2
cs=0x396;eip=0x0003f5; 	T(MOV(ax, 0x0A9A));	// 4429 mov     ax, 0A9Ah ;~ 0396:03F5
cs=0x396;eip=0x0003f8; 	X(PUSH(ax));	// 4430 push    ax ;~ 0396:03F8
cs=0x396;eip=0x0003f9; 	R(CALLF(sub_10d62,0));	// 4431 call    sub_10D62 ;~ 0396:03F9
cs=0x396;eip=0x0003fe; 	T(ADD(sp, 2));	// 4432 add     sp, 2 ;~ 0396:03FE
cs=0x396;eip=0x000401; 	X(MOV(byte_34f30, 0));	// 4433 mov     byte_34F30, 0 ;~ 0396:0401
cs=0x396;eip=0x000406; 	T(CMP(word_3a178, 0x13));	// 4434 cmp     word_3A178, 13h ;~ 0396:0406
cs=0x396;eip=0x00040b; 	R(JNZ(loc_123a3));	// 4435 jnz     short loc_123A3 ;~ 0396:040B
cs=0x396;eip=0x00040d; 	T(MOV(ax, 0x0ECD));	// 4436 mov     ax, 0ECDh ;~ 0396:040D
cs=0x396;eip=0x000410; 	X(PUSH(ax));	// 4437 push    ax ;~ 0396:0410
cs=0x396;eip=0x000411; 	T(MOV(ax, 0x0A9C));	// 4438 mov     ax, 0A9Ch ;~ 0396:0411
cs=0x396;eip=0x000414; 	X(PUSH(ax));	// 4439 push    ax ;~ 0396:0414
cs=0x396;eip=0x000415; 	R(CALLF(sub_29b46,0));	// 4440 call    sub_29B46 ;~ 0396:0415
cs=0x396;eip=0x00041a; 	T(ADD(sp, 4));	// 4441 add     sp, 4 ;~ 0396:041A
cs=0x396;eip=0x00041d; 	X(PUSH(word_38a9e));	// 4442 push    word_38A9E ;~ 0396:041D
cs=0x396;eip=0x000421; 	X(PUSH(word_38a9c));	// 4443 push    word_38A9C ;~ 0396:0421
cs=0x396;eip=0x000425; 	T(MOV(ax, 0x0A9A));	// 4444 mov     ax, 0A9Ah ;~ 0396:0425
cs=0x396;eip=0x000428; 	X(PUSH(ax));	// 4445 push    ax ;~ 0396:0428
cs=0x396;eip=0x000429; 	R(CALLF(sub_10ee0,0));	// 4446 call    sub_10EE0 ;~ 0396:0429
cs=0x396;eip=0x00042e; 	T(ADD(sp, 6));	// 4447 add     sp, 6 ;~ 0396:042E
cs=0x396;eip=0x000431; 	T(MOV(ax, 0x2500));	// 4448 mov     ax, 2500h ;~ 0396:0431
cs=0x396;eip=0x000434; 	X(PUSH(ds));	// 4449 push    ds ;~ 0396:0434
cs=0x396;eip=0x000435; 	X(PUSH(ax));	// 4450 push    ax ;~ 0396:0435
cs=0x396;eip=0x000436; 	X(PUSH(word_38a9e));	// 4451 push    word_38A9E ;~ 0396:0436
cs=0x396;eip=0x00043a; 	X(PUSH(word_38a9c));	// 4452 push    word_38A9C ;~ 0396:043A
cs=0x396;eip=0x00043e; 	R(CALLF(sub_1ab87,0));	// 4453 call    sub_1AB87 ;~ 0396:043E
cs=0x396;eip=0x000443; 	T(ADD(sp, 8));	// 4454 add     sp, 8 ;~ 0396:0443
cs=0x396;eip=0x000446; 	T(SUB(ax, ax));	// 4455 sub     ax, ax ;~ 0396:0446
cs=0x396;eip=0x000448; 	X(PUSH(ax));	// 4456 push    ax ;~ 0396:0448
cs=0x396;eip=0x000449; 	T(MOV(ax, 0x0C7));	// 4457 mov     ax, 0C7h ; '«' ;~ 0396:0449
cs=0x396;eip=0x00044c; 	X(PUSH(ax));	// 4458 push    ax ;~ 0396:044C
cs=0x396;eip=0x00044d; 	T(SUB(ax, ax));	// 4459 sub     ax, ax ;~ 0396:044D
cs=0x396;eip=0x00044f; 	X(PUSH(ax));	// 4460 push    ax ;~ 0396:044F
cs=0x396;eip=0x000450; 	T(MOV(ax, 0x140));	// 4461 mov     ax, 140h ;~ 0396:0450
cs=0x396;eip=0x000453; 	X(PUSH(ax));	// 4462 push    ax ;~ 0396:0453
cs=0x396;eip=0x000454; 	T(MOV(ax, 0x2DE3));	// 4463 mov     ax, 2DE3h ;~ 0396:0454
cs=0x396;eip=0x000457; 	X(PUSH(ax));	// 4464 push    ax ;~ 0396:0457
cs=0x396;eip=0x000458; 	T(MOV(ax, 0x2500));	// 4465 mov     ax, 2500h ;~ 0396:0458
cs=0x396;eip=0x00045b; 	X(PUSH(ax));	// 4466 push    ax ;~ 0396:045B
cs=0x396;eip=0x00045c; 	X(PUSH(cs));	// 4467 push    cs ;~ 0396:045C
cs=0x396;eip=0x00045d; 	R(CALL(sub_178ec,0));	// 4468 call    near ptr sub_178EC ;~ 0396:045D
cs=0x396;eip=0x000460; 	T(ADD(sp, 0x0C));	// 4469 add     sp, 0Ch ;~ 0396:0460
loc_123a3:
	// 4656 
cs=0x396;eip=0x000463; 	T(MOV(ax, 0x0ED9));	// 4472 mov     ax, 0ED9h ;~ 0396:0463
cs=0x396;eip=0x000466; 	X(PUSH(ax));	// 4473 push    ax ;~ 0396:0466
cs=0x396;eip=0x000467; 	T(MOV(ax, 0x0A9C));	// 4474 mov     ax, 0A9Ch ;~ 0396:0467
cs=0x396;eip=0x00046a; 	X(PUSH(ax));	// 4475 push    ax ;~ 0396:046A
cs=0x396;eip=0x00046b; 	R(CALLF(sub_29b46,0));	// 4476 call    sub_29B46 ;~ 0396:046B
cs=0x396;eip=0x000470; 	T(ADD(sp, 4));	// 4477 add     sp, 4 ;~ 0396:0470
cs=0x396;eip=0x000473; 	X(PUSH(word_38a9e));	// 4478 push    word_38A9E ;~ 0396:0473
cs=0x396;eip=0x000477; 	X(PUSH(word_38a9c));	// 4479 push    word_38A9C ;~ 0396:0477
cs=0x396;eip=0x00047b; 	T(MOV(ax, 0x0A9A));	// 4480 mov     ax, 0A9Ah ;~ 0396:047B
cs=0x396;eip=0x00047e; 	X(PUSH(ax));	// 4481 push    ax ;~ 0396:047E
cs=0x396;eip=0x00047f; 	R(CALLF(sub_10ee0,0));	// 4482 call    sub_10EE0 ;~ 0396:047F
cs=0x396;eip=0x000484; 	T(ADD(sp, 6));	// 4483 add     sp, 6 ;~ 0396:0484
cs=0x396;eip=0x000487; 	T(MOV(ax, 0x2500));	// 4484 mov     ax, 2500h ;~ 0396:0487
cs=0x396;eip=0x00048a; 	X(PUSH(ds));	// 4485 push    ds ;~ 0396:048A
cs=0x396;eip=0x00048b; 	X(PUSH(ax));	// 4486 push    ax ;~ 0396:048B
cs=0x396;eip=0x00048c; 	X(PUSH(word_38a9e));	// 4487 push    word_38A9E ;~ 0396:048C
cs=0x396;eip=0x000490; 	X(PUSH(word_38a9c));	// 4488 push    word_38A9C ;~ 0396:0490
cs=0x396;eip=0x000494; 	R(CALLF(sub_1ab87,0));	// 4489 call    sub_1AB87 ;~ 0396:0494
cs=0x396;eip=0x000499; 	T(ADD(sp, 8));	// 4490 add     sp, 8 ;~ 0396:0499
cs=0x396;eip=0x00049c; 	T(CMP(word_3a178, 0x13));	// 4491 cmp     word_3A178, 13h ;~ 0396:049C
cs=0x396;eip=0x0004a1; 	R(JZ(loc_123e6));	// 4492 jz      short loc_123E6 ;~ 0396:04A1
cs=0x396;eip=0x0004a3; 	R(JMP(loc_12612));	// 4493 jmp     loc_12612 ;~ 0396:04A3
loc_123e6:
	// 4657 
cs=0x396;eip=0x0004a6; 	T(SUB(ax, ax));	// 4497 sub     ax, ax ;~ 0396:04A6
cs=0x396;eip=0x0004a8; 	X(PUSH(ax));	// 4498 push    ax ;~ 0396:04A8
cs=0x396;eip=0x0004a9; 	T(MOV(ax, 1));	// 4499 mov     ax, 1 ;~ 0396:04A9
cs=0x396;eip=0x0004ac; 	X(PUSH(ax));	// 4500 push    ax ;~ 0396:04AC
cs=0x396;eip=0x0004ad; 	T(MOV(ax, 0x86));	// 4501 mov     ax, 86h ; 'Ü' ;~ 0396:04AD
cs=0x396;eip=0x0004b0; 	X(PUSH(ax));	// 4502 push    ax ;~ 0396:04B0
cs=0x396;eip=0x0004b1; 	T(MOV(ax, 0x94));	// 4503 mov     ax, 94h ; 'î' ;~ 0396:04B1
cs=0x396;eip=0x0004b4; 	X(PUSH(ax));	// 4504 push    ax ;~ 0396:04B4
cs=0x396;eip=0x0004b5; 	T(MOV(ax, 0x91));	// 4505 mov     ax, 91h ; 'ë' ;~ 0396:04B5
cs=0x396;eip=0x0004b8; 	X(PUSH(ax));	// 4506 push    ax ;~ 0396:04B8
cs=0x396;eip=0x0004b9; 	T(MOV(ax, 0x89));	// 4507 mov     ax, 89h ; 'â' ;~ 0396:04B9
cs=0x396;eip=0x0004bc; 	X(PUSH(ax));	// 4508 push    ax ;~ 0396:04BC
cs=0x396;eip=0x0004bd; 	T(MOV(ax, 0x69));	// 4509 mov     ax, 69h ; 'i' ;~ 0396:04BD
cs=0x396;eip=0x0004c0; 	X(PUSH(ax));	// 4510 push    ax ;~ 0396:04C0
cs=0x396;eip=0x0004c1; 	T(MOV(ax, 0x53));	// 4511 mov     ax, 53h ; 'S' ;~ 0396:04C1
cs=0x396;eip=0x0004c4; 	X(PUSH(ax));	// 4512 push    ax ;~ 0396:04C4
cs=0x396;eip=0x0004c5; 	R(CALLF(sub_28183,0));	// 4513 call    far ptr sub_28183 ;~ 0396:04C5
cs=0x396;eip=0x0004ca; 	T(ADD(sp, 0x10));	// 4514 add     sp, 10h ;~ 0396:04CA
cs=0x396;eip=0x0004cd; 	T(MOV(ax, 2));	// 4515 mov     ax, 2 ;~ 0396:04CD
cs=0x396;eip=0x0004d0; 	X(PUSH(ax));	// 4516 push    ax ;~ 0396:04D0
cs=0x396;eip=0x0004d1; 	R(CALLF(sub_26ffb,0));	// 4517 call    sub_26FFB ;~ 0396:04D1
cs=0x396;eip=0x0004d6; 	T(ADD(sp, 2));	// 4518 add     sp, 2 ;~ 0396:04D6
cs=0x396;eip=0x0004d9; 	T(SUB(ax, ax));	// 4519 sub     ax, ax ;~ 0396:04D9
cs=0x396;eip=0x0004db; 	X(PUSH(ax));	// 4520 push    ax ;~ 0396:04DB
cs=0x396;eip=0x0004dc; 	T(MOV(ax, 1));	// 4521 mov     ax, 1 ;~ 0396:04DC
cs=0x396;eip=0x0004df; 	X(PUSH(ax));	// 4522 push    ax ;~ 0396:04DF
cs=0x396;eip=0x0004e0; 	T(MOV(ax, 0x87));	// 4523 mov     ax, 87h ; 'á' ;~ 0396:04E0
cs=0x396;eip=0x0004e3; 	X(PUSH(ax));	// 4524 push    ax ;~ 0396:04E3
cs=0x396;eip=0x0004e4; 	T(MOV(ax, 0x93));	// 4525 mov     ax, 93h ; 'ì' ;~ 0396:04E4
cs=0x396;eip=0x0004e7; 	X(PUSH(ax));	// 4526 push    ax ;~ 0396:04E7
cs=0x396;eip=0x0004e8; 	T(MOV(ax, 0x91));	// 4527 mov     ax, 91h ; 'ë' ;~ 0396:04E8
cs=0x396;eip=0x0004eb; 	X(PUSH(ax));	// 4528 push    ax ;~ 0396:04EB
cs=0x396;eip=0x0004ec; 	T(MOV(ax, 0x88));	// 4529 mov     ax, 88h ; 'à' ;~ 0396:04EC
cs=0x396;eip=0x0004ef; 	X(PUSH(ax));	// 4530 push    ax ;~ 0396:04EF
cs=0x396;eip=0x0004f0; 	T(MOV(ax, 0x52));	// 4531 mov     ax, 52h ; 'R' ;~ 0396:04F0
cs=0x396;eip=0x0004f3; 	X(PUSH(ax));	// 4532 push    ax ;~ 0396:04F3
cs=0x396;eip=0x0004f4; 	T(MOV(ax, 0x3A));	// 4533 mov     ax, 3Ah ; ':' ;~ 0396:04F4
cs=0x396;eip=0x0004f7; 	X(PUSH(ax));	// 4534 push    ax ;~ 0396:04F7
cs=0x396;eip=0x0004f8; 	R(CALLF(sub_28183,0));	// 4535 call    far ptr sub_28183 ;~ 0396:04F8
cs=0x396;eip=0x0004fd; 	T(ADD(sp, 0x10));	// 4536 add     sp, 10h ;~ 0396:04FD
cs=0x396;eip=0x000500; 	T(MOV(ax, 2));	// 4537 mov     ax, 2 ;~ 0396:0500
cs=0x396;eip=0x000503; 	X(PUSH(ax));	// 4538 push    ax ;~ 0396:0503
cs=0x396;eip=0x000504; 	R(CALLF(sub_26ffb,0));	// 4539 call    sub_26FFB ;~ 0396:0504
cs=0x396;eip=0x000509; 	T(ADD(sp, 2));	// 4540 add     sp, 2 ;~ 0396:0509
cs=0x396;eip=0x00050c; 	T(SUB(ax, ax));	// 4541 sub     ax, ax ;~ 0396:050C
cs=0x396;eip=0x00050e; 	X(PUSH(ax));	// 4542 push    ax ;~ 0396:050E
cs=0x396;eip=0x00050f; 	T(MOV(ax, 1));	// 4543 mov     ax, 1 ;~ 0396:050F
cs=0x396;eip=0x000512; 	X(PUSH(ax));	// 4544 push    ax ;~ 0396:0512
cs=0x396;eip=0x000513; 	T(MOV(ax, 0x87));	// 4545 mov     ax, 87h ; 'á' ;~ 0396:0513
cs=0x396;eip=0x000516; 	X(PUSH(ax));	// 4546 push    ax ;~ 0396:0516
cs=0x396;eip=0x000517; 	T(MOV(ax, 0x92));	// 4547 mov     ax, 92h ; 'í' ;~ 0396:0517
cs=0x396;eip=0x00051a; 	X(PUSH(ax));	// 4548 push    ax ;~ 0396:051A
cs=0x396;eip=0x00051b; 	T(MOV(ax, 0x91));	// 4549 mov     ax, 91h ; 'ë' ;~ 0396:051B
cs=0x396;eip=0x00051e; 	X(PUSH(ax));	// 4550 push    ax ;~ 0396:051E
cs=0x396;eip=0x00051f; 	T(MOV(ax, 0x87));	// 4551 mov     ax, 87h ; 'á' ;~ 0396:051F
cs=0x396;eip=0x000522; 	X(PUSH(ax));	// 4552 push    ax ;~ 0396:0522
cs=0x396;eip=0x000523; 	T(MOV(ax, 0x39));	// 4553 mov     ax, 39h ; '9' ;~ 0396:0523
cs=0x396;eip=0x000526; 	X(PUSH(ax));	// 4554 push    ax ;~ 0396:0526
cs=0x396;eip=0x000527; 	T(MOV(ax, 0x1E));	// 4555 mov     ax, 1Eh ;~ 0396:0527
cs=0x396;eip=0x00052a; 	X(PUSH(ax));	// 4556 push    ax ;~ 0396:052A
cs=0x396;eip=0x00052b; 	R(CALLF(sub_28183,0));	// 4557 call    far ptr sub_28183 ;~ 0396:052B
cs=0x396;eip=0x000530; 	T(ADD(sp, 0x10));	// 4558 add     sp, 10h ;~ 0396:0530
cs=0x396;eip=0x000533; 	T(MOV(ax, 2));	// 4559 mov     ax, 2 ;~ 0396:0533
cs=0x396;eip=0x000536; 	X(PUSH(ax));	// 4560 push    ax ;~ 0396:0536
cs=0x396;eip=0x000537; 	R(CALLF(sub_26ffb,0));	// 4561 call    sub_26FFB ;~ 0396:0537
cs=0x396;eip=0x00053c; 	T(ADD(sp, 2));	// 4562 add     sp, 2 ;~ 0396:053C
cs=0x396;eip=0x00053f; 	T(SUB(ax, ax));	// 4563 sub     ax, ax ;~ 0396:053F
cs=0x396;eip=0x000541; 	X(PUSH(ax));	// 4564 push    ax ;~ 0396:0541
cs=0x396;eip=0x000542; 	T(MOV(ax, 1));	// 4565 mov     ax, 1 ;~ 0396:0542
cs=0x396;eip=0x000545; 	X(PUSH(ax));	// 4566 push    ax ;~ 0396:0545
cs=0x396;eip=0x000546; 	T(MOV(ax, 0x88));	// 4567 mov     ax, 88h ; 'à' ;~ 0396:0546
cs=0x396;eip=0x000549; 	X(PUSH(ax));	// 4568 push    ax ;~ 0396:0549
cs=0x396;eip=0x00054a; 	T(MOV(ax, 0x91));	// 4569 mov     ax, 91h ; 'ë' ;~ 0396:054A
cs=0x396;eip=0x00054d; 	X(PUSH(ax));	// 4570 push    ax ;~ 0396:054D
cs=0x396;eip=0x00054e; 	X(PUSH(ax));	// 4571 push    ax ;~ 0396:054E
cs=0x396;eip=0x00054f; 	T(MOV(ax, 0x86));	// 4572 mov     ax, 86h ; 'Ü' ;~ 0396:054F
cs=0x396;eip=0x000552; 	X(PUSH(ax));	// 4573 push    ax ;~ 0396:0552
cs=0x396;eip=0x000553; 	T(MOV(ax, 0x1D));	// 4574 mov     ax, 1Dh ;~ 0396:0553
cs=0x396;eip=0x000556; 	X(PUSH(ax));	// 4575 push    ax ;~ 0396:0556
cs=0x396;eip=0x000557; 	T(SUB(ax, ax));	// 4576 sub     ax, ax ;~ 0396:0557
cs=0x396;eip=0x000559; 	X(PUSH(ax));	// 4577 push    ax ;~ 0396:0559
cs=0x396;eip=0x00055a; 	R(CALLF(sub_28183,0));	// 4578 call    far ptr sub_28183 ;~ 0396:055A
cs=0x396;eip=0x00055f; 	T(ADD(sp, 0x10));	// 4579 add     sp, 10h ;~ 0396:055F
cs=0x396;eip=0x000562; 	T(MOV(ax, 2));	// 4580 mov     ax, 2 ;~ 0396:0562
cs=0x396;eip=0x000565; 	X(PUSH(ax));	// 4581 push    ax ;~ 0396:0565
cs=0x396;eip=0x000566; 	R(CALLF(sub_26ffb,0));	// 4582 call    sub_26FFB ;~ 0396:0566
cs=0x396;eip=0x00056b; 	T(ADD(sp, 2));	// 4583 add     sp, 2 ;~ 0396:056B
cs=0x396;eip=0x00056e; 	T(SUB(ax, ax));	// 4584 sub     ax, ax ;~ 0396:056E
cs=0x396;eip=0x000570; 	X(PUSH(ax));	// 4585 push    ax ;~ 0396:0570
cs=0x396;eip=0x000571; 	T(MOV(ax, 1));	// 4586 mov     ax, 1 ;~ 0396:0571
cs=0x396;eip=0x000574; 	X(PUSH(ax));	// 4587 push    ax ;~ 0396:0574
cs=0x396;eip=0x000575; 	T(MOV(ax, 0x8A));	// 4588 mov     ax, 8Ah ; 'ä' ;~ 0396:0575
cs=0x396;eip=0x000578; 	X(PUSH(ax));	// 4589 push    ax ;~ 0396:0578
cs=0x396;eip=0x000579; 	T(MOV(ax, 0x8F));	// 4590 mov     ax, 8Fh ; 'è' ;~ 0396:0579
cs=0x396;eip=0x00057c; 	X(PUSH(ax));	// 4591 push    ax ;~ 0396:057C
cs=0x396;eip=0x00057d; 	T(MOV(ax, 0x0A5));	// 4592 mov     ax, 0A5h ; '•' ;~ 0396:057D
cs=0x396;eip=0x000580; 	X(PUSH(ax));	// 4593 push    ax ;~ 0396:0580
cs=0x396;eip=0x000581; 	T(MOV(ax, 0x98));	// 4594 mov     ax, 98h ;~ 0396:0581
cs=0x396;eip=0x000584; 	X(PUSH(ax));	// 4595 push    ax ;~ 0396:0584
cs=0x396;eip=0x000585; 	T(MOV(ax, 0x0FF));	// 4596 mov     ax, 0FFh ;~ 0396:0585
cs=0x396;eip=0x000588; 	X(PUSH(ax));	// 4597 push    ax ;~ 0396:0588
cs=0x396;eip=0x000589; 	T(MOV(ax, 0x0DF));	// 4598 mov     ax, 0DFh ; 'ﬂ' ;~ 0396:0589
cs=0x396;eip=0x00058c; 	X(PUSH(ax));	// 4599 push    ax ;~ 0396:058C
cs=0x396;eip=0x00058d; 	R(CALLF(sub_28183,0));	// 4600 call    far ptr sub_28183 ;~ 0396:058D
cs=0x396;eip=0x000592; 	T(ADD(sp, 0x10));	// 4601 add     sp, 10h ;~ 0396:0592
cs=0x396;eip=0x000595; 	T(MOV(ax, 2));	// 4602 mov     ax, 2 ;~ 0396:0595
cs=0x396;eip=0x000598; 	X(PUSH(ax));	// 4603 push    ax ;~ 0396:0598
cs=0x396;eip=0x000599; 	R(CALLF(sub_26ffb,0));	// 4604 call    sub_26FFB ;~ 0396:0599
cs=0x396;eip=0x00059e; 	T(ADD(sp, 2));	// 4605 add     sp, 2 ;~ 0396:059E
cs=0x396;eip=0x0005a1; 	T(SUB(ax, ax));	// 4606 sub     ax, ax ;~ 0396:05A1
cs=0x396;eip=0x0005a3; 	X(PUSH(ax));	// 4607 push    ax ;~ 0396:05A3
cs=0x396;eip=0x0005a4; 	T(MOV(ax, 1));	// 4608 mov     ax, 1 ;~ 0396:05A4
cs=0x396;eip=0x0005a7; 	X(PUSH(ax));	// 4609 push    ax ;~ 0396:05A7
cs=0x396;eip=0x0005a8; 	T(MOV(ax, 0x8B));	// 4610 mov     ax, 8Bh ; 'ã' ;~ 0396:05A8
cs=0x396;eip=0x0005ab; 	X(PUSH(ax));	// 4611 push    ax ;~ 0396:05AB
cs=0x396;eip=0x0005ac; 	T(MOV(ax, 0x8E));	// 4612 mov     ax, 8Eh ; 'é' ;~ 0396:05AC
cs=0x396;eip=0x0005af; 	X(PUSH(ax));	// 4613 push    ax ;~ 0396:05AF
cs=0x396;eip=0x0005b0; 	T(MOV(ax, 0x9C));	// 4614 mov     ax, 9Ch ; 'ú' ;~ 0396:05B0
cs=0x396;eip=0x0005b3; 	X(PUSH(ax));	// 4615 push    ax ;~ 0396:05B3
cs=0x396;eip=0x0005b4; 	T(MOV(ax, 0x8D));	// 4616 mov     ax, 8Dh ; 'ç' ;~ 0396:05B4
cs=0x396;eip=0x0005b7; 	X(PUSH(ax));	// 4617 push    ax ;~ 0396:05B7
cs=0x396;eip=0x0005b8; 	T(MOV(ax, 0x0D3));	// 4618 mov     ax, 0D3h ; '”' ;~ 0396:05B8
cs=0x396;eip=0x0005bb; 	X(PUSH(ax));	// 4619 push    ax ;~ 0396:05BB
cs=0x396;eip=0x0005bc; 	T(MOV(ax, 0x0B0));	// 4620 mov     ax, 0B0h ; '∞' ;~ 0396:05BC
cs=0x396;eip=0x0005bf; 	X(PUSH(ax));	// 4621 push    ax ;~ 0396:05BF
cs=0x396;eip=0x0005c0; 	R(CALLF(sub_28183,0));	// 4622 call    far ptr sub_28183 ;~ 0396:05C0
cs=0x396;eip=0x0005c5; 	T(ADD(sp, 0x10));	// 4623 add     sp, 10h ;~ 0396:05C5
cs=0x396;eip=0x0005c8; 	T(MOV(ax, 2));	// 4624 mov     ax, 2 ;~ 0396:05C8
cs=0x396;eip=0x0005cb; 	X(PUSH(ax));	// 4625 push    ax ;~ 0396:05CB
cs=0x396;eip=0x0005cc; 	R(CALLF(sub_26ffb,0));	// 4626 call    sub_26FFB ;~ 0396:05CC
cs=0x396;eip=0x0005d1; 	T(ADD(sp, 2));	// 4627 add     sp, 2 ;~ 0396:05D1
cs=0x396;eip=0x0005d4; 	T(SUB(ax, ax));	// 4628 sub     ax, ax ;~ 0396:05D4
cs=0x396;eip=0x0005d6; 	X(PUSH(ax));	// 4629 push    ax ;~ 0396:05D6
cs=0x396;eip=0x0005d7; 	T(MOV(ax, 1));	// 4630 mov     ax, 1 ;~ 0396:05D7
cs=0x396;eip=0x0005da; 	X(PUSH(ax));	// 4631 push    ax ;~ 0396:05DA
cs=0x396;eip=0x0005db; 	T(MOV(ax, 0x91));	// 4632 mov     ax, 91h ; 'ë' ;~ 0396:05DB
cs=0x396;eip=0x0005de; 	X(PUSH(ax));	// 4633 push    ax ;~ 0396:05DE
cs=0x396;eip=0x0005df; 	T(MOV(ax, 0x87));	// 4634 mov     ax, 87h ; 'á' ;~ 0396:05DF
cs=0x396;eip=0x0005e2; 	X(PUSH(ax));	// 4635 push    ax ;~ 0396:05E2
cs=0x396;eip=0x0005e3; 	T(MOV(ax, 0x9C));	// 4636 mov     ax, 9Ch ; 'ú' ;~ 0396:05E3
cs=0x396;eip=0x0005e6; 	X(PUSH(ax));	// 4637 push    ax ;~ 0396:05E6
cs=0x396;eip=0x0005e7; 	T(MOV(ax, 0x86));	// 4638 mov     ax, 86h ; 'Ü' ;~ 0396:05E7
cs=0x396;eip=0x0005ea; 	X(PUSH(ax));	// 4639 push    ax ;~ 0396:05EA
cs=0x396;eip=0x0005eb; 	T(MOV(ax, 0x0AF));	// 4640 mov     ax, 0AFh ; 'Ø' ;~ 0396:05EB
cs=0x396;eip=0x0005ee; 	X(PUSH(ax));	// 4641 push    ax ;~ 0396:05EE
cs=0x396;eip=0x0005ef; 	T(MOV(ax, 0x7E));	// 4642 mov     ax, 7Eh ; '~' ;~ 0396:05EF
cs=0x396;eip=0x0005f2; 	X(PUSH(ax));	// 4643 push    ax ;~ 0396:05F2
cs=0x396;eip=0x0005f3; 	R(CALLF(sub_28183,0));	// 4644 call    far ptr sub_28183 ;~ 0396:05F3
cs=0x396;eip=0x0005f8; 	T(ADD(sp, 0x10));	// 4645 add     sp, 10h ;~ 0396:05F8
cs=0x396;eip=0x0005fb; 	T(MOV(ax, 2));	// 4646 mov     ax, 2 ;~ 0396:05FB
cs=0x396;eip=0x0005fe; 	X(PUSH(ax));	// 4647 push    ax ;~ 0396:05FE
cs=0x396;eip=0x0005ff; 	R(CALLF(sub_26ffb,0));	// 4648 call    sub_26FFB ;~ 0396:05FF
cs=0x396;eip=0x000604; 	T(ADD(sp, 2));	// 4649 add     sp, 2 ;~ 0396:0604
cs=0x396;eip=0x000607; 	T(SUB(ax, ax));	// 4650 sub     ax, ax ;~ 0396:0607
cs=0x396;eip=0x000609; 	X(PUSH(ax));	// 4651 push    ax ;~ 0396:0609
cs=0x396;eip=0x00060a; 	T(MOV(ax, 1));	// 4652 mov     ax, 1 ;~ 0396:060A
cs=0x396;eip=0x00060d; 	X(PUSH(ax));	// 4653 push    ax ;~ 0396:060D
cs=0x396;eip=0x00060e; 	T(MOV(ax, 0x94));	// 4654 mov     ax, 94h ; 'î' ;~ 0396:060E
cs=0x396;eip=0x000611; 	X(PUSH(ax));	// 4655 push    ax ;~ 0396:0611
cs=0x396;eip=0x000612; 	T(MOV(ax, 0x80));	// 4656 mov     ax, 80h ; 'Ä' ;~ 0396:0612
cs=0x396;eip=0x000615; 	X(PUSH(ax));	// 4657 push    ax ;~ 0396:0615
cs=0x396;eip=0x000616; 	T(MOV(ax, 0x0A5));	// 4658 mov     ax, 0A5h ; '•' ;~ 0396:0616
cs=0x396;eip=0x000619; 	X(PUSH(ax));	// 4659 push    ax ;~ 0396:0619
cs=0x396;eip=0x00061a; 	T(MOV(ax, 0x8A));	// 4660 mov     ax, 8Ah ; 'ä' ;~ 0396:061A
cs=0x396;eip=0x00061d; 	X(PUSH(ax));	// 4661 push    ax ;~ 0396:061D
cs=0x396;eip=0x00061e; 	T(MOV(ax, 0x13F));	// 4662 mov     ax, 13Fh ;~ 0396:061E
cs=0x396;eip=0x000621; 	X(PUSH(ax));	// 4663 push    ax ;~ 0396:0621
cs=0x396;eip=0x000622; 	T(MOV(ax, 0x101));	// 4664 mov     ax, 101h ;~ 0396:0622
cs=0x396;eip=0x000625; 	X(PUSH(ax));	// 4665 push    ax ;~ 0396:0625
cs=0x396;eip=0x000626; 	R(CALLF(sub_28183,0));	// 4666 call    far ptr sub_28183 ;~ 0396:0626
cs=0x396;eip=0x00062b; 	T(ADD(sp, 0x10));	// 4667 add     sp, 10h ;~ 0396:062B
cs=0x396;eip=0x00062e; 	T(MOV(ax, 2));	// 4668 mov     ax, 2 ;~ 0396:062E
cs=0x396;eip=0x000631; 	X(PUSH(ax));	// 4669 push    ax ;~ 0396:0631
cs=0x396;eip=0x000632; 	R(CALLF(sub_26ffb,0));	// 4670 call    sub_26FFB ;~ 0396:0632
cs=0x396;eip=0x000637; 	T(ADD(sp, 2));	// 4671 add     sp, 2 ;~ 0396:0637
cs=0x396;eip=0x00063a; 	T(SUB(ax, ax));	// 4672 sub     ax, ax ;~ 0396:063A
cs=0x396;eip=0x00063c; 	X(PUSH(ax));	// 4673 push    ax ;~ 0396:063C
cs=0x396;eip=0x00063d; 	T(MOV(ax, 1));	// 4674 mov     ax, 1 ;~ 0396:063D
cs=0x396;eip=0x000640; 	X(PUSH(ax));	// 4675 push    ax ;~ 0396:0640
cs=0x396;eip=0x000641; 	T(MOV(ax, 0x98));	// 4676 mov     ax, 98h ;~ 0396:0641
cs=0x396;eip=0x000644; 	X(PUSH(ax));	// 4677 push    ax ;~ 0396:0644
cs=0x396;eip=0x000645; 	T(MOV(ax, 0x78));	// 4678 mov     ax, 78h ; 'x' ;~ 0396:0645
cs=0x396;eip=0x000648; 	X(PUSH(ax));	// 4679 push    ax ;~ 0396:0648
cs=0x396;eip=0x000649; 	T(MOV(ax, 0x0C7));	// 4680 mov     ax, 0C7h ; '«' ;~ 0396:0649
cs=0x396;eip=0x00064c; 	X(PUSH(ax));	// 4681 push    ax ;~ 0396:064C
cs=0x396;eip=0x00064d; 	T(MOV(ax, 0x0A6));	// 4682 mov     ax, 0A6h ; '¶' ;~ 0396:064D
cs=0x396;eip=0x000650; 	X(PUSH(ax));	// 4683 push    ax ;~ 0396:0650
cs=0x396;eip=0x000651; 	T(MOV(ax, 0x12D));	// 4684 mov     ax, 12Dh ;~ 0396:0651
cs=0x396;eip=0x000654; 	X(PUSH(ax));	// 4685 push    ax ;~ 0396:0654
cs=0x396;eip=0x000655; 	T(MOV(ax, 0x0DF));	// 4686 mov     ax, 0DFh ; 'ﬂ' ;~ 0396:0655
cs=0x396;eip=0x000658; 	X(PUSH(ax));	// 4687 push    ax ;~ 0396:0658
cs=0x396;eip=0x000659; 	R(CALLF(sub_28183,0));	// 4688 call    far ptr sub_28183 ;~ 0396:0659
cs=0x396;eip=0x00065e; 	T(ADD(sp, 0x10));	// 4689 add     sp, 10h ;~ 0396:065E
cs=0x396;eip=0x000661; 	T(MOV(ax, 2));	// 4690 mov     ax, 2 ;~ 0396:0661
cs=0x396;eip=0x000664; 	X(PUSH(ax));	// 4691 push    ax ;~ 0396:0664
cs=0x396;eip=0x000665; 	R(CALLF(sub_26ffb,0));	// 4692 call    sub_26FFB ;~ 0396:0665
cs=0x396;eip=0x00066a; 	T(ADD(sp, 2));	// 4693 add     sp, 2 ;~ 0396:066A
cs=0x396;eip=0x00066d; 	T(SUB(ax, ax));	// 4694 sub     ax, ax ;~ 0396:066D
cs=0x396;eip=0x00066f; 	X(PUSH(ax));	// 4695 push    ax ;~ 0396:066F
cs=0x396;eip=0x000670; 	T(MOV(ax, 1));	// 4696 mov     ax, 1 ;~ 0396:0670
cs=0x396;eip=0x000673; 	X(PUSH(ax));	// 4697 push    ax ;~ 0396:0673
cs=0x396;eip=0x000674; 	T(MOV(ax, 0x9E));	// 4698 mov     ax, 9Eh ; 'û' ;~ 0396:0674
cs=0x396;eip=0x000677; 	X(PUSH(ax));	// 4699 push    ax ;~ 0396:0677
cs=0x396;eip=0x000678; 	T(MOV(ax, 0x6F));	// 4700 mov     ax, 6Fh ; 'o' ;~ 0396:0678
cs=0x396;eip=0x00067b; 	X(PUSH(ax));	// 4701 push    ax ;~ 0396:067B
cs=0x396;eip=0x00067c; 	T(MOV(ax, 0x0C7));	// 4702 mov     ax, 0C7h ; '«' ;~ 0396:067C
cs=0x396;eip=0x00067f; 	X(PUSH(ax));	// 4703 push    ax ;~ 0396:067F
cs=0x396;eip=0x000680; 	T(MOV(ax, 0x9D));	// 4704 mov     ax, 9Dh ; 'ù' ;~ 0396:0680
cs=0x396;eip=0x000683; 	X(PUSH(ax));	// 4705 push    ax ;~ 0396:0683
cs=0x396;eip=0x000684; 	T(MOV(ax, 0x0DE));	// 4706 mov     ax, 0DEh ; 'ﬁ' ;~ 0396:0684
cs=0x396;eip=0x000687; 	X(PUSH(ax));	// 4707 push    ax ;~ 0396:0687
cs=0x396;eip=0x000688; 	T(MOV(ax, 0x7E));	// 4708 mov     ax, 7Eh ; '~' ;~ 0396:0688
cs=0x396;eip=0x00068b; 	X(PUSH(ax));	// 4709 push    ax ;~ 0396:068B
cs=0x396;eip=0x00068c; 	R(CALLF(sub_28183,0));	// 4710 call    far ptr sub_28183 ;~ 0396:068C
cs=0x396;eip=0x000691; 	T(ADD(sp, 0x10));	// 4711 add     sp, 10h ;~ 0396:0691
cs=0x396;eip=0x000694; 	T(MOV(ax, 2));	// 4712 mov     ax, 2 ;~ 0396:0694
cs=0x396;eip=0x000697; 	X(PUSH(ax));	// 4713 push    ax ;~ 0396:0697
cs=0x396;eip=0x000698; 	R(CALLF(sub_26ffb,0));	// 4714 call    sub_26FFB ;~ 0396:0698
cs=0x396;eip=0x00069d; 	T(ADD(sp, 2));	// 4715 add     sp, 2 ;~ 0396:069D
cs=0x396;eip=0x0006a0; 	T(SUB(ax, ax));	// 4716 sub     ax, ax ;~ 0396:06A0
cs=0x396;eip=0x0006a2; 	X(PUSH(ax));	// 4717 push    ax ;~ 0396:06A2
cs=0x396;eip=0x0006a3; 	T(MOV(ax, 1));	// 4718 mov     ax, 1 ;~ 0396:06A3
cs=0x396;eip=0x0006a6; 	X(PUSH(ax));	// 4719 push    ax ;~ 0396:06A6
cs=0x396;eip=0x0006a7; 	T(MOV(ax, 0x0A5));	// 4720 mov     ax, 0A5h ; '•' ;~ 0396:06A7
cs=0x396;eip=0x0006aa; 	X(PUSH(ax));	// 4721 push    ax ;~ 0396:06AA
cs=0x396;eip=0x0006ab; 	T(MOV(ax, 0x61));	// 4722 mov     ax, 61h ; 'a' ;~ 0396:06AB
cs=0x396;eip=0x0006ae; 	X(PUSH(ax));	// 4723 push    ax ;~ 0396:06AE
cs=0x396;eip=0x0006af; 	T(MOV(ax, 0x0C7));	// 4724 mov     ax, 0C7h ; '«' ;~ 0396:06AF
cs=0x396;eip=0x0006b2; 	X(PUSH(ax));	// 4725 push    ax ;~ 0396:06B2
cs=0x396;eip=0x0006b3; 	T(MOV(ax, 0x92));	// 4726 mov     ax, 92h ; 'í' ;~ 0396:06B3
cs=0x396;eip=0x0006b6; 	X(PUSH(ax));	// 4727 push    ax ;~ 0396:06B6
cs=0x396;eip=0x0006b7; 	T(MOV(ax, 0x7D));	// 4728 mov     ax, 7Dh ; '}' ;~ 0396:06B7
cs=0x396;eip=0x0006ba; 	X(PUSH(ax));	// 4729 push    ax ;~ 0396:06BA
cs=0x396;eip=0x0006bb; 	T(SUB(ax, ax));	// 4730 sub     ax, ax ;~ 0396:06BB
cs=0x396;eip=0x0006bd; 	X(PUSH(ax));	// 4731 push    ax ;~ 0396:06BD
cs=0x396;eip=0x0006be; 	R(CALLF(sub_28183,0));	// 4732 call    far ptr sub_28183 ;~ 0396:06BE
cs=0x396;eip=0x0006c3; 	T(ADD(sp, 0x10));	// 4733 add     sp, 10h ;~ 0396:06C3
cs=0x396;eip=0x0006c6; 	T(MOV(ax, 2));	// 4734 mov     ax, 2 ;~ 0396:06C6
cs=0x396;eip=0x0006c9; 	X(PUSH(ax));	// 4735 push    ax ;~ 0396:06C9
cs=0x396;eip=0x0006ca; 	R(CALLF(sub_26ffb,0));	// 4736 call    sub_26FFB ;~ 0396:06CA
cs=0x396;eip=0x0006cf; 	T(ADD(sp, 2));	// 4737 add     sp, 2 ;~ 0396:06CF
loc_12612:
	// 4658 
cs=0x396;eip=0x0006d2; 	T(SUB(ax, ax));	// 4740 sub     ax, ax ;~ 0396:06D2
cs=0x396;eip=0x0006d4; 	X(PUSH(ax));	// 4741 push    ax ;~ 0396:06D4
cs=0x396;eip=0x0006d5; 	T(MOV(ax, 0x52));	// 4742 mov     ax, 52h ; 'R' ;~ 0396:06D5
cs=0x396;eip=0x0006d8; 	X(PUSH(ax));	// 4743 push    ax ;~ 0396:06D8
cs=0x396;eip=0x0006d9; 	T(MOV(ax, 0x30));	// 4744 mov     ax, 30h ; '0' ;~ 0396:06D9
cs=0x396;eip=0x0006dc; 	X(PUSH(ax));	// 4745 push    ax ;~ 0396:06DC
cs=0x396;eip=0x0006dd; 	T(MOV(ax, 0x0F0));	// 4746 mov     ax, 0F0h ; '' ;~ 0396:06DD
cs=0x396;eip=0x0006e0; 	X(PUSH(ax));	// 4747 push    ax ;~ 0396:06E0
cs=0x396;eip=0x0006e1; 	T(MOV(ax, 0x1FD1));	// 4748 mov     ax, 1FD1h ;~ 0396:06E1
cs=0x396;eip=0x0006e4; 	X(PUSH(ax));	// 4749 push    ax ;~ 0396:06E4
cs=0x396;eip=0x0006e5; 	T(MOV(ax, 0x2500));	// 4750 mov     ax, 2500h ;~ 0396:06E5
cs=0x396;eip=0x0006e8; 	X(PUSH(ax));	// 4751 push    ax ;~ 0396:06E8
cs=0x396;eip=0x0006e9; 	X(PUSH(cs));	// 4752 push    cs ;~ 0396:06E9
cs=0x396;eip=0x0006ea; 	R(CALL(sub_178ec,0));	// 4753 call    near ptr sub_178EC ;~ 0396:06EA
cs=0x396;eip=0x0006ed; 	T(ADD(sp, 0x0C));	// 4754 add     sp, 0Ch ;~ 0396:06ED
cs=0x396;eip=0x0006f0; 	T(SUB(ax, ax));	// 4755 sub     ax, ax ;~ 0396:06F0
cs=0x396;eip=0x0006f2; 	X(PUSH(ax));	// 4756 push    ax ;~ 0396:06F2
cs=0x396;eip=0x0006f3; 	T(MOV(ax, 1));	// 4757 mov     ax, 1 ;~ 0396:06F3
cs=0x396;eip=0x0006f6; 	X(PUSH(ax));	// 4758 push    ax ;~ 0396:06F6
cs=0x396;eip=0x0006f7; 	T(MOV(ax, 0x52));	// 4759 mov     ax, 52h ; 'R' ;~ 0396:06F7
cs=0x396;eip=0x0006fa; 	X(PUSH(ax));	// 4760 push    ax ;~ 0396:06FA
cs=0x396;eip=0x0006fb; 	T(MOV(ax, 0x30));	// 4761 mov     ax, 30h ; '0' ;~ 0396:06FB
cs=0x396;eip=0x0006fe; 	X(PUSH(ax));	// 4762 push    ax ;~ 0396:06FE
cs=0x396;eip=0x0006ff; 	T(MOV(ax, 0x52));	// 4763 mov     ax, 52h ; 'R' ;~ 0396:06FF
cs=0x396;eip=0x000702; 	X(PUSH(ax));	// 4764 push    ax ;~ 0396:0702
cs=0x396;eip=0x000703; 	T(MOV(ax, 0x0E));	// 4765 mov     ax, 0Eh ;~ 0396:0703
cs=0x396;eip=0x000706; 	X(PUSH(ax));	// 4766 push    ax ;~ 0396:0706
cs=0x396;eip=0x000707; 	T(MOV(ax, 0x11F));	// 4767 mov     ax, 11Fh ;~ 0396:0707
cs=0x396;eip=0x00070a; 	X(PUSH(ax));	// 4768 push    ax ;~ 0396:070A
cs=0x396;eip=0x00070b; 	T(MOV(ax, 0x30));	// 4769 mov     ax, 30h ; '0' ;~ 0396:070B
cs=0x396;eip=0x00070e; 	X(PUSH(ax));	// 4770 push    ax ;~ 0396:070E
cs=0x396;eip=0x00070f; 	R(CALLF(sub_28183,0));	// 4771 call    far ptr sub_28183 ;~ 0396:070F
cs=0x396;eip=0x000714; 	T(ADD(sp, 0x10));	// 4772 add     sp, 10h ;~ 0396:0714
cs=0x396;eip=0x000717; 	T(MOV(ax, 0x0EE5));	// 4773 mov     ax, 0EE5h ;~ 0396:0717
cs=0x396;eip=0x00071a; 	X(PUSH(ax));	// 4774 push    ax ;~ 0396:071A
cs=0x396;eip=0x00071b; 	T(MOV(ax, 0x0A9C));	// 4775 mov     ax, 0A9Ch ;~ 0396:071B
cs=0x396;eip=0x00071e; 	X(PUSH(ax));	// 4776 push    ax ;~ 0396:071E
cs=0x396;eip=0x00071f; 	R(CALLF(sub_29b46,0));	// 4777 call    sub_29B46 ;~ 0396:071F
cs=0x396;eip=0x000724; 	T(ADD(sp, 4));	// 4778 add     sp, 4 ;~ 0396:0724
cs=0x396;eip=0x000727; 	X(PUSH(word_38a9e));	// 4779 push    word_38A9E ;~ 0396:0727
cs=0x396;eip=0x00072b; 	X(PUSH(word_38a9c));	// 4780 push    word_38A9C ;~ 0396:072B
cs=0x396;eip=0x00072f; 	T(MOV(ax, 0x0A9A));	// 4781 mov     ax, 0A9Ah ;~ 0396:072F
cs=0x396;eip=0x000732; 	X(PUSH(ax));	// 4782 push    ax ;~ 0396:0732
cs=0x396;eip=0x000733; 	R(CALLF(sub_10ee0,0));	// 4783 call    sub_10EE0 ;~ 0396:0733
cs=0x396;eip=0x000738; 	T(ADD(sp, 6));	// 4784 add     sp, 6 ;~ 0396:0738
cs=0x396;eip=0x00073b; 	T(MOV(ax, 0x2500));	// 4785 mov     ax, 2500h ;~ 0396:073B
cs=0x396;eip=0x00073e; 	X(PUSH(ds));	// 4786 push    ds ;~ 0396:073E
cs=0x396;eip=0x00073f; 	X(PUSH(ax));	// 4787 push    ax ;~ 0396:073F
cs=0x396;eip=0x000740; 	X(PUSH(word_38a9e));	// 4788 push    word_38A9E ;~ 0396:0740
cs=0x396;eip=0x000744; 	X(PUSH(word_38a9c));	// 4789 push    word_38A9C ;~ 0396:0744
cs=0x396;eip=0x000748; 	R(CALLF(sub_1ab87,0));	// 4790 call    sub_1AB87 ;~ 0396:0748
cs=0x396;eip=0x00074d; 	T(ADD(sp, 8));	// 4791 add     sp, 8 ;~ 0396:074D
cs=0x396;eip=0x000750; 	T(SUB(ax, ax));	// 4792 sub     ax, ax ;~ 0396:0750
cs=0x396;eip=0x000752; 	X(PUSH(ax));	// 4793 push    ax ;~ 0396:0752
cs=0x396;eip=0x000753; 	T(MOV(ax, 0x0C6));	// 4794 mov     ax, 0C6h ; '∆' ;~ 0396:0753
cs=0x396;eip=0x000756; 	X(PUSH(ax));	// 4795 push    ax ;~ 0396:0756
cs=0x396;eip=0x000757; 	T(MOV(ax, 0x20));	// 4796 mov     ax, 20h ; ' ' ;~ 0396:0757
cs=0x396;eip=0x00075a; 	X(PUSH(ax));	// 4797 push    ax ;~ 0396:075A
cs=0x396;eip=0x00075b; 	T(MOV(ax, 0x100));	// 4798 mov     ax, 100h ;~ 0396:075B
cs=0x396;eip=0x00075e; 	X(PUSH(ax));	// 4799 push    ax ;~ 0396:075E
cs=0x396;eip=0x00075f; 	T(MOV(ax, 0x0B12));	// 4800 mov     ax, 0B12h ;~ 0396:075F
cs=0x396;eip=0x000762; 	X(PUSH(ax));	// 4801 push    ax ;~ 0396:0762
cs=0x396;eip=0x000763; 	T(MOV(ax, 0x2500));	// 4802 mov     ax, 2500h ;~ 0396:0763
cs=0x396;eip=0x000766; 	X(PUSH(ax));	// 4803 push    ax ;~ 0396:0766
cs=0x396;eip=0x000767; 	X(PUSH(cs));	// 4804 push    cs ;~ 0396:0767
cs=0x396;eip=0x000768; 	R(CALL(sub_178ec,0));	// 4805 call    near ptr sub_178EC ;~ 0396:0768
cs=0x396;eip=0x00076b; 	T(ADD(sp, 0x0C));	// 4806 add     sp, 0Ch ;~ 0396:076B
cs=0x396;eip=0x00076e; 	T(SUB(ax, ax));	// 4807 sub     ax, ax ;~ 0396:076E
cs=0x396;eip=0x000770; 	X(PUSH(ax));	// 4808 push    ax ;~ 0396:0770
cs=0x396;eip=0x000771; 	T(MOV(ax, 1));	// 4809 mov     ax, 1 ;~ 0396:0771
cs=0x396;eip=0x000774; 	X(PUSH(ax));	// 4810 push    ax ;~ 0396:0774
cs=0x396;eip=0x000775; 	T(MOV(ax, 0x0C6));	// 4811 mov     ax, 0C6h ; '∆' ;~ 0396:0775
cs=0x396;eip=0x000778; 	X(PUSH(ax));	// 4812 push    ax ;~ 0396:0778
cs=0x396;eip=0x000779; 	T(MOV(ax, 0x20));	// 4813 mov     ax, 20h ; ' ' ;~ 0396:0779
cs=0x396;eip=0x00077c; 	X(PUSH(ax));	// 4814 push    ax ;~ 0396:077C
cs=0x396;eip=0x00077d; 	T(MOV(ax, 0x0C6));	// 4815 mov     ax, 0C6h ; '∆' ;~ 0396:077D
cs=0x396;eip=0x000780; 	X(PUSH(ax));	// 4816 push    ax ;~ 0396:0780
cs=0x396;eip=0x000781; 	T(MOV(ax, 0x0B4));	// 4817 mov     ax, 0B4h ; '¥' ;~ 0396:0781
cs=0x396;eip=0x000784; 	X(PUSH(ax));	// 4818 push    ax ;~ 0396:0784
cs=0x396;eip=0x000785; 	T(MOV(ax, 0x11F));	// 4819 mov     ax, 11Fh ;~ 0396:0785
cs=0x396;eip=0x000788; 	X(PUSH(ax));	// 4820 push    ax ;~ 0396:0788
cs=0x396;eip=0x000789; 	T(MOV(ax, 0x20));	// 4821 mov     ax, 20h ; ' ' ;~ 0396:0789
cs=0x396;eip=0x00078c; 	X(PUSH(ax));	// 4822 push    ax ;~ 0396:078C
cs=0x396;eip=0x00078d; 	R(CALLF(sub_28183,0));	// 4823 call    far ptr sub_28183 ;~ 0396:078D
cs=0x396;eip=0x000792; 	T(ADD(sp, 0x10));	// 4824 add     sp, 10h ;~ 0396:0792
cs=0x396;eip=0x000795; 	T(MOV(ax, 0x0EF0));	// 4825 mov     ax, 0EF0h ;~ 0396:0795
cs=0x396;eip=0x000798; 	X(PUSH(ax));	// 4826 push    ax ;~ 0396:0798
cs=0x396;eip=0x000799; 	T(MOV(ax, 0x0A9C));	// 4827 mov     ax, 0A9Ch ;~ 0396:0799
cs=0x396;eip=0x00079c; 	X(PUSH(ax));	// 4828 push    ax ;~ 0396:079C
cs=0x396;eip=0x00079d; 	R(CALLF(sub_29b46,0));	// 4829 call    sub_29B46 ;~ 0396:079D
cs=0x396;eip=0x0007a2; 	T(ADD(sp, 4));	// 4830 add     sp, 4 ;~ 0396:07A2
cs=0x396;eip=0x0007a5; 	X(PUSH(word_38a9e));	// 4831 push    word_38A9E ;~ 0396:07A5
cs=0x396;eip=0x0007a9; 	X(PUSH(word_38a9c));	// 4832 push    word_38A9C ;~ 0396:07A9
cs=0x396;eip=0x0007ad; 	T(MOV(ax, 0x0A9A));	// 4833 mov     ax, 0A9Ah ;~ 0396:07AD
cs=0x396;eip=0x0007b0; 	X(PUSH(ax));	// 4834 push    ax ;~ 0396:07B0
cs=0x396;eip=0x0007b1; 	R(CALLF(sub_10ee0,0));	// 4835 call    sub_10EE0 ;~ 0396:07B1
cs=0x396;eip=0x0007b6; 	T(ADD(sp, 6));	// 4836 add     sp, 6 ;~ 0396:07B6
cs=0x396;eip=0x0007b9; 	T(MOV(ax, 0x2500));	// 4837 mov     ax, 2500h ;~ 0396:07B9
cs=0x396;eip=0x0007bc; 	X(PUSH(ds));	// 4838 push    ds ;~ 0396:07BC
cs=0x396;eip=0x0007bd; 	X(PUSH(ax));	// 4839 push    ax ;~ 0396:07BD
cs=0x396;eip=0x0007be; 	X(PUSH(word_38a9e));	// 4840 push    word_38A9E ;~ 0396:07BE
cs=0x396;eip=0x0007c2; 	X(PUSH(word_38a9c));	// 4841 push    word_38A9C ;~ 0396:07C2
cs=0x396;eip=0x0007c6; 	R(CALLF(sub_1ab87,0));	// 4842 call    sub_1AB87 ;~ 0396:07C6
cs=0x396;eip=0x0007cb; 	T(ADD(sp, 8));	// 4843 add     sp, 8 ;~ 0396:07CB
cs=0x396;eip=0x0007ce; 	T(CMP(word_3a178, 0x13));	// 4844 cmp     word_3A178, 13h ;~ 0396:07CE
cs=0x396;eip=0x0007d3; 	R(JNZ(loc_1272a));	// 4845 jnz     short loc_1272A ;~ 0396:07D3
cs=0x396;eip=0x0007d5; 	T(MOV(ax, 0x28));	// 4846 mov     ax, 28h ; '(' ;~ 0396:07D5
cs=0x396;eip=0x0007d8; 	X(PUSH(ax));	// 4847 push    ax ;~ 0396:07D8
cs=0x396;eip=0x0007d9; 	X(PUSH(cs));	// 4848 push    cs ;~ 0396:07D9
cs=0x396;eip=0x0007da; 	R(CALL(sub_13ace,0));	// 4849 call    near ptr sub_13ACE ;~ 0396:07DA
cs=0x396;eip=0x0007dd; 	T(ADD(sp, 2));	// 4850 add     sp, 2 ;~ 0396:07DD
cs=0x396;eip=0x0007e0; 	T(CMP(byte_2becc, 0));	// 4851 cmp     byte_2BECC, 0 ;~ 0396:07E0
cs=0x396;eip=0x0007e5; 	R(JZ(loc_1272a));	// 4852 jz      short loc_1272A ;~ 0396:07E5
cs=0x396;eip=0x0007e7; 	R(JMP(loc_12099));	// 4853 jmp     loc_12099 ;~ 0396:07E7
loc_1272a:
	// 4659 
cs=0x396;eip=0x0007ea; 	T(SUB(ax, ax));	// 4858 sub     ax, ax ;~ 0396:07EA
cs=0x396;eip=0x0007ec; 	X(PUSH(ax));	// 4859 push    ax ;~ 0396:07EC
cs=0x396;eip=0x0007ed; 	T(MOV(ax, 0x0A5));	// 4860 mov     ax, 0A5h ; '•' ;~ 0396:07ED
cs=0x396;eip=0x0007f0; 	X(PUSH(ax));	// 4861 push    ax ;~ 0396:07F0
cs=0x396;eip=0x0007f1; 	T(MOV(ax, 0x60));	// 4862 mov     ax, 60h ; '`' ;~ 0396:07F1
cs=0x396;eip=0x0007f4; 	X(PUSH(ax));	// 4863 push    ax ;~ 0396:07F4
cs=0x396;eip=0x0007f5; 	T(MOV(ax, 0x80));	// 4864 mov     ax, 80h ; 'Ä' ;~ 0396:07F5
cs=0x396;eip=0x0007f8; 	X(PUSH(ax));	// 4865 push    ax ;~ 0396:07F8
cs=0x396;eip=0x0007f9; 	T(MOV(ax, 0x0F5E));	// 4866 mov     ax, 0F5Eh ;~ 0396:07F9
cs=0x396;eip=0x0007fc; 	X(PUSH(ax));	// 4867 push    ax ;~ 0396:07FC
cs=0x396;eip=0x0007fd; 	T(MOV(ax, 0x2500));	// 4868 mov     ax, 2500h ;~ 0396:07FD
cs=0x396;eip=0x000800; 	X(PUSH(ax));	// 4869 push    ax ;~ 0396:0800
cs=0x396;eip=0x000801; 	X(PUSH(cs));	// 4870 push    cs ;~ 0396:0801
cs=0x396;eip=0x000802; 	R(CALL(sub_178ec,0));	// 4871 call    near ptr sub_178EC ;~ 0396:0802
cs=0x396;eip=0x000805; 	T(ADD(sp, 0x0C));	// 4872 add     sp, 0Ch ;~ 0396:0805
cs=0x396;eip=0x000808; 	T(SUB(ax, ax));	// 4873 sub     ax, ax ;~ 0396:0808
cs=0x396;eip=0x00080a; 	X(PUSH(ax));	// 4874 push    ax ;~ 0396:080A
cs=0x396;eip=0x00080b; 	T(MOV(ax, 1));	// 4875 mov     ax, 1 ;~ 0396:080B
cs=0x396;eip=0x00080e; 	X(PUSH(ax));	// 4876 push    ax ;~ 0396:080E
cs=0x396;eip=0x00080f; 	T(MOV(ax, 0x0A5));	// 4877 mov     ax, 0A5h ; '•' ;~ 0396:080F
cs=0x396;eip=0x000812; 	X(PUSH(ax));	// 4878 push    ax ;~ 0396:0812
cs=0x396;eip=0x000813; 	T(MOV(ax, 0x60));	// 4879 mov     ax, 60h ; '`' ;~ 0396:0813
cs=0x396;eip=0x000816; 	X(PUSH(ax));	// 4880 push    ax ;~ 0396:0816
cs=0x396;eip=0x000817; 	T(MOV(ax, 0x0A5));	// 4881 mov     ax, 0A5h ; '•' ;~ 0396:0817
cs=0x396;eip=0x00081a; 	X(PUSH(ax));	// 4882 push    ax ;~ 0396:081A
cs=0x396;eip=0x00081b; 	T(MOV(ax, 0x70));	// 4883 mov     ax, 70h ; 'p' ;~ 0396:081B
cs=0x396;eip=0x00081e; 	X(PUSH(ax));	// 4884 push    ax ;~ 0396:081E
cs=0x396;eip=0x00081f; 	T(MOV(ax, 0x0DF));	// 4885 mov     ax, 0DFh ; 'ﬂ' ;~ 0396:081F
cs=0x396;eip=0x000822; 	X(PUSH(ax));	// 4886 push    ax ;~ 0396:0822
cs=0x396;eip=0x000823; 	T(MOV(ax, 0x60));	// 4887 mov     ax, 60h ; '`' ;~ 0396:0823
cs=0x396;eip=0x000826; 	X(PUSH(ax));	// 4888 push    ax ;~ 0396:0826
cs=0x396;eip=0x000827; 	R(CALLF(sub_28183,0));	// 4889 call    far ptr sub_28183 ;~ 0396:0827
cs=0x396;eip=0x00082c; 	T(ADD(sp, 0x10));	// 4890 add     sp, 10h ;~ 0396:082C
cs=0x396;eip=0x00082f; 	X(PUSH(cs));	// 4891 push    cs ;~ 0396:082F
cs=0x396;eip=0x000830; 	R(CALL(sub_13bc0,0));	// 4892 call    near ptr sub_13BC0 ;~ 0396:0830
cs=0x396;eip=0x000833; 	T(SUB(ax, ax));	// 4893 sub     ax, ax ;~ 0396:0833
cs=0x396;eip=0x000835; 	X(MOV(word_2beda, ax));	// 4894 mov     word_2BEDA, ax ;~ 0396:0835
cs=0x396;eip=0x000838; 	X(PUSH(ax));	// 4895 push    ax ;~ 0396:0838
cs=0x396;eip=0x000839; 	R(CALLF(sub_2714e,0));	// 4896 call    far ptr sub_2714E ;~ 0396:0839
cs=0x396;eip=0x00083e; 	T(ADD(sp, 2));	// 4897 add     sp, 2 ;~ 0396:083E
cs=0x396;eip=0x000841; 	X(PUSH(cs));	// 4898 push    cs ;~ 0396:0841
cs=0x396;eip=0x000842; 	R(CALL(sub_13bce,0));	// 4899 call    near ptr sub_13BCE ;~ 0396:0842
cs=0x396;eip=0x000845; 	X(PUSH(cs));	// 4900 push    cs ;~ 0396:0845
cs=0x396;eip=0x000846; 	R(CALL(sub_13b88,0));	// 4901 call    near ptr sub_13B88 ;~ 0396:0846
cs=0x396;eip=0x000849; 	X(MOV(byte_34f30, 0x80));	// 4902 mov     byte_34F30, 80h ; 'Ä' ;~ 0396:0849
cs=0x396;eip=0x00084e; 	T(CMP(word_3a178, 0x13));	// 4903 cmp     word_3A178, 13h ;~ 0396:084E
cs=0x396;eip=0x000853; 	R(JNZ(loc_1279a));	// 4904 jnz     short loc_1279A ;~ 0396:0853
cs=0x396;eip=0x000855; 	T(MOV(ax, 0x28));	// 4905 mov     ax, 28h ; '(' ;~ 0396:0855
cs=0x396;eip=0x000858; 	R(JMP(loc_1279d));	// 4906 jmp     short loc_1279D ;~ 0396:0858
loc_1279a:
	// 4660 
cs=0x396;eip=0x00085a; 	T(MOV(ax, 3));	// 4910 mov     ax, 3 ;~ 0396:085A
loc_1279d:
	// 4661 
cs=0x396;eip=0x00085d; 	X(PUSH(ax));	// 4913 push    ax ;~ 0396:085D
cs=0x396;eip=0x00085e; 	X(PUSH(cs));	// 4914 push    cs ;~ 0396:085E
cs=0x396;eip=0x00085f; 	R(CALL(sub_13ace,0));	// 4915 call    near ptr sub_13ACE ;~ 0396:085F
cs=0x396;eip=0x000862; 	T(ADD(sp, 2));	// 4916 add     sp, 2 ;~ 0396:0862
cs=0x396;eip=0x000865; 	T(CMP(byte_2becc, 0));	// 4917 cmp     byte_2BECC, 0 ;~ 0396:0865
cs=0x396;eip=0x00086a; 	R(JZ(loc_127af));	// 4918 jz      short loc_127AF ;~ 0396:086A
cs=0x396;eip=0x00086c; 	R(JMP(loc_12099));	// 4919 jmp     loc_12099 ;~ 0396:086C
loc_127af:
	// 4662 
cs=0x396;eip=0x00086f; 	T(CMP(word_3a178, 0x13));	// 4923 cmp     word_3A178, 13h ;~ 0396:086F
cs=0x396;eip=0x000874; 	R(JNZ(loc_127ed));	// 4924 jnz     short loc_127ED ;~ 0396:0874
cs=0x396;eip=0x000876; 	X(PUSH(cs));	// 4925 push    cs ;~ 0396:0876
cs=0x396;eip=0x000877; 	R(CALL(sub_13b96,0));	// 4926 call    near ptr sub_13B96 ;~ 0396:0877
cs=0x396;eip=0x00087a; 	T(SUB(ax, ax));	// 4927 sub     ax, ax ;~ 0396:087A
cs=0x396;eip=0x00087c; 	X(MOV(word_2beda, ax));	// 4928 mov     word_2BEDA, ax ;~ 0396:087C
cs=0x396;eip=0x00087f; 	X(PUSH(ax));	// 4929 push    ax ;~ 0396:087F
cs=0x396;eip=0x000880; 	R(CALLF(sub_2714e,0));	// 4930 call    far ptr sub_2714E ;~ 0396:0880
cs=0x396;eip=0x000885; 	T(ADD(sp, 2));	// 4931 add     sp, 2 ;~ 0396:0885
cs=0x396;eip=0x000888; 	T(SUB(ax, ax));	// 4932 sub     ax, ax ;~ 0396:0888
cs=0x396;eip=0x00088a; 	X(PUSH(ax));	// 4933 push    ax ;~ 0396:088A
cs=0x396;eip=0x00088b; 	R(CALLF(sub_27031,0));	// 4934 call    far ptr sub_27031 ;~ 0396:088B
cs=0x396;eip=0x000890; 	T(ADD(sp, 2));	// 4935 add     sp, 2 ;~ 0396:0890
cs=0x396;eip=0x000893; 	T(MOV(ax, 0x0C7));	// 4936 mov     ax, 0C7h ; '«' ;~ 0396:0893
cs=0x396;eip=0x000896; 	X(PUSH(ax));	// 4937 push    ax ;~ 0396:0896
cs=0x396;eip=0x000897; 	T(SUB(ax, ax));	// 4938 sub     ax, ax ;~ 0396:0897
cs=0x396;eip=0x000899; 	X(PUSH(ax));	// 4939 push    ax ;~ 0396:0899
cs=0x396;eip=0x00089a; 	T(MOV(ax, 0x13F));	// 4940 mov     ax, 13Fh ;~ 0396:089A
cs=0x396;eip=0x00089d; 	X(PUSH(ax));	// 4941 push    ax ;~ 0396:089D
cs=0x396;eip=0x00089e; 	T(SUB(ax, ax));	// 4942 sub     ax, ax ;~ 0396:089E
cs=0x396;eip=0x0008a0; 	X(PUSH(ax));	// 4943 push    ax ;~ 0396:08A0
cs=0x396;eip=0x0008a1; 	R(CALLF(sub_2785b,0));	// 4944 call    far ptr sub_2785B ;~ 0396:08A1
cs=0x396;eip=0x0008a6; 	T(ADD(sp, 8));	// 4945 add     sp, 8 ;~ 0396:08A6
cs=0x396;eip=0x0008a9; 	X(PUSH(cs));	// 4946 push    cs ;~ 0396:08A9
cs=0x396;eip=0x0008aa; 	R(CALL(sub_13b88,0));	// 4947 call    near ptr sub_13B88 ;~ 0396:08AA
loc_127ed:
	// 4663 
cs=0x396;eip=0x0008ad; 	X(MOV(byte_2bedf, 0));	// 4950 mov     byte_2BEDF, 0 ;~ 0396:08AD
cs=0x396;eip=0x0008b2; 	T(MOV(ax, 1));	// 4951 mov     ax, 1 ;~ 0396:08B2
cs=0x396;eip=0x0008b5; 	X(MOV(word_2beda, ax));	// 4952 mov     word_2BEDA, ax ;~ 0396:08B5
cs=0x396;eip=0x0008b8; 	X(PUSH(ax));	// 4953 push    ax ;~ 0396:08B8
cs=0x396;eip=0x0008b9; 	R(CALLF(sub_2714e,0));	// 4954 call    far ptr sub_2714E ;~ 0396:08B9
cs=0x396;eip=0x0008be; 	T(ADD(sp, 2));	// 4955 add     sp, 2 ;~ 0396:08BE
cs=0x396;eip=0x0008c1; 	X(XOR(byte_34f30, 0x80));	// 4956 xor     byte_34F30, 80h ;~ 0396:08C1
cs=0x396;eip=0x0008c6; 	T(MOV(ax, 0x0EFC));	// 4957 mov     ax, 0EFCh ;~ 0396:08C6
cs=0x396;eip=0x0008c9; 	X(PUSH(ax));	// 4958 push    ax ;~ 0396:08C9
cs=0x396;eip=0x0008ca; 	T(MOV(ax, 0x0A9C));	// 4959 mov     ax, 0A9Ch ;~ 0396:08CA
cs=0x396;eip=0x0008cd; 	X(PUSH(ax));	// 4960 push    ax ;~ 0396:08CD
cs=0x396;eip=0x0008ce; 	R(CALLF(sub_29b46,0));	// 4961 call    sub_29B46 ;~ 0396:08CE
cs=0x396;eip=0x0008d3; 	T(ADD(sp, 4));	// 4962 add     sp, 4 ;~ 0396:08D3
cs=0x396;eip=0x0008d6; 	T(MOV(ax, 0x0A9A));	// 4963 mov     ax, 0A9Ah ;~ 0396:08D6
cs=0x396;eip=0x0008d9; 	X(PUSH(ax));	// 4964 push    ax ;~ 0396:08D9
cs=0x396;eip=0x0008da; 	R(CALLF(sub_10d62,0));	// 4965 call    sub_10D62 ;~ 0396:08DA
cs=0x396;eip=0x0008df; 	T(ADD(sp, 2));	// 4966 add     sp, 2 ;~ 0396:08DF
cs=0x396;eip=0x0008e2; 	T(MOV(ax, 0x0F09));	// 4967 mov     ax, 0F09h ;~ 0396:08E2
cs=0x396;eip=0x0008e5; 	X(PUSH(ax));	// 4968 push    ax ;~ 0396:08E5
cs=0x396;eip=0x0008e6; 	T(MOV(ax, 0x0A9C));	// 4969 mov     ax, 0A9Ch ;~ 0396:08E6
cs=0x396;eip=0x0008e9; 	X(PUSH(ax));	// 4970 push    ax ;~ 0396:08E9
cs=0x396;eip=0x0008ea; 	R(CALLF(sub_29b46,0));	// 4971 call    sub_29B46 ;~ 0396:08EA
cs=0x396;eip=0x0008ef; 	T(ADD(sp, 4));	// 4972 add     sp, 4 ;~ 0396:08EF
cs=0x396;eip=0x0008f2; 	X(PUSH(word_38a9e));	// 4973 push    word_38A9E ;~ 0396:08F2
cs=0x396;eip=0x0008f6; 	X(PUSH(word_38a9c));	// 4974 push    word_38A9C ;~ 0396:08F6
cs=0x396;eip=0x0008fa; 	T(MOV(ax, 0x0A9A));	// 4975 mov     ax, 0A9Ah ;~ 0396:08FA
cs=0x396;eip=0x0008fd; 	X(PUSH(ax));	// 4976 push    ax ;~ 0396:08FD
cs=0x396;eip=0x0008fe; 	R(CALLF(sub_10ee0,0));	// 4977 call    sub_10EE0 ;~ 0396:08FE
cs=0x396;eip=0x000903; 	T(ADD(sp, 6));	// 4978 add     sp, 6 ;~ 0396:0903
cs=0x396;eip=0x000906; 	T(MOV(ax, 0x2500));	// 4979 mov     ax, 2500h ;~ 0396:0906
cs=0x396;eip=0x000909; 	X(PUSH(ds));	// 4980 push    ds ;~ 0396:0909
cs=0x396;eip=0x00090a; 	X(PUSH(ax));	// 4981 push    ax ;~ 0396:090A
cs=0x396;eip=0x00090b; 	X(PUSH(word_38a9e));	// 4982 push    word_38A9E ;~ 0396:090B
cs=0x396;eip=0x00090f; 	X(PUSH(word_38a9c));	// 4983 push    word_38A9C ;~ 0396:090F
cs=0x396;eip=0x000913; 	R(CALLF(sub_1ab87,0));	// 4984 call    sub_1AB87 ;~ 0396:0913
cs=0x396;eip=0x000918; 	T(ADD(sp, 8));	// 4985 add     sp, 8 ;~ 0396:0918
cs=0x396;eip=0x00091b; 	T(SUB(ax, ax));	// 4986 sub     ax, ax ;~ 0396:091B
cs=0x396;eip=0x00091d; 	X(PUSH(ax));	// 4987 push    ax ;~ 0396:091D
cs=0x396;eip=0x00091e; 	T(MOV(ax, 0x0C7));	// 4988 mov     ax, 0C7h ; '«' ;~ 0396:091E
cs=0x396;eip=0x000921; 	X(PUSH(ax));	// 4989 push    ax ;~ 0396:0921
cs=0x396;eip=0x000922; 	T(SUB(ax, ax));	// 4990 sub     ax, ax ;~ 0396:0922
cs=0x396;eip=0x000924; 	X(PUSH(ax));	// 4991 push    ax ;~ 0396:0924
cs=0x396;eip=0x000925; 	T(MOV(ax, 0x140));	// 4992 mov     ax, 140h ;~ 0396:0925
cs=0x396;eip=0x000928; 	X(PUSH(ax));	// 4993 push    ax ;~ 0396:0928
cs=0x396;eip=0x000929; 	T(MOV(ax, 0x2E71));	// 4994 mov     ax, 2E71h ;~ 0396:0929
cs=0x396;eip=0x00092c; 	X(PUSH(ax));	// 4995 push    ax ;~ 0396:092C
cs=0x396;eip=0x00092d; 	T(MOV(ax, 0x2500));	// 4996 mov     ax, 2500h ;~ 0396:092D
cs=0x396;eip=0x000930; 	X(PUSH(ax));	// 4997 push    ax ;~ 0396:0930
cs=0x396;eip=0x000931; 	X(PUSH(cs));	// 4998 push    cs ;~ 0396:0931
cs=0x396;eip=0x000932; 	R(CALL(sub_178ec,0));	// 4999 call    near ptr sub_178EC ;~ 0396:0932
cs=0x396;eip=0x000935; 	T(ADD(sp, 0x0C));	// 5000 add     sp, 0Ch ;~ 0396:0935
cs=0x396;eip=0x000938; 	T(MOV(ax, 0x0F14));	// 5001 mov     ax, 0F14h ;~ 0396:0938
cs=0x396;eip=0x00093b; 	X(PUSH(ax));	// 5002 push    ax ;~ 0396:093B
cs=0x396;eip=0x00093c; 	T(MOV(ax, 0x0A9C));	// 5003 mov     ax, 0A9Ch ;~ 0396:093C
cs=0x396;eip=0x00093f; 	X(PUSH(ax));	// 5004 push    ax ;~ 0396:093F
cs=0x396;eip=0x000940; 	R(CALLF(sub_29b46,0));	// 5005 call    sub_29B46 ;~ 0396:0940
cs=0x396;eip=0x000945; 	T(ADD(sp, 4));	// 5006 add     sp, 4 ;~ 0396:0945
cs=0x396;eip=0x000948; 	X(PUSH(word_38a9e));	// 5007 push    word_38A9E ;~ 0396:0948
cs=0x396;eip=0x00094c; 	X(PUSH(word_38a9c));	// 5008 push    word_38A9C ;~ 0396:094C
cs=0x396;eip=0x000950; 	T(MOV(ax, 0x0A9A));	// 5009 mov     ax, 0A9Ah ;~ 0396:0950
cs=0x396;eip=0x000953; 	X(PUSH(ax));	// 5010 push    ax ;~ 0396:0953
cs=0x396;eip=0x000954; 	R(CALLF(sub_10ee0,0));	// 5011 call    sub_10EE0 ;~ 0396:0954
cs=0x396;eip=0x000959; 	T(ADD(sp, 6));	// 5012 add     sp, 6 ;~ 0396:0959
cs=0x396;eip=0x00095c; 	T(MOV(ax, 0x2500));	// 5013 mov     ax, 2500h ;~ 0396:095C
cs=0x396;eip=0x00095f; 	X(PUSH(ds));	// 5014 push    ds ;~ 0396:095F
cs=0x396;eip=0x000960; 	X(PUSH(ax));	// 5015 push    ax ;~ 0396:0960
cs=0x396;eip=0x000961; 	X(PUSH(word_38a9e));	// 5016 push    word_38A9E ;~ 0396:0961
cs=0x396;eip=0x000965; 	X(PUSH(word_38a9c));	// 5017 push    word_38A9C ;~ 0396:0965
cs=0x396;eip=0x000969; 	R(CALLF(sub_1ab87,0));	// 5018 call    sub_1AB87 ;~ 0396:0969
cs=0x396;eip=0x00096e; 	T(ADD(sp, 8));	// 5019 add     sp, 8 ;~ 0396:096E
cs=0x396;eip=0x000971; 	T(MOV(ax, 1));	// 5020 mov     ax, 1 ;~ 0396:0971
cs=0x396;eip=0x000974; 	X(PUSH(ax));	// 5021 push    ax ;~ 0396:0974
cs=0x396;eip=0x000975; 	T(MOV(ax, 0x86));	// 5022 mov     ax, 86h ; 'Ü' ;~ 0396:0975
cs=0x396;eip=0x000978; 	X(PUSH(ax));	// 5023 push    ax ;~ 0396:0978
cs=0x396;eip=0x000979; 	T(SUB(ax, ax));	// 5024 sub     ax, ax ;~ 0396:0979
cs=0x396;eip=0x00097b; 	X(PUSH(ax));	// 5025 push    ax ;~ 0396:097B
cs=0x396;eip=0x00097c; 	T(MOV(ax, 0x140));	// 5026 mov     ax, 140h ;~ 0396:097C
cs=0x396;eip=0x00097f; 	X(PUSH(ax));	// 5027 push    ax ;~ 0396:097F
cs=0x396;eip=0x000980; 	T(MOV(ax, 0x3224));	// 5028 mov     ax, 3224h ;~ 0396:0980
cs=0x396;eip=0x000983; 	X(PUSH(ax));	// 5029 push    ax ;~ 0396:0983
cs=0x396;eip=0x000984; 	T(MOV(ax, 0x2500));	// 5030 mov     ax, 2500h ;~ 0396:0984
cs=0x396;eip=0x000987; 	X(PUSH(ax));	// 5031 push    ax ;~ 0396:0987
cs=0x396;eip=0x000988; 	X(PUSH(cs));	// 5032 push    cs ;~ 0396:0988
cs=0x396;eip=0x000989; 	R(CALL(sub_178ec,0));	// 5033 call    near ptr sub_178EC ;~ 0396:0989
cs=0x396;eip=0x00098c; 	T(ADD(sp, 0x0C));	// 5034 add     sp, 0Ch ;~ 0396:098C
cs=0x396;eip=0x00098f; 	T(MOV(ax, 0x0F1F));	// 5035 mov     ax, 0F1Fh ;~ 0396:098F
cs=0x396;eip=0x000992; 	X(PUSH(ax));	// 5036 push    ax ;~ 0396:0992
cs=0x396;eip=0x000993; 	T(MOV(ax, 0x0A9C));	// 5037 mov     ax, 0A9Ch ;~ 0396:0993
cs=0x396;eip=0x000996; 	X(PUSH(ax));	// 5038 push    ax ;~ 0396:0996
cs=0x396;eip=0x000997; 	R(CALLF(sub_29b46,0));	// 5039 call    sub_29B46 ;~ 0396:0997
cs=0x396;eip=0x00099c; 	T(ADD(sp, 4));	// 5040 add     sp, 4 ;~ 0396:099C
cs=0x396;eip=0x00099f; 	X(PUSH(word_38a9e));	// 5041 push    word_38A9E ;~ 0396:099F
cs=0x396;eip=0x0009a3; 	X(PUSH(word_38a9c));	// 5042 push    word_38A9C ;~ 0396:09A3
cs=0x396;eip=0x0009a7; 	T(MOV(ax, 0x0A9A));	// 5043 mov     ax, 0A9Ah ;~ 0396:09A7
cs=0x396;eip=0x0009aa; 	X(PUSH(ax));	// 5044 push    ax ;~ 0396:09AA
cs=0x396;eip=0x0009ab; 	R(CALLF(sub_10ee0,0));	// 5045 call    sub_10EE0 ;~ 0396:09AB
cs=0x396;eip=0x0009b0; 	T(ADD(sp, 6));	// 5046 add     sp, 6 ;~ 0396:09B0
cs=0x396;eip=0x0009b3; 	T(MOV(ax, 0x2500));	// 5047 mov     ax, 2500h ;~ 0396:09B3
cs=0x396;eip=0x0009b6; 	X(PUSH(ds));	// 5048 push    ds ;~ 0396:09B6
cs=0x396;eip=0x0009b7; 	X(PUSH(ax));	// 5049 push    ax ;~ 0396:09B7
cs=0x396;eip=0x0009b8; 	X(PUSH(word_38a9e));	// 5050 push    word_38A9E ;~ 0396:09B8
cs=0x396;eip=0x0009bc; 	X(PUSH(word_38a9c));	// 5051 push    word_38A9C ;~ 0396:09BC
cs=0x396;eip=0x0009c0; 	R(CALLF(sub_1ab87,0));	// 5052 call    sub_1AB87 ;~ 0396:09C0
cs=0x396;eip=0x0009c5; 	T(ADD(sp, 8));	// 5053 add     sp, 8 ;~ 0396:09C5
cs=0x396;eip=0x0009c8; 	T(MOV(ax, 1));	// 5054 mov     ax, 1 ;~ 0396:09C8
cs=0x396;eip=0x0009cb; 	X(PUSH(ax));	// 5055 push    ax ;~ 0396:09CB
cs=0x396;eip=0x0009cc; 	T(MOV(ax, 0x45));	// 5056 mov     ax, 45h ; 'E' ;~ 0396:09CC
cs=0x396;eip=0x0009cf; 	X(PUSH(ax));	// 5057 push    ax ;~ 0396:09CF
cs=0x396;eip=0x0009d0; 	T(SUB(ax, ax));	// 5058 sub     ax, ax ;~ 0396:09D0
cs=0x396;eip=0x0009d2; 	X(PUSH(ax));	// 5059 push    ax ;~ 0396:09D2
cs=0x396;eip=0x0009d3; 	T(MOV(ax, 0x140));	// 5060 mov     ax, 140h ;~ 0396:09D3
cs=0x396;eip=0x0009d6; 	X(PUSH(ax));	// 5061 push    ax ;~ 0396:09D6
cs=0x396;eip=0x0009d7; 	T(MOV(ax, 0x2CCE));	// 5062 mov     ax, 2CCEh ;~ 0396:09D7
cs=0x396;eip=0x0009da; 	X(PUSH(ax));	// 5063 push    ax ;~ 0396:09DA
cs=0x396;eip=0x0009db; 	T(MOV(ax, 0x2500));	// 5064 mov     ax, 2500h ;~ 0396:09DB
cs=0x396;eip=0x0009de; 	X(PUSH(ax));	// 5065 push    ax ;~ 0396:09DE
cs=0x396;eip=0x0009df; 	X(PUSH(cs));	// 5066 push    cs ;~ 0396:09DF
cs=0x396;eip=0x0009e0; 	R(CALL(sub_178ec,0));	// 5067 call    near ptr sub_178EC ;~ 0396:09E0
cs=0x396;eip=0x0009e3; 	T(ADD(sp, 0x0C));	// 5068 add     sp, 0Ch ;~ 0396:09E3
cs=0x396;eip=0x0009e6; 	T(CMP(word_3a178, 0x13));	// 5069 cmp     word_3A178, 13h ;~ 0396:09E6
cs=0x396;eip=0x0009eb; 	R(JNZ(loc_12932));	// 5070 jnz     short loc_12932 ;~ 0396:09EB
cs=0x396;eip=0x0009ed; 	T(MOV(ax, 0x13));	// 5071 mov     ax, 13h ;~ 0396:09ED
cs=0x396;eip=0x0009f0; 	R(JMP(loc_12934));	// 5072 jmp     short loc_12934 ;~ 0396:09F0
loc_12932:
	// 4664 
cs=0x396;eip=0x0009f2; 	T(SUB(ax, ax));	// 5076 sub     ax, ax ;~ 0396:09F2
loc_12934:
	// 4665 
cs=0x396;eip=0x0009f4; 	X(PUSH(ax));	// 5079 push    ax ;~ 0396:09F4
cs=0x396;eip=0x0009f5; 	R(CALLF(sub_27031,0));	// 5080 call    far ptr sub_27031 ;~ 0396:09F5
cs=0x396;eip=0x0009fa; 	T(ADD(sp, 2));	// 5081 add     sp, 2 ;~ 0396:09FA
cs=0x396;eip=0x0009fd; 	T(MOV(ax, 0x0D));	// 5082 mov     ax, 0Dh ;~ 0396:09FD
cs=0x396;eip=0x000a00; 	X(PUSH(ax));	// 5083 push    ax ;~ 0396:0A00
cs=0x396;eip=0x000a01; 	T(SUB(ax, ax));	// 5084 sub     ax, ax ;~ 0396:0A01
cs=0x396;eip=0x000a03; 	X(PUSH(ax));	// 5085 push    ax ;~ 0396:0A03
cs=0x396;eip=0x000a04; 	T(MOV(ax, 0x13F));	// 5086 mov     ax, 13Fh ;~ 0396:0A04
cs=0x396;eip=0x000a07; 	X(PUSH(ax));	// 5087 push    ax ;~ 0396:0A07
cs=0x396;eip=0x000a08; 	T(SUB(ax, ax));	// 5088 sub     ax, ax ;~ 0396:0A08
cs=0x396;eip=0x000a0a; 	X(PUSH(ax));	// 5089 push    ax ;~ 0396:0A0A
cs=0x396;eip=0x000a0b; 	R(CALLF(sub_2785b,0));	// 5090 call    far ptr sub_2785B ;~ 0396:0A0B
cs=0x396;eip=0x000a10; 	T(ADD(sp, 8));	// 5091 add     sp, 8 ;~ 0396:0A10
cs=0x396;eip=0x000a13; 	T(MOV(ax, 8));	// 5092 mov     ax, 8 ;~ 0396:0A13
cs=0x396;eip=0x000a16; 	X(PUSH(ax));	// 5093 push    ax ;~ 0396:0A16
cs=0x396;eip=0x000a17; 	R(CALLF(sub_27031,0));	// 5094 call    far ptr sub_27031 ;~ 0396:0A17
cs=0x396;eip=0x000a1c; 	T(ADD(sp, 2));	// 5095 add     sp, 2 ;~ 0396:0A1C
cs=0x396;eip=0x000a1f; 	T(MOV(ax, 0x0C));	// 5096 mov     ax, 0Ch ;~ 0396:0A1F
cs=0x396;eip=0x000a22; 	X(PUSH(ax));	// 5097 push    ax ;~ 0396:0A22
cs=0x396;eip=0x000a23; 	T(MOV(ax, 1));	// 5098 mov     ax, 1 ;~ 0396:0A23
cs=0x396;eip=0x000a26; 	X(PUSH(ax));	// 5099 push    ax ;~ 0396:0A26
cs=0x396;eip=0x000a27; 	T(MOV(ax, 0x13E));	// 5100 mov     ax, 13Eh ;~ 0396:0A27
cs=0x396;eip=0x000a2a; 	X(PUSH(ax));	// 5101 push    ax ;~ 0396:0A2A
cs=0x396;eip=0x000a2b; 	T(MOV(ax, 1));	// 5102 mov     ax, 1 ;~ 0396:0A2B
cs=0x396;eip=0x000a2e; 	X(PUSH(ax));	// 5103 push    ax ;~ 0396:0A2E
cs=0x396;eip=0x000a2f; 	R(CALLF(sub_2785b,0));	// 5104 call    far ptr sub_2785B ;~ 0396:0A2F
cs=0x396;eip=0x000a34; 	T(ADD(sp, 8));	// 5105 add     sp, 8 ;~ 0396:0A34
cs=0x396;eip=0x000a37; 	T(MOV(ax, 7));	// 5106 mov     ax, 7 ;~ 0396:0A37
cs=0x396;eip=0x000a3a; 	X(PUSH(ax));	// 5107 push    ax ;~ 0396:0A3A
cs=0x396;eip=0x000a3b; 	R(CALLF(sub_27031,0));	// 5108 call    far ptr sub_27031 ;~ 0396:0A3B
cs=0x396;eip=0x000a40; 	T(ADD(sp, 2));	// 5109 add     sp, 2 ;~ 0396:0A40
cs=0x396;eip=0x000a43; 	T(MOV(ax, 0x0B));	// 5110 mov     ax, 0Bh ;~ 0396:0A43
cs=0x396;eip=0x000a46; 	X(PUSH(ax));	// 5111 push    ax ;~ 0396:0A46
cs=0x396;eip=0x000a47; 	T(MOV(ax, 2));	// 5112 mov     ax, 2 ;~ 0396:0A47
cs=0x396;eip=0x000a4a; 	X(PUSH(ax));	// 5113 push    ax ;~ 0396:0A4A
cs=0x396;eip=0x000a4b; 	T(MOV(ax, 0x13D));	// 5114 mov     ax, 13Dh ;~ 0396:0A4B
cs=0x396;eip=0x000a4e; 	X(PUSH(ax));	// 5115 push    ax ;~ 0396:0A4E
cs=0x396;eip=0x000a4f; 	T(MOV(ax, 2));	// 5116 mov     ax, 2 ;~ 0396:0A4F
cs=0x396;eip=0x000a52; 	X(PUSH(ax));	// 5117 push    ax ;~ 0396:0A52
cs=0x396;eip=0x000a53; 	R(CALLF(sub_2785b,0));	// 5118 call    far ptr sub_2785B ;~ 0396:0A53
cs=0x396;eip=0x000a58; 	T(ADD(sp, 8));	// 5119 add     sp, 8 ;~ 0396:0A58
cs=0x396;eip=0x000a5b; 	T(SUB(ax, ax));	// 5120 sub     ax, ax ;~ 0396:0A5B
cs=0x396;eip=0x000a5d; 	X(MOV(word_2beda, ax));	// 5121 mov     word_2BEDA, ax ;~ 0396:0A5D
cs=0x396;eip=0x000a60; 	X(PUSH(ax));	// 5122 push    ax ;~ 0396:0A60
cs=0x396;eip=0x000a61; 	R(CALLF(sub_2714e,0));	// 5123 call    far ptr sub_2714E ;~ 0396:0A61
cs=0x396;eip=0x000a66; 	T(ADD(sp, 2));	// 5124 add     sp, 2 ;~ 0396:0A66
cs=0x396;eip=0x000a69; 	X(PUSH(cs));	// 5125 push    cs ;~ 0396:0A69
cs=0x396;eip=0x000a6a; 	R(CALL(sub_13b22,0));	// 5126 call    near ptr sub_13B22 ;~ 0396:0A6A
cs=0x396;eip=0x000a6d; 	T(CMP(byte_2becc, 0));	// 5127 cmp     byte_2BECC, 0 ;~ 0396:0A6D
cs=0x396;eip=0x000a72; 	R(JZ(loc_129b7));	// 5128 jz      short loc_129B7 ;~ 0396:0A72
cs=0x396;eip=0x000a74; 	R(JMP(loc_12099));	// 5129 jmp     loc_12099 ;~ 0396:0A74
loc_129b7:
	// 4666 
cs=0x396;eip=0x000a77; 	T(MOV(ax, 7));	// 5133 mov     ax, 7 ;~ 0396:0A77
cs=0x396;eip=0x000a7a; 	X(PUSH(ax));	// 5134 push    ax ;~ 0396:0A7A
cs=0x396;eip=0x000a7b; 	T(SUB(ax, ax));	// 5135 sub     ax, ax ;~ 0396:0A7B
cs=0x396;eip=0x000a7d; 	X(PUSH(ax));	// 5136 push    ax ;~ 0396:0A7D
cs=0x396;eip=0x000a7e; 	R(CALLF(sub_1c8f3,0));	// 5137 call    sub_1C8F3 ;~ 0396:0A7E
cs=0x396;eip=0x000a83; 	T(ADD(sp, 4));	// 5138 add     sp, 4 ;~ 0396:0A83
cs=0x396;eip=0x000a86; 	T(MOV(ax, 0x1C5C));	// 5139 mov     ax, 1C5Ch ;~ 0396:0A86
cs=0x396;eip=0x000a89; 	X(PUSH(ax));	// 5140 push    ax ;~ 0396:0A89
cs=0x396;eip=0x000a8a; 	X(PUSH(cs));	// 5141 push    cs ;~ 0396:0A8A
cs=0x396;eip=0x000a8b; 	R(CALL(sub_13934,0));	// 5142 call    near ptr sub_13934 ;~ 0396:0A8B
cs=0x396;eip=0x000a8e; 	T(ADD(sp, 2));	// 5143 add     sp, 2 ;~ 0396:0A8E
cs=0x396;eip=0x000a91; 	T(MOV(sp, bp));	// 5144 mov     sp, bp ;~ 0396:0A91
cs=0x396;eip=0x000a93; 	X(POP(bp));	// 5145 pop     bp ;~ 0396:0A93
cs=0x396;eip=0x000a94; 	R(RETF(0));	// 5146 retf ;~ 0396:0A94
sub_129d6:
	// 5156 
#undef var_a
#define var_a -0x0A
	// 5158 var_A           = word ptr -0Ah ;~ 0396:0A96
#undef var_8
#define var_8 -8
	// 5159 var_8           = word ptr -8 ;~ 0396:0A96
#undef var_6
#define var_6 -6
	// 5160 var_6           = word ptr -6 ;~ 0396:0A96
#undef var_4
#define var_4 -4
	// 5161 var_4           = word ptr -4 ;~ 0396:0A96
#undef var_2
#define var_2 -2
	// 5162 var_2           = word ptr -2 ;~ 0396:0A96
ret_396_a96:
	// 4667 
cs=0x396;eip=0x000a96; 	X(PUSH(bp));	// 5164 push    bp ;~ 0396:0A96
cs=0x396;eip=0x000a97; 	T(MOV(bp, sp));	// 5165 mov     bp, sp ;~ 0396:0A97
cs=0x396;eip=0x000a99; 	T(SUB(sp, 0x0A));	// 5166 sub     sp, 0Ah ;~ 0396:0A99
cs=0x396;eip=0x000a9c; 	X(PUSH(di));	// 5167 push    di ;~ 0396:0A9C
cs=0x396;eip=0x000a9d; 	X(PUSH(si));	// 5168 push    si ;~ 0396:0A9D
cs=0x396;eip=0x000a9e; 	X(XOR(byte_34f30, 0x80));	// 5169 xor     byte_34F30, 80h ;~ 0396:0A9E
cs=0x396;eip=0x000aa3; 	T(MOV(ax, 0x0F2A));	// 5170 mov     ax, 0F2Ah ;~ 0396:0AA3
cs=0x396;eip=0x000aa6; 	X(PUSH(ax));	// 5171 push    ax ;~ 0396:0AA6
cs=0x396;eip=0x000aa7; 	T(MOV(ax, 0x0AC1));	// 5172 mov     ax, 0AC1h ;~ 0396:0AA7
cs=0x396;eip=0x000aaa; 	X(PUSH(ax));	// 5173 push    ax ;~ 0396:0AAA
cs=0x396;eip=0x000aab; 	R(CALLF(sub_29b46,0));	// 5174 call    sub_29B46 ;~ 0396:0AAB
cs=0x396;eip=0x000ab0; 	T(ADD(sp, 4));	// 5175 add     sp, 4 ;~ 0396:0AB0
cs=0x396;eip=0x000ab3; 	T(MOV(ax, 0x0ABA));	// 5176 mov     ax, 0ABAh ;~ 0396:0AB3
cs=0x396;eip=0x000ab6; 	X(PUSH(ax));	// 5177 push    ax ;~ 0396:0AB6
cs=0x396;eip=0x000ab7; 	R(CALLF(sub_10d62,0));	// 5178 call    sub_10D62 ;~ 0396:0AB7
cs=0x396;eip=0x000abc; 	T(ADD(sp, 2));	// 5179 add     sp, 2 ;~ 0396:0ABC
cs=0x396;eip=0x000abf; 	T(SUB(al, al));	// 5180 sub     al, al ;~ 0396:0ABF
cs=0x396;eip=0x000ac1; 	X(MOV(byte_2bedf, al));	// 5181 mov     byte_2BEDF, al ;~ 0396:0AC1
cs=0x396;eip=0x000ac4; 	X(MOV(byte_2becc, al));	// 5182 mov     byte_2BECC, al ;~ 0396:0AC4
cs=0x396;eip=0x000ac7; 	T(MOV(ax, 1));	// 5183 mov     ax, 1 ;~ 0396:0AC7
cs=0x396;eip=0x000aca; 	X(MOV(word_2beda, ax));	// 5184 mov     word_2BEDA, ax ;~ 0396:0ACA
cs=0x396;eip=0x000acd; 	X(PUSH(ax));	// 5185 push    ax ;~ 0396:0ACD
cs=0x396;eip=0x000ace; 	R(CALLF(sub_2714e,0));	// 5186 call    far ptr sub_2714E ;~ 0396:0ACE
cs=0x396;eip=0x000ad3; 	T(ADD(sp, 2));	// 5187 add     sp, 2 ;~ 0396:0AD3
cs=0x396;eip=0x000ad6; 	T(SUB(ax, ax));	// 5188 sub     ax, ax ;~ 0396:0AD6
cs=0x396;eip=0x000ad8; 	X(PUSH(ax));	// 5189 push    ax ;~ 0396:0AD8
cs=0x396;eip=0x000ad9; 	R(CALLF(sub_27031,0));	// 5190 call    far ptr sub_27031 ;~ 0396:0AD9
cs=0x396;eip=0x000ade; 	T(ADD(sp, 2));	// 5191 add     sp, 2 ;~ 0396:0ADE
cs=0x396;eip=0x000ae1; 	T(MOV(ax, 0x0C7));	// 5192 mov     ax, 0C7h ; '«' ;~ 0396:0AE1
cs=0x396;eip=0x000ae4; 	X(PUSH(ax));	// 5193 push    ax ;~ 0396:0AE4
cs=0x396;eip=0x000ae5; 	T(SUB(ax, ax));	// 5194 sub     ax, ax ;~ 0396:0AE5
cs=0x396;eip=0x000ae7; 	X(PUSH(ax));	// 5195 push    ax ;~ 0396:0AE7
cs=0x396;eip=0x000ae8; 	T(MOV(ax, 0x13F));	// 5196 mov     ax, 13Fh ;~ 0396:0AE8
cs=0x396;eip=0x000aeb; 	X(PUSH(ax));	// 5197 push    ax ;~ 0396:0AEB
cs=0x396;eip=0x000aec; 	T(SUB(ax, ax));	// 5198 sub     ax, ax ;~ 0396:0AEC
cs=0x396;eip=0x000aee; 	X(PUSH(ax));	// 5199 push    ax ;~ 0396:0AEE
cs=0x396;eip=0x000aef; 	R(CALLF(sub_2785b,0));	// 5200 call    far ptr sub_2785B ;~ 0396:0AEF
cs=0x396;eip=0x000af4; 	T(ADD(sp, 8));	// 5201 add     sp, 8 ;~ 0396:0AF4
cs=0x396;eip=0x000af7; 	T(MOV(ax, 0x0F31));	// 5202 mov     ax, 0F31h ;~ 0396:0AF7
cs=0x396;eip=0x000afa; 	X(PUSH(ax));	// 5203 push    ax ;~ 0396:0AFA
cs=0x396;eip=0x000afb; 	T(MOV(ax, 0x0AC1));	// 5204 mov     ax, 0AC1h ;~ 0396:0AFB
cs=0x396;eip=0x000afe; 	X(PUSH(ax));	// 5205 push    ax ;~ 0396:0AFE
cs=0x396;eip=0x000aff; 	R(CALLF(sub_29b46,0));	// 5206 call    sub_29B46 ;~ 0396:0AFF
cs=0x396;eip=0x000b04; 	T(ADD(sp, 4));	// 5207 add     sp, 4 ;~ 0396:0B04
cs=0x396;eip=0x000b07; 	X(PUSH(word_38a9e));	// 5208 push    word_38A9E ;~ 0396:0B07
cs=0x396;eip=0x000b0b; 	X(PUSH(word_38a9c));	// 5209 push    word_38A9C ;~ 0396:0B0B
cs=0x396;eip=0x000b0f; 	T(MOV(ax, 0x0ABA));	// 5210 mov     ax, 0ABAh ;~ 0396:0B0F
cs=0x396;eip=0x000b12; 	X(PUSH(ax));	// 5211 push    ax ;~ 0396:0B12
cs=0x396;eip=0x000b13; 	R(CALLF(sub_10ee0,0));	// 5212 call    sub_10EE0 ;~ 0396:0B13
cs=0x396;eip=0x000b18; 	T(ADD(sp, 6));	// 5213 add     sp, 6 ;~ 0396:0B18
cs=0x396;eip=0x000b1b; 	T(MOV(ax, 0x2500));	// 5214 mov     ax, 2500h ;~ 0396:0B1B
cs=0x396;eip=0x000b1e; 	X(PUSH(ds));	// 5215 push    ds ;~ 0396:0B1E
cs=0x396;eip=0x000b1f; 	X(PUSH(ax));	// 5216 push    ax ;~ 0396:0B1F
cs=0x396;eip=0x000b20; 	X(PUSH(word_38a9e));	// 5217 push    word_38A9E ;~ 0396:0B20
cs=0x396;eip=0x000b24; 	X(PUSH(word_38a9c));	// 5218 push    word_38A9C ;~ 0396:0B24
cs=0x396;eip=0x000b28; 	R(CALLF(sub_1ab87,0));	// 5219 call    sub_1AB87 ;~ 0396:0B28
cs=0x396;eip=0x000b2d; 	T(ADD(sp, 8));	// 5220 add     sp, 8 ;~ 0396:0B2D
cs=0x396;eip=0x000b30; 	T(SUB(ax, ax));	// 5221 sub     ax, ax ;~ 0396:0B30
cs=0x396;eip=0x000b32; 	X(PUSH(ax));	// 5222 push    ax ;~ 0396:0B32
cs=0x396;eip=0x000b33; 	T(MOV(ax, 0x8B));	// 5223 mov     ax, 8Bh ; 'ã' ;~ 0396:0B33
cs=0x396;eip=0x000b36; 	X(PUSH(ax));	// 5224 push    ax ;~ 0396:0B36
cs=0x396;eip=0x000b37; 	T(SUB(ax, ax));	// 5225 sub     ax, ax ;~ 0396:0B37
cs=0x396;eip=0x000b39; 	X(PUSH(ax));	// 5226 push    ax ;~ 0396:0B39
cs=0x396;eip=0x000b3a; 	T(MOV(ax, 0x70));	// 5227 mov     ax, 70h ; 'p' ;~ 0396:0B3A
cs=0x396;eip=0x000b3d; 	X(PUSH(ax));	// 5228 push    ax ;~ 0396:0B3D
cs=0x396;eip=0x000b3e; 	X(PUSH(word_2c996));	// 5229 push    word_2C996 ;~ 0396:0B3E
cs=0x396;eip=0x000b42; 	T(MOV(ax, 0x2500));	// 5230 mov     ax, 2500h ;~ 0396:0B42
cs=0x396;eip=0x000b45; 	X(PUSH(ax));	// 5231 push    ax ;~ 0396:0B45
cs=0x396;eip=0x000b46; 	X(PUSH(cs));	// 5232 push    cs ;~ 0396:0B46
cs=0x396;eip=0x000b47; 	R(CALL(sub_178ec,0));	// 5233 call    near ptr sub_178EC ;~ 0396:0B47
cs=0x396;eip=0x000b4a; 	T(ADD(sp, 0x0C));	// 5234 add     sp, 0Ch ;~ 0396:0B4A
cs=0x396;eip=0x000b4d; 	T(MOV(ax, 0x0F36));	// 5235 mov     ax, 0F36h ;~ 0396:0B4D
cs=0x396;eip=0x000b50; 	X(PUSH(ax));	// 5236 push    ax ;~ 0396:0B50
cs=0x396;eip=0x000b51; 	T(MOV(ax, 0x0AC1));	// 5237 mov     ax, 0AC1h ;~ 0396:0B51
cs=0x396;eip=0x000b54; 	X(PUSH(ax));	// 5238 push    ax ;~ 0396:0B54
cs=0x396;eip=0x000b55; 	R(CALLF(sub_29b46,0));	// 5239 call    sub_29B46 ;~ 0396:0B55
cs=0x396;eip=0x000b5a; 	T(ADD(sp, 4));	// 5240 add     sp, 4 ;~ 0396:0B5A
cs=0x396;eip=0x000b5d; 	X(PUSH(word_38a9e));	// 5241 push    word_38A9E ;~ 0396:0B5D
cs=0x396;eip=0x000b61; 	X(PUSH(word_38a9c));	// 5242 push    word_38A9C ;~ 0396:0B61
cs=0x396;eip=0x000b65; 	T(MOV(ax, 0x0ABA));	// 5243 mov     ax, 0ABAh ;~ 0396:0B65
cs=0x396;eip=0x000b68; 	X(PUSH(ax));	// 5244 push    ax ;~ 0396:0B68
cs=0x396;eip=0x000b69; 	R(CALLF(sub_10ee0,0));	// 5245 call    sub_10EE0 ;~ 0396:0B69
cs=0x396;eip=0x000b6e; 	T(ADD(sp, 6));	// 5246 add     sp, 6 ;~ 0396:0B6E
cs=0x396;eip=0x000b71; 	T(MOV(ax, 0x2500));	// 5247 mov     ax, 2500h ;~ 0396:0B71
cs=0x396;eip=0x000b74; 	X(PUSH(ds));	// 5248 push    ds ;~ 0396:0B74
cs=0x396;eip=0x000b75; 	X(PUSH(ax));	// 5249 push    ax ;~ 0396:0B75
cs=0x396;eip=0x000b76; 	X(PUSH(word_38a9e));	// 5250 push    word_38A9E ;~ 0396:0B76
cs=0x396;eip=0x000b7a; 	X(PUSH(word_38a9c));	// 5251 push    word_38A9C ;~ 0396:0B7A
cs=0x396;eip=0x000b7e; 	R(CALLF(sub_1ab87,0));	// 5252 call    sub_1AB87 ;~ 0396:0B7E
cs=0x396;eip=0x000b83; 	T(ADD(sp, 8));	// 5253 add     sp, 8 ;~ 0396:0B83
cs=0x396;eip=0x000b86; 	T(SUB(ax, ax));	// 5254 sub     ax, ax ;~ 0396:0B86
cs=0x396;eip=0x000b88; 	X(PUSH(ax));	// 5255 push    ax ;~ 0396:0B88
cs=0x396;eip=0x000b89; 	T(MOV(ax, 0x8B));	// 5256 mov     ax, 8Bh ; 'ã' ;~ 0396:0B89
cs=0x396;eip=0x000b8c; 	X(PUSH(ax));	// 5257 push    ax ;~ 0396:0B8C
cs=0x396;eip=0x000b8d; 	T(MOV(ax, 0x70));	// 5258 mov     ax, 70h ; 'p' ;~ 0396:0B8D
cs=0x396;eip=0x000b90; 	X(PUSH(ax));	// 5259 push    ax ;~ 0396:0B90
cs=0x396;eip=0x000b91; 	T(MOV(ax, 0x0D0));	// 5260 mov     ax, 0D0h ; '–' ;~ 0396:0B91
cs=0x396;eip=0x000b94; 	X(PUSH(ax));	// 5261 push    ax ;~ 0396:0B94
cs=0x396;eip=0x000b95; 	X(PUSH(word_2c990));	// 5262 push    word_2C990 ;~ 0396:0B95
cs=0x396;eip=0x000b99; 	T(MOV(ax, 0x2500));	// 5263 mov     ax, 2500h ;~ 0396:0B99
cs=0x396;eip=0x000b9c; 	X(PUSH(ax));	// 5264 push    ax ;~ 0396:0B9C
cs=0x396;eip=0x000b9d; 	X(PUSH(cs));	// 5265 push    cs ;~ 0396:0B9D
cs=0x396;eip=0x000b9e; 	R(CALL(sub_178ec,0));	// 5266 call    near ptr sub_178EC ;~ 0396:0B9E
cs=0x396;eip=0x000ba1; 	T(ADD(sp, 0x0C));	// 5267 add     sp, 0Ch ;~ 0396:0BA1
cs=0x396;eip=0x000ba4; 	T(SUB(ax, ax));	// 5268 sub     ax, ax ;~ 0396:0BA4
cs=0x396;eip=0x000ba6; 	X(PUSH(ax));	// 5269 push    ax ;~ 0396:0BA6
cs=0x396;eip=0x000ba7; 	T(MOV(ax, 0x0E));	// 5270 mov     ax, 0Eh ;~ 0396:0BA7
cs=0x396;eip=0x000baa; 	X(PUSH(ax));	// 5271 push    ax ;~ 0396:0BAA
cs=0x396;eip=0x000bab; 	R(CALLF(sub_1c8f3,0));	// 5272 call    sub_1C8F3 ;~ 0396:0BAB
cs=0x396;eip=0x000bb0; 	T(ADD(sp, 4));	// 5273 add     sp, 4 ;~ 0396:0BB0
cs=0x396;eip=0x000bb3; 	T(SUB(ax, ax));	// 5274 sub     ax, ax ;~ 0396:0BB3
cs=0x396;eip=0x000bb5; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 5275 mov     [bp+var_6], ax ;~ 0396:0BB5
cs=0x396;eip=0x000bb8; 	X(PUSH(ax));	// 5276 push    ax ;~ 0396:0BB8
cs=0x396;eip=0x000bb9; 	T(MOV(ax, 0x21AA));	// 5277 mov     ax, 21AAh ;~ 0396:0BB9
cs=0x396;eip=0x000bbc; 	X(PUSH(ax));	// 5278 push    ax ;~ 0396:0BBC
cs=0x396;eip=0x000bbd; 	X(PUSH(cs));	// 5279 push    cs ;~ 0396:0BBD
cs=0x396;eip=0x000bbe; 	R(CALL(sub_139c2,0));	// 5280 call    near ptr sub_139C2 ;~ 0396:0BBE
cs=0x396;eip=0x000bc1; 	T(ADD(sp, 4));	// 5281 add     sp, 4 ;~ 0396:0BC1
cs=0x396;eip=0x000bc4; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 5282 mov     [bp+var_6], ax ;~ 0396:0BC4
cs=0x396;eip=0x000bc7; 	T(SUB(ax, ax));	// 5283 sub     ax, ax ;~ 0396:0BC7
cs=0x396;eip=0x000bc9; 	X(PUSH(ax));	// 5284 push    ax ;~ 0396:0BC9
cs=0x396;eip=0x000bca; 	T(MOV(ax, 0x0F));	// 5285 mov     ax, 0Fh ;~ 0396:0BCA
cs=0x396;eip=0x000bcd; 	X(PUSH(ax));	// 5286 push    ax ;~ 0396:0BCD
cs=0x396;eip=0x000bce; 	R(CALLF(sub_1c8f3,0));	// 5287 call    sub_1C8F3 ;~ 0396:0BCE
cs=0x396;eip=0x000bd3; 	T(ADD(sp, 4));	// 5288 add     sp, 4 ;~ 0396:0BD3
cs=0x396;eip=0x000bd6; 	T(CMP(byte_2c948, 1));	// 5289 cmp     byte_2C948, 1 ;~ 0396:0BD6
cs=0x396;eip=0x000bdb; 	R(JZ(loc_12b30));	// 5290 jz      short loc_12B30 ;~ 0396:0BDB
cs=0x396;eip=0x000bdd; 	T(MOV(al, byte_2c805));	// 5291 mov     al, byte_2C805 ;~ 0396:0BDD
cs=0x396;eip=0x000be0; 	T(ADD(al, 0x30));	// 5292 add     al, 30h ; '0' ;~ 0396:0BE0
cs=0x396;eip=0x000be2; 	X(MOV(byte_2e03c, al));	// 5293 mov     byte_2E03C, al ;~ 0396:0BE2
cs=0x396;eip=0x000be5; 	T(SUB(ax, ax));	// 5294 sub     ax, ax ;~ 0396:0BE5
cs=0x396;eip=0x000be7; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 5295 mov     [bp+var_6], ax ;~ 0396:0BE7
cs=0x396;eip=0x000bea; 	X(PUSH(ax));	// 5296 push    ax ;~ 0396:0BEA
cs=0x396;eip=0x000beb; 	T(MOV(ax, 0x21F3));	// 5297 mov     ax, 21F3h ;~ 0396:0BEB
cs=0x396;eip=0x000bee; 	R(JMP(loc_12b36));	// 5298 jmp     short loc_12B36 ;~ 0396:0BEE
loc_12b30:
	// 4668 
cs=0x396;eip=0x000bf0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 5302 push    [bp+var_6] ;~ 0396:0BF0
cs=0x396;eip=0x000bf3; 	T(MOV(ax, 0x21AA));	// 5303 mov     ax, 21AAh ;~ 0396:0BF3
loc_12b36:
	// 4669 
cs=0x396;eip=0x000bf6; 	X(PUSH(ax));	// 5306 push    ax ;~ 0396:0BF6
cs=0x396;eip=0x000bf7; 	X(PUSH(cs));	// 5307 push    cs ;~ 0396:0BF7
cs=0x396;eip=0x000bf8; 	R(CALL(sub_139c2,0));	// 5308 call    near ptr sub_139C2 ;~ 0396:0BF8
cs=0x396;eip=0x000bfb; 	T(ADD(sp, 4));	// 5309 add     sp, 4 ;~ 0396:0BFB
cs=0x396;eip=0x000bfe; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 5310 mov     [bp+var_6], ax ;~ 0396:0BFE
cs=0x396;eip=0x000c01; 	T(MOV(ax, 0x0C));	// 5311 mov     ax, 0Ch ;~ 0396:0C01
cs=0x396;eip=0x000c04; 	X(PUSH(ax));	// 5312 push    ax ;~ 0396:0C04
cs=0x396;eip=0x000c05; 	R(CALLF(sub_27031,0));	// 5313 call    far ptr sub_27031 ;~ 0396:0C05
cs=0x396;eip=0x000c0a; 	T(ADD(sp, 2));	// 5314 add     sp, 2 ;~ 0396:0C0A
cs=0x396;eip=0x000c0d; 	T(MOV(ax, 0x0C3));	// 5315 mov     ax, 0C3h ; '√' ;~ 0396:0C0D
cs=0x396;eip=0x000c10; 	X(PUSH(ax));	// 5316 push    ax ;~ 0396:0C10
cs=0x396;eip=0x000c11; 	T(MOV(ax, 0x0B3));	// 5317 mov     ax, 0B3h ; '≥' ;~ 0396:0C11
cs=0x396;eip=0x000c14; 	X(PUSH(ax));	// 5318 push    ax ;~ 0396:0C14
cs=0x396;eip=0x000c15; 	T(MOV(ax, 0x124));	// 5319 mov     ax, 124h ;~ 0396:0C15
cs=0x396;eip=0x000c18; 	X(PUSH(ax));	// 5320 push    ax ;~ 0396:0C18
cs=0x396;eip=0x000c19; 	T(MOV(ax, 0x0A4));	// 5321 mov     ax, 0A4h ; '§' ;~ 0396:0C19
cs=0x396;eip=0x000c1c; 	X(PUSH(ax));	// 5322 push    ax ;~ 0396:0C1C
cs=0x396;eip=0x000c1d; 	X(PUSH(cs));	// 5323 push    cs ;~ 0396:0C1D
cs=0x396;eip=0x000c1e; 	R(CALL(sub_137a4,0));	// 5324 call    near ptr sub_137A4 ;~ 0396:0C1E
cs=0x396;eip=0x000c21; 	T(ADD(sp, 8));	// 5325 add     sp, 8 ;~ 0396:0C21
cs=0x396;eip=0x000c24; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 5326 mov     [bp+var_4], 0 ;~ 0396:0C24
loc_12b69:
	// 4670 
cs=0x396;eip=0x000c29; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 5329 mov     bx, [bp+var_4] ;~ 0396:0C29
cs=0x396;eip=0x000c2c; 	X(MOV(*(raddr(ds,bx-0x1586)), 0x20));	// 5330 mov     byte ptr [bx-1586h], 20h ; ' ' ;~ 0396:0C2C
cs=0x396;eip=0x000c31; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 5331 inc     [bp+var_4] ;~ 0396:0C31
cs=0x396;eip=0x000c34; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x0F));	// 5332 cmp     [bp+var_4], 0Fh ;~ 0396:0C34
cs=0x396;eip=0x000c38; 	R(JL(loc_12b69));	// 5333 jl      short loc_12B69 ;~ 0396:0C38
cs=0x396;eip=0x000c3a; 	X(MOV(byte_3a8c9, 0x80));	// 5334 mov     byte_3A8C9, 80h ; 'Ä' ;~ 0396:0C3A
cs=0x396;eip=0x000c3f; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x15));	// 5335 mov     [bp+var_8], 15h ;~ 0396:0C3F
cs=0x396;eip=0x000c44; 	X(PUSH(cs));	// 5336 push    cs ;~ 0396:0C44
cs=0x396;eip=0x000c45; 	R(CALL(sub_13b22,0));	// 5337 call    near ptr sub_13B22 ;~ 0396:0C45
cs=0x396;eip=0x000c48; 	T(SUB(ax, ax));	// 5338 sub     ax, ax ;~ 0396:0C48
cs=0x396;eip=0x000c4a; 	X(MOV(word_2beda, ax));	// 5339 mov     word_2BEDA, ax ;~ 0396:0C4A
cs=0x396;eip=0x000c4d; 	X(PUSH(ax));	// 5340 push    ax ;~ 0396:0C4D
cs=0x396;eip=0x000c4e; 	R(CALLF(sub_2714e,0));	// 5341 call    far ptr sub_2714E ;~ 0396:0C4E
cs=0x396;eip=0x000c53; 	T(ADD(sp, 2));	// 5342 add     sp, 2 ;~ 0396:0C53
cs=0x396;eip=0x000c56; 	T(SUB(ax, ax));	// 5343 sub     ax, ax ;~ 0396:0C56
cs=0x396;eip=0x000c58; 	X(PUSH(ax));	// 5344 push    ax ;~ 0396:0C58
cs=0x396;eip=0x000c59; 	T(MOV(ax, 0x0A));	// 5345 mov     ax, 0Ah ;~ 0396:0C59
cs=0x396;eip=0x000c5c; 	X(PUSH(ax));	// 5346 push    ax ;~ 0396:0C5C
cs=0x396;eip=0x000c5d; 	R(CALLF(sub_1c8f3,0));	// 5347 call    sub_1C8F3 ;~ 0396:0C5D
cs=0x396;eip=0x000c62; 	T(ADD(sp, 4));	// 5348 add     sp, 4 ;~ 0396:0C62
cs=0x396;eip=0x000c65; 	T(SUB(ax, ax));	// 5349 sub     ax, ax ;~ 0396:0C65
cs=0x396;eip=0x000c67; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 5350 mov     [bp+var_2], ax ;~ 0396:0C67
cs=0x396;eip=0x000c6a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 5351 mov     [bp+var_4], ax ;~ 0396:0C6A
cs=0x396;eip=0x000c6d; 	X(MOV(byte_34f9b, al));	// 5352 mov     byte_34F9B, al ;~ 0396:0C6D
loc_12bb0:
	// 4671 
cs=0x396;eip=0x000c70; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x80));	// 5356 cmp     [bp+var_8], 80h ; 'Ä' ;~ 0396:0C70
cs=0x396;eip=0x000c75; 	R(JL(loc_12bba));	// 5357 jl      short loc_12BBA ;~ 0396:0C75
cs=0x396;eip=0x000c77; 	R(JMP(loc_12d62));	// 5358 jmp     loc_12D62 ;~ 0396:0C77
loc_12bba:
	// 4672 
cs=0x396;eip=0x000c7a; 	T(SUB(ax, ax));	// 5362 sub     ax, ax ;~ 0396:0C7A
cs=0x396;eip=0x000c7c; 	X(PUSH(ax));	// 5363 push    ax ;~ 0396:0C7C
cs=0x396;eip=0x000c7d; 	R(CALLF(sub_27031,0));	// 5364 call    far ptr sub_27031 ;~ 0396:0C7D
cs=0x396;eip=0x000c82; 	T(ADD(sp, 2));	// 5365 add     sp, 2 ;~ 0396:0C82
cs=0x396;eip=0x000c85; 	T(MOV(ax, 0x0C0));	// 5366 mov     ax, 0C0h ; '¿' ;~ 0396:0C85
cs=0x396;eip=0x000c88; 	X(PUSH(ax));	// 5367 push    ax ;~ 0396:0C88
cs=0x396;eip=0x000c89; 	T(MOV(ax, 0x0A8));	// 5368 mov     ax, 0A8h ; '®' ;~ 0396:0C89
cs=0x396;eip=0x000c8c; 	X(PUSH(ax));	// 5369 push    ax ;~ 0396:0C8C
cs=0x396;eip=0x000c8d; 	R(CALLF(sub_26fb8,0));	// 5370 call    sub_26FB8 ;~ 0396:0C8D
cs=0x396;eip=0x000c92; 	T(ADD(sp, 4));	// 5371 add     sp, 4 ;~ 0396:0C92
cs=0x396;eip=0x000c95; 	T(MOV(ax, 0x0C0));	// 5372 mov     ax, 0C0h ; '¿' ;~ 0396:0C95
cs=0x396;eip=0x000c98; 	X(PUSH(ax));	// 5373 push    ax ;~ 0396:0C98
cs=0x396;eip=0x000c99; 	T(MOV(ax, 0x11F));	// 5374 mov     ax, 11Fh ;~ 0396:0C99
cs=0x396;eip=0x000c9c; 	X(PUSH(ax));	// 5375 push    ax ;~ 0396:0C9C
cs=0x396;eip=0x000c9d; 	R(CALLF(sub_26d92,0));	// 5376 call    sub_26D92 ;~ 0396:0C9D
cs=0x396;eip=0x000ca2; 	T(ADD(sp, 4));	// 5377 add     sp, 4 ;~ 0396:0CA2
cs=0x396;eip=0x000ca5; 	X(XOR(*(db*)(raddr(ss,bp+var_4)), 0x0F));	// 5378 xor     byte ptr [bp+var_4], 0Fh ;~ 0396:0CA5
cs=0x396;eip=0x000ca9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 5379 mov     ax, [bp+var_2] ;~ 0396:0CA9
cs=0x396;eip=0x000cac; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), ax));	// 5380 cmp     [bp+var_8], ax ;~ 0396:0CAC
cs=0x396;eip=0x000caf; 	R(JZ(loc_12c4f));	// 5381 jz      short loc_12C4F ;~ 0396:0CAF
cs=0x396;eip=0x000cb1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 5382 mov     ax, [bp+var_8] ;~ 0396:0CB1
cs=0x396;eip=0x000cb4; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 5383 mov     [bp+var_2], ax ;~ 0396:0CB4
cs=0x396;eip=0x000cb7; 	T(MOV(ax, 0x15));	// 5384 mov     ax, 15h ;~ 0396:0CB7
cs=0x396;eip=0x000cba; 	X(PUSH(ax));	// 5385 push    ax ;~ 0396:0CBA
cs=0x396;eip=0x000cbb; 	T(MOV(ax, 0x17));	// 5386 mov     ax, 17h ;~ 0396:0CBB
cs=0x396;eip=0x000cbe; 	X(PUSH(ax));	// 5387 push    ax ;~ 0396:0CBE
cs=0x396;eip=0x000cbf; 	R(CALLF(sub_1c90c,0));	// 5388 call    sub_1C90C ;~ 0396:0CBF
cs=0x396;eip=0x000cc4; 	T(ADD(sp, 4));	// 5389 add     sp, 4 ;~ 0396:0CC4
cs=0x396;eip=0x000cc7; 	T(SUB(ax, ax));	// 5390 sub     ax, ax ;~ 0396:0CC7
cs=0x396;eip=0x000cc9; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 5391 mov     [bp+var_6], ax ;~ 0396:0CC9
cs=0x396;eip=0x000ccc; 	X(PUSH(ax));	// 5392 push    ax ;~ 0396:0CCC
cs=0x396;eip=0x000ccd; 	T(MOV(ax, 0x0EA7A));	// 5393 mov     ax, 0EA7Ah ;~ 0396:0CCD
cs=0x396;eip=0x000cd0; 	X(PUSH(ax));	// 5394 push    ax ;~ 0396:0CD0
cs=0x396;eip=0x000cd1; 	X(PUSH(cs));	// 5395 push    cs ;~ 0396:0CD1
cs=0x396;eip=0x000cd2; 	R(CALL(sub_13a16,0));	// 5396 call    near ptr sub_13A16 ;~ 0396:0CD2
cs=0x396;eip=0x000cd5; 	T(ADD(sp, 4));	// 5397 add     sp, 4 ;~ 0396:0CD5
cs=0x396;eip=0x000cd8; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 5398 mov     [bp+var_6], ax ;~ 0396:0CD8
cs=0x396;eip=0x000cdb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 5399 mov     bx, [bp+var_8] ;~ 0396:0CDB
cs=0x396;eip=0x000cde; 	X(MOV(*(raddr(ds,bx-0x159B)), 0x80));	// 5400 mov     byte ptr [bx-159Bh], 80h ; 'Ä' ;~ 0396:0CDE
cs=0x396;eip=0x000ce3; 	T(MOV(ax, 0x15));	// 5401 mov     ax, 15h ;~ 0396:0CE3
cs=0x396;eip=0x000ce6; 	X(PUSH(ax));	// 5402 push    ax ;~ 0396:0CE6
cs=0x396;eip=0x000ce7; 	T(MOV(ax, 0x17));	// 5403 mov     ax, 17h ;~ 0396:0CE7
cs=0x396;eip=0x000cea; 	X(PUSH(ax));	// 5404 push    ax ;~ 0396:0CEA
cs=0x396;eip=0x000ceb; 	R(CALLF(sub_1c90c,0));	// 5405 call    sub_1C90C ;~ 0396:0CEB
cs=0x396;eip=0x000cf0; 	T(ADD(sp, 4));	// 5406 add     sp, 4 ;~ 0396:0CF0
cs=0x396;eip=0x000cf3; 	T(SUB(ax, ax));	// 5407 sub     ax, ax ;~ 0396:0CF3
cs=0x396;eip=0x000cf5; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 5408 mov     [bp+var_6], ax ;~ 0396:0CF5
cs=0x396;eip=0x000cf8; 	X(PUSH(ax));	// 5409 push    ax ;~ 0396:0CF8
cs=0x396;eip=0x000cf9; 	T(MOV(ax, 0x0EA7A));	// 5410 mov     ax, 0EA7Ah ;~ 0396:0CF9
cs=0x396;eip=0x000cfc; 	X(PUSH(ax));	// 5411 push    ax ;~ 0396:0CFC
cs=0x396;eip=0x000cfd; 	X(PUSH(cs));	// 5412 push    cs ;~ 0396:0CFD
cs=0x396;eip=0x000cfe; 	R(CALL(sub_13a16,0));	// 5413 call    near ptr sub_13A16 ;~ 0396:0CFE
cs=0x396;eip=0x000d01; 	T(ADD(sp, 4));	// 5414 add     sp, 4 ;~ 0396:0D01
cs=0x396;eip=0x000d04; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 5415 mov     [bp+var_6], ax ;~ 0396:0D04
cs=0x396;eip=0x000d07; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 5416 mov     bx, [bp+var_8] ;~ 0396:0D07
cs=0x396;eip=0x000d0a; 	X(MOV(*(raddr(ds,bx-0x159B)), 0x20));	// 5417 mov     byte ptr [bx-159Bh], 20h ; ' ' ;~ 0396:0D0A
loc_12c4f:
	// 4673 
cs=0x396;eip=0x000d0f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 5420 push    [bp+var_4] ;~ 0396:0D0F
cs=0x396;eip=0x000d12; 	R(CALLF(sub_27031,0));	// 5421 call    far ptr sub_27031 ;~ 0396:0D12
cs=0x396;eip=0x000d17; 	T(ADD(sp, 2));	// 5422 add     sp, 2 ;~ 0396:0D17
cs=0x396;eip=0x000d1a; 	T(MOV(ax, 0x0C0));	// 5423 mov     ax, 0C0h ; '¿' ;~ 0396:0D1A
cs=0x396;eip=0x000d1d; 	X(PUSH(ax));	// 5424 push    ax ;~ 0396:0D1D
cs=0x396;eip=0x000d1e; 	X(PUSH(word_34f25));	// 5425 push    word_34F25 ;~ 0396:0D1E
cs=0x396;eip=0x000d22; 	R(CALLF(sub_26fb8,0));	// 5426 call    sub_26FB8 ;~ 0396:0D22
cs=0x396;eip=0x000d27; 	T(ADD(sp, 4));	// 5427 add     sp, 4 ;~ 0396:0D27
cs=0x396;eip=0x000d2a; 	T(MOV(ax, 0x0C0));	// 5428 mov     ax, 0C0h ; '¿' ;~ 0396:0D2A
cs=0x396;eip=0x000d2d; 	X(PUSH(ax));	// 5429 push    ax ;~ 0396:0D2D
cs=0x396;eip=0x000d2e; 	T(MOV(ax, word_34f25));	// 5430 mov     ax, word_34F25 ;~ 0396:0D2E
cs=0x396;eip=0x000d31; 	T(ADD(ax, 7));	// 5431 add     ax, 7 ;~ 0396:0D31
cs=0x396;eip=0x000d34; 	X(PUSH(ax));	// 5432 push    ax ;~ 0396:0D34
cs=0x396;eip=0x000d35; 	R(CALLF(sub_26d92,0));	// 5433 call    sub_26D92 ;~ 0396:0D35
cs=0x396;eip=0x000d3a; 	T(ADD(sp, 4));	// 5434 add     sp, 4 ;~ 0396:0D3A
cs=0x396;eip=0x000d3d; 	T(MOV(ax, 2));	// 5435 mov     ax, 2 ;~ 0396:0D3D
cs=0x396;eip=0x000d40; 	X(PUSH(ax));	// 5436 push    ax ;~ 0396:0D40
cs=0x396;eip=0x000d41; 	R(CALLF(sub_26ffb,0));	// 5437 call    sub_26FFB ;~ 0396:0D41
cs=0x396;eip=0x000d46; 	T(ADD(sp, 2));	// 5438 add     sp, 2 ;~ 0396:0D46
cs=0x396;eip=0x000d49; 	T(ax = bp+var_a);	// 5439 lea     ax, [bp+var_A] ;~ 0396:0D49
cs=0x396;eip=0x000d4c; 	X(PUSH(ax));	// 5440 push    ax ;~ 0396:0D4C
cs=0x396;eip=0x000d4d; 	R(CALLF(sub_10f80,0));	// 5441 call    sub_10F80 ;~ 0396:0D4D
cs=0x396;eip=0x000d52; 	T(ADD(sp, 2));	// 5442 add     sp, 2 ;~ 0396:0D52
cs=0x396;eip=0x000d55; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 5443 mov     ax, [bp+var_A] ;~ 0396:0D55
cs=0x396;eip=0x000d58; 	T(CMP(ax, 8));	// 5444 cmp     ax, 8 ;~ 0396:0D58
cs=0x396;eip=0x000d5b; 	R(JZ(loc_12cc2));	// 5445 jz      short loc_12CC2 ;~ 0396:0D5B
cs=0x396;eip=0x000d5d; 	T(CMP(ax, 0x0D));	// 5446 cmp     ax, 0Dh ;~ 0396:0D5D
cs=0x396;eip=0x000d60; 	R(JNZ(loc_12ca5));	// 5447 jnz     short loc_12CA5 ;~ 0396:0D60
cs=0x396;eip=0x000d62; 	R(JMP(loc_12d5a));	// 5448 jmp     loc_12D5A ;~ 0396:0D62
loc_12ca5:
	// 4674 
cs=0x396;eip=0x000d65; 	T(CMP(ax, 0x1E));	// 5452 cmp     ax, 1Eh ;~ 0396:0D65
cs=0x396;eip=0x000d68; 	R(JNZ(loc_12cad));	// 5453 jnz     short loc_12CAD ;~ 0396:0D68
cs=0x396;eip=0x000d6a; 	R(JMP(loc_12d3e));	// 5454 jmp     loc_12D3E ;~ 0396:0D6A
loc_12cad:
	// 4675 
cs=0x396;eip=0x000d6d; 	T(CMP(ax, 0x94));	// 5458 cmp     ax, 94h ; 'î' ;~ 0396:0D6D
cs=0x396;eip=0x000d70; 	R(JZ(loc_12cd5));	// 5459 jz      short loc_12CD5 ;~ 0396:0D70
cs=0x396;eip=0x000d72; 	T(CMP(ax, 0x96));	// 5460 cmp     ax, 96h ; 'ñ' ;~ 0396:0D72
cs=0x396;eip=0x000d75; 	R(JNZ(loc_12cba));	// 5461 jnz     short loc_12CBA ;~ 0396:0D75
cs=0x396;eip=0x000d77; 	R(JMP(loc_12d4e));	// 5462 jmp     loc_12D4E ;~ 0396:0D77
loc_12cba:
	// 4676 
cs=0x396;eip=0x000d7a; 	T(CMP(ax, 0x9E));	// 5466 cmp     ax, 9Eh ; 'û' ;~ 0396:0D7A
cs=0x396;eip=0x000d7d; 	R(JZ(loc_12d3e));	// 5467 jz      short loc_12D3E ;~ 0396:0D7D
cs=0x396;eip=0x000d7f; 	R(JMP(loc_12cde));	// 5468 jmp     short loc_12CDE ;~ 0396:0D7F
loc_12cc2:
	// 4677 
cs=0x396;eip=0x000d82; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x15));	// 5473 cmp     [bp+var_8], 15h ;~ 0396:0D82
cs=0x396;eip=0x000d86; 	R(JZ(loc_12cd0));	// 5474 jz      short loc_12CD0 ;~ 0396:0D86
cs=0x396;eip=0x000d88; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 5475 mov     bx, [bp+var_8] ;~ 0396:0D88
cs=0x396;eip=0x000d8b; 	X(MOV(*(raddr(ds,bx-0x159C)), 0x20));	// 5476 mov     byte ptr [bx-159Ch], 20h ; ' ' ;~ 0396:0D8B
loc_12cd0:
	// 4678 
cs=0x396;eip=0x000d90; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 5480 mov     [bp+var_2], 0 ;~ 0396:0D90
loc_12cd5:
	// 4679 
cs=0x396;eip=0x000d95; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x15));	// 5483 cmp     [bp+var_8], 15h ;~ 0396:0D95
cs=0x396;eip=0x000d99; 	R(JLE(loc_12cde));	// 5484 jle     short loc_12CDE ;~ 0396:0D99
cs=0x396;eip=0x000d9b; 	X(DEC(*(dw*)(raddr(ss,bp+var_8))));	// 5485 dec     [bp+var_8] ;~ 0396:0D9B
loc_12cde:
	// 4680 
cs=0x396;eip=0x000d9e; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x20));	// 5489 cmp     [bp+var_A], 20h ; ' ' ;~ 0396:0D9E
cs=0x396;eip=0x000da2; 	R(JL(loc_12cea));	// 5490 jl      short loc_12CEA ;~ 0396:0DA2
cs=0x396;eip=0x000da4; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x39));	// 5491 cmp     [bp+var_A], 39h ; '9' ;~ 0396:0DA4
cs=0x396;eip=0x000da8; 	R(JLE(loc_12d08));	// 5492 jle     short loc_12D08 ;~ 0396:0DA8
loc_12cea:
	// 4681 
cs=0x396;eip=0x000daa; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x41));	// 5495 cmp     [bp+var_A], 41h ; 'A' ;~ 0396:0DAA
cs=0x396;eip=0x000dae; 	R(JL(loc_12cf6));	// 5496 jl      short loc_12CF6 ;~ 0396:0DAE
cs=0x396;eip=0x000db0; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x5A));	// 5497 cmp     [bp+var_A], 5Ah ; 'Z' ;~ 0396:0DB0
cs=0x396;eip=0x000db4; 	R(JLE(loc_12d08));	// 5498 jle     short loc_12D08 ;~ 0396:0DB4
loc_12cf6:
	// 4682 
cs=0x396;eip=0x000db6; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x61));	// 5501 cmp     [bp+var_A], 61h ; 'a' ;~ 0396:0DB6
cs=0x396;eip=0x000dba; 	R(JGE(loc_12cff));	// 5502 jge     short loc_12CFF ;~ 0396:0DBA
cs=0x396;eip=0x000dbc; 	R(JMP(loc_12bb0));	// 5503 jmp     loc_12BB0 ;~ 0396:0DBC
loc_12cff:
	// 4683 
cs=0x396;eip=0x000dbf; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x7A));	// 5507 cmp     [bp+var_A], 7Ah ; 'z' ;~ 0396:0DBF
cs=0x396;eip=0x000dc3; 	R(JLE(loc_12d08));	// 5508 jle     short loc_12D08 ;~ 0396:0DC3
cs=0x396;eip=0x000dc5; 	R(JMP(loc_12bb0));	// 5509 jmp     loc_12BB0 ;~ 0396:0DC5
loc_12d08:
	// 4684 
cs=0x396;eip=0x000dc8; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x23));	// 5514 cmp     [bp+var_A], 23h ; '#' ;~ 0396:0DC8
cs=0x396;eip=0x000dcc; 	R(JNZ(loc_12d11));	// 5515 jnz     short loc_12D11 ;~ 0396:0DCC
cs=0x396;eip=0x000dce; 	R(JMP(loc_12bb0));	// 5516 jmp     loc_12BB0 ;~ 0396:0DCE
loc_12d11:
	// 4685 
cs=0x396;eip=0x000dd1; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x2A));	// 5520 cmp     [bp+var_A], 2Ah ; '*' ;~ 0396:0DD1
cs=0x396;eip=0x000dd5; 	R(JNZ(loc_12d1a));	// 5521 jnz     short loc_12D1A ;~ 0396:0DD5
cs=0x396;eip=0x000dd7; 	R(JMP(loc_12bb0));	// 5522 jmp     loc_12BB0 ;~ 0396:0DD7
loc_12d1a:
	// 4686 
cs=0x396;eip=0x000dda; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x22));	// 5526 cmp     [bp+var_8], 22h ; '"' ;~ 0396:0DDA
cs=0x396;eip=0x000dde; 	R(JG(loc_12d2a));	// 5527 jg      short loc_12D2A ;~ 0396:0DDE
cs=0x396;eip=0x000de0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 5528 mov     bx, [bp+var_8] ;~ 0396:0DE0
cs=0x396;eip=0x000de3; 	T(MOV(al, *(db*)(raddr(ss,bp+var_a))));	// 5529 mov     al, byte ptr [bp+var_A] ;~ 0396:0DE3
cs=0x396;eip=0x000de6; 	X(MOV(*(raddr(ds,bx-0x159B)), al));	// 5530 mov     [bx-159Bh], al ;~ 0396:0DE6
loc_12d2a:
	// 4687 
cs=0x396;eip=0x000dea; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 5533 mov     [bp+var_2], 0 ;~ 0396:0DEA
cs=0x396;eip=0x000def; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x23));	// 5534 cmp     [bp+var_8], 23h ; '#' ;~ 0396:0DEF
cs=0x396;eip=0x000df3; 	R(JL(loc_12d38));	// 5535 jl      short loc_12D38 ;~ 0396:0DF3
cs=0x396;eip=0x000df5; 	R(JMP(loc_12bb0));	// 5536 jmp     loc_12BB0 ;~ 0396:0DF5
loc_12d38:
	// 4688 
cs=0x396;eip=0x000df8; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 5540 inc     [bp+var_8] ;~ 0396:0DF8
cs=0x396;eip=0x000dfb; 	R(JMP(loc_12bb0));	// 5541 jmp     loc_12BB0 ;~ 0396:0DFB
loc_12d3e:
	// 4689 
cs=0x396;eip=0x000dfe; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x23));	// 5546 cmp     [bp+var_8], 23h ; '#' ;~ 0396:0DFE
cs=0x396;eip=0x000e02; 	R(JZ(loc_12cd0));	// 5547 jz      short loc_12CD0 ;~ 0396:0E02
cs=0x396;eip=0x000e04; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 5548 mov     bx, [bp+var_8] ;~ 0396:0E04
cs=0x396;eip=0x000e07; 	X(MOV(*(raddr(ds,bx-0x159B)), 0x20));	// 5549 mov     byte ptr [bx-159Bh], 20h ; ' ' ;~ 0396:0E07
cs=0x396;eip=0x000e0c; 	R(JMP(loc_12cd0));	// 5550 jmp     short loc_12CD0 ;~ 0396:0E0C
loc_12d4e:
	// 4690 
cs=0x396;eip=0x000e0e; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x23));	// 5554 cmp     [bp+var_8], 23h ; '#' ;~ 0396:0E0E
cs=0x396;eip=0x000e12; 	R(JGE(loc_12cde));	// 5555 jge     short loc_12CDE ;~ 0396:0E12
cs=0x396;eip=0x000e14; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 5556 inc     [bp+var_8] ;~ 0396:0E14
cs=0x396;eip=0x000e17; 	R(JMP(loc_12cde));	// 5557 jmp     short loc_12CDE ;~ 0396:0E17
loc_12d5a:
	// 4691 
cs=0x396;eip=0x000e1a; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x80));	// 5562 mov     [bp+var_8], 80h ; 'Ä' ;~ 0396:0E1A
cs=0x396;eip=0x000e1f; 	R(JMP(loc_12cde));	// 5563 jmp     loc_12CDE ;~ 0396:0E1F
loc_12d62:
	// 4692 
cs=0x396;eip=0x000e22; 	X(MOV(byte_352c5, 0));	// 5567 mov     byte_352C5, 0 ;~ 0396:0E22
cs=0x396;eip=0x000e27; 	X(MOV(byte_3a8c9, 0));	// 5568 mov     byte_3A8C9, 0 ;~ 0396:0E27
cs=0x396;eip=0x000e2c; 	T(MOV(ax, 0x0F3B));	// 5569 mov     ax, 0F3Bh ;~ 0396:0E2C
cs=0x396;eip=0x000e2f; 	X(PUSH(ax));	// 5570 push    ax ;~ 0396:0E2F
cs=0x396;eip=0x000e30; 	T(MOV(ax, 0x0EA7A));	// 5571 mov     ax, 0EA7Ah ;~ 0396:0E30
cs=0x396;eip=0x000e33; 	X(PUSH(ax));	// 5572 push    ax ;~ 0396:0E33
cs=0x396;eip=0x000e34; 	R(CALLF(sub_29b78,0));	// 5573 call    sub_29B78 ;~ 0396:0E34
cs=0x396;eip=0x000e39; 	T(ADD(sp, 4));	// 5574 add     sp, 4 ;~ 0396:0E39
cs=0x396;eip=0x000e3c; 	T(OR(ax, ax));	// 5575 or      ax, ax ;~ 0396:0E3C
cs=0x396;eip=0x000e3e; 	R(JNZ(loc_12db4));	// 5576 jnz     short loc_12DB4 ;~ 0396:0E3E
cs=0x396;eip=0x000e40; 	X(MOV(byte_352c5, 1));	// 5577 mov     byte_352C5, 1 ;~ 0396:0E40
cs=0x396;eip=0x000e45; 	T(SUB(ax, ax));	// 5578 sub     ax, ax ;~ 0396:0E45
cs=0x396;eip=0x000e47; 	X(PUSH(ax));	// 5579 push    ax ;~ 0396:0E47
cs=0x396;eip=0x000e48; 	T(MOV(ax, 0x0A));	// 5580 mov     ax, 0Ah ;~ 0396:0E48
cs=0x396;eip=0x000e4b; 	X(PUSH(ax));	// 5581 push    ax ;~ 0396:0E4B
cs=0x396;eip=0x000e4c; 	R(CALLF(sub_1c8f3,0));	// 5582 call    sub_1C8F3 ;~ 0396:0E4C
cs=0x396;eip=0x000e51; 	T(ADD(sp, 4));	// 5583 add     sp, 4 ;~ 0396:0E51
cs=0x396;eip=0x000e54; 	T(SUB(ax, ax));	// 5584 sub     ax, ax ;~ 0396:0E54
cs=0x396;eip=0x000e56; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 5585 mov     [bp+var_6], ax ;~ 0396:0E56
cs=0x396;eip=0x000e59; 	X(PUSH(ax));	// 5586 push    ax ;~ 0396:0E59
cs=0x396;eip=0x000e5a; 	T(MOV(ax, 0x2204));	// 5587 mov     ax, 2204h ;~ 0396:0E5A
cs=0x396;eip=0x000e5d; 	X(PUSH(ax));	// 5588 push    ax ;~ 0396:0E5D
cs=0x396;eip=0x000e5e; 	X(PUSH(cs));	// 5589 push    cs ;~ 0396:0E5E
cs=0x396;eip=0x000e5f; 	R(CALL(sub_139c2,0));	// 5590 call    near ptr sub_139C2 ;~ 0396:0E5F
cs=0x396;eip=0x000e62; 	T(ADD(sp, 4));	// 5591 add     sp, 4 ;~ 0396:0E62
cs=0x396;eip=0x000e65; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 5592 mov     [bp+var_6], ax ;~ 0396:0E65
cs=0x396;eip=0x000e68; 	T(SUB(ax, ax));	// 5593 sub     ax, ax ;~ 0396:0E68
cs=0x396;eip=0x000e6a; 	X(PUSH(ax));	// 5594 push    ax ;~ 0396:0E6A
cs=0x396;eip=0x000e6b; 	X(PUSH(cs));	// 5595 push    cs ;~ 0396:0E6B
cs=0x396;eip=0x000e6c; 	R(CALL(sub_13ace,0));	// 5596 call    near ptr sub_13ACE ;~ 0396:0E6C
cs=0x396;eip=0x000e6f; 	T(ADD(sp, 2));	// 5597 add     sp, 2 ;~ 0396:0E6F
cs=0x396;eip=0x000e72; 	R(JMP(loc_12db9));	// 5598 jmp     short loc_12DB9 ;~ 0396:0E72
loc_12db4:
	// 4693 
cs=0x396;eip=0x000e74; 	X(MOV(byte_352c5, 0));	// 5602 mov     byte_352C5, 0 ;~ 0396:0E74
loc_12db9:
	// 4694 
cs=0x396;eip=0x000e79; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 5605 mov     [bp+var_4], 0 ;~ 0396:0E79
cs=0x396;eip=0x000e7e; 	R(JMP(loc_12dc3));	// 5606 jmp     short loc_12DC3 ;~ 0396:0E7E
loc_12dc0:
	// 4695 
cs=0x396;eip=0x000e80; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 5611 inc     [bp+var_4] ;~ 0396:0E80
loc_12dc3:
	// 4696 
cs=0x396;eip=0x000e83; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 7));	// 5614 cmp     [bp+var_4], 7 ;~ 0396:0E83
cs=0x396;eip=0x000e87; 	R(JGE(loc_12de5));	// 5615 jge     short loc_12DE5 ;~ 0396:0E87
cs=0x396;eip=0x000e89; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 5616 mov     bx, [bp+var_4] ;~ 0396:0E89
cs=0x396;eip=0x000e8c; 	T(SHL(bx, 1));	// 5617 shl     bx, 1 ;~ 0396:0E8C
cs=0x396;eip=0x000e8e; 	T(SHL(bx, 1));	// 5618 shl     bx, 1 ;~ 0396:0E8E
cs=0x396;eip=0x000e90; 	T(MOV(ax, word_2c81a));	// 5619 mov     ax, word_2C81A ;~ 0396:0E90
cs=0x396;eip=0x000e93; 	T(MOV(dx, word_2c81c));	// 5620 mov     dx, word_2C81C ;~ 0396:0E93
cs=0x396;eip=0x000e97; 	T(CMP(*(dw*)(raddr(ds,bx+0x1FC4)), dx));	// 5621 cmp     [bx+1FC4h], dx ;~ 0396:0E97
cs=0x396;eip=0x000e9b; 	R(JA(loc_12dc0));	// 5622 ja      short loc_12DC0 ;~ 0396:0E9B
cs=0x396;eip=0x000e9d; 	R(JC(loc_12de5));	// 5623 jb      short loc_12DE5 ;~ 0396:0E9D
cs=0x396;eip=0x000e9f; 	T(CMP(*(dw*)(raddr(ds,bx+0x1FC2)), ax));	// 5624 cmp     [bx+1FC2h], ax ;~ 0396:0E9F
cs=0x396;eip=0x000ea3; 	R(JA(loc_12dc0));	// 5625 ja      short loc_12DC0 ;~ 0396:0EA3
loc_12de5:
	// 4697 
cs=0x396;eip=0x000ea5; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 6));	// 5629 mov     [bp+var_8], 6 ;~ 0396:0EA5
cs=0x396;eip=0x000eaa; 	R(JMP(loc_12e0d));	// 5630 jmp     short loc_12E0D ;~ 0396:0EAA
loc_12dec:
	// 4698 
cs=0x396;eip=0x000eac; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 5634 inc     [bp+var_6] ;~ 0396:0EAC
loc_12def:
	// 4699 
cs=0x396;eip=0x000eaf; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0x0F));	// 5637 cmp     [bp+var_6], 0Fh ;~ 0396:0EAF
cs=0x396;eip=0x000eb3; 	R(JGE(loc_12e0a));	// 5638 jge     short loc_12E0A ;~ 0396:0EB3
cs=0x396;eip=0x000eb5; 	T(MOV(ax, 0x12));	// 5639 mov     ax, 12h ;~ 0396:0EB5
cs=0x396;eip=0x000eb8; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_8))));	// 5640 imul    [bp+var_8] ;~ 0396:0EB8
cs=0x396;eip=0x000ebb; 	T(MOV(si, ax));	// 5641 mov     si, ax ;~ 0396:0EBB
cs=0x396;eip=0x000ebd; 	T(ADD(si, *(dw*)(raddr(ss,bp+var_6))));	// 5642 add     si, [bp+var_6] ;~ 0396:0EBD
cs=0x396;eip=0x000ec0; 	T(MOV(al, *(raddr(ds,si+0x1FCE))));	// 5643 mov     al, [si+1FCEh] ;~ 0396:0EC0
cs=0x396;eip=0x000ec4; 	X(MOV(*(raddr(ds,si+0x1FE0)), al));	// 5644 mov     [si+1FE0h], al ;~ 0396:0EC4
cs=0x396;eip=0x000ec8; 	R(JMP(loc_12dec));	// 5645 jmp     short loc_12DEC ;~ 0396:0EC8
loc_12e0a:
	// 4700 
cs=0x396;eip=0x000eca; 	X(DEC(*(dw*)(raddr(ss,bp+var_8))));	// 5649 dec     [bp+var_8] ;~ 0396:0ECA
loc_12e0d:
	// 4701 
cs=0x396;eip=0x000ecd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 5652 mov     ax, [bp+var_4] ;~ 0396:0ECD
cs=0x396;eip=0x000ed0; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), ax));	// 5653 cmp     [bp+var_8], ax ;~ 0396:0ED0
cs=0x396;eip=0x000ed3; 	R(JLE(loc_12e40));	// 5654 jle     short loc_12E40 ;~ 0396:0ED3
cs=0x396;eip=0x000ed5; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_8))));	// 5655 mov     si, [bp+var_8] ;~ 0396:0ED5
cs=0x396;eip=0x000ed8; 	T(MOV(cl, 2));	// 5656 mov     cl, 2 ;~ 0396:0ED8
cs=0x396;eip=0x000eda; 	T(SHL(si, cl));	// 5657 shl     si, cl ;~ 0396:0EDA
cs=0x396;eip=0x000edc; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x1FBE))));	// 5658 mov     ax, [si+1FBEh] ;~ 0396:0EDC
cs=0x396;eip=0x000ee0; 	T(MOV(dx, *(dw*)(raddr(ds,si+0x1FC0))));	// 5659 mov     dx, [si+1FC0h] ;~ 0396:0EE0
cs=0x396;eip=0x000ee4; 	X(MOV(*(dw*)(raddr(ds,si+0x1FC2)), ax));	// 5660 mov     [si+1FC2h], ax ;~ 0396:0EE4
cs=0x396;eip=0x000ee8; 	X(MOV(*(dw*)(raddr(ds,si+0x1FC4)), dx));	// 5661 mov     [si+1FC4h], dx ;~ 0396:0EE8
cs=0x396;eip=0x000eec; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 5662 mov     bx, [bp+var_8] ;~ 0396:0EEC
cs=0x396;eip=0x000eef; 	T(MOV(di, bx));	// 5663 mov     di, bx ;~ 0396:0EEF
cs=0x396;eip=0x000ef1; 	T(MOV(al, *(raddr(ds,di+0x1FBA))));	// 5664 mov     al, [di+1FBAh] ;~ 0396:0EF1
cs=0x396;eip=0x000ef5; 	X(MOV(*(raddr(ds,bx+0x1FBB)), al));	// 5665 mov     [bx+1FBBh], al ;~ 0396:0EF5
cs=0x396;eip=0x000ef9; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 5666 mov     [bp+var_6], 0 ;~ 0396:0EF9
cs=0x396;eip=0x000efe; 	R(JMP(loc_12def));	// 5667 jmp     short loc_12DEF ;~ 0396:0EFE
loc_12e40:
	// 4702 
cs=0x396;eip=0x000f00; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 5671 mov     bx, [bp+var_4] ;~ 0396:0F00
cs=0x396;eip=0x000f03; 	T(SHL(bx, 1));	// 5672 shl     bx, 1 ;~ 0396:0F03
cs=0x396;eip=0x000f05; 	T(SHL(bx, 1));	// 5673 shl     bx, 1 ;~ 0396:0F05
cs=0x396;eip=0x000f07; 	T(MOV(ax, word_2c81a));	// 5674 mov     ax, word_2C81A ;~ 0396:0F07
cs=0x396;eip=0x000f0a; 	T(MOV(dx, word_2c81c));	// 5675 mov     dx, word_2C81C ;~ 0396:0F0A
cs=0x396;eip=0x000f0e; 	X(MOV(*(dw*)(raddr(ds,bx+0x1FC2)), ax));	// 5676 mov     [bx+1FC2h], ax ;~ 0396:0F0E
cs=0x396;eip=0x000f12; 	X(MOV(*(dw*)(raddr(ds,bx+0x1FC4)), dx));	// 5677 mov     [bx+1FC4h], dx ;~ 0396:0F12
cs=0x396;eip=0x000f16; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 5678 mov     bx, [bp+var_4] ;~ 0396:0F16
cs=0x396;eip=0x000f19; 	T(MOV(al, *(db*)(((db*)&word_2c93e))));	// 5679 mov     al, byte ptr word_2C93E ;~ 0396:0F19
cs=0x396;eip=0x000f1c; 	X(MOV(*(raddr(ds,bx+0x1FBB)), al));	// 5680 mov     [bx+1FBBh], al ;~ 0396:0F1C
cs=0x396;eip=0x000f20; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 5681 mov     [bp+var_6], 0 ;~ 0396:0F20
loc_12e65:
	// 4703 
cs=0x396;eip=0x000f25; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 5684 mov     bx, [bp+var_6] ;~ 0396:0F25
cs=0x396;eip=0x000f28; 	T(MOV(al, *(raddr(ds,bx-0x1586))));	// 5685 mov     al, [bx-1586h] ;~ 0396:0F28
cs=0x396;eip=0x000f2c; 	T(MOV(cx, ax));	// 5686 mov     cx, ax ;~ 0396:0F2C
cs=0x396;eip=0x000f2e; 	T(MOV(ax, 0x12));	// 5687 mov     ax, 12h ;~ 0396:0F2E
cs=0x396;eip=0x000f31; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_4))));	// 5688 imul    [bp+var_4] ;~ 0396:0F31
cs=0x396;eip=0x000f34; 	T(MOV(si, ax));	// 5689 mov     si, ax ;~ 0396:0F34
cs=0x396;eip=0x000f36; 	X(MOV(*(raddr(ds,bx+si+0x1FE0)), cl));	// 5690 mov     [bx+si+1FE0h], cl ;~ 0396:0F36
cs=0x396;eip=0x000f3a; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 5691 inc     [bp+var_6] ;~ 0396:0F3A
cs=0x396;eip=0x000f3d; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0x0F));	// 5692 cmp     [bp+var_6], 0Fh ;~ 0396:0F3D
cs=0x396;eip=0x000f41; 	R(JL(loc_12e65));	// 5693 jl      short loc_12E65 ;~ 0396:0F41
cs=0x396;eip=0x000f43; 	X(PUSH(cs));	// 5694 push    cs ;~ 0396:0F43
cs=0x396;eip=0x000f44; 	R(CALL(sub_14da6,0));	// 5695 call    near ptr sub_14DA6 ;~ 0396:0F44
cs=0x396;eip=0x000f47; 	X(POP(si));	// 5696 pop     si ;~ 0396:0F47
cs=0x396;eip=0x000f48; 	X(POP(di));	// 5697 pop     di ;~ 0396:0F48
cs=0x396;eip=0x000f49; 	T(MOV(sp, bp));	// 5698 mov     sp, bp ;~ 0396:0F49
cs=0x396;eip=0x000f4b; 	X(POP(bp));	// 5699 pop     bp ;~ 0396:0F4B
cs=0x396;eip=0x000f4c; 	R(RETF(0));	// 5700 retf ;~ 0396:0F4C
sub_12e8e:
	// 5710 
#undef var_c
#define var_c -0x0C
	// 5712 var_C           = byte ptr -0Ch ;~ 0396:0F4E
#undef var_a
#define var_a -0x0A
	// 5713 var_A           = word ptr -0Ah ;~ 0396:0F4E
#undef var_8
#define var_8 -8
	// 5714 var_8           = word ptr -8 ;~ 0396:0F4E
#undef var_6
#define var_6 -6
	// 5715 var_6           = word ptr -6 ;~ 0396:0F4E
#undef var_4
#define var_4 -4
	// 5716 var_4           = word ptr -4 ;~ 0396:0F4E
#undef var_2
#define var_2 -2
	// 5717 var_2           = word ptr -2 ;~ 0396:0F4E
ret_396_f4e:
	// 4704 
cs=0x396;eip=0x000f4e; 	X(PUSH(bp));	// 5719 push    bp ;~ 0396:0F4E
cs=0x396;eip=0x000f4f; 	T(MOV(bp, sp));	// 5720 mov     bp, sp ;~ 0396:0F4F
cs=0x396;eip=0x000f51; 	T(SUB(sp, 0x0C));	// 5721 sub     sp, 0Ch ;~ 0396:0F51
cs=0x396;eip=0x000f54; 	X(PUSH(cs));	// 5722 push    cs ;~ 0396:0F54
cs=0x396;eip=0x000f55; 	R(CALL(sub_17304,0));	// 5723 call    near ptr sub_17304 ;~ 0396:0F55
cs=0x396;eip=0x000f58; 	X(MOV(byte_2bedf, 0));	// 5724 mov     byte_2BEDF, 0 ;~ 0396:0F58
cs=0x396;eip=0x000f5d; 	X(XOR(byte_34f30, 0x80));	// 5725 xor     byte_34F30, 80h ;~ 0396:0F5D
cs=0x396;eip=0x000f62; 	T(MOV(ax, 0x0F4B));	// 5726 mov     ax, 0F4Bh ;~ 0396:0F62
cs=0x396;eip=0x000f65; 	X(PUSH(ax));	// 5727 push    ax ;~ 0396:0F65
cs=0x396;eip=0x000f66; 	T(MOV(ax, 0x0A9C));	// 5728 mov     ax, 0A9Ch ;~ 0396:0F66
cs=0x396;eip=0x000f69; 	X(PUSH(ax));	// 5729 push    ax ;~ 0396:0F69
cs=0x396;eip=0x000f6a; 	R(CALLF(sub_29b46,0));	// 5730 call    sub_29B46 ;~ 0396:0F6A
cs=0x396;eip=0x000f6f; 	T(ADD(sp, 4));	// 5731 add     sp, 4 ;~ 0396:0F6F
cs=0x396;eip=0x000f72; 	T(MOV(ax, 0x0A9A));	// 5732 mov     ax, 0A9Ah ;~ 0396:0F72
cs=0x396;eip=0x000f75; 	X(PUSH(ax));	// 5733 push    ax ;~ 0396:0F75
cs=0x396;eip=0x000f76; 	R(CALLF(sub_10d62,0));	// 5734 call    sub_10D62 ;~ 0396:0F76
cs=0x396;eip=0x000f7b; 	T(ADD(sp, 2));	// 5735 add     sp, 2 ;~ 0396:0F7B
cs=0x396;eip=0x000f7e; 	T(MOV(ax, 1));	// 5736 mov     ax, 1 ;~ 0396:0F7E
cs=0x396;eip=0x000f81; 	X(MOV(word_2beda, ax));	// 5737 mov     word_2BEDA, ax ;~ 0396:0F81
cs=0x396;eip=0x000f84; 	X(PUSH(ax));	// 5738 push    ax ;~ 0396:0F84
cs=0x396;eip=0x000f85; 	R(CALLF(sub_2714e,0));	// 5739 call    far ptr sub_2714E ;~ 0396:0F85
cs=0x396;eip=0x000f8a; 	T(ADD(sp, 2));	// 5740 add     sp, 2 ;~ 0396:0F8A
cs=0x396;eip=0x000f8d; 	T(MOV(ax, 0x0F57));	// 5741 mov     ax, 0F57h ;~ 0396:0F8D
cs=0x396;eip=0x000f90; 	X(PUSH(ax));	// 5742 push    ax ;~ 0396:0F90
cs=0x396;eip=0x000f91; 	T(MOV(ax, 0x0A9C));	// 5743 mov     ax, 0A9Ch ;~ 0396:0F91
cs=0x396;eip=0x000f94; 	X(PUSH(ax));	// 5744 push    ax ;~ 0396:0F94
cs=0x396;eip=0x000f95; 	R(CALLF(sub_29b46,0));	// 5745 call    sub_29B46 ;~ 0396:0F95
cs=0x396;eip=0x000f9a; 	T(ADD(sp, 4));	// 5746 add     sp, 4 ;~ 0396:0F9A
cs=0x396;eip=0x000f9d; 	X(PUSH(word_38a9e));	// 5747 push    word_38A9E ;~ 0396:0F9D
cs=0x396;eip=0x000fa1; 	X(PUSH(word_38a9c));	// 5748 push    word_38A9C ;~ 0396:0FA1
cs=0x396;eip=0x000fa5; 	T(MOV(ax, 0x0A9A));	// 5749 mov     ax, 0A9Ah ;~ 0396:0FA5
cs=0x396;eip=0x000fa8; 	X(PUSH(ax));	// 5750 push    ax ;~ 0396:0FA8
cs=0x396;eip=0x000fa9; 	R(CALLF(sub_10ee0,0));	// 5751 call    sub_10EE0 ;~ 0396:0FA9
cs=0x396;eip=0x000fae; 	T(ADD(sp, 6));	// 5752 add     sp, 6 ;~ 0396:0FAE
cs=0x396;eip=0x000fb1; 	T(MOV(ax, 0x2500));	// 5753 mov     ax, 2500h ;~ 0396:0FB1
cs=0x396;eip=0x000fb4; 	X(PUSH(ds));	// 5754 push    ds ;~ 0396:0FB4
cs=0x396;eip=0x000fb5; 	X(PUSH(ax));	// 5755 push    ax ;~ 0396:0FB5
cs=0x396;eip=0x000fb6; 	X(PUSH(word_38a9e));	// 5756 push    word_38A9E ;~ 0396:0FB6
cs=0x396;eip=0x000fba; 	X(PUSH(word_38a9c));	// 5757 push    word_38A9C ;~ 0396:0FBA
cs=0x396;eip=0x000fbe; 	R(CALLF(sub_1ab87,0));	// 5758 call    sub_1AB87 ;~ 0396:0FBE
cs=0x396;eip=0x000fc3; 	T(ADD(sp, 8));	// 5759 add     sp, 8 ;~ 0396:0FC3
cs=0x396;eip=0x000fc6; 	T(SUB(ax, ax));	// 5760 sub     ax, ax ;~ 0396:0FC6
cs=0x396;eip=0x000fc8; 	X(PUSH(ax));	// 5761 push    ax ;~ 0396:0FC8
cs=0x396;eip=0x000fc9; 	T(MOV(ax, 0x0C7));	// 5762 mov     ax, 0C7h ; '«' ;~ 0396:0FC9
cs=0x396;eip=0x000fcc; 	X(PUSH(ax));	// 5763 push    ax ;~ 0396:0FCC
cs=0x396;eip=0x000fcd; 	T(SUB(ax, ax));	// 5764 sub     ax, ax ;~ 0396:0FCD
cs=0x396;eip=0x000fcf; 	X(PUSH(ax));	// 5765 push    ax ;~ 0396:0FCF
cs=0x396;eip=0x000fd0; 	T(MOV(ax, 0x140));	// 5766 mov     ax, 140h ;~ 0396:0FD0
cs=0x396;eip=0x000fd3; 	X(PUSH(ax));	// 5767 push    ax ;~ 0396:0FD3
cs=0x396;eip=0x000fd4; 	T(MOV(ax, 0x26B4));	// 5768 mov     ax, 26B4h ;~ 0396:0FD4
cs=0x396;eip=0x000fd7; 	X(PUSH(ax));	// 5769 push    ax ;~ 0396:0FD7
cs=0x396;eip=0x000fd8; 	T(MOV(ax, 0x2500));	// 5770 mov     ax, 2500h ;~ 0396:0FD8
cs=0x396;eip=0x000fdb; 	X(PUSH(ax));	// 5771 push    ax ;~ 0396:0FDB
cs=0x396;eip=0x000fdc; 	X(PUSH(cs));	// 5772 push    cs ;~ 0396:0FDC
cs=0x396;eip=0x000fdd; 	R(CALL(sub_178ec,0));	// 5773 call    near ptr sub_178EC ;~ 0396:0FDD
cs=0x396;eip=0x000fe0; 	T(ADD(sp, 0x0C));	// 5774 add     sp, 0Ch ;~ 0396:0FE0
cs=0x396;eip=0x000fe3; 	T(MOV(ax, 0x0F63));	// 5775 mov     ax, 0F63h ;~ 0396:0FE3
cs=0x396;eip=0x000fe6; 	X(PUSH(ax));	// 5776 push    ax ;~ 0396:0FE6
cs=0x396;eip=0x000fe7; 	T(MOV(ax, 0x0A9C));	// 5777 mov     ax, 0A9Ch ;~ 0396:0FE7
cs=0x396;eip=0x000fea; 	X(PUSH(ax));	// 5778 push    ax ;~ 0396:0FEA
cs=0x396;eip=0x000feb; 	R(CALLF(sub_29b46,0));	// 5779 call    sub_29B46 ;~ 0396:0FEB
cs=0x396;eip=0x000ff0; 	T(ADD(sp, 4));	// 5780 add     sp, 4 ;~ 0396:0FF0
cs=0x396;eip=0x000ff3; 	X(PUSH(word_38a9e));	// 5781 push    word_38A9E ;~ 0396:0FF3
cs=0x396;eip=0x000ff7; 	X(PUSH(word_38a9c));	// 5782 push    word_38A9C ;~ 0396:0FF7
cs=0x396;eip=0x000ffb; 	T(MOV(ax, 0x0A9A));	// 5783 mov     ax, 0A9Ah ;~ 0396:0FFB
cs=0x396;eip=0x000ffe; 	X(PUSH(ax));	// 5784 push    ax ;~ 0396:0FFE
cs=0x396;eip=0x000fff; 	R(CALLF(sub_10ee0,0));	// 5785 call    sub_10EE0 ;~ 0396:0FFF
cs=0x396;eip=0x001004; 	T(ADD(sp, 6));	// 5786 add     sp, 6 ;~ 0396:1004
cs=0x396;eip=0x001007; 	T(MOV(ax, 0x2500));	// 5787 mov     ax, 2500h ;~ 0396:1007
cs=0x396;eip=0x00100a; 	X(PUSH(ds));	// 5788 push    ds ;~ 0396:100A
cs=0x396;eip=0x00100b; 	X(PUSH(ax));	// 5789 push    ax ;~ 0396:100B
cs=0x396;eip=0x00100c; 	X(PUSH(word_38a9e));	// 5790 push    word_38A9E ;~ 0396:100C
cs=0x396;eip=0x001010; 	X(PUSH(word_38a9c));	// 5791 push    word_38A9C ;~ 0396:1010
cs=0x396;eip=0x001014; 	R(CALLF(sub_1ab87,0));	// 5792 call    sub_1AB87 ;~ 0396:1014
cs=0x396;eip=0x001019; 	T(ADD(sp, 8));	// 5793 add     sp, 8 ;~ 0396:1019
cs=0x396;eip=0x00101c; 	T(MOV(ax, 1));	// 5794 mov     ax, 1 ;~ 0396:101C
cs=0x396;eip=0x00101f; 	X(PUSH(ax));	// 5795 push    ax ;~ 0396:101F
cs=0x396;eip=0x001020; 	T(MOV(ax, 0x84));	// 5796 mov     ax, 84h ; 'Ñ' ;~ 0396:1020
cs=0x396;eip=0x001023; 	X(PUSH(ax));	// 5797 push    ax ;~ 0396:1023
cs=0x396;eip=0x001024; 	T(SUB(ax, ax));	// 5798 sub     ax, ax ;~ 0396:1024
cs=0x396;eip=0x001026; 	X(PUSH(ax));	// 5799 push    ax ;~ 0396:1026
cs=0x396;eip=0x001027; 	T(MOV(ax, 0x140));	// 5800 mov     ax, 140h ;~ 0396:1027
cs=0x396;eip=0x00102a; 	X(PUSH(ax));	// 5801 push    ax ;~ 0396:102A
cs=0x396;eip=0x00102b; 	T(MOV(ax, 0x2D83));	// 5802 mov     ax, 2D83h ;~ 0396:102B
cs=0x396;eip=0x00102e; 	X(PUSH(ax));	// 5803 push    ax ;~ 0396:102E
cs=0x396;eip=0x00102f; 	T(MOV(ax, 0x2500));	// 5804 mov     ax, 2500h ;~ 0396:102F
cs=0x396;eip=0x001032; 	X(PUSH(ax));	// 5805 push    ax ;~ 0396:1032
cs=0x396;eip=0x001033; 	X(PUSH(cs));	// 5806 push    cs ;~ 0396:1033
cs=0x396;eip=0x001034; 	R(CALL(sub_178ec,0));	// 5807 call    near ptr sub_178EC ;~ 0396:1034
cs=0x396;eip=0x001037; 	T(ADD(sp, 0x0C));	// 5808 add     sp, 0Ch ;~ 0396:1037
cs=0x396;eip=0x00103a; 	T(MOV(ax, 0x0F6F));	// 5809 mov     ax, 0F6Fh ;~ 0396:103A
cs=0x396;eip=0x00103d; 	X(PUSH(ax));	// 5810 push    ax ;~ 0396:103D
cs=0x396;eip=0x00103e; 	T(MOV(ax, 0x0A9C));	// 5811 mov     ax, 0A9Ch ;~ 0396:103E
cs=0x396;eip=0x001041; 	X(PUSH(ax));	// 5812 push    ax ;~ 0396:1041
cs=0x396;eip=0x001042; 	R(CALLF(sub_29b46,0));	// 5813 call    sub_29B46 ;~ 0396:1042
cs=0x396;eip=0x001047; 	T(ADD(sp, 4));	// 5814 add     sp, 4 ;~ 0396:1047
cs=0x396;eip=0x00104a; 	X(PUSH(word_38a9e));	// 5815 push    word_38A9E ;~ 0396:104A
cs=0x396;eip=0x00104e; 	X(PUSH(word_38a9c));	// 5816 push    word_38A9C ;~ 0396:104E
cs=0x396;eip=0x001052; 	T(MOV(ax, 0x0A9A));	// 5817 mov     ax, 0A9Ah ;~ 0396:1052
cs=0x396;eip=0x001055; 	X(PUSH(ax));	// 5818 push    ax ;~ 0396:1055
cs=0x396;eip=0x001056; 	R(CALLF(sub_10ee0,0));	// 5819 call    sub_10EE0 ;~ 0396:1056
cs=0x396;eip=0x00105b; 	T(ADD(sp, 6));	// 5820 add     sp, 6 ;~ 0396:105B
cs=0x396;eip=0x00105e; 	T(MOV(ax, 0x2500));	// 5821 mov     ax, 2500h ;~ 0396:105E
cs=0x396;eip=0x001061; 	X(PUSH(ds));	// 5822 push    ds ;~ 0396:1061
cs=0x396;eip=0x001062; 	X(PUSH(ax));	// 5823 push    ax ;~ 0396:1062
cs=0x396;eip=0x001063; 	X(PUSH(word_38a9e));	// 5824 push    word_38A9E ;~ 0396:1063
cs=0x396;eip=0x001067; 	X(PUSH(word_38a9c));	// 5825 push    word_38A9C ;~ 0396:1067
cs=0x396;eip=0x00106b; 	R(CALLF(sub_1ab87,0));	// 5826 call    sub_1AB87 ;~ 0396:106B
cs=0x396;eip=0x001070; 	T(ADD(sp, 8));	// 5827 add     sp, 8 ;~ 0396:1070
cs=0x396;eip=0x001073; 	T(MOV(ax, 1));	// 5828 mov     ax, 1 ;~ 0396:1073
cs=0x396;eip=0x001076; 	X(PUSH(ax));	// 5829 push    ax ;~ 0396:1076
cs=0x396;eip=0x001077; 	T(MOV(ax, 0x42));	// 5830 mov     ax, 42h ; 'B' ;~ 0396:1077
cs=0x396;eip=0x00107a; 	X(PUSH(ax));	// 5831 push    ax ;~ 0396:107A
cs=0x396;eip=0x00107b; 	T(SUB(ax, ax));	// 5832 sub     ax, ax ;~ 0396:107B
cs=0x396;eip=0x00107d; 	X(PUSH(ax));	// 5833 push    ax ;~ 0396:107D
cs=0x396;eip=0x00107e; 	T(MOV(ax, 0x140));	// 5834 mov     ax, 140h ;~ 0396:107E
cs=0x396;eip=0x001081; 	X(PUSH(ax));	// 5835 push    ax ;~ 0396:1081
cs=0x396;eip=0x001082; 	T(MOV(ax, 0x2E1B));	// 5836 mov     ax, 2E1Bh ;~ 0396:1082
cs=0x396;eip=0x001085; 	X(PUSH(ax));	// 5837 push    ax ;~ 0396:1085
cs=0x396;eip=0x001086; 	T(MOV(ax, 0x2500));	// 5838 mov     ax, 2500h ;~ 0396:1086
cs=0x396;eip=0x001089; 	X(PUSH(ax));	// 5839 push    ax ;~ 0396:1089
cs=0x396;eip=0x00108a; 	X(PUSH(cs));	// 5840 push    cs ;~ 0396:108A
cs=0x396;eip=0x00108b; 	R(CALL(sub_178ec,0));	// 5841 call    near ptr sub_178EC ;~ 0396:108B
cs=0x396;eip=0x00108e; 	T(ADD(sp, 0x0C));	// 5842 add     sp, 0Ch ;~ 0396:108E
cs=0x396;eip=0x001091; 	X(PUSH(cs));	// 5843 push    cs ;~ 0396:1091
cs=0x396;eip=0x001092; 	R(CALL(sub_14752,0));	// 5844 call    near ptr sub_14752 ;~ 0396:1092
cs=0x396;eip=0x001095; 	X(MOV(byte_34f20, 1));	// 5845 mov     byte_34F20, 1 ;~ 0396:1095
cs=0x396;eip=0x00109a; 	T(SUB(ax, ax));	// 5846 sub     ax, ax ;~ 0396:109A
cs=0x396;eip=0x00109c; 	X(PUSH(ax));	// 5847 push    ax ;~ 0396:109C
cs=0x396;eip=0x00109d; 	X(PUSH(ax));	// 5848 push    ax ;~ 0396:109D
cs=0x396;eip=0x00109e; 	R(CALLF(sub_1c8f3,0));	// 5849 call    sub_1C8F3 ;~ 0396:109E
cs=0x396;eip=0x0010a3; 	T(ADD(sp, 4));	// 5850 add     sp, 4 ;~ 0396:10A3
cs=0x396;eip=0x0010a6; 	T(SUB(ax, ax));	// 5851 sub     ax, ax ;~ 0396:10A6
cs=0x396;eip=0x0010a8; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 5852 mov     [bp+var_A], ax ;~ 0396:10A8
cs=0x396;eip=0x0010ab; 	X(PUSH(ax));	// 5853 push    ax ;~ 0396:10AB
cs=0x396;eip=0x0010ac; 	T(MOV(ax, 0x217D));	// 5854 mov     ax, 217Dh ;~ 0396:10AC
cs=0x396;eip=0x0010af; 	X(PUSH(ax));	// 5855 push    ax ;~ 0396:10AF
cs=0x396;eip=0x0010b0; 	X(PUSH(cs));	// 5856 push    cs ;~ 0396:10B0
cs=0x396;eip=0x0010b1; 	R(CALL(sub_139c2,0));	// 5857 call    near ptr sub_139C2 ;~ 0396:10B1
cs=0x396;eip=0x0010b4; 	T(ADD(sp, 4));	// 5858 add     sp, 4 ;~ 0396:10B4
cs=0x396;eip=0x0010b7; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 5859 mov     [bp+var_A], ax ;~ 0396:10B7
cs=0x396;eip=0x0010ba; 	T(MOV(ax, 0x0B));	// 5860 mov     ax, 0Bh ;~ 0396:10BA
cs=0x396;eip=0x0010bd; 	X(PUSH(ax));	// 5861 push    ax ;~ 0396:10BD
cs=0x396;eip=0x0010be; 	T(MOV(ax, 2));	// 5862 mov     ax, 2 ;~ 0396:10BE
cs=0x396;eip=0x0010c1; 	X(PUSH(ax));	// 5863 push    ax ;~ 0396:10C1
cs=0x396;eip=0x0010c2; 	R(CALLF(sub_1c90c,0));	// 5864 call    sub_1C90C ;~ 0396:10C2
cs=0x396;eip=0x0010c7; 	T(ADD(sp, 4));	// 5865 add     sp, 4 ;~ 0396:10C7
cs=0x396;eip=0x0010ca; 	T(SUB(ax, ax));	// 5866 sub     ax, ax ;~ 0396:10CA
cs=0x396;eip=0x0010cc; 	X(PUSH(ax));	// 5867 push    ax ;~ 0396:10CC
cs=0x396;eip=0x0010cd; 	T(MOV(ax, 0x0B));	// 5868 mov     ax, 0Bh ;~ 0396:10CD
cs=0x396;eip=0x0010d0; 	X(PUSH(ax));	// 5869 push    ax ;~ 0396:10D0
cs=0x396;eip=0x0010d1; 	R(CALLF(sub_1c8f3,0));	// 5870 call    sub_1C8F3 ;~ 0396:10D1
cs=0x396;eip=0x0010d6; 	T(ADD(sp, 4));	// 5871 add     sp, 4 ;~ 0396:10D6
cs=0x396;eip=0x0010d9; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 5872 mov     [bp+var_4], 0 ;~ 0396:10D9
loc_1301e:
	// 4705 
cs=0x396;eip=0x0010de; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 5875 mov     bx, [bp+var_4] ;~ 0396:10DE
cs=0x396;eip=0x0010e1; 	T(MOV(al, *(raddr(ds,bx+0x0AEA))));	// 5876 mov     al, [bx+0AEAh] ;~ 0396:10E1
cs=0x396;eip=0x0010e5; 	X(MOV(*(raddr(ss,bp+var_c)), al));	// 5877 mov     [bp+var_C], al ;~ 0396:10E5
cs=0x396;eip=0x0010e8; 	T(ax = bp+var_c);	// 5878 lea     ax, [bp+var_C] ;~ 0396:10E8
cs=0x396;eip=0x0010eb; 	X(PUSH(ax));	// 5879 push    ax ;~ 0396:10EB
cs=0x396;eip=0x0010ec; 	R(CALLF(sub_1c944,0));	// 5880 call    sub_1C944 ;~ 0396:10EC
cs=0x396;eip=0x0010f1; 	T(ADD(sp, 2));	// 5881 add     sp, 2 ;~ 0396:10F1
cs=0x396;eip=0x0010f4; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 5882 inc     [bp+var_4] ;~ 0396:10F4
cs=0x396;eip=0x0010f7; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x12));	// 5883 cmp     [bp+var_4], 12h ;~ 0396:10F7
cs=0x396;eip=0x0010fb; 	R(JL(loc_1301e));	// 5884 jl      short loc_1301E ;~ 0396:10FB
cs=0x396;eip=0x0010fd; 	T(MOV(ax, word_2c81a));	// 5885 mov     ax, word_2C81A ;~ 0396:10FD
cs=0x396;eip=0x001100; 	T(OR(ax, word_2c81c));	// 5886 or      ax, word_2C81C ;~ 0396:1100
cs=0x396;eip=0x001104; 	R(JZ(loc_1305e));	// 5887 jz      short loc_1305E ;~ 0396:1104
cs=0x396;eip=0x001106; 	T(CMP(byte_2c948, 1));	// 5888 cmp     byte_2C948, 1 ;~ 0396:1106
cs=0x396;eip=0x00110b; 	R(JNZ(loc_1305e));	// 5889 jnz     short loc_1305E ;~ 0396:110B
cs=0x396;eip=0x00110d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 5890 push    [bp+var_A] ;~ 0396:110D
cs=0x396;eip=0x001110; 	T(MOV(ax, 0x217D));	// 5891 mov     ax, 217Dh ;~ 0396:1110
cs=0x396;eip=0x001113; 	X(PUSH(ax));	// 5892 push    ax ;~ 0396:1113
cs=0x396;eip=0x001114; 	X(PUSH(cs));	// 5893 push    cs ;~ 0396:1114
cs=0x396;eip=0x001115; 	R(CALL(sub_139c2,0));	// 5894 call    near ptr sub_139C2 ;~ 0396:1115
cs=0x396;eip=0x001118; 	T(ADD(sp, 4));	// 5895 add     sp, 4 ;~ 0396:1118
cs=0x396;eip=0x00111b; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 5896 mov     [bp+var_A], ax ;~ 0396:111B
loc_1305e:
	// 4706 
cs=0x396;eip=0x00111e; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 5900 mov     [bp+var_4], 0 ;~ 0396:111E
cs=0x396;eip=0x001123; 	R(JMP(loc_13154));	// 5901 jmp     loc_13154 ;~ 0396:1123
loc_13066:
	// 4707 
cs=0x396;eip=0x001126; 	T(MOV(ax, 0x13));	// 5905 mov     ax, 13h ;~ 0396:1126
cs=0x396;eip=0x001129; 	X(PUSH(ax));	// 5906 push    ax ;~ 0396:1129
cs=0x396;eip=0x00112a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 5907 mov     ax, [bp+var_4] ;~ 0396:112A
cs=0x396;eip=0x00112d; 	T(ADD(ax, 5));	// 5908 add     ax, 5 ;~ 0396:112D
loc_13070:
	// 4708 
cs=0x396;eip=0x001130; 	X(PUSH(ax));	// 5911 push    ax ;~ 0396:1130
cs=0x396;eip=0x001131; 	R(CALLF(sub_1c90c,0));	// 5912 call    sub_1C90C ;~ 0396:1131
cs=0x396;eip=0x001136; 	T(ADD(sp, 4));	// 5913 add     sp, 4 ;~ 0396:1136
cs=0x396;eip=0x001139; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 5914 mov     ax, [bp+var_8] ;~ 0396:1139
cs=0x396;eip=0x00113c; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_6))));	// 5915 or      ax, [bp+var_6] ;~ 0396:113C
cs=0x396;eip=0x00113f; 	R(JNZ(loc_13084));	// 5916 jnz     short loc_13084 ;~ 0396:113F
cs=0x396;eip=0x001141; 	R(JMP(loc_13151));	// 5917 jmp     loc_13151 ;~ 0396:1141
loc_13084:
	// 4709 
cs=0x396;eip=0x001144; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 5921 push    [bp+var_6] ;~ 0396:1144
cs=0x396;eip=0x001147; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 5922 push    [bp+var_8] ;~ 0396:1147
cs=0x396;eip=0x00114a; 	X(PUSH(cs));	// 5923 push    cs ;~ 0396:114A
cs=0x396;eip=0x00114b; 	R(CALL(sub_13214,0));	// 5924 call    near ptr sub_13214 ;~ 0396:114B
cs=0x396;eip=0x00114e; 	T(ADD(sp, 4));	// 5925 add     sp, 4 ;~ 0396:114E
cs=0x396;eip=0x001151; 	T(MOV(ax, 0x0B50));	// 5926 mov     ax, 0B50h ;~ 0396:1151
cs=0x396;eip=0x001154; 	X(PUSH(ax));	// 5927 push    ax ;~ 0396:1154
cs=0x396;eip=0x001155; 	T(MOV(ax, 0x2264));	// 5928 mov     ax, 2264h ;~ 0396:1155
cs=0x396;eip=0x001158; 	X(PUSH(ax));	// 5929 push    ax ;~ 0396:1158
cs=0x396;eip=0x001159; 	T(MOV(ax, 0x0ABA));	// 5930 mov     ax, 0ABAh ;~ 0396:1159
cs=0x396;eip=0x00115c; 	X(PUSH(ax));	// 5931 push    ax ;~ 0396:115C
cs=0x396;eip=0x00115d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 5932 mov     bx, [bp+var_4] ;~ 0396:115D
cs=0x396;eip=0x001160; 	T(MOV(al, *(raddr(ds,bx+0x1FBB))));	// 5933 mov     al, [bx+1FBBh] ;~ 0396:1160
cs=0x396;eip=0x001164; 	T(SUB(ah, ah));	// 5934 sub     ah, ah ;~ 0396:1164
cs=0x396;eip=0x001166; 	X(PUSH(ax));	// 5935 push    ax ;~ 0396:1166
cs=0x396;eip=0x001167; 	X(PUSH(cs));	// 5936 push    cs ;~ 0396:1167
cs=0x396;eip=0x001168; 	R(CALL(sub_14930,0));	// 5937 call    near ptr sub_14930 ;~ 0396:1168
cs=0x396;eip=0x00116b; 	T(ADD(sp, 8));	// 5938 add     sp, 8 ;~ 0396:116B
cs=0x396;eip=0x00116e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 5939 mov     [bp+var_2], ax ;~ 0396:116E
cs=0x396;eip=0x001171; 	T(OR(ax, ax));	// 5940 or      ax, ax ;~ 0396:1171
cs=0x396;eip=0x001173; 	R(JZ(loc_130b8));	// 5941 jz      short loc_130B8 ;~ 0396:1173
cs=0x396;eip=0x001175; 	R(JMP(loc_13151));	// 5942 jmp     loc_13151 ;~ 0396:1175
loc_130b8:
	// 4710 
cs=0x396;eip=0x001178; 	T(MOV(ax, 0x0F7B));	// 5946 mov     ax, 0F7Bh ;~ 0396:1178
cs=0x396;eip=0x00117b; 	X(PUSH(ax));	// 5947 push    ax ;~ 0396:117B
cs=0x396;eip=0x00117c; 	T(MOV(ax, 0x0AC1));	// 5948 mov     ax, 0AC1h ;~ 0396:117C
cs=0x396;eip=0x00117f; 	X(PUSH(ax));	// 5949 push    ax ;~ 0396:117F
cs=0x396;eip=0x001180; 	R(CALLF(sub_29b46,0));	// 5950 call    sub_29B46 ;~ 0396:1180
cs=0x396;eip=0x001185; 	T(ADD(sp, 4));	// 5951 add     sp, 4 ;~ 0396:1185
cs=0x396;eip=0x001188; 	T(MOV(ax, 0x0F80));	// 5952 mov     ax, 0F80h ;~ 0396:1188
cs=0x396;eip=0x00118b; 	X(PUSH(ax));	// 5953 push    ax ;~ 0396:118B
cs=0x396;eip=0x00118c; 	T(MOV(ax, 0x0ABA));	// 5954 mov     ax, 0ABAh ;~ 0396:118C
cs=0x396;eip=0x00118f; 	X(PUSH(ax));	// 5955 push    ax ;~ 0396:118F
cs=0x396;eip=0x001190; 	R(CALLF(sub_29708,0));	// 5956 call    sub_29708 ;~ 0396:1190
cs=0x396;eip=0x001195; 	T(ADD(sp, 4));	// 5957 add     sp, 4 ;~ 0396:1195
cs=0x396;eip=0x001198; 	X(MOV(word_3a3e6, ax));	// 5958 mov     word_3A3E6, ax ;~ 0396:1198
cs=0x396;eip=0x00119b; 	T(OR(ax, ax));	// 5959 or      ax, ax ;~ 0396:119B
cs=0x396;eip=0x00119d; 	R(JZ(loc_13103));	// 5960 jz      short loc_13103 ;~ 0396:119D
cs=0x396;eip=0x00119f; 	X(PUSH(ax));	// 5961 push    ax ;~ 0396:119F
cs=0x396;eip=0x0011a0; 	T(MOV(ax, 0x13));	// 5962 mov     ax, 13h ;~ 0396:11A0
cs=0x396;eip=0x0011a3; 	X(PUSH(ax));	// 5963 push    ax ;~ 0396:11A3
cs=0x396;eip=0x0011a4; 	T(MOV(ax, 1));	// 5964 mov     ax, 1 ;~ 0396:11A4
cs=0x396;eip=0x0011a7; 	X(PUSH(ax));	// 5965 push    ax ;~ 0396:11A7
cs=0x396;eip=0x0011a8; 	T(MOV(ax, 0x2264));	// 5966 mov     ax, 2264h ;~ 0396:11A8
cs=0x396;eip=0x0011ab; 	X(PUSH(ax));	// 5967 push    ax ;~ 0396:11AB
cs=0x396;eip=0x0011ac; 	R(CALLF(sub_29734,0));	// 5968 call    sub_29734 ;~ 0396:11AC
cs=0x396;eip=0x0011b1; 	T(ADD(sp, 8));	// 5969 add     sp, 8 ;~ 0396:11B1
cs=0x396;eip=0x0011b4; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 5970 mov     [bp+var_2], ax ;~ 0396:11B4
cs=0x396;eip=0x0011b7; 	X(PUSH(word_3a3e6));	// 5971 push    word_3A3E6 ;~ 0396:11B7
cs=0x396;eip=0x0011bb; 	R(CALLF(sub_29640,0));	// 5972 call    sub_29640 ;~ 0396:11BB
cs=0x396;eip=0x0011c0; 	T(ADD(sp, 2));	// 5973 add     sp, 2 ;~ 0396:11C0
loc_13103:
	// 4711 
cs=0x396;eip=0x0011c3; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 5976 cmp     [bp+var_4], 0 ;~ 0396:11C3
cs=0x396;eip=0x0011c7; 	R(JNZ(loc_13112));	// 5977 jnz     short loc_13112 ;~ 0396:11C7
cs=0x396;eip=0x0011c9; 	T(SUB(ax, ax));	// 5978 sub     ax, ax ;~ 0396:11C9
cs=0x396;eip=0x0011cb; 	X(PUSH(ax));	// 5979 push    ax ;~ 0396:11CB
cs=0x396;eip=0x0011cc; 	T(MOV(ax, 4));	// 5980 mov     ax, 4 ;~ 0396:11CC
cs=0x396;eip=0x0011cf; 	R(JMP(loc_1311b));	// 5981 jmp     short loc_1311B ;~ 0396:11CF
loc_13112:
	// 4712 
cs=0x396;eip=0x0011d2; 	T(SUB(ax, ax));	// 5986 sub     ax, ax ;~ 0396:11D2
cs=0x396;eip=0x0011d4; 	X(PUSH(ax));	// 5987 push    ax ;~ 0396:11D4
cs=0x396;eip=0x0011d5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 5988 mov     ax, [bp+var_4] ;~ 0396:11D5
cs=0x396;eip=0x0011d8; 	T(ADD(ax, 5));	// 5989 add     ax, 5 ;~ 0396:11D8
loc_1311b:
	// 4713 
cs=0x396;eip=0x0011db; 	X(PUSH(ax));	// 5992 push    ax ;~ 0396:11DB
cs=0x396;eip=0x0011dc; 	R(CALLF(sub_1c90c,0));	// 5993 call    sub_1C90C ;~ 0396:11DC
cs=0x396;eip=0x0011e1; 	T(ADD(sp, 4));	// 5994 add     sp, 4 ;~ 0396:11E1
cs=0x396;eip=0x0011e4; 	T(SUB(ax, ax));	// 5995 sub     ax, ax ;~ 0396:11E4
cs=0x396;eip=0x0011e6; 	X(PUSH(ax));	// 5996 push    ax ;~ 0396:11E6
cs=0x396;eip=0x0011e7; 	T(MOV(ax, 0x0B));	// 5997 mov     ax, 0Bh ;~ 0396:11E7
cs=0x396;eip=0x0011ea; 	X(PUSH(ax));	// 5998 push    ax ;~ 0396:11EA
cs=0x396;eip=0x0011eb; 	R(CALLF(sub_1c8f3,0));	// 5999 call    sub_1C8F3 ;~ 0396:11EB
cs=0x396;eip=0x0011f0; 	T(ADD(sp, 4));	// 6000 add     sp, 4 ;~ 0396:11F0
cs=0x396;eip=0x0011f3; 	X(MOV(byte_2e0b6, 0x80));	// 6001 mov     byte_2E0B6, 80h ; 'Ä' ;~ 0396:11F3
cs=0x396;eip=0x0011f8; 	T(SUB(ax, ax));	// 6002 sub     ax, ax ;~ 0396:11F8
cs=0x396;eip=0x0011fa; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 6003 mov     [bp+var_2], ax ;~ 0396:11FA
cs=0x396;eip=0x0011fd; 	X(PUSH(ax));	// 6004 push    ax ;~ 0396:11FD
cs=0x396;eip=0x0011fe; 	T(MOV(ax, 0x2264));	// 6005 mov     ax, 2264h ;~ 0396:11FE
cs=0x396;eip=0x001201; 	X(PUSH(ax));	// 6006 push    ax ;~ 0396:1201
cs=0x396;eip=0x001202; 	X(PUSH(cs));	// 6007 push    cs ;~ 0396:1202
cs=0x396;eip=0x001203; 	R(CALL(sub_13a16,0));	// 6008 call    near ptr sub_13A16 ;~ 0396:1203
cs=0x396;eip=0x001206; 	T(ADD(sp, 4));	// 6009 add     sp, 4 ;~ 0396:1206
cs=0x396;eip=0x001209; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 6010 mov     [bp+var_2], ax ;~ 0396:1209
cs=0x396;eip=0x00120c; 	X(MOV(byte_2e0b6, 0));	// 6011 mov     byte_2E0B6, 0 ;~ 0396:120C
loc_13151:
	// 4714 
cs=0x396;eip=0x001211; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 6015 inc     [bp+var_4] ;~ 0396:1211
loc_13154:
	// 4715 
cs=0x396;eip=0x001214; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 7));	// 6018 cmp     [bp+var_4], 7 ;~ 0396:1214
cs=0x396;eip=0x001218; 	R(JGE(loc_13182));	// 6019 jge     short loc_13182 ;~ 0396:1218
cs=0x396;eip=0x00121a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 6020 mov     bx, [bp+var_4] ;~ 0396:121A
cs=0x396;eip=0x00121d; 	T(SHL(bx, 1));	// 6021 shl     bx, 1 ;~ 0396:121D
cs=0x396;eip=0x00121f; 	T(SHL(bx, 1));	// 6022 shl     bx, 1 ;~ 0396:121F
cs=0x396;eip=0x001221; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1FC2))));	// 6023 mov     ax, [bx+1FC2h] ;~ 0396:1221
cs=0x396;eip=0x001225; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x1FC4))));	// 6024 mov     dx, [bx+1FC4h] ;~ 0396:1225
cs=0x396;eip=0x001229; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 6025 mov     [bp+var_8], ax ;~ 0396:1229
cs=0x396;eip=0x00122c; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 6026 mov     [bp+var_6], dx ;~ 0396:122C
cs=0x396;eip=0x00122f; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 6027 cmp     [bp+var_4], 0 ;~ 0396:122F
cs=0x396;eip=0x001233; 	R(JZ(loc_13178));	// 6028 jz      short loc_13178 ;~ 0396:1233
cs=0x396;eip=0x001235; 	R(JMP(loc_13066));	// 6029 jmp     loc_13066 ;~ 0396:1235
loc_13178:
	// 4716 
cs=0x396;eip=0x001238; 	T(MOV(ax, 0x13));	// 6033 mov     ax, 13h ;~ 0396:1238
cs=0x396;eip=0x00123b; 	X(PUSH(ax));	// 6034 push    ax ;~ 0396:123B
cs=0x396;eip=0x00123c; 	T(MOV(ax, 4));	// 6035 mov     ax, 4 ;~ 0396:123C
cs=0x396;eip=0x00123f; 	R(JMP(loc_13070));	// 6036 jmp     loc_13070 ;~ 0396:123F
loc_13182:
	// 4717 
cs=0x396;eip=0x001242; 	T(MOV(ax, 0x0B50));	// 6040 mov     ax, 0B50h ;~ 0396:1242
cs=0x396;eip=0x001245; 	X(PUSH(ax));	// 6041 push    ax ;~ 0396:1245
cs=0x396;eip=0x001246; 	T(MOV(ax, 0x2264));	// 6042 mov     ax, 2264h ;~ 0396:1246
cs=0x396;eip=0x001249; 	X(PUSH(ax));	// 6043 push    ax ;~ 0396:1249
cs=0x396;eip=0x00124a; 	T(MOV(ax, 0x0ABA));	// 6044 mov     ax, 0ABAh ;~ 0396:124A
cs=0x396;eip=0x00124d; 	X(PUSH(ax));	// 6045 push    ax ;~ 0396:124D
cs=0x396;eip=0x00124e; 	X(PUSH(word_2c93e));	// 6046 push    word_2C93E ;~ 0396:124E
cs=0x396;eip=0x001252; 	X(PUSH(cs));	// 6047 push    cs ;~ 0396:1252
cs=0x396;eip=0x001253; 	R(CALL(sub_14930,0));	// 6048 call    near ptr sub_14930 ;~ 0396:1253
cs=0x396;eip=0x001256; 	T(ADD(sp, 8));	// 6049 add     sp, 8 ;~ 0396:1256
cs=0x396;eip=0x001259; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 6050 mov     [bp+var_2], ax ;~ 0396:1259
cs=0x396;eip=0x00125c; 	T(MOV(ax, word_2c81a));	// 6051 mov     ax, word_2C81A ;~ 0396:125C
cs=0x396;eip=0x00125f; 	T(OR(ax, word_2c81c));	// 6052 or      ax, word_2C81C ;~ 0396:125F
cs=0x396;eip=0x001263; 	R(JZ(loc_131cb));	// 6053 jz      short loc_131CB ;~ 0396:1263
cs=0x396;eip=0x001265; 	T(CMP(byte_2c948, 1));	// 6054 cmp     byte_2C948, 1 ;~ 0396:1265
cs=0x396;eip=0x00126a; 	R(JNZ(loc_131cb));	// 6055 jnz     short loc_131CB ;~ 0396:126A
cs=0x396;eip=0x00126c; 	T(MOV(ax, 0x17));	// 6056 mov     ax, 17h ;~ 0396:126C
cs=0x396;eip=0x00126f; 	X(PUSH(ax));	// 6057 push    ax ;~ 0396:126F
cs=0x396;eip=0x001270; 	T(MOV(ax, 0x18));	// 6058 mov     ax, 18h ;~ 0396:1270
cs=0x396;eip=0x001273; 	X(PUSH(ax));	// 6059 push    ax ;~ 0396:1273
cs=0x396;eip=0x001274; 	R(CALLF(sub_1c90c,0));	// 6060 call    sub_1C90C ;~ 0396:1274
cs=0x396;eip=0x001279; 	T(ADD(sp, 4));	// 6061 add     sp, 4 ;~ 0396:1279
cs=0x396;eip=0x00127c; 	X(PUSH(word_2c81c));	// 6062 push    word_2C81C ;~ 0396:127C
cs=0x396;eip=0x001280; 	X(PUSH(word_2c81a));	// 6063 push    word_2C81A ;~ 0396:1280
cs=0x396;eip=0x001284; 	X(PUSH(cs));	// 6064 push    cs ;~ 0396:1284
cs=0x396;eip=0x001285; 	R(CALL(sub_13214,0));	// 6065 call    near ptr sub_13214 ;~ 0396:1285
cs=0x396;eip=0x001288; 	T(ADD(sp, 4));	// 6066 add     sp, 4 ;~ 0396:1288
loc_131cb:
	// 4718 
cs=0x396;eip=0x00128b; 	T(SUB(ax, ax));	// 6070 sub     ax, ax ;~ 0396:128B
cs=0x396;eip=0x00128d; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 6071 mov     [bp+var_A], ax ;~ 0396:128D
cs=0x396;eip=0x001290; 	X(PUSH(ax));	// 6072 push    ax ;~ 0396:1290
cs=0x396;eip=0x001291; 	T(MOV(ax, 0x1FDE));	// 6073 mov     ax, 1FDEh ;~ 0396:1291
cs=0x396;eip=0x001294; 	X(PUSH(ax));	// 6074 push    ax ;~ 0396:1294
cs=0x396;eip=0x001295; 	X(PUSH(cs));	// 6075 push    cs ;~ 0396:1295
cs=0x396;eip=0x001296; 	R(CALL(sub_139c2,0));	// 6076 call    near ptr sub_139C2 ;~ 0396:1296
cs=0x396;eip=0x001299; 	T(ADD(sp, 4));	// 6077 add     sp, 4 ;~ 0396:1299
cs=0x396;eip=0x00129c; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 6078 mov     [bp+var_A], ax ;~ 0396:129C
cs=0x396;eip=0x00129f; 	T(SUB(ax, ax));	// 6079 sub     ax, ax ;~ 0396:129F
cs=0x396;eip=0x0012a1; 	X(MOV(word_2c81c, ax));	// 6080 mov     word_2C81C, ax ;~ 0396:12A1
cs=0x396;eip=0x0012a4; 	X(MOV(word_2c81a, ax));	// 6081 mov     word_2C81A, ax ;~ 0396:12A4
cs=0x396;eip=0x0012a7; 	T(SUB(al, al));	// 6082 sub     al, al ;~ 0396:12A7
cs=0x396;eip=0x0012a9; 	X(MOV(byte_34f9b, al));	// 6083 mov     byte_34F9B, al ;~ 0396:12A9
cs=0x396;eip=0x0012ac; 	X(MOV(byte_2becc, al));	// 6084 mov     byte_2BECC, al ;~ 0396:12AC
cs=0x396;eip=0x0012af; 	X(PUSH(cs));	// 6085 push    cs ;~ 0396:12AF
cs=0x396;eip=0x0012b0; 	R(CALL(sub_13b22,0));	// 6086 call    near ptr sub_13B22 ;~ 0396:12B0
cs=0x396;eip=0x0012b3; 	X(MOV(byte_34f20, 0));	// 6087 mov     byte_34F20, 0 ;~ 0396:12B3
cs=0x396;eip=0x0012b8; 	T(CMP(byte_2becc, 0));	// 6088 cmp     byte_2BECC, 0 ;~ 0396:12B8
cs=0x396;eip=0x0012bd; 	R(JZ(loc_13206));	// 6089 jz      short loc_13206 ;~ 0396:12BD
cs=0x396;eip=0x0012bf; 	T(SUB(ax, ax));	// 6090 sub     ax, ax ;~ 0396:12BF
cs=0x396;eip=0x0012c1; 	T(MOV(sp, bp));	// 6091 mov     sp, bp ;~ 0396:12C1
cs=0x396;eip=0x0012c3; 	X(POP(bp));	// 6092 pop     bp ;~ 0396:12C3
cs=0x396;eip=0x0012c4; 	R(RETF(0));	// 6093 retf ;~ 0396:12C4
loc_13206:
	// 4719 
cs=0x396;eip=0x0012c6; 	T(SUB(ax, ax));	// 6098 sub     ax, ax ;~ 0396:12C6
cs=0x396;eip=0x0012c8; 	X(PUSH(ax));	// 6099 push    ax ;~ 0396:12C8
cs=0x396;eip=0x0012c9; 	X(PUSH(cs));	// 6100 push    cs ;~ 0396:12C9
cs=0x396;eip=0x0012ca; 	R(CALL(sub_13ace,0));	// 6101 call    near ptr sub_13ACE ;~ 0396:12CA
cs=0x396;eip=0x0012cd; 	T(ADD(sp, 2));	// 6102 add     sp, 2 ;~ 0396:12CD
cs=0x396;eip=0x0012d0; 	T(MOV(sp, bp));	// 6103 mov     sp, bp ;~ 0396:12D0
cs=0x396;eip=0x0012d2; 	X(POP(bp));	// 6104 pop     bp ;~ 0396:12D2
cs=0x396;eip=0x0012d3; 	R(RETF(0));	// 6105 retf ;~ 0396:12D3
sub_13214:
	// 6113 
#undef var_4
#define var_4 -4
	// 6116 var_4           = word ptr -4 ;~ 0396:12D4
#undef var_2
#define var_2 -2
	// 6117 var_2           = word ptr -2 ;~ 0396:12D4
#undef arg_0
#define arg_0 6
	// 6118 arg_0           = word ptr  6 ;~ 0396:12D4
#undef arg_2
#define arg_2 8
	// 6119 arg_2           = word ptr  8 ;~ 0396:12D4
ret_396_12d4:
	// 4720 
cs=0x396;eip=0x0012d4; 	X(PUSH(bp));	// 6121 push    bp ;~ 0396:12D4
cs=0x396;eip=0x0012d5; 	T(MOV(bp, sp));	// 6122 mov     bp, sp ;~ 0396:12D5
cs=0x396;eip=0x0012d7; 	T(SUB(sp, 4));	// 6123 sub     sp, 4 ;~ 0396:12D7
cs=0x396;eip=0x0012da; 	X(PUSH(si));	// 6124 push    si ;~ 0396:12DA
cs=0x396;eip=0x0012db; 	T(MOV(ax, 0x0A));	// 6125 mov     ax, 0Ah ;~ 0396:12DB
cs=0x396;eip=0x0012de; 	T(CWD);	// 6126 cwd ;~ 0396:12DE
cs=0x396;eip=0x0012df; 	X(PUSH(dx));	// 6127 push    dx ;~ 0396:12DF
cs=0x396;eip=0x0012e0; 	X(PUSH(ax));	// 6128 push    ax ;~ 0396:12E0
cs=0x396;eip=0x0012e1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 6129 push    [bp+arg_2] ;~ 0396:12E1
cs=0x396;eip=0x0012e4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 6130 push    [bp+arg_0] ;~ 0396:12E4
cs=0x396;eip=0x0012e7; 	R(CALLF(sub_29e76,0));	// 6131 call    sub_29E76 ;~ 0396:12E7
cs=0x396;eip=0x0012ec; 	T(ADD(al, 0x30));	// 6132 add     al, 30h ; '0' ;~ 0396:12EC
cs=0x396;eip=0x0012ee; 	X(MOV(byte_3a8c1, al));	// 6133 mov     byte_3A8C1, al ;~ 0396:12EE
cs=0x396;eip=0x0012f1; 	T(MOV(ax, 0x0A));	// 6134 mov     ax, 0Ah ;~ 0396:12F1
cs=0x396;eip=0x0012f4; 	T(CWD);	// 6135 cwd ;~ 0396:12F4
cs=0x396;eip=0x0012f5; 	X(PUSH(dx));	// 6136 push    dx ;~ 0396:12F5
cs=0x396;eip=0x0012f6; 	X(PUSH(ax));	// 6137 push    ax ;~ 0396:12F6
cs=0x396;eip=0x0012f7; 	T(MOV(ax, 0x64));	// 6138 mov     ax, 64h ; 'd' ;~ 0396:12F7
cs=0x396;eip=0x0012fa; 	T(CWD);	// 6139 cwd ;~ 0396:12FA
cs=0x396;eip=0x0012fb; 	X(PUSH(dx));	// 6140 push    dx ;~ 0396:12FB
cs=0x396;eip=0x0012fc; 	X(PUSH(ax));	// 6141 push    ax ;~ 0396:12FC
cs=0x396;eip=0x0012fd; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 6142 push    [bp+arg_2] ;~ 0396:12FD
cs=0x396;eip=0x001300; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 6143 push    [bp+arg_0] ;~ 0396:1300
cs=0x396;eip=0x001303; 	R(CALLF(sub_29e76,0));	// 6144 call    sub_29E76 ;~ 0396:1303
cs=0x396;eip=0x001308; 	X(PUSH(dx));	// 6145 push    dx ;~ 0396:1308
cs=0x396;eip=0x001309; 	X(PUSH(ax));	// 6146 push    ax ;~ 0396:1309
cs=0x396;eip=0x00130a; 	R(CALLF(sub_29e14,0));	// 6147 call    sub_29E14 ;~ 0396:130A
cs=0x396;eip=0x00130f; 	T(ADD(al, 0x30));	// 6148 add     al, 30h ; '0' ;~ 0396:130F
cs=0x396;eip=0x001311; 	X(MOV(byte_3a8c0, al));	// 6149 mov     byte_3A8C0, al ;~ 0396:1311
cs=0x396;eip=0x001314; 	T(MOV(ax, 0x64));	// 6150 mov     ax, 64h ; 'd' ;~ 0396:1314
cs=0x396;eip=0x001317; 	T(CWD);	// 6151 cwd ;~ 0396:1317
cs=0x396;eip=0x001318; 	X(PUSH(dx));	// 6152 push    dx ;~ 0396:1318
cs=0x396;eip=0x001319; 	X(PUSH(ax));	// 6153 push    ax ;~ 0396:1319
cs=0x396;eip=0x00131a; 	T(MOV(ax, 0x3E8));	// 6154 mov     ax, 3E8h ;~ 0396:131A
cs=0x396;eip=0x00131d; 	T(CWD);	// 6155 cwd ;~ 0396:131D
cs=0x396;eip=0x00131e; 	X(PUSH(dx));	// 6156 push    dx ;~ 0396:131E
cs=0x396;eip=0x00131f; 	X(PUSH(ax));	// 6157 push    ax ;~ 0396:131F
cs=0x396;eip=0x001320; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 6158 push    [bp+arg_2] ;~ 0396:1320
cs=0x396;eip=0x001323; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 6159 push    [bp+arg_0] ;~ 0396:1323
cs=0x396;eip=0x001326; 	R(CALLF(sub_29e76,0));	// 6160 call    sub_29E76 ;~ 0396:1326
cs=0x396;eip=0x00132b; 	X(PUSH(dx));	// 6161 push    dx ;~ 0396:132B
cs=0x396;eip=0x00132c; 	X(PUSH(ax));	// 6162 push    ax ;~ 0396:132C
cs=0x396;eip=0x00132d; 	R(CALLF(sub_29e14,0));	// 6163 call    sub_29E14 ;~ 0396:132D
cs=0x396;eip=0x001332; 	T(ADD(al, 0x30));	// 6164 add     al, 30h ; '0' ;~ 0396:1332
cs=0x396;eip=0x001334; 	X(MOV(byte_3a8bf, al));	// 6165 mov     byte_3A8BF, al ;~ 0396:1334
cs=0x396;eip=0x001337; 	T(MOV(ax, 0x3E8));	// 6166 mov     ax, 3E8h ;~ 0396:1337
cs=0x396;eip=0x00133a; 	T(CWD);	// 6167 cwd ;~ 0396:133A
cs=0x396;eip=0x00133b; 	X(PUSH(dx));	// 6168 push    dx ;~ 0396:133B
cs=0x396;eip=0x00133c; 	X(PUSH(ax));	// 6169 push    ax ;~ 0396:133C
cs=0x396;eip=0x00133d; 	T(MOV(ax, 0x2710));	// 6170 mov     ax, 2710h ;~ 0396:133D
cs=0x396;eip=0x001340; 	T(CWD);	// 6171 cwd ;~ 0396:1340
cs=0x396;eip=0x001341; 	X(PUSH(dx));	// 6172 push    dx ;~ 0396:1341
cs=0x396;eip=0x001342; 	X(PUSH(ax));	// 6173 push    ax ;~ 0396:1342
cs=0x396;eip=0x001343; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 6174 push    [bp+arg_2] ;~ 0396:1343
cs=0x396;eip=0x001346; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 6175 push    [bp+arg_0] ;~ 0396:1346
cs=0x396;eip=0x001349; 	R(CALLF(sub_29e76,0));	// 6176 call    sub_29E76 ;~ 0396:1349
cs=0x396;eip=0x00134e; 	X(PUSH(dx));	// 6177 push    dx ;~ 0396:134E
cs=0x396;eip=0x00134f; 	X(PUSH(ax));	// 6178 push    ax ;~ 0396:134F
cs=0x396;eip=0x001350; 	R(CALLF(sub_29e14,0));	// 6179 call    sub_29E14 ;~ 0396:1350
cs=0x396;eip=0x001355; 	T(ADD(al, 0x30));	// 6180 add     al, 30h ; '0' ;~ 0396:1355
cs=0x396;eip=0x001357; 	X(MOV(byte_3a8be, al));	// 6181 mov     byte_3A8BE, al ;~ 0396:1357
cs=0x396;eip=0x00135a; 	T(MOV(ax, 0x2710));	// 6182 mov     ax, 2710h ;~ 0396:135A
cs=0x396;eip=0x00135d; 	T(CWD);	// 6183 cwd ;~ 0396:135D
cs=0x396;eip=0x00135e; 	X(PUSH(dx));	// 6184 push    dx ;~ 0396:135E
cs=0x396;eip=0x00135f; 	X(PUSH(ax));	// 6185 push    ax ;~ 0396:135F
cs=0x396;eip=0x001360; 	T(MOV(ax, 0x86A0));	// 6186 mov     ax, 86A0h ;~ 0396:1360
cs=0x396;eip=0x001363; 	T(MOV(dx, 1));	// 6187 mov     dx, 1 ;~ 0396:1363
cs=0x396;eip=0x001366; 	X(PUSH(dx));	// 6188 push    dx ;~ 0396:1366
cs=0x396;eip=0x001367; 	X(PUSH(ax));	// 6189 push    ax ;~ 0396:1367
cs=0x396;eip=0x001368; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 6190 push    [bp+arg_2] ;~ 0396:1368
cs=0x396;eip=0x00136b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 6191 push    [bp+arg_0] ;~ 0396:136B
cs=0x396;eip=0x00136e; 	R(CALLF(sub_29e76,0));	// 6192 call    sub_29E76 ;~ 0396:136E
cs=0x396;eip=0x001373; 	X(PUSH(dx));	// 6193 push    dx ;~ 0396:1373
cs=0x396;eip=0x001374; 	X(PUSH(ax));	// 6194 push    ax ;~ 0396:1374
cs=0x396;eip=0x001375; 	R(CALLF(sub_29e14,0));	// 6195 call    sub_29E14 ;~ 0396:1375
cs=0x396;eip=0x00137a; 	T(ADD(al, 0x30));	// 6196 add     al, 30h ; '0' ;~ 0396:137A
cs=0x396;eip=0x00137c; 	X(MOV(byte_3a8bd, al));	// 6197 mov     byte_3A8BD, al ;~ 0396:137C
cs=0x396;eip=0x00137f; 	T(MOV(ax, 0x86A0));	// 6198 mov     ax, 86A0h ;~ 0396:137F
cs=0x396;eip=0x001382; 	T(MOV(dx, 1));	// 6199 mov     dx, 1 ;~ 0396:1382
cs=0x396;eip=0x001385; 	X(PUSH(dx));	// 6200 push    dx ;~ 0396:1385
cs=0x396;eip=0x001386; 	X(PUSH(ax));	// 6201 push    ax ;~ 0396:1386
cs=0x396;eip=0x001387; 	T(MOV(ax, 0x4240));	// 6202 mov     ax, 4240h ;~ 0396:1387
cs=0x396;eip=0x00138a; 	T(MOV(dx, 0x0F));	// 6203 mov     dx, 0Fh ;~ 0396:138A
cs=0x396;eip=0x00138d; 	X(PUSH(dx));	// 6204 push    dx ;~ 0396:138D
cs=0x396;eip=0x00138e; 	X(PUSH(ax));	// 6205 push    ax ;~ 0396:138E
cs=0x396;eip=0x00138f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 6206 push    [bp+arg_2] ;~ 0396:138F
cs=0x396;eip=0x001392; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 6207 push    [bp+arg_0] ;~ 0396:1392
cs=0x396;eip=0x001395; 	R(CALLF(sub_29e76,0));	// 6208 call    sub_29E76 ;~ 0396:1395
cs=0x396;eip=0x00139a; 	X(PUSH(dx));	// 6209 push    dx ;~ 0396:139A
cs=0x396;eip=0x00139b; 	X(PUSH(ax));	// 6210 push    ax ;~ 0396:139B
cs=0x396;eip=0x00139c; 	R(CALLF(sub_29e14,0));	// 6211 call    sub_29E14 ;~ 0396:139C
cs=0x396;eip=0x0013a1; 	T(ADD(al, 0x30));	// 6212 add     al, 30h ; '0' ;~ 0396:13A1
cs=0x396;eip=0x0013a3; 	X(MOV(byte_3a8bc, al));	// 6213 mov     byte_3A8BC, al ;~ 0396:13A3
cs=0x396;eip=0x0013a6; 	T(MOV(ax, 0x4240));	// 6214 mov     ax, 4240h ;~ 0396:13A6
cs=0x396;eip=0x0013a9; 	T(MOV(dx, 0x0F));	// 6215 mov     dx, 0Fh ;~ 0396:13A9
cs=0x396;eip=0x0013ac; 	X(PUSH(dx));	// 6216 push    dx ;~ 0396:13AC
cs=0x396;eip=0x0013ad; 	X(PUSH(ax));	// 6217 push    ax ;~ 0396:13AD
cs=0x396;eip=0x0013ae; 	T(MOV(ax, 0x9680));	// 6218 mov     ax, 9680h ;~ 0396:13AE
cs=0x396;eip=0x0013b1; 	T(MOV(dx, 0x98));	// 6219 mov     dx, 98h ;~ 0396:13B1
cs=0x396;eip=0x0013b4; 	X(PUSH(dx));	// 6220 push    dx ;~ 0396:13B4
cs=0x396;eip=0x0013b5; 	X(PUSH(ax));	// 6221 push    ax ;~ 0396:13B5
cs=0x396;eip=0x0013b6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 6222 push    [bp+arg_2] ;~ 0396:13B6
cs=0x396;eip=0x0013b9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 6223 push    [bp+arg_0] ;~ 0396:13B9
cs=0x396;eip=0x0013bc; 	R(CALLF(sub_29e76,0));	// 6224 call    sub_29E76 ;~ 0396:13BC
cs=0x396;eip=0x0013c1; 	X(PUSH(dx));	// 6225 push    dx ;~ 0396:13C1
cs=0x396;eip=0x0013c2; 	X(PUSH(ax));	// 6226 push    ax ;~ 0396:13C2
cs=0x396;eip=0x0013c3; 	R(CALLF(sub_29e14,0));	// 6227 call    sub_29E14 ;~ 0396:13C3
cs=0x396;eip=0x0013c8; 	T(ADD(al, 0x30));	// 6228 add     al, 30h ; '0' ;~ 0396:13C8
cs=0x396;eip=0x0013ca; 	X(MOV(byte_3a8bb, al));	// 6229 mov     byte_3A8BB, al ;~ 0396:13CA
cs=0x396;eip=0x0013cd; 	T(MOV(ax, 0x9680));	// 6230 mov     ax, 9680h ;~ 0396:13CD
cs=0x396;eip=0x0013d0; 	T(MOV(dx, 0x98));	// 6231 mov     dx, 98h ;~ 0396:13D0
cs=0x396;eip=0x0013d3; 	X(PUSH(dx));	// 6232 push    dx ;~ 0396:13D3
cs=0x396;eip=0x0013d4; 	X(PUSH(ax));	// 6233 push    ax ;~ 0396:13D4
cs=0x396;eip=0x0013d5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 6234 push    [bp+arg_2] ;~ 0396:13D5
cs=0x396;eip=0x0013d8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 6235 push    [bp+arg_0] ;~ 0396:13D8
cs=0x396;eip=0x0013db; 	R(CALLF(sub_29e14,0));	// 6236 call    sub_29E14 ;~ 0396:13DB
cs=0x396;eip=0x0013e0; 	T(ADD(al, 0x30));	// 6237 add     al, 30h ; '0' ;~ 0396:13E0
cs=0x396;eip=0x0013e2; 	X(MOV(byte_3a8ba, al));	// 6238 mov     byte_3A8BA, al ;~ 0396:13E2
cs=0x396;eip=0x0013e5; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 6239 mov     [bp+var_2], 0 ;~ 0396:13E5
cs=0x396;eip=0x0013ea; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 6240 mov     [bp+var_4], 0 ;~ 0396:13EA
cs=0x396;eip=0x0013ef; 	R(JMP(loc_13338));	// 6241 jmp     short loc_13338 ;~ 0396:13EF
loc_13332:
	// 4721 
cs=0x396;eip=0x0013f2; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 6246 inc     [bp+var_2] ;~ 0396:13F2
cs=0x396;eip=0x0013f5; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 6247 inc     [bp+var_4] ;~ 0396:13F5
loc_13338:
	// 4722 
cs=0x396;eip=0x0013f8; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 7));	// 6250 cmp     [bp+var_4], 7 ;~ 0396:13F8
cs=0x396;eip=0x0013fc; 	R(JGE(loc_13348));	// 6251 jge     short loc_13348 ;~ 0396:13FC
cs=0x396;eip=0x0013fe; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 6252 mov     bx, [bp+var_4] ;~ 0396:13FE
cs=0x396;eip=0x001401; 	T(CMP(*(raddr(ds,bx-0x1586)), 0x30));	// 6253 cmp     byte ptr [bx-1586h], 30h ; '0' ;~ 0396:1401
cs=0x396;eip=0x001406; 	R(JZ(loc_13332));	// 6254 jz      short loc_13332 ;~ 0396:1406
loc_13348:
	// 4723 
cs=0x396;eip=0x001408; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 6257 mov     [bp+var_4], 0 ;~ 0396:1408
cs=0x396;eip=0x00140d; 	R(JMP(loc_13364));	// 6258 jmp     short loc_13364 ;~ 0396:140D
loc_13350:
	// 4724 
cs=0x396;eip=0x001410; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 6263 mov     bx, [bp+var_4] ;~ 0396:1410
cs=0x396;eip=0x001413; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2))));	// 6264 mov     si, [bp+var_2] ;~ 0396:1413
cs=0x396;eip=0x001416; 	T(MOV(al, *(raddr(ds,si-0x1586))));	// 6265 mov     al, [si-1586h] ;~ 0396:1416
cs=0x396;eip=0x00141a; 	X(MOV(*(raddr(ds,bx-0x157C)), al));	// 6266 mov     [bx-157Ch], al ;~ 0396:141A
cs=0x396;eip=0x00141e; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 6267 inc     [bp+var_4] ;~ 0396:141E
cs=0x396;eip=0x001421; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 6268 inc     [bp+var_2] ;~ 0396:1421
loc_13364:
	// 4725 
cs=0x396;eip=0x001424; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 8));	// 6271 cmp     [bp+var_2], 8 ;~ 0396:1424
cs=0x396;eip=0x001428; 	R(JL(loc_13350));	// 6272 jl      short loc_13350 ;~ 0396:1428
cs=0x396;eip=0x00142a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 6273 mov     bx, [bp+var_4] ;~ 0396:142A
cs=0x396;eip=0x00142d; 	X(MOV(*(raddr(ds,bx-0x157C)), 0x80));	// 6274 mov     byte ptr [bx-157Ch], 80h ; 'Ä' ;~ 0396:142D
cs=0x396;eip=0x001432; 	T(SUB(ax, ax));	// 6275 sub     ax, ax ;~ 0396:1432
cs=0x396;eip=0x001434; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 6276 mov     [bp+var_4], ax ;~ 0396:1434
cs=0x396;eip=0x001437; 	X(PUSH(ax));	// 6277 push    ax ;~ 0396:1437
cs=0x396;eip=0x001438; 	T(MOV(ax, 0x0EA84));	// 6278 mov     ax, 0EA84h ;~ 0396:1438
cs=0x396;eip=0x00143b; 	X(PUSH(ax));	// 6279 push    ax ;~ 0396:143B
cs=0x396;eip=0x00143c; 	X(PUSH(cs));	// 6280 push    cs ;~ 0396:143C
cs=0x396;eip=0x00143d; 	R(CALL(sub_13a16,0));	// 6281 call    near ptr sub_13A16 ;~ 0396:143D
cs=0x396;eip=0x001440; 	T(ADD(sp, 4));	// 6282 add     sp, 4 ;~ 0396:1440
cs=0x396;eip=0x001443; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 6283 mov     [bp+var_4], ax ;~ 0396:1443
cs=0x396;eip=0x001446; 	X(POP(si));	// 6284 pop     si ;~ 0396:1446
cs=0x396;eip=0x001447; 	T(MOV(sp, bp));	// 6285 mov     sp, bp ;~ 0396:1447
cs=0x396;eip=0x001449; 	X(POP(bp));	// 6286 pop     bp ;~ 0396:1449
cs=0x396;eip=0x00144a; 	R(RETF(0));	// 6287 retf ;~ 0396:144A
sub_1338c:
	// 6297 
#undef var_6
#define var_6 -6
	// 6299 var_6           = word ptr -6 ;~ 0396:144C
#undef var_4
#define var_4 -4
	// 6300 var_4           = word ptr -4 ;~ 0396:144C
#undef var_2
#define var_2 -2
	// 6301 var_2           = word ptr -2 ;~ 0396:144C
ret_396_144c:
	// 4726 
cs=0x396;eip=0x00144c; 	X(PUSH(bp));	// 6303 push    bp ;~ 0396:144C
cs=0x396;eip=0x00144d; 	T(MOV(bp, sp));	// 6304 mov     bp, sp ;~ 0396:144D
cs=0x396;eip=0x00144f; 	T(SUB(sp, 6));	// 6305 sub     sp, 6 ;~ 0396:144F
cs=0x396;eip=0x001452; 	X(PUSH(cs));	// 6306 push    cs ;~ 0396:1452
cs=0x396;eip=0x001453; 	R(CALL(sub_14752,0));	// 6307 call    near ptr sub_14752 ;~ 0396:1453
cs=0x396;eip=0x001456; 	T(MOV(al, 1));	// 6308 mov     al, 1 ;~ 0396:1456
cs=0x396;eip=0x001458; 	X(MOV(byte_2c804, al));	// 6309 mov     byte_2C804, al ;~ 0396:1458
cs=0x396;eip=0x00145b; 	X(MOV(byte_38ad2, al));	// 6310 mov     byte_38AD2, al ;~ 0396:145B
cs=0x396;eip=0x00145e; 	X(MOV(byte_2bedf, 0));	// 6311 mov     byte_2BEDF, 0 ;~ 0396:145E
cs=0x396;eip=0x001463; 	T(CMP(word_3a178, 0x13));	// 6312 cmp     word_3A178, 13h ;~ 0396:1463
cs=0x396;eip=0x001468; 	R(JNZ(loc_133dd));	// 6313 jnz     short loc_133DD ;~ 0396:1468
cs=0x396;eip=0x00146a; 	X(PUSH(cs));	// 6314 push    cs ;~ 0396:146A
cs=0x396;eip=0x00146b; 	R(CALL(sub_13bb2,0));	// 6315 call    near ptr sub_13BB2 ;~ 0396:146B
cs=0x396;eip=0x00146e; 	T(SUB(ax, ax));	// 6316 sub     ax, ax ;~ 0396:146E
cs=0x396;eip=0x001470; 	X(MOV(word_2beda, ax));	// 6317 mov     word_2BEDA, ax ;~ 0396:1470
cs=0x396;eip=0x001473; 	X(PUSH(ax));	// 6318 push    ax ;~ 0396:1473
cs=0x396;eip=0x001474; 	R(CALLF(sub_2714e,0));	// 6319 call    far ptr sub_2714E ;~ 0396:1474
cs=0x396;eip=0x001479; 	T(ADD(sp, 2));	// 6320 add     sp, 2 ;~ 0396:1479
cs=0x396;eip=0x00147c; 	T(SUB(ax, ax));	// 6321 sub     ax, ax ;~ 0396:147C
cs=0x396;eip=0x00147e; 	X(PUSH(ax));	// 6322 push    ax ;~ 0396:147E
cs=0x396;eip=0x00147f; 	R(CALLF(sub_27031,0));	// 6323 call    far ptr sub_27031 ;~ 0396:147F
cs=0x396;eip=0x001484; 	T(ADD(sp, 2));	// 6324 add     sp, 2 ;~ 0396:1484
cs=0x396;eip=0x001487; 	T(MOV(ax, 0x0C7));	// 6325 mov     ax, 0C7h ; '«' ;~ 0396:1487
cs=0x396;eip=0x00148a; 	X(PUSH(ax));	// 6326 push    ax ;~ 0396:148A
cs=0x396;eip=0x00148b; 	T(SUB(ax, ax));	// 6327 sub     ax, ax ;~ 0396:148B
cs=0x396;eip=0x00148d; 	X(PUSH(ax));	// 6328 push    ax ;~ 0396:148D
cs=0x396;eip=0x00148e; 	T(MOV(ax, 0x13F));	// 6329 mov     ax, 13Fh ;~ 0396:148E
cs=0x396;eip=0x001491; 	X(PUSH(ax));	// 6330 push    ax ;~ 0396:1491
cs=0x396;eip=0x001492; 	T(SUB(ax, ax));	// 6331 sub     ax, ax ;~ 0396:1492
cs=0x396;eip=0x001494; 	X(PUSH(ax));	// 6332 push    ax ;~ 0396:1494
cs=0x396;eip=0x001495; 	R(CALLF(sub_2785b,0));	// 6333 call    far ptr sub_2785B ;~ 0396:1495
cs=0x396;eip=0x00149a; 	T(ADD(sp, 8));	// 6334 add     sp, 8 ;~ 0396:149A
loc_133dd:
	// 4727 
cs=0x396;eip=0x00149d; 	X(MOV(byte_34f30, 0x80));	// 6337 mov     byte_34F30, 80h ; 'Ä' ;~ 0396:149D
cs=0x396;eip=0x0014a2; 	T(MOV(ax, 0x0F83));	// 6338 mov     ax, 0F83h ;~ 0396:14A2
cs=0x396;eip=0x0014a5; 	X(PUSH(ax));	// 6339 push    ax ;~ 0396:14A5
cs=0x396;eip=0x0014a6; 	T(MOV(ax, 0x0A8C));	// 6340 mov     ax, 0A8Ch ;~ 0396:14A6
cs=0x396;eip=0x0014a9; 	X(PUSH(ax));	// 6341 push    ax ;~ 0396:14A9
cs=0x396;eip=0x0014aa; 	R(CALLF(sub_29b46,0));	// 6342 call    sub_29B46 ;~ 0396:14AA
cs=0x396;eip=0x0014af; 	T(ADD(sp, 4));	// 6343 add     sp, 4 ;~ 0396:14AF
cs=0x396;eip=0x0014b2; 	T(MOV(ax, 0x0A8A));	// 6344 mov     ax, 0A8Ah ;~ 0396:14B2
cs=0x396;eip=0x0014b5; 	X(PUSH(ax));	// 6345 push    ax ;~ 0396:14B5
cs=0x396;eip=0x0014b6; 	R(CALLF(sub_10d62,0));	// 6346 call    sub_10D62 ;~ 0396:14B6
cs=0x396;eip=0x0014bb; 	T(ADD(sp, 2));	// 6347 add     sp, 2 ;~ 0396:14BB
cs=0x396;eip=0x0014be; 	T(MOV(ax, 0x0F8F));	// 6348 mov     ax, 0F8Fh ;~ 0396:14BE
cs=0x396;eip=0x0014c1; 	X(PUSH(ax));	// 6349 push    ax ;~ 0396:14C1
cs=0x396;eip=0x0014c2; 	T(MOV(ax, 0x0AC1));	// 6350 mov     ax, 0AC1h ;~ 0396:14C2
cs=0x396;eip=0x0014c5; 	X(PUSH(ax));	// 6351 push    ax ;~ 0396:14C5
cs=0x396;eip=0x0014c6; 	R(CALLF(sub_29b46,0));	// 6352 call    sub_29B46 ;~ 0396:14C6
cs=0x396;eip=0x0014cb; 	T(ADD(sp, 4));	// 6353 add     sp, 4 ;~ 0396:14CB
cs=0x396;eip=0x0014ce; 	T(MOV(ax, 0x0ABA));	// 6354 mov     ax, 0ABAh ;~ 0396:14CE
cs=0x396;eip=0x0014d1; 	X(PUSH(ax));	// 6355 push    ax ;~ 0396:14D1
cs=0x396;eip=0x0014d2; 	R(CALLF(sub_10df6,0));	// 6356 call    sub_10DF6 ;~ 0396:14D2
cs=0x396;eip=0x0014d7; 	T(ADD(sp, 2));	// 6357 add     sp, 2 ;~ 0396:14D7
cs=0x396;eip=0x0014da; 	X(MOV(byte_34f30, 0));	// 6358 mov     byte_34F30, 0 ;~ 0396:14DA
cs=0x396;eip=0x0014df; 	T(MOV(ax, 0x0F97));	// 6359 mov     ax, 0F97h ;~ 0396:14DF
cs=0x396;eip=0x0014e2; 	X(PUSH(ax));	// 6360 push    ax ;~ 0396:14E2
cs=0x396;eip=0x0014e3; 	T(MOV(ax, 0x0A8C));	// 6361 mov     ax, 0A8Ch ;~ 0396:14E3
cs=0x396;eip=0x0014e6; 	X(PUSH(ax));	// 6362 push    ax ;~ 0396:14E6
cs=0x396;eip=0x0014e7; 	R(CALLF(sub_29b46,0));	// 6363 call    sub_29B46 ;~ 0396:14E7
cs=0x396;eip=0x0014ec; 	T(ADD(sp, 4));	// 6364 add     sp, 4 ;~ 0396:14EC
cs=0x396;eip=0x0014ef; 	T(MOV(ax, 0x0A8A));	// 6365 mov     ax, 0A8Ah ;~ 0396:14EF
cs=0x396;eip=0x0014f2; 	X(PUSH(ax));	// 6366 push    ax ;~ 0396:14F2
cs=0x396;eip=0x0014f3; 	R(CALLF(sub_10d62,0));	// 6367 call    sub_10D62 ;~ 0396:14F3
cs=0x396;eip=0x0014f8; 	T(ADD(sp, 2));	// 6368 add     sp, 2 ;~ 0396:14F8
cs=0x396;eip=0x0014fb; 	X(PUSH(cs));	// 6369 push    cs ;~ 0396:14FB
cs=0x396;eip=0x0014fc; 	R(CALL(sub_13b96,0));	// 6370 call    near ptr sub_13B96 ;~ 0396:14FC
cs=0x396;eip=0x0014ff; 	X(MOV(byte_34f30, 0x80));	// 6371 mov     byte_34F30, 80h ; 'Ä' ;~ 0396:14FF
cs=0x396;eip=0x001504; 	X(MOV(byte_2becc, 0));	// 6372 mov     byte_2BECC, 0 ;~ 0396:1504
cs=0x396;eip=0x001509; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 1));	// 6373 mov     [bp+var_4], 1 ;~ 0396:1509
cs=0x396;eip=0x00150e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0FF));	// 6374 mov     [bp+var_2], 0FFh ;~ 0396:150E
cs=0x396;eip=0x001513; 	T(MOV(ax, 1));	// 6375 mov     ax, 1 ;~ 0396:1513
cs=0x396;eip=0x001516; 	X(MOV(word_2beda, ax));	// 6376 mov     word_2BEDA, ax ;~ 0396:1516
cs=0x396;eip=0x001519; 	X(PUSH(ax));	// 6377 push    ax ;~ 0396:1519
cs=0x396;eip=0x00151a; 	R(CALLF(sub_2714e,0));	// 6378 call    far ptr sub_2714E ;~ 0396:151A
cs=0x396;eip=0x00151f; 	T(ADD(sp, 2));	// 6379 add     sp, 2 ;~ 0396:151F
cs=0x396;eip=0x001522; 	T(MOV(ax, 0x2500));	// 6380 mov     ax, 2500h ;~ 0396:1522
cs=0x396;eip=0x001525; 	X(PUSH(ds));	// 6381 push    ds ;~ 0396:1525
cs=0x396;eip=0x001526; 	X(PUSH(ax));	// 6382 push    ax ;~ 0396:1526
cs=0x396;eip=0x001527; 	X(PUSH(word_3a6a8));	// 6383 push    word_3A6A8 ;~ 0396:1527
cs=0x396;eip=0x00152b; 	X(PUSH(word_3a6a6));	// 6384 push    word_3A6A6 ;~ 0396:152B
cs=0x396;eip=0x00152f; 	R(CALLF(sub_1ab87,0));	// 6385 call    sub_1AB87 ;~ 0396:152F
cs=0x396;eip=0x001534; 	T(ADD(sp, 8));	// 6386 add     sp, 8 ;~ 0396:1534
cs=0x396;eip=0x001537; 	T(SUB(ax, ax));	// 6387 sub     ax, ax ;~ 0396:1537
cs=0x396;eip=0x001539; 	X(PUSH(ax));	// 6388 push    ax ;~ 0396:1539
cs=0x396;eip=0x00153a; 	T(MOV(ax, 0x0C7));	// 6389 mov     ax, 0C7h ; '«' ;~ 0396:153A
cs=0x396;eip=0x00153d; 	X(PUSH(ax));	// 6390 push    ax ;~ 0396:153D
cs=0x396;eip=0x00153e; 	T(SUB(ax, ax));	// 6391 sub     ax, ax ;~ 0396:153E
cs=0x396;eip=0x001540; 	X(PUSH(ax));	// 6392 push    ax ;~ 0396:1540
cs=0x396;eip=0x001541; 	T(MOV(ax, 0x140));	// 6393 mov     ax, 140h ;~ 0396:1541
cs=0x396;eip=0x001544; 	X(PUSH(ax));	// 6394 push    ax ;~ 0396:1544
cs=0x396;eip=0x001545; 	T(MOV(ax, 0x17CC));	// 6395 mov     ax, 17CCh ;~ 0396:1545
cs=0x396;eip=0x001548; 	X(PUSH(ax));	// 6396 push    ax ;~ 0396:1548
cs=0x396;eip=0x001549; 	T(MOV(ax, 0x2500));	// 6397 mov     ax, 2500h ;~ 0396:1549
cs=0x396;eip=0x00154c; 	X(PUSH(ax));	// 6398 push    ax ;~ 0396:154C
cs=0x396;eip=0x00154d; 	X(PUSH(cs));	// 6399 push    cs ;~ 0396:154D
cs=0x396;eip=0x00154e; 	R(CALL(sub_178ec,0));	// 6400 call    near ptr sub_178EC ;~ 0396:154E
cs=0x396;eip=0x001551; 	T(ADD(sp, 0x0C));	// 6401 add     sp, 0Ch ;~ 0396:1551
cs=0x396;eip=0x001554; 	T(SUB(ax, ax));	// 6402 sub     ax, ax ;~ 0396:1554
cs=0x396;eip=0x001556; 	X(PUSH(ax));	// 6403 push    ax ;~ 0396:1556
cs=0x396;eip=0x001557; 	T(MOV(ax, 0x0F));	// 6404 mov     ax, 0Fh ;~ 0396:1557
cs=0x396;eip=0x00155a; 	X(PUSH(ax));	// 6405 push    ax ;~ 0396:155A
cs=0x396;eip=0x00155b; 	R(CALLF(sub_1c8f3,0));	// 6406 call    sub_1C8F3 ;~ 0396:155B
cs=0x396;eip=0x001560; 	T(ADD(sp, 4));	// 6407 add     sp, 4 ;~ 0396:1560
cs=0x396;eip=0x001563; 	T(MOV(ax, 0x0D));	// 6408 mov     ax, 0Dh ;~ 0396:1563
cs=0x396;eip=0x001566; 	X(PUSH(ax));	// 6409 push    ax ;~ 0396:1566
cs=0x396;eip=0x001567; 	T(MOV(ax, 0x0F));	// 6410 mov     ax, 0Fh ;~ 0396:1567
cs=0x396;eip=0x00156a; 	X(PUSH(ax));	// 6411 push    ax ;~ 0396:156A
cs=0x396;eip=0x00156b; 	R(CALLF(sub_1c92b,0));	// 6412 call    sub_1C92B ;~ 0396:156B
cs=0x396;eip=0x001570; 	T(ADD(sp, 4));	// 6413 add     sp, 4 ;~ 0396:1570
cs=0x396;eip=0x001573; 	X(MOV(byte_2e0b6, 0x80));	// 6414 mov     byte_2E0B6, 80h ; 'Ä' ;~ 0396:1573
cs=0x396;eip=0x001578; 	T(SUB(ax, ax));	// 6415 sub     ax, ax ;~ 0396:1578
cs=0x396;eip=0x00157a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 6416 mov     [bp+var_6], ax ;~ 0396:157A
cs=0x396;eip=0x00157d; 	X(PUSH(ax));	// 6417 push    ax ;~ 0396:157D
cs=0x396;eip=0x00157e; 	T(MOV(ax, 0x2264));	// 6418 mov     ax, 2264h ;~ 0396:157E
cs=0x396;eip=0x001581; 	X(PUSH(ax));	// 6419 push    ax ;~ 0396:1581
cs=0x396;eip=0x001582; 	X(PUSH(cs));	// 6420 push    cs ;~ 0396:1582
cs=0x396;eip=0x001583; 	R(CALL(sub_13a16,0));	// 6421 call    near ptr sub_13A16 ;~ 0396:1583
cs=0x396;eip=0x001586; 	T(ADD(sp, 4));	// 6422 add     sp, 4 ;~ 0396:1586
cs=0x396;eip=0x001589; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 6423 mov     [bp+var_6], ax ;~ 0396:1589
cs=0x396;eip=0x00158c; 	X(MOV(byte_2e0b6, 0));	// 6424 mov     byte_2E0B6, 0 ;~ 0396:158C
cs=0x396;eip=0x001591; 	T(MOV(ax, 0x0FA2));	// 6425 mov     ax, 0FA2h ;~ 0396:1591
cs=0x396;eip=0x001594; 	X(PUSH(ax));	// 6426 push    ax ;~ 0396:1594
cs=0x396;eip=0x001595; 	T(MOV(ax, 0x0AC1));	// 6427 mov     ax, 0AC1h ;~ 0396:1595
cs=0x396;eip=0x001598; 	X(PUSH(ax));	// 6428 push    ax ;~ 0396:1598
cs=0x396;eip=0x001599; 	R(CALLF(sub_29b46,0));	// 6429 call    sub_29B46 ;~ 0396:1599
cs=0x396;eip=0x00159e; 	T(ADD(sp, 4));	// 6430 add     sp, 4 ;~ 0396:159E
cs=0x396;eip=0x0015a1; 	X(PUSH(word_38a9e));	// 6431 push    word_38A9E ;~ 0396:15A1
cs=0x396;eip=0x0015a5; 	X(PUSH(word_38a9c));	// 6432 push    word_38A9C ;~ 0396:15A5
cs=0x396;eip=0x0015a9; 	T(MOV(ax, 0x0ABA));	// 6433 mov     ax, 0ABAh ;~ 0396:15A9
cs=0x396;eip=0x0015ac; 	X(PUSH(ax));	// 6434 push    ax ;~ 0396:15AC
cs=0x396;eip=0x0015ad; 	R(CALLF(sub_10ee0,0));	// 6435 call    sub_10EE0 ;~ 0396:15AD
cs=0x396;eip=0x0015b2; 	T(ADD(sp, 6));	// 6436 add     sp, 6 ;~ 0396:15B2
cs=0x396;eip=0x0015b5; 	T(MOV(ax, 0x2500));	// 6437 mov     ax, 2500h ;~ 0396:15B5
cs=0x396;eip=0x0015b8; 	X(PUSH(ds));	// 6438 push    ds ;~ 0396:15B8
cs=0x396;eip=0x0015b9; 	X(PUSH(ax));	// 6439 push    ax ;~ 0396:15B9
cs=0x396;eip=0x0015ba; 	X(PUSH(word_38a9e));	// 6440 push    word_38A9E ;~ 0396:15BA
cs=0x396;eip=0x0015be; 	X(PUSH(word_38a9c));	// 6441 push    word_38A9C ;~ 0396:15BE
cs=0x396;eip=0x0015c2; 	R(CALLF(sub_1ab87,0));	// 6442 call    sub_1AB87 ;~ 0396:15C2
cs=0x396;eip=0x0015c7; 	T(ADD(sp, 8));	// 6443 add     sp, 8 ;~ 0396:15C7
cs=0x396;eip=0x0015ca; 	T(SUB(ax, ax));	// 6444 sub     ax, ax ;~ 0396:15CA
cs=0x396;eip=0x0015cc; 	X(PUSH(ax));	// 6445 push    ax ;~ 0396:15CC
cs=0x396;eip=0x0015cd; 	T(MOV(ax, 0x0C5));	// 6446 mov     ax, 0C5h ; '≈' ;~ 0396:15CD
cs=0x396;eip=0x0015d0; 	X(PUSH(ax));	// 6447 push    ax ;~ 0396:15D0
cs=0x396;eip=0x0015d1; 	T(MOV(ax, 0x54));	// 6448 mov     ax, 54h ; 'T' ;~ 0396:15D1
cs=0x396;eip=0x0015d4; 	X(PUSH(ax));	// 6449 push    ax ;~ 0396:15D4
cs=0x396;eip=0x0015d5; 	T(MOV(ax, 0x48));	// 6450 mov     ax, 48h ; 'H' ;~ 0396:15D5
cs=0x396;eip=0x0015d8; 	X(PUSH(ax));	// 6451 push    ax ;~ 0396:15D8
cs=0x396;eip=0x0015d9; 	X(PUSH(word_2c992));	// 6452 push    word_2C992 ;~ 0396:15D9
cs=0x396;eip=0x0015dd; 	T(MOV(ax, 0x2500));	// 6453 mov     ax, 2500h ;~ 0396:15DD
cs=0x396;eip=0x0015e0; 	X(PUSH(ax));	// 6454 push    ax ;~ 0396:15E0
cs=0x396;eip=0x0015e1; 	X(PUSH(cs));	// 6455 push    cs ;~ 0396:15E1
cs=0x396;eip=0x0015e2; 	R(CALL(sub_178ec,0));	// 6456 call    near ptr sub_178EC ;~ 0396:15E2
cs=0x396;eip=0x0015e5; 	T(ADD(sp, 0x0C));	// 6457 add     sp, 0Ch ;~ 0396:15E5
cs=0x396;eip=0x0015e8; 	T(MOV(ax, word_2c942));	// 6458 mov     ax, word_2C942 ;~ 0396:15E8
cs=0x396;eip=0x0015eb; 	T(MOV(cl, 3));	// 6459 mov     cl, 3 ;~ 0396:15EB
cs=0x396;eip=0x0015ed; 	T(SHL(ax, cl));	// 6460 shl     ax, cl ;~ 0396:15ED
cs=0x396;eip=0x0015ef; 	T(ADD(ax, 0x0A34));	// 6461 add     ax, 0A34h ;~ 0396:15EF
cs=0x396;eip=0x0015f2; 	X(PUSH(ax));	// 6462 push    ax ;~ 0396:15F2
cs=0x396;eip=0x0015f3; 	T(MOV(ax, 0x0ADC));	// 6463 mov     ax, 0ADCh ;~ 0396:15F3
cs=0x396;eip=0x0015f6; 	X(PUSH(ax));	// 6464 push    ax ;~ 0396:15F6
cs=0x396;eip=0x0015f7; 	R(CALLF(sub_29b46,0));	// 6465 call    sub_29B46 ;~ 0396:15F7
cs=0x396;eip=0x0015fc; 	T(ADD(sp, 4));	// 6466 add     sp, 4 ;~ 0396:15FC
cs=0x396;eip=0x0015ff; 	T(MOV(ax, 0x0FA7));	// 6467 mov     ax, 0FA7h ;~ 0396:15FF
cs=0x396;eip=0x001602; 	X(PUSH(ax));	// 6468 push    ax ;~ 0396:1602
cs=0x396;eip=0x001603; 	T(MOV(ax, 0x0AE3));	// 6469 mov     ax, 0AE3h ;~ 0396:1603
cs=0x396;eip=0x001606; 	X(PUSH(ax));	// 6470 push    ax ;~ 0396:1606
cs=0x396;eip=0x001607; 	R(CALLF(sub_29b46,0));	// 6471 call    sub_29B46 ;~ 0396:1607
cs=0x396;eip=0x00160c; 	T(ADD(sp, 4));	// 6472 add     sp, 4 ;~ 0396:160C
cs=0x396;eip=0x00160f; 	X(PUSH(word_38a9e));	// 6473 push    word_38A9E ;~ 0396:160F
cs=0x396;eip=0x001613; 	X(PUSH(word_38a9c));	// 6474 push    word_38A9C ;~ 0396:1613
cs=0x396;eip=0x001617; 	T(MOV(ax, 0x0ADA));	// 6475 mov     ax, 0ADAh ;~ 0396:1617
cs=0x396;eip=0x00161a; 	X(PUSH(ax));	// 6476 push    ax ;~ 0396:161A
cs=0x396;eip=0x00161b; 	R(CALLF(sub_10ee0,0));	// 6477 call    sub_10EE0 ;~ 0396:161B
cs=0x396;eip=0x001620; 	T(ADD(sp, 6));	// 6478 add     sp, 6 ;~ 0396:1620
cs=0x396;eip=0x001623; 	T(MOV(ax, 0x2500));	// 6479 mov     ax, 2500h ;~ 0396:1623
cs=0x396;eip=0x001626; 	X(PUSH(ds));	// 6480 push    ds ;~ 0396:1626
cs=0x396;eip=0x001627; 	X(PUSH(ax));	// 6481 push    ax ;~ 0396:1627
cs=0x396;eip=0x001628; 	X(PUSH(word_38a9e));	// 6482 push    word_38A9E ;~ 0396:1628
cs=0x396;eip=0x00162c; 	X(PUSH(word_38a9c));	// 6483 push    word_38A9C ;~ 0396:162C
cs=0x396;eip=0x001630; 	R(CALLF(sub_1ab87,0));	// 6484 call    sub_1AB87 ;~ 0396:1630
cs=0x396;eip=0x001635; 	T(ADD(sp, 8));	// 6485 add     sp, 8 ;~ 0396:1635
cs=0x396;eip=0x001638; 	T(SUB(ax, ax));	// 6486 sub     ax, ax ;~ 0396:1638
cs=0x396;eip=0x00163a; 	X(PUSH(ax));	// 6487 push    ax ;~ 0396:163A
cs=0x396;eip=0x00163b; 	T(MOV(ax, 0x0C2));	// 6488 mov     ax, 0C2h ; '¬' ;~ 0396:163B
cs=0x396;eip=0x00163e; 	X(PUSH(ax));	// 6489 push    ax ;~ 0396:163E
cs=0x396;eip=0x00163f; 	T(MOV(ax, 0x0A4));	// 6490 mov     ax, 0A4h ; '§' ;~ 0396:163F
cs=0x396;eip=0x001642; 	X(PUSH(ax));	// 6491 push    ax ;~ 0396:1642
cs=0x396;eip=0x001643; 	T(MOV(ax, 0x48));	// 6492 mov     ax, 48h ; 'H' ;~ 0396:1643
cs=0x396;eip=0x001646; 	X(PUSH(ax));	// 6493 push    ax ;~ 0396:1646
cs=0x396;eip=0x001647; 	X(PUSH(word_2c958));	// 6494 push    word_2C958 ;~ 0396:1647
cs=0x396;eip=0x00164b; 	T(MOV(ax, 0x2500));	// 6495 mov     ax, 2500h ;~ 0396:164B
cs=0x396;eip=0x00164e; 	X(PUSH(ax));	// 6496 push    ax ;~ 0396:164E
cs=0x396;eip=0x00164f; 	X(PUSH(cs));	// 6497 push    cs ;~ 0396:164F
cs=0x396;eip=0x001650; 	R(CALL(sub_178ec,0));	// 6498 call    near ptr sub_178EC ;~ 0396:1650
cs=0x396;eip=0x001653; 	T(ADD(sp, 0x0C));	// 6499 add     sp, 0Ch ;~ 0396:1653
cs=0x396;eip=0x001656; 	T(SUB(ax, ax));	// 6500 sub     ax, ax ;~ 0396:1656
cs=0x396;eip=0x001658; 	X(PUSH(ax));	// 6501 push    ax ;~ 0396:1658
cs=0x396;eip=0x001659; 	T(MOV(ax, 1));	// 6502 mov     ax, 1 ;~ 0396:1659
cs=0x396;eip=0x00165c; 	X(PUSH(ax));	// 6503 push    ax ;~ 0396:165C
cs=0x396;eip=0x00165d; 	T(MOV(ax, 0x0C7));	// 6504 mov     ax, 0C7h ; '«' ;~ 0396:165D
cs=0x396;eip=0x001660; 	X(PUSH(ax));	// 6505 push    ax ;~ 0396:1660
cs=0x396;eip=0x001661; 	T(SUB(ax, ax));	// 6506 sub     ax, ax ;~ 0396:1661
cs=0x396;eip=0x001663; 	X(PUSH(ax));	// 6507 push    ax ;~ 0396:1663
cs=0x396;eip=0x001664; 	T(MOV(ax, 0x0C7));	// 6508 mov     ax, 0C7h ; '«' ;~ 0396:1664
cs=0x396;eip=0x001667; 	X(PUSH(ax));	// 6509 push    ax ;~ 0396:1667
cs=0x396;eip=0x001668; 	T(SUB(ax, ax));	// 6510 sub     ax, ax ;~ 0396:1668
cs=0x396;eip=0x00166a; 	X(PUSH(ax));	// 6511 push    ax ;~ 0396:166A
cs=0x396;eip=0x00166b; 	T(MOV(ax, 0x13F));	// 6512 mov     ax, 13Fh ;~ 0396:166B
cs=0x396;eip=0x00166e; 	X(PUSH(ax));	// 6513 push    ax ;~ 0396:166E
cs=0x396;eip=0x00166f; 	T(SUB(ax, ax));	// 6514 sub     ax, ax ;~ 0396:166F
cs=0x396;eip=0x001671; 	X(PUSH(ax));	// 6515 push    ax ;~ 0396:1671
cs=0x396;eip=0x001672; 	R(CALLF(sub_28183,0));	// 6516 call    far ptr sub_28183 ;~ 0396:1672
cs=0x396;eip=0x001677; 	T(ADD(sp, 0x10));	// 6517 add     sp, 10h ;~ 0396:1677
cs=0x396;eip=0x00167a; 	T(SUB(ax, ax));	// 6518 sub     ax, ax ;~ 0396:167A
cs=0x396;eip=0x00167c; 	X(MOV(word_2beda, ax));	// 6519 mov     word_2BEDA, ax ;~ 0396:167C
cs=0x396;eip=0x00167f; 	X(PUSH(ax));	// 6520 push    ax ;~ 0396:167F
cs=0x396;eip=0x001680; 	R(CALLF(sub_2714e,0));	// 6521 call    far ptr sub_2714E ;~ 0396:1680
cs=0x396;eip=0x001685; 	T(ADD(sp, 2));	// 6522 add     sp, 2 ;~ 0396:1685
cs=0x396;eip=0x001688; 	T(MOV(ax, 0x0F));	// 6523 mov     ax, 0Fh ;~ 0396:1688
cs=0x396;eip=0x00168b; 	X(PUSH(ax));	// 6524 push    ax ;~ 0396:168B
cs=0x396;eip=0x00168c; 	X(PUSH(ax));	// 6525 push    ax ;~ 0396:168C
cs=0x396;eip=0x00168d; 	X(PUSH(word_3a3ec));	// 6526 push    word_3A3EC ;~ 0396:168D
cs=0x396;eip=0x001691; 	X(PUSH(cs));	// 6527 push    cs ;~ 0396:1691
cs=0x396;eip=0x001692; 	R(CALL(sub_137f0,0));	// 6528 call    near ptr sub_137F0 ;~ 0396:1692
cs=0x396;eip=0x001695; 	T(ADD(sp, 6));	// 6529 add     sp, 6 ;~ 0396:1695
cs=0x396;eip=0x001698; 	X(MOV(byte_34f30, 0));	// 6530 mov     byte_34F30, 0 ;~ 0396:1698
cs=0x396;eip=0x00169d; 	R(CALLF(sub_1864e,0));	// 6531 call    sub_1864E ;~ 0396:169D
cs=0x396;eip=0x0016a2; 	R(CALLF(sub_1815c,0));	// 6532 call    sub_1815C ;~ 0396:16A2
cs=0x396;eip=0x0016a7; 	R(CALLF(sub_189c6,0));	// 6533 call    sub_189C6 ;~ 0396:16A7
cs=0x396;eip=0x0016ac; 	T(MOV(al, 1));	// 6534 mov     al, 1 ;~ 0396:16AC
cs=0x396;eip=0x0016ae; 	X(MOV(byte_352cb, al));	// 6535 mov     byte_352CB, al ;~ 0396:16AE
cs=0x396;eip=0x0016b1; 	X(MOV(byte_2d518, al));	// 6536 mov     byte_2D518, al ;~ 0396:16B1
cs=0x396;eip=0x0016b4; 	X(MOV(word_352e5, 0x0FFF0));	// 6537 mov     word_352E5, 0FFF0h ;~ 0396:16B4
cs=0x396;eip=0x0016ba; 	X(MOV(byte_352eb, 0x80));	// 6538 mov     byte_352EB, 80h ; 'Ä' ;~ 0396:16BA
cs=0x396;eip=0x0016bf; 	X(MOV(byte_352ed, 0));	// 6539 mov     byte_352ED, 0 ;~ 0396:16BF
cs=0x396;eip=0x0016c4; 	X(MOV(byte_352ec, 0x24));	// 6540 mov     byte_352EC, 24h ; '$' ;~ 0396:16C4
cs=0x396;eip=0x0016c9; 	X(MOV(word_352e7, 0x140));	// 6541 mov     word_352E7, 140h ;~ 0396:16C9
cs=0x396;eip=0x0016cf; 	X(MOV(word_352e9, 0x3E));	// 6542 mov     word_352E9, 3Eh ; '>' ;~ 0396:16CF
cs=0x396;eip=0x0016d5; 	X(MOV(word_34f1c, 0x16));	// 6543 mov     word_34F1C, 16h ;~ 0396:16D5
cs=0x396;eip=0x0016db; 	T(SUB(ax, ax));	// 6544 sub     ax, ax ;~ 0396:16DB
cs=0x396;eip=0x0016dd; 	X(PUSH(ax));	// 6545 push    ax ;~ 0396:16DD
cs=0x396;eip=0x0016de; 	X(PUSH(ax));	// 6546 push    ax ;~ 0396:16DE
cs=0x396;eip=0x0016df; 	R(CALLF(sub_27768,0));	// 6547 call    far ptr sub_27768 ;~ 0396:16DF
cs=0x396;eip=0x0016e4; 	T(ADD(sp, 4));	// 6548 add     sp, 4 ;~ 0396:16E4
cs=0x396;eip=0x0016e7; 	T(SUB(ax, ax));	// 6549 sub     ax, ax ;~ 0396:16E7
cs=0x396;eip=0x0016e9; 	X(MOV(word_2beda, ax));	// 6550 mov     word_2BEDA, ax ;~ 0396:16E9
cs=0x396;eip=0x0016ec; 	X(PUSH(ax));	// 6551 push    ax ;~ 0396:16EC
cs=0x396;eip=0x0016ed; 	R(CALLF(sub_2714e,0));	// 6552 call    far ptr sub_2714E ;~ 0396:16ED
cs=0x396;eip=0x0016f2; 	T(ADD(sp, 2));	// 6553 add     sp, 2 ;~ 0396:16F2
cs=0x396;eip=0x0016f5; 	R(CALLF(sub_2580c,0));	// 6554 call    sub_2580C ;~ 0396:16F5
cs=0x396;eip=0x0016fa; 	R(CALLF(sub_258f5,0));	// 6555 call    sub_258F5 ;~ 0396:16FA
cs=0x396;eip=0x0016ff; 	R(CALLF(sub_1d598,0));	// 6556 call    sub_1D598 ;~ 0396:16FF
cs=0x396;eip=0x001704; 	X(PUSH(cs));	// 6557 push    cs ;~ 0396:1704
cs=0x396;eip=0x001705; 	R(CALL(sub_13b88,0));	// 6558 call    near ptr sub_13B88 ;~ 0396:1705
cs=0x396;eip=0x001708; 	X(MOV(byte_34f9b, 0));	// 6559 mov     byte_34F9B, 0 ;~ 0396:1708
loc_1364d:
	// 4728 
cs=0x396;eip=0x00170d; 	T(CMP(word_3a3ec, 0x80));	// 6562 cmp     word_3A3EC, 80h ; 'Ä' ;~ 0396:170D
cs=0x396;eip=0x001713; 	R(JL(loc_13658));	// 6563 jl      short loc_13658 ;~ 0396:1713
cs=0x396;eip=0x001715; 	R(JMP(loc_1374a));	// 6564 jmp     loc_1374A ;~ 0396:1715
loc_13658:
	// 4729 
cs=0x396;eip=0x001718; 	R(CALLF(sub_2580c,0));	// 6568 call    sub_2580C ;~ 0396:1718
cs=0x396;eip=0x00171d; 	R(CALLF(sub_258f5,0));	// 6569 call    sub_258F5 ;~ 0396:171D
cs=0x396;eip=0x001722; 	R(CALLF(sub_1d598,0));	// 6570 call    sub_1D598 ;~ 0396:1722
cs=0x396;eip=0x001727; 	X(ADD(*(db*)(((db*)&word_367b9)), 2));	// 6571 add     byte ptr word_367B9, 2 ;~ 0396:1727
cs=0x396;eip=0x00172c; 	T(TEST(*(db*)(((db*)&word_37b79)), 1));	// 6572 test    byte ptr word_37B79, 1 ;~ 0396:172C
cs=0x396;eip=0x001731; 	R(JNZ(loc_13678));	// 6573 jnz     short loc_13678 ;~ 0396:1731
cs=0x396;eip=0x001733; 	T(MOV(ax, 0x0F));	// 6574 mov     ax, 0Fh ;~ 0396:1733
cs=0x396;eip=0x001736; 	R(JMP(loc_1367b));	// 6575 jmp     short loc_1367B ;~ 0396:1736
loc_13678:
	// 4730 
cs=0x396;eip=0x001738; 	T(MOV(ax, 7));	// 6579 mov     ax, 7 ;~ 0396:1738
loc_1367b:
	// 4731 
cs=0x396;eip=0x00173b; 	X(PUSH(ax));	// 6582 push    ax ;~ 0396:173B
cs=0x396;eip=0x00173c; 	X(PUSH(ax));	// 6583 push    ax ;~ 0396:173C
cs=0x396;eip=0x00173d; 	X(PUSH(word_3a3ec));	// 6584 push    word_3A3EC ;~ 0396:173D
cs=0x396;eip=0x001741; 	X(PUSH(cs));	// 6585 push    cs ;~ 0396:1741
cs=0x396;eip=0x001742; 	R(CALL(sub_137f0,0));	// 6586 call    near ptr sub_137F0 ;~ 0396:1742
cs=0x396;eip=0x001745; 	T(ADD(sp, 6));	// 6587 add     sp, 6 ;~ 0396:1745
cs=0x396;eip=0x001748; 	T(MOV(ax, word_3a3ec));	// 6588 mov     ax, word_3A3EC ;~ 0396:1748
cs=0x396;eip=0x00174b; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 6589 cmp     [bp+var_2], ax ;~ 0396:174B
cs=0x396;eip=0x00174e; 	R(JZ(loc_136b7));	// 6590 jz      short loc_136B7 ;~ 0396:174E
cs=0x396;eip=0x001750; 	T(SUB(ax, ax));	// 6591 sub     ax, ax ;~ 0396:1750
cs=0x396;eip=0x001752; 	X(PUSH(ax));	// 6592 push    ax ;~ 0396:1752
cs=0x396;eip=0x001753; 	T(MOV(ax, 9));	// 6593 mov     ax, 9 ;~ 0396:1753
cs=0x396;eip=0x001756; 	X(PUSH(ax));	// 6594 push    ax ;~ 0396:1756
cs=0x396;eip=0x001757; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 6595 push    [bp+var_2] ;~ 0396:1757
cs=0x396;eip=0x00175a; 	X(PUSH(cs));	// 6596 push    cs ;~ 0396:175A
cs=0x396;eip=0x00175b; 	R(CALL(sub_137f0,0));	// 6597 call    near ptr sub_137F0 ;~ 0396:175B
cs=0x396;eip=0x00175e; 	T(ADD(sp, 6));	// 6598 add     sp, 6 ;~ 0396:175E
cs=0x396;eip=0x001761; 	T(MOV(ax, 0x0F));	// 6599 mov     ax, 0Fh ;~ 0396:1761
cs=0x396;eip=0x001764; 	X(PUSH(ax));	// 6600 push    ax ;~ 0396:1764
cs=0x396;eip=0x001765; 	X(PUSH(ax));	// 6601 push    ax ;~ 0396:1765
cs=0x396;eip=0x001766; 	X(PUSH(word_3a3ec));	// 6602 push    word_3A3EC ;~ 0396:1766
cs=0x396;eip=0x00176a; 	X(PUSH(cs));	// 6603 push    cs ;~ 0396:176A
cs=0x396;eip=0x00176b; 	R(CALL(sub_137f0,0));	// 6604 call    near ptr sub_137F0 ;~ 0396:176B
cs=0x396;eip=0x00176e; 	T(ADD(sp, 6));	// 6605 add     sp, 6 ;~ 0396:176E
cs=0x396;eip=0x001771; 	T(MOV(ax, word_3a3ec));	// 6606 mov     ax, word_3A3EC ;~ 0396:1771
cs=0x396;eip=0x001774; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 6607 mov     [bp+var_2], ax ;~ 0396:1774
loc_136b7:
	// 4732 
cs=0x396;eip=0x001777; 	T(ax = bp+var_6);	// 6610 lea     ax, [bp+var_6] ;~ 0396:1777
cs=0x396;eip=0x00177a; 	X(PUSH(ax));	// 6611 push    ax ;~ 0396:177A
cs=0x396;eip=0x00177b; 	R(CALLF(sub_10f80,0));	// 6612 call    sub_10F80 ;~ 0396:177B
cs=0x396;eip=0x001780; 	T(ADD(sp, 2));	// 6613 add     sp, 2 ;~ 0396:1780
cs=0x396;eip=0x001783; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0));	// 6614 cmp     [bp+var_6], 0 ;~ 0396:1783
cs=0x396;eip=0x001787; 	R(JZ(loc_136f6));	// 6615 jz      short loc_136F6 ;~ 0396:1787
cs=0x396;eip=0x001789; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 6616 mov     ax, [bp+var_6] ;~ 0396:1789
cs=0x396;eip=0x00178c; 	T(CMP(ax, 0x92));	// 6617 cmp     ax, 92h ; 'í' ;~ 0396:178C
cs=0x396;eip=0x00178f; 	R(JZ(loc_13714));	// 6618 jz      short loc_13714 ;~ 0396:178F
cs=0x396;eip=0x001791; 	T(CMP(ax, 0x94));	// 6619 cmp     ax, 94h ; 'î' ;~ 0396:1791
cs=0x396;eip=0x001794; 	R(JZ(loc_136e2));	// 6620 jz      short loc_136E2 ;~ 0396:1794
cs=0x396;eip=0x001796; 	T(CMP(ax, 0x96));	// 6621 cmp     ax, 96h ; 'ñ' ;~ 0396:1796
cs=0x396;eip=0x001799; 	R(JZ(loc_13734));	// 6622 jz      short loc_13734 ;~ 0396:1799
cs=0x396;eip=0x00179b; 	T(CMP(ax, 0x98));	// 6623 cmp     ax, 98h ;~ 0396:179B
cs=0x396;eip=0x00179e; 	R(JZ(loc_13724));	// 6624 jz      short loc_13724 ;~ 0396:179E
cs=0x396;eip=0x0017a0; 	R(JMP(loc_136f6));	// 6625 jmp     short loc_136F6 ;~ 0396:17A0
loc_136e2:
	// 4733 
cs=0x396;eip=0x0017a2; 	T(CMP(word_3a3ec, 0));	// 6629 cmp     word_3A3EC, 0 ;~ 0396:17A2
cs=0x396;eip=0x0017a7; 	R(JNZ(loc_136f2));	// 6630 jnz     short loc_136F2 ;~ 0396:17A7
cs=0x396;eip=0x0017a9; 	X(MOV(word_3a3ec, 4));	// 6631 mov     word_3A3EC, 4 ;~ 0396:17A9
cs=0x396;eip=0x0017af; 	R(JMP(loc_136f6));	// 6632 jmp     short loc_136F6 ;~ 0396:17AF
loc_136f2:
	// 4734 
cs=0x396;eip=0x0017b2; 	X(DEC(word_3a3ec));	// 6637 dec     word_3A3EC ;~ 0396:17B2
loc_136f6:
	// 4735 
cs=0x396;eip=0x0017b6; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0x0D));	// 6641 cmp     [bp+var_6], 0Dh ;~ 0396:17B6
cs=0x396;eip=0x0017ba; 	R(JNZ(loc_13702));	// 6642 jnz     short loc_13702 ;~ 0396:17BA
cs=0x396;eip=0x0017bc; 	X(ADD(word_3a3ec, 0x80));	// 6643 add     word_3A3EC, 80h ; 'Ä' ;~ 0396:17BC
loc_13702:
	// 4736 
cs=0x396;eip=0x0017c2; 	T(SUB(ax, ax));	// 6646 sub     ax, ax ;~ 0396:17C2
cs=0x396;eip=0x0017c4; 	X(MOV(word_2beda, ax));	// 6647 mov     word_2BEDA, ax ;~ 0396:17C4
cs=0x396;eip=0x0017c7; 	X(PUSH(ax));	// 6648 push    ax ;~ 0396:17C7
cs=0x396;eip=0x0017c8; 	R(CALLF(sub_2714e,0));	// 6649 call    far ptr sub_2714E ;~ 0396:17C8
cs=0x396;eip=0x0017cd; 	T(ADD(sp, 2));	// 6650 add     sp, 2 ;~ 0396:17CD
cs=0x396;eip=0x0017d0; 	R(JMP(loc_1364d));	// 6651 jmp     loc_1364D ;~ 0396:17D0
loc_13714:
	// 4737 
cs=0x396;eip=0x0017d4; 	T(CMP(word_3a3ec, 0));	// 6656 cmp     word_3A3EC, 0 ;~ 0396:17D4
cs=0x396;eip=0x0017d9; 	R(JZ(loc_1373b));	// 6657 jz      short loc_1373B ;~ 0396:17D9
cs=0x396;eip=0x0017db; 	T(MOV(ax, word_3a3ec));	// 6658 mov     ax, word_3A3EC ;~ 0396:17DB
cs=0x396;eip=0x0017de; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 6659 mov     [bp+var_4], ax ;~ 0396:17DE
cs=0x396;eip=0x0017e1; 	R(JMP(loc_1373b));	// 6660 jmp     short loc_1373B ;~ 0396:17E1
loc_13724:
	// 4738 
cs=0x396;eip=0x0017e4; 	T(CMP(word_3a3ec, 0));	// 6665 cmp     word_3A3EC, 0 ;~ 0396:17E4
cs=0x396;eip=0x0017e9; 	R(JNZ(loc_136f6));	// 6666 jnz     short loc_136F6 ;~ 0396:17E9
cs=0x396;eip=0x0017eb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 6667 mov     ax, [bp+var_4] ;~ 0396:17EB
cs=0x396;eip=0x0017ee; 	X(MOV(word_3a3ec, ax));	// 6668 mov     word_3A3EC, ax ;~ 0396:17EE
cs=0x396;eip=0x0017f1; 	R(JMP(loc_136f6));	// 6669 jmp     short loc_136F6 ;~ 0396:17F1
loc_13734:
	// 4739 
cs=0x396;eip=0x0017f4; 	T(CMP(word_3a3ec, 4));	// 6674 cmp     word_3A3EC, 4 ;~ 0396:17F4
cs=0x396;eip=0x0017f9; 	R(JNZ(loc_13744));	// 6675 jnz     short loc_13744 ;~ 0396:17F9
loc_1373b:
	// 4740 
cs=0x396;eip=0x0017fb; 	X(MOV(word_3a3ec, 0));	// 6679 mov     word_3A3EC, 0 ;~ 0396:17FB
cs=0x396;eip=0x001801; 	R(JMP(loc_136f6));	// 6680 jmp     short loc_136F6 ;~ 0396:1801
loc_13744:
	// 4741 
cs=0x396;eip=0x001804; 	X(INC(word_3a3ec));	// 6685 inc     word_3A3EC ;~ 0396:1804
cs=0x396;eip=0x001808; 	R(JMP(loc_136f6));	// 6686 jmp     short loc_136F6 ;~ 0396:1808
loc_1374a:
	// 4742 
cs=0x396;eip=0x00180a; 	X(AND(word_3a3ec, 0x7F));	// 6690 and     word_3A3EC, 7Fh ;~ 0396:180A
cs=0x396;eip=0x00180f; 	R(JNZ(loc_13759));	// 6691 jnz     short loc_13759 ;~ 0396:180F
cs=0x396;eip=0x001811; 	T(SUB(al, al));	// 6692 sub     al, al ;~ 0396:1811
cs=0x396;eip=0x001813; 	X(MOV(byte_2becc, al));	// 6693 mov     byte_2BECC, al ;~ 0396:1813
cs=0x396;eip=0x001816; 	X(MOV(byte_34f9b, al));	// 6694 mov     byte_34F9B, al ;~ 0396:1816
loc_13759:
	// 4743 
cs=0x396;eip=0x001819; 	X(MOV(byte_2c804, 0));	// 6697 mov     byte_2C804, 0 ;~ 0396:1819
cs=0x396;eip=0x00181e; 	X(PUSH(cs));	// 6698 push    cs ;~ 0396:181E
cs=0x396;eip=0x00181f; 	R(CALL(sub_13bb2,0));	// 6699 call    near ptr sub_13BB2 ;~ 0396:181F
cs=0x396;eip=0x001822; 	T(SUB(ax, ax));	// 6700 sub     ax, ax ;~ 0396:1822
cs=0x396;eip=0x001824; 	X(MOV(word_2beda, ax));	// 6701 mov     word_2BEDA, ax ;~ 0396:1824
cs=0x396;eip=0x001827; 	X(PUSH(ax));	// 6702 push    ax ;~ 0396:1827
cs=0x396;eip=0x001828; 	R(CALLF(sub_2714e,0));	// 6703 call    far ptr sub_2714E ;~ 0396:1828
cs=0x396;eip=0x00182d; 	T(ADD(sp, 2));	// 6704 add     sp, 2 ;~ 0396:182D
cs=0x396;eip=0x001830; 	T(CMP(word_3a178, 0x13));	// 6705 cmp     word_3A178, 13h ;~ 0396:1830
cs=0x396;eip=0x001835; 	R(JNZ(loc_13798));	// 6706 jnz     short loc_13798 ;~ 0396:1835
cs=0x396;eip=0x001837; 	T(SUB(ax, ax));	// 6707 sub     ax, ax ;~ 0396:1837
cs=0x396;eip=0x001839; 	X(PUSH(ax));	// 6708 push    ax ;~ 0396:1839
cs=0x396;eip=0x00183a; 	R(CALLF(sub_27031,0));	// 6709 call    far ptr sub_27031 ;~ 0396:183A
cs=0x396;eip=0x00183f; 	T(ADD(sp, 2));	// 6710 add     sp, 2 ;~ 0396:183F
cs=0x396;eip=0x001842; 	T(MOV(ax, 0x0C7));	// 6711 mov     ax, 0C7h ; '«' ;~ 0396:1842
cs=0x396;eip=0x001845; 	X(PUSH(ax));	// 6712 push    ax ;~ 0396:1845
cs=0x396;eip=0x001846; 	T(SUB(ax, ax));	// 6713 sub     ax, ax ;~ 0396:1846
cs=0x396;eip=0x001848; 	X(PUSH(ax));	// 6714 push    ax ;~ 0396:1848
cs=0x396;eip=0x001849; 	T(MOV(ax, 0x13F));	// 6715 mov     ax, 13Fh ;~ 0396:1849
cs=0x396;eip=0x00184c; 	X(PUSH(ax));	// 6716 push    ax ;~ 0396:184C
cs=0x396;eip=0x00184d; 	T(SUB(ax, ax));	// 6717 sub     ax, ax ;~ 0396:184D
cs=0x396;eip=0x00184f; 	X(PUSH(ax));	// 6718 push    ax ;~ 0396:184F
cs=0x396;eip=0x001850; 	R(CALLF(sub_2785b,0));	// 6719 call    far ptr sub_2785B ;~ 0396:1850
cs=0x396;eip=0x001855; 	T(ADD(sp, 8));	// 6720 add     sp, 8 ;~ 0396:1855
loc_13798:
	// 4744 
cs=0x396;eip=0x001858; 	X(PUSH(cs));	// 6723 push    cs ;~ 0396:1858
cs=0x396;eip=0x001859; 	R(CALL(sub_13b88,0));	// 6724 call    near ptr sub_13B88 ;~ 0396:1859
cs=0x396;eip=0x00185c; 	T(MOV(ax, word_3a3ec));	// 6725 mov     ax, word_3A3EC ;~ 0396:185C
cs=0x396;eip=0x00185f; 	T(MOV(sp, bp));	// 6726 mov     sp, bp ;~ 0396:185F
cs=0x396;eip=0x001861; 	X(POP(bp));	// 6727 pop     bp ;~ 0396:1861
cs=0x396;eip=0x001862; 	R(RETF(0));	// 6728 retf ;~ 0396:1862
sub_137a4:
	// 6738 
#undef arg_0
#define arg_0 6
	// 6741 arg_0           = word ptr  6 ;~ 0396:1864
#undef arg_2
#define arg_2 8
	// 6742 arg_2           = word ptr  8 ;~ 0396:1864
#undef arg_4
#define arg_4 0x0A
	// 6743 arg_4           = word ptr  0Ah ;~ 0396:1864
#undef arg_6
#define arg_6 0x0C
	// 6744 arg_6           = word ptr  0Ch ;~ 0396:1864
ret_396_1864:
	// 4745 
cs=0x396;eip=0x001864; 	X(PUSH(bp));	// 6746 push    bp ;~ 0396:1864
cs=0x396;eip=0x001865; 	T(MOV(bp, sp));	// 6747 mov     bp, sp ;~ 0396:1865
cs=0x396;eip=0x001867; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 6748 push    [bp+arg_4] ;~ 0396:1867
cs=0x396;eip=0x00186a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 6749 push    [bp+arg_0] ;~ 0396:186A
cs=0x396;eip=0x00186d; 	R(CALLF(sub_26fb8,0));	// 6750 call    sub_26FB8 ;~ 0396:186D
cs=0x396;eip=0x001872; 	T(ADD(sp, 4));	// 6751 add     sp, 4 ;~ 0396:1872
cs=0x396;eip=0x001875; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 6752 push    [bp+arg_4] ;~ 0396:1875
cs=0x396;eip=0x001878; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 6753 push    [bp+arg_2] ;~ 0396:1878
cs=0x396;eip=0x00187b; 	R(CALLF(sub_26d92,0));	// 6754 call    sub_26D92 ;~ 0396:187B
cs=0x396;eip=0x001880; 	T(ADD(sp, 4));	// 6755 add     sp, 4 ;~ 0396:1880
cs=0x396;eip=0x001883; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 6756 push    [bp+arg_6] ;~ 0396:1883
cs=0x396;eip=0x001886; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 6757 push    [bp+arg_2] ;~ 0396:1886
cs=0x396;eip=0x001889; 	R(CALLF(sub_26d92,0));	// 6758 call    sub_26D92 ;~ 0396:1889
cs=0x396;eip=0x00188e; 	T(ADD(sp, 4));	// 6759 add     sp, 4 ;~ 0396:188E
cs=0x396;eip=0x001891; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 6760 push    [bp+arg_6] ;~ 0396:1891
cs=0x396;eip=0x001894; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 6761 push    [bp+arg_0] ;~ 0396:1894
cs=0x396;eip=0x001897; 	R(CALLF(sub_26d92,0));	// 6762 call    sub_26D92 ;~ 0396:1897
cs=0x396;eip=0x00189c; 	T(ADD(sp, 4));	// 6763 add     sp, 4 ;~ 0396:189C
cs=0x396;eip=0x00189f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 6764 push    [bp+arg_4] ;~ 0396:189F
cs=0x396;eip=0x0018a2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 6765 push    [bp+arg_0] ;~ 0396:18A2
cs=0x396;eip=0x0018a5; 	R(CALLF(sub_26d92,0));	// 6766 call    sub_26D92 ;~ 0396:18A5
cs=0x396;eip=0x0018aa; 	T(ADD(sp, 4));	// 6767 add     sp, 4 ;~ 0396:18AA
cs=0x396;eip=0x0018ad; 	X(POP(bp));	// 6768 pop     bp ;~ 0396:18AD
cs=0x396;eip=0x0018ae; 	R(RETF(0));	// 6769 retf ;~ 0396:18AE
sub_137f0:
	// 6779 
#undef var_2
#define var_2 -2
	// 6782 var_2           = word ptr -2 ;~ 0396:18B0
#undef arg_0
#define arg_0 6
	// 6783 arg_0           = word ptr  6 ;~ 0396:18B0
#undef arg_2
#define arg_2 8
	// 6784 arg_2           = word ptr  8 ;~ 0396:18B0
#undef arg_4
#define arg_4 0x0A
	// 6785 arg_4           = word ptr  0Ah ;~ 0396:18B0
ret_396_18b0:
	// 4746 
cs=0x396;eip=0x0018b0; 	X(PUSH(bp));	// 6787 push    bp ;~ 0396:18B0
cs=0x396;eip=0x0018b1; 	T(MOV(bp, sp));	// 6788 mov     bp, sp ;~ 0396:18B1
cs=0x396;eip=0x0018b3; 	T(SUB(sp, 2));	// 6789 sub     sp, 2 ;~ 0396:18B3
cs=0x396;eip=0x0018b6; 	T(MOV(ax, 0x50));	// 6790 mov     ax, 50h ; 'P' ;~ 0396:18B6
cs=0x396;eip=0x0018b9; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 6791 imul    [bp+arg_0] ;~ 0396:18B9
cs=0x396;eip=0x0018bc; 	T(SUB(ax, 0x50));	// 6792 sub     ax, 50h ; 'P' ;~ 0396:18BC
cs=0x396;eip=0x0018bf; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 6793 mov     [bp+var_2], ax ;~ 0396:18BF
cs=0x396;eip=0x0018c2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 6794 push    [bp+arg_2] ;~ 0396:18C2
cs=0x396;eip=0x0018c5; 	R(CALLF(sub_27031,0));	// 6795 call    far ptr sub_27031 ;~ 0396:18C5
cs=0x396;eip=0x0018ca; 	T(ADD(sp, 2));	// 6796 add     sp, 2 ;~ 0396:18CA
cs=0x396;eip=0x0018cd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 6797 mov     ax, [bp+arg_0] ;~ 0396:18CD
cs=0x396;eip=0x0018d0; 	T(OR(ax, ax));	// 6798 or      ax, ax ;~ 0396:18D0
cs=0x396;eip=0x0018d2; 	R(JZ(loc_13820));	// 6799 jz      short loc_13820 ;~ 0396:18D2
cs=0x396;eip=0x0018d4; 	T(CMP(ax, 1));	// 6800 cmp     ax, 1 ;~ 0396:18D4
cs=0x396;eip=0x0018d7; 	R(JL(loc_13837));	// 6801 jl      short loc_13837 ;~ 0396:18D7
cs=0x396;eip=0x0018d9; 	T(CMP(ax, 4));	// 6802 cmp     ax, 4 ;~ 0396:18D9
cs=0x396;eip=0x0018dc; 	R(JLE(loc_13856));	// 6803 jle     short loc_13856 ;~ 0396:18DC
cs=0x396;eip=0x0018de; 	R(JMP(loc_13837));	// 6804 jmp     short loc_13837 ;~ 0396:18DE
loc_13820:
	// 4747 
cs=0x396;eip=0x0018e0; 	T(MOV(ax, 0x71));	// 6808 mov     ax, 71h ; 'q' ;~ 0396:18E0
cs=0x396;eip=0x0018e3; 	X(PUSH(ax));	// 6809 push    ax ;~ 0396:18E3
cs=0x396;eip=0x0018e4; 	T(MOV(ax, 0x1A));	// 6810 mov     ax, 1Ah ;~ 0396:18E4
cs=0x396;eip=0x0018e7; 	X(PUSH(ax));	// 6811 push    ax ;~ 0396:18E7
cs=0x396;eip=0x0018e8; 	T(MOV(ax, 0x120));	// 6812 mov     ax, 120h ;~ 0396:18E8
cs=0x396;eip=0x0018eb; 	X(PUSH(ax));	// 6813 push    ax ;~ 0396:18EB
cs=0x396;eip=0x0018ec; 	T(MOV(ax, 0x1F));	// 6814 mov     ax, 1Fh ;~ 0396:18EC
loc_1382f:
	// 4748 
cs=0x396;eip=0x0018ef; 	X(PUSH(ax));	// 6817 push    ax ;~ 0396:18EF
cs=0x396;eip=0x0018f0; 	X(PUSH(cs));	// 6818 push    cs ;~ 0396:18F0
cs=0x396;eip=0x0018f1; 	R(CALL(sub_137a4,0));	// 6819 call    near ptr sub_137A4 ;~ 0396:18F1
cs=0x396;eip=0x0018f4; 	T(ADD(sp, 8));	// 6820 add     sp, 8 ;~ 0396:18F4
loc_13837:
	// 4749 
cs=0x396;eip=0x0018f7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 6824 push    [bp+arg_4] ;~ 0396:18F7
cs=0x396;eip=0x0018fa; 	R(CALLF(sub_27031,0));	// 6825 call    far ptr sub_27031 ;~ 0396:18FA
cs=0x396;eip=0x0018ff; 	T(ADD(sp, 2));	// 6826 add     sp, 2 ;~ 0396:18FF
cs=0x396;eip=0x001902; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 6827 mov     ax, [bp+arg_0] ;~ 0396:1902
cs=0x396;eip=0x001905; 	T(OR(ax, ax));	// 6828 or      ax, ax ;~ 0396:1905
cs=0x396;eip=0x001907; 	R(JZ(loc_1386e));	// 6829 jz      short loc_1386E ;~ 0396:1907
cs=0x396;eip=0x001909; 	T(CMP(ax, 1));	// 6830 cmp     ax, 1 ;~ 0396:1909
cs=0x396;eip=0x00190c; 	R(JL(loc_13885));	// 6831 jl      short loc_13885 ;~ 0396:190C
cs=0x396;eip=0x00190e; 	T(CMP(ax, 4));	// 6832 cmp     ax, 4 ;~ 0396:190E
cs=0x396;eip=0x001911; 	R(JLE(loc_138b2));	// 6833 jle     short loc_138B2 ;~ 0396:1911
cs=0x396;eip=0x001913; 	R(JMP(loc_13885));	// 6834 jmp     short loc_13885 ;~ 0396:1913
loc_13856:
	// 4750 
cs=0x396;eip=0x001916; 	T(MOV(ax, 0x0C6));	// 6839 mov     ax, 0C6h ; '∆' ;~ 0396:1916
cs=0x396;eip=0x001919; 	X(PUSH(ax));	// 6840 push    ax ;~ 0396:1919
cs=0x396;eip=0x00191a; 	T(MOV(ax, 0x8C));	// 6841 mov     ax, 8Ch ; 'å' ;~ 0396:191A
cs=0x396;eip=0x00191d; 	X(PUSH(ax));	// 6842 push    ax ;~ 0396:191D
cs=0x396;eip=0x00191e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 6843 mov     ax, [bp+var_2] ;~ 0396:191E
cs=0x396;eip=0x001921; 	T(ADD(ax, 0x4E));	// 6844 add     ax, 4Eh ; 'N' ;~ 0396:1921
cs=0x396;eip=0x001924; 	X(PUSH(ax));	// 6845 push    ax ;~ 0396:1924
cs=0x396;eip=0x001925; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 6846 mov     ax, [bp+var_2] ;~ 0396:1925
cs=0x396;eip=0x001928; 	T(ADD(ax, 3));	// 6847 add     ax, 3 ;~ 0396:1928
cs=0x396;eip=0x00192b; 	R(JMP(loc_1382f));	// 6848 jmp     short loc_1382F ;~ 0396:192B
loc_1386e:
	// 4751 
cs=0x396;eip=0x00192e; 	T(MOV(ax, 0x72));	// 6853 mov     ax, 72h ; 'r' ;~ 0396:192E
cs=0x396;eip=0x001931; 	X(PUSH(ax));	// 6854 push    ax ;~ 0396:1931
cs=0x396;eip=0x001932; 	T(MOV(ax, 0x19));	// 6855 mov     ax, 19h ;~ 0396:1932
cs=0x396;eip=0x001935; 	X(PUSH(ax));	// 6856 push    ax ;~ 0396:1935
cs=0x396;eip=0x001936; 	T(MOV(ax, 0x121));	// 6857 mov     ax, 121h ;~ 0396:1936
cs=0x396;eip=0x001939; 	X(PUSH(ax));	// 6858 push    ax ;~ 0396:1939
cs=0x396;eip=0x00193a; 	T(MOV(ax, 0x1E));	// 6859 mov     ax, 1Eh ;~ 0396:193A
loc_1387d:
	// 4752 
cs=0x396;eip=0x00193d; 	X(PUSH(ax));	// 6862 push    ax ;~ 0396:193D
cs=0x396;eip=0x00193e; 	X(PUSH(cs));	// 6863 push    cs ;~ 0396:193E
cs=0x396;eip=0x00193f; 	R(CALL(sub_137a4,0));	// 6864 call    near ptr sub_137A4 ;~ 0396:193F
cs=0x396;eip=0x001942; 	T(ADD(sp, 8));	// 6865 add     sp, 8 ;~ 0396:1942
loc_13885:
	// 4753 
cs=0x396;eip=0x001945; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0));	// 6869 cmp     [bp+arg_4], 0 ;~ 0396:1945
cs=0x396;eip=0x001949; 	R(JZ(loc_1388e));	// 6870 jz      short loc_1388E ;~ 0396:1949
cs=0x396;eip=0x00194b; 	R(JMP(loc_13930));	// 6871 jmp     loc_13930 ;~ 0396:194B
loc_1388e:
	// 4754 
cs=0x396;eip=0x00194e; 	T(MOV(ax, 1));	// 6875 mov     ax, 1 ;~ 0396:194E
cs=0x396;eip=0x001951; 	X(PUSH(ax));	// 6876 push    ax ;~ 0396:1951
cs=0x396;eip=0x001952; 	R(CALLF(sub_27031,0));	// 6877 call    far ptr sub_27031 ;~ 0396:1952
cs=0x396;eip=0x001957; 	T(ADD(sp, 2));	// 6878 add     sp, 2 ;~ 0396:1957
cs=0x396;eip=0x00195a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 6879 mov     ax, [bp+arg_0] ;~ 0396:195A
cs=0x396;eip=0x00195d; 	T(OR(ax, ax));	// 6880 or      ax, ax ;~ 0396:195D
cs=0x396;eip=0x00195f; 	R(JZ(loc_138ca));	// 6881 jz      short loc_138CA ;~ 0396:195F
cs=0x396;eip=0x001961; 	T(CMP(ax, 1));	// 6882 cmp     ax, 1 ;~ 0396:1961
cs=0x396;eip=0x001964; 	R(JGE(loc_138a9));	// 6883 jge     short loc_138A9 ;~ 0396:1964
cs=0x396;eip=0x001966; 	R(JMP(loc_13930));	// 6884 jmp     loc_13930 ;~ 0396:1966
loc_138a9:
	// 4755 
cs=0x396;eip=0x001969; 	T(CMP(ax, 4));	// 6888 cmp     ax, 4 ;~ 0396:1969
cs=0x396;eip=0x00196c; 	R(JLE(loc_138fe));	// 6889 jle     short loc_138FE ;~ 0396:196C
cs=0x396;eip=0x00196e; 	T(MOV(sp, bp));	// 6890 mov     sp, bp ;~ 0396:196E
cs=0x396;eip=0x001970; 	X(POP(bp));	// 6891 pop     bp ;~ 0396:1970
cs=0x396;eip=0x001971; 	R(RETF(0));	// 6892 retf ;~ 0396:1971
loc_138b2:
	// 4756 
cs=0x396;eip=0x001972; 	T(MOV(ax, 0x0C7));	// 6896 mov     ax, 0C7h ; '«' ;~ 0396:1972
cs=0x396;eip=0x001975; 	X(PUSH(ax));	// 6897 push    ax ;~ 0396:1975
cs=0x396;eip=0x001976; 	T(MOV(ax, 0x8B));	// 6898 mov     ax, 8Bh ; 'ã' ;~ 0396:1976
cs=0x396;eip=0x001979; 	X(PUSH(ax));	// 6899 push    ax ;~ 0396:1979
cs=0x396;eip=0x00197a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 6900 mov     ax, [bp+var_2] ;~ 0396:197A
cs=0x396;eip=0x00197d; 	T(ADD(ax, 0x4F));	// 6901 add     ax, 4Fh ; 'O' ;~ 0396:197D
cs=0x396;eip=0x001980; 	X(PUSH(ax));	// 6902 push    ax ;~ 0396:1980
cs=0x396;eip=0x001981; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 6903 mov     ax, [bp+var_2] ;~ 0396:1981
cs=0x396;eip=0x001984; 	T(ADD(ax, 2));	// 6904 add     ax, 2 ;~ 0396:1984
cs=0x396;eip=0x001987; 	R(JMP(loc_1387d));	// 6905 jmp     short loc_1387D ;~ 0396:1987
loc_138ca:
	// 4757 
cs=0x396;eip=0x00198a; 	T(MOV(ax, 0x1B));	// 6910 mov     ax, 1Bh ;~ 0396:198A
cs=0x396;eip=0x00198d; 	X(PUSH(ax));	// 6911 push    ax ;~ 0396:198D
cs=0x396;eip=0x00198e; 	T(MOV(ax, 0x121));	// 6912 mov     ax, 121h ;~ 0396:198E
cs=0x396;eip=0x001991; 	X(PUSH(ax));	// 6913 push    ax ;~ 0396:1991
cs=0x396;eip=0x001992; 	R(CALLF(sub_26fb8,0));	// 6914 call    sub_26FB8 ;~ 0396:1992
cs=0x396;eip=0x001997; 	T(ADD(sp, 4));	// 6915 add     sp, 4 ;~ 0396:1997
cs=0x396;eip=0x00199a; 	T(MOV(ax, 0x72));	// 6916 mov     ax, 72h ; 'r' ;~ 0396:199A
cs=0x396;eip=0x00199d; 	X(PUSH(ax));	// 6917 push    ax ;~ 0396:199D
cs=0x396;eip=0x00199e; 	T(MOV(ax, 0x121));	// 6918 mov     ax, 121h ;~ 0396:199E
cs=0x396;eip=0x0019a1; 	X(PUSH(ax));	// 6919 push    ax ;~ 0396:19A1
cs=0x396;eip=0x0019a2; 	R(CALLF(sub_26d92,0));	// 6920 call    sub_26D92 ;~ 0396:19A2
cs=0x396;eip=0x0019a7; 	T(ADD(sp, 4));	// 6921 add     sp, 4 ;~ 0396:19A7
cs=0x396;eip=0x0019aa; 	T(MOV(ax, 0x72));	// 6922 mov     ax, 72h ; 'r' ;~ 0396:19AA
cs=0x396;eip=0x0019ad; 	X(PUSH(ax));	// 6923 push    ax ;~ 0396:19AD
cs=0x396;eip=0x0019ae; 	T(MOV(ax, 0x20));	// 6924 mov     ax, 20h ; ' ' ;~ 0396:19AE
loc_138f1:
	// 4758 
cs=0x396;eip=0x0019b1; 	X(PUSH(ax));	// 6927 push    ax ;~ 0396:19B1
cs=0x396;eip=0x0019b2; 	R(CALLF(sub_26d92,0));	// 6928 call    sub_26D92 ;~ 0396:19B2
cs=0x396;eip=0x0019b7; 	T(ADD(sp, 4));	// 6929 add     sp, 4 ;~ 0396:19B7
cs=0x396;eip=0x0019ba; 	T(MOV(sp, bp));	// 6930 mov     sp, bp ;~ 0396:19BA
cs=0x396;eip=0x0019bc; 	X(POP(bp));	// 6931 pop     bp ;~ 0396:19BC
cs=0x396;eip=0x0019bd; 	R(RETF(0));	// 6932 retf ;~ 0396:19BD
loc_138fe:
	// 4759 
cs=0x396;eip=0x0019be; 	T(MOV(ax, 0x8D));	// 6936 mov     ax, 8Dh ; 'ç' ;~ 0396:19BE
cs=0x396;eip=0x0019c1; 	X(PUSH(ax));	// 6937 push    ax ;~ 0396:19C1
cs=0x396;eip=0x0019c2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 6938 mov     ax, [bp+var_2] ;~ 0396:19C2
cs=0x396;eip=0x0019c5; 	T(ADD(ax, 0x4F));	// 6939 add     ax, 4Fh ; 'O' ;~ 0396:19C5
cs=0x396;eip=0x0019c8; 	X(PUSH(ax));	// 6940 push    ax ;~ 0396:19C8
cs=0x396;eip=0x0019c9; 	R(CALLF(sub_26fb8,0));	// 6941 call    sub_26FB8 ;~ 0396:19C9
cs=0x396;eip=0x0019ce; 	T(ADD(sp, 4));	// 6942 add     sp, 4 ;~ 0396:19CE
cs=0x396;eip=0x0019d1; 	T(MOV(ax, 0x0C7));	// 6943 mov     ax, 0C7h ; '«' ;~ 0396:19D1
cs=0x396;eip=0x0019d4; 	X(PUSH(ax));	// 6944 push    ax ;~ 0396:19D4
cs=0x396;eip=0x0019d5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 6945 mov     ax, [bp+var_2] ;~ 0396:19D5
cs=0x396;eip=0x0019d8; 	T(ADD(ax, 0x4F));	// 6946 add     ax, 4Fh ; 'O' ;~ 0396:19D8
cs=0x396;eip=0x0019db; 	X(PUSH(ax));	// 6947 push    ax ;~ 0396:19DB
cs=0x396;eip=0x0019dc; 	R(CALLF(sub_26d92,0));	// 6948 call    sub_26D92 ;~ 0396:19DC
cs=0x396;eip=0x0019e1; 	T(ADD(sp, 4));	// 6949 add     sp, 4 ;~ 0396:19E1
cs=0x396;eip=0x0019e4; 	T(MOV(ax, 0x0C7));	// 6950 mov     ax, 0C7h ; '«' ;~ 0396:19E4
cs=0x396;eip=0x0019e7; 	X(PUSH(ax));	// 6951 push    ax ;~ 0396:19E7
cs=0x396;eip=0x0019e8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 6952 mov     ax, [bp+var_2] ;~ 0396:19E8
cs=0x396;eip=0x0019eb; 	T(ADD(ax, 4));	// 6953 add     ax, 4 ;~ 0396:19EB
cs=0x396;eip=0x0019ee; 	R(JMP(loc_138f1));	// 6954 jmp     short loc_138F1 ;~ 0396:19EE
loc_13930:
	// 4760 
cs=0x396;eip=0x0019f0; 	T(MOV(sp, bp));	// 6959 mov     sp, bp ;~ 0396:19F0
cs=0x396;eip=0x0019f2; 	X(POP(bp));	// 6960 pop     bp ;~ 0396:19F2
cs=0x396;eip=0x0019f3; 	R(RETF(0));	// 6961 retf ;~ 0396:19F3
sub_13934:
	// 6969 
#undef var_6
#define var_6 -6
	// 6971 var_6           = word ptr -6 ;~ 0396:19F4
#undef var_4
#define var_4 -4
	// 6972 var_4           = word ptr -4 ;~ 0396:19F4
#undef var_2
#define var_2 -2
	// 6973 var_2           = word ptr -2 ;~ 0396:19F4
#undef arg_0
#define arg_0 6
	// 6974 arg_0           = word ptr  6 ;~ 0396:19F4
ret_396_19f4:
	// 4761 
cs=0x396;eip=0x0019f4; 	X(PUSH(bp));	// 6976 push    bp ;~ 0396:19F4
cs=0x396;eip=0x0019f5; 	T(MOV(bp, sp));	// 6977 mov     bp, sp ;~ 0396:19F5
cs=0x396;eip=0x0019f7; 	T(SUB(sp, 8));	// 6978 sub     sp, 8 ;~ 0396:19F7
cs=0x396;eip=0x0019fa; 	X(PUSH(si));	// 6979 push    si ;~ 0396:19FA
cs=0x396;eip=0x0019fb; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 6980 mov     [bp+var_4], 0 ;~ 0396:19FB
cs=0x396;eip=0x001a00; 	T(SUB(ax, ax));	// 6981 sub     ax, ax ;~ 0396:1A00
cs=0x396;eip=0x001a02; 	X(MOV(word_2beda, ax));	// 6982 mov     word_2BEDA, ax ;~ 0396:1A02
cs=0x396;eip=0x001a05; 	X(PUSH(ax));	// 6983 push    ax ;~ 0396:1A05
cs=0x396;eip=0x001a06; 	R(CALLF(sub_2714e,0));	// 6984 call    far ptr sub_2714E ;~ 0396:1A06
cs=0x396;eip=0x001a0b; 	T(ADD(sp, 2));	// 6985 add     sp, 2 ;~ 0396:1A0B
loc_1394e:
	// 4762 
cs=0x396;eip=0x001a0e; 	T(MOV(ax, 1));	// 6988 mov     ax, 1 ;~ 0396:1A0E
cs=0x396;eip=0x001a11; 	X(PUSH(ax));	// 6989 push    ax ;~ 0396:1A11
cs=0x396;eip=0x001a12; 	T(MOV(ax, 3));	// 6990 mov     ax, 3 ;~ 0396:1A12
cs=0x396;eip=0x001a15; 	X(PUSH(ax));	// 6991 push    ax ;~ 0396:1A15
cs=0x396;eip=0x001a16; 	R(CALLF(sub_1c92b,0));	// 6992 call    sub_1C92B ;~ 0396:1A16
cs=0x396;eip=0x001a1b; 	T(ADD(sp, 4));	// 6993 add     sp, 4 ;~ 0396:1A1B
cs=0x396;eip=0x001a1e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 6994 push    [bp+var_4] ;~ 0396:1A1E
cs=0x396;eip=0x001a21; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 6995 push    [bp+arg_0] ;~ 0396:1A21
cs=0x396;eip=0x001a24; 	X(PUSH(cs));	// 6996 push    cs ;~ 0396:1A24
cs=0x396;eip=0x001a25; 	R(CALL(sub_13a16,0));	// 6997 call    near ptr sub_13A16 ;~ 0396:1A25
cs=0x396;eip=0x001a28; 	T(ADD(sp, 4));	// 6998 add     sp, 4 ;~ 0396:1A28
cs=0x396;eip=0x001a2b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 6999 mov     [bp+var_4], ax ;~ 0396:1A2B
cs=0x396;eip=0x001a2e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 7000 mov     [bp+var_2], 0 ;~ 0396:1A2E
cs=0x396;eip=0x001a33; 	R(JMP(loc_13979));	// 7001 jmp     short loc_13979 ;~ 0396:1A33
loc_13976:
	// 4763 
cs=0x396;eip=0x001a36; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 7006 inc     [bp+var_2] ;~ 0396:1A36
loc_13979:
	// 4764 
cs=0x396;eip=0x001a39; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x27));	// 7009 cmp     [bp+var_2], 27h ; ''' ;~ 0396:1A39
cs=0x396;eip=0x001a3d; 	R(JGE(loc_139ac));	// 7010 jge     short loc_139AC ;~ 0396:1A3D
cs=0x396;eip=0x001a3f; 	T(MOV(ax, 2));	// 7011 mov     ax, 2 ;~ 0396:1A3F
cs=0x396;eip=0x001a42; 	X(PUSH(ax));	// 7012 push    ax ;~ 0396:1A42
cs=0x396;eip=0x001a43; 	R(CALLF(sub_26ffb,0));	// 7013 call    sub_26FFB ;~ 0396:1A43
cs=0x396;eip=0x001a48; 	T(ADD(sp, 2));	// 7014 add     sp, 2 ;~ 0396:1A48
cs=0x396;eip=0x001a4b; 	R(CALLF(sub_10f58,0));	// 7015 call    sub_10F58 ;~ 0396:1A4B
cs=0x396;eip=0x001a50; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 7016 mov     [bp+var_6], ax ;~ 0396:1A50
cs=0x396;eip=0x001a53; 	T(ax = bp+var_6);	// 7017 lea     ax, [bp+var_6] ;~ 0396:1A53
cs=0x396;eip=0x001a56; 	X(PUSH(ax));	// 7018 push    ax ;~ 0396:1A56
cs=0x396;eip=0x001a57; 	R(CALLF(sub_10f80,0));	// 7019 call    sub_10F80 ;~ 0396:1A57
cs=0x396;eip=0x001a5c; 	T(ADD(sp, 2));	// 7020 add     sp, 2 ;~ 0396:1A5C
cs=0x396;eip=0x001a5f; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0));	// 7021 cmp     [bp+var_6], 0 ;~ 0396:1A5F
cs=0x396;eip=0x001a63; 	R(JZ(loc_13976));	// 7022 jz      short loc_13976 ;~ 0396:1A63
loc_139a5:
	// 4765 
cs=0x396;eip=0x001a65; 	T(SUB(ax, ax));	// 7025 sub     ax, ax ;~ 0396:1A65
cs=0x396;eip=0x001a67; 	X(POP(si));	// 7026 pop     si ;~ 0396:1A67
cs=0x396;eip=0x001a68; 	T(MOV(sp, bp));	// 7027 mov     sp, bp ;~ 0396:1A68
cs=0x396;eip=0x001a6a; 	X(POP(bp));	// 7028 pop     bp ;~ 0396:1A6A
cs=0x396;eip=0x001a6b; 	R(RETF(0));	// 7029 retf ;~ 0396:1A6B
loc_139ac:
	// 4766 
cs=0x396;eip=0x001a6c; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_4))));	// 7033 mov     si, [bp+var_4] ;~ 0396:1A6C
cs=0x396;eip=0x001a6f; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 7034 add     si, [bp+arg_0] ;~ 0396:1A6F
cs=0x396;eip=0x001a72; 	T(MOV(al, *(raddr(ds,si+1))));	// 7035 mov     al, [si+1] ;~ 0396:1A72
cs=0x396;eip=0x001a75; 	T(SUB(ah, ah));	// 7036 sub     ah, ah ;~ 0396:1A75
cs=0x396;eip=0x001a77; 	T(MOV(cl, *(raddr(ds,si))));	// 7037 mov     cl, [si] ;~ 0396:1A77
cs=0x396;eip=0x001a79; 	T(SUB(ch, ch));	// 7038 sub     ch, ch ;~ 0396:1A79
cs=0x396;eip=0x001a7b; 	T(ADD(ax, cx));	// 7039 add     ax, cx ;~ 0396:1A7B
cs=0x396;eip=0x001a7d; 	R(JNZ(loc_1394e));	// 7040 jnz     short loc_1394E ;~ 0396:1A7D
cs=0x396;eip=0x001a7f; 	R(JMP(loc_139a5));	// 7041 jmp     short loc_139A5 ;~ 0396:1A7F
sub_139c2:
	// 7051 
#undef var_2
#define var_2 -2
	// 7054 var_2           = byte ptr -2 ;~ 0396:1A82
#undef arg_0
#define arg_0 6
	// 7055 arg_0           = word ptr  6 ;~ 0396:1A82
#undef arg_2
#define arg_2 8
	// 7056 arg_2           = word ptr  8 ;~ 0396:1A82
ret_396_1a82:
	// 4767 
cs=0x396;eip=0x001a82; 	X(PUSH(bp));	// 7058 push    bp ;~ 0396:1A82
cs=0x396;eip=0x001a83; 	T(MOV(bp, sp));	// 7059 mov     bp, sp ;~ 0396:1A83
cs=0x396;eip=0x001a85; 	T(SUB(sp, 2));	// 7060 sub     sp, 2 ;~ 0396:1A85
cs=0x396;eip=0x001a88; 	X(PUSH(si));	// 7061 push    si ;~ 0396:1A88
cs=0x396;eip=0x001a89; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 7062 mov     [bp+var_2], 0 ;~ 0396:1A89
loc_139cd:
	// 4768 
cs=0x396;eip=0x001a8d; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 7065 mov     si, [bp+arg_2] ;~ 0396:1A8D
cs=0x396;eip=0x001a90; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 7066 add     si, [bp+arg_0] ;~ 0396:1A90
cs=0x396;eip=0x001a93; 	T(MOV(al, *(raddr(ds,si))));	// 7067 mov     al, [si] ;~ 0396:1A93
cs=0x396;eip=0x001a95; 	T(SUB(ah, ah));	// 7068 sub     ah, ah ;~ 0396:1A95
cs=0x396;eip=0x001a97; 	X(PUSH(ax));	// 7069 push    ax ;~ 0396:1A97
cs=0x396;eip=0x001a98; 	T(MOV(al, *(raddr(ds,si+1))));	// 7070 mov     al, [si+1] ;~ 0396:1A98
cs=0x396;eip=0x001a9b; 	X(PUSH(ax));	// 7071 push    ax ;~ 0396:1A9B
cs=0x396;eip=0x001a9c; 	R(CALLF(sub_1c90c,0));	// 7072 call    sub_1C90C ;~ 0396:1A9C
cs=0x396;eip=0x001aa1; 	T(ADD(sp, 4));	// 7073 add     sp, 4 ;~ 0396:1AA1
cs=0x396;eip=0x001aa4; 	R(JMP(loc_139f5));	// 7074 jmp     short loc_139F5 ;~ 0396:1AA4
loc_139e6:
	// 4769 
cs=0x396;eip=0x001aa6; 	T(ax = bp+var_2);	// 7078 lea     ax, [bp+var_2] ;~ 0396:1AA6
cs=0x396;eip=0x001aa9; 	X(PUSH(ax));	// 7079 push    ax ;~ 0396:1AA9
cs=0x396;eip=0x001aaa; 	R(CALLF(sub_1c944,0));	// 7080 call    sub_1C944 ;~ 0396:1AAA
cs=0x396;eip=0x001aaf; 	T(ADD(sp, 2));	// 7081 add     sp, 2 ;~ 0396:1AAF
cs=0x396;eip=0x001ab2; 	X(INC(*(dw*)(raddr(ss,bp+arg_2))));	// 7082 inc     [bp+arg_2] ;~ 0396:1AB2
loc_139f5:
	// 4770 
cs=0x396;eip=0x001ab5; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 7085 mov     si, [bp+arg_2] ;~ 0396:1AB5
cs=0x396;eip=0x001ab8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 7086 mov     bx, [bp+arg_0] ;~ 0396:1AB8
cs=0x396;eip=0x001abb; 	T(MOV(al, *(raddr(ds,bx+si+2))));	// 7087 mov     al, [bx+si+2] ;~ 0396:1ABB
cs=0x396;eip=0x001abe; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 7088 mov     [bp+var_2], al ;~ 0396:1ABE
cs=0x396;eip=0x001ac1; 	T(CMP(al, 0x80));	// 7089 cmp     al, 80h ; 'Ä' ;~ 0396:1AC1
cs=0x396;eip=0x001ac3; 	R(JC(loc_139e6));	// 7090 jb      short loc_139E6 ;~ 0396:1AC3
cs=0x396;eip=0x001ac5; 	X(ADD(*(dw*)(raddr(ss,bp+arg_2)), 3));	// 7091 add     [bp+arg_2], 3 ;~ 0396:1AC5
cs=0x396;eip=0x001ac9; 	T(CMP(al, 0x0AA));	// 7092 cmp     al, 0AAh ; '™' ;~ 0396:1AC9
cs=0x396;eip=0x001acb; 	R(JNZ(loc_139cd));	// 7093 jnz     short loc_139CD ;~ 0396:1ACB
cs=0x396;eip=0x001acd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 7094 mov     ax, [bp+arg_2] ;~ 0396:1ACD
cs=0x396;eip=0x001ad0; 	X(POP(si));	// 7095 pop     si ;~ 0396:1AD0
cs=0x396;eip=0x001ad1; 	T(MOV(sp, bp));	// 7096 mov     sp, bp ;~ 0396:1AD1
cs=0x396;eip=0x001ad3; 	X(POP(bp));	// 7097 pop     bp ;~ 0396:1AD3
cs=0x396;eip=0x001ad4; 	R(RETF(0));	// 7098 retf ;~ 0396:1AD4
sub_13a16:
	// 7108 
#undef var_2
#define var_2 -2
	// 7111 var_2           = byte ptr -2 ;~ 0396:1AD6
#undef arg_0
#define arg_0 6
	// 7112 arg_0           = word ptr  6 ;~ 0396:1AD6
#undef arg_2
#define arg_2 8
	// 7113 arg_2           = word ptr  8 ;~ 0396:1AD6
ret_396_1ad6:
	// 4771 
cs=0x396;eip=0x001ad6; 	X(PUSH(bp));	// 7115 push    bp ;~ 0396:1AD6
cs=0x396;eip=0x001ad7; 	T(MOV(bp, sp));	// 7116 mov     bp, sp ;~ 0396:1AD7
cs=0x396;eip=0x001ad9; 	T(SUB(sp, 2));	// 7117 sub     sp, 2 ;~ 0396:1AD9
cs=0x396;eip=0x001adc; 	X(PUSH(si));	// 7118 push    si ;~ 0396:1ADC
cs=0x396;eip=0x001add; 	R(JMP(loc_13a2f));	// 7119 jmp     short loc_13A2F ;~ 0396:1ADD
loc_13a20:
	// 4772 
cs=0x396;eip=0x001ae0; 	T(ax = bp+var_2);	// 7124 lea     ax, [bp+var_2] ;~ 0396:1AE0
cs=0x396;eip=0x001ae3; 	X(PUSH(ax));	// 7125 push    ax ;~ 0396:1AE3
cs=0x396;eip=0x001ae4; 	R(CALLF(sub_1c944,0));	// 7126 call    sub_1C944 ;~ 0396:1AE4
cs=0x396;eip=0x001ae9; 	T(ADD(sp, 2));	// 7127 add     sp, 2 ;~ 0396:1AE9
cs=0x396;eip=0x001aec; 	X(INC(*(dw*)(raddr(ss,bp+arg_2))));	// 7128 inc     [bp+arg_2] ;~ 0396:1AEC
loc_13a2f:
	// 4773 
cs=0x396;eip=0x001aef; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 7131 mov     bx, [bp+arg_2] ;~ 0396:1AEF
cs=0x396;eip=0x001af2; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 7132 mov     si, [bp+arg_0] ;~ 0396:1AF2
cs=0x396;eip=0x001af5; 	T(MOV(al, *(raddr(ds,bx+si))));	// 7133 mov     al, [bx+si] ;~ 0396:1AF5
cs=0x396;eip=0x001af7; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 7134 mov     [bp+var_2], al ;~ 0396:1AF7
cs=0x396;eip=0x001afa; 	T(CMP(al, 0x80));	// 7135 cmp     al, 80h ; 'Ä' ;~ 0396:1AFA
cs=0x396;eip=0x001afc; 	R(JC(loc_13a20));	// 7136 jb      short loc_13A20 ;~ 0396:1AFC
cs=0x396;eip=0x001afe; 	X(INC(*(dw*)(raddr(ss,bp+arg_2))));	// 7137 inc     [bp+arg_2] ;~ 0396:1AFE
cs=0x396;eip=0x001b01; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 7138 mov     ax, [bp+arg_2] ;~ 0396:1B01
cs=0x396;eip=0x001b04; 	X(POP(si));	// 7139 pop     si ;~ 0396:1B04
cs=0x396;eip=0x001b05; 	T(MOV(sp, bp));	// 7140 mov     sp, bp ;~ 0396:1B05
cs=0x396;eip=0x001b07; 	X(POP(bp));	// 7141 pop     bp ;~ 0396:1B07
cs=0x396;eip=0x001b08; 	R(RETF(0));	// 7142 retf ;~ 0396:1B08
seg001_proc:
	// 7147 
cs=0x396;eip=0x001b0a; 	X(PUSH(bp));	// 7147 push    bp ;~ 0396:1B0A
ret_396_1b0b:
	// 4774 
cs=0x396;eip=0x001b0b; 	T(MOV(bp, sp));	// 7148 mov     bp, sp ;~ 0396:1B0B
cs=0x396;eip=0x001b0d; 	T(SUB(sp, 2));	// 7149 sub     sp, 2 ;~ 0396:1B0D
cs=0x396;eip=0x001b10; 	X(PUSH(si));	// 7150 push    si ;~ 0396:1B10
cs=0x396;eip=0x001b11; 	T(MOV(si, *(dw*)(raddr(ss,bp+8))));	// 7151 mov     si, [bp+8] ;~ 0396:1B11
cs=0x396;eip=0x001b14; 	T(ADD(si, *(dw*)(raddr(ss,bp+6))));	// 7152 add     si, [bp+6] ;~ 0396:1B14
cs=0x396;eip=0x001b17; 	T(MOV(al, *(raddr(ds,si))));	// 7153 mov     al, [si] ;~ 0396:1B17
cs=0x396;eip=0x001b19; 	T(SUB(ah, ah));	// 7154 sub     ah, ah ;~ 0396:1B19
cs=0x396;eip=0x001b1b; 	X(PUSH(ax));	// 7155 push    ax ;~ 0396:1B1B
cs=0x396;eip=0x001b1c; 	T(MOV(al, *(raddr(ds,si+1))));	// 7156 mov     al, [si+1] ;~ 0396:1B1C
cs=0x396;eip=0x001b1f; 	X(PUSH(ax));	// 7157 push    ax ;~ 0396:1B1F
cs=0x396;eip=0x001b20; 	R(CALLF(sub_1c90c,0));	// 7158 call    sub_1C90C ;~ 0396:1B20
cs=0x396;eip=0x001b25; 	T(ADD(sp, 4));	// 7159 add     sp, 4 ;~ 0396:1B25
cs=0x396;eip=0x001b28; 	X(ADD(*(dw*)(raddr(ss,bp+8)), 2));	// 7160 add     word ptr [bp+8], 2 ;~ 0396:1B28
cs=0x396;eip=0x001b2c; 	R(JMP(loc_13a7d));	// 7161 jmp     short loc_13A7D ;~ 0396:1B2C
loc_13a6e:
	// 4775 
cs=0x396;eip=0x001b2e; 	T(ax = bp-2);	// 7165 lea     ax, [bp-2] ;~ 0396:1B2E
cs=0x396;eip=0x001b31; 	X(PUSH(ax));	// 7166 push    ax ;~ 0396:1B31
cs=0x396;eip=0x001b32; 	R(CALLF(sub_1c944,0));	// 7167 call    sub_1C944 ;~ 0396:1B32
cs=0x396;eip=0x001b37; 	T(ADD(sp, 2));	// 7168 add     sp, 2 ;~ 0396:1B37
cs=0x396;eip=0x001b3a; 	X(INC(*(dw*)(raddr(ss,bp+8))));	// 7169 inc     word ptr [bp+8] ;~ 0396:1B3A
loc_13a7d:
	// 4776 
cs=0x396;eip=0x001b3d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 7172 mov     bx, [bp+8] ;~ 0396:1B3D
cs=0x396;eip=0x001b40; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 7173 mov     si, [bp+6] ;~ 0396:1B40
cs=0x396;eip=0x001b43; 	T(MOV(al, *(raddr(ds,bx+si))));	// 7174 mov     al, [bx+si] ;~ 0396:1B43
cs=0x396;eip=0x001b45; 	X(MOV(*(raddr(ss,bp-2)), al));	// 7175 mov     [bp-2], al ;~ 0396:1B45
cs=0x396;eip=0x001b48; 	T(CMP(al, 0x80));	// 7176 cmp     al, 80h ; 'Ä' ;~ 0396:1B48
cs=0x396;eip=0x001b4a; 	R(JC(loc_13a6e));	// 7177 jb      short loc_13A6E ;~ 0396:1B4A
cs=0x396;eip=0x001b4c; 	X(INC(*(dw*)(raddr(ss,bp+8))));	// 7178 inc     word ptr [bp+8] ;~ 0396:1B4C
cs=0x396;eip=0x001b4f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 7179 mov     ax, [bp+8] ;~ 0396:1B4F
cs=0x396;eip=0x001b52; 	X(POP(si));	// 7180 pop     si ;~ 0396:1B52
cs=0x396;eip=0x001b53; 	T(MOV(sp, bp));	// 7181 mov     sp, bp ;~ 0396:1B53
cs=0x396;eip=0x001b55; 	X(POP(bp));	// 7182 pop     bp ;~ 0396:1B55
cs=0x396;eip=0x001b56; 	R(RETF(0));	// 7183 retf ;~ 0396:1B56
ret_396_1b58:
	// 4777 
cs=0x396;eip=0x001b58; 	X(PUSH(bp));	// 7186 push    bp ;~ 0396:1B58
cs=0x396;eip=0x001b59; 	T(MOV(bp, sp));	// 7187 mov     bp, sp ;~ 0396:1B59
cs=0x396;eip=0x001b5b; 	T(SUB(sp, 4));	// 7188 sub     sp, 4 ;~ 0396:1B5B
cs=0x396;eip=0x001b5e; 	X(PUSH(si));	// 7189 push    si ;~ 0396:1B5E
cs=0x396;eip=0x001b5f; 	X(MOV(*(dw*)(raddr(ss,bp-2)), 0));	// 7190 mov     word ptr [bp-2], 0 ;~ 0396:1B5F
cs=0x396;eip=0x001b64; 	R(JMP(loc_13ac0));	// 7191 jmp     short loc_13AC0 ;~ 0396:1B64
loc_13aa6:
	// 4778 
cs=0x396;eip=0x001b66; 	T(MOV(bx, *(dw*)(raddr(ss,bp-2))));	// 7195 mov     bx, [bp-2] ;~ 0396:1B66
cs=0x396;eip=0x001b69; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 7196 mov     si, [bp+6] ;~ 0396:1B69
cs=0x396;eip=0x001b6c; 	T(MOV(al, *(raddr(ds,bx+si))));	// 7197 mov     al, [bx+si] ;~ 0396:1B6C
cs=0x396;eip=0x001b6e; 	X(MOV(*(raddr(ss,bp-4)), al));	// 7198 mov     [bp-4], al ;~ 0396:1B6E
cs=0x396;eip=0x001b71; 	T(ax = bp-4);	// 7199 lea     ax, [bp-4] ;~ 0396:1B71
cs=0x396;eip=0x001b74; 	X(PUSH(ax));	// 7200 push    ax ;~ 0396:1B74
cs=0x396;eip=0x001b75; 	R(CALLF(sub_1c944,0));	// 7201 call    sub_1C944 ;~ 0396:1B75
cs=0x396;eip=0x001b7a; 	T(ADD(sp, 2));	// 7202 add     sp, 2 ;~ 0396:1B7A
cs=0x396;eip=0x001b7d; 	X(INC(*(dw*)(raddr(ss,bp-2))));	// 7203 inc     word ptr [bp-2] ;~ 0396:1B7D
loc_13ac0:
	// 4779 
cs=0x396;eip=0x001b80; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 7206 mov     ax, [bp+8] ;~ 0396:1B80
cs=0x396;eip=0x001b83; 	T(CMP(*(dw*)(raddr(ss,bp-2)), ax));	// 7207 cmp     [bp-2], ax ;~ 0396:1B83
cs=0x396;eip=0x001b86; 	R(JL(loc_13aa6));	// 7208 jl      short loc_13AA6 ;~ 0396:1B86
cs=0x396;eip=0x001b88; 	X(POP(si));	// 7209 pop     si ;~ 0396:1B88
cs=0x396;eip=0x001b89; 	T(MOV(sp, bp));	// 7210 mov     sp, bp ;~ 0396:1B89
cs=0x396;eip=0x001b8b; 	X(POP(bp));	// 7211 pop     bp ;~ 0396:1B8B
cs=0x396;eip=0x001b8c; 	R(RETF(0));	// 7212 retf ;~ 0396:1B8C
ret_396_1ed8:
	// 4828 
cs=0x396;eip=0x001ed8; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), 0));	// 7772 mov     word ptr [bp-0Ah], 0 ;~ 0396:1ED8
loc_13e1d:
	// 4829 
cs=0x396;eip=0x001edd; 	T(MOV(ax, 0x0FC8));	// 7775 mov     ax, 0FC8h ;~ 0396:1EDD
cs=0x396;eip=0x001ee0; 	X(PUSH(ax));	// 7776 push    ax ;~ 0396:1EE0
cs=0x396;eip=0x001ee1; 	T(MOV(ax, 0x0A9C));	// 7777 mov     ax, 0A9Ch ;~ 0396:1EE1
cs=0x396;eip=0x001ee4; 	X(PUSH(ax));	// 7778 push    ax ;~ 0396:1EE4
cs=0x396;eip=0x001ee5; 	R(CALLF(sub_29b46,0));	// 7779 call    sub_29B46 ;~ 0396:1EE5
cs=0x396;eip=0x001eea; 	T(ADD(sp, 4));	// 7780 add     sp, 4 ;~ 0396:1EEA
cs=0x396;eip=0x001eed; 	T(MOV(ax, 0x0FD2));	// 7781 mov     ax, 0FD2h ;~ 0396:1EED
cs=0x396;eip=0x001ef0; 	X(PUSH(ax));	// 7782 push    ax ;~ 0396:1EF0
cs=0x396;eip=0x001ef1; 	T(MOV(ax, 0x0A9A));	// 7783 mov     ax, 0A9Ah ;~ 0396:1EF1
cs=0x396;eip=0x001ef4; 	X(PUSH(ax));	// 7784 push    ax ;~ 0396:1EF4
cs=0x396;eip=0x001ef5; 	R(CALLF(sub_29708,0));	// 7785 call    sub_29708 ;~ 0396:1EF5
cs=0x396;eip=0x001efa; 	T(ADD(sp, 4));	// 7786 add     sp, 4 ;~ 0396:1EFA
cs=0x396;eip=0x001efd; 	X(MOV(word_3a3e6, ax));	// 7787 mov     word_3A3E6, ax ;~ 0396:1EFD
cs=0x396;eip=0x001f00; 	T(OR(ax, ax));	// 7788 or      ax, ax ;~ 0396:1F00
cs=0x396;eip=0x001f02; 	R(JZ(loc_13e54));	// 7789 jz      short loc_13E54 ;~ 0396:1F02
cs=0x396;eip=0x001f04; 	X(PUSH(ax));	// 7790 push    ax ;~ 0396:1F04
cs=0x396;eip=0x001f05; 	R(CALLF(sub_29640,0));	// 7791 call    sub_29640 ;~ 0396:1F05
cs=0x396;eip=0x001f0a; 	T(ADD(sp, 2));	// 7792 add     sp, 2 ;~ 0396:1F0A
cs=0x396;eip=0x001f0d; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), 1));	// 7793 mov     word ptr [bp-0Ah], 1 ;~ 0396:1F0D
cs=0x396;eip=0x001f12; 	R(JMP(loc_13e60));	// 7794 jmp     short loc_13E60 ;~ 0396:1F12
loc_13e54:
	// 4830 
cs=0x396;eip=0x001f14; 	T(MOV(ax, 0x1E));	// 7798 mov     ax, 1Eh ;~ 0396:1F14
cs=0x396;eip=0x001f17; 	X(PUSH(ax));	// 7799 push    ax ;~ 0396:1F17
cs=0x396;eip=0x001f18; 	R(CALLF(sub_1179c,0));	// 7800 call    sub_1179C ;~ 0396:1F18
cs=0x396;eip=0x001f1d; 	T(ADD(sp, 2));	// 7801 add     sp, 2 ;~ 0396:1F1D
loc_13e60:
	// 4831 
cs=0x396;eip=0x001f20; 	T(CMP(*(dw*)(raddr(ss,bp-0x0A)), 0));	// 7804 cmp     word ptr [bp-0Ah], 0 ;~ 0396:1F20
cs=0x396;eip=0x001f24; 	R(JZ(loc_13e1d));	// 7805 jz      short loc_13E1D ;~ 0396:1F24
cs=0x396;eip=0x001f26; 	X(XOR(byte_34f30, 0x80));	// 7806 xor     byte_34F30, 80h ;~ 0396:1F26
cs=0x396;eip=0x001f2b; 	T(MOV(ax, 0x0FD5));	// 7807 mov     ax, 0FD5h ;~ 0396:1F2B
cs=0x396;eip=0x001f2e; 	X(PUSH(ax));	// 7808 push    ax ;~ 0396:1F2E
cs=0x396;eip=0x001f2f; 	T(MOV(ax, 0x0A9C));	// 7809 mov     ax, 0A9Ch ;~ 0396:1F2F
cs=0x396;eip=0x001f32; 	X(PUSH(ax));	// 7810 push    ax ;~ 0396:1F32
cs=0x396;eip=0x001f33; 	R(CALLF(sub_29b46,0));	// 7811 call    sub_29B46 ;~ 0396:1F33
cs=0x396;eip=0x001f38; 	T(ADD(sp, 4));	// 7812 add     sp, 4 ;~ 0396:1F38
cs=0x396;eip=0x001f3b; 	T(MOV(ax, 0x0A9A));	// 7813 mov     ax, 0A9Ah ;~ 0396:1F3B
cs=0x396;eip=0x001f3e; 	X(PUSH(ax));	// 7814 push    ax ;~ 0396:1F3E
cs=0x396;eip=0x001f3f; 	R(CALLF(sub_10d62,0));	// 7815 call    sub_10D62 ;~ 0396:1F3F
cs=0x396;eip=0x001f44; 	T(ADD(sp, 2));	// 7816 add     sp, 2 ;~ 0396:1F44
cs=0x396;eip=0x001f47; 	T(SUB(al, al));	// 7817 sub     al, al ;~ 0396:1F47
cs=0x396;eip=0x001f49; 	X(MOV(byte_2bedf, al));	// 7818 mov     byte_2BEDF, al ;~ 0396:1F49
cs=0x396;eip=0x001f4c; 	T(SUB(ah, ah));	// 7819 sub     ah, ah ;~ 0396:1F4C
cs=0x396;eip=0x001f4e; 	X(MOV(word_38cd6, ax));	// 7820 mov     word_38CD6, ax ;~ 0396:1F4E
cs=0x396;eip=0x001f51; 	X(MOV(byte_2becc, al));	// 7821 mov     byte_2BECC, al ;~ 0396:1F51
cs=0x396;eip=0x001f54; 	T(MOV(ax, 1));	// 7822 mov     ax, 1 ;~ 0396:1F54
cs=0x396;eip=0x001f57; 	X(MOV(word_2beda, ax));	// 7823 mov     word_2BEDA, ax ;~ 0396:1F57
cs=0x396;eip=0x001f5a; 	X(PUSH(ax));	// 7824 push    ax ;~ 0396:1F5A
cs=0x396;eip=0x001f5b; 	R(CALLF(sub_2714e,0));	// 7825 call    far ptr sub_2714E ;~ 0396:1F5B
cs=0x396;eip=0x001f60; 	T(ADD(sp, 2));	// 7826 add     sp, 2 ;~ 0396:1F60
cs=0x396;eip=0x001f63; 	T(MOV(ax, 0x0FE1));	// 7827 mov     ax, 0FE1h ;~ 0396:1F63
cs=0x396;eip=0x001f66; 	X(PUSH(ax));	// 7828 push    ax ;~ 0396:1F66
cs=0x396;eip=0x001f67; 	T(MOV(ax, 0x0A9C));	// 7829 mov     ax, 0A9Ch ;~ 0396:1F67
cs=0x396;eip=0x001f6a; 	X(PUSH(ax));	// 7830 push    ax ;~ 0396:1F6A
cs=0x396;eip=0x001f6b; 	R(CALLF(sub_29b46,0));	// 7831 call    sub_29B46 ;~ 0396:1F6B
cs=0x396;eip=0x001f70; 	T(ADD(sp, 4));	// 7832 add     sp, 4 ;~ 0396:1F70
cs=0x396;eip=0x001f73; 	X(PUSH(word_38a9e));	// 7833 push    word_38A9E ;~ 0396:1F73
cs=0x396;eip=0x001f77; 	X(PUSH(word_38a9c));	// 7834 push    word_38A9C ;~ 0396:1F77
cs=0x396;eip=0x001f7b; 	T(MOV(ax, 0x0A9A));	// 7835 mov     ax, 0A9Ah ;~ 0396:1F7B
cs=0x396;eip=0x001f7e; 	X(PUSH(ax));	// 7836 push    ax ;~ 0396:1F7E
cs=0x396;eip=0x001f7f; 	R(CALLF(sub_10ee0,0));	// 7837 call    sub_10EE0 ;~ 0396:1F7F
cs=0x396;eip=0x001f84; 	T(ADD(sp, 6));	// 7838 add     sp, 6 ;~ 0396:1F84
cs=0x396;eip=0x001f87; 	T(MOV(ax, 0x2500));	// 7839 mov     ax, 2500h ;~ 0396:1F87
cs=0x396;eip=0x001f8a; 	X(PUSH(ds));	// 7840 push    ds ;~ 0396:1F8A
cs=0x396;eip=0x001f8b; 	X(PUSH(ax));	// 7841 push    ax ;~ 0396:1F8B
cs=0x396;eip=0x001f8c; 	X(PUSH(word_38a9e));	// 7842 push    word_38A9E ;~ 0396:1F8C
cs=0x396;eip=0x001f90; 	X(PUSH(word_38a9c));	// 7843 push    word_38A9C ;~ 0396:1F90
cs=0x396;eip=0x001f94; 	R(CALLF(sub_1ab87,0));	// 7844 call    sub_1AB87 ;~ 0396:1F94
cs=0x396;eip=0x001f99; 	T(ADD(sp, 8));	// 7845 add     sp, 8 ;~ 0396:1F99
cs=0x396;eip=0x001f9c; 	T(SUB(ax, ax));	// 7846 sub     ax, ax ;~ 0396:1F9C
cs=0x396;eip=0x001f9e; 	X(PUSH(ax));	// 7847 push    ax ;~ 0396:1F9E
cs=0x396;eip=0x001f9f; 	T(MOV(ax, 0x9D));	// 7848 mov     ax, 9Dh ; 'ù' ;~ 0396:1F9F
cs=0x396;eip=0x001fa2; 	X(PUSH(ax));	// 7849 push    ax ;~ 0396:1FA2
cs=0x396;eip=0x001fa3; 	T(SUB(ax, ax));	// 7850 sub     ax, ax ;~ 0396:1FA3
cs=0x396;eip=0x001fa5; 	X(PUSH(ax));	// 7851 push    ax ;~ 0396:1FA5
cs=0x396;eip=0x001fa6; 	T(MOV(ax, 0x140));	// 7852 mov     ax, 140h ;~ 0396:1FA6
cs=0x396;eip=0x001fa9; 	X(PUSH(ax));	// 7853 push    ax ;~ 0396:1FA9
cs=0x396;eip=0x001faa; 	T(MOV(ax, 0x235D));	// 7854 mov     ax, 235Dh ;~ 0396:1FAA
cs=0x396;eip=0x001fad; 	X(PUSH(ax));	// 7855 push    ax ;~ 0396:1FAD
cs=0x396;eip=0x001fae; 	T(MOV(ax, 0x2500));	// 7856 mov     ax, 2500h ;~ 0396:1FAE
cs=0x396;eip=0x001fb1; 	X(PUSH(ax));	// 7857 push    ax ;~ 0396:1FB1
cs=0x396;eip=0x001fb2; 	X(PUSH(cs));	// 7858 push    cs ;~ 0396:1FB2
cs=0x396;eip=0x001fb3; 	R(CALL(sub_178ec,0));	// 7859 call    near ptr sub_178EC ;~ 0396:1FB3
cs=0x396;eip=0x001fb6; 	T(ADD(sp, 0x0C));	// 7860 add     sp, 0Ch ;~ 0396:1FB6
cs=0x396;eip=0x001fb9; 	T(MOV(ax, 0x0FE9));	// 7861 mov     ax, 0FE9h ;~ 0396:1FB9
cs=0x396;eip=0x001fbc; 	X(PUSH(ax));	// 7862 push    ax ;~ 0396:1FBC
cs=0x396;eip=0x001fbd; 	T(MOV(ax, 0x0A9C));	// 7863 mov     ax, 0A9Ch ;~ 0396:1FBD
cs=0x396;eip=0x001fc0; 	X(PUSH(ax));	// 7864 push    ax ;~ 0396:1FC0
cs=0x396;eip=0x001fc1; 	R(CALLF(sub_29b46,0));	// 7865 call    sub_29B46 ;~ 0396:1FC1
cs=0x396;eip=0x001fc6; 	T(ADD(sp, 4));	// 7866 add     sp, 4 ;~ 0396:1FC6
cs=0x396;eip=0x001fc9; 	X(PUSH(word_38a9e));	// 7867 push    word_38A9E ;~ 0396:1FC9
cs=0x396;eip=0x001fcd; 	X(PUSH(word_38a9c));	// 7868 push    word_38A9C ;~ 0396:1FCD
cs=0x396;eip=0x001fd1; 	T(MOV(ax, 0x0A9A));	// 7869 mov     ax, 0A9Ah ;~ 0396:1FD1
cs=0x396;eip=0x001fd4; 	X(PUSH(ax));	// 7870 push    ax ;~ 0396:1FD4
cs=0x396;eip=0x001fd5; 	R(CALLF(sub_10ee0,0));	// 7871 call    sub_10EE0 ;~ 0396:1FD5
cs=0x396;eip=0x001fda; 	T(ADD(sp, 6));	// 7872 add     sp, 6 ;~ 0396:1FDA
cs=0x396;eip=0x001fdd; 	T(MOV(ax, 0x2500));	// 7873 mov     ax, 2500h ;~ 0396:1FDD
cs=0x396;eip=0x001fe0; 	X(PUSH(ds));	// 7874 push    ds ;~ 0396:1FE0
cs=0x396;eip=0x001fe1; 	X(PUSH(ax));	// 7875 push    ax ;~ 0396:1FE1
cs=0x396;eip=0x001fe2; 	X(PUSH(word_38a9e));	// 7876 push    word_38A9E ;~ 0396:1FE2
cs=0x396;eip=0x001fe6; 	X(PUSH(word_38a9c));	// 7877 push    word_38A9C ;~ 0396:1FE6
cs=0x396;eip=0x001fea; 	R(CALLF(sub_1ab87,0));	// 7878 call    sub_1AB87 ;~ 0396:1FEA
cs=0x396;eip=0x001fef; 	T(ADD(sp, 8));	// 7879 add     sp, 8 ;~ 0396:1FEF
cs=0x396;eip=0x001ff2; 	T(MOV(ax, 1));	// 7880 mov     ax, 1 ;~ 0396:1FF2
cs=0x396;eip=0x001ff5; 	X(PUSH(ax));	// 7881 push    ax ;~ 0396:1FF5
cs=0x396;eip=0x001ff6; 	T(MOV(ax, 0x63));	// 7882 mov     ax, 63h ; 'c' ;~ 0396:1FF6
cs=0x396;eip=0x001ff9; 	X(PUSH(ax));	// 7883 push    ax ;~ 0396:1FF9
cs=0x396;eip=0x001ffa; 	T(SUB(ax, ax));	// 7884 sub     ax, ax ;~ 0396:1FFA
cs=0x396;eip=0x001ffc; 	X(PUSH(ax));	// 7885 push    ax ;~ 0396:1FFC
cs=0x396;eip=0x001ffd; 	T(MOV(ax, 0x140));	// 7886 mov     ax, 140h ;~ 0396:1FFD
cs=0x396;eip=0x002000; 	X(PUSH(ax));	// 7887 push    ax ;~ 0396:2000
cs=0x396;eip=0x002001; 	T(MOV(ax, 0x273E));	// 7888 mov     ax, 273Eh ;~ 0396:2001
cs=0x396;eip=0x002004; 	X(PUSH(ax));	// 7889 push    ax ;~ 0396:2004
cs=0x396;eip=0x002005; 	T(MOV(ax, 0x2500));	// 7890 mov     ax, 2500h ;~ 0396:2005
cs=0x396;eip=0x002008; 	X(PUSH(ax));	// 7891 push    ax ;~ 0396:2008
cs=0x396;eip=0x002009; 	X(PUSH(cs));	// 7892 push    cs ;~ 0396:2009
cs=0x396;eip=0x00200a; 	R(CALL(sub_178ec,0));	// 7893 call    near ptr sub_178EC ;~ 0396:200A
cs=0x396;eip=0x00200d; 	T(ADD(sp, 0x0C));	// 7894 add     sp, 0Ch ;~ 0396:200D
cs=0x396;eip=0x002010; 	T(MOV(ax, 0x0B));	// 7895 mov     ax, 0Bh ;~ 0396:2010
cs=0x396;eip=0x002013; 	X(PUSH(ax));	// 7896 push    ax ;~ 0396:2013
cs=0x396;eip=0x002014; 	R(CALLF(sub_27031,0));	// 7897 call    far ptr sub_27031 ;~ 0396:2014
cs=0x396;eip=0x002019; 	T(ADD(sp, 2));	// 7898 add     sp, 2 ;~ 0396:2019
cs=0x396;eip=0x00201c; 	T(MOV(ax, 0x0C7));	// 7899 mov     ax, 0C7h ; '«' ;~ 0396:201C
cs=0x396;eip=0x00201f; 	X(PUSH(ax));	// 7900 push    ax ;~ 0396:201F
cs=0x396;eip=0x002020; 	T(MOV(ax, 0x9E));	// 7901 mov     ax, 9Eh ; 'û' ;~ 0396:2020
cs=0x396;eip=0x002023; 	X(PUSH(ax));	// 7902 push    ax ;~ 0396:2023
cs=0x396;eip=0x002024; 	T(MOV(ax, 0x13F));	// 7903 mov     ax, 13Fh ;~ 0396:2024
cs=0x396;eip=0x002027; 	X(PUSH(ax));	// 7904 push    ax ;~ 0396:2027
cs=0x396;eip=0x002028; 	T(SUB(ax, ax));	// 7905 sub     ax, ax ;~ 0396:2028
cs=0x396;eip=0x00202a; 	X(PUSH(ax));	// 7906 push    ax ;~ 0396:202A
cs=0x396;eip=0x00202b; 	R(CALLF(sub_2785b,0));	// 7907 call    far ptr sub_2785B ;~ 0396:202B
cs=0x396;eip=0x002030; 	T(ADD(sp, 8));	// 7908 add     sp, 8 ;~ 0396:2030
cs=0x396;eip=0x002033; 	T(MOV(ax, 8));	// 7909 mov     ax, 8 ;~ 0396:2033
cs=0x396;eip=0x002036; 	X(PUSH(ax));	// 7910 push    ax ;~ 0396:2036
cs=0x396;eip=0x002037; 	R(CALLF(sub_27031,0));	// 7911 call    far ptr sub_27031 ;~ 0396:2037
cs=0x396;eip=0x00203c; 	T(ADD(sp, 2));	// 7912 add     sp, 2 ;~ 0396:203C
cs=0x396;eip=0x00203f; 	T(MOV(ax, 0x0C7));	// 7913 mov     ax, 0C7h ; '«' ;~ 0396:203F
cs=0x396;eip=0x002042; 	X(PUSH(ax));	// 7914 push    ax ;~ 0396:2042
cs=0x396;eip=0x002043; 	T(MOV(ax, 0x9E));	// 7915 mov     ax, 9Eh ; 'û' ;~ 0396:2043
cs=0x396;eip=0x002046; 	X(PUSH(ax));	// 7916 push    ax ;~ 0396:2046
cs=0x396;eip=0x002047; 	T(MOV(ax, 0x13F));	// 7917 mov     ax, 13Fh ;~ 0396:2047
cs=0x396;eip=0x00204a; 	X(PUSH(ax));	// 7918 push    ax ;~ 0396:204A
cs=0x396;eip=0x00204b; 	T(SUB(ax, ax));	// 7919 sub     ax, ax ;~ 0396:204B
cs=0x396;eip=0x00204d; 	X(PUSH(ax));	// 7920 push    ax ;~ 0396:204D
cs=0x396;eip=0x00204e; 	X(PUSH(cs));	// 7921 push    cs ;~ 0396:204E
cs=0x396;eip=0x00204f; 	R(CALL(sub_137a4,0));	// 7922 call    near ptr sub_137A4 ;~ 0396:204F
cs=0x396;eip=0x002052; 	T(ADD(sp, 8));	// 7923 add     sp, 8 ;~ 0396:2052
cs=0x396;eip=0x002055; 	T(MOV(ax, 0x0B));	// 7924 mov     ax, 0Bh ;~ 0396:2055
cs=0x396;eip=0x002058; 	X(PUSH(ax));	// 7925 push    ax ;~ 0396:2058
cs=0x396;eip=0x002059; 	T(SUB(ax, ax));	// 7926 sub     ax, ax ;~ 0396:2059
cs=0x396;eip=0x00205b; 	X(PUSH(ax));	// 7927 push    ax ;~ 0396:205B
cs=0x396;eip=0x00205c; 	R(CALLF(sub_1c8f3,0));	// 7928 call    sub_1C8F3 ;~ 0396:205C
cs=0x396;eip=0x002061; 	T(ADD(sp, 4));	// 7929 add     sp, 4 ;~ 0396:2061
cs=0x396;eip=0x002064; 	T(SUB(ax, ax));	// 7930 sub     ax, ax ;~ 0396:2064
cs=0x396;eip=0x002066; 	X(MOV(word_2beda, ax));	// 7931 mov     word_2BEDA, ax ;~ 0396:2066
cs=0x396;eip=0x002069; 	X(PUSH(ax));	// 7932 push    ax ;~ 0396:2069
cs=0x396;eip=0x00206a; 	R(CALLF(sub_2714e,0));	// 7933 call    far ptr sub_2714E ;~ 0396:206A
cs=0x396;eip=0x00206f; 	T(ADD(sp, 2));	// 7934 add     sp, 2 ;~ 0396:206F
cs=0x396;eip=0x002072; 	X(PUSH(cs));	// 7935 push    cs ;~ 0396:2072
cs=0x396;eip=0x002073; 	R(CALL(sub_13b22,0));	// 7936 call    near ptr sub_13B22 ;~ 0396:2073
cs=0x396;eip=0x002076; 	T(MOV(ax, 1));	// 7937 mov     ax, 1 ;~ 0396:2076
cs=0x396;eip=0x002079; 	X(MOV(word_2beda, ax));	// 7938 mov     word_2BEDA, ax ;~ 0396:2079
cs=0x396;eip=0x00207c; 	X(PUSH(ax));	// 7939 push    ax ;~ 0396:207C
cs=0x396;eip=0x00207d; 	R(CALLF(sub_2714e,0));	// 7940 call    far ptr sub_2714E ;~ 0396:207D
cs=0x396;eip=0x002082; 	T(ADD(sp, 2));	// 7941 add     sp, 2 ;~ 0396:2082
cs=0x396;eip=0x002085; 	T(MOV(ax, 0x0FF1));	// 7942 mov     ax, 0FF1h ;~ 0396:2085
cs=0x396;eip=0x002088; 	X(PUSH(ax));	// 7943 push    ax ;~ 0396:2088
cs=0x396;eip=0x002089; 	T(MOV(ax, 0x0A9C));	// 7944 mov     ax, 0A9Ch ;~ 0396:2089
cs=0x396;eip=0x00208c; 	X(PUSH(ax));	// 7945 push    ax ;~ 0396:208C
cs=0x396;eip=0x00208d; 	R(CALLF(sub_29b46,0));	// 7946 call    sub_29B46 ;~ 0396:208D
cs=0x396;eip=0x002092; 	T(ADD(sp, 4));	// 7947 add     sp, 4 ;~ 0396:2092
cs=0x396;eip=0x002095; 	X(PUSH(word_38a9e));	// 7948 push    word_38A9E ;~ 0396:2095
cs=0x396;eip=0x002099; 	X(PUSH(word_38a9c));	// 7949 push    word_38A9C ;~ 0396:2099
cs=0x396;eip=0x00209d; 	T(MOV(ax, 0x0A9A));	// 7950 mov     ax, 0A9Ah ;~ 0396:209D
cs=0x396;eip=0x0020a0; 	X(PUSH(ax));	// 7951 push    ax ;~ 0396:20A0
cs=0x396;eip=0x0020a1; 	R(CALLF(sub_10ee0,0));	// 7952 call    sub_10EE0 ;~ 0396:20A1
cs=0x396;eip=0x0020a6; 	T(ADD(sp, 6));	// 7953 add     sp, 6 ;~ 0396:20A6
cs=0x396;eip=0x0020a9; 	T(MOV(ax, 0x2500));	// 7954 mov     ax, 2500h ;~ 0396:20A9
cs=0x396;eip=0x0020ac; 	X(PUSH(ds));	// 7955 push    ds ;~ 0396:20AC
cs=0x396;eip=0x0020ad; 	X(PUSH(ax));	// 7956 push    ax ;~ 0396:20AD
cs=0x396;eip=0x0020ae; 	X(PUSH(word_38a9e));	// 7957 push    word_38A9E ;~ 0396:20AE
cs=0x396;eip=0x0020b2; 	X(PUSH(word_38a9c));	// 7958 push    word_38A9C ;~ 0396:20B2
cs=0x396;eip=0x0020b6; 	R(CALLF(sub_1ab87,0));	// 7959 call    sub_1AB87 ;~ 0396:20B6
cs=0x396;eip=0x0020bb; 	T(ADD(sp, 8));	// 7960 add     sp, 8 ;~ 0396:20BB
cs=0x396;eip=0x0020be; 	T(SUB(ax, ax));	// 7961 sub     ax, ax ;~ 0396:20BE
cs=0x396;eip=0x0020c0; 	X(PUSH(ax));	// 7962 push    ax ;~ 0396:20C0
cs=0x396;eip=0x0020c1; 	T(MOV(ax, 0x59));	// 7963 mov     ax, 59h ; 'Y' ;~ 0396:20C1
cs=0x396;eip=0x0020c4; 	X(PUSH(ax));	// 7964 push    ax ;~ 0396:20C4
cs=0x396;eip=0x0020c5; 	T(SUB(ax, ax));	// 7965 sub     ax, ax ;~ 0396:20C5
cs=0x396;eip=0x0020c7; 	X(PUSH(ax));	// 7966 push    ax ;~ 0396:20C7
cs=0x396;eip=0x0020c8; 	T(MOV(ax, 0x80));	// 7967 mov     ax, 80h ; 'Ä' ;~ 0396:20C8
cs=0x396;eip=0x0020cb; 	X(PUSH(ax));	// 7968 push    ax ;~ 0396:20CB
cs=0x396;eip=0x0020cc; 	T(MOV(ax, 0x155B));	// 7969 mov     ax, 155Bh ;~ 0396:20CC
cs=0x396;eip=0x0020cf; 	X(PUSH(ax));	// 7970 push    ax ;~ 0396:20CF
cs=0x396;eip=0x0020d0; 	T(MOV(ax, 0x2500));	// 7971 mov     ax, 2500h ;~ 0396:20D0
cs=0x396;eip=0x0020d3; 	X(PUSH(ax));	// 7972 push    ax ;~ 0396:20D3
cs=0x396;eip=0x0020d4; 	X(PUSH(cs));	// 7973 push    cs ;~ 0396:20D4
cs=0x396;eip=0x0020d5; 	R(CALL(sub_178ec,0));	// 7974 call    near ptr sub_178EC ;~ 0396:20D5
cs=0x396;eip=0x0020d8; 	T(ADD(sp, 0x0C));	// 7975 add     sp, 0Ch ;~ 0396:20D8
cs=0x396;eip=0x0020db; 	X(XOR(byte_34f30, 0x80));	// 7976 xor     byte_34F30, 80h ;~ 0396:20DB
cs=0x396;eip=0x0020e0; 	T(MOV(ax, 0x0FFB));	// 7977 mov     ax, 0FFBh ;~ 0396:20E0
cs=0x396;eip=0x0020e3; 	X(PUSH(ax));	// 7978 push    ax ;~ 0396:20E3
cs=0x396;eip=0x0020e4; 	T(MOV(ax, 0x0A9C));	// 7979 mov     ax, 0A9Ch ;~ 0396:20E4
cs=0x396;eip=0x0020e7; 	X(PUSH(ax));	// 7980 push    ax ;~ 0396:20E7
cs=0x396;eip=0x0020e8; 	R(CALLF(sub_29b46,0));	// 7981 call    sub_29B46 ;~ 0396:20E8
cs=0x396;eip=0x0020ed; 	T(ADD(sp, 4));	// 7982 add     sp, 4 ;~ 0396:20ED
cs=0x396;eip=0x0020f0; 	T(MOV(ax, 0x0A9A));	// 7983 mov     ax, 0A9Ah ;~ 0396:20F0
cs=0x396;eip=0x0020f3; 	X(PUSH(ax));	// 7984 push    ax ;~ 0396:20F3
cs=0x396;eip=0x0020f4; 	R(CALLF(sub_10d62,0));	// 7985 call    sub_10D62 ;~ 0396:20F4
cs=0x396;eip=0x0020f9; 	T(ADD(sp, 2));	// 7986 add     sp, 2 ;~ 0396:20F9
cs=0x396;eip=0x0020fc; 	T(MOV(ax, 0x1007));	// 7987 mov     ax, 1007h ;~ 0396:20FC
cs=0x396;eip=0x0020ff; 	X(PUSH(ax));	// 7988 push    ax ;~ 0396:20FF
cs=0x396;eip=0x002100; 	T(MOV(ax, 0x0A9C));	// 7989 mov     ax, 0A9Ch ;~ 0396:2100
cs=0x396;eip=0x002103; 	X(PUSH(ax));	// 7990 push    ax ;~ 0396:2103
cs=0x396;eip=0x002104; 	R(CALLF(sub_29b46,0));	// 7991 call    sub_29B46 ;~ 0396:2104
cs=0x396;eip=0x002109; 	T(ADD(sp, 4));	// 7992 add     sp, 4 ;~ 0396:2109
cs=0x396;eip=0x00210c; 	X(PUSH(word_38a9e));	// 7993 push    word_38A9E ;~ 0396:210C
cs=0x396;eip=0x002110; 	X(PUSH(word_38a9c));	// 7994 push    word_38A9C ;~ 0396:2110
cs=0x396;eip=0x002114; 	T(MOV(ax, 0x0A9A));	// 7995 mov     ax, 0A9Ah ;~ 0396:2114
cs=0x396;eip=0x002117; 	X(PUSH(ax));	// 7996 push    ax ;~ 0396:2117
cs=0x396;eip=0x002118; 	R(CALLF(sub_10ee0,0));	// 7997 call    sub_10EE0 ;~ 0396:2118
cs=0x396;eip=0x00211d; 	T(ADD(sp, 6));	// 7998 add     sp, 6 ;~ 0396:211D
cs=0x396;eip=0x002120; 	T(MOV(ax, 0x2500));	// 7999 mov     ax, 2500h ;~ 0396:2120
cs=0x396;eip=0x002123; 	X(PUSH(ds));	// 8000 push    ds ;~ 0396:2123
cs=0x396;eip=0x002124; 	X(PUSH(ax));	// 8001 push    ax ;~ 0396:2124
cs=0x396;eip=0x002125; 	X(PUSH(word_38a9e));	// 8002 push    word_38A9E ;~ 0396:2125
cs=0x396;eip=0x002129; 	X(PUSH(word_38a9c));	// 8003 push    word_38A9C ;~ 0396:2129
cs=0x396;eip=0x00212d; 	R(CALLF(sub_1ab87,0));	// 8004 call    sub_1AB87 ;~ 0396:212D
cs=0x396;eip=0x002132; 	T(ADD(sp, 8));	// 8005 add     sp, 8 ;~ 0396:2132
cs=0x396;eip=0x002135; 	T(SUB(ax, ax));	// 8006 sub     ax, ax ;~ 0396:2135
cs=0x396;eip=0x002137; 	X(PUSH(ax));	// 8007 push    ax ;~ 0396:2137
cs=0x396;eip=0x002138; 	T(MOV(ax, 0x8F));	// 8008 mov     ax, 8Fh ; 'è' ;~ 0396:2138
cs=0x396;eip=0x00213b; 	X(PUSH(ax));	// 8009 push    ax ;~ 0396:213B
cs=0x396;eip=0x00213c; 	T(MOV(ax, 0x80));	// 8010 mov     ax, 80h ; 'Ä' ;~ 0396:213C
cs=0x396;eip=0x00213f; 	X(PUSH(ax));	// 8011 push    ax ;~ 0396:213F
cs=0x396;eip=0x002140; 	T(MOV(ax, 0x0C0));	// 8012 mov     ax, 0C0h ; '¿' ;~ 0396:2140
cs=0x396;eip=0x002143; 	X(PUSH(ax));	// 8013 push    ax ;~ 0396:2143
cs=0x396;eip=0x002144; 	T(MOV(ax, 0x1A3B));	// 8014 mov     ax, 1A3Bh ;~ 0396:2144
cs=0x396;eip=0x002147; 	X(PUSH(ax));	// 8015 push    ax ;~ 0396:2147
cs=0x396;eip=0x002148; 	T(MOV(ax, 0x2500));	// 8016 mov     ax, 2500h ;~ 0396:2148
cs=0x396;eip=0x00214b; 	X(PUSH(ax));	// 8017 push    ax ;~ 0396:214B
cs=0x396;eip=0x00214c; 	X(PUSH(cs));	// 8018 push    cs ;~ 0396:214C
cs=0x396;eip=0x00214d; 	R(CALL(sub_178ec,0));	// 8019 call    near ptr sub_178EC ;~ 0396:214D
cs=0x396;eip=0x002150; 	T(ADD(sp, 0x0C));	// 8020 add     sp, 0Ch ;~ 0396:2150
cs=0x396;eip=0x002153; 	T(SUB(ax, ax));	// 8021 sub     ax, ax ;~ 0396:2153
cs=0x396;eip=0x002155; 	X(MOV(word_2beda, ax));	// 8022 mov     word_2BEDA, ax ;~ 0396:2155
cs=0x396;eip=0x002158; 	X(PUSH(ax));	// 8023 push    ax ;~ 0396:2158
cs=0x396;eip=0x002159; 	R(CALLF(sub_2714e,0));	// 8024 call    far ptr sub_2714E ;~ 0396:2159
cs=0x396;eip=0x00215e; 	T(ADD(sp, 2));	// 8025 add     sp, 2 ;~ 0396:215E
cs=0x396;eip=0x002161; 	X(MOV(byte_34f20, 1));	// 8026 mov     byte_34F20, 1 ;~ 0396:2161
cs=0x396;eip=0x002166; 	T(CMP(byte_2bec9, 0));	// 8027 cmp     byte_2BEC9, 0 ;~ 0396:2166
cs=0x396;eip=0x00216b; 	R(JNZ(loc_140b8));	// 8028 jnz     short loc_140B8 ;~ 0396:216B
cs=0x396;eip=0x00216d; 	R(CALLF(sub_10f58,0));	// 8029 call    sub_10F58 ;~ 0396:216D
cs=0x396;eip=0x002172; 	T(AND(ax, 1));	// 8030 and     ax, 1 ;~ 0396:2172
cs=0x396;eip=0x002175; 	R(JMP(loc_140be));	// 8031 jmp     short loc_140BE ;~ 0396:2175
loc_140b8:
	// 4832 
cs=0x396;eip=0x002178; 	T(MOV(al, byte_2bec9));	// 8036 mov     al, byte_2BEC9 ;~ 0396:2178
cs=0x396;eip=0x00217b; 	T(SUB(ah, ah));	// 8037 sub     ah, ah ;~ 0396:217B
cs=0x396;eip=0x00217d; 	T(DEC(ax));	// 8038 dec     ax ;~ 0396:217D
loc_140be:
	// 4833 
cs=0x396;eip=0x00217e; 	X(MOV(*(dw*)(raddr(ss,bp-0x14)), ax));	// 8041 mov     [bp-14h], ax ;~ 0396:217E
cs=0x396;eip=0x002181; 	T(OR(ax, ax));	// 8042 or      ax, ax ;~ 0396:2181
cs=0x396;eip=0x002183; 	R(JNZ(loc_140f4));	// 8043 jnz     short loc_140F4 ;~ 0396:2183
cs=0x396;eip=0x002185; 	T(MOV(ax, 0x100F));	// 8044 mov     ax, 100Fh ;~ 0396:2185
cs=0x396;eip=0x002188; 	X(PUSH(ax));	// 8045 push    ax ;~ 0396:2188
cs=0x396;eip=0x002189; 	T(MOV(ax, 0x8DCC));	// 8046 mov     ax, 8DCCh ;~ 0396:2189
cs=0x396;eip=0x00218c; 	X(PUSH(ax));	// 8047 push    ax ;~ 0396:218C
cs=0x396;eip=0x00218d; 	R(CALLF(sub_29b46,0));	// 8048 call    sub_29B46 ;~ 0396:218D
cs=0x396;eip=0x002192; 	T(ADD(sp, 4));	// 8049 add     sp, 4 ;~ 0396:2192
cs=0x396;eip=0x002195; 	T(MOV(ax, 0x1022));	// 8050 mov     ax, 1022h ;~ 0396:2195
cs=0x396;eip=0x002198; 	X(PUSH(ax));	// 8051 push    ax ;~ 0396:2198
cs=0x396;eip=0x002199; 	T(MOV(ax, 0x0A9C));	// 8052 mov     ax, 0A9Ch ;~ 0396:2199
cs=0x396;eip=0x00219c; 	X(PUSH(ax));	// 8053 push    ax ;~ 0396:219C
cs=0x396;eip=0x00219d; 	R(CALLF(sub_29b46,0));	// 8054 call    sub_29B46 ;~ 0396:219D
cs=0x396;eip=0x0021a2; 	T(ADD(sp, 4));	// 8055 add     sp, 4 ;~ 0396:21A2
cs=0x396;eip=0x0021a5; 	T(MOV(ax, 0x8E04));	// 8056 mov     ax, 8E04h ;~ 0396:21A5
cs=0x396;eip=0x0021a8; 	X(PUSH(ax));	// 8057 push    ax ;~ 0396:21A8
cs=0x396;eip=0x0021a9; 	T(MOV(ax, 0x0A9A));	// 8058 mov     ax, 0A9Ah ;~ 0396:21A9
cs=0x396;eip=0x0021ac; 	X(PUSH(ax));	// 8059 push    ax ;~ 0396:21AC
cs=0x396;eip=0x0021ad; 	R(CALLF(sub_10e74,0));	// 8060 call    sub_10E74 ;~ 0396:21AD
cs=0x396;eip=0x0021b2; 	R(JMP(loc_14101));	// 8061 jmp     short loc_14101 ;~ 0396:21B2
loc_140f4:
	// 4834 
cs=0x396;eip=0x0021b4; 	T(MOV(ax, 0x0AEA));	// 8065 mov     ax, 0AEAh ;~ 0396:21B4
cs=0x396;eip=0x0021b7; 	X(PUSH(ax));	// 8066 push    ax ;~ 0396:21B7
cs=0x396;eip=0x0021b8; 	T(MOV(ax, 0x8DCC));	// 8067 mov     ax, 8DCCh ;~ 0396:21B8
cs=0x396;eip=0x0021bb; 	X(PUSH(ax));	// 8068 push    ax ;~ 0396:21BB
cs=0x396;eip=0x0021bc; 	R(CALLF(sub_29b46,0));	// 8069 call    sub_29B46 ;~ 0396:21BC
loc_14101:
	// 4835 
cs=0x396;eip=0x0021c1; 	T(ADD(sp, 4));	// 8072 add     sp, 4 ;~ 0396:21C1
cs=0x396;eip=0x0021c4; 	X(MOV(byte_34c1e, 0x20));	// 8073 mov     byte_34C1E, 20h ; ' ' ;~ 0396:21C4
cs=0x396;eip=0x0021c9; 	X(MOV(*(dw*)(raddr(ss,bp-6)), 0x0F));	// 8074 mov     word ptr [bp-6], 0Fh ;~ 0396:21C9
loc_1410e:
	// 4836 
cs=0x396;eip=0x0021ce; 	T(CMP(*(dw*)(raddr(ss,bp-6)), 0x0B));	// 8077 cmp     word ptr [bp-6], 0Bh ;~ 0396:21CE
cs=0x396;eip=0x0021d2; 	R(JA(loc_14126));	// 8078 ja      short loc_14126 ;~ 0396:21D2
cs=0x396;eip=0x0021d4; 	T(CMP(*(dw*)(raddr(ss,bp-8)), 0x0B));	// 8079 cmp     word ptr [bp-8], 0Bh ;~ 0396:21D4
cs=0x396;eip=0x0021d8; 	R(JA(loc_14126));	// 8080 ja      short loc_14126 ;~ 0396:21D8
cs=0x396;eip=0x0021da; 	T(CMP(*(dw*)(raddr(ss,bp-0x0E)), 0x0B));	// 8081 cmp     word ptr [bp-0Eh], 0Bh ;~ 0396:21DA
cs=0x396;eip=0x0021de; 	R(JA(loc_14126));	// 8082 ja      short loc_14126 ;~ 0396:21DE
cs=0x396;eip=0x0021e0; 	T(CMP(*(dw*)(raddr(ss,bp-0x10)), 0x0B));	// 8083 cmp     word ptr [bp-10h], 0Bh ;~ 0396:21E0
cs=0x396;eip=0x0021e4; 	R(JBE(loc_1416a));	// 8084 jbe     short loc_1416A ;~ 0396:21E4
loc_14126:
	// 4837 
cs=0x396;eip=0x0021e6; 	R(CALLF(sub_10f58,0));	// 8088 call    sub_10F58 ;~ 0396:21E6
cs=0x396;eip=0x0021eb; 	X(MOV(*(dw*)(raddr(ss,bp-6)), ax));	// 8089 mov     [bp-6], ax ;~ 0396:21EB
cs=0x396;eip=0x0021ee; 	X(PUSH(ax));	// 8090 push    ax ;~ 0396:21EE
cs=0x396;eip=0x0021ef; 	R(CALLF(sub_1c8c2,0));	// 8091 call    sub_1C8C2 ;~ 0396:21EF
cs=0x396;eip=0x0021f4; 	T(ADD(sp, 2));	// 8092 add     sp, 2 ;~ 0396:21F4
cs=0x396;eip=0x0021f7; 	X(MOV(*(dw*)(raddr(ss,bp-6)), ax));	// 8093 mov     [bp-6], ax ;~ 0396:21F7
cs=0x396;eip=0x0021fa; 	T(MOV(cl, 0x0C));	// 8094 mov     cl, 0Ch ;~ 0396:21FA
cs=0x396;eip=0x0021fc; 	T(SHR(ax, cl));	// 8095 shr     ax, cl ;~ 0396:21FC
cs=0x396;eip=0x0021fe; 	X(MOV(*(dw*)(raddr(ss,bp-0x10)), ax));	// 8096 mov     [bp-10h], ax ;~ 0396:21FE
cs=0x396;eip=0x002201; 	T(SHL(ax, cl));	// 8097 shl     ax, cl ;~ 0396:2201
cs=0x396;eip=0x002203; 	X(SUB(*(dw*)(raddr(ss,bp-6)), ax));	// 8098 sub     [bp-6], ax ;~ 0396:2203
cs=0x396;eip=0x002206; 	T(MOV(ax, *(dw*)(raddr(ss,bp-6))));	// 8099 mov     ax, [bp-6] ;~ 0396:2206
cs=0x396;eip=0x002209; 	T(MOV(cl, 8));	// 8100 mov     cl, 8 ;~ 0396:2209
cs=0x396;eip=0x00220b; 	T(SHR(ax, cl));	// 8101 shr     ax, cl ;~ 0396:220B
cs=0x396;eip=0x00220d; 	X(MOV(*(dw*)(raddr(ss,bp-0x0E)), ax));	// 8102 mov     [bp-0Eh], ax ;~ 0396:220D
cs=0x396;eip=0x002210; 	T(MOV(ah, *(raddr(ss,bp-0x0E))));	// 8103 mov     ah, [bp-0Eh] ;~ 0396:2210
cs=0x396;eip=0x002213; 	T(SUB(al, al));	// 8104 sub     al, al ;~ 0396:2213
cs=0x396;eip=0x002215; 	X(SUB(*(dw*)(raddr(ss,bp-6)), ax));	// 8105 sub     [bp-6], ax ;~ 0396:2215
cs=0x396;eip=0x002218; 	T(MOV(ax, *(dw*)(raddr(ss,bp-6))));	// 8106 mov     ax, [bp-6] ;~ 0396:2218
cs=0x396;eip=0x00221b; 	T(MOV(cl, 4));	// 8107 mov     cl, 4 ;~ 0396:221B
cs=0x396;eip=0x00221d; 	T(SHR(ax, cl));	// 8108 shr     ax, cl ;~ 0396:221D
cs=0x396;eip=0x00221f; 	X(MOV(*(dw*)(raddr(ss,bp-8)), ax));	// 8109 mov     [bp-8], ax ;~ 0396:221F
cs=0x396;eip=0x002222; 	T(SHL(ax, cl));	// 8110 shl     ax, cl ;~ 0396:2222
cs=0x396;eip=0x002224; 	X(SUB(*(dw*)(raddr(ss,bp-6)), ax));	// 8111 sub     [bp-6], ax ;~ 0396:2224
cs=0x396;eip=0x002227; 	R(JMP(loc_1410e));	// 8112 jmp     short loc_1410E ;~ 0396:2227
loc_1416a:
	// 4838 
cs=0x396;eip=0x00222a; 	T(MOV(ax, 8));	// 8117 mov     ax, 8 ;~ 0396:222A
cs=0x396;eip=0x00222d; 	X(PUSH(ax));	// 8118 push    ax ;~ 0396:222D
cs=0x396;eip=0x00222e; 	T(MOV(bx, *(dw*)(raddr(ss,bp-6))));	// 8119 mov     bx, [bp-6] ;~ 0396:222E
cs=0x396;eip=0x002231; 	T(MOV(al, *(raddr(ds,bx-0x7070))));	// 8120 mov     al, [bx-7070h] ;~ 0396:2231
cs=0x396;eip=0x002235; 	T(SUB(ah, ah));	// 8121 sub     ah, ah ;~ 0396:2235
cs=0x396;eip=0x002237; 	X(PUSH(ax));	// 8122 push    ax ;~ 0396:2237
cs=0x396;eip=0x002238; 	X(PUSH(cs));	// 8123 push    cs ;~ 0396:2238
cs=0x396;eip=0x002239; 	R(CALL(sub_1456a,0));	// 8124 call    near ptr sub_1456A ;~ 0396:2239
cs=0x396;eip=0x00223c; 	T(ADD(sp, 4));	// 8125 add     sp, 4 ;~ 0396:223C
cs=0x396;eip=0x00223f; 	T(MOV(ax, 0x48));	// 8126 mov     ax, 48h ; 'H' ;~ 0396:223F
cs=0x396;eip=0x002242; 	X(PUSH(ax));	// 8127 push    ax ;~ 0396:2242
cs=0x396;eip=0x002243; 	T(MOV(bx, *(dw*)(raddr(ss,bp-8))));	// 8128 mov     bx, [bp-8] ;~ 0396:2243
cs=0x396;eip=0x002246; 	T(MOV(al, *(raddr(ds,bx-0x7064))));	// 8129 mov     al, [bx-7064h] ;~ 0396:2246
cs=0x396;eip=0x00224a; 	T(SUB(ah, ah));	// 8130 sub     ah, ah ;~ 0396:224A
cs=0x396;eip=0x00224c; 	X(PUSH(ax));	// 8131 push    ax ;~ 0396:224C
cs=0x396;eip=0x00224d; 	X(PUSH(cs));	// 8132 push    cs ;~ 0396:224D
cs=0x396;eip=0x00224e; 	R(CALL(sub_1456a,0));	// 8133 call    near ptr sub_1456A ;~ 0396:224E
cs=0x396;eip=0x002251; 	T(ADD(sp, 4));	// 8134 add     sp, 4 ;~ 0396:2251
cs=0x396;eip=0x002254; 	T(SUB(ax, ax));	// 8135 sub     ax, ax ;~ 0396:2254
cs=0x396;eip=0x002256; 	X(MOV(*(dw*)(raddr(ss,bp-0x18)), ax));	// 8136 mov     [bp-18h], ax ;~ 0396:2256
cs=0x396;eip=0x002259; 	X(PUSH(ax));	// 8137 push    ax ;~ 0396:2259
cs=0x396;eip=0x00225a; 	T(MOV(ax, 0x8DC2));	// 8138 mov     ax, 8DC2h ;~ 0396:225A
cs=0x396;eip=0x00225d; 	X(PUSH(ax));	// 8139 push    ax ;~ 0396:225D
cs=0x396;eip=0x00225e; 	X(PUSH(cs));	// 8140 push    cs ;~ 0396:225E
cs=0x396;eip=0x00225f; 	R(CALL(sub_139c2,0));	// 8141 call    near ptr sub_139C2 ;~ 0396:225F
cs=0x396;eip=0x002262; 	T(ADD(sp, 4));	// 8142 add     sp, 4 ;~ 0396:2262
cs=0x396;eip=0x002265; 	X(MOV(*(dw*)(raddr(ss,bp-0x18)), ax));	// 8143 mov     [bp-18h], ax ;~ 0396:2265
cs=0x396;eip=0x002268; 	T(MOV(ax, 3));	// 8144 mov     ax, 3 ;~ 0396:2268
cs=0x396;eip=0x00226b; 	X(PUSH(ax));	// 8145 push    ax ;~ 0396:226B
cs=0x396;eip=0x00226c; 	T(MOV(ax, 0x0BF));	// 8146 mov     ax, 0BFh ; 'ø' ;~ 0396:226C
cs=0x396;eip=0x00226f; 	X(PUSH(ax));	// 8147 push    ax ;~ 0396:226F
cs=0x396;eip=0x002270; 	R(CALLF(sub_1c92b,0));	// 8148 call    sub_1C92B ;~ 0396:2270
cs=0x396;eip=0x002275; 	T(ADD(sp, 4));	// 8149 add     sp, 4 ;~ 0396:2275
cs=0x396;eip=0x002278; 	X(PUSH(*(dw*)(raddr(ss,bp-0x18))));	// 8150 push    word ptr [bp-18h] ;~ 0396:2278
cs=0x396;eip=0x00227b; 	T(MOV(ax, 0x8DC2));	// 8151 mov     ax, 8DC2h ;~ 0396:227B
cs=0x396;eip=0x00227e; 	X(PUSH(ax));	// 8152 push    ax ;~ 0396:227E
cs=0x396;eip=0x00227f; 	X(PUSH(cs));	// 8153 push    cs ;~ 0396:227F
cs=0x396;eip=0x002280; 	R(CALL(sub_13a16,0));	// 8154 call    near ptr sub_13A16 ;~ 0396:2280
cs=0x396;eip=0x002283; 	T(ADD(sp, 4));	// 8155 add     sp, 4 ;~ 0396:2283
cs=0x396;eip=0x002286; 	X(MOV(*(dw*)(raddr(ss,bp-0x18)), ax));	// 8156 mov     [bp-18h], ax ;~ 0396:2286
cs=0x396;eip=0x002289; 	T(MOV(ax, 0x11));	// 8157 mov     ax, 11h ;~ 0396:2289
cs=0x396;eip=0x00228c; 	X(PUSH(ax));	// 8158 push    ax ;~ 0396:228C
cs=0x396;eip=0x00228d; 	T(MOV(ax, 0x16));	// 8159 mov     ax, 16h ;~ 0396:228D
cs=0x396;eip=0x002290; 	X(PUSH(ax));	// 8160 push    ax ;~ 0396:2290
cs=0x396;eip=0x002291; 	R(CALLF(sub_1c90c,0));	// 8161 call    sub_1C90C ;~ 0396:2291
cs=0x396;eip=0x002296; 	T(ADD(sp, 4));	// 8162 add     sp, 4 ;~ 0396:2296
cs=0x396;eip=0x002299; 	T(MOV(bx, *(dw*)(raddr(ss,bp-0x0E))));	// 8163 mov     bx, [bp-0Eh] ;~ 0396:2299
cs=0x396;eip=0x00229c; 	T(SHL(bx, 1));	// 8164 shl     bx, 1 ;~ 0396:229C
cs=0x396;eip=0x00229e; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x7058))));	// 8165 mov     ax, [bx-7058h] ;~ 0396:229E
cs=0x396;eip=0x0022a2; 	T(ADD(ax, 0x8E04));	// 8166 add     ax, 8E04h ;~ 0396:22A2
cs=0x396;eip=0x0022a5; 	X(MOV(*(dw*)(raddr(ss,bp-0x16)), ax));	// 8167 mov     [bp-16h], ax ;~ 0396:22A5
cs=0x396;eip=0x0022a8; 	T(SUB(ax, ax));	// 8168 sub     ax, ax ;~ 0396:22A8
cs=0x396;eip=0x0022aa; 	X(MOV(*(dw*)(raddr(ss,bp-0x18)), ax));	// 8169 mov     [bp-18h], ax ;~ 0396:22AA
cs=0x396;eip=0x0022ad; 	X(PUSH(ax));	// 8170 push    ax ;~ 0396:22AD
cs=0x396;eip=0x0022ae; 	X(PUSH(*(dw*)(raddr(ss,bp-0x16))));	// 8171 push    word ptr [bp-16h] ;~ 0396:22AE
cs=0x396;eip=0x0022b1; 	X(PUSH(cs));	// 8172 push    cs ;~ 0396:22B1
cs=0x396;eip=0x0022b2; 	R(CALL(sub_13a16,0));	// 8173 call    near ptr sub_13A16 ;~ 0396:22B2
cs=0x396;eip=0x0022b5; 	T(ADD(sp, 4));	// 8174 add     sp, 4 ;~ 0396:22B5
cs=0x396;eip=0x0022b8; 	X(MOV(*(dw*)(raddr(ss,bp-0x18)), ax));	// 8175 mov     [bp-18h], ax ;~ 0396:22B8
cs=0x396;eip=0x0022bb; 	T(MOV(bx, *(dw*)(raddr(ss,bp-0x10))));	// 8176 mov     bx, [bp-10h] ;~ 0396:22BB
cs=0x396;eip=0x0022be; 	T(SHL(bx, 1));	// 8177 shl     bx, 1 ;~ 0396:22BE
cs=0x396;eip=0x0022c0; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x7040))));	// 8178 mov     ax, [bx-7040h] ;~ 0396:22C0
cs=0x396;eip=0x0022c4; 	T(ADD(ax, 0x8E04));	// 8179 add     ax, 8E04h ;~ 0396:22C4
cs=0x396;eip=0x0022c7; 	X(MOV(*(dw*)(raddr(ss,bp-0x16)), ax));	// 8180 mov     [bp-16h], ax ;~ 0396:22C7
cs=0x396;eip=0x0022ca; 	T(SUB(ax, ax));	// 8181 sub     ax, ax ;~ 0396:22CA
cs=0x396;eip=0x0022cc; 	X(MOV(*(dw*)(raddr(ss,bp-0x18)), ax));	// 8182 mov     [bp-18h], ax ;~ 0396:22CC
cs=0x396;eip=0x0022cf; 	X(PUSH(ax));	// 8183 push    ax ;~ 0396:22CF
cs=0x396;eip=0x0022d0; 	X(PUSH(*(dw*)(raddr(ss,bp-0x16))));	// 8184 push    word ptr [bp-16h] ;~ 0396:22D0
cs=0x396;eip=0x0022d3; 	X(PUSH(cs));	// 8185 push    cs ;~ 0396:22D3
cs=0x396;eip=0x0022d4; 	R(CALL(sub_13a16,0));	// 8186 call    near ptr sub_13A16 ;~ 0396:22D4
cs=0x396;eip=0x0022d7; 	T(ADD(sp, 4));	// 8187 add     sp, 4 ;~ 0396:22D7
cs=0x396;eip=0x0022da; 	X(MOV(*(dw*)(raddr(ss,bp-0x18)), ax));	// 8188 mov     [bp-18h], ax ;~ 0396:22DA
cs=0x396;eip=0x0022dd; 	T(MOV(ax, 0x0C7));	// 8189 mov     ax, 0C7h ; '«' ;~ 0396:22DD
cs=0x396;eip=0x0022e0; 	X(PUSH(ax));	// 8190 push    ax ;~ 0396:22E0
cs=0x396;eip=0x0022e1; 	T(MOV(ax, 0x9E));	// 8191 mov     ax, 9Eh ; 'û' ;~ 0396:22E1
cs=0x396;eip=0x0022e4; 	X(PUSH(ax));	// 8192 push    ax ;~ 0396:22E4
cs=0x396;eip=0x0022e5; 	T(MOV(ax, 0x13F));	// 8193 mov     ax, 13Fh ;~ 0396:22E5
cs=0x396;eip=0x0022e8; 	X(PUSH(ax));	// 8194 push    ax ;~ 0396:22E8
cs=0x396;eip=0x0022e9; 	T(SUB(ax, ax));	// 8195 sub     ax, ax ;~ 0396:22E9
cs=0x396;eip=0x0022eb; 	X(PUSH(ax));	// 8196 push    ax ;~ 0396:22EB
cs=0x396;eip=0x0022ec; 	R(CALLF(sub_27be9,0));	// 8197 call    far ptr sub_27BE9 ;~ 0396:22EC
cs=0x396;eip=0x0022f1; 	T(ADD(sp, 8));	// 8198 add     sp, 8 ;~ 0396:22F1
cs=0x396;eip=0x0022f4; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x10))));	// 8199 mov     ax, [bp-10h] ;~ 0396:22F4
cs=0x396;eip=0x0022f7; 	T(SUB(ax, *(dw*)(raddr(ss,bp-0x0E))));	// 8200 sub     ax, [bp-0Eh] ;~ 0396:22F7
cs=0x396;eip=0x0022fa; 	X(MOV(*(dw*)(raddr(ss,bp-2)), ax));	// 8201 mov     [bp-2], ax ;~ 0396:22FA
cs=0x396;eip=0x0022fd; 	T(OR(ax, ax));	// 8202 or      ax, ax ;~ 0396:22FD
cs=0x396;eip=0x0022ff; 	R(JGE(loc_14245));	// 8203 jge     short loc_14245 ;~ 0396:22FF
cs=0x396;eip=0x002301; 	X(ADD(*(dw*)(raddr(ss,bp-2)), 0x0C));	// 8204 add     word ptr [bp-2], 0Ch ;~ 0396:2301
loc_14245:
	// 4839 
cs=0x396;eip=0x002305; 	T(MOV(cx, 0x0C));	// 8207 mov     cx, 0Ch ;~ 0396:2305
cs=0x396;eip=0x002308; 	T(MOV(ax, *(dw*)(raddr(ss,bp-2))));	// 8208 mov     ax, [bp-2] ;~ 0396:2308
cs=0x396;eip=0x00230b; 	T(CWD);	// 8209 cwd ;~ 0396:230B
cs=0x396;eip=0x00230c; 	T(IDIV2(cx));	// 8210 idiv    cx ;~ 0396:230C
cs=0x396;eip=0x00230e; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 8211 mov     [bp-2], dx ;~ 0396:230E
cs=0x396;eip=0x002311; 	T(MOV(ax, dx));	// 8212 mov     ax, dx ;~ 0396:2311
cs=0x396;eip=0x002313; 	T(ADD(ax, *(dw*)(raddr(ss,bp-6))));	// 8213 add     ax, [bp-6] ;~ 0396:2313
cs=0x396;eip=0x002316; 	T(SUB(dx, dx));	// 8214 sub     dx, dx ;~ 0396:2316
cs=0x396;eip=0x002318; 	T(DIV2(cx));	// 8215 div     cx ;~ 0396:2318
cs=0x396;eip=0x00231a; 	X(MOV(*(dw*)(raddr(ss,bp-6)), dx));	// 8216 mov     [bp-6], dx ;~ 0396:231A
cs=0x396;eip=0x00231d; 	T(MOV(ax, *(dw*)(raddr(ss,bp-2))));	// 8217 mov     ax, [bp-2] ;~ 0396:231D
cs=0x396;eip=0x002320; 	T(ADD(ax, *(dw*)(raddr(ss,bp-8))));	// 8218 add     ax, [bp-8] ;~ 0396:2320
cs=0x396;eip=0x002323; 	T(SUB(dx, dx));	// 8219 sub     dx, dx ;~ 0396:2323
cs=0x396;eip=0x002325; 	T(DIV2(cx));	// 8220 div     cx ;~ 0396:2325
cs=0x396;eip=0x002327; 	X(MOV(*(dw*)(raddr(ss,bp-8)), dx));	// 8221 mov     [bp-8], dx ;~ 0396:2327
cs=0x396;eip=0x00232a; 	T(MOV(ax, *(dw*)(raddr(ss,bp-2))));	// 8222 mov     ax, [bp-2] ;~ 0396:232A
cs=0x396;eip=0x00232d; 	T(ADD(ax, *(dw*)(raddr(ss,bp-0x0E))));	// 8223 add     ax, [bp-0Eh] ;~ 0396:232D
cs=0x396;eip=0x002330; 	T(SUB(dx, dx));	// 8224 sub     dx, dx ;~ 0396:2330
cs=0x396;eip=0x002332; 	T(DIV2(cx));	// 8225 div     cx ;~ 0396:2332
cs=0x396;eip=0x002334; 	X(MOV(*(dw*)(raddr(ss,bp-0x0E)), dx));	// 8226 mov     [bp-0Eh], dx ;~ 0396:2334
cs=0x396;eip=0x002337; 	T(MOV(bx, dx));	// 8227 mov     bx, dx ;~ 0396:2337
cs=0x396;eip=0x002339; 	T(MOV(al, *(raddr(ds,bx-0x71FC))));	// 8228 mov     al, [bx-71FCh] ;~ 0396:2339
cs=0x396;eip=0x00233d; 	T(SUB(ah, ah));	// 8229 sub     ah, ah ;~ 0396:233D
cs=0x396;eip=0x00233f; 	X(MOV(*(dw*)(raddr(ss,bp-2)), ax));	// 8230 mov     [bp-2], ax ;~ 0396:233F
cs=0x396;eip=0x002342; 	T(SHL(ax, 1));	// 8231 shl     ax, 1 ;~ 0396:2342
cs=0x396;eip=0x002344; 	T(SHL(ax, 1));	// 8232 shl     ax, 1 ;~ 0396:2344
cs=0x396;eip=0x002346; 	T(MOV(si, ax));	// 8233 mov     si, ax ;~ 0396:2346
cs=0x396;eip=0x002348; 	T(MOV(ax, *(dw*)(raddr(ss,bp-8))));	// 8234 mov     ax, [bp-8] ;~ 0396:2348
cs=0x396;eip=0x00234b; 	T(MOV(cl, 5));	// 8235 mov     cl, 5 ;~ 0396:234B
cs=0x396;eip=0x00234d; 	T(SHL(ax, cl));	// 8236 shl     ax, cl ;~ 0396:234D
cs=0x396;eip=0x00234f; 	T(ADD(ax, si));	// 8237 add     ax, si ;~ 0396:234F
cs=0x396;eip=0x002351; 	T(ADD(ax, 0x0C));	// 8238 add     ax, 0Ch ;~ 0396:2351
cs=0x396;eip=0x002354; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), ax));	// 8239 mov     [bp-0Ah], ax ;~ 0396:2354
cs=0x396;eip=0x002357; 	T(MOV(bx, ax));	// 8240 mov     bx, ax ;~ 0396:2357
cs=0x396;eip=0x002359; 	T(CMP(*(raddr(ds,bx-0x71FC)), 0x7B));	// 8241 cmp     byte ptr [bx-71FCh], 7Bh ; '{' ;~ 0396:2359
cs=0x396;eip=0x00235e; 	R(JNZ(loc_142ad));	// 8242 jnz     short loc_142AD ;~ 0396:235E
cs=0x396;eip=0x002360; 	T(MOV(ax, *(dw*)(raddr(ss,bp-6))));	// 8243 mov     ax, [bp-6] ;~ 0396:2360
cs=0x396;eip=0x002363; 	T(SHL(ax, cl));	// 8244 shl     ax, cl ;~ 0396:2363
cs=0x396;eip=0x002365; 	T(ADD(ax, si));	// 8245 add     ax, si ;~ 0396:2365
cs=0x396;eip=0x002367; 	T(ADD(ax, 0x1C));	// 8246 add     ax, 1Ch ;~ 0396:2367
cs=0x396;eip=0x00236a; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), ax));	// 8247 mov     [bp-0Ah], ax ;~ 0396:236A
loc_142ad:
	// 4840 
cs=0x396;eip=0x00236d; 	X(MOV(*(dw*)(raddr(ss,bp-0x0C)), 0));	// 8250 mov     word ptr [bp-0Ch], 0 ;~ 0396:236D
cs=0x396;eip=0x002372; 	X(MOV(*(dw*)(raddr(ss,bp-0x12)), 1));	// 8251 mov     word ptr [bp-12h], 1 ;~ 0396:2372
cs=0x396;eip=0x002377; 	X(MOV(*(dw*)(raddr(ss,bp-2)), 0));	// 8252 mov     word ptr [bp-2], 0 ;~ 0396:2377
loc_142bc:
	// 4841 
cs=0x396;eip=0x00237c; 	T(MOV(bx, *(dw*)(raddr(ss,bp-2))));	// 8255 mov     bx, [bp-2] ;~ 0396:237C
cs=0x396;eip=0x00237f; 	X(MOV(*(raddr(ds,bx-0x1586)), 0x20));	// 8256 mov     byte ptr [bx-1586h], 20h ; ' ' ;~ 0396:237F
cs=0x396;eip=0x002384; 	X(INC(*(dw*)(raddr(ss,bp-2))));	// 8257 inc     word ptr [bp-2] ;~ 0396:2384
cs=0x396;eip=0x002387; 	T(CMP(*(dw*)(raddr(ss,bp-2)), 0x14));	// 8258 cmp     word ptr [bp-2], 14h ;~ 0396:2387
cs=0x396;eip=0x00238b; 	R(JL(loc_142bc));	// 8259 jl      short loc_142BC ;~ 0396:238B
cs=0x396;eip=0x00238d; 	X(MOV(byte_34f20, 0));	// 8260 mov     byte_34F20, 0 ;~ 0396:238D
cs=0x396;eip=0x002392; 	R(JMP(loc_144a8));	// 8261 jmp     loc_144A8 ;~ 0396:2392
loc_142d6:
	// 4842 
cs=0x396;eip=0x002396; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x18))));	// 8266 mov     ax, [bp-18h] ;~ 0396:2396
cs=0x396;eip=0x002399; 	T(AND(ax, 3));	// 8267 and     ax, 3 ;~ 0396:2399
cs=0x396;eip=0x00239c; 	T(ADD(ax, 6));	// 8268 add     ax, 6 ;~ 0396:239C
cs=0x396;eip=0x00239f; 	X(PUSH(ax));	// 8269 push    ax ;~ 0396:239F
cs=0x396;eip=0x0023a0; 	R(CALLF(sub_27031,0));	// 8270 call    far ptr sub_27031 ;~ 0396:23A0
cs=0x396;eip=0x0023a5; 	T(ADD(sp, 2));	// 8271 add     sp, 2 ;~ 0396:23A5
cs=0x396;eip=0x0023a8; 	X(PUSH(cs));	// 8272 push    cs ;~ 0396:23A8
cs=0x396;eip=0x0023a9; 	R(CALL(sub_145c2,0));	// 8273 call    near ptr sub_145C2 ;~ 0396:23A9
cs=0x396;eip=0x0023ac; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x0C))));	// 8274 mov     ax, [bp-0Ch] ;~ 0396:23AC
cs=0x396;eip=0x0023af; 	T(MOV(cl, 3));	// 8275 mov     cl, 3 ;~ 0396:23AF
cs=0x396;eip=0x0023b1; 	T(SHL(ax, cl));	// 8276 shl     ax, cl ;~ 0396:23B1
cs=0x396;eip=0x0023b3; 	T(ADD(ax, 0x0F8));	// 8277 add     ax, 0F8h ; '¯' ;~ 0396:23B3
cs=0x396;eip=0x0023b6; 	X(MOV(*(dw*)(raddr(ss,bp-2)), ax));	// 8278 mov     [bp-2], ax ;~ 0396:23B6
cs=0x396;eip=0x0023b9; 	T(MOV(ax, 0x0C5));	// 8279 mov     ax, 0C5h ; '≈' ;~ 0396:23B9
cs=0x396;eip=0x0023bc; 	X(PUSH(ax));	// 8280 push    ax ;~ 0396:23BC
cs=0x396;eip=0x0023bd; 	T(MOV(ax, 0x0BE));	// 8281 mov     ax, 0BEh ; 'æ' ;~ 0396:23BD
cs=0x396;eip=0x0023c0; 	X(PUSH(ax));	// 8282 push    ax ;~ 0396:23C0
cs=0x396;eip=0x0023c1; 	T(MOV(ax, *(dw*)(raddr(ss,bp-2))));	// 8283 mov     ax, [bp-2] ;~ 0396:23C1
cs=0x396;eip=0x0023c4; 	T(ADD(ax, 7));	// 8284 add     ax, 7 ;~ 0396:23C4
cs=0x396;eip=0x0023c7; 	X(PUSH(ax));	// 8285 push    ax ;~ 0396:23C7
cs=0x396;eip=0x0023c8; 	X(PUSH(*(dw*)(raddr(ss,bp-2))));	// 8286 push    word ptr [bp-2] ;~ 0396:23C8
cs=0x396;eip=0x0023cb; 	R(CALLF(sub_2785b,0));	// 8287 call    far ptr sub_2785B ;~ 0396:23CB
cs=0x396;eip=0x0023d0; 	T(ADD(sp, 8));	// 8288 add     sp, 8 ;~ 0396:23D0
cs=0x396;eip=0x0023d3; 	X(INC(*(dw*)(raddr(ss,bp-0x18))));	// 8289 inc     word ptr [bp-18h] ;~ 0396:23D3
cs=0x396;eip=0x0023d6; 	T(MOV(ax, 2));	// 8290 mov     ax, 2 ;~ 0396:23D6
cs=0x396;eip=0x0023d9; 	X(PUSH(ax));	// 8291 push    ax ;~ 0396:23D9
cs=0x396;eip=0x0023da; 	R(CALLF(sub_26ffb,0));	// 8292 call    sub_26FFB ;~ 0396:23DA
cs=0x396;eip=0x0023df; 	T(ADD(sp, 2));	// 8293 add     sp, 2 ;~ 0396:23DF
cs=0x396;eip=0x0023e2; 	R(CALLF(sub_10f58,0));	// 8294 call    sub_10F58 ;~ 0396:23E2
cs=0x396;eip=0x0023e7; 	X(MOV(*(dw*)(raddr(ss,bp-2)), ax));	// 8295 mov     [bp-2], ax ;~ 0396:23E7
cs=0x396;eip=0x0023ea; 	T(SUB(ax, ax));	// 8296 sub     ax, ax ;~ 0396:23EA
cs=0x396;eip=0x0023ec; 	X(MOV(word_2beda, ax));	// 8297 mov     word_2BEDA, ax ;~ 0396:23EC
cs=0x396;eip=0x0023ef; 	X(PUSH(ax));	// 8298 push    ax ;~ 0396:23EF
cs=0x396;eip=0x0023f0; 	R(CALLF(sub_2714e,0));	// 8299 call    far ptr sub_2714E ;~ 0396:23F0
cs=0x396;eip=0x0023f5; 	T(ADD(sp, 2));	// 8300 add     sp, 2 ;~ 0396:23F5
cs=0x396;eip=0x0023f8; 	T(ax = bp-0x1A);	// 8301 lea     ax, [bp-1Ah] ;~ 0396:23F8
cs=0x396;eip=0x0023fb; 	X(PUSH(ax));	// 8302 push    ax ;~ 0396:23FB
cs=0x396;eip=0x0023fc; 	R(CALLF(sub_10f80,0));	// 8303 call    sub_10F80 ;~ 0396:23FC
cs=0x396;eip=0x002401; 	T(ADD(sp, 2));	// 8304 add     sp, 2 ;~ 0396:2401
cs=0x396;eip=0x002404; 	T(CMP(*(dw*)(raddr(ss,bp-0x1A)), 0));	// 8305 cmp     word ptr [bp-1Ah], 0 ;~ 0396:2404
cs=0x396;eip=0x002408; 	R(JNZ(loc_1434d));	// 8306 jnz     short loc_1434D ;~ 0396:2408
cs=0x396;eip=0x00240a; 	R(JMP(loc_144a8));	// 8307 jmp     loc_144A8 ;~ 0396:240A
loc_1434d:
	// 4843 
cs=0x396;eip=0x00240d; 	T(CMP(*(dw*)(raddr(ss,bp-0x1A)), 0x0D));	// 8311 cmp     word ptr [bp-1Ah], 0Dh ;~ 0396:240D
cs=0x396;eip=0x002411; 	R(JZ(loc_14356));	// 8312 jz      short loc_14356 ;~ 0396:2411
cs=0x396;eip=0x002413; 	R(JMP(loc_143d8));	// 8313 jmp     loc_143D8 ;~ 0396:2413
loc_14356:
	// 4844 
cs=0x396;eip=0x002416; 	T(CMP(*(dw*)(raddr(ss,bp-0x0C)), 0));	// 8317 cmp     word ptr [bp-0Ch], 0 ;~ 0396:2416
cs=0x396;eip=0x00241a; 	R(JZ(loc_143d8));	// 8318 jz      short loc_143D8 ;~ 0396:241A
cs=0x396;eip=0x00241c; 	T(MOV(ax, 0x0B));	// 8319 mov     ax, 0Bh ;~ 0396:241C
cs=0x396;eip=0x00241f; 	X(PUSH(ax));	// 8320 push    ax ;~ 0396:241F
cs=0x396;eip=0x002420; 	R(CALLF(sub_27031,0));	// 8321 call    far ptr sub_27031 ;~ 0396:2420
cs=0x396;eip=0x002425; 	T(ADD(sp, 2));	// 8322 add     sp, 2 ;~ 0396:2425
cs=0x396;eip=0x002428; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x0C))));	// 8323 mov     ax, [bp-0Ch] ;~ 0396:2428
cs=0x396;eip=0x00242b; 	T(MOV(cl, 3));	// 8324 mov     cl, 3 ;~ 0396:242B
cs=0x396;eip=0x00242d; 	T(SHL(ax, cl));	// 8325 shl     ax, cl ;~ 0396:242D
cs=0x396;eip=0x00242f; 	T(ADD(ax, 0x0F8));	// 8326 add     ax, 0F8h ; '¯' ;~ 0396:242F
cs=0x396;eip=0x002432; 	X(MOV(*(dw*)(raddr(ss,bp-2)), ax));	// 8327 mov     [bp-2], ax ;~ 0396:2432
cs=0x396;eip=0x002435; 	T(MOV(ax, 0x0C5));	// 8328 mov     ax, 0C5h ; '≈' ;~ 0396:2435
cs=0x396;eip=0x002438; 	X(PUSH(ax));	// 8329 push    ax ;~ 0396:2438
cs=0x396;eip=0x002439; 	T(MOV(ax, 0x0BE));	// 8330 mov     ax, 0BEh ; 'æ' ;~ 0396:2439
cs=0x396;eip=0x00243c; 	X(PUSH(ax));	// 8331 push    ax ;~ 0396:243C
cs=0x396;eip=0x00243d; 	T(MOV(ax, *(dw*)(raddr(ss,bp-2))));	// 8332 mov     ax, [bp-2] ;~ 0396:243D
cs=0x396;eip=0x002440; 	T(ADD(ax, 7));	// 8333 add     ax, 7 ;~ 0396:2440
cs=0x396;eip=0x002443; 	X(PUSH(ax));	// 8334 push    ax ;~ 0396:2443
cs=0x396;eip=0x002444; 	X(PUSH(*(dw*)(raddr(ss,bp-2))));	// 8335 push    word ptr [bp-2] ;~ 0396:2444
cs=0x396;eip=0x002447; 	R(CALLF(sub_2785b,0));	// 8336 call    far ptr sub_2785B ;~ 0396:2447
cs=0x396;eip=0x00244c; 	T(ADD(sp, 8));	// 8337 add     sp, 8 ;~ 0396:244C
cs=0x396;eip=0x00244f; 	X(MOV(*(dw*)(raddr(ss,bp-0x18)), 0));	// 8338 mov     word ptr [bp-18h], 0 ;~ 0396:244F
cs=0x396;eip=0x002454; 	X(MOV(*(dw*)(raddr(ss,bp-0x12)), 1));	// 8339 mov     word ptr [bp-12h], 1 ;~ 0396:2454
loc_14399:
	// 4845 
cs=0x396;eip=0x002459; 	T(MOV(bx, *(dw*)(raddr(ss,bp-0x12))));	// 8342 mov     bx, [bp-12h] ;~ 0396:2459
cs=0x396;eip=0x00245c; 	T(MOV(al, 0x0FF));	// 8343 mov     al, 0FFh ;~ 0396:245C
cs=0x396;eip=0x00245e; 	T(SUB(al, *(raddr(ds,bx-0x1587))));	// 8344 sub     al, [bx-1587h] ;~ 0396:245E
cs=0x396;eip=0x002462; 	T(SUB(ah, ah));	// 8345 sub     ah, ah ;~ 0396:2462
cs=0x396;eip=0x002464; 	X(MOV(*(dw*)(raddr(ss,bp-2)), ax));	// 8346 mov     [bp-2], ax ;~ 0396:2464
cs=0x396;eip=0x002467; 	T(MOV(al, *(raddr(ss,bp-2))));	// 8347 mov     al, [bp-2] ;~ 0396:2467
cs=0x396;eip=0x00246a; 	T(AND(ax, 0x0F0));	// 8348 and     ax, 0F0h ;~ 0396:246A
cs=0x396;eip=0x00246d; 	T(MOV(cl, 4));	// 8349 mov     cl, 4 ;~ 0396:246D
cs=0x396;eip=0x00246f; 	T(SHR(ax, cl));	// 8350 shr     ax, cl ;~ 0396:246F
cs=0x396;eip=0x002471; 	T(MOV(dx, *(dw*)(raddr(ss,bp-2))));	// 8351 mov     dx, [bp-2] ;~ 0396:2471
cs=0x396;eip=0x002474; 	T(AND(dx, 0x0F));	// 8352 and     dx, 0Fh ;~ 0396:2474
cs=0x396;eip=0x002477; 	T(SHL(dx, cl));	// 8353 shl     dx, cl ;~ 0396:2477
cs=0x396;eip=0x002479; 	T(ADD(ax, dx));	// 8354 add     ax, dx ;~ 0396:2479
cs=0x396;eip=0x00247b; 	T(MOV(si, *(dw*)(raddr(ss,bp-0x0A))));	// 8355 mov     si, [bp-0Ah] ;~ 0396:247B
cs=0x396;eip=0x00247e; 	T(MOV(cl, *(raddr(ds,bx+si-0x71FD))));	// 8356 mov     cl, [bx+si-71FDh] ;~ 0396:247E
cs=0x396;eip=0x002482; 	T(SUB(ch, ch));	// 8357 sub     ch, ch ;~ 0396:2482
cs=0x396;eip=0x002484; 	T(CMP(ax, cx));	// 8358 cmp     ax, cx ;~ 0396:2484
cs=0x396;eip=0x002486; 	R(JZ(loc_143cf));	// 8359 jz      short loc_143CF ;~ 0396:2486
cs=0x396;eip=0x002488; 	X(INC(*(dw*)(raddr(ss,bp-0x18))));	// 8360 inc     word ptr [bp-18h] ;~ 0396:2488
cs=0x396;eip=0x00248b; 	X(ADD(*(dw*)(raddr(ss,bp-0x12)), 0x0E));	// 8361 add     word ptr [bp-12h], 0Eh ;~ 0396:248B
loc_143cf:
	// 4846 
cs=0x396;eip=0x00248f; 	X(INC(*(dw*)(raddr(ss,bp-0x12))));	// 8364 inc     word ptr [bp-12h] ;~ 0396:248F
cs=0x396;eip=0x002492; 	T(CMP(*(dw*)(raddr(ss,bp-0x12)), 5));	// 8365 cmp     word ptr [bp-12h], 5 ;~ 0396:2492
cs=0x396;eip=0x002496; 	R(JL(loc_14399));	// 8366 jl      short loc_14399 ;~ 0396:2496
loc_143d8:
	// 4847 
cs=0x396;eip=0x002498; 	T(CMP(*(dw*)(raddr(ss,bp-0x1A)), 0x2E));	// 8370 cmp     word ptr [bp-1Ah], 2Eh ; '.' ;~ 0396:2498
cs=0x396;eip=0x00249c; 	R(JZ(loc_143ea));	// 8371 jz      short loc_143EA ;~ 0396:249C
cs=0x396;eip=0x00249e; 	T(CMP(*(dw*)(raddr(ss,bp-0x1A)), 0x2F));	// 8372 cmp     word ptr [bp-1Ah], 2Fh ; '/' ;~ 0396:249E
cs=0x396;eip=0x0024a2; 	R(JLE(loc_1445e));	// 8373 jle     short loc_1445E ;~ 0396:24A2
cs=0x396;eip=0x0024a4; 	T(CMP(*(dw*)(raddr(ss,bp-0x1A)), 0x3A));	// 8374 cmp     word ptr [bp-1Ah], 3Ah ; ':' ;~ 0396:24A4
cs=0x396;eip=0x0024a8; 	R(JGE(loc_1445e));	// 8375 jge     short loc_1445E ;~ 0396:24A8
loc_143ea:
	// 4848 
cs=0x396;eip=0x0024aa; 	T(CMP(*(dw*)(raddr(ss,bp-0x0C)), 4));	// 8378 cmp     word ptr [bp-0Ch], 4 ;~ 0396:24AA
cs=0x396;eip=0x0024ae; 	R(JGE(loc_1445e));	// 8379 jge     short loc_1445E ;~ 0396:24AE
cs=0x396;eip=0x0024b0; 	T(MOV(bx, *(dw*)(raddr(ss,bp-0x0C))));	// 8380 mov     bx, [bp-0Ch] ;~ 0396:24B0
cs=0x396;eip=0x0024b3; 	T(MOV(al, *(raddr(ss,bp-0x1A))));	// 8381 mov     al, [bp-1Ah] ;~ 0396:24B3
cs=0x396;eip=0x0024b6; 	X(MOV(*(raddr(ds,bx-0x1586)), al));	// 8382 mov     [bx-1586h], al ;~ 0396:24B6
cs=0x396;eip=0x0024ba; 	T(MOV(ax, 0x0B));	// 8383 mov     ax, 0Bh ;~ 0396:24BA
cs=0x396;eip=0x0024bd; 	X(PUSH(ax));	// 8384 push    ax ;~ 0396:24BD
cs=0x396;eip=0x0024be; 	R(CALLF(sub_27031,0));	// 8385 call    far ptr sub_27031 ;~ 0396:24BE
cs=0x396;eip=0x0024c3; 	T(ADD(sp, 2));	// 8386 add     sp, 2 ;~ 0396:24C3
cs=0x396;eip=0x0024c6; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x0C))));	// 8387 mov     ax, [bp-0Ch] ;~ 0396:24C6
cs=0x396;eip=0x0024c9; 	T(MOV(cl, 3));	// 8388 mov     cl, 3 ;~ 0396:24C9
cs=0x396;eip=0x0024cb; 	T(SHL(ax, cl));	// 8389 shl     ax, cl ;~ 0396:24CB
cs=0x396;eip=0x0024cd; 	T(ADD(ax, 0x0F8));	// 8390 add     ax, 0F8h ; '¯' ;~ 0396:24CD
cs=0x396;eip=0x0024d0; 	X(MOV(*(dw*)(raddr(ss,bp-2)), ax));	// 8391 mov     [bp-2], ax ;~ 0396:24D0
cs=0x396;eip=0x0024d3; 	T(MOV(ax, 0x0C5));	// 8392 mov     ax, 0C5h ; '≈' ;~ 0396:24D3
cs=0x396;eip=0x0024d6; 	X(PUSH(ax));	// 8393 push    ax ;~ 0396:24D6
cs=0x396;eip=0x0024d7; 	T(MOV(ax, 0x0BE));	// 8394 mov     ax, 0BEh ; 'æ' ;~ 0396:24D7
cs=0x396;eip=0x0024da; 	X(PUSH(ax));	// 8395 push    ax ;~ 0396:24DA
cs=0x396;eip=0x0024db; 	T(MOV(ax, *(dw*)(raddr(ss,bp-2))));	// 8396 mov     ax, [bp-2] ;~ 0396:24DB
cs=0x396;eip=0x0024de; 	T(ADD(ax, 7));	// 8397 add     ax, 7 ;~ 0396:24DE
cs=0x396;eip=0x0024e1; 	X(PUSH(ax));	// 8398 push    ax ;~ 0396:24E1
cs=0x396;eip=0x0024e2; 	X(PUSH(*(dw*)(raddr(ss,bp-2))));	// 8399 push    word ptr [bp-2] ;~ 0396:24E2
cs=0x396;eip=0x0024e5; 	R(CALLF(sub_2785b,0));	// 8400 call    far ptr sub_2785B ;~ 0396:24E5
cs=0x396;eip=0x0024ea; 	T(ADD(sp, 8));	// 8401 add     sp, 8 ;~ 0396:24EA
cs=0x396;eip=0x0024ed; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x0C))));	// 8402 mov     ax, [bp-0Ch] ;~ 0396:24ED
cs=0x396;eip=0x0024f0; 	T(ADD(ax, 0x1F));	// 8403 add     ax, 1Fh ;~ 0396:24F0
cs=0x396;eip=0x0024f3; 	X(PUSH(ax));	// 8404 push    ax ;~ 0396:24F3
cs=0x396;eip=0x0024f4; 	T(MOV(ax, 0x0BF));	// 8405 mov     ax, 0BFh ; 'ø' ;~ 0396:24F4
cs=0x396;eip=0x0024f7; 	X(PUSH(ax));	// 8406 push    ax ;~ 0396:24F7
cs=0x396;eip=0x0024f8; 	R(CALLF(sub_1c92b,0));	// 8407 call    sub_1C92B ;~ 0396:24F8
cs=0x396;eip=0x0024fd; 	T(ADD(sp, 4));	// 8408 add     sp, 4 ;~ 0396:24FD
cs=0x396;eip=0x002500; 	T(MOV(ax, 0x0B));	// 8409 mov     ax, 0Bh ;~ 0396:2500
cs=0x396;eip=0x002503; 	X(PUSH(ax));	// 8410 push    ax ;~ 0396:2503
cs=0x396;eip=0x002504; 	T(SUB(ax, ax));	// 8411 sub     ax, ax ;~ 0396:2504
cs=0x396;eip=0x002506; 	X(PUSH(ax));	// 8412 push    ax ;~ 0396:2506
cs=0x396;eip=0x002507; 	R(CALLF(sub_1c8f3,0));	// 8413 call    sub_1C8F3 ;~ 0396:2507
cs=0x396;eip=0x00250c; 	T(ADD(sp, 4));	// 8414 add     sp, 4 ;~ 0396:250C
cs=0x396;eip=0x00250f; 	T(ax = bp-0x1A);	// 8415 lea     ax, [bp-1Ah] ;~ 0396:250F
cs=0x396;eip=0x002512; 	X(PUSH(ax));	// 8416 push    ax ;~ 0396:2512
cs=0x396;eip=0x002513; 	R(CALLF(sub_1c944,0));	// 8417 call    sub_1C944 ;~ 0396:2513
cs=0x396;eip=0x002518; 	T(ADD(sp, 2));	// 8418 add     sp, 2 ;~ 0396:2518
cs=0x396;eip=0x00251b; 	X(INC(*(dw*)(raddr(ss,bp-0x0C))));	// 8419 inc     word ptr [bp-0Ch] ;~ 0396:251B
loc_1445e:
	// 4849 
cs=0x396;eip=0x00251e; 	T(CMP(*(dw*)(raddr(ss,bp-0x1A)), 8));	// 8423 cmp     word ptr [bp-1Ah], 8 ;~ 0396:251E
cs=0x396;eip=0x002522; 	R(JNZ(loc_144a8));	// 8424 jnz     short loc_144A8 ;~ 0396:2522
cs=0x396;eip=0x002524; 	T(CMP(*(dw*)(raddr(ss,bp-0x0C)), 0));	// 8425 cmp     word ptr [bp-0Ch], 0 ;~ 0396:2524
cs=0x396;eip=0x002528; 	R(JLE(loc_144a8));	// 8426 jle     short loc_144A8 ;~ 0396:2528
cs=0x396;eip=0x00252a; 	T(MOV(ax, 0x0B));	// 8427 mov     ax, 0Bh ;~ 0396:252A
cs=0x396;eip=0x00252d; 	X(PUSH(ax));	// 8428 push    ax ;~ 0396:252D
cs=0x396;eip=0x00252e; 	R(CALLF(sub_27031,0));	// 8429 call    far ptr sub_27031 ;~ 0396:252E
cs=0x396;eip=0x002533; 	T(ADD(sp, 2));	// 8430 add     sp, 2 ;~ 0396:2533
cs=0x396;eip=0x002536; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x0C))));	// 8431 mov     ax, [bp-0Ch] ;~ 0396:2536
cs=0x396;eip=0x002539; 	T(MOV(cl, 3));	// 8432 mov     cl, 3 ;~ 0396:2539
cs=0x396;eip=0x00253b; 	T(SHL(ax, cl));	// 8433 shl     ax, cl ;~ 0396:253B
cs=0x396;eip=0x00253d; 	T(ADD(ax, 0x0F8));	// 8434 add     ax, 0F8h ; '¯' ;~ 0396:253D
cs=0x396;eip=0x002540; 	X(MOV(*(dw*)(raddr(ss,bp-2)), ax));	// 8435 mov     [bp-2], ax ;~ 0396:2540
cs=0x396;eip=0x002543; 	T(MOV(ax, 0x0C5));	// 8436 mov     ax, 0C5h ; '≈' ;~ 0396:2543
cs=0x396;eip=0x002546; 	X(PUSH(ax));	// 8437 push    ax ;~ 0396:2546
cs=0x396;eip=0x002547; 	T(MOV(ax, 0x0BE));	// 8438 mov     ax, 0BEh ; 'æ' ;~ 0396:2547
cs=0x396;eip=0x00254a; 	X(PUSH(ax));	// 8439 push    ax ;~ 0396:254A
cs=0x396;eip=0x00254b; 	T(MOV(ax, *(dw*)(raddr(ss,bp-2))));	// 8440 mov     ax, [bp-2] ;~ 0396:254B
cs=0x396;eip=0x00254e; 	T(ADD(ax, 7));	// 8441 add     ax, 7 ;~ 0396:254E
cs=0x396;eip=0x002551; 	X(PUSH(ax));	// 8442 push    ax ;~ 0396:2551
cs=0x396;eip=0x002552; 	X(PUSH(*(dw*)(raddr(ss,bp-2))));	// 8443 push    word ptr [bp-2] ;~ 0396:2552
cs=0x396;eip=0x002555; 	R(CALLF(sub_2785b,0));	// 8444 call    far ptr sub_2785B ;~ 0396:2555
cs=0x396;eip=0x00255a; 	T(ADD(sp, 8));	// 8445 add     sp, 8 ;~ 0396:255A
cs=0x396;eip=0x00255d; 	X(DEC(*(dw*)(raddr(ss,bp-0x0C))));	// 8446 dec     word ptr [bp-0Ch] ;~ 0396:255D
cs=0x396;eip=0x002560; 	T(MOV(bx, *(dw*)(raddr(ss,bp-0x0C))));	// 8447 mov     bx, [bp-0Ch] ;~ 0396:2560
cs=0x396;eip=0x002563; 	X(MOV(*(raddr(ds,bx-0x1586)), 0x20));	// 8448 mov     byte ptr [bx-1586h], 20h ; ' ' ;~ 0396:2563
loc_144a8:
	// 4850 
cs=0x396;eip=0x002568; 	T(CMP(*(dw*)(raddr(ss,bp-0x12)), 1));	// 8452 cmp     word ptr [bp-12h], 1 ;~ 0396:2568
cs=0x396;eip=0x00256c; 	R(JNZ(loc_144b1));	// 8453 jnz     short loc_144B1 ;~ 0396:256C
cs=0x396;eip=0x00256e; 	R(JMP(loc_142d6));	// 8454 jmp     loc_142D6 ;~ 0396:256E
loc_144b1:
	// 4851 
cs=0x396;eip=0x002571; 	T(MOV(ax, 0x0B));	// 8458 mov     ax, 0Bh ;~ 0396:2571
cs=0x396;eip=0x002574; 	X(PUSH(ax));	// 8459 push    ax ;~ 0396:2574
cs=0x396;eip=0x002575; 	R(CALLF(sub_27031,0));	// 8460 call    far ptr sub_27031 ;~ 0396:2575
cs=0x396;eip=0x00257a; 	T(ADD(sp, 2));	// 8461 add     sp, 2 ;~ 0396:257A
cs=0x396;eip=0x00257d; 	T(MOV(ax, 0x0C6));	// 8462 mov     ax, 0C6h ; '∆' ;~ 0396:257D
cs=0x396;eip=0x002580; 	X(PUSH(ax));	// 8463 push    ax ;~ 0396:2580
cs=0x396;eip=0x002581; 	T(MOV(ax, 0x9F));	// 8464 mov     ax, 9Fh ; 'ü' ;~ 0396:2581
cs=0x396;eip=0x002584; 	X(PUSH(ax));	// 8465 push    ax ;~ 0396:2584
cs=0x396;eip=0x002585; 	T(MOV(ax, 0x13E));	// 8466 mov     ax, 13Eh ;~ 0396:2585
cs=0x396;eip=0x002588; 	X(PUSH(ax));	// 8467 push    ax ;~ 0396:2588
cs=0x396;eip=0x002589; 	T(MOV(ax, 1));	// 8468 mov     ax, 1 ;~ 0396:2589
cs=0x396;eip=0x00258c; 	X(PUSH(ax));	// 8469 push    ax ;~ 0396:258C
cs=0x396;eip=0x00258d; 	R(CALLF(sub_2785b,0));	// 8470 call    far ptr sub_2785B ;~ 0396:258D
cs=0x396;eip=0x002592; 	T(ADD(sp, 8));	// 8471 add     sp, 8 ;~ 0396:2592
cs=0x396;eip=0x002595; 	T(MOV(ax, 0x0B));	// 8472 mov     ax, 0Bh ;~ 0396:2595
cs=0x396;eip=0x002598; 	X(PUSH(ax));	// 8473 push    ax ;~ 0396:2598
cs=0x396;eip=0x002599; 	T(SUB(ax, ax));	// 8474 sub     ax, ax ;~ 0396:2599
cs=0x396;eip=0x00259b; 	X(PUSH(ax));	// 8475 push    ax ;~ 0396:259B
cs=0x396;eip=0x00259c; 	R(CALLF(sub_1c8f3,0));	// 8476 call    sub_1C8F3 ;~ 0396:259C
cs=0x396;eip=0x0025a1; 	T(ADD(sp, 4));	// 8477 add     sp, 4 ;~ 0396:25A1
cs=0x396;eip=0x0025a4; 	T(CMP(*(dw*)(raddr(ss,bp-0x18)), 0));	// 8478 cmp     word ptr [bp-18h], 0 ;~ 0396:25A4
cs=0x396;eip=0x0025a8; 	R(JZ(loc_1451c));	// 8479 jz      short loc_1451C ;~ 0396:25A8
cs=0x396;eip=0x0025aa; 	T(SUB(ax, ax));	// 8480 sub     ax, ax ;~ 0396:25AA
cs=0x396;eip=0x0025ac; 	X(MOV(*(dw*)(raddr(ss,bp-0x18)), ax));	// 8481 mov     [bp-18h], ax ;~ 0396:25AC
cs=0x396;eip=0x0025af; 	X(PUSH(ax));	// 8482 push    ax ;~ 0396:25AF
cs=0x396;eip=0x0025b0; 	T(MOV(ax, 0x1E00));	// 8483 mov     ax, 1E00h ;~ 0396:25B0
cs=0x396;eip=0x0025b3; 	X(PUSH(ax));	// 8484 push    ax ;~ 0396:25B3
cs=0x396;eip=0x0025b4; 	X(PUSH(cs));	// 8485 push    cs ;~ 0396:25B4
cs=0x396;eip=0x0025b5; 	R(CALL(sub_139c2,0));	// 8486 call    near ptr sub_139C2 ;~ 0396:25B5
cs=0x396;eip=0x0025b8; 	T(ADD(sp, 4));	// 8487 add     sp, 4 ;~ 0396:25B8
cs=0x396;eip=0x0025bb; 	X(MOV(*(dw*)(raddr(ss,bp-0x18)), ax));	// 8488 mov     [bp-18h], ax ;~ 0396:25BB
cs=0x396;eip=0x0025be; 	T(MOV(al, *(raddr(ss,bp-0x14))));	// 8489 mov     al, [bp-14h] ;~ 0396:25BE
cs=0x396;eip=0x0025c1; 	T(INC(al));	// 8490 inc     al ;~ 0396:25C1
cs=0x396;eip=0x0025c3; 	X(MOV(byte_2bec9, al));	// 8491 mov     byte_2BEC9, al ;~ 0396:25C3
cs=0x396;eip=0x0025c6; 	T(SUB(ax, ax));	// 8492 sub     ax, ax ;~ 0396:25C6
cs=0x396;eip=0x0025c8; 	X(MOV(word_2beda, ax));	// 8493 mov     word_2BEDA, ax ;~ 0396:25C8
cs=0x396;eip=0x0025cb; 	X(PUSH(ax));	// 8494 push    ax ;~ 0396:25CB
cs=0x396;eip=0x0025cc; 	R(CALLF(sub_2714e,0));	// 8495 call    far ptr sub_2714E ;~ 0396:25CC
cs=0x396;eip=0x0025d1; 	T(ADD(sp, 2));	// 8496 add     sp, 2 ;~ 0396:25D1
cs=0x396;eip=0x0025d4; 	X(MOV(*(dw*)(raddr(ss,bp-4)), 1));	// 8497 mov     word ptr [bp-4], 1 ;~ 0396:25D4
cs=0x396;eip=0x0025d9; 	R(JMP(loc_14538));	// 8498 jmp     short loc_14538 ;~ 0396:25D9
loc_1451c:
	// 4852 
cs=0x396;eip=0x0025dc; 	T(SUB(ax, ax));	// 8503 sub     ax, ax ;~ 0396:25DC
cs=0x396;eip=0x0025de; 	X(MOV(*(dw*)(raddr(ss,bp-0x18)), ax));	// 8504 mov     [bp-18h], ax ;~ 0396:25DE
cs=0x396;eip=0x0025e1; 	X(PUSH(ax));	// 8505 push    ax ;~ 0396:25E1
cs=0x396;eip=0x0025e2; 	T(MOV(ax, 0x1DF7));	// 8506 mov     ax, 1DF7h ;~ 0396:25E2
cs=0x396;eip=0x0025e5; 	X(PUSH(ax));	// 8507 push    ax ;~ 0396:25E5
cs=0x396;eip=0x0025e6; 	X(PUSH(cs));	// 8508 push    cs ;~ 0396:25E6
cs=0x396;eip=0x0025e7; 	R(CALL(sub_139c2,0));	// 8509 call    near ptr sub_139C2 ;~ 0396:25E7
cs=0x396;eip=0x0025ea; 	T(ADD(sp, 4));	// 8510 add     sp, 4 ;~ 0396:25EA
cs=0x396;eip=0x0025ed; 	X(MOV(*(dw*)(raddr(ss,bp-0x18)), ax));	// 8511 mov     [bp-18h], ax ;~ 0396:25ED
cs=0x396;eip=0x0025f0; 	T(SUB(ax, ax));	// 8512 sub     ax, ax ;~ 0396:25F0
cs=0x396;eip=0x0025f2; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 8513 mov     [bp-4], ax ;~ 0396:25F2
cs=0x396;eip=0x0025f5; 	X(MOV(byte_2bec9, al));	// 8514 mov     byte_2BEC9, al ;~ 0396:25F5
loc_14538:
	// 4853 
cs=0x396;eip=0x0025f8; 	X(MOV(byte_2becc, 0));	// 8517 mov     byte_2BECC, 0 ;~ 0396:25F8
cs=0x396;eip=0x0025fd; 	X(MOV(*(dw*)(raddr(ss,bp-0x18)), 0));	// 8518 mov     word ptr [bp-18h], 0 ;~ 0396:25FD
loc_14542:
	// 4854 
cs=0x396;eip=0x002602; 	T(CMP(byte_2becc, 0));	// 8521 cmp     byte_2BECC, 0 ;~ 0396:2602
cs=0x396;eip=0x002607; 	R(JNZ(loc_14558));	// 8522 jnz     short loc_14558 ;~ 0396:2607
cs=0x396;eip=0x002609; 	X(PUSH(cs));	// 8523 push    cs ;~ 0396:2609
cs=0x396;eip=0x00260a; 	R(CALL(sub_145c2,0));	// 8524 call    near ptr sub_145C2 ;~ 0396:260A
cs=0x396;eip=0x00260d; 	T(MOV(ax, 2));	// 8525 mov     ax, 2 ;~ 0396:260D
cs=0x396;eip=0x002610; 	X(PUSH(ax));	// 8526 push    ax ;~ 0396:2610
cs=0x396;eip=0x002611; 	X(PUSH(cs));	// 8527 push    cs ;~ 0396:2611
cs=0x396;eip=0x002612; 	R(CALL(sub_13ace,0));	// 8528 call    near ptr sub_13ACE ;~ 0396:2612
cs=0x396;eip=0x002615; 	T(ADD(sp, 2));	// 8529 add     sp, 2 ;~ 0396:2615
loc_14558:
	// 4855 
cs=0x396;eip=0x002618; 	X(INC(*(dw*)(raddr(ss,bp-0x18))));	// 8532 inc     word ptr [bp-18h] ;~ 0396:2618
cs=0x396;eip=0x00261b; 	T(CMP(*(dw*)(raddr(ss,bp-0x18)), 0x12));	// 8533 cmp     word ptr [bp-18h], 12h ;~ 0396:261B
cs=0x396;eip=0x00261f; 	R(JL(loc_14542));	// 8534 jl      short loc_14542 ;~ 0396:261F
cs=0x396;eip=0x002621; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 8535 mov     ax, [bp-4] ;~ 0396:2621
cs=0x396;eip=0x002624; 	X(POP(si));	// 8536 pop     si ;~ 0396:2624
cs=0x396;eip=0x002625; 	T(MOV(sp, bp));	// 8537 mov     sp, bp ;~ 0396:2625
cs=0x396;eip=0x002627; 	X(POP(bp));	// 8538 pop     bp ;~ 0396:2627
cs=0x396;eip=0x002628; 	R(RETF(0));	// 8539 retf ;~ 0396:2628
sub_13ace:
	// 7220 
#undef var_4
#define var_4 -4
	// 7223 var_4           = word ptr -4 ;~ 0396:1B8E
#undef var_2
#define var_2 -2
	// 7224 var_2           = word ptr -2 ;~ 0396:1B8E
#undef arg_0
#define arg_0 6
	// 7225 arg_0           = word ptr  6 ;~ 0396:1B8E
ret_396_1b8e:
	// 4780 
cs=0x396;eip=0x001b8e; 	X(PUSH(bp));	// 7227 push    bp ;~ 0396:1B8E
cs=0x396;eip=0x001b8f; 	T(MOV(bp, sp));	// 7228 mov     bp, sp ;~ 0396:1B8F
cs=0x396;eip=0x001b91; 	T(SUB(sp, 4));	// 7229 sub     sp, 4 ;~ 0396:1B91
cs=0x396;eip=0x001b94; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 1));	// 7230 mov     [bp+var_2], 1 ;~ 0396:1B94
cs=0x396;eip=0x001b99; 	R(JMP(loc_13b15));	// 7231 jmp     short loc_13B15 ;~ 0396:1B99
loc_13adc:
	// 4781 
cs=0x396;eip=0x001b9c; 	T(MOV(ax, 2));	// 7236 mov     ax, 2 ;~ 0396:1B9C
cs=0x396;eip=0x001b9f; 	X(PUSH(ax));	// 7237 push    ax ;~ 0396:1B9F
cs=0x396;eip=0x001ba0; 	R(CALLF(sub_26ffb,0));	// 7238 call    sub_26FFB ;~ 0396:1BA0
cs=0x396;eip=0x001ba5; 	T(ADD(sp, 2));	// 7239 add     sp, 2 ;~ 0396:1BA5
cs=0x396;eip=0x001ba8; 	R(CALLF(sub_10f58,0));	// 7240 call    sub_10F58 ;~ 0396:1BA8
cs=0x396;eip=0x001bad; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 7241 mov     [bp+var_4], ax ;~ 0396:1BAD
cs=0x396;eip=0x001bb0; 	T(ax = bp+var_4);	// 7242 lea     ax, [bp+var_4] ;~ 0396:1BB0
cs=0x396;eip=0x001bb3; 	X(PUSH(ax));	// 7243 push    ax ;~ 0396:1BB3
cs=0x396;eip=0x001bb4; 	R(CALLF(sub_10f80,0));	// 7244 call    sub_10F80 ;~ 0396:1BB4
cs=0x396;eip=0x001bb9; 	T(ADD(sp, 2));	// 7245 add     sp, 2 ;~ 0396:1BB9
cs=0x396;eip=0x001bbc; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 7246 cmp     [bp+var_4], 0 ;~ 0396:1BBC
cs=0x396;eip=0x001bc0; 	R(JZ(loc_13b0c));	// 7247 jz      short loc_13B0C ;~ 0396:1BC0
cs=0x396;eip=0x001bc2; 	T(MOV(al, *(db*)(raddr(ss,bp+var_4))));	// 7248 mov     al, byte ptr [bp+var_4] ;~ 0396:1BC2
cs=0x396;eip=0x001bc5; 	T(SUB(ah, ah));	// 7249 sub     ah, ah ;~ 0396:1BC5
cs=0x396;eip=0x001bc7; 	T(MOV(sp, bp));	// 7250 mov     sp, bp ;~ 0396:1BC7
cs=0x396;eip=0x001bc9; 	X(POP(bp));	// 7251 pop     bp ;~ 0396:1BC9
cs=0x396;eip=0x001bca; 	R(RETF(0));	// 7252 retf ;~ 0396:1BCA
loc_13b0c:
	// 4782 
cs=0x396;eip=0x001bcc; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 7257 cmp     [bp+arg_0], 0 ;~ 0396:1BCC
cs=0x396;eip=0x001bd0; 	R(JZ(loc_13b15));	// 7258 jz      short loc_13B15 ;~ 0396:1BD0
cs=0x396;eip=0x001bd2; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 7259 inc     [bp+var_2] ;~ 0396:1BD2
loc_13b15:
	// 4783 
cs=0x396;eip=0x001bd5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 7263 mov     ax, [bp+arg_0] ;~ 0396:1BD5
cs=0x396;eip=0x001bd8; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 7264 cmp     [bp+var_2], ax ;~ 0396:1BD8
cs=0x396;eip=0x001bdb; 	R(JNZ(loc_13adc));	// 7265 jnz     short loc_13ADC ;~ 0396:1BDB
cs=0x396;eip=0x001bdd; 	T(MOV(sp, bp));	// 7266 mov     sp, bp ;~ 0396:1BDD
cs=0x396;eip=0x001bdf; 	X(POP(bp));	// 7267 pop     bp ;~ 0396:1BDF
cs=0x396;eip=0x001be0; 	R(RETF(0));	// 7268 retf ;~ 0396:1BE0
sub_13b22:
	// 7278 
cs=0x396;eip=0x001be2; 	X(PUSH(bp));	// 7280 push    bp ;~ 0396:1BE2
ret_396_1be3:
	// 4784 
cs=0x396;eip=0x001be3; 	T(MOV(bp, sp));	// 7281 mov     bp, sp ;~ 0396:1BE3
cs=0x396;eip=0x001be5; 	T(SUB(sp, 2));	// 7282 sub     sp, 2 ;~ 0396:1BE5
cs=0x396;eip=0x001be8; 	T(SUB(ax, ax));	// 7283 sub     ax, ax ;~ 0396:1BE8
cs=0x396;eip=0x001bea; 	X(MOV(word_2beda, ax));	// 7284 mov     word_2BEDA, ax ;~ 0396:1BEA
cs=0x396;eip=0x001bed; 	X(PUSH(ax));	// 7285 push    ax ;~ 0396:1BED
cs=0x396;eip=0x001bee; 	R(CALLF(sub_2714e,0));	// 7286 call    far ptr sub_2714E ;~ 0396:1BEE
cs=0x396;eip=0x001bf3; 	T(ADD(sp, 2));	// 7287 add     sp, 2 ;~ 0396:1BF3
cs=0x396;eip=0x001bf6; 	R(CALLF(sub_1ca85,0));	// 7288 call    sub_1CA85 ;~ 0396:1BF6
cs=0x396;eip=0x001bfb; 	T(MOV(sp, bp));	// 7289 mov     sp, bp ;~ 0396:1BFB
cs=0x396;eip=0x001bfd; 	X(POP(bp));	// 7290 pop     bp ;~ 0396:1BFD
cs=0x396;eip=0x001bfe; 	R(RETF(0));	// 7291 retf ;~ 0396:1BFE
sub_13b40:
	// 7301 
#undef var_2
#define var_2 -2
	// 7304 var_2           = word ptr -2 ;~ 0396:1C00
ret_396_1c00:
	// 4785 
cs=0x396;eip=0x001c00; 	X(PUSH(bp));	// 7306 push    bp ;~ 0396:1C00
cs=0x396;eip=0x001c01; 	T(MOV(bp, sp));	// 7307 mov     bp, sp ;~ 0396:1C01
cs=0x396;eip=0x001c03; 	T(SUB(sp, 2));	// 7308 sub     sp, 2 ;~ 0396:1C03
cs=0x396;eip=0x001c06; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 7309 mov     [bp+var_2], 0 ;~ 0396:1C06
loc_13b4b:
	// 4786 
cs=0x396;eip=0x001c0b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 7312 mov     bx, [bp+var_2] ;~ 0396:1C0B
cs=0x396;eip=0x001c0e; 	X(MOV(*(raddr(ds,bx-0x1878)), 0));	// 7313 mov     byte ptr [bx-1878h], 0 ;~ 0396:1C0E
cs=0x396;eip=0x001c13; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 7314 inc     [bp+var_2] ;~ 0396:1C13
cs=0x396;eip=0x001c16; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x20));	// 7315 cmp     [bp+var_2], 20h ; ' ' ;~ 0396:1C16
cs=0x396;eip=0x001c1a; 	R(JL(loc_13b4b));	// 7316 jl      short loc_13B4B ;~ 0396:1C1A
cs=0x396;eip=0x001c1c; 	T(CMP(word_3a178, 0x13));	// 7317 cmp     word_3A178, 13h ;~ 0396:1C1C
cs=0x396;eip=0x001c21; 	R(JZ(loc_13b6f));	// 7318 jz      short loc_13B6F ;~ 0396:1C21
cs=0x396;eip=0x001c23; 	T(MOV(ax, 0x0E788));	// 7319 mov     ax, 0E788h ;~ 0396:1C23
cs=0x396;eip=0x001c26; 	X(PUSH(ax));	// 7320 push    ax ;~ 0396:1C26
cs=0x396;eip=0x001c27; 	R(CALLF(sub_28f32,0));	// 7321 call    far ptr sub_28F32 ;~ 0396:1C27
cs=0x396;eip=0x001c2c; 	T(ADD(sp, 2));	// 7322 add     sp, 2 ;~ 0396:1C2C
loc_13b6f:
	// 4787 
cs=0x396;eip=0x001c2f; 	T(MOV(sp, bp));	// 7325 mov     sp, bp ;~ 0396:1C2F
cs=0x396;eip=0x001c31; 	X(POP(bp));	// 7326 pop     bp ;~ 0396:1C31
cs=0x396;eip=0x001c32; 	R(RETF(0));	// 7327 retf ;~ 0396:1C32
sub_13b74:
	// 7336 
cs=0x396;eip=0x001c34; 	T(CMP(word_3a178, 0x13));	// 7338 cmp     word_3A178, 13h ;~ 0396:1C34
ret_396_1c39:
	// 4788 
cs=0x396;eip=0x001c39; 	R(JZ(locret_13b87));	// 7339 jz      short locret_13B87 ;~ 0396:1C39
cs=0x396;eip=0x001c3b; 	T(MOV(ax, 0x0E6A));	// 7340 mov     ax, 0E6Ah ;~ 0396:1C3B
cs=0x396;eip=0x001c3e; 	X(PUSH(ax));	// 7341 push    ax ;~ 0396:1C3E
cs=0x396;eip=0x001c3f; 	R(CALLF(sub_28f32,0));	// 7342 call    far ptr sub_28F32 ;~ 0396:1C3F
cs=0x396;eip=0x001c44; 	T(ADD(sp, 2));	// 7343 add     sp, 2 ;~ 0396:1C44
locret_13b87:
	// 4789 
cs=0x396;eip=0x001c47; 	R(RETF(0));	// 7346 retf ;~ 0396:1C47
sub_13b88:
	// 7353 
cs=0x396;eip=0x001c48; 	T(CMP(word_3a178, 0x13));	// 7355 cmp     word_3A178, 13h ;~ 0396:1C48
ret_396_1c4d:
	// 4790 
cs=0x396;eip=0x001c4d; 	R(JNZ(locret_13b94));	// 7356 jnz     short locret_13B94 ;~ 0396:1C4D
cs=0x396;eip=0x001c4f; 	R(CALLF(sub_1cdea,0));	// 7357 call    sub_1CDEA ;~ 0396:1C4F
locret_13b94:
	// 4791 
cs=0x396;eip=0x001c54; 	R(RETF(0));	// 7360 retf ;~ 0396:1C54
sub_13b96:
	// 7369 
cs=0x396;eip=0x001c56; 	T(CMP(word_3a178, 0x13));	// 7371 cmp     word_3A178, 13h ;~ 0396:1C56
ret_396_1c5b:
	// 4792 
cs=0x396;eip=0x001c5b; 	R(JNZ(locret_13ba2));	// 7372 jnz     short locret_13BA2 ;~ 0396:1C5B
cs=0x396;eip=0x001c5d; 	R(CALLF(sub_1cdd6,0));	// 7373 call    sub_1CDD6 ;~ 0396:1C5D
locret_13ba2:
	// 4793 
cs=0x396;eip=0x001c62; 	R(RETF(0));	// 7376 retf ;~ 0396:1C62
sub_13ba4:
	// 7385 
cs=0x396;eip=0x001c64; 	T(CMP(word_3a178, 0x13));	// 7386 cmp     word_3A178, 13h ;~ 0396:1C64
ret_396_1c69:
	// 4794 
cs=0x396;eip=0x001c69; 	R(JNZ(locret_13bb0));	// 7387 jnz     short locret_13BB0 ;~ 0396:1C69
cs=0x396;eip=0x001c6b; 	R(CALLF(sub_1cda5,0));	// 7388 call    sub_1CDA5 ;~ 0396:1C6B
locret_13bb0:
	// 4795 
cs=0x396;eip=0x001c70; 	R(RETF(0));	// 7391 retf ;~ 0396:1C70
sub_13bb2:
	// 7400 
cs=0x396;eip=0x001c72; 	T(CMP(word_3a178, 0x13));	// 7402 cmp     word_3A178, 13h ;~ 0396:1C72
ret_396_1c77:
	// 4796 
cs=0x396;eip=0x001c77; 	R(JNZ(locret_13bbe));	// 7403 jnz     short locret_13BBE ;~ 0396:1C77
cs=0x396;eip=0x001c79; 	R(CALLF(sub_1cd1b,0));	// 7404 call    sub_1CD1B ;~ 0396:1C79
locret_13bbe:
	// 4797 
cs=0x396;eip=0x001c7e; 	R(RETF(0));	// 7407 retf ;~ 0396:1C7E
sub_13bc0:
	// 7416 
cs=0x396;eip=0x001c80; 	T(CMP(word_3a178, 0x13));	// 7417 cmp     word_3A178, 13h ;~ 0396:1C80
ret_396_1c85:
	// 4798 
cs=0x396;eip=0x001c85; 	R(JNZ(locret_13bcc));	// 7418 jnz     short locret_13BCC ;~ 0396:1C85
cs=0x396;eip=0x001c87; 	R(CALLF(sub_1cd77,0));	// 7419 call    sub_1CD77 ;~ 0396:1C87
locret_13bcc:
	// 4799 
cs=0x396;eip=0x001c8c; 	R(RETF(0));	// 7422 retf ;~ 0396:1C8C
sub_13bce:
	// 7431 
cs=0x396;eip=0x001c8e; 	T(CMP(word_3a178, 0x13));	// 7432 cmp     word_3A178, 13h ;~ 0396:1C8E
ret_396_1c93:
	// 4800 
cs=0x396;eip=0x001c93; 	R(JNZ(locret_13bda));	// 7433 jnz     short locret_13BDA ;~ 0396:1C93
cs=0x396;eip=0x001c95; 	R(CALLF(sub_1cd49,0));	// 7434 call    sub_1CD49 ;~ 0396:1C95
locret_13bda:
	// 4801 
cs=0x396;eip=0x001c9a; 	R(RETF(0));	// 7437 retf ;~ 0396:1C9A
sub_13bdc:
	// 7447 
#undef var_2
#define var_2 -2
	// 7449 var_2           = word ptr -2 ;~ 0396:1C9C
ret_396_1c9c:
	// 4802 
cs=0x396;eip=0x001c9c; 	X(PUSH(bp));	// 7451 push    bp ;~ 0396:1C9C
cs=0x396;eip=0x001c9d; 	T(MOV(bp, sp));	// 7452 mov     bp, sp ;~ 0396:1C9D
cs=0x396;eip=0x001c9f; 	T(SUB(sp, 2));	// 7453 sub     sp, 2 ;~ 0396:1C9F
cs=0x396;eip=0x001ca2; 	X(PUSH(si));	// 7454 push    si ;~ 0396:1CA2
cs=0x396;eip=0x001ca3; 	T(MOV(ax, word_3a178));	// 7455 mov     ax, word_3A178 ;~ 0396:1CA3
cs=0x396;eip=0x001ca6; 	T(CMP(ax, 9));	// 7456 cmp     ax, 9 ;~ 0396:1CA6
cs=0x396;eip=0x001ca9; 	R(JZ(loc_13bf6));	// 7457 jz      short loc_13BF6 ;~ 0396:1CA9
cs=0x396;eip=0x001cab; 	T(CMP(ax, 0x0D));	// 7458 cmp     ax, 0Dh ;~ 0396:1CAB
cs=0x396;eip=0x001cae; 	R(JZ(loc_13c1f));	// 7459 jz      short loc_13C1F ;~ 0396:1CAE
cs=0x396;eip=0x001cb0; 	X(POP(si));	// 7460 pop     si ;~ 0396:1CB0
cs=0x396;eip=0x001cb1; 	T(MOV(sp, bp));	// 7461 mov     sp, bp ;~ 0396:1CB1
cs=0x396;eip=0x001cb3; 	X(POP(bp));	// 7462 pop     bp ;~ 0396:1CB3
cs=0x396;eip=0x001cb4; 	R(RETF(0));	// 7463 retf ;~ 0396:1CB4
loc_13bf6:
	// 4803 
cs=0x396;eip=0x001cb6; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 7468 mov     [bp+var_2], 0 ;~ 0396:1CB6
loc_13bfb:
	// 4804 
cs=0x396;eip=0x001cbb; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2))));	// 7471 mov     si, [bp+var_2] ;~ 0396:1CBB
cs=0x396;eip=0x001cbe; 	T(SHL(si, 1));	// 7472 shl     si, 1 ;~ 0396:1CBE
cs=0x396;eip=0x001cc0; 	T(ADD(si, 0x0E6A));	// 7473 add     si, 0E6Ah ;~ 0396:1CC0
cs=0x396;eip=0x001cc4; 	T(MOV(al, *(raddr(ds,si))));	// 7474 mov     al, [si] ;~ 0396:1CC4
cs=0x396;eip=0x001cc6; 	T(SUB(ah, ah));	// 7475 sub     ah, ah ;~ 0396:1CC6
cs=0x396;eip=0x001cc8; 	T(AND(ax, 0x10));	// 7476 and     ax, 10h ;~ 0396:1CC8
cs=0x396;eip=0x001ccb; 	T(SHR(ax, 1));	// 7477 shr     ax, 1 ;~ 0396:1CCB
cs=0x396;eip=0x001ccd; 	T(MOV(cx, *(dw*)(raddr(ds,si))));	// 7478 mov     cx, [si] ;~ 0396:1CCD
cs=0x396;eip=0x001ccf; 	T(AND(cx, 7));	// 7479 and     cx, 7 ;~ 0396:1CCF
cs=0x396;eip=0x001cd2; 	T(OR(ax, cx));	// 7480 or      ax, cx ;~ 0396:1CD2
cs=0x396;eip=0x001cd4; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 7481 mov     [si], ax ;~ 0396:1CD4
cs=0x396;eip=0x001cd6; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 7482 inc     [bp+var_2] ;~ 0396:1CD6
cs=0x396;eip=0x001cd9; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x10));	// 7483 cmp     [bp+var_2], 10h ;~ 0396:1CD9
cs=0x396;eip=0x001cdd; 	R(JL(loc_13bfb));	// 7484 jl      short loc_13BFB ;~ 0396:1CDD
loc_13c1f:
	// 4805 
cs=0x396;eip=0x001cdf; 	T(MOV(ax, 0x0E6A));	// 7487 mov     ax, 0E6Ah ;~ 0396:1CDF
cs=0x396;eip=0x001ce2; 	X(PUSH(ax));	// 7488 push    ax ;~ 0396:1CE2
cs=0x396;eip=0x001ce3; 	R(CALLF(sub_28f32,0));	// 7489 call    far ptr sub_28F32 ;~ 0396:1CE3
cs=0x396;eip=0x001ce8; 	T(ADD(sp, 2));	// 7490 add     sp, 2 ;~ 0396:1CE8
cs=0x396;eip=0x001ceb; 	X(POP(si));	// 7491 pop     si ;~ 0396:1CEB
cs=0x396;eip=0x001cec; 	T(MOV(sp, bp));	// 7492 mov     sp, bp ;~ 0396:1CEC
cs=0x396;eip=0x001cee; 	X(POP(bp));	// 7493 pop     bp ;~ 0396:1CEE
cs=0x396;eip=0x001cef; 	R(RETF(0));	// 7494 retf ;~ 0396:1CEF
sub_13c30:
	// 7501 
cs=0x396;eip=0x001cf0; 	T(CMP(byte_2bedc, 0));	// 7502 cmp     byte_2BEDC, 0 ;~ 0396:1CF0
ret_396_1cf5:
	// 4806 
cs=0x396;eip=0x001cf5; 	R(JNZ(loc_13c5c));	// 7503 jnz     short loc_13C5C ;~ 0396:1CF5
cs=0x396;eip=0x001cf7; 	X(PUSH(word_2bed6));	// 7504 push    word_2BED6 ;~ 0396:1CF7
cs=0x396;eip=0x001cfb; 	R(CALLF(sub_2bcde,0));	// 7505 call    sub_2BCDE ;~ 0396:1CFB
cs=0x396;eip=0x001d00; 	T(ADD(sp, 2));	// 7506 add     sp, 2 ;~ 0396:1D00
cs=0x396;eip=0x001d03; 	X(PUSH(word_2bed6));	// 7507 push    word_2BED6 ;~ 0396:1D03
cs=0x396;eip=0x001d07; 	R(CALLF(sub_2aeac,0));	// 7508 call    sub_2AEAC ;~ 0396:1D07
cs=0x396;eip=0x001d0c; 	T(ADD(sp, 2));	// 7509 add     sp, 2 ;~ 0396:1D0C
cs=0x396;eip=0x001d0f; 	T(MOV(al, byte_38423));	// 7510 mov     al, byte_38423 ;~ 0396:1D0F
cs=0x396;eip=0x001d12; 	T(SUB(ah, ah));	// 7511 sub     ah, ah ;~ 0396:1D12
cs=0x396;eip=0x001d14; 	X(MOV(word_2bed6, ax));	// 7512 mov     word_2BED6, ax ;~ 0396:1D14
cs=0x396;eip=0x001d17; 	R(CALLF(sub_1d25f,0));	// 7513 call    sub_1D25F ;~ 0396:1D17
loc_13c5c:
	// 4807 
cs=0x396;eip=0x001d1c; 	X(MOV(byte_2bedc, 1));	// 7516 mov     byte_2BEDC, 1 ;~ 0396:1D1C
cs=0x396;eip=0x001d21; 	R(RETF(0));	// 7517 retf ;~ 0396:1D21
sub_13c62:
	// 7525 
#undef arg_0
#define arg_0 6
	// 7528 arg_0           = byte ptr  6 ;~ 0396:1D22
ret_396_1d22:
	// 4808 
cs=0x396;eip=0x001d22; 	X(PUSH(bp));	// 7530 push    bp ;~ 0396:1D22
cs=0x396;eip=0x001d23; 	T(MOV(bp, sp));	// 7531 mov     bp, sp ;~ 0396:1D23
cs=0x396;eip=0x001d25; 	T(MOV(ax, word_2bec6));	// 7532 mov     ax, word_2BEC6 ;~ 0396:1D25
cs=0x396;eip=0x001d28; 	T(SUB(ax, 1));	// 7533 sub     ax, 1           ; switch 6 cases ;~ 0396:1D28
cs=0x396;eip=0x001d2b; 	T(CMP(ax, 5));	// 7534 cmp     ax, 5 ;~ 0396:1D2B
cs=0x396;eip=0x001d2e; 	R(JBE(loc_13c73));	// 7535 jbe     short loc_13C73 ;~ 0396:1D2E
cs=0x396;eip=0x001d30; 	R(JMP(def_13c76));	// 7536 jmp     def_13C76       ; jumptable 00013C76 default case ;~ 0396:1D30
loc_13c73:
	// 4809 
cs=0x396;eip=0x001d33; 	T(ADD(ax, ax));	// 7540 add     ax, ax ;~ 0396:1D33
cs=0x396;eip=0x001d35; 	T(XCHG(ax, bx));	// 7541 xchg    ax, bx ;~ 0396:1D35
	cs=seg_offset(seg001);
cs=0x396;eip=0x001d36; __disp=*(dw*)(((db*)&jpt_13c76)+bx);
	R(JMP(__dispatch_call));	// 7542 jmp     cs:jpt_13C76[bx] ; switch jump ;~ 0396:1D36
loc_13c7c:
	// 4810 
cs=0x396;eip=0x001d3c; 	T(CMP(byte_2bedc, 1));	// 7548 cmp     byte_2BEDC, 1   ; jumptable 00013C76 case 4 ;~ 0396:1D3C
cs=0x396;eip=0x001d41; 	R(JZ(loc_13c86));	// 7549 jz      short loc_13C86 ;~ 0396:1D41
cs=0x396;eip=0x001d43; 	R(JMP(def_13c76));	// 7550 jmp     def_13C76       ; jumptable 00013C76 default case ;~ 0396:1D43
loc_13c86:
	// 4811 
cs=0x396;eip=0x001d46; 	T(CMP(byte_2bece, 0));	// 7554 cmp     byte_2BECE, 0 ;~ 0396:1D46
cs=0x396;eip=0x001d4b; 	R(JZ(loc_13c90));	// 7555 jz      short loc_13C90 ;~ 0396:1D4B
cs=0x396;eip=0x001d4d; 	R(JMP(def_13c76));	// 7556 jmp     def_13C76       ; jumptable 00013C76 default case ;~ 0396:1D4D
loc_13c90:
	// 4812 
cs=0x396;eip=0x001d50; 	T(SUB(ax, ax));	// 7560 sub     ax, ax ;~ 0396:1D50
cs=0x396;eip=0x001d52; 	X(PUSH(ax));	// 7561 push    ax ;~ 0396:1D52
cs=0x396;eip=0x001d53; 	X(PUSH(ax));	// 7562 push    ax ;~ 0396:1D53
cs=0x396;eip=0x001d54; 	X(PUSH(word_3a632));	// 7563 push    word_3A632 ;~ 0396:1D54
cs=0x396;eip=0x001d58; 	X(PUSH(word_3a630));	// 7564 push    word_3A630 ;~ 0396:1D58
cs=0x396;eip=0x001d5c; 	R(CALLF(sub_2ad2b,0));	// 7565 call    sub_2AD2B ;~ 0396:1D5C
cs=0x396;eip=0x001d61; 	T(ADD(sp, 8));	// 7566 add     sp, 8 ;~ 0396:1D61
cs=0x396;eip=0x001d64; 	X(POP(bp));	// 7567 pop     bp ;~ 0396:1D64
cs=0x396;eip=0x001d65; 	R(RETF(0));	// 7568 retf ;~ 0396:1D65
loc_13ca6:
	// 4813 
cs=0x396;eip=0x001d66; 	T(CMP(byte_2bedc, 1));	// 7573 cmp     byte_2BEDC, 1   ; jumptable 00013C76 cases 1-3,6 ;~ 0396:1D66
cs=0x396;eip=0x001d6b; 	R(JZ(loc_13cb0));	// 7574 jz      short loc_13CB0 ;~ 0396:1D6B
cs=0x396;eip=0x001d6d; 	R(JMP(def_13c76));	// 7575 jmp     def_13C76       ; jumptable 00013C76 default case ;~ 0396:1D6D
loc_13cb0:
	// 4814 
cs=0x396;eip=0x001d70; 	T(CMP(byte_2bece, 0));	// 7579 cmp     byte_2BECE, 0 ;~ 0396:1D70
cs=0x396;eip=0x001d75; 	R(JZ(loc_13cba));	// 7580 jz      short loc_13CBA ;~ 0396:1D75
cs=0x396;eip=0x001d77; 	R(JMP(def_13c76));	// 7581 jmp     def_13C76       ; jumptable 00013C76 default case ;~ 0396:1D77
loc_13cba:
	// 4815 
cs=0x396;eip=0x001d7a; 	T(MOV(ax, 0x0FAC));	// 7585 mov     ax, 0FACh ;~ 0396:1D7A
cs=0x396;eip=0x001d7d; 	X(PUSH(ax));	// 7586 push    ax ;~ 0396:1D7D
cs=0x396;eip=0x001d7e; 	T(MOV(ax, 0x0A9C));	// 7587 mov     ax, 0A9Ch ;~ 0396:1D7E
cs=0x396;eip=0x001d81; 	X(PUSH(ax));	// 7588 push    ax ;~ 0396:1D81
cs=0x396;eip=0x001d82; 	R(CALLF(sub_29b46,0));	// 7589 call    sub_29B46 ;~ 0396:1D82
cs=0x396;eip=0x001d87; 	T(ADD(sp, 4));	// 7590 add     sp, 4 ;~ 0396:1D87
cs=0x396;eip=0x001d8a; 	T(MOV(ax, 0x0FB6));	// 7591 mov     ax, 0FB6h ;~ 0396:1D8A
cs=0x396;eip=0x001d8d; 	X(PUSH(ax));	// 7592 push    ax ;~ 0396:1D8D
cs=0x396;eip=0x001d8e; 	T(MOV(ax, 0x0A9A));	// 7593 mov     ax, 0A9Ah ;~ 0396:1D8E
cs=0x396;eip=0x001d91; 	X(PUSH(ax));	// 7594 push    ax ;~ 0396:1D91
cs=0x396;eip=0x001d92; 	R(CALLF(sub_29708,0));	// 7595 call    sub_29708 ;~ 0396:1D92
cs=0x396;eip=0x001d97; 	T(ADD(sp, 4));	// 7596 add     sp, 4 ;~ 0396:1D97
cs=0x396;eip=0x001d9a; 	X(MOV(word_3a3e6, ax));	// 7597 mov     word_3A3E6, ax ;~ 0396:1D9A
cs=0x396;eip=0x001d9d; 	T(OR(ax, ax));	// 7598 or      ax, ax ;~ 0396:1D9D
cs=0x396;eip=0x001d9f; 	R(JNZ(loc_13ce4));	// 7599 jnz     short loc_13CE4 ;~ 0396:1D9F
cs=0x396;eip=0x001da1; 	R(JMP(def_13c76));	// 7600 jmp     def_13C76       ; jumptable 00013C76 default case ;~ 0396:1DA1
loc_13ce4:
	// 4816 
cs=0x396;eip=0x001da4; 	X(PUSH(ax));	// 7604 push    ax ;~ 0396:1DA4
cs=0x396;eip=0x001da5; 	R(CALLF(sub_29640,0));	// 7605 call    sub_29640 ;~ 0396:1DA5
cs=0x396;eip=0x001daa; 	T(ADD(sp, 2));	// 7606 add     sp, 2 ;~ 0396:1DAA
cs=0x396;eip=0x001dad; 	X(PUSH(cs));	// 7607 push    cs ;~ 0396:1DAD
cs=0x396;eip=0x001dae; 	R(CALL(sub_13d88,0));	// 7608 call    near ptr sub_13D88 ;~ 0396:1DAE
cs=0x396;eip=0x001db1; 	X(POP(bp));	// 7609 pop     bp ;~ 0396:1DB1
cs=0x396;eip=0x001db2; 	R(RETF(0));	// 7610 retf ;~ 0396:1DB2
loc_13cf4:
	// 4817 
cs=0x396;eip=0x001db4; 	T(CMP(byte_2bece, 0));	// 7616 cmp     byte_2BECE, 0   ; jumptable 00013C76 case 5 ;~ 0396:1DB4
cs=0x396;eip=0x001db9; 	R(JNZ(loc_13d09));	// 7617 jnz     short loc_13D09 ;~ 0396:1DB9
cs=0x396;eip=0x001dbb; 	T(CMP(word_2becf, 1));	// 7618 cmp     word_2BECF, 1 ;~ 0396:1DBB
cs=0x396;eip=0x001dc0; 	R(JNZ(loc_13d09));	// 7619 jnz     short loc_13D09 ;~ 0396:1DC0
cs=0x396;eip=0x001dc2; 	T(CMP(byte_2bedc, 1));	// 7620 cmp     byte_2BEDC, 1 ;~ 0396:1DC2
cs=0x396;eip=0x001dc7; 	R(JZ(loc_13d1e));	// 7621 jz      short loc_13D1E ;~ 0396:1DC7
loc_13d09:
	// 4818 
cs=0x396;eip=0x001dc9; 	T(CMP(byte_2bedc, 1));	// 7625 cmp     byte_2BEDC, 1 ;~ 0396:1DC9
cs=0x396;eip=0x001dce; 	R(JNZ(loc_13d76));	// 7626 jnz     short loc_13D76 ;~ 0396:1DCE
cs=0x396;eip=0x001dd0; 	T(CMP(byte_2bece, 0));	// 7627 cmp     byte_2BECE, 0 ;~ 0396:1DD0
cs=0x396;eip=0x001dd5; 	R(JNZ(loc_13d76));	// 7628 jnz     short loc_13D76 ;~ 0396:1DD5
cs=0x396;eip=0x001dd7; 	T(CMP(word_2bed6, 0));	// 7629 cmp     word_2BED6, 0 ;~ 0396:1DD7
cs=0x396;eip=0x001ddc; 	R(JZ(loc_13d76));	// 7630 jz      short loc_13D76 ;~ 0396:1DDC
loc_13d1e:
	// 4819 
cs=0x396;eip=0x001dde; 	T(SUB(ax, ax));	// 7633 sub     ax, ax ;~ 0396:1DDE
cs=0x396;eip=0x001de0; 	X(PUSH(ax));	// 7634 push    ax ;~ 0396:1DE0
cs=0x396;eip=0x001de1; 	R(CALLF(sub_2ad94,0));	// 7635 call    sub_2AD94 ;~ 0396:1DE1
cs=0x396;eip=0x001de6; 	T(ADD(sp, 2));	// 7636 add     sp, 2 ;~ 0396:1DE6
cs=0x396;eip=0x001de9; 	T(MOV(ax, 0x0FB9));	// 7637 mov     ax, 0FB9h ;~ 0396:1DE9
cs=0x396;eip=0x001dec; 	X(PUSH(ax));	// 7638 push    ax ;~ 0396:1DEC
cs=0x396;eip=0x001ded; 	T(MOV(ax, 0x0AE4));	// 7639 mov     ax, 0AE4h ;~ 0396:1DED
cs=0x396;eip=0x001df0; 	X(PUSH(ax));	// 7640 push    ax ;~ 0396:1DF0
cs=0x396;eip=0x001df1; 	R(CALLF(sub_29b46,0));	// 7641 call    sub_29B46 ;~ 0396:1DF1
cs=0x396;eip=0x001df6; 	T(ADD(sp, 4));	// 7642 add     sp, 4 ;~ 0396:1DF6
cs=0x396;eip=0x001df9; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 7643 mov     al, [bp+arg_0] ;~ 0396:1DF9
cs=0x396;eip=0x001dfc; 	T(ADD(al, 0x41));	// 7644 add     al, 41h ; 'A' ;~ 0396:1DFC
cs=0x396;eip=0x001dfe; 	X(MOV(byte_2c923, al));	// 7645 mov     byte_2C923, al ;~ 0396:1DFE
cs=0x396;eip=0x001e01; 	X(PUSH(word_3a5bc));	// 7646 push    word_3A5BC ;~ 0396:1E01
cs=0x396;eip=0x001e05; 	X(PUSH(word_3a5ba));	// 7647 push    word_3A5BA ;~ 0396:1E05
cs=0x396;eip=0x001e09; 	T(MOV(ax, 0x0ADA));	// 7648 mov     ax, 0ADAh ;~ 0396:1E09
cs=0x396;eip=0x001e0c; 	X(PUSH(ax));	// 7649 push    ax ;~ 0396:1E0C
cs=0x396;eip=0x001e0d; 	R(CALLF(sub_10ee0,0));	// 7650 call    sub_10EE0 ;~ 0396:1E0D
cs=0x396;eip=0x001e12; 	T(ADD(sp, 6));	// 7651 add     sp, 6 ;~ 0396:1E12
cs=0x396;eip=0x001e15; 	T(CMP(byte_352cb, 0));	// 7652 cmp     byte_352CB, 0 ;~ 0396:1E15
cs=0x396;eip=0x001e1a; 	R(JNZ(loc_13d70));	// 7653 jnz     short loc_13D70 ;~ 0396:1E1A
cs=0x396;eip=0x001e1c; 	T(SUB(ax, ax));	// 7654 sub     ax, ax ;~ 0396:1E1C
cs=0x396;eip=0x001e1e; 	X(PUSH(ax));	// 7655 push    ax ;~ 0396:1E1E
cs=0x396;eip=0x001e1f; 	X(PUSH(ax));	// 7656 push    ax ;~ 0396:1E1F
cs=0x396;eip=0x001e20; 	X(PUSH(word_3a5bc));	// 7657 push    word_3A5BC ;~ 0396:1E20
cs=0x396;eip=0x001e24; 	X(PUSH(word_3a5ba));	// 7658 push    word_3A5BA ;~ 0396:1E24
cs=0x396;eip=0x001e28; 	R(CALLF(sub_2ad2b,0));	// 7659 call    sub_2AD2B ;~ 0396:1E28
cs=0x396;eip=0x001e2d; 	T(ADD(sp, 8));	// 7660 add     sp, 8 ;~ 0396:1E2D
loc_13d70:
	// 4820 
cs=0x396;eip=0x001e30; 	T(MOV(ax, 1));	// 7663 mov     ax, 1 ;~ 0396:1E30
cs=0x396;eip=0x001e33; 	X(POP(bp));	// 7664 pop     bp ;~ 0396:1E33
cs=0x396;eip=0x001e34; 	R(RETF(0));	// 7665 retf ;~ 0396:1E34
loc_13d76:
	// 4821 
cs=0x396;eip=0x001e36; 	T(SUB(ax, ax));	// 7671 sub     ax, ax ;~ 0396:1E36
cs=0x396;eip=0x001e38; 	X(POP(bp));	// 7672 pop     bp ;~ 0396:1E38
cs=0x396;eip=0x001e39; 	R(RETF(0));	// 7673 retf ;~ 0396:1E39
def_13c76:
	// 4822 
cs=0x396;eip=0x001e46; 	X(POP(bp));	// 7685 pop     bp              ; jumptable 00013C76 default case ;~ 0396:1E46
cs=0x396;eip=0x001e47; 	R(RETF(0));	// 7686 retf ;~ 0396:1E47
sub_13d88:
	// 7693 
cs=0x396;eip=0x001e48; 	T(CMP(byte_2bedc, 1));	// 7694 cmp     byte_2BEDC, 1 ;~ 0396:1E48
ret_396_1e4d:
	// 4823 
cs=0x396;eip=0x001e4d; 	R(JNZ(locret_13dd9));	// 7695 jnz     short locret_13DD9 ;~ 0396:1E4D
cs=0x396;eip=0x001e4f; 	T(CMP(byte_2bece, 0));	// 7696 cmp     byte_2BECE, 0 ;~ 0396:1E4F
cs=0x396;eip=0x001e54; 	R(JNZ(locret_13dd9));	// 7697 jnz     short locret_13DD9 ;~ 0396:1E54
cs=0x396;eip=0x001e56; 	T(SUB(ax, ax));	// 7698 sub     ax, ax ;~ 0396:1E56
cs=0x396;eip=0x001e58; 	X(PUSH(ax));	// 7699 push    ax ;~ 0396:1E58
cs=0x396;eip=0x001e59; 	R(CALLF(sub_2ad94,0));	// 7700 call    sub_2AD94 ;~ 0396:1E59
cs=0x396;eip=0x001e5e; 	T(ADD(sp, 2));	// 7701 add     sp, 2 ;~ 0396:1E5E
cs=0x396;eip=0x001e61; 	T(MOV(ax, 0x0FBE));	// 7702 mov     ax, 0FBEh ;~ 0396:1E61
cs=0x396;eip=0x001e64; 	X(PUSH(ax));	// 7703 push    ax ;~ 0396:1E64
cs=0x396;eip=0x001e65; 	T(MOV(ax, 0x0A9C));	// 7704 mov     ax, 0A9Ch ;~ 0396:1E65
cs=0x396;eip=0x001e68; 	X(PUSH(ax));	// 7705 push    ax ;~ 0396:1E68
cs=0x396;eip=0x001e69; 	R(CALLF(sub_29b46,0));	// 7706 call    sub_29B46 ;~ 0396:1E69
cs=0x396;eip=0x001e6e; 	T(ADD(sp, 4));	// 7707 add     sp, 4 ;~ 0396:1E6E
cs=0x396;eip=0x001e71; 	X(PUSH(word_3a632));	// 7708 push    word_3A632 ;~ 0396:1E71
cs=0x396;eip=0x001e75; 	X(PUSH(word_3a630));	// 7709 push    word_3A630 ;~ 0396:1E75
cs=0x396;eip=0x001e79; 	T(MOV(ax, 0x0A9A));	// 7710 mov     ax, 0A9Ah ;~ 0396:1E79
cs=0x396;eip=0x001e7c; 	X(PUSH(ax));	// 7711 push    ax ;~ 0396:1E7C
cs=0x396;eip=0x001e7d; 	R(CALLF(sub_10ee0,0));	// 7712 call    sub_10EE0 ;~ 0396:1E7D
cs=0x396;eip=0x001e82; 	T(ADD(sp, 6));	// 7713 add     sp, 6 ;~ 0396:1E82
cs=0x396;eip=0x001e85; 	T(SUB(ax, ax));	// 7714 sub     ax, ax ;~ 0396:1E85
cs=0x396;eip=0x001e87; 	X(PUSH(ax));	// 7715 push    ax ;~ 0396:1E87
cs=0x396;eip=0x001e88; 	X(PUSH(ax));	// 7716 push    ax ;~ 0396:1E88
cs=0x396;eip=0x001e89; 	X(PUSH(word_3a632));	// 7717 push    word_3A632 ;~ 0396:1E89
cs=0x396;eip=0x001e8d; 	X(PUSH(word_3a630));	// 7718 push    word_3A630 ;~ 0396:1E8D
cs=0x396;eip=0x001e91; 	R(CALLF(sub_2ad2b,0));	// 7719 call    sub_2AD2B ;~ 0396:1E91
cs=0x396;eip=0x001e96; 	T(ADD(sp, 8));	// 7720 add     sp, 8 ;~ 0396:1E96
locret_13dd9:
	// 4824 
cs=0x396;eip=0x001e99; 	R(RETF(0));	// 7724 retf ;~ 0396:1E99
sub_13dda:
	// 7731 
cs=0x396;eip=0x001e9a; 	T(CMP(byte_2bedc, 1));	// 7733 cmp     byte_2BEDC, 1 ;~ 0396:1E9A
ret_396_1e9f:
	// 4825 
cs=0x396;eip=0x001e9f; 	R(JNZ(loc_13dfc));	// 7734 jnz     short loc_13DFC ;~ 0396:1E9F
cs=0x396;eip=0x001ea1; 	T(SUB(ax, ax));	// 7735 sub     ax, ax ;~ 0396:1EA1
cs=0x396;eip=0x001ea3; 	X(PUSH(ax));	// 7736 push    ax ;~ 0396:1EA3
cs=0x396;eip=0x001ea4; 	R(CALLF(sub_1d2d0,0));	// 7737 call    sub_1D2D0 ;~ 0396:1EA4
cs=0x396;eip=0x001ea9; 	T(ADD(sp, 2));	// 7738 add     sp, 2 ;~ 0396:1EA9
cs=0x396;eip=0x001eac; 	T(SUB(ax, ax));	// 7739 sub     ax, ax ;~ 0396:1EAC
cs=0x396;eip=0x001eae; 	X(PUSH(ax));	// 7740 push    ax ;~ 0396:1EAE
cs=0x396;eip=0x001eaf; 	R(CALLF(sub_2ad94,0));	// 7741 call    sub_2AD94 ;~ 0396:1EAF
cs=0x396;eip=0x001eb4; 	T(ADD(sp, 2));	// 7742 add     sp, 2 ;~ 0396:1EB4
cs=0x396;eip=0x001eb7; 	R(CALLF(sub_1d28f,0));	// 7743 call    sub_1D28F ;~ 0396:1EB7
loc_13dfc:
	// 4826 
cs=0x396;eip=0x001ebc; 	X(MOV(byte_2bedc, 0));	// 7746 mov     byte_2BEDC, 0 ;~ 0396:1EBC
cs=0x396;eip=0x001ec1; 	R(RETF(0));	// 7747 retf ;~ 0396:1EC1
sub_13e02:
	// 7755 
cs=0x396;eip=0x001ec2; 	X(PUSH(bp));	// 7756 push    bp ;~ 0396:1EC2
ret_396_1ec3:
	// 4827 
cs=0x396;eip=0x001ec3; 	T(MOV(bp, sp));	// 7757 mov     bp, sp ;~ 0396:1EC3
cs=0x396;eip=0x001ec5; 	T(SUB(sp, 0x1A));	// 7758 sub     sp, 1Ah ;~ 0396:1EC5
cs=0x396;eip=0x001ec8; 	X(PUSH(si));	// 7759 push    si ;~ 0396:1EC8
cs=0x396;eip=0x001ec9; 	T(CMP(byte_2bec8, 0));	// 7760 cmp     byte_2BEC8, 0 ;~ 0396:1EC9
	// 7761 nop ;~ 0396:1ECE
	// 7762 nop ;~ 0396:1ECF
cs=0x396;eip=0x001ed0; 	T(SUB(ax, ax));	// 7763 sub     ax, ax ;~ 0396:1ED0
cs=0x396;eip=0x001ed2; 	X(POP(si));	// 7764 pop     si ;~ 0396:1ED2
cs=0x396;eip=0x001ed3; 	T(MOV(sp, bp));	// 7765 mov     sp, bp ;~ 0396:1ED3
cs=0x396;eip=0x001ed5; 	X(POP(bp));	// 7766 pop     bp ;~ 0396:1ED5
cs=0x396;eip=0x001ed6; 	R(RETF(0));	// 7767 retf ;~ 0396:1ED6
sub_1456a:
	// 8547 
#undef var_4
#define var_4 -4
	// 8550 var_4           = word ptr -4 ;~ 0396:262A
#undef var_2
#define var_2 -2
	// 8551 var_2           = word ptr -2 ;~ 0396:262A
#undef arg_0
#define arg_0 6
	// 8552 arg_0           = word ptr  6 ;~ 0396:262A
#undef arg_2
#define arg_2 8
	// 8553 arg_2           = word ptr  8 ;~ 0396:262A
ret_396_262a:
	// 4856 
cs=0x396;eip=0x00262a; 	X(PUSH(bp));	// 8555 push    bp ;~ 0396:262A
cs=0x396;eip=0x00262b; 	T(MOV(bp, sp));	// 8556 mov     bp, sp ;~ 0396:262B
cs=0x396;eip=0x00262d; 	T(SUB(sp, 4));	// 8557 sub     sp, 4 ;~ 0396:262D
cs=0x396;eip=0x002630; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 8558 mov     ax, [bp+arg_0] ;~ 0396:2630
cs=0x396;eip=0x002633; 	T(CWD);	// 8559 cwd ;~ 0396:2633
cs=0x396;eip=0x002634; 	T(MOV(cx, 6));	// 8560 mov     cx, 6 ;~ 0396:2634
cs=0x396;eip=0x002637; 	T(IDIV2(cx));	// 8561 idiv    cx ;~ 0396:2637
cs=0x396;eip=0x002639; 	T(MOV(cl, 6));	// 8562 mov     cl, 6 ;~ 0396:2639
cs=0x396;eip=0x00263b; 	T(SHL(ax, cl));	// 8563 shl     ax, cl ;~ 0396:263B
cs=0x396;eip=0x00263d; 	T(ADD(ax, 0x80));	// 8564 add     ax, 80h ; 'Ä' ;~ 0396:263D
cs=0x396;eip=0x002640; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8565 mov     [bp+var_2], ax ;~ 0396:2640
cs=0x396;eip=0x002643; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 8566 mov     ax, [bp+arg_0] ;~ 0396:2643
cs=0x396;eip=0x002646; 	T(CWD);	// 8567 cwd ;~ 0396:2646
cs=0x396;eip=0x002647; 	T(MOV(cx, 6));	// 8568 mov     cx, 6 ;~ 0396:2647
cs=0x396;eip=0x00264a; 	T(IDIV2(cx));	// 8569 idiv    cx ;~ 0396:264A
cs=0x396;eip=0x00264c; 	T(MOV(ax, dx));	// 8570 mov     ax, dx ;~ 0396:264C
cs=0x396;eip=0x00264e; 	T(MOV(cx, 0x18));	// 8571 mov     cx, 18h ;~ 0396:264E
cs=0x396;eip=0x002651; 	T(IMUL1_2(cx));	// 8572 imul    cx ;~ 0396:2651
cs=0x396;eip=0x002653; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8573 mov     [bp+var_4], ax ;~ 0396:2653
cs=0x396;eip=0x002656; 	T(SUB(ax, ax));	// 8574 sub     ax, ax ;~ 0396:2656
cs=0x396;eip=0x002658; 	X(PUSH(ax));	// 8575 push    ax ;~ 0396:2658
cs=0x396;eip=0x002659; 	T(MOV(ax, 1));	// 8576 mov     ax, 1 ;~ 0396:2659
cs=0x396;eip=0x00265c; 	X(PUSH(ax));	// 8577 push    ax ;~ 0396:265C
cs=0x396;eip=0x00265d; 	T(MOV(ax, 0x0BF));	// 8578 mov     ax, 0BFh ; 'ø' ;~ 0396:265D
cs=0x396;eip=0x002660; 	X(PUSH(ax));	// 8579 push    ax ;~ 0396:2660
cs=0x396;eip=0x002661; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 8580 push    [bp+arg_2] ;~ 0396:2661
cs=0x396;eip=0x002664; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 8581 mov     ax, [bp+var_4] ;~ 0396:2664
cs=0x396;eip=0x002667; 	T(ADD(ax, 0x17));	// 8582 add     ax, 17h ;~ 0396:2667
cs=0x396;eip=0x00266a; 	X(PUSH(ax));	// 8583 push    ax ;~ 0396:266A
cs=0x396;eip=0x00266b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 8584 push    [bp+var_4] ;~ 0396:266B
cs=0x396;eip=0x00266e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 8585 mov     ax, [bp+var_2] ;~ 0396:266E
cs=0x396;eip=0x002671; 	T(ADD(ax, 0x3F));	// 8586 add     ax, 3Fh ; '?' ;~ 0396:2671
cs=0x396;eip=0x002674; 	X(PUSH(ax));	// 8587 push    ax ;~ 0396:2674
cs=0x396;eip=0x002675; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8588 push    [bp+var_2] ;~ 0396:2675
cs=0x396;eip=0x002678; 	R(CALLF(sub_28183,0));	// 8589 call    far ptr sub_28183 ;~ 0396:2678
cs=0x396;eip=0x00267d; 	T(MOV(sp, bp));	// 8590 mov     sp, bp ;~ 0396:267D
cs=0x396;eip=0x00267f; 	X(POP(bp));	// 8591 pop     bp ;~ 0396:267F
cs=0x396;eip=0x002680; 	R(RETF(0));	// 8592 retf ;~ 0396:2680
sub_145c2:
	// 8601 
cs=0x396;eip=0x002682; 	X(PUSH(si));	// 8603 push    si ;~ 0396:2682
ret_396_2683:
	// 4857 
cs=0x396;eip=0x002683; 	T(MOV(al, byte_2c803));	// 8604 mov     al, byte_2C803 ;~ 0396:2683
cs=0x396;eip=0x002686; 	T(SUB(ah, ah));	// 8605 sub     ah, ah ;~ 0396:2686
cs=0x396;eip=0x002688; 	T(MOV(cx, ax));	// 8606 mov     cx, ax ;~ 0396:2688
cs=0x396;eip=0x00268a; 	T(SHL(ax, 1));	// 8607 shl     ax, 1 ;~ 0396:268A
cs=0x396;eip=0x00268c; 	T(SHL(ax, 1));	// 8608 shl     ax, 1 ;~ 0396:268C
cs=0x396;eip=0x00268e; 	T(ADD(ax, cx));	// 8609 add     ax, cx ;~ 0396:268E
cs=0x396;eip=0x002690; 	T(SHL(ax, 1));	// 8610 shl     ax, 1 ;~ 0396:2690
cs=0x396;eip=0x002692; 	T(MOV(si, ax));	// 8611 mov     si, ax ;~ 0396:2692
cs=0x396;eip=0x002694; 	T(SUB(ax, ax));	// 8612 sub     ax, ax ;~ 0396:2694
cs=0x396;eip=0x002696; 	X(PUSH(ax));	// 8613 push    ax ;~ 0396:2696
cs=0x396;eip=0x002697; 	T(MOV(ax, 1));	// 8614 mov     ax, 1 ;~ 0396:2697
cs=0x396;eip=0x00269a; 	X(PUSH(ax));	// 8615 push    ax ;~ 0396:269A
cs=0x396;eip=0x00269b; 	T(MOV(ax, 0x2E));	// 8616 mov     ax, 2Eh ; '.' ;~ 0396:269B
cs=0x396;eip=0x00269e; 	X(PUSH(ax));	// 8617 push    ax ;~ 0396:269E
cs=0x396;eip=0x00269f; 	T(MOV(ax, 0x0A0));	// 8618 mov     ax, 0A0h ; '†' ;~ 0396:269F
cs=0x396;eip=0x0026a2; 	X(PUSH(ax));	// 8619 push    ax ;~ 0396:26A2
cs=0x396;eip=0x0026a3; 	T(ax = si+9);	// 8620 lea     ax, [si+9] ;~ 0396:26A3
cs=0x396;eip=0x0026a6; 	X(PUSH(ax));	// 8621 push    ax ;~ 0396:26A6
cs=0x396;eip=0x0026a7; 	X(PUSH(si));	// 8622 push    si ;~ 0396:26A7
cs=0x396;eip=0x0026a8; 	T(MOV(ax, 0x27));	// 8623 mov     ax, 27h ; ''' ;~ 0396:26A8
cs=0x396;eip=0x0026ab; 	X(PUSH(ax));	// 8624 push    ax ;~ 0396:26AB
cs=0x396;eip=0x0026ac; 	T(SUB(ax, ax));	// 8625 sub     ax, ax ;~ 0396:26AC
cs=0x396;eip=0x0026ae; 	X(PUSH(ax));	// 8626 push    ax ;~ 0396:26AE
cs=0x396;eip=0x0026af; 	R(CALLF(sub_28183,0));	// 8627 call    far ptr sub_28183 ;~ 0396:26AF
cs=0x396;eip=0x0026b4; 	T(ADD(sp, 0x10));	// 8628 add     sp, 10h ;~ 0396:26B4
cs=0x396;eip=0x0026b7; 	T(MOV(al, byte_2c803));	// 8629 mov     al, byte_2C803 ;~ 0396:26B7
cs=0x396;eip=0x0026ba; 	T(SUB(ah, ah));	// 8630 sub     ah, ah ;~ 0396:26BA
cs=0x396;eip=0x0026bc; 	T(MOV(cx, ax));	// 8631 mov     cx, ax ;~ 0396:26BC
cs=0x396;eip=0x0026be; 	T(SHL(ax, 1));	// 8632 shl     ax, 1 ;~ 0396:26BE
cs=0x396;eip=0x0026c0; 	T(SHL(ax, 1));	// 8633 shl     ax, 1 ;~ 0396:26C0
cs=0x396;eip=0x0026c2; 	T(ADD(ax, cx));	// 8634 add     ax, cx ;~ 0396:26C2
cs=0x396;eip=0x0026c4; 	T(SHL(ax, 1));	// 8635 shl     ax, 1 ;~ 0396:26C4
cs=0x396;eip=0x0026c6; 	T(MOV(si, ax));	// 8636 mov     si, ax ;~ 0396:26C6
cs=0x396;eip=0x0026c8; 	T(SUB(ax, ax));	// 8637 sub     ax, ax ;~ 0396:26C8
cs=0x396;eip=0x0026ca; 	X(PUSH(ax));	// 8638 push    ax ;~ 0396:26CA
cs=0x396;eip=0x0026cb; 	T(MOV(ax, 1));	// 8639 mov     ax, 1 ;~ 0396:26CB
cs=0x396;eip=0x0026ce; 	X(PUSH(ax));	// 8640 push    ax ;~ 0396:26CE
cs=0x396;eip=0x0026cf; 	T(MOV(ax, 0x2E));	// 8641 mov     ax, 2Eh ; '.' ;~ 0396:26CF
cs=0x396;eip=0x0026d2; 	X(PUSH(ax));	// 8642 push    ax ;~ 0396:26D2
cs=0x396;eip=0x0026d3; 	T(MOV(ax, 0x0F8));	// 8643 mov     ax, 0F8h ; '¯' ;~ 0396:26D3
cs=0x396;eip=0x0026d6; 	X(PUSH(ax));	// 8644 push    ax ;~ 0396:26D6
cs=0x396;eip=0x0026d7; 	T(ax = si+9);	// 8645 lea     ax, [si+9] ;~ 0396:26D7
cs=0x396;eip=0x0026da; 	X(PUSH(ax));	// 8646 push    ax ;~ 0396:26DA
cs=0x396;eip=0x0026db; 	X(PUSH(si));	// 8647 push    si ;~ 0396:26DB
cs=0x396;eip=0x0026dc; 	T(MOV(ax, 0x77));	// 8648 mov     ax, 77h ; 'w' ;~ 0396:26DC
cs=0x396;eip=0x0026df; 	X(PUSH(ax));	// 8649 push    ax ;~ 0396:26DF
cs=0x396;eip=0x0026e0; 	T(MOV(ax, 0x58));	// 8650 mov     ax, 58h ; 'X' ;~ 0396:26E0
cs=0x396;eip=0x0026e3; 	X(PUSH(ax));	// 8651 push    ax ;~ 0396:26E3
cs=0x396;eip=0x0026e4; 	R(CALLF(sub_28183,0));	// 8652 call    far ptr sub_28183 ;~ 0396:26E4
cs=0x396;eip=0x0026e9; 	T(ADD(sp, 0x10));	// 8653 add     sp, 10h ;~ 0396:26E9
cs=0x396;eip=0x0026ec; 	X(INC(byte_2c803));	// 8654 inc     byte_2C803 ;~ 0396:26EC
cs=0x396;eip=0x0026f0; 	T(CMP(byte_2c803, 9));	// 8655 cmp     byte_2C803, 9 ;~ 0396:26F0
cs=0x396;eip=0x0026f5; 	R(JC(loc_1463c));	// 8656 jb      short loc_1463C ;~ 0396:26F5
cs=0x396;eip=0x0026f7; 	X(MOV(byte_2c803, 0));	// 8657 mov     byte_2C803, 0 ;~ 0396:26F7
loc_1463c:
	// 4858 
cs=0x396;eip=0x0026fc; 	X(POP(si));	// 8660 pop     si ;~ 0396:26FC
cs=0x396;eip=0x0026fd; 	R(RETF(0));	// 8661 retf ;~ 0396:26FD
sub_1463e:
	// 8669 
#undef var_2
#define var_2 -2
	// 8672 var_2           = word ptr -2 ;~ 0396:26FE
ret_396_26fe:
	// 4859 
cs=0x396;eip=0x0026fe; 	X(PUSH(bp));	// 8674 push    bp ;~ 0396:26FE
cs=0x396;eip=0x0026ff; 	T(MOV(bp, sp));	// 8675 mov     bp, sp ;~ 0396:26FF
cs=0x396;eip=0x002701; 	T(SUB(sp, 2));	// 8676 sub     sp, 2 ;~ 0396:2701
loc_14644:
	// 4860 
cs=0x396;eip=0x002704; 	T(MOV(ax, 0x13));	// 8679 mov     ax, 13h ;~ 0396:2704
cs=0x396;eip=0x002707; 	X(PUSH(ax));	// 8680 push    ax ;~ 0396:2707
cs=0x396;eip=0x002708; 	R(CALLF(sub_1179c,0));	// 8681 call    sub_1179C ;~ 0396:2708
cs=0x396;eip=0x00270d; 	T(ADD(sp, 2));	// 8682 add     sp, 2 ;~ 0396:270D
cs=0x396;eip=0x002710; 	T(CMP(byte_2d740, 0x42));	// 8683 cmp     byte_2D740, 42h ; 'B' ;~ 0396:2710
cs=0x396;eip=0x002715; 	R(JA(loc_14663));	// 8684 ja      short loc_14663 ;~ 0396:2715
cs=0x396;eip=0x002717; 	T(MOV(ax, 0x10));	// 8685 mov     ax, 10h ;~ 0396:2717
cs=0x396;eip=0x00271a; 	X(PUSH(ax));	// 8686 push    ax ;~ 0396:271A
cs=0x396;eip=0x00271b; 	R(CALLF(sub_1179c,0));	// 8687 call    sub_1179C ;~ 0396:271B
cs=0x396;eip=0x002720; 	T(ADD(sp, 2));	// 8688 add     sp, 2 ;~ 0396:2720
loc_14663:
	// 4861 
cs=0x396;eip=0x002723; 	X(PUSH(cs));	// 8691 push    cs ;~ 0396:2723
cs=0x396;eip=0x002724; 	R(CALL(sub_147ee,0));	// 8692 call    near ptr sub_147EE ;~ 0396:2724
cs=0x396;eip=0x002727; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8693 mov     [bp+var_2], ax ;~ 0396:2727
cs=0x396;eip=0x00272a; 	T(OR(ax, ax));	// 8694 or      ax, ax ;~ 0396:272A
cs=0x396;eip=0x00272c; 	R(JNZ(loc_14644));	// 8695 jnz     short loc_14644 ;~ 0396:272C
cs=0x396;eip=0x00272e; 	X(PUSH(cs));	// 8696 push    cs ;~ 0396:272E
cs=0x396;eip=0x00272f; 	R(CALL(sub_14e4e,0));	// 8697 call    near ptr sub_14E4E ;~ 0396:272F
cs=0x396;eip=0x002732; 	T(MOV(sp, bp));	// 8698 mov     sp, bp ;~ 0396:2732
cs=0x396;eip=0x002734; 	X(POP(bp));	// 8699 pop     bp ;~ 0396:2734
cs=0x396;eip=0x002735; 	R(RETF(0));	// 8700 retf ;~ 0396:2735
sub_14676:
	// 8708 
#undef var_2
#define var_2 -2
	// 8711 var_2           = word ptr -2 ;~ 0396:2736
ret_396_2736:
	// 4862 
cs=0x396;eip=0x002736; 	X(PUSH(bp));	// 8713 push    bp ;~ 0396:2736
cs=0x396;eip=0x002737; 	T(MOV(bp, sp));	// 8714 mov     bp, sp ;~ 0396:2737
cs=0x396;eip=0x002739; 	T(SUB(sp, 2));	// 8715 sub     sp, 2 ;~ 0396:2739
cs=0x396;eip=0x00273c; 	X(PUSH(cs));	// 8716 push    cs ;~ 0396:273C
cs=0x396;eip=0x00273d; 	R(CALL(sub_14752,0));	// 8717 call    near ptr sub_14752 ;~ 0396:273D
cs=0x396;eip=0x002740; 	T(MOV(ax, 0x102E));	// 8718 mov     ax, 102Eh ;~ 0396:2740
cs=0x396;eip=0x002743; 	X(PUSH(ax));	// 8719 push    ax ;~ 0396:2743
cs=0x396;eip=0x002744; 	T(MOV(ax, 0x0AAA));	// 8720 mov     ax, 0AAAh ;~ 0396:2744
cs=0x396;eip=0x002747; 	X(PUSH(ax));	// 8721 push    ax ;~ 0396:2747
cs=0x396;eip=0x002748; 	R(CALLF(sub_29708,0));	// 8722 call    sub_29708 ;~ 0396:2748
cs=0x396;eip=0x00274d; 	T(ADD(sp, 4));	// 8723 add     sp, 4 ;~ 0396:274D
cs=0x396;eip=0x002750; 	X(MOV(word_3a3e6, ax));	// 8724 mov     word_3A3E6, ax ;~ 0396:2750
cs=0x396;eip=0x002753; 	T(OR(ax, ax));	// 8725 or      ax, ax ;~ 0396:2753
cs=0x396;eip=0x002755; 	R(JNZ(loc_1469a));	// 8726 jnz     short loc_1469A ;~ 0396:2755
cs=0x396;eip=0x002757; 	R(JMP(loc_14744));	// 8727 jmp     loc_14744 ;~ 0396:2757
loc_1469a:
	// 4863 
cs=0x396;eip=0x00275a; 	X(PUSH(ax));	// 8731 push    ax ;~ 0396:275A
cs=0x396;eip=0x00275b; 	T(MOV(ax, 0x12));	// 8732 mov     ax, 12h ;~ 0396:275B
cs=0x396;eip=0x00275e; 	X(PUSH(ax));	// 8733 push    ax ;~ 0396:275E
cs=0x396;eip=0x00275f; 	T(MOV(ax, 1));	// 8734 mov     ax, 1 ;~ 0396:275F
cs=0x396;eip=0x002762; 	X(PUSH(ax));	// 8735 push    ax ;~ 0396:2762
cs=0x396;eip=0x002763; 	T(MOV(ax, 0x0A78));	// 8736 mov     ax, 0A78h ;~ 0396:2763
cs=0x396;eip=0x002766; 	X(PUSH(ax));	// 8737 push    ax ;~ 0396:2766
cs=0x396;eip=0x002767; 	R(CALLF(sub_29926,0));	// 8738 call    sub_29926 ;~ 0396:2767
cs=0x396;eip=0x00276c; 	T(ADD(sp, 8));	// 8739 add     sp, 8 ;~ 0396:276C
cs=0x396;eip=0x00276f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8740 mov     [bp+var_2], ax ;~ 0396:276F
cs=0x396;eip=0x002772; 	X(PUSH(word_3a3e6));	// 8741 push    word_3A3E6 ;~ 0396:2772
cs=0x396;eip=0x002776; 	T(MOV(ax, 0x54));	// 8742 mov     ax, 54h ; 'T' ;~ 0396:2776
cs=0x396;eip=0x002779; 	X(PUSH(ax));	// 8743 push    ax ;~ 0396:2779
cs=0x396;eip=0x00277a; 	T(MOV(ax, 1));	// 8744 mov     ax, 1 ;~ 0396:277A
cs=0x396;eip=0x00277d; 	X(PUSH(ax));	// 8745 push    ax ;~ 0396:277D
cs=0x396;eip=0x00277e; 	T(MOV(ax, 0x9E0));	// 8746 mov     ax, 9E0h ;~ 0396:277E
cs=0x396;eip=0x002781; 	X(PUSH(ax));	// 8747 push    ax ;~ 0396:2781
cs=0x396;eip=0x002782; 	R(CALLF(sub_29926,0));	// 8748 call    sub_29926 ;~ 0396:2782
cs=0x396;eip=0x002787; 	T(ADD(sp, 8));	// 8749 add     sp, 8 ;~ 0396:2787
cs=0x396;eip=0x00278a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8750 mov     [bp+var_2], ax ;~ 0396:278A
cs=0x396;eip=0x00278d; 	X(PUSH(word_3a3e6));	// 8751 push    word_3A3E6 ;~ 0396:278D
cs=0x396;eip=0x002791; 	T(MOV(ax, 0x40));	// 8752 mov     ax, 40h ; '@' ;~ 0396:2791
cs=0x396;eip=0x002794; 	X(PUSH(ax));	// 8753 push    ax ;~ 0396:2794
cs=0x396;eip=0x002795; 	T(MOV(ax, 1));	// 8754 mov     ax, 1 ;~ 0396:2795
cs=0x396;eip=0x002798; 	X(PUSH(ax));	// 8755 push    ax ;~ 0396:2798
cs=0x396;eip=0x002799; 	T(MOV(ax, 0x0A34));	// 8756 mov     ax, 0A34h ;~ 0396:2799
cs=0x396;eip=0x00279c; 	X(PUSH(ax));	// 8757 push    ax ;~ 0396:279C
cs=0x396;eip=0x00279d; 	R(CALLF(sub_29926,0));	// 8758 call    sub_29926 ;~ 0396:279D
cs=0x396;eip=0x0027a2; 	T(ADD(sp, 8));	// 8759 add     sp, 8 ;~ 0396:27A2
cs=0x396;eip=0x0027a5; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8760 mov     [bp+var_2], ax ;~ 0396:27A5
cs=0x396;eip=0x0027a8; 	X(PUSH(word_3a3e6));	// 8761 push    word_3A3E6 ;~ 0396:27A8
cs=0x396;eip=0x0027ac; 	T(MOV(ax, 4));	// 8762 mov     ax, 4 ;~ 0396:27AC
cs=0x396;eip=0x0027af; 	X(PUSH(ax));	// 8763 push    ax ;~ 0396:27AF
cs=0x396;eip=0x0027b0; 	T(MOV(ax, 2));	// 8764 mov     ax, 2 ;~ 0396:27B0
cs=0x396;eip=0x0027b3; 	X(PUSH(ax));	// 8765 push    ax ;~ 0396:27B3
cs=0x396;eip=0x0027b4; 	T(MOV(ax, 0x0AFE));	// 8766 mov     ax, 0AFEh ;~ 0396:27B4
cs=0x396;eip=0x0027b7; 	X(PUSH(ax));	// 8767 push    ax ;~ 0396:27B7
cs=0x396;eip=0x0027b8; 	R(CALLF(sub_29926,0));	// 8768 call    sub_29926 ;~ 0396:27B8
cs=0x396;eip=0x0027bd; 	T(ADD(sp, 8));	// 8769 add     sp, 8 ;~ 0396:27BD
cs=0x396;eip=0x0027c0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8770 mov     [bp+var_2], ax ;~ 0396:27C0
cs=0x396;eip=0x0027c3; 	X(PUSH(word_3a3e6));	// 8771 push    word_3A3E6 ;~ 0396:27C3
cs=0x396;eip=0x0027c7; 	T(MOV(ax, 4));	// 8772 mov     ax, 4 ;~ 0396:27C7
cs=0x396;eip=0x0027ca; 	X(PUSH(ax));	// 8773 push    ax ;~ 0396:27CA
cs=0x396;eip=0x0027cb; 	T(MOV(ax, 1));	// 8774 mov     ax, 1 ;~ 0396:27CB
cs=0x396;eip=0x0027ce; 	X(PUSH(ax));	// 8775 push    ax ;~ 0396:27CE
cs=0x396;eip=0x0027cf; 	T(MOV(ax, 0x0B06));	// 8776 mov     ax, 0B06h ;~ 0396:27CF
cs=0x396;eip=0x0027d2; 	X(PUSH(ax));	// 8777 push    ax ;~ 0396:27D2
cs=0x396;eip=0x0027d3; 	R(CALLF(sub_29926,0));	// 8778 call    sub_29926 ;~ 0396:27D3
cs=0x396;eip=0x0027d8; 	T(ADD(sp, 8));	// 8779 add     sp, 8 ;~ 0396:27D8
cs=0x396;eip=0x0027db; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8780 mov     [bp+var_2], ax ;~ 0396:27DB
cs=0x396;eip=0x0027de; 	X(PUSH(word_3a3e6));	// 8781 push    word_3A3E6 ;~ 0396:27DE
cs=0x396;eip=0x0027e2; 	T(MOV(ax, 1));	// 8782 mov     ax, 1 ;~ 0396:27E2
cs=0x396;eip=0x0027e5; 	X(PUSH(ax));	// 8783 push    ax ;~ 0396:27E5
cs=0x396;eip=0x0027e6; 	X(PUSH(ax));	// 8784 push    ax ;~ 0396:27E6
cs=0x396;eip=0x0027e7; 	T(MOV(ax, 0x9C2));	// 8785 mov     ax, 9C2h ;~ 0396:27E7
cs=0x396;eip=0x0027ea; 	X(PUSH(ax));	// 8786 push    ax ;~ 0396:27EA
cs=0x396;eip=0x0027eb; 	R(CALLF(sub_29926,0));	// 8787 call    sub_29926 ;~ 0396:27EB
cs=0x396;eip=0x0027f0; 	T(ADD(sp, 8));	// 8788 add     sp, 8 ;~ 0396:27F0
cs=0x396;eip=0x0027f3; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8789 mov     [bp+var_2], ax ;~ 0396:27F3
cs=0x396;eip=0x0027f6; 	X(PUSH(word_3a3e6));	// 8790 push    word_3A3E6 ;~ 0396:27F6
cs=0x396;eip=0x0027fa; 	R(CALLF(sub_29640,0));	// 8791 call    sub_29640 ;~ 0396:27FA
cs=0x396;eip=0x0027ff; 	T(MOV(sp, bp));	// 8792 mov     sp, bp ;~ 0396:27FF
cs=0x396;eip=0x002801; 	X(POP(bp));	// 8793 pop     bp ;~ 0396:2801
cs=0x396;eip=0x002802; 	R(RETF(0));	// 8794 retf ;~ 0396:2802
loc_14744:
	// 4864 
cs=0x396;eip=0x002804; 	T(MOV(ax, 8));	// 8799 mov     ax, 8 ;~ 0396:2804
cs=0x396;eip=0x002807; 	X(PUSH(ax));	// 8800 push    ax ;~ 0396:2807
cs=0x396;eip=0x002808; 	R(CALLF(sub_1179c,0));	// 8801 call    sub_1179C ;~ 0396:2808
cs=0x396;eip=0x00280d; 	T(MOV(sp, bp));	// 8802 mov     sp, bp ;~ 0396:280D
cs=0x396;eip=0x00280f; 	X(POP(bp));	// 8803 pop     bp ;~ 0396:280F
cs=0x396;eip=0x002810; 	R(RETF(0));	// 8804 retf ;~ 0396:2810
sub_14752:
	// 8814 
#undef var_4
#define var_4 -4
	// 8817 var_4           = word ptr -4 ;~ 0396:2812
#undef var_2
#define var_2 -2
	// 8818 var_2           = word ptr -2 ;~ 0396:2812
ret_396_2812:
	// 4865 
cs=0x396;eip=0x002812; 	X(PUSH(bp));	// 8820 push    bp ;~ 0396:2812
cs=0x396;eip=0x002813; 	T(MOV(bp, sp));	// 8821 mov     bp, sp ;~ 0396:2813
cs=0x396;eip=0x002815; 	T(SUB(sp, 4));	// 8822 sub     sp, 4 ;~ 0396:2815
cs=0x396;eip=0x002818; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 8823 mov     [bp+var_4], 0 ;~ 0396:2818
loc_1475d:
	// 4866 
cs=0x396;eip=0x00281d; 	T(MOV(ax, 0x1032));	// 8826 mov     ax, 1032h ;~ 0396:281D
cs=0x396;eip=0x002820; 	X(PUSH(ax));	// 8827 push    ax ;~ 0396:2820
cs=0x396;eip=0x002821; 	T(MOV(ax, 0x0AAA));	// 8828 mov     ax, 0AAAh ;~ 0396:2821
cs=0x396;eip=0x002824; 	X(PUSH(ax));	// 8829 push    ax ;~ 0396:2824
cs=0x396;eip=0x002825; 	R(CALLF(sub_29708,0));	// 8830 call    sub_29708 ;~ 0396:2825
cs=0x396;eip=0x00282a; 	T(ADD(sp, 4));	// 8831 add     sp, 4 ;~ 0396:282A
cs=0x396;eip=0x00282d; 	X(MOV(word_3a3e6, ax));	// 8832 mov     word_3A3E6, ax ;~ 0396:282D
cs=0x396;eip=0x002830; 	T(OR(ax, ax));	// 8833 or      ax, ax ;~ 0396:2830
cs=0x396;eip=0x002832; 	R(JZ(loc_147b9));	// 8834 jz      short loc_147B9 ;~ 0396:2832
cs=0x396;eip=0x002834; 	X(PUSH(ax));	// 8835 push    ax ;~ 0396:2834
cs=0x396;eip=0x002835; 	T(MOV(ax, 0x12));	// 8836 mov     ax, 12h ;~ 0396:2835
cs=0x396;eip=0x002838; 	X(PUSH(ax));	// 8837 push    ax ;~ 0396:2838
cs=0x396;eip=0x002839; 	T(MOV(ax, 1));	// 8838 mov     ax, 1 ;~ 0396:2839
cs=0x396;eip=0x00283c; 	X(PUSH(ax));	// 8839 push    ax ;~ 0396:283C
cs=0x396;eip=0x00283d; 	T(MOV(ax, 0x0E788));	// 8840 mov     ax, 0E788h ;~ 0396:283D
cs=0x396;eip=0x002840; 	X(PUSH(ax));	// 8841 push    ax ;~ 0396:2840
cs=0x396;eip=0x002841; 	R(CALLF(sub_29734,0));	// 8842 call    sub_29734 ;~ 0396:2841
cs=0x396;eip=0x002846; 	T(ADD(sp, 8));	// 8843 add     sp, 8 ;~ 0396:2846
cs=0x396;eip=0x002849; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8844 mov     [bp+var_2], ax ;~ 0396:2849
cs=0x396;eip=0x00284c; 	T(CMP(ax, 0x12));	// 8845 cmp     ax, 12h ;~ 0396:284C
cs=0x396;eip=0x00284f; 	R(JNZ(loc_147ad));	// 8846 jnz     short loc_147AD ;~ 0396:284F
cs=0x396;eip=0x002851; 	T(MOV(ax, 0x0A78));	// 8847 mov     ax, 0A78h ;~ 0396:2851
cs=0x396;eip=0x002854; 	X(PUSH(ax));	// 8848 push    ax ;~ 0396:2854
cs=0x396;eip=0x002855; 	T(MOV(ax, 0x0E788));	// 8849 mov     ax, 0E788h ;~ 0396:2855
cs=0x396;eip=0x002858; 	X(PUSH(ax));	// 8850 push    ax ;~ 0396:2858
cs=0x396;eip=0x002859; 	R(CALLF(sub_29b78,0));	// 8851 call    sub_29B78 ;~ 0396:2859
cs=0x396;eip=0x00285e; 	T(ADD(sp, 4));	// 8852 add     sp, 4 ;~ 0396:285E
cs=0x396;eip=0x002861; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8853 mov     [bp+var_2], ax ;~ 0396:2861
cs=0x396;eip=0x002864; 	T(OR(ax, ax));	// 8854 or      ax, ax ;~ 0396:2864
cs=0x396;eip=0x002866; 	R(JNZ(loc_147ad));	// 8855 jnz     short loc_147AD ;~ 0396:2866
cs=0x396;eip=0x002868; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 1));	// 8856 mov     [bp+var_4], 1 ;~ 0396:2868
loc_147ad:
	// 4867 
cs=0x396;eip=0x00286d; 	X(PUSH(word_3a3e6));	// 8860 push    word_3A3E6 ;~ 0396:286D
cs=0x396;eip=0x002871; 	R(CALLF(sub_29640,0));	// 8861 call    sub_29640 ;~ 0396:2871
cs=0x396;eip=0x002876; 	T(ADD(sp, 2));	// 8862 add     sp, 2 ;~ 0396:2876
loc_147b9:
	// 4868 
cs=0x396;eip=0x002879; 	T(MOV(ax, 0x0A78));	// 8865 mov     ax, 0A78h ;~ 0396:2879
cs=0x396;eip=0x00287c; 	X(PUSH(ax));	// 8866 push    ax ;~ 0396:287C
cs=0x396;eip=0x00287d; 	T(MOV(ax, 0x190C));	// 8867 mov     ax, 190Ch ;~ 0396:287D
cs=0x396;eip=0x002880; 	X(PUSH(ax));	// 8868 push    ax ;~ 0396:2880
cs=0x396;eip=0x002881; 	R(CALLF(sub_29b46,0));	// 8869 call    sub_29B46 ;~ 0396:2881
cs=0x396;eip=0x002886; 	T(ADD(sp, 4));	// 8870 add     sp, 4 ;~ 0396:2886
cs=0x396;eip=0x002889; 	X(MOV(byte_2d75d, 0x20));	// 8871 mov     byte_2D75D, 20h ; ' ' ;~ 0396:2889
cs=0x396;eip=0x00288e; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 8872 cmp     [bp+var_4], 0 ;~ 0396:288E
cs=0x396;eip=0x002892; 	R(JNZ(loc_147e0));	// 8873 jnz     short loc_147E0 ;~ 0396:2892
cs=0x396;eip=0x002894; 	T(MOV(ax, 0x14));	// 8874 mov     ax, 14h ;~ 0396:2894
cs=0x396;eip=0x002897; 	X(PUSH(ax));	// 8875 push    ax ;~ 0396:2897
cs=0x396;eip=0x002898; 	R(CALLF(sub_1179c,0));	// 8876 call    sub_1179C ;~ 0396:2898
cs=0x396;eip=0x00289d; 	T(ADD(sp, 2));	// 8877 add     sp, 2 ;~ 0396:289D
loc_147e0:
	// 4869 
cs=0x396;eip=0x0028a0; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 8880 cmp     [bp+var_4], 0 ;~ 0396:28A0
cs=0x396;eip=0x0028a4; 	R(JNZ(loc_147e9));	// 8881 jnz     short loc_147E9 ;~ 0396:28A4
cs=0x396;eip=0x0028a6; 	R(JMP(loc_1475d));	// 8882 jmp     loc_1475D ;~ 0396:28A6
loc_147e9:
	// 4870 
cs=0x396;eip=0x0028a9; 	T(MOV(sp, bp));	// 8886 mov     sp, bp ;~ 0396:28A9
cs=0x396;eip=0x0028ab; 	X(POP(bp));	// 8887 pop     bp ;~ 0396:28AB
cs=0x396;eip=0x0028ac; 	R(RETF(0));	// 8888 retf ;~ 0396:28AC
sub_147ee:
	// 8898 
#undef var_2
#define var_2 -2
	// 8901 var_2           = word ptr -2 ;~ 0396:28AE
ret_396_28ae:
	// 4871 
cs=0x396;eip=0x0028ae; 	X(PUSH(bp));	// 8903 push    bp ;~ 0396:28AE
cs=0x396;eip=0x0028af; 	T(MOV(bp, sp));	// 8904 mov     bp, sp ;~ 0396:28AF
cs=0x396;eip=0x0028b1; 	T(SUB(sp, 2));	// 8905 sub     sp, 2 ;~ 0396:28B1
cs=0x396;eip=0x0028b4; 	T(MOV(ax, 0x1035));	// 8906 mov     ax, 1035h ;~ 0396:28B4
cs=0x396;eip=0x0028b7; 	X(PUSH(ax));	// 8907 push    ax ;~ 0396:28B7
cs=0x396;eip=0x0028b8; 	T(MOV(ax, 0x0AAA));	// 8908 mov     ax, 0AAAh ;~ 0396:28B8
cs=0x396;eip=0x0028bb; 	X(PUSH(ax));	// 8909 push    ax ;~ 0396:28BB
cs=0x396;eip=0x0028bc; 	R(CALLF(sub_29708,0));	// 8910 call    sub_29708 ;~ 0396:28BC
cs=0x396;eip=0x0028c1; 	T(ADD(sp, 4));	// 8911 add     sp, 4 ;~ 0396:28C1
cs=0x396;eip=0x0028c4; 	X(MOV(word_3a3e6, ax));	// 8912 mov     word_3A3E6, ax ;~ 0396:28C4
cs=0x396;eip=0x0028c7; 	T(OR(ax, ax));	// 8913 or      ax, ax ;~ 0396:28C7
cs=0x396;eip=0x0028c9; 	R(JNZ(loc_14812));	// 8914 jnz     short loc_14812 ;~ 0396:28C9
loc_1480b:
	// 4872 
cs=0x396;eip=0x0028cb; 	T(MOV(ax, 1));	// 8918 mov     ax, 1 ;~ 0396:28CB
cs=0x396;eip=0x0028ce; 	T(MOV(sp, bp));	// 8919 mov     sp, bp ;~ 0396:28CE
cs=0x396;eip=0x0028d0; 	X(POP(bp));	// 8920 pop     bp ;~ 0396:28D0
cs=0x396;eip=0x0028d1; 	R(RETF(0));	// 8921 retf ;~ 0396:28D1
loc_14812:
	// 4873 
cs=0x396;eip=0x0028d2; 	X(PUSH(word_3a3e6));	// 8925 push    word_3A3E6 ;~ 0396:28D2
cs=0x396;eip=0x0028d6; 	T(MOV(ax, 0x12));	// 8926 mov     ax, 12h ;~ 0396:28D6
cs=0x396;eip=0x0028d9; 	X(PUSH(ax));	// 8927 push    ax ;~ 0396:28D9
cs=0x396;eip=0x0028da; 	T(MOV(ax, 1));	// 8928 mov     ax, 1 ;~ 0396:28DA
cs=0x396;eip=0x0028dd; 	X(PUSH(ax));	// 8929 push    ax ;~ 0396:28DD
cs=0x396;eip=0x0028de; 	T(MOV(ax, 0x0A78));	// 8930 mov     ax, 0A78h ;~ 0396:28DE
cs=0x396;eip=0x0028e1; 	X(PUSH(ax));	// 8931 push    ax ;~ 0396:28E1
cs=0x396;eip=0x0028e2; 	R(CALLF(sub_29734,0));	// 8932 call    sub_29734 ;~ 0396:28E2
cs=0x396;eip=0x0028e7; 	T(ADD(sp, 8));	// 8933 add     sp, 8 ;~ 0396:28E7
cs=0x396;eip=0x0028ea; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8934 mov     [bp+var_2], ax ;~ 0396:28EA
cs=0x396;eip=0x0028ed; 	T(CMP(ax, 0x12));	// 8935 cmp     ax, 12h ;~ 0396:28ED
cs=0x396;eip=0x0028f0; 	R(JZ(loc_14840));	// 8936 jz      short loc_14840 ;~ 0396:28F0
loc_14832:
	// 4874 
cs=0x396;eip=0x0028f2; 	X(PUSH(word_3a3e6));	// 8940 push    word_3A3E6 ;~ 0396:28F2
cs=0x396;eip=0x0028f6; 	R(CALLF(sub_29640,0));	// 8941 call    sub_29640 ;~ 0396:28F6
cs=0x396;eip=0x0028fb; 	T(ADD(sp, 2));	// 8942 add     sp, 2 ;~ 0396:28FB
cs=0x396;eip=0x0028fe; 	R(JMP(loc_1480b));	// 8943 jmp     short loc_1480B ;~ 0396:28FE
loc_14840:
	// 4875 
cs=0x396;eip=0x002900; 	X(PUSH(word_3a3e6));	// 8947 push    word_3A3E6 ;~ 0396:2900
cs=0x396;eip=0x002904; 	T(MOV(ax, 0x54));	// 8948 mov     ax, 54h ; 'T' ;~ 0396:2904
cs=0x396;eip=0x002907; 	X(PUSH(ax));	// 8949 push    ax ;~ 0396:2907
cs=0x396;eip=0x002908; 	T(MOV(ax, 1));	// 8950 mov     ax, 1 ;~ 0396:2908
cs=0x396;eip=0x00290b; 	X(PUSH(ax));	// 8951 push    ax ;~ 0396:290B
cs=0x396;eip=0x00290c; 	T(MOV(ax, 0x9E0));	// 8952 mov     ax, 9E0h ;~ 0396:290C
cs=0x396;eip=0x00290f; 	X(PUSH(ax));	// 8953 push    ax ;~ 0396:290F
cs=0x396;eip=0x002910; 	R(CALLF(sub_29734,0));	// 8954 call    sub_29734 ;~ 0396:2910
cs=0x396;eip=0x002915; 	T(ADD(sp, 8));	// 8955 add     sp, 8 ;~ 0396:2915
cs=0x396;eip=0x002918; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8956 mov     [bp+var_2], ax ;~ 0396:2918
cs=0x396;eip=0x00291b; 	T(CMP(ax, 0x54));	// 8957 cmp     ax, 54h ; 'T' ;~ 0396:291B
cs=0x396;eip=0x00291e; 	R(JNZ(loc_14832));	// 8958 jnz     short loc_14832 ;~ 0396:291E
cs=0x396;eip=0x002920; 	X(PUSH(word_3a3e6));	// 8959 push    word_3A3E6 ;~ 0396:2920
cs=0x396;eip=0x002924; 	T(MOV(ax, 0x40));	// 8960 mov     ax, 40h ; '@' ;~ 0396:2924
cs=0x396;eip=0x002927; 	X(PUSH(ax));	// 8961 push    ax ;~ 0396:2927
cs=0x396;eip=0x002928; 	T(MOV(ax, 1));	// 8962 mov     ax, 1 ;~ 0396:2928
cs=0x396;eip=0x00292b; 	X(PUSH(ax));	// 8963 push    ax ;~ 0396:292B
cs=0x396;eip=0x00292c; 	T(MOV(ax, 0x0A34));	// 8964 mov     ax, 0A34h ;~ 0396:292C
cs=0x396;eip=0x00292f; 	X(PUSH(ax));	// 8965 push    ax ;~ 0396:292F
cs=0x396;eip=0x002930; 	R(CALLF(sub_29734,0));	// 8966 call    sub_29734 ;~ 0396:2930
cs=0x396;eip=0x002935; 	T(ADD(sp, 8));	// 8967 add     sp, 8 ;~ 0396:2935
cs=0x396;eip=0x002938; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8968 mov     [bp+var_2], ax ;~ 0396:2938
cs=0x396;eip=0x00293b; 	T(CMP(ax, 0x40));	// 8969 cmp     ax, 40h ; '@' ;~ 0396:293B
cs=0x396;eip=0x00293e; 	R(JNZ(loc_14832));	// 8970 jnz     short loc_14832 ;~ 0396:293E
cs=0x396;eip=0x002940; 	X(PUSH(word_3a3e6));	// 8971 push    word_3A3E6 ;~ 0396:2940
cs=0x396;eip=0x002944; 	T(MOV(ax, 4));	// 8972 mov     ax, 4 ;~ 0396:2944
cs=0x396;eip=0x002947; 	X(PUSH(ax));	// 8973 push    ax ;~ 0396:2947
cs=0x396;eip=0x002948; 	T(MOV(ax, 2));	// 8974 mov     ax, 2 ;~ 0396:2948
cs=0x396;eip=0x00294b; 	X(PUSH(ax));	// 8975 push    ax ;~ 0396:294B
cs=0x396;eip=0x00294c; 	T(MOV(ax, 0x0AFE));	// 8976 mov     ax, 0AFEh ;~ 0396:294C
cs=0x396;eip=0x00294f; 	X(PUSH(ax));	// 8977 push    ax ;~ 0396:294F
cs=0x396;eip=0x002950; 	R(CALLF(sub_29734,0));	// 8978 call    sub_29734 ;~ 0396:2950
cs=0x396;eip=0x002955; 	T(ADD(sp, 8));	// 8979 add     sp, 8 ;~ 0396:2955
cs=0x396;eip=0x002958; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8980 mov     [bp+var_2], ax ;~ 0396:2958
cs=0x396;eip=0x00295b; 	T(CMP(ax, 4));	// 8981 cmp     ax, 4 ;~ 0396:295B
cs=0x396;eip=0x00295e; 	R(JNZ(loc_14832));	// 8982 jnz     short loc_14832 ;~ 0396:295E
cs=0x396;eip=0x002960; 	X(PUSH(word_3a3e6));	// 8983 push    word_3A3E6 ;~ 0396:2960
cs=0x396;eip=0x002964; 	T(MOV(ax, 4));	// 8984 mov     ax, 4 ;~ 0396:2964
cs=0x396;eip=0x002967; 	X(PUSH(ax));	// 8985 push    ax ;~ 0396:2967
cs=0x396;eip=0x002968; 	T(MOV(ax, 1));	// 8986 mov     ax, 1 ;~ 0396:2968
cs=0x396;eip=0x00296b; 	X(PUSH(ax));	// 8987 push    ax ;~ 0396:296B
cs=0x396;eip=0x00296c; 	T(MOV(ax, 0x0B06));	// 8988 mov     ax, 0B06h ;~ 0396:296C
cs=0x396;eip=0x00296f; 	X(PUSH(ax));	// 8989 push    ax ;~ 0396:296F
cs=0x396;eip=0x002970; 	R(CALLF(sub_29734,0));	// 8990 call    sub_29734 ;~ 0396:2970
cs=0x396;eip=0x002975; 	T(ADD(sp, 8));	// 8991 add     sp, 8 ;~ 0396:2975
cs=0x396;eip=0x002978; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8992 mov     [bp+var_2], ax ;~ 0396:2978
cs=0x396;eip=0x00297b; 	T(CMP(ax, 4));	// 8993 cmp     ax, 4 ;~ 0396:297B
cs=0x396;eip=0x00297e; 	R(JZ(loc_148c3));	// 8994 jz      short loc_148C3 ;~ 0396:297E
cs=0x396;eip=0x002980; 	R(JMP(loc_14832));	// 8995 jmp     loc_14832 ;~ 0396:2980
loc_148c3:
	// 4876 
cs=0x396;eip=0x002983; 	X(PUSH(word_3a3e6));	// 8999 push    word_3A3E6 ;~ 0396:2983
cs=0x396;eip=0x002987; 	T(MOV(ax, 1));	// 9000 mov     ax, 1 ;~ 0396:2987
cs=0x396;eip=0x00298a; 	X(PUSH(ax));	// 9001 push    ax ;~ 0396:298A
cs=0x396;eip=0x00298b; 	X(PUSH(ax));	// 9002 push    ax ;~ 0396:298B
cs=0x396;eip=0x00298c; 	T(MOV(ax, 0x9C2));	// 9003 mov     ax, 9C2h ;~ 0396:298C
cs=0x396;eip=0x00298f; 	X(PUSH(ax));	// 9004 push    ax ;~ 0396:298F
cs=0x396;eip=0x002990; 	R(CALLF(sub_29734,0));	// 9005 call    sub_29734 ;~ 0396:2990
cs=0x396;eip=0x002995; 	T(ADD(sp, 8));	// 9006 add     sp, 8 ;~ 0396:2995
cs=0x396;eip=0x002998; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9007 mov     [bp+var_2], ax ;~ 0396:2998
cs=0x396;eip=0x00299b; 	X(PUSH(word_3a3e6));	// 9008 push    word_3A3E6 ;~ 0396:299B
cs=0x396;eip=0x00299f; 	R(CALLF(sub_29640,0));	// 9009 call    sub_29640 ;~ 0396:299F
cs=0x396;eip=0x0029a4; 	T(ADD(sp, 2));	// 9010 add     sp, 2 ;~ 0396:29A4
cs=0x396;eip=0x0029a7; 	T(MOV(ax, 0x0B50));	// 9011 mov     ax, 0B50h ;~ 0396:29A7
cs=0x396;eip=0x0029aa; 	X(PUSH(ax));	// 9012 push    ax ;~ 0396:29AA
cs=0x396;eip=0x0029ab; 	T(MOV(ax, 0x2264));	// 9013 mov     ax, 2264h ;~ 0396:29AB
cs=0x396;eip=0x0029ae; 	X(PUSH(ax));	// 9014 push    ax ;~ 0396:29AE
cs=0x396;eip=0x0029af; 	T(MOV(ax, 0x0ABA));	// 9015 mov     ax, 0ABAh ;~ 0396:29AF
cs=0x396;eip=0x0029b2; 	X(PUSH(ax));	// 9016 push    ax ;~ 0396:29B2
cs=0x396;eip=0x0029b3; 	X(PUSH(word_2c93e));	// 9017 push    word_2C93E ;~ 0396:29B3
cs=0x396;eip=0x0029b7; 	X(PUSH(cs));	// 9018 push    cs ;~ 0396:29B7
cs=0x396;eip=0x0029b8; 	R(CALL(sub_14930,0));	// 9019 call    near ptr sub_14930 ;~ 0396:29B8
cs=0x396;eip=0x0029bb; 	T(ADD(sp, 8));	// 9020 add     sp, 8 ;~ 0396:29BB
cs=0x396;eip=0x0029be; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9021 mov     [bp+var_2], ax ;~ 0396:29BE
cs=0x396;eip=0x0029c1; 	T(OR(ax, ax));	// 9022 or      ax, ax ;~ 0396:29C1
cs=0x396;eip=0x0029c3; 	R(JZ(loc_14908));	// 9023 jz      short loc_14908 ;~ 0396:29C3
cs=0x396;eip=0x0029c5; 	R(JMP(loc_1480b));	// 9024 jmp     loc_1480B ;~ 0396:29C5
loc_14908:
	// 4877 
cs=0x396;eip=0x0029c8; 	T(MOV(ax, 0x0AEA));	// 9028 mov     ax, 0AEAh ;~ 0396:29C8
cs=0x396;eip=0x0029cb; 	X(PUSH(ax));	// 9029 push    ax ;~ 0396:29CB
cs=0x396;eip=0x0029cc; 	T(MOV(ax, 0x0ADA));	// 9030 mov     ax, 0ADAh ;~ 0396:29CC
cs=0x396;eip=0x0029cf; 	X(PUSH(ax));	// 9031 push    ax ;~ 0396:29CF
cs=0x396;eip=0x0029d0; 	X(PUSH(word_2c942));	// 9032 push    word_2C942 ;~ 0396:29D0
cs=0x396;eip=0x0029d4; 	X(PUSH(cs));	// 9033 push    cs ;~ 0396:29D4
cs=0x396;eip=0x0029d5; 	R(CALL(sub_14b06,0));	// 9034 call    near ptr sub_14B06 ;~ 0396:29D5
cs=0x396;eip=0x0029d8; 	T(ADD(sp, 6));	// 9035 add     sp, 6 ;~ 0396:29D8
cs=0x396;eip=0x0029db; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9036 mov     [bp+var_2], ax ;~ 0396:29DB
cs=0x396;eip=0x0029de; 	T(OR(ax, ax));	// 9037 or      ax, ax ;~ 0396:29DE
cs=0x396;eip=0x0029e0; 	R(JZ(loc_14925));	// 9038 jz      short loc_14925 ;~ 0396:29E0
cs=0x396;eip=0x0029e2; 	R(JMP(loc_1480b));	// 9039 jmp     loc_1480B ;~ 0396:29E2
loc_14925:
	// 4878 
cs=0x396;eip=0x0029e5; 	X(MOV(byte_2bede, 1));	// 9043 mov     byte_2BEDE, 1 ;~ 0396:29E5
cs=0x396;eip=0x0029ea; 	T(SUB(ax, ax));	// 9044 sub     ax, ax ;~ 0396:29EA
cs=0x396;eip=0x0029ec; 	T(MOV(sp, bp));	// 9045 mov     sp, bp ;~ 0396:29EC
cs=0x396;eip=0x0029ee; 	X(POP(bp));	// 9046 pop     bp ;~ 0396:29EE
cs=0x396;eip=0x0029ef; 	R(RETF(0));	// 9047 retf ;~ 0396:29EF
sub_14930:
	// 9055 
#undef var_2
#define var_2 -2
	// 9058 var_2           = word ptr -2 ;~ 0396:29F0
#undef arg_0
#define arg_0 6
	// 9059 arg_0           = word ptr  6 ;~ 0396:29F0
#undef arg_2
#define arg_2 8
	// 9060 arg_2           = word ptr  8 ;~ 0396:29F0
#undef arg_4
#define arg_4 0x0A
	// 9061 arg_4           = word ptr  0Ah ;~ 0396:29F0
#undef arg_6
#define arg_6 0x0C
	// 9062 arg_6           = word ptr  0Ch ;~ 0396:29F0
ret_396_29f0:
	// 4879 
cs=0x396;eip=0x0029f0; 	X(PUSH(bp));	// 9064 push    bp ;~ 0396:29F0
cs=0x396;eip=0x0029f1; 	T(MOV(bp, sp));	// 9065 mov     bp, sp ;~ 0396:29F1
cs=0x396;eip=0x0029f3; 	T(SUB(sp, 2));	// 9066 sub     sp, 2 ;~ 0396:29F3
cs=0x396;eip=0x0029f6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9067 mov     bx, [bp+arg_0] ;~ 0396:29F6
cs=0x396;eip=0x0029f9; 	T(MOV(ax, bx));	// 9068 mov     ax, bx ;~ 0396:29F9
cs=0x396;eip=0x0029fb; 	T(SHL(bx, 1));	// 9069 shl     bx, 1 ;~ 0396:29FB
cs=0x396;eip=0x0029fd; 	T(ADD(bx, ax));	// 9070 add     bx, ax ;~ 0396:29FD
cs=0x396;eip=0x0029ff; 	T(SHL(bx, 1));	// 9071 shl     bx, 1 ;~ 0396:29FF
cs=0x396;eip=0x002a01; 	T(CMP(*(raddr(ds,bx+0x9E0)), 0x43));	// 9072 cmp     byte ptr [bx+9E0h], 43h ; 'C' ;~ 0396:2A01
cs=0x396;eip=0x002a06; 	R(JZ(loc_14950));	// 9073 jz      short loc_14950 ;~ 0396:2A06
loc_14948:
	// 4880 
cs=0x396;eip=0x002a08; 	T(MOV(ax, 1));	// 9077 mov     ax, 1 ;~ 0396:2A08
cs=0x396;eip=0x002a0b; 	T(MOV(sp, bp));	// 9078 mov     sp, bp ;~ 0396:2A0B
cs=0x396;eip=0x002a0d; 	X(POP(bp));	// 9079 pop     bp ;~ 0396:2A0D
cs=0x396;eip=0x002a0e; 	R(RETF(0));	// 9080 retf ;~ 0396:2A0E
loc_14950:
	// 4881 
cs=0x396;eip=0x002a10; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 9085 mov     ax, [bp+arg_0] ;~ 0396:2A10
cs=0x396;eip=0x002a13; 	T(MOV(cx, ax));	// 9086 mov     cx, ax ;~ 0396:2A13
cs=0x396;eip=0x002a15; 	T(SHL(ax, 1));	// 9087 shl     ax, 1 ;~ 0396:2A15
cs=0x396;eip=0x002a17; 	T(ADD(ax, cx));	// 9088 add     ax, cx ;~ 0396:2A17
cs=0x396;eip=0x002a19; 	T(SHL(ax, 1));	// 9089 shl     ax, 1 ;~ 0396:2A19
cs=0x396;eip=0x002a1b; 	T(ADD(ax, 0x9E0));	// 9090 add     ax, 9E0h ;~ 0396:2A1B
cs=0x396;eip=0x002a1e; 	X(PUSH(ax));	// 9091 push    ax ;~ 0396:2A1E
cs=0x396;eip=0x002a1f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 9092 mov     ax, [bp+arg_2] ;~ 0396:2A1F
cs=0x396;eip=0x002a22; 	T(ADD(ax, 2));	// 9093 add     ax, 2 ;~ 0396:2A22
cs=0x396;eip=0x002a25; 	X(PUSH(ax));	// 9094 push    ax ;~ 0396:2A25
cs=0x396;eip=0x002a26; 	R(CALLF(sub_29b46,0));	// 9095 call    sub_29B46 ;~ 0396:2A26
cs=0x396;eip=0x002a2b; 	T(ADD(sp, 4));	// 9096 add     sp, 4 ;~ 0396:2A2B
cs=0x396;eip=0x002a2e; 	T(MOV(ax, 0x1038));	// 9097 mov     ax, 1038h ;~ 0396:2A2E
cs=0x396;eip=0x002a31; 	X(PUSH(ax));	// 9098 push    ax ;~ 0396:2A31
cs=0x396;eip=0x002a32; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 9099 mov     ax, [bp+arg_2] ;~ 0396:2A32
cs=0x396;eip=0x002a35; 	T(ADD(ax, 7));	// 9100 add     ax, 7 ;~ 0396:2A35
cs=0x396;eip=0x002a38; 	X(PUSH(ax));	// 9101 push    ax ;~ 0396:2A38
cs=0x396;eip=0x002a39; 	R(CALLF(sub_29b46,0));	// 9102 call    sub_29B46 ;~ 0396:2A39
cs=0x396;eip=0x002a3e; 	T(ADD(sp, 4));	// 9103 add     sp, 4 ;~ 0396:2A3E
cs=0x396;eip=0x002a41; 	T(MOV(ax, 0x103D));	// 9104 mov     ax, 103Dh ;~ 0396:2A41
cs=0x396;eip=0x002a44; 	X(PUSH(ax));	// 9105 push    ax ;~ 0396:2A44
cs=0x396;eip=0x002a45; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 9106 push    [bp+arg_2] ;~ 0396:2A45
cs=0x396;eip=0x002a48; 	R(CALLF(sub_29708,0));	// 9107 call    sub_29708 ;~ 0396:2A48
cs=0x396;eip=0x002a4d; 	T(ADD(sp, 4));	// 9108 add     sp, 4 ;~ 0396:2A4D
cs=0x396;eip=0x002a50; 	X(MOV(word_3a3e6, ax));	// 9109 mov     word_3A3E6, ax ;~ 0396:2A50
cs=0x396;eip=0x002a53; 	T(OR(ax, ax));	// 9110 or      ax, ax ;~ 0396:2A53
cs=0x396;eip=0x002a55; 	R(JZ(loc_14948));	// 9111 jz      short loc_14948 ;~ 0396:2A55
cs=0x396;eip=0x002a57; 	X(PUSH(ax));	// 9112 push    ax ;~ 0396:2A57
cs=0x396;eip=0x002a58; 	T(MOV(ax, 0x13));	// 9113 mov     ax, 13h ;~ 0396:2A58
cs=0x396;eip=0x002a5b; 	X(PUSH(ax));	// 9114 push    ax ;~ 0396:2A5B
cs=0x396;eip=0x002a5c; 	T(MOV(ax, 1));	// 9115 mov     ax, 1 ;~ 0396:2A5C
cs=0x396;eip=0x002a5f; 	X(PUSH(ax));	// 9116 push    ax ;~ 0396:2A5F
cs=0x396;eip=0x002a60; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 9117 push    [bp+arg_4] ;~ 0396:2A60
cs=0x396;eip=0x002a63; 	R(CALLF(sub_29734,0));	// 9118 call    sub_29734 ;~ 0396:2A63
cs=0x396;eip=0x002a68; 	T(ADD(sp, 8));	// 9119 add     sp, 8 ;~ 0396:2A68
cs=0x396;eip=0x002a6b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9120 mov     [bp+var_2], ax ;~ 0396:2A6B
cs=0x396;eip=0x002a6e; 	T(CMP(ax, 0x13));	// 9121 cmp     ax, 13h ;~ 0396:2A6E
cs=0x396;eip=0x002a71; 	R(JZ(loc_149c2));	// 9122 jz      short loc_149C2 ;~ 0396:2A71
loc_149b3:
	// 4882 
cs=0x396;eip=0x002a73; 	X(PUSH(word_3a3e6));	// 9126 push    word_3A3E6 ;~ 0396:2A73
cs=0x396;eip=0x002a77; 	R(CALLF(sub_29640,0));	// 9127 call    sub_29640 ;~ 0396:2A77
cs=0x396;eip=0x002a7c; 	T(ADD(sp, 2));	// 9128 add     sp, 2 ;~ 0396:2A7C
cs=0x396;eip=0x002a7f; 	R(JMP(loc_14948));	// 9129 jmp     short loc_14948 ;~ 0396:2A7F
loc_149c2:
	// 4883 
cs=0x396;eip=0x002a82; 	X(PUSH(word_3a3e6));	// 9134 push    word_3A3E6 ;~ 0396:2A82
cs=0x396;eip=0x002a86; 	T(MOV(ax, 0x0D));	// 9135 mov     ax, 0Dh ;~ 0396:2A86
cs=0x396;eip=0x002a89; 	X(PUSH(ax));	// 9136 push    ax ;~ 0396:2A89
cs=0x396;eip=0x002a8a; 	T(MOV(ax, 2));	// 9137 mov     ax, 2 ;~ 0396:2A8A
cs=0x396;eip=0x002a8d; 	X(PUSH(ax));	// 9138 push    ax ;~ 0396:2A8D
cs=0x396;eip=0x002a8e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 9139 push    [bp+arg_6] ;~ 0396:2A8E
cs=0x396;eip=0x002a91; 	R(CALLF(sub_29734,0));	// 9140 call    sub_29734 ;~ 0396:2A91
cs=0x396;eip=0x002a96; 	T(ADD(sp, 8));	// 9141 add     sp, 8 ;~ 0396:2A96
cs=0x396;eip=0x002a99; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9142 mov     [bp+var_2], ax ;~ 0396:2A99
cs=0x396;eip=0x002a9c; 	T(CMP(ax, 0x0D));	// 9143 cmp     ax, 0Dh ;~ 0396:2A9C
cs=0x396;eip=0x002a9f; 	R(JNZ(loc_149b3));	// 9144 jnz     short loc_149B3 ;~ 0396:2A9F
cs=0x396;eip=0x002aa1; 	X(PUSH(word_3a3e6));	// 9145 push    word_3A3E6 ;~ 0396:2AA1
cs=0x396;eip=0x002aa5; 	T(MOV(ax, 0x42));	// 9146 mov     ax, 42h ; 'B' ;~ 0396:2AA5
cs=0x396;eip=0x002aa8; 	X(PUSH(ax));	// 9147 push    ax ;~ 0396:2AA8
cs=0x396;eip=0x002aa9; 	T(MOV(ax, 1));	// 9148 mov     ax, 1 ;~ 0396:2AA9
cs=0x396;eip=0x002aac; 	X(PUSH(ax));	// 9149 push    ax ;~ 0396:2AAC
cs=0x396;eip=0x002aad; 	T(MOV(ax, 0x0E564));	// 9150 mov     ax, 0E564h ;~ 0396:2AAD
cs=0x396;eip=0x002ab0; 	X(PUSH(ax));	// 9151 push    ax ;~ 0396:2AB0
cs=0x396;eip=0x002ab1; 	R(CALLF(sub_29734,0));	// 9152 call    sub_29734 ;~ 0396:2AB1
cs=0x396;eip=0x002ab6; 	T(ADD(sp, 8));	// 9153 add     sp, 8 ;~ 0396:2AB6
cs=0x396;eip=0x002ab9; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9154 mov     [bp+var_2], ax ;~ 0396:2AB9
cs=0x396;eip=0x002abc; 	T(CMP(ax, 0x42));	// 9155 cmp     ax, 42h ; 'B' ;~ 0396:2ABC
cs=0x396;eip=0x002abf; 	R(JNZ(loc_149b3));	// 9156 jnz     short loc_149B3 ;~ 0396:2ABF
cs=0x396;eip=0x002ac1; 	X(PUSH(word_3a3e6));	// 9157 push    word_3A3E6 ;~ 0396:2AC1
cs=0x396;eip=0x002ac5; 	T(MOV(ax, 7));	// 9158 mov     ax, 7 ;~ 0396:2AC5
cs=0x396;eip=0x002ac8; 	X(PUSH(ax));	// 9159 push    ax ;~ 0396:2AC8
cs=0x396;eip=0x002ac9; 	T(MOV(ax, 1));	// 9160 mov     ax, 1 ;~ 0396:2AC9
cs=0x396;eip=0x002acc; 	X(PUSH(ax));	// 9161 push    ax ;~ 0396:2ACC
cs=0x396;eip=0x002acd; 	T(MOV(ax, 0x0E541));	// 9162 mov     ax, 0E541h ;~ 0396:2ACD
cs=0x396;eip=0x002ad0; 	X(PUSH(ax));	// 9163 push    ax ;~ 0396:2AD0
cs=0x396;eip=0x002ad1; 	R(CALLF(sub_29734,0));	// 9164 call    sub_29734 ;~ 0396:2AD1
cs=0x396;eip=0x002ad6; 	T(ADD(sp, 8));	// 9165 add     sp, 8 ;~ 0396:2AD6
cs=0x396;eip=0x002ad9; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9166 mov     [bp+var_2], ax ;~ 0396:2AD9
cs=0x396;eip=0x002adc; 	T(CMP(ax, 7));	// 9167 cmp     ax, 7 ;~ 0396:2ADC
cs=0x396;eip=0x002adf; 	R(JNZ(loc_149b3));	// 9168 jnz     short loc_149B3 ;~ 0396:2ADF
cs=0x396;eip=0x002ae1; 	X(PUSH(word_3a3e6));	// 9169 push    word_3A3E6 ;~ 0396:2AE1
cs=0x396;eip=0x002ae5; 	T(MOV(ax, 5));	// 9170 mov     ax, 5 ;~ 0396:2AE5
cs=0x396;eip=0x002ae8; 	X(PUSH(ax));	// 9171 push    ax ;~ 0396:2AE8
cs=0x396;eip=0x002ae9; 	T(MOV(ax, 2));	// 9172 mov     ax, 2 ;~ 0396:2AE9
cs=0x396;eip=0x002aec; 	X(PUSH(ax));	// 9173 push    ax ;~ 0396:2AEC
cs=0x396;eip=0x002aed; 	T(MOV(ax, 0x0E77E));	// 9174 mov     ax, 0E77Eh ;~ 0396:2AED
cs=0x396;eip=0x002af0; 	X(PUSH(ax));	// 9175 push    ax ;~ 0396:2AF0
cs=0x396;eip=0x002af1; 	R(CALLF(sub_29734,0));	// 9176 call    sub_29734 ;~ 0396:2AF1
cs=0x396;eip=0x002af6; 	T(ADD(sp, 8));	// 9177 add     sp, 8 ;~ 0396:2AF6
cs=0x396;eip=0x002af9; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9178 mov     [bp+var_2], ax ;~ 0396:2AF9
cs=0x396;eip=0x002afc; 	T(CMP(ax, 5));	// 9179 cmp     ax, 5 ;~ 0396:2AFC
cs=0x396;eip=0x002aff; 	R(JZ(loc_14a44));	// 9180 jz      short loc_14A44 ;~ 0396:2AFF
cs=0x396;eip=0x002b01; 	R(JMP(loc_149b3));	// 9181 jmp     loc_149B3 ;~ 0396:2B01
loc_14a44:
	// 4884 
cs=0x396;eip=0x002b04; 	X(PUSH(word_3a3e6));	// 9185 push    word_3A3E6 ;~ 0396:2B04
cs=0x396;eip=0x002b08; 	T(MOV(ax, 0x0A));	// 9186 mov     ax, 0Ah ;~ 0396:2B08
cs=0x396;eip=0x002b0b; 	X(PUSH(ax));	// 9187 push    ax ;~ 0396:2B0B
cs=0x396;eip=0x002b0c; 	T(MOV(ax, 1));	// 9188 mov     ax, 1 ;~ 0396:2B0C
cs=0x396;eip=0x002b0f; 	X(PUSH(ax));	// 9189 push    ax ;~ 0396:2B0F
cs=0x396;eip=0x002b10; 	T(MOV(ax, 0x0CEAE));	// 9190 mov     ax, 0CEAEh ;~ 0396:2B10
cs=0x396;eip=0x002b13; 	X(PUSH(ax));	// 9191 push    ax ;~ 0396:2B13
cs=0x396;eip=0x002b14; 	R(CALLF(sub_29734,0));	// 9192 call    sub_29734 ;~ 0396:2B14
cs=0x396;eip=0x002b19; 	T(ADD(sp, 8));	// 9193 add     sp, 8 ;~ 0396:2B19
cs=0x396;eip=0x002b1c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9194 mov     [bp+var_2], ax ;~ 0396:2B1C
cs=0x396;eip=0x002b1f; 	T(CMP(ax, 0x0A));	// 9195 cmp     ax, 0Ah ;~ 0396:2B1F
cs=0x396;eip=0x002b22; 	R(JZ(loc_14a67));	// 9196 jz      short loc_14A67 ;~ 0396:2B22
cs=0x396;eip=0x002b24; 	R(JMP(loc_149b3));	// 9197 jmp     loc_149B3 ;~ 0396:2B24
loc_14a67:
	// 4885 
cs=0x396;eip=0x002b27; 	X(PUSH(word_3a3e6));	// 9201 push    word_3A3E6 ;~ 0396:2B27
cs=0x396;eip=0x002b2b; 	T(MOV(ax, 0x14));	// 9202 mov     ax, 14h ;~ 0396:2B2B
cs=0x396;eip=0x002b2e; 	X(PUSH(ax));	// 9203 push    ax ;~ 0396:2B2E
cs=0x396;eip=0x002b2f; 	T(MOV(ax, 2));	// 9204 mov     ax, 2 ;~ 0396:2B2F
cs=0x396;eip=0x002b32; 	X(PUSH(ax));	// 9205 push    ax ;~ 0396:2B32
cs=0x396;eip=0x002b33; 	T(MOV(ax, 0x0CC64));	// 9206 mov     ax, 0CC64h ;~ 0396:2B33
cs=0x396;eip=0x002b36; 	X(PUSH(ax));	// 9207 push    ax ;~ 0396:2B36
cs=0x396;eip=0x002b37; 	R(CALLF(sub_29734,0));	// 9208 call    sub_29734 ;~ 0396:2B37
cs=0x396;eip=0x002b3c; 	T(ADD(sp, 8));	// 9209 add     sp, 8 ;~ 0396:2B3C
cs=0x396;eip=0x002b3f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9210 mov     [bp+var_2], ax ;~ 0396:2B3F
cs=0x396;eip=0x002b42; 	T(CMP(ax, 0x14));	// 9211 cmp     ax, 14h ;~ 0396:2B42
cs=0x396;eip=0x002b45; 	R(JZ(loc_14a8a));	// 9212 jz      short loc_14A8A ;~ 0396:2B45
cs=0x396;eip=0x002b47; 	R(JMP(loc_149b3));	// 9213 jmp     loc_149B3 ;~ 0396:2B47
loc_14a8a:
	// 4886 
cs=0x396;eip=0x002b4a; 	X(PUSH(word_3a3e6));	// 9217 push    word_3A3E6 ;~ 0396:2B4A
cs=0x396;eip=0x002b4e; 	T(MOV(ax, 0x0D9));	// 9218 mov     ax, 0D9h ; 'Ÿ' ;~ 0396:2B4E
cs=0x396;eip=0x002b51; 	X(PUSH(ax));	// 9219 push    ax ;~ 0396:2B51
cs=0x396;eip=0x002b52; 	T(MOV(ax, 1));	// 9220 mov     ax, 1 ;~ 0396:2B52
cs=0x396;eip=0x002b55; 	X(PUSH(ax));	// 9221 push    ax ;~ 0396:2B55
cs=0x396;eip=0x002b56; 	T(MOV(ax, 0x94B8));	// 9222 mov     ax, 94B8h ;~ 0396:2B56
cs=0x396;eip=0x002b59; 	X(PUSH(ax));	// 9223 push    ax ;~ 0396:2B59
cs=0x396;eip=0x002b5a; 	R(CALLF(sub_29734,0));	// 9224 call    sub_29734 ;~ 0396:2B5A
cs=0x396;eip=0x002b5f; 	T(ADD(sp, 8));	// 9225 add     sp, 8 ;~ 0396:2B5F
cs=0x396;eip=0x002b62; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9226 mov     [bp+var_2], ax ;~ 0396:2B62
cs=0x396;eip=0x002b65; 	T(CMP(ax, 0x0D9));	// 9227 cmp     ax, 0D9h ; 'Ÿ' ;~ 0396:2B65
cs=0x396;eip=0x002b68; 	R(JZ(loc_14aad));	// 9228 jz      short loc_14AAD ;~ 0396:2B68
cs=0x396;eip=0x002b6a; 	R(JMP(loc_149b3));	// 9229 jmp     loc_149B3 ;~ 0396:2B6A
loc_14aad:
	// 4887 
cs=0x396;eip=0x002b6d; 	X(PUSH(word_3a3e6));	// 9233 push    word_3A3E6 ;~ 0396:2B6D
cs=0x396;eip=0x002b71; 	T(MOV(ax, 0x23));	// 9234 mov     ax, 23h ; '#' ;~ 0396:2B71
cs=0x396;eip=0x002b74; 	X(PUSH(ax));	// 9235 push    ax ;~ 0396:2B74
cs=0x396;eip=0x002b75; 	T(MOV(ax, 2));	// 9236 mov     ax, 2 ;~ 0396:2B75
cs=0x396;eip=0x002b78; 	X(PUSH(ax));	// 9237 push    ax ;~ 0396:2B78
cs=0x396;eip=0x002b79; 	T(MOV(ax, 0x1200));	// 9238 mov     ax, 1200h ;~ 0396:2B79
cs=0x396;eip=0x002b7c; 	X(PUSH(ax));	// 9239 push    ax ;~ 0396:2B7C
cs=0x396;eip=0x002b7d; 	R(CALLF(sub_29734,0));	// 9240 call    sub_29734 ;~ 0396:2B7D
cs=0x396;eip=0x002b82; 	T(ADD(sp, 8));	// 9241 add     sp, 8 ;~ 0396:2B82
cs=0x396;eip=0x002b85; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9242 mov     [bp+var_2], ax ;~ 0396:2B85
cs=0x396;eip=0x002b88; 	T(CMP(ax, 0x23));	// 9243 cmp     ax, 23h ; '#' ;~ 0396:2B88
cs=0x396;eip=0x002b8b; 	R(JZ(loc_14ad0));	// 9244 jz      short loc_14AD0 ;~ 0396:2B8B
cs=0x396;eip=0x002b8d; 	R(JMP(loc_149b3));	// 9245 jmp     loc_149B3 ;~ 0396:2B8D
loc_14ad0:
	// 4888 
cs=0x396;eip=0x002b90; 	X(PUSH(word_3a3e6));	// 9249 push    word_3A3E6 ;~ 0396:2B90
cs=0x396;eip=0x002b94; 	T(MOV(ax, 0x0D2));	// 9250 mov     ax, 0D2h ; '“' ;~ 0396:2B94
cs=0x396;eip=0x002b97; 	X(PUSH(ax));	// 9251 push    ax ;~ 0396:2B97
cs=0x396;eip=0x002b98; 	T(MOV(ax, 1));	// 9252 mov     ax, 1 ;~ 0396:2B98
cs=0x396;eip=0x002b9b; 	X(PUSH(ax));	// 9253 push    ax ;~ 0396:2B9B
cs=0x396;eip=0x002b9c; 	T(MOV(ax, 0x74C));	// 9254 mov     ax, 74Ch ;~ 0396:2B9C
cs=0x396;eip=0x002b9f; 	X(PUSH(ax));	// 9255 push    ax ;~ 0396:2B9F
cs=0x396;eip=0x002ba0; 	R(CALLF(sub_29734,0));	// 9256 call    sub_29734 ;~ 0396:2BA0
cs=0x396;eip=0x002ba5; 	T(ADD(sp, 8));	// 9257 add     sp, 8 ;~ 0396:2BA5
cs=0x396;eip=0x002ba8; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9258 mov     [bp+var_2], ax ;~ 0396:2BA8
cs=0x396;eip=0x002bab; 	T(CMP(ax, 0x0D2));	// 9259 cmp     ax, 0D2h ; '“' ;~ 0396:2BAB
cs=0x396;eip=0x002bae; 	R(JZ(loc_14af3));	// 9260 jz      short loc_14AF3 ;~ 0396:2BAE
cs=0x396;eip=0x002bb0; 	R(JMP(loc_149b3));	// 9261 jmp     loc_149B3 ;~ 0396:2BB0
loc_14af3:
	// 4889 
cs=0x396;eip=0x002bb3; 	X(PUSH(word_3a3e6));	// 9265 push    word_3A3E6 ;~ 0396:2BB3
cs=0x396;eip=0x002bb7; 	R(CALLF(sub_29640,0));	// 9266 call    sub_29640 ;~ 0396:2BB7
cs=0x396;eip=0x002bbc; 	T(ADD(sp, 2));	// 9267 add     sp, 2 ;~ 0396:2BBC
cs=0x396;eip=0x002bbf; 	T(SUB(ax, ax));	// 9268 sub     ax, ax ;~ 0396:2BBF
cs=0x396;eip=0x002bc1; 	T(MOV(sp, bp));	// 9269 mov     sp, bp ;~ 0396:2BC1
cs=0x396;eip=0x002bc3; 	X(POP(bp));	// 9270 pop     bp ;~ 0396:2BC3
cs=0x396;eip=0x002bc4; 	R(RETF(0));	// 9271 retf ;~ 0396:2BC4
sub_14b06:
	// 9281 
#undef var_6
#define var_6 -6
	// 9284 var_6           = word ptr -6 ;~ 0396:2BC6
#undef var_4
#define var_4 -4
	// 9285 var_4           = word ptr -4 ;~ 0396:2BC6
#undef var_2
#define var_2 -2
	// 9286 var_2           = word ptr -2 ;~ 0396:2BC6
#undef arg_0
#define arg_0 6
	// 9287 arg_0           = word ptr  6 ;~ 0396:2BC6
#undef arg_2
#define arg_2 8
	// 9288 arg_2           = word ptr  8 ;~ 0396:2BC6
#undef arg_4
#define arg_4 0x0A
	// 9289 arg_4           = word ptr  0Ah ;~ 0396:2BC6
ret_396_2bc6:
	// 4890 
cs=0x396;eip=0x002bc6; 	X(PUSH(bp));	// 9291 push    bp ;~ 0396:2BC6
cs=0x396;eip=0x002bc7; 	T(MOV(bp, sp));	// 9292 mov     bp, sp ;~ 0396:2BC7
cs=0x396;eip=0x002bc9; 	T(SUB(sp, 6));	// 9293 sub     sp, 6 ;~ 0396:2BC9
cs=0x396;eip=0x002bcc; 	X(PUSH(si));	// 9294 push    si ;~ 0396:2BCC
cs=0x396;eip=0x002bcd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9295 mov     bx, [bp+arg_0] ;~ 0396:2BCD
cs=0x396;eip=0x002bd0; 	T(MOV(cl, 3));	// 9296 mov     cl, 3 ;~ 0396:2BD0
cs=0x396;eip=0x002bd2; 	T(SHL(bx, cl));	// 9297 shl     bx, cl ;~ 0396:2BD2
cs=0x396;eip=0x002bd4; 	T(CMP(*(raddr(ds,bx+0x0A34)), 0x53));	// 9298 cmp     byte ptr [bx+0A34h], 53h ; 'S' ;~ 0396:2BD4
cs=0x396;eip=0x002bd9; 	R(JZ(loc_14b24));	// 9299 jz      short loc_14B24 ;~ 0396:2BD9
loc_14b1b:
	// 4891 
cs=0x396;eip=0x002bdb; 	T(MOV(ax, 1));	// 9303 mov     ax, 1 ;~ 0396:2BDB
cs=0x396;eip=0x002bde; 	X(POP(si));	// 9304 pop     si ;~ 0396:2BDE
cs=0x396;eip=0x002bdf; 	T(MOV(sp, bp));	// 9305 mov     sp, bp ;~ 0396:2BDF
cs=0x396;eip=0x002be1; 	X(POP(bp));	// 9306 pop     bp ;~ 0396:2BE1
cs=0x396;eip=0x002be2; 	R(RETF(0));	// 9307 retf ;~ 0396:2BE2
loc_14b24:
	// 4892 
cs=0x396;eip=0x002be4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 9312 mov     ax, [bp+arg_0] ;~ 0396:2BE4
cs=0x396;eip=0x002be7; 	T(MOV(cl, 3));	// 9313 mov     cl, 3 ;~ 0396:2BE7
cs=0x396;eip=0x002be9; 	T(SHL(ax, cl));	// 9314 shl     ax, cl ;~ 0396:2BE9
cs=0x396;eip=0x002beb; 	T(ADD(ax, 0x0A34));	// 9315 add     ax, 0A34h ;~ 0396:2BEB
cs=0x396;eip=0x002bee; 	X(PUSH(ax));	// 9316 push    ax ;~ 0396:2BEE
cs=0x396;eip=0x002bef; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 9317 mov     ax, [bp+arg_2] ;~ 0396:2BEF
cs=0x396;eip=0x002bf2; 	T(ADD(ax, 2));	// 9318 add     ax, 2 ;~ 0396:2BF2
cs=0x396;eip=0x002bf5; 	X(PUSH(ax));	// 9319 push    ax ;~ 0396:2BF5
cs=0x396;eip=0x002bf6; 	R(CALLF(sub_29b46,0));	// 9320 call    sub_29B46 ;~ 0396:2BF6
cs=0x396;eip=0x002bfb; 	T(ADD(sp, 4));	// 9321 add     sp, 4 ;~ 0396:2BFB
cs=0x396;eip=0x002bfe; 	T(MOV(ax, 0x1040));	// 9322 mov     ax, 1040h ;~ 0396:2BFE
cs=0x396;eip=0x002c01; 	X(PUSH(ax));	// 9323 push    ax ;~ 0396:2C01
cs=0x396;eip=0x002c02; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 9324 mov     ax, [bp+arg_2] ;~ 0396:2C02
cs=0x396;eip=0x002c05; 	T(ADD(ax, 9));	// 9325 add     ax, 9 ;~ 0396:2C05
cs=0x396;eip=0x002c08; 	X(PUSH(ax));	// 9326 push    ax ;~ 0396:2C08
cs=0x396;eip=0x002c09; 	R(CALLF(sub_29b46,0));	// 9327 call    sub_29B46 ;~ 0396:2C09
cs=0x396;eip=0x002c0e; 	T(ADD(sp, 4));	// 9328 add     sp, 4 ;~ 0396:2C0E
cs=0x396;eip=0x002c11; 	T(MOV(ax, 0x1045));	// 9329 mov     ax, 1045h ;~ 0396:2C11
cs=0x396;eip=0x002c14; 	X(PUSH(ax));	// 9330 push    ax ;~ 0396:2C14
cs=0x396;eip=0x002c15; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 9331 push    [bp+arg_2] ;~ 0396:2C15
cs=0x396;eip=0x002c18; 	R(CALLF(sub_29708,0));	// 9332 call    sub_29708 ;~ 0396:2C18
cs=0x396;eip=0x002c1d; 	T(ADD(sp, 4));	// 9333 add     sp, 4 ;~ 0396:2C1D
cs=0x396;eip=0x002c20; 	X(MOV(word_3a3e6, ax));	// 9334 mov     word_3A3E6, ax ;~ 0396:2C20
cs=0x396;eip=0x002c23; 	T(OR(ax, ax));	// 9335 or      ax, ax ;~ 0396:2C23
cs=0x396;eip=0x002c25; 	R(JZ(loc_14b1b));	// 9336 jz      short loc_14B1B ;~ 0396:2C25
cs=0x396;eip=0x002c27; 	X(PUSH(ax));	// 9337 push    ax ;~ 0396:2C27
cs=0x396;eip=0x002c28; 	T(MOV(ax, 0x13));	// 9338 mov     ax, 13h ;~ 0396:2C28
cs=0x396;eip=0x002c2b; 	X(PUSH(ax));	// 9339 push    ax ;~ 0396:2C2B
cs=0x396;eip=0x002c2c; 	T(MOV(ax, 1));	// 9340 mov     ax, 1 ;~ 0396:2C2C
cs=0x396;eip=0x002c2f; 	X(PUSH(ax));	// 9341 push    ax ;~ 0396:2C2F
cs=0x396;eip=0x002c30; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 9342 push    [bp+arg_4] ;~ 0396:2C30
cs=0x396;eip=0x002c33; 	R(CALLF(sub_29734,0));	// 9343 call    sub_29734 ;~ 0396:2C33
cs=0x396;eip=0x002c38; 	T(ADD(sp, 8));	// 9344 add     sp, 8 ;~ 0396:2C38
cs=0x396;eip=0x002c3b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9345 mov     [bp+var_2], ax ;~ 0396:2C3B
cs=0x396;eip=0x002c3e; 	T(CMP(ax, 0x13));	// 9346 cmp     ax, 13h ;~ 0396:2C3E
cs=0x396;eip=0x002c41; 	R(JZ(loc_14b92));	// 9347 jz      short loc_14B92 ;~ 0396:2C41
loc_14b83:
	// 4893 
cs=0x396;eip=0x002c43; 	X(PUSH(word_3a3e6));	// 9351 push    word_3A3E6 ;~ 0396:2C43
cs=0x396;eip=0x002c47; 	R(CALLF(sub_29640,0));	// 9352 call    sub_29640 ;~ 0396:2C47
cs=0x396;eip=0x002c4c; 	T(ADD(sp, 2));	// 9353 add     sp, 2 ;~ 0396:2C4C
cs=0x396;eip=0x002c4f; 	R(JMP(loc_14b1b));	// 9354 jmp     short loc_14B1B ;~ 0396:2C4F
loc_14b92:
	// 4894 
cs=0x396;eip=0x002c52; 	X(PUSH(word_3a3e6));	// 9359 push    word_3A3E6 ;~ 0396:2C52
cs=0x396;eip=0x002c56; 	T(MOV(ax, 1));	// 9360 mov     ax, 1 ;~ 0396:2C56
cs=0x396;eip=0x002c59; 	X(PUSH(ax));	// 9361 push    ax ;~ 0396:2C59
cs=0x396;eip=0x002c5a; 	X(PUSH(ax));	// 9362 push    ax ;~ 0396:2C5A
cs=0x396;eip=0x002c5b; 	T(MOV(ax, 0x0B0B));	// 9363 mov     ax, 0B0Bh ;~ 0396:2C5B
cs=0x396;eip=0x002c5e; 	X(PUSH(ax));	// 9364 push    ax ;~ 0396:2C5E
cs=0x396;eip=0x002c5f; 	R(CALLF(sub_29734,0));	// 9365 call    sub_29734 ;~ 0396:2C5F
cs=0x396;eip=0x002c64; 	T(ADD(sp, 8));	// 9366 add     sp, 8 ;~ 0396:2C64
cs=0x396;eip=0x002c67; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9367 mov     [bp+var_2], ax ;~ 0396:2C67
cs=0x396;eip=0x002c6a; 	T(CMP(ax, 1));	// 9368 cmp     ax, 1 ;~ 0396:2C6A
cs=0x396;eip=0x002c6d; 	R(JNZ(loc_14b83));	// 9369 jnz     short loc_14B83 ;~ 0396:2C6D
cs=0x396;eip=0x002c6f; 	X(PUSH(word_3a3e6));	// 9370 push    word_3A3E6 ;~ 0396:2C6F
cs=0x396;eip=0x002c73; 	T(MOV(ax, 0x1D));	// 9371 mov     ax, 1Dh ;~ 0396:2C73
cs=0x396;eip=0x002c76; 	X(PUSH(ax));	// 9372 push    ax ;~ 0396:2C76
cs=0x396;eip=0x002c77; 	T(MOV(ax, 2));	// 9373 mov     ax, 2 ;~ 0396:2C77
cs=0x396;eip=0x002c7a; 	X(PUSH(ax));	// 9374 push    ax ;~ 0396:2C7A
cs=0x396;eip=0x002c7b; 	T(MOV(ax, 0x0B16));	// 9375 mov     ax, 0B16h ;~ 0396:2C7B
cs=0x396;eip=0x002c7e; 	X(PUSH(ax));	// 9376 push    ax ;~ 0396:2C7E
cs=0x396;eip=0x002c7f; 	R(CALLF(sub_29734,0));	// 9377 call    sub_29734 ;~ 0396:2C7F
cs=0x396;eip=0x002c84; 	T(ADD(sp, 8));	// 9378 add     sp, 8 ;~ 0396:2C84
cs=0x396;eip=0x002c87; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9379 mov     [bp+var_2], ax ;~ 0396:2C87
cs=0x396;eip=0x002c8a; 	T(CMP(ax, 0x1D));	// 9380 cmp     ax, 1Dh ;~ 0396:2C8A
cs=0x396;eip=0x002c8d; 	R(JNZ(loc_14b83));	// 9381 jnz     short loc_14B83 ;~ 0396:2C8D
cs=0x396;eip=0x002c8f; 	X(PUSH(word_3a3e6));	// 9382 push    word_3A3E6 ;~ 0396:2C8F
cs=0x396;eip=0x002c93; 	T(MOV(ax, 0x0A));	// 9383 mov     ax, 0Ah ;~ 0396:2C93
cs=0x396;eip=0x002c96; 	X(PUSH(ax));	// 9384 push    ax ;~ 0396:2C96
cs=0x396;eip=0x002c97; 	T(MOV(ax, 1));	// 9385 mov     ax, 1 ;~ 0396:2C97
cs=0x396;eip=0x002c9a; 	X(PUSH(ax));	// 9386 push    ax ;~ 0396:2C9A
cs=0x396;eip=0x002c9b; 	T(MOV(ax, 0x0B0C));	// 9387 mov     ax, 0B0Ch ;~ 0396:2C9B
cs=0x396;eip=0x002c9e; 	X(PUSH(ax));	// 9388 push    ax ;~ 0396:2C9E
cs=0x396;eip=0x002c9f; 	R(CALLF(sub_29734,0));	// 9389 call    sub_29734 ;~ 0396:2C9F
cs=0x396;eip=0x002ca4; 	T(ADD(sp, 8));	// 9390 add     sp, 8 ;~ 0396:2CA4
cs=0x396;eip=0x002ca7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9391 mov     [bp+var_2], ax ;~ 0396:2CA7
cs=0x396;eip=0x002caa; 	T(CMP(ax, 0x0A));	// 9392 cmp     ax, 0Ah ;~ 0396:2CAA
cs=0x396;eip=0x002cad; 	R(JNZ(loc_14b83));	// 9393 jnz     short loc_14B83 ;~ 0396:2CAD
cs=0x396;eip=0x002caf; 	X(PUSH(word_3a3e6));	// 9394 push    word_3A3E6 ;~ 0396:2CAF
cs=0x396;eip=0x002cb3; 	T(MOV(ax, 0x1B0));	// 9395 mov     ax, 1B0h ;~ 0396:2CB3
cs=0x396;eip=0x002cb6; 	X(PUSH(ax));	// 9396 push    ax ;~ 0396:2CB6
cs=0x396;eip=0x002cb7; 	T(MOV(ax, 1));	// 9397 mov     ax, 1 ;~ 0396:2CB7
cs=0x396;eip=0x002cba; 	X(PUSH(ax));	// 9398 push    ax ;~ 0396:2CBA
cs=0x396;eip=0x002cbb; 	T(MOV(ax, 0x0E5C0));	// 9399 mov     ax, 0E5C0h ;~ 0396:2CBB
cs=0x396;eip=0x002cbe; 	X(PUSH(ax));	// 9400 push    ax ;~ 0396:2CBE
cs=0x396;eip=0x002cbf; 	R(CALLF(sub_29734,0));	// 9401 call    sub_29734 ;~ 0396:2CBF
cs=0x396;eip=0x002cc4; 	T(ADD(sp, 8));	// 9402 add     sp, 8 ;~ 0396:2CC4
cs=0x396;eip=0x002cc7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9403 mov     [bp+var_2], ax ;~ 0396:2CC7
cs=0x396;eip=0x002cca; 	T(CMP(ax, 0x1B0));	// 9404 cmp     ax, 1B0h ;~ 0396:2CCA
cs=0x396;eip=0x002ccd; 	R(JZ(loc_14c12));	// 9405 jz      short loc_14C12 ;~ 0396:2CCD
cs=0x396;eip=0x002ccf; 	R(JMP(loc_14b83));	// 9406 jmp     loc_14B83 ;~ 0396:2CCF
loc_14c12:
	// 4895 
cs=0x396;eip=0x002cd2; 	X(PUSH(word_3a3e6));	// 9410 push    word_3A3E6 ;~ 0396:2CD2
cs=0x396;eip=0x002cd6; 	T(MOV(ax, 0x2C8));	// 9411 mov     ax, 2C8h ;~ 0396:2CD6
cs=0x396;eip=0x002cd9; 	X(PUSH(ax));	// 9412 push    ax ;~ 0396:2CD9
cs=0x396;eip=0x002cda; 	T(MOV(ax, 1));	// 9413 mov     ax, 1 ;~ 0396:2CDA
cs=0x396;eip=0x002cdd; 	X(PUSH(ax));	// 9414 push    ax ;~ 0396:2CDD
cs=0x396;eip=0x002cde; 	T(MOV(ax, 0x8E04));	// 9415 mov     ax, 8E04h ;~ 0396:2CDE
cs=0x396;eip=0x002ce1; 	X(PUSH(ax));	// 9416 push    ax ;~ 0396:2CE1
cs=0x396;eip=0x002ce2; 	R(CALLF(sub_29734,0));	// 9417 call    sub_29734 ;~ 0396:2CE2
cs=0x396;eip=0x002ce7; 	T(ADD(sp, 8));	// 9418 add     sp, 8 ;~ 0396:2CE7
cs=0x396;eip=0x002cea; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9419 mov     [bp+var_2], ax ;~ 0396:2CEA
cs=0x396;eip=0x002ced; 	T(CMP(ax, 0x2C8));	// 9420 cmp     ax, 2C8h ;~ 0396:2CED
cs=0x396;eip=0x002cf0; 	R(JZ(loc_14c35));	// 9421 jz      short loc_14C35 ;~ 0396:2CF0
cs=0x396;eip=0x002cf2; 	R(JMP(loc_14b83));	// 9422 jmp     loc_14B83 ;~ 0396:2CF2
loc_14c35:
	// 4896 
cs=0x396;eip=0x002cf5; 	X(PUSH(word_3a3e6));	// 9426 push    word_3A3E6 ;~ 0396:2CF5
cs=0x396;eip=0x002cf9; 	T(MOV(ax, 0x196));	// 9427 mov     ax, 196h ;~ 0396:2CF9
cs=0x396;eip=0x002cfc; 	X(PUSH(ax));	// 9428 push    ax ;~ 0396:2CFC
cs=0x396;eip=0x002cfd; 	T(MOV(ax, 1));	// 9429 mov     ax, 1 ;~ 0396:2CFD
cs=0x396;eip=0x002d00; 	X(PUSH(ax));	// 9430 push    ax ;~ 0396:2D00
cs=0x396;eip=0x002d01; 	T(MOV(ax, 0x81E));	// 9431 mov     ax, 81Eh ;~ 0396:2D01
cs=0x396;eip=0x002d04; 	X(PUSH(ax));	// 9432 push    ax ;~ 0396:2D04
cs=0x396;eip=0x002d05; 	R(CALLF(sub_29734,0));	// 9433 call    sub_29734 ;~ 0396:2D05
cs=0x396;eip=0x002d0a; 	T(ADD(sp, 8));	// 9434 add     sp, 8 ;~ 0396:2D0A
cs=0x396;eip=0x002d0d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9435 mov     [bp+var_2], ax ;~ 0396:2D0D
cs=0x396;eip=0x002d10; 	T(CMP(ax, 0x196));	// 9436 cmp     ax, 196h ;~ 0396:2D10
cs=0x396;eip=0x002d13; 	R(JZ(loc_14c58));	// 9437 jz      short loc_14C58 ;~ 0396:2D13
cs=0x396;eip=0x002d15; 	R(JMP(loc_14b83));	// 9438 jmp     loc_14B83 ;~ 0396:2D15
loc_14c58:
	// 4897 
cs=0x396;eip=0x002d18; 	X(PUSH(word_3a3e6));	// 9442 push    word_3A3E6 ;~ 0396:2D18
cs=0x396;eip=0x002d1c; 	R(CALLF(sub_29640,0));	// 9443 call    sub_29640 ;~ 0396:2D1C
cs=0x396;eip=0x002d21; 	T(ADD(sp, 2));	// 9444 add     sp, 2 ;~ 0396:2D21
cs=0x396;eip=0x002d24; 	T(MOV(ax, 0x1048));	// 9445 mov     ax, 1048h ;~ 0396:2D24
cs=0x396;eip=0x002d27; 	X(PUSH(ax));	// 9446 push    ax ;~ 0396:2D27
cs=0x396;eip=0x002d28; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 9447 mov     ax, [bp+arg_2] ;~ 0396:2D28
cs=0x396;eip=0x002d2b; 	T(ADD(ax, 9));	// 9448 add     ax, 9 ;~ 0396:2D2B
cs=0x396;eip=0x002d2e; 	X(PUSH(ax));	// 9449 push    ax ;~ 0396:2D2E
cs=0x396;eip=0x002d2f; 	R(CALLF(sub_29b46,0));	// 9450 call    sub_29B46 ;~ 0396:2D2F
cs=0x396;eip=0x002d34; 	T(ADD(sp, 4));	// 9451 add     sp, 4 ;~ 0396:2D34
cs=0x396;eip=0x002d37; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 9452 mov     [bp+var_4], 0 ;~ 0396:2D37
loc_14c7c:
	// 4898 
cs=0x396;eip=0x002d3c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 9455 mov     bx, [bp+var_4] ;~ 0396:2D3C
cs=0x396;eip=0x002d3f; 	T(SHL(bx, 1));	// 9456 shl     bx, 1 ;~ 0396:2D3F
cs=0x396;eip=0x002d41; 	T(SHL(bx, 1));	// 9457 shl     bx, 1 ;~ 0396:2D41
cs=0x396;eip=0x002d43; 	T(SUB(ax, ax));	// 9458 sub     ax, ax ;~ 0396:2D43
cs=0x396;eip=0x002d45; 	X(MOV(*(dw*)(raddr(ds,bx+0x1FC4)), ax));	// 9459 mov     [bx+1FC4h], ax ;~ 0396:2D45
cs=0x396;eip=0x002d49; 	X(MOV(*(dw*)(raddr(ds,bx+0x1FC2)), ax));	// 9460 mov     [bx+1FC2h], ax ;~ 0396:2D49
cs=0x396;eip=0x002d4d; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 9461 inc     [bp+var_4] ;~ 0396:2D4D
cs=0x396;eip=0x002d50; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 7));	// 9462 cmp     [bp+var_4], 7 ;~ 0396:2D50
cs=0x396;eip=0x002d54; 	R(JL(loc_14c7c));	// 9463 jl      short loc_14C7C ;~ 0396:2D54
cs=0x396;eip=0x002d56; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 9464 mov     [bp+var_4], ax ;~ 0396:2D56
loc_14c99:
	// 4899 
cs=0x396;eip=0x002d59; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 9467 mov     bx, [bp+var_4] ;~ 0396:2D59
cs=0x396;eip=0x002d5c; 	X(MOV(*(raddr(ds,bx+0x1FBB)), 0));	// 9468 mov     byte ptr [bx+1FBBh], 0 ;~ 0396:2D5C
cs=0x396;eip=0x002d61; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 9469 inc     [bp+var_4] ;~ 0396:2D61
cs=0x396;eip=0x002d64; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 7));	// 9470 cmp     [bp+var_4], 7 ;~ 0396:2D64
cs=0x396;eip=0x002d68; 	R(JL(loc_14c99));	// 9471 jl      short loc_14C99 ;~ 0396:2D68
cs=0x396;eip=0x002d6a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 9472 mov     [bp+var_4], 0 ;~ 0396:2D6A
cs=0x396;eip=0x002d6f; 	R(JMP(loc_14cd1));	// 9473 jmp     short loc_14CD1 ;~ 0396:2D6F
loc_14cb2:
	// 4900 
cs=0x396;eip=0x002d72; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 9478 inc     [bp+var_6] ;~ 0396:2D72
loc_14cb5:
	// 4901 
cs=0x396;eip=0x002d75; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0x0F));	// 9481 cmp     [bp+var_6], 0Fh ;~ 0396:2D75
cs=0x396;eip=0x002d79; 	R(JGE(loc_14cce));	// 9482 jge     short loc_14CCE ;~ 0396:2D79
cs=0x396;eip=0x002d7b; 	T(MOV(ax, 0x12));	// 9483 mov     ax, 12h ;~ 0396:2D7B
cs=0x396;eip=0x002d7e; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_4))));	// 9484 imul    [bp+var_4] ;~ 0396:2D7E
cs=0x396;eip=0x002d81; 	T(MOV(si, ax));	// 9485 mov     si, ax ;~ 0396:2D81
cs=0x396;eip=0x002d83; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 9486 mov     bx, [bp+var_6] ;~ 0396:2D83
cs=0x396;eip=0x002d86; 	X(MOV(*(raddr(ds,bx+si+0x1FE0)), 0x20));	// 9487 mov     byte ptr [bx+si+1FE0h], 20h ; ' ' ;~ 0396:2D86
cs=0x396;eip=0x002d8b; 	R(JMP(loc_14cb2));	// 9488 jmp     short loc_14CB2 ;~ 0396:2D8B
loc_14cce:
	// 4902 
cs=0x396;eip=0x002d8e; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 9493 inc     [bp+var_4] ;~ 0396:2D8E
loc_14cd1:
	// 4903 
cs=0x396;eip=0x002d91; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 7));	// 9496 cmp     [bp+var_4], 7 ;~ 0396:2D91
cs=0x396;eip=0x002d95; 	R(JGE(loc_14cde));	// 9497 jge     short loc_14CDE ;~ 0396:2D95
cs=0x396;eip=0x002d97; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 9498 mov     [bp+var_6], 0 ;~ 0396:2D97
cs=0x396;eip=0x002d9c; 	R(JMP(loc_14cb5));	// 9499 jmp     short loc_14CB5 ;~ 0396:2D9C
loc_14cde:
	// 4904 
cs=0x396;eip=0x002d9e; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 9503 mov     [bp+var_4], 0 ;~ 0396:2D9E
loc_14ce3:
	// 4905 
cs=0x396;eip=0x002da3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 9506 mov     bx, [bp+var_4] ;~ 0396:2DA3
cs=0x396;eip=0x002da6; 	X(MOV(*(raddr(ds,bx+0x205C)), 0));	// 9507 mov     byte ptr [bx+205Ch], 0 ;~ 0396:2DA6
cs=0x396;eip=0x002dab; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 9508 inc     [bp+var_4] ;~ 0396:2DAB
cs=0x396;eip=0x002dae; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x120));	// 9509 cmp     [bp+var_4], 120h ;~ 0396:2DAE
cs=0x396;eip=0x002db3; 	R(JL(loc_14ce3));	// 9510 jl      short loc_14CE3 ;~ 0396:2DB3
cs=0x396;eip=0x002db5; 	T(MOV(ax, 0x104C));	// 9511 mov     ax, 104Ch ;~ 0396:2DB5
cs=0x396;eip=0x002db8; 	X(PUSH(ax));	// 9512 push    ax ;~ 0396:2DB8
cs=0x396;eip=0x002db9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 9513 push    [bp+arg_2] ;~ 0396:2DB9
cs=0x396;eip=0x002dbc; 	R(CALLF(sub_29708,0));	// 9514 call    sub_29708 ;~ 0396:2DBC
cs=0x396;eip=0x002dc1; 	T(ADD(sp, 4));	// 9515 add     sp, 4 ;~ 0396:2DC1
cs=0x396;eip=0x002dc4; 	X(MOV(word_3a3e6, ax));	// 9516 mov     word_3A3E6, ax ;~ 0396:2DC4
cs=0x396;eip=0x002dc7; 	T(OR(ax, ax));	// 9517 or      ax, ax ;~ 0396:2DC7
cs=0x396;eip=0x002dc9; 	R(JNZ(loc_14d12));	// 9518 jnz     short loc_14D12 ;~ 0396:2DC9
loc_14d0b:
	// 4906 
cs=0x396;eip=0x002dcb; 	T(SUB(ax, ax));	// 9521 sub     ax, ax ;~ 0396:2DCB
cs=0x396;eip=0x002dcd; 	X(POP(si));	// 9522 pop     si ;~ 0396:2DCD
cs=0x396;eip=0x002dce; 	T(MOV(sp, bp));	// 9523 mov     sp, bp ;~ 0396:2DCE
cs=0x396;eip=0x002dd0; 	X(POP(bp));	// 9524 pop     bp ;~ 0396:2DD0
cs=0x396;eip=0x002dd1; 	R(RETF(0));	// 9525 retf ;~ 0396:2DD1
loc_14d12:
	// 4907 
cs=0x396;eip=0x002dd2; 	X(PUSH(word_3a3e6));	// 9529 push    word_3A3E6 ;~ 0396:2DD2
cs=0x396;eip=0x002dd6; 	T(MOV(ax, 0x1C2));	// 9530 mov     ax, 1C2h ;~ 0396:2DD6
cs=0x396;eip=0x002dd9; 	X(PUSH(ax));	// 9531 push    ax ;~ 0396:2DD9
cs=0x396;eip=0x002dda; 	T(MOV(ax, 1));	// 9532 mov     ax, 1 ;~ 0396:2DDA
cs=0x396;eip=0x002ddd; 	X(PUSH(ax));	// 9533 push    ax ;~ 0396:2DDD
cs=0x396;eip=0x002dde; 	T(MOV(ax, 0x2500));	// 9534 mov     ax, 2500h ;~ 0396:2DDE
cs=0x396;eip=0x002de1; 	X(PUSH(ax));	// 9535 push    ax ;~ 0396:2DE1
cs=0x396;eip=0x002de2; 	R(CALLF(sub_29734,0));	// 9536 call    sub_29734 ;~ 0396:2DE2
cs=0x396;eip=0x002de7; 	T(ADD(sp, 8));	// 9537 add     sp, 8 ;~ 0396:2DE7
cs=0x396;eip=0x002dea; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 9538 mov     [bp+var_4], ax ;~ 0396:2DEA
cs=0x396;eip=0x002ded; 	T(CMP(ax, 0x1C2));	// 9539 cmp     ax, 1C2h ;~ 0396:2DED
cs=0x396;eip=0x002df0; 	R(JNZ(loc_14d96));	// 9540 jnz     short loc_14D96 ;~ 0396:2DF0
cs=0x396;eip=0x002df2; 	X(PUSH(word_3a3e6));	// 9541 push    word_3A3E6 ;~ 0396:2DF2
cs=0x396;eip=0x002df6; 	T(MOV(ax, 1));	// 9542 mov     ax, 1 ;~ 0396:2DF6
cs=0x396;eip=0x002df9; 	X(PUSH(ax));	// 9543 push    ax ;~ 0396:2DF9
cs=0x396;eip=0x002dfa; 	X(PUSH(ax));	// 9544 push    ax ;~ 0396:2DFA
cs=0x396;eip=0x002dfb; 	T(MOV(ax, 0x2500));	// 9545 mov     ax, 2500h ;~ 0396:2DFB
cs=0x396;eip=0x002dfe; 	X(PUSH(ax));	// 9546 push    ax ;~ 0396:2DFE
cs=0x396;eip=0x002dff; 	R(CALLF(sub_29734,0));	// 9547 call    sub_29734 ;~ 0396:2DFF
cs=0x396;eip=0x002e04; 	T(ADD(sp, 8));	// 9548 add     sp, 8 ;~ 0396:2E04
cs=0x396;eip=0x002e07; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 9549 mov     [bp+var_4], ax ;~ 0396:2E07
cs=0x396;eip=0x002e0a; 	T(OR(ax, ax));	// 9550 or      ax, ax ;~ 0396:2E0A
cs=0x396;eip=0x002e0c; 	R(JNZ(loc_14d96));	// 9551 jnz     short loc_14D96 ;~ 0396:2E0C
cs=0x396;eip=0x002e0e; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 9552 mov     [bp+var_6], 0 ;~ 0396:2E0E
cs=0x396;eip=0x002e13; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 9553 mov     [bp+var_4], 0 ;~ 0396:2E13
loc_14d58:
	// 4908 
cs=0x396;eip=0x002e18; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 9556 mov     bx, [bp+var_4] ;~ 0396:2E18
cs=0x396;eip=0x002e1b; 	T(MOV(al, *(raddr(ds,bx+0x2500))));	// 9557 mov     al, [bx+2500h] ;~ 0396:2E1B
cs=0x396;eip=0x002e1f; 	T(SUB(ah, ah));	// 9558 sub     ah, ah ;~ 0396:2E1F
cs=0x396;eip=0x002e21; 	X(XOR(*(dw*)(raddr(ss,bp+var_6)), ax));	// 9559 xor     [bp+var_6], ax ;~ 0396:2E21
cs=0x396;eip=0x002e24; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 9560 inc     [bp+var_4] ;~ 0396:2E24
cs=0x396;eip=0x002e27; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x1C1));	// 9561 cmp     [bp+var_4], 1C1h ;~ 0396:2E27
cs=0x396;eip=0x002e2c; 	R(JL(loc_14d58));	// 9562 jl      short loc_14D58 ;~ 0396:2E2C
cs=0x396;eip=0x002e2e; 	X(XOR(*(db*)(raddr(ss,bp+var_6)), 0x5B));	// 9563 xor     byte ptr [bp+var_6], 5Bh ;~ 0396:2E2E
cs=0x396;eip=0x002e32; 	T(MOV(al, byte_2e501));	// 9564 mov     al, byte_2E501 ;~ 0396:2E32
cs=0x396;eip=0x002e35; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 9565 cmp     [bp+var_6], ax ;~ 0396:2E35
cs=0x396;eip=0x002e38; 	R(JNZ(loc_14d96));	// 9566 jnz     short loc_14D96 ;~ 0396:2E38
cs=0x396;eip=0x002e3a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 9567 mov     [bp+var_4], 0 ;~ 0396:2E3A
loc_14d7f:
	// 4909 
cs=0x396;eip=0x002e3f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 9570 mov     bx, [bp+var_4] ;~ 0396:2E3F
cs=0x396;eip=0x002e42; 	T(MOV(si, bx));	// 9571 mov     si, bx ;~ 0396:2E42
cs=0x396;eip=0x002e44; 	T(MOV(al, *(raddr(ds,si+0x2500))));	// 9572 mov     al, [si+2500h] ;~ 0396:2E44
cs=0x396;eip=0x002e48; 	X(MOV(*(raddr(ds,bx+0x1FBB)), al));	// 9573 mov     [bx+1FBBh], al ;~ 0396:2E48
cs=0x396;eip=0x002e4c; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 9574 inc     [bp+var_4] ;~ 0396:2E4C
cs=0x396;eip=0x002e4f; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x1C1));	// 9575 cmp     [bp+var_4], 1C1h ;~ 0396:2E4F
cs=0x396;eip=0x002e54; 	R(JL(loc_14d7f));	// 9576 jl      short loc_14D7F ;~ 0396:2E54
loc_14d96:
	// 4910 
cs=0x396;eip=0x002e56; 	X(PUSH(word_3a3e6));	// 9580 push    word_3A3E6 ;~ 0396:2E56
cs=0x396;eip=0x002e5a; 	R(CALLF(sub_29640,0));	// 9581 call    sub_29640 ;~ 0396:2E5A
cs=0x396;eip=0x002e5f; 	T(ADD(sp, 2));	// 9582 add     sp, 2 ;~ 0396:2E5F
cs=0x396;eip=0x002e62; 	R(JMP(loc_14d0b));	// 9583 jmp     loc_14D0B ;~ 0396:2E62
sub_14da6:
	// 9593 
#undef var_4
#define var_4 -4
	// 9596 var_4           = word ptr -4 ;~ 0396:2E66
#undef var_2
#define var_2 -2
	// 9597 var_2           = word ptr -2 ;~ 0396:2E66
ret_396_2e66:
	// 4911 
cs=0x396;eip=0x002e66; 	X(PUSH(bp));	// 9599 push    bp ;~ 0396:2E66
cs=0x396;eip=0x002e67; 	T(MOV(bp, sp));	// 9600 mov     bp, sp ;~ 0396:2E67
cs=0x396;eip=0x002e69; 	T(SUB(sp, 4));	// 9601 sub     sp, 4 ;~ 0396:2E69
cs=0x396;eip=0x002e6c; 	X(PUSH(cs));	// 9602 push    cs ;~ 0396:2E6C
cs=0x396;eip=0x002e6d; 	R(CALL(sub_14752,0));	// 9603 call    near ptr sub_14752 ;~ 0396:2E6D
cs=0x396;eip=0x002e70; 	T(MOV(ax, word_2c942));	// 9604 mov     ax, word_2C942 ;~ 0396:2E70
cs=0x396;eip=0x002e73; 	T(MOV(cl, 3));	// 9605 mov     cl, 3 ;~ 0396:2E73
cs=0x396;eip=0x002e75; 	T(SHL(ax, cl));	// 9606 shl     ax, cl ;~ 0396:2E75
cs=0x396;eip=0x002e77; 	T(ADD(ax, 0x0A34));	// 9607 add     ax, 0A34h ;~ 0396:2E77
cs=0x396;eip=0x002e7a; 	X(PUSH(ax));	// 9608 push    ax ;~ 0396:2E7A
cs=0x396;eip=0x002e7b; 	T(MOV(ax, 0x0ADC));	// 9609 mov     ax, 0ADCh ;~ 0396:2E7B
cs=0x396;eip=0x002e7e; 	X(PUSH(ax));	// 9610 push    ax ;~ 0396:2E7E
cs=0x396;eip=0x002e7f; 	R(CALLF(sub_29b46,0));	// 9611 call    sub_29B46 ;~ 0396:2E7F
cs=0x396;eip=0x002e84; 	T(ADD(sp, 4));	// 9612 add     sp, 4 ;~ 0396:2E84
cs=0x396;eip=0x002e87; 	T(MOV(ax, 0x104F));	// 9613 mov     ax, 104Fh ;~ 0396:2E87
cs=0x396;eip=0x002e8a; 	X(PUSH(ax));	// 9614 push    ax ;~ 0396:2E8A
cs=0x396;eip=0x002e8b; 	T(MOV(ax, 0x0AE3));	// 9615 mov     ax, 0AE3h ;~ 0396:2E8B
cs=0x396;eip=0x002e8e; 	X(PUSH(ax));	// 9616 push    ax ;~ 0396:2E8E
cs=0x396;eip=0x002e8f; 	R(CALLF(sub_29b46,0));	// 9617 call    sub_29B46 ;~ 0396:2E8F
cs=0x396;eip=0x002e94; 	T(ADD(sp, 4));	// 9618 add     sp, 4 ;~ 0396:2E94
cs=0x396;eip=0x002e97; 	T(MOV(ax, 0x1053));	// 9619 mov     ax, 1053h ;~ 0396:2E97
cs=0x396;eip=0x002e9a; 	X(PUSH(ax));	// 9620 push    ax ;~ 0396:2E9A
cs=0x396;eip=0x002e9b; 	T(MOV(ax, 0x0ADA));	// 9621 mov     ax, 0ADAh ;~ 0396:2E9B
cs=0x396;eip=0x002e9e; 	X(PUSH(ax));	// 9622 push    ax ;~ 0396:2E9E
cs=0x396;eip=0x002e9f; 	R(CALLF(sub_29708,0));	// 9623 call    sub_29708 ;~ 0396:2E9F
cs=0x396;eip=0x002ea4; 	T(ADD(sp, 4));	// 9624 add     sp, 4 ;~ 0396:2EA4
cs=0x396;eip=0x002ea7; 	X(MOV(word_3a3e6, ax));	// 9625 mov     word_3A3E6, ax ;~ 0396:2EA7
cs=0x396;eip=0x002eaa; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 9626 mov     [bp+var_4], 0 ;~ 0396:2EAA
cs=0x396;eip=0x002eaf; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 9627 mov     [bp+var_2], 0 ;~ 0396:2EAF
loc_14df4:
	// 4912 
cs=0x396;eip=0x002eb4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9630 mov     bx, [bp+var_2] ;~ 0396:2EB4
cs=0x396;eip=0x002eb7; 	T(MOV(al, *(raddr(ds,bx+0x1FBB))));	// 9631 mov     al, [bx+1FBBh] ;~ 0396:2EB7
cs=0x396;eip=0x002ebb; 	T(SUB(ah, ah));	// 9632 sub     ah, ah ;~ 0396:2EBB
cs=0x396;eip=0x002ebd; 	X(XOR(*(dw*)(raddr(ss,bp+var_4)), ax));	// 9633 xor     [bp+var_4], ax ;~ 0396:2EBD
cs=0x396;eip=0x002ec0; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9634 inc     [bp+var_2] ;~ 0396:2EC0
cs=0x396;eip=0x002ec3; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x1C1));	// 9635 cmp     [bp+var_2], 1C1h ;~ 0396:2EC3
cs=0x396;eip=0x002ec8; 	R(JL(loc_14df4));	// 9636 jl      short loc_14DF4 ;~ 0396:2EC8
cs=0x396;eip=0x002eca; 	X(XOR(*(db*)(raddr(ss,bp+var_4)), 0x5B));	// 9637 xor     byte ptr [bp+var_4], 5Bh ;~ 0396:2ECA
cs=0x396;eip=0x002ece; 	T(MOV(al, *(db*)(raddr(ss,bp+var_4))));	// 9638 mov     al, byte ptr [bp+var_4] ;~ 0396:2ECE
cs=0x396;eip=0x002ed1; 	X(MOV(byte_2dfbc, al));	// 9639 mov     byte_2DFBC, al ;~ 0396:2ED1
cs=0x396;eip=0x002ed4; 	X(PUSH(word_3a3e6));	// 9640 push    word_3A3E6 ;~ 0396:2ED4
cs=0x396;eip=0x002ed8; 	T(MOV(ax, 0x1C2));	// 9641 mov     ax, 1C2h ;~ 0396:2ED8
cs=0x396;eip=0x002edb; 	X(PUSH(ax));	// 9642 push    ax ;~ 0396:2EDB
cs=0x396;eip=0x002edc; 	T(MOV(ax, 1));	// 9643 mov     ax, 1 ;~ 0396:2EDC
cs=0x396;eip=0x002edf; 	X(PUSH(ax));	// 9644 push    ax ;~ 0396:2EDF
cs=0x396;eip=0x002ee0; 	T(MOV(ax, 0x1FBB));	// 9645 mov     ax, 1FBBh ;~ 0396:2EE0
cs=0x396;eip=0x002ee3; 	X(PUSH(ax));	// 9646 push    ax ;~ 0396:2EE3
cs=0x396;eip=0x002ee4; 	R(CALLF(sub_29926,0));	// 9647 call    sub_29926 ;~ 0396:2EE4
cs=0x396;eip=0x002ee9; 	T(ADD(sp, 8));	// 9648 add     sp, 8 ;~ 0396:2EE9
cs=0x396;eip=0x002eec; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9649 mov     [bp+var_2], ax ;~ 0396:2EEC
cs=0x396;eip=0x002eef; 	T(CMP(ax, 0x1C2));	// 9650 cmp     ax, 1C2h ;~ 0396:2EEF
cs=0x396;eip=0x002ef2; 	R(JGE(loc_14e40));	// 9651 jge     short loc_14E40 ;~ 0396:2EF2
cs=0x396;eip=0x002ef4; 	T(MOV(ax, 3));	// 9652 mov     ax, 3 ;~ 0396:2EF4
cs=0x396;eip=0x002ef7; 	X(PUSH(ax));	// 9653 push    ax ;~ 0396:2EF7
cs=0x396;eip=0x002ef8; 	R(CALLF(sub_10874,0));	// 9654 call    sub_10874 ;~ 0396:2EF8
cs=0x396;eip=0x002efd; 	T(ADD(sp, 2));	// 9656 add     sp, 2 ;~ 0396:2EFD
loc_14e40:
	// 4913 
cs=0x396;eip=0x002f00; 	X(PUSH(word_3a3e6));	// 9659 push    word_3A3E6 ;~ 0396:2F00
cs=0x396;eip=0x002f04; 	R(CALLF(sub_29640,0));	// 9660 call    sub_29640 ;~ 0396:2F04
cs=0x396;eip=0x002f09; 	T(MOV(sp, bp));	// 9661 mov     sp, bp ;~ 0396:2F09
cs=0x396;eip=0x002f0b; 	X(POP(bp));	// 9662 pop     bp ;~ 0396:2F0B
cs=0x396;eip=0x002f0c; 	R(RETF(0));	// 9663 retf ;~ 0396:2F0C
sub_14e4e:
	// 9673 
#undef var_a
#define var_a -0x0A
	// 9675 var_A           = byte ptr -0Ah ;~ 0396:2F0E
#undef var_8
#define var_8 -8
	// 9676 var_8           = word ptr -8 ;~ 0396:2F0E
#undef var_6
#define var_6 -6
	// 9677 var_6           = word ptr -6 ;~ 0396:2F0E
#undef var_4
#define var_4 -4
	// 9678 var_4           = word ptr -4 ;~ 0396:2F0E
#undef var_2
#define var_2 -2
	// 9679 var_2           = word ptr -2 ;~ 0396:2F0E
ret_396_2f0e:
	// 4914 
cs=0x396;eip=0x002f0e; 	X(PUSH(bp));	// 9681 push    bp ;~ 0396:2F0E
cs=0x396;eip=0x002f0f; 	T(MOV(bp, sp));	// 9682 mov     bp, sp ;~ 0396:2F0F
cs=0x396;eip=0x002f11; 	T(SUB(sp, 0x0A));	// 9683 sub     sp, 0Ah ;~ 0396:2F11
cs=0x396;eip=0x002f14; 	T(SUB(ax, ax));	// 9684 sub     ax, ax ;~ 0396:2F14
cs=0x396;eip=0x002f16; 	X(MOV(word_2beda, ax));	// 9685 mov     word_2BEDA, ax ;~ 0396:2F16
cs=0x396;eip=0x002f19; 	X(PUSH(ax));	// 9686 push    ax ;~ 0396:2F19
cs=0x396;eip=0x002f1a; 	R(CALLF(sub_2714e,0));	// 9687 call    far ptr sub_2714E ;~ 0396:2F1A
cs=0x396;eip=0x002f1f; 	T(ADD(sp, 2));	// 9688 add     sp, 2 ;~ 0396:2F1F
cs=0x396;eip=0x002f22; 	T(SUB(ax, ax));	// 9689 sub     ax, ax ;~ 0396:2F22
cs=0x396;eip=0x002f24; 	X(PUSH(ax));	// 9690 push    ax ;~ 0396:2F24
cs=0x396;eip=0x002f25; 	R(CALLF(sub_27031,0));	// 9691 call    far ptr sub_27031 ;~ 0396:2F25
cs=0x396;eip=0x002f2a; 	T(ADD(sp, 2));	// 9692 add     sp, 2 ;~ 0396:2F2A
cs=0x396;eip=0x002f2d; 	T(MOV(ax, 0x0C7));	// 9693 mov     ax, 0C7h ; '«' ;~ 0396:2F2D
cs=0x396;eip=0x002f30; 	X(PUSH(ax));	// 9694 push    ax ;~ 0396:2F30
cs=0x396;eip=0x002f31; 	T(SUB(ax, ax));	// 9695 sub     ax, ax ;~ 0396:2F31
cs=0x396;eip=0x002f33; 	X(PUSH(ax));	// 9696 push    ax ;~ 0396:2F33
cs=0x396;eip=0x002f34; 	T(MOV(ax, 0x13F));	// 9697 mov     ax, 13Fh ;~ 0396:2F34
cs=0x396;eip=0x002f37; 	X(PUSH(ax));	// 9698 push    ax ;~ 0396:2F37
cs=0x396;eip=0x002f38; 	T(SUB(ax, ax));	// 9699 sub     ax, ax ;~ 0396:2F38
cs=0x396;eip=0x002f3a; 	X(PUSH(ax));	// 9700 push    ax ;~ 0396:2F3A
cs=0x396;eip=0x002f3b; 	R(CALLF(sub_2785b,0));	// 9701 call    far ptr sub_2785B ;~ 0396:2F3B
cs=0x396;eip=0x002f40; 	T(ADD(sp, 8));	// 9702 add     sp, 8 ;~ 0396:2F40
cs=0x396;eip=0x002f43; 	T(MOV(ax, 0x0A));	// 9703 mov     ax, 0Ah ;~ 0396:2F43
cs=0x396;eip=0x002f46; 	X(PUSH(ax));	// 9704 push    ax ;~ 0396:2F46
cs=0x396;eip=0x002f47; 	R(CALLF(sub_27031,0));	// 9705 call    far ptr sub_27031 ;~ 0396:2F47
cs=0x396;eip=0x002f4c; 	T(ADD(sp, 2));	// 9706 add     sp, 2 ;~ 0396:2F4C
cs=0x396;eip=0x002f4f; 	T(MOV(ax, 0x0AA));	// 9707 mov     ax, 0AAh ; '™' ;~ 0396:2F4F
cs=0x396;eip=0x002f52; 	X(PUSH(ax));	// 9708 push    ax ;~ 0396:2F52
cs=0x396;eip=0x002f53; 	T(MOV(ax, 0x29));	// 9709 mov     ax, 29h ; ')' ;~ 0396:2F53
cs=0x396;eip=0x002f56; 	X(PUSH(ax));	// 9710 push    ax ;~ 0396:2F56
cs=0x396;eip=0x002f57; 	T(MOV(ax, 0x9C));	// 9711 mov     ax, 9Ch ; 'ú' ;~ 0396:2F57
cs=0x396;eip=0x002f5a; 	X(PUSH(ax));	// 9712 push    ax ;~ 0396:2F5A
cs=0x396;eip=0x002f5b; 	T(MOV(ax, 4));	// 9713 mov     ax, 4 ;~ 0396:2F5B
cs=0x396;eip=0x002f5e; 	X(PUSH(ax));	// 9714 push    ax ;~ 0396:2F5E
cs=0x396;eip=0x002f5f; 	X(PUSH(cs));	// 9715 push    cs ;~ 0396:2F5F
cs=0x396;eip=0x002f60; 	R(CALL(sub_137a4,0));	// 9716 call    near ptr sub_137A4 ;~ 0396:2F60
cs=0x396;eip=0x002f63; 	T(ADD(sp, 8));	// 9717 add     sp, 8 ;~ 0396:2F63
cs=0x396;eip=0x002f66; 	T(MOV(ax, 0x0AA));	// 9718 mov     ax, 0AAh ; '™' ;~ 0396:2F66
cs=0x396;eip=0x002f69; 	X(PUSH(ax));	// 9719 push    ax ;~ 0396:2F69
cs=0x396;eip=0x002f6a; 	T(MOV(ax, 0x29));	// 9720 mov     ax, 29h ; ')' ;~ 0396:2F6A
cs=0x396;eip=0x002f6d; 	X(PUSH(ax));	// 9721 push    ax ;~ 0396:2F6D
cs=0x396;eip=0x002f6e; 	T(MOV(ax, 0x13C));	// 9722 mov     ax, 13Ch ;~ 0396:2F6E
cs=0x396;eip=0x002f71; 	X(PUSH(ax));	// 9723 push    ax ;~ 0396:2F71
cs=0x396;eip=0x002f72; 	T(MOV(ax, 0x0A4));	// 9724 mov     ax, 0A4h ; '§' ;~ 0396:2F72
cs=0x396;eip=0x002f75; 	X(PUSH(ax));	// 9725 push    ax ;~ 0396:2F75
cs=0x396;eip=0x002f76; 	X(PUSH(cs));	// 9726 push    cs ;~ 0396:2F76
cs=0x396;eip=0x002f77; 	R(CALL(sub_137a4,0));	// 9727 call    near ptr sub_137A4 ;~ 0396:2F77
cs=0x396;eip=0x002f7a; 	T(ADD(sp, 8));	// 9728 add     sp, 8 ;~ 0396:2F7A
cs=0x396;eip=0x002f7d; 	T(SUB(ax, ax));	// 9729 sub     ax, ax ;~ 0396:2F7D
cs=0x396;eip=0x002f7f; 	X(PUSH(ax));	// 9730 push    ax ;~ 0396:2F7F
cs=0x396;eip=0x002f80; 	T(MOV(ax, 0x0F));	// 9731 mov     ax, 0Fh ;~ 0396:2F80
cs=0x396;eip=0x002f83; 	X(PUSH(ax));	// 9732 push    ax ;~ 0396:2F83
cs=0x396;eip=0x002f84; 	R(CALLF(sub_1c8f3,0));	// 9733 call    sub_1C8F3 ;~ 0396:2F84
cs=0x396;eip=0x002f89; 	T(ADD(sp, 4));	// 9734 add     sp, 4 ;~ 0396:2F89
cs=0x396;eip=0x002f8c; 	T(SUB(ax, ax));	// 9735 sub     ax, ax ;~ 0396:2F8C
cs=0x396;eip=0x002f8e; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 9736 mov     [bp+var_8], ax ;~ 0396:2F8E
cs=0x396;eip=0x002f91; 	X(PUSH(ax));	// 9737 push    ax ;~ 0396:2F91
cs=0x396;eip=0x002f92; 	T(MOV(ax, 0x1F7E));	// 9738 mov     ax, 1F7Eh ;~ 0396:2F92
cs=0x396;eip=0x002f95; 	X(PUSH(ax));	// 9739 push    ax ;~ 0396:2F95
cs=0x396;eip=0x002f96; 	X(PUSH(cs));	// 9740 push    cs ;~ 0396:2F96
cs=0x396;eip=0x002f97; 	R(CALL(sub_139c2,0));	// 9741 call    near ptr sub_139C2 ;~ 0396:2F97
cs=0x396;eip=0x002f9a; 	T(ADD(sp, 4));	// 9742 add     sp, 4 ;~ 0396:2F9A
cs=0x396;eip=0x002f9d; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 9743 mov     [bp+var_8], ax ;~ 0396:2F9D
cs=0x396;eip=0x002fa0; 	T(SUB(ax, ax));	// 9744 sub     ax, ax ;~ 0396:2FA0
cs=0x396;eip=0x002fa2; 	X(PUSH(ax));	// 9745 push    ax ;~ 0396:2FA2
cs=0x396;eip=0x002fa3; 	T(MOV(ax, 0x0E));	// 9746 mov     ax, 0Eh ;~ 0396:2FA3
cs=0x396;eip=0x002fa6; 	X(PUSH(ax));	// 9747 push    ax ;~ 0396:2FA6
cs=0x396;eip=0x002fa7; 	R(CALLF(sub_1c8f3,0));	// 9748 call    sub_1C8F3 ;~ 0396:2FA7
cs=0x396;eip=0x002fac; 	T(ADD(sp, 4));	// 9749 add     sp, 4 ;~ 0396:2FAC
cs=0x396;eip=0x002faf; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 9750 push    [bp+var_8] ;~ 0396:2FAF
cs=0x396;eip=0x002fb2; 	T(MOV(ax, 0x1F7E));	// 9751 mov     ax, 1F7Eh ;~ 0396:2FB2
cs=0x396;eip=0x002fb5; 	X(PUSH(ax));	// 9752 push    ax ;~ 0396:2FB5
cs=0x396;eip=0x002fb6; 	X(PUSH(cs));	// 9753 push    cs ;~ 0396:2FB6
cs=0x396;eip=0x002fb7; 	R(CALL(sub_139c2,0));	// 9754 call    near ptr sub_139C2 ;~ 0396:2FB7
cs=0x396;eip=0x002fba; 	T(ADD(sp, 4));	// 9755 add     sp, 4 ;~ 0396:2FBA
cs=0x396;eip=0x002fbd; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 9756 mov     [bp+var_8], ax ;~ 0396:2FBD
cs=0x396;eip=0x002fc0; 	T(MOV(ax, 0x0D));	// 9757 mov     ax, 0Dh ;~ 0396:2FC0
cs=0x396;eip=0x002fc3; 	X(PUSH(ax));	// 9758 push    ax ;~ 0396:2FC3
cs=0x396;eip=0x002fc4; 	T(MOV(ax, 2));	// 9759 mov     ax, 2 ;~ 0396:2FC4
cs=0x396;eip=0x002fc7; 	X(PUSH(ax));	// 9760 push    ax ;~ 0396:2FC7
cs=0x396;eip=0x002fc8; 	R(CALLF(sub_1c90c,0));	// 9761 call    sub_1C90C ;~ 0396:2FC8
cs=0x396;eip=0x002fcd; 	T(ADD(sp, 4));	// 9762 add     sp, 4 ;~ 0396:2FCD
cs=0x396;eip=0x002fd0; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 9763 mov     [bp+var_4], 0 ;~ 0396:2FD0
loc_14f15:
	// 4915 
cs=0x396;eip=0x002fd5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 9766 mov     bx, [bp+var_4] ;~ 0396:2FD5
cs=0x396;eip=0x002fd8; 	T(MOV(al, *(raddr(ds,bx+0x0A78))));	// 9767 mov     al, [bx+0A78h] ;~ 0396:2FD8
cs=0x396;eip=0x002fdc; 	X(MOV(*(raddr(ss,bp+var_a)), al));	// 9768 mov     [bp+var_A], al ;~ 0396:2FDC
cs=0x396;eip=0x002fdf; 	T(ax = bp+var_a);	// 9769 lea     ax, [bp+var_A] ;~ 0396:2FDF
cs=0x396;eip=0x002fe2; 	X(PUSH(ax));	// 9770 push    ax ;~ 0396:2FE2
cs=0x396;eip=0x002fe3; 	R(CALLF(sub_1c944,0));	// 9771 call    sub_1C944 ;~ 0396:2FE3
cs=0x396;eip=0x002fe8; 	T(ADD(sp, 2));	// 9772 add     sp, 2 ;~ 0396:2FE8
cs=0x396;eip=0x002feb; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 9773 inc     [bp+var_4] ;~ 0396:2FEB
cs=0x396;eip=0x002fee; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x11));	// 9774 cmp     [bp+var_4], 11h ;~ 0396:2FEE
cs=0x396;eip=0x002ff2; 	R(JL(loc_14f15));	// 9775 jl      short loc_14F15 ;~ 0396:2FF2
cs=0x396;eip=0x002ff4; 	T(SUB(ax, ax));	// 9776 sub     ax, ax ;~ 0396:2FF4
cs=0x396;eip=0x002ff6; 	X(PUSH(ax));	// 9777 push    ax ;~ 0396:2FF6
cs=0x396;eip=0x002ff7; 	T(MOV(ax, 0x0B));	// 9778 mov     ax, 0Bh ;~ 0396:2FF7
cs=0x396;eip=0x002ffa; 	X(PUSH(ax));	// 9779 push    ax ;~ 0396:2FFA
cs=0x396;eip=0x002ffb; 	R(CALLF(sub_1c8f3,0));	// 9780 call    sub_1C8F3 ;~ 0396:2FFB
cs=0x396;eip=0x003000; 	T(ADD(sp, 4));	// 9781 add     sp, 4 ;~ 0396:3000
cs=0x396;eip=0x003003; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 9782 mov     [bp+var_2], 0 ;~ 0396:3003
loc_14f48:
	// 4916 
cs=0x396;eip=0x003008; 	T(MOV(ax, 0x0B50));	// 9785 mov     ax, 0B50h ;~ 0396:3008
cs=0x396;eip=0x00300b; 	X(PUSH(ax));	// 9786 push    ax ;~ 0396:300B
cs=0x396;eip=0x00300c; 	T(MOV(ax, 0x2264));	// 9787 mov     ax, 2264h ;~ 0396:300C
cs=0x396;eip=0x00300f; 	X(PUSH(ax));	// 9788 push    ax ;~ 0396:300F
cs=0x396;eip=0x003010; 	T(MOV(ax, 0x0ABA));	// 9789 mov     ax, 0ABAh ;~ 0396:3010
cs=0x396;eip=0x003013; 	X(PUSH(ax));	// 9790 push    ax ;~ 0396:3013
cs=0x396;eip=0x003014; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 9791 push    [bp+var_2] ;~ 0396:3014
cs=0x396;eip=0x003017; 	X(PUSH(cs));	// 9792 push    cs ;~ 0396:3017
cs=0x396;eip=0x003018; 	R(CALL(sub_14930,0));	// 9793 call    near ptr sub_14930 ;~ 0396:3018
cs=0x396;eip=0x00301b; 	T(ADD(sp, 8));	// 9794 add     sp, 8 ;~ 0396:301B
cs=0x396;eip=0x00301e; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 9795 mov     [bp+var_6], ax ;~ 0396:301E
cs=0x396;eip=0x003021; 	T(OR(ax, ax));	// 9796 or      ax, ax ;~ 0396:3021
cs=0x396;eip=0x003023; 	R(JNZ(loc_14f9c));	// 9797 jnz     short loc_14F9C ;~ 0396:3023
cs=0x396;eip=0x003025; 	T(MOV(ax, 1));	// 9798 mov     ax, 1 ;~ 0396:3025
cs=0x396;eip=0x003028; 	X(PUSH(ax));	// 9799 push    ax ;~ 0396:3028
cs=0x396;eip=0x003029; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 9800 mov     ax, [bp+var_2] ;~ 0396:3029
cs=0x396;eip=0x00302c; 	T(ADD(ax, 6));	// 9801 add     ax, 6 ;~ 0396:302C
cs=0x396;eip=0x00302f; 	X(PUSH(ax));	// 9802 push    ax ;~ 0396:302F
cs=0x396;eip=0x003030; 	R(CALLF(sub_1c90c,0));	// 9803 call    sub_1C90C ;~ 0396:3030
cs=0x396;eip=0x003035; 	T(ADD(sp, 4));	// 9804 add     sp, 4 ;~ 0396:3035
cs=0x396;eip=0x003038; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 9805 mov     [bp+var_4], 0 ;~ 0396:3038
loc_14f7d:
	// 4917 
cs=0x396;eip=0x00303d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 9808 mov     bx, [bp+var_4] ;~ 0396:303D
cs=0x396;eip=0x003040; 	T(MOV(al, *(raddr(ds,bx+0x2264))));	// 9809 mov     al, [bx+2264h] ;~ 0396:3040
cs=0x396;eip=0x003044; 	X(MOV(*(raddr(ss,bp+var_a)), al));	// 9810 mov     [bp+var_A], al ;~ 0396:3044
cs=0x396;eip=0x003047; 	T(ax = bp+var_a);	// 9811 lea     ax, [bp+var_A] ;~ 0396:3047
cs=0x396;eip=0x00304a; 	X(PUSH(ax));	// 9812 push    ax ;~ 0396:304A
cs=0x396;eip=0x00304b; 	R(CALLF(sub_1c944,0));	// 9813 call    sub_1C944 ;~ 0396:304B
cs=0x396;eip=0x003050; 	T(ADD(sp, 2));	// 9814 add     sp, 2 ;~ 0396:3050
cs=0x396;eip=0x003053; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 9815 inc     [bp+var_4] ;~ 0396:3053
cs=0x396;eip=0x003056; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x12));	// 9816 cmp     [bp+var_4], 12h ;~ 0396:3056
cs=0x396;eip=0x00305a; 	R(JL(loc_14f7d));	// 9817 jl      short loc_14F7D ;~ 0396:305A
loc_14f9c:
	// 4918 
cs=0x396;eip=0x00305c; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9820 inc     [bp+var_2] ;~ 0396:305C
cs=0x396;eip=0x00305f; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x0E));	// 9821 cmp     [bp+var_2], 0Eh ;~ 0396:305F
cs=0x396;eip=0x003063; 	R(JL(loc_14f48));	// 9822 jl      short loc_14F48 ;~ 0396:3063
cs=0x396;eip=0x003065; 	T(MOV(ax, 0x0B50));	// 9823 mov     ax, 0B50h ;~ 0396:3065
cs=0x396;eip=0x003068; 	X(PUSH(ax));	// 9824 push    ax ;~ 0396:3068
cs=0x396;eip=0x003069; 	T(MOV(ax, 0x2264));	// 9825 mov     ax, 2264h ;~ 0396:3069
cs=0x396;eip=0x00306c; 	X(PUSH(ax));	// 9826 push    ax ;~ 0396:306C
cs=0x396;eip=0x00306d; 	T(MOV(ax, 0x0ABA));	// 9827 mov     ax, 0ABAh ;~ 0396:306D
cs=0x396;eip=0x003070; 	X(PUSH(ax));	// 9828 push    ax ;~ 0396:3070
cs=0x396;eip=0x003071; 	X(PUSH(word_2c93e));	// 9829 push    word_2C93E ;~ 0396:3071
cs=0x396;eip=0x003075; 	X(PUSH(cs));	// 9830 push    cs ;~ 0396:3075
cs=0x396;eip=0x003076; 	R(CALL(sub_14930,0));	// 9831 call    near ptr sub_14930 ;~ 0396:3076
cs=0x396;eip=0x003079; 	T(ADD(sp, 8));	// 9832 add     sp, 8 ;~ 0396:3079
cs=0x396;eip=0x00307c; 	T(SUB(ax, ax));	// 9833 sub     ax, ax ;~ 0396:307C
cs=0x396;eip=0x00307e; 	X(PUSH(ax));	// 9834 push    ax ;~ 0396:307E
cs=0x396;eip=0x00307f; 	T(MOV(ax, 0x0C));	// 9835 mov     ax, 0Ch ;~ 0396:307F
cs=0x396;eip=0x003082; 	X(PUSH(ax));	// 9836 push    ax ;~ 0396:3082
cs=0x396;eip=0x003083; 	R(CALLF(sub_1c8f3,0));	// 9837 call    sub_1C8F3 ;~ 0396:3083
cs=0x396;eip=0x003088; 	T(ADD(sp, 4));	// 9838 add     sp, 4 ;~ 0396:3088
cs=0x396;eip=0x00308b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 9839 mov     [bp+var_2], 0 ;~ 0396:308B
loc_14fd0:
	// 4919 
cs=0x396;eip=0x003090; 	T(MOV(ax, 0x0AEA));	// 9842 mov     ax, 0AEAh ;~ 0396:3090
cs=0x396;eip=0x003093; 	X(PUSH(ax));	// 9843 push    ax ;~ 0396:3093
cs=0x396;eip=0x003094; 	T(MOV(ax, 0x0ADA));	// 9844 mov     ax, 0ADAh ;~ 0396:3094
cs=0x396;eip=0x003097; 	X(PUSH(ax));	// 9845 push    ax ;~ 0396:3097
cs=0x396;eip=0x003098; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 9846 push    [bp+var_2] ;~ 0396:3098
cs=0x396;eip=0x00309b; 	X(PUSH(cs));	// 9847 push    cs ;~ 0396:309B
cs=0x396;eip=0x00309c; 	R(CALL(sub_14b06,0));	// 9848 call    near ptr sub_14B06 ;~ 0396:309C
cs=0x396;eip=0x00309f; 	T(ADD(sp, 6));	// 9849 add     sp, 6 ;~ 0396:309F
cs=0x396;eip=0x0030a2; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 9850 mov     [bp+var_6], ax ;~ 0396:30A2
cs=0x396;eip=0x0030a5; 	T(OR(ax, ax));	// 9851 or      ax, ax ;~ 0396:30A5
cs=0x396;eip=0x0030a7; 	R(JNZ(loc_15020));	// 9852 jnz     short loc_15020 ;~ 0396:30A7
cs=0x396;eip=0x0030a9; 	T(MOV(ax, 0x15));	// 9853 mov     ax, 15h ;~ 0396:30A9
cs=0x396;eip=0x0030ac; 	X(PUSH(ax));	// 9854 push    ax ;~ 0396:30AC
cs=0x396;eip=0x0030ad; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 9855 mov     ax, [bp+var_2] ;~ 0396:30AD
cs=0x396;eip=0x0030b0; 	T(ADD(ax, 6));	// 9856 add     ax, 6 ;~ 0396:30B0
cs=0x396;eip=0x0030b3; 	X(PUSH(ax));	// 9857 push    ax ;~ 0396:30B3
cs=0x396;eip=0x0030b4; 	R(CALLF(sub_1c90c,0));	// 9858 call    sub_1C90C ;~ 0396:30B4
cs=0x396;eip=0x0030b9; 	T(ADD(sp, 4));	// 9859 add     sp, 4 ;~ 0396:30B9
cs=0x396;eip=0x0030bc; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 9860 mov     [bp+var_4], 0 ;~ 0396:30BC
loc_15001:
	// 4920 
cs=0x396;eip=0x0030c1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 9863 mov     bx, [bp+var_4] ;~ 0396:30C1
cs=0x396;eip=0x0030c4; 	T(MOV(al, *(raddr(ds,bx+0x0AEA))));	// 9864 mov     al, [bx+0AEAh] ;~ 0396:30C4
cs=0x396;eip=0x0030c8; 	X(MOV(*(raddr(ss,bp+var_a)), al));	// 9865 mov     [bp+var_A], al ;~ 0396:30C8
cs=0x396;eip=0x0030cb; 	T(ax = bp+var_a);	// 9866 lea     ax, [bp+var_A] ;~ 0396:30CB
cs=0x396;eip=0x0030ce; 	X(PUSH(ax));	// 9867 push    ax ;~ 0396:30CE
cs=0x396;eip=0x0030cf; 	R(CALLF(sub_1c944,0));	// 9868 call    sub_1C944 ;~ 0396:30CF
cs=0x396;eip=0x0030d4; 	T(ADD(sp, 2));	// 9869 add     sp, 2 ;~ 0396:30D4
cs=0x396;eip=0x0030d7; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 9870 inc     [bp+var_4] ;~ 0396:30D7
cs=0x396;eip=0x0030da; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x12));	// 9871 cmp     [bp+var_4], 12h ;~ 0396:30DA
cs=0x396;eip=0x0030de; 	R(JL(loc_15001));	// 9872 jl      short loc_15001 ;~ 0396:30DE
loc_15020:
	// 4921 
cs=0x396;eip=0x0030e0; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9875 inc     [bp+var_2] ;~ 0396:30E0
cs=0x396;eip=0x0030e3; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x0E));	// 9876 cmp     [bp+var_2], 0Eh ;~ 0396:30E3
cs=0x396;eip=0x0030e7; 	R(JL(loc_14fd0));	// 9877 jl      short loc_14FD0 ;~ 0396:30E7
cs=0x396;eip=0x0030e9; 	T(MOV(ax, 0x0AEA));	// 9878 mov     ax, 0AEAh ;~ 0396:30E9
cs=0x396;eip=0x0030ec; 	X(PUSH(ax));	// 9879 push    ax ;~ 0396:30EC
cs=0x396;eip=0x0030ed; 	T(MOV(ax, 0x0ADA));	// 9880 mov     ax, 0ADAh ;~ 0396:30ED
cs=0x396;eip=0x0030f0; 	X(PUSH(ax));	// 9881 push    ax ;~ 0396:30F0
cs=0x396;eip=0x0030f1; 	X(PUSH(word_2c942));	// 9882 push    word_2C942 ;~ 0396:30F1
cs=0x396;eip=0x0030f5; 	X(PUSH(cs));	// 9883 push    cs ;~ 0396:30F5
cs=0x396;eip=0x0030f6; 	R(CALL(sub_14b06,0));	// 9884 call    near ptr sub_14B06 ;~ 0396:30F6
cs=0x396;eip=0x0030f9; 	T(ADD(sp, 6));	// 9885 add     sp, 6 ;~ 0396:30F9
cs=0x396;eip=0x0030fc; 	X(MOV(byte_34f9b, 0));	// 9886 mov     byte_34F9B, 0 ;~ 0396:30FC
cs=0x396;eip=0x003101; 	T(SUB(ax, ax));	// 9887 sub     ax, ax ;~ 0396:3101
cs=0x396;eip=0x003103; 	X(PUSH(ax));	// 9888 push    ax ;~ 0396:3103
cs=0x396;eip=0x003104; 	X(PUSH(cs));	// 9889 push    cs ;~ 0396:3104
cs=0x396;eip=0x003105; 	R(CALL(sub_13ace,0));	// 9890 call    near ptr sub_13ACE ;~ 0396:3105
cs=0x396;eip=0x003108; 	T(MOV(sp, bp));	// 9891 mov     sp, bp ;~ 0396:3108
cs=0x396;eip=0x00310a; 	X(POP(bp));	// 9892 pop     bp ;~ 0396:310A
cs=0x396;eip=0x00310b; 	R(RETF(0));	// 9893 retf ;~ 0396:310B
sub_1504c:
	// 9901 
#undef var_10
#define var_10 -0x10
	// 9903 var_10          = byte ptr -10h ;~ 0396:310C
#undef var_e
#define var_e -0x0E
	// 9904 var_E           = word ptr -0Eh ;~ 0396:310C
#undef var_c
#define var_c -0x0C
	// 9905 var_C           = word ptr -0Ch ;~ 0396:310C
#undef var_8
#define var_8 -8
	// 9906 var_8           = word ptr -8 ;~ 0396:310C
#undef var_6
#define var_6 -6
	// 9907 var_6           = word ptr -6 ;~ 0396:310C
#undef var_4
#define var_4 -4
	// 9908 var_4           = word ptr -4 ;~ 0396:310C
#undef var_2
#define var_2 -2
	// 9909 var_2           = word ptr -2 ;~ 0396:310C
ret_396_310c:
	// 4922 
cs=0x396;eip=0x00310c; 	X(PUSH(bp));	// 9911 push    bp ;~ 0396:310C
cs=0x396;eip=0x00310d; 	T(MOV(bp, sp));	// 9912 mov     bp, sp ;~ 0396:310D
cs=0x396;eip=0x00310f; 	T(SUB(sp, 0x10));	// 9913 sub     sp, 10h ;~ 0396:310F
cs=0x396;eip=0x003112; 	X(PUSH(si));	// 9914 push    si ;~ 0396:3112
cs=0x396;eip=0x003113; 	T(MOV(ax, word_2c93e));	// 9915 mov     ax, word_2C93E ;~ 0396:3113
cs=0x396;eip=0x003116; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 9916 mov     [bp+var_6], ax ;~ 0396:3116
cs=0x396;eip=0x003119; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 9917 mov     [bp+var_4], ax ;~ 0396:3119
cs=0x396;eip=0x00311c; 	X(PUSH(cs));	// 9918 push    cs ;~ 0396:311C
cs=0x396;eip=0x00311d; 	R(CALL(sub_15338,0));	// 9919 call    near ptr sub_15338 ;~ 0396:311D
cs=0x396;eip=0x003120; 	T(SUB(al, al));	// 9920 sub     al, al ;~ 0396:3120
cs=0x396;eip=0x003122; 	X(MOV(byte_34f9b, al));	// 9921 mov     byte_34F9B, al ;~ 0396:3122
cs=0x396;eip=0x003125; 	T(SUB(ah, ah));	// 9922 sub     ah, ah ;~ 0396:3125
cs=0x396;eip=0x003127; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 9923 mov     [bp+var_8], ax ;~ 0396:3127
loc_1506a:
	// 4923 
cs=0x396;eip=0x00312a; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 9927 cmp     [bp+var_8], 0 ;~ 0396:312A
cs=0x396;eip=0x00312e; 	R(JZ(loc_15073));	// 9928 jz      short loc_15073 ;~ 0396:312E
cs=0x396;eip=0x003130; 	R(JMP(loc_15260));	// 9929 jmp     loc_15260 ;~ 0396:3130
loc_15073:
	// 4924 
cs=0x396;eip=0x003133; 	T(MOV(al, byte_34f9c));	// 9933 mov     al, byte_34F9C ;~ 0396:3133
cs=0x396;eip=0x003136; 	T(OR(al, byte_352bb));	// 9934 or      al, byte_352BB ;~ 0396:3136
cs=0x396;eip=0x00313a; 	T(AND(al, 0x0F));	// 9935 and     al, 0Fh ;~ 0396:313A
cs=0x396;eip=0x00313c; 	T(CMP(al, 9));	// 9936 cmp     al, 9 ;~ 0396:313C
cs=0x396;eip=0x00313e; 	R(JNZ(loc_15083));	// 9937 jnz     short loc_15083 ;~ 0396:313E
cs=0x396;eip=0x003140; 	R(JMP(loc_15130));	// 9938 jmp     loc_15130 ;~ 0396:3140
loc_15083:
	// 4925 
cs=0x396;eip=0x003143; 	T(MOV(ax, 1));	// 9942 mov     ax, 1 ;~ 0396:3143
cs=0x396;eip=0x003146; 	X(PUSH(ax));	// 9943 push    ax ;~ 0396:3146
cs=0x396;eip=0x003147; 	T(SUB(ax, ax));	// 9944 sub     ax, ax ;~ 0396:3147
cs=0x396;eip=0x003149; 	X(PUSH(ax));	// 9945 push    ax ;~ 0396:3149
cs=0x396;eip=0x00314a; 	T(MOV(ax, 0x0C7));	// 9946 mov     ax, 0C7h ; '«' ;~ 0396:314A
cs=0x396;eip=0x00314d; 	X(PUSH(ax));	// 9947 push    ax ;~ 0396:314D
cs=0x396;eip=0x00314e; 	T(MOV(ax, 0x70));	// 9948 mov     ax, 70h ; 'p' ;~ 0396:314E
cs=0x396;eip=0x003151; 	X(PUSH(ax));	// 9949 push    ax ;~ 0396:3151
cs=0x396;eip=0x003152; 	X(PUSH(ax));	// 9950 push    ax ;~ 0396:3152
cs=0x396;eip=0x003153; 	X(PUSH(ax));	// 9951 push    ax ;~ 0396:3153
cs=0x396;eip=0x003154; 	T(MOV(ax, 0x13F));	// 9952 mov     ax, 13Fh ;~ 0396:3154
cs=0x396;eip=0x003157; 	X(PUSH(ax));	// 9953 push    ax ;~ 0396:3157
cs=0x396;eip=0x003158; 	T(MOV(ax, 0x70));	// 9954 mov     ax, 70h ; 'p' ;~ 0396:3158
cs=0x396;eip=0x00315b; 	X(PUSH(ax));	// 9955 push    ax ;~ 0396:315B
cs=0x396;eip=0x00315c; 	R(CALLF(sub_28183,0));	// 9956 call    far ptr sub_28183 ;~ 0396:315C
cs=0x396;eip=0x003161; 	T(ADD(sp, 0x10));	// 9957 add     sp, 10h ;~ 0396:3161
cs=0x396;eip=0x003164; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0x70));	// 9958 mov     [bp+var_C], 70h ; 'p' ;~ 0396:3164
loc_150a9:
	// 4926 
cs=0x396;eip=0x003169; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_c))));	// 9961 mov     si, [bp+var_C] ;~ 0396:3169
cs=0x396;eip=0x00316c; 	T(INC(si));	// 9962 inc     si ;~ 0396:316C
cs=0x396;eip=0x00316d; 	T(SUB(ax, ax));	// 9963 sub     ax, ax ;~ 0396:316D
cs=0x396;eip=0x00316f; 	X(PUSH(ax));	// 9964 push    ax ;~ 0396:316F
cs=0x396;eip=0x003170; 	X(PUSH(ax));	// 9965 push    ax ;~ 0396:3170
cs=0x396;eip=0x003171; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 9966 push    [bp+var_C] ;~ 0396:3171
cs=0x396;eip=0x003174; 	T(MOV(ax, 0x70));	// 9967 mov     ax, 70h ; 'p' ;~ 0396:3174
cs=0x396;eip=0x003177; 	X(PUSH(ax));	// 9968 push    ax ;~ 0396:3177
cs=0x396;eip=0x003178; 	X(PUSH(si));	// 9969 push    si ;~ 0396:3178
cs=0x396;eip=0x003179; 	X(PUSH(si));	// 9970 push    si ;~ 0396:3179
cs=0x396;eip=0x00317a; 	T(MOV(ax, 0x13F));	// 9971 mov     ax, 13Fh ;~ 0396:317A
cs=0x396;eip=0x00317d; 	X(PUSH(ax));	// 9972 push    ax ;~ 0396:317D
cs=0x396;eip=0x00317e; 	T(MOV(ax, 0x70));	// 9973 mov     ax, 70h ; 'p' ;~ 0396:317E
cs=0x396;eip=0x003181; 	X(PUSH(ax));	// 9974 push    ax ;~ 0396:3181
cs=0x396;eip=0x003182; 	R(CALLF(sub_28183,0));	// 9975 call    far ptr sub_28183 ;~ 0396:3182
cs=0x396;eip=0x003187; 	T(ADD(sp, 0x10));	// 9976 add     sp, 10h ;~ 0396:3187
cs=0x396;eip=0x00318a; 	X(INC(*(dw*)(raddr(ss,bp+var_c))));	// 9977 inc     [bp+var_C] ;~ 0396:318A
cs=0x396;eip=0x00318d; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 0x0B8));	// 9978 cmp     [bp+var_C], 0B8h ; '∏' ;~ 0396:318D
cs=0x396;eip=0x003192; 	R(JL(loc_150a9));	// 9979 jl      short loc_150A9 ;~ 0396:3192
cs=0x396;eip=0x003194; 	T(SUB(ax, ax));	// 9980 sub     ax, ax ;~ 0396:3194
cs=0x396;eip=0x003196; 	X(PUSH(ax));	// 9981 push    ax ;~ 0396:3196
cs=0x396;eip=0x003197; 	T(MOV(ax, 1));	// 9982 mov     ax, 1 ;~ 0396:3197
cs=0x396;eip=0x00319a; 	X(PUSH(ax));	// 9983 push    ax ;~ 0396:319A
cs=0x396;eip=0x00319b; 	T(MOV(ax, 0x0B8));	// 9984 mov     ax, 0B8h ; '∏' ;~ 0396:319B
cs=0x396;eip=0x00319e; 	X(PUSH(ax));	// 9985 push    ax ;~ 0396:319E
cs=0x396;eip=0x00319f; 	T(MOV(ax, 0x70));	// 9986 mov     ax, 70h ; 'p' ;~ 0396:319F
cs=0x396;eip=0x0031a2; 	X(PUSH(ax));	// 9987 push    ax ;~ 0396:31A2
cs=0x396;eip=0x0031a3; 	T(SUB(ax, ax));	// 9988 sub     ax, ax ;~ 0396:31A3
cs=0x396;eip=0x0031a5; 	X(PUSH(ax));	// 9989 push    ax ;~ 0396:31A5
cs=0x396;eip=0x0031a6; 	X(PUSH(ax));	// 9990 push    ax ;~ 0396:31A6
cs=0x396;eip=0x0031a7; 	T(MOV(ax, 0x13F));	// 9991 mov     ax, 13Fh ;~ 0396:31A7
cs=0x396;eip=0x0031aa; 	X(PUSH(ax));	// 9992 push    ax ;~ 0396:31AA
cs=0x396;eip=0x0031ab; 	T(MOV(ax, 0x70));	// 9993 mov     ax, 70h ; 'p' ;~ 0396:31AB
cs=0x396;eip=0x0031ae; 	X(PUSH(ax));	// 9994 push    ax ;~ 0396:31AE
cs=0x396;eip=0x0031af; 	R(CALLF(sub_28183,0));	// 9995 call    far ptr sub_28183 ;~ 0396:31AF
cs=0x396;eip=0x0031b4; 	T(ADD(sp, 0x10));	// 9996 add     sp, 10h ;~ 0396:31B4
cs=0x396;eip=0x0031b7; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0));	// 9997 mov     [bp+var_C], 0 ;~ 0396:31B7
cs=0x396;eip=0x0031bc; 	R(JMP(loc_15101));	// 9998 jmp     short loc_15101 ;~ 0396:31BC
loc_150fe:
	// 4927 
cs=0x396;eip=0x0031be; 	X(INC(*(dw*)(raddr(ss,bp+var_c))));	// 10002 inc     [bp+var_C] ;~ 0396:31BE
loc_15101:
	// 4928 
cs=0x396;eip=0x0031c1; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 0x0C7));	// 10005 cmp     [bp+var_C], 0C7h ; '«' ;~ 0396:31C1
cs=0x396;eip=0x0031c6; 	R(JL(loc_1510b));	// 10006 jl      short loc_1510B ;~ 0396:31C6
cs=0x396;eip=0x0031c8; 	R(JMP(loc_151d1));	// 10007 jmp     loc_151D1 ;~ 0396:31C8
loc_1510b:
	// 4929 
cs=0x396;eip=0x0031cb; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_c))));	// 10011 mov     si, [bp+var_C] ;~ 0396:31CB
cs=0x396;eip=0x0031ce; 	T(INC(si));	// 10012 inc     si ;~ 0396:31CE
cs=0x396;eip=0x0031cf; 	T(MOV(ax, 1));	// 10013 mov     ax, 1 ;~ 0396:31CF
cs=0x396;eip=0x0031d2; 	X(PUSH(ax));	// 10014 push    ax ;~ 0396:31D2
cs=0x396;eip=0x0031d3; 	X(PUSH(ax));	// 10015 push    ax ;~ 0396:31D3
cs=0x396;eip=0x0031d4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 10016 push    [bp+var_C] ;~ 0396:31D4
cs=0x396;eip=0x0031d7; 	T(MOV(ax, 0x70));	// 10017 mov     ax, 70h ; 'p' ;~ 0396:31D7
cs=0x396;eip=0x0031da; 	X(PUSH(ax));	// 10018 push    ax ;~ 0396:31DA
cs=0x396;eip=0x0031db; 	X(PUSH(si));	// 10019 push    si ;~ 0396:31DB
cs=0x396;eip=0x0031dc; 	X(PUSH(si));	// 10020 push    si ;~ 0396:31DC
cs=0x396;eip=0x0031dd; 	T(MOV(ax, 0x13F));	// 10021 mov     ax, 13Fh ;~ 0396:31DD
cs=0x396;eip=0x0031e0; 	X(PUSH(ax));	// 10022 push    ax ;~ 0396:31E0
cs=0x396;eip=0x0031e1; 	T(MOV(ax, 0x70));	// 10023 mov     ax, 70h ; 'p' ;~ 0396:31E1
cs=0x396;eip=0x0031e4; 	X(PUSH(ax));	// 10024 push    ax ;~ 0396:31E4
cs=0x396;eip=0x0031e5; 	R(CALLF(sub_28183,0));	// 10025 call    far ptr sub_28183 ;~ 0396:31E5
cs=0x396;eip=0x0031ea; 	T(ADD(sp, 0x10));	// 10026 add     sp, 10h ;~ 0396:31EA
cs=0x396;eip=0x0031ed; 	R(JMP(loc_150fe));	// 10027 jmp     short loc_150FE ;~ 0396:31ED
loc_15130:
	// 4930 
cs=0x396;eip=0x0031f0; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0x0C7));	// 10032 mov     [bp+var_C], 0C7h ; '«' ;~ 0396:31F0
loc_15135:
	// 4931 
cs=0x396;eip=0x0031f5; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_c))));	// 10035 mov     si, [bp+var_C] ;~ 0396:31F5
cs=0x396;eip=0x0031f8; 	T(DEC(si));	// 10036 dec     si ;~ 0396:31F8
cs=0x396;eip=0x0031f9; 	T(MOV(ax, 1));	// 10037 mov     ax, 1 ;~ 0396:31F9
cs=0x396;eip=0x0031fc; 	X(PUSH(ax));	// 10038 push    ax ;~ 0396:31FC
cs=0x396;eip=0x0031fd; 	X(PUSH(ax));	// 10039 push    ax ;~ 0396:31FD
cs=0x396;eip=0x0031fe; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 10040 push    [bp+var_C] ;~ 0396:31FE
cs=0x396;eip=0x003201; 	T(MOV(ax, 0x70));	// 10041 mov     ax, 70h ; 'p' ;~ 0396:3201
cs=0x396;eip=0x003204; 	X(PUSH(ax));	// 10042 push    ax ;~ 0396:3204
cs=0x396;eip=0x003205; 	X(PUSH(si));	// 10043 push    si ;~ 0396:3205
cs=0x396;eip=0x003206; 	X(PUSH(si));	// 10044 push    si ;~ 0396:3206
cs=0x396;eip=0x003207; 	T(MOV(ax, 0x13F));	// 10045 mov     ax, 13Fh ;~ 0396:3207
cs=0x396;eip=0x00320a; 	X(PUSH(ax));	// 10046 push    ax ;~ 0396:320A
cs=0x396;eip=0x00320b; 	T(MOV(ax, 0x70));	// 10047 mov     ax, 70h ; 'p' ;~ 0396:320B
cs=0x396;eip=0x00320e; 	X(PUSH(ax));	// 10048 push    ax ;~ 0396:320E
cs=0x396;eip=0x00320f; 	R(CALLF(sub_28183,0));	// 10049 call    far ptr sub_28183 ;~ 0396:320F
cs=0x396;eip=0x003214; 	T(ADD(sp, 0x10));	// 10050 add     sp, 10h ;~ 0396:3214
cs=0x396;eip=0x003217; 	X(DEC(*(dw*)(raddr(ss,bp+var_c))));	// 10051 dec     [bp+var_C] ;~ 0396:3217
cs=0x396;eip=0x00321a; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 0));	// 10052 cmp     [bp+var_C], 0 ;~ 0396:321A
cs=0x396;eip=0x00321e; 	R(JG(loc_15135));	// 10053 jg      short loc_15135 ;~ 0396:321E
cs=0x396;eip=0x003220; 	T(MOV(ax, 1));	// 10054 mov     ax, 1 ;~ 0396:3220
cs=0x396;eip=0x003223; 	X(PUSH(ax));	// 10055 push    ax ;~ 0396:3223
cs=0x396;eip=0x003224; 	T(SUB(ax, ax));	// 10056 sub     ax, ax ;~ 0396:3224
cs=0x396;eip=0x003226; 	X(PUSH(ax));	// 10057 push    ax ;~ 0396:3226
cs=0x396;eip=0x003227; 	X(PUSH(ax));	// 10058 push    ax ;~ 0396:3227
cs=0x396;eip=0x003228; 	T(MOV(ax, 0x70));	// 10059 mov     ax, 70h ; 'p' ;~ 0396:3228
cs=0x396;eip=0x00322b; 	X(PUSH(ax));	// 10060 push    ax ;~ 0396:322B
cs=0x396;eip=0x00322c; 	T(MOV(ax, 0x0B8));	// 10061 mov     ax, 0B8h ; '∏' ;~ 0396:322C
cs=0x396;eip=0x00322f; 	X(PUSH(ax));	// 10062 push    ax ;~ 0396:322F
cs=0x396;eip=0x003230; 	X(PUSH(ax));	// 10063 push    ax ;~ 0396:3230
cs=0x396;eip=0x003231; 	T(MOV(ax, 0x13F));	// 10064 mov     ax, 13Fh ;~ 0396:3231
cs=0x396;eip=0x003234; 	X(PUSH(ax));	// 10065 push    ax ;~ 0396:3234
cs=0x396;eip=0x003235; 	T(MOV(ax, 0x70));	// 10066 mov     ax, 70h ; 'p' ;~ 0396:3235
cs=0x396;eip=0x003238; 	X(PUSH(ax));	// 10067 push    ax ;~ 0396:3238
cs=0x396;eip=0x003239; 	R(CALLF(sub_28183,0));	// 10068 call    far ptr sub_28183 ;~ 0396:3239
cs=0x396;eip=0x00323e; 	T(ADD(sp, 0x10));	// 10069 add     sp, 10h ;~ 0396:323E
cs=0x396;eip=0x003241; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0x0B8));	// 10070 mov     [bp+var_C], 0B8h ; '∏' ;~ 0396:3241
loc_15186:
	// 4932 
cs=0x396;eip=0x003246; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_c))));	// 10073 mov     si, [bp+var_C] ;~ 0396:3246
cs=0x396;eip=0x003249; 	T(DEC(si));	// 10074 dec     si ;~ 0396:3249
cs=0x396;eip=0x00324a; 	T(SUB(ax, ax));	// 10075 sub     ax, ax ;~ 0396:324A
cs=0x396;eip=0x00324c; 	X(PUSH(ax));	// 10076 push    ax ;~ 0396:324C
cs=0x396;eip=0x00324d; 	X(PUSH(ax));	// 10077 push    ax ;~ 0396:324D
cs=0x396;eip=0x00324e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 10078 push    [bp+var_C] ;~ 0396:324E
cs=0x396;eip=0x003251; 	T(MOV(ax, 0x70));	// 10079 mov     ax, 70h ; 'p' ;~ 0396:3251
cs=0x396;eip=0x003254; 	X(PUSH(ax));	// 10080 push    ax ;~ 0396:3254
cs=0x396;eip=0x003255; 	X(PUSH(si));	// 10081 push    si ;~ 0396:3255
cs=0x396;eip=0x003256; 	X(PUSH(si));	// 10082 push    si ;~ 0396:3256
cs=0x396;eip=0x003257; 	T(MOV(ax, 0x13F));	// 10083 mov     ax, 13Fh ;~ 0396:3257
cs=0x396;eip=0x00325a; 	X(PUSH(ax));	// 10084 push    ax ;~ 0396:325A
cs=0x396;eip=0x00325b; 	T(MOV(ax, 0x70));	// 10085 mov     ax, 70h ; 'p' ;~ 0396:325B
cs=0x396;eip=0x00325e; 	X(PUSH(ax));	// 10086 push    ax ;~ 0396:325E
cs=0x396;eip=0x00325f; 	R(CALLF(sub_28183,0));	// 10087 call    far ptr sub_28183 ;~ 0396:325F
cs=0x396;eip=0x003264; 	T(ADD(sp, 0x10));	// 10088 add     sp, 10h ;~ 0396:3264
cs=0x396;eip=0x003267; 	X(DEC(*(dw*)(raddr(ss,bp+var_c))));	// 10089 dec     [bp+var_C] ;~ 0396:3267
cs=0x396;eip=0x00326a; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 0x70));	// 10090 cmp     [bp+var_C], 70h ; 'p' ;~ 0396:326A
cs=0x396;eip=0x00326e; 	R(JG(loc_15186));	// 10091 jg      short loc_15186 ;~ 0396:326E
cs=0x396;eip=0x003270; 	T(SUB(ax, ax));	// 10092 sub     ax, ax ;~ 0396:3270
cs=0x396;eip=0x003272; 	X(PUSH(ax));	// 10093 push    ax ;~ 0396:3272
cs=0x396;eip=0x003273; 	T(MOV(ax, 1));	// 10094 mov     ax, 1 ;~ 0396:3273
cs=0x396;eip=0x003276; 	X(PUSH(ax));	// 10095 push    ax ;~ 0396:3276
cs=0x396;eip=0x003277; 	T(MOV(ax, 0x70));	// 10096 mov     ax, 70h ; 'p' ;~ 0396:3277
cs=0x396;eip=0x00327a; 	X(PUSH(ax));	// 10097 push    ax ;~ 0396:327A
cs=0x396;eip=0x00327b; 	X(PUSH(ax));	// 10098 push    ax ;~ 0396:327B
cs=0x396;eip=0x00327c; 	T(MOV(ax, 0x0C7));	// 10099 mov     ax, 0C7h ; '«' ;~ 0396:327C
cs=0x396;eip=0x00327f; 	X(PUSH(ax));	// 10100 push    ax ;~ 0396:327F
cs=0x396;eip=0x003280; 	X(PUSH(ax));	// 10101 push    ax ;~ 0396:3280
cs=0x396;eip=0x003281; 	T(MOV(ax, 0x13F));	// 10102 mov     ax, 13Fh ;~ 0396:3281
cs=0x396;eip=0x003284; 	X(PUSH(ax));	// 10103 push    ax ;~ 0396:3284
cs=0x396;eip=0x003285; 	T(MOV(ax, 0x70));	// 10104 mov     ax, 70h ; 'p' ;~ 0396:3285
cs=0x396;eip=0x003288; 	X(PUSH(ax));	// 10105 push    ax ;~ 0396:3288
cs=0x396;eip=0x003289; 	R(CALLF(sub_28183,0));	// 10106 call    far ptr sub_28183 ;~ 0396:3289
cs=0x396;eip=0x00328e; 	T(ADD(sp, 0x10));	// 10107 add     sp, 10h ;~ 0396:328E
loc_151d1:
	// 4933 
cs=0x396;eip=0x003291; 	T(MOV(al, byte_34f9c));	// 10110 mov     al, byte_34F9C ;~ 0396:3291
cs=0x396;eip=0x003294; 	T(OR(al, byte_352bb));	// 10111 or      al, byte_352BB ;~ 0396:3294
cs=0x396;eip=0x003298; 	T(AND(al, 0x0F));	// 10112 and     al, 0Fh ;~ 0396:3298
cs=0x396;eip=0x00329a; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 10113 mov     [bp+var_10], al ;~ 0396:329A
cs=0x396;eip=0x00329d; 	T(CMP(al, 9));	// 10114 cmp     al, 9 ;~ 0396:329D
cs=0x396;eip=0x00329f; 	R(JZ(loc_151f1));	// 10115 jz      short loc_151F1 ;~ 0396:329F
cs=0x396;eip=0x0032a1; 	T(CMP(al, 0x0A));	// 10116 cmp     al, 0Ah ;~ 0396:32A1
cs=0x396;eip=0x0032a3; 	R(JZ(loc_151f1));	// 10117 jz      short loc_151F1 ;~ 0396:32A3
cs=0x396;eip=0x0032a5; 	T(MOV(ax, 6));	// 10118 mov     ax, 6 ;~ 0396:32A5
cs=0x396;eip=0x0032a8; 	X(PUSH(ax));	// 10119 push    ax ;~ 0396:32A8
cs=0x396;eip=0x0032a9; 	R(CALLF(sub_26ffb,0));	// 10120 call    sub_26FFB ;~ 0396:32A9
cs=0x396;eip=0x0032ae; 	T(ADD(sp, 2));	// 10121 add     sp, 2 ;~ 0396:32AE
loc_151f1:
	// 4934 
cs=0x396;eip=0x0032b1; 	T(ax = bp+var_e);	// 10125 lea     ax, [bp+var_E] ;~ 0396:32B1
cs=0x396;eip=0x0032b4; 	X(PUSH(ax));	// 10126 push    ax ;~ 0396:32B4
cs=0x396;eip=0x0032b5; 	R(CALLF(sub_10f80,0));	// 10127 call    sub_10F80 ;~ 0396:32B5
cs=0x396;eip=0x0032ba; 	T(ADD(sp, 2));	// 10128 add     sp, 2 ;~ 0396:32BA
cs=0x396;eip=0x0032bd; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0));	// 10129 cmp     [bp+var_E], 0 ;~ 0396:32BD
cs=0x396;eip=0x0032c1; 	R(JNZ(loc_15206));	// 10130 jnz     short loc_15206 ;~ 0396:32C1
cs=0x396;eip=0x0032c3; 	R(JMP(loc_1506a));	// 10131 jmp     loc_1506A ;~ 0396:32C3
loc_15206:
	// 4935 
cs=0x396;eip=0x0032c6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 10135 mov     ax, [bp+var_E] ;~ 0396:32C6
cs=0x396;eip=0x0032c9; 	T(CMP(ax, 0x0D));	// 10136 cmp     ax, 0Dh ;~ 0396:32C9
cs=0x396;eip=0x0032cc; 	R(JZ(loc_15258));	// 10137 jz      short loc_15258 ;~ 0396:32CC
cs=0x396;eip=0x0032ce; 	T(CMP(ax, 0x92));	// 10138 cmp     ax, 92h ; 'í' ;~ 0396:32CE
cs=0x396;eip=0x0032d1; 	R(JZ(loc_1521a));	// 10139 jz      short loc_1521A ;~ 0396:32D1
cs=0x396;eip=0x0032d3; 	T(CMP(ax, 0x98));	// 10140 cmp     ax, 98h ;~ 0396:32D3
cs=0x396;eip=0x0032d6; 	R(JZ(loc_1524a));	// 10141 jz      short loc_1524A ;~ 0396:32D6
cs=0x396;eip=0x0032d8; 	R(JMP(loc_1522c));	// 10142 jmp     short loc_1522C ;~ 0396:32D8
loc_1521a:
	// 4936 
cs=0x396;eip=0x0032da; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 10146 mov     [bp+var_2], 0 ;~ 0396:32DA
cs=0x396;eip=0x0032df; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 10147 push    [bp+var_6] ;~ 0396:32DF
cs=0x396;eip=0x0032e2; 	X(PUSH(cs));	// 10148 push    cs ;~ 0396:32E2
cs=0x396;eip=0x0032e3; 	R(CALL(sub_152d6,0));	// 10149 call    near ptr sub_152D6 ;~ 0396:32E3
loc_15226:
	// 4937 
cs=0x396;eip=0x0032e6; 	T(ADD(sp, 2));	// 10152 add     sp, 2 ;~ 0396:32E6
cs=0x396;eip=0x0032e9; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 10153 mov     [bp+var_6], ax ;~ 0396:32E9
loc_1522c:
	// 4938 
cs=0x396;eip=0x0032ec; 	T(MOV(ax, word_2c93e));	// 10157 mov     ax, word_2C93E ;~ 0396:32EC
cs=0x396;eip=0x0032ef; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 10158 cmp     [bp+var_6], ax ;~ 0396:32EF
cs=0x396;eip=0x0032f2; 	R(JNZ(loc_15237));	// 10159 jnz     short loc_15237 ;~ 0396:32F2
cs=0x396;eip=0x0032f4; 	R(JMP(loc_1506a));	// 10160 jmp     loc_1506A ;~ 0396:32F4
loc_15237:
	// 4939 
cs=0x396;eip=0x0032f7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 10164 mov     ax, [bp+var_6] ;~ 0396:32F7
cs=0x396;eip=0x0032fa; 	X(MOV(word_2c93e, ax));	// 10165 mov     word_2C93E, ax ;~ 0396:32FA
cs=0x396;eip=0x0032fd; 	X(PUSH(cs));	// 10166 push    cs ;~ 0396:32FD
cs=0x396;eip=0x0032fe; 	R(CALL(sub_15338,0));	// 10167 call    near ptr sub_15338 ;~ 0396:32FE
cs=0x396;eip=0x003301; 	X(MOV(byte_34f9b, 0));	// 10168 mov     byte_34F9B, 0 ;~ 0396:3301
cs=0x396;eip=0x003306; 	R(JMP(loc_1506a));	// 10169 jmp     loc_1506A ;~ 0396:3306
loc_1524a:
	// 4940 
cs=0x396;eip=0x00330a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 1));	// 10174 mov     [bp+var_2], 1 ;~ 0396:330A
cs=0x396;eip=0x00330f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 10175 push    [bp+var_6] ;~ 0396:330F
cs=0x396;eip=0x003312; 	X(PUSH(cs));	// 10176 push    cs ;~ 0396:3312
cs=0x396;eip=0x003313; 	R(CALL(sub_15272,0));	// 10177 call    near ptr sub_15272 ;~ 0396:3313
cs=0x396;eip=0x003316; 	R(JMP(loc_15226));	// 10178 jmp     short loc_15226 ;~ 0396:3316
loc_15258:
	// 4941 
cs=0x396;eip=0x003318; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 1));	// 10182 mov     [bp+var_8], 1 ;~ 0396:3318
cs=0x396;eip=0x00331d; 	R(JMP(loc_1522c));	// 10183 jmp     short loc_1522C ;~ 0396:331D
loc_15260:
	// 4942 
cs=0x396;eip=0x003320; 	T(MOV(ax, word_2c93e));	// 10188 mov     ax, word_2C93E ;~ 0396:3320
cs=0x396;eip=0x003323; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), ax));	// 10189 cmp     [bp+var_4], ax ;~ 0396:3323
cs=0x396;eip=0x003326; 	R(JZ(loc_1526c));	// 10190 jz      short loc_1526C ;~ 0396:3326
cs=0x396;eip=0x003328; 	X(PUSH(cs));	// 10191 push    cs ;~ 0396:3328
cs=0x396;eip=0x003329; 	R(CALL(sub_14676,0));	// 10192 call    near ptr sub_14676 ;~ 0396:3329
loc_1526c:
	// 4943 
cs=0x396;eip=0x00332c; 	X(POP(si));	// 10195 pop     si ;~ 0396:332C
cs=0x396;eip=0x00332d; 	T(MOV(sp, bp));	// 10196 mov     sp, bp ;~ 0396:332D
cs=0x396;eip=0x00332f; 	X(POP(bp));	// 10197 pop     bp ;~ 0396:332F
cs=0x396;eip=0x003330; 	R(RETF(0));	// 10198 retf ;~ 0396:3330
sub_15272:
	// 10208 
#undef var_4
#define var_4 -4
	// 10210 var_4           = word ptr -4 ;~ 0396:3332
#undef var_2
#define var_2 -2
	// 10211 var_2           = word ptr -2 ;~ 0396:3332
#undef arg_0
#define arg_0 6
	// 10212 arg_0           = word ptr  6 ;~ 0396:3332
ret_396_3332:
	// 4944 
cs=0x396;eip=0x003332; 	X(PUSH(bp));	// 10214 push    bp ;~ 0396:3332
cs=0x396;eip=0x003333; 	T(MOV(bp, sp));	// 10215 mov     bp, sp ;~ 0396:3333
cs=0x396;eip=0x003335; 	T(SUB(sp, 4));	// 10216 sub     sp, 4 ;~ 0396:3335
cs=0x396;eip=0x003338; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 10217 mov     ax, [bp+arg_0] ;~ 0396:3338
cs=0x396;eip=0x00333b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 10218 mov     [bp+var_2], ax ;~ 0396:333B
cs=0x396;eip=0x00333e; 	T(MOV(al, byte_2c946));	// 10219 mov     al, byte_2C946 ;~ 0396:333E
cs=0x396;eip=0x003341; 	T(SUB(ah, ah));	// 10220 sub     ah, ah ;~ 0396:3341
cs=0x396;eip=0x003343; 	T(DEC(ax));	// 10221 dec     ax ;~ 0396:3343
cs=0x396;eip=0x003344; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 10222 cmp     [bp+arg_0], ax ;~ 0396:3344
cs=0x396;eip=0x003347; 	R(JNZ(loc_15290));	// 10223 jnz     short loc_15290 ;~ 0396:3347
cs=0x396;eip=0x003349; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 10224 mov     [bp+arg_0], 0 ;~ 0396:3349
cs=0x396;eip=0x00334e; 	R(JMP(loc_15293));	// 10225 jmp     short loc_15293 ;~ 0396:334E
loc_15290:
	// 4945 
cs=0x396;eip=0x003350; 	X(INC(*(dw*)(raddr(ss,bp+arg_0))));	// 10229 inc     [bp+arg_0] ;~ 0396:3350
loc_15293:
	// 4946 
cs=0x396;eip=0x003353; 	T(MOV(ax, 0x0B50));	// 10233 mov     ax, 0B50h ;~ 0396:3353
cs=0x396;eip=0x003356; 	X(PUSH(ax));	// 10234 push    ax ;~ 0396:3356
cs=0x396;eip=0x003357; 	T(MOV(ax, 0x2264));	// 10235 mov     ax, 2264h ;~ 0396:3357
cs=0x396;eip=0x00335a; 	X(PUSH(ax));	// 10236 push    ax ;~ 0396:335A
cs=0x396;eip=0x00335b; 	T(MOV(ax, 0x0ABA));	// 10237 mov     ax, 0ABAh ;~ 0396:335B
cs=0x396;eip=0x00335e; 	X(PUSH(ax));	// 10238 push    ax ;~ 0396:335E
cs=0x396;eip=0x00335f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 10239 push    [bp+arg_0] ;~ 0396:335F
cs=0x396;eip=0x003362; 	X(PUSH(cs));	// 10240 push    cs ;~ 0396:3362
cs=0x396;eip=0x003363; 	R(CALL(sub_14930,0));	// 10241 call    near ptr sub_14930 ;~ 0396:3363
cs=0x396;eip=0x003366; 	T(ADD(sp, 8));	// 10242 add     sp, 8 ;~ 0396:3366
cs=0x396;eip=0x003369; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 10243 mov     [bp+var_4], ax ;~ 0396:3369
cs=0x396;eip=0x00336c; 	T(OR(ax, ax));	// 10244 or      ax, ax ;~ 0396:336C
cs=0x396;eip=0x00336e; 	R(JZ(loc_152cf));	// 10245 jz      short loc_152CF ;~ 0396:336E
cs=0x396;eip=0x003370; 	T(MOV(al, byte_2c946));	// 10246 mov     al, byte_2C946 ;~ 0396:3370
cs=0x396;eip=0x003373; 	T(SUB(ah, ah));	// 10247 sub     ah, ah ;~ 0396:3373
cs=0x396;eip=0x003375; 	T(DEC(ax));	// 10248 dec     ax ;~ 0396:3375
cs=0x396;eip=0x003376; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 10249 cmp     [bp+arg_0], ax ;~ 0396:3376
cs=0x396;eip=0x003379; 	R(JNZ(loc_152c2));	// 10250 jnz     short loc_152C2 ;~ 0396:3379
cs=0x396;eip=0x00337b; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 10251 mov     [bp+arg_0], 0 ;~ 0396:337B
cs=0x396;eip=0x003380; 	R(JMP(loc_152c5));	// 10252 jmp     short loc_152C5 ;~ 0396:3380
loc_152c2:
	// 4947 
cs=0x396;eip=0x003382; 	X(INC(*(dw*)(raddr(ss,bp+arg_0))));	// 10256 inc     [bp+arg_0] ;~ 0396:3382
loc_152c5:
	// 4948 
cs=0x396;eip=0x003385; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 10259 mov     ax, [bp+var_2] ;~ 0396:3385
cs=0x396;eip=0x003388; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 10260 mov     [bp+arg_0], ax ;~ 0396:3388
cs=0x396;eip=0x00338b; 	T(OR(ax, ax));	// 10261 or      ax, ax ;~ 0396:338B
cs=0x396;eip=0x00338d; 	R(JZ(loc_15293));	// 10262 jz      short loc_15293 ;~ 0396:338D
loc_152cf:
	// 4949 
cs=0x396;eip=0x00338f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 10265 mov     ax, [bp+arg_0] ;~ 0396:338F
cs=0x396;eip=0x003392; 	T(MOV(sp, bp));	// 10266 mov     sp, bp ;~ 0396:3392
cs=0x396;eip=0x003394; 	X(POP(bp));	// 10267 pop     bp ;~ 0396:3394
cs=0x396;eip=0x003395; 	R(RETF(0));	// 10268 retf ;~ 0396:3395
sub_152d6:
	// 10276 
#undef var_4
#define var_4 -4
	// 10278 var_4           = word ptr -4 ;~ 0396:3396
#undef var_2
#define var_2 -2
	// 10279 var_2           = word ptr -2 ;~ 0396:3396
#undef arg_0
#define arg_0 6
	// 10280 arg_0           = word ptr  6 ;~ 0396:3396
ret_396_3396:
	// 4950 
cs=0x396;eip=0x003396; 	X(PUSH(bp));	// 10282 push    bp ;~ 0396:3396
cs=0x396;eip=0x003397; 	T(MOV(bp, sp));	// 10283 mov     bp, sp ;~ 0396:3397
cs=0x396;eip=0x003399; 	T(SUB(sp, 4));	// 10284 sub     sp, 4 ;~ 0396:3399
cs=0x396;eip=0x00339c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 10285 mov     ax, [bp+arg_0] ;~ 0396:339C
cs=0x396;eip=0x00339f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 10286 mov     [bp+var_2], ax ;~ 0396:339F
cs=0x396;eip=0x0033a2; 	T(OR(ax, ax));	// 10287 or      ax, ax ;~ 0396:33A2
cs=0x396;eip=0x0033a4; 	R(JNZ(loc_152f2));	// 10288 jnz     short loc_152F2 ;~ 0396:33A4
cs=0x396;eip=0x0033a6; 	T(MOV(al, byte_2c946));	// 10289 mov     al, byte_2C946 ;~ 0396:33A6
cs=0x396;eip=0x0033a9; 	T(SUB(ah, ah));	// 10290 sub     ah, ah ;~ 0396:33A9
cs=0x396;eip=0x0033ab; 	T(DEC(ax));	// 10291 dec     ax ;~ 0396:33AB
cs=0x396;eip=0x0033ac; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 10292 mov     [bp+arg_0], ax ;~ 0396:33AC
cs=0x396;eip=0x0033af; 	R(JMP(loc_152f5));	// 10293 jmp     short loc_152F5 ;~ 0396:33AF
loc_152f2:
	// 4951 
cs=0x396;eip=0x0033b2; 	X(DEC(*(dw*)(raddr(ss,bp+arg_0))));	// 10298 dec     [bp+arg_0] ;~ 0396:33B2
loc_152f5:
	// 4952 
cs=0x396;eip=0x0033b5; 	T(MOV(ax, 0x0B50));	// 10302 mov     ax, 0B50h ;~ 0396:33B5
cs=0x396;eip=0x0033b8; 	X(PUSH(ax));	// 10303 push    ax ;~ 0396:33B8
cs=0x396;eip=0x0033b9; 	T(MOV(ax, 0x2264));	// 10304 mov     ax, 2264h ;~ 0396:33B9
cs=0x396;eip=0x0033bc; 	X(PUSH(ax));	// 10305 push    ax ;~ 0396:33BC
cs=0x396;eip=0x0033bd; 	T(MOV(ax, 0x0ABA));	// 10306 mov     ax, 0ABAh ;~ 0396:33BD
cs=0x396;eip=0x0033c0; 	X(PUSH(ax));	// 10307 push    ax ;~ 0396:33C0
cs=0x396;eip=0x0033c1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 10308 push    [bp+arg_0] ;~ 0396:33C1
cs=0x396;eip=0x0033c4; 	X(PUSH(cs));	// 10309 push    cs ;~ 0396:33C4
cs=0x396;eip=0x0033c5; 	R(CALL(sub_14930,0));	// 10310 call    near ptr sub_14930 ;~ 0396:33C5
cs=0x396;eip=0x0033c8; 	T(ADD(sp, 8));	// 10311 add     sp, 8 ;~ 0396:33C8
cs=0x396;eip=0x0033cb; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 10312 mov     [bp+var_4], ax ;~ 0396:33CB
cs=0x396;eip=0x0033ce; 	T(OR(ax, ax));	// 10313 or      ax, ax ;~ 0396:33CE
cs=0x396;eip=0x0033d0; 	R(JZ(loc_15331));	// 10314 jz      short loc_15331 ;~ 0396:33D0
cs=0x396;eip=0x0033d2; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 10315 cmp     [bp+arg_0], 0 ;~ 0396:33D2
cs=0x396;eip=0x0033d6; 	R(JNZ(loc_15324));	// 10316 jnz     short loc_15324 ;~ 0396:33D6
cs=0x396;eip=0x0033d8; 	T(MOV(al, byte_2c946));	// 10317 mov     al, byte_2C946 ;~ 0396:33D8
cs=0x396;eip=0x0033db; 	T(SUB(ah, ah));	// 10318 sub     ah, ah ;~ 0396:33DB
cs=0x396;eip=0x0033dd; 	T(DEC(ax));	// 10319 dec     ax ;~ 0396:33DD
cs=0x396;eip=0x0033de; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 10320 mov     [bp+arg_0], ax ;~ 0396:33DE
cs=0x396;eip=0x0033e1; 	R(JMP(loc_15327));	// 10321 jmp     short loc_15327 ;~ 0396:33E1
loc_15324:
	// 4953 
cs=0x396;eip=0x0033e4; 	X(DEC(*(dw*)(raddr(ss,bp+arg_0))));	// 10326 dec     [bp+arg_0] ;~ 0396:33E4
loc_15327:
	// 4954 
cs=0x396;eip=0x0033e7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 10329 mov     ax, [bp+var_2] ;~ 0396:33E7
cs=0x396;eip=0x0033ea; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 10330 mov     [bp+arg_0], ax ;~ 0396:33EA
cs=0x396;eip=0x0033ed; 	T(OR(ax, ax));	// 10331 or      ax, ax ;~ 0396:33ED
cs=0x396;eip=0x0033ef; 	R(JZ(loc_152f5));	// 10332 jz      short loc_152F5 ;~ 0396:33EF
loc_15331:
	// 4955 
cs=0x396;eip=0x0033f1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 10335 mov     ax, [bp+arg_0] ;~ 0396:33F1
cs=0x396;eip=0x0033f4; 	T(MOV(sp, bp));	// 10336 mov     sp, bp ;~ 0396:33F4
cs=0x396;eip=0x0033f6; 	X(POP(bp));	// 10337 pop     bp ;~ 0396:33F6
cs=0x396;eip=0x0033f7; 	R(RETF(0));	// 10338 retf ;~ 0396:33F7
sub_15338:
	// 10345 
cs=0x396;eip=0x0033f8; 	X(XOR(byte_34f30, 0x80));	// 10347 xor     byte_34F30, 80h ;~ 0396:33F8
ret_396_33fd:
	// 4956 
cs=0x396;eip=0x0033fd; 	T(MOV(ax, 0x1057));	// 10348 mov     ax, 1057h ;~ 0396:33FD
cs=0x396;eip=0x003400; 	X(PUSH(ax));	// 10349 push    ax ;~ 0396:3400
cs=0x396;eip=0x003401; 	T(MOV(ax, 0x0AC1));	// 10350 mov     ax, 0AC1h ;~ 0396:3401
cs=0x396;eip=0x003404; 	X(PUSH(ax));	// 10351 push    ax ;~ 0396:3404
cs=0x396;eip=0x003405; 	R(CALLF(sub_29b46,0));	// 10352 call    sub_29B46 ;~ 0396:3405
cs=0x396;eip=0x00340a; 	T(ADD(sp, 4));	// 10353 add     sp, 4 ;~ 0396:340A
cs=0x396;eip=0x00340d; 	T(MOV(ax, 0x0ABA));	// 10354 mov     ax, 0ABAh ;~ 0396:340D
cs=0x396;eip=0x003410; 	X(PUSH(ax));	// 10355 push    ax ;~ 0396:3410
cs=0x396;eip=0x003411; 	R(CALLF(sub_10d62,0));	// 10356 call    sub_10D62 ;~ 0396:3411
cs=0x396;eip=0x003416; 	T(ADD(sp, 2));	// 10357 add     sp, 2 ;~ 0396:3416
cs=0x396;eip=0x003419; 	T(MOV(ax, 1));	// 10358 mov     ax, 1 ;~ 0396:3419
cs=0x396;eip=0x00341c; 	X(MOV(word_2beda, ax));	// 10359 mov     word_2BEDA, ax ;~ 0396:341C
cs=0x396;eip=0x00341f; 	X(PUSH(ax));	// 10360 push    ax ;~ 0396:341F
cs=0x396;eip=0x003420; 	R(CALLF(sub_2714e,0));	// 10361 call    far ptr sub_2714E ;~ 0396:3420
cs=0x396;eip=0x003425; 	T(ADD(sp, 2));	// 10362 add     sp, 2 ;~ 0396:3425
cs=0x396;eip=0x003428; 	T(MOV(ax, 0x0F));	// 10363 mov     ax, 0Fh ;~ 0396:3428
cs=0x396;eip=0x00342b; 	X(PUSH(ax));	// 10364 push    ax ;~ 0396:342B
cs=0x396;eip=0x00342c; 	R(CALLF(sub_27031,0));	// 10365 call    far ptr sub_27031 ;~ 0396:342C
cs=0x396;eip=0x003431; 	T(ADD(sp, 2));	// 10366 add     sp, 2 ;~ 0396:3431
cs=0x396;eip=0x003434; 	T(MOV(ax, 0x53));	// 10367 mov     ax, 53h ; 'S' ;~ 0396:3434
cs=0x396;eip=0x003437; 	X(PUSH(ax));	// 10368 push    ax ;~ 0396:3437
cs=0x396;eip=0x003438; 	X(PUSH(ax));	// 10369 push    ax ;~ 0396:3438
cs=0x396;eip=0x003439; 	T(MOV(ax, 0x6F));	// 10370 mov     ax, 6Fh ; 'o' ;~ 0396:3439
cs=0x396;eip=0x00343c; 	X(PUSH(ax));	// 10371 push    ax ;~ 0396:343C
cs=0x396;eip=0x00343d; 	T(SUB(ax, ax));	// 10372 sub     ax, ax ;~ 0396:343D
cs=0x396;eip=0x00343f; 	X(PUSH(ax));	// 10373 push    ax ;~ 0396:343F
cs=0x396;eip=0x003440; 	R(CALLF(sub_2785b,0));	// 10374 call    far ptr sub_2785B ;~ 0396:3440
cs=0x396;eip=0x003445; 	T(ADD(sp, 8));	// 10375 add     sp, 8 ;~ 0396:3445
cs=0x396;eip=0x003448; 	T(MOV(ax, word_2c93e));	// 10376 mov     ax, word_2C93E ;~ 0396:3448
cs=0x396;eip=0x00344b; 	T(MOV(cx, ax));	// 10377 mov     cx, ax ;~ 0396:344B
cs=0x396;eip=0x00344d; 	T(SHL(ax, 1));	// 10378 shl     ax, 1 ;~ 0396:344D
cs=0x396;eip=0x00344f; 	T(ADD(ax, cx));	// 10379 add     ax, cx ;~ 0396:344F
cs=0x396;eip=0x003451; 	T(SHL(ax, 1));	// 10380 shl     ax, 1 ;~ 0396:3451
cs=0x396;eip=0x003453; 	T(ADD(ax, 0x9E0));	// 10381 add     ax, 9E0h ;~ 0396:3453
cs=0x396;eip=0x003456; 	X(PUSH(ax));	// 10382 push    ax ;~ 0396:3456
cs=0x396;eip=0x003457; 	T(MOV(ax, 0x0ABC));	// 10383 mov     ax, 0ABCh ;~ 0396:3457
cs=0x396;eip=0x00345a; 	X(PUSH(ax));	// 10384 push    ax ;~ 0396:345A
cs=0x396;eip=0x00345b; 	R(CALLF(sub_29b46,0));	// 10385 call    sub_29B46 ;~ 0396:345B
cs=0x396;eip=0x003460; 	T(ADD(sp, 4));	// 10386 add     sp, 4 ;~ 0396:3460
cs=0x396;eip=0x003463; 	T(MOV(ax, 0x105E));	// 10387 mov     ax, 105Eh ;~ 0396:3463
cs=0x396;eip=0x003466; 	X(PUSH(ax));	// 10388 push    ax ;~ 0396:3466
cs=0x396;eip=0x003467; 	T(MOV(ax, 0x0AC1));	// 10389 mov     ax, 0AC1h ;~ 0396:3467
cs=0x396;eip=0x00346a; 	X(PUSH(ax));	// 10390 push    ax ;~ 0396:346A
cs=0x396;eip=0x00346b; 	R(CALLF(sub_29b46,0));	// 10391 call    sub_29B46 ;~ 0396:346B
cs=0x396;eip=0x003470; 	T(ADD(sp, 4));	// 10392 add     sp, 4 ;~ 0396:3470
cs=0x396;eip=0x003473; 	X(PUSH(word_38a9e));	// 10393 push    word_38A9E ;~ 0396:3473
cs=0x396;eip=0x003477; 	X(PUSH(word_38a9c));	// 10394 push    word_38A9C ;~ 0396:3477
cs=0x396;eip=0x00347b; 	T(MOV(ax, 0x0ABA));	// 10395 mov     ax, 0ABAh ;~ 0396:347B
cs=0x396;eip=0x00347e; 	X(PUSH(ax));	// 10396 push    ax ;~ 0396:347E
cs=0x396;eip=0x00347f; 	R(CALLF(sub_10ee0,0));	// 10397 call    sub_10EE0 ;~ 0396:347F
cs=0x396;eip=0x003484; 	T(ADD(sp, 6));	// 10398 add     sp, 6 ;~ 0396:3484
cs=0x396;eip=0x003487; 	T(MOV(ax, 0x2500));	// 10399 mov     ax, 2500h ;~ 0396:3487
cs=0x396;eip=0x00348a; 	X(PUSH(ds));	// 10400 push    ds ;~ 0396:348A
cs=0x396;eip=0x00348b; 	X(PUSH(ax));	// 10401 push    ax ;~ 0396:348B
cs=0x396;eip=0x00348c; 	X(PUSH(word_38a9e));	// 10402 push    word_38A9E ;~ 0396:348C
cs=0x396;eip=0x003490; 	X(PUSH(word_38a9c));	// 10403 push    word_38A9C ;~ 0396:3490
cs=0x396;eip=0x003494; 	R(CALLF(sub_1ab87,0));	// 10404 call    sub_1AB87 ;~ 0396:3494
cs=0x396;eip=0x003499; 	T(ADD(sp, 8));	// 10405 add     sp, 8 ;~ 0396:3499
cs=0x396;eip=0x00349c; 	T(SUB(ax, ax));	// 10406 sub     ax, ax ;~ 0396:349C
cs=0x396;eip=0x00349e; 	X(PUSH(ax));	// 10407 push    ax ;~ 0396:349E
cs=0x396;eip=0x00349f; 	T(MOV(ax, 0x0C7));	// 10408 mov     ax, 0C7h ; '«' ;~ 0396:349F
cs=0x396;eip=0x0034a2; 	X(PUSH(ax));	// 10409 push    ax ;~ 0396:34A2
cs=0x396;eip=0x0034a3; 	T(MOV(ax, 0x70));	// 10410 mov     ax, 70h ; 'p' ;~ 0396:34A3
cs=0x396;eip=0x0034a6; 	X(PUSH(ax));	// 10411 push    ax ;~ 0396:34A6
cs=0x396;eip=0x0034a7; 	T(MOV(ax, 0x0D0));	// 10412 mov     ax, 0D0h ; '–' ;~ 0396:34A7
cs=0x396;eip=0x0034aa; 	X(PUSH(ax));	// 10413 push    ax ;~ 0396:34AA
cs=0x396;eip=0x0034ab; 	X(PUSH(word_2c9a6));	// 10414 push    word_2C9A6 ;~ 0396:34AB
cs=0x396;eip=0x0034af; 	T(MOV(ax, 0x2500));	// 10415 mov     ax, 2500h ;~ 0396:34AF
cs=0x396;eip=0x0034b2; 	X(PUSH(ax));	// 10416 push    ax ;~ 0396:34B2
cs=0x396;eip=0x0034b3; 	X(PUSH(cs));	// 10417 push    cs ;~ 0396:34B3
cs=0x396;eip=0x0034b4; 	R(CALL(sub_178ec,0));	// 10418 call    near ptr sub_178EC ;~ 0396:34B4
cs=0x396;eip=0x0034b7; 	T(ADD(sp, 0x0C));	// 10419 add     sp, 0Ch ;~ 0396:34B7
cs=0x396;eip=0x0034ba; 	T(MOV(ax, 0x1065));	// 10420 mov     ax, 1065h ;~ 0396:34BA
cs=0x396;eip=0x0034bd; 	X(PUSH(ax));	// 10421 push    ax ;~ 0396:34BD
cs=0x396;eip=0x0034be; 	T(MOV(ax, 0x0AC1));	// 10422 mov     ax, 0AC1h ;~ 0396:34BE
cs=0x396;eip=0x0034c1; 	X(PUSH(ax));	// 10423 push    ax ;~ 0396:34C1
cs=0x396;eip=0x0034c2; 	R(CALLF(sub_29b46,0));	// 10424 call    sub_29B46 ;~ 0396:34C2
cs=0x396;eip=0x0034c7; 	T(ADD(sp, 4));	// 10425 add     sp, 4 ;~ 0396:34C7
cs=0x396;eip=0x0034ca; 	X(PUSH(word_38a9e));	// 10426 push    word_38A9E ;~ 0396:34CA
cs=0x396;eip=0x0034ce; 	X(PUSH(word_38a9c));	// 10427 push    word_38A9C ;~ 0396:34CE
cs=0x396;eip=0x0034d2; 	T(MOV(ax, 0x0ABA));	// 10428 mov     ax, 0ABAh ;~ 0396:34D2
cs=0x396;eip=0x0034d5; 	X(PUSH(ax));	// 10429 push    ax ;~ 0396:34D5
cs=0x396;eip=0x0034d6; 	R(CALLF(sub_10ee0,0));	// 10430 call    sub_10EE0 ;~ 0396:34D6
cs=0x396;eip=0x0034db; 	T(ADD(sp, 6));	// 10431 add     sp, 6 ;~ 0396:34DB
cs=0x396;eip=0x0034de; 	T(MOV(ax, 0x2500));	// 10432 mov     ax, 2500h ;~ 0396:34DE
cs=0x396;eip=0x0034e1; 	X(PUSH(ds));	// 10433 push    ds ;~ 0396:34E1
cs=0x396;eip=0x0034e2; 	X(PUSH(ax));	// 10434 push    ax ;~ 0396:34E2
cs=0x396;eip=0x0034e3; 	X(PUSH(word_38a9e));	// 10435 push    word_38A9E ;~ 0396:34E3
cs=0x396;eip=0x0034e7; 	X(PUSH(word_38a9c));	// 10436 push    word_38A9C ;~ 0396:34E7
cs=0x396;eip=0x0034eb; 	R(CALLF(sub_1ab87,0));	// 10437 call    sub_1AB87 ;~ 0396:34EB
cs=0x396;eip=0x0034f0; 	T(ADD(sp, 8));	// 10438 add     sp, 8 ;~ 0396:34F0
cs=0x396;eip=0x0034f3; 	T(SUB(ax, ax));	// 10439 sub     ax, ax ;~ 0396:34F3
cs=0x396;eip=0x0034f5; 	X(PUSH(ax));	// 10440 push    ax ;~ 0396:34F5
cs=0x396;eip=0x0034f6; 	T(MOV(ax, 0x52));	// 10441 mov     ax, 52h ; 'R' ;~ 0396:34F6
cs=0x396;eip=0x0034f9; 	X(PUSH(ax));	// 10442 push    ax ;~ 0396:34F9
cs=0x396;eip=0x0034fa; 	T(SUB(ax, ax));	// 10443 sub     ax, ax ;~ 0396:34FA
cs=0x396;eip=0x0034fc; 	X(PUSH(ax));	// 10444 push    ax ;~ 0396:34FC
cs=0x396;eip=0x0034fd; 	T(MOV(ax, 0x70));	// 10445 mov     ax, 70h ; 'p' ;~ 0396:34FD
cs=0x396;eip=0x003500; 	X(PUSH(ax));	// 10446 push    ax ;~ 0396:3500
cs=0x396;eip=0x003501; 	X(PUSH(word_2c996));	// 10447 push    word_2C996 ;~ 0396:3501
cs=0x396;eip=0x003505; 	T(MOV(ax, 0x2500));	// 10448 mov     ax, 2500h ;~ 0396:3505
cs=0x396;eip=0x003508; 	X(PUSH(ax));	// 10449 push    ax ;~ 0396:3508
cs=0x396;eip=0x003509; 	X(PUSH(cs));	// 10450 push    cs ;~ 0396:3509
cs=0x396;eip=0x00350a; 	R(CALL(sub_178ec,0));	// 10451 call    near ptr sub_178EC ;~ 0396:350A
cs=0x396;eip=0x00350d; 	T(ADD(sp, 0x0C));	// 10452 add     sp, 0Ch ;~ 0396:350D
cs=0x396;eip=0x003510; 	T(MOV(ax, 0x106A));	// 10453 mov     ax, 106Ah ;~ 0396:3510
cs=0x396;eip=0x003513; 	X(PUSH(ax));	// 10454 push    ax ;~ 0396:3513
cs=0x396;eip=0x003514; 	T(MOV(ax, 0x0AC1));	// 10455 mov     ax, 0AC1h ;~ 0396:3514
cs=0x396;eip=0x003517; 	X(PUSH(ax));	// 10456 push    ax ;~ 0396:3517
cs=0x396;eip=0x003518; 	R(CALLF(sub_29b46,0));	// 10457 call    sub_29B46 ;~ 0396:3518
cs=0x396;eip=0x00351d; 	T(ADD(sp, 4));	// 10458 add     sp, 4 ;~ 0396:351D
cs=0x396;eip=0x003520; 	X(PUSH(word_38a9e));	// 10459 push    word_38A9E ;~ 0396:3520
cs=0x396;eip=0x003524; 	X(PUSH(word_38a9c));	// 10460 push    word_38A9C ;~ 0396:3524
cs=0x396;eip=0x003528; 	T(MOV(ax, 0x0ABA));	// 10461 mov     ax, 0ABAh ;~ 0396:3528
cs=0x396;eip=0x00352b; 	X(PUSH(ax));	// 10462 push    ax ;~ 0396:352B
cs=0x396;eip=0x00352c; 	R(CALLF(sub_10ee0,0));	// 10463 call    sub_10EE0 ;~ 0396:352C
cs=0x396;eip=0x003531; 	T(ADD(sp, 6));	// 10464 add     sp, 6 ;~ 0396:3531
cs=0x396;eip=0x003534; 	T(MOV(ax, 0x2500));	// 10465 mov     ax, 2500h ;~ 0396:3534
cs=0x396;eip=0x003537; 	X(PUSH(ds));	// 10466 push    ds ;~ 0396:3537
cs=0x396;eip=0x003538; 	X(PUSH(ax));	// 10467 push    ax ;~ 0396:3538
cs=0x396;eip=0x003539; 	X(PUSH(word_38a9e));	// 10468 push    word_38A9E ;~ 0396:3539
cs=0x396;eip=0x00353d; 	X(PUSH(word_38a9c));	// 10469 push    word_38A9C ;~ 0396:353D
cs=0x396;eip=0x003541; 	R(CALLF(sub_1ab87,0));	// 10470 call    sub_1AB87 ;~ 0396:3541
cs=0x396;eip=0x003546; 	T(ADD(sp, 8));	// 10471 add     sp, 8 ;~ 0396:3546
cs=0x396;eip=0x003549; 	T(SUB(ax, ax));	// 10472 sub     ax, ax ;~ 0396:3549
cs=0x396;eip=0x00354b; 	X(PUSH(ax));	// 10473 push    ax ;~ 0396:354B
cs=0x396;eip=0x00354c; 	T(MOV(ax, 0x0C7));	// 10474 mov     ax, 0C7h ; '«' ;~ 0396:354C
cs=0x396;eip=0x00354f; 	X(PUSH(ax));	// 10475 push    ax ;~ 0396:354F
cs=0x396;eip=0x003550; 	T(SUB(ax, ax));	// 10476 sub     ax, ax ;~ 0396:3550
cs=0x396;eip=0x003552; 	X(PUSH(ax));	// 10477 push    ax ;~ 0396:3552
cs=0x396;eip=0x003553; 	T(MOV(ax, 0x70));	// 10478 mov     ax, 70h ; 'p' ;~ 0396:3553
cs=0x396;eip=0x003556; 	X(PUSH(ax));	// 10479 push    ax ;~ 0396:3556
cs=0x396;eip=0x003557; 	X(PUSH(word_2c998));	// 10480 push    word_2C998 ;~ 0396:3557
cs=0x396;eip=0x00355b; 	T(MOV(ax, 0x2500));	// 10481 mov     ax, 2500h ;~ 0396:355B
cs=0x396;eip=0x00355e; 	X(PUSH(ax));	// 10482 push    ax ;~ 0396:355E
cs=0x396;eip=0x00355f; 	X(PUSH(cs));	// 10483 push    cs ;~ 0396:355F
cs=0x396;eip=0x003560; 	R(CALL(sub_178ec,0));	// 10484 call    near ptr sub_178EC ;~ 0396:3560
cs=0x396;eip=0x003563; 	T(ADD(sp, 0x0C));	// 10485 add     sp, 0Ch ;~ 0396:3563
cs=0x396;eip=0x003566; 	T(MOV(ax, 0x106F));	// 10486 mov     ax, 106Fh ;~ 0396:3566
cs=0x396;eip=0x003569; 	X(PUSH(ax));	// 10487 push    ax ;~ 0396:3569
cs=0x396;eip=0x00356a; 	T(MOV(ax, 0x0AC1));	// 10488 mov     ax, 0AC1h ;~ 0396:356A
cs=0x396;eip=0x00356d; 	X(PUSH(ax));	// 10489 push    ax ;~ 0396:356D
cs=0x396;eip=0x00356e; 	R(CALLF(sub_29b46,0));	// 10490 call    sub_29B46 ;~ 0396:356E
cs=0x396;eip=0x003573; 	T(ADD(sp, 4));	// 10491 add     sp, 4 ;~ 0396:3573
cs=0x396;eip=0x003576; 	X(PUSH(word_38a9e));	// 10492 push    word_38A9E ;~ 0396:3576
cs=0x396;eip=0x00357a; 	X(PUSH(word_38a9c));	// 10493 push    word_38A9C ;~ 0396:357A
cs=0x396;eip=0x00357e; 	T(MOV(ax, 0x0ABA));	// 10494 mov     ax, 0ABAh ;~ 0396:357E
cs=0x396;eip=0x003581; 	X(PUSH(ax));	// 10495 push    ax ;~ 0396:3581
cs=0x396;eip=0x003582; 	R(CALLF(sub_10ee0,0));	// 10496 call    sub_10EE0 ;~ 0396:3582
cs=0x396;eip=0x003587; 	T(ADD(sp, 6));	// 10497 add     sp, 6 ;~ 0396:3587
cs=0x396;eip=0x00358a; 	T(MOV(ax, 0x2500));	// 10498 mov     ax, 2500h ;~ 0396:358A
cs=0x396;eip=0x00358d; 	X(PUSH(ds));	// 10499 push    ds ;~ 0396:358D
cs=0x396;eip=0x00358e; 	X(PUSH(ax));	// 10500 push    ax ;~ 0396:358E
cs=0x396;eip=0x00358f; 	X(PUSH(word_38a9e));	// 10501 push    word_38A9E ;~ 0396:358F
cs=0x396;eip=0x003593; 	X(PUSH(word_38a9c));	// 10502 push    word_38A9C ;~ 0396:3593
cs=0x396;eip=0x003597; 	R(CALLF(sub_1ab87,0));	// 10503 call    sub_1AB87 ;~ 0396:3597
cs=0x396;eip=0x00359c; 	T(ADD(sp, 8));	// 10504 add     sp, 8 ;~ 0396:359C
cs=0x396;eip=0x00359f; 	T(SUB(ax, ax));	// 10505 sub     ax, ax ;~ 0396:359F
cs=0x396;eip=0x0035a1; 	X(PUSH(ax));	// 10506 push    ax ;~ 0396:35A1
cs=0x396;eip=0x0035a2; 	T(MOV(ax, 0x52));	// 10507 mov     ax, 52h ; 'R' ;~ 0396:35A2
cs=0x396;eip=0x0035a5; 	X(PUSH(ax));	// 10508 push    ax ;~ 0396:35A5
cs=0x396;eip=0x0035a6; 	T(MOV(ax, 0x70));	// 10509 mov     ax, 70h ; 'p' ;~ 0396:35A6
cs=0x396;eip=0x0035a9; 	X(PUSH(ax));	// 10510 push    ax ;~ 0396:35A9
cs=0x396;eip=0x0035aa; 	T(MOV(ax, 0x0D0));	// 10511 mov     ax, 0D0h ; '–' ;~ 0396:35AA
cs=0x396;eip=0x0035ad; 	X(PUSH(ax));	// 10512 push    ax ;~ 0396:35AD
cs=0x396;eip=0x0035ae; 	X(PUSH(word_2c990));	// 10513 push    word_2C990 ;~ 0396:35AE
cs=0x396;eip=0x0035b2; 	T(MOV(ax, 0x2500));	// 10514 mov     ax, 2500h ;~ 0396:35B2
cs=0x396;eip=0x0035b5; 	X(PUSH(ax));	// 10515 push    ax ;~ 0396:35B5
cs=0x396;eip=0x0035b6; 	X(PUSH(cs));	// 10516 push    cs ;~ 0396:35B6
cs=0x396;eip=0x0035b7; 	R(CALL(sub_178ec,0));	// 10517 call    near ptr sub_178EC ;~ 0396:35B7
cs=0x396;eip=0x0035ba; 	T(ADD(sp, 0x0C));	// 10518 add     sp, 0Ch ;~ 0396:35BA
cs=0x396;eip=0x0035bd; 	X(PUSH(cs));	// 10519 push    cs ;~ 0396:35BD
cs=0x396;eip=0x0035be; 	R(CALL(sub_13b22,0));	// 10520 call    near ptr sub_13B22 ;~ 0396:35BE
cs=0x396;eip=0x0035c1; 	T(MOV(ax, 1));	// 10521 mov     ax, 1 ;~ 0396:35C1
cs=0x396;eip=0x0035c4; 	X(MOV(word_2beda, ax));	// 10522 mov     word_2BEDA, ax ;~ 0396:35C4
cs=0x396;eip=0x0035c7; 	X(PUSH(ax));	// 10523 push    ax ;~ 0396:35C7
cs=0x396;eip=0x0035c8; 	R(CALLF(sub_2714e,0));	// 10524 call    far ptr sub_2714E ;~ 0396:35C8
cs=0x396;eip=0x0035cd; 	T(ADD(sp, 2));	// 10525 add     sp, 2 ;~ 0396:35CD
cs=0x396;eip=0x0035d0; 	T(MOV(ax, 0x1074));	// 10526 mov     ax, 1074h ;~ 0396:35D0
cs=0x396;eip=0x0035d3; 	X(PUSH(ax));	// 10527 push    ax ;~ 0396:35D3
cs=0x396;eip=0x0035d4; 	T(MOV(ax, 0x0AC1));	// 10528 mov     ax, 0AC1h ;~ 0396:35D4
cs=0x396;eip=0x0035d7; 	X(PUSH(ax));	// 10529 push    ax ;~ 0396:35D7
cs=0x396;eip=0x0035d8; 	R(CALLF(sub_29b46,0));	// 10530 call    sub_29B46 ;~ 0396:35D8
cs=0x396;eip=0x0035dd; 	T(ADD(sp, 4));	// 10531 add     sp, 4 ;~ 0396:35DD
cs=0x396;eip=0x0035e0; 	X(PUSH(word_38a9e));	// 10532 push    word_38A9E ;~ 0396:35E0
cs=0x396;eip=0x0035e4; 	X(PUSH(word_38a9c));	// 10533 push    word_38A9C ;~ 0396:35E4
cs=0x396;eip=0x0035e8; 	T(MOV(ax, 0x0ABA));	// 10534 mov     ax, 0ABAh ;~ 0396:35E8
cs=0x396;eip=0x0035eb; 	X(PUSH(ax));	// 10535 push    ax ;~ 0396:35EB
cs=0x396;eip=0x0035ec; 	R(CALLF(sub_10ee0,0));	// 10536 call    sub_10EE0 ;~ 0396:35EC
cs=0x396;eip=0x0035f1; 	T(ADD(sp, 6));	// 10537 add     sp, 6 ;~ 0396:35F1
cs=0x396;eip=0x0035f4; 	T(MOV(ax, 0x2500));	// 10538 mov     ax, 2500h ;~ 0396:35F4
cs=0x396;eip=0x0035f7; 	X(PUSH(ds));	// 10539 push    ds ;~ 0396:35F7
cs=0x396;eip=0x0035f8; 	X(PUSH(ax));	// 10540 push    ax ;~ 0396:35F8
cs=0x396;eip=0x0035f9; 	X(PUSH(word_38a9e));	// 10541 push    word_38A9E ;~ 0396:35F9
cs=0x396;eip=0x0035fd; 	X(PUSH(word_38a9c));	// 10542 push    word_38A9C ;~ 0396:35FD
cs=0x396;eip=0x003601; 	R(CALLF(sub_1ab87,0));	// 10543 call    sub_1AB87 ;~ 0396:3601
cs=0x396;eip=0x003606; 	T(ADD(sp, 8));	// 10544 add     sp, 8 ;~ 0396:3606
cs=0x396;eip=0x003609; 	T(SUB(ax, ax));	// 10545 sub     ax, ax ;~ 0396:3609
cs=0x396;eip=0x00360b; 	X(PUSH(ax));	// 10546 push    ax ;~ 0396:360B
cs=0x396;eip=0x00360c; 	T(MOV(ax, 0x0C7));	// 10547 mov     ax, 0C7h ; '«' ;~ 0396:360C
cs=0x396;eip=0x00360f; 	X(PUSH(ax));	// 10548 push    ax ;~ 0396:360F
cs=0x396;eip=0x003610; 	T(MOV(ax, 0x70));	// 10549 mov     ax, 70h ; 'p' ;~ 0396:3610
cs=0x396;eip=0x003613; 	X(PUSH(ax));	// 10550 push    ax ;~ 0396:3613
cs=0x396;eip=0x003614; 	T(MOV(ax, 0x0D0));	// 10551 mov     ax, 0D0h ; '–' ;~ 0396:3614
cs=0x396;eip=0x003617; 	X(PUSH(ax));	// 10552 push    ax ;~ 0396:3617
cs=0x396;eip=0x003618; 	X(PUSH(word_2c9a8));	// 10553 push    word_2C9A8 ;~ 0396:3618
cs=0x396;eip=0x00361c; 	T(MOV(ax, 0x2500));	// 10554 mov     ax, 2500h ;~ 0396:361C
cs=0x396;eip=0x00361f; 	X(PUSH(ax));	// 10555 push    ax ;~ 0396:361F
cs=0x396;eip=0x003620; 	X(PUSH(cs));	// 10556 push    cs ;~ 0396:3620
cs=0x396;eip=0x003621; 	R(CALL(sub_178ec,0));	// 10557 call    near ptr sub_178EC ;~ 0396:3621
cs=0x396;eip=0x003624; 	T(ADD(sp, 0x0C));	// 10558 add     sp, 0Ch ;~ 0396:3624
cs=0x396;eip=0x003627; 	T(SUB(ax, ax));	// 10559 sub     ax, ax ;~ 0396:3627
cs=0x396;eip=0x003629; 	X(MOV(word_2beda, ax));	// 10560 mov     word_2BEDA, ax ;~ 0396:3629
cs=0x396;eip=0x00362c; 	X(PUSH(ax));	// 10561 push    ax ;~ 0396:362C
cs=0x396;eip=0x00362d; 	R(CALLF(sub_2714e,0));	// 10562 call    far ptr sub_2714E ;~ 0396:362D
cs=0x396;eip=0x003632; 	T(ADD(sp, 2));	// 10563 add     sp, 2 ;~ 0396:3632
cs=0x396;eip=0x003635; 	R(RETF(0));	// 10564 retf ;~ 0396:3635
sub_15576:
	// 10572 
#undef var_a
#define var_a -0x0A
	// 10574 var_A           = word ptr -0Ah ;~ 0396:3636
#undef var_6
#define var_6 -6
	// 10575 var_6           = word ptr -6 ;~ 0396:3636
#undef var_4
#define var_4 -4
	// 10576 var_4           = word ptr -4 ;~ 0396:3636
#undef var_2
#define var_2 -2
	// 10577 var_2           = word ptr -2 ;~ 0396:3636
ret_396_3636:
	// 4957 
cs=0x396;eip=0x003636; 	X(PUSH(bp));	// 10579 push    bp ;~ 0396:3636
cs=0x396;eip=0x003637; 	T(MOV(bp, sp));	// 10580 mov     bp, sp ;~ 0396:3637
cs=0x396;eip=0x003639; 	T(SUB(sp, 0x0A));	// 10581 sub     sp, 0Ah ;~ 0396:3639
cs=0x396;eip=0x00363c; 	X(MOV(byte_3750c, 0));	// 10582 mov     byte_3750C, 0 ;~ 0396:363C
cs=0x396;eip=0x003641; 	T(MOV(ax, word_2c942));	// 10583 mov     ax, word_2C942 ;~ 0396:3641
cs=0x396;eip=0x003644; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 10584 mov     [bp+var_4], ax ;~ 0396:3644
cs=0x396;eip=0x003647; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 10585 mov     [bp+var_2], ax ;~ 0396:3647
cs=0x396;eip=0x00364a; 	X(PUSH(cs));	// 10586 push    cs ;~ 0396:364A
cs=0x396;eip=0x00364b; 	R(CALL(sub_156dc,0));	// 10587 call    near ptr sub_156DC ;~ 0396:364B
cs=0x396;eip=0x00364e; 	T(SUB(al, al));	// 10588 sub     al, al ;~ 0396:364E
cs=0x396;eip=0x003650; 	X(MOV(byte_34f9b, al));	// 10589 mov     byte_34F9B, al ;~ 0396:3650
cs=0x396;eip=0x003653; 	T(SUB(ah, ah));	// 10590 sub     ah, ah ;~ 0396:3653
cs=0x396;eip=0x003655; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 10591 mov     [bp+var_6], ax ;~ 0396:3655
loc_15598:
	// 4958 
cs=0x396;eip=0x003658; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0));	// 10595 cmp     [bp+var_6], 0 ;~ 0396:3658
cs=0x396;eip=0x00365c; 	R(JNZ(loc_15608));	// 10596 jnz     short loc_15608 ;~ 0396:365C
cs=0x396;eip=0x00365e; 	T(MOV(ax, 4));	// 10597 mov     ax, 4 ;~ 0396:365E
cs=0x396;eip=0x003661; 	X(PUSH(ax));	// 10598 push    ax ;~ 0396:3661
cs=0x396;eip=0x003662; 	R(CALLF(sub_26ffb,0));	// 10599 call    sub_26FFB ;~ 0396:3662
cs=0x396;eip=0x003667; 	T(ADD(sp, 2));	// 10600 add     sp, 2 ;~ 0396:3667
cs=0x396;eip=0x00366a; 	T(ax = bp+var_a);	// 10601 lea     ax, [bp+var_A] ;~ 0396:366A
cs=0x396;eip=0x00366d; 	X(PUSH(ax));	// 10602 push    ax ;~ 0396:366D
cs=0x396;eip=0x00366e; 	R(CALLF(sub_10f80,0));	// 10603 call    sub_10F80 ;~ 0396:366E
cs=0x396;eip=0x003673; 	T(ADD(sp, 2));	// 10604 add     sp, 2 ;~ 0396:3673
cs=0x396;eip=0x003676; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 10605 cmp     [bp+var_A], 0 ;~ 0396:3676
cs=0x396;eip=0x00367a; 	R(JZ(loc_15598));	// 10606 jz      short loc_15598 ;~ 0396:367A
cs=0x396;eip=0x00367c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 10607 mov     ax, [bp+var_A] ;~ 0396:367C
cs=0x396;eip=0x00367f; 	T(CMP(ax, 0x0D));	// 10608 cmp     ax, 0Dh ;~ 0396:367F
cs=0x396;eip=0x003682; 	R(JZ(loc_15600));	// 10609 jz      short loc_15600 ;~ 0396:3682
cs=0x396;eip=0x003684; 	T(CMP(ax, 0x92));	// 10610 cmp     ax, 92h ; 'í' ;~ 0396:3684
cs=0x396;eip=0x003687; 	R(JZ(loc_155d0));	// 10611 jz      short loc_155D0 ;~ 0396:3687
cs=0x396;eip=0x003689; 	T(CMP(ax, 0x98));	// 10612 cmp     ax, 98h ;~ 0396:3689
cs=0x396;eip=0x00368c; 	R(JZ(loc_155f6));	// 10613 jz      short loc_155F6 ;~ 0396:368C
cs=0x396;eip=0x00368e; 	R(JMP(loc_155dd));	// 10614 jmp     short loc_155DD ;~ 0396:368E
loc_155d0:
	// 4959 
cs=0x396;eip=0x003690; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 10618 push    [bp+var_4] ;~ 0396:3690
cs=0x396;eip=0x003693; 	X(PUSH(cs));	// 10619 push    cs ;~ 0396:3693
cs=0x396;eip=0x003694; 	R(CALL(sub_1567e,0));	// 10620 call    near ptr sub_1567E ;~ 0396:3694
loc_155d7:
	// 4960 
cs=0x396;eip=0x003697; 	T(ADD(sp, 2));	// 10623 add     sp, 2 ;~ 0396:3697
cs=0x396;eip=0x00369a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 10624 mov     [bp+var_4], ax ;~ 0396:369A
loc_155dd:
	// 4961 
cs=0x396;eip=0x00369d; 	T(MOV(ax, word_2c942));	// 10628 mov     ax, word_2C942 ;~ 0396:369D
cs=0x396;eip=0x0036a0; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), ax));	// 10629 cmp     [bp+var_4], ax ;~ 0396:36A0
cs=0x396;eip=0x0036a3; 	R(JZ(loc_15598));	// 10630 jz      short loc_15598 ;~ 0396:36A3
cs=0x396;eip=0x0036a5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 10631 mov     ax, [bp+var_4] ;~ 0396:36A5
cs=0x396;eip=0x0036a8; 	X(MOV(word_2c942, ax));	// 10632 mov     word_2C942, ax ;~ 0396:36A8
cs=0x396;eip=0x0036ab; 	X(PUSH(cs));	// 10633 push    cs ;~ 0396:36AB
cs=0x396;eip=0x0036ac; 	R(CALL(sub_156dc,0));	// 10634 call    near ptr sub_156DC ;~ 0396:36AC
cs=0x396;eip=0x0036af; 	X(MOV(byte_34f9b, 0));	// 10635 mov     byte_34F9B, 0 ;~ 0396:36AF
cs=0x396;eip=0x0036b4; 	R(JMP(loc_15598));	// 10636 jmp     short loc_15598 ;~ 0396:36B4
loc_155f6:
	// 4962 
cs=0x396;eip=0x0036b6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 10640 push    [bp+var_4] ;~ 0396:36B6
cs=0x396;eip=0x0036b9; 	X(PUSH(cs));	// 10641 push    cs ;~ 0396:36B9
cs=0x396;eip=0x0036ba; 	R(CALL(sub_1561e,0));	// 10642 call    near ptr sub_1561E ;~ 0396:36BA
cs=0x396;eip=0x0036bd; 	R(JMP(loc_155d7));	// 10643 jmp     short loc_155D7 ;~ 0396:36BD
loc_15600:
	// 4963 
cs=0x396;eip=0x0036c0; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 1));	// 10648 mov     [bp+var_6], 1 ;~ 0396:36C0
cs=0x396;eip=0x0036c5; 	R(JMP(loc_155dd));	// 10649 jmp     short loc_155DD ;~ 0396:36C5
loc_15608:
	// 4964 
cs=0x396;eip=0x0036c8; 	T(MOV(ax, word_2c942));	// 10654 mov     ax, word_2C942 ;~ 0396:36C8
cs=0x396;eip=0x0036cb; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 10655 cmp     [bp+var_2], ax ;~ 0396:36CB
cs=0x396;eip=0x0036ce; 	R(JZ(loc_15619));	// 10656 jz      short loc_15619 ;~ 0396:36CE
cs=0x396;eip=0x0036d0; 	X(PUSH(cs));	// 10657 push    cs ;~ 0396:36D0
cs=0x396;eip=0x0036d1; 	R(CALL(sub_14676,0));	// 10658 call    near ptr sub_14676 ;~ 0396:36D1
cs=0x396;eip=0x0036d4; 	X(MOV(byte_2bec8, 0));	// 10659 mov     byte_2BEC8, 0 ;~ 0396:36D4
loc_15619:
	// 4965 
cs=0x396;eip=0x0036d9; 	T(MOV(sp, bp));	// 10662 mov     sp, bp ;~ 0396:36D9
cs=0x396;eip=0x0036db; 	X(POP(bp));	// 10663 pop     bp ;~ 0396:36DB
cs=0x396;eip=0x0036dc; 	R(RETF(0));	// 10664 retf ;~ 0396:36DC
sub_1561e:
	// 10674 
#undef var_4
#define var_4 -4
	// 10676 var_4           = word ptr -4 ;~ 0396:36DE
#undef var_2
#define var_2 -2
	// 10677 var_2           = word ptr -2 ;~ 0396:36DE
#undef arg_0
#define arg_0 6
	// 10678 arg_0           = word ptr  6 ;~ 0396:36DE
ret_396_36de:
	// 4966 
cs=0x396;eip=0x0036de; 	X(PUSH(bp));	// 10680 push    bp ;~ 0396:36DE
cs=0x396;eip=0x0036df; 	T(MOV(bp, sp));	// 10681 mov     bp, sp ;~ 0396:36DF
cs=0x396;eip=0x0036e1; 	T(SUB(sp, 4));	// 10682 sub     sp, 4 ;~ 0396:36E1
cs=0x396;eip=0x0036e4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 10683 mov     ax, [bp+arg_0] ;~ 0396:36E4
cs=0x396;eip=0x0036e7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 10684 mov     [bp+var_2], ax ;~ 0396:36E7
cs=0x396;eip=0x0036ea; 	T(MOV(al, byte_2c947));	// 10685 mov     al, byte_2C947 ;~ 0396:36EA
cs=0x396;eip=0x0036ed; 	T(SUB(ah, ah));	// 10686 sub     ah, ah ;~ 0396:36ED
cs=0x396;eip=0x0036ef; 	T(DEC(ax));	// 10687 dec     ax ;~ 0396:36EF
cs=0x396;eip=0x0036f0; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 10688 cmp     [bp+arg_0], ax ;~ 0396:36F0
cs=0x396;eip=0x0036f3; 	R(JNZ(loc_1563c));	// 10689 jnz     short loc_1563C ;~ 0396:36F3
cs=0x396;eip=0x0036f5; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 10690 mov     [bp+arg_0], 0 ;~ 0396:36F5
cs=0x396;eip=0x0036fa; 	R(JMP(loc_1563f));	// 10691 jmp     short loc_1563F ;~ 0396:36FA
loc_1563c:
	// 4967 
cs=0x396;eip=0x0036fc; 	X(INC(*(dw*)(raddr(ss,bp+arg_0))));	// 10695 inc     [bp+arg_0] ;~ 0396:36FC
loc_1563f:
	// 4968 
cs=0x396;eip=0x0036ff; 	T(MOV(ax, 0x0AEA));	// 10699 mov     ax, 0AEAh ;~ 0396:36FF
cs=0x396;eip=0x003702; 	X(PUSH(ax));	// 10700 push    ax ;~ 0396:3702
cs=0x396;eip=0x003703; 	T(MOV(ax, 0x0ADA));	// 10701 mov     ax, 0ADAh ;~ 0396:3703
cs=0x396;eip=0x003706; 	X(PUSH(ax));	// 10702 push    ax ;~ 0396:3706
cs=0x396;eip=0x003707; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 10703 push    [bp+arg_0] ;~ 0396:3707
cs=0x396;eip=0x00370a; 	X(PUSH(cs));	// 10704 push    cs ;~ 0396:370A
cs=0x396;eip=0x00370b; 	R(CALL(sub_14b06,0));	// 10705 call    near ptr sub_14B06 ;~ 0396:370B
cs=0x396;eip=0x00370e; 	T(ADD(sp, 6));	// 10706 add     sp, 6 ;~ 0396:370E
cs=0x396;eip=0x003711; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 10707 mov     [bp+var_4], ax ;~ 0396:3711
cs=0x396;eip=0x003714; 	T(OR(ax, ax));	// 10708 or      ax, ax ;~ 0396:3714
cs=0x396;eip=0x003716; 	R(JZ(loc_15677));	// 10709 jz      short loc_15677 ;~ 0396:3716
cs=0x396;eip=0x003718; 	T(MOV(al, byte_2c947));	// 10710 mov     al, byte_2C947 ;~ 0396:3718
cs=0x396;eip=0x00371b; 	T(SUB(ah, ah));	// 10711 sub     ah, ah ;~ 0396:371B
cs=0x396;eip=0x00371d; 	T(DEC(ax));	// 10712 dec     ax ;~ 0396:371D
cs=0x396;eip=0x00371e; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 10713 cmp     [bp+arg_0], ax ;~ 0396:371E
cs=0x396;eip=0x003721; 	R(JNZ(loc_1566a));	// 10714 jnz     short loc_1566A ;~ 0396:3721
cs=0x396;eip=0x003723; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 10715 mov     [bp+arg_0], 0 ;~ 0396:3723
cs=0x396;eip=0x003728; 	R(JMP(loc_1566d));	// 10716 jmp     short loc_1566D ;~ 0396:3728
loc_1566a:
	// 4969 
cs=0x396;eip=0x00372a; 	X(INC(*(dw*)(raddr(ss,bp+arg_0))));	// 10720 inc     [bp+arg_0] ;~ 0396:372A
loc_1566d:
	// 4970 
cs=0x396;eip=0x00372d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 10723 mov     ax, [bp+var_2] ;~ 0396:372D
cs=0x396;eip=0x003730; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 10724 mov     [bp+arg_0], ax ;~ 0396:3730
cs=0x396;eip=0x003733; 	T(OR(ax, ax));	// 10725 or      ax, ax ;~ 0396:3733
cs=0x396;eip=0x003735; 	R(JZ(loc_1563f));	// 10726 jz      short loc_1563F ;~ 0396:3735
loc_15677:
	// 4971 
cs=0x396;eip=0x003737; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 10729 mov     ax, [bp+arg_0] ;~ 0396:3737
cs=0x396;eip=0x00373a; 	T(MOV(sp, bp));	// 10730 mov     sp, bp ;~ 0396:373A
cs=0x396;eip=0x00373c; 	X(POP(bp));	// 10731 pop     bp ;~ 0396:373C
cs=0x396;eip=0x00373d; 	R(RETF(0));	// 10732 retf ;~ 0396:373D
sub_1567e:
	// 10740 
#undef var_4
#define var_4 -4
	// 10742 var_4           = word ptr -4 ;~ 0396:373E
#undef var_2
#define var_2 -2
	// 10743 var_2           = word ptr -2 ;~ 0396:373E
#undef arg_0
#define arg_0 6
	// 10744 arg_0           = word ptr  6 ;~ 0396:373E
ret_396_373e:
	// 4972 
cs=0x396;eip=0x00373e; 	X(PUSH(bp));	// 10746 push    bp ;~ 0396:373E
cs=0x396;eip=0x00373f; 	T(MOV(bp, sp));	// 10747 mov     bp, sp ;~ 0396:373F
cs=0x396;eip=0x003741; 	T(SUB(sp, 4));	// 10748 sub     sp, 4 ;~ 0396:3741
cs=0x396;eip=0x003744; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 10749 mov     ax, [bp+arg_0] ;~ 0396:3744
cs=0x396;eip=0x003747; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 10750 mov     [bp+var_2], ax ;~ 0396:3747
cs=0x396;eip=0x00374a; 	T(OR(ax, ax));	// 10751 or      ax, ax ;~ 0396:374A
cs=0x396;eip=0x00374c; 	R(JNZ(loc_1569a));	// 10752 jnz     short loc_1569A ;~ 0396:374C
cs=0x396;eip=0x00374e; 	T(MOV(al, byte_2c947));	// 10753 mov     al, byte_2C947 ;~ 0396:374E
cs=0x396;eip=0x003751; 	T(SUB(ah, ah));	// 10754 sub     ah, ah ;~ 0396:3751
cs=0x396;eip=0x003753; 	T(DEC(ax));	// 10755 dec     ax ;~ 0396:3753
cs=0x396;eip=0x003754; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 10756 mov     [bp+arg_0], ax ;~ 0396:3754
cs=0x396;eip=0x003757; 	R(JMP(loc_1569d));	// 10757 jmp     short loc_1569D ;~ 0396:3757
loc_1569a:
	// 4973 
cs=0x396;eip=0x00375a; 	X(DEC(*(dw*)(raddr(ss,bp+arg_0))));	// 10762 dec     [bp+arg_0] ;~ 0396:375A
loc_1569d:
	// 4974 
cs=0x396;eip=0x00375d; 	T(MOV(ax, 0x0AEA));	// 10766 mov     ax, 0AEAh ;~ 0396:375D
cs=0x396;eip=0x003760; 	X(PUSH(ax));	// 10767 push    ax ;~ 0396:3760
cs=0x396;eip=0x003761; 	T(MOV(ax, 0x0ADA));	// 10768 mov     ax, 0ADAh ;~ 0396:3761
cs=0x396;eip=0x003764; 	X(PUSH(ax));	// 10769 push    ax ;~ 0396:3764
cs=0x396;eip=0x003765; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 10770 push    [bp+arg_0] ;~ 0396:3765
cs=0x396;eip=0x003768; 	X(PUSH(cs));	// 10771 push    cs ;~ 0396:3768
cs=0x396;eip=0x003769; 	R(CALL(sub_14b06,0));	// 10772 call    near ptr sub_14B06 ;~ 0396:3769
cs=0x396;eip=0x00376c; 	T(ADD(sp, 6));	// 10773 add     sp, 6 ;~ 0396:376C
cs=0x396;eip=0x00376f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 10774 mov     [bp+var_4], ax ;~ 0396:376F
cs=0x396;eip=0x003772; 	T(OR(ax, ax));	// 10775 or      ax, ax ;~ 0396:3772
cs=0x396;eip=0x003774; 	R(JZ(loc_156d5));	// 10776 jz      short loc_156D5 ;~ 0396:3774
cs=0x396;eip=0x003776; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 10777 cmp     [bp+arg_0], 0 ;~ 0396:3776
cs=0x396;eip=0x00377a; 	R(JNZ(loc_156c8));	// 10778 jnz     short loc_156C8 ;~ 0396:377A
cs=0x396;eip=0x00377c; 	T(MOV(al, byte_2c947));	// 10779 mov     al, byte_2C947 ;~ 0396:377C
cs=0x396;eip=0x00377f; 	T(SUB(ah, ah));	// 10780 sub     ah, ah ;~ 0396:377F
cs=0x396;eip=0x003781; 	T(DEC(ax));	// 10781 dec     ax ;~ 0396:3781
cs=0x396;eip=0x003782; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 10782 mov     [bp+arg_0], ax ;~ 0396:3782
cs=0x396;eip=0x003785; 	R(JMP(loc_156cb));	// 10783 jmp     short loc_156CB ;~ 0396:3785
loc_156c8:
	// 4975 
cs=0x396;eip=0x003788; 	X(DEC(*(dw*)(raddr(ss,bp+arg_0))));	// 10788 dec     [bp+arg_0] ;~ 0396:3788
loc_156cb:
	// 4976 
cs=0x396;eip=0x00378b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 10791 mov     ax, [bp+var_2] ;~ 0396:378B
cs=0x396;eip=0x00378e; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 10792 mov     [bp+arg_0], ax ;~ 0396:378E
cs=0x396;eip=0x003791; 	T(OR(ax, ax));	// 10793 or      ax, ax ;~ 0396:3791
cs=0x396;eip=0x003793; 	R(JZ(loc_1569d));	// 10794 jz      short loc_1569D ;~ 0396:3793
loc_156d5:
	// 4977 
cs=0x396;eip=0x003795; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 10797 mov     ax, [bp+arg_0] ;~ 0396:3795
cs=0x396;eip=0x003798; 	T(MOV(sp, bp));	// 10798 mov     sp, bp ;~ 0396:3798
cs=0x396;eip=0x00379a; 	X(POP(bp));	// 10799 pop     bp ;~ 0396:379A
cs=0x396;eip=0x00379b; 	R(RETF(0));	// 10800 retf ;~ 0396:379B
sub_156dc:
	// 10808 
cs=0x396;eip=0x00379c; 	X(PUSH(bp));	// 10810 push    bp ;~ 0396:379C
ret_396_379d:
	// 4978 
cs=0x396;eip=0x00379d; 	T(MOV(bp, sp));	// 10811 mov     bp, sp ;~ 0396:379D
cs=0x396;eip=0x00379f; 	T(SUB(sp, 2));	// 10812 sub     sp, 2 ;~ 0396:379F
cs=0x396;eip=0x0037a2; 	X(MOV(byte_34f30, 0));	// 10813 mov     byte_34F30, 0 ;~ 0396:37A2
cs=0x396;eip=0x0037a7; 	T(MOV(ax, 1));	// 10814 mov     ax, 1 ;~ 0396:37A7
cs=0x396;eip=0x0037aa; 	X(MOV(word_2beda, ax));	// 10815 mov     word_2BEDA, ax ;~ 0396:37AA
cs=0x396;eip=0x0037ad; 	X(PUSH(ax));	// 10816 push    ax ;~ 0396:37AD
cs=0x396;eip=0x0037ae; 	R(CALLF(sub_2714e,0));	// 10817 call    far ptr sub_2714E ;~ 0396:37AE
cs=0x396;eip=0x0037b3; 	T(ADD(sp, 2));	// 10818 add     sp, 2 ;~ 0396:37B3
cs=0x396;eip=0x0037b6; 	T(MOV(ax, word_2c942));	// 10819 mov     ax, word_2C942 ;~ 0396:37B6
cs=0x396;eip=0x0037b9; 	T(MOV(cl, 3));	// 10820 mov     cl, 3 ;~ 0396:37B9
cs=0x396;eip=0x0037bb; 	T(SHL(ax, cl));	// 10821 shl     ax, cl ;~ 0396:37BB
cs=0x396;eip=0x0037bd; 	T(ADD(ax, 0x0A34));	// 10822 add     ax, 0A34h ;~ 0396:37BD
cs=0x396;eip=0x0037c0; 	X(PUSH(ax));	// 10823 push    ax ;~ 0396:37C0
cs=0x396;eip=0x0037c1; 	T(MOV(ax, 0x0ADC));	// 10824 mov     ax, 0ADCh ;~ 0396:37C1
cs=0x396;eip=0x0037c4; 	X(PUSH(ax));	// 10825 push    ax ;~ 0396:37C4
cs=0x396;eip=0x0037c5; 	R(CALLF(sub_29b46,0));	// 10826 call    sub_29B46 ;~ 0396:37C5
cs=0x396;eip=0x0037ca; 	T(ADD(sp, 4));	// 10827 add     sp, 4 ;~ 0396:37CA
cs=0x396;eip=0x0037cd; 	T(MOV(ax, 0x107B));	// 10828 mov     ax, 107Bh ;~ 0396:37CD
cs=0x396;eip=0x0037d0; 	X(PUSH(ax));	// 10829 push    ax ;~ 0396:37D0
cs=0x396;eip=0x0037d1; 	T(MOV(ax, 0x0AE3));	// 10830 mov     ax, 0AE3h ;~ 0396:37D1
cs=0x396;eip=0x0037d4; 	X(PUSH(ax));	// 10831 push    ax ;~ 0396:37D4
cs=0x396;eip=0x0037d5; 	R(CALLF(sub_29b46,0));	// 10832 call    sub_29B46 ;~ 0396:37D5
cs=0x396;eip=0x0037da; 	T(ADD(sp, 4));	// 10833 add     sp, 4 ;~ 0396:37DA
cs=0x396;eip=0x0037dd; 	X(PUSH(word_38a9e));	// 10834 push    word_38A9E ;~ 0396:37DD
cs=0x396;eip=0x0037e1; 	X(PUSH(word_38a9c));	// 10835 push    word_38A9C ;~ 0396:37E1
cs=0x396;eip=0x0037e5; 	T(MOV(ax, 0x0ADA));	// 10836 mov     ax, 0ADAh ;~ 0396:37E5
cs=0x396;eip=0x0037e8; 	X(PUSH(ax));	// 10837 push    ax ;~ 0396:37E8
cs=0x396;eip=0x0037e9; 	R(CALLF(sub_10ee0,0));	// 10838 call    sub_10EE0 ;~ 0396:37E9
cs=0x396;eip=0x0037ee; 	T(ADD(sp, 6));	// 10839 add     sp, 6 ;~ 0396:37EE
cs=0x396;eip=0x0037f1; 	T(MOV(ax, 0x2500));	// 10840 mov     ax, 2500h ;~ 0396:37F1
cs=0x396;eip=0x0037f4; 	X(PUSH(ds));	// 10841 push    ds ;~ 0396:37F4
cs=0x396;eip=0x0037f5; 	X(PUSH(ax));	// 10842 push    ax ;~ 0396:37F5
cs=0x396;eip=0x0037f6; 	X(PUSH(word_38a9e));	// 10843 push    word_38A9E ;~ 0396:37F6
cs=0x396;eip=0x0037fa; 	X(PUSH(word_38a9c));	// 10844 push    word_38A9C ;~ 0396:37FA
cs=0x396;eip=0x0037fe; 	R(CALLF(sub_1ab87,0));	// 10845 call    sub_1AB87 ;~ 0396:37FE
cs=0x396;eip=0x003803; 	T(ADD(sp, 8));	// 10846 add     sp, 8 ;~ 0396:3803
cs=0x396;eip=0x003806; 	X(PUSH(cs));	// 10847 push    cs ;~ 0396:3806
cs=0x396;eip=0x003807; 	R(CALL(sub_13b96,0));	// 10848 call    near ptr sub_13B96 ;~ 0396:3807
cs=0x396;eip=0x00380a; 	T(CMP(word_3a178, 0x13));	// 10849 cmp     word_3A178, 13h ;~ 0396:380A
cs=0x396;eip=0x00380f; 	R(JNZ(loc_15780));	// 10850 jnz     short loc_15780 ;~ 0396:380F
cs=0x396;eip=0x003811; 	T(SUB(ax, ax));	// 10851 sub     ax, ax ;~ 0396:3811
cs=0x396;eip=0x003813; 	X(MOV(word_2beda, ax));	// 10852 mov     word_2BEDA, ax ;~ 0396:3813
cs=0x396;eip=0x003816; 	X(PUSH(ax));	// 10853 push    ax ;~ 0396:3816
cs=0x396;eip=0x003817; 	R(CALLF(sub_2714e,0));	// 10854 call    far ptr sub_2714E ;~ 0396:3817
cs=0x396;eip=0x00381c; 	T(ADD(sp, 2));	// 10855 add     sp, 2 ;~ 0396:381C
cs=0x396;eip=0x00381f; 	T(SUB(ax, ax));	// 10856 sub     ax, ax ;~ 0396:381F
cs=0x396;eip=0x003821; 	X(PUSH(ax));	// 10857 push    ax ;~ 0396:3821
cs=0x396;eip=0x003822; 	R(CALLF(sub_27031,0));	// 10858 call    far ptr sub_27031 ;~ 0396:3822
cs=0x396;eip=0x003827; 	T(ADD(sp, 2));	// 10859 add     sp, 2 ;~ 0396:3827
cs=0x396;eip=0x00382a; 	T(MOV(ax, 0x0C7));	// 10860 mov     ax, 0C7h ; '«' ;~ 0396:382A
cs=0x396;eip=0x00382d; 	X(PUSH(ax));	// 10861 push    ax ;~ 0396:382D
cs=0x396;eip=0x00382e; 	T(SUB(ax, ax));	// 10862 sub     ax, ax ;~ 0396:382E
cs=0x396;eip=0x003830; 	X(PUSH(ax));	// 10863 push    ax ;~ 0396:3830
cs=0x396;eip=0x003831; 	T(MOV(ax, 0x13F));	// 10864 mov     ax, 13Fh ;~ 0396:3831
cs=0x396;eip=0x003834; 	X(PUSH(ax));	// 10865 push    ax ;~ 0396:3834
cs=0x396;eip=0x003835; 	T(SUB(ax, ax));	// 10866 sub     ax, ax ;~ 0396:3835
cs=0x396;eip=0x003837; 	X(PUSH(ax));	// 10867 push    ax ;~ 0396:3837
cs=0x396;eip=0x003838; 	R(CALLF(sub_2785b,0));	// 10868 call    far ptr sub_2785B ;~ 0396:3838
cs=0x396;eip=0x00383d; 	T(ADD(sp, 8));	// 10869 add     sp, 8 ;~ 0396:383D
loc_15780:
	// 4979 
cs=0x396;eip=0x003840; 	T(MOV(ax, 1));	// 10872 mov     ax, 1 ;~ 0396:3840
cs=0x396;eip=0x003843; 	X(MOV(word_2beda, ax));	// 10873 mov     word_2BEDA, ax ;~ 0396:3843
cs=0x396;eip=0x003846; 	X(PUSH(ax));	// 10874 push    ax ;~ 0396:3846
cs=0x396;eip=0x003847; 	R(CALLF(sub_2714e,0));	// 10875 call    far ptr sub_2714E ;~ 0396:3847
cs=0x396;eip=0x00384c; 	T(ADD(sp, 2));	// 10876 add     sp, 2 ;~ 0396:384C
cs=0x396;eip=0x00384f; 	T(SUB(ax, ax));	// 10877 sub     ax, ax ;~ 0396:384F
cs=0x396;eip=0x003851; 	X(PUSH(ax));	// 10878 push    ax ;~ 0396:3851
cs=0x396;eip=0x003852; 	R(CALLF(sub_27031,0));	// 10879 call    far ptr sub_27031 ;~ 0396:3852
cs=0x396;eip=0x003857; 	T(ADD(sp, 2));	// 10880 add     sp, 2 ;~ 0396:3857
cs=0x396;eip=0x00385a; 	T(MOV(ax, 0x0C7));	// 10881 mov     ax, 0C7h ; '«' ;~ 0396:385A
cs=0x396;eip=0x00385d; 	X(PUSH(ax));	// 10882 push    ax ;~ 0396:385D
cs=0x396;eip=0x00385e; 	T(SUB(ax, ax));	// 10883 sub     ax, ax ;~ 0396:385E
cs=0x396;eip=0x003860; 	X(PUSH(ax));	// 10884 push    ax ;~ 0396:3860
cs=0x396;eip=0x003861; 	T(MOV(ax, 0x13F));	// 10885 mov     ax, 13Fh ;~ 0396:3861
cs=0x396;eip=0x003864; 	X(PUSH(ax));	// 10886 push    ax ;~ 0396:3864
cs=0x396;eip=0x003865; 	T(SUB(ax, ax));	// 10887 sub     ax, ax ;~ 0396:3865
cs=0x396;eip=0x003867; 	X(PUSH(ax));	// 10888 push    ax ;~ 0396:3867
cs=0x396;eip=0x003868; 	R(CALLF(sub_2785b,0));	// 10889 call    far ptr sub_2785B ;~ 0396:3868
cs=0x396;eip=0x00386d; 	T(ADD(sp, 8));	// 10890 add     sp, 8 ;~ 0396:386D
cs=0x396;eip=0x003870; 	T(SUB(ax, ax));	// 10891 sub     ax, ax ;~ 0396:3870
cs=0x396;eip=0x003872; 	X(PUSH(ax));	// 10892 push    ax ;~ 0396:3872
cs=0x396;eip=0x003873; 	T(MOV(ax, 0x20));	// 10893 mov     ax, 20h ; ' ' ;~ 0396:3873
cs=0x396;eip=0x003876; 	X(PUSH(ax));	// 10894 push    ax ;~ 0396:3876
cs=0x396;eip=0x003877; 	T(SUB(ax, ax));	// 10895 sub     ax, ax ;~ 0396:3877
cs=0x396;eip=0x003879; 	X(PUSH(ax));	// 10896 push    ax ;~ 0396:3879
cs=0x396;eip=0x00387a; 	T(MOV(ax, 0x140));	// 10897 mov     ax, 140h ;~ 0396:387A
cs=0x396;eip=0x00387d; 	X(PUSH(ax));	// 10898 push    ax ;~ 0396:387D
cs=0x396;eip=0x00387e; 	X(PUSH(word_2c956));	// 10899 push    word_2C956 ;~ 0396:387E
cs=0x396;eip=0x003882; 	T(MOV(ax, 0x2500));	// 10900 mov     ax, 2500h ;~ 0396:3882
cs=0x396;eip=0x003885; 	X(PUSH(ax));	// 10901 push    ax ;~ 0396:3885
cs=0x396;eip=0x003886; 	X(PUSH(cs));	// 10902 push    cs ;~ 0396:3886
cs=0x396;eip=0x003887; 	R(CALL(sub_178ec,0));	// 10903 call    near ptr sub_178EC ;~ 0396:3887
cs=0x396;eip=0x00388a; 	T(ADD(sp, 0x0C));	// 10904 add     sp, 0Ch ;~ 0396:388A
cs=0x396;eip=0x00388d; 	T(MOV(ax, 0x1080));	// 10905 mov     ax, 1080h ;~ 0396:388D
cs=0x396;eip=0x003890; 	X(PUSH(ax));	// 10906 push    ax ;~ 0396:3890
cs=0x396;eip=0x003891; 	T(MOV(ax, 0x0AE4));	// 10907 mov     ax, 0AE4h ;~ 0396:3891
cs=0x396;eip=0x003894; 	X(PUSH(ax));	// 10908 push    ax ;~ 0396:3894
cs=0x396;eip=0x003895; 	R(CALLF(sub_29b46,0));	// 10909 call    sub_29B46 ;~ 0396:3895
cs=0x396;eip=0x00389a; 	T(ADD(sp, 4));	// 10910 add     sp, 4 ;~ 0396:389A
cs=0x396;eip=0x00389d; 	T(MOV(al, byte_2c95e));	// 10911 mov     al, byte_2C95E ;~ 0396:389D
cs=0x396;eip=0x0038a0; 	X(MOV(byte_2c923, al));	// 10912 mov     byte_2C923, al ;~ 0396:38A0
cs=0x396;eip=0x0038a3; 	T(MOV(ax, 0x0ADA));	// 10913 mov     ax, 0ADAh ;~ 0396:38A3
cs=0x396;eip=0x0038a6; 	X(PUSH(ax));	// 10914 push    ax ;~ 0396:38A6
cs=0x396;eip=0x0038a7; 	R(CALLF(sub_10d62,0));	// 10915 call    sub_10D62 ;~ 0396:38A7
cs=0x396;eip=0x0038ac; 	T(ADD(sp, 2));	// 10916 add     sp, 2 ;~ 0396:38AC
cs=0x396;eip=0x0038af; 	T(MOV(ax, 0x1085));	// 10917 mov     ax, 1085h ;~ 0396:38AF
cs=0x396;eip=0x0038b2; 	X(PUSH(ax));	// 10918 push    ax ;~ 0396:38B2
cs=0x396;eip=0x0038b3; 	T(MOV(ax, 0x0AE5));	// 10919 mov     ax, 0AE5h ;~ 0396:38B3
cs=0x396;eip=0x0038b6; 	X(PUSH(ax));	// 10920 push    ax ;~ 0396:38B6
cs=0x396;eip=0x0038b7; 	R(CALLF(sub_29b46,0));	// 10921 call    sub_29B46 ;~ 0396:38B7
cs=0x396;eip=0x0038bc; 	T(ADD(sp, 4));	// 10922 add     sp, 4 ;~ 0396:38BC
cs=0x396;eip=0x0038bf; 	X(PUSH(word_38a9e));	// 10923 push    word_38A9E ;~ 0396:38BF
cs=0x396;eip=0x0038c3; 	X(PUSH(word_38a9c));	// 10924 push    word_38A9C ;~ 0396:38C3
cs=0x396;eip=0x0038c7; 	T(MOV(ax, 0x0ADA));	// 10925 mov     ax, 0ADAh ;~ 0396:38C7
cs=0x396;eip=0x0038ca; 	X(PUSH(ax));	// 10926 push    ax ;~ 0396:38CA
cs=0x396;eip=0x0038cb; 	R(CALLF(sub_10ee0,0));	// 10927 call    sub_10EE0 ;~ 0396:38CB
cs=0x396;eip=0x0038d0; 	T(ADD(sp, 6));	// 10928 add     sp, 6 ;~ 0396:38D0
cs=0x396;eip=0x0038d3; 	T(MOV(ax, 0x2500));	// 10929 mov     ax, 2500h ;~ 0396:38D3
cs=0x396;eip=0x0038d6; 	X(PUSH(ds));	// 10930 push    ds ;~ 0396:38D6
cs=0x396;eip=0x0038d7; 	X(PUSH(ax));	// 10931 push    ax ;~ 0396:38D7
cs=0x396;eip=0x0038d8; 	X(PUSH(word_38a9e));	// 10932 push    word_38A9E ;~ 0396:38D8
cs=0x396;eip=0x0038dc; 	X(PUSH(word_38a9c));	// 10933 push    word_38A9C ;~ 0396:38DC
cs=0x396;eip=0x0038e0; 	R(CALLF(sub_1ab87,0));	// 10934 call    sub_1AB87 ;~ 0396:38E0
cs=0x396;eip=0x0038e5; 	T(ADD(sp, 8));	// 10935 add     sp, 8 ;~ 0396:38E5
cs=0x396;eip=0x0038e8; 	T(SUB(ax, ax));	// 10936 sub     ax, ax ;~ 0396:38E8
cs=0x396;eip=0x0038ea; 	X(PUSH(ax));	// 10937 push    ax ;~ 0396:38EA
cs=0x396;eip=0x0038eb; 	T(MOV(ax, 0x6B));	// 10938 mov     ax, 6Bh ; 'k' ;~ 0396:38EB
cs=0x396;eip=0x0038ee; 	X(PUSH(ax));	// 10939 push    ax ;~ 0396:38EE
cs=0x396;eip=0x0038ef; 	T(SUB(ax, ax));	// 10940 sub     ax, ax ;~ 0396:38EF
cs=0x396;eip=0x0038f1; 	X(PUSH(ax));	// 10941 push    ax ;~ 0396:38F1
cs=0x396;eip=0x0038f2; 	T(MOV(ax, 0x140));	// 10942 mov     ax, 140h ;~ 0396:38F2
cs=0x396;eip=0x0038f5; 	X(PUSH(ax));	// 10943 push    ax ;~ 0396:38F5
cs=0x396;eip=0x0038f6; 	X(PUSH(word_2c95c));	// 10944 push    word_2C95C ;~ 0396:38F6
cs=0x396;eip=0x0038fa; 	T(MOV(ax, 0x2500));	// 10945 mov     ax, 2500h ;~ 0396:38FA
cs=0x396;eip=0x0038fd; 	X(PUSH(ax));	// 10946 push    ax ;~ 0396:38FD
cs=0x396;eip=0x0038fe; 	X(PUSH(cs));	// 10947 push    cs ;~ 0396:38FE
cs=0x396;eip=0x0038ff; 	R(CALL(sub_178ec,0));	// 10948 call    near ptr sub_178EC ;~ 0396:38FF
cs=0x396;eip=0x003902; 	T(ADD(sp, 0x0C));	// 10949 add     sp, 0Ch ;~ 0396:3902
cs=0x396;eip=0x003905; 	X(MOV(byte_2c925, 0x41));	// 10950 mov     byte_2C925, 41h ; 'A' ;~ 0396:3905
cs=0x396;eip=0x00390a; 	X(PUSH(word_38a9e));	// 10951 push    word_38A9E ;~ 0396:390A
cs=0x396;eip=0x00390e; 	X(PUSH(word_38a9c));	// 10952 push    word_38A9C ;~ 0396:390E
cs=0x396;eip=0x003912; 	T(MOV(ax, 0x0ADA));	// 10953 mov     ax, 0ADAh ;~ 0396:3912
cs=0x396;eip=0x003915; 	X(PUSH(ax));	// 10954 push    ax ;~ 0396:3915
cs=0x396;eip=0x003916; 	R(CALLF(sub_10ee0,0));	// 10955 call    sub_10EE0 ;~ 0396:3916
cs=0x396;eip=0x00391b; 	T(ADD(sp, 6));	// 10956 add     sp, 6 ;~ 0396:391B
cs=0x396;eip=0x00391e; 	T(MOV(ax, 0x2500));	// 10957 mov     ax, 2500h ;~ 0396:391E
cs=0x396;eip=0x003921; 	X(PUSH(ds));	// 10958 push    ds ;~ 0396:3921
cs=0x396;eip=0x003922; 	X(PUSH(ax));	// 10959 push    ax ;~ 0396:3922
cs=0x396;eip=0x003923; 	X(PUSH(word_38a9e));	// 10960 push    word_38A9E ;~ 0396:3923
cs=0x396;eip=0x003927; 	X(PUSH(word_38a9c));	// 10961 push    word_38A9C ;~ 0396:3927
cs=0x396;eip=0x00392b; 	R(CALLF(sub_1ab87,0));	// 10962 call    sub_1AB87 ;~ 0396:392B
cs=0x396;eip=0x003930; 	T(ADD(sp, 8));	// 10963 add     sp, 8 ;~ 0396:3930
cs=0x396;eip=0x003933; 	T(MOV(ax, 1));	// 10964 mov     ax, 1 ;~ 0396:3933
cs=0x396;eip=0x003936; 	X(PUSH(ax));	// 10965 push    ax ;~ 0396:3936
cs=0x396;eip=0x003937; 	T(MOV(ax, 0x58));	// 10966 mov     ax, 58h ; 'X' ;~ 0396:3937
cs=0x396;eip=0x00393a; 	X(PUSH(ax));	// 10967 push    ax ;~ 0396:393A
cs=0x396;eip=0x00393b; 	T(SUB(ax, ax));	// 10968 sub     ax, ax ;~ 0396:393B
cs=0x396;eip=0x00393d; 	X(PUSH(ax));	// 10969 push    ax ;~ 0396:393D
cs=0x396;eip=0x00393e; 	T(MOV(ax, 0x140));	// 10970 mov     ax, 140h ;~ 0396:393E
cs=0x396;eip=0x003941; 	X(PUSH(ax));	// 10971 push    ax ;~ 0396:3941
cs=0x396;eip=0x003942; 	X(PUSH(word_2c95a));	// 10972 push    word_2C95A ;~ 0396:3942
cs=0x396;eip=0x003946; 	T(MOV(ax, 0x2500));	// 10973 mov     ax, 2500h ;~ 0396:3946
cs=0x396;eip=0x003949; 	X(PUSH(ax));	// 10974 push    ax ;~ 0396:3949
cs=0x396;eip=0x00394a; 	X(PUSH(cs));	// 10975 push    cs ;~ 0396:394A
cs=0x396;eip=0x00394b; 	R(CALL(sub_178ec,0));	// 10976 call    near ptr sub_178EC ;~ 0396:394B
cs=0x396;eip=0x00394e; 	T(ADD(sp, 0x0C));	// 10977 add     sp, 0Ch ;~ 0396:394E
cs=0x396;eip=0x003951; 	T(MOV(ax, 8));	// 10978 mov     ax, 8 ;~ 0396:3951
cs=0x396;eip=0x003954; 	X(PUSH(ax));	// 10979 push    ax ;~ 0396:3954
cs=0x396;eip=0x003955; 	R(CALLF(sub_27031,0));	// 10980 call    far ptr sub_27031 ;~ 0396:3955
cs=0x396;eip=0x00395a; 	T(ADD(sp, 2));	// 10981 add     sp, 2 ;~ 0396:395A
cs=0x396;eip=0x00395d; 	T(MOV(ax, 0x6B));	// 10982 mov     ax, 6Bh ; 'k' ;~ 0396:395D
cs=0x396;eip=0x003960; 	X(PUSH(ax));	// 10983 push    ax ;~ 0396:3960
cs=0x396;eip=0x003961; 	T(MOV(ax, 0x26));	// 10984 mov     ax, 26h ; '&' ;~ 0396:3961
cs=0x396;eip=0x003964; 	X(PUSH(ax));	// 10985 push    ax ;~ 0396:3964
cs=0x396;eip=0x003965; 	T(MOV(ax, 0x13F));	// 10986 mov     ax, 13Fh ;~ 0396:3965
cs=0x396;eip=0x003968; 	X(PUSH(ax));	// 10987 push    ax ;~ 0396:3968
cs=0x396;eip=0x003969; 	T(SUB(ax, ax));	// 10988 sub     ax, ax ;~ 0396:3969
cs=0x396;eip=0x00396b; 	X(PUSH(ax));	// 10989 push    ax ;~ 0396:396B
cs=0x396;eip=0x00396c; 	X(PUSH(cs));	// 10990 push    cs ;~ 0396:396C
cs=0x396;eip=0x00396d; 	R(CALL(sub_137a4,0));	// 10991 call    near ptr sub_137A4 ;~ 0396:396D
cs=0x396;eip=0x003970; 	T(ADD(sp, 8));	// 10992 add     sp, 8 ;~ 0396:3970
cs=0x396;eip=0x003973; 	X(MOV(byte_34f30, 0x80));	// 10993 mov     byte_34F30, 80h ; 'Ä' ;~ 0396:3973
cs=0x396;eip=0x003978; 	T(MOV(ax, 0x1089));	// 10994 mov     ax, 1089h ;~ 0396:3978
cs=0x396;eip=0x00397b; 	X(PUSH(ax));	// 10995 push    ax ;~ 0396:397B
cs=0x396;eip=0x00397c; 	T(MOV(ax, 0x0AE4));	// 10996 mov     ax, 0AE4h ;~ 0396:397C
cs=0x396;eip=0x00397f; 	X(PUSH(ax));	// 10997 push    ax ;~ 0396:397F
cs=0x396;eip=0x003980; 	R(CALLF(sub_29b46,0));	// 10998 call    sub_29B46 ;~ 0396:3980
cs=0x396;eip=0x003985; 	T(ADD(sp, 4));	// 10999 add     sp, 4 ;~ 0396:3985
cs=0x396;eip=0x003988; 	T(MOV(al, byte_2c94b));	// 11000 mov     al, byte_2C94B ;~ 0396:3988
cs=0x396;eip=0x00398b; 	T(SUB(ah, ah));	// 11001 sub     ah, ah ;~ 0396:398B
cs=0x396;eip=0x00398d; 	T(MOV(bx, ax));	// 11002 mov     bx, ax ;~ 0396:398D
cs=0x396;eip=0x00398f; 	T(SHL(bx, 1));	// 11003 shl     bx, 1 ;~ 0396:398F
cs=0x396;eip=0x003991; 	T(ADD(bx, ax));	// 11004 add     bx, ax ;~ 0396:3991
cs=0x396;eip=0x003993; 	T(SHL(bx, 1));	// 11005 shl     bx, 1 ;~ 0396:3993
cs=0x396;eip=0x003995; 	T(MOV(al, *(raddr(ds,bx+0x0B18))));	// 11006 mov     al, [bx+0B18h] ;~ 0396:3995
cs=0x396;eip=0x003999; 	X(MOV(byte_2c923, al));	// 11007 mov     byte_2C923, al ;~ 0396:3999
cs=0x396;eip=0x00399c; 	T(MOV(ax, 0x0ADA));	// 11008 mov     ax, 0ADAh ;~ 0396:399C
cs=0x396;eip=0x00399f; 	X(PUSH(ax));	// 11009 push    ax ;~ 0396:399F
cs=0x396;eip=0x0039a0; 	R(CALLF(sub_10d62,0));	// 11010 call    sub_10D62 ;~ 0396:39A0
cs=0x396;eip=0x0039a5; 	T(ADD(sp, 2));	// 11011 add     sp, 2 ;~ 0396:39A5
cs=0x396;eip=0x0039a8; 	T(MOV(ax, 0x108E));	// 11012 mov     ax, 108Eh ;~ 0396:39A8
cs=0x396;eip=0x0039ab; 	X(PUSH(ax));	// 11013 push    ax ;~ 0396:39AB
cs=0x396;eip=0x0039ac; 	T(MOV(ax, 0x0AE5));	// 11014 mov     ax, 0AE5h ;~ 0396:39AC
cs=0x396;eip=0x0039af; 	X(PUSH(ax));	// 11015 push    ax ;~ 0396:39AF
cs=0x396;eip=0x0039b0; 	R(CALLF(sub_29b46,0));	// 11016 call    sub_29B46 ;~ 0396:39B0
cs=0x396;eip=0x0039b5; 	T(ADD(sp, 4));	// 11017 add     sp, 4 ;~ 0396:39B5
cs=0x396;eip=0x0039b8; 	X(PUSH(word_38a9e));	// 11018 push    word_38A9E ;~ 0396:39B8
cs=0x396;eip=0x0039bc; 	X(PUSH(word_38a9c));	// 11019 push    word_38A9C ;~ 0396:39BC
cs=0x396;eip=0x0039c0; 	T(MOV(ax, 0x0ADA));	// 11020 mov     ax, 0ADAh ;~ 0396:39C0
cs=0x396;eip=0x0039c3; 	X(PUSH(ax));	// 11021 push    ax ;~ 0396:39C3
cs=0x396;eip=0x0039c4; 	R(CALLF(sub_10ee0,0));	// 11022 call    sub_10EE0 ;~ 0396:39C4
cs=0x396;eip=0x0039c9; 	T(ADD(sp, 6));	// 11023 add     sp, 6 ;~ 0396:39C9
cs=0x396;eip=0x0039cc; 	T(MOV(ax, 0x2500));	// 11024 mov     ax, 2500h ;~ 0396:39CC
cs=0x396;eip=0x0039cf; 	X(PUSH(ds));	// 11025 push    ds ;~ 0396:39CF
cs=0x396;eip=0x0039d0; 	X(PUSH(ax));	// 11026 push    ax ;~ 0396:39D0
cs=0x396;eip=0x0039d1; 	X(PUSH(word_38a9e));	// 11027 push    word_38A9E ;~ 0396:39D1
cs=0x396;eip=0x0039d5; 	X(PUSH(word_38a9c));	// 11028 push    word_38A9C ;~ 0396:39D5
cs=0x396;eip=0x0039d9; 	R(CALLF(sub_1ab87,0));	// 11029 call    sub_1AB87 ;~ 0396:39D9
cs=0x396;eip=0x0039de; 	T(ADD(sp, 8));	// 11030 add     sp, 8 ;~ 0396:39DE
cs=0x396;eip=0x0039e1; 	T(SUB(ax, ax));	// 11031 sub     ax, ax ;~ 0396:39E1
cs=0x396;eip=0x0039e3; 	X(PUSH(ax));	// 11032 push    ax ;~ 0396:39E3
cs=0x396;eip=0x0039e4; 	T(MOV(ax, 0x0B6));	// 11033 mov     ax, 0B6h ; '∂' ;~ 0396:39E4
cs=0x396;eip=0x0039e7; 	X(PUSH(ax));	// 11034 push    ax ;~ 0396:39E7
cs=0x396;eip=0x0039e8; 	T(SUB(ax, ax));	// 11035 sub     ax, ax ;~ 0396:39E8
cs=0x396;eip=0x0039ea; 	X(PUSH(ax));	// 11036 push    ax ;~ 0396:39EA
cs=0x396;eip=0x0039eb; 	T(MOV(ax, 0x140));	// 11037 mov     ax, 140h ;~ 0396:39EB
cs=0x396;eip=0x0039ee; 	X(PUSH(ax));	// 11038 push    ax ;~ 0396:39EE
cs=0x396;eip=0x0039ef; 	T(MOV(al, byte_2c94b));	// 11039 mov     al, byte_2C94B ;~ 0396:39EF
cs=0x396;eip=0x0039f2; 	T(SUB(ah, ah));	// 11040 sub     ah, ah ;~ 0396:39F2
cs=0x396;eip=0x0039f4; 	T(MOV(bx, ax));	// 11041 mov     bx, ax ;~ 0396:39F4
cs=0x396;eip=0x0039f6; 	T(SHL(bx, 1));	// 11042 shl     bx, 1 ;~ 0396:39F6
cs=0x396;eip=0x0039f8; 	T(ADD(bx, ax));	// 11043 add     bx, ax ;~ 0396:39F8
cs=0x396;eip=0x0039fa; 	T(SHL(bx, 1));	// 11044 shl     bx, 1 ;~ 0396:39FA
cs=0x396;eip=0x0039fc; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0B16))));	// 11045 push    word ptr [bx+0B16h] ;~ 0396:39FC
cs=0x396;eip=0x003a00; 	T(MOV(ax, 0x2500));	// 11046 mov     ax, 2500h ;~ 0396:3A00
cs=0x396;eip=0x003a03; 	X(PUSH(ax));	// 11047 push    ax ;~ 0396:3A03
cs=0x396;eip=0x003a04; 	X(PUSH(cs));	// 11048 push    cs ;~ 0396:3A04
cs=0x396;eip=0x003a05; 	R(CALL(sub_178ec,0));	// 11049 call    near ptr sub_178EC ;~ 0396:3A05
cs=0x396;eip=0x003a08; 	T(ADD(sp, 0x0C));	// 11050 add     sp, 0Ch ;~ 0396:3A08
cs=0x396;eip=0x003a0b; 	X(MOV(byte_2c925, 0x41));	// 11051 mov     byte_2C925, 41h ; 'A' ;~ 0396:3A0B
cs=0x396;eip=0x003a10; 	X(PUSH(word_38a9e));	// 11052 push    word_38A9E ;~ 0396:3A10
cs=0x396;eip=0x003a14; 	X(PUSH(word_38a9c));	// 11053 push    word_38A9C ;~ 0396:3A14
cs=0x396;eip=0x003a18; 	T(MOV(ax, 0x0ADA));	// 11054 mov     ax, 0ADAh ;~ 0396:3A18
cs=0x396;eip=0x003a1b; 	X(PUSH(ax));	// 11055 push    ax ;~ 0396:3A1B
cs=0x396;eip=0x003a1c; 	R(CALLF(sub_10ee0,0));	// 11056 call    sub_10EE0 ;~ 0396:3A1C
cs=0x396;eip=0x003a21; 	T(ADD(sp, 6));	// 11057 add     sp, 6 ;~ 0396:3A21
cs=0x396;eip=0x003a24; 	T(MOV(ax, 0x2500));	// 11058 mov     ax, 2500h ;~ 0396:3A24
cs=0x396;eip=0x003a27; 	X(PUSH(ds));	// 11059 push    ds ;~ 0396:3A27
cs=0x396;eip=0x003a28; 	X(PUSH(ax));	// 11060 push    ax ;~ 0396:3A28
cs=0x396;eip=0x003a29; 	X(PUSH(word_38a9e));	// 11061 push    word_38A9E ;~ 0396:3A29
cs=0x396;eip=0x003a2d; 	X(PUSH(word_38a9c));	// 11062 push    word_38A9C ;~ 0396:3A2D
cs=0x396;eip=0x003a31; 	R(CALLF(sub_1ab87,0));	// 11063 call    sub_1AB87 ;~ 0396:3A31
cs=0x396;eip=0x003a36; 	T(ADD(sp, 8));	// 11064 add     sp, 8 ;~ 0396:3A36
cs=0x396;eip=0x003a39; 	T(MOV(ax, 1));	// 11065 mov     ax, 1 ;~ 0396:3A39
cs=0x396;eip=0x003a3c; 	X(PUSH(ax));	// 11066 push    ax ;~ 0396:3A3C
cs=0x396;eip=0x003a3d; 	T(MOV(ax, 0x0A3));	// 11067 mov     ax, 0A3h ; '£' ;~ 0396:3A3D
cs=0x396;eip=0x003a40; 	X(PUSH(ax));	// 11068 push    ax ;~ 0396:3A40
cs=0x396;eip=0x003a41; 	T(SUB(ax, ax));	// 11069 sub     ax, ax ;~ 0396:3A41
cs=0x396;eip=0x003a43; 	X(PUSH(ax));	// 11070 push    ax ;~ 0396:3A43
cs=0x396;eip=0x003a44; 	T(MOV(ax, 0x140));	// 11071 mov     ax, 140h ;~ 0396:3A44
cs=0x396;eip=0x003a47; 	X(PUSH(ax));	// 11072 push    ax ;~ 0396:3A47
cs=0x396;eip=0x003a48; 	T(MOV(al, byte_2c94b));	// 11073 mov     al, byte_2C94B ;~ 0396:3A48
cs=0x396;eip=0x003a4b; 	T(SUB(ah, ah));	// 11074 sub     ah, ah ;~ 0396:3A4B
cs=0x396;eip=0x003a4d; 	T(MOV(bx, ax));	// 11075 mov     bx, ax ;~ 0396:3A4D
cs=0x396;eip=0x003a4f; 	T(SHL(bx, 1));	// 11076 shl     bx, 1 ;~ 0396:3A4F
cs=0x396;eip=0x003a51; 	T(ADD(bx, ax));	// 11077 add     bx, ax ;~ 0396:3A51
cs=0x396;eip=0x003a53; 	T(SHL(bx, 1));	// 11078 shl     bx, 1 ;~ 0396:3A53
cs=0x396;eip=0x003a55; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0B14))));	// 11079 push    word ptr [bx+0B14h] ;~ 0396:3A55
cs=0x396;eip=0x003a59; 	T(MOV(ax, 0x2500));	// 11080 mov     ax, 2500h ;~ 0396:3A59
cs=0x396;eip=0x003a5c; 	X(PUSH(ax));	// 11081 push    ax ;~ 0396:3A5C
cs=0x396;eip=0x003a5d; 	X(PUSH(cs));	// 11082 push    cs ;~ 0396:3A5D
cs=0x396;eip=0x003a5e; 	R(CALL(sub_178ec,0));	// 11083 call    near ptr sub_178EC ;~ 0396:3A5E
cs=0x396;eip=0x003a61; 	T(ADD(sp, 0x0C));	// 11084 add     sp, 0Ch ;~ 0396:3A61
cs=0x396;eip=0x003a64; 	T(MOV(ax, 8));	// 11085 mov     ax, 8 ;~ 0396:3A64
cs=0x396;eip=0x003a67; 	X(PUSH(ax));	// 11086 push    ax ;~ 0396:3A67
cs=0x396;eip=0x003a68; 	R(CALLF(sub_27031,0));	// 11087 call    far ptr sub_27031 ;~ 0396:3A68
cs=0x396;eip=0x003a6d; 	T(ADD(sp, 2));	// 11088 add     sp, 2 ;~ 0396:3A6D
cs=0x396;eip=0x003a70; 	T(MOV(ax, 0x0B6));	// 11089 mov     ax, 0B6h ; '∂' ;~ 0396:3A70
cs=0x396;eip=0x003a73; 	X(PUSH(ax));	// 11090 push    ax ;~ 0396:3A73
cs=0x396;eip=0x003a74; 	T(MOV(ax, 0x71));	// 11091 mov     ax, 71h ; 'q' ;~ 0396:3A74
cs=0x396;eip=0x003a77; 	X(PUSH(ax));	// 11092 push    ax ;~ 0396:3A77
cs=0x396;eip=0x003a78; 	T(MOV(ax, 0x13F));	// 11093 mov     ax, 13Fh ;~ 0396:3A78
cs=0x396;eip=0x003a7b; 	X(PUSH(ax));	// 11094 push    ax ;~ 0396:3A7B
cs=0x396;eip=0x003a7c; 	T(SUB(ax, ax));	// 11095 sub     ax, ax ;~ 0396:3A7C
cs=0x396;eip=0x003a7e; 	X(PUSH(ax));	// 11096 push    ax ;~ 0396:3A7E
cs=0x396;eip=0x003a7f; 	X(PUSH(cs));	// 11097 push    cs ;~ 0396:3A7F
cs=0x396;eip=0x003a80; 	R(CALL(sub_137a4,0));	// 11098 call    near ptr sub_137A4 ;~ 0396:3A80
cs=0x396;eip=0x003a83; 	T(ADD(sp, 8));	// 11099 add     sp, 8 ;~ 0396:3A83
cs=0x396;eip=0x003a86; 	T(MOV(ax, 8));	// 11100 mov     ax, 8 ;~ 0396:3A86
cs=0x396;eip=0x003a89; 	X(PUSH(ax));	// 11101 push    ax ;~ 0396:3A89
cs=0x396;eip=0x003a8a; 	R(CALLF(sub_27031,0));	// 11102 call    far ptr sub_27031 ;~ 0396:3A8A
cs=0x396;eip=0x003a8f; 	T(ADD(sp, 2));	// 11103 add     sp, 2 ;~ 0396:3A8F
cs=0x396;eip=0x003a92; 	T(MOV(ax, 0x0C7));	// 11104 mov     ax, 0C7h ; '«' ;~ 0396:3A92
cs=0x396;eip=0x003a95; 	X(PUSH(ax));	// 11105 push    ax ;~ 0396:3A95
cs=0x396;eip=0x003a96; 	T(MOV(ax, 0x0BC));	// 11106 mov     ax, 0BCh ; 'º' ;~ 0396:3A96
cs=0x396;eip=0x003a99; 	X(PUSH(ax));	// 11107 push    ax ;~ 0396:3A99
cs=0x396;eip=0x003a9a; 	T(MOV(ax, 0x13F));	// 11108 mov     ax, 13Fh ;~ 0396:3A9A
cs=0x396;eip=0x003a9d; 	X(PUSH(ax));	// 11109 push    ax ;~ 0396:3A9D
cs=0x396;eip=0x003a9e; 	T(SUB(ax, ax));	// 11110 sub     ax, ax ;~ 0396:3A9E
cs=0x396;eip=0x003aa0; 	X(PUSH(ax));	// 11111 push    ax ;~ 0396:3AA0
cs=0x396;eip=0x003aa1; 	R(CALLF(sub_2785b,0));	// 11112 call    far ptr sub_2785B ;~ 0396:3AA1
cs=0x396;eip=0x003aa6; 	T(ADD(sp, 8));	// 11113 add     sp, 8 ;~ 0396:3AA6
cs=0x396;eip=0x003aa9; 	T(MOV(ax, 7));	// 11114 mov     ax, 7 ;~ 0396:3AA9
cs=0x396;eip=0x003aac; 	X(PUSH(ax));	// 11115 push    ax ;~ 0396:3AAC
cs=0x396;eip=0x003aad; 	R(CALLF(sub_27031,0));	// 11116 call    far ptr sub_27031 ;~ 0396:3AAD
cs=0x396;eip=0x003ab2; 	T(ADD(sp, 2));	// 11117 add     sp, 2 ;~ 0396:3AB2
cs=0x396;eip=0x003ab5; 	T(MOV(ax, 0x0C6));	// 11118 mov     ax, 0C6h ; '∆' ;~ 0396:3AB5
cs=0x396;eip=0x003ab8; 	X(PUSH(ax));	// 11119 push    ax ;~ 0396:3AB8
cs=0x396;eip=0x003ab9; 	T(MOV(ax, 0x0BD));	// 11120 mov     ax, 0BDh ; 'Ω' ;~ 0396:3AB9
cs=0x396;eip=0x003abc; 	X(PUSH(ax));	// 11121 push    ax ;~ 0396:3ABC
cs=0x396;eip=0x003abd; 	T(MOV(ax, 0x13E));	// 11122 mov     ax, 13Eh ;~ 0396:3ABD
cs=0x396;eip=0x003ac0; 	X(PUSH(ax));	// 11123 push    ax ;~ 0396:3AC0
cs=0x396;eip=0x003ac1; 	T(MOV(ax, 1));	// 11124 mov     ax, 1 ;~ 0396:3AC1
cs=0x396;eip=0x003ac4; 	X(PUSH(ax));	// 11125 push    ax ;~ 0396:3AC4
cs=0x396;eip=0x003ac5; 	R(CALLF(sub_2785b,0));	// 11126 call    far ptr sub_2785B ;~ 0396:3AC5
cs=0x396;eip=0x003aca; 	T(ADD(sp, 8));	// 11127 add     sp, 8 ;~ 0396:3ACA
cs=0x396;eip=0x003acd; 	T(MOV(ax, 0x2500));	// 11128 mov     ax, 2500h ;~ 0396:3ACD
cs=0x396;eip=0x003ad0; 	X(PUSH(ds));	// 11129 push    ds ;~ 0396:3AD0
cs=0x396;eip=0x003ad1; 	X(PUSH(ax));	// 11130 push    ax ;~ 0396:3AD1
cs=0x396;eip=0x003ad2; 	X(PUSH(word_3a8b6));	// 11131 push    word_3A8B6 ;~ 0396:3AD2
cs=0x396;eip=0x003ad6; 	X(PUSH(word_3a8b4));	// 11132 push    word_3A8B4 ;~ 0396:3AD6
cs=0x396;eip=0x003ada; 	R(CALLF(sub_1ab87,0));	// 11133 call    sub_1AB87 ;~ 0396:3ADA
cs=0x396;eip=0x003adf; 	T(ADD(sp, 8));	// 11134 add     sp, 8 ;~ 0396:3ADF
cs=0x396;eip=0x003ae2; 	T(SUB(ax, ax));	// 11135 sub     ax, ax ;~ 0396:3AE2
cs=0x396;eip=0x003ae4; 	X(PUSH(ax));	// 11136 push    ax ;~ 0396:3AE4
cs=0x396;eip=0x003ae5; 	T(MOV(ax, 0x0C6));	// 11137 mov     ax, 0C6h ; '∆' ;~ 0396:3AE5
cs=0x396;eip=0x003ae8; 	X(PUSH(ax));	// 11138 push    ax ;~ 0396:3AE8
cs=0x396;eip=0x003ae9; 	T(MOV(ax, 0x70));	// 11139 mov     ax, 70h ; 'p' ;~ 0396:3AE9
cs=0x396;eip=0x003aec; 	X(PUSH(ax));	// 11140 push    ax ;~ 0396:3AEC
cs=0x396;eip=0x003aed; 	X(PUSH(ax));	// 11141 push    ax ;~ 0396:3AED
cs=0x396;eip=0x003aee; 	T(MOV(ax, 0x11D));	// 11142 mov     ax, 11Dh ;~ 0396:3AEE
cs=0x396;eip=0x003af1; 	X(PUSH(ax));	// 11143 push    ax ;~ 0396:3AF1
cs=0x396;eip=0x003af2; 	T(MOV(ax, 0x2500));	// 11144 mov     ax, 2500h ;~ 0396:3AF2
cs=0x396;eip=0x003af5; 	X(PUSH(ax));	// 11145 push    ax ;~ 0396:3AF5
cs=0x396;eip=0x003af6; 	X(PUSH(cs));	// 11146 push    cs ;~ 0396:3AF6
cs=0x396;eip=0x003af7; 	R(CALL(sub_178ec,0));	// 11147 call    near ptr sub_178EC ;~ 0396:3AF7
cs=0x396;eip=0x003afa; 	T(ADD(sp, 0x0C));	// 11148 add     sp, 0Ch ;~ 0396:3AFA
cs=0x396;eip=0x003afd; 	T(SUB(ax, ax));	// 11149 sub     ax, ax ;~ 0396:3AFD
cs=0x396;eip=0x003aff; 	X(MOV(word_2beda, ax));	// 11150 mov     word_2BEDA, ax ;~ 0396:3AFF
cs=0x396;eip=0x003b02; 	X(PUSH(ax));	// 11151 push    ax ;~ 0396:3B02
cs=0x396;eip=0x003b03; 	R(CALLF(sub_2714e,0));	// 11152 call    far ptr sub_2714E ;~ 0396:3B03
cs=0x396;eip=0x003b08; 	T(ADD(sp, 2));	// 11153 add     sp, 2 ;~ 0396:3B08
cs=0x396;eip=0x003b0b; 	X(PUSH(cs));	// 11154 push    cs ;~ 0396:3B0B
cs=0x396;eip=0x003b0c; 	R(CALL(sub_13b96,0));	// 11155 call    near ptr sub_13B96 ;~ 0396:3B0C
cs=0x396;eip=0x003b0f; 	T(MOV(ax, 0x0C7));	// 11156 mov     ax, 0C7h ; '«' ;~ 0396:3B0F
cs=0x396;eip=0x003b12; 	X(PUSH(ax));	// 11157 push    ax ;~ 0396:3B12
cs=0x396;eip=0x003b13; 	T(SUB(ax, ax));	// 11158 sub     ax, ax ;~ 0396:3B13
cs=0x396;eip=0x003b15; 	X(PUSH(ax));	// 11159 push    ax ;~ 0396:3B15
cs=0x396;eip=0x003b16; 	T(MOV(ax, 0x13F));	// 11160 mov     ax, 13Fh ;~ 0396:3B16
cs=0x396;eip=0x003b19; 	X(PUSH(ax));	// 11161 push    ax ;~ 0396:3B19
cs=0x396;eip=0x003b1a; 	T(SUB(ax, ax));	// 11162 sub     ax, ax ;~ 0396:3B1A
cs=0x396;eip=0x003b1c; 	X(PUSH(ax));	// 11163 push    ax ;~ 0396:3B1C
cs=0x396;eip=0x003b1d; 	R(CALLF(sub_27eb6,0));	// 11164 call    far ptr sub_27EB6 ;~ 0396:3B1D
cs=0x396;eip=0x003b22; 	T(ADD(sp, 8));	// 11165 add     sp, 8 ;~ 0396:3B22
cs=0x396;eip=0x003b25; 	X(PUSH(cs));	// 11166 push    cs ;~ 0396:3B25
cs=0x396;eip=0x003b26; 	R(CALL(sub_13ba4,0));	// 11167 call    near ptr sub_13BA4 ;~ 0396:3B26
cs=0x396;eip=0x003b29; 	T(MOV(sp, bp));	// 11168 mov     sp, bp ;~ 0396:3B29
cs=0x396;eip=0x003b2b; 	X(POP(bp));	// 11169 pop     bp ;~ 0396:3B2B
cs=0x396;eip=0x003b2c; 	R(RETF(0));	// 11170 retf ;~ 0396:3B2C
sub_15a6e:
	// 11180 
#undef var_c
#define var_c -0x0C
	// 11182 var_C           = word ptr -0Ch ;~ 0396:3B2E
#undef var_a
#define var_a -0x0A
	// 11183 var_A           = word ptr -0Ah ;~ 0396:3B2E
#undef var_8
#define var_8 -8
	// 11184 var_8           = word ptr -8 ;~ 0396:3B2E
#undef var_6
#define var_6 -6
	// 11185 var_6           = word ptr -6 ;~ 0396:3B2E
#undef var_4
#define var_4 -4
	// 11186 var_4           = word ptr -4 ;~ 0396:3B2E
#undef var_2
#define var_2 -2
	// 11187 var_2           = word ptr -2 ;~ 0396:3B2E
ret_396_3b2e:
	// 4980 
cs=0x396;eip=0x003b2e; 	X(PUSH(bp));	// 11189 push    bp ;~ 0396:3B2E
cs=0x396;eip=0x003b2f; 	T(MOV(bp, sp));	// 11190 mov     bp, sp ;~ 0396:3B2F
cs=0x396;eip=0x003b31; 	T(SUB(sp, 0x0C));	// 11191 sub     sp, 0Ch ;~ 0396:3B31
cs=0x396;eip=0x003b34; 	X(MOV(byte_34f30, 0));	// 11192 mov     byte_34F30, 0 ;~ 0396:3B34
cs=0x396;eip=0x003b39; 	T(MOV(al, byte_2c948));	// 11193 mov     al, byte_2C948 ;~ 0396:3B39
cs=0x396;eip=0x003b3c; 	T(SUB(ah, ah));	// 11194 sub     ah, ah ;~ 0396:3B3C
cs=0x396;eip=0x003b3e; 	T(MOV(cl, byte_2c949));	// 11195 mov     cl, byte_2C949 ;~ 0396:3B3E
cs=0x396;eip=0x003b42; 	T(SUB(ch, ch));	// 11196 sub     ch, ch ;~ 0396:3B42
cs=0x396;eip=0x003b44; 	T(SUB(ax, cx));	// 11197 sub     ax, cx ;~ 0396:3B44
cs=0x396;eip=0x003b46; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 11198 mov     [bp+var_A], ax ;~ 0396:3B46
cs=0x396;eip=0x003b49; 	T(MOV(ax, word_2c944));	// 11199 mov     ax, word_2C944 ;~ 0396:3B49
cs=0x396;eip=0x003b4c; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 11200 mov     [bp+var_C], ax ;~ 0396:3B4C
cs=0x396;eip=0x003b4f; 	T(MOV(ax, 0x0FF));	// 11201 mov     ax, 0FFh ;~ 0396:3B4F
cs=0x396;eip=0x003b52; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 11202 mov     [bp+var_2], ax ;~ 0396:3B52
cs=0x396;eip=0x003b55; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 11203 mov     [bp+var_4], ax ;~ 0396:3B55
cs=0x396;eip=0x003b58; 	T(MOV(ax, 0x1092));	// 11204 mov     ax, 1092h ;~ 0396:3B58
cs=0x396;eip=0x003b5b; 	X(PUSH(ax));	// 11205 push    ax ;~ 0396:3B5B
cs=0x396;eip=0x003b5c; 	T(MOV(ax, 0x0A8C));	// 11206 mov     ax, 0A8Ch ;~ 0396:3B5C
cs=0x396;eip=0x003b5f; 	X(PUSH(ax));	// 11207 push    ax ;~ 0396:3B5F
cs=0x396;eip=0x003b60; 	R(CALLF(sub_29b46,0));	// 11208 call    sub_29B46 ;~ 0396:3B60
cs=0x396;eip=0x003b65; 	T(ADD(sp, 4));	// 11209 add     sp, 4 ;~ 0396:3B65
cs=0x396;eip=0x003b68; 	T(MOV(ax, 0x0A8A));	// 11210 mov     ax, 0A8Ah ;~ 0396:3B68
cs=0x396;eip=0x003b6b; 	X(PUSH(ax));	// 11211 push    ax ;~ 0396:3B6B
cs=0x396;eip=0x003b6c; 	R(CALLF(sub_10d62,0));	// 11212 call    sub_10D62 ;~ 0396:3B6C
cs=0x396;eip=0x003b71; 	T(ADD(sp, 2));	// 11213 add     sp, 2 ;~ 0396:3B71
cs=0x396;eip=0x003b74; 	T(MOV(ax, 1));	// 11214 mov     ax, 1 ;~ 0396:3B74
cs=0x396;eip=0x003b77; 	X(MOV(word_2beda, ax));	// 11215 mov     word_2BEDA, ax ;~ 0396:3B77
cs=0x396;eip=0x003b7a; 	X(PUSH(ax));	// 11216 push    ax ;~ 0396:3B7A
cs=0x396;eip=0x003b7b; 	R(CALLF(sub_2714e,0));	// 11217 call    far ptr sub_2714E ;~ 0396:3B7B
cs=0x396;eip=0x003b80; 	T(ADD(sp, 2));	// 11218 add     sp, 2 ;~ 0396:3B80
cs=0x396;eip=0x003b83; 	T(MOV(ax, 0x2500));	// 11219 mov     ax, 2500h ;~ 0396:3B83
cs=0x396;eip=0x003b86; 	X(PUSH(ds));	// 11220 push    ds ;~ 0396:3B86
cs=0x396;eip=0x003b87; 	X(PUSH(ax));	// 11221 push    ax ;~ 0396:3B87
cs=0x396;eip=0x003b88; 	X(PUSH(word_3a62c));	// 11222 push    word_3A62C ;~ 0396:3B88
cs=0x396;eip=0x003b8c; 	X(PUSH(word_3a62a));	// 11223 push    word_3A62A ;~ 0396:3B8C
cs=0x396;eip=0x003b90; 	R(CALLF(sub_1ab87,0));	// 11224 call    sub_1AB87 ;~ 0396:3B90
cs=0x396;eip=0x003b95; 	T(ADD(sp, 8));	// 11225 add     sp, 8 ;~ 0396:3B95
cs=0x396;eip=0x003b98; 	T(SUB(ax, ax));	// 11226 sub     ax, ax ;~ 0396:3B98
cs=0x396;eip=0x003b9a; 	X(PUSH(ax));	// 11227 push    ax ;~ 0396:3B9A
cs=0x396;eip=0x003b9b; 	T(MOV(ax, 0x0C7));	// 11228 mov     ax, 0C7h ; '«' ;~ 0396:3B9B
cs=0x396;eip=0x003b9e; 	X(PUSH(ax));	// 11229 push    ax ;~ 0396:3B9E
cs=0x396;eip=0x003b9f; 	T(SUB(ax, ax));	// 11230 sub     ax, ax ;~ 0396:3B9F
cs=0x396;eip=0x003ba1; 	X(PUSH(ax));	// 11231 push    ax ;~ 0396:3BA1
cs=0x396;eip=0x003ba2; 	T(MOV(ax, 0x140));	// 11232 mov     ax, 140h ;~ 0396:3BA2
cs=0x396;eip=0x003ba5; 	X(PUSH(ax));	// 11233 push    ax ;~ 0396:3BA5
cs=0x396;eip=0x003ba6; 	T(MOV(ax, 0x2BF9));	// 11234 mov     ax, 2BF9h ;~ 0396:3BA6
cs=0x396;eip=0x003ba9; 	X(PUSH(ax));	// 11235 push    ax ;~ 0396:3BA9
cs=0x396;eip=0x003baa; 	T(MOV(ax, 0x2500));	// 11236 mov     ax, 2500h ;~ 0396:3BAA
cs=0x396;eip=0x003bad; 	X(PUSH(ax));	// 11237 push    ax ;~ 0396:3BAD
cs=0x396;eip=0x003bae; 	X(PUSH(cs));	// 11238 push    cs ;~ 0396:3BAE
cs=0x396;eip=0x003baf; 	R(CALL(sub_178ec,0));	// 11239 call    near ptr sub_178EC ;~ 0396:3BAF
cs=0x396;eip=0x003bb2; 	T(ADD(sp, 0x0C));	// 11240 add     sp, 0Ch ;~ 0396:3BB2
cs=0x396;eip=0x003bb5; 	T(MOV(ax, 0x2500));	// 11241 mov     ax, 2500h ;~ 0396:3BB5
cs=0x396;eip=0x003bb8; 	X(PUSH(ds));	// 11242 push    ds ;~ 0396:3BB8
cs=0x396;eip=0x003bb9; 	X(PUSH(ax));	// 11243 push    ax ;~ 0396:3BB9
cs=0x396;eip=0x003bba; 	X(PUSH(word_3a626));	// 11244 push    word_3A626 ;~ 0396:3BBA
cs=0x396;eip=0x003bbe; 	X(PUSH(word_3a624));	// 11245 push    word_3A624 ;~ 0396:3BBE
cs=0x396;eip=0x003bc2; 	R(CALLF(sub_1ab87,0));	// 11246 call    sub_1AB87 ;~ 0396:3BC2
cs=0x396;eip=0x003bc7; 	T(ADD(sp, 8));	// 11247 add     sp, 8 ;~ 0396:3BC7
cs=0x396;eip=0x003bca; 	T(MOV(ax, 1));	// 11248 mov     ax, 1 ;~ 0396:3BCA
cs=0x396;eip=0x003bcd; 	X(PUSH(ax));	// 11249 push    ax ;~ 0396:3BCD
cs=0x396;eip=0x003bce; 	T(MOV(ax, 0x86));	// 11250 mov     ax, 86h ; 'Ü' ;~ 0396:3BCE
cs=0x396;eip=0x003bd1; 	X(PUSH(ax));	// 11251 push    ax ;~ 0396:3BD1
cs=0x396;eip=0x003bd2; 	T(SUB(ax, ax));	// 11252 sub     ax, ax ;~ 0396:3BD2
cs=0x396;eip=0x003bd4; 	X(PUSH(ax));	// 11253 push    ax ;~ 0396:3BD4
cs=0x396;eip=0x003bd5; 	T(MOV(ax, 0x140));	// 11254 mov     ax, 140h ;~ 0396:3BD5
cs=0x396;eip=0x003bd8; 	X(PUSH(ax));	// 11255 push    ax ;~ 0396:3BD8
cs=0x396;eip=0x003bd9; 	T(MOV(ax, 0x27BA));	// 11256 mov     ax, 27BAh ;~ 0396:3BD9
cs=0x396;eip=0x003bdc; 	X(PUSH(ax));	// 11257 push    ax ;~ 0396:3BDC
cs=0x396;eip=0x003bdd; 	T(MOV(ax, 0x2500));	// 11258 mov     ax, 2500h ;~ 0396:3BDD
cs=0x396;eip=0x003be0; 	X(PUSH(ax));	// 11259 push    ax ;~ 0396:3BE0
cs=0x396;eip=0x003be1; 	X(PUSH(cs));	// 11260 push    cs ;~ 0396:3BE1
cs=0x396;eip=0x003be2; 	R(CALL(sub_178ec,0));	// 11261 call    near ptr sub_178EC ;~ 0396:3BE2
cs=0x396;eip=0x003be5; 	T(ADD(sp, 0x0C));	// 11262 add     sp, 0Ch ;~ 0396:3BE5
cs=0x396;eip=0x003be8; 	T(MOV(ax, 0x2500));	// 11263 mov     ax, 2500h ;~ 0396:3BE8
cs=0x396;eip=0x003beb; 	X(PUSH(ds));	// 11264 push    ds ;~ 0396:3BEB
cs=0x396;eip=0x003bec; 	X(PUSH(ax));	// 11265 push    ax ;~ 0396:3BEC
cs=0x396;eip=0x003bed; 	X(PUSH(word_3a61a));	// 11266 push    word_3A61A ;~ 0396:3BED
cs=0x396;eip=0x003bf1; 	X(PUSH(word_3a618));	// 11267 push    word_3A618 ;~ 0396:3BF1
cs=0x396;eip=0x003bf5; 	R(CALLF(sub_1ab87,0));	// 11268 call    sub_1AB87 ;~ 0396:3BF5
cs=0x396;eip=0x003bfa; 	T(ADD(sp, 8));	// 11269 add     sp, 8 ;~ 0396:3BFA
cs=0x396;eip=0x003bfd; 	T(MOV(ax, 1));	// 11270 mov     ax, 1 ;~ 0396:3BFD
cs=0x396;eip=0x003c00; 	X(PUSH(ax));	// 11271 push    ax ;~ 0396:3C00
cs=0x396;eip=0x003c01; 	T(MOV(ax, 0x45));	// 11272 mov     ax, 45h ; 'E' ;~ 0396:3C01
cs=0x396;eip=0x003c04; 	X(PUSH(ax));	// 11273 push    ax ;~ 0396:3C04
cs=0x396;eip=0x003c05; 	T(SUB(ax, ax));	// 11274 sub     ax, ax ;~ 0396:3C05
cs=0x396;eip=0x003c07; 	X(PUSH(ax));	// 11275 push    ax ;~ 0396:3C07
cs=0x396;eip=0x003c08; 	T(MOV(ax, 0x140));	// 11276 mov     ax, 140h ;~ 0396:3C08
cs=0x396;eip=0x003c0b; 	X(PUSH(ax));	// 11277 push    ax ;~ 0396:3C0B
cs=0x396;eip=0x003c0c; 	T(MOV(ax, 0x2E17));	// 11278 mov     ax, 2E17h ;~ 0396:3C0C
cs=0x396;eip=0x003c0f; 	X(PUSH(ax));	// 11279 push    ax ;~ 0396:3C0F
cs=0x396;eip=0x003c10; 	T(MOV(ax, 0x2500));	// 11280 mov     ax, 2500h ;~ 0396:3C10
cs=0x396;eip=0x003c13; 	X(PUSH(ax));	// 11281 push    ax ;~ 0396:3C13
cs=0x396;eip=0x003c14; 	X(PUSH(cs));	// 11282 push    cs ;~ 0396:3C14
cs=0x396;eip=0x003c15; 	R(CALL(sub_178ec,0));	// 11283 call    near ptr sub_178EC ;~ 0396:3C15
cs=0x396;eip=0x003c18; 	T(ADD(sp, 0x0C));	// 11284 add     sp, 0Ch ;~ 0396:3C18
cs=0x396;eip=0x003c1b; 	T(CMP(word_3a178, 0x13));	// 11285 cmp     word_3A178, 13h ;~ 0396:3C1B
cs=0x396;eip=0x003c20; 	R(JNZ(loc_15b68));	// 11286 jnz     short loc_15B68 ;~ 0396:3C20
cs=0x396;eip=0x003c22; 	T(MOV(ax, 0x13));	// 11287 mov     ax, 13h ;~ 0396:3C22
cs=0x396;eip=0x003c25; 	R(JMP(loc_15b6a));	// 11288 jmp     short loc_15B6A ;~ 0396:3C25
loc_15b68:
	// 4981 
cs=0x396;eip=0x003c28; 	T(SUB(ax, ax));	// 11293 sub     ax, ax ;~ 0396:3C28
loc_15b6a:
	// 4982 
cs=0x396;eip=0x003c2a; 	X(PUSH(ax));	// 11296 push    ax ;~ 0396:3C2A
cs=0x396;eip=0x003c2b; 	R(CALLF(sub_27031,0));	// 11297 call    far ptr sub_27031 ;~ 0396:3C2B
cs=0x396;eip=0x003c30; 	T(ADD(sp, 2));	// 11298 add     sp, 2 ;~ 0396:3C30
cs=0x396;eip=0x003c33; 	T(MOV(ax, 0x0D));	// 11299 mov     ax, 0Dh ;~ 0396:3C33
cs=0x396;eip=0x003c36; 	X(PUSH(ax));	// 11300 push    ax ;~ 0396:3C36
cs=0x396;eip=0x003c37; 	T(SUB(ax, ax));	// 11301 sub     ax, ax ;~ 0396:3C37
cs=0x396;eip=0x003c39; 	X(PUSH(ax));	// 11302 push    ax ;~ 0396:3C39
cs=0x396;eip=0x003c3a; 	T(MOV(ax, 0x13F));	// 11303 mov     ax, 13Fh ;~ 0396:3C3A
cs=0x396;eip=0x003c3d; 	X(PUSH(ax));	// 11304 push    ax ;~ 0396:3C3D
cs=0x396;eip=0x003c3e; 	T(SUB(ax, ax));	// 11305 sub     ax, ax ;~ 0396:3C3E
cs=0x396;eip=0x003c40; 	X(PUSH(ax));	// 11306 push    ax ;~ 0396:3C40
cs=0x396;eip=0x003c41; 	R(CALLF(sub_2785b,0));	// 11307 call    far ptr sub_2785B ;~ 0396:3C41
cs=0x396;eip=0x003c46; 	T(ADD(sp, 8));	// 11308 add     sp, 8 ;~ 0396:3C46
cs=0x396;eip=0x003c49; 	T(MOV(ax, 8));	// 11309 mov     ax, 8 ;~ 0396:3C49
cs=0x396;eip=0x003c4c; 	X(PUSH(ax));	// 11310 push    ax ;~ 0396:3C4C
cs=0x396;eip=0x003c4d; 	R(CALLF(sub_27031,0));	// 11311 call    far ptr sub_27031 ;~ 0396:3C4D
cs=0x396;eip=0x003c52; 	T(ADD(sp, 2));	// 11312 add     sp, 2 ;~ 0396:3C52
cs=0x396;eip=0x003c55; 	T(MOV(ax, 0x0C));	// 11313 mov     ax, 0Ch ;~ 0396:3C55
cs=0x396;eip=0x003c58; 	X(PUSH(ax));	// 11314 push    ax ;~ 0396:3C58
cs=0x396;eip=0x003c59; 	T(MOV(ax, 1));	// 11315 mov     ax, 1 ;~ 0396:3C59
cs=0x396;eip=0x003c5c; 	X(PUSH(ax));	// 11316 push    ax ;~ 0396:3C5C
cs=0x396;eip=0x003c5d; 	T(MOV(ax, 0x13E));	// 11317 mov     ax, 13Eh ;~ 0396:3C5D
cs=0x396;eip=0x003c60; 	X(PUSH(ax));	// 11318 push    ax ;~ 0396:3C60
cs=0x396;eip=0x003c61; 	T(MOV(ax, 1));	// 11319 mov     ax, 1 ;~ 0396:3C61
cs=0x396;eip=0x003c64; 	X(PUSH(ax));	// 11320 push    ax ;~ 0396:3C64
cs=0x396;eip=0x003c65; 	R(CALLF(sub_2785b,0));	// 11321 call    far ptr sub_2785B ;~ 0396:3C65
cs=0x396;eip=0x003c6a; 	T(ADD(sp, 8));	// 11322 add     sp, 8 ;~ 0396:3C6A
cs=0x396;eip=0x003c6d; 	T(MOV(ax, 7));	// 11323 mov     ax, 7 ;~ 0396:3C6D
cs=0x396;eip=0x003c70; 	X(PUSH(ax));	// 11324 push    ax ;~ 0396:3C70
cs=0x396;eip=0x003c71; 	R(CALLF(sub_27031,0));	// 11325 call    far ptr sub_27031 ;~ 0396:3C71
cs=0x396;eip=0x003c76; 	T(ADD(sp, 2));	// 11326 add     sp, 2 ;~ 0396:3C76
cs=0x396;eip=0x003c79; 	T(MOV(ax, 0x0B));	// 11327 mov     ax, 0Bh ;~ 0396:3C79
cs=0x396;eip=0x003c7c; 	X(PUSH(ax));	// 11328 push    ax ;~ 0396:3C7C
cs=0x396;eip=0x003c7d; 	T(MOV(ax, 2));	// 11329 mov     ax, 2 ;~ 0396:3C7D
cs=0x396;eip=0x003c80; 	X(PUSH(ax));	// 11330 push    ax ;~ 0396:3C80
cs=0x396;eip=0x003c81; 	T(MOV(ax, 0x13D));	// 11331 mov     ax, 13Dh ;~ 0396:3C81
cs=0x396;eip=0x003c84; 	X(PUSH(ax));	// 11332 push    ax ;~ 0396:3C84
cs=0x396;eip=0x003c85; 	T(MOV(ax, 2));	// 11333 mov     ax, 2 ;~ 0396:3C85
cs=0x396;eip=0x003c88; 	X(PUSH(ax));	// 11334 push    ax ;~ 0396:3C88
cs=0x396;eip=0x003c89; 	R(CALLF(sub_2785b,0));	// 11335 call    far ptr sub_2785B ;~ 0396:3C89
cs=0x396;eip=0x003c8e; 	T(ADD(sp, 8));	// 11336 add     sp, 8 ;~ 0396:3C8E
cs=0x396;eip=0x003c91; 	T(SUB(ax, ax));	// 11337 sub     ax, ax ;~ 0396:3C91
cs=0x396;eip=0x003c93; 	X(MOV(word_2beda, ax));	// 11338 mov     word_2BEDA, ax ;~ 0396:3C93
cs=0x396;eip=0x003c96; 	X(PUSH(ax));	// 11339 push    ax ;~ 0396:3C96
cs=0x396;eip=0x003c97; 	R(CALLF(sub_2714e,0));	// 11340 call    far ptr sub_2714E ;~ 0396:3C97
cs=0x396;eip=0x003c9c; 	T(ADD(sp, 2));	// 11341 add     sp, 2 ;~ 0396:3C9C
cs=0x396;eip=0x003c9f; 	X(PUSH(cs));	// 11342 push    cs ;~ 0396:3C9F
cs=0x396;eip=0x003ca0; 	R(CALL(sub_13b22,0));	// 11343 call    near ptr sub_13B22 ;~ 0396:3CA0
cs=0x396;eip=0x003ca3; 	T(MOV(ax, 7));	// 11344 mov     ax, 7 ;~ 0396:3CA3
cs=0x396;eip=0x003ca6; 	X(PUSH(ax));	// 11345 push    ax ;~ 0396:3CA6
cs=0x396;eip=0x003ca7; 	T(SUB(ax, ax));	// 11346 sub     ax, ax ;~ 0396:3CA7
cs=0x396;eip=0x003ca9; 	X(PUSH(ax));	// 11347 push    ax ;~ 0396:3CA9
cs=0x396;eip=0x003caa; 	R(CALLF(sub_1c8f3,0));	// 11348 call    sub_1C8F3 ;~ 0396:3CAA
cs=0x396;eip=0x003caf; 	T(ADD(sp, 4));	// 11349 add     sp, 4 ;~ 0396:3CAF
cs=0x396;eip=0x003cb2; 	T(MOV(ax, 1));	// 11350 mov     ax, 1 ;~ 0396:3CB2
cs=0x396;eip=0x003cb5; 	X(PUSH(ax));	// 11351 push    ax ;~ 0396:3CB5
cs=0x396;eip=0x003cb6; 	T(MOV(ax, 3));	// 11352 mov     ax, 3 ;~ 0396:3CB6
cs=0x396;eip=0x003cb9; 	X(PUSH(ax));	// 11353 push    ax ;~ 0396:3CB9
cs=0x396;eip=0x003cba; 	R(CALLF(sub_1c92b,0));	// 11354 call    sub_1C92B ;~ 0396:3CBA
cs=0x396;eip=0x003cbf; 	T(ADD(sp, 4));	// 11355 add     sp, 4 ;~ 0396:3CBF
cs=0x396;eip=0x003cc2; 	T(SUB(ax, ax));	// 11356 sub     ax, ax ;~ 0396:3CC2
cs=0x396;eip=0x003cc4; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 11357 mov     [bp+var_6], ax ;~ 0396:3CC4
cs=0x396;eip=0x003cc7; 	X(PUSH(ax));	// 11358 push    ax ;~ 0396:3CC7
cs=0x396;eip=0x003cc8; 	T(MOV(ax, 0x1E25));	// 11359 mov     ax, 1E25h ;~ 0396:3CC8
cs=0x396;eip=0x003ccb; 	X(PUSH(ax));	// 11360 push    ax ;~ 0396:3CCB
cs=0x396;eip=0x003ccc; 	X(PUSH(cs));	// 11361 push    cs ;~ 0396:3CCC
cs=0x396;eip=0x003ccd; 	R(CALL(sub_13a16,0));	// 11362 call    near ptr sub_13A16 ;~ 0396:3CCD
cs=0x396;eip=0x003cd0; 	T(ADD(sp, 4));	// 11363 add     sp, 4 ;~ 0396:3CD0
cs=0x396;eip=0x003cd3; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 11364 mov     [bp+var_6], ax ;~ 0396:3CD3
cs=0x396;eip=0x003cd6; 	T(SUB(al, al));	// 11365 sub     al, al ;~ 0396:3CD6
cs=0x396;eip=0x003cd8; 	X(MOV(byte_34f9b, al));	// 11366 mov     byte_34F9B, al ;~ 0396:3CD8
cs=0x396;eip=0x003cdb; 	T(SUB(ah, ah));	// 11367 sub     ah, ah ;~ 0396:3CDB
cs=0x396;eip=0x003cdd; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 11368 mov     [bp+var_6], ax ;~ 0396:3CDD
cs=0x396;eip=0x003ce0; 	R(JMP(loc_15d09));	// 11369 jmp     loc_15D09 ;~ 0396:3CE0
loc_15c24:
	// 4983 
cs=0x396;eip=0x003ce4; 	T(MOV(ax, 2));	// 11374 mov     ax, 2 ;~ 0396:3CE4
cs=0x396;eip=0x003ce7; 	X(PUSH(ax));	// 11375 push    ax ;~ 0396:3CE7
cs=0x396;eip=0x003ce8; 	R(CALLF(sub_26ffb,0));	// 11376 call    sub_26FFB ;~ 0396:3CE8
cs=0x396;eip=0x003ced; 	T(ADD(sp, 2));	// 11377 add     sp, 2 ;~ 0396:3CED
cs=0x396;eip=0x003cf0; 	T(ax = bp+var_8);	// 11378 lea     ax, [bp+var_8] ;~ 0396:3CF0
cs=0x396;eip=0x003cf3; 	X(PUSH(ax));	// 11379 push    ax ;~ 0396:3CF3
cs=0x396;eip=0x003cf4; 	R(CALLF(sub_10f80,0));	// 11380 call    sub_10F80 ;~ 0396:3CF4
cs=0x396;eip=0x003cf9; 	T(ADD(sp, 2));	// 11381 add     sp, 2 ;~ 0396:3CF9
cs=0x396;eip=0x003cfc; 	T(MOV(ax, word_2c944));	// 11382 mov     ax, word_2C944 ;~ 0396:3CFC
cs=0x396;eip=0x003cff; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), ax));	// 11383 cmp     [bp+var_4], ax ;~ 0396:3CFF
cs=0x396;eip=0x003d02; 	R(JZ(loc_15c95));	// 11384 jz      short loc_15C95 ;~ 0396:3D02
cs=0x396;eip=0x003d04; 	T(CMP(ax, 3));	// 11385 cmp     ax, 3 ;~ 0396:3D04
cs=0x396;eip=0x003d07; 	R(JGE(loc_15c4e));	// 11386 jge     short loc_15C4E ;~ 0396:3D07
cs=0x396;eip=0x003d09; 	T(MOV(ax, 0x109F));	// 11387 mov     ax, 109Fh ;~ 0396:3D09
cs=0x396;eip=0x003d0c; 	R(JMP(loc_15c51));	// 11388 jmp     short loc_15C51 ;~ 0396:3D0C
loc_15c4e:
	// 4984 
cs=0x396;eip=0x003d0e; 	T(MOV(ax, 0x10AC));	// 11392 mov     ax, 10ACh ;~ 0396:3D0E
loc_15c51:
	// 4985 
cs=0x396;eip=0x003d11; 	X(PUSH(ax));	// 11395 push    ax ;~ 0396:3D11
cs=0x396;eip=0x003d12; 	T(MOV(ax, 0x1E45));	// 11396 mov     ax, 1E45h ;~ 0396:3D12
cs=0x396;eip=0x003d15; 	X(PUSH(ax));	// 11397 push    ax ;~ 0396:3D15
cs=0x396;eip=0x003d16; 	R(CALLF(sub_29b46,0));	// 11398 call    sub_29B46 ;~ 0396:3D16
cs=0x396;eip=0x003d1b; 	T(ADD(sp, 4));	// 11399 add     sp, 4 ;~ 0396:3D1B
cs=0x396;eip=0x003d1e; 	T(MOV(al, *(db*)(((db*)&word_2c944))));	// 11400 mov     al, byte ptr word_2C944 ;~ 0396:3D1E
cs=0x396;eip=0x003d21; 	T(ADD(al, 0x31));	// 11401 add     al, 31h ; '1' ;~ 0396:3D21
cs=0x396;eip=0x003d23; 	X(MOV(byte_2dc83, al));	// 11402 mov     byte_2DC83, al ;~ 0396:3D23
cs=0x396;eip=0x003d26; 	X(MOV(byte_2dc91, 0x0AA));	// 11403 mov     byte_2DC91, 0AAh ; '™' ;~ 0396:3D26
cs=0x396;eip=0x003d2b; 	T(MOV(ax, 0x19));	// 11404 mov     ax, 19h ;~ 0396:3D2B
cs=0x396;eip=0x003d2e; 	X(PUSH(ax));	// 11405 push    ax ;~ 0396:3D2E
cs=0x396;eip=0x003d2f; 	T(MOV(ax, 3));	// 11406 mov     ax, 3 ;~ 0396:3D2F
cs=0x396;eip=0x003d32; 	X(PUSH(ax));	// 11407 push    ax ;~ 0396:3D32
cs=0x396;eip=0x003d33; 	R(CALLF(sub_1c92b,0));	// 11408 call    sub_1C92B ;~ 0396:3D33
cs=0x396;eip=0x003d38; 	T(ADD(sp, 4));	// 11409 add     sp, 4 ;~ 0396:3D38
cs=0x396;eip=0x003d3b; 	T(SUB(ax, ax));	// 11410 sub     ax, ax ;~ 0396:3D3B
cs=0x396;eip=0x003d3d; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 11411 mov     [bp+var_4], ax ;~ 0396:3D3D
cs=0x396;eip=0x003d40; 	X(PUSH(ax));	// 11412 push    ax ;~ 0396:3D40
cs=0x396;eip=0x003d41; 	T(MOV(ax, 0x1E43));	// 11413 mov     ax, 1E43h ;~ 0396:3D41
cs=0x396;eip=0x003d44; 	X(PUSH(ax));	// 11414 push    ax ;~ 0396:3D44
cs=0x396;eip=0x003d45; 	X(PUSH(cs));	// 11415 push    cs ;~ 0396:3D45
cs=0x396;eip=0x003d46; 	R(CALL(sub_13a16,0));	// 11416 call    near ptr sub_13A16 ;~ 0396:3D46
cs=0x396;eip=0x003d49; 	T(ADD(sp, 4));	// 11417 add     sp, 4 ;~ 0396:3D49
cs=0x396;eip=0x003d4c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 11418 mov     [bp+var_4], ax ;~ 0396:3D4C
cs=0x396;eip=0x003d4f; 	T(MOV(ax, word_2c944));	// 11419 mov     ax, word_2C944 ;~ 0396:3D4F
cs=0x396;eip=0x003d52; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 11420 mov     [bp+var_4], ax ;~ 0396:3D52
loc_15c95:
	// 4986 
cs=0x396;eip=0x003d55; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 11423 mov     ax, [bp+var_8] ;~ 0396:3D55
cs=0x396;eip=0x003d58; 	T(CMP(ax, 0x3D));	// 11424 cmp     ax, 3Dh ; '=' ;~ 0396:3D58
cs=0x396;eip=0x003d5b; 	R(JZ(loc_15cc8));	// 11425 jz      short loc_15CC8 ;~ 0396:3D5B
cs=0x396;eip=0x003d5d; 	R(JG(loc_15cf0));	// 11426 jg      short loc_15CF0 ;~ 0396:3D5D
cs=0x396;eip=0x003d5f; 	T(CMP(ax, 0x2B));	// 11427 cmp     ax, 2Bh ; '+' ;~ 0396:3D5F
cs=0x396;eip=0x003d62; 	R(JZ(loc_15cc8));	// 11428 jz      short loc_15CC8 ;~ 0396:3D62
cs=0x396;eip=0x003d64; 	R(JG(loc_15cde));	// 11429 jg      short loc_15CDE ;~ 0396:3D64
cs=0x396;eip=0x003d66; 	T(CMP(ax, 0x0D));	// 11430 cmp     ax, 0Dh ;~ 0396:3D66
cs=0x396;eip=0x003d69; 	R(JZ(loc_15cd6));	// 11431 jz      short loc_15CD6 ;~ 0396:3D69
cs=0x396;eip=0x003d6b; 	R(JMP(loc_15d09));	// 11432 jmp     short loc_15D09 ;~ 0396:3D6B
loc_15cae:
	// 4987 
cs=0x396;eip=0x003d6e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 11437 mov     ax, [bp+var_8] ;~ 0396:3D6E
cs=0x396;eip=0x003d71; 	T(SUB(ax, 0x31));	// 11438 sub     ax, 31h ; '1' ;~ 0396:3D71
cs=0x396;eip=0x003d74; 	X(MOV(word_2c944, ax));	// 11439 mov     word_2C944, ax ;~ 0396:3D74
cs=0x396;eip=0x003d77; 	R(JMP(loc_15d09));	// 11440 jmp     short loc_15D09 ;~ 0396:3D77
loc_15cba:
	// 4988 
cs=0x396;eip=0x003d7a; 	T(CMP(word_2c944, 0));	// 11446 cmp     word_2C944, 0 ;~ 0396:3D7A
cs=0x396;eip=0x003d7f; 	R(JLE(loc_15d09));	// 11447 jle     short loc_15D09 ;~ 0396:3D7F
cs=0x396;eip=0x003d81; 	X(DEC(word_2c944));	// 11448 dec     word_2C944 ;~ 0396:3D81
cs=0x396;eip=0x003d85; 	R(JMP(loc_15d09));	// 11449 jmp     short loc_15D09 ;~ 0396:3D85
loc_15cc8:
	// 4989 
cs=0x396;eip=0x003d88; 	T(CMP(word_2c944, 8));	// 11455 cmp     word_2C944, 8 ;~ 0396:3D88
cs=0x396;eip=0x003d8d; 	R(JGE(loc_15d09));	// 11456 jge     short loc_15D09 ;~ 0396:3D8D
cs=0x396;eip=0x003d8f; 	X(INC(word_2c944));	// 11457 inc     word_2C944 ;~ 0396:3D8F
cs=0x396;eip=0x003d93; 	R(JMP(loc_15d09));	// 11458 jmp     short loc_15D09 ;~ 0396:3D93
loc_15cd6:
	// 4990 
cs=0x396;eip=0x003d96; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 1));	// 11463 mov     [bp+var_6], 1 ;~ 0396:3D96
cs=0x396;eip=0x003d9b; 	R(JMP(loc_15d09));	// 11464 jmp     short loc_15D09 ;~ 0396:3D9B
loc_15cde:
	// 4991 
cs=0x396;eip=0x003d9e; 	T(CMP(ax, 0x2D));	// 11469 cmp     ax, 2Dh ; '-' ;~ 0396:3D9E
cs=0x396;eip=0x003da1; 	R(JZ(loc_15cba));	// 11470 jz      short loc_15CBA ;~ 0396:3DA1
cs=0x396;eip=0x003da3; 	T(CMP(ax, 0x31));	// 11471 cmp     ax, 31h ; '1' ;~ 0396:3DA3
cs=0x396;eip=0x003da6; 	R(JL(loc_15d09));	// 11472 jl      short loc_15D09 ;~ 0396:3DA6
cs=0x396;eip=0x003da8; 	T(CMP(ax, 0x39));	// 11473 cmp     ax, 39h ; '9' ;~ 0396:3DA8
cs=0x396;eip=0x003dab; 	R(JLE(loc_15cae));	// 11474 jle     short loc_15CAE ;~ 0396:3DAB
cs=0x396;eip=0x003dad; 	R(JMP(loc_15d09));	// 11475 jmp     short loc_15D09 ;~ 0396:3DAD
loc_15cf0:
	// 4992 
cs=0x396;eip=0x003db0; 	T(CMP(ax, 0x5F));	// 11480 cmp     ax, 5Fh ; '_' ;~ 0396:3DB0
cs=0x396;eip=0x003db3; 	R(JZ(loc_15cba));	// 11481 jz      short loc_15CBA ;~ 0396:3DB3
cs=0x396;eip=0x003db5; 	T(CMP(ax, 0x92));	// 11482 cmp     ax, 92h ; 'í' ;~ 0396:3DB5
cs=0x396;eip=0x003db8; 	R(JZ(loc_15cc8));	// 11483 jz      short loc_15CC8 ;~ 0396:3DB8
cs=0x396;eip=0x003dba; 	T(CMP(ax, 0x94));	// 11484 cmp     ax, 94h ; 'î' ;~ 0396:3DBA
cs=0x396;eip=0x003dbd; 	R(JZ(loc_15cba));	// 11485 jz      short loc_15CBA ;~ 0396:3DBD
cs=0x396;eip=0x003dbf; 	T(CMP(ax, 0x96));	// 11486 cmp     ax, 96h ; 'ñ' ;~ 0396:3DBF
cs=0x396;eip=0x003dc2; 	R(JZ(loc_15cc8));	// 11487 jz      short loc_15CC8 ;~ 0396:3DC2
cs=0x396;eip=0x003dc4; 	T(CMP(ax, 0x98));	// 11488 cmp     ax, 98h ;~ 0396:3DC4
cs=0x396;eip=0x003dc7; 	R(JZ(loc_15cba));	// 11489 jz      short loc_15CBA ;~ 0396:3DC7
loc_15d09:
	// 4993 
cs=0x396;eip=0x003dc9; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0));	// 11493 cmp     [bp+var_6], 0 ;~ 0396:3DC9
cs=0x396;eip=0x003dcd; 	R(JNZ(loc_15d12));	// 11494 jnz     short loc_15D12 ;~ 0396:3DCD
cs=0x396;eip=0x003dcf; 	R(JMP(loc_15c24));	// 11495 jmp     loc_15C24 ;~ 0396:3DCF
loc_15d12:
	// 4994 
cs=0x396;eip=0x003dd2; 	T(SUB(ax, ax));	// 11499 sub     ax, ax ;~ 0396:3DD2
cs=0x396;eip=0x003dd4; 	X(MOV(word_2beda, ax));	// 11500 mov     word_2BEDA, ax ;~ 0396:3DD4
cs=0x396;eip=0x003dd7; 	X(PUSH(ax));	// 11501 push    ax ;~ 0396:3DD7
cs=0x396;eip=0x003dd8; 	R(CALLF(sub_2714e,0));	// 11502 call    far ptr sub_2714E ;~ 0396:3DD8
cs=0x396;eip=0x003ddd; 	T(ADD(sp, 2));	// 11503 add     sp, 2 ;~ 0396:3DDD
cs=0x396;eip=0x003de0; 	T(MOV(ax, 1));	// 11504 mov     ax, 1 ;~ 0396:3DE0
cs=0x396;eip=0x003de3; 	X(PUSH(ax));	// 11505 push    ax ;~ 0396:3DE3
cs=0x396;eip=0x003de4; 	T(MOV(ax, 3));	// 11506 mov     ax, 3 ;~ 0396:3DE4
cs=0x396;eip=0x003de7; 	X(PUSH(ax));	// 11507 push    ax ;~ 0396:3DE7
cs=0x396;eip=0x003de8; 	R(CALLF(sub_1c92b,0));	// 11508 call    sub_1C92B ;~ 0396:3DE8
cs=0x396;eip=0x003ded; 	T(ADD(sp, 4));	// 11509 add     sp, 4 ;~ 0396:3DED
cs=0x396;eip=0x003df0; 	T(SUB(ax, ax));	// 11510 sub     ax, ax ;~ 0396:3DF0
cs=0x396;eip=0x003df2; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 11511 mov     [bp+var_6], ax ;~ 0396:3DF2
cs=0x396;eip=0x003df5; 	X(PUSH(ax));	// 11512 push    ax ;~ 0396:3DF5
cs=0x396;eip=0x003df6; 	T(MOV(ax, 0x1E52));	// 11513 mov     ax, 1E52h ;~ 0396:3DF6
cs=0x396;eip=0x003df9; 	X(PUSH(ax));	// 11514 push    ax ;~ 0396:3DF9
cs=0x396;eip=0x003dfa; 	X(PUSH(cs));	// 11515 push    cs ;~ 0396:3DFA
cs=0x396;eip=0x003dfb; 	R(CALL(sub_13a16,0));	// 11516 call    near ptr sub_13A16 ;~ 0396:3DFB
cs=0x396;eip=0x003dfe; 	T(ADD(sp, 4));	// 11517 add     sp, 4 ;~ 0396:3DFE
cs=0x396;eip=0x003e01; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 11518 mov     [bp+var_6], ax ;~ 0396:3E01
cs=0x396;eip=0x003e04; 	T(SUB(al, al));	// 11519 sub     al, al ;~ 0396:3E04
cs=0x396;eip=0x003e06; 	X(MOV(byte_34f9b, al));	// 11520 mov     byte_34F9B, al ;~ 0396:3E06
cs=0x396;eip=0x003e09; 	T(SUB(ah, ah));	// 11521 sub     ah, ah ;~ 0396:3E09
cs=0x396;eip=0x003e0b; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 11522 mov     [bp+var_6], ax ;~ 0396:3E0B
cs=0x396;eip=0x003e0e; 	R(JMP(loc_15ea2));	// 11523 jmp     loc_15EA2 ;~ 0396:3E0E
loc_15d52:
	// 4995 
cs=0x396;eip=0x003e12; 	T(MOV(ax, 2));	// 11528 mov     ax, 2 ;~ 0396:3E12
cs=0x396;eip=0x003e15; 	X(PUSH(ax));	// 11529 push    ax ;~ 0396:3E15
cs=0x396;eip=0x003e16; 	R(CALLF(sub_26ffb,0));	// 11530 call    sub_26FFB ;~ 0396:3E16
cs=0x396;eip=0x003e1b; 	T(ADD(sp, 2));	// 11531 add     sp, 2 ;~ 0396:3E1B
cs=0x396;eip=0x003e1e; 	T(ax = bp+var_8);	// 11532 lea     ax, [bp+var_8] ;~ 0396:3E1E
cs=0x396;eip=0x003e21; 	X(PUSH(ax));	// 11533 push    ax ;~ 0396:3E21
cs=0x396;eip=0x003e22; 	R(CALLF(sub_10f80,0));	// 11534 call    sub_10F80 ;~ 0396:3E22
cs=0x396;eip=0x003e27; 	T(ADD(sp, 2));	// 11535 add     sp, 2 ;~ 0396:3E27
cs=0x396;eip=0x003e2a; 	T(MOV(al, byte_2c948));	// 11536 mov     al, byte_2C948 ;~ 0396:3E2A
cs=0x396;eip=0x003e2d; 	T(SUB(ah, ah));	// 11537 sub     ah, ah ;~ 0396:3E2D
cs=0x396;eip=0x003e2f; 	T(MOV(cl, byte_2c949));	// 11538 mov     cl, byte_2C949 ;~ 0396:3E2F
cs=0x396;eip=0x003e33; 	T(SUB(ch, ch));	// 11539 sub     ch, ch ;~ 0396:3E33
cs=0x396;eip=0x003e35; 	T(SUB(ax, cx));	// 11540 sub     ax, cx ;~ 0396:3E35
cs=0x396;eip=0x003e37; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_2))));	// 11541 cmp     ax, [bp+var_2] ;~ 0396:3E37
cs=0x396;eip=0x003e3a; 	R(JZ(loc_15df3));	// 11542 jz      short loc_15DF3 ;~ 0396:3E3A
cs=0x396;eip=0x003e3c; 	T(CMP(cl, ch));	// 11543 cmp     cl, ch ;~ 0396:3E3C
cs=0x396;eip=0x003e3e; 	R(JZ(loc_15d8a));	// 11544 jz      short loc_15D8A ;~ 0396:3E3E
cs=0x396;eip=0x003e40; 	T(MOV(ax, 0x10B9));	// 11545 mov     ax, 10B9h ;~ 0396:3E40
loc_15d83:
	// 4996 
cs=0x396;eip=0x003e43; 	X(PUSH(ax));	// 11548 push    ax ;~ 0396:3E43
cs=0x396;eip=0x003e44; 	T(MOV(ax, 0x1E7E));	// 11549 mov     ax, 1E7Eh ;~ 0396:3E44
cs=0x396;eip=0x003e47; 	R(JMP(loc_15db1));	// 11550 jmp     short loc_15DB1 ;~ 0396:3E47
loc_15d8a:
	// 4997 
cs=0x396;eip=0x003e4a; 	T(CMP(byte_2c948, 1));	// 11555 cmp     byte_2C948, 1 ;~ 0396:3E4A
cs=0x396;eip=0x003e4f; 	R(JNZ(loc_15d96));	// 11556 jnz     short loc_15D96 ;~ 0396:3E4F
cs=0x396;eip=0x003e51; 	T(MOV(ax, 0x10C8));	// 11557 mov     ax, 10C8h ;~ 0396:3E51
cs=0x396;eip=0x003e54; 	R(JMP(loc_15d83));	// 11558 jmp     short loc_15D83 ;~ 0396:3E54
loc_15d96:
	// 4998 
cs=0x396;eip=0x003e56; 	T(MOV(al, byte_2c948));	// 11562 mov     al, byte_2C948 ;~ 0396:3E56
cs=0x396;eip=0x003e59; 	T(ADD(al, 0x2F));	// 11563 add     al, 2Fh ; '/' ;~ 0396:3E59
cs=0x396;eip=0x003e5b; 	X(MOV(byte_2dcbe, al));	// 11564 mov     byte_2DCBE, al ;~ 0396:3E5B
cs=0x396;eip=0x003e5e; 	T(CMP(byte_2c948, 2));	// 11565 cmp     byte_2C948, 2 ;~ 0396:3E5E
cs=0x396;eip=0x003e63; 	R(JNZ(loc_15daa));	// 11566 jnz     short loc_15DAA ;~ 0396:3E63
cs=0x396;eip=0x003e65; 	T(MOV(ax, 0x10D7));	// 11567 mov     ax, 10D7h ;~ 0396:3E65
cs=0x396;eip=0x003e68; 	R(JMP(loc_15dad));	// 11568 jmp     short loc_15DAD ;~ 0396:3E68
loc_15daa:
	// 4999 
cs=0x396;eip=0x003e6a; 	T(MOV(ax, 0x10E5));	// 11572 mov     ax, 10E5h ;~ 0396:3E6A
loc_15dad:
	// 5000 
cs=0x396;eip=0x003e6d; 	X(PUSH(ax));	// 11575 push    ax ;~ 0396:3E6D
cs=0x396;eip=0x003e6e; 	T(MOV(ax, 0x1E7F));	// 11576 mov     ax, 1E7Fh ;~ 0396:3E6E
loc_15db1:
	// 5001 
cs=0x396;eip=0x003e71; 	X(PUSH(ax));	// 11579 push    ax ;~ 0396:3E71
cs=0x396;eip=0x003e72; 	R(CALLF(sub_29b46,0));	// 11580 call    sub_29B46 ;~ 0396:3E72
cs=0x396;eip=0x003e77; 	T(ADD(sp, 4));	// 11581 add     sp, 4 ;~ 0396:3E77
cs=0x396;eip=0x003e7a; 	X(MOV(byte_2dccc, 0x0AA));	// 11582 mov     byte_2DCCC, 0AAh ; '™' ;~ 0396:3E7A
cs=0x396;eip=0x003e7f; 	T(MOV(ax, 0x1A));	// 11583 mov     ax, 1Ah ;~ 0396:3E7F
cs=0x396;eip=0x003e82; 	X(PUSH(ax));	// 11584 push    ax ;~ 0396:3E82
cs=0x396;eip=0x003e83; 	T(MOV(ax, 3));	// 11585 mov     ax, 3 ;~ 0396:3E83
cs=0x396;eip=0x003e86; 	X(PUSH(ax));	// 11586 push    ax ;~ 0396:3E86
cs=0x396;eip=0x003e87; 	R(CALLF(sub_1c92b,0));	// 11587 call    sub_1C92B ;~ 0396:3E87
cs=0x396;eip=0x003e8c; 	T(ADD(sp, 4));	// 11588 add     sp, 4 ;~ 0396:3E8C
cs=0x396;eip=0x003e8f; 	T(SUB(ax, ax));	// 11589 sub     ax, ax ;~ 0396:3E8F
cs=0x396;eip=0x003e91; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 11590 mov     [bp+var_2], ax ;~ 0396:3E91
cs=0x396;eip=0x003e94; 	X(PUSH(ax));	// 11591 push    ax ;~ 0396:3E94
cs=0x396;eip=0x003e95; 	T(MOV(ax, 0x1E7E));	// 11592 mov     ax, 1E7Eh ;~ 0396:3E95
cs=0x396;eip=0x003e98; 	X(PUSH(ax));	// 11593 push    ax ;~ 0396:3E98
cs=0x396;eip=0x003e99; 	X(PUSH(cs));	// 11594 push    cs ;~ 0396:3E99
cs=0x396;eip=0x003e9a; 	R(CALL(sub_13a16,0));	// 11595 call    near ptr sub_13A16 ;~ 0396:3E9A
cs=0x396;eip=0x003e9d; 	T(ADD(sp, 4));	// 11596 add     sp, 4 ;~ 0396:3E9D
cs=0x396;eip=0x003ea0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 11597 mov     [bp+var_2], ax ;~ 0396:3EA0
cs=0x396;eip=0x003ea3; 	T(MOV(al, byte_2c948));	// 11598 mov     al, byte_2C948 ;~ 0396:3EA3
cs=0x396;eip=0x003ea6; 	T(SUB(ah, ah));	// 11599 sub     ah, ah ;~ 0396:3EA6
cs=0x396;eip=0x003ea8; 	T(MOV(cl, byte_2c949));	// 11600 mov     cl, byte_2C949 ;~ 0396:3EA8
cs=0x396;eip=0x003eac; 	T(SUB(ch, ch));	// 11601 sub     ch, ch ;~ 0396:3EAC
cs=0x396;eip=0x003eae; 	T(SUB(ax, cx));	// 11602 sub     ax, cx ;~ 0396:3EAE
cs=0x396;eip=0x003eb0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 11603 mov     [bp+var_2], ax ;~ 0396:3EB0
loc_15df3:
	// 5002 
cs=0x396;eip=0x003eb3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 11606 mov     ax, [bp+var_8] ;~ 0396:3EB3
cs=0x396;eip=0x003eb6; 	T(CMP(ax, 0x63));	// 11607 cmp     ax, 63h ; 'c' ;~ 0396:3EB6
cs=0x396;eip=0x003eb9; 	R(JZ(loc_15e4e));	// 11608 jz      short loc_15E4E ;~ 0396:3EB9
cs=0x396;eip=0x003ebb; 	R(JLE(loc_15e00));	// 11609 jle     short loc_15E00 ;~ 0396:3EBB
cs=0x396;eip=0x003ebd; 	R(JMP(loc_15e86));	// 11610 jmp     loc_15E86 ;~ 0396:3EBD
loc_15e00:
	// 5003 
cs=0x396;eip=0x003ec0; 	T(CMP(ax, 0x33));	// 11614 cmp     ax, 33h ; '3' ;~ 0396:3EC0
cs=0x396;eip=0x003ec3; 	R(JG(loc_15e7a));	// 11615 jg      short loc_15E7A ;~ 0396:3EC3
cs=0x396;eip=0x003ec5; 	T(CMP(ax, 0x30));	// 11616 cmp     ax, 30h ; '0' ;~ 0396:3EC5
cs=0x396;eip=0x003ec8; 	R(JGE(loc_15e62));	// 11617 jge     short loc_15E62 ;~ 0396:3EC8
cs=0x396;eip=0x003eca; 	T(CMP(ax, 0x0D));	// 11618 cmp     ax, 0Dh ;~ 0396:3ECA
cs=0x396;eip=0x003ecd; 	R(JZ(loc_15e72));	// 11619 jz      short loc_15E72 ;~ 0396:3ECD
cs=0x396;eip=0x003ecf; 	R(JMP(loc_15ea2));	// 11620 jmp     loc_15EA2 ;~ 0396:3ECF
loc_15e12:
	// 5004 
cs=0x396;eip=0x003ed2; 	T(CMP(byte_2c949, 0));	// 11625 cmp     byte_2C949, 0 ;~ 0396:3ED2
cs=0x396;eip=0x003ed7; 	R(JZ(loc_15e24));	// 11626 jz      short loc_15E24 ;~ 0396:3ED7
cs=0x396;eip=0x003ed9; 	X(MOV(byte_2c949, 0));	// 11627 mov     byte_2C949, 0 ;~ 0396:3ED9
cs=0x396;eip=0x003ede; 	R(JMP(loc_15ea2));	// 11628 jmp     loc_15EA2 ;~ 0396:3EDE
loc_15e24:
	// 5005 
cs=0x396;eip=0x003ee4; 	T(CMP(byte_2c948, 4));	// 11633 cmp     byte_2C948, 4 ;~ 0396:3EE4
cs=0x396;eip=0x003ee9; 	R(JNC(loc_15ea2));	// 11634 jnb     short loc_15EA2 ;~ 0396:3EE9
cs=0x396;eip=0x003eeb; 	X(INC(byte_2c948));	// 11635 inc     byte_2C948 ;~ 0396:3EEB
cs=0x396;eip=0x003eef; 	R(JMP(loc_15ea2));	// 11636 jmp     short loc_15EA2 ;~ 0396:3EEF
loc_15e32:
	// 5006 
cs=0x396;eip=0x003ef2; 	T(CMP(byte_2c948, 1));	// 11642 cmp     byte_2C948, 1 ;~ 0396:3EF2
cs=0x396;eip=0x003ef7; 	R(JNZ(loc_15e40));	// 11643 jnz     short loc_15E40 ;~ 0396:3EF7
cs=0x396;eip=0x003ef9; 	X(MOV(byte_2c949, 1));	// 11644 mov     byte_2C949, 1 ;~ 0396:3EF9
cs=0x396;eip=0x003efe; 	R(JMP(loc_15ea2));	// 11645 jmp     short loc_15EA2 ;~ 0396:3EFE
loc_15e40:
	// 5007 
cs=0x396;eip=0x003f00; 	T(CMP(byte_2c948, 1));	// 11649 cmp     byte_2C948, 1 ;~ 0396:3F00
cs=0x396;eip=0x003f05; 	R(JBE(loc_15ea2));	// 11650 jbe     short loc_15EA2 ;~ 0396:3F05
cs=0x396;eip=0x003f07; 	X(DEC(byte_2c948));	// 11651 dec     byte_2C948 ;~ 0396:3F07
cs=0x396;eip=0x003f0b; 	R(JMP(loc_15ea2));	// 11652 jmp     short loc_15EA2 ;~ 0396:3F0B
loc_15e4e:
	// 5008 
cs=0x396;eip=0x003f0e; 	X(MOV(byte_2c949, 0));	// 11658 mov     byte_2C949, 0 ;~ 0396:3F0E
cs=0x396;eip=0x003f13; 	R(JMP(loc_15e5b));	// 11659 jmp     short loc_15E5B ;~ 0396:3F13
loc_15e56:
	// 5009 
cs=0x396;eip=0x003f16; 	X(MOV(byte_2c949, 1));	// 11665 mov     byte_2C949, 1 ;~ 0396:3F16
loc_15e5b:
	// 5010 
cs=0x396;eip=0x003f1b; 	X(MOV(byte_2c948, 1));	// 11668 mov     byte_2C948, 1 ;~ 0396:3F1B
cs=0x396;eip=0x003f20; 	R(JMP(loc_15ea2));	// 11669 jmp     short loc_15EA2 ;~ 0396:3F20
loc_15e62:
	// 5011 
cs=0x396;eip=0x003f22; 	X(MOV(byte_2c949, 0));	// 11673 mov     byte_2C949, 0 ;~ 0396:3F22
cs=0x396;eip=0x003f27; 	T(MOV(al, *(db*)(raddr(ss,bp+var_8))));	// 11674 mov     al, byte ptr [bp+var_8] ;~ 0396:3F27
cs=0x396;eip=0x003f2a; 	T(SUB(al, 0x2F));	// 11675 sub     al, 2Fh ; '/' ;~ 0396:3F2A
cs=0x396;eip=0x003f2c; 	X(MOV(byte_2c948, al));	// 11676 mov     byte_2C948, al ;~ 0396:3F2C
cs=0x396;eip=0x003f2f; 	R(JMP(loc_15ea2));	// 11677 jmp     short loc_15EA2 ;~ 0396:3F2F
loc_15e72:
	// 5012 
cs=0x396;eip=0x003f32; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 1));	// 11682 mov     [bp+var_6], 1 ;~ 0396:3F32
cs=0x396;eip=0x003f37; 	R(JMP(loc_15ea2));	// 11683 jmp     short loc_15EA2 ;~ 0396:3F37
loc_15e7a:
	// 5013 
cs=0x396;eip=0x003f3a; 	T(CMP(ax, 0x43));	// 11688 cmp     ax, 43h ; 'C' ;~ 0396:3F3A
cs=0x396;eip=0x003f3d; 	R(JZ(loc_15e4e));	// 11689 jz      short loc_15E4E ;~ 0396:3F3D
cs=0x396;eip=0x003f3f; 	T(CMP(ax, 0x50));	// 11690 cmp     ax, 50h ; 'P' ;~ 0396:3F3F
cs=0x396;eip=0x003f42; 	R(JZ(loc_15e56));	// 11691 jz      short loc_15E56 ;~ 0396:3F42
cs=0x396;eip=0x003f44; 	R(JMP(loc_15ea2));	// 11692 jmp     short loc_15EA2 ;~ 0396:3F44
loc_15e86:
	// 5014 
cs=0x396;eip=0x003f46; 	T(CMP(ax, 0x70));	// 11696 cmp     ax, 70h ; 'p' ;~ 0396:3F46
cs=0x396;eip=0x003f49; 	R(JZ(loc_15e56));	// 11697 jz      short loc_15E56 ;~ 0396:3F49
cs=0x396;eip=0x003f4b; 	T(CMP(ax, 0x92));	// 11698 cmp     ax, 92h ; 'í' ;~ 0396:3F4B
cs=0x396;eip=0x003f4e; 	R(JZ(loc_15e12));	// 11699 jz      short loc_15E12 ;~ 0396:3F4E
cs=0x396;eip=0x003f50; 	T(CMP(ax, 0x94));	// 11700 cmp     ax, 94h ; 'î' ;~ 0396:3F50
cs=0x396;eip=0x003f53; 	R(JZ(loc_15e32));	// 11701 jz      short loc_15E32 ;~ 0396:3F53
cs=0x396;eip=0x003f55; 	T(CMP(ax, 0x96));	// 11702 cmp     ax, 96h ; 'ñ' ;~ 0396:3F55
cs=0x396;eip=0x003f58; 	R(JNZ(loc_15e9d));	// 11703 jnz     short loc_15E9D ;~ 0396:3F58
cs=0x396;eip=0x003f5a; 	R(JMP(loc_15e12));	// 11704 jmp     loc_15E12 ;~ 0396:3F5A
loc_15e9d:
	// 5015 
cs=0x396;eip=0x003f5d; 	T(CMP(ax, 0x98));	// 11708 cmp     ax, 98h ;~ 0396:3F5D
cs=0x396;eip=0x003f60; 	R(JZ(loc_15e32));	// 11709 jz      short loc_15E32 ;~ 0396:3F60
loc_15ea2:
	// 5016 
cs=0x396;eip=0x003f62; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0));	// 11713 cmp     [bp+var_6], 0 ;~ 0396:3F62
cs=0x396;eip=0x003f66; 	R(JNZ(loc_15eab));	// 11714 jnz     short loc_15EAB ;~ 0396:3F66
cs=0x396;eip=0x003f68; 	R(JMP(loc_15d52));	// 11715 jmp     loc_15D52 ;~ 0396:3F68
loc_15eab:
	// 5017 
cs=0x396;eip=0x003f6b; 	T(MOV(ax, word_2c944));	// 11719 mov     ax, word_2C944 ;~ 0396:3F6B
cs=0x396;eip=0x003f6e; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), ax));	// 11720 cmp     [bp+var_C], ax ;~ 0396:3F6E
cs=0x396;eip=0x003f71; 	R(JNZ(loc_15ec5));	// 11721 jnz     short loc_15EC5 ;~ 0396:3F71
cs=0x396;eip=0x003f73; 	T(MOV(al, byte_2c948));	// 11722 mov     al, byte_2C948 ;~ 0396:3F73
cs=0x396;eip=0x003f76; 	T(SUB(ah, ah));	// 11723 sub     ah, ah ;~ 0396:3F76
cs=0x396;eip=0x003f78; 	T(MOV(cl, byte_2c949));	// 11724 mov     cl, byte_2C949 ;~ 0396:3F78
cs=0x396;eip=0x003f7c; 	T(SUB(ch, ch));	// 11725 sub     ch, ch ;~ 0396:3F7C
cs=0x396;eip=0x003f7e; 	T(SUB(ax, cx));	// 11726 sub     ax, cx ;~ 0396:3F7E
cs=0x396;eip=0x003f80; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_a))));	// 11727 cmp     ax, [bp+var_A] ;~ 0396:3F80
cs=0x396;eip=0x003f83; 	R(JZ(loc_15ec9));	// 11728 jz      short loc_15EC9 ;~ 0396:3F83
loc_15ec5:
	// 5018 
cs=0x396;eip=0x003f85; 	X(PUSH(cs));	// 11731 push    cs ;~ 0396:3F85
cs=0x396;eip=0x003f86; 	R(CALL(sub_14676,0));	// 11732 call    near ptr sub_14676 ;~ 0396:3F86
loc_15ec9:
	// 5019 
cs=0x396;eip=0x003f89; 	T(MOV(sp, bp));	// 11735 mov     sp, bp ;~ 0396:3F89
cs=0x396;eip=0x003f8b; 	X(POP(bp));	// 11736 pop     bp ;~ 0396:3F8B
cs=0x396;eip=0x003f8c; 	R(RETF(0));	// 11737 retf ;~ 0396:3F8C
sub_15ece:
	// 11747 
cs=0x396;eip=0x003f8e; 	X(PUSH(bp));	// 11748 push    bp ;~ 0396:3F8E
ret_396_3f8f:
	// 5020 
cs=0x396;eip=0x003f8f; 	T(MOV(bp, sp));	// 11749 mov     bp, sp ;~ 0396:3F8F
cs=0x396;eip=0x003f91; 	T(SUB(sp, 2));	// 11750 sub     sp, 2 ;~ 0396:3F91
cs=0x396;eip=0x003f94; 	X(MOV(byte_34f30, 0));	// 11751 mov     byte_34F30, 0 ;~ 0396:3F94
cs=0x396;eip=0x003f99; 	T(MOV(ax, 1));	// 11752 mov     ax, 1 ;~ 0396:3F99
cs=0x396;eip=0x003f9c; 	X(MOV(word_2beda, ax));	// 11753 mov     word_2BEDA, ax ;~ 0396:3F9C
cs=0x396;eip=0x003f9f; 	X(PUSH(ax));	// 11754 push    ax ;~ 0396:3F9F
cs=0x396;eip=0x003fa0; 	R(CALLF(sub_2714e,0));	// 11755 call    far ptr sub_2714E ;~ 0396:3FA0
cs=0x396;eip=0x003fa5; 	T(ADD(sp, 2));	// 11756 add     sp, 2 ;~ 0396:3FA5
cs=0x396;eip=0x003fa8; 	T(SUB(ax, ax));	// 11757 sub     ax, ax ;~ 0396:3FA8
cs=0x396;eip=0x003faa; 	X(PUSH(ax));	// 11758 push    ax ;~ 0396:3FAA
cs=0x396;eip=0x003fab; 	R(CALLF(sub_27031,0));	// 11759 call    far ptr sub_27031 ;~ 0396:3FAB
cs=0x396;eip=0x003fb0; 	T(ADD(sp, 2));	// 11760 add     sp, 2 ;~ 0396:3FB0
cs=0x396;eip=0x003fb3; 	T(MOV(ax, 5));	// 11761 mov     ax, 5 ;~ 0396:3FB3
cs=0x396;eip=0x003fb6; 	X(PUSH(ax));	// 11762 push    ax ;~ 0396:3FB6
cs=0x396;eip=0x003fb7; 	T(SUB(ax, ax));	// 11763 sub     ax, ax ;~ 0396:3FB7
cs=0x396;eip=0x003fb9; 	X(PUSH(ax));	// 11764 push    ax ;~ 0396:3FB9
cs=0x396;eip=0x003fba; 	T(MOV(ax, 0x13F));	// 11765 mov     ax, 13Fh ;~ 0396:3FBA
cs=0x396;eip=0x003fbd; 	X(PUSH(ax));	// 11766 push    ax ;~ 0396:3FBD
cs=0x396;eip=0x003fbe; 	T(SUB(ax, ax));	// 11767 sub     ax, ax ;~ 0396:3FBE
cs=0x396;eip=0x003fc0; 	X(PUSH(ax));	// 11768 push    ax ;~ 0396:3FC0
cs=0x396;eip=0x003fc1; 	R(CALLF(sub_2785b,0));	// 11769 call    far ptr sub_2785B ;~ 0396:3FC1
cs=0x396;eip=0x003fc6; 	T(ADD(sp, 8));	// 11770 add     sp, 8 ;~ 0396:3FC6
cs=0x396;eip=0x003fc9; 	T(MOV(ax, word_2c942));	// 11771 mov     ax, word_2C942 ;~ 0396:3FC9
cs=0x396;eip=0x003fcc; 	T(MOV(cl, 3));	// 11772 mov     cl, 3 ;~ 0396:3FCC
cs=0x396;eip=0x003fce; 	T(SHL(ax, cl));	// 11773 shl     ax, cl ;~ 0396:3FCE
cs=0x396;eip=0x003fd0; 	T(ADD(ax, 0x0A34));	// 11774 add     ax, 0A34h ;~ 0396:3FD0
cs=0x396;eip=0x003fd3; 	X(PUSH(ax));	// 11775 push    ax ;~ 0396:3FD3
cs=0x396;eip=0x003fd4; 	T(MOV(ax, 0x0ADC));	// 11776 mov     ax, 0ADCh ;~ 0396:3FD4
cs=0x396;eip=0x003fd7; 	X(PUSH(ax));	// 11777 push    ax ;~ 0396:3FD7
cs=0x396;eip=0x003fd8; 	R(CALLF(sub_29b46,0));	// 11778 call    sub_29B46 ;~ 0396:3FD8
cs=0x396;eip=0x003fdd; 	T(ADD(sp, 4));	// 11779 add     sp, 4 ;~ 0396:3FDD
cs=0x396;eip=0x003fe0; 	T(MOV(ax, 0x10F3));	// 11780 mov     ax, 10F3h ;~ 0396:3FE0
cs=0x396;eip=0x003fe3; 	X(PUSH(ax));	// 11781 push    ax ;~ 0396:3FE3
cs=0x396;eip=0x003fe4; 	T(MOV(ax, 0x0AE4));	// 11782 mov     ax, 0AE4h ;~ 0396:3FE4
cs=0x396;eip=0x003fe7; 	X(PUSH(ax));	// 11783 push    ax ;~ 0396:3FE7
cs=0x396;eip=0x003fe8; 	R(CALLF(sub_29b46,0));	// 11784 call    sub_29B46 ;~ 0396:3FE8
cs=0x396;eip=0x003fed; 	T(ADD(sp, 4));	// 11785 add     sp, 4 ;~ 0396:3FED
cs=0x396;eip=0x003ff0; 	T(MOV(al, byte_2c94a));	// 11786 mov     al, byte_2C94A ;~ 0396:3FF0
cs=0x396;eip=0x003ff3; 	T(SUB(ah, ah));	// 11787 sub     ah, ah ;~ 0396:3FF3
cs=0x396;eip=0x003ff5; 	T(MOV(bx, ax));	// 11788 mov     bx, ax ;~ 0396:3FF5
cs=0x396;eip=0x003ff7; 	T(SHL(bx, 1));	// 11789 shl     bx, 1 ;~ 0396:3FF7
cs=0x396;eip=0x003ff9; 	T(ADD(bx, ax));	// 11790 add     bx, ax ;~ 0396:3FF9
cs=0x396;eip=0x003ffb; 	T(SHL(bx, 1));	// 11791 shl     bx, 1 ;~ 0396:3FFB
cs=0x396;eip=0x003ffd; 	T(MOV(al, *(raddr(ds,bx+0x0B1E))));	// 11792 mov     al, [bx+0B1Eh] ;~ 0396:3FFD
cs=0x396;eip=0x004001; 	X(MOV(byte_2c923, al));	// 11793 mov     byte_2C923, al ;~ 0396:4001
cs=0x396;eip=0x004004; 	T(MOV(ax, 0x0ADA));	// 11794 mov     ax, 0ADAh ;~ 0396:4004
cs=0x396;eip=0x004007; 	X(PUSH(ax));	// 11795 push    ax ;~ 0396:4007
cs=0x396;eip=0x004008; 	R(CALLF(sub_10d62,0));	// 11796 call    sub_10D62 ;~ 0396:4008
cs=0x396;eip=0x00400d; 	T(ADD(sp, 2));	// 11797 add     sp, 2 ;~ 0396:400D
cs=0x396;eip=0x004010; 	T(MOV(ax, 0x10F8));	// 11798 mov     ax, 10F8h ;~ 0396:4010
cs=0x396;eip=0x004013; 	X(PUSH(ax));	// 11799 push    ax ;~ 0396:4013
cs=0x396;eip=0x004014; 	T(MOV(ax, 0x0AE5));	// 11800 mov     ax, 0AE5h ;~ 0396:4014
cs=0x396;eip=0x004017; 	X(PUSH(ax));	// 11801 push    ax ;~ 0396:4017
cs=0x396;eip=0x004018; 	R(CALLF(sub_29b46,0));	// 11802 call    sub_29B46 ;~ 0396:4018
cs=0x396;eip=0x00401d; 	T(ADD(sp, 4));	// 11803 add     sp, 4 ;~ 0396:401D
cs=0x396;eip=0x004020; 	X(PUSH(word_38a9e));	// 11804 push    word_38A9E ;~ 0396:4020
cs=0x396;eip=0x004024; 	X(PUSH(word_38a9c));	// 11805 push    word_38A9C ;~ 0396:4024
cs=0x396;eip=0x004028; 	T(MOV(ax, 0x0ADA));	// 11806 mov     ax, 0ADAh ;~ 0396:4028
cs=0x396;eip=0x00402b; 	X(PUSH(ax));	// 11807 push    ax ;~ 0396:402B
cs=0x396;eip=0x00402c; 	R(CALLF(sub_10ee0,0));	// 11808 call    sub_10EE0 ;~ 0396:402C
cs=0x396;eip=0x004031; 	T(ADD(sp, 6));	// 11809 add     sp, 6 ;~ 0396:4031
cs=0x396;eip=0x004034; 	T(MOV(ax, 0x2500));	// 11810 mov     ax, 2500h ;~ 0396:4034
cs=0x396;eip=0x004037; 	X(PUSH(ds));	// 11811 push    ds ;~ 0396:4037
cs=0x396;eip=0x004038; 	X(PUSH(ax));	// 11812 push    ax ;~ 0396:4038
cs=0x396;eip=0x004039; 	X(PUSH(word_38a9e));	// 11813 push    word_38A9E ;~ 0396:4039
cs=0x396;eip=0x00403d; 	X(PUSH(word_38a9c));	// 11814 push    word_38A9C ;~ 0396:403D
cs=0x396;eip=0x004041; 	R(CALLF(sub_1ab87,0));	// 11815 call    sub_1AB87 ;~ 0396:4041
cs=0x396;eip=0x004046; 	T(ADD(sp, 8));	// 11816 add     sp, 8 ;~ 0396:4046
cs=0x396;eip=0x004049; 	T(SUB(ax, ax));	// 11817 sub     ax, ax ;~ 0396:4049
cs=0x396;eip=0x00404b; 	X(PUSH(ax));	// 11818 push    ax ;~ 0396:404B
cs=0x396;eip=0x00404c; 	T(MOV(ax, 0x4A));	// 11819 mov     ax, 4Ah ; 'J' ;~ 0396:404C
cs=0x396;eip=0x00404f; 	X(PUSH(ax));	// 11820 push    ax ;~ 0396:404F
cs=0x396;eip=0x004050; 	T(SUB(ax, ax));	// 11821 sub     ax, ax ;~ 0396:4050
cs=0x396;eip=0x004052; 	X(PUSH(ax));	// 11822 push    ax ;~ 0396:4052
cs=0x396;eip=0x004053; 	T(MOV(ax, 0x140));	// 11823 mov     ax, 140h ;~ 0396:4053
cs=0x396;eip=0x004056; 	X(PUSH(ax));	// 11824 push    ax ;~ 0396:4056
cs=0x396;eip=0x004057; 	T(MOV(al, byte_2c94a));	// 11825 mov     al, byte_2C94A ;~ 0396:4057
cs=0x396;eip=0x00405a; 	T(SUB(ah, ah));	// 11826 sub     ah, ah ;~ 0396:405A
cs=0x396;eip=0x00405c; 	T(MOV(bx, ax));	// 11827 mov     bx, ax ;~ 0396:405C
cs=0x396;eip=0x00405e; 	T(SHL(bx, 1));	// 11828 shl     bx, 1 ;~ 0396:405E
cs=0x396;eip=0x004060; 	T(ADD(bx, ax));	// 11829 add     bx, ax ;~ 0396:4060
cs=0x396;eip=0x004062; 	T(SHL(bx, 1));	// 11830 shl     bx, 1 ;~ 0396:4062
cs=0x396;eip=0x004064; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0B1C))));	// 11831 push    word ptr [bx+0B1Ch] ;~ 0396:4064
cs=0x396;eip=0x004068; 	T(MOV(ax, 0x2500));	// 11832 mov     ax, 2500h ;~ 0396:4068
cs=0x396;eip=0x00406b; 	X(PUSH(ax));	// 11833 push    ax ;~ 0396:406B
cs=0x396;eip=0x00406c; 	X(PUSH(cs));	// 11834 push    cs ;~ 0396:406C
cs=0x396;eip=0x00406d; 	R(CALL(sub_178ec,0));	// 11835 call    near ptr sub_178EC ;~ 0396:406D
cs=0x396;eip=0x004070; 	T(ADD(sp, 0x0C));	// 11836 add     sp, 0Ch ;~ 0396:4070
cs=0x396;eip=0x004073; 	X(MOV(byte_2c925, 0x41));	// 11837 mov     byte_2C925, 41h ; 'A' ;~ 0396:4073
cs=0x396;eip=0x004078; 	X(PUSH(word_38a9e));	// 11838 push    word_38A9E ;~ 0396:4078
cs=0x396;eip=0x00407c; 	X(PUSH(word_38a9c));	// 11839 push    word_38A9C ;~ 0396:407C
cs=0x396;eip=0x004080; 	T(MOV(ax, 0x0ADA));	// 11840 mov     ax, 0ADAh ;~ 0396:4080
cs=0x396;eip=0x004083; 	X(PUSH(ax));	// 11841 push    ax ;~ 0396:4083
cs=0x396;eip=0x004084; 	R(CALLF(sub_10ee0,0));	// 11842 call    sub_10EE0 ;~ 0396:4084
cs=0x396;eip=0x004089; 	T(ADD(sp, 6));	// 11843 add     sp, 6 ;~ 0396:4089
cs=0x396;eip=0x00408c; 	T(MOV(ax, 0x2500));	// 11844 mov     ax, 2500h ;~ 0396:408C
cs=0x396;eip=0x00408f; 	X(PUSH(ds));	// 11845 push    ds ;~ 0396:408F
cs=0x396;eip=0x004090; 	X(PUSH(ax));	// 11846 push    ax ;~ 0396:4090
cs=0x396;eip=0x004091; 	X(PUSH(word_38a9e));	// 11847 push    word_38A9E ;~ 0396:4091
cs=0x396;eip=0x004095; 	X(PUSH(word_38a9c));	// 11848 push    word_38A9C ;~ 0396:4095
cs=0x396;eip=0x004099; 	R(CALLF(sub_1ab87,0));	// 11849 call    sub_1AB87 ;~ 0396:4099
cs=0x396;eip=0x00409e; 	T(ADD(sp, 8));	// 11850 add     sp, 8 ;~ 0396:409E
cs=0x396;eip=0x0040a1; 	T(MOV(ax, 1));	// 11851 mov     ax, 1 ;~ 0396:40A1
cs=0x396;eip=0x0040a4; 	X(PUSH(ax));	// 11852 push    ax ;~ 0396:40A4
cs=0x396;eip=0x0040a5; 	T(MOV(ax, 0x37));	// 11853 mov     ax, 37h ; '7' ;~ 0396:40A5
cs=0x396;eip=0x0040a8; 	X(PUSH(ax));	// 11854 push    ax ;~ 0396:40A8
cs=0x396;eip=0x0040a9; 	T(SUB(ax, ax));	// 11855 sub     ax, ax ;~ 0396:40A9
cs=0x396;eip=0x0040ab; 	X(PUSH(ax));	// 11856 push    ax ;~ 0396:40AB
cs=0x396;eip=0x0040ac; 	T(MOV(ax, 0x140));	// 11857 mov     ax, 140h ;~ 0396:40AC
cs=0x396;eip=0x0040af; 	X(PUSH(ax));	// 11858 push    ax ;~ 0396:40AF
cs=0x396;eip=0x0040b0; 	T(MOV(al, byte_2c94a));	// 11859 mov     al, byte_2C94A ;~ 0396:40B0
cs=0x396;eip=0x0040b3; 	T(SUB(ah, ah));	// 11860 sub     ah, ah ;~ 0396:40B3
cs=0x396;eip=0x0040b5; 	T(MOV(bx, ax));	// 11861 mov     bx, ax ;~ 0396:40B5
cs=0x396;eip=0x0040b7; 	T(SHL(bx, 1));	// 11862 shl     bx, 1 ;~ 0396:40B7
cs=0x396;eip=0x0040b9; 	T(ADD(bx, ax));	// 11863 add     bx, ax ;~ 0396:40B9
cs=0x396;eip=0x0040bb; 	T(SHL(bx, 1));	// 11864 shl     bx, 1 ;~ 0396:40BB
cs=0x396;eip=0x0040bd; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0B1A))));	// 11865 push    word ptr [bx+0B1Ah] ;~ 0396:40BD
cs=0x396;eip=0x0040c1; 	T(MOV(ax, 0x2500));	// 11866 mov     ax, 2500h ;~ 0396:40C1
cs=0x396;eip=0x0040c4; 	X(PUSH(ax));	// 11867 push    ax ;~ 0396:40C4
cs=0x396;eip=0x0040c5; 	X(PUSH(cs));	// 11868 push    cs ;~ 0396:40C5
cs=0x396;eip=0x0040c6; 	R(CALL(sub_178ec,0));	// 11869 call    near ptr sub_178EC ;~ 0396:40C6
cs=0x396;eip=0x0040c9; 	T(MOV(sp, bp));	// 11870 mov     sp, bp ;~ 0396:40C9
cs=0x396;eip=0x0040cb; 	X(POP(bp));	// 11871 pop     bp ;~ 0396:40CB
cs=0x396;eip=0x0040cc; 	R(RETF(0));	// 11872 retf ;~ 0396:40CC
sub_1600e:
	// 11882 
#undef var_18
#define var_18 -0x18
	// 11884 var_18          = word ptr -18h ;~ 0396:40CE
#undef var_16
#define var_16 -0x16
	// 11885 var_16          = word ptr -16h ;~ 0396:40CE
#undef var_14
#define var_14 -0x14
	// 11886 var_14          = word ptr -14h ;~ 0396:40CE
#undef var_12
#define var_12 -0x12
	// 11887 var_12          = word ptr -12h ;~ 0396:40CE
#undef var_10
#define var_10 -0x10
	// 11888 var_10          = word ptr -10h ;~ 0396:40CE
#undef var_e
#define var_e -0x0E
	// 11889 var_E           = word ptr -0Eh ;~ 0396:40CE
#undef var_c
#define var_c -0x0C
	// 11890 var_C           = word ptr -0Ch ;~ 0396:40CE
#undef var_a
#define var_a -0x0A
	// 11891 var_A           = word ptr -0Ah ;~ 0396:40CE
#undef var_8
#define var_8 -8
	// 11892 var_8           = word ptr -8 ;~ 0396:40CE
#undef var_6
#define var_6 -6
	// 11893 var_6           = word ptr -6 ;~ 0396:40CE
#undef var_4
#define var_4 -4
	// 11894 var_4           = word ptr -4 ;~ 0396:40CE
#undef var_2
#define var_2 -2
	// 11895 var_2           = word ptr -2 ;~ 0396:40CE
ret_396_40ce:
	// 5021 
cs=0x396;eip=0x0040ce; 	X(PUSH(bp));	// 11897 push    bp ;~ 0396:40CE
cs=0x396;eip=0x0040cf; 	T(MOV(bp, sp));	// 11898 mov     bp, sp ;~ 0396:40CF
cs=0x396;eip=0x0040d1; 	T(SUB(sp, 0x18));	// 11899 sub     sp, 18h ;~ 0396:40D1
cs=0x396;eip=0x0040d4; 	X(PUSH(si));	// 11900 push    si ;~ 0396:40D4
cs=0x396;eip=0x0040d5; 	T(SUB(al, al));	// 11901 sub     al, al ;~ 0396:40D5
cs=0x396;eip=0x0040d7; 	X(MOV(byte_2bedf, al));	// 11902 mov     byte_2BEDF, al ;~ 0396:40D7
cs=0x396;eip=0x0040da; 	X(MOV(byte_2becc, al));	// 11903 mov     byte_2BECC, al ;~ 0396:40DA
cs=0x396;eip=0x0040dd; 	T(MOV(ax, 1));	// 11904 mov     ax, 1 ;~ 0396:40DD
cs=0x396;eip=0x0040e0; 	X(PUSH(ax));	// 11905 push    ax ;~ 0396:40E0
cs=0x396;eip=0x0040e1; 	X(PUSH(cs));	// 11906 push    cs ;~ 0396:40E1
cs=0x396;eip=0x0040e2; 	R(CALL(sub_1664e,0));	// 11907 call    near ptr sub_1664E ;~ 0396:40E2
cs=0x396;eip=0x0040e5; 	T(ADD(sp, 2));	// 11908 add     sp, 2 ;~ 0396:40E5
cs=0x396;eip=0x0040e8; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), 0));	// 11909 mov     [bp+var_14], 0 ;~ 0396:40E8
loc_1602d:
	// 5022 
cs=0x396;eip=0x0040ed; 	T(MOV(al, 0x30));	// 11912 mov     al, 30h ; '0' ;~ 0396:40ED
cs=0x396;eip=0x0040ef; 	X(MUL1_1(byte_2c94a));	// 11913 mul     byte_2C94A ;~ 0396:40EF
cs=0x396;eip=0x0040f3; 	T(MOV(bx, ax));	// 11914 mov     bx, ax ;~ 0396:40F3
cs=0x396;eip=0x0040f5; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_14))));	// 11915 mov     si, [bp+var_14] ;~ 0396:40F5
cs=0x396;eip=0x0040f8; 	T(MOV(al, *(raddr(ds,bx+si-0x1A40))));	// 11916 mov     al, [bx+si-1A40h] ;~ 0396:40F8
cs=0x396;eip=0x0040fc; 	T(MOV(bx, si));	// 11917 mov     bx, si ;~ 0396:40FC
cs=0x396;eip=0x0040fe; 	X(MOV(*(raddr(ds,bx+0x22BB)), al));	// 11918 mov     [bx+22BBh], al ;~ 0396:40FE
cs=0x396;eip=0x004102; 	X(INC(*(dw*)(raddr(ss,bp+var_14))));	// 11919 inc     [bp+var_14] ;~ 0396:4102
cs=0x396;eip=0x004105; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0C));	// 11920 cmp     [bp+var_14], 0Ch ;~ 0396:4105
cs=0x396;eip=0x004109; 	R(JL(loc_1602d));	// 11921 jl      short loc_1602D ;~ 0396:4109
cs=0x396;eip=0x00410b; 	X(MOV(byte_2e107, 0x0AA));	// 11922 mov     byte_2E107, 0AAh ; '™' ;~ 0396:410B
cs=0x396;eip=0x004110; 	T(MOV(ax, 7));	// 11923 mov     ax, 7 ;~ 0396:4110
cs=0x396;eip=0x004113; 	X(PUSH(ax));	// 11924 push    ax ;~ 0396:4113
cs=0x396;eip=0x004114; 	T(SUB(ax, ax));	// 11925 sub     ax, ax ;~ 0396:4114
cs=0x396;eip=0x004116; 	X(PUSH(ax));	// 11926 push    ax ;~ 0396:4116
cs=0x396;eip=0x004117; 	R(CALLF(sub_1c8f3,0));	// 11927 call    sub_1C8F3 ;~ 0396:4117
cs=0x396;eip=0x00411c; 	T(ADD(sp, 4));	// 11928 add     sp, 4 ;~ 0396:411C
cs=0x396;eip=0x00411f; 	T(MOV(ax, 0x0E));	// 11929 mov     ax, 0Eh ;~ 0396:411F
cs=0x396;eip=0x004122; 	X(PUSH(ax));	// 11930 push    ax ;~ 0396:4122
cs=0x396;eip=0x004123; 	T(MOV(ax, 0x51));	// 11931 mov     ax, 51h ; 'Q' ;~ 0396:4123
cs=0x396;eip=0x004126; 	X(PUSH(ax));	// 11932 push    ax ;~ 0396:4126
cs=0x396;eip=0x004127; 	R(CALLF(sub_1c92b,0));	// 11933 call    sub_1C92B ;~ 0396:4127
cs=0x396;eip=0x00412c; 	T(ADD(sp, 4));	// 11934 add     sp, 4 ;~ 0396:412C
cs=0x396;eip=0x00412f; 	T(SUB(ax, ax));	// 11935 sub     ax, ax ;~ 0396:412F
cs=0x396;eip=0x004131; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 11936 mov     [bp+var_12], ax ;~ 0396:4131
cs=0x396;eip=0x004134; 	X(PUSH(ax));	// 11937 push    ax ;~ 0396:4134
cs=0x396;eip=0x004135; 	T(MOV(ax, 0x22BB));	// 11938 mov     ax, 22BBh ;~ 0396:4135
cs=0x396;eip=0x004138; 	X(PUSH(ax));	// 11939 push    ax ;~ 0396:4138
cs=0x396;eip=0x004139; 	X(PUSH(cs));	// 11940 push    cs ;~ 0396:4139
cs=0x396;eip=0x00413a; 	R(CALL(sub_13a16,0));	// 11941 call    near ptr sub_13A16 ;~ 0396:413A
cs=0x396;eip=0x00413d; 	T(ADD(sp, 4));	// 11942 add     sp, 4 ;~ 0396:413D
cs=0x396;eip=0x004140; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 11943 mov     [bp+var_12], ax ;~ 0396:4140
cs=0x396;eip=0x004143; 	T(MOV(ax, 7));	// 11944 mov     ax, 7 ;~ 0396:4143
cs=0x396;eip=0x004146; 	X(PUSH(ax));	// 11945 push    ax ;~ 0396:4146
cs=0x396;eip=0x004147; 	T(SUB(ax, ax));	// 11946 sub     ax, ax ;~ 0396:4147
cs=0x396;eip=0x004149; 	X(PUSH(ax));	// 11947 push    ax ;~ 0396:4149
cs=0x396;eip=0x00414a; 	R(CALLF(sub_1c8f3,0));	// 11948 call    sub_1C8F3 ;~ 0396:414A
cs=0x396;eip=0x00414f; 	T(ADD(sp, 4));	// 11949 add     sp, 4 ;~ 0396:414F
cs=0x396;eip=0x004152; 	T(MOV(ax, 1));	// 11950 mov     ax, 1 ;~ 0396:4152
cs=0x396;eip=0x004155; 	X(PUSH(ax));	// 11951 push    ax ;~ 0396:4155
cs=0x396;eip=0x004156; 	T(MOV(ax, 0x51));	// 11952 mov     ax, 51h ; 'Q' ;~ 0396:4156
cs=0x396;eip=0x004159; 	X(PUSH(ax));	// 11953 push    ax ;~ 0396:4159
cs=0x396;eip=0x00415a; 	R(CALLF(sub_1c92b,0));	// 11954 call    sub_1C92B ;~ 0396:415A
cs=0x396;eip=0x00415f; 	T(ADD(sp, 4));	// 11955 add     sp, 4 ;~ 0396:415F
cs=0x396;eip=0x004162; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 11956 push    [bp+var_12] ;~ 0396:4162
cs=0x396;eip=0x004165; 	T(MOV(ax, 0x22BB));	// 11957 mov     ax, 22BBh ;~ 0396:4165
cs=0x396;eip=0x004168; 	X(PUSH(ax));	// 11958 push    ax ;~ 0396:4168
cs=0x396;eip=0x004169; 	X(PUSH(cs));	// 11959 push    cs ;~ 0396:4169
cs=0x396;eip=0x00416a; 	R(CALL(sub_13a16,0));	// 11960 call    near ptr sub_13A16 ;~ 0396:416A
cs=0x396;eip=0x00416d; 	T(ADD(sp, 4));	// 11961 add     sp, 4 ;~ 0396:416D
cs=0x396;eip=0x004170; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 11962 mov     [bp+var_12], ax ;~ 0396:4170
cs=0x396;eip=0x004173; 	T(MOV(ax, 7));	// 11963 mov     ax, 7 ;~ 0396:4173
cs=0x396;eip=0x004176; 	X(PUSH(ax));	// 11964 push    ax ;~ 0396:4176
cs=0x396;eip=0x004177; 	T(MOV(ax, 4));	// 11965 mov     ax, 4 ;~ 0396:4177
cs=0x396;eip=0x00417a; 	X(PUSH(ax));	// 11966 push    ax ;~ 0396:417A
cs=0x396;eip=0x00417b; 	R(CALLF(sub_1c8f3,0));	// 11967 call    sub_1C8F3 ;~ 0396:417B
cs=0x396;eip=0x004180; 	T(ADD(sp, 4));	// 11968 add     sp, 4 ;~ 0396:4180
cs=0x396;eip=0x004183; 	T(MOV(ax, 0x1B));	// 11969 mov     ax, 1Bh ;~ 0396:4183
cs=0x396;eip=0x004186; 	X(PUSH(ax));	// 11970 push    ax ;~ 0396:4186
cs=0x396;eip=0x004187; 	T(MOV(ax, 0x51));	// 11971 mov     ax, 51h ; 'Q' ;~ 0396:4187
cs=0x396;eip=0x00418a; 	X(PUSH(ax));	// 11972 push    ax ;~ 0396:418A
cs=0x396;eip=0x00418b; 	R(CALLF(sub_1c92b,0));	// 11973 call    sub_1C92B ;~ 0396:418B
cs=0x396;eip=0x004190; 	T(ADD(sp, 4));	// 11974 add     sp, 4 ;~ 0396:4190
cs=0x396;eip=0x004193; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 11975 push    [bp+var_12] ;~ 0396:4193
cs=0x396;eip=0x004196; 	T(MOV(ax, 0x22BB));	// 11976 mov     ax, 22BBh ;~ 0396:4196
cs=0x396;eip=0x004199; 	X(PUSH(ax));	// 11977 push    ax ;~ 0396:4199
cs=0x396;eip=0x00419a; 	X(PUSH(cs));	// 11978 push    cs ;~ 0396:419A
cs=0x396;eip=0x00419b; 	R(CALL(sub_13a16,0));	// 11979 call    near ptr sub_13A16 ;~ 0396:419B
cs=0x396;eip=0x00419e; 	T(ADD(sp, 4));	// 11980 add     sp, 4 ;~ 0396:419E
cs=0x396;eip=0x0041a1; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 11981 mov     [bp+var_12], ax ;~ 0396:41A1
cs=0x396;eip=0x0041a4; 	T(CMP(byte_2c949, 0));	// 11982 cmp     byte_2C949, 0 ;~ 0396:41A4
cs=0x396;eip=0x0041a9; 	R(JZ(loc_160ee));	// 11983 jz      short loc_160EE ;~ 0396:41A9
cs=0x396;eip=0x0041ab; 	R(JMP(loc_16412));	// 11984 jmp     loc_16412 ;~ 0396:41AB
loc_160ee:
	// 5023 
cs=0x396;eip=0x0041ae; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), 0));	// 11988 mov     [bp+var_14], 0 ;~ 0396:41AE
cs=0x396;eip=0x0041b3; 	R(JMP(loc_161b3));	// 11989 jmp     loc_161B3 ;~ 0396:41B3
loc_160f6:
	// 5024 
cs=0x396;eip=0x0041b6; 	T(MOV(ax, 7));	// 11993 mov     ax, 7 ;~ 0396:41B6
cs=0x396;eip=0x0041b9; 	X(PUSH(ax));	// 11994 push    ax ;~ 0396:41B9
cs=0x396;eip=0x0041ba; 	T(SUB(ax, ax));	// 11995 sub     ax, ax ;~ 0396:41BA
cs=0x396;eip=0x0041bc; 	X(PUSH(ax));	// 11996 push    ax ;~ 0396:41BC
cs=0x396;eip=0x0041bd; 	R(CALLF(sub_1c8f3,0));	// 11997 call    sub_1C8F3 ;~ 0396:41BD
cs=0x396;eip=0x0041c2; 	T(ADD(sp, 4));	// 11998 add     sp, 4 ;~ 0396:41C2
cs=0x396;eip=0x0041c5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 11999 push    [bp+var_12] ;~ 0396:41C5
cs=0x396;eip=0x0041c8; 	T(MOV(ax, 0x22BB));	// 12000 mov     ax, 22BBh ;~ 0396:41C8
cs=0x396;eip=0x0041cb; 	X(PUSH(ax));	// 12001 push    ax ;~ 0396:41CB
cs=0x396;eip=0x0041cc; 	X(PUSH(cs));	// 12002 push    cs ;~ 0396:41CC
cs=0x396;eip=0x0041cd; 	R(CALL(sub_139c2,0));	// 12003 call    near ptr sub_139C2 ;~ 0396:41CD
cs=0x396;eip=0x0041d0; 	T(ADD(sp, 4));	// 12004 add     sp, 4 ;~ 0396:41D0
cs=0x396;eip=0x0041d3; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 12005 mov     [bp+var_12], ax ;~ 0396:41D3
cs=0x396;eip=0x0041d6; 	T(MOV(ax, 3));	// 12006 mov     ax, 3 ;~ 0396:41D6
cs=0x396;eip=0x0041d9; 	X(PUSH(ax));	// 12007 push    ax ;~ 0396:41D9
cs=0x396;eip=0x0041da; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 12008 mov     ax, [bp+var_14] ;~ 0396:41DA
cs=0x396;eip=0x0041dd; 	T(SHL(ax, 1));	// 12009 shl     ax, 1 ;~ 0396:41DD
cs=0x396;eip=0x0041df; 	T(ADD(ax, 0x0F));	// 12010 add     ax, 0Fh ;~ 0396:41DF
cs=0x396;eip=0x0041e2; 	X(PUSH(ax));	// 12011 push    ax ;~ 0396:41E2
cs=0x396;eip=0x0041e3; 	R(CALLF(sub_1c90c,0));	// 12012 call    sub_1C90C ;~ 0396:41E3
cs=0x396;eip=0x0041e8; 	T(ADD(sp, 4));	// 12013 add     sp, 4 ;~ 0396:41E8
cs=0x396;eip=0x0041eb; 	X(MOV(byte_2e0b6, 0x80));	// 12014 mov     byte_2E0B6, 80h ; 'Ä' ;~ 0396:41EB
cs=0x396;eip=0x0041f0; 	T(SUB(ax, ax));	// 12015 sub     ax, ax ;~ 0396:41F0
cs=0x396;eip=0x0041f2; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 12016 mov     [bp+var_16], ax ;~ 0396:41F2
cs=0x396;eip=0x0041f5; 	X(PUSH(ax));	// 12017 push    ax ;~ 0396:41F5
cs=0x396;eip=0x0041f6; 	T(MOV(ax, 0x2264));	// 12018 mov     ax, 2264h ;~ 0396:41F6
cs=0x396;eip=0x0041f9; 	X(PUSH(ax));	// 12019 push    ax ;~ 0396:41F9
cs=0x396;eip=0x0041fa; 	X(PUSH(cs));	// 12020 push    cs ;~ 0396:41FA
cs=0x396;eip=0x0041fb; 	R(CALL(sub_13a16,0));	// 12021 call    near ptr sub_13A16 ;~ 0396:41FB
cs=0x396;eip=0x0041fe; 	T(ADD(sp, 4));	// 12022 add     sp, 4 ;~ 0396:41FE
cs=0x396;eip=0x004201; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 12023 mov     [bp+var_16], ax ;~ 0396:4201
cs=0x396;eip=0x004204; 	X(MOV(byte_2e0b6, 0));	// 12024 mov     byte_2E0B6, 0 ;~ 0396:4204
cs=0x396;eip=0x004209; 	T(MOV(al, byte_2c805));	// 12025 mov     al, byte_2C805 ;~ 0396:4209
cs=0x396;eip=0x00420c; 	T(SUB(ah, ah));	// 12026 sub     ah, ah ;~ 0396:420C
cs=0x396;eip=0x00420e; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), ax));	// 12027 cmp     [bp+var_14], ax ;~ 0396:420E
cs=0x396;eip=0x004211; 	R(JNC(loc_161b0));	// 12028 jnb     short loc_161B0 ;~ 0396:4211
cs=0x396;eip=0x004213; 	T(SUB(ax, ax));	// 12029 sub     ax, ax ;~ 0396:4213
cs=0x396;eip=0x004215; 	X(PUSH(ax));	// 12030 push    ax ;~ 0396:4215
cs=0x396;eip=0x004216; 	R(CALLF(sub_27031,0));	// 12031 call    far ptr sub_27031 ;~ 0396:4216
cs=0x396;eip=0x00421b; 	T(ADD(sp, 2));	// 12032 add     sp, 2 ;~ 0396:421B
cs=0x396;eip=0x00421e; 	T(SUB(ax, ax));	// 12033 sub     ax, ax ;~ 0396:421E
cs=0x396;eip=0x004220; 	X(PUSH(ax));	// 12034 push    ax ;~ 0396:4220
cs=0x396;eip=0x004221; 	T(MOV(ax, 0x1B));	// 12035 mov     ax, 1Bh ;~ 0396:4221
cs=0x396;eip=0x004224; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_14))));	// 12036 imul    [bp+var_14] ;~ 0396:4224
cs=0x396;eip=0x004227; 	T(ADD(ax, 0x0E7F4));	// 12037 add     ax, 0E7F4h ;~ 0396:4227
cs=0x396;eip=0x00422a; 	X(PUSH(ax));	// 12038 push    ax ;~ 0396:422A
cs=0x396;eip=0x00422b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 12039 mov     ax, [bp+var_14] ;~ 0396:422B
cs=0x396;eip=0x00422e; 	T(MOV(cl, 4));	// 12040 mov     cl, 4 ;~ 0396:422E
cs=0x396;eip=0x004230; 	T(SHL(ax, cl));	// 12041 shl     ax, cl ;~ 0396:4230
cs=0x396;eip=0x004232; 	T(ADD(ax, 0x75));	// 12042 add     ax, 75h ; 'u' ;~ 0396:4232
cs=0x396;eip=0x004235; 	X(PUSH(ax));	// 12043 push    ax ;~ 0396:4235
cs=0x396;eip=0x004236; 	T(MOV(ax, 0x6D));	// 12044 mov     ax, 6Dh ; 'm' ;~ 0396:4236
cs=0x396;eip=0x004239; 	X(PUSH(ax));	// 12045 push    ax ;~ 0396:4239
cs=0x396;eip=0x00423a; 	X(PUSH(cs));	// 12046 push    cs ;~ 0396:423A
cs=0x396;eip=0x00423b; 	R(CALL(sub_16cbe,0));	// 12047 call    near ptr sub_16CBE ;~ 0396:423B
cs=0x396;eip=0x00423e; 	T(ADD(sp, 8));	// 12048 add     sp, 8 ;~ 0396:423E
cs=0x396;eip=0x004241; 	T(MOV(ax, 4));	// 12049 mov     ax, 4 ;~ 0396:4241
cs=0x396;eip=0x004244; 	X(PUSH(ax));	// 12050 push    ax ;~ 0396:4244
cs=0x396;eip=0x004245; 	R(CALLF(sub_27031,0));	// 12051 call    far ptr sub_27031 ;~ 0396:4245
cs=0x396;eip=0x00424a; 	T(ADD(sp, 2));	// 12052 add     sp, 2 ;~ 0396:424A
cs=0x396;eip=0x00424d; 	T(SUB(ax, ax));	// 12053 sub     ax, ax ;~ 0396:424D
cs=0x396;eip=0x00424f; 	X(PUSH(ax));	// 12054 push    ax ;~ 0396:424F
cs=0x396;eip=0x004250; 	T(MOV(ax, 0x1B));	// 12055 mov     ax, 1Bh ;~ 0396:4250
cs=0x396;eip=0x004253; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_14))));	// 12056 imul    [bp+var_14] ;~ 0396:4253
cs=0x396;eip=0x004256; 	T(ADD(ax, 0x0E7FE));	// 12057 add     ax, 0E7FEh ;~ 0396:4256
cs=0x396;eip=0x004259; 	X(PUSH(ax));	// 12058 push    ax ;~ 0396:4259
cs=0x396;eip=0x00425a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 12059 mov     ax, [bp+var_14] ;~ 0396:425A
cs=0x396;eip=0x00425d; 	T(MOV(cl, 4));	// 12060 mov     cl, 4 ;~ 0396:425D
cs=0x396;eip=0x00425f; 	T(SHL(ax, cl));	// 12061 shl     ax, cl ;~ 0396:425F
cs=0x396;eip=0x004261; 	T(ADD(ax, 0x75));	// 12062 add     ax, 75h ; 'u' ;~ 0396:4261
cs=0x396;eip=0x004264; 	X(PUSH(ax));	// 12063 push    ax ;~ 0396:4264
cs=0x396;eip=0x004265; 	T(MOV(ax, 0x0D7));	// 12064 mov     ax, 0D7h ; '◊' ;~ 0396:4265
cs=0x396;eip=0x004268; 	X(PUSH(ax));	// 12065 push    ax ;~ 0396:4268
cs=0x396;eip=0x004269; 	X(PUSH(cs));	// 12066 push    cs ;~ 0396:4269
cs=0x396;eip=0x00426a; 	R(CALL(sub_16cbe,0));	// 12067 call    near ptr sub_16CBE ;~ 0396:426A
cs=0x396;eip=0x00426d; 	T(ADD(sp, 8));	// 12068 add     sp, 8 ;~ 0396:426D
loc_161b0:
	// 5025 
cs=0x396;eip=0x004270; 	X(INC(*(dw*)(raddr(ss,bp+var_14))));	// 12071 inc     [bp+var_14] ;~ 0396:4270
loc_161b3:
	// 5026 
cs=0x396;eip=0x004273; 	T(MOV(al, byte_2c948));	// 12074 mov     al, byte_2C948 ;~ 0396:4273
cs=0x396;eip=0x004276; 	T(SUB(ah, ah));	// 12075 sub     ah, ah ;~ 0396:4276
cs=0x396;eip=0x004278; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), ax));	// 12076 cmp     [bp+var_14], ax ;~ 0396:4278
cs=0x396;eip=0x00427b; 	R(JNC(loc_161c0));	// 12077 jnb     short loc_161C0 ;~ 0396:427B
cs=0x396;eip=0x00427d; 	R(JMP(loc_160f6));	// 12078 jmp     loc_160F6 ;~ 0396:427D
loc_161c0:
	// 5027 
cs=0x396;eip=0x004280; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), 0));	// 12082 mov     [bp+var_18], 0 ;~ 0396:4280
cs=0x396;eip=0x004285; 	T(MOV(al, byte_2c805));	// 12083 mov     al, byte_2C805 ;~ 0396:4285
cs=0x396;eip=0x004288; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 12084 mov     [bp+var_14], ax ;~ 0396:4288
cs=0x396;eip=0x00428b; 	R(JMP(loc_161e5));	// 12085 jmp     short loc_161E5 ;~ 0396:428B
loc_161ce:
	// 5028 
cs=0x396;eip=0x00428e; 	T(MOV(ax, 0x1B));	// 12090 mov     ax, 1Bh ;~ 0396:428E
cs=0x396;eip=0x004291; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_14))));	// 12091 imul    [bp+var_14] ;~ 0396:4291
cs=0x396;eip=0x004294; 	T(MOV(bx, ax));	// 12092 mov     bx, ax ;~ 0396:4294
cs=0x396;eip=0x004296; 	T(CMP(*(raddr(ds,bx-0x180F)), 0));	// 12093 cmp     byte ptr [bx-180Fh], 0 ;~ 0396:4296
cs=0x396;eip=0x00429b; 	R(JZ(loc_161e2));	// 12094 jz      short loc_161E2 ;~ 0396:429B
cs=0x396;eip=0x00429d; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), 1));	// 12095 mov     [bp+var_18], 1 ;~ 0396:429D
loc_161e2:
	// 5029 
cs=0x396;eip=0x0042a2; 	X(INC(*(dw*)(raddr(ss,bp+var_14))));	// 12098 inc     [bp+var_14] ;~ 0396:42A2
loc_161e5:
	// 5030 
cs=0x396;eip=0x0042a5; 	T(MOV(al, byte_2c948));	// 12101 mov     al, byte_2C948 ;~ 0396:42A5
cs=0x396;eip=0x0042a8; 	T(SUB(ah, ah));	// 12102 sub     ah, ah ;~ 0396:42A8
cs=0x396;eip=0x0042aa; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), ax));	// 12103 cmp     [bp+var_14], ax ;~ 0396:42AA
cs=0x396;eip=0x0042ad; 	R(JBE(loc_161ce));	// 12104 jbe     short loc_161CE ;~ 0396:42AD
cs=0x396;eip=0x0042af; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 12105 cmp     [bp+var_18], 0 ;~ 0396:42AF
cs=0x396;eip=0x0042b3; 	R(JZ(loc_161fe));	// 12106 jz      short loc_161FE ;~ 0396:42B3
cs=0x396;eip=0x0042b5; 	T(CMP(byte_2c805, al));	// 12107 cmp     byte_2C805, al ;~ 0396:42B5
cs=0x396;eip=0x0042b9; 	R(JZ(loc_161fe));	// 12108 jz      short loc_161FE ;~ 0396:42B9
cs=0x396;eip=0x0042bb; 	R(JMP(loc_16628));	// 12109 jmp     loc_16628 ;~ 0396:42BB
loc_161fe:
	// 5031 
cs=0x396;eip=0x0042be; 	T(SUB(ax, ax));	// 12114 sub     ax, ax ;~ 0396:42BE
cs=0x396;eip=0x0042c0; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 12115 mov     [bp+var_14], ax ;~ 0396:42C0
cs=0x396;eip=0x0042c3; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 12116 mov     [bp+var_18], ax ;~ 0396:42C3
cs=0x396;eip=0x0042c6; 	T(MOV(ah, byte_3a643));	// 12117 mov     ah, byte_3A643 ;~ 0396:42C6
cs=0x396;eip=0x0042ca; 	T(SUB(al, al));	// 12118 sub     al, al ;~ 0396:42CA
cs=0x396;eip=0x0042cc; 	T(MOV(cl, byte_3a642));	// 12119 mov     cl, byte_3A642 ;~ 0396:42CC
cs=0x396;eip=0x0042d0; 	T(SUB(ch, ch));	// 12120 sub     ch, ch ;~ 0396:42D0
cs=0x396;eip=0x0042d2; 	T(ADD(ax, cx));	// 12121 add     ax, cx ;~ 0396:42D2
cs=0x396;eip=0x0042d4; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 12122 mov     [bp+var_4], ax ;~ 0396:42D4
cs=0x396;eip=0x0042d7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 12123 mov     [bp+var_2], 0 ;~ 0396:42D7
cs=0x396;eip=0x0042dc; 	T(MOV(ah, byte_3a645));	// 12124 mov     ah, byte_3A645 ;~ 0396:42DC
cs=0x396;eip=0x0042e0; 	T(SUB(al, al));	// 12125 sub     al, al ;~ 0396:42E0
cs=0x396;eip=0x0042e2; 	T(MOV(cl, byte_3a644));	// 12126 mov     cl, byte_3A644 ;~ 0396:42E2
cs=0x396;eip=0x0042e6; 	T(ADD(ax, cx));	// 12127 add     ax, cx ;~ 0396:42E6
cs=0x396;eip=0x0042e8; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12128 mov     [bp+var_8], ax ;~ 0396:42E8
cs=0x396;eip=0x0042eb; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 12129 mov     [bp+var_6], 0 ;~ 0396:42EB
cs=0x396;eip=0x0042f0; 	T(MOV(dx, ax));	// 12130 mov     dx, ax ;~ 0396:42F0
cs=0x396;eip=0x0042f2; 	T(SUB(ax, ax));	// 12131 sub     ax, ax ;~ 0396:42F2
cs=0x396;eip=0x0042f4; 	X(ADD(*(dw*)(raddr(ss,bp+var_4)), ax));	// 12132 add     [bp+var_4], ax ;~ 0396:42F4
cs=0x396;eip=0x0042f7; 	X(ADC(*(dw*)(raddr(ss,bp+var_2)), dx));	// 12133 adc     [bp+var_2], dx ;~ 0396:42F7
cs=0x396;eip=0x0042fa; 	T(MOV(ah, byte_3a65e));	// 12134 mov     ah, byte_3A65E ;~ 0396:42FA
cs=0x396;eip=0x0042fe; 	T(SUB(al, al));	// 12135 sub     al, al ;~ 0396:42FE
cs=0x396;eip=0x004300; 	T(MOV(cl, byte_3a65d));	// 12136 mov     cl, byte_3A65D ;~ 0396:4300
cs=0x396;eip=0x004304; 	T(ADD(ax, cx));	// 12137 add     ax, cx ;~ 0396:4304
cs=0x396;eip=0x004306; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12138 mov     [bp+var_8], ax ;~ 0396:4306
cs=0x396;eip=0x004309; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 12139 mov     [bp+var_6], 0 ;~ 0396:4309
cs=0x396;eip=0x00430e; 	T(MOV(ah, byte_3a660));	// 12140 mov     ah, byte_3A660 ;~ 0396:430E
cs=0x396;eip=0x004312; 	T(SUB(al, al));	// 12141 sub     al, al ;~ 0396:4312
cs=0x396;eip=0x004314; 	T(MOV(cl, byte_3a65f));	// 12142 mov     cl, byte_3A65F ;~ 0396:4314
cs=0x396;eip=0x004318; 	T(ADD(ax, cx));	// 12143 add     ax, cx ;~ 0396:4318
cs=0x396;eip=0x00431a; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 12144 mov     [bp+var_C], ax ;~ 0396:431A
cs=0x396;eip=0x00431d; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 12145 mov     [bp+var_A], 0 ;~ 0396:431D
cs=0x396;eip=0x004322; 	T(MOV(dx, ax));	// 12146 mov     dx, ax ;~ 0396:4322
cs=0x396;eip=0x004324; 	T(SUB(ax, ax));	// 12147 sub     ax, ax ;~ 0396:4324
cs=0x396;eip=0x004326; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12148 add     [bp+var_8], ax ;~ 0396:4326
cs=0x396;eip=0x004329; 	X(ADC(*(dw*)(raddr(ss,bp+var_6)), dx));	// 12149 adc     [bp+var_6], dx ;~ 0396:4329
cs=0x396;eip=0x00432c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 12150 mov     ax, [bp+var_4] ;~ 0396:432C
cs=0x396;eip=0x00432f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 12151 mov     dx, [bp+var_2] ;~ 0396:432F
cs=0x396;eip=0x004332; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12152 cmp     [bp+var_8], ax ;~ 0396:4332
cs=0x396;eip=0x004335; 	R(JNZ(loc_16281));	// 12153 jnz     short loc_16281 ;~ 0396:4335
cs=0x396;eip=0x004337; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), dx));	// 12154 cmp     [bp+var_6], dx ;~ 0396:4337
cs=0x396;eip=0x00433a; 	R(JNZ(loc_16281));	// 12155 jnz     short loc_16281 ;~ 0396:433A
cs=0x396;eip=0x00433c; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), 1));	// 12156 mov     [bp+var_18], 1 ;~ 0396:433C
loc_16281:
	// 5032 
cs=0x396;eip=0x004341; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 12160 mov     ax, [bp+var_4] ;~ 0396:4341
cs=0x396;eip=0x004344; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 12161 mov     dx, [bp+var_2] ;~ 0396:4344
cs=0x396;eip=0x004347; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), dx));	// 12162 cmp     [bp+var_6], dx ;~ 0396:4347
cs=0x396;eip=0x00434a; 	R(JL(loc_162a9));	// 12163 jl      short loc_162A9 ;~ 0396:434A
cs=0x396;eip=0x00434c; 	R(JG(loc_16293));	// 12164 jg      short loc_16293 ;~ 0396:434C
cs=0x396;eip=0x00434e; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12165 cmp     [bp+var_8], ax ;~ 0396:434E
cs=0x396;eip=0x004351; 	R(JBE(loc_162a9));	// 12166 jbe     short loc_162A9 ;~ 0396:4351
loc_16293:
	// 5033 
cs=0x396;eip=0x004353; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), 0));	// 12169 mov     [bp+var_18], 0 ;~ 0396:4353
cs=0x396;eip=0x004358; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), 1));	// 12170 mov     [bp+var_14], 1 ;~ 0396:4358
cs=0x396;eip=0x00435d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 12171 mov     ax, [bp+var_8] ;~ 0396:435D
cs=0x396;eip=0x004360; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 12172 mov     dx, [bp+var_6] ;~ 0396:4360
cs=0x396;eip=0x004363; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 12173 mov     [bp+var_4], ax ;~ 0396:4363
cs=0x396;eip=0x004366; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 12174 mov     [bp+var_2], dx ;~ 0396:4366
loc_162a9:
	// 5034 
cs=0x396;eip=0x004369; 	T(MOV(ah, byte_3a679));	// 12178 mov     ah, byte_3A679 ;~ 0396:4369
cs=0x396;eip=0x00436d; 	T(SUB(al, al));	// 12179 sub     al, al ;~ 0396:436D
cs=0x396;eip=0x00436f; 	T(MOV(cl, byte_3a678));	// 12180 mov     cl, byte_3A678 ;~ 0396:436F
cs=0x396;eip=0x004373; 	T(SUB(ch, ch));	// 12181 sub     ch, ch ;~ 0396:4373
cs=0x396;eip=0x004375; 	T(ADD(ax, cx));	// 12182 add     ax, cx ;~ 0396:4375
cs=0x396;eip=0x004377; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12183 mov     [bp+var_8], ax ;~ 0396:4377
cs=0x396;eip=0x00437a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 12184 mov     [bp+var_6], 0 ;~ 0396:437A
cs=0x396;eip=0x00437f; 	T(MOV(ah, byte_3a67b));	// 12185 mov     ah, byte_3A67B ;~ 0396:437F
cs=0x396;eip=0x004383; 	T(SUB(al, al));	// 12186 sub     al, al ;~ 0396:4383
cs=0x396;eip=0x004385; 	T(MOV(cl, byte_3a67a));	// 12187 mov     cl, byte_3A67A ;~ 0396:4385
cs=0x396;eip=0x004389; 	T(ADD(ax, cx));	// 12188 add     ax, cx ;~ 0396:4389
cs=0x396;eip=0x00438b; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 12189 mov     [bp+var_C], ax ;~ 0396:438B
cs=0x396;eip=0x00438e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 12190 mov     [bp+var_A], 0 ;~ 0396:438E
cs=0x396;eip=0x004393; 	T(MOV(dx, ax));	// 12191 mov     dx, ax ;~ 0396:4393
cs=0x396;eip=0x004395; 	T(SUB(ax, ax));	// 12192 sub     ax, ax ;~ 0396:4395
cs=0x396;eip=0x004397; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12193 add     [bp+var_8], ax ;~ 0396:4397
cs=0x396;eip=0x00439a; 	X(ADC(*(dw*)(raddr(ss,bp+var_6)), dx));	// 12194 adc     [bp+var_6], dx ;~ 0396:439A
cs=0x396;eip=0x00439d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 12195 mov     ax, [bp+var_4] ;~ 0396:439D
cs=0x396;eip=0x0043a0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 12196 mov     dx, [bp+var_2] ;~ 0396:43A0
cs=0x396;eip=0x0043a3; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12197 cmp     [bp+var_8], ax ;~ 0396:43A3
cs=0x396;eip=0x0043a6; 	R(JNZ(loc_162f2));	// 12198 jnz     short loc_162F2 ;~ 0396:43A6
cs=0x396;eip=0x0043a8; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), dx));	// 12199 cmp     [bp+var_6], dx ;~ 0396:43A8
cs=0x396;eip=0x0043ab; 	R(JNZ(loc_162f2));	// 12200 jnz     short loc_162F2 ;~ 0396:43AB
cs=0x396;eip=0x0043ad; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), 1));	// 12201 mov     [bp+var_18], 1 ;~ 0396:43AD
loc_162f2:
	// 5035 
cs=0x396;eip=0x0043b2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 12205 mov     ax, [bp+var_4] ;~ 0396:43B2
cs=0x396;eip=0x0043b5; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 12206 mov     dx, [bp+var_2] ;~ 0396:43B5
cs=0x396;eip=0x0043b8; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), dx));	// 12207 cmp     [bp+var_6], dx ;~ 0396:43B8
cs=0x396;eip=0x0043bb; 	R(JL(loc_1631a));	// 12208 jl      short loc_1631A ;~ 0396:43BB
cs=0x396;eip=0x0043bd; 	R(JG(loc_16304));	// 12209 jg      short loc_16304 ;~ 0396:43BD
cs=0x396;eip=0x0043bf; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12210 cmp     [bp+var_8], ax ;~ 0396:43BF
cs=0x396;eip=0x0043c2; 	R(JBE(loc_1631a));	// 12211 jbe     short loc_1631A ;~ 0396:43C2
loc_16304:
	// 5036 
cs=0x396;eip=0x0043c4; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), 0));	// 12214 mov     [bp+var_18], 0 ;~ 0396:43C4
cs=0x396;eip=0x0043c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), 2));	// 12215 mov     [bp+var_14], 2 ;~ 0396:43C9
cs=0x396;eip=0x0043ce; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 12216 mov     ax, [bp+var_8] ;~ 0396:43CE
cs=0x396;eip=0x0043d1; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 12217 mov     dx, [bp+var_6] ;~ 0396:43D1
cs=0x396;eip=0x0043d4; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 12218 mov     [bp+var_4], ax ;~ 0396:43D4
cs=0x396;eip=0x0043d7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 12219 mov     [bp+var_2], dx ;~ 0396:43D7
loc_1631a:
	// 5037 
cs=0x396;eip=0x0043da; 	T(MOV(ah, byte_3a694));	// 12223 mov     ah, byte_3A694 ;~ 0396:43DA
cs=0x396;eip=0x0043de; 	T(SUB(al, al));	// 12224 sub     al, al ;~ 0396:43DE
cs=0x396;eip=0x0043e0; 	T(MOV(cl, byte_3a693));	// 12225 mov     cl, byte_3A693 ;~ 0396:43E0
cs=0x396;eip=0x0043e4; 	T(SUB(ch, ch));	// 12226 sub     ch, ch ;~ 0396:43E4
cs=0x396;eip=0x0043e6; 	T(ADD(ax, cx));	// 12227 add     ax, cx ;~ 0396:43E6
cs=0x396;eip=0x0043e8; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12228 mov     [bp+var_8], ax ;~ 0396:43E8
cs=0x396;eip=0x0043eb; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 12229 mov     [bp+var_6], 0 ;~ 0396:43EB
cs=0x396;eip=0x0043f0; 	T(MOV(ah, byte_3a696));	// 12230 mov     ah, byte_3A696 ;~ 0396:43F0
cs=0x396;eip=0x0043f4; 	T(SUB(al, al));	// 12231 sub     al, al ;~ 0396:43F4
cs=0x396;eip=0x0043f6; 	T(MOV(cl, byte_3a695));	// 12232 mov     cl, byte_3A695 ;~ 0396:43F6
cs=0x396;eip=0x0043fa; 	T(ADD(ax, cx));	// 12233 add     ax, cx ;~ 0396:43FA
cs=0x396;eip=0x0043fc; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 12234 mov     [bp+var_C], ax ;~ 0396:43FC
cs=0x396;eip=0x0043ff; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 12235 mov     [bp+var_A], 0 ;~ 0396:43FF
cs=0x396;eip=0x004404; 	T(MOV(dx, ax));	// 12236 mov     dx, ax ;~ 0396:4404
cs=0x396;eip=0x004406; 	T(SUB(ax, ax));	// 12237 sub     ax, ax ;~ 0396:4406
cs=0x396;eip=0x004408; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12238 add     [bp+var_8], ax ;~ 0396:4408
cs=0x396;eip=0x00440b; 	X(ADC(*(dw*)(raddr(ss,bp+var_6)), dx));	// 12239 adc     [bp+var_6], dx ;~ 0396:440B
cs=0x396;eip=0x00440e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 12240 mov     ax, [bp+var_4] ;~ 0396:440E
cs=0x396;eip=0x004411; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 12241 mov     dx, [bp+var_2] ;~ 0396:4411
cs=0x396;eip=0x004414; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12242 cmp     [bp+var_8], ax ;~ 0396:4414
cs=0x396;eip=0x004417; 	R(JNZ(loc_16363));	// 12243 jnz     short loc_16363 ;~ 0396:4417
cs=0x396;eip=0x004419; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), dx));	// 12244 cmp     [bp+var_6], dx ;~ 0396:4419
cs=0x396;eip=0x00441c; 	R(JNZ(loc_16363));	// 12245 jnz     short loc_16363 ;~ 0396:441C
cs=0x396;eip=0x00441e; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), 1));	// 12246 mov     [bp+var_18], 1 ;~ 0396:441E
loc_16363:
	// 5038 
cs=0x396;eip=0x004423; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 12250 mov     ax, [bp+var_4] ;~ 0396:4423
cs=0x396;eip=0x004426; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 12251 mov     dx, [bp+var_2] ;~ 0396:4426
cs=0x396;eip=0x004429; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), dx));	// 12252 cmp     [bp+var_6], dx ;~ 0396:4429
cs=0x396;eip=0x00442c; 	R(JL(loc_1638b));	// 12253 jl      short loc_1638B ;~ 0396:442C
cs=0x396;eip=0x00442e; 	R(JG(loc_16375));	// 12254 jg      short loc_16375 ;~ 0396:442E
cs=0x396;eip=0x004430; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12255 cmp     [bp+var_8], ax ;~ 0396:4430
cs=0x396;eip=0x004433; 	R(JBE(loc_1638b));	// 12256 jbe     short loc_1638B ;~ 0396:4433
loc_16375:
	// 5039 
cs=0x396;eip=0x004435; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), 0));	// 12259 mov     [bp+var_18], 0 ;~ 0396:4435
cs=0x396;eip=0x00443a; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), 3));	// 12260 mov     [bp+var_14], 3 ;~ 0396:443A
cs=0x396;eip=0x00443f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 12261 mov     ax, [bp+var_8] ;~ 0396:443F
cs=0x396;eip=0x004442; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 12262 mov     dx, [bp+var_6] ;~ 0396:4442
cs=0x396;eip=0x004445; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 12263 mov     [bp+var_4], ax ;~ 0396:4445
cs=0x396;eip=0x004448; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 12264 mov     [bp+var_2], dx ;~ 0396:4448
loc_1638b:
	// 5040 
cs=0x396;eip=0x00444b; 	T(MOV(al, *(db*)(raddr(ss,bp+var_14))));	// 12268 mov     al, byte ptr [bp+var_14] ;~ 0396:444B
cs=0x396;eip=0x00444e; 	T(ADD(al, 0x31));	// 12269 add     al, 31h ; '1' ;~ 0396:444E
cs=0x396;eip=0x004450; 	X(MOV(byte_2e311, al));	// 12270 mov     byte_2E311, al ;~ 0396:4450
cs=0x396;eip=0x004453; 	X(MOV(byte_2e2ee, al));	// 12271 mov     byte_2E2EE, al ;~ 0396:4453
cs=0x396;eip=0x004456; 	T(SUB(ax, ax));	// 12272 sub     ax, ax ;~ 0396:4456
cs=0x396;eip=0x004458; 	X(PUSH(ax));	// 12273 push    ax ;~ 0396:4458
cs=0x396;eip=0x004459; 	T(MOV(ax, 0x0F));	// 12274 mov     ax, 0Fh ;~ 0396:4459
cs=0x396;eip=0x00445c; 	X(PUSH(ax));	// 12275 push    ax ;~ 0396:445C
cs=0x396;eip=0x00445d; 	R(CALLF(sub_1c8f3,0));	// 12276 call    sub_1C8F3 ;~ 0396:445D
cs=0x396;eip=0x004462; 	T(ADD(sp, 4));	// 12277 add     sp, 4 ;~ 0396:4462
cs=0x396;eip=0x004465; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 12278 cmp     [bp+var_18], 0 ;~ 0396:4465
cs=0x396;eip=0x004469; 	R(JZ(loc_163b8));	// 12279 jz      short loc_163B8 ;~ 0396:4469
cs=0x396;eip=0x00446b; 	T(SUB(ax, ax));	// 12280 sub     ax, ax ;~ 0396:446B
cs=0x396;eip=0x00446d; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 12281 mov     [bp+var_12], ax ;~ 0396:446D
cs=0x396;eip=0x004470; 	X(PUSH(ax));	// 12282 push    ax ;~ 0396:4470
cs=0x396;eip=0x004471; 	T(MOV(ax, 0x24DC));	// 12283 mov     ax, 24DCh ;~ 0396:4471
cs=0x396;eip=0x004474; 	R(JMP(loc_1661d));	// 12284 jmp     loc_1661D ;~ 0396:4474
loc_163b8:
	// 5041 
cs=0x396;eip=0x004478; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), 0));	// 12289 mov     [bp+var_18], 0 ;~ 0396:4478
cs=0x396;eip=0x00447d; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), 1));	// 12290 mov     [bp+var_14], 1 ;~ 0396:447D
cs=0x396;eip=0x004482; 	R(JMP(loc_163db));	// 12291 jmp     short loc_163DB ;~ 0396:4482
loc_163c4:
	// 5042 
cs=0x396;eip=0x004484; 	T(MOV(ax, 0x1B));	// 12295 mov     ax, 1Bh ;~ 0396:4484
cs=0x396;eip=0x004487; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_14))));	// 12296 imul    [bp+var_14] ;~ 0396:4487
cs=0x396;eip=0x00448a; 	T(MOV(bx, ax));	// 12297 mov     bx, ax ;~ 0396:448A
cs=0x396;eip=0x00448c; 	T(CMP(*(raddr(ds,bx-0x180F)), 0));	// 12298 cmp     byte ptr [bx-180Fh], 0 ;~ 0396:448C
cs=0x396;eip=0x004491; 	R(JZ(loc_163d8));	// 12299 jz      short loc_163D8 ;~ 0396:4491
cs=0x396;eip=0x004493; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), 1));	// 12300 mov     [bp+var_18], 1 ;~ 0396:4493
loc_163d8:
	// 5043 
cs=0x396;eip=0x004498; 	X(INC(*(dw*)(raddr(ss,bp+var_14))));	// 12303 inc     [bp+var_14] ;~ 0396:4498
loc_163db:
	// 5044 
cs=0x396;eip=0x00449b; 	T(MOV(al, byte_2c948));	// 12306 mov     al, byte_2C948 ;~ 0396:449B
cs=0x396;eip=0x00449e; 	T(SUB(ah, ah));	// 12307 sub     ah, ah ;~ 0396:449E
cs=0x396;eip=0x0044a0; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), ax));	// 12308 cmp     [bp+var_14], ax ;~ 0396:44A0
cs=0x396;eip=0x0044a3; 	R(JBE(loc_163c4));	// 12309 jbe     short loc_163C4 ;~ 0396:44A3
cs=0x396;eip=0x0044a5; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 12310 cmp     [bp+var_18], 0 ;~ 0396:44A5
cs=0x396;eip=0x0044a9; 	R(JZ(loc_16406));	// 12311 jz      short loc_16406 ;~ 0396:44A9
cs=0x396;eip=0x0044ab; 	T(MOV(al, byte_2c94b));	// 12312 mov     al, byte_2C94B ;~ 0396:44AB
cs=0x396;eip=0x0044ae; 	T(DEC(ax));	// 12313 dec     ax ;~ 0396:44AE
cs=0x396;eip=0x0044af; 	T(MOV(cl, byte_2c94a));	// 12314 mov     cl, byte_2C94A ;~ 0396:44AF
cs=0x396;eip=0x0044b3; 	T(SUB(ch, ch));	// 12315 sub     ch, ch ;~ 0396:44B3
cs=0x396;eip=0x0044b5; 	T(CMP(ax, cx));	// 12316 cmp     ax, cx ;~ 0396:44B5
cs=0x396;eip=0x0044b7; 	R(JBE(loc_16406));	// 12317 jbe     short loc_16406 ;~ 0396:44B7
cs=0x396;eip=0x0044b9; 	T(SUB(ax, ax));	// 12318 sub     ax, ax ;~ 0396:44B9
cs=0x396;eip=0x0044bb; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 12319 mov     [bp+var_12], ax ;~ 0396:44BB
cs=0x396;eip=0x0044be; 	X(PUSH(ax));	// 12320 push    ax ;~ 0396:44BE
cs=0x396;eip=0x0044bf; 	T(MOV(ax, 0x24A5));	// 12321 mov     ax, 24A5h ;~ 0396:44BF
cs=0x396;eip=0x0044c2; 	R(JMP(loc_1661d));	// 12322 jmp     loc_1661D ;~ 0396:44C2
loc_16406:
	// 5045 
cs=0x396;eip=0x0044c6; 	T(SUB(ax, ax));	// 12328 sub     ax, ax ;~ 0396:44C6
cs=0x396;eip=0x0044c8; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 12329 mov     [bp+var_12], ax ;~ 0396:44C8
cs=0x396;eip=0x0044cb; 	X(PUSH(ax));	// 12330 push    ax ;~ 0396:44CB
cs=0x396;eip=0x0044cc; 	T(MOV(ax, 0x24C8));	// 12331 mov     ax, 24C8h ;~ 0396:44CC
cs=0x396;eip=0x0044cf; 	R(JMP(loc_1661d));	// 12332 jmp     loc_1661D ;~ 0396:44CF
loc_16412:
	// 5046 
cs=0x396;eip=0x0044d2; 	T(MOV(ax, 7));	// 12336 mov     ax, 7 ;~ 0396:44D2
cs=0x396;eip=0x0044d5; 	X(PUSH(ax));	// 12337 push    ax ;~ 0396:44D5
cs=0x396;eip=0x0044d6; 	T(SUB(ax, ax));	// 12338 sub     ax, ax ;~ 0396:44D6
cs=0x396;eip=0x0044d8; 	X(PUSH(ax));	// 12339 push    ax ;~ 0396:44D8
cs=0x396;eip=0x0044d9; 	R(CALLF(sub_1c8f3,0));	// 12340 call    sub_1C8F3 ;~ 0396:44D9
cs=0x396;eip=0x0044de; 	T(ADD(sp, 4));	// 12341 add     sp, 4 ;~ 0396:44DE
cs=0x396;eip=0x0044e1; 	T(MOV(al, 0x80));	// 12342 mov     al, 80h ; 'Ä' ;~ 0396:44E1
cs=0x396;eip=0x0044e3; 	X(MOV(byte_2e0b6, al));	// 12343 mov     byte_2E0B6, al ;~ 0396:44E3
cs=0x396;eip=0x0044e6; 	X(MOV(byte_2e0ed, al));	// 12344 mov     byte_2E0ED, al ;~ 0396:44E6
cs=0x396;eip=0x0044e9; 	X(MOV(byte_2e0d8, al));	// 12345 mov     byte_2E0D8, al ;~ 0396:44E9
cs=0x396;eip=0x0044ec; 	T(SUB(ax, ax));	// 12346 sub     ax, ax ;~ 0396:44EC
cs=0x396;eip=0x0044ee; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 12347 mov     [bp+var_12], ax ;~ 0396:44EE
cs=0x396;eip=0x0044f1; 	X(PUSH(ax));	// 12348 push    ax ;~ 0396:44F1
cs=0x396;eip=0x0044f2; 	T(MOV(ax, 0x225C));	// 12349 mov     ax, 225Ch ;~ 0396:44F2
cs=0x396;eip=0x0044f5; 	X(PUSH(ax));	// 12350 push    ax ;~ 0396:44F5
cs=0x396;eip=0x0044f6; 	X(PUSH(cs));	// 12351 push    cs ;~ 0396:44F6
cs=0x396;eip=0x0044f7; 	R(CALL(sub_139c2,0));	// 12352 call    near ptr sub_139C2 ;~ 0396:44F7
cs=0x396;eip=0x0044fa; 	T(ADD(sp, 4));	// 12353 add     sp, 4 ;~ 0396:44FA
cs=0x396;eip=0x0044fd; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 12354 mov     [bp+var_12], ax ;~ 0396:44FD
cs=0x396;eip=0x004500; 	T(SUB(al, al));	// 12355 sub     al, al ;~ 0396:4500
cs=0x396;eip=0x004502; 	X(MOV(byte_2e0b6, al));	// 12356 mov     byte_2E0B6, al ;~ 0396:4502
cs=0x396;eip=0x004505; 	X(MOV(byte_2e0ed, al));	// 12357 mov     byte_2E0ED, al ;~ 0396:4505
cs=0x396;eip=0x004508; 	X(MOV(byte_2e0d8, al));	// 12358 mov     byte_2E0D8, al ;~ 0396:4508
cs=0x396;eip=0x00450b; 	T(SUB(ax, ax));	// 12359 sub     ax, ax ;~ 0396:450B
cs=0x396;eip=0x00450d; 	X(PUSH(ax));	// 12360 push    ax ;~ 0396:450D
cs=0x396;eip=0x00450e; 	R(CALLF(sub_27031,0));	// 12361 call    far ptr sub_27031 ;~ 0396:450E
cs=0x396;eip=0x004513; 	T(ADD(sp, 2));	// 12362 add     sp, 2 ;~ 0396:4513
cs=0x396;eip=0x004516; 	T(SUB(ax, ax));	// 12363 sub     ax, ax ;~ 0396:4516
cs=0x396;eip=0x004518; 	X(PUSH(ax));	// 12364 push    ax ;~ 0396:4518
cs=0x396;eip=0x004519; 	T(MOV(ax, 0x0E7F4));	// 12365 mov     ax, 0E7F4h ;~ 0396:4519
cs=0x396;eip=0x00451c; 	X(PUSH(ax));	// 12366 push    ax ;~ 0396:451C
cs=0x396;eip=0x00451d; 	T(MOV(ax, 0x75));	// 12367 mov     ax, 75h ; 'u' ;~ 0396:451D
cs=0x396;eip=0x004520; 	X(PUSH(ax));	// 12368 push    ax ;~ 0396:4520
cs=0x396;eip=0x004521; 	T(MOV(ax, 0x6D));	// 12369 mov     ax, 6Dh ; 'm' ;~ 0396:4521
cs=0x396;eip=0x004524; 	X(PUSH(ax));	// 12370 push    ax ;~ 0396:4524
cs=0x396;eip=0x004525; 	X(PUSH(cs));	// 12371 push    cs ;~ 0396:4525
cs=0x396;eip=0x004526; 	R(CALL(sub_16cbe,0));	// 12372 call    near ptr sub_16CBE ;~ 0396:4526
cs=0x396;eip=0x004529; 	T(ADD(sp, 8));	// 12373 add     sp, 8 ;~ 0396:4529
cs=0x396;eip=0x00452c; 	T(SUB(ax, ax));	// 12374 sub     ax, ax ;~ 0396:452C
cs=0x396;eip=0x00452e; 	X(PUSH(ax));	// 12375 push    ax ;~ 0396:452E
cs=0x396;eip=0x00452f; 	T(MOV(ax, 0x0E80F));	// 12376 mov     ax, 0E80Fh ;~ 0396:452F
cs=0x396;eip=0x004532; 	X(PUSH(ax));	// 12377 push    ax ;~ 0396:4532
cs=0x396;eip=0x004533; 	T(MOV(ax, 0x85));	// 12378 mov     ax, 85h ; 'Ö' ;~ 0396:4533
cs=0x396;eip=0x004536; 	X(PUSH(ax));	// 12379 push    ax ;~ 0396:4536
cs=0x396;eip=0x004537; 	T(MOV(ax, 0x6D));	// 12380 mov     ax, 6Dh ; 'm' ;~ 0396:4537
cs=0x396;eip=0x00453a; 	X(PUSH(ax));	// 12381 push    ax ;~ 0396:453A
cs=0x396;eip=0x00453b; 	X(PUSH(cs));	// 12382 push    cs ;~ 0396:453B
cs=0x396;eip=0x00453c; 	R(CALL(sub_16cbe,0));	// 12383 call    near ptr sub_16CBE ;~ 0396:453C
cs=0x396;eip=0x00453f; 	T(ADD(sp, 8));	// 12384 add     sp, 8 ;~ 0396:453F
cs=0x396;eip=0x004542; 	T(SUB(ax, ax));	// 12385 sub     ax, ax ;~ 0396:4542
cs=0x396;eip=0x004544; 	X(PUSH(ax));	// 12386 push    ax ;~ 0396:4544
cs=0x396;eip=0x004545; 	T(MOV(ax, 0x0E82A));	// 12387 mov     ax, 0E82Ah ;~ 0396:4545
cs=0x396;eip=0x004548; 	X(PUSH(ax));	// 12388 push    ax ;~ 0396:4548
cs=0x396;eip=0x004549; 	T(MOV(ax, 0x95));	// 12389 mov     ax, 95h ; 'ï' ;~ 0396:4549
cs=0x396;eip=0x00454c; 	X(PUSH(ax));	// 12390 push    ax ;~ 0396:454C
cs=0x396;eip=0x00454d; 	T(MOV(ax, 0x6D));	// 12391 mov     ax, 6Dh ; 'm' ;~ 0396:454D
cs=0x396;eip=0x004550; 	X(PUSH(ax));	// 12392 push    ax ;~ 0396:4550
cs=0x396;eip=0x004551; 	X(PUSH(cs));	// 12393 push    cs ;~ 0396:4551
cs=0x396;eip=0x004552; 	R(CALL(sub_16cbe,0));	// 12394 call    near ptr sub_16CBE ;~ 0396:4552
cs=0x396;eip=0x004555; 	T(ADD(sp, 8));	// 12395 add     sp, 8 ;~ 0396:4555
cs=0x396;eip=0x004558; 	T(MOV(ax, 4));	// 12396 mov     ax, 4 ;~ 0396:4558
cs=0x396;eip=0x00455b; 	X(PUSH(ax));	// 12397 push    ax ;~ 0396:455B
cs=0x396;eip=0x00455c; 	R(CALLF(sub_27031,0));	// 12398 call    far ptr sub_27031 ;~ 0396:455C
cs=0x396;eip=0x004561; 	T(ADD(sp, 2));	// 12399 add     sp, 2 ;~ 0396:4561
cs=0x396;eip=0x004564; 	T(SUB(ax, ax));	// 12400 sub     ax, ax ;~ 0396:4564
cs=0x396;eip=0x004566; 	X(PUSH(ax));	// 12401 push    ax ;~ 0396:4566
cs=0x396;eip=0x004567; 	T(MOV(ax, 0x0E7FE));	// 12402 mov     ax, 0E7FEh ;~ 0396:4567
cs=0x396;eip=0x00456a; 	X(PUSH(ax));	// 12403 push    ax ;~ 0396:456A
cs=0x396;eip=0x00456b; 	T(MOV(ax, 0x75));	// 12404 mov     ax, 75h ; 'u' ;~ 0396:456B
cs=0x396;eip=0x00456e; 	X(PUSH(ax));	// 12405 push    ax ;~ 0396:456E
cs=0x396;eip=0x00456f; 	T(MOV(ax, 0x0D7));	// 12406 mov     ax, 0D7h ; '◊' ;~ 0396:456F
cs=0x396;eip=0x004572; 	X(PUSH(ax));	// 12407 push    ax ;~ 0396:4572
cs=0x396;eip=0x004573; 	X(PUSH(cs));	// 12408 push    cs ;~ 0396:4573
cs=0x396;eip=0x004574; 	R(CALL(sub_16cbe,0));	// 12409 call    near ptr sub_16CBE ;~ 0396:4574
cs=0x396;eip=0x004577; 	T(ADD(sp, 8));	// 12410 add     sp, 8 ;~ 0396:4577
cs=0x396;eip=0x00457a; 	T(SUB(ax, ax));	// 12411 sub     ax, ax ;~ 0396:457A
cs=0x396;eip=0x00457c; 	X(PUSH(ax));	// 12412 push    ax ;~ 0396:457C
cs=0x396;eip=0x00457d; 	T(MOV(ax, 0x0E819));	// 12413 mov     ax, 0E819h ;~ 0396:457D
cs=0x396;eip=0x004580; 	X(PUSH(ax));	// 12414 push    ax ;~ 0396:4580
cs=0x396;eip=0x004581; 	T(MOV(ax, 0x85));	// 12415 mov     ax, 85h ; 'Ö' ;~ 0396:4581
cs=0x396;eip=0x004584; 	X(PUSH(ax));	// 12416 push    ax ;~ 0396:4584
cs=0x396;eip=0x004585; 	T(MOV(ax, 0x0D7));	// 12417 mov     ax, 0D7h ; '◊' ;~ 0396:4585
cs=0x396;eip=0x004588; 	X(PUSH(ax));	// 12418 push    ax ;~ 0396:4588
cs=0x396;eip=0x004589; 	X(PUSH(cs));	// 12419 push    cs ;~ 0396:4589
cs=0x396;eip=0x00458a; 	R(CALL(sub_16cbe,0));	// 12420 call    near ptr sub_16CBE ;~ 0396:458A
cs=0x396;eip=0x00458d; 	T(ADD(sp, 8));	// 12421 add     sp, 8 ;~ 0396:458D
cs=0x396;eip=0x004590; 	T(SUB(ax, ax));	// 12422 sub     ax, ax ;~ 0396:4590
cs=0x396;eip=0x004592; 	X(PUSH(ax));	// 12423 push    ax ;~ 0396:4592
cs=0x396;eip=0x004593; 	T(MOV(ax, 0x0E834));	// 12424 mov     ax, 0E834h ;~ 0396:4593
cs=0x396;eip=0x004596; 	X(PUSH(ax));	// 12425 push    ax ;~ 0396:4596
cs=0x396;eip=0x004597; 	T(MOV(ax, 0x95));	// 12426 mov     ax, 95h ; 'ï' ;~ 0396:4597
cs=0x396;eip=0x00459a; 	X(PUSH(ax));	// 12427 push    ax ;~ 0396:459A
cs=0x396;eip=0x00459b; 	T(MOV(ax, 0x0D7));	// 12428 mov     ax, 0D7h ; '◊' ;~ 0396:459B
cs=0x396;eip=0x00459e; 	X(PUSH(ax));	// 12429 push    ax ;~ 0396:459E
cs=0x396;eip=0x00459f; 	X(PUSH(cs));	// 12430 push    cs ;~ 0396:459F
cs=0x396;eip=0x0045a0; 	R(CALL(sub_16cbe,0));	// 12431 call    near ptr sub_16CBE ;~ 0396:45A0
cs=0x396;eip=0x0045a3; 	T(ADD(sp, 8));	// 12432 add     sp, 8 ;~ 0396:45A3
cs=0x396;eip=0x0045a6; 	T(MOV(ah, byte_3a643));	// 12433 mov     ah, byte_3A643 ;~ 0396:45A6
cs=0x396;eip=0x0045aa; 	T(SUB(al, al));	// 12434 sub     al, al ;~ 0396:45AA
cs=0x396;eip=0x0045ac; 	T(MOV(cl, byte_3a642));	// 12435 mov     cl, byte_3A642 ;~ 0396:45AC
cs=0x396;eip=0x0045b0; 	T(SUB(ch, ch));	// 12436 sub     ch, ch ;~ 0396:45B0
cs=0x396;eip=0x0045b2; 	T(ADD(ax, cx));	// 12437 add     ax, cx ;~ 0396:45B2
cs=0x396;eip=0x0045b4; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 12438 mov     [bp+var_4], ax ;~ 0396:45B4
cs=0x396;eip=0x0045b7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 12439 mov     [bp+var_2], 0 ;~ 0396:45B7
cs=0x396;eip=0x0045bc; 	T(MOV(ah, byte_3a645));	// 12440 mov     ah, byte_3A645 ;~ 0396:45BC
cs=0x396;eip=0x0045c0; 	T(SUB(al, al));	// 12441 sub     al, al ;~ 0396:45C0
cs=0x396;eip=0x0045c2; 	T(MOV(cl, byte_3a644));	// 12442 mov     cl, byte_3A644 ;~ 0396:45C2
cs=0x396;eip=0x0045c6; 	T(ADD(ax, cx));	// 12443 add     ax, cx ;~ 0396:45C6
cs=0x396;eip=0x0045c8; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12444 mov     [bp+var_8], ax ;~ 0396:45C8
cs=0x396;eip=0x0045cb; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 12445 mov     [bp+var_6], 0 ;~ 0396:45CB
cs=0x396;eip=0x0045d0; 	T(MOV(dx, ax));	// 12446 mov     dx, ax ;~ 0396:45D0
cs=0x396;eip=0x0045d2; 	T(SUB(ax, ax));	// 12447 sub     ax, ax ;~ 0396:45D2
cs=0x396;eip=0x0045d4; 	X(ADD(*(dw*)(raddr(ss,bp+var_4)), ax));	// 12448 add     [bp+var_4], ax ;~ 0396:45D4
cs=0x396;eip=0x0045d7; 	X(ADC(*(dw*)(raddr(ss,bp+var_2)), dx));	// 12449 adc     [bp+var_2], dx ;~ 0396:45D7
cs=0x396;eip=0x0045da; 	T(MOV(ah, byte_3a65e));	// 12450 mov     ah, byte_3A65E ;~ 0396:45DA
cs=0x396;eip=0x0045de; 	T(SUB(al, al));	// 12451 sub     al, al ;~ 0396:45DE
cs=0x396;eip=0x0045e0; 	T(MOV(cl, byte_3a65d));	// 12452 mov     cl, byte_3A65D ;~ 0396:45E0
cs=0x396;eip=0x0045e4; 	T(ADD(ax, cx));	// 12453 add     ax, cx ;~ 0396:45E4
cs=0x396;eip=0x0045e6; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12454 mov     [bp+var_8], ax ;~ 0396:45E6
cs=0x396;eip=0x0045e9; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 12455 mov     [bp+var_6], 0 ;~ 0396:45E9
cs=0x396;eip=0x0045ee; 	T(MOV(ah, byte_3a660));	// 12456 mov     ah, byte_3A660 ;~ 0396:45EE
cs=0x396;eip=0x0045f2; 	T(SUB(al, al));	// 12457 sub     al, al ;~ 0396:45F2
cs=0x396;eip=0x0045f4; 	T(MOV(cl, byte_3a65f));	// 12458 mov     cl, byte_3A65F ;~ 0396:45F4
cs=0x396;eip=0x0045f8; 	T(ADD(ax, cx));	// 12459 add     ax, cx ;~ 0396:45F8
cs=0x396;eip=0x0045fa; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 12460 mov     [bp+var_C], ax ;~ 0396:45FA
cs=0x396;eip=0x0045fd; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 12461 mov     [bp+var_A], 0 ;~ 0396:45FD
cs=0x396;eip=0x004602; 	T(MOV(dx, ax));	// 12462 mov     dx, ax ;~ 0396:4602
cs=0x396;eip=0x004604; 	T(SUB(ax, ax));	// 12463 sub     ax, ax ;~ 0396:4604
cs=0x396;eip=0x004606; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12464 add     [bp+var_8], ax ;~ 0396:4606
cs=0x396;eip=0x004609; 	X(ADC(*(dw*)(raddr(ss,bp+var_6)), dx));	// 12465 adc     [bp+var_6], dx ;~ 0396:4609
cs=0x396;eip=0x00460c; 	T(MOV(ah, byte_3a679));	// 12466 mov     ah, byte_3A679 ;~ 0396:460C
cs=0x396;eip=0x004610; 	T(SUB(al, al));	// 12467 sub     al, al ;~ 0396:4610
cs=0x396;eip=0x004612; 	T(MOV(cl, byte_3a678));	// 12468 mov     cl, byte_3A678 ;~ 0396:4612
cs=0x396;eip=0x004616; 	T(ADD(ax, cx));	// 12469 add     ax, cx ;~ 0396:4616
cs=0x396;eip=0x004618; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 12470 mov     [bp+var_C], ax ;~ 0396:4618
cs=0x396;eip=0x00461b; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 12471 mov     [bp+var_A], 0 ;~ 0396:461B
cs=0x396;eip=0x004620; 	T(MOV(ah, byte_3a696));	// 12472 mov     ah, byte_3A696 ;~ 0396:4620
cs=0x396;eip=0x004624; 	T(SUB(al, al));	// 12473 sub     al, al ;~ 0396:4624
cs=0x396;eip=0x004626; 	T(MOV(cl, byte_3a695));	// 12474 mov     cl, byte_3A695 ;~ 0396:4626
cs=0x396;eip=0x00462a; 	T(ADD(ax, cx));	// 12475 add     ax, cx ;~ 0396:462A
cs=0x396;eip=0x00462c; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 12476 mov     [bp+var_10], ax ;~ 0396:462C
cs=0x396;eip=0x00462f; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 12477 mov     [bp+var_E], 0 ;~ 0396:462F
cs=0x396;eip=0x004634; 	T(MOV(dx, ax));	// 12478 mov     dx, ax ;~ 0396:4634
cs=0x396;eip=0x004636; 	T(SUB(ax, ax));	// 12479 sub     ax, ax ;~ 0396:4636
cs=0x396;eip=0x004638; 	X(ADD(*(dw*)(raddr(ss,bp+var_c)), ax));	// 12480 add     [bp+var_C], ax ;~ 0396:4638
cs=0x396;eip=0x00463b; 	X(ADC(*(dw*)(raddr(ss,bp+var_a)), dx));	// 12481 adc     [bp+var_A], dx ;~ 0396:463B
cs=0x396;eip=0x00463e; 	X(PUSH(ax));	// 12482 push    ax ;~ 0396:463E
cs=0x396;eip=0x00463f; 	T(MOV(ax, 0x0F));	// 12483 mov     ax, 0Fh ;~ 0396:463F
cs=0x396;eip=0x004642; 	X(PUSH(ax));	// 12484 push    ax ;~ 0396:4642
cs=0x396;eip=0x004643; 	R(CALLF(sub_1c8f3,0));	// 12485 call    sub_1C8F3 ;~ 0396:4643
cs=0x396;eip=0x004648; 	T(ADD(sp, 4));	// 12486 add     sp, 4 ;~ 0396:4648
cs=0x396;eip=0x00464b; 	T(MOV(al, byte_2c94b));	// 12487 mov     al, byte_2C94B ;~ 0396:464B
cs=0x396;eip=0x00464e; 	T(SUB(ah, ah));	// 12488 sub     ah, ah ;~ 0396:464E
cs=0x396;eip=0x004650; 	T(DEC(ax));	// 12489 dec     ax ;~ 0396:4650
cs=0x396;eip=0x004651; 	T(MOV(cl, byte_2c94a));	// 12490 mov     cl, byte_2C94A ;~ 0396:4651
cs=0x396;eip=0x004655; 	T(SUB(ch, ch));	// 12491 sub     ch, ch ;~ 0396:4655
cs=0x396;eip=0x004657; 	T(CMP(ax, cx));	// 12492 cmp     ax, cx ;~ 0396:4657
cs=0x396;eip=0x004659; 	R(JBE(loc_165de));	// 12493 jbe     short loc_165DE ;~ 0396:4659
cs=0x396;eip=0x00465b; 	T(CMP(byte_2c81e, ch));	// 12494 cmp     byte_2C81E, ch ;~ 0396:465B
cs=0x396;eip=0x00465f; 	R(JZ(loc_16614));	// 12495 jz      short loc_16614 ;~ 0396:465F
cs=0x396;eip=0x004661; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 12496 mov     ax, [bp+var_8] ;~ 0396:4661
cs=0x396;eip=0x004664; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 12497 mov     dx, [bp+var_6] ;~ 0396:4664
cs=0x396;eip=0x004667; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), dx));	// 12498 cmp     [bp+var_2], dx ;~ 0396:4667
cs=0x396;eip=0x00466a; 	R(JL(loc_165d2));	// 12499 jl      short loc_165D2 ;~ 0396:466A
cs=0x396;eip=0x00466c; 	R(JG(loc_165b3));	// 12500 jg      short loc_165B3 ;~ 0396:466C
cs=0x396;eip=0x00466e; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), ax));	// 12501 cmp     [bp+var_4], ax ;~ 0396:466E
cs=0x396;eip=0x004671; 	R(JC(loc_165d2));	// 12502 jb      short loc_165D2 ;~ 0396:4671
loc_165b3:
	// 5047 
cs=0x396;eip=0x004673; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 12505 mov     ax, [bp+var_C] ;~ 0396:4673
cs=0x396;eip=0x004676; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_a))));	// 12506 mov     dx, [bp+var_A] ;~ 0396:4676
cs=0x396;eip=0x004679; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), dx));	// 12507 cmp     [bp+var_2], dx ;~ 0396:4679
cs=0x396;eip=0x00467c; 	R(JL(loc_165d2));	// 12508 jl      short loc_165D2 ;~ 0396:467C
cs=0x396;eip=0x00467e; 	R(JG(loc_165c5));	// 12509 jg      short loc_165C5 ;~ 0396:467E
cs=0x396;eip=0x004680; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), ax));	// 12510 cmp     [bp+var_4], ax ;~ 0396:4680
cs=0x396;eip=0x004683; 	R(JC(loc_165d2));	// 12511 jb      short loc_165D2 ;~ 0396:4683
loc_165c5:
	// 5048 
cs=0x396;eip=0x004685; 	T(SUB(ax, ax));	// 12514 sub     ax, ax ;~ 0396:4685
cs=0x396;eip=0x004687; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 12515 mov     [bp+var_12], ax ;~ 0396:4687
cs=0x396;eip=0x00468a; 	X(PUSH(ax));	// 12516 push    ax ;~ 0396:468A
cs=0x396;eip=0x00468b; 	T(MOV(ax, 0x2469));	// 12517 mov     ax, 2469h ;~ 0396:468B
cs=0x396;eip=0x00468e; 	R(JMP(loc_1661d));	// 12518 jmp     short loc_1661D ;~ 0396:468E
loc_165d2:
	// 5049 
cs=0x396;eip=0x004692; 	T(SUB(ax, ax));	// 12525 sub     ax, ax ;~ 0396:4692
cs=0x396;eip=0x004694; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 12526 mov     [bp+var_12], ax ;~ 0396:4694
cs=0x396;eip=0x004697; 	X(PUSH(ax));	// 12527 push    ax ;~ 0396:4697
cs=0x396;eip=0x004698; 	T(MOV(ax, 0x2488));	// 12528 mov     ax, 2488h ;~ 0396:4698
cs=0x396;eip=0x00469b; 	R(JMP(loc_1661d));	// 12529 jmp     short loc_1661D ;~ 0396:469B
loc_165de:
	// 5050 
cs=0x396;eip=0x00469e; 	T(CMP(byte_2c81e, 0));	// 12534 cmp     byte_2C81E, 0 ;~ 0396:469E
cs=0x396;eip=0x0046a3; 	R(JZ(loc_16614));	// 12535 jz      short loc_16614 ;~ 0396:46A3
cs=0x396;eip=0x0046a5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 12536 mov     ax, [bp+var_8] ;~ 0396:46A5
cs=0x396;eip=0x0046a8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 12537 mov     dx, [bp+var_6] ;~ 0396:46A8
cs=0x396;eip=0x0046ab; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), dx));	// 12538 cmp     [bp+var_2], dx ;~ 0396:46AB
cs=0x396;eip=0x0046ae; 	R(JL(loc_16614));	// 12539 jl      short loc_16614 ;~ 0396:46AE
cs=0x396;eip=0x0046b0; 	R(JG(loc_165f7));	// 12540 jg      short loc_165F7 ;~ 0396:46B0
cs=0x396;eip=0x0046b2; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), ax));	// 12541 cmp     [bp+var_4], ax ;~ 0396:46B2
cs=0x396;eip=0x0046b5; 	R(JC(loc_16614));	// 12542 jb      short loc_16614 ;~ 0396:46B5
loc_165f7:
	// 5051 
cs=0x396;eip=0x0046b7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 12545 mov     ax, [bp+var_C] ;~ 0396:46B7
cs=0x396;eip=0x0046ba; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_a))));	// 12546 mov     dx, [bp+var_A] ;~ 0396:46BA
cs=0x396;eip=0x0046bd; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), dx));	// 12547 cmp     [bp+var_2], dx ;~ 0396:46BD
cs=0x396;eip=0x0046c0; 	R(JL(loc_16614));	// 12548 jl      short loc_16614 ;~ 0396:46C0
cs=0x396;eip=0x0046c2; 	R(JG(loc_16609));	// 12549 jg      short loc_16609 ;~ 0396:46C2
cs=0x396;eip=0x0046c4; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), ax));	// 12550 cmp     [bp+var_4], ax ;~ 0396:46C4
cs=0x396;eip=0x0046c7; 	R(JC(loc_16614));	// 12551 jb      short loc_16614 ;~ 0396:46C7
loc_16609:
	// 5052 
cs=0x396;eip=0x0046c9; 	T(SUB(ax, ax));	// 12554 sub     ax, ax ;~ 0396:46C9
cs=0x396;eip=0x0046cb; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 12555 mov     [bp+var_12], ax ;~ 0396:46CB
cs=0x396;eip=0x0046ce; 	X(PUSH(ax));	// 12556 push    ax ;~ 0396:46CE
cs=0x396;eip=0x0046cf; 	T(MOV(ax, 0x244A));	// 12557 mov     ax, 244Ah ;~ 0396:46CF
cs=0x396;eip=0x0046d2; 	R(JMP(loc_1661d));	// 12558 jmp     short loc_1661D ;~ 0396:46D2
loc_16614:
	// 5053 
cs=0x396;eip=0x0046d4; 	T(SUB(ax, ax));	// 12563 sub     ax, ax ;~ 0396:46D4
cs=0x396;eip=0x0046d6; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 12564 mov     [bp+var_12], ax ;~ 0396:46D6
cs=0x396;eip=0x0046d9; 	X(PUSH(ax));	// 12565 push    ax ;~ 0396:46D9
cs=0x396;eip=0x0046da; 	T(MOV(ax, 0x2426));	// 12566 mov     ax, 2426h ;~ 0396:46DA
loc_1661d:
	// 5054 
cs=0x396;eip=0x0046dd; 	X(PUSH(ax));	// 12570 push    ax ;~ 0396:46DD
cs=0x396;eip=0x0046de; 	X(PUSH(cs));	// 12571 push    cs ;~ 0396:46DE
cs=0x396;eip=0x0046df; 	R(CALL(sub_139c2,0));	// 12572 call    near ptr sub_139C2 ;~ 0396:46DF
cs=0x396;eip=0x0046e2; 	T(ADD(sp, 4));	// 12573 add     sp, 4 ;~ 0396:46E2
cs=0x396;eip=0x0046e5; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 12574 mov     [bp+var_12], ax ;~ 0396:46E5
loc_16628:
	// 5055 
cs=0x396;eip=0x0046e8; 	T(SUB(ax, ax));	// 12577 sub     ax, ax ;~ 0396:46E8
cs=0x396;eip=0x0046ea; 	X(MOV(word_2beda, ax));	// 12578 mov     word_2BEDA, ax ;~ 0396:46EA
cs=0x396;eip=0x0046ed; 	X(PUSH(ax));	// 12579 push    ax ;~ 0396:46ED
cs=0x396;eip=0x0046ee; 	R(CALLF(sub_2714e,0));	// 12580 call    far ptr sub_2714E ;~ 0396:46EE
cs=0x396;eip=0x0046f3; 	T(ADD(sp, 2));	// 12581 add     sp, 2 ;~ 0396:46F3
cs=0x396;eip=0x0046f6; 	X(PUSH(cs));	// 12582 push    cs ;~ 0396:46F6
cs=0x396;eip=0x0046f7; 	R(CALL(sub_13b22,0));	// 12583 call    near ptr sub_13B22 ;~ 0396:46F7
cs=0x396;eip=0x0046fa; 	X(MOV(byte_34f9b, 0));	// 12584 mov     byte_34F9B, 0 ;~ 0396:46FA
cs=0x396;eip=0x0046ff; 	T(SUB(ax, ax));	// 12585 sub     ax, ax ;~ 0396:46FF
cs=0x396;eip=0x004701; 	X(PUSH(ax));	// 12586 push    ax ;~ 0396:4701
cs=0x396;eip=0x004702; 	X(PUSH(cs));	// 12587 push    cs ;~ 0396:4702
cs=0x396;eip=0x004703; 	R(CALL(sub_13ace,0));	// 12588 call    near ptr sub_13ACE ;~ 0396:4703
cs=0x396;eip=0x004706; 	T(ADD(sp, 2));	// 12589 add     sp, 2 ;~ 0396:4706
cs=0x396;eip=0x004709; 	X(POP(si));	// 12590 pop     si ;~ 0396:4709
cs=0x396;eip=0x00470a; 	T(MOV(sp, bp));	// 12591 mov     sp, bp ;~ 0396:470A
cs=0x396;eip=0x00470c; 	X(POP(bp));	// 12592 pop     bp ;~ 0396:470C
cs=0x396;eip=0x00470d; 	R(RETF(0));	// 12593 retf ;~ 0396:470D
sub_1664e:
	// 12601 
#undef arg_0
#define arg_0 6
	// 12604 arg_0           = word ptr  6 ;~ 0396:470E
ret_396_470e:
	// 5056 
cs=0x396;eip=0x00470e; 	X(PUSH(bp));	// 12606 push    bp ;~ 0396:470E
cs=0x396;eip=0x00470f; 	T(MOV(bp, sp));	// 12607 mov     bp, sp ;~ 0396:470F
cs=0x396;eip=0x004711; 	T(SUB(sp, 2));	// 12608 sub     sp, 2 ;~ 0396:4711
cs=0x396;eip=0x004714; 	T(MOV(ax, 1));	// 12609 mov     ax, 1 ;~ 0396:4714
cs=0x396;eip=0x004717; 	X(MOV(word_2beda, ax));	// 12610 mov     word_2BEDA, ax ;~ 0396:4717
cs=0x396;eip=0x00471a; 	X(PUSH(ax));	// 12611 push    ax ;~ 0396:471A
cs=0x396;eip=0x00471b; 	R(CALLF(sub_2714e,0));	// 12612 call    far ptr sub_2714E ;~ 0396:471B
cs=0x396;eip=0x004720; 	T(ADD(sp, 2));	// 12613 add     sp, 2 ;~ 0396:4720
cs=0x396;eip=0x004723; 	T(SUB(ax, ax));	// 12614 sub     ax, ax ;~ 0396:4723
cs=0x396;eip=0x004725; 	X(PUSH(ax));	// 12615 push    ax ;~ 0396:4725
cs=0x396;eip=0x004726; 	R(CALLF(sub_27031,0));	// 12616 call    far ptr sub_27031 ;~ 0396:4726
cs=0x396;eip=0x00472b; 	T(ADD(sp, 2));	// 12617 add     sp, 2 ;~ 0396:472B
cs=0x396;eip=0x00472e; 	T(MOV(ax, 0x0C7));	// 12618 mov     ax, 0C7h ; '«' ;~ 0396:472E
cs=0x396;eip=0x004731; 	X(PUSH(ax));	// 12619 push    ax ;~ 0396:4731
cs=0x396;eip=0x004732; 	T(MOV(ax, 0x0BE));	// 12620 mov     ax, 0BEh ; 'æ' ;~ 0396:4732
cs=0x396;eip=0x004735; 	X(PUSH(ax));	// 12621 push    ax ;~ 0396:4735
cs=0x396;eip=0x004736; 	T(MOV(ax, 0x13F));	// 12622 mov     ax, 13Fh ;~ 0396:4736
cs=0x396;eip=0x004739; 	X(PUSH(ax));	// 12623 push    ax ;~ 0396:4739
cs=0x396;eip=0x00473a; 	T(SUB(ax, ax));	// 12624 sub     ax, ax ;~ 0396:473A
cs=0x396;eip=0x00473c; 	X(PUSH(ax));	// 12625 push    ax ;~ 0396:473C
cs=0x396;eip=0x00473d; 	R(CALLF(sub_2785b,0));	// 12626 call    far ptr sub_2785B ;~ 0396:473D
cs=0x396;eip=0x004742; 	T(ADD(sp, 8));	// 12627 add     sp, 8 ;~ 0396:4742
cs=0x396;eip=0x004745; 	T(MOV(ax, 7));	// 12628 mov     ax, 7 ;~ 0396:4745
cs=0x396;eip=0x004748; 	X(PUSH(ax));	// 12629 push    ax ;~ 0396:4748
cs=0x396;eip=0x004749; 	R(CALLF(sub_27031,0));	// 12630 call    far ptr sub_27031 ;~ 0396:4749
cs=0x396;eip=0x00474e; 	T(ADD(sp, 2));	// 12631 add     sp, 2 ;~ 0396:474E
cs=0x396;eip=0x004751; 	T(MOV(ax, 0x0BD));	// 12632 mov     ax, 0BDh ; 'Ω' ;~ 0396:4751
cs=0x396;eip=0x004754; 	X(PUSH(ax));	// 12633 push    ax ;~ 0396:4754
cs=0x396;eip=0x004755; 	T(MOV(ax, 0x4B));	// 12634 mov     ax, 4Bh ; 'K' ;~ 0396:4755
cs=0x396;eip=0x004758; 	X(PUSH(ax));	// 12635 push    ax ;~ 0396:4758
cs=0x396;eip=0x004759; 	T(MOV(ax, 0x13F));	// 12636 mov     ax, 13Fh ;~ 0396:4759
cs=0x396;eip=0x00475c; 	X(PUSH(ax));	// 12637 push    ax ;~ 0396:475C
cs=0x396;eip=0x00475d; 	T(SUB(ax, ax));	// 12638 sub     ax, ax ;~ 0396:475D
cs=0x396;eip=0x00475f; 	X(PUSH(ax));	// 12639 push    ax ;~ 0396:475F
cs=0x396;eip=0x004760; 	R(CALLF(sub_2785b,0));	// 12640 call    far ptr sub_2785B ;~ 0396:4760
cs=0x396;eip=0x004765; 	T(ADD(sp, 8));	// 12641 add     sp, 8 ;~ 0396:4765
cs=0x396;eip=0x004768; 	T(MOV(ax, 0x0F));	// 12642 mov     ax, 0Fh ;~ 0396:4768
cs=0x396;eip=0x00476b; 	X(PUSH(ax));	// 12643 push    ax ;~ 0396:476B
cs=0x396;eip=0x00476c; 	R(CALLF(sub_27031,0));	// 12644 call    far ptr sub_27031 ;~ 0396:476C
cs=0x396;eip=0x004771; 	T(ADD(sp, 2));	// 12645 add     sp, 2 ;~ 0396:4771
cs=0x396;eip=0x004774; 	T(MOV(ax, 0x0BC));	// 12646 mov     ax, 0BCh ; 'º' ;~ 0396:4774
cs=0x396;eip=0x004777; 	X(PUSH(ax));	// 12647 push    ax ;~ 0396:4777
cs=0x396;eip=0x004778; 	T(SUB(ax, ax));	// 12648 sub     ax, ax ;~ 0396:4778
cs=0x396;eip=0x00477a; 	X(PUSH(ax));	// 12649 push    ax ;~ 0396:477A
cs=0x396;eip=0x00477b; 	R(CALLF(sub_26fb8,0));	// 12650 call    sub_26FB8 ;~ 0396:477B
cs=0x396;eip=0x004780; 	T(ADD(sp, 4));	// 12651 add     sp, 4 ;~ 0396:4780
cs=0x396;eip=0x004783; 	T(MOV(ax, 0x4B));	// 12652 mov     ax, 4Bh ; 'K' ;~ 0396:4783
cs=0x396;eip=0x004786; 	X(PUSH(ax));	// 12653 push    ax ;~ 0396:4786
cs=0x396;eip=0x004787; 	T(SUB(ax, ax));	// 12654 sub     ax, ax ;~ 0396:4787
cs=0x396;eip=0x004789; 	X(PUSH(ax));	// 12655 push    ax ;~ 0396:4789
cs=0x396;eip=0x00478a; 	R(CALLF(sub_26d92,0));	// 12656 call    sub_26D92 ;~ 0396:478A
cs=0x396;eip=0x00478f; 	T(ADD(sp, 4));	// 12657 add     sp, 4 ;~ 0396:478F
cs=0x396;eip=0x004792; 	T(MOV(ax, 0x4B));	// 12658 mov     ax, 4Bh ; 'K' ;~ 0396:4792
cs=0x396;eip=0x004795; 	X(PUSH(ax));	// 12659 push    ax ;~ 0396:4795
cs=0x396;eip=0x004796; 	T(MOV(ax, 0x13E));	// 12660 mov     ax, 13Eh ;~ 0396:4796
cs=0x396;eip=0x004799; 	X(PUSH(ax));	// 12661 push    ax ;~ 0396:4799
cs=0x396;eip=0x00479a; 	R(CALLF(sub_26d92,0));	// 12662 call    sub_26D92 ;~ 0396:479A
cs=0x396;eip=0x00479f; 	T(ADD(sp, 4));	// 12663 add     sp, 4 ;~ 0396:479F
cs=0x396;eip=0x0047a2; 	T(MOV(ax, 0x4B));	// 12664 mov     ax, 4Bh ; 'K' ;~ 0396:47A2
cs=0x396;eip=0x0047a5; 	X(PUSH(ax));	// 12665 push    ax ;~ 0396:47A5
cs=0x396;eip=0x0047a6; 	T(MOV(ax, 0x13E));	// 12666 mov     ax, 13Eh ;~ 0396:47A6
cs=0x396;eip=0x0047a9; 	X(PUSH(ax));	// 12667 push    ax ;~ 0396:47A9
cs=0x396;eip=0x0047aa; 	R(CALLF(sub_26fb8,0));	// 12668 call    sub_26FB8 ;~ 0396:47AA
cs=0x396;eip=0x0047af; 	T(ADD(sp, 4));	// 12669 add     sp, 4 ;~ 0396:47AF
cs=0x396;eip=0x0047b2; 	T(MOV(ax, 0x0BC));	// 12670 mov     ax, 0BCh ; 'º' ;~ 0396:47B2
cs=0x396;eip=0x0047b5; 	X(PUSH(ax));	// 12671 push    ax ;~ 0396:47B5
cs=0x396;eip=0x0047b6; 	T(MOV(ax, 0x13E));	// 12672 mov     ax, 13Eh ;~ 0396:47B6
cs=0x396;eip=0x0047b9; 	X(PUSH(ax));	// 12673 push    ax ;~ 0396:47B9
cs=0x396;eip=0x0047ba; 	R(CALLF(sub_26d92,0));	// 12674 call    sub_26D92 ;~ 0396:47BA
cs=0x396;eip=0x0047bf; 	T(ADD(sp, 4));	// 12675 add     sp, 4 ;~ 0396:47BF
cs=0x396;eip=0x0047c2; 	T(MOV(ax, 0x0BC));	// 12676 mov     ax, 0BCh ; 'º' ;~ 0396:47C2
cs=0x396;eip=0x0047c5; 	X(PUSH(ax));	// 12677 push    ax ;~ 0396:47C5
cs=0x396;eip=0x0047c6; 	T(SUB(ax, ax));	// 12678 sub     ax, ax ;~ 0396:47C6
cs=0x396;eip=0x0047c8; 	X(PUSH(ax));	// 12679 push    ax ;~ 0396:47C8
cs=0x396;eip=0x0047c9; 	R(CALLF(sub_26d92,0));	// 12680 call    sub_26D92 ;~ 0396:47C9
cs=0x396;eip=0x0047ce; 	T(ADD(sp, 4));	// 12681 add     sp, 4 ;~ 0396:47CE
cs=0x396;eip=0x0047d1; 	T(MOV(ax, 8));	// 12682 mov     ax, 8 ;~ 0396:47D1
cs=0x396;eip=0x0047d4; 	X(PUSH(ax));	// 12683 push    ax ;~ 0396:47D4
cs=0x396;eip=0x0047d5; 	R(CALLF(sub_27031,0));	// 12684 call    far ptr sub_27031 ;~ 0396:47D5
cs=0x396;eip=0x0047da; 	T(ADD(sp, 2));	// 12685 add     sp, 2 ;~ 0396:47DA
cs=0x396;eip=0x0047dd; 	T(MOV(ax, 0x0BB));	// 12686 mov     ax, 0BBh ; 'ª' ;~ 0396:47DD
cs=0x396;eip=0x0047e0; 	X(PUSH(ax));	// 12687 push    ax ;~ 0396:47E0
cs=0x396;eip=0x0047e1; 	T(MOV(ax, 0x4D));	// 12688 mov     ax, 4Dh ; 'M' ;~ 0396:47E1
cs=0x396;eip=0x0047e4; 	X(PUSH(ax));	// 12689 push    ax ;~ 0396:47E4
cs=0x396;eip=0x0047e5; 	T(MOV(ax, 0x13D));	// 12690 mov     ax, 13Dh ;~ 0396:47E5
cs=0x396;eip=0x0047e8; 	X(PUSH(ax));	// 12691 push    ax ;~ 0396:47E8
cs=0x396;eip=0x0047e9; 	T(MOV(ax, 2));	// 12692 mov     ax, 2 ;~ 0396:47E9
cs=0x396;eip=0x0047ec; 	X(PUSH(ax));	// 12693 push    ax ;~ 0396:47EC
cs=0x396;eip=0x0047ed; 	X(PUSH(cs));	// 12694 push    cs ;~ 0396:47ED
cs=0x396;eip=0x0047ee; 	R(CALL(sub_137a4,0));	// 12695 call    near ptr sub_137A4 ;~ 0396:47EE
cs=0x396;eip=0x0047f1; 	T(ADD(sp, 8));	// 12696 add     sp, 8 ;~ 0396:47F1
cs=0x396;eip=0x0047f4; 	T(CMP(byte_352f8, 0));	// 12697 cmp     byte_352F8, 0 ;~ 0396:47F4
cs=0x396;eip=0x0047f9; 	R(JZ(loc_16740));	// 12698 jz      short loc_16740 ;~ 0396:47F9
cs=0x396;eip=0x0047fb; 	T(MOV(ax, 0x10FC));	// 12699 mov     ax, 10FCh ;~ 0396:47FB
cs=0x396;eip=0x0047fe; 	R(JMP(loc_16743));	// 12700 jmp     short loc_16743 ;~ 0396:47FE
loc_16740:
	// 5057 
cs=0x396;eip=0x004800; 	T(MOV(ax, 0x1107));	// 12704 mov     ax, 1107h ;~ 0396:4800
loc_16743:
	// 5058 
cs=0x396;eip=0x004803; 	X(PUSH(ax));	// 12707 push    ax ;~ 0396:4803
cs=0x396;eip=0x004804; 	T(MOV(ax, 0x0A8C));	// 12708 mov     ax, 0A8Ch ;~ 0396:4804
cs=0x396;eip=0x004807; 	X(PUSH(ax));	// 12709 push    ax ;~ 0396:4807
cs=0x396;eip=0x004808; 	R(CALLF(sub_29b46,0));	// 12710 call    sub_29B46 ;~ 0396:4808
cs=0x396;eip=0x00480d; 	T(ADD(sp, 4));	// 12711 add     sp, 4 ;~ 0396:480D
cs=0x396;eip=0x004810; 	X(PUSH(word_38a9e));	// 12712 push    word_38A9E ;~ 0396:4810
cs=0x396;eip=0x004814; 	X(PUSH(word_38a9c));	// 12713 push    word_38A9C ;~ 0396:4814
cs=0x396;eip=0x004818; 	T(MOV(ax, 0x0A8A));	// 12714 mov     ax, 0A8Ah ;~ 0396:4818
cs=0x396;eip=0x00481b; 	X(PUSH(ax));	// 12715 push    ax ;~ 0396:481B
cs=0x396;eip=0x00481c; 	R(CALLF(sub_10ee0,0));	// 12716 call    sub_10EE0 ;~ 0396:481C
cs=0x396;eip=0x004821; 	T(ADD(sp, 6));	// 12717 add     sp, 6 ;~ 0396:4821
cs=0x396;eip=0x004824; 	T(MOV(ax, 0x2500));	// 12718 mov     ax, 2500h ;~ 0396:4824
cs=0x396;eip=0x004827; 	X(PUSH(ds));	// 12719 push    ds ;~ 0396:4827
cs=0x396;eip=0x004828; 	X(PUSH(ax));	// 12720 push    ax ;~ 0396:4828
cs=0x396;eip=0x004829; 	X(PUSH(word_38a9e));	// 12721 push    word_38A9E ;~ 0396:4829
cs=0x396;eip=0x00482d; 	X(PUSH(word_38a9c));	// 12722 push    word_38A9C ;~ 0396:482D
cs=0x396;eip=0x004831; 	R(CALLF(sub_1ab87,0));	// 12723 call    sub_1AB87 ;~ 0396:4831
cs=0x396;eip=0x004836; 	T(ADD(sp, 8));	// 12724 add     sp, 8 ;~ 0396:4836
cs=0x396;eip=0x004839; 	T(CMP(byte_352f8, 0));	// 12725 cmp     byte_352F8, 0 ;~ 0396:4839
cs=0x396;eip=0x00483e; 	R(JZ(loc_16794));	// 12726 jz      short loc_16794 ;~ 0396:483E
cs=0x396;eip=0x004840; 	T(SUB(ax, ax));	// 12727 sub     ax, ax ;~ 0396:4840
cs=0x396;eip=0x004842; 	X(PUSH(ax));	// 12728 push    ax ;~ 0396:4842
cs=0x396;eip=0x004843; 	T(MOV(ax, 0x65));	// 12729 mov     ax, 65h ; 'e' ;~ 0396:4843
cs=0x396;eip=0x004846; 	X(PUSH(ax));	// 12730 push    ax ;~ 0396:4846
cs=0x396;eip=0x004847; 	T(MOV(ax, 0x72));	// 12731 mov     ax, 72h ; 'r' ;~ 0396:4847
cs=0x396;eip=0x00484a; 	X(PUSH(ax));	// 12732 push    ax ;~ 0396:484A
cs=0x396;eip=0x00484b; 	T(MOV(ax, 0x0B8));	// 12733 mov     ax, 0B8h ; '∏' ;~ 0396:484B
cs=0x396;eip=0x00484e; 	X(PUSH(ax));	// 12734 push    ax ;~ 0396:484E
cs=0x396;eip=0x00484f; 	T(MOV(ax, 0x161));	// 12735 mov     ax, 161h ;~ 0396:484F
cs=0x396;eip=0x004852; 	R(JMP(loc_167a6));	// 12736 jmp     short loc_167A6 ;~ 0396:4852
loc_16794:
	// 5059 
cs=0x396;eip=0x004854; 	T(SUB(ax, ax));	// 12740 sub     ax, ax ;~ 0396:4854
cs=0x396;eip=0x004856; 	X(PUSH(ax));	// 12741 push    ax ;~ 0396:4856
cs=0x396;eip=0x004857; 	T(MOV(ax, 0x65));	// 12742 mov     ax, 65h ; 'e' ;~ 0396:4857
cs=0x396;eip=0x00485a; 	X(PUSH(ax));	// 12743 push    ax ;~ 0396:485A
cs=0x396;eip=0x00485b; 	T(MOV(ax, 0x72));	// 12744 mov     ax, 72h ; 'r' ;~ 0396:485B
cs=0x396;eip=0x00485e; 	X(PUSH(ax));	// 12745 push    ax ;~ 0396:485E
cs=0x396;eip=0x00485f; 	T(MOV(ax, 0x0B8));	// 12746 mov     ax, 0B8h ; '∏' ;~ 0396:485F
cs=0x396;eip=0x004862; 	X(PUSH(ax));	// 12747 push    ax ;~ 0396:4862
cs=0x396;eip=0x004863; 	T(MOV(ax, 0x15D));	// 12748 mov     ax, 15Dh ;~ 0396:4863
loc_167a6:
	// 5060 
cs=0x396;eip=0x004866; 	X(PUSH(ax));	// 12751 push    ax ;~ 0396:4866
cs=0x396;eip=0x004867; 	T(MOV(ax, 0x2500));	// 12752 mov     ax, 2500h ;~ 0396:4867
cs=0x396;eip=0x00486a; 	X(PUSH(ax));	// 12753 push    ax ;~ 0396:486A
cs=0x396;eip=0x00486b; 	X(PUSH(cs));	// 12754 push    cs ;~ 0396:486B
cs=0x396;eip=0x00486c; 	R(CALL(sub_178ec,0));	// 12755 call    near ptr sub_178EC ;~ 0396:486C
cs=0x396;eip=0x00486f; 	T(ADD(sp, 0x0C));	// 12756 add     sp, 0Ch ;~ 0396:486F
cs=0x396;eip=0x004872; 	T(MOV(ax, 4));	// 12757 mov     ax, 4 ;~ 0396:4872
cs=0x396;eip=0x004875; 	X(PUSH(ax));	// 12758 push    ax ;~ 0396:4875
cs=0x396;eip=0x004876; 	R(CALLF(sub_27031,0));	// 12759 call    far ptr sub_27031 ;~ 0396:4876
cs=0x396;eip=0x00487b; 	T(ADD(sp, 2));	// 12760 add     sp, 2 ;~ 0396:487B
cs=0x396;eip=0x00487e; 	T(MOV(ax, 0x5A));	// 12761 mov     ax, 5Ah ; 'Z' ;~ 0396:487E
cs=0x396;eip=0x004881; 	X(PUSH(ax));	// 12762 push    ax ;~ 0396:4881
cs=0x396;eip=0x004882; 	T(MOV(ax, 0x13C));	// 12763 mov     ax, 13Ch ;~ 0396:4882
cs=0x396;eip=0x004885; 	X(PUSH(ax));	// 12764 push    ax ;~ 0396:4885
cs=0x396;eip=0x004886; 	R(CALLF(sub_26fb8,0));	// 12765 call    sub_26FB8 ;~ 0396:4886
cs=0x396;eip=0x00488b; 	T(ADD(sp, 4));	// 12766 add     sp, 4 ;~ 0396:488B
cs=0x396;eip=0x00488e; 	T(MOV(ax, 0x5A));	// 12767 mov     ax, 5Ah ; 'Z' ;~ 0396:488E
cs=0x396;eip=0x004891; 	X(PUSH(ax));	// 12768 push    ax ;~ 0396:4891
cs=0x396;eip=0x004892; 	T(MOV(ax, 3));	// 12769 mov     ax, 3 ;~ 0396:4892
cs=0x396;eip=0x004895; 	X(PUSH(ax));	// 12770 push    ax ;~ 0396:4895
cs=0x396;eip=0x004896; 	R(CALLF(sub_26d92,0));	// 12771 call    sub_26D92 ;~ 0396:4896
cs=0x396;eip=0x00489b; 	T(ADD(sp, 4));	// 12772 add     sp, 4 ;~ 0396:489B
cs=0x396;eip=0x00489e; 	T(MOV(ax, 0x0BA));	// 12773 mov     ax, 0BAh ; '∫' ;~ 0396:489E
cs=0x396;eip=0x0048a1; 	X(PUSH(ax));	// 12774 push    ax ;~ 0396:48A1
cs=0x396;eip=0x0048a2; 	T(MOV(ax, 0x4E));	// 12775 mov     ax, 4Eh ; 'N' ;~ 0396:48A2
cs=0x396;eip=0x0048a5; 	X(PUSH(ax));	// 12776 push    ax ;~ 0396:48A5
cs=0x396;eip=0x0048a6; 	T(MOV(ax, 0x13C));	// 12777 mov     ax, 13Ch ;~ 0396:48A6
cs=0x396;eip=0x0048a9; 	X(PUSH(ax));	// 12778 push    ax ;~ 0396:48A9
cs=0x396;eip=0x0048aa; 	T(MOV(ax, 3));	// 12779 mov     ax, 3 ;~ 0396:48AA
cs=0x396;eip=0x0048ad; 	X(PUSH(ax));	// 12780 push    ax ;~ 0396:48AD
cs=0x396;eip=0x0048ae; 	X(PUSH(cs));	// 12781 push    cs ;~ 0396:48AE
cs=0x396;eip=0x0048af; 	R(CALL(sub_137a4,0));	// 12782 call    near ptr sub_137A4 ;~ 0396:48AF
cs=0x396;eip=0x0048b2; 	T(ADD(sp, 8));	// 12783 add     sp, 8 ;~ 0396:48B2
cs=0x396;eip=0x0048b5; 	T(MOV(ax, 0x4E));	// 12784 mov     ax, 4Eh ; 'N' ;~ 0396:48B5
cs=0x396;eip=0x0048b8; 	X(PUSH(ax));	// 12785 push    ax ;~ 0396:48B8
cs=0x396;eip=0x0048b9; 	T(MOV(ax, 0x0D0));	// 12786 mov     ax, 0D0h ; '–' ;~ 0396:48B9
cs=0x396;eip=0x0048bc; 	X(PUSH(ax));	// 12787 push    ax ;~ 0396:48BC
cs=0x396;eip=0x0048bd; 	R(CALLF(sub_26fb8,0));	// 12788 call    sub_26FB8 ;~ 0396:48BD
cs=0x396;eip=0x0048c2; 	T(ADD(sp, 4));	// 12789 add     sp, 4 ;~ 0396:48C2
cs=0x396;eip=0x0048c5; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 1));	// 12790 cmp     [bp+arg_0], 1 ;~ 0396:48C5
cs=0x396;eip=0x0048c9; 	R(JNZ(loc_16814));	// 12791 jnz     short loc_16814 ;~ 0396:48C9
cs=0x396;eip=0x0048cb; 	T(MOV(ax, 0x0BA));	// 12792 mov     ax, 0BAh ; '∫' ;~ 0396:48CB
cs=0x396;eip=0x0048ce; 	X(PUSH(ax));	// 12793 push    ax ;~ 0396:48CE
cs=0x396;eip=0x0048cf; 	T(MOV(ax, 0x0D0));	// 12794 mov     ax, 0D0h ; '–' ;~ 0396:48CF
cs=0x396;eip=0x0048d2; 	R(JMP(loc_1687b));	// 12795 jmp     short loc_1687B ;~ 0396:48D2
loc_16814:
	// 5061 
cs=0x396;eip=0x0048d4; 	T(MOV(ax, 0x0AC));	// 12799 mov     ax, 0ACh ; '¨' ;~ 0396:48D4
cs=0x396;eip=0x0048d7; 	X(PUSH(ax));	// 12800 push    ax ;~ 0396:48D7
cs=0x396;eip=0x0048d8; 	T(MOV(ax, 0x0D0));	// 12801 mov     ax, 0D0h ; '–' ;~ 0396:48D8
cs=0x396;eip=0x0048db; 	X(PUSH(ax));	// 12802 push    ax ;~ 0396:48DB
cs=0x396;eip=0x0048dc; 	R(CALLF(sub_26d92,0));	// 12803 call    sub_26D92 ;~ 0396:48DC
cs=0x396;eip=0x0048e1; 	T(ADD(sp, 4));	// 12804 add     sp, 4 ;~ 0396:48E1
cs=0x396;eip=0x0048e4; 	T(MOV(ax, 0x0AC));	// 12805 mov     ax, 0ACh ; '¨' ;~ 0396:48E4
cs=0x396;eip=0x0048e7; 	X(PUSH(ax));	// 12806 push    ax ;~ 0396:48E7
cs=0x396;eip=0x0048e8; 	T(MOV(ax, 3));	// 12807 mov     ax, 3 ;~ 0396:48E8
cs=0x396;eip=0x0048eb; 	X(PUSH(ax));	// 12808 push    ax ;~ 0396:48EB
cs=0x396;eip=0x0048ec; 	R(CALLF(sub_26fb8,0));	// 12809 call    sub_26FB8 ;~ 0396:48EC
cs=0x396;eip=0x0048f1; 	T(ADD(sp, 4));	// 12810 add     sp, 4 ;~ 0396:48F1
cs=0x396;eip=0x0048f4; 	T(MOV(ax, 0x0AC));	// 12811 mov     ax, 0ACh ; '¨' ;~ 0396:48F4
cs=0x396;eip=0x0048f7; 	X(PUSH(ax));	// 12812 push    ax ;~ 0396:48F7
cs=0x396;eip=0x0048f8; 	T(MOV(ax, 0x13C));	// 12813 mov     ax, 13Ch ;~ 0396:48F8
cs=0x396;eip=0x0048fb; 	X(PUSH(ax));	// 12814 push    ax ;~ 0396:48FB
cs=0x396;eip=0x0048fc; 	R(CALLF(sub_26d92,0));	// 12815 call    sub_26D92 ;~ 0396:48FC
cs=0x396;eip=0x004901; 	T(ADD(sp, 4));	// 12816 add     sp, 4 ;~ 0396:4901
cs=0x396;eip=0x004904; 	T(MOV(ax, 0x5A));	// 12817 mov     ax, 5Ah ; 'Z' ;~ 0396:4904
cs=0x396;eip=0x004907; 	X(PUSH(ax));	// 12818 push    ax ;~ 0396:4907
cs=0x396;eip=0x004908; 	T(MOV(ax, 0x0FA));	// 12819 mov     ax, 0FAh ; '˙' ;~ 0396:4908
cs=0x396;eip=0x00490b; 	X(PUSH(ax));	// 12820 push    ax ;~ 0396:490B
cs=0x396;eip=0x00490c; 	R(CALLF(sub_26fb8,0));	// 12821 call    sub_26FB8 ;~ 0396:490C
cs=0x396;eip=0x004911; 	T(ADD(sp, 4));	// 12822 add     sp, 4 ;~ 0396:4911
cs=0x396;eip=0x004914; 	T(MOV(ax, 0x0AC));	// 12823 mov     ax, 0ACh ; '¨' ;~ 0396:4914
cs=0x396;eip=0x004917; 	X(PUSH(ax));	// 12824 push    ax ;~ 0396:4917
cs=0x396;eip=0x004918; 	T(MOV(ax, 0x0FA));	// 12825 mov     ax, 0FAh ; '˙' ;~ 0396:4918
cs=0x396;eip=0x00491b; 	X(PUSH(ax));	// 12826 push    ax ;~ 0396:491B
cs=0x396;eip=0x00491c; 	R(CALLF(sub_26d92,0));	// 12827 call    sub_26D92 ;~ 0396:491C
cs=0x396;eip=0x004921; 	T(ADD(sp, 4));	// 12828 add     sp, 4 ;~ 0396:4921
cs=0x396;eip=0x004924; 	T(MOV(ax, 0x5A));	// 12829 mov     ax, 5Ah ; 'Z' ;~ 0396:4924
cs=0x396;eip=0x004927; 	X(PUSH(ax));	// 12830 push    ax ;~ 0396:4927
cs=0x396;eip=0x004928; 	T(MOV(ax, 0x10D));	// 12831 mov     ax, 10Dh ;~ 0396:4928
cs=0x396;eip=0x00492b; 	X(PUSH(ax));	// 12832 push    ax ;~ 0396:492B
cs=0x396;eip=0x00492c; 	R(CALLF(sub_26fb8,0));	// 12833 call    sub_26FB8 ;~ 0396:492C
cs=0x396;eip=0x004931; 	T(ADD(sp, 4));	// 12834 add     sp, 4 ;~ 0396:4931
cs=0x396;eip=0x004934; 	T(MOV(ax, 0x0AC));	// 12835 mov     ax, 0ACh ; '¨' ;~ 0396:4934
cs=0x396;eip=0x004937; 	X(PUSH(ax));	// 12836 push    ax ;~ 0396:4937
cs=0x396;eip=0x004938; 	T(MOV(ax, 0x10D));	// 12837 mov     ax, 10Dh ;~ 0396:4938
loc_1687b:
	// 5062 
cs=0x396;eip=0x00493b; 	X(PUSH(ax));	// 12840 push    ax ;~ 0396:493B
cs=0x396;eip=0x00493c; 	R(CALLF(sub_26d92,0));	// 12841 call    sub_26D92 ;~ 0396:493C
cs=0x396;eip=0x004941; 	T(ADD(sp, 4));	// 12842 add     sp, 4 ;~ 0396:4941
cs=0x396;eip=0x004944; 	T(SUB(ax, ax));	// 12843 sub     ax, ax ;~ 0396:4944
cs=0x396;eip=0x004946; 	X(PUSH(ax));	// 12844 push    ax ;~ 0396:4946
cs=0x396;eip=0x004947; 	T(MOV(ax, 0x0F));	// 12845 mov     ax, 0Fh ;~ 0396:4947
cs=0x396;eip=0x00494a; 	X(PUSH(ax));	// 12846 push    ax ;~ 0396:494A
cs=0x396;eip=0x00494b; 	R(CALLF(sub_1c8f3,0));	// 12847 call    sub_1C8F3 ;~ 0396:494B
cs=0x396;eip=0x004950; 	T(MOV(sp, bp));	// 12848 mov     sp, bp ;~ 0396:4950
cs=0x396;eip=0x004952; 	X(POP(bp));	// 12849 pop     bp ;~ 0396:4952
cs=0x396;eip=0x004953; 	R(RETF(0));	// 12850 retf ;~ 0396:4953
sub_16894:
	// 12858 
#undef var_12
#define var_12 -0x12
	// 12860 var_12          = word ptr -12h ;~ 0396:4954
#undef var_e
#define var_e -0x0E
	// 12861 var_E           = word ptr -0Eh ;~ 0396:4954
#undef var_c
#define var_c -0x0C
	// 12862 var_C           = byte ptr -0Ch ;~ 0396:4954
#undef var_a
#define var_a -0x0A
	// 12863 var_A           = byte ptr -0Ah ;~ 0396:4954
ret_396_4954:
	// 5063 
cs=0x396;eip=0x004954; 	X(PUSH(bp));	// 12865 push    bp ;~ 0396:4954
cs=0x396;eip=0x004955; 	T(MOV(bp, sp));	// 12866 mov     bp, sp ;~ 0396:4955
cs=0x396;eip=0x004957; 	T(SUB(sp, 0x12));	// 12867 sub     sp, 12h ;~ 0396:4957
cs=0x396;eip=0x00495a; 	X(PUSH(si));	// 12868 push    si ;~ 0396:495A
cs=0x396;eip=0x00495b; 	X(PUSH(cs));	// 12869 push    cs ;~ 0396:495B
cs=0x396;eip=0x00495c; 	R(CALL(sub_14752,0));	// 12870 call    near ptr sub_14752 ;~ 0396:495C
cs=0x396;eip=0x00495f; 	T(SUB(al, al));	// 12871 sub     al, al ;~ 0396:495F
cs=0x396;eip=0x004961; 	X(MOV(byte_2bedf, al));	// 12872 mov     byte_2BEDF, al ;~ 0396:4961
cs=0x396;eip=0x004964; 	X(MOV(byte_2becc, al));	// 12873 mov     byte_2BECC, al ;~ 0396:4964
cs=0x396;eip=0x004967; 	T(MOV(ax, 1));	// 12874 mov     ax, 1 ;~ 0396:4967
cs=0x396;eip=0x00496a; 	X(MOV(word_2beda, ax));	// 12875 mov     word_2BEDA, ax ;~ 0396:496A
cs=0x396;eip=0x00496d; 	X(PUSH(ax));	// 12876 push    ax ;~ 0396:496D
cs=0x396;eip=0x00496e; 	R(CALLF(sub_2714e,0));	// 12877 call    far ptr sub_2714E ;~ 0396:496E
cs=0x396;eip=0x004973; 	T(ADD(sp, 2));	// 12878 add     sp, 2 ;~ 0396:4973
cs=0x396;eip=0x004976; 	T(SUB(ax, ax));	// 12879 sub     ax, ax ;~ 0396:4976
cs=0x396;eip=0x004978; 	X(PUSH(ax));	// 12880 push    ax ;~ 0396:4978
cs=0x396;eip=0x004979; 	X(PUSH(cs));	// 12881 push    cs ;~ 0396:4979
cs=0x396;eip=0x00497a; 	R(CALL(sub_1664e,0));	// 12882 call    near ptr sub_1664E ;~ 0396:497A
cs=0x396;eip=0x00497d; 	T(ADD(sp, 2));	// 12883 add     sp, 2 ;~ 0396:497D
cs=0x396;eip=0x004980; 	T(SUB(ax, ax));	// 12884 sub     ax, ax ;~ 0396:4980
cs=0x396;eip=0x004982; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 12885 mov     [bp+var_E], ax ;~ 0396:4982
cs=0x396;eip=0x004985; 	X(PUSH(ax));	// 12886 push    ax ;~ 0396:4985
cs=0x396;eip=0x004986; 	T(MOV(ax, 0x230C));	// 12887 mov     ax, 230Ch ;~ 0396:4986
cs=0x396;eip=0x004989; 	X(PUSH(ax));	// 12888 push    ax ;~ 0396:4989
cs=0x396;eip=0x00498a; 	X(PUSH(cs));	// 12889 push    cs ;~ 0396:498A
cs=0x396;eip=0x00498b; 	R(CALL(sub_139c2,0));	// 12890 call    near ptr sub_139C2 ;~ 0396:498B
cs=0x396;eip=0x00498e; 	T(ADD(sp, 4));	// 12891 add     sp, 4 ;~ 0396:498E
cs=0x396;eip=0x004991; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 12892 mov     [bp+var_E], ax ;~ 0396:4991
cs=0x396;eip=0x004994; 	T(CMP(byte_2c81e, 0));	// 12893 cmp     byte_2C81E, 0 ;~ 0396:4994
cs=0x396;eip=0x004999; 	R(JZ(loc_16922));	// 12894 jz      short loc_16922 ;~ 0396:4999
cs=0x396;eip=0x00499b; 	T(MOV(al, byte_2c94a));	// 12895 mov     al, byte_2C94A ;~ 0396:499B
cs=0x396;eip=0x00499e; 	T(SUB(ah, ah));	// 12896 sub     ah, ah ;~ 0396:499E
cs=0x396;eip=0x0049a0; 	T(MOV(cx, ax));	// 12897 mov     cx, ax ;~ 0396:49A0
cs=0x396;eip=0x0049a2; 	T(SHL(ax, 1));	// 12898 shl     ax, 1 ;~ 0396:49A2
cs=0x396;eip=0x0049a4; 	T(ADD(ax, cx));	// 12899 add     ax, cx ;~ 0396:49A4
cs=0x396;eip=0x0049a6; 	T(MOV(cl, byte_2c8b4));	// 12900 mov     cl, byte_2C8B4 ;~ 0396:49A6
cs=0x396;eip=0x0049aa; 	T(SUB(ch, ch));	// 12901 sub     ch, ch ;~ 0396:49AA
cs=0x396;eip=0x0049ac; 	T(ADD(ax, cx));	// 12902 add     ax, cx ;~ 0396:49AC
cs=0x396;eip=0x0049ae; 	T(MOV(cl, 3));	// 12903 mov     cl, 3 ;~ 0396:49AE
cs=0x396;eip=0x0049b0; 	T(SHL(ax, cl));	// 12904 shl     ax, cl ;~ 0396:49B0
cs=0x396;eip=0x0049b2; 	T(ADD(ax, 0x205C));	// 12905 add     ax, 205Ch ;~ 0396:49B2
cs=0x396;eip=0x0049b5; 	X(PUSH(ax));	// 12906 push    ax ;~ 0396:49B5
cs=0x396;eip=0x0049b6; 	T(MOV(ax, 0x9C6));	// 12907 mov     ax, 9C6h ;~ 0396:49B6
cs=0x396;eip=0x0049b9; 	X(PUSH(ax));	// 12908 push    ax ;~ 0396:49B9
cs=0x396;eip=0x0049ba; 	X(PUSH(cs));	// 12909 push    cs ;~ 0396:49BA
cs=0x396;eip=0x0049bb; 	R(CALL(sub_17122,0));	// 12910 call    near ptr sub_17122 ;~ 0396:49BB
cs=0x396;eip=0x0049be; 	T(ADD(sp, 4));	// 12911 add     sp, 4 ;~ 0396:49BE
cs=0x396;eip=0x0049c1; 	X(MOV(*(raddr(ss,bp+var_a)), al));	// 12912 mov     [bp+var_A], al ;~ 0396:49C1
cs=0x396;eip=0x0049c4; 	T(MOV(al, byte_2c94a));	// 12913 mov     al, byte_2C94A ;~ 0396:49C4
cs=0x396;eip=0x0049c7; 	T(SUB(ah, ah));	// 12914 sub     ah, ah ;~ 0396:49C7
cs=0x396;eip=0x0049c9; 	T(MOV(cl, 3));	// 12915 mov     cl, 3 ;~ 0396:49C9
cs=0x396;eip=0x0049cb; 	T(SHL(ax, cl));	// 12916 shl     ax, cl ;~ 0396:49CB
cs=0x396;eip=0x0049cd; 	T(ADD(ax, 0x2134));	// 12917 add     ax, 2134h ;~ 0396:49CD
cs=0x396;eip=0x0049d0; 	X(PUSH(ax));	// 12918 push    ax ;~ 0396:49D0
cs=0x396;eip=0x0049d1; 	T(MOV(ax, 0x9D0));	// 12919 mov     ax, 9D0h ;~ 0396:49D1
cs=0x396;eip=0x0049d4; 	X(PUSH(ax));	// 12920 push    ax ;~ 0396:49D4
cs=0x396;eip=0x0049d5; 	X(PUSH(cs));	// 12921 push    cs ;~ 0396:49D5
cs=0x396;eip=0x0049d6; 	R(CALL(sub_17122,0));	// 12922 call    near ptr sub_17122 ;~ 0396:49D6
cs=0x396;eip=0x0049d9; 	T(ADD(sp, 4));	// 12923 add     sp, 4 ;~ 0396:49D9
cs=0x396;eip=0x0049dc; 	X(MOV(*(raddr(ss,bp+var_c)), al));	// 12924 mov     [bp+var_C], al ;~ 0396:49DC
cs=0x396;eip=0x0049df; 	R(JMP(loc_1692a));	// 12925 jmp     short loc_1692A ;~ 0396:49DF
loc_16922:
	// 5064 
cs=0x396;eip=0x0049e2; 	T(SUB(al, al));	// 12930 sub     al, al ;~ 0396:49E2
cs=0x396;eip=0x0049e4; 	X(MOV(*(raddr(ss,bp+var_c)), al));	// 12931 mov     [bp+var_C], al ;~ 0396:49E4
cs=0x396;eip=0x0049e7; 	X(MOV(*(raddr(ss,bp+var_a)), al));	// 12932 mov     [bp+var_A], al ;~ 0396:49E7
loc_1692a:
	// 5065 
cs=0x396;eip=0x0049ea; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 12935 mov     al, [bp+var_A] ;~ 0396:49EA
cs=0x396;eip=0x0049ed; 	T(SUB(ah, ah));	// 12936 sub     ah, ah ;~ 0396:49ED
cs=0x396;eip=0x0049ef; 	T(MOV(cl, *(raddr(ss,bp+var_c))));	// 12937 mov     cl, [bp+var_C] ;~ 0396:49EF
cs=0x396;eip=0x0049f2; 	T(SUB(ch, ch));	// 12938 sub     ch, ch ;~ 0396:49F2
cs=0x396;eip=0x0049f4; 	T(ADD(ax, cx));	// 12939 add     ax, cx ;~ 0396:49F4
cs=0x396;eip=0x0049f6; 	R(JZ(loc_1693c));	// 12940 jz      short loc_1693C ;~ 0396:49F6
cs=0x396;eip=0x0049f8; 	X(PUSH(cs));	// 12941 push    cs ;~ 0396:49F8
cs=0x396;eip=0x0049f9; 	R(CALL(sub_14da6,0));	// 12942 call    near ptr sub_14DA6 ;~ 0396:49F9
loc_1693c:
	// 5066 
cs=0x396;eip=0x0049fc; 	T(CMP(byte_2c948, 1));	// 12945 cmp     byte_2C948, 1 ;~ 0396:49FC
cs=0x396;eip=0x004a01; 	R(JZ(loc_1696e));	// 12946 jz      short loc_1696E ;~ 0396:4A01
cs=0x396;eip=0x004a03; 	T(MOV(ax, 7));	// 12947 mov     ax, 7 ;~ 0396:4A03
cs=0x396;eip=0x004a06; 	X(PUSH(ax));	// 12948 push    ax ;~ 0396:4A06
cs=0x396;eip=0x004a07; 	T(SUB(ax, ax));	// 12949 sub     ax, ax ;~ 0396:4A07
cs=0x396;eip=0x004a09; 	X(PUSH(ax));	// 12950 push    ax ;~ 0396:4A09
cs=0x396;eip=0x004a0a; 	R(CALLF(sub_1c8f3,0));	// 12951 call    sub_1C8F3 ;~ 0396:4A0A
cs=0x396;eip=0x004a0f; 	T(ADD(sp, 4));	// 12952 add     sp, 4 ;~ 0396:4A0F
cs=0x396;eip=0x004a12; 	T(MOV(al, byte_2c805));	// 12953 mov     al, byte_2C805 ;~ 0396:4A12
cs=0x396;eip=0x004a15; 	T(ADD(al, 0x30));	// 12954 add     al, 30h ; '0' ;~ 0396:4A15
cs=0x396;eip=0x004a17; 	X(MOV(byte_2e09a, al));	// 12955 mov     byte_2E09A, al ;~ 0396:4A17
cs=0x396;eip=0x004a1a; 	T(SUB(ax, ax));	// 12956 sub     ax, ax ;~ 0396:4A1A
cs=0x396;eip=0x004a1c; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 12957 mov     [bp+var_E], ax ;~ 0396:4A1C
cs=0x396;eip=0x004a1f; 	X(PUSH(ax));	// 12958 push    ax ;~ 0396:4A1F
cs=0x396;eip=0x004a20; 	T(MOV(ax, 0x2251));	// 12959 mov     ax, 2251h ;~ 0396:4A20
cs=0x396;eip=0x004a23; 	X(PUSH(ax));	// 12960 push    ax ;~ 0396:4A23
cs=0x396;eip=0x004a24; 	X(PUSH(cs));	// 12961 push    cs ;~ 0396:4A24
cs=0x396;eip=0x004a25; 	R(CALL(sub_139c2,0));	// 12962 call    near ptr sub_139C2 ;~ 0396:4A25
cs=0x396;eip=0x004a28; 	T(ADD(sp, 4));	// 12963 add     sp, 4 ;~ 0396:4A28
cs=0x396;eip=0x004a2b; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 12964 mov     [bp+var_E], ax ;~ 0396:4A2B
loc_1696e:
	// 5067 
cs=0x396;eip=0x004a2e; 	T(MOV(ax, 0x0AEA));	// 12967 mov     ax, 0AEAh ;~ 0396:4A2E
cs=0x396;eip=0x004a31; 	X(PUSH(ax));	// 12968 push    ax ;~ 0396:4A31
cs=0x396;eip=0x004a32; 	T(MOV(ax, 0x2378));	// 12969 mov     ax, 2378h ;~ 0396:4A32
cs=0x396;eip=0x004a35; 	X(PUSH(ax));	// 12970 push    ax ;~ 0396:4A35
cs=0x396;eip=0x004a36; 	R(CALLF(sub_29b46,0));	// 12971 call    sub_29B46 ;~ 0396:4A36
cs=0x396;eip=0x004a3b; 	T(ADD(sp, 4));	// 12972 add     sp, 4 ;~ 0396:4A3B
cs=0x396;eip=0x004a3e; 	X(MOV(byte_2e1ca, 0x20));	// 12973 mov     byte_2E1CA, 20h ; ' ' ;~ 0396:4A3E
cs=0x396;eip=0x004a43; 	T(SUB(ax, ax));	// 12974 sub     ax, ax ;~ 0396:4A43
cs=0x396;eip=0x004a45; 	X(PUSH(ax));	// 12975 push    ax ;~ 0396:4A45
cs=0x396;eip=0x004a46; 	T(MOV(ax, 0x0F));	// 12976 mov     ax, 0Fh ;~ 0396:4A46
cs=0x396;eip=0x004a49; 	X(PUSH(ax));	// 12977 push    ax ;~ 0396:4A49
cs=0x396;eip=0x004a4a; 	R(CALLF(sub_1c8f3,0));	// 12978 call    sub_1C8F3 ;~ 0396:4A4A
cs=0x396;eip=0x004a4f; 	T(ADD(sp, 4));	// 12979 add     sp, 4 ;~ 0396:4A4F
cs=0x396;eip=0x004a52; 	T(SUB(ax, ax));	// 12980 sub     ax, ax ;~ 0396:4A52
cs=0x396;eip=0x004a54; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 12981 mov     [bp+var_E], ax ;~ 0396:4A54
cs=0x396;eip=0x004a57; 	X(PUSH(ax));	// 12982 push    ax ;~ 0396:4A57
cs=0x396;eip=0x004a58; 	T(MOV(ax, 0x230C));	// 12983 mov     ax, 230Ch ;~ 0396:4A58
cs=0x396;eip=0x004a5b; 	X(PUSH(ax));	// 12984 push    ax ;~ 0396:4A5B
cs=0x396;eip=0x004a5c; 	X(PUSH(cs));	// 12985 push    cs ;~ 0396:4A5C
cs=0x396;eip=0x004a5d; 	R(CALL(sub_139c2,0));	// 12986 call    near ptr sub_139C2 ;~ 0396:4A5D
cs=0x396;eip=0x004a60; 	T(ADD(sp, 4));	// 12987 add     sp, 4 ;~ 0396:4A60
cs=0x396;eip=0x004a63; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 12988 mov     [bp+var_E], ax ;~ 0396:4A63
cs=0x396;eip=0x004a66; 	T(MOV(ax, 7));	// 12989 mov     ax, 7 ;~ 0396:4A66
cs=0x396;eip=0x004a69; 	X(PUSH(ax));	// 12990 push    ax ;~ 0396:4A69
cs=0x396;eip=0x004a6a; 	T(SUB(ax, ax));	// 12991 sub     ax, ax ;~ 0396:4A6A
cs=0x396;eip=0x004a6c; 	X(PUSH(ax));	// 12992 push    ax ;~ 0396:4A6C
cs=0x396;eip=0x004a6d; 	R(CALLF(sub_1c8f3,0));	// 12993 call    sub_1C8F3 ;~ 0396:4A6D
cs=0x396;eip=0x004a72; 	T(ADD(sp, 4));	// 12994 add     sp, 4 ;~ 0396:4A72
cs=0x396;eip=0x004a75; 	T(MOV(ax, 1));	// 12995 mov     ax, 1 ;~ 0396:4A75
cs=0x396;eip=0x004a78; 	X(PUSH(ax));	// 12996 push    ax ;~ 0396:4A78
cs=0x396;eip=0x004a79; 	T(MOV(ax, 0x51));	// 12997 mov     ax, 51h ; 'Q' ;~ 0396:4A79
cs=0x396;eip=0x004a7c; 	X(PUSH(ax));	// 12998 push    ax ;~ 0396:4A7C
cs=0x396;eip=0x004a7d; 	R(CALLF(sub_1c92b,0));	// 12999 call    sub_1C92B ;~ 0396:4A7D
cs=0x396;eip=0x004a82; 	T(ADD(sp, 4));	// 13000 add     sp, 4 ;~ 0396:4A82
cs=0x396;eip=0x004a85; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 13001 push    [bp+var_E] ;~ 0396:4A85
cs=0x396;eip=0x004a88; 	T(MOV(ax, 0x230C));	// 13002 mov     ax, 230Ch ;~ 0396:4A88
cs=0x396;eip=0x004a8b; 	X(PUSH(ax));	// 13003 push    ax ;~ 0396:4A8B
cs=0x396;eip=0x004a8c; 	X(PUSH(cs));	// 13004 push    cs ;~ 0396:4A8C
cs=0x396;eip=0x004a8d; 	R(CALL(sub_13a16,0));	// 13005 call    near ptr sub_13A16 ;~ 0396:4A8D
cs=0x396;eip=0x004a90; 	T(ADD(sp, 4));	// 13006 add     sp, 4 ;~ 0396:4A90
cs=0x396;eip=0x004a93; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 13007 mov     [bp+var_E], ax ;~ 0396:4A93
cs=0x396;eip=0x004a96; 	T(MOV(ax, 0x0E));	// 13008 mov     ax, 0Eh ;~ 0396:4A96
cs=0x396;eip=0x004a99; 	X(PUSH(ax));	// 13009 push    ax ;~ 0396:4A99
cs=0x396;eip=0x004a9a; 	T(MOV(ax, 0x51));	// 13010 mov     ax, 51h ; 'Q' ;~ 0396:4A9A
cs=0x396;eip=0x004a9d; 	X(PUSH(ax));	// 13011 push    ax ;~ 0396:4A9D
cs=0x396;eip=0x004a9e; 	R(CALLF(sub_1c92b,0));	// 13012 call    sub_1C92B ;~ 0396:4A9E
cs=0x396;eip=0x004aa3; 	T(ADD(sp, 4));	// 13013 add     sp, 4 ;~ 0396:4AA3
cs=0x396;eip=0x004aa6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 13014 push    [bp+var_E] ;~ 0396:4AA6
cs=0x396;eip=0x004aa9; 	T(MOV(ax, 0x230C));	// 13015 mov     ax, 230Ch ;~ 0396:4AA9
cs=0x396;eip=0x004aac; 	X(PUSH(ax));	// 13016 push    ax ;~ 0396:4AAC
cs=0x396;eip=0x004aad; 	X(PUSH(cs));	// 13017 push    cs ;~ 0396:4AAD
cs=0x396;eip=0x004aae; 	R(CALL(sub_13a16,0));	// 13018 call    near ptr sub_13A16 ;~ 0396:4AAE
cs=0x396;eip=0x004ab1; 	T(ADD(sp, 4));	// 13019 add     sp, 4 ;~ 0396:4AB1
cs=0x396;eip=0x004ab4; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 13020 mov     [bp+var_E], ax ;~ 0396:4AB4
cs=0x396;eip=0x004ab7; 	T(MOV(ax, 7));	// 13021 mov     ax, 7 ;~ 0396:4AB7
cs=0x396;eip=0x004aba; 	X(PUSH(ax));	// 13022 push    ax ;~ 0396:4ABA
cs=0x396;eip=0x004abb; 	T(MOV(ax, 4));	// 13023 mov     ax, 4 ;~ 0396:4ABB
cs=0x396;eip=0x004abe; 	X(PUSH(ax));	// 13024 push    ax ;~ 0396:4ABE
cs=0x396;eip=0x004abf; 	R(CALLF(sub_1c8f3,0));	// 13025 call    sub_1C8F3 ;~ 0396:4ABF
cs=0x396;eip=0x004ac4; 	T(ADD(sp, 4));	// 13026 add     sp, 4 ;~ 0396:4AC4
cs=0x396;eip=0x004ac7; 	T(MOV(ax, 0x1B));	// 13027 mov     ax, 1Bh ;~ 0396:4AC7
cs=0x396;eip=0x004aca; 	X(PUSH(ax));	// 13028 push    ax ;~ 0396:4ACA
cs=0x396;eip=0x004acb; 	T(MOV(ax, 0x51));	// 13029 mov     ax, 51h ; 'Q' ;~ 0396:4ACB
cs=0x396;eip=0x004ace; 	X(PUSH(ax));	// 13030 push    ax ;~ 0396:4ACE
cs=0x396;eip=0x004acf; 	R(CALLF(sub_1c92b,0));	// 13031 call    sub_1C92B ;~ 0396:4ACF
cs=0x396;eip=0x004ad4; 	T(ADD(sp, 4));	// 13032 add     sp, 4 ;~ 0396:4AD4
cs=0x396;eip=0x004ad7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 13033 push    [bp+var_E] ;~ 0396:4AD7
cs=0x396;eip=0x004ada; 	T(MOV(ax, 0x230C));	// 13034 mov     ax, 230Ch ;~ 0396:4ADA
cs=0x396;eip=0x004add; 	X(PUSH(ax));	// 13035 push    ax ;~ 0396:4ADD
cs=0x396;eip=0x004ade; 	X(PUSH(cs));	// 13036 push    cs ;~ 0396:4ADE
cs=0x396;eip=0x004adf; 	R(CALL(sub_13a16,0));	// 13037 call    near ptr sub_13A16 ;~ 0396:4ADF
cs=0x396;eip=0x004ae2; 	T(ADD(sp, 4));	// 13038 add     sp, 4 ;~ 0396:4AE2
cs=0x396;eip=0x004ae5; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 13039 mov     [bp+var_E], ax ;~ 0396:4AE5
cs=0x396;eip=0x004ae8; 	T(MOV(ax, 7));	// 13040 mov     ax, 7 ;~ 0396:4AE8
cs=0x396;eip=0x004aeb; 	X(PUSH(ax));	// 13041 push    ax ;~ 0396:4AEB
cs=0x396;eip=0x004aec; 	T(SUB(ax, ax));	// 13042 sub     ax, ax ;~ 0396:4AEC
cs=0x396;eip=0x004aee; 	X(PUSH(ax));	// 13043 push    ax ;~ 0396:4AEE
cs=0x396;eip=0x004aef; 	R(CALLF(sub_1c8f3,0));	// 13044 call    sub_1C8F3 ;~ 0396:4AEF
cs=0x396;eip=0x004af4; 	T(ADD(sp, 4));	// 13045 add     sp, 4 ;~ 0396:4AF4
cs=0x396;eip=0x004af7; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 0));	// 13046 mov     [bp+var_12], 0 ;~ 0396:4AF7
loc_16a3c:
	// 5068 
cs=0x396;eip=0x004afc; 	T(MOV(al, 0x30));	// 13049 mov     al, 30h ; '0' ;~ 0396:4AFC
cs=0x396;eip=0x004afe; 	X(MUL1_1(byte_2c94a));	// 13050 mul     byte_2C94A ;~ 0396:4AFE
cs=0x396;eip=0x004b02; 	T(MOV(si, ax));	// 13051 mov     si, ax ;~ 0396:4B02
cs=0x396;eip=0x004b04; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12))));	// 13052 mov     bx, [bp+var_12] ;~ 0396:4B04
cs=0x396;eip=0x004b07; 	T(MOV(al, *(raddr(ds,bx+si-0x1A40))));	// 13053 mov     al, [bx+si-1A40h] ;~ 0396:4B07
cs=0x396;eip=0x004b0b; 	X(MOV(*(raddr(ds,bx+0x235A)), al));	// 13054 mov     [bx+235Ah], al ;~ 0396:4B0B
cs=0x396;eip=0x004b0f; 	T(MOV(al, byte_2c8b4));	// 13055 mov     al, byte_2C8B4 ;~ 0396:4B0F
cs=0x396;eip=0x004b12; 	T(SUB(ah, ah));	// 13056 sub     ah, ah ;~ 0396:4B12
cs=0x396;eip=0x004b14; 	T(MOV(cx, ax));	// 13057 mov     cx, ax ;~ 0396:4B14
cs=0x396;eip=0x004b16; 	T(SHL(ax, 1));	// 13058 shl     ax, 1 ;~ 0396:4B16
cs=0x396;eip=0x004b18; 	T(ADD(ax, cx));	// 13059 add     ax, cx ;~ 0396:4B18
cs=0x396;eip=0x004b1a; 	T(SHL(ax, 1));	// 13060 shl     ax, 1 ;~ 0396:4B1A
cs=0x396;eip=0x004b1c; 	T(SHL(ax, 1));	// 13061 shl     ax, 1 ;~ 0396:4B1C
cs=0x396;eip=0x004b1e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12))));	// 13062 mov     bx, [bp+var_12] ;~ 0396:4B1E
cs=0x396;eip=0x004b21; 	T(ADD(bx, ax));	// 13063 add     bx, ax ;~ 0396:4B21
cs=0x396;eip=0x004b23; 	T(MOV(al, *(raddr(ds,bx+si-0x1A34))));	// 13064 mov     al, [bx+si-1A34h] ;~ 0396:4B23
cs=0x396;eip=0x004b27; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12))));	// 13065 mov     bx, [bp+var_12] ;~ 0396:4B27
cs=0x396;eip=0x004b2a; 	X(MOV(*(raddr(ds,bx+0x2369)), al));	// 13066 mov     [bx+2369h], al ;~ 0396:4B2A
cs=0x396;eip=0x004b2e; 	X(INC(*(dw*)(raddr(ss,bp+var_12))));	// 13067 inc     [bp+var_12] ;~ 0396:4B2E
cs=0x396;eip=0x004b31; 	T(CMP(*(dw*)(raddr(ss,bp+var_12)), 0x0C));	// 13068 cmp     [bp+var_12], 0Ch ;~ 0396:4B31
cs=0x396;eip=0x004b35; 	R(JL(loc_16a3c));	// 13069 jl      short loc_16A3C ;~ 0396:4B35
cs=0x396;eip=0x004b37; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 13070 push    [bp+var_E] ;~ 0396:4B37
cs=0x396;eip=0x004b3a; 	T(MOV(ax, 0x230C));	// 13071 mov     ax, 230Ch ;~ 0396:4B3A
cs=0x396;eip=0x004b3d; 	X(PUSH(ax));	// 13072 push    ax ;~ 0396:4B3D
cs=0x396;eip=0x004b3e; 	X(PUSH(cs));	// 13073 push    cs ;~ 0396:4B3E
cs=0x396;eip=0x004b3f; 	R(CALL(sub_139c2,0));	// 13074 call    near ptr sub_139C2 ;~ 0396:4B3F
cs=0x396;eip=0x004b42; 	T(ADD(sp, 4));	// 13075 add     sp, 4 ;~ 0396:4B42
cs=0x396;eip=0x004b45; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 13076 mov     [bp+var_E], ax ;~ 0396:4B45
cs=0x396;eip=0x004b48; 	T(SUB(ax, ax));	// 13077 sub     ax, ax ;~ 0396:4B48
cs=0x396;eip=0x004b4a; 	X(PUSH(ax));	// 13078 push    ax ;~ 0396:4B4A
cs=0x396;eip=0x004b4b; 	R(CALLF(sub_27031,0));	// 13079 call    far ptr sub_27031 ;~ 0396:4B4B
cs=0x396;eip=0x004b50; 	T(ADD(sp, 2));	// 13080 add     sp, 2 ;~ 0396:4B50
cs=0x396;eip=0x004b53; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 13081 mov     al, [bp+var_A] ;~ 0396:4B53
cs=0x396;eip=0x004b56; 	T(SUB(ah, ah));	// 13082 sub     ah, ah ;~ 0396:4B56
cs=0x396;eip=0x004b58; 	X(PUSH(ax));	// 13083 push    ax ;~ 0396:4B58
cs=0x396;eip=0x004b59; 	T(MOV(ax, 0x9C6));	// 13084 mov     ax, 9C6h ;~ 0396:4B59
cs=0x396;eip=0x004b5c; 	X(PUSH(ax));	// 13085 push    ax ;~ 0396:4B5C
cs=0x396;eip=0x004b5d; 	T(MOV(ax, 0x6D));	// 13086 mov     ax, 6Dh ; 'm' ;~ 0396:4B5D
cs=0x396;eip=0x004b60; 	X(PUSH(ax));	// 13087 push    ax ;~ 0396:4B60
cs=0x396;eip=0x004b61; 	X(PUSH(ax));	// 13088 push    ax ;~ 0396:4B61
cs=0x396;eip=0x004b62; 	X(PUSH(cs));	// 13089 push    cs ;~ 0396:4B62
cs=0x396;eip=0x004b63; 	R(CALL(sub_16cbe,0));	// 13090 call    near ptr sub_16CBE ;~ 0396:4B63
cs=0x396;eip=0x004b66; 	T(ADD(sp, 8));	// 13091 add     sp, 8 ;~ 0396:4B66
cs=0x396;eip=0x004b69; 	T(MOV(al, *(raddr(ss,bp+var_c))));	// 13092 mov     al, [bp+var_C] ;~ 0396:4B69
cs=0x396;eip=0x004b6c; 	T(SUB(ah, ah));	// 13093 sub     ah, ah ;~ 0396:4B6C
cs=0x396;eip=0x004b6e; 	X(PUSH(ax));	// 13094 push    ax ;~ 0396:4B6E
cs=0x396;eip=0x004b6f; 	T(MOV(ax, 0x9D0));	// 13095 mov     ax, 9D0h ;~ 0396:4B6F
cs=0x396;eip=0x004b72; 	X(PUSH(ax));	// 13096 push    ax ;~ 0396:4B72
cs=0x396;eip=0x004b73; 	T(MOV(ax, 0x7D));	// 13097 mov     ax, 7Dh ; '}' ;~ 0396:4B73
cs=0x396;eip=0x004b76; 	X(PUSH(ax));	// 13098 push    ax ;~ 0396:4B76
cs=0x396;eip=0x004b77; 	T(MOV(ax, 0x6D));	// 13099 mov     ax, 6Dh ; 'm' ;~ 0396:4B77
cs=0x396;eip=0x004b7a; 	X(PUSH(ax));	// 13100 push    ax ;~ 0396:4B7A
cs=0x396;eip=0x004b7b; 	X(PUSH(cs));	// 13101 push    cs ;~ 0396:4B7B
cs=0x396;eip=0x004b7c; 	R(CALL(sub_16cbe,0));	// 13102 call    near ptr sub_16CBE ;~ 0396:4B7C
cs=0x396;eip=0x004b7f; 	T(ADD(sp, 8));	// 13103 add     sp, 8 ;~ 0396:4B7F
cs=0x396;eip=0x004b82; 	T(MOV(ax, 4));	// 13104 mov     ax, 4 ;~ 0396:4B82
cs=0x396;eip=0x004b85; 	X(PUSH(ax));	// 13105 push    ax ;~ 0396:4B85
cs=0x396;eip=0x004b86; 	R(CALLF(sub_27031,0));	// 13106 call    far ptr sub_27031 ;~ 0396:4B86
cs=0x396;eip=0x004b8b; 	T(ADD(sp, 2));	// 13107 add     sp, 2 ;~ 0396:4B8B
cs=0x396;eip=0x004b8e; 	T(SUB(ax, ax));	// 13108 sub     ax, ax ;~ 0396:4B8E
cs=0x396;eip=0x004b90; 	X(PUSH(ax));	// 13109 push    ax ;~ 0396:4B90
cs=0x396;eip=0x004b91; 	T(MOV(al, byte_2c94a));	// 13110 mov     al, byte_2C94A ;~ 0396:4B91
cs=0x396;eip=0x004b94; 	T(SUB(ah, ah));	// 13111 sub     ah, ah ;~ 0396:4B94
cs=0x396;eip=0x004b96; 	T(MOV(cx, ax));	// 13112 mov     cx, ax ;~ 0396:4B96
cs=0x396;eip=0x004b98; 	T(SHL(ax, 1));	// 13113 shl     ax, 1 ;~ 0396:4B98
cs=0x396;eip=0x004b9a; 	T(ADD(ax, cx));	// 13114 add     ax, cx ;~ 0396:4B9A
cs=0x396;eip=0x004b9c; 	T(MOV(cl, byte_2c8b4));	// 13115 mov     cl, byte_2C8B4 ;~ 0396:4B9C
cs=0x396;eip=0x004ba0; 	T(SUB(ch, ch));	// 13116 sub     ch, ch ;~ 0396:4BA0
cs=0x396;eip=0x004ba2; 	T(ADD(ax, cx));	// 13117 add     ax, cx ;~ 0396:4BA2
cs=0x396;eip=0x004ba4; 	T(MOV(cl, 3));	// 13118 mov     cl, 3 ;~ 0396:4BA4
cs=0x396;eip=0x004ba6; 	T(SHL(ax, cl));	// 13119 shl     ax, cl ;~ 0396:4BA6
cs=0x396;eip=0x004ba8; 	T(ADD(ax, 0x205C));	// 13120 add     ax, 205Ch ;~ 0396:4BA8
cs=0x396;eip=0x004bab; 	X(PUSH(ax));	// 13121 push    ax ;~ 0396:4BAB
cs=0x396;eip=0x004bac; 	T(MOV(ax, 0x6D));	// 13122 mov     ax, 6Dh ; 'm' ;~ 0396:4BAC
cs=0x396;eip=0x004baf; 	X(PUSH(ax));	// 13123 push    ax ;~ 0396:4BAF
cs=0x396;eip=0x004bb0; 	T(MOV(ax, 0x0D7));	// 13124 mov     ax, 0D7h ; '◊' ;~ 0396:4BB0
cs=0x396;eip=0x004bb3; 	X(PUSH(ax));	// 13125 push    ax ;~ 0396:4BB3
cs=0x396;eip=0x004bb4; 	X(PUSH(cs));	// 13126 push    cs ;~ 0396:4BB4
cs=0x396;eip=0x004bb5; 	R(CALL(sub_16cbe,0));	// 13127 call    near ptr sub_16CBE ;~ 0396:4BB5
cs=0x396;eip=0x004bb8; 	T(ADD(sp, 8));	// 13128 add     sp, 8 ;~ 0396:4BB8
cs=0x396;eip=0x004bbb; 	T(SUB(ax, ax));	// 13129 sub     ax, ax ;~ 0396:4BBB
cs=0x396;eip=0x004bbd; 	X(PUSH(ax));	// 13130 push    ax ;~ 0396:4BBD
cs=0x396;eip=0x004bbe; 	T(MOV(al, byte_2c94a));	// 13131 mov     al, byte_2C94A ;~ 0396:4BBE
cs=0x396;eip=0x004bc1; 	T(SUB(ah, ah));	// 13132 sub     ah, ah ;~ 0396:4BC1
cs=0x396;eip=0x004bc3; 	T(MOV(cl, 3));	// 13133 mov     cl, 3 ;~ 0396:4BC3
cs=0x396;eip=0x004bc5; 	T(SHL(ax, cl));	// 13134 shl     ax, cl ;~ 0396:4BC5
cs=0x396;eip=0x004bc7; 	T(ADD(ax, 0x2134));	// 13135 add     ax, 2134h ;~ 0396:4BC7
cs=0x396;eip=0x004bca; 	X(PUSH(ax));	// 13136 push    ax ;~ 0396:4BCA
cs=0x396;eip=0x004bcb; 	T(MOV(ax, 0x7D));	// 13137 mov     ax, 7Dh ; '}' ;~ 0396:4BCB
cs=0x396;eip=0x004bce; 	X(PUSH(ax));	// 13138 push    ax ;~ 0396:4BCE
cs=0x396;eip=0x004bcf; 	T(MOV(ax, 0x0D7));	// 13139 mov     ax, 0D7h ; '◊' ;~ 0396:4BCF
cs=0x396;eip=0x004bd2; 	X(PUSH(ax));	// 13140 push    ax ;~ 0396:4BD2
cs=0x396;eip=0x004bd3; 	X(PUSH(cs));	// 13141 push    cs ;~ 0396:4BD3
cs=0x396;eip=0x004bd4; 	R(CALL(sub_16cbe,0));	// 13142 call    near ptr sub_16CBE ;~ 0396:4BD4
cs=0x396;eip=0x004bd7; 	T(ADD(sp, 8));	// 13143 add     sp, 8 ;~ 0396:4BD7
cs=0x396;eip=0x004bda; 	T(SUB(ax, ax));	// 13144 sub     ax, ax ;~ 0396:4BDA
cs=0x396;eip=0x004bdc; 	X(PUSH(ax));	// 13145 push    ax ;~ 0396:4BDC
cs=0x396;eip=0x004bdd; 	T(MOV(al, byte_2c94b));	// 13146 mov     al, byte_2C94B ;~ 0396:4BDD
cs=0x396;eip=0x004be0; 	T(SUB(ah, ah));	// 13147 sub     ah, ah ;~ 0396:4BE0
cs=0x396;eip=0x004be2; 	T(MOV(cl, 3));	// 13148 mov     cl, 3 ;~ 0396:4BE2
cs=0x396;eip=0x004be4; 	T(SHL(ax, cl));	// 13149 shl     ax, cl ;~ 0396:4BE4
cs=0x396;eip=0x004be6; 	T(ADD(ax, 0x212C));	// 13150 add     ax, 212Ch ;~ 0396:4BE6
cs=0x396;eip=0x004be9; 	X(PUSH(ax));	// 13151 push    ax ;~ 0396:4BE9
cs=0x396;eip=0x004bea; 	T(MOV(ax, 0x0B5));	// 13152 mov     ax, 0B5h ; 'µ' ;~ 0396:4BEA
cs=0x396;eip=0x004bed; 	X(PUSH(ax));	// 13153 push    ax ;~ 0396:4BED
cs=0x396;eip=0x004bee; 	T(MOV(ax, 0x0D7));	// 13154 mov     ax, 0D7h ; '◊' ;~ 0396:4BEE
cs=0x396;eip=0x004bf1; 	X(PUSH(ax));	// 13155 push    ax ;~ 0396:4BF1
cs=0x396;eip=0x004bf2; 	X(PUSH(cs));	// 13156 push    cs ;~ 0396:4BF2
cs=0x396;eip=0x004bf3; 	R(CALL(sub_16cbe,0));	// 13157 call    near ptr sub_16CBE ;~ 0396:4BF3
cs=0x396;eip=0x004bf6; 	T(ADD(sp, 8));	// 13158 add     sp, 8 ;~ 0396:4BF6
cs=0x396;eip=0x004bf9; 	T(MOV(al, byte_2c94a));	// 13159 mov     al, byte_2C94A ;~ 0396:4BF9
cs=0x396;eip=0x004bfc; 	T(SUB(ah, ah));	// 13160 sub     ah, ah ;~ 0396:4BFC
cs=0x396;eip=0x004bfe; 	T(INC(ax));	// 13161 inc     ax ;~ 0396:4BFE
cs=0x396;eip=0x004bff; 	T(MOV(cl, byte_2c94b));	// 13162 mov     cl, byte_2C94B ;~ 0396:4BFF
cs=0x396;eip=0x004c03; 	T(SUB(ch, ch));	// 13163 sub     ch, ch ;~ 0396:4C03
cs=0x396;eip=0x004c05; 	T(CMP(ax, cx));	// 13164 cmp     ax, cx ;~ 0396:4C05
cs=0x396;eip=0x004c07; 	R(JC(loc_16b4c));	// 13165 jb      short loc_16B4C ;~ 0396:4C07
cs=0x396;eip=0x004c09; 	R(JMP(loc_16c02));	// 13166 jmp     loc_16C02 ;~ 0396:4C09
loc_16b4c:
	// 5069 
cs=0x396;eip=0x004c0c; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 0));	// 13170 mov     [bp+var_12], 0 ;~ 0396:4C0C
loc_16b51:
	// 5070 
cs=0x396;eip=0x004c11; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_12))));	// 13173 mov     si, [bp+var_12] ;~ 0396:4C11
cs=0x396;eip=0x004c14; 	T(MOV(al, 0x30));	// 13174 mov     al, 30h ; '0' ;~ 0396:4C14
cs=0x396;eip=0x004c16; 	X(MUL1_1(byte_2c94a));	// 13175 mul     byte_2C94A ;~ 0396:4C16
cs=0x396;eip=0x004c1a; 	T(ADD(si, ax));	// 13176 add     si, ax ;~ 0396:4C1A
cs=0x396;eip=0x004c1c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12))));	// 13177 mov     bx, [bp+var_12] ;~ 0396:4C1C
cs=0x396;eip=0x004c1f; 	T(MOV(al, *(raddr(ds,si-0x1A10))));	// 13178 mov     al, [si-1A10h] ;~ 0396:4C1F
cs=0x396;eip=0x004c23; 	X(MOV(*(raddr(ds,bx+0x23AF)), al));	// 13179 mov     [bx+23AFh], al ;~ 0396:4C23
cs=0x396;eip=0x004c27; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12))));	// 13180 mov     bx, [bp+var_12] ;~ 0396:4C27
cs=0x396;eip=0x004c2a; 	T(MOV(al, *(raddr(ds,si-0x1A04))));	// 13181 mov     al, [si-1A04h] ;~ 0396:4C2A
cs=0x396;eip=0x004c2e; 	X(MOV(*(raddr(ds,bx+0x23BE)), al));	// 13182 mov     [bx+23BEh], al ;~ 0396:4C2E
cs=0x396;eip=0x004c32; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12))));	// 13183 mov     bx, [bp+var_12] ;~ 0396:4C32
cs=0x396;eip=0x004c35; 	T(MOV(al, *(raddr(ds,si-0x19F8))));	// 13184 mov     al, [si-19F8h] ;~ 0396:4C35
cs=0x396;eip=0x004c39; 	X(MOV(*(raddr(ds,bx+0x23CD)), al));	// 13185 mov     [bx+23CDh], al ;~ 0396:4C39
cs=0x396;eip=0x004c3d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12))));	// 13186 mov     bx, [bp+var_12] ;~ 0396:4C3D
cs=0x396;eip=0x004c40; 	T(MOV(al, *(raddr(ds,si-0x19EC))));	// 13187 mov     al, [si-19ECh] ;~ 0396:4C40
cs=0x396;eip=0x004c44; 	X(MOV(*(raddr(ds,bx+0x23DC)), al));	// 13188 mov     [bx+23DCh], al ;~ 0396:4C44
cs=0x396;eip=0x004c48; 	X(INC(*(dw*)(raddr(ss,bp+var_12))));	// 13189 inc     [bp+var_12] ;~ 0396:4C48
cs=0x396;eip=0x004c4b; 	T(CMP(*(dw*)(raddr(ss,bp+var_12)), 0x0C));	// 13190 cmp     [bp+var_12], 0Ch ;~ 0396:4C4B
cs=0x396;eip=0x004c4f; 	R(JL(loc_16b51));	// 13191 jl      short loc_16B51 ;~ 0396:4C4F
cs=0x396;eip=0x004c51; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 13192 push    [bp+var_E] ;~ 0396:4C51
cs=0x396;eip=0x004c54; 	T(MOV(ax, 0x230C));	// 13193 mov     ax, 230Ch ;~ 0396:4C54
cs=0x396;eip=0x004c57; 	X(PUSH(ax));	// 13194 push    ax ;~ 0396:4C57
cs=0x396;eip=0x004c58; 	X(PUSH(cs));	// 13195 push    cs ;~ 0396:4C58
cs=0x396;eip=0x004c59; 	R(CALL(sub_139c2,0));	// 13196 call    near ptr sub_139C2 ;~ 0396:4C59
cs=0x396;eip=0x004c5c; 	T(ADD(sp, 4));	// 13197 add     sp, 4 ;~ 0396:4C5C
cs=0x396;eip=0x004c5f; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 13198 mov     [bp+var_E], ax ;~ 0396:4C5F
cs=0x396;eip=0x004c62; 	T(MOV(ax, 4));	// 13199 mov     ax, 4 ;~ 0396:4C62
cs=0x396;eip=0x004c65; 	X(PUSH(ax));	// 13200 push    ax ;~ 0396:4C65
cs=0x396;eip=0x004c66; 	R(CALLF(sub_27031,0));	// 13201 call    far ptr sub_27031 ;~ 0396:4C66
cs=0x396;eip=0x004c6b; 	T(ADD(sp, 2));	// 13202 add     sp, 2 ;~ 0396:4C6B
cs=0x396;eip=0x004c6e; 	T(SUB(ax, ax));	// 13203 sub     ax, ax ;~ 0396:4C6E
cs=0x396;eip=0x004c70; 	X(PUSH(ax));	// 13204 push    ax ;~ 0396:4C70
cs=0x396;eip=0x004c71; 	T(MOV(al, 0x18));	// 13205 mov     al, 18h ;~ 0396:4C71
cs=0x396;eip=0x004c73; 	X(MUL1_1(byte_2c94a));	// 13206 mul     byte_2C94A ;~ 0396:4C73
cs=0x396;eip=0x004c77; 	T(ADD(ax, 0x2074));	// 13207 add     ax, 2074h ;~ 0396:4C77
cs=0x396;eip=0x004c7a; 	X(PUSH(ax));	// 13208 push    ax ;~ 0396:4C7A
cs=0x396;eip=0x004c7b; 	T(MOV(ax, 0x95));	// 13209 mov     ax, 95h ; 'ï' ;~ 0396:4C7B
cs=0x396;eip=0x004c7e; 	X(PUSH(ax));	// 13210 push    ax ;~ 0396:4C7E
cs=0x396;eip=0x004c7f; 	T(MOV(ax, 0x0D7));	// 13211 mov     ax, 0D7h ; '◊' ;~ 0396:4C7F
cs=0x396;eip=0x004c82; 	X(PUSH(ax));	// 13212 push    ax ;~ 0396:4C82
cs=0x396;eip=0x004c83; 	X(PUSH(cs));	// 13213 push    cs ;~ 0396:4C83
cs=0x396;eip=0x004c84; 	R(CALL(sub_16cbe,0));	// 13214 call    near ptr sub_16CBE ;~ 0396:4C84
cs=0x396;eip=0x004c87; 	T(ADD(sp, 8));	// 13215 add     sp, 8 ;~ 0396:4C87
cs=0x396;eip=0x004c8a; 	T(SUB(ax, ax));	// 13216 sub     ax, ax ;~ 0396:4C8A
cs=0x396;eip=0x004c8c; 	X(PUSH(ax));	// 13217 push    ax ;~ 0396:4C8C
cs=0x396;eip=0x004c8d; 	T(MOV(al, 0x18));	// 13218 mov     al, 18h ;~ 0396:4C8D
cs=0x396;eip=0x004c8f; 	X(MUL1_1(byte_2c94a));	// 13219 mul     byte_2C94A ;~ 0396:4C8F
cs=0x396;eip=0x004c93; 	T(ADD(ax, 0x207C));	// 13220 add     ax, 207Ch ;~ 0396:4C93
cs=0x396;eip=0x004c96; 	X(PUSH(ax));	// 13221 push    ax ;~ 0396:4C96
cs=0x396;eip=0x004c97; 	T(MOV(ax, 0x9D));	// 13222 mov     ax, 9Dh ; 'ù' ;~ 0396:4C97
cs=0x396;eip=0x004c9a; 	X(PUSH(ax));	// 13223 push    ax ;~ 0396:4C9A
cs=0x396;eip=0x004c9b; 	T(MOV(ax, 0x0D7));	// 13224 mov     ax, 0D7h ; '◊' ;~ 0396:4C9B
cs=0x396;eip=0x004c9e; 	X(PUSH(ax));	// 13225 push    ax ;~ 0396:4C9E
cs=0x396;eip=0x004c9f; 	X(PUSH(cs));	// 13226 push    cs ;~ 0396:4C9F
cs=0x396;eip=0x004ca0; 	R(CALL(sub_16cbe,0));	// 13227 call    near ptr sub_16CBE ;~ 0396:4CA0
cs=0x396;eip=0x004ca3; 	T(ADD(sp, 8));	// 13228 add     sp, 8 ;~ 0396:4CA3
cs=0x396;eip=0x004ca6; 	T(SUB(ax, ax));	// 13229 sub     ax, ax ;~ 0396:4CA6
cs=0x396;eip=0x004ca8; 	X(PUSH(ax));	// 13230 push    ax ;~ 0396:4CA8
cs=0x396;eip=0x004ca9; 	T(MOV(al, 0x18));	// 13231 mov     al, 18h ;~ 0396:4CA9
cs=0x396;eip=0x004cab; 	X(MUL1_1(byte_2c94a));	// 13232 mul     byte_2C94A ;~ 0396:4CAB
cs=0x396;eip=0x004caf; 	T(ADD(ax, 0x2084));	// 13233 add     ax, 2084h ;~ 0396:4CAF
cs=0x396;eip=0x004cb2; 	X(PUSH(ax));	// 13234 push    ax ;~ 0396:4CB2
cs=0x396;eip=0x004cb3; 	T(MOV(ax, 0x0A5));	// 13235 mov     ax, 0A5h ; '•' ;~ 0396:4CB3
cs=0x396;eip=0x004cb6; 	X(PUSH(ax));	// 13236 push    ax ;~ 0396:4CB6
cs=0x396;eip=0x004cb7; 	T(MOV(ax, 0x0D7));	// 13237 mov     ax, 0D7h ; '◊' ;~ 0396:4CB7
cs=0x396;eip=0x004cba; 	X(PUSH(ax));	// 13238 push    ax ;~ 0396:4CBA
cs=0x396;eip=0x004cbb; 	X(PUSH(cs));	// 13239 push    cs ;~ 0396:4CBB
cs=0x396;eip=0x004cbc; 	R(CALL(sub_16cbe,0));	// 13240 call    near ptr sub_16CBE ;~ 0396:4CBC
cs=0x396;eip=0x004cbf; 	T(ADD(sp, 8));	// 13241 add     sp, 8 ;~ 0396:4CBF
loc_16c02:
	// 5071 
cs=0x396;eip=0x004cc2; 	T(SUB(ax, ax));	// 13244 sub     ax, ax ;~ 0396:4CC2
cs=0x396;eip=0x004cc4; 	X(MOV(word_2beda, ax));	// 13245 mov     word_2BEDA, ax ;~ 0396:4CC4
cs=0x396;eip=0x004cc7; 	X(PUSH(ax));	// 13246 push    ax ;~ 0396:4CC7
cs=0x396;eip=0x004cc8; 	R(CALLF(sub_2714e,0));	// 13247 call    far ptr sub_2714E ;~ 0396:4CC8
cs=0x396;eip=0x004ccd; 	T(ADD(sp, 2));	// 13248 add     sp, 2 ;~ 0396:4CCD
cs=0x396;eip=0x004cd0; 	X(PUSH(cs));	// 13249 push    cs ;~ 0396:4CD0
cs=0x396;eip=0x004cd1; 	R(CALL(sub_13b22,0));	// 13250 call    near ptr sub_13B22 ;~ 0396:4CD1
cs=0x396;eip=0x004cd4; 	T(SUB(al, al));	// 13251 sub     al, al ;~ 0396:4CD4
cs=0x396;eip=0x004cd6; 	X(MOV(byte_34f9b, al));	// 13252 mov     byte_34F9B, al ;~ 0396:4CD6
cs=0x396;eip=0x004cd9; 	X(MOV(byte_2becc, al));	// 13253 mov     byte_2BECC, al ;~ 0396:4CD9
cs=0x396;eip=0x004cdc; 	T(SUB(ax, ax));	// 13254 sub     ax, ax ;~ 0396:4CDC
cs=0x396;eip=0x004cde; 	X(PUSH(ax));	// 13255 push    ax ;~ 0396:4CDE
cs=0x396;eip=0x004cdf; 	T(MOV(ax, 0x0F));	// 13256 mov     ax, 0Fh ;~ 0396:4CDF
cs=0x396;eip=0x004ce2; 	X(PUSH(ax));	// 13257 push    ax ;~ 0396:4CE2
cs=0x396;eip=0x004ce3; 	R(CALLF(sub_1c8f3,0));	// 13258 call    sub_1C8F3 ;~ 0396:4CE3
cs=0x396;eip=0x004ce8; 	T(ADD(sp, 4));	// 13259 add     sp, 4 ;~ 0396:4CE8
cs=0x396;eip=0x004ceb; 	R(JMP(loc_16caa));	// 13260 jmp     short loc_16CAA ;~ 0396:4CEB
loc_16c2e:
	// 5072 
cs=0x396;eip=0x004cee; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 13265 mov     al, [bp+var_A] ;~ 0396:4CEE
cs=0x396;eip=0x004cf1; 	T(SUB(ah, ah));	// 13266 sub     ah, ah ;~ 0396:4CF1
cs=0x396;eip=0x004cf3; 	T(MOV(cl, *(raddr(ss,bp+var_c))));	// 13267 mov     cl, [bp+var_C] ;~ 0396:4CF3
cs=0x396;eip=0x004cf6; 	T(SUB(ch, ch));	// 13268 sub     ch, ch ;~ 0396:4CF6
cs=0x396;eip=0x004cf8; 	T(ADD(ax, cx));	// 13269 add     ax, cx ;~ 0396:4CF8
cs=0x396;eip=0x004cfa; 	R(JZ(loc_16c70));	// 13270 jz      short loc_16C70 ;~ 0396:4CFA
cs=0x396;eip=0x004cfc; 	T(SUB(ax, ax));	// 13271 sub     ax, ax ;~ 0396:4CFC
cs=0x396;eip=0x004cfe; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 13272 mov     [bp+var_E], ax ;~ 0396:4CFE
cs=0x396;eip=0x004d01; 	X(PUSH(ax));	// 13273 push    ax ;~ 0396:4D01
cs=0x396;eip=0x004d02; 	T(MOV(ax, 0x2400));	// 13274 mov     ax, 2400h ;~ 0396:4D02
cs=0x396;eip=0x004d05; 	X(PUSH(ax));	// 13275 push    ax ;~ 0396:4D05
cs=0x396;eip=0x004d06; 	X(PUSH(cs));	// 13276 push    cs ;~ 0396:4D06
cs=0x396;eip=0x004d07; 	R(CALL(sub_139c2,0));	// 13277 call    near ptr sub_139C2 ;~ 0396:4D07
cs=0x396;eip=0x004d0a; 	T(ADD(sp, 4));	// 13278 add     sp, 4 ;~ 0396:4D0A
cs=0x396;eip=0x004d0d; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 13279 mov     [bp+var_E], ax ;~ 0396:4D0D
cs=0x396;eip=0x004d10; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 13280 mov     [bp+var_E], 0 ;~ 0396:4D10
loc_16c55:
	// 5073 
cs=0x396;eip=0x004d15; 	T(CMP(byte_2becc, 0));	// 13283 cmp     byte_2BECC, 0 ;~ 0396:4D15
cs=0x396;eip=0x004d1a; 	R(JNZ(loc_16c67));	// 13284 jnz     short loc_16C67 ;~ 0396:4D1A
cs=0x396;eip=0x004d1c; 	T(MOV(ax, 2));	// 13285 mov     ax, 2 ;~ 0396:4D1C
cs=0x396;eip=0x004d1f; 	X(PUSH(ax));	// 13286 push    ax ;~ 0396:4D1F
cs=0x396;eip=0x004d20; 	X(PUSH(cs));	// 13287 push    cs ;~ 0396:4D20
cs=0x396;eip=0x004d21; 	R(CALL(sub_13ace,0));	// 13288 call    near ptr sub_13ACE ;~ 0396:4D21
cs=0x396;eip=0x004d24; 	T(ADD(sp, 2));	// 13289 add     sp, 2 ;~ 0396:4D24
loc_16c67:
	// 5074 
cs=0x396;eip=0x004d27; 	X(INC(*(dw*)(raddr(ss,bp+var_e))));	// 13292 inc     [bp+var_E] ;~ 0396:4D27
cs=0x396;eip=0x004d2a; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0x19));	// 13293 cmp     [bp+var_E], 19h ;~ 0396:4D2A
cs=0x396;eip=0x004d2e; 	R(JL(loc_16c55));	// 13294 jl      short loc_16C55 ;~ 0396:4D2E
loc_16c70:
	// 5075 
cs=0x396;eip=0x004d30; 	T(SUB(ax, ax));	// 13297 sub     ax, ax ;~ 0396:4D30
cs=0x396;eip=0x004d32; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 13298 mov     [bp+var_E], ax ;~ 0396:4D32
cs=0x396;eip=0x004d35; 	X(PUSH(ax));	// 13299 push    ax ;~ 0396:4D35
cs=0x396;eip=0x004d36; 	T(MOV(ax, 0x230C));	// 13300 mov     ax, 230Ch ;~ 0396:4D36
cs=0x396;eip=0x004d39; 	X(PUSH(ax));	// 13301 push    ax ;~ 0396:4D39
cs=0x396;eip=0x004d3a; 	X(PUSH(cs));	// 13302 push    cs ;~ 0396:4D3A
cs=0x396;eip=0x004d3b; 	R(CALL(sub_139c2,0));	// 13303 call    near ptr sub_139C2 ;~ 0396:4D3B
cs=0x396;eip=0x004d3e; 	T(ADD(sp, 4));	// 13304 add     sp, 4 ;~ 0396:4D3E
cs=0x396;eip=0x004d41; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 13305 mov     [bp+var_E], ax ;~ 0396:4D41
cs=0x396;eip=0x004d44; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 13306 mov     [bp+var_E], 0 ;~ 0396:4D44
cs=0x396;eip=0x004d49; 	R(JMP(loc_16c8f));	// 13307 jmp     short loc_16C8F ;~ 0396:4D49
loc_16c8c:
	// 5076 
cs=0x396;eip=0x004d4c; 	X(INC(*(dw*)(raddr(ss,bp+var_e))));	// 13313 inc     [bp+var_E] ;~ 0396:4D4C
loc_16c8f:
	// 5077 
cs=0x396;eip=0x004d4f; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0x19));	// 13316 cmp     [bp+var_E], 19h ;~ 0396:4D4F
cs=0x396;eip=0x004d53; 	R(JGE(loc_16caa));	// 13317 jge     short loc_16CAA ;~ 0396:4D53
cs=0x396;eip=0x004d55; 	T(CMP(byte_2becc, 0));	// 13318 cmp     byte_2BECC, 0 ;~ 0396:4D55
cs=0x396;eip=0x004d5a; 	R(JNZ(loc_16c8c));	// 13319 jnz     short loc_16C8C ;~ 0396:4D5A
cs=0x396;eip=0x004d5c; 	T(MOV(ax, 2));	// 13320 mov     ax, 2 ;~ 0396:4D5C
cs=0x396;eip=0x004d5f; 	X(PUSH(ax));	// 13321 push    ax ;~ 0396:4D5F
cs=0x396;eip=0x004d60; 	X(PUSH(cs));	// 13322 push    cs ;~ 0396:4D60
cs=0x396;eip=0x004d61; 	R(CALL(sub_13ace,0));	// 13323 call    near ptr sub_13ACE ;~ 0396:4D61
cs=0x396;eip=0x004d64; 	T(ADD(sp, 2));	// 13324 add     sp, 2 ;~ 0396:4D64
cs=0x396;eip=0x004d67; 	R(JMP(loc_16c8c));	// 13325 jmp     short loc_16C8C ;~ 0396:4D67
loc_16caa:
	// 5078 
cs=0x396;eip=0x004d6a; 	T(CMP(byte_2becc, 0));	// 13331 cmp     byte_2BECC, 0 ;~ 0396:4D6A
cs=0x396;eip=0x004d6f; 	R(JNZ(loc_16cb4));	// 13332 jnz     short loc_16CB4 ;~ 0396:4D6F
cs=0x396;eip=0x004d71; 	R(JMP(loc_16c2e));	// 13333 jmp     loc_16C2E ;~ 0396:4D71
loc_16cb4:
	// 5079 
cs=0x396;eip=0x004d74; 	X(MOV(byte_34f9b, 0));	// 13337 mov     byte_34F9B, 0 ;~ 0396:4D74
cs=0x396;eip=0x004d79; 	X(POP(si));	// 13338 pop     si ;~ 0396:4D79
cs=0x396;eip=0x004d7a; 	T(MOV(sp, bp));	// 13339 mov     sp, bp ;~ 0396:4D7A
cs=0x396;eip=0x004d7c; 	X(POP(bp));	// 13340 pop     bp ;~ 0396:4D7C
cs=0x396;eip=0x004d7d; 	R(RETF(0));	// 13341 retf ;~ 0396:4D7D
sub_16cbe:
	// 13349 
#undef var_c
#define var_c -0x0C
	// 13352 var_C           = word ptr -0Ch ;~ 0396:4D7E
#undef var_a
#define var_a -0x0A
	// 13353 var_A           = word ptr -0Ah ;~ 0396:4D7E
#undef var_8
#define var_8 -8
	// 13354 var_8           = word ptr -8 ;~ 0396:4D7E
#undef var_6
#define var_6 -6
	// 13355 var_6           = word ptr -6 ;~ 0396:4D7E
#undef var_4
#define var_4 -4
	// 13356 var_4           = word ptr -4 ;~ 0396:4D7E
#undef var_2
#define var_2 -2
	// 13357 var_2           = word ptr -2 ;~ 0396:4D7E
#undef arg_0
#define arg_0 6
	// 13358 arg_0           = word ptr  6 ;~ 0396:4D7E
#undef arg_2
#define arg_2 8
	// 13359 arg_2           = word ptr  8 ;~ 0396:4D7E
#undef arg_4
#define arg_4 0x0A
	// 13360 arg_4           = word ptr  0Ah ;~ 0396:4D7E
#undef arg_6
#define arg_6 0x0C
	// 13361 arg_6           = byte ptr  0Ch ;~ 0396:4D7E
ret_396_4d7e:
	// 5080 
cs=0x396;eip=0x004d7e; 	X(PUSH(bp));	// 13363 push    bp ;~ 0396:4D7E
cs=0x396;eip=0x004d7f; 	T(MOV(bp, sp));	// 13364 mov     bp, sp ;~ 0396:4D7F
cs=0x396;eip=0x004d81; 	T(SUB(sp, 0x0C));	// 13365 sub     sp, 0Ch ;~ 0396:4D81
cs=0x396;eip=0x004d84; 	T(TEST(*(raddr(ss,bp+arg_6)), 1));	// 13366 test    [bp+arg_6], 1 ;~ 0396:4D84
cs=0x396;eip=0x004d88; 	R(JZ(loc_16cd6));	// 13367 jz      short loc_16CD6 ;~ 0396:4D88
cs=0x396;eip=0x004d8a; 	T(MOV(ax, 4));	// 13368 mov     ax, 4 ;~ 0396:4D8A
cs=0x396;eip=0x004d8d; 	X(PUSH(ax));	// 13369 push    ax ;~ 0396:4D8D
cs=0x396;eip=0x004d8e; 	R(CALLF(sub_27031,0));	// 13370 call    far ptr sub_27031 ;~ 0396:4D8E
cs=0x396;eip=0x004d93; 	T(ADD(sp, 2));	// 13371 add     sp, 2 ;~ 0396:4D93
loc_16cd6:
	// 5081 
cs=0x396;eip=0x004d96; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 13374 mov     bx, [bp+arg_4] ;~ 0396:4D96
cs=0x396;eip=0x004d99; 	T(MOV(al, *(raddr(ds,bx))));	// 13375 mov     al, [bx] ;~ 0396:4D99
cs=0x396;eip=0x004d9b; 	T(SUB(ah, ah));	// 13376 sub     ah, ah ;~ 0396:4D9B
cs=0x396;eip=0x004d9d; 	T(SUB(dx, dx));	// 13377 sub     dx, dx ;~ 0396:4D9D
cs=0x396;eip=0x004d9f; 	T(MOV(cx, 0x3E8));	// 13378 mov     cx, 3E8h ;~ 0396:4D9F
cs=0x396;eip=0x004da2; 	T(DIV2(cx));	// 13379 div     cx ;~ 0396:4DA2
cs=0x396;eip=0x004da4; 	T(MOV(ax, dx));	// 13380 mov     ax, dx ;~ 0396:4DA4
cs=0x396;eip=0x004da6; 	T(SUB(dx, dx));	// 13381 sub     dx, dx ;~ 0396:4DA6
cs=0x396;eip=0x004da8; 	T(MOV(cx, 0x64));	// 13382 mov     cx, 64h ; 'd' ;~ 0396:4DA8
cs=0x396;eip=0x004dab; 	T(DIV2(cx));	// 13383 div     cx ;~ 0396:4DAB
cs=0x396;eip=0x004dad; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 13384 mov     [bp+var_2], ax ;~ 0396:4DAD
cs=0x396;eip=0x004db0; 	T(OR(ax, ax));	// 13385 or      ax, ax ;~ 0396:4DB0
cs=0x396;eip=0x004db2; 	R(JZ(loc_16d4e));	// 13386 jz      short loc_16D4E ;~ 0396:4DB2
cs=0x396;eip=0x004db4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 13387 push    [bp+arg_2] ;~ 0396:4DB4
cs=0x396;eip=0x004db7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 13388 mov     ax, [bp+arg_0] ;~ 0396:4DB7
cs=0x396;eip=0x004dba; 	T(SUB(ax, 5));	// 13389 sub     ax, 5 ;~ 0396:4DBA
cs=0x396;eip=0x004dbd; 	X(PUSH(ax));	// 13390 push    ax ;~ 0396:4DBD
cs=0x396;eip=0x004dbe; 	R(CALLF(sub_26fb8,0));	// 13391 call    sub_26FB8 ;~ 0396:4DBE
cs=0x396;eip=0x004dc3; 	T(ADD(sp, 4));	// 13392 add     sp, 4 ;~ 0396:4DC3
cs=0x396;eip=0x004dc6; 	T(MOV(ax, 5));	// 13393 mov     ax, 5 ;~ 0396:4DC6
cs=0x396;eip=0x004dc9; 	X(PUSH(ax));	// 13394 push    ax ;~ 0396:4DC9
cs=0x396;eip=0x004dca; 	T(MOV(ax, 1));	// 13395 mov     ax, 1 ;~ 0396:4DCA
cs=0x396;eip=0x004dcd; 	X(PUSH(ax));	// 13396 push    ax ;~ 0396:4DCD
cs=0x396;eip=0x004dce; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13397 mov     ax, [bp+var_2] ;~ 0396:4DCE
cs=0x396;eip=0x004dd1; 	T(MOV(cx, ax));	// 13398 mov     cx, ax ;~ 0396:4DD1
cs=0x396;eip=0x004dd3; 	T(SHL(ax, 1));	// 13399 shl     ax, 1 ;~ 0396:4DD3
cs=0x396;eip=0x004dd5; 	T(SHL(ax, 1));	// 13400 shl     ax, 1 ;~ 0396:4DD5
cs=0x396;eip=0x004dd7; 	T(ADD(ax, cx));	// 13401 add     ax, cx ;~ 0396:4DD7
cs=0x396;eip=0x004dd9; 	T(ADD(ax, 0x0B75B));	// 13402 add     ax, 0B75Bh ;~ 0396:4DD9
cs=0x396;eip=0x004ddc; 	X(PUSH(ax));	// 13403 push    ax ;~ 0396:4DDC
cs=0x396;eip=0x004ddd; 	R(CALLF(sub_285fb,0));	// 13404 call    far ptr sub_285FB ;~ 0396:4DDD
cs=0x396;eip=0x004de2; 	T(ADD(sp, 6));	// 13405 add     sp, 6 ;~ 0396:4DE2
cs=0x396;eip=0x004de5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 13406 push    [bp+arg_2] ;~ 0396:4DE5
cs=0x396;eip=0x004de8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 13407 push    [bp+arg_0] ;~ 0396:4DE8
cs=0x396;eip=0x004deb; 	R(CALLF(sub_26fb8,0));	// 13408 call    sub_26FB8 ;~ 0396:4DEB
cs=0x396;eip=0x004df0; 	T(ADD(sp, 4));	// 13409 add     sp, 4 ;~ 0396:4DF0
cs=0x396;eip=0x004df3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 13410 mov     bx, [bp+arg_4] ;~ 0396:4DF3
cs=0x396;eip=0x004df6; 	T(MOV(al, *(raddr(ds,bx))));	// 13411 mov     al, [bx] ;~ 0396:4DF6
cs=0x396;eip=0x004df8; 	T(SUB(ah, ah));	// 13412 sub     ah, ah ;~ 0396:4DF8
cs=0x396;eip=0x004dfa; 	T(MOV(cl, 0x64));	// 13413 mov     cl, 64h ; 'd' ;~ 0396:4DFA
cs=0x396;eip=0x004dfc; 	T(DIV1(cl));	// 13414 div     cl ;~ 0396:4DFC
cs=0x396;eip=0x004dfe; 	T(MOV(al, ah));	// 13415 mov     al, ah ;~ 0396:4DFE
cs=0x396;eip=0x004e00; 	T(SUB(ah, ah));	// 13416 sub     ah, ah ;~ 0396:4E00
cs=0x396;eip=0x004e02; 	T(MOV(cl, 0x0A));	// 13417 mov     cl, 0Ah ;~ 0396:4E02
cs=0x396;eip=0x004e04; 	T(DIV1(cl));	// 13418 div     cl ;~ 0396:4E04
cs=0x396;eip=0x004e06; 	T(SUB(ah, ah));	// 13419 sub     ah, ah ;~ 0396:4E06
cs=0x396;eip=0x004e08; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 13420 mov     [bp+var_2], ax ;~ 0396:4E08
cs=0x396;eip=0x004e0b; 	R(JMP(loc_16d78));	// 13421 jmp     short loc_16D78 ;~ 0396:4E0B
loc_16d4e:
	// 5082 
cs=0x396;eip=0x004e0e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 13426 push    [bp+arg_2] ;~ 0396:4E0E
cs=0x396;eip=0x004e11; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 13427 push    [bp+arg_0] ;~ 0396:4E11
cs=0x396;eip=0x004e14; 	R(CALLF(sub_26fb8,0));	// 13428 call    sub_26FB8 ;~ 0396:4E14
cs=0x396;eip=0x004e19; 	T(ADD(sp, 4));	// 13429 add     sp, 4 ;~ 0396:4E19
cs=0x396;eip=0x004e1c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 13430 mov     bx, [bp+arg_4] ;~ 0396:4E1C
cs=0x396;eip=0x004e1f; 	T(MOV(al, *(raddr(ds,bx))));	// 13431 mov     al, [bx] ;~ 0396:4E1F
cs=0x396;eip=0x004e21; 	T(SUB(ah, ah));	// 13432 sub     ah, ah ;~ 0396:4E21
cs=0x396;eip=0x004e23; 	T(MOV(cl, 0x64));	// 13433 mov     cl, 64h ; 'd' ;~ 0396:4E23
cs=0x396;eip=0x004e25; 	T(DIV1(cl));	// 13434 div     cl ;~ 0396:4E25
cs=0x396;eip=0x004e27; 	T(MOV(al, ah));	// 13435 mov     al, ah ;~ 0396:4E27
cs=0x396;eip=0x004e29; 	T(SUB(ah, ah));	// 13436 sub     ah, ah ;~ 0396:4E29
cs=0x396;eip=0x004e2b; 	T(MOV(cl, 0x0A));	// 13437 mov     cl, 0Ah ;~ 0396:4E2B
cs=0x396;eip=0x004e2d; 	T(DIV1(cl));	// 13438 div     cl ;~ 0396:4E2D
cs=0x396;eip=0x004e2f; 	T(SUB(ah, ah));	// 13439 sub     ah, ah ;~ 0396:4E2F
cs=0x396;eip=0x004e31; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 13440 mov     [bp+var_2], ax ;~ 0396:4E31
cs=0x396;eip=0x004e34; 	T(OR(ax, ax));	// 13441 or      ax, ax ;~ 0396:4E34
cs=0x396;eip=0x004e36; 	R(JZ(loc_16d97));	// 13442 jz      short loc_16D97 ;~ 0396:4E36
loc_16d78:
	// 5083 
cs=0x396;eip=0x004e38; 	T(MOV(ax, 5));	// 13445 mov     ax, 5 ;~ 0396:4E38
cs=0x396;eip=0x004e3b; 	X(PUSH(ax));	// 13446 push    ax ;~ 0396:4E3B
cs=0x396;eip=0x004e3c; 	T(MOV(ax, 1));	// 13447 mov     ax, 1 ;~ 0396:4E3C
cs=0x396;eip=0x004e3f; 	X(PUSH(ax));	// 13448 push    ax ;~ 0396:4E3F
cs=0x396;eip=0x004e40; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13449 mov     ax, [bp+var_2] ;~ 0396:4E40
cs=0x396;eip=0x004e43; 	T(MOV(cx, ax));	// 13450 mov     cx, ax ;~ 0396:4E43
cs=0x396;eip=0x004e45; 	T(SHL(ax, 1));	// 13451 shl     ax, 1 ;~ 0396:4E45
cs=0x396;eip=0x004e47; 	T(SHL(ax, 1));	// 13452 shl     ax, 1 ;~ 0396:4E47
cs=0x396;eip=0x004e49; 	T(ADD(ax, cx));	// 13453 add     ax, cx ;~ 0396:4E49
cs=0x396;eip=0x004e4b; 	T(ADD(ax, 0x0B75B));	// 13454 add     ax, 0B75Bh ;~ 0396:4E4B
cs=0x396;eip=0x004e4e; 	X(PUSH(ax));	// 13455 push    ax ;~ 0396:4E4E
cs=0x396;eip=0x004e4f; 	R(CALLF(sub_285fb,0));	// 13456 call    far ptr sub_285FB ;~ 0396:4E4F
cs=0x396;eip=0x004e54; 	T(ADD(sp, 6));	// 13457 add     sp, 6 ;~ 0396:4E54
loc_16d97:
	// 5084 
cs=0x396;eip=0x004e57; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 13460 push    [bp+arg_2] ;~ 0396:4E57
cs=0x396;eip=0x004e5a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 13461 mov     ax, [bp+arg_0] ;~ 0396:4E5A
cs=0x396;eip=0x004e5d; 	T(ADD(ax, 5));	// 13462 add     ax, 5 ;~ 0396:4E5D
cs=0x396;eip=0x004e60; 	X(PUSH(ax));	// 13463 push    ax ;~ 0396:4E60
cs=0x396;eip=0x004e61; 	R(CALLF(sub_26fb8,0));	// 13464 call    sub_26FB8 ;~ 0396:4E61
cs=0x396;eip=0x004e66; 	T(ADD(sp, 4));	// 13465 add     sp, 4 ;~ 0396:4E66
cs=0x396;eip=0x004e69; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 13466 mov     bx, [bp+arg_4] ;~ 0396:4E69
cs=0x396;eip=0x004e6c; 	T(MOV(al, *(raddr(ds,bx))));	// 13467 mov     al, [bx] ;~ 0396:4E6C
cs=0x396;eip=0x004e6e; 	T(SUB(ah, ah));	// 13468 sub     ah, ah ;~ 0396:4E6E
cs=0x396;eip=0x004e70; 	T(MOV(cl, 0x0A));	// 13469 mov     cl, 0Ah ;~ 0396:4E70
cs=0x396;eip=0x004e72; 	T(DIV1(cl));	// 13470 div     cl ;~ 0396:4E72
cs=0x396;eip=0x004e74; 	T(MOV(al, ah));	// 13471 mov     al, ah ;~ 0396:4E74
cs=0x396;eip=0x004e76; 	T(SUB(ah, ah));	// 13472 sub     ah, ah ;~ 0396:4E76
cs=0x396;eip=0x004e78; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 13473 mov     [bp+var_2], ax ;~ 0396:4E78
cs=0x396;eip=0x004e7b; 	T(MOV(ax, 5));	// 13474 mov     ax, 5 ;~ 0396:4E7B
cs=0x396;eip=0x004e7e; 	X(PUSH(ax));	// 13475 push    ax ;~ 0396:4E7E
cs=0x396;eip=0x004e7f; 	T(MOV(ax, 1));	// 13476 mov     ax, 1 ;~ 0396:4E7F
cs=0x396;eip=0x004e82; 	X(PUSH(ax));	// 13477 push    ax ;~ 0396:4E82
cs=0x396;eip=0x004e83; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13478 mov     ax, [bp+var_2] ;~ 0396:4E83
cs=0x396;eip=0x004e86; 	T(MOV(cx, ax));	// 13479 mov     cx, ax ;~ 0396:4E86
cs=0x396;eip=0x004e88; 	T(SHL(ax, 1));	// 13480 shl     ax, 1 ;~ 0396:4E88
cs=0x396;eip=0x004e8a; 	T(SHL(ax, 1));	// 13481 shl     ax, 1 ;~ 0396:4E8A
cs=0x396;eip=0x004e8c; 	T(ADD(ax, cx));	// 13482 add     ax, cx ;~ 0396:4E8C
cs=0x396;eip=0x004e8e; 	T(ADD(ax, 0x0B75B));	// 13483 add     ax, 0B75Bh ;~ 0396:4E8E
cs=0x396;eip=0x004e91; 	X(PUSH(ax));	// 13484 push    ax ;~ 0396:4E91
cs=0x396;eip=0x004e92; 	R(CALLF(sub_285fb,0));	// 13485 call    far ptr sub_285FB ;~ 0396:4E92
cs=0x396;eip=0x004e97; 	T(ADD(sp, 6));	// 13486 add     sp, 6 ;~ 0396:4E97
cs=0x396;eip=0x004e9a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 13487 mov     ax, [bp+arg_2] ;~ 0396:4E9A
cs=0x396;eip=0x004e9d; 	T(DEC(ax));	// 13488 dec     ax ;~ 0396:4E9D
cs=0x396;eip=0x004e9e; 	X(PUSH(ax));	// 13489 push    ax ;~ 0396:4E9E
cs=0x396;eip=0x004e9f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 13490 mov     ax, [bp+arg_0] ;~ 0396:4E9F
cs=0x396;eip=0x004ea2; 	T(ADD(ax, 0x0B));	// 13491 add     ax, 0Bh ;~ 0396:4EA2
cs=0x396;eip=0x004ea5; 	X(PUSH(ax));	// 13492 push    ax ;~ 0396:4EA5
cs=0x396;eip=0x004ea6; 	R(CALLF(sub_273c5,0));	// 13493 call    sub_273C5 ;~ 0396:4EA6
cs=0x396;eip=0x004eab; 	T(ADD(sp, 4));	// 13494 add     sp, 4 ;~ 0396:4EAB
cs=0x396;eip=0x004eae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 13495 mov     ax, [bp+arg_2] ;~ 0396:4EAE
cs=0x396;eip=0x004eb1; 	T(SUB(ax, 3));	// 13496 sub     ax, 3 ;~ 0396:4EB1
cs=0x396;eip=0x004eb4; 	X(PUSH(ax));	// 13497 push    ax ;~ 0396:4EB4
cs=0x396;eip=0x004eb5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 13498 mov     ax, [bp+arg_0] ;~ 0396:4EB5
cs=0x396;eip=0x004eb8; 	T(ADD(ax, 0x0B));	// 13499 add     ax, 0Bh ;~ 0396:4EB8
cs=0x396;eip=0x004ebb; 	X(PUSH(ax));	// 13500 push    ax ;~ 0396:4EBB
cs=0x396;eip=0x004ebc; 	R(CALLF(sub_273c5,0));	// 13501 call    sub_273C5 ;~ 0396:4EBC
cs=0x396;eip=0x004ec1; 	T(ADD(sp, 4));	// 13502 add     sp, 4 ;~ 0396:4EC1
cs=0x396;eip=0x004ec4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 13503 push    [bp+arg_2] ;~ 0396:4EC4
cs=0x396;eip=0x004ec7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 13504 mov     ax, [bp+arg_0] ;~ 0396:4EC7
cs=0x396;eip=0x004eca; 	T(ADD(ax, 0x0E));	// 13505 add     ax, 0Eh ;~ 0396:4ECA
cs=0x396;eip=0x004ecd; 	X(PUSH(ax));	// 13506 push    ax ;~ 0396:4ECD
cs=0x396;eip=0x004ece; 	R(CALLF(sub_26fb8,0));	// 13507 call    sub_26FB8 ;~ 0396:4ECE
cs=0x396;eip=0x004ed3; 	T(ADD(sp, 4));	// 13508 add     sp, 4 ;~ 0396:4ED3
cs=0x396;eip=0x004ed6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 13509 mov     bx, [bp+arg_4] ;~ 0396:4ED6
cs=0x396;eip=0x004ed9; 	T(MOV(al, *(raddr(ds,bx+1))));	// 13510 mov     al, [bx+1] ;~ 0396:4ED9
cs=0x396;eip=0x004edc; 	T(SUB(ah, ah));	// 13511 sub     ah, ah ;~ 0396:4EDC
cs=0x396;eip=0x004ede; 	T(MOV(cl, 0x64));	// 13512 mov     cl, 64h ; 'd' ;~ 0396:4EDE
cs=0x396;eip=0x004ee0; 	T(DIV1(cl));	// 13513 div     cl ;~ 0396:4EE0
cs=0x396;eip=0x004ee2; 	T(MOV(al, ah));	// 13514 mov     al, ah ;~ 0396:4EE2
cs=0x396;eip=0x004ee4; 	T(SUB(ah, ah));	// 13515 sub     ah, ah ;~ 0396:4EE4
cs=0x396;eip=0x004ee6; 	T(MOV(cl, 0x0A));	// 13516 mov     cl, 0Ah ;~ 0396:4EE6
cs=0x396;eip=0x004ee8; 	T(DIV1(cl));	// 13517 div     cl ;~ 0396:4EE8
cs=0x396;eip=0x004eea; 	T(SUB(ah, ah));	// 13518 sub     ah, ah ;~ 0396:4EEA
cs=0x396;eip=0x004eec; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 13519 mov     [bp+var_2], ax ;~ 0396:4EEC
cs=0x396;eip=0x004eef; 	T(MOV(ax, 5));	// 13520 mov     ax, 5 ;~ 0396:4EEF
cs=0x396;eip=0x004ef2; 	X(PUSH(ax));	// 13521 push    ax ;~ 0396:4EF2
cs=0x396;eip=0x004ef3; 	T(MOV(ax, 1));	// 13522 mov     ax, 1 ;~ 0396:4EF3
cs=0x396;eip=0x004ef6; 	X(PUSH(ax));	// 13523 push    ax ;~ 0396:4EF6
cs=0x396;eip=0x004ef7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13524 mov     ax, [bp+var_2] ;~ 0396:4EF7
cs=0x396;eip=0x004efa; 	T(MOV(cx, ax));	// 13525 mov     cx, ax ;~ 0396:4EFA
cs=0x396;eip=0x004efc; 	T(SHL(ax, 1));	// 13526 shl     ax, 1 ;~ 0396:4EFC
cs=0x396;eip=0x004efe; 	T(SHL(ax, 1));	// 13527 shl     ax, 1 ;~ 0396:4EFE
cs=0x396;eip=0x004f00; 	T(ADD(ax, cx));	// 13528 add     ax, cx ;~ 0396:4F00
cs=0x396;eip=0x004f02; 	T(ADD(ax, 0x0B75B));	// 13529 add     ax, 0B75Bh ;~ 0396:4F02
cs=0x396;eip=0x004f05; 	X(PUSH(ax));	// 13530 push    ax ;~ 0396:4F05
cs=0x396;eip=0x004f06; 	R(CALLF(sub_285fb,0));	// 13531 call    far ptr sub_285FB ;~ 0396:4F06
cs=0x396;eip=0x004f0b; 	T(ADD(sp, 6));	// 13532 add     sp, 6 ;~ 0396:4F0B
cs=0x396;eip=0x004f0e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 13533 push    [bp+arg_2] ;~ 0396:4F0E
cs=0x396;eip=0x004f11; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 13534 mov     ax, [bp+arg_0] ;~ 0396:4F11
cs=0x396;eip=0x004f14; 	T(ADD(ax, 0x13));	// 13535 add     ax, 13h ;~ 0396:4F14
cs=0x396;eip=0x004f17; 	X(PUSH(ax));	// 13536 push    ax ;~ 0396:4F17
cs=0x396;eip=0x004f18; 	R(CALLF(sub_26fb8,0));	// 13537 call    sub_26FB8 ;~ 0396:4F18
cs=0x396;eip=0x004f1d; 	T(ADD(sp, 4));	// 13538 add     sp, 4 ;~ 0396:4F1D
cs=0x396;eip=0x004f20; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 13539 mov     bx, [bp+arg_4] ;~ 0396:4F20
cs=0x396;eip=0x004f23; 	T(MOV(al, *(raddr(ds,bx+1))));	// 13540 mov     al, [bx+1] ;~ 0396:4F23
cs=0x396;eip=0x004f26; 	T(SUB(ah, ah));	// 13541 sub     ah, ah ;~ 0396:4F26
cs=0x396;eip=0x004f28; 	T(MOV(cl, 0x0A));	// 13542 mov     cl, 0Ah ;~ 0396:4F28
cs=0x396;eip=0x004f2a; 	T(DIV1(cl));	// 13543 div     cl ;~ 0396:4F2A
cs=0x396;eip=0x004f2c; 	T(MOV(al, ah));	// 13544 mov     al, ah ;~ 0396:4F2C
cs=0x396;eip=0x004f2e; 	T(SUB(ah, ah));	// 13545 sub     ah, ah ;~ 0396:4F2E
cs=0x396;eip=0x004f30; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 13546 mov     [bp+var_2], ax ;~ 0396:4F30
cs=0x396;eip=0x004f33; 	T(MOV(ax, 5));	// 13547 mov     ax, 5 ;~ 0396:4F33
cs=0x396;eip=0x004f36; 	X(PUSH(ax));	// 13548 push    ax ;~ 0396:4F36
cs=0x396;eip=0x004f37; 	T(MOV(ax, 1));	// 13549 mov     ax, 1 ;~ 0396:4F37
cs=0x396;eip=0x004f3a; 	X(PUSH(ax));	// 13550 push    ax ;~ 0396:4F3A
cs=0x396;eip=0x004f3b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13551 mov     ax, [bp+var_2] ;~ 0396:4F3B
cs=0x396;eip=0x004f3e; 	T(MOV(cx, ax));	// 13552 mov     cx, ax ;~ 0396:4F3E
cs=0x396;eip=0x004f40; 	T(SHL(ax, 1));	// 13553 shl     ax, 1 ;~ 0396:4F40
cs=0x396;eip=0x004f42; 	T(SHL(ax, 1));	// 13554 shl     ax, 1 ;~ 0396:4F42
cs=0x396;eip=0x004f44; 	T(ADD(ax, cx));	// 13555 add     ax, cx ;~ 0396:4F44
cs=0x396;eip=0x004f46; 	T(ADD(ax, 0x0B75B));	// 13556 add     ax, 0B75Bh ;~ 0396:4F46
cs=0x396;eip=0x004f49; 	X(PUSH(ax));	// 13557 push    ax ;~ 0396:4F49
cs=0x396;eip=0x004f4a; 	R(CALLF(sub_285fb,0));	// 13558 call    far ptr sub_285FB ;~ 0396:4F4A
cs=0x396;eip=0x004f4f; 	T(ADD(sp, 6));	// 13559 add     sp, 6 ;~ 0396:4F4F
cs=0x396;eip=0x004f52; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 13560 push    [bp+arg_2] ;~ 0396:4F52
cs=0x396;eip=0x004f55; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 13561 mov     ax, [bp+arg_0] ;~ 0396:4F55
cs=0x396;eip=0x004f58; 	T(ADD(ax, 0x19));	// 13562 add     ax, 19h ;~ 0396:4F58
cs=0x396;eip=0x004f5b; 	X(PUSH(ax));	// 13563 push    ax ;~ 0396:4F5B
cs=0x396;eip=0x004f5c; 	R(CALLF(sub_273c5,0));	// 13564 call    sub_273C5 ;~ 0396:4F5C
cs=0x396;eip=0x004f61; 	T(ADD(sp, 4));	// 13565 add     sp, 4 ;~ 0396:4F61
cs=0x396;eip=0x004f64; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 13566 push    [bp+arg_2] ;~ 0396:4F64
cs=0x396;eip=0x004f67; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 13567 mov     ax, [bp+arg_0] ;~ 0396:4F67
cs=0x396;eip=0x004f6a; 	T(ADD(ax, 0x1C));	// 13568 add     ax, 1Ch ;~ 0396:4F6A
cs=0x396;eip=0x004f6d; 	X(PUSH(ax));	// 13569 push    ax ;~ 0396:4F6D
cs=0x396;eip=0x004f6e; 	R(CALLF(sub_26fb8,0));	// 13570 call    sub_26FB8 ;~ 0396:4F6E
cs=0x396;eip=0x004f73; 	T(ADD(sp, 4));	// 13571 add     sp, 4 ;~ 0396:4F73
cs=0x396;eip=0x004f76; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 13572 mov     bx, [bp+arg_4] ;~ 0396:4F76
cs=0x396;eip=0x004f79; 	T(MOV(al, *(raddr(ds,bx+2))));	// 13573 mov     al, [bx+2] ;~ 0396:4F79
cs=0x396;eip=0x004f7c; 	T(SUB(ah, ah));	// 13574 sub     ah, ah ;~ 0396:4F7C
cs=0x396;eip=0x004f7e; 	T(MOV(cl, 0x64));	// 13575 mov     cl, 64h ; 'd' ;~ 0396:4F7E
cs=0x396;eip=0x004f80; 	T(DIV1(cl));	// 13576 div     cl ;~ 0396:4F80
cs=0x396;eip=0x004f82; 	T(MOV(al, ah));	// 13577 mov     al, ah ;~ 0396:4F82
cs=0x396;eip=0x004f84; 	T(SUB(ah, ah));	// 13578 sub     ah, ah ;~ 0396:4F84
cs=0x396;eip=0x004f86; 	T(MOV(cl, 0x0A));	// 13579 mov     cl, 0Ah ;~ 0396:4F86
cs=0x396;eip=0x004f88; 	T(DIV1(cl));	// 13580 div     cl ;~ 0396:4F88
cs=0x396;eip=0x004f8a; 	T(SUB(ah, ah));	// 13581 sub     ah, ah ;~ 0396:4F8A
cs=0x396;eip=0x004f8c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 13582 mov     [bp+var_2], ax ;~ 0396:4F8C
cs=0x396;eip=0x004f8f; 	T(MOV(ax, 5));	// 13583 mov     ax, 5 ;~ 0396:4F8F
cs=0x396;eip=0x004f92; 	X(PUSH(ax));	// 13584 push    ax ;~ 0396:4F92
cs=0x396;eip=0x004f93; 	T(MOV(ax, 1));	// 13585 mov     ax, 1 ;~ 0396:4F93
cs=0x396;eip=0x004f96; 	X(PUSH(ax));	// 13586 push    ax ;~ 0396:4F96
cs=0x396;eip=0x004f97; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13587 mov     ax, [bp+var_2] ;~ 0396:4F97
cs=0x396;eip=0x004f9a; 	T(MOV(cx, ax));	// 13588 mov     cx, ax ;~ 0396:4F9A
cs=0x396;eip=0x004f9c; 	T(SHL(ax, 1));	// 13589 shl     ax, 1 ;~ 0396:4F9C
cs=0x396;eip=0x004f9e; 	T(SHL(ax, 1));	// 13590 shl     ax, 1 ;~ 0396:4F9E
cs=0x396;eip=0x004fa0; 	T(ADD(ax, cx));	// 13591 add     ax, cx ;~ 0396:4FA0
cs=0x396;eip=0x004fa2; 	T(ADD(ax, 0x0B75B));	// 13592 add     ax, 0B75Bh ;~ 0396:4FA2
cs=0x396;eip=0x004fa5; 	X(PUSH(ax));	// 13593 push    ax ;~ 0396:4FA5
cs=0x396;eip=0x004fa6; 	R(CALLF(sub_285fb,0));	// 13594 call    far ptr sub_285FB ;~ 0396:4FA6
cs=0x396;eip=0x004fab; 	T(ADD(sp, 6));	// 13595 add     sp, 6 ;~ 0396:4FAB
cs=0x396;eip=0x004fae; 	T(TEST(*(raddr(ss,bp+arg_6)), 1));	// 13596 test    [bp+arg_6], 1 ;~ 0396:4FAE
cs=0x396;eip=0x004fb2; 	R(JZ(loc_16eff));	// 13597 jz      short loc_16EFF ;~ 0396:4FB2
cs=0x396;eip=0x004fb4; 	T(SUB(ax, ax));	// 13598 sub     ax, ax ;~ 0396:4FB4
cs=0x396;eip=0x004fb6; 	X(PUSH(ax));	// 13599 push    ax ;~ 0396:4FB6
cs=0x396;eip=0x004fb7; 	R(CALLF(sub_27031,0));	// 13600 call    far ptr sub_27031 ;~ 0396:4FB7
cs=0x396;eip=0x004fbc; 	T(ADD(sp, 2));	// 13601 add     sp, 2 ;~ 0396:4FBC
loc_16eff:
	// 5085 
cs=0x396;eip=0x004fbf; 	T(TEST(*(raddr(ss,bp+arg_6)), 2));	// 13604 test    [bp+arg_6], 2 ;~ 0396:4FBF
cs=0x396;eip=0x004fc3; 	R(JZ(loc_16f11));	// 13605 jz      short loc_16F11 ;~ 0396:4FC3
cs=0x396;eip=0x004fc5; 	T(MOV(ax, 4));	// 13606 mov     ax, 4 ;~ 0396:4FC5
cs=0x396;eip=0x004fc8; 	X(PUSH(ax));	// 13607 push    ax ;~ 0396:4FC8
cs=0x396;eip=0x004fc9; 	R(CALLF(sub_27031,0));	// 13608 call    far ptr sub_27031 ;~ 0396:4FC9
cs=0x396;eip=0x004fce; 	T(ADD(sp, 2));	// 13609 add     sp, 2 ;~ 0396:4FCE
loc_16f11:
	// 5086 
cs=0x396;eip=0x004fd1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 13612 push    [bp+arg_2] ;~ 0396:4FD1
cs=0x396;eip=0x004fd4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 13613 mov     ax, [bp+arg_0] ;~ 0396:4FD4
cs=0x396;eip=0x004fd7; 	T(ADD(ax, 0x26));	// 13614 add     ax, 26h ; '&' ;~ 0396:4FD7
cs=0x396;eip=0x004fda; 	X(PUSH(ax));	// 13615 push    ax ;~ 0396:4FDA
cs=0x396;eip=0x004fdb; 	R(CALLF(sub_26fb8,0));	// 13616 call    sub_26FB8 ;~ 0396:4FDB
cs=0x396;eip=0x004fe0; 	T(ADD(sp, 4));	// 13617 add     sp, 4 ;~ 0396:4FE0
cs=0x396;eip=0x004fe3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 13618 mov     bx, [bp+arg_4] ;~ 0396:4FE3
cs=0x396;eip=0x004fe6; 	T(MOV(al, *(raddr(ds,bx+3))));	// 13619 mov     al, [bx+3] ;~ 0396:4FE6
cs=0x396;eip=0x004fe9; 	T(SUB(ah, ah));	// 13620 sub     ah, ah ;~ 0396:4FE9
cs=0x396;eip=0x004feb; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 13621 mov     [bp+var_C], ax ;~ 0396:4FEB
cs=0x396;eip=0x004fee; 	T(CMP(byte_352f8, ah));	// 13622 cmp     byte_352F8, ah ;~ 0396:4FEE
cs=0x396;eip=0x004ff2; 	R(JNZ(loc_16f41));	// 13623 jnz     short loc_16F41 ;~ 0396:4FF2
cs=0x396;eip=0x004ff4; 	T(MOV(cl, 3));	// 13624 mov     cl, 3 ;~ 0396:4FF4
cs=0x396;eip=0x004ff6; 	T(SHL(ax, cl));	// 13625 shl     ax, cl ;~ 0396:4FF6
cs=0x396;eip=0x004ff8; 	T(CWD);	// 13626 cwd ;~ 0396:4FF8
cs=0x396;eip=0x004ff9; 	T(MOV(cx, 5));	// 13627 mov     cx, 5 ;~ 0396:4FF9
cs=0x396;eip=0x004ffc; 	T(IDIV2(cx));	// 13628 idiv    cx ;~ 0396:4FFC
cs=0x396;eip=0x004ffe; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 13629 mov     [bp+var_C], ax ;~ 0396:4FFE
loc_16f41:
	// 5087 
cs=0x396;eip=0x005001; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 13632 mov     ax, [bp+var_C] ;~ 0396:5001
cs=0x396;eip=0x005004; 	T(CWD);	// 13633 cwd ;~ 0396:5004
cs=0x396;eip=0x005005; 	T(MOV(cx, 0x3E8));	// 13634 mov     cx, 3E8h ;~ 0396:5005
cs=0x396;eip=0x005008; 	T(IDIV2(cx));	// 13635 idiv    cx ;~ 0396:5008
cs=0x396;eip=0x00500a; 	T(MOV(ax, dx));	// 13636 mov     ax, dx ;~ 0396:500A
cs=0x396;eip=0x00500c; 	T(CWD);	// 13637 cwd ;~ 0396:500C
cs=0x396;eip=0x00500d; 	T(MOV(cx, 0x64));	// 13638 mov     cx, 64h ; 'd' ;~ 0396:500D
cs=0x396;eip=0x005010; 	T(IDIV2(cx));	// 13639 idiv    cx ;~ 0396:5010
cs=0x396;eip=0x005012; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 13640 mov     [bp+var_2], ax ;~ 0396:5012
cs=0x396;eip=0x005015; 	T(OR(ax, ax));	// 13641 or      ax, ax ;~ 0396:5015
cs=0x396;eip=0x005017; 	R(JZ(loc_16f78));	// 13642 jz      short loc_16F78 ;~ 0396:5017
cs=0x396;eip=0x005019; 	T(MOV(ax, 5));	// 13643 mov     ax, 5 ;~ 0396:5019
cs=0x396;eip=0x00501c; 	X(PUSH(ax));	// 13644 push    ax ;~ 0396:501C
cs=0x396;eip=0x00501d; 	T(MOV(ax, 1));	// 13645 mov     ax, 1 ;~ 0396:501D
cs=0x396;eip=0x005020; 	X(PUSH(ax));	// 13646 push    ax ;~ 0396:5020
cs=0x396;eip=0x005021; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13647 mov     ax, [bp+var_2] ;~ 0396:5021
cs=0x396;eip=0x005024; 	T(MOV(cx, ax));	// 13648 mov     cx, ax ;~ 0396:5024
cs=0x396;eip=0x005026; 	T(SHL(ax, 1));	// 13649 shl     ax, 1 ;~ 0396:5026
cs=0x396;eip=0x005028; 	T(SHL(ax, 1));	// 13650 shl     ax, 1 ;~ 0396:5028
cs=0x396;eip=0x00502a; 	T(ADD(ax, cx));	// 13651 add     ax, cx ;~ 0396:502A
cs=0x396;eip=0x00502c; 	T(ADD(ax, 0x0B75B));	// 13652 add     ax, 0B75Bh ;~ 0396:502C
cs=0x396;eip=0x00502f; 	X(PUSH(ax));	// 13653 push    ax ;~ 0396:502F
cs=0x396;eip=0x005030; 	R(CALLF(sub_285fb,0));	// 13654 call    far ptr sub_285FB ;~ 0396:5030
cs=0x396;eip=0x005035; 	T(ADD(sp, 6));	// 13655 add     sp, 6 ;~ 0396:5035
loc_16f78:
	// 5088 
cs=0x396;eip=0x005038; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 13658 push    [bp+arg_2] ;~ 0396:5038
cs=0x396;eip=0x00503b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 13659 mov     ax, [bp+arg_0] ;~ 0396:503B
cs=0x396;eip=0x00503e; 	T(ADD(ax, 0x2B));	// 13660 add     ax, 2Bh ; '+' ;~ 0396:503E
cs=0x396;eip=0x005041; 	X(PUSH(ax));	// 13661 push    ax ;~ 0396:5041
cs=0x396;eip=0x005042; 	R(CALLF(sub_26fb8,0));	// 13662 call    sub_26FB8 ;~ 0396:5042
cs=0x396;eip=0x005047; 	T(ADD(sp, 4));	// 13663 add     sp, 4 ;~ 0396:5047
cs=0x396;eip=0x00504a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 13664 mov     ax, [bp+var_C] ;~ 0396:504A
cs=0x396;eip=0x00504d; 	T(CWD);	// 13665 cwd ;~ 0396:504D
cs=0x396;eip=0x00504e; 	T(MOV(cx, 0x64));	// 13666 mov     cx, 64h ; 'd' ;~ 0396:504E
cs=0x396;eip=0x005051; 	T(IDIV2(cx));	// 13667 idiv    cx ;~ 0396:5051
cs=0x396;eip=0x005053; 	T(MOV(ax, dx));	// 13668 mov     ax, dx ;~ 0396:5053
cs=0x396;eip=0x005055; 	T(CWD);	// 13669 cwd ;~ 0396:5055
cs=0x396;eip=0x005056; 	T(MOV(cx, 0x0A));	// 13670 mov     cx, 0Ah ;~ 0396:5056
cs=0x396;eip=0x005059; 	T(IDIV2(cx));	// 13671 idiv    cx ;~ 0396:5059
cs=0x396;eip=0x00505b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 13672 mov     [bp+var_2], ax ;~ 0396:505B
cs=0x396;eip=0x00505e; 	T(MOV(ax, 5));	// 13673 mov     ax, 5 ;~ 0396:505E
cs=0x396;eip=0x005061; 	X(PUSH(ax));	// 13674 push    ax ;~ 0396:5061
cs=0x396;eip=0x005062; 	T(MOV(ax, 1));	// 13675 mov     ax, 1 ;~ 0396:5062
cs=0x396;eip=0x005065; 	X(PUSH(ax));	// 13676 push    ax ;~ 0396:5065
cs=0x396;eip=0x005066; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13677 mov     ax, [bp+var_2] ;~ 0396:5066
cs=0x396;eip=0x005069; 	T(MOV(cx, ax));	// 13678 mov     cx, ax ;~ 0396:5069
cs=0x396;eip=0x00506b; 	T(SHL(ax, 1));	// 13679 shl     ax, 1 ;~ 0396:506B
cs=0x396;eip=0x00506d; 	T(SHL(ax, 1));	// 13680 shl     ax, 1 ;~ 0396:506D
cs=0x396;eip=0x00506f; 	T(ADD(ax, cx));	// 13681 add     ax, cx ;~ 0396:506F
cs=0x396;eip=0x005071; 	T(ADD(ax, 0x0B75B));	// 13682 add     ax, 0B75Bh ;~ 0396:5071
cs=0x396;eip=0x005074; 	X(PUSH(ax));	// 13683 push    ax ;~ 0396:5074
cs=0x396;eip=0x005075; 	R(CALLF(sub_285fb,0));	// 13684 call    far ptr sub_285FB ;~ 0396:5075
cs=0x396;eip=0x00507a; 	T(ADD(sp, 6));	// 13685 add     sp, 6 ;~ 0396:507A
cs=0x396;eip=0x00507d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 13686 push    [bp+arg_2] ;~ 0396:507D
cs=0x396;eip=0x005080; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 13687 mov     ax, [bp+arg_0] ;~ 0396:5080
cs=0x396;eip=0x005083; 	T(ADD(ax, 0x30));	// 13688 add     ax, 30h ; '0' ;~ 0396:5083
cs=0x396;eip=0x005086; 	X(PUSH(ax));	// 13689 push    ax ;~ 0396:5086
cs=0x396;eip=0x005087; 	R(CALLF(sub_26fb8,0));	// 13690 call    sub_26FB8 ;~ 0396:5087
cs=0x396;eip=0x00508c; 	T(ADD(sp, 4));	// 13691 add     sp, 4 ;~ 0396:508C
cs=0x396;eip=0x00508f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 13692 mov     ax, [bp+var_C] ;~ 0396:508F
cs=0x396;eip=0x005092; 	T(CWD);	// 13693 cwd ;~ 0396:5092
cs=0x396;eip=0x005093; 	T(MOV(cx, 0x0A));	// 13694 mov     cx, 0Ah ;~ 0396:5093
cs=0x396;eip=0x005096; 	T(IDIV2(cx));	// 13695 idiv    cx ;~ 0396:5096
cs=0x396;eip=0x005098; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 13696 mov     [bp+var_2], dx ;~ 0396:5098
cs=0x396;eip=0x00509b; 	T(MOV(ax, 5));	// 13697 mov     ax, 5 ;~ 0396:509B
cs=0x396;eip=0x00509e; 	X(PUSH(ax));	// 13698 push    ax ;~ 0396:509E
cs=0x396;eip=0x00509f; 	T(MOV(ax, 1));	// 13699 mov     ax, 1 ;~ 0396:509F
cs=0x396;eip=0x0050a2; 	X(PUSH(ax));	// 13700 push    ax ;~ 0396:50A2
cs=0x396;eip=0x0050a3; 	T(MOV(ax, dx));	// 13701 mov     ax, dx ;~ 0396:50A3
cs=0x396;eip=0x0050a5; 	T(MOV(cx, ax));	// 13702 mov     cx, ax ;~ 0396:50A5
cs=0x396;eip=0x0050a7; 	T(SHL(ax, 1));	// 13703 shl     ax, 1 ;~ 0396:50A7
cs=0x396;eip=0x0050a9; 	T(SHL(ax, 1));	// 13704 shl     ax, 1 ;~ 0396:50A9
cs=0x396;eip=0x0050ab; 	T(ADD(ax, cx));	// 13705 add     ax, cx ;~ 0396:50AB
cs=0x396;eip=0x0050ad; 	T(ADD(ax, 0x0B75B));	// 13706 add     ax, 0B75Bh ;~ 0396:50AD
cs=0x396;eip=0x0050b0; 	X(PUSH(ax));	// 13707 push    ax ;~ 0396:50B0
cs=0x396;eip=0x0050b1; 	R(CALLF(sub_285fb,0));	// 13708 call    far ptr sub_285FB ;~ 0396:50B1
cs=0x396;eip=0x0050b6; 	T(ADD(sp, 6));	// 13709 add     sp, 6 ;~ 0396:50B6
cs=0x396;eip=0x0050b9; 	T(TEST(*(raddr(ss,bp+arg_6)), 2));	// 13710 test    [bp+arg_6], 2 ;~ 0396:50B9
cs=0x396;eip=0x0050bd; 	R(JZ(loc_1700a));	// 13711 jz      short loc_1700A ;~ 0396:50BD
cs=0x396;eip=0x0050bf; 	T(SUB(ax, ax));	// 13712 sub     ax, ax ;~ 0396:50BF
cs=0x396;eip=0x0050c1; 	X(PUSH(ax));	// 13713 push    ax ;~ 0396:50C1
cs=0x396;eip=0x0050c2; 	R(CALLF(sub_27031,0));	// 13714 call    far ptr sub_27031 ;~ 0396:50C2
cs=0x396;eip=0x0050c7; 	T(ADD(sp, 2));	// 13715 add     sp, 2 ;~ 0396:50C7
loc_1700a:
	// 5089 
cs=0x396;eip=0x0050ca; 	T(TEST(*(raddr(ss,bp+arg_6)), 4));	// 13718 test    [bp+arg_6], 4 ;~ 0396:50CA
cs=0x396;eip=0x0050ce; 	R(JZ(loc_1701c));	// 13719 jz      short loc_1701C ;~ 0396:50CE
cs=0x396;eip=0x0050d0; 	T(MOV(ax, 4));	// 13720 mov     ax, 4 ;~ 0396:50D0
cs=0x396;eip=0x0050d3; 	X(PUSH(ax));	// 13721 push    ax ;~ 0396:50D3
cs=0x396;eip=0x0050d4; 	R(CALLF(sub_27031,0));	// 13722 call    far ptr sub_27031 ;~ 0396:50D4
cs=0x396;eip=0x0050d9; 	T(ADD(sp, 2));	// 13723 add     sp, 2 ;~ 0396:50D9
loc_1701c:
	// 5090 
cs=0x396;eip=0x0050dc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 13726 mov     bx, [bp+arg_4] ;~ 0396:50DC
cs=0x396;eip=0x0050df; 	T(MOV(ah, *(raddr(ds,bx+5))));	// 13727 mov     ah, [bx+5] ;~ 0396:50DF
cs=0x396;eip=0x0050e2; 	T(SUB(al, al));	// 13728 sub     al, al ;~ 0396:50E2
cs=0x396;eip=0x0050e4; 	T(MOV(cl, *(raddr(ds,bx+4))));	// 13729 mov     cl, [bx+4] ;~ 0396:50E4
cs=0x396;eip=0x0050e7; 	T(SUB(ch, ch));	// 13730 sub     ch, ch ;~ 0396:50E7
cs=0x396;eip=0x0050e9; 	T(ADD(ax, cx));	// 13731 add     ax, cx ;~ 0396:50E9
cs=0x396;eip=0x0050eb; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 13732 mov     [bp+var_6], ax ;~ 0396:50EB
cs=0x396;eip=0x0050ee; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 13733 mov     [bp+var_4], 0 ;~ 0396:50EE
cs=0x396;eip=0x0050f3; 	T(MOV(ah, *(raddr(ds,bx+7))));	// 13734 mov     ah, [bx+7] ;~ 0396:50F3
cs=0x396;eip=0x0050f6; 	T(SUB(al, al));	// 13735 sub     al, al ;~ 0396:50F6
cs=0x396;eip=0x0050f8; 	T(MOV(cl, *(raddr(ds,bx+6))));	// 13736 mov     cl, [bx+6] ;~ 0396:50F8
cs=0x396;eip=0x0050fb; 	T(ADD(ax, cx));	// 13737 add     ax, cx ;~ 0396:50FB
cs=0x396;eip=0x0050fd; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 13738 mov     [bp+var_A], ax ;~ 0396:50FD
cs=0x396;eip=0x005100; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 13739 mov     [bp+var_8], 0 ;~ 0396:5100
cs=0x396;eip=0x005105; 	T(MOV(dx, ax));	// 13740 mov     dx, ax ;~ 0396:5105
cs=0x396;eip=0x005107; 	T(SUB(ax, ax));	// 13741 sub     ax, ax ;~ 0396:5107
cs=0x396;eip=0x005109; 	X(ADD(*(dw*)(raddr(ss,bp+var_6)), ax));	// 13742 add     [bp+var_6], ax ;~ 0396:5109
cs=0x396;eip=0x00510c; 	X(ADC(*(dw*)(raddr(ss,bp+var_4)), dx));	// 13743 adc     [bp+var_4], dx ;~ 0396:510C
cs=0x396;eip=0x00510f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 13744 mov     ax, [bp+arg_0] ;~ 0396:510F
cs=0x396;eip=0x005112; 	T(ADD(ax, 0x3A));	// 13745 add     ax, 3Ah ; ':' ;~ 0396:5112
cs=0x396;eip=0x005115; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 13746 mov     [bp+var_C], ax ;~ 0396:5115
cs=0x396;eip=0x005118; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x0E100));	// 13747 mov     [bp+var_A], 0E100h ;~ 0396:5118
cs=0x396;eip=0x00511d; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x5F5));	// 13748 mov     [bp+var_8], 5F5h ;~ 0396:511D
loc_17062:
	// 5091 
cs=0x396;eip=0x005122; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 13751 cmp     [bp+var_8], 0 ;~ 0396:5122
cs=0x396;eip=0x005126; 	R(JNZ(loc_17071));	// 13752 jnz     short loc_17071 ;~ 0396:5126
cs=0x396;eip=0x005128; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x0A));	// 13753 cmp     [bp+var_A], 0Ah ;~ 0396:5128
cs=0x396;eip=0x00512c; 	R(JNC(loc_17071));	// 13754 jnb     short loc_17071 ;~ 0396:512C
cs=0x396;eip=0x00512e; 	R(JMP(loc_1710c));	// 13755 jmp     loc_1710C ;~ 0396:512E
loc_17071:
	// 5092 
cs=0x396;eip=0x005131; 	T(MOV(ax, 0x0A));	// 13760 mov     ax, 0Ah ;~ 0396:5131
cs=0x396;eip=0x005134; 	T(CWD);	// 13761 cwd ;~ 0396:5134
cs=0x396;eip=0x005135; 	X(PUSH(dx));	// 13762 push    dx ;~ 0396:5135
cs=0x396;eip=0x005136; 	X(PUSH(ax));	// 13763 push    ax ;~ 0396:5136
cs=0x396;eip=0x005137; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 13764 push    [bp+var_8] ;~ 0396:5137
cs=0x396;eip=0x00513a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 13765 push    [bp+var_A] ;~ 0396:513A
cs=0x396;eip=0x00513d; 	R(CALLF(sub_29e14,0));	// 13766 call    sub_29E14 ;~ 0396:513D
cs=0x396;eip=0x005142; 	T(CMP(dx, *(dw*)(raddr(ss,bp+var_4))));	// 13767 cmp     dx, [bp+var_4] ;~ 0396:5142
cs=0x396;eip=0x005145; 	R(JC(loc_1709a));	// 13768 jb      short loc_1709A ;~ 0396:5145
cs=0x396;eip=0x005147; 	R(JA(loc_1708e));	// 13769 ja      short loc_1708E ;~ 0396:5147
cs=0x396;eip=0x005149; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_6))));	// 13770 cmp     ax, [bp+var_6] ;~ 0396:5149
cs=0x396;eip=0x00514c; 	R(JC(loc_1709a));	// 13771 jb      short loc_1709A ;~ 0396:514C
loc_1708e:
	// 5093 
cs=0x396;eip=0x00514e; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x0A));	// 13774 cmp     [bp+var_A], 0Ah ;~ 0396:514E
cs=0x396;eip=0x005152; 	R(JNZ(loc_170f9));	// 13775 jnz     short loc_170F9 ;~ 0396:5152
cs=0x396;eip=0x005154; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 13776 cmp     [bp+var_8], 0 ;~ 0396:5154
cs=0x396;eip=0x005158; 	R(JNZ(loc_170f9));	// 13777 jnz     short loc_170F9 ;~ 0396:5158
loc_1709a:
	// 5094 
cs=0x396;eip=0x00515a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 13781 push    [bp+arg_2] ;~ 0396:515A
cs=0x396;eip=0x00515d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 13782 push    [bp+var_C] ;~ 0396:515D
cs=0x396;eip=0x005160; 	R(CALLF(sub_26fb8,0));	// 13783 call    sub_26FB8 ;~ 0396:5160
cs=0x396;eip=0x005165; 	T(ADD(sp, 4));	// 13784 add     sp, 4 ;~ 0396:5165
cs=0x396;eip=0x005168; 	T(MOV(ax, 0x0A));	// 13785 mov     ax, 0Ah ;~ 0396:5168
cs=0x396;eip=0x00516b; 	T(CWD);	// 13786 cwd ;~ 0396:516B
cs=0x396;eip=0x00516c; 	X(PUSH(dx));	// 13787 push    dx ;~ 0396:516C
cs=0x396;eip=0x00516d; 	X(PUSH(ax));	// 13788 push    ax ;~ 0396:516D
cs=0x396;eip=0x00516e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 13789 push    [bp+var_8] ;~ 0396:516E
cs=0x396;eip=0x005171; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 13790 push    [bp+var_A] ;~ 0396:5171
cs=0x396;eip=0x005174; 	R(CALLF(sub_29e14,0));	// 13791 call    sub_29E14 ;~ 0396:5174
cs=0x396;eip=0x005179; 	X(PUSH(dx));	// 13792 push    dx ;~ 0396:5179
cs=0x396;eip=0x00517a; 	X(PUSH(ax));	// 13793 push    ax ;~ 0396:517A
cs=0x396;eip=0x00517b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 13794 push    [bp+var_8] ;~ 0396:517B
cs=0x396;eip=0x00517e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 13795 push    [bp+var_A] ;~ 0396:517E
cs=0x396;eip=0x005181; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 13796 push    [bp+var_4] ;~ 0396:5181
cs=0x396;eip=0x005184; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 13797 push    [bp+var_6] ;~ 0396:5184
cs=0x396;eip=0x005187; 	R(CALLF(sub_29e76,0));	// 13798 call    sub_29E76 ;~ 0396:5187
cs=0x396;eip=0x00518c; 	X(PUSH(dx));	// 13799 push    dx ;~ 0396:518C
cs=0x396;eip=0x00518d; 	X(PUSH(ax));	// 13800 push    ax ;~ 0396:518D
cs=0x396;eip=0x00518e; 	R(CALLF(sub_29e14,0));	// 13801 call    sub_29E14 ;~ 0396:518E
cs=0x396;eip=0x005193; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 13802 mov     [bp+var_2], ax ;~ 0396:5193
cs=0x396;eip=0x005196; 	T(MOV(ax, 5));	// 13803 mov     ax, 5 ;~ 0396:5196
cs=0x396;eip=0x005199; 	X(PUSH(ax));	// 13804 push    ax ;~ 0396:5199
cs=0x396;eip=0x00519a; 	T(MOV(ax, 1));	// 13805 mov     ax, 1 ;~ 0396:519A
cs=0x396;eip=0x00519d; 	X(PUSH(ax));	// 13806 push    ax ;~ 0396:519D
cs=0x396;eip=0x00519e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13807 mov     ax, [bp+var_2] ;~ 0396:519E
cs=0x396;eip=0x0051a1; 	T(MOV(cx, ax));	// 13808 mov     cx, ax ;~ 0396:51A1
cs=0x396;eip=0x0051a3; 	T(SHL(ax, 1));	// 13809 shl     ax, 1 ;~ 0396:51A3
cs=0x396;eip=0x0051a5; 	T(SHL(ax, 1));	// 13810 shl     ax, 1 ;~ 0396:51A5
cs=0x396;eip=0x0051a7; 	T(ADD(ax, cx));	// 13811 add     ax, cx ;~ 0396:51A7
cs=0x396;eip=0x0051a9; 	T(ADD(ax, 0x0B75B));	// 13812 add     ax, 0B75Bh ;~ 0396:51A9
cs=0x396;eip=0x0051ac; 	X(PUSH(ax));	// 13813 push    ax ;~ 0396:51AC
cs=0x396;eip=0x0051ad; 	R(CALLF(sub_285fb,0));	// 13814 call    far ptr sub_285FB ;~ 0396:51AD
cs=0x396;eip=0x0051b2; 	T(ADD(sp, 6));	// 13815 add     sp, 6 ;~ 0396:51B2
cs=0x396;eip=0x0051b5; 	X(ADD(*(dw*)(raddr(ss,bp+var_c)), 5));	// 13816 add     [bp+var_C], 5 ;~ 0396:51B5
loc_170f9:
	// 5095 
cs=0x396;eip=0x0051b9; 	T(MOV(ax, 0x0A));	// 13820 mov     ax, 0Ah ;~ 0396:51B9
cs=0x396;eip=0x0051bc; 	T(CWD);	// 13821 cwd ;~ 0396:51BC
cs=0x396;eip=0x0051bd; 	X(PUSH(dx));	// 13822 push    dx ;~ 0396:51BD
cs=0x396;eip=0x0051be; 	X(PUSH(ax));	// 13823 push    ax ;~ 0396:51BE
cs=0x396;eip=0x0051bf; 	T(ax = bp+var_a);	// 13824 lea     ax, [bp+var_A] ;~ 0396:51BF
cs=0x396;eip=0x0051c2; 	X(PUSH(ax));	// 13825 push    ax ;~ 0396:51C2
cs=0x396;eip=0x0051c3; 	R(CALLF(sub_29df0,0));	// 13826 call    sub_29DF0 ;~ 0396:51C3
cs=0x396;eip=0x0051c8; 	R(JMP(loc_17062));	// 13827 jmp     loc_17062 ;~ 0396:51C8
loc_1710c:
	// 5096 
cs=0x396;eip=0x0051cc; 	T(TEST(*(raddr(ss,bp+arg_6)), 4));	// 13832 test    [bp+arg_6], 4 ;~ 0396:51CC
cs=0x396;eip=0x0051d0; 	R(JZ(loc_1711d));	// 13833 jz      short loc_1711D ;~ 0396:51D0
cs=0x396;eip=0x0051d2; 	T(SUB(ax, ax));	// 13834 sub     ax, ax ;~ 0396:51D2
cs=0x396;eip=0x0051d4; 	X(PUSH(ax));	// 13835 push    ax ;~ 0396:51D4
cs=0x396;eip=0x0051d5; 	R(CALLF(sub_27031,0));	// 13836 call    far ptr sub_27031 ;~ 0396:51D5
cs=0x396;eip=0x0051da; 	T(ADD(sp, 2));	// 13837 add     sp, 2 ;~ 0396:51DA
loc_1711d:
	// 5097 
cs=0x396;eip=0x0051dd; 	T(MOV(sp, bp));	// 13840 mov     sp, bp ;~ 0396:51DD
cs=0x396;eip=0x0051df; 	X(POP(bp));	// 13841 pop     bp ;~ 0396:51DF
cs=0x396;eip=0x0051e0; 	R(RETF(0));	// 13842 retf ;~ 0396:51E0
sub_17122:
	// 13852 
#undef var_12
#define var_12 -0x12
	// 13855 var_12          = word ptr -12h ;~ 0396:51E2
#undef var_10
#define var_10 -0x10
	// 13856 var_10          = word ptr -10h ;~ 0396:51E2
#undef var_e
#define var_e -0x0E
	// 13857 var_E           = word ptr -0Eh ;~ 0396:51E2
#undef var_c
#define var_c -0x0C
	// 13858 var_C           = word ptr -0Ch ;~ 0396:51E2
#undef var_a
#define var_a -0x0A
	// 13859 var_A           = word ptr -0Ah ;~ 0396:51E2
#undef var_8
#define var_8 -8
	// 13860 var_8           = word ptr -8 ;~ 0396:51E2
#undef var_6
#define var_6 -6
	// 13861 var_6           = word ptr -6 ;~ 0396:51E2
#undef var_4
#define var_4 -4
	// 13862 var_4           = word ptr -4 ;~ 0396:51E2
#undef var_2
#define var_2 -2
	// 13863 var_2           = word ptr -2 ;~ 0396:51E2
#undef arg_0
#define arg_0 6
	// 13864 arg_0           = word ptr  6 ;~ 0396:51E2
#undef arg_2
#define arg_2 8
	// 13865 arg_2           = word ptr  8 ;~ 0396:51E2
ret_396_51e2:
	// 5098 
cs=0x396;eip=0x0051e2; 	X(PUSH(bp));	// 13867 push    bp ;~ 0396:51E2
cs=0x396;eip=0x0051e3; 	T(MOV(bp, sp));	// 13868 mov     bp, sp ;~ 0396:51E3
cs=0x396;eip=0x0051e5; 	T(SUB(sp, 0x12));	// 13869 sub     sp, 12h ;~ 0396:51E5
cs=0x396;eip=0x0051e8; 	X(PUSH(di));	// 13870 push    di ;~ 0396:51E8
cs=0x396;eip=0x0051e9; 	X(PUSH(si));	// 13871 push    si ;~ 0396:51E9
cs=0x396;eip=0x0051ea; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 13872 mov     [bp+var_2], 0 ;~ 0396:51EA
cs=0x396;eip=0x0051ef; 	T(MOV(ax, 0x1770));	// 13873 mov     ax, 1770h ;~ 0396:51EF
cs=0x396;eip=0x0051f2; 	T(CWD);	// 13874 cwd ;~ 0396:51F2
cs=0x396;eip=0x0051f3; 	X(PUSH(dx));	// 13875 push    dx ;~ 0396:51F3
cs=0x396;eip=0x0051f4; 	X(PUSH(ax));	// 13876 push    ax ;~ 0396:51F4
cs=0x396;eip=0x0051f5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 13877 mov     bx, [bp+arg_0] ;~ 0396:51F5
cs=0x396;eip=0x0051f8; 	T(MOV(al, *(raddr(ds,bx))));	// 13878 mov     al, [bx] ;~ 0396:51F8
cs=0x396;eip=0x0051fa; 	T(SUB(ah, ah));	// 13879 sub     ah, ah ;~ 0396:51FA
cs=0x396;eip=0x0051fc; 	T(SUB(cx, cx));	// 13880 sub     cx, cx ;~ 0396:51FC
cs=0x396;eip=0x0051fe; 	X(PUSH(cx));	// 13881 push    cx ;~ 0396:51FE
cs=0x396;eip=0x0051ff; 	X(PUSH(ax));	// 13882 push    ax ;~ 0396:51FF
cs=0x396;eip=0x005200; 	R(CALLF(sub_29d98,0));	// 13883 call    sub_29D98 ;~ 0396:5200
cs=0x396;eip=0x005205; 	T(MOV(cx, 0x64));	// 13884 mov     cx, 64h ; 'd' ;~ 0396:5205
cs=0x396;eip=0x005208; 	T(SUB(bx, bx));	// 13885 sub     bx, bx ;~ 0396:5208
cs=0x396;eip=0x00520a; 	X(PUSH(bx));	// 13886 push    bx ;~ 0396:520A
cs=0x396;eip=0x00520b; 	X(PUSH(cx));	// 13887 push    cx ;~ 0396:520B
cs=0x396;eip=0x00520c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 13888 mov     bx, [bp+arg_0] ;~ 0396:520C
cs=0x396;eip=0x00520f; 	T(MOV(cl, *(raddr(ds,bx+1))));	// 13889 mov     cl, [bx+1] ;~ 0396:520F
cs=0x396;eip=0x005212; 	T(SUB(ch, ch));	// 13890 sub     ch, ch ;~ 0396:5212
cs=0x396;eip=0x005214; 	T(SUB(bx, bx));	// 13891 sub     bx, bx ;~ 0396:5214
cs=0x396;eip=0x005216; 	X(PUSH(bx));	// 13892 push    bx ;~ 0396:5216
cs=0x396;eip=0x005217; 	X(PUSH(cx));	// 13893 push    cx ;~ 0396:5217
cs=0x396;eip=0x005218; 	T(MOV(si, ax));	// 13894 mov     si, ax ;~ 0396:5218
cs=0x396;eip=0x00521a; 	T(MOV(di, dx));	// 13895 mov     di, dx ;~ 0396:521A
cs=0x396;eip=0x00521c; 	R(CALLF(sub_29d98,0));	// 13896 call    sub_29D98 ;~ 0396:521C
cs=0x396;eip=0x005221; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 13897 mov     bx, [bp+arg_0] ;~ 0396:5221
cs=0x396;eip=0x005224; 	T(MOV(cl, *(raddr(ds,bx+2))));	// 13898 mov     cl, [bx+2] ;~ 0396:5224
cs=0x396;eip=0x005227; 	T(SUB(ch, ch));	// 13899 sub     ch, ch ;~ 0396:5227
cs=0x396;eip=0x005229; 	T(SUB(bx, bx));	// 13900 sub     bx, bx ;~ 0396:5229
cs=0x396;eip=0x00522b; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 13901 mov     [bp+var_12], ax ;~ 0396:522B
cs=0x396;eip=0x00522e; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), dx));	// 13902 mov     [bp+var_10], dx ;~ 0396:522E
cs=0x396;eip=0x005231; 	T(MOV(ax, cx));	// 13903 mov     ax, cx ;~ 0396:5231
cs=0x396;eip=0x005233; 	T(MOV(dx, bx));	// 13904 mov     dx, bx ;~ 0396:5233
cs=0x396;eip=0x005235; 	T(SHL(cx, 1));	// 13905 shl     cx, 1 ;~ 0396:5235
cs=0x396;eip=0x005237; 	T(RCL(bx, 1));	// 13906 rcl     bx, 1 ;~ 0396:5237
cs=0x396;eip=0x005239; 	T(SHL(cx, 1));	// 13907 shl     cx, 1 ;~ 0396:5239
cs=0x396;eip=0x00523b; 	T(RCL(bx, 1));	// 13908 rcl     bx, 1 ;~ 0396:523B
cs=0x396;eip=0x00523d; 	T(ADD(cx, ax));	// 13909 add     cx, ax ;~ 0396:523D
cs=0x396;eip=0x00523f; 	T(ADC(bx, dx));	// 13910 adc     bx, dx ;~ 0396:523F
cs=0x396;eip=0x005241; 	T(SHL(cx, 1));	// 13911 shl     cx, 1 ;~ 0396:5241
cs=0x396;eip=0x005243; 	T(RCL(bx, 1));	// 13912 rcl     bx, 1 ;~ 0396:5243
cs=0x396;eip=0x005245; 	T(ADD(cx, *(dw*)(raddr(ss,bp+var_12))));	// 13913 add     cx, [bp+var_12] ;~ 0396:5245
cs=0x396;eip=0x005248; 	T(ADC(bx, *(dw*)(raddr(ss,bp+var_10))));	// 13914 adc     bx, [bp+var_10] ;~ 0396:5248
cs=0x396;eip=0x00524b; 	T(ADD(cx, si));	// 13915 add     cx, si ;~ 0396:524B
cs=0x396;eip=0x00524d; 	T(ADC(bx, di));	// 13916 adc     bx, di ;~ 0396:524D
cs=0x396;eip=0x00524f; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), cx));	// 13917 mov     [bp+var_6], cx ;~ 0396:524F
cs=0x396;eip=0x005252; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), bx));	// 13918 mov     [bp+var_4], bx ;~ 0396:5252
cs=0x396;eip=0x005255; 	T(MOV(ax, 0x1770));	// 13919 mov     ax, 1770h ;~ 0396:5255
cs=0x396;eip=0x005258; 	T(CWD);	// 13920 cwd ;~ 0396:5258
cs=0x396;eip=0x005259; 	X(PUSH(dx));	// 13921 push    dx ;~ 0396:5259
cs=0x396;eip=0x00525a; 	X(PUSH(ax));	// 13922 push    ax ;~ 0396:525A
cs=0x396;eip=0x00525b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 13923 mov     bx, [bp+arg_2] ;~ 0396:525B
cs=0x396;eip=0x00525e; 	T(MOV(al, *(raddr(ds,bx))));	// 13924 mov     al, [bx] ;~ 0396:525E
cs=0x396;eip=0x005260; 	T(SUB(ah, ah));	// 13925 sub     ah, ah ;~ 0396:5260
cs=0x396;eip=0x005262; 	T(SUB(cx, cx));	// 13926 sub     cx, cx ;~ 0396:5262
cs=0x396;eip=0x005264; 	X(PUSH(cx));	// 13927 push    cx ;~ 0396:5264
cs=0x396;eip=0x005265; 	X(PUSH(ax));	// 13928 push    ax ;~ 0396:5265
cs=0x396;eip=0x005266; 	R(CALLF(sub_29d98,0));	// 13929 call    sub_29D98 ;~ 0396:5266
cs=0x396;eip=0x00526b; 	T(MOV(cx, 0x64));	// 13930 mov     cx, 64h ; 'd' ;~ 0396:526B
cs=0x396;eip=0x00526e; 	T(SUB(bx, bx));	// 13931 sub     bx, bx ;~ 0396:526E
cs=0x396;eip=0x005270; 	X(PUSH(bx));	// 13932 push    bx ;~ 0396:5270
cs=0x396;eip=0x005271; 	X(PUSH(cx));	// 13933 push    cx ;~ 0396:5271
cs=0x396;eip=0x005272; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 13934 mov     bx, [bp+arg_2] ;~ 0396:5272
cs=0x396;eip=0x005275; 	T(MOV(cl, *(raddr(ds,bx+1))));	// 13935 mov     cl, [bx+1] ;~ 0396:5275
cs=0x396;eip=0x005278; 	T(SUB(ch, ch));	// 13936 sub     ch, ch ;~ 0396:5278
cs=0x396;eip=0x00527a; 	T(SUB(bx, bx));	// 13937 sub     bx, bx ;~ 0396:527A
cs=0x396;eip=0x00527c; 	X(PUSH(bx));	// 13938 push    bx ;~ 0396:527C
cs=0x396;eip=0x00527d; 	X(PUSH(cx));	// 13939 push    cx ;~ 0396:527D
cs=0x396;eip=0x00527e; 	T(MOV(si, ax));	// 13940 mov     si, ax ;~ 0396:527E
cs=0x396;eip=0x005280; 	T(MOV(di, dx));	// 13941 mov     di, dx ;~ 0396:5280
cs=0x396;eip=0x005282; 	R(CALLF(sub_29d98,0));	// 13942 call    sub_29D98 ;~ 0396:5282
cs=0x396;eip=0x005287; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 13943 mov     bx, [bp+arg_2] ;~ 0396:5287
cs=0x396;eip=0x00528a; 	T(MOV(cl, *(raddr(ds,bx+2))));	// 13944 mov     cl, [bx+2] ;~ 0396:528A
cs=0x396;eip=0x00528d; 	T(SUB(ch, ch));	// 13945 sub     ch, ch ;~ 0396:528D
cs=0x396;eip=0x00528f; 	T(SUB(bx, bx));	// 13946 sub     bx, bx ;~ 0396:528F
cs=0x396;eip=0x005291; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 13947 mov     [bp+var_12], ax ;~ 0396:5291
cs=0x396;eip=0x005294; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), dx));	// 13948 mov     [bp+var_10], dx ;~ 0396:5294
cs=0x396;eip=0x005297; 	T(MOV(ax, cx));	// 13949 mov     ax, cx ;~ 0396:5297
cs=0x396;eip=0x005299; 	T(MOV(dx, bx));	// 13950 mov     dx, bx ;~ 0396:5299
cs=0x396;eip=0x00529b; 	T(SHL(cx, 1));	// 13951 shl     cx, 1 ;~ 0396:529B
cs=0x396;eip=0x00529d; 	T(RCL(bx, 1));	// 13952 rcl     bx, 1 ;~ 0396:529D
cs=0x396;eip=0x00529f; 	T(SHL(cx, 1));	// 13953 shl     cx, 1 ;~ 0396:529F
cs=0x396;eip=0x0052a1; 	T(RCL(bx, 1));	// 13954 rcl     bx, 1 ;~ 0396:52A1
cs=0x396;eip=0x0052a3; 	T(ADD(cx, ax));	// 13955 add     cx, ax ;~ 0396:52A3
cs=0x396;eip=0x0052a5; 	T(ADC(bx, dx));	// 13956 adc     bx, dx ;~ 0396:52A5
cs=0x396;eip=0x0052a7; 	T(SHL(cx, 1));	// 13957 shl     cx, 1 ;~ 0396:52A7
cs=0x396;eip=0x0052a9; 	T(RCL(bx, 1));	// 13958 rcl     bx, 1 ;~ 0396:52A9
cs=0x396;eip=0x0052ab; 	T(ADD(cx, *(dw*)(raddr(ss,bp+var_12))));	// 13959 add     cx, [bp+var_12] ;~ 0396:52AB
cs=0x396;eip=0x0052ae; 	T(ADC(bx, *(dw*)(raddr(ss,bp+var_10))));	// 13960 adc     bx, [bp+var_10] ;~ 0396:52AE
cs=0x396;eip=0x0052b1; 	T(ADD(cx, si));	// 13961 add     cx, si ;~ 0396:52B1
cs=0x396;eip=0x0052b3; 	T(ADC(bx, di));	// 13962 adc     bx, di ;~ 0396:52B3
cs=0x396;eip=0x0052b5; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), cx));	// 13963 mov     [bp+var_A], cx ;~ 0396:52B5
cs=0x396;eip=0x0052b8; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), bx));	// 13964 mov     [bp+var_8], bx ;~ 0396:52B8
cs=0x396;eip=0x0052bb; 	T(MOV(ax, cx));	// 13965 mov     ax, cx ;~ 0396:52BB
cs=0x396;eip=0x0052bd; 	T(MOV(dx, bx));	// 13966 mov     dx, bx ;~ 0396:52BD
cs=0x396;eip=0x0052bf; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), dx));	// 13967 cmp     [bp+var_4], dx ;~ 0396:52BF
cs=0x396;eip=0x0052c2; 	R(JC(loc_17212));	// 13968 jb      short loc_17212 ;~ 0396:52C2
cs=0x396;eip=0x0052c4; 	R(JA(loc_1720b));	// 13969 ja      short loc_1720B ;~ 0396:52C4
cs=0x396;eip=0x0052c6; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 13970 cmp     [bp+var_6], ax ;~ 0396:52C6
cs=0x396;eip=0x0052c9; 	R(JBE(loc_17212));	// 13971 jbe     short loc_17212 ;~ 0396:52C9
loc_1720b:
	// 5099 
cs=0x396;eip=0x0052cb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 13974 mov     ax, [bp+var_A] ;~ 0396:52CB
cs=0x396;eip=0x0052ce; 	T(OR(ax, bx));	// 13975 or      ax, bx ;~ 0396:52CE
cs=0x396;eip=0x0052d0; 	R(JNZ(loc_17237));	// 13976 jnz     short loc_17237 ;~ 0396:52D0
loc_17212:
	// 5100 
cs=0x396;eip=0x0052d2; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 13980 inc     [bp+var_2] ;~ 0396:52D2
cs=0x396;eip=0x0052d5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 13981 mov     bx, [bp+arg_2] ;~ 0396:52D5
cs=0x396;eip=0x0052d8; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 13982 mov     si, [bp+arg_0] ;~ 0396:52D8
cs=0x396;eip=0x0052db; 	T(MOV(al, *(raddr(ds,si))));	// 13983 mov     al, [si] ;~ 0396:52DB
cs=0x396;eip=0x0052dd; 	X(MOV(*(raddr(ds,bx)), al));	// 13984 mov     [bx], al ;~ 0396:52DD
cs=0x396;eip=0x0052df; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 13985 mov     bx, [bp+arg_2] ;~ 0396:52DF
cs=0x396;eip=0x0052e2; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 13986 mov     si, [bp+arg_0] ;~ 0396:52E2
cs=0x396;eip=0x0052e5; 	T(MOV(al, *(raddr(ds,si+1))));	// 13987 mov     al, [si+1] ;~ 0396:52E5
cs=0x396;eip=0x0052e8; 	X(MOV(*(raddr(ds,bx+1)), al));	// 13988 mov     [bx+1], al ;~ 0396:52E8
cs=0x396;eip=0x0052eb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 13989 mov     bx, [bp+arg_2] ;~ 0396:52EB
cs=0x396;eip=0x0052ee; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 13990 mov     si, [bp+arg_0] ;~ 0396:52EE
cs=0x396;eip=0x0052f1; 	T(MOV(al, *(raddr(ds,si+2))));	// 13991 mov     al, [si+2] ;~ 0396:52F1
cs=0x396;eip=0x0052f4; 	X(MOV(*(raddr(ds,bx+2)), al));	// 13992 mov     [bx+2], al ;~ 0396:52F4
loc_17237:
	// 5101 
cs=0x396;eip=0x0052f7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 13995 mov     bx, [bp+arg_0] ;~ 0396:52F7
cs=0x396;eip=0x0052fa; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 13996 mov     si, [bp+arg_2] ;~ 0396:52FA
cs=0x396;eip=0x0052fd; 	T(MOV(al, *(raddr(ds,si+3))));	// 13997 mov     al, [si+3] ;~ 0396:52FD
cs=0x396;eip=0x005300; 	T(CMP(*(raddr(ds,bx+3)), al));	// 13998 cmp     [bx+3], al ;~ 0396:5300
cs=0x396;eip=0x005303; 	R(JC(loc_17254));	// 13999 jb      short loc_17254 ;~ 0396:5303
cs=0x396;eip=0x005305; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), 2));	// 14000 add     [bp+var_2], 2 ;~ 0396:5305
cs=0x396;eip=0x005309; 	T(MOV(bx, si));	// 14001 mov     bx, si ;~ 0396:5309
cs=0x396;eip=0x00530b; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 14002 mov     si, [bp+arg_0] ;~ 0396:530B
cs=0x396;eip=0x00530e; 	T(MOV(al, *(raddr(ds,si+3))));	// 14003 mov     al, [si+3] ;~ 0396:530E
cs=0x396;eip=0x005311; 	X(MOV(*(raddr(ds,bx+3)), al));	// 14004 mov     [bx+3], al ;~ 0396:5311
loc_17254:
	// 5102 
cs=0x396;eip=0x005314; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14007 mov     bx, [bp+arg_0] ;~ 0396:5314
cs=0x396;eip=0x005317; 	T(MOV(ah, *(raddr(ds,bx+5))));	// 14008 mov     ah, [bx+5] ;~ 0396:5317
cs=0x396;eip=0x00531a; 	T(SUB(al, al));	// 14009 sub     al, al ;~ 0396:531A
cs=0x396;eip=0x00531c; 	T(MOV(cl, *(raddr(ds,bx+4))));	// 14010 mov     cl, [bx+4] ;~ 0396:531C
cs=0x396;eip=0x00531f; 	T(SUB(ch, ch));	// 14011 sub     ch, ch ;~ 0396:531F
cs=0x396;eip=0x005321; 	T(ADD(ax, cx));	// 14012 add     ax, cx ;~ 0396:5321
cs=0x396;eip=0x005323; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 14013 mov     [bp+var_6], ax ;~ 0396:5323
cs=0x396;eip=0x005326; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 14014 mov     [bp+var_4], 0 ;~ 0396:5326
cs=0x396;eip=0x00532b; 	T(MOV(ah, *(raddr(ds,bx+7))));	// 14015 mov     ah, [bx+7] ;~ 0396:532B
cs=0x396;eip=0x00532e; 	T(SUB(al, al));	// 14016 sub     al, al ;~ 0396:532E
cs=0x396;eip=0x005330; 	T(MOV(cl, *(raddr(ds,bx+6))));	// 14017 mov     cl, [bx+6] ;~ 0396:5330
cs=0x396;eip=0x005333; 	T(ADD(ax, cx));	// 14018 add     ax, cx ;~ 0396:5333
cs=0x396;eip=0x005335; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 14019 mov     [bp+var_A], ax ;~ 0396:5335
cs=0x396;eip=0x005338; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 14020 mov     [bp+var_8], 0 ;~ 0396:5338
cs=0x396;eip=0x00533d; 	T(MOV(dx, ax));	// 14021 mov     dx, ax ;~ 0396:533D
cs=0x396;eip=0x00533f; 	T(SUB(ax, ax));	// 14022 sub     ax, ax ;~ 0396:533F
cs=0x396;eip=0x005341; 	X(ADD(*(dw*)(raddr(ss,bp+var_6)), ax));	// 14023 add     [bp+var_6], ax ;~ 0396:5341
cs=0x396;eip=0x005344; 	X(ADC(*(dw*)(raddr(ss,bp+var_4)), dx));	// 14024 adc     [bp+var_4], dx ;~ 0396:5344
cs=0x396;eip=0x005347; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 14025 mov     bx, [bp+arg_2] ;~ 0396:5347
cs=0x396;eip=0x00534a; 	T(MOV(ah, *(raddr(ds,bx+5))));	// 14026 mov     ah, [bx+5] ;~ 0396:534A
cs=0x396;eip=0x00534d; 	T(SUB(al, al));	// 14027 sub     al, al ;~ 0396:534D
cs=0x396;eip=0x00534f; 	T(MOV(cl, *(raddr(ds,bx+4))));	// 14028 mov     cl, [bx+4] ;~ 0396:534F
cs=0x396;eip=0x005352; 	T(ADD(ax, cx));	// 14029 add     ax, cx ;~ 0396:5352
cs=0x396;eip=0x005354; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 14030 mov     [bp+var_E], ax ;~ 0396:5354
cs=0x396;eip=0x005357; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0));	// 14031 mov     [bp+var_C], 0 ;~ 0396:5357
cs=0x396;eip=0x00535c; 	T(MOV(ah, *(raddr(ds,bx+7))));	// 14032 mov     ah, [bx+7] ;~ 0396:535C
cs=0x396;eip=0x00535f; 	T(SUB(al, al));	// 14033 sub     al, al ;~ 0396:535F
cs=0x396;eip=0x005361; 	T(MOV(cl, *(raddr(ds,bx+6))));	// 14034 mov     cl, [bx+6] ;~ 0396:5361
cs=0x396;eip=0x005364; 	T(ADD(ax, cx));	// 14035 add     ax, cx ;~ 0396:5364
cs=0x396;eip=0x005366; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 14036 mov     [bp+var_A], ax ;~ 0396:5366
cs=0x396;eip=0x005369; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 14037 mov     [bp+var_8], 0 ;~ 0396:5369
cs=0x396;eip=0x00536e; 	T(MOV(dx, ax));	// 14038 mov     dx, ax ;~ 0396:536E
cs=0x396;eip=0x005370; 	T(SUB(ax, ax));	// 14039 sub     ax, ax ;~ 0396:5370
cs=0x396;eip=0x005372; 	X(ADD(*(dw*)(raddr(ss,bp+var_e)), ax));	// 14040 add     [bp+var_E], ax ;~ 0396:5372
cs=0x396;eip=0x005375; 	X(ADC(*(dw*)(raddr(ss,bp+var_c)), dx));	// 14041 adc     [bp+var_C], dx ;~ 0396:5375
cs=0x396;eip=0x005378; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 14042 mov     ax, [bp+var_E] ;~ 0396:5378
cs=0x396;eip=0x00537b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_c))));	// 14043 mov     dx, [bp+var_C] ;~ 0396:537B
cs=0x396;eip=0x00537e; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), dx));	// 14044 cmp     [bp+var_4], dx ;~ 0396:537E
cs=0x396;eip=0x005381; 	R(JC(loc_172fb));	// 14045 jb      short loc_172FB ;~ 0396:5381
cs=0x396;eip=0x005383; 	R(JA(loc_172ca));	// 14046 ja      short loc_172CA ;~ 0396:5383
cs=0x396;eip=0x005385; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 14047 cmp     [bp+var_6], ax ;~ 0396:5385
cs=0x396;eip=0x005388; 	R(JC(loc_172fb));	// 14048 jb      short loc_172FB ;~ 0396:5388
loc_172ca:
	// 5103 
cs=0x396;eip=0x00538a; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), 4));	// 14051 add     [bp+var_2], 4 ;~ 0396:538A
cs=0x396;eip=0x00538e; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 14052 mov     si, [bp+arg_0] ;~ 0396:538E
cs=0x396;eip=0x005391; 	T(MOV(al, *(raddr(ds,si+4))));	// 14053 mov     al, [si+4] ;~ 0396:5391
cs=0x396;eip=0x005394; 	X(MOV(*(raddr(ds,bx+4)), al));	// 14054 mov     [bx+4], al ;~ 0396:5394
cs=0x396;eip=0x005397; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 14055 mov     bx, [bp+arg_2] ;~ 0396:5397
cs=0x396;eip=0x00539a; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 14056 mov     si, [bp+arg_0] ;~ 0396:539A
cs=0x396;eip=0x00539d; 	T(MOV(al, *(raddr(ds,si+5))));	// 14057 mov     al, [si+5] ;~ 0396:539D
cs=0x396;eip=0x0053a0; 	X(MOV(*(raddr(ds,bx+5)), al));	// 14058 mov     [bx+5], al ;~ 0396:53A0
cs=0x396;eip=0x0053a3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 14059 mov     bx, [bp+arg_2] ;~ 0396:53A3
cs=0x396;eip=0x0053a6; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 14060 mov     si, [bp+arg_0] ;~ 0396:53A6
cs=0x396;eip=0x0053a9; 	T(MOV(al, *(raddr(ds,si+6))));	// 14061 mov     al, [si+6] ;~ 0396:53A9
cs=0x396;eip=0x0053ac; 	X(MOV(*(raddr(ds,bx+6)), al));	// 14062 mov     [bx+6], al ;~ 0396:53AC
cs=0x396;eip=0x0053af; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 14063 mov     bx, [bp+arg_2] ;~ 0396:53AF
cs=0x396;eip=0x0053b2; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 14064 mov     si, [bp+arg_0] ;~ 0396:53B2
cs=0x396;eip=0x0053b5; 	T(MOV(al, *(raddr(ds,si+7))));	// 14065 mov     al, [si+7] ;~ 0396:53B5
cs=0x396;eip=0x0053b8; 	X(MOV(*(raddr(ds,bx+7)), al));	// 14066 mov     [bx+7], al ;~ 0396:53B8
loc_172fb:
	// 5104 
cs=0x396;eip=0x0053bb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 14070 mov     ax, [bp+var_2] ;~ 0396:53BB
cs=0x396;eip=0x0053be; 	X(POP(si));	// 14071 pop     si ;~ 0396:53BE
cs=0x396;eip=0x0053bf; 	X(POP(di));	// 14072 pop     di ;~ 0396:53BF
cs=0x396;eip=0x0053c0; 	T(MOV(sp, bp));	// 14073 mov     sp, bp ;~ 0396:53C0
cs=0x396;eip=0x0053c2; 	X(POP(bp));	// 14074 pop     bp ;~ 0396:53C2
cs=0x396;eip=0x0053c3; 	R(RETF(0));	// 14075 retf ;~ 0396:53C3
sub_17304:
	// 14083 
#undef var_4
#define var_4 -4
	// 14086 var_4           = word ptr -4 ;~ 0396:53C4
#undef var_2
#define var_2 -2
	// 14087 var_2           = word ptr -2 ;~ 0396:53C4
ret_396_53c4:
	// 5105 
cs=0x396;eip=0x0053c4; 	X(PUSH(bp));	// 14089 push    bp ;~ 0396:53C4
cs=0x396;eip=0x0053c5; 	T(MOV(bp, sp));	// 14090 mov     bp, sp ;~ 0396:53C5
cs=0x396;eip=0x0053c7; 	T(SUB(sp, 4));	// 14091 sub     sp, 4 ;~ 0396:53C7
cs=0x396;eip=0x0053ca; 	T(CMP(byte_2bec4, 0));	// 14092 cmp     byte_2BEC4, 0 ;~ 0396:53CA
cs=0x396;eip=0x0053cf; 	R(JZ(loc_17318));	// 14093 jz      short loc_17318 ;~ 0396:53CF
cs=0x396;eip=0x0053d1; 	T(SUB(ax, ax));	// 14094 sub     ax, ax ;~ 0396:53D1
cs=0x396;eip=0x0053d3; 	T(MOV(sp, bp));	// 14095 mov     sp, bp ;~ 0396:53D3
cs=0x396;eip=0x0053d5; 	X(POP(bp));	// 14096 pop     bp ;~ 0396:53D5
cs=0x396;eip=0x0053d6; 	R(RETF(0));	// 14097 retf ;~ 0396:53D6
loc_17318:
	// 5106 
cs=0x396;eip=0x0053d8; 	T(SUB(ax, ax));	// 14102 sub     ax, ax ;~ 0396:53D8
cs=0x396;eip=0x0053da; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 14103 mov     [bp+var_4], ax ;~ 0396:53DA
cs=0x396;eip=0x0053dd; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 14104 mov     [bp+var_2], ax ;~ 0396:53DD
cs=0x396;eip=0x0053e0; 	R(JMP(loc_1736b));	// 14105 jmp     short loc_1736B ;~ 0396:53E0
loc_17322:
	// 5107 
cs=0x396;eip=0x0053e2; 	T(MOV(ax, 0x1112));	// 14109 mov     ax, 1112h ;~ 0396:53E2
cs=0x396;eip=0x0053e5; 	X(PUSH(ax));	// 14110 push    ax ;~ 0396:53E5
cs=0x396;eip=0x0053e6; 	T(MOV(ax, 0x0A9C));	// 14111 mov     ax, 0A9Ch ;~ 0396:53E6
cs=0x396;eip=0x0053e9; 	X(PUSH(ax));	// 14112 push    ax ;~ 0396:53E9
cs=0x396;eip=0x0053ea; 	R(CALLF(sub_29b46,0));	// 14113 call    sub_29B46 ;~ 0396:53EA
cs=0x396;eip=0x0053ef; 	T(ADD(sp, 4));	// 14114 add     sp, 4 ;~ 0396:53EF
cs=0x396;eip=0x0053f2; 	T(MOV(ax, 0x111C));	// 14115 mov     ax, 111Ch ;~ 0396:53F2
cs=0x396;eip=0x0053f5; 	X(PUSH(ax));	// 14116 push    ax ;~ 0396:53F5
cs=0x396;eip=0x0053f6; 	T(MOV(ax, 0x0A9A));	// 14117 mov     ax, 0A9Ah ;~ 0396:53F6
cs=0x396;eip=0x0053f9; 	X(PUSH(ax));	// 14118 push    ax ;~ 0396:53F9
cs=0x396;eip=0x0053fa; 	R(CALLF(sub_29708,0));	// 14119 call    sub_29708 ;~ 0396:53FA
cs=0x396;eip=0x0053ff; 	T(ADD(sp, 4));	// 14120 add     sp, 4 ;~ 0396:53FF
cs=0x396;eip=0x005402; 	X(MOV(word_3a3e6, ax));	// 14121 mov     word_3A3E6, ax ;~ 0396:5402
cs=0x396;eip=0x005405; 	T(OR(ax, ax));	// 14122 or      ax, ax ;~ 0396:5405
cs=0x396;eip=0x005407; 	R(JZ(loc_1735a));	// 14123 jz      short loc_1735A ;~ 0396:5407
cs=0x396;eip=0x005409; 	X(PUSH(ax));	// 14124 push    ax ;~ 0396:5409
cs=0x396;eip=0x00540a; 	R(CALLF(sub_29640,0));	// 14125 call    sub_29640 ;~ 0396:540A
cs=0x396;eip=0x00540f; 	T(ADD(sp, 2));	// 14126 add     sp, 2 ;~ 0396:540F
cs=0x396;eip=0x005412; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 1));	// 14127 mov     [bp+var_4], 1 ;~ 0396:5412
cs=0x396;eip=0x005417; 	R(JMP(loc_1736b));	// 14128 jmp     short loc_1736B ;~ 0396:5417
loc_1735a:
	// 5108 
cs=0x396;eip=0x00541a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 1));	// 14133 mov     [bp+var_2], 1 ;~ 0396:541A
cs=0x396;eip=0x00541f; 	T(MOV(ax, 0x1E));	// 14134 mov     ax, 1Eh ;~ 0396:541F
cs=0x396;eip=0x005422; 	X(PUSH(ax));	// 14135 push    ax ;~ 0396:5422
cs=0x396;eip=0x005423; 	R(CALLF(sub_1179c,0));	// 14136 call    sub_1179C ;~ 0396:5423
cs=0x396;eip=0x005428; 	T(ADD(sp, 2));	// 14137 add     sp, 2 ;~ 0396:5428
loc_1736b:
	// 5109 
cs=0x396;eip=0x00542b; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 14141 cmp     [bp+var_4], 0 ;~ 0396:542B
cs=0x396;eip=0x00542f; 	R(JZ(loc_17322));	// 14142 jz      short loc_17322 ;~ 0396:542F
cs=0x396;eip=0x005431; 	T(CMP(word_2bec6, 3));	// 14143 cmp     word_2BEC6, 3 ;~ 0396:5431
cs=0x396;eip=0x005436; 	R(JNZ(loc_1737b));	// 14144 jnz     short loc_1737B ;~ 0396:5436
cs=0x396;eip=0x005438; 	R(JMP(loc_17518));	// 14145 jmp     loc_17518 ;~ 0396:5438
loc_1737b:
	// 5110 
cs=0x396;eip=0x00543b; 	T(MOV(ax, 0x111F));	// 14149 mov     ax, 111Fh ;~ 0396:543B
cs=0x396;eip=0x00543e; 	X(PUSH(ax));	// 14150 push    ax ;~ 0396:543E
cs=0x396;eip=0x00543f; 	T(MOV(ax, 0x0A9C));	// 14151 mov     ax, 0A9Ch ;~ 0396:543F
cs=0x396;eip=0x005442; 	X(PUSH(ax));	// 14152 push    ax ;~ 0396:5442
cs=0x396;eip=0x005443; 	R(CALLF(sub_29b46,0));	// 14153 call    sub_29B46 ;~ 0396:5443
cs=0x396;eip=0x005448; 	T(ADD(sp, 4));	// 14154 add     sp, 4 ;~ 0396:5448
cs=0x396;eip=0x00544b; 	X(PUSH(word_3a6a8));	// 14155 push    word_3A6A8 ;~ 0396:544B
cs=0x396;eip=0x00544f; 	X(PUSH(word_3a6a6));	// 14156 push    word_3A6A6 ;~ 0396:544F
cs=0x396;eip=0x005453; 	T(MOV(ax, 0x0A9A));	// 14157 mov     ax, 0A9Ah ;~ 0396:5453
cs=0x396;eip=0x005456; 	X(PUSH(ax));	// 14158 push    ax ;~ 0396:5456
cs=0x396;eip=0x005457; 	R(CALLF(sub_10ee0,0));	// 14159 call    sub_10EE0 ;~ 0396:5457
cs=0x396;eip=0x00545c; 	T(ADD(sp, 6));	// 14160 add     sp, 6 ;~ 0396:545C
cs=0x396;eip=0x00545f; 	T(MOV(ax, 0x1129));	// 14161 mov     ax, 1129h ;~ 0396:545F
cs=0x396;eip=0x005462; 	X(PUSH(ax));	// 14162 push    ax ;~ 0396:5462
cs=0x396;eip=0x005463; 	T(MOV(ax, 0x0A9C));	// 14163 mov     ax, 0A9Ch ;~ 0396:5463
cs=0x396;eip=0x005466; 	X(PUSH(ax));	// 14164 push    ax ;~ 0396:5466
cs=0x396;eip=0x005467; 	R(CALLF(sub_29b46,0));	// 14165 call    sub_29B46 ;~ 0396:5467
cs=0x396;eip=0x00546c; 	T(ADD(sp, 4));	// 14166 add     sp, 4 ;~ 0396:546C
cs=0x396;eip=0x00546f; 	X(PUSH(word_3a61a));	// 14167 push    word_3A61A ;~ 0396:546F
cs=0x396;eip=0x005473; 	X(PUSH(word_3a618));	// 14168 push    word_3A618 ;~ 0396:5473
cs=0x396;eip=0x005477; 	T(MOV(ax, 0x0A9A));	// 14169 mov     ax, 0A9Ah ;~ 0396:5477
cs=0x396;eip=0x00547a; 	X(PUSH(ax));	// 14170 push    ax ;~ 0396:547A
cs=0x396;eip=0x00547b; 	R(CALLF(sub_10ee0,0));	// 14171 call    sub_10EE0 ;~ 0396:547B
cs=0x396;eip=0x005480; 	T(ADD(sp, 6));	// 14172 add     sp, 6 ;~ 0396:5480
cs=0x396;eip=0x005483; 	T(MOV(ax, 0x1135));	// 14173 mov     ax, 1135h ;~ 0396:5483
cs=0x396;eip=0x005486; 	X(PUSH(ax));	// 14174 push    ax ;~ 0396:5486
cs=0x396;eip=0x005487; 	T(MOV(ax, 0x0A9C));	// 14175 mov     ax, 0A9Ch ;~ 0396:5487
cs=0x396;eip=0x00548a; 	X(PUSH(ax));	// 14176 push    ax ;~ 0396:548A
cs=0x396;eip=0x00548b; 	R(CALLF(sub_29b46,0));	// 14177 call    sub_29B46 ;~ 0396:548B
cs=0x396;eip=0x005490; 	T(ADD(sp, 4));	// 14178 add     sp, 4 ;~ 0396:5490
cs=0x396;eip=0x005493; 	X(PUSH(word_3a626));	// 14179 push    word_3A626 ;~ 0396:5493
cs=0x396;eip=0x005497; 	X(PUSH(word_3a624));	// 14180 push    word_3A624 ;~ 0396:5497
cs=0x396;eip=0x00549b; 	T(MOV(ax, 0x0A9A));	// 14181 mov     ax, 0A9Ah ;~ 0396:549B
cs=0x396;eip=0x00549e; 	X(PUSH(ax));	// 14182 push    ax ;~ 0396:549E
cs=0x396;eip=0x00549f; 	R(CALLF(sub_10ee0,0));	// 14183 call    sub_10EE0 ;~ 0396:549F
cs=0x396;eip=0x0054a4; 	T(ADD(sp, 6));	// 14184 add     sp, 6 ;~ 0396:54A4
cs=0x396;eip=0x0054a7; 	T(MOV(ax, 0x1141));	// 14185 mov     ax, 1141h ;~ 0396:54A7
cs=0x396;eip=0x0054aa; 	X(PUSH(ax));	// 14186 push    ax ;~ 0396:54AA
cs=0x396;eip=0x0054ab; 	T(MOV(ax, 0x0A9C));	// 14187 mov     ax, 0A9Ch ;~ 0396:54AB
cs=0x396;eip=0x0054ae; 	X(PUSH(ax));	// 14188 push    ax ;~ 0396:54AE
cs=0x396;eip=0x0054af; 	R(CALLF(sub_29b46,0));	// 14189 call    sub_29B46 ;~ 0396:54AF
cs=0x396;eip=0x0054b4; 	T(ADD(sp, 4));	// 14190 add     sp, 4 ;~ 0396:54B4
cs=0x396;eip=0x0054b7; 	X(PUSH(word_3a62c));	// 14191 push    word_3A62C ;~ 0396:54B7
cs=0x396;eip=0x0054bb; 	X(PUSH(word_3a62a));	// 14192 push    word_3A62A ;~ 0396:54BB
cs=0x396;eip=0x0054bf; 	T(MOV(ax, 0x0A9A));	// 14193 mov     ax, 0A9Ah ;~ 0396:54BF
cs=0x396;eip=0x0054c2; 	X(PUSH(ax));	// 14194 push    ax ;~ 0396:54C2
cs=0x396;eip=0x0054c3; 	R(CALLF(sub_10ee0,0));	// 14195 call    sub_10EE0 ;~ 0396:54C3
cs=0x396;eip=0x0054c8; 	T(ADD(sp, 6));	// 14196 add     sp, 6 ;~ 0396:54C8
cs=0x396;eip=0x0054cb; 	T(MOV(ax, 0x114D));	// 14197 mov     ax, 114Dh ;~ 0396:54CB
cs=0x396;eip=0x0054ce; 	X(PUSH(ax));	// 14198 push    ax ;~ 0396:54CE
cs=0x396;eip=0x0054cf; 	T(MOV(ax, 0x0A9C));	// 14199 mov     ax, 0A9Ch ;~ 0396:54CF
cs=0x396;eip=0x0054d2; 	X(PUSH(ax));	// 14200 push    ax ;~ 0396:54D2
cs=0x396;eip=0x0054d3; 	R(CALLF(sub_29b46,0));	// 14201 call    sub_29B46 ;~ 0396:54D3
cs=0x396;eip=0x0054d8; 	T(ADD(sp, 4));	// 14202 add     sp, 4 ;~ 0396:54D8
cs=0x396;eip=0x0054db; 	X(PUSH(word_3a8b6));	// 14203 push    word_3A8B6 ;~ 0396:54DB
cs=0x396;eip=0x0054df; 	X(PUSH(word_3a8b4));	// 14204 push    word_3A8B4 ;~ 0396:54DF
cs=0x396;eip=0x0054e3; 	T(MOV(ax, 0x0A9A));	// 14205 mov     ax, 0A9Ah ;~ 0396:54E3
cs=0x396;eip=0x0054e6; 	X(PUSH(ax));	// 14206 push    ax ;~ 0396:54E6
cs=0x396;eip=0x0054e7; 	R(CALLF(sub_10ee0,0));	// 14207 call    sub_10EE0 ;~ 0396:54E7
cs=0x396;eip=0x0054ec; 	T(ADD(sp, 6));	// 14208 add     sp, 6 ;~ 0396:54EC
cs=0x396;eip=0x0054ef; 	T(MOV(ax, 0x1155));	// 14209 mov     ax, 1155h ;~ 0396:54EF
cs=0x396;eip=0x0054f2; 	X(PUSH(ax));	// 14210 push    ax ;~ 0396:54F2
cs=0x396;eip=0x0054f3; 	T(MOV(ax, 0x0A9C));	// 14211 mov     ax, 0A9Ch ;~ 0396:54F3
cs=0x396;eip=0x0054f6; 	X(PUSH(ax));	// 14212 push    ax ;~ 0396:54F6
cs=0x396;eip=0x0054f7; 	R(CALLF(sub_29b46,0));	// 14213 call    sub_29B46 ;~ 0396:54F7
cs=0x396;eip=0x0054fc; 	T(ADD(sp, 4));	// 14214 add     sp, 4 ;~ 0396:54FC
cs=0x396;eip=0x0054ff; 	X(PUSH(word_3a622));	// 14215 push    word_3A622 ;~ 0396:54FF
cs=0x396;eip=0x005503; 	X(PUSH(word_3a620));	// 14216 push    word_3A620 ;~ 0396:5503
cs=0x396;eip=0x005507; 	T(MOV(ax, 0x0A9A));	// 14217 mov     ax, 0A9Ah ;~ 0396:5507
cs=0x396;eip=0x00550a; 	X(PUSH(ax));	// 14218 push    ax ;~ 0396:550A
cs=0x396;eip=0x00550b; 	R(CALLF(sub_10ee0,0));	// 14219 call    sub_10EE0 ;~ 0396:550B
cs=0x396;eip=0x005510; 	T(ADD(sp, 6));	// 14220 add     sp, 6 ;~ 0396:5510
cs=0x396;eip=0x005513; 	T(MOV(ax, 0x1162));	// 14221 mov     ax, 1162h ;~ 0396:5513
cs=0x396;eip=0x005516; 	X(PUSH(ax));	// 14222 push    ax ;~ 0396:5516
cs=0x396;eip=0x005517; 	T(MOV(ax, 0x0AA3));	// 14223 mov     ax, 0AA3h ;~ 0396:5517
cs=0x396;eip=0x00551a; 	X(PUSH(ax));	// 14224 push    ax ;~ 0396:551A
cs=0x396;eip=0x00551b; 	R(CALLF(sub_29b46,0));	// 14225 call    sub_29B46 ;~ 0396:551B
cs=0x396;eip=0x005520; 	T(ADD(sp, 4));	// 14226 add     sp, 4 ;~ 0396:5520
cs=0x396;eip=0x005523; 	X(PUSH(word_3a38e));	// 14227 push    word_3A38E ;~ 0396:5523
cs=0x396;eip=0x005527; 	X(PUSH(word_3a38c));	// 14228 push    word_3A38C ;~ 0396:5527
cs=0x396;eip=0x00552b; 	T(MOV(ax, 0x0A9A));	// 14229 mov     ax, 0A9Ah ;~ 0396:552B
cs=0x396;eip=0x00552e; 	X(PUSH(ax));	// 14230 push    ax ;~ 0396:552E
cs=0x396;eip=0x00552f; 	R(CALLF(sub_10ee0,0));	// 14231 call    sub_10EE0 ;~ 0396:552F
cs=0x396;eip=0x005534; 	T(ADD(sp, 6));	// 14232 add     sp, 6 ;~ 0396:5534
cs=0x396;eip=0x005537; 	T(MOV(ax, 0x1168));	// 14233 mov     ax, 1168h ;~ 0396:5537
cs=0x396;eip=0x00553a; 	X(PUSH(ax));	// 14234 push    ax ;~ 0396:553A
cs=0x396;eip=0x00553b; 	T(MOV(ax, 0x0AA3));	// 14235 mov     ax, 0AA3h ;~ 0396:553B
cs=0x396;eip=0x00553e; 	X(PUSH(ax));	// 14236 push    ax ;~ 0396:553E
cs=0x396;eip=0x00553f; 	R(CALLF(sub_29b46,0));	// 14237 call    sub_29B46 ;~ 0396:553F
cs=0x396;eip=0x005544; 	T(ADD(sp, 4));	// 14238 add     sp, 4 ;~ 0396:5544
cs=0x396;eip=0x005547; 	X(PUSH(word_38ce0));	// 14239 push    word_38CE0 ;~ 0396:5547
cs=0x396;eip=0x00554b; 	X(PUSH(word_38cde));	// 14240 push    word_38CDE ;~ 0396:554B
cs=0x396;eip=0x00554f; 	T(MOV(ax, 0x0A9A));	// 14241 mov     ax, 0A9Ah ;~ 0396:554F
cs=0x396;eip=0x005552; 	X(PUSH(ax));	// 14242 push    ax ;~ 0396:5552
cs=0x396;eip=0x005553; 	R(CALLF(sub_10ee0,0));	// 14243 call    sub_10EE0 ;~ 0396:5553
cs=0x396;eip=0x005558; 	T(ADD(sp, 6));	// 14244 add     sp, 6 ;~ 0396:5558
cs=0x396;eip=0x00555b; 	T(MOV(ax, 0x116E));	// 14245 mov     ax, 116Eh ;~ 0396:555B
cs=0x396;eip=0x00555e; 	X(PUSH(ax));	// 14246 push    ax ;~ 0396:555E
cs=0x396;eip=0x00555f; 	T(MOV(ax, 0x0AA3));	// 14247 mov     ax, 0AA3h ;~ 0396:555F
cs=0x396;eip=0x005562; 	X(PUSH(ax));	// 14248 push    ax ;~ 0396:5562
cs=0x396;eip=0x005563; 	R(CALLF(sub_29b46,0));	// 14249 call    sub_29B46 ;~ 0396:5563
cs=0x396;eip=0x005568; 	T(ADD(sp, 4));	// 14250 add     sp, 4 ;~ 0396:5568
cs=0x396;eip=0x00556b; 	T(MOV(ax, 0x9592));	// 14251 mov     ax, 9592h ;~ 0396:556B
cs=0x396;eip=0x00556e; 	X(PUSH(ax));	// 14252 push    ax ;~ 0396:556E
cs=0x396;eip=0x00556f; 	T(MOV(ax, 0x0A9A));	// 14253 mov     ax, 0A9Ah ;~ 0396:556F
cs=0x396;eip=0x005572; 	X(PUSH(ax));	// 14254 push    ax ;~ 0396:5572
cs=0x396;eip=0x005573; 	R(CALLF(sub_10e74,0));	// 14255 call    sub_10E74 ;~ 0396:5573
cs=0x396;eip=0x005578; 	T(ADD(sp, 4));	// 14256 add     sp, 4 ;~ 0396:5578
cs=0x396;eip=0x00557b; 	T(MOV(ax, 0x1174));	// 14257 mov     ax, 1174h ;~ 0396:557B
cs=0x396;eip=0x00557e; 	X(PUSH(ax));	// 14258 push    ax ;~ 0396:557E
cs=0x396;eip=0x00557f; 	T(MOV(ax, 0x0AA3));	// 14259 mov     ax, 0AA3h ;~ 0396:557F
cs=0x396;eip=0x005582; 	X(PUSH(ax));	// 14260 push    ax ;~ 0396:5582
cs=0x396;eip=0x005583; 	R(CALLF(sub_29b46,0));	// 14261 call    sub_29B46 ;~ 0396:5583
cs=0x396;eip=0x005588; 	T(ADD(sp, 4));	// 14262 add     sp, 4 ;~ 0396:5588
cs=0x396;eip=0x00558b; 	T(MOV(ax, 0x2500));	// 14263 mov     ax, 2500h ;~ 0396:558B
cs=0x396;eip=0x00558e; 	X(PUSH(ax));	// 14264 push    ax ;~ 0396:558E
cs=0x396;eip=0x00558f; 	T(MOV(ax, 0x0A9A));	// 14265 mov     ax, 0A9Ah ;~ 0396:558F
cs=0x396;eip=0x005592; 	X(PUSH(ax));	// 14266 push    ax ;~ 0396:5592
cs=0x396;eip=0x005593; 	R(CALLF(sub_10e74,0));	// 14267 call    sub_10E74 ;~ 0396:5593
cs=0x396;eip=0x005598; 	T(ADD(sp, 4));	// 14268 add     sp, 4 ;~ 0396:5598
cs=0x396;eip=0x00559b; 	R(CALLF(sub_208a9,0));	// 14269 call    sub_208A9 ;~ 0396:559B
cs=0x396;eip=0x0055a0; 	T(MOV(ax, 0x117A));	// 14270 mov     ax, 117Ah ;~ 0396:55A0
cs=0x396;eip=0x0055a3; 	X(PUSH(ax));	// 14271 push    ax ;~ 0396:55A3
cs=0x396;eip=0x0055a4; 	T(MOV(ax, 0x0A9C));	// 14272 mov     ax, 0A9Ch ;~ 0396:55A4
cs=0x396;eip=0x0055a7; 	X(PUSH(ax));	// 14273 push    ax ;~ 0396:55A7
cs=0x396;eip=0x0055a8; 	R(CALLF(sub_29b46,0));	// 14274 call    sub_29B46 ;~ 0396:55A8
cs=0x396;eip=0x0055ad; 	T(ADD(sp, 4));	// 14275 add     sp, 4 ;~ 0396:55AD
cs=0x396;eip=0x0055b0; 	T(SUB(ax, ax));	// 14276 sub     ax, ax ;~ 0396:55B0
cs=0x396;eip=0x0055b2; 	X(PUSH(ax));	// 14277 push    ax ;~ 0396:55B2
cs=0x396;eip=0x0055b3; 	R(CALLF(sub_2ad94,0));	// 14278 call    sub_2AD94 ;~ 0396:55B3
cs=0x396;eip=0x0055b8; 	T(ADD(sp, 2));	// 14279 add     sp, 2 ;~ 0396:55B8
cs=0x396;eip=0x0055bb; 	X(PUSH(word_3a632));	// 14280 push    word_3A632 ;~ 0396:55BB
cs=0x396;eip=0x0055bf; 	X(PUSH(word_3a630));	// 14281 push    word_3A630 ;~ 0396:55BF
cs=0x396;eip=0x0055c3; 	T(MOV(ax, 0x0A9A));	// 14282 mov     ax, 0A9Ah ;~ 0396:55C3
cs=0x396;eip=0x0055c6; 	X(PUSH(ax));	// 14283 push    ax ;~ 0396:55C6
cs=0x396;eip=0x0055c7; 	R(CALLF(sub_10ee0,0));	// 14284 call    sub_10EE0 ;~ 0396:55C7
cs=0x396;eip=0x0055cc; 	T(ADD(sp, 6));	// 14285 add     sp, 6 ;~ 0396:55CC
cs=0x396;eip=0x0055cf; 	X(MOV(byte_2bec4, 1));	// 14286 mov     byte_2BEC4, 1 ;~ 0396:55CF
cs=0x396;eip=0x0055d4; 	T(MOV(sp, bp));	// 14287 mov     sp, bp ;~ 0396:55D4
cs=0x396;eip=0x0055d6; 	X(POP(bp));	// 14288 pop     bp ;~ 0396:55D6
cs=0x396;eip=0x0055d7; 	R(RETF(0));	// 14289 retf ;~ 0396:55D7
loc_17518:
	// 5111 
cs=0x396;eip=0x0055d8; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 14293 cmp     [bp+var_2], 0 ;~ 0396:55D8
cs=0x396;eip=0x0055dc; 	R(JZ(loc_1752b));	// 14294 jz      short loc_1752B ;~ 0396:55DC
cs=0x396;eip=0x0055de; 	T(MOV(al, byte_3750c));	// 14295 mov     al, byte_3750C ;~ 0396:55DE
cs=0x396;eip=0x0055e1; 	T(SUB(ah, ah));	// 14296 sub     ah, ah ;~ 0396:55E1
cs=0x396;eip=0x0055e3; 	X(PUSH(ax));	// 14297 push    ax ;~ 0396:55E3
cs=0x396;eip=0x0055e4; 	X(PUSH(cs));	// 14298 push    cs ;~ 0396:55E4
cs=0x396;eip=0x0055e5; 	R(CALL(sub_13c62,0));	// 14299 call    near ptr sub_13C62 ;~ 0396:55E5
cs=0x396;eip=0x0055e8; 	T(ADD(sp, 2));	// 14300 add     sp, 2 ;~ 0396:55E8
loc_1752b:
	// 5112 
cs=0x396;eip=0x0055eb; 	T(MOV(sp, bp));	// 14303 mov     sp, bp ;~ 0396:55EB
cs=0x396;eip=0x0055ed; 	X(POP(bp));	// 14304 pop     bp ;~ 0396:55ED
cs=0x396;eip=0x0055ee; 	R(RETF(0));	// 14305 retf ;~ 0396:55EE
sub_17530:
	// 14315 
#undef var_16
#define var_16 -0x16
	// 14317 var_16          = word ptr -16h ;~ 0396:55F0
#undef var_14
#define var_14 -0x14
	// 14318 var_14          = word ptr -14h ;~ 0396:55F0
#undef var_12
#define var_12 -0x12
	// 14319 var_12          = word ptr -12h ;~ 0396:55F0
#undef var_10
#define var_10 -0x10
	// 14320 var_10          = word ptr -10h ;~ 0396:55F0
#undef var_e
#define var_e -0x0E
	// 14321 var_E           = word ptr -0Eh ;~ 0396:55F0
#undef var_c
#define var_c -0x0C
	// 14322 var_C           = word ptr -0Ch ;~ 0396:55F0
#undef var_a
#define var_a -0x0A
	// 14323 var_A           = word ptr -0Ah ;~ 0396:55F0
#undef var_8
#define var_8 -8
	// 14324 var_8           = word ptr -8 ;~ 0396:55F0
#undef var_6
#define var_6 -6
	// 14325 var_6           = word ptr -6 ;~ 0396:55F0
#undef var_4
#define var_4 -4
	// 14326 var_4           = word ptr -4 ;~ 0396:55F0
#undef var_2
#define var_2 -2
	// 14327 var_2           = word ptr -2 ;~ 0396:55F0
ret_396_55f0:
	// 5113 
cs=0x396;eip=0x0055f0; 	X(PUSH(bp));	// 14329 push    bp ;~ 0396:55F0
cs=0x396;eip=0x0055f1; 	T(MOV(bp, sp));	// 14330 mov     bp, sp ;~ 0396:55F1
cs=0x396;eip=0x0055f3; 	T(SUB(sp, 0x16));	// 14331 sub     sp, 16h ;~ 0396:55F3
cs=0x396;eip=0x0055f6; 	X(PUSH(si));	// 14332 push    si ;~ 0396:55F6
cs=0x396;eip=0x0055f7; 	T(CMP(byte_2c81e, 0));	// 14333 cmp     byte_2C81E, 0 ;~ 0396:55F7
cs=0x396;eip=0x0055fc; 	R(JNZ(loc_17541));	// 14334 jnz     short loc_17541 ;~ 0396:55FC
cs=0x396;eip=0x0055fe; 	R(JMP(loc_178e6));	// 14335 jmp     loc_178E6 ;~ 0396:55FE
loc_17541:
	// 5114 
cs=0x396;eip=0x005601; 	T(CMP(byte_2c949, 0));	// 14339 cmp     byte_2C949, 0 ;~ 0396:5601
cs=0x396;eip=0x005606; 	R(JNZ(loc_1754b));	// 14340 jnz     short loc_1754B ;~ 0396:5606
cs=0x396;eip=0x005608; 	R(JMP(loc_178e6));	// 14341 jmp     loc_178E6 ;~ 0396:5608
loc_1754b:
	// 5115 
cs=0x396;eip=0x00560b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 1));	// 14345 mov     [bp+var_2], 1 ;~ 0396:560B
cs=0x396;eip=0x005610; 	R(JMP(loc_17822));	// 14346 jmp     loc_17822 ;~ 0396:5610
loc_17554:
	// 5116 
cs=0x396;eip=0x005614; 	T(MOV(ax, 0x1B));	// 14351 mov     ax, 1Bh ;~ 0396:5614
cs=0x396;eip=0x005617; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 14352 imul    [bp+var_2] ;~ 0396:5617
cs=0x396;eip=0x00561a; 	T(MOV(bx, ax));	// 14353 mov     bx, ax ;~ 0396:561A
cs=0x396;eip=0x00561c; 	X(MOV(*(raddr(ds,bx-0x1809)), 0));	// 14354 mov     byte ptr [bx-1809h], 0 ;~ 0396:561C
loc_17561:
	// 5117 
cs=0x396;eip=0x005621; 	T(MOV(ax, 0x1B));	// 14357 mov     ax, 1Bh ;~ 0396:5621
cs=0x396;eip=0x005624; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 14358 imul    [bp+var_2] ;~ 0396:5624
cs=0x396;eip=0x005627; 	T(MOV(bx, ax));	// 14359 mov     bx, ax ;~ 0396:5627
cs=0x396;eip=0x005629; 	T(MOV(al, *(raddr(ds,bx-0x1809))));	// 14360 mov     al, [bx-1809h] ;~ 0396:5629
cs=0x396;eip=0x00562d; 	T(SUB(ah, ah));	// 14361 sub     ah, ah ;~ 0396:562D
cs=0x396;eip=0x00562f; 	T(MOV(cx, word_2c944));	// 14362 mov     cx, word_2C944 ;~ 0396:562F
cs=0x396;eip=0x005633; 	T(ADD(cx, 4));	// 14363 add     cx, 4 ;~ 0396:5633
cs=0x396;eip=0x005636; 	T(MUL1_2(cx));	// 14364 mul     cx ;~ 0396:5636
cs=0x396;eip=0x005638; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 14365 mov     [bp+var_A], ax ;~ 0396:5638
cs=0x396;eip=0x00563b; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 14366 mov     [bp+var_8], 0 ;~ 0396:563B
cs=0x396;eip=0x005640; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 14367 mov     ax, [bp+var_6] ;~ 0396:5640
cs=0x396;eip=0x005643; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_4))));	// 14368 or      ax, [bp+var_4] ;~ 0396:5643
cs=0x396;eip=0x005646; 	R(JZ(loc_175b2));	// 14369 jz      short loc_175B2 ;~ 0396:5646
cs=0x396;eip=0x005648; 	T(CMP(byte_2c81e, 0));	// 14370 cmp     byte_2C81E, 0 ;~ 0396:5648
cs=0x396;eip=0x00564d; 	R(JZ(loc_175b2));	// 14371 jz      short loc_175B2 ;~ 0396:564D
cs=0x396;eip=0x00564f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 14372 push    [bp+var_4] ;~ 0396:564F
cs=0x396;eip=0x005652; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 14373 push    [bp+var_6] ;~ 0396:5652
cs=0x396;eip=0x005655; 	T(MOV(ax, 0x14));	// 14374 mov     ax, 14h ;~ 0396:5655
cs=0x396;eip=0x005658; 	T(CWD);	// 14375 cwd ;~ 0396:5658
cs=0x396;eip=0x005659; 	X(PUSH(dx));	// 14376 push    dx ;~ 0396:5659
cs=0x396;eip=0x00565a; 	X(PUSH(ax));	// 14377 push    ax ;~ 0396:565A
cs=0x396;eip=0x00565b; 	T(SUB(ax, ax));	// 14378 sub     ax, ax ;~ 0396:565B
cs=0x396;eip=0x00565d; 	X(PUSH(ax));	// 14379 push    ax ;~ 0396:565D
cs=0x396;eip=0x00565e; 	X(PUSH(word_353fb));	// 14380 push    word_353FB ;~ 0396:565E
cs=0x396;eip=0x005662; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 14381 push    [bp+var_8] ;~ 0396:5662
cs=0x396;eip=0x005665; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 14382 push    [bp+var_A] ;~ 0396:5665
cs=0x396;eip=0x005668; 	R(CALLF(sub_29d98,0));	// 14383 call    sub_29D98 ;~ 0396:5668
cs=0x396;eip=0x00566d; 	X(PUSH(dx));	// 14384 push    dx ;~ 0396:566D
cs=0x396;eip=0x00566e; 	X(PUSH(ax));	// 14385 push    ax ;~ 0396:566E
cs=0x396;eip=0x00566f; 	R(JMP(loc_175e0));	// 14386 jmp     short loc_175E0 ;~ 0396:566F
loc_175b2:
	// 5118 
cs=0x396;eip=0x005672; 	T(MOV(ax, word_353fb));	// 14392 mov     ax, word_353FB ;~ 0396:5672
cs=0x396;eip=0x005675; 	T(SUB(dx, dx));	// 14393 sub     dx, dx ;~ 0396:5675
cs=0x396;eip=0x005677; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), dx));	// 14394 cmp     [bp+var_4], dx ;~ 0396:5677
cs=0x396;eip=0x00567a; 	R(JC(loc_175ce));	// 14395 jb      short loc_175CE ;~ 0396:567A
cs=0x396;eip=0x00567c; 	R(JA(loc_175c3));	// 14396 ja      short loc_175C3 ;~ 0396:567C
cs=0x396;eip=0x00567e; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 14397 cmp     [bp+var_6], ax ;~ 0396:567E
cs=0x396;eip=0x005681; 	R(JBE(loc_175ce));	// 14398 jbe     short loc_175CE ;~ 0396:5681
loc_175c3:
	// 5119 
cs=0x396;eip=0x005683; 	T(MOV(ax, word_353fb));	// 14401 mov     ax, word_353FB ;~ 0396:5683
cs=0x396;eip=0x005686; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 14402 mov     [bp+var_6], ax ;~ 0396:5686
cs=0x396;eip=0x005689; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 14403 mov     [bp+var_4], 0 ;~ 0396:5689
loc_175ce:
	// 5120 
cs=0x396;eip=0x00568e; 	T(MOV(ax, 0x60));	// 14407 mov     ax, 60h ; '`' ;~ 0396:568E
cs=0x396;eip=0x005691; 	T(CWD);	// 14408 cwd ;~ 0396:5691
cs=0x396;eip=0x005692; 	X(PUSH(dx));	// 14409 push    dx ;~ 0396:5692
cs=0x396;eip=0x005693; 	X(PUSH(ax));	// 14410 push    ax ;~ 0396:5693
cs=0x396;eip=0x005694; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 14411 push    [bp+var_8] ;~ 0396:5694
cs=0x396;eip=0x005697; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 14412 push    [bp+var_A] ;~ 0396:5697
cs=0x396;eip=0x00569a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 14413 push    [bp+var_4] ;~ 0396:569A
cs=0x396;eip=0x00569d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 14414 push    [bp+var_6] ;~ 0396:569D
loc_175e0:
	// 5121 
cs=0x396;eip=0x0056a0; 	R(CALLF(sub_29d98,0));	// 14417 call    sub_29D98 ;~ 0396:56A0
cs=0x396;eip=0x0056a5; 	X(PUSH(dx));	// 14418 push    dx ;~ 0396:56A5
cs=0x396;eip=0x0056a6; 	X(PUSH(ax));	// 14419 push    ax ;~ 0396:56A6
cs=0x396;eip=0x0056a7; 	R(CALLF(sub_29e14,0));	// 14420 call    sub_29E14 ;~ 0396:56A7
cs=0x396;eip=0x0056ac; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 14421 mov     [bp+var_E], ax ;~ 0396:56AC
cs=0x396;eip=0x0056af; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), dx));	// 14422 mov     [bp+var_C], dx ;~ 0396:56AF
cs=0x396;eip=0x0056b2; 	T(CMP(dx, 0x0F));	// 14423 cmp     dx, 0Fh ;~ 0396:56B2
cs=0x396;eip=0x0056b5; 	R(JC(loc_17608));	// 14424 jb      short loc_17608 ;~ 0396:56B5
cs=0x396;eip=0x0056b7; 	R(JA(loc_175fe));	// 14425 ja      short loc_175FE ;~ 0396:56B7
cs=0x396;eip=0x0056b9; 	T(CMP(ax, 0x4240));	// 14426 cmp     ax, 4240h ;~ 0396:56B9
cs=0x396;eip=0x0056bc; 	R(JBE(loc_17608));	// 14427 jbe     short loc_17608 ;~ 0396:56BC
loc_175fe:
	// 5122 
cs=0x396;eip=0x0056be; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0x4240));	// 14430 mov     [bp+var_E], 4240h ;~ 0396:56BE
cs=0x396;eip=0x0056c3; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0x0F));	// 14431 mov     [bp+var_C], 0Fh ;~ 0396:56C3
loc_17608:
	// 5123 
cs=0x396;eip=0x0056c8; 	T(MOV(ax, 0x1B));	// 14435 mov     ax, 1Bh ;~ 0396:56C8
cs=0x396;eip=0x0056cb; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 14436 imul    [bp+var_2] ;~ 0396:56CB
cs=0x396;eip=0x0056ce; 	T(MOV(si, ax));	// 14437 mov     si, ax ;~ 0396:56CE
cs=0x396;eip=0x0056d0; 	T(MOV(al, *(db*)(raddr(ss,bp+var_e))));	// 14438 mov     al, byte ptr [bp+var_E] ;~ 0396:56D0
cs=0x396;eip=0x0056d3; 	X(MOV(*(raddr(ds,si-0x1808)), al));	// 14439 mov     [si-1808h], al ;~ 0396:56D3
cs=0x396;eip=0x0056d7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 14440 mov     ax, [bp+var_E] ;~ 0396:56D7
cs=0x396;eip=0x0056da; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_c))));	// 14441 mov     dx, [bp+var_C] ;~ 0396:56DA
cs=0x396;eip=0x0056dd; 	T(MOV(al, ah));	// 14442 mov     al, ah ;~ 0396:56DD
cs=0x396;eip=0x0056df; 	T(MOV(ah, dl));	// 14443 mov     ah, dl ;~ 0396:56DF
cs=0x396;eip=0x0056e1; 	T(MOV(dl, dh));	// 14444 mov     dl, dh ;~ 0396:56E1
cs=0x396;eip=0x0056e3; 	T(SUB(dh, dh));	// 14445 sub     dh, dh ;~ 0396:56E3
cs=0x396;eip=0x0056e5; 	X(MOV(*(raddr(ds,si-0x1807)), al));	// 14446 mov     [si-1807h], al ;~ 0396:56E5
cs=0x396;eip=0x0056e9; 	T(MOV(al, *(db*)(raddr(ss,bp+var_c))));	// 14447 mov     al, byte ptr [bp+var_C] ;~ 0396:56E9
cs=0x396;eip=0x0056ec; 	X(MOV(*(raddr(ds,si-0x1806)), al));	// 14448 mov     [si-1806h], al ;~ 0396:56EC
cs=0x396;eip=0x0056f0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 14449 mov     ax, [bp+var_E] ;~ 0396:56F0
cs=0x396;eip=0x0056f3; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_c))));	// 14450 mov     dx, [bp+var_C] ;~ 0396:56F3
cs=0x396;eip=0x0056f6; 	T(MOV(cl, 0x18));	// 14451 mov     cl, 18h ;~ 0396:56F6
loc_17638:
	// 5124 
cs=0x396;eip=0x0056f8; 	T(SHR(dx, 1));	// 14454 shr     dx, 1 ;~ 0396:56F8
cs=0x396;eip=0x0056fa; 	T(RCR(ax, 1));	// 14455 rcr     ax, 1 ;~ 0396:56FA
cs=0x396;eip=0x0056fc; 	T(DEC(cl));	// 14456 dec     cl ;~ 0396:56FC
cs=0x396;eip=0x0056fe; 	R(JNZ(loc_17638));	// 14457 jnz     short loc_17638 ;~ 0396:56FE
cs=0x396;eip=0x005700; 	X(MOV(*(raddr(ds,si-0x1805)), al));	// 14458 mov     [si-1805h], al ;~ 0396:5700
cs=0x396;eip=0x005704; 	T(MOV(ah, *(raddr(ds,si-0x17FD))));	// 14459 mov     ah, [si-17FDh] ;~ 0396:5704
cs=0x396;eip=0x005708; 	T(SUB(al, al));	// 14460 sub     al, al ;~ 0396:5708
cs=0x396;eip=0x00570a; 	T(SUB(dx, dx));	// 14461 sub     dx, dx ;~ 0396:570A
cs=0x396;eip=0x00570c; 	T(MOV(cl, *(raddr(ds,si-0x17FE))));	// 14462 mov     cl, [si-17FEh] ;~ 0396:570C
cs=0x396;eip=0x005710; 	T(SUB(ch, ch));	// 14463 sub     ch, ch ;~ 0396:5710
cs=0x396;eip=0x005712; 	T(ADD(ax, cx));	// 14464 add     ax, cx ;~ 0396:5712
cs=0x396;eip=0x005714; 	T(ADC(dx, dx));	// 14465 adc     dx, dx ;~ 0396:5714
cs=0x396;eip=0x005716; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 14466 mov     [bp+var_6], ax ;~ 0396:5716
cs=0x396;eip=0x005719; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 14467 mov     [bp+var_4], dx ;~ 0396:5719
cs=0x396;eip=0x00571c; 	T(MOV(ah, *(raddr(ds,si-0x17FB))));	// 14468 mov     ah, [si-17FBh] ;~ 0396:571C
cs=0x396;eip=0x005720; 	T(SUB(al, al));	// 14469 sub     al, al ;~ 0396:5720
cs=0x396;eip=0x005722; 	T(SUB(dx, dx));	// 14470 sub     dx, dx ;~ 0396:5722
cs=0x396;eip=0x005724; 	T(MOV(cl, *(raddr(ds,si-0x17FC))));	// 14471 mov     cl, [si-17FCh] ;~ 0396:5724
cs=0x396;eip=0x005728; 	T(ADD(ax, cx));	// 14472 add     ax, cx ;~ 0396:5728
cs=0x396;eip=0x00572a; 	T(ADC(dx, dx));	// 14473 adc     dx, dx ;~ 0396:572A
cs=0x396;eip=0x00572c; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 14474 mov     [bp+var_A], ax ;~ 0396:572C
cs=0x396;eip=0x00572f; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 14475 mov     [bp+var_8], dx ;~ 0396:572F
cs=0x396;eip=0x005732; 	T(MOV(dx, ax));	// 14476 mov     dx, ax ;~ 0396:5732
cs=0x396;eip=0x005734; 	T(SUB(ax, ax));	// 14477 sub     ax, ax ;~ 0396:5734
cs=0x396;eip=0x005736; 	X(ADD(*(dw*)(raddr(ss,bp+var_6)), ax));	// 14478 add     [bp+var_6], ax ;~ 0396:5736
cs=0x396;eip=0x005739; 	X(ADC(*(dw*)(raddr(ss,bp+var_4)), dx));	// 14479 adc     [bp+var_4], dx ;~ 0396:5739
cs=0x396;eip=0x00573c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 14480 mov     ax, [bp+var_E] ;~ 0396:573C
cs=0x396;eip=0x00573f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_c))));	// 14481 mov     dx, [bp+var_C] ;~ 0396:573F
cs=0x396;eip=0x005742; 	X(ADD(*(dw*)(raddr(ss,bp+var_6)), ax));	// 14482 add     [bp+var_6], ax ;~ 0396:5742
cs=0x396;eip=0x005745; 	X(ADC(*(dw*)(raddr(ss,bp+var_4)), dx));	// 14483 adc     [bp+var_4], dx ;~ 0396:5745
cs=0x396;eip=0x005748; 	T(MOV(al, *(db*)(raddr(ss,bp+var_6))));	// 14484 mov     al, byte ptr [bp+var_6] ;~ 0396:5748
cs=0x396;eip=0x00574b; 	X(MOV(*(raddr(ds,si-0x17FE)), al));	// 14485 mov     [si-17FEh], al ;~ 0396:574B
cs=0x396;eip=0x00574f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 14486 mov     ax, [bp+var_6] ;~ 0396:574F
cs=0x396;eip=0x005752; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 14487 mov     dx, [bp+var_4] ;~ 0396:5752
cs=0x396;eip=0x005755; 	T(MOV(al, ah));	// 14488 mov     al, ah ;~ 0396:5755
cs=0x396;eip=0x005757; 	T(MOV(ah, dl));	// 14489 mov     ah, dl ;~ 0396:5757
cs=0x396;eip=0x005759; 	T(MOV(dl, dh));	// 14490 mov     dl, dh ;~ 0396:5759
cs=0x396;eip=0x00575b; 	T(SUB(dh, dh));	// 14491 sub     dh, dh ;~ 0396:575B
cs=0x396;eip=0x00575d; 	X(MOV(*(raddr(ds,si-0x17FD)), al));	// 14492 mov     [si-17FDh], al ;~ 0396:575D
cs=0x396;eip=0x005761; 	T(MOV(al, *(db*)(raddr(ss,bp+var_4))));	// 14493 mov     al, byte ptr [bp+var_4] ;~ 0396:5761
cs=0x396;eip=0x005764; 	X(MOV(*(raddr(ds,si-0x17FC)), al));	// 14494 mov     [si-17FCh], al ;~ 0396:5764
cs=0x396;eip=0x005768; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 14495 mov     ax, [bp+var_6] ;~ 0396:5768
cs=0x396;eip=0x00576b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 14496 mov     dx, [bp+var_4] ;~ 0396:576B
cs=0x396;eip=0x00576e; 	T(MOV(cl, 0x18));	// 14497 mov     cl, 18h ;~ 0396:576E
loc_176b0:
	// 5125 
cs=0x396;eip=0x005770; 	T(SHR(dx, 1));	// 14500 shr     dx, 1 ;~ 0396:5770
cs=0x396;eip=0x005772; 	T(RCR(ax, 1));	// 14501 rcr     ax, 1 ;~ 0396:5772
cs=0x396;eip=0x005774; 	T(DEC(cl));	// 14502 dec     cl ;~ 0396:5774
cs=0x396;eip=0x005776; 	R(JNZ(loc_176b0));	// 14503 jnz     short loc_176B0 ;~ 0396:5776
cs=0x396;eip=0x005778; 	X(MOV(*(raddr(ds,si-0x17FB)), al));	// 14504 mov     [si-17FBh], al ;~ 0396:5778
cs=0x396;eip=0x00577c; 	T(MOV(al, *(raddr(ds,si-0x180A))));	// 14505 mov     al, [si-180Ah] ;~ 0396:577C
cs=0x396;eip=0x005780; 	X(ADD(*(raddr(ds,si-0x1800)), al));	// 14506 add     [si-1800h], al ;~ 0396:5780
cs=0x396;eip=0x005784; 	T(CMP(*(raddr(ds,si-0x1800)), 9));	// 14507 cmp     byte ptr [si-1800h], 9 ;~ 0396:5784
cs=0x396;eip=0x005789; 	R(JBE(loc_176dc));	// 14508 jbe     short loc_176DC ;~ 0396:5789
cs=0x396;eip=0x00578b; 	T(MOV(ax, 0x1B));	// 14509 mov     ax, 1Bh ;~ 0396:578B
cs=0x396;eip=0x00578e; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 14510 imul    [bp+var_2] ;~ 0396:578E
cs=0x396;eip=0x005791; 	T(MOV(si, ax));	// 14511 mov     si, ax ;~ 0396:5791
cs=0x396;eip=0x005793; 	X(SUB(*(raddr(ds,si-0x1800)), 0x0A));	// 14512 sub     byte ptr [si-1800h], 0Ah ;~ 0396:5793
cs=0x396;eip=0x005798; 	X(INC(*(raddr(ds,si-0x1801))));	// 14513 inc     byte ptr [si-1801h] ;~ 0396:5798
loc_176dc:
	// 5126 
cs=0x396;eip=0x00579c; 	T(MOV(ax, 0x1B));	// 14516 mov     ax, 1Bh ;~ 0396:579C
cs=0x396;eip=0x00579f; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 14517 imul    [bp+var_2] ;~ 0396:579F
cs=0x396;eip=0x0057a2; 	T(MOV(si, ax));	// 14518 mov     si, ax ;~ 0396:57A2
cs=0x396;eip=0x0057a4; 	T(MOV(al, *(raddr(ds,si-0x180B))));	// 14519 mov     al, [si-180Bh] ;~ 0396:57A4
cs=0x396;eip=0x0057a8; 	X(ADD(*(raddr(ds,si-0x1801)), al));	// 14520 add     [si-1801h], al ;~ 0396:57A8
cs=0x396;eip=0x0057ac; 	T(CMP(*(raddr(ds,si-0x1801)), 0x3B));	// 14521 cmp     byte ptr [si-1801h], 3Bh ; ';' ;~ 0396:57AC
cs=0x396;eip=0x0057b1; 	R(JBE(loc_17703));	// 14522 jbe     short loc_17703 ;~ 0396:57B1
cs=0x396;eip=0x0057b3; 	X(SUB(*(raddr(ds,si-0x1801)), 0x3C));	// 14523 sub     byte ptr [si-1801h], 3Ch ; '<' ;~ 0396:57B3
cs=0x396;eip=0x0057b8; 	T(CMP(*(raddr(ds,si-0x1802)), 0x0FF));	// 14524 cmp     byte ptr [si-1802h], 0FFh ;~ 0396:57B8
cs=0x396;eip=0x0057bd; 	R(JZ(loc_17703));	// 14525 jz      short loc_17703 ;~ 0396:57BD
cs=0x396;eip=0x0057bf; 	X(INC(*(raddr(ds,si-0x1802))));	// 14526 inc     byte ptr [si-1802h] ;~ 0396:57BF
loc_17703:
	// 5127 
cs=0x396;eip=0x0057c3; 	T(MOV(ax, 0x1B));	// 14530 mov     ax, 1Bh ;~ 0396:57C3
cs=0x396;eip=0x0057c6; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 14531 imul    [bp+var_2] ;~ 0396:57C6
cs=0x396;eip=0x0057c9; 	T(MOV(si, ax));	// 14532 mov     si, ax ;~ 0396:57C9
cs=0x396;eip=0x0057cb; 	T(MOV(al, *(raddr(ds,si-0x1802))));	// 14533 mov     al, [si-1802h] ;~ 0396:57CB
cs=0x396;eip=0x0057cf; 	T(SUB(ah, ah));	// 14534 sub     ah, ah ;~ 0396:57CF
cs=0x396;eip=0x0057d1; 	T(MOV(cl, *(raddr(ds,si-0x180C))));	// 14535 mov     cl, [si-180Ch] ;~ 0396:57D1
cs=0x396;eip=0x0057d5; 	T(SUB(ch, ch));	// 14536 sub     ch, ch ;~ 0396:57D5
cs=0x396;eip=0x0057d7; 	T(ADD(ax, cx));	// 14537 add     ax, cx ;~ 0396:57D7
cs=0x396;eip=0x0057d9; 	T(CMP(ax, 0x100));	// 14538 cmp     ax, 100h ;~ 0396:57D9
cs=0x396;eip=0x0057dc; 	R(JNC(loc_17726));	// 14539 jnb     short loc_17726 ;~ 0396:57DC
cs=0x396;eip=0x0057de; 	T(MOV(al, cl));	// 14540 mov     al, cl ;~ 0396:57DE
cs=0x396;eip=0x0057e0; 	X(ADD(*(raddr(ds,si-0x1802)), al));	// 14541 add     [si-1802h], al ;~ 0396:57E0
cs=0x396;eip=0x0057e4; 	R(JMP(loc_17733));	// 14542 jmp     short loc_17733 ;~ 0396:57E4
loc_17726:
	// 5128 
cs=0x396;eip=0x0057e6; 	T(MOV(ax, 0x1B));	// 14546 mov     ax, 1Bh ;~ 0396:57E6
cs=0x396;eip=0x0057e9; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 14547 imul    [bp+var_2] ;~ 0396:57E9
cs=0x396;eip=0x0057ec; 	T(MOV(bx, ax));	// 14548 mov     bx, ax ;~ 0396:57EC
cs=0x396;eip=0x0057ee; 	X(MOV(*(raddr(ds,bx-0x1802)), 0x0FF));	// 14549 mov     byte ptr [bx-1802h], 0FFh ;~ 0396:57EE
loc_17733:
	// 5129 
cs=0x396;eip=0x0057f3; 	T(MOV(ax, 0x1B));	// 14552 mov     ax, 1Bh ;~ 0396:57F3
cs=0x396;eip=0x0057f6; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 14553 imul    [bp+var_2] ;~ 0396:57F6
cs=0x396;eip=0x0057f9; 	T(MOV(si, ax));	// 14554 mov     si, ax ;~ 0396:57F9
cs=0x396;eip=0x0057fb; 	T(MOV(al, *(raddr(ds,si-0x1803))));	// 14555 mov     al, [si-1803h] ;~ 0396:57FB
cs=0x396;eip=0x0057ff; 	X(ADD(*(raddr(ds,si-0x17F9)), al));	// 14556 add     [si-17F9h], al ;~ 0396:57FF
cs=0x396;eip=0x005803; 	T(CMP(*(raddr(ds,si-0x17F9)), 0x3B));	// 14557 cmp     byte ptr [si-17F9h], 3Bh ; ';' ;~ 0396:5803
cs=0x396;eip=0x005808; 	R(JBE(loc_17753));	// 14558 jbe     short loc_17753 ;~ 0396:5808
cs=0x396;eip=0x00580a; 	X(SUB(*(raddr(ds,si-0x17F9)), 0x3C));	// 14559 sub     byte ptr [si-17F9h], 3Ch ; '<' ;~ 0396:580A
cs=0x396;eip=0x00580f; 	X(INC(*(raddr(ds,si-0x17FA))));	// 14560 inc     byte ptr [si-17FAh] ;~ 0396:580F
loc_17753:
	// 5130 
cs=0x396;eip=0x005813; 	T(MOV(ax, 0x1B));	// 14563 mov     ax, 1Bh ;~ 0396:5813
cs=0x396;eip=0x005816; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 14564 imul    [bp+var_2] ;~ 0396:5816
cs=0x396;eip=0x005819; 	T(MOV(si, ax));	// 14565 mov     si, ax ;~ 0396:5819
cs=0x396;eip=0x00581b; 	T(MOV(al, *(raddr(ds,si-0x1804))));	// 14566 mov     al, [si-1804h] ;~ 0396:581B
cs=0x396;eip=0x00581f; 	X(ADD(*(raddr(ds,si-0x17FA)), al));	// 14567 add     [si-17FAh], al ;~ 0396:581F
cs=0x396;eip=0x005823; 	T(MOV(ax, 0x3C));	// 14568 mov     ax, 3Ch ; '<' ;~ 0396:5823
cs=0x396;eip=0x005826; 	T(CWD);	// 14569 cwd ;~ 0396:5826
cs=0x396;eip=0x005827; 	X(PUSH(dx));	// 14570 push    dx ;~ 0396:5827
cs=0x396;eip=0x005828; 	X(PUSH(ax));	// 14571 push    ax ;~ 0396:5828
cs=0x396;eip=0x005829; 	T(MOV(al, *(raddr(ds,si-0x17FA))));	// 14572 mov     al, [si-17FAh] ;~ 0396:5829
cs=0x396;eip=0x00582d; 	T(SUB(ah, ah));	// 14573 sub     ah, ah ;~ 0396:582D
cs=0x396;eip=0x00582f; 	T(SUB(cx, cx));	// 14574 sub     cx, cx ;~ 0396:582F
cs=0x396;eip=0x005831; 	X(PUSH(cx));	// 14575 push    cx ;~ 0396:5831
cs=0x396;eip=0x005832; 	X(PUSH(ax));	// 14576 push    ax ;~ 0396:5832
cs=0x396;eip=0x005833; 	R(CALLF(sub_29d98,0));	// 14577 call    sub_29D98 ;~ 0396:5833
cs=0x396;eip=0x005838; 	T(MOV(cl, *(raddr(ds,si-0x17F9))));	// 14578 mov     cl, [si-17F9h] ;~ 0396:5838
cs=0x396;eip=0x00583c; 	T(SUB(ch, ch));	// 14579 sub     ch, ch ;~ 0396:583C
cs=0x396;eip=0x00583e; 	T(ADD(ax, cx));	// 14580 add     ax, cx ;~ 0396:583E
cs=0x396;eip=0x005840; 	T(ADC(dx, 0));	// 14581 adc     dx, 0 ;~ 0396:5840
cs=0x396;eip=0x005843; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 14582 mov     [bp+var_6], ax ;~ 0396:5843
cs=0x396;eip=0x005846; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 14583 mov     [bp+var_4], dx ;~ 0396:5846
cs=0x396;eip=0x005849; 	T(MOV(ax, 0x1770));	// 14584 mov     ax, 1770h ;~ 0396:5849
cs=0x396;eip=0x00584c; 	T(CWD);	// 14585 cwd ;~ 0396:584C
cs=0x396;eip=0x00584d; 	X(PUSH(dx));	// 14586 push    dx ;~ 0396:584D
cs=0x396;eip=0x00584e; 	X(PUSH(ax));	// 14587 push    ax ;~ 0396:584E
cs=0x396;eip=0x00584f; 	T(MOV(al, *(raddr(ds,si-0x1802))));	// 14588 mov     al, [si-1802h] ;~ 0396:584F
cs=0x396;eip=0x005853; 	T(SUB(ah, ah));	// 14589 sub     ah, ah ;~ 0396:5853
cs=0x396;eip=0x005855; 	T(SUB(cx, cx));	// 14590 sub     cx, cx ;~ 0396:5855
cs=0x396;eip=0x005857; 	X(PUSH(cx));	// 14591 push    cx ;~ 0396:5857
cs=0x396;eip=0x005858; 	X(PUSH(ax));	// 14592 push    ax ;~ 0396:5858
cs=0x396;eip=0x005859; 	R(CALLF(sub_29d98,0));	// 14593 call    sub_29D98 ;~ 0396:5859
cs=0x396;eip=0x00585e; 	T(MOV(cx, 0x64));	// 14594 mov     cx, 64h ; 'd' ;~ 0396:585E
cs=0x396;eip=0x005861; 	T(SUB(bx, bx));	// 14595 sub     bx, bx ;~ 0396:5861
cs=0x396;eip=0x005863; 	X(PUSH(bx));	// 14596 push    bx ;~ 0396:5863
cs=0x396;eip=0x005864; 	X(PUSH(cx));	// 14597 push    cx ;~ 0396:5864
cs=0x396;eip=0x005865; 	T(MOV(cl, *(raddr(ds,si-0x1801))));	// 14598 mov     cl, [si-1801h] ;~ 0396:5865
cs=0x396;eip=0x005869; 	T(SUB(ch, ch));	// 14599 sub     ch, ch ;~ 0396:5869
cs=0x396;eip=0x00586b; 	X(PUSH(bx));	// 14600 push    bx ;~ 0396:586B
cs=0x396;eip=0x00586c; 	X(PUSH(cx));	// 14601 push    cx ;~ 0396:586C
cs=0x396;eip=0x00586d; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 14602 mov     [bp+var_16], ax ;~ 0396:586D
cs=0x396;eip=0x005870; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), dx));	// 14603 mov     [bp+var_14], dx ;~ 0396:5870
cs=0x396;eip=0x005873; 	R(CALLF(sub_29d98,0));	// 14604 call    sub_29D98 ;~ 0396:5873
cs=0x396;eip=0x005878; 	T(MOV(cl, *(raddr(ds,si-0x1800))));	// 14605 mov     cl, [si-1800h] ;~ 0396:5878
cs=0x396;eip=0x00587c; 	T(SUB(ch, ch));	// 14606 sub     ch, ch ;~ 0396:587C
cs=0x396;eip=0x00587e; 	T(SUB(bx, bx));	// 14607 sub     bx, bx ;~ 0396:587E
cs=0x396;eip=0x005880; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 14608 mov     [bp+var_12], ax ;~ 0396:5880
cs=0x396;eip=0x005883; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), dx));	// 14609 mov     [bp+var_10], dx ;~ 0396:5883
cs=0x396;eip=0x005886; 	T(MOV(ax, cx));	// 14610 mov     ax, cx ;~ 0396:5886
cs=0x396;eip=0x005888; 	T(MOV(dx, bx));	// 14611 mov     dx, bx ;~ 0396:5888
cs=0x396;eip=0x00588a; 	T(SHL(cx, 1));	// 14612 shl     cx, 1 ;~ 0396:588A
cs=0x396;eip=0x00588c; 	T(RCL(bx, 1));	// 14613 rcl     bx, 1 ;~ 0396:588C
cs=0x396;eip=0x00588e; 	T(SHL(cx, 1));	// 14614 shl     cx, 1 ;~ 0396:588E
cs=0x396;eip=0x005890; 	T(RCL(bx, 1));	// 14615 rcl     bx, 1 ;~ 0396:5890
cs=0x396;eip=0x005892; 	T(ADD(cx, ax));	// 14616 add     cx, ax ;~ 0396:5892
cs=0x396;eip=0x005894; 	T(ADC(bx, dx));	// 14617 adc     bx, dx ;~ 0396:5894
cs=0x396;eip=0x005896; 	T(SHL(cx, 1));	// 14618 shl     cx, 1 ;~ 0396:5896
cs=0x396;eip=0x005898; 	T(RCL(bx, 1));	// 14619 rcl     bx, 1 ;~ 0396:5898
cs=0x396;eip=0x00589a; 	T(ADD(cx, *(dw*)(raddr(ss,bp+var_12))));	// 14620 add     cx, [bp+var_12] ;~ 0396:589A
cs=0x396;eip=0x00589d; 	T(ADC(bx, *(dw*)(raddr(ss,bp+var_10))));	// 14621 adc     bx, [bp+var_10] ;~ 0396:589D
cs=0x396;eip=0x0058a0; 	T(ADD(cx, *(dw*)(raddr(ss,bp+var_16))));	// 14622 add     cx, [bp+var_16] ;~ 0396:58A0
cs=0x396;eip=0x0058a3; 	T(ADC(bx, *(dw*)(raddr(ss,bp+var_14))));	// 14623 adc     bx, [bp+var_14] ;~ 0396:58A3
cs=0x396;eip=0x0058a6; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), cx));	// 14624 mov     [bp+var_A], cx ;~ 0396:58A6
cs=0x396;eip=0x0058a9; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), bx));	// 14625 mov     [bp+var_8], bx ;~ 0396:58A9
cs=0x396;eip=0x0058ac; 	T(MOV(ax, cx));	// 14626 mov     ax, cx ;~ 0396:58AC
cs=0x396;eip=0x0058ae; 	T(OR(ax, bx));	// 14627 or      ax, bx ;~ 0396:58AE
cs=0x396;eip=0x0058b0; 	R(JZ(loc_17812));	// 14628 jz      short loc_17812 ;~ 0396:58B0
cs=0x396;eip=0x0058b2; 	X(PUSH(bx));	// 14629 push    bx ;~ 0396:58B2
cs=0x396;eip=0x0058b3; 	X(PUSH(cx));	// 14630 push    cx ;~ 0396:58B3
cs=0x396;eip=0x0058b4; 	T(MOV(ax, 0x1770));	// 14631 mov     ax, 1770h ;~ 0396:58B4
cs=0x396;eip=0x0058b7; 	T(CWD);	// 14632 cwd ;~ 0396:58B7
cs=0x396;eip=0x0058b8; 	X(PUSH(dx));	// 14633 push    dx ;~ 0396:58B8
cs=0x396;eip=0x0058b9; 	X(PUSH(ax));	// 14634 push    ax ;~ 0396:58B9
cs=0x396;eip=0x0058ba; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 14635 push    [bp+var_4] ;~ 0396:58BA
cs=0x396;eip=0x0058bd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 14636 push    [bp+var_6] ;~ 0396:58BD
cs=0x396;eip=0x0058c0; 	R(CALLF(sub_29d98,0));	// 14637 call    sub_29D98 ;~ 0396:58C0
cs=0x396;eip=0x0058c5; 	X(PUSH(dx));	// 14638 push    dx ;~ 0396:58C5
cs=0x396;eip=0x0058c6; 	X(PUSH(ax));	// 14639 push    ax ;~ 0396:58C6
cs=0x396;eip=0x0058c7; 	R(CALLF(sub_29cfc,0));	// 14640 call    sub_29CFC ;~ 0396:58C7
cs=0x396;eip=0x0058cc; 	X(MOV(*(raddr(ds,si-0x17FF)), al));	// 14641 mov     [si-17FFh], al ;~ 0396:58CC
cs=0x396;eip=0x0058d0; 	R(JMP(loc_1781f));	// 14642 jmp     short loc_1781F ;~ 0396:58D0
loc_17812:
	// 5131 
cs=0x396;eip=0x0058d2; 	T(MOV(ax, 0x1B));	// 14646 mov     ax, 1Bh ;~ 0396:58D2
cs=0x396;eip=0x0058d5; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 14647 imul    [bp+var_2] ;~ 0396:58D5
cs=0x396;eip=0x0058d8; 	T(MOV(bx, ax));	// 14648 mov     bx, ax ;~ 0396:58D8
cs=0x396;eip=0x0058da; 	X(MOV(*(raddr(ds,bx-0x17FF)), 0));	// 14649 mov     byte ptr [bx-17FFh], 0 ;~ 0396:58DA
loc_1781f:
	// 5132 
cs=0x396;eip=0x0058df; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 14652 inc     [bp+var_2] ;~ 0396:58DF
loc_17822:
	// 5133 
cs=0x396;eip=0x0058e2; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 3));	// 14655 cmp     [bp+var_2], 3 ;~ 0396:58E2
cs=0x396;eip=0x0058e6; 	R(JL(loc_1782b));	// 14656 jl      short loc_1782B ;~ 0396:58E6
cs=0x396;eip=0x0058e8; 	R(JMP(loc_178e6));	// 14657 jmp     loc_178E6 ;~ 0396:58E8
loc_1782b:
	// 5134 
cs=0x396;eip=0x0058eb; 	T(MOV(ax, 0x1B));	// 14661 mov     ax, 1Bh ;~ 0396:58EB
cs=0x396;eip=0x0058ee; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 14662 imul    [bp+var_2] ;~ 0396:58EE
cs=0x396;eip=0x0058f1; 	T(MOV(si, ax));	// 14663 mov     si, ax ;~ 0396:58F1
cs=0x396;eip=0x0058f3; 	T(MOV(ax, 0x3C));	// 14664 mov     ax, 3Ch ; '<' ;~ 0396:58F3
cs=0x396;eip=0x0058f6; 	T(CWD);	// 14665 cwd ;~ 0396:58F6
cs=0x396;eip=0x0058f7; 	X(PUSH(dx));	// 14666 push    dx ;~ 0396:58F7
cs=0x396;eip=0x0058f8; 	X(PUSH(ax));	// 14667 push    ax ;~ 0396:58F8
cs=0x396;eip=0x0058f9; 	T(MOV(al, *(raddr(ds,si-0x1804))));	// 14668 mov     al, [si-1804h] ;~ 0396:58F9
cs=0x396;eip=0x0058fd; 	T(SUB(ah, ah));	// 14669 sub     ah, ah ;~ 0396:58FD
cs=0x396;eip=0x0058ff; 	T(SUB(cx, cx));	// 14670 sub     cx, cx ;~ 0396:58FF
cs=0x396;eip=0x005901; 	X(PUSH(cx));	// 14671 push    cx ;~ 0396:5901
cs=0x396;eip=0x005902; 	X(PUSH(ax));	// 14672 push    ax ;~ 0396:5902
cs=0x396;eip=0x005903; 	R(CALLF(sub_29d98,0));	// 14673 call    sub_29D98 ;~ 0396:5903
cs=0x396;eip=0x005908; 	T(MOV(cl, *(raddr(ds,si-0x1803))));	// 14674 mov     cl, [si-1803h] ;~ 0396:5908
cs=0x396;eip=0x00590c; 	T(SUB(ch, ch));	// 14675 sub     ch, ch ;~ 0396:590C
cs=0x396;eip=0x00590e; 	T(ADD(ax, cx));	// 14676 add     ax, cx ;~ 0396:590E
cs=0x396;eip=0x005910; 	T(ADC(dx, 0));	// 14677 adc     dx, 0 ;~ 0396:5910
cs=0x396;eip=0x005913; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 14678 mov     [bp+var_6], ax ;~ 0396:5913
cs=0x396;eip=0x005916; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 14679 mov     [bp+var_4], dx ;~ 0396:5916
cs=0x396;eip=0x005919; 	T(MOV(ax, 0x1770));	// 14680 mov     ax, 1770h ;~ 0396:5919
cs=0x396;eip=0x00591c; 	T(CWD);	// 14681 cwd ;~ 0396:591C
cs=0x396;eip=0x00591d; 	X(PUSH(dx));	// 14682 push    dx ;~ 0396:591D
cs=0x396;eip=0x00591e; 	X(PUSH(ax));	// 14683 push    ax ;~ 0396:591E
cs=0x396;eip=0x00591f; 	T(MOV(al, *(raddr(ds,si-0x180C))));	// 14684 mov     al, [si-180Ch] ;~ 0396:591F
cs=0x396;eip=0x005923; 	T(SUB(ah, ah));	// 14685 sub     ah, ah ;~ 0396:5923
cs=0x396;eip=0x005925; 	T(SUB(cx, cx));	// 14686 sub     cx, cx ;~ 0396:5925
cs=0x396;eip=0x005927; 	X(PUSH(cx));	// 14687 push    cx ;~ 0396:5927
cs=0x396;eip=0x005928; 	X(PUSH(ax));	// 14688 push    ax ;~ 0396:5928
cs=0x396;eip=0x005929; 	R(CALLF(sub_29d98,0));	// 14689 call    sub_29D98 ;~ 0396:5929
cs=0x396;eip=0x00592e; 	T(MOV(cx, 0x64));	// 14690 mov     cx, 64h ; 'd' ;~ 0396:592E
cs=0x396;eip=0x005931; 	T(SUB(bx, bx));	// 14691 sub     bx, bx ;~ 0396:5931
cs=0x396;eip=0x005933; 	X(PUSH(bx));	// 14692 push    bx ;~ 0396:5933
cs=0x396;eip=0x005934; 	X(PUSH(cx));	// 14693 push    cx ;~ 0396:5934
cs=0x396;eip=0x005935; 	T(MOV(cl, *(raddr(ds,si-0x180B))));	// 14694 mov     cl, [si-180Bh] ;~ 0396:5935
cs=0x396;eip=0x005939; 	T(SUB(ch, ch));	// 14695 sub     ch, ch ;~ 0396:5939
cs=0x396;eip=0x00593b; 	X(PUSH(bx));	// 14696 push    bx ;~ 0396:593B
cs=0x396;eip=0x00593c; 	X(PUSH(cx));	// 14697 push    cx ;~ 0396:593C
cs=0x396;eip=0x00593d; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 14698 mov     [bp+var_12], ax ;~ 0396:593D
cs=0x396;eip=0x005940; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), dx));	// 14699 mov     [bp+var_10], dx ;~ 0396:5940
cs=0x396;eip=0x005943; 	R(CALLF(sub_29d98,0));	// 14700 call    sub_29D98 ;~ 0396:5943
cs=0x396;eip=0x005948; 	T(MOV(cl, *(raddr(ds,si-0x180A))));	// 14701 mov     cl, [si-180Ah] ;~ 0396:5948
cs=0x396;eip=0x00594c; 	T(SUB(ch, ch));	// 14702 sub     ch, ch ;~ 0396:594C
cs=0x396;eip=0x00594e; 	T(SUB(bx, bx));	// 14703 sub     bx, bx ;~ 0396:594E
cs=0x396;eip=0x005950; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 14704 mov     [bp+var_16], ax ;~ 0396:5950
cs=0x396;eip=0x005953; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), dx));	// 14705 mov     [bp+var_14], dx ;~ 0396:5953
cs=0x396;eip=0x005956; 	T(MOV(ax, cx));	// 14706 mov     ax, cx ;~ 0396:5956
cs=0x396;eip=0x005958; 	T(MOV(dx, bx));	// 14707 mov     dx, bx ;~ 0396:5958
cs=0x396;eip=0x00595a; 	T(SHL(cx, 1));	// 14708 shl     cx, 1 ;~ 0396:595A
cs=0x396;eip=0x00595c; 	T(RCL(bx, 1));	// 14709 rcl     bx, 1 ;~ 0396:595C
cs=0x396;eip=0x00595e; 	T(SHL(cx, 1));	// 14710 shl     cx, 1 ;~ 0396:595E
cs=0x396;eip=0x005960; 	T(RCL(bx, 1));	// 14711 rcl     bx, 1 ;~ 0396:5960
cs=0x396;eip=0x005962; 	T(ADD(cx, ax));	// 14712 add     cx, ax ;~ 0396:5962
cs=0x396;eip=0x005964; 	T(ADC(bx, dx));	// 14713 adc     bx, dx ;~ 0396:5964
cs=0x396;eip=0x005966; 	T(SHL(cx, 1));	// 14714 shl     cx, 1 ;~ 0396:5966
cs=0x396;eip=0x005968; 	T(RCL(bx, 1));	// 14715 rcl     bx, 1 ;~ 0396:5968
cs=0x396;eip=0x00596a; 	T(ADD(cx, *(dw*)(raddr(ss,bp+var_16))));	// 14716 add     cx, [bp+var_16] ;~ 0396:596A
cs=0x396;eip=0x00596d; 	T(ADC(bx, *(dw*)(raddr(ss,bp+var_14))));	// 14717 adc     bx, [bp+var_14] ;~ 0396:596D
cs=0x396;eip=0x005970; 	T(ADD(cx, *(dw*)(raddr(ss,bp+var_12))));	// 14718 add     cx, [bp+var_12] ;~ 0396:5970
cs=0x396;eip=0x005973; 	T(ADC(bx, *(dw*)(raddr(ss,bp+var_10))));	// 14719 adc     bx, [bp+var_10] ;~ 0396:5973
cs=0x396;eip=0x005976; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), cx));	// 14720 mov     [bp+var_A], cx ;~ 0396:5976
cs=0x396;eip=0x005979; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), bx));	// 14721 mov     [bp+var_8], bx ;~ 0396:5979
cs=0x396;eip=0x00597c; 	T(MOV(ax, cx));	// 14722 mov     ax, cx ;~ 0396:597C
cs=0x396;eip=0x00597e; 	T(OR(ax, bx));	// 14723 or      ax, bx ;~ 0396:597E
cs=0x396;eip=0x005980; 	R(JNZ(loc_178c5));	// 14724 jnz     short loc_178C5 ;~ 0396:5980
cs=0x396;eip=0x005982; 	R(JMP(loc_17554));	// 14725 jmp     loc_17554 ;~ 0396:5982
loc_178c5:
	// 5135 
cs=0x396;eip=0x005985; 	X(PUSH(bx));	// 14729 push    bx ;~ 0396:5985
cs=0x396;eip=0x005986; 	X(PUSH(cx));	// 14730 push    cx ;~ 0396:5986
cs=0x396;eip=0x005987; 	T(MOV(ax, 0x1770));	// 14731 mov     ax, 1770h ;~ 0396:5987
cs=0x396;eip=0x00598a; 	T(CWD);	// 14732 cwd ;~ 0396:598A
cs=0x396;eip=0x00598b; 	X(PUSH(dx));	// 14733 push    dx ;~ 0396:598B
cs=0x396;eip=0x00598c; 	X(PUSH(ax));	// 14734 push    ax ;~ 0396:598C
cs=0x396;eip=0x00598d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 14735 push    [bp+var_4] ;~ 0396:598D
cs=0x396;eip=0x005990; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 14736 push    [bp+var_6] ;~ 0396:5990
cs=0x396;eip=0x005993; 	R(CALLF(sub_29d98,0));	// 14737 call    sub_29D98 ;~ 0396:5993
cs=0x396;eip=0x005998; 	X(PUSH(dx));	// 14738 push    dx ;~ 0396:5998
cs=0x396;eip=0x005999; 	X(PUSH(ax));	// 14739 push    ax ;~ 0396:5999
cs=0x396;eip=0x00599a; 	R(CALLF(sub_29cfc,0));	// 14740 call    sub_29CFC ;~ 0396:599A
cs=0x396;eip=0x00599f; 	X(MOV(*(raddr(ds,si-0x1809)), al));	// 14741 mov     [si-1809h], al ;~ 0396:599F
cs=0x396;eip=0x0059a3; 	R(JMP(loc_17561));	// 14742 jmp     loc_17561 ;~ 0396:59A3
loc_178e6:
	// 5136 
cs=0x396;eip=0x0059a6; 	X(POP(si));	// 14747 pop     si ;~ 0396:59A6
cs=0x396;eip=0x0059a7; 	T(MOV(sp, bp));	// 14748 mov     sp, bp ;~ 0396:59A7
cs=0x396;eip=0x0059a9; 	X(POP(bp));	// 14749 pop     bp ;~ 0396:59A9
cs=0x396;eip=0x0059aa; 	R(RETF(0));	// 14750 retf ;~ 0396:59AA
sub_178ec:
	// 14760 
#undef arg_0
#define arg_0 6
	// 14763 arg_0           = word ptr  6 ;~ 0396:59AC
#undef arg_2
#define arg_2 8
	// 14764 arg_2           = word ptr  8 ;~ 0396:59AC
#undef arg_4
#define arg_4 0x0A
	// 14765 arg_4           = word ptr  0Ah ;~ 0396:59AC
#undef arg_6
#define arg_6 0x0C
	// 14766 arg_6           = word ptr  0Ch ;~ 0396:59AC
#undef arg_8
#define arg_8 0x0E
	// 14767 arg_8           = word ptr  0Eh ;~ 0396:59AC
#undef arg_a
#define arg_a 0x10
	// 14768 arg_A           = word ptr  10h ;~ 0396:59AC
ret_396_59ac:
	// 5137 
cs=0x396;eip=0x0059ac; 	X(PUSH(bp));	// 14770 push    bp ;~ 0396:59AC
cs=0x396;eip=0x0059ad; 	T(MOV(bp, sp));	// 14771 mov     bp, sp ;~ 0396:59AD
cs=0x396;eip=0x0059af; 	T(CMP(word_3a178, 0x13));	// 14772 cmp     word_3A178, 13h ;~ 0396:59AF
cs=0x396;eip=0x0059b4; 	R(JNZ(loc_17910));	// 14773 jnz     short loc_17910 ;~ 0396:59B4
cs=0x396;eip=0x0059b6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 14774 push    [bp+arg_8] ;~ 0396:59B6
cs=0x396;eip=0x0059b9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 14775 push    [bp+arg_6] ;~ 0396:59B9
cs=0x396;eip=0x0059bc; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 14776 push    [bp+arg_4] ;~ 0396:59BC
cs=0x396;eip=0x0059bf; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 14777 push    [bp+arg_2] ;~ 0396:59BF
cs=0x396;eip=0x0059c2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 14778 push    [bp+arg_0] ;~ 0396:59C2
cs=0x396;eip=0x0059c5; 	R(CALLF(sub_1ce05,0));	// 14779 call    sub_1CE05 ;~ 0396:59C5
cs=0x396;eip=0x0059ca; 	T(ADD(sp, 0x0A));	// 14780 add     sp, 0Ah ;~ 0396:59CA
cs=0x396;eip=0x0059cd; 	X(POP(bp));	// 14781 pop     bp ;~ 0396:59CD
cs=0x396;eip=0x0059ce; 	R(RETF(0));	// 14782 retf ;~ 0396:59CE
loc_17910:
	// 5138 
cs=0x396;eip=0x0059d0; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 14787 push    [bp+arg_A] ;~ 0396:59D0
cs=0x396;eip=0x0059d3; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 14788 push    [bp+arg_8] ;~ 0396:59D3
cs=0x396;eip=0x0059d6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 14789 push    [bp+arg_6] ;~ 0396:59D6
cs=0x396;eip=0x0059d9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 14790 push    [bp+arg_4] ;~ 0396:59D9
cs=0x396;eip=0x0059dc; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 14791 push    [bp+arg_2] ;~ 0396:59DC
cs=0x396;eip=0x0059df; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 14792 push    [bp+arg_0] ;~ 0396:59DF
cs=0x396;eip=0x0059e2; 	R(CALLF(sub_1dd4a,0));	// 14793 call    sub_1DD4A ;~ 0396:59E2
cs=0x396;eip=0x0059e7; 	T(ADD(sp, 0x0C));	// 14794 add     sp, 0Ch ;~ 0396:59E7
cs=0x396;eip=0x0059ea; 	X(POP(bp));	// 14795 pop     bp ;~ 0396:59EA
cs=0x396;eip=0x0059eb; 	R(RETF(0));	// 14796 retf ;~ 0396:59EB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kdef_13c76: 	goto def_13c76;
        case m2c::kloc_11f5a: 	goto loc_11f5a;
        case m2c::kloc_11f8a: 	goto loc_11f8a;
        case m2c::kloc_1207a: 	goto loc_1207a;
        case m2c::kloc_1208e: 	goto loc_1208e;
        case m2c::kloc_12099: 	goto loc_12099;
        case m2c::kloc_120a0: 	goto loc_120a0;
        case m2c::kloc_1213a: 	goto loc_1213a;
        case m2c::kloc_12142: 	goto loc_12142;
        case m2c::kloc_121d9: 	goto loc_121d9;
        case m2c::kloc_121fc: 	goto loc_121fc;
        case m2c::kloc_12200: 	goto loc_12200;
        case m2c::kloc_1220c: 	goto loc_1220c;
        case m2c::kloc_1220f: 	goto loc_1220f;
        case m2c::kloc_12221: 	goto loc_12221;
        case m2c::kloc_12311: 	goto loc_12311;
        case m2c::kloc_123a3: 	goto loc_123a3;
        case m2c::kloc_123e6: 	goto loc_123e6;
        case m2c::kloc_12612: 	goto loc_12612;
        case m2c::kloc_1272a: 	goto loc_1272a;
        case m2c::kloc_1279a: 	goto loc_1279a;
        case m2c::kloc_1279d: 	goto loc_1279d;
        case m2c::kloc_127af: 	goto loc_127af;
        case m2c::kloc_127ed: 	goto loc_127ed;
        case m2c::kloc_12932: 	goto loc_12932;
        case m2c::kloc_12934: 	goto loc_12934;
        case m2c::kloc_129b7: 	goto loc_129b7;
        case m2c::kloc_12b30: 	goto loc_12b30;
        case m2c::kloc_12b36: 	goto loc_12b36;
        case m2c::kloc_12b69: 	goto loc_12b69;
        case m2c::kloc_12bb0: 	goto loc_12bb0;
        case m2c::kloc_12bba: 	goto loc_12bba;
        case m2c::kloc_12c4f: 	goto loc_12c4f;
        case m2c::kloc_12ca5: 	goto loc_12ca5;
        case m2c::kloc_12cad: 	goto loc_12cad;
        case m2c::kloc_12cba: 	goto loc_12cba;
        case m2c::kloc_12cc2: 	goto loc_12cc2;
        case m2c::kloc_12cd0: 	goto loc_12cd0;
        case m2c::kloc_12cd5: 	goto loc_12cd5;
        case m2c::kloc_12cde: 	goto loc_12cde;
        case m2c::kloc_12cea: 	goto loc_12cea;
        case m2c::kloc_12cf6: 	goto loc_12cf6;
        case m2c::kloc_12cff: 	goto loc_12cff;
        case m2c::kloc_12d08: 	goto loc_12d08;
        case m2c::kloc_12d11: 	goto loc_12d11;
        case m2c::kloc_12d1a: 	goto loc_12d1a;
        case m2c::kloc_12d2a: 	goto loc_12d2a;
        case m2c::kloc_12d38: 	goto loc_12d38;
        case m2c::kloc_12d3e: 	goto loc_12d3e;
        case m2c::kloc_12d4e: 	goto loc_12d4e;
        case m2c::kloc_12d5a: 	goto loc_12d5a;
        case m2c::kloc_12d62: 	goto loc_12d62;
        case m2c::kloc_12db4: 	goto loc_12db4;
        case m2c::kloc_12db9: 	goto loc_12db9;
        case m2c::kloc_12dc0: 	goto loc_12dc0;
        case m2c::kloc_12dc3: 	goto loc_12dc3;
        case m2c::kloc_12de5: 	goto loc_12de5;
        case m2c::kloc_12dec: 	goto loc_12dec;
        case m2c::kloc_12def: 	goto loc_12def;
        case m2c::kloc_12e0a: 	goto loc_12e0a;
        case m2c::kloc_12e0d: 	goto loc_12e0d;
        case m2c::kloc_12e40: 	goto loc_12e40;
        case m2c::kloc_12e65: 	goto loc_12e65;
        case m2c::kloc_1301e: 	goto loc_1301e;
        case m2c::kloc_1305e: 	goto loc_1305e;
        case m2c::kloc_13066: 	goto loc_13066;
        case m2c::kloc_13070: 	goto loc_13070;
        case m2c::kloc_13084: 	goto loc_13084;
        case m2c::kloc_130b8: 	goto loc_130b8;
        case m2c::kloc_13103: 	goto loc_13103;
        case m2c::kloc_13112: 	goto loc_13112;
        case m2c::kloc_1311b: 	goto loc_1311b;
        case m2c::kloc_13151: 	goto loc_13151;
        case m2c::kloc_13154: 	goto loc_13154;
        case m2c::kloc_13178: 	goto loc_13178;
        case m2c::kloc_13182: 	goto loc_13182;
        case m2c::kloc_131cb: 	goto loc_131cb;
        case m2c::kloc_13206: 	goto loc_13206;
        case m2c::kloc_13332: 	goto loc_13332;
        case m2c::kloc_13338: 	goto loc_13338;
        case m2c::kloc_13348: 	goto loc_13348;
        case m2c::kloc_13350: 	goto loc_13350;
        case m2c::kloc_13364: 	goto loc_13364;
        case m2c::kloc_133dd: 	goto loc_133dd;
        case m2c::kloc_1364d: 	goto loc_1364d;
        case m2c::kloc_13658: 	goto loc_13658;
        case m2c::kloc_13678: 	goto loc_13678;
        case m2c::kloc_1367b: 	goto loc_1367b;
        case m2c::kloc_136b7: 	goto loc_136b7;
        case m2c::kloc_136e2: 	goto loc_136e2;
        case m2c::kloc_136f2: 	goto loc_136f2;
        case m2c::kloc_136f6: 	goto loc_136f6;
        case m2c::kloc_13702: 	goto loc_13702;
        case m2c::kloc_13714: 	goto loc_13714;
        case m2c::kloc_13724: 	goto loc_13724;
        case m2c::kloc_13734: 	goto loc_13734;
        case m2c::kloc_1373b: 	goto loc_1373b;
        case m2c::kloc_13744: 	goto loc_13744;
        case m2c::kloc_1374a: 	goto loc_1374a;
        case m2c::kloc_13759: 	goto loc_13759;
        case m2c::kloc_13798: 	goto loc_13798;
        case m2c::kloc_13820: 	goto loc_13820;
        case m2c::kloc_1382f: 	goto loc_1382f;
        case m2c::kloc_13837: 	goto loc_13837;
        case m2c::kloc_13856: 	goto loc_13856;
        case m2c::kloc_1386e: 	goto loc_1386e;
        case m2c::kloc_1387d: 	goto loc_1387d;
        case m2c::kloc_13885: 	goto loc_13885;
        case m2c::kloc_1388e: 	goto loc_1388e;
        case m2c::kloc_138a9: 	goto loc_138a9;
        case m2c::kloc_138b2: 	goto loc_138b2;
        case m2c::kloc_138ca: 	goto loc_138ca;
        case m2c::kloc_138f1: 	goto loc_138f1;
        case m2c::kloc_138fe: 	goto loc_138fe;
        case m2c::kloc_13930: 	goto loc_13930;
        case m2c::kloc_1394e: 	goto loc_1394e;
        case m2c::kloc_13976: 	goto loc_13976;
        case m2c::kloc_13979: 	goto loc_13979;
        case m2c::kloc_139a5: 	goto loc_139a5;
        case m2c::kloc_139ac: 	goto loc_139ac;
        case m2c::kloc_139cd: 	goto loc_139cd;
        case m2c::kloc_139e6: 	goto loc_139e6;
        case m2c::kloc_139f5: 	goto loc_139f5;
        case m2c::kloc_13a20: 	goto loc_13a20;
        case m2c::kloc_13a2f: 	goto loc_13a2f;
        case m2c::kloc_13a6e: 	goto loc_13a6e;
        case m2c::kloc_13a7d: 	goto loc_13a7d;
        case m2c::kloc_13aa6: 	goto loc_13aa6;
        case m2c::kloc_13ac0: 	goto loc_13ac0;
        case m2c::kloc_13adc: 	goto loc_13adc;
        case m2c::kloc_13b0c: 	goto loc_13b0c;
        case m2c::kloc_13b15: 	goto loc_13b15;
        case m2c::kloc_13b4b: 	goto loc_13b4b;
        case m2c::kloc_13b6f: 	goto loc_13b6f;
        case m2c::kloc_13bf6: 	goto loc_13bf6;
        case m2c::kloc_13bfb: 	goto loc_13bfb;
        case m2c::kloc_13c1f: 	goto loc_13c1f;
        case m2c::kloc_13c5c: 	goto loc_13c5c;
        case m2c::kloc_13c73: 	goto loc_13c73;
        case m2c::kloc_13c7c: 	goto loc_13c7c;
        case m2c::kloc_13c86: 	goto loc_13c86;
        case m2c::kloc_13c90: 	goto loc_13c90;
        case m2c::kloc_13ca6: 	goto loc_13ca6;
        case m2c::kloc_13cb0: 	goto loc_13cb0;
        case m2c::kloc_13cba: 	goto loc_13cba;
        case m2c::kloc_13ce4: 	goto loc_13ce4;
        case m2c::kloc_13cf4: 	goto loc_13cf4;
        case m2c::kloc_13d09: 	goto loc_13d09;
        case m2c::kloc_13d1e: 	goto loc_13d1e;
        case m2c::kloc_13d70: 	goto loc_13d70;
        case m2c::kloc_13d76: 	goto loc_13d76;
        case m2c::kloc_13dfc: 	goto loc_13dfc;
        case m2c::kloc_13e1d: 	goto loc_13e1d;
        case m2c::kloc_13e54: 	goto loc_13e54;
        case m2c::kloc_13e60: 	goto loc_13e60;
        case m2c::kloc_140b8: 	goto loc_140b8;
        case m2c::kloc_140be: 	goto loc_140be;
        case m2c::kloc_140f4: 	goto loc_140f4;
        case m2c::kloc_14101: 	goto loc_14101;
        case m2c::kloc_1410e: 	goto loc_1410e;
        case m2c::kloc_14126: 	goto loc_14126;
        case m2c::kloc_1416a: 	goto loc_1416a;
        case m2c::kloc_14245: 	goto loc_14245;
        case m2c::kloc_142ad: 	goto loc_142ad;
        case m2c::kloc_142bc: 	goto loc_142bc;
        case m2c::kloc_142d6: 	goto loc_142d6;
        case m2c::kloc_1434d: 	goto loc_1434d;
        case m2c::kloc_14356: 	goto loc_14356;
        case m2c::kloc_14399: 	goto loc_14399;
        case m2c::kloc_143cf: 	goto loc_143cf;
        case m2c::kloc_143d8: 	goto loc_143d8;
        case m2c::kloc_143ea: 	goto loc_143ea;
        case m2c::kloc_1445e: 	goto loc_1445e;
        case m2c::kloc_144a8: 	goto loc_144a8;
        case m2c::kloc_144b1: 	goto loc_144b1;
        case m2c::kloc_1451c: 	goto loc_1451c;
        case m2c::kloc_14538: 	goto loc_14538;
        case m2c::kloc_14542: 	goto loc_14542;
        case m2c::kloc_14558: 	goto loc_14558;
        case m2c::kloc_1463c: 	goto loc_1463c;
        case m2c::kloc_14644: 	goto loc_14644;
        case m2c::kloc_14663: 	goto loc_14663;
        case m2c::kloc_1469a: 	goto loc_1469a;
        case m2c::kloc_14744: 	goto loc_14744;
        case m2c::kloc_1475d: 	goto loc_1475d;
        case m2c::kloc_147ad: 	goto loc_147ad;
        case m2c::kloc_147b9: 	goto loc_147b9;
        case m2c::kloc_147e0: 	goto loc_147e0;
        case m2c::kloc_147e9: 	goto loc_147e9;
        case m2c::kloc_1480b: 	goto loc_1480b;
        case m2c::kloc_14812: 	goto loc_14812;
        case m2c::kloc_14832: 	goto loc_14832;
        case m2c::kloc_14840: 	goto loc_14840;
        case m2c::kloc_148c3: 	goto loc_148c3;
        case m2c::kloc_14908: 	goto loc_14908;
        case m2c::kloc_14925: 	goto loc_14925;
        case m2c::kloc_14948: 	goto loc_14948;
        case m2c::kloc_14950: 	goto loc_14950;
        case m2c::kloc_149b3: 	goto loc_149b3;
        case m2c::kloc_149c2: 	goto loc_149c2;
        case m2c::kloc_14a44: 	goto loc_14a44;
        case m2c::kloc_14a67: 	goto loc_14a67;
        case m2c::kloc_14a8a: 	goto loc_14a8a;
        case m2c::kloc_14aad: 	goto loc_14aad;
        case m2c::kloc_14ad0: 	goto loc_14ad0;
        case m2c::kloc_14af3: 	goto loc_14af3;
        case m2c::kloc_14b1b: 	goto loc_14b1b;
        case m2c::kloc_14b24: 	goto loc_14b24;
        case m2c::kloc_14b83: 	goto loc_14b83;
        case m2c::kloc_14b92: 	goto loc_14b92;
        case m2c::kloc_14c12: 	goto loc_14c12;
        case m2c::kloc_14c35: 	goto loc_14c35;
        case m2c::kloc_14c58: 	goto loc_14c58;
        case m2c::kloc_14c7c: 	goto loc_14c7c;
        case m2c::kloc_14c99: 	goto loc_14c99;
        case m2c::kloc_14cb2: 	goto loc_14cb2;
        case m2c::kloc_14cb5: 	goto loc_14cb5;
        case m2c::kloc_14cce: 	goto loc_14cce;
        case m2c::kloc_14cd1: 	goto loc_14cd1;
        case m2c::kloc_14cde: 	goto loc_14cde;
        case m2c::kloc_14ce3: 	goto loc_14ce3;
        case m2c::kloc_14d0b: 	goto loc_14d0b;
        case m2c::kloc_14d12: 	goto loc_14d12;
        case m2c::kloc_14d58: 	goto loc_14d58;
        case m2c::kloc_14d7f: 	goto loc_14d7f;
        case m2c::kloc_14d96: 	goto loc_14d96;
        case m2c::kloc_14df4: 	goto loc_14df4;
        case m2c::kloc_14e40: 	goto loc_14e40;
        case m2c::kloc_14f15: 	goto loc_14f15;
        case m2c::kloc_14f48: 	goto loc_14f48;
        case m2c::kloc_14f7d: 	goto loc_14f7d;
        case m2c::kloc_14f9c: 	goto loc_14f9c;
        case m2c::kloc_14fd0: 	goto loc_14fd0;
        case m2c::kloc_15001: 	goto loc_15001;
        case m2c::kloc_15020: 	goto loc_15020;
        case m2c::kloc_1506a: 	goto loc_1506a;
        case m2c::kloc_15073: 	goto loc_15073;
        case m2c::kloc_15083: 	goto loc_15083;
        case m2c::kloc_150a9: 	goto loc_150a9;
        case m2c::kloc_150fe: 	goto loc_150fe;
        case m2c::kloc_15101: 	goto loc_15101;
        case m2c::kloc_1510b: 	goto loc_1510b;
        case m2c::kloc_15130: 	goto loc_15130;
        case m2c::kloc_15135: 	goto loc_15135;
        case m2c::kloc_15186: 	goto loc_15186;
        case m2c::kloc_151d1: 	goto loc_151d1;
        case m2c::kloc_151f1: 	goto loc_151f1;
        case m2c::kloc_15206: 	goto loc_15206;
        case m2c::kloc_1521a: 	goto loc_1521a;
        case m2c::kloc_15226: 	goto loc_15226;
        case m2c::kloc_1522c: 	goto loc_1522c;
        case m2c::kloc_15237: 	goto loc_15237;
        case m2c::kloc_1524a: 	goto loc_1524a;
        case m2c::kloc_15258: 	goto loc_15258;
        case m2c::kloc_15260: 	goto loc_15260;
        case m2c::kloc_1526c: 	goto loc_1526c;
        case m2c::kloc_15290: 	goto loc_15290;
        case m2c::kloc_15293: 	goto loc_15293;
        case m2c::kloc_152c2: 	goto loc_152c2;
        case m2c::kloc_152c5: 	goto loc_152c5;
        case m2c::kloc_152cf: 	goto loc_152cf;
        case m2c::kloc_152f2: 	goto loc_152f2;
        case m2c::kloc_152f5: 	goto loc_152f5;
        case m2c::kloc_15324: 	goto loc_15324;
        case m2c::kloc_15327: 	goto loc_15327;
        case m2c::kloc_15331: 	goto loc_15331;
        case m2c::kloc_15598: 	goto loc_15598;
        case m2c::kloc_155d0: 	goto loc_155d0;
        case m2c::kloc_155d7: 	goto loc_155d7;
        case m2c::kloc_155dd: 	goto loc_155dd;
        case m2c::kloc_155f6: 	goto loc_155f6;
        case m2c::kloc_15600: 	goto loc_15600;
        case m2c::kloc_15608: 	goto loc_15608;
        case m2c::kloc_15619: 	goto loc_15619;
        case m2c::kloc_1563c: 	goto loc_1563c;
        case m2c::kloc_1563f: 	goto loc_1563f;
        case m2c::kloc_1566a: 	goto loc_1566a;
        case m2c::kloc_1566d: 	goto loc_1566d;
        case m2c::kloc_15677: 	goto loc_15677;
        case m2c::kloc_1569a: 	goto loc_1569a;
        case m2c::kloc_1569d: 	goto loc_1569d;
        case m2c::kloc_156c8: 	goto loc_156c8;
        case m2c::kloc_156cb: 	goto loc_156cb;
        case m2c::kloc_156d5: 	goto loc_156d5;
        case m2c::kloc_15780: 	goto loc_15780;
        case m2c::kloc_15b68: 	goto loc_15b68;
        case m2c::kloc_15b6a: 	goto loc_15b6a;
        case m2c::kloc_15c24: 	goto loc_15c24;
        case m2c::kloc_15c4e: 	goto loc_15c4e;
        case m2c::kloc_15c51: 	goto loc_15c51;
        case m2c::kloc_15c95: 	goto loc_15c95;
        case m2c::kloc_15cae: 	goto loc_15cae;
        case m2c::kloc_15cba: 	goto loc_15cba;
        case m2c::kloc_15cc8: 	goto loc_15cc8;
        case m2c::kloc_15cd6: 	goto loc_15cd6;
        case m2c::kloc_15cde: 	goto loc_15cde;
        case m2c::kloc_15cf0: 	goto loc_15cf0;
        case m2c::kloc_15d09: 	goto loc_15d09;
        case m2c::kloc_15d12: 	goto loc_15d12;
        case m2c::kloc_15d52: 	goto loc_15d52;
        case m2c::kloc_15d83: 	goto loc_15d83;
        case m2c::kloc_15d8a: 	goto loc_15d8a;
        case m2c::kloc_15d96: 	goto loc_15d96;
        case m2c::kloc_15daa: 	goto loc_15daa;
        case m2c::kloc_15dad: 	goto loc_15dad;
        case m2c::kloc_15db1: 	goto loc_15db1;
        case m2c::kloc_15df3: 	goto loc_15df3;
        case m2c::kloc_15e00: 	goto loc_15e00;
        case m2c::kloc_15e12: 	goto loc_15e12;
        case m2c::kloc_15e24: 	goto loc_15e24;
        case m2c::kloc_15e32: 	goto loc_15e32;
        case m2c::kloc_15e40: 	goto loc_15e40;
        case m2c::kloc_15e4e: 	goto loc_15e4e;
        case m2c::kloc_15e56: 	goto loc_15e56;
        case m2c::kloc_15e5b: 	goto loc_15e5b;
        case m2c::kloc_15e62: 	goto loc_15e62;
        case m2c::kloc_15e72: 	goto loc_15e72;
        case m2c::kloc_15e7a: 	goto loc_15e7a;
        case m2c::kloc_15e86: 	goto loc_15e86;
        case m2c::kloc_15e9d: 	goto loc_15e9d;
        case m2c::kloc_15ea2: 	goto loc_15ea2;
        case m2c::kloc_15eab: 	goto loc_15eab;
        case m2c::kloc_15ec5: 	goto loc_15ec5;
        case m2c::kloc_15ec9: 	goto loc_15ec9;
        case m2c::kloc_1602d: 	goto loc_1602d;
        case m2c::kloc_160ee: 	goto loc_160ee;
        case m2c::kloc_160f6: 	goto loc_160f6;
        case m2c::kloc_161b0: 	goto loc_161b0;
        case m2c::kloc_161b3: 	goto loc_161b3;
        case m2c::kloc_161c0: 	goto loc_161c0;
        case m2c::kloc_161ce: 	goto loc_161ce;
        case m2c::kloc_161e2: 	goto loc_161e2;
        case m2c::kloc_161e5: 	goto loc_161e5;
        case m2c::kloc_161fe: 	goto loc_161fe;
        case m2c::kloc_16281: 	goto loc_16281;
        case m2c::kloc_16293: 	goto loc_16293;
        case m2c::kloc_162a9: 	goto loc_162a9;
        case m2c::kloc_162f2: 	goto loc_162f2;
        case m2c::kloc_16304: 	goto loc_16304;
        case m2c::kloc_1631a: 	goto loc_1631a;
        case m2c::kloc_16363: 	goto loc_16363;
        case m2c::kloc_16375: 	goto loc_16375;
        case m2c::kloc_1638b: 	goto loc_1638b;
        case m2c::kloc_163b8: 	goto loc_163b8;
        case m2c::kloc_163c4: 	goto loc_163c4;
        case m2c::kloc_163d8: 	goto loc_163d8;
        case m2c::kloc_163db: 	goto loc_163db;
        case m2c::kloc_16406: 	goto loc_16406;
        case m2c::kloc_16412: 	goto loc_16412;
        case m2c::kloc_165b3: 	goto loc_165b3;
        case m2c::kloc_165c5: 	goto loc_165c5;
        case m2c::kloc_165d2: 	goto loc_165d2;
        case m2c::kloc_165de: 	goto loc_165de;
        case m2c::kloc_165f7: 	goto loc_165f7;
        case m2c::kloc_16609: 	goto loc_16609;
        case m2c::kloc_16614: 	goto loc_16614;
        case m2c::kloc_1661d: 	goto loc_1661d;
        case m2c::kloc_16628: 	goto loc_16628;
        case m2c::kloc_16740: 	goto loc_16740;
        case m2c::kloc_16743: 	goto loc_16743;
        case m2c::kloc_16794: 	goto loc_16794;
        case m2c::kloc_167a6: 	goto loc_167a6;
        case m2c::kloc_16814: 	goto loc_16814;
        case m2c::kloc_1687b: 	goto loc_1687b;
        case m2c::kloc_16922: 	goto loc_16922;
        case m2c::kloc_1692a: 	goto loc_1692a;
        case m2c::kloc_1693c: 	goto loc_1693c;
        case m2c::kloc_1696e: 	goto loc_1696e;
        case m2c::kloc_16a3c: 	goto loc_16a3c;
        case m2c::kloc_16b4c: 	goto loc_16b4c;
        case m2c::kloc_16b51: 	goto loc_16b51;
        case m2c::kloc_16c02: 	goto loc_16c02;
        case m2c::kloc_16c2e: 	goto loc_16c2e;
        case m2c::kloc_16c55: 	goto loc_16c55;
        case m2c::kloc_16c67: 	goto loc_16c67;
        case m2c::kloc_16c70: 	goto loc_16c70;
        case m2c::kloc_16c8c: 	goto loc_16c8c;
        case m2c::kloc_16c8f: 	goto loc_16c8f;
        case m2c::kloc_16caa: 	goto loc_16caa;
        case m2c::kloc_16cb4: 	goto loc_16cb4;
        case m2c::kloc_16cd6: 	goto loc_16cd6;
        case m2c::kloc_16d4e: 	goto loc_16d4e;
        case m2c::kloc_16d78: 	goto loc_16d78;
        case m2c::kloc_16d97: 	goto loc_16d97;
        case m2c::kloc_16eff: 	goto loc_16eff;
        case m2c::kloc_16f11: 	goto loc_16f11;
        case m2c::kloc_16f41: 	goto loc_16f41;
        case m2c::kloc_16f78: 	goto loc_16f78;
        case m2c::kloc_1700a: 	goto loc_1700a;
        case m2c::kloc_1701c: 	goto loc_1701c;
        case m2c::kloc_17062: 	goto loc_17062;
        case m2c::kloc_17071: 	goto loc_17071;
        case m2c::kloc_1708e: 	goto loc_1708e;
        case m2c::kloc_1709a: 	goto loc_1709a;
        case m2c::kloc_170f9: 	goto loc_170f9;
        case m2c::kloc_1710c: 	goto loc_1710c;
        case m2c::kloc_1711d: 	goto loc_1711d;
        case m2c::kloc_1720b: 	goto loc_1720b;
        case m2c::kloc_17212: 	goto loc_17212;
        case m2c::kloc_17237: 	goto loc_17237;
        case m2c::kloc_17254: 	goto loc_17254;
        case m2c::kloc_172ca: 	goto loc_172ca;
        case m2c::kloc_172fb: 	goto loc_172fb;
        case m2c::kloc_17318: 	goto loc_17318;
        case m2c::kloc_17322: 	goto loc_17322;
        case m2c::kloc_1735a: 	goto loc_1735a;
        case m2c::kloc_1736b: 	goto loc_1736b;
        case m2c::kloc_1737b: 	goto loc_1737b;
        case m2c::kloc_17518: 	goto loc_17518;
        case m2c::kloc_1752b: 	goto loc_1752b;
        case m2c::kloc_17541: 	goto loc_17541;
        case m2c::kloc_1754b: 	goto loc_1754b;
        case m2c::kloc_17554: 	goto loc_17554;
        case m2c::kloc_17561: 	goto loc_17561;
        case m2c::kloc_175b2: 	goto loc_175b2;
        case m2c::kloc_175c3: 	goto loc_175c3;
        case m2c::kloc_175ce: 	goto loc_175ce;
        case m2c::kloc_175e0: 	goto loc_175e0;
        case m2c::kloc_175fe: 	goto loc_175fe;
        case m2c::kloc_17608: 	goto loc_17608;
        case m2c::kloc_17638: 	goto loc_17638;
        case m2c::kloc_176b0: 	goto loc_176b0;
        case m2c::kloc_176dc: 	goto loc_176dc;
        case m2c::kloc_17703: 	goto loc_17703;
        case m2c::kloc_17726: 	goto loc_17726;
        case m2c::kloc_17733: 	goto loc_17733;
        case m2c::kloc_17753: 	goto loc_17753;
        case m2c::kloc_17812: 	goto loc_17812;
        case m2c::kloc_1781f: 	goto loc_1781f;
        case m2c::kloc_17822: 	goto loc_17822;
        case m2c::kloc_1782b: 	goto loc_1782b;
        case m2c::kloc_178c5: 	goto loc_178c5;
        case m2c::kloc_178e6: 	goto loc_178e6;
        case m2c::kloc_17910: 	goto loc_17910;
        case m2c::klocret_13b87: 	goto locret_13b87;
        case m2c::klocret_13b94: 	goto locret_13b94;
        case m2c::klocret_13ba2: 	goto locret_13ba2;
        case m2c::klocret_13bb0: 	goto locret_13bb0;
        case m2c::klocret_13bbe: 	goto locret_13bbe;
        case m2c::klocret_13bcc: 	goto locret_13bcc;
        case m2c::klocret_13bda: 	goto locret_13bda;
        case m2c::klocret_13dd9: 	goto locret_13dd9;
        case m2c::kret_396_144c: 	goto ret_396_144c;
        case m2c::kret_396_1864: 	goto ret_396_1864;
        case m2c::kret_396_19f4: 	goto ret_396_19f4;
        case m2c::kret_396_1a82: 	goto ret_396_1a82;
        case m2c::kret_396_1b0b: 	goto ret_396_1b0b;
        case m2c::kret_396_1b58: 	goto ret_396_1b58;
        case m2c::kret_396_1b8e: 	goto ret_396_1b8e;
        case m2c::kret_396_1be3: 	goto ret_396_1be3;
        case m2c::kret_396_1c00: 	goto ret_396_1c00;
        case m2c::kret_396_1c39: 	goto ret_396_1c39;
        case m2c::kret_396_1c4d: 	goto ret_396_1c4d;
        case m2c::kret_396_1c5b: 	goto ret_396_1c5b;
        case m2c::kret_396_1c69: 	goto ret_396_1c69;
        case m2c::kret_396_1c77: 	goto ret_396_1c77;
        case m2c::kret_396_1c85: 	goto ret_396_1c85;
        case m2c::kret_396_1c93: 	goto ret_396_1c93;
        case m2c::kret_396_1cf5: 	goto ret_396_1cf5;
        case m2c::kret_396_1d22: 	goto ret_396_1d22;
        case m2c::kret_396_1e4d: 	goto ret_396_1e4d;
        case m2c::kret_396_1e9f: 	goto ret_396_1e9f;
        case m2c::kret_396_1ec3: 	goto ret_396_1ec3;
        case m2c::kret_396_1ed8: 	goto ret_396_1ed8;
        case m2c::kret_396_2683: 	goto ret_396_2683;
        case m2c::kret_396_26fe: 	goto ret_396_26fe;
        case m2c::kret_396_2812: 	goto ret_396_2812;
        case m2c::kret_396_29f0: 	goto ret_396_29f0;
        case m2c::kret_396_310c: 	goto ret_396_310c;
        case m2c::kret_396_3332: 	goto ret_396_3332;
        case m2c::kret_396_33fd: 	goto ret_396_33fd;
        case m2c::kret_396_3636: 	goto ret_396_3636;
        case m2c::kret_396_373e: 	goto ret_396_373e;
        case m2c::kret_396_379d: 	goto ret_396_379d;
        case m2c::kret_396_3b2e: 	goto ret_396_3b2e;
        case m2c::kret_396_3f8f: 	goto ret_396_3f8f;
        case m2c::kret_396_59ac: 	goto ret_396_59ac;
        case m2c::kret_396_70: 	goto ret_396_70;
        case m2c::kret_396_a96: 	goto ret_396_a96;
        case m2c::kseg001_proc: 	goto seg001_proc;
        case m2c::ksub_11f4e: 	goto sub_11f4e;
        case m2c::ksub_11f7e: 	goto sub_11f7e;
        case m2c::ksub_12e8e: 	goto sub_12e8e;
        case m2c::ksub_13214: 	goto sub_13214;
        case m2c::ksub_137f0: 	goto sub_137f0;
        case m2c::ksub_13a16: 	goto sub_13a16;
        case m2c::ksub_13b22: 	goto sub_13b22;
        case m2c::ksub_13b74: 	goto sub_13b74;
        case m2c::ksub_13b88: 	goto sub_13b88;
        case m2c::ksub_13b96: 	goto sub_13b96;
        case m2c::ksub_13ba4: 	goto sub_13ba4;
        case m2c::ksub_13bb2: 	goto sub_13bb2;
        case m2c::ksub_13bc0: 	goto sub_13bc0;
        case m2c::ksub_13bce: 	goto sub_13bce;
        case m2c::ksub_13bdc: 	goto sub_13bdc;
        case m2c::ksub_13c30: 	goto sub_13c30;
        case m2c::ksub_13d88: 	goto sub_13d88;
        case m2c::ksub_13dda: 	goto sub_13dda;
        case m2c::ksub_13e02: 	goto sub_13e02;
        case m2c::ksub_1456a: 	goto sub_1456a;
        case m2c::ksub_145c2: 	goto sub_145c2;
        case m2c::ksub_14676: 	goto sub_14676;
        case m2c::ksub_147ee: 	goto sub_147ee;
        case m2c::ksub_14b06: 	goto sub_14b06;
        case m2c::ksub_14da6: 	goto sub_14da6;
        case m2c::ksub_14e4e: 	goto sub_14e4e;
        case m2c::ksub_152d6: 	goto sub_152d6;
        case m2c::ksub_15338: 	goto sub_15338;
        case m2c::ksub_1561e: 	goto sub_1561e;
        case m2c::ksub_156dc: 	goto sub_156dc;
        case m2c::ksub_15ece: 	goto sub_15ece;
        case m2c::ksub_1600e: 	goto sub_1600e;
        case m2c::ksub_1664e: 	goto sub_1664e;
        case m2c::ksub_16894: 	goto sub_16894;
        case m2c::ksub_16cbe: 	goto sub_16cbe;
        case m2c::ksub_17122: 	goto sub_17122;
        case m2c::ksub_17304: 	goto sub_17304;
        case m2c::ksub_17530: 	goto sub_17530;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

