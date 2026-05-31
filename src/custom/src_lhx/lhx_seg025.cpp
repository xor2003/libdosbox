/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group23(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group23:
    _begin:
sub_36d7a:
	// 87936 
#undef var_4
#define var_4 -4
	// 87939 var_4           = word ptr -4 ;~ 2879:000A
#undef var_2
#define var_2 -2
	// 87940 var_2           = word ptr -2 ;~ 2879:000A
cs=0x2879;eip=0x00000a; 	X(PUSH(bp));	// 87942 push    bp ;~ 2879:000A
cs=0x2879;eip=0x00000b; 	T(MOV(bp, sp));	// 87943 mov     bp, sp ;~ 2879:000B
cs=0x2879;eip=0x00000d; 	T(SUB(sp, 4));	// 87944 sub     sp, 4 ;~ 2879:000D
cs=0x2879;eip=0x000010; 	T(CMP(*(dw*)((&unk_4a486)), 0));	// 87945 cmp     word ptr unk_4A486, 0 ;~ 2879:0010
cs=0x2879;eip=0x000015; 	R(JNZ(loc_36df3));	// 87946 jnz     short loc_36DF3 ;~ 2879:0015
cs=0x2879;eip=0x000017; 	T(CMP(unk_55211, 0));	// 87947 cmp     byte ptr unk_55211, 0 ;~ 2879:0017
cs=0x2879;eip=0x00001c; 	R(JZ(loc_36df3));	// 87948 jz      short loc_36DF3 ;~ 2879:001C
cs=0x2879;eip=0x00001e; 	T(MOV(bl, unk_55211));	// 87949 mov     bl, byte ptr unk_55211 ;~ 2879:001E
cs=0x2879;eip=0x000022; 	T(SUB(bh, bh));	// 87950 sub     bh, bh ;~ 2879:0022
cs=0x2879;eip=0x000024; 	T(SHL(bx, 1));	// 87951 shl     bx, 1 ;~ 2879:0024
cs=0x2879;eip=0x000026; 	X(PUSH(*(dw*)(raddr(ds,bx+0x2ADA))));	// 87952 push    word ptr [bx+2ADAh] ;~ 2879:0026
cs=0x2879;eip=0x00002a; 	T(ax = bp+var_2);	// 87953 lea     ax, [bp+var_2] ;~ 2879:002A
cs=0x2879;eip=0x00002d; 	X(PUSH(ax));	// 87954 push    ax ;~ 2879:002D
cs=0x2879;eip=0x00002e; 	R(CALLF(sub_31643,0));	// 87955 call    sub_31643 ;~ 2879:002E
cs=0x2879;eip=0x000033; 	X(MOV(*(dw*)((&unk_4a484)), ax));	// 87956 mov     word ptr unk_4A484, ax ;~ 2879:0033
cs=0x2879;eip=0x000036; 	X(MOV(*(dw*)((&unk_4a486)), dx));	// 87957 mov     word ptr unk_4A486, dx ;~ 2879:0036
cs=0x2879;eip=0x00003a; 	T(MOV(ax, dx));	// 87958 mov     ax, dx ;~ 2879:003A
cs=0x2879;eip=0x00003c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 87959 mov     [bp+var_4], ax ;~ 2879:003C
cs=0x2879;eip=0x00003f; 	T(LES(bx, *(dd*)((&unk_4a484))));	// 87960 les     bx, dword ptr unk_4A484 ;~ 2879:003F
cs=0x2879;eip=0x000043; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 87961 mov     ax, es:[bx+2] ;~ 2879:0043
cs=0x2879;eip=0x000047; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 87962 mov     [bp+var_2], ax ;~ 2879:0047
cs=0x2879;eip=0x00004a; 	T(ADD(ax, 0x0F));	// 87963 add     ax, 0Fh ;~ 2879:004A
cs=0x2879;eip=0x00004d; 	T(MOV(cl, 4));	// 87964 mov     cl, 4 ;~ 2879:004D
cs=0x2879;eip=0x00004f; 	T(SHR(ax, cl));	// 87965 shr     ax, cl ;~ 2879:004F
cs=0x2879;eip=0x000051; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 87966 add     ax, [bp+var_4] ;~ 2879:0051
cs=0x2879;eip=0x000054; 	T(MOV(dx, ax));	// 87967 mov     dx, ax ;~ 2879:0054
cs=0x2879;eip=0x000056; 	T(SUB(ax, ax));	// 87968 sub     ax, ax ;~ 2879:0056
cs=0x2879;eip=0x000058; 	X(MOV(*(dw*)((&unk_544e4)), ax));	// 87969 mov     word ptr unk_544E4, ax ;~ 2879:0058
cs=0x2879;eip=0x00005b; 	X(MOV(*(dw*)((&unk_544e6)), dx));	// 87970 mov     word ptr unk_544E6, dx ;~ 2879:005B
cs=0x2879;eip=0x00005f; 	T(MOV(ax, 0x12));	// 87971 mov     ax, 12h ;~ 2879:005F
cs=0x2879;eip=0x000062; 	X(PUSH(ax));	// 87972 push    ax ;~ 2879:0062
cs=0x2879;eip=0x000063; 	R(CALL(sub_36ee7,0));	// 87973 call    sub_36EE7 ;~ 2879:0063
cs=0x2879;eip=0x000066; 	T(ADD(sp, 2));	// 87974 add     sp, 2 ;~ 2879:0066
cs=0x2879;eip=0x000069; 	T(SUB(ax, ax));	// 87975 sub     ax, ax ;~ 2879:0069
cs=0x2879;eip=0x00006b; 	X(MOV(*(dw*)((&unk_544d8)), ax));	// 87976 mov     word ptr unk_544D8, ax ;~ 2879:006B
cs=0x2879;eip=0x00006e; 	X(MOV(*(dw*)((&unk_544dc)), ax));	// 87977 mov     word ptr unk_544DC, ax ;~ 2879:006E
cs=0x2879;eip=0x000071; 	X(MOV(*(dw*)((&unk_544e0)), ax));	// 87978 mov     word ptr unk_544E0, ax ;~ 2879:0071
cs=0x2879;eip=0x000074; 	X(MOV(*(dw*)((&unk_544da)), ax));	// 87979 mov     word ptr unk_544DA, ax ;~ 2879:0074
cs=0x2879;eip=0x000077; 	X(MOV(*(dw*)((&unk_544de)), ax));	// 87980 mov     word ptr unk_544DE, ax ;~ 2879:0077
cs=0x2879;eip=0x00007a; 	X(MOV(*(dw*)((&unk_544e2)), ax));	// 87981 mov     word ptr unk_544E2, ax ;~ 2879:007A
cs=0x2879;eip=0x00007d; 	X(MOV(*(dw*)((&unk_544ea)), ax));	// 87982 mov     word ptr unk_544EA, ax ;~ 2879:007D
cs=0x2879;eip=0x000080; 	X(MOV(*(dw*)((&unk_544e8)), ax));	// 87983 mov     word ptr unk_544E8, ax ;~ 2879:0080
loc_36df3:
	// 10031 
cs=0x2879;eip=0x000083; 	T(MOV(sp, bp));	// 87987 mov     sp, bp ;~ 2879:0083
cs=0x2879;eip=0x000085; 	X(POP(bp));	// 87988 pop     bp ;~ 2879:0085
cs=0x2879;eip=0x000086; 	R(RETF(0));	// 87989 retf ;~ 2879:0086
sub_36df7:
	// 87996 
cs=0x2879;eip=0x000087; 	X(PUSH(cs));	// 87998 push    cs ;~ 2879:0087
cs=0x2879;eip=0x000088; 	R(CALL(sub_36e60,0));	// 87999 call    near ptr sub_36E60 ;~ 2879:0088
cs=0x2879;eip=0x00008b; 	T(MOV(ax, 0x0A));	// 88000 mov     ax, 0Ah ;~ 2879:008B
cs=0x2879;eip=0x00008e; 	X(PUSH(ax));	// 88001 push    ax ;~ 2879:008E
cs=0x2879;eip=0x00008f; 	R(CALL(sub_36ee7,0));	// 88002 call    sub_36EE7 ;~ 2879:008F
cs=0x2879;eip=0x000092; 	T(ADD(sp, 2));	// 88003 add     sp, 2 ;~ 2879:0092
cs=0x2879;eip=0x000095; 	T(MOV(ax, 8));	// 88004 mov     ax, 8 ;~ 2879:0095
cs=0x2879;eip=0x000098; 	X(PUSH(ax));	// 88005 push    ax ;~ 2879:0098
cs=0x2879;eip=0x000099; 	R(CALL(sub_36ee7,0));	// 88006 call    sub_36EE7 ;~ 2879:0099
cs=0x2879;eip=0x00009c; 	T(ADD(sp, 2));	// 88007 add     sp, 2 ;~ 2879:009C
cs=0x2879;eip=0x00009f; 	T(MOV(ax, 6));	// 88008 mov     ax, 6 ;~ 2879:009F
cs=0x2879;eip=0x0000a2; 	X(PUSH(ax));	// 88009 push    ax ;~ 2879:00A2
cs=0x2879;eip=0x0000a3; 	R(CALL(sub_36ee7,0));	// 88010 call    sub_36EE7 ;~ 2879:00A3
cs=0x2879;eip=0x0000a6; 	T(ADD(sp, 2));	// 88011 add     sp, 2 ;~ 2879:00A6
cs=0x2879;eip=0x0000a9; 	T(MOV(ax, 6));	// 88012 mov     ax, 6 ;~ 2879:00A9
cs=0x2879;eip=0x0000ac; 	X(PUSH(ax));	// 88013 push    ax ;~ 2879:00AC
cs=0x2879;eip=0x0000ad; 	R(CALL(sub_36ee7,0));	// 88014 call    sub_36EE7 ;~ 2879:00AD
cs=0x2879;eip=0x0000b0; 	T(ADD(sp, 2));	// 88015 add     sp, 2 ;~ 2879:00B0
cs=0x2879;eip=0x0000b3; 	X(PUSH(*(dw*)((&unk_4a486))));	// 88016 push    word ptr unk_4A486 ;~ 2879:00B3
cs=0x2879;eip=0x0000b7; 	R(CALLF(sub_2397c,0));	// 88017 call    sub_2397C ;~ 2879:00B7
cs=0x2879;eip=0x0000bc; 	X(MOV(*(dw*)((&unk_4a486)), 0));	// 88018 mov     word ptr unk_4A486, 0 ;~ 2879:00BC
cs=0x2879;eip=0x0000c2; 	R(RETF(0));	// 88019 retf ;~ 2879:00C2
sub_36e33:
	// 88027 
#undef var_2
#define var_2 -2
	// 88029 var_2           = byte ptr -2 ;~ 2879:00C3
cs=0x2879;eip=0x0000c3; 	X(PUSH(bp));	// 88031 push    bp ;~ 2879:00C3
cs=0x2879;eip=0x0000c4; 	T(MOV(bp, sp));	// 88032 mov     bp, sp ;~ 2879:00C4
cs=0x2879;eip=0x0000c6; 	T(SUB(sp, 2));	// 88033 sub     sp, 2 ;~ 2879:00C6
cs=0x2879;eip=0x0000c9; 	T(CMP(*(dw*)((&unk_4a48a)), 0));	// 88034 cmp     word ptr unk_4A48A, 0 ;~ 2879:00C9
cs=0x2879;eip=0x0000ce; 	R(JNZ(loc_36e5c));	// 88035 jnz     short loc_36E5C ;~ 2879:00CE
cs=0x2879;eip=0x0000d0; 	T(MOV(bl, unk_55211));	// 88036 mov     bl, byte ptr unk_55211 ;~ 2879:00D0
cs=0x2879;eip=0x0000d4; 	T(SUB(bh, bh));	// 88037 sub     bh, bh ;~ 2879:00D4
cs=0x2879;eip=0x0000d6; 	T(SHL(bx, 1));	// 88038 shl     bx, 1 ;~ 2879:00D6
cs=0x2879;eip=0x0000d8; 	X(PUSH(*(dw*)(raddr(ds,bx+0x2B04))));	// 88039 push    word ptr [bx+2B04h] ;~ 2879:00D8
cs=0x2879;eip=0x0000dc; 	T(ax = bp+var_2);	// 88040 lea     ax, [bp+var_2] ;~ 2879:00DC
cs=0x2879;eip=0x0000df; 	X(PUSH(ax));	// 88041 push    ax ;~ 2879:00DF
cs=0x2879;eip=0x0000e0; 	R(CALLF(sub_31643,0));	// 88042 call    sub_31643 ;~ 2879:00E0
cs=0x2879;eip=0x0000e5; 	X(MOV(*(dw*)((&unk_4a488)), ax));	// 88043 mov     word ptr unk_4A488, ax ;~ 2879:00E5
cs=0x2879;eip=0x0000e8; 	X(MOV(*(dw*)((&unk_4a48a)), dx));	// 88044 mov     word ptr unk_4A48A, dx ;~ 2879:00E8
loc_36e5c:
	// 10032 
cs=0x2879;eip=0x0000ec; 	T(MOV(sp, bp));	// 88047 mov     sp, bp ;~ 2879:00EC
cs=0x2879;eip=0x0000ee; 	X(POP(bp));	// 88048 pop     bp ;~ 2879:00EE
cs=0x2879;eip=0x0000ef; 	R(RETF(0));	// 88049 retf ;~ 2879:00EF
sub_36e60:
	// 88056 
cs=0x2879;eip=0x0000f0; 	T(CMP(*(dw*)((&unk_4a48a)), 0));	// 88058 cmp     word ptr unk_4A48A, 0 ;~ 2879:00F0
cs=0x2879;eip=0x0000f5; 	R(JZ(locret_36e88));	// 88059 jz      short locret_36E88 ;~ 2879:00F5
cs=0x2879;eip=0x0000f7; 	X(PUSH(*(dw*)((&unk_4a48a))));	// 88060 push    word ptr unk_4A48A ;~ 2879:00F7
cs=0x2879;eip=0x0000fb; 	X(PUSH(*(dw*)((&unk_4a488))));	// 88061 push    word ptr unk_4A488 ;~ 2879:00FB
cs=0x2879;eip=0x0000ff; 	T(MOV(ax, 0x16));	// 88062 mov     ax, 16h ;~ 2879:00FF
cs=0x2879;eip=0x000102; 	X(PUSH(ax));	// 88063 push    ax ;~ 2879:0102
cs=0x2879;eip=0x000103; 	R(CALL(sub_36ee7,0));	// 88064 call    sub_36EE7 ;~ 2879:0103
cs=0x2879;eip=0x000106; 	T(ADD(sp, 6));	// 88065 add     sp, 6 ;~ 2879:0106
cs=0x2879;eip=0x000109; 	X(PUSH(*(dw*)((&unk_4a48a))));	// 88066 push    word ptr unk_4A48A ;~ 2879:0109
cs=0x2879;eip=0x00010d; 	R(CALLF(sub_2397c,0));	// 88067 call    sub_2397C ;~ 2879:010D
cs=0x2879;eip=0x000112; 	X(MOV(*(dw*)((&unk_4a48a)), 0));	// 88068 mov     word ptr unk_4A48A, 0 ;~ 2879:0112
locret_36e88:
	// 10033 
cs=0x2879;eip=0x000118; 	R(RETF(0));	// 88071 retf ;~ 2879:0118
sub_36e89:
	// 88078 
cs=0x2879;eip=0x000119; 	X(PUSH(*(dw*)((&unk_4a48a))));	// 88079 push    word ptr unk_4A48A ;~ 2879:0119
cs=0x2879;eip=0x00011d; 	X(PUSH(*(dw*)((&unk_4a488))));	// 88080 push    word ptr unk_4A488 ;~ 2879:011D
cs=0x2879;eip=0x000121; 	T(MOV(ax, 0x14));	// 88081 mov     ax, 14h ;~ 2879:0121
cs=0x2879;eip=0x000124; 	X(PUSH(ax));	// 88082 push    ax ;~ 2879:0124
cs=0x2879;eip=0x000125; 	R(CALL(sub_36f0c,0));	// 88083 call    sub_36F0C ;~ 2879:0125
cs=0x2879;eip=0x000128; 	T(ADD(sp, 6));	// 88084 add     sp, 6 ;~ 2879:0128
cs=0x2879;eip=0x00012b; 	R(RETF(0));	// 88085 retf ;~ 2879:012B
sub_36e9c:
	// 88092 
cs=0x2879;eip=0x00012c; 	T(TEST(unk_55212, 1));	// 88093 test    byte ptr unk_55212, 1 ;~ 2879:012C
cs=0x2879;eip=0x000131; 	R(JZ(loc_36ea8));	// 88094 jz      short loc_36EA8 ;~ 2879:0131
cs=0x2879;eip=0x000133; 	T(MOV(ax, 0x0C));	// 88095 mov     ax, 0Ch ;~ 2879:0133
cs=0x2879;eip=0x000136; 	R(JMP(loc_36eb5));	// 88096 jmp     short loc_36EB5 ;~ 2879:0136
loc_36ea8:
	// 10034 
cs=0x2879;eip=0x000138; 	T(MOV(ax, 8));	// 88100 mov     ax, 8 ;~ 2879:0138
cs=0x2879;eip=0x00013b; 	X(PUSH(ax));	// 88101 push    ax ;~ 2879:013B
cs=0x2879;eip=0x00013c; 	R(CALL(sub_36ee7,0));	// 88102 call    sub_36EE7 ;~ 2879:013C
cs=0x2879;eip=0x00013f; 	T(ADD(sp, 2));	// 88103 add     sp, 2 ;~ 2879:013F
cs=0x2879;eip=0x000142; 	T(MOV(ax, 0x0A));	// 88104 mov     ax, 0Ah ;~ 2879:0142
loc_36eb5:
	// 10035 
cs=0x2879;eip=0x000145; 	X(PUSH(ax));	// 88107 push    ax ;~ 2879:0145
cs=0x2879;eip=0x000146; 	R(CALL(sub_36ee7,0));	// 88108 call    sub_36EE7 ;~ 2879:0146
cs=0x2879;eip=0x000149; 	T(ADD(sp, 2));	// 88109 add     sp, 2 ;~ 2879:0149
cs=0x2879;eip=0x00014c; 	R(RETF(0));	// 88110 retf ;~ 2879:014C
sub_36ebd:
	// 88117 
cs=0x2879;eip=0x00014d; 	T(MOV(ax, 0x0A));	// 88119 mov     ax, 0Ah ;~ 2879:014D
cs=0x2879;eip=0x000150; 	X(PUSH(ax));	// 88120 push    ax ;~ 2879:0150
cs=0x2879;eip=0x000151; 	R(CALL(sub_36ee7,0));	// 88121 call    sub_36EE7 ;~ 2879:0151
cs=0x2879;eip=0x000154; 	T(ADD(sp, 2));	// 88122 add     sp, 2 ;~ 2879:0154
cs=0x2879;eip=0x000157; 	T(MOV(ax, 6));	// 88123 mov     ax, 6 ;~ 2879:0157
cs=0x2879;eip=0x00015a; 	X(PUSH(ax));	// 88124 push    ax ;~ 2879:015A
cs=0x2879;eip=0x00015b; 	R(CALL(sub_36ee7,0));	// 88125 call    sub_36EE7 ;~ 2879:015B
cs=0x2879;eip=0x00015e; 	T(ADD(sp, 2));	// 88126 add     sp, 2 ;~ 2879:015E
cs=0x2879;eip=0x000161; 	R(RETF(0));	// 88127 retf ;~ 2879:0161
sub_36ed2:
	// 88134 
cs=0x2879;eip=0x000162; 	T(MOV(ax, 0x0C));	// 88136 mov     ax, 0Ch ;~ 2879:0162
cs=0x2879;eip=0x000165; 	X(PUSH(ax));	// 88137 push    ax ;~ 2879:0165
cs=0x2879;eip=0x000166; 	R(CALL(sub_36ee7,0));	// 88138 call    sub_36EE7 ;~ 2879:0166
cs=0x2879;eip=0x000169; 	T(ADD(sp, 2));	// 88139 add     sp, 2 ;~ 2879:0169
cs=0x2879;eip=0x00016c; 	T(MOV(ax, 6));	// 88140 mov     ax, 6 ;~ 2879:016C
cs=0x2879;eip=0x00016f; 	X(PUSH(ax));	// 88141 push    ax ;~ 2879:016F
cs=0x2879;eip=0x000170; 	R(CALL(sub_36ee7,0));	// 88142 call    sub_36EE7 ;~ 2879:0170
cs=0x2879;eip=0x000173; 	T(ADD(sp, 2));	// 88143 add     sp, 2 ;~ 2879:0173
cs=0x2879;eip=0x000176; 	R(RETF(0));	// 88144 retf ;~ 2879:0176
sub_36ee7:
	// 88152 
#undef arg_0
#define arg_0 4
	// 88155 arg_0           = word ptr  4 ;~ 2879:0177
#undef arg_2
#define arg_2 6
	// 88156 arg_2           = word ptr  6 ;~ 2879:0177
#undef arg_4
#define arg_4 8
	// 88157 arg_4           = word ptr  8 ;~ 2879:0177
cs=0x2879;eip=0x000177; 	X(PUSH(bp));	// 88159 push    bp ;~ 2879:0177
cs=0x2879;eip=0x000178; 	T(MOV(bp, sp));	// 88160 mov     bp, sp ;~ 2879:0178
cs=0x2879;eip=0x00017a; 	T(CMP(*(dw*)((&unk_4a486)), 0));	// 88161 cmp     word ptr unk_4A486, 0 ;~ 2879:017A
cs=0x2879;eip=0x00017f; 	R(JZ(loc_36f0a));	// 88162 jz      short loc_36F0A ;~ 2879:017F
cs=0x2879;eip=0x000181; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 88163 push    [bp+arg_4] ;~ 2879:0181
cs=0x2879;eip=0x000184; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 88164 push    [bp+arg_2] ;~ 2879:0184
cs=0x2879;eip=0x000187; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 88165 push    [bp+arg_0] ;~ 2879:0187
cs=0x2879;eip=0x00018a; 	X(PUSH(*(dw*)((&unk_544e6))));	// 88166 push    word ptr unk_544E6 ;~ 2879:018A
cs=0x2879;eip=0x00018e; 	X(PUSH(*(dw*)((&unk_544e4))));	// 88167 push    word ptr unk_544E4 ;~ 2879:018E
cs=0x2879;eip=0x000192; 	R(CALLF(sub_2f484,0));	// 88168 call    sub_2F484 ;~ 2879:0192
cs=0x2879;eip=0x000197; 	T(ADD(sp, 0x0A));	// 88169 add     sp, 0Ah ;~ 2879:0197
loc_36f0a:
	// 10036 
cs=0x2879;eip=0x00019a; 	X(POP(bp));	// 88172 pop     bp ;~ 2879:019A
cs=0x2879;eip=0x00019b; 	R(RETN(0));	// 88173 retn ;~ 2879:019B
sub_36f0c:
	// 88181 
#undef arg_0
#define arg_0 4
	// 88184 arg_0           = word ptr  4 ;~ 2879:019C
#undef arg_2
#define arg_2 6
	// 88185 arg_2           = word ptr  6 ;~ 2879:019C
#undef arg_4
#define arg_4 8
	// 88186 arg_4           = word ptr  8 ;~ 2879:019C
cs=0x2879;eip=0x00019c; 	X(PUSH(bp));	// 88188 push    bp ;~ 2879:019C
cs=0x2879;eip=0x00019d; 	T(MOV(bp, sp));	// 88189 mov     bp, sp ;~ 2879:019D
cs=0x2879;eip=0x00019f; 	T(TEST(unk_55212, 1));	// 88190 test    byte ptr unk_55212, 1 ;~ 2879:019F
cs=0x2879;eip=0x0001a4; 	R(JZ(loc_36f36));	// 88191 jz      short loc_36F36 ;~ 2879:01A4
cs=0x2879;eip=0x0001a6; 	T(CMP(*(dw*)((&unk_4a486)), 0));	// 88192 cmp     word ptr unk_4A486, 0 ;~ 2879:01A6
cs=0x2879;eip=0x0001ab; 	R(JZ(loc_36f36));	// 88193 jz      short loc_36F36 ;~ 2879:01AB
cs=0x2879;eip=0x0001ad; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 88194 push    [bp+arg_4] ;~ 2879:01AD
cs=0x2879;eip=0x0001b0; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 88195 push    [bp+arg_2] ;~ 2879:01B0
cs=0x2879;eip=0x0001b3; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 88196 push    [bp+arg_0] ;~ 2879:01B3
cs=0x2879;eip=0x0001b6; 	X(PUSH(*(dw*)((&unk_544e6))));	// 88197 push    word ptr unk_544E6 ;~ 2879:01B6
cs=0x2879;eip=0x0001ba; 	X(PUSH(*(dw*)((&unk_544e4))));	// 88198 push    word ptr unk_544E4 ;~ 2879:01BA
cs=0x2879;eip=0x0001be; 	R(CALLF(sub_2f484,0));	// 88199 call    sub_2F484 ;~ 2879:01BE
cs=0x2879;eip=0x0001c3; 	T(ADD(sp, 0x0A));	// 88200 add     sp, 0Ah ;~ 2879:01C3
loc_36f36:
	// 10037 
cs=0x2879;eip=0x0001c6; 	X(POP(bp));	// 88204 pop     bp ;~ 2879:01C6
cs=0x2879;eip=0x0001c7; 	R(RETN(0));	// 88205 retn ;~ 2879:01C7
sub_36f38:
	// 88212 
cs=0x2879;eip=0x0001c8; 	T(MOV(ax, 6));	// 88213 mov     ax, 6 ;~ 2879:01C8
cs=0x2879;eip=0x0001cb; 	X(PUSH(ax));	// 88214 push    ax ;~ 2879:01CB
cs=0x2879;eip=0x0001cc; 	R(CALL(sub_36f0c,0));	// 88215 call    sub_36F0C ;~ 2879:01CC
cs=0x2879;eip=0x0001cf; 	T(ADD(sp, 2));	// 88216 add     sp, 2 ;~ 2879:01CF
cs=0x2879;eip=0x0001d2; 	R(RETF(0));	// 88217 retf ;~ 2879:01D2
sub_36f43:
	// 88224 
cs=0x2879;eip=0x0001d3; 	T(MOV(ax, 0x0E));	// 88225 mov     ax, 0Eh ;~ 2879:01D3
cs=0x2879;eip=0x0001d6; 	X(PUSH(ax));	// 88226 push    ax ;~ 2879:01D6
cs=0x2879;eip=0x0001d7; 	T(SUB(ax, ax));	// 88227 sub     ax, ax ;~ 2879:01D7
cs=0x2879;eip=0x0001d9; 	X(PUSH(ax));	// 88228 push    ax ;~ 2879:01D9
cs=0x2879;eip=0x0001da; 	R(CALL(sub_36f0c,0));	// 88229 call    sub_36F0C ;~ 2879:01DA
cs=0x2879;eip=0x0001dd; 	T(ADD(sp, 4));	// 88230 add     sp, 4 ;~ 2879:01DD
cs=0x2879;eip=0x0001e0; 	R(RETF(0));	// 88231 retf ;~ 2879:01E0
sub_36f51:
	// 88238 
cs=0x2879;eip=0x0001e1; 	T(MOV(ax, 7));	// 88240 mov     ax, 7 ;~ 2879:01E1
cs=0x2879;eip=0x0001e4; 	X(PUSH(ax));	// 88241 push    ax ;~ 2879:01E4
cs=0x2879;eip=0x0001e5; 	T(SUB(ax, ax));	// 88242 sub     ax, ax ;~ 2879:01E5
cs=0x2879;eip=0x0001e7; 	X(PUSH(ax));	// 88243 push    ax ;~ 2879:01E7
cs=0x2879;eip=0x0001e8; 	R(CALL(sub_36f0c,0));	// 88244 call    sub_36F0C ;~ 2879:01E8
cs=0x2879;eip=0x0001eb; 	T(ADD(sp, 4));	// 88245 add     sp, 4 ;~ 2879:01EB
cs=0x2879;eip=0x0001ee; 	X(MOV(*(dw*)((&unk_544da)), 0x0FFFF));	// 88246 mov     word ptr unk_544DA, 0FFFFh ;~ 2879:01EE
cs=0x2879;eip=0x0001f4; 	T(MOV(ax, word_5705a));	// 88247 mov     ax, word_5705A ;~ 2879:01F4
cs=0x2879;eip=0x0001f7; 	T(MOV(dx, word_5705c));	// 88248 mov     dx, word_5705C ;~ 2879:01F7
cs=0x2879;eip=0x0001fb; 	T(ADD(ax, 0x100));	// 88249 add     ax, 100h ;~ 2879:01FB
cs=0x2879;eip=0x0001fe; 	T(ADC(dx, 0));	// 88250 adc     dx, 0 ;~ 2879:01FE
cs=0x2879;eip=0x000201; 	X(MOV(*(dw*)((&unk_544e8)), ax));	// 88251 mov     word ptr unk_544E8, ax ;~ 2879:0201
cs=0x2879;eip=0x000204; 	X(MOV(*(dw*)((&unk_544ea)), dx));	// 88252 mov     word ptr unk_544EA, dx ;~ 2879:0204
cs=0x2879;eip=0x000208; 	R(RETF(0));	// 88253 retf ;~ 2879:0208
sub_36f79:
	// 88260 
cs=0x2879;eip=0x000209; 	T(MOV(ax, 1));	// 88262 mov     ax, 1 ;~ 2879:0209
cs=0x2879;eip=0x00020c; 	X(PUSH(ax));	// 88263 push    ax ;~ 2879:020C
cs=0x2879;eip=0x00020d; 	T(SUB(ax, ax));	// 88264 sub     ax, ax ;~ 2879:020D
cs=0x2879;eip=0x00020f; 	X(PUSH(ax));	// 88265 push    ax ;~ 2879:020F
cs=0x2879;eip=0x000210; 	R(CALL(sub_36f0c,0));	// 88266 call    sub_36F0C ;~ 2879:0210
cs=0x2879;eip=0x000213; 	T(ADD(sp, 4));	// 88267 add     sp, 4 ;~ 2879:0213
cs=0x2879;eip=0x000216; 	R(RETF(0));	// 88268 retf ;~ 2879:0216
sub_36f87:
	// 88275 
cs=0x2879;eip=0x000217; 	T(MOV(ax, 2));	// 88276 mov     ax, 2 ;~ 2879:0217
cs=0x2879;eip=0x00021a; 	X(PUSH(ax));	// 88277 push    ax ;~ 2879:021A
cs=0x2879;eip=0x00021b; 	T(SUB(ax, ax));	// 88278 sub     ax, ax ;~ 2879:021B
cs=0x2879;eip=0x00021d; 	X(PUSH(ax));	// 88279 push    ax ;~ 2879:021D
cs=0x2879;eip=0x00021e; 	R(CALL(sub_36f0c,0));	// 88280 call    sub_36F0C ;~ 2879:021E
cs=0x2879;eip=0x000221; 	T(ADD(sp, 4));	// 88281 add     sp, 4 ;~ 2879:0221
cs=0x2879;eip=0x000224; 	R(RETF(0));	// 88282 retf ;~ 2879:0224
sub_36f95:
	// 88290 
#undef arg_0
#define arg_0 6
	// 88293 arg_0           = word ptr  6 ;~ 2879:0225
cs=0x2879;eip=0x000225; 	X(PUSH(bp));	// 88295 push    bp ;~ 2879:0225
cs=0x2879;eip=0x000226; 	T(MOV(bp, sp));	// 88296 mov     bp, sp ;~ 2879:0226
cs=0x2879;eip=0x000228; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x136C));	// 88297 cmp     [bp+arg_0], 136Ch ;~ 2879:0228
cs=0x2879;eip=0x00022d; 	R(JZ(loc_36fa6));	// 88298 jz      short loc_36FA6 ;~ 2879:022D
cs=0x2879;eip=0x00022f; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x1398));	// 88299 cmp     [bp+arg_0], 1398h ;~ 2879:022F
cs=0x2879;eip=0x000234; 	R(JNZ(loc_36fb9));	// 88300 jnz     short loc_36FB9 ;~ 2879:0234
loc_36fa6:
	// 10038 
