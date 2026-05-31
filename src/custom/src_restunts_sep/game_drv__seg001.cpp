/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool opponent_op(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    opponent_op:
    _begin:
#undef var_40
#define var_40 -0x40
	// 7956 var_40          = word ptr -40h ;~ 0613:0002
#undef var_3e
#define var_3e -0x3E
	// 7957 var_3E          = word ptr -3Eh ;~ 0613:0002
#undef var_3c
#define var_3c -0x3C
	// 7958 var_3C          = word ptr -3Ch ;~ 0613:0002
#undef var_3a
#define var_3a -0x3A
	// 7959 var_3A          = word ptr -3Ah ;~ 0613:0002
#undef var_38
#define var_38 -0x38
	// 7960 var_38          = word ptr -38h ;~ 0613:0002
#undef var_36
#define var_36 -0x36
	// 7961 var_36          = word ptr -36h ;~ 0613:0002
#undef var_34
#define var_34 -0x34
	// 7962 var_34          = word ptr -34h ;~ 0613:0002
#undef var_32
#define var_32 -0x32
	// 7963 var_32          = word ptr -32h ;~ 0613:0002
#undef var_30
#define var_30 -0x30
	// 7964 var_30          = word ptr -30h ;~ 0613:0002
#undef var_2e
#define var_2e -0x2E
	// 7965 var_2E          = word ptr -2Eh ;~ 0613:0002
#undef var_2c
#define var_2c -0x2C
	// 7966 var_2C          = word ptr -2Ch ;~ 0613:0002
#undef var_2a
#define var_2a -0x2A
	// 7967 var_2A          = word ptr -2Ah ;~ 0613:0002
#undef var_28
#define var_28 -0x28
	// 7968 var_28          = word ptr -28h ;~ 0613:0002
#undef var_26
#define var_26 -0x26
	// 7969 var_26          = word ptr -26h ;~ 0613:0002
#undef var_24
#define var_24 -0x24
	// 7970 var_24          = word ptr -24h ;~ 0613:0002
#undef var_22
#define var_22 -0x22
	// 7971 var_22          = word ptr -22h ;~ 0613:0002
#undef var_20
#define var_20 -0x20
	// 7972 var_20          = byte ptr -20h ;~ 0613:0002
#undef var_1c
#define var_1c -0x1C
	// 7973 var_1C          = word ptr -1Ch ;~ 0613:0002
#undef var_1a
#define var_1a -0x1A
	// 7974 var_1A          = word ptr -1Ah ;~ 0613:0002
#undef var_18
#define var_18 -0x18
	// 7975 var_18          = word ptr -18h ;~ 0613:0002
#undef var_16
#define var_16 -0x16
	// 7976 var_16          = word ptr -16h ;~ 0613:0002
#undef var_14
#define var_14 -0x14
	// 7977 var_14          = word ptr -14h ;~ 0613:0002
#undef var_12
#define var_12 -0x12
	// 7978 var_12          = word ptr -12h ;~ 0613:0002
#undef var_10
#define var_10 -0x10
	// 7979 var_10          = word ptr -10h ;~ 0613:0002
#undef var_e
#define var_e -0x0E
	// 7980 var_E           = byte ptr -0Eh ;~ 0613:0002
#undef var_c
#define var_c -0x0C
	// 7981 var_C           = word ptr -0Ch ;~ 0613:0002
#undef var_a
#define var_a -0x0A
	// 7982 var_A           = word ptr -0Ah ;~ 0613:0002
#undef var_8
#define var_8 -8
	// 7983 var_8           = word ptr -8 ;~ 0613:0002
#undef var_6
#define var_6 -6
	// 7984 var_6           = word ptr -6 ;~ 0613:0002
cs=0x613;eip=0x000002; 	X(PUSH(bp));	// 7986 push    bp ;~ 0613:0002
cs=0x613;eip=0x000003; 	T(MOV(bp, sp));	// 7987 mov     bp, sp ;~ 0613:0003
cs=0x613;eip=0x000005; 	T(SUB(sp, 0x40));	// 7988 sub     sp, 40h ;~ 0613:0005
cs=0x613;eip=0x000008; 	X(PUSH(di));	// 7989 push    di ;~ 0613:0008
cs=0x613;eip=0x000009; 	X(PUSH(si));	// 7990 push    si ;~ 0613:0009
cs=0x613;eip=0x00000a; 	T(CMP(framespersec, 0x14));	// 7991 cmp     framespersec, 14h ;~ 0613:000A
cs=0x613;eip=0x00000f; 	J(JNZ(loc_1472e));	// 7992 jnz     short loc_1472E ;~ 0613:000F
cs=0x613;eip=0x000011; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), 8));	// 7993 mov     [bp+var_14], 8 ;~ 0613:0011
cs=0x613;eip=0x000016; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 1));	// 7994 mov     [bp+var_10], 1 ;~ 0613:0016
cs=0x613;eip=0x00001b; 	J(JMP(loc_14738));	// 7995 jmp     short loc_14738 ;~ 0613:001B
loc_1472e:
	// 4768 
cs=0x613;eip=0x00001e; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), 0x10));	// 8000 mov     [bp+var_14], 10h ;~ 0613:001E
cs=0x613;eip=0x000023; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 2));	// 8001 mov     [bp+var_10], 2 ;~ 0613:0023
loc_14738:
	// 4769 
cs=0x613;eip=0x000028; 	T(CMP(word_446ec, 0));	// 8004 cmp     word_446EC, 0 ;~ 0613:0028
cs=0x613;eip=0x00002d; 	J(JNZ(loc_14746));	// 8005 jnz     short loc_14746 ;~ 0613:002D
cs=0x613;eip=0x00002f; 	T(CMP(byte_44889, 2));	// 8006 cmp     byte_44889, 2 ;~ 0613:002F
cs=0x613;eip=0x000034; 	J(JNZ(loc_1474c));	// 8007 jnz     short loc_1474C ;~ 0613:0034
loc_14746:
	// 4770 
cs=0x613;eip=0x000036; 	X(MOV(*(raddr(ss,bp+var_20)), 1));	// 8010 mov     [bp+var_20], 1 ;~ 0613:0036
cs=0x613;eip=0x00003a; 	J(JMP(loc_14750));	// 8011 jmp     short loc_14750 ;~ 0613:003A
loc_1474c:
	// 4771 
cs=0x613;eip=0x00003c; 	X(MOV(*(raddr(ss,bp+var_20)), 0));	// 8015 mov     [bp+var_20], 0 ;~ 0613:003C
loc_14750:
	// 4772 
cs=0x613;eip=0x000040; 	T(MOV(ax, word_446b6));	// 8018 mov     ax, word_446B6 ;~ 0613:0040
cs=0x613;eip=0x000043; 	T(MOV(dx, word_446b8));	// 8019 mov     dx, word_446B8 ;~ 0613:0043
cs=0x613;eip=0x000047; 	T(MOV(cl, 6));	// 8020 mov     cl, 6 ;~ 0613:0047
loc_14759:
	// 4773 
cs=0x613;eip=0x000049; 	T(SAR(dx, 1));	// 8023 sar     dx, 1 ;~ 0613:0049
cs=0x613;eip=0x00004b; 	T(RCR(ax, 1));	// 8024 rcr     ax, 1 ;~ 0613:004B
cs=0x613;eip=0x00004d; 	T(DEC(cl));	// 8025 dec     cl ;~ 0613:004D
cs=0x613;eip=0x00004f; 	J(JNZ(loc_14759));	// 8026 jnz     short loc_14759 ;~ 0613:004F
cs=0x613;eip=0x000051; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 8027 mov     [bp+var_28], ax ;~ 0613:0051
cs=0x613;eip=0x000054; 	T(MOV(ax, word_446ba));	// 8028 mov     ax, word_446BA ;~ 0613:0054
cs=0x613;eip=0x000057; 	T(MOV(dx, word_446bc));	// 8029 mov     dx, word_446BC ;~ 0613:0057
cs=0x613;eip=0x00005b; 	T(MOV(cl, 6));	// 8030 mov     cl, 6 ;~ 0613:005B
loc_1476d:
	// 4774 
cs=0x613;eip=0x00005d; 	T(SAR(dx, 1));	// 8033 sar     dx, 1 ;~ 0613:005D
cs=0x613;eip=0x00005f; 	T(RCR(ax, 1));	// 8034 rcr     ax, 1 ;~ 0613:005F
cs=0x613;eip=0x000061; 	T(DEC(cl));	// 8035 dec     cl ;~ 0613:0061
cs=0x613;eip=0x000063; 	J(JNZ(loc_1476d));	// 8036 jnz     short loc_1476D ;~ 0613:0063
cs=0x613;eip=0x000065; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 8037 mov     [bp+var_2A], ax ;~ 0613:0065
cs=0x613;eip=0x000068; 	T(MOV(ax, word_446be));	// 8038 mov     ax, word_446BE ;~ 0613:0068
cs=0x613;eip=0x00006b; 	T(MOV(dx, word_446c0));	// 8039 mov     dx, word_446C0 ;~ 0613:006B
cs=0x613;eip=0x00006f; 	T(MOV(cl, 6));	// 8040 mov     cl, 6 ;~ 0613:006F
loc_14781:
	// 4775 
cs=0x613;eip=0x000071; 	T(SAR(dx, 1));	// 8043 sar     dx, 1 ;~ 0613:0071
cs=0x613;eip=0x000073; 	T(RCR(ax, 1));	// 8044 rcr     ax, 1 ;~ 0613:0073
cs=0x613;eip=0x000075; 	T(DEC(cl));	// 8045 dec     cl ;~ 0613:0075
cs=0x613;eip=0x000077; 	J(JNZ(loc_14781));	// 8046 jnz     short loc_14781 ;~ 0613:0077
cs=0x613;eip=0x000079; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), ax));	// 8047 mov     [bp+var_36], ax ;~ 0613:0079
cs=0x613;eip=0x00007c; 	T(MOV(ax, word_445e6));	// 8048 mov     ax, word_445E6 ;~ 0613:007C
cs=0x613;eip=0x00007f; 	T(MOV(dx, word_445e8));	// 8049 mov     dx, word_445E8 ;~ 0613:007F
cs=0x613;eip=0x000083; 	T(MOV(cl, 6));	// 8050 mov     cl, 6 ;~ 0613:0083
loc_14795:
	// 4776 
cs=0x613;eip=0x000085; 	T(SAR(dx, 1));	// 8053 sar     dx, 1 ;~ 0613:0085
cs=0x613;eip=0x000087; 	T(RCR(ax, 1));	// 8054 rcr     ax, 1 ;~ 0613:0087
cs=0x613;eip=0x000089; 	T(DEC(cl));	// 8055 dec     cl ;~ 0613:0089
cs=0x613;eip=0x00008b; 	J(JNZ(loc_14795));	// 8056 jnz     short loc_14795 ;~ 0613:008B
cs=0x613;eip=0x00008d; 	X(MOV(*(dw*)(raddr(ss,bp+var_34)), ax));	// 8057 mov     [bp+var_34], ax ;~ 0613:008D
cs=0x613;eip=0x000090; 	T(MOV(ax, word_445ea));	// 8058 mov     ax, word_445EA ;~ 0613:0090
cs=0x613;eip=0x000093; 	T(MOV(dx, word_445ec));	// 8059 mov     dx, word_445EC ;~ 0613:0093
cs=0x613;eip=0x000097; 	T(MOV(cl, 6));	// 8060 mov     cl, 6 ;~ 0613:0097
loc_147a9:
	// 4777 
cs=0x613;eip=0x000099; 	T(SAR(dx, 1));	// 8063 sar     dx, 1 ;~ 0613:0099
cs=0x613;eip=0x00009b; 	T(RCR(ax, 1));	// 8064 rcr     ax, 1 ;~ 0613:009B
cs=0x613;eip=0x00009d; 	T(DEC(cl));	// 8065 dec     cl ;~ 0613:009D
cs=0x613;eip=0x00009f; 	J(JNZ(loc_147a9));	// 8066 jnz     short loc_147A9 ;~ 0613:009F
cs=0x613;eip=0x0000a1; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), ax));	// 8067 mov     [bp+var_3E], ax ;~ 0613:00A1
cs=0x613;eip=0x0000a4; 	T(MOV(ax, word_445ee));	// 8068 mov     ax, word_445EE ;~ 0613:00A4
cs=0x613;eip=0x0000a7; 	T(MOV(dx, word_445f0));	// 8069 mov     dx, word_445F0 ;~ 0613:00A7
cs=0x613;eip=0x0000ab; 	T(MOV(cl, 6));	// 8070 mov     cl, 6 ;~ 0613:00AB
loc_147bd:
	// 4778 
cs=0x613;eip=0x0000ad; 	T(SAR(dx, 1));	// 8073 sar     dx, 1 ;~ 0613:00AD
cs=0x613;eip=0x0000af; 	T(RCR(ax, 1));	// 8074 rcr     ax, 1 ;~ 0613:00AF
cs=0x613;eip=0x0000b1; 	T(DEC(cl));	// 8075 dec     cl ;~ 0613:00B1
cs=0x613;eip=0x0000b3; 	J(JNZ(loc_147bd));	// 8076 jnz     short loc_147BD ;~ 0613:00B3
cs=0x613;eip=0x0000b5; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 8077 mov     [bp+var_40], ax ;~ 0613:00B5
cs=0x613;eip=0x0000b8; 	X(MOV(byte_44785, 0));	// 8078 mov     byte_44785, 0 ;~ 0613:00B8
cs=0x613;eip=0x0000bd; 	X(MOV(byte_448f2, 0));	// 8079 mov     byte_448F2, 0 ;~ 0613:00BD
cs=0x613;eip=0x0000c2; 	T(MOV(ax, 1));	// 8080 mov     ax, 1 ;~ 0613:00C2
cs=0x613;eip=0x0000c5; 	X(PUSH(ax));	// 8081 push    ax ;~ 0613:00C5
cs=0x613;eip=0x0000c6; 	X(PUSH(word_446ce));	// 8082 push    word_446CE ;~ 0613:00C6
cs=0x613;eip=0x0000ca; 	X(PUSH(word_446d0));	// 8083 push    word_446D0 ;~ 0613:00CA
cs=0x613;eip=0x0000ce; 	X(PUSH(word_446d2));	// 8084 push    word_446D2 ;~ 0613:00CE
cs=0x613;eip=0x0000d2; 	J(CALLF(mat_rot_zxy,0));	// 8085 call    mat_rot_zxy ;~ 0613:00D2
cs=0x613;eip=0x0000d7; 	T(ADD(sp, 8));	// 8086 add     sp, 8 ;~ 0613:00D7
cs=0x613;eip=0x0000da; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 8087 mov     [bp+var_16], ax ;~ 0613:00DA
cs=0x613;eip=0x0000dd; 	X(MOV(byte_44785, 1));	// 8088 mov     byte_44785, 1 ;~ 0613:00DD
cs=0x613;eip=0x0000e2; 	T(CMP(byte_4477f, 0));	// 8089 cmp     byte_4477F, 0 ;~ 0613:00E2
cs=0x613;eip=0x0000e7; 	J(JZ(loc_1480c));	// 8090 jz      short loc_1480C ;~ 0613:00E7
cs=0x613;eip=0x0000e9; 	T(CMP(word_446e2, 0));	// 8091 cmp     word_446E2, 0 ;~ 0613:00E9
cs=0x613;eip=0x0000ee; 	J(JZ(loc_14803));	// 8092 jz      short loc_14803 ;~ 0613:00EE
cs=0x613;eip=0x0000f0; 	J(JMP(loc_14b72));	// 8093 jmp     loc_14B72 ;~ 0613:00F0
loc_14803:
	// 4779 
cs=0x613;eip=0x0000f3; 	X(MOV(byte_44785, 0));	// 8097 mov     byte_44785, 0 ;~ 0613:00F3
cs=0x613;eip=0x0000f8; 	J(JMP(loc_14b72));	// 8098 jmp     loc_14B72 ;~ 0613:00F8
loc_1480c:
	// 4780 
cs=0x613;eip=0x0000fc; 	X(PUSH(si));	// 8103 push    si ;~ 0613:00FC
cs=0x613;eip=0x0000fd; 	T(di = bp+var_3c);	// 8104 lea     di, [bp+var_3C] ;~ 0613:00FD
cs=0x613;eip=0x000100; 	T(MOV(si, offset(dseg,word_4475a)));	// 8105 mov     si, offset word_4475A ;~ 0613:0100
cs=0x613;eip=0x000103; 	X(PUSH(ss));	// 8106 push    ss ;~ 0613:0103
cs=0x613;eip=0x000104; 	X(POP(es));	// 8107 pop     es ;~ 0613:0104
cs=0x613;eip=0x000105; 	X(MOVSW);	// 8108 movsw ;~ 0613:0105
cs=0x613;eip=0x000106; 	X(MOVSW);	// 8109 movsw ;~ 0613:0106
cs=0x613;eip=0x000107; 	X(MOVSW);	// 8110 movsw ;~ 0613:0107
cs=0x613;eip=0x000108; 	X(POP(si));	// 8111 pop     si ;~ 0613:0108
cs=0x613;eip=0x000109; 	T(CMP(*(dw*)(raddr(ss,bp+var_3a)), 0x0FFFF));	// 8112 cmp     [bp+var_3A], 0FFFFh ;~ 0613:0109
cs=0x613;eip=0x00010d; 	J(JZ(loc_14848));	// 8113 jz      short loc_14848 ;~ 0613:010D
cs=0x613;eip=0x00010f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3c))));	// 8114 mov     ax, [bp+var_3C] ;~ 0613:010F
cs=0x613;eip=0x000112; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_28))));	// 8115 sub     ax, [bp+var_28] ;~ 0613:0112
cs=0x613;eip=0x000115; 	X(MOV(*(dw*)(raddr(ss,bp+var_32)), ax));	// 8116 mov     [bp+var_32], ax ;~ 0613:0115
cs=0x613;eip=0x000118; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3a))));	// 8117 mov     ax, [bp+var_3A] ;~ 0613:0118
cs=0x613;eip=0x00011b; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2a))));	// 8118 sub     ax, [bp+var_2A] ;~ 0613:011B
cs=0x613;eip=0x00011e; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 8119 mov     [bp+var_30], ax ;~ 0613:011E
cs=0x613;eip=0x000121; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_38))));	// 8120 mov     ax, [bp+var_38] ;~ 0613:0121
cs=0x613;eip=0x000124; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_36))));	// 8121 sub     ax, [bp+var_36] ;~ 0613:0124
cs=0x613;eip=0x000127; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 8122 mov     [bp+var_2E], ax ;~ 0613:0127
cs=0x613;eip=0x00012a; 	T(ax = bp+var_32);	// 8123 lea     ax, [bp+var_32] ;~ 0613:012A
cs=0x613;eip=0x00012d; 	X(PUSH(ax));	// 8124 push    ax ;~ 0613:012D
cs=0x613;eip=0x00012e; 	J(CALLF(polarradius3d,0));	// 8125 call    polarRadius3D ;~ 0613:012E
cs=0x613;eip=0x000133; 	T(ADD(sp, 2));	// 8126 add     sp, 2 ;~ 0613:0133
cs=0x613;eip=0x000136; 	J(JMP(loc_1485e));	// 8127 jmp     short loc_1485E ;~ 0613:0136
loc_14848:
	// 4781 
cs=0x613;eip=0x000138; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_38))));	// 8131 mov     ax, [bp+var_38] ;~ 0613:0138
cs=0x613;eip=0x00013b; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_36))));	// 8132 sub     ax, [bp+var_36] ;~ 0613:013B
cs=0x613;eip=0x00013e; 	X(PUSH(ax));	// 8133 push    ax ;~ 0613:013E
cs=0x613;eip=0x00013f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3c))));	// 8134 mov     ax, [bp+var_3C] ;~ 0613:013F
cs=0x613;eip=0x000142; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_28))));	// 8135 sub     ax, [bp+var_28] ;~ 0613:0142
cs=0x613;eip=0x000145; 	X(PUSH(ax));	// 8136 push    ax ;~ 0613:0145
cs=0x613;eip=0x000146; 	J(CALLF(polarradius2d,0));	// 8137 call    polarRadius2D ;~ 0613:0146
cs=0x613;eip=0x00014b; 	T(ADD(sp, 4));	// 8138 add     sp, 4 ;~ 0613:014B
loc_1485e:
	// 4782 
cs=0x613;eip=0x00014e; 	T(MOV(si, ax));	// 8141 mov     si, ax ;~ 0613:014E
cs=0x613;eip=0x000150; 	T(CMP(si, 0x0C8));	// 8142 cmp     si, 0C8h ; 'È' ;~ 0613:0150
cs=0x613;eip=0x000154; 	J(JGE(loc_148b3));	// 8143 jge     short loc_148B3 ;~ 0613:0154
loc_14866:
	// 4783 
cs=0x613;eip=0x000156; 	T(MOV(ax, offset(dseg,byte_4488d)));	// 8146 mov     ax, offset byte_4488D ;~ 0613:0156
cs=0x613;eip=0x000159; 	X(PUSH(ax));	// 8147 push    ax ;~ 0613:0159
cs=0x613;eip=0x00015a; 	T(MOV(al, byte_44784));	// 8148 mov     al, byte_44784 ;~ 0613:015A
cs=0x613;eip=0x00015d; 	X(INC(byte_44784));	// 8149 inc     byte_44784 ;~ 0613:015D
cs=0x613;eip=0x000161; 	T(SUB(ah, ah));	// 8150 sub     ah, ah ;~ 0613:0161
cs=0x613;eip=0x000163; 	X(PUSH(ax));	// 8151 push    ax ;~ 0613:0163
cs=0x613;eip=0x000164; 	T(MOV(ax, offset(dseg,word_4475a)));	// 8152 mov     ax, offset word_4475A ;~ 0613:0164
cs=0x613;eip=0x000167; 	X(PUSH(ax));	// 8153 push    ax ;~ 0613:0167
cs=0x613;eip=0x000168; 	T(MOV(bx, word_44700));	// 8154 mov     bx, word_44700 ;~ 0613:0168
cs=0x613;eip=0x00016c; 	T(SHL(bx, 1));	// 8155 shl     bx, 1 ;~ 0613:016C
cs=0x613;eip=0x00016e; 	T(LES(di, trackdata3));	// 8156 les     di, trackdata3 ;~ 0613:016E
cs=0x613;eip=0x000172; 	X(PUSH(*(dw*)(raddr(es,bx+di))));	// 8157 push    word ptr es:[bx+di] ;~ 0613:0172
cs=0x613;eip=0x000175; 	X(PUSH(cs));	// 8158 push    cs ;~ 0613:0175
cs=0x613;eip=0x000176; 	J(CALL(sub_18d60,0));	// 8159 call    near ptr sub_18D60 ;~ 0613:0176
cs=0x613;eip=0x000179; 	T(ADD(sp, 8));	// 8160 add     sp, 8 ;~ 0613:0179
cs=0x613;eip=0x00017c; 	T(OR(al, al));	// 8161 or      al, al ;~ 0613:017C
cs=0x613;eip=0x00017e; 	J(JZ(loc_148b3));	// 8162 jz      short loc_148B3 ;~ 0613:017E
cs=0x613;eip=0x000180; 	X(INC(word_44700));	// 8163 inc     word_44700 ;~ 0613:0180
cs=0x613;eip=0x000184; 	T(MOV(bx, word_44700));	// 8164 mov     bx, word_44700 ;~ 0613:0184
cs=0x613;eip=0x000188; 	T(SHL(bx, 1));	// 8165 shl     bx, 1 ;~ 0613:0188
cs=0x613;eip=0x00018a; 	T(LES(di, trackdata3));	// 8166 les     di, trackdata3 ;~ 0613:018A
cs=0x613;eip=0x00018e; 	T(CMP(*(dw*)(raddr(es,bx+di)), 0));	// 8167 cmp     word ptr es:[bx+di], 0 ;~ 0613:018E
cs=0x613;eip=0x000192; 	J(JNZ(loc_148ae));	// 8168 jnz     short loc_148AE ;~ 0613:0192
cs=0x613;eip=0x000194; 	X(INC(byte_44783));	// 8169 inc     byte_44783 ;~ 0613:0194
cs=0x613;eip=0x000198; 	X(MOV(word_44700, 0));	// 8170 mov     word_44700, 0 ;~ 0613:0198
loc_148ae:
	// 4784 
cs=0x613;eip=0x00019e; 	X(MOV(byte_44784, 0));	// 8173 mov     byte_44784, 0 ;~ 0613:019E
loc_148b3:
	// 4785 
cs=0x613;eip=0x0001a3; 	T(CMP(byte_44889, 2));	// 8177 cmp     byte_44889, 2 ;~ 0613:01A3
cs=0x613;eip=0x0001a8; 	J(JNZ(loc_148ec));	// 8178 jnz     short loc_148EC ;~ 0613:01A8
loc_148ba:
	// 4786 
cs=0x613;eip=0x0001aa; 	X(PUSH(si));	// 8182 push    si ;~ 0613:01AA
cs=0x613;eip=0x0001ab; 	T(di = bp+var_c);	// 8183 lea     di, [bp+var_C] ;~ 0613:01AB
cs=0x613;eip=0x0001ae; 	T(MOV(si, offset(dseg,word_4475a)));	// 8184 mov     si, offset word_4475A ;~ 0613:01AE
cs=0x613;eip=0x0001b1; 	X(PUSH(ss));	// 8185 push    ss ;~ 0613:01B1
cs=0x613;eip=0x0001b2; 	X(POP(es));	// 8186 pop     es ;~ 0613:01B2
cs=0x613;eip=0x0001b3; 	X(MOVSW);	// 8187 movsw ;~ 0613:01B3
cs=0x613;eip=0x0001b4; 	X(MOVSW);	// 8188 movsw ;~ 0613:01B4
cs=0x613;eip=0x0001b5; 	X(MOVSW);	// 8189 movsw ;~ 0613:01B5
cs=0x613;eip=0x0001b6; 	X(POP(si));	// 8190 pop     si ;~ 0613:01B6
loc_148c7:
	// 4787 
cs=0x613;eip=0x0001b7; 	X(PUSH(si));	// 8194 push    si ;~ 0613:01B7
cs=0x613;eip=0x0001b8; 	T(di = bp+var_26);	// 8195 lea     di, [bp+var_26] ;~ 0613:01B8
cs=0x613;eip=0x0001bb; 	T(si = bp+var_c);	// 8196 lea     si, [bp+var_C] ;~ 0613:01BB
cs=0x613;eip=0x0001be; 	X(PUSH(ss));	// 8197 push    ss ;~ 0613:01BE
cs=0x613;eip=0x0001bf; 	X(POP(es));	// 8198 pop     es ;~ 0613:01BF
cs=0x613;eip=0x0001c0; 	X(MOVSW);	// 8199 movsw ;~ 0613:01C0
cs=0x613;eip=0x0001c1; 	X(MOVSW);	// 8200 movsw ;~ 0613:01C1
cs=0x613;eip=0x0001c2; 	X(MOVSW);	// 8201 movsw ;~ 0613:01C2
cs=0x613;eip=0x0001c3; 	X(POP(si));	// 8202 pop     si ;~ 0613:01C3
cs=0x613;eip=0x0001c4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 8203 mov     ax, [bp+var_28] ;~ 0613:01C4
cs=0x613;eip=0x0001c7; 	X(SUB(*(dw*)(raddr(ss,bp+var_26)), ax));	// 8204 sub     [bp+var_26], ax ;~ 0613:01C7
cs=0x613;eip=0x0001ca; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x0FFFF));	// 8205 cmp     [bp+var_A], 0FFFFh ;~ 0613:01CA
cs=0x613;eip=0x0001ce; 	J(JZ(loc_148e3));	// 8206 jz      short loc_148E3 ;~ 0613:01CE
cs=0x613;eip=0x0001d0; 	J(JMP(loc_14a6e));	// 8207 jmp     loc_14A6E ;~ 0613:01D0
loc_148e3:
	// 4788 
cs=0x613;eip=0x0001d3; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), 0));	// 8211 mov     [bp+var_24], 0 ;~ 0613:01D3
cs=0x613;eip=0x0001d8; 	J(JMP(loc_14a74));	// 8212 jmp     loc_14A74 ;~ 0613:01D8
loc_148ec:
	// 4789 
cs=0x613;eip=0x0001dc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_34))));	// 8217 mov     ax, [bp+var_34] ;~ 0613:01DC
cs=0x613;eip=0x0001df; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_28))));	// 8218 sub     ax, [bp+var_28] ;~ 0613:01DF
cs=0x613;eip=0x0001e2; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), ax));	// 8219 mov     [bp+var_26], ax ;~ 0613:01E2
cs=0x613;eip=0x0001e5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3e))));	// 8220 mov     ax, [bp+var_3E] ;~ 0613:01E5
cs=0x613;eip=0x0001e8; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2a))));	// 8221 sub     ax, [bp+var_2A] ;~ 0613:01E8
cs=0x613;eip=0x0001eb; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 8222 mov     [bp+var_24], ax ;~ 0613:01EB
cs=0x613;eip=0x0001ee; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_40))));	// 8223 mov     ax, [bp+var_40] ;~ 0613:01EE
cs=0x613;eip=0x0001f1; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_36))));	// 8224 sub     ax, [bp+var_36] ;~ 0613:01F1
cs=0x613;eip=0x0001f4; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 8225 mov     [bp+var_22], ax ;~ 0613:01F4
cs=0x613;eip=0x0001f7; 	T(ax = bp+var_1c);	// 8226 lea     ax, [bp+var_1C] ;~ 0613:01F7
cs=0x613;eip=0x0001fa; 	X(PUSH(ax));	// 8227 push    ax ;~ 0613:01FA
cs=0x613;eip=0x0001fb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 8228 push    [bp+var_16] ;~ 0613:01FB
cs=0x613;eip=0x0001fe; 	T(ax = bp+var_26);	// 8229 lea     ax, [bp+var_26] ;~ 0613:01FE
cs=0x613;eip=0x000201; 	X(PUSH(ax));	// 8230 push    ax ;~ 0613:0201
cs=0x613;eip=0x000202; 	J(CALLF(mat_mul_vector,0));	// 8231 call    mat_mul_vector ;~ 0613:0202
cs=0x613;eip=0x000207; 	T(ADD(sp, 6));	// 8232 add     sp, 6 ;~ 0613:0207
cs=0x613;eip=0x00020a; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), 0x5A));	// 8233 cmp     [bp+var_1A], 5Ah ; 'Z' ;~ 0613:020A
cs=0x613;eip=0x00020e; 	J(JG(loc_148ba));	// 8234 jg      short loc_148BA ;~ 0613:020E
cs=0x613;eip=0x000210; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), 0));	// 8235 cmp     [bp+var_1C], 0 ;~ 0613:0210
cs=0x613;eip=0x000214; 	J(JGE(loc_1492e));	// 8236 jge     short loc_1492E ;~ 0613:0214
cs=0x613;eip=0x000216; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 8237 mov     ax, [bp+var_1C] ;~ 0613:0216
cs=0x613;eip=0x000219; 	T(NEG(ax));	// 8238 neg     ax ;~ 0613:0219
cs=0x613;eip=0x00021b; 	J(JMP(loc_14931));	// 8239 jmp     short loc_14931 ;~ 0613:021B
loc_1492e:
	// 4790 
cs=0x613;eip=0x00021e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 8244 mov     ax, [bp+var_1C] ;~ 0613:021E
loc_14931:
	// 4791 
cs=0x613;eip=0x000221; 	T(CMP(ax, 0x0B4));	// 8247 cmp     ax, 0B4h ; '´' ;~ 0613:0221
cs=0x613;eip=0x000224; 	J(JG(loc_148ba));	// 8248 jg      short loc_148BA ;~ 0613:0224
cs=0x613;eip=0x000226; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x258));	// 8249 cmp     [bp+var_18], 258h ;~ 0613:0226
cs=0x613;eip=0x00022b; 	J(JLE(loc_14940));	// 8250 jle     short loc_14940 ;~ 0613:022B
cs=0x613;eip=0x00022d; 	J(JMP(loc_148ba));	// 8251 jmp     loc_148BA ;~ 0613:022D
loc_14940:
	// 4792 
cs=0x613;eip=0x000230; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF4C));	// 8255 cmp     [bp+var_18], 0FF4Ch ;~ 0613:0230
cs=0x613;eip=0x000235; 	J(JGE(loc_1494a));	// 8256 jge     short loc_1494A ;~ 0613:0235
cs=0x613;eip=0x000237; 	J(JMP(loc_148ba));	// 8257 jmp     loc_148BA ;~ 0613:0237
loc_1494a:
	// 4793 
cs=0x613;eip=0x00023a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_34))));	// 8261 mov     ax, [bp+var_34] ;~ 0613:023A
cs=0x613;eip=0x00023d; 	T(SUB(ax, word_4475a));	// 8262 sub     ax, word_4475A ;~ 0613:023D
cs=0x613;eip=0x000241; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), ax));	// 8263 mov     [bp+var_26], ax ;~ 0613:0241
cs=0x613;eip=0x000244; 	T(CMP(word_4475c, 0x0FFFF));	// 8264 cmp     word_4475C, 0FFFFh ;~ 0613:0244
cs=0x613;eip=0x000249; 	J(JNZ(loc_14962));	// 8265 jnz     short loc_14962 ;~ 0613:0249
cs=0x613;eip=0x00024b; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), 0));	// 8266 mov     [bp+var_24], 0 ;~ 0613:024B
cs=0x613;eip=0x000250; 	J(JMP(loc_1496c));	// 8267 jmp     short loc_1496C ;~ 0613:0250
loc_14962:
	// 4794 
cs=0x613;eip=0x000252; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3e))));	// 8271 mov     ax, [bp+var_3E] ;~ 0613:0252
cs=0x613;eip=0x000255; 	T(SUB(ax, word_4475c));	// 8272 sub     ax, word_4475C ;~ 0613:0255
cs=0x613;eip=0x000259; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 8273 mov     [bp+var_24], ax ;~ 0613:0259
loc_1496c:
	// 4795 
cs=0x613;eip=0x00025c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_40))));	// 8276 mov     ax, [bp+var_40] ;~ 0613:025C
cs=0x613;eip=0x00025f; 	T(SUB(ax, word_4475e));	// 8277 sub     ax, word_4475E ;~ 0613:025F
cs=0x613;eip=0x000263; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 8278 mov     [bp+var_22], ax ;~ 0613:0263
cs=0x613;eip=0x000266; 	T(ax = bp+var_6);	// 8279 lea     ax, [bp+var_6] ;~ 0613:0266
cs=0x613;eip=0x000269; 	X(PUSH(ax));	// 8280 push    ax ;~ 0613:0269
cs=0x613;eip=0x00026a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 8281 push    [bp+var_16] ;~ 0613:026A
cs=0x613;eip=0x00026d; 	T(ax = bp+var_26);	// 8282 lea     ax, [bp+var_26] ;~ 0613:026D
cs=0x613;eip=0x000270; 	X(PUSH(ax));	// 8283 push    ax ;~ 0613:0270
cs=0x613;eip=0x000271; 	J(CALLF(mat_mul_vector,0));	// 8284 call    mat_mul_vector ;~ 0613:0271
cs=0x613;eip=0x000276; 	T(ADD(sp, 6));	// 8285 add     sp, 6 ;~ 0613:0276
cs=0x613;eip=0x000279; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0));	// 8286 cmp     [bp+var_6], 0 ;~ 0613:0279
cs=0x613;eip=0x00027d; 	J(JGE(loc_149fe));	// 8287 jge     short loc_149FE ;~ 0613:027D
cs=0x613;eip=0x00027f; 	T(MOV(ax, word_44766));	// 8288 mov     ax, word_44766 ;~ 0613:027F
cs=0x613;eip=0x000282; 	T(CWD);	// 8289 cwd ;~ 0613:0282
cs=0x613;eip=0x000283; 	T(MOV(cx, ax));	// 8290 mov     cx, ax ;~ 0613:0283
cs=0x613;eip=0x000285; 	T(MOV(ax, word_4475a));	// 8291 mov     ax, word_4475A ;~ 0613:0285
cs=0x613;eip=0x000288; 	T(MOV(bx, dx));	// 8292 mov     bx, dx ;~ 0613:0288
cs=0x613;eip=0x00028a; 	T(CWD);	// 8293 cwd ;~ 0613:028A
cs=0x613;eip=0x00028b; 	T(ADD(ax, cx));	// 8294 add     ax, cx ;~ 0613:028B
cs=0x613;eip=0x00028d; 	T(ADC(dx, bx));	// 8295 adc     dx, bx ;~ 0613:028D
cs=0x613;eip=0x00028f; 	T(SAR(dx, 1));	// 8296 sar     dx, 1 ;~ 0613:028F
cs=0x613;eip=0x000291; 	T(RCR(ax, 1));	// 8297 rcr     ax, 1 ;~ 0613:0291
cs=0x613;eip=0x000293; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 8298 mov     [bp+var_C], ax ;~ 0613:0293
cs=0x613;eip=0x000296; 	T(CMP(word_4475c, 0x0FFFF));	// 8299 cmp     word_4475C, 0FFFFh ;~ 0613:0296
cs=0x613;eip=0x00029b; 	J(JNZ(loc_149b4));	// 8300 jnz     short loc_149B4 ;~ 0613:029B
cs=0x613;eip=0x00029d; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x0FFFF));	// 8301 mov     [bp+var_A], 0FFFFh ;~ 0613:029D
cs=0x613;eip=0x0002a2; 	J(JMP(loc_149cb));	// 8302 jmp     short loc_149CB ;~ 0613:02A2
loc_149b4:
	// 4796 
cs=0x613;eip=0x0002a4; 	T(MOV(ax, word_44768));	// 8306 mov     ax, word_44768 ;~ 0613:02A4
cs=0x613;eip=0x0002a7; 	T(CWD);	// 8307 cwd ;~ 0613:02A7
cs=0x613;eip=0x0002a8; 	T(MOV(cx, ax));	// 8308 mov     cx, ax ;~ 0613:02A8
cs=0x613;eip=0x0002aa; 	T(MOV(ax, word_4475c));	// 8309 mov     ax, word_4475C ;~ 0613:02AA
cs=0x613;eip=0x0002ad; 	T(MOV(bx, dx));	// 8310 mov     bx, dx ;~ 0613:02AD
cs=0x613;eip=0x0002af; 	T(CWD);	// 8311 cwd ;~ 0613:02AF
cs=0x613;eip=0x0002b0; 	T(ADD(ax, cx));	// 8312 add     ax, cx ;~ 0613:02B0
cs=0x613;eip=0x0002b2; 	T(ADC(dx, bx));	// 8313 adc     dx, bx ;~ 0613:02B2
cs=0x613;eip=0x0002b4; 	T(SAR(dx, 1));	// 8314 sar     dx, 1 ;~ 0613:02B4
cs=0x613;eip=0x0002b6; 	T(RCR(ax, 1));	// 8315 rcr     ax, 1 ;~ 0613:02B6
cs=0x613;eip=0x0002b8; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 8316 mov     [bp+var_A], ax ;~ 0613:02B8
loc_149cb:
	// 4797 
cs=0x613;eip=0x0002bb; 	T(MOV(ax, word_4476a));	// 8319 mov     ax, word_4476A ;~ 0613:02BB
cs=0x613;eip=0x0002be; 	T(CWD);	// 8320 cwd ;~ 0613:02BE
cs=0x613;eip=0x0002bf; 	T(MOV(cx, ax));	// 8321 mov     cx, ax ;~ 0613:02BF
cs=0x613;eip=0x0002c1; 	T(MOV(ax, word_4475e));	// 8322 mov     ax, word_4475E ;~ 0613:02C1
cs=0x613;eip=0x0002c4; 	T(MOV(bx, dx));	// 8323 mov     bx, dx ;~ 0613:02C4
cs=0x613;eip=0x0002c6; 	T(CWD);	// 8324 cwd ;~ 0613:02C6
cs=0x613;eip=0x0002c7; 	T(ADD(ax, cx));	// 8325 add     ax, cx ;~ 0613:02C7
cs=0x613;eip=0x0002c9; 	T(ADC(dx, bx));	// 8326 adc     dx, bx ;~ 0613:02C9
cs=0x613;eip=0x0002cb; 	T(SAR(dx, 1));	// 8327 sar     dx, 1 ;~ 0613:02CB
cs=0x613;eip=0x0002cd; 	T(RCR(ax, 1));	// 8328 rcr     ax, 1 ;~ 0613:02CD
cs=0x613;eip=0x0002cf; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 8329 mov     [bp+var_8], ax ;~ 0613:02CF
cs=0x613;eip=0x0002d2; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FFB2));	// 8330 cmp     [bp+var_18], 0FFB2h ;~ 0613:02D2
cs=0x613;eip=0x0002d6; 	J(JG(loc_149eb));	// 8331 jg      short loc_149EB ;~ 0613:02D6
cs=0x613;eip=0x0002d8; 	J(JMP(loc_148c7));	// 8332 jmp     loc_148C7 ;~ 0613:02D8
loc_149eb:
	// 4798 
cs=0x613;eip=0x0002db; 	T(CMP(byte_446af, 0));	// 8336 cmp     byte_446AF, 0 ;~ 0613:02DB
cs=0x613;eip=0x0002e0; 	J(JZ(loc_149f5));	// 8337 jz      short loc_149F5 ;~ 0613:02E0
cs=0x613;eip=0x0002e2; 	J(JMP(loc_148c7));	// 8338 jmp     loc_148C7 ;~ 0613:02E2
loc_149f5:
	// 4799 
cs=0x613;eip=0x0002e5; 	X(MOV(byte_448f2, 2));	// 8342 mov     byte_448F2, 2 ;~ 0613:02E5
cs=0x613;eip=0x0002ea; 	J(JMP(loc_148c7));	// 8343 jmp     loc_148C7 ;~ 0613:02EA
loc_149fe:
	// 4800 
cs=0x613;eip=0x0002ee; 	T(MOV(ax, word_44760));	// 8348 mov     ax, word_44760 ;~ 0613:02EE
cs=0x613;eip=0x0002f1; 	T(CWD);	// 8349 cwd ;~ 0613:02F1
cs=0x613;eip=0x0002f2; 	T(MOV(cx, ax));	// 8350 mov     cx, ax ;~ 0613:02F2
cs=0x613;eip=0x0002f4; 	T(MOV(ax, word_4475a));	// 8351 mov     ax, word_4475A ;~ 0613:02F4
cs=0x613;eip=0x0002f7; 	T(MOV(bx, dx));	// 8352 mov     bx, dx ;~ 0613:02F7
cs=0x613;eip=0x0002f9; 	T(CWD);	// 8353 cwd ;~ 0613:02F9
cs=0x613;eip=0x0002fa; 	T(ADD(ax, cx));	// 8354 add     ax, cx ;~ 0613:02FA
cs=0x613;eip=0x0002fc; 	T(ADC(dx, bx));	// 8355 adc     dx, bx ;~ 0613:02FC
cs=0x613;eip=0x0002fe; 	T(SAR(dx, 1));	// 8356 sar     dx, 1 ;~ 0613:02FE
cs=0x613;eip=0x000300; 	T(RCR(ax, 1));	// 8357 rcr     ax, 1 ;~ 0613:0300
cs=0x613;eip=0x000302; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 8358 mov     [bp+var_C], ax ;~ 0613:0302
cs=0x613;eip=0x000305; 	T(CMP(word_4475c, 0x0FFFF));	// 8359 cmp     word_4475C, 0FFFFh ;~ 0613:0305
cs=0x613;eip=0x00030a; 	J(JNZ(loc_14a24));	// 8360 jnz     short loc_14A24 ;~ 0613:030A
cs=0x613;eip=0x00030c; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x0FFFF));	// 8361 mov     [bp+var_A], 0FFFFh ;~ 0613:030C
cs=0x613;eip=0x000311; 	J(JMP(loc_14a3b));	// 8362 jmp     short loc_14A3B ;~ 0613:0311
loc_14a24:
	// 4801 
cs=0x613;eip=0x000314; 	T(MOV(ax, word_44762));	// 8367 mov     ax, word_44762 ;~ 0613:0314
cs=0x613;eip=0x000317; 	T(CWD);	// 8368 cwd ;~ 0613:0317
cs=0x613;eip=0x000318; 	T(MOV(cx, ax));	// 8369 mov     cx, ax ;~ 0613:0318
cs=0x613;eip=0x00031a; 	T(MOV(ax, word_4475c));	// 8370 mov     ax, word_4475C ;~ 0613:031A
cs=0x613;eip=0x00031d; 	T(MOV(bx, dx));	// 8371 mov     bx, dx ;~ 0613:031D
cs=0x613;eip=0x00031f; 	T(CWD);	// 8372 cwd ;~ 0613:031F
cs=0x613;eip=0x000320; 	T(ADD(ax, cx));	// 8373 add     ax, cx ;~ 0613:0320
cs=0x613;eip=0x000322; 	T(ADC(dx, bx));	// 8374 adc     dx, bx ;~ 0613:0322
cs=0x613;eip=0x000324; 	T(SAR(dx, 1));	// 8375 sar     dx, 1 ;~ 0613:0324
cs=0x613;eip=0x000326; 	T(RCR(ax, 1));	// 8376 rcr     ax, 1 ;~ 0613:0326
cs=0x613;eip=0x000328; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 8377 mov     [bp+var_A], ax ;~ 0613:0328
loc_14a3b:
	// 4802 
cs=0x613;eip=0x00032b; 	T(MOV(ax, word_44764));	// 8380 mov     ax, word_44764 ;~ 0613:032B
cs=0x613;eip=0x00032e; 	T(CWD);	// 8381 cwd ;~ 0613:032E
cs=0x613;eip=0x00032f; 	T(MOV(cx, ax));	// 8382 mov     cx, ax ;~ 0613:032F
cs=0x613;eip=0x000331; 	T(MOV(ax, word_4475e));	// 8383 mov     ax, word_4475E ;~ 0613:0331
cs=0x613;eip=0x000334; 	T(MOV(bx, dx));	// 8384 mov     bx, dx ;~ 0613:0334
cs=0x613;eip=0x000336; 	T(CWD);	// 8385 cwd ;~ 0613:0336
cs=0x613;eip=0x000337; 	T(ADD(ax, cx));	// 8386 add     ax, cx ;~ 0613:0337
cs=0x613;eip=0x000339; 	T(ADC(dx, bx));	// 8387 adc     dx, bx ;~ 0613:0339
cs=0x613;eip=0x00033b; 	T(SAR(dx, 1));	// 8388 sar     dx, 1 ;~ 0613:033B
cs=0x613;eip=0x00033d; 	T(RCR(ax, 1));	// 8389 rcr     ax, 1 ;~ 0613:033D
cs=0x613;eip=0x00033f; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 8390 mov     [bp+var_8], ax ;~ 0613:033F
cs=0x613;eip=0x000342; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FFB2));	// 8391 cmp     [bp+var_18], 0FFB2h ;~ 0613:0342
cs=0x613;eip=0x000346; 	J(JG(loc_14a5b));	// 8392 jg      short loc_14A5B ;~ 0613:0346
cs=0x613;eip=0x000348; 	J(JMP(loc_148c7));	// 8393 jmp     loc_148C7 ;~ 0613:0348
loc_14a5b:
	// 4803 
cs=0x613;eip=0x00034b; 	T(CMP(byte_446af, 0));	// 8397 cmp     byte_446AF, 0 ;~ 0613:034B
cs=0x613;eip=0x000350; 	J(JZ(loc_14a65));	// 8398 jz      short loc_14A65 ;~ 0613:0350
cs=0x613;eip=0x000352; 	J(JMP(loc_148c7));	// 8399 jmp     loc_148C7 ;~ 0613:0352
loc_14a65:
	// 4804 
cs=0x613;eip=0x000355; 	X(MOV(byte_448f2, 1));	// 8403 mov     byte_448F2, 1 ;~ 0613:0355
cs=0x613;eip=0x00035a; 	J(JMP(loc_148c7));	// 8404 jmp     loc_148C7 ;~ 0613:035A
loc_14a6e:
	// 4805 
cs=0x613;eip=0x00035e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2a))));	// 8409 mov     ax, [bp+var_2A] ;~ 0613:035E
cs=0x613;eip=0x000361; 	X(SUB(*(dw*)(raddr(ss,bp+var_24)), ax));	// 8410 sub     [bp+var_24], ax ;~ 0613:0361
loc_14a74:
	// 4806 
cs=0x613;eip=0x000364; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_36))));	// 8413 mov     ax, [bp+var_36] ;~ 0613:0364
cs=0x613;eip=0x000367; 	X(SUB(*(dw*)(raddr(ss,bp+var_22)), ax));	// 8414 sub     [bp+var_22], ax ;~ 0613:0367
cs=0x613;eip=0x00036a; 	T(ax = bp+var_3c);	// 8415 lea     ax, [bp+var_3C] ;~ 0613:036A
cs=0x613;eip=0x00036d; 	X(PUSH(ax));	// 8416 push    ax ;~ 0613:036D
cs=0x613;eip=0x00036e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 8417 push    [bp+var_16] ;~ 0613:036E
cs=0x613;eip=0x000371; 	T(ax = bp+var_26);	// 8418 lea     ax, [bp+var_26] ;~ 0613:0371
cs=0x613;eip=0x000374; 	X(PUSH(ax));	// 8419 push    ax ;~ 0613:0374
cs=0x613;eip=0x000375; 	J(CALLF(mat_mul_vector,0));	// 8420 call    mat_mul_vector ;~ 0613:0375
cs=0x613;eip=0x00037a; 	T(ADD(sp, 6));	// 8421 add     sp, 6 ;~ 0613:037A
cs=0x613;eip=0x00037d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 8422 push    [bp+var_38] ;~ 0613:037D
cs=0x613;eip=0x000380; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3c))));	// 8423 push    [bp+var_3C] ;~ 0613:0380
cs=0x613;eip=0x000383; 	J(CALLF(polarangle,0));	// 8424 call    polarAngle ;~ 0613:0383
cs=0x613;eip=0x000388; 	T(ADD(sp, 4));	// 8425 add     sp, 4 ;~ 0613:0388
cs=0x613;eip=0x00038b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 8426 mov     [bp+var_2C], ax ;~ 0613:038B
cs=0x613;eip=0x00038e; 	T(CMP(byte_4477d, 0));	// 8427 cmp     byte_4477D, 0 ;~ 0613:038E
cs=0x613;eip=0x000393; 	J(JNZ(loc_14b03));	// 8428 jnz     short loc_14B03 ;~ 0613:0393
cs=0x613;eip=0x000395; 	T(OR(ax, ax));	// 8429 or      ax, ax ;~ 0613:0395
cs=0x613;eip=0x000397; 	J(JGE(loc_14aae));	// 8430 jge     short loc_14AAE ;~ 0613:0397
cs=0x613;eip=0x000399; 	T(NEG(ax));	// 8431 neg     ax ;~ 0613:0399
cs=0x613;eip=0x00039b; 	J(JMP(loc_14ab1));	// 8432 jmp     short loc_14AB1 ;~ 0613:039B
loc_14aae:
	// 4807 
cs=0x613;eip=0x00039e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 8437 mov     ax, [bp+var_2C] ;~ 0613:039E
loc_14ab1:
	// 4808 
cs=0x613;eip=0x0003a1; 	T(CMP(ax, 0x100));	// 8440 cmp     ax, 100h ;~ 0613:03A1
cs=0x613;eip=0x0003a4; 	J(JLE(loc_14b03));	// 8441 jle     short loc_14B03 ;~ 0613:03A4
cs=0x613;eip=0x0003a6; 	T(MOV(ax, offset(dseg,byte_4488d)));	// 8442 mov     ax, offset byte_4488D ;~ 0613:03A6
cs=0x613;eip=0x0003a9; 	X(PUSH(ax));	// 8443 push    ax ;~ 0613:03A9
cs=0x613;eip=0x0003aa; 	T(MOV(al, byte_44784));	// 8444 mov     al, byte_44784 ;~ 0613:03AA
cs=0x613;eip=0x0003ad; 	X(INC(byte_44784));	// 8445 inc     byte_44784 ;~ 0613:03AD
cs=0x613;eip=0x0003b1; 	T(SUB(ah, ah));	// 8446 sub     ah, ah ;~ 0613:03B1
cs=0x613;eip=0x0003b3; 	X(PUSH(ax));	// 8447 push    ax ;~ 0613:03B3
cs=0x613;eip=0x0003b4; 	T(MOV(ax, offset(dseg,word_4475a)));	// 8448 mov     ax, offset word_4475A ;~ 0613:03B4
cs=0x613;eip=0x0003b7; 	X(PUSH(ax));	// 8449 push    ax ;~ 0613:03B7
cs=0x613;eip=0x0003b8; 	T(MOV(bx, word_44700));	// 8450 mov     bx, word_44700 ;~ 0613:03B8
cs=0x613;eip=0x0003bc; 	T(SHL(bx, 1));	// 8451 shl     bx, 1 ;~ 0613:03BC
cs=0x613;eip=0x0003be; 	T(LES(di, trackdata3));	// 8452 les     di, trackdata3 ;~ 0613:03BE
cs=0x613;eip=0x0003c2; 	X(PUSH(*(dw*)(raddr(es,bx+di))));	// 8453 push    word ptr es:[bx+di] ;~ 0613:03C2
cs=0x613;eip=0x0003c5; 	X(PUSH(cs));	// 8454 push    cs ;~ 0613:03C5
cs=0x613;eip=0x0003c6; 	J(CALL(sub_18d60,0));	// 8455 call    near ptr sub_18D60 ;~ 0613:03C6
cs=0x613;eip=0x0003c9; 	T(ADD(sp, 8));	// 8456 add     sp, 8 ;~ 0613:03C9
cs=0x613;eip=0x0003cc; 	T(OR(al, al));	// 8457 or      al, al ;~ 0613:03CC
cs=0x613;eip=0x0003ce; 	J(JZ(loc_14b03));	// 8458 jz      short loc_14B03 ;~ 0613:03CE
cs=0x613;eip=0x0003d0; 	X(INC(word_44700));	// 8459 inc     word_44700 ;~ 0613:03D0
cs=0x613;eip=0x0003d4; 	T(MOV(bx, word_44700));	// 8460 mov     bx, word_44700 ;~ 0613:03D4
cs=0x613;eip=0x0003d8; 	T(SHL(bx, 1));	// 8461 shl     bx, 1 ;~ 0613:03D8
cs=0x613;eip=0x0003da; 	T(LES(di, trackdata3));	// 8462 les     di, trackdata3 ;~ 0613:03DA
cs=0x613;eip=0x0003de; 	T(CMP(*(dw*)(raddr(es,bx+di)), 0));	// 8463 cmp     word ptr es:[bx+di], 0 ;~ 0613:03DE
cs=0x613;eip=0x0003e2; 	J(JNZ(loc_14afe));	// 8464 jnz     short loc_14AFE ;~ 0613:03E2
cs=0x613;eip=0x0003e4; 	X(INC(byte_44783));	// 8465 inc     byte_44783 ;~ 0613:03E4
cs=0x613;eip=0x0003e8; 	X(MOV(word_44700, 0));	// 8466 mov     word_44700, 0 ;~ 0613:03E8
loc_14afe:
	// 4809 
cs=0x613;eip=0x0003ee; 	X(MOV(byte_44784, 0));	// 8469 mov     byte_44784, 0 ;~ 0613:03EE
loc_14b03:
	// 4810 
cs=0x613;eip=0x0003f3; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x41));	// 8473 cmp     [bp+var_2C], 41h ; 'A' ;~ 0613:03F3
cs=0x613;eip=0x0003f7; 	J(JLE(loc_14b1e));	// 8474 jle     short loc_14B1E ;~ 0613:03F7
cs=0x613;eip=0x0003f9; 	T(CMP(*(raddr(ss,bp+var_20)), 0));	// 8475 cmp     [bp+var_20], 0 ;~ 0613:03F9
cs=0x613;eip=0x0003fd; 	J(JNZ(loc_14b16));	// 8476 jnz     short loc_14B16 ;~ 0613:03FD
loc_14b0f:
	// 4811 
cs=0x613;eip=0x0003ff; 	X(MOV(*(raddr(ss,bp+var_20)), 1));	// 8479 mov     [bp+var_20], 1 ;~ 0613:03FF
cs=0x613;eip=0x000403; 	J(JMP(loc_14866));	// 8480 jmp     loc_14866 ;~ 0613:0403
loc_14b16:
	// 4812 
cs=0x613;eip=0x000406; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), 0x41));	// 8484 mov     [bp+var_2C], 41h ; 'A' ;~ 0613:0406
cs=0x613;eip=0x00040b; 	J(JMP(loc_14b2f));	// 8485 jmp     short loc_14B2F ;~ 0613:040B
loc_14b1e:
	// 4813 
cs=0x613;eip=0x00040e; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FFBF));	// 8490 cmp     [bp+var_2C], 0FFBFh ;~ 0613:040E
cs=0x613;eip=0x000412; 	J(JGE(loc_14b2f));	// 8491 jge     short loc_14B2F ;~ 0613:0412
cs=0x613;eip=0x000414; 	T(CMP(*(raddr(ss,bp+var_20)), 0));	// 8492 cmp     [bp+var_20], 0 ;~ 0613:0414
cs=0x613;eip=0x000418; 	J(JZ(loc_14b0f));	// 8493 jz      short loc_14B0F ;~ 0613:0418
cs=0x613;eip=0x00041a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), 0x0FFBF));	// 8494 mov     [bp+var_2C], 0FFBFh ;~ 0613:041A
loc_14b2f:
	// 4814 
cs=0x613;eip=0x00041f; 	T(CMP(byte_44775, 0));	// 8498 cmp     byte_44775, 0 ;~ 0613:041F
cs=0x613;eip=0x000424; 	J(JNZ(loc_14b3b));	// 8499 jnz     short loc_14B3B ;~ 0613:0424
cs=0x613;eip=0x000426; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 8500 mov     [bp+var_2C], 0 ;~ 0613:0426
loc_14b3b:
	// 4815 
cs=0x613;eip=0x00042b; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2c))));	// 8503 mov     si, [bp+var_2C] ;~ 0613:042B
cs=0x613;eip=0x00042e; 	T(SUB(si, word_446d6));	// 8504 sub     si, word_446D6 ;~ 0613:042E
cs=0x613;eip=0x000432; 	J(JNS(loc_14b4a));	// 8505 jns     short loc_14B4A ;~ 0613:0432
cs=0x613;eip=0x000434; 	T(MOV(ax, si));	// 8506 mov     ax, si ;~ 0613:0434
cs=0x613;eip=0x000436; 	T(NEG(ax));	// 8507 neg     ax ;~ 0613:0436
cs=0x613;eip=0x000438; 	J(JMP(loc_14b4c));	// 8508 jmp     short loc_14B4C ;~ 0613:0438
loc_14b4a:
	// 4816 
cs=0x613;eip=0x00043a; 	T(MOV(ax, si));	// 8512 mov     ax, si ;~ 0613:043A
loc_14b4c:
	// 4817 
cs=0x613;eip=0x00043c; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_14))));	// 8515 cmp     ax, [bp+var_14] ;~ 0613:043C
cs=0x613;eip=0x00043f; 	J(JLE(loc_14b6c));	// 8516 jle     short loc_14B6C ;~ 0613:043F
cs=0x613;eip=0x000441; 	T(MOV(ax, word_446d6));	// 8517 mov     ax, word_446D6 ;~ 0613:0441
cs=0x613;eip=0x000444; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 8518 cmp     [bp+var_2C], ax ;~ 0613:0444
cs=0x613;eip=0x000447; 	J(JGE(loc_14b62));	// 8519 jge     short loc_14B62 ;~ 0613:0447
cs=0x613;eip=0x000449; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 8520 mov     ax, [bp+var_14] ;~ 0613:0449
cs=0x613;eip=0x00044c; 	X(SUB(word_446d6, ax));	// 8521 sub     word_446D6, ax ;~ 0613:044C
cs=0x613;eip=0x000450; 	J(JMP(loc_14b72));	// 8522 jmp     short loc_14B72 ;~ 0613:0450
loc_14b62:
	// 4818 
cs=0x613;eip=0x000452; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 8526 mov     ax, [bp+var_14] ;~ 0613:0452
cs=0x613;eip=0x000455; 	X(ADD(word_446d6, ax));	// 8527 add     word_446D6, ax ;~ 0613:0455
cs=0x613;eip=0x000459; 	J(JMP(loc_14b72));	// 8528 jmp     short loc_14B72 ;~ 0613:0459
loc_14b6c:
	// 4819 
cs=0x613;eip=0x00045c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 8533 mov     ax, [bp+var_2C] ;~ 0613:045C
cs=0x613;eip=0x00045f; 	X(MOV(word_446d6, ax));	// 8534 mov     word_446D6, ax ;~ 0613:045F
loc_14b72:
	// 4820 
cs=0x613;eip=0x000462; 	X(MOV(*(raddr(ss,bp+var_e)), 0));	// 8538 mov     [bp+var_E], 0 ;~ 0613:0462
cs=0x613;eip=0x000466; 	T(CMP(byte_44776, 0));	// 8539 cmp     byte_44776, 0 ;~ 0613:0466
cs=0x613;eip=0x00046b; 	J(JZ(loc_14bfa));	// 8540 jz      short loc_14BFA ;~ 0613:046B
cs=0x613;eip=0x00046d; 	T(CMP(byte_4477f, 0));	// 8541 cmp     byte_4477F, 0 ;~ 0613:046D
cs=0x613;eip=0x000472; 	J(JNZ(loc_14bf6));	// 8542 jnz     short loc_14BF6 ;~ 0613:0472
cs=0x613;eip=0x000474; 	T(CMP(word_446ec, 0));	// 8543 cmp     word_446EC, 0 ;~ 0613:0474
cs=0x613;eip=0x000479; 	J(JZ(loc_14bb6));	// 8544 jz      short loc_14BB6 ;~ 0613:0479
cs=0x613;eip=0x00047b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 8545 mov     ax, [bp+var_10] ;~ 0613:047B
cs=0x613;eip=0x00047e; 	T(MOV(cl, 9));	// 8546 mov     cl, 9 ;~ 0613:047E
cs=0x613;eip=0x000480; 	T(SHL(ax, cl));	// 8547 shl     ax, cl ;~ 0613:0480
cs=0x613;eip=0x000482; 	T(CMP(ax, word_446e2));	// 8548 cmp     ax, word_446E2 ;~ 0613:0482
cs=0x613;eip=0x000486; 	J(JBE(loc_14ba8));	// 8549 jbe     short loc_14BA8 ;~ 0613:0486
cs=0x613;eip=0x000488; 	X(MOV(word_446e2, 0));	// 8550 mov     word_446E2, 0 ;~ 0613:0488
cs=0x613;eip=0x00048e; 	X(MOV(word_446ec, 0));	// 8551 mov     word_446EC, 0 ;~ 0613:048E
cs=0x613;eip=0x000494; 	J(JMP(loc_14bfa));	// 8552 jmp     short loc_14BFA ;~ 0613:0494
loc_14ba8:
	// 4821 
cs=0x613;eip=0x000498; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 8558 mov     ax, [bp+var_10] ;~ 0613:0498
cs=0x613;eip=0x00049b; 	T(MOV(cl, 9));	// 8559 mov     cl, 9 ;~ 0613:049B
cs=0x613;eip=0x00049d; 	T(SHL(ax, cl));	// 8560 shl     ax, cl ;~ 0613:049D
cs=0x613;eip=0x00049f; 	X(SUB(word_446e2, ax));	// 8561 sub     word_446E2, ax ;~ 0613:049F
cs=0x613;eip=0x0004a3; 	J(JMP(loc_14bfa));	// 8562 jmp     short loc_14BFA ;~ 0613:04A3
loc_14bb6:
	// 4822 
cs=0x613;eip=0x0004a6; 	T(MOV(ax, word_446fc));	// 8567 mov     ax, word_446FC ;~ 0613:04A6
cs=0x613;eip=0x0004a9; 	T(CMP(word_446fa, ax));	// 8568 cmp     word_446FA, ax ;~ 0613:04A9
cs=0x613;eip=0x0004ad; 	J(JG(loc_14bf6));	// 8569 jg      short loc_14BF6 ;~ 0613:04AD
cs=0x613;eip=0x0004af; 	T(CMP(byte_44889, 2));	// 8570 cmp     byte_44889, 2 ;~ 0613:04AF
cs=0x613;eip=0x0004b4; 	J(JNZ(loc_14bce));	// 8571 jnz     short loc_14BCE ;~ 0613:04B4
cs=0x613;eip=0x0004b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 0x4000));	// 8572 mov     [bp+var_12], 4000h ;~ 0613:04B6
cs=0x613;eip=0x0004bb; 	J(JMP(loc_14bd7));	// 8573 jmp     short loc_14BD7 ;~ 0613:04BB
loc_14bce:
	// 4823 
cs=0x613;eip=0x0004be; 	T(MOV(ah, byte_4488d));	// 8578 mov     ah, byte_4488D ;~ 0613:04BE
cs=0x613;eip=0x0004c2; 	T(SUB(al, al));	// 8579 sub     al, al ;~ 0613:04C2
cs=0x613;eip=0x0004c4; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 8580 mov     [bp+var_12], ax ;~ 0613:04C4
loc_14bd7:
	// 4824 
cs=0x613;eip=0x0004c7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 8583 mov     ax, [bp+var_12] ;~ 0613:04C7
cs=0x613;eip=0x0004ca; 	T(SUB(ax, 0x100));	// 8584 sub     ax, 100h ;~ 0613:04CA
cs=0x613;eip=0x0004cd; 	T(CMP(ax, word_446e0));	// 8585 cmp     ax, word_446E0 ;~ 0613:04CD
cs=0x613;eip=0x0004d1; 	J(JBE(loc_14bea));	// 8586 jbe     short loc_14BEA ;~ 0613:04D1
cs=0x613;eip=0x0004d3; 	X(MOV(*(raddr(ss,bp+var_e)), 1));	// 8587 mov     [bp+var_E], 1 ;~ 0613:04D3
cs=0x613;eip=0x0004d7; 	J(JMP(loc_14bfa));	// 8588 jmp     short loc_14BFA ;~ 0613:04D7
loc_14bea:
	// 4825 
cs=0x613;eip=0x0004da; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 8593 mov     ax, [bp+var_12] ;~ 0613:04DA
cs=0x613;eip=0x0004dd; 	T(ADD(ah, 3));	// 8594 add     ah, 3 ;~ 0613:04DD
cs=0x613;eip=0x0004e0; 	T(CMP(ax, word_446e0));	// 8595 cmp     ax, word_446E0 ;~ 0613:04E0
cs=0x613;eip=0x0004e4; 	J(JNC(loc_14bfa));	// 8596 jnb     short loc_14BFA ;~ 0613:04E4
loc_14bf6:
	// 4826 
cs=0x613;eip=0x0004e6; 	X(MOV(*(raddr(ss,bp+var_e)), 2));	// 8600 mov     [bp+var_E], 2 ;~ 0613:04E6
loc_14bfa:
	// 4827 
cs=0x613;eip=0x0004ea; 	T(MOV(ax, offset(dseg,simd_opponent)));	// 8604 mov     ax, offset simd_opponent ;~ 0613:04EA
cs=0x613;eip=0x0004ed; 	X(PUSH(ax));	// 8605 push    ax ;~ 0613:04ED
cs=0x613;eip=0x0004ee; 	T(MOV(ax, offset(dseg,word_446b6)));	// 8606 mov     ax, offset word_446B6 ;~ 0613:04EE
cs=0x613;eip=0x0004f1; 	X(PUSH(ax));	// 8607 push    ax ;~ 0613:04F1
cs=0x613;eip=0x0004f2; 	T(MOV(ax, 1));	// 8608 mov     ax, 1 ;~ 0613:04F2
cs=0x613;eip=0x0004f5; 	X(PUSH(ax));	// 8609 push    ax ;~ 0613:04F5
cs=0x613;eip=0x0004f6; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 8610 mov     al, [bp+var_E] ;~ 0613:04F6
cs=0x613;eip=0x0004f9; 	T(CBW);	// 8611 cbw ;~ 0613:04F9
cs=0x613;eip=0x0004fa; 	X(PUSH(ax));	// 8612 push    ax ;~ 0613:04FA
cs=0x613;eip=0x0004fb; 	X(PUSH(cs));	// 8613 push    cs ;~ 0613:04FB
cs=0x613;eip=0x0004fc; 	J(CALL(update_car_speed,0));	// 8614 call    near ptr update_car_speed ;~ 0613:04FC
cs=0x613;eip=0x0004ff; 	T(ADD(sp, 8));	// 8615 add     sp, 8 ;~ 0613:04FF
cs=0x613;eip=0x000502; 	T(SUB(ax, ax));	// 8616 sub     ax, ax ;~ 0613:0502
cs=0x613;eip=0x000504; 	X(PUSH(ax));	// 8617 push    ax ;~ 0613:0504
cs=0x613;eip=0x000505; 	T(MOV(ax, offset(dseg,simd_opponent)));	// 8618 mov     ax, offset simd_opponent ;~ 0613:0505
cs=0x613;eip=0x000508; 	X(PUSH(ax));	// 8619 push    ax ;~ 0613:0508
cs=0x613;eip=0x000509; 	T(MOV(ax, offset(dseg,word_446b6)));	// 8620 mov     ax, offset word_446B6 ;~ 0613:0509
cs=0x613;eip=0x00050c; 	X(PUSH(ax));	// 8621 push    ax ;~ 0613:050C
cs=0x613;eip=0x00050d; 	X(PUSH(cs));	// 8622 push    cs ;~ 0613:050D
cs=0x613;eip=0x00050e; 	J(CALL(update_grip,0));	// 8623 call    near ptr update_grip ;~ 0613:050E
cs=0x613;eip=0x000511; 	T(ADD(sp, 6));	// 8624 add     sp, 6 ;~ 0613:0511
cs=0x613;eip=0x000514; 	T(MOV(ax, 1));	// 8625 mov     ax, 1 ;~ 0613:0514
cs=0x613;eip=0x000517; 	X(PUSH(ax));	// 8626 push    ax ;~ 0613:0517
cs=0x613;eip=0x000518; 	T(MOV(ax, offset(dseg,simd_player)));	// 8627 mov     ax, offset simd_player ;~ 0613:0518
cs=0x613;eip=0x00051b; 	X(PUSH(ax));	// 8628 push    ax ;~ 0613:051B
cs=0x613;eip=0x00051c; 	T(MOV(ax, offset(dseg,word_445e6)));	// 8629 mov     ax, offset word_445E6 ;~ 0613:051C
cs=0x613;eip=0x00051f; 	X(PUSH(ax));	// 8630 push    ax ;~ 0613:051F
cs=0x613;eip=0x000520; 	T(MOV(ax, offset(dseg,simd_opponent)));	// 8631 mov     ax, offset simd_opponent ;~ 0613:0520
cs=0x613;eip=0x000523; 	X(PUSH(ax));	// 8632 push    ax ;~ 0613:0523
cs=0x613;eip=0x000524; 	T(MOV(ax, offset(dseg,word_446b6)));	// 8633 mov     ax, offset word_446B6 ;~ 0613:0524
cs=0x613;eip=0x000527; 	X(PUSH(ax));	// 8634 push    ax ;~ 0613:0527
cs=0x613;eip=0x000528; 	X(PUSH(cs));	// 8635 push    cs ;~ 0613:0528
cs=0x613;eip=0x000529; 	J(CALL(update_player_state,0));	// 8636 call    near ptr update_player_state ;~ 0613:0529
cs=0x613;eip=0x00052c; 	T(ADD(sp, 0x0A));	// 8637 add     sp, 0Ah ;~ 0613:052C
cs=0x613;eip=0x00052f; 	T(CMP(byte_4477f, 0));	// 8638 cmp     byte_4477F, 0 ;~ 0613:052F
cs=0x613;eip=0x000534; 	J(JZ(loc_14c49));	// 8639 jz      short loc_14C49 ;~ 0613:0534
cs=0x613;eip=0x000536; 	J(JMP(loc_14cd7));	// 8640 jmp     loc_14CD7 ;~ 0613:0536
loc_14c49:
	// 4828 
cs=0x613;eip=0x000539; 	X(PUSH(si));	// 8644 push    si ;~ 0613:0539
cs=0x613;eip=0x00053a; 	T(di = bp+var_26);	// 8645 lea     di, [bp+var_26] ;~ 0613:053A
cs=0x613;eip=0x00053d; 	T(MOV(si, offset(dseg,word_4475a)));	// 8646 mov     si, offset word_4475A ;~ 0613:053D
cs=0x613;eip=0x000540; 	X(PUSH(ss));	// 8647 push    ss ;~ 0613:0540
cs=0x613;eip=0x000541; 	X(POP(es));	// 8648 pop     es ;~ 0613:0541
cs=0x613;eip=0x000542; 	X(MOVSW);	// 8649 movsw ;~ 0613:0542
cs=0x613;eip=0x000543; 	X(MOVSW);	// 8650 movsw ;~ 0613:0543
cs=0x613;eip=0x000544; 	X(MOVSW);	// 8651 movsw ;~ 0613:0544
cs=0x613;eip=0x000545; 	X(POP(si));	// 8652 pop     si ;~ 0613:0545
cs=0x613;eip=0x000546; 	T(MOV(ax, word_446b6));	// 8653 mov     ax, word_446B6 ;~ 0613:0546
cs=0x613;eip=0x000549; 	T(MOV(dx, word_446b8));	// 8654 mov     dx, word_446B8 ;~ 0613:0549
cs=0x613;eip=0x00054d; 	T(MOV(cl, 6));	// 8655 mov     cl, 6 ;~ 0613:054D
loc_14c5f:
	// 4829 
cs=0x613;eip=0x00054f; 	T(SAR(dx, 1));	// 8658 sar     dx, 1 ;~ 0613:054F
cs=0x613;eip=0x000551; 	T(RCR(ax, 1));	// 8659 rcr     ax, 1 ;~ 0613:0551
cs=0x613;eip=0x000553; 	T(DEC(cl));	// 8660 dec     cl ;~ 0613:0553
cs=0x613;eip=0x000555; 	J(JNZ(loc_14c5f));	// 8661 jnz     short loc_14C5F ;~ 0613:0555
cs=0x613;eip=0x000557; 	X(SUB(*(dw*)(raddr(ss,bp+var_26)), ax));	// 8662 sub     [bp+var_26], ax ;~ 0613:0557
cs=0x613;eip=0x00055a; 	T(MOV(ax, word_446ba));	// 8663 mov     ax, word_446BA ;~ 0613:055A
cs=0x613;eip=0x00055d; 	T(MOV(dx, word_446bc));	// 8664 mov     dx, word_446BC ;~ 0613:055D
cs=0x613;eip=0x000561; 	T(MOV(cl, 6));	// 8665 mov     cl, 6 ;~ 0613:0561
loc_14c73:
	// 4830 
cs=0x613;eip=0x000563; 	T(SAR(dx, 1));	// 8668 sar     dx, 1 ;~ 0613:0563
cs=0x613;eip=0x000565; 	T(RCR(ax, 1));	// 8669 rcr     ax, 1 ;~ 0613:0565
cs=0x613;eip=0x000567; 	T(DEC(cl));	// 8670 dec     cl ;~ 0613:0567
cs=0x613;eip=0x000569; 	J(JNZ(loc_14c73));	// 8671 jnz     short loc_14C73 ;~ 0613:0569
cs=0x613;eip=0x00056b; 	X(SUB(*(dw*)(raddr(ss,bp+var_24)), ax));	// 8672 sub     [bp+var_24], ax ;~ 0613:056B
cs=0x613;eip=0x00056e; 	T(MOV(ax, word_446be));	// 8673 mov     ax, word_446BE ;~ 0613:056E
cs=0x613;eip=0x000571; 	T(MOV(dx, word_446c0));	// 8674 mov     dx, word_446C0 ;~ 0613:0571
cs=0x613;eip=0x000575; 	T(MOV(cl, 6));	// 8675 mov     cl, 6 ;~ 0613:0575
loc_14c87:
	// 4831 
cs=0x613;eip=0x000577; 	T(SAR(dx, 1));	// 8678 sar     dx, 1 ;~ 0613:0577
cs=0x613;eip=0x000579; 	T(RCR(ax, 1));	// 8679 rcr     ax, 1 ;~ 0613:0579
cs=0x613;eip=0x00057b; 	T(DEC(cl));	// 8680 dec     cl ;~ 0613:057B
cs=0x613;eip=0x00057d; 	J(JNZ(loc_14c87));	// 8681 jnz     short loc_14C87 ;~ 0613:057D
cs=0x613;eip=0x00057f; 	X(SUB(*(dw*)(raddr(ss,bp+var_22)), ax));	// 8682 sub     [bp+var_22], ax ;~ 0613:057F
cs=0x613;eip=0x000582; 	T(MOV(ax, 1));	// 8683 mov     ax, 1 ;~ 0613:0582
cs=0x613;eip=0x000585; 	X(PUSH(ax));	// 8684 push    ax ;~ 0613:0585
cs=0x613;eip=0x000586; 	X(PUSH(word_446ce));	// 8685 push    word_446CE ;~ 0613:0586
cs=0x613;eip=0x00058a; 	X(PUSH(word_446d0));	// 8686 push    word_446D0 ;~ 0613:058A
cs=0x613;eip=0x00058e; 	X(PUSH(word_446d2));	// 8687 push    word_446D2 ;~ 0613:058E
cs=0x613;eip=0x000592; 	J(CALLF(mat_rot_zxy,0));	// 8688 call    mat_rot_zxy ;~ 0613:0592
cs=0x613;eip=0x000597; 	T(ADD(sp, 8));	// 8689 add     sp, 8 ;~ 0613:0597
cs=0x613;eip=0x00059a; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 8690 mov     [bp+var_16], ax ;~ 0613:059A
cs=0x613;eip=0x00059d; 	T(ax = bp+var_3c);	// 8691 lea     ax, [bp+var_3C] ;~ 0613:059D
cs=0x613;eip=0x0005a0; 	X(PUSH(ax));	// 8692 push    ax ;~ 0613:05A0
cs=0x613;eip=0x0005a1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 8693 push    [bp+var_16] ;~ 0613:05A1
cs=0x613;eip=0x0005a4; 	T(ax = bp+var_26);	// 8694 lea     ax, [bp+var_26] ;~ 0613:05A4
cs=0x613;eip=0x0005a7; 	X(PUSH(ax));	// 8695 push    ax ;~ 0613:05A7
cs=0x613;eip=0x0005a8; 	J(CALLF(mat_mul_vector,0));	// 8696 call    mat_mul_vector ;~ 0613:05A8
cs=0x613;eip=0x0005ad; 	T(ADD(sp, 6));	// 8697 add     sp, 6 ;~ 0613:05AD
cs=0x613;eip=0x0005b0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 8698 push    [bp+var_38] ;~ 0613:05B0
cs=0x613;eip=0x0005b3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3c))));	// 8699 mov     ax, [bp+var_3C] ;~ 0613:05B3
cs=0x613;eip=0x0005b6; 	T(NEG(ax));	// 8700 neg     ax ;~ 0613:05B6
cs=0x613;eip=0x0005b8; 	X(PUSH(ax));	// 8701 push    ax ;~ 0613:05B8
cs=0x613;eip=0x0005b9; 	J(CALLF(polarangle,0));	// 8702 call    polarAngle ;~ 0613:05B9
cs=0x613;eip=0x0005be; 	T(ADD(sp, 4));	// 8703 add     sp, 4 ;~ 0613:05BE
cs=0x613;eip=0x0005c1; 	T(AND(ah, 3));	// 8704 and     ah, 3 ;~ 0613:05C1
cs=0x613;eip=0x0005c4; 	X(MOV(word_446fe, ax));	// 8705 mov     word_446FE, ax ;~ 0613:05C4
loc_14cd7:
	// 4832 
cs=0x613;eip=0x0005c7; 	T(CMP(byte_44783, 0));	// 8708 cmp     byte_44783, 0 ;~ 0613:05C7
cs=0x613;eip=0x0005cc; 	J(JNZ(loc_14ce1));	// 8709 jnz     short loc_14CE1 ;~ 0613:05CC
cs=0x613;eip=0x0005ce; 	J(JMP(loc_14d66));	// 8710 jmp     loc_14D66 ;~ 0613:05CE
loc_14ce1:
	// 4833 
cs=0x613;eip=0x0005d1; 	T(MOV(al, startrow2));	// 8714 mov     al, startrow2 ;~ 0613:05D1
cs=0x613;eip=0x0005d4; 	T(CBW);	// 8715 cbw ;~ 0613:05D4
cs=0x613;eip=0x0005d5; 	T(MOV(bx, ax));	// 8716 mov     bx, ax ;~ 0613:05D5
cs=0x613;eip=0x0005d7; 	T(SHL(bx, 1));	// 8717 shl     bx, 1 ;~ 0613:05D7
cs=0x613;eip=0x0005d9; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 8718 mov     ax, trackcenterpos[bx] ;~ 0613:05D9
cs=0x613;eip=0x0005dd; 	T(MOV(cx, word_446be));	// 8719 mov     cx, word_446BE ;~ 0613:05DD
cs=0x613;eip=0x0005e1; 	T(MOV(bx, word_446c0));	// 8720 mov     bx, word_446C0 ;~ 0613:05E1
cs=0x613;eip=0x0005e5; 	T(MOV(dx, cx));	// 8721 mov     dx, cx ;~ 0613:05E5
cs=0x613;eip=0x0005e7; 	T(MOV(cl, 6));	// 8722 mov     cl, 6 ;~ 0613:05E7
loc_14cf9:
	// 4834 
cs=0x613;eip=0x0005e9; 	T(SAR(bx, 1));	// 8725 sar     bx, 1 ;~ 0613:05E9
cs=0x613;eip=0x0005eb; 	T(RCR(dx, 1));	// 8726 rcr     dx, 1 ;~ 0613:05EB
cs=0x613;eip=0x0005ed; 	T(DEC(cl));	// 8727 dec     cl ;~ 0613:05ED
cs=0x613;eip=0x0005ef; 	J(JNZ(loc_14cf9));	// 8728 jnz     short loc_14CF9 ;~ 0613:05EF
cs=0x613;eip=0x0005f1; 	T(SUB(ax, dx));	// 8729 sub     ax, dx ;~ 0613:05F1
cs=0x613;eip=0x0005f3; 	X(PUSH(ax));	// 8730 push    ax ;~ 0613:05F3
cs=0x613;eip=0x0005f4; 	X(PUSH(track_angle));	// 8731 push    track_angle ;~ 0613:05F4
cs=0x613;eip=0x0005f8; 	J(CALLF(cos_fast,0));	// 8732 call    cos_fast ;~ 0613:05F8
cs=0x613;eip=0x0005fd; 	T(ADD(sp, 2));	// 8733 add     sp, 2 ;~ 0613:05FD
cs=0x613;eip=0x000600; 	X(PUSH(ax));	// 8734 push    ax ;~ 0613:0600
cs=0x613;eip=0x000601; 	J(CALLF(multiply_and_scale,0));	// 8735 call    multiply_and_scale ;~ 0613:0601
cs=0x613;eip=0x000606; 	T(ADD(sp, 4));	// 8736 add     sp, 4 ;~ 0613:0606
cs=0x613;eip=0x000609; 	T(MOV(si, ax));	// 8737 mov     si, ax ;~ 0613:0609
cs=0x613;eip=0x00060b; 	T(MOV(al, startcol2));	// 8738 mov     al, startcol2 ;~ 0613:060B
cs=0x613;eip=0x00060e; 	T(CBW);	// 8739 cbw ;~ 0613:060E
cs=0x613;eip=0x00060f; 	T(MOV(bx, ax));	// 8740 mov     bx, ax ;~ 0613:060F
cs=0x613;eip=0x000611; 	T(SHL(bx, 1));	// 8741 shl     bx, 1 ;~ 0613:0611
cs=0x613;eip=0x000613; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 8742 mov     ax, trackcenterpos2[bx] ;~ 0613:0613
cs=0x613;eip=0x000617; 	T(MOV(cx, word_446b6));	// 8743 mov     cx, word_446B6 ;~ 0613:0617
cs=0x613;eip=0x00061b; 	T(MOV(bx, word_446b8));	// 8744 mov     bx, word_446B8 ;~ 0613:061B
cs=0x613;eip=0x00061f; 	T(MOV(dx, cx));	// 8745 mov     dx, cx ;~ 0613:061F
cs=0x613;eip=0x000621; 	T(MOV(cl, 6));	// 8746 mov     cl, 6 ;~ 0613:0621
loc_14d33:
	// 4835 
cs=0x613;eip=0x000623; 	T(SAR(bx, 1));	// 8749 sar     bx, 1 ;~ 0613:0623
cs=0x613;eip=0x000625; 	T(RCR(dx, 1));	// 8750 rcr     dx, 1 ;~ 0613:0625
cs=0x613;eip=0x000627; 	T(DEC(cl));	// 8751 dec     cl ;~ 0613:0627
cs=0x613;eip=0x000629; 	J(JNZ(loc_14d33));	// 8752 jnz     short loc_14D33 ;~ 0613:0629
cs=0x613;eip=0x00062b; 	T(SUB(ax, dx));	// 8753 sub     ax, dx ;~ 0613:062B
cs=0x613;eip=0x00062d; 	X(PUSH(ax));	// 8754 push    ax ;~ 0613:062D
cs=0x613;eip=0x00062e; 	X(PUSH(track_angle));	// 8755 push    track_angle ;~ 0613:062E
cs=0x613;eip=0x000632; 	J(CALLF(sin_fast,0));	// 8756 call    sin_fast ;~ 0613:0632
cs=0x613;eip=0x000637; 	T(ADD(sp, 2));	// 8757 add     sp, 2 ;~ 0613:0637
cs=0x613;eip=0x00063a; 	X(PUSH(ax));	// 8758 push    ax ;~ 0613:063A
cs=0x613;eip=0x00063b; 	J(CALLF(multiply_and_scale,0));	// 8759 call    multiply_and_scale ;~ 0613:063B
cs=0x613;eip=0x000640; 	T(ADD(sp, 4));	// 8760 add     sp, 4 ;~ 0613:0640
cs=0x613;eip=0x000643; 	T(ADD(si, ax));	// 8761 add     si, ax ;~ 0613:0643
cs=0x613;eip=0x000645; 	J(JNS(loc_14d66));	// 8762 jns     short loc_14D66 ;~ 0613:0645
cs=0x613;eip=0x000647; 	T(MOV(ax, 1));	// 8763 mov     ax, 1 ;~ 0613:0647
cs=0x613;eip=0x00064a; 	X(PUSH(ax));	// 8764 push    ax ;~ 0613:064A
cs=0x613;eip=0x00064b; 	T(MOV(ax, 3));	// 8765 mov     ax, 3 ;~ 0613:064B
cs=0x613;eip=0x00064e; 	X(PUSH(ax));	// 8766 push    ax ;~ 0613:064E
cs=0x613;eip=0x00064f; 	X(PUSH(cs));	// 8767 push    cs ;~ 0613:064F
cs=0x613;eip=0x000650; 	J(CALL(update_crash_state,0));	// 8768 call    near ptr update_crash_state ;~ 0613:0650
cs=0x613;eip=0x000653; 	T(ADD(sp, 4));	// 8769 add     sp, 4 ;~ 0613:0653
loc_14d66:
	// 4836 
cs=0x613;eip=0x000656; 	X(POP(si));	// 8773 pop     si ;~ 0613:0656
cs=0x613;eip=0x000657; 	X(POP(di));	// 8774 pop     di ;~ 0613:0657
cs=0x613;eip=0x000658; 	T(MOV(sp, bp));	// 8775 mov     sp, bp ;~ 0613:0658
cs=0x613;eip=0x00065a; 	X(POP(bp));	// 8776 pop     bp ;~ 0613:065A
cs=0x613;eip=0x00065b; 	J(RETF(0));	// 8777 retf ;~ 0613:065B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1472e: 	goto loc_1472e;
        case m2c::kloc_14738: 	goto loc_14738;
        case m2c::kloc_14746: 	goto loc_14746;
        case m2c::kloc_1474c: 	goto loc_1474c;
        case m2c::kloc_14750: 	goto loc_14750;
        case m2c::kloc_14759: 	goto loc_14759;
        case m2c::kloc_1476d: 	goto loc_1476d;
        case m2c::kloc_14781: 	goto loc_14781;
        case m2c::kloc_14795: 	goto loc_14795;
        case m2c::kloc_147a9: 	goto loc_147a9;
        case m2c::kloc_147bd: 	goto loc_147bd;
        case m2c::kloc_14803: 	goto loc_14803;
        case m2c::kloc_1480c: 	goto loc_1480c;
        case m2c::kloc_14848: 	goto loc_14848;
        case m2c::kloc_1485e: 	goto loc_1485e;
        case m2c::kloc_14866: 	goto loc_14866;
        case m2c::kloc_148ae: 	goto loc_148ae;
        case m2c::kloc_148b3: 	goto loc_148b3;
        case m2c::kloc_148ba: 	goto loc_148ba;
        case m2c::kloc_148c7: 	goto loc_148c7;
        case m2c::kloc_148e3: 	goto loc_148e3;
        case m2c::kloc_148ec: 	goto loc_148ec;
        case m2c::kloc_1492e: 	goto loc_1492e;
        case m2c::kloc_14931: 	goto loc_14931;
        case m2c::kloc_14940: 	goto loc_14940;
        case m2c::kloc_1494a: 	goto loc_1494a;
        case m2c::kloc_14962: 	goto loc_14962;
        case m2c::kloc_1496c: 	goto loc_1496c;
        case m2c::kloc_149b4: 	goto loc_149b4;
        case m2c::kloc_149cb: 	goto loc_149cb;
        case m2c::kloc_149eb: 	goto loc_149eb;
        case m2c::kloc_149f5: 	goto loc_149f5;
        case m2c::kloc_149fe: 	goto loc_149fe;
        case m2c::kloc_14a24: 	goto loc_14a24;
        case m2c::kloc_14a3b: 	goto loc_14a3b;
        case m2c::kloc_14a5b: 	goto loc_14a5b;
        case m2c::kloc_14a65: 	goto loc_14a65;
        case m2c::kloc_14a6e: 	goto loc_14a6e;
        case m2c::kloc_14a74: 	goto loc_14a74;
        case m2c::kloc_14aae: 	goto loc_14aae;
        case m2c::kloc_14ab1: 	goto loc_14ab1;
        case m2c::kloc_14afe: 	goto loc_14afe;
        case m2c::kloc_14b03: 	goto loc_14b03;
        case m2c::kloc_14b0f: 	goto loc_14b0f;
        case m2c::kloc_14b16: 	goto loc_14b16;
        case m2c::kloc_14b1e: 	goto loc_14b1e;
        case m2c::kloc_14b2f: 	goto loc_14b2f;
        case m2c::kloc_14b3b: 	goto loc_14b3b;
        case m2c::kloc_14b4a: 	goto loc_14b4a;
        case m2c::kloc_14b4c: 	goto loc_14b4c;
        case m2c::kloc_14b62: 	goto loc_14b62;
        case m2c::kloc_14b6c: 	goto loc_14b6c;
        case m2c::kloc_14b72: 	goto loc_14b72;
        case m2c::kloc_14ba8: 	goto loc_14ba8;
        case m2c::kloc_14bb6: 	goto loc_14bb6;
        case m2c::kloc_14bce: 	goto loc_14bce;
        case m2c::kloc_14bd7: 	goto loc_14bd7;
        case m2c::kloc_14bea: 	goto loc_14bea;
        case m2c::kloc_14bf6: 	goto loc_14bf6;
        case m2c::kloc_14bfa: 	goto loc_14bfa;
        case m2c::kloc_14c49: 	goto loc_14c49;
        case m2c::kloc_14c5f: 	goto loc_14c5f;
        case m2c::kloc_14c73: 	goto loc_14c73;
        case m2c::kloc_14c87: 	goto loc_14c87;
        case m2c::kloc_14cd7: 	goto loc_14cd7;
        case m2c::kloc_14ce1: 	goto loc_14ce1;
        case m2c::kloc_14cf9: 	goto loc_14cf9;
        case m2c::kloc_14d33: 	goto loc_14d33;
        case m2c::kloc_14d66: 	goto loc_14d66;
        case m2c::kopponent_op: 	goto opponent_op;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool mat_mul_vector2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mat_mul_vector2:
    _begin:
#undef var_12
#define var_12 -0x12
	// 8788 var_12          = byte ptr -12h ;~ 0613:065C
#undef arg_0
#define arg_0 6
	// 8789 arg_0           = word ptr  6 ;~ 0613:065C
#undef arg_2
#define arg_2 8
	// 8790 arg_2           = word ptr  8 ;~ 0613:065C
#undef arg_4
#define arg_4 0x0A
	// 8791 arg_4           = word ptr  0Ah ;~ 0613:065C
#undef arg_6
#define arg_6 0x0C
	// 8792 arg_6           = word ptr  0Ch ;~ 0613:065C
cs=0x613;eip=0x00065c; 	X(PUSH(bp));	// 8794 push    bp ;~ 0613:065C
cs=0x613;eip=0x00065d; 	T(MOV(bp, sp));	// 8795 mov     bp, sp ;~ 0613:065D
cs=0x613;eip=0x00065f; 	T(SUB(sp, 0x12));	// 8796 sub     sp, 12h ;~ 0613:065F
cs=0x613;eip=0x000662; 	X(PUSH(di));	// 8797 push    di ;~ 0613:0662
cs=0x613;eip=0x000663; 	X(PUSH(si));	// 8798 push    si ;~ 0613:0663
cs=0x613;eip=0x000664; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 8799 mov     ax, [bp+arg_2] ;~ 0613:0664
cs=0x613;eip=0x000667; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 8800 mov     dx, [bp+arg_4] ;~ 0613:0667
cs=0x613;eip=0x00066a; 	T(di = bp+var_12);	// 8801 lea     di, [bp+var_12] ;~ 0613:066A
cs=0x613;eip=0x00066d; 	T(MOV(si, ax));	// 8802 mov     si, ax ;~ 0613:066D
cs=0x613;eip=0x00066f; 	X(PUSH(ss));	// 8803 push    ss ;~ 0613:066F
cs=0x613;eip=0x000670; 	X(POP(es));	// 8804 pop     es ;~ 0613:0670
cs=0x613;eip=0x000671; 	X(PUSH(ds));	// 8805 push    ds ;~ 0613:0671
cs=0x613;eip=0x000672; 	T(MOV(ds, dx));	// 8806 mov     ds, dx ;~ 0613:0672
cs=0x613;eip=0x000674; 	T(MOV(cx, 9));	// 8807 mov     cx, 9 ;~ 0613:0674
	// 8808 repne movsw ;~ 0613:0677
cs=0x613;eip=0x000677; 	X(	REPNE MOVSW);	// 8808 repne movsw ;~ 0613:0677
cs=0x613;eip=0x000679; 	X(POP(ds));	// 8809 pop     ds ;~ 0613:0679
cs=0x613;eip=0x00067a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 8810 push    [bp+arg_6] ;~ 0613:067A
cs=0x613;eip=0x00067d; 	T(ax = bp+var_12);	// 8811 lea     ax, [bp+var_12] ;~ 0613:067D
cs=0x613;eip=0x000680; 	X(PUSH(ax));	// 8812 push    ax ;~ 0613:0680
cs=0x613;eip=0x000681; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 8813 push    [bp+arg_0] ;~ 0613:0681
cs=0x613;eip=0x000684; 	J(CALLF(mat_mul_vector,0));	// 8814 call    mat_mul_vector ;~ 0613:0684
cs=0x613;eip=0x000689; 	T(ADD(sp, 6));	// 8815 add     sp, 6 ;~ 0613:0689
cs=0x613;eip=0x00068c; 	X(POP(si));	// 8816 pop     si ;~ 0613:068C
cs=0x613;eip=0x00068d; 	X(POP(di));	// 8817 pop     di ;~ 0613:068D
cs=0x613;eip=0x00068e; 	T(MOV(sp, bp));	// 8818 mov     sp, bp ;~ 0613:068E
cs=0x613;eip=0x000690; 	X(POP(bp));	// 8819 pop     bp ;~ 0613:0690
cs=0x613;eip=0x000691; 	J(RETF(0));	// 8820 retf ;~ 0613:0691

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kmat_mul_vector2: 	goto mat_mul_vector2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool update_player_state(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    update_player_state:
    _begin:
#undef vec_1e4
#define vec_1e4 -0x1E4
	// 8831 vec_1E4         = word ptr -1E4h ;~ 0613:0692
#undef var_1e2
#define var_1e2 -0x1E2
	// 8832 var_1E2         = word ptr -1E2h ;~ 0613:0692
#undef var_1e0
#define var_1e0 -0x1E0
	// 8833 var_1E0         = word ptr -1E0h ;~ 0613:0692
#undef vec_1de
#define vec_1de -0x1DE
	// 8834 vec_1DE         = word ptr -1DEh ;~ 0613:0692
#undef var_1dc
#define var_1dc -0x1DC
	// 8835 var_1DC         = word ptr -1DCh ;~ 0613:0692
#undef var_1da
#define var_1da -0x1DA
	// 8836 var_1DA         = word ptr -1DAh ;~ 0613:0692
#undef var_1d8
#define var_1d8 -0x1D8
	// 8837 var_1D8         = word ptr -1D8h ;~ 0613:0692
#undef var_1d6
#define var_1d6 -0x1D6
	// 8838 var_1D6         = word ptr -1D6h ;~ 0613:0692
#undef var_1d4
#define var_1d4 -0x1D4
	// 8839 var_1D4         = word ptr -1D4h ;~ 0613:0692
#undef var_1d2
#define var_1d2 -0x1D2
	// 8840 var_1D2         = word ptr -1D2h ;~ 0613:0692
#undef var_1d0
#define var_1d0 -0x1D0
	// 8841 var_1D0         = word ptr -1D0h ;~ 0613:0692
#undef var_1ce
#define var_1ce -0x1CE
	// 8842 var_1CE         = word ptr -1CEh ;~ 0613:0692
#undef var_1cc
#define var_1cc -0x1CC
	// 8843 var_1CC         = word ptr -1CCh ;~ 0613:0692
#undef var_1ca
#define var_1ca -0x1CA
	// 8844 var_1CA         = word ptr -1CAh ;~ 0613:0692
#undef var_1c8
#define var_1c8 -0x1C8
	// 8845 var_1C8         = word ptr -1C8h ;~ 0613:0692
#undef vec_1c6
#define vec_1c6 -0x1C6
	// 8846 vec_1C6         = word ptr -1C6h ;~ 0613:0692
#undef var_1c4
#define var_1c4 -0x1C4
	// 8847 var_1C4         = word ptr -1C4h ;~ 0613:0692
#undef var_1c2
#define var_1c2 -0x1C2
	// 8848 var_1C2         = word ptr -1C2h ;~ 0613:0692
#undef vecl_1c0
#define vecl_1c0 -0x1C0
	// 8849 vecl_1C0        = word ptr -1C0h ;~ 0613:0692
#undef var_1be
#define var_1be -0x1BE
	// 8850 var_1BE         = word ptr -1BEh ;~ 0613:0692
#undef var_1bc
#define var_1bc -0x1BC
	// 8851 var_1BC         = word ptr -1BCh ;~ 0613:0692
#undef var_1ba
#define var_1ba -0x1BA
	// 8852 var_1BA         = word ptr -1BAh ;~ 0613:0692
#undef var_1b8
#define var_1b8 -0x1B8
	// 8853 var_1B8         = word ptr -1B8h ;~ 0613:0692
#undef var_1b6
#define var_1b6 -0x1B6
	// 8854 var_1B6         = word ptr -1B6h ;~ 0613:0692
#undef var_1b4
#define var_1b4 -0x1B4
	// 8855 var_1B4         = word ptr -1B4h ;~ 0613:0692
#undef var_1b2
#define var_1b2 -0x1B2
	// 8856 var_1B2         = word ptr -1B2h ;~ 0613:0692
#undef var_1b0
#define var_1b0 -0x1B0
	// 8857 var_1B0         = word ptr -1B0h ;~ 0613:0692
#undef var_1ae
#define var_1ae -0x1AE
	// 8858 var_1AE         = word ptr -1AEh ;~ 0613:0692
#undef var_1ac
#define var_1ac -0x1AC
	// 8859 var_1AC         = word ptr -1ACh ;~ 0613:0692
#undef var_1aa
#define var_1aa -0x1AA
	// 8860 var_1AA         = word ptr -1AAh ;~ 0613:0692
#undef var_1a8
#define var_1a8 -0x1A8
	// 8861 var_1A8         = word ptr -1A8h ;~ 0613:0692
#undef var_1a6
#define var_1a6 -0x1A6
	// 8862 var_1A6         = word ptr -1A6h ;~ 0613:0692
#undef var_1a4
#define var_1a4 -0x1A4
	// 8863 var_1A4         = word ptr -1A4h ;~ 0613:0692
#undef var_1a2
#define var_1a2 -0x1A2
	// 8864 var_1A2         = word ptr -1A2h ;~ 0613:0692
#undef var_1a0
#define var_1a0 -0x1A0
	// 8865 var_1A0         = word ptr -1A0h ;~ 0613:0692
#undef var_19e
#define var_19e -0x19E
	// 8866 var_19E         = word ptr -19Eh ;~ 0613:0692
#undef var_19c
#define var_19c -0x19C
	// 8867 var_19C         = word ptr -19Ch ;~ 0613:0692
#undef var_19a
#define var_19a -0x19A
	// 8868 var_19A         = word ptr -19Ah ;~ 0613:0692
#undef var_198
#define var_198 -0x198
	// 8869 var_198         = word ptr -198h ;~ 0613:0692
#undef var_196
#define var_196 -0x196
	// 8870 var_196         = word ptr -196h ;~ 0613:0692
#undef var_194
#define var_194 -0x194
	// 8871 var_194         = word ptr -194h ;~ 0613:0692
#undef var_192
#define var_192 -0x192
	// 8872 var_192         = word ptr -192h ;~ 0613:0692
#undef var_190
#define var_190 -0x190
	// 8873 var_190         = word ptr -190h ;~ 0613:0692
#undef vec_18eostateworldcrds
#define vec_18eostateworldcrds -0x18E
	// 8874 vec_18EoStateWorldCrds= word ptr -18Eh ;~ 0613:0692
#undef var_18c
#define var_18c -0x18C
	// 8875 var_18C         = word ptr -18Ch ;~ 0613:0692
#undef var_18a
#define var_18a -0x18A
	// 8876 var_18A         = word ptr -18Ah ;~ 0613:0692
#undef var_188
#define var_188 -0x188
	// 8877 var_188         = word ptr -188h ;~ 0613:0692
#undef var_186
#define var_186 -0x186
	// 8878 var_186         = word ptr -186h ;~ 0613:0692
#undef var_184
#define var_184 -0x184
	// 8879 var_184         = word ptr -184h ;~ 0613:0692
#undef vec_182
#define vec_182 -0x182
	// 8880 vec_182         = word ptr -182h ;~ 0613:0692
#undef var_180
#define var_180 -0x180
	// 8881 var_180         = word ptr -180h ;~ 0613:0692
#undef var_17e
#define var_17e -0x17E
	// 8882 var_17E         = word ptr -17Eh ;~ 0613:0692
#undef vec_17c
#define vec_17c -0x17C
	// 8883 vec_17C         = word ptr -17Ch ;~ 0613:0692
#undef var_17a
#define var_17a -0x17A
	// 8884 var_17A         = word ptr -17Ah ;~ 0613:0692
#undef var_178
#define var_178 -0x178
	// 8885 var_178         = word ptr -178h ;~ 0613:0692
#undef vecl_176
#define vecl_176 -0x176
	// 8886 vecl_176        = byte ptr -176h ;~ 0613:0692
#undef var_146
#define var_146 -0x146
	// 8887 var_146         = word ptr -146h ;~ 0613:0692
#undef var_144
#define var_144 -0x144
	// 8888 var_144         = word ptr -144h ;~ 0613:0692
#undef pstate_f40_sar2
#define pstate_f40_sar2 -0x142
	// 8889 pState_f40_sar2 = word ptr -142h ;~ 0613:0692
#undef var_140
#define var_140 -0x140
	// 8890 var_140         = word ptr -140h ;~ 0613:0692
#undef var_138
#define var_138 -0x138
	// 8891 var_138         = word ptr -138h ;~ 0613:0692
#undef var_136
#define var_136 -0x136
	// 8892 var_136         = byte ptr -136h ;~ 0613:0692
#undef mat_134
#define mat_134 -0x134
	// 8893 mat_134         = byte ptr -134h ;~ 0613:0692
#undef var_122
#define var_122 -0x122
	// 8894 var_122         = word ptr -122h ;~ 0613:0692
#undef var_120
#define var_120 -0x120
	// 8895 var_120         = word ptr -120h ;~ 0613:0692
#undef var_11e
#define var_11e -0x11E
	// 8896 var_11E         = word ptr -11Eh ;~ 0613:0692
#undef var_11c
#define var_11c -0x11C
	// 8897 var_11C         = byte ptr -11Ch ;~ 0613:0692
#undef var_11a
#define var_11a -0x11A
	// 8898 var_11A         = word ptr -11Ah ;~ 0613:0692
#undef var_118
#define var_118 -0x118
	// 8899 var_118         = word ptr -118h ;~ 0613:0692
#undef var_116
#define var_116 -0x116
	// 8900 var_116         = word ptr -116h ;~ 0613:0692
#undef var_114
#define var_114 -0x114
	// 8901 var_114         = word ptr -114h ;~ 0613:0692
#undef var_112
#define var_112 -0x112
	// 8902 var_112         = word ptr -112h ;~ 0613:0692
#undef var_110
#define var_110 -0x110
	// 8903 var_110         = word ptr -110h ;~ 0613:0692
#undef var_10e
#define var_10e -0x10E
	// 8904 var_10E         = byte ptr -10Eh ;~ 0613:0692
#undef vec_fc
#define vec_fc -0x0FC
	// 8905 vec_FC          = word ptr -0FCh ;~ 0613:0692
#undef var_fa
#define var_fa -0x0FA
	// 8906 var_FA          = word ptr -0FAh ;~ 0613:0692
#undef var_f8
#define var_f8 -0x0F8
	// 8907 var_F8          = word ptr -0F8h ;~ 0613:0692
#undef var_f4
#define var_f4 -0x0F4
	// 8908 var_F4          = word ptr -0F4h ;~ 0613:0692
#undef var_f2
#define var_f2 -0x0F2
	// 8909 var_F2          = word ptr -0F2h ;~ 0613:0692
#undef var_f0
#define var_f0 -0x0F0
	// 8910 var_F0          = word ptr -0F0h ;~ 0613:0692
#undef var_ee
#define var_ee -0x0EE
	// 8911 var_EE          = word ptr -0EEh ;~ 0613:0692
#undef var_ec
#define var_ec -0x0EC
	// 8912 var_EC          = byte ptr -0ECh ;~ 0613:0692
#undef var_ea
#define var_ea -0x0EA
	// 8913 var_EA          = word ptr -0EAh ;~ 0613:0692
#undef var_e8
#define var_e8 -0x0E8
	// 8914 var_E8          = byte ptr -0E8h ;~ 0613:0692
#undef var_e6
#define var_e6 -0x0E6
	// 8915 var_E6          = word ptr -0E6h ;~ 0613:0692
#undef vec_e4
#define vec_e4 -0x0E4
	// 8916 vec_E4          = word ptr -0E4h ;~ 0613:0692
#undef var_e2
#define var_e2 -0x0E2
	// 8917 var_E2          = word ptr -0E2h ;~ 0613:0692
#undef var_e0
#define var_e0 -0x0E0
	// 8918 var_E0          = word ptr -0E0h ;~ 0613:0692
#undef var_de
#define var_de -0x0DE
	// 8919 var_DE          = word ptr -0DEh ;~ 0613:0692
#undef var_dc
#define var_dc -0x0DC
	// 8920 var_DC          = byte ptr -0DCh ;~ 0613:0692
#undef vec_1c
#define vec_1c -0x1C
	// 8921 vec_1C          = word ptr -1Ch ;~ 0613:0692
#undef var_1a
#define var_1a -0x1A
	// 8922 var_1A          = word ptr -1Ah ;~ 0613:0692
#undef var_18
#define var_18 -0x18
	// 8923 var_18          = word ptr -18h ;~ 0613:0692
#undef var_16
#define var_16 -0x16
	// 8924 var_16          = word ptr -16h ;~ 0613:0692
#undef var_e
#define var_e -0x0E
	// 8925 var_E           = word ptr -0Eh ;~ 0613:0692
#undef vec_c
#define vec_c -0x0C
	// 8926 vec_C           = word ptr -0Ch ;~ 0613:0692
#undef var_a
#define var_a -0x0A
	// 8927 var_A           = word ptr -0Ah ;~ 0613:0692
#undef var_8
#define var_8 -8
	// 8928 var_8           = word ptr -8 ;~ 0613:0692
#undef var_6
#define var_6 -6
	// 8929 var_6           = dword ptr -6 ;~ 0613:0692
#undef var_2
#define var_2 -2
	// 8930 var_2           = byte ptr -2 ;~ 0613:0692
#undef arg_0
#define arg_0 6
	// 8931 arg_0           = word ptr  6 ;~ 0613:0692
#undef arg_2
#define arg_2 8
	// 8932 arg_2           = word ptr  8 ;~ 0613:0692
#undef arg_4
#define arg_4 0x0A
	// 8933 arg_4           = word ptr  0Ah ;~ 0613:0692
#undef arg_6
#define arg_6 0x0C
	// 8934 arg_6           = word ptr  0Ch ;~ 0613:0692
#undef arg_8
#define arg_8 0x0E
	// 8935 arg_8           = byte ptr  0Eh ;~ 0613:0692
cs=0x613;eip=0x000692; 	X(PUSH(bp));	// 8937 push    bp ;~ 0613:0692
cs=0x613;eip=0x000693; 	T(MOV(bp, sp));	// 8938 mov     bp, sp ;~ 0613:0693
cs=0x613;eip=0x000695; 	T(SUB(sp, 0x1E4));	// 8939 sub     sp, 1E4h ;~ 0613:0695
cs=0x613;eip=0x000699; 	X(PUSH(di));	// 8940 push    di ;~ 0613:0699
cs=0x613;eip=0x00069a; 	X(PUSH(si));	// 8941 push    si ;~ 0613:069A
cs=0x613;eip=0x00069b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8942 mov     bx, [bp+arg_0] ;~ 0613:069B
cs=0x613;eip=0x00069e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 8943 mov     ax, [bx+0] ;~ 0613:069E
cs=0x613;eip=0x0006a0; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 8944 mov     dx, [bx+2] ;~ 0613:06A0
cs=0x613;eip=0x0006a3; 	X(MOV(pstate_lvec1_x, ax));	// 8945 mov     pState_lvec1_x, ax ;~ 0613:06A3
cs=0x613;eip=0x0006a6; 	X(MOV(word_449c0, dx));	// 8946 mov     word_449C0, dx ;~ 0613:06A6
cs=0x613;eip=0x0006aa; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 8947 mov     [bx+0Ch], ax ;~ 0613:06AA
cs=0x613;eip=0x0006ad; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), dx));	// 8948 mov     [bx+0Eh], dx ;~ 0613:06AD
cs=0x613;eip=0x0006b0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8949 mov     bx, [bp+arg_0] ;~ 0613:06B0
cs=0x613;eip=0x0006b3; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 8950 mov     ax, [bx+4] ;~ 0613:06B3
cs=0x613;eip=0x0006b6; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 8951 mov     dx, [bx+6] ;~ 0613:06B6
cs=0x613;eip=0x0006b9; 	X(MOV(pstate_lvec1_y, ax));	// 8952 mov     pState_lvec1_y, ax ;~ 0613:06B9
cs=0x613;eip=0x0006bc; 	X(MOV(word_449c8, dx));	// 8953 mov     word_449C8, dx ;~ 0613:06BC
cs=0x613;eip=0x0006c0; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), ax));	// 8954 mov     [bx+10h], ax ;~ 0613:06C0
cs=0x613;eip=0x0006c3; 	X(MOV(*(dw*)(raddr(ds,bx+0x12)), dx));	// 8955 mov     [bx+12h], dx ;~ 0613:06C3
cs=0x613;eip=0x0006c6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8956 mov     bx, [bp+arg_0] ;~ 0613:06C6
cs=0x613;eip=0x0006c9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 8957 mov     ax, [bx+8] ;~ 0613:06C9
cs=0x613;eip=0x0006cc; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 8958 mov     dx, [bx+0Ah] ;~ 0613:06CC
cs=0x613;eip=0x0006cf; 	X(MOV(pstate_lvec1_z, ax));	// 8959 mov     pState_lvec1_z, ax ;~ 0613:06CF
cs=0x613;eip=0x0006d2; 	X(MOV(word_449cc, dx));	// 8960 mov     word_449CC, dx ;~ 0613:06D2
cs=0x613;eip=0x0006d6; 	X(MOV(*(dw*)(raddr(ds,bx+0x14)), ax));	// 8961 mov     [bx+14h], ax ;~ 0613:06D6
cs=0x613;eip=0x0006d9; 	X(MOV(*(dw*)(raddr(ds,bx+0x16)), dx));	// 8962 mov     [bx+16h], dx ;~ 0613:06D9
cs=0x613;eip=0x0006dc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8963 mov     bx, [bp+arg_0] ;~ 0613:06DC
cs=0x613;eip=0x0006df; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1C))));	// 8964 mov     ax, [bx+1Ch] ;~ 0613:06DF
cs=0x613;eip=0x0006e2; 	X(MOV(pstate_minusrotate_z_1, ax));	// 8965 mov     pState_minusRotate_z_1, ax ;~ 0613:06E2
cs=0x613;eip=0x0006e5; 	X(MOV(pstate_minusrotate_z_2, ax));	// 8966 mov     pState_minusRotate_z_2, ax ;~ 0613:06E5
cs=0x613;eip=0x0006e8; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1A))));	// 8967 mov     ax, [bx+1Ah] ;~ 0613:06E8
cs=0x613;eip=0x0006eb; 	X(MOV(pstate_minusrotate_x_1, ax));	// 8968 mov     pState_minusRotate_x_1, ax ;~ 0613:06EB
cs=0x613;eip=0x0006ee; 	X(MOV(pstate_minusrotate_x_2, ax));	// 8969 mov     pState_minusRotate_x_2, ax ;~ 0613:06EE
cs=0x613;eip=0x0006f1; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x18))));	// 8970 mov     ax, [bx+18h] ;~ 0613:06F1
cs=0x613;eip=0x0006f4; 	X(MOV(pstate_minusrotate_y_1, ax));	// 8971 mov     pState_minusRotate_y_1, ax ;~ 0613:06F4
cs=0x613;eip=0x0006f7; 	X(MOV(pstate_minusrotate_y_2, ax));	// 8972 mov     pState_minusRotate_y_2, ax ;~ 0613:06F7
cs=0x613;eip=0x0006fa; 	T(CMP(*(raddr(ds,bx+0x0C1)), 0));	// 8973 cmp     byte ptr [bx+0C1h], 0 ;~ 0613:06FA
cs=0x613;eip=0x0006ff; 	J(JZ(loc_14e1e));	// 8974 jz      short loc_14E1E ;~ 0613:06FF
cs=0x613;eip=0x000701; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x40))));	// 8975 mov     ax, [bx+40h] ;~ 0613:0701
cs=0x613;eip=0x000704; 	T(SAR(ax, 1));	// 8976 sar     ax, 1 ;~ 0613:0704
cs=0x613;eip=0x000706; 	T(SAR(ax, 1));	// 8977 sar     ax, 1 ;~ 0613:0706
cs=0x613;eip=0x000708; 	X(MOV(*(dw*)(raddr(ss,bp+pstate_f40_sar2)), ax));	// 8978 mov     [bp+pState_f40_sar2], ax ;~ 0613:0708
cs=0x613;eip=0x00070c; 	J(JMP(loc_14e24));	// 8979 jmp     short loc_14E24 ;~ 0613:070C
loc_14e1e:
	// 4837 
cs=0x613;eip=0x00070e; 	X(MOV(*(dw*)(raddr(ss,bp+pstate_f40_sar2)), 0));	// 8983 mov     [bp+pState_f40_sar2], 0 ;~ 0613:070E
loc_14e24:
	// 4838 
cs=0x613;eip=0x000714; 	T(CMP(framespersec, 0x0A));	// 8986 cmp     framespersec, 0Ah ;~ 0613:0714
cs=0x613;eip=0x000719; 	J(JNZ(loc_14e30));	// 8987 jnz     short loc_14E30 ;~ 0613:0719
cs=0x613;eip=0x00071b; 	T(MOV(ax, 0x1E00));	// 8988 mov     ax, 1E00h ;~ 0613:071B
cs=0x613;eip=0x00071e; 	J(JMP(loc_14e33));	// 8989 jmp     short loc_14E33 ;~ 0613:071E
loc_14e30:
	// 4839 
cs=0x613;eip=0x000720; 	T(MOV(ax, 0x3C00));	// 8993 mov     ax, 3C00h       ; full trk grid length/2 ;~ 0613:0720
loc_14e33:
	// 4840 
cs=0x613;eip=0x000723; 	T(SUB(dx, dx));	// 8996 sub     dx, dx ;~ 0613:0723
cs=0x613;eip=0x000725; 	X(PUSH(dx));	// 8997 push    dx ;~ 0613:0725
cs=0x613;eip=0x000726; 	X(PUSH(ax));	// 8998 push    ax ;~ 0613:0726
cs=0x613;eip=0x000727; 	T(MOV(ax, 0x580));	// 8999 mov     ax, 580h        ; 11*128 ;~ 0613:0727
cs=0x613;eip=0x00072a; 	T(CWD);	// 9000 cwd ;~ 0613:072A
cs=0x613;eip=0x00072b; 	X(PUSH(dx));	// 9001 push    dx ;~ 0613:072B
cs=0x613;eip=0x00072c; 	X(PUSH(ax));	// 9002 push    ax ;~ 0613:072C
cs=0x613;eip=0x00072d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9003 mov     bx, [bp+arg_0] ;~ 0613:072D
cs=0x613;eip=0x000730; 	T(SUB(ax, ax));	// 9004 sub     ax, ax ;~ 0613:0730
cs=0x613;eip=0x000732; 	X(PUSH(ax));	// 9005 push    ax ;~ 0613:0732
cs=0x613;eip=0x000733; 	X(PUSH(*(dw*)(raddr(ds,bx+0x2C))));	// 9006 push    word ptr [bx+2Ch] ;~ 0613:0733
cs=0x613;eip=0x000736; 	J(CALLF(__aflmul,0));	// 9007 call    __aFlmul ;~ 0613:0736
cs=0x613;eip=0x00073b; 	X(PUSH(dx));	// 9008 push    dx ;~ 0613:073B
cs=0x613;eip=0x00073c; 	X(PUSH(ax));	// 9009 push    ax ;~ 0613:073C
cs=0x613;eip=0x00073d; 	J(CALLF(__afuldiv,0));	// 9010 call    __aFuldiv ;~ 0613:073D
cs=0x613;eip=0x000742; 	X(MOV(*(dw*)(raddr(ss,bp+var_e6)), ax));	// 9011 mov     [bp+var_E6], ax ;~ 0613:0742
cs=0x613;eip=0x000746; 	T(SUB(ax, ax));	// 9012 sub     ax, ax ;~ 0613:0746
cs=0x613;eip=0x000748; 	X(PUSH(ax));	// 9013 push    ax ;~ 0613:0748
cs=0x613;eip=0x000749; 	T(MOV(ax, pstate_minusrotate_y_1));	// 9014 mov     ax, pState_minusRotate_y_1 ;~ 0613:0749
cs=0x613;eip=0x00074c; 	T(NEG(ax));	// 9015 neg     ax ;~ 0613:074C
cs=0x613;eip=0x00074e; 	X(PUSH(ax));	// 9016 push    ax ;~ 0613:074E
cs=0x613;eip=0x00074f; 	T(MOV(ax, pstate_minusrotate_x_1));	// 9017 mov     ax, pState_minusRotate_x_1 ;~ 0613:074F
cs=0x613;eip=0x000752; 	T(NEG(ax));	// 9018 neg     ax ;~ 0613:0752
cs=0x613;eip=0x000754; 	X(PUSH(ax));	// 9019 push    ax ;~ 0613:0754
cs=0x613;eip=0x000755; 	T(MOV(ax, pstate_minusrotate_z_1));	// 9020 mov     ax, pState_minusRotate_z_1 ;~ 0613:0755
cs=0x613;eip=0x000758; 	T(NEG(ax));	// 9021 neg     ax ;~ 0613:0758
cs=0x613;eip=0x00075a; 	X(PUSH(ax));	// 9022 push    ax ;~ 0613:075A
cs=0x613;eip=0x00075b; 	J(CALLF(mat_rot_zxy,0));	// 9023 call    mat_rot_zxy ;~ 0613:075B
cs=0x613;eip=0x000760; 	T(ADD(sp, 8));	// 9024 add     sp, 8 ;~ 0613:0760
cs=0x613;eip=0x000763; 	X(PUSH(si));	// 9025 push    si ;~ 0613:0763
cs=0x613;eip=0x000764; 	T(MOV(di, offset(dseg,mat_unk)));	// 9026 mov     di, offset mat_unk ;~ 0613:0764
cs=0x613;eip=0x000767; 	T(MOV(si, ax));	// 9027 mov     si, ax ;~ 0613:0767
cs=0x613;eip=0x000769; 	X(PUSH(ds));	// 9028 push    ds ;~ 0613:0769
cs=0x613;eip=0x00076a; 	X(POP(es));	// 9029 pop     es ;~ 0613:076A
cs=0x613;eip=0x00076b; 	T(MOV(cx, 9));	// 9031 mov     cx, 9 ;~ 0613:076B
	// 9032 repne movsw ;~ 0613:076E
cs=0x613;eip=0x00076e; 	X(	REPNE MOVSW);	// 9032 repne movsw ;~ 0613:076E
cs=0x613;eip=0x000770; 	X(POP(si));	// 9033 pop     si ;~ 0613:0770
cs=0x613;eip=0x000771; 	T(CMP(pstate_minusrotate_x_1, 0));	// 9034 cmp     pState_minusRotate_x_1, 0 ;~ 0613:0771
cs=0x613;eip=0x000776; 	J(JNZ(loc_14e8f));	// 9035 jnz     short loc_14E8F ;~ 0613:0776
cs=0x613;eip=0x000778; 	T(CMP(pstate_minusrotate_z_1, 0));	// 9036 cmp     pState_minusRotate_z_1, 0 ;~ 0613:0778
cs=0x613;eip=0x00077d; 	J(JZ(loc_14ec6));	// 9037 jz      short loc_14EC6 ;~ 0613:077D
loc_14e8f:
	// 4841 
cs=0x613;eip=0x00077f; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1c6)), 0));	// 9040 mov     [bp+vec_1C6], 0 ;~ 0613:077F
cs=0x613;eip=0x000785; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), 0));	// 9041 mov     [bp+var_1C4], 0 ;~ 0613:0785
cs=0x613;eip=0x00078b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), 0x82));	// 9042 mov     [bp+var_1C2], 82h ; '‚' ;~ 0613:078B
cs=0x613;eip=0x000791; 	T(ax = bp+vec_fc);	// 9043 lea     ax, [bp+vec_FC] ;~ 0613:0791
cs=0x613;eip=0x000795; 	X(PUSH(ax));	// 9044 push    ax ;~ 0613:0795
cs=0x613;eip=0x000796; 	T(MOV(ax, offset(dseg,mat_unk)));	// 9045 mov     ax, offset mat_unk ;~ 0613:0796
cs=0x613;eip=0x000799; 	X(PUSH(ax));	// 9046 push    ax ;~ 0613:0799
cs=0x613;eip=0x00079a; 	T(ax = bp+vec_1c6);	// 9047 lea     ax, [bp+vec_1C6] ;~ 0613:079A
cs=0x613;eip=0x00079e; 	X(PUSH(ax));	// 9048 push    ax ;~ 0613:079E
cs=0x613;eip=0x00079f; 	J(CALLF(mat_mul_vector,0));	// 9049 call    mat_mul_vector ;~ 0613:079F
cs=0x613;eip=0x0007a4; 	T(ADD(sp, 6));	// 9050 add     sp, 6 ;~ 0613:07A4
cs=0x613;eip=0x0007a7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9051 mov     bx, [bp+arg_0] ;~ 0613:07A7
cs=0x613;eip=0x0007aa; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_fa))));	// 9052 mov     ax, [bp+var_FA] ;~ 0613:07AA
cs=0x613;eip=0x0007ae; 	T(NEG(ax));	// 9053 neg     ax ;~ 0613:07AE
cs=0x613;eip=0x0007b0; 	X(MOV(*(dw*)(raddr(ds,bx+0x1E)), ax));	// 9054 mov     [bx+1Eh], ax ;~ 0613:07B0
cs=0x613;eip=0x0007b3; 	J(JMP(loc_14ece));	// 9055 jmp     short loc_14ECE ;~ 0613:07B3
loc_14ec6:
	// 4842 
cs=0x613;eip=0x0007b6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9060 mov     bx, [bp+arg_0] ;~ 0613:07B6
cs=0x613;eip=0x0007b9; 	X(MOV(*(dw*)(raddr(ds,bx+0x1E)), 0));	// 9061 mov     word ptr [bx+1Eh], 0 ;~ 0613:07B9
loc_14ece:
	// 4843 
cs=0x613;eip=0x0007be; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9064 mov     bx, [bp+arg_0] ;~ 0613:07BE
cs=0x613;eip=0x0007c1; 	T(TEST(*(dw*)(raddr(ds,bx+0x3E)), 0x3FF));	// 9065 test    word ptr [bx+3Eh], 3FFh ;~ 0613:07C1
cs=0x613;eip=0x0007c6; 	J(JZ(loc_14f04));	// 9066 jz      short loc_14F04 ;~ 0613:07C6
cs=0x613;eip=0x0007c8; 	X(MOV(*(raddr(ss,bp+var_ec)), 1));	// 9067 mov     [bp+var_EC], 1 ;~ 0613:07C8
cs=0x613;eip=0x0007cd; 	T(SUB(ax, ax));	// 9068 sub     ax, ax ;~ 0613:07CD
cs=0x613;eip=0x0007cf; 	X(PUSH(ax));	// 9069 push    ax ;~ 0613:07CF
cs=0x613;eip=0x0007d0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x3E))));	// 9070 mov     ax, [bx+3Eh] ;~ 0613:07D0
cs=0x613;eip=0x0007d3; 	T(NEG(ax));	// 9071 neg     ax ;~ 0613:07D3
cs=0x613;eip=0x0007d5; 	X(PUSH(ax));	// 9072 push    ax ;~ 0613:07D5
cs=0x613;eip=0x0007d6; 	T(SUB(ax, ax));	// 9073 sub     ax, ax ;~ 0613:07D6
cs=0x613;eip=0x0007d8; 	X(PUSH(ax));	// 9074 push    ax ;~ 0613:07D8
cs=0x613;eip=0x0007d9; 	X(PUSH(ax));	// 9075 push    ax ;~ 0613:07D9
cs=0x613;eip=0x0007da; 	J(CALLF(mat_rot_zxy,0));	// 9076 call    mat_rot_zxy ;~ 0613:07DA
cs=0x613;eip=0x0007df; 	T(ADD(sp, 8));	// 9077 add     sp, 8 ;~ 0613:07DF
cs=0x613;eip=0x0007e2; 	X(PUSH(si));	// 9078 push    si ;~ 0613:07E2
cs=0x613;eip=0x0007e3; 	T(di = bp+var_10e);	// 9079 lea     di, [bp+var_10E] ;~ 0613:07E3
cs=0x613;eip=0x0007e7; 	T(MOV(si, ax));	// 9080 mov     si, ax ;~ 0613:07E7
cs=0x613;eip=0x0007e9; 	X(PUSH(ss));	// 9081 push    ss ;~ 0613:07E9
cs=0x613;eip=0x0007ea; 	X(POP(es));	// 9082 pop     es ;~ 0613:07EA
cs=0x613;eip=0x0007eb; 	T(MOV(cx, 9));	// 9084 mov     cx, 9 ;~ 0613:07EB
	// 9085 repne movsw ;~ 0613:07EE
cs=0x613;eip=0x0007ee; 	X(	REPNE MOVSW);	// 9085 repne movsw ;~ 0613:07EE
cs=0x613;eip=0x0007f0; 	X(POP(si));	// 9086 pop     si ;~ 0613:07F0
cs=0x613;eip=0x0007f1; 	J(JMP(loc_14f09));	// 9087 jmp     short loc_14F09 ;~ 0613:07F1
loc_14f04:
	// 4844 
cs=0x613;eip=0x0007f4; 	X(MOV(*(raddr(ss,bp+var_ec)), 0));	// 9092 mov     [bp+var_EC], 0 ;~ 0613:07F4
loc_14f09:
	// 4845 
cs=0x613;eip=0x0007f9; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1c6)), 0));	// 9095 mov     [bp+vec_1C6], 0 ;~ 0613:07F9
cs=0x613;eip=0x0007ff; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), 0x7530));	// 9096 mov     [bp+var_1C4], 7530h ; 30000 ;~ 0613:07FF
cs=0x613;eip=0x000805; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), 0));	// 9097 mov     [bp+var_1C2], 0 ;~ 0613:0805
cs=0x613;eip=0x00080b; 	T(ax = bp+vec_fc);	// 9098 lea     ax, [bp+vec_FC] ;~ 0613:080B
cs=0x613;eip=0x00080f; 	X(PUSH(ax));	// 9099 push    ax ;~ 0613:080F
cs=0x613;eip=0x000810; 	T(MOV(ax, offset(dseg,mat_unk)));	// 9100 mov     ax, offset mat_unk ;~ 0613:0810
cs=0x613;eip=0x000813; 	X(PUSH(ax));	// 9101 push    ax ;~ 0613:0813
cs=0x613;eip=0x000814; 	T(ax = bp+vec_1c6);	// 9102 lea     ax, [bp+vec_1C6] ;~ 0613:0814
cs=0x613;eip=0x000818; 	X(PUSH(ax));	// 9103 push    ax ;~ 0613:0818
cs=0x613;eip=0x000819; 	J(CALLF(mat_mul_vector,0));	// 9104 call    mat_mul_vector ;~ 0613:0819
cs=0x613;eip=0x00081e; 	T(ADD(sp, 6));	// 9105 add     sp, 6 ;~ 0613:081E
cs=0x613;eip=0x000821; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9106 mov     bx, [bp+arg_0] ;~ 0613:0821
cs=0x613;eip=0x000824; 	T(CMP(*(raddr(ds,bx+0x0C1)), 0));	// 9107 cmp     byte ptr [bx+0C1h], 0 ;~ 0613:0824
cs=0x613;eip=0x000829; 	J(JZ(loc_14f76));	// 9108 jz      short loc_14F76 ;~ 0613:0829
cs=0x613;eip=0x00082b; 	T(CMP(*(dw*)(raddr(ss,bp+var_fa)), 0));	// 9109 cmp     [bp+var_FA], 0 ;~ 0613:082B
cs=0x613;eip=0x000830; 	J(JGE(loc_14f76));	// 9110 jge     short loc_14F76 ;~ 0613:0830
cs=0x613;eip=0x000832; 	T(CMP(*(dw*)(raddr(ds,bx+0x2C)), 0x1E00));	// 9111 cmp     word ptr [bx+2Ch], 1E00h ;~ 0613:0832
cs=0x613;eip=0x000837; 	J(JBE(loc_14f6e));	// 9112 jbe     short loc_14F6E ;~ 0613:0837
cs=0x613;eip=0x000839; 	X(MOV(*(dw*)(raddr(ss,bp+var_f0)), 0x0C0));	// 9113 mov     [bp+var_F0], 0C0h ; 'À' ;~ 0613:0839
cs=0x613;eip=0x00083f; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), 0x0FF40));	// 9114 mov     [bp+var_1C4], 0FF40h ;~ 0613:083F
cs=0x613;eip=0x000845; 	T(ax = bp+vec_e4);	// 9115 lea     ax, [bp+vec_E4] ;~ 0613:0845
cs=0x613;eip=0x000849; 	X(PUSH(ax));	// 9116 push    ax ;~ 0613:0849
cs=0x613;eip=0x00084a; 	T(MOV(ax, offset(dseg,mat_unk)));	// 9117 mov     ax, offset mat_unk ;~ 0613:084A
cs=0x613;eip=0x00084d; 	X(PUSH(ax));	// 9118 push    ax ;~ 0613:084D
cs=0x613;eip=0x00084e; 	T(ax = bp+vec_1c6);	// 9119 lea     ax, [bp+vec_1C6] ;~ 0613:084E
cs=0x613;eip=0x000852; 	X(PUSH(ax));	// 9120 push    ax ;~ 0613:0852
cs=0x613;eip=0x000853; 	J(CALLF(mat_mul_vector,0));	// 9121 call    mat_mul_vector ;~ 0613:0853
cs=0x613;eip=0x000858; 	T(ADD(sp, 6));	// 9122 add     sp, 6 ;~ 0613:0858
cs=0x613;eip=0x00085b; 	J(JMP(loc_14f7c));	// 9123 jmp     short loc_14F7C ;~ 0613:085B
loc_14f6e:
	// 4846 
cs=0x613;eip=0x00085e; 	X(MOV(*(dw*)(raddr(ss,bp+var_f0)), 0x0FF40));	// 9128 mov     [bp+var_F0], 0FF40h ;~ 0613:085E
cs=0x613;eip=0x000864; 	J(JMP(loc_14f7c));	// 9129 jmp     short loc_14F7C ;~ 0613:0864
loc_14f76:
	// 4847 
cs=0x613;eip=0x000866; 	X(MOV(*(dw*)(raddr(ss,bp+var_f0)), 0));	// 9134 mov     [bp+var_F0], 0 ;~ 0613:0866
loc_14f7c:
	// 4848 
cs=0x613;eip=0x00086c; 	X(MOV(vec_unk2, 0));	// 9138 mov     vec_unk2, 0 ;~ 0613:086C
cs=0x613;eip=0x000872; 	X(MOV(word_44f38, 0));	// 9139 mov     word_44F38, 0 ;~ 0613:0872
cs=0x613;eip=0x000878; 	X(MOV(planindex_copy, 0x0FFFF));	// 9140 mov     planindex_copy, 0FFFFh ;~ 0613:0878
cs=0x613;eip=0x00087e; 	T(ax = bp+vecl_1c0);	// 9141 lea     ax, [bp+vecl_1C0] ;~ 0613:087E
cs=0x613;eip=0x000882; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), ax));	// 9142 mov     [bp+var_DE], ax ;~ 0613:0882
cs=0x613;eip=0x000886; 	T(ax = bp+vecl_176);	// 9143 lea     ax, [bp+vecl_176] ;~ 0613:0886
cs=0x613;eip=0x00088a; 	X(MOV(*(dw*)(raddr(ss,bp+var_146)), ax));	// 9144 mov     [bp+var_146], ax ;~ 0613:088A
cs=0x613;eip=0x00088e; 	X(MOV(*(raddr(ss,bp+var_e8)), 0));	// 9145 mov     [bp+var_E8], 0 ;~ 0613:088E
cs=0x613;eip=0x000893; 	J(JMP(loc_14ffa));	// 9146 jmp     short loc_14FFA ;~ 0613:0893
loc_14fa6:
	// 4849 
cs=0x613;eip=0x000896; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9152 mov     bx, [bp+arg_0] ;~ 0613:0896
cs=0x613;eip=0x000899; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x36))));	// 9153 mov     ax, [bx+36h] ;~ 0613:0899
loc_14fac:
	// 4850 
cs=0x613;eip=0x00089c; 	X(MOV(pstate_f36mminf40sar2, ax));	// 9156 mov     pState_f36Mminf40sar2, ax ;~ 0613:089C
cs=0x613;eip=0x00089f; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9157 mov     al, [bp+var_E8] ;~ 0613:089F
cs=0x613;eip=0x0008a3; 	T(CBW);	// 9158 cbw ;~ 0613:08A3
cs=0x613;eip=0x0008a4; 	T(MOV(di, ax));	// 9159 mov     di, ax ;~ 0613:08A4
cs=0x613;eip=0x0008a6; 	T(SHL(di, 1));	// 9160 shl     di, 1 ;~ 0613:08A6
cs=0x613;eip=0x0008a8; 	T(MOV(ax, pstate_f36mminf40sar2));	// 9161 mov     ax, pState_f36Mminf40sar2 ;~ 0613:08A8
cs=0x613;eip=0x0008ab; 	X(MOV(*(dw*)(raddr(ss,bp+di+var_140)), ax));	// 9162 mov     [bp+di+var_140], ax ;~ 0613:08AB
cs=0x613;eip=0x0008af; 	X(PUSH(cs));	// 9163 push    cs ;~ 0613:08AF
cs=0x613;eip=0x0008b0; 	J(CALL(plane_rotate_op,0));	// 9164 call    near ptr plane_rotate_op ;~ 0613:08B0
cs=0x613;eip=0x0008b3; 	T(MOV(ax, vec_planerotopresult));	// 9165 mov     ax, vec_planerotopresult ;~ 0613:08B3
cs=0x613;eip=0x0008b6; 	T(CWD);	// 9166 cwd ;~ 0613:08B6
cs=0x613;eip=0x0008b7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9167 mov     bx, [bp+var_DE] ;~ 0613:08B7
cs=0x613;eip=0x0008bb; 	X(ADD(*(dw*)(raddr(ds,bx+0)), ax));	// 9168 add     [bx+0], ax ;~ 0613:08BB
cs=0x613;eip=0x0008bd; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 9169 adc     [bx+2], dx ;~ 0613:08BD
cs=0x613;eip=0x0008c0; 	T(MOV(ax, word_44f3e));	// 9170 mov     ax, word_44F3E ;~ 0613:08C0
cs=0x613;eip=0x0008c3; 	T(CWD);	// 9171 cwd ;~ 0613:08C3
cs=0x613;eip=0x0008c4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9172 mov     bx, [bp+var_DE] ;~ 0613:08C4
cs=0x613;eip=0x0008c8; 	X(ADD(*(dw*)(raddr(ds,bx+4)), ax));	// 9173 add     [bx+4], ax ;~ 0613:08C8
cs=0x613;eip=0x0008cb; 	X(ADC(*(dw*)(raddr(ds,bx+6)), dx));	// 9174 adc     [bx+6], dx ;~ 0613:08CB
cs=0x613;eip=0x0008ce; 	T(MOV(ax, word_44f40));	// 9175 mov     ax, word_44F40 ;~ 0613:08CE
cs=0x613;eip=0x0008d1; 	T(CWD);	// 9176 cwd ;~ 0613:08D1
cs=0x613;eip=0x0008d2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9177 mov     bx, [bp+var_DE] ;~ 0613:08D2
cs=0x613;eip=0x0008d6; 	X(ADD(*(dw*)(raddr(ds,bx+8)), ax));	// 9178 add     [bx+8], ax ;~ 0613:08D6
cs=0x613;eip=0x0008d9; 	X(ADC(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 9179 adc     [bx+0Ah], dx ;~ 0613:08D9
loc_14fec:
	// 4851 
cs=0x613;eip=0x0008dc; 	X(ADD(*(dw*)(raddr(ss,bp+var_de)), 0x0C));	// 9182 add     [bp+var_DE], 0Ch ;~ 0613:08DC
cs=0x613;eip=0x0008e1; 	X(ADD(*(dw*)(raddr(ss,bp+var_146)), 0x0C));	// 9183 add     [bp+var_146], 0Ch ;~ 0613:08E1
cs=0x613;eip=0x0008e6; 	X(INC(*(raddr(ss,bp+var_e8))));	// 9184 inc     [bp+var_E8] ;~ 0613:08E6
loc_14ffa:
	// 4852 
cs=0x613;eip=0x0008ea; 	T(CMP(*(raddr(ss,bp+var_e8)), 4));	// 9187 cmp     [bp+var_E8], 4 ;~ 0613:08EA
cs=0x613;eip=0x0008ef; 	J(JL(loc_15004));	// 9188 jl      short loc_15004 ;~ 0613:08EF
cs=0x613;eip=0x0008f1; 	J(JMP(loc_1513e));	// 9189 jmp     loc_1513E ;~ 0613:08F1
loc_15004:
	// 4853 
cs=0x613;eip=0x0008f4; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9193 mov     al, [bp+var_E8] ;~ 0613:08F4
cs=0x613;eip=0x0008f8; 	T(CBW);	// 9194 cbw ;~ 0613:08F8
cs=0x613;eip=0x0008f9; 	T(MOV(di, ax));	// 9195 mov     di, ax ;~ 0613:08F9
cs=0x613;eip=0x0008fb; 	T(SHL(di, 1));	// 9196 shl     di, 1 ;~ 0613:08FB
cs=0x613;eip=0x0008fd; 	T(ADD(di, ax));	// 9197 add     di, ax ;~ 0613:08FD
cs=0x613;eip=0x0008ff; 	T(SHL(di, 1));	// 9198 shl     di, 1           ; *6 ;~ 0613:08FF
cs=0x613;eip=0x000901; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 9199 mov     bx, [bp+arg_2] ;~ 0613:0901
cs=0x613;eip=0x000904; 	X(PUSH(si));	// 9200 push    si ;~ 0613:0904
cs=0x613;eip=0x000905; 	T(si = bx+di+0x0D2);	// 9201 lea     si, [bx+di+0D2h] ;~ 0613:0905
cs=0x613;eip=0x000909; 	T(di = bp+vec_1c6);	// 9202 lea     di, [bp+vec_1C6] ;~ 0613:0909
cs=0x613;eip=0x00090d; 	X(PUSH(ss));	// 9203 push    ss ;~ 0613:090D
cs=0x613;eip=0x00090e; 	X(POP(es));	// 9204 pop     es ;~ 0613:090E
cs=0x613;eip=0x00090f; 	X(MOVSW);	// 9205 movsw ;~ 0613:090F
cs=0x613;eip=0x000910; 	X(MOVSW);	// 9206 movsw ;~ 0613:0910
cs=0x613;eip=0x000911; 	X(MOVSW);	// 9207 movsw ;~ 0613:0911
cs=0x613;eip=0x000912; 	X(POP(si));	// 9208 pop     si ;~ 0613:0912
cs=0x613;eip=0x000913; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9209 mov     al, [bp+var_E8] ;~ 0613:0913
cs=0x613;eip=0x000917; 	T(CBW);	// 9210 cbw ;~ 0613:0917
cs=0x613;eip=0x000918; 	T(MOV(di, ax));	// 9211 mov     di, ax ;~ 0613:0918
cs=0x613;eip=0x00091a; 	T(SHL(di, 1));	// 9212 shl     di, 1 ;~ 0613:091A
cs=0x613;eip=0x00091c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9213 mov     bx, [bp+arg_0] ;~ 0613:091C
cs=0x613;eip=0x00091f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+di+0x54))));	// 9214 mov     ax, [bx+di+54h] ;~ 0613:091F
cs=0x613;eip=0x000922; 	T(ADD(ax, 0x180));	// 9215 add     ax, 180h        ; 384 = 24*16 ;~ 0613:0922
cs=0x613;eip=0x000925; 	T(NEG(ax));	// 9216 neg     ax ;~ 0613:0925
cs=0x613;eip=0x000927; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 9217 mov     [bp+var_1C4], ax ; adjusting wheel heights? ;~ 0613:0927
cs=0x613;eip=0x00092b; 	T(CMP(*(dw*)(raddr(ss,bp+var_f0)), 0));	// 9218 cmp     [bp+var_F0], 0 ;~ 0613:092B
cs=0x613;eip=0x000930; 	J(JGE(loc_1504a));	// 9219 jge     short loc_1504A ;~ 0613:0930
cs=0x613;eip=0x000932; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f0))));	// 9220 mov     ax, [bp+var_F0] ;~ 0613:0932
cs=0x613;eip=0x000936; 	X(SUB(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 9221 sub     [bp+var_1C4], ax ;~ 0613:0936
loc_1504a:
	// 4854 
cs=0x613;eip=0x00093a; 	T(CMP(*(raddr(ss,bp+var_ec)), 0));	// 9224 cmp     [bp+var_EC], 0 ;~ 0613:093A
cs=0x613;eip=0x00093f; 	J(JZ(loc_15077));	// 9225 jz      short loc_15077 ;~ 0613:093F
cs=0x613;eip=0x000941; 	T(ax = bp+vec_fc);	// 9226 lea     ax, [bp+vec_FC] ;~ 0613:0941
cs=0x613;eip=0x000945; 	X(PUSH(ax));	// 9227 push    ax ;~ 0613:0945
cs=0x613;eip=0x000946; 	T(ax = bp+var_10e);	// 9228 lea     ax, [bp+var_10E] ;~ 0613:0946
cs=0x613;eip=0x00094a; 	X(PUSH(ax));	// 9229 push    ax ;~ 0613:094A
cs=0x613;eip=0x00094b; 	T(ax = bp+vec_1c6);	// 9230 lea     ax, [bp+vec_1C6] ;~ 0613:094B
cs=0x613;eip=0x00094f; 	X(PUSH(ax));	// 9231 push    ax ;~ 0613:094F
cs=0x613;eip=0x000950; 	J(CALLF(mat_mul_vector,0));	// 9232 call    mat_mul_vector ;~ 0613:0950
cs=0x613;eip=0x000955; 	T(ADD(sp, 6));	// 9233 add     sp, 6 ;~ 0613:0955
cs=0x613;eip=0x000958; 	X(PUSH(si));	// 9234 push    si ;~ 0613:0958
cs=0x613;eip=0x000959; 	T(di = bp+vec_1c6);	// 9235 lea     di, [bp+vec_1C6] ;~ 0613:0959
cs=0x613;eip=0x00095d; 	T(si = bp+vec_fc);	// 9236 lea     si, [bp+vec_FC] ;~ 0613:095D
cs=0x613;eip=0x000961; 	X(PUSH(ss));	// 9237 push    ss ;~ 0613:0961
cs=0x613;eip=0x000962; 	X(POP(es));	// 9238 pop     es ;~ 0613:0962
cs=0x613;eip=0x000963; 	X(MOVSW);	// 9239 movsw ;~ 0613:0963
cs=0x613;eip=0x000964; 	X(MOVSW);	// 9240 movsw ;~ 0613:0964
cs=0x613;eip=0x000965; 	X(MOVSW);	// 9241 movsw ;~ 0613:0965
cs=0x613;eip=0x000966; 	X(POP(si));	// 9242 pop     si ;~ 0613:0966
loc_15077:
	// 4855 
cs=0x613;eip=0x000967; 	T(ax = bp+vec_fc);	// 9245 lea     ax, [bp+vec_FC] ;~ 0613:0967
cs=0x613;eip=0x00096b; 	X(PUSH(ax));	// 9246 push    ax ;~ 0613:096B
cs=0x613;eip=0x00096c; 	T(MOV(ax, offset(dseg,mat_unk)));	// 9247 mov     ax, offset mat_unk ;~ 0613:096C
cs=0x613;eip=0x00096f; 	X(PUSH(ax));	// 9248 push    ax ;~ 0613:096F
cs=0x613;eip=0x000970; 	T(ax = bp+vec_1c6);	// 9249 lea     ax, [bp+vec_1C6] ;~ 0613:0970
cs=0x613;eip=0x000974; 	X(PUSH(ax));	// 9250 push    ax ;~ 0613:0974
cs=0x613;eip=0x000975; 	J(CALLF(mat_mul_vector,0));	// 9251 call    mat_mul_vector ;~ 0613:0975
cs=0x613;eip=0x00097a; 	T(ADD(sp, 6));	// 9252 add     sp, 6 ;~ 0613:097A
cs=0x613;eip=0x00097d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vec_fc))));	// 9253 mov     ax, [bp+vec_FC] ;~ 0613:097D
cs=0x613;eip=0x000981; 	T(CWD);	// 9254 cwd ;~ 0613:0981
cs=0x613;eip=0x000982; 	T(ADD(ax, pstate_lvec1_x));	// 9255 add     ax, pState_lvec1_x ;~ 0613:0982
cs=0x613;eip=0x000986; 	T(ADC(dx, word_449c0));	// 9256 adc     dx, word_449C0 ;~ 0613:0986
cs=0x613;eip=0x00098a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9257 mov     bx, [bp+var_DE] ;~ 0613:098A
cs=0x613;eip=0x00098e; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 9258 mov     [bx+0], ax ;~ 0613:098E
cs=0x613;eip=0x000990; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 9259 mov     [bx+2], dx ;~ 0613:0990
cs=0x613;eip=0x000993; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_fa))));	// 9260 mov     ax, [bp+var_FA] ;~ 0613:0993
cs=0x613;eip=0x000997; 	T(CWD);	// 9261 cwd ;~ 0613:0997
cs=0x613;eip=0x000998; 	T(ADD(ax, pstate_lvec1_y));	// 9262 add     ax, pState_lvec1_y ;~ 0613:0998
cs=0x613;eip=0x00099c; 	T(ADC(dx, word_449c8));	// 9263 adc     dx, word_449C8 ;~ 0613:099C
cs=0x613;eip=0x0009a0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9264 mov     bx, [bp+var_DE] ;~ 0613:09A0
cs=0x613;eip=0x0009a4; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 9265 mov     [bx+4], ax ;~ 0613:09A4
cs=0x613;eip=0x0009a7; 	X(MOV(*(dw*)(raddr(ds,bx+6)), dx));	// 9266 mov     [bx+6], dx ;~ 0613:09A7
cs=0x613;eip=0x0009aa; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f8))));	// 9267 mov     ax, [bp+var_F8] ;~ 0613:09AA
cs=0x613;eip=0x0009ae; 	T(CWD);	// 9268 cwd ;~ 0613:09AE
cs=0x613;eip=0x0009af; 	T(ADD(ax, pstate_lvec1_z));	// 9269 add     ax, pState_lvec1_z ;~ 0613:09AF
cs=0x613;eip=0x0009b3; 	T(ADC(dx, word_449cc));	// 9270 adc     dx, word_449CC ;~ 0613:09B3
cs=0x613;eip=0x0009b7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9271 mov     bx, [bp+var_DE] ;~ 0613:09B7
cs=0x613;eip=0x0009bb; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 9272 mov     [bx+8], ax ;~ 0613:09BB
cs=0x613;eip=0x0009be; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 9273 mov     [bx+0Ah], dx ;~ 0613:09BE
cs=0x613;eip=0x0009c1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9274 mov     bx, [bp+var_146] ;~ 0613:09C1
cs=0x613;eip=0x0009c5; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_de))));	// 9275 mov     di, [bp+var_DE] ;~ 0613:09C5
cs=0x613;eip=0x0009c9; 	T(MOV(ax, *(dw*)(raddr(ds,di+0))));	// 9276 mov     ax, [di+0] ;~ 0613:09C9
cs=0x613;eip=0x0009cb; 	T(MOV(dx, *(dw*)(raddr(ds,di+2))));	// 9277 mov     dx, [di+2] ;~ 0613:09CB
cs=0x613;eip=0x0009ce; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 9278 mov     [bx+0], ax ;~ 0613:09CE
cs=0x613;eip=0x0009d0; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 9279 mov     [bx+2], dx ;~ 0613:09D0
cs=0x613;eip=0x0009d3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9280 mov     bx, [bp+var_146] ;~ 0613:09D3
cs=0x613;eip=0x0009d7; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_de))));	// 9281 mov     di, [bp+var_DE] ;~ 0613:09D7
cs=0x613;eip=0x0009db; 	T(MOV(ax, *(dw*)(raddr(ds,di+4))));	// 9282 mov     ax, [di+4] ;~ 0613:09DB
cs=0x613;eip=0x0009de; 	T(MOV(dx, *(dw*)(raddr(ds,di+6))));	// 9283 mov     dx, [di+6] ;~ 0613:09DE
cs=0x613;eip=0x0009e1; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 9284 mov     [bx+4], ax ;~ 0613:09E1
cs=0x613;eip=0x0009e4; 	X(MOV(*(dw*)(raddr(ds,bx+6)), dx));	// 9285 mov     [bx+6], dx ;~ 0613:09E4
cs=0x613;eip=0x0009e7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9286 mov     bx, [bp+var_146] ;~ 0613:09E7
cs=0x613;eip=0x0009eb; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_de))));	// 9287 mov     di, [bp+var_DE] ;~ 0613:09EB
cs=0x613;eip=0x0009ef; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 9288 mov     ax, [di+8] ;~ 0613:09EF
cs=0x613;eip=0x0009f2; 	T(MOV(dx, *(dw*)(raddr(ds,di+0x0A))));	// 9289 mov     dx, [di+0Ah] ;~ 0613:09F2
cs=0x613;eip=0x0009f5; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 9290 mov     [bx+8], ax ;~ 0613:09F5
cs=0x613;eip=0x0009f8; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 9291 mov     [bx+0Ah], dx ;~ 0613:09F8
cs=0x613;eip=0x0009fb; 	T(CMP(*(dw*)(raddr(ss,bp+var_e6)), 0));	// 9292 cmp     [bp+var_E6], 0 ;~ 0613:09FB
cs=0x613;eip=0x000a00; 	J(JNZ(loc_15115));	// 9293 jnz     short loc_15115 ;~ 0613:0A00
cs=0x613;eip=0x000a02; 	J(JMP(loc_14fec));	// 9294 jmp     loc_14FEC ;~ 0613:0A02
loc_15115:
	// 4856 
cs=0x613;eip=0x000a05; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e6))));	// 9298 mov     ax, [bp+var_E6] ;~ 0613:0A05
cs=0x613;eip=0x000a09; 	X(MOV(word_44f3a, ax));	// 9299 mov     word_44F3A, ax ;~ 0613:0A09
cs=0x613;eip=0x000a0c; 	T(CMP(*(dw*)(raddr(ss,bp+pstate_f40_sar2)), 0));	// 9300 cmp     [bp+pState_f40_sar2], 0 ;~ 0613:0A0C
cs=0x613;eip=0x000a11; 	J(JNZ(loc_15126));	// 9301 jnz     short loc_15126 ;~ 0613:0A11
cs=0x613;eip=0x000a13; 	J(JMP(loc_14fa6));	// 9302 jmp     loc_14FA6 ;~ 0613:0A13
loc_15126:
	// 4857 
cs=0x613;eip=0x000a16; 	T(CMP(*(raddr(ss,bp+var_e8)), 2));	// 9306 cmp     [bp+var_E8], 2 ;~ 0613:0A16
cs=0x613;eip=0x000a1b; 	J(JL(loc_15130));	// 9307 jl      short loc_15130 ;~ 0613:0A1B
cs=0x613;eip=0x000a1d; 	J(JMP(loc_14fa6));	// 9308 jmp     loc_14FA6 ;~ 0613:0A1D
loc_15130:
	// 4858 
cs=0x613;eip=0x000a20; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9312 mov     bx, [bp+arg_0] ;~ 0613:0A20
cs=0x613;eip=0x000a23; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x36))));	// 9313 mov     ax, [bx+36h] ;~ 0613:0A23
cs=0x613;eip=0x000a26; 	T(SUB(ax, *(dw*)(raddr(ss,bp+pstate_f40_sar2))));	// 9314 sub     ax, [bp+pState_f40_sar2] ;~ 0613:0A26
cs=0x613;eip=0x000a2a; 	J(JMP(loc_14fac));	// 9315 jmp     loc_14FAC ;~ 0613:0A2A
loc_1513e:
	// 4859 
cs=0x613;eip=0x000a2e; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 9320 mov     [bp+var_2], 0 ;~ 0613:0A2E
loc_15142:
	// 4860 
cs=0x613;eip=0x000a32; 	X(INC(*(raddr(ss,bp+var_2))));	// 9323 inc     [bp+var_2] ;~ 0613:0A32
cs=0x613;eip=0x000a35; 	T(CMP(*(raddr(ss,bp+var_2)), 5));	// 9324 cmp     [bp+var_2], 5 ;~ 0613:0A35
cs=0x613;eip=0x000a39; 	J(JNZ(loc_151a2));	// 9325 jnz     short loc_151A2 ;~ 0613:0A39
cs=0x613;eip=0x000a3b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9326 mov     bx, [bp+arg_0] ;~ 0613:0A3B
cs=0x613;eip=0x000a3e; 	X(MOV(*(dw*)(raddr(ds,bx+0x36)), 0x200));	// 9327 mov     word ptr [bx+36h], 200h ;~ 0613:0A3E
cs=0x613;eip=0x000a43; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 9328 mov     al, [bp+arg_8] ;~ 0613:0A43
cs=0x613;eip=0x000a46; 	T(CBW);	// 9329 cbw ;~ 0613:0A46
cs=0x613;eip=0x000a47; 	X(PUSH(ax));	// 9330 push    ax ;~ 0613:0A47
cs=0x613;eip=0x000a48; 	T(MOV(ax, 1));	// 9331 mov     ax, 1 ;~ 0613:0A48
cs=0x613;eip=0x000a4b; 	X(PUSH(ax));	// 9332 push    ax ;~ 0613:0A4B
cs=0x613;eip=0x000a4c; 	X(PUSH(cs));	// 9333 push    cs ;~ 0613:0A4C
cs=0x613;eip=0x000a4d; 	J(CALL(update_crash_state,0));	// 9334 call    near ptr update_crash_state ;~ 0613:0A4D
cs=0x613;eip=0x000a50; 	T(ADD(sp, 4));	// 9335 add     sp, 4 ;~ 0613:0A50
loc_15163:
	// 4861 
cs=0x613;eip=0x000a53; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9338 mov     bx, [bp+arg_0]  ; grip data... ;~ 0613:0A53
cs=0x613;eip=0x000a56; 	T(CMP(*(raddr(ds,bx+0x0C2)), 5));	// 9339 cmp     byte ptr [bx+0C2h], 5 ;~ 0613:0A56
cs=0x613;eip=0x000a5b; 	J(JNZ(loc_15192));	// 9340 jnz     short loc_15192 ;~ 0613:0A5B
cs=0x613;eip=0x000a5d; 	T(CMP(*(raddr(ds,bx+0x0C3)), 5));	// 9341 cmp     byte ptr [bx+0C3h], 5 ;~ 0613:0A5D
cs=0x613;eip=0x000a62; 	J(JNZ(loc_15192));	// 9342 jnz     short loc_15192 ;~ 0613:0A62
cs=0x613;eip=0x000a64; 	T(CMP(*(raddr(ds,bx+0x0C4)), 5));	// 9343 cmp     byte ptr [bx+0C4h], 5 ;~ 0613:0A64
cs=0x613;eip=0x000a69; 	J(JNZ(loc_15192));	// 9344 jnz     short loc_15192 ;~ 0613:0A69
cs=0x613;eip=0x000a6b; 	T(CMP(*(raddr(ds,bx+0x0C5)), 5));	// 9345 cmp     byte ptr [bx+0C5h], 5 ;~ 0613:0A6B
cs=0x613;eip=0x000a70; 	J(JNZ(loc_15192));	// 9346 jnz     short loc_15192 ;~ 0613:0A70
cs=0x613;eip=0x000a72; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 9347 mov     al, [bp+arg_8] ;~ 0613:0A72
cs=0x613;eip=0x000a75; 	T(CBW);	// 9348 cbw ;~ 0613:0A75
cs=0x613;eip=0x000a76; 	X(PUSH(ax));	// 9349 push    ax ;~ 0613:0A76
cs=0x613;eip=0x000a77; 	T(MOV(ax, 2));	// 9350 mov     ax, 2 ;~ 0613:0A77
cs=0x613;eip=0x000a7a; 	X(PUSH(ax));	// 9351 push    ax ;~ 0613:0A7A
cs=0x613;eip=0x000a7b; 	X(PUSH(cs));	// 9352 push    cs ;~ 0613:0A7B
cs=0x613;eip=0x000a7c; 	J(CALL(update_crash_state,0));	// 9353 call    near ptr update_crash_state ;~ 0613:0A7C
cs=0x613;eip=0x000a7f; 	T(ADD(sp, 4));	// 9354 add     sp, 4 ;~ 0613:0A7F
loc_15192:
	// 4862 
cs=0x613;eip=0x000a82; 	T(ax = bp+vecl_1c0);	// 9358 lea     ax, [bp+vecl_1C0] ;~ 0613:0A82
cs=0x613;eip=0x000a86; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), ax));	// 9359 mov     [bp+var_DE], ax ;~ 0613:0A86
cs=0x613;eip=0x000a8a; 	X(MOV(*(raddr(ss,bp+var_e8)), 0));	// 9360 mov     [bp+var_E8], 0 ;~ 0613:0A8A
cs=0x613;eip=0x000a8f; 	J(JMP(loc_15dd1));	// 9361 jmp     loc_15DD1 ;~ 0613:0A8F
loc_151a2:
	// 4863 
cs=0x613;eip=0x000a92; 	T(ax = bp+vecl_1c0);	// 9365 lea     ax, [bp+vecl_1C0] ;~ 0613:0A92
cs=0x613;eip=0x000a96; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), ax));	// 9366 mov     [bp+var_DE], ax ;~ 0613:0A96
cs=0x613;eip=0x000a9a; 	T(ax = bp+vecl_176);	// 9367 lea     ax, [bp+vecl_176] ;~ 0613:0A9A
cs=0x613;eip=0x000a9e; 	X(MOV(*(dw*)(raddr(ss,bp+var_146)), ax));	// 9368 mov     [bp+var_146], ax ;~ 0613:0A9E
cs=0x613;eip=0x000aa2; 	X(MOV(*(raddr(ss,bp+var_e8)), 0));	// 9369 mov     [bp+var_E8], 0 ;~ 0613:0AA2
cs=0x613;eip=0x000aa7; 	J(JMP(loc_15d39));	// 9370 jmp     loc_15D39 ;~ 0613:0AA7
loc_151ba:
	// 4864 
cs=0x613;eip=0x000aaa; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9374 mov     al, [bp+var_E8] ;~ 0613:0AAA
cs=0x613;eip=0x000aae; 	T(CBW);	// 9375 cbw ;~ 0613:0AAE
cs=0x613;eip=0x000aaf; 	T(MOV(cx, ax));	// 9376 mov     cx, ax ;~ 0613:0AAF
cs=0x613;eip=0x000ab1; 	T(SHL(ax, 1));	// 9377 shl     ax, 1 ;~ 0613:0AB1
cs=0x613;eip=0x000ab3; 	T(ADD(ax, cx));	// 9378 add     ax, cx ;~ 0613:0AB3
cs=0x613;eip=0x000ab5; 	T(SHL(ax, 1));	// 9379 shl     ax, 1 ;~ 0613:0AB5
cs=0x613;eip=0x000ab7; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 9380 add     ax, [bp+arg_0] ;~ 0613:0AB7
cs=0x613;eip=0x000aba; 	T(ADD(ax, 0x74));	// 9381 add     ax, 74h ;~ 0613:0ABA
cs=0x613;eip=0x000abd; 	X(PUSH(ax));	// 9382 push    ax ;~ 0613:0ABD
cs=0x613;eip=0x000abe; 	T(ax = bp+vec_1c6);	// 9383 lea     ax, [bp+vec_1C6] ;~ 0613:0ABE
cs=0x613;eip=0x000ac2; 	X(PUSH(ax));	// 9384 push    ax ;~ 0613:0AC2
cs=0x613;eip=0x000ac3; 	J(CALLF(build_track_object,0));	// 9385 call    build_track_object ;~ 0613:0AC3
cs=0x613;eip=0x000ac8; 	T(ADD(sp, 4));	// 9386 add     sp, 4 ;~ 0613:0AC8
loc_151db:
	// 4865 
cs=0x613;eip=0x000acb; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9389 mov     al, [bp+var_E8] ;~ 0613:0ACB
cs=0x613;eip=0x000acf; 	T(CBW);	// 9390 cbw ;~ 0613:0ACF
cs=0x613;eip=0x000ad0; 	T(MOV(di, ax));	// 9391 mov     di, ax ;~ 0613:0AD0
cs=0x613;eip=0x000ad2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9392 mov     bx, [bp+arg_0] ;~ 0613:0AD2
cs=0x613;eip=0x000ad5; 	T(MOV(al, current_surf_type));	// 9393 mov     al, current_surf_type ;~ 0613:0AD5
cs=0x613;eip=0x000ad8; 	X(MOV(*(raddr(ds,bx+di+0x0C2)), al));	// 9394 mov     [bx+di+0C2h], al ; a CARSTATE field ;~ 0613:0AD8
cs=0x613;eip=0x000adc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9395 mov     bx, [bp+var_DE] ;~ 0613:0ADC
cs=0x613;eip=0x000ae0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 9396 mov     ax, [bx+0] ;~ 0613:0AE0
cs=0x613;eip=0x000ae2; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 9397 mov     dx, [bx+2] ;~ 0613:0AE2
cs=0x613;eip=0x000ae5; 	T(MOV(cl, 6));	// 9398 mov     cl, 6 ;~ 0613:0AE5
loc_151f7:
	// 4866 
cs=0x613;eip=0x000ae7; 	T(SAR(dx, 1));	// 9401 sar     dx, 1 ;~ 0613:0AE7
cs=0x613;eip=0x000ae9; 	T(RCR(ax, 1));	// 9402 rcr     ax, 1 ;~ 0613:0AE9
cs=0x613;eip=0x000aeb; 	T(DEC(cl));	// 9403 dec     cl ;~ 0613:0AEB
cs=0x613;eip=0x000aed; 	J(JNZ(loc_151f7));	// 9404 jnz     short loc_151F7 ;~ 0613:0AED
cs=0x613;eip=0x000aef; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1c6)), ax));	// 9405 mov     [bp+vec_1C6], ax ;~ 0613:0AEF
cs=0x613;eip=0x000af3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9406 mov     bx, [bp+var_DE] ;~ 0613:0AF3
cs=0x613;eip=0x000af7; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 9407 mov     ax, [bx+4] ;~ 0613:0AF7
cs=0x613;eip=0x000afa; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 9408 mov     dx, [bx+6] ;~ 0613:0AFA
cs=0x613;eip=0x000afd; 	T(MOV(cl, 6));	// 9409 mov     cl, 6 ;~ 0613:0AFD
loc_1520f:
	// 4867 
cs=0x613;eip=0x000aff; 	T(SAR(dx, 1));	// 9412 sar     dx, 1 ;~ 0613:0AFF
cs=0x613;eip=0x000b01; 	T(RCR(ax, 1));	// 9413 rcr     ax, 1 ;~ 0613:0B01
cs=0x613;eip=0x000b03; 	T(DEC(cl));	// 9414 dec     cl ;~ 0613:0B03
cs=0x613;eip=0x000b05; 	J(JNZ(loc_1520f));	// 9415 jnz     short loc_1520F ;~ 0613:0B05
cs=0x613;eip=0x000b07; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 9416 mov     [bp+var_1C4], ax ;~ 0613:0B07
cs=0x613;eip=0x000b0b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9417 mov     bx, [bp+var_DE] ;~ 0613:0B0B
cs=0x613;eip=0x000b0f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 9418 mov     ax, [bx+8] ;~ 0613:0B0F
cs=0x613;eip=0x000b12; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 9419 mov     dx, [bx+0Ah] ;~ 0613:0B12
cs=0x613;eip=0x000b15; 	T(MOV(cl, 6));	// 9420 mov     cl, 6 ;~ 0613:0B15
loc_15227:
	// 4868 
cs=0x613;eip=0x000b17; 	T(SAR(dx, 1));	// 9423 sar     dx, 1 ;~ 0613:0B17
cs=0x613;eip=0x000b19; 	T(RCR(ax, 1));	// 9424 rcr     ax, 1 ;~ 0613:0B19
cs=0x613;eip=0x000b1b; 	T(DEC(cl));	// 9425 dec     cl ;~ 0613:0B1B
cs=0x613;eip=0x000b1d; 	J(JNZ(loc_15227));	// 9426 jnz     short loc_15227 ;~ 0613:0B1D
cs=0x613;eip=0x000b1f; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 9427 mov     [bp+var_1C2], ax ;~ 0613:0B1F
cs=0x613;eip=0x000b23; 	T(CMP(byte_44889, 2));	// 9428 cmp     byte_44889, 2 ;~ 0613:0B23
cs=0x613;eip=0x000b28; 	J(JNZ(loc_15240));	// 9429 jnz     short loc_15240 ;~ 0613:0B28
cs=0x613;eip=0x000b2a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c4))));	// 9430 mov     ax, [bp+var_1C4] ;~ 0613:0B2A
cs=0x613;eip=0x000b2e; 	J(JMP(loc_15257));	// 9431 jmp     short loc_15257 ;~ 0613:0B2E
loc_15240:
	// 4869 
cs=0x613;eip=0x000b30; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c2))));	// 9435 push    [bp+var_1C2] ;~ 0613:0B30
cs=0x613;eip=0x000b34; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c4))));	// 9436 push    [bp+var_1C4] ;~ 0613:0B34
cs=0x613;eip=0x000b38; 	X(PUSH(*(dw*)(raddr(ss,bp+vec_1c6))));	// 9437 push    [bp+vec_1C6] ;~ 0613:0B38
cs=0x613;eip=0x000b3c; 	X(PUSH(planindex));	// 9438 push    planindex ;~ 0613:0B3C
cs=0x613;eip=0x000b40; 	X(PUSH(cs));	// 9439 push    cs ;~ 0613:0B40
cs=0x613;eip=0x000b41; 	J(CALL(plane_origin_op,0));	// 9440 call    near ptr plane_origin_op ;~ 0613:0B41
cs=0x613;eip=0x000b44; 	T(ADD(sp, 8));	// 9441 add     sp, 8 ;~ 0613:0B44
loc_15257:
	// 4870 
cs=0x613;eip=0x000b47; 	X(MOV(nextposandnormalip, ax));	// 9444 mov     nextPosAndNormalIP, ax ;~ 0613:0B47
cs=0x613;eip=0x000b4a; 	T(CMP(wallindex, 0x0FFFF));	// 9445 cmp     wallindex, 0FFFFh ;~ 0613:0B4A
cs=0x613;eip=0x000b4f; 	J(JNZ(loc_15264));	// 9446 jnz     short loc_15264 ;~ 0613:0B4F
cs=0x613;eip=0x000b51; 	J(JMP(loc_15950));	// 9447 jmp     loc_15950 ;~ 0613:0B51
loc_15264:
	// 4871 
cs=0x613;eip=0x000b54; 	T(MOV(ax, elrdwallrelated));	// 9451 mov     ax, elRdWallRelated ;~ 0613:0B54
cs=0x613;eip=0x000b57; 	T(CMP(nextposandnormalip, ax));	// 9452 cmp     nextPosAndNormalIP, ax ;~ 0613:0B57
cs=0x613;eip=0x000b5b; 	J(JG(loc_15270));	// 9453 jg      short loc_15270 ;~ 0613:0B5B
cs=0x613;eip=0x000b5d; 	J(JMP(loc_15950));	// 9454 jmp     loc_15950 ;~ 0613:0B5D
loc_15270:
	// 4872 
cs=0x613;eip=0x000b60; 	T(MOV(ax, wallheight));	// 9458 mov     ax, wallHeight ;~ 0613:0B60
cs=0x613;eip=0x000b63; 	T(CMP(nextposandnormalip, ax));	// 9459 cmp     nextPosAndNormalIP, ax ;~ 0613:0B63
cs=0x613;eip=0x000b67; 	J(JL(loc_1527c));	// 9460 jl      short loc_1527C ;~ 0613:0B67
cs=0x613;eip=0x000b69; 	J(JMP(loc_15950));	// 9461 jmp     loc_15950 ;~ 0613:0B69
loc_1527c:
	// 4873 
cs=0x613;eip=0x000b6c; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9465 mov     al, [bp+var_E8] ;~ 0613:0B6C
cs=0x613;eip=0x000b70; 	T(CBW);	// 9466 cbw ;~ 0613:0B70
cs=0x613;eip=0x000b71; 	T(MOV(cx, ax));	// 9467 mov     cx, ax ;~ 0613:0B71
cs=0x613;eip=0x000b73; 	T(SHL(ax, 1));	// 9468 shl     ax, 1 ;~ 0613:0B73
cs=0x613;eip=0x000b75; 	T(ADD(ax, cx));	// 9469 add     ax, cx ;~ 0613:0B75
cs=0x613;eip=0x000b77; 	T(SHL(ax, 1));	// 9470 shl     ax, 1 ;~ 0613:0B77
cs=0x613;eip=0x000b79; 	T(MOV(di, ax));	// 9471 mov     di, ax ;~ 0613:0B79
cs=0x613;eip=0x000b7b; 	T(ADD(di, *(dw*)(raddr(ss,bp+arg_0))));	// 9472 add     di, [bp+arg_0] ;~ 0613:0B7B
cs=0x613;eip=0x000b7e; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x74))));	// 9473 mov     ax, [di+74h] ;~ 0613:0B7E
cs=0x613;eip=0x000b81; 	T(SUB(ax, wallstartx));	// 9474 sub     ax, wallStartX ;~ 0613:0B81
cs=0x613;eip=0x000b85; 	X(MOV(*(dw*)(raddr(ss,bp+vec_182)), ax));	// 9475 mov     [bp+vec_182], ax ;~ 0613:0B85
cs=0x613;eip=0x000b89; 	X(MOV(*(dw*)(raddr(ss,bp+var_180)), 0));	// 9476 mov     [bp+var_180], 0 ;~ 0613:0B89
cs=0x613;eip=0x000b8f; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x78))));	// 9477 mov     ax, [di+78h] ;~ 0613:0B8F
cs=0x613;eip=0x000b92; 	T(SUB(ax, wallstartz));	// 9478 sub     ax, wallStartZ ;~ 0613:0B92
cs=0x613;eip=0x000b96; 	X(MOV(*(dw*)(raddr(ss,bp+var_17e)), ax));	// 9479 mov     [bp+var_17E], ax ;~ 0613:0B96
cs=0x613;eip=0x000b9a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9480 mov     bx, [bp+var_DE] ;~ 0613:0B9A
cs=0x613;eip=0x000b9e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 9481 mov     ax, [bx+0] ;~ 0613:0B9E
cs=0x613;eip=0x000ba0; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 9482 mov     dx, [bx+2] ;~ 0613:0BA0
cs=0x613;eip=0x000ba3; 	T(MOV(cl, 6));	// 9483 mov     cl, 6 ;~ 0613:0BA3
loc_152b5:
	// 4874 
cs=0x613;eip=0x000ba5; 	T(SAR(dx, 1));	// 9486 sar     dx, 1 ;~ 0613:0BA5
cs=0x613;eip=0x000ba7; 	T(RCR(ax, 1));	// 9487 rcr     ax, 1 ;~ 0613:0BA7
cs=0x613;eip=0x000ba9; 	T(DEC(cl));	// 9488 dec     cl ;~ 0613:0BA9
cs=0x613;eip=0x000bab; 	J(JNZ(loc_152b5));	// 9489 jnz     short loc_152B5 ;~ 0613:0BAB
cs=0x613;eip=0x000bad; 	T(SUB(ax, wallstartx));	// 9490 sub     ax, wallStartX ;~ 0613:0BAD
cs=0x613;eip=0x000bb1; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1e4)), ax));	// 9491 mov     [bp+vec_1E4], ax ;~ 0613:0BB1
cs=0x613;eip=0x000bb5; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e2)), 0));	// 9492 mov     [bp+var_1E2], 0 ;~ 0613:0BB5
cs=0x613;eip=0x000bbb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9493 mov     bx, [bp+var_DE] ;~ 0613:0BBB
cs=0x613;eip=0x000bbf; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 9494 mov     ax, [bx+8] ;~ 0613:0BBF
cs=0x613;eip=0x000bc2; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 9495 mov     dx, [bx+0Ah] ;~ 0613:0BC2
cs=0x613;eip=0x000bc5; 	T(MOV(cl, 6));	// 9496 mov     cl, 6 ;~ 0613:0BC5
loc_152d7:
	// 4875 
cs=0x613;eip=0x000bc7; 	T(SAR(dx, 1));	// 9499 sar     dx, 1 ;~ 0613:0BC7
cs=0x613;eip=0x000bc9; 	T(RCR(ax, 1));	// 9500 rcr     ax, 1 ;~ 0613:0BC9
cs=0x613;eip=0x000bcb; 	T(DEC(cl));	// 9501 dec     cl ;~ 0613:0BCB
cs=0x613;eip=0x000bcd; 	J(JNZ(loc_152d7));	// 9502 jnz     short loc_152D7 ;~ 0613:0BCD
cs=0x613;eip=0x000bcf; 	T(SUB(ax, wallstartz));	// 9503 sub     ax, wallStartZ ;~ 0613:0BCF
cs=0x613;eip=0x000bd3; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e0)), ax));	// 9504 mov     [bp+var_1E0], ax ;~ 0613:0BD3
cs=0x613;eip=0x000bd7; 	T(MOV(ax, wallorientation));	// 9505 mov     ax, wallOrientation ;~ 0613:0BD7
cs=0x613;eip=0x000bda; 	T(NEG(ax));	// 9506 neg     ax ;~ 0613:0BDA
cs=0x613;eip=0x000bdc; 	T(SUB(ax, 0x100));	// 9507 sub     ax, 100h ;~ 0613:0BDC
cs=0x613;eip=0x000bdf; 	X(PUSH(ax));	// 9508 push    ax ;~ 0613:0BDF
cs=0x613;eip=0x000be0; 	T(ax = bp+mat_134);	// 9509 lea     ax, [bp+mat_134] ;~ 0613:0BE0
cs=0x613;eip=0x000be4; 	X(PUSH(ax));	// 9510 push    ax ;~ 0613:0BE4
cs=0x613;eip=0x000be5; 	J(CALLF(mat_rot_y,0));	// 9511 call    mat_rot_y ;~ 0613:0BE5
cs=0x613;eip=0x000bea; 	T(ADD(sp, 4));	// 9512 add     sp, 4 ;~ 0613:0BEA
cs=0x613;eip=0x000bed; 	T(ax = bp+vec_c);	// 9513 lea     ax, [bp+vec_C] ;~ 0613:0BED
cs=0x613;eip=0x000bf0; 	X(PUSH(ax));	// 9514 push    ax ;~ 0613:0BF0
cs=0x613;eip=0x000bf1; 	T(ax = bp+mat_134);	// 9515 lea     ax, [bp+mat_134] ;~ 0613:0BF1
cs=0x613;eip=0x000bf5; 	X(PUSH(ax));	// 9516 push    ax ;~ 0613:0BF5
cs=0x613;eip=0x000bf6; 	T(ax = bp+vec_182);	// 9517 lea     ax, [bp+vec_182] ;~ 0613:0BF6
cs=0x613;eip=0x000bfa; 	X(PUSH(ax));	// 9518 push    ax ;~ 0613:0BFA
cs=0x613;eip=0x000bfb; 	J(CALLF(mat_mul_vector,0));	// 9519 call    mat_mul_vector ;~ 0613:0BFB
cs=0x613;eip=0x000c00; 	T(ADD(sp, 6));	// 9520 add     sp, 6 ;~ 0613:0C00
cs=0x613;eip=0x000c03; 	T(ax = bp+vec_1c);	// 9521 lea     ax, [bp+vec_1C] ;~ 0613:0C03
cs=0x613;eip=0x000c06; 	X(PUSH(ax));	// 9522 push    ax ;~ 0613:0C06
cs=0x613;eip=0x000c07; 	T(ax = bp+mat_134);	// 9523 lea     ax, [bp+mat_134] ;~ 0613:0C07
cs=0x613;eip=0x000c0b; 	X(PUSH(ax));	// 9524 push    ax ;~ 0613:0C0B
cs=0x613;eip=0x000c0c; 	T(ax = bp+vec_1e4);	// 9525 lea     ax, [bp+vec_1E4] ;~ 0613:0C0C
cs=0x613;eip=0x000c10; 	X(PUSH(ax));	// 9526 push    ax ;~ 0613:0C10
cs=0x613;eip=0x000c11; 	J(CALLF(mat_mul_vector,0));	// 9527 call    mat_mul_vector ;~ 0613:0C11
cs=0x613;eip=0x000c16; 	T(ADD(sp, 6));	// 9528 add     sp, 6 ;~ 0613:0C16
cs=0x613;eip=0x000c19; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 9529 cmp     [bp+var_18], 0 ;~ 0613:0C19
cs=0x613;eip=0x000c1d; 	J(JLE(loc_15338));	// 9530 jle     short loc_15338 ;~ 0613:0C1D
cs=0x613;eip=0x000c1f; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 9531 cmp     [bp+var_8], 0 ;~ 0613:0C1F
cs=0x613;eip=0x000c23; 	J(JLE(loc_15338));	// 9532 jle     short loc_15338 ;~ 0613:0C23
cs=0x613;eip=0x000c25; 	J(JMP(loc_15950));	// 9533 jmp     loc_15950 ;~ 0613:0C25
loc_15338:
	// 4876 
cs=0x613;eip=0x000c28; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 9538 cmp     [bp+var_18], 0 ;~ 0613:0C28
cs=0x613;eip=0x000c2c; 	J(JGE(loc_15347));	// 9539 jge     short loc_15347 ;~ 0613:0C2C
cs=0x613;eip=0x000c2e; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 9540 cmp     [bp+var_8], 0 ;~ 0613:0C2E
cs=0x613;eip=0x000c32; 	J(JGE(loc_15347));	// 9541 jge     short loc_15347 ;~ 0613:0C32
cs=0x613;eip=0x000c34; 	J(JMP(loc_15950));	// 9542 jmp     loc_15950 ;~ 0613:0C34
loc_15347:
	// 4877 
cs=0x613;eip=0x000c37; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 9547 mov     ax, [bp+var_8] ;~ 0613:0C37
cs=0x613;eip=0x000c3a; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), ax));	// 9548 cmp     [bp+var_18], ax ;~ 0613:0C3A
cs=0x613;eip=0x000c3d; 	J(JLE(loc_1537c));	// 9549 jle     short loc_1537C ;~ 0613:0C3D
cs=0x613;eip=0x000c3f; 	X(MOV(*(raddr(ss,bp+var_136)), 1));	// 9550 mov     [bp+var_136], 1 ;~ 0613:0C3F
cs=0x613;eip=0x000c44; 	X(PUSH(si));	// 9551 push    si ;~ 0613:0C44
cs=0x613;eip=0x000c45; 	T(di = bp+vec_fc);	// 9552 lea     di, [bp+vec_FC] ;~ 0613:0C45
cs=0x613;eip=0x000c49; 	T(si = bp+vec_1c);	// 9553 lea     si, [bp+vec_1C] ;~ 0613:0C49
cs=0x613;eip=0x000c4c; 	X(PUSH(ss));	// 9554 push    ss ;~ 0613:0C4C
cs=0x613;eip=0x000c4d; 	X(POP(es));	// 9555 pop     es ;~ 0613:0C4D
cs=0x613;eip=0x000c4e; 	X(MOVSW);	// 9556 movsw ;~ 0613:0C4E
cs=0x613;eip=0x000c4f; 	X(MOVSW);	// 9557 movsw ;~ 0613:0C4F
cs=0x613;eip=0x000c50; 	X(MOVSW);	// 9558 movsw ;~ 0613:0C50
cs=0x613;eip=0x000c51; 	X(POP(si));	// 9559 pop     si ;~ 0613:0C51
cs=0x613;eip=0x000c52; 	X(PUSH(si));	// 9560 push    si ;~ 0613:0C52
cs=0x613;eip=0x000c53; 	T(di = bp+vec_1c);	// 9561 lea     di, [bp+vec_1C] ;~ 0613:0C53
cs=0x613;eip=0x000c56; 	T(si = bp+vec_c);	// 9562 lea     si, [bp+vec_C] ;~ 0613:0C56
cs=0x613;eip=0x000c59; 	X(MOVSW);	// 9563 movsw ;~ 0613:0C59
cs=0x613;eip=0x000c5a; 	X(MOVSW);	// 9564 movsw ;~ 0613:0C5A
cs=0x613;eip=0x000c5b; 	X(MOVSW);	// 9565 movsw ;~ 0613:0C5B
cs=0x613;eip=0x000c5c; 	X(POP(si));	// 9566 pop     si ;~ 0613:0C5C
cs=0x613;eip=0x000c5d; 	X(PUSH(si));	// 9567 push    si ;~ 0613:0C5D
cs=0x613;eip=0x000c5e; 	T(di = bp+vec_c);	// 9568 lea     di, [bp+vec_C] ;~ 0613:0C5E
cs=0x613;eip=0x000c61; 	T(si = bp+vec_fc);	// 9569 lea     si, [bp+vec_FC] ;~ 0613:0C61
cs=0x613;eip=0x000c65; 	X(MOVSW);	// 9570 movsw ;~ 0613:0C65
cs=0x613;eip=0x000c66; 	X(MOVSW);	// 9571 movsw ;~ 0613:0C66
cs=0x613;eip=0x000c67; 	X(MOVSW);	// 9572 movsw ;~ 0613:0C67
cs=0x613;eip=0x000c68; 	X(POP(si));	// 9573 pop     si ;~ 0613:0C68
cs=0x613;eip=0x000c69; 	J(JMP(loc_15381));	// 9574 jmp     short loc_15381 ;~ 0613:0C69
loc_1537c:
	// 4878 
cs=0x613;eip=0x000c6c; 	X(MOV(*(raddr(ss,bp+var_136)), 0));	// 9579 mov     [bp+var_136], 0 ;~ 0613:0C6C
loc_15381:
	// 4879 
cs=0x613;eip=0x000c71; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 9582 cmp     [bp+var_18], 0 ;~ 0613:0C71
cs=0x613;eip=0x000c75; 	J(JNZ(loc_15398));	// 9583 jnz     short loc_15398 ;~ 0613:0C75
cs=0x613;eip=0x000c77; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e6))));	// 9584 mov     ax, [bp+var_E6] ;~ 0613:0C77
cs=0x613;eip=0x000c7b; 	X(MOV(*(dw*)(raddr(ss,bp+var_f4)), ax));	// 9585 mov     [bp+var_F4], ax ;~ 0613:0C7B
cs=0x613;eip=0x000c7f; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), 0));	// 9586 mov     [bp+var_F2], 0 ;~ 0613:0C7F
cs=0x613;eip=0x000c85; 	J(JMP(loc_1540c));	// 9587 jmp     short loc_1540C ;~ 0613:0C85
loc_15398:
	// 4880 
cs=0x613;eip=0x000c88; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 9592 cmp     [bp+var_8], 0 ;~ 0613:0C88
cs=0x613;eip=0x000c8c; 	J(JNZ(loc_153ae));	// 9593 jnz     short loc_153AE ;~ 0613:0C8C
cs=0x613;eip=0x000c8e; 	X(MOV(*(dw*)(raddr(ss,bp+var_f4)), 0));	// 9594 mov     [bp+var_F4], 0 ;~ 0613:0C8E
cs=0x613;eip=0x000c94; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e6))));	// 9595 mov     ax, [bp+var_E6] ;~ 0613:0C94
cs=0x613;eip=0x000c98; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), ax));	// 9596 mov     [bp+var_F2], ax ;~ 0613:0C98
cs=0x613;eip=0x000c9c; 	J(JMP(loc_1540c));	// 9597 jmp     short loc_1540C ;~ 0613:0C9C
loc_153ae:
	// 4881 
cs=0x613;eip=0x000c9e; 	T(SUB(ax, ax));	// 9601 sub     ax, ax ;~ 0613:0C9E
cs=0x613;eip=0x000ca0; 	X(PUSH(ax));	// 9602 push    ax ;~ 0613:0CA0
cs=0x613;eip=0x000ca1; 	T(ax = bp+vec_fc);	// 9603 lea     ax, [bp+vec_FC] ;~ 0613:0CA1
cs=0x613;eip=0x000ca5; 	X(PUSH(ax));	// 9604 push    ax ;~ 0613:0CA5
cs=0x613;eip=0x000ca6; 	T(ax = bp+vec_c);	// 9605 lea     ax, [bp+vec_C] ;~ 0613:0CA6
cs=0x613;eip=0x000ca9; 	X(PUSH(ax));	// 9606 push    ax ;~ 0613:0CA9
cs=0x613;eip=0x000caa; 	T(ax = bp+vec_1c);	// 9607 lea     ax, [bp+vec_1C] ;~ 0613:0CAA
cs=0x613;eip=0x000cad; 	X(PUSH(ax));	// 9608 push    ax ;~ 0613:0CAD
cs=0x613;eip=0x000cae; 	J(CALLF(vector_op_unk,0));	// 9609 call    vector_op_unk ;~ 0613:0CAE
cs=0x613;eip=0x000cb3; 	T(ADD(sp, 8));	// 9610 add     sp, 8 ;~ 0613:0CB3
cs=0x613;eip=0x000cb6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vec_1c))));	// 9611 mov     ax, [bp+vec_1C] ;~ 0613:0CB6
cs=0x613;eip=0x000cb9; 	T(SUB(ax, *(dw*)(raddr(ss,bp+vec_fc))));	// 9612 sub     ax, [bp+vec_FC] ;~ 0613:0CB9
cs=0x613;eip=0x000cbd; 	T(MOV(cl, 6));	// 9613 mov     cl, 6 ;~ 0613:0CBD
cs=0x613;eip=0x000cbf; 	T(SHL(ax, cl));	// 9614 shl     ax, cl ;~ 0613:0CBF
cs=0x613;eip=0x000cc1; 	X(MOV(*(dw*)(raddr(ss,bp+vec_17c)), ax));	// 9615 mov     [bp+vec_17C], ax ;~ 0613:0CC1
cs=0x613;eip=0x000cc5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 9616 mov     ax, [bp+var_1A] ;~ 0613:0CC5
cs=0x613;eip=0x000cc8; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_fa))));	// 9617 sub     ax, [bp+var_FA] ;~ 0613:0CC8
cs=0x613;eip=0x000ccc; 	T(SHL(ax, cl));	// 9618 shl     ax, cl ;~ 0613:0CCC
cs=0x613;eip=0x000cce; 	X(MOV(*(dw*)(raddr(ss,bp+var_17a)), ax));	// 9619 mov     [bp+var_17A], ax ;~ 0613:0CCE
cs=0x613;eip=0x000cd2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 9620 mov     ax, [bp+var_18] ;~ 0613:0CD2
cs=0x613;eip=0x000cd5; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_f8))));	// 9621 sub     ax, [bp+var_F8] ;~ 0613:0CD5
cs=0x613;eip=0x000cd9; 	T(SHL(ax, cl));	// 9622 shl     ax, cl ;~ 0613:0CD9
cs=0x613;eip=0x000cdb; 	X(MOV(*(dw*)(raddr(ss,bp+var_178)), ax));	// 9623 mov     [bp+var_178], ax ;~ 0613:0CDB
cs=0x613;eip=0x000cdf; 	T(ax = bp+vec_17c);	// 9624 lea     ax, [bp+vec_17C] ;~ 0613:0CDF
cs=0x613;eip=0x000ce3; 	X(PUSH(ax));	// 9625 push    ax ;~ 0613:0CE3
cs=0x613;eip=0x000ce4; 	J(CALLF(polarradius3d,0));	// 9626 call    polarRadius3D ;~ 0613:0CE4
cs=0x613;eip=0x000ce9; 	T(ADD(sp, 2));	// 9627 add     sp, 2 ;~ 0613:0CE9
cs=0x613;eip=0x000cec; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), ax));	// 9628 mov     [bp+var_F2], ax ;~ 0613:0CEC
cs=0x613;eip=0x000cf0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e6))));	// 9629 mov     ax, [bp+var_E6] ;~ 0613:0CF0
cs=0x613;eip=0x000cf4; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_f2))));	// 9630 sub     ax, [bp+var_F2] ;~ 0613:0CF4
cs=0x613;eip=0x000cf8; 	X(MOV(*(dw*)(raddr(ss,bp+var_f4)), ax));	// 9631 mov     [bp+var_F4], ax ;~ 0613:0CF8
loc_1540c:
	// 4882 
cs=0x613;eip=0x000cfc; 	T(MOV(ax, pstate_minusrotate_y_1));	// 9635 mov     ax, pState_minusRotate_y_1 ;~ 0613:0CFC
cs=0x613;eip=0x000cff; 	T(NEG(ax));	// 9636 neg     ax ;~ 0613:0CFF
cs=0x613;eip=0x000d01; 	T(SUB(ax, wallorientation));	// 9637 sub     ax, wallOrientation ;~ 0613:0D01
cs=0x613;eip=0x000d05; 	T(AND(ah, 3));	// 9638 and     ah, 3 ;~ 0613:0D05
cs=0x613;eip=0x000d08; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), ax));	// 9639 mov     [bp+var_EE], ax ;~ 0613:0D08
cs=0x613;eip=0x000d0c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f2))));	// 9640 mov     ax, [bp+var_F2] ;~ 0613:0D0C
cs=0x613;eip=0x000d10; 	X(MOV(*(dw*)(raddr(ss,bp+var_f8)), ax));	// 9641 mov     [bp+var_F8], ax ;~ 0613:0D10
cs=0x613;eip=0x000d14; 	X(MOV(*(dw*)(raddr(ss,bp+var_fa)), 0));	// 9642 mov     [bp+var_FA], 0 ;~ 0613:0D14
cs=0x613;eip=0x000d1a; 	T(CMP(*(dw*)(raddr(ss,bp+var_ee)), 0x100));	// 9643 cmp     [bp+var_EE], 100h ;~ 0613:0D1A
cs=0x613;eip=0x000d20; 	J(JL(loc_1543a));	// 9644 jl      short loc_1543A ;~ 0613:0D20
cs=0x613;eip=0x000d22; 	T(CMP(*(dw*)(raddr(ss,bp+var_ee)), 0x300));	// 9645 cmp     [bp+var_EE], 300h ;~ 0613:0D22
cs=0x613;eip=0x000d28; 	J(JLE(loc_1544a));	// 9646 jle     short loc_1544A ;~ 0613:0D28
loc_1543a:
	// 4883 
cs=0x613;eip=0x000d2a; 	T(MOV(ax, wallorientation));	// 9649 mov     ax, wallOrientation ;~ 0613:0D2A
cs=0x613;eip=0x000d2d; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), ax));	// 9650 mov     [bp+var_EE], ax ;~ 0613:0D2D
cs=0x613;eip=0x000d31; 	X(MOV(*(dw*)(raddr(ss,bp+vec_fc)), 0x300));	// 9651 mov     [bp+vec_FC], 300h ;~ 0613:0D31
cs=0x613;eip=0x000d37; 	J(JMP(loc_1545d));	// 9652 jmp     short loc_1545D ;~ 0613:0D37
loc_1544a:
	// 4884 
cs=0x613;eip=0x000d3a; 	T(MOV(ax, wallorientation));	// 9657 mov     ax, wallOrientation ;~ 0613:0D3A
cs=0x613;eip=0x000d3d; 	T(ADD(ah, 2));	// 9658 add     ah, 2 ;~ 0613:0D3D
cs=0x613;eip=0x000d40; 	T(AND(ah, 3));	// 9659 and     ah, 3 ;~ 0613:0D40
cs=0x613;eip=0x000d43; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), ax));	// 9660 mov     [bp+var_EE], ax ;~ 0613:0D43
cs=0x613;eip=0x000d47; 	X(MOV(*(dw*)(raddr(ss,bp+vec_fc)), 0x0FD00));	// 9661 mov     [bp+vec_FC], 0FD00h ;~ 0613:0D47
loc_1545d:
	// 4885 
cs=0x613;eip=0x000d4d; 	T(CMP(*(raddr(ss,bp+var_136)), 0));	// 9664 cmp     [bp+var_136], 0 ;~ 0613:0D4D
cs=0x613;eip=0x000d52; 	J(JZ(loc_1546e));	// 9665 jz      short loc_1546E ;~ 0613:0D52
cs=0x613;eip=0x000d54; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vec_fc))));	// 9666 mov     ax, [bp+vec_FC] ;~ 0613:0D54
cs=0x613;eip=0x000d58; 	T(NEG(ax));	// 9667 neg     ax ;~ 0613:0D58
cs=0x613;eip=0x000d5a; 	X(MOV(*(dw*)(raddr(ss,bp+vec_fc)), ax));	// 9668 mov     [bp+vec_FC], ax ;~ 0613:0D5A
loc_1546e:
	// 4886 
cs=0x613;eip=0x000d5e; 	T(SUB(ax, ax));	// 9671 sub     ax, ax ;~ 0613:0D5E
cs=0x613;eip=0x000d60; 	X(PUSH(ax));	// 9672 push    ax ;~ 0613:0D60
cs=0x613;eip=0x000d61; 	X(PUSH(*(dw*)(raddr(ss,bp+var_ee))));	// 9673 push    [bp+var_EE] ;~ 0613:0D61
cs=0x613;eip=0x000d65; 	T(MOV(ax, pstate_minusrotate_x_1));	// 9674 mov     ax, pState_minusRotate_x_1 ;~ 0613:0D65
cs=0x613;eip=0x000d68; 	T(NEG(ax));	// 9675 neg     ax ;~ 0613:0D68
cs=0x613;eip=0x000d6a; 	X(PUSH(ax));	// 9676 push    ax ;~ 0613:0D6A
cs=0x613;eip=0x000d6b; 	T(MOV(ax, pstate_minusrotate_z_1));	// 9677 mov     ax, pState_minusRotate_z_1 ;~ 0613:0D6B
cs=0x613;eip=0x000d6e; 	T(NEG(ax));	// 9678 neg     ax ;~ 0613:0D6E
cs=0x613;eip=0x000d70; 	X(PUSH(ax));	// 9679 push    ax ;~ 0613:0D70
cs=0x613;eip=0x000d71; 	J(CALLF(mat_rot_zxy,0));	// 9680 call    mat_rot_zxy ;~ 0613:0D71
cs=0x613;eip=0x000d76; 	T(ADD(sp, 8));	// 9681 add     sp, 8 ;~ 0613:0D76
cs=0x613;eip=0x000d79; 	X(MOV(*(dw*)(raddr(ss,bp+var_ea)), ax));	// 9682 mov     [bp+var_EA], ax ;~ 0613:0D79
cs=0x613;eip=0x000d7d; 	T(ax = bp+vec_1c);	// 9683 lea     ax, [bp+vec_1C] ;~ 0613:0D7D
cs=0x613;eip=0x000d80; 	X(PUSH(ax));	// 9684 push    ax ;~ 0613:0D80
cs=0x613;eip=0x000d81; 	X(PUSH(*(dw*)(raddr(ss,bp+var_ea))));	// 9685 push    [bp+var_EA] ;~ 0613:0D81
cs=0x613;eip=0x000d85; 	T(ax = bp+vec_fc);	// 9686 lea     ax, [bp+vec_FC] ;~ 0613:0D85
cs=0x613;eip=0x000d89; 	X(PUSH(ax));	// 9687 push    ax ;~ 0613:0D89
cs=0x613;eip=0x000d8a; 	J(CALLF(mat_mul_vector,0));	// 9688 call    mat_mul_vector ;~ 0613:0D8A
cs=0x613;eip=0x000d8f; 	T(ADD(sp, 6));	// 9689 add     sp, 6 ;~ 0613:0D8F
cs=0x613;eip=0x000d92; 	T(MOV(ax, pstate_minusrotate_y_1));	// 9690 mov     ax, pState_minusRotate_y_1 ;~ 0613:0D92
cs=0x613;eip=0x000d95; 	T(NEG(ax));	// 9691 neg     ax ;~ 0613:0D95
cs=0x613;eip=0x000d97; 	T(MOV(si, ax));	// 9692 mov     si, ax ;~ 0613:0D97
cs=0x613;eip=0x000d99; 	T(SUB(si, *(dw*)(raddr(ss,bp+var_ee))));	// 9693 sub     si, [bp+var_EE] ;~ 0613:0D99
cs=0x613;eip=0x000d9d; 	T(AND(si, 0x3FF));	// 9694 and     si, 3FFh ;~ 0613:0D9D
cs=0x613;eip=0x000da1; 	X(MOV(*(dw*)(raddr(ss,bp+var_138)), 0));	// 9695 mov     [bp+var_138], 0 ;~ 0613:0DA1
cs=0x613;eip=0x000da7; 	T(CMP(si, 0x100));	// 9696 cmp     si, 100h ;~ 0613:0DA7
cs=0x613;eip=0x000dab; 	J(JLE(loc_154ca));	// 9697 jle     short loc_154CA ;~ 0613:0DAB
cs=0x613;eip=0x000dad; 	T(MOV(ax, 0x400));	// 9698 mov     ax, 400h ;~ 0613:0DAD
cs=0x613;eip=0x000db0; 	T(SUB(ax, si));	// 9699 sub     ax, si ;~ 0613:0DB0
cs=0x613;eip=0x000db2; 	T(MOV(si, ax));	// 9700 mov     si, ax ;~ 0613:0DB2
cs=0x613;eip=0x000db4; 	X(MOV(*(dw*)(raddr(ss,bp+var_138)), 1));	// 9701 mov     [bp+var_138], 1 ;~ 0613:0DB4
loc_154ca:
	// 4887 
cs=0x613;eip=0x000dba; 	T(MOV(ax, 0x46));	// 9704 mov     ax, 46h ; 'F' ;~ 0613:0DBA
cs=0x613;eip=0x000dbd; 	T(IMUL1_2(si));	// 9705 imul    si ;~ 0613:0DBD
cs=0x613;eip=0x000dbf; 	T(MOV(cl, 8));	// 9706 mov     cl, 8 ;~ 0613:0DBF
cs=0x613;eip=0x000dc1; 	T(SAR(ax, cl));	// 9707 sar     ax, cl ;~ 0613:0DC1
cs=0x613;eip=0x000dc3; 	T(SUB(ax, 0x64));	// 9708 sub     ax, 64h ; 'd' ;~ 0613:0DC3
cs=0x613;eip=0x000dc6; 	T(NEG(ax));	// 9709 neg     ax ;~ 0613:0DC6
cs=0x613;eip=0x000dc8; 	T(MOV(ch, al));	// 9710 mov     ch, al ;~ 0613:0DC8
cs=0x613;eip=0x000dca; 	T(SUB(cl, cl));	// 9711 sub     cl, cl ;~ 0613:0DCA
cs=0x613;eip=0x000dcc; 	X(MOV(*(dw*)(raddr(ss,bp+var_190)), cx));	// 9712 mov     [bp+var_190], cx ;~ 0613:0DCC
cs=0x613;eip=0x000dd0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9713 mov     bx, [bp+arg_0] ;~ 0613:0DD0
cs=0x613;eip=0x000dd3; 	T(MOV(ax, cx));	// 9714 mov     ax, cx ;~ 0613:0DD3
cs=0x613;eip=0x000dd5; 	T(CMP(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 9715 cmp     [bx+2Ch], ax ;~ 0613:0DD5
cs=0x613;eip=0x000dd8; 	J(JBE(loc_15513));	// 9716 jbe     short loc_15513 ;~ 0613:0DD8
cs=0x613;eip=0x000dda; 	T(CMP(*(dw*)(raddr(ss,bp+var_138)), 0));	// 9717 cmp     [bp+var_138], 0 ;~ 0613:0DDA
cs=0x613;eip=0x000ddf; 	J(JZ(loc_154f8));	// 9718 jz      short loc_154F8 ;~ 0613:0DDF
cs=0x613;eip=0x000de1; 	T(MOV(ax, si));	// 9719 mov     ax, si ;~ 0613:0DE1
cs=0x613;eip=0x000de3; 	T(NEG(ax));	// 9720 neg     ax ;~ 0613:0DE3
cs=0x613;eip=0x000de5; 	J(JMP(loc_154fa));	// 9721 jmp     short loc_154FA ;~ 0613:0DE5
loc_154f8:
	// 4888 
cs=0x613;eip=0x000de8; 	T(MOV(ax, si));	// 9726 mov     ax, si ;~ 0613:0DE8
loc_154fa:
	// 4889 
cs=0x613;eip=0x000dea; 	T(SHL(ax, 1));	// 9729 shl     ax, 1 ;~ 0613:0DEA
cs=0x613;eip=0x000dec; 	X(MOV(*(dw*)(raddr(ss,bp+var_138)), ax));	// 9730 mov     [bp+var_138], ax ;~ 0613:0DEC
cs=0x613;eip=0x000df0; 	X(MOV(*(dw*)(raddr(ds,bx+0x36)), ax));	// 9731 mov     [bx+36h], ax ;~ 0613:0DF0
cs=0x613;eip=0x000df3; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 9732 mov     al, [bp+arg_8] ;~ 0613:0DF3
cs=0x613;eip=0x000df6; 	T(CBW);	// 9733 cbw ;~ 0613:0DF6
cs=0x613;eip=0x000df7; 	X(PUSH(ax));	// 9734 push    ax ;~ 0613:0DF7
cs=0x613;eip=0x000df8; 	T(MOV(ax, 1));	// 9735 mov     ax, 1 ;~ 0613:0DF8
cs=0x613;eip=0x000dfb; 	X(PUSH(ax));	// 9736 push    ax ;~ 0613:0DFB
cs=0x613;eip=0x000dfc; 	X(PUSH(cs));	// 9737 push    cs ;~ 0613:0DFC
cs=0x613;eip=0x000dfd; 	J(CALL(update_crash_state,0));	// 9738 call    near ptr update_crash_state ;~ 0613:0DFD
cs=0x613;eip=0x000e00; 	T(ADD(sp, 4));	// 9739 add     sp, 4 ;~ 0613:0E00
loc_15513:
	// 4890 
cs=0x613;eip=0x000e03; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9742 mov     bx, [bp+arg_0] ;~ 0613:0E03
cs=0x613;eip=0x000e06; 	X(OR(*(raddr(ds,bx+0x0CF)), 0x10));	// 9743 or      byte ptr [bx+0CFh], 10h ;~ 0613:0E06
cs=0x613;eip=0x000e0b; 	T(ax = bp+vecl_1c0);	// 9744 lea     ax, [bp+vecl_1C0] ;~ 0613:0E0B
cs=0x613;eip=0x000e0f; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), ax));	// 9745 mov     [bp+var_DE], ax ;~ 0613:0E0F
cs=0x613;eip=0x000e13; 	T(ax = bp+vecl_176);	// 9746 lea     ax, [bp+vecl_176] ;~ 0613:0E13
cs=0x613;eip=0x000e17; 	X(MOV(*(dw*)(raddr(ss,bp+var_146)), ax));	// 9747 mov     [bp+var_146], ax ;~ 0613:0E17
cs=0x613;eip=0x000e1b; 	T(SUB(si, si));	// 9748 sub     si, si ;~ 0613:0E1B
cs=0x613;eip=0x000e1d; 	J(JMP(loc_15599));	// 9749 jmp     short loc_15599 ;~ 0613:0E1D
loc_15530:
	// 4891 
cs=0x613;eip=0x000e20; 	X(MOV(*(dw*)(raddr(ss,bp+vec_c)), 0));	// 9754 mov     [bp+vec_C], 0 ;~ 0613:0E20
cs=0x613;eip=0x000e25; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 9755 mov     [bp+var_A], 0 ;~ 0613:0E25
cs=0x613;eip=0x000e2a; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 9756 mov     [bp+var_8], 0 ;~ 0613:0E2A
loc_1553f:
	// 4892 
cs=0x613;eip=0x000e2f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vec_c))));	// 9759 mov     ax, [bp+vec_C] ;~ 0613:0E2F
cs=0x613;eip=0x000e32; 	T(ADD(ax, *(dw*)(raddr(ss,bp+vec_1c))));	// 9760 add     ax, [bp+vec_1C] ;~ 0613:0E32
cs=0x613;eip=0x000e35; 	T(CWD);	// 9761 cwd ;~ 0613:0E35
cs=0x613;eip=0x000e36; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9762 mov     bx, [bp+var_146] ;~ 0613:0E36
cs=0x613;eip=0x000e3a; 	T(ADD(ax, *(dw*)(raddr(ds,bx+0))));	// 9763 add     ax, [bx+0] ;~ 0613:0E3A
cs=0x613;eip=0x000e3c; 	T(ADC(dx, *(dw*)(raddr(ds,bx+2))));	// 9764 adc     dx, [bx+2] ;~ 0613:0E3C
cs=0x613;eip=0x000e3f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9765 mov     bx, [bp+var_DE] ;~ 0613:0E3F
cs=0x613;eip=0x000e43; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 9766 mov     [bx+0], ax ;~ 0613:0E43
cs=0x613;eip=0x000e45; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 9767 mov     [bx+2], dx ;~ 0613:0E45
cs=0x613;eip=0x000e48; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 9768 mov     ax, [bp+var_A] ;~ 0613:0E48
cs=0x613;eip=0x000e4b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 9769 add     ax, [bp+var_1A] ;~ 0613:0E4B
cs=0x613;eip=0x000e4e; 	T(CWD);	// 9770 cwd ;~ 0613:0E4E
cs=0x613;eip=0x000e4f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9771 mov     bx, [bp+var_146] ;~ 0613:0E4F
cs=0x613;eip=0x000e53; 	T(ADD(ax, *(dw*)(raddr(ds,bx+4))));	// 9772 add     ax, [bx+4] ;~ 0613:0E53
cs=0x613;eip=0x000e56; 	T(ADC(dx, *(dw*)(raddr(ds,bx+6))));	// 9773 adc     dx, [bx+6] ;~ 0613:0E56
cs=0x613;eip=0x000e59; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9774 mov     bx, [bp+var_DE] ;~ 0613:0E59
cs=0x613;eip=0x000e5d; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 9775 mov     [bx+4], ax ;~ 0613:0E5D
cs=0x613;eip=0x000e60; 	X(MOV(*(dw*)(raddr(ds,bx+6)), dx));	// 9776 mov     [bx+6], dx ;~ 0613:0E60
cs=0x613;eip=0x000e63; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 9777 mov     ax, [bp+var_8] ;~ 0613:0E63
cs=0x613;eip=0x000e66; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_18))));	// 9778 add     ax, [bp+var_18] ;~ 0613:0E66
cs=0x613;eip=0x000e69; 	T(CWD);	// 9779 cwd ;~ 0613:0E69
cs=0x613;eip=0x000e6a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9780 mov     bx, [bp+var_146] ;~ 0613:0E6A
cs=0x613;eip=0x000e6e; 	T(ADD(ax, *(dw*)(raddr(ds,bx+8))));	// 9781 add     ax, [bx+8] ;~ 0613:0E6E
cs=0x613;eip=0x000e71; 	T(ADC(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 9782 adc     dx, [bx+0Ah] ;~ 0613:0E71
cs=0x613;eip=0x000e74; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9783 mov     bx, [bp+var_DE] ;~ 0613:0E74
cs=0x613;eip=0x000e78; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 9784 mov     [bx+8], ax ;~ 0613:0E78
cs=0x613;eip=0x000e7b; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 9785 mov     [bx+0Ah], dx ;~ 0613:0E7B
cs=0x613;eip=0x000e7e; 	X(ADD(*(dw*)(raddr(ss,bp+var_de)), 0x0C));	// 9786 add     [bp+var_DE], 0Ch ;~ 0613:0E7E
cs=0x613;eip=0x000e83; 	X(ADD(*(dw*)(raddr(ss,bp+var_146)), 0x0C));	// 9787 add     [bp+var_146], 0Ch ;~ 0613:0E83
cs=0x613;eip=0x000e88; 	T(INC(si));	// 9788 inc     si ;~ 0613:0E88
loc_15599:
	// 4893 
cs=0x613;eip=0x000e89; 	T(CMP(si, 4));	// 9791 cmp     si, 4 ;~ 0613:0E89
cs=0x613;eip=0x000e8c; 	J(JL(loc_155a1));	// 9792 jl      short loc_155A1 ;~ 0613:0E8C
cs=0x613;eip=0x000e8e; 	J(JMP(loc_15142));	// 9793 jmp     loc_15142 ;~ 0613:0E8E
loc_155a1:
	// 4894 
cs=0x613;eip=0x000e91; 	T(CMP(*(dw*)(raddr(ss,bp+var_f4)), 0));	// 9797 cmp     [bp+var_F4], 0 ;~ 0613:0E91
cs=0x613;eip=0x000e96; 	J(JZ(loc_15530));	// 9798 jz      short loc_15530 ;~ 0613:0E96
cs=0x613;eip=0x000e98; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e6))));	// 9799 mov     ax, [bp+var_E6] ;~ 0613:0E98
cs=0x613;eip=0x000e9c; 	T(CWD);	// 9800 cwd ;~ 0613:0E9C
cs=0x613;eip=0x000e9d; 	X(PUSH(dx));	// 9801 push    dx ;~ 0613:0E9D
cs=0x613;eip=0x000e9e; 	X(PUSH(ax));	// 9802 push    ax ;~ 0613:0E9E
cs=0x613;eip=0x000e9f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f4))));	// 9803 mov     ax, [bp+var_F4] ;~ 0613:0E9F
cs=0x613;eip=0x000ea3; 	T(CWD);	// 9804 cwd ;~ 0613:0EA3
cs=0x613;eip=0x000ea4; 	X(PUSH(dx));	// 9805 push    dx ;~ 0613:0EA4
cs=0x613;eip=0x000ea5; 	X(PUSH(ax));	// 9806 push    ax ;~ 0613:0EA5
cs=0x613;eip=0x000ea6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9807 mov     bx, [bp+var_DE] ;~ 0613:0EA6
cs=0x613;eip=0x000eaa; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 9808 mov     ax, [bx+0] ;~ 0613:0EAA
cs=0x613;eip=0x000eac; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 9809 mov     dx, [bx+2] ;~ 0613:0EAC
cs=0x613;eip=0x000eaf; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9810 mov     bx, [bp+var_146] ;~ 0613:0EAF
cs=0x613;eip=0x000eb3; 	T(SUB(ax, *(dw*)(raddr(ds,bx+0))));	// 9811 sub     ax, [bx+0] ;~ 0613:0EB3
cs=0x613;eip=0x000eb5; 	T(SBB(dx, *(dw*)(raddr(ds,bx+2))));	// 9812 sbb     dx, [bx+2] ;~ 0613:0EB5
cs=0x613;eip=0x000eb8; 	X(PUSH(dx));	// 9813 push    dx ;~ 0613:0EB8
cs=0x613;eip=0x000eb9; 	X(PUSH(ax));	// 9814 push    ax ;~ 0613:0EB9
cs=0x613;eip=0x000eba; 	J(CALLF(__aflmul,0));	// 9815 call    __aFlmul ;~ 0613:0EBA
cs=0x613;eip=0x000ebf; 	X(PUSH(dx));	// 9816 push    dx ;~ 0613:0EBF
cs=0x613;eip=0x000ec0; 	X(PUSH(ax));	// 9817 push    ax ;~ 0613:0EC0
cs=0x613;eip=0x000ec1; 	J(CALLF(__afldiv,0));	// 9818 call    __aFldiv ;~ 0613:0EC1
cs=0x613;eip=0x000ec6; 	X(MOV(*(dw*)(raddr(ss,bp+vec_c)), ax));	// 9819 mov     [bp+vec_C], ax ;~ 0613:0EC6
cs=0x613;eip=0x000ec9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e6))));	// 9820 mov     ax, [bp+var_E6] ;~ 0613:0EC9
cs=0x613;eip=0x000ecd; 	T(CWD);	// 9821 cwd ;~ 0613:0ECD
cs=0x613;eip=0x000ece; 	X(PUSH(dx));	// 9822 push    dx ;~ 0613:0ECE
cs=0x613;eip=0x000ecf; 	X(PUSH(ax));	// 9823 push    ax ;~ 0613:0ECF
cs=0x613;eip=0x000ed0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f4))));	// 9824 mov     ax, [bp+var_F4] ;~ 0613:0ED0
cs=0x613;eip=0x000ed4; 	T(CWD);	// 9825 cwd ;~ 0613:0ED4
cs=0x613;eip=0x000ed5; 	X(PUSH(dx));	// 9826 push    dx ;~ 0613:0ED5
cs=0x613;eip=0x000ed6; 	X(PUSH(ax));	// 9827 push    ax ;~ 0613:0ED6
cs=0x613;eip=0x000ed7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9828 mov     bx, [bp+var_DE] ;~ 0613:0ED7
cs=0x613;eip=0x000edb; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 9829 mov     ax, [bx+4] ;~ 0613:0EDB
cs=0x613;eip=0x000ede; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 9830 mov     dx, [bx+6] ;~ 0613:0EDE
cs=0x613;eip=0x000ee1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9831 mov     bx, [bp+var_146] ;~ 0613:0EE1
cs=0x613;eip=0x000ee5; 	T(SUB(ax, *(dw*)(raddr(ds,bx+4))));	// 9832 sub     ax, [bx+4] ;~ 0613:0EE5
cs=0x613;eip=0x000ee8; 	T(SBB(dx, *(dw*)(raddr(ds,bx+6))));	// 9833 sbb     dx, [bx+6] ;~ 0613:0EE8
cs=0x613;eip=0x000eeb; 	X(PUSH(dx));	// 9834 push    dx ;~ 0613:0EEB
cs=0x613;eip=0x000eec; 	X(PUSH(ax));	// 9835 push    ax ;~ 0613:0EEC
cs=0x613;eip=0x000eed; 	J(CALLF(__aflmul,0));	// 9836 call    __aFlmul ;~ 0613:0EED
cs=0x613;eip=0x000ef2; 	X(PUSH(dx));	// 9837 push    dx ;~ 0613:0EF2
cs=0x613;eip=0x000ef3; 	X(PUSH(ax));	// 9838 push    ax ;~ 0613:0EF3
cs=0x613;eip=0x000ef4; 	J(CALLF(__afldiv,0));	// 9839 call    __aFldiv ;~ 0613:0EF4
cs=0x613;eip=0x000ef9; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 9840 mov     [bp+var_A], ax ;~ 0613:0EF9
cs=0x613;eip=0x000efc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e6))));	// 9841 mov     ax, [bp+var_E6] ;~ 0613:0EFC
cs=0x613;eip=0x000f00; 	T(CWD);	// 9842 cwd ;~ 0613:0F00
cs=0x613;eip=0x000f01; 	X(PUSH(dx));	// 9843 push    dx ;~ 0613:0F01
cs=0x613;eip=0x000f02; 	X(PUSH(ax));	// 9844 push    ax ;~ 0613:0F02
cs=0x613;eip=0x000f03; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f4))));	// 9845 mov     ax, [bp+var_F4] ;~ 0613:0F03
cs=0x613;eip=0x000f07; 	T(CWD);	// 9846 cwd ;~ 0613:0F07
cs=0x613;eip=0x000f08; 	X(PUSH(dx));	// 9847 push    dx ;~ 0613:0F08
cs=0x613;eip=0x000f09; 	X(PUSH(ax));	// 9848 push    ax ;~ 0613:0F09
cs=0x613;eip=0x000f0a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9849 mov     bx, [bp+var_DE] ;~ 0613:0F0A
cs=0x613;eip=0x000f0e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 9850 mov     ax, [bx+8] ;~ 0613:0F0E
cs=0x613;eip=0x000f11; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 9851 mov     dx, [bx+0Ah] ;~ 0613:0F11
cs=0x613;eip=0x000f14; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9852 mov     bx, [bp+var_146] ;~ 0613:0F14
cs=0x613;eip=0x000f18; 	T(SUB(ax, *(dw*)(raddr(ds,bx+8))));	// 9853 sub     ax, [bx+8] ;~ 0613:0F18
cs=0x613;eip=0x000f1b; 	T(SBB(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 9854 sbb     dx, [bx+0Ah] ;~ 0613:0F1B
cs=0x613;eip=0x000f1e; 	X(PUSH(dx));	// 9855 push    dx ;~ 0613:0F1E
cs=0x613;eip=0x000f1f; 	X(PUSH(ax));	// 9856 push    ax ;~ 0613:0F1F
cs=0x613;eip=0x000f20; 	J(CALLF(__aflmul,0));	// 9857 call    __aFlmul ;~ 0613:0F20
cs=0x613;eip=0x000f25; 	X(PUSH(dx));	// 9858 push    dx ;~ 0613:0F25
cs=0x613;eip=0x000f26; 	X(PUSH(ax));	// 9859 push    ax ;~ 0613:0F26
cs=0x613;eip=0x000f27; 	J(CALLF(__afldiv,0));	// 9860 call    __aFldiv ;~ 0613:0F27
cs=0x613;eip=0x000f2c; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 9861 mov     [bp+var_8], ax ;~ 0613:0F2C
cs=0x613;eip=0x000f2f; 	J(JMP(loc_1553f));	// 9862 jmp     loc_1553F ;~ 0613:0F2F
loc_15642:
	// 4895 
cs=0x613;eip=0x000f32; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9867 mov     al, [bp+var_E8] ;~ 0613:0F32
cs=0x613;eip=0x000f36; 	T(CBW);	// 9868 cbw ;~ 0613:0F36
cs=0x613;eip=0x000f37; 	T(MOV(di, ax));	// 9869 mov     di, ax ;~ 0613:0F37
cs=0x613;eip=0x000f39; 	T(SHL(di, 1));	// 9870 shl     di, 1 ;~ 0613:0F39
cs=0x613;eip=0x000f3b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9871 mov     bx, [bp+arg_0] ;~ 0613:0F3B
cs=0x613;eip=0x000f3e; 	T(MOV(ax, *(dw*)(((db*)word_3bd72)+di)));	// 9872 mov     ax, word_3BD72[di] ;~ 0613:0F3E
cs=0x613;eip=0x000f42; 	X(ADD(*(dw*)(raddr(ds,bx+di+0x4C)), ax));	// 9873 add     [bx+di+4Ch], ax ;~ 0613:0F42
cs=0x613;eip=0x000f45; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9874 mov     al, [bp+var_E8] ;~ 0613:0F45
cs=0x613;eip=0x000f49; 	T(CBW);	// 9875 cbw ;~ 0613:0F49
cs=0x613;eip=0x000f4a; 	T(MOV(bx, ax));	// 9876 mov     bx, ax ;~ 0613:0F4A
cs=0x613;eip=0x000f4c; 	T(SHL(bx, 1));	// 9877 shl     bx, 1 ;~ 0613:0F4C
cs=0x613;eip=0x000f4e; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9878 add     bx, [bp+arg_0] ;~ 0613:0F4E
cs=0x613;eip=0x000f51; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x4C))));	// 9879 mov     ax, [bx+4Ch] ;~ 0613:0F51
cs=0x613;eip=0x000f54; 	T(CWD);	// 9880 cwd ;~ 0613:0F54
cs=0x613;eip=0x000f55; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9881 mov     bx, [bp+var_DE] ;~ 0613:0F55
cs=0x613;eip=0x000f59; 	X(SUB(*(dw*)(raddr(ds,bx+4)), ax));	// 9882 sub     [bx+4], ax ;~ 0613:0F59
cs=0x613;eip=0x000f5c; 	X(SBB(*(dw*)(raddr(ds,bx+6)), dx));	// 9883 sbb     [bx+6], dx ;~ 0613:0F5C
cs=0x613;eip=0x000f5f; 	T(CMP(framespersec, 0x0A));	// 9884 cmp     framespersec, 0Ah ;~ 0613:0F5F
cs=0x613;eip=0x000f64; 	J(JNZ(loc_156a3));	// 9885 jnz     short loc_156A3 ;~ 0613:0F64
cs=0x613;eip=0x000f66; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9886 mov     al, [bp+var_E8] ;~ 0613:0F66
cs=0x613;eip=0x000f6a; 	T(CBW);	// 9887 cbw ;~ 0613:0F6A
cs=0x613;eip=0x000f6b; 	T(MOV(di, ax));	// 9888 mov     di, ax ;~ 0613:0F6B
cs=0x613;eip=0x000f6d; 	T(SHL(di, 1));	// 9889 shl     di, 1 ;~ 0613:0F6D
cs=0x613;eip=0x000f6f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9890 mov     bx, [bp+arg_0] ;~ 0613:0F6F
cs=0x613;eip=0x000f72; 	T(MOV(ax, *(dw*)(((db*)word_3bd72)+di)));	// 9891 mov     ax, word_3BD72[di] ;~ 0613:0F72
cs=0x613;eip=0x000f76; 	X(ADD(*(dw*)(raddr(ds,bx+di+0x4C)), ax));	// 9892 add     [bx+di+4Ch], ax ;~ 0613:0F76
cs=0x613;eip=0x000f79; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9893 mov     al, [bp+var_E8] ;~ 0613:0F79
cs=0x613;eip=0x000f7d; 	T(CBW);	// 9894 cbw ;~ 0613:0F7D
cs=0x613;eip=0x000f7e; 	T(MOV(bx, ax));	// 9895 mov     bx, ax ;~ 0613:0F7E
cs=0x613;eip=0x000f80; 	T(SHL(bx, 1));	// 9896 shl     bx, 1 ;~ 0613:0F80
cs=0x613;eip=0x000f82; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9897 add     bx, [bp+arg_0] ;~ 0613:0F82
cs=0x613;eip=0x000f85; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x4C))));	// 9898 mov     ax, [bx+4Ch] ;~ 0613:0F85
cs=0x613;eip=0x000f88; 	T(CWD);	// 9899 cwd ;~ 0613:0F88
cs=0x613;eip=0x000f89; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9900 mov     bx, [bp+var_DE] ;~ 0613:0F89
cs=0x613;eip=0x000f8d; 	X(SUB(*(dw*)(raddr(ds,bx+4)), ax));	// 9901 sub     [bx+4], ax ;~ 0613:0F8D
cs=0x613;eip=0x000f90; 	X(SBB(*(dw*)(raddr(ds,bx+6)), dx));	// 9902 sbb     [bx+6], dx ;~ 0613:0F90
loc_156a3:
	// 4896 
cs=0x613;eip=0x000f93; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9905 mov     bx, [bp+var_DE] ;~ 0613:0F93
cs=0x613;eip=0x000f97; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 9906 mov     ax, [bx+4] ;~ 0613:0F97
cs=0x613;eip=0x000f9a; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 9907 mov     dx, [bx+6] ;~ 0613:0F9A
cs=0x613;eip=0x000f9d; 	T(MOV(cl, 6));	// 9908 mov     cl, 6 ;~ 0613:0F9D
loc_156af:
	// 4897 
cs=0x613;eip=0x000f9f; 	T(SAR(dx, 1));	// 9911 sar     dx, 1 ;~ 0613:0F9F
cs=0x613;eip=0x000fa1; 	T(RCR(ax, 1));	// 9912 rcr     ax, 1 ;~ 0613:0FA1
cs=0x613;eip=0x000fa3; 	T(DEC(cl));	// 9913 dec     cl ;~ 0613:0FA3
cs=0x613;eip=0x000fa5; 	J(JNZ(loc_156af));	// 9914 jnz     short loc_156AF ;~ 0613:0FA5
cs=0x613;eip=0x000fa7; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 9915 mov     [bp+var_1C4], ax ;~ 0613:0FA7
cs=0x613;eip=0x000fab; 	T(CMP(byte_44889, 2));	// 9916 cmp     byte_44889, 2 ;~ 0613:0FAB
cs=0x613;eip=0x000fb0; 	J(JZ(loc_156d6));	// 9917 jz      short loc_156D6 ;~ 0613:0FB0
cs=0x613;eip=0x000fb2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c2))));	// 9918 push    [bp+var_1C2] ;~ 0613:0FB2
cs=0x613;eip=0x000fb6; 	X(PUSH(ax));	// 9919 push    ax ;~ 0613:0FB6
cs=0x613;eip=0x000fb7; 	X(PUSH(*(dw*)(raddr(ss,bp+vec_1c6))));	// 9920 push    [bp+vec_1C6] ;~ 0613:0FB7
cs=0x613;eip=0x000fbb; 	X(PUSH(planindex));	// 9921 push    planindex ;~ 0613:0FBB
cs=0x613;eip=0x000fbf; 	X(PUSH(cs));	// 9922 push    cs ;~ 0613:0FBF
cs=0x613;eip=0x000fc0; 	J(CALL(plane_origin_op,0));	// 9923 call    near ptr plane_origin_op ;~ 0613:0FC0
cs=0x613;eip=0x000fc3; 	T(ADD(sp, 8));	// 9924 add     sp, 8 ;~ 0613:0FC3
loc_156d6:
	// 4898 
cs=0x613;eip=0x000fc6; 	X(MOV(nextposandnormalip, ax));	// 9927 mov     nextPosAndNormalIP, ax ;~ 0613:0FC6
cs=0x613;eip=0x000fc9; 	T(CMP(ax, 0x0C));	// 9928 cmp     ax, 0Ch ;~ 0613:0FC9
cs=0x613;eip=0x000fcc; 	J(JLE(loc_156ed));	// 9929 jle     short loc_156ED ;~ 0613:0FCC
cs=0x613;eip=0x000fce; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9930 mov     al, [bp+var_E8] ;~ 0613:0FCE
cs=0x613;eip=0x000fd2; 	T(CBW);	// 9931 cbw ;~ 0613:0FD2
cs=0x613;eip=0x000fd3; 	T(MOV(di, ax));	// 9932 mov     di, ax ;~ 0613:0FD3
cs=0x613;eip=0x000fd5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9933 mov     bx, [bp+arg_0] ;~ 0613:0FD5
cs=0x613;eip=0x000fd8; 	X(MOV(*(raddr(ds,bx+di+0x0C2)), 0));	// 9934 mov     byte ptr [bx+di+0C2h], 0 ;~ 0613:0FD8
loc_156ed:
	// 4899 
cs=0x613;eip=0x000fdd; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9938 mov     al, [bp+var_E8] ;~ 0613:0FDD
cs=0x613;eip=0x000fe1; 	T(CBW);	// 9939 cbw ;~ 0613:0FE1
cs=0x613;eip=0x000fe2; 	T(MOV(di, ax));	// 9940 mov     di, ax ;~ 0613:0FE2
cs=0x613;eip=0x000fe4; 	T(SHL(di, 1));	// 9941 shl     di, 1 ;~ 0613:0FE4
cs=0x613;eip=0x000fe6; 	T(MOV(ax, nextposandnormalip));	// 9942 mov     ax, nextPosAndNormalIP ;~ 0613:0FE6
cs=0x613;eip=0x000fe9; 	X(MOV(*(dw*)(raddr(ss,bp+di+var_16)), ax));	// 9943 mov     [bp+di+var_16], ax ;~ 0613:0FE9
cs=0x613;eip=0x000fec; 	T(OR(ax, ax));	// 9944 or      ax, ax ;~ 0613:0FEC
cs=0x613;eip=0x000fee; 	J(JNZ(loc_15703));	// 9945 jnz     short loc_15703 ;~ 0613:0FEE
cs=0x613;eip=0x000ff0; 	J(JMP(loc_15ce8));	// 9946 jmp     loc_15CE8 ;~ 0613:0FF0
loc_15703:
	// 4900 
cs=0x613;eip=0x000ff3; 	T(OR(ax, ax));	// 9950 or      ax, ax ;~ 0613:0FF3
cs=0x613;eip=0x000ff5; 	J(JL(loc_1570a));	// 9951 jl      short loc_1570A ;~ 0613:0FF5
cs=0x613;eip=0x000ff7; 	J(JMP(loc_15d2b));	// 9952 jmp     loc_15D2B ;~ 0613:0FF7
loc_1570a:
	// 4901 
cs=0x613;eip=0x000ffa; 	T(MOV(ax, 0x22));	// 9956 mov     ax, 22h ; '"' ;~ 0613:0FFA
cs=0x613;eip=0x000ffd; 	X(IMUL1_2(planindex));	// 9957 imul    planindex ;~ 0613:0FFD
cs=0x613;eip=0x001001; 	T(ADD(ax, planptr));	// 9958 add     ax, planptr ;~ 0613:1001
cs=0x613;eip=0x001005; 	T(MOV(dx, word_454c4));	// 9959 mov     dx, word_454C4 ;~ 0613:1005
cs=0x613;eip=0x001009; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 9960 mov     word ptr [bp+var_6], ax ;~ 0613:1009
cs=0x613;eip=0x00100c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 9961 mov     word ptr [bp+var_6+2], dx ;~ 0613:100C
cs=0x613;eip=0x00100f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 9962 les     bx, [bp+var_6] ;~ 0613:100F
cs=0x613;eip=0x001012; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 9963 mov     ax, es:[bx+4] ;~ 0613:1012
cs=0x613;eip=0x001016; 	T(ADD(ax, elem_xcenter));	// 9964 add     ax, elem_xCenter ;~ 0613:1016
cs=0x613;eip=0x00101a; 	X(MOV(*(dw*)(raddr(ss,bp+var_122)), ax));	// 9965 mov     [bp+var_122], ax ;~ 0613:101A
cs=0x613;eip=0x00101e; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 9966 mov     ax, es:[bx+6] ;~ 0613:101E
cs=0x613;eip=0x001022; 	T(ADD(ax, terrainheight));	// 9967 add     ax, terrainHeight ;~ 0613:1022
cs=0x613;eip=0x001026; 	X(MOV(*(dw*)(raddr(ss,bp+var_120)), ax));	// 9968 mov     [bp+var_120], ax ;~ 0613:1026
cs=0x613;eip=0x00102a; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 9969 mov     ax, es:[bx+8] ;~ 0613:102A
cs=0x613;eip=0x00102e; 	T(ADD(ax, elem_zcenter));	// 9970 add     ax, elem_zCenter ;~ 0613:102E
cs=0x613;eip=0x001032; 	X(MOV(*(dw*)(raddr(ss,bp+var_11e)), ax));	// 9971 mov     [bp+var_11E], ax ;~ 0613:1032
cs=0x613;eip=0x001036; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9972 mov     bx, [bp+var_146] ;~ 0613:1036
cs=0x613;eip=0x00103a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 9973 mov     ax, [bx+0] ;~ 0613:103A
cs=0x613;eip=0x00103c; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 9974 mov     dx, [bx+2] ;~ 0613:103C
cs=0x613;eip=0x00103f; 	T(MOV(cl, 6));	// 9975 mov     cl, 6 ;~ 0613:103F
loc_15751:
	// 4902 
cs=0x613;eip=0x001041; 	T(SAR(dx, 1));	// 9978 sar     dx, 1 ;~ 0613:1041
cs=0x613;eip=0x001043; 	T(RCR(ax, 1));	// 9979 rcr     ax, 1 ;~ 0613:1043
cs=0x613;eip=0x001045; 	T(DEC(cl));	// 9980 dec     cl ;~ 0613:1045
cs=0x613;eip=0x001047; 	J(JNZ(loc_15751));	// 9981 jnz     short loc_15751 ;~ 0613:1047
cs=0x613;eip=0x001049; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_122))));	// 9982 sub     ax, [bp+var_122] ;~ 0613:1049
cs=0x613;eip=0x00104d; 	X(MOV(*(dw*)(raddr(ss,bp+vec_182)), ax));	// 9983 mov     [bp+vec_182], ax ;~ 0613:104D
cs=0x613;eip=0x001051; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9984 mov     bx, [bp+var_146] ;~ 0613:1051
cs=0x613;eip=0x001055; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 9985 mov     ax, [bx+4] ;~ 0613:1055
cs=0x613;eip=0x001058; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 9986 mov     dx, [bx+6] ;~ 0613:1058
cs=0x613;eip=0x00105b; 	T(MOV(cl, 6));	// 9987 mov     cl, 6 ;~ 0613:105B
loc_1576d:
	// 4903 
cs=0x613;eip=0x00105d; 	T(SAR(dx, 1));	// 9990 sar     dx, 1 ;~ 0613:105D
cs=0x613;eip=0x00105f; 	T(RCR(ax, 1));	// 9991 rcr     ax, 1 ;~ 0613:105F
cs=0x613;eip=0x001061; 	T(DEC(cl));	// 9992 dec     cl ;~ 0613:1061
cs=0x613;eip=0x001063; 	J(JNZ(loc_1576d));	// 9993 jnz     short loc_1576D ;~ 0613:1063
cs=0x613;eip=0x001065; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_120))));	// 9994 sub     ax, [bp+var_120] ;~ 0613:1065
cs=0x613;eip=0x001069; 	X(MOV(*(dw*)(raddr(ss,bp+var_180)), ax));	// 9995 mov     [bp+var_180], ax ;~ 0613:1069
cs=0x613;eip=0x00106d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9996 mov     bx, [bp+var_146] ;~ 0613:106D
cs=0x613;eip=0x001071; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 9997 mov     ax, [bx+8] ;~ 0613:1071
cs=0x613;eip=0x001074; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 9998 mov     dx, [bx+0Ah] ;~ 0613:1074
cs=0x613;eip=0x001077; 	T(MOV(cl, 6));	// 9999 mov     cl, 6 ;~ 0613:1077
loc_15789:
	// 4904 
cs=0x613;eip=0x001079; 	T(SAR(dx, 1));	// 10002 sar     dx, 1 ;~ 0613:1079
cs=0x613;eip=0x00107b; 	T(RCR(ax, 1));	// 10003 rcr     ax, 1 ;~ 0613:107B
cs=0x613;eip=0x00107d; 	T(DEC(cl));	// 10004 dec     cl ;~ 0613:107D
cs=0x613;eip=0x00107f; 	J(JNZ(loc_15789));	// 10005 jnz     short loc_15789 ;~ 0613:107F
cs=0x613;eip=0x001081; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_11e))));	// 10006 sub     ax, [bp+var_11E] ;~ 0613:1081
cs=0x613;eip=0x001085; 	X(MOV(*(dw*)(raddr(ss,bp+var_17e)), ax));	// 10007 mov     [bp+var_17E], ax ;~ 0613:1085
cs=0x613;eip=0x001089; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10008 mov     bx, [bp+var_DE] ;~ 0613:1089
cs=0x613;eip=0x00108d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 10009 mov     ax, [bx+0] ;~ 0613:108D
cs=0x613;eip=0x00108f; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 10010 mov     dx, [bx+2] ;~ 0613:108F
cs=0x613;eip=0x001092; 	T(MOV(cl, 6));	// 10011 mov     cl, 6 ;~ 0613:1092
loc_157a4:
	// 4905 
cs=0x613;eip=0x001094; 	T(SAR(dx, 1));	// 10014 sar     dx, 1 ;~ 0613:1094
cs=0x613;eip=0x001096; 	T(RCR(ax, 1));	// 10015 rcr     ax, 1 ;~ 0613:1096
cs=0x613;eip=0x001098; 	T(DEC(cl));	// 10016 dec     cl ;~ 0613:1098
cs=0x613;eip=0x00109a; 	J(JNZ(loc_157a4));	// 10017 jnz     short loc_157A4 ;~ 0613:109A
cs=0x613;eip=0x00109c; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_122))));	// 10018 sub     ax, [bp+var_122] ;~ 0613:109C
cs=0x613;eip=0x0010a0; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1e4)), ax));	// 10019 mov     [bp+vec_1E4], ax ;~ 0613:10A0
cs=0x613;eip=0x0010a4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10020 mov     bx, [bp+var_DE] ;~ 0613:10A4
cs=0x613;eip=0x0010a8; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 10021 mov     ax, [bx+4] ;~ 0613:10A8
cs=0x613;eip=0x0010ab; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 10022 mov     dx, [bx+6] ;~ 0613:10AB
cs=0x613;eip=0x0010ae; 	T(MOV(cl, 6));	// 10023 mov     cl, 6 ;~ 0613:10AE
loc_157c0:
	// 4906 
cs=0x613;eip=0x0010b0; 	T(SAR(dx, 1));	// 10026 sar     dx, 1 ;~ 0613:10B0
cs=0x613;eip=0x0010b2; 	T(RCR(ax, 1));	// 10027 rcr     ax, 1 ;~ 0613:10B2
cs=0x613;eip=0x0010b4; 	T(DEC(cl));	// 10028 dec     cl ;~ 0613:10B4
cs=0x613;eip=0x0010b6; 	J(JNZ(loc_157c0));	// 10029 jnz     short loc_157C0 ;~ 0613:10B6
cs=0x613;eip=0x0010b8; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_120))));	// 10030 sub     ax, [bp+var_120] ;~ 0613:10B8
cs=0x613;eip=0x0010bc; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e2)), ax));	// 10031 mov     [bp+var_1E2], ax ;~ 0613:10BC
cs=0x613;eip=0x0010c0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10032 mov     bx, [bp+var_DE] ;~ 0613:10C0
cs=0x613;eip=0x0010c4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 10033 mov     ax, [bx+8] ;~ 0613:10C4
cs=0x613;eip=0x0010c7; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 10034 mov     dx, [bx+0Ah] ;~ 0613:10C7
cs=0x613;eip=0x0010ca; 	T(MOV(cl, 6));	// 10035 mov     cl, 6 ;~ 0613:10CA
loc_157dc:
	// 4907 
cs=0x613;eip=0x0010cc; 	T(SAR(dx, 1));	// 10038 sar     dx, 1 ;~ 0613:10CC
cs=0x613;eip=0x0010ce; 	T(RCR(ax, 1));	// 10039 rcr     ax, 1 ;~ 0613:10CE
cs=0x613;eip=0x0010d0; 	T(DEC(cl));	// 10040 dec     cl ;~ 0613:10D0
cs=0x613;eip=0x0010d2; 	J(JNZ(loc_157dc));	// 10041 jnz     short loc_157DC ;~ 0613:10D2
cs=0x613;eip=0x0010d4; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_11e))));	// 10042 sub     ax, [bp+var_11E] ;~ 0613:10D4
cs=0x613;eip=0x0010d8; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e0)), ax));	// 10043 mov     [bp+var_1E0], ax ;~ 0613:10D8
cs=0x613;eip=0x0010dc; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 10044 mov     ax, word ptr [bp+var_6] ;~ 0613:10DC
cs=0x613;eip=0x0010df; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_6+2)))));	// 10045 mov     dx, word ptr [bp+var_6+2] ;~ 0613:10DF
cs=0x613;eip=0x0010e2; 	T(ADD(ax, 0x10));	// 10046 add     ax, 10h         ; plane rotation matrix ;~ 0613:10E2
cs=0x613;eip=0x0010e5; 	X(PUSH(si));	// 10047 push    si ;~ 0613:10E5
cs=0x613;eip=0x0010e6; 	T(di = bp+mat_134);	// 10048 lea     di, [bp+mat_134] ;~ 0613:10E6
cs=0x613;eip=0x0010ea; 	T(MOV(si, ax));	// 10049 mov     si, ax ;~ 0613:10EA
cs=0x613;eip=0x0010ec; 	X(PUSH(ss));	// 10050 push    ss ;~ 0613:10EC
cs=0x613;eip=0x0010ed; 	X(POP(es));	// 10051 pop     es ;~ 0613:10ED
cs=0x613;eip=0x0010ee; 	X(PUSH(ds));	// 10052 push    ds ;~ 0613:10EE
cs=0x613;eip=0x0010ef; 	T(MOV(ds, dx));	// 10053 mov     ds, dx ;~ 0613:10EF
cs=0x613;eip=0x0010f1; 	T(MOV(cx, 9));	// 10054 mov     cx, 9 ;~ 0613:10F1
	// 10055 repne movsw ;~ 0613:10F4
cs=0x613;eip=0x0010f4; 	X(	REPNE MOVSW);	// 10055 repne movsw ;~ 0613:10F4
cs=0x613;eip=0x0010f6; 	X(POP(ds));	// 10056 pop     ds ;~ 0613:10F6
cs=0x613;eip=0x0010f7; 	X(POP(si));	// 10057 pop     si ;~ 0613:10F7
cs=0x613;eip=0x0010f8; 	T(ax = bp+var_10e);	// 10058 lea     ax, [bp+var_10E] ;~ 0613:10F8
cs=0x613;eip=0x0010fc; 	X(PUSH(ax));	// 10059 push    ax ;~ 0613:10FC
cs=0x613;eip=0x0010fd; 	T(ax = bp+mat_134);	// 10060 lea     ax, [bp+mat_134] ;~ 0613:10FD
cs=0x613;eip=0x001101; 	X(PUSH(ax));	// 10061 push    ax ;~ 0613:1101
cs=0x613;eip=0x001102; 	J(CALLF(mat_invert,0));	// 10062 call    mat_invert ;~ 0613:1102
cs=0x613;eip=0x001107; 	T(ADD(sp, 4));	// 10063 add     sp, 4 ;~ 0613:1107
cs=0x613;eip=0x00110a; 	T(ax = bp+vec_c);	// 10064 lea     ax, [bp+vec_C] ;~ 0613:110A
cs=0x613;eip=0x00110d; 	X(PUSH(ax));	// 10065 push    ax ;~ 0613:110D
cs=0x613;eip=0x00110e; 	T(ax = bp+var_10e);	// 10066 lea     ax, [bp+var_10E] ;~ 0613:110E
cs=0x613;eip=0x001112; 	X(PUSH(ax));	// 10067 push    ax ;~ 0613:1112
cs=0x613;eip=0x001113; 	T(ax = bp+vec_182);	// 10068 lea     ax, [bp+vec_182] ;~ 0613:1113
cs=0x613;eip=0x001117; 	X(PUSH(ax));	// 10069 push    ax ;~ 0613:1117
cs=0x613;eip=0x001118; 	J(CALLF(mat_mul_vector,0));	// 10070 call    mat_mul_vector ;~ 0613:1118
cs=0x613;eip=0x00111d; 	T(ADD(sp, 6));	// 10071 add     sp, 6 ;~ 0613:111D
cs=0x613;eip=0x001120; 	T(ax = bp+vec_1c);	// 10072 lea     ax, [bp+vec_1C] ;~ 0613:1120
cs=0x613;eip=0x001123; 	X(PUSH(ax));	// 10073 push    ax ;~ 0613:1123
cs=0x613;eip=0x001124; 	T(ax = bp+var_10e);	// 10074 lea     ax, [bp+var_10E] ;~ 0613:1124
cs=0x613;eip=0x001128; 	X(PUSH(ax));	// 10075 push    ax ;~ 0613:1128
cs=0x613;eip=0x001129; 	T(ax = bp+vec_1e4);	// 10076 lea     ax, [bp+vec_1E4] ;~ 0613:1129
cs=0x613;eip=0x00112d; 	X(PUSH(ax));	// 10077 push    ax ;~ 0613:112D
cs=0x613;eip=0x00112e; 	J(CALLF(mat_mul_vector,0));	// 10078 call    mat_mul_vector ;~ 0613:112E
cs=0x613;eip=0x001133; 	T(ADD(sp, 6));	// 10079 add     sp, 6 ;~ 0613:1133
cs=0x613;eip=0x001136; 	X(MOV(*(raddr(ss,bp+var_136)), 0));	// 10080 mov     [bp+var_136], 0 ;~ 0613:1136
cs=0x613;eip=0x00113b; 	T(CMP(byte_4392c, 0));	// 10081 cmp     byte_4392C, 0 ;~ 0613:113B
cs=0x613;eip=0x001140; 	J(JNZ(loc_15879));	// 10082 jnz     short loc_15879 ;~ 0613:1140
cs=0x613;eip=0x001142; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x0FFF4));	// 10083 cmp     [bp+var_A], 0FFF4h ;~ 0613:1142
cs=0x613;eip=0x001146; 	J(JGE(loc_15879));	// 10084 jge     short loc_15879 ;~ 0613:1146
cs=0x613;eip=0x001148; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), 0x0FFF4));	// 10085 cmp     [bp+var_1A], 0FFF4h ;~ 0613:1148
cs=0x613;eip=0x00114c; 	J(JGE(loc_15879));	// 10086 jge     short loc_15879 ;~ 0613:114C
cs=0x613;eip=0x00114e; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), 0x0FFE8));	// 10087 cmp     [bp+var_1A], 0FFE8h ;~ 0613:114E
cs=0x613;eip=0x001152; 	J(JLE(loc_158da));	// 10088 jle     short loc_158DA ;~ 0613:1152
cs=0x613;eip=0x001154; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 10089 mov     al, [bp+arg_8] ;~ 0613:1154
cs=0x613;eip=0x001157; 	T(CBW);	// 10090 cbw ;~ 0613:1157
cs=0x613;eip=0x001158; 	X(PUSH(ax));	// 10091 push    ax ;~ 0613:1158
cs=0x613;eip=0x001159; 	T(MOV(ax, 5));	// 10092 mov     ax, 5 ;~ 0613:1159
cs=0x613;eip=0x00115c; 	X(PUSH(ax));	// 10093 push    ax ;~ 0613:115C
cs=0x613;eip=0x00115d; 	X(PUSH(cs));	// 10094 push    cs ;~ 0613:115D
cs=0x613;eip=0x00115e; 	J(CALL(update_crash_state,0));	// 10095 call    near ptr update_crash_state ;~ 0613:115E
cs=0x613;eip=0x001161; 	T(ADD(sp, 4));	// 10096 add     sp, 4 ;~ 0613:1161
cs=0x613;eip=0x001164; 	X(MOV(*(raddr(ss,bp+var_136)), 1));	// 10097 mov     [bp+var_136], 1 ;~ 0613:1164
loc_15879:
	// 4908 
cs=0x613;eip=0x001169; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), 0));	// 10101 cmp     [bp+var_1A], 0 ;~ 0613:1169
cs=0x613;eip=0x00116d; 	J(JZ(loc_15882));	// 10102 jz      short loc_15882 ;~ 0613:116D
cs=0x613;eip=0x00116f; 	J(JMP(loc_1599e));	// 10103 jmp     loc_1599E ;~ 0613:116F
loc_15882:
	// 4909 
cs=0x613;eip=0x001172; 	X(MOV(vec_unk2, 0));	// 10107 mov     vec_unk2, 0 ;~ 0613:1172
cs=0x613;eip=0x001178; 	X(MOV(word_44f38, 0));	// 10108 mov     word_44F38, 0 ;~ 0613:1178
cs=0x613;eip=0x00117e; 	X(MOV(word_44f3a, 0x40));	// 10109 mov     word_44F3A, 40h ; '@' ;~ 0613:117E
cs=0x613;eip=0x001184; 	T(MOV(ax, planindex));	// 10110 mov     ax, planindex ;~ 0613:1184
cs=0x613;eip=0x001187; 	X(MOV(planindex_copy, ax));	// 10111 mov     planindex_copy, ax ;~ 0613:1187
cs=0x613;eip=0x00118a; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10112 mov     al, [bp+var_E8] ;~ 0613:118A
cs=0x613;eip=0x00118e; 	T(CBW);	// 10113 cbw ;~ 0613:118E
cs=0x613;eip=0x00118f; 	T(MOV(di, ax));	// 10114 mov     di, ax ;~ 0613:118F
cs=0x613;eip=0x001191; 	T(SHL(di, 1));	// 10115 shl     di, 1 ;~ 0613:1191
cs=0x613;eip=0x001193; 	T(MOV(ax, *(dw*)(raddr(ss,bp+di+var_140))));	// 10116 mov     ax, [bp+di+var_140] ;~ 0613:1193
cs=0x613;eip=0x001197; 	X(MOV(pstate_f36mminf40sar2, ax));	// 10117 mov     pState_f36Mminf40sar2, ax ;~ 0613:1197
cs=0x613;eip=0x00119a; 	X(PUSH(cs));	// 10118 push    cs ;~ 0613:119A
cs=0x613;eip=0x00119b; 	J(CALL(plane_rotate_op,0));	// 10119 call    near ptr plane_rotate_op ;~ 0613:119B
cs=0x613;eip=0x00119e; 	T(MOV(ax, vec_planerotopresult));	// 10120 mov     ax, vec_planerotopresult ;~ 0613:119E
cs=0x613;eip=0x0011a1; 	T(CWD);	// 10121 cwd ;~ 0613:11A1
cs=0x613;eip=0x0011a2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10122 mov     bx, [bp+var_DE] ;~ 0613:11A2
cs=0x613;eip=0x0011a6; 	X(SUB(*(dw*)(raddr(ds,bx+0)), ax));	// 10123 sub     [bx+0], ax ;~ 0613:11A6
cs=0x613;eip=0x0011a8; 	X(SBB(*(dw*)(raddr(ds,bx+2)), dx));	// 10124 sbb     [bx+2], dx ;~ 0613:11A8
cs=0x613;eip=0x0011ab; 	T(MOV(ax, word_44f3e));	// 10125 mov     ax, word_44F3E ;~ 0613:11AB
cs=0x613;eip=0x0011ae; 	T(CWD);	// 10126 cwd ;~ 0613:11AE
cs=0x613;eip=0x0011af; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10127 mov     bx, [bp+var_DE] ;~ 0613:11AF
cs=0x613;eip=0x0011b3; 	X(SUB(*(dw*)(raddr(ds,bx+4)), ax));	// 10128 sub     [bx+4], ax ;~ 0613:11B3
cs=0x613;eip=0x0011b6; 	X(SBB(*(dw*)(raddr(ds,bx+6)), dx));	// 10129 sbb     [bx+6], dx ;~ 0613:11B6
cs=0x613;eip=0x0011b9; 	T(MOV(ax, word_44f40));	// 10130 mov     ax, word_44F40 ;~ 0613:11B9
cs=0x613;eip=0x0011bc; 	T(CWD);	// 10131 cwd ;~ 0613:11BC
cs=0x613;eip=0x0011bd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10132 mov     bx, [bp+var_DE] ;~ 0613:11BD
cs=0x613;eip=0x0011c1; 	X(SUB(*(dw*)(raddr(ds,bx+8)), ax));	// 10133 sub     [bx+8], ax ;~ 0613:11C1
cs=0x613;eip=0x0011c4; 	X(SBB(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 10134 sbb     [bx+0Ah], dx ;~ 0613:11C4
cs=0x613;eip=0x0011c7; 	J(JMP(loc_15cdf));	// 10135 jmp     loc_15CDF ;~ 0613:11C7
loc_158da:
	// 4910 
cs=0x613;eip=0x0011ca; 	X(MOV(planindex, 0));	// 10139 mov     planindex, 0 ;~ 0613:11CA
cs=0x613;eip=0x0011d0; 	T(MOV(ax, planptr));	// 10140 mov     ax, planptr ;~ 0613:11D0
cs=0x613;eip=0x0011d3; 	T(MOV(dx, word_454c4));	// 10141 mov     dx, word_454C4 ;~ 0613:11D3
cs=0x613;eip=0x0011d7; 	X(MOV(current_planptr, ax));	// 10142 mov     current_planptr, ax ;~ 0613:11D7
cs=0x613;eip=0x0011da; 	X(MOV(word_44d66, dx));	// 10143 mov     word_44D66, dx ;~ 0613:11DA
cs=0x613;eip=0x0011de; 	X(MOV(byte_4392c, 1));	// 10144 mov     byte_4392C, 1 ;~ 0613:11DE
cs=0x613;eip=0x0011e3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10145 mov     bx, [bp+var_DE] ;~ 0613:11E3
cs=0x613;eip=0x0011e7; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 10146 mov     ax, [bx+0] ;~ 0613:11E7
cs=0x613;eip=0x0011e9; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 10147 mov     dx, [bx+2] ;~ 0613:11E9
cs=0x613;eip=0x0011ec; 	T(MOV(cl, 6));	// 10148 mov     cl, 6 ;~ 0613:11EC
loc_158fe:
	// 4911 
cs=0x613;eip=0x0011ee; 	T(SAR(dx, 1));	// 10151 sar     dx, 1 ;~ 0613:11EE
cs=0x613;eip=0x0011f0; 	T(RCR(ax, 1));	// 10152 rcr     ax, 1 ;~ 0613:11F0
cs=0x613;eip=0x0011f2; 	T(DEC(cl));	// 10153 dec     cl ;~ 0613:11F2
cs=0x613;eip=0x0011f4; 	J(JNZ(loc_158fe));	// 10154 jnz     short loc_158FE ;~ 0613:11F4
cs=0x613;eip=0x0011f6; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1c6)), ax));	// 10155 mov     [bp+vec_1C6], ax ;~ 0613:11F6
cs=0x613;eip=0x0011fa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10156 mov     bx, [bp+var_DE] ;~ 0613:11FA
cs=0x613;eip=0x0011fe; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 10157 mov     ax, [bx+4] ;~ 0613:11FE
cs=0x613;eip=0x001201; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 10158 mov     dx, [bx+6] ;~ 0613:1201
cs=0x613;eip=0x001204; 	T(MOV(cl, 6));	// 10159 mov     cl, 6 ;~ 0613:1204
loc_15916:
	// 4912 
cs=0x613;eip=0x001206; 	T(SAR(dx, 1));	// 10162 sar     dx, 1 ;~ 0613:1206
cs=0x613;eip=0x001208; 	T(RCR(ax, 1));	// 10163 rcr     ax, 1 ;~ 0613:1208
cs=0x613;eip=0x00120a; 	T(DEC(cl));	// 10164 dec     cl ;~ 0613:120A
cs=0x613;eip=0x00120c; 	J(JNZ(loc_15916));	// 10165 jnz     short loc_15916 ;~ 0613:120C
cs=0x613;eip=0x00120e; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 10166 mov     [bp+var_1C4], ax ;~ 0613:120E
cs=0x613;eip=0x001212; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10167 mov     bx, [bp+var_DE] ;~ 0613:1212
cs=0x613;eip=0x001216; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 10168 mov     ax, [bx+8] ;~ 0613:1216
cs=0x613;eip=0x001219; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 10169 mov     dx, [bx+0Ah] ;~ 0613:1219
cs=0x613;eip=0x00121c; 	T(MOV(cl, 6));	// 10170 mov     cl, 6 ;~ 0613:121C
loc_1592e:
	// 4913 
cs=0x613;eip=0x00121e; 	T(SAR(dx, 1));	// 10173 sar     dx, 1 ;~ 0613:121E
cs=0x613;eip=0x001220; 	T(RCR(ax, 1));	// 10174 rcr     ax, 1 ;~ 0613:1220
cs=0x613;eip=0x001222; 	T(DEC(cl));	// 10175 dec     cl ;~ 0613:1222
cs=0x613;eip=0x001224; 	J(JNZ(loc_1592e));	// 10176 jnz     short loc_1592E ;~ 0613:1224
cs=0x613;eip=0x001226; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 10177 mov     [bp+var_1C2], ax ;~ 0613:1226
cs=0x613;eip=0x00122a; 	X(PUSH(ax));	// 10178 push    ax ;~ 0613:122A
cs=0x613;eip=0x00122b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c4))));	// 10179 push    [bp+var_1C4] ;~ 0613:122B
cs=0x613;eip=0x00122f; 	X(PUSH(*(dw*)(raddr(ss,bp+vec_1c6))));	// 10180 push    [bp+vec_1C6] ;~ 0613:122F
cs=0x613;eip=0x001233; 	T(SUB(ax, ax));	// 10181 sub     ax, ax ;~ 0613:1233
cs=0x613;eip=0x001235; 	X(PUSH(ax));	// 10182 push    ax ;~ 0613:1235
cs=0x613;eip=0x001236; 	X(PUSH(cs));	// 10183 push    cs ;~ 0613:1236
cs=0x613;eip=0x001237; 	J(CALL(plane_origin_op,0));	// 10184 call    near ptr plane_origin_op ;~ 0613:1237
cs=0x613;eip=0x00123a; 	T(ADD(sp, 8));	// 10185 add     sp, 8 ;~ 0613:123A
cs=0x613;eip=0x00123d; 	X(MOV(nextposandnormalip, ax));	// 10186 mov     nextPosAndNormalIP, ax ;~ 0613:123D
loc_15950:
	// 4914 
cs=0x613;eip=0x001240; 	T(CMP(nextposandnormalip, 0));	// 10190 cmp     nextPosAndNormalIP, 0 ;~ 0613:1240
cs=0x613;eip=0x001245; 	J(JG(loc_1595a));	// 10191 jg      short loc_1595A ;~ 0613:1245
cs=0x613;eip=0x001247; 	J(JMP(loc_156ed));	// 10192 jmp     loc_156ED ;~ 0613:1247
loc_1595a:
	// 4915 
cs=0x613;eip=0x00124a; 	T(CMP(*(dw*)(raddr(ss,bp+var_f0)), 0));	// 10196 cmp     [bp+var_F0], 0 ;~ 0613:124A
cs=0x613;eip=0x00124f; 	J(JG(loc_15964));	// 10197 jg      short loc_15964 ;~ 0613:124F
cs=0x613;eip=0x001251; 	J(JMP(loc_15642));	// 10198 jmp     loc_15642 ;~ 0613:1251
loc_15964:
	// 4916 
cs=0x613;eip=0x001254; 	T(CMP(nextposandnormalip, 0x18));	// 10202 cmp     nextPosAndNormalIP, 18h ;~ 0613:1254
cs=0x613;eip=0x001259; 	J(JL(loc_1596e));	// 10203 jl      short loc_1596E ;~ 0613:1259
cs=0x613;eip=0x00125b; 	J(JMP(loc_15642));	// 10204 jmp     loc_15642 ;~ 0613:125B
loc_1596e:
	// 4917 
cs=0x613;eip=0x00125e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vec_e4))));	// 10208 mov     ax, [bp+vec_E4] ;~ 0613:125E
cs=0x613;eip=0x001262; 	T(CWD);	// 10209 cwd ;~ 0613:1262
cs=0x613;eip=0x001263; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10210 mov     bx, [bp+var_DE] ;~ 0613:1263
cs=0x613;eip=0x001267; 	X(ADD(*(dw*)(raddr(ds,bx+0)), ax));	// 10211 add     [bx+0], ax ;~ 0613:1267
cs=0x613;eip=0x001269; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 10212 adc     [bx+2], dx ;~ 0613:1269
cs=0x613;eip=0x00126c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e2))));	// 10213 mov     ax, [bp+var_E2] ;~ 0613:126C
cs=0x613;eip=0x001270; 	T(CWD);	// 10214 cwd ;~ 0613:1270
cs=0x613;eip=0x001271; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10215 mov     bx, [bp+var_DE] ;~ 0613:1271
cs=0x613;eip=0x001275; 	X(ADD(*(dw*)(raddr(ds,bx+4)), ax));	// 10216 add     [bx+4], ax ;~ 0613:1275
cs=0x613;eip=0x001278; 	X(ADC(*(dw*)(raddr(ds,bx+6)), dx));	// 10217 adc     [bx+6], dx ;~ 0613:1278
cs=0x613;eip=0x00127b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e0))));	// 10218 mov     ax, [bp+var_E0] ;~ 0613:127B
cs=0x613;eip=0x00127f; 	T(CWD);	// 10219 cwd ;~ 0613:127F
cs=0x613;eip=0x001280; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10220 mov     bx, [bp+var_DE] ;~ 0613:1280
cs=0x613;eip=0x001284; 	X(ADD(*(dw*)(raddr(ds,bx+8)), ax));	// 10221 add     [bx+8], ax ;~ 0613:1284
cs=0x613;eip=0x001287; 	X(ADC(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 10222 adc     [bx+0Ah], dx ;~ 0613:1287
cs=0x613;eip=0x00128a; 	J(JMP(loc_156ed));	// 10223 jmp     loc_156ED ;~ 0613:128A
loc_1599e:
	// 4918 
cs=0x613;eip=0x00128e; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 10228 cmp     [bp+var_A], 0 ;~ 0613:128E
cs=0x613;eip=0x001292; 	J(JLE(loc_159ad));	// 10229 jle     short loc_159AD ;~ 0613:1292
cs=0x613;eip=0x001294; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), 0));	// 10230 cmp     [bp+var_1A], 0 ;~ 0613:1294
cs=0x613;eip=0x001298; 	J(JGE(loc_159ad));	// 10231 jge     short loc_159AD ;~ 0613:1298
cs=0x613;eip=0x00129a; 	J(JMP(loc_15a30));	// 10232 jmp     loc_15A30 ;~ 0613:129A
loc_159ad:
	// 4919 
cs=0x613;eip=0x00129d; 	X(MOV(vec_unk2, 0));	// 10237 mov     vec_unk2, 0 ;~ 0613:129D
cs=0x613;eip=0x0012a3; 	X(MOV(word_44f38, 0));	// 10238 mov     word_44F38, 0 ;~ 0613:12A3
cs=0x613;eip=0x0012a9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e6))));	// 10239 mov     ax, [bp+var_E6] ;~ 0613:12A9
cs=0x613;eip=0x0012ad; 	X(MOV(word_44f3a, ax));	// 10240 mov     word_44F3A, ax ;~ 0613:12AD
cs=0x613;eip=0x0012b0; 	T(MOV(ax, planindex));	// 10241 mov     ax, planindex ;~ 0613:12B0
cs=0x613;eip=0x0012b3; 	X(MOV(planindex_copy, ax));	// 10242 mov     planindex_copy, ax ;~ 0613:12B3
cs=0x613;eip=0x0012b6; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10243 mov     al, [bp+var_E8] ;~ 0613:12B6
cs=0x613;eip=0x0012ba; 	T(CBW);	// 10244 cbw ;~ 0613:12BA
cs=0x613;eip=0x0012bb; 	T(MOV(di, ax));	// 10245 mov     di, ax ;~ 0613:12BB
cs=0x613;eip=0x0012bd; 	T(SHL(di, 1));	// 10246 shl     di, 1 ;~ 0613:12BD
cs=0x613;eip=0x0012bf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+di+var_140))));	// 10247 mov     ax, [bp+di+var_140] ;~ 0613:12BF
cs=0x613;eip=0x0012c3; 	X(MOV(pstate_f36mminf40sar2, ax));	// 10248 mov     pState_f36Mminf40sar2, ax ;~ 0613:12C3
cs=0x613;eip=0x0012c6; 	X(PUSH(cs));	// 10249 push    cs ;~ 0613:12C6
cs=0x613;eip=0x0012c7; 	J(CALL(plane_rotate_op,0));	// 10250 call    near ptr plane_rotate_op ;~ 0613:12C7
cs=0x613;eip=0x0012ca; 	T(MOV(ax, vec_planerotopresult));	// 10251 mov     ax, vec_planerotopresult ;~ 0613:12CA
cs=0x613;eip=0x0012cd; 	T(CWD);	// 10252 cwd ;~ 0613:12CD
cs=0x613;eip=0x0012ce; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 10253 mov     bx, [bp+var_146] ;~ 0613:12CE
cs=0x613;eip=0x0012d2; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0))));	// 10254 mov     cx, [bx+0] ;~ 0613:12D2
cs=0x613;eip=0x0012d4; 	T(MOV(di, *(dw*)(raddr(ds,bx+2))));	// 10255 mov     di, [bx+2] ;~ 0613:12D4
cs=0x613;eip=0x0012d7; 	T(ADD(cx, ax));	// 10256 add     cx, ax ;~ 0613:12D7
cs=0x613;eip=0x0012d9; 	T(ADC(di, dx));	// 10257 adc     di, dx ;~ 0613:12D9
cs=0x613;eip=0x0012db; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10258 mov     bx, [bp+var_DE] ;~ 0613:12DB
cs=0x613;eip=0x0012df; 	X(MOV(*(dw*)(raddr(ds,bx+0)), cx));	// 10259 mov     [bx+0], cx ;~ 0613:12DF
cs=0x613;eip=0x0012e1; 	X(MOV(*(dw*)(raddr(ds,bx+2)), di));	// 10260 mov     [bx+2], di ;~ 0613:12E1
cs=0x613;eip=0x0012e4; 	T(MOV(ax, word_44f3e));	// 10261 mov     ax, word_44F3E ;~ 0613:12E4
cs=0x613;eip=0x0012e7; 	T(CWD);	// 10262 cwd ;~ 0613:12E7
cs=0x613;eip=0x0012e8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 10263 mov     bx, [bp+var_146] ;~ 0613:12E8
cs=0x613;eip=0x0012ec; 	T(MOV(cx, *(dw*)(raddr(ds,bx+4))));	// 10264 mov     cx, [bx+4] ;~ 0613:12EC
cs=0x613;eip=0x0012ef; 	T(MOV(di, *(dw*)(raddr(ds,bx+6))));	// 10265 mov     di, [bx+6] ;~ 0613:12EF
cs=0x613;eip=0x0012f2; 	T(ADD(cx, ax));	// 10266 add     cx, ax ;~ 0613:12F2
cs=0x613;eip=0x0012f4; 	T(ADC(di, dx));	// 10267 adc     di, dx ;~ 0613:12F4
cs=0x613;eip=0x0012f6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10268 mov     bx, [bp+var_DE] ;~ 0613:12F6
cs=0x613;eip=0x0012fa; 	X(MOV(*(dw*)(raddr(ds,bx+4)), cx));	// 10269 mov     [bx+4], cx ;~ 0613:12FA
cs=0x613;eip=0x0012fd; 	X(MOV(*(dw*)(raddr(ds,bx+6)), di));	// 10270 mov     [bx+6], di ;~ 0613:12FD
cs=0x613;eip=0x001300; 	T(MOV(ax, word_44f40));	// 10271 mov     ax, word_44F40 ;~ 0613:1300
cs=0x613;eip=0x001303; 	T(CWD);	// 10272 cwd ;~ 0613:1303
cs=0x613;eip=0x001304; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 10273 mov     bx, [bp+var_146] ;~ 0613:1304
cs=0x613;eip=0x001308; 	T(MOV(cx, *(dw*)(raddr(ds,bx+8))));	// 10274 mov     cx, [bx+8] ;~ 0613:1308
cs=0x613;eip=0x00130b; 	T(MOV(di, *(dw*)(raddr(ds,bx+0x0A))));	// 10275 mov     di, [bx+0Ah] ;~ 0613:130B
cs=0x613;eip=0x00130e; 	T(ADD(cx, ax));	// 10276 add     cx, ax ;~ 0613:130E
cs=0x613;eip=0x001310; 	T(ADC(di, dx));	// 10277 adc     di, dx ;~ 0613:1310
cs=0x613;eip=0x001312; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10278 mov     bx, [bp+var_DE] ;~ 0613:1312
cs=0x613;eip=0x001316; 	X(MOV(*(dw*)(raddr(ds,bx+8)), cx));	// 10279 mov     [bx+8], cx ;~ 0613:1316
cs=0x613;eip=0x001319; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), di));	// 10280 mov     [bx+0Ah], di ;~ 0613:1319
cs=0x613;eip=0x00131c; 	J(JMP(loc_15c04));	// 10281 jmp     loc_15C04 ;~ 0613:131C
loc_15a30:
	// 4920 
cs=0x613;eip=0x001320; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 10286 mov     ax, [bp+var_8] ;~ 0613:1320
cs=0x613;eip=0x001323; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), ax));	// 10287 mov     [bp+var_EE], ax ;~ 0613:1323
cs=0x613;eip=0x001327; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 10288 mov     ax, [bp+var_A] ;~ 0613:1327
cs=0x613;eip=0x00132a; 	T(NEG(ax));	// 10289 neg     ax ;~ 0613:132A
cs=0x613;eip=0x00132c; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 10290 mov     [bp+var_8], ax ;~ 0613:132C
cs=0x613;eip=0x00132f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ee))));	// 10291 mov     ax, [bp+var_EE] ;~ 0613:132F
cs=0x613;eip=0x001333; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 10292 mov     [bp+var_A], ax ;~ 0613:1333
cs=0x613;eip=0x001336; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 10293 mov     ax, [bp+var_18] ;~ 0613:1336
cs=0x613;eip=0x001339; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), ax));	// 10294 mov     [bp+var_EE], ax ;~ 0613:1339
cs=0x613;eip=0x00133d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 10295 mov     ax, [bp+var_1A] ;~ 0613:133D
cs=0x613;eip=0x001340; 	T(NEG(ax));	// 10296 neg     ax ;~ 0613:1340
cs=0x613;eip=0x001342; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 10297 mov     [bp+var_18], ax ;~ 0613:1342
cs=0x613;eip=0x001345; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ee))));	// 10298 mov     ax, [bp+var_EE] ;~ 0613:1345
cs=0x613;eip=0x001349; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 10299 mov     [bp+var_1A], ax ;~ 0613:1349
cs=0x613;eip=0x00134c; 	T(SUB(ax, ax));	// 10300 sub     ax, ax ;~ 0613:134C
cs=0x613;eip=0x00134e; 	X(PUSH(ax));	// 10301 push    ax ;~ 0613:134E
cs=0x613;eip=0x00134f; 	T(ax = bp+vec_fc);	// 10302 lea     ax, [bp+vec_FC] ;~ 0613:134F
cs=0x613;eip=0x001353; 	X(PUSH(ax));	// 10303 push    ax ;~ 0613:1353
cs=0x613;eip=0x001354; 	T(ax = bp+vec_c);	// 10304 lea     ax, [bp+vec_C] ;~ 0613:1354
cs=0x613;eip=0x001357; 	X(PUSH(ax));	// 10305 push    ax ;~ 0613:1357
cs=0x613;eip=0x001358; 	T(ax = bp+vec_1c);	// 10306 lea     ax, [bp+vec_1C] ;~ 0613:1358
cs=0x613;eip=0x00135b; 	X(PUSH(ax));	// 10307 push    ax ;~ 0613:135B
cs=0x613;eip=0x00135c; 	J(CALLF(vector_op_unk,0));	// 10308 call    vector_op_unk ;~ 0613:135C
cs=0x613;eip=0x001361; 	T(ADD(sp, 8));	// 10309 add     sp, 8 ;~ 0613:1361
cs=0x613;eip=0x001364; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vec_1c))));	// 10310 mov     ax, [bp+vec_1C] ;~ 0613:1364
cs=0x613;eip=0x001367; 	T(SUB(ax, *(dw*)(raddr(ss,bp+vec_fc))));	// 10311 sub     ax, [bp+vec_FC] ;~ 0613:1367
cs=0x613;eip=0x00136b; 	T(MOV(cl, 6));	// 10312 mov     cl, 6 ;~ 0613:136B
cs=0x613;eip=0x00136d; 	T(SHL(ax, cl));	// 10313 shl     ax, cl ;~ 0613:136D
cs=0x613;eip=0x00136f; 	X(MOV(*(dw*)(raddr(ss,bp+vec_17c)), ax));	// 10314 mov     [bp+vec_17C], ax ;~ 0613:136F
cs=0x613;eip=0x001373; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 10315 mov     ax, [bp+var_1A] ;~ 0613:1373
cs=0x613;eip=0x001376; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_fa))));	// 10316 sub     ax, [bp+var_FA] ;~ 0613:1376
cs=0x613;eip=0x00137a; 	T(SHL(ax, cl));	// 10317 shl     ax, cl ;~ 0613:137A
cs=0x613;eip=0x00137c; 	X(MOV(*(dw*)(raddr(ss,bp+var_17a)), ax));	// 10318 mov     [bp+var_17A], ax ;~ 0613:137C
cs=0x613;eip=0x001380; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 10319 mov     ax, [bp+var_18] ;~ 0613:1380
cs=0x613;eip=0x001383; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_f8))));	// 10320 sub     ax, [bp+var_F8] ;~ 0613:1383
cs=0x613;eip=0x001387; 	T(SHL(ax, cl));	// 10321 shl     ax, cl ;~ 0613:1387
cs=0x613;eip=0x001389; 	X(MOV(*(dw*)(raddr(ss,bp+var_178)), ax));	// 10322 mov     [bp+var_178], ax ;~ 0613:1389
cs=0x613;eip=0x00138d; 	T(ax = bp+vec_17c);	// 10323 lea     ax, [bp+vec_17C] ;~ 0613:138D
cs=0x613;eip=0x001391; 	X(PUSH(ax));	// 10324 push    ax ;~ 0613:1391
cs=0x613;eip=0x001392; 	J(CALLF(polarradius3d,0));	// 10325 call    polarRadius3D ;~ 0613:1392
cs=0x613;eip=0x001397; 	T(ADD(sp, 2));	// 10326 add     sp, 2 ;~ 0613:1397
cs=0x613;eip=0x00139a; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), ax));	// 10327 mov     [bp+var_EE], ax ;~ 0613:139A
cs=0x613;eip=0x00139e; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10328 mov     al, [bp+var_E8] ;~ 0613:139E
cs=0x613;eip=0x0013a2; 	T(CBW);	// 10329 cbw ;~ 0613:13A2
cs=0x613;eip=0x0013a3; 	T(MOV(di, ax));	// 10330 mov     di, ax ;~ 0613:13A3
cs=0x613;eip=0x0013a5; 	T(SHL(di, 1));	// 10331 shl     di, 1 ;~ 0613:13A5
cs=0x613;eip=0x0013a7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 10332 mov     bx, [bp+arg_0] ;~ 0613:13A7
cs=0x613;eip=0x0013aa; 	T(MOV(ax, *(dw*)(raddr(ds,bx+di+0x4C))));	// 10333 mov     ax, [bx+di+4Ch] ;~ 0613:13AA
cs=0x613;eip=0x0013ad; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_e6))));	// 10334 add     ax, [bp+var_E6] ;~ 0613:13AD
cs=0x613;eip=0x0013b1; 	X(MOV(*(dw*)(raddr(ss,bp+var_f4)), ax));	// 10335 mov     [bp+var_F4], ax ;~ 0613:13B1
cs=0x613;eip=0x0013b5; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_ee))));	// 10336 sub     ax, [bp+var_EE] ;~ 0613:13B5
cs=0x613;eip=0x0013b9; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), ax));	// 10337 mov     [bp+var_F2], ax ;~ 0613:13B9
cs=0x613;eip=0x0013bd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f4))));	// 10338 mov     ax, [bp+var_F4] ;~ 0613:13BD
cs=0x613;eip=0x0013c1; 	T(CWD);	// 10339 cwd ;~ 0613:13C1
cs=0x613;eip=0x0013c2; 	X(PUSH(dx));	// 10340 push    dx ;~ 0613:13C2
cs=0x613;eip=0x0013c3; 	X(PUSH(ax));	// 10341 push    ax ;~ 0613:13C3
cs=0x613;eip=0x0013c4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f2))));	// 10342 mov     ax, [bp+var_F2] ;~ 0613:13C4
cs=0x613;eip=0x0013c8; 	T(CWD);	// 10343 cwd ;~ 0613:13C8
cs=0x613;eip=0x0013c9; 	X(PUSH(dx));	// 10344 push    dx ;~ 0613:13C9
cs=0x613;eip=0x0013ca; 	X(PUSH(ax));	// 10345 push    ax ;~ 0613:13CA
cs=0x613;eip=0x0013cb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10346 mov     bx, [bp+var_DE] ;~ 0613:13CB
cs=0x613;eip=0x0013cf; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 10347 mov     ax, [bx+0] ;~ 0613:13CF
cs=0x613;eip=0x0013d1; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 10348 mov     dx, [bx+2] ;~ 0613:13D1
cs=0x613;eip=0x0013d4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 10349 mov     bx, [bp+var_146] ;~ 0613:13D4
cs=0x613;eip=0x0013d8; 	T(SUB(ax, *(dw*)(raddr(ds,bx+0))));	// 10350 sub     ax, [bx+0] ;~ 0613:13D8
cs=0x613;eip=0x0013da; 	T(SBB(dx, *(dw*)(raddr(ds,bx+2))));	// 10351 sbb     dx, [bx+2] ;~ 0613:13DA
cs=0x613;eip=0x0013dd; 	X(PUSH(dx));	// 10352 push    dx ;~ 0613:13DD
cs=0x613;eip=0x0013de; 	X(PUSH(ax));	// 10353 push    ax ;~ 0613:13DE
cs=0x613;eip=0x0013df; 	J(CALLF(__aflmul,0));	// 10354 call    __aFlmul ;~ 0613:13DF
cs=0x613;eip=0x0013e4; 	X(PUSH(dx));	// 10355 push    dx ;~ 0613:13E4
cs=0x613;eip=0x0013e5; 	X(PUSH(ax));	// 10356 push    ax ;~ 0613:13E5
cs=0x613;eip=0x0013e6; 	J(CALLF(__afldiv,0));	// 10357 call    __aFldiv ;~ 0613:13E6
cs=0x613;eip=0x0013eb; 	X(MOV(*(dw*)(raddr(ss,bp+vec_c)), ax));	// 10358 mov     [bp+vec_C], ax ;~ 0613:13EB
cs=0x613;eip=0x0013ee; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f4))));	// 10359 mov     ax, [bp+var_F4] ;~ 0613:13EE
cs=0x613;eip=0x0013f2; 	T(CWD);	// 10360 cwd ;~ 0613:13F2
cs=0x613;eip=0x0013f3; 	X(PUSH(dx));	// 10361 push    dx ;~ 0613:13F3
cs=0x613;eip=0x0013f4; 	X(PUSH(ax));	// 10362 push    ax ;~ 0613:13F4
cs=0x613;eip=0x0013f5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f2))));	// 10363 mov     ax, [bp+var_F2] ;~ 0613:13F5
cs=0x613;eip=0x0013f9; 	T(CWD);	// 10364 cwd ;~ 0613:13F9
cs=0x613;eip=0x0013fa; 	X(PUSH(dx));	// 10365 push    dx ;~ 0613:13FA
cs=0x613;eip=0x0013fb; 	X(PUSH(ax));	// 10366 push    ax ;~ 0613:13FB
cs=0x613;eip=0x0013fc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10367 mov     bx, [bp+var_DE] ;~ 0613:13FC
cs=0x613;eip=0x001400; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 10368 mov     ax, [bx+4] ;~ 0613:1400
cs=0x613;eip=0x001403; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 10369 mov     dx, [bx+6] ;~ 0613:1403
cs=0x613;eip=0x001406; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 10370 mov     bx, [bp+var_146] ;~ 0613:1406
cs=0x613;eip=0x00140a; 	T(SUB(ax, *(dw*)(raddr(ds,bx+4))));	// 10371 sub     ax, [bx+4] ;~ 0613:140A
cs=0x613;eip=0x00140d; 	T(SBB(dx, *(dw*)(raddr(ds,bx+6))));	// 10372 sbb     dx, [bx+6] ;~ 0613:140D
cs=0x613;eip=0x001410; 	X(PUSH(dx));	// 10373 push    dx ;~ 0613:1410
cs=0x613;eip=0x001411; 	X(PUSH(ax));	// 10374 push    ax ;~ 0613:1411
cs=0x613;eip=0x001412; 	J(CALLF(__aflmul,0));	// 10375 call    __aFlmul ;~ 0613:1412
cs=0x613;eip=0x001417; 	X(PUSH(dx));	// 10376 push    dx ;~ 0613:1417
cs=0x613;eip=0x001418; 	X(PUSH(ax));	// 10377 push    ax ;~ 0613:1418
cs=0x613;eip=0x001419; 	J(CALLF(__afldiv,0));	// 10378 call    __aFldiv ;~ 0613:1419
cs=0x613;eip=0x00141e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 10379 mov     [bp+var_A], ax ;~ 0613:141E
cs=0x613;eip=0x001421; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f4))));	// 10380 mov     ax, [bp+var_F4] ;~ 0613:1421
cs=0x613;eip=0x001425; 	T(CWD);	// 10381 cwd ;~ 0613:1425
cs=0x613;eip=0x001426; 	X(PUSH(dx));	// 10382 push    dx ;~ 0613:1426
cs=0x613;eip=0x001427; 	X(PUSH(ax));	// 10383 push    ax ;~ 0613:1427
cs=0x613;eip=0x001428; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f2))));	// 10384 mov     ax, [bp+var_F2] ;~ 0613:1428
cs=0x613;eip=0x00142c; 	T(CWD);	// 10385 cwd ;~ 0613:142C
cs=0x613;eip=0x00142d; 	X(PUSH(dx));	// 10386 push    dx ;~ 0613:142D
cs=0x613;eip=0x00142e; 	X(PUSH(ax));	// 10387 push    ax ;~ 0613:142E
cs=0x613;eip=0x00142f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10388 mov     bx, [bp+var_DE] ;~ 0613:142F
cs=0x613;eip=0x001433; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 10389 mov     ax, [bx+8] ;~ 0613:1433
cs=0x613;eip=0x001436; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 10390 mov     dx, [bx+0Ah] ;~ 0613:1436
cs=0x613;eip=0x001439; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 10391 mov     bx, [bp+var_146] ;~ 0613:1439
cs=0x613;eip=0x00143d; 	T(SUB(ax, *(dw*)(raddr(ds,bx+8))));	// 10392 sub     ax, [bx+8] ;~ 0613:143D
cs=0x613;eip=0x001440; 	T(SBB(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 10393 sbb     dx, [bx+0Ah] ;~ 0613:1440
cs=0x613;eip=0x001443; 	X(PUSH(dx));	// 10394 push    dx ;~ 0613:1443
cs=0x613;eip=0x001444; 	X(PUSH(ax));	// 10395 push    ax ;~ 0613:1444
cs=0x613;eip=0x001445; 	J(CALLF(__aflmul,0));	// 10396 call    __aFlmul ;~ 0613:1445
cs=0x613;eip=0x00144a; 	X(PUSH(dx));	// 10397 push    dx ;~ 0613:144A
cs=0x613;eip=0x00144b; 	X(PUSH(ax));	// 10398 push    ax ;~ 0613:144B
cs=0x613;eip=0x00144c; 	J(CALLF(__afldiv,0));	// 10399 call    __aFldiv ;~ 0613:144C
cs=0x613;eip=0x001451; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 10400 mov     [bp+var_8], ax ;~ 0613:1451
cs=0x613;eip=0x001454; 	X(MOV(vec_unk2, 0));	// 10401 mov     vec_unk2, 0 ;~ 0613:1454
cs=0x613;eip=0x00145a; 	X(MOV(word_44f38, 0));	// 10402 mov     word_44F38, 0 ;~ 0613:145A
cs=0x613;eip=0x001460; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ee))));	// 10403 mov     ax, [bp+var_EE] ;~ 0613:1460
cs=0x613;eip=0x001464; 	X(MOV(word_44f3a, ax));	// 10404 mov     word_44F3A, ax ;~ 0613:1464
cs=0x613;eip=0x001467; 	T(MOV(ax, planindex));	// 10405 mov     ax, planindex ;~ 0613:1467
cs=0x613;eip=0x00146a; 	X(MOV(planindex_copy, ax));	// 10406 mov     planindex_copy, ax ;~ 0613:146A
cs=0x613;eip=0x00146d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+di+var_140))));	// 10407 mov     ax, [bp+di+var_140] ;~ 0613:146D
cs=0x613;eip=0x001471; 	X(MOV(pstate_f36mminf40sar2, ax));	// 10408 mov     pState_f36Mminf40sar2, ax ;~ 0613:1471
cs=0x613;eip=0x001474; 	X(PUSH(cs));	// 10409 push    cs ;~ 0613:1474
cs=0x613;eip=0x001475; 	J(CALL(plane_rotate_op,0));	// 10410 call    near ptr plane_rotate_op ;~ 0613:1475
cs=0x613;eip=0x001478; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 10411 mov     bx, [bp+var_146] ;~ 0613:1478
cs=0x613;eip=0x00147c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 10412 mov     ax, [bx+0] ;~ 0613:147C
cs=0x613;eip=0x00147e; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 10413 mov     dx, [bx+2] ;~ 0613:147E
cs=0x613;eip=0x001481; 	T(MOV(cx, ax));	// 10414 mov     cx, ax ;~ 0613:1481
cs=0x613;eip=0x001483; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vec_c))));	// 10415 mov     ax, [bp+vec_C] ;~ 0613:1483
cs=0x613;eip=0x001486; 	T(MOV(bx, dx));	// 10416 mov     bx, dx ;~ 0613:1486
cs=0x613;eip=0x001488; 	T(CWD);	// 10417 cwd ;~ 0613:1488
cs=0x613;eip=0x001489; 	T(ADD(cx, ax));	// 10418 add     cx, ax ;~ 0613:1489
cs=0x613;eip=0x00148b; 	T(ADC(bx, dx));	// 10419 adc     bx, dx ;~ 0613:148B
cs=0x613;eip=0x00148d; 	T(MOV(ax, vec_planerotopresult));	// 10420 mov     ax, vec_planerotopresult ;~ 0613:148D
cs=0x613;eip=0x001490; 	T(CWD);	// 10421 cwd ;~ 0613:1490
cs=0x613;eip=0x001491; 	T(ADD(cx, ax));	// 10422 add     cx, ax ;~ 0613:1491
cs=0x613;eip=0x001493; 	T(ADC(bx, dx));	// 10423 adc     bx, dx ;~ 0613:1493
cs=0x613;eip=0x001495; 	T(MOV(ax, bx));	// 10424 mov     ax, bx ;~ 0613:1495
cs=0x613;eip=0x001497; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10425 mov     bx, [bp+var_DE] ;~ 0613:1497
cs=0x613;eip=0x00149b; 	X(MOV(*(dw*)(raddr(ds,bx+0)), cx));	// 10426 mov     [bx+0], cx ;~ 0613:149B
cs=0x613;eip=0x00149d; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 10427 mov     [bx+2], ax ;~ 0613:149D
cs=0x613;eip=0x0014a0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 10428 mov     bx, [bp+var_146] ;~ 0613:14A0
cs=0x613;eip=0x0014a4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 10429 mov     ax, [bx+4] ;~ 0613:14A4
cs=0x613;eip=0x0014a7; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 10430 mov     dx, [bx+6] ;~ 0613:14A7
cs=0x613;eip=0x0014aa; 	T(MOV(cx, ax));	// 10431 mov     cx, ax ;~ 0613:14AA
cs=0x613;eip=0x0014ac; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 10432 mov     ax, [bp+var_A] ;~ 0613:14AC
cs=0x613;eip=0x0014af; 	T(MOV(bx, dx));	// 10433 mov     bx, dx ;~ 0613:14AF
cs=0x613;eip=0x0014b1; 	T(CWD);	// 10434 cwd ;~ 0613:14B1
cs=0x613;eip=0x0014b2; 	T(ADD(cx, ax));	// 10435 add     cx, ax ;~ 0613:14B2
cs=0x613;eip=0x0014b4; 	T(ADC(bx, dx));	// 10436 adc     bx, dx ;~ 0613:14B4
cs=0x613;eip=0x0014b6; 	T(MOV(ax, word_44f3e));	// 10437 mov     ax, word_44F3E ;~ 0613:14B6
cs=0x613;eip=0x0014b9; 	T(CWD);	// 10438 cwd ;~ 0613:14B9
cs=0x613;eip=0x0014ba; 	T(ADD(cx, ax));	// 10439 add     cx, ax ;~ 0613:14BA
cs=0x613;eip=0x0014bc; 	T(ADC(bx, dx));	// 10440 adc     bx, dx ;~ 0613:14BC
cs=0x613;eip=0x0014be; 	T(MOV(ax, bx));	// 10441 mov     ax, bx ;~ 0613:14BE
cs=0x613;eip=0x0014c0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10442 mov     bx, [bp+var_DE] ;~ 0613:14C0
cs=0x613;eip=0x0014c4; 	X(MOV(*(dw*)(raddr(ds,bx+4)), cx));	// 10443 mov     [bx+4], cx ;~ 0613:14C4
cs=0x613;eip=0x0014c7; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 10444 mov     [bx+6], ax ;~ 0613:14C7
cs=0x613;eip=0x0014ca; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 10445 mov     bx, [bp+var_146] ;~ 0613:14CA
cs=0x613;eip=0x0014ce; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 10446 mov     ax, [bx+8] ;~ 0613:14CE
cs=0x613;eip=0x0014d1; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 10447 mov     dx, [bx+0Ah] ;~ 0613:14D1
cs=0x613;eip=0x0014d4; 	T(MOV(cx, ax));	// 10448 mov     cx, ax ;~ 0613:14D4
cs=0x613;eip=0x0014d6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 10449 mov     ax, [bp+var_8] ;~ 0613:14D6
cs=0x613;eip=0x0014d9; 	T(MOV(bx, dx));	// 10450 mov     bx, dx ;~ 0613:14D9
cs=0x613;eip=0x0014db; 	T(CWD);	// 10451 cwd ;~ 0613:14DB
cs=0x613;eip=0x0014dc; 	T(ADD(cx, ax));	// 10452 add     cx, ax ;~ 0613:14DC
cs=0x613;eip=0x0014de; 	T(ADC(bx, dx));	// 10453 adc     bx, dx ;~ 0613:14DE
cs=0x613;eip=0x0014e0; 	T(MOV(ax, word_44f40));	// 10454 mov     ax, word_44F40 ;~ 0613:14E0
cs=0x613;eip=0x0014e3; 	T(CWD);	// 10455 cwd ;~ 0613:14E3
cs=0x613;eip=0x0014e4; 	T(ADD(cx, ax));	// 10456 add     cx, ax ;~ 0613:14E4
cs=0x613;eip=0x0014e6; 	T(ADC(bx, dx));	// 10457 adc     bx, dx ;~ 0613:14E6
cs=0x613;eip=0x0014e8; 	T(MOV(ax, bx));	// 10458 mov     ax, bx ;~ 0613:14E8
cs=0x613;eip=0x0014ea; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10459 mov     bx, [bp+var_DE] ;~ 0613:14EA
cs=0x613;eip=0x0014ee; 	X(MOV(*(dw*)(raddr(ds,bx+8)), cx));	// 10460 mov     [bx+8], cx ;~ 0613:14EE
cs=0x613;eip=0x0014f1; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), ax));	// 10461 mov     [bx+0Ah], ax ;~ 0613:14F1
loc_15c04:
	// 4921 
cs=0x613;eip=0x0014f4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10464 mov     bx, [bp+var_DE] ;~ 0613:14F4
cs=0x613;eip=0x0014f8; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 10465 mov     ax, [bx+0] ;~ 0613:14F8
cs=0x613;eip=0x0014fa; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 10466 mov     dx, [bx+2] ;~ 0613:14FA
cs=0x613;eip=0x0014fd; 	T(MOV(cl, 6));	// 10467 mov     cl, 6 ;~ 0613:14FD
loc_15c0f:
	// 4922 
cs=0x613;eip=0x0014ff; 	T(SAR(dx, 1));	// 10470 sar     dx, 1 ;~ 0613:14FF
cs=0x613;eip=0x001501; 	T(RCR(ax, 1));	// 10471 rcr     ax, 1 ;~ 0613:1501
cs=0x613;eip=0x001503; 	T(DEC(cl));	// 10472 dec     cl ;~ 0613:1503
cs=0x613;eip=0x001505; 	J(JNZ(loc_15c0f));	// 10473 jnz     short loc_15C0F ;~ 0613:1505
cs=0x613;eip=0x001507; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1c6)), ax));	// 10474 mov     [bp+vec_1C6], ax ;~ 0613:1507
cs=0x613;eip=0x00150b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10475 mov     bx, [bp+var_DE] ;~ 0613:150B
cs=0x613;eip=0x00150f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 10476 mov     ax, [bx+4] ;~ 0613:150F
cs=0x613;eip=0x001512; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 10477 mov     dx, [bx+6] ;~ 0613:1512
cs=0x613;eip=0x001515; 	T(MOV(cl, 6));	// 10478 mov     cl, 6 ;~ 0613:1515
loc_15c27:
	// 4923 
cs=0x613;eip=0x001517; 	T(SAR(dx, 1));	// 10481 sar     dx, 1 ;~ 0613:1517
cs=0x613;eip=0x001519; 	T(RCR(ax, 1));	// 10482 rcr     ax, 1 ;~ 0613:1519
cs=0x613;eip=0x00151b; 	T(DEC(cl));	// 10483 dec     cl ;~ 0613:151B
cs=0x613;eip=0x00151d; 	J(JNZ(loc_15c27));	// 10484 jnz     short loc_15C27 ;~ 0613:151D
cs=0x613;eip=0x00151f; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 10485 mov     [bp+var_1C4], ax ;~ 0613:151F
cs=0x613;eip=0x001523; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10486 mov     bx, [bp+var_DE] ;~ 0613:1523
cs=0x613;eip=0x001527; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 10487 mov     ax, [bx+8] ;~ 0613:1527
cs=0x613;eip=0x00152a; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 10488 mov     dx, [bx+0Ah] ;~ 0613:152A
cs=0x613;eip=0x00152d; 	T(MOV(cl, 6));	// 10489 mov     cl, 6 ;~ 0613:152D
loc_15c3f:
	// 4924 
cs=0x613;eip=0x00152f; 	T(SAR(dx, 1));	// 10492 sar     dx, 1 ;~ 0613:152F
cs=0x613;eip=0x001531; 	T(RCR(ax, 1));	// 10493 rcr     ax, 1 ;~ 0613:1531
cs=0x613;eip=0x001533; 	T(DEC(cl));	// 10494 dec     cl ;~ 0613:1533
cs=0x613;eip=0x001535; 	J(JNZ(loc_15c3f));	// 10495 jnz     short loc_15C3F ;~ 0613:1535
cs=0x613;eip=0x001537; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 10496 mov     [bp+var_1C2], ax ;~ 0613:1537
cs=0x613;eip=0x00153b; 	X(PUSH(ax));	// 10497 push    ax ;~ 0613:153B
cs=0x613;eip=0x00153c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c4))));	// 10498 push    [bp+var_1C4] ;~ 0613:153C
cs=0x613;eip=0x001540; 	X(PUSH(*(dw*)(raddr(ss,bp+vec_1c6))));	// 10499 push    [bp+vec_1C6] ;~ 0613:1540
cs=0x613;eip=0x001544; 	X(PUSH(planindex));	// 10500 push    planindex ;~ 0613:1544
cs=0x613;eip=0x001548; 	X(PUSH(cs));	// 10501 push    cs ;~ 0613:1548
cs=0x613;eip=0x001549; 	J(CALL(plane_origin_op,0));	// 10502 call    near ptr plane_origin_op ;~ 0613:1549
cs=0x613;eip=0x00154c; 	T(ADD(sp, 8));	// 10503 add     sp, 8 ;~ 0613:154C
cs=0x613;eip=0x00154f; 	X(MOV(nextposandnormalip, ax));	// 10504 mov     nextPosAndNormalIP, ax ;~ 0613:154F
cs=0x613;eip=0x001552; 	T(OR(ax, ax));	// 10505 or      ax, ax ;~ 0613:1552
cs=0x613;eip=0x001554; 	J(JGE(loc_15cdf));	// 10506 jge     short loc_15CDF ;~ 0613:1554
cs=0x613;eip=0x001556; 	T(CMP(*(raddr(ss,bp+var_136)), 0));	// 10507 cmp     [bp+var_136], 0 ;~ 0613:1556
cs=0x613;eip=0x00155b; 	J(JZ(loc_15c75));	// 10508 jz      short loc_15C75 ;~ 0613:155B
cs=0x613;eip=0x00155d; 	T(NEG(ax));	// 10509 neg     ax ;~ 0613:155D
cs=0x613;eip=0x00155f; 	T(ADD(ax, 6));	// 10510 add     ax, 6 ;~ 0613:155F
cs=0x613;eip=0x001562; 	X(MOV(nextposandnormalip, ax));	// 10511 mov     nextPosAndNormalIP, ax ;~ 0613:1562
loc_15c75:
	// 4925 
cs=0x613;eip=0x001565; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), 0));	// 10514 mov     [bp+var_1C2], 0 ;~ 0613:1565
cs=0x613;eip=0x00156b; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1c6)), 0));	// 10515 mov     [bp+vec_1C6], 0 ;~ 0613:156B
cs=0x613;eip=0x001571; 	T(MOV(ax, nextposandnormalip));	// 10516 mov     ax, nextPosAndNormalIP ;~ 0613:1571
cs=0x613;eip=0x001574; 	T(NEG(ax));	// 10517 neg     ax ;~ 0613:1574
cs=0x613;eip=0x001576; 	T(MOV(cl, 6));	// 10518 mov     cl, 6 ;~ 0613:1576
cs=0x613;eip=0x001578; 	T(SHL(ax, cl));	// 10519 shl     ax, cl ;~ 0613:1578
cs=0x613;eip=0x00157a; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 10520 mov     [bp+var_1C4], ax ;~ 0613:157A
cs=0x613;eip=0x00157e; 	T(ax = bp+vec_fc);	// 10521 lea     ax, [bp+vec_FC] ;~ 0613:157E
cs=0x613;eip=0x001582; 	X(PUSH(ax));	// 10522 push    ax ;~ 0613:1582
cs=0x613;eip=0x001583; 	T(MOV(ax, 0x22));	// 10523 mov     ax, 22h ; '"' ;~ 0613:1583
cs=0x613;eip=0x001586; 	X(IMUL1_2(planindex));	// 10524 imul    planindex ;~ 0613:1586
cs=0x613;eip=0x00158a; 	T(ADD(ax, planptr));	// 10525 add     ax, planptr ;~ 0613:158A
cs=0x613;eip=0x00158e; 	T(MOV(dx, word_454c4));	// 10526 mov     dx, word_454C4 ;~ 0613:158E
cs=0x613;eip=0x001592; 	T(ADD(ax, 0x10));	// 10527 add     ax, 10h ;~ 0613:1592
cs=0x613;eip=0x001595; 	X(PUSH(dx));	// 10528 push    dx ;~ 0613:1595
cs=0x613;eip=0x001596; 	X(PUSH(ax));	// 10529 push    ax ;~ 0613:1596
cs=0x613;eip=0x001597; 	T(ax = bp+vec_1c6);	// 10530 lea     ax, [bp+vec_1C6] ;~ 0613:1597
cs=0x613;eip=0x00159b; 	X(PUSH(ax));	// 10531 push    ax ;~ 0613:159B
cs=0x613;eip=0x00159c; 	X(PUSH(cs));	// 10532 push    cs ;~ 0613:159C
cs=0x613;eip=0x00159d; 	J(CALL(mat_mul_vector2,0));	// 10533 call    near ptr mat_mul_vector2 ;~ 0613:159D
cs=0x613;eip=0x0015a0; 	T(ADD(sp, 8));	// 10534 add     sp, 8 ;~ 0613:15A0
cs=0x613;eip=0x0015a3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vec_fc))));	// 10535 mov     ax, [bp+vec_FC] ;~ 0613:15A3
cs=0x613;eip=0x0015a7; 	T(CWD);	// 10536 cwd ;~ 0613:15A7
cs=0x613;eip=0x0015a8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10537 mov     bx, [bp+var_DE] ;~ 0613:15A8
cs=0x613;eip=0x0015ac; 	X(ADD(*(dw*)(raddr(ds,bx+0)), ax));	// 10538 add     [bx+0], ax ;~ 0613:15AC
cs=0x613;eip=0x0015ae; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 10539 adc     [bx+2], dx ;~ 0613:15AE
cs=0x613;eip=0x0015b1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_fa))));	// 10540 mov     ax, [bp+var_FA] ;~ 0613:15B1
cs=0x613;eip=0x0015b5; 	T(CWD);	// 10541 cwd ;~ 0613:15B5
cs=0x613;eip=0x0015b6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10542 mov     bx, [bp+var_DE] ;~ 0613:15B6
cs=0x613;eip=0x0015ba; 	X(ADD(*(dw*)(raddr(ds,bx+4)), ax));	// 10543 add     [bx+4], ax ;~ 0613:15BA
cs=0x613;eip=0x0015bd; 	X(ADC(*(dw*)(raddr(ds,bx+6)), dx));	// 10544 adc     [bx+6], dx ;~ 0613:15BD
cs=0x613;eip=0x0015c0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f8))));	// 10545 mov     ax, [bp+var_F8] ;~ 0613:15C0
cs=0x613;eip=0x0015c4; 	T(CWD);	// 10546 cwd ;~ 0613:15C4
cs=0x613;eip=0x0015c5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10547 mov     bx, [bp+var_DE] ;~ 0613:15C5
cs=0x613;eip=0x0015c9; 	X(ADD(*(dw*)(raddr(ds,bx+8)), ax));	// 10548 add     [bx+8], ax ;~ 0613:15C9
cs=0x613;eip=0x0015cc; 	X(ADC(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 10549 adc     [bx+0Ah], dx ;~ 0613:15CC
loc_15cdf:
	// 4926 
cs=0x613;eip=0x0015cf; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10553 mov     al, [bp+var_E8] ;~ 0613:15CF
cs=0x613;eip=0x0015d3; 	T(CBW);	// 10554 cbw ;~ 0613:15D3
cs=0x613;eip=0x0015d4; 	T(MOV(di, ax));	// 10555 mov     di, ax ;~ 0613:15D4
cs=0x613;eip=0x0015d6; 	T(SHL(di, 1));	// 10556 shl     di, 1 ;~ 0613:15D6
loc_15ce8:
	// 4927 
cs=0x613;eip=0x0015d8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 10559 mov     bx, [bp+arg_0] ;~ 0613:15D8
cs=0x613;eip=0x0015db; 	T(CMP(*(dw*)(raddr(ds,bx+di+0x4C)), 0x0FA));	// 10560 cmp     word ptr [bx+di+4Ch], 0FAh ; 'ú' ;~ 0613:15DB
cs=0x613;eip=0x0015e0; 	J(JLE(loc_15cf7));	// 10561 jle     short loc_15CF7 ;~ 0613:15E0
cs=0x613;eip=0x0015e2; 	X(OR(*(raddr(ds,bx+0x0CF)), 0x20));	// 10562 or      byte ptr [bx+0CFh], 20h ;~ 0613:15E2
loc_15cf7:
	// 4928 
cs=0x613;eip=0x0015e7; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10565 mov     al, [bp+var_E8] ;~ 0613:15E7
cs=0x613;eip=0x0015eb; 	T(CBW);	// 10566 cbw ;~ 0613:15EB
cs=0x613;eip=0x0015ec; 	T(MOV(di, ax));	// 10567 mov     di, ax ;~ 0613:15EC
cs=0x613;eip=0x0015ee; 	T(SHL(di, 1));	// 10568 shl     di, 1 ;~ 0613:15EE
cs=0x613;eip=0x0015f0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 10569 mov     bx, [bp+arg_0] ;~ 0613:15F0
cs=0x613;eip=0x0015f3; 	T(CMP(*(dw*)(raddr(ds,bx+di+0x4C)), 0x5AEB));	// 10570 cmp     word ptr [bx+di+4Ch], 5AEBh ;~ 0613:15F3
cs=0x613;eip=0x0015f8; 	J(JLE(loc_15d1a));	// 10571 jle     short loc_15D1A ;~ 0613:15F8
cs=0x613;eip=0x0015fa; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 10572 mov     al, [bp+arg_8] ;~ 0613:15FA
cs=0x613;eip=0x0015fd; 	T(CBW);	// 10573 cbw ;~ 0613:15FD
cs=0x613;eip=0x0015fe; 	X(PUSH(ax));	// 10574 push    ax ;~ 0613:15FE
cs=0x613;eip=0x0015ff; 	T(MOV(ax, 1));	// 10575 mov     ax, 1 ;~ 0613:15FF
cs=0x613;eip=0x001602; 	X(PUSH(ax));	// 10576 push    ax ;~ 0613:1602
cs=0x613;eip=0x001603; 	X(PUSH(cs));	// 10577 push    cs ;~ 0613:1603
cs=0x613;eip=0x001604; 	J(CALL(update_crash_state,0));	// 10578 call    near ptr update_crash_state ;~ 0613:1604
cs=0x613;eip=0x001607; 	T(ADD(sp, 4));	// 10579 add     sp, 4 ;~ 0613:1607
loc_15d1a:
	// 4929 
cs=0x613;eip=0x00160a; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10582 mov     al, [bp+var_E8] ;~ 0613:160A
cs=0x613;eip=0x00160e; 	T(CBW);	// 10583 cbw ;~ 0613:160E
cs=0x613;eip=0x00160f; 	T(MOV(di, ax));	// 10584 mov     di, ax ;~ 0613:160F
cs=0x613;eip=0x001611; 	T(SHL(di, 1));	// 10585 shl     di, 1 ;~ 0613:1611
cs=0x613;eip=0x001613; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 10586 mov     bx, [bp+arg_0] ;~ 0613:1613
cs=0x613;eip=0x001616; 	X(MOV(*(dw*)(raddr(ds,bx+di+0x4C)), 0));	// 10587 mov     word ptr [bx+di+4Ch], 0 ;~ 0613:1616
loc_15d2b:
	// 4930 
cs=0x613;eip=0x00161b; 	X(ADD(*(dw*)(raddr(ss,bp+var_de)), 0x0C));	// 10590 add     [bp+var_DE], 0Ch ;~ 0613:161B
cs=0x613;eip=0x001620; 	X(ADD(*(dw*)(raddr(ss,bp+var_146)), 0x0C));	// 10591 add     [bp+var_146], 0Ch ;~ 0613:1620
cs=0x613;eip=0x001625; 	X(INC(*(raddr(ss,bp+var_e8))));	// 10592 inc     [bp+var_E8] ;~ 0613:1625
loc_15d39:
	// 4931 
cs=0x613;eip=0x001629; 	T(CMP(*(raddr(ss,bp+var_e8)), 4));	// 10595 cmp     [bp+var_E8], 4 ;~ 0613:1629
cs=0x613;eip=0x00162e; 	J(JL(loc_15d43));	// 10596 jl      short loc_15D43 ;~ 0613:162E
cs=0x613;eip=0x001630; 	J(JMP(loc_15163));	// 10597 jmp     loc_15163 ;~ 0613:1630
loc_15d43:
	// 4932 
cs=0x613;eip=0x001633; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10601 mov     bx, [bp+var_DE] ;~ 0613:1633
cs=0x613;eip=0x001637; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 10602 mov     ax, [bx+0] ;~ 0613:1637
cs=0x613;eip=0x001639; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 10603 mov     dx, [bx+2] ;~ 0613:1639
cs=0x613;eip=0x00163c; 	T(MOV(cl, 6));	// 10604 mov     cl, 6 ;~ 0613:163C
loc_15d4e:
	// 4933 
cs=0x613;eip=0x00163e; 	T(SAR(dx, 1));	// 10607 sar     dx, 1 ;~ 0613:163E
cs=0x613;eip=0x001640; 	T(RCR(ax, 1));	// 10608 rcr     ax, 1 ;~ 0613:1640
cs=0x613;eip=0x001642; 	T(DEC(cl));	// 10609 dec     cl ;~ 0613:1642
cs=0x613;eip=0x001644; 	J(JNZ(loc_15d4e));	// 10610 jnz     short loc_15D4E ;~ 0613:1644
cs=0x613;eip=0x001646; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1c6)), ax));	// 10611 mov     [bp+vec_1C6], ax ;~ 0613:1646
cs=0x613;eip=0x00164a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10612 mov     bx, [bp+var_DE] ;~ 0613:164A
cs=0x613;eip=0x00164e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 10613 mov     ax, [bx+4] ;~ 0613:164E
cs=0x613;eip=0x001651; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 10614 mov     dx, [bx+6] ;~ 0613:1651
cs=0x613;eip=0x001654; 	T(MOV(cl, 6));	// 10615 mov     cl, 6 ;~ 0613:1654
loc_15d66:
	// 4934 
cs=0x613;eip=0x001656; 	T(SAR(dx, 1));	// 10618 sar     dx, 1 ;~ 0613:1656
cs=0x613;eip=0x001658; 	T(RCR(ax, 1));	// 10619 rcr     ax, 1 ;~ 0613:1658
cs=0x613;eip=0x00165a; 	T(DEC(cl));	// 10620 dec     cl ;~ 0613:165A
cs=0x613;eip=0x00165c; 	J(JNZ(loc_15d66));	// 10621 jnz     short loc_15D66 ;~ 0613:165C
cs=0x613;eip=0x00165e; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 10622 mov     [bp+var_1C4], ax ;~ 0613:165E
cs=0x613;eip=0x001662; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10623 mov     bx, [bp+var_DE] ;~ 0613:1662
cs=0x613;eip=0x001666; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 10624 mov     ax, [bx+8] ;~ 0613:1666
cs=0x613;eip=0x001669; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 10625 mov     dx, [bx+0Ah] ;~ 0613:1669
cs=0x613;eip=0x00166c; 	T(MOV(cl, 6));	// 10626 mov     cl, 6 ;~ 0613:166C
loc_15d7e:
	// 4935 
cs=0x613;eip=0x00166e; 	T(SAR(dx, 1));	// 10629 sar     dx, 1 ;~ 0613:166E
cs=0x613;eip=0x001670; 	T(RCR(ax, 1));	// 10630 rcr     ax, 1 ;~ 0613:1670
cs=0x613;eip=0x001672; 	T(DEC(cl));	// 10631 dec     cl ;~ 0613:1672
cs=0x613;eip=0x001674; 	J(JNZ(loc_15d7e));	// 10632 jnz     short loc_15D7E ;~ 0613:1674
cs=0x613;eip=0x001676; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 10633 mov     [bp+var_1C2], ax ;~ 0613:1676
cs=0x613;eip=0x00167a; 	T(CMP(byte_44889, 2));	// 10634 cmp     byte_44889, 2 ;~ 0613:167A
cs=0x613;eip=0x00167f; 	J(JZ(loc_15d94));	// 10635 jz      short loc_15D94 ;~ 0613:167F
cs=0x613;eip=0x001681; 	J(JMP(loc_151ba));	// 10636 jmp     loc_151BA ;~ 0613:1681
loc_15d94:
	// 4936 
cs=0x613;eip=0x001684; 	X(MOV(wallindex, 0x0FFFF));	// 10640 mov     wallindex, 0FFFFh ;~ 0613:1684
cs=0x613;eip=0x00168a; 	X(MOV(current_surf_type, tarmac));	// 10641 mov     current_surf_type, tarmac ;~ 0613:168A
cs=0x613;eip=0x00168f; 	X(MOV(planindex, 0));	// 10642 mov     planindex, 0 ;~ 0613:168F
cs=0x613;eip=0x001695; 	T(MOV(ax, planptr));	// 10643 mov     ax, planptr ;~ 0613:1695
cs=0x613;eip=0x001698; 	T(MOV(dx, word_454c4));	// 10644 mov     dx, word_454C4 ;~ 0613:1698
cs=0x613;eip=0x00169c; 	X(MOV(current_planptr, ax));	// 10645 mov     current_planptr, ax ;~ 0613:169C
cs=0x613;eip=0x00169f; 	X(MOV(word_44d66, dx));	// 10646 mov     word_44D66, dx ;~ 0613:169F
cs=0x613;eip=0x0016a3; 	J(JMP(loc_151db));	// 10647 jmp     loc_151DB ;~ 0613:16A3
loc_15db6:
	// 4937 
cs=0x613;eip=0x0016a6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ee))));	// 10651 mov     ax, [bp+var_EE] ;~ 0613:16A6
cs=0x613;eip=0x0016aa; 	T(ADD(ax, 0x180));	// 10652 add     ax, 180h ;~ 0613:16AA
cs=0x613;eip=0x0016ad; 	T(CWD);	// 10653 cwd ;~ 0613:16AD
cs=0x613;eip=0x0016ae; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10654 mov     bx, [bp+var_DE] ;~ 0613:16AE
cs=0x613;eip=0x0016b2; 	X(ADD(*(dw*)(raddr(ds,bx+4)), ax));	// 10655 add     [bx+4], ax ;~ 0613:16B2
cs=0x613;eip=0x0016b5; 	X(ADC(*(dw*)(raddr(ds,bx+6)), dx));	// 10656 adc     [bx+6], dx ;~ 0613:16B5
loc_15dc8:
	// 4938 
cs=0x613;eip=0x0016b8; 	X(ADD(*(dw*)(raddr(ss,bp+var_de)), 0x0C));	// 10659 add     [bp+var_DE], 0Ch ;~ 0613:16B8
cs=0x613;eip=0x0016bd; 	X(INC(*(raddr(ss,bp+var_e8))));	// 10660 inc     [bp+var_E8] ;~ 0613:16BD
loc_15dd1:
	// 4939 
cs=0x613;eip=0x0016c1; 	T(CMP(*(raddr(ss,bp+var_e8)), 4));	// 10663 cmp     [bp+var_E8], 4 ;~ 0613:16C1
cs=0x613;eip=0x0016c6; 	J(JL(loc_15ddb));	// 10664 jl      short loc_15DDB ;~ 0613:16C6
cs=0x613;eip=0x0016c8; 	J(JMP(code_update_globalpos));	// 10665 jmp     code_update_globalPos ;~ 0613:16C8
loc_15ddb:
	// 4940 
cs=0x613;eip=0x0016cb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10669 mov     bx, [bp+var_DE] ;~ 0613:16CB
cs=0x613;eip=0x0016cf; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 10670 mov     ax, [bx+0] ;~ 0613:16CF
cs=0x613;eip=0x0016d1; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 10671 mov     dx, [bx+2] ;~ 0613:16D1
cs=0x613;eip=0x0016d4; 	T(MOV(cl, 6));	// 10672 mov     cl, 6 ;~ 0613:16D4
loc_15de6:
	// 4941 
cs=0x613;eip=0x0016d6; 	T(SAR(dx, 1));	// 10675 sar     dx, 1 ;~ 0613:16D6
cs=0x613;eip=0x0016d8; 	T(RCR(ax, 1));	// 10676 rcr     ax, 1 ;~ 0613:16D8
cs=0x613;eip=0x0016da; 	T(DEC(cl));	// 10677 dec     cl ;~ 0613:16DA
cs=0x613;eip=0x0016dc; 	J(JNZ(loc_15de6));	// 10678 jnz     short loc_15DE6 ;~ 0613:16DC
cs=0x613;eip=0x0016de; 	T(MOV(cx, ax));	// 10679 mov     cx, ax ;~ 0613:16DE
cs=0x613;eip=0x0016e0; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10680 mov     al, [bp+var_E8] ;~ 0613:16E0
cs=0x613;eip=0x0016e4; 	T(CBW);	// 10681 cbw ;~ 0613:16E4
cs=0x613;eip=0x0016e5; 	T(MOV(bx, ax));	// 10682 mov     bx, ax ;~ 0613:16E5
cs=0x613;eip=0x0016e7; 	T(SHL(bx, 1));	// 10683 shl     bx, 1 ;~ 0613:16E7
cs=0x613;eip=0x0016e9; 	T(ADD(bx, ax));	// 10684 add     bx, ax ;~ 0613:16E9
cs=0x613;eip=0x0016eb; 	T(SHL(bx, 1));	// 10685 shl     bx, 1 ;~ 0613:16EB
cs=0x613;eip=0x0016ed; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 10686 add     bx, [bp+arg_0] ;~ 0613:16ED
cs=0x613;eip=0x0016f0; 	X(MOV(*(dw*)(raddr(ds,bx+0x74)), cx));	// 10687 mov     [bx+74h], cx ;~ 0613:16F0
cs=0x613;eip=0x0016f3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10688 mov     bx, [bp+var_DE] ;~ 0613:16F3
cs=0x613;eip=0x0016f7; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 10689 mov     ax, [bx+4] ;~ 0613:16F7
cs=0x613;eip=0x0016fa; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 10690 mov     dx, [bx+6] ;~ 0613:16FA
cs=0x613;eip=0x0016fd; 	T(MOV(cl, 6));	// 10691 mov     cl, 6 ;~ 0613:16FD
loc_15e0f:
	// 4942 
cs=0x613;eip=0x0016ff; 	T(SAR(dx, 1));	// 10694 sar     dx, 1 ;~ 0613:16FF
cs=0x613;eip=0x001701; 	T(RCR(ax, 1));	// 10695 rcr     ax, 1 ;~ 0613:1701
cs=0x613;eip=0x001703; 	T(DEC(cl));	// 10696 dec     cl ;~ 0613:1703
cs=0x613;eip=0x001705; 	J(JNZ(loc_15e0f));	// 10697 jnz     short loc_15E0F ;~ 0613:1705
cs=0x613;eip=0x001707; 	T(MOV(cx, ax));	// 10698 mov     cx, ax ;~ 0613:1707
cs=0x613;eip=0x001709; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10699 mov     al, [bp+var_E8] ;~ 0613:1709
cs=0x613;eip=0x00170d; 	T(CBW);	// 10700 cbw ;~ 0613:170D
cs=0x613;eip=0x00170e; 	T(MOV(bx, ax));	// 10701 mov     bx, ax ;~ 0613:170E
cs=0x613;eip=0x001710; 	T(SHL(bx, 1));	// 10702 shl     bx, 1 ;~ 0613:1710
cs=0x613;eip=0x001712; 	T(ADD(bx, ax));	// 10703 add     bx, ax ;~ 0613:1712
cs=0x613;eip=0x001714; 	T(SHL(bx, 1));	// 10704 shl     bx, 1 ;~ 0613:1714
cs=0x613;eip=0x001716; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 10705 add     bx, [bp+arg_0] ;~ 0613:1716
cs=0x613;eip=0x001719; 	X(MOV(*(dw*)(raddr(ds,bx+0x76)), cx));	// 10706 mov     [bx+76h], cx ;~ 0613:1719
cs=0x613;eip=0x00171c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10707 mov     bx, [bp+var_DE] ;~ 0613:171C
cs=0x613;eip=0x001720; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 10708 mov     ax, [bx+8] ;~ 0613:1720
cs=0x613;eip=0x001723; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 10709 mov     dx, [bx+0Ah] ;~ 0613:1723
cs=0x613;eip=0x001726; 	T(MOV(cl, 6));	// 10710 mov     cl, 6 ;~ 0613:1726
loc_15e38:
	// 4943 
cs=0x613;eip=0x001728; 	T(SAR(dx, 1));	// 10713 sar     dx, 1 ;~ 0613:1728
cs=0x613;eip=0x00172a; 	T(RCR(ax, 1));	// 10714 rcr     ax, 1 ;~ 0613:172A
cs=0x613;eip=0x00172c; 	T(DEC(cl));	// 10715 dec     cl ;~ 0613:172C
cs=0x613;eip=0x00172e; 	J(JNZ(loc_15e38));	// 10716 jnz     short loc_15E38 ;~ 0613:172E
cs=0x613;eip=0x001730; 	T(MOV(cx, ax));	// 10717 mov     cx, ax ;~ 0613:1730
cs=0x613;eip=0x001732; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10718 mov     al, [bp+var_E8] ;~ 0613:1732
cs=0x613;eip=0x001736; 	T(CBW);	// 10719 cbw ;~ 0613:1736
cs=0x613;eip=0x001737; 	T(MOV(bx, ax));	// 10720 mov     bx, ax ;~ 0613:1737
cs=0x613;eip=0x001739; 	T(SHL(bx, 1));	// 10721 shl     bx, 1 ;~ 0613:1739
cs=0x613;eip=0x00173b; 	T(ADD(bx, ax));	// 10722 add     bx, ax ;~ 0613:173B
cs=0x613;eip=0x00173d; 	T(SHL(bx, 1));	// 10723 shl     bx, 1 ;~ 0613:173D
cs=0x613;eip=0x00173f; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 10724 add     bx, [bp+arg_0] ;~ 0613:173F
cs=0x613;eip=0x001742; 	X(MOV(*(dw*)(raddr(ds,bx+0x78)), cx));	// 10725 mov     [bx+78h], cx ;~ 0613:1742
cs=0x613;eip=0x001745; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10726 mov     al, [bp+var_E8] ;~ 0613:1745
cs=0x613;eip=0x001749; 	T(CBW);	// 10727 cbw ;~ 0613:1749
cs=0x613;eip=0x00174a; 	T(MOV(di, ax));	// 10728 mov     di, ax ;~ 0613:174A
cs=0x613;eip=0x00174c; 	X(PUSH(di));	// 10729 push    di ;~ 0613:174C
cs=0x613;eip=0x00174d; 	T(MOV(bx, di));	// 10730 mov     bx, di ;~ 0613:174D
cs=0x613;eip=0x00174f; 	T(SHL(bx, 1));	// 10731 shl     bx, 1 ;~ 0613:174F
cs=0x613;eip=0x001751; 	T(ADD(bx, bp));	// 10732 add     bx, bp ;~ 0613:1751
cs=0x613;eip=0x001753; 	X(PUSH(*(dw*)(raddr(ds,bx-0x16))));	// 10733 push    word ptr [bx-16h] ; var_(16-2*wheelIndex) ;~ 0613:1753
cs=0x613;eip=0x001756; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 10734 push    [bp+arg_0] ;~ 0613:1756
cs=0x613;eip=0x001759; 	X(PUSH(cs));	// 10735 push    cs ;~ 0613:1759
cs=0x613;eip=0x00175a; 	J(CALL(carstate_rc_op,0));	// 10736 call    near ptr carState_rc_op ;~ 0613:175A
cs=0x613;eip=0x00175d; 	T(ADD(sp, 6));	// 10737 add     sp, 6 ;~ 0613:175D
cs=0x613;eip=0x001760; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), ax));	// 10738 mov     [bp+var_EE], ax ;~ 0613:1760
cs=0x613;eip=0x001764; 	T(CMP(pstate_minusrotate_z_1, 0));	// 10739 cmp     pState_minusRotate_z_1, 0 ;~ 0613:1764
cs=0x613;eip=0x001769; 	J(JNZ(loc_15e85));	// 10740 jnz     short loc_15E85 ;~ 0613:1769
cs=0x613;eip=0x00176b; 	T(CMP(pstate_minusrotate_x_1, 0));	// 10741 cmp     pState_minusRotate_x_1, 0 ;~ 0613:176B
cs=0x613;eip=0x001770; 	J(JNZ(loc_15e85));	// 10742 jnz     short loc_15E85 ;~ 0613:1770
cs=0x613;eip=0x001772; 	J(JMP(loc_15db6));	// 10743 jmp     loc_15DB6 ;~ 0613:1772
loc_15e85:
	// 4944 
cs=0x613;eip=0x001775; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), 0));	// 10748 mov     [bp+var_1C2], 0 ;~ 0613:1775
cs=0x613;eip=0x00177b; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1c6)), 0));	// 10749 mov     [bp+vec_1C6], 0 ;~ 0613:177B
cs=0x613;eip=0x001781; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ee))));	// 10750 mov     ax, [bp+var_EE] ;~ 0613:1781
cs=0x613;eip=0x001785; 	T(ADD(ax, 0x180));	// 10751 add     ax, 180h ;~ 0613:1785
cs=0x613;eip=0x001788; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 10752 mov     [bp+var_1C4], ax ;~ 0613:1788
cs=0x613;eip=0x00178c; 	T(ax = bp+vec_182);	// 10753 lea     ax, [bp+vec_182] ;~ 0613:178C
cs=0x613;eip=0x001790; 	X(PUSH(ax));	// 10754 push    ax ;~ 0613:1790
cs=0x613;eip=0x001791; 	T(MOV(ax, offset(dseg,mat_unk)));	// 10755 mov     ax, offset mat_unk ;~ 0613:1791
cs=0x613;eip=0x001794; 	X(PUSH(ax));	// 10756 push    ax ;~ 0613:1794
cs=0x613;eip=0x001795; 	T(ax = bp+vec_1c6);	// 10757 lea     ax, [bp+vec_1C6] ;~ 0613:1795
cs=0x613;eip=0x001799; 	X(PUSH(ax));	// 10758 push    ax ;~ 0613:1799
cs=0x613;eip=0x00179a; 	J(CALLF(mat_mul_vector,0));	// 10759 call    mat_mul_vector ;~ 0613:179A
cs=0x613;eip=0x00179f; 	T(ADD(sp, 6));	// 10760 add     sp, 6 ;~ 0613:179F
cs=0x613;eip=0x0017a2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vec_182))));	// 10761 mov     ax, [bp+vec_182] ;~ 0613:17A2
cs=0x613;eip=0x0017a6; 	T(CWD);	// 10762 cwd ;~ 0613:17A6
cs=0x613;eip=0x0017a7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10763 mov     bx, [bp+var_DE] ;~ 0613:17A7
cs=0x613;eip=0x0017ab; 	X(ADD(*(dw*)(raddr(ds,bx+0)), ax));	// 10764 add     [bx+0], ax ;~ 0613:17AB
cs=0x613;eip=0x0017ad; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 10765 adc     [bx+2], dx ;~ 0613:17AD
cs=0x613;eip=0x0017b0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_180))));	// 10766 mov     ax, [bp+var_180] ;~ 0613:17B0
cs=0x613;eip=0x0017b4; 	T(CWD);	// 10767 cwd ;~ 0613:17B4
cs=0x613;eip=0x0017b5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10768 mov     bx, [bp+var_DE] ;~ 0613:17B5
cs=0x613;eip=0x0017b9; 	X(ADD(*(dw*)(raddr(ds,bx+4)), ax));	// 10769 add     [bx+4], ax ;~ 0613:17B9
cs=0x613;eip=0x0017bc; 	X(ADC(*(dw*)(raddr(ds,bx+6)), dx));	// 10770 adc     [bx+6], dx ;~ 0613:17BC
cs=0x613;eip=0x0017bf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_17e))));	// 10771 mov     ax, [bp+var_17E] ;~ 0613:17BF
cs=0x613;eip=0x0017c3; 	T(CWD);	// 10772 cwd ;~ 0613:17C3
cs=0x613;eip=0x0017c4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10773 mov     bx, [bp+var_DE] ;~ 0613:17C4
cs=0x613;eip=0x0017c8; 	X(ADD(*(dw*)(raddr(ds,bx+8)), ax));	// 10774 add     [bx+8], ax ;~ 0613:17C8
cs=0x613;eip=0x0017cb; 	X(ADC(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 10775 adc     [bx+0Ah], dx ;~ 0613:17CB
cs=0x613;eip=0x0017ce; 	J(JMP(loc_15dc8));	// 10776 jmp     loc_15DC8 ;~ 0613:17CE
code_update_globalpos:
	// 4945 
cs=0x613;eip=0x0017d2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vecl_1c0))));	// 10781 mov     ax, [bp+vecl_1C0] ;~ 0613:17D2
cs=0x613;eip=0x0017d6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_1be))));	// 10782 mov     dx, [bp+var_1BE] ;~ 0613:17D6
cs=0x613;eip=0x0017da; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1b4))));	// 10783 add     ax, [bp+var_1B4] ;~ 0613:17DA
cs=0x613;eip=0x0017de; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_1b2))));	// 10784 adc     dx, [bp+var_1B2] ;~ 0613:17DE
cs=0x613;eip=0x0017e2; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1a8))));	// 10785 add     ax, [bp+var_1A8] ;~ 0613:17E2
cs=0x613;eip=0x0017e6; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_1a6))));	// 10786 adc     dx, [bp+var_1A6] ;~ 0613:17E6
cs=0x613;eip=0x0017ea; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_19c))));	// 10787 add     ax, [bp+var_19C] ;~ 0613:17EA
cs=0x613;eip=0x0017ee; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_19a))));	// 10788 adc     dx, [bp+var_19A] ;~ 0613:17EE
cs=0x613;eip=0x0017f2; 	T(MOV(cl, 2));	// 10789 mov     cl, 2 ;~ 0613:17F2
loc_15f04:
	// 4946 
cs=0x613;eip=0x0017f4; 	T(SAR(dx, 1));	// 10792 sar     dx, 1 ;~ 0613:17F4
cs=0x613;eip=0x0017f6; 	T(RCR(ax, 1));	// 10793 rcr     ax, 1 ;~ 0613:17F6
cs=0x613;eip=0x0017f8; 	T(DEC(cl));	// 10794 dec     cl ;~ 0613:17F8
cs=0x613;eip=0x0017fa; 	J(JNZ(loc_15f04));	// 10795 jnz     short loc_15F04 ;~ 0613:17FA
cs=0x613;eip=0x0017fc; 	X(MOV(pstate_lvec1_x, ax));	// 10796 mov     pState_lvec1_x, ax ;~ 0613:17FC
cs=0x613;eip=0x0017ff; 	X(MOV(word_449c0, dx));	// 10797 mov     word_449C0, dx ;~ 0613:17FF
cs=0x613;eip=0x001803; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1bc))));	// 10798 mov     ax, [bp+var_1BC] ;~ 0613:1803
cs=0x613;eip=0x001807; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_1ba))));	// 10799 mov     dx, [bp+var_1BA] ;~ 0613:1807
cs=0x613;eip=0x00180b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1b0))));	// 10800 add     ax, [bp+var_1B0] ;~ 0613:180B
cs=0x613;eip=0x00180f; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_1ae))));	// 10801 adc     dx, [bp+var_1AE] ;~ 0613:180F
cs=0x613;eip=0x001813; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1a4))));	// 10802 add     ax, [bp+var_1A4] ;~ 0613:1813
cs=0x613;eip=0x001817; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_1a2))));	// 10803 adc     dx, [bp+var_1A2] ;~ 0613:1817
cs=0x613;eip=0x00181b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_198))));	// 10804 add     ax, [bp+var_198] ;~ 0613:181B
cs=0x613;eip=0x00181f; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_196))));	// 10805 adc     dx, [bp+var_196] ;~ 0613:181F
cs=0x613;eip=0x001823; 	T(MOV(cl, 2));	// 10806 mov     cl, 2 ;~ 0613:1823
loc_15f35:
	// 4947 
cs=0x613;eip=0x001825; 	T(SAR(dx, 1));	// 10809 sar     dx, 1 ;~ 0613:1825
cs=0x613;eip=0x001827; 	T(RCR(ax, 1));	// 10810 rcr     ax, 1 ;~ 0613:1827
cs=0x613;eip=0x001829; 	T(DEC(cl));	// 10811 dec     cl ;~ 0613:1829
cs=0x613;eip=0x00182b; 	J(JNZ(loc_15f35));	// 10812 jnz     short loc_15F35 ;~ 0613:182B
cs=0x613;eip=0x00182d; 	X(MOV(pstate_lvec1_y, ax));	// 10813 mov     pState_lvec1_y, ax ;~ 0613:182D
cs=0x613;eip=0x001830; 	X(MOV(word_449c8, dx));	// 10814 mov     word_449C8, dx ;~ 0613:1830
cs=0x613;eip=0x001834; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1b8))));	// 10815 mov     ax, [bp+var_1B8] ;~ 0613:1834
cs=0x613;eip=0x001838; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_1b6))));	// 10816 mov     dx, [bp+var_1B6] ;~ 0613:1838
cs=0x613;eip=0x00183c; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1ac))));	// 10817 add     ax, [bp+var_1AC] ;~ 0613:183C
cs=0x613;eip=0x001840; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_1aa))));	// 10818 adc     dx, [bp+var_1AA] ;~ 0613:1840
cs=0x613;eip=0x001844; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1a0))));	// 10819 add     ax, [bp+var_1A0] ;~ 0613:1844
cs=0x613;eip=0x001848; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_19e))));	// 10820 adc     dx, [bp+var_19E] ;~ 0613:1848
cs=0x613;eip=0x00184c; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_194))));	// 10821 add     ax, [bp+var_194] ;~ 0613:184C
cs=0x613;eip=0x001850; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_192))));	// 10822 adc     dx, [bp+var_192] ;~ 0613:1850
cs=0x613;eip=0x001854; 	T(MOV(cl, 2));	// 10823 mov     cl, 2 ;~ 0613:1854
loc_15f66:
	// 4948 
cs=0x613;eip=0x001856; 	T(SAR(dx, 1));	// 10826 sar     dx, 1 ;~ 0613:1856
cs=0x613;eip=0x001858; 	T(RCR(ax, 1));	// 10827 rcr     ax, 1 ;~ 0613:1858
cs=0x613;eip=0x00185a; 	T(DEC(cl));	// 10828 dec     cl ;~ 0613:185A
cs=0x613;eip=0x00185c; 	J(JNZ(loc_15f66));	// 10829 jnz     short loc_15F66 ;~ 0613:185C
cs=0x613;eip=0x00185e; 	X(MOV(pstate_lvec1_z, ax));	// 10830 mov     pState_lvec1_z, ax ;~ 0613:185E
cs=0x613;eip=0x001861; 	X(MOV(word_449cc, dx));	// 10831 mov     word_449CC, dx ;~ 0613:1861
cs=0x613;eip=0x001865; 	T(ax = bp+vecl_1c0);	// 10832 lea     ax, [bp+vecl_1C0] ;~ 0613:1865
cs=0x613;eip=0x001869; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), ax));	// 10833 mov     [bp+var_DE], ax ;~ 0613:1869
cs=0x613;eip=0x00186d; 	X(MOV(*(raddr(ss,bp+var_e8)), 0));	// 10834 mov     [bp+var_E8], 0 ;~ 0613:186D
code_update_rotcoords:
	// 4949 
cs=0x613;eip=0x001872; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10837 mov     al, [bp+var_E8] ;~ 0613:1872
cs=0x613;eip=0x001876; 	T(CBW);	// 10838 cbw ;~ 0613:1876
cs=0x613;eip=0x001877; 	T(MOV(cx, ax));	// 10839 mov     cx, ax ;~ 0613:1877
cs=0x613;eip=0x001879; 	T(SHL(ax, 1));	// 10840 shl     ax, 1 ;~ 0613:1879
cs=0x613;eip=0x00187b; 	T(ADD(ax, cx));	// 10841 add     ax, cx ;~ 0613:187B
cs=0x613;eip=0x00187d; 	T(SHL(ax, 1));	// 10842 shl     ax, 1 ;~ 0613:187D
cs=0x613;eip=0x00187f; 	T(MOV(di, ax));	// 10843 mov     di, ax ;~ 0613:187F
cs=0x613;eip=0x001881; 	T(ADD(di, bp));	// 10844 add     di, bp ;~ 0613:1881
cs=0x613;eip=0x001883; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10845 mov     bx, [bp+var_DE] ;~ 0613:1883
cs=0x613;eip=0x001887; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 10846 mov     ax, [bx+0] ;~ 0613:1887
cs=0x613;eip=0x001889; 	T(SUB(ax, pstate_lvec1_x));	// 10847 sub     ax, pState_lvec1_x ;~ 0613:1889
cs=0x613;eip=0x00188d; 	X(MOV(*(dw*)(raddr(ds,di-0x1DE)), ax));	// 10848 mov     [di-1DEh], ax ;~ 0613:188D
cs=0x613;eip=0x001891; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10849 mov     bx, [bp+var_DE] ;~ 0613:1891
cs=0x613;eip=0x001895; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 10850 mov     ax, [bx+4] ;~ 0613:1895
cs=0x613;eip=0x001898; 	T(SUB(ax, pstate_lvec1_y));	// 10851 sub     ax, pState_lvec1_y ;~ 0613:1898
cs=0x613;eip=0x00189c; 	X(MOV(*(dw*)(raddr(ds,di-0x1DC)), ax));	// 10852 mov     [di-1DCh], ax ;~ 0613:189C
cs=0x613;eip=0x0018a0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10853 mov     bx, [bp+var_DE] ;~ 0613:18A0
cs=0x613;eip=0x0018a4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 10854 mov     ax, [bx+8] ;~ 0613:18A4
cs=0x613;eip=0x0018a7; 	T(SUB(ax, pstate_lvec1_z));	// 10855 sub     ax, pState_lvec1_z ;~ 0613:18A7
cs=0x613;eip=0x0018ab; 	X(MOV(*(dw*)(raddr(ds,di-0x1DA)), ax));	// 10856 mov     [di-1DAh], ax ;~ 0613:18AB
cs=0x613;eip=0x0018af; 	X(ADD(*(dw*)(raddr(ss,bp+var_de)), 0x0C));	// 10857 add     [bp+var_DE], 0Ch ;~ 0613:18AF
cs=0x613;eip=0x0018b4; 	X(INC(*(raddr(ss,bp+var_e8))));	// 10858 inc     [bp+var_E8] ;~ 0613:18B4
cs=0x613;eip=0x0018b8; 	T(CMP(*(raddr(ss,bp+var_e8)), 4));	// 10859 cmp     [bp+var_E8], 4 ;~ 0613:18B8
cs=0x613;eip=0x0018bd; 	J(JL(code_update_rotcoords));	// 10860 jl      short code_update_rotCoords ;~ 0613:18BD
cs=0x613;eip=0x0018bf; 	T(CMP(word_449c8, 0));	// 10861 cmp     word_449C8, 0 ;~ 0613:18BF
cs=0x613;eip=0x0018c4; 	J(JGE(loc_15fde));	// 10862 jge     short loc_15FDE ;~ 0613:18C4
cs=0x613;eip=0x0018c6; 	T(SUB(ax, ax));	// 10863 sub     ax, ax ;~ 0613:18C6
cs=0x613;eip=0x0018c8; 	X(MOV(word_449c8, ax));	// 10864 mov     word_449C8, ax ;~ 0613:18C8
cs=0x613;eip=0x0018cb; 	X(MOV(pstate_lvec1_y, ax));	// 10865 mov     pState_lvec1_y, ax ;~ 0613:18CB
loc_15fde:
	// 4950 
cs=0x613;eip=0x0018ce; 	T(CMP(word_449c0, 0x1D));	// 10868 cmp     word_449C0, 1Dh ;~ 0613:18CE
cs=0x613;eip=0x0018d3; 	J(JL(loc_15ffe));	// 10869 jl      short loc_15FFE ;~ 0613:18D3
cs=0x613;eip=0x0018d5; 	J(JG(loc_15fef));	// 10870 jg      short loc_15FEF ;~ 0613:18D5
cs=0x613;eip=0x0018d7; 	T(CMP(pstate_lvec1_x, 0x0F100));	// 10871 cmp     pState_lvec1_x, 0F100h ;~ 0613:18D7
cs=0x613;eip=0x0018dd; 	J(JBE(loc_15ffe));	// 10872 jbe     short loc_15FFE ;~ 0613:18DD
loc_15fef:
	// 4951 
cs=0x613;eip=0x0018df; 	X(MOV(pstate_lvec1_x, 0x0F0FF));	// 10875 mov     pState_lvec1_x, 0F0FFh ;~ 0613:18DF
cs=0x613;eip=0x0018e5; 	X(MOV(word_449c0, 0x1D));	// 10876 mov     word_449C0, 1Dh ;~ 0613:18E5
cs=0x613;eip=0x0018eb; 	J(JMP(loc_1601b));	// 10877 jmp     short loc_1601B ;~ 0613:18EB
loc_15ffe:
	// 4952 
cs=0x613;eip=0x0018ee; 	T(CMP(word_449c0, 0));	// 10883 cmp     word_449C0, 0 ;~ 0613:18EE
cs=0x613;eip=0x0018f3; 	J(JG(loc_1601b));	// 10884 jg      short loc_1601B ;~ 0613:18F3
cs=0x613;eip=0x0018f5; 	J(JL(loc_1600f));	// 10885 jl      short loc_1600F ;~ 0613:18F5
cs=0x613;eip=0x0018f7; 	T(CMP(pstate_lvec1_x, 0x0F00));	// 10886 cmp     pState_lvec1_x, 0F00h ;~ 0613:18F7
cs=0x613;eip=0x0018fd; 	J(JNC(loc_1601b));	// 10887 jnb     short loc_1601B ;~ 0613:18FD
loc_1600f:
	// 4953 
cs=0x613;eip=0x0018ff; 	X(MOV(pstate_lvec1_x, 0x0F00));	// 10890 mov     pState_lvec1_x, 0F00h ;~ 0613:18FF
cs=0x613;eip=0x001905; 	X(MOV(word_449c0, 0));	// 10891 mov     word_449C0, 0 ;~ 0613:1905
loc_1601b:
	// 4954 
cs=0x613;eip=0x00190b; 	T(CMP(word_449cc, 0x1D));	// 10895 cmp     word_449CC, 1Dh ;~ 0613:190B
cs=0x613;eip=0x001910; 	J(JL(loc_1603a));	// 10896 jl      short loc_1603A ;~ 0613:1910
cs=0x613;eip=0x001912; 	J(JG(loc_1602c));	// 10897 jg      short loc_1602C ;~ 0613:1912
cs=0x613;eip=0x001914; 	T(CMP(pstate_lvec1_z, 0x0F100));	// 10898 cmp     pState_lvec1_z, 0F100h ;~ 0613:1914
cs=0x613;eip=0x00191a; 	J(JBE(loc_1603a));	// 10899 jbe     short loc_1603A ;~ 0613:191A
loc_1602c:
	// 4955 
cs=0x613;eip=0x00191c; 	X(MOV(pstate_lvec1_z, 0x0F0FF));	// 10902 mov     pState_lvec1_z, 0F0FFh ;~ 0613:191C
cs=0x613;eip=0x001922; 	X(MOV(word_449cc, 0x1D));	// 10903 mov     word_449CC, 1Dh ;~ 0613:1922
cs=0x613;eip=0x001928; 	J(JMP(loc_16057));	// 10904 jmp     short loc_16057 ;~ 0613:1928
loc_1603a:
	// 4956 
cs=0x613;eip=0x00192a; 	T(CMP(word_449cc, 0));	// 10909 cmp     word_449CC, 0 ;~ 0613:192A
cs=0x613;eip=0x00192f; 	J(JG(loc_16057));	// 10910 jg      short loc_16057 ;~ 0613:192F
cs=0x613;eip=0x001931; 	J(JL(loc_1604b));	// 10911 jl      short loc_1604B ;~ 0613:1931
cs=0x613;eip=0x001933; 	T(CMP(pstate_lvec1_z, 0x0F00));	// 10912 cmp     pState_lvec1_z, 0F00h ;~ 0613:1933
cs=0x613;eip=0x001939; 	J(JNC(loc_16057));	// 10913 jnb     short loc_16057 ;~ 0613:1939
loc_1604b:
	// 4957 
cs=0x613;eip=0x00193b; 	X(MOV(pstate_lvec1_z, 0x0F00));	// 10916 mov     pState_lvec1_z, 0F00h ;~ 0613:193B
cs=0x613;eip=0x001941; 	X(MOV(word_449cc, 0));	// 10917 mov     word_449CC, 0 ;~ 0613:1941
loc_16057:
	// 4958 
cs=0x613;eip=0x001947; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1cc))));	// 10921 mov     ax, [bp+var_1CC] ;~ 0613:1947
cs=0x613;eip=0x00194b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1d2))));	// 10922 add     ax, [bp+var_1D2] ;~ 0613:194B
cs=0x613;eip=0x00194f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+vec_1de))));	// 10923 sub     ax, [bp+vec_1DE] ;~ 0613:194F
cs=0x613;eip=0x001953; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1d8))));	// 10924 sub     ax, [bp+var_1D8] ;~ 0613:1953
cs=0x613;eip=0x001957; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), ax));	// 10925 mov     [bp+var_EE], ax ;~ 0613:1957
cs=0x613;eip=0x00195b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c8))));	// 10926 mov     ax, [bp+var_1C8] ;~ 0613:195B
cs=0x613;eip=0x00195f; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1ce))));	// 10927 add     ax, [bp+var_1CE] ;~ 0613:195F
cs=0x613;eip=0x001963; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1da))));	// 10928 sub     ax, [bp+var_1DA] ;~ 0613:1963
cs=0x613;eip=0x001967; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1d4))));	// 10929 sub     ax, [bp+var_1D4] ;~ 0613:1967
cs=0x613;eip=0x00196b; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), ax));	// 10930 mov     [bp+var_F2], ax ;~ 0613:196B
cs=0x613;eip=0x00196f; 	T(NEG(ax));	// 10931 neg     ax ;~ 0613:196F
cs=0x613;eip=0x001971; 	X(PUSH(ax));	// 10932 push    ax ;~ 0613:1971
cs=0x613;eip=0x001972; 	X(PUSH(*(dw*)(raddr(ss,bp+var_ee))));	// 10933 push    [bp+var_EE] ;~ 0613:1972
cs=0x613;eip=0x001976; 	J(CALLF(polarangle,0));	// 10934 call    polarAngle ;~ 0613:1976
cs=0x613;eip=0x00197b; 	T(ADD(sp, 4));	// 10935 add     sp, 4 ;~ 0613:197B
cs=0x613;eip=0x00197e; 	T(AND(ah, 3));	// 10936 and     ah, 3 ;~ 0613:197E
cs=0x613;eip=0x001981; 	X(MOV(pstate_minusrotate_y_1, ax));	// 10937 mov     pState_minusRotate_y_1, ax ;~ 0613:1981
cs=0x613;eip=0x001984; 	X(PUSH(ax));	// 10938 push    ax ;~ 0613:1984
cs=0x613;eip=0x001985; 	T(ax = bp+var_10e);	// 10939 lea     ax, [bp+var_10E] ;~ 0613:1985
cs=0x613;eip=0x001989; 	X(PUSH(ax));	// 10940 push    ax ;~ 0613:1989
cs=0x613;eip=0x00198a; 	J(CALLF(mat_rot_y,0));	// 10941 call    mat_rot_y ;~ 0613:198A
cs=0x613;eip=0x00198f; 	T(ADD(sp, 4));	// 10942 add     sp, 4 ;~ 0613:198F
cs=0x613;eip=0x001992; 	X(MOV(*(raddr(ss,bp+var_e8)), 0));	// 10943 mov     [bp+var_E8], 0 ;~ 0613:1992
loc_160a7:
	// 4959 
cs=0x613;eip=0x001997; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10946 mov     al, [bp+var_E8] ;~ 0613:1997
cs=0x613;eip=0x00199b; 	T(CBW);	// 10947 cbw ;~ 0613:199B
cs=0x613;eip=0x00199c; 	T(MOV(cx, ax));	// 10948 mov     cx, ax ;~ 0613:199C
cs=0x613;eip=0x00199e; 	T(SHL(ax, 1));	// 10949 shl     ax, 1 ;~ 0613:199E
cs=0x613;eip=0x0019a0; 	T(ADD(ax, cx));	// 10950 add     ax, cx ;~ 0613:19A0
cs=0x613;eip=0x0019a2; 	T(SHL(ax, 1));	// 10951 shl     ax, 1 ;~ 0613:19A2
cs=0x613;eip=0x0019a4; 	T(MOV(di, ax));	// 10952 mov     di, ax ;~ 0613:19A4
cs=0x613;eip=0x0019a6; 	T(ADD(di, bp));	// 10953 add     di, bp ;~ 0613:19A6
cs=0x613;eip=0x0019a8; 	T(SUB(di, 0x1DE));	// 10954 sub     di, 1DEh ;~ 0613:19A8
cs=0x613;eip=0x0019ac; 	X(PUSH(si));	// 10955 push    si ;~ 0613:19AC
cs=0x613;eip=0x0019ad; 	X(PUSH(di));	// 10956 push    di ;~ 0613:19AD
cs=0x613;eip=0x0019ae; 	T(MOV(si, di));	// 10957 mov     si, di ;~ 0613:19AE
cs=0x613;eip=0x0019b0; 	T(di = bp+vec_fc);	// 10958 lea     di, [bp+vec_FC] ;~ 0613:19B0
cs=0x613;eip=0x0019b4; 	X(PUSH(ss));	// 10959 push    ss ;~ 0613:19B4
cs=0x613;eip=0x0019b5; 	X(POP(es));	// 10960 pop     es ;~ 0613:19B5
cs=0x613;eip=0x0019b6; 	X(MOVSW);	// 10961 movsw ;~ 0613:19B6
cs=0x613;eip=0x0019b7; 	X(MOVSW);	// 10962 movsw ;~ 0613:19B7
cs=0x613;eip=0x0019b8; 	X(MOVSW);	// 10963 movsw ;~ 0613:19B8
cs=0x613;eip=0x0019b9; 	X(POP(di));	// 10964 pop     di ;~ 0613:19B9
cs=0x613;eip=0x0019ba; 	X(POP(si));	// 10965 pop     si ;~ 0613:19BA
cs=0x613;eip=0x0019bb; 	X(PUSH(di));	// 10966 push    di ;~ 0613:19BB
cs=0x613;eip=0x0019bc; 	T(ax = bp+var_10e);	// 10967 lea     ax, [bp+var_10E] ;~ 0613:19BC
cs=0x613;eip=0x0019c0; 	X(PUSH(ax));	// 10968 push    ax ;~ 0613:19C0
cs=0x613;eip=0x0019c1; 	T(ax = bp+vec_fc);	// 10969 lea     ax, [bp+vec_FC] ;~ 0613:19C1
cs=0x613;eip=0x0019c5; 	X(PUSH(ax));	// 10970 push    ax ;~ 0613:19C5
cs=0x613;eip=0x0019c6; 	J(CALLF(mat_mul_vector,0));	// 10971 call    mat_mul_vector ;~ 0613:19C6
cs=0x613;eip=0x0019cb; 	T(ADD(sp, 6));	// 10972 add     sp, 6 ;~ 0613:19CB
cs=0x613;eip=0x0019ce; 	X(INC(*(raddr(ss,bp+var_e8))));	// 10973 inc     [bp+var_E8] ;~ 0613:19CE
cs=0x613;eip=0x0019d2; 	T(CMP(*(raddr(ss,bp+var_e8)), 4));	// 10974 cmp     [bp+var_E8], 4 ;~ 0613:19D2
cs=0x613;eip=0x0019d7; 	J(JL(loc_160a7));	// 10975 jl      short loc_160A7 ;~ 0613:19D7
cs=0x613;eip=0x0019d9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c8))));	// 10976 mov     ax, [bp+var_1C8] ;~ 0613:19D9
cs=0x613;eip=0x0019dd; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1ce))));	// 10977 add     ax, [bp+var_1CE] ;~ 0613:19DD
cs=0x613;eip=0x0019e1; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1da))));	// 10978 sub     ax, [bp+var_1DA] ;~ 0613:19E1
cs=0x613;eip=0x0019e5; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1d4))));	// 10979 sub     ax, [bp+var_1D4] ;~ 0613:19E5
cs=0x613;eip=0x0019e9; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), ax));	// 10980 mov     [bp+var_F2], ax ;~ 0613:19E9
cs=0x613;eip=0x0019ed; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1ca))));	// 10981 mov     ax, [bp+var_1CA] ;~ 0613:19ED
cs=0x613;eip=0x0019f1; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1d0))));	// 10982 add     ax, [bp+var_1D0] ;~ 0613:19F1
cs=0x613;eip=0x0019f5; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1dc))));	// 10983 sub     ax, [bp+var_1DC] ;~ 0613:19F5
cs=0x613;eip=0x0019f9; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1d6))));	// 10984 sub     ax, [bp+var_1D6] ;~ 0613:19F9
cs=0x613;eip=0x0019fd; 	X(MOV(*(dw*)(raddr(ss,bp+var_f4)), ax));	// 10985 mov     [bp+var_F4], ax ;~ 0613:19FD
cs=0x613;eip=0x001a01; 	T(OR(ax, ax));	// 10986 or      ax, ax ;~ 0613:1A01
cs=0x613;eip=0x001a03; 	J(JNZ(loc_1611c));	// 10987 jnz     short loc_1611C ;~ 0613:1A03
cs=0x613;eip=0x001a05; 	T(CMP(*(dw*)(raddr(ss,bp+var_f2)), 0));	// 10988 cmp     [bp+var_F2], 0 ;~ 0613:1A05
cs=0x613;eip=0x001a0a; 	J(JL(loc_16146));	// 10989 jl      short loc_16146 ;~ 0613:1A0A
loc_1611c:
	// 4960 
cs=0x613;eip=0x001a0c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_f4))));	// 10992 push    [bp+var_F4] ;~ 0613:1A0C
cs=0x613;eip=0x001a10; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f2))));	// 10993 mov     ax, [bp+var_F2] ;~ 0613:1A10
cs=0x613;eip=0x001a14; 	T(NEG(ax));	// 10994 neg     ax ;~ 0613:1A14
cs=0x613;eip=0x001a16; 	X(PUSH(ax));	// 10995 push    ax ;~ 0613:1A16
cs=0x613;eip=0x001a17; 	J(CALLF(polarangle,0));	// 10996 call    polarAngle ;~ 0613:1A17
cs=0x613;eip=0x001a1c; 	T(ADD(sp, 4));	// 10997 add     sp, 4 ;~ 0613:1A1C
cs=0x613;eip=0x001a1f; 	T(SUB(ax, 0x100));	// 10998 sub     ax, 100h ;~ 0613:1A1F
cs=0x613;eip=0x001a22; 	X(MOV(pstate_minusrotate_x_1, ax));	// 10999 mov     pState_minusRotate_x_1, ax ;~ 0613:1A22
cs=0x613;eip=0x001a25; 	T(OR(ax, ax));	// 11000 or      ax, ax ;~ 0613:1A25
cs=0x613;eip=0x001a27; 	J(JGE(loc_1613e));	// 11001 jge     short loc_1613E ;~ 0613:1A27
cs=0x613;eip=0x001a29; 	T(NEG(ax));	// 11002 neg     ax ;~ 0613:1A29
cs=0x613;eip=0x001a2b; 	J(JMP(loc_16141));	// 11003 jmp     short loc_16141 ;~ 0613:1A2B
loc_1613e:
	// 4961 
cs=0x613;eip=0x001a2e; 	T(MOV(ax, pstate_minusrotate_x_1));	// 11008 mov     ax, pState_minusRotate_x_1 ;~ 0613:1A2E
loc_16141:
	// 4962 
cs=0x613;eip=0x001a31; 	T(CMP(ax, 2));	// 11011 cmp     ax, 2 ;~ 0613:1A31
cs=0x613;eip=0x001a34; 	J(JGE(loc_1614c));	// 11012 jge     short loc_1614C ;~ 0613:1A34
loc_16146:
	// 4963 
cs=0x613;eip=0x001a36; 	X(MOV(pstate_minusrotate_x_1, 0));	// 11015 mov     pState_minusRotate_x_1, 0 ;~ 0613:1A36
loc_1614c:
	// 4964 
cs=0x613;eip=0x001a3c; 	T(CMP(pstate_minusrotate_x_1, 0));	// 11018 cmp     pState_minusRotate_x_1, 0 ;~ 0613:1A3C
cs=0x613;eip=0x001a41; 	J(JZ(loc_161ab));	// 11019 jz      short loc_161AB ;~ 0613:1A41
cs=0x613;eip=0x001a43; 	X(PUSH(pstate_minusrotate_x_1));	// 11020 push    pState_minusRotate_x_1 ;~ 0613:1A43
cs=0x613;eip=0x001a47; 	T(ax = bp+var_10e);	// 11021 lea     ax, [bp+var_10E] ;~ 0613:1A47
cs=0x613;eip=0x001a4b; 	X(PUSH(ax));	// 11022 push    ax ;~ 0613:1A4B
cs=0x613;eip=0x001a4c; 	J(CALLF(mat_rot_x,0));	// 11023 call    mat_rot_x ;~ 0613:1A4C
cs=0x613;eip=0x001a51; 	T(ADD(sp, 4));	// 11024 add     sp, 4 ;~ 0613:1A51
cs=0x613;eip=0x001a54; 	X(MOV(*(raddr(ss,bp+var_e8)), 0));	// 11025 mov     [bp+var_E8], 0 ;~ 0613:1A54
loc_16169:
	// 4965 
cs=0x613;eip=0x001a59; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 11028 mov     al, [bp+var_E8] ;~ 0613:1A59
cs=0x613;eip=0x001a5d; 	T(CBW);	// 11029 cbw ;~ 0613:1A5D
cs=0x613;eip=0x001a5e; 	T(MOV(cx, ax));	// 11030 mov     cx, ax ;~ 0613:1A5E
cs=0x613;eip=0x001a60; 	T(SHL(ax, 1));	// 11031 shl     ax, 1 ;~ 0613:1A60
cs=0x613;eip=0x001a62; 	T(ADD(ax, cx));	// 11032 add     ax, cx ;~ 0613:1A62
cs=0x613;eip=0x001a64; 	T(SHL(ax, 1));	// 11033 shl     ax, 1 ;~ 0613:1A64
cs=0x613;eip=0x001a66; 	T(MOV(di, ax));	// 11034 mov     di, ax ;~ 0613:1A66
cs=0x613;eip=0x001a68; 	T(ADD(di, bp));	// 11035 add     di, bp ;~ 0613:1A68
cs=0x613;eip=0x001a6a; 	T(SUB(di, 0x1DE));	// 11036 sub     di, 1DEh ;~ 0613:1A6A
cs=0x613;eip=0x001a6e; 	X(PUSH(si));	// 11037 push    si ;~ 0613:1A6E
cs=0x613;eip=0x001a6f; 	X(PUSH(di));	// 11038 push    di ;~ 0613:1A6F
cs=0x613;eip=0x001a70; 	T(MOV(si, di));	// 11039 mov     si, di ;~ 0613:1A70
cs=0x613;eip=0x001a72; 	T(di = bp+vec_fc);	// 11040 lea     di, [bp+vec_FC] ;~ 0613:1A72
cs=0x613;eip=0x001a76; 	X(PUSH(ss));	// 11041 push    ss ;~ 0613:1A76
cs=0x613;eip=0x001a77; 	X(POP(es));	// 11042 pop     es ;~ 0613:1A77
cs=0x613;eip=0x001a78; 	X(MOVSW);	// 11043 movsw ;~ 0613:1A78
cs=0x613;eip=0x001a79; 	X(MOVSW);	// 11044 movsw ;~ 0613:1A79
cs=0x613;eip=0x001a7a; 	X(MOVSW);	// 11045 movsw ;~ 0613:1A7A
cs=0x613;eip=0x001a7b; 	X(POP(di));	// 11046 pop     di ;~ 0613:1A7B
cs=0x613;eip=0x001a7c; 	X(POP(si));	// 11047 pop     si ;~ 0613:1A7C
cs=0x613;eip=0x001a7d; 	X(PUSH(di));	// 11048 push    di ;~ 0613:1A7D
cs=0x613;eip=0x001a7e; 	T(ax = bp+var_10e);	// 11049 lea     ax, [bp+var_10E] ;~ 0613:1A7E
cs=0x613;eip=0x001a82; 	X(PUSH(ax));	// 11050 push    ax ;~ 0613:1A82
cs=0x613;eip=0x001a83; 	T(ax = bp+vec_fc);	// 11051 lea     ax, [bp+vec_FC] ;~ 0613:1A83
cs=0x613;eip=0x001a87; 	X(PUSH(ax));	// 11052 push    ax ;~ 0613:1A87
cs=0x613;eip=0x001a88; 	J(CALLF(mat_mul_vector,0));	// 11053 call    mat_mul_vector ;~ 0613:1A88
cs=0x613;eip=0x001a8d; 	T(ADD(sp, 6));	// 11054 add     sp, 6 ;~ 0613:1A8D
cs=0x613;eip=0x001a90; 	X(INC(*(raddr(ss,bp+var_e8))));	// 11055 inc     [bp+var_E8] ;~ 0613:1A90
cs=0x613;eip=0x001a94; 	T(CMP(*(raddr(ss,bp+var_e8)), 4));	// 11056 cmp     [bp+var_E8], 4 ;~ 0613:1A94
cs=0x613;eip=0x001a99; 	J(JL(loc_16169));	// 11057 jl      short loc_16169 ;~ 0613:1A99
loc_161ab:
	// 4966 
cs=0x613;eip=0x001a9b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1d8))));	// 11060 mov     ax, [bp+var_1D8] ;~ 0613:1A9B
cs=0x613;eip=0x001a9f; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1d2))));	// 11061 add     ax, [bp+var_1D2] ;~ 0613:1A9F
cs=0x613;eip=0x001aa3; 	T(SUB(ax, *(dw*)(raddr(ss,bp+vec_1de))));	// 11062 sub     ax, [bp+vec_1DE] ;~ 0613:1AA3
cs=0x613;eip=0x001aa7; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1cc))));	// 11063 sub     ax, [bp+var_1CC] ;~ 0613:1AA7
cs=0x613;eip=0x001aab; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), ax));	// 11064 mov     [bp+var_F2], ax ;~ 0613:1AAB
cs=0x613;eip=0x001aaf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1d6))));	// 11065 mov     ax, [bp+var_1D6] ;~ 0613:1AAF
cs=0x613;eip=0x001ab3; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1d0))));	// 11066 add     ax, [bp+var_1D0] ;~ 0613:1AB3
cs=0x613;eip=0x001ab7; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1dc))));	// 11067 sub     ax, [bp+var_1DC] ;~ 0613:1AB7
cs=0x613;eip=0x001abb; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1ca))));	// 11068 sub     ax, [bp+var_1CA] ;~ 0613:1ABB
cs=0x613;eip=0x001abf; 	X(MOV(*(dw*)(raddr(ss,bp+var_f4)), ax));	// 11069 mov     [bp+var_F4], ax ;~ 0613:1ABF
cs=0x613;eip=0x001ac3; 	T(OR(ax, ax));	// 11070 or      ax, ax ;~ 0613:1AC3
cs=0x613;eip=0x001ac5; 	J(JNZ(loc_161de));	// 11071 jnz     short loc_161DE ;~ 0613:1AC5
cs=0x613;eip=0x001ac7; 	T(CMP(*(dw*)(raddr(ss,bp+var_f2)), 0));	// 11072 cmp     [bp+var_F2], 0 ;~ 0613:1AC7
cs=0x613;eip=0x001acc; 	J(JG(loc_16204));	// 11073 jg      short loc_16204 ;~ 0613:1ACC
loc_161de:
	// 4967 
cs=0x613;eip=0x001ace; 	X(PUSH(*(dw*)(raddr(ss,bp+var_f4))));	// 11076 push    [bp+var_F4] ;~ 0613:1ACE
cs=0x613;eip=0x001ad2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_f2))));	// 11077 push    [bp+var_F2] ;~ 0613:1AD2
cs=0x613;eip=0x001ad6; 	J(CALLF(polarangle,0));	// 11078 call    polarAngle ;~ 0613:1AD6
cs=0x613;eip=0x001adb; 	T(ADD(sp, 4));	// 11079 add     sp, 4 ;~ 0613:1ADB
cs=0x613;eip=0x001ade; 	T(SUB(ax, 0x100));	// 11080 sub     ax, 100h ;~ 0613:1ADE
cs=0x613;eip=0x001ae1; 	X(MOV(pstate_minusrotate_z_1, ax));	// 11081 mov     pState_minusRotate_z_1, ax ;~ 0613:1AE1
cs=0x613;eip=0x001ae4; 	T(OR(ax, ax));	// 11082 or      ax, ax ;~ 0613:1AE4
cs=0x613;eip=0x001ae6; 	J(JGE(loc_161fc));	// 11083 jge     short loc_161FC ;~ 0613:1AE6
cs=0x613;eip=0x001ae8; 	T(NEG(ax));	// 11084 neg     ax ;~ 0613:1AE8
cs=0x613;eip=0x001aea; 	J(JMP(loc_161ff));	// 11085 jmp     short loc_161FF ;~ 0613:1AEA
loc_161fc:
	// 4968 
cs=0x613;eip=0x001aec; 	T(MOV(ax, pstate_minusrotate_z_1));	// 11089 mov     ax, pState_minusRotate_z_1 ;~ 0613:1AEC
loc_161ff:
	// 4969 
cs=0x613;eip=0x001aef; 	T(CMP(ax, 2));	// 11092 cmp     ax, 2 ;~ 0613:1AEF
cs=0x613;eip=0x001af2; 	J(JGE(loc_1620a));	// 11093 jge     short loc_1620A ;~ 0613:1AF2
loc_16204:
	// 4970 
cs=0x613;eip=0x001af4; 	X(MOV(pstate_minusrotate_z_1, 0));	// 11096 mov     pState_minusRotate_z_1, 0 ;~ 0613:1AF4
loc_1620a:
	// 4971 
cs=0x613;eip=0x001afa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11099 mov     bx, [bp+arg_0] ;~ 0613:1AFA
cs=0x613;eip=0x001afd; 	T(MOV(di, bx));	// 11100 mov     di, bx ;~ 0613:1AFD
cs=0x613;eip=0x001aff; 	T(MOV(al, *(raddr(ds,di+0x0C2))));	// 11101 mov     al, [di+0C2h] ;~ 0613:1AFF
cs=0x613;eip=0x001b03; 	T(ADD(al, *(raddr(ds,di+0x0C3))));	// 11102 add     al, [di+0C3h] ;~ 0613:1B03
cs=0x613;eip=0x001b07; 	X(MOV(*(raddr(ds,bx+0x0BF)), al));	// 11103 mov     [bx+0BFh], al ;~ 0613:1B07
cs=0x613;eip=0x001b0b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11104 mov     bx, [bp+arg_0] ;~ 0613:1B0B
cs=0x613;eip=0x001b0e; 	T(MOV(di, bx));	// 11105 mov     di, bx ;~ 0613:1B0E
cs=0x613;eip=0x001b10; 	T(MOV(al, *(raddr(ds,di+0x0C4))));	// 11106 mov     al, [di+0C4h] ;~ 0613:1B10
cs=0x613;eip=0x001b14; 	T(ADD(al, *(raddr(ds,di+0x0C5))));	// 11107 add     al, [di+0C5h] ;~ 0613:1B14
cs=0x613;eip=0x001b18; 	X(MOV(*(raddr(ds,bx+0x0C0)), al));	// 11108 mov     [bx+0C0h], al ;~ 0613:1B18
cs=0x613;eip=0x001b1c; 	T(CMP(byte_44889, 2));	// 11109 cmp     byte_44889, 2 ;~ 0613:1B1C
cs=0x613;eip=0x001b21; 	J(JNZ(loc_16236));	// 11110 jnz     short loc_16236 ;~ 0613:1B21
cs=0x613;eip=0x001b23; 	J(JMP(loc_16840));	// 11111 jmp     loc_16840 ;~ 0613:1B23
loc_16236:
	// 4972 
cs=0x613;eip=0x001b26; 	T(CMP(is_in_replay, 0));	// 11115 cmp     is_in_replay, 0 ;~ 0613:1B26
cs=0x613;eip=0x001b2b; 	J(JNZ(loc_1625f));	// 11116 jnz     short loc_1625F ;~ 0613:1B2B
cs=0x613;eip=0x001b2d; 	T(CMP(*(raddr(ss,bp+arg_8)), 0));	// 11117 cmp     [bp+arg_8], 0 ;~ 0613:1B2D
cs=0x613;eip=0x001b31; 	J(JZ(loc_1624a));	// 11118 jz      short loc_1624A ;~ 0613:1B31
cs=0x613;eip=0x001b33; 	X(PUSH(word_4408c));	// 11119 push    word_4408C ;~ 0613:1B33
cs=0x613;eip=0x001b37; 	J(JMP(loc_1624e));	// 11120 jmp     short loc_1624E ;~ 0613:1B37
loc_1624a:
	// 4973 
cs=0x613;eip=0x001b3a; 	X(PUSH(word_43964));	// 11125 push    word_43964 ;~ 0613:1B3A
loc_1624e:
	// 4974 
cs=0x613;eip=0x001b3e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11128 mov     bx, [bp+arg_0] ;~ 0613:1B3E
cs=0x613;eip=0x001b41; 	T(MOV(al, *(raddr(ds,bx+0x0CF))));	// 11129 mov     al, [bx+0CFh] ;~ 0613:1B41
cs=0x613;eip=0x001b45; 	T(SUB(ah, ah));	// 11130 sub     ah, ah ;~ 0613:1B45
cs=0x613;eip=0x001b47; 	X(PUSH(ax));	// 11131 push    ax ;~ 0613:1B47
cs=0x613;eip=0x001b48; 	X(PUSH(cs));	// 11132 push    cs ;~ 0613:1B48
cs=0x613;eip=0x001b49; 	J(CALL(audio_unk3,0));	// 11133 call    near ptr audio_unk3 ;~ 0613:1B49
cs=0x613;eip=0x001b4c; 	T(ADD(sp, 4));	// 11134 add     sp, 4 ;~ 0613:1B4C
loc_1625f:
	// 4975 
cs=0x613;eip=0x001b4f; 	T(SUB(ax, ax));	// 11137 sub     ax, ax ;~ 0613:1B4F
cs=0x613;eip=0x001b51; 	X(PUSH(ax));	// 11138 push    ax ;~ 0613:1B51
cs=0x613;eip=0x001b52; 	T(MOV(ax, pstate_minusrotate_y_1));	// 11139 mov     ax, pState_minusRotate_y_1 ;~ 0613:1B52
cs=0x613;eip=0x001b55; 	T(NEG(ax));	// 11140 neg     ax ;~ 0613:1B55
cs=0x613;eip=0x001b57; 	X(PUSH(ax));	// 11141 push    ax ;~ 0613:1B57
cs=0x613;eip=0x001b58; 	T(MOV(ax, pstate_minusrotate_x_1));	// 11142 mov     ax, pState_minusRotate_x_1 ;~ 0613:1B58
cs=0x613;eip=0x001b5b; 	T(NEG(ax));	// 11143 neg     ax ;~ 0613:1B5B
cs=0x613;eip=0x001b5d; 	X(PUSH(ax));	// 11144 push    ax ;~ 0613:1B5D
cs=0x613;eip=0x001b5e; 	T(MOV(ax, pstate_minusrotate_z_1));	// 11145 mov     ax, pState_minusRotate_z_1 ;~ 0613:1B5E
cs=0x613;eip=0x001b61; 	T(NEG(ax));	// 11146 neg     ax ;~ 0613:1B61
cs=0x613;eip=0x001b63; 	X(PUSH(ax));	// 11147 push    ax ;~ 0613:1B63
cs=0x613;eip=0x001b64; 	J(CALLF(mat_rot_zxy,0));	// 11148 call    mat_rot_zxy ;~ 0613:1B64
cs=0x613;eip=0x001b69; 	T(ADD(sp, 8));	// 11149 add     sp, 8 ;~ 0613:1B69
cs=0x613;eip=0x001b6c; 	X(MOV(*(dw*)(raddr(ss,bp+var_ea)), ax));	// 11150 mov     [bp+var_EA], ax ;~ 0613:1B6C
cs=0x613;eip=0x001b70; 	X(MOV(*(raddr(ss,bp+var_e8)), 0));	// 11151 mov     [bp+var_E8], 0 ;~ 0613:1B70
cs=0x613;eip=0x001b75; 	J(JMP(loc_1632c));	// 11152 jmp     loc_1632C ;~ 0613:1B75
loc_16288:
	// 4976 
cs=0x613;eip=0x001b78; 	T(MOV(ax, planindex));	// 11156 mov     ax, planindex ;~ 0613:1B78
cs=0x613;eip=0x001b7b; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 11157 mov     [bp+var_E], ax ;~ 0613:1B7B
cs=0x613;eip=0x001b7e; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 11158 mov     al, [bp+var_E8] ;~ 0613:1B7E
cs=0x613;eip=0x001b82; 	T(CBW);	// 11159 cbw ;~ 0613:1B82
cs=0x613;eip=0x001b83; 	T(MOV(di, ax));	// 11160 mov     di, ax ;~ 0613:1B83
cs=0x613;eip=0x001b85; 	T(SHL(di, 1));	// 11161 shl     di, 1 ;~ 0613:1B85
cs=0x613;eip=0x001b87; 	T(ADD(di, ax));	// 11162 add     di, ax ;~ 0613:1B87
cs=0x613;eip=0x001b89; 	T(SHL(di, 1));	// 11163 shl     di, 1 ;~ 0613:1B89
cs=0x613;eip=0x001b8b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11164 mov     bx, [bp+arg_0] ;~ 0613:1B8B
cs=0x613;eip=0x001b8e; 	X(PUSH(si));	// 11165 push    si ;~ 0613:1B8E
cs=0x613;eip=0x001b8f; 	T(si = bx+di+0x8C);	// 11166 lea     si, [bx+di+8Ch] ;~ 0613:1B8F
cs=0x613;eip=0x001b93; 	T(di = bp+vec_1c6);	// 11167 lea     di, [bp+vec_1C6] ;~ 0613:1B93
cs=0x613;eip=0x001b97; 	X(PUSH(ss));	// 11168 push    ss ;~ 0613:1B97
cs=0x613;eip=0x001b98; 	X(POP(es));	// 11169 pop     es ;~ 0613:1B98
cs=0x613;eip=0x001b99; 	X(MOVSW);	// 11170 movsw ;~ 0613:1B99
cs=0x613;eip=0x001b9a; 	X(MOVSW);	// 11171 movsw ;~ 0613:1B9A
cs=0x613;eip=0x001b9b; 	X(MOVSW);	// 11172 movsw ;~ 0613:1B9B
cs=0x613;eip=0x001b9c; 	X(POP(si));	// 11173 pop     si ;~ 0613:1B9C
cs=0x613;eip=0x001b9d; 	T(ax = bp+vec_17c);	// 11174 lea     ax, [bp+vec_17C] ;~ 0613:1B9D
cs=0x613;eip=0x001ba1; 	X(PUSH(ax));	// 11175 push    ax ;~ 0613:1BA1
cs=0x613;eip=0x001ba2; 	T(ax = bp+vec_1c6);	// 11176 lea     ax, [bp+vec_1C6] ;~ 0613:1BA2
cs=0x613;eip=0x001ba6; 	X(PUSH(ax));	// 11177 push    ax ;~ 0613:1BA6
cs=0x613;eip=0x001ba7; 	J(CALLF(build_track_object,0));	// 11178 call    build_track_object ;~ 0613:1BA7
cs=0x613;eip=0x001bac; 	T(ADD(sp, 4));	// 11179 add     sp, 4 ;~ 0613:1BAC
cs=0x613;eip=0x001baf; 	T(MOV(ax, planindex));	// 11180 mov     ax, planindex ;~ 0613:1BAF
cs=0x613;eip=0x001bb2; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), ax));	// 11181 cmp     [bp+var_E], ax ;~ 0613:1BB2
cs=0x613;eip=0x001bb5; 	J(JNZ(loc_16309));	// 11182 jnz     short loc_16309 ;~ 0613:1BB5
cs=0x613;eip=0x001bb7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c2))));	// 11183 push    [bp+var_1C2] ;~ 0613:1BB7
cs=0x613;eip=0x001bbb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c4))));	// 11184 push    [bp+var_1C4] ;~ 0613:1BBB
cs=0x613;eip=0x001bbf; 	X(PUSH(*(dw*)(raddr(ss,bp+vec_1c6))));	// 11185 push    [bp+vec_1C6] ;~ 0613:1BBF
cs=0x613;eip=0x001bc3; 	X(PUSH(ax));	// 11186 push    ax ;~ 0613:1BC3
cs=0x613;eip=0x001bc4; 	X(PUSH(cs));	// 11187 push    cs ;~ 0613:1BC4
cs=0x613;eip=0x001bc5; 	J(CALL(plane_origin_op,0));	// 11188 call    near ptr plane_origin_op ;~ 0613:1BC5
cs=0x613;eip=0x001bc8; 	T(ADD(sp, 8));	// 11189 add     sp, 8 ;~ 0613:1BC8
cs=0x613;eip=0x001bcb; 	X(MOV(*(dw*)(raddr(ss,bp+var_138)), ax));	// 11190 mov     [bp+var_138], ax ;~ 0613:1BCB
cs=0x613;eip=0x001bcf; 	T(CMP(game_replay_mode, 1));	// 11191 cmp     game_replay_mode, 1 ;~ 0613:1BCF
cs=0x613;eip=0x001bd4; 	J(JZ(loc_16309));	// 11192 jz      short loc_16309 ;~ 0613:1BD4
cs=0x613;eip=0x001bd6; 	T(OR(si, si));	// 11193 or      si, si ;~ 0613:1BD6
cs=0x613;eip=0x001bd8; 	J(JGE(loc_162ee));	// 11194 jge     short loc_162EE ;~ 0613:1BD8
cs=0x613;eip=0x001bda; 	T(OR(ax, ax));	// 11195 or      ax, ax ;~ 0613:1BDA
cs=0x613;eip=0x001bdc; 	J(JG(loc_162f9));	// 11196 jg      short loc_162F9 ;~ 0613:1BDC
loc_162ee:
	// 4977 
cs=0x613;eip=0x001bde; 	T(OR(si, si));	// 11199 or      si, si ;~ 0613:1BDE
cs=0x613;eip=0x001be0; 	J(JLE(loc_16309));	// 11200 jle     short loc_16309 ;~ 0613:1BE0
cs=0x613;eip=0x001be2; 	T(CMP(*(dw*)(raddr(ss,bp+var_138)), 0));	// 11201 cmp     [bp+var_138], 0 ;~ 0613:1BE2
cs=0x613;eip=0x001be7; 	J(JGE(loc_16309));	// 11202 jge     short loc_16309 ;~ 0613:1BE7
loc_162f9:
	// 4978 
cs=0x613;eip=0x001be9; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 11206 mov     al, [bp+arg_8] ;~ 0613:1BE9
cs=0x613;eip=0x001bec; 	T(CBW);	// 11207 cbw ;~ 0613:1BEC
cs=0x613;eip=0x001bed; 	X(PUSH(ax));	// 11208 push    ax ;~ 0613:1BED
cs=0x613;eip=0x001bee; 	T(MOV(ax, 5));	// 11209 mov     ax, 5 ;~ 0613:1BEE
cs=0x613;eip=0x001bf1; 	X(PUSH(ax));	// 11210 push    ax ;~ 0613:1BF1
cs=0x613;eip=0x001bf2; 	X(PUSH(cs));	// 11211 push    cs ;~ 0613:1BF2
cs=0x613;eip=0x001bf3; 	J(CALL(update_crash_state,0));	// 11212 call    near ptr update_crash_state ;~ 0613:1BF3
cs=0x613;eip=0x001bf6; 	T(ADD(sp, 4));	// 11213 add     sp, 4 ;~ 0613:1BF6
loc_16309:
	// 4979 
cs=0x613;eip=0x001bf9; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 11217 mov     al, [bp+var_E8] ;~ 0613:1BF9
cs=0x613;eip=0x001bfd; 	T(CBW);	// 11218 cbw ;~ 0613:1BFD
cs=0x613;eip=0x001bfe; 	T(MOV(di, ax));	// 11219 mov     di, ax ;~ 0613:1BFE
cs=0x613;eip=0x001c00; 	T(SHL(di, 1));	// 11220 shl     di, 1 ;~ 0613:1C00
cs=0x613;eip=0x001c02; 	T(ADD(di, ax));	// 11221 add     di, ax ;~ 0613:1C02
cs=0x613;eip=0x001c04; 	T(SHL(di, 1));	// 11222 shl     di, 1 ;~ 0613:1C04
cs=0x613;eip=0x001c06; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11223 mov     bx, [bp+arg_0] ;~ 0613:1C06
cs=0x613;eip=0x001c09; 	X(PUSH(si));	// 11224 push    si ;~ 0613:1C09
cs=0x613;eip=0x001c0a; 	T(di = bx+di+0x8C);	// 11225 lea     di, [bx+di+8Ch] ;~ 0613:1C0A
cs=0x613;eip=0x001c0e; 	T(si = bp+vec_17c);	// 11226 lea     si, [bp+vec_17C] ;~ 0613:1C0E
cs=0x613;eip=0x001c12; 	X(PUSH(ds));	// 11227 push    ds ;~ 0613:1C12
cs=0x613;eip=0x001c13; 	X(POP(es));	// 11228 pop     es ;~ 0613:1C13
cs=0x613;eip=0x001c14; 	X(MOVSW);	// 11230 movsw ;~ 0613:1C14
cs=0x613;eip=0x001c15; 	X(MOVSW);	// 11231 movsw ;~ 0613:1C15
cs=0x613;eip=0x001c16; 	X(MOVSW);	// 11232 movsw ;~ 0613:1C16
cs=0x613;eip=0x001c17; 	X(POP(si));	// 11233 pop     si ;~ 0613:1C17
cs=0x613;eip=0x001c18; 	X(INC(*(raddr(ss,bp+var_e8))));	// 11234 inc     [bp+var_E8] ;~ 0613:1C18
loc_1632c:
	// 4980 
cs=0x613;eip=0x001c1c; 	T(CMP(*(raddr(ss,bp+var_e8)), 4));	// 11237 cmp     [bp+var_E8], 4 ;~ 0613:1C1C
cs=0x613;eip=0x001c21; 	J(JL(loc_16336));	// 11238 jl      short loc_16336 ;~ 0613:1C21
cs=0x613;eip=0x001c23; 	J(JMP(loc_16428));	// 11239 jmp     loc_16428 ;~ 0613:1C23
loc_16336:
	// 4981 
cs=0x613;eip=0x001c26; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 11243 mov     al, [bp+var_E8] ;~ 0613:1C26
cs=0x613;eip=0x001c2a; 	T(CBW);	// 11244 cbw ;~ 0613:1C2A
cs=0x613;eip=0x001c2b; 	T(MOV(di, ax));	// 11245 mov     di, ax ;~ 0613:1C2B
cs=0x613;eip=0x001c2d; 	T(SHL(di, 1));	// 11246 shl     di, 1 ;~ 0613:1C2D
cs=0x613;eip=0x001c2f; 	T(ADD(di, ax));	// 11247 add     di, ax ;~ 0613:1C2F
cs=0x613;eip=0x001c31; 	T(SHL(di, 1));	// 11248 shl     di, 1 ;~ 0613:1C31
cs=0x613;eip=0x001c33; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 11249 mov     bx, [bp+arg_2] ;~ 0613:1C33
cs=0x613;eip=0x001c36; 	X(PUSH(si));	// 11250 push    si ;~ 0613:1C36
cs=0x613;eip=0x001c37; 	T(si = bx+di+0x0D2);	// 11251 lea     si, [bx+di+0D2h] ;~ 0613:1C37
cs=0x613;eip=0x001c3b; 	T(di = bp+vec_1c6);	// 11252 lea     di, [bp+vec_1C6] ;~ 0613:1C3B
cs=0x613;eip=0x001c3f; 	X(PUSH(ss));	// 11253 push    ss ;~ 0613:1C3F
cs=0x613;eip=0x001c40; 	X(POP(es));	// 11254 pop     es ;~ 0613:1C40
cs=0x613;eip=0x001c41; 	X(MOVSW);	// 11256 movsw ;~ 0613:1C41
cs=0x613;eip=0x001c42; 	X(MOVSW);	// 11257 movsw ;~ 0613:1C42
cs=0x613;eip=0x001c43; 	X(MOVSW);	// 11258 movsw ;~ 0613:1C43
cs=0x613;eip=0x001c44; 	X(POP(si));	// 11259 pop     si ;~ 0613:1C44
cs=0x613;eip=0x001c45; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 11260 mov     bx, [bp+arg_2] ;~ 0613:1C45
cs=0x613;eip=0x001c48; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0CA))));	// 11261 mov     ax, [bx+0CAh] ;~ 0613:1C48
cs=0x613;eip=0x001c4c; 	T(MOV(cl, 6));	// 11262 mov     cl, 6 ;~ 0613:1C4C
cs=0x613;eip=0x001c4e; 	T(SHL(ax, cl));	// 11263 shl     ax, cl ;~ 0613:1C4E
cs=0x613;eip=0x001c50; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 11264 mov     [bp+var_1C4], ax ;~ 0613:1C50
cs=0x613;eip=0x001c54; 	T(ax = bp+vec_fc);	// 11265 lea     ax, [bp+vec_FC] ;~ 0613:1C54
cs=0x613;eip=0x001c58; 	X(PUSH(ax));	// 11266 push    ax ;~ 0613:1C58
cs=0x613;eip=0x001c59; 	X(PUSH(*(dw*)(raddr(ss,bp+var_ea))));	// 11267 push    [bp+var_EA] ;~ 0613:1C59
cs=0x613;eip=0x001c5d; 	T(ax = bp+vec_1c6);	// 11268 lea     ax, [bp+vec_1C6] ;~ 0613:1C5D
cs=0x613;eip=0x001c61; 	X(PUSH(ax));	// 11269 push    ax ;~ 0613:1C61
cs=0x613;eip=0x001c62; 	J(CALLF(mat_mul_vector,0));	// 11270 call    mat_mul_vector ;~ 0613:1C62
cs=0x613;eip=0x001c67; 	T(ADD(sp, 6));	// 11271 add     sp, 6 ;~ 0613:1C67
cs=0x613;eip=0x001c6a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vec_fc))));	// 11272 mov     ax, [bp+vec_FC] ;~ 0613:1C6A
cs=0x613;eip=0x001c6e; 	T(CWD);	// 11273 cwd ;~ 0613:1C6E
cs=0x613;eip=0x001c6f; 	T(ADD(ax, pstate_lvec1_x));	// 11274 add     ax, pState_lvec1_x ;~ 0613:1C6F
cs=0x613;eip=0x001c73; 	T(ADC(dx, word_449c0));	// 11275 adc     dx, word_449C0 ;~ 0613:1C73
cs=0x613;eip=0x001c77; 	T(MOV(cl, 6));	// 11276 mov     cl, 6 ;~ 0613:1C77
loc_16389:
	// 4982 
cs=0x613;eip=0x001c79; 	T(SAR(dx, 1));	// 11279 sar     dx, 1 ;~ 0613:1C79
cs=0x613;eip=0x001c7b; 	T(RCR(ax, 1));	// 11280 rcr     ax, 1 ;~ 0613:1C7B
cs=0x613;eip=0x001c7d; 	T(DEC(cl));	// 11281 dec     cl ;~ 0613:1C7D
cs=0x613;eip=0x001c7f; 	J(JNZ(loc_16389));	// 11282 jnz     short loc_16389 ;~ 0613:1C7F
cs=0x613;eip=0x001c81; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1c6)), ax));	// 11283 mov     [bp+vec_1C6], ax ;~ 0613:1C81
cs=0x613;eip=0x001c85; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_fa))));	// 11284 mov     ax, [bp+var_FA] ;~ 0613:1C85
cs=0x613;eip=0x001c89; 	T(CWD);	// 11285 cwd ;~ 0613:1C89
cs=0x613;eip=0x001c8a; 	T(ADD(ax, pstate_lvec1_y));	// 11286 add     ax, pState_lvec1_y ;~ 0613:1C8A
cs=0x613;eip=0x001c8e; 	T(ADC(dx, word_449c8));	// 11287 adc     dx, word_449C8 ;~ 0613:1C8E
cs=0x613;eip=0x001c92; 	T(MOV(cl, 6));	// 11288 mov     cl, 6 ;~ 0613:1C92
loc_163a4:
	// 4983 
cs=0x613;eip=0x001c94; 	T(SAR(dx, 1));	// 11291 sar     dx, 1 ;~ 0613:1C94
cs=0x613;eip=0x001c96; 	T(RCR(ax, 1));	// 11292 rcr     ax, 1 ;~ 0613:1C96
cs=0x613;eip=0x001c98; 	T(DEC(cl));	// 11293 dec     cl ;~ 0613:1C98
cs=0x613;eip=0x001c9a; 	J(JNZ(loc_163a4));	// 11294 jnz     short loc_163A4 ;~ 0613:1C9A
cs=0x613;eip=0x001c9c; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 11295 mov     [bp+var_1C4], ax ;~ 0613:1C9C
cs=0x613;eip=0x001ca0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f8))));	// 11296 mov     ax, [bp+var_F8] ;~ 0613:1CA0
cs=0x613;eip=0x001ca4; 	T(CWD);	// 11297 cwd ;~ 0613:1CA4
cs=0x613;eip=0x001ca5; 	T(ADD(ax, pstate_lvec1_z));	// 11298 add     ax, pState_lvec1_z ;~ 0613:1CA5
cs=0x613;eip=0x001ca9; 	T(ADC(dx, word_449cc));	// 11299 adc     dx, word_449CC ;~ 0613:1CA9
cs=0x613;eip=0x001cad; 	T(MOV(cl, 6));	// 11300 mov     cl, 6 ;~ 0613:1CAD
loc_163bf:
	// 4984 
cs=0x613;eip=0x001caf; 	T(SAR(dx, 1));	// 11303 sar     dx, 1 ;~ 0613:1CAF
cs=0x613;eip=0x001cb1; 	T(RCR(ax, 1));	// 11304 rcr     ax, 1 ;~ 0613:1CB1
cs=0x613;eip=0x001cb3; 	T(DEC(cl));	// 11305 dec     cl ;~ 0613:1CB3
cs=0x613;eip=0x001cb5; 	J(JNZ(loc_163bf));	// 11306 jnz     short loc_163BF ;~ 0613:1CB5
cs=0x613;eip=0x001cb7; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 11307 mov     [bp+var_1C2], ax ;~ 0613:1CB7
cs=0x613;eip=0x001cbb; 	X(PUSH(si));	// 11308 push    si ;~ 0613:1CBB
cs=0x613;eip=0x001cbc; 	T(di = bp+vec_17c);	// 11309 lea     di, [bp+vec_17C] ;~ 0613:1CBC
cs=0x613;eip=0x001cc0; 	T(si = bp+vec_1c6);	// 11310 lea     si, [bp+vec_1C6] ;~ 0613:1CC0
cs=0x613;eip=0x001cc4; 	X(PUSH(ss));	// 11311 push    ss ;~ 0613:1CC4
cs=0x613;eip=0x001cc5; 	X(POP(es));	// 11312 pop     es ;~ 0613:1CC5
cs=0x613;eip=0x001cc6; 	X(MOVSW);	// 11313 movsw ;~ 0613:1CC6
cs=0x613;eip=0x001cc7; 	X(MOVSW);	// 11314 movsw ;~ 0613:1CC7
cs=0x613;eip=0x001cc8; 	X(MOVSW);	// 11315 movsw ;~ 0613:1CC8
cs=0x613;eip=0x001cc9; 	X(POP(si));	// 11316 pop     si ;~ 0613:1CC9
cs=0x613;eip=0x001cca; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 11317 mov     al, [bp+var_E8] ;~ 0613:1CCA
cs=0x613;eip=0x001cce; 	T(CBW);	// 11318 cbw ;~ 0613:1CCE
cs=0x613;eip=0x001ccf; 	T(MOV(cx, ax));	// 11319 mov     cx, ax ;~ 0613:1CCF
cs=0x613;eip=0x001cd1; 	T(SHL(ax, 1));	// 11320 shl     ax, 1 ;~ 0613:1CD1
cs=0x613;eip=0x001cd3; 	T(ADD(ax, cx));	// 11321 add     ax, cx ;~ 0613:1CD3
cs=0x613;eip=0x001cd5; 	T(SHL(ax, 1));	// 11322 shl     ax, 1 ;~ 0613:1CD5
cs=0x613;eip=0x001cd7; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 11323 add     ax, [bp+arg_0] ;~ 0613:1CD7
cs=0x613;eip=0x001cda; 	T(ADD(ax, 0x8C));	// 11324 add     ax, 8Ch ;~ 0613:1CDA
cs=0x613;eip=0x001cdd; 	X(PUSH(ax));	// 11325 push    ax ;~ 0613:1CDD
cs=0x613;eip=0x001cde; 	T(ax = bp+vec_1c6);	// 11326 lea     ax, [bp+vec_1C6] ;~ 0613:1CDE
cs=0x613;eip=0x001ce2; 	X(PUSH(ax));	// 11327 push    ax ;~ 0613:1CE2
cs=0x613;eip=0x001ce3; 	J(CALLF(build_track_object,0));	// 11328 call    build_track_object ;~ 0613:1CE3
cs=0x613;eip=0x001ce8; 	T(ADD(sp, 4));	// 11329 add     sp, 4 ;~ 0613:1CE8
cs=0x613;eip=0x001ceb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c2))));	// 11330 push    [bp+var_1C2] ;~ 0613:1CEB
cs=0x613;eip=0x001cef; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c4))));	// 11331 push    [bp+var_1C4] ;~ 0613:1CEF
cs=0x613;eip=0x001cf3; 	X(PUSH(*(dw*)(raddr(ss,bp+vec_1c6))));	// 11332 push    [bp+vec_1C6] ;~ 0613:1CF3
cs=0x613;eip=0x001cf7; 	X(PUSH(planindex));	// 11333 push    planindex ;~ 0613:1CF7
cs=0x613;eip=0x001cfb; 	X(PUSH(cs));	// 11334 push    cs ;~ 0613:1CFB
cs=0x613;eip=0x001cfc; 	J(CALL(plane_origin_op,0));	// 11335 call    near ptr plane_origin_op ;~ 0613:1CFC
cs=0x613;eip=0x001cff; 	T(ADD(sp, 8));	// 11336 add     sp, 8 ;~ 0613:1CFF
cs=0x613;eip=0x001d02; 	T(MOV(si, ax));	// 11337 mov     si, ax ;~ 0613:1D02
cs=0x613;eip=0x001d04; 	T(CMP(planindex, 4));	// 11338 cmp     planindex, 4 ;~ 0613:1D04
cs=0x613;eip=0x001d09; 	J(JL(loc_1641e));	// 11339 jl      short loc_1641E ;~ 0613:1D09
cs=0x613;eip=0x001d0b; 	J(JMP(loc_16288));	// 11340 jmp     loc_16288 ;~ 0613:1D0B
loc_1641e:
	// 4985 
cs=0x613;eip=0x001d0e; 	T(OR(si, si));	// 11344 or      si, si ;~ 0613:1D0E
cs=0x613;eip=0x001d10; 	J(JLE(loc_16425));	// 11345 jle     short loc_16425 ;~ 0613:1D10
cs=0x613;eip=0x001d12; 	J(JMP(loc_16309));	// 11346 jmp     loc_16309 ;~ 0613:1D12
loc_16425:
	// 4986 
cs=0x613;eip=0x001d15; 	J(JMP(loc_162f9));	// 11350 jmp     loc_162F9 ;~ 0613:1D15
loc_16428:
	// 4987 
cs=0x613;eip=0x001d18; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11354 mov     bx, [bp+arg_0] ;~ 0613:1D18
cs=0x613;eip=0x001d1b; 	T(MOV(al, *(raddr(ds,bx+0x0BF))));	// 11355 mov     al, [bx+0BFh] ;~ 0613:1D1B
cs=0x613;eip=0x001d1f; 	T(ADD(al, *(raddr(ds,bx+0x0C0))));	// 11356 add     al, [bx+0C0h] ;~ 0613:1D1F
cs=0x613;eip=0x001d23; 	X(MOV(*(raddr(ss,bp+var_11c)), al));	// 11357 mov     [bp+var_11C], al ;~ 0613:1D23
cs=0x613;eip=0x001d27; 	T(CMP(*(raddr(ss,bp+arg_8)), 0));	// 11358 cmp     [bp+arg_8], 0 ;~ 0613:1D27
cs=0x613;eip=0x001d2b; 	J(JNZ(loc_1644c));	// 11359 jnz     short loc_1644C ;~ 0613:1D2B
cs=0x613;eip=0x001d2d; 	T(OR(al, al));	// 11360 or      al, al ;~ 0613:1D2D
cs=0x613;eip=0x001d2f; 	J(JNZ(loc_1644c));	// 11361 jnz     short loc_1644C ;~ 0613:1D2F
cs=0x613;eip=0x001d31; 	T(CMP(*(raddr(ds,bx+0x0C1)), 0));	// 11362 cmp     byte ptr [bx+0C1h], 0 ;~ 0613:1D31
cs=0x613;eip=0x001d36; 	J(JZ(loc_1644c));	// 11363 jz      short loc_1644C ;~ 0613:1D36
cs=0x613;eip=0x001d38; 	X(INC(word_445e4));	// 11364 inc     word_445E4 ;~ 0613:1D38
loc_1644c:
	// 4988 
cs=0x613;eip=0x001d3c; 	T(MOV(al, *(raddr(ss,bp+var_11c))));	// 11368 mov     al, [bp+var_11C] ;~ 0613:1D3C
cs=0x613;eip=0x001d40; 	X(MOV(*(raddr(ds,bx+0x0C1)), al));	// 11369 mov     [bx+0C1h], al ;~ 0613:1D40
cs=0x613;eip=0x001d44; 	T(MOV(ax, pstate_lvec1_x));	// 11370 mov     ax, pState_lvec1_x ;~ 0613:1D44
cs=0x613;eip=0x001d47; 	T(MOV(dx, word_449c0));	// 11371 mov     dx, word_449C0 ;~ 0613:1D47
cs=0x613;eip=0x001d4b; 	T(MOV(cl, 6));	// 11372 mov     cl, 6 ;~ 0613:1D4B
loc_1645d:
	// 4989 
cs=0x613;eip=0x001d4d; 	T(SAR(dx, 1));	// 11375 sar     dx, 1 ;~ 0613:1D4D
cs=0x613;eip=0x001d4f; 	T(RCR(ax, 1));	// 11376 rcr     ax, 1 ;~ 0613:1D4F
cs=0x613;eip=0x001d51; 	T(DEC(cl));	// 11377 dec     cl ;~ 0613:1D51
cs=0x613;eip=0x001d53; 	J(JNZ(loc_1645d));	// 11378 jnz     short loc_1645D ;~ 0613:1D53
cs=0x613;eip=0x001d55; 	X(MOV(*(dw*)(raddr(ss,bp+var_11a)), ax));	// 11379 mov     [bp+var_11A], ax ;~ 0613:1D55
cs=0x613;eip=0x001d59; 	T(MOV(ax, pstate_lvec1_y));	// 11380 mov     ax, pState_lvec1_y ;~ 0613:1D59
cs=0x613;eip=0x001d5c; 	T(MOV(dx, word_449c8));	// 11381 mov     dx, word_449C8 ;~ 0613:1D5C
cs=0x613;eip=0x001d60; 	T(MOV(cl, 6));	// 11382 mov     cl, 6 ;~ 0613:1D60
loc_16472:
	// 4990 
cs=0x613;eip=0x001d62; 	T(SAR(dx, 1));	// 11385 sar     dx, 1 ;~ 0613:1D62
cs=0x613;eip=0x001d64; 	T(RCR(ax, 1));	// 11386 rcr     ax, 1 ;~ 0613:1D64
cs=0x613;eip=0x001d66; 	T(DEC(cl));	// 11387 dec     cl ;~ 0613:1D66
cs=0x613;eip=0x001d68; 	J(JNZ(loc_16472));	// 11388 jnz     short loc_16472 ;~ 0613:1D68
cs=0x613;eip=0x001d6a; 	X(MOV(*(dw*)(raddr(ss,bp+var_118)), ax));	// 11389 mov     [bp+var_118], ax ;~ 0613:1D6A
cs=0x613;eip=0x001d6e; 	T(MOV(ax, pstate_lvec1_z));	// 11390 mov     ax, pState_lvec1_z ;~ 0613:1D6E
cs=0x613;eip=0x001d71; 	T(MOV(dx, word_449cc));	// 11391 mov     dx, word_449CC ;~ 0613:1D71
cs=0x613;eip=0x001d75; 	T(MOV(cl, 6));	// 11392 mov     cl, 6 ;~ 0613:1D75
loc_16487:
	// 4991 
cs=0x613;eip=0x001d77; 	T(SAR(dx, 1));	// 11395 sar     dx, 1 ;~ 0613:1D77
cs=0x613;eip=0x001d79; 	T(RCR(ax, 1));	// 11396 rcr     ax, 1 ;~ 0613:1D79
cs=0x613;eip=0x001d7b; 	T(DEC(cl));	// 11397 dec     cl ;~ 0613:1D7B
cs=0x613;eip=0x001d7d; 	J(JNZ(loc_16487));	// 11398 jnz     short loc_16487 ;~ 0613:1D7D
cs=0x613;eip=0x001d7f; 	X(MOV(*(dw*)(raddr(ss,bp+var_116)), ax));	// 11399 mov     [bp+var_116], ax ;~ 0613:1D7F
cs=0x613;eip=0x001d83; 	T(MOV(ax, pstate_minusrotate_z_1));	// 11400 mov     ax, pState_minusRotate_z_1 ;~ 0613:1D83
cs=0x613;eip=0x001d86; 	X(MOV(*(dw*)(raddr(ss,bp+var_114)), ax));	// 11401 mov     [bp+var_114], ax ;~ 0613:1D86
cs=0x613;eip=0x001d8a; 	T(MOV(ax, pstate_minusrotate_x_1));	// 11402 mov     ax, pState_minusRotate_x_1 ;~ 0613:1D8A
cs=0x613;eip=0x001d8d; 	X(MOV(*(dw*)(raddr(ss,bp+var_112)), ax));	// 11403 mov     [bp+var_112], ax ;~ 0613:1D8D
cs=0x613;eip=0x001d91; 	T(MOV(ax, pstate_minusrotate_y_1));	// 11404 mov     ax, pState_minusRotate_y_1 ;~ 0613:1D91
cs=0x613;eip=0x001d94; 	X(MOV(*(dw*)(raddr(ss,bp+var_110)), ax));	// 11405 mov     [bp+var_110], ax ;~ 0613:1D94
cs=0x613;eip=0x001d98; 	T(CMP(byte_449aa, 0));	// 11406 cmp     byte_449AA, 0 ;~ 0613:1D98
cs=0x613;eip=0x001d9d; 	J(JNZ(loc_164b2));	// 11407 jnz     short loc_164B2 ;~ 0613:1D9D
cs=0x613;eip=0x001d9f; 	J(JMP(loc_16578));	// 11408 jmp     loc_16578 ;~ 0613:1D9F
loc_164b2:
	// 4992 
cs=0x613;eip=0x001da2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 11412 mov     bx, [bp+arg_4] ;~ 0613:1DA2
cs=0x613;eip=0x001da5; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 11413 mov     ax, [bx+0] ;~ 0613:1DA5
cs=0x613;eip=0x001da7; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 11414 mov     dx, [bx+2] ;~ 0613:1DA7
cs=0x613;eip=0x001daa; 	T(MOV(cl, 6));	// 11415 mov     cl, 6 ;~ 0613:1DAA
loc_164bc:
	// 4993 
cs=0x613;eip=0x001dac; 	T(SAR(dx, 1));	// 11418 sar     dx, 1 ;~ 0613:1DAC
cs=0x613;eip=0x001dae; 	T(RCR(ax, 1));	// 11419 rcr     ax, 1 ;~ 0613:1DAE
cs=0x613;eip=0x001db0; 	T(DEC(cl));	// 11420 dec     cl ;~ 0613:1DB0
cs=0x613;eip=0x001db2; 	J(JNZ(loc_164bc));	// 11421 jnz     short loc_164BC ;~ 0613:1DB2
cs=0x613;eip=0x001db4; 	X(MOV(*(dw*)(raddr(ss,bp+vec_18eostateworldcrds)), ax));	// 11422 mov     [bp+vec_18EoStateWorldCrds], ax ;~ 0613:1DB4
cs=0x613;eip=0x001db8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 11423 mov     bx, [bp+arg_4] ;~ 0613:1DB8
cs=0x613;eip=0x001dbb; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 11424 mov     ax, [bx+4] ;~ 0613:1DBB
cs=0x613;eip=0x001dbe; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 11425 mov     dx, [bx+6] ;~ 0613:1DBE
cs=0x613;eip=0x001dc1; 	T(MOV(cl, 6));	// 11426 mov     cl, 6 ;~ 0613:1DC1
loc_164d3:
	// 4994 
cs=0x613;eip=0x001dc3; 	T(SAR(dx, 1));	// 11429 sar     dx, 1 ;~ 0613:1DC3
cs=0x613;eip=0x001dc5; 	T(RCR(ax, 1));	// 11430 rcr     ax, 1 ;~ 0613:1DC5
cs=0x613;eip=0x001dc7; 	T(DEC(cl));	// 11431 dec     cl ;~ 0613:1DC7
cs=0x613;eip=0x001dc9; 	J(JNZ(loc_164d3));	// 11432 jnz     short loc_164D3 ;~ 0613:1DC9
cs=0x613;eip=0x001dcb; 	X(MOV(*(dw*)(raddr(ss,bp+var_18c)), ax));	// 11433 mov     [bp+var_18C], ax ;~ 0613:1DCB
cs=0x613;eip=0x001dcf; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 11434 mov     bx, [bp+arg_4] ;~ 0613:1DCF
cs=0x613;eip=0x001dd2; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 11435 mov     ax, [bx+8] ;~ 0613:1DD2
cs=0x613;eip=0x001dd5; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 11436 mov     dx, [bx+0Ah] ;~ 0613:1DD5
cs=0x613;eip=0x001dd8; 	T(MOV(cl, 6));	// 11437 mov     cl, 6 ;~ 0613:1DD8
loc_164ea:
	// 4995 
cs=0x613;eip=0x001dda; 	T(SAR(dx, 1));	// 11440 sar     dx, 1 ;~ 0613:1DDA
cs=0x613;eip=0x001ddc; 	T(RCR(ax, 1));	// 11441 rcr     ax, 1 ;~ 0613:1DDC
cs=0x613;eip=0x001dde; 	T(DEC(cl));	// 11442 dec     cl ;~ 0613:1DDE
cs=0x613;eip=0x001de0; 	J(JNZ(loc_164ea));	// 11443 jnz     short loc_164EA ;~ 0613:1DE0
cs=0x613;eip=0x001de2; 	X(MOV(*(dw*)(raddr(ss,bp+var_18a)), ax));	// 11444 mov     [bp+var_18A], ax ;~ 0613:1DE2
cs=0x613;eip=0x001de6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 11445 mov     bx, [bp+arg_4] ;~ 0613:1DE6
cs=0x613;eip=0x001de9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1C))));	// 11446 mov     ax, [bx+1Ch] ;~ 0613:1DE9
cs=0x613;eip=0x001dec; 	X(MOV(*(dw*)(raddr(ss,bp+var_188)), ax));	// 11447 mov     [bp+var_188], ax ;~ 0613:1DEC
cs=0x613;eip=0x001df0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1A))));	// 11448 mov     ax, [bx+1Ah] ;~ 0613:1DF0
cs=0x613;eip=0x001df3; 	X(MOV(*(dw*)(raddr(ss,bp+var_186)), ax));	// 11449 mov     [bp+var_186], ax ;~ 0613:1DF3
cs=0x613;eip=0x001df7; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x18))));	// 11450 mov     ax, [bx+18h] ;~ 0613:1DF7
cs=0x613;eip=0x001dfa; 	X(MOV(*(dw*)(raddr(ss,bp+var_184)), ax));	// 11451 mov     [bp+var_184], ax ;~ 0613:1DFA
cs=0x613;eip=0x001dfe; 	T(ax = bp+vec_18eostateworldcrds);	// 11452 lea     ax, [bp+vec_18EoStateWorldCrds] ;~ 0613:1DFE
cs=0x613;eip=0x001e02; 	X(PUSH(ax));	// 11453 push    ax ;~ 0613:1E02
cs=0x613;eip=0x001e03; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 11454 mov     ax, [bp+arg_6] ;~ 0613:1E03
cs=0x613;eip=0x001e06; 	T(ADD(ax, 0x0C8));	// 11455 add     ax, 0C8h ;~ 0613:1E06
cs=0x613;eip=0x001e09; 	X(PUSH(ax));	// 11456 push    ax ;~ 0613:1E09
cs=0x613;eip=0x001e0a; 	T(ax = bp+var_11a);	// 11457 lea     ax, [bp+var_11A] ;~ 0613:1E0A
cs=0x613;eip=0x001e0e; 	X(PUSH(ax));	// 11458 push    ax ;~ 0613:1E0E
cs=0x613;eip=0x001e0f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 11459 mov     ax, [bp+arg_2] ;~ 0613:1E0F
cs=0x613;eip=0x001e12; 	T(ADD(ax, 0x0C8));	// 11460 add     ax, 0C8h ;~ 0613:1E12
cs=0x613;eip=0x001e15; 	X(PUSH(ax));	// 11461 push    ax ;~ 0613:1E15
cs=0x613;eip=0x001e16; 	X(PUSH(cs));	// 11462 push    cs ;~ 0613:1E16
cs=0x613;eip=0x001e17; 	J(CALL(car_car_coll_detect_maybe,0));	// 11463 call    near ptr car_car_coll_detect_maybe ;~ 0613:1E17
cs=0x613;eip=0x001e1a; 	T(ADD(sp, 8));	// 11464 add     sp, 8 ;~ 0613:1E1A
cs=0x613;eip=0x001e1d; 	T(OR(al, al));	// 11465 or      al, al ;~ 0613:1E1D
cs=0x613;eip=0x001e1f; 	J(JZ(loc_16578));	// 11466 jz      short loc_16578 ;~ 0613:1E1F
cs=0x613;eip=0x001e21; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11467 mov     bx, [bp+arg_0] ;~ 0613:1E21
cs=0x613;eip=0x001e24; 	T(CMP(*(raddr(ds,bx+0x0C8)), 0));	// 11468 cmp     byte ptr [bx+0C8h], 0 ;~ 0613:1E24
cs=0x613;eip=0x001e29; 	J(JZ(loc_1653e));	// 11469 jz      short loc_1653E ;~ 0613:1E29
cs=0x613;eip=0x001e2b; 	J(JMP(loc_16892));	// 11470 jmp     loc_16892 ;~ 0613:1E2B
loc_1653e:
	// 4996 
cs=0x613;eip=0x001e2e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 11474 push    [bp+arg_4] ;~ 0613:1E2E
cs=0x613;eip=0x001e31; 	X(PUSH(bx));	// 11475 push    bx ;~ 0613:1E31
cs=0x613;eip=0x001e32; 	X(PUSH(cs));	// 11476 push    cs ;~ 0613:1E32
cs=0x613;eip=0x001e33; 	J(CALL(car_car_speed_adjust_maybe,0));	// 11477 call    near ptr car_car_speed_adjust_maybe ;~ 0613:1E33
cs=0x613;eip=0x001e36; 	T(ADD(sp, 4));	// 11478 add     sp, 4 ;~ 0613:1E36
cs=0x613;eip=0x001e39; 	T(OR(al, al));	// 11479 or      al, al ;~ 0613:1E39
cs=0x613;eip=0x001e3b; 	J(JNZ(loc_16550));	// 11480 jnz     short loc_16550 ;~ 0613:1E3B
cs=0x613;eip=0x001e3d; 	J(JMP(loc_16892));	// 11481 jmp     loc_16892 ;~ 0613:1E3D
loc_16550:
	// 4997 
cs=0x613;eip=0x001e40; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 11485 mov     al, [bp+arg_8] ;~ 0613:1E40
cs=0x613;eip=0x001e43; 	T(CBW);	// 11486 cbw ;~ 0613:1E43
cs=0x613;eip=0x001e44; 	X(PUSH(ax));	// 11487 push    ax ;~ 0613:1E44
cs=0x613;eip=0x001e45; 	T(MOV(ax, 1));	// 11488 mov     ax, 1 ;~ 0613:1E45
cs=0x613;eip=0x001e48; 	X(PUSH(ax));	// 11489 push    ax ;~ 0613:1E48
cs=0x613;eip=0x001e49; 	X(PUSH(cs));	// 11490 push    cs ;~ 0613:1E49
cs=0x613;eip=0x001e4a; 	J(CALL(update_crash_state,0));	// 11491 call    near ptr update_crash_state ;~ 0613:1E4A
cs=0x613;eip=0x001e4d; 	T(ADD(sp, 4));	// 11492 add     sp, 4 ;~ 0613:1E4D
cs=0x613;eip=0x001e50; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 11493 mov     al, [bp+arg_8] ;~ 0613:1E50
cs=0x613;eip=0x001e53; 	T(CBW);	// 11494 cbw ;~ 0613:1E53
cs=0x613;eip=0x001e54; 	T(XOR(al, 1));	// 11495 xor     al, 1 ;~ 0613:1E54
loc_16566:
	// 4998 
cs=0x613;eip=0x001e56; 	X(PUSH(ax));	// 11498 push    ax ;~ 0613:1E56
cs=0x613;eip=0x001e57; 	T(MOV(ax, 1));	// 11499 mov     ax, 1 ;~ 0613:1E57
cs=0x613;eip=0x001e5a; 	X(PUSH(ax));	// 11500 push    ax ;~ 0613:1E5A
cs=0x613;eip=0x001e5b; 	X(PUSH(cs));	// 11501 push    cs ;~ 0613:1E5B
cs=0x613;eip=0x001e5c; 	J(CALL(update_crash_state,0));	// 11502 call    near ptr update_crash_state ;~ 0613:1E5C
cs=0x613;eip=0x001e5f; 	T(ADD(sp, 4));	// 11503 add     sp, 4 ;~ 0613:1E5F
cs=0x613;eip=0x001e62; 	X(POP(si));	// 11504 pop     si ;~ 0613:1E62
cs=0x613;eip=0x001e63; 	X(POP(di));	// 11505 pop     di ;~ 0613:1E63
cs=0x613;eip=0x001e64; 	T(MOV(sp, bp));	// 11506 mov     sp, bp ;~ 0613:1E64
cs=0x613;eip=0x001e66; 	X(POP(bp));	// 11507 pop     bp ;~ 0613:1E66
cs=0x613;eip=0x001e67; 	J(RETF(0));	// 11508 retf ;~ 0613:1E67
loc_16578:
	// 4999 
cs=0x613;eip=0x001e68; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_11a))));	// 11513 mov     ax, [bp+var_11A] ;~ 0613:1E68
cs=0x613;eip=0x001e6c; 	T(MOV(cl, 0x0A));	// 11514 mov     cl, 0Ah ;~ 0613:1E6C
cs=0x613;eip=0x001e6e; 	T(SAR(ax, cl));	// 11515 sar     ax, cl ;~ 0613:1E6E
cs=0x613;eip=0x001e70; 	X(MOV(*(dw*)(raddr(ss,bp+vec_fc)), ax));	// 11516 mov     [bp+vec_FC], ax ;~ 0613:1E70
cs=0x613;eip=0x001e74; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_116))));	// 11517 mov     ax, [bp+var_116] ;~ 0613:1E74
cs=0x613;eip=0x001e78; 	T(SAR(ax, cl));	// 11518 sar     ax, cl          ; /2^10 : scale to tile index. ;~ 0613:1E78
cs=0x613;eip=0x001e7a; 	T(SUB(ax, 0x1D));	// 11519 sub     ax, 1Dh ;~ 0613:1E7A
cs=0x613;eip=0x001e7d; 	T(NEG(ax));	// 11520 neg     ax ;~ 0613:1E7D
cs=0x613;eip=0x001e7f; 	X(MOV(*(dw*)(raddr(ss,bp+var_f8)), ax));	// 11521 mov     [bp+var_F8], ax ;~ 0613:1E7F
cs=0x613;eip=0x001e83; 	X(MOV(*(dw*)(raddr(ss,bp+var_188)), 0));	// 11522 mov     [bp+var_188], 0 ;~ 0613:1E83
cs=0x613;eip=0x001e89; 	X(MOV(*(dw*)(raddr(ss,bp+var_186)), 0));	// 11523 mov     [bp+var_186], 0 ;~ 0613:1E89
cs=0x613;eip=0x001e8f; 	X(MOV(*(dw*)(raddr(ss,bp+var_184)), 0));	// 11524 mov     [bp+var_184], 0 ;~ 0613:1E8F
cs=0x613;eip=0x001e95; 	T(CMP(*(dw*)(raddr(ss,bp+vec_fc)), 0));	// 11525 cmp     [bp+vec_FC], 0 ;~ 0613:1E95
cs=0x613;eip=0x001e9a; 	J(JGE(loc_165af));	// 11526 jge     short loc_165AF ;~ 0613:1E9A
cs=0x613;eip=0x001e9c; 	J(JMP(loc_16840));	// 11527 jmp     loc_16840 ;~ 0613:1E9C
loc_165af:
	// 5000 
cs=0x613;eip=0x001e9f; 	T(CMP(*(dw*)(raddr(ss,bp+vec_fc)), 0x1E));	// 11531 cmp     [bp+vec_FC], 1Eh ;~ 0613:1E9F
cs=0x613;eip=0x001ea4; 	J(JL(loc_165b9));	// 11532 jl      short loc_165B9 ;~ 0613:1EA4
cs=0x613;eip=0x001ea6; 	J(JMP(loc_16840));	// 11533 jmp     loc_16840 ;~ 0613:1EA6
loc_165b9:
	// 5001 
cs=0x613;eip=0x001ea9; 	T(OR(ax, ax));	// 11537 or      ax, ax ;~ 0613:1EA9
cs=0x613;eip=0x001eab; 	J(JGE(loc_165c0));	// 11538 jge     short loc_165C0 ;~ 0613:1EAB
cs=0x613;eip=0x001ead; 	J(JMP(loc_16840));	// 11539 jmp     loc_16840 ;~ 0613:1EAD
loc_165c0:
	// 5002 
cs=0x613;eip=0x001eb0; 	T(CMP(ax, 0x1E));	// 11543 cmp     ax, 1Eh ;~ 0613:1EB0
cs=0x613;eip=0x001eb3; 	J(JL(loc_165c8));	// 11544 jl      short loc_165C8 ;~ 0613:1EB3
cs=0x613;eip=0x001eb5; 	J(JMP(loc_16840));	// 11545 jmp     loc_16840 ;~ 0613:1EB5
loc_165c8:
	// 5003 
cs=0x613;eip=0x001eb8; 	T(ax = bp+var_dc);	// 11549 lea     ax, [bp+var_DC] ;~ 0613:1EB8
cs=0x613;eip=0x001ebc; 	X(PUSH(ax));	// 11550 push    ax ;~ 0613:1EBC
cs=0x613;eip=0x001ebd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_f8))));	// 11551 push    [bp+var_F8] ;~ 0613:1EBD
cs=0x613;eip=0x001ec1; 	X(PUSH(*(dw*)(raddr(ss,bp+vec_fc))));	// 11552 push    [bp+vec_FC] ;~ 0613:1EC1
cs=0x613;eip=0x001ec5; 	J(CALLF(bto_auxiliary1,0));	// 11553 call    bto_auxiliary1 ;~ 0613:1EC5
cs=0x613;eip=0x001eca; 	T(ADD(sp, 6));	// 11554 add     sp, 6 ;~ 0613:1ECA
cs=0x613;eip=0x001ecd; 	X(MOV(*(raddr(ss,bp+var_ec)), al));	// 11555 mov     [bp+var_EC], al ;~ 0613:1ECD
cs=0x613;eip=0x001ed1; 	T(OR(al, al));	// 11556 or      al, al ;~ 0613:1ED1
cs=0x613;eip=0x001ed3; 	J(JZ(loc_16650));	// 11557 jz      short loc_16650 ;~ 0613:1ED3
cs=0x613;eip=0x001ed5; 	T(SUB(si, si));	// 11558 sub     si, si ;~ 0613:1ED5
cs=0x613;eip=0x001ed7; 	J(JMP(loc_165f0));	// 11559 jmp     short loc_165F0 ;~ 0613:1ED7
loc_165ea:
	// 5004 
cs=0x613;eip=0x001eda; 	X(ADD(*(dw*)(raddr(ss,bp+var_144)), 6));	// 11564 add     [bp+var_144], 6 ;~ 0613:1EDA
cs=0x613;eip=0x001edf; 	T(INC(si));	// 11565 inc     si ;~ 0613:1EDF
loc_165f0:
	// 5005 
cs=0x613;eip=0x001ee0; 	T(MOV(al, *(raddr(ss,bp+var_ec))));	// 11568 mov     al, [bp+var_EC] ;~ 0613:1EE0
cs=0x613;eip=0x001ee4; 	T(SUB(ah, ah));	// 11569 sub     ah, ah ;~ 0613:1EE4
cs=0x613;eip=0x001ee6; 	T(CMP(ax, si));	// 11570 cmp     ax, si ;~ 0613:1EE6
cs=0x613;eip=0x001ee8; 	J(JBE(loc_16650));	// 11571 jbe     short loc_16650 ;~ 0613:1EE8
cs=0x613;eip=0x001eea; 	T(MOV(ax, si));	// 11572 mov     ax, si ;~ 0613:1EEA
cs=0x613;eip=0x001eec; 	T(MOV(cx, ax));	// 11573 mov     cx, ax ;~ 0613:1EEC
cs=0x613;eip=0x001eee; 	T(SHL(ax, 1));	// 11574 shl     ax, 1 ;~ 0613:1EEE
cs=0x613;eip=0x001ef0; 	T(ADD(ax, cx));	// 11575 add     ax, cx ;~ 0613:1EF0
cs=0x613;eip=0x001ef2; 	T(SHL(ax, 1));	// 11576 shl     ax, 1 ;~ 0613:1EF2
cs=0x613;eip=0x001ef4; 	T(MOV(di, ax));	// 11577 mov     di, ax ;~ 0613:1EF4
cs=0x613;eip=0x001ef6; 	T(ADD(di, bp));	// 11578 add     di, bp ;~ 0613:1EF6
cs=0x613;eip=0x001ef8; 	T(MOV(ax, *(dw*)(raddr(ds,di-0x0DC))));	// 11579 mov     ax, [di-0DCh] ;~ 0613:1EF8
cs=0x613;eip=0x001efc; 	X(MOV(*(dw*)(raddr(ss,bp+vec_18eostateworldcrds)), ax));	// 11580 mov     [bp+vec_18EoStateWorldCrds], ax ;~ 0613:1EFC
cs=0x613;eip=0x001f00; 	T(MOV(ax, *(dw*)(raddr(ds,di-0x0DA))));	// 11581 mov     ax, [di-0DAh] ;~ 0613:1F00
cs=0x613;eip=0x001f04; 	X(MOV(*(dw*)(raddr(ss,bp+var_18c)), ax));	// 11582 mov     [bp+var_18C], ax ;~ 0613:1F04
cs=0x613;eip=0x001f08; 	T(MOV(ax, *(dw*)(raddr(ds,di-0x0D8))));	// 11583 mov     ax, [di-0D8h] ;~ 0613:1F08
cs=0x613;eip=0x001f0c; 	X(MOV(*(dw*)(raddr(ss,bp+var_18a)), ax));	// 11584 mov     [bp+var_18A], ax ;~ 0613:1F0C
cs=0x613;eip=0x001f10; 	T(ax = bp+vec_18eostateworldcrds);	// 11585 lea     ax, [bp+vec_18EoStateWorldCrds] ;~ 0613:1F10
cs=0x613;eip=0x001f14; 	X(PUSH(ax));	// 11586 push    ax ;~ 0613:1F14
cs=0x613;eip=0x001f15; 	T(MOV(ax, offset(dseg,unk_3bd6a)));	// 11587 mov     ax, offset unk_3BD6A ;~ 0613:1F15
cs=0x613;eip=0x001f18; 	X(PUSH(ax));	// 11588 push    ax ;~ 0613:1F18
cs=0x613;eip=0x001f19; 	T(ax = bp+var_11a);	// 11589 lea     ax, [bp+var_11A] ;~ 0613:1F19
cs=0x613;eip=0x001f1d; 	X(PUSH(ax));	// 11590 push    ax ;~ 0613:1F1D
cs=0x613;eip=0x001f1e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 11591 mov     ax, [bp+arg_2] ;~ 0613:1F1E
cs=0x613;eip=0x001f21; 	T(ADD(ax, 0x0C8));	// 11592 add     ax, 0C8h ;~ 0613:1F21
cs=0x613;eip=0x001f24; 	X(PUSH(ax));	// 11593 push    ax ;~ 0613:1F24
cs=0x613;eip=0x001f25; 	X(PUSH(cs));	// 11594 push    cs ;~ 0613:1F25
cs=0x613;eip=0x001f26; 	J(CALL(car_car_coll_detect_maybe,0));	// 11595 call    near ptr car_car_coll_detect_maybe ;~ 0613:1F26
cs=0x613;eip=0x001f29; 	T(ADD(sp, 8));	// 11596 add     sp, 8 ;~ 0613:1F29
cs=0x613;eip=0x001f2c; 	T(OR(al, al));	// 11597 or      al, al ;~ 0613:1F2C
cs=0x613;eip=0x001f2e; 	J(JZ(loc_165ea));	// 11598 jz      short loc_165EA ;~ 0613:1F2E
cs=0x613;eip=0x001f30; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11599 mov     bx, [bp+arg_0] ;~ 0613:1F30
cs=0x613;eip=0x001f33; 	X(SUB(*(dw*)(raddr(ds,bx+0x36)), 0x200));	// 11600 sub     word ptr [bx+36h], 200h ;~ 0613:1F33
loc_16648:
	// 5006 
cs=0x613;eip=0x001f38; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 11603 mov     al, [bp+arg_8] ;~ 0613:1F38
cs=0x613;eip=0x001f3b; 	T(CBW);	// 11604 cbw ;~ 0613:1F3B
cs=0x613;eip=0x001f3c; 	J(JMP(loc_16566));	// 11605 jmp     loc_16566 ;~ 0613:1F3C
loc_16650:
	// 5007 
cs=0x613;eip=0x001f40; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_f8))));	// 11611 mov     bx, [bp+var_F8] ;~ 0613:1F40
cs=0x613;eip=0x001f44; 	T(SHL(bx, 1));	// 11612 shl     bx, 1 ;~ 0613:1F44
cs=0x613;eip=0x001f46; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 11613 mov     bx, trackrows[bx] ;~ 0613:1F46
cs=0x613;eip=0x001f4a; 	T(ADD(bx, *(dw*)(raddr(ss,bp+vec_fc))));	// 11614 add     bx, [bp+vec_FC] ;~ 0613:1F4A
cs=0x613;eip=0x001f4e; 	T(LES(di, trackdata19));	// 11615 les     di, trackdata19 ;~ 0613:1F4E
cs=0x613;eip=0x001f52; 	T(MOV(al, *(raddr(es,bx+di))));	// 11616 mov     al, es:[bx+di] ;~ 0613:1F52
cs=0x613;eip=0x001f55; 	T(CBW);	// 11617 cbw ;~ 0613:1F55
cs=0x613;eip=0x001f56; 	T(MOV(si, ax));	// 11618 mov     si, ax ;~ 0613:1F56
cs=0x613;eip=0x001f58; 	T(CMP(si, 0x0FFFF));	// 11619 cmp     si, 0FFFFh ;~ 0613:1F58
cs=0x613;eip=0x001f5b; 	J(JNZ(loc_16670));	// 11620 jnz     short loc_16670 ;~ 0613:1F5B
cs=0x613;eip=0x001f5d; 	J(JMP(loc_16710));	// 11621 jmp     loc_16710 ;~ 0613:1F5D
loc_16670:
	// 5008 
cs=0x613;eip=0x001f60; 	T(CMP(*((&byte_4488e)+si), 0));	// 11625 cmp     byte_4488E[si], 0 ;~ 0613:1F60
cs=0x613;eip=0x001f65; 	J(JZ(loc_1667a));	// 11626 jz      short loc_1667A ;~ 0613:1F65
cs=0x613;eip=0x001f67; 	J(JMP(loc_16710));	// 11627 jmp     loc_16710 ;~ 0613:1F67
loc_1667a:
	// 5009 
cs=0x613;eip=0x001f6a; 	T(MOV(bx, si));	// 11631 mov     bx, si ;~ 0613:1F6A
cs=0x613;eip=0x001f6c; 	T(SHL(bx, 1));	// 11632 shl     bx, 1 ;~ 0613:1F6C
cs=0x613;eip=0x001f6e; 	T(ADD(bx, ax));	// 11633 add     bx, ax ;~ 0613:1F6E
cs=0x613;eip=0x001f70; 	T(SHL(bx, 1));	// 11634 shl     bx, 1 ;~ 0613:1F70
cs=0x613;eip=0x001f72; 	T(LES(di, td10_track_check_rel));	// 11635 les     di, td10_track_check_rel ;~ 0613:1F72
cs=0x613;eip=0x001f76; 	T(MOV(ax, *(dw*)(raddr(es,bx+di))));	// 11636 mov     ax, es:[bx+di] ;~ 0613:1F76
cs=0x613;eip=0x001f79; 	X(MOV(*(dw*)(raddr(ss,bp+vec_18eostateworldcrds)), ax));	// 11637 mov     [bp+vec_18EoStateWorldCrds], ax ;~ 0613:1F79
cs=0x613;eip=0x001f7d; 	T(MOV(di, si));	// 11638 mov     di, si ;~ 0613:1F7D
cs=0x613;eip=0x001f7f; 	T(MOV(ax, di));	// 11639 mov     ax, di ;~ 0613:1F7F
cs=0x613;eip=0x001f81; 	T(SHL(di, 1));	// 11640 shl     di, 1 ;~ 0613:1F81
cs=0x613;eip=0x001f83; 	T(ADD(di, ax));	// 11641 add     di, ax ;~ 0613:1F83
cs=0x613;eip=0x001f85; 	T(SHL(di, 1));	// 11642 shl     di, 1 ;~ 0613:1F85
cs=0x613;eip=0x001f87; 	T(MOV(bx, *(dw*)(((db*)&td10_track_check_rel))));	// 11643 mov     bx, word ptr td10_track_check_rel ;~ 0613:1F87
cs=0x613;eip=0x001f8b; 	T(MOV(ax, *(dw*)(raddr(es,bx+di+2))));	// 11644 mov     ax, es:[bx+di+2] ;~ 0613:1F8B
cs=0x613;eip=0x001f8f; 	X(MOV(*(dw*)(raddr(ss,bp+var_18c)), ax));	// 11645 mov     [bp+var_18C], ax ;~ 0613:1F8F
cs=0x613;eip=0x001f93; 	T(MOV(di, si));	// 11646 mov     di, si ;~ 0613:1F93
cs=0x613;eip=0x001f95; 	T(MOV(ax, di));	// 11647 mov     ax, di ;~ 0613:1F95
cs=0x613;eip=0x001f97; 	T(SHL(di, 1));	// 11648 shl     di, 1 ;~ 0613:1F97
cs=0x613;eip=0x001f99; 	T(ADD(di, ax));	// 11649 add     di, ax ;~ 0613:1F99
cs=0x613;eip=0x001f9b; 	T(SHL(di, 1));	// 11650 shl     di, 1 ;~ 0613:1F9B
cs=0x613;eip=0x001f9d; 	T(MOV(ax, *(dw*)(raddr(es,bx+di+4))));	// 11651 mov     ax, es:[bx+di+4] ;~ 0613:1F9D
cs=0x613;eip=0x001fa1; 	X(MOV(*(dw*)(raddr(ss,bp+var_18a)), ax));	// 11652 mov     [bp+var_18A], ax ;~ 0613:1FA1
cs=0x613;eip=0x001fa5; 	T(ax = bp+vec_18eostateworldcrds);	// 11653 lea     ax, [bp+vec_18EoStateWorldCrds] ;~ 0613:1FA5
cs=0x613;eip=0x001fa9; 	X(PUSH(ax));	// 11654 push    ax ;~ 0613:1FA9
cs=0x613;eip=0x001faa; 	T(MOV(ax, offset(dseg,unk_3bd5a)));	// 11655 mov     ax, offset unk_3BD5A ;~ 0613:1FAA
cs=0x613;eip=0x001fad; 	X(PUSH(ax));	// 11656 push    ax ;~ 0613:1FAD
cs=0x613;eip=0x001fae; 	T(ax = bp+var_11a);	// 11657 lea     ax, [bp+var_11A] ;~ 0613:1FAE
cs=0x613;eip=0x001fb2; 	X(PUSH(ax));	// 11658 push    ax ;~ 0613:1FB2
cs=0x613;eip=0x001fb3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 11659 mov     ax, [bp+arg_2] ;~ 0613:1FB3
cs=0x613;eip=0x001fb6; 	T(ADD(ax, 0x0C8));	// 11660 add     ax, 0C8h ;~ 0613:1FB6
cs=0x613;eip=0x001fb9; 	X(PUSH(ax));	// 11661 push    ax ;~ 0613:1FB9
cs=0x613;eip=0x001fba; 	X(PUSH(cs));	// 11662 push    cs ;~ 0613:1FBA
cs=0x613;eip=0x001fbb; 	J(CALL(car_car_coll_detect_maybe,0));	// 11663 call    near ptr car_car_coll_detect_maybe ;~ 0613:1FBB
cs=0x613;eip=0x001fbe; 	T(ADD(sp, 8));	// 11664 add     sp, 8 ;~ 0613:1FBE
cs=0x613;eip=0x001fc1; 	T(OR(al, al));	// 11665 or      al, al ;~ 0613:1FC1
cs=0x613;eip=0x001fc3; 	J(JZ(loc_16710));	// 11666 jz      short loc_16710 ;~ 0613:1FC3
cs=0x613;eip=0x001fc5; 	X(MOV(*((&byte_4488e)+si), 1));	// 11667 mov     byte_4488E[si], 1 ;~ 0613:1FC5
cs=0x613;eip=0x001fca; 	T(MOV(ax, 0x3C00));	// 11668 mov     ax, 3C00h       ; 15360 = track grid length / 2 ;~ 0613:1FCA
cs=0x613;eip=0x001fcd; 	T(CWD);	// 11669 cwd ;~ 0613:1FCD
cs=0x613;eip=0x001fce; 	X(PUSH(dx));	// 11670 push    dx ;~ 0613:1FCE
cs=0x613;eip=0x001fcf; 	X(PUSH(ax));	// 11671 push    ax ;~ 0613:1FCF
cs=0x613;eip=0x001fd0; 	T(MOV(ax, 0x580));	// 11672 mov     ax, 580h        ; 1408 ;~ 0613:1FD0
cs=0x613;eip=0x001fd3; 	T(CWD);	// 11673 cwd ;~ 0613:1FD3
cs=0x613;eip=0x001fd4; 	X(PUSH(dx));	// 11674 push    dx ;~ 0613:1FD4
cs=0x613;eip=0x001fd5; 	X(PUSH(ax));	// 11675 push    ax ;~ 0613:1FD5
cs=0x613;eip=0x001fd6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11676 mov     bx, [bp+arg_0] ;~ 0613:1FD6
cs=0x613;eip=0x001fd9; 	T(SUB(ax, ax));	// 11677 sub     ax, ax ;~ 0613:1FD9
cs=0x613;eip=0x001fdb; 	X(PUSH(ax));	// 11678 push    ax ;~ 0613:1FDB
cs=0x613;eip=0x001fdc; 	X(PUSH(*(dw*)(raddr(ds,bx+0x2C))));	// 11679 push    word ptr [bx+2Ch] ;~ 0613:1FDC
cs=0x613;eip=0x001fdf; 	J(CALLF(__aflmul,0));	// 11680 call    __aFlmul ;~ 0613:1FDF
cs=0x613;eip=0x001fe4; 	X(PUSH(dx));	// 11681 push    dx ;~ 0613:1FE4
cs=0x613;eip=0x001fe5; 	X(PUSH(ax));	// 11682 push    ax ;~ 0613:1FE5
cs=0x613;eip=0x001fe6; 	J(CALLF(__afuldiv,0));	// 11683 call    __aFuldiv       ; *11/120 ;~ 0613:1FE6
cs=0x613;eip=0x001feb; 	X(PUSH(ax));	// 11684 push    ax ;~ 0613:1FEB
cs=0x613;eip=0x001fec; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11685 mov     bx, [bp+arg_0] ;~ 0613:1FEC
cs=0x613;eip=0x001fef; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x18))));	// 11686 mov     ax, [bx+18h] ;~ 0613:1FEF
cs=0x613;eip=0x001ff2; 	T(NEG(ax));	// 11687 neg     ax ;~ 0613:1FF2
cs=0x613;eip=0x001ff4; 	X(PUSH(ax));	// 11688 push    ax ;~ 0613:1FF4
cs=0x613;eip=0x001ff5; 	T(ax = si+2);	// 11689 lea     ax, [si+2] ;~ 0613:1FF5
cs=0x613;eip=0x001ff8; 	X(PUSH(ax));	// 11690 push    ax ;~ 0613:1FF8
cs=0x613;eip=0x001ff9; 	X(PUSH(cs));	// 11691 push    cs ;~ 0613:1FF9
cs=0x613;eip=0x001ffa; 	J(CALL(state_op_unk,0));	// 11692 call    near ptr state_op_unk ;~ 0613:1FFA
cs=0x613;eip=0x001ffd; 	T(ADD(sp, 6));	// 11693 add     sp, 6 ;~ 0613:1FFD
loc_16710:
	// 5010 
cs=0x613;eip=0x002000; 	T(MOV(al, startcol2));	// 11697 mov     al, startcol2 ;~ 0613:2000
cs=0x613;eip=0x002003; 	T(CBW);	// 11698 cbw ;~ 0613:2003
cs=0x613;eip=0x002004; 	T(MOV(di, ax));	// 11699 mov     di, ax ;~ 0613:2004
cs=0x613;eip=0x002006; 	T(CMP(*(dw*)(raddr(ss,bp+vec_fc)), di));	// 11700 cmp     [bp+vec_FC], di ;~ 0613:2006
cs=0x613;eip=0x00200a; 	J(JZ(loc_1671f));	// 11701 jz      short loc_1671F ;~ 0613:200A
cs=0x613;eip=0x00200c; 	J(JMP(loc_16840));	// 11702 jmp     loc_16840 ;~ 0613:200C
loc_1671f:
	// 5011 
cs=0x613;eip=0x00200f; 	T(MOV(al, startrow2));	// 11706 mov     al, startrow2 ;~ 0613:200F
cs=0x613;eip=0x002012; 	T(CBW);	// 11707 cbw ;~ 0613:2012
cs=0x613;eip=0x002013; 	T(CMP(*(dw*)(raddr(ss,bp+var_f8)), ax));	// 11708 cmp     [bp+var_F8], ax ;~ 0613:2013
cs=0x613;eip=0x002017; 	J(JZ(loc_1672c));	// 11709 jz      short loc_1672C ;~ 0613:2017
cs=0x613;eip=0x002019; 	J(JMP(loc_16840));	// 11710 jmp     loc_16840 ;~ 0613:2019
loc_1672c:
	// 5012 
cs=0x613;eip=0x00201c; 	T(MOV(ax, 0x7E));	// 11714 mov     ax, 7Eh ; '~' ;~ 0613:201C
cs=0x613;eip=0x00201f; 	X(PUSH(ax));	// 11715 push    ax ;~ 0613:201F
cs=0x613;eip=0x002020; 	T(MOV(ax, track_angle));	// 11716 mov     ax, track_angle ;~ 0613:2020
cs=0x613;eip=0x002023; 	T(ADD(ah, 1));	// 11717 add     ah, 1 ;~ 0613:2023
cs=0x613;eip=0x002026; 	X(PUSH(ax));	// 11718 push    ax ;~ 0613:2026
cs=0x613;eip=0x002027; 	J(CALLF(sin_fast,0));	// 11719 call    sin_fast ;~ 0613:2027
cs=0x613;eip=0x00202c; 	T(ADD(sp, 2));	// 11720 add     sp, 2 ;~ 0613:202C
cs=0x613;eip=0x00202f; 	X(PUSH(ax));	// 11721 push    ax ;~ 0613:202F
cs=0x613;eip=0x002030; 	J(CALLF(multiply_and_scale,0));	// 11722 call    multiply_and_scale ;~ 0613:2030
cs=0x613;eip=0x002035; 	T(ADD(sp, 4));	// 11723 add     sp, 4 ;~ 0613:2035
cs=0x613;eip=0x002038; 	T(MOV(bx, di));	// 11724 mov     bx, di ;~ 0613:2038
cs=0x613;eip=0x00203a; 	T(SHL(bx, 1));	// 11725 shl     bx, 1 ;~ 0613:203A
cs=0x613;eip=0x00203c; 	T(MOV(cx, *(dw*)(((db*)trackcenterpos2)+bx)));	// 11726 mov     cx, trackcenterpos2[bx] ;~ 0613:203C
cs=0x613;eip=0x002040; 	T(ADD(cx, ax));	// 11727 add     cx, ax ;~ 0613:2040
cs=0x613;eip=0x002042; 	X(MOV(*(dw*)(raddr(ss,bp+vec_18eostateworldcrds)), cx));	// 11728 mov     [bp+vec_18EoStateWorldCrds], cx ;~ 0613:2042
cs=0x613;eip=0x002046; 	T(MOV(al, hillflag));	// 11729 mov     al, hillFlag ;~ 0613:2046
cs=0x613;eip=0x002049; 	T(CBW);	// 11730 cbw ;~ 0613:2049
cs=0x613;eip=0x00204a; 	T(MOV(bx, ax));	// 11731 mov     bx, ax ;~ 0613:204A
cs=0x613;eip=0x00204c; 	T(SHL(bx, 1));	// 11732 shl     bx, 1 ;~ 0613:204C
cs=0x613;eip=0x00204e; 	T(MOV(ax, *(dw*)(((db*)hillheightconsts)+bx)));	// 11733 mov     ax, hillHeightConsts[bx] ;~ 0613:204E
cs=0x613;eip=0x002052; 	X(MOV(*(dw*)(raddr(ss,bp+var_18c)), ax));	// 11734 mov     [bp+var_18C], ax ;~ 0613:2052
cs=0x613;eip=0x002056; 	T(MOV(ax, 0x7E));	// 11735 mov     ax, 7Eh ; '~' ;~ 0613:2056
cs=0x613;eip=0x002059; 	X(PUSH(ax));	// 11736 push    ax ;~ 0613:2059
cs=0x613;eip=0x00205a; 	T(MOV(ax, track_angle));	// 11737 mov     ax, track_angle ;~ 0613:205A
cs=0x613;eip=0x00205d; 	T(ADD(ah, 1));	// 11738 add     ah, 1 ;~ 0613:205D
cs=0x613;eip=0x002060; 	X(PUSH(ax));	// 11739 push    ax ;~ 0613:2060
cs=0x613;eip=0x002061; 	J(CALLF(cos_fast,0));	// 11740 call    cos_fast ;~ 0613:2061
cs=0x613;eip=0x002066; 	T(ADD(sp, 2));	// 11741 add     sp, 2 ;~ 0613:2066
cs=0x613;eip=0x002069; 	X(PUSH(ax));	// 11742 push    ax ;~ 0613:2069
cs=0x613;eip=0x00206a; 	J(CALLF(multiply_and_scale,0));	// 11743 call    multiply_and_scale ;~ 0613:206A
cs=0x613;eip=0x00206f; 	T(ADD(sp, 4));	// 11744 add     sp, 4 ;~ 0613:206F
cs=0x613;eip=0x002072; 	T(MOV(cx, ax));	// 11745 mov     cx, ax ;~ 0613:2072
cs=0x613;eip=0x002074; 	T(MOV(al, startrow2));	// 11746 mov     al, startrow2 ;~ 0613:2074
cs=0x613;eip=0x002077; 	T(CBW);	// 11747 cbw ;~ 0613:2077
cs=0x613;eip=0x002078; 	T(MOV(bx, ax));	// 11748 mov     bx, ax ;~ 0613:2078
cs=0x613;eip=0x00207a; 	T(SHL(bx, 1));	// 11749 shl     bx, 1 ;~ 0613:207A
cs=0x613;eip=0x00207c; 	T(ADD(cx, *(dw*)(((db*)trackcenterpos)+bx)));	// 11750 add     cx, trackcenterpos[bx] ;~ 0613:207C
cs=0x613;eip=0x002080; 	X(MOV(*(dw*)(raddr(ss,bp+var_18a)), cx));	// 11751 mov     [bp+var_18A], cx ;~ 0613:2080
cs=0x613;eip=0x002084; 	T(ax = bp+vec_18eostateworldcrds);	// 11752 lea     ax, [bp+vec_18EoStateWorldCrds] ;~ 0613:2084
cs=0x613;eip=0x002088; 	X(PUSH(ax));	// 11753 push    ax ;~ 0613:2088
cs=0x613;eip=0x002089; 	T(MOV(ax, offset(dseg,unk_3bd62)));	// 11754 mov     ax, offset unk_3BD62 ;~ 0613:2089
cs=0x613;eip=0x00208c; 	X(PUSH(ax));	// 11755 push    ax ;~ 0613:208C
cs=0x613;eip=0x00208d; 	T(ax = bp+var_11a);	// 11756 lea     ax, [bp+var_11A] ;~ 0613:208D
cs=0x613;eip=0x002091; 	X(PUSH(ax));	// 11757 push    ax ;~ 0613:2091
cs=0x613;eip=0x002092; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 11758 mov     ax, [bp+arg_2] ;~ 0613:2092
cs=0x613;eip=0x002095; 	T(ADD(ax, 0x0C8));	// 11759 add     ax, 0C8h ;~ 0613:2095
cs=0x613;eip=0x002098; 	X(PUSH(ax));	// 11760 push    ax ;~ 0613:2098
cs=0x613;eip=0x002099; 	X(PUSH(cs));	// 11761 push    cs ;~ 0613:2099
cs=0x613;eip=0x00209a; 	J(CALL(car_car_coll_detect_maybe,0));	// 11762 call    near ptr car_car_coll_detect_maybe ;~ 0613:209A
cs=0x613;eip=0x00209d; 	T(ADD(sp, 8));	// 11763 add     sp, 8 ;~ 0613:209D
cs=0x613;eip=0x0020a0; 	T(CBW);	// 11764 cbw ;~ 0613:20A0
cs=0x613;eip=0x0020a1; 	X(MOV(*(dw*)(raddr(ss,bp+var_138)), ax));	// 11765 mov     [bp+var_138], ax ;~ 0613:20A1
cs=0x613;eip=0x0020a5; 	T(OR(ax, ax));	// 11766 or      ax, ax ;~ 0613:20A5
cs=0x613;eip=0x0020a7; 	J(JNZ(loc_16836));	// 11767 jnz     short loc_16836 ;~ 0613:20A7
cs=0x613;eip=0x0020a9; 	T(MOV(ax, 0x7E));	// 11768 mov     ax, 7Eh ; '~' ;~ 0613:20A9
cs=0x613;eip=0x0020ac; 	X(PUSH(ax));	// 11769 push    ax ;~ 0613:20AC
cs=0x613;eip=0x0020ad; 	T(MOV(ax, track_angle));	// 11770 mov     ax, track_angle ;~ 0613:20AD
cs=0x613;eip=0x0020b0; 	T(ADD(ah, 3));	// 11771 add     ah, 3 ;~ 0613:20B0
cs=0x613;eip=0x0020b3; 	X(PUSH(ax));	// 11772 push    ax ;~ 0613:20B3
cs=0x613;eip=0x0020b4; 	J(CALLF(sin_fast,0));	// 11773 call    sin_fast ;~ 0613:20B4
cs=0x613;eip=0x0020b9; 	T(ADD(sp, 2));	// 11774 add     sp, 2 ;~ 0613:20B9
cs=0x613;eip=0x0020bc; 	X(PUSH(ax));	// 11775 push    ax ;~ 0613:20BC
cs=0x613;eip=0x0020bd; 	J(CALLF(multiply_and_scale,0));	// 11776 call    multiply_and_scale ;~ 0613:20BD
cs=0x613;eip=0x0020c2; 	T(ADD(sp, 4));	// 11777 add     sp, 4 ;~ 0613:20C2
cs=0x613;eip=0x0020c5; 	T(MOV(cx, ax));	// 11778 mov     cx, ax ;~ 0613:20C5
cs=0x613;eip=0x0020c7; 	T(MOV(al, startcol2));	// 11779 mov     al, startcol2 ;~ 0613:20C7
cs=0x613;eip=0x0020ca; 	T(CBW);	// 11780 cbw ;~ 0613:20CA
cs=0x613;eip=0x0020cb; 	T(MOV(bx, ax));	// 11781 mov     bx, ax ;~ 0613:20CB
cs=0x613;eip=0x0020cd; 	T(SHL(bx, 1));	// 11782 shl     bx, 1 ;~ 0613:20CD
cs=0x613;eip=0x0020cf; 	T(ADD(cx, *(dw*)(((db*)trackcenterpos2)+bx)));	// 11783 add     cx, trackcenterpos2[bx] ;~ 0613:20CF
cs=0x613;eip=0x0020d3; 	X(MOV(*(dw*)(raddr(ss,bp+vec_18eostateworldcrds)), cx));	// 11784 mov     [bp+vec_18EoStateWorldCrds], cx ;~ 0613:20D3
cs=0x613;eip=0x0020d7; 	T(MOV(ax, 0x7E));	// 11785 mov     ax, 7Eh ; '~' ;~ 0613:20D7
cs=0x613;eip=0x0020da; 	X(PUSH(ax));	// 11786 push    ax ;~ 0613:20DA
cs=0x613;eip=0x0020db; 	T(MOV(ax, track_angle));	// 11787 mov     ax, track_angle ;~ 0613:20DB
cs=0x613;eip=0x0020de; 	T(ADD(ah, 3));	// 11788 add     ah, 3 ;~ 0613:20DE
cs=0x613;eip=0x0020e1; 	X(PUSH(ax));	// 11789 push    ax ;~ 0613:20E1
cs=0x613;eip=0x0020e2; 	J(CALLF(cos_fast,0));	// 11790 call    cos_fast ;~ 0613:20E2
cs=0x613;eip=0x0020e7; 	T(ADD(sp, 2));	// 11791 add     sp, 2 ;~ 0613:20E7
cs=0x613;eip=0x0020ea; 	X(PUSH(ax));	// 11792 push    ax ;~ 0613:20EA
cs=0x613;eip=0x0020eb; 	J(CALLF(multiply_and_scale,0));	// 11793 call    multiply_and_scale ;~ 0613:20EB
cs=0x613;eip=0x0020f0; 	T(ADD(sp, 4));	// 11794 add     sp, 4 ;~ 0613:20F0
cs=0x613;eip=0x0020f3; 	T(MOV(cx, ax));	// 11795 mov     cx, ax ;~ 0613:20F3
cs=0x613;eip=0x0020f5; 	T(MOV(al, startrow2));	// 11796 mov     al, startrow2 ;~ 0613:20F5
cs=0x613;eip=0x0020f8; 	T(CBW);	// 11797 cbw ;~ 0613:20F8
cs=0x613;eip=0x0020f9; 	T(MOV(bx, ax));	// 11798 mov     bx, ax ;~ 0613:20F9
cs=0x613;eip=0x0020fb; 	T(SHL(bx, 1));	// 11799 shl     bx, 1 ;~ 0613:20FB
cs=0x613;eip=0x0020fd; 	T(ADD(cx, *(dw*)(((db*)trackcenterpos)+bx)));	// 11800 add     cx, trackcenterpos[bx] ;~ 0613:20FD
cs=0x613;eip=0x002101; 	X(MOV(*(dw*)(raddr(ss,bp+var_18a)), cx));	// 11801 mov     [bp+var_18A], cx ;~ 0613:2101
cs=0x613;eip=0x002105; 	T(ax = bp+vec_18eostateworldcrds);	// 11802 lea     ax, [bp+vec_18EoStateWorldCrds] ;~ 0613:2105
cs=0x613;eip=0x002109; 	X(PUSH(ax));	// 11803 push    ax ;~ 0613:2109
cs=0x613;eip=0x00210a; 	T(MOV(ax, offset(dseg,unk_3bd62)));	// 11804 mov     ax, offset unk_3BD62 ;~ 0613:210A
cs=0x613;eip=0x00210d; 	X(PUSH(ax));	// 11805 push    ax ;~ 0613:210D
cs=0x613;eip=0x00210e; 	T(ax = bp+var_11a);	// 11806 lea     ax, [bp+var_11A] ;~ 0613:210E
cs=0x613;eip=0x002112; 	X(PUSH(ax));	// 11807 push    ax ;~ 0613:2112
cs=0x613;eip=0x002113; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 11808 mov     ax, [bp+arg_2] ;~ 0613:2113
cs=0x613;eip=0x002116; 	T(ADD(ax, 0x0C8));	// 11809 add     ax, 0C8h ;~ 0613:2116
cs=0x613;eip=0x002119; 	X(PUSH(ax));	// 11810 push    ax ;~ 0613:2119
cs=0x613;eip=0x00211a; 	X(PUSH(cs));	// 11811 push    cs ;~ 0613:211A
cs=0x613;eip=0x00211b; 	J(CALL(car_car_coll_detect_maybe,0));	// 11812 call    near ptr car_car_coll_detect_maybe ;~ 0613:211B
cs=0x613;eip=0x00211e; 	T(ADD(sp, 8));	// 11813 add     sp, 8 ;~ 0613:211E
cs=0x613;eip=0x002121; 	T(CBW);	// 11814 cbw ;~ 0613:2121
cs=0x613;eip=0x002122; 	X(MOV(*(dw*)(raddr(ss,bp+var_138)), ax));	// 11815 mov     [bp+var_138], ax ;~ 0613:2122
loc_16836:
	// 5013 
cs=0x613;eip=0x002126; 	T(CMP(*(dw*)(raddr(ss,bp+var_138)), 0));	// 11818 cmp     [bp+var_138], 0 ;~ 0613:2126
cs=0x613;eip=0x00212b; 	J(JZ(loc_16840));	// 11819 jz      short loc_16840 ;~ 0613:212B
cs=0x613;eip=0x00212d; 	J(JMP(loc_16648));	// 11820 jmp     loc_16648 ;~ 0613:212D
loc_16840:
	// 5014 
cs=0x613;eip=0x002130; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11825 mov     bx, [bp+arg_0] ;~ 0613:2130
cs=0x613;eip=0x002133; 	T(MOV(ax, pstate_lvec1_x));	// 11826 mov     ax, pState_lvec1_x ;~ 0613:2133
cs=0x613;eip=0x002136; 	T(MOV(dx, word_449c0));	// 11827 mov     dx, word_449C0 ;~ 0613:2136
cs=0x613;eip=0x00213a; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 11828 mov     [bx+0], ax ;~ 0613:213A
cs=0x613;eip=0x00213c; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 11829 mov     [bx+2], dx ;~ 0613:213C
cs=0x613;eip=0x00213f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11830 mov     bx, [bp+arg_0] ;~ 0613:213F
cs=0x613;eip=0x002142; 	T(MOV(ax, pstate_lvec1_y));	// 11831 mov     ax, pState_lvec1_y ;~ 0613:2142
cs=0x613;eip=0x002145; 	T(MOV(dx, word_449c8));	// 11832 mov     dx, word_449C8 ;~ 0613:2145
cs=0x613;eip=0x002149; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 11833 mov     [bx+4], ax ;~ 0613:2149
cs=0x613;eip=0x00214c; 	X(MOV(*(dw*)(raddr(ds,bx+6)), dx));	// 11834 mov     [bx+6], dx ;~ 0613:214C
cs=0x613;eip=0x00214f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11835 mov     bx, [bp+arg_0] ;~ 0613:214F
cs=0x613;eip=0x002152; 	T(MOV(ax, pstate_lvec1_z));	// 11836 mov     ax, pState_lvec1_z ;~ 0613:2152
cs=0x613;eip=0x002155; 	T(MOV(dx, word_449cc));	// 11837 mov     dx, word_449CC ;~ 0613:2155
cs=0x613;eip=0x002159; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 11838 mov     [bx+8], ax ;~ 0613:2159
cs=0x613;eip=0x00215c; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 11839 mov     [bx+0Ah], dx ;~ 0613:215C
cs=0x613;eip=0x00215f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11840 mov     bx, [bp+arg_0] ;~ 0613:215F
cs=0x613;eip=0x002162; 	T(MOV(ax, pstate_minusrotate_z_1));	// 11841 mov     ax, pState_minusRotate_z_1 ;~ 0613:2162
cs=0x613;eip=0x002165; 	X(MOV(*(dw*)(raddr(ds,bx+0x1C)), ax));	// 11842 mov     [bx+1Ch], ax ;~ 0613:2165
cs=0x613;eip=0x002168; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11843 mov     bx, [bp+arg_0] ;~ 0613:2168
cs=0x613;eip=0x00216b; 	T(MOV(ax, pstate_minusrotate_x_1));	// 11844 mov     ax, pState_minusRotate_x_1 ;~ 0613:216B
cs=0x613;eip=0x00216e; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A)), ax));	// 11845 mov     [bx+1Ah], ax ;~ 0613:216E
cs=0x613;eip=0x002171; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11846 mov     bx, [bp+arg_0] ;~ 0613:2171
cs=0x613;eip=0x002174; 	T(MOV(ax, pstate_minusrotate_y_1));	// 11847 mov     ax, pState_minusRotate_y_1 ;~ 0613:2174
cs=0x613;eip=0x002177; 	X(MOV(*(dw*)(raddr(ds,bx+0x18)), ax));	// 11848 mov     [bx+18h], ax ;~ 0613:2177
cs=0x613;eip=0x00217a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11849 mov     bx, [bp+arg_0] ;~ 0613:217A
cs=0x613;eip=0x00217d; 	X(MOV(*(raddr(ds,bx+0x0C8)), 0));	// 11850 mov     byte ptr [bx+0C8h], 0 ;~ 0613:217D
loc_16892:
	// 5015 
cs=0x613;eip=0x002182; 	X(POP(si));	// 11854 pop     si ;~ 0613:2182
cs=0x613;eip=0x002183; 	X(POP(di));	// 11855 pop     di ;~ 0613:2183
cs=0x613;eip=0x002184; 	T(MOV(sp, bp));	// 11856 mov     sp, bp ;~ 0613:2184
cs=0x613;eip=0x002186; 	X(POP(bp));	// 11857 pop     bp ;~ 0613:2186
cs=0x613;eip=0x002187; 	J(RETF(0));	// 11858 retf ;~ 0613:2187

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kcode_update_globalpos: 	goto code_update_globalpos;
        case m2c::kcode_update_rotcoords: 	goto code_update_rotcoords;
        case m2c::kloc_14e1e: 	goto loc_14e1e;
        case m2c::kloc_14e24: 	goto loc_14e24;
        case m2c::kloc_14e30: 	goto loc_14e30;
        case m2c::kloc_14e33: 	goto loc_14e33;
        case m2c::kloc_14e8f: 	goto loc_14e8f;
        case m2c::kloc_14ec6: 	goto loc_14ec6;
        case m2c::kloc_14ece: 	goto loc_14ece;
        case m2c::kloc_14f04: 	goto loc_14f04;
        case m2c::kloc_14f09: 	goto loc_14f09;
        case m2c::kloc_14f6e: 	goto loc_14f6e;
        case m2c::kloc_14f76: 	goto loc_14f76;
        case m2c::kloc_14f7c: 	goto loc_14f7c;
        case m2c::kloc_14fa6: 	goto loc_14fa6;
        case m2c::kloc_14fac: 	goto loc_14fac;
        case m2c::kloc_14fec: 	goto loc_14fec;
        case m2c::kloc_14ffa: 	goto loc_14ffa;
        case m2c::kloc_15004: 	goto loc_15004;
        case m2c::kloc_1504a: 	goto loc_1504a;
        case m2c::kloc_15077: 	goto loc_15077;
        case m2c::kloc_15115: 	goto loc_15115;
        case m2c::kloc_15126: 	goto loc_15126;
        case m2c::kloc_15130: 	goto loc_15130;
        case m2c::kloc_1513e: 	goto loc_1513e;
        case m2c::kloc_15142: 	goto loc_15142;
        case m2c::kloc_15163: 	goto loc_15163;
        case m2c::kloc_15192: 	goto loc_15192;
        case m2c::kloc_151a2: 	goto loc_151a2;
        case m2c::kloc_151ba: 	goto loc_151ba;
        case m2c::kloc_151db: 	goto loc_151db;
        case m2c::kloc_151f7: 	goto loc_151f7;
        case m2c::kloc_1520f: 	goto loc_1520f;
        case m2c::kloc_15227: 	goto loc_15227;
        case m2c::kloc_15240: 	goto loc_15240;
        case m2c::kloc_15257: 	goto loc_15257;
        case m2c::kloc_15264: 	goto loc_15264;
        case m2c::kloc_15270: 	goto loc_15270;
        case m2c::kloc_1527c: 	goto loc_1527c;
        case m2c::kloc_152b5: 	goto loc_152b5;
        case m2c::kloc_152d7: 	goto loc_152d7;
        case m2c::kloc_15338: 	goto loc_15338;
        case m2c::kloc_15347: 	goto loc_15347;
        case m2c::kloc_1537c: 	goto loc_1537c;
        case m2c::kloc_15381: 	goto loc_15381;
        case m2c::kloc_15398: 	goto loc_15398;
        case m2c::kloc_153ae: 	goto loc_153ae;
        case m2c::kloc_1540c: 	goto loc_1540c;
        case m2c::kloc_1543a: 	goto loc_1543a;
        case m2c::kloc_1544a: 	goto loc_1544a;
        case m2c::kloc_1545d: 	goto loc_1545d;
        case m2c::kloc_1546e: 	goto loc_1546e;
        case m2c::kloc_154ca: 	goto loc_154ca;
        case m2c::kloc_154f8: 	goto loc_154f8;
        case m2c::kloc_154fa: 	goto loc_154fa;
        case m2c::kloc_15513: 	goto loc_15513;
        case m2c::kloc_15530: 	goto loc_15530;
        case m2c::kloc_1553f: 	goto loc_1553f;
        case m2c::kloc_15599: 	goto loc_15599;
        case m2c::kloc_155a1: 	goto loc_155a1;
        case m2c::kloc_15642: 	goto loc_15642;
        case m2c::kloc_156a3: 	goto loc_156a3;
        case m2c::kloc_156af: 	goto loc_156af;
        case m2c::kloc_156d6: 	goto loc_156d6;
        case m2c::kloc_156ed: 	goto loc_156ed;
        case m2c::kloc_15703: 	goto loc_15703;
        case m2c::kloc_1570a: 	goto loc_1570a;
        case m2c::kloc_15751: 	goto loc_15751;
        case m2c::kloc_1576d: 	goto loc_1576d;
        case m2c::kloc_15789: 	goto loc_15789;
        case m2c::kloc_157a4: 	goto loc_157a4;
        case m2c::kloc_157c0: 	goto loc_157c0;
        case m2c::kloc_157dc: 	goto loc_157dc;
        case m2c::kloc_15879: 	goto loc_15879;
        case m2c::kloc_15882: 	goto loc_15882;
        case m2c::kloc_158da: 	goto loc_158da;
        case m2c::kloc_158fe: 	goto loc_158fe;
        case m2c::kloc_15916: 	goto loc_15916;
        case m2c::kloc_1592e: 	goto loc_1592e;
        case m2c::kloc_15950: 	goto loc_15950;
        case m2c::kloc_1595a: 	goto loc_1595a;
        case m2c::kloc_15964: 	goto loc_15964;
        case m2c::kloc_1596e: 	goto loc_1596e;
        case m2c::kloc_1599e: 	goto loc_1599e;
        case m2c::kloc_159ad: 	goto loc_159ad;
        case m2c::kloc_15a30: 	goto loc_15a30;
        case m2c::kloc_15c04: 	goto loc_15c04;
        case m2c::kloc_15c0f: 	goto loc_15c0f;
        case m2c::kloc_15c27: 	goto loc_15c27;
        case m2c::kloc_15c3f: 	goto loc_15c3f;
        case m2c::kloc_15c75: 	goto loc_15c75;
        case m2c::kloc_15cdf: 	goto loc_15cdf;
        case m2c::kloc_15ce8: 	goto loc_15ce8;
        case m2c::kloc_15cf7: 	goto loc_15cf7;
        case m2c::kloc_15d1a: 	goto loc_15d1a;
        case m2c::kloc_15d2b: 	goto loc_15d2b;
        case m2c::kloc_15d39: 	goto loc_15d39;
        case m2c::kloc_15d43: 	goto loc_15d43;
        case m2c::kloc_15d4e: 	goto loc_15d4e;
        case m2c::kloc_15d66: 	goto loc_15d66;
        case m2c::kloc_15d7e: 	goto loc_15d7e;
        case m2c::kloc_15d94: 	goto loc_15d94;
        case m2c::kloc_15db6: 	goto loc_15db6;
        case m2c::kloc_15dc8: 	goto loc_15dc8;
        case m2c::kloc_15dd1: 	goto loc_15dd1;
        case m2c::kloc_15ddb: 	goto loc_15ddb;
        case m2c::kloc_15de6: 	goto loc_15de6;
        case m2c::kloc_15e0f: 	goto loc_15e0f;
        case m2c::kloc_15e38: 	goto loc_15e38;
        case m2c::kloc_15e85: 	goto loc_15e85;
        case m2c::kloc_15f04: 	goto loc_15f04;
        case m2c::kloc_15f35: 	goto loc_15f35;
        case m2c::kloc_15f66: 	goto loc_15f66;
        case m2c::kloc_15fde: 	goto loc_15fde;
        case m2c::kloc_15fef: 	goto loc_15fef;
        case m2c::kloc_15ffe: 	goto loc_15ffe;
        case m2c::kloc_1600f: 	goto loc_1600f;
        case m2c::kloc_1601b: 	goto loc_1601b;
        case m2c::kloc_1602c: 	goto loc_1602c;
        case m2c::kloc_1603a: 	goto loc_1603a;
        case m2c::kloc_1604b: 	goto loc_1604b;
        case m2c::kloc_16057: 	goto loc_16057;
        case m2c::kloc_160a7: 	goto loc_160a7;
        case m2c::kloc_1611c: 	goto loc_1611c;
        case m2c::kloc_1613e: 	goto loc_1613e;
        case m2c::kloc_16141: 	goto loc_16141;
        case m2c::kloc_16146: 	goto loc_16146;
        case m2c::kloc_1614c: 	goto loc_1614c;
        case m2c::kloc_16169: 	goto loc_16169;
        case m2c::kloc_161ab: 	goto loc_161ab;
        case m2c::kloc_161de: 	goto loc_161de;
        case m2c::kloc_161fc: 	goto loc_161fc;
        case m2c::kloc_161ff: 	goto loc_161ff;
        case m2c::kloc_16204: 	goto loc_16204;
        case m2c::kloc_1620a: 	goto loc_1620a;
        case m2c::kloc_16236: 	goto loc_16236;
        case m2c::kloc_1624a: 	goto loc_1624a;
        case m2c::kloc_1624e: 	goto loc_1624e;
        case m2c::kloc_1625f: 	goto loc_1625f;
        case m2c::kloc_16288: 	goto loc_16288;
        case m2c::kloc_162ee: 	goto loc_162ee;
        case m2c::kloc_162f9: 	goto loc_162f9;
        case m2c::kloc_16309: 	goto loc_16309;
        case m2c::kloc_1632c: 	goto loc_1632c;
        case m2c::kloc_16336: 	goto loc_16336;
        case m2c::kloc_16389: 	goto loc_16389;
        case m2c::kloc_163a4: 	goto loc_163a4;
        case m2c::kloc_163bf: 	goto loc_163bf;
        case m2c::kloc_1641e: 	goto loc_1641e;
        case m2c::kloc_16425: 	goto loc_16425;
        case m2c::kloc_16428: 	goto loc_16428;
        case m2c::kloc_1644c: 	goto loc_1644c;
        case m2c::kloc_1645d: 	goto loc_1645d;
        case m2c::kloc_16472: 	goto loc_16472;
        case m2c::kloc_16487: 	goto loc_16487;
        case m2c::kloc_164b2: 	goto loc_164b2;
        case m2c::kloc_164bc: 	goto loc_164bc;
        case m2c::kloc_164d3: 	goto loc_164d3;
        case m2c::kloc_164ea: 	goto loc_164ea;
        case m2c::kloc_1653e: 	goto loc_1653e;
        case m2c::kloc_16550: 	goto loc_16550;
        case m2c::kloc_16566: 	goto loc_16566;
        case m2c::kloc_16578: 	goto loc_16578;
        case m2c::kloc_165af: 	goto loc_165af;
        case m2c::kloc_165b9: 	goto loc_165b9;
        case m2c::kloc_165c0: 	goto loc_165c0;
        case m2c::kloc_165c8: 	goto loc_165c8;
        case m2c::kloc_165ea: 	goto loc_165ea;
        case m2c::kloc_165f0: 	goto loc_165f0;
        case m2c::kloc_16648: 	goto loc_16648;
        case m2c::kloc_16650: 	goto loc_16650;
        case m2c::kloc_16670: 	goto loc_16670;
        case m2c::kloc_1667a: 	goto loc_1667a;
        case m2c::kloc_16710: 	goto loc_16710;
        case m2c::kloc_1671f: 	goto loc_1671f;
        case m2c::kloc_1672c: 	goto loc_1672c;
        case m2c::kloc_16836: 	goto loc_16836;
        case m2c::kloc_16840: 	goto loc_16840;
        case m2c::kloc_16892: 	goto loc_16892;
        case m2c::kupdate_player_state: 	goto update_player_state;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool init_carstate_from_simd(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    init_carstate_from_simd:
    _begin:
#undef var_e
#define var_e -0x0E
	// 11869 var_E           = word ptr -0Eh ;~ 0613:2188
#undef var_c
#define var_c -0x0C
	// 11870 var_C           = word ptr -0Ch ;~ 0613:2188
#undef var_a
#define var_a -0x0A
	// 11871 var_A           = word ptr -0Ah ;~ 0613:2188
#undef var_8
#define var_8 -8
	// 11872 var_8           = word ptr -8 ;~ 0613:2188
#undef var_6
#define var_6 -6
	// 11873 var_6           = word ptr -6 ;~ 0613:2188
#undef arg_0
#define arg_0 6
	// 11874 arg_0           = word ptr  6 ;~ 0613:2188
#undef arg_2
#define arg_2 8
	// 11875 arg_2           = word ptr  8 ;~ 0613:2188
#undef arg_4
#define arg_4 0x0A
	// 11876 arg_4           = byte ptr  0Ah ;~ 0613:2188
#undef arg_6
#define arg_6 0x0C
	// 11877 arg_6           = word ptr  0Ch ;~ 0613:2188
#undef arg_8
#define arg_8 0x0E
	// 11878 arg_8           = word ptr  0Eh ;~ 0613:2188
#undef arg_a
#define arg_a 0x10
	// 11879 arg_A           = word ptr  10h ;~ 0613:2188
#undef arg_c
#define arg_c 0x12
	// 11880 arg_C           = word ptr  12h ;~ 0613:2188
#undef arg_e
#define arg_e 0x14
	// 11881 arg_E           = word ptr  14h ;~ 0613:2188
#undef arg_10
#define arg_10 0x16
	// 11882 arg_10          = word ptr  16h ;~ 0613:2188
#undef arg_12
#define arg_12 0x18
	// 11883 arg_12          = word ptr  18h ;~ 0613:2188
cs=0x613;eip=0x002188; 	X(PUSH(bp));	// 11885 push    bp ;~ 0613:2188
cs=0x613;eip=0x002189; 	T(MOV(bp, sp));	// 11886 mov     bp, sp ;~ 0613:2189
cs=0x613;eip=0x00218b; 	T(SUB(sp, 0x0E));	// 11887 sub     sp, 0Eh ;~ 0613:218B
cs=0x613;eip=0x00218e; 	X(PUSH(di));	// 11888 push    di ;~ 0613:218E
cs=0x613;eip=0x00218f; 	X(PUSH(si));	// 11889 push    si ;~ 0613:218F
cs=0x613;eip=0x002190; 	T(SUB(si, si));	// 11890 sub     si, si ;~ 0613:2190
cs=0x613;eip=0x002192; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11891 mov     bx, [bp+arg_0] ;~ 0613:2192
cs=0x613;eip=0x002195; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 11892 mov     ax, [bp+arg_6] ;~ 0613:2195
cs=0x613;eip=0x002198; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_8))));	// 11893 mov     dx, [bp+arg_8] ;~ 0613:2198
cs=0x613;eip=0x00219b; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 11894 mov     [bx+0], ax ;~ 0613:219B
cs=0x613;eip=0x00219d; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 11895 mov     [bx+2], dx ;~ 0613:219D
cs=0x613;eip=0x0021a0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11896 mov     bx, [bp+arg_0] ;~ 0613:21A0
cs=0x613;eip=0x0021a3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 11897 mov     ax, [bp+arg_6] ;~ 0613:21A3
cs=0x613;eip=0x0021a6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_8))));	// 11898 mov     dx, [bp+arg_8] ;~ 0613:21A6
cs=0x613;eip=0x0021a9; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 11899 mov     [bx+0Ch], ax ;~ 0613:21A9
cs=0x613;eip=0x0021ac; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), dx));	// 11900 mov     [bx+0Eh], dx ;~ 0613:21AC
cs=0x613;eip=0x0021af; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11901 mov     bx, [bp+arg_0] ;~ 0613:21AF
cs=0x613;eip=0x0021b2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 11902 mov     ax, [bp+arg_A] ;~ 0613:21B2
cs=0x613;eip=0x0021b5; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_c))));	// 11903 mov     dx, [bp+arg_C] ;~ 0613:21B5
cs=0x613;eip=0x0021b8; 	T(ADD(ax, 0x200));	// 11904 add     ax, 200h ;~ 0613:21B8
cs=0x613;eip=0x0021bb; 	T(ADC(dx, si));	// 11905 adc     dx, si ;~ 0613:21BB
cs=0x613;eip=0x0021bd; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 11906 mov     [bx+4], ax ;~ 0613:21BD
cs=0x613;eip=0x0021c0; 	X(MOV(*(dw*)(raddr(ds,bx+6)), dx));	// 11907 mov     [bx+6], dx ;~ 0613:21C0
cs=0x613;eip=0x0021c3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11908 mov     bx, [bp+arg_0] ;~ 0613:21C3
cs=0x613;eip=0x0021c6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 11909 mov     ax, [bp+arg_A] ;~ 0613:21C6
cs=0x613;eip=0x0021c9; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_c))));	// 11910 mov     dx, [bp+arg_C] ;~ 0613:21C9
cs=0x613;eip=0x0021cc; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), ax));	// 11911 mov     [bx+10h], ax ;~ 0613:21CC
cs=0x613;eip=0x0021cf; 	X(MOV(*(dw*)(raddr(ds,bx+0x12)), dx));	// 11912 mov     [bx+12h], dx ;~ 0613:21CF
cs=0x613;eip=0x0021d2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11913 mov     bx, [bp+arg_0] ;~ 0613:21D2
cs=0x613;eip=0x0021d5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_e))));	// 11914 mov     ax, [bp+arg_E] ;~ 0613:21D5
cs=0x613;eip=0x0021d8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_10))));	// 11915 mov     dx, [bp+arg_10] ;~ 0613:21D8
cs=0x613;eip=0x0021db; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 11916 mov     [bx+8], ax ;~ 0613:21DB
cs=0x613;eip=0x0021de; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 11917 mov     [bx+0Ah], dx ;~ 0613:21DE
cs=0x613;eip=0x0021e1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11918 mov     bx, [bp+arg_0] ;~ 0613:21E1
cs=0x613;eip=0x0021e4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_e))));	// 11919 mov     ax, [bp+arg_E] ;~ 0613:21E4
cs=0x613;eip=0x0021e7; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_10))));	// 11920 mov     dx, [bp+arg_10] ;~ 0613:21E7
cs=0x613;eip=0x0021ea; 	X(MOV(*(dw*)(raddr(ds,bx+0x14)), ax));	// 11921 mov     [bx+14h], ax ;~ 0613:21EA
cs=0x613;eip=0x0021ed; 	X(MOV(*(dw*)(raddr(ds,bx+0x16)), dx));	// 11922 mov     [bx+16h], dx ;~ 0613:21ED
cs=0x613;eip=0x0021f0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11923 mov     bx, [bp+arg_0] ;~ 0613:21F0
cs=0x613;eip=0x0021f3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_12))));	// 11924 mov     ax, [bp+arg_12] ;~ 0613:21F3
cs=0x613;eip=0x0021f6; 	X(MOV(*(dw*)(raddr(ds,bx+0x18)), ax));	// 11925 mov     [bx+18h], ax ;~ 0613:21F6
cs=0x613;eip=0x0021f9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11926 mov     bx, [bp+arg_0] ;~ 0613:21F9
cs=0x613;eip=0x0021fc; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A)), si));	// 11927 mov     [bx+1Ah], si ;~ 0613:21FC
cs=0x613;eip=0x0021ff; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11928 mov     bx, [bp+arg_0] ;~ 0613:21FF
cs=0x613;eip=0x002202; 	X(MOV(*(dw*)(raddr(ds,bx+0x1C)), si));	// 11929 mov     [bx+1Ch], si ;~ 0613:2202
cs=0x613;eip=0x002205; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11930 mov     bx, [bp+arg_0] ;~ 0613:2205
cs=0x613;eip=0x002208; 	X(MOV(*(dw*)(raddr(ds,bx+0x36)), si));	// 11931 mov     [bx+36h], si ;~ 0613:2208
cs=0x613;eip=0x00220b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11932 mov     bx, [bp+arg_0] ;~ 0613:220B
cs=0x613;eip=0x00220e; 	X(MOV(*(dw*)(raddr(ds,bx+0x1E)), si));	// 11933 mov     [bx+1Eh], si ;~ 0613:220E
cs=0x613;eip=0x002211; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11934 mov     bx, [bp+arg_0] ;~ 0613:2211
cs=0x613;eip=0x002214; 	X(MOV(*(dw*)(raddr(ds,bx+0x20)), si));	// 11935 mov     [bx+20h], si ;~ 0613:2214
cs=0x613;eip=0x002217; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11936 mov     bx, [bp+arg_0] ;~ 0613:2217
cs=0x613;eip=0x00221a; 	T(SUB(al, al));	// 11937 sub     al, al ;~ 0613:221A
cs=0x613;eip=0x00221c; 	X(MOV(*(raddr(ds,bx+0x0BC)), al));	// 11938 mov     [bx+0BCh], al ;~ 0613:221C
cs=0x613;eip=0x002220; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11939 mov     bx, [bp+arg_0] ;~ 0613:2220
cs=0x613;eip=0x002223; 	X(MOV(*(raddr(ds,bx+0x0BD)), al));	// 11940 mov     [bx+0BDh], al ;~ 0613:2223
cs=0x613;eip=0x002227; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 11941 mov     bx, [bp+arg_2] ;~ 0613:2227
cs=0x613;eip=0x00222a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 11942 mov     ax, [bx+6] ;~ 0613:222A
cs=0x613;eip=0x00222d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11943 mov     bx, [bp+arg_0] ;~ 0613:222D
cs=0x613;eip=0x002230; 	X(MOV(*(dw*)(raddr(ds,bx+0x22)), ax));	// 11944 mov     [bx+22h], ax ;~ 0613:2230
cs=0x613;eip=0x002233; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11945 mov     bx, [bp+arg_0] ;~ 0613:2233
cs=0x613;eip=0x002236; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 11946 mov     ax, [bx+22h] ;~ 0613:2236
cs=0x613;eip=0x002239; 	X(MOV(*(dw*)(raddr(ds,bx+0x24)), ax));	// 11947 mov     [bx+24h], ax ;~ 0613:2239
cs=0x613;eip=0x00223c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11948 mov     bx, [bp+arg_0] ;~ 0613:223C
cs=0x613;eip=0x00223f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 11949 mov     ax, [bx+22h] ;~ 0613:223F
cs=0x613;eip=0x002242; 	X(MOV(*(dw*)(raddr(ds,bx+0x26)), ax));	// 11950 mov     [bx+26h], ax ;~ 0613:2242
cs=0x613;eip=0x002245; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11951 mov     bx, [bp+arg_0] ;~ 0613:2245
cs=0x613;eip=0x002248; 	X(MOV(*(raddr(ds,bx+0x0BE)), 1));	// 11952 mov     byte ptr [bx+0BEh], 1 ;~ 0613:2248
cs=0x613;eip=0x00224d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11953 mov     bx, [bp+arg_0] ;~ 0613:224D
cs=0x613;eip=0x002250; 	X(MOV(*(dw*)(raddr(ds,bx+0x28)), si));	// 11954 mov     [bx+28h], si ;~ 0613:2250
cs=0x613;eip=0x002253; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11955 mov     bx, [bp+arg_0] ;~ 0613:2253
cs=0x613;eip=0x002256; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), si));	// 11956 mov     [bx+2Ah], si ;~ 0613:2256
cs=0x613;eip=0x002259; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11957 mov     bx, [bp+arg_0] ;~ 0613:2259
cs=0x613;eip=0x00225c; 	X(MOV(*(dw*)(raddr(ds,bx+0x2C)), si));	// 11958 mov     [bx+2Ch], si ;~ 0613:225C
cs=0x613;eip=0x00225f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11959 mov     bx, [bp+arg_0] ;~ 0613:225F
cs=0x613;eip=0x002262; 	X(MOV(*(dw*)(raddr(ds,bx+0x2E)), si));	// 11960 mov     [bx+2Eh], si ;~ 0613:2262
cs=0x613;eip=0x002265; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 11961 mov     bx, [bp+arg_2] ;~ 0613:2265
cs=0x613;eip=0x002268; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 11962 mov     ax, [bx+10h] ;~ 0613:2268
cs=0x613;eip=0x00226b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11963 mov     bx, [bp+arg_0] ;~ 0613:226B
cs=0x613;eip=0x00226e; 	X(MOV(*(dw*)(raddr(ds,bx+0x30)), ax));	// 11964 mov     [bx+30h], ax ;~ 0613:226E
cs=0x613;eip=0x002271; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11965 mov     bx, [bp+arg_0] ;~ 0613:2271
cs=0x613;eip=0x002274; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x30))));	// 11966 mov     ax, [bx+30h] ;~ 0613:2274
cs=0x613;eip=0x002277; 	T(MOV(cl, 8));	// 11967 mov     cl, 8 ;~ 0613:2277
cs=0x613;eip=0x002279; 	T(SHR(ax, cl));	// 11968 shr     ax, cl ;~ 0613:2279
cs=0x613;eip=0x00227b; 	X(MOV(*(dw*)(raddr(ds,bx+0x32)), ax));	// 11969 mov     [bx+32h], ax ;~ 0613:227B
cs=0x613;eip=0x00227e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 11970 mov     bx, [bp+arg_2] ;~ 0613:227E
cs=0x613;eip=0x002281; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 11971 mov     ax, [bx+20h] ;~ 0613:2281
cs=0x613;eip=0x002284; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11972 mov     bx, [bp+arg_0] ;~ 0613:2284
cs=0x613;eip=0x002287; 	X(MOV(*(dw*)(raddr(ds,bx+0x34)), ax));	// 11973 mov     [bx+34h], ax ;~ 0613:2287
cs=0x613;eip=0x00228a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11974 mov     bx, [bp+arg_0] ;~ 0613:228A
cs=0x613;eip=0x00228d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x34))));	// 11975 mov     ax, [bx+34h] ;~ 0613:228D
cs=0x613;eip=0x002290; 	X(MOV(*(dw*)(raddr(ds,bx+0x3A)), ax));	// 11976 mov     [bx+3Ah], ax ;~ 0613:2290
cs=0x613;eip=0x002293; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 11977 mov     bx, [bp+arg_2] ;~ 0613:2293
cs=0x613;eip=0x002296; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 11978 mov     ax, [bx+22h] ;~ 0613:2296
cs=0x613;eip=0x002299; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11979 mov     bx, [bp+arg_0] ;~ 0613:2299
cs=0x613;eip=0x00229c; 	X(MOV(*(dw*)(raddr(ds,bx+0x38)), ax));	// 11980 mov     [bx+38h], ax ;~ 0613:229C
cs=0x613;eip=0x00229f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11981 mov     bx, [bp+arg_0] ;~ 0613:229F
cs=0x613;eip=0x0022a2; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x38))));	// 11982 mov     ax, [bx+38h] ;~ 0613:22A2
cs=0x613;eip=0x0022a5; 	X(MOV(*(dw*)(raddr(ds,bx+0x3C)), ax));	// 11983 mov     [bx+3Ch], ax ;~ 0613:22A5
cs=0x613;eip=0x0022a8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11984 mov     bx, [bp+arg_0] ;~ 0613:22A8
cs=0x613;eip=0x0022ab; 	X(MOV(*(dw*)(raddr(ds,bx+0x3E)), si));	// 11985 mov     [bx+3Eh], si ;~ 0613:22AB
cs=0x613;eip=0x0022ae; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11986 mov     bx, [bp+arg_0] ;~ 0613:22AE
cs=0x613;eip=0x0022b1; 	X(MOV(*(dw*)(raddr(ds,bx+0x40)), si));	// 11987 mov     [bx+40h], si ;~ 0613:22B1
cs=0x613;eip=0x0022b4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11988 mov     bx, [bp+arg_0] ;~ 0613:22B4
cs=0x613;eip=0x0022b7; 	X(MOV(*(dw*)(raddr(ds,bx+0x42)), si));	// 11989 mov     [bx+42h], si ;~ 0613:22B7
cs=0x613;eip=0x0022ba; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11990 mov     bx, [bp+arg_0] ;~ 0613:22BA
cs=0x613;eip=0x0022bd; 	X(MOV(*(dw*)(raddr(ds,bx+0x48)), si));	// 11991 mov     [bx+48h], si ;~ 0613:22BD
cs=0x613;eip=0x0022c0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11992 mov     bx, [bp+arg_0] ;~ 0613:22C0
cs=0x613;eip=0x0022c3; 	X(MOV(*(dw*)(raddr(ds,bx+0x4A)), si));	// 11993 mov     [bx+4Ah], si ;~ 0613:22C3
cs=0x613;eip=0x0022c6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11994 mov     bx, [bp+arg_0] ;~ 0613:22C6
cs=0x613;eip=0x0022c9; 	X(MOV(*(raddr(ds,bx+0x0BF)), 2));	// 11995 mov     byte ptr [bx+0BFh], 2 ;~ 0613:22C9
cs=0x613;eip=0x0022ce; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11996 mov     bx, [bp+arg_0] ;~ 0613:22CE
cs=0x613;eip=0x0022d1; 	X(MOV(*(raddr(ds,bx+0x0C0)), 2));	// 11997 mov     byte ptr [bx+0C0h], 2 ;~ 0613:22D1
cs=0x613;eip=0x0022d6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11998 mov     bx, [bp+arg_0] ;~ 0613:22D6
cs=0x613;eip=0x0022d9; 	X(MOV(*(raddr(ds,bx+0x0C1)), 4));	// 11999 mov     byte ptr [bx+0C1h], 4 ;~ 0613:22D9
cs=0x613;eip=0x0022de; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12000 mov     bx, [bp+arg_0] ;~ 0613:22DE
cs=0x613;eip=0x0022e1; 	X(MOV(*(dw*)(raddr(ds,bx+0x44)), si));	// 12001 mov     [bx+44h], si ;~ 0613:22E1
cs=0x613;eip=0x0022e4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12002 mov     bx, [bp+arg_0] ;~ 0613:22E4
cs=0x613;eip=0x0022e7; 	X(MOV(*(dw*)(raddr(ds,bx+0x46)), 0x3E8));	// 12003 mov     word ptr [bx+46h], 3E8h ;~ 0613:22E7
cs=0x613;eip=0x0022ec; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 12004 mov     ax, [bp+arg_6] ;~ 0613:22EC
cs=0x613;eip=0x0022ef; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_8))));	// 12005 mov     dx, [bp+arg_8] ;~ 0613:22EF
cs=0x613;eip=0x0022f2; 	T(MOV(cl, 6));	// 12006 mov     cl, 6 ;~ 0613:22F2
loc_16a04:
	// 5016 
cs=0x613;eip=0x0022f4; 	T(SAR(dx, 1));	// 12009 sar     dx, 1 ;~ 0613:22F4
cs=0x613;eip=0x0022f6; 	T(RCR(ax, 1));	// 12010 rcr     ax, 1 ;~ 0613:22F6
cs=0x613;eip=0x0022f8; 	T(DEC(cl));	// 12011 dec     cl ;~ 0613:22F8
cs=0x613;eip=0x0022fa; 	J(JNZ(loc_16a04));	// 12012 jnz     short loc_16A04 ;~ 0613:22FA
cs=0x613;eip=0x0022fc; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 12013 mov     [bp+var_A], ax ;~ 0613:22FC
cs=0x613;eip=0x0022ff; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 12014 mov     ax, [bp+arg_A] ;~ 0613:22FF
cs=0x613;eip=0x002302; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_c))));	// 12015 mov     dx, [bp+arg_C] ;~ 0613:2302
cs=0x613;eip=0x002305; 	T(MOV(cl, 6));	// 12016 mov     cl, 6 ;~ 0613:2305
loc_16a17:
	// 5017 
cs=0x613;eip=0x002307; 	T(SAR(dx, 1));	// 12019 sar     dx, 1 ;~ 0613:2307
cs=0x613;eip=0x002309; 	T(RCR(ax, 1));	// 12020 rcr     ax, 1 ;~ 0613:2309
cs=0x613;eip=0x00230b; 	T(DEC(cl));	// 12021 dec     cl ;~ 0613:230B
cs=0x613;eip=0x00230d; 	J(JNZ(loc_16a17));	// 12022 jnz     short loc_16A17 ;~ 0613:230D
cs=0x613;eip=0x00230f; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12023 mov     [bp+var_8], ax ;~ 0613:230F
cs=0x613;eip=0x002312; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_e))));	// 12024 mov     ax, [bp+arg_E] ;~ 0613:2312
cs=0x613;eip=0x002315; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_10))));	// 12025 mov     dx, [bp+arg_10] ;~ 0613:2315
cs=0x613;eip=0x002318; 	T(MOV(cl, 6));	// 12026 mov     cl, 6 ;~ 0613:2318
loc_16a2a:
	// 5018 
cs=0x613;eip=0x00231a; 	T(SAR(dx, 1));	// 12029 sar     dx, 1 ;~ 0613:231A
cs=0x613;eip=0x00231c; 	T(RCR(ax, 1));	// 12030 rcr     ax, 1 ;~ 0613:231C
cs=0x613;eip=0x00231e; 	T(DEC(cl));	// 12031 dec     cl ;~ 0613:231E
cs=0x613;eip=0x002320; 	J(JNZ(loc_16a2a));	// 12032 jnz     short loc_16A2A ;~ 0613:2320
cs=0x613;eip=0x002322; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 12033 mov     [bp+var_6], ax ;~ 0613:2322
cs=0x613;eip=0x002325; 	T(SUB(di, di));	// 12034 sub     di, di ;~ 0613:2325
loc_16a37:
	// 5019 
cs=0x613;eip=0x002327; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12037 mov     bx, [bp+arg_0] ;~ 0613:2327
cs=0x613;eip=0x00232a; 	X(MOV(*(raddr(ds,bx+di+0x0C2)), 1));	// 12038 mov     byte ptr [bx+di+0C2h], 1 ; initial surface = tarmac ;~ 0613:232A
cs=0x613;eip=0x00232f; 	T(MOV(ax, di));	// 12039 mov     ax, di ;~ 0613:232F
cs=0x613;eip=0x002331; 	T(SHL(ax, 1));	// 12040 shl     ax, 1 ;~ 0613:2331
cs=0x613;eip=0x002333; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 12041 mov     [bp+var_C], ax ;~ 0613:2333
cs=0x613;eip=0x002336; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12042 mov     bx, [bp+arg_0] ;~ 0613:2336
cs=0x613;eip=0x002339; 	T(ADD(bx, ax));	// 12043 add     bx, ax ;~ 0613:2339
cs=0x613;eip=0x00233b; 	X(MOV(*(dw*)(raddr(ds,bx+0x4C)), si));	// 12044 mov     [bx+4Ch], si    ; .rc1 ;~ 0613:233B
cs=0x613;eip=0x00233e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12045 mov     bx, [bp+arg_0] ;~ 0613:233E
cs=0x613;eip=0x002341; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_c))));	// 12046 add     bx, [bp+var_C] ;~ 0613:2341
cs=0x613;eip=0x002344; 	X(MOV(*(dw*)(raddr(ds,bx+0x54)), si));	// 12047 mov     [bx+54h], si    ; rc2 ;~ 0613:2344
cs=0x613;eip=0x002347; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12048 mov     bx, [bp+arg_0] ;~ 0613:2347
cs=0x613;eip=0x00234a; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_c))));	// 12049 add     bx, [bp+var_C] ;~ 0613:234A
cs=0x613;eip=0x00234d; 	X(MOV(*(dw*)(raddr(ds,bx+0x5C)), si));	// 12050 mov     [bx+5Ch], si    ; rc3 ;~ 0613:234D
cs=0x613;eip=0x002350; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12051 mov     bx, [bp+arg_0] ;~ 0613:2350
cs=0x613;eip=0x002353; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_c))));	// 12052 add     bx, [bp+var_C] ;~ 0613:2353
cs=0x613;eip=0x002356; 	X(MOV(*(dw*)(raddr(ds,bx+0x64)), si));	// 12053 mov     [bx+64h], si    ; rc4 ;~ 0613:2356
cs=0x613;eip=0x002359; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12054 mov     bx, [bp+arg_0] ;~ 0613:2359
cs=0x613;eip=0x00235c; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_c))));	// 12055 add     bx, [bp+var_C] ;~ 0613:235C
cs=0x613;eip=0x00235f; 	X(MOV(*(dw*)(raddr(ds,bx+0x6C)), si));	// 12056 mov     [bx+6Ch], si    ; rc5 ;~ 0613:235F
cs=0x613;eip=0x002362; 	T(MOV(ax, di));	// 12057 mov     ax, di ;~ 0613:2362
cs=0x613;eip=0x002364; 	T(MOV(cx, ax));	// 12058 mov     cx, ax ;~ 0613:2364
cs=0x613;eip=0x002366; 	T(SHL(ax, 1));	// 12059 shl     ax, 1 ;~ 0613:2366
cs=0x613;eip=0x002368; 	T(ADD(ax, cx));	// 12060 add     ax, cx ;~ 0613:2368
cs=0x613;eip=0x00236a; 	T(SHL(ax, 1));	// 12061 shl     ax, 1           ; *6 ;~ 0613:236A
cs=0x613;eip=0x00236c; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 12062 mov     [bp+var_E], ax ;~ 0613:236C
cs=0x613;eip=0x00236f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12063 mov     bx, [bp+arg_0] ;~ 0613:236F
cs=0x613;eip=0x002372; 	T(ADD(bx, ax));	// 12064 add     bx, ax ;~ 0613:2372
cs=0x613;eip=0x002374; 	X(PUSH(si));	// 12065 push    si ;~ 0613:2374
cs=0x613;eip=0x002375; 	X(PUSH(di));	// 12066 push    di ;~ 0613:2375
cs=0x613;eip=0x002376; 	T(di = bx+0x74);	// 12067 lea     di, [bx+74h]    ; ax is added into the offset ;~ 0613:2376
cs=0x613;eip=0x002379; 	T(si = bp+var_a);	// 12068 lea     si, [bp+var_A] ;~ 0613:2379
cs=0x613;eip=0x00237c; 	X(PUSH(ds));	// 12069 push    ds ;~ 0613:237C
cs=0x613;eip=0x00237d; 	X(POP(es));	// 12070 pop     es ;~ 0613:237D
cs=0x613;eip=0x00237e; 	X(MOVSW);	// 12072 movsw ;~ 0613:237E
cs=0x613;eip=0x00237f; 	X(MOVSW);	// 12073 movsw ;~ 0613:237F
cs=0x613;eip=0x002380; 	X(MOVSW);	// 12074 movsw ;~ 0613:2380
cs=0x613;eip=0x002381; 	X(POP(di));	// 12075 pop     di ;~ 0613:2381
cs=0x613;eip=0x002382; 	X(POP(si));	// 12076 pop     si ;~ 0613:2382
cs=0x613;eip=0x002383; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12077 mov     bx, [bp+arg_0] ;~ 0613:2383
cs=0x613;eip=0x002386; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_e))));	// 12078 add     bx, [bp+var_E] ;~ 0613:2386
cs=0x613;eip=0x002389; 	X(PUSH(si));	// 12079 push    si ;~ 0613:2389
cs=0x613;eip=0x00238a; 	X(PUSH(di));	// 12080 push    di ;~ 0613:238A
cs=0x613;eip=0x00238b; 	T(di = bx+0x8C);	// 12081 lea     di, [bx+8Ch] ;~ 0613:238B
cs=0x613;eip=0x00238f; 	T(si = bp+var_a);	// 12082 lea     si, [bp+var_A]  ; moves x, y and z. ;~ 0613:238F
cs=0x613;eip=0x002392; 	X(MOVSW);	// 12083 movsw ;~ 0613:2392
cs=0x613;eip=0x002393; 	X(MOVSW);	// 12084 movsw ;~ 0613:2393
cs=0x613;eip=0x002394; 	X(MOVSW);	// 12085 movsw ;~ 0613:2394
cs=0x613;eip=0x002395; 	X(POP(di));	// 12086 pop     di ;~ 0613:2395
cs=0x613;eip=0x002396; 	X(POP(si));	// 12087 pop     si ;~ 0613:2396
cs=0x613;eip=0x002397; 	T(INC(di));	// 12088 inc     di ;~ 0613:2397
cs=0x613;eip=0x002398; 	T(CMP(di, 4));	// 12089 cmp     di, 4 ;~ 0613:2398
cs=0x613;eip=0x00239b; 	J(JL(loc_16a37));	// 12090 jl      short loc_16A37 ;~ 0613:239B
cs=0x613;eip=0x00239d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12091 mov     bx, [bp+arg_0] ;~ 0613:239D
cs=0x613;eip=0x0023a0; 	T(MOV(ax, si));	// 12092 mov     ax, si ;~ 0613:23A0
cs=0x613;eip=0x0023a2; 	X(MOV(*(raddr(ds,bx+0x0C6)), al));	// 12093 mov     [bx+0C6h], al ;~ 0613:23A2
cs=0x613;eip=0x0023a6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12094 mov     bx, [bp+arg_0] ;~ 0613:23A6
cs=0x613;eip=0x0023a9; 	X(MOV(*(raddr(ds,bx+0x0C7)), al));	// 12095 mov     [bx+0C7h], al ;~ 0613:23A9
cs=0x613;eip=0x0023ad; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12096 mov     bx, [bp+arg_0] ;~ 0613:23AD
cs=0x613;eip=0x0023b0; 	X(MOV(*(raddr(ds,bx+0x0C8)), al));	// 12097 mov     [bx+0C8h], al ;~ 0613:23B0
cs=0x613;eip=0x0023b4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12098 mov     bx, [bp+arg_0] ;~ 0613:23B4
cs=0x613;eip=0x0023b7; 	X(MOV(*(raddr(ds,bx+0x0C9)), al));	// 12099 mov     [bx+0C9h], al ;~ 0613:23B7
cs=0x613;eip=0x0023bb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12100 mov     bx, [bp+arg_0] ;~ 0613:23BB
cs=0x613;eip=0x0023be; 	X(MOV(*(raddr(ds,bx+0x0CA)), al));	// 12101 mov     [bx+0CAh], al ;~ 0613:23BE
cs=0x613;eip=0x0023c2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12102 mov     bx, [bp+arg_0] ;~ 0613:23C2
cs=0x613;eip=0x0023c5; 	X(MOV(*(raddr(ds,bx+0x0CB)), al));	// 12103 mov     [bx+0CBh], al ;~ 0613:23C5
cs=0x613;eip=0x0023c9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12104 mov     bx, [bp+arg_0] ;~ 0613:23C9
cs=0x613;eip=0x0023cc; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 12105 mov     al, [bp+arg_4] ;~ 0613:23CC
cs=0x613;eip=0x0023cf; 	X(MOV(*(raddr(ds,bx+0x0CC)), al));	// 12106 mov     [bx+0CCh], al ;~ 0613:23CF
cs=0x613;eip=0x0023d3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12107 mov     bx, [bp+arg_0] ;~ 0613:23D3
cs=0x613;eip=0x0023d6; 	T(MOV(ax, si));	// 12108 mov     ax, si ;~ 0613:23D6
cs=0x613;eip=0x0023d8; 	X(MOV(*(raddr(ds,bx+0x0CD)), al));	// 12109 mov     [bx+0CDh], al ;~ 0613:23D8
cs=0x613;eip=0x0023dc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12110 mov     bx, [bp+arg_0] ;~ 0613:23DC
cs=0x613;eip=0x0023df; 	X(MOV(*(raddr(ds,bx+0x0CE)), al));	// 12111 mov     [bx+0CEh], al ;~ 0613:23DF
cs=0x613;eip=0x0023e3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12112 mov     bx, [bp+arg_0] ;~ 0613:23E3
cs=0x613;eip=0x0023e6; 	X(MOV(*(raddr(ds,bx+0x0CF)), 1));	// 12113 mov     byte ptr [bx+0CFh], 1 ;~ 0613:23E6
cs=0x613;eip=0x0023eb; 	X(POP(si));	// 12114 pop     si ;~ 0613:23EB
cs=0x613;eip=0x0023ec; 	X(POP(di));	// 12115 pop     di ;~ 0613:23EC
cs=0x613;eip=0x0023ed; 	T(MOV(sp, bp));	// 12116 mov     sp, bp ;~ 0613:23ED
cs=0x613;eip=0x0023ef; 	X(POP(bp));	// 12117 pop     bp ;~ 0613:23EF
cs=0x613;eip=0x0023f0; 	J(RETF(0));	// 12118 retf ;~ 0613:23F0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kinit_carstate_from_simd: 	goto init_carstate_from_simd;
        case m2c::kloc_16a04: 	goto loc_16a04;
        case m2c::kloc_16a17: 	goto loc_16a17;
        case m2c::kloc_16a2a: 	goto loc_16a2a;
        case m2c::kloc_16a37: 	goto loc_16a37;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool init_game_state(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    init_game_state:
    _begin:
#undef var_a
#define var_a -0x0A
	// 12131 var_A           = word ptr -0Ah ;~ 0613:23F2
#undef var_8
#define var_8 -8
	// 12132 var_8           = word ptr -8 ;~ 0613:23F2
#undef var_2
#define var_2 -2
	// 12133 var_2           = word ptr -2 ;~ 0613:23F2
#undef arg_0
#define arg_0 6
	// 12134 arg_0           = word ptr  6 ;~ 0613:23F2
cs=0x613;eip=0x0023f2; 	X(PUSH(bp));	// 12136 push    bp ;~ 0613:23F2
cs=0x613;eip=0x0023f3; 	T(MOV(bp, sp));	// 12137 mov     bp, sp ;~ 0613:23F3
cs=0x613;eip=0x0023f5; 	T(SUB(sp, 0x0A));	// 12138 sub     sp, 0Ah ;~ 0613:23F5
cs=0x613;eip=0x0023f8; 	X(PUSH(di));	// 12139 push    di ;~ 0613:23F8
cs=0x613;eip=0x0023f9; 	X(PUSH(si));	// 12140 push    si ;~ 0613:23F9
cs=0x613;eip=0x0023fa; 	T(SUB(si, si));	// 12141 sub     si, si ;~ 0613:23FA
cs=0x613;eip=0x0023fc; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FFFF));	// 12142 cmp     [bp+arg_0], 0FFFFh ;~ 0613:23FC
cs=0x613;eip=0x002400; 	J(JNZ(loc_16b4d));	// 12143 jnz     short loc_16B4D ;~ 0613:2400
cs=0x613;eip=0x002402; 	X(MOV(elapsed_time1, si));	// 12144 mov     elapsed_time1, si ;~ 0613:2402
cs=0x613;eip=0x002406; 	T(SUB(di, di));	// 12145 sub     di, di ;~ 0613:2406
loc_16b18:
	// 5020 
cs=0x613;eip=0x002408; 	T(MOV(ax, 1120));	// 12148 mov     ax, 1120        ; sizeof(struct GAMESTATE) ;~ 0613:2408
cs=0x613;eip=0x00240b; 	T(CWD);	// 12149 cwd ;~ 0613:240B
cs=0x613;eip=0x00240c; 	X(PUSH(dx));	// 12150 push    dx ;~ 0613:240C
cs=0x613;eip=0x00240d; 	X(PUSH(ax));	// 12151 push    ax ;~ 0613:240D
cs=0x613;eip=0x00240e; 	T(MOV(ax, di));	// 12152 mov     ax, di ;~ 0613:240E
cs=0x613;eip=0x002410; 	T(CWD);	// 12153 cwd ;~ 0613:2410
cs=0x613;eip=0x002411; 	X(PUSH(dx));	// 12154 push    dx ;~ 0613:2411
cs=0x613;eip=0x002412; 	X(PUSH(ax));	// 12155 push    ax ;~ 0613:2412
cs=0x613;eip=0x002413; 	J(CALLF(__aflmul,0));	// 12156 call    __aFlmul ;~ 0613:2413
cs=0x613;eip=0x002418; 	T(ADD(ax, 0x3F4));	// 12157 add     ax, 3F4h ;~ 0613:2418
cs=0x613;eip=0x00241b; 	T(ADC(dx, 0));	// 12158 adc     dx, 0 ;~ 0613:241B
cs=0x613;eip=0x00241e; 	T(ADD(ax, cvxptr));	// 12159 add     ax, cvxptr ;~ 0613:241E
cs=0x613;eip=0x002422; 	T(ADC(dx, 0));	// 12160 adc     dx, 0 ;~ 0613:2422
cs=0x613;eip=0x002425; 	T(MOV(cx, 0x0C));	// 12161 mov     cx, 0Ch ;~ 0613:2425
cs=0x613;eip=0x002428; 	T(SHL(dx, cl));	// 12162 shl     dx, cl ;~ 0613:2428
cs=0x613;eip=0x00242a; 	T(ADD(dx, word_45a22));	// 12163 add     dx, word_45A22 ;~ 0613:242A
cs=0x613;eip=0x00242e; 	T(MOV(es, dx));	// 12164 mov     es, dx ;~ 0613:242E
cs=0x613;eip=0x002430; 	T(MOV(bx, ax));	// 12166 mov     bx, ax ;~ 0613:2430
cs=0x613;eip=0x002432; 	T(MOV(ax, si));	// 12167 mov     ax, si ;~ 0613:2432
cs=0x613;eip=0x002434; 	X(MOV(*(raddr(es,bx)), al));	// 12168 mov     es:[bx], al ;~ 0613:2434
cs=0x613;eip=0x002437; 	T(INC(di));	// 12169 inc     di ;~ 0613:2437
cs=0x613;eip=0x002438; 	T(CMP(di, 20));	// 12170 cmp     di, 20 ;~ 0613:2438
cs=0x613;eip=0x00243b; 	J(JL(loc_16b18));	// 12171 jl      short loc_16B18 ; sizeof(struct GAMESTATE) ;~ 0613:243B
loc_16b4d:
	// 5021 
cs=0x613;eip=0x00243d; 	T(CMP(framespersec, 10));	// 12174 cmp     framespersec, 10 ;~ 0613:243D
cs=0x613;eip=0x002442; 	J(JNZ(loc_16b5c));	// 12175 jnz     short loc_16B5C ;~ 0613:2442
cs=0x613;eip=0x002444; 	X(MOV(steerwhlresptable_ptr, offset(dseg,steerwhlresptable_10fps)));	// 12176 mov     steerWhlRespTable_ptr, offset steerWhlRespTable_10fps ;~ 0613:2444
cs=0x613;eip=0x00244a; 	J(JMP(loc_16b62));	// 12177 jmp     short loc_16B62 ;~ 0613:244A
loc_16b5c:
	// 5022 
cs=0x613;eip=0x00244c; 	X(MOV(steerwhlresptable_ptr, offset(dseg,steerwhlresptable_20fps)));	// 12181 mov     steerWhlRespTable_ptr, offset steerWhlRespTable_20fps ;~ 0613:244C
loc_16b62:
	// 5023 
cs=0x613;eip=0x002452; 	T(MOV(ax, 30));	// 12184 mov     ax, 30 ;~ 0613:2452
cs=0x613;eip=0x002455; 	X(IMUL1_2(framespersec));	// 12185 imul    framespersec ;~ 0613:2455
cs=0x613;eip=0x002459; 	X(MOV(word_45a00, ax));	// 12186 mov     word_45A00, ax ;~ 0613:2459
cs=0x613;eip=0x00245c; 	T(MOV(ax, 100));	// 12187 mov     ax, 100 ;~ 0613:245C
cs=0x613;eip=0x00245f; 	T(CWD);	// 12188 cwd ;~ 0613:245F
cs=0x613;eip=0x002460; 	T(MOV(cx, framespersec));	// 12189 mov     cx, framespersec ;~ 0613:2460
cs=0x613;eip=0x002464; 	T(IDIV2(cx));	// 12190 idiv    cx ;~ 0613:2464
cs=0x613;eip=0x002466; 	X(MOV(word_4499c, ax));	// 12191 mov     word_4499C, ax ;~ 0613:2466
cs=0x613;eip=0x002469; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FFFD));	// 12192 cmp     [bp+arg_0], 0FFFDh ;~ 0613:2469
cs=0x613;eip=0x00246d; 	J(JNZ(loc_16b82));	// 12193 jnz     short loc_16B82 ;~ 0613:246D
cs=0x613;eip=0x00246f; 	J(JMP(loc_16f34));	// 12194 jmp     loc_16F34 ;~ 0613:246F
loc_16b82:
	// 5024 
cs=0x613;eip=0x002472; 	J(CALLF(init_unknown,0));	// 12198 call    init_unknown ;~ 0613:2472
cs=0x613;eip=0x002477; 	X(MOV(byte_44888, 1));	// 12199 mov     byte_44888, 1 ;~ 0613:2477
cs=0x613;eip=0x00247c; 	X(MOV(word_445ce, 1));	// 12200 mov     word_445CE, 1 ;~ 0613:247C
cs=0x613;eip=0x002482; 	T(MOV(ax, si));	// 12201 mov     ax, si ;~ 0613:2482
cs=0x613;eip=0x002484; 	X(MOV(byte_44889, al));	// 12202 mov     byte_44889, al ;~ 0613:2484
cs=0x613;eip=0x002487; 	X(MOV(byte_4488a, al));	// 12203 mov     byte_4488A, al ;~ 0613:2487
cs=0x613;eip=0x00248a; 	X(MOV(word_445cc, si));	// 12204 mov     word_445CC, si ;~ 0613:248A
cs=0x613;eip=0x00248e; 	X(MOV(word_44788, si));	// 12205 mov     word_44788, si ;~ 0613:248E
cs=0x613;eip=0x002492; 	X(MOV(byte_4488b, al));	// 12206 mov     byte_4488B, al ;~ 0613:2492
cs=0x613;eip=0x002495; 	X(MOV(byte_4488c, al));	// 12207 mov     byte_4488C, al ;~ 0613:2495
cs=0x613;eip=0x002498; 	T(MOV(di, si));	// 12208 mov     di, si ;~ 0613:2498
cs=0x613;eip=0x00249a; 	J(JMP(loc_16bb3));	// 12209 jmp     short loc_16BB3 ;~ 0613:249A
loc_16bac:
	// 5025 
cs=0x613;eip=0x00249c; 	T(MOV(ax, si));	// 12213 mov     ax, si ;~ 0613:249C
cs=0x613;eip=0x00249e; 	X(MOV(*((&byte_4488e)+di), al));	// 12214 mov     byte_4488E[di], al ;~ 0613:249E
cs=0x613;eip=0x0024a2; 	T(INC(di));	// 12215 inc     di ;~ 0613:24A2
loc_16bb3:
	// 5026 
cs=0x613;eip=0x0024a3; 	T(CMP(di, 48));	// 12218 cmp     di, 48 ;~ 0613:24A3
cs=0x613;eip=0x0024a6; 	J(JL(loc_16bac));	// 12219 jl      short loc_16BAC ;~ 0613:24A6
cs=0x613;eip=0x0024a8; 	T(MOV(di, si));	// 12220 mov     di, si ;~ 0613:24A8
cs=0x613;eip=0x0024aa; 	J(JMP(loc_16bc5));	// 12221 jmp     short loc_16BC5 ;~ 0613:24AA
loc_16bbc:
	// 5027 
cs=0x613;eip=0x0024ac; 	T(MOV(bx, di));	// 12225 mov     bx, di ;~ 0613:24AC
cs=0x613;eip=0x0024ae; 	T(SHL(bx, 1));	// 12226 shl     bx, 1 ;~ 0613:24AE
cs=0x613;eip=0x0024b0; 	X(MOV(*(dw*)(((db*)&word_44822)+bx), si));	// 12227 mov     word_44822[bx], si ;~ 0613:24B0
cs=0x613;eip=0x0024b4; 	T(INC(di));	// 12228 inc     di ;~ 0613:24B4
loc_16bc5:
	// 5028 
cs=0x613;eip=0x0024b5; 	T(CMP(di, 24));	// 12231 cmp     di, 24 ;~ 0613:24B5
cs=0x613;eip=0x0024b8; 	J(JL(loc_16bbc));	// 12232 jl      short loc_16BBC ;~ 0613:24B8
cs=0x613;eip=0x0024ba; 	T(MOV(ax, 0x200));	// 12233 mov     ax, 200h ;~ 0613:24BA
cs=0x613;eip=0x0024bd; 	X(PUSH(ax));	// 12234 push    ax ;~ 0613:24BD
cs=0x613;eip=0x0024be; 	T(MOV(ax, track_angle));	// 12235 mov     ax, track_angle ;~ 0613:24BE
cs=0x613;eip=0x0024c1; 	T(ADD(ah, 3));	// 12236 add     ah, 3 ;~ 0613:24C1
cs=0x613;eip=0x0024c4; 	X(PUSH(ax));	// 12237 push    ax ;~ 0613:24C4
cs=0x613;eip=0x0024c5; 	J(CALLF(sin_fast,0));	// 12238 call    sin_fast ;~ 0613:24C5
cs=0x613;eip=0x0024ca; 	T(ADD(sp, 2));	// 12239 add     sp, 2 ;~ 0613:24CA
cs=0x613;eip=0x0024cd; 	X(PUSH(ax));	// 12240 push    ax ;~ 0613:24CD
cs=0x613;eip=0x0024ce; 	J(CALLF(multiply_and_scale,0));	// 12241 call    multiply_and_scale ;~ 0613:24CE
cs=0x613;eip=0x0024d3; 	T(ADD(sp, 4));	// 12242 add     sp, 4 ;~ 0613:24D3
cs=0x613;eip=0x0024d6; 	T(MOV(cx, 0x1000));	// 12243 mov     cx, 1000h ;~ 0613:24D6
cs=0x613;eip=0x0024d9; 	X(PUSH(cx));	// 12244 push    cx ;~ 0613:24D9
cs=0x613;eip=0x0024da; 	T(MOV(cx, track_angle));	// 12245 mov     cx, track_angle ;~ 0613:24DA
cs=0x613;eip=0x0024de; 	T(ADD(ch, 2));	// 12246 add     ch, 2 ;~ 0613:24DE
cs=0x613;eip=0x0024e1; 	X(PUSH(cx));	// 12247 push    cx ;~ 0613:24E1
cs=0x613;eip=0x0024e2; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 12248 mov     [bp+var_A], ax ;~ 0613:24E2
cs=0x613;eip=0x0024e5; 	J(CALLF(sin_fast,0));	// 12249 call    sin_fast ;~ 0613:24E5
cs=0x613;eip=0x0024ea; 	T(ADD(sp, 2));	// 12250 add     sp, 2 ;~ 0613:24EA
cs=0x613;eip=0x0024ed; 	X(PUSH(ax));	// 12251 push    ax ;~ 0613:24ED
cs=0x613;eip=0x0024ee; 	J(CALLF(multiply_and_scale,0));	// 12252 call    multiply_and_scale ;~ 0613:24EE
cs=0x613;eip=0x0024f3; 	T(ADD(sp, 4));	// 12253 add     sp, 4 ;~ 0613:24F3
cs=0x613;eip=0x0024f6; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 12254 add     ax, [bp+var_A] ;~ 0613:24F6
cs=0x613;eip=0x0024f9; 	T(MOV(cx, ax));	// 12255 mov     cx, ax ;~ 0613:24F9
cs=0x613;eip=0x0024fb; 	T(MOV(al, startcol2));	// 12256 mov     al, startcol2 ;~ 0613:24FB
cs=0x613;eip=0x0024fe; 	T(CBW);	// 12257 cbw ;~ 0613:24FE
cs=0x613;eip=0x0024ff; 	T(MOV(dx, cx));	// 12258 mov     dx, cx ;~ 0613:24FF
cs=0x613;eip=0x002501; 	T(MOV(cl, 0x0A));	// 12259 mov     cl, 0Ah ;~ 0613:2501
cs=0x613;eip=0x002503; 	T(SHL(ax, cl));	// 12260 shl     ax, cl ;~ 0613:2503
cs=0x613;eip=0x002505; 	T(ADD(dx, ax));	// 12261 add     dx, ax ;~ 0613:2505
cs=0x613;eip=0x002507; 	X(MOV(word_445b4, dx));	// 12262 mov     word_445B4, dx ;~ 0613:2507
cs=0x613;eip=0x00250b; 	T(MOV(al, hillflag));	// 12263 mov     al, hillFlag ;~ 0613:250B
cs=0x613;eip=0x00250e; 	T(CBW);	// 12264 cbw ;~ 0613:250E
cs=0x613;eip=0x00250f; 	T(MOV(bx, ax));	// 12265 mov     bx, ax ;~ 0613:250F
cs=0x613;eip=0x002511; 	T(SHL(bx, 1));	// 12266 shl     bx, 1 ;~ 0613:2511
cs=0x613;eip=0x002513; 	T(MOV(ax, *(dw*)(((db*)hillheightconsts)+bx)));	// 12267 mov     ax, hillHeightConsts[bx] ;~ 0613:2513
cs=0x613;eip=0x002517; 	T(ADD(ax, 0x3C0));	// 12268 add     ax, 3C0h ;~ 0613:2517
cs=0x613;eip=0x00251a; 	X(MOV(word_445b6, ax));	// 12269 mov     word_445B6, ax ;~ 0613:251A
cs=0x613;eip=0x00251d; 	T(MOV(ax, 0x200));	// 12270 mov     ax, 200h ;~ 0613:251D
cs=0x613;eip=0x002520; 	X(PUSH(ax));	// 12271 push    ax ;~ 0613:2520
cs=0x613;eip=0x002521; 	T(MOV(ax, track_angle));	// 12272 mov     ax, track_angle ;~ 0613:2521
cs=0x613;eip=0x002524; 	T(ADD(ah, 3));	// 12273 add     ah, 3 ;~ 0613:2524
cs=0x613;eip=0x002527; 	X(PUSH(ax));	// 12274 push    ax ;~ 0613:2527
cs=0x613;eip=0x002528; 	J(CALLF(cos_fast,0));	// 12275 call    cos_fast ;~ 0613:2528
cs=0x613;eip=0x00252d; 	T(ADD(sp, 2));	// 12276 add     sp, 2 ;~ 0613:252D
cs=0x613;eip=0x002530; 	X(PUSH(ax));	// 12277 push    ax ;~ 0613:2530
cs=0x613;eip=0x002531; 	J(CALLF(multiply_and_scale,0));	// 12278 call    multiply_and_scale ;~ 0613:2531
cs=0x613;eip=0x002536; 	T(ADD(sp, 4));	// 12279 add     sp, 4 ;~ 0613:2536
cs=0x613;eip=0x002539; 	T(MOV(cx, 0x1000));	// 12280 mov     cx, 1000h ;~ 0613:2539
cs=0x613;eip=0x00253c; 	X(PUSH(cx));	// 12281 push    cx ;~ 0613:253C
cs=0x613;eip=0x00253d; 	T(MOV(cx, track_angle));	// 12282 mov     cx, track_angle ;~ 0613:253D
cs=0x613;eip=0x002541; 	T(ADD(ch, 2));	// 12283 add     ch, 2 ;~ 0613:2541
cs=0x613;eip=0x002544; 	X(PUSH(cx));	// 12284 push    cx ;~ 0613:2544
cs=0x613;eip=0x002545; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 12285 mov     [bp+var_A], ax ;~ 0613:2545
cs=0x613;eip=0x002548; 	J(CALLF(cos_fast,0));	// 12286 call    cos_fast ;~ 0613:2548
cs=0x613;eip=0x00254d; 	T(ADD(sp, 2));	// 12287 add     sp, 2 ;~ 0613:254D
cs=0x613;eip=0x002550; 	X(PUSH(ax));	// 12288 push    ax ;~ 0613:2550
cs=0x613;eip=0x002551; 	J(CALLF(multiply_and_scale,0));	// 12289 call    multiply_and_scale ;~ 0613:2551
cs=0x613;eip=0x002556; 	T(ADD(sp, 4));	// 12290 add     sp, 4 ;~ 0613:2556
cs=0x613;eip=0x002559; 	T(MOV(cx, ax));	// 12291 mov     cx, ax ;~ 0613:2559
cs=0x613;eip=0x00255b; 	T(MOV(al, startrow2));	// 12292 mov     al, startrow2 ;~ 0613:255B
cs=0x613;eip=0x00255e; 	T(CBW);	// 12293 cbw ;~ 0613:255E
cs=0x613;eip=0x00255f; 	T(MOV(bx, ax));	// 12294 mov     bx, ax ;~ 0613:255F
cs=0x613;eip=0x002561; 	T(SHL(bx, 1));	// 12295 shl     bx, 1 ;~ 0613:2561
cs=0x613;eip=0x002563; 	T(ADD(cx, *(dw*)(((db*)&trackpos)+bx)));	// 12296 add     cx, trackpos[bx] ;~ 0613:2563
cs=0x613;eip=0x002567; 	T(ADD(cx, *(dw*)(raddr(ss,bp+var_a))));	// 12297 add     cx, [bp+var_A] ;~ 0613:2567
cs=0x613;eip=0x00256a; 	X(MOV(word_445b8, cx));	// 12298 mov     word_445B8, cx ;~ 0613:256A
cs=0x613;eip=0x00256e; 	X(PUSH(si));	// 12299 push    si ;~ 0613:256E
cs=0x613;eip=0x00256f; 	X(PUSH(di));	// 12300 push    di ;~ 0613:256F
cs=0x613;eip=0x002570; 	T(MOV(di, offset(dseg,unk_445ba)));	// 12301 mov     di, offset unk_445BA ;~ 0613:2570
cs=0x613;eip=0x002573; 	T(MOV(si, offset(dseg,word_445b4)));	// 12302 mov     si, offset word_445B4 ;~ 0613:2573
cs=0x613;eip=0x002576; 	X(PUSH(ds));	// 12303 push    ds ;~ 0613:2576
cs=0x613;eip=0x002577; 	X(POP(es));	// 12304 pop     es ;~ 0613:2577
cs=0x613;eip=0x002578; 	X(MOVSW);	// 12306 movsw ;~ 0613:2578
cs=0x613;eip=0x002579; 	X(MOVSW);	// 12307 movsw ;~ 0613:2579
cs=0x613;eip=0x00257a; 	X(MOVSW);	// 12308 movsw ;~ 0613:257A
cs=0x613;eip=0x00257b; 	X(POP(di));	// 12309 pop     di ;~ 0613:257B
cs=0x613;eip=0x00257c; 	X(POP(si));	// 12310 pop     si ;~ 0613:257C
cs=0x613;eip=0x00257d; 	X(PUSH(si));	// 12311 push    si ;~ 0613:257D
cs=0x613;eip=0x00257e; 	X(PUSH(di));	// 12312 push    di ;~ 0613:257E
cs=0x613;eip=0x00257f; 	T(MOV(di, offset(dseg,unk_445c0)));	// 12313 mov     di, offset unk_445C0 ;~ 0613:257F
cs=0x613;eip=0x002582; 	T(MOV(si, offset(dseg,word_445b4)));	// 12314 mov     si, offset word_445B4 ;~ 0613:2582
cs=0x613;eip=0x002585; 	X(MOVSW);	// 12315 movsw ;~ 0613:2585
cs=0x613;eip=0x002586; 	X(MOVSW);	// 12316 movsw ;~ 0613:2586
cs=0x613;eip=0x002587; 	X(MOVSW);	// 12317 movsw ;~ 0613:2587
cs=0x613;eip=0x002588; 	X(POP(di));	// 12318 pop     di ;~ 0613:2588
cs=0x613;eip=0x002589; 	X(POP(si));	// 12319 pop     si ;~ 0613:2589
cs=0x613;eip=0x00258a; 	X(PUSH(si));	// 12320 push    si ;~ 0613:258A
cs=0x613;eip=0x00258b; 	X(PUSH(di));	// 12321 push    di ;~ 0613:258B
cs=0x613;eip=0x00258c; 	T(MOV(di, offset(dseg,unk_445c6)));	// 12322 mov     di, offset unk_445C6 ;~ 0613:258C
cs=0x613;eip=0x00258f; 	T(MOV(si, offset(dseg,word_445b4)));	// 12323 mov     si, offset word_445B4 ;~ 0613:258F
cs=0x613;eip=0x002592; 	X(MOVSW);	// 12324 movsw ;~ 0613:2592
cs=0x613;eip=0x002593; 	X(MOVSW);	// 12325 movsw ;~ 0613:2593
cs=0x613;eip=0x002594; 	X(MOVSW);	// 12326 movsw ;~ 0613:2594
cs=0x613;eip=0x002595; 	X(POP(di));	// 12327 pop     di ;~ 0613:2595
cs=0x613;eip=0x002596; 	X(POP(si));	// 12328 pop     si ;~ 0613:2596
cs=0x613;eip=0x002597; 	T(SUB(ax, ax));	// 12329 sub     ax, ax ;~ 0613:2597
cs=0x613;eip=0x002599; 	X(MOV(word_445d2, ax));	// 12330 mov     word_445D2, ax ;~ 0613:2599
cs=0x613;eip=0x00259c; 	X(MOV(word_445d0, ax));	// 12331 mov     word_445D0, ax ;~ 0613:259C
cs=0x613;eip=0x00259f; 	X(MOV(word_445d4, si));	// 12332 mov     word_445D4, si ;~ 0613:259F
cs=0x613;eip=0x0025a3; 	X(MOV(word_445d6, si));	// 12333 mov     word_445D6, si ;~ 0613:25A3
cs=0x613;eip=0x0025a7; 	X(MOV(word_445d8, si));	// 12334 mov     word_445D8, si ;~ 0613:25A7
cs=0x613;eip=0x0025ab; 	X(MOV(word_445da, si));	// 12335 mov     word_445DA, si ;~ 0613:25AB
cs=0x613;eip=0x0025af; 	X(MOV(word_445dc, si));	// 12336 mov     word_445DC, si ;~ 0613:25AF
cs=0x613;eip=0x0025b3; 	X(MOV(word_445de, si));	// 12337 mov     word_445DE, si ;~ 0613:25B3
cs=0x613;eip=0x0025b7; 	X(MOV(word_445e0, si));	// 12338 mov     word_445E0, si ;~ 0613:25B7
cs=0x613;eip=0x0025bb; 	X(MOV(word_445e2, si));	// 12339 mov     word_445E2, si ;~ 0613:25BB
cs=0x613;eip=0x0025bf; 	X(MOV(word_445e4, si));	// 12340 mov     word_445E4, si ;~ 0613:25BF
cs=0x613;eip=0x0025c3; 	T(MOV(ax, 0x0D2));	// 12341 mov     ax, 0D2h ; 'Ò' ;~ 0613:25C3
cs=0x613;eip=0x0025c6; 	X(PUSH(ax));	// 12342 push    ax ;~ 0613:25C6
cs=0x613;eip=0x0025c7; 	T(MOV(ax, track_angle));	// 12343 mov     ax, track_angle ;~ 0613:25C7
cs=0x613;eip=0x0025ca; 	T(ADD(ah, 2));	// 12344 add     ah, 2 ;~ 0613:25CA
cs=0x613;eip=0x0025cd; 	X(PUSH(ax));	// 12345 push    ax ;~ 0613:25CD
cs=0x613;eip=0x0025ce; 	J(CALLF(sin_fast,0));	// 12346 call    sin_fast ;~ 0613:25CE
cs=0x613;eip=0x0025d3; 	T(ADD(sp, 2));	// 12347 add     sp, 2 ;~ 0613:25D3
cs=0x613;eip=0x0025d6; 	X(PUSH(ax));	// 12348 push    ax ;~ 0613:25D6
cs=0x613;eip=0x0025d7; 	J(CALLF(multiply_and_scale,0));	// 12349 call    multiply_and_scale ;~ 0613:25D7
cs=0x613;eip=0x0025dc; 	T(ADD(sp, 4));	// 12350 add     sp, 4 ;~ 0613:25DC
cs=0x613;eip=0x0025df; 	T(MOV(cx, 0x24));	// 12351 mov     cx, 24h ; '$' ;~ 0613:25DF
cs=0x613;eip=0x0025e2; 	X(PUSH(cx));	// 12352 push    cx ;~ 0613:25E2
cs=0x613;eip=0x0025e3; 	T(MOV(cx, track_angle));	// 12353 mov     cx, track_angle ;~ 0613:25E3
cs=0x613;eip=0x0025e7; 	T(ADD(ch, 1));	// 12354 add     ch, 1 ;~ 0613:25E7
cs=0x613;eip=0x0025ea; 	X(PUSH(cx));	// 12355 push    cx ;~ 0613:25EA
cs=0x613;eip=0x0025eb; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 12356 mov     [bp+var_A], ax ;~ 0613:25EB
cs=0x613;eip=0x0025ee; 	J(CALLF(sin_fast,0));	// 12357 call    sin_fast ;~ 0613:25EE
cs=0x613;eip=0x0025f3; 	T(ADD(sp, 2));	// 12358 add     sp, 2 ;~ 0613:25F3
cs=0x613;eip=0x0025f6; 	X(PUSH(ax));	// 12359 push    ax ;~ 0613:25F6
cs=0x613;eip=0x0025f7; 	J(CALLF(multiply_and_scale,0));	// 12360 call    multiply_and_scale ;~ 0613:25F7
cs=0x613;eip=0x0025fc; 	T(ADD(sp, 4));	// 12361 add     sp, 4 ;~ 0613:25FC
cs=0x613;eip=0x0025ff; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 12362 add     ax, [bp+var_A] ;~ 0613:25FF
cs=0x613;eip=0x002602; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12363 mov     [bp+var_8], ax ;~ 0613:2602
cs=0x613;eip=0x002605; 	T(MOV(ax, 0x0D2));	// 12364 mov     ax, 0D2h ; 'Ò' ;~ 0613:2605
cs=0x613;eip=0x002608; 	X(PUSH(ax));	// 12365 push    ax ;~ 0613:2608
cs=0x613;eip=0x002609; 	T(MOV(ax, track_angle));	// 12366 mov     ax, track_angle ;~ 0613:2609
cs=0x613;eip=0x00260c; 	T(ADD(ah, 2));	// 12367 add     ah, 2 ;~ 0613:260C
cs=0x613;eip=0x00260f; 	X(PUSH(ax));	// 12368 push    ax ;~ 0613:260F
cs=0x613;eip=0x002610; 	J(CALLF(cos_fast,0));	// 12369 call    cos_fast ;~ 0613:2610
cs=0x613;eip=0x002615; 	T(ADD(sp, 2));	// 12370 add     sp, 2 ;~ 0613:2615
cs=0x613;eip=0x002618; 	X(PUSH(ax));	// 12371 push    ax ;~ 0613:2618
cs=0x613;eip=0x002619; 	J(CALLF(multiply_and_scale,0));	// 12372 call    multiply_and_scale ;~ 0613:2619
cs=0x613;eip=0x00261e; 	T(ADD(sp, 4));	// 12373 add     sp, 4 ;~ 0613:261E
cs=0x613;eip=0x002621; 	T(MOV(cx, 0x24));	// 12374 mov     cx, 24h ; '$' ;~ 0613:2621
cs=0x613;eip=0x002624; 	X(PUSH(cx));	// 12375 push    cx ;~ 0613:2624
cs=0x613;eip=0x002625; 	T(MOV(cx, track_angle));	// 12376 mov     cx, track_angle ;~ 0613:2625
cs=0x613;eip=0x002629; 	T(ADD(ch, 1));	// 12377 add     ch, 1 ;~ 0613:2629
cs=0x613;eip=0x00262c; 	X(PUSH(cx));	// 12378 push    cx ;~ 0613:262C
cs=0x613;eip=0x00262d; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 12379 mov     [bp+var_A], ax ;~ 0613:262D
cs=0x613;eip=0x002630; 	J(CALLF(cos_fast,0));	// 12380 call    cos_fast ;~ 0613:2630
cs=0x613;eip=0x002635; 	T(ADD(sp, 2));	// 12381 add     sp, 2 ;~ 0613:2635
cs=0x613;eip=0x002638; 	X(PUSH(ax));	// 12382 push    ax ;~ 0613:2638
cs=0x613;eip=0x002639; 	J(CALLF(multiply_and_scale,0));	// 12383 call    multiply_and_scale ;~ 0613:2639
cs=0x613;eip=0x00263e; 	T(ADD(sp, 4));	// 12384 add     sp, 4 ;~ 0613:263E
cs=0x613;eip=0x002641; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 12385 add     ax, [bp+var_A] ;~ 0613:2641
cs=0x613;eip=0x002644; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 12386 mov     [bp+var_2], ax ;~ 0613:2644
cs=0x613;eip=0x002647; 	T(MOV(ax, track_angle));	// 12387 mov     ax, track_angle ;~ 0613:2647
cs=0x613;eip=0x00264a; 	T(NEG(ax));	// 12388 neg     ax ;~ 0613:264A
cs=0x613;eip=0x00264c; 	X(PUSH(ax));	// 12389 push    ax ;~ 0613:264C
cs=0x613;eip=0x00264d; 	T(MOV(al, startrow2));	// 12390 mov     al, startrow2 ;~ 0613:264D
cs=0x613;eip=0x002650; 	T(CBW);	// 12391 cbw ;~ 0613:2650
cs=0x613;eip=0x002651; 	T(MOV(bx, ax));	// 12392 mov     bx, ax ;~ 0613:2651
cs=0x613;eip=0x002653; 	T(SHL(bx, 1));	// 12393 shl     bx, 1 ;~ 0613:2653
cs=0x613;eip=0x002655; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 12394 mov     ax, trackcenterpos[bx] ;~ 0613:2655
cs=0x613;eip=0x002659; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2))));	// 12395 add     ax, [bp+var_2] ;~ 0613:2659
cs=0x613;eip=0x00265c; 	T(CWD);	// 12396 cwd ;~ 0613:265C
cs=0x613;eip=0x00265d; 	T(MOV(cl, 6));	// 12397 mov     cl, 6 ;~ 0613:265D
loc_16d6f:
	// 5029 
cs=0x613;eip=0x00265f; 	T(SHL(ax, 1));	// 12400 shl     ax, 1 ;~ 0613:265F
cs=0x613;eip=0x002661; 	T(RCL(dx, 1));	// 12401 rcl     dx, 1 ;~ 0613:2661
cs=0x613;eip=0x002663; 	T(DEC(cl));	// 12402 dec     cl ;~ 0613:2663
cs=0x613;eip=0x002665; 	J(JNZ(loc_16d6f));	// 12403 jnz     short loc_16D6F ;~ 0613:2665
cs=0x613;eip=0x002667; 	X(PUSH(dx));	// 12404 push    dx ;~ 0613:2667
cs=0x613;eip=0x002668; 	X(PUSH(ax));	// 12405 push    ax ;~ 0613:2668
cs=0x613;eip=0x002669; 	T(MOV(al, hillflag));	// 12406 mov     al, hillFlag ;~ 0613:2669
cs=0x613;eip=0x00266c; 	T(CBW);	// 12407 cbw ;~ 0613:266C
cs=0x613;eip=0x00266d; 	T(MOV(bx, ax));	// 12408 mov     bx, ax ;~ 0613:266D
cs=0x613;eip=0x00266f; 	T(SHL(bx, 1));	// 12409 shl     bx, 1 ;~ 0613:266F
cs=0x613;eip=0x002671; 	T(MOV(ax, *(dw*)(((db*)hillheightconsts)+bx)));	// 12410 mov     ax, hillHeightConsts[bx] ;~ 0613:2671
cs=0x613;eip=0x002675; 	T(CWD);	// 12411 cwd ;~ 0613:2675
cs=0x613;eip=0x002676; 	T(MOV(cl, 6));	// 12412 mov     cl, 6 ;~ 0613:2676
loc_16d88:
	// 5030 
cs=0x613;eip=0x002678; 	T(SHL(ax, 1));	// 12415 shl     ax, 1 ;~ 0613:2678
cs=0x613;eip=0x00267a; 	T(RCL(dx, 1));	// 12416 rcl     dx, 1 ;~ 0613:267A
cs=0x613;eip=0x00267c; 	T(DEC(cl));	// 12417 dec     cl ;~ 0613:267C
cs=0x613;eip=0x00267e; 	J(JNZ(loc_16d88));	// 12418 jnz     short loc_16D88 ;~ 0613:267E
cs=0x613;eip=0x002680; 	X(PUSH(dx));	// 12419 push    dx ;~ 0613:2680
cs=0x613;eip=0x002681; 	X(PUSH(ax));	// 12420 push    ax ;~ 0613:2681
cs=0x613;eip=0x002682; 	T(MOV(al, startcol2));	// 12421 mov     al, startcol2 ;~ 0613:2682
cs=0x613;eip=0x002685; 	T(CBW);	// 12422 cbw ;~ 0613:2685
cs=0x613;eip=0x002686; 	T(MOV(bx, ax));	// 12423 mov     bx, ax ;~ 0613:2686
cs=0x613;eip=0x002688; 	T(SHL(bx, 1));	// 12424 shl     bx, 1 ;~ 0613:2688
cs=0x613;eip=0x00268a; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 12425 mov     ax, trackcenterpos2[bx] ;~ 0613:268A
cs=0x613;eip=0x00268e; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_8))));	// 12426 add     ax, [bp+var_8] ;~ 0613:268E
cs=0x613;eip=0x002691; 	T(CWD);	// 12427 cwd ;~ 0613:2691
cs=0x613;eip=0x002692; 	T(MOV(cl, 6));	// 12428 mov     cl, 6 ;~ 0613:2692
loc_16da4:
	// 5031 
cs=0x613;eip=0x002694; 	T(SHL(ax, 1));	// 12431 shl     ax, 1 ;~ 0613:2694
cs=0x613;eip=0x002696; 	T(RCL(dx, 1));	// 12432 rcl     dx, 1 ;~ 0613:2696
cs=0x613;eip=0x002698; 	T(DEC(cl));	// 12433 dec     cl ;~ 0613:2698
cs=0x613;eip=0x00269a; 	J(JNZ(loc_16da4));	// 12434 jnz     short loc_16DA4 ;~ 0613:269A
cs=0x613;eip=0x00269c; 	X(PUSH(dx));	// 12435 push    dx ;~ 0613:269C
cs=0x613;eip=0x00269d; 	X(PUSH(ax));	// 12436 push    ax ;~ 0613:269D
cs=0x613;eip=0x00269e; 	T(MOV(al, byte_449a9));	// 12437 mov     al, byte_449A9 ;~ 0613:269E
cs=0x613;eip=0x0026a1; 	T(CBW);	// 12438 cbw ;~ 0613:26A1
cs=0x613;eip=0x0026a2; 	X(PUSH(ax));	// 12439 push    ax ;~ 0613:26A2
cs=0x613;eip=0x0026a3; 	T(MOV(ax, offset(dseg,simd_player)));	// 12440 mov     ax, offset simd_player ; dseg: simd_copy ;~ 0613:26A3
cs=0x613;eip=0x0026a6; 	X(PUSH(ax));	// 12441 push    ax ;~ 0613:26A6
cs=0x613;eip=0x0026a7; 	T(MOV(ax, offset(dseg,word_445e6)));	// 12442 mov     ax, offset word_445E6 ; dseg: state.playerstate ;~ 0613:26A7
cs=0x613;eip=0x0026aa; 	X(PUSH(ax));	// 12443 push    ax ;~ 0613:26AA
cs=0x613;eip=0x0026ab; 	X(PUSH(cs));	// 12444 push    cs ;~ 0613:26AB
cs=0x613;eip=0x0026ac; 	J(CALL(init_carstate_from_simd,0));	// 12445 call    near ptr init_carstate_from_simd ;~ 0613:26AC
cs=0x613;eip=0x0026af; 	T(ADD(sp, 0x14));	// 12446 add     sp, 14h ;~ 0613:26AF
cs=0x613;eip=0x0026b2; 	X(MOV(word_44786, si));	// 12447 mov     word_44786, si ;~ 0613:26B2
cs=0x613;eip=0x0026b6; 	T(MOV(ax, si));	// 12448 mov     ax, si ;~ 0613:26B6
cs=0x613;eip=0x0026b8; 	X(MOV(byte_448f1, al));	// 12449 mov     byte_448F1, al ;~ 0613:26B8
cs=0x613;eip=0x0026bb; 	X(MOV(byte_448f2, al));	// 12450 mov     byte_448F2, al ;~ 0613:26BB
cs=0x613;eip=0x0026be; 	X(MOV(byte_448ef, al));	// 12451 mov     byte_448EF, al ;~ 0613:26BE
cs=0x613;eip=0x0026c1; 	X(MOV(byte_448f0, al));	// 12452 mov     byte_448F0, al ;~ 0613:26C1
cs=0x613;eip=0x0026c4; 	T(MOV(al, startcol2));	// 12453 mov     al, startcol2 ;~ 0613:26C4
cs=0x613;eip=0x0026c7; 	T(CBW);	// 12454 cbw ;~ 0613:26C7
cs=0x613;eip=0x0026c8; 	X(MOV(word_4478a, ax));	// 12455 mov     word_4478A, ax ;~ 0613:26C8
cs=0x613;eip=0x0026cb; 	X(MOV(word_4478c, ax));	// 12456 mov     word_4478C, ax ;~ 0613:26CB
cs=0x613;eip=0x0026ce; 	T(MOV(al, startrow2));	// 12457 mov     al, startrow2 ;~ 0613:26CE
cs=0x613;eip=0x0026d1; 	T(CBW);	// 12458 cbw ;~ 0613:26D1
cs=0x613;eip=0x0026d2; 	X(MOV(word_4478e, ax));	// 12459 mov     word_4478E, ax ;~ 0613:26D2
cs=0x613;eip=0x0026d5; 	X(MOV(word_44790, ax));	// 12460 mov     word_44790, ax ;~ 0613:26D5
cs=0x613;eip=0x0026d8; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FFFE));	// 12461 cmp     [bp+arg_0], 0FFFEh ;~ 0613:26D8
cs=0x613;eip=0x0026dc; 	J(JZ(loc_16e0a));	// 12462 jz      short loc_16E0A ;~ 0613:26DC
cs=0x613;eip=0x0026de; 	T(SUB(ax, ax));	// 12463 sub     ax, ax ;~ 0613:26DE
cs=0x613;eip=0x0026e0; 	X(PUSH(ax));	// 12464 push    ax ;~ 0613:26E0
cs=0x613;eip=0x0026e1; 	T(MOV(al, byte_446b4));	// 12465 mov     al, byte_446B4 ;~ 0613:26E1
cs=0x613;eip=0x0026e4; 	X(INC(byte_446b4));	// 12466 inc     byte_446B4 ;~ 0613:26E4
cs=0x613;eip=0x0026e8; 	T(SUB(ah, ah));	// 12467 sub     ah, ah ;~ 0613:26E8
cs=0x613;eip=0x0026ea; 	X(PUSH(ax));	// 12468 push    ax ;~ 0613:26EA
cs=0x613;eip=0x0026eb; 	T(MOV(ax, offset(dseg,word_4468a)));	// 12469 mov     ax, offset word_4468A ;~ 0613:26EB
cs=0x613;eip=0x0026ee; 	X(PUSH(ax));	// 12470 push    ax ;~ 0613:26EE
cs=0x613;eip=0x0026ef; 	X(PUSH(word_44630));	// 12471 push    word_44630 ;~ 0613:26EF
cs=0x613;eip=0x0026f3; 	X(PUSH(cs));	// 12472 push    cs ;~ 0613:26F3
cs=0x613;eip=0x0026f4; 	J(CALL(sub_18d60,0));	// 12473 call    near ptr sub_18D60 ;~ 0613:26F4
cs=0x613;eip=0x0026f7; 	T(ADD(sp, 8));	// 12474 add     sp, 8 ;~ 0613:26F7
loc_16e0a:
	// 5032 
cs=0x613;eip=0x0026fa; 	T(MOV(ax, 0x0D2));	// 12477 mov     ax, 0D2h ; 'Ò' ;~ 0613:26FA
cs=0x613;eip=0x0026fd; 	X(PUSH(ax));	// 12478 push    ax ;~ 0613:26FD
cs=0x613;eip=0x0026fe; 	T(MOV(ax, track_angle));	// 12479 mov     ax, track_angle ;~ 0613:26FE
cs=0x613;eip=0x002701; 	T(ADD(ah, 2));	// 12480 add     ah, 2 ;~ 0613:2701
cs=0x613;eip=0x002704; 	X(PUSH(ax));	// 12481 push    ax ;~ 0613:2704
cs=0x613;eip=0x002705; 	J(CALLF(sin_fast,0));	// 12482 call    sin_fast ;~ 0613:2705
cs=0x613;eip=0x00270a; 	T(ADD(sp, 2));	// 12483 add     sp, 2 ;~ 0613:270A
cs=0x613;eip=0x00270d; 	X(PUSH(ax));	// 12484 push    ax ;~ 0613:270D
cs=0x613;eip=0x00270e; 	J(CALLF(multiply_and_scale,0));	// 12485 call    multiply_and_scale ;~ 0613:270E
cs=0x613;eip=0x002713; 	T(ADD(sp, 4));	// 12486 add     sp, 4 ;~ 0613:2713
cs=0x613;eip=0x002716; 	T(MOV(cx, 0x24));	// 12487 mov     cx, 24h ; '$' ;~ 0613:2716
cs=0x613;eip=0x002719; 	X(PUSH(cx));	// 12488 push    cx ;~ 0613:2719
cs=0x613;eip=0x00271a; 	T(MOV(cx, track_angle));	// 12489 mov     cx, track_angle ;~ 0613:271A
cs=0x613;eip=0x00271e; 	T(ADD(ch, 3));	// 12490 add     ch, 3 ;~ 0613:271E
cs=0x613;eip=0x002721; 	X(PUSH(cx));	// 12491 push    cx ;~ 0613:2721
cs=0x613;eip=0x002722; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 12492 mov     [bp+var_A], ax ;~ 0613:2722
cs=0x613;eip=0x002725; 	J(CALLF(sin_fast,0));	// 12493 call    sin_fast ;~ 0613:2725
cs=0x613;eip=0x00272a; 	T(ADD(sp, 2));	// 12494 add     sp, 2 ;~ 0613:272A
cs=0x613;eip=0x00272d; 	X(PUSH(ax));	// 12495 push    ax ;~ 0613:272D
cs=0x613;eip=0x00272e; 	J(CALLF(multiply_and_scale,0));	// 12496 call    multiply_and_scale ;~ 0613:272E
cs=0x613;eip=0x002733; 	T(ADD(sp, 4));	// 12497 add     sp, 4 ;~ 0613:2733
cs=0x613;eip=0x002736; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 12498 add     ax, [bp+var_A] ;~ 0613:2736
cs=0x613;eip=0x002739; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12499 mov     [bp+var_8], ax ;~ 0613:2739
cs=0x613;eip=0x00273c; 	T(MOV(ax, 0x0D2));	// 12500 mov     ax, 0D2h ; 'Ò' ;~ 0613:273C
cs=0x613;eip=0x00273f; 	X(PUSH(ax));	// 12501 push    ax ;~ 0613:273F
cs=0x613;eip=0x002740; 	T(MOV(ax, track_angle));	// 12502 mov     ax, track_angle ;~ 0613:2740
cs=0x613;eip=0x002743; 	T(ADD(ah, 2));	// 12503 add     ah, 2 ;~ 0613:2743
cs=0x613;eip=0x002746; 	X(PUSH(ax));	// 12504 push    ax ;~ 0613:2746
cs=0x613;eip=0x002747; 	J(CALLF(cos_fast,0));	// 12505 call    cos_fast ;~ 0613:2747
cs=0x613;eip=0x00274c; 	T(ADD(sp, 2));	// 12506 add     sp, 2 ;~ 0613:274C
cs=0x613;eip=0x00274f; 	X(PUSH(ax));	// 12507 push    ax ;~ 0613:274F
cs=0x613;eip=0x002750; 	J(CALLF(multiply_and_scale,0));	// 12508 call    multiply_and_scale ;~ 0613:2750
cs=0x613;eip=0x002755; 	T(ADD(sp, 4));	// 12509 add     sp, 4 ;~ 0613:2755
cs=0x613;eip=0x002758; 	T(MOV(cx, 0x24));	// 12510 mov     cx, 24h ; '$' ;~ 0613:2758
cs=0x613;eip=0x00275b; 	X(PUSH(cx));	// 12511 push    cx ;~ 0613:275B
cs=0x613;eip=0x00275c; 	T(MOV(cx, track_angle));	// 12512 mov     cx, track_angle ;~ 0613:275C
cs=0x613;eip=0x002760; 	T(ADD(ch, 3));	// 12513 add     ch, 3 ;~ 0613:2760
cs=0x613;eip=0x002763; 	X(PUSH(cx));	// 12514 push    cx ;~ 0613:2763
cs=0x613;eip=0x002764; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 12515 mov     [bp+var_A], ax ;~ 0613:2764
cs=0x613;eip=0x002767; 	J(CALLF(cos_fast,0));	// 12516 call    cos_fast ;~ 0613:2767
cs=0x613;eip=0x00276c; 	T(ADD(sp, 2));	// 12517 add     sp, 2 ;~ 0613:276C
cs=0x613;eip=0x00276f; 	X(PUSH(ax));	// 12518 push    ax ;~ 0613:276F
cs=0x613;eip=0x002770; 	J(CALLF(multiply_and_scale,0));	// 12519 call    multiply_and_scale ;~ 0613:2770
cs=0x613;eip=0x002775; 	T(ADD(sp, 4));	// 12520 add     sp, 4 ;~ 0613:2775
cs=0x613;eip=0x002778; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 12521 add     ax, [bp+var_A] ;~ 0613:2778
cs=0x613;eip=0x00277b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 12522 mov     [bp+var_2], ax ;~ 0613:277B
cs=0x613;eip=0x00277e; 	T(MOV(ax, track_angle));	// 12523 mov     ax, track_angle ;~ 0613:277E
cs=0x613;eip=0x002781; 	T(NEG(ax));	// 12524 neg     ax ;~ 0613:2781
cs=0x613;eip=0x002783; 	X(PUSH(ax));	// 12525 push    ax ;~ 0613:2783
cs=0x613;eip=0x002784; 	T(MOV(al, startrow2));	// 12526 mov     al, startrow2 ;~ 0613:2784
cs=0x613;eip=0x002787; 	T(CBW);	// 12527 cbw ;~ 0613:2787
cs=0x613;eip=0x002788; 	T(MOV(bx, ax));	// 12528 mov     bx, ax ;~ 0613:2788
cs=0x613;eip=0x00278a; 	T(SHL(bx, 1));	// 12529 shl     bx, 1 ;~ 0613:278A
cs=0x613;eip=0x00278c; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 12530 mov     ax, trackcenterpos[bx] ;~ 0613:278C
cs=0x613;eip=0x002790; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2))));	// 12531 add     ax, [bp+var_2] ;~ 0613:2790
cs=0x613;eip=0x002793; 	T(CWD);	// 12532 cwd ;~ 0613:2793
cs=0x613;eip=0x002794; 	T(MOV(cl, 6));	// 12533 mov     cl, 6 ;~ 0613:2794
loc_16ea6:
	// 5033 
cs=0x613;eip=0x002796; 	T(SHL(ax, 1));	// 12536 shl     ax, 1 ;~ 0613:2796
cs=0x613;eip=0x002798; 	T(RCL(dx, 1));	// 12537 rcl     dx, 1 ;~ 0613:2798
cs=0x613;eip=0x00279a; 	T(DEC(cl));	// 12538 dec     cl ;~ 0613:279A
cs=0x613;eip=0x00279c; 	J(JNZ(loc_16ea6));	// 12539 jnz     short loc_16EA6 ;~ 0613:279C
cs=0x613;eip=0x00279e; 	X(PUSH(dx));	// 12540 push    dx ;~ 0613:279E
cs=0x613;eip=0x00279f; 	X(PUSH(ax));	// 12541 push    ax ;~ 0613:279F
cs=0x613;eip=0x0027a0; 	T(MOV(al, hillflag));	// 12542 mov     al, hillFlag ;~ 0613:27A0
cs=0x613;eip=0x0027a3; 	T(CBW);	// 12543 cbw ;~ 0613:27A3
cs=0x613;eip=0x0027a4; 	T(MOV(bx, ax));	// 12544 mov     bx, ax ;~ 0613:27A4
cs=0x613;eip=0x0027a6; 	T(SHL(bx, 1));	// 12545 shl     bx, 1 ;~ 0613:27A6
cs=0x613;eip=0x0027a8; 	T(MOV(ax, *(dw*)(((db*)hillheightconsts)+bx)));	// 12546 mov     ax, hillHeightConsts[bx] ;~ 0613:27A8
cs=0x613;eip=0x0027ac; 	T(CWD);	// 12547 cwd ;~ 0613:27AC
cs=0x613;eip=0x0027ad; 	T(MOV(cl, 6));	// 12548 mov     cl, 6 ;~ 0613:27AD
loc_16ebf:
	// 5034 
cs=0x613;eip=0x0027af; 	T(SHL(ax, 1));	// 12551 shl     ax, 1 ;~ 0613:27AF
cs=0x613;eip=0x0027b1; 	T(RCL(dx, 1));	// 12552 rcl     dx, 1 ;~ 0613:27B1
cs=0x613;eip=0x0027b3; 	T(DEC(cl));	// 12553 dec     cl ;~ 0613:27B3
cs=0x613;eip=0x0027b5; 	J(JNZ(loc_16ebf));	// 12554 jnz     short loc_16EBF ;~ 0613:27B5
cs=0x613;eip=0x0027b7; 	X(PUSH(dx));	// 12555 push    dx ;~ 0613:27B7
cs=0x613;eip=0x0027b8; 	X(PUSH(ax));	// 12556 push    ax ;~ 0613:27B8
cs=0x613;eip=0x0027b9; 	T(MOV(al, startcol2));	// 12557 mov     al, startcol2 ;~ 0613:27B9
cs=0x613;eip=0x0027bc; 	T(CBW);	// 12558 cbw ;~ 0613:27BC
cs=0x613;eip=0x0027bd; 	T(MOV(bx, ax));	// 12559 mov     bx, ax ;~ 0613:27BD
cs=0x613;eip=0x0027bf; 	T(SHL(bx, 1));	// 12560 shl     bx, 1 ;~ 0613:27BF
cs=0x613;eip=0x0027c1; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 12561 mov     ax, trackcenterpos2[bx] ;~ 0613:27C1
cs=0x613;eip=0x0027c5; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_8))));	// 12562 add     ax, [bp+var_8] ;~ 0613:27C5
cs=0x613;eip=0x0027c8; 	T(CWD);	// 12563 cwd ;~ 0613:27C8
cs=0x613;eip=0x0027c9; 	T(MOV(cl, 6));	// 12564 mov     cl, 6 ;~ 0613:27C9
loc_16edb:
	// 5035 
cs=0x613;eip=0x0027cb; 	T(SHL(ax, 1));	// 12567 shl     ax, 1 ;~ 0613:27CB
cs=0x613;eip=0x0027cd; 	T(RCL(dx, 1));	// 12568 rcl     dx, 1 ;~ 0613:27CD
cs=0x613;eip=0x0027cf; 	T(DEC(cl));	// 12569 dec     cl ;~ 0613:27CF
cs=0x613;eip=0x0027d1; 	J(JNZ(loc_16edb));	// 12570 jnz     short loc_16EDB ;~ 0613:27D1
cs=0x613;eip=0x0027d3; 	X(PUSH(dx));	// 12571 push    dx ;~ 0613:27D3
cs=0x613;eip=0x0027d4; 	X(PUSH(ax));	// 12572 push    ax ;~ 0613:27D4
cs=0x613;eip=0x0027d5; 	T(MOV(ax, 1));	// 12573 mov     ax, 1 ;~ 0613:27D5
cs=0x613;eip=0x0027d8; 	X(PUSH(ax));	// 12574 push    ax ;~ 0613:27D8
cs=0x613;eip=0x0027d9; 	T(MOV(ax, offset(dseg,simd_opponent)));	// 12575 mov     ax, offset simd_opponent ;~ 0613:27D9
cs=0x613;eip=0x0027dc; 	X(PUSH(ax));	// 12576 push    ax ;~ 0613:27DC
cs=0x613;eip=0x0027dd; 	T(MOV(ax, offset(dseg,word_446b6)));	// 12577 mov     ax, offset word_446B6 ;~ 0613:27DD
cs=0x613;eip=0x0027e0; 	X(PUSH(ax));	// 12578 push    ax ;~ 0613:27E0
cs=0x613;eip=0x0027e1; 	X(PUSH(cs));	// 12579 push    cs ;~ 0613:27E1
cs=0x613;eip=0x0027e2; 	J(CALL(init_carstate_from_simd,0));	// 12580 call    near ptr init_carstate_from_simd ;~ 0613:27E2
cs=0x613;eip=0x0027e5; 	T(ADD(sp, 0x14));	// 12581 add     sp, 14h ;~ 0613:27E5
cs=0x613;eip=0x0027e8; 	T(CMP(byte_449aa, 0));	// 12582 cmp     byte_449AA, 0 ;~ 0613:27E8
cs=0x613;eip=0x0027ed; 	J(JZ(loc_16f2f));	// 12583 jz      short loc_16F2F ;~ 0613:27ED
cs=0x613;eip=0x0027ef; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FFFE));	// 12584 cmp     [bp+arg_0], 0FFFEh ;~ 0613:27EF
cs=0x613;eip=0x0027f3; 	J(JZ(loc_16f2f));	// 12585 jz      short loc_16F2F ;~ 0613:27F3
cs=0x613;eip=0x0027f5; 	T(MOV(ax, offset(dseg,byte_4488d)));	// 12586 mov     ax, offset byte_4488D ;~ 0613:27F5
cs=0x613;eip=0x0027f8; 	X(PUSH(ax));	// 12587 push    ax ;~ 0613:27F8
cs=0x613;eip=0x0027f9; 	T(MOV(al, byte_44784));	// 12588 mov     al, byte_44784 ;~ 0613:27F9
cs=0x613;eip=0x0027fc; 	X(INC(byte_44784));	// 12589 inc     byte_44784 ;~ 0613:27FC
cs=0x613;eip=0x002800; 	T(SUB(ah, ah));	// 12590 sub     ah, ah ;~ 0613:2800
cs=0x613;eip=0x002802; 	X(PUSH(ax));	// 12591 push    ax ;~ 0613:2802
cs=0x613;eip=0x002803; 	T(MOV(ax, offset(dseg,word_4475a)));	// 12592 mov     ax, offset word_4475A ;~ 0613:2803
cs=0x613;eip=0x002806; 	X(PUSH(ax));	// 12593 push    ax ;~ 0613:2806
cs=0x613;eip=0x002807; 	T(MOV(bx, word_44700));	// 12594 mov     bx, word_44700 ;~ 0613:2807
cs=0x613;eip=0x00280b; 	T(SHL(bx, 1));	// 12595 shl     bx, 1 ;~ 0613:280B
cs=0x613;eip=0x00280d; 	T(ADD(bx, *(dw*)(((db*)&trackdata3))));	// 12596 add     bx, word ptr trackdata3 ;~ 0613:280D
cs=0x613;eip=0x002811; 	T(MOV(es, *(dw*)(((db*)&trackdata3)+2)));	// 12597 mov     es, word ptr trackdata3+2 ;~ 0613:2811
cs=0x613;eip=0x002815; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 12599 push    word ptr es:[bx] ;~ 0613:2815
cs=0x613;eip=0x002818; 	X(PUSH(cs));	// 12600 push    cs ;~ 0613:2818
cs=0x613;eip=0x002819; 	J(CALL(sub_18d60,0));	// 12601 call    near ptr sub_18D60 ;~ 0613:2819
cs=0x613;eip=0x00281c; 	T(ADD(sp, 8));	// 12602 add     sp, 8 ;~ 0613:281C
loc_16f2f:
	// 5036 
cs=0x613;eip=0x00281f; 	T(MOV(ax, si));	// 12606 mov     ax, si ;~ 0613:281F
cs=0x613;eip=0x002821; 	X(MOV(byte_448be, al));	// 12607 mov     byte_448BE, al ;~ 0613:2821
loc_16f34:
	// 5037 
cs=0x613;eip=0x002824; 	X(POP(si));	// 12610 pop     si ;~ 0613:2824
cs=0x613;eip=0x002825; 	X(POP(di));	// 12611 pop     di ;~ 0613:2825
cs=0x613;eip=0x002826; 	T(MOV(sp, bp));	// 12612 mov     sp, bp ;~ 0613:2826
cs=0x613;eip=0x002828; 	X(POP(bp));	// 12613 pop     bp ;~ 0613:2828
cs=0x613;eip=0x002829; 	J(RETF(0));	// 12614 retf ;~ 0613:2829

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kinit_game_state: 	goto init_game_state;
        case m2c::kloc_16b18: 	goto loc_16b18;
        case m2c::kloc_16b4d: 	goto loc_16b4d;
        case m2c::kloc_16b5c: 	goto loc_16b5c;
        case m2c::kloc_16b62: 	goto loc_16b62;
        case m2c::kloc_16b82: 	goto loc_16b82;
        case m2c::kloc_16bac: 	goto loc_16bac;
        case m2c::kloc_16bb3: 	goto loc_16bb3;
        case m2c::kloc_16bbc: 	goto loc_16bbc;
        case m2c::kloc_16bc5: 	goto loc_16bc5;
        case m2c::kloc_16d6f: 	goto loc_16d6f;
        case m2c::kloc_16d88: 	goto loc_16d88;
        case m2c::kloc_16da4: 	goto loc_16da4;
        case m2c::kloc_16e0a: 	goto loc_16e0a;
        case m2c::kloc_16ea6: 	goto loc_16ea6;
        case m2c::kloc_16ebf: 	goto loc_16ebf;
        case m2c::kloc_16edb: 	goto loc_16edb;
        case m2c::kloc_16f2f: 	goto loc_16f2f;
        case m2c::kloc_16f34: 	goto loc_16f34;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool restore_gamestate(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    restore_gamestate:
    _begin:
#undef arg_0
#define arg_0 6
	// 12625 arg_0           = word ptr  6 ;~ 0613:282A
cs=0x613;eip=0x00282a; 	X(PUSH(bp));	// 12627 push    bp ;~ 0613:282A
cs=0x613;eip=0x00282b; 	T(MOV(bp, sp));	// 12628 mov     bp, sp ;~ 0613:282B
cs=0x613;eip=0x00282d; 	T(SUB(sp, 2));	// 12629 sub     sp, 2 ;~ 0613:282D
cs=0x613;eip=0x002830; 	X(PUSH(di));	// 12630 push    di ;~ 0613:2830
cs=0x613;eip=0x002831; 	X(PUSH(si));	// 12631 push    si ;~ 0613:2831
cs=0x613;eip=0x002832; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 12632 cmp     [bp+arg_0], 0 ;~ 0613:2832
cs=0x613;eip=0x002836; 	J(JNZ(loc_16f59));	// 12633 jnz     short loc_16F59 ;~ 0613:2836
cs=0x613;eip=0x002838; 	T(CMP(elapsed_time1, 0));	// 12634 cmp     elapsed_time1, 0 ;~ 0613:2838
cs=0x613;eip=0x00283d; 	J(JNZ(loc_16f59));	// 12635 jnz     short loc_16F59 ;~ 0613:283D
cs=0x613;eip=0x00283f; 	T(SUB(ax, ax));	// 12636 sub     ax, ax ;~ 0613:283F
cs=0x613;eip=0x002841; 	X(PUSH(ax));	// 12637 push    ax ;~ 0613:2841
cs=0x613;eip=0x002842; 	X(PUSH(cs));	// 12638 push    cs ;~ 0613:2842
cs=0x613;eip=0x002843; 	J(CALL(init_game_state,0));	// 12639 call    near ptr init_game_state ;~ 0613:2843
cs=0x613;eip=0x002846; 	T(ADD(sp, 2));	// 12640 add     sp, 2 ;~ 0613:2846
loc_16f59:
	// 5038 
cs=0x613;eip=0x002849; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 12644 mov     ax, [bp+arg_0] ;~ 0613:2849
cs=0x613;eip=0x00284c; 	T(CWD);	// 12645 cwd ;~ 0613:284C
cs=0x613;eip=0x00284d; 	T(MOV(cx, word_45a00));	// 12646 mov     cx, word_45A00 ;~ 0613:284D
cs=0x613;eip=0x002851; 	T(IDIV2(cx));	// 12647 idiv    cx ;~ 0613:2851
cs=0x613;eip=0x002853; 	T(MOV(si, ax));	// 12648 mov     si, ax ;~ 0613:2853
cs=0x613;eip=0x002855; 	T(CMP(si, 0x14));	// 12649 cmp     si, 14h ;~ 0613:2855
cs=0x613;eip=0x002858; 	J(JNZ(loc_16f6b));	// 12650 jnz     short loc_16F6B ;~ 0613:2858
cs=0x613;eip=0x00285a; 	T(DEC(si));	// 12651 dec     si ;~ 0613:285A
loc_16f6b:
	// 5039 
cs=0x613;eip=0x00285b; 	T(MOV(ax, word_445d4));	// 12654 mov     ax, word_445D4 ;~ 0613:285B
cs=0x613;eip=0x00285e; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 12655 cmp     [bp+arg_0], ax ;~ 0613:285E
cs=0x613;eip=0x002861; 	J(JC(loc_16fb1));	// 12656 jb      short loc_16FB1 ;~ 0613:2861
loc_16f73:
	// 5040 
cs=0x613;eip=0x002863; 	T(MOV(ax, word_45a00));	// 12659 mov     ax, word_45A00 ;~ 0613:2863
cs=0x613;eip=0x002866; 	T(IMUL1_2(si));	// 12660 imul    si ;~ 0613:2866
cs=0x613;eip=0x002868; 	T(CMP(ax, word_445d4));	// 12661 cmp     ax, word_445D4 ;~ 0613:2868
cs=0x613;eip=0x00286c; 	J(JA(loc_16f81));	// 12662 ja      short loc_16F81 ;~ 0613:286C
cs=0x613;eip=0x00286e; 	J(JMP(loc_17002));	// 12663 jmp     loc_17002 ;~ 0613:286E
loc_16f81:
	// 5041 
cs=0x613;eip=0x002871; 	T(MOV(ax, 0x460));	// 12667 mov     ax, 460h ;~ 0613:2871
cs=0x613;eip=0x002874; 	T(CWD);	// 12668 cwd ;~ 0613:2874
cs=0x613;eip=0x002875; 	X(PUSH(dx));	// 12669 push    dx ;~ 0613:2875
cs=0x613;eip=0x002876; 	X(PUSH(ax));	// 12670 push    ax ;~ 0613:2876
cs=0x613;eip=0x002877; 	T(MOV(ax, si));	// 12671 mov     ax, si ;~ 0613:2877
cs=0x613;eip=0x002879; 	T(CWD);	// 12672 cwd ;~ 0613:2879
cs=0x613;eip=0x00287a; 	X(PUSH(dx));	// 12673 push    dx ;~ 0613:287A
cs=0x613;eip=0x00287b; 	X(PUSH(ax));	// 12674 push    ax ;~ 0613:287B
cs=0x613;eip=0x00287c; 	J(CALLF(__aflmul,0));	// 12675 call    __aFlmul ;~ 0613:287C
cs=0x613;eip=0x002881; 	T(ADD(ax, 0x3F4));	// 12676 add     ax, 3F4h ;~ 0613:2881
cs=0x613;eip=0x002884; 	T(ADC(dx, 0));	// 12677 adc     dx, 0 ;~ 0613:2884
cs=0x613;eip=0x002887; 	T(ADD(ax, cvxptr));	// 12678 add     ax, cvxptr ;~ 0613:2887
cs=0x613;eip=0x00288b; 	T(ADC(dx, 0));	// 12679 adc     dx, 0 ;~ 0613:288B
cs=0x613;eip=0x00288e; 	T(MOV(cx, 0x0C));	// 12680 mov     cx, 0Ch ;~ 0613:288E
cs=0x613;eip=0x002891; 	T(SHL(dx, cl));	// 12681 shl     dx, cl ;~ 0613:2891
cs=0x613;eip=0x002893; 	T(ADD(dx, word_45a22));	// 12682 add     dx, word_45A22 ;~ 0613:2893
cs=0x613;eip=0x002897; 	T(MOV(es, dx));	// 12683 mov     es, dx ;~ 0613:2897
cs=0x613;eip=0x002899; 	T(MOV(bx, ax));	// 12684 mov     bx, ax ;~ 0613:2899
cs=0x613;eip=0x00289b; 	T(CMP(*(raddr(es,bx)), 0));	// 12685 cmp     byte ptr es:[bx], 0 ;~ 0613:289B
cs=0x613;eip=0x00289f; 	J(JZ(loc_16ffe));	// 12686 jz      short loc_16FFE ;~ 0613:289F
loc_16fb1:
	// 5042 
cs=0x613;eip=0x0028a1; 	T(MOV(ax, 0x460));	// 12689 mov     ax, 460h ;~ 0613:28A1
cs=0x613;eip=0x0028a4; 	T(CWD);	// 12690 cwd ;~ 0613:28A4
cs=0x613;eip=0x0028a5; 	X(PUSH(dx));	// 12691 push    dx ;~ 0613:28A5
cs=0x613;eip=0x0028a6; 	X(PUSH(ax));	// 12692 push    ax ;~ 0613:28A6
cs=0x613;eip=0x0028a7; 	T(MOV(ax, si));	// 12693 mov     ax, si ;~ 0613:28A7
cs=0x613;eip=0x0028a9; 	T(CWD);	// 12694 cwd ;~ 0613:28A9
cs=0x613;eip=0x0028aa; 	X(PUSH(dx));	// 12695 push    dx ;~ 0613:28AA
cs=0x613;eip=0x0028ab; 	X(PUSH(ax));	// 12696 push    ax ;~ 0613:28AB
cs=0x613;eip=0x0028ac; 	J(CALLF(__aflmul,0));	// 12697 call    __aFlmul ;~ 0613:28AC
cs=0x613;eip=0x0028b1; 	T(ADD(ax, cvxptr));	// 12698 add     ax, cvxptr ;~ 0613:28B1
cs=0x613;eip=0x0028b5; 	T(ADC(dx, 0));	// 12699 adc     dx, 0 ;~ 0613:28B5
cs=0x613;eip=0x0028b8; 	T(MOV(cx, 0x0C));	// 12700 mov     cx, 0Ch ;~ 0613:28B8
cs=0x613;eip=0x0028bb; 	T(SHL(dx, cl));	// 12701 shl     dx, cl ;~ 0613:28BB
cs=0x613;eip=0x0028bd; 	T(ADD(dx, word_45a22));	// 12702 add     dx, word_45A22 ;~ 0613:28BD
cs=0x613;eip=0x0028c1; 	X(PUSH(si));	// 12703 push    si ;~ 0613:28C1
cs=0x613;eip=0x0028c2; 	T(MOV(di, offset(dseg,state)));	// 12704 mov     di, offset state ;~ 0613:28C2
cs=0x613;eip=0x0028c5; 	T(MOV(si, ax));	// 12705 mov     si, ax ;~ 0613:28C5
cs=0x613;eip=0x0028c7; 	X(PUSH(ds));	// 12706 push    ds ;~ 0613:28C7
cs=0x613;eip=0x0028c8; 	X(POP(es));	// 12707 pop     es ;~ 0613:28C8
cs=0x613;eip=0x0028c9; 	X(PUSH(ds));	// 12709 push    ds ;~ 0613:28C9
cs=0x613;eip=0x0028ca; 	T(MOV(ds, dx));	// 12710 mov     ds, dx ;~ 0613:28CA
cs=0x613;eip=0x0028cc; 	T(MOV(cx, 0x230));	// 12711 mov     cx, 230h ;~ 0613:28CC
	// 12712 repne movsw ;~ 0613:28CF
cs=0x613;eip=0x0028cf; 	X(	REPNE MOVSW);	// 12712 repne movsw ;~ 0613:28CF
cs=0x613;eip=0x0028d1; 	X(POP(ds));	// 12713 pop     ds ;~ 0613:28D1
cs=0x613;eip=0x0028d2; 	X(POP(si));	// 12714 pop     si ;~ 0613:28D2
cs=0x613;eip=0x0028d3; 	T(MOV(ax, offset(dseg,unk_44882)));	// 12715 mov     ax, offset unk_44882 ;~ 0613:28D3
cs=0x613;eip=0x0028d6; 	X(PUSH(ax));	// 12716 push    ax ;~ 0613:28D6
cs=0x613;eip=0x0028d7; 	J(CALLF(init_kevinrandom,0));	// 12717 call    init_kevinrandom ;~ 0613:28D7
cs=0x613;eip=0x0028dc; 	T(ADD(sp, 2));	// 12718 add     sp, 2 ;~ 0613:28DC
cs=0x613;eip=0x0028df; 	T(MOV(ax, word_445d4));	// 12719 mov     ax, word_445D4 ;~ 0613:28DF
cs=0x613;eip=0x0028e2; 	X(MOV(elapsed_time2, ax));	// 12720 mov     elapsed_time2, ax ;~ 0613:28E2
cs=0x613;eip=0x0028e5; 	X(POP(si));	// 12721 pop     si ;~ 0613:28E5
cs=0x613;eip=0x0028e6; 	X(POP(di));	// 12722 pop     di ;~ 0613:28E6
cs=0x613;eip=0x0028e7; 	T(MOV(sp, bp));	// 12723 mov     sp, bp ;~ 0613:28E7
cs=0x613;eip=0x0028e9; 	X(POP(bp));	// 12724 pop     bp ;~ 0613:28E9
cs=0x613;eip=0x0028ea; 	J(RETF(0));	// 12725 retf ;~ 0613:28EA
loc_16ffe:
	// 5043 
cs=0x613;eip=0x0028ee; 	T(DEC(si));	// 12731 dec     si ;~ 0613:28EE
cs=0x613;eip=0x0028ef; 	J(JMP(loc_16f73));	// 12732 jmp     loc_16F73 ;~ 0613:28EF
loc_17002:
	// 5044 
cs=0x613;eip=0x0028f2; 	X(POP(si));	// 12736 pop     si ;~ 0613:28F2
cs=0x613;eip=0x0028f3; 	X(POP(di));	// 12737 pop     di ;~ 0613:28F3
cs=0x613;eip=0x0028f4; 	T(MOV(sp, bp));	// 12738 mov     sp, bp ;~ 0613:28F4
cs=0x613;eip=0x0028f6; 	X(POP(bp));	// 12739 pop     bp ;~ 0613:28F6
cs=0x613;eip=0x0028f7; 	J(RETF(0));	// 12740 retf ;~ 0613:28F7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_16f59: 	goto loc_16f59;
        case m2c::kloc_16f6b: 	goto loc_16f6b;
        case m2c::kloc_16f73: 	goto loc_16f73;
        case m2c::kloc_16f81: 	goto loc_16f81;
        case m2c::kloc_16fb1: 	goto loc_16fb1;
        case m2c::kloc_16ffe: 	goto loc_16ffe;
        case m2c::kloc_17002: 	goto loc_17002;
        case m2c::krestore_gamestate: 	goto restore_gamestate;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool update_gamestate(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    update_gamestate:
    _begin:
#undef var_4
#define var_4 -4
	// 12751 var_4           = byte ptr -4 ;~ 0613:28F8
cs=0x613;eip=0x0028f8; 	X(PUSH(bp));	// 12753 push    bp ;~ 0613:28F8
cs=0x613;eip=0x0028f9; 	T(MOV(bp, sp));	// 12754 mov     bp, sp ;~ 0613:28F9
cs=0x613;eip=0x0028fb; 	T(SUB(sp, 4));	// 12755 sub     sp, 4 ;~ 0613:28FB
cs=0x613;eip=0x0028fe; 	X(PUSH(di));	// 12756 push    di ;~ 0613:28FE
cs=0x613;eip=0x0028ff; 	X(PUSH(si));	// 12757 push    si ;~ 0613:28FF
cs=0x613;eip=0x002900; 	T(MOV(bx, word_445d4));	// 12758 mov     bx, word_445D4 ;~ 0613:2900
cs=0x613;eip=0x002904; 	T(LES(di, td16_rpl_buffer));	// 12759 les     di, td16_rpl_buffer ;~ 0613:2904
cs=0x613;eip=0x002908; 	T(MOV(al, *(raddr(es,bx+di))));	// 12761 mov     al, es:[bx+di] ;~ 0613:2908
cs=0x613;eip=0x00290b; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 12762 mov     [bp+var_4], al ;~ 0613:290B
cs=0x613;eip=0x00290e; 	T(OR(al, al));	// 12763 or      al, al ;~ 0613:290E
cs=0x613;eip=0x002910; 	J(JZ(loc_17027));	// 12764 jz      short loc_17027 ;~ 0613:2910
cs=0x613;eip=0x002912; 	X(MOV(byte_44889, 1));	// 12765 mov     byte_44889, 1 ;~ 0613:2912
loc_17027:
	// 5045 
cs=0x613;eip=0x002917; 	T(MOV(ax, bx));	// 12768 mov     ax, bx ;~ 0613:2917
cs=0x613;eip=0x002919; 	T(SUB(dx, dx));	// 12769 sub     dx, dx ;~ 0613:2919
cs=0x613;eip=0x00291b; 	X(DIV2(word_45a00));	// 12770 div     word_45A00 ;~ 0613:291B
cs=0x613;eip=0x00291f; 	T(OR(dx, dx));	// 12771 or      dx, dx ;~ 0613:291F
cs=0x613;eip=0x002921; 	J(JNZ(loc_17079));	// 12772 jnz     short loc_17079 ;~ 0613:2921
cs=0x613;eip=0x002923; 	T(MOV(ax, bx));	// 12773 mov     ax, bx ;~ 0613:2923
cs=0x613;eip=0x002925; 	T(SUB(dx, dx));	// 12774 sub     dx, dx ;~ 0613:2925
cs=0x613;eip=0x002927; 	X(DIV2(word_45a00));	// 12775 div     word_45A00 ;~ 0613:2927
cs=0x613;eip=0x00292b; 	T(MOV(si, ax));	// 12776 mov     si, ax ;~ 0613:292B
cs=0x613;eip=0x00292d; 	T(MOV(ax, offset(dseg,unk_44882)));	// 12777 mov     ax, offset unk_44882 ;~ 0613:292D
cs=0x613;eip=0x002930; 	X(PUSH(ax));	// 12778 push    ax ;~ 0613:2930
cs=0x613;eip=0x002931; 	J(CALLF(get_kevinrandom_seed,0));	// 12779 call    get_kevinrandom_seed ;~ 0613:2931
cs=0x613;eip=0x002936; 	T(ADD(sp, 2));	// 12780 add     sp, 2 ;~ 0613:2936
cs=0x613;eip=0x002939; 	T(MOV(ax, 0x460));	// 12781 mov     ax, 460h ;~ 0613:2939
cs=0x613;eip=0x00293c; 	T(CWD);	// 12782 cwd ;~ 0613:293C
cs=0x613;eip=0x00293d; 	X(PUSH(dx));	// 12783 push    dx ;~ 0613:293D
cs=0x613;eip=0x00293e; 	X(PUSH(ax));	// 12784 push    ax ;~ 0613:293E
cs=0x613;eip=0x00293f; 	T(MOV(ax, si));	// 12785 mov     ax, si ;~ 0613:293F
cs=0x613;eip=0x002941; 	T(CWD);	// 12786 cwd ;~ 0613:2941
cs=0x613;eip=0x002942; 	X(PUSH(dx));	// 12787 push    dx ;~ 0613:2942
cs=0x613;eip=0x002943; 	X(PUSH(ax));	// 12788 push    ax ;~ 0613:2943
cs=0x613;eip=0x002944; 	J(CALLF(__aflmul,0));	// 12789 call    __aFlmul ;~ 0613:2944
cs=0x613;eip=0x002949; 	T(ADD(ax, cvxptr));	// 12790 add     ax, cvxptr ;~ 0613:2949
cs=0x613;eip=0x00294d; 	T(ADC(dx, 0));	// 12791 adc     dx, 0 ;~ 0613:294D
cs=0x613;eip=0x002950; 	T(MOV(cx, 0x0C));	// 12792 mov     cx, 0Ch ;~ 0613:2950
cs=0x613;eip=0x002953; 	T(SHL(dx, cl));	// 12793 shl     dx, cl ;~ 0613:2953
cs=0x613;eip=0x002955; 	T(ADD(dx, word_45a22));	// 12794 add     dx, word_45A22 ;~ 0613:2955
cs=0x613;eip=0x002959; 	T(MOV(bx, ax));	// 12795 mov     bx, ax ;~ 0613:2959
cs=0x613;eip=0x00295b; 	T(MOV(es, dx));	// 12796 mov     es, dx ;~ 0613:295B
cs=0x613;eip=0x00295d; 	X(PUSH(si));	// 12797 push    si ;~ 0613:295D
cs=0x613;eip=0x00295e; 	T(MOV(di, bx));	// 12798 mov     di, bx ;~ 0613:295E
cs=0x613;eip=0x002960; 	T(MOV(si, offset(dseg,state)));	// 12799 mov     si, offset state ;~ 0613:2960
cs=0x613;eip=0x002963; 	T(MOV(cx, 0x230));	// 12800 mov     cx, 230h ;~ 0613:2963
	// 12801 repne movsw ;~ 0613:2966
cs=0x613;eip=0x002966; 	X(	REPNE MOVSW);	// 12801 repne movsw ;~ 0613:2966
cs=0x613;eip=0x002968; 	X(POP(si));	// 12802 pop     si ;~ 0613:2968
loc_17079:
	// 5046 
cs=0x613;eip=0x002969; 	X(INC(word_445d4));	// 12805 inc     word_445D4 ;~ 0613:2969
cs=0x613;eip=0x00296d; 	T(CMP(byte_4488a, 0));	// 12806 cmp     byte_4488A, 0 ;~ 0613:296D
cs=0x613;eip=0x002972; 	J(JZ(loc_170be));	// 12807 jz      short loc_170BE ;~ 0613:2972
cs=0x613;eip=0x002974; 	T(MOV(ax, word_445ce));	// 12808 mov     ax, word_445CE ;~ 0613:2974
cs=0x613;eip=0x002977; 	T(CMP(word_445cc, ax));	// 12809 cmp     word_445CC, ax ;~ 0613:2977
cs=0x613;eip=0x00297b; 	J(JGE(loc_170be));	// 12810 jge     short loc_170BE ;~ 0613:297B
cs=0x613;eip=0x00297d; 	X(INC(word_445cc));	// 12811 inc     word_445CC ;~ 0613:297D
cs=0x613;eip=0x002981; 	T(CMP(word_445cc, ax));	// 12812 cmp     word_445CC, ax ;~ 0613:2981
cs=0x613;eip=0x002985; 	J(JNZ(loc_170be));	// 12813 jnz     short loc_170BE ;~ 0613:2985
cs=0x613;eip=0x002987; 	T(CMP(byte_449da, 0));	// 12814 cmp     byte_449DA, 0 ;~ 0613:2987
cs=0x613;eip=0x00298c; 	J(JNZ(loc_170be));	// 12815 jnz     short loc_170BE ;~ 0613:298C
cs=0x613;eip=0x00298e; 	T(CMP(byte_446af, 1));	// 12816 cmp     byte_446AF, 1 ;~ 0613:298E
cs=0x613;eip=0x002993; 	J(JNZ(loc_170b2));	// 12817 jnz     short loc_170B2 ;~ 0613:2993
cs=0x613;eip=0x002995; 	T(CMP(word_44612, 0));	// 12818 cmp     word_44612, 0 ;~ 0613:2995
cs=0x613;eip=0x00299a; 	J(JZ(loc_170b2));	// 12819 jz      short loc_170B2 ;~ 0613:299A
cs=0x613;eip=0x00299c; 	X(INC(word_445ce));	// 12820 inc     word_445CE ;~ 0613:299C
cs=0x613;eip=0x0029a0; 	J(JMP(loc_170be));	// 12821 jmp     short loc_170BE ;~ 0613:29A0
loc_170b2:
	// 5047 
cs=0x613;eip=0x0029a2; 	T(CMP(game_replay_mode, 0));	// 12826 cmp     game_replay_mode, 0 ;~ 0613:29A2
cs=0x613;eip=0x0029a7; 	J(JNZ(loc_170be));	// 12827 jnz     short loc_170BE ;~ 0613:29A7
cs=0x613;eip=0x0029a9; 	X(MOV(byte_449da, 1));	// 12828 mov     byte_449DA, 1 ;~ 0613:29A9
loc_170be:
	// 5048 
cs=0x613;eip=0x0029ae; 	T(CMP(byte_44889, 0));	// 12832 cmp     byte_44889, 0 ;~ 0613:29AE
cs=0x613;eip=0x0029b3; 	J(JZ(loc_170f6));	// 12833 jz      short loc_170F6 ;~ 0613:29B3
cs=0x613;eip=0x0029b5; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 12834 mov     al, [bp+var_4] ;~ 0613:29B5
cs=0x613;eip=0x0029b8; 	T(CBW);	// 12835 cbw ;~ 0613:29B8
cs=0x613;eip=0x0029b9; 	X(PUSH(ax));	// 12836 push    ax ;~ 0613:29B9
cs=0x613;eip=0x0029ba; 	X(PUSH(cs));	// 12837 push    cs ;~ 0613:29BA
cs=0x613;eip=0x0029bb; 	J(CALL(player_op,0));	// 12838 call    near ptr player_op ;~ 0613:29BB
cs=0x613;eip=0x0029be; 	T(ADD(sp, 2));	// 12839 add     sp, 2 ;~ 0613:29BE
cs=0x613;eip=0x0029c1; 	T(CMP(byte_449aa, 0));	// 12840 cmp     byte_449AA, 0 ;~ 0613:29C1
cs=0x613;eip=0x0029c6; 	J(JZ(loc_170dc));	// 12841 jz      short loc_170DC ;~ 0613:29C6
cs=0x613;eip=0x0029c8; 	X(PUSH(cs));	// 12842 push    cs ;~ 0613:29C8
cs=0x613;eip=0x0029c9; 	J(CALL(opponent_op,0));	// 12843 call    near ptr opponent_op ;~ 0613:29C9
loc_170dc:
	// 5049 
cs=0x613;eip=0x0029cc; 	J(CALLF(sub_2298c,0));	// 12846 call    sub_2298C ;~ 0613:29CC
cs=0x613;eip=0x0029d1; 	T(CMP(byte_448be, 0));	// 12847 cmp     byte_448BE, 0 ;~ 0613:29D1
cs=0x613;eip=0x0029d6; 	J(JZ(loc_170ec));	// 12848 jz      short loc_170EC ;~ 0613:29D6
cs=0x613;eip=0x0029d8; 	X(PUSH(cs));	// 12849 push    cs ;~ 0613:29D8
cs=0x613;eip=0x0029d9; 	J(CALL(sub_19ba0,0));	// 12850 call    near ptr sub_19BA0 ;~ 0613:29D9
loc_170ec:
	// 5050 
cs=0x613;eip=0x0029dc; 	X(PUSH(cs));	// 12853 push    cs ;~ 0613:29DC
cs=0x613;eip=0x0029dd; 	J(CALL(audio_carstate,0));	// 12854 call    near ptr audio_carstate ;~ 0613:29DD
cs=0x613;eip=0x0029e0; 	X(POP(si));	// 12855 pop     si ;~ 0613:29E0
cs=0x613;eip=0x0029e1; 	X(POP(di));	// 12856 pop     di ;~ 0613:29E1
cs=0x613;eip=0x0029e2; 	T(MOV(sp, bp));	// 12857 mov     sp, bp ;~ 0613:29E2
cs=0x613;eip=0x0029e4; 	X(POP(bp));	// 12858 pop     bp ;~ 0613:29E4
cs=0x613;eip=0x0029e5; 	J(RETF(0));	// 12859 retf ;~ 0613:29E5
loc_170f6:
	// 5051 
cs=0x613;eip=0x0029e6; 	T(CMP(game_replay_mode, 1));	// 12863 cmp     game_replay_mode, 1 ;~ 0613:29E6
cs=0x613;eip=0x0029eb; 	J(JZ(loc_17100));	// 12864 jz      short loc_17100 ;~ 0613:29EB
cs=0x613;eip=0x0029ed; 	J(JMP(loc_171e1));	// 12865 jmp     loc_171E1 ;~ 0613:29ED
loc_17100:
	// 5052 
cs=0x613;eip=0x0029f0; 	X(PUSH(cs));	// 12869 push    cs ;~ 0613:29F0
cs=0x613;eip=0x0029f1; 	J(CALL(audio_carstate,0));	// 12870 call    near ptr audio_carstate ;~ 0613:29F1
cs=0x613;eip=0x0029f4; 	T(CMP(byte_4393c, 0));	// 12871 cmp     byte_4393C, 0 ;~ 0613:29F4
cs=0x613;eip=0x0029f9; 	J(JNZ(loc_1710e));	// 12872 jnz     short loc_1710E ;~ 0613:29F9
cs=0x613;eip=0x0029fb; 	J(JMP(loc_171e1));	// 12873 jmp     loc_171E1 ;~ 0613:29FB
loc_1710e:
	// 5053 
cs=0x613;eip=0x0029fe; 	T(CMP(word_44dca, 0x1C2));	// 12877 cmp     word_44DCA, 1C2h ;~ 0613:29FE
cs=0x613;eip=0x002a04; 	J(JGE(loc_1711b));	// 12878 jge     short loc_1711B ;~ 0613:2A04
cs=0x613;eip=0x002a06; 	X(ADD(word_44dca, 8));	// 12879 add     word_44DCA, 8 ;~ 0613:2A06
loc_1711b:
	// 5054 
cs=0x613;eip=0x002a0b; 	T(CMP(byte_4393c, 1));	// 12882 cmp     byte_4393C, 1 ;~ 0613:2A0B
cs=0x613;eip=0x002a10; 	J(JNZ(loc_1712e));	// 12883 jnz     short loc_1712E ;~ 0613:2A10
cs=0x613;eip=0x002a12; 	T(CMP(word_44dca, 0x180));	// 12884 cmp     word_44DCA, 180h ;~ 0613:2A12
cs=0x613;eip=0x002a18; 	J(JLE(loc_1712e));	// 12885 jle     short loc_1712E ;~ 0613:2A18
cs=0x613;eip=0x002a1a; 	X(INC(byte_4393c));	// 12886 inc     byte_4393C ;~ 0613:2A1A
loc_1712e:
	// 5055 
cs=0x613;eip=0x002a1e; 	T(CMP(byte_4393c, 2));	// 12890 cmp     byte_4393C, 2 ;~ 0613:2A1E
cs=0x613;eip=0x002a23; 	J(JZ(loc_17138));	// 12891 jz      short loc_17138 ;~ 0613:2A23
cs=0x613;eip=0x002a25; 	J(JMP(loc_171e1));	// 12892 jmp     loc_171E1 ;~ 0613:2A25
loc_17138:
	// 5056 
cs=0x613;eip=0x002a28; 	T(MOV(al, startrow2));	// 12896 mov     al, startrow2 ;~ 0613:2A28
cs=0x613;eip=0x002a2b; 	T(CBW);	// 12897 cbw ;~ 0613:2A2B
cs=0x613;eip=0x002a2c; 	T(MOV(bx, ax));	// 12898 mov     bx, ax ;~ 0613:2A2C
cs=0x613;eip=0x002a2e; 	T(SHL(bx, 1));	// 12899 shl     bx, 1 ;~ 0613:2A2E
cs=0x613;eip=0x002a30; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 12900 mov     ax, trackcenterpos[bx] ;~ 0613:2A30
cs=0x613;eip=0x002a34; 	T(MOV(cx, word_445ee));	// 12901 mov     cx, word_445EE ;~ 0613:2A34
cs=0x613;eip=0x002a38; 	T(MOV(bx, word_445f0));	// 12902 mov     bx, word_445F0 ;~ 0613:2A38
cs=0x613;eip=0x002a3c; 	T(MOV(dx, cx));	// 12903 mov     dx, cx ;~ 0613:2A3C
cs=0x613;eip=0x002a3e; 	T(MOV(cl, 6));	// 12904 mov     cl, 6 ;~ 0613:2A3E
loc_17150:
	// 5057 
cs=0x613;eip=0x002a40; 	T(SAR(bx, 1));	// 12907 sar     bx, 1 ;~ 0613:2A40
cs=0x613;eip=0x002a42; 	T(RCR(dx, 1));	// 12908 rcr     dx, 1 ;~ 0613:2A42
cs=0x613;eip=0x002a44; 	T(DEC(cl));	// 12909 dec     cl ;~ 0613:2A44
cs=0x613;eip=0x002a46; 	J(JNZ(loc_17150));	// 12910 jnz     short loc_17150 ;~ 0613:2A46
cs=0x613;eip=0x002a48; 	T(SUB(ax, dx));	// 12911 sub     ax, dx ;~ 0613:2A48
cs=0x613;eip=0x002a4a; 	X(PUSH(ax));	// 12912 push    ax ;~ 0613:2A4A
cs=0x613;eip=0x002a4b; 	X(PUSH(track_angle));	// 12913 push    track_angle ;~ 0613:2A4B
cs=0x613;eip=0x002a4f; 	J(CALLF(cos_fast,0));	// 12914 call    cos_fast ;~ 0613:2A4F
cs=0x613;eip=0x002a54; 	T(ADD(sp, 2));	// 12915 add     sp, 2 ;~ 0613:2A54
cs=0x613;eip=0x002a57; 	X(PUSH(ax));	// 12916 push    ax ;~ 0613:2A57
cs=0x613;eip=0x002a58; 	J(CALLF(multiply_and_scale,0));	// 12917 call    multiply_and_scale ;~ 0613:2A58
cs=0x613;eip=0x002a5d; 	T(ADD(sp, 4));	// 12918 add     sp, 4 ;~ 0613:2A5D
cs=0x613;eip=0x002a60; 	T(MOV(si, ax));	// 12919 mov     si, ax ;~ 0613:2A60
cs=0x613;eip=0x002a62; 	T(MOV(al, startcol2));	// 12920 mov     al, startcol2 ;~ 0613:2A62
cs=0x613;eip=0x002a65; 	T(CBW);	// 12921 cbw ;~ 0613:2A65
cs=0x613;eip=0x002a66; 	T(MOV(bx, ax));	// 12922 mov     bx, ax ;~ 0613:2A66
cs=0x613;eip=0x002a68; 	T(SHL(bx, 1));	// 12923 shl     bx, 1 ;~ 0613:2A68
cs=0x613;eip=0x002a6a; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 12924 mov     ax, trackcenterpos2[bx] ;~ 0613:2A6A
cs=0x613;eip=0x002a6e; 	T(MOV(cx, word_445e6));	// 12925 mov     cx, word_445E6 ;~ 0613:2A6E
cs=0x613;eip=0x002a72; 	T(MOV(bx, word_445e8));	// 12926 mov     bx, word_445E8 ;~ 0613:2A72
cs=0x613;eip=0x002a76; 	T(MOV(dx, cx));	// 12927 mov     dx, cx ;~ 0613:2A76
cs=0x613;eip=0x002a78; 	T(MOV(cl, 6));	// 12928 mov     cl, 6 ;~ 0613:2A78
loc_1718a:
	// 5058 
cs=0x613;eip=0x002a7a; 	T(SAR(bx, 1));	// 12931 sar     bx, 1 ;~ 0613:2A7A
cs=0x613;eip=0x002a7c; 	T(RCR(dx, 1));	// 12932 rcr     dx, 1 ;~ 0613:2A7C
cs=0x613;eip=0x002a7e; 	T(DEC(cl));	// 12933 dec     cl ;~ 0613:2A7E
cs=0x613;eip=0x002a80; 	J(JNZ(loc_1718a));	// 12934 jnz     short loc_1718A ;~ 0613:2A80
cs=0x613;eip=0x002a82; 	T(SUB(ax, dx));	// 12935 sub     ax, dx ;~ 0613:2A82
cs=0x613;eip=0x002a84; 	X(PUSH(ax));	// 12936 push    ax ;~ 0613:2A84
cs=0x613;eip=0x002a85; 	X(PUSH(track_angle));	// 12937 push    track_angle ;~ 0613:2A85
cs=0x613;eip=0x002a89; 	J(CALLF(sin_fast,0));	// 12938 call    sin_fast ;~ 0613:2A89
cs=0x613;eip=0x002a8e; 	T(ADD(sp, 2));	// 12939 add     sp, 2 ;~ 0613:2A8E
cs=0x613;eip=0x002a91; 	X(PUSH(ax));	// 12940 push    ax ;~ 0613:2A91
cs=0x613;eip=0x002a92; 	J(CALLF(multiply_and_scale,0));	// 12941 call    multiply_and_scale ;~ 0613:2A92
cs=0x613;eip=0x002a97; 	T(ADD(sp, 4));	// 12942 add     sp, 4 ;~ 0613:2A97
cs=0x613;eip=0x002a9a; 	T(ADD(si, ax));	// 12943 add     si, ax ;~ 0613:2A9A
cs=0x613;eip=0x002a9c; 	T(CMP(si, 0x0E4));	// 12944 cmp     si, 0E4h ; 'ä' ;~ 0613:2A9C
cs=0x613;eip=0x002aa0; 	J(JLE(loc_171d0));	// 12945 jle     short loc_171D0 ;~ 0613:2AA0
cs=0x613;eip=0x002aa2; 	T(CMP(word_44610, 0x500));	// 12946 cmp     word_44610, 500h ;~ 0613:2AA2
cs=0x613;eip=0x002aa8; 	J(JNC(loc_171cc));	// 12947 jnb     short loc_171CC ;~ 0613:2AA8
cs=0x613;eip=0x002aaa; 	T(MOV(ax, 1));	// 12948 mov     ax, 1 ;~ 0613:2AAA
loc_171bd:
	// 5059 
cs=0x613;eip=0x002aad; 	X(PUSH(ax));	// 12952 push    ax ;~ 0613:2AAD
cs=0x613;eip=0x002aae; 	X(PUSH(cs));	// 12953 push    cs ;~ 0613:2AAE
cs=0x613;eip=0x002aaf; 	J(CALL(player_op,0));	// 12954 call    near ptr player_op ;~ 0613:2AAF
cs=0x613;eip=0x002ab2; 	T(ADD(sp, 2));	// 12955 add     sp, 2 ;~ 0613:2AB2
cs=0x613;eip=0x002ab5; 	X(POP(si));	// 12956 pop     si ;~ 0613:2AB5
cs=0x613;eip=0x002ab6; 	X(POP(di));	// 12957 pop     di ;~ 0613:2AB6
cs=0x613;eip=0x002ab7; 	T(MOV(sp, bp));	// 12958 mov     sp, bp ;~ 0613:2AB7
cs=0x613;eip=0x002ab9; 	X(POP(bp));	// 12959 pop     bp ;~ 0613:2AB9
cs=0x613;eip=0x002aba; 	J(RETF(0));	// 12960 retf ;~ 0613:2ABA
loc_171cc:
	// 5060 
cs=0x613;eip=0x002abc; 	T(SUB(ax, ax));	// 12965 sub     ax, ax ;~ 0613:2ABC
cs=0x613;eip=0x002abe; 	J(JMP(loc_171bd));	// 12966 jmp     short loc_171BD ;~ 0613:2ABE
loc_171d0:
	// 5061 
cs=0x613;eip=0x002ac0; 	T(CMP(word_44610, 0));	// 12970 cmp     word_44610, 0 ;~ 0613:2AC0
cs=0x613;eip=0x002ac5; 	J(JZ(loc_171dc));	// 12971 jz      short loc_171DC ;~ 0613:2AC5
cs=0x613;eip=0x002ac7; 	T(MOV(ax, 2));	// 12972 mov     ax, 2 ;~ 0613:2AC7
cs=0x613;eip=0x002aca; 	J(JMP(loc_171bd));	// 12973 jmp     short loc_171BD ;~ 0613:2ACA
loc_171dc:
	// 5062 
cs=0x613;eip=0x002acc; 	X(MOV(byte_4393c, 0));	// 12977 mov     byte_4393C, 0 ;~ 0613:2ACC
loc_171e1:
	// 5063 
cs=0x613;eip=0x002ad1; 	X(POP(si));	// 12981 pop     si ;~ 0613:2AD1
cs=0x613;eip=0x002ad2; 	X(POP(di));	// 12982 pop     di ;~ 0613:2AD2
cs=0x613;eip=0x002ad3; 	T(MOV(sp, bp));	// 12983 mov     sp, bp ;~ 0613:2AD3
cs=0x613;eip=0x002ad5; 	X(POP(bp));	// 12984 pop     bp ;~ 0613:2AD5
cs=0x613;eip=0x002ad6; 	J(RETF(0));	// 12985 retf ;~ 0613:2AD6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_17027: 	goto loc_17027;
        case m2c::kloc_17079: 	goto loc_17079;
        case m2c::kloc_170b2: 	goto loc_170b2;
        case m2c::kloc_170be: 	goto loc_170be;
        case m2c::kloc_170dc: 	goto loc_170dc;
        case m2c::kloc_170ec: 	goto loc_170ec;
        case m2c::kloc_170f6: 	goto loc_170f6;
        case m2c::kloc_17100: 	goto loc_17100;
        case m2c::kloc_1710e: 	goto loc_1710e;
        case m2c::kloc_1711b: 	goto loc_1711b;
        case m2c::kloc_1712e: 	goto loc_1712e;
        case m2c::kloc_17138: 	goto loc_17138;
        case m2c::kloc_17150: 	goto loc_17150;
        case m2c::kloc_1718a: 	goto loc_1718a;
        case m2c::kloc_171bd: 	goto loc_171bd;
        case m2c::kloc_171cc: 	goto loc_171cc;
        case m2c::kloc_171d0: 	goto loc_171d0;
        case m2c::kloc_171dc: 	goto loc_171dc;
        case m2c::kloc_171e1: 	goto loc_171e1;
        case m2c::kupdate_gamestate: 	goto update_gamestate;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool player_op(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    player_op:
    _begin:
#undef var_52
#define var_52 -0x52
	// 12998 var_52          = word ptr -52h ;~ 0613:2AD8
#undef var_4e
#define var_4e -0x4E
	// 12999 var_4E          = word ptr -4Eh ;~ 0613:2AD8
#undef var_3a
#define var_3a -0x3A
	// 13000 var_3A          = byte ptr -3Ah ;~ 0613:2AD8
#undef var_38
#define var_38 -0x38
	// 13001 var_38          = word ptr -38h ;~ 0613:2AD8
#undef var_34
#define var_34 -0x34
	// 13002 var_34          = word ptr -34h ;~ 0613:2AD8
#undef var_32
#define var_32 -0x32
	// 13003 var_32          = word ptr -32h ;~ 0613:2AD8
#undef var_30
#define var_30 -0x30
	// 13004 var_30          = word ptr -30h ;~ 0613:2AD8
#undef var_2e
#define var_2e -0x2E
	// 13005 var_2E          = word ptr -2Eh ;~ 0613:2AD8
#undef var_2c
#define var_2c -0x2C
	// 13006 var_2C          = byte ptr -2Ch ;~ 0613:2AD8
#undef var_2a
#define var_2a -0x2A
	// 13007 var_2A          = byte ptr -2Ah ;~ 0613:2AD8
#undef var_28
#define var_28 -0x28
	// 13008 var_28          = word ptr -28h ;~ 0613:2AD8
#undef var_26
#define var_26 -0x26
	// 13009 var_26          = word ptr -26h ;~ 0613:2AD8
#undef var_24
#define var_24 -0x24
	// 13010 var_24          = word ptr -24h ;~ 0613:2AD8
#undef var_20
#define var_20 -0x20
	// 13011 var_20          = word ptr -20h ;~ 0613:2AD8
#undef var_1e
#define var_1e -0x1E
	// 13012 var_1E          = word ptr -1Eh ;~ 0613:2AD8
#undef var_1c
#define var_1c -0x1C
	// 13013 var_1C          = byte ptr -1Ch ;~ 0613:2AD8
#undef var_1a
#define var_1a -0x1A
	// 13014 var_1A          = word ptr -1Ah ;~ 0613:2AD8
#undef var_16
#define var_16 -0x16
	// 13015 var_16          = word ptr -16h ;~ 0613:2AD8
#undef var_2
#define var_2 -2
	// 13016 var_2           = word ptr -2 ;~ 0613:2AD8
#undef arg_0
#define arg_0 6
	// 13017 arg_0           = byte ptr  6 ;~ 0613:2AD8
cs=0x613;eip=0x002ad8; 	X(PUSH(bp));	// 13019 push    bp ;~ 0613:2AD8
cs=0x613;eip=0x002ad9; 	T(MOV(bp, sp));	// 13020 mov     bp, sp ;~ 0613:2AD9
cs=0x613;eip=0x002adb; 	T(SUB(sp, 0x52));	// 13021 sub     sp, 52h ;~ 0613:2ADB
cs=0x613;eip=0x002ade; 	X(PUSH(di));	// 13022 push    di ;~ 0613:2ADE
cs=0x613;eip=0x002adf; 	X(PUSH(si));	// 13023 push    si ;~ 0613:2ADF
cs=0x613;eip=0x002ae0; 	T(CMP(show_penalty_counter, 0));	// 13024 cmp     show_penalty_counter, 0 ;~ 0613:2AE0
cs=0x613;eip=0x002ae5; 	J(JZ(loc_171fb));	// 13025 jz      short loc_171FB ;~ 0613:2AE5
cs=0x613;eip=0x002ae7; 	X(DEC(show_penalty_counter));	// 13026 dec     show_penalty_counter ;~ 0613:2AE7
loc_171fb:
	// 5064 
cs=0x613;eip=0x002aeb; 	X(MOV(byte_446b5, 1));	// 13029 mov     byte_446B5, 1 ;~ 0613:2AEB
cs=0x613;eip=0x002af0; 	T(CMP(byte_446af, 0));	// 13030 cmp     byte_446AF, 0 ;~ 0613:2AF0
cs=0x613;eip=0x002af5; 	J(JZ(loc_17242));	// 13031 jz      short loc_17242 ;~ 0613:2AF5
cs=0x613;eip=0x002af7; 	X(MOV(byte_448f1, 0));	// 13032 mov     byte_448F1, 0 ;~ 0613:2AF7
cs=0x613;eip=0x002afc; 	X(MOV(*(raddr(ss,bp+arg_0)), 2));	// 13033 mov     [bp+arg_0], 2 ;~ 0613:2AFC
cs=0x613;eip=0x002b00; 	T(CMP(word_44612, 0));	// 13034 cmp     word_44612, 0 ;~ 0613:2B00
cs=0x613;eip=0x002b05; 	J(JNZ(loc_17242));	// 13035 jnz     short loc_17242 ;~ 0613:2B05
cs=0x613;eip=0x002b07; 	X(MOV(byte_446b5, 0));	// 13036 mov     byte_446B5, 0 ;~ 0613:2B07
cs=0x613;eip=0x002b0c; 	T(CMP(word_44610, 0));	// 13037 cmp     word_44610, 0 ;~ 0613:2B0C
cs=0x613;eip=0x002b11; 	J(JNZ(loc_17242));	// 13038 jnz     short loc_17242 ;~ 0613:2B11
cs=0x613;eip=0x002b13; 	T(CMP(word_44632, 0));	// 13039 cmp     word_44632, 0 ;~ 0613:2B13
cs=0x613;eip=0x002b18; 	J(JNZ(loc_17242));	// 13040 jnz     short loc_17242 ;~ 0613:2B18
cs=0x613;eip=0x002b1a; 	T(CMP(word_44634, 0));	// 13041 cmp     word_44634, 0 ;~ 0613:2B1A
cs=0x613;eip=0x002b1f; 	J(JNZ(loc_17242));	// 13042 jnz     short loc_17242 ;~ 0613:2B1F
cs=0x613;eip=0x002b21; 	T(CMP(word_44636, 0));	// 13043 cmp     word_44636, 0 ;~ 0613:2B21
cs=0x613;eip=0x002b26; 	J(JNZ(loc_17242));	// 13044 jnz     short loc_17242 ;~ 0613:2B26
cs=0x613;eip=0x002b28; 	T(CMP(word_44638, 0));	// 13045 cmp     word_44638, 0 ;~ 0613:2B28
cs=0x613;eip=0x002b2d; 	J(JNZ(loc_17242));	// 13046 jnz     short loc_17242 ;~ 0613:2B2D
cs=0x613;eip=0x002b2f; 	J(JMP(loc_17810));	// 13047 jmp     loc_17810 ;~ 0613:2B2F
loc_17242:
	// 5065 
cs=0x613;eip=0x002b32; 	T(MOV(ax, offset(dseg,simd_player)));	// 13052 mov     ax, offset simd_player ;~ 0613:2B32
cs=0x613;eip=0x002b35; 	X(PUSH(ax));	// 13053 push    ax ;~ 0613:2B35
cs=0x613;eip=0x002b36; 	T(MOV(ax, offset(dseg,word_445e6)));	// 13054 mov     ax, offset word_445E6 ;~ 0613:2B36
cs=0x613;eip=0x002b39; 	X(PUSH(ax));	// 13055 push    ax ;~ 0613:2B39
cs=0x613;eip=0x002b3a; 	T(SUB(ax, ax));	// 13056 sub     ax, ax ;~ 0613:2B3A
cs=0x613;eip=0x002b3c; 	X(PUSH(ax));	// 13057 push    ax ;~ 0613:2B3C
cs=0x613;eip=0x002b3d; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 13058 mov     al, [bp+arg_0] ;~ 0613:2B3D
cs=0x613;eip=0x002b40; 	T(CBW);	// 13059 cbw ;~ 0613:2B40
cs=0x613;eip=0x002b41; 	X(PUSH(ax));	// 13060 push    ax ;~ 0613:2B41
cs=0x613;eip=0x002b42; 	X(PUSH(cs));	// 13061 push    cs ;~ 0613:2B42
cs=0x613;eip=0x002b43; 	J(CALL(update_car_speed,0));	// 13062 call    near ptr update_car_speed ;~ 0613:2B43
cs=0x613;eip=0x002b46; 	T(ADD(sp, 8));	// 13063 add     sp, 8 ;~ 0613:2B46
cs=0x613;eip=0x002b49; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 13064 mov     al, [bp+arg_0] ;~ 0613:2B49
cs=0x613;eip=0x002b4c; 	T(CBW);	// 13065 cbw ;~ 0613:2B4C
cs=0x613;eip=0x002b4d; 	T(SAR(ax, 1));	// 13066 sar     ax, 1 ;~ 0613:2B4D
cs=0x613;eip=0x002b4f; 	T(SAR(ax, 1));	// 13067 sar     ax, 1 ;~ 0613:2B4F
cs=0x613;eip=0x002b51; 	T(AND(ax, 3));	// 13068 and     ax, 3           ; masks all keys but the steering ones. ;~ 0613:2B51
cs=0x613;eip=0x002b54; 	X(PUSH(ax));	// 13069 push    ax ;~ 0613:2B54
cs=0x613;eip=0x002b55; 	X(PUSH(cs));	// 13070 push    cs ;~ 0613:2B55
cs=0x613;eip=0x002b56; 	J(CALL(upd_statef20_from_steer_input,0));	// 13071 call    near ptr upd_statef20_from_steer_input ;~ 0613:2B56
cs=0x613;eip=0x002b59; 	T(ADD(sp, 2));	// 13072 add     sp, 2 ;~ 0613:2B59
cs=0x613;eip=0x002b5c; 	T(MOV(ax, 1));	// 13073 mov     ax, 1 ;~ 0613:2B5C
cs=0x613;eip=0x002b5f; 	X(PUSH(ax));	// 13074 push    ax ;~ 0613:2B5F
cs=0x613;eip=0x002b60; 	T(MOV(ax, offset(dseg,simd_player)));	// 13075 mov     ax, offset simd_player ;~ 0613:2B60
cs=0x613;eip=0x002b63; 	X(PUSH(ax));	// 13076 push    ax ;~ 0613:2B63
cs=0x613;eip=0x002b64; 	T(MOV(ax, offset(dseg,word_445e6)));	// 13077 mov     ax, offset word_445E6 ;~ 0613:2B64
cs=0x613;eip=0x002b67; 	X(PUSH(ax));	// 13078 push    ax ;~ 0613:2B67
cs=0x613;eip=0x002b68; 	X(PUSH(cs));	// 13079 push    cs ;~ 0613:2B68
cs=0x613;eip=0x002b69; 	J(CALL(update_grip,0));	// 13080 call    near ptr update_grip ;~ 0613:2B69
cs=0x613;eip=0x002b6c; 	T(ADD(sp, 6));	// 13081 add     sp, 6 ;~ 0613:2B6C
cs=0x613;eip=0x002b6f; 	T(SUB(ax, ax));	// 13082 sub     ax, ax ;~ 0613:2B6F
cs=0x613;eip=0x002b71; 	X(PUSH(ax));	// 13083 push    ax ;~ 0613:2B71
cs=0x613;eip=0x002b72; 	T(MOV(ax, offset(dseg,simd_opponent)));	// 13084 mov     ax, offset simd_opponent ; simd2 ;~ 0613:2B72
cs=0x613;eip=0x002b75; 	X(PUSH(ax));	// 13085 push    ax ;~ 0613:2B75
cs=0x613;eip=0x002b76; 	T(MOV(ax, offset(dseg,word_446b6)));	// 13086 mov     ax, offset word_446B6 ; opp CARSTATE ;~ 0613:2B76
cs=0x613;eip=0x002b79; 	X(PUSH(ax));	// 13087 push    ax ;~ 0613:2B79
cs=0x613;eip=0x002b7a; 	T(MOV(ax, offset(dseg,simd_player)));	// 13088 mov     ax, offset simd_player ;~ 0613:2B7A
cs=0x613;eip=0x002b7d; 	X(PUSH(ax));	// 13089 push    ax ;~ 0613:2B7D
cs=0x613;eip=0x002b7e; 	T(MOV(ax, offset(dseg,word_445e6)));	// 13090 mov     ax, offset word_445E6 ; player CARSTATE ;~ 0613:2B7E
cs=0x613;eip=0x002b81; 	X(PUSH(ax));	// 13091 push    ax ;~ 0613:2B81
cs=0x613;eip=0x002b82; 	X(PUSH(cs));	// 13092 push    cs ;~ 0613:2B82
cs=0x613;eip=0x002b83; 	J(CALL(update_player_state,0));	// 13093 call    near ptr update_player_state ;~ 0613:2B83
cs=0x613;eip=0x002b86; 	T(ADD(sp, 0x0A));	// 13094 add     sp, 0Ah ;~ 0613:2B86
cs=0x613;eip=0x002b89; 	T(MOV(ax, word_44612));	// 13095 mov     ax, word_44612 ;~ 0613:2B89
cs=0x613;eip=0x002b8c; 	T(SUB(dx, dx));	// 13096 sub     dx, dx ;~ 0613:2B8C
cs=0x613;eip=0x002b8e; 	X(ADD(word_445d0, ax));	// 13097 add     word_445D0, ax ;~ 0613:2B8E
cs=0x613;eip=0x002b92; 	X(ADC(word_445d2, dx));	// 13098 adc     word_445D2, dx ;~ 0613:2B92
cs=0x613;eip=0x002b96; 	T(MOV(al, byte_448ef));	// 13099 mov     al, byte_448EF ;~ 0613:2B96
cs=0x613;eip=0x002b99; 	X(MOV(*(raddr(ss,bp+var_1c)), al));	// 13100 mov     [bp+var_1C], al ;~ 0613:2B99
cs=0x613;eip=0x002b9c; 	T(MOV(ax, word_44786));	// 13101 mov     ax, word_44786 ;~ 0613:2B9C
cs=0x613;eip=0x002b9f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 13102 mov     [bp+var_2], ax ;~ 0613:2B9F
cs=0x613;eip=0x002ba2; 	T(ax = bp+var_1e);	// 13103 lea     ax, [bp+var_1E] ;~ 0613:2BA2
cs=0x613;eip=0x002ba5; 	X(PUSH(ax));	// 13104 push    ax ;~ 0613:2BA5
cs=0x613;eip=0x002ba6; 	T(ax = bp+var_2);	// 13105 lea     ax, [bp+var_2] ;~ 0613:2BA6
cs=0x613;eip=0x002ba9; 	X(PUSH(ax));	// 13106 push    ax ;~ 0613:2BA9
cs=0x613;eip=0x002baa; 	X(PUSH(cs));	// 13107 push    cs ;~ 0613:2BAA
cs=0x613;eip=0x002bab; 	J(CALL(detect_penalty,0));	// 13108 call    near ptr detect_penalty ;~ 0613:2BAB
cs=0x613;eip=0x002bae; 	T(ADD(sp, 4));	// 13109 add     sp, 4 ;~ 0613:2BAE
cs=0x613;eip=0x002bb1; 	T(CBW);	// 13110 cbw ;~ 0613:2BB1
cs=0x613;eip=0x002bb2; 	T(MOV(si, ax));	// 13111 mov     si, ax ;~ 0613:2BB2
cs=0x613;eip=0x002bb4; 	T(OR(si, si));	// 13112 or      si, si ;~ 0613:2BB4
cs=0x613;eip=0x002bb6; 	J(JNZ(loc_172cb));	// 13113 jnz     short loc_172CB ;~ 0613:2BB6
cs=0x613;eip=0x002bb8; 	J(JMP(loc_173b3));	// 13114 jmp     loc_173B3 ;~ 0613:2BB8
loc_172cb:
	// 5066 
cs=0x613;eip=0x002bbb; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0x0FFFE));	// 13118 cmp     [bp+var_1E], 0FFFEh ;~ 0613:2BBB
cs=0x613;eip=0x002bbf; 	J(JNZ(loc_172d8));	// 13119 jnz     short loc_172D8 ;~ 0613:2BBF
cs=0x613;eip=0x002bc1; 	X(MOV(byte_448ef, 1));	// 13120 mov     byte_448EF, 1 ;~ 0613:2BC1
cs=0x613;eip=0x002bc6; 	J(JMP(loc_172e4));	// 13121 jmp     short loc_172E4 ;~ 0613:2BC6
loc_172d8:
	// 5067 
cs=0x613;eip=0x002bc8; 	T(CMP(byte_448ef, 1));	// 13125 cmp     byte_448EF, 1 ;~ 0613:2BC8
cs=0x613;eip=0x002bcd; 	J(JNZ(loc_172e9));	// 13126 jnz     short loc_172E9 ;~ 0613:2BCD
cs=0x613;eip=0x002bcf; 	X(MOV(byte_448ef, 0));	// 13127 mov     byte_448EF, 0 ;~ 0613:2BCF
loc_172e4:
	// 5068 
cs=0x613;eip=0x002bd4; 	X(MOV(byte_448f0, 0));	// 13130 mov     byte_448F0, 0 ;~ 0613:2BD4
loc_172e9:
	// 5069 
cs=0x613;eip=0x002bd9; 	T(CMP(byte_448ef, 0));	// 13133 cmp     byte_448EF, 0 ;~ 0613:2BD9
cs=0x613;eip=0x002bde; 	J(JZ(loc_172f3));	// 13134 jz      short loc_172F3 ;~ 0613:2BDE
cs=0x613;eip=0x002be0; 	J(JMP(loc_173ad));	// 13135 jmp     loc_173AD ;~ 0613:2BE0
loc_172f3:
	// 5070 
cs=0x613;eip=0x002be3; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 13139 cmp     [bp+var_2], 0 ;~ 0613:2BE3
cs=0x613;eip=0x002be7; 	J(JNZ(loc_17308));	// 13140 jnz     short loc_17308 ;~ 0613:2BE7
cs=0x613;eip=0x002be9; 	T(CMP(word_44788, 0));	// 13141 cmp     word_44788, 0 ;~ 0613:2BE9
cs=0x613;eip=0x002bee; 	J(JZ(loc_17308));	// 13142 jz      short loc_17308 ;~ 0613:2BEE
cs=0x613;eip=0x002bf0; 	X(INC(byte_446b3));	// 13143 inc     byte_446B3 ;~ 0613:2BF0
cs=0x613;eip=0x002bf4; 	J(JMP(loc_1737b));	// 13144 jmp     short loc_1737B ;~ 0613:2BF4
loc_17308:
	// 5071 
cs=0x613;eip=0x002bf8; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 13151 cmp     [bp+var_1E], 0 ;~ 0613:2BF8
cs=0x613;eip=0x002bfc; 	J(JL(loc_17322));	// 13152 jl      short loc_17322 ;~ 0613:2BFC
cs=0x613;eip=0x002bfe; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 3));	// 13153 cmp     [bp+var_1E], 3 ;~ 0613:2BFE
cs=0x613;eip=0x002c02; 	J(JGE(loc_17322));	// 13154 jge     short loc_17322 ;~ 0613:2C02
cs=0x613;eip=0x002c04; 	X(MOV(byte_448f0, 0));	// 13155 mov     byte_448F0, 0 ;~ 0613:2C04
cs=0x613;eip=0x002c09; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13156 mov     ax, [bp+var_2] ;~ 0613:2C09
cs=0x613;eip=0x002c0c; 	X(MOV(word_44786, ax));	// 13157 mov     word_44786, ax ;~ 0613:2C0C
cs=0x613;eip=0x002c0f; 	J(JMP(loc_173ad));	// 13158 jmp     loc_173AD ;~ 0613:2C0F
loc_17322:
	// 5072 
cs=0x613;eip=0x002c12; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0x0FFFF));	// 13163 cmp     [bp+var_1E], 0FFFFh ;~ 0613:2C12
cs=0x613;eip=0x002c16; 	J(JZ(loc_1732e));	// 13164 jz      short loc_1732E ;~ 0613:2C16
cs=0x613;eip=0x002c18; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 3));	// 13165 cmp     [bp+var_1E], 3 ;~ 0613:2C18
cs=0x613;eip=0x002c1c; 	J(JLE(loc_173ad));	// 13166 jle     short loc_173AD ;~ 0613:2C1C
loc_1732e:
	// 5073 
cs=0x613;eip=0x002c1e; 	T(MOV(di, word_44788));	// 13169 mov     di, word_44788 ;~ 0613:2C1E
cs=0x613;eip=0x002c22; 	T(SHL(di, 1));	// 13170 shl     di, 1 ;~ 0613:2C22
cs=0x613;eip=0x002c24; 	T(LES(bx, td01_track_file_cpy));	// 13171 les     bx, td01_track_file_cpy ;~ 0613:2C24
cs=0x613;eip=0x002c28; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13172 mov     ax, [bp+var_2] ;~ 0613:2C28
cs=0x613;eip=0x002c2b; 	T(CMP(*(dw*)(raddr(es,bx+di)), ax));	// 13173 cmp     es:[bx+di], ax ;~ 0613:2C2B
cs=0x613;eip=0x002c2e; 	J(JZ(loc_17349));	// 13174 jz      short loc_17349 ;~ 0613:2C2E
cs=0x613;eip=0x002c30; 	T(LES(bx, td02_penalty_related));	// 13175 les     bx, td02_penalty_related ;~ 0613:2C30
cs=0x613;eip=0x002c34; 	T(CMP(*(dw*)(raddr(es,bx+di)), ax));	// 13176 cmp     es:[bx+di], ax ;~ 0613:2C34
cs=0x613;eip=0x002c37; 	J(JNZ(loc_17350));	// 13177 jnz     short loc_17350 ;~ 0613:2C37
loc_17349:
	// 5074 
cs=0x613;eip=0x002c39; 	X(INC(byte_448f0));	// 13180 inc     byte_448F0 ;~ 0613:2C39
cs=0x613;eip=0x002c3d; 	J(JMP(loc_17374));	// 13181 jmp     short loc_17374 ;~ 0613:2C3D
loc_17350:
	// 5075 
cs=0x613;eip=0x002c40; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_2))));	// 13186 mov     di, [bp+var_2] ;~ 0613:2C40
cs=0x613;eip=0x002c43; 	T(SHL(di, 1));	// 13187 shl     di, 1 ;~ 0613:2C43
cs=0x613;eip=0x002c45; 	T(LES(bx, td01_track_file_cpy));	// 13188 les     bx, td01_track_file_cpy ;~ 0613:2C45
cs=0x613;eip=0x002c49; 	T(MOV(ax, word_44788));	// 13189 mov     ax, word_44788 ;~ 0613:2C49
cs=0x613;eip=0x002c4c; 	T(CMP(*(dw*)(raddr(es,bx+di)), ax));	// 13190 cmp     es:[bx+di], ax ;~ 0613:2C4C
cs=0x613;eip=0x002c4f; 	J(JZ(loc_1736a));	// 13191 jz      short loc_1736A ;~ 0613:2C4F
cs=0x613;eip=0x002c51; 	T(LES(bx, td02_penalty_related));	// 13192 les     bx, td02_penalty_related ;~ 0613:2C51
cs=0x613;eip=0x002c55; 	T(CMP(*(dw*)(raddr(es,bx+di)), ax));	// 13193 cmp     es:[bx+di], ax ;~ 0613:2C55
cs=0x613;eip=0x002c58; 	J(JNZ(loc_1736f));	// 13194 jnz     short loc_1736F ;~ 0613:2C58
loc_1736a:
	// 5076 
cs=0x613;eip=0x002c5a; 	X(MOV(byte_448ef, 2));	// 13197 mov     byte_448EF, 2 ;~ 0613:2C5A
loc_1736f:
	// 5077 
cs=0x613;eip=0x002c5f; 	X(MOV(byte_448f0, 1));	// 13200 mov     byte_448F0, 1 ;~ 0613:2C5F
loc_17374:
	// 5078 
cs=0x613;eip=0x002c64; 	T(CMP(byte_448f0, 3));	// 13203 cmp     byte_448F0, 3 ;~ 0613:2C64
cs=0x613;eip=0x002c69; 	J(JL(loc_173ad));	// 13204 jl      short loc_173AD ;~ 0613:2C69
loc_1737b:
	// 5079 
cs=0x613;eip=0x002c6b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13207 mov     ax, [bp+var_2] ;~ 0613:2C6B
cs=0x613;eip=0x002c6e; 	X(MOV(word_44786, ax));	// 13208 mov     word_44786, ax ;~ 0613:2C6E
cs=0x613;eip=0x002c71; 	X(MOV(byte_448f0, 0));	// 13209 mov     byte_448F0, 0 ;~ 0613:2C71
cs=0x613;eip=0x002c76; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 13210 cmp     [bp+var_1E], 0 ;~ 0613:2C76
cs=0x613;eip=0x002c7a; 	J(JLE(loc_173ad));	// 13211 jle     short loc_173AD ;~ 0613:2C7A
cs=0x613;eip=0x002c7c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 13212 mov     ax, [bp+var_1E] ;~ 0613:2C7C
cs=0x613;eip=0x002c7f; 	X(IMUL1_2(framespersec));	// 13213 imul    framespersec ;~ 0613:2C7F
cs=0x613;eip=0x002c83; 	T(MOV(cx, ax));	// 13214 mov     cx, ax ;~ 0613:2C83
cs=0x613;eip=0x002c85; 	T(SHL(ax, 1));	// 13215 shl     ax, 1 ;~ 0613:2C85
cs=0x613;eip=0x002c87; 	T(ADD(ax, cx));	// 13216 add     ax, cx ;~ 0613:2C87
cs=0x613;eip=0x002c89; 	X(MOV(penalty_time, ax));	// 13217 mov     penalty_time, ax ;~ 0613:2C89
cs=0x613;eip=0x002c8c; 	T(MOV(al, *(db*)(((db*)&framespersec))));	// 13218 mov     al, byte ptr framespersec ;~ 0613:2C8C
cs=0x613;eip=0x002c8f; 	T(SHL(al, 1));	// 13219 shl     al, 1 ;~ 0613:2C8F
cs=0x613;eip=0x002c91; 	T(SHL(al, 1));	// 13220 shl     al, 1 ;~ 0613:2C91
cs=0x613;eip=0x002c93; 	X(MOV(show_penalty_counter, al));	// 13221 mov     show_penalty_counter, al ;~ 0613:2C93
cs=0x613;eip=0x002c96; 	T(MOV(ax, penalty_time));	// 13222 mov     ax, penalty_time ;~ 0613:2C96
cs=0x613;eip=0x002c99; 	X(ADD(word_445de, ax));	// 13223 add     word_445DE, ax ;~ 0613:2C99
loc_173ad:
	// 5080 
cs=0x613;eip=0x002c9d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13227 mov     ax, [bp+var_2] ;~ 0613:2C9D
cs=0x613;eip=0x002ca0; 	X(MOV(word_44788, ax));	// 13228 mov     word_44788, ax ;~ 0613:2CA0
loc_173b3:
	// 5081 
cs=0x613;eip=0x002ca3; 	X(MOV(byte_448f1, 0));	// 13231 mov     byte_448F1, 0 ;~ 0613:2CA3
cs=0x613;eip=0x002ca8; 	T(CMP(byte_448ef, 1));	// 13232 cmp     byte_448EF, 1 ;~ 0613:2CA8
cs=0x613;eip=0x002cad; 	J(JNZ(loc_173c2));	// 13233 jnz     short loc_173C2 ;~ 0613:2CAD
cs=0x613;eip=0x002caf; 	J(JMP(loc_17810));	// 13234 jmp     loc_17810 ;~ 0613:2CAF
loc_173c2:
	// 5082 
cs=0x613;eip=0x002cb2; 	T(MOV(ax, 1));	// 13238 mov     ax, 1 ;~ 0613:2CB2
cs=0x613;eip=0x002cb5; 	X(PUSH(ax));	// 13239 push    ax ;~ 0613:2CB5
cs=0x613;eip=0x002cb6; 	X(PUSH(word_445fe));	// 13240 push    word_445FE ;~ 0613:2CB6
cs=0x613;eip=0x002cba; 	X(PUSH(word_44600));	// 13241 push    word_44600 ;~ 0613:2CBA
cs=0x613;eip=0x002cbe; 	X(PUSH(word_44602));	// 13242 push    word_44602 ;~ 0613:2CBE
cs=0x613;eip=0x002cc2; 	J(CALLF(mat_rot_zxy,0));	// 13243 call    mat_rot_zxy ;~ 0613:2CC2
cs=0x613;eip=0x002cc7; 	T(ADD(sp, 8));	// 13244 add     sp, 8 ;~ 0613:2CC7
cs=0x613;eip=0x002cca; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 13245 mov     [bp+var_20], ax ;~ 0613:2CCA
cs=0x613;eip=0x002ccd; 	T(CMP(byte_448ef, 2));	// 13246 cmp     byte_448EF, 2 ;~ 0613:2CCD
cs=0x613;eip=0x002cd2; 	J(JNZ(loc_173f6));	// 13247 jnz     short loc_173F6 ;~ 0613:2CD2
cs=0x613;eip=0x002cd4; 	T(CMP(byte_446af, 0));	// 13248 cmp     byte_446AF, 0 ;~ 0613:2CD4
cs=0x613;eip=0x002cd9; 	J(JNZ(loc_173f0));	// 13249 jnz     short loc_173F0 ;~ 0613:2CD9
cs=0x613;eip=0x002cdb; 	X(MOV(byte_448f1, 3));	// 13250 mov     byte_448F1, 3 ;~ 0613:2CDB
loc_173f0:
	// 5083 
cs=0x613;eip=0x002ce0; 	T(MOV(ax, word_44788));	// 13253 mov     ax, word_44788 ;~ 0613:2CE0
cs=0x613;eip=0x002ce3; 	J(JMP(loc_174c9));	// 13254 jmp     loc_174C9 ;~ 0613:2CE3
loc_173f6:
	// 5084 
cs=0x613;eip=0x002ce6; 	T(CMP(word_44630, 0x0FFFF));	// 13258 cmp     word_44630, 0FFFFh ;~ 0613:2CE6
cs=0x613;eip=0x002ceb; 	J(JNZ(loc_17402));	// 13259 jnz     short loc_17402 ;~ 0613:2CEB
loc_173fd:
	// 5085 
cs=0x613;eip=0x002ced; 	T(SUB(si, si));	// 13262 sub     si, si ;~ 0613:2CED
cs=0x613;eip=0x002cef; 	J(JMP(loc_174b3));	// 13263 jmp     loc_174B3 ;~ 0613:2CEF
loc_17402:
	// 5086 
cs=0x613;eip=0x002cf2; 	T(CMP(*(raddr(ss,bp+var_1c)), 0));	// 13267 cmp     [bp+var_1C], 0 ;~ 0613:2CF2
cs=0x613;eip=0x002cf6; 	J(JZ(loc_1740f));	// 13268 jz      short loc_1740F ;~ 0613:2CF6
cs=0x613;eip=0x002cf8; 	T(CMP(byte_448ef, 0));	// 13269 cmp     byte_448EF, 0 ;~ 0613:2CF8
cs=0x613;eip=0x002cfd; 	J(JZ(loc_17431));	// 13270 jz      short loc_17431 ;~ 0613:2CFD
loc_1740f:
	// 5087 
cs=0x613;eip=0x002cff; 	T(MOV(ax, word_44786));	// 13273 mov     ax, word_44786 ;~ 0613:2CFF
cs=0x613;eip=0x002d02; 	T(CMP(word_44630, ax));	// 13274 cmp     word_44630, ax ;~ 0613:2D02
cs=0x613;eip=0x002d06; 	J(JZ(loc_1743a));	// 13275 jz      short loc_1743A ;~ 0613:2D06
cs=0x613;eip=0x002d08; 	T(MOV(di, ax));	// 13276 mov     di, ax ;~ 0613:2D08
cs=0x613;eip=0x002d0a; 	T(SHL(di, 1));	// 13277 shl     di, 1 ;~ 0613:2D0A
cs=0x613;eip=0x002d0c; 	T(LES(bx, td01_track_file_cpy));	// 13278 les     bx, td01_track_file_cpy ;~ 0613:2D0C
cs=0x613;eip=0x002d10; 	T(MOV(ax, word_44630));	// 13279 mov     ax, word_44630 ;~ 0613:2D10
cs=0x613;eip=0x002d13; 	T(CMP(*(dw*)(raddr(es,bx+di)), ax));	// 13280 cmp     es:[bx+di], ax ;~ 0613:2D13
cs=0x613;eip=0x002d16; 	J(JZ(loc_1743a));	// 13281 jz      short loc_1743A ;~ 0613:2D16
cs=0x613;eip=0x002d18; 	T(LES(bx, td02_penalty_related));	// 13282 les     bx, td02_penalty_related ;~ 0613:2D18
cs=0x613;eip=0x002d1c; 	T(CMP(*(dw*)(raddr(es,bx+di)), ax));	// 13283 cmp     es:[bx+di], ax ;~ 0613:2D1C
cs=0x613;eip=0x002d1f; 	J(JZ(loc_1743a));	// 13284 jz      short loc_1743A ;~ 0613:2D1F
loc_17431:
	// 5088 
cs=0x613;eip=0x002d21; 	X(MOV(word_44630, 0x0FFFF));	// 13287 mov     word_44630, 0FFFFh ;~ 0613:2D21
cs=0x613;eip=0x002d27; 	J(JMP(loc_173fd));	// 13288 jmp     short loc_173FD ;~ 0613:2D27
loc_1743a:
	// 5089 
cs=0x613;eip=0x002d2a; 	T(MOV(ax, word_4468a));	// 13294 mov     ax, word_4468A ;~ 0613:2D2A
cs=0x613;eip=0x002d2d; 	T(MOV(cx, word_445e6));	// 13295 mov     cx, word_445E6 ;~ 0613:2D2D
cs=0x613;eip=0x002d31; 	T(MOV(bx, word_445e8));	// 13296 mov     bx, word_445E8 ;~ 0613:2D31
cs=0x613;eip=0x002d35; 	T(MOV(dx, cx));	// 13297 mov     dx, cx ;~ 0613:2D35
cs=0x613;eip=0x002d37; 	T(MOV(cl, 6));	// 13298 mov     cl, 6 ;~ 0613:2D37
loc_17449:
	// 5090 
cs=0x613;eip=0x002d39; 	T(SAR(bx, 1));	// 13301 sar     bx, 1 ;~ 0613:2D39
cs=0x613;eip=0x002d3b; 	T(RCR(dx, 1));	// 13302 rcr     dx, 1 ;~ 0613:2D3B
cs=0x613;eip=0x002d3d; 	T(DEC(cl));	// 13303 dec     cl ;~ 0613:2D3D
cs=0x613;eip=0x002d3f; 	J(JNZ(loc_17449));	// 13304 jnz     short loc_17449 ;~ 0613:2D3F
cs=0x613;eip=0x002d41; 	T(SUB(ax, dx));	// 13305 sub     ax, dx ;~ 0613:2D41
cs=0x613;eip=0x002d43; 	X(MOV(*(dw*)(raddr(ss,bp+var_32)), ax));	// 13306 mov     [bp+var_32], ax ;~ 0613:2D43
cs=0x613;eip=0x002d46; 	T(CMP(word_4468c, 0x0FFFF));	// 13307 cmp     word_4468C, 0FFFFh ;~ 0613:2D46
cs=0x613;eip=0x002d4b; 	J(JZ(loc_1747c));	// 13308 jz      short loc_1747C ;~ 0613:2D4B
cs=0x613;eip=0x002d4d; 	T(MOV(ax, word_4468c));	// 13309 mov     ax, word_4468C ;~ 0613:2D4D
cs=0x613;eip=0x002d50; 	T(MOV(cx, word_445ea));	// 13310 mov     cx, word_445EA ;~ 0613:2D50
cs=0x613;eip=0x002d54; 	T(MOV(bx, word_445ec));	// 13311 mov     bx, word_445EC ;~ 0613:2D54
cs=0x613;eip=0x002d58; 	T(MOV(dx, cx));	// 13312 mov     dx, cx ;~ 0613:2D58
cs=0x613;eip=0x002d5a; 	T(MOV(cl, 6));	// 13313 mov     cl, 6 ;~ 0613:2D5A
loc_1746c:
	// 5091 
cs=0x613;eip=0x002d5c; 	T(SAR(bx, 1));	// 13316 sar     bx, 1 ;~ 0613:2D5C
cs=0x613;eip=0x002d5e; 	T(RCR(dx, 1));	// 13317 rcr     dx, 1 ;~ 0613:2D5E
cs=0x613;eip=0x002d60; 	T(DEC(cl));	// 13318 dec     cl ;~ 0613:2D60
cs=0x613;eip=0x002d62; 	J(JNZ(loc_1746c));	// 13319 jnz     short loc_1746C ;~ 0613:2D62
cs=0x613;eip=0x002d64; 	T(SUB(ax, dx));	// 13320 sub     ax, dx ;~ 0613:2D64
cs=0x613;eip=0x002d66; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 13321 mov     [bp+var_30], ax ;~ 0613:2D66
cs=0x613;eip=0x002d69; 	J(JMP(loc_17481));	// 13322 jmp     short loc_17481 ;~ 0613:2D69
loc_1747c:
	// 5092 
cs=0x613;eip=0x002d6c; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), 0));	// 13327 mov     [bp+var_30], 0 ;~ 0613:2D6C
loc_17481:
	// 5093 
cs=0x613;eip=0x002d71; 	T(MOV(ax, word_4468e));	// 13330 mov     ax, word_4468E ;~ 0613:2D71
cs=0x613;eip=0x002d74; 	T(MOV(cx, word_445ee));	// 13331 mov     cx, word_445EE ;~ 0613:2D74
cs=0x613;eip=0x002d78; 	T(MOV(bx, word_445f0));	// 13332 mov     bx, word_445F0 ;~ 0613:2D78
cs=0x613;eip=0x002d7c; 	T(MOV(dx, cx));	// 13333 mov     dx, cx ;~ 0613:2D7C
cs=0x613;eip=0x002d7e; 	T(MOV(cl, 6));	// 13334 mov     cl, 6 ;~ 0613:2D7E
loc_17490:
	// 5094 
cs=0x613;eip=0x002d80; 	T(SAR(bx, 1));	// 13337 sar     bx, 1 ;~ 0613:2D80
cs=0x613;eip=0x002d82; 	T(RCR(dx, 1));	// 13338 rcr     dx, 1 ;~ 0613:2D82
cs=0x613;eip=0x002d84; 	T(DEC(cl));	// 13339 dec     cl ;~ 0613:2D84
cs=0x613;eip=0x002d86; 	J(JNZ(loc_17490));	// 13340 jnz     short loc_17490 ;~ 0613:2D86
cs=0x613;eip=0x002d88; 	T(SUB(ax, dx));	// 13341 sub     ax, dx ;~ 0613:2D88
cs=0x613;eip=0x002d8a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 13342 mov     [bp+var_2E], ax ;~ 0613:2D8A
cs=0x613;eip=0x002d8d; 	T(ax = bp+var_38);	// 13343 lea     ax, [bp+var_38] ;~ 0613:2D8D
cs=0x613;eip=0x002d90; 	X(PUSH(ax));	// 13344 push    ax ;~ 0613:2D90
cs=0x613;eip=0x002d91; 	X(PUSH(*(dw*)(raddr(ss,bp+var_20))));	// 13345 push    [bp+var_20] ;~ 0613:2D91
cs=0x613;eip=0x002d94; 	T(ax = bp+var_32);	// 13346 lea     ax, [bp+var_32] ;~ 0613:2D94
cs=0x613;eip=0x002d97; 	X(PUSH(ax));	// 13347 push    ax ;~ 0613:2D97
cs=0x613;eip=0x002d98; 	J(CALLF(mat_mul_vector,0));	// 13348 call    mat_mul_vector ;~ 0613:2D98
cs=0x613;eip=0x002d9d; 	T(ADD(sp, 6));	// 13349 add     sp, 6 ;~ 0613:2D9D
cs=0x613;eip=0x002da0; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_34))));	// 13350 mov     si, [bp+var_34] ;~ 0613:2DA0
loc_174b3:
	// 5095 
cs=0x613;eip=0x002da3; 	T(CMP(si, 0x113));	// 13353 cmp     si, 113h ;~ 0613:2DA3
cs=0x613;eip=0x002da7; 	J(JL(loc_174bc));	// 13354 jl      short loc_174BC ;~ 0613:2DA7
cs=0x613;eip=0x002da9; 	J(JMP(loc_17699));	// 13355 jmp     loc_17699 ;~ 0613:2DA9
loc_174bc:
	// 5096 
cs=0x613;eip=0x002dac; 	T(CMP(word_44630, 0x0FFFF));	// 13359 cmp     word_44630, 0FFFFh ;~ 0613:2DAC
cs=0x613;eip=0x002db1; 	J(JZ(loc_174c6));	// 13360 jz      short loc_174C6 ;~ 0613:2DB1
cs=0x613;eip=0x002db3; 	J(JMP(loc_1764c));	// 13361 jmp     loc_1764C ;~ 0613:2DB3
loc_174c6:
	// 5097 
cs=0x613;eip=0x002db6; 	T(MOV(ax, word_44786));	// 13365 mov     ax, word_44786 ;~ 0613:2DB6
loc_174c9:
	// 5098 
cs=0x613;eip=0x002db9; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 13368 mov     [bp+var_2], ax ;~ 0613:2DB9
cs=0x613;eip=0x002dbc; 	T(MOV(bx, ax));	// 13369 mov     bx, ax ;~ 0613:2DBC
cs=0x613;eip=0x002dbe; 	T(SHL(bx, 1));	// 13370 shl     bx, 1 ;~ 0613:2DBE
cs=0x613;eip=0x002dc0; 	T(LES(di, td02_penalty_related));	// 13371 les     di, td02_penalty_related ;~ 0613:2DC0
cs=0x613;eip=0x002dc4; 	T(CMP(*(dw*)(raddr(es,bx+di)), 0x0FFFF));	// 13372 cmp     word ptr es:[bx+di], 0FFFFh ;~ 0613:2DC4
cs=0x613;eip=0x002dc8; 	J(JZ(loc_174dd));	// 13373 jz      short loc_174DD ;~ 0613:2DC8
cs=0x613;eip=0x002dca; 	J(JMP(loc_17771));	// 13374 jmp     loc_17771 ;~ 0613:2DCA
loc_174dd:
	// 5099 
cs=0x613;eip=0x002dcd; 	X(MOV(*(raddr(ss,bp+var_2a)), 0));	// 13378 mov     [bp+var_2A], 0 ;~ 0613:2DCD
cs=0x613;eip=0x002dd1; 	X(MOV(*(raddr(ss,bp+var_2c)), 0));	// 13379 mov     [bp+var_2C], 0 ;~ 0613:2DD1
loc_174e5:
	// 5100 
cs=0x613;eip=0x002dd5; 	T(SUB(ax, ax));	// 13382 sub     ax, ax ;~ 0613:2DD5
cs=0x613;eip=0x002dd7; 	X(PUSH(ax));	// 13383 push    ax ;~ 0613:2DD7
cs=0x613;eip=0x002dd8; 	T(MOV(al, *(raddr(ss,bp+var_2c))));	// 13384 mov     al, [bp+var_2C] ;~ 0613:2DD8
cs=0x613;eip=0x002ddb; 	T(SUB(ah, ah));	// 13385 sub     ah, ah ;~ 0613:2DDB
cs=0x613;eip=0x002ddd; 	X(PUSH(ax));	// 13386 push    ax ;~ 0613:2DDD
cs=0x613;eip=0x002dde; 	T(MOV(ax, offset(dseg,word_4468a)));	// 13387 mov     ax, offset word_4468A ;~ 0613:2DDE
cs=0x613;eip=0x002de1; 	X(PUSH(ax));	// 13388 push    ax ;~ 0613:2DE1
cs=0x613;eip=0x002de2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 13389 push    [bp+var_2] ;~ 0613:2DE2
cs=0x613;eip=0x002de5; 	X(PUSH(cs));	// 13390 push    cs ;~ 0613:2DE5
cs=0x613;eip=0x002de6; 	J(CALL(sub_18d60,0));	// 13391 call    near ptr sub_18D60 ;~ 0613:2DE6
cs=0x613;eip=0x002de9; 	T(ADD(sp, 8));	// 13392 add     sp, 8 ;~ 0613:2DE9
cs=0x613;eip=0x002dec; 	X(MOV(*(raddr(ss,bp+var_2a)), al));	// 13393 mov     [bp+var_2A], al ;~ 0613:2DEC
cs=0x613;eip=0x002def; 	X(PUSH(si));	// 13394 push    si ;~ 0613:2DEF
cs=0x613;eip=0x002df0; 	T(di = bp+var_28);	// 13395 lea     di, [bp+var_28] ;~ 0613:2DF0
cs=0x613;eip=0x002df3; 	T(MOV(si, offset(dseg,word_4468a)));	// 13396 mov     si, offset word_4468A ;~ 0613:2DF3
cs=0x613;eip=0x002df6; 	X(PUSH(ss));	// 13397 push    ss ;~ 0613:2DF6
cs=0x613;eip=0x002df7; 	X(POP(es));	// 13398 pop     es ;~ 0613:2DF7
cs=0x613;eip=0x002df8; 	X(MOVSW);	// 13399 movsw ;~ 0613:2DF8
cs=0x613;eip=0x002df9; 	X(MOVSW);	// 13400 movsw ;~ 0613:2DF9
cs=0x613;eip=0x002dfa; 	X(MOVSW);	// 13401 movsw ;~ 0613:2DFA
cs=0x613;eip=0x002dfb; 	X(POP(si));	// 13402 pop     si ;~ 0613:2DFB
cs=0x613;eip=0x002dfc; 	T(MOV(ax, word_445e6));	// 13403 mov     ax, word_445E6 ;~ 0613:2DFC
cs=0x613;eip=0x002dff; 	T(MOV(dx, word_445e8));	// 13404 mov     dx, word_445E8 ;~ 0613:2DFF
cs=0x613;eip=0x002e03; 	T(MOV(cl, 6));	// 13405 mov     cl, 6 ;~ 0613:2E03
loc_17515:
	// 5101 
cs=0x613;eip=0x002e05; 	T(SAR(dx, 1));	// 13408 sar     dx, 1 ;~ 0613:2E05
cs=0x613;eip=0x002e07; 	T(RCR(ax, 1));	// 13409 rcr     ax, 1 ;~ 0613:2E07
cs=0x613;eip=0x002e09; 	T(DEC(cl));	// 13410 dec     cl ;~ 0613:2E09
cs=0x613;eip=0x002e0b; 	J(JNZ(loc_17515));	// 13411 jnz     short loc_17515 ;~ 0613:2E0B
cs=0x613;eip=0x002e0d; 	X(SUB(*(dw*)(raddr(ss,bp+var_28)), ax));	// 13412 sub     [bp+var_28], ax ;~ 0613:2E0D
cs=0x613;eip=0x002e10; 	T(CMP(*(dw*)(raddr(ss,bp+var_26)), 0x0FFFF));	// 13413 cmp     [bp+var_26], 0FFFFh ;~ 0613:2E10
cs=0x613;eip=0x002e14; 	J(JNZ(loc_1753e));	// 13414 jnz     short loc_1753E ;~ 0613:2E14
cs=0x613;eip=0x002e16; 	T(MOV(ax, word_445ea));	// 13415 mov     ax, word_445EA ;~ 0613:2E16
cs=0x613;eip=0x002e19; 	T(MOV(dx, word_445ec));	// 13416 mov     dx, word_445EC ;~ 0613:2E19
cs=0x613;eip=0x002e1d; 	T(MOV(cl, 6));	// 13417 mov     cl, 6 ;~ 0613:2E1D
loc_1752f:
	// 5102 
cs=0x613;eip=0x002e1f; 	T(SAR(dx, 1));	// 13420 sar     dx, 1 ;~ 0613:2E1F
cs=0x613;eip=0x002e21; 	T(RCR(ax, 1));	// 13421 rcr     ax, 1 ;~ 0613:2E21
cs=0x613;eip=0x002e23; 	T(DEC(cl));	// 13422 dec     cl ;~ 0613:2E23
cs=0x613;eip=0x002e25; 	J(JNZ(loc_1752f));	// 13423 jnz     short loc_1752F ;~ 0613:2E25
cs=0x613;eip=0x002e27; 	T(NEG(ax));	// 13424 neg     ax ;~ 0613:2E27
cs=0x613;eip=0x002e29; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), ax));	// 13425 mov     [bp+var_26], ax ;~ 0613:2E29
cs=0x613;eip=0x002e2c; 	J(JMP(loc_17552));	// 13426 jmp     short loc_17552 ;~ 0613:2E2C
loc_1753e:
	// 5103 
cs=0x613;eip=0x002e2e; 	T(MOV(ax, word_445ea));	// 13430 mov     ax, word_445EA ;~ 0613:2E2E
cs=0x613;eip=0x002e31; 	T(MOV(dx, word_445ec));	// 13431 mov     dx, word_445EC ;~ 0613:2E31
cs=0x613;eip=0x002e35; 	T(MOV(cl, 6));	// 13432 mov     cl, 6 ;~ 0613:2E35
loc_17547:
	// 5104 
cs=0x613;eip=0x002e37; 	T(SAR(dx, 1));	// 13435 sar     dx, 1 ;~ 0613:2E37
cs=0x613;eip=0x002e39; 	T(RCR(ax, 1));	// 13436 rcr     ax, 1 ;~ 0613:2E39
cs=0x613;eip=0x002e3b; 	T(DEC(cl));	// 13437 dec     cl ;~ 0613:2E3B
cs=0x613;eip=0x002e3d; 	J(JNZ(loc_17547));	// 13438 jnz     short loc_17547 ;~ 0613:2E3D
cs=0x613;eip=0x002e3f; 	X(SUB(*(dw*)(raddr(ss,bp+var_26)), ax));	// 13439 sub     [bp+var_26], ax ;~ 0613:2E3F
loc_17552:
	// 5105 
cs=0x613;eip=0x002e42; 	T(MOV(ax, word_445ee));	// 13442 mov     ax, word_445EE ;~ 0613:2E42
cs=0x613;eip=0x002e45; 	T(MOV(dx, word_445f0));	// 13443 mov     dx, word_445F0 ;~ 0613:2E45
cs=0x613;eip=0x002e49; 	T(MOV(cl, 6));	// 13444 mov     cl, 6 ;~ 0613:2E49
loc_1755b:
	// 5106 
cs=0x613;eip=0x002e4b; 	T(SAR(dx, 1));	// 13447 sar     dx, 1 ;~ 0613:2E4B
cs=0x613;eip=0x002e4d; 	T(RCR(ax, 1));	// 13448 rcr     ax, 1 ;~ 0613:2E4D
cs=0x613;eip=0x002e4f; 	T(DEC(cl));	// 13449 dec     cl ;~ 0613:2E4F
cs=0x613;eip=0x002e51; 	J(JNZ(loc_1755b));	// 13450 jnz     short loc_1755B ;~ 0613:2E51
cs=0x613;eip=0x002e53; 	X(SUB(*(dw*)(raddr(ss,bp+var_24)), ax));	// 13451 sub     [bp+var_24], ax ;~ 0613:2E53
cs=0x613;eip=0x002e56; 	T(ax = bp+var_38);	// 13452 lea     ax, [bp+var_38] ;~ 0613:2E56
cs=0x613;eip=0x002e59; 	X(PUSH(ax));	// 13453 push    ax ;~ 0613:2E59
cs=0x613;eip=0x002e5a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_20))));	// 13454 push    [bp+var_20] ;~ 0613:2E5A
cs=0x613;eip=0x002e5d; 	T(ax = bp+var_28);	// 13455 lea     ax, [bp+var_28] ;~ 0613:2E5D
cs=0x613;eip=0x002e60; 	X(PUSH(ax));	// 13456 push    ax ;~ 0613:2E60
cs=0x613;eip=0x002e61; 	J(CALLF(mat_mul_vector,0));	// 13457 call    mat_mul_vector ;~ 0613:2E61
cs=0x613;eip=0x002e66; 	T(ADD(sp, 6));	// 13458 add     sp, 6 ;~ 0613:2E66
cs=0x613;eip=0x002e69; 	T(CMP(*(raddr(ss,bp+var_2c)), 0));	// 13459 cmp     [bp+var_2C], 0 ;~ 0613:2E69
cs=0x613;eip=0x002e6d; 	J(JZ(loc_1758d));	// 13460 jz      short loc_1758D ;~ 0613:2E6D
cs=0x613;eip=0x002e6f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2e))));	// 13461 mov     ax, [bp+var_2E] ;~ 0613:2E6F
cs=0x613;eip=0x002e72; 	T(CMP(*(dw*)(raddr(ss,bp+var_34)), ax));	// 13462 cmp     [bp+var_34], ax ;~ 0613:2E72
cs=0x613;eip=0x002e75; 	J(JGE(loc_17599));	// 13463 jge     short loc_17599 ;~ 0613:2E75
cs=0x613;eip=0x002e77; 	T(CMP(*(dw*)(raddr(ss,bp+var_34)), 0));	// 13464 cmp     [bp+var_34], 0 ;~ 0613:2E77
cs=0x613;eip=0x002e7b; 	J(JLE(loc_17599));	// 13465 jle     short loc_17599 ;~ 0613:2E7B
loc_1758d:
	// 5107 
cs=0x613;eip=0x002e7d; 	T(MOV(al, *(raddr(ss,bp+var_2c))));	// 13468 mov     al, [bp+var_2C] ;~ 0613:2E7D
cs=0x613;eip=0x002e80; 	X(MOV(*(raddr(ss,bp+var_3a)), al));	// 13469 mov     [bp+var_3A], al ;~ 0613:2E80
cs=0x613;eip=0x002e83; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_34))));	// 13470 mov     ax, [bp+var_34] ;~ 0613:2E83
cs=0x613;eip=0x002e86; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 13471 mov     [bp+var_2E], ax ;~ 0613:2E86
loc_17599:
	// 5108 
cs=0x613;eip=0x002e89; 	X(INC(*(raddr(ss,bp+var_2c))));	// 13475 inc     [bp+var_2C] ;~ 0613:2E89
cs=0x613;eip=0x002e8c; 	T(CMP(*(raddr(ss,bp+var_2a)), 0));	// 13476 cmp     [bp+var_2A], 0 ;~ 0613:2E8C
cs=0x613;eip=0x002e90; 	J(JNZ(loc_175a5));	// 13477 jnz     short loc_175A5 ;~ 0613:2E90
cs=0x613;eip=0x002e92; 	J(JMP(loc_174e5));	// 13478 jmp     loc_174E5 ;~ 0613:2E92
loc_175a5:
	// 5109 
cs=0x613;eip=0x002e95; 	T(CMP(byte_448ef, 2));	// 13482 cmp     byte_448EF, 2 ;~ 0613:2E95
cs=0x613;eip=0x002e9a; 	J(JZ(loc_175af));	// 13483 jz      short loc_175AF ;~ 0613:2E9A
cs=0x613;eip=0x002e9c; 	J(JMP(loc_17640));	// 13484 jmp     loc_17640 ;~ 0613:2E9C
loc_175af:
	// 5110 
cs=0x613;eip=0x002e9f; 	T(CMP(*(raddr(ss,bp+var_3a)), 0));	// 13488 cmp     [bp+var_3A], 0 ;~ 0613:2E9F
cs=0x613;eip=0x002ea3; 	J(JNZ(loc_175d0));	// 13489 jnz     short loc_175D0 ;~ 0613:2EA3
cs=0x613;eip=0x002ea5; 	T(SUB(ax, ax));	// 13490 sub     ax, ax ;~ 0613:2EA5
cs=0x613;eip=0x002ea7; 	X(PUSH(ax));	// 13491 push    ax ;~ 0613:2EA7
cs=0x613;eip=0x002ea8; 	X(PUSH(ax));	// 13492 push    ax ;~ 0613:2EA8
cs=0x613;eip=0x002ea9; 	T(ax = bp+var_52);	// 13493 lea     ax, [bp+var_52] ;~ 0613:2EA9
cs=0x613;eip=0x002eac; 	X(PUSH(ax));	// 13494 push    ax ;~ 0613:2EAC
cs=0x613;eip=0x002ead; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 13495 push    [bp+var_2] ;~ 0613:2EAD
cs=0x613;eip=0x002eb0; 	X(PUSH(cs));	// 13496 push    cs ;~ 0613:2EB0
cs=0x613;eip=0x002eb1; 	J(CALL(sub_18d60,0));	// 13497 call    near ptr sub_18D60 ;~ 0613:2EB1
cs=0x613;eip=0x002eb4; 	T(ADD(sp, 8));	// 13498 add     sp, 8 ;~ 0613:2EB4
cs=0x613;eip=0x002eb7; 	T(SUB(ax, ax));	// 13499 sub     ax, ax ;~ 0613:2EB7
cs=0x613;eip=0x002eb9; 	X(PUSH(ax));	// 13500 push    ax ;~ 0613:2EB9
cs=0x613;eip=0x002eba; 	T(MOV(ax, 1));	// 13501 mov     ax, 1 ;~ 0613:2EBA
cs=0x613;eip=0x002ebd; 	J(JMP(loc_175f0));	// 13502 jmp     short loc_175F0 ;~ 0613:2EBD
loc_175d0:
	// 5111 
cs=0x613;eip=0x002ec0; 	T(SUB(ax, ax));	// 13507 sub     ax, ax ;~ 0613:2EC0
cs=0x613;eip=0x002ec2; 	X(PUSH(ax));	// 13508 push    ax ;~ 0613:2EC2
cs=0x613;eip=0x002ec3; 	T(MOV(al, *(raddr(ss,bp+var_3a))));	// 13509 mov     al, [bp+var_3A] ;~ 0613:2EC3
cs=0x613;eip=0x002ec6; 	T(DEC(al));	// 13510 dec     al ;~ 0613:2EC6
cs=0x613;eip=0x002ec8; 	T(CBW);	// 13511 cbw ;~ 0613:2EC8
cs=0x613;eip=0x002ec9; 	X(PUSH(ax));	// 13512 push    ax ;~ 0613:2EC9
cs=0x613;eip=0x002eca; 	T(ax = bp+var_52);	// 13513 lea     ax, [bp+var_52] ;~ 0613:2ECA
cs=0x613;eip=0x002ecd; 	X(PUSH(ax));	// 13514 push    ax ;~ 0613:2ECD
cs=0x613;eip=0x002ece; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 13515 push    [bp+var_2] ;~ 0613:2ECE
cs=0x613;eip=0x002ed1; 	X(PUSH(cs));	// 13516 push    cs ;~ 0613:2ED1
cs=0x613;eip=0x002ed2; 	J(CALL(sub_18d60,0));	// 13517 call    near ptr sub_18D60 ;~ 0613:2ED2
cs=0x613;eip=0x002ed5; 	T(ADD(sp, 8));	// 13518 add     sp, 8 ;~ 0613:2ED5
cs=0x613;eip=0x002ed8; 	T(SUB(ax, ax));	// 13519 sub     ax, ax ;~ 0613:2ED8
cs=0x613;eip=0x002eda; 	X(PUSH(ax));	// 13520 push    ax ;~ 0613:2EDA
cs=0x613;eip=0x002edb; 	T(MOV(al, *(raddr(ss,bp+var_3a))));	// 13521 mov     al, [bp+var_3A] ;~ 0613:2EDB
cs=0x613;eip=0x002ede; 	T(SUB(ah, ah));	// 13522 sub     ah, ah ;~ 0613:2EDE
loc_175f0:
	// 5112 
cs=0x613;eip=0x002ee0; 	X(PUSH(ax));	// 13525 push    ax ;~ 0613:2EE0
cs=0x613;eip=0x002ee1; 	T(ax = bp+var_1a);	// 13526 lea     ax, [bp+var_1A] ;~ 0613:2EE1
cs=0x613;eip=0x002ee4; 	X(PUSH(ax));	// 13527 push    ax ;~ 0613:2EE4
cs=0x613;eip=0x002ee5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 13528 push    [bp+var_2] ;~ 0613:2EE5
cs=0x613;eip=0x002ee8; 	X(PUSH(cs));	// 13529 push    cs ;~ 0613:2EE8
cs=0x613;eip=0x002ee9; 	J(CALL(sub_18d60,0));	// 13530 call    near ptr sub_18D60 ;~ 0613:2EE9
cs=0x613;eip=0x002eec; 	T(ADD(sp, 8));	// 13531 add     sp, 8 ;~ 0613:2EEC
cs=0x613;eip=0x002eef; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 13532 mov     ax, [bp+var_16] ;~ 0613:2EEF
cs=0x613;eip=0x002ef2; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4e))));	// 13533 sub     ax, [bp+var_4E] ;~ 0613:2EF2
cs=0x613;eip=0x002ef5; 	X(PUSH(ax));	// 13534 push    ax ;~ 0613:2EF5
cs=0x613;eip=0x002ef6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_52))));	// 13535 mov     ax, [bp+var_52] ;~ 0613:2EF6
cs=0x613;eip=0x002ef9; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 13536 sub     ax, [bp+var_1A] ;~ 0613:2EF9
cs=0x613;eip=0x002efc; 	X(PUSH(ax));	// 13537 push    ax ;~ 0613:2EFC
cs=0x613;eip=0x002efd; 	J(CALLF(polarangle,0));	// 13538 call    polarAngle ;~ 0613:2EFD
cs=0x613;eip=0x002f02; 	T(ADD(sp, 4));	// 13539 add     sp, 4 ;~ 0613:2F02
cs=0x613;eip=0x002f05; 	T(MOV(si, ax));	// 13540 mov     si, ax ;~ 0613:2F05
cs=0x613;eip=0x002f07; 	T(AND(si, 0x3FF));	// 13541 and     si, 3FFh ;~ 0613:2F07
cs=0x613;eip=0x002f0b; 	T(MOV(ax, word_445fe));	// 13542 mov     ax, word_445FE ;~ 0613:2F0B
cs=0x613;eip=0x002f0e; 	T(SUB(ax, si));	// 13543 sub     ax, si ;~ 0613:2F0E
cs=0x613;eip=0x002f10; 	T(AND(ah, 3));	// 13544 and     ah, 3 ;~ 0613:2F10
cs=0x613;eip=0x002f13; 	T(MOV(si, ax));	// 13545 mov     si, ax ;~ 0613:2F13
cs=0x613;eip=0x002f15; 	T(CMP(si, 0x380));	// 13546 cmp     si, 380h ;~ 0613:2F15
cs=0x613;eip=0x002f19; 	J(JG(loc_17631));	// 13547 jg      short loc_17631 ;~ 0613:2F19
cs=0x613;eip=0x002f1b; 	T(CMP(si, 0x80));	// 13548 cmp     si, 80h ; '€' ;~ 0613:2F1B
cs=0x613;eip=0x002f1f; 	J(JGE(loc_1764c));	// 13549 jge     short loc_1764C ;~ 0613:2F1F
loc_17631:
	// 5113 
cs=0x613;eip=0x002f21; 	X(MOV(byte_448ef, 0));	// 13552 mov     byte_448EF, 0 ;~ 0613:2F21
cs=0x613;eip=0x002f26; 	X(MOV(byte_448f0, 1));	// 13553 mov     byte_448F0, 1 ;~ 0613:2F26
cs=0x613;eip=0x002f2b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13554 mov     ax, [bp+var_2] ;~ 0613:2F2B
cs=0x613;eip=0x002f2e; 	J(JMP(loc_17643));	// 13555 jmp     short loc_17643 ;~ 0613:2F2E
loc_17640:
	// 5114 
cs=0x613;eip=0x002f30; 	T(MOV(ax, word_44786));	// 13559 mov     ax, word_44786 ;~ 0613:2F30
loc_17643:
	// 5115 
cs=0x613;eip=0x002f33; 	X(MOV(word_44630, ax));	// 13562 mov     word_44630, ax ;~ 0613:2F33
cs=0x613;eip=0x002f36; 	T(MOV(al, *(raddr(ss,bp+var_3a))));	// 13563 mov     al, [bp+var_3A] ;~ 0613:2F36
cs=0x613;eip=0x002f39; 	X(MOV(byte_446b4, al));	// 13564 mov     byte_446B4, al ;~ 0613:2F39
loc_1764c:
	// 5116 
cs=0x613;eip=0x002f3c; 	T(SUB(ax, ax));	// 13568 sub     ax, ax ;~ 0613:2F3C
cs=0x613;eip=0x002f3e; 	X(PUSH(ax));	// 13569 push    ax ;~ 0613:2F3E
cs=0x613;eip=0x002f3f; 	T(MOV(al, byte_446b4));	// 13570 mov     al, byte_446B4 ;~ 0613:2F3F
cs=0x613;eip=0x002f42; 	X(INC(byte_446b4));	// 13571 inc     byte_446B4 ;~ 0613:2F42
cs=0x613;eip=0x002f46; 	T(SUB(ah, ah));	// 13572 sub     ah, ah ;~ 0613:2F46
cs=0x613;eip=0x002f48; 	X(PUSH(ax));	// 13573 push    ax ;~ 0613:2F48
cs=0x613;eip=0x002f49; 	T(MOV(ax, offset(dseg,word_4468a)));	// 13574 mov     ax, offset word_4468A ;~ 0613:2F49
cs=0x613;eip=0x002f4c; 	X(PUSH(ax));	// 13575 push    ax ;~ 0613:2F4C
cs=0x613;eip=0x002f4d; 	X(PUSH(word_44630));	// 13576 push    word_44630 ;~ 0613:2F4D
cs=0x613;eip=0x002f51; 	X(PUSH(cs));	// 13577 push    cs ;~ 0613:2F51
cs=0x613;eip=0x002f52; 	J(CALL(sub_18d60,0));	// 13578 call    near ptr sub_18D60 ;~ 0613:2F52
cs=0x613;eip=0x002f55; 	T(ADD(sp, 8));	// 13579 add     sp, 8 ;~ 0613:2F55
cs=0x613;eip=0x002f58; 	T(OR(al, al));	// 13580 or      al, al ;~ 0613:2F58
cs=0x613;eip=0x002f5a; 	J(JZ(loc_17699));	// 13581 jz      short loc_17699 ;~ 0613:2F5A
cs=0x613;eip=0x002f5c; 	T(MOV(bx, word_44786));	// 13582 mov     bx, word_44786 ;~ 0613:2F5C
cs=0x613;eip=0x002f60; 	T(SHL(bx, 1));	// 13583 shl     bx, 1 ;~ 0613:2F60
cs=0x613;eip=0x002f62; 	T(LES(di, td02_penalty_related));	// 13584 les     di, td02_penalty_related ;~ 0613:2F62
cs=0x613;eip=0x002f66; 	T(CMP(*(dw*)(raddr(es,bx+di)), 0x0FFFF));	// 13585 cmp     word ptr es:[bx+di], 0FFFFh ;~ 0613:2F66
cs=0x613;eip=0x002f6a; 	J(JZ(loc_17684));	// 13586 jz      short loc_17684 ;~ 0613:2F6A
cs=0x613;eip=0x002f6c; 	X(MOV(word_44630, 0x0FFFF));	// 13587 mov     word_44630, 0FFFFh ;~ 0613:2F6C
cs=0x613;eip=0x002f72; 	J(JMP(loc_17694));	// 13588 jmp     short loc_17694 ;~ 0613:2F72
loc_17684:
	// 5117 
cs=0x613;eip=0x002f74; 	T(MOV(bx, word_44786));	// 13592 mov     bx, word_44786 ;~ 0613:2F74
cs=0x613;eip=0x002f78; 	T(SHL(bx, 1));	// 13593 shl     bx, 1 ;~ 0613:2F78
cs=0x613;eip=0x002f7a; 	T(LES(di, td01_track_file_cpy));	// 13594 les     di, td01_track_file_cpy ;~ 0613:2F7A
cs=0x613;eip=0x002f7e; 	T(MOV(ax, *(dw*)(raddr(es,bx+di))));	// 13595 mov     ax, es:[bx+di] ;~ 0613:2F7E
cs=0x613;eip=0x002f81; 	X(MOV(word_44630, ax));	// 13596 mov     word_44630, ax ;~ 0613:2F81
loc_17694:
	// 5118 
cs=0x613;eip=0x002f84; 	X(MOV(byte_446b4, 0));	// 13599 mov     byte_446B4, 0 ;~ 0613:2F84
loc_17699:
	// 5119 
cs=0x613;eip=0x002f89; 	X(PUSH(si));	// 13603 push    si ;~ 0613:2F89
cs=0x613;eip=0x002f8a; 	T(di = bp+var_28);	// 13604 lea     di, [bp+var_28] ;~ 0613:2F8A
cs=0x613;eip=0x002f8d; 	T(MOV(si, offset(dseg,word_4468a)));	// 13605 mov     si, offset word_4468A ;~ 0613:2F8D
cs=0x613;eip=0x002f90; 	X(PUSH(ss));	// 13606 push    ss ;~ 0613:2F90
cs=0x613;eip=0x002f91; 	X(POP(es));	// 13607 pop     es ;~ 0613:2F91
cs=0x613;eip=0x002f92; 	X(MOVSW);	// 13608 movsw ;~ 0613:2F92
cs=0x613;eip=0x002f93; 	X(MOVSW);	// 13609 movsw ;~ 0613:2F93
cs=0x613;eip=0x002f94; 	X(MOVSW);	// 13610 movsw ;~ 0613:2F94
cs=0x613;eip=0x002f95; 	X(POP(si));	// 13611 pop     si ;~ 0613:2F95
cs=0x613;eip=0x002f96; 	T(CMP(word_44630, 0x0FFFF));	// 13612 cmp     word_44630, 0FFFFh ;~ 0613:2F96
cs=0x613;eip=0x002f9b; 	J(JNZ(loc_176b0));	// 13613 jnz     short loc_176B0 ;~ 0613:2F9B
cs=0x613;eip=0x002f9d; 	J(JMP(loc_17771));	// 13614 jmp     loc_17771 ;~ 0613:2F9D
loc_176b0:
	// 5120 
cs=0x613;eip=0x002fa0; 	T(CMP(byte_448ef, 0));	// 13618 cmp     byte_448EF, 0 ;~ 0613:2FA0
cs=0x613;eip=0x002fa5; 	J(JZ(loc_176ba));	// 13619 jz      short loc_176BA ;~ 0613:2FA5
cs=0x613;eip=0x002fa7; 	J(JMP(loc_17771));	// 13620 jmp     loc_17771 ;~ 0613:2FA7
loc_176ba:
	// 5121 
cs=0x613;eip=0x002faa; 	T(MOV(ax, word_445e6));	// 13624 mov     ax, word_445E6 ;~ 0613:2FAA
cs=0x613;eip=0x002fad; 	T(MOV(dx, word_445e8));	// 13625 mov     dx, word_445E8 ;~ 0613:2FAD
cs=0x613;eip=0x002fb1; 	T(MOV(cl, 6));	// 13626 mov     cl, 6 ;~ 0613:2FB1
loc_176c3:
	// 5122 
cs=0x613;eip=0x002fb3; 	T(SAR(dx, 1));	// 13629 sar     dx, 1 ;~ 0613:2FB3
cs=0x613;eip=0x002fb5; 	T(RCR(ax, 1));	// 13630 rcr     ax, 1 ;~ 0613:2FB5
cs=0x613;eip=0x002fb7; 	T(DEC(cl));	// 13631 dec     cl ;~ 0613:2FB7
cs=0x613;eip=0x002fb9; 	J(JNZ(loc_176c3));	// 13632 jnz     short loc_176C3 ;~ 0613:2FB9
cs=0x613;eip=0x002fbb; 	X(SUB(*(dw*)(raddr(ss,bp+var_28)), ax));	// 13633 sub     [bp+var_28], ax ;~ 0613:2FBB
cs=0x613;eip=0x002fbe; 	T(CMP(*(dw*)(raddr(ss,bp+var_26)), 0x0FFFF));	// 13634 cmp     [bp+var_26], 0FFFFh ;~ 0613:2FBE
cs=0x613;eip=0x002fc2; 	J(JNZ(loc_176dc));	// 13635 jnz     short loc_176DC ;~ 0613:2FC2
cs=0x613;eip=0x002fc4; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), 0));	// 13636 mov     [bp+var_26], 0 ;~ 0613:2FC4
cs=0x613;eip=0x002fc9; 	J(JMP(loc_176f0));	// 13637 jmp     short loc_176F0 ;~ 0613:2FC9
loc_176dc:
	// 5123 
cs=0x613;eip=0x002fcc; 	T(MOV(ax, word_445ea));	// 13642 mov     ax, word_445EA ;~ 0613:2FCC
cs=0x613;eip=0x002fcf; 	T(MOV(dx, word_445ec));	// 13643 mov     dx, word_445EC ;~ 0613:2FCF
cs=0x613;eip=0x002fd3; 	T(MOV(cl, 6));	// 13644 mov     cl, 6 ;~ 0613:2FD3
loc_176e5:
	// 5124 
cs=0x613;eip=0x002fd5; 	T(SAR(dx, 1));	// 13647 sar     dx, 1 ;~ 0613:2FD5
cs=0x613;eip=0x002fd7; 	T(RCR(ax, 1));	// 13648 rcr     ax, 1 ;~ 0613:2FD7
cs=0x613;eip=0x002fd9; 	T(DEC(cl));	// 13649 dec     cl ;~ 0613:2FD9
cs=0x613;eip=0x002fdb; 	J(JNZ(loc_176e5));	// 13650 jnz     short loc_176E5 ;~ 0613:2FDB
cs=0x613;eip=0x002fdd; 	X(SUB(*(dw*)(raddr(ss,bp+var_26)), ax));	// 13651 sub     [bp+var_26], ax ;~ 0613:2FDD
loc_176f0:
	// 5125 
cs=0x613;eip=0x002fe0; 	T(MOV(ax, word_445ee));	// 13654 mov     ax, word_445EE ;~ 0613:2FE0
cs=0x613;eip=0x002fe3; 	T(MOV(dx, word_445f0));	// 13655 mov     dx, word_445F0 ;~ 0613:2FE3
cs=0x613;eip=0x002fe7; 	T(MOV(cl, 6));	// 13656 mov     cl, 6 ;~ 0613:2FE7
loc_176f9:
	// 5126 
cs=0x613;eip=0x002fe9; 	T(SAR(dx, 1));	// 13659 sar     dx, 1 ;~ 0613:2FE9
cs=0x613;eip=0x002feb; 	T(RCR(ax, 1));	// 13660 rcr     ax, 1 ;~ 0613:2FEB
cs=0x613;eip=0x002fed; 	T(DEC(cl));	// 13661 dec     cl ;~ 0613:2FED
cs=0x613;eip=0x002fef; 	J(JNZ(loc_176f9));	// 13662 jnz     short loc_176F9 ;~ 0613:2FEF
cs=0x613;eip=0x002ff1; 	X(SUB(*(dw*)(raddr(ss,bp+var_24)), ax));	// 13663 sub     [bp+var_24], ax ;~ 0613:2FF1
cs=0x613;eip=0x002ff4; 	T(MOV(ax, 1));	// 13664 mov     ax, 1 ;~ 0613:2FF4
cs=0x613;eip=0x002ff7; 	X(PUSH(ax));	// 13665 push    ax ;~ 0613:2FF7
cs=0x613;eip=0x002ff8; 	X(PUSH(word_445fe));	// 13666 push    word_445FE ;~ 0613:2FF8
cs=0x613;eip=0x002ffc; 	X(PUSH(word_44600));	// 13667 push    word_44600 ;~ 0613:2FFC
cs=0x613;eip=0x003000; 	X(PUSH(word_44602));	// 13668 push    word_44602 ;~ 0613:3000
cs=0x613;eip=0x003004; 	J(CALLF(mat_rot_zxy,0));	// 13669 call    mat_rot_zxy ;~ 0613:3004
cs=0x613;eip=0x003009; 	T(ADD(sp, 8));	// 13670 add     sp, 8 ;~ 0613:3009
cs=0x613;eip=0x00300c; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 13671 mov     [bp+var_20], ax ;~ 0613:300C
cs=0x613;eip=0x00300f; 	T(ax = bp+var_38);	// 13672 lea     ax, [bp+var_38] ;~ 0613:300F
cs=0x613;eip=0x003012; 	X(PUSH(ax));	// 13673 push    ax ;~ 0613:3012
cs=0x613;eip=0x003013; 	X(PUSH(*(dw*)(raddr(ss,bp+var_20))));	// 13674 push    [bp+var_20] ;~ 0613:3013
cs=0x613;eip=0x003016; 	T(ax = bp+var_28);	// 13675 lea     ax, [bp+var_28] ;~ 0613:3016
cs=0x613;eip=0x003019; 	X(PUSH(ax));	// 13676 push    ax ;~ 0613:3019
cs=0x613;eip=0x00301a; 	J(CALLF(mat_mul_vector,0));	// 13677 call    mat_mul_vector ;~ 0613:301A
cs=0x613;eip=0x00301f; 	T(ADD(sp, 6));	// 13678 add     sp, 6 ;~ 0613:301F
cs=0x613;eip=0x003022; 	X(PUSH(*(dw*)(raddr(ss,bp+var_34))));	// 13679 push    [bp+var_34] ;~ 0613:3022
cs=0x613;eip=0x003025; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_38))));	// 13680 mov     ax, [bp+var_38] ;~ 0613:3025
cs=0x613;eip=0x003028; 	T(NEG(ax));	// 13681 neg     ax ;~ 0613:3028
cs=0x613;eip=0x00302a; 	X(PUSH(ax));	// 13682 push    ax ;~ 0613:302A
cs=0x613;eip=0x00302b; 	J(CALLF(polarangle,0));	// 13683 call    polarAngle ;~ 0613:302B
cs=0x613;eip=0x003030; 	T(ADD(sp, 4));	// 13684 add     sp, 4 ;~ 0613:3030
cs=0x613;eip=0x003033; 	T(AND(ah, 3));	// 13685 and     ah, 3 ;~ 0613:3033
cs=0x613;eip=0x003036; 	X(MOV(word_4462e, ax));	// 13686 mov     word_4462E, ax ;~ 0613:3036
cs=0x613;eip=0x003039; 	T(CMP(byte_446af, 0));	// 13687 cmp     byte_446AF, 0 ;~ 0613:3039
cs=0x613;eip=0x00303e; 	J(JNZ(loc_17771));	// 13688 jnz     short loc_17771 ;~ 0613:303E
cs=0x613;eip=0x003040; 	T(ADD(ax, 0x80));	// 13689 add     ax, 80h ; '€' ;~ 0613:3040
cs=0x613;eip=0x003043; 	T(AND(ah, 3));	// 13690 and     ah, 3 ;~ 0613:3043
cs=0x613;eip=0x003046; 	T(MOV(cl, 8));	// 13691 mov     cl, 8 ;~ 0613:3046
cs=0x613;eip=0x003048; 	T(SHR(ax, cl));	// 13692 shr     ax, cl ;~ 0613:3048
cs=0x613;eip=0x00304a; 	T(CMP(ax, 1));	// 13693 cmp     ax, 1 ;~ 0613:304A
cs=0x613;eip=0x00304d; 	J(JZ(loc_1776c));	// 13694 jz      short loc_1776C ;~ 0613:304D
cs=0x613;eip=0x00304f; 	T(CMP(ax, 3));	// 13695 cmp     ax, 3 ;~ 0613:304F
cs=0x613;eip=0x003052; 	J(JZ(loc_1779e));	// 13696 jz      short loc_1779E ;~ 0613:3052
loc_17764:
	// 5127 
cs=0x613;eip=0x003054; 	X(MOV(byte_448f1, 0));	// 13699 mov     byte_448F1, 0 ;~ 0613:3054
cs=0x613;eip=0x003059; 	J(JMP(loc_17771));	// 13700 jmp     short loc_17771 ;~ 0613:3059
loc_1776c:
	// 5128 
cs=0x613;eip=0x00305c; 	X(MOV(byte_448f1, 1));	// 13705 mov     byte_448F1, 1 ;~ 0613:305C
loc_17771:
	// 5129 
cs=0x613;eip=0x003061; 	T(CMP(byte_446b3, 0));	// 13709 cmp     byte_446B3, 0 ;~ 0613:3061
cs=0x613;eip=0x003066; 	J(JNZ(loc_1777b));	// 13710 jnz     short loc_1777B ;~ 0613:3066
cs=0x613;eip=0x003068; 	J(JMP(loc_17810));	// 13711 jmp     loc_17810 ;~ 0613:3068
loc_1777b:
	// 5130 
cs=0x613;eip=0x00306b; 	T(MOV(al, startrow2));	// 13715 mov     al, startrow2 ;~ 0613:306B
cs=0x613;eip=0x00306e; 	T(CBW);	// 13716 cbw ;~ 0613:306E
cs=0x613;eip=0x00306f; 	T(MOV(bx, ax));	// 13717 mov     bx, ax ;~ 0613:306F
cs=0x613;eip=0x003071; 	T(SHL(bx, 1));	// 13718 shl     bx, 1 ;~ 0613:3071
cs=0x613;eip=0x003073; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 13719 mov     ax, trackcenterpos[bx] ;~ 0613:3073
cs=0x613;eip=0x003077; 	T(MOV(cx, word_445ee));	// 13720 mov     cx, word_445EE ;~ 0613:3077
cs=0x613;eip=0x00307b; 	T(MOV(bx, word_445f0));	// 13721 mov     bx, word_445F0 ;~ 0613:307B
cs=0x613;eip=0x00307f; 	T(MOV(dx, cx));	// 13722 mov     dx, cx ;~ 0613:307F
cs=0x613;eip=0x003081; 	T(MOV(cl, 6));	// 13723 mov     cl, 6 ;~ 0613:3081
loc_17793:
	// 5131 
cs=0x613;eip=0x003083; 	T(SAR(bx, 1));	// 13726 sar     bx, 1 ;~ 0613:3083
cs=0x613;eip=0x003085; 	T(RCR(dx, 1));	// 13727 rcr     dx, 1 ;~ 0613:3085
cs=0x613;eip=0x003087; 	T(DEC(cl));	// 13728 dec     cl ;~ 0613:3087
cs=0x613;eip=0x003089; 	J(JZ(loc_177ac));	// 13729 jz      short loc_177AC ;~ 0613:3089
cs=0x613;eip=0x00308b; 	J(JMP(loc_17793));	// 13730 jmp     short loc_17793 ;~ 0613:308B
loc_1779e:
	// 5132 
cs=0x613;eip=0x00308e; 	T(CMP(word_4469c, 0));	// 13735 cmp     word_4469C, 0 ;~ 0613:308E
cs=0x613;eip=0x003093; 	J(JNZ(loc_17764));	// 13736 jnz     short loc_17764 ;~ 0613:3093
cs=0x613;eip=0x003095; 	X(MOV(byte_448f1, 2));	// 13737 mov     byte_448F1, 2 ;~ 0613:3095
cs=0x613;eip=0x00309a; 	J(JMP(loc_17771));	// 13738 jmp     short loc_17771 ;~ 0613:309A
loc_177ac:
	// 5133 
cs=0x613;eip=0x00309c; 	T(SUB(ax, dx));	// 13742 sub     ax, dx ;~ 0613:309C
cs=0x613;eip=0x00309e; 	X(PUSH(ax));	// 13743 push    ax ;~ 0613:309E
cs=0x613;eip=0x00309f; 	X(PUSH(track_angle));	// 13744 push    track_angle ;~ 0613:309F
cs=0x613;eip=0x0030a3; 	J(CALLF(cos_fast,0));	// 13745 call    cos_fast ;~ 0613:30A3
cs=0x613;eip=0x0030a8; 	T(ADD(sp, 2));	// 13746 add     sp, 2 ;~ 0613:30A8
cs=0x613;eip=0x0030ab; 	X(PUSH(ax));	// 13747 push    ax ;~ 0613:30AB
cs=0x613;eip=0x0030ac; 	J(CALLF(multiply_and_scale,0));	// 13748 call    multiply_and_scale ;~ 0613:30AC
cs=0x613;eip=0x0030b1; 	T(ADD(sp, 4));	// 13749 add     sp, 4 ;~ 0613:30B1
cs=0x613;eip=0x0030b4; 	T(MOV(si, ax));	// 13750 mov     si, ax ;~ 0613:30B4
cs=0x613;eip=0x0030b6; 	T(MOV(al, startcol2));	// 13751 mov     al, startcol2 ;~ 0613:30B6
cs=0x613;eip=0x0030b9; 	T(CBW);	// 13752 cbw ;~ 0613:30B9
cs=0x613;eip=0x0030ba; 	T(MOV(bx, ax));	// 13753 mov     bx, ax ;~ 0613:30BA
cs=0x613;eip=0x0030bc; 	T(SHL(bx, 1));	// 13754 shl     bx, 1 ;~ 0613:30BC
cs=0x613;eip=0x0030be; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 13755 mov     ax, trackcenterpos2[bx] ;~ 0613:30BE
cs=0x613;eip=0x0030c2; 	T(MOV(cx, word_445e6));	// 13756 mov     cx, word_445E6 ;~ 0613:30C2
cs=0x613;eip=0x0030c6; 	T(MOV(bx, word_445e8));	// 13757 mov     bx, word_445E8 ;~ 0613:30C6
cs=0x613;eip=0x0030ca; 	T(MOV(dx, cx));	// 13758 mov     dx, cx ;~ 0613:30CA
cs=0x613;eip=0x0030cc; 	T(MOV(cl, 6));	// 13759 mov     cl, 6 ;~ 0613:30CC
loc_177de:
	// 5134 
cs=0x613;eip=0x0030ce; 	T(SAR(bx, 1));	// 13762 sar     bx, 1 ;~ 0613:30CE
cs=0x613;eip=0x0030d0; 	T(RCR(dx, 1));	// 13763 rcr     dx, 1 ;~ 0613:30D0
cs=0x613;eip=0x0030d2; 	T(DEC(cl));	// 13764 dec     cl ;~ 0613:30D2
cs=0x613;eip=0x0030d4; 	J(JNZ(loc_177de));	// 13765 jnz     short loc_177DE ;~ 0613:30D4
cs=0x613;eip=0x0030d6; 	T(SUB(ax, dx));	// 13766 sub     ax, dx ;~ 0613:30D6
cs=0x613;eip=0x0030d8; 	X(PUSH(ax));	// 13767 push    ax ;~ 0613:30D8
cs=0x613;eip=0x0030d9; 	X(PUSH(track_angle));	// 13768 push    track_angle ;~ 0613:30D9
cs=0x613;eip=0x0030dd; 	J(CALLF(sin_fast,0));	// 13769 call    sin_fast ;~ 0613:30DD
cs=0x613;eip=0x0030e2; 	T(ADD(sp, 2));	// 13770 add     sp, 2 ;~ 0613:30E2
cs=0x613;eip=0x0030e5; 	X(PUSH(ax));	// 13771 push    ax ;~ 0613:30E5
cs=0x613;eip=0x0030e6; 	J(CALLF(multiply_and_scale,0));	// 13772 call    multiply_and_scale ;~ 0613:30E6
cs=0x613;eip=0x0030eb; 	T(ADD(sp, 4));	// 13773 add     sp, 4 ;~ 0613:30EB
cs=0x613;eip=0x0030ee; 	T(ADD(si, ax));	// 13774 add     si, ax ;~ 0613:30EE
cs=0x613;eip=0x0030f0; 	J(JNS(loc_17810));	// 13775 jns     short loc_17810 ;~ 0613:30F0
cs=0x613;eip=0x0030f2; 	T(SUB(ax, ax));	// 13776 sub     ax, ax ;~ 0613:30F2
cs=0x613;eip=0x0030f4; 	X(PUSH(ax));	// 13777 push    ax ;~ 0613:30F4
cs=0x613;eip=0x0030f5; 	T(MOV(ax, 3));	// 13778 mov     ax, 3 ;~ 0613:30F5
cs=0x613;eip=0x0030f8; 	X(PUSH(ax));	// 13779 push    ax ;~ 0613:30F8
cs=0x613;eip=0x0030f9; 	X(PUSH(cs));	// 13780 push    cs ;~ 0613:30F9
cs=0x613;eip=0x0030fa; 	J(CALL(update_crash_state,0));	// 13781 call    near ptr update_crash_state ;~ 0613:30FA
cs=0x613;eip=0x0030fd; 	T(ADD(sp, 4));	// 13782 add     sp, 4 ;~ 0613:30FD
loc_17810:
	// 5135 
cs=0x613;eip=0x003100; 	X(POP(si));	// 13786 pop     si ;~ 0613:3100
cs=0x613;eip=0x003101; 	X(POP(di));	// 13787 pop     di ;~ 0613:3101
cs=0x613;eip=0x003102; 	T(MOV(sp, bp));	// 13788 mov     sp, bp ;~ 0613:3102
cs=0x613;eip=0x003104; 	X(POP(bp));	// 13789 pop     bp ;~ 0613:3104
cs=0x613;eip=0x003105; 	J(RETF(0));	// 13790 retf ;~ 0613:3105

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_171fb: 	goto loc_171fb;
        case m2c::kloc_17242: 	goto loc_17242;
        case m2c::kloc_172cb: 	goto loc_172cb;
        case m2c::kloc_172d8: 	goto loc_172d8;
        case m2c::kloc_172e4: 	goto loc_172e4;
        case m2c::kloc_172e9: 	goto loc_172e9;
        case m2c::kloc_172f3: 	goto loc_172f3;
        case m2c::kloc_17308: 	goto loc_17308;
        case m2c::kloc_17322: 	goto loc_17322;
        case m2c::kloc_1732e: 	goto loc_1732e;
        case m2c::kloc_17349: 	goto loc_17349;
        case m2c::kloc_17350: 	goto loc_17350;
        case m2c::kloc_1736a: 	goto loc_1736a;
        case m2c::kloc_1736f: 	goto loc_1736f;
        case m2c::kloc_17374: 	goto loc_17374;
        case m2c::kloc_1737b: 	goto loc_1737b;
        case m2c::kloc_173ad: 	goto loc_173ad;
        case m2c::kloc_173b3: 	goto loc_173b3;
        case m2c::kloc_173c2: 	goto loc_173c2;
        case m2c::kloc_173f0: 	goto loc_173f0;
        case m2c::kloc_173f6: 	goto loc_173f6;
        case m2c::kloc_173fd: 	goto loc_173fd;
        case m2c::kloc_17402: 	goto loc_17402;
        case m2c::kloc_1740f: 	goto loc_1740f;
        case m2c::kloc_17431: 	goto loc_17431;
        case m2c::kloc_1743a: 	goto loc_1743a;
        case m2c::kloc_17449: 	goto loc_17449;
        case m2c::kloc_1746c: 	goto loc_1746c;
        case m2c::kloc_1747c: 	goto loc_1747c;
        case m2c::kloc_17481: 	goto loc_17481;
        case m2c::kloc_17490: 	goto loc_17490;
        case m2c::kloc_174b3: 	goto loc_174b3;
        case m2c::kloc_174bc: 	goto loc_174bc;
        case m2c::kloc_174c6: 	goto loc_174c6;
        case m2c::kloc_174c9: 	goto loc_174c9;
        case m2c::kloc_174dd: 	goto loc_174dd;
        case m2c::kloc_174e5: 	goto loc_174e5;
        case m2c::kloc_17515: 	goto loc_17515;
        case m2c::kloc_1752f: 	goto loc_1752f;
        case m2c::kloc_1753e: 	goto loc_1753e;
        case m2c::kloc_17547: 	goto loc_17547;
        case m2c::kloc_17552: 	goto loc_17552;
        case m2c::kloc_1755b: 	goto loc_1755b;
        case m2c::kloc_1758d: 	goto loc_1758d;
        case m2c::kloc_17599: 	goto loc_17599;
        case m2c::kloc_175a5: 	goto loc_175a5;
        case m2c::kloc_175af: 	goto loc_175af;
        case m2c::kloc_175d0: 	goto loc_175d0;
        case m2c::kloc_175f0: 	goto loc_175f0;
        case m2c::kloc_17631: 	goto loc_17631;
        case m2c::kloc_17640: 	goto loc_17640;
        case m2c::kloc_17643: 	goto loc_17643;
        case m2c::kloc_1764c: 	goto loc_1764c;
        case m2c::kloc_17684: 	goto loc_17684;
        case m2c::kloc_17694: 	goto loc_17694;
        case m2c::kloc_17699: 	goto loc_17699;
        case m2c::kloc_176b0: 	goto loc_176b0;
        case m2c::kloc_176ba: 	goto loc_176ba;
        case m2c::kloc_176c3: 	goto loc_176c3;
        case m2c::kloc_176dc: 	goto loc_176dc;
        case m2c::kloc_176e5: 	goto loc_176e5;
        case m2c::kloc_176f0: 	goto loc_176f0;
        case m2c::kloc_176f9: 	goto loc_176f9;
        case m2c::kloc_17764: 	goto loc_17764;
        case m2c::kloc_1776c: 	goto loc_1776c;
        case m2c::kloc_17771: 	goto loc_17771;
        case m2c::kloc_1777b: 	goto loc_1777b;
        case m2c::kloc_17793: 	goto loc_17793;
        case m2c::kloc_1779e: 	goto loc_1779e;
        case m2c::kloc_177ac: 	goto loc_177ac;
        case m2c::kloc_177de: 	goto loc_177de;
        case m2c::kloc_17810: 	goto loc_17810;
        case m2c::kplayer_op: 	goto player_op;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool detect_penalty(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    detect_penalty:
    _begin:
#undef var_5a4
#define var_5a4 -0x5A4
	// 13800 var_5A4         = word ptr -5A4h ;~ 0613:3106
#undef var_5a2
#define var_5a2 -0x5A2
	// 13801 var_5A2         = byte ptr -5A2h ;~ 0613:3106
#undef var_21a
#define var_21a -0x21A
	// 13802 var_21A         = word ptr -21Ah ;~ 0613:3106
#undef var_218
#define var_218 -0x218
	// 13803 var_218         = byte ptr -218h ;~ 0613:3106
#undef var_116
#define var_116 -0x116
	// 13804 var_116         = byte ptr -116h ;~ 0613:3106
#undef var_114
#define var_114 -0x114
	// 13805 var_114         = byte ptr -114h ;~ 0613:3106
#undef var_110
#define var_110 -0x110
	// 13806 var_110         = word ptr -110h ;~ 0613:3106
#undef var_e
#define var_e -0x0E
	// 13807 var_E           = byte ptr -0Eh ;~ 0613:3106
#undef var_c
#define var_c -0x0C
	// 13808 var_C           = byte ptr -0Ch ;~ 0613:3106
#undef var_a
#define var_a -0x0A
	// 13809 var_A           = byte ptr -0Ah ;~ 0613:3106
#undef var_8
#define var_8 -8
	// 13810 var_8           = word ptr -8 ;~ 0613:3106
#undef var_6
#define var_6 -6
	// 13811 var_6           = word ptr -6 ;~ 0613:3106
#undef var_4
#define var_4 -4
	// 13812 var_4           = byte ptr -4 ;~ 0613:3106
#undef var_2
#define var_2 -2
	// 13813 var_2           = word ptr -2 ;~ 0613:3106
#undef arg_0
#define arg_0 6
	// 13814 arg_0           = word ptr  6 ;~ 0613:3106
#undef arg_2
#define arg_2 8
	// 13815 arg_2           = word ptr  8 ;~ 0613:3106
cs=0x613;eip=0x003106; 	X(PUSH(bp));	// 13817 push    bp ;~ 0613:3106
cs=0x613;eip=0x003107; 	T(MOV(bp, sp));	// 13818 mov     bp, sp ;~ 0613:3107
cs=0x613;eip=0x003109; 	T(SUB(sp, 0x5A4));	// 13819 sub     sp, 5A4h ;~ 0613:3109
cs=0x613;eip=0x00310d; 	X(PUSH(di));	// 13820 push    di ;~ 0613:310D
cs=0x613;eip=0x00310e; 	X(PUSH(si));	// 13821 push    si ;~ 0613:310E
cs=0x613;eip=0x00310f; 	T(MOV(al, *(db*)(((db*)&word_445e8))));	// 13822 mov     al, byte ptr word_445E8 ;~ 0613:310F
cs=0x613;eip=0x003112; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 13823 mov     [bp+var_4], al ;~ 0613:3112
cs=0x613;eip=0x003115; 	T(MOV(al, 0x1D));	// 13824 mov     al, 1Dh ;~ 0613:3115
cs=0x613;eip=0x003117; 	T(SUB(al, *(db*)(((db*)&word_445f0))));	// 13825 sub     al, byte ptr word_445F0 ;~ 0613:3117
cs=0x613;eip=0x00311b; 	X(MOV(*(raddr(ss,bp+var_a)), al));	// 13826 mov     [bp+var_A], al ;~ 0613:311B
cs=0x613;eip=0x00311e; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 13827 mov     al, [bp+var_4] ;~ 0613:311E
cs=0x613;eip=0x003121; 	T(CBW);	// 13828 cbw ;~ 0613:3121
cs=0x613;eip=0x003122; 	X(MOV(*(dw*)(raddr(ss,bp+var_5a4)), ax));	// 13829 mov     [bp+var_5A4], ax ;~ 0613:3122
cs=0x613;eip=0x003126; 	T(MOV(ax, word_4478a));	// 13830 mov     ax, word_4478A ;~ 0613:3126
cs=0x613;eip=0x003129; 	T(CMP(*(dw*)(raddr(ss,bp+var_5a4)), ax));	// 13831 cmp     [bp+var_5A4], ax ;~ 0613:3129
cs=0x613;eip=0x00312d; 	J(JZ(loc_17848));	// 13832 jz      short loc_17848 ;~ 0613:312D
cs=0x613;eip=0x00312f; 	T(MOV(ax, word_4478c));	// 13833 mov     ax, word_4478C ;~ 0613:312F
cs=0x613;eip=0x003132; 	T(CMP(*(dw*)(raddr(ss,bp+var_5a4)), ax));	// 13834 cmp     [bp+var_5A4], ax ;~ 0613:3132
cs=0x613;eip=0x003136; 	J(JNZ(loc_17872));	// 13835 jnz     short loc_17872 ;~ 0613:3136
loc_17848:
	// 5136 
cs=0x613;eip=0x003138; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 13838 mov     al, [bp+var_A] ;~ 0613:3138
cs=0x613;eip=0x00313b; 	T(CBW);	// 13839 cbw ;~ 0613:313B
cs=0x613;eip=0x00313c; 	X(MOV(*(dw*)(raddr(ss,bp+var_5a4)), ax));	// 13840 mov     [bp+var_5A4], ax ;~ 0613:313C
cs=0x613;eip=0x003140; 	T(MOV(ax, word_4478e));	// 13841 mov     ax, word_4478E ;~ 0613:3140
cs=0x613;eip=0x003143; 	T(CMP(*(dw*)(raddr(ss,bp+var_5a4)), ax));	// 13842 cmp     [bp+var_5A4], ax ;~ 0613:3143
cs=0x613;eip=0x003147; 	J(JZ(loc_17862));	// 13843 jz      short loc_17862 ;~ 0613:3147
cs=0x613;eip=0x003149; 	T(MOV(ax, word_44790));	// 13844 mov     ax, word_44790 ;~ 0613:3149
cs=0x613;eip=0x00314c; 	T(CMP(*(dw*)(raddr(ss,bp+var_5a4)), ax));	// 13845 cmp     [bp+var_5A4], ax ;~ 0613:314C
cs=0x613;eip=0x003150; 	J(JNZ(loc_17872));	// 13846 jnz     short loc_17872 ;~ 0613:3150
loc_17862:
	// 5137 
cs=0x613;eip=0x003152; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 13849 mov     bx, [bp+arg_2] ;~ 0613:3152
cs=0x613;eip=0x003155; 	X(MOV(*(dw*)(raddr(ds,bx)), 0));	// 13850 mov     word ptr [bx], 0 ;~ 0613:3155
cs=0x613;eip=0x003159; 	T(SUB(ax, ax));	// 13851 sub     ax, ax ;~ 0613:3159
cs=0x613;eip=0x00315b; 	X(POP(si));	// 13852 pop     si ;~ 0613:315B
cs=0x613;eip=0x00315c; 	X(POP(di));	// 13853 pop     di ;~ 0613:315C
cs=0x613;eip=0x00315d; 	T(MOV(sp, bp));	// 13854 mov     sp, bp ;~ 0613:315D
cs=0x613;eip=0x00315f; 	X(POP(bp));	// 13855 pop     bp ;~ 0613:315F
cs=0x613;eip=0x003160; 	J(RETF(0));	// 13856 retf ;~ 0613:3160
loc_17872:
	// 5138 
cs=0x613;eip=0x003162; 	T(CMP(*(raddr(ss,bp+var_4)), 0));	// 13862 cmp     [bp+var_4], 0 ;~ 0613:3162
cs=0x613;eip=0x003166; 	J(JGE(loc_1787b));	// 13863 jge     short loc_1787B ;~ 0613:3166
cs=0x613;eip=0x003168; 	J(JMP(loc_1792e));	// 13864 jmp     loc_1792E ;~ 0613:3168
loc_1787b:
	// 5139 
cs=0x613;eip=0x00316b; 	T(CMP(*(raddr(ss,bp+var_4)), 0x1D));	// 13868 cmp     [bp+var_4], 1Dh ;~ 0613:316B
cs=0x613;eip=0x00316f; 	J(JLE(loc_17884));	// 13869 jle     short loc_17884 ;~ 0613:316F
cs=0x613;eip=0x003171; 	J(JMP(loc_1792e));	// 13870 jmp     loc_1792E ;~ 0613:3171
loc_17884:
	// 5140 
cs=0x613;eip=0x003174; 	T(CMP(*(raddr(ss,bp+var_a)), 0));	// 13874 cmp     [bp+var_A], 0 ;~ 0613:3174
cs=0x613;eip=0x003178; 	J(JGE(loc_1788d));	// 13875 jge     short loc_1788D ;~ 0613:3178
cs=0x613;eip=0x00317a; 	J(JMP(loc_1792e));	// 13876 jmp     loc_1792E ;~ 0613:317A
loc_1788d:
	// 5141 
cs=0x613;eip=0x00317d; 	T(CMP(*(raddr(ss,bp+var_a)), 0x1D));	// 13880 cmp     [bp+var_A], 1Dh ;~ 0613:317D
cs=0x613;eip=0x003181; 	J(JLE(loc_17896));	// 13881 jle     short loc_17896 ;~ 0613:3181
cs=0x613;eip=0x003183; 	J(JMP(loc_1792e));	// 13882 jmp     loc_1792E ;~ 0613:3183
loc_17896:
	// 5142 
cs=0x613;eip=0x003186; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 13886 mov     [bp+var_6], 0 ;~ 0613:3186
cs=0x613;eip=0x00318b; 	X(MOV(*(dw*)(raddr(ss,bp+var_21a)), 0));	// 13887 mov     [bp+var_21A], 0 ;~ 0613:318B
cs=0x613;eip=0x003191; 	T(SUB(di, di));	// 13888 sub     di, di ;~ 0613:3191
cs=0x613;eip=0x003193; 	T(SUB(si, si));	// 13889 sub     si, si ;~ 0613:3193
cs=0x613;eip=0x003195; 	J(JMP(loc_178ae));	// 13890 jmp     short loc_178AE ;~ 0613:3195
loc_178a8:
	// 5143 
cs=0x613;eip=0x003198; 	X(MOV(*(raddr(ss,bp+si+var_5a2)), 0));	// 13895 mov     [bp+si+var_5A2], 0 ;~ 0613:3198
cs=0x613;eip=0x00319d; 	T(INC(si));	// 13896 inc     si ;~ 0613:319D
loc_178ae:
	// 5144 
cs=0x613;eip=0x00319e; 	T(CMP(track_pieces_counter, si));	// 13899 cmp     track_pieces_counter, si ;~ 0613:319E
cs=0x613;eip=0x0031a2; 	J(JG(loc_178a8));	// 13900 jg      short loc_178A8 ;~ 0613:31A2
cs=0x613;eip=0x0031a4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 13901 mov     bx, [bp+arg_0] ;~ 0613:31A4
cs=0x613;eip=0x0031a7; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 13902 mov     si, [bx] ;~ 0613:31A7
loc_178b9:
	// 5145 
cs=0x613;eip=0x0031a9; 	T(MOV(bx, si));	// 13906 mov     bx, si ;~ 0613:31A9
cs=0x613;eip=0x0031ab; 	T(SHL(bx, 1));	// 13907 shl     bx, 1 ;~ 0613:31AB
cs=0x613;eip=0x0031ad; 	T(ADD(bx, *(dw*)(((db*)&td01_track_file_cpy))));	// 13908 add     bx, word ptr td01_track_file_cpy ;~ 0613:31AD
cs=0x613;eip=0x0031b1; 	T(MOV(es, *(dw*)(((db*)&td01_track_file_cpy)+2)));	// 13909 mov     es, word ptr td01_track_file_cpy+2 ;~ 0613:31B1
cs=0x613;eip=0x0031b5; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 13910 mov     ax, es:[bx] ;~ 0613:31B5
cs=0x613;eip=0x0031b8; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 13911 mov     [bp+var_2], ax ;~ 0613:31B8
cs=0x613;eip=0x0031bb; 	T(MOV(bx, ax));	// 13912 mov     bx, ax ;~ 0613:31BB
cs=0x613;eip=0x0031bd; 	T(ADD(bx, bp));	// 13913 add     bx, bp ;~ 0613:31BD
cs=0x613;eip=0x0031bf; 	T(CMP(*(raddr(ds,bx-0x5A2)), 0));	// 13914 cmp     byte ptr [bx-5A2h], 0 ;~ 0613:31BF
cs=0x613;eip=0x0031c4; 	J(JZ(loc_17938));	// 13915 jz      short loc_17938 ;~ 0613:31C4
cs=0x613;eip=0x0031c6; 	T(CMP(*(dw*)(raddr(ss,bp+var_21a)), 0));	// 13916 cmp     [bp+var_21A], 0 ;~ 0613:31C6
cs=0x613;eip=0x0031cb; 	J(JZ(loc_178fa));	// 13917 jz      short loc_178FA ;~ 0613:31CB
cs=0x613;eip=0x0031cd; 	X(DEC(*(dw*)(raddr(ss,bp+var_21a))));	// 13918 dec     [bp+var_21A] ;~ 0613:31CD
cs=0x613;eip=0x0031d1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_21a))));	// 13919 mov     ax, [bp+var_21A] ;~ 0613:31D1
cs=0x613;eip=0x0031d5; 	T(SHL(ax, 1));	// 13920 shl     ax, 1 ;~ 0613:31D5
cs=0x613;eip=0x0031d7; 	T(ADD(ax, bp));	// 13921 add     ax, bp ;~ 0613:31D7
cs=0x613;eip=0x0031d9; 	X(MOV(*(dw*)(raddr(ss,bp+var_5a4)), ax));	// 13922 mov     [bp+var_5A4], ax ;~ 0613:31D9
cs=0x613;eip=0x0031dd; 	T(MOV(bx, ax));	// 13923 mov     bx, ax ;~ 0613:31DD
cs=0x613;eip=0x0031df; 	T(MOV(si, *(dw*)(raddr(ds,bx-0x216))));	// 13924 mov     si, [bx-216h] ;~ 0613:31DF
cs=0x613;eip=0x0031e3; 	T(MOV(di, *(dw*)(raddr(ds,bx-0x10E))));	// 13925 mov     di, [bx-10Eh] ;~ 0613:31E3
cs=0x613;eip=0x0031e7; 	J(JMP(loc_178b9));	// 13926 jmp     short loc_178B9 ;~ 0613:31E7
loc_178fa:
	// 5146 
cs=0x613;eip=0x0031ea; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0));	// 13931 cmp     [bp+var_6], 0 ;~ 0613:31EA
cs=0x613;eip=0x0031ee; 	J(JZ(loc_1791a));	// 13932 jz      short loc_1791A ;~ 0613:31EE
cs=0x613;eip=0x0031f0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 13933 mov     bx, [bp+arg_0] ;~ 0613:31F0
cs=0x613;eip=0x0031f3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_110))));	// 13934 mov     ax, [bp+var_110] ;~ 0613:31F3
cs=0x613;eip=0x0031f7; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 13935 mov     [bx], ax ;~ 0613:31F7
cs=0x613;eip=0x0031f9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 13936 mov     bx, [bp+arg_2] ;~ 0613:31F9
cs=0x613;eip=0x0031fc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 13937 mov     ax, [bp+var_6] ;~ 0613:31FC
cs=0x613;eip=0x0031ff; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 13938 mov     [bx], ax ;~ 0613:31FF
loc_17911:
	// 5147 
cs=0x613;eip=0x003201; 	T(MOV(ax, 1));	// 13942 mov     ax, 1 ;~ 0613:3201
cs=0x613;eip=0x003204; 	X(POP(si));	// 13943 pop     si ;~ 0613:3204
cs=0x613;eip=0x003205; 	X(POP(di));	// 13944 pop     di ;~ 0613:3205
cs=0x613;eip=0x003206; 	T(MOV(sp, bp));	// 13945 mov     sp, bp ;~ 0613:3206
cs=0x613;eip=0x003208; 	X(POP(bp));	// 13946 pop     bp ;~ 0613:3208
cs=0x613;eip=0x003209; 	J(RETF(0));	// 13947 retf ;~ 0613:3209
loc_1791a:
	// 5148 
cs=0x613;eip=0x00320a; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 13951 mov     al, [bp+var_4] ;~ 0613:320A
cs=0x613;eip=0x00320d; 	T(CBW);	// 13952 cbw ;~ 0613:320D
cs=0x613;eip=0x00320e; 	X(MOV(word_4478a, ax));	// 13953 mov     word_4478A, ax ;~ 0613:320E
cs=0x613;eip=0x003211; 	X(MOV(word_4478c, ax));	// 13954 mov     word_4478C, ax ;~ 0613:3211
cs=0x613;eip=0x003214; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 13955 mov     al, [bp+var_A] ;~ 0613:3214
cs=0x613;eip=0x003217; 	T(CBW);	// 13956 cbw ;~ 0613:3217
cs=0x613;eip=0x003218; 	X(MOV(word_4478e, ax));	// 13957 mov     word_4478E, ax ;~ 0613:3218
cs=0x613;eip=0x00321b; 	X(MOV(word_44790, ax));	// 13958 mov     word_44790, ax ;~ 0613:321B
loc_1792e:
	// 5149 
cs=0x613;eip=0x00321e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 13962 mov     bx, [bp+arg_2] ;~ 0613:321E
cs=0x613;eip=0x003221; 	X(MOV(*(dw*)(raddr(ds,bx)), 0x0FFFE));	// 13963 mov     word ptr [bx], 0FFFEh ;~ 0613:3221
cs=0x613;eip=0x003225; 	J(JMP(loc_17911));	// 13964 jmp     short loc_17911 ;~ 0613:3225
loc_17938:
	// 5150 
cs=0x613;eip=0x003228; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 13969 mov     bx, [bp+var_2] ;~ 0613:3228
cs=0x613;eip=0x00322b; 	T(ADD(bx, bp));	// 13970 add     bx, bp ;~ 0613:322B
cs=0x613;eip=0x00322d; 	X(MOV(*(raddr(ds,bx-0x5A2)), 1));	// 13971 mov     byte ptr [bx-5A2h], 1 ;~ 0613:322D
cs=0x613;eip=0x003232; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 13972 mov     bx, [bp+var_2] ;~ 0613:3232
cs=0x613;eip=0x003235; 	T(ADD(bx, *(dw*)(((db*)&td22_row_from_path))));	// 13973 add     bx, word ptr td22_row_from_path ;~ 0613:3235
cs=0x613;eip=0x003239; 	T(MOV(es, *(dw*)(((db*)&td22_row_from_path)+2)));	// 13974 mov     es, word ptr td22_row_from_path+2 ;~ 0613:3239
cs=0x613;eip=0x00323d; 	T(MOV(al, *(raddr(es,bx))));	// 13975 mov     al, es:[bx] ;~ 0613:323D
cs=0x613;eip=0x003240; 	X(MOV(*(raddr(ss,bp+var_e)), al));	// 13976 mov     [bp+var_E], al ;~ 0613:3240
cs=0x613;eip=0x003243; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 13977 mov     bx, [bp+var_2] ;~ 0613:3243
cs=0x613;eip=0x003246; 	T(ADD(bx, *(dw*)(((db*)&td17_trk_elem_ordered))));	// 13978 add     bx, word ptr td17_trk_elem_ordered ;~ 0613:3246
cs=0x613;eip=0x00324a; 	T(MOV(es, *(dw*)(((db*)&td17_trk_elem_ordered)+2)));	// 13979 mov     es, word ptr td17_trk_elem_ordered+2 ;~ 0613:324A
cs=0x613;eip=0x00324e; 	T(MOV(al, *(raddr(es,bx))));	// 13980 mov     al, es:[bx] ;~ 0613:324E
cs=0x613;eip=0x003251; 	T(SUB(ah, ah));	// 13981 sub     ah, ah ;~ 0613:3251
cs=0x613;eip=0x003253; 	T(MOV(bx, ax));	// 13982 mov     bx, ax ;~ 0613:3253
cs=0x613;eip=0x003255; 	T(SHL(bx, 1));	// 13983 shl     bx, 1 ;~ 0613:3255
cs=0x613;eip=0x003257; 	T(ADD(bx, ax));	// 13984 add     bx, ax ;~ 0613:3257
cs=0x613;eip=0x003259; 	T(SHL(bx, 1));	// 13985 shl     bx, 1 ;~ 0613:3259
cs=0x613;eip=0x00325b; 	T(ADD(bx, ax));	// 13986 add     bx, ax ;~ 0613:325B
cs=0x613;eip=0x00325d; 	T(SHL(bx, 1));	// 13987 shl     bx, 1 ;~ 0613:325D
cs=0x613;eip=0x00325f; 	T(MOV(al, *((&byte_3d813)+bx)));	// 13988 mov     al, byte_3D813[bx] ;~ 0613:325F
cs=0x613;eip=0x003263; 	X(MOV(*(raddr(ss,bp+var_116)), al));	// 13989 mov     [bp+var_116], al ;~ 0613:3263
cs=0x613;eip=0x003267; 	T(TEST(*(raddr(ss,bp+var_116)), 1));	// 13990 test    [bp+var_116], 1 ;~ 0613:3267
cs=0x613;eip=0x00326c; 	J(JZ(loc_17986));	// 13991 jz      short loc_17986 ;~ 0613:326C
cs=0x613;eip=0x00326e; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 13992 mov     al, [bp+var_E] ;~ 0613:326E
cs=0x613;eip=0x003271; 	T(INC(al));	// 13993 inc     al ;~ 0613:3271
cs=0x613;eip=0x003273; 	J(JMP(loc_17989));	// 13994 jmp     short loc_17989 ;~ 0613:3273
loc_17986:
	// 5151 
cs=0x613;eip=0x003276; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 13999 mov     al, [bp+var_E] ;~ 0613:3276
loc_17989:
	// 5152 
cs=0x613;eip=0x003279; 	X(MOV(*(raddr(ss,bp+var_218)), al));	// 14002 mov     [bp+var_218], al ;~ 0613:3279
cs=0x613;eip=0x00327d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 14003 mov     bx, [bp+var_2] ;~ 0613:327D
cs=0x613;eip=0x003280; 	T(ADD(bx, *(dw*)(((db*)&td21_col_from_path))));	// 14004 add     bx, word ptr td21_col_from_path ;~ 0613:3280
cs=0x613;eip=0x003284; 	T(MOV(es, *(dw*)(((db*)&td21_col_from_path)+2)));	// 14005 mov     es, word ptr td21_col_from_path+2 ;~ 0613:3284
cs=0x613;eip=0x003288; 	T(MOV(al, *(raddr(es,bx))));	// 14006 mov     al, es:[bx] ;~ 0613:3288
cs=0x613;eip=0x00328b; 	X(MOV(*(raddr(ss,bp+var_c)), al));	// 14007 mov     [bp+var_C], al ;~ 0613:328B
cs=0x613;eip=0x00328e; 	T(TEST(*(raddr(ss,bp+var_116)), 2));	// 14008 test    [bp+var_116], 2 ;~ 0613:328E
cs=0x613;eip=0x003293; 	J(JZ(loc_179aa));	// 14009 jz      short loc_179AA ;~ 0613:3293
cs=0x613;eip=0x003295; 	T(INC(al));	// 14010 inc     al ;~ 0613:3295
cs=0x613;eip=0x003297; 	J(JMP(loc_179ad));	// 14011 jmp     short loc_179AD ;~ 0613:3297
loc_179aa:
	// 5153 
cs=0x613;eip=0x00329a; 	T(MOV(al, *(raddr(ss,bp+var_c))));	// 14016 mov     al, [bp+var_C] ;~ 0613:329A
loc_179ad:
	// 5154 
cs=0x613;eip=0x00329d; 	X(MOV(*(raddr(ss,bp+var_114)), al));	// 14019 mov     [bp+var_114], al ;~ 0613:329D
cs=0x613;eip=0x0032a1; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 14020 mov     al, [bp+var_4] ;~ 0613:32A1
cs=0x613;eip=0x0032a4; 	T(CMP(*(raddr(ss,bp+var_c)), al));	// 14021 cmp     [bp+var_C], al ;~ 0613:32A4
cs=0x613;eip=0x0032a7; 	J(JZ(loc_179bf));	// 14022 jz      short loc_179BF ;~ 0613:32A7
cs=0x613;eip=0x0032a9; 	T(CMP(*(raddr(ss,bp+var_114)), al));	// 14023 cmp     [bp+var_114], al ;~ 0613:32A9
cs=0x613;eip=0x0032ad; 	J(JNZ(loc_17a19));	// 14024 jnz     short loc_17A19 ;~ 0613:32AD
loc_179bf:
	// 5155 
cs=0x613;eip=0x0032af; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 14027 mov     al, [bp+var_A] ;~ 0613:32AF
cs=0x613;eip=0x0032b2; 	T(CMP(*(raddr(ss,bp+var_e)), al));	// 14028 cmp     [bp+var_E], al ;~ 0613:32B2
cs=0x613;eip=0x0032b5; 	J(JZ(loc_179cd));	// 14029 jz      short loc_179CD ;~ 0613:32B5
cs=0x613;eip=0x0032b7; 	T(CMP(*(raddr(ss,bp+var_218)), al));	// 14030 cmp     [bp+var_218], al ;~ 0613:32B7
cs=0x613;eip=0x0032bb; 	J(JNZ(loc_17a19));	// 14031 jnz     short loc_17A19 ;~ 0613:32BB
loc_179cd:
	// 5156 
cs=0x613;eip=0x0032bd; 	T(MOV(bx, si));	// 14034 mov     bx, si ;~ 0613:32BD
cs=0x613;eip=0x0032bf; 	T(SHL(bx, 1));	// 14035 shl     bx, 1 ;~ 0613:32BF
cs=0x613;eip=0x0032c1; 	T(ADD(bx, *(dw*)(((db*)&td02_penalty_related))));	// 14036 add     bx, word ptr td02_penalty_related ;~ 0613:32C1
cs=0x613;eip=0x0032c5; 	T(MOV(es, *(dw*)(((db*)&td02_penalty_related)+2)));	// 14037 mov     es, word ptr td02_penalty_related+2 ;~ 0613:32C5
cs=0x613;eip=0x0032c9; 	T(CMP(*(dw*)(raddr(es,bx)), 0x0FFFF));	// 14038 cmp     word ptr es:[bx], 0FFFFh ;~ 0613:32C9
cs=0x613;eip=0x0032cd; 	J(JZ(loc_179e2));	// 14039 jz      short loc_179E2 ;~ 0613:32CD
cs=0x613;eip=0x0032cf; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 14040 mov     [bp+var_2], si ;~ 0613:32CF
loc_179e2:
	// 5157 
cs=0x613;eip=0x0032d2; 	T(MOV(al, *(raddr(ss,bp+var_c))));	// 14043 mov     al, [bp+var_C] ;~ 0613:32D2
cs=0x613;eip=0x0032d5; 	T(CBW);	// 14044 cbw ;~ 0613:32D5
cs=0x613;eip=0x0032d6; 	X(MOV(word_4478a, ax));	// 14045 mov     word_4478A, ax ;~ 0613:32D6
cs=0x613;eip=0x0032d9; 	T(MOV(al, *(raddr(ss,bp+var_114))));	// 14046 mov     al, [bp+var_114] ;~ 0613:32D9
cs=0x613;eip=0x0032dd; 	T(CBW);	// 14047 cbw ;~ 0613:32DD
cs=0x613;eip=0x0032de; 	X(MOV(word_4478c, ax));	// 14048 mov     word_4478C, ax ;~ 0613:32DE
cs=0x613;eip=0x0032e1; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 14049 mov     al, [bp+var_E] ;~ 0613:32E1
cs=0x613;eip=0x0032e4; 	T(CBW);	// 14050 cbw ;~ 0613:32E4
cs=0x613;eip=0x0032e5; 	X(MOV(word_4478e, ax));	// 14051 mov     word_4478E, ax ;~ 0613:32E5
cs=0x613;eip=0x0032e8; 	T(MOV(al, *(raddr(ss,bp+var_218))));	// 14052 mov     al, [bp+var_218] ;~ 0613:32E8
cs=0x613;eip=0x0032ec; 	T(CBW);	// 14053 cbw ;~ 0613:32EC
cs=0x613;eip=0x0032ed; 	X(MOV(word_44790, ax));	// 14054 mov     word_44790, ax ;~ 0613:32ED
cs=0x613;eip=0x0032f0; 	T(OR(di, di));	// 14055 or      di, di ;~ 0613:32F0
cs=0x613;eip=0x0032f2; 	J(JLE(loc_17a5e));	// 14056 jle     short loc_17A5E ;~ 0613:32F2
cs=0x613;eip=0x0032f4; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0));	// 14057 cmp     [bp+var_6], 0 ;~ 0613:32F4
cs=0x613;eip=0x0032f8; 	J(JZ(loc_17a0f));	// 14058 jz      short loc_17A0F ;~ 0613:32F8
cs=0x613;eip=0x0032fa; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), di));	// 14059 cmp     [bp+var_6], di ;~ 0613:32FA
cs=0x613;eip=0x0032fd; 	J(JLE(loc_17a19));	// 14060 jle     short loc_17A19 ;~ 0613:32FD
loc_17a0f:
	// 5158 
cs=0x613;eip=0x0032ff; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 14063 mov     ax, [bp+var_2] ;~ 0613:32FF
cs=0x613;eip=0x003302; 	X(MOV(*(dw*)(raddr(ss,bp+var_110)), ax));	// 14064 mov     [bp+var_110], ax ;~ 0613:3302
cs=0x613;eip=0x003306; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), di));	// 14065 mov     [bp+var_6], di ;~ 0613:3306
loc_17a19:
	// 5159 
cs=0x613;eip=0x003309; 	T(MOV(bx, si));	// 14069 mov     bx, si ;~ 0613:3309
cs=0x613;eip=0x00330b; 	T(SHL(bx, 1));	// 14070 shl     bx, 1 ;~ 0613:330B
cs=0x613;eip=0x00330d; 	T(ADD(bx, *(dw*)(((db*)&td02_penalty_related))));	// 14071 add     bx, word ptr td02_penalty_related ;~ 0613:330D
cs=0x613;eip=0x003311; 	T(MOV(es, *(dw*)(((db*)&td02_penalty_related)+2)));	// 14072 mov     es, word ptr td02_penalty_related+2 ;~ 0613:3311
cs=0x613;eip=0x003315; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 14073 mov     ax, es:[bx] ;~ 0613:3315
cs=0x613;eip=0x003318; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 14074 mov     [bp+var_8], ax ;~ 0613:3318
cs=0x613;eip=0x00331b; 	T(CMP(ax, 0x0FFFF));	// 14075 cmp     ax, 0FFFFh ;~ 0613:331B
cs=0x613;eip=0x00331e; 	J(JZ(loc_17a4f));	// 14076 jz      short loc_17A4F ;~ 0613:331E
cs=0x613;eip=0x003320; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_21a))));	// 14077 mov     bx, [bp+var_21A] ;~ 0613:3320
cs=0x613;eip=0x003324; 	T(SHL(bx, 1));	// 14078 shl     bx, 1 ;~ 0613:3324
cs=0x613;eip=0x003326; 	T(ADD(bx, bp));	// 14079 add     bx, bp ;~ 0613:3326
cs=0x613;eip=0x003328; 	X(MOV(*(dw*)(raddr(ds,bx-0x10E)), di));	// 14080 mov     [bx-10Eh], di ;~ 0613:3328
cs=0x613;eip=0x00332c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_21a))));	// 14081 mov     bx, [bp+var_21A] ;~ 0613:332C
cs=0x613;eip=0x003330; 	X(INC(*(dw*)(raddr(ss,bp+var_21a))));	// 14082 inc     [bp+var_21A] ;~ 0613:3330
cs=0x613;eip=0x003334; 	T(SHL(bx, 1));	// 14083 shl     bx, 1 ;~ 0613:3334
cs=0x613;eip=0x003336; 	T(ADD(bx, bp));	// 14084 add     bx, bp ;~ 0613:3336
cs=0x613;eip=0x003338; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 14085 mov     ax, [bp+var_8] ;~ 0613:3338
cs=0x613;eip=0x00333b; 	X(MOV(*(dw*)(raddr(ds,bx-0x216)), ax));	// 14086 mov     [bx-216h], ax ;~ 0613:333B
loc_17a4f:
	// 5160 
cs=0x613;eip=0x00333f; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 14089 cmp     [bp+var_2], 0 ;~ 0613:333F
cs=0x613;eip=0x003343; 	J(JZ(loc_17a6e));	// 14090 jz      short loc_17A6E ;~ 0613:3343
cs=0x613;eip=0x003345; 	T(CMP(di, 0x0FFFF));	// 14091 cmp     di, 0FFFFh ;~ 0613:3345
cs=0x613;eip=0x003348; 	J(JZ(loc_17a71));	// 14092 jz      short loc_17A71 ;~ 0613:3348
cs=0x613;eip=0x00334a; 	T(INC(di));	// 14093 inc     di ;~ 0613:334A
cs=0x613;eip=0x00334b; 	J(JMP(loc_17a71));	// 14094 jmp     short loc_17A71 ;~ 0613:334B
loc_17a5e:
	// 5161 
cs=0x613;eip=0x00334e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14099 mov     bx, [bp+arg_0] ;~ 0613:334E
cs=0x613;eip=0x003351; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 14100 mov     ax, [bp+var_2] ;~ 0613:3351
cs=0x613;eip=0x003354; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 14101 mov     [bx], ax ;~ 0613:3354
cs=0x613;eip=0x003356; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 14102 mov     bx, [bp+arg_2] ;~ 0613:3356
cs=0x613;eip=0x003359; 	X(MOV(*(dw*)(raddr(ds,bx)), di));	// 14103 mov     [bx], di ;~ 0613:3359
cs=0x613;eip=0x00335b; 	J(JMP(loc_17911));	// 14104 jmp     loc_17911 ;~ 0613:335B
loc_17a6e:
	// 5162 
cs=0x613;eip=0x00335e; 	T(MOV(di, 0x0FFFF));	// 14108 mov     di, 0FFFFh ;~ 0613:335E
loc_17a71:
	// 5163 
cs=0x613;eip=0x003361; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2))));	// 14112 mov     si, [bp+var_2] ;~ 0613:3361
cs=0x613;eip=0x003364; 	J(JMP(loc_178b9));	// 14113 jmp     loc_178B9 ;~ 0613:3364

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdetect_penalty: 	goto detect_penalty;
        case m2c::kloc_17848: 	goto loc_17848;
        case m2c::kloc_17862: 	goto loc_17862;
        case m2c::kloc_17872: 	goto loc_17872;
        case m2c::kloc_1787b: 	goto loc_1787b;
        case m2c::kloc_17884: 	goto loc_17884;
        case m2c::kloc_1788d: 	goto loc_1788d;
        case m2c::kloc_17896: 	goto loc_17896;
        case m2c::kloc_178a8: 	goto loc_178a8;
        case m2c::kloc_178ae: 	goto loc_178ae;
        case m2c::kloc_178b9: 	goto loc_178b9;
        case m2c::kloc_178fa: 	goto loc_178fa;
        case m2c::kloc_17911: 	goto loc_17911;
        case m2c::kloc_1791a: 	goto loc_1791a;
        case m2c::kloc_1792e: 	goto loc_1792e;
        case m2c::kloc_17938: 	goto loc_17938;
        case m2c::kloc_17986: 	goto loc_17986;
        case m2c::kloc_17989: 	goto loc_17989;
        case m2c::kloc_179aa: 	goto loc_179aa;
        case m2c::kloc_179ad: 	goto loc_179ad;
        case m2c::kloc_179bf: 	goto loc_179bf;
        case m2c::kloc_179cd: 	goto loc_179cd;
        case m2c::kloc_179e2: 	goto loc_179e2;
        case m2c::kloc_17a0f: 	goto loc_17a0f;
        case m2c::kloc_17a19: 	goto loc_17a19;
        case m2c::kloc_17a4f: 	goto loc_17a4f;
        case m2c::kloc_17a5e: 	goto loc_17a5e;
        case m2c::kloc_17a6e: 	goto loc_17a6e;
        case m2c::kloc_17a71: 	goto loc_17a71;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool update_car_speed(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    update_car_speed:
    _begin:
#undef var_a
#define var_a -0x0A
	// 14126 var_A           = byte ptr -0Ah ;~ 0613:3368
#undef var_8
#define var_8 -8
	// 14127 var_8           = word ptr -8 ;~ 0613:3368
#undef var_6
#define var_6 -6
	// 14128 var_6           = word ptr -6 ;~ 0613:3368
#undef var_4
#define var_4 -4
	// 14129 var_4           = dword ptr -4 ;~ 0613:3368
#undef arg_0
#define arg_0 6
	// 14130 arg_0           = byte ptr  6 ;~ 0613:3368
#undef arg_2
#define arg_2 8
	// 14131 arg_2           = byte ptr  8 ;~ 0613:3368
#undef arg_4
#define arg_4 0x0A
	// 14132 arg_4           = word ptr  0Ah ;~ 0613:3368
#undef arg_6
#define arg_6 0x0C
	// 14133 arg_6           = word ptr  0Ch ;~ 0613:3368
cs=0x613;eip=0x003368; 	X(PUSH(bp));	// 14135 push    bp              ; former update_car_state ;~ 0613:3368
cs=0x613;eip=0x003369; 	T(MOV(bp, sp));	// 14136 mov     bp, sp ;~ 0613:3369
cs=0x613;eip=0x00336b; 	T(SUB(sp, 0x0A));	// 14137 sub     sp, 0Ah ;~ 0613:336B
cs=0x613;eip=0x00336e; 	X(PUSH(di));	// 14138 push    di ;~ 0613:336E
cs=0x613;eip=0x00336f; 	X(PUSH(si));	// 14139 push    si ;~ 0613:336F
cs=0x613;eip=0x003370; 	T(CMP(framespersec, 0x14));	// 14140 cmp     framespersec, 14h ;~ 0613:3370
cs=0x613;eip=0x003375; 	J(JNZ(loc_17a8e));	// 14141 jnz     short loc_17A8E ;~ 0613:3375
cs=0x613;eip=0x003377; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), 6));	// 14142 mov     word ptr [bp+var_4+2], 6 ;~ 0613:3377
cs=0x613;eip=0x00337c; 	J(JMP(loc_17a93));	// 14143 jmp     short loc_17A93 ;~ 0613:337C
loc_17a8e:
	// 5164 
cs=0x613;eip=0x00337e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), 0x0C));	// 14147 mov     word ptr [bp+var_4+2], 0Ch ;~ 0613:337E
loc_17a93:
	// 5165 
cs=0x613;eip=0x003383; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14150 mov     bx, [bp+arg_4] ;~ 0613:3383
cs=0x613;eip=0x003386; 	T(CMP(*(raddr(ds,bx+0x0C6)), 0));	// 14151 cmp     byte ptr [bx+0C6h], 0 ;~ 0613:3386
cs=0x613;eip=0x00338b; 	J(JZ(loc_17aa1));	// 14152 jz      short loc_17AA1 ;~ 0613:338B
cs=0x613;eip=0x00338d; 	X(DEC(*(raddr(ds,bx+0x0C6))));	// 14153 dec     byte ptr [bx+0C6h] ;~ 0613:338D
loc_17aa1:
	// 5166 
cs=0x613;eip=0x003391; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14156 mov     bx, [bp+arg_4] ;~ 0613:3391
cs=0x613;eip=0x003394; 	T(MOV(si, bx));	// 14157 mov     si, bx ;~ 0613:3394
cs=0x613;eip=0x003396; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x2C))));	// 14158 mov     ax, [si+2Ch] ;~ 0613:3396
cs=0x613;eip=0x003399; 	T(SUB(ax, *(dw*)(raddr(ds,si+0x2E))));	// 14159 sub     ax, [si+2Eh] ;~ 0613:3399
cs=0x613;eip=0x00339c; 	X(MOV(*(dw*)(raddr(ds,bx+0x28)), ax));	// 14160 mov     [bx+28h], ax ;~ 0613:339C
cs=0x613;eip=0x00339f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14161 mov     bx, [bp+arg_4] ;~ 0613:339F
cs=0x613;eip=0x0033a2; 	T(MOV(si, bx));	// 14162 mov     si, bx ;~ 0613:33A2
cs=0x613;eip=0x0033a4; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x2C))));	// 14163 mov     ax, [si+2Ch] ;~ 0613:33A4
cs=0x613;eip=0x0033a7; 	X(MOV(*(dw*)(raddr(ds,bx+0x2E)), ax));	// 14164 mov     [bx+2Eh], ax ;~ 0613:33A7
cs=0x613;eip=0x0033aa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14165 mov     bx, [bp+arg_4] ;~ 0613:33AA
cs=0x613;eip=0x0033ad; 	T(MOV(si, bx));	// 14166 mov     si, bx ;~ 0613:33AD
cs=0x613;eip=0x0033af; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x22))));	// 14167 mov     ax, [si+22h] ;~ 0613:33AF
cs=0x613;eip=0x0033b2; 	X(MOV(*(dw*)(raddr(ds,bx+0x24)), ax));	// 14168 mov     [bx+24h], ax ;~ 0613:33B2
cs=0x613;eip=0x0033b5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14169 mov     bx, [bp+arg_4] ;~ 0613:33B5
cs=0x613;eip=0x0033b8; 	T(CMP(*(raddr(ds,bx+0x0CC)), 0));	// 14170 cmp     byte ptr [bx+0CCh], 0 ;~ 0613:33B8
cs=0x613;eip=0x0033bd; 	J(JNZ(loc_17ae6));	// 14171 jnz     short loc_17AE6 ;~ 0613:33BD
cs=0x613;eip=0x0033bf; 	T(CMP(*(raddr(ds,bx+0x0CA)), 0));	// 14172 cmp     byte ptr [bx+0CAh], 0 ;~ 0613:33BF
cs=0x613;eip=0x0033c4; 	J(JNZ(loc_17ae6));	// 14173 jnz     short loc_17AE6 ;~ 0613:33C4
cs=0x613;eip=0x0033c6; 	T(TEST(*(raddr(ss,bp+arg_0)), 0x10));	// 14174 test    [bp+arg_0], 10h ;~ 0613:33C6
cs=0x613;eip=0x0033ca; 	J(JNZ(loc_17b0f));	// 14175 jnz     short loc_17B0F ;~ 0613:33CA
cs=0x613;eip=0x0033cc; 	T(TEST(*(raddr(ss,bp+arg_0)), 0x20));	// 14176 test    [bp+arg_0], 20h ;~ 0613:33CC
cs=0x613;eip=0x0033d0; 	J(JNZ(loc_17b2e));	// 14177 jnz     short loc_17B2E ;~ 0613:33D0
cs=0x613;eip=0x0033d2; 	J(JMP(loc_17b86));	// 14178 jmp     loc_17B86 ;~ 0613:33D2
loc_17ae6:
	// 5167 
cs=0x613;eip=0x0033d6; 	T(CMP(*(raddr(ds,bx+0x0BE)), 0));	// 14184 cmp     byte ptr [bx+0BEh], 0 ;~ 0613:33D6
cs=0x613;eip=0x0033db; 	J(JNZ(loc_17af0));	// 14185 jnz     short loc_17AF0 ;~ 0613:33DB
cs=0x613;eip=0x0033dd; 	J(JMP(loc_17b86));	// 14186 jmp     loc_17B86 ;~ 0613:33DD
loc_17af0:
	// 5168 
cs=0x613;eip=0x0033e0; 	T(CMP(*(raddr(ds,bx+0x0CA)), 0));	// 14190 cmp     byte ptr [bx+0CAh], 0 ;~ 0613:33E0
cs=0x613;eip=0x0033e5; 	J(JZ(loc_17afa));	// 14191 jz      short loc_17AFA ;~ 0613:33E5
cs=0x613;eip=0x0033e7; 	J(JMP(loc_17b86));	// 14192 jmp     loc_17B86 ;~ 0613:33E7
loc_17afa:
	// 5169 
cs=0x613;eip=0x0033ea; 	T(CMP(*(raddr(ds,bx+0x0C0)), 0));	// 14196 cmp     byte ptr [bx+0C0h], 0 ;~ 0613:33EA
cs=0x613;eip=0x0033ef; 	J(JNZ(loc_17b04));	// 14197 jnz     short loc_17B04 ;~ 0613:33EF
cs=0x613;eip=0x0033f1; 	J(JMP(loc_17b86));	// 14198 jmp     loc_17B86 ;~ 0613:33F1
loc_17b04:
	// 5170 
cs=0x613;eip=0x0033f4; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_6))));	// 14202 mov     si, [bp+arg_6] ;~ 0613:33F4
cs=0x613;eip=0x0033f7; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x0A))));	// 14203 mov     ax, [si+0Ah] ;~ 0613:33F7
cs=0x613;eip=0x0033fa; 	T(CMP(*(dw*)(raddr(ds,bx+0x22)), ax));	// 14204 cmp     [bx+22h], ax ;~ 0613:33FA
cs=0x613;eip=0x0033fd; 	J(JBE(loc_17b20));	// 14205 jbe     short loc_17B20 ;~ 0613:33FD
loc_17b0f:
	// 5171 
cs=0x613;eip=0x0033ff; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_6))));	// 14208 mov     si, [bp+arg_6] ;~ 0613:33FF
cs=0x613;eip=0x003402; 	T(MOV(al, *(raddr(ds,si+0))));	// 14209 mov     al, [si+0] ;~ 0613:3402
cs=0x613;eip=0x003404; 	T(CMP(*(raddr(ds,bx+0x0BE)), al));	// 14210 cmp     [bx+0BEh], al ;~ 0613:3404
cs=0x613;eip=0x003408; 	J(JZ(loc_17b86));	// 14211 jz      short loc_17B86 ;~ 0613:3408
cs=0x613;eip=0x00340a; 	X(INC(*(raddr(ds,bx+0x0BE))));	// 14212 inc     byte ptr [bx+0BEh] ;~ 0613:340A
cs=0x613;eip=0x00340e; 	J(JMP(loc_17b39));	// 14213 jmp     short loc_17B39 ;~ 0613:340E
loc_17b20:
	// 5172 
cs=0x613;eip=0x003410; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14217 mov     bx, [bp+arg_4] ;~ 0613:3410
cs=0x613;eip=0x003413; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_6))));	// 14218 mov     si, [bp+arg_6] ;~ 0613:3413
cs=0x613;eip=0x003416; 	T(MOV(ax, *(dw*)(raddr(ds,si+8))));	// 14219 mov     ax, [si+8] ;~ 0613:3416
cs=0x613;eip=0x003419; 	T(CMP(*(dw*)(raddr(ds,bx+0x22)), ax));	// 14220 cmp     [bx+22h], ax ;~ 0613:3419
cs=0x613;eip=0x00341c; 	J(JNC(loc_17b86));	// 14221 jnb     short loc_17B86 ;~ 0613:341C
loc_17b2e:
	// 5173 
cs=0x613;eip=0x00341e; 	T(CMP(*(raddr(ds,bx+0x0BE)), 1));	// 14224 cmp     byte ptr [bx+0BEh], 1 ;~ 0613:341E
cs=0x613;eip=0x003423; 	J(JLE(loc_17b86));	// 14225 jle     short loc_17B86 ;~ 0613:3423
cs=0x613;eip=0x003425; 	X(DEC(*(raddr(ds,bx+0x0BE))));	// 14226 dec     byte ptr [bx+0BEh] ;~ 0613:3425
loc_17b39:
	// 5174 
cs=0x613;eip=0x003429; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14229 mov     bx, [bp+arg_4] ;~ 0613:3429
cs=0x613;eip=0x00342c; 	X(MOV(*(raddr(ds,bx+0x0CA)), 1));	// 14230 mov     byte ptr [bx+0CAh], 1 ;~ 0613:342C
cs=0x613;eip=0x003431; 	T(MOV(al, *(db*)(((db*)&framespersec))));	// 14231 mov     al, byte ptr framespersec ;~ 0613:3431
cs=0x613;eip=0x003434; 	T(CBW);	// 14232 cbw ;~ 0613:3434
cs=0x613;eip=0x003435; 	T(SAR(ax, 1));	// 14233 sar     ax, 1 ;~ 0613:3435
cs=0x613;eip=0x003437; 	T(ADD(al, *(db*)(((db*)&framespersec))));	// 14234 add     al, byte ptr framespersec ;~ 0613:3437
cs=0x613;eip=0x00343b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14235 mov     bx, [bp+arg_4] ;~ 0613:343B
cs=0x613;eip=0x00343e; 	X(MOV(*(raddr(ds,bx+0x0CB)), al));	// 14236 mov     [bx+0CBh], al ;~ 0613:343E
cs=0x613;eip=0x003442; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14237 mov     bx, [bp+arg_4] ;~ 0613:3442
cs=0x613;eip=0x003445; 	T(MOV(al, *(raddr(ds,bx+0x0BE))));	// 14238 mov     al, [bx+0BEh] ;~ 0613:3445
cs=0x613;eip=0x003449; 	T(CBW);	// 14239 cbw ;~ 0613:3449
cs=0x613;eip=0x00344a; 	T(MOV(si, ax));	// 14240 mov     si, ax ;~ 0613:344A
cs=0x613;eip=0x00344c; 	T(SHL(si, 1));	// 14241 shl     si, 1 ;~ 0613:344C
cs=0x613;eip=0x00344e; 	T(SHL(si, 1));	// 14242 shl     si, 1 ;~ 0613:344E
cs=0x613;eip=0x003450; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14243 mov     bx, [bp+arg_6] ;~ 0613:3450
cs=0x613;eip=0x003453; 	T(MOV(ax, *(dw*)(raddr(ds,bx+si+0x1C))));	// 14244 mov     ax, [bx+si+1Ch] ;~ 0613:3453
cs=0x613;eip=0x003456; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14245 mov     bx, [bp+arg_4] ;~ 0613:3456
cs=0x613;eip=0x003459; 	X(MOV(*(dw*)(raddr(ds,bx+0x3A)), ax));	// 14246 mov     [bx+3Ah], ax ;~ 0613:3459
cs=0x613;eip=0x00345c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14247 mov     bx, [bp+arg_4] ;~ 0613:345C
cs=0x613;eip=0x00345f; 	T(MOV(al, *(raddr(ds,bx+0x0BE))));	// 14248 mov     al, [bx+0BEh] ;~ 0613:345F
cs=0x613;eip=0x003463; 	T(CBW);	// 14249 cbw ;~ 0613:3463
cs=0x613;eip=0x003464; 	T(MOV(si, ax));	// 14250 mov     si, ax ;~ 0613:3464
cs=0x613;eip=0x003466; 	T(SHL(si, 1));	// 14251 shl     si, 1 ;~ 0613:3466
cs=0x613;eip=0x003468; 	T(SHL(si, 1));	// 14252 shl     si, 1 ;~ 0613:3468
cs=0x613;eip=0x00346a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14253 mov     bx, [bp+arg_6] ;~ 0613:346A
cs=0x613;eip=0x00346d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+si+0x1E))));	// 14254 mov     ax, [bx+si+1Eh] ;~ 0613:346D
cs=0x613;eip=0x003470; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14255 mov     bx, [bp+arg_4] ;~ 0613:3470
cs=0x613;eip=0x003473; 	X(MOV(*(dw*)(raddr(ds,bx+0x3C)), ax));	// 14256 mov     [bx+3Ch], ax ;~ 0613:3473
loc_17b86:
	// 5175 
cs=0x613;eip=0x003476; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14260 mov     bx, [bp+arg_4] ;~ 0613:3476
cs=0x613;eip=0x003479; 	T(CMP(*(raddr(ds,bx+0x0CA)), 0));	// 14261 cmp     byte ptr [bx+0CAh], 0 ;~ 0613:3479
cs=0x613;eip=0x00347e; 	J(JNZ(loc_17b93));	// 14262 jnz     short loc_17B93 ;~ 0613:347E
cs=0x613;eip=0x003480; 	J(JMP(loc_17c9e));	// 14263 jmp     loc_17C9E ;~ 0613:3480
loc_17b93:
	// 5176 
cs=0x613;eip=0x003483; 	T(MOV(si, bx));	// 14267 mov     si, bx ;~ 0613:3483
cs=0x613;eip=0x003485; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x3A))));	// 14268 mov     ax, [si+3Ah] ;~ 0613:3485
cs=0x613;eip=0x003488; 	T(CMP(*(dw*)(raddr(ds,bx+0x34)), ax));	// 14269 cmp     [bx+34h], ax ;~ 0613:3488
cs=0x613;eip=0x00348b; 	J(JNZ(loc_17c0c));	// 14270 jnz     short loc_17C0C ;~ 0613:348B
cs=0x613;eip=0x00348d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x3C))));	// 14271 mov     ax, [bx+3Ch] ;~ 0613:348D
cs=0x613;eip=0x003490; 	T(SUB(ax, *(dw*)(raddr(ds,bx+0x38))));	// 14272 sub     ax, [bx+38h] ;~ 0613:3490
cs=0x613;eip=0x003493; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 14273 mov     word ptr [bp+var_4], ax ;~ 0613:3493
cs=0x613;eip=0x003496; 	T(OR(ax, ax));	// 14274 or      ax, ax ;~ 0613:3496
cs=0x613;eip=0x003498; 	J(JNZ(loc_17bda));	// 14275 jnz     short loc_17BDA ;~ 0613:3498
cs=0x613;eip=0x00349a; 	X(MOV(*(raddr(ds,bx+0x0CA)), 0));	// 14276 mov     byte ptr [bx+0CAh], 0 ;~ 0613:349A
cs=0x613;eip=0x00349f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14277 mov     bx, [bp+arg_4] ;~ 0613:349F
cs=0x613;eip=0x0034a2; 	T(MOV(al, *(raddr(ds,bx+0x0BE))));	// 14278 mov     al, [bx+0BEh] ;~ 0613:34A2
cs=0x613;eip=0x0034a6; 	T(CBW);	// 14279 cbw ;~ 0613:34A6
cs=0x613;eip=0x0034a7; 	T(MOV(si, ax));	// 14280 mov     si, ax ;~ 0613:34A7
cs=0x613;eip=0x0034a9; 	T(SHL(si, 1));	// 14281 shl     si, 1 ;~ 0613:34A9
cs=0x613;eip=0x0034ab; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14282 mov     bx, [bp+arg_6] ;~ 0613:34AB
cs=0x613;eip=0x0034ae; 	T(MOV(ax, *(dw*)(raddr(ds,bx+si+0x0E))));	// 14283 mov     ax, [bx+si+0Eh] ;~ 0613:34AE
cs=0x613;eip=0x0034b1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14284 mov     bx, [bp+arg_4] ;~ 0613:34B1
cs=0x613;eip=0x0034b4; 	X(MOV(*(dw*)(raddr(ds,bx+0x30)), ax));	// 14285 mov     [bx+30h], ax ;~ 0613:34B4
cs=0x613;eip=0x0034b7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14286 mov     bx, [bp+arg_4] ;~ 0613:34B7
cs=0x613;eip=0x0034ba; 	T(MOV(si, bx));	// 14287 mov     si, bx ;~ 0613:34BA
cs=0x613;eip=0x0034bc; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x30))));	// 14288 mov     ax, [si+30h] ;~ 0613:34BC
cs=0x613;eip=0x0034bf; 	T(MOV(cl, 8));	// 14289 mov     cl, 8 ;~ 0613:34BF
cs=0x613;eip=0x0034c1; 	T(SHR(ax, cl));	// 14290 shr     ax, cl ;~ 0613:34C1
cs=0x613;eip=0x0034c3; 	X(MOV(*(dw*)(raddr(ds,bx+0x32)), ax));	// 14291 mov     [bx+32h], ax ;~ 0613:34C3
cs=0x613;eip=0x0034c6; 	J(JMP(loc_17cac));	// 14292 jmp     loc_17CAC ;~ 0613:34C6
loc_17bda:
	// 5177 
cs=0x613;eip=0x0034ca; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 14297 push    word ptr [bp+var_4] ; int ;~ 0613:34CA
cs=0x613;eip=0x0034cd; 	J(CALLF(_abs,0));	// 14298 call    _abs ;~ 0613:34CD
cs=0x613;eip=0x0034d2; 	T(ADD(sp, 2));	// 14299 add     sp, 2 ;~ 0613:34D2
cs=0x613;eip=0x0034d5; 	T(CMP(ax, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 14300 cmp     ax, word ptr [bp+var_4+2] ;~ 0613:34D5
cs=0x613;eip=0x0034d8; 	J(JG(loc_17bf6));	// 14301 jg      short loc_17BF6 ;~ 0613:34D8
cs=0x613;eip=0x0034da; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14302 mov     bx, [bp+arg_4] ;~ 0613:34DA
cs=0x613;eip=0x0034dd; 	T(MOV(si, bx));	// 14303 mov     si, bx ;~ 0613:34DD
cs=0x613;eip=0x0034df; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x3C))));	// 14304 mov     ax, [si+3Ch] ;~ 0613:34DF
cs=0x613;eip=0x0034e2; 	J(JMP(loc_17c84));	// 14305 jmp     loc_17C84 ;~ 0613:34E2
loc_17bf6:
	// 5178 
cs=0x613;eip=0x0034e6; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_4))), 0));	// 14310 cmp     word ptr [bp+var_4], 0 ;~ 0613:34E6
cs=0x613;eip=0x0034ea; 	J(JLE(loc_17bff));	// 14311 jle     short loc_17BFF ;~ 0613:34EA
cs=0x613;eip=0x0034ec; 	J(JMP(loc_17c93));	// 14312 jmp     loc_17C93 ;~ 0613:34EC
loc_17bff:
	// 5179 
cs=0x613;eip=0x0034ef; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14317 mov     bx, [bp+arg_4] ;~ 0613:34EF
cs=0x613;eip=0x0034f2; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 14318 mov     ax, word ptr [bp+var_4+2] ;~ 0613:34F2
cs=0x613;eip=0x0034f5; 	X(SUB(*(dw*)(raddr(ds,bx+0x38)), ax));	// 14319 sub     [bx+38h], ax ;~ 0613:34F5
cs=0x613;eip=0x0034f8; 	J(JMP(loc_17cac));	// 14320 jmp     loc_17CAC ;~ 0613:34F8
loc_17c0c:
	// 5180 
cs=0x613;eip=0x0034fc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14325 mov     bx, [bp+arg_6] ;~ 0613:34FC
cs=0x613;eip=0x0034ff; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 14326 mov     si, [bp+arg_4] ;~ 0613:34FF
cs=0x613;eip=0x003502; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x38))));	// 14327 mov     ax, [si+38h] ;~ 0613:3502
cs=0x613;eip=0x003505; 	T(CMP(*(dw*)(raddr(ds,bx+0x1E)), ax));	// 14328 cmp     [bx+1Eh], ax ;~ 0613:3505
cs=0x613;eip=0x003508; 	J(JNZ(loc_17c5e));	// 14329 jnz     short loc_17C5E ;~ 0613:3508
cs=0x613;eip=0x00350a; 	T(MOV(bx, si));	// 14330 mov     bx, si ;~ 0613:350A
cs=0x613;eip=0x00350c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x3A))));	// 14331 mov     ax, [bx+3Ah] ;~ 0613:350C
cs=0x613;eip=0x00350f; 	T(SUB(ax, *(dw*)(raddr(ds,bx+0x34))));	// 14332 sub     ax, [bx+34h] ;~ 0613:350F
cs=0x613;eip=0x003512; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 14333 mov     word ptr [bp+var_4], ax ;~ 0613:3512
cs=0x613;eip=0x003515; 	X(PUSH(ax));	// 14334 push    ax              ; int ;~ 0613:3515
cs=0x613;eip=0x003516; 	J(CALLF(_abs,0));	// 14335 call    _abs ;~ 0613:3516
cs=0x613;eip=0x00351b; 	T(ADD(sp, 2));	// 14336 add     sp, 2 ;~ 0613:351B
cs=0x613;eip=0x00351e; 	T(CMP(ax, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 14337 cmp     ax, word ptr [bp+var_4+2] ;~ 0613:351E
cs=0x613;eip=0x003521; 	J(JG(loc_17c40));	// 14338 jg      short loc_17C40 ;~ 0613:3521
cs=0x613;eip=0x003523; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14339 mov     bx, [bp+arg_4] ;~ 0613:3523
cs=0x613;eip=0x003526; 	T(MOV(si, bx));	// 14340 mov     si, bx ;~ 0613:3526
cs=0x613;eip=0x003528; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x3A))));	// 14341 mov     ax, [si+3Ah] ;~ 0613:3528
cs=0x613;eip=0x00352b; 	X(MOV(*(dw*)(raddr(ds,bx+0x34)), ax));	// 14342 mov     [bx+34h], ax ;~ 0613:352B
cs=0x613;eip=0x00352e; 	J(JMP(loc_17cac));	// 14343 jmp     short loc_17CAC ;~ 0613:352E
loc_17c40:
	// 5181 
cs=0x613;eip=0x003530; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_4))), 0));	// 14347 cmp     word ptr [bp+var_4], 0 ;~ 0613:3530
cs=0x613;eip=0x003534; 	J(JLE(loc_17c52));	// 14348 jle     short loc_17C52 ;~ 0613:3534
cs=0x613;eip=0x003536; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14349 mov     bx, [bp+arg_4] ;~ 0613:3536
cs=0x613;eip=0x003539; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 14350 mov     ax, word ptr [bp+var_4+2] ;~ 0613:3539
cs=0x613;eip=0x00353c; 	X(ADD(*(dw*)(raddr(ds,bx+0x34)), ax));	// 14351 add     [bx+34h], ax ;~ 0613:353C
cs=0x613;eip=0x00353f; 	J(JMP(loc_17cac));	// 14352 jmp     short loc_17CAC ;~ 0613:353F
loc_17c52:
	// 5182 
cs=0x613;eip=0x003542; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14357 mov     bx, [bp+arg_4] ;~ 0613:3542
cs=0x613;eip=0x003545; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 14358 mov     ax, word ptr [bp+var_4+2] ;~ 0613:3545
cs=0x613;eip=0x003548; 	X(SUB(*(dw*)(raddr(ds,bx+0x34)), ax));	// 14359 sub     [bx+34h], ax ;~ 0613:3548
cs=0x613;eip=0x00354b; 	J(JMP(loc_17cac));	// 14360 jmp     short loc_17CAC ;~ 0613:354B
loc_17c5e:
	// 5183 
cs=0x613;eip=0x00354e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14365 mov     bx, [bp+arg_6] ;~ 0613:354E
cs=0x613;eip=0x003551; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1E))));	// 14366 mov     ax, [bx+1Eh] ;~ 0613:3551
cs=0x613;eip=0x003554; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14367 mov     bx, [bp+arg_4] ;~ 0613:3554
cs=0x613;eip=0x003557; 	T(SUB(ax, *(dw*)(raddr(ds,bx+0x38))));	// 14368 sub     ax, [bx+38h] ;~ 0613:3557
cs=0x613;eip=0x00355a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 14369 mov     word ptr [bp+var_4], ax ;~ 0613:355A
cs=0x613;eip=0x00355d; 	X(PUSH(ax));	// 14370 push    ax              ; int ;~ 0613:355D
cs=0x613;eip=0x00355e; 	J(CALLF(_abs,0));	// 14371 call    _abs ;~ 0613:355E
cs=0x613;eip=0x003563; 	T(ADD(sp, 2));	// 14372 add     sp, 2 ;~ 0613:3563
cs=0x613;eip=0x003566; 	T(CMP(ax, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 14373 cmp     ax, word ptr [bp+var_4+2] ;~ 0613:3566
cs=0x613;eip=0x003569; 	J(JG(loc_17c8a));	// 14374 jg      short loc_17C8A ;~ 0613:3569
cs=0x613;eip=0x00356b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14375 mov     bx, [bp+arg_4] ;~ 0613:356B
cs=0x613;eip=0x00356e; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_6))));	// 14376 mov     si, [bp+arg_6] ;~ 0613:356E
cs=0x613;eip=0x003571; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x1E))));	// 14377 mov     ax, [si+1Eh] ;~ 0613:3571
loc_17c84:
	// 5184 
cs=0x613;eip=0x003574; 	X(MOV(*(dw*)(raddr(ds,bx+0x38)), ax));	// 14380 mov     [bx+38h], ax ;~ 0613:3574
cs=0x613;eip=0x003577; 	J(JMP(loc_17cac));	// 14381 jmp     short loc_17CAC ;~ 0613:3577
loc_17c8a:
	// 5185 
cs=0x613;eip=0x00357a; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_4))), 0));	// 14386 cmp     word ptr [bp+var_4], 0 ;~ 0613:357A
cs=0x613;eip=0x00357e; 	J(JG(loc_17c93));	// 14387 jg      short loc_17C93 ;~ 0613:357E
cs=0x613;eip=0x003580; 	J(JMP(loc_17bff));	// 14388 jmp     loc_17BFF ;~ 0613:3580
loc_17c93:
	// 5186 
cs=0x613;eip=0x003583; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14393 mov     bx, [bp+arg_4] ;~ 0613:3583
cs=0x613;eip=0x003586; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 14394 mov     ax, word ptr [bp+var_4+2] ;~ 0613:3586
cs=0x613;eip=0x003589; 	X(ADD(*(dw*)(raddr(ds,bx+0x38)), ax));	// 14395 add     [bx+38h], ax ;~ 0613:3589
cs=0x613;eip=0x00358c; 	J(JMP(loc_17cac));	// 14396 jmp     short loc_17CAC ;~ 0613:358C
loc_17c9e:
	// 5187 
cs=0x613;eip=0x00358e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14400 mov     bx, [bp+arg_4] ;~ 0613:358E
cs=0x613;eip=0x003591; 	T(CMP(*(raddr(ds,bx+0x0CB)), 0));	// 14401 cmp     byte ptr [bx+0CBh], 0 ;~ 0613:3591
cs=0x613;eip=0x003596; 	J(JZ(loc_17cac));	// 14402 jz      short loc_17CAC ;~ 0613:3596
cs=0x613;eip=0x003598; 	X(DEC(*(raddr(ds,bx+0x0CB))));	// 14403 dec     byte ptr [bx+0CBh] ;~ 0613:3598
loc_17cac:
	// 5188 
cs=0x613;eip=0x00359c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14407 mov     bx, [bp+arg_4] ;~ 0613:359C
cs=0x613;eip=0x00359f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x2A))));	// 14408 mov     ax, [bx+2Ah] ;~ 0613:359F
cs=0x613;eip=0x0035a2; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 14409 mov     [bp+var_6], ax ;~ 0613:35A2
cs=0x613;eip=0x0035a5; 	T(MOV(si, ax));	// 14410 mov     si, ax ;~ 0613:35A5
cs=0x613;eip=0x0035a7; 	T(MOV(cl, 0x0A));	// 14411 mov     cl, 0Ah ;~ 0613:35A7
cs=0x613;eip=0x0035a9; 	T(SHR(si, cl));	// 14412 shr     si, cl ;~ 0613:35A9
cs=0x613;eip=0x0035ab; 	T(SHL(si, 1));	// 14413 shl     si, 1           ; this is NOT part of the calculations *LOL* ;~ 0613:35AB
cs=0x613;eip=0x0035ad; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14414 mov     bx, [bp+arg_6] ;~ 0613:35AD
cs=0x613;eip=0x0035b0; 	T(LES(bx, *(dw*)(raddr(ds,bx+0x304))));	// 14415 les     bx, [bx+304h] ;~ 0613:35B0
cs=0x613;eip=0x0035b4; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 14416 mov     di, [bp+arg_4] ;~ 0613:35B4
cs=0x613;eip=0x0035b7; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x1E))));	// 14417 mov     ax, [di+1Eh] ;~ 0613:35B7
cs=0x613;eip=0x0035ba; 	T(SUB(ax, *(dw*)(raddr(es,bx+si))));	// 14418 sub     ax, es:[bx+si] ;~ 0613:35BA
cs=0x613;eip=0x0035bd; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 14419 mov     [bp+var_8], ax ;~ 0613:35BD
cs=0x613;eip=0x0035c0; 	T(MOV(bx, di));	// 14420 mov     bx, di ;~ 0613:35C0
cs=0x613;eip=0x0035c2; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_6))));	// 14421 mov     si, [bp+arg_6] ;~ 0613:35C2
cs=0x613;eip=0x0035c5; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x0C))));	// 14422 mov     ax, [si+0Ch] ;~ 0613:35C5
cs=0x613;eip=0x0035c8; 	T(CMP(*(dw*)(raddr(ds,bx+0x22)), ax));	// 14423 cmp     [bx+22h], ax ;~ 0613:35C8
cs=0x613;eip=0x0035cb; 	J(JBE(loc_17cea));	// 14424 jbe     short loc_17CEA ;~ 0613:35CB
cs=0x613;eip=0x0035cd; 	T(DEC(ax));	// 14425 dec     ax ;~ 0613:35CD
cs=0x613;eip=0x0035ce; 	X(MOV(*(dw*)(raddr(ds,bx+0x22)), ax));	// 14426 mov     [bx+22h], ax ;~ 0613:35CE
loc_17ce1:
	// 5189 
cs=0x613;eip=0x0035d1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14429 mov     bx, [bp+arg_6] ;~ 0613:35D1
cs=0x613;eip=0x0035d4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 14430 mov     ax, [bx+4] ;~ 0613:35D4
cs=0x613;eip=0x0035d7; 	J(JMP(loc_17d36));	// 14431 jmp     short loc_17D36 ;~ 0613:35D7
loc_17cea:
	// 5190 
cs=0x613;eip=0x0035da; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 14436 mov     al, [bp+arg_0] ;~ 0613:35DA
cs=0x613;eip=0x0035dd; 	T(AND(ax, 3));	// 14437 and     ax, 3 ;~ 0613:35DD
cs=0x613;eip=0x0035e0; 	T(CMP(ax, 1));	// 14438 cmp     ax, 1 ;~ 0613:35E0
cs=0x613;eip=0x0035e3; 	J(JNZ(loc_17cf8));	// 14439 jnz     short loc_17CF8 ;~ 0613:35E3
cs=0x613;eip=0x0035e5; 	J(JMP(loc_17d82));	// 14440 jmp     loc_17D82 ;~ 0613:35E5
loc_17cf8:
	// 5191 
cs=0x613;eip=0x0035e8; 	T(CMP(ax, 2));	// 14444 cmp     ax, 2 ;~ 0613:35E8
cs=0x613;eip=0x0035eb; 	J(JZ(loc_17d10));	// 14445 jz      short loc_17D10 ;~ 0613:35EB
cs=0x613;eip=0x0035ed; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14446 mov     bx, [bp+arg_4] ;~ 0613:35ED
cs=0x613;eip=0x0035f0; 	X(MOV(*(raddr(ds,bx+0x0BD)), 0));	// 14447 mov     byte ptr [bx+0BDh], 0 ;~ 0613:35F0
cs=0x613;eip=0x0035f5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14448 mov     bx, [bp+arg_4] ;~ 0613:35F5
cs=0x613;eip=0x0035f8; 	X(MOV(*(raddr(ds,bx+0x0BC)), 0));	// 14449 mov     byte ptr [bx+0BCh], 0 ;~ 0613:35F8
cs=0x613;eip=0x0035fd; 	J(JMP(loc_17d39));	// 14450 jmp     short loc_17D39 ;~ 0613:35FD
loc_17d10:
	// 5192 
cs=0x613;eip=0x003600; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14455 mov     bx, [bp+arg_4] ;~ 0613:3600
cs=0x613;eip=0x003603; 	X(MOV(*(raddr(ds,bx+0x0BD)), 0));	// 14456 mov     byte ptr [bx+0BDh], 0 ;~ 0613:3603
cs=0x613;eip=0x003608; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14457 mov     bx, [bp+arg_4] ;~ 0613:3608
cs=0x613;eip=0x00360b; 	X(MOV(*(raddr(ds,bx+0x0C6)), 0));	// 14458 mov     byte ptr [bx+0C6h], 0 ;~ 0613:360B
cs=0x613;eip=0x003610; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14459 mov     bx, [bp+arg_4] ;~ 0613:3610
cs=0x613;eip=0x003613; 	X(MOV(*(raddr(ds,bx+0x0BC)), 1));	// 14460 mov     byte ptr [bx+0BCh], 1 ;~ 0613:3613
cs=0x613;eip=0x003618; 	T(CMP(*(raddr(ss,bp+arg_2)), 0));	// 14461 cmp     [bp+arg_2], 0 ;~ 0613:3618
cs=0x613;eip=0x00361c; 	J(JZ(loc_17ce1));	// 14462 jz      short loc_17CE1 ;~ 0613:361C
cs=0x613;eip=0x00361e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14463 mov     bx, [bp+arg_6] ;~ 0613:361E
cs=0x613;eip=0x003621; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 14464 mov     ax, [bx+4] ;~ 0613:3621
cs=0x613;eip=0x003624; 	T(SHL(ax, 1));	// 14465 shl     ax, 1 ;~ 0613:3624
loc_17d36:
	// 5193 
cs=0x613;eip=0x003626; 	X(SUB(*(dw*)(raddr(ss,bp+var_8)), ax));	// 14468 sub     [bp+var_8], ax ;~ 0613:3626
loc_17d39:
	// 5194 
cs=0x613;eip=0x003629; 	T(CMP(framespersec, 0x0A));	// 14472 cmp     framespersec, 0Ah ;~ 0613:3629
cs=0x613;eip=0x00362e; 	J(JNZ(loc_17d46));	// 14473 jnz     short loc_17D46 ;~ 0613:362E
cs=0x613;eip=0x003630; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 14474 mov     ax, [bp+var_8] ;~ 0613:3630
cs=0x613;eip=0x003633; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), ax));	// 14475 add     [bp+var_8], ax ;~ 0613:3633
loc_17d46:
	// 5195 
cs=0x613;eip=0x003636; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 14478 cmp     [bp+var_8], 0 ;~ 0613:3636
cs=0x613;eip=0x00363a; 	J(JGE(loc_17d4f));	// 14479 jge     short loc_17D4F ;~ 0613:363A
cs=0x613;eip=0x00363c; 	J(JMP(loc_17ee2));	// 14480 jmp     loc_17EE2 ;~ 0613:363C
loc_17d4f:
	// 5196 
cs=0x613;eip=0x00363f; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0x8000));	// 14484 cmp     [bp+var_6], 8000h ;~ 0613:363F
cs=0x613;eip=0x003644; 	J(JC(loc_17d59));	// 14485 jb      short loc_17D59 ;~ 0613:3644
cs=0x613;eip=0x003646; 	J(JMP(loc_17ec2));	// 14486 jmp     loc_17EC2 ;~ 0613:3646
loc_17d59:
	// 5197 
cs=0x613;eip=0x003649; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 14491 mov     ax, [bp+var_8] ;~ 0613:3649
cs=0x613;eip=0x00364c; 	X(ADD(*(dw*)(raddr(ss,bp+var_6)), ax));	// 14492 add     [bp+var_6], ax ;~ 0613:364C
loc_17d5f:
	// 5198 
cs=0x613;eip=0x00364f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14496 mov     bx, [bp+arg_4] ;~ 0613:364F
cs=0x613;eip=0x003652; 	T(CMP(*(raddr(ds,bx+0x0C0)), 0));	// 14497 cmp     byte ptr [bx+0C0h], 0 ;~ 0613:3652
cs=0x613;eip=0x003657; 	J(JNZ(loc_17d6c));	// 14498 jnz     short loc_17D6C ;~ 0613:3657
cs=0x613;eip=0x003659; 	J(JMP(loc_17f3c));	// 14499 jmp     loc_17F3C ;~ 0613:3659
loc_17d6c:
	// 5199 
cs=0x613;eip=0x00365c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x2C))));	// 14503 mov     ax, [bx+2Ch] ;~ 0613:365C
cs=0x613;eip=0x00365f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_6))));	// 14504 sub     ax, [bp+var_6] ;~ 0613:365F
cs=0x613;eip=0x003662; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 14505 mov     word ptr [bp+var_4], ax ;~ 0613:3662
cs=0x613;eip=0x003665; 	T(OR(ax, ax));	// 14506 or      ax, ax ;~ 0613:3665
cs=0x613;eip=0x003667; 	J(JL(loc_17d7c));	// 14507 jl      short loc_17D7C ;~ 0613:3667
cs=0x613;eip=0x003669; 	J(JMP(loc_17ef8));	// 14508 jmp     loc_17EF8 ;~ 0613:3669
loc_17d7c:
	// 5200 
cs=0x613;eip=0x00366c; 	T(NEG(ax));	// 14512 neg     ax ;~ 0613:366C
cs=0x613;eip=0x00366e; 	J(JMP(loc_17efb));	// 14513 jmp     loc_17EFB ;~ 0613:366E
loc_17d82:
	// 5201 
cs=0x613;eip=0x003672; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14518 mov     bx, [bp+arg_4] ;~ 0613:3672
cs=0x613;eip=0x003675; 	X(MOV(*(raddr(ds,bx+0x0BC)), 0));	// 14519 mov     byte ptr [bx+0BCh], 0 ;~ 0613:3675
cs=0x613;eip=0x00367a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14520 mov     bx, [bp+arg_4] ;~ 0613:367A
cs=0x613;eip=0x00367d; 	X(MOV(*(raddr(ds,bx+0x0BD)), 1));	// 14521 mov     byte ptr [bx+0BDh], 1 ;~ 0613:367D
cs=0x613;eip=0x003682; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14522 mov     bx, [bp+arg_4] ;~ 0613:3682
cs=0x613;eip=0x003685; 	T(CMP(*(raddr(ds,bx+0x0CA)), 0));	// 14523 cmp     byte ptr [bx+0CAh], 0 ;~ 0613:3685
cs=0x613;eip=0x00368a; 	J(JZ(loc_17dbc));	// 14524 jz      short loc_17DBC ;~ 0613:368A
cs=0x613;eip=0x00368c; 	X(MOV(*(raddr(ds,bx+0x0C6)), 0));	// 14525 mov     byte ptr [bx+0C6h], 0 ;~ 0613:368C
cs=0x613;eip=0x003691; 	T(CMP(framespersec, 0x0A));	// 14526 cmp     framespersec, 0Ah ;~ 0613:3691
cs=0x613;eip=0x003696; 	J(JNZ(loc_17db2));	// 14527 jnz     short loc_17DB2 ;~ 0613:3696
cs=0x613;eip=0x003698; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14528 mov     bx, [bp+arg_4] ;~ 0613:3698
cs=0x613;eip=0x00369b; 	X(SUB(*(dw*)(raddr(ds,bx+0x22)), 0x50));	// 14529 sub     word ptr [bx+22h], 50h ; 'P' ;~ 0613:369B
cs=0x613;eip=0x00369f; 	J(JMP(loc_17d39));	// 14530 jmp     short loc_17D39 ;~ 0613:369F
loc_17db2:
	// 5202 
cs=0x613;eip=0x0036a2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14535 mov     bx, [bp+arg_4] ;~ 0613:36A2
cs=0x613;eip=0x0036a5; 	X(SUB(*(dw*)(raddr(ds,bx+0x22)), 0x28));	// 14536 sub     word ptr [bx+22h], 28h ; '(' ;~ 0613:36A5
cs=0x613;eip=0x0036a9; 	J(JMP(loc_17d39));	// 14537 jmp     loc_17D39 ;~ 0613:36A9
loc_17dbc:
	// 5203 
cs=0x613;eip=0x0036ac; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14541 mov     bx, [bp+arg_4] ;~ 0613:36AC
cs=0x613;eip=0x0036af; 	T(CMP(*(raddr(ds,bx+0x0C0)), 0));	// 14542 cmp     byte ptr [bx+0C0h], 0 ;~ 0613:36AF
cs=0x613;eip=0x0036b4; 	J(JNZ(loc_17de6));	// 14543 jnz     short loc_17DE6 ;~ 0613:36B4
cs=0x613;eip=0x0036b6; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_6))));	// 14544 mov     si, [bp+arg_6] ;~ 0613:36B6
cs=0x613;eip=0x0036b9; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x0C))));	// 14545 mov     ax, [si+0Ch] ;~ 0613:36B9
cs=0x613;eip=0x0036bc; 	T(CMP(*(dw*)(raddr(ds,bx+0x22)), ax));	// 14546 cmp     [bx+22h], ax ;~ 0613:36BC
cs=0x613;eip=0x0036bf; 	J(JC(loc_17dd4));	// 14547 jb      short loc_17DD4 ;~ 0613:36BF
cs=0x613;eip=0x0036c1; 	J(JMP(loc_17d39));	// 14548 jmp     loc_17D39 ;~ 0613:36C1
loc_17dd4:
	// 5204 
cs=0x613;eip=0x0036c4; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0x0FA00));	// 14552 cmp     [bp+var_6], 0FA00h ;~ 0613:36C4
cs=0x613;eip=0x0036c9; 	J(JC(loc_17dde));	// 14553 jb      short loc_17DDE ;~ 0613:36C9
cs=0x613;eip=0x0036cb; 	J(JMP(loc_17d39));	// 14554 jmp     loc_17D39 ;~ 0613:36CB
loc_17dde:
	// 5205 
cs=0x613;eip=0x0036ce; 	X(ADD(*(db*)(raddr(ss,bp+var_8+1)), 3));	// 14558 add     byte ptr [bp+var_8+1], 3 ;~ 0613:36CE
cs=0x613;eip=0x0036d2; 	J(JMP(loc_17d39));	// 14559 jmp     loc_17D39 ;~ 0613:36D2
loc_17de6:
	// 5206 
cs=0x613;eip=0x0036d6; 	T(CMP(*(raddr(ds,bx+0x0BE)), 1));	// 14564 cmp     byte ptr [bx+0BEh], 1 ;~ 0613:36D6
cs=0x613;eip=0x0036db; 	J(JG(loc_17dfc));	// 14565 jg      short loc_17DFC ;~ 0613:36DB
cs=0x613;eip=0x0036dd; 	T(CMP(*(dw*)(raddr(ds,bx+0x22)), 0x0A28));	// 14566 cmp     word ptr [bx+22h], 0A28h ;~ 0613:36DD
cs=0x613;eip=0x0036e2; 	J(JGE(loc_17dfc));	// 14567 jge     short loc_17DFC ;~ 0613:36E2
cs=0x613;eip=0x0036e4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14568 mov     bx, [bp+arg_6] ;~ 0613:36E4
cs=0x613;eip=0x0036e7; 	T(MOV(al, *(raddr(ds,bx+0x3A))));	// 14569 mov     al, [bx+3Ah] ;~ 0613:36E7
cs=0x613;eip=0x0036ea; 	J(JMP(loc_17e0c));	// 14570 jmp     short loc_17E0C ;~ 0613:36EA
loc_17dfc:
	// 5207 
cs=0x613;eip=0x0036ec; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14575 mov     bx, [bp+arg_4] ;~ 0613:36EC
cs=0x613;eip=0x0036ef; 	T(MOV(si, *(dw*)(raddr(ds,bx+0x22))));	// 14576 mov     si, [bx+22h] ;~ 0613:36EF
cs=0x613;eip=0x0036f2; 	T(MOV(cl, 7));	// 14577 mov     cl, 7 ;~ 0613:36F2
cs=0x613;eip=0x0036f4; 	T(SHR(si, cl));	// 14578 shr     si, cl          ; divide rpm by 2^7 to find offset. ;~ 0613:36F4
cs=0x613;eip=0x0036f6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14579 mov     bx, [bp+arg_6] ;~ 0613:36F6
cs=0x613;eip=0x0036f9; 	T(MOV(al, *(raddr(ds,bx+si+0x3B))));	// 14580 mov     al, [bx+si+3Bh] ;~ 0613:36F9
loc_17e0c:
	// 5208 
cs=0x613;eip=0x0036fc; 	X(MOV(*(raddr(ss,bp+var_a)), al));	// 14583 mov     [bp+var_A], al ;~ 0613:36FC
cs=0x613;eip=0x0036ff; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14584 mov     bx, [bp+arg_4] ;~ 0613:36FF
cs=0x613;eip=0x003702; 	T(CMP(*(raddr(ds,bx+0x0C6)), 0));	// 14585 cmp     byte ptr [bx+0C6h], 0 ;~ 0613:3702
cs=0x613;eip=0x003707; 	J(JZ(loc_17e34));	// 14586 jz      short loc_17E34 ;~ 0613:3707
cs=0x613;eip=0x003709; 	T(CMP(*(dw*)(raddr(ds,bx+0x22)), 0x1388));	// 14587 cmp     word ptr [bx+22h], 1388h ;~ 0613:3709
cs=0x613;eip=0x00370e; 	J(JGE(loc_17e34));	// 14588 jge     short loc_17E34 ;~ 0613:370E
cs=0x613;eip=0x003710; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14589 mov     bx, [bp+arg_6] ;~ 0613:3710
cs=0x613;eip=0x003713; 	T(MOV(al, *(raddr(ds,bx+0x3A))));	// 14590 mov     al, [bx+3Ah] ;~ 0613:3713
cs=0x613;eip=0x003716; 	T(SUB(ah, ah));	// 14591 sub     ah, ah ;~ 0613:3716
cs=0x613;eip=0x003718; 	T(MOV(cl, *(raddr(ss,bp+var_a))));	// 14592 mov     cl, [bp+var_A] ;~ 0613:3718
cs=0x613;eip=0x00371b; 	T(SUB(ch, ch));	// 14593 sub     ch, ch ;~ 0613:371B
cs=0x613;eip=0x00371d; 	T(ADD(ax, cx));	// 14594 add     ax, cx ;~ 0613:371D
cs=0x613;eip=0x00371f; 	T(SHR(ax, 1));	// 14595 shr     ax, 1 ;~ 0613:371F
cs=0x613;eip=0x003721; 	X(MOV(*(raddr(ss,bp+var_a)), al));	// 14596 mov     [bp+var_A], al ;~ 0613:3721
loc_17e34:
	// 5209 
cs=0x613;eip=0x003724; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 14600 mov     al, [bp+var_A] ;~ 0613:3724
cs=0x613;eip=0x003727; 	T(SUB(ah, ah));	// 14601 sub     ah, ah ;~ 0613:3727
cs=0x613;eip=0x003729; 	T(MOV(cx, ax));	// 14602 mov     cx, ax ;~ 0613:3729
cs=0x613;eip=0x00372b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14603 mov     bx, [bp+arg_4] ;~ 0613:372B
cs=0x613;eip=0x00372e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x32))));	// 14604 mov     ax, [bx+32h] ;~ 0613:372E
cs=0x613;eip=0x003731; 	T(MUL1_2(cx));	// 14605 mul     cx ;~ 0613:3731
cs=0x613;eip=0x003733; 	T(MOV(cl, 4));	// 14606 mov     cl, 4 ;~ 0613:3733
cs=0x613;eip=0x003735; 	T(SHR(ax, cl));	// 14607 shr     ax, cl          ; torque * ratio / 4096 ;~ 0613:3735
cs=0x613;eip=0x003737; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), ax));	// 14608 add     [bp+var_8], ax ;~ 0613:3737
cs=0x613;eip=0x00373a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14609 mov     bx, [bp+arg_6] ;~ 0613:373A
cs=0x613;eip=0x00373d; 	T(SUB(ax, ax));	// 14610 sub     ax, ax ;~ 0613:373D
cs=0x613;eip=0x00373f; 	X(PUSH(ax));	// 14611 push    ax ;~ 0613:373F
cs=0x613;eip=0x003740; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 14612 push    word ptr [bx+2] ; push cwd(MASS) ;~ 0613:3740
cs=0x613;eip=0x003743; 	T(MOV(ax, 0x19));	// 14613 mov     ax, 19h ;~ 0613:3743
cs=0x613;eip=0x003746; 	T(CWD);	// 14614 cwd ;~ 0613:3746
cs=0x613;eip=0x003747; 	X(PUSH(dx));	// 14615 push    dx ;~ 0613:3747
cs=0x613;eip=0x003748; 	X(PUSH(ax));	// 14616 push    ax ;~ 0613:3748
cs=0x613;eip=0x003749; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 14617 mov     ax, [bp+var_8] ;~ 0613:3749
cs=0x613;eip=0x00374c; 	T(CWD);	// 14618 cwd ;~ 0613:374C
cs=0x613;eip=0x00374d; 	X(PUSH(dx));	// 14619 push    dx ;~ 0613:374D
cs=0x613;eip=0x00374e; 	X(PUSH(ax));	// 14620 push    ax ;~ 0613:374E
cs=0x613;eip=0x00374f; 	J(CALLF(__aflmul,0));	// 14621 call    __aFlmul ;~ 0613:374F
cs=0x613;eip=0x003754; 	X(PUSH(dx));	// 14622 push    dx ;~ 0613:3754
cs=0x613;eip=0x003755; 	X(PUSH(ax));	// 14623 push    ax ;~ 0613:3755
cs=0x613;eip=0x003756; 	J(CALLF(__afuldiv,0));	// 14624 call    __aFuldiv ;~ 0613:3756
cs=0x613;eip=0x00375b; 	T(SAR(ax, 1));	// 14625 sar     ax, 1 ;~ 0613:375B
cs=0x613;eip=0x00375d; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 14626 mov     [bp+var_8], ax ;~ 0613:375D
cs=0x613;eip=0x003760; 	T(CMP(*(raddr(ss,bp+arg_2)), 0));	// 14627 cmp     [bp+arg_2], 0 ;~ 0613:3760
cs=0x613;eip=0x003764; 	J(JZ(loc_17ead));	// 14628 jz      short loc_17EAD ;~ 0613:3764
cs=0x613;eip=0x003766; 	T(MOV(al, oppnentsped));	// 14629 mov     al, oppnentSped ;~ 0613:3766
cs=0x613;eip=0x003769; 	T(SUB(ah, ah));	// 14630 sub     ah, ah ;~ 0613:3769
cs=0x613;eip=0x00376b; 	T(SUB(ax, 0x0C8));	// 14631 sub     ax, 0C8h ; 'È' ;~ 0613:376B
cs=0x613;eip=0x00376e; 	T(NEG(ax));	// 14632 neg     ax ;~ 0613:376E
cs=0x613;eip=0x003770; 	T(SHR(ax, 1));	// 14633 shr     ax, 1 ;~ 0613:3770
cs=0x613;eip=0x003772; 	X(MOV(*(raddr(ss,bp+var_a)), al));	// 14634 mov     [bp+var_A], al ;~ 0613:3772
cs=0x613;eip=0x003775; 	T(OR(al, al));	// 14635 or      al, al ;~ 0613:3775
cs=0x613;eip=0x003777; 	J(JZ(loc_17ead));	// 14636 jz      short loc_17EAD ;~ 0613:3777
cs=0x613;eip=0x003779; 	T(MOV(ax, 0x0C8));	// 14637 mov     ax, 0C8h ; 'È' ;~ 0613:3779
cs=0x613;eip=0x00377c; 	T(CWD);	// 14638 cwd ;~ 0613:377C
cs=0x613;eip=0x00377d; 	X(PUSH(dx));	// 14639 push    dx ;~ 0613:377D
cs=0x613;eip=0x00377e; 	X(PUSH(ax));	// 14640 push    ax ;~ 0613:377E
cs=0x613;eip=0x00377f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 14641 mov     ax, [bp+var_8] ;~ 0613:377F
cs=0x613;eip=0x003782; 	T(CWD);	// 14642 cwd ;~ 0613:3782
cs=0x613;eip=0x003783; 	X(PUSH(dx));	// 14643 push    dx ;~ 0613:3783
cs=0x613;eip=0x003784; 	X(PUSH(ax));	// 14644 push    ax ;~ 0613:3784
cs=0x613;eip=0x003785; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 14645 mov     al, [bp+var_A] ;~ 0613:3785
cs=0x613;eip=0x003788; 	T(SUB(ah, ah));	// 14646 sub     ah, ah ;~ 0613:3788
cs=0x613;eip=0x00378a; 	T(SUB(cx, cx));	// 14647 sub     cx, cx ;~ 0613:378A
cs=0x613;eip=0x00378c; 	X(PUSH(cx));	// 14648 push    cx ;~ 0613:378C
cs=0x613;eip=0x00378d; 	X(PUSH(ax));	// 14649 push    ax ;~ 0613:378D
cs=0x613;eip=0x00378e; 	J(CALLF(__aflmul,0));	// 14650 call    __aFlmul ;~ 0613:378E
cs=0x613;eip=0x003793; 	X(PUSH(dx));	// 14651 push    dx ;~ 0613:3793
cs=0x613;eip=0x003794; 	X(PUSH(ax));	// 14652 push    ax ;~ 0613:3794
cs=0x613;eip=0x003795; 	J(CALLF(__afldiv,0));	// 14653 call    __aFldiv ;~ 0613:3795
cs=0x613;eip=0x00379a; 	X(SUB(*(dw*)(raddr(ss,bp+var_8)), ax));	// 14654 sub     [bp+var_8], ax ;~ 0613:379A
loc_17ead:
	// 5210 
cs=0x613;eip=0x00379d; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x128));	// 14658 cmp     [bp+var_8], 128h ; (37/32)mph, a quite large value ;~ 0613:379D
cs=0x613;eip=0x0037a2; 	J(JG(loc_17eb7));	// 14659 jg      short loc_17EB7 ;~ 0613:37A2
cs=0x613;eip=0x0037a4; 	J(JMP(loc_17d39));	// 14660 jmp     loc_17D39 ;~ 0613:37A4
loc_17eb7:
	// 5211 
cs=0x613;eip=0x0037a7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14664 mov     bx, [bp+arg_4] ;~ 0613:37A7
cs=0x613;eip=0x0037aa; 	X(MOV(*(raddr(ds,bx+0x0C6)), 5));	// 14665 mov     byte ptr [bx+0C6h], 5 ;~ 0613:37AA
cs=0x613;eip=0x0037af; 	J(JMP(loc_17d39));	// 14666 jmp     loc_17D39 ;~ 0613:37AF
loc_17ec2:
	// 5212 
cs=0x613;eip=0x0037b2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 14670 mov     ax, [bp+var_8] ;~ 0613:37B2
cs=0x613;eip=0x0037b5; 	X(ADD(*(dw*)(raddr(ss,bp+var_6)), ax));	// 14671 add     [bp+var_6], ax ;~ 0613:37B5
cs=0x613;eip=0x0037b8; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0x8000));	// 14672 cmp     [bp+var_6], 8000h ;~ 0613:37B8
cs=0x613;eip=0x0037bd; 	J(JC(loc_17ed9));	// 14673 jb      short loc_17ED9 ;~ 0613:37BD
cs=0x613;eip=0x0037bf; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0x0F500));	// 14674 cmp     [bp+var_6], 0F500h ;~ 0613:37BF
cs=0x613;eip=0x0037c4; 	J(JA(loc_17ed9));	// 14675 ja      short loc_17ED9 ;~ 0613:37C4
cs=0x613;eip=0x0037c6; 	J(JMP(loc_17d5f));	// 14676 jmp     loc_17D5F ;~ 0613:37C6
loc_17ed9:
	// 5213 
cs=0x613;eip=0x0037c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0x0F500));	// 14681 mov     [bp+var_6], 0F500h ;~ 0613:37C9
cs=0x613;eip=0x0037ce; 	J(JMP(loc_17d5f));	// 14682 jmp     loc_17D5F ;~ 0613:37CE
loc_17ee2:
	// 5214 
cs=0x613;eip=0x0037d2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 14687 mov     ax, [bp+var_8] ;~ 0613:37D2
cs=0x613;eip=0x0037d5; 	T(NEG(ax));	// 14688 neg     ax ;~ 0613:37D5
cs=0x613;eip=0x0037d7; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_6))));	// 14689 cmp     ax, [bp+var_6] ;~ 0613:37D7
cs=0x613;eip=0x0037da; 	J(JA(loc_17eef));	// 14690 ja      short loc_17EEF ;~ 0613:37DA
cs=0x613;eip=0x0037dc; 	J(JMP(loc_17d59));	// 14691 jmp     loc_17D59 ;~ 0613:37DC
loc_17eef:
	// 5215 
cs=0x613;eip=0x0037df; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 14695 mov     [bp+var_6], 0 ;~ 0613:37DF
cs=0x613;eip=0x0037e4; 	J(JMP(loc_17d5f));	// 14696 jmp     loc_17D5F ;~ 0613:37E4
loc_17ef8:
	// 5216 
cs=0x613;eip=0x0037e8; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 14701 mov     ax, word ptr [bp+var_4] ;~ 0613:37E8
loc_17efb:
	// 5217 
cs=0x613;eip=0x0037eb; 	T(CMP(ax, 0x1400));	// 14704 cmp     ax, 1400h       ; abs.delta = 20mph: a lot ;~ 0613:37EB
cs=0x613;eip=0x0037ee; 	J(JLE(loc_17f28));	// 14705 jle     short loc_17F28 ;~ 0613:37EE
cs=0x613;eip=0x0037f0; 	T(MOV(si, bx));	// 14706 mov     si, bx ;~ 0613:37F0
cs=0x613;eip=0x0037f2; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x2A))));	// 14707 mov     ax, [si+2Ah] ;~ 0613:37F2
cs=0x613;eip=0x0037f5; 	T(SUB(dx, dx));	// 14708 sub     dx, dx ;~ 0613:37F5
cs=0x613;eip=0x0037f7; 	T(ADD(ax, *(dw*)(raddr(ds,si+0x2C))));	// 14709 add     ax, [si+2Ch] ;~ 0613:37F7
cs=0x613;eip=0x0037fa; 	T(ADC(dx, dx));	// 14710 adc     dx, dx ;~ 0613:37FA
cs=0x613;eip=0x0037fc; 	T(SHR(dx, 1));	// 14711 shr     dx, 1 ;~ 0613:37FC
cs=0x613;eip=0x0037fe; 	T(RCR(ax, 1));	// 14712 rcr     ax, 1           ; an average ;~ 0613:37FE
cs=0x613;eip=0x003800; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), ax));	// 14713 mov     [bx+2Ah], ax ;~ 0613:3800
cs=0x613;eip=0x003803; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14714 mov     bx, [bp+arg_4] ;~ 0613:3803
cs=0x613;eip=0x003806; 	T(MOV(si, bx));	// 14715 mov     si, bx ;~ 0613:3806
cs=0x613;eip=0x003808; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x2A))));	// 14716 mov     ax, [si+2Ah] ;~ 0613:3808
cs=0x613;eip=0x00380b; 	X(MOV(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 14717 mov     [bx+2Ch], ax ;~ 0613:380B
cs=0x613;eip=0x00380e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14718 mov     bx, [bp+arg_4] ;~ 0613:380E
cs=0x613;eip=0x003811; 	X(MOV(*(raddr(ds,bx+0x0C6)), 5));	// 14719 mov     byte ptr [bx+0C6h], 5 ;~ 0613:3811
cs=0x613;eip=0x003816; 	J(JMP(loc_17f45));	// 14720 jmp     short loc_17F45 ;~ 0613:3816
loc_17f28:
	// 5218 
cs=0x613;eip=0x003818; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14724 mov     bx, [bp+arg_4] ;~ 0613:3818
cs=0x613;eip=0x00381b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 14725 mov     ax, [bp+var_6] ;~ 0613:381B
cs=0x613;eip=0x00381e; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), ax));	// 14726 mov     [bx+2Ah], ax ;~ 0613:381E
cs=0x613;eip=0x003821; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14727 mov     bx, [bp+arg_4] ;~ 0613:3821
cs=0x613;eip=0x003824; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 14728 mov     ax, [bp+var_6] ;~ 0613:3824
cs=0x613;eip=0x003827; 	X(MOV(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 14729 mov     [bx+2Ch], ax ;~ 0613:3827
cs=0x613;eip=0x00382a; 	J(JMP(loc_17f45));	// 14730 jmp     short loc_17F45 ;~ 0613:382A
loc_17f3c:
	// 5219 
cs=0x613;eip=0x00382c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14734 mov     bx, [bp+arg_4] ;~ 0613:382C
cs=0x613;eip=0x00382f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 14735 mov     ax, [bp+var_6] ;~ 0613:382F
cs=0x613;eip=0x003832; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), ax));	// 14736 mov     [bx+2Ah], ax ;~ 0613:3832
loc_17f45:
	// 5220 
cs=0x613;eip=0x003835; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14740 mov     bx, [bp+arg_6] ;~ 0613:3835
cs=0x613;eip=0x003838; 	X(PUSH(*(dw*)(raddr(ds,bx+6))));	// 14741 push    word ptr [bx+6] ;~ 0613:3838
cs=0x613;eip=0x00383b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14742 mov     bx, [bp+arg_4] ;~ 0613:383B
cs=0x613;eip=0x00383e; 	T(MOV(al, *(raddr(ds,bx+0x0CA))));	// 14743 mov     al, [bx+0CAh] ;~ 0613:383E
cs=0x613;eip=0x003842; 	T(CBW);	// 14744 cbw ;~ 0613:3842
cs=0x613;eip=0x003843; 	X(PUSH(ax));	// 14745 push    ax ;~ 0613:3843
cs=0x613;eip=0x003844; 	X(PUSH(*(dw*)(raddr(ds,bx+0x30))));	// 14746 push    word ptr [bx+30h] ;~ 0613:3844
cs=0x613;eip=0x003847; 	X(PUSH(*(dw*)(raddr(ds,bx+0x2A))));	// 14747 push    word ptr [bx+2Ah] ;~ 0613:3847
cs=0x613;eip=0x00384a; 	X(PUSH(*(dw*)(raddr(ds,bx+0x22))));	// 14748 push    word ptr [bx+22h] ;~ 0613:384A
cs=0x613;eip=0x00384d; 	J(CALLF(update_rpm_from_speed,0));	// 14749 call    update_rpm_from_speed ;~ 0613:384D
cs=0x613;eip=0x003852; 	T(ADD(sp, 0x0A));	// 14750 add     sp, 0Ah ;~ 0613:3852
cs=0x613;eip=0x003855; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14751 mov     bx, [bp+arg_4] ;~ 0613:3855
cs=0x613;eip=0x003858; 	X(MOV(*(dw*)(raddr(ds,bx+0x22)), ax));	// 14752 mov     [bx+22h], ax ;~ 0613:3858
cs=0x613;eip=0x00385b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14753 mov     bx, [bp+arg_4] ;~ 0613:385B
cs=0x613;eip=0x00385e; 	T(CMP(*(raddr(ds,bx+0x0C1)), 0));	// 14754 cmp     byte ptr [bx+0C1h], 0 ;~ 0613:385E
cs=0x613;eip=0x003863; 	J(JZ(loc_17fbf));	// 14755 jz      short loc_17FBF ;~ 0613:3863
cs=0x613;eip=0x003865; 	T(MOV(si, bx));	// 14756 mov     si, bx ;~ 0613:3865
cs=0x613;eip=0x003867; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x22))));	// 14757 mov     ax, [si+22h] ;~ 0613:3867
cs=0x613;eip=0x00386a; 	T(CMP(*(dw*)(raddr(ds,bx+0x24)), ax));	// 14758 cmp     [bx+24h], ax ;~ 0613:386A
cs=0x613;eip=0x00386d; 	J(JLE(loc_17fbf));	// 14759 jle     short loc_17FBF ;~ 0613:386D
cs=0x613;eip=0x00386f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x24))));	// 14760 mov     ax, [bx+24h] ;~ 0613:386F
cs=0x613;eip=0x003872; 	T(SUB(ax, *(dw*)(raddr(ds,bx+0x22))));	// 14761 sub     ax, [bx+22h] ;~ 0613:3872
cs=0x613;eip=0x003875; 	T(CMP(ax, 0x7D0));	// 14762 cmp     ax, 7D0h        ; 2000rpm ;~ 0613:3875
cs=0x613;eip=0x003878; 	J(JLE(loc_17fa4));	// 14763 jle     short loc_17FA4 ;~ 0613:3878
cs=0x613;eip=0x00387a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14764 mov     bx, [bp+arg_6] ;~ 0613:387A
cs=0x613;eip=0x00387d; 	T(MOV(al, *(raddr(ds,bx+0x3A))));	// 14765 mov     al, [bx+3Ah] ;~ 0613:387D
cs=0x613;eip=0x003880; 	T(SUB(ah, ah));	// 14766 sub     ah, ah ;~ 0613:3880
cs=0x613;eip=0x003882; 	T(MOV(bx, si));	// 14767 mov     bx, si ;~ 0613:3882
cs=0x613;eip=0x003884; 	X(MUL1_2(*(dw*)(raddr(ds,bx+0x32))));	// 14768 mul     word ptr [bx+32h] ;~ 0613:3884
cs=0x613;eip=0x003887; 	T(CMP(ax, 0x2EE0));	// 14769 cmp     ax, 2EE0h ;~ 0613:3887
cs=0x613;eip=0x00388a; 	J(JLE(loc_17fbf));	// 14770 jle     short loc_17FBF ;~ 0613:388A
cs=0x613;eip=0x00388c; 	X(MOV(*(raddr(ds,bx+0x0C6)), 0x1E));	// 14771 mov     byte ptr [bx+0C6h], 1Eh ;~ 0613:388C
cs=0x613;eip=0x003891; 	J(JMP(loc_17fbf));	// 14772 jmp     short loc_17FBF ;~ 0613:3891
loc_17fa4:
	// 5221 
cs=0x613;eip=0x003894; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14777 mov     bx, [bp+arg_4] ;~ 0613:3894
cs=0x613;eip=0x003897; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 14778 mov     ax, [bx+22h] ;~ 0613:3897
cs=0x613;eip=0x00389a; 	T(SUB(ax, *(dw*)(raddr(ds,bx+0x24))));	// 14779 sub     ax, [bx+24h] ;~ 0613:389A
cs=0x613;eip=0x00389d; 	T(CMP(ax, 0x7D0));	// 14780 cmp     ax, 7D0h        ; 2000rpm ;~ 0613:389D
cs=0x613;eip=0x0038a0; 	J(JLE(loc_17fbf));	// 14781 jle     short loc_17FBF ;~ 0613:38A0
cs=0x613;eip=0x0038a2; 	X(MOV(*(raddr(ds,bx+0x0C6)), 0x0A));	// 14782 mov     byte ptr [bx+0C6h], 0Ah ;~ 0613:38A2
cs=0x613;eip=0x0038a7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14783 mov     bx, [bp+arg_4] ;~ 0613:38A7
cs=0x613;eip=0x0038aa; 	X(SUB(*(dw*)(raddr(ds,bx+0x2C)), 0x500));	// 14784 sub     word ptr [bx+2Ch], 500h ; 5mph ;~ 0613:38AA
loc_17fbf:
	// 5222 
cs=0x613;eip=0x0038af; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14788 mov     bx, [bp+arg_4] ;~ 0613:38AF
cs=0x613;eip=0x0038b2; 	T(MOV(ax, word_445e2));	// 14789 mov     ax, word_445E2 ;~ 0613:38B2
cs=0x613;eip=0x0038b5; 	T(CMP(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 14790 cmp     [bx+2Ch], ax ;~ 0613:38B5
cs=0x613;eip=0x0038b8; 	J(JBE(loc_17fd0));	// 14791 jbe     short loc_17FD0 ;~ 0613:38B8
cs=0x613;eip=0x0038ba; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x2C))));	// 14792 mov     ax, [bx+2Ch] ;~ 0613:38BA
cs=0x613;eip=0x0038bd; 	X(MOV(word_445e2, ax));	// 14793 mov     word_445E2, ax ;~ 0613:38BD
loc_17fd0:
	// 5223 
cs=0x613;eip=0x0038c0; 	X(POP(si));	// 14796 pop     si ;~ 0613:38C0
cs=0x613;eip=0x0038c1; 	X(POP(di));	// 14797 pop     di ;~ 0613:38C1
cs=0x613;eip=0x0038c2; 	T(MOV(sp, bp));	// 14798 mov     sp, bp ;~ 0613:38C2
cs=0x613;eip=0x0038c4; 	X(POP(bp));	// 14799 pop     bp ;~ 0613:38C4
cs=0x613;eip=0x0038c5; 	J(RETF(0));	// 14800 retf ;~ 0613:38C5

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_17a8e: 	goto loc_17a8e;
        case m2c::kloc_17a93: 	goto loc_17a93;
        case m2c::kloc_17aa1: 	goto loc_17aa1;
        case m2c::kloc_17ae6: 	goto loc_17ae6;
        case m2c::kloc_17af0: 	goto loc_17af0;
        case m2c::kloc_17afa: 	goto loc_17afa;
        case m2c::kloc_17b04: 	goto loc_17b04;
        case m2c::kloc_17b0f: 	goto loc_17b0f;
        case m2c::kloc_17b20: 	goto loc_17b20;
        case m2c::kloc_17b2e: 	goto loc_17b2e;
        case m2c::kloc_17b39: 	goto loc_17b39;
        case m2c::kloc_17b86: 	goto loc_17b86;
        case m2c::kloc_17b93: 	goto loc_17b93;
        case m2c::kloc_17bda: 	goto loc_17bda;
        case m2c::kloc_17bf6: 	goto loc_17bf6;
        case m2c::kloc_17bff: 	goto loc_17bff;
        case m2c::kloc_17c0c: 	goto loc_17c0c;
        case m2c::kloc_17c40: 	goto loc_17c40;
        case m2c::kloc_17c52: 	goto loc_17c52;
        case m2c::kloc_17c5e: 	goto loc_17c5e;
        case m2c::kloc_17c84: 	goto loc_17c84;
        case m2c::kloc_17c8a: 	goto loc_17c8a;
        case m2c::kloc_17c93: 	goto loc_17c93;
        case m2c::kloc_17c9e: 	goto loc_17c9e;
        case m2c::kloc_17cac: 	goto loc_17cac;
        case m2c::kloc_17ce1: 	goto loc_17ce1;
        case m2c::kloc_17cea: 	goto loc_17cea;
        case m2c::kloc_17cf8: 	goto loc_17cf8;
        case m2c::kloc_17d10: 	goto loc_17d10;
        case m2c::kloc_17d36: 	goto loc_17d36;
        case m2c::kloc_17d39: 	goto loc_17d39;
        case m2c::kloc_17d46: 	goto loc_17d46;
        case m2c::kloc_17d4f: 	goto loc_17d4f;
        case m2c::kloc_17d59: 	goto loc_17d59;
        case m2c::kloc_17d5f: 	goto loc_17d5f;
        case m2c::kloc_17d6c: 	goto loc_17d6c;
        case m2c::kloc_17d7c: 	goto loc_17d7c;
        case m2c::kloc_17d82: 	goto loc_17d82;
        case m2c::kloc_17db2: 	goto loc_17db2;
        case m2c::kloc_17dbc: 	goto loc_17dbc;
        case m2c::kloc_17dd4: 	goto loc_17dd4;
        case m2c::kloc_17dde: 	goto loc_17dde;
        case m2c::kloc_17de6: 	goto loc_17de6;
        case m2c::kloc_17dfc: 	goto loc_17dfc;
        case m2c::kloc_17e0c: 	goto loc_17e0c;
        case m2c::kloc_17e34: 	goto loc_17e34;
        case m2c::kloc_17ead: 	goto loc_17ead;
        case m2c::kloc_17eb7: 	goto loc_17eb7;
        case m2c::kloc_17ec2: 	goto loc_17ec2;
        case m2c::kloc_17ed9: 	goto loc_17ed9;
        case m2c::kloc_17ee2: 	goto loc_17ee2;
        case m2c::kloc_17eef: 	goto loc_17eef;
        case m2c::kloc_17ef8: 	goto loc_17ef8;
        case m2c::kloc_17efb: 	goto loc_17efb;
        case m2c::kloc_17f28: 	goto loc_17f28;
        case m2c::kloc_17f3c: 	goto loc_17f3c;
        case m2c::kloc_17f45: 	goto loc_17f45;
        case m2c::kloc_17fa4: 	goto loc_17fa4;
        case m2c::kloc_17fbf: 	goto loc_17fbf;
        case m2c::kloc_17fd0: 	goto loc_17fd0;
        case m2c::kupdate_car_speed: 	goto update_car_speed;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool update_grip(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    update_grip:
    _begin:
#undef var_10
#define var_10 -0x10
	// 14811 var_10          = word ptr -10h ;~ 0613:38C6
#undef var_e
#define var_e -0x0E
	// 14812 var_E           = byte ptr -0Eh ;~ 0613:38C6
#undef var_c
#define var_c -0x0C
	// 14813 var_C           = word ptr -0Ch ;~ 0613:38C6
#undef var_a
#define var_a -0x0A
	// 14814 var_A           = byte ptr -0Ah ;~ 0613:38C6
#undef var_8
#define var_8 -8
	// 14815 var_8           = word ptr -8 ;~ 0613:38C6
#undef var_6
#define var_6 -6
	// 14816 var_6           = word ptr -6 ;~ 0613:38C6
#undef var_4
#define var_4 -4
	// 14817 var_4           = word ptr -4 ;~ 0613:38C6
#undef var_2
#define var_2 -2
	// 14818 var_2           = word ptr -2 ;~ 0613:38C6
#undef arg_0
#define arg_0 6
	// 14819 arg_0           = word ptr  6 ;~ 0613:38C6
#undef arg_2
#define arg_2 8
	// 14820 arg_2           = word ptr  8 ;~ 0613:38C6
#undef arg_4
#define arg_4 0x0A
	// 14821 arg_4           = word ptr  0Ah ;~ 0613:38C6
cs=0x613;eip=0x0038c6; 	X(PUSH(bp));	// 14823 push    bp ;~ 0613:38C6
cs=0x613;eip=0x0038c7; 	T(MOV(bp, sp));	// 14824 mov     bp, sp ;~ 0613:38C7
cs=0x613;eip=0x0038c9; 	T(SUB(sp, 0x10));	// 14825 sub     sp, 10h ;~ 0613:38C9
cs=0x613;eip=0x0038cc; 	X(PUSH(di));	// 14826 push    di ;~ 0613:38CC
cs=0x613;eip=0x0038cd; 	X(PUSH(si));	// 14827 push    si ;~ 0613:38CD
cs=0x613;eip=0x0038ce; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14828 mov     bx, [bp+arg_0] ;~ 0613:38CE
cs=0x613;eip=0x0038d1; 	T(CMP(*(raddr(ds,bx+0x0C1)), 0));	// 14829 cmp     byte ptr [bx+0C1h], 0 ;~ 0613:38D1
cs=0x613;eip=0x0038d6; 	J(JNZ(loc_17ffc));	// 14830 jnz     short loc_17FFC ;~ 0613:38D6
cs=0x613;eip=0x0038d8; 	X(MOV(*(dw*)(raddr(ds,bx+0x40)), 0));	// 14831 mov     word ptr [bx+40h], 0 ;~ 0613:38D8
cs=0x613;eip=0x0038dd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14832 mov     bx, [bp+arg_0] ;~ 0613:38DD
cs=0x613;eip=0x0038e0; 	X(MOV(*(raddr(ds,bx+0x0C7)), 0));	// 14833 mov     byte ptr [bx+0C7h], 0 ;~ 0613:38E0
cs=0x613;eip=0x0038e5; 	X(POP(si));	// 14834 pop     si ;~ 0613:38E5
cs=0x613;eip=0x0038e6; 	X(POP(di));	// 14835 pop     di ;~ 0613:38E6
cs=0x613;eip=0x0038e7; 	T(MOV(sp, bp));	// 14836 mov     sp, bp ;~ 0613:38E7
cs=0x613;eip=0x0038e9; 	X(POP(bp));	// 14837 pop     bp ;~ 0613:38E9
cs=0x613;eip=0x0038ea; 	J(RETF(0));	// 14838 retf ;~ 0613:38EA
loc_17ffc:
	// 5224 
cs=0x613;eip=0x0038ec; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 14843 mov     [bp+var_8], 0 ;~ 0613:38EC
cs=0x613;eip=0x0038f1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14844 mov     bx, [bp+arg_0] ;~ 0613:38F1
cs=0x613;eip=0x0038f4; 	T(CMP(*(raddr(ds,bx+0x0C2)), 4));	// 14845 cmp     byte ptr [bx+0C2h], 4 ;~ 0613:38F4
cs=0x613;eip=0x0038f9; 	J(JNZ(loc_1800e));	// 14846 jnz     short loc_1800E ;~ 0613:38F9
cs=0x613;eip=0x0038fb; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 14847 inc     [bp+var_8] ;~ 0613:38FB
loc_1800e:
	// 5225 
cs=0x613;eip=0x0038fe; 	T(CMP(*(raddr(ds,bx+0x0C3)), 4));	// 14850 cmp     byte ptr [bx+0C3h], 4 ;~ 0613:38FE
cs=0x613;eip=0x003903; 	J(JNZ(loc_18018));	// 14851 jnz     short loc_18018 ;~ 0613:3903
cs=0x613;eip=0x003905; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 14852 inc     [bp+var_8] ;~ 0613:3905
loc_18018:
	// 5226 
cs=0x613;eip=0x003908; 	T(CMP(*(raddr(ds,bx+0x0C4)), 4));	// 14855 cmp     byte ptr [bx+0C4h], 4 ;~ 0613:3908
cs=0x613;eip=0x00390d; 	J(JNZ(loc_18022));	// 14856 jnz     short loc_18022 ;~ 0613:390D
cs=0x613;eip=0x00390f; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 14857 inc     [bp+var_8] ;~ 0613:390F
loc_18022:
	// 5227 
cs=0x613;eip=0x003912; 	T(CMP(*(raddr(ds,bx+0x0C5)), 4));	// 14860 cmp     byte ptr [bx+0C5h], 4 ;~ 0613:3912
cs=0x613;eip=0x003917; 	J(JNZ(loc_1802c));	// 14861 jnz     short loc_1802C ;~ 0613:3917
cs=0x613;eip=0x003919; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 14862 inc     [bp+var_8] ;~ 0613:3919
loc_1802c:
	// 5228 
cs=0x613;eip=0x00391c; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 14865 cmp     [bp+var_8], 0 ;~ 0613:391C
cs=0x613;eip=0x003920; 	J(JZ(loc_18051));	// 14866 jz      short loc_18051 ;~ 0613:3920
cs=0x613;eip=0x003922; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x2C))));	// 14867 mov     ax, [bx+2Ch] ;~ 0613:3922
cs=0x613;eip=0x003925; 	T(SUB(dx, dx));	// 14868 sub     dx, dx ;~ 0613:3925
cs=0x613;eip=0x003927; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 14869 mov     bx, [bp+var_8] ;~ 0613:3927
cs=0x613;eip=0x00392a; 	T(SHL(bx, 1));	// 14870 shl     bx, 1 ;~ 0613:392A
cs=0x613;eip=0x00392c; 	X(DIV2(*(dw*)(((db*)grassdeceldivtab)+bx)));	// 14871 div     grassDecelDivTab[bx] ;~ 0613:392C
cs=0x613;eip=0x003930; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14872 mov     bx, [bp+arg_0] ;~ 0613:3930
cs=0x613;eip=0x003933; 	X(SUB(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 14873 sub     [bx+2Ch], ax ;~ 0613:3933
cs=0x613;eip=0x003936; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14874 mov     bx, [bp+arg_0] ;~ 0613:3936
cs=0x613;eip=0x003939; 	T(MOV(si, bx));	// 14875 mov     si, bx ;~ 0613:3939
cs=0x613;eip=0x00393b; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x2C))));	// 14876 mov     ax, [si+2Ch] ;~ 0613:393B
cs=0x613;eip=0x00393e; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), ax));	// 14877 mov     [bx+2Ah], ax ;~ 0613:393E
loc_18051:
	// 5229 
cs=0x613;eip=0x003941; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14880 mov     bx, [bp+arg_0] ;~ 0613:3941
cs=0x613;eip=0x003944; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 14881 mov     ax, [bx+20h] ;~ 0613:3944
cs=0x613;eip=0x003947; 	T(ADD(ax, *(dw*)(raddr(ds,bx+0x36))));	// 14882 add     ax, [bx+36h] ;~ 0613:3947
cs=0x613;eip=0x00394a; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 14883 mov     [bp+var_10], ax ;~ 0613:394A
cs=0x613;eip=0x00394d; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 14884 mov     [bp+var_C], ax ;~ 0613:394D
cs=0x613;eip=0x003950; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x2A))));	// 14885 mov     ax, [bx+2Ah] ;~ 0613:3950
cs=0x613;eip=0x003953; 	T(MOV(cl, 8));	// 14886 mov     cl, 8 ;~ 0613:3953
cs=0x613;eip=0x003955; 	T(SHR(ax, cl));	// 14887 shr     ax, cl ;~ 0613:3955
cs=0x613;eip=0x003957; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 14888 mov     [bp+var_2], ax ;~ 0613:3957
cs=0x613;eip=0x00395a; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 0));	// 14889 cmp     [bp+var_C], 0 ;~ 0613:395A
cs=0x613;eip=0x00395e; 	J(JGE(loc_18078));	// 14890 jge     short loc_18078 ;~ 0613:395E
cs=0x613;eip=0x003960; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 14891 mov     ax, [bp+var_C] ;~ 0613:3960
cs=0x613;eip=0x003963; 	T(NEG(ax));	// 14892 neg     ax ;~ 0613:3963
cs=0x613;eip=0x003965; 	J(JMP(loc_1807b));	// 14893 jmp     short loc_1807B ;~ 0613:3965
loc_18078:
	// 5230 
cs=0x613;eip=0x003968; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 14898 mov     ax, [bp+var_C] ;~ 0613:3968
loc_1807b:
	// 5231 
cs=0x613;eip=0x00396b; 	T(MOV(cl, 3));	// 14901 mov     cl, 3 ;~ 0613:396B
cs=0x613;eip=0x00396d; 	T(SAR(ax, cl));	// 14902 sar     ax, cl ;~ 0613:396D
cs=0x613;eip=0x00396f; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 14903 mov     [bp+var_8], ax ;~ 0613:396F
cs=0x613;eip=0x003972; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 14904 mov     ax, [bp+var_2] ;~ 0613:3972
cs=0x613;eip=0x003975; 	T(MUL1_2(ax));	// 14905 mul     ax ;~ 0613:3975
cs=0x613;eip=0x003977; 	T(MOV(cl, 6));	// 14906 mov     cl, 6 ;~ 0613:3977
cs=0x613;eip=0x003979; 	T(SHR(ax, cl));	// 14907 shr     ax, cl ;~ 0613:3979
cs=0x613;eip=0x00397b; 	X(MUL1_2(*(dw*)(raddr(ss,bp+var_8))));	// 14908 mul     [bp+var_8] ;~ 0613:397B
cs=0x613;eip=0x00397e; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 14909 mov     [bp+var_4], ax ;~ 0613:397E
cs=0x613;eip=0x003981; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 14910 mov     bx, [bp+arg_2] ;~ 0613:3981
cs=0x613;eip=0x003984; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A4))));	// 14911 mov     ax, [bx+0A4h] ;~ 0613:3984
cs=0x613;eip=0x003988; 	T(SHL(ax, 1));	// 14912 shl     ax, 1 ;~ 0613:3988
cs=0x613;eip=0x00398a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 14913 mov     [bp+var_6], ax ;~ 0613:398A
cs=0x613;eip=0x00398d; 	T(CWD);	// 14914 cwd ;~ 0613:398D
cs=0x613;eip=0x00398e; 	X(PUSH(dx));	// 14915 push    dx ;~ 0613:398E
cs=0x613;eip=0x00398f; 	X(PUSH(ax));	// 14916 push    ax ;~ 0613:398F
cs=0x613;eip=0x003990; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14917 mov     bx, [bp+arg_0] ;~ 0613:3990
cs=0x613;eip=0x003993; 	T(MOV(al, *(raddr(ds,bx+0x0C5))));	// 14918 mov     al, [bx+0C5h] ;~ 0613:3993
cs=0x613;eip=0x003997; 	T(CBW);	// 14919 cbw ;~ 0613:3997
cs=0x613;eip=0x003998; 	T(MOV(si, ax));	// 14920 mov     si, ax ;~ 0613:3998
cs=0x613;eip=0x00399a; 	T(SHL(si, 1));	// 14921 shl     si, 1 ;~ 0613:399A
cs=0x613;eip=0x00399c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 14922 mov     bx, [bp+arg_2] ;~ 0613:399C
cs=0x613;eip=0x00399f; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 14923 mov     di, [bp+arg_0] ;~ 0613:399F
cs=0x613;eip=0x0039a2; 	T(MOV(al, *(raddr(ds,di+0x0C4))));	// 14924 mov     al, [di+0C4h] ;~ 0613:39A2
cs=0x613;eip=0x0039a6; 	T(CBW);	// 14925 cbw ;~ 0613:39A6
cs=0x613;eip=0x0039a7; 	T(MOV(di, ax));	// 14926 mov     di, ax ;~ 0613:39A7
cs=0x613;eip=0x0039a9; 	T(SHL(di, 1));	// 14927 shl     di, 1 ;~ 0613:39A9
cs=0x613;eip=0x0039ab; 	T(MOV(ax, *(dw*)(raddr(ds,bx+si+0x0B4))));	// 14928 mov     ax, [bx+si+0B4h] ;~ 0613:39AB
cs=0x613;eip=0x0039af; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14929 mov     bx, [bp+arg_0] ;~ 0613:39AF
cs=0x613;eip=0x0039b2; 	T(MOV(cx, ax));	// 14930 mov     cx, ax ;~ 0613:39B2
cs=0x613;eip=0x0039b4; 	T(MOV(al, *(raddr(ds,bx+0x0C3))));	// 14931 mov     al, [bx+0C3h] ;~ 0613:39B4
cs=0x613;eip=0x0039b8; 	T(CBW);	// 14932 cbw ;~ 0613:39B8
cs=0x613;eip=0x0039b9; 	T(MOV(si, ax));	// 14933 mov     si, ax ;~ 0613:39B9
cs=0x613;eip=0x0039bb; 	T(SHL(si, 1));	// 14934 shl     si, 1 ;~ 0613:39BB
cs=0x613;eip=0x0039bd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 14935 mov     bx, [bp+arg_2] ;~ 0613:39BD
cs=0x613;eip=0x0039c0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+si+0x0B4))));	// 14936 mov     ax, [bx+si+0B4h] ;~ 0613:39C0
cs=0x613;eip=0x0039c4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14937 mov     bx, [bp+arg_0] ;~ 0613:39C4
cs=0x613;eip=0x0039c7; 	T(MOV(dx, ax));	// 14938 mov     dx, ax ;~ 0613:39C7
cs=0x613;eip=0x0039c9; 	T(MOV(al, *(raddr(ds,bx+0x0C2))));	// 14939 mov     al, [bx+0C2h] ;~ 0613:39C9
cs=0x613;eip=0x0039cd; 	T(CBW);	// 14940 cbw ;~ 0613:39CD
cs=0x613;eip=0x0039ce; 	T(MOV(si, ax));	// 14941 mov     si, ax ;~ 0613:39CE
cs=0x613;eip=0x0039d0; 	T(SHL(si, 1));	// 14942 shl     si, 1 ;~ 0613:39D0
cs=0x613;eip=0x0039d2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 14943 mov     bx, [bp+arg_2] ;~ 0613:39D2
cs=0x613;eip=0x0039d5; 	T(MOV(ax, *(dw*)(raddr(ds,bx+si+0x0B4))));	// 14944 mov     ax, [bx+si+0B4h] ;~ 0613:39D5
cs=0x613;eip=0x0039d9; 	T(ADD(ax, dx));	// 14945 add     ax, dx ;~ 0613:39D9
cs=0x613;eip=0x0039db; 	T(ADD(ax, *(dw*)(raddr(ds,bx+di+0x0B4))));	// 14946 add     ax, [bx+di+0B4h] ;~ 0613:39DB
cs=0x613;eip=0x0039df; 	T(ADD(ax, cx));	// 14947 add     ax, cx ;~ 0613:39DF
cs=0x613;eip=0x0039e1; 	T(CWD);	// 14948 cwd ;~ 0613:39E1
cs=0x613;eip=0x0039e2; 	X(PUSH(dx));	// 14949 push    dx ;~ 0613:39E2
cs=0x613;eip=0x0039e3; 	X(PUSH(ax));	// 14950 push    ax ;~ 0613:39E3
cs=0x613;eip=0x0039e4; 	J(CALLF(__aflmul,0));	// 14951 call    __aFlmul ;~ 0613:39E4
cs=0x613;eip=0x0039e9; 	T(MOV(cl, 0x0A));	// 14952 mov     cl, 0Ah ;~ 0613:39E9
loc_180fb:
	// 5232 
cs=0x613;eip=0x0039eb; 	T(SAR(dx, 1));	// 14955 sar     dx, 1 ;~ 0613:39EB
cs=0x613;eip=0x0039ed; 	T(RCR(ax, 1));	// 14956 rcr     ax, 1 ;~ 0613:39ED
cs=0x613;eip=0x0039ef; 	T(DEC(cl));	// 14957 dec     cl ;~ 0613:39EF
cs=0x613;eip=0x0039f1; 	J(JNZ(loc_180fb));	// 14958 jnz     short loc_180FB ;~ 0613:39F1
cs=0x613;eip=0x0039f3; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 14959 mov     [bp+var_6], ax ;~ 0613:39F3
cs=0x613;eip=0x0039f6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14960 mov     bx, [bp+arg_0] ;~ 0613:39F6
cs=0x613;eip=0x0039f9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 14961 mov     ax, [bp+var_4] ;~ 0613:39F9
cs=0x613;eip=0x0039fc; 	X(MOV(*(dw*)(raddr(ds,bx+0x44)), ax));	// 14962 mov     [bx+44h], ax ;~ 0613:39FC
cs=0x613;eip=0x0039ff; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14963 mov     bx, [bp+arg_0] ;~ 0613:39FF
cs=0x613;eip=0x003a02; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 14964 mov     ax, [bp+var_6] ;~ 0613:3A02
cs=0x613;eip=0x003a05; 	X(MOV(*(dw*)(raddr(ds,bx+0x46)), ax));	// 14965 mov     [bx+46h], ax ;~ 0613:3A05
cs=0x613;eip=0x003a08; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0));	// 14966 cmp     [bp+arg_4], 0 ;~ 0613:3A08
cs=0x613;eip=0x003a0c; 	J(JNZ(loc_18121));	// 14967 jnz     short loc_18121 ;~ 0613:3A0C
cs=0x613;eip=0x003a0e; 	J(JMP(loc_1835e));	// 14968 jmp     loc_1835E ;~ 0613:3A0E
loc_18121:
	// 5233 
cs=0x613;eip=0x003a11; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14972 mov     bx, [bp+arg_0] ;~ 0613:3A11
cs=0x613;eip=0x003a14; 	T(CMP(*(dw*)(raddr(ds,bx+0x20)), 0));	// 14973 cmp     word ptr [bx+20h], 0 ;~ 0613:3A14
cs=0x613;eip=0x003a18; 	J(JNZ(loc_18168));	// 14974 jnz     short loc_18168 ;~ 0613:3A18
cs=0x613;eip=0x003a1a; 	T(MOV(al, *(raddr(ds,bx+0x18))));	// 14975 mov     al, [bx+18h] ;~ 0613:3A1A
cs=0x613;eip=0x003a1d; 	T(SUB(ah, ah));	// 14976 sub     ah, ah ;~ 0613:3A1D
cs=0x613;eip=0x003a1f; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 14977 mov     [bp+var_8], ax ;~ 0613:3A1F
cs=0x613;eip=0x003a22; 	T(CMP(ax, 0x7F));	// 14978 cmp     ax, 7Fh ;~ 0613:3A22
cs=0x613;eip=0x003a25; 	J(JLE(loc_1813c));	// 14979 jle     short loc_1813C ;~ 0613:3A25
cs=0x613;eip=0x003a27; 	X(SUB(*(dw*)(raddr(ss,bp+var_8)), 0x100));	// 14980 sub     [bp+var_8], 100h ;~ 0613:3A27
loc_1813c:
	// 5234 
cs=0x613;eip=0x003a2c; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 14983 cmp     [bp+var_8], 0 ;~ 0613:3A2C
cs=0x613;eip=0x003a30; 	J(JZ(loc_18168));	// 14984 jz      short loc_18168 ;~ 0613:3A30
cs=0x613;eip=0x003a32; 	J(JGE(loc_1814c));	// 14985 jge     short loc_1814C ;~ 0613:3A32
cs=0x613;eip=0x003a34; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 14986 mov     ax, [bp+var_8] ;~ 0613:3A34
cs=0x613;eip=0x003a37; 	T(NEG(ax));	// 14987 neg     ax ;~ 0613:3A37
cs=0x613;eip=0x003a39; 	J(JMP(loc_1814f));	// 14988 jmp     short loc_1814F ;~ 0613:3A39
loc_1814c:
	// 5235 
cs=0x613;eip=0x003a3c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 14993 mov     ax, [bp+var_8] ;~ 0613:3A3C
loc_1814f:
	// 5236 
cs=0x613;eip=0x003a3f; 	T(CMP(ax, 8));	// 14996 cmp     ax, 8 ;~ 0613:3A3F
cs=0x613;eip=0x003a42; 	J(JGE(loc_18168));	// 14997 jge     short loc_18168 ;~ 0613:3A42
cs=0x613;eip=0x003a44; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 14998 cmp     [bp+var_8], 0 ;~ 0613:3A44
cs=0x613;eip=0x003a48; 	J(JLE(loc_18162));	// 14999 jle     short loc_18162 ;~ 0613:3A48
cs=0x613;eip=0x003a4a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15000 mov     bx, [bp+arg_0] ;~ 0613:3A4A
cs=0x613;eip=0x003a4d; 	X(DEC(*(dw*)(raddr(ds,bx+0x18))));	// 15001 dec     word ptr [bx+18h] ;~ 0613:3A4D
cs=0x613;eip=0x003a50; 	J(JMP(loc_18168));	// 15002 jmp     short loc_18168 ;~ 0613:3A50
loc_18162:
	// 5237 
cs=0x613;eip=0x003a52; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15006 mov     bx, [bp+arg_0] ;~ 0613:3A52
cs=0x613;eip=0x003a55; 	X(INC(*(dw*)(raddr(ds,bx+0x18))));	// 15007 inc     word ptr [bx+18h] ;~ 0613:3A55
loc_18168:
	// 5238 
cs=0x613;eip=0x003a58; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 15011 mov     ax, [bp+var_6] ;~ 0613:3A58
cs=0x613;eip=0x003a5b; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), ax));	// 15012 cmp     [bp+var_4], ax ;~ 0613:3A5B
cs=0x613;eip=0x003a5e; 	J(JLE(loc_181ce));	// 15013 jle     short loc_181CE ;~ 0613:3A5E
cs=0x613;eip=0x003a60; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15014 mov     bx, [bp+arg_0] ;~ 0613:3A60
cs=0x613;eip=0x003a63; 	X(MOV(*(raddr(ds,bx+0x0C7)), 1));	// 15015 mov     byte ptr [bx+0C7h], 1 ;~ 0613:3A63
cs=0x613;eip=0x003a68; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 15016 mov     ax, [bp+var_2] ;~ 0613:3A68
cs=0x613;eip=0x003a6b; 	T(CWD);	// 15017 cwd ;~ 0613:3A6B
cs=0x613;eip=0x003a6c; 	X(PUSH(dx));	// 15018 push    dx ;~ 0613:3A6C
cs=0x613;eip=0x003a6d; 	X(PUSH(ax));	// 15019 push    ax ;~ 0613:3A6D
cs=0x613;eip=0x003a6e; 	T(CWD);	// 15020 cwd ;~ 0613:3A6E
cs=0x613;eip=0x003a6f; 	X(PUSH(dx));	// 15021 push    dx ;~ 0613:3A6F
cs=0x613;eip=0x003a70; 	X(PUSH(ax));	// 15022 push    ax ;~ 0613:3A70
cs=0x613;eip=0x003a71; 	J(CALLF(__aflmul,0));	// 15023 call    __aFlmul ;~ 0613:3A71
cs=0x613;eip=0x003a76; 	X(PUSH(dx));	// 15024 push    dx ;~ 0613:3A76
cs=0x613;eip=0x003a77; 	X(PUSH(ax));	// 15025 push    ax ;~ 0613:3A77
cs=0x613;eip=0x003a78; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 15026 mov     ax, [bp+var_6] ;~ 0613:3A78
cs=0x613;eip=0x003a7b; 	T(CWD);	// 15027 cwd ;~ 0613:3A7B
cs=0x613;eip=0x003a7c; 	T(MOV(dh, dl));	// 15028 mov     dh, dl ;~ 0613:3A7C
cs=0x613;eip=0x003a7e; 	T(MOV(dl, ah));	// 15029 mov     dl, ah ;~ 0613:3A7E
cs=0x613;eip=0x003a80; 	T(MOV(ah, al));	// 15030 mov     ah, al ;~ 0613:3A80
cs=0x613;eip=0x003a82; 	T(SUB(al, al));	// 15031 sub     al, al          ; *2^8 ;~ 0613:3A82
cs=0x613;eip=0x003a84; 	X(PUSH(dx));	// 15032 push    dx ;~ 0613:3A84
cs=0x613;eip=0x003a85; 	X(PUSH(ax));	// 15033 push    ax ;~ 0613:3A85
cs=0x613;eip=0x003a86; 	J(CALLF(__afldiv,0));	// 15034 call    __aFldiv ;~ 0613:3A86
cs=0x613;eip=0x003a8b; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 15035 mov     [bp+var_C], ax ;~ 0613:3A8B
cs=0x613;eip=0x003a8e; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0));	// 15036 cmp     [bp+var_10], 0 ;~ 0613:3A8E
cs=0x613;eip=0x003a92; 	J(JGE(loc_181ad));	// 15037 jge     short loc_181AD ;~ 0613:3A92
cs=0x613;eip=0x003a94; 	T(MOV(ax, 0x0FFFF));	// 15038 mov     ax, 0FFFFh ;~ 0613:3A94
cs=0x613;eip=0x003a97; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_c))));	// 15039 imul    [bp+var_C] ;~ 0613:3A97
cs=0x613;eip=0x003a9a; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 15040 mov     [bp+var_C], ax ;~ 0613:3A9A
loc_181ad:
	// 5239 
cs=0x613;eip=0x003a9d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 15043 mov     ax, [bp+var_C] ;~ 0613:3A9D
cs=0x613;eip=0x003aa0; 	T(MOV(cx, ax));	// 15044 mov     cx, ax ;~ 0613:3AA0
cs=0x613;eip=0x003aa2; 	T(SHL(ax, 1));	// 15045 shl     ax, 1 ;~ 0613:3AA2
cs=0x613;eip=0x003aa4; 	T(ADD(ax, cx));	// 15046 add     ax, cx ;~ 0613:3AA4
cs=0x613;eip=0x003aa6; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_10))));	// 15047 add     ax, [bp+var_10] ;~ 0613:3AA6
cs=0x613;eip=0x003aa9; 	T(SAR(ax, 1));	// 15048 sar     ax, 1 ;~ 0613:3AA9
cs=0x613;eip=0x003aab; 	T(SAR(ax, 1));	// 15049 sar     ax, 1 ;~ 0613:3AAB
cs=0x613;eip=0x003aad; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 15050 mov     [bp+var_C], ax ;~ 0613:3AAD
cs=0x613;eip=0x003ab0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15051 mov     bx, [bp+arg_0] ;~ 0613:3AB0
cs=0x613;eip=0x003ab3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 15052 mov     ax, [bp+var_10] ;~ 0613:3AB3
cs=0x613;eip=0x003ab6; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_c))));	// 15053 sub     ax, [bp+var_C] ;~ 0613:3AB6
cs=0x613;eip=0x003ab9; 	X(MOV(*(dw*)(raddr(ds,bx+0x42)), ax));	// 15054 mov     [bx+42h], ax ;~ 0613:3AB9
cs=0x613;eip=0x003abc; 	J(JMP(loc_18207));	// 15055 jmp     short loc_18207 ;~ 0613:3ABC
loc_181ce:
	// 5240 
cs=0x613;eip=0x003abe; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15059 mov     bx, [bp+arg_0] ;~ 0613:3ABE
cs=0x613;eip=0x003ac1; 	X(MOV(*(raddr(ds,bx+0x0C7)), 0));	// 15060 mov     byte ptr [bx+0C7h], 0 ;~ 0613:3AC1
cs=0x613;eip=0x003ac6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15061 mov     bx, [bp+arg_0] ;~ 0613:3AC6
cs=0x613;eip=0x003ac9; 	T(CMP(*(dw*)(raddr(ds,bx+0x42)), 0));	// 15062 cmp     word ptr [bx+42h], 0 ;~ 0613:3AC9
cs=0x613;eip=0x003acd; 	J(JZ(loc_18207));	// 15063 jz      short loc_18207 ;~ 0613:3ACD
cs=0x613;eip=0x003acf; 	T(MOV(si, bx));	// 15064 mov     si, bx ;~ 0613:3ACF
cs=0x613;eip=0x003ad1; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x42))));	// 15065 mov     ax, [si+42h] ;~ 0613:3AD1
cs=0x613;eip=0x003ad4; 	T(MOV(cl, 4));	// 15066 mov     cl, 4 ;~ 0613:3AD4
cs=0x613;eip=0x003ad6; 	T(SAR(ax, cl));	// 15067 sar     ax, cl ;~ 0613:3AD6
cs=0x613;eip=0x003ad8; 	X(SUB(*(dw*)(raddr(ds,bx+0x42)), ax));	// 15068 sub     [bx+42h], ax ;~ 0613:3AD8
cs=0x613;eip=0x003adb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15069 mov     bx, [bp+arg_0] ;~ 0613:3ADB
cs=0x613;eip=0x003ade; 	T(CMP(*(dw*)(raddr(ds,bx+0x42)), 0));	// 15070 cmp     word ptr [bx+42h], 0 ;~ 0613:3ADE
cs=0x613;eip=0x003ae2; 	J(JGE(loc_181fc));	// 15071 jge     short loc_181FC ;~ 0613:3AE2
cs=0x613;eip=0x003ae4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x42))));	// 15072 mov     ax, [bx+42h] ;~ 0613:3AE4
cs=0x613;eip=0x003ae7; 	T(NEG(ax));	// 15073 neg     ax ;~ 0613:3AE7
cs=0x613;eip=0x003ae9; 	J(JMP(loc_181ff));	// 15074 jmp     short loc_181FF ;~ 0613:3AE9
loc_181fc:
	// 5241 
cs=0x613;eip=0x003aec; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x42))));	// 15079 mov     ax, [bx+42h] ;~ 0613:3AEC
loc_181ff:
	// 5242 
cs=0x613;eip=0x003aef; 	T(CMP(ax, 0x10));	// 15082 cmp     ax, 10h ;~ 0613:3AEF
cs=0x613;eip=0x003af2; 	J(JGE(loc_18207));	// 15083 jge     short loc_18207 ;~ 0613:3AF2
cs=0x613;eip=0x003af4; 	X(SAR(*(dw*)(raddr(ds,bx+0x42)), 1));	// 15084 sar     word ptr [bx+42h], 1 ;~ 0613:3AF4
loc_18207:
	// 5243 
cs=0x613;eip=0x003af7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15088 mov     bx, [bp+arg_0] ;~ 0613:3AF7
cs=0x613;eip=0x003afa; 	T(CMP(*(dw*)(raddr(ds,bx+0x3E)), 0));	// 15089 cmp     word ptr [bx+3Eh], 0 ;~ 0613:3AFA
cs=0x613;eip=0x003afe; 	J(JNZ(loc_18220));	// 15090 jnz     short loc_18220 ;~ 0613:3AFE
cs=0x613;eip=0x003b00; 	T(CMP(*(raddr(ds,bx+0x0C9)), 1));	// 15091 cmp     byte ptr [bx+0C9h], 1 ;~ 0613:3B00
cs=0x613;eip=0x003b05; 	J(JZ(loc_18220));	// 15092 jz      short loc_18220 ;~ 0613:3B05
cs=0x613;eip=0x003b07; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 15093 mov     ax, [bp+var_C] ;~ 0613:3B07
cs=0x613;eip=0x003b0a; 	X(MOV(*(dw*)(raddr(ds,bx+0x40)), ax));	// 15094 mov     [bx+40h], ax ;~ 0613:3B0A
cs=0x613;eip=0x003b0d; 	J(JMP(loc_18228));	// 15095 jmp     short loc_18228 ;~ 0613:3B0D
loc_18220:
	// 5244 
cs=0x613;eip=0x003b10; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15101 mov     bx, [bp+arg_0] ;~ 0613:3B10
cs=0x613;eip=0x003b13; 	X(MOV(*(dw*)(raddr(ds,bx+0x40)), 0));	// 15102 mov     word ptr [bx+40h], 0 ;~ 0613:3B13
loc_18228:
	// 5245 
cs=0x613;eip=0x003b18; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15105 mov     bx, [bp+arg_0] ;~ 0613:3B18
cs=0x613;eip=0x003b1b; 	T(CMP(*(dw*)(raddr(ds,bx+0x1C)), 0));	// 15106 cmp     word ptr [bx+1Ch], 0 ;~ 0613:3B1B
cs=0x613;eip=0x003b1f; 	J(JNZ(loc_18234));	// 15107 jnz     short loc_18234 ;~ 0613:3B1F
cs=0x613;eip=0x003b21; 	J(JMP(loc_182bd));	// 15108 jmp     loc_182BD ;~ 0613:3B21
loc_18234:
	// 5246 
cs=0x613;eip=0x003b24; 	J(JGE(loc_1823e));	// 15112 jge     short loc_1823E ;~ 0613:3B24
cs=0x613;eip=0x003b26; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1C))));	// 15113 mov     ax, [bx+1Ch] ;~ 0613:3B26
cs=0x613;eip=0x003b29; 	T(NEG(ax));	// 15114 neg     ax ;~ 0613:3B29
cs=0x613;eip=0x003b2b; 	J(JMP(loc_18241));	// 15115 jmp     short loc_18241 ;~ 0613:3B2B
loc_1823e:
	// 5247 
cs=0x613;eip=0x003b2e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1C))));	// 15120 mov     ax, [bx+1Ch] ;~ 0613:3B2E
loc_18241:
	// 5248 
cs=0x613;eip=0x003b31; 	T(CMP(ax, 4));	// 15123 cmp     ax, 4 ;~ 0613:3B31
cs=0x613;eip=0x003b34; 	J(JLE(loc_182bd));	// 15124 jle     short loc_182BD ;~ 0613:3B34
cs=0x613;eip=0x003b36; 	T(MOV(al, *(raddr(ds,bx+2))));	// 15125 mov     al, [bx+2] ;~ 0613:3B36
cs=0x613;eip=0x003b39; 	X(MOV(*(raddr(ss,bp+var_a)), al));	// 15126 mov     [bp+var_A], al ;~ 0613:3B39
cs=0x613;eip=0x003b3c; 	T(MOV(al, *(raddr(ds,bx+0x0A))));	// 15127 mov     al, [bx+0Ah] ;~ 0613:3B3C
cs=0x613;eip=0x003b3f; 	X(MOV(*(raddr(ss,bp+var_e)), al));	// 15128 mov     [bp+var_E], al ;~ 0613:3B3F
cs=0x613;eip=0x003b42; 	T(MOV(bl, al));	// 15129 mov     bl, al          ; hi-word > word : div by 2^8 ;~ 0613:3B42
cs=0x613;eip=0x003b44; 	T(SUB(bh, bh));	// 15130 sub     bh, bh ;~ 0613:3B44
cs=0x613;eip=0x003b46; 	T(SHL(bx, 1));	// 15131 shl     bx, 1 ;~ 0613:3B46
cs=0x613;eip=0x003b48; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 15132 mov     bx, terrainrows[bx] ;~ 0613:3B48
cs=0x613;eip=0x003b4c; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 15133 mov     al, [bp+var_A] ;~ 0613:3B4C
cs=0x613;eip=0x003b4f; 	T(SUB(ah, ah));	// 15134 sub     ah, ah ;~ 0613:3B4F
cs=0x613;eip=0x003b51; 	T(ADD(bx, ax));	// 15135 add     bx, ax ;~ 0613:3B51
cs=0x613;eip=0x003b53; 	T(LES(si, td14_elem_map_main));	// 15136 les     si, td14_elem_map_main ;~ 0613:3B53
cs=0x613;eip=0x003b57; 	T(MOV(al, *(raddr(es,bx+si))));	// 15137 mov     al, es:[bx+si] ;~ 0613:3B57
cs=0x613;eip=0x003b5a; 	T(CMP(ax, 0x0FD));	// 15138 cmp     ax, 0FDh ; 'ı' ;~ 0613:3B5A
cs=0x613;eip=0x003b5d; 	J(JZ(loc_1827c));	// 15139 jz      short loc_1827C ;~ 0613:3B5D
cs=0x613;eip=0x003b5f; 	T(CMP(ax, 0x0FE));	// 15140 cmp     ax, 0FEh ; 'ş' ;~ 0613:3B5F
cs=0x613;eip=0x003b62; 	J(JZ(loc_1827f));	// 15141 jz      short loc_1827F ;~ 0613:3B62
cs=0x613;eip=0x003b64; 	T(CMP(ax, 0x0FF));	// 15142 cmp     ax, 0FFh ;~ 0613:3B64
cs=0x613;eip=0x003b67; 	J(JZ(loc_182a8));	// 15143 jz      short loc_182A8 ;~ 0613:3B67
cs=0x613;eip=0x003b69; 	J(JMP(loc_18282));	// 15144 jmp     short loc_18282 ;~ 0613:3B69
loc_1827c:
	// 5249 
cs=0x613;eip=0x003b6c; 	X(DEC(*(raddr(ss,bp+var_a))));	// 15149 dec     [bp+var_A] ;~ 0613:3B6C
loc_1827f:
	// 5250 
cs=0x613;eip=0x003b6f; 	X(INC(*(raddr(ss,bp+var_e))));	// 15152 inc     [bp+var_E] ;~ 0613:3B6F
loc_18282:
	// 5251 
cs=0x613;eip=0x003b72; 	T(MOV(bl, *(raddr(ss,bp+var_e))));	// 15156 mov     bl, [bp+var_E] ;~ 0613:3B72
cs=0x613;eip=0x003b75; 	T(SUB(bh, bh));	// 15157 sub     bh, bh ;~ 0613:3B75
cs=0x613;eip=0x003b77; 	T(SHL(bx, 1));	// 15158 shl     bx, 1 ;~ 0613:3B77
cs=0x613;eip=0x003b79; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 15159 mov     bx, terrainrows[bx] ;~ 0613:3B79
cs=0x613;eip=0x003b7d; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 15160 mov     al, [bp+var_A] ;~ 0613:3B7D
cs=0x613;eip=0x003b80; 	T(SUB(ah, ah));	// 15161 sub     ah, ah ;~ 0613:3B80
cs=0x613;eip=0x003b82; 	T(ADD(bx, ax));	// 15162 add     bx, ax ;~ 0613:3B82
cs=0x613;eip=0x003b84; 	T(LES(si, td14_elem_map_main));	// 15163 les     si, td14_elem_map_main ;~ 0613:3B84
cs=0x613;eip=0x003b88; 	T(MOV(al, *(raddr(es,bx+si))));	// 15164 mov     al, es:[bx+si] ;~ 0613:3B88
cs=0x613;eip=0x003b8b; 	T(CMP(ax, 0x34));	// 15165 cmp     ax, 34h ; '4' ;~ 0613:3B8B
cs=0x613;eip=0x003b8e; 	J(JC(loc_182bd));	// 15166 jb      short loc_182BD ;~ 0613:3B8E
cs=0x613;eip=0x003b90; 	T(CMP(ax, 0x37));	// 15167 cmp     ax, 37h ; '7' ;~ 0613:3B90
cs=0x613;eip=0x003b93; 	J(JBE(loc_182ae));	// 15168 jbe     short loc_182AE ;~ 0613:3B93
cs=0x613;eip=0x003b95; 	J(JMP(loc_182bd));	// 15169 jmp     short loc_182BD ;~ 0613:3B95
loc_182a8:
	// 5252 
cs=0x613;eip=0x003b98; 	X(DEC(*(raddr(ss,bp+var_a))));	// 15174 dec     [bp+var_A] ;~ 0613:3B98
cs=0x613;eip=0x003b9b; 	J(JMP(loc_18282));	// 15175 jmp     short loc_18282 ;~ 0613:3B9B
loc_182ae:
	// 5253 
cs=0x613;eip=0x003b9e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15180 mov     bx, [bp+arg_0] ;~ 0613:3B9E
cs=0x613;eip=0x003ba1; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1C))));	// 15181 mov     ax, [bx+1Ch] ;~ 0613:3BA1
cs=0x613;eip=0x003ba4; 	T(CWD);	// 15182 cwd ;~ 0613:3BA4
cs=0x613;eip=0x003ba5; 	T(MOV(cx, 5));	// 15183 mov     cx, 5 ;~ 0613:3BA5
cs=0x613;eip=0x003ba8; 	T(IDIV2(cx));	// 15184 idiv    cx ;~ 0613:3BA8
cs=0x613;eip=0x003baa; 	X(ADD(*(dw*)(raddr(ds,bx+0x40)), ax));	// 15185 add     [bx+40h], ax ;~ 0613:3BAA
loc_182bd:
	// 5254 
cs=0x613;eip=0x003bad; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 15189 mov     ax, [bp+var_6] ;~ 0613:3BAD
cs=0x613;eip=0x003bb0; 	T(ADD(ax, 0x3E8));	// 15190 add     ax, 3E8h ;~ 0613:3BB0
cs=0x613;eip=0x003bb3; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4))));	// 15191 cmp     ax, [bp+var_4] ;~ 0613:3BB3
cs=0x613;eip=0x003bb6; 	J(JGE(loc_182ea));	// 15192 jge     short loc_182EA ;~ 0613:3BB6
cs=0x613;eip=0x003bb8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 15193 mov     ax, [bp+var_C] ;~ 0613:3BB8
cs=0x613;eip=0x003bbb; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_10))));	// 15194 sub     ax, [bp+var_10] ;~ 0613:3BBB
cs=0x613;eip=0x003bbe; 	T(CWD);	// 15195 cwd ;~ 0613:3BBE
cs=0x613;eip=0x003bbf; 	T(MOV(cx, 0x0E));	// 15196 mov     cx, 0Eh ;~ 0613:3BBF
cs=0x613;eip=0x003bc2; 	T(IDIV2(cx));	// 15197 idiv    cx ;~ 0613:3BC2
cs=0x613;eip=0x003bc4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15198 mov     bx, [bp+arg_0] ;~ 0613:3BC4
cs=0x613;eip=0x003bc7; 	X(ADD(*(dw*)(raddr(ds,bx+0x3E)), ax));	// 15199 add     [bx+3Eh], ax ;~ 0613:3BC7
cs=0x613;eip=0x003bca; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15200 mov     bx, [bp+arg_0] ;~ 0613:3BCA
cs=0x613;eip=0x003bcd; 	T(MOV(cx, 2));	// 15201 mov     cx, 2 ;~ 0613:3BCD
cs=0x613;eip=0x003bd0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x3E))));	// 15202 mov     ax, [bx+3Eh] ;~ 0613:3BD0
cs=0x613;eip=0x003bd3; 	T(CWD);	// 15203 cwd ;~ 0613:3BD3
cs=0x613;eip=0x003bd4; 	T(IDIV2(cx));	// 15204 idiv    cx ;~ 0613:3BD4
cs=0x613;eip=0x003bd6; 	J(JMP(loc_1838b));	// 15205 jmp     loc_1838B ;~ 0613:3BD6
loc_182ea:
	// 5255 
cs=0x613;eip=0x003bda; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15210 mov     bx, [bp+arg_0] ;~ 0613:3BDA
cs=0x613;eip=0x003bdd; 	T(CMP(*(dw*)(raddr(ds,bx+0x3E)), 0));	// 15211 cmp     word ptr [bx+3Eh], 0 ;~ 0613:3BDD
cs=0x613;eip=0x003be1; 	J(JNZ(loc_182f6));	// 15212 jnz     short loc_182F6 ;~ 0613:3BE1
cs=0x613;eip=0x003be3; 	J(JMP(loc_1838e));	// 15213 jmp     loc_1838E ;~ 0613:3BE3
loc_182f6:
	// 5256 
cs=0x613;eip=0x003be6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 15217 mov     ax, [bp+var_C] ;~ 0613:3BE6
cs=0x613;eip=0x003be9; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_10))));	// 15218 sub     ax, [bp+var_10] ;~ 0613:3BE9
cs=0x613;eip=0x003bec; 	T(CWD);	// 15219 cwd ;~ 0613:3BEC
cs=0x613;eip=0x003bed; 	T(MOV(cx, 0x0E));	// 15220 mov     cx, 0Eh ;~ 0613:3BED
cs=0x613;eip=0x003bf0; 	T(IDIV2(cx));	// 15221 idiv    cx ;~ 0613:3BF0
cs=0x613;eip=0x003bf2; 	X(ADD(*(dw*)(raddr(ds,bx+0x3E)), ax));	// 15222 add     [bx+3Eh], ax ;~ 0613:3BF2
cs=0x613;eip=0x003bf5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15223 mov     bx, [bp+arg_0] ;~ 0613:3BF5
cs=0x613;eip=0x003bf8; 	T(MOV(cx, 2));	// 15224 mov     cx, 2 ;~ 0613:3BF8
cs=0x613;eip=0x003bfb; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x3E))));	// 15225 mov     ax, [bx+3Eh] ;~ 0613:3BFB
cs=0x613;eip=0x003bfe; 	T(CWD);	// 15226 cwd ;~ 0613:3BFE
cs=0x613;eip=0x003bff; 	T(IDIV2(cx));	// 15227 idiv    cx ;~ 0613:3BFF
cs=0x613;eip=0x003c01; 	X(MOV(*(dw*)(raddr(ds,bx+0x3E)), ax));	// 15228 mov     [bx+3Eh], ax ;~ 0613:3C01
cs=0x613;eip=0x003c04; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15229 mov     bx, [bp+arg_0] ;~ 0613:3C04
cs=0x613;eip=0x003c07; 	T(CMP(*(dw*)(raddr(ds,bx+0x3E)), 0));	// 15230 cmp     word ptr [bx+3Eh], 0 ;~ 0613:3C07
cs=0x613;eip=0x003c0b; 	J(JNZ(loc_1838e));	// 15231 jnz     short loc_1838E ;~ 0613:3C0B
cs=0x613;eip=0x003c0d; 	X(PUSH(*(dw*)(raddr(ds,bx+0x2C))));	// 15232 push    word ptr [bx+2Ch] ;~ 0613:3C0D
cs=0x613;eip=0x003c10; 	X(PUSH(*(dw*)(raddr(ds,bx+0x36))));	// 15233 push    word ptr [bx+36h] ;~ 0613:3C10
cs=0x613;eip=0x003c13; 	J(CALLF(cos_fast,0));	// 15234 call    cos_fast ;~ 0613:3C13
cs=0x613;eip=0x003c18; 	T(ADD(sp, 2));	// 15235 add     sp, 2 ;~ 0613:3C18
cs=0x613;eip=0x003c1b; 	X(PUSH(ax));	// 15236 push    ax ;~ 0613:3C1B
cs=0x613;eip=0x003c1c; 	J(CALLF(multiply_and_scale,0));	// 15237 call    multiply_and_scale ;~ 0613:3C1C
cs=0x613;eip=0x003c21; 	T(ADD(sp, 4));	// 15238 add     sp, 4 ;~ 0613:3C21
cs=0x613;eip=0x003c24; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15239 mov     bx, [bp+arg_0] ;~ 0613:3C24
cs=0x613;eip=0x003c27; 	X(MOV(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 15240 mov     [bx+2Ch], ax ;~ 0613:3C27
cs=0x613;eip=0x003c2a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15241 mov     bx, [bp+arg_0] ;~ 0613:3C2A
cs=0x613;eip=0x003c2d; 	X(PUSH(*(dw*)(raddr(ds,bx+0x36))));	// 15242 push    word ptr [bx+36h] ;~ 0613:3C2D
cs=0x613;eip=0x003c30; 	J(CALLF(cos_fast,0));	// 15243 call    cos_fast ;~ 0613:3C30
cs=0x613;eip=0x003c35; 	T(ADD(sp, 2));	// 15244 add     sp, 2 ;~ 0613:3C35
cs=0x613;eip=0x003c38; 	T(OR(ax, ax));	// 15245 or      ax, ax ;~ 0613:3C38
cs=0x613;eip=0x003c3a; 	J(JGE(loc_18354));	// 15246 jge     short loc_18354 ;~ 0613:3C3A
cs=0x613;eip=0x003c3c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15247 mov     bx, [bp+arg_0] ;~ 0613:3C3C
cs=0x613;eip=0x003c3f; 	X(MOV(*(dw*)(raddr(ds,bx+0x2C)), 0));	// 15248 mov     word ptr [bx+2Ch], 0 ;~ 0613:3C3F
loc_18354:
	// 5257 
cs=0x613;eip=0x003c44; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15251 mov     bx, [bp+arg_0] ;~ 0613:3C44
cs=0x613;eip=0x003c47; 	X(MOV(*(dw*)(raddr(ds,bx+0x36)), 0));	// 15252 mov     word ptr [bx+36h], 0 ;~ 0613:3C47
cs=0x613;eip=0x003c4c; 	J(JMP(loc_1838e));	// 15253 jmp     short loc_1838E ;~ 0613:3C4C
loc_1835e:
	// 5258 
cs=0x613;eip=0x003c4e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15257 mov     bx, [bp+arg_0] ;~ 0613:3C4E
cs=0x613;eip=0x003c51; 	T(MOV(si, bx));	// 15258 mov     si, bx ;~ 0613:3C51
cs=0x613;eip=0x003c53; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x20))));	// 15259 mov     ax, [si+20h] ;~ 0613:3C53
cs=0x613;eip=0x003c56; 	T(SHL(ax, 1));	// 15260 shl     ax, 1 ;~ 0613:3C56
cs=0x613;eip=0x003c58; 	T(SHL(ax, 1));	// 15261 shl     ax, 1 ;~ 0613:3C58
cs=0x613;eip=0x003c5a; 	X(MOV(*(dw*)(raddr(ds,bx+0x40)), ax));	// 15262 mov     [bx+40h], ax ;~ 0613:3C5A
cs=0x613;eip=0x003c5d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15263 mov     bx, [bp+arg_0] ;~ 0613:3C5D
cs=0x613;eip=0x003c60; 	T(CMP(*(dw*)(raddr(ds,bx+0x3E)), 0));	// 15264 cmp     word ptr [bx+3Eh], 0 ;~ 0613:3C60
cs=0x613;eip=0x003c64; 	J(JZ(loc_1838e));	// 15265 jz      short loc_1838E ;~ 0613:3C64
cs=0x613;eip=0x003c66; 	T(MOV(si, bx));	// 15266 mov     si, bx ;~ 0613:3C66
cs=0x613;eip=0x003c68; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x3E))));	// 15267 mov     ax, [si+3Eh] ;~ 0613:3C68
cs=0x613;eip=0x003c6b; 	T(MOV(cx, ax));	// 15268 mov     cx, ax ;~ 0613:3C6B
cs=0x613;eip=0x003c6d; 	T(SHL(ax, 1));	// 15269 shl     ax, 1 ;~ 0613:3C6D
cs=0x613;eip=0x003c6f; 	T(SHL(ax, 1));	// 15270 shl     ax, 1 ;~ 0613:3C6F
cs=0x613;eip=0x003c71; 	T(SHL(ax, 1));	// 15271 shl     ax, 1 ;~ 0613:3C71
cs=0x613;eip=0x003c73; 	T(SHL(ax, 1));	// 15272 shl     ax, 1 ;~ 0613:3C73
cs=0x613;eip=0x003c75; 	T(SUB(ax, cx));	// 15273 sub     ax, cx ;~ 0613:3C75
cs=0x613;eip=0x003c77; 	T(MOV(cl, 4));	// 15274 mov     cl, 4 ;~ 0613:3C77
cs=0x613;eip=0x003c79; 	T(SAR(ax, cl));	// 15275 sar     ax, cl ;~ 0613:3C79
loc_1838b:
	// 5259 
cs=0x613;eip=0x003c7b; 	X(MOV(*(dw*)(raddr(ds,bx+0x3E)), ax));	// 15278 mov     [bx+3Eh], ax ;~ 0613:3C7B
loc_1838e:
	// 5260 
cs=0x613;eip=0x003c7e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15282 mov     bx, [bp+arg_0] ;~ 0613:3C7E
cs=0x613;eip=0x003c81; 	T(CMP(*(dw*)(raddr(ds,bx+0x36)), 0));	// 15283 cmp     word ptr [bx+36h], 0 ;~ 0613:3C81
cs=0x613;eip=0x003c85; 	J(JZ(loc_183b5));	// 15284 jz      short loc_183B5 ;~ 0613:3C85
cs=0x613;eip=0x003c87; 	T(CMP(*(dw*)(raddr(ds,bx+0x3E)), 0));	// 15285 cmp     word ptr [bx+3Eh], 0 ;~ 0613:3C87
cs=0x613;eip=0x003c8b; 	J(JNZ(loc_183b5));	// 15286 jnz     short loc_183B5 ;~ 0613:3C8B
cs=0x613;eip=0x003c8d; 	T(MOV(si, bx));	// 15287 mov     si, bx ;~ 0613:3C8D
cs=0x613;eip=0x003c8f; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x36))));	// 15288 mov     ax, [si+36h] ;~ 0613:3C8F
cs=0x613;eip=0x003c92; 	T(MOV(cx, ax));	// 15289 mov     cx, ax ;~ 0613:3C92
cs=0x613;eip=0x003c94; 	T(SHL(ax, 1));	// 15290 shl     ax, 1 ;~ 0613:3C94
cs=0x613;eip=0x003c96; 	T(SHL(ax, 1));	// 15291 shl     ax, 1 ;~ 0613:3C96
cs=0x613;eip=0x003c98; 	T(SHL(ax, 1));	// 15292 shl     ax, 1 ;~ 0613:3C98
cs=0x613;eip=0x003c9a; 	T(SHL(ax, 1));	// 15293 shl     ax, 1 ;~ 0613:3C9A
cs=0x613;eip=0x003c9c; 	T(SUB(ax, cx));	// 15294 sub     ax, cx ;~ 0613:3C9C
cs=0x613;eip=0x003c9e; 	T(MOV(cl, 4));	// 15295 mov     cl, 4 ;~ 0613:3C9E
cs=0x613;eip=0x003ca0; 	T(SAR(ax, cl));	// 15296 sar     ax, cl ;~ 0613:3CA0
cs=0x613;eip=0x003ca2; 	X(MOV(*(dw*)(raddr(ds,bx+0x36)), ax));	// 15297 mov     [bx+36h], ax ;~ 0613:3CA2
loc_183b5:
	// 5261 
cs=0x613;eip=0x003ca5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15301 mov     bx, [bp+arg_0] ;~ 0613:3CA5
cs=0x613;eip=0x003ca8; 	T(CMP(*(dw*)(raddr(ds,bx+0x3E)), 0));	// 15302 cmp     word ptr [bx+3Eh], 0 ;~ 0613:3CA8
cs=0x613;eip=0x003cac; 	J(JZ(loc_183c6));	// 15303 jz      short loc_183C6 ;~ 0613:3CAC
cs=0x613;eip=0x003cae; 	T(MOV(si, bx));	// 15304 mov     si, bx ;~ 0613:3CAE
cs=0x613;eip=0x003cb0; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x3E))));	// 15305 mov     ax, [si+3Eh] ;~ 0613:3CB0
cs=0x613;eip=0x003cb3; 	X(SUB(*(dw*)(raddr(ds,bx+0x36)), ax));	// 15306 sub     [bx+36h], ax ;~ 0613:3CB3
loc_183c6:
	// 5262 
cs=0x613;eip=0x003cb6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15309 mov     bx, [bp+arg_0] ;~ 0613:3CB6
cs=0x613;eip=0x003cb9; 	T(CMP(*(raddr(ds,bx+0x0C7)), 0));	// 15310 cmp     byte ptr [bx+0C7h], 0 ;~ 0613:3CB9
cs=0x613;eip=0x003cbe; 	J(JNZ(loc_183d3));	// 15311 jnz     short loc_183D3 ;~ 0613:3CBE
cs=0x613;eip=0x003cc0; 	J(JMP(loc_18458));	// 15312 jmp     loc_18458 ;~ 0613:3CC0
loc_183d3:
	// 5263 
cs=0x613;eip=0x003cc3; 	T(CMP(*(dw*)(raddr(ds,bx+0x42)), 0));	// 15316 cmp     word ptr [bx+42h], 0 ;~ 0613:3CC3
cs=0x613;eip=0x003cc7; 	J(JGE(loc_183e0));	// 15317 jge     short loc_183E0 ;~ 0613:3CC7
cs=0x613;eip=0x003cc9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x42))));	// 15318 mov     ax, [bx+42h] ;~ 0613:3CC9
cs=0x613;eip=0x003ccc; 	T(NEG(ax));	// 15319 neg     ax ;~ 0613:3CCC
cs=0x613;eip=0x003cce; 	J(JMP(loc_183e3));	// 15320 jmp     short loc_183E3 ;~ 0613:3CCE
loc_183e0:
	// 5264 
cs=0x613;eip=0x003cd0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x42))));	// 15324 mov     ax, [bx+42h] ;~ 0613:3CD0
loc_183e3:
	// 5265 
cs=0x613;eip=0x003cd3; 	T(SHL(ax, 1));	// 15327 shl     ax, 1 ;~ 0613:3CD3
cs=0x613;eip=0x003cd5; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 15328 mov     [bp+var_8], ax ;~ 0613:3CD5
cs=0x613;eip=0x003cd8; 	T(CMP(*(dw*)(raddr(ds,bx+0x2A)), ax));	// 15329 cmp     [bx+2Ah], ax ;~ 0613:3CD8
cs=0x613;eip=0x003cdb; 	J(JBE(loc_18448));	// 15330 jbe     short loc_18448 ;~ 0613:3CDB
cs=0x613;eip=0x003cdd; 	T(CMP(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 15331 cmp     [bx+2Ch], ax ;~ 0613:3CDD
cs=0x613;eip=0x003ce0; 	J(JBE(loc_18400));	// 15332 jbe     short loc_18400 ;~ 0613:3CE0
cs=0x613;eip=0x003ce2; 	X(SUB(*(dw*)(raddr(ds,bx+0x2A)), ax));	// 15333 sub     [bx+2Ah], ax ;~ 0613:3CE2
cs=0x613;eip=0x003ce5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15334 mov     bx, [bp+arg_0] ;~ 0613:3CE5
cs=0x613;eip=0x003ce8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 15335 mov     ax, [bp+var_8] ;~ 0613:3CE8
cs=0x613;eip=0x003ceb; 	X(SUB(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 15336 sub     [bx+2Ch], ax ;~ 0613:3CEB
cs=0x613;eip=0x003cee; 	J(JMP(loc_18410));	// 15337 jmp     short loc_18410 ;~ 0613:3CEE
loc_18400:
	// 5266 
cs=0x613;eip=0x003cf0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15341 mov     bx, [bp+arg_0] ;~ 0613:3CF0
cs=0x613;eip=0x003cf3; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), 0));	// 15342 mov     word ptr [bx+2Ah], 0 ;~ 0613:3CF3
cs=0x613;eip=0x003cf8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15343 mov     bx, [bp+arg_0] ;~ 0613:3CF8
cs=0x613;eip=0x003cfb; 	X(MOV(*(dw*)(raddr(ds,bx+0x2C)), 0));	// 15344 mov     word ptr [bx+2Ch], 0 ;~ 0613:3CFB
loc_18410:
	// 5267 
cs=0x613;eip=0x003d00; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15347 mov     bx, [bp+arg_0] ;~ 0613:3D00
cs=0x613;eip=0x003d03; 	T(CMP(*(raddr(ds,bx+0x0C9)), 0));	// 15348 cmp     byte ptr [bx+0C9h], 0 ;~ 0613:3D03
cs=0x613;eip=0x003d08; 	J(JNZ(loc_18458));	// 15349 jnz     short loc_18458 ;~ 0613:3D08
cs=0x613;eip=0x003d0a; 	T(CMP(*(raddr(ds,bx+0x0C2)), 1));	// 15350 cmp     byte ptr [bx+0C2h], 1 ;~ 0613:3D0A
cs=0x613;eip=0x003d0f; 	J(JZ(loc_18436));	// 15351 jz      short loc_18436 ;~ 0613:3D0F
cs=0x613;eip=0x003d11; 	T(CMP(*(raddr(ds,bx+0x0C3)), 1));	// 15352 cmp     byte ptr [bx+0C3h], 1 ;~ 0613:3D11
cs=0x613;eip=0x003d16; 	J(JZ(loc_18436));	// 15353 jz      short loc_18436 ;~ 0613:3D16
cs=0x613;eip=0x003d18; 	T(CMP(*(raddr(ds,bx+0x0C4)), 1));	// 15354 cmp     byte ptr [bx+0C4h], 1 ;~ 0613:3D18
cs=0x613;eip=0x003d1d; 	J(JZ(loc_18436));	// 15355 jz      short loc_18436 ;~ 0613:3D1D
cs=0x613;eip=0x003d1f; 	T(CMP(*(raddr(ds,bx+0x0C5)), 1));	// 15356 cmp     byte ptr [bx+0C5h], 1 ;~ 0613:3D1F
cs=0x613;eip=0x003d24; 	J(JNZ(loc_1843e));	// 15357 jnz     short loc_1843E ;~ 0613:3D24
loc_18436:
	// 5268 
cs=0x613;eip=0x003d26; 	X(OR(*(raddr(ds,bx+0x0CF)), 2));	// 15361 or      byte ptr [bx+0CFh], 2 ;~ 0613:3D26
cs=0x613;eip=0x003d2b; 	J(JMP(loc_18458));	// 15362 jmp     short loc_18458 ;~ 0613:3D2B
loc_1843e:
	// 5269 
cs=0x613;eip=0x003d2e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15367 mov     bx, [bp+arg_0] ;~ 0613:3D2E
cs=0x613;eip=0x003d31; 	X(OR(*(raddr(ds,bx+0x0CF)), 4));	// 15368 or      byte ptr [bx+0CFh], 4 ;~ 0613:3D31
cs=0x613;eip=0x003d36; 	J(JMP(loc_18458));	// 15369 jmp     short loc_18458 ;~ 0613:3D36
loc_18448:
	// 5270 
cs=0x613;eip=0x003d38; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15373 mov     bx, [bp+arg_0] ;~ 0613:3D38
cs=0x613;eip=0x003d3b; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), 0));	// 15374 mov     word ptr [bx+2Ah], 0 ;~ 0613:3D3B
cs=0x613;eip=0x003d40; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15375 mov     bx, [bp+arg_0] ;~ 0613:3D40
cs=0x613;eip=0x003d43; 	X(MOV(*(dw*)(raddr(ds,bx+0x2C)), 0));	// 15376 mov     word ptr [bx+2Ch], 0 ;~ 0613:3D43
loc_18458:
	// 5271 
cs=0x613;eip=0x003d48; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15380 mov     bx, [bp+arg_0] ;~ 0613:3D48
cs=0x613;eip=0x003d4b; 	X(MOV(*(dw*)(raddr(ds,bx+0x42)), 0));	// 15381 mov     word ptr [bx+42h], 0 ;~ 0613:3D4B
cs=0x613;eip=0x003d50; 	X(POP(si));	// 15382 pop     si ;~ 0613:3D50
cs=0x613;eip=0x003d51; 	X(POP(di));	// 15383 pop     di ;~ 0613:3D51
cs=0x613;eip=0x003d52; 	T(MOV(sp, bp));	// 15384 mov     sp, bp ;~ 0613:3D52
cs=0x613;eip=0x003d54; 	X(POP(bp));	// 15385 pop     bp ;~ 0613:3D54
cs=0x613;eip=0x003d55; 	J(RETF(0));	// 15386 retf ;~ 0613:3D55

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_17ffc: 	goto loc_17ffc;
        case m2c::kloc_1800e: 	goto loc_1800e;
        case m2c::kloc_18018: 	goto loc_18018;
        case m2c::kloc_18022: 	goto loc_18022;
        case m2c::kloc_1802c: 	goto loc_1802c;
        case m2c::kloc_18051: 	goto loc_18051;
        case m2c::kloc_18078: 	goto loc_18078;
        case m2c::kloc_1807b: 	goto loc_1807b;
        case m2c::kloc_180fb: 	goto loc_180fb;
        case m2c::kloc_18121: 	goto loc_18121;
        case m2c::kloc_1813c: 	goto loc_1813c;
        case m2c::kloc_1814c: 	goto loc_1814c;
        case m2c::kloc_1814f: 	goto loc_1814f;
        case m2c::kloc_18162: 	goto loc_18162;
        case m2c::kloc_18168: 	goto loc_18168;
        case m2c::kloc_181ad: 	goto loc_181ad;
        case m2c::kloc_181ce: 	goto loc_181ce;
        case m2c::kloc_181fc: 	goto loc_181fc;
        case m2c::kloc_181ff: 	goto loc_181ff;
        case m2c::kloc_18207: 	goto loc_18207;
        case m2c::kloc_18220: 	goto loc_18220;
        case m2c::kloc_18228: 	goto loc_18228;
        case m2c::kloc_18234: 	goto loc_18234;
        case m2c::kloc_1823e: 	goto loc_1823e;
        case m2c::kloc_18241: 	goto loc_18241;
        case m2c::kloc_1827c: 	goto loc_1827c;
        case m2c::kloc_1827f: 	goto loc_1827f;
        case m2c::kloc_18282: 	goto loc_18282;
        case m2c::kloc_182a8: 	goto loc_182a8;
        case m2c::kloc_182ae: 	goto loc_182ae;
        case m2c::kloc_182bd: 	goto loc_182bd;
        case m2c::kloc_182ea: 	goto loc_182ea;
        case m2c::kloc_182f6: 	goto loc_182f6;
        case m2c::kloc_18354: 	goto loc_18354;
        case m2c::kloc_1835e: 	goto loc_1835e;
        case m2c::kloc_1838b: 	goto loc_1838b;
        case m2c::kloc_1838e: 	goto loc_1838e;
        case m2c::kloc_183b5: 	goto loc_183b5;
        case m2c::kloc_183c6: 	goto loc_183c6;
        case m2c::kloc_183d3: 	goto loc_183d3;
        case m2c::kloc_183e0: 	goto loc_183e0;
        case m2c::kloc_183e3: 	goto loc_183e3;
        case m2c::kloc_18400: 	goto loc_18400;
        case m2c::kloc_18410: 	goto loc_18410;
        case m2c::kloc_18436: 	goto loc_18436;
        case m2c::kloc_1843e: 	goto loc_1843e;
        case m2c::kloc_18448: 	goto loc_18448;
        case m2c::kloc_18458: 	goto loc_18458;
        case m2c::kupdate_grip: 	goto update_grip;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool car_car_speed_adjust_maybe(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    car_car_speed_adjust_maybe:
    _begin:
#undef var_18
#define var_18 -0x18
	// 15396 var_18          = word ptr -18h ;~ 0613:3D56
#undef var_16
#define var_16 -0x16
	// 15397 var_16          = word ptr -16h ;~ 0613:3D56
#undef var_14
#define var_14 -0x14
	// 15398 var_14          = word ptr -14h ;~ 0613:3D56
#undef var_12
#define var_12 -0x12
	// 15399 var_12          = word ptr -12h ;~ 0613:3D56
#undef var_10
#define var_10 -0x10
	// 15400 var_10          = word ptr -10h ;~ 0613:3D56
#undef var_e
#define var_e -0x0E
	// 15401 var_E           = word ptr -0Eh ;~ 0613:3D56
#undef var_c
#define var_c -0x0C
	// 15402 var_C           = word ptr -0Ch ;~ 0613:3D56
#undef var_a
#define var_a -0x0A
	// 15403 var_A           = word ptr -0Ah ;~ 0613:3D56
#undef var_8
#define var_8 -8
	// 15404 var_8           = word ptr -8 ;~ 0613:3D56
#undef var_6
#define var_6 -6
	// 15405 var_6           = word ptr -6 ;~ 0613:3D56
#undef var_4
#define var_4 -4
	// 15406 var_4           = word ptr -4 ;~ 0613:3D56
#undef var_2
#define var_2 -2
	// 15407 var_2           = word ptr -2 ;~ 0613:3D56
#undef arg_0
#define arg_0 6
	// 15408 arg_0           = word ptr  6 ;~ 0613:3D56
#undef arg_2
#define arg_2 8
	// 15409 arg_2           = word ptr  8 ;~ 0613:3D56
cs=0x613;eip=0x003d56; 	X(PUSH(bp));	// 15411 push    bp ;~ 0613:3D56
cs=0x613;eip=0x003d57; 	T(MOV(bp, sp));	// 15412 mov     bp, sp ;~ 0613:3D57
cs=0x613;eip=0x003d59; 	T(SUB(sp, 0x18));	// 15413 sub     sp, 18h ;~ 0613:3D59
cs=0x613;eip=0x003d5c; 	X(PUSH(si));	// 15414 push    si ;~ 0613:3D5C
cs=0x613;eip=0x003d5d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15415 mov     bx, [bp+arg_0] ;~ 0613:3D5D
cs=0x613;eip=0x003d60; 	X(MOV(*(raddr(ds,bx+0x0C8)), 1));	// 15416 mov     byte ptr [bx+0C8h], 1 ;~ 0613:3D60
cs=0x613;eip=0x003d65; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 15417 mov     bx, [bp+arg_2] ;~ 0613:3D65
cs=0x613;eip=0x003d68; 	X(MOV(*(raddr(ds,bx+0x0C8)), 1));	// 15418 mov     byte ptr [bx+0C8h], 1 ;~ 0613:3D68
cs=0x613;eip=0x003d6d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15419 mov     bx, [bp+arg_0] ;~ 0613:3D6D
cs=0x613;eip=0x003d70; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x2C))));	// 15420 mov     ax, [bx+2Ch] ;~ 0613:3D70
cs=0x613;eip=0x003d73; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 15421 mov     [bp+var_6], ax ;~ 0613:3D73
cs=0x613;eip=0x003d76; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 15422 mov     bx, [bp+arg_2] ;~ 0613:3D76
cs=0x613;eip=0x003d79; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x2C))));	// 15423 mov     ax, [bx+2Ch] ;~ 0613:3D79
cs=0x613;eip=0x003d7c; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 15424 mov     [bp+var_C], ax ;~ 0613:3D7C
cs=0x613;eip=0x003d7f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15425 mov     bx, [bp+arg_0] ;~ 0613:3D7F
cs=0x613;eip=0x003d82; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x18))));	// 15426 mov     ax, [bx+18h] ;~ 0613:3D82
cs=0x613;eip=0x003d85; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 15427 mov     [bp+var_2], ax ;~ 0613:3D85
cs=0x613;eip=0x003d88; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 15428 mov     bx, [bp+arg_2] ;~ 0613:3D88
cs=0x613;eip=0x003d8b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x18))));	// 15429 mov     ax, [bx+18h] ;~ 0613:3D8B
cs=0x613;eip=0x003d8e; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 15430 mov     [bp+var_4], ax ;~ 0613:3D8E
cs=0x613;eip=0x003d91; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 15431 push    [bp+var_2] ;~ 0613:3D91
cs=0x613;eip=0x003d94; 	J(CALLF(sin_fast,0));	// 15432 call    sin_fast ;~ 0613:3D94
cs=0x613;eip=0x003d99; 	T(ADD(sp, 2));	// 15433 add     sp, 2 ;~ 0613:3D99
cs=0x613;eip=0x003d9c; 	X(PUSH(ax));	// 15434 push    ax ;~ 0613:3D9C
cs=0x613;eip=0x003d9d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 15435 mov     ax, [bp+var_6] ;~ 0613:3D9D
cs=0x613;eip=0x003da0; 	T(MOV(cl, 8));	// 15436 mov     cl, 8 ;~ 0613:3DA0
cs=0x613;eip=0x003da2; 	T(SHR(ax, cl));	// 15437 shr     ax, cl ;~ 0613:3DA2
cs=0x613;eip=0x003da4; 	X(PUSH(ax));	// 15438 push    ax ;~ 0613:3DA4
cs=0x613;eip=0x003da5; 	J(CALLF(multiply_and_scale,0));	// 15439 call    multiply_and_scale ;~ 0613:3DA5
cs=0x613;eip=0x003daa; 	T(ADD(sp, 4));	// 15440 add     sp, 4 ;~ 0613:3DAA
cs=0x613;eip=0x003dad; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 15441 mov     [bp+var_10], ax ;~ 0613:3DAD
cs=0x613;eip=0x003db0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 15442 push    [bp+var_4] ;~ 0613:3DB0
cs=0x613;eip=0x003db3; 	J(CALLF(sin_fast,0));	// 15443 call    sin_fast ;~ 0613:3DB3
cs=0x613;eip=0x003db8; 	T(ADD(sp, 2));	// 15444 add     sp, 2 ;~ 0613:3DB8
cs=0x613;eip=0x003dbb; 	X(PUSH(ax));	// 15445 push    ax ;~ 0613:3DBB
cs=0x613;eip=0x003dbc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 15446 mov     ax, [bp+var_C] ;~ 0613:3DBC
cs=0x613;eip=0x003dbf; 	T(MOV(cl, 8));	// 15447 mov     cl, 8 ;~ 0613:3DBF
cs=0x613;eip=0x003dc1; 	T(SHR(ax, cl));	// 15448 shr     ax, cl ;~ 0613:3DC1
cs=0x613;eip=0x003dc3; 	X(PUSH(ax));	// 15449 push    ax ;~ 0613:3DC3
cs=0x613;eip=0x003dc4; 	J(CALLF(multiply_and_scale,0));	// 15450 call    multiply_and_scale ;~ 0613:3DC4
cs=0x613;eip=0x003dc9; 	T(ADD(sp, 4));	// 15451 add     sp, 4 ;~ 0613:3DC9
cs=0x613;eip=0x003dcc; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 15452 mov     [bp+var_14], ax ;~ 0613:3DCC
cs=0x613;eip=0x003dcf; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 15453 push    [bp+var_2] ;~ 0613:3DCF
cs=0x613;eip=0x003dd2; 	J(CALLF(cos_fast,0));	// 15454 call    cos_fast ;~ 0613:3DD2
cs=0x613;eip=0x003dd7; 	T(ADD(sp, 2));	// 15455 add     sp, 2 ;~ 0613:3DD7
cs=0x613;eip=0x003dda; 	X(PUSH(ax));	// 15456 push    ax ;~ 0613:3DDA
cs=0x613;eip=0x003ddb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 15457 mov     ax, [bp+var_6] ;~ 0613:3DDB
cs=0x613;eip=0x003dde; 	T(MOV(cl, 8));	// 15458 mov     cl, 8 ;~ 0613:3DDE
cs=0x613;eip=0x003de0; 	T(SHR(ax, cl));	// 15459 shr     ax, cl ;~ 0613:3DE0
cs=0x613;eip=0x003de2; 	X(PUSH(ax));	// 15460 push    ax ;~ 0613:3DE2
cs=0x613;eip=0x003de3; 	J(CALLF(multiply_and_scale,0));	// 15461 call    multiply_and_scale ;~ 0613:3DE3
cs=0x613;eip=0x003de8; 	T(ADD(sp, 4));	// 15462 add     sp, 4 ;~ 0613:3DE8
cs=0x613;eip=0x003deb; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 15463 mov     [bp+var_12], ax ;~ 0613:3DEB
cs=0x613;eip=0x003dee; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 15464 push    [bp+var_4] ;~ 0613:3DEE
cs=0x613;eip=0x003df1; 	J(CALLF(cos_fast,0));	// 15465 call    cos_fast ;~ 0613:3DF1
cs=0x613;eip=0x003df6; 	T(ADD(sp, 2));	// 15466 add     sp, 2 ;~ 0613:3DF6
cs=0x613;eip=0x003df9; 	X(PUSH(ax));	// 15467 push    ax ;~ 0613:3DF9
cs=0x613;eip=0x003dfa; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 15468 mov     ax, [bp+var_C] ;~ 0613:3DFA
cs=0x613;eip=0x003dfd; 	T(MOV(cl, 8));	// 15469 mov     cl, 8 ;~ 0613:3DFD
cs=0x613;eip=0x003dff; 	T(SHR(ax, cl));	// 15470 shr     ax, cl ;~ 0613:3DFF
cs=0x613;eip=0x003e01; 	X(PUSH(ax));	// 15471 push    ax ;~ 0613:3E01
cs=0x613;eip=0x003e02; 	J(CALLF(multiply_and_scale,0));	// 15472 call    multiply_and_scale ;~ 0613:3E02
cs=0x613;eip=0x003e07; 	T(ADD(sp, 4));	// 15473 add     sp, 4 ;~ 0613:3E07
cs=0x613;eip=0x003e0a; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 15474 mov     [bp+var_16], ax ;~ 0613:3E0A
cs=0x613;eip=0x003e0d; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_12))));	// 15475 sub     ax, [bp+var_12] ;~ 0613:3E0D
cs=0x613;eip=0x003e10; 	X(PUSH(ax));	// 15476 push    ax ;~ 0613:3E10
cs=0x613;eip=0x003e11; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 15477 mov     ax, [bp+var_14] ;~ 0613:3E11
cs=0x613;eip=0x003e14; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_10))));	// 15478 sub     ax, [bp+var_10] ;~ 0613:3E14
cs=0x613;eip=0x003e17; 	X(PUSH(ax));	// 15479 push    ax ;~ 0613:3E17
cs=0x613;eip=0x003e18; 	J(CALLF(polarradius2d,0));	// 15480 call    polarRadius2D ;~ 0613:3E18
cs=0x613;eip=0x003e1d; 	T(ADD(sp, 4));	// 15481 add     sp, 4 ;~ 0613:3E1D
cs=0x613;eip=0x003e20; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 15482 mov     [bp+var_A], ax ;~ 0613:3E20
cs=0x613;eip=0x003e23; 	T(CMP(ax, 0x0A));	// 15483 cmp     ax, 0Ah ;~ 0613:3E23
cs=0x613;eip=0x003e26; 	J(JGE(loc_1853d));	// 15484 jge     short loc_1853D ;~ 0613:3E26
cs=0x613;eip=0x003e28; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x0A));	// 15485 mov     [bp+var_A], 0Ah ;~ 0613:3E28
loc_1853d:
	// 5272 
cs=0x613;eip=0x003e2d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 15488 mov     ax, [bp+var_2] ;~ 0613:3E2D
cs=0x613;eip=0x003e30; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 15489 sub     ax, [bp+var_4] ;~ 0613:3E30
cs=0x613;eip=0x003e33; 	T(AND(ah, 3));	// 15490 and     ah, 3 ;~ 0613:3E33
cs=0x613;eip=0x003e36; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 15491 mov     [bp+var_8], ax ;~ 0613:3E36
cs=0x613;eip=0x003e39; 	T(MOV(ah, *(db*)(raddr(ss,bp+var_a))));	// 15492 mov     ah, byte ptr [bp+var_A] ;~ 0613:3E39
cs=0x613;eip=0x003e3c; 	T(SUB(al, al));	// 15493 sub     al, al ;~ 0613:3E3C
cs=0x613;eip=0x003e3e; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 15494 mov     [bp+var_E], ax ;~ 0613:3E3E
cs=0x613;eip=0x003e41; 	T(MOV(ax, 0x300));	// 15495 mov     ax, 300h ;~ 0613:3E41
cs=0x613;eip=0x003e44; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_a))));	// 15496 imul    [bp+var_A] ;~ 0613:3E44
cs=0x613;eip=0x003e47; 	T(SAR(ax, 1));	// 15497 sar     ax, 1 ;~ 0613:3E47
cs=0x613;eip=0x003e49; 	T(SAR(ax, 1));	// 15498 sar     ax, 1 ;~ 0613:3E49
cs=0x613;eip=0x003e4b; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 15499 mov     [bp+var_18], ax ;~ 0613:3E4B
cs=0x613;eip=0x003e4e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15500 mov     bx, [bp+arg_0] ;~ 0613:3E4E
cs=0x613;eip=0x003e51; 	T(CMP(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 15501 cmp     [bx+2Ch], ax ;~ 0613:3E51
cs=0x613;eip=0x003e54; 	J(JNC(loc_1856e));	// 15502 jnb     short loc_1856E ;~ 0613:3E54
cs=0x613;eip=0x003e56; 	X(MOV(*(dw*)(raddr(ds,bx+0x2C)), 0));	// 15503 mov     word ptr [bx+2Ch], 0 ;~ 0613:3E56
cs=0x613;eip=0x003e5b; 	J(JMP(loc_18577));	// 15504 jmp     short loc_18577 ;~ 0613:3E5B
loc_1856e:
	// 5273 
cs=0x613;eip=0x003e5e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15509 mov     bx, [bp+arg_0] ;~ 0613:3E5E
cs=0x613;eip=0x003e61; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 15510 mov     ax, [bp+var_18] ;~ 0613:3E61
cs=0x613;eip=0x003e64; 	X(SUB(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 15511 sub     [bx+2Ch], ax ;~ 0613:3E64
loc_18577:
	// 5274 
cs=0x613;eip=0x003e67; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15514 mov     bx, [bp+arg_0] ;~ 0613:3E67
cs=0x613;eip=0x003e6a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 15515 mov     ax, [bp+var_4] ;~ 0613:3E6A
cs=0x613;eip=0x003e6d; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2))));	// 15516 sub     ax, [bp+var_2] ;~ 0613:3E6D
cs=0x613;eip=0x003e70; 	X(MOV(*(dw*)(raddr(ds,bx+0x36)), ax));	// 15517 mov     [bx+36h], ax ;~ 0613:3E70
cs=0x613;eip=0x003e73; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15518 mov     bx, [bp+arg_0] ;~ 0613:3E73
cs=0x613;eip=0x003e76; 	T(CMP(*(dw*)(raddr(ds,bx+0x36)), 0x200));	// 15519 cmp     word ptr [bx+36h], 200h ;~ 0613:3E76
cs=0x613;eip=0x003e7b; 	J(JL(loc_18592));	// 15520 jl      short loc_18592 ;~ 0613:3E7B
cs=0x613;eip=0x003e7d; 	X(SUB(*(dw*)(raddr(ds,bx+0x36)), 0x400));	// 15521 sub     word ptr [bx+36h], 400h ;~ 0613:3E7D
loc_18592:
	// 5275 
cs=0x613;eip=0x003e82; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15524 mov     bx, [bp+arg_0] ;~ 0613:3E82
cs=0x613;eip=0x003e85; 	T(CMP(*(dw*)(raddr(ds,bx+0x36)), 0x0FE00));	// 15525 cmp     word ptr [bx+36h], 0FE00h ;~ 0613:3E85
cs=0x613;eip=0x003e8a; 	J(JG(loc_185a0));	// 15526 jg      short loc_185A0 ;~ 0613:3E8A
cs=0x613;eip=0x003e8c; 	X(ADD(*(raddr(ds,bx+0x37)), 4));	// 15527 add     byte ptr [bx+37h], 4 ;~ 0613:3E8C
loc_185a0:
	// 5276 
cs=0x613;eip=0x003e90; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 15530 mov     bx, [bp+arg_2] ;~ 0613:3E90
cs=0x613;eip=0x003e93; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 15531 mov     ax, [bp+var_2] ;~ 0613:3E93
cs=0x613;eip=0x003e96; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 15532 sub     ax, [bp+var_4] ;~ 0613:3E96
cs=0x613;eip=0x003e99; 	X(MOV(*(dw*)(raddr(ds,bx+0x36)), ax));	// 15533 mov     [bx+36h], ax ;~ 0613:3E99
cs=0x613;eip=0x003e9c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 15534 mov     bx, [bp+arg_2] ;~ 0613:3E9C
cs=0x613;eip=0x003e9f; 	T(CMP(*(dw*)(raddr(ds,bx+0x36)), 0x200));	// 15535 cmp     word ptr [bx+36h], 200h ;~ 0613:3E9F
cs=0x613;eip=0x003ea4; 	J(JL(loc_185bb));	// 15536 jl      short loc_185BB ;~ 0613:3EA4
cs=0x613;eip=0x003ea6; 	X(SUB(*(dw*)(raddr(ds,bx+0x36)), 0x400));	// 15537 sub     word ptr [bx+36h], 400h ;~ 0613:3EA6
loc_185bb:
	// 5277 
cs=0x613;eip=0x003eab; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 15540 mov     bx, [bp+arg_2] ;~ 0613:3EAB
cs=0x613;eip=0x003eae; 	T(CMP(*(dw*)(raddr(ds,bx+0x36)), 0x0FE00));	// 15541 cmp     word ptr [bx+36h], 0FE00h ;~ 0613:3EAE
cs=0x613;eip=0x003eb3; 	J(JG(loc_185c9));	// 15542 jg      short loc_185C9 ;~ 0613:3EB3
cs=0x613;eip=0x003eb5; 	X(ADD(*(raddr(ds,bx+0x37)), 4));	// 15543 add     byte ptr [bx+37h], 4 ;~ 0613:3EB5
loc_185c9:
	// 5278 
cs=0x613;eip=0x003eb9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15546 mov     bx, [bp+arg_0] ;~ 0613:3EB9
cs=0x613;eip=0x003ebc; 	T(MOV(si, bx));	// 15547 mov     si, bx ;~ 0613:3EBC
cs=0x613;eip=0x003ebe; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x2C))));	// 15548 mov     ax, [si+2Ch] ;~ 0613:3EBE
cs=0x613;eip=0x003ec1; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), ax));	// 15549 mov     [bx+2Ah], ax ;~ 0613:3EC1
cs=0x613;eip=0x003ec4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 15550 mov     bx, [bp+arg_2] ;~ 0613:3EC4
cs=0x613;eip=0x003ec7; 	T(MOV(si, bx));	// 15551 mov     si, bx ;~ 0613:3EC7
cs=0x613;eip=0x003ec9; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x2C))));	// 15552 mov     ax, [si+2Ch] ;~ 0613:3EC9
cs=0x613;eip=0x003ecc; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), ax));	// 15553 mov     [bx+2Ah], ax ;~ 0613:3ECC
cs=0x613;eip=0x003ecf; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x1E));	// 15554 cmp     [bp+var_A], 1Eh ;~ 0613:3ECF
cs=0x613;eip=0x003ed3; 	J(JLE(loc_185ee));	// 15555 jle     short loc_185EE ;~ 0613:3ED3
cs=0x613;eip=0x003ed5; 	T(MOV(ax, 1));	// 15556 mov     ax, 1 ;~ 0613:3ED5
cs=0x613;eip=0x003ed8; 	X(POP(si));	// 15557 pop     si ;~ 0613:3ED8
cs=0x613;eip=0x003ed9; 	T(MOV(sp, bp));	// 15558 mov     sp, bp ;~ 0613:3ED9
cs=0x613;eip=0x003edb; 	X(POP(bp));	// 15559 pop     bp ;~ 0613:3EDB
cs=0x613;eip=0x003edc; 	J(RETF(0));	// 15560 retf ;~ 0613:3EDC
loc_185ee:
	// 5279 
cs=0x613;eip=0x003ede; 	T(SUB(ax, ax));	// 15565 sub     ax, ax ;~ 0613:3EDE
cs=0x613;eip=0x003ee0; 	X(POP(si));	// 15566 pop     si ;~ 0613:3EE0
cs=0x613;eip=0x003ee1; 	T(MOV(sp, bp));	// 15567 mov     sp, bp ;~ 0613:3EE1
cs=0x613;eip=0x003ee3; 	X(POP(bp));	// 15568 pop     bp ;~ 0613:3EE3
cs=0x613;eip=0x003ee4; 	J(RETF(0));	// 15569 retf ;~ 0613:3EE4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kcar_car_speed_adjust_maybe: 	goto car_car_speed_adjust_maybe;
        case m2c::kloc_1853d: 	goto loc_1853d;
        case m2c::kloc_1856e: 	goto loc_1856e;
        case m2c::kloc_18577: 	goto loc_18577;
        case m2c::kloc_18592: 	goto loc_18592;
        case m2c::kloc_185a0: 	goto loc_185a0;
        case m2c::kloc_185bb: 	goto loc_185bb;
        case m2c::kloc_185c9: 	goto loc_185c9;
        case m2c::kloc_185ee: 	goto loc_185ee;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool carstate_rc_op(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    carstate_rc_op:
    _begin:
#undef var_6
#define var_6 -6
	// 15581 var_6           = word ptr -6 ;~ 0613:3EE6
#undef var_4
#define var_4 -4
	// 15582 var_4           = word ptr -4 ;~ 0613:3EE6
#undef var_2
#define var_2 -2
	// 15583 var_2           = word ptr -2 ;~ 0613:3EE6
#undef arg_0
#define arg_0 6
	// 15584 arg_0           = word ptr  6 ;~ 0613:3EE6
#undef arg_2
#define arg_2 8
	// 15585 arg_2           = word ptr  8 ;~ 0613:3EE6
#undef arg_4
#define arg_4 0x0A
	// 15586 arg_4           = word ptr  0Ah ;~ 0613:3EE6
cs=0x613;eip=0x003ee6; 	X(PUSH(bp));	// 15588 push    bp ;~ 0613:3EE6
cs=0x613;eip=0x003ee7; 	T(MOV(bp, sp));	// 15589 mov     bp, sp ;~ 0613:3EE7
cs=0x613;eip=0x003ee9; 	T(SUB(sp, 6));	// 15590 sub     sp, 6 ;~ 0613:3EE9
cs=0x613;eip=0x003eec; 	X(PUSH(di));	// 15591 push    di ;~ 0613:3EEC
cs=0x613;eip=0x003eed; 	X(PUSH(si));	// 15592 push    si ;~ 0613:3EED
cs=0x613;eip=0x003eee; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15593 mov     si, [bp+arg_4] ;~ 0613:3EEE
cs=0x613;eip=0x003ef1; 	T(SHL(si, 1));	// 15594 shl     si, 1 ;~ 0613:3EF1
cs=0x613;eip=0x003ef3; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 15595 add     si, [bp+arg_0] ;~ 0613:3EF3
cs=0x613;eip=0x003ef6; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x54))));	// 15596 mov     ax, [si+54h]    ; rc accesses are offset by the wheel index. ;~ 0613:3EF6
cs=0x613;eip=0x003ef9; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 15597 mov     [bp+var_2], ax ;~ 0613:3EF9
cs=0x613;eip=0x003efc; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 15598 mov     [bp+var_4], 0 ;~ 0613:3EFC
cs=0x613;eip=0x003f01; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 15599 mov     [bp+var_6], 0 ;~ 0613:3F01
cs=0x613;eip=0x003f06; 	T(CMP(*(dw*)(raddr(ds,si+0x6C)), 0));	// 15600 cmp     word ptr [si+6Ch], 0 ;~ 0613:3F06
cs=0x613;eip=0x003f0a; 	J(JZ(loc_18659));	// 15601 jz      short loc_18659 ;~ 0613:3F0A
cs=0x613;eip=0x003f0c; 	J(JGE(loc_18636));	// 15602 jge     short loc_18636 ;~ 0613:3F0C
cs=0x613;eip=0x003f0e; 	X(ADD(*(dw*)(raddr(ds,si+0x6C)), 4));	// 15603 add     word ptr [si+6Ch], 4 ;~ 0613:3F0E
cs=0x613;eip=0x003f12; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15604 mov     si, [bp+arg_4] ;~ 0613:3F12
cs=0x613;eip=0x003f15; 	T(SHL(si, 1));	// 15605 shl     si, 1 ;~ 0613:3F15
cs=0x613;eip=0x003f17; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 15606 add     si, [bp+arg_0] ;~ 0613:3F17
cs=0x613;eip=0x003f1a; 	T(ADD(si, 0x6C));	// 15607 add     si, 6Ch ;~ 0613:3F1A
cs=0x613;eip=0x003f1d; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 15608 mov     ax, [si] ;~ 0613:3F1D
cs=0x613;eip=0x003f1f; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 15609 cmp     [bp+var_6], ax ;~ 0613:3F1F
cs=0x613;eip=0x003f22; 	J(JGE(loc_18659));	// 15610 jge     short loc_18659 ;~ 0613:3F22
cs=0x613;eip=0x003f24; 	J(JMP(loc_18654));	// 15611 jmp     short loc_18654 ;~ 0613:3F24
loc_18636:
	// 5280 
cs=0x613;eip=0x003f26; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 15615 mov     di, [bp+arg_4] ;~ 0613:3F26
cs=0x613;eip=0x003f29; 	T(SHL(di, 1));	// 15616 shl     di, 1 ;~ 0613:3F29
cs=0x613;eip=0x003f2b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15617 mov     bx, [bp+arg_0] ;~ 0613:3F2B
cs=0x613;eip=0x003f2e; 	X(SUB(*(dw*)(raddr(ds,bx+di+0x6C)), 4));	// 15618 sub     word ptr [bx+di+6Ch], 4 ;~ 0613:3F2E
cs=0x613;eip=0x003f32; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15619 mov     si, [bp+arg_4] ;~ 0613:3F32
cs=0x613;eip=0x003f35; 	T(SHL(si, 1));	// 15620 shl     si, 1 ;~ 0613:3F35
cs=0x613;eip=0x003f37; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 15621 add     si, [bp+arg_0] ;~ 0613:3F37
cs=0x613;eip=0x003f3a; 	T(ADD(si, 0x6C));	// 15622 add     si, 6Ch ;~ 0613:3F3A
cs=0x613;eip=0x003f3d; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 15623 mov     ax, [si] ;~ 0613:3F3D
cs=0x613;eip=0x003f3f; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 15624 cmp     [bp+var_6], ax ;~ 0613:3F3F
cs=0x613;eip=0x003f42; 	J(JLE(loc_18659));	// 15625 jle     short loc_18659 ;~ 0613:3F42
loc_18654:
	// 5281 
cs=0x613;eip=0x003f44; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 15628 mov     ax, [bp+var_6] ;~ 0613:3F44
cs=0x613;eip=0x003f47; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 15629 mov     [si], ax ;~ 0613:3F47
loc_18659:
	// 5282 
cs=0x613;eip=0x003f49; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 15633 mov     di, [bp+arg_4] ;~ 0613:3F49
cs=0x613;eip=0x003f4c; 	T(SHL(di, 1));	// 15634 shl     di, 1 ;~ 0613:3F4C
cs=0x613;eip=0x003f4e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15635 mov     bx, [bp+arg_0] ;~ 0613:3F4E
cs=0x613;eip=0x003f51; 	T(MOV(si, *(dw*)(raddr(ds,bx+di+0x6C))));	// 15636 mov     si, [bx+di+6Ch] ;~ 0613:3F51
cs=0x613;eip=0x003f54; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 15637 mov     di, [bp+arg_4] ;~ 0613:3F54
cs=0x613;eip=0x003f57; 	T(SHL(di, 1));	// 15638 shl     di, 1 ;~ 0613:3F57
cs=0x613;eip=0x003f59; 	X(MOV(*(dw*)(raddr(ds,bx+di+0x6C)), si));	// 15639 mov     [bx+di+6Ch], si ;~ 0613:3F59
cs=0x613;eip=0x003f5c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 15640 cmp     [bp+arg_2], 0 ;~ 0613:3F5C
cs=0x613;eip=0x003f60; 	J(JGE(loc_18689));	// 15641 jge     short loc_18689 ;~ 0613:3F60
cs=0x613;eip=0x003f62; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 15642 mov     di, [bp+arg_4] ;~ 0613:3F62
cs=0x613;eip=0x003f65; 	T(SHL(di, 1));	// 15643 shl     di, 1 ;~ 0613:3F65
cs=0x613;eip=0x003f67; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15644 mov     bx, [bp+arg_0] ;~ 0613:3F67
cs=0x613;eip=0x003f6a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 15645 mov     ax, [bp+arg_2] ;~ 0613:3F6A
cs=0x613;eip=0x003f6d; 	T(NEG(ax));	// 15646 neg     ax ;~ 0613:3F6D
cs=0x613;eip=0x003f6f; 	T(CMP(*(dw*)(raddr(ds,bx+di+0x54)), ax));	// 15647 cmp     [bx+di+54h], ax ;~ 0613:3F6F
cs=0x613;eip=0x003f72; 	J(JLE(loc_18689));	// 15648 jle     short loc_18689 ;~ 0613:3F72
cs=0x613;eip=0x003f74; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 15649 mov     [bp+arg_2], 0 ;~ 0613:3F74
loc_18689:
	// 5283 
cs=0x613;eip=0x003f79; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 15653 cmp     [bp+arg_2], 0 ;~ 0613:3F79
cs=0x613;eip=0x003f7d; 	J(JNZ(loc_186fa));	// 15654 jnz     short loc_186FA ;~ 0613:3F7D
cs=0x613;eip=0x003f7f; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15655 mov     si, [bp+arg_4] ;~ 0613:3F7F
cs=0x613;eip=0x003f82; 	T(SHL(si, 1));	// 15656 shl     si, 1 ;~ 0613:3F82
cs=0x613;eip=0x003f84; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 15657 add     si, [bp+arg_0] ;~ 0613:3F84
cs=0x613;eip=0x003f87; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x6C))));	// 15658 mov     ax, [si+6Ch] ;~ 0613:3F87
cs=0x613;eip=0x003f8a; 	T(CMP(*(dw*)(raddr(ds,si+0x54)), ax));	// 15659 cmp     [si+54h], ax ;~ 0613:3F8A
cs=0x613;eip=0x003f8d; 	J(JLE(loc_186c8));	// 15660 jle     short loc_186C8 ;~ 0613:3F8D
cs=0x613;eip=0x003f8f; 	X(SUB(*(dw*)(raddr(ds,si+0x54)), 0x80));	// 15661 sub     word ptr [si+54h], 80h ; '€' ;~ 0613:3F8F
cs=0x613;eip=0x003f94; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15662 mov     si, [bp+arg_4] ;~ 0613:3F94
cs=0x613;eip=0x003f97; 	T(SHL(si, 1));	// 15663 shl     si, 1 ;~ 0613:3F97
cs=0x613;eip=0x003f99; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 15664 add     si, [bp+arg_0] ;~ 0613:3F99
cs=0x613;eip=0x003f9c; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x6C))));	// 15665 mov     ax, [si+6Ch] ;~ 0613:3F9C
cs=0x613;eip=0x003f9f; 	T(CMP(*(dw*)(raddr(ds,si+0x54)), ax));	// 15666 cmp     [si+54h], ax ;~ 0613:3F9F
cs=0x613;eip=0x003fa2; 	J(JGE(loc_186b7));	// 15667 jge     short loc_186B7 ;~ 0613:3FA2
cs=0x613;eip=0x003fa4; 	X(MOV(*(dw*)(raddr(ds,si+0x54)), ax));	// 15668 mov     [si+54h], ax ;~ 0613:3FA4
loc_186b7:
	// 5284 
cs=0x613;eip=0x003fa7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 15671 mov     ax, [bp+var_2] ;~ 0613:3FA7
cs=0x613;eip=0x003faa; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15672 mov     si, [bp+arg_4] ;~ 0613:3FAA
cs=0x613;eip=0x003fad; 	T(SHL(si, 1));	// 15673 shl     si, 1 ;~ 0613:3FAD
cs=0x613;eip=0x003faf; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15674 mov     bx, [bp+arg_0] ;~ 0613:3FAF
cs=0x613;eip=0x003fb2; 	T(SUB(ax, *(dw*)(raddr(ds,bx+si+0x54))));	// 15675 sub     ax, [bx+si+54h] ;~ 0613:3FB2
cs=0x613;eip=0x003fb5; 	J(JMP(loc_187a2));	// 15676 jmp     loc_187A2 ;~ 0613:3FB5
loc_186c8:
	// 5285 
cs=0x613;eip=0x003fb8; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15680 mov     si, [bp+arg_4] ;~ 0613:3FB8
cs=0x613;eip=0x003fbb; 	T(SHL(si, 1));	// 15681 shl     si, 1 ;~ 0613:3FBB
cs=0x613;eip=0x003fbd; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 15682 add     si, [bp+arg_0] ;~ 0613:3FBD
cs=0x613;eip=0x003fc0; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x6C))));	// 15683 mov     ax, [si+6Ch] ;~ 0613:3FC0
cs=0x613;eip=0x003fc3; 	T(CMP(*(dw*)(raddr(ds,si+0x54)), ax));	// 15684 cmp     [si+54h], ax ;~ 0613:3FC3
cs=0x613;eip=0x003fc6; 	J(JL(loc_186db));	// 15685 jl      short loc_186DB ;~ 0613:3FC6
cs=0x613;eip=0x003fc8; 	J(JMP(loc_187a5));	// 15686 jmp     loc_187A5 ;~ 0613:3FC8
loc_186db:
	// 5286 
cs=0x613;eip=0x003fcb; 	X(ADD(*(dw*)(raddr(ds,si+0x54)), 0x80));	// 15690 add     word ptr [si+54h], 80h ; '€' ;~ 0613:3FCB
cs=0x613;eip=0x003fd0; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15691 mov     si, [bp+arg_4] ;~ 0613:3FD0
cs=0x613;eip=0x003fd3; 	T(SHL(si, 1));	// 15692 shl     si, 1 ;~ 0613:3FD3
cs=0x613;eip=0x003fd5; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 15693 add     si, [bp+arg_0] ;~ 0613:3FD5
cs=0x613;eip=0x003fd8; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x6C))));	// 15694 mov     ax, [si+6Ch] ;~ 0613:3FD8
cs=0x613;eip=0x003fdb; 	T(CMP(*(dw*)(raddr(ds,si+0x54)), ax));	// 15695 cmp     [si+54h], ax ;~ 0613:3FDB
cs=0x613;eip=0x003fde; 	J(JG(loc_186f3));	// 15696 jg      short loc_186F3 ;~ 0613:3FDE
cs=0x613;eip=0x003fe0; 	J(JMP(loc_187a5));	// 15697 jmp     loc_187A5 ;~ 0613:3FE0
loc_186f3:
	// 5287 
cs=0x613;eip=0x003fe3; 	X(MOV(*(dw*)(raddr(ds,si+0x54)), ax));	// 15701 mov     [si+54h], ax ;~ 0613:3FE3
cs=0x613;eip=0x003fe6; 	J(JMP(loc_187a5));	// 15702 jmp     loc_187A5 ;~ 0613:3FE6
loc_186fa:
	// 5288 
cs=0x613;eip=0x003fea; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 15707 cmp     [bp+arg_2], 0 ;~ 0613:3FEA
cs=0x613;eip=0x003fee; 	J(JLE(loc_18748));	// 15708 jle     short loc_18748 ;~ 0613:3FEE
cs=0x613;eip=0x003ff0; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0x0C0));	// 15709 cmp     [bp+arg_2], 0C0h ; 'À' ;~ 0613:3FF0
cs=0x613;eip=0x003ff5; 	J(JLE(loc_18716));	// 15710 jle     short loc_18716 ;~ 0613:3FF5
cs=0x613;eip=0x003ff7; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15711 mov     si, [bp+arg_4] ;~ 0613:3FF7
cs=0x613;eip=0x003ffa; 	T(SHL(si, 1));	// 15712 shl     si, 1 ;~ 0613:3FFA
cs=0x613;eip=0x003ffc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15713 mov     bx, [bp+arg_0] ;~ 0613:3FFC
cs=0x613;eip=0x003fff; 	X(ADD(*(dw*)(raddr(ds,bx+si+0x54)), 0x0C0));	// 15714 add     word ptr [bx+si+54h], 0C0h ; 'À' ;~ 0613:3FFF
cs=0x613;eip=0x004004; 	J(JMP(loc_18724));	// 15715 jmp     short loc_18724 ;~ 0613:4004
loc_18716:
	// 5289 
cs=0x613;eip=0x004006; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15719 mov     si, [bp+arg_4] ;~ 0613:4006
cs=0x613;eip=0x004009; 	T(SHL(si, 1));	// 15720 shl     si, 1 ;~ 0613:4009
cs=0x613;eip=0x00400b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15721 mov     bx, [bp+arg_0] ;~ 0613:400B
cs=0x613;eip=0x00400e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 15722 mov     ax, [bp+arg_2] ;~ 0613:400E
cs=0x613;eip=0x004011; 	X(ADD(*(dw*)(raddr(ds,bx+si+0x54)), ax));	// 15723 add     [bx+si+54h], ax ;~ 0613:4011
loc_18724:
	// 5290 
cs=0x613;eip=0x004014; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15726 mov     si, [bp+arg_4] ;~ 0613:4014
cs=0x613;eip=0x004017; 	T(SHL(si, 1));	// 15727 shl     si, 1 ;~ 0613:4017
cs=0x613;eip=0x004019; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 15728 add     si, [bp+arg_0] ;~ 0613:4019
cs=0x613;eip=0x00401c; 	T(ADD(si, 0x54));	// 15729 add     si, 54h ; 'T'   ; 54 = car_rc2 ;~ 0613:401C
cs=0x613;eip=0x00401f; 	T(CMP(*(dw*)(raddr(ds,si)), 0x180));	// 15730 cmp     word ptr [si], 180h ;~ 0613:401F
cs=0x613;eip=0x004023; 	J(JLE(loc_18739));	// 15731 jle     short loc_18739 ;~ 0613:4023
cs=0x613;eip=0x004025; 	X(MOV(*(dw*)(raddr(ds,si)), 0x180));	// 15732 mov     word ptr [si], 180h ;~ 0613:4025
loc_18739:
	// 5291 
cs=0x613;eip=0x004029; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15735 mov     si, [bp+arg_4] ;~ 0613:4029
cs=0x613;eip=0x00402c; 	T(SHL(si, 1));	// 15736 shl     si, 1 ;~ 0613:402C
cs=0x613;eip=0x00402e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15737 mov     bx, [bp+arg_0] ;~ 0613:402E
cs=0x613;eip=0x004031; 	X(MOV(*(dw*)(raddr(ds,bx+si+0x64)), 0));	// 15738 mov     word ptr [bx+si+64h], 0 ; 64 = car_rc4 ;~ 0613:4031
cs=0x613;eip=0x004036; 	J(JMP(loc_187a5));	// 15739 jmp     short loc_187A5 ;~ 0613:4036
loc_18748:
	// 5292 
cs=0x613;eip=0x004038; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15743 mov     si, [bp+arg_4] ;~ 0613:4038
cs=0x613;eip=0x00403b; 	T(SHL(si, 1));	// 15744 shl     si, 1 ;~ 0613:403B
cs=0x613;eip=0x00403d; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 15745 add     si, [bp+arg_0] ;~ 0613:403D
cs=0x613;eip=0x004040; 	T(ADD(si, 0x54));	// 15746 add     si, 54h ;~ 0613:4040
cs=0x613;eip=0x004043; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 15747 mov     ax, [bp+arg_2] ;~ 0613:4043
cs=0x613;eip=0x004046; 	T(ADD(ax, *(dw*)(raddr(ds,si))));	// 15748 add     ax, [si] ;~ 0613:4046
cs=0x613;eip=0x004048; 	T(CMP(ax, 0x0FEE0));	// 15749 cmp     ax, 0FEE0h ;~ 0613:4048
cs=0x613;eip=0x00404b; 	J(JLE(loc_18764));	// 15750 jle     short loc_18764 ;~ 0613:404B
cs=0x613;eip=0x00404d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 15751 mov     ax, [bp+arg_2] ;~ 0613:404D
cs=0x613;eip=0x004050; 	X(ADD(*(dw*)(raddr(ds,si)), ax));	// 15752 add     [si], ax ;~ 0613:4050
cs=0x613;eip=0x004052; 	J(JMP(loc_18791));	// 15753 jmp     short loc_18791 ;~ 0613:4052
loc_18764:
	// 5293 
cs=0x613;eip=0x004054; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 15757 mov     di, [bp+arg_4] ;~ 0613:4054
cs=0x613;eip=0x004057; 	T(SHL(di, 1));	// 15758 shl     di, 1 ;~ 0613:4057
cs=0x613;eip=0x004059; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15759 mov     bx, [bp+arg_0] ;~ 0613:4059
cs=0x613;eip=0x00405c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 15760 mov     ax, [bp+arg_2] ;~ 0613:405C
cs=0x613;eip=0x00405f; 	T(MOV(cx, ax));	// 15761 mov     cx, ax ;~ 0613:405F
cs=0x613;eip=0x004061; 	T(SHL(ax, 1));	// 15762 shl     ax, 1 ;~ 0613:4061
cs=0x613;eip=0x004063; 	T(ADD(ax, cx));	// 15763 add     ax, cx ;~ 0613:4063
cs=0x613;eip=0x004065; 	T(SAR(ax, 1));	// 15764 sar     ax, 1 ;~ 0613:4065
cs=0x613;eip=0x004067; 	T(SAR(ax, 1));	// 15765 sar     ax, 1 ;~ 0613:4067
cs=0x613;eip=0x004069; 	X(ADD(*(dw*)(raddr(ds,bx+di+0x54)), ax));	// 15766 add     [bx+di+54h], ax ;~ 0613:4069
cs=0x613;eip=0x00406c; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15767 mov     si, [bp+arg_4] ;~ 0613:406C
cs=0x613;eip=0x00406f; 	T(SHL(si, 1));	// 15768 shl     si, 1 ;~ 0613:406F
cs=0x613;eip=0x004071; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 15769 add     si, [bp+arg_0] ;~ 0613:4071
cs=0x613;eip=0x004074; 	T(ADD(si, 0x54));	// 15770 add     si, 54h ;~ 0613:4074
cs=0x613;eip=0x004077; 	T(CMP(*(dw*)(raddr(ds,si)), 0x0FE80));	// 15771 cmp     word ptr [si], 0FE80h ;~ 0613:4077
cs=0x613;eip=0x00407b; 	J(JGE(loc_18791));	// 15772 jge     short loc_18791 ;~ 0613:407B
cs=0x613;eip=0x00407d; 	X(MOV(*(dw*)(raddr(ds,si)), 0x0FE80));	// 15773 mov     word ptr [si], 0FE80h ;~ 0613:407D
loc_18791:
	// 5294 
cs=0x613;eip=0x004081; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 15777 mov     ax, [bp+var_2] ;~ 0613:4081
cs=0x613;eip=0x004084; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15778 mov     si, [bp+arg_4] ;~ 0613:4084
cs=0x613;eip=0x004087; 	T(SHL(si, 1));	// 15779 shl     si, 1 ;~ 0613:4087
cs=0x613;eip=0x004089; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15780 mov     bx, [bp+arg_0] ;~ 0613:4089
cs=0x613;eip=0x00408c; 	T(SUB(ax, *(dw*)(raddr(ds,bx+si+0x54))));	// 15781 sub     ax, [bx+si+54h] ;~ 0613:408C
cs=0x613;eip=0x00408f; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 15782 add     ax, [bp+arg_2] ;~ 0613:408F
loc_187a2:
	// 5295 
cs=0x613;eip=0x004092; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 15785 mov     [bp+var_4], ax ;~ 0613:4092
loc_187a5:
	// 5296 
cs=0x613;eip=0x004095; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 15789 mov     ax, [bp+var_2] ;~ 0613:4095
cs=0x613;eip=0x004098; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 15790 add     ax, [bp+var_4] ;~ 0613:4098
cs=0x613;eip=0x00409b; 	X(POP(si));	// 15791 pop     si ;~ 0613:409B
cs=0x613;eip=0x00409c; 	X(POP(di));	// 15792 pop     di ;~ 0613:409C
cs=0x613;eip=0x00409d; 	T(MOV(sp, bp));	// 15793 mov     sp, bp ;~ 0613:409D
cs=0x613;eip=0x00409f; 	X(POP(bp));	// 15794 pop     bp ;~ 0613:409F
cs=0x613;eip=0x0040a0; 	J(RETF(0));	// 15795 retf ;~ 0613:40A0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kcarstate_rc_op: 	goto carstate_rc_op;
        case m2c::kloc_18636: 	goto loc_18636;
        case m2c::kloc_18654: 	goto loc_18654;
        case m2c::kloc_18659: 	goto loc_18659;
        case m2c::kloc_18689: 	goto loc_18689;
        case m2c::kloc_186b7: 	goto loc_186b7;
        case m2c::kloc_186c8: 	goto loc_186c8;
        case m2c::kloc_186db: 	goto loc_186db;
        case m2c::kloc_186f3: 	goto loc_186f3;
        case m2c::kloc_186fa: 	goto loc_186fa;
        case m2c::kloc_18716: 	goto loc_18716;
        case m2c::kloc_18724: 	goto loc_18724;
        case m2c::kloc_18739: 	goto loc_18739;
        case m2c::kloc_18748: 	goto loc_18748;
        case m2c::kloc_18764: 	goto loc_18764;
        case m2c::kloc_18791: 	goto loc_18791;
        case m2c::kloc_187a2: 	goto loc_187a2;
        case m2c::kloc_187a5: 	goto loc_187a5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool upd_statef20_from_steer_input(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    upd_statef20_from_steer_input:
    _begin:
#undef var_4
#define var_4 -4
	// 15807 var_4           = byte ptr -4 ;~ 0613:40A2
#undef arg_0
#define arg_0 6
	// 15808 arg_0           = byte ptr  6 ;~ 0613:40A2
cs=0x613;eip=0x0040a2; 	X(PUSH(bp));	// 15810 push    bp ;~ 0613:40A2
cs=0x613;eip=0x0040a3; 	T(MOV(bp, sp));	// 15811 mov     bp, sp ;~ 0613:40A3
cs=0x613;eip=0x0040a5; 	T(SUB(sp, 6));	// 15812 sub     sp, 6 ;~ 0613:40A5
cs=0x613;eip=0x0040a8; 	X(PUSH(di));	// 15813 push    di ;~ 0613:40A8
cs=0x613;eip=0x0040a9; 	X(PUSH(si));	// 15814 push    si ;~ 0613:40A9
cs=0x613;eip=0x0040aa; 	T(MOV(di, word_44606));	// 15815 mov     di, word_44606 ;~ 0613:40AA
cs=0x613;eip=0x0040ae; 	T(MOV(ax, word_44612));	// 15816 mov     ax, word_44612 ;~ 0613:40AE
cs=0x613;eip=0x0040b1; 	T(MOV(cl, 0x0A));	// 15817 mov     cl, 0Ah ;~ 0613:40B1
cs=0x613;eip=0x0040b3; 	T(SHR(ax, cl));	// 15818 shr     ax, cl ;~ 0613:40B3
cs=0x613;eip=0x0040b5; 	T(AND(al, 0x0FC));	// 15819 and     al, 0FCh ;~ 0613:40B5
cs=0x613;eip=0x0040b7; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 15820 mov     [bp+var_4], al ;~ 0613:40B7
cs=0x613;eip=0x0040ba; 	T(CBW);	// 15821 cbw ;~ 0613:40BA
cs=0x613;eip=0x0040bb; 	T(MOV(bx, ax));	// 15822 mov     bx, ax ;~ 0613:40BB
cs=0x613;eip=0x0040bd; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 15823 mov     al, [bp+arg_0] ;~ 0613:40BD
cs=0x613;eip=0x0040c0; 	T(CBW);	// 15824 cbw ;~ 0613:40C0
cs=0x613;eip=0x0040c1; 	T(ADD(bx, ax));	// 15825 add     bx, ax ;~ 0613:40C1
cs=0x613;eip=0x0040c3; 	T(ADD(bx, steerwhlresptable_ptr));	// 15826 add     bx, steerWhlRespTable_ptr ;~ 0613:40C3
cs=0x613;eip=0x0040c7; 	T(MOV(al, *(raddr(ds,bx))));	// 15827 mov     al, [bx] ;~ 0613:40C7
cs=0x613;eip=0x0040c9; 	T(CBW);	// 15828 cbw ;~ 0613:40C9
cs=0x613;eip=0x0040ca; 	T(MOV(si, ax));	// 15829 mov     si, ax ;~ 0613:40CA
cs=0x613;eip=0x0040cc; 	T(OR(si, si));	// 15830 or      si, si ;~ 0613:40CC
cs=0x613;eip=0x0040ce; 	J(JLE(loc_187e8));	// 15831 jle     short loc_187E8 ;~ 0613:40CE
cs=0x613;eip=0x0040d0; 	T(CMP(di, 0x0FFFF));	// 15832 cmp     di, 0FFFFh ;~ 0613:40D0
cs=0x613;eip=0x0040d3; 	J(JGE(loc_187f5));	// 15833 jge     short loc_187F5 ;~ 0613:40D3
cs=0x613;eip=0x0040d5; 	J(JMP(loc_187f1));	// 15834 jmp     short loc_187F1 ;~ 0613:40D5
loc_187e8:
	// 5297 
cs=0x613;eip=0x0040d8; 	T(OR(si, si));	// 15839 or      si, si ;~ 0613:40D8
cs=0x613;eip=0x0040da; 	J(JZ(loc_187f5));	// 15840 jz      short loc_187F5 ;~ 0613:40DA
cs=0x613;eip=0x0040dc; 	T(CMP(di, 1));	// 15841 cmp     di, 1 ;~ 0613:40DC
cs=0x613;eip=0x0040df; 	J(JLE(loc_187f5));	// 15842 jle     short loc_187F5 ;~ 0613:40DF
loc_187f1:
	// 5298 
cs=0x613;eip=0x0040e1; 	T(MOV(cl, 2));	// 15845 mov     cl, 2 ;~ 0613:40E1
cs=0x613;eip=0x0040e3; 	T(SHL(si, cl));	// 15846 shl     si, cl ;~ 0613:40E3
loc_187f5:
	// 5299 
cs=0x613;eip=0x0040e5; 	T(OR(si, si));	// 15850 or      si, si ;~ 0613:40E5
cs=0x613;eip=0x0040e7; 	J(JNZ(loc_18835));	// 15851 jnz     short loc_18835 ;~ 0613:40E7
cs=0x613;eip=0x0040e9; 	T(CMP(word_44612, 0));	// 15852 cmp     word_44612, 0 ;~ 0613:40E9
cs=0x613;eip=0x0040ee; 	J(JZ(loc_18835));	// 15853 jz      short loc_18835 ;~ 0613:40EE
cs=0x613;eip=0x0040f0; 	T(OR(di, di));	// 15854 or      di, di ;~ 0613:40F0
cs=0x613;eip=0x0040f2; 	J(JZ(loc_18835));	// 15855 jz      short loc_18835 ;~ 0613:40F2
cs=0x613;eip=0x0040f4; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 15856 mov     al, [bp+var_4] ;~ 0613:40F4
cs=0x613;eip=0x0040f7; 	T(CBW);	// 15857 cbw ;~ 0613:40F7
cs=0x613;eip=0x0040f8; 	T(MOV(bx, ax));	// 15858 mov     bx, ax ;~ 0613:40F8
cs=0x613;eip=0x0040fa; 	T(ADD(bx, steerwhlresptable_ptr));	// 15859 add     bx, steerWhlRespTable_ptr ;~ 0613:40FA
cs=0x613;eip=0x0040fe; 	T(MOV(al, *(raddr(ds,bx+1))));	// 15860 mov     al, [bx+1]      ; tables?! With 40h values!! ;~ 0613:40FE
cs=0x613;eip=0x004101; 	T(CBW);	// 15861 cbw ;~ 0613:4101
cs=0x613;eip=0x004102; 	T(MOV(si, ax));	// 15862 mov     si, ax ;~ 0613:4102
cs=0x613;eip=0x004104; 	T(SHL(si, 1));	// 15863 shl     si, 1 ;~ 0613:4104
cs=0x613;eip=0x004106; 	T(OR(di, di));	// 15864 or      di, di ;~ 0613:4106
cs=0x613;eip=0x004108; 	J(JGE(loc_18820));	// 15865 jge     short loc_18820 ;~ 0613:4108
cs=0x613;eip=0x00410a; 	T(MOV(ax, di));	// 15866 mov     ax, di ;~ 0613:410A
cs=0x613;eip=0x00410c; 	T(NEG(ax));	// 15867 neg     ax ;~ 0613:410C
cs=0x613;eip=0x00410e; 	J(JMP(loc_18822));	// 15868 jmp     short loc_18822 ;~ 0613:410E
loc_18820:
	// 5300 
cs=0x613;eip=0x004110; 	T(MOV(ax, di));	// 15872 mov     ax, di ;~ 0613:4110
loc_18822:
	// 5301 
cs=0x613;eip=0x004112; 	T(CMP(ax, si));	// 15875 cmp     ax, si ;~ 0613:4112
cs=0x613;eip=0x004114; 	J(JLE(loc_1882e));	// 15876 jle     short loc_1882E ;~ 0613:4114
cs=0x613;eip=0x004116; 	T(OR(di, di));	// 15877 or      di, di ;~ 0613:4116
cs=0x613;eip=0x004118; 	J(JLE(loc_18835));	// 15878 jle     short loc_18835 ;~ 0613:4118
cs=0x613;eip=0x00411a; 	T(MOV(ax, si));	// 15879 mov     ax, si ;~ 0613:411A
cs=0x613;eip=0x00411c; 	J(JMP(loc_18831));	// 15880 jmp     short loc_18831 ;~ 0613:411C
loc_1882e:
	// 5302 
cs=0x613;eip=0x00411e; 	T(MOV(ax, word_44606));	// 15884 mov     ax, word_44606 ;~ 0613:411E
loc_18831:
	// 5303 
cs=0x613;eip=0x004121; 	T(NEG(ax));	// 15887 neg     ax ;~ 0613:4121
cs=0x613;eip=0x004123; 	T(MOV(si, ax));	// 15888 mov     si, ax ;~ 0613:4123
loc_18835:
	// 5304 
cs=0x613;eip=0x004125; 	T(CMP(framespersec, 0x0A));	// 15892 cmp     framespersec, 0Ah ;~ 0613:4125
cs=0x613;eip=0x00412a; 	J(JNZ(loc_18850));	// 15893 jnz     short loc_18850 ;~ 0613:412A
cs=0x613;eip=0x00412c; 	T(CMP(si, 0x0A0));	// 15894 cmp     si, 0A0h ; ' ' ;~ 0613:412C
cs=0x613;eip=0x004130; 	J(JLE(loc_18845));	// 15895 jle     short loc_18845 ;~ 0613:4130
cs=0x613;eip=0x004132; 	T(MOV(si, 0x0A0));	// 15896 mov     si, 0A0h ; ' ' ;~ 0613:4132
loc_18845:
	// 5305 
cs=0x613;eip=0x004135; 	T(CMP(si, 0x0FF60));	// 15899 cmp     si, 0FF60h ;~ 0613:4135
cs=0x613;eip=0x004139; 	J(JGE(loc_18860));	// 15900 jge     short loc_18860 ;~ 0613:4139
cs=0x613;eip=0x00413b; 	T(MOV(si, 0x0FF60));	// 15901 mov     si, 0FF60h ;~ 0613:413B
cs=0x613;eip=0x00413e; 	J(JMP(loc_18860));	// 15902 jmp     short loc_18860 ;~ 0613:413E
loc_18850:
	// 5306 
cs=0x613;eip=0x004140; 	T(CMP(si, 0x50));	// 15906 cmp     si, 50h ; 'P' ;~ 0613:4140
cs=0x613;eip=0x004143; 	J(JLE(loc_18858));	// 15907 jle     short loc_18858 ;~ 0613:4143
cs=0x613;eip=0x004145; 	T(MOV(si, 0x50));	// 15908 mov     si, 50h ; 'P' ;~ 0613:4145
loc_18858:
	// 5307 
cs=0x613;eip=0x004148; 	T(CMP(si, 0x0FFB0));	// 15911 cmp     si, 0FFB0h ;~ 0613:4148
cs=0x613;eip=0x00414b; 	J(JGE(loc_18860));	// 15912 jge     short loc_18860 ;~ 0613:414B
cs=0x613;eip=0x00414d; 	T(MOV(si, 0x0FFB0));	// 15913 mov     si, 0FFB0h ;~ 0613:414D
loc_18860:
	// 5308 
cs=0x613;eip=0x004150; 	T(ADD(di, si));	// 15917 add     di, si ;~ 0613:4150
cs=0x613;eip=0x004152; 	T(CMP(di, 0x0F0));	// 15918 cmp     di, 0F0h ; 'ğ' ;~ 0613:4152
cs=0x613;eip=0x004156; 	J(JLE(loc_1886b));	// 15919 jle     short loc_1886B ;~ 0613:4156
cs=0x613;eip=0x004158; 	T(MOV(di, 0x0F0));	// 15920 mov     di, 0F0h ; 'ğ' ;~ 0613:4158
loc_1886b:
	// 5309 
cs=0x613;eip=0x00415b; 	T(CMP(di, 0x0FF10));	// 15923 cmp     di, 0FF10h ;~ 0613:415B
cs=0x613;eip=0x00415f; 	J(JGE(loc_18874));	// 15924 jge     short loc_18874 ;~ 0613:415F
cs=0x613;eip=0x004161; 	T(MOV(di, 0x0FF10));	// 15925 mov     di, 0FF10h ;~ 0613:4161
loc_18874:
	// 5310 
cs=0x613;eip=0x004164; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 15928 mov     al, [bp+var_4] ;~ 0613:4164
cs=0x613;eip=0x004167; 	T(CBW);	// 15929 cbw ;~ 0613:4167
cs=0x613;eip=0x004168; 	T(MOV(bx, ax));	// 15930 mov     bx, ax ;~ 0613:4168
cs=0x613;eip=0x00416a; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 15931 mov     al, [bp+arg_0] ;~ 0613:416A
cs=0x613;eip=0x00416d; 	T(CBW);	// 15932 cbw ;~ 0613:416D
cs=0x613;eip=0x00416e; 	T(ADD(bx, ax));	// 15933 add     bx, ax ;~ 0613:416E
cs=0x613;eip=0x004170; 	T(ADD(bx, steerwhlresptable_ptr));	// 15934 add     bx, steerWhlRespTable_ptr ;~ 0613:4170
cs=0x613;eip=0x004174; 	T(CMP(*(raddr(ds,bx)), 0));	// 15935 cmp     byte ptr [bx], 0 ;~ 0613:4174
cs=0x613;eip=0x004177; 	J(JNZ(loc_18899));	// 15936 jnz     short loc_18899 ;~ 0613:4177
cs=0x613;eip=0x004179; 	X(PUSH(di));	// 15937 push    di              ; int ;~ 0613:4179
cs=0x613;eip=0x00417a; 	J(CALLF(_abs,0));	// 15938 call    _abs ;~ 0613:417A
cs=0x613;eip=0x00417f; 	T(ADD(sp, 2));	// 15939 add     sp, 2 ;~ 0613:417F
cs=0x613;eip=0x004182; 	T(CMP(ax, 8));	// 15940 cmp     ax, 8 ;~ 0613:4182
cs=0x613;eip=0x004185; 	J(JGE(loc_18899));	// 15941 jge     short loc_18899 ;~ 0613:4185
cs=0x613;eip=0x004187; 	T(SUB(di, di));	// 15942 sub     di, di ;~ 0613:4187
loc_18899:
	// 5311 
cs=0x613;eip=0x004189; 	X(MOV(word_44606, di));	// 15946 mov     word_44606, di ;~ 0613:4189
cs=0x613;eip=0x00418d; 	X(POP(si));	// 15947 pop     si ;~ 0613:418D
cs=0x613;eip=0x00418e; 	X(POP(di));	// 15948 pop     di ;~ 0613:418E
cs=0x613;eip=0x00418f; 	T(MOV(sp, bp));	// 15949 mov     sp, bp ;~ 0613:418F
cs=0x613;eip=0x004191; 	X(POP(bp));	// 15950 pop     bp ;~ 0613:4191
cs=0x613;eip=0x004192; 	J(RETF(0));	// 15951 retf ;~ 0613:4192

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_187e8: 	goto loc_187e8;
        case m2c::kloc_187f1: 	goto loc_187f1;
        case m2c::kloc_187f5: 	goto loc_187f5;
        case m2c::kloc_18820: 	goto loc_18820;
        case m2c::kloc_18822: 	goto loc_18822;
        case m2c::kloc_1882e: 	goto loc_1882e;
        case m2c::kloc_18831: 	goto loc_18831;
        case m2c::kloc_18835: 	goto loc_18835;
        case m2c::kloc_18845: 	goto loc_18845;
        case m2c::kloc_18850: 	goto loc_18850;
        case m2c::kloc_18858: 	goto loc_18858;
        case m2c::kloc_18860: 	goto loc_18860;
        case m2c::kloc_1886b: 	goto loc_1886b;
        case m2c::kloc_18874: 	goto loc_18874;
        case m2c::kloc_18899: 	goto loc_18899;
        case m2c::kupd_statef20_from_steer_input: 	goto upd_statef20_from_steer_input;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_carstate(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_carstate:
    _begin:
#undef var_34
#define var_34 -0x34
	// 15964 var_34          = dword ptr -34h ;~ 0613:4194
#undef var_30
#define var_30 -0x30
	// 15965 var_30          = word ptr -30h ;~ 0613:4194
#undef var_2e
#define var_2e -0x2E
	// 15966 var_2E          = word ptr -2Eh ;~ 0613:4194
#undef var_2c
#define var_2c -0x2C
	// 15967 var_2C          = word ptr -2Ch ;~ 0613:4194
#undef var_2a
#define var_2a -0x2A
	// 15968 var_2A          = word ptr -2Ah ;~ 0613:4194
#undef var_28
#define var_28 -0x28
	// 15969 var_28          = word ptr -28h ;~ 0613:4194
#undef var_26
#define var_26 -0x26
	// 15970 var_26          = word ptr -26h ;~ 0613:4194
#undef var_24
#define var_24 -0x24
	// 15971 var_24          = word ptr -24h ;~ 0613:4194
#undef var_22
#define var_22 -0x22
	// 15972 var_22          = word ptr -22h ;~ 0613:4194
#undef var_20
#define var_20 -0x20
	// 15973 var_20          = word ptr -20h ;~ 0613:4194
#undef var_1e
#define var_1e -0x1E
	// 15974 var_1E          = word ptr -1Eh ;~ 0613:4194
#undef var_1c
#define var_1c -0x1C
	// 15975 var_1C          = word ptr -1Ch ;~ 0613:4194
#undef var_1a
#define var_1a -0x1A
	// 15976 var_1A          = word ptr -1Ah ;~ 0613:4194
#undef var_18
#define var_18 -0x18
	// 15977 var_18          = word ptr -18h ;~ 0613:4194
#undef var_16
#define var_16 -0x16
	// 15978 var_16          = byte ptr -16h ;~ 0613:4194
#undef var_14
#define var_14 -0x14
	// 15979 var_14          = word ptr -14h ;~ 0613:4194
#undef var_12
#define var_12 -0x12
	// 15980 var_12          = word ptr -12h ;~ 0613:4194
#undef var_10
#define var_10 -0x10
	// 15981 var_10          = word ptr -10h ;~ 0613:4194
#undef var_e
#define var_e -0x0E
	// 15982 var_E           = word ptr -0Eh ;~ 0613:4194
#undef var_c
#define var_c -0x0C
	// 15983 var_C           = word ptr -0Ch ;~ 0613:4194
#undef var_a
#define var_a -0x0A
	// 15984 var_A           = word ptr -0Ah ;~ 0613:4194
#undef var_8
#define var_8 -8
	// 15985 var_8           = word ptr -8 ;~ 0613:4194
#undef var_6
#define var_6 -6
	// 15986 var_6           = word ptr -6 ;~ 0613:4194
#undef var_4
#define var_4 -4
	// 15987 var_4           = word ptr -4 ;~ 0613:4194
#undef var_2
#define var_2 -2
	// 15988 var_2           = word ptr -2 ;~ 0613:4194
cs=0x613;eip=0x004194; 	X(PUSH(bp));	// 15990 push    bp ;~ 0613:4194
cs=0x613;eip=0x004195; 	T(MOV(bp, sp));	// 15991 mov     bp, sp ;~ 0613:4195
cs=0x613;eip=0x004197; 	T(SUB(sp, 0x34));	// 15992 sub     sp, 34h ;~ 0613:4197
cs=0x613;eip=0x00419a; 	X(PUSH(di));	// 15993 push    di ;~ 0613:419A
cs=0x613;eip=0x00419b; 	X(PUSH(si));	// 15994 push    si ;~ 0613:419B
cs=0x613;eip=0x00419c; 	T(CMP(is_in_replay, 0));	// 15995 cmp     is_in_replay, 0 ;~ 0613:419C
cs=0x613;eip=0x0041a1; 	J(JNZ(loc_188b6));	// 15996 jnz     short loc_188B6 ;~ 0613:41A1
cs=0x613;eip=0x0041a3; 	J(JMP(loc_1893a));	// 15997 jmp     loc_1893A ;~ 0613:41A3
loc_188b6:
	// 5312 
cs=0x613;eip=0x0041a6; 	T(CMP(byte_459d8, 0));	// 16001 cmp     byte_459D8, 0 ;~ 0613:41A6
cs=0x613;eip=0x0041ab; 	J(JZ(loc_18925));	// 16002 jz      short loc_18925 ;~ 0613:41AB
cs=0x613;eip=0x0041ad; 	T(MOV(ax, word_449e4));	// 16003 mov     ax, word_449E4 ;~ 0613:41AD
cs=0x613;eip=0x0041b0; 	X(MOV(word_44d1e, ax));	// 16004 mov     word_44D1E, ax ;~ 0613:41B0
cs=0x613;eip=0x0041b3; 	T(TEST(byte_42d26, 6));	// 16005 test    byte_42D26, 6 ;~ 0613:41B3
cs=0x613;eip=0x0041b8; 	J(JZ(loc_188d6));	// 16006 jz      short loc_188D6 ;~ 0613:41B8
cs=0x613;eip=0x0041ba; 	X(PUSH(word_43964));	// 16007 push    word_43964 ;~ 0613:41BA
cs=0x613;eip=0x0041be; 	J(CALLF(audio_op_unk7,0));	// 16008 call    audio_op_unk7 ;~ 0613:41BE
cs=0x613;eip=0x0041c3; 	T(ADD(sp, 2));	// 16009 add     sp, 2 ;~ 0613:41C3
loc_188d6:
	// 5313 
cs=0x613;eip=0x0041c6; 	T(TEST(byte_42d26, 1));	// 16012 test    byte_42D26, 1 ;~ 0613:41C6
cs=0x613;eip=0x0041cb; 	J(JZ(loc_188e9));	// 16013 jz      short loc_188E9 ;~ 0613:41CB
cs=0x613;eip=0x0041cd; 	X(PUSH(word_43964));	// 16014 push    word_43964 ;~ 0613:41CD
cs=0x613;eip=0x0041d1; 	J(CALLF(audio_function2,0));	// 16015 call    audio_function2 ;~ 0613:41D1
cs=0x613;eip=0x0041d6; 	T(ADD(sp, 2));	// 16016 add     sp, 2 ;~ 0613:41D6
loc_188e9:
	// 5314 
cs=0x613;eip=0x0041d9; 	T(CMP(byte_449aa, 0));	// 16019 cmp     byte_449AA, 0 ;~ 0613:41D9
cs=0x613;eip=0x0041de; 	J(JZ(loc_18916));	// 16020 jz      short loc_18916 ;~ 0613:41DE
cs=0x613;eip=0x0041e0; 	T(TEST(byte_42d2a, 6));	// 16021 test    byte_42D2A, 6 ;~ 0613:41E0
cs=0x613;eip=0x0041e5; 	J(JZ(loc_18903));	// 16022 jz      short loc_18903 ;~ 0613:41E5
cs=0x613;eip=0x0041e7; 	X(PUSH(word_4408c));	// 16023 push    word_4408C ;~ 0613:41E7
cs=0x613;eip=0x0041eb; 	J(CALLF(audio_op_unk7,0));	// 16024 call    audio_op_unk7 ;~ 0613:41EB
cs=0x613;eip=0x0041f0; 	T(ADD(sp, 2));	// 16025 add     sp, 2 ;~ 0613:41F0
loc_18903:
	// 5315 
cs=0x613;eip=0x0041f3; 	T(TEST(byte_42d2a, 1));	// 16028 test    byte_42D2A, 1 ;~ 0613:41F3
cs=0x613;eip=0x0041f8; 	J(JZ(loc_18916));	// 16029 jz      short loc_18916 ;~ 0613:41F8
cs=0x613;eip=0x0041fa; 	X(PUSH(word_4408c));	// 16030 push    word_4408C ;~ 0613:41FA
cs=0x613;eip=0x0041fe; 	J(CALLF(audio_function2,0));	// 16031 call    audio_function2 ;~ 0613:41FE
cs=0x613;eip=0x004203; 	T(ADD(sp, 2));	// 16032 add     sp, 2 ;~ 0613:4203
loc_18916:
	// 5316 
cs=0x613;eip=0x004206; 	X(MOV(byte_459d8, 0));	// 16036 mov     byte_459D8, 0 ;~ 0613:4206
cs=0x613;eip=0x00420b; 	X(MOV(byte_42d26, 0));	// 16037 mov     byte_42D26, 0 ;~ 0613:420B
cs=0x613;eip=0x004210; 	X(MOV(byte_42d2a, 0));	// 16038 mov     byte_42D2A, 0 ;~ 0613:4210
loc_18925:
	// 5317 
cs=0x613;eip=0x004215; 	T(MOV(al, byte_3be02));	// 16041 mov     al, byte_3BE02 ;~ 0613:4215
cs=0x613;eip=0x004218; 	T(CMP(is_in_replay, al));	// 16042 cmp     is_in_replay, al ;~ 0613:4218
cs=0x613;eip=0x00421c; 	J(JNZ(loc_18931));	// 16043 jnz     short loc_18931 ;~ 0613:421C
cs=0x613;eip=0x00421e; 	J(JMP(loc_18ccc));	// 16044 jmp     loc_18CCC ;~ 0613:421E
loc_18931:
	// 5318 
cs=0x613;eip=0x004221; 	J(CALLF(sub_38178,0));	// 16048 call    sub_38178 ;~ 0613:4221
cs=0x613;eip=0x004226; 	J(JMP(loc_18ccc));	// 16049 jmp     loc_18CCC ;~ 0613:4226
loc_1893a:
	// 5319 
cs=0x613;eip=0x00422a; 	T(MOV(ax, word_445f2));	// 16054 mov     ax, word_445F2 ;~ 0613:422A
cs=0x613;eip=0x00422d; 	T(MOV(dx, word_445f4));	// 16055 mov     dx, word_445F4 ;~ 0613:422D
cs=0x613;eip=0x004231; 	T(MOV(cl, 6));	// 16056 mov     cl, 6 ;~ 0613:4231
loc_18943:
	// 5320 
cs=0x613;eip=0x004233; 	T(SAR(dx, 1));	// 16059 sar     dx, 1 ;~ 0613:4233
cs=0x613;eip=0x004235; 	T(RCR(ax, 1));	// 16060 rcr     ax, 1 ;~ 0613:4235
cs=0x613;eip=0x004237; 	T(DEC(cl));	// 16061 dec     cl ;~ 0613:4237
cs=0x613;eip=0x004239; 	J(JNZ(loc_18943));	// 16062 jnz     short loc_18943 ;~ 0613:4239
cs=0x613;eip=0x00423b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 16063 mov     [bp+var_1C], ax ;~ 0613:423B
cs=0x613;eip=0x00423e; 	T(MOV(ax, word_445f6));	// 16064 mov     ax, word_445F6 ;~ 0613:423E
cs=0x613;eip=0x004241; 	T(MOV(dx, word_445f8));	// 16065 mov     dx, word_445F8 ;~ 0613:4241
cs=0x613;eip=0x004245; 	T(MOV(cl, 6));	// 16066 mov     cl, 6 ;~ 0613:4245
loc_18957:
	// 5321 
cs=0x613;eip=0x004247; 	T(SAR(dx, 1));	// 16069 sar     dx, 1 ;~ 0613:4247
cs=0x613;eip=0x004249; 	T(RCR(ax, 1));	// 16070 rcr     ax, 1 ;~ 0613:4249
cs=0x613;eip=0x00424b; 	T(DEC(cl));	// 16071 dec     cl ;~ 0613:424B
cs=0x613;eip=0x00424d; 	J(JNZ(loc_18957));	// 16072 jnz     short loc_18957 ;~ 0613:424D
cs=0x613;eip=0x00424f; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 16073 mov     [bp+var_1A], ax ;~ 0613:424F
cs=0x613;eip=0x004252; 	T(MOV(ax, word_445fa));	// 16074 mov     ax, word_445FA ;~ 0613:4252
cs=0x613;eip=0x004255; 	T(MOV(dx, word_445fc));	// 16075 mov     dx, word_445FC ;~ 0613:4255
cs=0x613;eip=0x004259; 	T(MOV(cl, 6));	// 16076 mov     cl, 6 ;~ 0613:4259
loc_1896b:
	// 5322 
cs=0x613;eip=0x00425b; 	T(SAR(dx, 1));	// 16079 sar     dx, 1 ;~ 0613:425B
cs=0x613;eip=0x00425d; 	T(RCR(ax, 1));	// 16080 rcr     ax, 1 ;~ 0613:425D
cs=0x613;eip=0x00425f; 	T(DEC(cl));	// 16081 dec     cl ;~ 0613:425F
cs=0x613;eip=0x004261; 	J(JNZ(loc_1896b));	// 16082 jnz     short loc_1896B ;~ 0613:4261
cs=0x613;eip=0x004263; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 16083 mov     [bp+var_18], ax ;~ 0613:4263
cs=0x613;eip=0x004266; 	T(MOV(ax, word_445e6));	// 16084 mov     ax, word_445E6 ;~ 0613:4266
cs=0x613;eip=0x004269; 	T(MOV(dx, word_445e8));	// 16085 mov     dx, word_445E8 ;~ 0613:4269
cs=0x613;eip=0x00426d; 	T(MOV(cl, 6));	// 16086 mov     cl, 6 ;~ 0613:426D
loc_1897f:
	// 5323 
cs=0x613;eip=0x00426f; 	T(SAR(dx, 1));	// 16089 sar     dx, 1 ;~ 0613:426F
cs=0x613;eip=0x004271; 	T(RCR(ax, 1));	// 16090 rcr     ax, 1 ;~ 0613:4271
cs=0x613;eip=0x004273; 	T(DEC(cl));	// 16091 dec     cl ;~ 0613:4273
cs=0x613;eip=0x004275; 	J(JNZ(loc_1897f));	// 16092 jnz     short loc_1897F ;~ 0613:4275
cs=0x613;eip=0x004277; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 16093 mov     [bp+var_8], ax ;~ 0613:4277
cs=0x613;eip=0x00427a; 	T(MOV(ax, word_445ea));	// 16094 mov     ax, word_445EA ;~ 0613:427A
cs=0x613;eip=0x00427d; 	T(MOV(dx, word_445ec));	// 16095 mov     dx, word_445EC ;~ 0613:427D
cs=0x613;eip=0x004281; 	T(MOV(cl, 6));	// 16096 mov     cl, 6 ;~ 0613:4281
loc_18993:
	// 5324 
cs=0x613;eip=0x004283; 	T(SAR(dx, 1));	// 16099 sar     dx, 1 ;~ 0613:4283
cs=0x613;eip=0x004285; 	T(RCR(ax, 1));	// 16100 rcr     ax, 1 ;~ 0613:4285
cs=0x613;eip=0x004287; 	T(DEC(cl));	// 16101 dec     cl ;~ 0613:4287
cs=0x613;eip=0x004289; 	J(JNZ(loc_18993));	// 16102 jnz     short loc_18993 ;~ 0613:4289
cs=0x613;eip=0x00428b; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 16103 mov     [bp+var_6], ax ;~ 0613:428B
cs=0x613;eip=0x00428e; 	T(MOV(ax, word_445ee));	// 16104 mov     ax, word_445EE ;~ 0613:428E
cs=0x613;eip=0x004291; 	T(MOV(dx, word_445f0));	// 16105 mov     dx, word_445F0 ;~ 0613:4291
cs=0x613;eip=0x004295; 	T(MOV(cl, 6));	// 16106 mov     cl, 6 ;~ 0613:4295
loc_189a7:
	// 5325 
cs=0x613;eip=0x004297; 	T(SAR(dx, 1));	// 16109 sar     dx, 1 ;~ 0613:4297
cs=0x613;eip=0x004299; 	T(RCR(ax, 1));	// 16110 rcr     ax, 1 ;~ 0613:4299
cs=0x613;eip=0x00429b; 	T(DEC(cl));	// 16111 dec     cl ;~ 0613:429B
cs=0x613;eip=0x00429d; 	J(JNZ(loc_189a7));	// 16112 jnz     short loc_189A7 ;~ 0613:429D
cs=0x613;eip=0x00429f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 16113 mov     [bp+var_4], ax ;~ 0613:429F
cs=0x613;eip=0x0042a2; 	T(CMP(byte_449aa, 0));	// 16114 cmp     byte_449AA, 0 ;~ 0613:42A2
cs=0x613;eip=0x0042a7; 	J(JZ(loc_18a31));	// 16115 jz      short loc_18A31 ;~ 0613:42A7
cs=0x613;eip=0x0042a9; 	T(MOV(ax, word_446c2));	// 16116 mov     ax, word_446C2 ;~ 0613:42A9
cs=0x613;eip=0x0042ac; 	T(MOV(dx, word_446c4));	// 16117 mov     dx, word_446C4 ;~ 0613:42AC
cs=0x613;eip=0x0042b0; 	T(MOV(cl, 6));	// 16118 mov     cl, 6 ;~ 0613:42B0
loc_189c2:
	// 5326 
cs=0x613;eip=0x0042b2; 	T(SAR(dx, 1));	// 16121 sar     dx, 1 ;~ 0613:42B2
cs=0x613;eip=0x0042b4; 	T(RCR(ax, 1));	// 16122 rcr     ax, 1 ;~ 0613:42B4
cs=0x613;eip=0x0042b6; 	T(DEC(cl));	// 16123 dec     cl ;~ 0613:42B6
cs=0x613;eip=0x0042b8; 	J(JNZ(loc_189c2));	// 16124 jnz     short loc_189C2 ;~ 0613:42B8
cs=0x613;eip=0x0042ba; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 16125 mov     [bp+var_24], ax ;~ 0613:42BA
cs=0x613;eip=0x0042bd; 	T(MOV(ax, word_446c6));	// 16126 mov     ax, word_446C6 ;~ 0613:42BD
cs=0x613;eip=0x0042c0; 	T(MOV(dx, word_446c8));	// 16127 mov     dx, word_446C8 ;~ 0613:42C0
cs=0x613;eip=0x0042c4; 	T(MOV(cl, 6));	// 16128 mov     cl, 6 ;~ 0613:42C4
loc_189d6:
	// 5327 
cs=0x613;eip=0x0042c6; 	T(SAR(dx, 1));	// 16131 sar     dx, 1 ;~ 0613:42C6
cs=0x613;eip=0x0042c8; 	T(RCR(ax, 1));	// 16132 rcr     ax, 1 ;~ 0613:42C8
cs=0x613;eip=0x0042ca; 	T(DEC(cl));	// 16133 dec     cl ;~ 0613:42CA
cs=0x613;eip=0x0042cc; 	J(JNZ(loc_189d6));	// 16134 jnz     short loc_189D6 ;~ 0613:42CC
cs=0x613;eip=0x0042ce; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 16135 mov     [bp+var_22], ax ;~ 0613:42CE
cs=0x613;eip=0x0042d1; 	T(MOV(ax, word_446ca));	// 16136 mov     ax, word_446CA ;~ 0613:42D1
cs=0x613;eip=0x0042d4; 	T(MOV(dx, word_446cc));	// 16137 mov     dx, word_446CC ;~ 0613:42D4
cs=0x613;eip=0x0042d8; 	T(MOV(cl, 6));	// 16138 mov     cl, 6 ;~ 0613:42D8
loc_189ea:
	// 5328 
cs=0x613;eip=0x0042da; 	T(SAR(dx, 1));	// 16141 sar     dx, 1 ;~ 0613:42DA
cs=0x613;eip=0x0042dc; 	T(RCR(ax, 1));	// 16142 rcr     ax, 1 ;~ 0613:42DC
cs=0x613;eip=0x0042de; 	T(DEC(cl));	// 16143 dec     cl ;~ 0613:42DE
cs=0x613;eip=0x0042e0; 	J(JNZ(loc_189ea));	// 16144 jnz     short loc_189EA ;~ 0613:42E0
cs=0x613;eip=0x0042e2; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 16145 mov     [bp+var_20], ax ;~ 0613:42E2
cs=0x613;eip=0x0042e5; 	T(MOV(ax, word_446b6));	// 16146 mov     ax, word_446B6 ;~ 0613:42E5
cs=0x613;eip=0x0042e8; 	T(MOV(dx, word_446b8));	// 16147 mov     dx, word_446B8 ;~ 0613:42E8
cs=0x613;eip=0x0042ec; 	T(MOV(cl, 6));	// 16148 mov     cl, 6 ;~ 0613:42EC
loc_189fe:
	// 5329 
cs=0x613;eip=0x0042ee; 	T(SAR(dx, 1));	// 16151 sar     dx, 1 ;~ 0613:42EE
cs=0x613;eip=0x0042f0; 	T(RCR(ax, 1));	// 16152 rcr     ax, 1 ;~ 0613:42F0
cs=0x613;eip=0x0042f2; 	T(DEC(cl));	// 16153 dec     cl ;~ 0613:42F2
cs=0x613;eip=0x0042f4; 	J(JNZ(loc_189fe));	// 16154 jnz     short loc_189FE ;~ 0613:42F4
cs=0x613;eip=0x0042f6; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 16155 mov     [bp+var_E], ax ;~ 0613:42F6
cs=0x613;eip=0x0042f9; 	T(MOV(ax, word_446ba));	// 16156 mov     ax, word_446BA ;~ 0613:42F9
cs=0x613;eip=0x0042fc; 	T(MOV(dx, word_446bc));	// 16157 mov     dx, word_446BC ;~ 0613:42FC
cs=0x613;eip=0x004300; 	T(MOV(cl, 6));	// 16158 mov     cl, 6 ;~ 0613:4300
loc_18a12:
	// 5330 
cs=0x613;eip=0x004302; 	T(SAR(dx, 1));	// 16161 sar     dx, 1 ;~ 0613:4302
cs=0x613;eip=0x004304; 	T(RCR(ax, 1));	// 16162 rcr     ax, 1 ;~ 0613:4304
cs=0x613;eip=0x004306; 	T(DEC(cl));	// 16163 dec     cl ;~ 0613:4306
cs=0x613;eip=0x004308; 	J(JNZ(loc_18a12));	// 16164 jnz     short loc_18A12 ;~ 0613:4308
cs=0x613;eip=0x00430a; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 16165 mov     [bp+var_C], ax ;~ 0613:430A
cs=0x613;eip=0x00430d; 	T(MOV(ax, word_446be));	// 16166 mov     ax, word_446BE ;~ 0613:430D
cs=0x613;eip=0x004310; 	T(MOV(dx, word_446c0));	// 16167 mov     dx, word_446C0 ;~ 0613:4310
cs=0x613;eip=0x004314; 	T(MOV(cl, 6));	// 16168 mov     cl, 6 ;~ 0613:4314
loc_18a26:
	// 5331 
cs=0x613;eip=0x004316; 	T(SAR(dx, 1));	// 16171 sar     dx, 1 ;~ 0613:4316
cs=0x613;eip=0x004318; 	T(RCR(ax, 1));	// 16172 rcr     ax, 1 ;~ 0613:4318
cs=0x613;eip=0x00431a; 	T(DEC(cl));	// 16173 dec     cl ;~ 0613:431A
cs=0x613;eip=0x00431c; 	J(JNZ(loc_18a26));	// 16174 jnz     short loc_18A26 ;~ 0613:431C
cs=0x613;eip=0x00431e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 16175 mov     [bp+var_A], ax ;~ 0613:431E
loc_18a31:
	// 5332 
cs=0x613;eip=0x004321; 	T(MOV(al, cameramode));	// 16178 mov     al, cameramode ;~ 0613:4321
cs=0x613;eip=0x004324; 	T(CBW);	// 16179 cbw ;~ 0613:4324
cs=0x613;eip=0x004325; 	T(OR(ax, ax));	// 16180 or      ax, ax ;~ 0613:4325
cs=0x613;eip=0x004327; 	J(JZ(loc_18a52));	// 16181 jz      short loc_18A52 ;~ 0613:4327
cs=0x613;eip=0x004329; 	T(CMP(ax, 1));	// 16182 cmp     ax, 1 ;~ 0613:4329
cs=0x613;eip=0x00432c; 	J(JNZ(loc_18a41));	// 16183 jnz     short loc_18A41 ;~ 0613:432C
cs=0x613;eip=0x00432e; 	J(JMP(loc_18b42));	// 16184 jmp     loc_18B42 ;~ 0613:432E
loc_18a41:
	// 5333 
cs=0x613;eip=0x004331; 	T(CMP(ax, 2));	// 16188 cmp     ax, 2 ;~ 0613:4331
cs=0x613;eip=0x004334; 	J(JZ(loc_18a52));	// 16189 jz      short loc_18A52 ;~ 0613:4334
cs=0x613;eip=0x004336; 	T(CMP(ax, 3));	// 16190 cmp     ax, 3 ;~ 0613:4336
cs=0x613;eip=0x004339; 	J(JNZ(loc_18a4e));	// 16191 jnz     short loc_18A4E ;~ 0613:4339
cs=0x613;eip=0x00433b; 	J(JMP(loc_18b6e));	// 16192 jmp     loc_18B6E ;~ 0613:433B
loc_18a4e:
	// 5334 
cs=0x613;eip=0x00433e; 	J(JMP(loc_18a82));	// 16196 jmp     short loc_18A82 ;~ 0613:433E
loc_18a52:
	// 5335 
cs=0x613;eip=0x004342; 	T(CMP(followopponentflag, 0));	// 16203 cmp     followOpponentFlag, 0 ;~ 0613:4342
cs=0x613;eip=0x004347; 	J(JZ(loc_18a6e));	// 16204 jz      short loc_18A6E ;~ 0613:4347
cs=0x613;eip=0x004349; 	T(di = bp+var_14);	// 16205 lea     di, [bp+var_14] ;~ 0613:4349
cs=0x613;eip=0x00434c; 	T(si = bp+var_e);	// 16206 lea     si, [bp+var_E] ;~ 0613:434C
cs=0x613;eip=0x00434f; 	X(PUSH(ss));	// 16207 push    ss ;~ 0613:434F
cs=0x613;eip=0x004350; 	X(POP(es));	// 16208 pop     es ;~ 0613:4350
cs=0x613;eip=0x004351; 	X(MOVSW);	// 16209 movsw ;~ 0613:4351
cs=0x613;eip=0x004352; 	X(MOVSW);	// 16210 movsw ;~ 0613:4352
cs=0x613;eip=0x004353; 	X(MOVSW);	// 16211 movsw ;~ 0613:4353
cs=0x613;eip=0x004354; 	T(di = bp+var_2a);	// 16212 lea     di, [bp+var_2A] ;~ 0613:4354
cs=0x613;eip=0x004357; 	T(si = bp+var_24);	// 16213 lea     si, [bp+var_24] ;~ 0613:4357
loc_18a6a:
	// 5336 
cs=0x613;eip=0x00435a; 	X(PUSH(ss));	// 16216 push    ss ;~ 0613:435A
cs=0x613;eip=0x00435b; 	X(POP(es));	// 16217 pop     es ;~ 0613:435B
cs=0x613;eip=0x00435c; 	J(JMP(loc_18a7f));	// 16218 jmp     short loc_18A7F ;~ 0613:435C
loc_18a6e:
	// 5337 
cs=0x613;eip=0x00435e; 	T(di = bp+var_14);	// 16222 lea     di, [bp+var_14] ;~ 0613:435E
cs=0x613;eip=0x004361; 	T(si = bp+var_8);	// 16223 lea     si, [bp+var_8] ;~ 0613:4361
cs=0x613;eip=0x004364; 	X(PUSH(ss));	// 16224 push    ss ;~ 0613:4364
cs=0x613;eip=0x004365; 	X(POP(es));	// 16225 pop     es ;~ 0613:4365
cs=0x613;eip=0x004366; 	X(MOVSW);	// 16226 movsw ;~ 0613:4366
cs=0x613;eip=0x004367; 	X(MOVSW);	// 16227 movsw ;~ 0613:4367
cs=0x613;eip=0x004368; 	X(MOVSW);	// 16228 movsw ;~ 0613:4368
cs=0x613;eip=0x004369; 	T(di = bp+var_2a);	// 16229 lea     di, [bp+var_2A] ;~ 0613:4369
cs=0x613;eip=0x00436c; 	T(si = bp+var_1c);	// 16230 lea     si, [bp+var_1C] ;~ 0613:436C
loc_18a7f:
	// 5338 
cs=0x613;eip=0x00436f; 	X(MOVSW);	// 16233 movsw ;~ 0613:436F
cs=0x613;eip=0x004370; 	X(MOVSW);	// 16234 movsw ;~ 0613:4370
cs=0x613;eip=0x004371; 	X(MOVSW);	// 16235 movsw ;~ 0613:4371
loc_18a82:
	// 5339 
cs=0x613;eip=0x004372; 	T(MOV(ax, 0x22));	// 16239 mov     ax, 22h ; '"' ;~ 0613:4372
cs=0x613;eip=0x004375; 	X(IMUL1_2(word_449e4));	// 16240 imul    word_449E4 ;~ 0613:4375
cs=0x613;eip=0x004379; 	T(ADD(ax, offset(dseg,unk_44f4c)));	// 16241 add     ax, offset unk_44F4C ;~ 0613:4379
cs=0x613;eip=0x00437c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 16242 mov     [bp+var_2], ax ;~ 0613:437C
cs=0x613;eip=0x00437f; 	T(MOV(bx, ax));	// 16243 mov     bx, ax ;~ 0613:437F
cs=0x613;eip=0x004381; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2a))));	// 16244 mov     ax, [bp+var_2A] ;~ 0613:4381
cs=0x613;eip=0x004384; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 16245 sub     ax, [bp+var_1C] ;~ 0613:4384
cs=0x613;eip=0x004387; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 16246 mov     [bx+6], ax ;~ 0613:4387
cs=0x613;eip=0x00438a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16247 mov     bx, [bp+var_2] ;~ 0613:438A
cs=0x613;eip=0x00438d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 16248 mov     ax, [bp+var_28] ;~ 0613:438D
cs=0x613;eip=0x004390; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 16249 sub     ax, [bp+var_1A] ;~ 0613:4390
cs=0x613;eip=0x004393; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 16250 mov     [bx+8], ax ;~ 0613:4393
cs=0x613;eip=0x004396; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16251 mov     bx, [bp+var_2] ;~ 0613:4396
cs=0x613;eip=0x004399; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_26))));	// 16252 mov     ax, [bp+var_26] ;~ 0613:4399
cs=0x613;eip=0x00439c; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_18))));	// 16253 sub     ax, [bp+var_18] ;~ 0613:439C
cs=0x613;eip=0x00439f; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), ax));	// 16254 mov     [bx+0Ah], ax ;~ 0613:439F
cs=0x613;eip=0x0043a2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16255 mov     bx, [bp+var_2] ;~ 0613:43A2
cs=0x613;eip=0x0043a5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 16256 mov     ax, [bp+var_14] ;~ 0613:43A5
cs=0x613;eip=0x0043a8; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_8))));	// 16257 sub     ax, [bp+var_8] ;~ 0613:43A8
cs=0x613;eip=0x0043ab; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 16258 mov     [bx+0Ch], ax ;~ 0613:43AB
cs=0x613;eip=0x0043ae; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16259 mov     bx, [bp+var_2] ;~ 0613:43AE
cs=0x613;eip=0x0043b1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 16260 mov     ax, [bp+var_12] ;~ 0613:43B1
cs=0x613;eip=0x0043b4; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_6))));	// 16261 sub     ax, [bp+var_6] ;~ 0613:43B4
cs=0x613;eip=0x0043b7; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), ax));	// 16262 mov     [bx+0Eh], ax ;~ 0613:43B7
cs=0x613;eip=0x0043ba; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16263 mov     bx, [bp+var_2] ;~ 0613:43BA
cs=0x613;eip=0x0043bd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 16264 mov     ax, [bp+var_10] ;~ 0613:43BD
cs=0x613;eip=0x0043c0; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 16265 sub     ax, [bp+var_4] ;~ 0613:43C0
cs=0x613;eip=0x0043c3; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), ax));	// 16266 mov     [bx+10h], ax ;~ 0613:43C3
cs=0x613;eip=0x0043c6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16267 mov     bx, [bp+var_2] ;~ 0613:43C6
cs=0x613;eip=0x0043c9; 	T(MOV(ax, word_44608));	// 16268 mov     ax, word_44608 ;~ 0613:43C9
cs=0x613;eip=0x0043cc; 	X(MOV(*(dw*)(raddr(ds,bx+0x1E)), ax));	// 16269 mov     [bx+1Eh], ax ;~ 0613:43CC
cs=0x613;eip=0x0043cf; 	T(CMP(byte_449aa, 0));	// 16270 cmp     byte_449AA, 0 ;~ 0613:43CF
cs=0x613;eip=0x0043d4; 	J(JNZ(loc_18ae9));	// 16271 jnz     short loc_18AE9 ;~ 0613:43D4
cs=0x613;eip=0x0043d6; 	J(JMP(loc_18bb6));	// 16272 jmp     loc_18BB6 ;~ 0613:43D6
loc_18ae9:
	// 5340 
cs=0x613;eip=0x0043d9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16276 mov     bx, [bp+var_2] ;~ 0613:43D9
cs=0x613;eip=0x0043dc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2a))));	// 16277 mov     ax, [bp+var_2A] ;~ 0613:43DC
cs=0x613;eip=0x0043df; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_24))));	// 16278 sub     ax, [bp+var_24] ;~ 0613:43DF
cs=0x613;eip=0x0043e2; 	X(MOV(*(dw*)(raddr(ds,bx+0x12)), ax));	// 16279 mov     [bx+12h], ax ;~ 0613:43E2
cs=0x613;eip=0x0043e5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16280 mov     bx, [bp+var_2] ;~ 0613:43E5
cs=0x613;eip=0x0043e8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 16281 mov     ax, [bp+var_28] ;~ 0613:43E8
cs=0x613;eip=0x0043eb; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_22))));	// 16282 sub     ax, [bp+var_22] ;~ 0613:43EB
cs=0x613;eip=0x0043ee; 	X(MOV(*(dw*)(raddr(ds,bx+0x14)), ax));	// 16283 mov     [bx+14h], ax ;~ 0613:43EE
cs=0x613;eip=0x0043f1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16284 mov     bx, [bp+var_2] ;~ 0613:43F1
cs=0x613;eip=0x0043f4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_26))));	// 16285 mov     ax, [bp+var_26] ;~ 0613:43F4
cs=0x613;eip=0x0043f7; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_20))));	// 16286 sub     ax, [bp+var_20] ;~ 0613:43F7
cs=0x613;eip=0x0043fa; 	X(MOV(*(dw*)(raddr(ds,bx+0x16)), ax));	// 16287 mov     [bx+16h], ax ;~ 0613:43FA
cs=0x613;eip=0x0043fd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16288 mov     bx, [bp+var_2] ;~ 0613:43FD
cs=0x613;eip=0x004400; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 16289 mov     ax, [bp+var_14] ;~ 0613:4400
cs=0x613;eip=0x004403; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_e))));	// 16290 sub     ax, [bp+var_E] ;~ 0613:4403
cs=0x613;eip=0x004406; 	X(MOV(*(dw*)(raddr(ds,bx+0x18)), ax));	// 16291 mov     [bx+18h], ax ;~ 0613:4406
cs=0x613;eip=0x004409; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16292 mov     bx, [bp+var_2] ;~ 0613:4409
cs=0x613;eip=0x00440c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 16293 mov     ax, [bp+var_12] ;~ 0613:440C
cs=0x613;eip=0x00440f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_c))));	// 16294 sub     ax, [bp+var_C] ;~ 0613:440F
cs=0x613;eip=0x004412; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A)), ax));	// 16295 mov     [bx+1Ah], ax ;~ 0613:4412
cs=0x613;eip=0x004415; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16296 mov     bx, [bp+var_2] ;~ 0613:4415
cs=0x613;eip=0x004418; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 16297 mov     ax, [bp+var_10] ;~ 0613:4418
cs=0x613;eip=0x00441b; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_a))));	// 16298 sub     ax, [bp+var_A] ;~ 0613:441B
cs=0x613;eip=0x00441e; 	X(MOV(*(dw*)(raddr(ds,bx+0x1C)), ax));	// 16299 mov     [bx+1Ch], ax ;~ 0613:441E
cs=0x613;eip=0x004421; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16300 mov     bx, [bp+var_2] ;~ 0613:4421
cs=0x613;eip=0x004424; 	T(MOV(ax, word_446d8));	// 16301 mov     ax, word_446D8 ;~ 0613:4424
cs=0x613;eip=0x004427; 	X(MOV(*(dw*)(raddr(ds,bx+0x20)), ax));	// 16302 mov     [bx+20h], ax ;~ 0613:4427
cs=0x613;eip=0x00442a; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), 2));	// 16303 mov     [bp+var_30], 2 ;~ 0613:442A
cs=0x613;eip=0x00442f; 	J(JMP(loc_18bbb));	// 16304 jmp     short loc_18BBB ;~ 0613:442F
loc_18b42:
	// 5341 
cs=0x613;eip=0x004432; 	T(MOV(al, followopponentflag));	// 16309 mov     al, followOpponentFlag ;~ 0613:4432
cs=0x613;eip=0x004435; 	T(CBW);	// 16310 cbw ;~ 0613:4435
cs=0x613;eip=0x004436; 	T(MOV(cx, ax));	// 16311 mov     cx, ax ;~ 0613:4436
cs=0x613;eip=0x004438; 	T(SHL(ax, 1));	// 16312 shl     ax, 1 ;~ 0613:4438
cs=0x613;eip=0x00443a; 	T(ADD(ax, cx));	// 16313 add     ax, cx ;~ 0613:443A
cs=0x613;eip=0x00443c; 	T(SHL(ax, 1));	// 16314 shl     ax, 1 ;~ 0613:443C
cs=0x613;eip=0x00443e; 	T(MOV(si, ax));	// 16315 mov     si, ax ;~ 0613:443E
cs=0x613;eip=0x004440; 	X(PUSH(si));	// 16316 push    si ;~ 0613:4440
cs=0x613;eip=0x004441; 	T(di = bp+var_14);	// 16317 lea     di, [bp+var_14] ;~ 0613:4441
cs=0x613;eip=0x004444; 	T(si = offset(dseg,word_445b4)+si);	// 16318 lea     si, word_445B4[si] ;~ 0613:4444
cs=0x613;eip=0x004448; 	X(PUSH(ss));	// 16319 push    ss ;~ 0613:4448
cs=0x613;eip=0x004449; 	X(POP(es));	// 16320 pop     es ;~ 0613:4449
cs=0x613;eip=0x00444a; 	X(MOVSW);	// 16321 movsw ;~ 0613:444A
cs=0x613;eip=0x00444b; 	X(MOVSW);	// 16322 movsw ;~ 0613:444B
cs=0x613;eip=0x00444c; 	X(MOVSW);	// 16323 movsw ;~ 0613:444C
cs=0x613;eip=0x00444d; 	X(POP(si));	// 16324 pop     si ;~ 0613:444D
cs=0x613;eip=0x00444e; 	X(PUSH(si));	// 16325 push    si ;~ 0613:444E
cs=0x613;eip=0x00444f; 	T(di = bp+var_2a);	// 16326 lea     di, [bp+var_2A] ;~ 0613:444F
cs=0x613;eip=0x004452; 	T(si = offset(dseg,unk_445c0)+si);	// 16327 lea     si, unk_445C0[si] ;~ 0613:4452
cs=0x613;eip=0x004456; 	X(MOVSW);	// 16328 movsw ;~ 0613:4456
cs=0x613;eip=0x004457; 	X(MOVSW);	// 16329 movsw ;~ 0613:4457
cs=0x613;eip=0x004458; 	X(MOVSW);	// 16330 movsw ;~ 0613:4458
cs=0x613;eip=0x004459; 	X(POP(si));	// 16331 pop     si ;~ 0613:4459
cs=0x613;eip=0x00445a; 	J(JMP(loc_18a82));	// 16332 jmp     loc_18A82 ;~ 0613:445A
loc_18b6e:
	// 5342 
cs=0x613;eip=0x00445e; 	T(MOV(al, followopponentflag));	// 16337 mov     al, followOpponentFlag ;~ 0613:445E
cs=0x613;eip=0x004461; 	T(CBW);	// 16338 cbw ;~ 0613:4461
cs=0x613;eip=0x004462; 	T(MOV(bx, ax));	// 16339 mov     bx, ax ;~ 0613:4462
cs=0x613;eip=0x004464; 	T(MOV(al, *((&byte_4488b)+bx)));	// 16340 mov     al, byte_4488B[bx] ;~ 0613:4464
cs=0x613;eip=0x004468; 	T(CBW);	// 16341 cbw ;~ 0613:4468
cs=0x613;eip=0x004469; 	T(MOV(cx, ax));	// 16342 mov     cx, ax ;~ 0613:4469
cs=0x613;eip=0x00446b; 	T(SHL(ax, 1));	// 16343 shl     ax, 1 ;~ 0613:446B
cs=0x613;eip=0x00446d; 	T(ADD(ax, cx));	// 16344 add     ax, cx ;~ 0613:446D
cs=0x613;eip=0x00446f; 	T(SHL(ax, 1));	// 16345 shl     ax, 1 ;~ 0613:446F
cs=0x613;eip=0x004471; 	T(ADD(ax, trackdata9));	// 16346 add     ax, trackdata9 ;~ 0613:4471
cs=0x613;eip=0x004475; 	T(MOV(dx, word_449de));	// 16347 mov     dx, word_449DE ;~ 0613:4475
cs=0x613;eip=0x004479; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_34))), ax));	// 16348 mov     word ptr [bp+var_34], ax ;~ 0613:4479
cs=0x613;eip=0x00447c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_34+2))), dx));	// 16349 mov     word ptr [bp+var_34+2], dx ;~ 0613:447C
cs=0x613;eip=0x00447f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_34))));	// 16350 les     bx, [bp+var_34] ;~ 0613:447F
cs=0x613;eip=0x004482; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 16351 mov     ax, es:[bx] ;~ 0613:4482
cs=0x613;eip=0x004485; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 16352 mov     [bp+var_14], ax ;~ 0613:4485
cs=0x613;eip=0x004488; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 16353 mov     ax, es:[bx+2] ;~ 0613:4488
cs=0x613;eip=0x00448c; 	T(ADD(ax, word_44d20));	// 16354 add     ax, word_44D20 ;~ 0613:448C
cs=0x613;eip=0x004490; 	T(ADD(ax, 0x5A));	// 16355 add     ax, 5Ah ; 'Z' ;~ 0613:4490
cs=0x613;eip=0x004493; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 16356 mov     [bp+var_12], ax ;~ 0613:4493
cs=0x613;eip=0x004496; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 16357 mov     ax, es:[bx+4] ;~ 0613:4496
cs=0x613;eip=0x00449a; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 16358 mov     [bp+var_10], ax ;~ 0613:449A
cs=0x613;eip=0x00449d; 	T(di = bp+var_2a);	// 16359 lea     di, [bp+var_2A] ;~ 0613:449D
cs=0x613;eip=0x0044a0; 	T(si = bp+var_14);	// 16360 lea     si, [bp+var_14] ;~ 0613:44A0
cs=0x613;eip=0x0044a3; 	J(JMP(loc_18a6a));	// 16361 jmp     loc_18A6A ;~ 0613:44A3
loc_18bb6:
	// 5343 
cs=0x613;eip=0x0044a6; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), 1));	// 16365 mov     [bp+var_30], 1 ;~ 0613:44A6
loc_18bbb:
	// 5344 
cs=0x613;eip=0x0044ab; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 16368 mov     [bp+var_1E], 0 ;~ 0613:44AB
cs=0x613;eip=0x0044b0; 	J(JMP(loc_18c93));	// 16369 jmp     loc_18C93 ;~ 0613:44B0
loc_18bc4:
	// 5345 
cs=0x613;eip=0x0044b4; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), offset(dseg,word_445e6)));	// 16374 mov     [bp+var_2C], offset word_445E6 ;~ 0613:44B4
cs=0x613;eip=0x0044b9; 	T(MOV(ax, word_43964));	// 16375 mov     ax, word_43964 ;~ 0613:44B9
cs=0x613;eip=0x0044bc; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 16376 mov     [bp+var_2E], ax ;~ 0613:44BC
cs=0x613;eip=0x0044bf; 	T(MOV(al, byte_42d26));	// 16377 mov     al, byte_42D26 ;~ 0613:44BF
loc_18bd2:
	// 5346 
cs=0x613;eip=0x0044c2; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 16380 mov     [bp+var_16], al ;~ 0613:44C2
cs=0x613;eip=0x0044c5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2c))));	// 16381 mov     bx, [bp+var_2C] ;~ 0613:44C5
cs=0x613;eip=0x0044c8; 	T(TEST(*(raddr(ds,bx+0x0CF)), 1));	// 16382 test    byte ptr [bx+0CFh], 1 ;~ 0613:44C8
cs=0x613;eip=0x0044cd; 	J(JZ(loc_18bf4));	// 16383 jz      short loc_18BF4 ;~ 0613:44CD
cs=0x613;eip=0x0044cf; 	T(TEST(*(raddr(ss,bp+var_16)), 1));	// 16384 test    [bp+var_16], 1 ;~ 0613:44CF
cs=0x613;eip=0x0044d3; 	J(JNZ(loc_18c08));	// 16385 jnz     short loc_18C08 ;~ 0613:44D3
cs=0x613;eip=0x0044d5; 	X(OR(*(raddr(ss,bp+var_16)), 1));	// 16386 or      [bp+var_16], 1 ;~ 0613:44D5
cs=0x613;eip=0x0044d9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 16387 push    [bp+var_2E] ;~ 0613:44D9
cs=0x613;eip=0x0044dc; 	J(CALLF(audio_op_unk,0));	// 16388 call    audio_op_unk ;~ 0613:44DC
cs=0x613;eip=0x0044e1; 	J(JMP(loc_18c05));	// 16389 jmp     short loc_18C05 ;~ 0613:44E1
loc_18bf4:
	// 5347 
cs=0x613;eip=0x0044e4; 	T(TEST(*(raddr(ss,bp+var_16)), 1));	// 16394 test    [bp+var_16], 1 ;~ 0613:44E4
cs=0x613;eip=0x0044e8; 	J(JZ(loc_18c08));	// 16395 jz      short loc_18C08 ;~ 0613:44E8
cs=0x613;eip=0x0044ea; 	X(DEC(*(raddr(ss,bp+var_16))));	// 16396 dec     [bp+var_16] ;~ 0613:44EA
cs=0x613;eip=0x0044ed; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 16397 push    [bp+var_2E] ;~ 0613:44ED
cs=0x613;eip=0x0044f0; 	J(CALLF(audio_function2,0));	// 16398 call    audio_function2 ;~ 0613:44F0
loc_18c05:
	// 5348 
cs=0x613;eip=0x0044f5; 	T(ADD(sp, 2));	// 16401 add     sp, 2 ;~ 0613:44F5
loc_18c08:
	// 5349 
cs=0x613;eip=0x0044f8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2c))));	// 16405 mov     bx, [bp+var_2C] ;~ 0613:44F8
cs=0x613;eip=0x0044fb; 	T(TEST(*(raddr(ds,bx+0x0CF)), 6));	// 16406 test    byte ptr [bx+0CFh], 6 ;~ 0613:44FB
cs=0x613;eip=0x004500; 	J(JZ(loc_18c56));	// 16407 jz      short loc_18C56 ;~ 0613:4500
cs=0x613;eip=0x004502; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 16408 mov     al, [bp+var_16] ;~ 0613:4502
cs=0x613;eip=0x004505; 	T(AND(al, 6));	// 16409 and     al, 6 ;~ 0613:4505
cs=0x613;eip=0x004507; 	X(MOV(*(db*)(raddr(ss,bp+var_34)), al));	// 16410 mov     byte ptr [bp+var_34], al ;~ 0613:4507
cs=0x613;eip=0x00450a; 	T(MOV(al, *(raddr(ds,bx+0x0CF))));	// 16411 mov     al, [bx+0CFh] ;~ 0613:450A
cs=0x613;eip=0x00450e; 	T(AND(al, 6));	// 16412 and     al, 6 ;~ 0613:450E
cs=0x613;eip=0x004510; 	T(CMP(al, *(db*)(raddr(ss,bp+var_34))));	// 16413 cmp     al, byte ptr [bp+var_34] ;~ 0613:4510
cs=0x613;eip=0x004513; 	J(JZ(loc_18c7b));	// 16414 jz      short loc_18C7B ;~ 0613:4513
cs=0x613;eip=0x004515; 	T(TEST(*(raddr(ss,bp+var_16)), 6));	// 16415 test    [bp+var_16], 6 ;~ 0613:4515
cs=0x613;eip=0x004519; 	J(JNZ(loc_18c5c));	// 16416 jnz     short loc_18C5C ;~ 0613:4519
cs=0x613;eip=0x00451b; 	T(TEST(*(raddr(ds,bx+0x0CF)), 2));	// 16417 test    byte ptr [bx+0CFh], 2 ;~ 0613:451B
cs=0x613;eip=0x004520; 	J(JZ(loc_18c44));	// 16418 jz      short loc_18C44 ;~ 0613:4520
cs=0x613;eip=0x004522; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 16419 push    [bp+var_2E] ;~ 0613:4522
cs=0x613;eip=0x004525; 	J(CALLF(audio_op_unk5,0));	// 16420 call    audio_op_unk5 ;~ 0613:4525
cs=0x613;eip=0x00452a; 	T(ADD(sp, 2));	// 16421 add     sp, 2 ;~ 0613:452A
cs=0x613;eip=0x00452d; 	X(ADD(*(raddr(ss,bp+var_16)), 2));	// 16422 add     [bp+var_16], 2 ;~ 0613:452D
cs=0x613;eip=0x004531; 	J(JMP(loc_18c7b));	// 16423 jmp     short loc_18C7B ;~ 0613:4531
loc_18c44:
	// 5350 
cs=0x613;eip=0x004534; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 16428 push    [bp+var_2E] ;~ 0613:4534
cs=0x613;eip=0x004537; 	J(CALLF(audio_op_unk6,0));	// 16429 call    audio_op_unk6 ;~ 0613:4537
cs=0x613;eip=0x00453c; 	T(ADD(sp, 2));	// 16430 add     sp, 2 ;~ 0613:453C
cs=0x613;eip=0x00453f; 	X(ADD(*(raddr(ss,bp+var_16)), 4));	// 16431 add     [bp+var_16], 4 ;~ 0613:453F
cs=0x613;eip=0x004543; 	J(JMP(loc_18c7b));	// 16432 jmp     short loc_18C7B ;~ 0613:4543
loc_18c56:
	// 5351 
cs=0x613;eip=0x004546; 	T(TEST(*(raddr(ss,bp+var_16)), 6));	// 16437 test    [bp+var_16], 6 ;~ 0613:4546
cs=0x613;eip=0x00454a; 	J(JZ(loc_18c7b));	// 16438 jz      short loc_18C7B ;~ 0613:454A
loc_18c5c:
	// 5352 
cs=0x613;eip=0x00454c; 	T(TEST(*(raddr(ss,bp+var_16)), 2));	// 16441 test    [bp+var_16], 2 ;~ 0613:454C
cs=0x613;eip=0x004550; 	J(JZ(loc_18c66));	// 16442 jz      short loc_18C66 ;~ 0613:4550
cs=0x613;eip=0x004552; 	X(SUB(*(raddr(ss,bp+var_16)), 2));	// 16443 sub     [bp+var_16], 2 ;~ 0613:4552
loc_18c66:
	// 5353 
cs=0x613;eip=0x004556; 	T(TEST(*(raddr(ss,bp+var_16)), 4));	// 16446 test    [bp+var_16], 4 ;~ 0613:4556
cs=0x613;eip=0x00455a; 	J(JZ(loc_18c70));	// 16447 jz      short loc_18C70 ;~ 0613:455A
cs=0x613;eip=0x00455c; 	X(SUB(*(raddr(ss,bp+var_16)), 4));	// 16448 sub     [bp+var_16], 4 ;~ 0613:455C
loc_18c70:
	// 5354 
cs=0x613;eip=0x004560; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 16451 push    [bp+var_2E] ;~ 0613:4560
cs=0x613;eip=0x004563; 	J(CALLF(audio_op_unk7,0));	// 16452 call    audio_op_unk7 ;~ 0613:4563
cs=0x613;eip=0x004568; 	T(ADD(sp, 2));	// 16453 add     sp, 2 ;~ 0613:4568
loc_18c7b:
	// 5355 
cs=0x613;eip=0x00456b; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 16457 cmp     [bp+var_1E], 0 ;~ 0613:456B
cs=0x613;eip=0x00456f; 	J(JZ(loc_18c8a));	// 16458 jz      short loc_18C8A ;~ 0613:456F
cs=0x613;eip=0x004571; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 16459 mov     al, [bp+var_16] ;~ 0613:4571
cs=0x613;eip=0x004574; 	X(MOV(byte_42d2a, al));	// 16460 mov     byte_42D2A, al ;~ 0613:4574
cs=0x613;eip=0x004577; 	J(JMP(loc_18c90));	// 16461 jmp     short loc_18C90 ;~ 0613:4577
loc_18c8a:
	// 5356 
cs=0x613;eip=0x00457a; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 16466 mov     al, [bp+var_16] ;~ 0613:457A
cs=0x613;eip=0x00457d; 	X(MOV(byte_42d26, al));	// 16467 mov     byte_42D26, al ;~ 0613:457D
loc_18c90:
	// 5357 
cs=0x613;eip=0x004580; 	X(INC(*(dw*)(raddr(ss,bp+var_1e))));	// 16470 inc     [bp+var_1E] ;~ 0613:4580
loc_18c93:
	// 5358 
cs=0x613;eip=0x004583; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_30))));	// 16473 mov     ax, [bp+var_30] ;~ 0613:4583
cs=0x613;eip=0x004586; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 16474 cmp     [bp+var_1E], ax ;~ 0613:4586
cs=0x613;eip=0x004589; 	J(JGE(loc_18cb6));	// 16475 jge     short loc_18CB6 ;~ 0613:4589
cs=0x613;eip=0x00458b; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 16476 cmp     [bp+var_1E], 0 ;~ 0613:458B
cs=0x613;eip=0x00458f; 	J(JNZ(loc_18ca4));	// 16477 jnz     short loc_18CA4 ;~ 0613:458F
cs=0x613;eip=0x004591; 	J(JMP(loc_18bc4));	// 16478 jmp     loc_18BC4 ;~ 0613:4591
loc_18ca4:
	// 5359 
cs=0x613;eip=0x004594; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), offset(dseg,word_446b6)));	// 16482 mov     [bp+var_2C], offset word_446B6 ;~ 0613:4594
cs=0x613;eip=0x004599; 	T(MOV(ax, word_4408c));	// 16483 mov     ax, word_4408C ;~ 0613:4599
cs=0x613;eip=0x00459c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 16484 mov     [bp+var_2E], ax ;~ 0613:459C
cs=0x613;eip=0x00459f; 	T(MOV(al, byte_42d2a));	// 16485 mov     al, byte_42D2A ;~ 0613:459F
cs=0x613;eip=0x0045a2; 	J(JMP(loc_18bd2));	// 16486 jmp     loc_18BD2 ;~ 0613:45A2
loc_18cb6:
	// 5360 
cs=0x613;eip=0x0045a6; 	X(MOV(byte_459d8, 1));	// 16491 mov     byte_459D8, 1 ;~ 0613:45A6
cs=0x613;eip=0x0045ab; 	X(INC(word_449e4));	// 16492 inc     word_449E4 ;~ 0613:45AB
cs=0x613;eip=0x0045af; 	T(CMP(word_449e4, 0x28));	// 16493 cmp     word_449E4, 28h ; '(' ;~ 0613:45AF
cs=0x613;eip=0x0045b4; 	J(JNZ(loc_18ccc));	// 16494 jnz     short loc_18CCC ;~ 0613:45B4
cs=0x613;eip=0x0045b6; 	X(MOV(word_449e4, 0));	// 16495 mov     word_449E4, 0 ;~ 0613:45B6
loc_18ccc:
	// 5361 
cs=0x613;eip=0x0045bc; 	T(MOV(al, is_in_replay));	// 16499 mov     al, is_in_replay ;~ 0613:45BC
cs=0x613;eip=0x0045bf; 	X(MOV(byte_3be02, al));	// 16500 mov     byte_3BE02, al ;~ 0613:45BF
cs=0x613;eip=0x0045c2; 	X(POP(si));	// 16501 pop     si ;~ 0613:45C2
cs=0x613;eip=0x0045c3; 	X(POP(di));	// 16502 pop     di ;~ 0613:45C3
cs=0x613;eip=0x0045c4; 	T(MOV(sp, bp));	// 16503 mov     sp, bp ;~ 0613:45C4
cs=0x613;eip=0x0045c6; 	X(POP(bp));	// 16504 pop     bp ;~ 0613:45C6
cs=0x613;eip=0x0045c7; 	J(RETF(0));	// 16505 retf ;~ 0613:45C7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_carstate: 	goto audio_carstate;
        case m2c::kloc_188b6: 	goto loc_188b6;
        case m2c::kloc_188d6: 	goto loc_188d6;
        case m2c::kloc_188e9: 	goto loc_188e9;
        case m2c::kloc_18903: 	goto loc_18903;
        case m2c::kloc_18916: 	goto loc_18916;
        case m2c::kloc_18925: 	goto loc_18925;
        case m2c::kloc_18931: 	goto loc_18931;
        case m2c::kloc_1893a: 	goto loc_1893a;
        case m2c::kloc_18943: 	goto loc_18943;
        case m2c::kloc_18957: 	goto loc_18957;
        case m2c::kloc_1896b: 	goto loc_1896b;
        case m2c::kloc_1897f: 	goto loc_1897f;
        case m2c::kloc_18993: 	goto loc_18993;
        case m2c::kloc_189a7: 	goto loc_189a7;
        case m2c::kloc_189c2: 	goto loc_189c2;
        case m2c::kloc_189d6: 	goto loc_189d6;
        case m2c::kloc_189ea: 	goto loc_189ea;
        case m2c::kloc_189fe: 	goto loc_189fe;
        case m2c::kloc_18a12: 	goto loc_18a12;
        case m2c::kloc_18a26: 	goto loc_18a26;
        case m2c::kloc_18a31: 	goto loc_18a31;
        case m2c::kloc_18a41: 	goto loc_18a41;
        case m2c::kloc_18a4e: 	goto loc_18a4e;
        case m2c::kloc_18a52: 	goto loc_18a52;
        case m2c::kloc_18a6a: 	goto loc_18a6a;
        case m2c::kloc_18a6e: 	goto loc_18a6e;
        case m2c::kloc_18a7f: 	goto loc_18a7f;
        case m2c::kloc_18a82: 	goto loc_18a82;
        case m2c::kloc_18ae9: 	goto loc_18ae9;
        case m2c::kloc_18b42: 	goto loc_18b42;
        case m2c::kloc_18b6e: 	goto loc_18b6e;
        case m2c::kloc_18bb6: 	goto loc_18bb6;
        case m2c::kloc_18bbb: 	goto loc_18bbb;
        case m2c::kloc_18bc4: 	goto loc_18bc4;
        case m2c::kloc_18bd2: 	goto loc_18bd2;
        case m2c::kloc_18bf4: 	goto loc_18bf4;
        case m2c::kloc_18c05: 	goto loc_18c05;
        case m2c::kloc_18c08: 	goto loc_18c08;
        case m2c::kloc_18c44: 	goto loc_18c44;
        case m2c::kloc_18c56: 	goto loc_18c56;
        case m2c::kloc_18c5c: 	goto loc_18c5c;
        case m2c::kloc_18c66: 	goto loc_18c66;
        case m2c::kloc_18c70: 	goto loc_18c70;
        case m2c::kloc_18c7b: 	goto loc_18c7b;
        case m2c::kloc_18c8a: 	goto loc_18c8a;
        case m2c::kloc_18c90: 	goto loc_18c90;
        case m2c::kloc_18c93: 	goto loc_18c93;
        case m2c::kloc_18ca4: 	goto loc_18ca4;
        case m2c::kloc_18cb6: 	goto loc_18cb6;
        case m2c::kloc_18ccc: 	goto loc_18ccc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_unk3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_unk3:
    _begin:
#undef arg_0
#define arg_0 6
	// 16515 arg_0           = byte ptr  6 ;~ 0613:45C8
#undef arg_2
#define arg_2 8
	// 16516 arg_2           = word ptr  8 ;~ 0613:45C8
cs=0x613;eip=0x0045c8; 	X(PUSH(bp));	// 16518 push    bp ;~ 0613:45C8
cs=0x613;eip=0x0045c9; 	T(MOV(bp, sp));	// 16519 mov     bp, sp ;~ 0613:45C9
cs=0x613;eip=0x0045cb; 	T(CMP(byte_459d8, 0));	// 16520 cmp     byte_459D8, 0 ;~ 0613:45CB
cs=0x613;eip=0x0045d0; 	J(JZ(loc_18d04));	// 16521 jz      short loc_18D04 ;~ 0613:45D0
cs=0x613;eip=0x0045d2; 	T(TEST(*(raddr(ss,bp+arg_0)), 0x10));	// 16522 test    [bp+arg_0], 10h ;~ 0613:45D2
cs=0x613;eip=0x0045d6; 	J(JZ(loc_18cf3));	// 16523 jz      short loc_18CF3 ;~ 0613:45D6
cs=0x613;eip=0x0045d8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 16524 push    [bp+arg_2] ;~ 0613:45D8
cs=0x613;eip=0x0045db; 	J(CALLF(audio_op_unk4,0));	// 16525 call    audio_op_unk4 ;~ 0613:45DB
cs=0x613;eip=0x0045e0; 	T(ADD(sp, 2));	// 16526 add     sp, 2 ;~ 0613:45E0
loc_18cf3:
	// 5362 
cs=0x613;eip=0x0045e3; 	T(TEST(*(raddr(ss,bp+arg_0)), 0x20));	// 16529 test    [bp+arg_0], 20h ;~ 0613:45E3
cs=0x613;eip=0x0045e7; 	J(JZ(loc_18d04));	// 16530 jz      short loc_18D04 ;~ 0613:45E7
cs=0x613;eip=0x0045e9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 16531 push    [bp+arg_2] ;~ 0613:45E9
cs=0x613;eip=0x0045ec; 	J(CALLF(audio_op_unk3,0));	// 16532 call    audio_op_unk3 ;~ 0613:45EC
cs=0x613;eip=0x0045f1; 	T(ADD(sp, 2));	// 16533 add     sp, 2 ;~ 0613:45F1
loc_18d04:
	// 5363 
cs=0x613;eip=0x0045f4; 	X(POP(bp));	// 16537 pop     bp ;~ 0613:45F4
cs=0x613;eip=0x0045f5; 	J(RETF(0));	// 16538 retf ;~ 0613:45F5

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_unk3: 	goto audio_unk3;
        case m2c::kloc_18cf3: 	goto loc_18cf3;
        case m2c::kloc_18d04: 	goto loc_18d04;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_18d06(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_18d06:
    _begin:
#undef arg_0
#define arg_0 6
	// 16548 arg_0           = word ptr  6 ;~ 0613:45F6
#undef arg_2
#define arg_2 8
	// 16549 arg_2           = word ptr  8 ;~ 0613:45F6
cs=0x613;eip=0x0045f6; 	X(PUSH(bp));	// 16551 push    bp ;~ 0613:45F6
cs=0x613;eip=0x0045f7; 	T(MOV(bp, sp));	// 16552 mov     bp, sp ;~ 0613:45F7
cs=0x613;eip=0x0045f9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 16553 push    [bp+arg_2] ;~ 0613:45F9
cs=0x613;eip=0x0045fc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 16554 mov     bx, [bp+arg_0] ;~ 0613:45FC
cs=0x613;eip=0x0045ff; 	X(PUSH(*(dw*)(raddr(ds,bx+0x10))));	// 16555 push    word ptr [bx+10h] ;~ 0613:45FF
cs=0x613;eip=0x004602; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0E))));	// 16556 push    word ptr [bx+0Eh] ;~ 0613:4602
cs=0x613;eip=0x004605; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0C))));	// 16557 push    word ptr [bx+0Ch] ;~ 0613:4605
cs=0x613;eip=0x004608; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0A))));	// 16558 push    word ptr [bx+0Ah] ;~ 0613:4608
cs=0x613;eip=0x00460b; 	X(PUSH(*(dw*)(raddr(ds,bx+8))));	// 16559 push    word ptr [bx+8] ;~ 0613:460B
cs=0x613;eip=0x00460e; 	X(PUSH(*(dw*)(raddr(ds,bx+6))));	// 16560 push    word ptr [bx+6] ;~ 0613:460E
cs=0x613;eip=0x004611; 	X(PUSH(*(dw*)(raddr(ds,bx+0x1E))));	// 16561 push    word ptr [bx+1Eh] ;~ 0613:4611
cs=0x613;eip=0x004614; 	X(PUSH(word_43964));	// 16562 push    word_43964 ;~ 0613:4614
cs=0x613;eip=0x004618; 	J(CALLF(audio_op_unk2,0));	// 16563 call    audio_op_unk2 ;~ 0613:4618
cs=0x613;eip=0x00461d; 	T(ADD(sp, 0x12));	// 16564 add     sp, 12h ;~ 0613:461D
cs=0x613;eip=0x004620; 	T(CMP(byte_449aa, 0));	// 16565 cmp     byte_449AA, 0 ;~ 0613:4620
cs=0x613;eip=0x004625; 	J(JZ(loc_18d5e));	// 16566 jz      short loc_18D5E ;~ 0613:4625
cs=0x613;eip=0x004627; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 16567 push    [bp+arg_2] ;~ 0613:4627
cs=0x613;eip=0x00462a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 16568 mov     bx, [bp+arg_0] ;~ 0613:462A
cs=0x613;eip=0x00462d; 	X(PUSH(*(dw*)(raddr(ds,bx+0x1C))));	// 16569 push    word ptr [bx+1Ch] ;~ 0613:462D
cs=0x613;eip=0x004630; 	X(PUSH(*(dw*)(raddr(ds,bx+0x1A))));	// 16570 push    word ptr [bx+1Ah] ;~ 0613:4630
cs=0x613;eip=0x004633; 	X(PUSH(*(dw*)(raddr(ds,bx+0x18))));	// 16571 push    word ptr [bx+18h] ;~ 0613:4633
cs=0x613;eip=0x004636; 	X(PUSH(*(dw*)(raddr(ds,bx+0x16))));	// 16572 push    word ptr [bx+16h] ;~ 0613:4636
cs=0x613;eip=0x004639; 	X(PUSH(*(dw*)(raddr(ds,bx+0x14))));	// 16573 push    word ptr [bx+14h] ;~ 0613:4639
cs=0x613;eip=0x00463c; 	X(PUSH(*(dw*)(raddr(ds,bx+0x12))));	// 16574 push    word ptr [bx+12h] ;~ 0613:463C
cs=0x613;eip=0x00463f; 	X(PUSH(*(dw*)(raddr(ds,bx+0x20))));	// 16575 push    word ptr [bx+20h] ;~ 0613:463F
cs=0x613;eip=0x004642; 	X(PUSH(word_4408c));	// 16576 push    word_4408C ;~ 0613:4642
cs=0x613;eip=0x004646; 	J(CALLF(audio_op_unk2,0));	// 16577 call    audio_op_unk2 ;~ 0613:4646
cs=0x613;eip=0x00464b; 	T(ADD(sp, 0x12));	// 16578 add     sp, 12h ;~ 0613:464B
loc_18d5e:
	// 5364 
cs=0x613;eip=0x00464e; 	X(POP(bp));	// 16581 pop     bp ;~ 0613:464E
cs=0x613;eip=0x00464f; 	J(RETF(0));	// 16582 retf ;~ 0613:464F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_18d5e: 	goto loc_18d5e;
        case m2c::ksub_18d06: 	goto sub_18d06;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_18d60(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_18d60:
    _begin:
#undef var_30
#define var_30 -0x30
	// 16593 var_30          = word ptr -30h ;~ 0613:4650
#undef var_2e
#define var_2e -0x2E
	// 16594 var_2E          = word ptr -2Eh ;~ 0613:4650
#undef var_2c
#define var_2c -0x2C
	// 16595 var_2C          = word ptr -2Ch ;~ 0613:4650
#undef var_2a
#define var_2a -0x2A
	// 16596 var_2A          = word ptr -2Ah ;~ 0613:4650
#undef var_28
#define var_28 -0x28
	// 16597 var_28          = byte ptr -28h ;~ 0613:4650
#undef var_26
#define var_26 -0x26
	// 16598 var_26          = word ptr -26h ;~ 0613:4650
#undef var_24
#define var_24 -0x24
	// 16599 var_24          = word ptr -24h ;~ 0613:4650
#undef var_22
#define var_22 -0x22
	// 16600 var_22          = word ptr -22h ;~ 0613:4650
#undef var_20
#define var_20 -0x20
	// 16601 var_20          = word ptr -20h ;~ 0613:4650
#undef var_1e
#define var_1e -0x1E
	// 16602 var_1E          = word ptr -1Eh ;~ 0613:4650
#undef var_1c
#define var_1c -0x1C
	// 16603 var_1C          = byte ptr -1Ch ;~ 0613:4650
#undef var_1a
#define var_1a -0x1A
	// 16604 var_1A          = word ptr -1Ah ;~ 0613:4650
#undef var_18
#define var_18 -0x18
	// 16605 var_18          = byte ptr -18h ;~ 0613:4650
#undef var_16
#define var_16 -0x16
	// 16606 var_16          = byte ptr -16h ;~ 0613:4650
#undef var_14
#define var_14 -0x14
	// 16607 var_14          = word ptr -14h ;~ 0613:4650
#undef var_12
#define var_12 -0x12
	// 16608 var_12          = word ptr -12h ;~ 0613:4650
#undef var_10
#define var_10 -0x10
	// 16609 var_10          = byte ptr -10h ;~ 0613:4650
#undef var_e
#define var_e -0x0E
	// 16610 var_E           = word ptr -0Eh ;~ 0613:4650
#undef var_c
#define var_c -0x0C
	// 16611 var_C           = word ptr -0Ch ;~ 0613:4650
#undef var_a
#define var_a -0x0A
	// 16612 var_A           = word ptr -0Ah ;~ 0613:4650
#undef var_8
#define var_8 -8
	// 16613 var_8           = word ptr -8 ;~ 0613:4650
#undef var_6
#define var_6 -6
	// 16614 var_6           = dword ptr -6 ;~ 0613:4650
#undef var_2
#define var_2 -2
	// 16615 var_2           = byte ptr -2 ;~ 0613:4650
#undef arg_0
#define arg_0 6
	// 16616 arg_0           = word ptr  6 ;~ 0613:4650
#undef arg_2
#define arg_2 8
	// 16617 arg_2           = word ptr  8 ;~ 0613:4650
#undef arg_4
#define arg_4 0x0A
	// 16618 arg_4           = byte ptr  0Ah ;~ 0613:4650
#undef arg_6
#define arg_6 0x0C
	// 16619 arg_6           = word ptr  0Ch ;~ 0613:4650
cs=0x613;eip=0x004650; 	X(PUSH(bp));	// 16621 push    bp ;~ 0613:4650
cs=0x613;eip=0x004651; 	T(MOV(bp, sp));	// 16622 mov     bp, sp ;~ 0613:4651
cs=0x613;eip=0x004653; 	T(SUB(sp, 0x30));	// 16623 sub     sp, 30h ;~ 0613:4653
cs=0x613;eip=0x004656; 	X(PUSH(di));	// 16624 push    di ;~ 0613:4656
cs=0x613;eip=0x004657; 	X(PUSH(si));	// 16625 push    si ;~ 0613:4657
cs=0x613;eip=0x004658; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 16626 mov     bx, [bp+arg_0] ;~ 0613:4658
cs=0x613;eip=0x00465b; 	T(LES(si, td17_trk_elem_ordered));	// 16627 les     si, td17_trk_elem_ordered ;~ 0613:465B
cs=0x613;eip=0x00465f; 	T(MOV(al, *(raddr(es,bx+si))));	// 16628 mov     al, es:[bx+si] ;~ 0613:465F
cs=0x613;eip=0x004662; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 16629 mov     [bp+var_2], al ;~ 0613:4662
cs=0x613;eip=0x004665; 	T(LES(si, trackdata18));	// 16630 les     si, trackdata18 ;~ 0613:4665
cs=0x613;eip=0x004669; 	T(MOV(al, *(raddr(es,bx+si))));	// 16631 mov     al, es:[bx+si] ;~ 0613:4669
cs=0x613;eip=0x00466c; 	T(AND(al, 0x0F));	// 16632 and     al, 0Fh ;~ 0613:466C
cs=0x613;eip=0x00466e; 	X(MOV(*(raddr(ss,bp+var_1c)), al));	// 16633 mov     [bp+var_1C], al ;~ 0613:466E
cs=0x613;eip=0x004671; 	T(MOV(al, *(raddr(es,bx+si))));	// 16634 mov     al, es:[bx+si] ;~ 0613:4671
cs=0x613;eip=0x004674; 	T(AND(al, 0x10));	// 16635 and     al, 10h ;~ 0613:4674
cs=0x613;eip=0x004676; 	X(MOV(*(raddr(ss,bp+var_28)), al));	// 16636 mov     [bp+var_28], al ;~ 0613:4676
cs=0x613;eip=0x004679; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 16637 mov     al, [bp+var_2] ;~ 0613:4679
cs=0x613;eip=0x00467c; 	T(SUB(ah, ah));	// 16638 sub     ah, ah ;~ 0613:467C
cs=0x613;eip=0x00467e; 	T(MOV(cx, ax));	// 16639 mov     cx, ax          ; * sizeof(struct TRACKOBJECT) ;~ 0613:467E
cs=0x613;eip=0x004680; 	T(SHL(ax, 1));	// 16640 shl     ax, 1 ;~ 0613:4680
cs=0x613;eip=0x004682; 	T(ADD(ax, cx));	// 16641 add     ax, cx ;~ 0613:4682
cs=0x613;eip=0x004684; 	T(SHL(ax, 1));	// 16642 shl     ax, 1 ;~ 0613:4684
cs=0x613;eip=0x004686; 	T(ADD(ax, cx));	// 16643 add     ax, cx ;~ 0613:4686
cs=0x613;eip=0x004688; 	T(SHL(ax, 1));	// 16644 shl     ax, 1 ;~ 0613:4688
cs=0x613;eip=0x00468a; 	T(ADD(ax, offset(dseg,trkobjectlist)));	// 16645 add     ax, offset trkObjectList ;~ 0613:468A
cs=0x613;eip=0x00468d; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), ax));	// 16646 mov     [bp+var_26], ax ;~ 0613:468D
cs=0x613;eip=0x004690; 	T(MOV(bx, ax));	// 16647 mov     bx, ax ;~ 0613:4690
cs=0x613;eip=0x004692; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 16648 mov     ax, [bx] ;~ 0613:4692
cs=0x613;eip=0x004694; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 16649 mov     [bp+var_14], ax ;~ 0613:4694
cs=0x613;eip=0x004697; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ds));	// 16650 mov     [bp+var_12], ds ;~ 0613:4697
cs=0x613;eip=0x00469a; 	T(MOV(al, *(raddr(ss,bp+var_1c))));	// 16651 mov     al, [bp+var_1C] ;~ 0613:469A
cs=0x613;eip=0x00469d; 	T(SUB(ah, ah));	// 16652 sub     ah, ah ;~ 0613:469D
cs=0x613;eip=0x00469f; 	T(MOV(cx, ax));	// 16653 mov     cx, ax          ; * sizeof(struct TRKOBJINFO) ;~ 0613:469F
cs=0x613;eip=0x0046a1; 	T(SHL(ax, 1));	// 16654 shl     ax, 1 ;~ 0613:46A1
cs=0x613;eip=0x0046a3; 	T(ADD(ax, cx));	// 16655 add     ax, cx ;~ 0613:46A3
cs=0x613;eip=0x0046a5; 	T(SHL(ax, 1));	// 16656 shl     ax, 1 ;~ 0613:46A5
cs=0x613;eip=0x0046a7; 	T(ADD(ax, cx));	// 16657 add     ax, cx ;~ 0613:46A7
cs=0x613;eip=0x0046a9; 	T(SHL(ax, 1));	// 16658 shl     ax, 1 ;~ 0613:46A9
cs=0x613;eip=0x0046ab; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_14))));	// 16659 add     ax, [bp+var_14] ;~ 0613:46AB
cs=0x613;eip=0x0046ae; 	T(MOV(dx, ds));	// 16660 mov     dx, ds ;~ 0613:46AE
cs=0x613;eip=0x0046b0; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 16661 mov     word ptr [bp+var_6], ax ;~ 0613:46B0
cs=0x613;eip=0x0046b3; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 16662 mov     word ptr [bp+var_6+2], dx ;~ 0613:46B3
cs=0x613;eip=0x0046b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), 0));	// 16663 mov     [bp+var_24], 0 ;~ 0613:46B6
cs=0x613;eip=0x0046bb; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 16664 les     bx, [bp+var_6] ;~ 0613:46BB
cs=0x613;eip=0x0046be; 	T(MOV(al, *(raddr(es,bx+5))));	// 16665 mov     al, es:[bx+5] ;~ 0613:46BE
cs=0x613;eip=0x0046c2; 	X(MOV(*(raddr(ss,bp+var_18)), al));	// 16666 mov     [bp+var_18], al ;~ 0613:46C2
cs=0x613;eip=0x0046c5; 	T(CMP(*(raddr(ss,bp+var_28)), 0));	// 16667 cmp     [bp+var_28], 0 ;~ 0613:46C5
cs=0x613;eip=0x0046c9; 	J(JNZ(loc_18de2));	// 16668 jnz     short loc_18DE2 ;~ 0613:46C9
cs=0x613;eip=0x0046cb; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 16669 mov     al, [bp+arg_4] ;~ 0613:46CB
cs=0x613;eip=0x0046ce; 	T(SHL(al, 1));	// 16670 shl     al, 1 ;~ 0613:46CE
cs=0x613;eip=0x0046d0; 	J(JMP(loc_18dec));	// 16671 jmp     short loc_18DEC ;~ 0613:46D0
loc_18de2:
	// 5365 
cs=0x613;eip=0x0046d2; 	T(MOV(al, *(raddr(ss,bp+var_18))));	// 16675 mov     al, [bp+var_18] ;~ 0613:46D2
cs=0x613;eip=0x0046d5; 	T(SUB(al, *(raddr(ss,bp+arg_4))));	// 16676 sub     al, [bp+arg_4] ;~ 0613:46D5
cs=0x613;eip=0x0046d8; 	T(SHL(al, 1));	// 16677 shl     al, 1 ;~ 0613:46D8
cs=0x613;eip=0x0046da; 	T(SUB(al, 2));	// 16678 sub     al, 2 ;~ 0613:46DA
loc_18dec:
	// 5366 
cs=0x613;eip=0x0046dc; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 16681 mov     [bp+var_10], al ;~ 0613:46DC
cs=0x613;eip=0x0046df; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0));	// 16682 cmp     [bp+arg_6], 0 ;~ 0613:46DF
cs=0x613;eip=0x0046e3; 	J(JZ(loc_18e1a));	// 16683 jz      short loc_18E1A ;~ 0613:46E3
cs=0x613;eip=0x0046e5; 	T(MOV(al, *(raddr(es,bx+0x0D))));	// 16684 mov     al, es:[bx+0Dh] ;~ 0613:46E5
cs=0x613;eip=0x0046e9; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 16685 mov     [bp+var_16], al ;~ 0613:46E9
cs=0x613;eip=0x0046ec; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_26))));	// 16686 mov     bx, [bp+var_26] ;~ 0613:46EC
cs=0x613;eip=0x0046ef; 	T(MOV(al, *(raddr(ds,bx+9))));	// 16687 mov     al, [bx+9] ;~ 0613:46EF
cs=0x613;eip=0x0046f2; 	X(MOV(*(db*)(raddr(ss,bp+var_1a)), al));	// 16688 mov     byte ptr [bp+var_1A], al ;~ 0613:46F2
cs=0x613;eip=0x0046f5; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_1a))));	// 16689 mov     si, [bp+var_1A] ;~ 0613:46F5
cs=0x613;eip=0x0046f8; 	T(AND(si, 0x0FF));	// 16690 and     si, 0FFh ;~ 0613:46F8
cs=0x613;eip=0x0046fc; 	T(MOV(bl, *(raddr(ss,bp+var_16))));	// 16691 mov     bl, [bp+var_16] ;~ 0613:46FC
cs=0x613;eip=0x0046ff; 	T(SUB(bh, bh));	// 16692 sub     bh, bh ;~ 0613:46FF
cs=0x613;eip=0x004701; 	T(MOV(al, *((&oppnentsped)+bx+si)));	// 16693 mov     al, oppnentSped[bx+si] ;~ 0613:4701
cs=0x613;eip=0x004705; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 16694 mov     bx, [bp+arg_6] ;~ 0613:4705
cs=0x613;eip=0x004708; 	X(MOV(*(raddr(ds,bx)), al));	// 16695 mov     [bx], al ;~ 0613:4708
loc_18e1a:
	// 5367 
cs=0x613;eip=0x00470a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 16698 les     bx, [bp+var_6] ;~ 0613:470A
cs=0x613;eip=0x00470d; 	T(CMP(*(dw*)(raddr(es,bx+0x0A)), 0));	// 16699 cmp     word ptr es:[bx+0Ah], 0 ;~ 0613:470D
cs=0x613;eip=0x004712; 	J(JZ(loc_18e29));	// 16700 jz      short loc_18E29 ;~ 0613:4712
cs=0x613;eip=0x004714; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), 1));	// 16701 mov     [bp+var_24], 1 ;~ 0613:4714
loc_18e29:
	// 5368 
cs=0x613;eip=0x004719; 	T(CMP(*(raddr(ss,bp+var_28)), 0));	// 16704 cmp     [bp+var_28], 0 ;~ 0613:4719
cs=0x613;eip=0x00471d; 	J(JZ(loc_18e76));	// 16705 jz      short loc_18E76 ;~ 0613:471D
cs=0x613;eip=0x00471f; 	T(CMP(*(dw*)(raddr(ss,bp+var_24)), 0));	// 16706 cmp     [bp+var_24], 0 ;~ 0613:471F
cs=0x613;eip=0x004723; 	J(JZ(loc_18e3c));	// 16707 jz      short loc_18E3C ;~ 0613:4723
cs=0x613;eip=0x004725; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 16708 mov     ax, es:[bx+0Ah] ;~ 0613:4725
cs=0x613;eip=0x004729; 	J(JMP(loc_18e7d));	// 16709 jmp     short loc_18E7D ;~ 0613:4729
loc_18e3c:
	// 5369 
cs=0x613;eip=0x00472c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 16714 les     bx, [bp+var_6] ;~ 0613:472C
cs=0x613;eip=0x00472f; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 16715 mov     ax, es:[bx+8] ;~ 0613:472F
cs=0x613;eip=0x004733; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 16716 mov     [bp+var_2C], ax ;~ 0613:4733
cs=0x613;eip=0x004736; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), ds));	// 16717 mov     [bp+var_2A], ds ;~ 0613:4736
cs=0x613;eip=0x004739; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 16718 mov     al, [bp+var_10] ;~ 0613:4739
cs=0x613;eip=0x00473c; 	T(SUB(ah, ah));	// 16719 sub     ah, ah ;~ 0613:473C
cs=0x613;eip=0x00473e; 	T(MOV(cx, ax));	// 16720 mov     cx, ax ;~ 0613:473E
cs=0x613;eip=0x004740; 	T(SHL(ax, 1));	// 16721 shl     ax, 1 ;~ 0613:4740
cs=0x613;eip=0x004742; 	T(ADD(ax, cx));	// 16722 add     ax, cx ;~ 0613:4742
cs=0x613;eip=0x004744; 	T(SHL(ax, 1));	// 16723 shl     ax, 1 ;~ 0613:4744
cs=0x613;eip=0x004746; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 16724 add     ax, [bp+var_2C] ;~ 0613:4746
cs=0x613;eip=0x004749; 	T(MOV(dx, ds));	// 16725 mov     dx, ds ;~ 0613:4749
cs=0x613;eip=0x00474b; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 16726 mov     [bp+var_30], ax ;~ 0613:474B
cs=0x613;eip=0x00474e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), dx));	// 16727 mov     [bp+var_2E], dx ;~ 0613:474E
cs=0x613;eip=0x004751; 	T(ADD(ax, 6));	// 16728 add     ax, 6 ;~ 0613:4751
cs=0x613;eip=0x004754; 	T(di = bp+var_c);	// 16729 lea     di, [bp+var_C] ;~ 0613:4754
cs=0x613;eip=0x004757; 	T(MOV(si, ax));	// 16730 mov     si, ax ;~ 0613:4757
cs=0x613;eip=0x004759; 	X(PUSH(ss));	// 16731 push    ss ;~ 0613:4759
cs=0x613;eip=0x00475a; 	X(POP(es));	// 16732 pop     es ;~ 0613:475A
cs=0x613;eip=0x00475b; 	X(PUSH(ds));	// 16733 push    ds ;~ 0613:475B
cs=0x613;eip=0x00475c; 	X(MOVSW);	// 16734 movsw ;~ 0613:475C
cs=0x613;eip=0x00475d; 	X(MOVSW);	// 16735 movsw ;~ 0613:475D
cs=0x613;eip=0x00475e; 	X(MOVSW);	// 16736 movsw ;~ 0613:475E
cs=0x613;eip=0x00475f; 	X(POP(ds));	// 16737 pop     ds ;~ 0613:475F
cs=0x613;eip=0x004760; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_30))));	// 16738 mov     ax, [bp+var_30] ;~ 0613:4760
cs=0x613;eip=0x004763; 	J(JMP(loc_18eaa));	// 16739 jmp     short loc_18EAA ;~ 0613:4763
loc_18e76:
	// 5370 
cs=0x613;eip=0x004766; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 16744 les     bx, [bp+var_6] ;~ 0613:4766
cs=0x613;eip=0x004769; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 16745 mov     ax, es:[bx+8] ;~ 0613:4769
loc_18e7d:
	// 5371 
cs=0x613;eip=0x00476d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 16748 mov     [bp+var_2C], ax ;~ 0613:476D
cs=0x613;eip=0x004770; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), ds));	// 16749 mov     [bp+var_2A], ds ;~ 0613:4770
cs=0x613;eip=0x004773; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 16750 mov     al, [bp+var_10] ;~ 0613:4773
cs=0x613;eip=0x004776; 	T(SUB(ah, ah));	// 16751 sub     ah, ah ;~ 0613:4776
cs=0x613;eip=0x004778; 	T(MOV(cx, ax));	// 16752 mov     cx, ax ;~ 0613:4778
cs=0x613;eip=0x00477a; 	T(SHL(ax, 1));	// 16753 shl     ax, 1 ;~ 0613:477A
cs=0x613;eip=0x00477c; 	T(ADD(ax, cx));	// 16754 add     ax, cx ;~ 0613:477C
cs=0x613;eip=0x00477e; 	T(SHL(ax, 1));	// 16755 shl     ax, 1 ;~ 0613:477E
cs=0x613;eip=0x004780; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 16756 add     ax, [bp+var_2C] ;~ 0613:4780
cs=0x613;eip=0x004783; 	T(MOV(dx, ds));	// 16757 mov     dx, ds ;~ 0613:4783
cs=0x613;eip=0x004785; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 16758 mov     [bp+var_30], ax ;~ 0613:4785
cs=0x613;eip=0x004788; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), dx));	// 16759 mov     [bp+var_2E], dx ;~ 0613:4788
cs=0x613;eip=0x00478b; 	T(di = bp+var_c);	// 16760 lea     di, [bp+var_C] ;~ 0613:478B
cs=0x613;eip=0x00478e; 	T(MOV(si, ax));	// 16761 mov     si, ax ;~ 0613:478E
cs=0x613;eip=0x004790; 	X(PUSH(ss));	// 16762 push    ss ;~ 0613:4790
cs=0x613;eip=0x004791; 	X(POP(es));	// 16763 pop     es ;~ 0613:4791
cs=0x613;eip=0x004792; 	X(PUSH(ds));	// 16764 push    ds ;~ 0613:4792
cs=0x613;eip=0x004793; 	X(MOVSW);	// 16765 movsw ;~ 0613:4793
cs=0x613;eip=0x004794; 	X(MOVSW);	// 16766 movsw ;~ 0613:4794
cs=0x613;eip=0x004795; 	X(MOVSW);	// 16767 movsw ;~ 0613:4795
cs=0x613;eip=0x004796; 	X(POP(ds));	// 16768 pop     ds ;~ 0613:4796
cs=0x613;eip=0x004797; 	T(ADD(ax, 6));	// 16769 add     ax, 6 ;~ 0613:4797
loc_18eaa:
	// 5372 
cs=0x613;eip=0x00479a; 	T(di = bp+var_22);	// 16772 lea     di, [bp+var_22] ;~ 0613:479A
cs=0x613;eip=0x00479d; 	T(MOV(si, ax));	// 16773 mov     si, ax ;~ 0613:479D
cs=0x613;eip=0x00479f; 	X(PUSH(ds));	// 16774 push    ds ;~ 0613:479F
cs=0x613;eip=0x0047a0; 	T(MOV(ds, dx));	// 16775 mov     ds, dx ;~ 0613:47A0
cs=0x613;eip=0x0047a2; 	X(MOVSW);	// 16776 movsw ;~ 0613:47A2
cs=0x613;eip=0x0047a3; 	X(MOVSW);	// 16777 movsw ;~ 0613:47A3
cs=0x613;eip=0x0047a4; 	X(MOVSW);	// 16778 movsw ;~ 0613:47A4
cs=0x613;eip=0x0047a5; 	X(POP(ds));	// 16779 pop     ds ;~ 0613:47A5
cs=0x613;eip=0x0047a6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 16780 les     bx, [bp+var_6] ;~ 0613:47A6
cs=0x613;eip=0x0047a9; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 16781 mov     ax, es:[bx+6] ;~ 0613:47A9
cs=0x613;eip=0x0047ad; 	T(CMP(ax, 0x100));	// 16782 cmp     ax, 100h ;~ 0613:47AD
cs=0x613;eip=0x0047b0; 	J(JNZ(loc_18ec5));	// 16783 jnz     short loc_18EC5 ;~ 0613:47B0
cs=0x613;eip=0x0047b2; 	J(JMP(loc_18f74));	// 16784 jmp     loc_18F74 ;~ 0613:47B2
loc_18ec5:
	// 5373 
cs=0x613;eip=0x0047b5; 	T(CMP(ax, 0x200));	// 16788 cmp     ax, 200h ;~ 0613:47B5
cs=0x613;eip=0x0047b8; 	J(JNZ(loc_18ecd));	// 16789 jnz     short loc_18ECD ;~ 0613:47B8
cs=0x613;eip=0x0047ba; 	J(JMP(loc_18f52));	// 16790 jmp     loc_18F52 ;~ 0613:47BA
loc_18ecd:
	// 5374 
cs=0x613;eip=0x0047bd; 	T(CMP(ax, 0x300));	// 16794 cmp     ax, 300h ;~ 0613:47BD
cs=0x613;eip=0x0047c0; 	J(JNZ(loc_18efa));	// 16795 jnz     short loc_18EFA ;~ 0613:47C0
cs=0x613;eip=0x0047c2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 16796 mov     ax, [bp+var_C] ;~ 0613:47C2
cs=0x613;eip=0x0047c5; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 16797 mov     [bp+var_E], ax ;~ 0613:47C5
cs=0x613;eip=0x0047c8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 16798 mov     ax, [bp+var_8] ;~ 0613:47C8
cs=0x613;eip=0x0047cb; 	T(NEG(ax));	// 16799 neg     ax ;~ 0613:47CB
cs=0x613;eip=0x0047cd; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 16800 mov     [bp+var_C], ax ;~ 0613:47CD
cs=0x613;eip=0x0047d0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 16801 mov     ax, [bp+var_E] ;~ 0613:47D0
cs=0x613;eip=0x0047d3; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 16802 mov     [bp+var_8], ax ;~ 0613:47D3
cs=0x613;eip=0x0047d6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 16803 mov     ax, [bp+var_22] ;~ 0613:47D6
cs=0x613;eip=0x0047d9; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 16804 mov     [bp+var_E], ax ;~ 0613:47D9
cs=0x613;eip=0x0047dc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 16805 mov     ax, [bp+var_1E] ;~ 0613:47DC
cs=0x613;eip=0x0047df; 	T(NEG(ax));	// 16806 neg     ax ;~ 0613:47DF
cs=0x613;eip=0x0047e1; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 16807 mov     [bp+var_22], ax ;~ 0613:47E1
cs=0x613;eip=0x0047e4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 16808 mov     ax, [bp+var_E] ;~ 0613:47E4
loc_18ef7:
	// 5375 
cs=0x613;eip=0x0047e7; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 16811 mov     [bp+var_1E], ax ;~ 0613:47E7
loc_18efa:
	// 5376 
cs=0x613;eip=0x0047ea; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 16815 mov     bx, [bp+arg_0] ;~ 0613:47EA
cs=0x613;eip=0x0047ed; 	T(LES(si, td21_col_from_path));	// 16816 les     si, td21_col_from_path ;~ 0613:47ED
cs=0x613;eip=0x0047f1; 	T(MOV(al, *(raddr(es,bx+si))));	// 16817 mov     al, es:[bx+si] ;~ 0613:47F1
cs=0x613;eip=0x0047f4; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 16818 mov     [bp+var_16], al ;~ 0613:47F4
cs=0x613;eip=0x0047f7; 	T(LES(si, td22_row_from_path));	// 16819 les     si, td22_row_from_path ;~ 0613:47F7
cs=0x613;eip=0x0047fb; 	T(MOV(al, *(raddr(es,bx+si))));	// 16820 mov     al, es:[bx+si] ;~ 0613:47FB
cs=0x613;eip=0x0047fe; 	X(MOV(*(db*)(raddr(ss,bp+var_1a)), al));	// 16821 mov     byte ptr [bp+var_1A], al ;~ 0613:47FE
cs=0x613;eip=0x004801; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x0FFFF));	// 16822 cmp     [bp+var_A], 0FFFFh ;~ 0613:4801
cs=0x613;eip=0x004805; 	J(JZ(loc_18f3b));	// 16823 jz      short loc_18F3B ;~ 0613:4805
cs=0x613;eip=0x004807; 	T(MOV(bl, al));	// 16824 mov     bl, al ;~ 0613:4807
cs=0x613;eip=0x004809; 	T(SUB(bh, bh));	// 16825 sub     bh, bh ;~ 0613:4809
cs=0x613;eip=0x00480b; 	T(SHL(bx, 1));	// 16826 shl     bx, 1 ;~ 0613:480B
cs=0x613;eip=0x00480d; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 16827 mov     bx, terrainrows[bx] ;~ 0613:480D
cs=0x613;eip=0x004811; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 16828 mov     al, [bp+var_16] ;~ 0613:4811
cs=0x613;eip=0x004814; 	T(SUB(ah, ah));	// 16829 sub     ah, ah ;~ 0613:4814
cs=0x613;eip=0x004816; 	T(ADD(bx, ax));	// 16830 add     bx, ax ;~ 0613:4816
cs=0x613;eip=0x004818; 	T(LES(si, td15_terr_map_main));	// 16831 les     si, td15_terr_map_main ;~ 0613:4818
cs=0x613;eip=0x00481c; 	T(CMP(*(raddr(es,bx+si)), 6));	// 16832 cmp     byte ptr es:[bx+si], 6 ;~ 0613:481C
cs=0x613;eip=0x004820; 	J(JNZ(loc_18f3b));	// 16833 jnz     short loc_18F3B ;~ 0613:4820
cs=0x613;eip=0x004822; 	T(MOV(ax, *(dw*)(((db*)hillheightconsts)+2)));	// 16834 mov     ax, hillHeightConsts+2 ;~ 0613:4822
cs=0x613;eip=0x004825; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), ax));	// 16835 add     [bp+var_A], ax ;~ 0613:4825
cs=0x613;eip=0x004828; 	X(ADD(*(dw*)(raddr(ss,bp+var_20)), ax));	// 16836 add     [bp+var_20], ax ;~ 0613:4828
loc_18f3b:
	// 5377 
cs=0x613;eip=0x00482b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_26))));	// 16840 mov     bx, [bp+var_26] ;~ 0613:482B
cs=0x613;eip=0x00482e; 	T(TEST(*(raddr(ds,bx+0x0B)), 1));	// 16841 test    byte ptr [bx+0Bh], 1 ;~ 0613:482E
cs=0x613;eip=0x004832; 	J(JZ(loc_18f9c));	// 16842 jz      short loc_18F9C ;~ 0613:4832
cs=0x613;eip=0x004834; 	T(MOV(bl, *(db*)(raddr(ss,bp+var_1a))));	// 16843 mov     bl, byte ptr [bp+var_1A] ;~ 0613:4834
cs=0x613;eip=0x004837; 	T(SUB(bh, bh));	// 16844 sub     bh, bh ;~ 0613:4837
cs=0x613;eip=0x004839; 	T(SHL(bx, 1));	// 16845 shl     bx, 1 ;~ 0613:4839
cs=0x613;eip=0x00483b; 	T(MOV(si, *(dw*)(((db*)&trackpos)+bx)));	// 16846 mov     si, trackpos[bx] ;~ 0613:483B
cs=0x613;eip=0x00483f; 	J(JMP(loc_18fa7));	// 16847 jmp     short loc_18FA7 ;~ 0613:483F
loc_18f52:
	// 5378 
cs=0x613;eip=0x004842; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 16852 mov     ax, [bp+var_8] ;~ 0613:4842
cs=0x613;eip=0x004845; 	T(NEG(ax));	// 16853 neg     ax ;~ 0613:4845
cs=0x613;eip=0x004847; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 16854 mov     [bp+var_8], ax ;~ 0613:4847
cs=0x613;eip=0x00484a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 16855 mov     ax, [bp+var_C] ;~ 0613:484A
cs=0x613;eip=0x00484d; 	T(NEG(ax));	// 16856 neg     ax ;~ 0613:484D
cs=0x613;eip=0x00484f; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 16857 mov     [bp+var_C], ax ;~ 0613:484F
cs=0x613;eip=0x004852; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 16858 mov     ax, [bp+var_1E] ;~ 0613:4852
cs=0x613;eip=0x004855; 	T(NEG(ax));	// 16859 neg     ax ;~ 0613:4855
cs=0x613;eip=0x004857; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 16860 mov     [bp+var_1E], ax ;~ 0613:4857
cs=0x613;eip=0x00485a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 16861 mov     ax, [bp+var_22] ;~ 0613:485A
cs=0x613;eip=0x00485d; 	T(NEG(ax));	// 16862 neg     ax ;~ 0613:485D
cs=0x613;eip=0x00485f; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 16863 mov     [bp+var_22], ax ;~ 0613:485F
cs=0x613;eip=0x004862; 	J(JMP(loc_18efa));	// 16864 jmp     short loc_18EFA ;~ 0613:4862
loc_18f74:
	// 5379 
cs=0x613;eip=0x004864; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 16868 mov     ax, [bp+var_C] ;~ 0613:4864
cs=0x613;eip=0x004867; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 16869 mov     [bp+var_E], ax ;~ 0613:4867
cs=0x613;eip=0x00486a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 16870 mov     ax, [bp+var_8] ;~ 0613:486A
cs=0x613;eip=0x00486d; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 16871 mov     [bp+var_C], ax ;~ 0613:486D
cs=0x613;eip=0x004870; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 16872 mov     ax, [bp+var_E] ;~ 0613:4870
cs=0x613;eip=0x004873; 	T(NEG(ax));	// 16873 neg     ax ;~ 0613:4873
cs=0x613;eip=0x004875; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 16874 mov     [bp+var_8], ax ;~ 0613:4875
cs=0x613;eip=0x004878; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 16875 mov     ax, [bp+var_22] ;~ 0613:4878
cs=0x613;eip=0x00487b; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 16876 mov     [bp+var_E], ax ;~ 0613:487B
cs=0x613;eip=0x00487e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 16877 mov     ax, [bp+var_1E] ;~ 0613:487E
cs=0x613;eip=0x004881; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 16878 mov     [bp+var_22], ax ;~ 0613:4881
cs=0x613;eip=0x004884; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 16879 mov     ax, [bp+var_E] ;~ 0613:4884
cs=0x613;eip=0x004887; 	T(NEG(ax));	// 16880 neg     ax ;~ 0613:4887
cs=0x613;eip=0x004889; 	J(JMP(loc_18ef7));	// 16881 jmp     loc_18EF7 ;~ 0613:4889
loc_18f9c:
	// 5380 
cs=0x613;eip=0x00488c; 	T(MOV(bl, *(db*)(raddr(ss,bp+var_1a))));	// 16885 mov     bl, byte ptr [bp+var_1A] ;~ 0613:488C
cs=0x613;eip=0x00488f; 	T(SUB(bh, bh));	// 16886 sub     bh, bh ;~ 0613:488F
cs=0x613;eip=0x004891; 	T(SHL(bx, 1));	// 16887 shl     bx, 1 ;~ 0613:4891
cs=0x613;eip=0x004893; 	T(MOV(si, *(dw*)(((db*)trackcenterpos)+bx)));	// 16888 mov     si, trackcenterpos[bx] ;~ 0613:4893
loc_18fa7:
	// 5381 
cs=0x613;eip=0x004897; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), si));	// 16891 add     [bp+var_8], si ;~ 0613:4897
cs=0x613;eip=0x00489a; 	X(ADD(*(dw*)(raddr(ss,bp+var_1e)), si));	// 16892 add     [bp+var_1E], si ;~ 0613:489A
cs=0x613;eip=0x00489d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_26))));	// 16893 mov     bx, [bp+var_26] ;~ 0613:489D
cs=0x613;eip=0x0048a0; 	T(TEST(*(raddr(ds,bx+0x0B)), 2));	// 16894 test    byte ptr [bx+0Bh], 2 ;~ 0613:48A0
cs=0x613;eip=0x0048a4; 	J(JZ(loc_18fc4));	// 16895 jz      short loc_18FC4 ;~ 0613:48A4
cs=0x613;eip=0x0048a6; 	T(MOV(bl, *(raddr(ss,bp+var_16))));	// 16896 mov     bl, [bp+var_16] ;~ 0613:48A6
cs=0x613;eip=0x0048a9; 	T(SUB(bh, bh));	// 16897 sub     bh, bh ;~ 0613:48A9
cs=0x613;eip=0x0048ab; 	T(SHL(bx, 1));	// 16898 shl     bx, 1 ;~ 0613:48AB
cs=0x613;eip=0x0048ad; 	T(MOV(si, *(dw*)((((db*)trackpos2)+2)+bx)));	// 16899 mov     si, (trackpos2+2)[bx] ;~ 0613:48AD
cs=0x613;eip=0x0048b1; 	J(JMP(loc_18fcf));	// 16900 jmp     short loc_18FCF ;~ 0613:48B1
loc_18fc4:
	// 5382 
cs=0x613;eip=0x0048b4; 	T(MOV(bl, *(raddr(ss,bp+var_16))));	// 16905 mov     bl, [bp+var_16] ;~ 0613:48B4
cs=0x613;eip=0x0048b7; 	T(SUB(bh, bh));	// 16906 sub     bh, bh ;~ 0613:48B7
cs=0x613;eip=0x0048b9; 	T(SHL(bx, 1));	// 16907 shl     bx, 1 ;~ 0613:48B9
cs=0x613;eip=0x0048bb; 	T(MOV(si, *(dw*)(((db*)trackcenterpos2)+bx)));	// 16908 mov     si, trackcenterpos2[bx] ;~ 0613:48BB
loc_18fcf:
	// 5383 
cs=0x613;eip=0x0048bf; 	X(ADD(*(dw*)(raddr(ss,bp+var_c)), si));	// 16911 add     [bp+var_C], si ;~ 0613:48BF
cs=0x613;eip=0x0048c2; 	X(ADD(*(dw*)(raddr(ss,bp+var_22)), si));	// 16912 add     [bp+var_22], si ;~ 0613:48C2
cs=0x613;eip=0x0048c5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 16913 mov     ax, [bp+var_22] ;~ 0613:48C5
cs=0x613;eip=0x0048c8; 	T(CWD);	// 16914 cwd ;~ 0613:48C8
cs=0x613;eip=0x0048c9; 	T(MOV(cx, ax));	// 16915 mov     cx, ax ;~ 0613:48C9
cs=0x613;eip=0x0048cb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 16916 mov     ax, [bp+var_C] ;~ 0613:48CB
cs=0x613;eip=0x0048ce; 	T(MOV(bx, dx));	// 16917 mov     bx, dx ;~ 0613:48CE
cs=0x613;eip=0x0048d0; 	T(CWD);	// 16918 cwd ;~ 0613:48D0
cs=0x613;eip=0x0048d1; 	T(ADD(ax, cx));	// 16919 add     ax, cx ;~ 0613:48D1
cs=0x613;eip=0x0048d3; 	T(ADC(dx, bx));	// 16920 adc     dx, bx ;~ 0613:48D3
cs=0x613;eip=0x0048d5; 	T(SAR(dx, 1));	// 16921 sar     dx, 1 ;~ 0613:48D5
cs=0x613;eip=0x0048d7; 	T(RCR(ax, 1));	// 16922 rcr     ax, 1 ;~ 0613:48D7
cs=0x613;eip=0x0048d9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 16923 mov     bx, [bp+arg_2] ;~ 0613:48D9
cs=0x613;eip=0x0048dc; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 16924 mov     [bx+0], ax ;~ 0613:48DC
cs=0x613;eip=0x0048de; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x0FFFF));	// 16925 cmp     [bp+var_A], 0FFFFh ;~ 0613:48DE
cs=0x613;eip=0x0048e2; 	J(JNZ(loc_18ffe));	// 16926 jnz     short loc_18FFE ;~ 0613:48E2
cs=0x613;eip=0x0048e4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 16927 mov     bx, [bp+arg_2] ;~ 0613:48E4
cs=0x613;eip=0x0048e7; 	X(MOV(*(dw*)(raddr(ds,bx+2)), 0x0FFFF));	// 16928 mov     word ptr [bx+2], 0FFFFh ;~ 0613:48E7
cs=0x613;eip=0x0048ec; 	J(JMP(loc_19018));	// 16929 jmp     short loc_19018 ;~ 0613:48EC
loc_18ffe:
	// 5384 
cs=0x613;eip=0x0048ee; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_20))));	// 16933 mov     ax, [bp+var_20] ;~ 0613:48EE
cs=0x613;eip=0x0048f1; 	T(CWD);	// 16934 cwd ;~ 0613:48F1
cs=0x613;eip=0x0048f2; 	T(MOV(cx, ax));	// 16935 mov     cx, ax ;~ 0613:48F2
cs=0x613;eip=0x0048f4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 16936 mov     ax, [bp+var_A] ;~ 0613:48F4
cs=0x613;eip=0x0048f7; 	T(MOV(bx, dx));	// 16937 mov     bx, dx ;~ 0613:48F7
cs=0x613;eip=0x0048f9; 	T(CWD);	// 16938 cwd ;~ 0613:48F9
cs=0x613;eip=0x0048fa; 	T(ADD(ax, cx));	// 16939 add     ax, cx ;~ 0613:48FA
cs=0x613;eip=0x0048fc; 	T(ADC(dx, bx));	// 16940 adc     dx, bx ;~ 0613:48FC
cs=0x613;eip=0x0048fe; 	T(SAR(dx, 1));	// 16941 sar     dx, 1 ;~ 0613:48FE
cs=0x613;eip=0x004900; 	T(RCR(ax, 1));	// 16942 rcr     ax, 1 ;~ 0613:4900
cs=0x613;eip=0x004902; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 16943 mov     bx, [bp+arg_2] ;~ 0613:4902
cs=0x613;eip=0x004905; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 16944 mov     [bx+2], ax ;~ 0613:4905
loc_19018:
	// 5385 
cs=0x613;eip=0x004908; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 16947 mov     ax, [bp+var_1E] ;~ 0613:4908
cs=0x613;eip=0x00490b; 	T(CWD);	// 16948 cwd ;~ 0613:490B
cs=0x613;eip=0x00490c; 	T(MOV(cx, ax));	// 16949 mov     cx, ax ;~ 0613:490C
cs=0x613;eip=0x00490e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 16950 mov     ax, [bp+var_8] ;~ 0613:490E
cs=0x613;eip=0x004911; 	T(MOV(bx, dx));	// 16951 mov     bx, dx ;~ 0613:4911
cs=0x613;eip=0x004913; 	T(CWD);	// 16952 cwd ;~ 0613:4913
cs=0x613;eip=0x004914; 	T(ADD(ax, cx));	// 16953 add     ax, cx ;~ 0613:4914
cs=0x613;eip=0x004916; 	T(ADC(dx, bx));	// 16954 adc     dx, bx ;~ 0613:4916
cs=0x613;eip=0x004918; 	T(SAR(dx, 1));	// 16955 sar     dx, 1 ;~ 0613:4918
cs=0x613;eip=0x00491a; 	T(RCR(ax, 1));	// 16956 rcr     ax, 1 ;~ 0613:491A
cs=0x613;eip=0x00491c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 16957 mov     bx, [bp+arg_2] ;~ 0613:491C
cs=0x613;eip=0x00491f; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 16958 mov     [bx+4], ax ;~ 0613:491F
cs=0x613;eip=0x004922; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 16959 mov     bx, [bp+arg_2] ;~ 0613:4922
cs=0x613;eip=0x004925; 	T(di = bx+6);	// 16960 lea     di, [bx+6] ;~ 0613:4925
cs=0x613;eip=0x004928; 	T(si = bp+var_c);	// 16961 lea     si, [bp+var_C] ;~ 0613:4928
cs=0x613;eip=0x00492b; 	X(PUSH(ds));	// 16962 push    ds ;~ 0613:492B
cs=0x613;eip=0x00492c; 	X(POP(es));	// 16963 pop     es ;~ 0613:492C
cs=0x613;eip=0x00492d; 	X(MOVSW);	// 16965 movsw ;~ 0613:492D
cs=0x613;eip=0x00492e; 	X(MOVSW);	// 16966 movsw ;~ 0613:492E
cs=0x613;eip=0x00492f; 	X(MOVSW);	// 16967 movsw ;~ 0613:492F
cs=0x613;eip=0x004930; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 16968 mov     bx, [bp+arg_2] ;~ 0613:4930
cs=0x613;eip=0x004933; 	T(di = bx+0x0C);	// 16969 lea     di, [bx+0Ch] ;~ 0613:4933
cs=0x613;eip=0x004936; 	T(si = bp+var_22);	// 16970 lea     si, [bp+var_22] ;~ 0613:4936
cs=0x613;eip=0x004939; 	X(MOVSW);	// 16971 movsw ;~ 0613:4939
cs=0x613;eip=0x00493a; 	X(MOVSW);	// 16972 movsw ;~ 0613:493A
cs=0x613;eip=0x00493b; 	X(MOVSW);	// 16973 movsw ;~ 0613:493B
cs=0x613;eip=0x00493c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 16974 mov     bx, [bp+arg_2] ;~ 0613:493C
cs=0x613;eip=0x00493f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_24))));	// 16975 mov     ax, [bp+var_24] ;~ 0613:493F
cs=0x613;eip=0x004942; 	X(MOV(*(dw*)(raddr(ds,bx+0x12)), ax));	// 16976 mov     [bx+12h], ax ;~ 0613:4942
cs=0x613;eip=0x004945; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 16977 mov     al, [bp+arg_4] ;~ 0613:4945
cs=0x613;eip=0x004948; 	T(CBW);	// 16978 cbw ;~ 0613:4948
cs=0x613;eip=0x004949; 	T(MOV(cl, *(raddr(ss,bp+var_18))));	// 16979 mov     cl, [bp+var_18] ;~ 0613:4949
cs=0x613;eip=0x00494c; 	T(SUB(ch, ch));	// 16980 sub     ch, ch ;~ 0613:494C
cs=0x613;eip=0x00494e; 	T(DEC(cx));	// 16981 dec     cx ;~ 0613:494E
cs=0x613;eip=0x00494f; 	T(CMP(cx, ax));	// 16982 cmp     cx, ax ;~ 0613:494F
cs=0x613;eip=0x004951; 	J(JNZ(loc_1906c));	// 16983 jnz     short loc_1906C ;~ 0613:4951
cs=0x613;eip=0x004953; 	T(MOV(ax, 1));	// 16984 mov     ax, 1 ;~ 0613:4953
cs=0x613;eip=0x004956; 	X(POP(si));	// 16985 pop     si ;~ 0613:4956
cs=0x613;eip=0x004957; 	X(POP(di));	// 16986 pop     di ;~ 0613:4957
cs=0x613;eip=0x004958; 	T(MOV(sp, bp));	// 16987 mov     sp, bp ;~ 0613:4958
cs=0x613;eip=0x00495a; 	X(POP(bp));	// 16988 pop     bp ;~ 0613:495A
cs=0x613;eip=0x00495b; 	J(RETF(0));	// 16989 retf ;~ 0613:495B
loc_1906c:
	// 5386 
cs=0x613;eip=0x00495c; 	T(SUB(ax, ax));	// 16993 sub     ax, ax ;~ 0613:495C
cs=0x613;eip=0x00495e; 	X(POP(si));	// 16994 pop     si ;~ 0613:495E
cs=0x613;eip=0x00495f; 	X(POP(di));	// 16995 pop     di ;~ 0613:495F
cs=0x613;eip=0x004960; 	T(MOV(sp, bp));	// 16996 mov     sp, bp ;~ 0613:4960
cs=0x613;eip=0x004962; 	X(POP(bp));	// 16997 pop     bp ;~ 0613:4962
cs=0x613;eip=0x004963; 	J(RETF(0));	// 16998 retf ;~ 0613:4963

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_18de2: 	goto loc_18de2;
        case m2c::kloc_18dec: 	goto loc_18dec;
        case m2c::kloc_18e1a: 	goto loc_18e1a;
        case m2c::kloc_18e29: 	goto loc_18e29;
        case m2c::kloc_18e3c: 	goto loc_18e3c;
        case m2c::kloc_18e76: 	goto loc_18e76;
        case m2c::kloc_18e7d: 	goto loc_18e7d;
        case m2c::kloc_18eaa: 	goto loc_18eaa;
        case m2c::kloc_18ec5: 	goto loc_18ec5;
        case m2c::kloc_18ecd: 	goto loc_18ecd;
        case m2c::kloc_18ef7: 	goto loc_18ef7;
        case m2c::kloc_18efa: 	goto loc_18efa;
        case m2c::kloc_18f3b: 	goto loc_18f3b;
        case m2c::kloc_18f52: 	goto loc_18f52;
        case m2c::kloc_18f74: 	goto loc_18f74;
        case m2c::kloc_18f9c: 	goto loc_18f9c;
        case m2c::kloc_18fa7: 	goto loc_18fa7;
        case m2c::kloc_18fc4: 	goto loc_18fc4;
        case m2c::kloc_18fcf: 	goto loc_18fcf;
        case m2c::kloc_18ffe: 	goto loc_18ffe;
        case m2c::kloc_19018: 	goto loc_19018;
        case m2c::kloc_1906c: 	goto loc_1906c;
        case m2c::ksub_18d60: 	goto sub_18d60;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool car_car_coll_detect_maybe(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    car_car_coll_detect_maybe:
    _begin:
#undef var_2a
#define var_2a -0x2A
	// 17009 var_2A          = word ptr -2Ah ;~ 0613:4964
#undef var_28
#define var_28 -0x28
	// 17010 var_28          = word ptr -28h ;~ 0613:4964
#undef var_26
#define var_26 -0x26
	// 17011 var_26          = word ptr -26h ;~ 0613:4964
#undef var_24
#define var_24 -0x24
	// 17012 var_24          = byte ptr -24h ;~ 0613:4964
#undef var_c
#define var_c -0x0C
	// 17013 var_C           = word ptr -0Ch ;~ 0613:4964
#undef var_a
#define var_a -0x0A
	// 17014 var_A           = word ptr -0Ah ;~ 0613:4964
#undef var_8
#define var_8 -8
	// 17015 var_8           = word ptr -8 ;~ 0613:4964
#undef var_6
#define var_6 -6
	// 17016 var_6           = byte ptr -6 ;~ 0613:4964
#undef var_4
#define var_4 -4
	// 17017 var_4           = word ptr -4 ;~ 0613:4964
#undef arg_0
#define arg_0 6
	// 17018 arg_0           = word ptr  6 ;~ 0613:4964
#undef arg_2
#define arg_2 8
	// 17019 arg_2           = word ptr  8 ;~ 0613:4964
#undef arg_4
#define arg_4 0x0A
	// 17020 arg_4           = word ptr  0Ah ;~ 0613:4964
#undef arg_6
#define arg_6 0x0C
	// 17021 arg_6           = word ptr  0Ch ;~ 0613:4964
cs=0x613;eip=0x004964; 	X(PUSH(bp));	// 17023 push    bp ;~ 0613:4964
cs=0x613;eip=0x004965; 	T(MOV(bp, sp));	// 17024 mov     bp, sp ;~ 0613:4965
cs=0x613;eip=0x004967; 	T(SUB(sp, 0x2A));	// 17025 sub     sp, 2Ah ;~ 0613:4967
cs=0x613;eip=0x00496a; 	X(PUSH(di));	// 17026 push    di ;~ 0613:496A
cs=0x613;eip=0x00496b; 	X(PUSH(si));	// 17027 push    si ;~ 0613:496B
cs=0x613;eip=0x00496c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 17028 mov     bx, [bp+arg_0] ;~ 0613:496C
cs=0x613;eip=0x00496f; 	T(MOV(si, *(dw*)(raddr(ds,bx+6))));	// 17029 mov     si, [bx+6]      ; the 4th field of collPoints ;~ 0613:496F
cs=0x613;eip=0x004972; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 17030 mov     bx, [bp+arg_4] ;~ 0613:4972
cs=0x613;eip=0x004975; 	T(ADD(si, *(dw*)(raddr(ds,bx+6))));	// 17031 add     si, [bx+6] ;~ 0613:4975
cs=0x613;eip=0x004978; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 17032 mov     bx, [bp+arg_2] ;~ 0613:4978
cs=0x613;eip=0x00497b; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_6))));	// 17033 mov     di, [bp+arg_6] ;~ 0613:497B
cs=0x613;eip=0x00497e; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 17034 mov     ax, [di] ;~ 0613:497E
cs=0x613;eip=0x004980; 	T(CMP(*(dw*)(raddr(ds,bx)), ax));	// 17035 cmp     [bx], ax ;~ 0613:4980
cs=0x613;eip=0x004982; 	J(JL(loc_19098));	// 17036 jl      short loc_19098 ;~ 0613:4982
cs=0x613;eip=0x004984; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 17037 mov     ax, [bx] ;~ 0613:4984
cs=0x613;eip=0x004986; 	T(MOV(bx, di));	// 17038 mov     bx, di ;~ 0613:4986
loc_19098:
	// 5387 
cs=0x613;eip=0x004988; 	T(SUB(ax, *(dw*)(raddr(ds,bx))));	// 17041 sub     ax, [bx] ;~ 0613:4988
cs=0x613;eip=0x00498a; 	T(CMP(ax, si));	// 17042 cmp     ax, si ;~ 0613:498A
cs=0x613;eip=0x00498c; 	J(JG(loc_190d2));	// 17043 jg      short loc_190D2 ;~ 0613:498C
cs=0x613;eip=0x00498e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 17044 mov     bx, [bp+arg_2] ;~ 0613:498E
cs=0x613;eip=0x004991; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_6))));	// 17045 mov     di, [bp+arg_6] ;~ 0613:4991
cs=0x613;eip=0x004994; 	T(MOV(ax, *(dw*)(raddr(ds,di+4))));	// 17046 mov     ax, [di+4] ;~ 0613:4994
cs=0x613;eip=0x004997; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 17047 cmp     [bx+4], ax ;~ 0613:4997
cs=0x613;eip=0x00499a; 	J(JL(loc_190b1));	// 17048 jl      short loc_190B1 ;~ 0613:499A
cs=0x613;eip=0x00499c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17049 mov     ax, [bx+4] ;~ 0613:499C
cs=0x613;eip=0x00499f; 	T(MOV(bx, di));	// 17050 mov     bx, di ;~ 0613:499F
loc_190b1:
	// 5388 
cs=0x613;eip=0x0049a1; 	T(SUB(ax, *(dw*)(raddr(ds,bx+4))));	// 17053 sub     ax, [bx+4] ;~ 0613:49A1
cs=0x613;eip=0x0049a4; 	T(CMP(ax, si));	// 17054 cmp     ax, si ;~ 0613:49A4
cs=0x613;eip=0x0049a6; 	J(JG(loc_190d2));	// 17055 jg      short loc_190D2 ;~ 0613:49A6
cs=0x613;eip=0x0049a8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 17056 mov     bx, [bp+arg_2] ;~ 0613:49A8
cs=0x613;eip=0x0049ab; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_6))));	// 17057 mov     di, [bp+arg_6] ;~ 0613:49AB
cs=0x613;eip=0x0049ae; 	T(MOV(ax, *(dw*)(raddr(ds,di+2))));	// 17058 mov     ax, [di+2] ;~ 0613:49AE
cs=0x613;eip=0x0049b1; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 17059 cmp     [bx+2], ax ;~ 0613:49B1
cs=0x613;eip=0x0049b4; 	J(JL(loc_190cb));	// 17060 jl      short loc_190CB ;~ 0613:49B4
cs=0x613;eip=0x0049b6; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 17061 mov     ax, [bx+2] ;~ 0613:49B6
cs=0x613;eip=0x0049b9; 	T(MOV(bx, di));	// 17062 mov     bx, di ;~ 0613:49B9
loc_190cb:
	// 5389 
cs=0x613;eip=0x0049bb; 	T(SUB(ax, *(dw*)(raddr(ds,bx+2))));	// 17065 sub     ax, [bx+2] ;~ 0613:49BB
cs=0x613;eip=0x0049be; 	T(CMP(ax, si));	// 17066 cmp     ax, si ;~ 0613:49BE
cs=0x613;eip=0x0049c0; 	J(JLE(loc_190da));	// 17067 jle     short loc_190DA ;~ 0613:49C0
loc_190d2:
	// 5390 
cs=0x613;eip=0x0049c2; 	T(SUB(ax, ax));	// 17071 sub     ax, ax ;~ 0613:49C2
cs=0x613;eip=0x0049c4; 	X(POP(si));	// 17072 pop     si ;~ 0613:49C4
cs=0x613;eip=0x0049c5; 	X(POP(di));	// 17073 pop     di ;~ 0613:49C5
cs=0x613;eip=0x0049c6; 	T(MOV(sp, bp));	// 17074 mov     sp, bp ;~ 0613:49C6
cs=0x613;eip=0x0049c8; 	X(POP(bp));	// 17075 pop     bp ;~ 0613:49C8
cs=0x613;eip=0x0049c9; 	J(RETF(0));	// 17076 retf ;~ 0613:49C9
loc_190da:
	// 5391 
cs=0x613;eip=0x0049ca; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 17080 mov     bx, [bp+arg_2] ;~ 0613:49CA
cs=0x613;eip=0x0049cd; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 17081 mov     ax, [bx] ;~ 0613:49CD
cs=0x613;eip=0x0049cf; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 17082 mov     bx, [bp+arg_6] ;~ 0613:49CF
cs=0x613;eip=0x0049d2; 	T(SUB(ax, *(dw*)(raddr(ds,bx))));	// 17083 sub     ax, [bx] ;~ 0613:49D2
cs=0x613;eip=0x0049d4; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 17084 mov     [bp+var_2A], ax ;~ 0613:49D4
cs=0x613;eip=0x0049d7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 17085 mov     bx, [bp+arg_2] ;~ 0613:49D7
cs=0x613;eip=0x0049da; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 17086 mov     ax, [bx+2] ;~ 0613:49DA
cs=0x613;eip=0x0049dd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 17087 mov     bx, [bp+arg_6] ;~ 0613:49DD
cs=0x613;eip=0x0049e0; 	T(SUB(ax, *(dw*)(raddr(ds,bx+2))));	// 17088 sub     ax, [bx+2] ;~ 0613:49E0
cs=0x613;eip=0x0049e3; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 17089 mov     [bp+var_28], ax ;~ 0613:49E3
cs=0x613;eip=0x0049e6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 17090 mov     bx, [bp+arg_2] ;~ 0613:49E6
cs=0x613;eip=0x0049e9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17091 mov     ax, [bx+4] ;~ 0613:49E9
cs=0x613;eip=0x0049ec; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 17092 mov     bx, [bp+arg_6] ;~ 0613:49EC
cs=0x613;eip=0x0049ef; 	T(SUB(ax, *(dw*)(raddr(ds,bx+4))));	// 17093 sub     ax, [bx+4] ;~ 0613:49EF
cs=0x613;eip=0x0049f2; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), ax));	// 17094 mov     [bp+var_26], ax ;~ 0613:49F2
cs=0x613;eip=0x0049f5; 	T(ax = bp+var_2a);	// 17095 lea     ax, [bp+var_2A] ;~ 0613:49F5
cs=0x613;eip=0x0049f8; 	X(PUSH(ax));	// 17096 push    ax ;~ 0613:49F8
cs=0x613;eip=0x0049f9; 	J(CALLF(polarradius3d,0));	// 17097 call    polarRadius3D ;~ 0613:49F9
cs=0x613;eip=0x0049fe; 	T(ADD(sp, 2));	// 17098 add     sp, 2 ;~ 0613:49FE
cs=0x613;eip=0x004a01; 	T(CMP(ax, si));	// 17099 cmp     ax, si ;~ 0613:4A01
cs=0x613;eip=0x004a03; 	J(JA(loc_190d2));	// 17100 ja      short loc_190D2 ;~ 0613:4A03
cs=0x613;eip=0x004a05; 	T(SUB(ax, ax));	// 17101 sub     ax, ax ;~ 0613:4A05
cs=0x613;eip=0x004a07; 	X(PUSH(ax));	// 17102 push    ax ;~ 0613:4A07
cs=0x613;eip=0x004a08; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 17103 mov     bx, [bp+arg_2] ;~ 0613:4A08
cs=0x613;eip=0x004a0b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 17104 mov     ax, [bx+0Ah] ;~ 0613:4A0B
cs=0x613;eip=0x004a0e; 	T(NEG(ax));	// 17105 neg     ax ;~ 0613:4A0E
cs=0x613;eip=0x004a10; 	X(PUSH(ax));	// 17106 push    ax ;~ 0613:4A10
cs=0x613;eip=0x004a11; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 17107 mov     ax, [bx+8] ;~ 0613:4A11
cs=0x613;eip=0x004a14; 	T(NEG(ax));	// 17108 neg     ax ;~ 0613:4A14
cs=0x613;eip=0x004a16; 	X(PUSH(ax));	// 17109 push    ax ;~ 0613:4A16
cs=0x613;eip=0x004a17; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 17110 mov     ax, [bx+6] ;~ 0613:4A17
cs=0x613;eip=0x004a1a; 	T(NEG(ax));	// 17111 neg     ax ;~ 0613:4A1A
cs=0x613;eip=0x004a1c; 	X(PUSH(ax));	// 17112 push    ax ;~ 0613:4A1C
cs=0x613;eip=0x004a1d; 	J(CALLF(mat_rot_zxy,0));	// 17113 call    mat_rot_zxy ;~ 0613:4A1D
cs=0x613;eip=0x004a22; 	T(ADD(sp, 8));	// 17114 add     sp, 8 ;~ 0613:4A22
cs=0x613;eip=0x004a25; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 17115 mov     [bp+var_4], ax ;~ 0613:4A25
cs=0x613;eip=0x004a28; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 17116 mov     [bp+var_6], 0 ;~ 0613:4A28
cs=0x613;eip=0x004a2c; 	J(JMP(loc_191b2));	// 17117 jmp     short loc_191B2 ;~ 0613:4A2C
loc_1913e:
	// 5392 
cs=0x613;eip=0x004a2e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 17121 mov     bx, [bp+arg_0] ;~ 0613:4A2E
cs=0x613;eip=0x004a31; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 17122 mov     ax, [bx] ;~ 0613:4A31
cs=0x613;eip=0x004a33; 	T(NEG(ax));	// 17123 neg     ax ;~ 0613:4A33
loc_19145:
	// 5393 
cs=0x613;eip=0x004a35; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 17126 mov     [bp+var_C], ax ;~ 0613:4A35
cs=0x613;eip=0x004a38; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 17127 mov     [bp+var_A], 0 ;~ 0613:4A38
cs=0x613;eip=0x004a3d; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 17128 mov     al, [bp+var_6] ;~ 0613:4A3D
cs=0x613;eip=0x004a40; 	T(CBW);	// 17129 cbw ;~ 0613:4A40
cs=0x613;eip=0x004a41; 	T(MOV(bx, ax));	// 17130 mov     bx, ax ;~ 0613:4A41
cs=0x613;eip=0x004a43; 	T(SHL(bx, 1));	// 17131 shl     bx, 1 ;~ 0613:4A43
cs=0x613;eip=0x004a45; 	T(CMP(*(dw*)(((db*)&word_3be0c)+bx), 0));	// 17132 cmp     word_3BE0C[bx], 0 ;~ 0613:4A45
cs=0x613;eip=0x004a4a; 	J(JNZ(loc_19164));	// 17133 jnz     short loc_19164 ;~ 0613:4A4A
cs=0x613;eip=0x004a4c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 17134 mov     bx, [bp+arg_0] ;~ 0613:4A4C
cs=0x613;eip=0x004a4f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17135 mov     ax, [bx+4] ;~ 0613:4A4F
cs=0x613;eip=0x004a52; 	J(JMP(loc_1916c));	// 17136 jmp     short loc_1916C ;~ 0613:4A52
loc_19164:
	// 5394 
cs=0x613;eip=0x004a54; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 17140 mov     bx, [bp+arg_0] ;~ 0613:4A54
cs=0x613;eip=0x004a57; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17141 mov     ax, [bx+4] ;~ 0613:4A57
cs=0x613;eip=0x004a5a; 	T(NEG(ax));	// 17142 neg     ax ;~ 0613:4A5A
loc_1916c:
	// 5395 
cs=0x613;eip=0x004a5c; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 17145 mov     [bp+var_8], ax ;~ 0613:4A5C
cs=0x613;eip=0x004a5f; 	T(ax = bp+var_2a);	// 17146 lea     ax, [bp+var_2A] ;~ 0613:4A5F
cs=0x613;eip=0x004a62; 	X(PUSH(ax));	// 17147 push    ax ;~ 0613:4A62
cs=0x613;eip=0x004a63; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 17148 push    [bp+var_4] ;~ 0613:4A63
cs=0x613;eip=0x004a66; 	T(ax = bp+var_c);	// 17149 lea     ax, [bp+var_C] ;~ 0613:4A66
cs=0x613;eip=0x004a69; 	X(PUSH(ax));	// 17150 push    ax ;~ 0613:4A69
cs=0x613;eip=0x004a6a; 	J(CALLF(mat_mul_vector,0));	// 17151 call    mat_mul_vector ;~ 0613:4A6A
cs=0x613;eip=0x004a6f; 	T(ADD(sp, 6));	// 17152 add     sp, 6 ;~ 0613:4A6F
cs=0x613;eip=0x004a72; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 17153 mov     bx, [bp+arg_2] ;~ 0613:4A72
cs=0x613;eip=0x004a75; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 17154 mov     ax, [bx] ;~ 0613:4A75
cs=0x613;eip=0x004a77; 	X(ADD(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 17155 add     [bp+var_2A], ax ;~ 0613:4A77
cs=0x613;eip=0x004a7a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 17156 mov     ax, [bx+2] ;~ 0613:4A7A
cs=0x613;eip=0x004a7d; 	X(ADD(*(dw*)(raddr(ss,bp+var_28)), ax));	// 17157 add     [bp+var_28], ax ;~ 0613:4A7D
cs=0x613;eip=0x004a80; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17158 mov     ax, [bx+4] ;~ 0613:4A80
cs=0x613;eip=0x004a83; 	X(ADD(*(dw*)(raddr(ss,bp+var_26)), ax));	// 17159 add     [bp+var_26], ax ;~ 0613:4A83
cs=0x613;eip=0x004a86; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 17160 mov     al, [bp+var_6] ;~ 0613:4A86
cs=0x613;eip=0x004a89; 	T(CBW);	// 17161 cbw ;~ 0613:4A89
cs=0x613;eip=0x004a8a; 	T(MOV(di, ax));	// 17162 mov     di, ax ;~ 0613:4A8A
cs=0x613;eip=0x004a8c; 	T(SHL(di, 1));	// 17163 shl     di, 1 ;~ 0613:4A8C
cs=0x613;eip=0x004a8e; 	T(ADD(di, ax));	// 17164 add     di, ax ;~ 0613:4A8E
cs=0x613;eip=0x004a90; 	T(SHL(di, 1));	// 17165 shl     di, 1 ;~ 0613:4A90
cs=0x613;eip=0x004a92; 	X(PUSH(si));	// 17166 push    si ;~ 0613:4A92
cs=0x613;eip=0x004a93; 	T(di = bp+di+var_24);	// 17167 lea     di, [bp+di+var_24] ;~ 0613:4A93
cs=0x613;eip=0x004a96; 	T(si = bp+var_2a);	// 17168 lea     si, [bp+var_2A] ;~ 0613:4A96
cs=0x613;eip=0x004a99; 	X(PUSH(ss));	// 17169 push    ss ;~ 0613:4A99
cs=0x613;eip=0x004a9a; 	X(POP(es));	// 17170 pop     es ;~ 0613:4A9A
cs=0x613;eip=0x004a9b; 	X(MOVSW);	// 17172 movsw ;~ 0613:4A9B
cs=0x613;eip=0x004a9c; 	X(MOVSW);	// 17173 movsw ;~ 0613:4A9C
cs=0x613;eip=0x004a9d; 	X(MOVSW);	// 17174 movsw ;~ 0613:4A9D
cs=0x613;eip=0x004a9e; 	X(POP(si));	// 17175 pop     si ;~ 0613:4A9E
cs=0x613;eip=0x004a9f; 	X(INC(*(raddr(ss,bp+var_6))));	// 17176 inc     [bp+var_6] ;~ 0613:4A9F
loc_191b2:
	// 5396 
cs=0x613;eip=0x004aa2; 	T(CMP(*(raddr(ss,bp+var_6)), 4));	// 17179 cmp     [bp+var_6], 4 ;~ 0613:4AA2
cs=0x613;eip=0x004aa6; 	J(JGE(loc_191d2));	// 17180 jge     short loc_191D2 ;~ 0613:4AA6
cs=0x613;eip=0x004aa8; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 17181 mov     al, [bp+var_6] ;~ 0613:4AA8
cs=0x613;eip=0x004aab; 	T(CBW);	// 17182 cbw ;~ 0613:4AAB
cs=0x613;eip=0x004aac; 	T(MOV(bx, ax));	// 17183 mov     bx, ax ;~ 0613:4AAC
cs=0x613;eip=0x004aae; 	T(SHL(bx, 1));	// 17184 shl     bx, 1 ;~ 0613:4AAE
cs=0x613;eip=0x004ab0; 	T(CMP(*(dw*)(((db*)&word_3be04)+bx), 0));	// 17185 cmp     word_3BE04[bx], 0 ;~ 0613:4AB0
cs=0x613;eip=0x004ab5; 	J(JZ(loc_191ca));	// 17186 jz      short loc_191CA ;~ 0613:4AB5
cs=0x613;eip=0x004ab7; 	J(JMP(loc_1913e));	// 17187 jmp     loc_1913E ;~ 0613:4AB7
loc_191ca:
	// 5397 
cs=0x613;eip=0x004aba; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 17191 mov     bx, [bp+arg_0] ;~ 0613:4ABA
cs=0x613;eip=0x004abd; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 17192 mov     ax, [bx] ;~ 0613:4ABD
cs=0x613;eip=0x004abf; 	J(JMP(loc_19145));	// 17193 jmp     loc_19145 ;~ 0613:4ABF
loc_191d2:
	// 5398 
cs=0x613;eip=0x004ac2; 	T(MOV(ax, 1));	// 17197 mov     ax, 1 ;~ 0613:4AC2
cs=0x613;eip=0x004ac5; 	X(PUSH(ax));	// 17198 push    ax ;~ 0613:4AC5
cs=0x613;eip=0x004ac6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 17199 mov     bx, [bp+arg_6] ;~ 0613:4AC6
cs=0x613;eip=0x004ac9; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0A))));	// 17200 push    word ptr [bx+0Ah] ;~ 0613:4AC9
cs=0x613;eip=0x004acc; 	X(PUSH(*(dw*)(raddr(ds,bx+8))));	// 17201 push    word ptr [bx+8] ;~ 0613:4ACC
cs=0x613;eip=0x004acf; 	X(PUSH(*(dw*)(raddr(ds,bx+6))));	// 17202 push    word ptr [bx+6] ;~ 0613:4ACF
cs=0x613;eip=0x004ad2; 	J(CALLF(mat_rot_zxy,0));	// 17203 call    mat_rot_zxy ;~ 0613:4AD2
cs=0x613;eip=0x004ad7; 	T(ADD(sp, 8));	// 17204 add     sp, 8 ;~ 0613:4AD7
cs=0x613;eip=0x004ada; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 17205 mov     [bp+var_4], ax ;~ 0613:4ADA
cs=0x613;eip=0x004add; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 17206 mov     [bp+var_6], 0 ;~ 0613:4ADD
cs=0x613;eip=0x004ae1; 	J(JMP(loc_191f7));	// 17207 jmp     short loc_191F7 ;~ 0613:4AE1
loc_191f4:
	// 5399 
cs=0x613;eip=0x004ae4; 	X(INC(*(raddr(ss,bp+var_6))));	// 17213 inc     [bp+var_6] ;~ 0613:4AE4
loc_191f7:
	// 5400 
cs=0x613;eip=0x004ae7; 	T(CMP(*(raddr(ss,bp+var_6)), 4));	// 17216 cmp     [bp+var_6], 4 ;~ 0613:4AE7
cs=0x613;eip=0x004aeb; 	J(JGE(loc_1927a));	// 17217 jge     short loc_1927A ;~ 0613:4AEB
cs=0x613;eip=0x004aed; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 17218 mov     al, [bp+var_6] ;~ 0613:4AED
cs=0x613;eip=0x004af0; 	T(CBW);	// 17219 cbw ;~ 0613:4AF0
cs=0x613;eip=0x004af1; 	T(MOV(cx, ax));	// 17220 mov     cx, ax ;~ 0613:4AF1
cs=0x613;eip=0x004af3; 	T(SHL(ax, 1));	// 17221 shl     ax, 1 ;~ 0613:4AF3
cs=0x613;eip=0x004af5; 	T(ADD(ax, cx));	// 17222 add     ax, cx ;~ 0613:4AF5
cs=0x613;eip=0x004af7; 	T(SHL(ax, 1));	// 17223 shl     ax, 1 ;~ 0613:4AF7
cs=0x613;eip=0x004af9; 	T(MOV(di, ax));	// 17224 mov     di, ax ;~ 0613:4AF9
cs=0x613;eip=0x004afb; 	T(ADD(di, bp));	// 17225 add     di, bp ;~ 0613:4AFB
cs=0x613;eip=0x004afd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 17226 mov     bx, [bp+arg_6] ;~ 0613:4AFD
cs=0x613;eip=0x004b00; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 17227 mov     ax, [bx] ;~ 0613:4B00
cs=0x613;eip=0x004b02; 	T(SUB(ax, *(dw*)(raddr(ds,di-0x24))));	// 17228 sub     ax, [di-24h] ;~ 0613:4B02
cs=0x613;eip=0x004b05; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 17229 mov     [bp+var_C], ax ;~ 0613:4B05
cs=0x613;eip=0x004b08; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 17230 mov     ax, [bx+2] ;~ 0613:4B08
cs=0x613;eip=0x004b0b; 	T(SUB(ax, *(dw*)(raddr(ds,di-0x22))));	// 17231 sub     ax, [di-22h] ;~ 0613:4B0B
cs=0x613;eip=0x004b0e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 17232 mov     [bp+var_A], ax ;~ 0613:4B0E
cs=0x613;eip=0x004b11; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17233 mov     ax, [bx+4] ;~ 0613:4B11
cs=0x613;eip=0x004b14; 	T(SUB(ax, *(dw*)(raddr(ds,di-0x20))));	// 17234 sub     ax, [di-20h] ;~ 0613:4B14
cs=0x613;eip=0x004b17; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 17235 mov     [bp+var_8], ax ;~ 0613:4B17
cs=0x613;eip=0x004b1a; 	T(ax = bp+var_2a);	// 17236 lea     ax, [bp+var_2A] ;~ 0613:4B1A
cs=0x613;eip=0x004b1d; 	X(PUSH(ax));	// 17237 push    ax ;~ 0613:4B1D
cs=0x613;eip=0x004b1e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 17238 push    [bp+var_4] ;~ 0613:4B1E
cs=0x613;eip=0x004b21; 	T(ax = bp+var_c);	// 17239 lea     ax, [bp+var_C] ;~ 0613:4B21
cs=0x613;eip=0x004b24; 	X(PUSH(ax));	// 17240 push    ax ;~ 0613:4B24
cs=0x613;eip=0x004b25; 	J(CALLF(mat_mul_vector,0));	// 17241 call    mat_mul_vector ;~ 0613:4B25
cs=0x613;eip=0x004b2a; 	T(ADD(sp, 6));	// 17242 add     sp, 6 ;~ 0613:4B2A
cs=0x613;eip=0x004b2d; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0));	// 17243 cmp     [bp+var_28], 0 ;~ 0613:4B2D
cs=0x613;eip=0x004b31; 	J(JL(loc_191f4));	// 17244 jl      short loc_191F4 ;~ 0613:4B31
cs=0x613;eip=0x004b33; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 17245 mov     bx, [bp+arg_4] ;~ 0613:4B33
cs=0x613;eip=0x004b36; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 17246 mov     ax, [bp+var_28] ;~ 0613:4B36
cs=0x613;eip=0x004b39; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 17247 cmp     [bx+2], ax ;~ 0613:4B39
cs=0x613;eip=0x004b3c; 	J(JL(loc_191f4));	// 17248 jl      short loc_191F4 ;~ 0613:4B3C
cs=0x613;eip=0x004b3e; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 17249 mov     di, [bx] ;~ 0613:4B3E
cs=0x613;eip=0x004b40; 	T(MOV(ax, di));	// 17250 mov     ax, di ;~ 0613:4B40
cs=0x613;eip=0x004b42; 	T(NEG(ax));	// 17251 neg     ax ;~ 0613:4B42
cs=0x613;eip=0x004b44; 	T(CMP(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 17252 cmp     [bp+var_2A], ax ;~ 0613:4B44
cs=0x613;eip=0x004b47; 	J(JL(loc_191f4));	// 17253 jl      short loc_191F4 ;~ 0613:4B47
cs=0x613;eip=0x004b49; 	T(CMP(*(dw*)(raddr(ss,bp+var_2a)), di));	// 17254 cmp     [bp+var_2A], di ;~ 0613:4B49
cs=0x613;eip=0x004b4c; 	J(JG(loc_191f4));	// 17255 jg      short loc_191F4 ;~ 0613:4B4C
cs=0x613;eip=0x004b4e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17256 mov     ax, [bx+4] ;~ 0613:4B4E
cs=0x613;eip=0x004b51; 	T(NEG(ax));	// 17257 neg     ax ;~ 0613:4B51
cs=0x613;eip=0x004b53; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_26))));	// 17258 cmp     ax, [bp+var_26] ;~ 0613:4B53
cs=0x613;eip=0x004b56; 	J(JG(loc_191f4));	// 17259 jg      short loc_191F4 ;~ 0613:4B56
cs=0x613;eip=0x004b58; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_26))));	// 17260 mov     ax, [bp+var_26] ;~ 0613:4B58
cs=0x613;eip=0x004b5b; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 17261 cmp     [bx+4], ax ;~ 0613:4B5B
cs=0x613;eip=0x004b5e; 	J(JL(loc_191f4));	// 17262 jl      short loc_191F4 ;~ 0613:4B5E
loc_19270:
	// 5401 
cs=0x613;eip=0x004b60; 	T(MOV(ax, 1));	// 17265 mov     ax, 1 ;~ 0613:4B60
cs=0x613;eip=0x004b63; 	X(POP(si));	// 17266 pop     si ;~ 0613:4B63
cs=0x613;eip=0x004b64; 	X(POP(di));	// 17267 pop     di ;~ 0613:4B64
cs=0x613;eip=0x004b65; 	T(MOV(sp, bp));	// 17268 mov     sp, bp ;~ 0613:4B65
cs=0x613;eip=0x004b67; 	X(POP(bp));	// 17269 pop     bp ;~ 0613:4B67
cs=0x613;eip=0x004b68; 	J(RETF(0));	// 17270 retf ;~ 0613:4B68
loc_1927a:
	// 5402 
cs=0x613;eip=0x004b6a; 	T(SUB(ax, ax));	// 17275 sub     ax, ax ;~ 0613:4B6A
cs=0x613;eip=0x004b6c; 	X(PUSH(ax));	// 17276 push    ax ;~ 0613:4B6C
cs=0x613;eip=0x004b6d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 17277 mov     bx, [bp+arg_6] ;~ 0613:4B6D
cs=0x613;eip=0x004b70; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 17278 mov     ax, [bx+0Ah] ;~ 0613:4B70
cs=0x613;eip=0x004b73; 	T(NEG(ax));	// 17279 neg     ax ;~ 0613:4B73
cs=0x613;eip=0x004b75; 	X(PUSH(ax));	// 17280 push    ax ;~ 0613:4B75
cs=0x613;eip=0x004b76; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 17281 mov     ax, [bx+8] ;~ 0613:4B76
cs=0x613;eip=0x004b79; 	T(NEG(ax));	// 17282 neg     ax ;~ 0613:4B79
cs=0x613;eip=0x004b7b; 	X(PUSH(ax));	// 17283 push    ax ;~ 0613:4B7B
cs=0x613;eip=0x004b7c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 17284 mov     ax, [bx+6] ;~ 0613:4B7C
cs=0x613;eip=0x004b7f; 	T(NEG(ax));	// 17285 neg     ax ;~ 0613:4B7F
cs=0x613;eip=0x004b81; 	X(PUSH(ax));	// 17286 push    ax ;~ 0613:4B81
cs=0x613;eip=0x004b82; 	J(CALLF(mat_rot_zxy,0));	// 17287 call    mat_rot_zxy ;~ 0613:4B82
cs=0x613;eip=0x004b87; 	T(ADD(sp, 8));	// 17288 add     sp, 8 ;~ 0613:4B87
cs=0x613;eip=0x004b8a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 17289 mov     [bp+var_4], ax ;~ 0613:4B8A
cs=0x613;eip=0x004b8d; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 17290 mov     [bp+var_6], 0 ;~ 0613:4B8D
cs=0x613;eip=0x004b91; 	J(JMP(loc_19318));	// 17291 jmp     short loc_19318 ;~ 0613:4B91
loc_192a4:
	// 5403 
cs=0x613;eip=0x004b94; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 17296 mov     bx, [bp+arg_4] ;~ 0613:4B94
cs=0x613;eip=0x004b97; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 17297 mov     ax, [bx] ;~ 0613:4B97
cs=0x613;eip=0x004b99; 	T(NEG(ax));	// 17298 neg     ax ;~ 0613:4B99
loc_192ab:
	// 5404 
cs=0x613;eip=0x004b9b; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 17301 mov     [bp+var_C], ax ;~ 0613:4B9B
cs=0x613;eip=0x004b9e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 17302 mov     [bp+var_A], 0 ;~ 0613:4B9E
cs=0x613;eip=0x004ba3; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 17303 mov     al, [bp+var_6] ;~ 0613:4BA3
cs=0x613;eip=0x004ba6; 	T(CBW);	// 17304 cbw ;~ 0613:4BA6
cs=0x613;eip=0x004ba7; 	T(MOV(bx, ax));	// 17305 mov     bx, ax ;~ 0613:4BA7
cs=0x613;eip=0x004ba9; 	T(SHL(bx, 1));	// 17306 shl     bx, 1 ;~ 0613:4BA9
cs=0x613;eip=0x004bab; 	T(CMP(*(dw*)(((db*)&word_3be0c)+bx), 0));	// 17307 cmp     word_3BE0C[bx], 0 ;~ 0613:4BAB
cs=0x613;eip=0x004bb0; 	J(JNZ(loc_192ca));	// 17308 jnz     short loc_192CA ;~ 0613:4BB0
cs=0x613;eip=0x004bb2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 17309 mov     bx, [bp+arg_4] ;~ 0613:4BB2
cs=0x613;eip=0x004bb5; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17310 mov     ax, [bx+4] ;~ 0613:4BB5
cs=0x613;eip=0x004bb8; 	J(JMP(loc_192d2));	// 17311 jmp     short loc_192D2 ;~ 0613:4BB8
loc_192ca:
	// 5405 
cs=0x613;eip=0x004bba; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 17315 mov     bx, [bp+arg_4] ;~ 0613:4BBA
cs=0x613;eip=0x004bbd; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17316 mov     ax, [bx+4] ;~ 0613:4BBD
cs=0x613;eip=0x004bc0; 	T(NEG(ax));	// 17317 neg     ax ;~ 0613:4BC0
loc_192d2:
	// 5406 
cs=0x613;eip=0x004bc2; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 17320 mov     [bp+var_8], ax ;~ 0613:4BC2
cs=0x613;eip=0x004bc5; 	T(ax = bp+var_2a);	// 17321 lea     ax, [bp+var_2A] ;~ 0613:4BC5
cs=0x613;eip=0x004bc8; 	X(PUSH(ax));	// 17322 push    ax ;~ 0613:4BC8
cs=0x613;eip=0x004bc9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 17323 push    [bp+var_4] ;~ 0613:4BC9
cs=0x613;eip=0x004bcc; 	T(ax = bp+var_c);	// 17324 lea     ax, [bp+var_C] ;~ 0613:4BCC
cs=0x613;eip=0x004bcf; 	X(PUSH(ax));	// 17325 push    ax ;~ 0613:4BCF
cs=0x613;eip=0x004bd0; 	J(CALLF(mat_mul_vector,0));	// 17326 call    mat_mul_vector ;~ 0613:4BD0
cs=0x613;eip=0x004bd5; 	T(ADD(sp, 6));	// 17327 add     sp, 6 ;~ 0613:4BD5
cs=0x613;eip=0x004bd8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 17328 mov     bx, [bp+arg_6] ;~ 0613:4BD8
cs=0x613;eip=0x004bdb; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 17329 mov     ax, [bx] ;~ 0613:4BDB
cs=0x613;eip=0x004bdd; 	X(ADD(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 17330 add     [bp+var_2A], ax ;~ 0613:4BDD
cs=0x613;eip=0x004be0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 17331 mov     ax, [bx+2] ;~ 0613:4BE0
cs=0x613;eip=0x004be3; 	X(ADD(*(dw*)(raddr(ss,bp+var_28)), ax));	// 17332 add     [bp+var_28], ax ;~ 0613:4BE3
cs=0x613;eip=0x004be6; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17333 mov     ax, [bx+4] ;~ 0613:4BE6
cs=0x613;eip=0x004be9; 	X(ADD(*(dw*)(raddr(ss,bp+var_26)), ax));	// 17334 add     [bp+var_26], ax ;~ 0613:4BE9
cs=0x613;eip=0x004bec; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 17335 mov     al, [bp+var_6] ;~ 0613:4BEC
cs=0x613;eip=0x004bef; 	T(CBW);	// 17336 cbw ;~ 0613:4BEF
cs=0x613;eip=0x004bf0; 	T(MOV(di, ax));	// 17337 mov     di, ax ;~ 0613:4BF0
cs=0x613;eip=0x004bf2; 	T(SHL(di, 1));	// 17338 shl     di, 1 ;~ 0613:4BF2
cs=0x613;eip=0x004bf4; 	T(ADD(di, ax));	// 17339 add     di, ax ;~ 0613:4BF4
cs=0x613;eip=0x004bf6; 	T(SHL(di, 1));	// 17340 shl     di, 1 ;~ 0613:4BF6
cs=0x613;eip=0x004bf8; 	X(PUSH(si));	// 17341 push    si ;~ 0613:4BF8
cs=0x613;eip=0x004bf9; 	T(di = bp+di+var_24);	// 17342 lea     di, [bp+di+var_24] ;~ 0613:4BF9
cs=0x613;eip=0x004bfc; 	T(si = bp+var_2a);	// 17343 lea     si, [bp+var_2A] ;~ 0613:4BFC
cs=0x613;eip=0x004bff; 	X(PUSH(ss));	// 17344 push    ss ;~ 0613:4BFF
cs=0x613;eip=0x004c00; 	X(POP(es));	// 17345 pop     es ;~ 0613:4C00
cs=0x613;eip=0x004c01; 	X(MOVSW);	// 17346 movsw ;~ 0613:4C01
cs=0x613;eip=0x004c02; 	X(MOVSW);	// 17347 movsw ;~ 0613:4C02
cs=0x613;eip=0x004c03; 	X(MOVSW);	// 17348 movsw ;~ 0613:4C03
cs=0x613;eip=0x004c04; 	X(POP(si));	// 17349 pop     si ;~ 0613:4C04
cs=0x613;eip=0x004c05; 	X(INC(*(raddr(ss,bp+var_6))));	// 17350 inc     [bp+var_6] ;~ 0613:4C05
loc_19318:
	// 5407 
cs=0x613;eip=0x004c08; 	T(CMP(*(raddr(ss,bp+var_6)), 4));	// 17353 cmp     [bp+var_6], 4 ;~ 0613:4C08
cs=0x613;eip=0x004c0c; 	J(JGE(loc_19338));	// 17354 jge     short loc_19338 ;~ 0613:4C0C
cs=0x613;eip=0x004c0e; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 17355 mov     al, [bp+var_6] ;~ 0613:4C0E
cs=0x613;eip=0x004c11; 	T(CBW);	// 17356 cbw ;~ 0613:4C11
cs=0x613;eip=0x004c12; 	T(MOV(bx, ax));	// 17357 mov     bx, ax ;~ 0613:4C12
cs=0x613;eip=0x004c14; 	T(SHL(bx, 1));	// 17358 shl     bx, 1 ;~ 0613:4C14
cs=0x613;eip=0x004c16; 	T(CMP(*(dw*)(((db*)&word_3be04)+bx), 0));	// 17359 cmp     word_3BE04[bx], 0 ;~ 0613:4C16
cs=0x613;eip=0x004c1b; 	J(JZ(loc_19330));	// 17360 jz      short loc_19330 ;~ 0613:4C1B
cs=0x613;eip=0x004c1d; 	J(JMP(loc_192a4));	// 17361 jmp     loc_192A4 ;~ 0613:4C1D
loc_19330:
	// 5408 
cs=0x613;eip=0x004c20; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 17365 mov     bx, [bp+arg_4] ;~ 0613:4C20
cs=0x613;eip=0x004c23; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 17366 mov     ax, [bx] ;~ 0613:4C23
cs=0x613;eip=0x004c25; 	J(JMP(loc_192ab));	// 17367 jmp     loc_192AB ;~ 0613:4C25
loc_19338:
	// 5409 
cs=0x613;eip=0x004c28; 	T(MOV(ax, 1));	// 17371 mov     ax, 1 ;~ 0613:4C28
cs=0x613;eip=0x004c2b; 	X(PUSH(ax));	// 17372 push    ax ;~ 0613:4C2B
cs=0x613;eip=0x004c2c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 17373 mov     bx, [bp+arg_2] ;~ 0613:4C2C
cs=0x613;eip=0x004c2f; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0A))));	// 17374 push    word ptr [bx+0Ah] ;~ 0613:4C2F
cs=0x613;eip=0x004c32; 	X(PUSH(*(dw*)(raddr(ds,bx+8))));	// 17375 push    word ptr [bx+8] ;~ 0613:4C32
cs=0x613;eip=0x004c35; 	X(PUSH(*(dw*)(raddr(ds,bx+6))));	// 17376 push    word ptr [bx+6] ;~ 0613:4C35
cs=0x613;eip=0x004c38; 	J(CALLF(mat_rot_zxy,0));	// 17377 call    mat_rot_zxy ;~ 0613:4C38
cs=0x613;eip=0x004c3d; 	T(ADD(sp, 8));	// 17378 add     sp, 8 ;~ 0613:4C3D
cs=0x613;eip=0x004c40; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 17379 mov     [bp+var_4], ax ;~ 0613:4C40
cs=0x613;eip=0x004c43; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 17380 mov     [bp+var_6], 0 ;~ 0613:4C43
cs=0x613;eip=0x004c47; 	J(JMP(loc_1935d));	// 17381 jmp     short loc_1935D ;~ 0613:4C47
loc_1935a:
	// 5410 
cs=0x613;eip=0x004c4a; 	X(INC(*(raddr(ss,bp+var_6))));	// 17387 inc     [bp+var_6] ;~ 0613:4C4A
loc_1935d:
	// 5411 
cs=0x613;eip=0x004c4d; 	T(CMP(*(raddr(ss,bp+var_6)), 4));	// 17390 cmp     [bp+var_6], 4 ;~ 0613:4C4D
cs=0x613;eip=0x004c51; 	J(JL(loc_19366));	// 17391 jl      short loc_19366 ;~ 0613:4C51
cs=0x613;eip=0x004c53; 	J(JMP(loc_190d2));	// 17392 jmp     loc_190D2 ;~ 0613:4C53
loc_19366:
	// 5412 
cs=0x613;eip=0x004c56; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 17396 mov     al, [bp+var_6] ;~ 0613:4C56
cs=0x613;eip=0x004c59; 	T(CBW);	// 17397 cbw ;~ 0613:4C59
cs=0x613;eip=0x004c5a; 	T(MOV(cx, ax));	// 17398 mov     cx, ax ;~ 0613:4C5A
cs=0x613;eip=0x004c5c; 	T(SHL(ax, 1));	// 17399 shl     ax, 1 ;~ 0613:4C5C
cs=0x613;eip=0x004c5e; 	T(ADD(ax, cx));	// 17400 add     ax, cx ;~ 0613:4C5E
cs=0x613;eip=0x004c60; 	T(SHL(ax, 1));	// 17401 shl     ax, 1 ;~ 0613:4C60
cs=0x613;eip=0x004c62; 	T(MOV(di, ax));	// 17402 mov     di, ax ;~ 0613:4C62
cs=0x613;eip=0x004c64; 	T(ADD(di, bp));	// 17403 add     di, bp ;~ 0613:4C64
cs=0x613;eip=0x004c66; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 17404 mov     bx, [bp+arg_2] ;~ 0613:4C66
cs=0x613;eip=0x004c69; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 17405 mov     ax, [bx] ;~ 0613:4C69
cs=0x613;eip=0x004c6b; 	T(SUB(ax, *(dw*)(raddr(ds,di-0x24))));	// 17406 sub     ax, [di-24h] ;~ 0613:4C6B
cs=0x613;eip=0x004c6e; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 17407 mov     [bp+var_C], ax ;~ 0613:4C6E
cs=0x613;eip=0x004c71; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 17408 mov     ax, [bx+2] ;~ 0613:4C71
cs=0x613;eip=0x004c74; 	T(SUB(ax, *(dw*)(raddr(ds,di-0x22))));	// 17409 sub     ax, [di-22h] ;~ 0613:4C74
cs=0x613;eip=0x004c77; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 17410 mov     [bp+var_A], ax ;~ 0613:4C77
cs=0x613;eip=0x004c7a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17411 mov     ax, [bx+4] ;~ 0613:4C7A
cs=0x613;eip=0x004c7d; 	T(SUB(ax, *(dw*)(raddr(ds,di-0x20))));	// 17412 sub     ax, [di-20h] ;~ 0613:4C7D
cs=0x613;eip=0x004c80; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 17413 mov     [bp+var_8], ax ;~ 0613:4C80
cs=0x613;eip=0x004c83; 	T(ax = bp+var_2a);	// 17414 lea     ax, [bp+var_2A] ;~ 0613:4C83
cs=0x613;eip=0x004c86; 	X(PUSH(ax));	// 17415 push    ax ;~ 0613:4C86
cs=0x613;eip=0x004c87; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 17416 push    [bp+var_4] ;~ 0613:4C87
cs=0x613;eip=0x004c8a; 	T(ax = bp+var_c);	// 17417 lea     ax, [bp+var_C] ;~ 0613:4C8A
cs=0x613;eip=0x004c8d; 	X(PUSH(ax));	// 17418 push    ax ;~ 0613:4C8D
cs=0x613;eip=0x004c8e; 	J(CALLF(mat_mul_vector,0));	// 17419 call    mat_mul_vector ;~ 0613:4C8E
cs=0x613;eip=0x004c93; 	T(ADD(sp, 6));	// 17420 add     sp, 6 ;~ 0613:4C93
cs=0x613;eip=0x004c96; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0));	// 17421 cmp     [bp+var_28], 0 ;~ 0613:4C96
cs=0x613;eip=0x004c9a; 	J(JL(loc_1935a));	// 17422 jl      short loc_1935A ;~ 0613:4C9A
cs=0x613;eip=0x004c9c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 17423 mov     bx, [bp+arg_0] ;~ 0613:4C9C
cs=0x613;eip=0x004c9f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 17424 mov     ax, [bp+var_28] ;~ 0613:4C9F
cs=0x613;eip=0x004ca2; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 17425 cmp     [bx+2], ax ;~ 0613:4CA2
cs=0x613;eip=0x004ca5; 	J(JL(loc_1935a));	// 17426 jl      short loc_1935A ;~ 0613:4CA5
cs=0x613;eip=0x004ca7; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 17427 mov     di, [bx] ;~ 0613:4CA7
cs=0x613;eip=0x004ca9; 	T(MOV(ax, di));	// 17428 mov     ax, di ;~ 0613:4CA9
cs=0x613;eip=0x004cab; 	T(NEG(ax));	// 17429 neg     ax ;~ 0613:4CAB
cs=0x613;eip=0x004cad; 	T(CMP(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 17430 cmp     [bp+var_2A], ax ;~ 0613:4CAD
cs=0x613;eip=0x004cb0; 	J(JL(loc_1935a));	// 17431 jl      short loc_1935A ;~ 0613:4CB0
cs=0x613;eip=0x004cb2; 	T(CMP(*(dw*)(raddr(ss,bp+var_2a)), di));	// 17432 cmp     [bp+var_2A], di ;~ 0613:4CB2
cs=0x613;eip=0x004cb5; 	J(JG(loc_1935a));	// 17433 jg      short loc_1935A ;~ 0613:4CB5
cs=0x613;eip=0x004cb7; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17434 mov     ax, [bx+4] ;~ 0613:4CB7
cs=0x613;eip=0x004cba; 	T(NEG(ax));	// 17435 neg     ax ;~ 0613:4CBA
cs=0x613;eip=0x004cbc; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_26))));	// 17436 cmp     ax, [bp+var_26] ;~ 0613:4CBC
cs=0x613;eip=0x004cbf; 	J(JG(loc_1935a));	// 17437 jg      short loc_1935A ;~ 0613:4CBF
cs=0x613;eip=0x004cc1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_26))));	// 17438 mov     ax, [bp+var_26] ;~ 0613:4CC1
cs=0x613;eip=0x004cc4; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 17439 cmp     [bx+4], ax ;~ 0613:4CC4
cs=0x613;eip=0x004cc7; 	J(JL(loc_193dc));	// 17440 jl      short loc_193DC ;~ 0613:4CC7
cs=0x613;eip=0x004cc9; 	J(JMP(loc_19270));	// 17441 jmp     loc_19270 ;~ 0613:4CC9
loc_193dc:
	// 5413 
cs=0x613;eip=0x004ccc; 	J(JMP(loc_1935a));	// 17445 jmp     loc_1935A ;~ 0613:4CCC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kcar_car_coll_detect_maybe: 	goto car_car_coll_detect_maybe;
        case m2c::kloc_19098: 	goto loc_19098;
        case m2c::kloc_190b1: 	goto loc_190b1;
        case m2c::kloc_190cb: 	goto loc_190cb;
        case m2c::kloc_190d2: 	goto loc_190d2;
        case m2c::kloc_190da: 	goto loc_190da;
        case m2c::kloc_1913e: 	goto loc_1913e;
        case m2c::kloc_19145: 	goto loc_19145;
        case m2c::kloc_19164: 	goto loc_19164;
        case m2c::kloc_1916c: 	goto loc_1916c;
        case m2c::kloc_191b2: 	goto loc_191b2;
        case m2c::kloc_191ca: 	goto loc_191ca;
        case m2c::kloc_191d2: 	goto loc_191d2;
        case m2c::kloc_191f4: 	goto loc_191f4;
        case m2c::kloc_191f7: 	goto loc_191f7;
        case m2c::kloc_19270: 	goto loc_19270;
        case m2c::kloc_1927a: 	goto loc_1927a;
        case m2c::kloc_192a4: 	goto loc_192a4;
        case m2c::kloc_192ab: 	goto loc_192ab;
        case m2c::kloc_192ca: 	goto loc_192ca;
        case m2c::kloc_192d2: 	goto loc_192d2;
        case m2c::kloc_19318: 	goto loc_19318;
        case m2c::kloc_19330: 	goto loc_19330;
        case m2c::kloc_19338: 	goto loc_19338;
        case m2c::kloc_1935a: 	goto loc_1935a;
        case m2c::kloc_1935d: 	goto loc_1935d;
        case m2c::kloc_19366: 	goto loc_19366;
        case m2c::kloc_193dc: 	goto loc_193dc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool init_plantrak(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    init_plantrak:
    _begin:
cs=0x613;eip=0x004cd0; 	X(PUSH(bp));	// 17456 push    bp ;~ 0613:4CD0
cs=0x613;eip=0x004cd1; 	T(MOV(bp, sp));	// 17457 mov     bp, sp ;~ 0613:4CD1
cs=0x613;eip=0x004cd3; 	T(SUB(sp, 2));	// 17458 sub     sp, 2 ;~ 0613:4CD3
cs=0x613;eip=0x004cd6; 	X(PUSH(di));	// 17459 push    di ;~ 0613:4CD6
cs=0x613;eip=0x004cd7; 	X(PUSH(si));	// 17460 push    si ;~ 0613:4CD7
cs=0x613;eip=0x004cd8; 	T(MOV(ax, 0x0FFFD));	// 17461 mov     ax, 0FFFDh ;~ 0613:4CD8
cs=0x613;eip=0x004cdb; 	X(PUSH(ax));	// 17462 push    ax ;~ 0613:4CDB
cs=0x613;eip=0x004cdc; 	X(PUSH(cs));	// 17463 push    cs ;~ 0613:4CDC
cs=0x613;eip=0x004cdd; 	J(CALL(init_game_state,0));	// 17464 call    near ptr init_game_state ;~ 0613:4CDD
cs=0x613;eip=0x004ce0; 	T(ADD(sp, 2));	// 17465 add     sp, 2 ;~ 0613:4CE0
cs=0x613;eip=0x004ce3; 	T(SUB(si, si));	// 17466 sub     si, si ;~ 0613:4CE3
cs=0x613;eip=0x004ce5; 	X(MOV(byte_44889, 2));	// 17467 mov     byte_44889, 2 ;~ 0613:4CE5
cs=0x613;eip=0x004cea; 	X(MOV(planptr, offset(seg038,plan_memres)));	// 17468 mov     planptr, offset plan_memres ;~ 0613:4CEA
cs=0x613;eip=0x004cf0; 	X(MOV(word_454c4, seg_offset(seg038)));	// 17469 mov     word_454C4, seg seg038 ;~ 0613:4CF0
cs=0x613;eip=0x004cf6; 	X(MOV(startcol2, 1));	// 17470 mov     startcol2, 1 ;~ 0613:4CF6
cs=0x613;eip=0x004cfb; 	X(MOV(startrow2, 0x1C));	// 17471 mov     startrow2, 1Ch ;~ 0613:4CFB
cs=0x613;eip=0x004d00; 	T(LES(bx, td17_trk_elem_ordered));	// 17472 les     bx, td17_trk_elem_ordered ;~ 0613:4D00
cs=0x613;eip=0x004d04; 	X(MOV(*(raddr(es,bx)), 7));	// 17473 mov     byte ptr es:[bx], 7 ;~ 0613:4D04
cs=0x613;eip=0x004d08; 	T(LES(bx, td21_col_from_path));	// 17474 les     bx, td21_col_from_path ;~ 0613:4D08
cs=0x613;eip=0x004d0c; 	X(MOV(*(raddr(es,bx)), 1));	// 17475 mov     byte ptr es:[bx], 1 ;~ 0613:4D0C
cs=0x613;eip=0x004d10; 	T(LES(bx, td22_row_from_path));	// 17476 les     bx, td22_row_from_path ;~ 0613:4D10
cs=0x613;eip=0x004d14; 	T(MOV(al, startrow2));	// 17477 mov     al, startrow2 ;~ 0613:4D14
cs=0x613;eip=0x004d17; 	X(MOV(*(raddr(es,bx)), al));	// 17478 mov     es:[bx], al ;~ 0613:4D17
cs=0x613;eip=0x004d1a; 	T(LES(bx, trackdata18));	// 17479 les     bx, trackdata18 ;~ 0613:4D1A
cs=0x613;eip=0x004d1e; 	X(MOV(*(raddr(es,bx)), 0));	// 17480 mov     byte ptr es:[bx], 0 ;~ 0613:4D1E
cs=0x613;eip=0x004d22; 	T(LES(bx, td17_trk_elem_ordered));	// 17481 les     bx, td17_trk_elem_ordered ;~ 0613:4D22
cs=0x613;eip=0x004d26; 	X(MOV(*(raddr(es,bx+1)), 6));	// 17482 mov     byte ptr es:[bx+1], 6 ;~ 0613:4D26
cs=0x613;eip=0x004d2b; 	T(LES(bx, td21_col_from_path));	// 17483 les     bx, td21_col_from_path ;~ 0613:4D2B
cs=0x613;eip=0x004d2f; 	X(MOV(*(raddr(es,bx+1)), 0));	// 17484 mov     byte ptr es:[bx+1], 0 ;~ 0613:4D2F
cs=0x613;eip=0x004d34; 	T(LES(bx, td22_row_from_path));	// 17485 les     bx, td22_row_from_path ;~ 0613:4D34
cs=0x613;eip=0x004d38; 	T(MOV(al, startrow2));	// 17486 mov     al, startrow2 ;~ 0613:4D38
cs=0x613;eip=0x004d3b; 	X(MOV(*(raddr(es,bx+1)), al));	// 17487 mov     es:[bx+1], al ;~ 0613:4D3B
cs=0x613;eip=0x004d3f; 	T(LES(bx, trackdata18));	// 17488 les     bx, trackdata18 ;~ 0613:4D3F
cs=0x613;eip=0x004d43; 	X(MOV(*(raddr(es,bx+1)), 0));	// 17489 mov     byte ptr es:[bx+1], 0 ;~ 0613:4D43
cs=0x613;eip=0x004d48; 	T(LES(bx, td17_trk_elem_ordered));	// 17490 les     bx, td17_trk_elem_ordered ;~ 0613:4D48
cs=0x613;eip=0x004d4c; 	X(MOV(*(raddr(es,bx+2)), 8));	// 17491 mov     byte ptr es:[bx+2], 8 ;~ 0613:4D4C
cs=0x613;eip=0x004d51; 	T(LES(bx, td21_col_from_path));	// 17492 les     bx, td21_col_from_path ;~ 0613:4D51
cs=0x613;eip=0x004d55; 	X(MOV(*(raddr(es,bx+2)), 0));	// 17493 mov     byte ptr es:[bx+2], 0 ;~ 0613:4D55
cs=0x613;eip=0x004d5a; 	T(LES(bx, td22_row_from_path));	// 17494 les     bx, td22_row_from_path ;~ 0613:4D5A
cs=0x613;eip=0x004d5e; 	T(MOV(al, startrow2));	// 17495 mov     al, startrow2 ;~ 0613:4D5E
cs=0x613;eip=0x004d61; 	T(INC(al));	// 17496 inc     al ;~ 0613:4D61
cs=0x613;eip=0x004d63; 	X(MOV(*(raddr(es,bx+2)), al));	// 17497 mov     es:[bx+2], al ;~ 0613:4D63
cs=0x613;eip=0x004d67; 	T(LES(bx, trackdata18));	// 17498 les     bx, trackdata18 ;~ 0613:4D67
cs=0x613;eip=0x004d6b; 	X(MOV(*(raddr(es,bx+2)), 0));	// 17499 mov     byte ptr es:[bx+2], 0 ;~ 0613:4D6B
cs=0x613;eip=0x004d70; 	T(LES(bx, td17_trk_elem_ordered));	// 17500 les     bx, td17_trk_elem_ordered ;~ 0613:4D70
cs=0x613;eip=0x004d74; 	X(MOV(*(raddr(es,bx+3)), 9));	// 17501 mov     byte ptr es:[bx+3], 9 ;~ 0613:4D74
cs=0x613;eip=0x004d79; 	T(LES(bx, td21_col_from_path));	// 17502 les     bx, td21_col_from_path ;~ 0613:4D79
cs=0x613;eip=0x004d7d; 	X(MOV(*(raddr(es,bx+3)), 1));	// 17503 mov     byte ptr es:[bx+3], 1 ;~ 0613:4D7D
cs=0x613;eip=0x004d82; 	T(LES(bx, td22_row_from_path));	// 17504 les     bx, td22_row_from_path ;~ 0613:4D82
cs=0x613;eip=0x004d86; 	T(MOV(al, startrow2));	// 17505 mov     al, startrow2 ;~ 0613:4D86
cs=0x613;eip=0x004d89; 	T(INC(al));	// 17506 inc     al ;~ 0613:4D89
cs=0x613;eip=0x004d8b; 	X(MOV(*(raddr(es,bx+3)), al));	// 17507 mov     es:[bx+3], al ;~ 0613:4D8B
cs=0x613;eip=0x004d8f; 	T(LES(bx, trackdata18));	// 17508 les     bx, trackdata18 ;~ 0613:4D8F
cs=0x613;eip=0x004d93; 	X(MOV(*(raddr(es,bx+3)), 0));	// 17509 mov     byte ptr es:[bx+3], 0 ;~ 0613:4D93
cs=0x613;eip=0x004d98; 	T(LES(bx, td17_trk_elem_ordered));	// 17510 les     bx, td17_trk_elem_ordered ;~ 0613:4D98
cs=0x613;eip=0x004d9c; 	X(MOV(*(raddr(es,bx+4)), 7));	// 17511 mov     byte ptr es:[bx+4], 7 ;~ 0613:4D9C
cs=0x613;eip=0x004da1; 	T(LES(bx, td21_col_from_path));	// 17512 les     bx, td21_col_from_path ;~ 0613:4DA1
cs=0x613;eip=0x004da5; 	X(MOV(*(raddr(es,bx+4)), 1));	// 17513 mov     byte ptr es:[bx+4], 1 ;~ 0613:4DA5
cs=0x613;eip=0x004daa; 	T(LES(bx, td22_row_from_path));	// 17514 les     bx, td22_row_from_path ;~ 0613:4DAA
cs=0x613;eip=0x004dae; 	T(MOV(al, startrow2));	// 17515 mov     al, startrow2 ;~ 0613:4DAE
cs=0x613;eip=0x004db1; 	X(MOV(*(raddr(es,bx+4)), al));	// 17516 mov     es:[bx+4], al ;~ 0613:4DB1
cs=0x613;eip=0x004db5; 	T(LES(bx, trackdata18));	// 17517 les     bx, trackdata18 ;~ 0613:4DB5
cs=0x613;eip=0x004db9; 	X(MOV(*(raddr(es,bx+4)), 0));	// 17518 mov     byte ptr es:[bx+4], 0 ;~ 0613:4DB9
cs=0x613;eip=0x004dbe; 	T(LES(bx, trackdata3));	// 17519 les     bx, trackdata3 ;~ 0613:4DBE
cs=0x613;eip=0x004dc2; 	X(MOV(*(dw*)(raddr(es,bx)), si));	// 17520 mov     es:[bx], si ;~ 0613:4DC2
cs=0x613;eip=0x004dc5; 	T(LES(bx, trackdata3));	// 17521 les     bx, trackdata3 ;~ 0613:4DC5
cs=0x613;eip=0x004dc9; 	X(MOV(*(dw*)(raddr(es,bx+2)), 1));	// 17522 mov     word ptr es:[bx+2], 1 ;~ 0613:4DC9
cs=0x613;eip=0x004dcf; 	T(LES(bx, trackdata3));	// 17523 les     bx, trackdata3 ;~ 0613:4DCF
cs=0x613;eip=0x004dd3; 	X(MOV(*(dw*)(raddr(es,bx+4)), 2));	// 17524 mov     word ptr es:[bx+4], 2 ;~ 0613:4DD3
cs=0x613;eip=0x004dd9; 	T(LES(bx, trackdata3));	// 17525 les     bx, trackdata3 ;~ 0613:4DD9
cs=0x613;eip=0x004ddd; 	X(MOV(*(dw*)(raddr(es,bx+6)), 3));	// 17526 mov     word ptr es:[bx+6], 3 ;~ 0613:4DDD
cs=0x613;eip=0x004de3; 	T(LES(bx, trackdata3));	// 17527 les     bx, trackdata3 ;~ 0613:4DE3
cs=0x613;eip=0x004de7; 	X(MOV(*(dw*)(raddr(es,bx+8)), 4));	// 17528 mov     word ptr es:[bx+8], 4 ;~ 0613:4DE7
cs=0x613;eip=0x004ded; 	T(LES(bx, trackdata3));	// 17529 les     bx, trackdata3 ;~ 0613:4DED
cs=0x613;eip=0x004df1; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), 1));	// 17530 mov     word ptr es:[bx+0Ah], 1 ;~ 0613:4DF1
cs=0x613;eip=0x004df7; 	T(LES(bx, trackdata3));	// 17531 les     bx, trackdata3 ;~ 0613:4DF7
cs=0x613;eip=0x004dfb; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), 2));	// 17532 mov     word ptr es:[bx+0Ch], 2 ;~ 0613:4DFB
cs=0x613;eip=0x004e01; 	T(LES(bx, trackdata3));	// 17533 les     bx, trackdata3 ;~ 0613:4E01
cs=0x613;eip=0x004e05; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), 3));	// 17534 mov     word ptr es:[bx+0Eh], 3 ;~ 0613:4E05
cs=0x613;eip=0x004e0b; 	T(LES(bx, trackdata3));	// 17535 les     bx, trackdata3 ;~ 0613:4E0B
cs=0x613;eip=0x004e0f; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), 4));	// 17536 mov     word ptr es:[bx+10h], 4 ;~ 0613:4E0F
cs=0x613;eip=0x004e15; 	T(LES(bx, trackdata3));	// 17537 les     bx, trackdata3 ;~ 0613:4E15
cs=0x613;eip=0x004e19; 	X(MOV(*(dw*)(raddr(es,bx+0x12)), 1));	// 17538 mov     word ptr es:[bx+12h], 1 ;~ 0613:4E19
cs=0x613;eip=0x004e1f; 	T(LES(bx, trackdata3));	// 17539 les     bx, trackdata3 ;~ 0613:4E1F
cs=0x613;eip=0x004e23; 	X(MOV(*(dw*)(raddr(es,bx+0x14)), 2));	// 17540 mov     word ptr es:[bx+14h], 2 ;~ 0613:4E23
cs=0x613;eip=0x004e29; 	T(LES(bx, trackdata3));	// 17541 les     bx, trackdata3 ;~ 0613:4E29
cs=0x613;eip=0x004e2d; 	X(MOV(*(dw*)(raddr(es,bx+0x16)), 3));	// 17542 mov     word ptr es:[bx+16h], 3 ;~ 0613:4E2D
cs=0x613;eip=0x004e33; 	T(LES(bx, trackdata3));	// 17543 les     bx, trackdata3 ;~ 0613:4E33
cs=0x613;eip=0x004e37; 	X(MOV(*(dw*)(raddr(es,bx+0x18)), 4));	// 17544 mov     word ptr es:[bx+18h], 4 ;~ 0613:4E37
cs=0x613;eip=0x004e3d; 	T(LES(bx, trackdata3));	// 17545 les     bx, trackdata3 ;~ 0613:4E3D
cs=0x613;eip=0x004e41; 	X(MOV(*(dw*)(raddr(es,bx+0x1A)), si));	// 17546 mov     es:[bx+1Ah], si ;~ 0613:4E41
cs=0x613;eip=0x004e45; 	T(LES(bx, trackdata3));	// 17547 les     bx, trackdata3 ;~ 0613:4E45
cs=0x613;eip=0x004e49; 	X(MOV(*(dw*)(raddr(es,bx+0x1C)), 1));	// 17548 mov     word ptr es:[bx+1Ch], 1 ;~ 0613:4E49
cs=0x613;eip=0x004e4f; 	T(LES(bx, trackdata3));	// 17549 les     bx, trackdata3 ;~ 0613:4E4F
cs=0x613;eip=0x004e53; 	X(MOV(*(dw*)(raddr(es,bx+0x1E)), 2));	// 17550 mov     word ptr es:[bx+1Eh], 2 ;~ 0613:4E53
cs=0x613;eip=0x004e59; 	T(LES(bx, trackdata3));	// 17551 les     bx, trackdata3 ;~ 0613:4E59
cs=0x613;eip=0x004e5d; 	X(MOV(*(dw*)(raddr(es,bx+0x20)), 3));	// 17552 mov     word ptr es:[bx+20h], 3 ;~ 0613:4E5D
cs=0x613;eip=0x004e63; 	T(LES(bx, trackdata3));	// 17553 les     bx, trackdata3 ;~ 0613:4E63
cs=0x613;eip=0x004e67; 	X(MOV(*(dw*)(raddr(es,bx+0x22)), si));	// 17554 mov     es:[bx+22h], si ;~ 0613:4E67
cs=0x613;eip=0x004e6b; 	X(MOV(oppnentsped, 0x0C8));	// 17555 mov     oppnentSped, 0C8h ; 'È' ;~ 0613:4E6B
cs=0x613;eip=0x004e70; 	T(SUB(ax, ax));	// 17556 sub     ax, ax ;~ 0613:4E70
cs=0x613;eip=0x004e72; 	X(PUSH(ax));	// 17557 push    ax ;~ 0613:4E72
cs=0x613;eip=0x004e73; 	T(MOV(ax, word_43924));	// 17558 mov     ax, word_43924 ;~ 0613:4E73
cs=0x613;eip=0x004e76; 	T(ADD(ax, 0x12E));	// 17559 add     ax, 12Eh ;~ 0613:4E76
cs=0x613;eip=0x004e79; 	T(CWD);	// 17560 cwd ;~ 0613:4E79
cs=0x613;eip=0x004e7a; 	T(MOV(cl, 6));	// 17561 mov     cl, 6 ;~ 0613:4E7A
loc_1958c:
	// 5414 
cs=0x613;eip=0x004e7c; 	T(SHL(ax, 1));	// 17564 shl     ax, 1 ;~ 0613:4E7C
cs=0x613;eip=0x004e7e; 	T(RCL(dx, 1));	// 17565 rcl     dx, 1 ;~ 0613:4E7E
cs=0x613;eip=0x004e80; 	T(DEC(cl));	// 17566 dec     cl ;~ 0613:4E80
cs=0x613;eip=0x004e82; 	J(JNZ(loc_1958c));	// 17567 jnz     short loc_1958C ;~ 0613:4E82
cs=0x613;eip=0x004e84; 	X(PUSH(dx));	// 17568 push    dx ;~ 0613:4E84
cs=0x613;eip=0x004e85; 	X(PUSH(ax));	// 17569 push    ax ;~ 0613:4E85
cs=0x613;eip=0x004e86; 	T(SUB(ax, ax));	// 17570 sub     ax, ax ;~ 0613:4E86
cs=0x613;eip=0x004e88; 	X(PUSH(ax));	// 17571 push    ax ;~ 0613:4E88
cs=0x613;eip=0x004e89; 	X(PUSH(ax));	// 17572 push    ax ;~ 0613:4E89
cs=0x613;eip=0x004e8a; 	T(MOV(ax, 0x7700));	// 17573 mov     ax, 7700h ;~ 0613:4E8A
cs=0x613;eip=0x004e8d; 	T(MOV(dx, 1));	// 17574 mov     dx, 1 ;~ 0613:4E8D
cs=0x613;eip=0x004e90; 	X(PUSH(dx));	// 17575 push    dx ;~ 0613:4E90
cs=0x613;eip=0x004e91; 	X(PUSH(ax));	// 17576 push    ax ;~ 0613:4E91
cs=0x613;eip=0x004e92; 	T(MOV(ax, dx));	// 17577 mov     ax, dx ;~ 0613:4E92
cs=0x613;eip=0x004e94; 	X(PUSH(ax));	// 17578 push    ax ;~ 0613:4E94
cs=0x613;eip=0x004e95; 	T(MOV(ax, offset(dseg,simd_opponent)));	// 17579 mov     ax, offset simd_opponent ;~ 0613:4E95
cs=0x613;eip=0x004e98; 	X(PUSH(ax));	// 17580 push    ax ;~ 0613:4E98
cs=0x613;eip=0x004e99; 	T(MOV(ax, offset(dseg,word_446b6)));	// 17581 mov     ax, offset word_446B6 ;~ 0613:4E99
cs=0x613;eip=0x004e9c; 	X(PUSH(ax));	// 17582 push    ax ;~ 0613:4E9C
cs=0x613;eip=0x004e9d; 	X(PUSH(cs));	// 17583 push    cs ;~ 0613:4E9D
cs=0x613;eip=0x004e9e; 	J(CALL(init_carstate_from_simd,0));	// 17584 call    near ptr init_carstate_from_simd ;~ 0613:4E9E
cs=0x613;eip=0x004ea1; 	T(ADD(sp, 0x14));	// 17585 add     sp, 14h ;~ 0613:4EA1
cs=0x613;eip=0x004ea4; 	T(MOV(ax, offset(dseg,byte_4488d)));	// 17586 mov     ax, offset byte_4488D ;~ 0613:4EA4
cs=0x613;eip=0x004ea7; 	X(PUSH(ax));	// 17587 push    ax ;~ 0613:4EA7
cs=0x613;eip=0x004ea8; 	T(MOV(al, byte_44784));	// 17588 mov     al, byte_44784 ;~ 0613:4EA8
cs=0x613;eip=0x004eab; 	X(INC(byte_44784));	// 17589 inc     byte_44784 ;~ 0613:4EAB
cs=0x613;eip=0x004eaf; 	T(SUB(ah, ah));	// 17590 sub     ah, ah ;~ 0613:4EAF
cs=0x613;eip=0x004eb1; 	X(PUSH(ax));	// 17591 push    ax ;~ 0613:4EB1
cs=0x613;eip=0x004eb2; 	T(MOV(ax, offset(dseg,word_4475a)));	// 17592 mov     ax, offset word_4475A ;~ 0613:4EB2
cs=0x613;eip=0x004eb5; 	X(PUSH(ax));	// 17593 push    ax ;~ 0613:4EB5
cs=0x613;eip=0x004eb6; 	T(MOV(bx, word_44700));	// 17594 mov     bx, word_44700 ;~ 0613:4EB6
cs=0x613;eip=0x004eba; 	T(SHL(bx, 1));	// 17595 shl     bx, 1 ;~ 0613:4EBA
cs=0x613;eip=0x004ebc; 	T(LES(di, trackdata3));	// 17596 les     di, trackdata3 ;~ 0613:4EBC
cs=0x613;eip=0x004ec0; 	X(PUSH(*(dw*)(raddr(es,bx+di))));	// 17597 push    word ptr es:[bx+di] ;~ 0613:4EC0
cs=0x613;eip=0x004ec3; 	X(PUSH(cs));	// 17598 push    cs ;~ 0613:4EC3
cs=0x613;eip=0x004ec4; 	J(CALL(sub_18d60,0));	// 17599 call    near ptr sub_18D60 ;~ 0613:4EC4
cs=0x613;eip=0x004ec7; 	T(ADD(sp, 8));	// 17600 add     sp, 8 ;~ 0613:4EC7
cs=0x613;eip=0x004eca; 	X(POP(si));	// 17601 pop     si ;~ 0613:4ECA
cs=0x613;eip=0x004ecb; 	X(POP(di));	// 17602 pop     di ;~ 0613:4ECB
cs=0x613;eip=0x004ecc; 	T(MOV(sp, bp));	// 17603 mov     sp, bp ;~ 0613:4ECC
cs=0x613;eip=0x004ece; 	X(POP(bp));	// 17604 pop     bp ;~ 0613:4ECE
cs=0x613;eip=0x004ecf; 	J(RETF(0));	// 17605 retf ;~ 0613:4ECF

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kinit_plantrak: 	goto init_plantrak;
        case m2c::kloc_1958c: 	goto loc_1958c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool do_opponent_op(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    do_opponent_op:
    _begin:
cs=0x613;eip=0x004ed0; 	X(PUSH(cs));	// 17613 push    cs ;~ 0613:4ED0
cs=0x613;eip=0x004ed1; 	J(CALL(opponent_op,0));	// 17614 call    near ptr opponent_op ;~ 0613:4ED1
cs=0x613;eip=0x004ed4; 	J(RETF(0));	// 17615 retf ;~ 0613:4ED4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdo_opponent_op: 	goto do_opponent_op;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool update_crash_state(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    update_crash_state:
    _begin:
#undef var_4
#define var_4 -4
	// 17628 var_4           = word ptr -4 ;~ 0613:4ED6
#undef var_2
#define var_2 -2
	// 17629 var_2           = byte ptr -2 ;~ 0613:4ED6
#undef arg_0
#define arg_0 6
	// 17630 arg_0           = word ptr  6 ;~ 0613:4ED6
#undef arg_2
#define arg_2 8
	// 17631 arg_2           = word ptr  8 ;~ 0613:4ED6
cs=0x613;eip=0x004ed6; 	X(PUSH(bp));	// 17633 push    bp ;~ 0613:4ED6
cs=0x613;eip=0x004ed7; 	T(MOV(bp, sp));	// 17634 mov     bp, sp ;~ 0613:4ED7
cs=0x613;eip=0x004ed9; 	T(SUB(sp, 4));	// 17635 sub     sp, 4 ;~ 0613:4ED9
cs=0x613;eip=0x004edc; 	X(PUSH(di));	// 17636 push    di ;~ 0613:4EDC
cs=0x613;eip=0x004edd; 	X(PUSH(si));	// 17637 push    si ;~ 0613:4EDD
cs=0x613;eip=0x004ede; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 17638 mov     ax, [bp+arg_2] ;~ 0613:4EDE
cs=0x613;eip=0x004ee1; 	T(OR(ax, ax));	// 17639 or      ax, ax ;~ 0613:4EE1
cs=0x613;eip=0x004ee3; 	J(JZ(loc_195fc));	// 17640 jz      short loc_195FC ;~ 0613:4EE3
cs=0x613;eip=0x004ee5; 	T(CMP(ax, 1));	// 17641 cmp     ax, 1 ;~ 0613:4EE5
cs=0x613;eip=0x004ee8; 	J(JZ(loc_19612));	// 17642 jz      short loc_19612 ;~ 0613:4EE8
cs=0x613;eip=0x004eea; 	J(JMP(loc_19601));	// 17643 jmp     short loc_19601 ;~ 0613:4EEA
loc_195fc:
	// 5415 
cs=0x613;eip=0x004eec; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), offset(dseg,word_445e6)));	// 17647 mov     [bp+var_4], offset word_445E6 ;~ 0613:4EEC
loc_19601:
	// 5416 
cs=0x613;eip=0x004ef1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 17651 mov     bx, [bp+var_4] ;~ 0613:4EF1
cs=0x613;eip=0x004ef4; 	T(CMP(*(raddr(ds,bx+0x0C9)), 0));	// 17652 cmp     byte ptr [bx+0C9h], 0 ;~ 0613:4EF4
cs=0x613;eip=0x004ef9; 	J(JZ(loc_1961a));	// 17653 jz      short loc_1961A ;~ 0613:4EF9
cs=0x613;eip=0x004efb; 	X(POP(si));	// 17654 pop     si ;~ 0613:4EFB
cs=0x613;eip=0x004efc; 	X(POP(di));	// 17655 pop     di ;~ 0613:4EFC
cs=0x613;eip=0x004efd; 	T(MOV(sp, bp));	// 17656 mov     sp, bp ;~ 0613:4EFD
cs=0x613;eip=0x004eff; 	X(POP(bp));	// 17657 pop     bp ;~ 0613:4EFF
cs=0x613;eip=0x004f00; 	J(RETF(0));	// 17658 retf ;~ 0613:4F00
loc_19612:
	// 5417 
cs=0x613;eip=0x004f02; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), offset(dseg,word_446b6)));	// 17663 mov     [bp+var_4], offset word_446B6 ;~ 0613:4F02
cs=0x613;eip=0x004f07; 	J(JMP(loc_19601));	// 17664 jmp     short loc_19601 ;~ 0613:4F07
loc_1961a:
	// 5418 
cs=0x613;eip=0x004f0a; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 17669 mov     [bp+var_2], 0 ;~ 0613:4F0A
cs=0x613;eip=0x004f0e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 17670 mov     ax, [bp+arg_0] ;~ 0613:4F0E
cs=0x613;eip=0x004f11; 	T(CMP(ax, 1));	// 17671 cmp     ax, 1 ;~ 0613:4F11
cs=0x613;eip=0x004f14; 	J(JZ(loc_1967f));	// 17672 jz      short loc_1967F ;~ 0613:4F14
cs=0x613;eip=0x004f16; 	T(CMP(ax, 2));	// 17673 cmp     ax, 2 ;~ 0613:4F16
cs=0x613;eip=0x004f19; 	J(JNZ(loc_1962e));	// 17674 jnz     short loc_1962E ;~ 0613:4F19
cs=0x613;eip=0x004f1b; 	J(JMP(loc_196de));	// 17675 jmp     loc_196DE ;~ 0613:4F1B
loc_1962e:
	// 5419 
cs=0x613;eip=0x004f1e; 	T(CMP(ax, 3));	// 17679 cmp     ax, 3 ;~ 0613:4F1E
cs=0x613;eip=0x004f21; 	J(JNZ(loc_19636));	// 17680 jnz     short loc_19636 ;~ 0613:4F21
cs=0x613;eip=0x004f23; 	J(JMP(loc_19730));	// 17681 jmp     loc_19730 ;~ 0613:4F23
loc_19636:
	// 5420 
cs=0x613;eip=0x004f26; 	T(CMP(ax, 4));	// 17685 cmp     ax, 4 ;~ 0613:4F26
cs=0x613;eip=0x004f29; 	J(JZ(loc_19642));	// 17686 jz      short loc_19642 ;~ 0613:4F29
cs=0x613;eip=0x004f2b; 	T(CMP(ax, 5));	// 17687 cmp     ax, 5 ;~ 0613:4F2B
cs=0x613;eip=0x004f2e; 	J(JZ(loc_19676));	// 17688 jz      short loc_19676 ;~ 0613:4F2E
cs=0x613;eip=0x004f30; 	J(JMP(loc_1964e));	// 17689 jmp     short loc_1964E ;~ 0613:4F30
loc_19642:
	// 5421 
cs=0x613;eip=0x004f32; 	X(MOV(word_445cc, 1));	// 17693 mov     word_445CC, 1 ;~ 0613:4F32
cs=0x613;eip=0x004f38; 	X(MOV(word_445ce, 1));	// 17694 mov     word_445CE, 1 ;~ 0613:4F38
loc_1964e:
	// 5422 
cs=0x613;eip=0x004f3e; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 17698 cmp     [bp+var_2], 0 ;~ 0613:4F3E
cs=0x613;eip=0x004f42; 	J(JZ(loc_19664));	// 17699 jz      short loc_19664 ;~ 0613:4F42
cs=0x613;eip=0x004f44; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 17700 mov     bx, [bp+var_4] ;~ 0613:4F44
cs=0x613;eip=0x004f47; 	X(MOV(*(dw*)(raddr(ds,bx+0x2C)), 0));	// 17701 mov     word ptr [bx+2Ch], 0 ;~ 0613:4F47
cs=0x613;eip=0x004f4c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 17702 mov     bx, [bp+var_4] ;~ 0613:4F4C
cs=0x613;eip=0x004f4f; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), 0));	// 17703 mov     word ptr [bx+2Ah], 0 ;~ 0613:4F4F
loc_19664:
	// 5423 
cs=0x613;eip=0x004f54; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 17706 cmp     [bp+arg_2], 0 ;~ 0613:4F54
cs=0x613;eip=0x004f58; 	J(JNZ(loc_1966d));	// 17707 jnz     short loc_1966D ;~ 0613:4F58
cs=0x613;eip=0x004f5a; 	J(JMP(loc_19760));	// 17708 jmp     loc_19760 ;~ 0613:4F5A
loc_1966d:
	// 5424 
cs=0x613;eip=0x004f5d; 	T(MOV(ax, word_445d4));	// 17712 mov     ax, word_445D4 ;~ 0613:4F5D
cs=0x613;eip=0x004f60; 	X(MOV(word_445dc, ax));	// 17713 mov     word_445DC, ax ;~ 0613:4F60
cs=0x613;eip=0x004f63; 	J(JMP(loc_19766));	// 17714 jmp     loc_19766 ;~ 0613:4F63
loc_19676:
	// 5425 
cs=0x613;eip=0x004f66; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), 1));	// 17718 mov     [bp+arg_0], 1 ;~ 0613:4F66
cs=0x613;eip=0x004f6b; 	X(MOV(*(raddr(ss,bp+var_2)), 1));	// 17719 mov     [bp+var_2], 1 ;~ 0613:4F6B
loc_1967f:
	// 5426 
cs=0x613;eip=0x004f6f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 17722 mov     bx, [bp+var_4] ;~ 0613:4F6F
cs=0x613;eip=0x004f72; 	X(MOV(*(raddr(ds,bx+0x0C9)), 1));	// 17723 mov     byte ptr [bx+0C9h], 1 ;~ 0613:4F72
cs=0x613;eip=0x004f77; 	T(SUB(ax, ax));	// 17724 sub     ax, ax ;~ 0613:4F77
cs=0x613;eip=0x004f79; 	X(PUSH(ax));	// 17725 push    ax ;~ 0613:4F79
cs=0x613;eip=0x004f7a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 17726 mov     bx, [bp+var_4] ;~ 0613:4F7A
cs=0x613;eip=0x004f7d; 	X(PUSH(*(dw*)(raddr(ds,bx+0x18))));	// 17727 push    word ptr [bx+18h] ;~ 0613:4F7D
cs=0x613;eip=0x004f80; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 17728 push    [bp+arg_2] ;~ 0613:4F80
cs=0x613;eip=0x004f83; 	X(PUSH(cs));	// 17729 push    cs ;~ 0613:4F83
cs=0x613;eip=0x004f84; 	J(CALL(state_op_unk,0));	// 17730 call    near ptr state_op_unk ;~ 0613:4F84
cs=0x613;eip=0x004f87; 	T(ADD(sp, 6));	// 17731 add     sp, 6 ;~ 0613:4F87
cs=0x613;eip=0x004f8a; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 17732 cmp     [bp+arg_2], 0 ;~ 0613:4F8A
cs=0x613;eip=0x004f8e; 	J(JNZ(loc_196b3));	// 17733 jnz     short loc_196B3 ;~ 0613:4F8E
cs=0x613;eip=0x004f90; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 17734 mov     bx, [bp+var_4] ;~ 0613:4F90
cs=0x613;eip=0x004f93; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x2C))));	// 17735 mov     ax, [bx+2Ch] ;~ 0613:4F93
cs=0x613;eip=0x004f96; 	X(MOV(word_445e0, ax));	// 17736 mov     word_445E0, ax ;~ 0613:4F96
cs=0x613;eip=0x004f99; 	T(MOV(ax, framespersec));	// 17737 mov     ax, framespersec ;~ 0613:4F99
cs=0x613;eip=0x004f9c; 	T(SHL(ax, 1));	// 17738 shl     ax, 1 ;~ 0613:4F9C
cs=0x613;eip=0x004f9e; 	T(SHL(ax, 1));	// 17739 shl     ax, 1 ;~ 0613:4F9E
cs=0x613;eip=0x004fa0; 	X(MOV(word_445ce, ax));	// 17740 mov     word_445CE, ax ;~ 0613:4FA0
loc_196b3:
	// 5427 
cs=0x613;eip=0x004fa3; 	T(CMP(is_in_replay, 0));	// 17743 cmp     is_in_replay, 0 ;~ 0613:4FA3
cs=0x613;eip=0x004fa8; 	J(JNZ(loc_1964e));	// 17744 jnz     short loc_1964E ;~ 0613:4FA8
cs=0x613;eip=0x004faa; 	T(CMP(byte_459d8, 0));	// 17745 cmp     byte_459D8, 0 ;~ 0613:4FAA
cs=0x613;eip=0x004faf; 	J(JZ(loc_1964e));	// 17746 jz      short loc_1964E ;~ 0613:4FAF
cs=0x613;eip=0x004fb1; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 17747 cmp     [bp+arg_2], 0 ;~ 0613:4FB1
cs=0x613;eip=0x004fb5; 	J(JNZ(loc_196ce));	// 17748 jnz     short loc_196CE ;~ 0613:4FB5
cs=0x613;eip=0x004fb7; 	X(PUSH(word_43964));	// 17749 push    word_43964 ;~ 0613:4FB7
cs=0x613;eip=0x004fbb; 	J(JMP(loc_196d2));	// 17750 jmp     short loc_196D2 ;~ 0613:4FBB
loc_196ce:
	// 5428 
cs=0x613;eip=0x004fbe; 	X(PUSH(word_4408c));	// 17755 push    word_4408C ;~ 0613:4FBE
loc_196d2:
	// 5429 
cs=0x613;eip=0x004fc2; 	J(CALLF(audio_function2_wrap,0));	// 17758 call    audio_function2_wrap ;~ 0613:4FC2
cs=0x613;eip=0x004fc7; 	T(ADD(sp, 2));	// 17759 add     sp, 2 ;~ 0613:4FC7
cs=0x613;eip=0x004fca; 	J(JMP(loc_1964e));	// 17760 jmp     loc_1964E ;~ 0613:4FCA
loc_196de:
	// 5430 
cs=0x613;eip=0x004fce; 	T(CMP(is_in_replay, 0));	// 17765 cmp     is_in_replay, 0 ;~ 0613:4FCE
cs=0x613;eip=0x004fd3; 	J(JNZ(loc_19704));	// 17766 jnz     short loc_19704 ;~ 0613:4FD3
cs=0x613;eip=0x004fd5; 	T(CMP(byte_459d8, 0));	// 17767 cmp     byte_459D8, 0 ;~ 0613:4FD5
cs=0x613;eip=0x004fda; 	J(JZ(loc_19704));	// 17768 jz      short loc_19704 ;~ 0613:4FDA
cs=0x613;eip=0x004fdc; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 17769 cmp     [bp+arg_2], 0 ;~ 0613:4FDC
cs=0x613;eip=0x004fe0; 	J(JNZ(loc_196f8));	// 17770 jnz     short loc_196F8 ;~ 0613:4FE0
cs=0x613;eip=0x004fe2; 	X(PUSH(word_43964));	// 17771 push    word_43964 ;~ 0613:4FE2
cs=0x613;eip=0x004fe6; 	J(JMP(loc_196fc));	// 17772 jmp     short loc_196FC ;~ 0613:4FE6
loc_196f8:
	// 5431 
cs=0x613;eip=0x004fe8; 	X(PUSH(word_4408c));	// 17776 push    word_4408C ;~ 0613:4FE8
loc_196fc:
	// 5432 
cs=0x613;eip=0x004fec; 	J(CALLF(audio_function2_wrap,0));	// 17779 call    audio_function2_wrap ;~ 0613:4FEC
cs=0x613;eip=0x004ff1; 	T(ADD(sp, 2));	// 17780 add     sp, 2 ;~ 0613:4FF1
loc_19704:
	// 5433 
cs=0x613;eip=0x004ff4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 17784 mov     bx, [bp+var_4] ;~ 0613:4FF4
cs=0x613;eip=0x004ff7; 	X(MOV(*(raddr(ds,bx+0x0C9)), 2));	// 17785 mov     byte ptr [bx+0C9h], 2 ;~ 0613:4FF7
cs=0x613;eip=0x004ffc; 	X(MOV(*(raddr(ss,bp+var_2)), 1));	// 17786 mov     [bp+var_2], 1 ;~ 0613:4FFC
cs=0x613;eip=0x005000; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 17787 cmp     [bp+arg_2], 0 ;~ 0613:5000
cs=0x613;eip=0x005004; 	J(JZ(loc_19719));	// 17788 jz      short loc_19719 ;~ 0613:5004
cs=0x613;eip=0x005006; 	J(JMP(loc_1964e));	// 17789 jmp     loc_1964E ;~ 0613:5006
loc_19719:
	// 5434 
cs=0x613;eip=0x005009; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 17793 mov     bx, [bp+var_4] ;~ 0613:5009
cs=0x613;eip=0x00500c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x2C))));	// 17794 mov     ax, [bx+2Ch] ;~ 0613:500C
cs=0x613;eip=0x00500f; 	X(MOV(word_445e0, ax));	// 17795 mov     word_445E0, ax ;~ 0613:500F
cs=0x613;eip=0x005012; 	T(MOV(ax, framespersec));	// 17796 mov     ax, framespersec ;~ 0613:5012
cs=0x613;eip=0x005015; 	T(SHL(ax, 1));	// 17797 shl     ax, 1 ;~ 0613:5015
cs=0x613;eip=0x005017; 	T(SHL(ax, 1));	// 17798 shl     ax, 1 ;~ 0613:5017
loc_19729:
	// 5435 
cs=0x613;eip=0x005019; 	X(MOV(word_445ce, ax));	// 17801 mov     word_445CE, ax ;~ 0613:5019
cs=0x613;eip=0x00501c; 	J(JMP(loc_1964e));	// 17802 jmp     loc_1964E ;~ 0613:501C
loc_19730:
	// 5436 
cs=0x613;eip=0x005020; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 17807 mov     bx, [bp+var_4] ;~ 0613:5020
cs=0x613;eip=0x005023; 	X(MOV(*(raddr(ds,bx+0x0C9)), 3));	// 17808 mov     byte ptr [bx+0C9h], 3 ;~ 0613:5023
cs=0x613;eip=0x005028; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 17809 cmp     [bp+arg_2], 0 ;~ 0613:5028
cs=0x613;eip=0x00502c; 	J(JNZ(loc_19752));	// 17810 jnz     short loc_19752 ;~ 0613:502C
cs=0x613;eip=0x00502e; 	T(MOV(ax, word_445d4));	// 17811 mov     ax, word_445D4 ;~ 0613:502E
cs=0x613;eip=0x005031; 	T(ADD(ax, word_445de));	// 17812 add     ax, word_445DE ;~ 0613:5031
cs=0x613;eip=0x005035; 	T(ADD(ax, elapsed_time1));	// 17813 add     ax, elapsed_time1 ;~ 0613:5035
cs=0x613;eip=0x005039; 	X(MOV(word_445d6, ax));	// 17814 mov     word_445D6, ax ;~ 0613:5039
cs=0x613;eip=0x00503c; 	T(MOV(ax, framespersec));	// 17815 mov     ax, framespersec ;~ 0613:503C
cs=0x613;eip=0x00503f; 	J(JMP(loc_19729));	// 17816 jmp     short loc_19729 ;~ 0613:503F
loc_19752:
	// 5437 
cs=0x613;eip=0x005042; 	T(MOV(ax, word_445d4));	// 17821 mov     ax, word_445D4 ;~ 0613:5042
cs=0x613;eip=0x005045; 	T(ADD(ax, elapsed_time1));	// 17822 add     ax, elapsed_time1 ;~ 0613:5045
cs=0x613;eip=0x005049; 	X(MOV(word_445d8, ax));	// 17823 mov     word_445D8, ax ;~ 0613:5049
cs=0x613;eip=0x00504c; 	J(JMP(loc_1964e));	// 17824 jmp     loc_1964E ;~ 0613:504C
loc_19760:
	// 5438 
cs=0x613;eip=0x005050; 	T(MOV(ax, word_445d4));	// 17829 mov     ax, word_445D4 ;~ 0613:5050
cs=0x613;eip=0x005053; 	X(MOV(word_445da, ax));	// 17830 mov     word_445DA, ax ;~ 0613:5053
loc_19766:
	// 5439 
cs=0x613;eip=0x005056; 	T(CMP(byte_4488a, 0));	// 17833 cmp     byte_4488A, 0 ;~ 0613:5056
cs=0x613;eip=0x00505b; 	J(JNZ(loc_19779));	// 17834 jnz     short loc_19779 ;~ 0613:505B
cs=0x613;eip=0x00505d; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 17835 cmp     [bp+arg_2], 0 ;~ 0613:505D
cs=0x613;eip=0x005061; 	J(JNZ(loc_19779));	// 17836 jnz     short loc_19779 ;~ 0613:5061
cs=0x613;eip=0x005063; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0))));	// 17837 mov     al, byte ptr [bp+arg_0] ;~ 0613:5063
cs=0x613;eip=0x005066; 	X(MOV(byte_4488a, al));	// 17838 mov     byte_4488A, al ;~ 0613:5066
loc_19779:
	// 5440 
cs=0x613;eip=0x005069; 	T(TEST(byte_43966, 4));	// 17842 test    byte_43966, 4 ;~ 0613:5069
cs=0x613;eip=0x00506e; 	J(JNZ(loc_1978d));	// 17843 jnz     short loc_1978D ;~ 0613:506E
cs=0x613;eip=0x005070; 	T(MOV(di, offset(dseg,gstate_travdist)));	// 17844 mov     di, offset gState_travDist ;~ 0613:5070
cs=0x613;eip=0x005073; 	T(MOV(si, offset(dseg,word_445d0)));	// 17845 mov     si, offset word_445D0 ;~ 0613:5073
cs=0x613;eip=0x005076; 	X(PUSH(ds));	// 17846 push    ds ;~ 0613:5076
cs=0x613;eip=0x005077; 	X(POP(es));	// 17847 pop     es ;~ 0613:5077
cs=0x613;eip=0x005078; 	T(MOV(cx, 0x0B));	// 17849 mov     cx, 0Bh ;~ 0613:5078
	// 17850 repne movsw ;~ 0613:507B
cs=0x613;eip=0x00507b; 	X(	REPNE MOVSW);	// 17850 repne movsw ;~ 0613:507B
loc_1978d:
	// 5441 
cs=0x613;eip=0x00507d; 	X(POP(si));	// 17853 pop     si ;~ 0613:507D
cs=0x613;eip=0x00507e; 	X(POP(di));	// 17854 pop     di ;~ 0613:507E
cs=0x613;eip=0x00507f; 	T(MOV(sp, bp));	// 17855 mov     sp, bp ;~ 0613:507F
cs=0x613;eip=0x005081; 	X(POP(bp));	// 17856 pop     bp ;~ 0613:5081
cs=0x613;eip=0x005082; 	J(RETF(0));	// 17857 retf ;~ 0613:5082

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_195fc: 	goto loc_195fc;
        case m2c::kloc_19601: 	goto loc_19601;
        case m2c::kloc_19612: 	goto loc_19612;
        case m2c::kloc_1961a: 	goto loc_1961a;
        case m2c::kloc_1962e: 	goto loc_1962e;
        case m2c::kloc_19636: 	goto loc_19636;
        case m2c::kloc_19642: 	goto loc_19642;
        case m2c::kloc_1964e: 	goto loc_1964e;
        case m2c::kloc_19664: 	goto loc_19664;
        case m2c::kloc_1966d: 	goto loc_1966d;
        case m2c::kloc_19676: 	goto loc_19676;
        case m2c::kloc_1967f: 	goto loc_1967f;
        case m2c::kloc_196b3: 	goto loc_196b3;
        case m2c::kloc_196ce: 	goto loc_196ce;
        case m2c::kloc_196d2: 	goto loc_196d2;
        case m2c::kloc_196de: 	goto loc_196de;
        case m2c::kloc_196f8: 	goto loc_196f8;
        case m2c::kloc_196fc: 	goto loc_196fc;
        case m2c::kloc_19704: 	goto loc_19704;
        case m2c::kloc_19719: 	goto loc_19719;
        case m2c::kloc_19729: 	goto loc_19729;
        case m2c::kloc_19730: 	goto loc_19730;
        case m2c::kloc_19752: 	goto loc_19752;
        case m2c::kloc_19760: 	goto loc_19760;
        case m2c::kloc_19766: 	goto loc_19766;
        case m2c::kloc_19779: 	goto loc_19779;
        case m2c::kloc_1978d: 	goto loc_1978d;
        case m2c::kupdate_crash_state: 	goto update_crash_state;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool plane_rotate_op(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    plane_rotate_op:
    _begin:
#undef var_36
#define var_36 -0x36
	// 17870 var_36          = dword ptr -36h ;~ 0613:5084
#undef var_32
#define var_32 -0x32
	// 17871 var_32          = word ptr -32h ;~ 0613:5084
#undef var_2e
#define var_2e -0x2E
	// 17872 var_2E          = word ptr -2Eh ;~ 0613:5084
#undef var_2c
#define var_2c -0x2C
	// 17873 var_2C          = byte ptr -2Ch ;~ 0613:5084
#undef var_1a
#define var_1a -0x1A
	// 17874 var_1A          = byte ptr -1Ah ;~ 0613:5084
#undef var_8
#define var_8 -8
	// 17875 var_8           = byte ptr -8 ;~ 0613:5084
cs=0x613;eip=0x005084; 	X(PUSH(bp));	// 17877 push    bp ;~ 0613:5084
cs=0x613;eip=0x005085; 	T(MOV(bp, sp));	// 17878 mov     bp, sp ;~ 0613:5085
cs=0x613;eip=0x005087; 	T(SUB(sp, 0x36));	// 17879 sub     sp, 36h ;~ 0613:5087
cs=0x613;eip=0x00508a; 	X(PUSH(di));	// 17880 push    di ;~ 0613:508A
cs=0x613;eip=0x00508b; 	X(PUSH(si));	// 17881 push    si ;~ 0613:508B
cs=0x613;eip=0x00508c; 	T(CMP(planindex_copy, 0x0FFFF));	// 17882 cmp     planindex_copy, 0FFFFh ;~ 0613:508C
cs=0x613;eip=0x005091; 	J(JNZ(loc_197a6));	// 17883 jnz     short loc_197A6 ;~ 0613:5091
cs=0x613;eip=0x005093; 	J(JMP(loc_198c2));	// 17884 jmp     loc_198C2 ;~ 0613:5093
loc_197a6:
	// 5442 
cs=0x613;eip=0x005096; 	T(MOV(ax, 0x22));	// 17888 mov     ax, 22h ; '"' ;~ 0613:5096
cs=0x613;eip=0x005099; 	X(IMUL1_2(planindex_copy));	// 17889 imul    planindex_copy ;~ 0613:5099
cs=0x613;eip=0x00509d; 	T(ADD(ax, planptr));	// 17890 add     ax, planptr ;~ 0613:509D
cs=0x613;eip=0x0050a1; 	T(MOV(dx, word_454c4));	// 17891 mov     dx, word_454C4 ;~ 0613:50A1
cs=0x613;eip=0x0050a5; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_36))), ax));	// 17892 mov     word ptr [bp+var_36], ax ;~ 0613:50A5
cs=0x613;eip=0x0050a8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_36+2))), dx));	// 17893 mov     word ptr [bp+var_36+2], dx ;~ 0613:50A8
cs=0x613;eip=0x0050ab; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_36))));	// 17894 les     bx, [bp+var_36] ;~ 0613:50AB
cs=0x613;eip=0x0050ae; 	T(MOV(ax, pstate_minusrotate_x_2));	// 17896 mov     ax, pState_minusRotate_x_2 ;~ 0613:50AE
cs=0x613;eip=0x0050b1; 	T(CMP(*(dw*)(raddr(es,bx+2)), ax));	// 17897 cmp     es:[bx+2], ax ;~ 0613:50B1
cs=0x613;eip=0x0050b5; 	J(JNZ(loc_197d6));	// 17898 jnz     short loc_197D6 ;~ 0613:50B5
cs=0x613;eip=0x0050b7; 	T(MOV(ax, pstate_minusrotate_z_2));	// 17899 mov     ax, pState_minusRotate_z_2 ;~ 0613:50B7
cs=0x613;eip=0x0050ba; 	T(CMP(*(dw*)(raddr(es,bx+0)), ax));	// 17900 cmp     es:[bx+0], ax ;~ 0613:50BA
cs=0x613;eip=0x0050bd; 	J(JNZ(loc_197d6));	// 17901 jnz     short loc_197D6 ;~ 0613:50BD
cs=0x613;eip=0x0050bf; 	T(MOV(si, pstate_minusrotate_y_2));	// 17902 mov     si, pState_minusRotate_y_2 ;~ 0613:50BF
cs=0x613;eip=0x0050c3; 	J(JMP(loc_19845));	// 17903 jmp     short loc_19845 ;~ 0613:50C3
loc_197d6:
	// 5443 
cs=0x613;eip=0x0050c6; 	T(ax = bp+var_8);	// 17909 lea     ax, [bp+var_8] ;~ 0613:50C6
cs=0x613;eip=0x0050c9; 	X(PUSH(ax));	// 17910 push    ax ;~ 0613:50C9
cs=0x613;eip=0x0050ca; 	T(MOV(ax, offset(dseg,mat_unk)));	// 17911 mov     ax, offset mat_unk ;~ 0613:50CA
cs=0x613;eip=0x0050cd; 	X(PUSH(ax));	// 17912 push    ax ;~ 0613:50CD
cs=0x613;eip=0x0050ce; 	T(MOV(ax, offset(dseg,vec_unk2)));	// 17913 mov     ax, offset vec_unk2 ;~ 0613:50CE
cs=0x613;eip=0x0050d1; 	X(PUSH(ax));	// 17914 push    ax ;~ 0613:50D1
cs=0x613;eip=0x0050d2; 	J(CALLF(mat_mul_vector,0));	// 17915 call    mat_mul_vector ;~ 0613:50D2
cs=0x613;eip=0x0050d7; 	T(ADD(sp, 6));	// 17916 add     sp, 6 ;~ 0613:50D7
cs=0x613;eip=0x0050da; 	T(MOV(ax, 0x22));	// 17917 mov     ax, 22h ; '"' ;~ 0613:50DA
cs=0x613;eip=0x0050dd; 	X(IMUL1_2(planindex_copy));	// 17918 imul    planindex_copy ;~ 0613:50DD
cs=0x613;eip=0x0050e1; 	T(ADD(ax, planptr));	// 17919 add     ax, planptr ;~ 0613:50E1
cs=0x613;eip=0x0050e5; 	T(MOV(dx, word_454c4));	// 17920 mov     dx, word_454C4 ;~ 0613:50E5
cs=0x613;eip=0x0050e9; 	T(ADD(ax, 0x10));	// 17921 add     ax, 10h         ; plane rotation matrix ;~ 0613:50E9
cs=0x613;eip=0x0050ec; 	X(PUSH(si));	// 17922 push    si ;~ 0613:50EC
cs=0x613;eip=0x0050ed; 	T(di = bp+var_1a);	// 17923 lea     di, [bp+var_1A] ;~ 0613:50ED
cs=0x613;eip=0x0050f0; 	T(MOV(si, ax));	// 17924 mov     si, ax ;~ 0613:50F0
cs=0x613;eip=0x0050f2; 	X(PUSH(ss));	// 17925 push    ss ;~ 0613:50F2
cs=0x613;eip=0x0050f3; 	X(POP(es));	// 17926 pop     es ;~ 0613:50F3
cs=0x613;eip=0x0050f4; 	X(PUSH(ds));	// 17927 push    ds ;~ 0613:50F4
cs=0x613;eip=0x0050f5; 	T(MOV(ds, dx));	// 17928 mov     ds, dx ;~ 0613:50F5
cs=0x613;eip=0x0050f7; 	T(MOV(cx, 9));	// 17929 mov     cx, 9 ;~ 0613:50F7
	// 17930 repne movsw ;~ 0613:50FA
cs=0x613;eip=0x0050fa; 	X(	REPNE MOVSW);	// 17930 repne movsw ;~ 0613:50FA
cs=0x613;eip=0x0050fc; 	X(POP(ds));	// 17931 pop     ds ;~ 0613:50FC
cs=0x613;eip=0x0050fd; 	X(POP(si));	// 17932 pop     si ;~ 0613:50FD
cs=0x613;eip=0x0050fe; 	T(ax = bp+var_2c);	// 17933 lea     ax, [bp+var_2C] ;~ 0613:50FE
cs=0x613;eip=0x005101; 	X(PUSH(ax));	// 17934 push    ax ;~ 0613:5101
cs=0x613;eip=0x005102; 	T(ax = bp+var_1a);	// 17935 lea     ax, [bp+var_1A] ;~ 0613:5102
cs=0x613;eip=0x005105; 	X(PUSH(ax));	// 17936 push    ax ;~ 0613:5105
cs=0x613;eip=0x005106; 	J(CALLF(mat_invert,0));	// 17937 call    mat_invert ;~ 0613:5106
cs=0x613;eip=0x00510b; 	T(ADD(sp, 4));	// 17938 add     sp, 4 ;~ 0613:510B
cs=0x613;eip=0x00510e; 	T(ax = bp+var_32);	// 17939 lea     ax, [bp+var_32] ;~ 0613:510E
cs=0x613;eip=0x005111; 	X(PUSH(ax));	// 17940 push    ax ;~ 0613:5111
cs=0x613;eip=0x005112; 	T(ax = bp+var_2c);	// 17941 lea     ax, [bp+var_2C] ;~ 0613:5112
cs=0x613;eip=0x005115; 	X(PUSH(ax));	// 17942 push    ax ;~ 0613:5115
cs=0x613;eip=0x005116; 	T(ax = bp+var_8);	// 17943 lea     ax, [bp+var_8] ;~ 0613:5116
cs=0x613;eip=0x005119; 	X(PUSH(ax));	// 17944 push    ax ;~ 0613:5119
cs=0x613;eip=0x00511a; 	J(CALLF(mat_mul_vector,0));	// 17945 call    mat_mul_vector ;~ 0613:511A
cs=0x613;eip=0x00511f; 	T(ADD(sp, 6));	// 17946 add     sp, 6 ;~ 0613:511F
cs=0x613;eip=0x005122; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 17947 push    [bp+var_2E] ;~ 0613:5122
cs=0x613;eip=0x005125; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_32))));	// 17948 mov     ax, [bp+var_32] ;~ 0613:5125
cs=0x613;eip=0x005128; 	T(NEG(ax));	// 17949 neg     ax ;~ 0613:5128
cs=0x613;eip=0x00512a; 	X(PUSH(ax));	// 17950 push    ax ;~ 0613:512A
cs=0x613;eip=0x00512b; 	J(CALLF(polarangle,0));	// 17951 call    polarAngle ;~ 0613:512B
cs=0x613;eip=0x005130; 	T(ADD(sp, 4));	// 17952 add     sp, 4 ;~ 0613:5130
cs=0x613;eip=0x005133; 	T(MOV(si, ax));	// 17953 mov     si, ax ;~ 0613:5133
loc_19845:
	// 5444 
cs=0x613;eip=0x005135; 	T(ADD(si, pstate_f36mminf40sar2));	// 17956 add     si, pState_f36Mminf40sar2 ;~ 0613:5135
cs=0x613;eip=0x005139; 	J(JZ(loc_198a4));	// 17957 jz      short loc_198A4 ;~ 0613:5139
cs=0x613;eip=0x00513b; 	T(CMP(word_3be16, si));	// 17958 cmp     word_3BE16, si ;~ 0613:513B
cs=0x613;eip=0x00513f; 	J(JZ(loc_19866));	// 17959 jz      short loc_19866 ;~ 0613:513F
cs=0x613;eip=0x005141; 	T(MOV(ax, si));	// 17960 mov     ax, si ;~ 0613:5141
cs=0x613;eip=0x005143; 	T(NEG(ax));	// 17961 neg     ax ;~ 0613:5143
cs=0x613;eip=0x005145; 	X(PUSH(ax));	// 17962 push    ax ;~ 0613:5145
cs=0x613;eip=0x005146; 	T(MOV(ax, offset(dseg,mat_planetmp)));	// 17963 mov     ax, offset mat_planetmp ;~ 0613:5146
cs=0x613;eip=0x005149; 	X(PUSH(ax));	// 17964 push    ax ;~ 0613:5149
cs=0x613;eip=0x00514a; 	J(CALLF(mat_rot_y,0));	// 17965 call    mat_rot_y ;~ 0613:514A
cs=0x613;eip=0x00514f; 	T(ADD(sp, 4));	// 17966 add     sp, 4 ;~ 0613:514F
cs=0x613;eip=0x005152; 	X(MOV(word_3be16, si));	// 17967 mov     word_3BE16, si ;~ 0613:5152
loc_19866:
	// 5445 
cs=0x613;eip=0x005156; 	T(ax = bp+var_32);	// 17970 lea     ax, [bp+var_32] ;~ 0613:5156
cs=0x613;eip=0x005159; 	X(PUSH(ax));	// 17971 push    ax ;~ 0613:5159
cs=0x613;eip=0x00515a; 	T(MOV(ax, offset(dseg,mat_planetmp)));	// 17972 mov     ax, offset mat_planetmp ;~ 0613:515A
cs=0x613;eip=0x00515d; 	X(PUSH(ax));	// 17973 push    ax ;~ 0613:515D
cs=0x613;eip=0x00515e; 	T(MOV(ax, offset(dseg,vec_unk2)));	// 17974 mov     ax, offset vec_unk2 ;~ 0613:515E
cs=0x613;eip=0x005161; 	X(PUSH(ax));	// 17975 push    ax ;~ 0613:5161
cs=0x613;eip=0x005162; 	J(CALLF(mat_mul_vector,0));	// 17976 call    mat_mul_vector ;~ 0613:5162
cs=0x613;eip=0x005167; 	T(ADD(sp, 6));	// 17977 add     sp, 6 ;~ 0613:5167
cs=0x613;eip=0x00516a; 	T(MOV(ax, offset(dseg,vec_planerotopresult)));	// 17978 mov     ax, offset vec_planerotopresult ;~ 0613:516A
cs=0x613;eip=0x00516d; 	X(PUSH(ax));	// 17979 push    ax ;~ 0613:516D
cs=0x613;eip=0x00516e; 	T(MOV(ax, 0x22));	// 17980 mov     ax, 22h ; '"' ;~ 0613:516E
cs=0x613;eip=0x005171; 	X(IMUL1_2(planindex_copy));	// 17981 imul    planindex_copy ;~ 0613:5171
cs=0x613;eip=0x005175; 	T(ADD(ax, planptr));	// 17982 add     ax, planptr ;~ 0613:5175
cs=0x613;eip=0x005179; 	T(MOV(dx, word_454c4));	// 17983 mov     dx, word_454C4 ;~ 0613:5179
cs=0x613;eip=0x00517d; 	T(ADD(ax, 0x10));	// 17984 add     ax, 10h         ; plane rotation matrix. ;~ 0613:517D
cs=0x613;eip=0x005180; 	X(PUSH(dx));	// 17985 push    dx ;~ 0613:5180
cs=0x613;eip=0x005181; 	X(PUSH(ax));	// 17986 push    ax ;~ 0613:5181
cs=0x613;eip=0x005182; 	T(ax = bp+var_32);	// 17987 lea     ax, [bp+var_32] ;~ 0613:5182
loc_19895:
	// 5446 
cs=0x613;eip=0x005185; 	X(PUSH(ax));	// 17990 push    ax ;~ 0613:5185
cs=0x613;eip=0x005186; 	X(PUSH(cs));	// 17991 push    cs ;~ 0613:5186
cs=0x613;eip=0x005187; 	J(CALL(mat_mul_vector2,0));	// 17992 call    near ptr mat_mul_vector2 ;~ 0613:5187
cs=0x613;eip=0x00518a; 	T(ADD(sp, 8));	// 17993 add     sp, 8 ;~ 0613:518A
cs=0x613;eip=0x00518d; 	X(POP(si));	// 17994 pop     si ;~ 0613:518D
cs=0x613;eip=0x00518e; 	X(POP(di));	// 17995 pop     di ;~ 0613:518E
cs=0x613;eip=0x00518f; 	T(MOV(sp, bp));	// 17996 mov     sp, bp ;~ 0613:518F
cs=0x613;eip=0x005191; 	X(POP(bp));	// 17997 pop     bp ;~ 0613:5191
cs=0x613;eip=0x005192; 	J(RETF(0));	// 17998 retf ;~ 0613:5192
loc_198a4:
	// 5447 
cs=0x613;eip=0x005194; 	T(MOV(ax, offset(dseg,vec_planerotopresult)));	// 18003 mov     ax, offset vec_planerotopresult ;~ 0613:5194
cs=0x613;eip=0x005197; 	X(PUSH(ax));	// 18004 push    ax ;~ 0613:5197
cs=0x613;eip=0x005198; 	T(MOV(ax, 0x22));	// 18005 mov     ax, 22h         ; sizeof plane ;~ 0613:5198
cs=0x613;eip=0x00519b; 	X(IMUL1_2(planindex_copy));	// 18006 imul    planindex_copy ;~ 0613:519B
cs=0x613;eip=0x00519f; 	T(ADD(ax, planptr));	// 18007 add     ax, planptr ;~ 0613:519F
cs=0x613;eip=0x0051a3; 	T(MOV(dx, word_454c4));	// 18008 mov     dx, word_454C4 ;~ 0613:51A3
cs=0x613;eip=0x0051a7; 	T(ADD(ax, 0x10));	// 18009 add     ax, 10h ;~ 0613:51A7
cs=0x613;eip=0x0051aa; 	X(PUSH(dx));	// 18010 push    dx ;~ 0613:51AA
cs=0x613;eip=0x0051ab; 	X(PUSH(ax));	// 18011 push    ax ;~ 0613:51AB
cs=0x613;eip=0x0051ac; 	T(MOV(ax, offset(dseg,vec_unk2)));	// 18012 mov     ax, offset vec_unk2 ;~ 0613:51AC
cs=0x613;eip=0x0051af; 	J(JMP(loc_19895));	// 18013 jmp     short loc_19895 ;~ 0613:51AF
loc_198c2:
	// 5448 
cs=0x613;eip=0x0051b2; 	T(CMP(pstate_f36mminf40sar2, 0));	// 18018 cmp     pState_f36Mminf40sar2, 0 ;~ 0613:51B2
cs=0x613;eip=0x0051b7; 	J(JZ(loc_1990c));	// 18019 jz      short loc_1990C ;~ 0613:51B7
cs=0x613;eip=0x0051b9; 	T(MOV(ax, f36f40_whldata));	// 18020 mov     ax, f36f40_whlData ;~ 0613:51B9
cs=0x613;eip=0x0051bc; 	T(CMP(pstate_f36mminf40sar2, ax));	// 18021 cmp     pState_f36Mminf40sar2, ax ;~ 0613:51BC
cs=0x613;eip=0x0051c0; 	J(JZ(loc_198ea));	// 18022 jz      short loc_198EA ;~ 0613:51C0
cs=0x613;eip=0x0051c2; 	T(MOV(ax, pstate_f36mminf40sar2));	// 18023 mov     ax, pState_f36Mminf40sar2 ;~ 0613:51C2
cs=0x613;eip=0x0051c5; 	T(NEG(ax));	// 18024 neg     ax ;~ 0613:51C5
cs=0x613;eip=0x0051c7; 	X(PUSH(ax));	// 18025 push    ax ;~ 0613:51C7
cs=0x613;eip=0x0051c8; 	T(MOV(ax, offset(dseg,mat_unk2)));	// 18026 mov     ax, offset mat_unk2 ;~ 0613:51C8
cs=0x613;eip=0x0051cb; 	X(PUSH(ax));	// 18027 push    ax ;~ 0613:51CB
cs=0x613;eip=0x0051cc; 	J(CALLF(mat_rot_y,0));	// 18028 call    mat_rot_y ;~ 0613:51CC
cs=0x613;eip=0x0051d1; 	T(ADD(sp, 4));	// 18029 add     sp, 4 ;~ 0613:51D1
cs=0x613;eip=0x0051d4; 	T(MOV(ax, pstate_f36mminf40sar2));	// 18030 mov     ax, pState_f36Mminf40sar2 ;~ 0613:51D4
cs=0x613;eip=0x0051d7; 	X(MOV(f36f40_whldata, ax));	// 18031 mov     f36f40_whlData, ax ;~ 0613:51D7
loc_198ea:
	// 5449 
cs=0x613;eip=0x0051da; 	T(ax = bp+var_32);	// 18034 lea     ax, [bp+var_32] ;~ 0613:51DA
cs=0x613;eip=0x0051dd; 	X(PUSH(ax));	// 18035 push    ax ;~ 0613:51DD
cs=0x613;eip=0x0051de; 	T(MOV(ax, offset(dseg,mat_unk2)));	// 18036 mov     ax, offset mat_unk2 ;~ 0613:51DE
cs=0x613;eip=0x0051e1; 	X(PUSH(ax));	// 18037 push    ax ;~ 0613:51E1
cs=0x613;eip=0x0051e2; 	T(MOV(ax, offset(dseg,vec_unk2)));	// 18038 mov     ax, offset vec_unk2 ;~ 0613:51E2
cs=0x613;eip=0x0051e5; 	X(PUSH(ax));	// 18039 push    ax ;~ 0613:51E5
cs=0x613;eip=0x0051e6; 	J(CALLF(mat_mul_vector,0));	// 18040 call    mat_mul_vector ;~ 0613:51E6
cs=0x613;eip=0x0051eb; 	T(ADD(sp, 6));	// 18041 add     sp, 6 ;~ 0613:51EB
cs=0x613;eip=0x0051ee; 	T(MOV(ax, offset(dseg,vec_planerotopresult)));	// 18042 mov     ax, offset vec_planerotopresult ;~ 0613:51EE
cs=0x613;eip=0x0051f1; 	X(PUSH(ax));	// 18043 push    ax ;~ 0613:51F1
cs=0x613;eip=0x0051f2; 	T(MOV(ax, offset(dseg,mat_unk)));	// 18044 mov     ax, offset mat_unk ;~ 0613:51F2
cs=0x613;eip=0x0051f5; 	X(PUSH(ax));	// 18045 push    ax ;~ 0613:51F5
cs=0x613;eip=0x0051f6; 	T(ax = bp+var_32);	// 18046 lea     ax, [bp+var_32] ;~ 0613:51F6
cs=0x613;eip=0x0051f9; 	J(JMP(loc_19917));	// 18047 jmp     short loc_19917 ;~ 0613:51F9
loc_1990c:
	// 5450 
cs=0x613;eip=0x0051fc; 	T(MOV(ax, offset(dseg,vec_planerotopresult)));	// 18052 mov     ax, offset vec_planerotopresult ;~ 0613:51FC
cs=0x613;eip=0x0051ff; 	X(PUSH(ax));	// 18053 push    ax ;~ 0613:51FF
cs=0x613;eip=0x005200; 	T(MOV(ax, offset(dseg,mat_unk)));	// 18054 mov     ax, offset mat_unk ;~ 0613:5200
cs=0x613;eip=0x005203; 	X(PUSH(ax));	// 18055 push    ax ;~ 0613:5203
cs=0x613;eip=0x005204; 	T(MOV(ax, offset(dseg,vec_unk2)));	// 18056 mov     ax, offset vec_unk2 ;~ 0613:5204
loc_19917:
	// 5451 
cs=0x613;eip=0x005207; 	X(PUSH(ax));	// 18059 push    ax ;~ 0613:5207
cs=0x613;eip=0x005208; 	J(CALLF(mat_mul_vector,0));	// 18060 call    mat_mul_vector ;~ 0613:5208
cs=0x613;eip=0x00520d; 	T(ADD(sp, 6));	// 18061 add     sp, 6 ;~ 0613:520D
cs=0x613;eip=0x005210; 	X(POP(si));	// 18062 pop     si ;~ 0613:5210
cs=0x613;eip=0x005211; 	X(POP(di));	// 18063 pop     di ;~ 0613:5211
cs=0x613;eip=0x005212; 	T(MOV(sp, bp));	// 18064 mov     sp, bp ;~ 0613:5212
cs=0x613;eip=0x005214; 	X(POP(bp));	// 18065 pop     bp ;~ 0613:5214
cs=0x613;eip=0x005215; 	J(RETF(0));	// 18066 retf ;~ 0613:5215

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_197a6: 	goto loc_197a6;
        case m2c::kloc_197d6: 	goto loc_197d6;
        case m2c::kloc_19845: 	goto loc_19845;
        case m2c::kloc_19866: 	goto loc_19866;
        case m2c::kloc_19895: 	goto loc_19895;
        case m2c::kloc_198a4: 	goto loc_198a4;
        case m2c::kloc_198c2: 	goto loc_198c2;
        case m2c::kloc_198ea: 	goto loc_198ea;
        case m2c::kloc_1990c: 	goto loc_1990c;
        case m2c::kloc_19917: 	goto loc_19917;
        case m2c::kplane_rotate_op: 	goto plane_rotate_op;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool plane_origin_op(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    plane_origin_op:
    _begin:
#undef var_10
#define var_10 -0x10
	// 18077 var_10          = word ptr -10h ;~ 0613:5216
#undef var_e
#define var_e -0x0E
	// 18078 var_E           = word ptr -0Eh ;~ 0613:5216
#undef var_c
#define var_c -0x0C
	// 18079 var_C           = word ptr -0Ch ;~ 0613:5216
#undef var_a
#define var_a -0x0A
	// 18080 var_A           = word ptr -0Ah ;~ 0613:5216
#undef var_8
#define var_8 -8
	// 18081 var_8           = word ptr -8 ;~ 0613:5216
#undef var_6
#define var_6 -6
	// 18082 var_6           = word ptr -6 ;~ 0613:5216
#undef var_4
#define var_4 -4
	// 18083 var_4           = dword ptr -4 ;~ 0613:5216
#undef arg_0
#define arg_0 6
	// 18084 arg_0           = word ptr  6 ;~ 0613:5216
#undef arg_2
#define arg_2 8
	// 18085 arg_2           = word ptr  8 ;~ 0613:5216
#undef arg_4
#define arg_4 0x0A
	// 18086 arg_4           = word ptr  0Ah ;~ 0613:5216
#undef arg_6
#define arg_6 0x0C
	// 18087 arg_6           = word ptr  0Ch ;~ 0613:5216
cs=0x613;eip=0x005216; 	X(PUSH(bp));	// 18089 push    bp ;~ 0613:5216
cs=0x613;eip=0x005217; 	T(MOV(bp, sp));	// 18090 mov     bp, sp ;~ 0613:5217
cs=0x613;eip=0x005219; 	T(SUB(sp, 0x10));	// 18091 sub     sp, 10h ;~ 0613:5219
cs=0x613;eip=0x00521c; 	T(MOV(ax, planindex));	// 18092 mov     ax, planindex ;~ 0613:521C
cs=0x613;eip=0x00521f; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 18093 cmp     [bp+arg_0], ax ;~ 0613:521F
cs=0x613;eip=0x005222; 	J(JNZ(loc_1993e));	// 18094 jnz     short loc_1993E ; sizeof PLANE ;~ 0613:5222
cs=0x613;eip=0x005224; 	T(MOV(ax, current_planptr));	// 18095 mov     ax, current_planptr ;~ 0613:5224
cs=0x613;eip=0x005227; 	T(MOV(dx, word_44d66));	// 18096 mov     dx, word_44D66 ;~ 0613:5227
cs=0x613;eip=0x00522b; 	J(JMP(loc_1994c));	// 18097 jmp     short loc_1994C ;~ 0613:522B
loc_1993e:
	// 5452 
cs=0x613;eip=0x00522e; 	T(MOV(ax, 0x22));	// 18102 mov     ax, 22h         ; sizeof PLANE ;~ 0613:522E
cs=0x613;eip=0x005231; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 18103 imul    [bp+arg_0] ;~ 0613:5231
cs=0x613;eip=0x005234; 	T(ADD(ax, planptr));	// 18104 add     ax, planptr ;~ 0613:5234
cs=0x613;eip=0x005238; 	T(MOV(dx, word_454c4));	// 18105 mov     dx, word_454C4 ;~ 0613:5238
loc_1994c:
	// 5453 
cs=0x613;eip=0x00523c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 18108 mov     word ptr [bp+var_4], ax ;~ 0613:523C
cs=0x613;eip=0x00523f; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 18109 mov     word ptr [bp+var_4+2], dx ;~ 0613:523F
cs=0x613;eip=0x005242; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 18110 les     bx, [bp+var_4] ;~ 0613:5242
cs=0x613;eip=0x005245; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 18111 mov     ax, es:[bx+6] ;~ 0613:5245
cs=0x613;eip=0x005249; 	T(ADD(ax, terrainheight));	// 18112 add     ax, terrainHeight ;~ 0613:5249
cs=0x613;eip=0x00524d; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 18113 mov     [bp+var_E], ax ;~ 0613:524D
cs=0x613;eip=0x005250; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 18114 mov     ax, [bp+arg_4] ;~ 0613:5250
cs=0x613;eip=0x005253; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_e))));	// 18115 sub     ax, [bp+var_E] ;~ 0613:5253
cs=0x613;eip=0x005256; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 18116 mov     [bp+var_8], ax  ; y ;~ 0613:5256
cs=0x613;eip=0x005259; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 4));	// 18117 cmp     [bp+arg_0], 4 ;~ 0613:5259
cs=0x613;eip=0x00525d; 	J(JL(loc_199ae));	// 18118 jl      short loc_199AE ;~ 0613:525D
cs=0x613;eip=0x00525f; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 18119 mov     ax, es:[bx+4] ;~ 0613:525F
cs=0x613;eip=0x005263; 	T(ADD(ax, elem_xcenter));	// 18120 add     ax, elem_xCenter ;~ 0613:5263
cs=0x613;eip=0x005267; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 18121 mov     [bp+var_10], ax ;~ 0613:5267
cs=0x613;eip=0x00526a; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 18122 mov     ax, es:[bx+8] ;~ 0613:526A
cs=0x613;eip=0x00526e; 	T(ADD(ax, elem_zcenter));	// 18123 add     ax, elem_zCenter ;~ 0613:526E
cs=0x613;eip=0x005272; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 18124 mov     [bp+var_C], ax ;~ 0613:5272
cs=0x613;eip=0x005275; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 18125 mov     ax, [bp+arg_2] ;~ 0613:5275
cs=0x613;eip=0x005278; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_10))));	// 18126 sub     ax, [bp+var_10] ;~ 0613:5278
cs=0x613;eip=0x00527b; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 18127 mov     [bp+var_A], ax  ; x ;~ 0613:527B
cs=0x613;eip=0x00527e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 18128 mov     ax, [bp+arg_6] ;~ 0613:527E
cs=0x613;eip=0x005281; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_c))));	// 18129 sub     ax, [bp+var_C] ;~ 0613:5281
cs=0x613;eip=0x005284; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 18130 mov     [bp+var_6], ax  ; z ;~ 0613:5284
cs=0x613;eip=0x005287; 	T(MOV(ax, bx));	// 18131 mov     ax, bx ;~ 0613:5287
cs=0x613;eip=0x005289; 	T(ADD(ax, 0x0A));	// 18132 add     ax, 0Ah ;~ 0613:5289
cs=0x613;eip=0x00528c; 	X(PUSH(dx));	// 18133 push    dx ;~ 0613:528C
cs=0x613;eip=0x00528d; 	X(PUSH(ax));	// 18134 push    ax ;~ 0613:528D
cs=0x613;eip=0x00528e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 18135 push    [bp+var_6] ;~ 0613:528E
cs=0x613;eip=0x005291; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 18136 push    [bp+var_8] ;~ 0613:5291
cs=0x613;eip=0x005294; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 18137 push    [bp+var_A] ;~ 0613:5294
cs=0x613;eip=0x005297; 	X(PUSH(cs));	// 18138 push    cs ;~ 0613:5297
cs=0x613;eip=0x005298; 	J(CALL(vec_normalinnerproduct,0));	// 18139 call    near ptr vec_normalInnerProduct ;~ 0613:5298
cs=0x613;eip=0x00529b; 	T(ADD(sp, 0x0A));	// 18140 add     sp, 0Ah ;~ 0613:529B
loc_199ae:
	// 5454 
cs=0x613;eip=0x00529e; 	T(MOV(sp, bp));	// 18143 mov     sp, bp ;~ 0613:529E
cs=0x613;eip=0x0052a0; 	X(POP(bp));	// 18144 pop     bp ;~ 0613:52A0
cs=0x613;eip=0x0052a1; 	J(RETF(0));	// 18145 retf ;~ 0613:52A1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1993e: 	goto loc_1993e;
        case m2c::kloc_1994c: 	goto loc_1994c;
        case m2c::kloc_199ae: 	goto loc_199ae;
        case m2c::kplane_origin_op: 	goto plane_origin_op;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool vec_normalinnerproduct(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    vec_normalinnerproduct:
    _begin:
#undef var_4
#define var_4 -4
	// 18155 var_4           = word ptr -4 ;~ 0613:52A2
#undef var_2
#define var_2 -2
	// 18156 var_2           = word ptr -2 ;~ 0613:52A2
#undef arg_0
#define arg_0 6
	// 18157 arg_0           = word ptr  6 ;~ 0613:52A2
#undef arg_2
#define arg_2 8
	// 18158 arg_2           = word ptr  8 ;~ 0613:52A2
#undef arg_4
#define arg_4 0x0A
	// 18159 arg_4           = word ptr  0Ah ;~ 0613:52A2
#undef arg_6
#define arg_6 0x0C
	// 18160 arg_6           = dword ptr  0Ch ;~ 0613:52A2
cs=0x613;eip=0x0052a2; 	X(PUSH(bp));	// 18162 push    bp ;~ 0613:52A2
cs=0x613;eip=0x0052a3; 	T(MOV(bp, sp));	// 18163 mov     bp, sp ;~ 0613:52A3
cs=0x613;eip=0x0052a5; 	T(SUB(sp, 4));	// 18164 sub     sp, 4 ;~ 0613:52A5
cs=0x613;eip=0x0052a8; 	X(PUSH(di));	// 18165 push    di ;~ 0613:52A8
cs=0x613;eip=0x0052a9; 	X(PUSH(si));	// 18166 push    si ;~ 0613:52A9
cs=0x613;eip=0x0052aa; 	T(MOV(ax, 0x2000));	// 18167 mov     ax, 2000h       ; length of normal vector => normalization ;~ 0613:52AA
cs=0x613;eip=0x0052ad; 	T(CWD);	// 18168 cwd ;~ 0613:52AD
cs=0x613;eip=0x0052ae; 	X(PUSH(dx));	// 18169 push    dx ;~ 0613:52AE
cs=0x613;eip=0x0052af; 	X(PUSH(ax));	// 18170 push    ax ;~ 0613:52AF
cs=0x613;eip=0x0052b0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 18171 mov     ax, [bp+arg_0] ;~ 0613:52B0
cs=0x613;eip=0x0052b3; 	T(CWD);	// 18172 cwd ;~ 0613:52B3
cs=0x613;eip=0x0052b4; 	X(PUSH(dx));	// 18173 push    dx ;~ 0613:52B4
cs=0x613;eip=0x0052b5; 	X(PUSH(ax));	// 18174 push    ax ;~ 0613:52B5
cs=0x613;eip=0x0052b6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 18175 les     bx, [bp+arg_6] ;~ 0613:52B6
cs=0x613;eip=0x0052b9; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 18176 mov     ax, es:[bx] ;~ 0613:52B9
cs=0x613;eip=0x0052bc; 	T(CWD);	// 18177 cwd ;~ 0613:52BC
cs=0x613;eip=0x0052bd; 	X(PUSH(dx));	// 18178 push    dx ;~ 0613:52BD
cs=0x613;eip=0x0052be; 	X(PUSH(ax));	// 18179 push    ax ;~ 0613:52BE
cs=0x613;eip=0x0052bf; 	J(CALLF(__aflmul,0));	// 18180 call    __aFlmul ;~ 0613:52BF
cs=0x613;eip=0x0052c4; 	T(MOV(cx, ax));	// 18181 mov     cx, ax ;~ 0613:52C4
cs=0x613;eip=0x0052c6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 18182 mov     ax, [bp+arg_4] ;~ 0613:52C6
cs=0x613;eip=0x0052c9; 	T(MOV(bx, dx));	// 18183 mov     bx, dx ;~ 0613:52C9
cs=0x613;eip=0x0052cb; 	T(CWD);	// 18184 cwd ;~ 0613:52CB
cs=0x613;eip=0x0052cc; 	X(PUSH(dx));	// 18185 push    dx ;~ 0613:52CC
cs=0x613;eip=0x0052cd; 	X(PUSH(ax));	// 18186 push    ax ;~ 0613:52CD
cs=0x613;eip=0x0052ce; 	T(LES(si, *(dd*)(raddr(ss,bp+arg_6))));	// 18187 les     si, [bp+arg_6] ;~ 0613:52CE
cs=0x613;eip=0x0052d1; 	T(MOV(ax, *(dw*)(raddr(es,si+4))));	// 18188 mov     ax, es:[si+4] ;~ 0613:52D1
cs=0x613;eip=0x0052d5; 	T(CWD);	// 18189 cwd ;~ 0613:52D5
cs=0x613;eip=0x0052d6; 	X(PUSH(dx));	// 18190 push    dx ;~ 0613:52D6
cs=0x613;eip=0x0052d7; 	X(PUSH(ax));	// 18191 push    ax ;~ 0613:52D7
cs=0x613;eip=0x0052d8; 	T(MOV(si, cx));	// 18192 mov     si, cx ;~ 0613:52D8
cs=0x613;eip=0x0052da; 	T(MOV(di, bx));	// 18193 mov     di, bx ;~ 0613:52DA
cs=0x613;eip=0x0052dc; 	J(CALLF(__aflmul,0));	// 18194 call    __aFlmul ;~ 0613:52DC
cs=0x613;eip=0x0052e1; 	T(MOV(cx, ax));	// 18195 mov     cx, ax ;~ 0613:52E1
cs=0x613;eip=0x0052e3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 18196 mov     ax, [bp+arg_2] ;~ 0613:52E3
cs=0x613;eip=0x0052e6; 	T(MOV(bx, dx));	// 18197 mov     bx, dx ;~ 0613:52E6
cs=0x613;eip=0x0052e8; 	T(CWD);	// 18198 cwd ;~ 0613:52E8
cs=0x613;eip=0x0052e9; 	X(PUSH(dx));	// 18199 push    dx ;~ 0613:52E9
cs=0x613;eip=0x0052ea; 	X(PUSH(ax));	// 18200 push    ax ;~ 0613:52EA
cs=0x613;eip=0x0052eb; 	T(MOV(ax, bx));	// 18201 mov     ax, bx ;~ 0613:52EB
cs=0x613;eip=0x0052ed; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 18202 les     bx, [bp+arg_6] ;~ 0613:52ED
cs=0x613;eip=0x0052f0; 	T(MOV(dx, ax));	// 18203 mov     dx, ax ;~ 0613:52F0
cs=0x613;eip=0x0052f2; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 18204 mov     ax, es:[bx+2] ;~ 0613:52F2
cs=0x613;eip=0x0052f6; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), cx));	// 18205 mov     [bp+var_4], cx  ; 1st multiplication lo-byte ;~ 0613:52F6
cs=0x613;eip=0x0052f9; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 18206 mov     [bp+var_2], dx  ; 1st multiplication hi-byte ;~ 0613:52F9
cs=0x613;eip=0x0052fc; 	T(CWD);	// 18207 cwd ;~ 0613:52FC
cs=0x613;eip=0x0052fd; 	X(PUSH(dx));	// 18208 push    dx ;~ 0613:52FD
cs=0x613;eip=0x0052fe; 	X(PUSH(ax));	// 18209 push    ax ;~ 0613:52FE
cs=0x613;eip=0x0052ff; 	J(CALLF(__aflmul,0));	// 18210 call    __aFlmul ;~ 0613:52FF
cs=0x613;eip=0x005304; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 18211 add     ax, [bp+var_4] ;~ 0613:5304
cs=0x613;eip=0x005307; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_2))));	// 18212 adc     dx, [bp+var_2] ;~ 0613:5307
cs=0x613;eip=0x00530a; 	T(ADD(ax, si));	// 18213 add     ax, si ;~ 0613:530A
cs=0x613;eip=0x00530c; 	T(ADC(dx, di));	// 18214 adc     dx, di ;~ 0613:530C
cs=0x613;eip=0x00530e; 	X(PUSH(dx));	// 18215 push    dx ;~ 0613:530E
cs=0x613;eip=0x00530f; 	X(PUSH(ax));	// 18216 push    ax ;~ 0613:530F
cs=0x613;eip=0x005310; 	J(CALLF(__afldiv,0));	// 18217 call    __aFldiv        ; /2000h ;~ 0613:5310
cs=0x613;eip=0x005315; 	X(POP(si));	// 18218 pop     si ;~ 0613:5315
cs=0x613;eip=0x005316; 	X(POP(di));	// 18219 pop     di ;~ 0613:5316
cs=0x613;eip=0x005317; 	T(MOV(sp, bp));	// 18220 mov     sp, bp ;~ 0613:5317
cs=0x613;eip=0x005319; 	X(POP(bp));	// 18221 pop     bp ;~ 0613:5319
cs=0x613;eip=0x00531a; 	J(RETF(0));	// 18222 retf ;~ 0613:531A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kvec_normalinnerproduct: 	goto vec_normalinnerproduct;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool state_op_unk(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    state_op_unk:
    _begin:
#undef var_18
#define var_18 -0x18
	// 18235 var_18          = word ptr -18h ;~ 0613:531C
#undef var_16
#define var_16 -0x16
	// 18236 var_16          = word ptr -16h ;~ 0613:531C
#undef var_14
#define var_14 -0x14
	// 18237 var_14          = word ptr -14h ;~ 0613:531C
#undef var_12
#define var_12 -0x12
	// 18238 var_12          = word ptr -12h ;~ 0613:531C
#undef var_10
#define var_10 -0x10
	// 18239 var_10          = word ptr -10h ;~ 0613:531C
#undef var_e
#define var_e -0x0E
	// 18240 var_E           = word ptr -0Eh ;~ 0613:531C
#undef var_c
#define var_c -0x0C
	// 18241 var_C           = word ptr -0Ch ;~ 0613:531C
#undef var_8
#define var_8 -8
	// 18242 var_8           = word ptr -8 ;~ 0613:531C
#undef var_6
#define var_6 -6
	// 18243 var_6           = word ptr -6 ;~ 0613:531C
#undef var_2
#define var_2 -2
	// 18244 var_2           = word ptr -2 ;~ 0613:531C
#undef arg_0
#define arg_0 6
	// 18245 arg_0           = word ptr  6 ;~ 0613:531C
#undef arg_2
#define arg_2 8
	// 18246 arg_2           = word ptr  8 ;~ 0613:531C
#undef arg_4
#define arg_4 0x0A
	// 18247 arg_4           = word ptr  0Ah ;~ 0613:531C
cs=0x613;eip=0x00531c; 	X(PUSH(bp));	// 18249 push    bp ;~ 0613:531C
cs=0x613;eip=0x00531d; 	T(MOV(bp, sp));	// 18250 mov     bp, sp ;~ 0613:531D
cs=0x613;eip=0x00531f; 	T(SUB(sp, 0x18));	// 18251 sub     sp, 18h ;~ 0613:531F
cs=0x613;eip=0x005322; 	X(PUSH(di));	// 18252 push    di ;~ 0613:5322
cs=0x613;eip=0x005323; 	X(PUSH(si));	// 18253 push    si ;~ 0613:5323
cs=0x613;eip=0x005324; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 2));	// 18254 cmp     [bp+arg_0], 2 ;~ 0613:5324
cs=0x613;eip=0x005328; 	J(JGE(loc_19a5e));	// 18255 jge     short loc_19A5E ;~ 0613:5328
cs=0x613;eip=0x00532a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 18256 mov     ax, [bp+arg_2] ;~ 0613:532A
cs=0x613;eip=0x00532d; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 18257 mov     [bp+var_6], ax ;~ 0613:532D
cs=0x613;eip=0x005330; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x400));	// 18258 mov     [bp+var_2], 400h ;~ 0613:5330
cs=0x613;eip=0x005335; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0x12));	// 18259 mov     [bp+var_E], 12h ;~ 0613:5335
cs=0x613;eip=0x00533a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 18260 mov     ax, [bp+arg_0] ;~ 0613:533A
cs=0x613;eip=0x00533d; 	T(SHL(ax, 1));	// 18261 shl     ax, 1 ;~ 0613:533D
cs=0x613;eip=0x00533f; 	T(SHL(ax, 1));	// 18262 shl     ax, 1 ;~ 0613:533F
cs=0x613;eip=0x005341; 	T(ADD(ax, 4));	// 18263 add     ax, 4 ;~ 0613:5341
cs=0x613;eip=0x005344; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 18264 mov     [bp+var_10], ax ;~ 0613:5344
cs=0x613;eip=0x005347; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 6));	// 18265 mov     [bp+var_8], 6 ;~ 0613:5347
cs=0x613;eip=0x00534c; 	J(JMP(loc_19a7b));	// 18266 jmp     short loc_19A7B ;~ 0613:534C
loc_19a5e:
	// 5455 
cs=0x613;eip=0x00534e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 18270 mov     ax, [bp+arg_2] ;~ 0613:534E
cs=0x613;eip=0x005351; 	T(SUB(ax, 0x60));	// 18271 sub     ax, 60h ; '`' ;~ 0613:5351
cs=0x613;eip=0x005354; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 18272 mov     [bp+var_6], ax ;~ 0613:5354
cs=0x613;eip=0x005357; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0C0));	// 18273 mov     [bp+var_2], 0C0h ; 'À' ;~ 0613:5357
cs=0x613;eip=0x00535c; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 8));	// 18274 mov     [bp+var_E], 8 ;~ 0613:535C
cs=0x613;eip=0x005361; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0));	// 18275 mov     [bp+var_10], 0 ;~ 0613:5361
cs=0x613;eip=0x005366; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 1));	// 18276 mov     [bp+var_8], 1 ;~ 0613:5366
loc_19a7b:
	// 5456 
cs=0x613;eip=0x00536b; 	X(MOV(byte_448be, 1));	// 18279 mov     byte_448BE, 1 ;~ 0613:536B
cs=0x613;eip=0x005370; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 0));	// 18280 mov     [bp+var_12], 0 ;~ 0613:5370
cs=0x613;eip=0x005375; 	T(SUB(si, si));	// 18281 sub     si, si ;~ 0613:5375
loc_19a87:
	// 5457 
cs=0x613;eip=0x005377; 	T(MOV(bx, si));	// 18284 mov     bx, si ;~ 0613:5377
cs=0x613;eip=0x005379; 	T(SHL(bx, 1));	// 18285 shl     bx, 1 ;~ 0613:5379
cs=0x613;eip=0x00537b; 	T(CMP(*(dw*)(((db*)&word_44822)+bx), 0));	// 18286 cmp     word_44822[bx], 0 ;~ 0613:537B
cs=0x613;eip=0x005380; 	J(JNZ(loc_19a95));	// 18287 jnz     short loc_19A95 ;~ 0613:5380
cs=0x613;eip=0x005382; 	X(INC(*(dw*)(raddr(ss,bp+var_12))));	// 18288 inc     [bp+var_12] ;~ 0613:5382
loc_19a95:
	// 5458 
cs=0x613;eip=0x005385; 	T(INC(si));	// 18291 inc     si ;~ 0613:5385
cs=0x613;eip=0x005386; 	T(CMP(si, 0x18));	// 18292 cmp     si, 18h ;~ 0613:5386
cs=0x613;eip=0x005389; 	J(JL(loc_19a87));	// 18293 jl      short loc_19A87 ;~ 0613:5389
cs=0x613;eip=0x00538b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 18294 mov     ax, [bp+var_E] ;~ 0613:538B
cs=0x613;eip=0x00538e; 	T(CMP(*(dw*)(raddr(ss,bp+var_12)), ax));	// 18295 cmp     [bp+var_12], ax ;~ 0613:538E
cs=0x613;eip=0x005391; 	J(JLE(loc_19aa6));	// 18296 jle     short loc_19AA6 ;~ 0613:5391
cs=0x613;eip=0x005393; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 18297 mov     [bp+var_12], ax ;~ 0613:5393
loc_19aa6:
	// 5459 
cs=0x613;eip=0x005396; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0));	// 18300 mov     [bp+var_C], 0 ;~ 0613:5396
cs=0x613;eip=0x00539b; 	T(SUB(si, si));	// 18301 sub     si, si ;~ 0613:539B
cs=0x613;eip=0x00539d; 	J(JMP(loc_19ab1));	// 18302 jmp     short loc_19AB1 ;~ 0613:539D
loc_19ab0:
	// 5460 
cs=0x613;eip=0x0053a0; 	T(INC(si));	// 18308 inc     si ;~ 0613:53A0
loc_19ab1:
	// 5461 
cs=0x613;eip=0x0053a1; 	T(CMP(si, 0x18));	// 18311 cmp     si, 18h ;~ 0613:53A1
cs=0x613;eip=0x0053a4; 	J(JL(loc_19ab9));	// 18312 jl      short loc_19AB9 ;~ 0613:53A4
cs=0x613;eip=0x0053a6; 	J(JMP(loc_19b99));	// 18313 jmp     loc_19B99 ;~ 0613:53A6
loc_19ab9:
	// 5462 
cs=0x613;eip=0x0053a9; 	T(MOV(ax, si));	// 18317 mov     ax, si ;~ 0613:53A9
cs=0x613;eip=0x0053ab; 	T(SHL(ax, 1));	// 18318 shl     ax, 1 ;~ 0613:53AB
cs=0x613;eip=0x0053ad; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 18319 mov     [bp+var_14], ax ;~ 0613:53AD
cs=0x613;eip=0x0053b0; 	T(MOV(bx, ax));	// 18320 mov     bx, ax ;~ 0613:53B0
cs=0x613;eip=0x0053b2; 	T(CMP(*(dw*)(((db*)&word_44822)+bx), 0));	// 18321 cmp     word_44822[bx], 0 ;~ 0613:53B2
cs=0x613;eip=0x0053b7; 	J(JNZ(loc_19ab0));	// 18322 jnz     short loc_19AB0 ;~ 0613:53B7
cs=0x613;eip=0x0053b9; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0))));	// 18323 mov     al, byte ptr [bp+arg_0] ;~ 0613:53B9
cs=0x613;eip=0x0053bc; 	X(MOV(*((&byte_448d7)+si), al));	// 18324 mov     byte_448D7[si], al ;~ 0613:53BC
cs=0x613;eip=0x0053c0; 	T(MOV(al, *(db*)(raddr(ss,bp+var_c))));	// 18325 mov     al, byte ptr [bp+var_C] ;~ 0613:53C0
cs=0x613;eip=0x0053c3; 	T(AND(al, 3));	// 18326 and     al, 3 ;~ 0613:53C3
cs=0x613;eip=0x0053c5; 	T(ADD(al, *(db*)(raddr(ss,bp+var_10))));	// 18327 add     al, byte ptr [bp+var_10] ;~ 0613:53C5
cs=0x613;eip=0x0053c8; 	X(MOV(*((&byte_448bf)+si), al));	// 18328 mov     byte_448BF[si], al ;~ 0613:53C8
cs=0x613;eip=0x0053cc; 	T(MOV(ax, si));	// 18329 mov     ax, si ;~ 0613:53CC
cs=0x613;eip=0x0053ce; 	T(SHL(ax, 1));	// 18330 shl     ax, 1 ;~ 0613:53CE
cs=0x613;eip=0x0053d0; 	T(SHL(ax, 1));	// 18331 shl     ax, 1 ;~ 0613:53D0
cs=0x613;eip=0x0053d2; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 18332 mov     [bp+var_16], ax ;~ 0613:53D2
cs=0x613;eip=0x0053d5; 	T(MOV(bx, ax));	// 18333 mov     bx, ax ;~ 0613:53D5
cs=0x613;eip=0x0053d7; 	T(SUB(ax, ax));	// 18334 sub     ax, ax ;~ 0613:53D7
cs=0x613;eip=0x0053d9; 	X(MOV(*(dw*)(((db*)&word_44496)+bx), ax));	// 18335 mov     word_44496[bx], ax ;~ 0613:53D9
cs=0x613;eip=0x0053dd; 	X(MOV(*(dw*)(((db*)&state)+bx), ax));	// 18336 mov     state[bx], ax ;~ 0613:53DD
cs=0x613;eip=0x0053e1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 18337 mov     bx, [bp+var_16] ;~ 0613:53E1
cs=0x613;eip=0x0053e4; 	X(MOV(*(dw*)(((db*)&word_444f6)+bx), ax));	// 18338 mov     word_444F6[bx], ax ;~ 0613:53E4
cs=0x613;eip=0x0053e8; 	X(MOV(*(dw*)(((db*)&word_444f4)+bx), ax));	// 18339 mov     word_444F4[bx], ax ;~ 0613:53E8
cs=0x613;eip=0x0053ec; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 18340 mov     bx, [bp+var_16] ;~ 0613:53EC
cs=0x613;eip=0x0053ef; 	X(MOV(*(dw*)(((db*)&word_44556)+bx), ax));	// 18341 mov     word_44556[bx], ax ;~ 0613:53EF
cs=0x613;eip=0x0053f3; 	X(MOV(*(dw*)(((db*)&word_44554)+bx), ax));	// 18342 mov     word_44554[bx], ax ;~ 0613:53F3
cs=0x613;eip=0x0053f7; 	J(CALLF(get_kevinrandom,0));	// 18343 call    get_kevinrandom ;~ 0613:53F7
cs=0x613;eip=0x0053fc; 	T(SHL(ax, 1));	// 18344 shl     ax, 1 ;~ 0613:53FC
cs=0x613;eip=0x0053fe; 	T(SHL(ax, 1));	// 18345 shl     ax, 1 ;~ 0613:53FE
cs=0x613;eip=0x005400; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_14))));	// 18346 mov     bx, [bp+var_14] ;~ 0613:5400
cs=0x613;eip=0x005403; 	X(MOV(*(dw*)(((db*)&word_44792)+bx), ax));	// 18347 mov     word_44792[bx], ax ;~ 0613:5403
cs=0x613;eip=0x005407; 	J(CALLF(get_kevinrandom,0));	// 18348 call    get_kevinrandom ;~ 0613:5407
cs=0x613;eip=0x00540c; 	T(SHL(ax, 1));	// 18349 shl     ax, 1 ;~ 0613:540C
cs=0x613;eip=0x00540e; 	T(SHL(ax, 1));	// 18350 shl     ax, 1 ;~ 0613:540E
cs=0x613;eip=0x005410; 	T(MOV(bx, si));	// 18351 mov     bx, si ;~ 0613:5410
cs=0x613;eip=0x005412; 	T(SHL(bx, 1));	// 18352 shl     bx, 1 ;~ 0613:5412
cs=0x613;eip=0x005414; 	X(MOV(*(dw*)(((db*)&word_447c2)+bx), ax));	// 18353 mov     word_447C2[bx], ax ;~ 0613:5414
cs=0x613;eip=0x005418; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 18354 mov     ax, [bp+var_12] ;~ 0613:5418
cs=0x613;eip=0x00541b; 	T(CWD);	// 18355 cwd ;~ 0613:541B
cs=0x613;eip=0x00541c; 	X(PUSH(dx));	// 18356 push    dx ;~ 0613:541C
cs=0x613;eip=0x00541d; 	X(PUSH(ax));	// 18357 push    ax ;~ 0613:541D
cs=0x613;eip=0x00541e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 18358 mov     ax, [bp+var_C] ;~ 0613:541E
cs=0x613;eip=0x005421; 	T(CWD);	// 18359 cwd ;~ 0613:5421
cs=0x613;eip=0x005422; 	X(PUSH(dx));	// 18360 push    dx ;~ 0613:5422
cs=0x613;eip=0x005423; 	X(PUSH(ax));	// 18361 push    ax ;~ 0613:5423
cs=0x613;eip=0x005424; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 18362 mov     ax, [bp+var_2] ;~ 0613:5424
cs=0x613;eip=0x005427; 	T(CWD);	// 18363 cwd ;~ 0613:5427
cs=0x613;eip=0x005428; 	X(PUSH(dx));	// 18364 push    dx ;~ 0613:5428
cs=0x613;eip=0x005429; 	X(PUSH(ax));	// 18365 push    ax ;~ 0613:5429
cs=0x613;eip=0x00542a; 	J(CALLF(__aflmul,0));	// 18366 call    __aFlmul ;~ 0613:542A
cs=0x613;eip=0x00542f; 	X(PUSH(dx));	// 18367 push    dx ;~ 0613:542F
cs=0x613;eip=0x005430; 	X(PUSH(ax));	// 18368 push    ax ;~ 0613:5430
cs=0x613;eip=0x005431; 	J(CALLF(__afldiv,0));	// 18369 call    __aFldiv ;~ 0613:5431
cs=0x613;eip=0x005436; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_6))));	// 18370 add     ax, [bp+var_6] ;~ 0613:5436
cs=0x613;eip=0x005439; 	T(AND(ah, 3));	// 18371 and     ah, 3 ;~ 0613:5439
cs=0x613;eip=0x00543c; 	T(MOV(bx, si));	// 18372 mov     bx, si ;~ 0613:543C
cs=0x613;eip=0x00543e; 	T(SHL(bx, 1));	// 18373 shl     bx, 1 ;~ 0613:543E
cs=0x613;eip=0x005440; 	X(MOV(*(dw*)(((db*)&word_447f2)+bx), ax));	// 18374 mov     word_447F2[bx], ax ;~ 0613:5440
cs=0x613;eip=0x005444; 	J(CALLF(get_kevinrandom,0));	// 18375 call    get_kevinrandom ;~ 0613:5444
cs=0x613;eip=0x005449; 	T(MOV(cx, ax));	// 18376 mov     cx, ax ;~ 0613:5449
cs=0x613;eip=0x00544b; 	T(SHL(ax, 1));	// 18377 shl     ax, 1 ;~ 0613:544B
cs=0x613;eip=0x00544d; 	T(ADD(ax, cx));	// 18378 add     ax, cx ;~ 0613:544D
cs=0x613;eip=0x00544f; 	T(SHL(ax, 1));	// 18379 shl     ax, 1 ;~ 0613:544F
cs=0x613;eip=0x005451; 	T(MOV(di, ax));	// 18380 mov     di, ax ;~ 0613:5451
cs=0x613;eip=0x005453; 	T(MOV(cl, 2));	// 18381 mov     cl, 2 ;~ 0613:5453
cs=0x613;eip=0x005455; 	T(SAR(di, cl));	// 18382 sar     di, cl ;~ 0613:5455
cs=0x613;eip=0x005457; 	T(ADD(di, *(dw*)(raddr(ss,bp+arg_4))));	// 18383 add     di, [bp+arg_4] ;~ 0613:5457
cs=0x613;eip=0x00545a; 	T(ADD(di, 0x180));	// 18384 add     di, 180h ;~ 0613:545A
cs=0x613;eip=0x00545e; 	T(MOV(ax, si));	// 18385 mov     ax, si ;~ 0613:545E
cs=0x613;eip=0x005460; 	T(SHL(ax, 1));	// 18386 shl     ax, 1 ;~ 0613:5460
cs=0x613;eip=0x005462; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 18387 mov     [bp+var_18], ax ;~ 0613:5462
cs=0x613;eip=0x005465; 	T(MOV(bx, ax));	// 18388 mov     bx, ax ;~ 0613:5465
cs=0x613;eip=0x005467; 	X(MOV(*(dw*)(((db*)&word_44822)+bx), di));	// 18389 mov     word_44822[bx], di ;~ 0613:5467
cs=0x613;eip=0x00546b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 18390 mov     ax, [bp+var_8] ;~ 0613:546B
cs=0x613;eip=0x00546e; 	T(IMUL1_2(di));	// 18391 imul    di ;~ 0613:546E
cs=0x613;eip=0x005470; 	T(SAR(ax, 1));	// 18392 sar     ax, 1 ;~ 0613:5470
cs=0x613;eip=0x005472; 	T(SAR(ax, 1));	// 18393 sar     ax, 1 ;~ 0613:5472
cs=0x613;eip=0x005474; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_18))));	// 18394 mov     bx, [bp+var_18] ;~ 0613:5474
cs=0x613;eip=0x005477; 	X(MOV(*(dw*)(((db*)&word_44852)+bx), ax));	// 18395 mov     word_44852[bx], ax ;~ 0613:5477
cs=0x613;eip=0x00547b; 	X(INC(*(dw*)(raddr(ss,bp+var_c))));	// 18396 inc     [bp+var_C] ;~ 0613:547B
cs=0x613;eip=0x00547e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 18397 mov     ax, [bp+var_12] ;~ 0613:547E
cs=0x613;eip=0x005481; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), ax));	// 18398 cmp     [bp+var_C], ax ;~ 0613:5481
cs=0x613;eip=0x005484; 	J(JZ(loc_19b99));	// 18399 jz      short loc_19B99 ;~ 0613:5484
cs=0x613;eip=0x005486; 	J(JMP(loc_19ab0));	// 18400 jmp     loc_19AB0 ;~ 0613:5486
loc_19b99:
	// 5463 
cs=0x613;eip=0x005489; 	X(POP(si));	// 18405 pop     si ;~ 0613:5489
cs=0x613;eip=0x00548a; 	X(POP(di));	// 18406 pop     di ;~ 0613:548A
cs=0x613;eip=0x00548b; 	T(MOV(sp, bp));	// 18407 mov     sp, bp ;~ 0613:548B
cs=0x613;eip=0x00548d; 	X(POP(bp));	// 18408 pop     bp ;~ 0613:548D
cs=0x613;eip=0x00548e; 	J(RETF(0));	// 18409 retf ;~ 0613:548E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_19a5e: 	goto loc_19a5e;
        case m2c::kloc_19a7b: 	goto loc_19a7b;
        case m2c::kloc_19a87: 	goto loc_19a87;
        case m2c::kloc_19a95: 	goto loc_19a95;
        case m2c::kloc_19aa6: 	goto loc_19aa6;
        case m2c::kloc_19ab0: 	goto loc_19ab0;
        case m2c::kloc_19ab1: 	goto loc_19ab1;
        case m2c::kloc_19ab9: 	goto loc_19ab9;
        case m2c::kloc_19b99: 	goto loc_19b99;
        case m2c::kstate_op_unk: 	goto state_op_unk;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_19ba0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_19ba0:
    _begin:
#undef var_14
#define var_14 -0x14
	// 18421 var_14          = word ptr -14h ;~ 0613:5490
#undef var_12
#define var_12 -0x12
	// 18422 var_12          = word ptr -12h ;~ 0613:5490
#undef var_e
#define var_e -0x0E
	// 18423 var_E           = word ptr -0Eh ;~ 0613:5490
#undef var_c
#define var_c -0x0C
	// 18424 var_C           = word ptr -0Ch ;~ 0613:5490
#undef var_a
#define var_a -0x0A
	// 18425 var_A           = word ptr -0Ah ;~ 0613:5490
#undef var_8
#define var_8 -8
	// 18426 var_8           = word ptr -8 ;~ 0613:5490
#undef var_4
#define var_4 -4
	// 18427 var_4           = word ptr -4 ;~ 0613:5490
#undef var_2
#define var_2 -2
	// 18428 var_2           = byte ptr -2 ;~ 0613:5490
cs=0x613;eip=0x005490; 	X(PUSH(bp));	// 18430 push    bp ;~ 0613:5490
cs=0x613;eip=0x005491; 	T(MOV(bp, sp));	// 18431 mov     bp, sp ;~ 0613:5491
cs=0x613;eip=0x005493; 	T(SUB(sp, 0x14));	// 18432 sub     sp, 14h ;~ 0613:5493
cs=0x613;eip=0x005496; 	X(PUSH(di));	// 18433 push    di ;~ 0613:5496
cs=0x613;eip=0x005497; 	X(PUSH(si));	// 18434 push    si ;~ 0613:5497
cs=0x613;eip=0x005498; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 18435 mov     [bp+var_2], 0 ;~ 0613:5498
cs=0x613;eip=0x00549c; 	T(SUB(si, si));	// 18436 sub     si, si ;~ 0613:549C
cs=0x613;eip=0x00549e; 	J(JMP(loc_19bc3));	// 18437 jmp     short loc_19BC3 ;~ 0613:549E
loc_19bb0:
	// 5464 
cs=0x613;eip=0x0054a0; 	X(MOV(*(raddr(ss,bp+var_2)), 1));	// 18441 mov     [bp+var_2], 1 ;~ 0613:54A0
cs=0x613;eip=0x0054a4; 	T(MOV(di, si));	// 18442 mov     di, si ;~ 0613:54A4
cs=0x613;eip=0x0054a6; 	T(SHL(di, 1));	// 18443 shl     di, 1 ;~ 0613:54A6
cs=0x613;eip=0x0054a8; 	X(ADD(*(dw*)(((db*)&word_44792)+di), 0x10));	// 18444 add     word_44792[di], 10h ;~ 0613:54A8
cs=0x613;eip=0x0054ad; 	X(ADD(*(dw*)(((db*)&word_447c2)+di), 0x10));	// 18445 add     word_447C2[di], 10h ;~ 0613:54AD
loc_19bc2:
	// 5465 
cs=0x613;eip=0x0054b2; 	T(INC(si));	// 18449 inc     si ;~ 0613:54B2
loc_19bc3:
	// 5466 
cs=0x613;eip=0x0054b3; 	T(CMP(si, 0x18));	// 18452 cmp     si, 18h ;~ 0613:54B3
cs=0x613;eip=0x0054b6; 	J(JL(loc_19bcb));	// 18453 jl      short loc_19BCB ;~ 0613:54B6
cs=0x613;eip=0x0054b8; 	J(JMP(loc_19c96));	// 18454 jmp     loc_19C96 ;~ 0613:54B8
loc_19bcb:
	// 5467 
cs=0x613;eip=0x0054bb; 	T(MOV(di, si));	// 18458 mov     di, si ;~ 0613:54BB
cs=0x613;eip=0x0054bd; 	T(SHL(di, 1));	// 18459 shl     di, 1 ;~ 0613:54BD
cs=0x613;eip=0x0054bf; 	T(CMP(*(dw*)(((db*)&word_44822)+di), 0));	// 18460 cmp     word_44822[di], 0 ;~ 0613:54BF
cs=0x613;eip=0x0054c4; 	J(JZ(loc_19bc2));	// 18461 jz      short loc_19BC2 ;~ 0613:54C4
cs=0x613;eip=0x0054c6; 	T(MOV(ax, 1));	// 18462 mov     ax, 1 ;~ 0613:54C6
cs=0x613;eip=0x0054c9; 	X(PUSH(ax));	// 18463 push    ax ;~ 0613:54C9
cs=0x613;eip=0x0054ca; 	X(PUSH(*(dw*)(((db*)&word_447f2)+di)));	// 18464 push    word_447F2[di] ;~ 0613:54CA
cs=0x613;eip=0x0054ce; 	T(SUB(ax, ax));	// 18465 sub     ax, ax ;~ 0613:54CE
cs=0x613;eip=0x0054d0; 	X(PUSH(ax));	// 18466 push    ax ;~ 0613:54D0
cs=0x613;eip=0x0054d1; 	X(PUSH(ax));	// 18467 push    ax ;~ 0613:54D1
cs=0x613;eip=0x0054d2; 	J(CALLF(mat_rot_zxy,0));	// 18468 call    mat_rot_zxy ;~ 0613:54D2
cs=0x613;eip=0x0054d7; 	T(ADD(sp, 8));	// 18469 add     sp, 8 ;~ 0613:54D7
cs=0x613;eip=0x0054da; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 18470 mov     [bp+var_4], ax ;~ 0613:54DA
cs=0x613;eip=0x0054dd; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0));	// 18471 mov     [bp+var_C], 0 ;~ 0613:54DD
cs=0x613;eip=0x0054e2; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 18472 mov     [bp+var_A], 0 ;~ 0613:54E2
cs=0x613;eip=0x0054e7; 	T(MOV(bx, si));	// 18473 mov     bx, si ;~ 0613:54E7
cs=0x613;eip=0x0054e9; 	T(SHL(bx, 1));	// 18474 shl     bx, 1 ;~ 0613:54E9
cs=0x613;eip=0x0054eb; 	T(MOV(ax, *(dw*)(((db*)&word_44822)+bx)));	// 18475 mov     ax, word_44822[bx] ;~ 0613:54EB
cs=0x613;eip=0x0054ef; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 18476 mov     [bp+var_8], ax ;~ 0613:54EF
cs=0x613;eip=0x0054f2; 	T(ax = bp+var_12);	// 18477 lea     ax, [bp+var_12] ;~ 0613:54F2
cs=0x613;eip=0x0054f5; 	X(PUSH(ax));	// 18478 push    ax ;~ 0613:54F5
cs=0x613;eip=0x0054f6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 18479 push    [bp+var_4] ;~ 0613:54F6
cs=0x613;eip=0x0054f9; 	T(ax = bp+var_c);	// 18480 lea     ax, [bp+var_C] ;~ 0613:54F9
cs=0x613;eip=0x0054fc; 	X(PUSH(ax));	// 18481 push    ax ;~ 0613:54FC
cs=0x613;eip=0x0054fd; 	J(CALLF(mat_mul_vector,0));	// 18482 call    mat_mul_vector ;~ 0613:54FD
cs=0x613;eip=0x005502; 	T(ADD(sp, 6));	// 18483 add     sp, 6 ;~ 0613:5502
cs=0x613;eip=0x005505; 	T(MOV(di, si));	// 18484 mov     di, si ;~ 0613:5505
cs=0x613;eip=0x005507; 	T(MOV(cl, 2));	// 18485 mov     cl, 2 ;~ 0613:5507
cs=0x613;eip=0x005509; 	T(SHL(di, cl));	// 18486 shl     di, cl ;~ 0613:5509
cs=0x613;eip=0x00550b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 18487 mov     ax, [bp+var_12] ;~ 0613:550B
cs=0x613;eip=0x00550e; 	T(CWD);	// 18488 cwd ;~ 0613:550E
cs=0x613;eip=0x00550f; 	X(ADD(*(dw*)(((db*)&state)+di), ax));	// 18489 add     state[di], ax ;~ 0613:550F
cs=0x613;eip=0x005513; 	X(ADC(*(dw*)(((db*)&word_44496)+di), dx));	// 18490 adc     word_44496[di], dx ;~ 0613:5513
cs=0x613;eip=0x005517; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 18491 mov     ax, [bp+var_E] ;~ 0613:5517
cs=0x613;eip=0x00551a; 	T(CWD);	// 18492 cwd ;~ 0613:551A
cs=0x613;eip=0x00551b; 	X(ADD(*(dw*)(((db*)&word_44554)+di), ax));	// 18493 add     word_44554[di], ax ;~ 0613:551B
cs=0x613;eip=0x00551f; 	X(ADC(*(dw*)(((db*)&word_44556)+di), dx));	// 18494 adc     word_44556[di], dx ;~ 0613:551F
cs=0x613;eip=0x005523; 	T(MOV(ax, si));	// 18495 mov     ax, si ;~ 0613:5523
cs=0x613;eip=0x005525; 	T(SHL(ax, 1));	// 18496 shl     ax, 1 ;~ 0613:5525
cs=0x613;eip=0x005527; 	T(ADD(ax, offset(dseg,word_44852)));	// 18497 add     ax, offset word_44852 ;~ 0613:5527
cs=0x613;eip=0x00552a; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 18498 mov     [bp+var_14], ax ;~ 0613:552A
cs=0x613;eip=0x00552d; 	T(MOV(bx, ax));	// 18499 mov     bx, ax ;~ 0613:552D
cs=0x613;eip=0x00552f; 	X(SUB(*(dw*)(raddr(ds,bx)), 0x13));	// 18500 sub     word ptr [bx], 13h ;~ 0613:552F
cs=0x613;eip=0x005532; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_14))));	// 18501 mov     bx, [bp+var_14] ;~ 0613:5532
cs=0x613;eip=0x005535; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 18502 mov     ax, [bx] ;~ 0613:5535
cs=0x613;eip=0x005537; 	T(CWD);	// 18503 cwd ;~ 0613:5537
cs=0x613;eip=0x005538; 	X(ADD(*(dw*)(((db*)&word_444f4)+di), ax));	// 18504 add     word_444F4[di], ax ;~ 0613:5538
cs=0x613;eip=0x00553c; 	X(ADC(*(dw*)(((db*)&word_444f6)+di), dx));	// 18505 adc     word_444F6[di], dx ;~ 0613:553C
cs=0x613;eip=0x005540; 	T(CMP(framespersec, 0x0A));	// 18506 cmp     framespersec, 0Ah ;~ 0613:5540
cs=0x613;eip=0x005545; 	J(JNZ(loc_19c6b));	// 18507 jnz     short loc_19C6B ;~ 0613:5545
cs=0x613;eip=0x005547; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_14))));	// 18508 mov     bx, [bp+var_14] ;~ 0613:5547
cs=0x613;eip=0x00554a; 	X(SUB(*(dw*)(raddr(ds,bx)), 0x13));	// 18509 sub     word ptr [bx], 13h ;~ 0613:554A
cs=0x613;eip=0x00554d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_14))));	// 18510 mov     bx, [bp+var_14] ;~ 0613:554D
cs=0x613;eip=0x005550; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 18511 mov     ax, [bx] ;~ 0613:5550
cs=0x613;eip=0x005552; 	T(CWD);	// 18512 cwd ;~ 0613:5552
cs=0x613;eip=0x005553; 	X(ADD(*(dw*)(((db*)&word_444f4)+di), ax));	// 18513 add     word_444F4[di], ax ;~ 0613:5553
cs=0x613;eip=0x005557; 	X(ADC(*(dw*)(((db*)&word_444f6)+di), dx));	// 18514 adc     word_444F6[di], dx ;~ 0613:5557
loc_19c6b:
	// 5468 
cs=0x613;eip=0x00555b; 	T(MOV(bx, si));	// 18517 mov     bx, si ;~ 0613:555B
cs=0x613;eip=0x00555d; 	T(SHL(bx, 1));	// 18518 shl     bx, 1 ;~ 0613:555D
cs=0x613;eip=0x00555f; 	T(SHL(bx, 1));	// 18519 shl     bx, 1 ;~ 0613:555F
cs=0x613;eip=0x005561; 	T(MOV(ax, *(dw*)(((db*)&word_444f4)+bx)));	// 18520 mov     ax, word_444F4[bx] ;~ 0613:5561
cs=0x613;eip=0x005565; 	T(MOV(dx, *(dw*)(((db*)&word_444f6)+bx)));	// 18521 mov     dx, word_444F6[bx] ;~ 0613:5565
cs=0x613;eip=0x005569; 	T(ADD(ax, word_445ea));	// 18522 add     ax, word_445EA ;~ 0613:5569
cs=0x613;eip=0x00556d; 	T(ADC(dx, word_445ec));	// 18523 adc     dx, word_445EC ;~ 0613:556D
cs=0x613;eip=0x005571; 	T(OR(dx, dx));	// 18524 or      dx, dx ;~ 0613:5571
cs=0x613;eip=0x005573; 	J(JL(loc_19c88));	// 18525 jl      short loc_19C88 ;~ 0613:5573
cs=0x613;eip=0x005575; 	J(JMP(loc_19bb0));	// 18526 jmp     loc_19BB0 ;~ 0613:5575
loc_19c88:
	// 5469 
cs=0x613;eip=0x005578; 	T(MOV(bx, si));	// 18530 mov     bx, si ;~ 0613:5578
cs=0x613;eip=0x00557a; 	T(SHL(bx, 1));	// 18531 shl     bx, 1 ;~ 0613:557A
cs=0x613;eip=0x00557c; 	X(MOV(*(dw*)(((db*)&word_44822)+bx), 0));	// 18532 mov     word_44822[bx], 0 ;~ 0613:557C
cs=0x613;eip=0x005582; 	J(JMP(loc_19bc2));	// 18533 jmp     loc_19BC2 ;~ 0613:5582
loc_19c96:
	// 5470 
cs=0x613;eip=0x005586; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 18538 mov     al, [bp+var_2] ;~ 0613:5586
cs=0x613;eip=0x005589; 	X(MOV(byte_448be, al));	// 18539 mov     byte_448BE, al ;~ 0613:5589
cs=0x613;eip=0x00558c; 	X(POP(si));	// 18540 pop     si ;~ 0613:558C
cs=0x613;eip=0x00558d; 	X(POP(di));	// 18541 pop     di ;~ 0613:558D
cs=0x613;eip=0x00558e; 	T(MOV(sp, bp));	// 18542 mov     sp, bp ;~ 0613:558E
cs=0x613;eip=0x005590; 	X(POP(bp));	// 18543 pop     bp ;~ 0613:5590
cs=0x613;eip=0x005591; 	J(RETF(0));	// 18544 retf ;~ 0613:5591

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_19bb0: 	goto loc_19bb0;
        case m2c::kloc_19bc2: 	goto loc_19bc2;
        case m2c::kloc_19bc3: 	goto loc_19bc3;
        case m2c::kloc_19bcb: 	goto loc_19bcb;
        case m2c::kloc_19c6b: 	goto loc_19c6b;
        case m2c::kloc_19c88: 	goto loc_19c88;
        case m2c::kloc_19c96: 	goto loc_19c96;
        case m2c::ksub_19ba0: 	goto sub_19ba0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool setup_aero_trackdata(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    setup_aero_trackdata:
    _begin:
#undef arg_0
#define arg_0 6
	// 18555 arg_0           = word ptr  6 ;~ 0613:5592
#undef arg_2
#define arg_2 8
	// 18556 arg_2           = word ptr  8 ;~ 0613:5592
#undef arg_4
#define arg_4 0x0A
	// 18557 arg_4           = word ptr  0Ah ;~ 0613:5592
cs=0x613;eip=0x005592; 	X(PUSH(bp));	// 18559 push    bp ;~ 0613:5592
cs=0x613;eip=0x005593; 	T(MOV(bp, sp));	// 18560 mov     bp, sp ;~ 0613:5593
cs=0x613;eip=0x005595; 	T(SUB(sp, 2));	// 18561 sub     sp, 2 ;~ 0613:5595
cs=0x613;eip=0x005598; 	X(PUSH(di));	// 18562 push    di ;~ 0613:5598
cs=0x613;eip=0x005599; 	X(PUSH(si));	// 18563 push    si ;~ 0613:5599
cs=0x613;eip=0x00559a; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0));	// 18564 cmp     [bp+arg_4], 0 ;~ 0613:559A
cs=0x613;eip=0x00559e; 	J(JZ(loc_19cb3));	// 18565 jz      short loc_19CB3 ;~ 0613:559E
cs=0x613;eip=0x0055a0; 	J(JMP(loc_19d36));	// 18566 jmp     loc_19D36 ;~ 0613:55A0
loc_19cb3:
	// 5471 
cs=0x613;eip=0x0055a3; 	T(MOV(ax, offset(dseg,asimd)));	// 18570 mov     ax, offset aSimd ; "simd" ;~ 0613:55A3
cs=0x613;eip=0x0055a6; 	X(PUSH(ax));	// 18571 push    ax ;~ 0613:55A6
cs=0x613;eip=0x0055a7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 18572 push    [bp+arg_2] ;~ 0613:55A7
cs=0x613;eip=0x0055aa; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 18573 push    [bp+arg_0] ;~ 0613:55AA
cs=0x613;eip=0x0055ad; 	J(CALLF(locate_shape_alt,0));	// 18574 call    locate_shape_alt ;~ 0613:55AD
cs=0x613;eip=0x0055b2; 	T(ADD(sp, 6));	// 18575 add     sp, 6 ;~ 0613:55B2
cs=0x613;eip=0x0055b5; 	X(PUSH(si));	// 18576 push    si ;~ 0613:55B5
cs=0x613;eip=0x0055b6; 	T(MOV(di, offset(dseg,simd_player)));	// 18577 mov     di, offset simd_player ;~ 0613:55B6
cs=0x613;eip=0x0055b9; 	T(MOV(si, ax));	// 18578 mov     si, ax ;~ 0613:55B9
cs=0x613;eip=0x0055bb; 	X(PUSH(ds));	// 18579 push    ds ;~ 0613:55BB
cs=0x613;eip=0x0055bc; 	X(POP(es));	// 18580 pop     es ;~ 0613:55BC
cs=0x613;eip=0x0055bd; 	X(PUSH(ds));	// 18582 push    ds ;~ 0613:55BD
cs=0x613;eip=0x0055be; 	T(MOV(ds, dx));	// 18583 mov     ds, dx ;~ 0613:55BE
cs=0x613;eip=0x0055c0; 	T(MOV(cx, 0x184));	// 18584 mov     cx, 184h ;~ 0613:55C0
	// 18585 repne movsw ;~ 0613:55C3
cs=0x613;eip=0x0055c3; 	X(	REPNE MOVSW);	// 18585 repne movsw ;~ 0613:55C3
cs=0x613;eip=0x0055c5; 	X(POP(ds));	// 18586 pop     ds ;~ 0613:55C5
cs=0x613;eip=0x0055c6; 	X(POP(si));	// 18587 pop     si ;~ 0613:55C6
cs=0x613;eip=0x0055c7; 	T(MOV(ax, *(dw*)(((db*)&td04_aerotable_pl))));	// 18588 mov     ax, word ptr td04_aerotable_pl ;~ 0613:55C7
cs=0x613;eip=0x0055ca; 	T(MOV(dx, *(dw*)(((db*)&td04_aerotable_pl)+2)));	// 18589 mov     dx, word ptr td04_aerotable_pl+2 ;~ 0613:55CA
cs=0x613;eip=0x0055ce; 	X(MOV(word_4615e, ax));	// 18590 mov     word_4615E, ax ;~ 0613:55CE
cs=0x613;eip=0x0055d1; 	X(MOV(word_46160, dx));	// 18591 mov     word_46160, dx ;~ 0613:55D1
cs=0x613;eip=0x0055d5; 	T(SUB(si, si));	// 18592 sub     si, si ;~ 0613:55D5
loc_19ce7:
	// 5472 
cs=0x613;eip=0x0055d7; 	T(MOV(ax, si));	// 18595 mov     ax, si ;~ 0613:55D7
cs=0x613;eip=0x0055d9; 	T(CWD);	// 18596 cwd ;~ 0613:55D9
cs=0x613;eip=0x0055da; 	X(PUSH(dx));	// 18597 push    dx ;~ 0613:55DA
cs=0x613;eip=0x0055db; 	X(PUSH(ax));	// 18598 push    ax ;~ 0613:55DB
cs=0x613;eip=0x0055dc; 	T(CWD);	// 18599 cwd ;~ 0613:55DC
cs=0x613;eip=0x0055dd; 	X(PUSH(dx));	// 18600 push    dx ;~ 0613:55DD
cs=0x613;eip=0x0055de; 	X(PUSH(ax));	// 18601 push    ax ;~ 0613:55DE
cs=0x613;eip=0x0055df; 	T(MOV(ax, word_45e92));	// 18602 mov     ax, word_45E92 ;~ 0613:55DF
cs=0x613;eip=0x0055e2; 	T(CWD);	// 18603 cwd ;~ 0613:55E2
cs=0x613;eip=0x0055e3; 	X(PUSH(dx));	// 18604 push    dx ;~ 0613:55E3
cs=0x613;eip=0x0055e4; 	X(PUSH(ax));	// 18605 push    ax ;~ 0613:55E4
cs=0x613;eip=0x0055e5; 	J(CALLF(__aflmul,0));	// 18606 call    __aFlmul ;~ 0613:55E5
cs=0x613;eip=0x0055ea; 	X(PUSH(dx));	// 18607 push    dx ;~ 0613:55EA
cs=0x613;eip=0x0055eb; 	X(PUSH(ax));	// 18608 push    ax ;~ 0613:55EB
cs=0x613;eip=0x0055ec; 	J(CALLF(__aflmul,0));	// 18609 call    __aFlmul ;~ 0613:55EC
cs=0x613;eip=0x0055f1; 	T(MOV(cl, 9));	// 18610 mov     cl, 9 ;~ 0613:55F1
loc_19d03:
	// 5473 
cs=0x613;eip=0x0055f3; 	T(SAR(dx, 1));	// 18613 sar     dx, 1 ;~ 0613:55F3
cs=0x613;eip=0x0055f5; 	T(RCR(ax, 1));	// 18614 rcr     ax, 1 ;~ 0613:55F5
cs=0x613;eip=0x0055f7; 	T(DEC(cl));	// 18615 dec     cl ;~ 0613:55F7
cs=0x613;eip=0x0055f9; 	J(JNZ(loc_19d03));	// 18616 jnz     short loc_19D03 ;~ 0613:55F9
cs=0x613;eip=0x0055fb; 	T(MOV(bx, si));	// 18617 mov     bx, si ;~ 0613:55FB
cs=0x613;eip=0x0055fd; 	T(SHL(bx, 1));	// 18618 shl     bx, 1 ;~ 0613:55FD
cs=0x613;eip=0x0055ff; 	T(LES(di, td04_aerotable_pl));	// 18619 les     di, td04_aerotable_pl ;~ 0613:55FF
cs=0x613;eip=0x005603; 	X(MOV(*(dw*)(raddr(es,bx+di)), ax));	// 18621 mov     es:[bx+di], ax ;~ 0613:5603
cs=0x613;eip=0x005606; 	T(INC(si));	// 18622 inc     si ;~ 0613:5606
cs=0x613;eip=0x005607; 	T(CMP(si, 0x40));	// 18623 cmp     si, 40h ; '@' ;~ 0613:5607
cs=0x613;eip=0x00560a; 	J(JL(loc_19ce7));	// 18624 jl      short loc_19CE7 ;~ 0613:560A
cs=0x613;eip=0x00560c; 	T(MOV(ax, offset(dseg,agnam)));	// 18625 mov     ax, offset aGnam ; "gnam" ;~ 0613:560C
cs=0x613;eip=0x00560f; 	X(PUSH(ax));	// 18626 push    ax ;~ 0613:560F
cs=0x613;eip=0x005610; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 18627 push    [bp+arg_2] ;~ 0613:5610
cs=0x613;eip=0x005613; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 18628 push    [bp+arg_0] ;~ 0613:5613
cs=0x613;eip=0x005616; 	J(CALLF(locate_shape_alt,0));	// 18629 call    locate_shape_alt ;~ 0613:5616
cs=0x613;eip=0x00561b; 	T(ADD(sp, 6));	// 18630 add     sp, 6 ;~ 0613:561B
cs=0x613;eip=0x00561e; 	X(PUSH(dx));	// 18631 push    dx ;~ 0613:561E
cs=0x613;eip=0x00561f; 	X(PUSH(ax));	// 18632 push    ax ;~ 0613:561F
cs=0x613;eip=0x005620; 	T(MOV(ax, offset(dseg,gnam_string)));	// 18633 mov     ax, offset gnam_string ;~ 0613:5620
cs=0x613;eip=0x005623; 	J(JMP(loc_19db6));	// 18634 jmp     loc_19DB6 ;~ 0613:5623
loc_19d36:
	// 5474 
cs=0x613;eip=0x005626; 	T(MOV(ax, offset(dseg,asimd_0)));	// 18638 mov     ax, offset aSimd_0 ; "simd" ;~ 0613:5626
cs=0x613;eip=0x005629; 	X(PUSH(ax));	// 18639 push    ax ;~ 0613:5629
cs=0x613;eip=0x00562a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 18640 push    [bp+arg_2] ;~ 0613:562A
cs=0x613;eip=0x00562d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 18641 push    [bp+arg_0] ;~ 0613:562D
cs=0x613;eip=0x005630; 	J(CALLF(locate_shape_alt,0));	// 18642 call    locate_shape_alt ;~ 0613:5630
cs=0x613;eip=0x005635; 	T(ADD(sp, 6));	// 18643 add     sp, 6 ;~ 0613:5635
cs=0x613;eip=0x005638; 	X(PUSH(si));	// 18644 push    si ;~ 0613:5638
cs=0x613;eip=0x005639; 	T(MOV(di, offset(dseg,simd_opponent)));	// 18645 mov     di, offset simd_opponent ;~ 0613:5639
cs=0x613;eip=0x00563c; 	T(MOV(si, ax));	// 18646 mov     si, ax ;~ 0613:563C
cs=0x613;eip=0x00563e; 	X(PUSH(ds));	// 18647 push    ds ;~ 0613:563E
cs=0x613;eip=0x00563f; 	X(POP(es));	// 18648 pop     es ;~ 0613:563F
cs=0x613;eip=0x005640; 	X(PUSH(ds));	// 18650 push    ds ;~ 0613:5640
cs=0x613;eip=0x005641; 	T(MOV(ds, dx));	// 18651 mov     ds, dx ;~ 0613:5641
cs=0x613;eip=0x005643; 	T(MOV(cx, 0x184));	// 18652 mov     cx, 184h ;~ 0613:5643
	// 18653 repne movsw ;~ 0613:5646
cs=0x613;eip=0x005646; 	X(	REPNE MOVSW);	// 18653 repne movsw ;~ 0613:5646
cs=0x613;eip=0x005648; 	X(POP(ds));	// 18654 pop     ds ;~ 0613:5648
cs=0x613;eip=0x005649; 	X(POP(si));	// 18655 pop     si ;~ 0613:5649
cs=0x613;eip=0x00564a; 	T(MOV(ax, *(dw*)(((db*)&td05_aerotable_op))));	// 18656 mov     ax, word ptr td05_aerotable_op ;~ 0613:564A
cs=0x613;eip=0x00564d; 	T(MOV(dx, *(dw*)(((db*)&td05_aerotable_op)+2)));	// 18657 mov     dx, word ptr td05_aerotable_op+2 ;~ 0613:564D
cs=0x613;eip=0x005651; 	X(MOV(word_45944, ax));	// 18658 mov     word_45944, ax ;~ 0613:5651
cs=0x613;eip=0x005654; 	X(MOV(word_45946, dx));	// 18659 mov     word_45946, dx ;~ 0613:5654
cs=0x613;eip=0x005658; 	T(SUB(si, si));	// 18660 sub     si, si ;~ 0613:5658
loc_19d6a:
	// 5475 
cs=0x613;eip=0x00565a; 	T(MOV(ax, si));	// 18663 mov     ax, si ;~ 0613:565A
cs=0x613;eip=0x00565c; 	T(CWD);	// 18664 cwd ;~ 0613:565C
cs=0x613;eip=0x00565d; 	X(PUSH(dx));	// 18665 push    dx ;~ 0613:565D
cs=0x613;eip=0x00565e; 	X(PUSH(ax));	// 18666 push    ax ;~ 0613:565E
cs=0x613;eip=0x00565f; 	T(CWD);	// 18667 cwd ;~ 0613:565F
cs=0x613;eip=0x005660; 	X(PUSH(dx));	// 18668 push    dx ;~ 0613:5660
cs=0x613;eip=0x005661; 	X(PUSH(ax));	// 18669 push    ax ;~ 0613:5661
cs=0x613;eip=0x005662; 	T(MOV(ax, word_45678));	// 18670 mov     ax, word_45678 ;~ 0613:5662
cs=0x613;eip=0x005665; 	T(CWD);	// 18671 cwd ;~ 0613:5665
cs=0x613;eip=0x005666; 	X(PUSH(dx));	// 18672 push    dx ;~ 0613:5666
cs=0x613;eip=0x005667; 	X(PUSH(ax));	// 18673 push    ax ;~ 0613:5667
cs=0x613;eip=0x005668; 	J(CALLF(__aflmul,0));	// 18674 call    __aFlmul ;~ 0613:5668
cs=0x613;eip=0x00566d; 	X(PUSH(dx));	// 18675 push    dx ;~ 0613:566D
cs=0x613;eip=0x00566e; 	X(PUSH(ax));	// 18676 push    ax ;~ 0613:566E
cs=0x613;eip=0x00566f; 	J(CALLF(__aflmul,0));	// 18677 call    __aFlmul ;~ 0613:566F
cs=0x613;eip=0x005674; 	T(MOV(cl, 9));	// 18678 mov     cl, 9 ;~ 0613:5674
loc_19d86:
	// 5476 
cs=0x613;eip=0x005676; 	T(SAR(dx, 1));	// 18681 sar     dx, 1 ;~ 0613:5676
cs=0x613;eip=0x005678; 	T(RCR(ax, 1));	// 18682 rcr     ax, 1 ;~ 0613:5678
cs=0x613;eip=0x00567a; 	T(DEC(cl));	// 18683 dec     cl ;~ 0613:567A
cs=0x613;eip=0x00567c; 	J(JNZ(loc_19d86));	// 18684 jnz     short loc_19D86 ;~ 0613:567C
cs=0x613;eip=0x00567e; 	T(MOV(bx, si));	// 18685 mov     bx, si ;~ 0613:567E
cs=0x613;eip=0x005680; 	T(SHL(bx, 1));	// 18686 shl     bx, 1 ;~ 0613:5680
cs=0x613;eip=0x005682; 	T(LES(di, td05_aerotable_op));	// 18687 les     di, td05_aerotable_op ;~ 0613:5682
cs=0x613;eip=0x005686; 	X(MOV(*(dw*)(raddr(es,bx+di)), ax));	// 18689 mov     es:[bx+di], ax ;~ 0613:5686
cs=0x613;eip=0x005689; 	T(INC(si));	// 18690 inc     si ;~ 0613:5689
cs=0x613;eip=0x00568a; 	T(CMP(si, 0x40));	// 18691 cmp     si, 40h ; '@' ;~ 0613:568A
cs=0x613;eip=0x00568d; 	J(JL(loc_19d6a));	// 18692 jl      short loc_19D6A ;~ 0613:568D
cs=0x613;eip=0x00568f; 	T(MOV(ax, offset(dseg,agsna)));	// 18693 mov     ax, offset aGsna ; "gsna" ;~ 0613:568F
cs=0x613;eip=0x005692; 	X(PUSH(ax));	// 18694 push    ax ;~ 0613:5692
cs=0x613;eip=0x005693; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 18695 push    [bp+arg_2] ;~ 0613:5693
cs=0x613;eip=0x005696; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 18696 push    [bp+arg_0] ;~ 0613:5696
cs=0x613;eip=0x005699; 	J(CALLF(locate_shape_alt,0));	// 18697 call    locate_shape_alt ;~ 0613:5699
cs=0x613;eip=0x00569e; 	T(ADD(sp, 6));	// 18698 add     sp, 6 ;~ 0613:569E
cs=0x613;eip=0x0056a1; 	X(PUSH(dx));	// 18699 push    dx ;~ 0613:56A1
cs=0x613;eip=0x0056a2; 	X(PUSH(ax));	// 18700 push    ax ;~ 0613:56A2
cs=0x613;eip=0x0056a3; 	T(MOV(ax, offset(dseg,gsna_string)));	// 18701 mov     ax, offset gsna_string ;~ 0613:56A3
loc_19db6:
	// 5477 
cs=0x613;eip=0x0056a6; 	X(PUSH(ax));	// 18704 push    ax ;~ 0613:56A6
cs=0x613;eip=0x0056a7; 	J(CALLF(copy_string,0));	// 18705 call    copy_string ;~ 0613:56A7
cs=0x613;eip=0x0056ac; 	T(ADD(sp, 6));	// 18706 add     sp, 6 ;~ 0613:56AC
cs=0x613;eip=0x0056af; 	X(POP(si));	// 18707 pop     si ;~ 0613:56AF
cs=0x613;eip=0x0056b0; 	X(POP(di));	// 18708 pop     di ;~ 0613:56B0
cs=0x613;eip=0x0056b1; 	T(MOV(sp, bp));	// 18709 mov     sp, bp ;~ 0613:56B1
cs=0x613;eip=0x0056b3; 	X(POP(bp));	// 18710 pop     bp ;~ 0613:56B3
cs=0x613;eip=0x0056b4; 	J(RETF(0));	// 18711 retf ;~ 0613:56B4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_19cb3: 	goto loc_19cb3;
        case m2c::kloc_19ce7: 	goto loc_19ce7;
        case m2c::kloc_19d03: 	goto loc_19d03;
        case m2c::kloc_19d36: 	goto loc_19d36;
        case m2c::kloc_19d6a: 	goto loc_19d6a;
        case m2c::kloc_19d86: 	goto loc_19d86;
        case m2c::kloc_19db6: 	goto loc_19db6;
        case m2c::ksetup_aero_trackdata: 	goto setup_aero_trackdata;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