cs=0x2879;eip=0x000236; 	T(MOV(ax, 3));	// 88303 mov     ax, 3 ;~ 2879:0236
cs=0x2879;eip=0x000239; 	X(PUSH(ax));	// 88304 push    ax ;~ 2879:0239
cs=0x2879;eip=0x00023a; 	T(MOV(ax, 0x0F));	// 88305 mov     ax, 0Fh ;~ 2879:023A
loc_36fad:
	// 10039 
cs=0x2879;eip=0x00023d; 	X(PUSH(ax));	// 88308 push    ax ;~ 2879:023D
cs=0x2879;eip=0x00023e; 	T(SUB(ax, ax));	// 88309 sub     ax, ax ;~ 2879:023E
cs=0x2879;eip=0x000240; 	X(PUSH(ax));	// 88310 push    ax ;~ 2879:0240
cs=0x2879;eip=0x000241; 	R(CALL(sub_36f0c,0));	// 88311 call    sub_36F0C ;~ 2879:0241
cs=0x2879;eip=0x000244; 	T(ADD(sp, 6));	// 88312 add     sp, 6 ;~ 2879:0244
cs=0x2879;eip=0x000247; 	R(JMP(loc_36fd9));	// 88313 jmp     short loc_36FD9 ;~ 2879:0247
loc_36fb9:
	// 10040 
cs=0x2879;eip=0x000249; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 88317 mov     bx, [bp+arg_0] ;~ 2879:0249
cs=0x2879;eip=0x00024c; 	T(CMP(*(dw*)(raddr(ds,bx+0x16)), 0x6E48));	// 88318 cmp     word ptr [bx+16h], 6E48h ;~ 2879:024C
cs=0x2879;eip=0x000251; 	R(JNZ(loc_36fcc));	// 88319 jnz     short loc_36FCC ;~ 2879:0251
cs=0x2879;eip=0x000253; 	T(MOV(ax, 3));	// 88320 mov     ax, 3 ;~ 2879:0253
cs=0x2879;eip=0x000256; 	X(PUSH(ax));	// 88321 push    ax ;~ 2879:0256
cs=0x2879;eip=0x000257; 	T(MOV(ax, 8));	// 88322 mov     ax, 8 ;~ 2879:0257
cs=0x2879;eip=0x00025a; 	R(JMP(loc_36fad));	// 88323 jmp     short loc_36FAD ;~ 2879:025A
loc_36fcc:
	// 10041 
cs=0x2879;eip=0x00025c; 	T(MOV(ax, 9));	// 88327 mov     ax, 9 ;~ 2879:025C
cs=0x2879;eip=0x00025f; 	X(PUSH(ax));	// 88328 push    ax ;~ 2879:025F
cs=0x2879;eip=0x000260; 	T(SUB(ax, ax));	// 88329 sub     ax, ax ;~ 2879:0260
cs=0x2879;eip=0x000262; 	X(PUSH(ax));	// 88330 push    ax ;~ 2879:0262
cs=0x2879;eip=0x000263; 	R(CALL(sub_36f0c,0));	// 88331 call    sub_36F0C ;~ 2879:0263
cs=0x2879;eip=0x000266; 	T(ADD(sp, 4));	// 88332 add     sp, 4 ;~ 2879:0266
loc_36fd9:
	// 10042 
cs=0x2879;eip=0x000269; 	X(POP(bp));	// 88335 pop     bp ;~ 2879:0269
cs=0x2879;eip=0x00026a; 	R(RETF(0));	// 88336 retf ;~ 2879:026A
sub_36fdb:
	// 88344 
#undef arg_0
#define arg_0 6
	// 88346 arg_0           = word ptr  6 ;~ 2879:026B
#undef arg_2
#define arg_2 8
	// 88347 arg_2           = word ptr  8 ;~ 2879:026B
cs=0x2879;eip=0x00026b; 	X(PUSH(bp));	// 88349 push    bp ;~ 2879:026B
cs=0x2879;eip=0x00026c; 	T(MOV(bp, sp));	// 88350 mov     bp, sp ;~ 2879:026C
cs=0x2879;eip=0x00026e; 	T(MOV(ax, *(dw*)((&unk_47ace))));	// 88351 mov     ax, word ptr unk_47ACE ;~ 2879:026E
cs=0x2879;eip=0x000271; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 88352 cmp     [bp+arg_0], ax ;~ 2879:0271
cs=0x2879;eip=0x000274; 	R(JNZ(loc_36ffe));	// 88353 jnz     short loc_36FFE ;~ 2879:0274
cs=0x2879;eip=0x000276; 	T(CMP(*(dw*)((&unk_564ee)), 7));	// 88354 cmp     word ptr unk_564EE, 7 ;~ 2879:0276
cs=0x2879;eip=0x00027b; 	R(JZ(loc_36ff4));	// 88355 jz      short loc_36FF4 ;~ 2879:027B
cs=0x2879;eip=0x00027d; 	T(CMP(*(dw*)((&unk_564ee)), 8));	// 88356 cmp     word ptr unk_564EE, 8 ;~ 2879:027D
cs=0x2879;eip=0x000282; 	R(JNZ(loc_36ffe));	// 88357 jnz     short loc_36FFE ;~ 2879:0282
loc_36ff4:
	// 10043 
cs=0x2879;eip=0x000284; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 88360 push    [bp+arg_2] ;~ 2879:0284
cs=0x2879;eip=0x000287; 	X(PUSH(cs));	// 88361 push    cs ;~ 2879:0287
cs=0x2879;eip=0x000288; 	R(CALL(sub_36f95,0));	// 88362 call    near ptr sub_36F95 ;~ 2879:0288
cs=0x2879;eip=0x00028b; 	T(ADD(sp, 2));	// 88363 add     sp, 2 ;~ 2879:028B
loc_36ffe:
	// 10044 
cs=0x2879;eip=0x00028e; 	X(POP(bp));	// 88367 pop     bp ;~ 2879:028E
cs=0x2879;eip=0x00028f; 	R(RETF(0));	// 88368 retf ;~ 2879:028F
sub_37000:
	// 88375 
cs=0x2879;eip=0x000290; 	T(MOV(ax, 0x13));	// 88377 mov     ax, 13h ;~ 2879:0290
cs=0x2879;eip=0x000293; 	X(PUSH(ax));	// 88378 push    ax ;~ 2879:0293
cs=0x2879;eip=0x000294; 	T(SUB(ax, ax));	// 88379 sub     ax, ax ;~ 2879:0294
cs=0x2879;eip=0x000296; 	X(PUSH(ax));	// 88380 push    ax ;~ 2879:0296
cs=0x2879;eip=0x000297; 	R(CALL(sub_36f0c,0));	// 88381 call    sub_36F0C ;~ 2879:0297
cs=0x2879;eip=0x00029a; 	T(ADD(sp, 4));	// 88382 add     sp, 4 ;~ 2879:029A
cs=0x2879;eip=0x00029d; 	R(RETF(0));	// 88383 retf ;~ 2879:029D
sub_3700e:
	// 88390 
cs=0x2879;eip=0x00029e; 	T(MOV(ax, 9));	// 88392 mov     ax, 9 ;~ 2879:029E
cs=0x2879;eip=0x0002a1; 	X(PUSH(ax));	// 88393 push    ax ;~ 2879:02A1
cs=0x2879;eip=0x0002a2; 	T(SUB(ax, ax));	// 88394 sub     ax, ax ;~ 2879:02A2
cs=0x2879;eip=0x0002a4; 	X(PUSH(ax));	// 88395 push    ax ;~ 2879:02A4
cs=0x2879;eip=0x0002a5; 	R(CALL(sub_36f0c,0));	// 88396 call    sub_36F0C ;~ 2879:02A5
cs=0x2879;eip=0x0002a8; 	T(ADD(sp, 4));	// 88397 add     sp, 4 ;~ 2879:02A8
cs=0x2879;eip=0x0002ab; 	R(RETF(0));	// 88398 retf ;~ 2879:02AB
sub_3701c:
	// 88405 
cs=0x2879;eip=0x0002ac; 	T(MOV(ax, 0x0A));	// 88407 mov     ax, 0Ah ;~ 2879:02AC
cs=0x2879;eip=0x0002af; 	X(PUSH(ax));	// 88408 push    ax ;~ 2879:02AF
cs=0x2879;eip=0x0002b0; 	T(SUB(ax, ax));	// 88409 sub     ax, ax ;~ 2879:02B0
cs=0x2879;eip=0x0002b2; 	X(PUSH(ax));	// 88410 push    ax ;~ 2879:02B2
cs=0x2879;eip=0x0002b3; 	R(CALL(sub_36f0c,0));	// 88411 call    sub_36F0C ;~ 2879:02B3
cs=0x2879;eip=0x0002b6; 	T(ADD(sp, 4));	// 88412 add     sp, 4 ;~ 2879:02B6
cs=0x2879;eip=0x0002b9; 	R(RETF(0));	// 88413 retf ;~ 2879:02B9
sub_3702a:
	// 88421 
#undef arg_0
#define arg_0 6
	// 88423 arg_0           = dword ptr  6 ;~ 2879:02BA
#undef arg_4
#define arg_4 0x0A
	// 88424 arg_4           = byte ptr  0Ah ;~ 2879:02BA
cs=0x2879;eip=0x0002ba; 	X(PUSH(bp));	// 88426 push    bp ;~ 2879:02BA
cs=0x2879;eip=0x0002bb; 	T(MOV(bp, sp));	// 88427 mov     bp, sp ;~ 2879:02BB
cs=0x2879;eip=0x0002bd; 	T(CMP(byte_55209, 0));	// 88428 cmp     byte_55209, 0 ;~ 2879:02BD
cs=0x2879;eip=0x0002c2; 	R(JNZ(loc_3707d));	// 88429 jnz     short loc_3707D ;~ 2879:02C2
cs=0x2879;eip=0x0002c4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 88430 les     bx, [bp+arg_0] ;~ 2879:02C4
cs=0x2879;eip=0x0002c7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 88431 mov     ax, es:[bx+0Ah] ;~ 2879:02C7
cs=0x2879;eip=0x0002cb; 	T(SUB(ax, *(dw*)((&unk_564fc))));	// 88432 sub     ax, word ptr unk_564FC ;~ 2879:02CB
cs=0x2879;eip=0x0002cf; 	T(CWD);	// 88433 cwd ;~ 2879:02CF
cs=0x2879;eip=0x0002d0; 	T(XOR(ax, dx));	// 88434 xor     ax, dx ;~ 2879:02D0
cs=0x2879;eip=0x0002d2; 	T(SUB(ax, dx));	// 88435 sub     ax, dx ;~ 2879:02D2
cs=0x2879;eip=0x0002d4; 	T(MOV(cx, ax));	// 88436 mov     cx, ax ;~ 2879:02D4
cs=0x2879;eip=0x0002d6; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 88437 mov     ax, es:[bx+6] ;~ 2879:02D6
cs=0x2879;eip=0x0002da; 	T(SUB(ax, *(dw*)((&unk_564f8))));	// 88438 sub     ax, word ptr unk_564F8 ;~ 2879:02DA
cs=0x2879;eip=0x0002de; 	T(CWD);	// 88439 cwd ;~ 2879:02DE
cs=0x2879;eip=0x0002df; 	T(XOR(ax, dx));	// 88440 xor     ax, dx ;~ 2879:02DF
cs=0x2879;eip=0x0002e1; 	T(SUB(ax, dx));	// 88441 sub     ax, dx ;~ 2879:02E1
cs=0x2879;eip=0x0002e3; 	T(MOV(dx, ax));	// 88442 mov     dx, ax ;~ 2879:02E3
cs=0x2879;eip=0x0002e5; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 88443 mov     ax, es:[bx+2] ;~ 2879:02E5
cs=0x2879;eip=0x0002e9; 	T(SUB(ax, *(dw*)((&unk_564f4))));	// 88444 sub     ax, word ptr unk_564F4 ;~ 2879:02E9
cs=0x2879;eip=0x0002ed; 	T(MOV(bx, dx));	// 88445 mov     bx, dx ;~ 2879:02ED
cs=0x2879;eip=0x0002ef; 	T(CWD);	// 88446 cwd ;~ 2879:02EF
cs=0x2879;eip=0x0002f0; 	T(XOR(ax, dx));	// 88447 xor     ax, dx ;~ 2879:02F0
cs=0x2879;eip=0x0002f2; 	T(SUB(ax, dx));	// 88448 sub     ax, dx ;~ 2879:02F2
cs=0x2879;eip=0x0002f4; 	T(ADD(ax, bx));	// 88449 add     ax, bx ;~ 2879:02F4
cs=0x2879;eip=0x0002f6; 	T(ADD(ax, cx));	// 88450 add     ax, cx ;~ 2879:02F6
cs=0x2879;eip=0x0002f8; 	T(CMP(ax, 4));	// 88451 cmp     ax, 4 ;~ 2879:02F8
cs=0x2879;eip=0x0002fb; 	R(JGE(loc_3707d));	// 88452 jge     short loc_3707D ;~ 2879:02FB
cs=0x2879;eip=0x0002fd; 	T(CMP(*(raddr(ss,bp+arg_4)), 0));	// 88453 cmp     [bp+arg_4], 0 ;~ 2879:02FD
cs=0x2879;eip=0x000301; 	R(JZ(loc_37079));	// 88454 jz      short loc_37079 ;~ 2879:0301
cs=0x2879;eip=0x000303; 	X(PUSH(cs));	// 88455 push    cs ;~ 2879:0303
cs=0x2879;eip=0x000304; 	R(CALL(sub_3700e,0));	// 88456 call    near ptr sub_3700E ;~ 2879:0304
cs=0x2879;eip=0x000307; 	R(JMP(loc_3707d));	// 88457 jmp     short loc_3707D ;~ 2879:0307
loc_37079:
	// 10045 
cs=0x2879;eip=0x000309; 	X(PUSH(cs));	// 88461 push    cs ;~ 2879:0309
cs=0x2879;eip=0x00030a; 	R(CALL(sub_37000,0));	// 88462 call    near ptr sub_37000 ;~ 2879:030A
loc_3707d:
	// 10046 
cs=0x2879;eip=0x00030d; 	X(POP(bp));	// 88466 pop     bp ;~ 2879:030D
cs=0x2879;eip=0x00030e; 	R(RETF(0));	// 88467 retf ;~ 2879:030E
nullsub_14:
	// 88474 
cs=0x2879;eip=0x00030f; 	R(RETF(0));	// 88476 retf ;~ 2879:030F
sub_37080:
	// 88484 
#undef var_16
#define var_16 -0x16
	// 88486 var_16          = word ptr -16h ;~ 2879:0310
#undef var_14
#define var_14 -0x14
	// 88487 var_14          = dword ptr -14h ;~ 2879:0310
#undef var_10
#define var_10 -0x10
	// 88488 var_10          = word ptr -10h ;~ 2879:0310
#undef var_e
#define var_e -0x0E
	// 88489 var_E           = word ptr -0Eh ;~ 2879:0310
#undef var_c
#define var_c -0x0C
	// 88490 var_C           = word ptr -0Ch ;~ 2879:0310
#undef var_a
#define var_a -0x0A
	// 88491 var_A           = word ptr -0Ah ;~ 2879:0310
#undef var_8
#define var_8 -8
	// 88492 var_8           = word ptr -8 ;~ 2879:0310
#undef var_6
#define var_6 -6
	// 88493 var_6           = word ptr -6 ;~ 2879:0310
#undef var_4
#define var_4 -4
	// 88494 var_4           = dword ptr -4 ;~ 2879:0310
cs=0x2879;eip=0x000310; 	X(PUSH(bp));	// 88496 push    bp ;~ 2879:0310
cs=0x2879;eip=0x000311; 	T(MOV(bp, sp));	// 88497 mov     bp, sp ;~ 2879:0311
cs=0x2879;eip=0x000313; 	T(SUB(sp, 0x16));	// 88498 sub     sp, 16h ;~ 2879:0313
cs=0x2879;eip=0x000316; 	X(PUSH(si));	// 88499 push    si ;~ 2879:0316
cs=0x2879;eip=0x000317; 	T(CMP(*(dw*)((&unk_4a486)), 0));	// 88500 cmp     word ptr unk_4A486, 0 ;~ 2879:0317
cs=0x2879;eip=0x00031c; 	R(JNZ(loc_37091));	// 88501 jnz     short loc_37091 ;~ 2879:031C
cs=0x2879;eip=0x00031e; 	R(JMP(loc_374e0));	// 88502 jmp     loc_374E0 ;~ 2879:031E
loc_37091:
	// 10047 
cs=0x2879;eip=0x000321; 	T(TEST(unk_55212, 1));	// 88506 test    byte ptr unk_55212, 1 ;~ 2879:0321
cs=0x2879;eip=0x000326; 	R(JNZ(loc_370af));	// 88507 jnz     short loc_370AF ;~ 2879:0326
cs=0x2879;eip=0x000328; 	T(SUB(ax, ax));	// 88508 sub     ax, ax ;~ 2879:0328
cs=0x2879;eip=0x00032a; 	X(MOV(*(dw*)((&unk_544da)), ax));	// 88509 mov     word ptr unk_544DA, ax ;~ 2879:032A
cs=0x2879;eip=0x00032d; 	X(MOV(*(dw*)((&unk_544d8)), ax));	// 88510 mov     word ptr unk_544D8, ax ;~ 2879:032D
cs=0x2879;eip=0x000330; 	X(MOV(*(dw*)((&unk_544dc)), ax));	// 88511 mov     word ptr unk_544DC, ax ;~ 2879:0330
loc_370a3:
	// 10048 
cs=0x2879;eip=0x000333; 	X(MOV(*(dw*)((&unk_544e0)), ax));	// 88514 mov     word ptr unk_544E0, ax ;~ 2879:0333
cs=0x2879;eip=0x000336; 	X(MOV(*(dw*)((&unk_544de)), ax));	// 88515 mov     word ptr unk_544DE, ax ;~ 2879:0336
loc_370a9:
	// 10049 
cs=0x2879;eip=0x000339; 	X(MOV(*(dw*)((&unk_544e2)), ax));	// 88518 mov     word ptr unk_544E2, ax ;~ 2879:0339
cs=0x2879;eip=0x00033c; 	R(JMP(loc_374e0));	// 88519 jmp     loc_374E0 ;~ 2879:033C
loc_370af:
	// 10050 
cs=0x2879;eip=0x00033f; 	T(SUB(ax, ax));	// 88523 sub     ax, ax ;~ 2879:033F
cs=0x2879;eip=0x000341; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 88524 mov     [bp+var_E], ax ;~ 2879:0341
cs=0x2879;eip=0x000344; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 88525 mov     [bp+var_16], ax ;~ 2879:0344
cs=0x2879;eip=0x000347; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 88526 mov     [bp+var_C], ax ;~ 2879:0347
cs=0x2879;eip=0x00034a; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 88527 mov     [bp+var_A], ax ;~ 2879:034A
cs=0x2879;eip=0x00034d; 	T(TEST(unk_55212, 2));	// 88528 test    byte ptr unk_55212, 2 ;~ 2879:034D
cs=0x2879;eip=0x000352; 	R(JNZ(loc_370c7));	// 88529 jnz     short loc_370C7 ;~ 2879:0352
cs=0x2879;eip=0x000354; 	R(JMP(loc_37247));	// 88530 jmp     loc_37247 ;~ 2879:0354
loc_370c7:
	// 10051 
cs=0x2879;eip=0x000357; 	T(MOV(ax, *(dw*)((&unk_564ee))));	// 88534 mov     ax, word ptr unk_564EE ;~ 2879:0357
cs=0x2879;eip=0x00035a; 	T(CMP(ax, 0x0E));	// 88535 cmp     ax, 0Eh ;~ 2879:035A
cs=0x2879;eip=0x00035d; 	R(JBE(loc_370d2));	// 88536 jbe     short loc_370D2 ;~ 2879:035D
cs=0x2879;eip=0x00035f; 	R(JMP(loc_37247));	// 88537 jmp     loc_37247 ;~ 2879:035F
loc_370d2:
	// 10052 
cs=0x2879;eip=0x000362; 	T(ADD(ax, ax));	// 88541 add     ax, ax ;~ 2879:0362
cs=0x2879;eip=0x000364; 	T(XCHG(ax, bx));	// 88542 xchg    ax, bx ;~ 2879:0364
	cs=seg_offset(seg025);
cs=0x2879;eip=0x000365; __disp=*(dw*)(((db*)&off_37229)+bx);
	R(JMP(__dispatch_call));	// 88543 jmp     cs:off_37229[bx] ;~ 2879:0365
loc_370da:
	// 10053 
cs=0x2879;eip=0x00036a; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 88548 les     bx, dword ptr unk_47AD0 ;~ 2879:036A
cs=0x2879;eip=0x00036e; 	T(TEST(*(raddr(es,bx+2)), 1));	// 88549 test    byte ptr es:[bx+2], 1 ;~ 2879:036E
cs=0x2879;eip=0x000373; 	R(JNZ(loc_370e8));	// 88550 jnz     short loc_370E8 ;~ 2879:0373
cs=0x2879;eip=0x000375; 	R(JMP(loc_37247));	// 88551 jmp     loc_37247 ;~ 2879:0375
loc_370e8:
	// 10054 
cs=0x2879;eip=0x000378; 	T(CMP(unk_5716f, 0));	// 88555 cmp     byte ptr unk_5716F, 0 ;~ 2879:0378
cs=0x2879;eip=0x00037d; 	R(JZ(loc_370f2));	// 88556 jz      short loc_370F2 ;~ 2879:037D
cs=0x2879;eip=0x00037f; 	R(JMP(loc_37247));	// 88557 jmp     loc_37247 ;~ 2879:037F
loc_370f2:
	// 10055 
cs=0x2879;eip=0x000382; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x0FFFF));	// 88561 mov     [bp+var_A], 0FFFFh ;~ 2879:0382
cs=0x2879;eip=0x000387; 	R(JMP(loc_37247));	// 88562 jmp     loc_37247 ;~ 2879:0387
loc_370fa:
	// 10056 
cs=0x2879;eip=0x00038a; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 88567 mov     dx, word ptr unk_47A9A ;~ 2879:038A
cs=0x2879;eip=0x00038e; 	T(MOV(ax, *(dw*)((&unk_47ace))));	// 88568 mov     ax, word ptr unk_47ACE ;~ 2879:038E
cs=0x2879;eip=0x000391; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 88569 mov     word ptr [bp+var_4], ax ;~ 2879:0391
cs=0x2879;eip=0x000394; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 88570 mov     word ptr [bp+var_4+2], dx ;~ 2879:0394
cs=0x2879;eip=0x000397; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 88571 les     bx, [bp+var_4] ;~ 2879:0397
cs=0x2879;eip=0x00039a; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 88572 mov     ax, es:[bx+2] ;~ 2879:039A
cs=0x2879;eip=0x00039e; 	T(AND(ax, 0x801));	// 88573 and     ax, 801h ;~ 2879:039E
cs=0x2879;eip=0x0003a1; 	T(CMP(ax, 0x801));	// 88574 cmp     ax, 801h ;~ 2879:03A1
cs=0x2879;eip=0x0003a4; 	R(JZ(loc_37119));	// 88575 jz      short loc_37119 ;~ 2879:03A4
cs=0x2879;eip=0x0003a6; 	R(JMP(loc_37247));	// 88576 jmp     loc_37247 ;~ 2879:03A6
loc_37119:
	// 10057 
cs=0x2879;eip=0x0003a9; 	X(PUSH(*(dw*)((&unk_47ace))));	// 88580 push    word ptr unk_47ACE ;~ 2879:03A9
cs=0x2879;eip=0x0003ad; 	R(CALLF(sub_17a1a,0));	// 88581 call    sub_17A1A ;~ 2879:03AD
cs=0x2879;eip=0x0003b2; 	T(MOV(bx, *(dw*)((&unk_47a9a))));	// 88582 mov     bx, word ptr unk_47A9A ;~ 2879:03B2
cs=0x2879;eip=0x0003b6; 	T(SUB(cx, cx));	// 88583 sub     cx, cx ;~ 2879:03B6
cs=0x2879;eip=0x0003b8; 	T(MOV(dx, bx));	// 88584 mov     dx, bx ;~ 2879:03B8
cs=0x2879;eip=0x0003ba; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_14))), ax));	// 88585 mov     word ptr [bp+var_14], ax ;~ 2879:03BA
cs=0x2879;eip=0x0003bd; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_14+2))), dx));	// 88586 mov     word ptr [bp+var_14+2], dx ;~ 2879:03BD
cs=0x2879;eip=0x0003c0; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_14))));	// 88587 les     bx, [bp+var_14] ;~ 2879:03C0
cs=0x2879;eip=0x0003c3; 	T(CMP(*(raddr(es,bx+0x0C)), 0));	// 88588 cmp     byte ptr es:[bx+0Ch], 0 ;~ 2879:03C3
cs=0x2879;eip=0x0003c8; 	R(JNZ(loc_3713d));	// 88589 jnz     short loc_3713D ;~ 2879:03C8
cs=0x2879;eip=0x0003ca; 	R(JMP(loc_37247));	// 88590 jmp     loc_37247 ;~ 2879:03CA
loc_3713d:
	// 10058 
cs=0x2879;eip=0x0003cd; 	X(PUSH(*(dw*)((&unk_47ace))));	// 88594 push    word ptr unk_47ACE ;~ 2879:03CD
cs=0x2879;eip=0x0003d1; 	R(CALLF(sub_17a0c,0));	// 88595 call    sub_17A0C ;~ 2879:03D1
cs=0x2879;eip=0x0003d6; 	T(MOV(bx, ax));	// 88596 mov     bx, ax ;~ 2879:03D6
cs=0x2879;eip=0x0003d8; 	T(MOV(al, *(raddr(ds,bx+0x12))));	// 88597 mov     al, [bx+12h] ;~ 2879:03D8
cs=0x2879;eip=0x0003db; 	T(SUB(ah, ah));	// 88598 sub     ah, ah ;~ 2879:03DB
cs=0x2879;eip=0x0003dd; 	T(OR(ax, ax));	// 88599 or      ax, ax ;~ 2879:03DD
cs=0x2879;eip=0x0003df; 	R(JZ(loc_37166));	// 88600 jz      short loc_37166 ;~ 2879:03DF
cs=0x2879;eip=0x0003e1; 	T(CMP(ax, 1));	// 88601 cmp     ax, 1 ;~ 2879:03E1
cs=0x2879;eip=0x0003e4; 	R(JZ(loc_37178));	// 88602 jz      short loc_37178 ;~ 2879:03E4
cs=0x2879;eip=0x0003e6; 	T(CMP(ax, 2));	// 88603 cmp     ax, 2 ;~ 2879:03E6
cs=0x2879;eip=0x0003e9; 	R(JNZ(loc_3715e));	// 88604 jnz     short loc_3715E ;~ 2879:03E9
cs=0x2879;eip=0x0003eb; 	R(JMP(loc_3721b));	// 88605 jmp     loc_3721B ;~ 2879:03EB
loc_3715e:
	// 10059 
cs=0x2879;eip=0x0003ee; 	T(CMP(ax, 4));	// 88609 cmp     ax, 4 ;~ 2879:03EE
cs=0x2879;eip=0x0003f1; 	R(JZ(loc_371a8));	// 88610 jz      short loc_371A8 ;~ 2879:03F1
cs=0x2879;eip=0x0003f3; 	R(JMP(loc_37247));	// 88611 jmp     loc_37247 ;~ 2879:03F3
loc_37166:
	// 10060 
cs=0x2879;eip=0x0003f6; 	T(CMP(*(dw*)((&unk_564ee)), 8));	// 88615 cmp     word ptr unk_564EE, 8 ;~ 2879:03F6
cs=0x2879;eip=0x0003fb; 	R(JZ(loc_37170));	// 88616 jz      short loc_37170 ;~ 2879:03FB
cs=0x2879;eip=0x0003fd; 	R(JMP(loc_37222));	// 88617 jmp     loc_37222 ;~ 2879:03FD
loc_37170:
	// 10061 
cs=0x2879;eip=0x000400; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0x0FFFF));	// 88621 mov     [bp+var_16], 0FFFFh ;~ 2879:0400
cs=0x2879;eip=0x000405; 	R(JMP(loc_37247));	// 88622 jmp     loc_37247 ;~ 2879:0405
loc_37178:
	// 10062 
cs=0x2879;eip=0x000408; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_14))));	// 88626 les     bx, [bp+var_14] ;~ 2879:0408
cs=0x2879;eip=0x00040b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1A))));	// 88627 mov     ax, es:[bx+1Ah] ;~ 2879:040B
cs=0x2879;eip=0x00040f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1C))));	// 88628 mov     dx, es:[bx+1Ch] ;~ 2879:040F
cs=0x2879;eip=0x000413; 	T(MOV(cl, 8));	// 88629 mov     cl, 8 ;~ 2879:0413
cs=0x2879;eip=0x000415; 	R(CALLF(sub_10240,0));	// 88630 call    sub_10240 ;~ 2879:0415
cs=0x2879;eip=0x00041a; 	T(CWD);	// 88631 cwd ;~ 2879:041A
cs=0x2879;eip=0x00041b; 	T(MOV(cx, 6));	// 88632 mov     cx, 6 ;~ 2879:041B
cs=0x2879;eip=0x00041e; 	T(IDIV2(cx));	// 88633 idiv    cx ;~ 2879:041E
cs=0x2879;eip=0x000420; 	T(SUB(ax, 0x32));	// 88634 sub     ax, 32h ; '2' ;~ 2879:0420
cs=0x2879;eip=0x000423; 	T(NEG(ax));	// 88635 neg     ax ;~ 2879:0423
cs=0x2879;eip=0x000425; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 88636 mov     [bp+var_A], ax ;~ 2879:0425
cs=0x2879;eip=0x000428; 	T(CMP(ax, 4));	// 88637 cmp     ax, 4 ;~ 2879:0428
cs=0x2879;eip=0x00042b; 	R(JL(loc_371a0));	// 88638 jl      short loc_371A0 ;~ 2879:042B
cs=0x2879;eip=0x00042d; 	R(JMP(loc_37247));	// 88639 jmp     loc_37247 ;~ 2879:042D
loc_371a0:
	// 10063 
cs=0x2879;eip=0x000430; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 4));	// 88643 mov     [bp+var_A], 4 ;~ 2879:0430
cs=0x2879;eip=0x000435; 	R(JMP(loc_37247));	// 88644 jmp     loc_37247 ;~ 2879:0435
loc_371a8:
	// 10064 
cs=0x2879;eip=0x000438; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_14))));	// 88648 les     bx, [bp+var_14] ;~ 2879:0438
cs=0x2879;eip=0x00043b; 	T(CMP(*(raddr(es,bx+0x0D)), 0));	// 88649 cmp     byte ptr es:[bx+0Dh], 0 ;~ 2879:043B
cs=0x2879;eip=0x000440; 	R(JNZ(loc_371b5));	// 88650 jnz     short loc_371B5 ;~ 2879:0440
cs=0x2879;eip=0x000442; 	R(JMP(loc_37247));	// 88651 jmp     loc_37247 ;~ 2879:0442
loc_371b5:
	// 10065 
cs=0x2879;eip=0x000445; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 88655 les     bx, [bp+var_4] ;~ 2879:0445
cs=0x2879;eip=0x000448; 	T(MOV(si, *(dw*)(raddr(es,bx))));	// 88656 mov     si, es:[bx] ;~ 2879:0448
cs=0x2879;eip=0x00044b; 	T(CMP(si, 0x754C));	// 88657 cmp     si, 754Ch ;~ 2879:044B
cs=0x2879;eip=0x00044f; 	R(JNZ(loc_371c4));	// 88658 jnz     short loc_371C4 ;~ 2879:044F
cs=0x2879;eip=0x000451; 	R(JMP(loc_37247));	// 88659 jmp     loc_37247 ;~ 2879:0451
loc_371c4:
	// 10066 
cs=0x2879;eip=0x000454; 	T(CMP(si, 0x0B478));	// 88663 cmp     si, 0B478h ;~ 2879:0454
cs=0x2879;eip=0x000458; 	R(JZ(loc_37247));	// 88664 jz      short loc_37247 ;~ 2879:0458
cs=0x2879;eip=0x00045a; 	T(CMP(si, 0x64FA));	// 88665 cmp     si, 64FAh ;~ 2879:045A
cs=0x2879;eip=0x00045e; 	R(JZ(loc_37247));	// 88666 jz      short loc_37247 ;~ 2879:045E
cs=0x2879;eip=0x000460; 	T(MOV(ax, *(dw*)((&unk_4a4bc))));	// 88667 mov     ax, word ptr unk_4A4BC ;~ 2879:0460
cs=0x2879;eip=0x000463; 	T(CWD);	// 88668 cwd ;~ 2879:0463
cs=0x2879;eip=0x000464; 	T(XOR(ax, dx));	// 88669 xor     ax, dx ;~ 2879:0464
cs=0x2879;eip=0x000466; 	T(SUB(ax, dx));	// 88670 sub     ax, dx ;~ 2879:0466
cs=0x2879;eip=0x000468; 	T(MOV(cx, 3));	// 88671 mov     cx, 3 ;~ 2879:0468
cs=0x2879;eip=0x00046b; 	T(SAR(ax, cl));	// 88672 sar     ax, cl ;~ 2879:046B
cs=0x2879;eip=0x00046d; 	T(XOR(ax, dx));	// 88673 xor     ax, dx ;~ 2879:046D
cs=0x2879;eip=0x00046f; 	T(SUB(ax, dx));	// 88674 sub     ax, dx ;~ 2879:046F
cs=0x2879;eip=0x000471; 	T(MOV(cx, ax));	// 88675 mov     cx, ax ;~ 2879:0471
cs=0x2879;eip=0x000473; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 88676 mov     ax, es:[bx+12h] ;~ 2879:0473
cs=0x2879;eip=0x000477; 	T(MOV(bx, cx));	// 88677 mov     bx, cx ;~ 2879:0477
cs=0x2879;eip=0x000479; 	T(CWD);	// 88678 cwd ;~ 2879:0479
cs=0x2879;eip=0x00047a; 	T(XOR(ax, dx));	// 88679 xor     ax, dx ;~ 2879:047A
cs=0x2879;eip=0x00047c; 	T(SUB(ax, dx));	// 88680 sub     ax, dx ;~ 2879:047C
cs=0x2879;eip=0x00047e; 	T(MOV(cx, 3));	// 88681 mov     cx, 3 ;~ 2879:047E
cs=0x2879;eip=0x000481; 	T(SAR(ax, cl));	// 88682 sar     ax, cl ;~ 2879:0481
cs=0x2879;eip=0x000483; 	T(XOR(ax, dx));	// 88683 xor     ax, dx ;~ 2879:0483
cs=0x2879;eip=0x000485; 	T(SUB(ax, dx));	// 88684 sub     ax, dx ;~ 2879:0485
cs=0x2879;eip=0x000487; 	T(CMP(ax, bx));	// 88685 cmp     ax, bx ;~ 2879:0487
cs=0x2879;eip=0x000489; 	R(JZ(loc_37247));	// 88686 jz      short loc_37247 ;~ 2879:0489
cs=0x2879;eip=0x00048b; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 88687 mov     bx, word ptr [bp+var_4] ;~ 2879:048B
cs=0x2879;eip=0x00048e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 88688 mov     ax, es:[bx+12h] ;~ 2879:048E
cs=0x2879;eip=0x000492; 	X(MOV(*(dw*)((&unk_4a4bc)), ax));	// 88689 mov     word ptr unk_4A4BC, ax ;~ 2879:0492
cs=0x2879;eip=0x000495; 	T(MOV(ax, word_5705a));	// 88690 mov     ax, word_5705A ;~ 2879:0495
cs=0x2879;eip=0x000498; 	T(MOV(dx, word_5705c));	// 88691 mov     dx, word_5705C ;~ 2879:0498
cs=0x2879;eip=0x00049c; 	T(ADD(ax, 0x100));	// 88692 add     ax, 100h ;~ 2879:049C
cs=0x2879;eip=0x00049f; 	T(ADC(dx, 0));	// 88693 adc     dx, 0 ;~ 2879:049F
cs=0x2879;eip=0x0004a2; 	X(MOV(*(dw*)((&unk_544e8)), ax));	// 88694 mov     word ptr unk_544E8, ax ;~ 2879:04A2
cs=0x2879;eip=0x0004a5; 	X(MOV(*(dw*)((&unk_544ea)), dx));	// 88695 mov     word ptr unk_544EA, dx ;~ 2879:04A5
cs=0x2879;eip=0x0004a9; 	R(JMP(loc_37247));	// 88696 jmp     short loc_37247 ;~ 2879:04A9
loc_3721b:
	// 10067 
cs=0x2879;eip=0x0004ab; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0x0FFFF));	// 88700 mov     [bp+var_E], 0FFFFh ;~ 2879:04AB
cs=0x2879;eip=0x0004b0; 	R(JMP(loc_37247));	// 88701 jmp     short loc_37247 ;~ 2879:04B0
loc_37222:
	// 10068 
cs=0x2879;eip=0x0004b2; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0x0FFFF));	// 88707 mov     [bp+var_C], 0FFFFh ;~ 2879:04B2
cs=0x2879;eip=0x0004b7; 	R(JMP(loc_37247));	// 88708 jmp     short loc_37247 ;~ 2879:04B7
loc_37247:
	// 10069 
cs=0x2879;eip=0x0004d7; 	T(CMP(byte_55209, 0));	// 88729 cmp     byte_55209, 0 ;~ 2879:04D7
cs=0x2879;eip=0x0004dc; 	R(JZ(loc_3726d));	// 88730 jz      short loc_3726D ;~ 2879:04DC
cs=0x2879;eip=0x0004de; 	T(TEST(unk_55212, 4));	// 88731 test    byte ptr unk_55212, 4 ;~ 2879:04DE
cs=0x2879;eip=0x0004e3; 	R(JZ(loc_3726d));	// 88732 jz      short loc_3726D ;~ 2879:04E3
cs=0x2879;eip=0x0004e5; 	T(CMP(*(dw*)((&unk_5704e)), 1));	// 88733 cmp     word ptr unk_5704E, 1 ;~ 2879:04E5
cs=0x2879;eip=0x0004ea; 	T(SBB(ax, ax));	// 88734 sbb     ax, ax ;~ 2879:04EA
cs=0x2879;eip=0x0004ec; 	T(INC(ax));	// 88735 inc     ax ;~ 2879:04EC
cs=0x2879;eip=0x0004ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 88736 mov     [bp+var_8], ax ;~ 2879:04ED
cs=0x2879;eip=0x0004f0; 	T(CMP(*(dw*)((&unk_57052)), 1));	// 88737 cmp     word ptr unk_57052, 1 ;~ 2879:04F0
cs=0x2879;eip=0x0004f5; 	T(SBB(ax, ax));	// 88738 sbb     ax, ax ;~ 2879:04F5
cs=0x2879;eip=0x0004f7; 	T(INC(ax));	// 88739 inc     ax ;~ 2879:04F7
cs=0x2879;eip=0x0004f8; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88740 mov     [bp+var_6], ax ;~ 2879:04F8
cs=0x2879;eip=0x0004fb; 	R(JMP(loc_37275));	// 88741 jmp     short loc_37275 ;~ 2879:04FB
loc_3726d:
	// 10070 
cs=0x2879;eip=0x0004fd; 	T(SUB(ax, ax));	// 88746 sub     ax, ax ;~ 2879:04FD
cs=0x2879;eip=0x0004ff; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88747 mov     [bp+var_6], ax ;~ 2879:04FF
cs=0x2879;eip=0x000502; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 88748 mov     [bp+var_8], ax ;~ 2879:0502
loc_37275:
	// 10071 
cs=0x2879;eip=0x000505; 	T(MOV(ax, *(dw*)((&unk_544dc))));	// 88751 mov     ax, word ptr unk_544DC ;~ 2879:0505
cs=0x2879;eip=0x000508; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), ax));	// 88752 cmp     [bp+var_8], ax ;~ 2879:0508
cs=0x2879;eip=0x00050b; 	R(JZ(loc_3729b));	// 88753 jz      short loc_3729B ;~ 2879:050B
cs=0x2879;eip=0x00050d; 	T(MOV(ax, 3));	// 88754 mov     ax, 3 ;~ 2879:050D
cs=0x2879;eip=0x000510; 	X(PUSH(ax));	// 88755 push    ax ;~ 2879:0510
cs=0x2879;eip=0x000511; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 88756 cmp     [bp+var_8], 0 ;~ 2879:0511
cs=0x2879;eip=0x000515; 	R(JZ(loc_3728b));	// 88757 jz      short loc_3728B ;~ 2879:0515
cs=0x2879;eip=0x000517; 	T(SUB(ax, ax));	// 88758 sub     ax, ax ;~ 2879:0517
cs=0x2879;eip=0x000519; 	R(JMP(loc_3728e));	// 88759 jmp     short loc_3728E ;~ 2879:0519
loc_3728b:
	// 10072 
cs=0x2879;eip=0x00051b; 	T(MOV(ax, 2));	// 88763 mov     ax, 2 ;~ 2879:051B
loc_3728e:
	// 10073 
cs=0x2879;eip=0x00051e; 	X(PUSH(ax));	// 88766 push    ax ;~ 2879:051E
cs=0x2879;eip=0x00051f; 	R(CALL(sub_36f0c,0));	// 88767 call    sub_36F0C ;~ 2879:051F
cs=0x2879;eip=0x000522; 	T(ADD(sp, 4));	// 88768 add     sp, 4 ;~ 2879:0522
cs=0x2879;eip=0x000525; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 88769 mov     ax, [bp+var_8] ;~ 2879:0525
cs=0x2879;eip=0x000528; 	X(MOV(*(dw*)((&unk_544dc)), ax));	// 88770 mov     word ptr unk_544DC, ax ;~ 2879:0528
loc_3729b:
	// 10074 
cs=0x2879;eip=0x00052b; 	T(MOV(ax, *(dw*)((&unk_544d8))));	// 88773 mov     ax, word ptr unk_544D8 ;~ 2879:052B
cs=0x2879;eip=0x00052e; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88774 cmp     [bp+var_6], ax ;~ 2879:052E
cs=0x2879;eip=0x000531; 	R(JZ(loc_372c1));	// 88775 jz      short loc_372C1 ;~ 2879:0531
cs=0x2879;eip=0x000533; 	T(MOV(ax, 6));	// 88776 mov     ax, 6 ;~ 2879:0533
cs=0x2879;eip=0x000536; 	X(PUSH(ax));	// 88777 push    ax ;~ 2879:0536
cs=0x2879;eip=0x000537; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0));	// 88778 cmp     [bp+var_6], 0 ;~ 2879:0537
cs=0x2879;eip=0x00053b; 	R(JZ(loc_372b1));	// 88779 jz      short loc_372B1 ;~ 2879:053B
cs=0x2879;eip=0x00053d; 	T(SUB(ax, ax));	// 88780 sub     ax, ax ;~ 2879:053D
cs=0x2879;eip=0x00053f; 	R(JMP(loc_372b4));	// 88781 jmp     short loc_372B4 ;~ 2879:053F
loc_372b1:
	// 10075 
cs=0x2879;eip=0x000541; 	T(MOV(ax, 2));	// 88785 mov     ax, 2 ;~ 2879:0541
loc_372b4:
	// 10076 
cs=0x2879;eip=0x000544; 	X(PUSH(ax));	// 88788 push    ax ;~ 2879:0544
cs=0x2879;eip=0x000545; 	R(CALL(sub_36f0c,0));	// 88789 call    sub_36F0C ;~ 2879:0545
cs=0x2879;eip=0x000548; 	T(ADD(sp, 4));	// 88790 add     sp, 4 ;~ 2879:0548
cs=0x2879;eip=0x00054b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 88791 mov     ax, [bp+var_6] ;~ 2879:054B
cs=0x2879;eip=0x00054e; 	X(MOV(*(dw*)((&unk_544d8)), ax));	// 88792 mov     word ptr unk_544D8, ax ;~ 2879:054E
loc_372c1:
	// 10077 
cs=0x2879;eip=0x000551; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0));	// 88795 cmp     [bp+var_E], 0 ;~ 2879:0551
cs=0x2879;eip=0x000555; 	R(JNZ(loc_372dc));	// 88796 jnz     short loc_372DC ;~ 2879:0555
cs=0x2879;eip=0x000557; 	T(MOV(ax, *(dw*)((&unk_544e8))));	// 88797 mov     ax, word ptr unk_544E8 ;~ 2879:0557
cs=0x2879;eip=0x00055a; 	T(MOV(dx, *(dw*)((&unk_544ea))));	// 88798 mov     dx, word ptr unk_544EA ;~ 2879:055A
cs=0x2879;eip=0x00055e; 	T(CMP(word_5705c, dx));	// 88799 cmp     word_5705C, dx ;~ 2879:055E
cs=0x2879;eip=0x000562; 	R(JG(loc_372fb));	// 88800 jg      short loc_372FB ;~ 2879:0562
cs=0x2879;eip=0x000564; 	R(JL(loc_372dc));	// 88801 jl      short loc_372DC ;~ 2879:0564
cs=0x2879;eip=0x000566; 	T(CMP(word_5705a, ax));	// 88802 cmp     word_5705A, ax ;~ 2879:0566
cs=0x2879;eip=0x00056a; 	R(JNC(loc_372fb));	// 88803 jnb     short loc_372FB ;~ 2879:056A
loc_372dc:
	// 10078 
cs=0x2879;eip=0x00056c; 	T(CMP(*(dw*)((&unk_544da)), 0));	// 88807 cmp     word ptr unk_544DA, 0 ;~ 2879:056C
cs=0x2879;eip=0x000571; 	R(JNZ(loc_372f6));	// 88808 jnz     short loc_372F6 ;~ 2879:0571
cs=0x2879;eip=0x000573; 	T(MOV(ax, 7));	// 88809 mov     ax, 7 ;~ 2879:0573
cs=0x2879;eip=0x000576; 	X(PUSH(ax));	// 88810 push    ax ;~ 2879:0576
cs=0x2879;eip=0x000577; 	T(SUB(ax, ax));	// 88811 sub     ax, ax ;~ 2879:0577
cs=0x2879;eip=0x000579; 	X(PUSH(ax));	// 88812 push    ax ;~ 2879:0579
cs=0x2879;eip=0x00057a; 	R(CALL(sub_36f0c,0));	// 88813 call    sub_36F0C ;~ 2879:057A
cs=0x2879;eip=0x00057d; 	T(ADD(sp, 4));	// 88814 add     sp, 4 ;~ 2879:057D
cs=0x2879;eip=0x000580; 	X(MOV(*(dw*)((&unk_544da)), 0x0FFFF));	// 88815 mov     word ptr unk_544DA, 0FFFFh ;~ 2879:0580
loc_372f6:
	// 10079 
cs=0x2879;eip=0x000586; 	T(SUB(ax, ax));	// 88818 sub     ax, ax ;~ 2879:0586
cs=0x2879;eip=0x000588; 	R(JMP(loc_370a3));	// 88819 jmp     loc_370A3 ;~ 2879:0588
loc_372fb:
	// 10080 
cs=0x2879;eip=0x00058b; 	T(CMP(*(dw*)((&unk_544da)), 0));	// 88824 cmp     word ptr unk_544DA, 0 ;~ 2879:058B
cs=0x2879;eip=0x000590; 	R(JZ(loc_37316));	// 88825 jz      short loc_37316 ;~ 2879:0590
cs=0x2879;eip=0x000592; 	T(MOV(ax, 7));	// 88826 mov     ax, 7 ;~ 2879:0592
cs=0x2879;eip=0x000595; 	X(PUSH(ax));	// 88827 push    ax ;~ 2879:0595
cs=0x2879;eip=0x000596; 	T(MOV(ax, 2));	// 88828 mov     ax, 2 ;~ 2879:0596
cs=0x2879;eip=0x000599; 	X(PUSH(ax));	// 88829 push    ax ;~ 2879:0599
cs=0x2879;eip=0x00059a; 	R(CALL(sub_36f0c,0));	// 88830 call    sub_36F0C ;~ 2879:059A
cs=0x2879;eip=0x00059d; 	T(ADD(sp, 4));	// 88831 add     sp, 4 ;~ 2879:059D
cs=0x2879;eip=0x0005a0; 	X(MOV(*(dw*)((&unk_544da)), 0));	// 88832 mov     word ptr unk_544DA, 0 ;~ 2879:05A0
loc_37316:
	// 10081 
cs=0x2879;eip=0x0005a6; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 88835 cmp     [bp+var_A], 0 ;~ 2879:05A6
cs=0x2879;eip=0x0005aa; 	R(JNZ(loc_3731f));	// 88836 jnz     short loc_3731F ;~ 2879:05AA
cs=0x2879;eip=0x0005ac; 	R(JMP(loc_37437));	// 88837 jmp     loc_37437 ;~ 2879:05AC
loc_3731f:
	// 10082 
cs=0x2879;eip=0x0005af; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x0FFFF));	// 88841 cmp     [bp+var_A], 0FFFFh ;~ 2879:05AF
cs=0x2879;eip=0x0005b3; 	R(JZ(loc_37328));	// 88842 jz      short loc_37328 ;~ 2879:05B3
cs=0x2879;eip=0x0005b5; 	R(JMP(loc_373ff));	// 88843 jmp     loc_373FF ;~ 2879:05B5
loc_37328:
	// 10083 
cs=0x2879;eip=0x0005b8; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 88847 les     bx, dword ptr unk_56FD6 ;~ 2879:05B8
cs=0x2879;eip=0x0005bc; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x218))));	// 88848 mov     ax, es:[bx+218h] ;~ 2879:05BC
cs=0x2879;eip=0x0005c1; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21A))));	// 88849 mov     dx, es:[bx+21Ah] ;~ 2879:05C1
cs=0x2879;eip=0x0005c6; 	T(MOV(cl, 8));	// 88850 mov     cl, 8 ;~ 2879:05C6
cs=0x2879;eip=0x0005c8; 	R(CALLF(sub_10240,0));	// 88851 call    sub_10240 ;~ 2879:05C8
cs=0x2879;eip=0x0005cd; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 88852 mov     [bp+var_10], ax ;~ 2879:05CD
cs=0x2879;eip=0x0005d0; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 88853 les     bx, dword ptr unk_56FD6 ;~ 2879:05D0
cs=0x2879;eip=0x0005d4; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 88854 cmp     word ptr es:[bx+306h], 1 ;~ 2879:05D4
cs=0x2879;eip=0x0005da; 	R(JNZ(loc_373b2));	// 88855 jnz     short loc_373B2 ;~ 2879:05DA
cs=0x2879;eip=0x0005dc; 	T(CMP(ax, 0x32));	// 88856 cmp     ax, 32h ; '2' ;~ 2879:05DC
cs=0x2879;eip=0x0005df; 	R(JLE(loc_3735c));	// 88857 jle     short loc_3735C ;~ 2879:05DF
cs=0x2879;eip=0x0005e1; 	T(CWD);	// 88858 cwd ;~ 2879:05E1
cs=0x2879;eip=0x0005e2; 	T(MOV(cx, 0x0A));	// 88859 mov     cx, 0Ah ;~ 2879:05E2
cs=0x2879;eip=0x0005e5; 	T(IDIV2(cx));	// 88860 idiv    cx ;~ 2879:05E5
cs=0x2879;eip=0x0005e7; 	T(SUB(ax, 0x0F));	// 88861 sub     ax, 0Fh ;~ 2879:05E7
cs=0x2879;eip=0x0005ea; 	R(JMP(loc_37370));	// 88862 jmp     short loc_37370 ;~ 2879:05EA
loc_3735c:
	// 10084 
cs=0x2879;eip=0x0005ec; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x218))));	// 88866 mov     ax, es:[bx+218h] ;~ 2879:05EC
cs=0x2879;eip=0x0005f1; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21A))));	// 88867 mov     dx, es:[bx+21Ah] ;~ 2879:05F1
cs=0x2879;eip=0x0005f6; 	T(MOV(cl, 8));	// 88868 mov     cl, 8 ;~ 2879:05F6
cs=0x2879;eip=0x0005f8; 	R(CALLF(sub_10240,0));	// 88869 call    sub_10240 ;~ 2879:05F8
cs=0x2879;eip=0x0005fd; 	T(SUB(ax, 0x41));	// 88870 sub     ax, 41h ; 'A' ;~ 2879:05FD
loc_37370:
	// 10085 
cs=0x2879;eip=0x000600; 	T(NEG(ax));	// 88873 neg     ax ;~ 2879:0600
cs=0x2879;eip=0x000602; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 88874 mov     [bp+var_A], ax ;~ 2879:0602
cs=0x2879;eip=0x000605; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 88875 mov     dx, word ptr unk_47A9A ;~ 2879:0605
cs=0x2879;eip=0x000609; 	T(MOV(ax, *(dw*)((&unk_56fbf))));	// 88876 mov     ax, word ptr unk_56FBF ;~ 2879:0609
cs=0x2879;eip=0x00060c; 	T(MOV(es, dx));	// 88877 mov     es, dx ;~ 2879:060C
cs=0x2879;eip=0x00060e; 	T(MOV(bx, ax));	// 88879 mov     bx, ax ;~ 2879:060E
cs=0x2879;eip=0x000610; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1A))));	// 88880 mov     ax, es:[bx+1Ah] ;~ 2879:0610
cs=0x2879;eip=0x000614; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1C))));	// 88881 mov     dx, es:[bx+1Ch] ;~ 2879:0614
cs=0x2879;eip=0x000618; 	T(MOV(cl, 8));	// 88882 mov     cl, 8 ;~ 2879:0618
cs=0x2879;eip=0x00061a; 	R(CALLF(sub_10240,0));	// 88883 call    sub_10240 ;~ 2879:061A
cs=0x2879;eip=0x00061f; 	T(CWD);	// 88884 cwd ;~ 2879:061F
cs=0x2879;eip=0x000620; 	T(XOR(ax, dx));	// 88885 xor     ax, dx ;~ 2879:0620
cs=0x2879;eip=0x000622; 	T(SUB(ax, dx));	// 88886 sub     ax, dx ;~ 2879:0622
cs=0x2879;eip=0x000624; 	T(CWD);	// 88887 cwd ;~ 2879:0624
cs=0x2879;eip=0x000625; 	T(XOR(ax, dx));	// 88888 xor     ax, dx ;~ 2879:0625
cs=0x2879;eip=0x000627; 	T(SUB(ax, dx));	// 88889 sub     ax, dx ;~ 2879:0627
cs=0x2879;eip=0x000629; 	T(MOV(cx, 5));	// 88890 mov     cx, 5 ;~ 2879:0629
cs=0x2879;eip=0x00062c; 	T(SAR(ax, cl));	// 88891 sar     ax, cl ;~ 2879:062C
cs=0x2879;eip=0x00062e; 	T(XOR(ax, dx));	// 88892 xor     ax, dx ;~ 2879:062E
cs=0x2879;eip=0x000630; 	T(SUB(ax, dx));	// 88893 sub     ax, dx ;~ 2879:0630
cs=0x2879;eip=0x000632; 	X(SUB(*(dw*)(raddr(ss,bp+var_a)), ax));	// 88894 sub     [bp+var_A], ax ;~ 2879:0632
cs=0x2879;eip=0x000635; 	T(CMP(unk_55211, 1));	// 88895 cmp     byte ptr unk_55211, 1 ;~ 2879:0635
cs=0x2879;eip=0x00063a; 	R(JZ(loc_373f4));	// 88896 jz      short loc_373F4 ;~ 2879:063A
cs=0x2879;eip=0x00063c; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 0x0A));	// 88897 add     [bp+var_A], 0Ah ;~ 2879:063C
cs=0x2879;eip=0x000640; 	R(JMP(loc_373f4));	// 88898 jmp     short loc_373F4 ;~ 2879:0640
loc_373b2:
	// 10086 
cs=0x2879;eip=0x000642; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0x32));	// 88902 cmp     [bp+var_10], 32h ; '2' ;~ 2879:0642
cs=0x2879;eip=0x000646; 	R(JLE(loc_373d7));	// 88903 jle     short loc_373D7 ;~ 2879:0646
cs=0x2879;eip=0x000648; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 88904 les     bx, dword ptr unk_56FD6 ;~ 2879:0648
cs=0x2879;eip=0x00064c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x218))));	// 88906 mov     ax, es:[bx+218h] ;~ 2879:064C
cs=0x2879;eip=0x000651; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21A))));	// 88907 mov     dx, es:[bx+21Ah] ;~ 2879:0651
cs=0x2879;eip=0x000656; 	T(MOV(cl, 8));	// 88908 mov     cl, 8 ;~ 2879:0656
cs=0x2879;eip=0x000658; 	R(CALLF(sub_10240,0));	// 88909 call    sub_10240 ;~ 2879:0658
cs=0x2879;eip=0x00065d; 	T(CWD);	// 88910 cwd ;~ 2879:065D
cs=0x2879;eip=0x00065e; 	T(MOV(cx, 0x0A));	// 88911 mov     cx, 0Ah ;~ 2879:065E
cs=0x2879;eip=0x000661; 	T(IDIV2(cx));	// 88912 idiv    cx ;~ 2879:0661
cs=0x2879;eip=0x000663; 	T(SUB(ax, cx));	// 88913 sub     ax, cx ;~ 2879:0663
cs=0x2879;eip=0x000665; 	R(JMP(loc_373ef));	// 88914 jmp     short loc_373EF ;~ 2879:0665
loc_373d7:
	// 10087 
cs=0x2879;eip=0x000667; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 88918 les     bx, dword ptr unk_56FD6 ;~ 2879:0667
cs=0x2879;eip=0x00066b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x218))));	// 88919 mov     ax, es:[bx+218h] ;~ 2879:066B
cs=0x2879;eip=0x000670; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21A))));	// 88920 mov     dx, es:[bx+21Ah] ;~ 2879:0670
cs=0x2879;eip=0x000675; 	T(MOV(cl, 8));	// 88921 mov     cl, 8 ;~ 2879:0675
cs=0x2879;eip=0x000677; 	R(CALLF(sub_10240,0));	// 88922 call    sub_10240 ;~ 2879:0677
cs=0x2879;eip=0x00067c; 	T(SUB(ax, 0x37));	// 88923 sub     ax, 37h ; '7' ;~ 2879:067C
loc_373ef:
	// 10088 
cs=0x2879;eip=0x00067f; 	T(NEG(ax));	// 88926 neg     ax ;~ 2879:067F
cs=0x2879;eip=0x000681; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 88927 mov     [bp+var_A], ax ;~ 2879:0681
loc_373f4:
	// 10089 
cs=0x2879;eip=0x000684; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 1));	// 88931 cmp     [bp+var_A], 1 ;~ 2879:0684
cs=0x2879;eip=0x000688; 	R(JGE(loc_373ff));	// 88932 jge     short loc_373FF ;~ 2879:0688
cs=0x2879;eip=0x00068a; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 1));	// 88933 mov     [bp+var_A], 1 ;~ 2879:068A
loc_373ff:
	// 10090 
cs=0x2879;eip=0x00068f; 	T(CMP(*(dw*)((&unk_544e2)), 0));	// 88937 cmp     word ptr unk_544E2, 0 ;~ 2879:068F
cs=0x2879;eip=0x000694; 	R(JNZ(loc_3740e));	// 88938 jnz     short loc_3740E ;~ 2879:0694
cs=0x2879;eip=0x000696; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 88939 push    [bp+var_A] ;~ 2879:0696
cs=0x2879;eip=0x000699; 	T(SUB(ax, ax));	// 88940 sub     ax, ax ;~ 2879:0699
cs=0x2879;eip=0x00069b; 	X(PUSH(ax));	// 88941 push    ax ;~ 2879:069B
cs=0x2879;eip=0x00069c; 	R(JMP(loc_3741f));	// 88942 jmp     short loc_3741F ;~ 2879:069C
loc_3740e:
	// 10091 
cs=0x2879;eip=0x00069e; 	T(MOV(ax, *(dw*)((&unk_544e2))));	// 88946 mov     ax, word ptr unk_544E2 ;~ 2879:069E
cs=0x2879;eip=0x0006a1; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), ax));	// 88947 cmp     [bp+var_A], ax ;~ 2879:06A1
cs=0x2879;eip=0x0006a4; 	R(JZ(loc_37426));	// 88948 jz      short loc_37426 ;~ 2879:06A4
cs=0x2879;eip=0x0006a6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 88949 push    [bp+var_A] ;~ 2879:06A6
cs=0x2879;eip=0x0006a9; 	T(SUB(ax, ax));	// 88950 sub     ax, ax ;~ 2879:06A9
cs=0x2879;eip=0x0006ab; 	X(PUSH(ax));	// 88951 push    ax ;~ 2879:06AB
cs=0x2879;eip=0x0006ac; 	T(MOV(ax, 4));	// 88952 mov     ax, 4 ;~ 2879:06AC
loc_3741f:
	// 10092 
cs=0x2879;eip=0x0006af; 	X(PUSH(ax));	// 88955 push    ax ;~ 2879:06AF
cs=0x2879;eip=0x0006b0; 	R(CALL(sub_36f0c,0));	// 88956 call    sub_36F0C ;~ 2879:06B0
cs=0x2879;eip=0x0006b3; 	T(ADD(sp, 6));	// 88957 add     sp, 6 ;~ 2879:06B3
loc_37426:
	// 10093 
cs=0x2879;eip=0x0006b6; 	T(SUB(ax, ax));	// 88960 sub     ax, ax ;~ 2879:06B6
cs=0x2879;eip=0x0006b8; 	X(MOV(*(dw*)((&unk_544da)), ax));	// 88961 mov     word ptr unk_544DA, ax ;~ 2879:06B8
cs=0x2879;eip=0x0006bb; 	X(MOV(*(dw*)((&unk_544e0)), ax));	// 88962 mov     word ptr unk_544E0, ax ;~ 2879:06BB
cs=0x2879;eip=0x0006be; 	X(MOV(*(dw*)((&unk_544de)), ax));	// 88963 mov     word ptr unk_544DE, ax ;~ 2879:06BE
cs=0x2879;eip=0x0006c1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 88964 mov     ax, [bp+var_A] ;~ 2879:06C1
cs=0x2879;eip=0x0006c4; 	R(JMP(loc_370a9));	// 88965 jmp     loc_370A9 ;~ 2879:06C4
loc_37437:
	// 10094 
cs=0x2879;eip=0x0006c7; 	T(CMP(*(dw*)((&unk_544e2)), 0));	// 88969 cmp     word ptr unk_544E2, 0 ;~ 2879:06C7
cs=0x2879;eip=0x0006cc; 	R(JZ(loc_37451));	// 88970 jz      short loc_37451 ;~ 2879:06CC
cs=0x2879;eip=0x0006ce; 	T(SUB(ax, ax));	// 88971 sub     ax, ax ;~ 2879:06CE
cs=0x2879;eip=0x0006d0; 	X(PUSH(ax));	// 88972 push    ax ;~ 2879:06D0
cs=0x2879;eip=0x0006d1; 	T(MOV(ax, 2));	// 88973 mov     ax, 2 ;~ 2879:06D1
cs=0x2879;eip=0x0006d4; 	X(PUSH(ax));	// 88974 push    ax ;~ 2879:06D4
cs=0x2879;eip=0x0006d5; 	R(CALL(sub_36f0c,0));	// 88975 call    sub_36F0C ;~ 2879:06D5
cs=0x2879;eip=0x0006d8; 	T(ADD(sp, 4));	// 88976 add     sp, 4 ;~ 2879:06D8
cs=0x2879;eip=0x0006db; 	X(MOV(*(dw*)((&unk_544e2)), 0));	// 88977 mov     word ptr unk_544E2, 0 ;~ 2879:06DB
loc_37451:
	// 10095 
cs=0x2879;eip=0x0006e1; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 0));	// 88980 cmp     [bp+var_C], 0 ;~ 2879:06E1
cs=0x2879;eip=0x0006e5; 	R(JZ(loc_3747e));	// 88981 jz      short loc_3747E ;~ 2879:06E5
cs=0x2879;eip=0x0006e7; 	T(CMP(*(dw*)((&unk_544de)), 0));	// 88982 cmp     word ptr unk_544DE, 0 ;~ 2879:06E7
cs=0x2879;eip=0x0006ec; 	R(JNZ(loc_3746b));	// 88983 jnz     short loc_3746B ;~ 2879:06EC
cs=0x2879;eip=0x0006ee; 	T(MOV(ax, 0x0C));	// 88984 mov     ax, 0Ch ;~ 2879:06EE
cs=0x2879;eip=0x0006f1; 	X(PUSH(ax));	// 88985 push    ax ;~ 2879:06F1
cs=0x2879;eip=0x0006f2; 	T(SUB(ax, ax));	// 88986 sub     ax, ax ;~ 2879:06F2
cs=0x2879;eip=0x0006f4; 	X(PUSH(ax));	// 88987 push    ax ;~ 2879:06F4
cs=0x2879;eip=0x0006f5; 	R(CALL(sub_36f0c,0));	// 88988 call    sub_36F0C ;~ 2879:06F5
cs=0x2879;eip=0x0006f8; 	T(ADD(sp, 4));	// 88989 add     sp, 4 ;~ 2879:06F8
loc_3746b:
	// 10096 
cs=0x2879;eip=0x0006fb; 	T(SUB(ax, ax));	// 88992 sub     ax, ax ;~ 2879:06FB
cs=0x2879;eip=0x0006fd; 	X(MOV(*(dw*)((&unk_544da)), ax));	// 88993 mov     word ptr unk_544DA, ax ;~ 2879:06FD
cs=0x2879;eip=0x000700; 	X(MOV(*(dw*)((&unk_544e0)), ax));	// 88994 mov     word ptr unk_544E0, ax ;~ 2879:0700
cs=0x2879;eip=0x000703; 	X(MOV(*(dw*)((&unk_544e2)), ax));	// 88995 mov     word ptr unk_544E2, ax ;~ 2879:0703
cs=0x2879;eip=0x000706; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 88996 mov     ax, [bp+var_C] ;~ 2879:0706
cs=0x2879;eip=0x000709; 	X(MOV(*(dw*)((&unk_544de)), ax));	// 88997 mov     word ptr unk_544DE, ax ;~ 2879:0709
cs=0x2879;eip=0x00070c; 	R(JMP(loc_374e0));	// 88998 jmp     short loc_374E0 ;~ 2879:070C
loc_3747e:
	// 10097 
cs=0x2879;eip=0x00070e; 	T(CMP(*(dw*)((&unk_544de)), 0));	// 89002 cmp     word ptr unk_544DE, 0 ;~ 2879:070E
cs=0x2879;eip=0x000713; 	R(JZ(loc_37499));	// 89003 jz      short loc_37499 ;~ 2879:0713
cs=0x2879;eip=0x000715; 	T(MOV(ax, 0x0C));	// 89004 mov     ax, 0Ch ;~ 2879:0715
cs=0x2879;eip=0x000718; 	X(PUSH(ax));	// 89005 push    ax ;~ 2879:0718
cs=0x2879;eip=0x000719; 	T(MOV(ax, 2));	// 89006 mov     ax, 2 ;~ 2879:0719
cs=0x2879;eip=0x00071c; 	X(PUSH(ax));	// 89007 push    ax ;~ 2879:071C
cs=0x2879;eip=0x00071d; 	R(CALL(sub_36f0c,0));	// 89008 call    sub_36F0C ;~ 2879:071D
cs=0x2879;eip=0x000720; 	T(ADD(sp, 4));	// 89009 add     sp, 4 ;~ 2879:0720
cs=0x2879;eip=0x000723; 	X(MOV(*(dw*)((&unk_544de)), 0));	// 89010 mov     word ptr unk_544DE, 0 ;~ 2879:0723
loc_37499:
	// 10098 
cs=0x2879;eip=0x000729; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0));	// 89013 cmp     [bp+var_16], 0 ;~ 2879:0729
cs=0x2879;eip=0x00072d; 	R(JZ(loc_374c5));	// 89014 jz      short loc_374C5 ;~ 2879:072D
cs=0x2879;eip=0x00072f; 	T(SUB(ax, ax));	// 89015 sub     ax, ax ;~ 2879:072F
cs=0x2879;eip=0x000731; 	X(MOV(*(dw*)((&unk_544da)), ax));	// 89016 mov     word ptr unk_544DA, ax ;~ 2879:0731
cs=0x2879;eip=0x000734; 	X(MOV(*(dw*)((&unk_544de)), ax));	// 89017 mov     word ptr unk_544DE, ax ;~ 2879:0734
cs=0x2879;eip=0x000737; 	X(MOV(*(dw*)((&unk_544e2)), ax));	// 89018 mov     word ptr unk_544E2, ax ;~ 2879:0737
cs=0x2879;eip=0x00073a; 	T(CMP(*(dw*)((&unk_544e0)), ax));	// 89019 cmp     word ptr unk_544E0, ax ;~ 2879:073A
cs=0x2879;eip=0x00073e; 	R(JNZ(loc_374bd));	// 89020 jnz     short loc_374BD ;~ 2879:073E
cs=0x2879;eip=0x000740; 	T(MOV(ax, 0x0D));	// 89021 mov     ax, 0Dh ;~ 2879:0740
cs=0x2879;eip=0x000743; 	X(PUSH(ax));	// 89022 push    ax ;~ 2879:0743
cs=0x2879;eip=0x000744; 	T(SUB(ax, ax));	// 89023 sub     ax, ax ;~ 2879:0744
cs=0x2879;eip=0x000746; 	X(PUSH(ax));	// 89024 push    ax ;~ 2879:0746
cs=0x2879;eip=0x000747; 	R(CALL(sub_36f0c,0));	// 89025 call    sub_36F0C ;~ 2879:0747
cs=0x2879;eip=0x00074a; 	T(ADD(sp, 4));	// 89026 add     sp, 4 ;~ 2879:074A
loc_374bd:
	// 10099 
cs=0x2879;eip=0x00074d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 89029 mov     ax, [bp+var_16] ;~ 2879:074D
cs=0x2879;eip=0x000750; 	X(MOV(*(dw*)((&unk_544e0)), ax));	// 89030 mov     word ptr unk_544E0, ax ;~ 2879:0750
cs=0x2879;eip=0x000753; 	R(JMP(loc_374e0));	// 89031 jmp     short loc_374E0 ;~ 2879:0753
loc_374c5:
	// 10100 
cs=0x2879;eip=0x000755; 	T(CMP(*(dw*)((&unk_544e0)), 0));	// 89035 cmp     word ptr unk_544E0, 0 ;~ 2879:0755
cs=0x2879;eip=0x00075a; 	R(JZ(loc_374e0));	// 89036 jz      short loc_374E0 ;~ 2879:075A
cs=0x2879;eip=0x00075c; 	T(MOV(ax, 0x0D));	// 89037 mov     ax, 0Dh ;~ 2879:075C
cs=0x2879;eip=0x00075f; 	X(PUSH(ax));	// 89038 push    ax ;~ 2879:075F
cs=0x2879;eip=0x000760; 	T(MOV(ax, 2));	// 89039 mov     ax, 2 ;~ 2879:0760
cs=0x2879;eip=0x000763; 	X(PUSH(ax));	// 89040 push    ax ;~ 2879:0763
cs=0x2879;eip=0x000764; 	R(CALL(sub_36f0c,0));	// 89041 call    sub_36F0C ;~ 2879:0764
cs=0x2879;eip=0x000767; 	T(ADD(sp, 4));	// 89042 add     sp, 4 ;~ 2879:0767
cs=0x2879;eip=0x00076a; 	X(MOV(*(dw*)((&unk_544e0)), 0));	// 89043 mov     word ptr unk_544E0, 0 ;~ 2879:076A
loc_374e0:
	// 10101 
cs=0x2879;eip=0x000770; 	X(POP(si));	// 89047 pop     si ;~ 2879:0770
cs=0x2879;eip=0x000771; 	T(MOV(sp, bp));	// 89048 mov     sp, bp ;~ 2879:0771
cs=0x2879;eip=0x000773; 	X(POP(bp));	// 89049 pop     bp ;~ 2879:0773
cs=0x2879;eip=0x000774; 	R(RETF(0));	// 89050 retf ;~ 2879:0774

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_36df3: 	goto loc_36df3;
        case m2c::kloc_36e5c: 	goto loc_36e5c;
        case m2c::kloc_36ea8: 	goto loc_36ea8;
        case m2c::kloc_36eb5: 	goto loc_36eb5;
        case m2c::kloc_36f0a: 	goto loc_36f0a;
        case m2c::kloc_36f36: 	goto loc_36f36;
        case m2c::kloc_36fa6: 	goto loc_36fa6;
        case m2c::kloc_36fad: 	goto loc_36fad;
        case m2c::kloc_36fb9: 	goto loc_36fb9;
        case m2c::kloc_36fcc: 	goto loc_36fcc;
        case m2c::kloc_36fd9: 	goto loc_36fd9;
        case m2c::kloc_36ff4: 	goto loc_36ff4;
        case m2c::kloc_36ffe: 	goto loc_36ffe;
        case m2c::kloc_37079: 	goto loc_37079;
        case m2c::kloc_3707d: 	goto loc_3707d;
        case m2c::kloc_37091: 	goto loc_37091;
        case m2c::kloc_370a3: 	goto loc_370a3;
        case m2c::kloc_370a9: 	goto loc_370a9;
        case m2c::kloc_370af: 	goto loc_370af;
        case m2c::kloc_370c7: 	goto loc_370c7;
        case m2c::kloc_370d2: 	goto loc_370d2;
        case m2c::kloc_370da: 	goto loc_370da;
        case m2c::kloc_370e8: 	goto loc_370e8;
        case m2c::kloc_370f2: 	goto loc_370f2;
        case m2c::kloc_370fa: 	goto loc_370fa;
        case m2c::kloc_37119: 	goto loc_37119;
        case m2c::kloc_3713d: 	goto loc_3713d;
        case m2c::kloc_3715e: 	goto loc_3715e;
        case m2c::kloc_37166: 	goto loc_37166;
        case m2c::kloc_37170: 	goto loc_37170;
        case m2c::kloc_37178: 	goto loc_37178;
        case m2c::kloc_371a0: 	goto loc_371a0;
        case m2c::kloc_371a8: 	goto loc_371a8;
        case m2c::kloc_371b5: 	goto loc_371b5;
        case m2c::kloc_371c4: 	goto loc_371c4;
        case m2c::kloc_3721b: 	goto loc_3721b;
        case m2c::kloc_37222: 	goto loc_37222;
        case m2c::kloc_37247: 	goto loc_37247;
        case m2c::kloc_3726d: 	goto loc_3726d;
        case m2c::kloc_37275: 	goto loc_37275;
        case m2c::kloc_3728b: 	goto loc_3728b;
        case m2c::kloc_3728e: 	goto loc_3728e;
        case m2c::kloc_3729b: 	goto loc_3729b;
        case m2c::kloc_372b1: 	goto loc_372b1;
        case m2c::kloc_372b4: 	goto loc_372b4;
        case m2c::kloc_372c1: 	goto loc_372c1;
        case m2c::kloc_372dc: 	goto loc_372dc;
        case m2c::kloc_372f6: 	goto loc_372f6;
        case m2c::kloc_372fb: 	goto loc_372fb;
        case m2c::kloc_37316: 	goto loc_37316;
        case m2c::kloc_3731f: 	goto loc_3731f;
        case m2c::kloc_37328: 	goto loc_37328;
        case m2c::kloc_3735c: 	goto loc_3735c;
        case m2c::kloc_37370: 	goto loc_37370;
        case m2c::kloc_373b2: 	goto loc_373b2;
        case m2c::kloc_373d7: 	goto loc_373d7;
        case m2c::kloc_373ef: 	goto loc_373ef;
        case m2c::kloc_373f4: 	goto loc_373f4;
        case m2c::kloc_373ff: 	goto loc_373ff;
        case m2c::kloc_3740e: 	goto loc_3740e;
        case m2c::kloc_3741f: 	goto loc_3741f;
        case m2c::kloc_37426: 	goto loc_37426;
        case m2c::kloc_37437: 	goto loc_37437;
        case m2c::kloc_37451: 	goto loc_37451;
        case m2c::kloc_3746b: 	goto loc_3746b;
        case m2c::kloc_3747e: 	goto loc_3747e;
        case m2c::kloc_37499: 	goto loc_37499;
        case m2c::kloc_374bd: 	goto loc_374bd;
        case m2c::kloc_374c5: 	goto loc_374c5;
        case m2c::kloc_374e0: 	goto loc_374e0;
        case m2c::klocret_36e88: 	goto locret_36e88;
        case m2c::knullsub_14: 	goto nullsub_14;
        case m2c::ksub_36d7a: 	goto sub_36d7a;
        case m2c::ksub_36df7: 	goto sub_36df7;
        case m2c::ksub_36e33: 	goto sub_36e33;
        case m2c::ksub_36e60: 	goto sub_36e60;
        case m2c::ksub_36e89: 	goto sub_36e89;
        case m2c::ksub_36e9c: 	goto sub_36e9c;
        case m2c::ksub_36ebd: 	goto sub_36ebd;
        case m2c::ksub_36ed2: 	goto sub_36ed2;
        case m2c::ksub_36ee7: 	goto sub_36ee7;
        case m2c::ksub_36f0c: 	goto sub_36f0c;
        case m2c::ksub_36f38: 	goto sub_36f38;
        case m2c::ksub_36f43: 	goto sub_36f43;
        case m2c::ksub_36f51: 	goto sub_36f51;
        case m2c::ksub_36f79: 	goto sub_36f79;
        case m2c::ksub_36f87: 	goto sub_36f87;
        case m2c::ksub_36f95: 	goto sub_36f95;
        case m2c::ksub_36fdb: 	goto sub_36fdb;
        case m2c::ksub_37000: 	goto sub_37000;
        case m2c::ksub_3700e: 	goto sub_3700e;
        case m2c::ksub_3701c: 	goto sub_3701c;
        case m2c::ksub_3702a: 	goto sub_3702a;
        case m2c::ksub_37080: 	goto sub_37080;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

