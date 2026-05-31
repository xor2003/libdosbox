/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group2:
    _begin:
opponent_op:
	// 7970 
#undef var_40
#define var_40 -0x40
	// 7973 var_40          = word ptr -40h ;~ 0613:0002
#undef var_3e
#define var_3e -0x3E
	// 7974 var_3E          = word ptr -3Eh ;~ 0613:0002
#undef var_3c
#define var_3c -0x3C
	// 7975 var_3C          = word ptr -3Ch ;~ 0613:0002
#undef var_3a
#define var_3a -0x3A
	// 7976 var_3A          = word ptr -3Ah ;~ 0613:0002
#undef var_38
#define var_38 -0x38
	// 7977 var_38          = word ptr -38h ;~ 0613:0002
#undef var_36
#define var_36 -0x36
	// 7978 var_36          = word ptr -36h ;~ 0613:0002
#undef var_34
#define var_34 -0x34
	// 7979 var_34          = word ptr -34h ;~ 0613:0002
#undef var_32
#define var_32 -0x32
	// 7980 var_32          = word ptr -32h ;~ 0613:0002
#undef var_30
#define var_30 -0x30
	// 7981 var_30          = word ptr -30h ;~ 0613:0002
#undef var_2e
#define var_2e -0x2E
	// 7982 var_2E          = word ptr -2Eh ;~ 0613:0002
#undef var_2c
#define var_2c -0x2C
	// 7983 var_2C          = word ptr -2Ch ;~ 0613:0002
#undef var_2a
#define var_2a -0x2A
	// 7984 var_2A          = word ptr -2Ah ;~ 0613:0002
#undef var_28
#define var_28 -0x28
	// 7985 var_28          = word ptr -28h ;~ 0613:0002
#undef var_26
#define var_26 -0x26
	// 7986 var_26          = word ptr -26h ;~ 0613:0002
#undef var_24
#define var_24 -0x24
	// 7987 var_24          = word ptr -24h ;~ 0613:0002
#undef var_22
#define var_22 -0x22
	// 7988 var_22          = word ptr -22h ;~ 0613:0002
#undef var_20
#define var_20 -0x20
	// 7989 var_20          = byte ptr -20h ;~ 0613:0002
#undef var_1c
#define var_1c -0x1C
	// 7990 var_1C          = word ptr -1Ch ;~ 0613:0002
#undef var_1a
#define var_1a -0x1A
	// 7991 var_1A          = word ptr -1Ah ;~ 0613:0002
#undef var_18
#define var_18 -0x18
	// 7992 var_18          = word ptr -18h ;~ 0613:0002
#undef var_16
#define var_16 -0x16
	// 7993 var_16          = word ptr -16h ;~ 0613:0002
#undef var_14
#define var_14 -0x14
	// 7994 var_14          = word ptr -14h ;~ 0613:0002
#undef var_12
#define var_12 -0x12
	// 7995 var_12          = word ptr -12h ;~ 0613:0002
#undef var_10
#define var_10 -0x10
	// 7996 var_10          = word ptr -10h ;~ 0613:0002
#undef var_e
#define var_e -0x0E
	// 7997 var_E           = byte ptr -0Eh ;~ 0613:0002
#undef var_c
#define var_c -0x0C
	// 7998 var_C           = word ptr -0Ch ;~ 0613:0002
#undef var_a
#define var_a -0x0A
	// 7999 var_A           = word ptr -0Ah ;~ 0613:0002
#undef var_8
#define var_8 -8
	// 8000 var_8           = word ptr -8 ;~ 0613:0002
#undef var_6
#define var_6 -6
	// 8001 var_6           = word ptr -6 ;~ 0613:0002
ret_613_2:
	// 4785 
cs=0x613;eip=0x000002; 	X(PUSH(bp));	// 8003 push    bp ;~ 0613:0002
cs=0x613;eip=0x000003; 	T(MOV(bp, sp));	// 8004 mov     bp, sp ;~ 0613:0003
cs=0x613;eip=0x000005; 	T(SUB(sp, 0x40));	// 8005 sub     sp, 40h ;~ 0613:0005
cs=0x613;eip=0x000008; 	X(PUSH(di));	// 8006 push    di ;~ 0613:0008
cs=0x613;eip=0x000009; 	X(PUSH(si));	// 8007 push    si ;~ 0613:0009
cs=0x613;eip=0x00000a; 	T(CMP(framespersec, 0x14));	// 8008 cmp     framespersec, 14h ;~ 0613:000A
cs=0x613;eip=0x00000f; 	R(JNZ(loc_1472e));	// 8009 jnz     short loc_1472E ;~ 0613:000F
cs=0x613;eip=0x000011; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), 8));	// 8010 mov     [bp+var_14], 8 ;~ 0613:0011
cs=0x613;eip=0x000016; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 1));	// 8011 mov     [bp+var_10], 1 ;~ 0613:0016
cs=0x613;eip=0x00001b; 	R(JMP(loc_14738));	// 8012 jmp     short loc_14738 ;~ 0613:001B
loc_1472e:
	// 4786 
cs=0x613;eip=0x00001e; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), 0x10));	// 8017 mov     [bp+var_14], 10h ;~ 0613:001E
cs=0x613;eip=0x000023; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 2));	// 8018 mov     [bp+var_10], 2 ;~ 0613:0023
loc_14738:
	// 4787 
cs=0x613;eip=0x000028; 	T(CMP(word_446ec, 0));	// 8021 cmp     word_446EC, 0 ;~ 0613:0028
cs=0x613;eip=0x00002d; 	R(JNZ(loc_14746));	// 8022 jnz     short loc_14746 ;~ 0613:002D
cs=0x613;eip=0x00002f; 	T(CMP(byte_44889, 2));	// 8023 cmp     byte_44889, 2 ;~ 0613:002F
cs=0x613;eip=0x000034; 	R(JNZ(loc_1474c));	// 8024 jnz     short loc_1474C ;~ 0613:0034
loc_14746:
	// 4788 
cs=0x613;eip=0x000036; 	X(MOV(*(raddr(ss,bp+var_20)), 1));	// 8027 mov     [bp+var_20], 1 ;~ 0613:0036
cs=0x613;eip=0x00003a; 	R(JMP(loc_14750));	// 8028 jmp     short loc_14750 ;~ 0613:003A
loc_1474c:
	// 4789 
cs=0x613;eip=0x00003c; 	X(MOV(*(raddr(ss,bp+var_20)), 0));	// 8032 mov     [bp+var_20], 0 ;~ 0613:003C
loc_14750:
	// 4790 
cs=0x613;eip=0x000040; 	T(MOV(ax, word_446b6));	// 8035 mov     ax, word_446B6 ;~ 0613:0040
cs=0x613;eip=0x000043; 	T(MOV(dx, word_446b8));	// 8036 mov     dx, word_446B8 ;~ 0613:0043
cs=0x613;eip=0x000047; 	T(MOV(cl, 6));	// 8037 mov     cl, 6 ;~ 0613:0047
loc_14759:
	// 4791 
cs=0x613;eip=0x000049; 	T(SAR(dx, 1));	// 8040 sar     dx, 1 ;~ 0613:0049
cs=0x613;eip=0x00004b; 	T(RCR(ax, 1));	// 8041 rcr     ax, 1 ;~ 0613:004B
cs=0x613;eip=0x00004d; 	T(DEC(cl));	// 8042 dec     cl ;~ 0613:004D
cs=0x613;eip=0x00004f; 	R(JNZ(loc_14759));	// 8043 jnz     short loc_14759 ;~ 0613:004F
cs=0x613;eip=0x000051; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 8044 mov     [bp+var_28], ax ;~ 0613:0051
cs=0x613;eip=0x000054; 	T(MOV(ax, word_446ba));	// 8045 mov     ax, word_446BA ;~ 0613:0054
cs=0x613;eip=0x000057; 	T(MOV(dx, word_446bc));	// 8046 mov     dx, word_446BC ;~ 0613:0057
cs=0x613;eip=0x00005b; 	T(MOV(cl, 6));	// 8047 mov     cl, 6 ;~ 0613:005B
loc_1476d:
	// 4792 
cs=0x613;eip=0x00005d; 	T(SAR(dx, 1));	// 8050 sar     dx, 1 ;~ 0613:005D
cs=0x613;eip=0x00005f; 	T(RCR(ax, 1));	// 8051 rcr     ax, 1 ;~ 0613:005F
cs=0x613;eip=0x000061; 	T(DEC(cl));	// 8052 dec     cl ;~ 0613:0061
cs=0x613;eip=0x000063; 	R(JNZ(loc_1476d));	// 8053 jnz     short loc_1476D ;~ 0613:0063
cs=0x613;eip=0x000065; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 8054 mov     [bp+var_2A], ax ;~ 0613:0065
cs=0x613;eip=0x000068; 	T(MOV(ax, word_446be));	// 8055 mov     ax, word_446BE ;~ 0613:0068
cs=0x613;eip=0x00006b; 	T(MOV(dx, word_446c0));	// 8056 mov     dx, word_446C0 ;~ 0613:006B
cs=0x613;eip=0x00006f; 	T(MOV(cl, 6));	// 8057 mov     cl, 6 ;~ 0613:006F
loc_14781:
	// 4793 
cs=0x613;eip=0x000071; 	T(SAR(dx, 1));	// 8060 sar     dx, 1 ;~ 0613:0071
cs=0x613;eip=0x000073; 	T(RCR(ax, 1));	// 8061 rcr     ax, 1 ;~ 0613:0073
cs=0x613;eip=0x000075; 	T(DEC(cl));	// 8062 dec     cl ;~ 0613:0075
cs=0x613;eip=0x000077; 	R(JNZ(loc_14781));	// 8063 jnz     short loc_14781 ;~ 0613:0077
cs=0x613;eip=0x000079; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), ax));	// 8064 mov     [bp+var_36], ax ;~ 0613:0079
cs=0x613;eip=0x00007c; 	T(MOV(ax, word_445e6));	// 8065 mov     ax, word_445E6 ;~ 0613:007C
cs=0x613;eip=0x00007f; 	T(MOV(dx, word_445e8));	// 8066 mov     dx, word_445E8 ;~ 0613:007F
cs=0x613;eip=0x000083; 	T(MOV(cl, 6));	// 8067 mov     cl, 6 ;~ 0613:0083
loc_14795:
	// 4794 
cs=0x613;eip=0x000085; 	T(SAR(dx, 1));	// 8070 sar     dx, 1 ;~ 0613:0085
cs=0x613;eip=0x000087; 	T(RCR(ax, 1));	// 8071 rcr     ax, 1 ;~ 0613:0087
cs=0x613;eip=0x000089; 	T(DEC(cl));	// 8072 dec     cl ;~ 0613:0089
cs=0x613;eip=0x00008b; 	R(JNZ(loc_14795));	// 8073 jnz     short loc_14795 ;~ 0613:008B
cs=0x613;eip=0x00008d; 	X(MOV(*(dw*)(raddr(ss,bp+var_34)), ax));	// 8074 mov     [bp+var_34], ax ;~ 0613:008D
cs=0x613;eip=0x000090; 	T(MOV(ax, word_445ea));	// 8075 mov     ax, word_445EA ;~ 0613:0090
cs=0x613;eip=0x000093; 	T(MOV(dx, word_445ec));	// 8076 mov     dx, word_445EC ;~ 0613:0093
cs=0x613;eip=0x000097; 	T(MOV(cl, 6));	// 8077 mov     cl, 6 ;~ 0613:0097
loc_147a9:
	// 4795 
cs=0x613;eip=0x000099; 	T(SAR(dx, 1));	// 8080 sar     dx, 1 ;~ 0613:0099
cs=0x613;eip=0x00009b; 	T(RCR(ax, 1));	// 8081 rcr     ax, 1 ;~ 0613:009B
cs=0x613;eip=0x00009d; 	T(DEC(cl));	// 8082 dec     cl ;~ 0613:009D
cs=0x613;eip=0x00009f; 	R(JNZ(loc_147a9));	// 8083 jnz     short loc_147A9 ;~ 0613:009F
cs=0x613;eip=0x0000a1; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), ax));	// 8084 mov     [bp+var_3E], ax ;~ 0613:00A1
cs=0x613;eip=0x0000a4; 	T(MOV(ax, word_445ee));	// 8085 mov     ax, word_445EE ;~ 0613:00A4
cs=0x613;eip=0x0000a7; 	T(MOV(dx, word_445f0));	// 8086 mov     dx, word_445F0 ;~ 0613:00A7
cs=0x613;eip=0x0000ab; 	T(MOV(cl, 6));	// 8087 mov     cl, 6 ;~ 0613:00AB
loc_147bd:
	// 4796 
cs=0x613;eip=0x0000ad; 	T(SAR(dx, 1));	// 8090 sar     dx, 1 ;~ 0613:00AD
cs=0x613;eip=0x0000af; 	T(RCR(ax, 1));	// 8091 rcr     ax, 1 ;~ 0613:00AF
cs=0x613;eip=0x0000b1; 	T(DEC(cl));	// 8092 dec     cl ;~ 0613:00B1
cs=0x613;eip=0x0000b3; 	R(JNZ(loc_147bd));	// 8093 jnz     short loc_147BD ;~ 0613:00B3
cs=0x613;eip=0x0000b5; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 8094 mov     [bp+var_40], ax ;~ 0613:00B5
cs=0x613;eip=0x0000b8; 	X(MOV(byte_44785, 0));	// 8095 mov     byte_44785, 0 ;~ 0613:00B8
cs=0x613;eip=0x0000bd; 	X(MOV(byte_448f2, 0));	// 8096 mov     byte_448F2, 0 ;~ 0613:00BD
cs=0x613;eip=0x0000c2; 	T(MOV(ax, 1));	// 8097 mov     ax, 1 ;~ 0613:00C2
cs=0x613;eip=0x0000c5; 	X(PUSH(ax));	// 8098 push    ax ;~ 0613:00C5
cs=0x613;eip=0x0000c6; 	X(PUSH(word_446ce));	// 8099 push    word_446CE ;~ 0613:00C6
cs=0x613;eip=0x0000ca; 	X(PUSH(word_446d0));	// 8100 push    word_446D0 ;~ 0613:00CA
cs=0x613;eip=0x0000ce; 	X(PUSH(word_446d2));	// 8101 push    word_446D2 ;~ 0613:00CE
cs=0x613;eip=0x0000d2; 	R(CALLF(mat_rot_zxy,0));	// 8102 call    mat_rot_zxy ;~ 0613:00D2
cs=0x613;eip=0x0000d7; 	T(ADD(sp, 8));	// 8103 add     sp, 8 ;~ 0613:00D7
cs=0x613;eip=0x0000da; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 8104 mov     [bp+var_16], ax ;~ 0613:00DA
cs=0x613;eip=0x0000dd; 	X(MOV(byte_44785, 1));	// 8105 mov     byte_44785, 1 ;~ 0613:00DD
cs=0x613;eip=0x0000e2; 	T(CMP(byte_4477f, 0));	// 8106 cmp     byte_4477F, 0 ;~ 0613:00E2
cs=0x613;eip=0x0000e7; 	R(JZ(loc_1480c));	// 8107 jz      short loc_1480C ;~ 0613:00E7
cs=0x613;eip=0x0000e9; 	T(CMP(word_446e2, 0));	// 8108 cmp     word_446E2, 0 ;~ 0613:00E9
cs=0x613;eip=0x0000ee; 	R(JZ(loc_14803));	// 8109 jz      short loc_14803 ;~ 0613:00EE
cs=0x613;eip=0x0000f0; 	R(JMP(loc_14b72));	// 8110 jmp     loc_14B72 ;~ 0613:00F0
loc_14803:
	// 4797 
cs=0x613;eip=0x0000f3; 	X(MOV(byte_44785, 0));	// 8114 mov     byte_44785, 0 ;~ 0613:00F3
cs=0x613;eip=0x0000f8; 	R(JMP(loc_14b72));	// 8115 jmp     loc_14B72 ;~ 0613:00F8
loc_1480c:
	// 4798 
cs=0x613;eip=0x0000fc; 	X(PUSH(si));	// 8120 push    si ;~ 0613:00FC
cs=0x613;eip=0x0000fd; 	T(di = bp+var_3c);	// 8121 lea     di, [bp+var_3C] ;~ 0613:00FD
cs=0x613;eip=0x000100; 	T(MOV(si, offset(dseg,word_4475a)));	// 8122 mov     si, offset word_4475A ;~ 0613:0100
cs=0x613;eip=0x000103; 	X(PUSH(ss));	// 8123 push    ss ;~ 0613:0103
cs=0x613;eip=0x000104; 	X(POP(es));	// 8124 pop     es ;~ 0613:0104
cs=0x613;eip=0x000105; 	X(MOVSW);	// 8125 movsw ;~ 0613:0105
cs=0x613;eip=0x000106; 	X(MOVSW);	// 8126 movsw ;~ 0613:0106
cs=0x613;eip=0x000107; 	X(MOVSW);	// 8127 movsw ;~ 0613:0107
cs=0x613;eip=0x000108; 	X(POP(si));	// 8128 pop     si ;~ 0613:0108
cs=0x613;eip=0x000109; 	T(CMP(*(dw*)(raddr(ss,bp+var_3a)), 0x0FFFF));	// 8129 cmp     [bp+var_3A], 0FFFFh ;~ 0613:0109
cs=0x613;eip=0x00010d; 	R(JZ(loc_14848));	// 8130 jz      short loc_14848 ;~ 0613:010D
cs=0x613;eip=0x00010f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3c))));	// 8131 mov     ax, [bp+var_3C] ;~ 0613:010F
cs=0x613;eip=0x000112; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_28))));	// 8132 sub     ax, [bp+var_28] ;~ 0613:0112
cs=0x613;eip=0x000115; 	X(MOV(*(dw*)(raddr(ss,bp+var_32)), ax));	// 8133 mov     [bp+var_32], ax ;~ 0613:0115
cs=0x613;eip=0x000118; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3a))));	// 8134 mov     ax, [bp+var_3A] ;~ 0613:0118
cs=0x613;eip=0x00011b; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2a))));	// 8135 sub     ax, [bp+var_2A] ;~ 0613:011B
cs=0x613;eip=0x00011e; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 8136 mov     [bp+var_30], ax ;~ 0613:011E
cs=0x613;eip=0x000121; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_38))));	// 8137 mov     ax, [bp+var_38] ;~ 0613:0121
cs=0x613;eip=0x000124; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_36))));	// 8138 sub     ax, [bp+var_36] ;~ 0613:0124
cs=0x613;eip=0x000127; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 8139 mov     [bp+var_2E], ax ;~ 0613:0127
cs=0x613;eip=0x00012a; 	T(ax = bp+var_32);	// 8140 lea     ax, [bp+var_32] ;~ 0613:012A
cs=0x613;eip=0x00012d; 	X(PUSH(ax));	// 8141 push    ax ;~ 0613:012D
cs=0x613;eip=0x00012e; 	R(CALLF(polarradius3d,0));	// 8142 call    polarRadius3D ;~ 0613:012E
cs=0x613;eip=0x000133; 	T(ADD(sp, 2));	// 8143 add     sp, 2 ;~ 0613:0133
cs=0x613;eip=0x000136; 	R(JMP(loc_1485e));	// 8144 jmp     short loc_1485E ;~ 0613:0136
loc_14848:
	// 4799 
cs=0x613;eip=0x000138; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_38))));	// 8148 mov     ax, [bp+var_38] ;~ 0613:0138
cs=0x613;eip=0x00013b; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_36))));	// 8149 sub     ax, [bp+var_36] ;~ 0613:013B
cs=0x613;eip=0x00013e; 	X(PUSH(ax));	// 8150 push    ax ;~ 0613:013E
cs=0x613;eip=0x00013f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3c))));	// 8151 mov     ax, [bp+var_3C] ;~ 0613:013F
cs=0x613;eip=0x000142; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_28))));	// 8152 sub     ax, [bp+var_28] ;~ 0613:0142
cs=0x613;eip=0x000145; 	X(PUSH(ax));	// 8153 push    ax ;~ 0613:0145
cs=0x613;eip=0x000146; 	R(CALLF(polarradius2d,0));	// 8154 call    polarRadius2D ;~ 0613:0146
cs=0x613;eip=0x00014b; 	T(ADD(sp, 4));	// 8155 add     sp, 4 ;~ 0613:014B
loc_1485e:
	// 4800 
cs=0x613;eip=0x00014e; 	T(MOV(si, ax));	// 8158 mov     si, ax ;~ 0613:014E
cs=0x613;eip=0x000150; 	T(CMP(si, 0x0C8));	// 8159 cmp     si, 0C8h ; 'È' ;~ 0613:0150
cs=0x613;eip=0x000154; 	R(JGE(loc_148b3));	// 8160 jge     short loc_148B3 ;~ 0613:0154
loc_14866:
	// 4801 
cs=0x613;eip=0x000156; 	T(MOV(ax, offset(dseg,byte_4488d)));	// 8163 mov     ax, offset byte_4488D ;~ 0613:0156
cs=0x613;eip=0x000159; 	X(PUSH(ax));	// 8164 push    ax ;~ 0613:0159
cs=0x613;eip=0x00015a; 	T(MOV(al, byte_44784));	// 8165 mov     al, byte_44784 ;~ 0613:015A
cs=0x613;eip=0x00015d; 	X(INC(byte_44784));	// 8166 inc     byte_44784 ;~ 0613:015D
cs=0x613;eip=0x000161; 	T(SUB(ah, ah));	// 8167 sub     ah, ah ;~ 0613:0161
cs=0x613;eip=0x000163; 	X(PUSH(ax));	// 8168 push    ax ;~ 0613:0163
cs=0x613;eip=0x000164; 	T(MOV(ax, offset(dseg,word_4475a)));	// 8169 mov     ax, offset word_4475A ;~ 0613:0164
cs=0x613;eip=0x000167; 	X(PUSH(ax));	// 8170 push    ax ;~ 0613:0167
cs=0x613;eip=0x000168; 	T(MOV(bx, word_44700));	// 8171 mov     bx, word_44700 ;~ 0613:0168
cs=0x613;eip=0x00016c; 	T(SHL(bx, 1));	// 8172 shl     bx, 1 ;~ 0613:016C
cs=0x613;eip=0x00016e; 	T(LES(di, trackdata3));	// 8173 les     di, trackdata3 ;~ 0613:016E
cs=0x613;eip=0x000172; 	X(PUSH(*(dw*)(raddr(es,bx+di))));	// 8174 push    word ptr es:[bx+di] ;~ 0613:0172
cs=0x613;eip=0x000175; 	X(PUSH(cs));	// 8175 push    cs ;~ 0613:0175
cs=0x613;eip=0x000176; 	R(CALL(sub_18d60,0));	// 8176 call    near ptr sub_18D60 ;~ 0613:0176
cs=0x613;eip=0x000179; 	T(ADD(sp, 8));	// 8177 add     sp, 8 ;~ 0613:0179
cs=0x613;eip=0x00017c; 	T(OR(al, al));	// 8178 or      al, al ;~ 0613:017C
cs=0x613;eip=0x00017e; 	R(JZ(loc_148b3));	// 8179 jz      short loc_148B3 ;~ 0613:017E
cs=0x613;eip=0x000180; 	X(INC(word_44700));	// 8180 inc     word_44700 ;~ 0613:0180
cs=0x613;eip=0x000184; 	T(MOV(bx, word_44700));	// 8181 mov     bx, word_44700 ;~ 0613:0184
cs=0x613;eip=0x000188; 	T(SHL(bx, 1));	// 8182 shl     bx, 1 ;~ 0613:0188
cs=0x613;eip=0x00018a; 	T(LES(di, trackdata3));	// 8183 les     di, trackdata3 ;~ 0613:018A
cs=0x613;eip=0x00018e; 	T(CMP(*(dw*)(raddr(es,bx+di)), 0));	// 8184 cmp     word ptr es:[bx+di], 0 ;~ 0613:018E
cs=0x613;eip=0x000192; 	R(JNZ(loc_148ae));	// 8185 jnz     short loc_148AE ;~ 0613:0192
cs=0x613;eip=0x000194; 	X(INC(byte_44783));	// 8186 inc     byte_44783 ;~ 0613:0194
cs=0x613;eip=0x000198; 	X(MOV(word_44700, 0));	// 8187 mov     word_44700, 0 ;~ 0613:0198
loc_148ae:
	// 4802 
cs=0x613;eip=0x00019e; 	X(MOV(byte_44784, 0));	// 8190 mov     byte_44784, 0 ;~ 0613:019E
loc_148b3:
	// 4803 
cs=0x613;eip=0x0001a3; 	T(CMP(byte_44889, 2));	// 8194 cmp     byte_44889, 2 ;~ 0613:01A3
cs=0x613;eip=0x0001a8; 	R(JNZ(loc_148ec));	// 8195 jnz     short loc_148EC ;~ 0613:01A8
loc_148ba:
	// 4804 
cs=0x613;eip=0x0001aa; 	X(PUSH(si));	// 8199 push    si ;~ 0613:01AA
cs=0x613;eip=0x0001ab; 	T(di = bp+var_c);	// 8200 lea     di, [bp+var_C] ;~ 0613:01AB
cs=0x613;eip=0x0001ae; 	T(MOV(si, offset(dseg,word_4475a)));	// 8201 mov     si, offset word_4475A ;~ 0613:01AE
cs=0x613;eip=0x0001b1; 	X(PUSH(ss));	// 8202 push    ss ;~ 0613:01B1
cs=0x613;eip=0x0001b2; 	X(POP(es));	// 8203 pop     es ;~ 0613:01B2
cs=0x613;eip=0x0001b3; 	X(MOVSW);	// 8204 movsw ;~ 0613:01B3
cs=0x613;eip=0x0001b4; 	X(MOVSW);	// 8205 movsw ;~ 0613:01B4
cs=0x613;eip=0x0001b5; 	X(MOVSW);	// 8206 movsw ;~ 0613:01B5
cs=0x613;eip=0x0001b6; 	X(POP(si));	// 8207 pop     si ;~ 0613:01B6
loc_148c7:
	// 4805 
cs=0x613;eip=0x0001b7; 	X(PUSH(si));	// 8211 push    si ;~ 0613:01B7
cs=0x613;eip=0x0001b8; 	T(di = bp+var_26);	// 8212 lea     di, [bp+var_26] ;~ 0613:01B8
cs=0x613;eip=0x0001bb; 	T(si = bp+var_c);	// 8213 lea     si, [bp+var_C] ;~ 0613:01BB
cs=0x613;eip=0x0001be; 	X(PUSH(ss));	// 8214 push    ss ;~ 0613:01BE
cs=0x613;eip=0x0001bf; 	X(POP(es));	// 8215 pop     es ;~ 0613:01BF
cs=0x613;eip=0x0001c0; 	X(MOVSW);	// 8216 movsw ;~ 0613:01C0
cs=0x613;eip=0x0001c1; 	X(MOVSW);	// 8217 movsw ;~ 0613:01C1
cs=0x613;eip=0x0001c2; 	X(MOVSW);	// 8218 movsw ;~ 0613:01C2
cs=0x613;eip=0x0001c3; 	X(POP(si));	// 8219 pop     si ;~ 0613:01C3
cs=0x613;eip=0x0001c4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 8220 mov     ax, [bp+var_28] ;~ 0613:01C4
cs=0x613;eip=0x0001c7; 	X(SUB(*(dw*)(raddr(ss,bp+var_26)), ax));	// 8221 sub     [bp+var_26], ax ;~ 0613:01C7
cs=0x613;eip=0x0001ca; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x0FFFF));	// 8222 cmp     [bp+var_A], 0FFFFh ;~ 0613:01CA
cs=0x613;eip=0x0001ce; 	R(JZ(loc_148e3));	// 8223 jz      short loc_148E3 ;~ 0613:01CE
cs=0x613;eip=0x0001d0; 	R(JMP(loc_14a6e));	// 8224 jmp     loc_14A6E ;~ 0613:01D0
loc_148e3:
	// 4806 
cs=0x613;eip=0x0001d3; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), 0));	// 8228 mov     [bp+var_24], 0 ;~ 0613:01D3
cs=0x613;eip=0x0001d8; 	R(JMP(loc_14a74));	// 8229 jmp     loc_14A74 ;~ 0613:01D8
loc_148ec:
	// 4807 
cs=0x613;eip=0x0001dc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_34))));	// 8234 mov     ax, [bp+var_34] ;~ 0613:01DC
cs=0x613;eip=0x0001df; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_28))));	// 8235 sub     ax, [bp+var_28] ;~ 0613:01DF
cs=0x613;eip=0x0001e2; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), ax));	// 8236 mov     [bp+var_26], ax ;~ 0613:01E2
cs=0x613;eip=0x0001e5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3e))));	// 8237 mov     ax, [bp+var_3E] ;~ 0613:01E5
cs=0x613;eip=0x0001e8; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2a))));	// 8238 sub     ax, [bp+var_2A] ;~ 0613:01E8
cs=0x613;eip=0x0001eb; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 8239 mov     [bp+var_24], ax ;~ 0613:01EB
cs=0x613;eip=0x0001ee; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_40))));	// 8240 mov     ax, [bp+var_40] ;~ 0613:01EE
cs=0x613;eip=0x0001f1; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_36))));	// 8241 sub     ax, [bp+var_36] ;~ 0613:01F1
cs=0x613;eip=0x0001f4; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 8242 mov     [bp+var_22], ax ;~ 0613:01F4
cs=0x613;eip=0x0001f7; 	T(ax = bp+var_1c);	// 8243 lea     ax, [bp+var_1C] ;~ 0613:01F7
cs=0x613;eip=0x0001fa; 	X(PUSH(ax));	// 8244 push    ax ;~ 0613:01FA
cs=0x613;eip=0x0001fb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 8245 push    [bp+var_16] ;~ 0613:01FB
cs=0x613;eip=0x0001fe; 	T(ax = bp+var_26);	// 8246 lea     ax, [bp+var_26] ;~ 0613:01FE
cs=0x613;eip=0x000201; 	X(PUSH(ax));	// 8247 push    ax ;~ 0613:0201
cs=0x613;eip=0x000202; 	R(CALLF(mat_mul_vector,0));	// 8248 call    mat_mul_vector ;~ 0613:0202
cs=0x613;eip=0x000207; 	T(ADD(sp, 6));	// 8249 add     sp, 6 ;~ 0613:0207
cs=0x613;eip=0x00020a; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), 0x5A));	// 8250 cmp     [bp+var_1A], 5Ah ; 'Z' ;~ 0613:020A
cs=0x613;eip=0x00020e; 	R(JG(loc_148ba));	// 8251 jg      short loc_148BA ;~ 0613:020E
cs=0x613;eip=0x000210; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), 0));	// 8252 cmp     [bp+var_1C], 0 ;~ 0613:0210
cs=0x613;eip=0x000214; 	R(JGE(loc_1492e));	// 8253 jge     short loc_1492E ;~ 0613:0214
cs=0x613;eip=0x000216; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 8254 mov     ax, [bp+var_1C] ;~ 0613:0216
cs=0x613;eip=0x000219; 	T(NEG(ax));	// 8255 neg     ax ;~ 0613:0219
cs=0x613;eip=0x00021b; 	R(JMP(loc_14931));	// 8256 jmp     short loc_14931 ;~ 0613:021B
loc_1492e:
	// 4808 
cs=0x613;eip=0x00021e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 8261 mov     ax, [bp+var_1C] ;~ 0613:021E
loc_14931:
	// 4809 
cs=0x613;eip=0x000221; 	T(CMP(ax, 0x0B4));	// 8264 cmp     ax, 0B4h ; '´' ;~ 0613:0221
cs=0x613;eip=0x000224; 	R(JG(loc_148ba));	// 8265 jg      short loc_148BA ;~ 0613:0224
cs=0x613;eip=0x000226; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x258));	// 8266 cmp     [bp+var_18], 258h ;~ 0613:0226
cs=0x613;eip=0x00022b; 	R(JLE(loc_14940));	// 8267 jle     short loc_14940 ;~ 0613:022B
cs=0x613;eip=0x00022d; 	R(JMP(loc_148ba));	// 8268 jmp     loc_148BA ;~ 0613:022D
loc_14940:
	// 4810 
cs=0x613;eip=0x000230; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF4C));	// 8272 cmp     [bp+var_18], 0FF4Ch ;~ 0613:0230
cs=0x613;eip=0x000235; 	R(JGE(loc_1494a));	// 8273 jge     short loc_1494A ;~ 0613:0235
cs=0x613;eip=0x000237; 	R(JMP(loc_148ba));	// 8274 jmp     loc_148BA ;~ 0613:0237
loc_1494a:
	// 4811 
cs=0x613;eip=0x00023a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_34))));	// 8278 mov     ax, [bp+var_34] ;~ 0613:023A
cs=0x613;eip=0x00023d; 	T(SUB(ax, word_4475a));	// 8279 sub     ax, word_4475A ;~ 0613:023D
cs=0x613;eip=0x000241; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), ax));	// 8280 mov     [bp+var_26], ax ;~ 0613:0241
cs=0x613;eip=0x000244; 	T(CMP(word_4475c, 0x0FFFF));	// 8281 cmp     word_4475C, 0FFFFh ;~ 0613:0244
cs=0x613;eip=0x000249; 	R(JNZ(loc_14962));	// 8282 jnz     short loc_14962 ;~ 0613:0249
cs=0x613;eip=0x00024b; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), 0));	// 8283 mov     [bp+var_24], 0 ;~ 0613:024B
cs=0x613;eip=0x000250; 	R(JMP(loc_1496c));	// 8284 jmp     short loc_1496C ;~ 0613:0250
loc_14962:
	// 4812 
cs=0x613;eip=0x000252; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3e))));	// 8288 mov     ax, [bp+var_3E] ;~ 0613:0252
cs=0x613;eip=0x000255; 	T(SUB(ax, word_4475c));	// 8289 sub     ax, word_4475C ;~ 0613:0255
cs=0x613;eip=0x000259; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 8290 mov     [bp+var_24], ax ;~ 0613:0259
loc_1496c:
	// 4813 
cs=0x613;eip=0x00025c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_40))));	// 8293 mov     ax, [bp+var_40] ;~ 0613:025C
cs=0x613;eip=0x00025f; 	T(SUB(ax, word_4475e));	// 8294 sub     ax, word_4475E ;~ 0613:025F
cs=0x613;eip=0x000263; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 8295 mov     [bp+var_22], ax ;~ 0613:0263
cs=0x613;eip=0x000266; 	T(ax = bp+var_6);	// 8296 lea     ax, [bp+var_6] ;~ 0613:0266
cs=0x613;eip=0x000269; 	X(PUSH(ax));	// 8297 push    ax ;~ 0613:0269
cs=0x613;eip=0x00026a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 8298 push    [bp+var_16] ;~ 0613:026A
cs=0x613;eip=0x00026d; 	T(ax = bp+var_26);	// 8299 lea     ax, [bp+var_26] ;~ 0613:026D
cs=0x613;eip=0x000270; 	X(PUSH(ax));	// 8300 push    ax ;~ 0613:0270
cs=0x613;eip=0x000271; 	R(CALLF(mat_mul_vector,0));	// 8301 call    mat_mul_vector ;~ 0613:0271
cs=0x613;eip=0x000276; 	T(ADD(sp, 6));	// 8302 add     sp, 6 ;~ 0613:0276
cs=0x613;eip=0x000279; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0));	// 8303 cmp     [bp+var_6], 0 ;~ 0613:0279
cs=0x613;eip=0x00027d; 	R(JGE(loc_149fe));	// 8304 jge     short loc_149FE ;~ 0613:027D
cs=0x613;eip=0x00027f; 	T(MOV(ax, word_44766));	// 8305 mov     ax, word_44766 ;~ 0613:027F
cs=0x613;eip=0x000282; 	T(CWD);	// 8306 cwd ;~ 0613:0282
cs=0x613;eip=0x000283; 	T(MOV(cx, ax));	// 8307 mov     cx, ax ;~ 0613:0283
cs=0x613;eip=0x000285; 	T(MOV(ax, word_4475a));	// 8308 mov     ax, word_4475A ;~ 0613:0285
cs=0x613;eip=0x000288; 	T(MOV(bx, dx));	// 8309 mov     bx, dx ;~ 0613:0288
cs=0x613;eip=0x00028a; 	T(CWD);	// 8310 cwd ;~ 0613:028A
cs=0x613;eip=0x00028b; 	T(ADD(ax, cx));	// 8311 add     ax, cx ;~ 0613:028B
cs=0x613;eip=0x00028d; 	T(ADC(dx, bx));	// 8312 adc     dx, bx ;~ 0613:028D
cs=0x613;eip=0x00028f; 	T(SAR(dx, 1));	// 8313 sar     dx, 1 ;~ 0613:028F
cs=0x613;eip=0x000291; 	T(RCR(ax, 1));	// 8314 rcr     ax, 1 ;~ 0613:0291
cs=0x613;eip=0x000293; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 8315 mov     [bp+var_C], ax ;~ 0613:0293
cs=0x613;eip=0x000296; 	T(CMP(word_4475c, 0x0FFFF));	// 8316 cmp     word_4475C, 0FFFFh ;~ 0613:0296
cs=0x613;eip=0x00029b; 	R(JNZ(loc_149b4));	// 8317 jnz     short loc_149B4 ;~ 0613:029B
cs=0x613;eip=0x00029d; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x0FFFF));	// 8318 mov     [bp+var_A], 0FFFFh ;~ 0613:029D
cs=0x613;eip=0x0002a2; 	R(JMP(loc_149cb));	// 8319 jmp     short loc_149CB ;~ 0613:02A2
loc_149b4:
	// 4814 
cs=0x613;eip=0x0002a4; 	T(MOV(ax, word_44768));	// 8323 mov     ax, word_44768 ;~ 0613:02A4
cs=0x613;eip=0x0002a7; 	T(CWD);	// 8324 cwd ;~ 0613:02A7
cs=0x613;eip=0x0002a8; 	T(MOV(cx, ax));	// 8325 mov     cx, ax ;~ 0613:02A8
cs=0x613;eip=0x0002aa; 	T(MOV(ax, word_4475c));	// 8326 mov     ax, word_4475C ;~ 0613:02AA
cs=0x613;eip=0x0002ad; 	T(MOV(bx, dx));	// 8327 mov     bx, dx ;~ 0613:02AD
cs=0x613;eip=0x0002af; 	T(CWD);	// 8328 cwd ;~ 0613:02AF
cs=0x613;eip=0x0002b0; 	T(ADD(ax, cx));	// 8329 add     ax, cx ;~ 0613:02B0
cs=0x613;eip=0x0002b2; 	T(ADC(dx, bx));	// 8330 adc     dx, bx ;~ 0613:02B2
cs=0x613;eip=0x0002b4; 	T(SAR(dx, 1));	// 8331 sar     dx, 1 ;~ 0613:02B4
cs=0x613;eip=0x0002b6; 	T(RCR(ax, 1));	// 8332 rcr     ax, 1 ;~ 0613:02B6
cs=0x613;eip=0x0002b8; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 8333 mov     [bp+var_A], ax ;~ 0613:02B8
loc_149cb:
	// 4815 
cs=0x613;eip=0x0002bb; 	T(MOV(ax, word_4476a));	// 8336 mov     ax, word_4476A ;~ 0613:02BB
cs=0x613;eip=0x0002be; 	T(CWD);	// 8337 cwd ;~ 0613:02BE
cs=0x613;eip=0x0002bf; 	T(MOV(cx, ax));	// 8338 mov     cx, ax ;~ 0613:02BF
cs=0x613;eip=0x0002c1; 	T(MOV(ax, word_4475e));	// 8339 mov     ax, word_4475E ;~ 0613:02C1
cs=0x613;eip=0x0002c4; 	T(MOV(bx, dx));	// 8340 mov     bx, dx ;~ 0613:02C4
cs=0x613;eip=0x0002c6; 	T(CWD);	// 8341 cwd ;~ 0613:02C6
cs=0x613;eip=0x0002c7; 	T(ADD(ax, cx));	// 8342 add     ax, cx ;~ 0613:02C7
cs=0x613;eip=0x0002c9; 	T(ADC(dx, bx));	// 8343 adc     dx, bx ;~ 0613:02C9
cs=0x613;eip=0x0002cb; 	T(SAR(dx, 1));	// 8344 sar     dx, 1 ;~ 0613:02CB
cs=0x613;eip=0x0002cd; 	T(RCR(ax, 1));	// 8345 rcr     ax, 1 ;~ 0613:02CD
cs=0x613;eip=0x0002cf; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 8346 mov     [bp+var_8], ax ;~ 0613:02CF
cs=0x613;eip=0x0002d2; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FFB2));	// 8347 cmp     [bp+var_18], 0FFB2h ;~ 0613:02D2
cs=0x613;eip=0x0002d6; 	R(JG(loc_149eb));	// 8348 jg      short loc_149EB ;~ 0613:02D6
cs=0x613;eip=0x0002d8; 	R(JMP(loc_148c7));	// 8349 jmp     loc_148C7 ;~ 0613:02D8
loc_149eb:
	// 4816 
cs=0x613;eip=0x0002db; 	T(CMP(byte_446af, 0));	// 8353 cmp     byte_446AF, 0 ;~ 0613:02DB
cs=0x613;eip=0x0002e0; 	R(JZ(loc_149f5));	// 8354 jz      short loc_149F5 ;~ 0613:02E0
cs=0x613;eip=0x0002e2; 	R(JMP(loc_148c7));	// 8355 jmp     loc_148C7 ;~ 0613:02E2
loc_149f5:
	// 4817 
cs=0x613;eip=0x0002e5; 	X(MOV(byte_448f2, 2));	// 8359 mov     byte_448F2, 2 ;~ 0613:02E5
cs=0x613;eip=0x0002ea; 	R(JMP(loc_148c7));	// 8360 jmp     loc_148C7 ;~ 0613:02EA
loc_149fe:
	// 4818 
cs=0x613;eip=0x0002ee; 	T(MOV(ax, word_44760));	// 8365 mov     ax, word_44760 ;~ 0613:02EE
cs=0x613;eip=0x0002f1; 	T(CWD);	// 8366 cwd ;~ 0613:02F1
cs=0x613;eip=0x0002f2; 	T(MOV(cx, ax));	// 8367 mov     cx, ax ;~ 0613:02F2
cs=0x613;eip=0x0002f4; 	T(MOV(ax, word_4475a));	// 8368 mov     ax, word_4475A ;~ 0613:02F4
cs=0x613;eip=0x0002f7; 	T(MOV(bx, dx));	// 8369 mov     bx, dx ;~ 0613:02F7
cs=0x613;eip=0x0002f9; 	T(CWD);	// 8370 cwd ;~ 0613:02F9
cs=0x613;eip=0x0002fa; 	T(ADD(ax, cx));	// 8371 add     ax, cx ;~ 0613:02FA
cs=0x613;eip=0x0002fc; 	T(ADC(dx, bx));	// 8372 adc     dx, bx ;~ 0613:02FC
cs=0x613;eip=0x0002fe; 	T(SAR(dx, 1));	// 8373 sar     dx, 1 ;~ 0613:02FE
cs=0x613;eip=0x000300; 	T(RCR(ax, 1));	// 8374 rcr     ax, 1 ;~ 0613:0300
cs=0x613;eip=0x000302; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 8375 mov     [bp+var_C], ax ;~ 0613:0302
cs=0x613;eip=0x000305; 	T(CMP(word_4475c, 0x0FFFF));	// 8376 cmp     word_4475C, 0FFFFh ;~ 0613:0305
cs=0x613;eip=0x00030a; 	R(JNZ(loc_14a24));	// 8377 jnz     short loc_14A24 ;~ 0613:030A
cs=0x613;eip=0x00030c; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x0FFFF));	// 8378 mov     [bp+var_A], 0FFFFh ;~ 0613:030C
cs=0x613;eip=0x000311; 	R(JMP(loc_14a3b));	// 8379 jmp     short loc_14A3B ;~ 0613:0311
loc_14a24:
	// 4819 
cs=0x613;eip=0x000314; 	T(MOV(ax, word_44762));	// 8384 mov     ax, word_44762 ;~ 0613:0314
cs=0x613;eip=0x000317; 	T(CWD);	// 8385 cwd ;~ 0613:0317
cs=0x613;eip=0x000318; 	T(MOV(cx, ax));	// 8386 mov     cx, ax ;~ 0613:0318
cs=0x613;eip=0x00031a; 	T(MOV(ax, word_4475c));	// 8387 mov     ax, word_4475C ;~ 0613:031A
cs=0x613;eip=0x00031d; 	T(MOV(bx, dx));	// 8388 mov     bx, dx ;~ 0613:031D
cs=0x613;eip=0x00031f; 	T(CWD);	// 8389 cwd ;~ 0613:031F
cs=0x613;eip=0x000320; 	T(ADD(ax, cx));	// 8390 add     ax, cx ;~ 0613:0320
cs=0x613;eip=0x000322; 	T(ADC(dx, bx));	// 8391 adc     dx, bx ;~ 0613:0322
cs=0x613;eip=0x000324; 	T(SAR(dx, 1));	// 8392 sar     dx, 1 ;~ 0613:0324
cs=0x613;eip=0x000326; 	T(RCR(ax, 1));	// 8393 rcr     ax, 1 ;~ 0613:0326
cs=0x613;eip=0x000328; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 8394 mov     [bp+var_A], ax ;~ 0613:0328
loc_14a3b:
	// 4820 
cs=0x613;eip=0x00032b; 	T(MOV(ax, word_44764));	// 8397 mov     ax, word_44764 ;~ 0613:032B
cs=0x613;eip=0x00032e; 	T(CWD);	// 8398 cwd ;~ 0613:032E
cs=0x613;eip=0x00032f; 	T(MOV(cx, ax));	// 8399 mov     cx, ax ;~ 0613:032F
cs=0x613;eip=0x000331; 	T(MOV(ax, word_4475e));	// 8400 mov     ax, word_4475E ;~ 0613:0331
cs=0x613;eip=0x000334; 	T(MOV(bx, dx));	// 8401 mov     bx, dx ;~ 0613:0334
cs=0x613;eip=0x000336; 	T(CWD);	// 8402 cwd ;~ 0613:0336
cs=0x613;eip=0x000337; 	T(ADD(ax, cx));	// 8403 add     ax, cx ;~ 0613:0337
cs=0x613;eip=0x000339; 	T(ADC(dx, bx));	// 8404 adc     dx, bx ;~ 0613:0339
cs=0x613;eip=0x00033b; 	T(SAR(dx, 1));	// 8405 sar     dx, 1 ;~ 0613:033B
cs=0x613;eip=0x00033d; 	T(RCR(ax, 1));	// 8406 rcr     ax, 1 ;~ 0613:033D
cs=0x613;eip=0x00033f; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 8407 mov     [bp+var_8], ax ;~ 0613:033F
cs=0x613;eip=0x000342; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FFB2));	// 8408 cmp     [bp+var_18], 0FFB2h ;~ 0613:0342
cs=0x613;eip=0x000346; 	R(JG(loc_14a5b));	// 8409 jg      short loc_14A5B ;~ 0613:0346
cs=0x613;eip=0x000348; 	R(JMP(loc_148c7));	// 8410 jmp     loc_148C7 ;~ 0613:0348
loc_14a5b:
	// 4821 
cs=0x613;eip=0x00034b; 	T(CMP(byte_446af, 0));	// 8414 cmp     byte_446AF, 0 ;~ 0613:034B
cs=0x613;eip=0x000350; 	R(JZ(loc_14a65));	// 8415 jz      short loc_14A65 ;~ 0613:0350
cs=0x613;eip=0x000352; 	R(JMP(loc_148c7));	// 8416 jmp     loc_148C7 ;~ 0613:0352
loc_14a65:
	// 4822 
cs=0x613;eip=0x000355; 	X(MOV(byte_448f2, 1));	// 8420 mov     byte_448F2, 1 ;~ 0613:0355
cs=0x613;eip=0x00035a; 	R(JMP(loc_148c7));	// 8421 jmp     loc_148C7 ;~ 0613:035A
loc_14a6e:
	// 4823 
cs=0x613;eip=0x00035e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2a))));	// 8426 mov     ax, [bp+var_2A] ;~ 0613:035E
cs=0x613;eip=0x000361; 	X(SUB(*(dw*)(raddr(ss,bp+var_24)), ax));	// 8427 sub     [bp+var_24], ax ;~ 0613:0361
loc_14a74:
	// 4824 
cs=0x613;eip=0x000364; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_36))));	// 8430 mov     ax, [bp+var_36] ;~ 0613:0364
cs=0x613;eip=0x000367; 	X(SUB(*(dw*)(raddr(ss,bp+var_22)), ax));	// 8431 sub     [bp+var_22], ax ;~ 0613:0367
cs=0x613;eip=0x00036a; 	T(ax = bp+var_3c);	// 8432 lea     ax, [bp+var_3C] ;~ 0613:036A
cs=0x613;eip=0x00036d; 	X(PUSH(ax));	// 8433 push    ax ;~ 0613:036D
cs=0x613;eip=0x00036e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 8434 push    [bp+var_16] ;~ 0613:036E
cs=0x613;eip=0x000371; 	T(ax = bp+var_26);	// 8435 lea     ax, [bp+var_26] ;~ 0613:0371
cs=0x613;eip=0x000374; 	X(PUSH(ax));	// 8436 push    ax ;~ 0613:0374
cs=0x613;eip=0x000375; 	R(CALLF(mat_mul_vector,0));	// 8437 call    mat_mul_vector ;~ 0613:0375
cs=0x613;eip=0x00037a; 	T(ADD(sp, 6));	// 8438 add     sp, 6 ;~ 0613:037A
cs=0x613;eip=0x00037d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 8439 push    [bp+var_38] ;~ 0613:037D
cs=0x613;eip=0x000380; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3c))));	// 8440 push    [bp+var_3C] ;~ 0613:0380
cs=0x613;eip=0x000383; 	R(CALLF(polarangle,0));	// 8441 call    polarAngle ;~ 0613:0383
cs=0x613;eip=0x000388; 	T(ADD(sp, 4));	// 8442 add     sp, 4 ;~ 0613:0388
cs=0x613;eip=0x00038b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 8443 mov     [bp+var_2C], ax ;~ 0613:038B
cs=0x613;eip=0x00038e; 	T(CMP(byte_4477d, 0));	// 8444 cmp     byte_4477D, 0 ;~ 0613:038E
cs=0x613;eip=0x000393; 	R(JNZ(loc_14b03));	// 8445 jnz     short loc_14B03 ;~ 0613:0393
cs=0x613;eip=0x000395; 	T(OR(ax, ax));	// 8446 or      ax, ax ;~ 0613:0395
cs=0x613;eip=0x000397; 	R(JGE(loc_14aae));	// 8447 jge     short loc_14AAE ;~ 0613:0397
cs=0x613;eip=0x000399; 	T(NEG(ax));	// 8448 neg     ax ;~ 0613:0399
cs=0x613;eip=0x00039b; 	R(JMP(loc_14ab1));	// 8449 jmp     short loc_14AB1 ;~ 0613:039B
loc_14aae:
	// 4825 
cs=0x613;eip=0x00039e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 8454 mov     ax, [bp+var_2C] ;~ 0613:039E
loc_14ab1:
	// 4826 
cs=0x613;eip=0x0003a1; 	T(CMP(ax, 0x100));	// 8457 cmp     ax, 100h ;~ 0613:03A1
cs=0x613;eip=0x0003a4; 	R(JLE(loc_14b03));	// 8458 jle     short loc_14B03 ;~ 0613:03A4
cs=0x613;eip=0x0003a6; 	T(MOV(ax, offset(dseg,byte_4488d)));	// 8459 mov     ax, offset byte_4488D ;~ 0613:03A6
cs=0x613;eip=0x0003a9; 	X(PUSH(ax));	// 8460 push    ax ;~ 0613:03A9
cs=0x613;eip=0x0003aa; 	T(MOV(al, byte_44784));	// 8461 mov     al, byte_44784 ;~ 0613:03AA
cs=0x613;eip=0x0003ad; 	X(INC(byte_44784));	// 8462 inc     byte_44784 ;~ 0613:03AD
cs=0x613;eip=0x0003b1; 	T(SUB(ah, ah));	// 8463 sub     ah, ah ;~ 0613:03B1
cs=0x613;eip=0x0003b3; 	X(PUSH(ax));	// 8464 push    ax ;~ 0613:03B3
cs=0x613;eip=0x0003b4; 	T(MOV(ax, offset(dseg,word_4475a)));	// 8465 mov     ax, offset word_4475A ;~ 0613:03B4
cs=0x613;eip=0x0003b7; 	X(PUSH(ax));	// 8466 push    ax ;~ 0613:03B7
cs=0x613;eip=0x0003b8; 	T(MOV(bx, word_44700));	// 8467 mov     bx, word_44700 ;~ 0613:03B8
cs=0x613;eip=0x0003bc; 	T(SHL(bx, 1));	// 8468 shl     bx, 1 ;~ 0613:03BC
cs=0x613;eip=0x0003be; 	T(LES(di, trackdata3));	// 8469 les     di, trackdata3 ;~ 0613:03BE
cs=0x613;eip=0x0003c2; 	X(PUSH(*(dw*)(raddr(es,bx+di))));	// 8470 push    word ptr es:[bx+di] ;~ 0613:03C2
cs=0x613;eip=0x0003c5; 	X(PUSH(cs));	// 8471 push    cs ;~ 0613:03C5
cs=0x613;eip=0x0003c6; 	R(CALL(sub_18d60,0));	// 8472 call    near ptr sub_18D60 ;~ 0613:03C6
cs=0x613;eip=0x0003c9; 	T(ADD(sp, 8));	// 8473 add     sp, 8 ;~ 0613:03C9
cs=0x613;eip=0x0003cc; 	T(OR(al, al));	// 8474 or      al, al ;~ 0613:03CC
cs=0x613;eip=0x0003ce; 	R(JZ(loc_14b03));	// 8475 jz      short loc_14B03 ;~ 0613:03CE
cs=0x613;eip=0x0003d0; 	X(INC(word_44700));	// 8476 inc     word_44700 ;~ 0613:03D0
cs=0x613;eip=0x0003d4; 	T(MOV(bx, word_44700));	// 8477 mov     bx, word_44700 ;~ 0613:03D4
cs=0x613;eip=0x0003d8; 	T(SHL(bx, 1));	// 8478 shl     bx, 1 ;~ 0613:03D8
cs=0x613;eip=0x0003da; 	T(LES(di, trackdata3));	// 8479 les     di, trackdata3 ;~ 0613:03DA
cs=0x613;eip=0x0003de; 	T(CMP(*(dw*)(raddr(es,bx+di)), 0));	// 8480 cmp     word ptr es:[bx+di], 0 ;~ 0613:03DE
cs=0x613;eip=0x0003e2; 	R(JNZ(loc_14afe));	// 8481 jnz     short loc_14AFE ;~ 0613:03E2
cs=0x613;eip=0x0003e4; 	X(INC(byte_44783));	// 8482 inc     byte_44783 ;~ 0613:03E4
cs=0x613;eip=0x0003e8; 	X(MOV(word_44700, 0));	// 8483 mov     word_44700, 0 ;~ 0613:03E8
loc_14afe:
	// 4827 
cs=0x613;eip=0x0003ee; 	X(MOV(byte_44784, 0));	// 8486 mov     byte_44784, 0 ;~ 0613:03EE
loc_14b03:
	// 4828 
cs=0x613;eip=0x0003f3; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x41));	// 8490 cmp     [bp+var_2C], 41h ; 'A' ;~ 0613:03F3
cs=0x613;eip=0x0003f7; 	R(JLE(loc_14b1e));	// 8491 jle     short loc_14B1E ;~ 0613:03F7
cs=0x613;eip=0x0003f9; 	T(CMP(*(raddr(ss,bp+var_20)), 0));	// 8492 cmp     [bp+var_20], 0 ;~ 0613:03F9
cs=0x613;eip=0x0003fd; 	R(JNZ(loc_14b16));	// 8493 jnz     short loc_14B16 ;~ 0613:03FD
loc_14b0f:
	// 4829 
cs=0x613;eip=0x0003ff; 	X(MOV(*(raddr(ss,bp+var_20)), 1));	// 8496 mov     [bp+var_20], 1 ;~ 0613:03FF
cs=0x613;eip=0x000403; 	R(JMP(loc_14866));	// 8497 jmp     loc_14866 ;~ 0613:0403
loc_14b16:
	// 4830 
cs=0x613;eip=0x000406; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), 0x41));	// 8501 mov     [bp+var_2C], 41h ; 'A' ;~ 0613:0406
cs=0x613;eip=0x00040b; 	R(JMP(loc_14b2f));	// 8502 jmp     short loc_14B2F ;~ 0613:040B
loc_14b1e:
	// 4831 
cs=0x613;eip=0x00040e; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FFBF));	// 8507 cmp     [bp+var_2C], 0FFBFh ;~ 0613:040E
cs=0x613;eip=0x000412; 	R(JGE(loc_14b2f));	// 8508 jge     short loc_14B2F ;~ 0613:0412
cs=0x613;eip=0x000414; 	T(CMP(*(raddr(ss,bp+var_20)), 0));	// 8509 cmp     [bp+var_20], 0 ;~ 0613:0414
cs=0x613;eip=0x000418; 	R(JZ(loc_14b0f));	// 8510 jz      short loc_14B0F ;~ 0613:0418
cs=0x613;eip=0x00041a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), 0x0FFBF));	// 8511 mov     [bp+var_2C], 0FFBFh ;~ 0613:041A
loc_14b2f:
	// 4832 
cs=0x613;eip=0x00041f; 	T(CMP(byte_44775, 0));	// 8515 cmp     byte_44775, 0 ;~ 0613:041F
cs=0x613;eip=0x000424; 	R(JNZ(loc_14b3b));	// 8516 jnz     short loc_14B3B ;~ 0613:0424
cs=0x613;eip=0x000426; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 8517 mov     [bp+var_2C], 0 ;~ 0613:0426
loc_14b3b:
	// 4833 
cs=0x613;eip=0x00042b; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2c))));	// 8520 mov     si, [bp+var_2C] ;~ 0613:042B
cs=0x613;eip=0x00042e; 	T(SUB(si, word_446d6));	// 8521 sub     si, word_446D6 ;~ 0613:042E
cs=0x613;eip=0x000432; 	R(JNS(loc_14b4a));	// 8522 jns     short loc_14B4A ;~ 0613:0432
cs=0x613;eip=0x000434; 	T(MOV(ax, si));	// 8523 mov     ax, si ;~ 0613:0434
cs=0x613;eip=0x000436; 	T(NEG(ax));	// 8524 neg     ax ;~ 0613:0436
cs=0x613;eip=0x000438; 	R(JMP(loc_14b4c));	// 8525 jmp     short loc_14B4C ;~ 0613:0438
loc_14b4a:
	// 4834 
cs=0x613;eip=0x00043a; 	T(MOV(ax, si));	// 8529 mov     ax, si ;~ 0613:043A
loc_14b4c:
	// 4835 
cs=0x613;eip=0x00043c; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_14))));	// 8532 cmp     ax, [bp+var_14] ;~ 0613:043C
cs=0x613;eip=0x00043f; 	R(JLE(loc_14b6c));	// 8533 jle     short loc_14B6C ;~ 0613:043F
cs=0x613;eip=0x000441; 	T(MOV(ax, word_446d6));	// 8534 mov     ax, word_446D6 ;~ 0613:0441
cs=0x613;eip=0x000444; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 8535 cmp     [bp+var_2C], ax ;~ 0613:0444
cs=0x613;eip=0x000447; 	R(JGE(loc_14b62));	// 8536 jge     short loc_14B62 ;~ 0613:0447
cs=0x613;eip=0x000449; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 8537 mov     ax, [bp+var_14] ;~ 0613:0449
cs=0x613;eip=0x00044c; 	X(SUB(word_446d6, ax));	// 8538 sub     word_446D6, ax ;~ 0613:044C
cs=0x613;eip=0x000450; 	R(JMP(loc_14b72));	// 8539 jmp     short loc_14B72 ;~ 0613:0450
loc_14b62:
	// 4836 
cs=0x613;eip=0x000452; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 8543 mov     ax, [bp+var_14] ;~ 0613:0452
cs=0x613;eip=0x000455; 	X(ADD(word_446d6, ax));	// 8544 add     word_446D6, ax ;~ 0613:0455
cs=0x613;eip=0x000459; 	R(JMP(loc_14b72));	// 8545 jmp     short loc_14B72 ;~ 0613:0459
loc_14b6c:
	// 4837 
cs=0x613;eip=0x00045c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 8550 mov     ax, [bp+var_2C] ;~ 0613:045C
cs=0x613;eip=0x00045f; 	X(MOV(word_446d6, ax));	// 8551 mov     word_446D6, ax ;~ 0613:045F
loc_14b72:
	// 4838 
cs=0x613;eip=0x000462; 	X(MOV(*(raddr(ss,bp+var_e)), 0));	// 8555 mov     [bp+var_E], 0 ;~ 0613:0462
cs=0x613;eip=0x000466; 	T(CMP(byte_44776, 0));	// 8556 cmp     byte_44776, 0 ;~ 0613:0466
cs=0x613;eip=0x00046b; 	R(JZ(loc_14bfa));	// 8557 jz      short loc_14BFA ;~ 0613:046B
cs=0x613;eip=0x00046d; 	T(CMP(byte_4477f, 0));	// 8558 cmp     byte_4477F, 0 ;~ 0613:046D
cs=0x613;eip=0x000472; 	R(JNZ(loc_14bf6));	// 8559 jnz     short loc_14BF6 ;~ 0613:0472
cs=0x613;eip=0x000474; 	T(CMP(word_446ec, 0));	// 8560 cmp     word_446EC, 0 ;~ 0613:0474
cs=0x613;eip=0x000479; 	R(JZ(loc_14bb6));	// 8561 jz      short loc_14BB6 ;~ 0613:0479
cs=0x613;eip=0x00047b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 8562 mov     ax, [bp+var_10] ;~ 0613:047B
cs=0x613;eip=0x00047e; 	T(MOV(cl, 9));	// 8563 mov     cl, 9 ;~ 0613:047E
cs=0x613;eip=0x000480; 	T(SHL(ax, cl));	// 8564 shl     ax, cl ;~ 0613:0480
cs=0x613;eip=0x000482; 	T(CMP(ax, word_446e2));	// 8565 cmp     ax, word_446E2 ;~ 0613:0482
cs=0x613;eip=0x000486; 	R(JBE(loc_14ba8));	// 8566 jbe     short loc_14BA8 ;~ 0613:0486
cs=0x613;eip=0x000488; 	X(MOV(word_446e2, 0));	// 8567 mov     word_446E2, 0 ;~ 0613:0488
cs=0x613;eip=0x00048e; 	X(MOV(word_446ec, 0));	// 8568 mov     word_446EC, 0 ;~ 0613:048E
cs=0x613;eip=0x000494; 	R(JMP(loc_14bfa));	// 8569 jmp     short loc_14BFA ;~ 0613:0494
loc_14ba8:
	// 4839 
cs=0x613;eip=0x000498; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 8575 mov     ax, [bp+var_10] ;~ 0613:0498
cs=0x613;eip=0x00049b; 	T(MOV(cl, 9));	// 8576 mov     cl, 9 ;~ 0613:049B
cs=0x613;eip=0x00049d; 	T(SHL(ax, cl));	// 8577 shl     ax, cl ;~ 0613:049D
cs=0x613;eip=0x00049f; 	X(SUB(word_446e2, ax));	// 8578 sub     word_446E2, ax ;~ 0613:049F
cs=0x613;eip=0x0004a3; 	R(JMP(loc_14bfa));	// 8579 jmp     short loc_14BFA ;~ 0613:04A3
loc_14bb6:
	// 4840 
cs=0x613;eip=0x0004a6; 	T(MOV(ax, word_446fc));	// 8584 mov     ax, word_446FC ;~ 0613:04A6
cs=0x613;eip=0x0004a9; 	T(CMP(word_446fa, ax));	// 8585 cmp     word_446FA, ax ;~ 0613:04A9
cs=0x613;eip=0x0004ad; 	R(JG(loc_14bf6));	// 8586 jg      short loc_14BF6 ;~ 0613:04AD
cs=0x613;eip=0x0004af; 	T(CMP(byte_44889, 2));	// 8587 cmp     byte_44889, 2 ;~ 0613:04AF
cs=0x613;eip=0x0004b4; 	R(JNZ(loc_14bce));	// 8588 jnz     short loc_14BCE ;~ 0613:04B4
cs=0x613;eip=0x0004b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 0x4000));	// 8589 mov     [bp+var_12], 4000h ;~ 0613:04B6
cs=0x613;eip=0x0004bb; 	R(JMP(loc_14bd7));	// 8590 jmp     short loc_14BD7 ;~ 0613:04BB
loc_14bce:
	// 4841 
cs=0x613;eip=0x0004be; 	T(MOV(ah, byte_4488d));	// 8595 mov     ah, byte_4488D ;~ 0613:04BE
cs=0x613;eip=0x0004c2; 	T(SUB(al, al));	// 8596 sub     al, al ;~ 0613:04C2
cs=0x613;eip=0x0004c4; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 8597 mov     [bp+var_12], ax ;~ 0613:04C4
loc_14bd7:
	// 4842 
cs=0x613;eip=0x0004c7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 8600 mov     ax, [bp+var_12] ;~ 0613:04C7
cs=0x613;eip=0x0004ca; 	T(SUB(ax, 0x100));	// 8601 sub     ax, 100h ;~ 0613:04CA
cs=0x613;eip=0x0004cd; 	T(CMP(ax, word_446e0));	// 8602 cmp     ax, word_446E0 ;~ 0613:04CD
cs=0x613;eip=0x0004d1; 	R(JBE(loc_14bea));	// 8603 jbe     short loc_14BEA ;~ 0613:04D1
cs=0x613;eip=0x0004d3; 	X(MOV(*(raddr(ss,bp+var_e)), 1));	// 8604 mov     [bp+var_E], 1 ;~ 0613:04D3
cs=0x613;eip=0x0004d7; 	R(JMP(loc_14bfa));	// 8605 jmp     short loc_14BFA ;~ 0613:04D7
loc_14bea:
	// 4843 
cs=0x613;eip=0x0004da; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 8610 mov     ax, [bp+var_12] ;~ 0613:04DA
cs=0x613;eip=0x0004dd; 	T(ADD(ah, 3));	// 8611 add     ah, 3 ;~ 0613:04DD
cs=0x613;eip=0x0004e0; 	T(CMP(ax, word_446e0));	// 8612 cmp     ax, word_446E0 ;~ 0613:04E0
cs=0x613;eip=0x0004e4; 	R(JNC(loc_14bfa));	// 8613 jnb     short loc_14BFA ;~ 0613:04E4
loc_14bf6:
	// 4844 
cs=0x613;eip=0x0004e6; 	X(MOV(*(raddr(ss,bp+var_e)), 2));	// 8617 mov     [bp+var_E], 2 ;~ 0613:04E6
loc_14bfa:
	// 4845 
cs=0x613;eip=0x0004ea; 	T(MOV(ax, offset(dseg,simd_opponent)));	// 8621 mov     ax, offset simd_opponent ;~ 0613:04EA
cs=0x613;eip=0x0004ed; 	X(PUSH(ax));	// 8622 push    ax ;~ 0613:04ED
cs=0x613;eip=0x0004ee; 	T(MOV(ax, offset(dseg,word_446b6)));	// 8623 mov     ax, offset word_446B6 ;~ 0613:04EE
cs=0x613;eip=0x0004f1; 	X(PUSH(ax));	// 8624 push    ax ;~ 0613:04F1
cs=0x613;eip=0x0004f2; 	T(MOV(ax, 1));	// 8625 mov     ax, 1 ;~ 0613:04F2
cs=0x613;eip=0x0004f5; 	X(PUSH(ax));	// 8626 push    ax ;~ 0613:04F5
cs=0x613;eip=0x0004f6; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 8627 mov     al, [bp+var_E] ;~ 0613:04F6
cs=0x613;eip=0x0004f9; 	T(CBW);	// 8628 cbw ;~ 0613:04F9
cs=0x613;eip=0x0004fa; 	X(PUSH(ax));	// 8629 push    ax ;~ 0613:04FA
cs=0x613;eip=0x0004fb; 	X(PUSH(cs));	// 8630 push    cs ;~ 0613:04FB
cs=0x613;eip=0x0004fc; 	R(CALL(update_car_speed,0));	// 8631 call    near ptr update_car_speed ;~ 0613:04FC
cs=0x613;eip=0x0004ff; 	T(ADD(sp, 8));	// 8632 add     sp, 8 ;~ 0613:04FF
cs=0x613;eip=0x000502; 	T(SUB(ax, ax));	// 8633 sub     ax, ax ;~ 0613:0502
cs=0x613;eip=0x000504; 	X(PUSH(ax));	// 8634 push    ax ;~ 0613:0504
cs=0x613;eip=0x000505; 	T(MOV(ax, offset(dseg,simd_opponent)));	// 8635 mov     ax, offset simd_opponent ;~ 0613:0505
cs=0x613;eip=0x000508; 	X(PUSH(ax));	// 8636 push    ax ;~ 0613:0508
cs=0x613;eip=0x000509; 	T(MOV(ax, offset(dseg,word_446b6)));	// 8637 mov     ax, offset word_446B6 ;~ 0613:0509
cs=0x613;eip=0x00050c; 	X(PUSH(ax));	// 8638 push    ax ;~ 0613:050C
cs=0x613;eip=0x00050d; 	X(PUSH(cs));	// 8639 push    cs ;~ 0613:050D
cs=0x613;eip=0x00050e; 	R(CALL(update_grip,0));	// 8640 call    near ptr update_grip ;~ 0613:050E
cs=0x613;eip=0x000511; 	T(ADD(sp, 6));	// 8641 add     sp, 6 ;~ 0613:0511
cs=0x613;eip=0x000514; 	T(MOV(ax, 1));	// 8642 mov     ax, 1 ;~ 0613:0514
cs=0x613;eip=0x000517; 	X(PUSH(ax));	// 8643 push    ax ;~ 0613:0517
cs=0x613;eip=0x000518; 	T(MOV(ax, offset(dseg,simd_player)));	// 8644 mov     ax, offset simd_player ;~ 0613:0518
cs=0x613;eip=0x00051b; 	X(PUSH(ax));	// 8645 push    ax ;~ 0613:051B
cs=0x613;eip=0x00051c; 	T(MOV(ax, offset(dseg,word_445e6)));	// 8646 mov     ax, offset word_445E6 ;~ 0613:051C
cs=0x613;eip=0x00051f; 	X(PUSH(ax));	// 8647 push    ax ;~ 0613:051F
cs=0x613;eip=0x000520; 	T(MOV(ax, offset(dseg,simd_opponent)));	// 8648 mov     ax, offset simd_opponent ;~ 0613:0520
cs=0x613;eip=0x000523; 	X(PUSH(ax));	// 8649 push    ax ;~ 0613:0523
cs=0x613;eip=0x000524; 	T(MOV(ax, offset(dseg,word_446b6)));	// 8650 mov     ax, offset word_446B6 ;~ 0613:0524
cs=0x613;eip=0x000527; 	X(PUSH(ax));	// 8651 push    ax ;~ 0613:0527
cs=0x613;eip=0x000528; 	X(PUSH(cs));	// 8652 push    cs ;~ 0613:0528
cs=0x613;eip=0x000529; 	R(CALL(update_player_state,0));	// 8653 call    near ptr update_player_state ;~ 0613:0529
cs=0x613;eip=0x00052c; 	T(ADD(sp, 0x0A));	// 8654 add     sp, 0Ah ;~ 0613:052C
cs=0x613;eip=0x00052f; 	T(CMP(byte_4477f, 0));	// 8655 cmp     byte_4477F, 0 ;~ 0613:052F
cs=0x613;eip=0x000534; 	R(JZ(loc_14c49));	// 8656 jz      short loc_14C49 ;~ 0613:0534
cs=0x613;eip=0x000536; 	R(JMP(loc_14cd7));	// 8657 jmp     loc_14CD7 ;~ 0613:0536
loc_14c49:
	// 4846 
cs=0x613;eip=0x000539; 	X(PUSH(si));	// 8661 push    si ;~ 0613:0539
cs=0x613;eip=0x00053a; 	T(di = bp+var_26);	// 8662 lea     di, [bp+var_26] ;~ 0613:053A
cs=0x613;eip=0x00053d; 	T(MOV(si, offset(dseg,word_4475a)));	// 8663 mov     si, offset word_4475A ;~ 0613:053D
cs=0x613;eip=0x000540; 	X(PUSH(ss));	// 8664 push    ss ;~ 0613:0540
cs=0x613;eip=0x000541; 	X(POP(es));	// 8665 pop     es ;~ 0613:0541
cs=0x613;eip=0x000542; 	X(MOVSW);	// 8666 movsw ;~ 0613:0542
cs=0x613;eip=0x000543; 	X(MOVSW);	// 8667 movsw ;~ 0613:0543
cs=0x613;eip=0x000544; 	X(MOVSW);	// 8668 movsw ;~ 0613:0544
cs=0x613;eip=0x000545; 	X(POP(si));	// 8669 pop     si ;~ 0613:0545
cs=0x613;eip=0x000546; 	T(MOV(ax, word_446b6));	// 8670 mov     ax, word_446B6 ;~ 0613:0546
cs=0x613;eip=0x000549; 	T(MOV(dx, word_446b8));	// 8671 mov     dx, word_446B8 ;~ 0613:0549
cs=0x613;eip=0x00054d; 	T(MOV(cl, 6));	// 8672 mov     cl, 6 ;~ 0613:054D
loc_14c5f:
	// 4847 
cs=0x613;eip=0x00054f; 	T(SAR(dx, 1));	// 8675 sar     dx, 1 ;~ 0613:054F
cs=0x613;eip=0x000551; 	T(RCR(ax, 1));	// 8676 rcr     ax, 1 ;~ 0613:0551
cs=0x613;eip=0x000553; 	T(DEC(cl));	// 8677 dec     cl ;~ 0613:0553
cs=0x613;eip=0x000555; 	R(JNZ(loc_14c5f));	// 8678 jnz     short loc_14C5F ;~ 0613:0555
cs=0x613;eip=0x000557; 	X(SUB(*(dw*)(raddr(ss,bp+var_26)), ax));	// 8679 sub     [bp+var_26], ax ;~ 0613:0557
cs=0x613;eip=0x00055a; 	T(MOV(ax, word_446ba));	// 8680 mov     ax, word_446BA ;~ 0613:055A
cs=0x613;eip=0x00055d; 	T(MOV(dx, word_446bc));	// 8681 mov     dx, word_446BC ;~ 0613:055D
cs=0x613;eip=0x000561; 	T(MOV(cl, 6));	// 8682 mov     cl, 6 ;~ 0613:0561
loc_14c73:
	// 4848 
cs=0x613;eip=0x000563; 	T(SAR(dx, 1));	// 8685 sar     dx, 1 ;~ 0613:0563
cs=0x613;eip=0x000565; 	T(RCR(ax, 1));	// 8686 rcr     ax, 1 ;~ 0613:0565
cs=0x613;eip=0x000567; 	T(DEC(cl));	// 8687 dec     cl ;~ 0613:0567
cs=0x613;eip=0x000569; 	R(JNZ(loc_14c73));	// 8688 jnz     short loc_14C73 ;~ 0613:0569
cs=0x613;eip=0x00056b; 	X(SUB(*(dw*)(raddr(ss,bp+var_24)), ax));	// 8689 sub     [bp+var_24], ax ;~ 0613:056B
cs=0x613;eip=0x00056e; 	T(MOV(ax, word_446be));	// 8690 mov     ax, word_446BE ;~ 0613:056E
cs=0x613;eip=0x000571; 	T(MOV(dx, word_446c0));	// 8691 mov     dx, word_446C0 ;~ 0613:0571
cs=0x613;eip=0x000575; 	T(MOV(cl, 6));	// 8692 mov     cl, 6 ;~ 0613:0575
loc_14c87:
	// 4849 
cs=0x613;eip=0x000577; 	T(SAR(dx, 1));	// 8695 sar     dx, 1 ;~ 0613:0577
cs=0x613;eip=0x000579; 	T(RCR(ax, 1));	// 8696 rcr     ax, 1 ;~ 0613:0579
cs=0x613;eip=0x00057b; 	T(DEC(cl));	// 8697 dec     cl ;~ 0613:057B
cs=0x613;eip=0x00057d; 	R(JNZ(loc_14c87));	// 8698 jnz     short loc_14C87 ;~ 0613:057D
cs=0x613;eip=0x00057f; 	X(SUB(*(dw*)(raddr(ss,bp+var_22)), ax));	// 8699 sub     [bp+var_22], ax ;~ 0613:057F
cs=0x613;eip=0x000582; 	T(MOV(ax, 1));	// 8700 mov     ax, 1 ;~ 0613:0582
cs=0x613;eip=0x000585; 	X(PUSH(ax));	// 8701 push    ax ;~ 0613:0585
cs=0x613;eip=0x000586; 	X(PUSH(word_446ce));	// 8702 push    word_446CE ;~ 0613:0586
cs=0x613;eip=0x00058a; 	X(PUSH(word_446d0));	// 8703 push    word_446D0 ;~ 0613:058A
cs=0x613;eip=0x00058e; 	X(PUSH(word_446d2));	// 8704 push    word_446D2 ;~ 0613:058E
cs=0x613;eip=0x000592; 	R(CALLF(mat_rot_zxy,0));	// 8705 call    mat_rot_zxy ;~ 0613:0592
cs=0x613;eip=0x000597; 	T(ADD(sp, 8));	// 8706 add     sp, 8 ;~ 0613:0597
cs=0x613;eip=0x00059a; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 8707 mov     [bp+var_16], ax ;~ 0613:059A
cs=0x613;eip=0x00059d; 	T(ax = bp+var_3c);	// 8708 lea     ax, [bp+var_3C] ;~ 0613:059D
cs=0x613;eip=0x0005a0; 	X(PUSH(ax));	// 8709 push    ax ;~ 0613:05A0
cs=0x613;eip=0x0005a1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 8710 push    [bp+var_16] ;~ 0613:05A1
cs=0x613;eip=0x0005a4; 	T(ax = bp+var_26);	// 8711 lea     ax, [bp+var_26] ;~ 0613:05A4
cs=0x613;eip=0x0005a7; 	X(PUSH(ax));	// 8712 push    ax ;~ 0613:05A7
cs=0x613;eip=0x0005a8; 	R(CALLF(mat_mul_vector,0));	// 8713 call    mat_mul_vector ;~ 0613:05A8
cs=0x613;eip=0x0005ad; 	T(ADD(sp, 6));	// 8714 add     sp, 6 ;~ 0613:05AD
cs=0x613;eip=0x0005b0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 8715 push    [bp+var_38] ;~ 0613:05B0
cs=0x613;eip=0x0005b3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3c))));	// 8716 mov     ax, [bp+var_3C] ;~ 0613:05B3
cs=0x613;eip=0x0005b6; 	T(NEG(ax));	// 8717 neg     ax ;~ 0613:05B6
cs=0x613;eip=0x0005b8; 	X(PUSH(ax));	// 8718 push    ax ;~ 0613:05B8
cs=0x613;eip=0x0005b9; 	R(CALLF(polarangle,0));	// 8719 call    polarAngle ;~ 0613:05B9
cs=0x613;eip=0x0005be; 	T(ADD(sp, 4));	// 8720 add     sp, 4 ;~ 0613:05BE
cs=0x613;eip=0x0005c1; 	T(AND(ah, 3));	// 8721 and     ah, 3 ;~ 0613:05C1
cs=0x613;eip=0x0005c4; 	X(MOV(word_446fe, ax));	// 8722 mov     word_446FE, ax ;~ 0613:05C4
loc_14cd7:
	// 4850 
cs=0x613;eip=0x0005c7; 	T(CMP(byte_44783, 0));	// 8725 cmp     byte_44783, 0 ;~ 0613:05C7
cs=0x613;eip=0x0005cc; 	R(JNZ(loc_14ce1));	// 8726 jnz     short loc_14CE1 ;~ 0613:05CC
cs=0x613;eip=0x0005ce; 	R(JMP(loc_14d66));	// 8727 jmp     loc_14D66 ;~ 0613:05CE
loc_14ce1:
	// 4851 
cs=0x613;eip=0x0005d1; 	T(MOV(al, startrow2));	// 8731 mov     al, startrow2 ;~ 0613:05D1
cs=0x613;eip=0x0005d4; 	T(CBW);	// 8732 cbw ;~ 0613:05D4
cs=0x613;eip=0x0005d5; 	T(MOV(bx, ax));	// 8733 mov     bx, ax ;~ 0613:05D5
cs=0x613;eip=0x0005d7; 	T(SHL(bx, 1));	// 8734 shl     bx, 1 ;~ 0613:05D7
cs=0x613;eip=0x0005d9; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 8735 mov     ax, trackcenterpos[bx] ;~ 0613:05D9
cs=0x613;eip=0x0005dd; 	T(MOV(cx, word_446be));	// 8736 mov     cx, word_446BE ;~ 0613:05DD
cs=0x613;eip=0x0005e1; 	T(MOV(bx, word_446c0));	// 8737 mov     bx, word_446C0 ;~ 0613:05E1
cs=0x613;eip=0x0005e5; 	T(MOV(dx, cx));	// 8738 mov     dx, cx ;~ 0613:05E5
cs=0x613;eip=0x0005e7; 	T(MOV(cl, 6));	// 8739 mov     cl, 6 ;~ 0613:05E7
loc_14cf9:
	// 4852 
cs=0x613;eip=0x0005e9; 	T(SAR(bx, 1));	// 8742 sar     bx, 1 ;~ 0613:05E9
cs=0x613;eip=0x0005eb; 	T(RCR(dx, 1));	// 8743 rcr     dx, 1 ;~ 0613:05EB
cs=0x613;eip=0x0005ed; 	T(DEC(cl));	// 8744 dec     cl ;~ 0613:05ED
cs=0x613;eip=0x0005ef; 	R(JNZ(loc_14cf9));	// 8745 jnz     short loc_14CF9 ;~ 0613:05EF
cs=0x613;eip=0x0005f1; 	T(SUB(ax, dx));	// 8746 sub     ax, dx ;~ 0613:05F1
cs=0x613;eip=0x0005f3; 	X(PUSH(ax));	// 8747 push    ax ;~ 0613:05F3
cs=0x613;eip=0x0005f4; 	X(PUSH(track_angle));	// 8748 push    track_angle ;~ 0613:05F4
cs=0x613;eip=0x0005f8; 	R(CALLF(cos_fast,0));	// 8749 call    cos_fast ;~ 0613:05F8
cs=0x613;eip=0x0005fd; 	T(ADD(sp, 2));	// 8750 add     sp, 2 ;~ 0613:05FD
cs=0x613;eip=0x000600; 	X(PUSH(ax));	// 8751 push    ax ;~ 0613:0600
cs=0x613;eip=0x000601; 	R(CALLF(multiply_and_scale,0));	// 8752 call    multiply_and_scale ;~ 0613:0601
cs=0x613;eip=0x000606; 	T(ADD(sp, 4));	// 8753 add     sp, 4 ;~ 0613:0606
cs=0x613;eip=0x000609; 	T(MOV(si, ax));	// 8754 mov     si, ax ;~ 0613:0609
cs=0x613;eip=0x00060b; 	T(MOV(al, startcol2));	// 8755 mov     al, startcol2 ;~ 0613:060B
cs=0x613;eip=0x00060e; 	T(CBW);	// 8756 cbw ;~ 0613:060E
cs=0x613;eip=0x00060f; 	T(MOV(bx, ax));	// 8757 mov     bx, ax ;~ 0613:060F
cs=0x613;eip=0x000611; 	T(SHL(bx, 1));	// 8758 shl     bx, 1 ;~ 0613:0611
cs=0x613;eip=0x000613; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 8759 mov     ax, trackcenterpos2[bx] ;~ 0613:0613
cs=0x613;eip=0x000617; 	T(MOV(cx, word_446b6));	// 8760 mov     cx, word_446B6 ;~ 0613:0617
cs=0x613;eip=0x00061b; 	T(MOV(bx, word_446b8));	// 8761 mov     bx, word_446B8 ;~ 0613:061B
cs=0x613;eip=0x00061f; 	T(MOV(dx, cx));	// 8762 mov     dx, cx ;~ 0613:061F
cs=0x613;eip=0x000621; 	T(MOV(cl, 6));	// 8763 mov     cl, 6 ;~ 0613:0621
loc_14d33:
	// 4853 
cs=0x613;eip=0x000623; 	T(SAR(bx, 1));	// 8766 sar     bx, 1 ;~ 0613:0623
cs=0x613;eip=0x000625; 	T(RCR(dx, 1));	// 8767 rcr     dx, 1 ;~ 0613:0625
cs=0x613;eip=0x000627; 	T(DEC(cl));	// 8768 dec     cl ;~ 0613:0627
cs=0x613;eip=0x000629; 	R(JNZ(loc_14d33));	// 8769 jnz     short loc_14D33 ;~ 0613:0629
cs=0x613;eip=0x00062b; 	T(SUB(ax, dx));	// 8770 sub     ax, dx ;~ 0613:062B
cs=0x613;eip=0x00062d; 	X(PUSH(ax));	// 8771 push    ax ;~ 0613:062D
cs=0x613;eip=0x00062e; 	X(PUSH(track_angle));	// 8772 push    track_angle ;~ 0613:062E
cs=0x613;eip=0x000632; 	R(CALLF(sin_fast,0));	// 8773 call    sin_fast ;~ 0613:0632
cs=0x613;eip=0x000637; 	T(ADD(sp, 2));	// 8774 add     sp, 2 ;~ 0613:0637
cs=0x613;eip=0x00063a; 	X(PUSH(ax));	// 8775 push    ax ;~ 0613:063A
cs=0x613;eip=0x00063b; 	R(CALLF(multiply_and_scale,0));	// 8776 call    multiply_and_scale ;~ 0613:063B
cs=0x613;eip=0x000640; 	T(ADD(sp, 4));	// 8777 add     sp, 4 ;~ 0613:0640
cs=0x613;eip=0x000643; 	T(ADD(si, ax));	// 8778 add     si, ax ;~ 0613:0643
cs=0x613;eip=0x000645; 	R(JNS(loc_14d66));	// 8779 jns     short loc_14D66 ;~ 0613:0645
cs=0x613;eip=0x000647; 	T(MOV(ax, 1));	// 8780 mov     ax, 1 ;~ 0613:0647
cs=0x613;eip=0x00064a; 	X(PUSH(ax));	// 8781 push    ax ;~ 0613:064A
cs=0x613;eip=0x00064b; 	T(MOV(ax, 3));	// 8782 mov     ax, 3 ;~ 0613:064B
cs=0x613;eip=0x00064e; 	X(PUSH(ax));	// 8783 push    ax ;~ 0613:064E
cs=0x613;eip=0x00064f; 	X(PUSH(cs));	// 8784 push    cs ;~ 0613:064F
cs=0x613;eip=0x000650; 	R(CALL(update_crash_state,0));	// 8785 call    near ptr update_crash_state ;~ 0613:0650
cs=0x613;eip=0x000653; 	T(ADD(sp, 4));	// 8786 add     sp, 4 ;~ 0613:0653
loc_14d66:
	// 4854 
cs=0x613;eip=0x000656; 	X(POP(si));	// 8790 pop     si ;~ 0613:0656
cs=0x613;eip=0x000657; 	X(POP(di));	// 8791 pop     di ;~ 0613:0657
cs=0x613;eip=0x000658; 	T(MOV(sp, bp));	// 8792 mov     sp, bp ;~ 0613:0658
cs=0x613;eip=0x00065a; 	X(POP(bp));	// 8793 pop     bp ;~ 0613:065A
cs=0x613;eip=0x00065b; 	R(RETF(0));	// 8794 retf ;~ 0613:065B
mat_mul_vector2:
	// 8802 
#undef var_12
#define var_12 -0x12
	// 8805 var_12          = byte ptr -12h ;~ 0613:065C
#undef arg_0
#define arg_0 6
	// 8806 arg_0           = word ptr  6 ;~ 0613:065C
#undef arg_2
#define arg_2 8
	// 8807 arg_2           = word ptr  8 ;~ 0613:065C
#undef arg_4
#define arg_4 0x0A
	// 8808 arg_4           = word ptr  0Ah ;~ 0613:065C
#undef arg_6
#define arg_6 0x0C
	// 8809 arg_6           = word ptr  0Ch ;~ 0613:065C
ret_613_65c:
	// 4855 
cs=0x613;eip=0x00065c; 	X(PUSH(bp));	// 8811 push    bp ;~ 0613:065C
cs=0x613;eip=0x00065d; 	T(MOV(bp, sp));	// 8812 mov     bp, sp ;~ 0613:065D
cs=0x613;eip=0x00065f; 	T(SUB(sp, 0x12));	// 8813 sub     sp, 12h ;~ 0613:065F
cs=0x613;eip=0x000662; 	X(PUSH(di));	// 8814 push    di ;~ 0613:0662
cs=0x613;eip=0x000663; 	X(PUSH(si));	// 8815 push    si ;~ 0613:0663
cs=0x613;eip=0x000664; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 8816 mov     ax, [bp+arg_2] ;~ 0613:0664
cs=0x613;eip=0x000667; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 8817 mov     dx, [bp+arg_4] ;~ 0613:0667
cs=0x613;eip=0x00066a; 	T(di = bp+var_12);	// 8818 lea     di, [bp+var_12] ;~ 0613:066A
cs=0x613;eip=0x00066d; 	T(MOV(si, ax));	// 8819 mov     si, ax ;~ 0613:066D
cs=0x613;eip=0x00066f; 	X(PUSH(ss));	// 8820 push    ss ;~ 0613:066F
cs=0x613;eip=0x000670; 	X(POP(es));	// 8821 pop     es ;~ 0613:0670
cs=0x613;eip=0x000671; 	X(PUSH(ds));	// 8822 push    ds ;~ 0613:0671
cs=0x613;eip=0x000672; 	T(MOV(ds, dx));	// 8823 mov     ds, dx ;~ 0613:0672
cs=0x613;eip=0x000674; 	T(MOV(cx, 9));	// 8824 mov     cx, 9 ;~ 0613:0674
	// 8825 repne movsw ;~ 0613:0677
cs=0x613;eip=0x000677; 	X(	REPNE MOVSW);	// 8825 repne movsw ;~ 0613:0677
cs=0x613;eip=0x000679; 	X(POP(ds));	// 8826 pop     ds ;~ 0613:0679
cs=0x613;eip=0x00067a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 8827 push    [bp+arg_6] ;~ 0613:067A
cs=0x613;eip=0x00067d; 	T(ax = bp+var_12);	// 8828 lea     ax, [bp+var_12] ;~ 0613:067D
cs=0x613;eip=0x000680; 	X(PUSH(ax));	// 8829 push    ax ;~ 0613:0680
cs=0x613;eip=0x000681; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 8830 push    [bp+arg_0] ;~ 0613:0681
cs=0x613;eip=0x000684; 	R(CALLF(mat_mul_vector,0));	// 8831 call    mat_mul_vector ;~ 0613:0684
cs=0x613;eip=0x000689; 	T(ADD(sp, 6));	// 8832 add     sp, 6 ;~ 0613:0689
cs=0x613;eip=0x00068c; 	X(POP(si));	// 8833 pop     si ;~ 0613:068C
cs=0x613;eip=0x00068d; 	X(POP(di));	// 8834 pop     di ;~ 0613:068D
cs=0x613;eip=0x00068e; 	T(MOV(sp, bp));	// 8835 mov     sp, bp ;~ 0613:068E
cs=0x613;eip=0x000690; 	X(POP(bp));	// 8836 pop     bp ;~ 0613:0690
cs=0x613;eip=0x000691; 	R(RETF(0));	// 8837 retf ;~ 0613:0691
update_player_state:
	// 8845 
#undef vec_1e4
#define vec_1e4 -0x1E4
	// 8848 vec_1E4         = word ptr -1E4h ;~ 0613:0692
#undef var_1e2
#define var_1e2 -0x1E2
	// 8849 var_1E2         = word ptr -1E2h ;~ 0613:0692
#undef var_1e0
#define var_1e0 -0x1E0
	// 8850 var_1E0         = word ptr -1E0h ;~ 0613:0692
#undef vec_1de
#define vec_1de -0x1DE
	// 8851 vec_1DE         = word ptr -1DEh ;~ 0613:0692
#undef var_1dc
#define var_1dc -0x1DC
	// 8852 var_1DC         = word ptr -1DCh ;~ 0613:0692
#undef var_1da
#define var_1da -0x1DA
	// 8853 var_1DA         = word ptr -1DAh ;~ 0613:0692
#undef var_1d8
#define var_1d8 -0x1D8
	// 8854 var_1D8         = word ptr -1D8h ;~ 0613:0692
#undef var_1d6
#define var_1d6 -0x1D6
	// 8855 var_1D6         = word ptr -1D6h ;~ 0613:0692
#undef var_1d4
#define var_1d4 -0x1D4
	// 8856 var_1D4         = word ptr -1D4h ;~ 0613:0692
#undef var_1d2
#define var_1d2 -0x1D2
	// 8857 var_1D2         = word ptr -1D2h ;~ 0613:0692
#undef var_1d0
#define var_1d0 -0x1D0
	// 8858 var_1D0         = word ptr -1D0h ;~ 0613:0692
#undef var_1ce
#define var_1ce -0x1CE
	// 8859 var_1CE         = word ptr -1CEh ;~ 0613:0692
#undef var_1cc
#define var_1cc -0x1CC
	// 8860 var_1CC         = word ptr -1CCh ;~ 0613:0692
#undef var_1ca
#define var_1ca -0x1CA
	// 8861 var_1CA         = word ptr -1CAh ;~ 0613:0692
#undef var_1c8
#define var_1c8 -0x1C8
	// 8862 var_1C8         = word ptr -1C8h ;~ 0613:0692
#undef vec_1c6
#define vec_1c6 -0x1C6
	// 8863 vec_1C6         = word ptr -1C6h ;~ 0613:0692
#undef var_1c4
#define var_1c4 -0x1C4
	// 8864 var_1C4         = word ptr -1C4h ;~ 0613:0692
#undef var_1c2
#define var_1c2 -0x1C2
	// 8865 var_1C2         = word ptr -1C2h ;~ 0613:0692
#undef vecl_1c0
#define vecl_1c0 -0x1C0
	// 8866 vecl_1C0        = word ptr -1C0h ;~ 0613:0692
#undef var_1be
#define var_1be -0x1BE
	// 8867 var_1BE         = word ptr -1BEh ;~ 0613:0692
#undef var_1bc
#define var_1bc -0x1BC
	// 8868 var_1BC         = word ptr -1BCh ;~ 0613:0692
#undef var_1ba
#define var_1ba -0x1BA
	// 8869 var_1BA         = word ptr -1BAh ;~ 0613:0692
#undef var_1b8
#define var_1b8 -0x1B8
	// 8870 var_1B8         = word ptr -1B8h ;~ 0613:0692
#undef var_1b6
#define var_1b6 -0x1B6
	// 8871 var_1B6         = word ptr -1B6h ;~ 0613:0692
#undef var_1b4
#define var_1b4 -0x1B4
	// 8872 var_1B4         = word ptr -1B4h ;~ 0613:0692
#undef var_1b2
#define var_1b2 -0x1B2
	// 8873 var_1B2         = word ptr -1B2h ;~ 0613:0692
#undef var_1b0
#define var_1b0 -0x1B0
	// 8874 var_1B0         = word ptr -1B0h ;~ 0613:0692
#undef var_1ae
#define var_1ae -0x1AE
	// 8875 var_1AE         = word ptr -1AEh ;~ 0613:0692
#undef var_1ac
#define var_1ac -0x1AC
	// 8876 var_1AC         = word ptr -1ACh ;~ 0613:0692
#undef var_1aa
#define var_1aa -0x1AA
	// 8877 var_1AA         = word ptr -1AAh ;~ 0613:0692
#undef var_1a8
#define var_1a8 -0x1A8
	// 8878 var_1A8         = word ptr -1A8h ;~ 0613:0692
#undef var_1a6
#define var_1a6 -0x1A6
	// 8879 var_1A6         = word ptr -1A6h ;~ 0613:0692
#undef var_1a4
#define var_1a4 -0x1A4
	// 8880 var_1A4         = word ptr -1A4h ;~ 0613:0692
#undef var_1a2
#define var_1a2 -0x1A2
	// 8881 var_1A2         = word ptr -1A2h ;~ 0613:0692
#undef var_1a0
#define var_1a0 -0x1A0
	// 8882 var_1A0         = word ptr -1A0h ;~ 0613:0692
#undef var_19e
#define var_19e -0x19E
	// 8883 var_19E         = word ptr -19Eh ;~ 0613:0692
#undef var_19c
#define var_19c -0x19C
	// 8884 var_19C         = word ptr -19Ch ;~ 0613:0692
#undef var_19a
#define var_19a -0x19A
	// 8885 var_19A         = word ptr -19Ah ;~ 0613:0692
#undef var_198
#define var_198 -0x198
	// 8886 var_198         = word ptr -198h ;~ 0613:0692
#undef var_196
#define var_196 -0x196
	// 8887 var_196         = word ptr -196h ;~ 0613:0692
#undef var_194
#define var_194 -0x194
	// 8888 var_194         = word ptr -194h ;~ 0613:0692
#undef var_192
#define var_192 -0x192
	// 8889 var_192         = word ptr -192h ;~ 0613:0692
#undef var_190
#define var_190 -0x190
	// 8890 var_190         = word ptr -190h ;~ 0613:0692
#undef vec_18eostateworldcrds
#define vec_18eostateworldcrds -0x18E
	// 8891 vec_18EoStateWorldCrds= word ptr -18Eh ;~ 0613:0692
#undef var_18c
#define var_18c -0x18C
	// 8892 var_18C         = word ptr -18Ch ;~ 0613:0692
#undef var_18a
#define var_18a -0x18A
	// 8893 var_18A         = word ptr -18Ah ;~ 0613:0692
#undef var_188
#define var_188 -0x188
	// 8894 var_188         = word ptr -188h ;~ 0613:0692
#undef var_186
#define var_186 -0x186
	// 8895 var_186         = word ptr -186h ;~ 0613:0692
#undef var_184
#define var_184 -0x184
	// 8896 var_184         = word ptr -184h ;~ 0613:0692
#undef vec_182
#define vec_182 -0x182
	// 8897 vec_182         = word ptr -182h ;~ 0613:0692
#undef var_180
#define var_180 -0x180
	// 8898 var_180         = word ptr -180h ;~ 0613:0692
#undef var_17e
#define var_17e -0x17E
	// 8899 var_17E         = word ptr -17Eh ;~ 0613:0692
#undef vec_17c
#define vec_17c -0x17C
	// 8900 vec_17C         = word ptr -17Ch ;~ 0613:0692
#undef var_17a
#define var_17a -0x17A
	// 8901 var_17A         = word ptr -17Ah ;~ 0613:0692
#undef var_178
#define var_178 -0x178
	// 8902 var_178         = word ptr -178h ;~ 0613:0692
#undef vecl_176
#define vecl_176 -0x176
	// 8903 vecl_176        = byte ptr -176h ;~ 0613:0692
#undef var_146
#define var_146 -0x146
	// 8904 var_146         = word ptr -146h ;~ 0613:0692
#undef var_144
#define var_144 -0x144
	// 8905 var_144         = word ptr -144h ;~ 0613:0692
#undef pstate_f40_sar2
#define pstate_f40_sar2 -0x142
	// 8906 pState_f40_sar2 = word ptr -142h ;~ 0613:0692
#undef var_140
#define var_140 -0x140
	// 8907 var_140         = word ptr -140h ;~ 0613:0692
#undef var_138
#define var_138 -0x138
	// 8908 var_138         = word ptr -138h ;~ 0613:0692
#undef var_136
#define var_136 -0x136
	// 8909 var_136         = byte ptr -136h ;~ 0613:0692
#undef mat_134
#define mat_134 -0x134
	// 8910 mat_134         = byte ptr -134h ;~ 0613:0692
#undef var_122
#define var_122 -0x122
	// 8911 var_122         = word ptr -122h ;~ 0613:0692
#undef var_120
#define var_120 -0x120
	// 8912 var_120         = word ptr -120h ;~ 0613:0692
#undef var_11e
#define var_11e -0x11E
	// 8913 var_11E         = word ptr -11Eh ;~ 0613:0692
#undef var_11c
#define var_11c -0x11C
	// 8914 var_11C         = byte ptr -11Ch ;~ 0613:0692
#undef var_11a
#define var_11a -0x11A
	// 8915 var_11A         = word ptr -11Ah ;~ 0613:0692
#undef var_118
#define var_118 -0x118
	// 8916 var_118         = word ptr -118h ;~ 0613:0692
#undef var_116
#define var_116 -0x116
	// 8917 var_116         = word ptr -116h ;~ 0613:0692
#undef var_114
#define var_114 -0x114
	// 8918 var_114         = word ptr -114h ;~ 0613:0692
#undef var_112
#define var_112 -0x112
	// 8919 var_112         = word ptr -112h ;~ 0613:0692
#undef var_110
#define var_110 -0x110
	// 8920 var_110         = word ptr -110h ;~ 0613:0692
#undef var_10e
#define var_10e -0x10E
	// 8921 var_10E         = byte ptr -10Eh ;~ 0613:0692
#undef vec_fc
#define vec_fc -0x0FC
	// 8922 vec_FC          = word ptr -0FCh ;~ 0613:0692
#undef var_fa
#define var_fa -0x0FA
	// 8923 var_FA          = word ptr -0FAh ;~ 0613:0692
#undef var_f8
#define var_f8 -0x0F8
	// 8924 var_F8          = word ptr -0F8h ;~ 0613:0692
#undef var_f4
#define var_f4 -0x0F4
	// 8925 var_F4          = word ptr -0F4h ;~ 0613:0692
#undef var_f2
#define var_f2 -0x0F2
	// 8926 var_F2          = word ptr -0F2h ;~ 0613:0692
#undef var_f0
#define var_f0 -0x0F0
	// 8927 var_F0          = word ptr -0F0h ;~ 0613:0692
#undef var_ee
#define var_ee -0x0EE
	// 8928 var_EE          = word ptr -0EEh ;~ 0613:0692
#undef var_ec
#define var_ec -0x0EC
	// 8929 var_EC          = byte ptr -0ECh ;~ 0613:0692
#undef var_ea
#define var_ea -0x0EA
	// 8930 var_EA          = word ptr -0EAh ;~ 0613:0692
#undef var_e8
#define var_e8 -0x0E8
	// 8931 var_E8          = byte ptr -0E8h ;~ 0613:0692
#undef var_e6
#define var_e6 -0x0E6
	// 8932 var_E6          = word ptr -0E6h ;~ 0613:0692
#undef vec_e4
#define vec_e4 -0x0E4
	// 8933 vec_E4          = word ptr -0E4h ;~ 0613:0692
#undef var_e2
#define var_e2 -0x0E2
	// 8934 var_E2          = word ptr -0E2h ;~ 0613:0692
#undef var_e0
#define var_e0 -0x0E0
	// 8935 var_E0          = word ptr -0E0h ;~ 0613:0692
#undef var_de
#define var_de -0x0DE
	// 8936 var_DE          = word ptr -0DEh ;~ 0613:0692
#undef var_dc
#define var_dc -0x0DC
	// 8937 var_DC          = byte ptr -0DCh ;~ 0613:0692
#undef vec_1c
#define vec_1c -0x1C
	// 8938 vec_1C          = word ptr -1Ch ;~ 0613:0692
#undef var_1a
#define var_1a -0x1A
	// 8939 var_1A          = word ptr -1Ah ;~ 0613:0692
#undef var_18
#define var_18 -0x18
	// 8940 var_18          = word ptr -18h ;~ 0613:0692
#undef var_16
#define var_16 -0x16
	// 8941 var_16          = word ptr -16h ;~ 0613:0692
#undef var_e
#define var_e -0x0E
	// 8942 var_E           = word ptr -0Eh ;~ 0613:0692
#undef vec_c
#define vec_c -0x0C
	// 8943 vec_C           = word ptr -0Ch ;~ 0613:0692
#undef var_a
#define var_a -0x0A
	// 8944 var_A           = word ptr -0Ah ;~ 0613:0692
#undef var_8
#define var_8 -8
	// 8945 var_8           = word ptr -8 ;~ 0613:0692
#undef var_6
#define var_6 -6
	// 8946 var_6           = dword ptr -6 ;~ 0613:0692
#undef var_2
#define var_2 -2
	// 8947 var_2           = byte ptr -2 ;~ 0613:0692
#undef arg_0
#define arg_0 6
	// 8948 arg_0           = word ptr  6 ;~ 0613:0692
#undef arg_2
#define arg_2 8
	// 8949 arg_2           = word ptr  8 ;~ 0613:0692
#undef arg_4
#define arg_4 0x0A
	// 8950 arg_4           = word ptr  0Ah ;~ 0613:0692
#undef arg_6
#define arg_6 0x0C
	// 8951 arg_6           = word ptr  0Ch ;~ 0613:0692
#undef arg_8
#define arg_8 0x0E
	// 8952 arg_8           = byte ptr  0Eh ;~ 0613:0692
ret_613_692:
	// 4856 
cs=0x613;eip=0x000692; 	X(PUSH(bp));	// 8954 push    bp ;~ 0613:0692
cs=0x613;eip=0x000693; 	T(MOV(bp, sp));	// 8955 mov     bp, sp ;~ 0613:0693
cs=0x613;eip=0x000695; 	T(SUB(sp, 0x1E4));	// 8956 sub     sp, 1E4h ;~ 0613:0695
cs=0x613;eip=0x000699; 	X(PUSH(di));	// 8957 push    di ;~ 0613:0699
cs=0x613;eip=0x00069a; 	X(PUSH(si));	// 8958 push    si ;~ 0613:069A
cs=0x613;eip=0x00069b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8959 mov     bx, [bp+arg_0] ;~ 0613:069B
cs=0x613;eip=0x00069e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 8960 mov     ax, [bx+0] ;~ 0613:069E
cs=0x613;eip=0x0006a0; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 8961 mov     dx, [bx+2] ;~ 0613:06A0
cs=0x613;eip=0x0006a3; 	X(MOV(pstate_lvec1_x, ax));	// 8962 mov     pState_lvec1_x, ax ;~ 0613:06A3
cs=0x613;eip=0x0006a6; 	X(MOV(word_449c0, dx));	// 8963 mov     word_449C0, dx ;~ 0613:06A6
cs=0x613;eip=0x0006aa; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 8964 mov     [bx+0Ch], ax ;~ 0613:06AA
cs=0x613;eip=0x0006ad; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), dx));	// 8965 mov     [bx+0Eh], dx ;~ 0613:06AD
cs=0x613;eip=0x0006b0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8966 mov     bx, [bp+arg_0] ;~ 0613:06B0
cs=0x613;eip=0x0006b3; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 8967 mov     ax, [bx+4] ;~ 0613:06B3
cs=0x613;eip=0x0006b6; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 8968 mov     dx, [bx+6] ;~ 0613:06B6
cs=0x613;eip=0x0006b9; 	X(MOV(pstate_lvec1_y, ax));	// 8969 mov     pState_lvec1_y, ax ;~ 0613:06B9
cs=0x613;eip=0x0006bc; 	X(MOV(word_449c8, dx));	// 8970 mov     word_449C8, dx ;~ 0613:06BC
cs=0x613;eip=0x0006c0; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), ax));	// 8971 mov     [bx+10h], ax ;~ 0613:06C0
cs=0x613;eip=0x0006c3; 	X(MOV(*(dw*)(raddr(ds,bx+0x12)), dx));	// 8972 mov     [bx+12h], dx ;~ 0613:06C3
cs=0x613;eip=0x0006c6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8973 mov     bx, [bp+arg_0] ;~ 0613:06C6
cs=0x613;eip=0x0006c9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 8974 mov     ax, [bx+8] ;~ 0613:06C9
cs=0x613;eip=0x0006cc; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 8975 mov     dx, [bx+0Ah] ;~ 0613:06CC
cs=0x613;eip=0x0006cf; 	X(MOV(pstate_lvec1_z, ax));	// 8976 mov     pState_lvec1_z, ax ;~ 0613:06CF
cs=0x613;eip=0x0006d2; 	X(MOV(word_449cc, dx));	// 8977 mov     word_449CC, dx ;~ 0613:06D2
cs=0x613;eip=0x0006d6; 	X(MOV(*(dw*)(raddr(ds,bx+0x14)), ax));	// 8978 mov     [bx+14h], ax ;~ 0613:06D6
cs=0x613;eip=0x0006d9; 	X(MOV(*(dw*)(raddr(ds,bx+0x16)), dx));	// 8979 mov     [bx+16h], dx ;~ 0613:06D9
cs=0x613;eip=0x0006dc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8980 mov     bx, [bp+arg_0] ;~ 0613:06DC
cs=0x613;eip=0x0006df; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1C))));	// 8981 mov     ax, [bx+1Ch] ;~ 0613:06DF
cs=0x613;eip=0x0006e2; 	X(MOV(pstate_minusrotate_z_1, ax));	// 8982 mov     pState_minusRotate_z_1, ax ;~ 0613:06E2
cs=0x613;eip=0x0006e5; 	X(MOV(pstate_minusrotate_z_2, ax));	// 8983 mov     pState_minusRotate_z_2, ax ;~ 0613:06E5
cs=0x613;eip=0x0006e8; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1A))));	// 8984 mov     ax, [bx+1Ah] ;~ 0613:06E8
cs=0x613;eip=0x0006eb; 	X(MOV(pstate_minusrotate_x_1, ax));	// 8985 mov     pState_minusRotate_x_1, ax ;~ 0613:06EB
cs=0x613;eip=0x0006ee; 	X(MOV(pstate_minusrotate_x_2, ax));	// 8986 mov     pState_minusRotate_x_2, ax ;~ 0613:06EE
cs=0x613;eip=0x0006f1; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x18))));	// 8987 mov     ax, [bx+18h] ;~ 0613:06F1
cs=0x613;eip=0x0006f4; 	X(MOV(pstate_minusrotate_y_1, ax));	// 8988 mov     pState_minusRotate_y_1, ax ;~ 0613:06F4
cs=0x613;eip=0x0006f7; 	X(MOV(pstate_minusrotate_y_2, ax));	// 8989 mov     pState_minusRotate_y_2, ax ;~ 0613:06F7
cs=0x613;eip=0x0006fa; 	T(CMP(*(raddr(ds,bx+0x0C1)), 0));	// 8990 cmp     byte ptr [bx+0C1h], 0 ;~ 0613:06FA
cs=0x613;eip=0x0006ff; 	R(JZ(loc_14e1e));	// 8991 jz      short loc_14E1E ;~ 0613:06FF
cs=0x613;eip=0x000701; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x40))));	// 8992 mov     ax, [bx+40h] ;~ 0613:0701
cs=0x613;eip=0x000704; 	T(SAR(ax, 1));	// 8993 sar     ax, 1 ;~ 0613:0704
cs=0x613;eip=0x000706; 	T(SAR(ax, 1));	// 8994 sar     ax, 1 ;~ 0613:0706
cs=0x613;eip=0x000708; 	X(MOV(*(dw*)(raddr(ss,bp+pstate_f40_sar2)), ax));	// 8995 mov     [bp+pState_f40_sar2], ax ;~ 0613:0708
cs=0x613;eip=0x00070c; 	R(JMP(loc_14e24));	// 8996 jmp     short loc_14E24 ;~ 0613:070C
loc_14e1e:
	// 4857 
cs=0x613;eip=0x00070e; 	X(MOV(*(dw*)(raddr(ss,bp+pstate_f40_sar2)), 0));	// 9000 mov     [bp+pState_f40_sar2], 0 ;~ 0613:070E
loc_14e24:
	// 4858 
cs=0x613;eip=0x000714; 	T(CMP(framespersec, 0x0A));	// 9003 cmp     framespersec, 0Ah ;~ 0613:0714
cs=0x613;eip=0x000719; 	R(JNZ(loc_14e30));	// 9004 jnz     short loc_14E30 ;~ 0613:0719
cs=0x613;eip=0x00071b; 	T(MOV(ax, 0x1E00));	// 9005 mov     ax, 1E00h ;~ 0613:071B
cs=0x613;eip=0x00071e; 	R(JMP(loc_14e33));	// 9006 jmp     short loc_14E33 ;~ 0613:071E
loc_14e30:
	// 4859 
cs=0x613;eip=0x000720; 	T(MOV(ax, 0x3C00));	// 9010 mov     ax, 3C00h       ; full trk grid length/2 ;~ 0613:0720
loc_14e33:
	// 4860 
cs=0x613;eip=0x000723; 	T(SUB(dx, dx));	// 9013 sub     dx, dx ;~ 0613:0723
cs=0x613;eip=0x000725; 	X(PUSH(dx));	// 9014 push    dx ;~ 0613:0725
cs=0x613;eip=0x000726; 	X(PUSH(ax));	// 9015 push    ax ;~ 0613:0726
cs=0x613;eip=0x000727; 	T(MOV(ax, 0x580));	// 9016 mov     ax, 580h        ; 11*128 ;~ 0613:0727
cs=0x613;eip=0x00072a; 	T(CWD);	// 9017 cwd ;~ 0613:072A
cs=0x613;eip=0x00072b; 	X(PUSH(dx));	// 9018 push    dx ;~ 0613:072B
cs=0x613;eip=0x00072c; 	X(PUSH(ax));	// 9019 push    ax ;~ 0613:072C
cs=0x613;eip=0x00072d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9020 mov     bx, [bp+arg_0] ;~ 0613:072D
cs=0x613;eip=0x000730; 	T(SUB(ax, ax));	// 9021 sub     ax, ax ;~ 0613:0730
cs=0x613;eip=0x000732; 	X(PUSH(ax));	// 9022 push    ax ;~ 0613:0732
cs=0x613;eip=0x000733; 	X(PUSH(*(dw*)(raddr(ds,bx+0x2C))));	// 9023 push    word ptr [bx+2Ch] ;~ 0613:0733
cs=0x613;eip=0x000736; 	R(CALLF(__aflmul,0));	// 9024 call    __aFlmul ;~ 0613:0736
cs=0x613;eip=0x00073b; 	X(PUSH(dx));	// 9025 push    dx ;~ 0613:073B
cs=0x613;eip=0x00073c; 	X(PUSH(ax));	// 9026 push    ax ;~ 0613:073C
cs=0x613;eip=0x00073d; 	R(CALLF(__afuldiv,0));	// 9027 call    __aFuldiv ;~ 0613:073D
cs=0x613;eip=0x000742; 	X(MOV(*(dw*)(raddr(ss,bp+var_e6)), ax));	// 9028 mov     [bp+var_E6], ax ;~ 0613:0742
cs=0x613;eip=0x000746; 	T(SUB(ax, ax));	// 9029 sub     ax, ax ;~ 0613:0746
cs=0x613;eip=0x000748; 	X(PUSH(ax));	// 9030 push    ax ;~ 0613:0748
cs=0x613;eip=0x000749; 	T(MOV(ax, pstate_minusrotate_y_1));	// 9031 mov     ax, pState_minusRotate_y_1 ;~ 0613:0749
cs=0x613;eip=0x00074c; 	T(NEG(ax));	// 9032 neg     ax ;~ 0613:074C
cs=0x613;eip=0x00074e; 	X(PUSH(ax));	// 9033 push    ax ;~ 0613:074E
cs=0x613;eip=0x00074f; 	T(MOV(ax, pstate_minusrotate_x_1));	// 9034 mov     ax, pState_minusRotate_x_1 ;~ 0613:074F
cs=0x613;eip=0x000752; 	T(NEG(ax));	// 9035 neg     ax ;~ 0613:0752
cs=0x613;eip=0x000754; 	X(PUSH(ax));	// 9036 push    ax ;~ 0613:0754
cs=0x613;eip=0x000755; 	T(MOV(ax, pstate_minusrotate_z_1));	// 9037 mov     ax, pState_minusRotate_z_1 ;~ 0613:0755
cs=0x613;eip=0x000758; 	T(NEG(ax));	// 9038 neg     ax ;~ 0613:0758
cs=0x613;eip=0x00075a; 	X(PUSH(ax));	// 9039 push    ax ;~ 0613:075A
cs=0x613;eip=0x00075b; 	R(CALLF(mat_rot_zxy,0));	// 9040 call    mat_rot_zxy ;~ 0613:075B
cs=0x613;eip=0x000760; 	T(ADD(sp, 8));	// 9041 add     sp, 8 ;~ 0613:0760
cs=0x613;eip=0x000763; 	X(PUSH(si));	// 9042 push    si ;~ 0613:0763
cs=0x613;eip=0x000764; 	T(MOV(di, offset(dseg,mat_unk)));	// 9043 mov     di, offset mat_unk ;~ 0613:0764
cs=0x613;eip=0x000767; 	T(MOV(si, ax));	// 9044 mov     si, ax ;~ 0613:0767
cs=0x613;eip=0x000769; 	X(PUSH(ds));	// 9045 push    ds ;~ 0613:0769
cs=0x613;eip=0x00076a; 	X(POP(es));	// 9046 pop     es ;~ 0613:076A
cs=0x613;eip=0x00076b; 	T(MOV(cx, 9));	// 9048 mov     cx, 9 ;~ 0613:076B
	// 9049 repne movsw ;~ 0613:076E
cs=0x613;eip=0x00076e; 	X(	REPNE MOVSW);	// 9049 repne movsw ;~ 0613:076E
cs=0x613;eip=0x000770; 	X(POP(si));	// 9050 pop     si ;~ 0613:0770
cs=0x613;eip=0x000771; 	T(CMP(pstate_minusrotate_x_1, 0));	// 9051 cmp     pState_minusRotate_x_1, 0 ;~ 0613:0771
cs=0x613;eip=0x000776; 	R(JNZ(loc_14e8f));	// 9052 jnz     short loc_14E8F ;~ 0613:0776
cs=0x613;eip=0x000778; 	T(CMP(pstate_minusrotate_z_1, 0));	// 9053 cmp     pState_minusRotate_z_1, 0 ;~ 0613:0778
cs=0x613;eip=0x00077d; 	R(JZ(loc_14ec6));	// 9054 jz      short loc_14EC6 ;~ 0613:077D
loc_14e8f:
	// 4861 
cs=0x613;eip=0x00077f; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1c6)), 0));	// 9057 mov     [bp+vec_1C6], 0 ;~ 0613:077F
cs=0x613;eip=0x000785; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), 0));	// 9058 mov     [bp+var_1C4], 0 ;~ 0613:0785
cs=0x613;eip=0x00078b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), 0x82));	// 9059 mov     [bp+var_1C2], 82h ; '‚' ;~ 0613:078B
cs=0x613;eip=0x000791; 	T(ax = bp+vec_fc);	// 9060 lea     ax, [bp+vec_FC] ;~ 0613:0791
cs=0x613;eip=0x000795; 	X(PUSH(ax));	// 9061 push    ax ;~ 0613:0795
cs=0x613;eip=0x000796; 	T(MOV(ax, offset(dseg,mat_unk)));	// 9062 mov     ax, offset mat_unk ;~ 0613:0796
cs=0x613;eip=0x000799; 	X(PUSH(ax));	// 9063 push    ax ;~ 0613:0799
cs=0x613;eip=0x00079a; 	T(ax = bp+vec_1c6);	// 9064 lea     ax, [bp+vec_1C6] ;~ 0613:079A
cs=0x613;eip=0x00079e; 	X(PUSH(ax));	// 9065 push    ax ;~ 0613:079E
cs=0x613;eip=0x00079f; 	R(CALLF(mat_mul_vector,0));	// 9066 call    mat_mul_vector ;~ 0613:079F
cs=0x613;eip=0x0007a4; 	T(ADD(sp, 6));	// 9067 add     sp, 6 ;~ 0613:07A4
cs=0x613;eip=0x0007a7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9068 mov     bx, [bp+arg_0] ;~ 0613:07A7
cs=0x613;eip=0x0007aa; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_fa))));	// 9069 mov     ax, [bp+var_FA] ;~ 0613:07AA
cs=0x613;eip=0x0007ae; 	T(NEG(ax));	// 9070 neg     ax ;~ 0613:07AE
cs=0x613;eip=0x0007b0; 	X(MOV(*(dw*)(raddr(ds,bx+0x1E)), ax));	// 9071 mov     [bx+1Eh], ax ;~ 0613:07B0
cs=0x613;eip=0x0007b3; 	R(JMP(loc_14ece));	// 9072 jmp     short loc_14ECE ;~ 0613:07B3
loc_14ec6:
	// 4862 
cs=0x613;eip=0x0007b6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9077 mov     bx, [bp+arg_0] ;~ 0613:07B6
cs=0x613;eip=0x0007b9; 	X(MOV(*(dw*)(raddr(ds,bx+0x1E)), 0));	// 9078 mov     word ptr [bx+1Eh], 0 ;~ 0613:07B9
loc_14ece:
	// 4863 
cs=0x613;eip=0x0007be; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9081 mov     bx, [bp+arg_0] ;~ 0613:07BE
cs=0x613;eip=0x0007c1; 	T(TEST(*(dw*)(raddr(ds,bx+0x3E)), 0x3FF));	// 9082 test    word ptr [bx+3Eh], 3FFh ;~ 0613:07C1
cs=0x613;eip=0x0007c6; 	R(JZ(loc_14f04));	// 9083 jz      short loc_14F04 ;~ 0613:07C6
cs=0x613;eip=0x0007c8; 	X(MOV(*(raddr(ss,bp+var_ec)), 1));	// 9084 mov     [bp+var_EC], 1 ;~ 0613:07C8
cs=0x613;eip=0x0007cd; 	T(SUB(ax, ax));	// 9085 sub     ax, ax ;~ 0613:07CD
cs=0x613;eip=0x0007cf; 	X(PUSH(ax));	// 9086 push    ax ;~ 0613:07CF
cs=0x613;eip=0x0007d0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x3E))));	// 9087 mov     ax, [bx+3Eh] ;~ 0613:07D0
cs=0x613;eip=0x0007d3; 	T(NEG(ax));	// 9088 neg     ax ;~ 0613:07D3
cs=0x613;eip=0x0007d5; 	X(PUSH(ax));	// 9089 push    ax ;~ 0613:07D5
cs=0x613;eip=0x0007d6; 	T(SUB(ax, ax));	// 9090 sub     ax, ax ;~ 0613:07D6
cs=0x613;eip=0x0007d8; 	X(PUSH(ax));	// 9091 push    ax ;~ 0613:07D8
cs=0x613;eip=0x0007d9; 	X(PUSH(ax));	// 9092 push    ax ;~ 0613:07D9
cs=0x613;eip=0x0007da; 	R(CALLF(mat_rot_zxy,0));	// 9093 call    mat_rot_zxy ;~ 0613:07DA
cs=0x613;eip=0x0007df; 	T(ADD(sp, 8));	// 9094 add     sp, 8 ;~ 0613:07DF
cs=0x613;eip=0x0007e2; 	X(PUSH(si));	// 9095 push    si ;~ 0613:07E2
cs=0x613;eip=0x0007e3; 	T(di = bp+var_10e);	// 9096 lea     di, [bp+var_10E] ;~ 0613:07E3
cs=0x613;eip=0x0007e7; 	T(MOV(si, ax));	// 9097 mov     si, ax ;~ 0613:07E7
cs=0x613;eip=0x0007e9; 	X(PUSH(ss));	// 9098 push    ss ;~ 0613:07E9
cs=0x613;eip=0x0007ea; 	X(POP(es));	// 9099 pop     es ;~ 0613:07EA
cs=0x613;eip=0x0007eb; 	T(MOV(cx, 9));	// 9101 mov     cx, 9 ;~ 0613:07EB
	// 9102 repne movsw ;~ 0613:07EE
cs=0x613;eip=0x0007ee; 	X(	REPNE MOVSW);	// 9102 repne movsw ;~ 0613:07EE
cs=0x613;eip=0x0007f0; 	X(POP(si));	// 9103 pop     si ;~ 0613:07F0
cs=0x613;eip=0x0007f1; 	R(JMP(loc_14f09));	// 9104 jmp     short loc_14F09 ;~ 0613:07F1
loc_14f04:
	// 4864 
cs=0x613;eip=0x0007f4; 	X(MOV(*(raddr(ss,bp+var_ec)), 0));	// 9109 mov     [bp+var_EC], 0 ;~ 0613:07F4
loc_14f09:
	// 4865 
cs=0x613;eip=0x0007f9; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1c6)), 0));	// 9112 mov     [bp+vec_1C6], 0 ;~ 0613:07F9
cs=0x613;eip=0x0007ff; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), 0x7530));	// 9113 mov     [bp+var_1C4], 7530h ; 30000 ;~ 0613:07FF
cs=0x613;eip=0x000805; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), 0));	// 9114 mov     [bp+var_1C2], 0 ;~ 0613:0805
cs=0x613;eip=0x00080b; 	T(ax = bp+vec_fc);	// 9115 lea     ax, [bp+vec_FC] ;~ 0613:080B
cs=0x613;eip=0x00080f; 	X(PUSH(ax));	// 9116 push    ax ;~ 0613:080F
cs=0x613;eip=0x000810; 	T(MOV(ax, offset(dseg,mat_unk)));	// 9117 mov     ax, offset mat_unk ;~ 0613:0810
cs=0x613;eip=0x000813; 	X(PUSH(ax));	// 9118 push    ax ;~ 0613:0813
cs=0x613;eip=0x000814; 	T(ax = bp+vec_1c6);	// 9119 lea     ax, [bp+vec_1C6] ;~ 0613:0814
cs=0x613;eip=0x000818; 	X(PUSH(ax));	// 9120 push    ax ;~ 0613:0818
cs=0x613;eip=0x000819; 	R(CALLF(mat_mul_vector,0));	// 9121 call    mat_mul_vector ;~ 0613:0819
cs=0x613;eip=0x00081e; 	T(ADD(sp, 6));	// 9122 add     sp, 6 ;~ 0613:081E
cs=0x613;eip=0x000821; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9123 mov     bx, [bp+arg_0] ;~ 0613:0821
cs=0x613;eip=0x000824; 	T(CMP(*(raddr(ds,bx+0x0C1)), 0));	// 9124 cmp     byte ptr [bx+0C1h], 0 ;~ 0613:0824
cs=0x613;eip=0x000829; 	R(JZ(loc_14f76));	// 9125 jz      short loc_14F76 ;~ 0613:0829
cs=0x613;eip=0x00082b; 	T(CMP(*(dw*)(raddr(ss,bp+var_fa)), 0));	// 9126 cmp     [bp+var_FA], 0 ;~ 0613:082B
cs=0x613;eip=0x000830; 	R(JGE(loc_14f76));	// 9127 jge     short loc_14F76 ;~ 0613:0830
cs=0x613;eip=0x000832; 	T(CMP(*(dw*)(raddr(ds,bx+0x2C)), 0x1E00));	// 9128 cmp     word ptr [bx+2Ch], 1E00h ;~ 0613:0832
cs=0x613;eip=0x000837; 	R(JBE(loc_14f6e));	// 9129 jbe     short loc_14F6E ;~ 0613:0837
cs=0x613;eip=0x000839; 	X(MOV(*(dw*)(raddr(ss,bp+var_f0)), 0x0C0));	// 9130 mov     [bp+var_F0], 0C0h ; 'À' ;~ 0613:0839
cs=0x613;eip=0x00083f; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), 0x0FF40));	// 9131 mov     [bp+var_1C4], 0FF40h ;~ 0613:083F
cs=0x613;eip=0x000845; 	T(ax = bp+vec_e4);	// 9132 lea     ax, [bp+vec_E4] ;~ 0613:0845
cs=0x613;eip=0x000849; 	X(PUSH(ax));	// 9133 push    ax ;~ 0613:0849
cs=0x613;eip=0x00084a; 	T(MOV(ax, offset(dseg,mat_unk)));	// 9134 mov     ax, offset mat_unk ;~ 0613:084A
cs=0x613;eip=0x00084d; 	X(PUSH(ax));	// 9135 push    ax ;~ 0613:084D
cs=0x613;eip=0x00084e; 	T(ax = bp+vec_1c6);	// 9136 lea     ax, [bp+vec_1C6] ;~ 0613:084E
cs=0x613;eip=0x000852; 	X(PUSH(ax));	// 9137 push    ax ;~ 0613:0852
cs=0x613;eip=0x000853; 	R(CALLF(mat_mul_vector,0));	// 9138 call    mat_mul_vector ;~ 0613:0853
cs=0x613;eip=0x000858; 	T(ADD(sp, 6));	// 9139 add     sp, 6 ;~ 0613:0858
cs=0x613;eip=0x00085b; 	R(JMP(loc_14f7c));	// 9140 jmp     short loc_14F7C ;~ 0613:085B
loc_14f6e:
	// 4866 
cs=0x613;eip=0x00085e; 	X(MOV(*(dw*)(raddr(ss,bp+var_f0)), 0x0FF40));	// 9145 mov     [bp+var_F0], 0FF40h ;~ 0613:085E
cs=0x613;eip=0x000864; 	R(JMP(loc_14f7c));	// 9146 jmp     short loc_14F7C ;~ 0613:0864
loc_14f76:
	// 4867 
cs=0x613;eip=0x000866; 	X(MOV(*(dw*)(raddr(ss,bp+var_f0)), 0));	// 9151 mov     [bp+var_F0], 0 ;~ 0613:0866
loc_14f7c:
	// 4868 
cs=0x613;eip=0x00086c; 	X(MOV(vec_unk2, 0));	// 9155 mov     vec_unk2, 0 ;~ 0613:086C
cs=0x613;eip=0x000872; 	X(MOV(word_44f38, 0));	// 9156 mov     word_44F38, 0 ;~ 0613:0872
cs=0x613;eip=0x000878; 	X(MOV(planindex_copy, 0x0FFFF));	// 9157 mov     planindex_copy, 0FFFFh ;~ 0613:0878
cs=0x613;eip=0x00087e; 	T(ax = bp+vecl_1c0);	// 9158 lea     ax, [bp+vecl_1C0] ;~ 0613:087E
cs=0x613;eip=0x000882; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), ax));	// 9159 mov     [bp+var_DE], ax ;~ 0613:0882
cs=0x613;eip=0x000886; 	T(ax = bp+vecl_176);	// 9160 lea     ax, [bp+vecl_176] ;~ 0613:0886
cs=0x613;eip=0x00088a; 	X(MOV(*(dw*)(raddr(ss,bp+var_146)), ax));	// 9161 mov     [bp+var_146], ax ;~ 0613:088A
cs=0x613;eip=0x00088e; 	X(MOV(*(raddr(ss,bp+var_e8)), 0));	// 9162 mov     [bp+var_E8], 0 ;~ 0613:088E
cs=0x613;eip=0x000893; 	R(JMP(loc_14ffa));	// 9163 jmp     short loc_14FFA ;~ 0613:0893
loc_14fa6:
	// 4869 
cs=0x613;eip=0x000896; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9169 mov     bx, [bp+arg_0] ;~ 0613:0896
cs=0x613;eip=0x000899; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x36))));	// 9170 mov     ax, [bx+36h] ;~ 0613:0899
loc_14fac:
	// 4870 
cs=0x613;eip=0x00089c; 	X(MOV(pstate_f36mminf40sar2, ax));	// 9173 mov     pState_f36Mminf40sar2, ax ;~ 0613:089C
cs=0x613;eip=0x00089f; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9174 mov     al, [bp+var_E8] ;~ 0613:089F
cs=0x613;eip=0x0008a3; 	T(CBW);	// 9175 cbw ;~ 0613:08A3
cs=0x613;eip=0x0008a4; 	T(MOV(di, ax));	// 9176 mov     di, ax ;~ 0613:08A4
cs=0x613;eip=0x0008a6; 	T(SHL(di, 1));	// 9177 shl     di, 1 ;~ 0613:08A6
cs=0x613;eip=0x0008a8; 	T(MOV(ax, pstate_f36mminf40sar2));	// 9178 mov     ax, pState_f36Mminf40sar2 ;~ 0613:08A8
cs=0x613;eip=0x0008ab; 	X(MOV(*(dw*)(raddr(ss,bp+di+var_140)), ax));	// 9179 mov     [bp+di+var_140], ax ;~ 0613:08AB
cs=0x613;eip=0x0008af; 	X(PUSH(cs));	// 9180 push    cs ;~ 0613:08AF
cs=0x613;eip=0x0008b0; 	R(CALL(plane_rotate_op,0));	// 9181 call    near ptr plane_rotate_op ;~ 0613:08B0
cs=0x613;eip=0x0008b3; 	T(MOV(ax, vec_planerotopresult));	// 9182 mov     ax, vec_planerotopresult ;~ 0613:08B3
cs=0x613;eip=0x0008b6; 	T(CWD);	// 9183 cwd ;~ 0613:08B6
cs=0x613;eip=0x0008b7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9184 mov     bx, [bp+var_DE] ;~ 0613:08B7
cs=0x613;eip=0x0008bb; 	X(ADD(*(dw*)(raddr(ds,bx+0)), ax));	// 9185 add     [bx+0], ax ;~ 0613:08BB
cs=0x613;eip=0x0008bd; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 9186 adc     [bx+2], dx ;~ 0613:08BD
cs=0x613;eip=0x0008c0; 	T(MOV(ax, word_44f3e));	// 9187 mov     ax, word_44F3E ;~ 0613:08C0
cs=0x613;eip=0x0008c3; 	T(CWD);	// 9188 cwd ;~ 0613:08C3
cs=0x613;eip=0x0008c4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9189 mov     bx, [bp+var_DE] ;~ 0613:08C4
cs=0x613;eip=0x0008c8; 	X(ADD(*(dw*)(raddr(ds,bx+4)), ax));	// 9190 add     [bx+4], ax ;~ 0613:08C8
cs=0x613;eip=0x0008cb; 	X(ADC(*(dw*)(raddr(ds,bx+6)), dx));	// 9191 adc     [bx+6], dx ;~ 0613:08CB
cs=0x613;eip=0x0008ce; 	T(MOV(ax, word_44f40));	// 9192 mov     ax, word_44F40 ;~ 0613:08CE
cs=0x613;eip=0x0008d1; 	T(CWD);	// 9193 cwd ;~ 0613:08D1
cs=0x613;eip=0x0008d2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9194 mov     bx, [bp+var_DE] ;~ 0613:08D2
cs=0x613;eip=0x0008d6; 	X(ADD(*(dw*)(raddr(ds,bx+8)), ax));	// 9195 add     [bx+8], ax ;~ 0613:08D6
cs=0x613;eip=0x0008d9; 	X(ADC(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 9196 adc     [bx+0Ah], dx ;~ 0613:08D9
loc_14fec:
	// 4871 
cs=0x613;eip=0x0008dc; 	X(ADD(*(dw*)(raddr(ss,bp+var_de)), 0x0C));	// 9199 add     [bp+var_DE], 0Ch ;~ 0613:08DC
cs=0x613;eip=0x0008e1; 	X(ADD(*(dw*)(raddr(ss,bp+var_146)), 0x0C));	// 9200 add     [bp+var_146], 0Ch ;~ 0613:08E1
cs=0x613;eip=0x0008e6; 	X(INC(*(raddr(ss,bp+var_e8))));	// 9201 inc     [bp+var_E8] ;~ 0613:08E6
loc_14ffa:
	// 4872 
cs=0x613;eip=0x0008ea; 	T(CMP(*(raddr(ss,bp+var_e8)), 4));	// 9204 cmp     [bp+var_E8], 4 ;~ 0613:08EA
cs=0x613;eip=0x0008ef; 	R(JL(loc_15004));	// 9205 jl      short loc_15004 ;~ 0613:08EF
cs=0x613;eip=0x0008f1; 	R(JMP(loc_1513e));	// 9206 jmp     loc_1513E ;~ 0613:08F1
loc_15004:
	// 4873 
cs=0x613;eip=0x0008f4; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9210 mov     al, [bp+var_E8] ;~ 0613:08F4
cs=0x613;eip=0x0008f8; 	T(CBW);	// 9211 cbw ;~ 0613:08F8
cs=0x613;eip=0x0008f9; 	T(MOV(di, ax));	// 9212 mov     di, ax ;~ 0613:08F9
cs=0x613;eip=0x0008fb; 	T(SHL(di, 1));	// 9213 shl     di, 1 ;~ 0613:08FB
cs=0x613;eip=0x0008fd; 	T(ADD(di, ax));	// 9214 add     di, ax ;~ 0613:08FD
cs=0x613;eip=0x0008ff; 	T(SHL(di, 1));	// 9215 shl     di, 1           ; *6 ;~ 0613:08FF
cs=0x613;eip=0x000901; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 9216 mov     bx, [bp+arg_2] ;~ 0613:0901
cs=0x613;eip=0x000904; 	X(PUSH(si));	// 9217 push    si ;~ 0613:0904
cs=0x613;eip=0x000905; 	T(si = bx+di+0x0D2);	// 9218 lea     si, [bx+di+0D2h] ;~ 0613:0905
cs=0x613;eip=0x000909; 	T(di = bp+vec_1c6);	// 9219 lea     di, [bp+vec_1C6] ;~ 0613:0909
cs=0x613;eip=0x00090d; 	X(PUSH(ss));	// 9220 push    ss ;~ 0613:090D
cs=0x613;eip=0x00090e; 	X(POP(es));	// 9221 pop     es ;~ 0613:090E
cs=0x613;eip=0x00090f; 	X(MOVSW);	// 9222 movsw ;~ 0613:090F
cs=0x613;eip=0x000910; 	X(MOVSW);	// 9223 movsw ;~ 0613:0910
cs=0x613;eip=0x000911; 	X(MOVSW);	// 9224 movsw ;~ 0613:0911
cs=0x613;eip=0x000912; 	X(POP(si));	// 9225 pop     si ;~ 0613:0912
cs=0x613;eip=0x000913; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9226 mov     al, [bp+var_E8] ;~ 0613:0913
cs=0x613;eip=0x000917; 	T(CBW);	// 9227 cbw ;~ 0613:0917
cs=0x613;eip=0x000918; 	T(MOV(di, ax));	// 9228 mov     di, ax ;~ 0613:0918
cs=0x613;eip=0x00091a; 	T(SHL(di, 1));	// 9229 shl     di, 1 ;~ 0613:091A
cs=0x613;eip=0x00091c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9230 mov     bx, [bp+arg_0] ;~ 0613:091C
cs=0x613;eip=0x00091f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+di+0x54))));	// 9231 mov     ax, [bx+di+54h] ;~ 0613:091F
cs=0x613;eip=0x000922; 	T(ADD(ax, 0x180));	// 9232 add     ax, 180h        ; 384 = 24*16 ;~ 0613:0922
cs=0x613;eip=0x000925; 	T(NEG(ax));	// 9233 neg     ax ;~ 0613:0925
cs=0x613;eip=0x000927; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 9234 mov     [bp+var_1C4], ax ; adjusting wheel heights? ;~ 0613:0927
cs=0x613;eip=0x00092b; 	T(CMP(*(dw*)(raddr(ss,bp+var_f0)), 0));	// 9235 cmp     [bp+var_F0], 0 ;~ 0613:092B
cs=0x613;eip=0x000930; 	R(JGE(loc_1504a));	// 9236 jge     short loc_1504A ;~ 0613:0930
cs=0x613;eip=0x000932; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f0))));	// 9237 mov     ax, [bp+var_F0] ;~ 0613:0932
cs=0x613;eip=0x000936; 	X(SUB(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 9238 sub     [bp+var_1C4], ax ;~ 0613:0936
loc_1504a:
	// 4874 
cs=0x613;eip=0x00093a; 	T(CMP(*(raddr(ss,bp+var_ec)), 0));	// 9241 cmp     [bp+var_EC], 0 ;~ 0613:093A
cs=0x613;eip=0x00093f; 	R(JZ(loc_15077));	// 9242 jz      short loc_15077 ;~ 0613:093F
cs=0x613;eip=0x000941; 	T(ax = bp+vec_fc);	// 9243 lea     ax, [bp+vec_FC] ;~ 0613:0941
cs=0x613;eip=0x000945; 	X(PUSH(ax));	// 9244 push    ax ;~ 0613:0945
cs=0x613;eip=0x000946; 	T(ax = bp+var_10e);	// 9245 lea     ax, [bp+var_10E] ;~ 0613:0946
cs=0x613;eip=0x00094a; 	X(PUSH(ax));	// 9246 push    ax ;~ 0613:094A
cs=0x613;eip=0x00094b; 	T(ax = bp+vec_1c6);	// 9247 lea     ax, [bp+vec_1C6] ;~ 0613:094B
cs=0x613;eip=0x00094f; 	X(PUSH(ax));	// 9248 push    ax ;~ 0613:094F
cs=0x613;eip=0x000950; 	R(CALLF(mat_mul_vector,0));	// 9249 call    mat_mul_vector ;~ 0613:0950
cs=0x613;eip=0x000955; 	T(ADD(sp, 6));	// 9250 add     sp, 6 ;~ 0613:0955
cs=0x613;eip=0x000958; 	X(PUSH(si));	// 9251 push    si ;~ 0613:0958
cs=0x613;eip=0x000959; 	T(di = bp+vec_1c6);	// 9252 lea     di, [bp+vec_1C6] ;~ 0613:0959
cs=0x613;eip=0x00095d; 	T(si = bp+vec_fc);	// 9253 lea     si, [bp+vec_FC] ;~ 0613:095D
cs=0x613;eip=0x000961; 	X(PUSH(ss));	// 9254 push    ss ;~ 0613:0961
cs=0x613;eip=0x000962; 	X(POP(es));	// 9255 pop     es ;~ 0613:0962
cs=0x613;eip=0x000963; 	X(MOVSW);	// 9256 movsw ;~ 0613:0963
cs=0x613;eip=0x000964; 	X(MOVSW);	// 9257 movsw ;~ 0613:0964
cs=0x613;eip=0x000965; 	X(MOVSW);	// 9258 movsw ;~ 0613:0965
cs=0x613;eip=0x000966; 	X(POP(si));	// 9259 pop     si ;~ 0613:0966
loc_15077:
	// 4875 
cs=0x613;eip=0x000967; 	T(ax = bp+vec_fc);	// 9262 lea     ax, [bp+vec_FC] ;~ 0613:0967
cs=0x613;eip=0x00096b; 	X(PUSH(ax));	// 9263 push    ax ;~ 0613:096B
cs=0x613;eip=0x00096c; 	T(MOV(ax, offset(dseg,mat_unk)));	// 9264 mov     ax, offset mat_unk ;~ 0613:096C
cs=0x613;eip=0x00096f; 	X(PUSH(ax));	// 9265 push    ax ;~ 0613:096F
cs=0x613;eip=0x000970; 	T(ax = bp+vec_1c6);	// 9266 lea     ax, [bp+vec_1C6] ;~ 0613:0970
cs=0x613;eip=0x000974; 	X(PUSH(ax));	// 9267 push    ax ;~ 0613:0974
cs=0x613;eip=0x000975; 	R(CALLF(mat_mul_vector,0));	// 9268 call    mat_mul_vector ;~ 0613:0975
cs=0x613;eip=0x00097a; 	T(ADD(sp, 6));	// 9269 add     sp, 6 ;~ 0613:097A
cs=0x613;eip=0x00097d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vec_fc))));	// 9270 mov     ax, [bp+vec_FC] ;~ 0613:097D
cs=0x613;eip=0x000981; 	T(CWD);	// 9271 cwd ;~ 0613:0981
cs=0x613;eip=0x000982; 	T(ADD(ax, pstate_lvec1_x));	// 9272 add     ax, pState_lvec1_x ;~ 0613:0982
cs=0x613;eip=0x000986; 	T(ADC(dx, word_449c0));	// 9273 adc     dx, word_449C0 ;~ 0613:0986
cs=0x613;eip=0x00098a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9274 mov     bx, [bp+var_DE] ;~ 0613:098A
cs=0x613;eip=0x00098e; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 9275 mov     [bx+0], ax ;~ 0613:098E
cs=0x613;eip=0x000990; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 9276 mov     [bx+2], dx ;~ 0613:0990
cs=0x613;eip=0x000993; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_fa))));	// 9277 mov     ax, [bp+var_FA] ;~ 0613:0993
cs=0x613;eip=0x000997; 	T(CWD);	// 9278 cwd ;~ 0613:0997
cs=0x613;eip=0x000998; 	T(ADD(ax, pstate_lvec1_y));	// 9279 add     ax, pState_lvec1_y ;~ 0613:0998
cs=0x613;eip=0x00099c; 	T(ADC(dx, word_449c8));	// 9280 adc     dx, word_449C8 ;~ 0613:099C
cs=0x613;eip=0x0009a0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9281 mov     bx, [bp+var_DE] ;~ 0613:09A0
cs=0x613;eip=0x0009a4; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 9282 mov     [bx+4], ax ;~ 0613:09A4
cs=0x613;eip=0x0009a7; 	X(MOV(*(dw*)(raddr(ds,bx+6)), dx));	// 9283 mov     [bx+6], dx ;~ 0613:09A7
cs=0x613;eip=0x0009aa; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f8))));	// 9284 mov     ax, [bp+var_F8] ;~ 0613:09AA
cs=0x613;eip=0x0009ae; 	T(CWD);	// 9285 cwd ;~ 0613:09AE
cs=0x613;eip=0x0009af; 	T(ADD(ax, pstate_lvec1_z));	// 9286 add     ax, pState_lvec1_z ;~ 0613:09AF
cs=0x613;eip=0x0009b3; 	T(ADC(dx, word_449cc));	// 9287 adc     dx, word_449CC ;~ 0613:09B3
cs=0x613;eip=0x0009b7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9288 mov     bx, [bp+var_DE] ;~ 0613:09B7
cs=0x613;eip=0x0009bb; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 9289 mov     [bx+8], ax ;~ 0613:09BB
cs=0x613;eip=0x0009be; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 9290 mov     [bx+0Ah], dx ;~ 0613:09BE
cs=0x613;eip=0x0009c1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9291 mov     bx, [bp+var_146] ;~ 0613:09C1
cs=0x613;eip=0x0009c5; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_de))));	// 9292 mov     di, [bp+var_DE] ;~ 0613:09C5
cs=0x613;eip=0x0009c9; 	T(MOV(ax, *(dw*)(raddr(ds,di+0))));	// 9293 mov     ax, [di+0] ;~ 0613:09C9
cs=0x613;eip=0x0009cb; 	T(MOV(dx, *(dw*)(raddr(ds,di+2))));	// 9294 mov     dx, [di+2] ;~ 0613:09CB
cs=0x613;eip=0x0009ce; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 9295 mov     [bx+0], ax ;~ 0613:09CE
cs=0x613;eip=0x0009d0; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 9296 mov     [bx+2], dx ;~ 0613:09D0
cs=0x613;eip=0x0009d3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9297 mov     bx, [bp+var_146] ;~ 0613:09D3
cs=0x613;eip=0x0009d7; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_de))));	// 9298 mov     di, [bp+var_DE] ;~ 0613:09D7
cs=0x613;eip=0x0009db; 	T(MOV(ax, *(dw*)(raddr(ds,di+4))));	// 9299 mov     ax, [di+4] ;~ 0613:09DB
cs=0x613;eip=0x0009de; 	T(MOV(dx, *(dw*)(raddr(ds,di+6))));	// 9300 mov     dx, [di+6] ;~ 0613:09DE
cs=0x613;eip=0x0009e1; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 9301 mov     [bx+4], ax ;~ 0613:09E1
cs=0x613;eip=0x0009e4; 	X(MOV(*(dw*)(raddr(ds,bx+6)), dx));	// 9302 mov     [bx+6], dx ;~ 0613:09E4
cs=0x613;eip=0x0009e7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9303 mov     bx, [bp+var_146] ;~ 0613:09E7
cs=0x613;eip=0x0009eb; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_de))));	// 9304 mov     di, [bp+var_DE] ;~ 0613:09EB
cs=0x613;eip=0x0009ef; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 9305 mov     ax, [di+8] ;~ 0613:09EF
cs=0x613;eip=0x0009f2; 	T(MOV(dx, *(dw*)(raddr(ds,di+0x0A))));	// 9306 mov     dx, [di+0Ah] ;~ 0613:09F2
cs=0x613;eip=0x0009f5; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 9307 mov     [bx+8], ax ;~ 0613:09F5
cs=0x613;eip=0x0009f8; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 9308 mov     [bx+0Ah], dx ;~ 0613:09F8
cs=0x613;eip=0x0009fb; 	T(CMP(*(dw*)(raddr(ss,bp+var_e6)), 0));	// 9309 cmp     [bp+var_E6], 0 ;~ 0613:09FB
cs=0x613;eip=0x000a00; 	R(JNZ(loc_15115));	// 9310 jnz     short loc_15115 ;~ 0613:0A00
cs=0x613;eip=0x000a02; 	R(JMP(loc_14fec));	// 9311 jmp     loc_14FEC ;~ 0613:0A02
loc_15115:
	// 4876 
cs=0x613;eip=0x000a05; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e6))));	// 9315 mov     ax, [bp+var_E6] ;~ 0613:0A05
cs=0x613;eip=0x000a09; 	X(MOV(word_44f3a, ax));	// 9316 mov     word_44F3A, ax ;~ 0613:0A09
cs=0x613;eip=0x000a0c; 	T(CMP(*(dw*)(raddr(ss,bp+pstate_f40_sar2)), 0));	// 9317 cmp     [bp+pState_f40_sar2], 0 ;~ 0613:0A0C
cs=0x613;eip=0x000a11; 	R(JNZ(loc_15126));	// 9318 jnz     short loc_15126 ;~ 0613:0A11
cs=0x613;eip=0x000a13; 	R(JMP(loc_14fa6));	// 9319 jmp     loc_14FA6 ;~ 0613:0A13
loc_15126:
	// 4877 
cs=0x613;eip=0x000a16; 	T(CMP(*(raddr(ss,bp+var_e8)), 2));	// 9323 cmp     [bp+var_E8], 2 ;~ 0613:0A16
cs=0x613;eip=0x000a1b; 	R(JL(loc_15130));	// 9324 jl      short loc_15130 ;~ 0613:0A1B
cs=0x613;eip=0x000a1d; 	R(JMP(loc_14fa6));	// 9325 jmp     loc_14FA6 ;~ 0613:0A1D
loc_15130:
	// 4878 
cs=0x613;eip=0x000a20; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9329 mov     bx, [bp+arg_0] ;~ 0613:0A20
cs=0x613;eip=0x000a23; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x36))));	// 9330 mov     ax, [bx+36h] ;~ 0613:0A23
cs=0x613;eip=0x000a26; 	T(SUB(ax, *(dw*)(raddr(ss,bp+pstate_f40_sar2))));	// 9331 sub     ax, [bp+pState_f40_sar2] ;~ 0613:0A26
cs=0x613;eip=0x000a2a; 	R(JMP(loc_14fac));	// 9332 jmp     loc_14FAC ;~ 0613:0A2A
loc_1513e:
	// 4879 
cs=0x613;eip=0x000a2e; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 9337 mov     [bp+var_2], 0 ;~ 0613:0A2E
loc_15142:
	// 4880 
cs=0x613;eip=0x000a32; 	X(INC(*(raddr(ss,bp+var_2))));	// 9340 inc     [bp+var_2] ;~ 0613:0A32
cs=0x613;eip=0x000a35; 	T(CMP(*(raddr(ss,bp+var_2)), 5));	// 9341 cmp     [bp+var_2], 5 ;~ 0613:0A35
cs=0x613;eip=0x000a39; 	R(JNZ(loc_151a2));	// 9342 jnz     short loc_151A2 ;~ 0613:0A39
cs=0x613;eip=0x000a3b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9343 mov     bx, [bp+arg_0] ;~ 0613:0A3B
cs=0x613;eip=0x000a3e; 	X(MOV(*(dw*)(raddr(ds,bx+0x36)), 0x200));	// 9344 mov     word ptr [bx+36h], 200h ;~ 0613:0A3E
cs=0x613;eip=0x000a43; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 9345 mov     al, [bp+arg_8] ;~ 0613:0A43
cs=0x613;eip=0x000a46; 	T(CBW);	// 9346 cbw ;~ 0613:0A46
cs=0x613;eip=0x000a47; 	X(PUSH(ax));	// 9347 push    ax ;~ 0613:0A47
cs=0x613;eip=0x000a48; 	T(MOV(ax, 1));	// 9348 mov     ax, 1 ;~ 0613:0A48
cs=0x613;eip=0x000a4b; 	X(PUSH(ax));	// 9349 push    ax ;~ 0613:0A4B
cs=0x613;eip=0x000a4c; 	X(PUSH(cs));	// 9350 push    cs ;~ 0613:0A4C
cs=0x613;eip=0x000a4d; 	R(CALL(update_crash_state,0));	// 9351 call    near ptr update_crash_state ;~ 0613:0A4D
cs=0x613;eip=0x000a50; 	T(ADD(sp, 4));	// 9352 add     sp, 4 ;~ 0613:0A50
loc_15163:
	// 4881 
cs=0x613;eip=0x000a53; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9355 mov     bx, [bp+arg_0]  ; grip data... ;~ 0613:0A53
cs=0x613;eip=0x000a56; 	T(CMP(*(raddr(ds,bx+0x0C2)), 5));	// 9356 cmp     byte ptr [bx+0C2h], 5 ;~ 0613:0A56
cs=0x613;eip=0x000a5b; 	R(JNZ(loc_15192));	// 9357 jnz     short loc_15192 ;~ 0613:0A5B
cs=0x613;eip=0x000a5d; 	T(CMP(*(raddr(ds,bx+0x0C3)), 5));	// 9358 cmp     byte ptr [bx+0C3h], 5 ;~ 0613:0A5D
cs=0x613;eip=0x000a62; 	R(JNZ(loc_15192));	// 9359 jnz     short loc_15192 ;~ 0613:0A62
cs=0x613;eip=0x000a64; 	T(CMP(*(raddr(ds,bx+0x0C4)), 5));	// 9360 cmp     byte ptr [bx+0C4h], 5 ;~ 0613:0A64
cs=0x613;eip=0x000a69; 	R(JNZ(loc_15192));	// 9361 jnz     short loc_15192 ;~ 0613:0A69
cs=0x613;eip=0x000a6b; 	T(CMP(*(raddr(ds,bx+0x0C5)), 5));	// 9362 cmp     byte ptr [bx+0C5h], 5 ;~ 0613:0A6B
cs=0x613;eip=0x000a70; 	R(JNZ(loc_15192));	// 9363 jnz     short loc_15192 ;~ 0613:0A70
cs=0x613;eip=0x000a72; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 9364 mov     al, [bp+arg_8] ;~ 0613:0A72
cs=0x613;eip=0x000a75; 	T(CBW);	// 9365 cbw ;~ 0613:0A75
cs=0x613;eip=0x000a76; 	X(PUSH(ax));	// 9366 push    ax ;~ 0613:0A76
cs=0x613;eip=0x000a77; 	T(MOV(ax, 2));	// 9367 mov     ax, 2 ;~ 0613:0A77
cs=0x613;eip=0x000a7a; 	X(PUSH(ax));	// 9368 push    ax ;~ 0613:0A7A
cs=0x613;eip=0x000a7b; 	X(PUSH(cs));	// 9369 push    cs ;~ 0613:0A7B
cs=0x613;eip=0x000a7c; 	R(CALL(update_crash_state,0));	// 9370 call    near ptr update_crash_state ;~ 0613:0A7C
cs=0x613;eip=0x000a7f; 	T(ADD(sp, 4));	// 9371 add     sp, 4 ;~ 0613:0A7F
loc_15192:
	// 4882 
cs=0x613;eip=0x000a82; 	T(ax = bp+vecl_1c0);	// 9375 lea     ax, [bp+vecl_1C0] ;~ 0613:0A82
cs=0x613;eip=0x000a86; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), ax));	// 9376 mov     [bp+var_DE], ax ;~ 0613:0A86
cs=0x613;eip=0x000a8a; 	X(MOV(*(raddr(ss,bp+var_e8)), 0));	// 9377 mov     [bp+var_E8], 0 ;~ 0613:0A8A
cs=0x613;eip=0x000a8f; 	R(JMP(loc_15dd1));	// 9378 jmp     loc_15DD1 ;~ 0613:0A8F
loc_151a2:
	// 4883 
cs=0x613;eip=0x000a92; 	T(ax = bp+vecl_1c0);	// 9382 lea     ax, [bp+vecl_1C0] ;~ 0613:0A92
cs=0x613;eip=0x000a96; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), ax));	// 9383 mov     [bp+var_DE], ax ;~ 0613:0A96
cs=0x613;eip=0x000a9a; 	T(ax = bp+vecl_176);	// 9384 lea     ax, [bp+vecl_176] ;~ 0613:0A9A
cs=0x613;eip=0x000a9e; 	X(MOV(*(dw*)(raddr(ss,bp+var_146)), ax));	// 9385 mov     [bp+var_146], ax ;~ 0613:0A9E
cs=0x613;eip=0x000aa2; 	X(MOV(*(raddr(ss,bp+var_e8)), 0));	// 9386 mov     [bp+var_E8], 0 ;~ 0613:0AA2
cs=0x613;eip=0x000aa7; 	R(JMP(loc_15d39));	// 9387 jmp     loc_15D39 ;~ 0613:0AA7
loc_151ba:
	// 4884 
cs=0x613;eip=0x000aaa; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9391 mov     al, [bp+var_E8] ;~ 0613:0AAA
cs=0x613;eip=0x000aae; 	T(CBW);	// 9392 cbw ;~ 0613:0AAE
cs=0x613;eip=0x000aaf; 	T(MOV(cx, ax));	// 9393 mov     cx, ax ;~ 0613:0AAF
cs=0x613;eip=0x000ab1; 	T(SHL(ax, 1));	// 9394 shl     ax, 1 ;~ 0613:0AB1
cs=0x613;eip=0x000ab3; 	T(ADD(ax, cx));	// 9395 add     ax, cx ;~ 0613:0AB3
cs=0x613;eip=0x000ab5; 	T(SHL(ax, 1));	// 9396 shl     ax, 1 ;~ 0613:0AB5
cs=0x613;eip=0x000ab7; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 9397 add     ax, [bp+arg_0] ;~ 0613:0AB7
cs=0x613;eip=0x000aba; 	T(ADD(ax, 0x74));	// 9398 add     ax, 74h ;~ 0613:0ABA
cs=0x613;eip=0x000abd; 	X(PUSH(ax));	// 9399 push    ax ;~ 0613:0ABD
cs=0x613;eip=0x000abe; 	T(ax = bp+vec_1c6);	// 9400 lea     ax, [bp+vec_1C6] ;~ 0613:0ABE
cs=0x613;eip=0x000ac2; 	X(PUSH(ax));	// 9401 push    ax ;~ 0613:0AC2
cs=0x613;eip=0x000ac3; 	R(CALLF(build_track_object,0));	// 9402 call    build_track_object ;~ 0613:0AC3
cs=0x613;eip=0x000ac8; 	T(ADD(sp, 4));	// 9403 add     sp, 4 ;~ 0613:0AC8
loc_151db:
	// 4885 
cs=0x613;eip=0x000acb; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9406 mov     al, [bp+var_E8] ;~ 0613:0ACB
cs=0x613;eip=0x000acf; 	T(CBW);	// 9407 cbw ;~ 0613:0ACF
cs=0x613;eip=0x000ad0; 	T(MOV(di, ax));	// 9408 mov     di, ax ;~ 0613:0AD0
cs=0x613;eip=0x000ad2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9409 mov     bx, [bp+arg_0] ;~ 0613:0AD2
cs=0x613;eip=0x000ad5; 	T(MOV(al, current_surf_type));	// 9410 mov     al, current_surf_type ;~ 0613:0AD5
cs=0x613;eip=0x000ad8; 	X(MOV(*(raddr(ds,bx+di+0x0C2)), al));	// 9411 mov     [bx+di+0C2h], al ; a CARSTATE field ;~ 0613:0AD8
cs=0x613;eip=0x000adc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9412 mov     bx, [bp+var_DE] ;~ 0613:0ADC
cs=0x613;eip=0x000ae0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 9413 mov     ax, [bx+0] ;~ 0613:0AE0
cs=0x613;eip=0x000ae2; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 9414 mov     dx, [bx+2] ;~ 0613:0AE2
cs=0x613;eip=0x000ae5; 	T(MOV(cl, 6));	// 9415 mov     cl, 6 ;~ 0613:0AE5
loc_151f7:
	// 4886 
cs=0x613;eip=0x000ae7; 	T(SAR(dx, 1));	// 9418 sar     dx, 1 ;~ 0613:0AE7
cs=0x613;eip=0x000ae9; 	T(RCR(ax, 1));	// 9419 rcr     ax, 1 ;~ 0613:0AE9
cs=0x613;eip=0x000aeb; 	T(DEC(cl));	// 9420 dec     cl ;~ 0613:0AEB
cs=0x613;eip=0x000aed; 	R(JNZ(loc_151f7));	// 9421 jnz     short loc_151F7 ;~ 0613:0AED
cs=0x613;eip=0x000aef; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1c6)), ax));	// 9422 mov     [bp+vec_1C6], ax ;~ 0613:0AEF
cs=0x613;eip=0x000af3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9423 mov     bx, [bp+var_DE] ;~ 0613:0AF3
cs=0x613;eip=0x000af7; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 9424 mov     ax, [bx+4] ;~ 0613:0AF7
cs=0x613;eip=0x000afa; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 9425 mov     dx, [bx+6] ;~ 0613:0AFA
cs=0x613;eip=0x000afd; 	T(MOV(cl, 6));	// 9426 mov     cl, 6 ;~ 0613:0AFD
loc_1520f:
	// 4887 
cs=0x613;eip=0x000aff; 	T(SAR(dx, 1));	// 9429 sar     dx, 1 ;~ 0613:0AFF
cs=0x613;eip=0x000b01; 	T(RCR(ax, 1));	// 9430 rcr     ax, 1 ;~ 0613:0B01
cs=0x613;eip=0x000b03; 	T(DEC(cl));	// 9431 dec     cl ;~ 0613:0B03
cs=0x613;eip=0x000b05; 	R(JNZ(loc_1520f));	// 9432 jnz     short loc_1520F ;~ 0613:0B05
cs=0x613;eip=0x000b07; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 9433 mov     [bp+var_1C4], ax ;~ 0613:0B07
cs=0x613;eip=0x000b0b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9434 mov     bx, [bp+var_DE] ;~ 0613:0B0B
cs=0x613;eip=0x000b0f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 9435 mov     ax, [bx+8] ;~ 0613:0B0F
cs=0x613;eip=0x000b12; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 9436 mov     dx, [bx+0Ah] ;~ 0613:0B12
cs=0x613;eip=0x000b15; 	T(MOV(cl, 6));	// 9437 mov     cl, 6 ;~ 0613:0B15
loc_15227:
	// 4888 
cs=0x613;eip=0x000b17; 	T(SAR(dx, 1));	// 9440 sar     dx, 1 ;~ 0613:0B17
cs=0x613;eip=0x000b19; 	T(RCR(ax, 1));	// 9441 rcr     ax, 1 ;~ 0613:0B19
cs=0x613;eip=0x000b1b; 	T(DEC(cl));	// 9442 dec     cl ;~ 0613:0B1B
cs=0x613;eip=0x000b1d; 	R(JNZ(loc_15227));	// 9443 jnz     short loc_15227 ;~ 0613:0B1D
cs=0x613;eip=0x000b1f; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 9444 mov     [bp+var_1C2], ax ;~ 0613:0B1F
cs=0x613;eip=0x000b23; 	T(CMP(byte_44889, 2));	// 9445 cmp     byte_44889, 2 ;~ 0613:0B23
cs=0x613;eip=0x000b28; 	R(JNZ(loc_15240));	// 9446 jnz     short loc_15240 ;~ 0613:0B28
cs=0x613;eip=0x000b2a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c4))));	// 9447 mov     ax, [bp+var_1C4] ;~ 0613:0B2A
cs=0x613;eip=0x000b2e; 	R(JMP(loc_15257));	// 9448 jmp     short loc_15257 ;~ 0613:0B2E
loc_15240:
	// 4889 
cs=0x613;eip=0x000b30; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c2))));	// 9452 push    [bp+var_1C2] ;~ 0613:0B30
cs=0x613;eip=0x000b34; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c4))));	// 9453 push    [bp+var_1C4] ;~ 0613:0B34
cs=0x613;eip=0x000b38; 	X(PUSH(*(dw*)(raddr(ss,bp+vec_1c6))));	// 9454 push    [bp+vec_1C6] ;~ 0613:0B38
cs=0x613;eip=0x000b3c; 	X(PUSH(planindex));	// 9455 push    planindex ;~ 0613:0B3C
cs=0x613;eip=0x000b40; 	X(PUSH(cs));	// 9456 push    cs ;~ 0613:0B40
cs=0x613;eip=0x000b41; 	R(CALL(plane_origin_op,0));	// 9457 call    near ptr plane_origin_op ;~ 0613:0B41
cs=0x613;eip=0x000b44; 	T(ADD(sp, 8));	// 9458 add     sp, 8 ;~ 0613:0B44
loc_15257:
	// 4890 
cs=0x613;eip=0x000b47; 	X(MOV(nextposandnormalip, ax));	// 9461 mov     nextPosAndNormalIP, ax ;~ 0613:0B47
cs=0x613;eip=0x000b4a; 	T(CMP(wallindex, 0x0FFFF));	// 9462 cmp     wallindex, 0FFFFh ;~ 0613:0B4A
cs=0x613;eip=0x000b4f; 	R(JNZ(loc_15264));	// 9463 jnz     short loc_15264 ;~ 0613:0B4F
cs=0x613;eip=0x000b51; 	R(JMP(loc_15950));	// 9464 jmp     loc_15950 ;~ 0613:0B51
loc_15264:
	// 4891 
cs=0x613;eip=0x000b54; 	T(MOV(ax, elrdwallrelated));	// 9468 mov     ax, elRdWallRelated ;~ 0613:0B54
cs=0x613;eip=0x000b57; 	T(CMP(nextposandnormalip, ax));	// 9469 cmp     nextPosAndNormalIP, ax ;~ 0613:0B57
cs=0x613;eip=0x000b5b; 	R(JG(loc_15270));	// 9470 jg      short loc_15270 ;~ 0613:0B5B
cs=0x613;eip=0x000b5d; 	R(JMP(loc_15950));	// 9471 jmp     loc_15950 ;~ 0613:0B5D
loc_15270:
	// 4892 
cs=0x613;eip=0x000b60; 	T(MOV(ax, wallheight));	// 9475 mov     ax, wallHeight ;~ 0613:0B60
cs=0x613;eip=0x000b63; 	T(CMP(nextposandnormalip, ax));	// 9476 cmp     nextPosAndNormalIP, ax ;~ 0613:0B63
cs=0x613;eip=0x000b67; 	R(JL(loc_1527c));	// 9477 jl      short loc_1527C ;~ 0613:0B67
cs=0x613;eip=0x000b69; 	R(JMP(loc_15950));	// 9478 jmp     loc_15950 ;~ 0613:0B69
loc_1527c:
	// 4893 
cs=0x613;eip=0x000b6c; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9482 mov     al, [bp+var_E8] ;~ 0613:0B6C
cs=0x613;eip=0x000b70; 	T(CBW);	// 9483 cbw ;~ 0613:0B70
cs=0x613;eip=0x000b71; 	T(MOV(cx, ax));	// 9484 mov     cx, ax ;~ 0613:0B71
cs=0x613;eip=0x000b73; 	T(SHL(ax, 1));	// 9485 shl     ax, 1 ;~ 0613:0B73
cs=0x613;eip=0x000b75; 	T(ADD(ax, cx));	// 9486 add     ax, cx ;~ 0613:0B75
cs=0x613;eip=0x000b77; 	T(SHL(ax, 1));	// 9487 shl     ax, 1 ;~ 0613:0B77
cs=0x613;eip=0x000b79; 	T(MOV(di, ax));	// 9488 mov     di, ax ;~ 0613:0B79
cs=0x613;eip=0x000b7b; 	T(ADD(di, *(dw*)(raddr(ss,bp+arg_0))));	// 9489 add     di, [bp+arg_0] ;~ 0613:0B7B
cs=0x613;eip=0x000b7e; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x74))));	// 9490 mov     ax, [di+74h] ;~ 0613:0B7E
cs=0x613;eip=0x000b81; 	T(SUB(ax, wallstartx));	// 9491 sub     ax, wallStartX ;~ 0613:0B81
cs=0x613;eip=0x000b85; 	X(MOV(*(dw*)(raddr(ss,bp+vec_182)), ax));	// 9492 mov     [bp+vec_182], ax ;~ 0613:0B85
cs=0x613;eip=0x000b89; 	X(MOV(*(dw*)(raddr(ss,bp+var_180)), 0));	// 9493 mov     [bp+var_180], 0 ;~ 0613:0B89
cs=0x613;eip=0x000b8f; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x78))));	// 9494 mov     ax, [di+78h] ;~ 0613:0B8F
cs=0x613;eip=0x000b92; 	T(SUB(ax, wallstartz));	// 9495 sub     ax, wallStartZ ;~ 0613:0B92
cs=0x613;eip=0x000b96; 	X(MOV(*(dw*)(raddr(ss,bp+var_17e)), ax));	// 9496 mov     [bp+var_17E], ax ;~ 0613:0B96
cs=0x613;eip=0x000b9a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9497 mov     bx, [bp+var_DE] ;~ 0613:0B9A
cs=0x613;eip=0x000b9e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 9498 mov     ax, [bx+0] ;~ 0613:0B9E
cs=0x613;eip=0x000ba0; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 9499 mov     dx, [bx+2] ;~ 0613:0BA0
cs=0x613;eip=0x000ba3; 	T(MOV(cl, 6));	// 9500 mov     cl, 6 ;~ 0613:0BA3
loc_152b5:
	// 4894 
cs=0x613;eip=0x000ba5; 	T(SAR(dx, 1));	// 9503 sar     dx, 1 ;~ 0613:0BA5
cs=0x613;eip=0x000ba7; 	T(RCR(ax, 1));	// 9504 rcr     ax, 1 ;~ 0613:0BA7
cs=0x613;eip=0x000ba9; 	T(DEC(cl));	// 9505 dec     cl ;~ 0613:0BA9
cs=0x613;eip=0x000bab; 	R(JNZ(loc_152b5));	// 9506 jnz     short loc_152B5 ;~ 0613:0BAB
cs=0x613;eip=0x000bad; 	T(SUB(ax, wallstartx));	// 9507 sub     ax, wallStartX ;~ 0613:0BAD
cs=0x613;eip=0x000bb1; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1e4)), ax));	// 9508 mov     [bp+vec_1E4], ax ;~ 0613:0BB1
cs=0x613;eip=0x000bb5; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e2)), 0));	// 9509 mov     [bp+var_1E2], 0 ;~ 0613:0BB5
cs=0x613;eip=0x000bbb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9510 mov     bx, [bp+var_DE] ;~ 0613:0BBB
cs=0x613;eip=0x000bbf; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 9511 mov     ax, [bx+8] ;~ 0613:0BBF
cs=0x613;eip=0x000bc2; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 9512 mov     dx, [bx+0Ah] ;~ 0613:0BC2
cs=0x613;eip=0x000bc5; 	T(MOV(cl, 6));	// 9513 mov     cl, 6 ;~ 0613:0BC5
loc_152d7:
	// 4895 
cs=0x613;eip=0x000bc7; 	T(SAR(dx, 1));	// 9516 sar     dx, 1 ;~ 0613:0BC7
cs=0x613;eip=0x000bc9; 	T(RCR(ax, 1));	// 9517 rcr     ax, 1 ;~ 0613:0BC9
cs=0x613;eip=0x000bcb; 	T(DEC(cl));	// 9518 dec     cl ;~ 0613:0BCB
cs=0x613;eip=0x000bcd; 	R(JNZ(loc_152d7));	// 9519 jnz     short loc_152D7 ;~ 0613:0BCD
cs=0x613;eip=0x000bcf; 	T(SUB(ax, wallstartz));	// 9520 sub     ax, wallStartZ ;~ 0613:0BCF
cs=0x613;eip=0x000bd3; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e0)), ax));	// 9521 mov     [bp+var_1E0], ax ;~ 0613:0BD3
cs=0x613;eip=0x000bd7; 	T(MOV(ax, wallorientation));	// 9522 mov     ax, wallOrientation ;~ 0613:0BD7
cs=0x613;eip=0x000bda; 	T(NEG(ax));	// 9523 neg     ax ;~ 0613:0BDA
cs=0x613;eip=0x000bdc; 	T(SUB(ax, 0x100));	// 9524 sub     ax, 100h ;~ 0613:0BDC
cs=0x613;eip=0x000bdf; 	X(PUSH(ax));	// 9525 push    ax ;~ 0613:0BDF
cs=0x613;eip=0x000be0; 	T(ax = bp+mat_134);	// 9526 lea     ax, [bp+mat_134] ;~ 0613:0BE0
cs=0x613;eip=0x000be4; 	X(PUSH(ax));	// 9527 push    ax ;~ 0613:0BE4
cs=0x613;eip=0x000be5; 	R(CALLF(mat_rot_y,0));	// 9528 call    mat_rot_y ;~ 0613:0BE5
cs=0x613;eip=0x000bea; 	T(ADD(sp, 4));	// 9529 add     sp, 4 ;~ 0613:0BEA
cs=0x613;eip=0x000bed; 	T(ax = bp+vec_c);	// 9530 lea     ax, [bp+vec_C] ;~ 0613:0BED
cs=0x613;eip=0x000bf0; 	X(PUSH(ax));	// 9531 push    ax ;~ 0613:0BF0
cs=0x613;eip=0x000bf1; 	T(ax = bp+mat_134);	// 9532 lea     ax, [bp+mat_134] ;~ 0613:0BF1
cs=0x613;eip=0x000bf5; 	X(PUSH(ax));	// 9533 push    ax ;~ 0613:0BF5
cs=0x613;eip=0x000bf6; 	T(ax = bp+vec_182);	// 9534 lea     ax, [bp+vec_182] ;~ 0613:0BF6
cs=0x613;eip=0x000bfa; 	X(PUSH(ax));	// 9535 push    ax ;~ 0613:0BFA
cs=0x613;eip=0x000bfb; 	R(CALLF(mat_mul_vector,0));	// 9536 call    mat_mul_vector ;~ 0613:0BFB
cs=0x613;eip=0x000c00; 	T(ADD(sp, 6));	// 9537 add     sp, 6 ;~ 0613:0C00
cs=0x613;eip=0x000c03; 	T(ax = bp+vec_1c);	// 9538 lea     ax, [bp+vec_1C] ;~ 0613:0C03
cs=0x613;eip=0x000c06; 	X(PUSH(ax));	// 9539 push    ax ;~ 0613:0C06
cs=0x613;eip=0x000c07; 	T(ax = bp+mat_134);	// 9540 lea     ax, [bp+mat_134] ;~ 0613:0C07
cs=0x613;eip=0x000c0b; 	X(PUSH(ax));	// 9541 push    ax ;~ 0613:0C0B
cs=0x613;eip=0x000c0c; 	T(ax = bp+vec_1e4);	// 9542 lea     ax, [bp+vec_1E4] ;~ 0613:0C0C
cs=0x613;eip=0x000c10; 	X(PUSH(ax));	// 9543 push    ax ;~ 0613:0C10
cs=0x613;eip=0x000c11; 	R(CALLF(mat_mul_vector,0));	// 9544 call    mat_mul_vector ;~ 0613:0C11
cs=0x613;eip=0x000c16; 	T(ADD(sp, 6));	// 9545 add     sp, 6 ;~ 0613:0C16
cs=0x613;eip=0x000c19; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 9546 cmp     [bp+var_18], 0 ;~ 0613:0C19
cs=0x613;eip=0x000c1d; 	R(JLE(loc_15338));	// 9547 jle     short loc_15338 ;~ 0613:0C1D
cs=0x613;eip=0x000c1f; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 9548 cmp     [bp+var_8], 0 ;~ 0613:0C1F
cs=0x613;eip=0x000c23; 	R(JLE(loc_15338));	// 9549 jle     short loc_15338 ;~ 0613:0C23
cs=0x613;eip=0x000c25; 	R(JMP(loc_15950));	// 9550 jmp     loc_15950 ;~ 0613:0C25
loc_15338:
	// 4896 
cs=0x613;eip=0x000c28; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 9555 cmp     [bp+var_18], 0 ;~ 0613:0C28
cs=0x613;eip=0x000c2c; 	R(JGE(loc_15347));	// 9556 jge     short loc_15347 ;~ 0613:0C2C
cs=0x613;eip=0x000c2e; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 9557 cmp     [bp+var_8], 0 ;~ 0613:0C2E
cs=0x613;eip=0x000c32; 	R(JGE(loc_15347));	// 9558 jge     short loc_15347 ;~ 0613:0C32
cs=0x613;eip=0x000c34; 	R(JMP(loc_15950));	// 9559 jmp     loc_15950 ;~ 0613:0C34
loc_15347:
	// 4897 
cs=0x613;eip=0x000c37; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 9564 mov     ax, [bp+var_8] ;~ 0613:0C37
cs=0x613;eip=0x000c3a; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), ax));	// 9565 cmp     [bp+var_18], ax ;~ 0613:0C3A
cs=0x613;eip=0x000c3d; 	R(JLE(loc_1537c));	// 9566 jle     short loc_1537C ;~ 0613:0C3D
cs=0x613;eip=0x000c3f; 	X(MOV(*(raddr(ss,bp+var_136)), 1));	// 9567 mov     [bp+var_136], 1 ;~ 0613:0C3F
cs=0x613;eip=0x000c44; 	X(PUSH(si));	// 9568 push    si ;~ 0613:0C44
cs=0x613;eip=0x000c45; 	T(di = bp+vec_fc);	// 9569 lea     di, [bp+vec_FC] ;~ 0613:0C45
cs=0x613;eip=0x000c49; 	T(si = bp+vec_1c);	// 9570 lea     si, [bp+vec_1C] ;~ 0613:0C49
cs=0x613;eip=0x000c4c; 	X(PUSH(ss));	// 9571 push    ss ;~ 0613:0C4C
cs=0x613;eip=0x000c4d; 	X(POP(es));	// 9572 pop     es ;~ 0613:0C4D
cs=0x613;eip=0x000c4e; 	X(MOVSW);	// 9573 movsw ;~ 0613:0C4E
cs=0x613;eip=0x000c4f; 	X(MOVSW);	// 9574 movsw ;~ 0613:0C4F
cs=0x613;eip=0x000c50; 	X(MOVSW);	// 9575 movsw ;~ 0613:0C50
cs=0x613;eip=0x000c51; 	X(POP(si));	// 9576 pop     si ;~ 0613:0C51
cs=0x613;eip=0x000c52; 	X(PUSH(si));	// 9577 push    si ;~ 0613:0C52
cs=0x613;eip=0x000c53; 	T(di = bp+vec_1c);	// 9578 lea     di, [bp+vec_1C] ;~ 0613:0C53
cs=0x613;eip=0x000c56; 	T(si = bp+vec_c);	// 9579 lea     si, [bp+vec_C] ;~ 0613:0C56
cs=0x613;eip=0x000c59; 	X(MOVSW);	// 9580 movsw ;~ 0613:0C59
cs=0x613;eip=0x000c5a; 	X(MOVSW);	// 9581 movsw ;~ 0613:0C5A
cs=0x613;eip=0x000c5b; 	X(MOVSW);	// 9582 movsw ;~ 0613:0C5B
cs=0x613;eip=0x000c5c; 	X(POP(si));	// 9583 pop     si ;~ 0613:0C5C
cs=0x613;eip=0x000c5d; 	X(PUSH(si));	// 9584 push    si ;~ 0613:0C5D
cs=0x613;eip=0x000c5e; 	T(di = bp+vec_c);	// 9585 lea     di, [bp+vec_C] ;~ 0613:0C5E
cs=0x613;eip=0x000c61; 	T(si = bp+vec_fc);	// 9586 lea     si, [bp+vec_FC] ;~ 0613:0C61
cs=0x613;eip=0x000c65; 	X(MOVSW);	// 9587 movsw ;~ 0613:0C65
cs=0x613;eip=0x000c66; 	X(MOVSW);	// 9588 movsw ;~ 0613:0C66
cs=0x613;eip=0x000c67; 	X(MOVSW);	// 9589 movsw ;~ 0613:0C67
cs=0x613;eip=0x000c68; 	X(POP(si));	// 9590 pop     si ;~ 0613:0C68
cs=0x613;eip=0x000c69; 	R(JMP(loc_15381));	// 9591 jmp     short loc_15381 ;~ 0613:0C69
loc_1537c:
	// 4898 
cs=0x613;eip=0x000c6c; 	X(MOV(*(raddr(ss,bp+var_136)), 0));	// 9596 mov     [bp+var_136], 0 ;~ 0613:0C6C
loc_15381:
	// 4899 
cs=0x613;eip=0x000c71; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 9599 cmp     [bp+var_18], 0 ;~ 0613:0C71
cs=0x613;eip=0x000c75; 	R(JNZ(loc_15398));	// 9600 jnz     short loc_15398 ;~ 0613:0C75
cs=0x613;eip=0x000c77; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e6))));	// 9601 mov     ax, [bp+var_E6] ;~ 0613:0C77
cs=0x613;eip=0x000c7b; 	X(MOV(*(dw*)(raddr(ss,bp+var_f4)), ax));	// 9602 mov     [bp+var_F4], ax ;~ 0613:0C7B
cs=0x613;eip=0x000c7f; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), 0));	// 9603 mov     [bp+var_F2], 0 ;~ 0613:0C7F
cs=0x613;eip=0x000c85; 	R(JMP(loc_1540c));	// 9604 jmp     short loc_1540C ;~ 0613:0C85
loc_15398:
	// 4900 
cs=0x613;eip=0x000c88; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 9609 cmp     [bp+var_8], 0 ;~ 0613:0C88
cs=0x613;eip=0x000c8c; 	R(JNZ(loc_153ae));	// 9610 jnz     short loc_153AE ;~ 0613:0C8C
cs=0x613;eip=0x000c8e; 	X(MOV(*(dw*)(raddr(ss,bp+var_f4)), 0));	// 9611 mov     [bp+var_F4], 0 ;~ 0613:0C8E
cs=0x613;eip=0x000c94; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e6))));	// 9612 mov     ax, [bp+var_E6] ;~ 0613:0C94
cs=0x613;eip=0x000c98; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), ax));	// 9613 mov     [bp+var_F2], ax ;~ 0613:0C98
cs=0x613;eip=0x000c9c; 	R(JMP(loc_1540c));	// 9614 jmp     short loc_1540C ;~ 0613:0C9C
loc_153ae:
	// 4901 
cs=0x613;eip=0x000c9e; 	T(SUB(ax, ax));	// 9618 sub     ax, ax ;~ 0613:0C9E
cs=0x613;eip=0x000ca0; 	X(PUSH(ax));	// 9619 push    ax ;~ 0613:0CA0
cs=0x613;eip=0x000ca1; 	T(ax = bp+vec_fc);	// 9620 lea     ax, [bp+vec_FC] ;~ 0613:0CA1
cs=0x613;eip=0x000ca5; 	X(PUSH(ax));	// 9621 push    ax ;~ 0613:0CA5
cs=0x613;eip=0x000ca6; 	T(ax = bp+vec_c);	// 9622 lea     ax, [bp+vec_C] ;~ 0613:0CA6
cs=0x613;eip=0x000ca9; 	X(PUSH(ax));	// 9623 push    ax ;~ 0613:0CA9
cs=0x613;eip=0x000caa; 	T(ax = bp+vec_1c);	// 9624 lea     ax, [bp+vec_1C] ;~ 0613:0CAA
cs=0x613;eip=0x000cad; 	X(PUSH(ax));	// 9625 push    ax ;~ 0613:0CAD
cs=0x613;eip=0x000cae; 	R(CALLF(vector_op_unk,0));	// 9626 call    vector_op_unk ;~ 0613:0CAE
cs=0x613;eip=0x000cb3; 	T(ADD(sp, 8));	// 9627 add     sp, 8 ;~ 0613:0CB3
cs=0x613;eip=0x000cb6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vec_1c))));	// 9628 mov     ax, [bp+vec_1C] ;~ 0613:0CB6
cs=0x613;eip=0x000cb9; 	T(SUB(ax, *(dw*)(raddr(ss,bp+vec_fc))));	// 9629 sub     ax, [bp+vec_FC] ;~ 0613:0CB9
cs=0x613;eip=0x000cbd; 	T(MOV(cl, 6));	// 9630 mov     cl, 6 ;~ 0613:0CBD
cs=0x613;eip=0x000cbf; 	T(SHL(ax, cl));	// 9631 shl     ax, cl ;~ 0613:0CBF
cs=0x613;eip=0x000cc1; 	X(MOV(*(dw*)(raddr(ss,bp+vec_17c)), ax));	// 9632 mov     [bp+vec_17C], ax ;~ 0613:0CC1
cs=0x613;eip=0x000cc5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 9633 mov     ax, [bp+var_1A] ;~ 0613:0CC5
cs=0x613;eip=0x000cc8; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_fa))));	// 9634 sub     ax, [bp+var_FA] ;~ 0613:0CC8
cs=0x613;eip=0x000ccc; 	T(SHL(ax, cl));	// 9635 shl     ax, cl ;~ 0613:0CCC
cs=0x613;eip=0x000cce; 	X(MOV(*(dw*)(raddr(ss,bp+var_17a)), ax));	// 9636 mov     [bp+var_17A], ax ;~ 0613:0CCE
cs=0x613;eip=0x000cd2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 9637 mov     ax, [bp+var_18] ;~ 0613:0CD2
cs=0x613;eip=0x000cd5; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_f8))));	// 9638 sub     ax, [bp+var_F8] ;~ 0613:0CD5
cs=0x613;eip=0x000cd9; 	T(SHL(ax, cl));	// 9639 shl     ax, cl ;~ 0613:0CD9
cs=0x613;eip=0x000cdb; 	X(MOV(*(dw*)(raddr(ss,bp+var_178)), ax));	// 9640 mov     [bp+var_178], ax ;~ 0613:0CDB
cs=0x613;eip=0x000cdf; 	T(ax = bp+vec_17c);	// 9641 lea     ax, [bp+vec_17C] ;~ 0613:0CDF
cs=0x613;eip=0x000ce3; 	X(PUSH(ax));	// 9642 push    ax ;~ 0613:0CE3
cs=0x613;eip=0x000ce4; 	R(CALLF(polarradius3d,0));	// 9643 call    polarRadius3D ;~ 0613:0CE4
cs=0x613;eip=0x000ce9; 	T(ADD(sp, 2));	// 9644 add     sp, 2 ;~ 0613:0CE9
cs=0x613;eip=0x000cec; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), ax));	// 9645 mov     [bp+var_F2], ax ;~ 0613:0CEC
cs=0x613;eip=0x000cf0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e6))));	// 9646 mov     ax, [bp+var_E6] ;~ 0613:0CF0
cs=0x613;eip=0x000cf4; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_f2))));	// 9647 sub     ax, [bp+var_F2] ;~ 0613:0CF4
cs=0x613;eip=0x000cf8; 	X(MOV(*(dw*)(raddr(ss,bp+var_f4)), ax));	// 9648 mov     [bp+var_F4], ax ;~ 0613:0CF8
loc_1540c:
	// 4902 
cs=0x613;eip=0x000cfc; 	T(MOV(ax, pstate_minusrotate_y_1));	// 9652 mov     ax, pState_minusRotate_y_1 ;~ 0613:0CFC
cs=0x613;eip=0x000cff; 	T(NEG(ax));	// 9653 neg     ax ;~ 0613:0CFF
cs=0x613;eip=0x000d01; 	T(SUB(ax, wallorientation));	// 9654 sub     ax, wallOrientation ;~ 0613:0D01
cs=0x613;eip=0x000d05; 	T(AND(ah, 3));	// 9655 and     ah, 3 ;~ 0613:0D05
cs=0x613;eip=0x000d08; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), ax));	// 9656 mov     [bp+var_EE], ax ;~ 0613:0D08
cs=0x613;eip=0x000d0c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f2))));	// 9657 mov     ax, [bp+var_F2] ;~ 0613:0D0C
cs=0x613;eip=0x000d10; 	X(MOV(*(dw*)(raddr(ss,bp+var_f8)), ax));	// 9658 mov     [bp+var_F8], ax ;~ 0613:0D10
cs=0x613;eip=0x000d14; 	X(MOV(*(dw*)(raddr(ss,bp+var_fa)), 0));	// 9659 mov     [bp+var_FA], 0 ;~ 0613:0D14
cs=0x613;eip=0x000d1a; 	T(CMP(*(dw*)(raddr(ss,bp+var_ee)), 0x100));	// 9660 cmp     [bp+var_EE], 100h ;~ 0613:0D1A
cs=0x613;eip=0x000d20; 	R(JL(loc_1543a));	// 9661 jl      short loc_1543A ;~ 0613:0D20
cs=0x613;eip=0x000d22; 	T(CMP(*(dw*)(raddr(ss,bp+var_ee)), 0x300));	// 9662 cmp     [bp+var_EE], 300h ;~ 0613:0D22
cs=0x613;eip=0x000d28; 	R(JLE(loc_1544a));	// 9663 jle     short loc_1544A ;~ 0613:0D28
loc_1543a:
	// 4903 
cs=0x613;eip=0x000d2a; 	T(MOV(ax, wallorientation));	// 9666 mov     ax, wallOrientation ;~ 0613:0D2A
cs=0x613;eip=0x000d2d; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), ax));	// 9667 mov     [bp+var_EE], ax ;~ 0613:0D2D
cs=0x613;eip=0x000d31; 	X(MOV(*(dw*)(raddr(ss,bp+vec_fc)), 0x300));	// 9668 mov     [bp+vec_FC], 300h ;~ 0613:0D31
cs=0x613;eip=0x000d37; 	R(JMP(loc_1545d));	// 9669 jmp     short loc_1545D ;~ 0613:0D37
loc_1544a:
	// 4904 
cs=0x613;eip=0x000d3a; 	T(MOV(ax, wallorientation));	// 9674 mov     ax, wallOrientation ;~ 0613:0D3A
cs=0x613;eip=0x000d3d; 	T(ADD(ah, 2));	// 9675 add     ah, 2 ;~ 0613:0D3D
cs=0x613;eip=0x000d40; 	T(AND(ah, 3));	// 9676 and     ah, 3 ;~ 0613:0D40
cs=0x613;eip=0x000d43; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), ax));	// 9677 mov     [bp+var_EE], ax ;~ 0613:0D43
cs=0x613;eip=0x000d47; 	X(MOV(*(dw*)(raddr(ss,bp+vec_fc)), 0x0FD00));	// 9678 mov     [bp+vec_FC], 0FD00h ;~ 0613:0D47
loc_1545d:
	// 4905 
cs=0x613;eip=0x000d4d; 	T(CMP(*(raddr(ss,bp+var_136)), 0));	// 9681 cmp     [bp+var_136], 0 ;~ 0613:0D4D
cs=0x613;eip=0x000d52; 	R(JZ(loc_1546e));	// 9682 jz      short loc_1546E ;~ 0613:0D52
cs=0x613;eip=0x000d54; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vec_fc))));	// 9683 mov     ax, [bp+vec_FC] ;~ 0613:0D54
cs=0x613;eip=0x000d58; 	T(NEG(ax));	// 9684 neg     ax ;~ 0613:0D58
cs=0x613;eip=0x000d5a; 	X(MOV(*(dw*)(raddr(ss,bp+vec_fc)), ax));	// 9685 mov     [bp+vec_FC], ax ;~ 0613:0D5A
loc_1546e:
	// 4906 
cs=0x613;eip=0x000d5e; 	T(SUB(ax, ax));	// 9688 sub     ax, ax ;~ 0613:0D5E
cs=0x613;eip=0x000d60; 	X(PUSH(ax));	// 9689 push    ax ;~ 0613:0D60
cs=0x613;eip=0x000d61; 	X(PUSH(*(dw*)(raddr(ss,bp+var_ee))));	// 9690 push    [bp+var_EE] ;~ 0613:0D61
cs=0x613;eip=0x000d65; 	T(MOV(ax, pstate_minusrotate_x_1));	// 9691 mov     ax, pState_minusRotate_x_1 ;~ 0613:0D65
cs=0x613;eip=0x000d68; 	T(NEG(ax));	// 9692 neg     ax ;~ 0613:0D68
cs=0x613;eip=0x000d6a; 	X(PUSH(ax));	// 9693 push    ax ;~ 0613:0D6A
cs=0x613;eip=0x000d6b; 	T(MOV(ax, pstate_minusrotate_z_1));	// 9694 mov     ax, pState_minusRotate_z_1 ;~ 0613:0D6B
cs=0x613;eip=0x000d6e; 	T(NEG(ax));	// 9695 neg     ax ;~ 0613:0D6E
cs=0x613;eip=0x000d70; 	X(PUSH(ax));	// 9696 push    ax ;~ 0613:0D70
cs=0x613;eip=0x000d71; 	R(CALLF(mat_rot_zxy,0));	// 9697 call    mat_rot_zxy ;~ 0613:0D71
cs=0x613;eip=0x000d76; 	T(ADD(sp, 8));	// 9698 add     sp, 8 ;~ 0613:0D76
cs=0x613;eip=0x000d79; 	X(MOV(*(dw*)(raddr(ss,bp+var_ea)), ax));	// 9699 mov     [bp+var_EA], ax ;~ 0613:0D79
cs=0x613;eip=0x000d7d; 	T(ax = bp+vec_1c);	// 9700 lea     ax, [bp+vec_1C] ;~ 0613:0D7D
cs=0x613;eip=0x000d80; 	X(PUSH(ax));	// 9701 push    ax ;~ 0613:0D80
cs=0x613;eip=0x000d81; 	X(PUSH(*(dw*)(raddr(ss,bp+var_ea))));	// 9702 push    [bp+var_EA] ;~ 0613:0D81
cs=0x613;eip=0x000d85; 	T(ax = bp+vec_fc);	// 9703 lea     ax, [bp+vec_FC] ;~ 0613:0D85
cs=0x613;eip=0x000d89; 	X(PUSH(ax));	// 9704 push    ax ;~ 0613:0D89
cs=0x613;eip=0x000d8a; 	R(CALLF(mat_mul_vector,0));	// 9705 call    mat_mul_vector ;~ 0613:0D8A
cs=0x613;eip=0x000d8f; 	T(ADD(sp, 6));	// 9706 add     sp, 6 ;~ 0613:0D8F
cs=0x613;eip=0x000d92; 	T(MOV(ax, pstate_minusrotate_y_1));	// 9707 mov     ax, pState_minusRotate_y_1 ;~ 0613:0D92
cs=0x613;eip=0x000d95; 	T(NEG(ax));	// 9708 neg     ax ;~ 0613:0D95
cs=0x613;eip=0x000d97; 	T(MOV(si, ax));	// 9709 mov     si, ax ;~ 0613:0D97
cs=0x613;eip=0x000d99; 	T(SUB(si, *(dw*)(raddr(ss,bp+var_ee))));	// 9710 sub     si, [bp+var_EE] ;~ 0613:0D99
cs=0x613;eip=0x000d9d; 	T(AND(si, 0x3FF));	// 9711 and     si, 3FFh ;~ 0613:0D9D
cs=0x613;eip=0x000da1; 	X(MOV(*(dw*)(raddr(ss,bp+var_138)), 0));	// 9712 mov     [bp+var_138], 0 ;~ 0613:0DA1
cs=0x613;eip=0x000da7; 	T(CMP(si, 0x100));	// 9713 cmp     si, 100h ;~ 0613:0DA7
cs=0x613;eip=0x000dab; 	R(JLE(loc_154ca));	// 9714 jle     short loc_154CA ;~ 0613:0DAB
cs=0x613;eip=0x000dad; 	T(MOV(ax, 0x400));	// 9715 mov     ax, 400h ;~ 0613:0DAD
cs=0x613;eip=0x000db0; 	T(SUB(ax, si));	// 9716 sub     ax, si ;~ 0613:0DB0
cs=0x613;eip=0x000db2; 	T(MOV(si, ax));	// 9717 mov     si, ax ;~ 0613:0DB2
cs=0x613;eip=0x000db4; 	X(MOV(*(dw*)(raddr(ss,bp+var_138)), 1));	// 9718 mov     [bp+var_138], 1 ;~ 0613:0DB4
loc_154ca:
	// 4907 
cs=0x613;eip=0x000dba; 	T(MOV(ax, 0x46));	// 9721 mov     ax, 46h ; 'F' ;~ 0613:0DBA
cs=0x613;eip=0x000dbd; 	T(IMUL1_2(si));	// 9722 imul    si ;~ 0613:0DBD
cs=0x613;eip=0x000dbf; 	T(MOV(cl, 8));	// 9723 mov     cl, 8 ;~ 0613:0DBF
cs=0x613;eip=0x000dc1; 	T(SAR(ax, cl));	// 9724 sar     ax, cl ;~ 0613:0DC1
cs=0x613;eip=0x000dc3; 	T(SUB(ax, 0x64));	// 9725 sub     ax, 64h ; 'd' ;~ 0613:0DC3
cs=0x613;eip=0x000dc6; 	T(NEG(ax));	// 9726 neg     ax ;~ 0613:0DC6
cs=0x613;eip=0x000dc8; 	T(MOV(ch, al));	// 9727 mov     ch, al ;~ 0613:0DC8
cs=0x613;eip=0x000dca; 	T(SUB(cl, cl));	// 9728 sub     cl, cl ;~ 0613:0DCA
cs=0x613;eip=0x000dcc; 	X(MOV(*(dw*)(raddr(ss,bp+var_190)), cx));	// 9729 mov     [bp+var_190], cx ;~ 0613:0DCC
cs=0x613;eip=0x000dd0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9730 mov     bx, [bp+arg_0] ;~ 0613:0DD0
cs=0x613;eip=0x000dd3; 	T(MOV(ax, cx));	// 9731 mov     ax, cx ;~ 0613:0DD3
cs=0x613;eip=0x000dd5; 	T(CMP(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 9732 cmp     [bx+2Ch], ax ;~ 0613:0DD5
cs=0x613;eip=0x000dd8; 	R(JBE(loc_15513));	// 9733 jbe     short loc_15513 ;~ 0613:0DD8
cs=0x613;eip=0x000dda; 	T(CMP(*(dw*)(raddr(ss,bp+var_138)), 0));	// 9734 cmp     [bp+var_138], 0 ;~ 0613:0DDA
cs=0x613;eip=0x000ddf; 	R(JZ(loc_154f8));	// 9735 jz      short loc_154F8 ;~ 0613:0DDF
cs=0x613;eip=0x000de1; 	T(MOV(ax, si));	// 9736 mov     ax, si ;~ 0613:0DE1
cs=0x613;eip=0x000de3; 	T(NEG(ax));	// 9737 neg     ax ;~ 0613:0DE3
cs=0x613;eip=0x000de5; 	R(JMP(loc_154fa));	// 9738 jmp     short loc_154FA ;~ 0613:0DE5
loc_154f8:
	// 4908 
cs=0x613;eip=0x000de8; 	T(MOV(ax, si));	// 9743 mov     ax, si ;~ 0613:0DE8
loc_154fa:
	// 4909 
cs=0x613;eip=0x000dea; 	T(SHL(ax, 1));	// 9746 shl     ax, 1 ;~ 0613:0DEA
cs=0x613;eip=0x000dec; 	X(MOV(*(dw*)(raddr(ss,bp+var_138)), ax));	// 9747 mov     [bp+var_138], ax ;~ 0613:0DEC
cs=0x613;eip=0x000df0; 	X(MOV(*(dw*)(raddr(ds,bx+0x36)), ax));	// 9748 mov     [bx+36h], ax ;~ 0613:0DF0
cs=0x613;eip=0x000df3; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 9749 mov     al, [bp+arg_8] ;~ 0613:0DF3
cs=0x613;eip=0x000df6; 	T(CBW);	// 9750 cbw ;~ 0613:0DF6
cs=0x613;eip=0x000df7; 	X(PUSH(ax));	// 9751 push    ax ;~ 0613:0DF7
cs=0x613;eip=0x000df8; 	T(MOV(ax, 1));	// 9752 mov     ax, 1 ;~ 0613:0DF8
cs=0x613;eip=0x000dfb; 	X(PUSH(ax));	// 9753 push    ax ;~ 0613:0DFB
cs=0x613;eip=0x000dfc; 	X(PUSH(cs));	// 9754 push    cs ;~ 0613:0DFC
cs=0x613;eip=0x000dfd; 	R(CALL(update_crash_state,0));	// 9755 call    near ptr update_crash_state ;~ 0613:0DFD
cs=0x613;eip=0x000e00; 	T(ADD(sp, 4));	// 9756 add     sp, 4 ;~ 0613:0E00
loc_15513:
	// 4910 
cs=0x613;eip=0x000e03; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9759 mov     bx, [bp+arg_0] ;~ 0613:0E03
cs=0x613;eip=0x000e06; 	X(OR(*(raddr(ds,bx+0x0CF)), 0x10));	// 9760 or      byte ptr [bx+0CFh], 10h ;~ 0613:0E06
cs=0x613;eip=0x000e0b; 	T(ax = bp+vecl_1c0);	// 9761 lea     ax, [bp+vecl_1C0] ;~ 0613:0E0B
cs=0x613;eip=0x000e0f; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), ax));	// 9762 mov     [bp+var_DE], ax ;~ 0613:0E0F
cs=0x613;eip=0x000e13; 	T(ax = bp+vecl_176);	// 9763 lea     ax, [bp+vecl_176] ;~ 0613:0E13
cs=0x613;eip=0x000e17; 	X(MOV(*(dw*)(raddr(ss,bp+var_146)), ax));	// 9764 mov     [bp+var_146], ax ;~ 0613:0E17
cs=0x613;eip=0x000e1b; 	T(SUB(si, si));	// 9765 sub     si, si ;~ 0613:0E1B
cs=0x613;eip=0x000e1d; 	R(JMP(loc_15599));	// 9766 jmp     short loc_15599 ;~ 0613:0E1D
loc_15530:
	// 4911 
cs=0x613;eip=0x000e20; 	X(MOV(*(dw*)(raddr(ss,bp+vec_c)), 0));	// 9771 mov     [bp+vec_C], 0 ;~ 0613:0E20
cs=0x613;eip=0x000e25; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 9772 mov     [bp+var_A], 0 ;~ 0613:0E25
cs=0x613;eip=0x000e2a; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 9773 mov     [bp+var_8], 0 ;~ 0613:0E2A
loc_1553f:
	// 4912 
cs=0x613;eip=0x000e2f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vec_c))));	// 9776 mov     ax, [bp+vec_C] ;~ 0613:0E2F
cs=0x613;eip=0x000e32; 	T(ADD(ax, *(dw*)(raddr(ss,bp+vec_1c))));	// 9777 add     ax, [bp+vec_1C] ;~ 0613:0E32
cs=0x613;eip=0x000e35; 	T(CWD);	// 9778 cwd ;~ 0613:0E35
cs=0x613;eip=0x000e36; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9779 mov     bx, [bp+var_146] ;~ 0613:0E36
cs=0x613;eip=0x000e3a; 	T(ADD(ax, *(dw*)(raddr(ds,bx+0))));	// 9780 add     ax, [bx+0] ;~ 0613:0E3A
cs=0x613;eip=0x000e3c; 	T(ADC(dx, *(dw*)(raddr(ds,bx+2))));	// 9781 adc     dx, [bx+2] ;~ 0613:0E3C
cs=0x613;eip=0x000e3f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9782 mov     bx, [bp+var_DE] ;~ 0613:0E3F
cs=0x613;eip=0x000e43; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 9783 mov     [bx+0], ax ;~ 0613:0E43
cs=0x613;eip=0x000e45; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 9784 mov     [bx+2], dx ;~ 0613:0E45
cs=0x613;eip=0x000e48; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 9785 mov     ax, [bp+var_A] ;~ 0613:0E48
cs=0x613;eip=0x000e4b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 9786 add     ax, [bp+var_1A] ;~ 0613:0E4B
cs=0x613;eip=0x000e4e; 	T(CWD);	// 9787 cwd ;~ 0613:0E4E
cs=0x613;eip=0x000e4f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9788 mov     bx, [bp+var_146] ;~ 0613:0E4F
cs=0x613;eip=0x000e53; 	T(ADD(ax, *(dw*)(raddr(ds,bx+4))));	// 9789 add     ax, [bx+4] ;~ 0613:0E53
cs=0x613;eip=0x000e56; 	T(ADC(dx, *(dw*)(raddr(ds,bx+6))));	// 9790 adc     dx, [bx+6] ;~ 0613:0E56
cs=0x613;eip=0x000e59; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9791 mov     bx, [bp+var_DE] ;~ 0613:0E59
cs=0x613;eip=0x000e5d; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 9792 mov     [bx+4], ax ;~ 0613:0E5D
cs=0x613;eip=0x000e60; 	X(MOV(*(dw*)(raddr(ds,bx+6)), dx));	// 9793 mov     [bx+6], dx ;~ 0613:0E60
cs=0x613;eip=0x000e63; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 9794 mov     ax, [bp+var_8] ;~ 0613:0E63
cs=0x613;eip=0x000e66; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_18))));	// 9795 add     ax, [bp+var_18] ;~ 0613:0E66
cs=0x613;eip=0x000e69; 	T(CWD);	// 9796 cwd ;~ 0613:0E69
cs=0x613;eip=0x000e6a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9797 mov     bx, [bp+var_146] ;~ 0613:0E6A
cs=0x613;eip=0x000e6e; 	T(ADD(ax, *(dw*)(raddr(ds,bx+8))));	// 9798 add     ax, [bx+8] ;~ 0613:0E6E
cs=0x613;eip=0x000e71; 	T(ADC(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 9799 adc     dx, [bx+0Ah] ;~ 0613:0E71
cs=0x613;eip=0x000e74; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9800 mov     bx, [bp+var_DE] ;~ 0613:0E74
cs=0x613;eip=0x000e78; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 9801 mov     [bx+8], ax ;~ 0613:0E78
cs=0x613;eip=0x000e7b; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 9802 mov     [bx+0Ah], dx ;~ 0613:0E7B
cs=0x613;eip=0x000e7e; 	X(ADD(*(dw*)(raddr(ss,bp+var_de)), 0x0C));	// 9803 add     [bp+var_DE], 0Ch ;~ 0613:0E7E
cs=0x613;eip=0x000e83; 	X(ADD(*(dw*)(raddr(ss,bp+var_146)), 0x0C));	// 9804 add     [bp+var_146], 0Ch ;~ 0613:0E83
cs=0x613;eip=0x000e88; 	T(INC(si));	// 9805 inc     si ;~ 0613:0E88
loc_15599:
	// 4913 
cs=0x613;eip=0x000e89; 	T(CMP(si, 4));	// 9808 cmp     si, 4 ;~ 0613:0E89
cs=0x613;eip=0x000e8c; 	R(JL(loc_155a1));	// 9809 jl      short loc_155A1 ;~ 0613:0E8C
cs=0x613;eip=0x000e8e; 	R(JMP(loc_15142));	// 9810 jmp     loc_15142 ;~ 0613:0E8E
loc_155a1:
	// 4914 
cs=0x613;eip=0x000e91; 	T(CMP(*(dw*)(raddr(ss,bp+var_f4)), 0));	// 9814 cmp     [bp+var_F4], 0 ;~ 0613:0E91
cs=0x613;eip=0x000e96; 	R(JZ(loc_15530));	// 9815 jz      short loc_15530 ;~ 0613:0E96
cs=0x613;eip=0x000e98; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e6))));	// 9816 mov     ax, [bp+var_E6] ;~ 0613:0E98
cs=0x613;eip=0x000e9c; 	T(CWD);	// 9817 cwd ;~ 0613:0E9C
cs=0x613;eip=0x000e9d; 	X(PUSH(dx));	// 9818 push    dx ;~ 0613:0E9D
cs=0x613;eip=0x000e9e; 	X(PUSH(ax));	// 9819 push    ax ;~ 0613:0E9E
cs=0x613;eip=0x000e9f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f4))));	// 9820 mov     ax, [bp+var_F4] ;~ 0613:0E9F
cs=0x613;eip=0x000ea3; 	T(CWD);	// 9821 cwd ;~ 0613:0EA3
cs=0x613;eip=0x000ea4; 	X(PUSH(dx));	// 9822 push    dx ;~ 0613:0EA4
cs=0x613;eip=0x000ea5; 	X(PUSH(ax));	// 9823 push    ax ;~ 0613:0EA5
cs=0x613;eip=0x000ea6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9824 mov     bx, [bp+var_DE] ;~ 0613:0EA6
cs=0x613;eip=0x000eaa; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 9825 mov     ax, [bx+0] ;~ 0613:0EAA
cs=0x613;eip=0x000eac; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 9826 mov     dx, [bx+2] ;~ 0613:0EAC
cs=0x613;eip=0x000eaf; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9827 mov     bx, [bp+var_146] ;~ 0613:0EAF
cs=0x613;eip=0x000eb3; 	T(SUB(ax, *(dw*)(raddr(ds,bx+0))));	// 9828 sub     ax, [bx+0] ;~ 0613:0EB3
cs=0x613;eip=0x000eb5; 	T(SBB(dx, *(dw*)(raddr(ds,bx+2))));	// 9829 sbb     dx, [bx+2] ;~ 0613:0EB5
cs=0x613;eip=0x000eb8; 	X(PUSH(dx));	// 9830 push    dx ;~ 0613:0EB8
cs=0x613;eip=0x000eb9; 	X(PUSH(ax));	// 9831 push    ax ;~ 0613:0EB9
cs=0x613;eip=0x000eba; 	R(CALLF(__aflmul,0));	// 9832 call    __aFlmul ;~ 0613:0EBA
cs=0x613;eip=0x000ebf; 	X(PUSH(dx));	// 9833 push    dx ;~ 0613:0EBF
cs=0x613;eip=0x000ec0; 	X(PUSH(ax));	// 9834 push    ax ;~ 0613:0EC0
cs=0x613;eip=0x000ec1; 	R(CALLF(__afldiv,0));	// 9835 call    __aFldiv ;~ 0613:0EC1
cs=0x613;eip=0x000ec6; 	X(MOV(*(dw*)(raddr(ss,bp+vec_c)), ax));	// 9836 mov     [bp+vec_C], ax ;~ 0613:0EC6
cs=0x613;eip=0x000ec9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e6))));	// 9837 mov     ax, [bp+var_E6] ;~ 0613:0EC9
cs=0x613;eip=0x000ecd; 	T(CWD);	// 9838 cwd ;~ 0613:0ECD
cs=0x613;eip=0x000ece; 	X(PUSH(dx));	// 9839 push    dx ;~ 0613:0ECE
cs=0x613;eip=0x000ecf; 	X(PUSH(ax));	// 9840 push    ax ;~ 0613:0ECF
cs=0x613;eip=0x000ed0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f4))));	// 9841 mov     ax, [bp+var_F4] ;~ 0613:0ED0
cs=0x613;eip=0x000ed4; 	T(CWD);	// 9842 cwd ;~ 0613:0ED4
cs=0x613;eip=0x000ed5; 	X(PUSH(dx));	// 9843 push    dx ;~ 0613:0ED5
cs=0x613;eip=0x000ed6; 	X(PUSH(ax));	// 9844 push    ax ;~ 0613:0ED6
cs=0x613;eip=0x000ed7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9845 mov     bx, [bp+var_DE] ;~ 0613:0ED7
cs=0x613;eip=0x000edb; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 9846 mov     ax, [bx+4] ;~ 0613:0EDB
cs=0x613;eip=0x000ede; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 9847 mov     dx, [bx+6] ;~ 0613:0EDE
cs=0x613;eip=0x000ee1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9848 mov     bx, [bp+var_146] ;~ 0613:0EE1
cs=0x613;eip=0x000ee5; 	T(SUB(ax, *(dw*)(raddr(ds,bx+4))));	// 9849 sub     ax, [bx+4] ;~ 0613:0EE5
cs=0x613;eip=0x000ee8; 	T(SBB(dx, *(dw*)(raddr(ds,bx+6))));	// 9850 sbb     dx, [bx+6] ;~ 0613:0EE8
cs=0x613;eip=0x000eeb; 	X(PUSH(dx));	// 9851 push    dx ;~ 0613:0EEB
cs=0x613;eip=0x000eec; 	X(PUSH(ax));	// 9852 push    ax ;~ 0613:0EEC
cs=0x613;eip=0x000eed; 	R(CALLF(__aflmul,0));	// 9853 call    __aFlmul ;~ 0613:0EED
cs=0x613;eip=0x000ef2; 	X(PUSH(dx));	// 9854 push    dx ;~ 0613:0EF2
cs=0x613;eip=0x000ef3; 	X(PUSH(ax));	// 9855 push    ax ;~ 0613:0EF3
cs=0x613;eip=0x000ef4; 	R(CALLF(__afldiv,0));	// 9856 call    __aFldiv ;~ 0613:0EF4
cs=0x613;eip=0x000ef9; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 9857 mov     [bp+var_A], ax ;~ 0613:0EF9
cs=0x613;eip=0x000efc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e6))));	// 9858 mov     ax, [bp+var_E6] ;~ 0613:0EFC
cs=0x613;eip=0x000f00; 	T(CWD);	// 9859 cwd ;~ 0613:0F00
cs=0x613;eip=0x000f01; 	X(PUSH(dx));	// 9860 push    dx ;~ 0613:0F01
cs=0x613;eip=0x000f02; 	X(PUSH(ax));	// 9861 push    ax ;~ 0613:0F02
cs=0x613;eip=0x000f03; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f4))));	// 9862 mov     ax, [bp+var_F4] ;~ 0613:0F03
cs=0x613;eip=0x000f07; 	T(CWD);	// 9863 cwd ;~ 0613:0F07
cs=0x613;eip=0x000f08; 	X(PUSH(dx));	// 9864 push    dx ;~ 0613:0F08
cs=0x613;eip=0x000f09; 	X(PUSH(ax));	// 9865 push    ax ;~ 0613:0F09
cs=0x613;eip=0x000f0a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9866 mov     bx, [bp+var_DE] ;~ 0613:0F0A
cs=0x613;eip=0x000f0e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 9867 mov     ax, [bx+8] ;~ 0613:0F0E
cs=0x613;eip=0x000f11; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 9868 mov     dx, [bx+0Ah] ;~ 0613:0F11
cs=0x613;eip=0x000f14; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9869 mov     bx, [bp+var_146] ;~ 0613:0F14
cs=0x613;eip=0x000f18; 	T(SUB(ax, *(dw*)(raddr(ds,bx+8))));	// 9870 sub     ax, [bx+8] ;~ 0613:0F18
cs=0x613;eip=0x000f1b; 	T(SBB(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 9871 sbb     dx, [bx+0Ah] ;~ 0613:0F1B
cs=0x613;eip=0x000f1e; 	X(PUSH(dx));	// 9872 push    dx ;~ 0613:0F1E
cs=0x613;eip=0x000f1f; 	X(PUSH(ax));	// 9873 push    ax ;~ 0613:0F1F
cs=0x613;eip=0x000f20; 	R(CALLF(__aflmul,0));	// 9874 call    __aFlmul ;~ 0613:0F20
cs=0x613;eip=0x000f25; 	X(PUSH(dx));	// 9875 push    dx ;~ 0613:0F25
cs=0x613;eip=0x000f26; 	X(PUSH(ax));	// 9876 push    ax ;~ 0613:0F26
cs=0x613;eip=0x000f27; 	R(CALLF(__afldiv,0));	// 9877 call    __aFldiv ;~ 0613:0F27
cs=0x613;eip=0x000f2c; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 9878 mov     [bp+var_8], ax ;~ 0613:0F2C
cs=0x613;eip=0x000f2f; 	R(JMP(loc_1553f));	// 9879 jmp     loc_1553F ;~ 0613:0F2F
loc_15642:
	// 4915 
cs=0x613;eip=0x000f32; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9884 mov     al, [bp+var_E8] ;~ 0613:0F32
cs=0x613;eip=0x000f36; 	T(CBW);	// 9885 cbw ;~ 0613:0F36
cs=0x613;eip=0x000f37; 	T(MOV(di, ax));	// 9886 mov     di, ax ;~ 0613:0F37
cs=0x613;eip=0x000f39; 	T(SHL(di, 1));	// 9887 shl     di, 1 ;~ 0613:0F39
cs=0x613;eip=0x000f3b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9888 mov     bx, [bp+arg_0] ;~ 0613:0F3B
cs=0x613;eip=0x000f3e; 	T(MOV(ax, *(dw*)(((db*)word_3bd72)+di)));	// 9889 mov     ax, word_3BD72[di] ;~ 0613:0F3E
cs=0x613;eip=0x000f42; 	X(ADD(*(dw*)(raddr(ds,bx+di+0x4C)), ax));	// 9890 add     [bx+di+4Ch], ax ;~ 0613:0F42
cs=0x613;eip=0x000f45; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9891 mov     al, [bp+var_E8] ;~ 0613:0F45
cs=0x613;eip=0x000f49; 	T(CBW);	// 9892 cbw ;~ 0613:0F49
cs=0x613;eip=0x000f4a; 	T(MOV(bx, ax));	// 9893 mov     bx, ax ;~ 0613:0F4A
cs=0x613;eip=0x000f4c; 	T(SHL(bx, 1));	// 9894 shl     bx, 1 ;~ 0613:0F4C
cs=0x613;eip=0x000f4e; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9895 add     bx, [bp+arg_0] ;~ 0613:0F4E
cs=0x613;eip=0x000f51; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x4C))));	// 9896 mov     ax, [bx+4Ch] ;~ 0613:0F51
cs=0x613;eip=0x000f54; 	T(CWD);	// 9897 cwd ;~ 0613:0F54
cs=0x613;eip=0x000f55; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9898 mov     bx, [bp+var_DE] ;~ 0613:0F55
cs=0x613;eip=0x000f59; 	X(SUB(*(dw*)(raddr(ds,bx+4)), ax));	// 9899 sub     [bx+4], ax ;~ 0613:0F59
cs=0x613;eip=0x000f5c; 	X(SBB(*(dw*)(raddr(ds,bx+6)), dx));	// 9900 sbb     [bx+6], dx ;~ 0613:0F5C
cs=0x613;eip=0x000f5f; 	T(CMP(framespersec, 0x0A));	// 9901 cmp     framespersec, 0Ah ;~ 0613:0F5F
cs=0x613;eip=0x000f64; 	R(JNZ(loc_156a3));	// 9902 jnz     short loc_156A3 ;~ 0613:0F64
cs=0x613;eip=0x000f66; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9903 mov     al, [bp+var_E8] ;~ 0613:0F66
cs=0x613;eip=0x000f6a; 	T(CBW);	// 9904 cbw ;~ 0613:0F6A
cs=0x613;eip=0x000f6b; 	T(MOV(di, ax));	// 9905 mov     di, ax ;~ 0613:0F6B
cs=0x613;eip=0x000f6d; 	T(SHL(di, 1));	// 9906 shl     di, 1 ;~ 0613:0F6D
cs=0x613;eip=0x000f6f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9907 mov     bx, [bp+arg_0] ;~ 0613:0F6F
cs=0x613;eip=0x000f72; 	T(MOV(ax, *(dw*)(((db*)word_3bd72)+di)));	// 9908 mov     ax, word_3BD72[di] ;~ 0613:0F72
cs=0x613;eip=0x000f76; 	X(ADD(*(dw*)(raddr(ds,bx+di+0x4C)), ax));	// 9909 add     [bx+di+4Ch], ax ;~ 0613:0F76
cs=0x613;eip=0x000f79; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9910 mov     al, [bp+var_E8] ;~ 0613:0F79
cs=0x613;eip=0x000f7d; 	T(CBW);	// 9911 cbw ;~ 0613:0F7D
cs=0x613;eip=0x000f7e; 	T(MOV(bx, ax));	// 9912 mov     bx, ax ;~ 0613:0F7E
cs=0x613;eip=0x000f80; 	T(SHL(bx, 1));	// 9913 shl     bx, 1 ;~ 0613:0F80
cs=0x613;eip=0x000f82; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9914 add     bx, [bp+arg_0] ;~ 0613:0F82
cs=0x613;eip=0x000f85; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x4C))));	// 9915 mov     ax, [bx+4Ch] ;~ 0613:0F85
cs=0x613;eip=0x000f88; 	T(CWD);	// 9916 cwd ;~ 0613:0F88
cs=0x613;eip=0x000f89; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9917 mov     bx, [bp+var_DE] ;~ 0613:0F89
cs=0x613;eip=0x000f8d; 	X(SUB(*(dw*)(raddr(ds,bx+4)), ax));	// 9918 sub     [bx+4], ax ;~ 0613:0F8D
cs=0x613;eip=0x000f90; 	X(SBB(*(dw*)(raddr(ds,bx+6)), dx));	// 9919 sbb     [bx+6], dx ;~ 0613:0F90
loc_156a3:
	// 4916 
cs=0x613;eip=0x000f93; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 9922 mov     bx, [bp+var_DE] ;~ 0613:0F93
cs=0x613;eip=0x000f97; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 9923 mov     ax, [bx+4] ;~ 0613:0F97
cs=0x613;eip=0x000f9a; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 9924 mov     dx, [bx+6] ;~ 0613:0F9A
cs=0x613;eip=0x000f9d; 	T(MOV(cl, 6));	// 9925 mov     cl, 6 ;~ 0613:0F9D
loc_156af:
	// 4917 
cs=0x613;eip=0x000f9f; 	T(SAR(dx, 1));	// 9928 sar     dx, 1 ;~ 0613:0F9F
cs=0x613;eip=0x000fa1; 	T(RCR(ax, 1));	// 9929 rcr     ax, 1 ;~ 0613:0FA1
cs=0x613;eip=0x000fa3; 	T(DEC(cl));	// 9930 dec     cl ;~ 0613:0FA3
cs=0x613;eip=0x000fa5; 	R(JNZ(loc_156af));	// 9931 jnz     short loc_156AF ;~ 0613:0FA5
cs=0x613;eip=0x000fa7; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 9932 mov     [bp+var_1C4], ax ;~ 0613:0FA7
cs=0x613;eip=0x000fab; 	T(CMP(byte_44889, 2));	// 9933 cmp     byte_44889, 2 ;~ 0613:0FAB
cs=0x613;eip=0x000fb0; 	R(JZ(loc_156d6));	// 9934 jz      short loc_156D6 ;~ 0613:0FB0
cs=0x613;eip=0x000fb2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c2))));	// 9935 push    [bp+var_1C2] ;~ 0613:0FB2
cs=0x613;eip=0x000fb6; 	X(PUSH(ax));	// 9936 push    ax ;~ 0613:0FB6
cs=0x613;eip=0x000fb7; 	X(PUSH(*(dw*)(raddr(ss,bp+vec_1c6))));	// 9937 push    [bp+vec_1C6] ;~ 0613:0FB7
cs=0x613;eip=0x000fbb; 	X(PUSH(planindex));	// 9938 push    planindex ;~ 0613:0FBB
cs=0x613;eip=0x000fbf; 	X(PUSH(cs));	// 9939 push    cs ;~ 0613:0FBF
cs=0x613;eip=0x000fc0; 	R(CALL(plane_origin_op,0));	// 9940 call    near ptr plane_origin_op ;~ 0613:0FC0
cs=0x613;eip=0x000fc3; 	T(ADD(sp, 8));	// 9941 add     sp, 8 ;~ 0613:0FC3
loc_156d6:
	// 4918 
cs=0x613;eip=0x000fc6; 	X(MOV(nextposandnormalip, ax));	// 9944 mov     nextPosAndNormalIP, ax ;~ 0613:0FC6
cs=0x613;eip=0x000fc9; 	T(CMP(ax, 0x0C));	// 9945 cmp     ax, 0Ch ;~ 0613:0FC9
cs=0x613;eip=0x000fcc; 	R(JLE(loc_156ed));	// 9946 jle     short loc_156ED ;~ 0613:0FCC
cs=0x613;eip=0x000fce; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9947 mov     al, [bp+var_E8] ;~ 0613:0FCE
cs=0x613;eip=0x000fd2; 	T(CBW);	// 9948 cbw ;~ 0613:0FD2
cs=0x613;eip=0x000fd3; 	T(MOV(di, ax));	// 9949 mov     di, ax ;~ 0613:0FD3
cs=0x613;eip=0x000fd5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9950 mov     bx, [bp+arg_0] ;~ 0613:0FD5
cs=0x613;eip=0x000fd8; 	X(MOV(*(raddr(ds,bx+di+0x0C2)), 0));	// 9951 mov     byte ptr [bx+di+0C2h], 0 ;~ 0613:0FD8
loc_156ed:
	// 4919 
cs=0x613;eip=0x000fdd; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 9955 mov     al, [bp+var_E8] ;~ 0613:0FDD
cs=0x613;eip=0x000fe1; 	T(CBW);	// 9956 cbw ;~ 0613:0FE1
cs=0x613;eip=0x000fe2; 	T(MOV(di, ax));	// 9957 mov     di, ax ;~ 0613:0FE2
cs=0x613;eip=0x000fe4; 	T(SHL(di, 1));	// 9958 shl     di, 1 ;~ 0613:0FE4
cs=0x613;eip=0x000fe6; 	T(MOV(ax, nextposandnormalip));	// 9959 mov     ax, nextPosAndNormalIP ;~ 0613:0FE6
cs=0x613;eip=0x000fe9; 	X(MOV(*(dw*)(raddr(ss,bp+di+var_16)), ax));	// 9960 mov     [bp+di+var_16], ax ;~ 0613:0FE9
cs=0x613;eip=0x000fec; 	T(OR(ax, ax));	// 9961 or      ax, ax ;~ 0613:0FEC
cs=0x613;eip=0x000fee; 	R(JNZ(loc_15703));	// 9962 jnz     short loc_15703 ;~ 0613:0FEE
cs=0x613;eip=0x000ff0; 	R(JMP(loc_15ce8));	// 9963 jmp     loc_15CE8 ;~ 0613:0FF0
loc_15703:
	// 4920 
cs=0x613;eip=0x000ff3; 	T(OR(ax, ax));	// 9967 or      ax, ax ;~ 0613:0FF3
cs=0x613;eip=0x000ff5; 	R(JL(loc_1570a));	// 9968 jl      short loc_1570A ;~ 0613:0FF5
cs=0x613;eip=0x000ff7; 	R(JMP(loc_15d2b));	// 9969 jmp     loc_15D2B ;~ 0613:0FF7
loc_1570a:
	// 4921 
cs=0x613;eip=0x000ffa; 	T(MOV(ax, 0x22));	// 9973 mov     ax, 22h ; '"' ;~ 0613:0FFA
cs=0x613;eip=0x000ffd; 	X(IMUL1_2(planindex));	// 9974 imul    planindex ;~ 0613:0FFD
cs=0x613;eip=0x001001; 	T(ADD(ax, planptr));	// 9975 add     ax, planptr ;~ 0613:1001
cs=0x613;eip=0x001005; 	T(MOV(dx, word_454c4));	// 9976 mov     dx, word_454C4 ;~ 0613:1005
cs=0x613;eip=0x001009; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 9977 mov     word ptr [bp+var_6], ax ;~ 0613:1009
cs=0x613;eip=0x00100c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 9978 mov     word ptr [bp+var_6+2], dx ;~ 0613:100C
cs=0x613;eip=0x00100f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 9979 les     bx, [bp+var_6] ;~ 0613:100F
cs=0x613;eip=0x001012; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 9980 mov     ax, es:[bx+4] ;~ 0613:1012
cs=0x613;eip=0x001016; 	T(ADD(ax, elem_xcenter));	// 9981 add     ax, elem_xCenter ;~ 0613:1016
cs=0x613;eip=0x00101a; 	X(MOV(*(dw*)(raddr(ss,bp+var_122)), ax));	// 9982 mov     [bp+var_122], ax ;~ 0613:101A
cs=0x613;eip=0x00101e; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 9983 mov     ax, es:[bx+6] ;~ 0613:101E
cs=0x613;eip=0x001022; 	T(ADD(ax, terrainheight));	// 9984 add     ax, terrainHeight ;~ 0613:1022
cs=0x613;eip=0x001026; 	X(MOV(*(dw*)(raddr(ss,bp+var_120)), ax));	// 9985 mov     [bp+var_120], ax ;~ 0613:1026
cs=0x613;eip=0x00102a; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 9986 mov     ax, es:[bx+8] ;~ 0613:102A
cs=0x613;eip=0x00102e; 	T(ADD(ax, elem_zcenter));	// 9987 add     ax, elem_zCenter ;~ 0613:102E
cs=0x613;eip=0x001032; 	X(MOV(*(dw*)(raddr(ss,bp+var_11e)), ax));	// 9988 mov     [bp+var_11E], ax ;~ 0613:1032
cs=0x613;eip=0x001036; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 9989 mov     bx, [bp+var_146] ;~ 0613:1036
cs=0x613;eip=0x00103a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 9990 mov     ax, [bx+0] ;~ 0613:103A
cs=0x613;eip=0x00103c; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 9991 mov     dx, [bx+2] ;~ 0613:103C
cs=0x613;eip=0x00103f; 	T(MOV(cl, 6));	// 9992 mov     cl, 6 ;~ 0613:103F
loc_15751:
	// 4922 
cs=0x613;eip=0x001041; 	T(SAR(dx, 1));	// 9995 sar     dx, 1 ;~ 0613:1041
cs=0x613;eip=0x001043; 	T(RCR(ax, 1));	// 9996 rcr     ax, 1 ;~ 0613:1043
cs=0x613;eip=0x001045; 	T(DEC(cl));	// 9997 dec     cl ;~ 0613:1045
cs=0x613;eip=0x001047; 	R(JNZ(loc_15751));	// 9998 jnz     short loc_15751 ;~ 0613:1047
cs=0x613;eip=0x001049; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_122))));	// 9999 sub     ax, [bp+var_122] ;~ 0613:1049
cs=0x613;eip=0x00104d; 	X(MOV(*(dw*)(raddr(ss,bp+vec_182)), ax));	// 10000 mov     [bp+vec_182], ax ;~ 0613:104D
cs=0x613;eip=0x001051; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 10001 mov     bx, [bp+var_146] ;~ 0613:1051
cs=0x613;eip=0x001055; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 10002 mov     ax, [bx+4] ;~ 0613:1055
cs=0x613;eip=0x001058; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 10003 mov     dx, [bx+6] ;~ 0613:1058
cs=0x613;eip=0x00105b; 	T(MOV(cl, 6));	// 10004 mov     cl, 6 ;~ 0613:105B
loc_1576d:
	// 4923 
cs=0x613;eip=0x00105d; 	T(SAR(dx, 1));	// 10007 sar     dx, 1 ;~ 0613:105D
cs=0x613;eip=0x00105f; 	T(RCR(ax, 1));	// 10008 rcr     ax, 1 ;~ 0613:105F
cs=0x613;eip=0x001061; 	T(DEC(cl));	// 10009 dec     cl ;~ 0613:1061
cs=0x613;eip=0x001063; 	R(JNZ(loc_1576d));	// 10010 jnz     short loc_1576D ;~ 0613:1063
cs=0x613;eip=0x001065; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_120))));	// 10011 sub     ax, [bp+var_120] ;~ 0613:1065
cs=0x613;eip=0x001069; 	X(MOV(*(dw*)(raddr(ss,bp+var_180)), ax));	// 10012 mov     [bp+var_180], ax ;~ 0613:1069
cs=0x613;eip=0x00106d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 10013 mov     bx, [bp+var_146] ;~ 0613:106D
cs=0x613;eip=0x001071; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 10014 mov     ax, [bx+8] ;~ 0613:1071
cs=0x613;eip=0x001074; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 10015 mov     dx, [bx+0Ah] ;~ 0613:1074
cs=0x613;eip=0x001077; 	T(MOV(cl, 6));	// 10016 mov     cl, 6 ;~ 0613:1077
loc_15789:
	// 4924 
cs=0x613;eip=0x001079; 	T(SAR(dx, 1));	// 10019 sar     dx, 1 ;~ 0613:1079
cs=0x613;eip=0x00107b; 	T(RCR(ax, 1));	// 10020 rcr     ax, 1 ;~ 0613:107B
cs=0x613;eip=0x00107d; 	T(DEC(cl));	// 10021 dec     cl ;~ 0613:107D
cs=0x613;eip=0x00107f; 	R(JNZ(loc_15789));	// 10022 jnz     short loc_15789 ;~ 0613:107F
cs=0x613;eip=0x001081; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_11e))));	// 10023 sub     ax, [bp+var_11E] ;~ 0613:1081
cs=0x613;eip=0x001085; 	X(MOV(*(dw*)(raddr(ss,bp+var_17e)), ax));	// 10024 mov     [bp+var_17E], ax ;~ 0613:1085
cs=0x613;eip=0x001089; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10025 mov     bx, [bp+var_DE] ;~ 0613:1089
cs=0x613;eip=0x00108d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 10026 mov     ax, [bx+0] ;~ 0613:108D
cs=0x613;eip=0x00108f; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 10027 mov     dx, [bx+2] ;~ 0613:108F
cs=0x613;eip=0x001092; 	T(MOV(cl, 6));	// 10028 mov     cl, 6 ;~ 0613:1092
loc_157a4:
	// 4925 
cs=0x613;eip=0x001094; 	T(SAR(dx, 1));	// 10031 sar     dx, 1 ;~ 0613:1094
cs=0x613;eip=0x001096; 	T(RCR(ax, 1));	// 10032 rcr     ax, 1 ;~ 0613:1096
cs=0x613;eip=0x001098; 	T(DEC(cl));	// 10033 dec     cl ;~ 0613:1098
cs=0x613;eip=0x00109a; 	R(JNZ(loc_157a4));	// 10034 jnz     short loc_157A4 ;~ 0613:109A
cs=0x613;eip=0x00109c; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_122))));	// 10035 sub     ax, [bp+var_122] ;~ 0613:109C
cs=0x613;eip=0x0010a0; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1e4)), ax));	// 10036 mov     [bp+vec_1E4], ax ;~ 0613:10A0
cs=0x613;eip=0x0010a4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10037 mov     bx, [bp+var_DE] ;~ 0613:10A4
cs=0x613;eip=0x0010a8; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 10038 mov     ax, [bx+4] ;~ 0613:10A8
cs=0x613;eip=0x0010ab; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 10039 mov     dx, [bx+6] ;~ 0613:10AB
cs=0x613;eip=0x0010ae; 	T(MOV(cl, 6));	// 10040 mov     cl, 6 ;~ 0613:10AE
loc_157c0:
	// 4926 
cs=0x613;eip=0x0010b0; 	T(SAR(dx, 1));	// 10043 sar     dx, 1 ;~ 0613:10B0
cs=0x613;eip=0x0010b2; 	T(RCR(ax, 1));	// 10044 rcr     ax, 1 ;~ 0613:10B2
cs=0x613;eip=0x0010b4; 	T(DEC(cl));	// 10045 dec     cl ;~ 0613:10B4
cs=0x613;eip=0x0010b6; 	R(JNZ(loc_157c0));	// 10046 jnz     short loc_157C0 ;~ 0613:10B6
cs=0x613;eip=0x0010b8; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_120))));	// 10047 sub     ax, [bp+var_120] ;~ 0613:10B8
cs=0x613;eip=0x0010bc; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e2)), ax));	// 10048 mov     [bp+var_1E2], ax ;~ 0613:10BC
cs=0x613;eip=0x0010c0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10049 mov     bx, [bp+var_DE] ;~ 0613:10C0
cs=0x613;eip=0x0010c4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 10050 mov     ax, [bx+8] ;~ 0613:10C4
cs=0x613;eip=0x0010c7; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 10051 mov     dx, [bx+0Ah] ;~ 0613:10C7
cs=0x613;eip=0x0010ca; 	T(MOV(cl, 6));	// 10052 mov     cl, 6 ;~ 0613:10CA
loc_157dc:
	// 4927 
cs=0x613;eip=0x0010cc; 	T(SAR(dx, 1));	// 10055 sar     dx, 1 ;~ 0613:10CC
cs=0x613;eip=0x0010ce; 	T(RCR(ax, 1));	// 10056 rcr     ax, 1 ;~ 0613:10CE
cs=0x613;eip=0x0010d0; 	T(DEC(cl));	// 10057 dec     cl ;~ 0613:10D0
cs=0x613;eip=0x0010d2; 	R(JNZ(loc_157dc));	// 10058 jnz     short loc_157DC ;~ 0613:10D2
cs=0x613;eip=0x0010d4; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_11e))));	// 10059 sub     ax, [bp+var_11E] ;~ 0613:10D4
cs=0x613;eip=0x0010d8; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e0)), ax));	// 10060 mov     [bp+var_1E0], ax ;~ 0613:10D8
cs=0x613;eip=0x0010dc; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 10061 mov     ax, word ptr [bp+var_6] ;~ 0613:10DC
cs=0x613;eip=0x0010df; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_6+2)))));	// 10062 mov     dx, word ptr [bp+var_6+2] ;~ 0613:10DF
cs=0x613;eip=0x0010e2; 	T(ADD(ax, 0x10));	// 10063 add     ax, 10h         ; plane rotation matrix ;~ 0613:10E2
cs=0x613;eip=0x0010e5; 	X(PUSH(si));	// 10064 push    si ;~ 0613:10E5
cs=0x613;eip=0x0010e6; 	T(di = bp+mat_134);	// 10065 lea     di, [bp+mat_134] ;~ 0613:10E6
cs=0x613;eip=0x0010ea; 	T(MOV(si, ax));	// 10066 mov     si, ax ;~ 0613:10EA
cs=0x613;eip=0x0010ec; 	X(PUSH(ss));	// 10067 push    ss ;~ 0613:10EC
cs=0x613;eip=0x0010ed; 	X(POP(es));	// 10068 pop     es ;~ 0613:10ED
cs=0x613;eip=0x0010ee; 	X(PUSH(ds));	// 10069 push    ds ;~ 0613:10EE
cs=0x613;eip=0x0010ef; 	T(MOV(ds, dx));	// 10070 mov     ds, dx ;~ 0613:10EF
cs=0x613;eip=0x0010f1; 	T(MOV(cx, 9));	// 10071 mov     cx, 9 ;~ 0613:10F1
	// 10072 repne movsw ;~ 0613:10F4
cs=0x613;eip=0x0010f4; 	X(	REPNE MOVSW);	// 10072 repne movsw ;~ 0613:10F4
cs=0x613;eip=0x0010f6; 	X(POP(ds));	// 10073 pop     ds ;~ 0613:10F6
cs=0x613;eip=0x0010f7; 	X(POP(si));	// 10074 pop     si ;~ 0613:10F7
cs=0x613;eip=0x0010f8; 	T(ax = bp+var_10e);	// 10075 lea     ax, [bp+var_10E] ;~ 0613:10F8
cs=0x613;eip=0x0010fc; 	X(PUSH(ax));	// 10076 push    ax ;~ 0613:10FC
cs=0x613;eip=0x0010fd; 	T(ax = bp+mat_134);	// 10077 lea     ax, [bp+mat_134] ;~ 0613:10FD
cs=0x613;eip=0x001101; 	X(PUSH(ax));	// 10078 push    ax ;~ 0613:1101
cs=0x613;eip=0x001102; 	R(CALLF(mat_invert,0));	// 10079 call    mat_invert ;~ 0613:1102
cs=0x613;eip=0x001107; 	T(ADD(sp, 4));	// 10080 add     sp, 4 ;~ 0613:1107
cs=0x613;eip=0x00110a; 	T(ax = bp+vec_c);	// 10081 lea     ax, [bp+vec_C] ;~ 0613:110A
cs=0x613;eip=0x00110d; 	X(PUSH(ax));	// 10082 push    ax ;~ 0613:110D
cs=0x613;eip=0x00110e; 	T(ax = bp+var_10e);	// 10083 lea     ax, [bp+var_10E] ;~ 0613:110E
cs=0x613;eip=0x001112; 	X(PUSH(ax));	// 10084 push    ax ;~ 0613:1112
cs=0x613;eip=0x001113; 	T(ax = bp+vec_182);	// 10085 lea     ax, [bp+vec_182] ;~ 0613:1113
cs=0x613;eip=0x001117; 	X(PUSH(ax));	// 10086 push    ax ;~ 0613:1117
cs=0x613;eip=0x001118; 	R(CALLF(mat_mul_vector,0));	// 10087 call    mat_mul_vector ;~ 0613:1118
cs=0x613;eip=0x00111d; 	T(ADD(sp, 6));	// 10088 add     sp, 6 ;~ 0613:111D
cs=0x613;eip=0x001120; 	T(ax = bp+vec_1c);	// 10089 lea     ax, [bp+vec_1C] ;~ 0613:1120
cs=0x613;eip=0x001123; 	X(PUSH(ax));	// 10090 push    ax ;~ 0613:1123
cs=0x613;eip=0x001124; 	T(ax = bp+var_10e);	// 10091 lea     ax, [bp+var_10E] ;~ 0613:1124
cs=0x613;eip=0x001128; 	X(PUSH(ax));	// 10092 push    ax ;~ 0613:1128
cs=0x613;eip=0x001129; 	T(ax = bp+vec_1e4);	// 10093 lea     ax, [bp+vec_1E4] ;~ 0613:1129
cs=0x613;eip=0x00112d; 	X(PUSH(ax));	// 10094 push    ax ;~ 0613:112D
cs=0x613;eip=0x00112e; 	R(CALLF(mat_mul_vector,0));	// 10095 call    mat_mul_vector ;~ 0613:112E
cs=0x613;eip=0x001133; 	T(ADD(sp, 6));	// 10096 add     sp, 6 ;~ 0613:1133
cs=0x613;eip=0x001136; 	X(MOV(*(raddr(ss,bp+var_136)), 0));	// 10097 mov     [bp+var_136], 0 ;~ 0613:1136
cs=0x613;eip=0x00113b; 	T(CMP(byte_4392c, 0));	// 10098 cmp     byte_4392C, 0 ;~ 0613:113B
cs=0x613;eip=0x001140; 	R(JNZ(loc_15879));	// 10099 jnz     short loc_15879 ;~ 0613:1140
cs=0x613;eip=0x001142; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x0FFF4));	// 10100 cmp     [bp+var_A], 0FFF4h ;~ 0613:1142
cs=0x613;eip=0x001146; 	R(JGE(loc_15879));	// 10101 jge     short loc_15879 ;~ 0613:1146
cs=0x613;eip=0x001148; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), 0x0FFF4));	// 10102 cmp     [bp+var_1A], 0FFF4h ;~ 0613:1148
cs=0x613;eip=0x00114c; 	R(JGE(loc_15879));	// 10103 jge     short loc_15879 ;~ 0613:114C
cs=0x613;eip=0x00114e; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), 0x0FFE8));	// 10104 cmp     [bp+var_1A], 0FFE8h ;~ 0613:114E
cs=0x613;eip=0x001152; 	R(JLE(loc_158da));	// 10105 jle     short loc_158DA ;~ 0613:1152
cs=0x613;eip=0x001154; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 10106 mov     al, [bp+arg_8] ;~ 0613:1154
cs=0x613;eip=0x001157; 	T(CBW);	// 10107 cbw ;~ 0613:1157
cs=0x613;eip=0x001158; 	X(PUSH(ax));	// 10108 push    ax ;~ 0613:1158
cs=0x613;eip=0x001159; 	T(MOV(ax, 5));	// 10109 mov     ax, 5 ;~ 0613:1159
cs=0x613;eip=0x00115c; 	X(PUSH(ax));	// 10110 push    ax ;~ 0613:115C
cs=0x613;eip=0x00115d; 	X(PUSH(cs));	// 10111 push    cs ;~ 0613:115D
cs=0x613;eip=0x00115e; 	R(CALL(update_crash_state,0));	// 10112 call    near ptr update_crash_state ;~ 0613:115E
cs=0x613;eip=0x001161; 	T(ADD(sp, 4));	// 10113 add     sp, 4 ;~ 0613:1161
cs=0x613;eip=0x001164; 	X(MOV(*(raddr(ss,bp+var_136)), 1));	// 10114 mov     [bp+var_136], 1 ;~ 0613:1164
loc_15879:
	// 4928 
cs=0x613;eip=0x001169; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), 0));	// 10118 cmp     [bp+var_1A], 0 ;~ 0613:1169
cs=0x613;eip=0x00116d; 	R(JZ(loc_15882));	// 10119 jz      short loc_15882 ;~ 0613:116D
cs=0x613;eip=0x00116f; 	R(JMP(loc_1599e));	// 10120 jmp     loc_1599E ;~ 0613:116F
loc_15882:
	// 4929 
cs=0x613;eip=0x001172; 	X(MOV(vec_unk2, 0));	// 10124 mov     vec_unk2, 0 ;~ 0613:1172
cs=0x613;eip=0x001178; 	X(MOV(word_44f38, 0));	// 10125 mov     word_44F38, 0 ;~ 0613:1178
cs=0x613;eip=0x00117e; 	X(MOV(word_44f3a, 0x40));	// 10126 mov     word_44F3A, 40h ; '@' ;~ 0613:117E
cs=0x613;eip=0x001184; 	T(MOV(ax, planindex));	// 10127 mov     ax, planindex ;~ 0613:1184
cs=0x613;eip=0x001187; 	X(MOV(planindex_copy, ax));	// 10128 mov     planindex_copy, ax ;~ 0613:1187
cs=0x613;eip=0x00118a; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10129 mov     al, [bp+var_E8] ;~ 0613:118A
cs=0x613;eip=0x00118e; 	T(CBW);	// 10130 cbw ;~ 0613:118E
cs=0x613;eip=0x00118f; 	T(MOV(di, ax));	// 10131 mov     di, ax ;~ 0613:118F
cs=0x613;eip=0x001191; 	T(SHL(di, 1));	// 10132 shl     di, 1 ;~ 0613:1191
cs=0x613;eip=0x001193; 	T(MOV(ax, *(dw*)(raddr(ss,bp+di+var_140))));	// 10133 mov     ax, [bp+di+var_140] ;~ 0613:1193
cs=0x613;eip=0x001197; 	X(MOV(pstate_f36mminf40sar2, ax));	// 10134 mov     pState_f36Mminf40sar2, ax ;~ 0613:1197
cs=0x613;eip=0x00119a; 	X(PUSH(cs));	// 10135 push    cs ;~ 0613:119A
cs=0x613;eip=0x00119b; 	R(CALL(plane_rotate_op,0));	// 10136 call    near ptr plane_rotate_op ;~ 0613:119B
cs=0x613;eip=0x00119e; 	T(MOV(ax, vec_planerotopresult));	// 10137 mov     ax, vec_planerotopresult ;~ 0613:119E
cs=0x613;eip=0x0011a1; 	T(CWD);	// 10138 cwd ;~ 0613:11A1
cs=0x613;eip=0x0011a2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10139 mov     bx, [bp+var_DE] ;~ 0613:11A2
cs=0x613;eip=0x0011a6; 	X(SUB(*(dw*)(raddr(ds,bx+0)), ax));	// 10140 sub     [bx+0], ax ;~ 0613:11A6
cs=0x613;eip=0x0011a8; 	X(SBB(*(dw*)(raddr(ds,bx+2)), dx));	// 10141 sbb     [bx+2], dx ;~ 0613:11A8
cs=0x613;eip=0x0011ab; 	T(MOV(ax, word_44f3e));	// 10142 mov     ax, word_44F3E ;~ 0613:11AB
cs=0x613;eip=0x0011ae; 	T(CWD);	// 10143 cwd ;~ 0613:11AE
cs=0x613;eip=0x0011af; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10144 mov     bx, [bp+var_DE] ;~ 0613:11AF
cs=0x613;eip=0x0011b3; 	X(SUB(*(dw*)(raddr(ds,bx+4)), ax));	// 10145 sub     [bx+4], ax ;~ 0613:11B3
cs=0x613;eip=0x0011b6; 	X(SBB(*(dw*)(raddr(ds,bx+6)), dx));	// 10146 sbb     [bx+6], dx ;~ 0613:11B6
cs=0x613;eip=0x0011b9; 	T(MOV(ax, word_44f40));	// 10147 mov     ax, word_44F40 ;~ 0613:11B9
cs=0x613;eip=0x0011bc; 	T(CWD);	// 10148 cwd ;~ 0613:11BC
cs=0x613;eip=0x0011bd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10149 mov     bx, [bp+var_DE] ;~ 0613:11BD
cs=0x613;eip=0x0011c1; 	X(SUB(*(dw*)(raddr(ds,bx+8)), ax));	// 10150 sub     [bx+8], ax ;~ 0613:11C1
cs=0x613;eip=0x0011c4; 	X(SBB(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 10151 sbb     [bx+0Ah], dx ;~ 0613:11C4
cs=0x613;eip=0x0011c7; 	R(JMP(loc_15cdf));	// 10152 jmp     loc_15CDF ;~ 0613:11C7
loc_158da:
	// 4930 
cs=0x613;eip=0x0011ca; 	X(MOV(planindex, 0));	// 10156 mov     planindex, 0 ;~ 0613:11CA
cs=0x613;eip=0x0011d0; 	T(MOV(ax, planptr));	// 10157 mov     ax, planptr ;~ 0613:11D0
cs=0x613;eip=0x0011d3; 	T(MOV(dx, word_454c4));	// 10158 mov     dx, word_454C4 ;~ 0613:11D3
cs=0x613;eip=0x0011d7; 	X(MOV(current_planptr, ax));	// 10159 mov     current_planptr, ax ;~ 0613:11D7
cs=0x613;eip=0x0011da; 	X(MOV(word_44d66, dx));	// 10160 mov     word_44D66, dx ;~ 0613:11DA
cs=0x613;eip=0x0011de; 	X(MOV(byte_4392c, 1));	// 10161 mov     byte_4392C, 1 ;~ 0613:11DE
cs=0x613;eip=0x0011e3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10162 mov     bx, [bp+var_DE] ;~ 0613:11E3
cs=0x613;eip=0x0011e7; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 10163 mov     ax, [bx+0] ;~ 0613:11E7
cs=0x613;eip=0x0011e9; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 10164 mov     dx, [bx+2] ;~ 0613:11E9
cs=0x613;eip=0x0011ec; 	T(MOV(cl, 6));	// 10165 mov     cl, 6 ;~ 0613:11EC
loc_158fe:
	// 4931 
cs=0x613;eip=0x0011ee; 	T(SAR(dx, 1));	// 10168 sar     dx, 1 ;~ 0613:11EE
cs=0x613;eip=0x0011f0; 	T(RCR(ax, 1));	// 10169 rcr     ax, 1 ;~ 0613:11F0
cs=0x613;eip=0x0011f2; 	T(DEC(cl));	// 10170 dec     cl ;~ 0613:11F2
cs=0x613;eip=0x0011f4; 	R(JNZ(loc_158fe));	// 10171 jnz     short loc_158FE ;~ 0613:11F4
cs=0x613;eip=0x0011f6; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1c6)), ax));	// 10172 mov     [bp+vec_1C6], ax ;~ 0613:11F6
cs=0x613;eip=0x0011fa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10173 mov     bx, [bp+var_DE] ;~ 0613:11FA
cs=0x613;eip=0x0011fe; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 10174 mov     ax, [bx+4] ;~ 0613:11FE
cs=0x613;eip=0x001201; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 10175 mov     dx, [bx+6] ;~ 0613:1201
cs=0x613;eip=0x001204; 	T(MOV(cl, 6));	// 10176 mov     cl, 6 ;~ 0613:1204
loc_15916:
	// 4932 
cs=0x613;eip=0x001206; 	T(SAR(dx, 1));	// 10179 sar     dx, 1 ;~ 0613:1206
cs=0x613;eip=0x001208; 	T(RCR(ax, 1));	// 10180 rcr     ax, 1 ;~ 0613:1208
cs=0x613;eip=0x00120a; 	T(DEC(cl));	// 10181 dec     cl ;~ 0613:120A
cs=0x613;eip=0x00120c; 	R(JNZ(loc_15916));	// 10182 jnz     short loc_15916 ;~ 0613:120C
cs=0x613;eip=0x00120e; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 10183 mov     [bp+var_1C4], ax ;~ 0613:120E
cs=0x613;eip=0x001212; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10184 mov     bx, [bp+var_DE] ;~ 0613:1212
cs=0x613;eip=0x001216; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 10185 mov     ax, [bx+8] ;~ 0613:1216
cs=0x613;eip=0x001219; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 10186 mov     dx, [bx+0Ah] ;~ 0613:1219
cs=0x613;eip=0x00121c; 	T(MOV(cl, 6));	// 10187 mov     cl, 6 ;~ 0613:121C
loc_1592e:
	// 4933 
cs=0x613;eip=0x00121e; 	T(SAR(dx, 1));	// 10190 sar     dx, 1 ;~ 0613:121E
cs=0x613;eip=0x001220; 	T(RCR(ax, 1));	// 10191 rcr     ax, 1 ;~ 0613:1220
cs=0x613;eip=0x001222; 	T(DEC(cl));	// 10192 dec     cl ;~ 0613:1222
cs=0x613;eip=0x001224; 	R(JNZ(loc_1592e));	// 10193 jnz     short loc_1592E ;~ 0613:1224
cs=0x613;eip=0x001226; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 10194 mov     [bp+var_1C2], ax ;~ 0613:1226
cs=0x613;eip=0x00122a; 	X(PUSH(ax));	// 10195 push    ax ;~ 0613:122A
cs=0x613;eip=0x00122b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c4))));	// 10196 push    [bp+var_1C4] ;~ 0613:122B
cs=0x613;eip=0x00122f; 	X(PUSH(*(dw*)(raddr(ss,bp+vec_1c6))));	// 10197 push    [bp+vec_1C6] ;~ 0613:122F
cs=0x613;eip=0x001233; 	T(SUB(ax, ax));	// 10198 sub     ax, ax ;~ 0613:1233
cs=0x613;eip=0x001235; 	X(PUSH(ax));	// 10199 push    ax ;~ 0613:1235
cs=0x613;eip=0x001236; 	X(PUSH(cs));	// 10200 push    cs ;~ 0613:1236
cs=0x613;eip=0x001237; 	R(CALL(plane_origin_op,0));	// 10201 call    near ptr plane_origin_op ;~ 0613:1237
cs=0x613;eip=0x00123a; 	T(ADD(sp, 8));	// 10202 add     sp, 8 ;~ 0613:123A
cs=0x613;eip=0x00123d; 	X(MOV(nextposandnormalip, ax));	// 10203 mov     nextPosAndNormalIP, ax ;~ 0613:123D
loc_15950:
	// 4934 
cs=0x613;eip=0x001240; 	T(CMP(nextposandnormalip, 0));	// 10207 cmp     nextPosAndNormalIP, 0 ;~ 0613:1240
cs=0x613;eip=0x001245; 	R(JG(loc_1595a));	// 10208 jg      short loc_1595A ;~ 0613:1245
cs=0x613;eip=0x001247; 	R(JMP(loc_156ed));	// 10209 jmp     loc_156ED ;~ 0613:1247
loc_1595a:
	// 4935 
cs=0x613;eip=0x00124a; 	T(CMP(*(dw*)(raddr(ss,bp+var_f0)), 0));	// 10213 cmp     [bp+var_F0], 0 ;~ 0613:124A
cs=0x613;eip=0x00124f; 	R(JG(loc_15964));	// 10214 jg      short loc_15964 ;~ 0613:124F
cs=0x613;eip=0x001251; 	R(JMP(loc_15642));	// 10215 jmp     loc_15642 ;~ 0613:1251
loc_15964:
	// 4936 
cs=0x613;eip=0x001254; 	T(CMP(nextposandnormalip, 0x18));	// 10219 cmp     nextPosAndNormalIP, 18h ;~ 0613:1254
cs=0x613;eip=0x001259; 	R(JL(loc_1596e));	// 10220 jl      short loc_1596E ;~ 0613:1259
cs=0x613;eip=0x00125b; 	R(JMP(loc_15642));	// 10221 jmp     loc_15642 ;~ 0613:125B
loc_1596e:
	// 4937 
cs=0x613;eip=0x00125e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vec_e4))));	// 10225 mov     ax, [bp+vec_E4] ;~ 0613:125E
cs=0x613;eip=0x001262; 	T(CWD);	// 10226 cwd ;~ 0613:1262
cs=0x613;eip=0x001263; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10227 mov     bx, [bp+var_DE] ;~ 0613:1263
cs=0x613;eip=0x001267; 	X(ADD(*(dw*)(raddr(ds,bx+0)), ax));	// 10228 add     [bx+0], ax ;~ 0613:1267
cs=0x613;eip=0x001269; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 10229 adc     [bx+2], dx ;~ 0613:1269
cs=0x613;eip=0x00126c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e2))));	// 10230 mov     ax, [bp+var_E2] ;~ 0613:126C
cs=0x613;eip=0x001270; 	T(CWD);	// 10231 cwd ;~ 0613:1270
cs=0x613;eip=0x001271; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10232 mov     bx, [bp+var_DE] ;~ 0613:1271
cs=0x613;eip=0x001275; 	X(ADD(*(dw*)(raddr(ds,bx+4)), ax));	// 10233 add     [bx+4], ax ;~ 0613:1275
cs=0x613;eip=0x001278; 	X(ADC(*(dw*)(raddr(ds,bx+6)), dx));	// 10234 adc     [bx+6], dx ;~ 0613:1278
cs=0x613;eip=0x00127b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e0))));	// 10235 mov     ax, [bp+var_E0] ;~ 0613:127B
cs=0x613;eip=0x00127f; 	T(CWD);	// 10236 cwd ;~ 0613:127F
cs=0x613;eip=0x001280; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10237 mov     bx, [bp+var_DE] ;~ 0613:1280
cs=0x613;eip=0x001284; 	X(ADD(*(dw*)(raddr(ds,bx+8)), ax));	// 10238 add     [bx+8], ax ;~ 0613:1284
cs=0x613;eip=0x001287; 	X(ADC(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 10239 adc     [bx+0Ah], dx ;~ 0613:1287
cs=0x613;eip=0x00128a; 	R(JMP(loc_156ed));	// 10240 jmp     loc_156ED ;~ 0613:128A
loc_1599e:
	// 4938 
cs=0x613;eip=0x00128e; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 10245 cmp     [bp+var_A], 0 ;~ 0613:128E
cs=0x613;eip=0x001292; 	R(JLE(loc_159ad));	// 10246 jle     short loc_159AD ;~ 0613:1292
cs=0x613;eip=0x001294; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), 0));	// 10247 cmp     [bp+var_1A], 0 ;~ 0613:1294
cs=0x613;eip=0x001298; 	R(JGE(loc_159ad));	// 10248 jge     short loc_159AD ;~ 0613:1298
cs=0x613;eip=0x00129a; 	R(JMP(loc_15a30));	// 10249 jmp     loc_15A30 ;~ 0613:129A
loc_159ad:
	// 4939 
cs=0x613;eip=0x00129d; 	X(MOV(vec_unk2, 0));	// 10254 mov     vec_unk2, 0 ;~ 0613:129D
cs=0x613;eip=0x0012a3; 	X(MOV(word_44f38, 0));	// 10255 mov     word_44F38, 0 ;~ 0613:12A3
cs=0x613;eip=0x0012a9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e6))));	// 10256 mov     ax, [bp+var_E6] ;~ 0613:12A9
cs=0x613;eip=0x0012ad; 	X(MOV(word_44f3a, ax));	// 10257 mov     word_44F3A, ax ;~ 0613:12AD
cs=0x613;eip=0x0012b0; 	T(MOV(ax, planindex));	// 10258 mov     ax, planindex ;~ 0613:12B0
cs=0x613;eip=0x0012b3; 	X(MOV(planindex_copy, ax));	// 10259 mov     planindex_copy, ax ;~ 0613:12B3
cs=0x613;eip=0x0012b6; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10260 mov     al, [bp+var_E8] ;~ 0613:12B6
cs=0x613;eip=0x0012ba; 	T(CBW);	// 10261 cbw ;~ 0613:12BA
cs=0x613;eip=0x0012bb; 	T(MOV(di, ax));	// 10262 mov     di, ax ;~ 0613:12BB
cs=0x613;eip=0x0012bd; 	T(SHL(di, 1));	// 10263 shl     di, 1 ;~ 0613:12BD
cs=0x613;eip=0x0012bf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+di+var_140))));	// 10264 mov     ax, [bp+di+var_140] ;~ 0613:12BF
cs=0x613;eip=0x0012c3; 	X(MOV(pstate_f36mminf40sar2, ax));	// 10265 mov     pState_f36Mminf40sar2, ax ;~ 0613:12C3
cs=0x613;eip=0x0012c6; 	X(PUSH(cs));	// 10266 push    cs ;~ 0613:12C6
cs=0x613;eip=0x0012c7; 	R(CALL(plane_rotate_op,0));	// 10267 call    near ptr plane_rotate_op ;~ 0613:12C7
cs=0x613;eip=0x0012ca; 	T(MOV(ax, vec_planerotopresult));	// 10268 mov     ax, vec_planerotopresult ;~ 0613:12CA
cs=0x613;eip=0x0012cd; 	T(CWD);	// 10269 cwd ;~ 0613:12CD
cs=0x613;eip=0x0012ce; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 10270 mov     bx, [bp+var_146] ;~ 0613:12CE
cs=0x613;eip=0x0012d2; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0))));	// 10271 mov     cx, [bx+0] ;~ 0613:12D2
cs=0x613;eip=0x0012d4; 	T(MOV(di, *(dw*)(raddr(ds,bx+2))));	// 10272 mov     di, [bx+2] ;~ 0613:12D4
cs=0x613;eip=0x0012d7; 	T(ADD(cx, ax));	// 10273 add     cx, ax ;~ 0613:12D7
cs=0x613;eip=0x0012d9; 	T(ADC(di, dx));	// 10274 adc     di, dx ;~ 0613:12D9
cs=0x613;eip=0x0012db; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10275 mov     bx, [bp+var_DE] ;~ 0613:12DB
cs=0x613;eip=0x0012df; 	X(MOV(*(dw*)(raddr(ds,bx+0)), cx));	// 10276 mov     [bx+0], cx ;~ 0613:12DF
cs=0x613;eip=0x0012e1; 	X(MOV(*(dw*)(raddr(ds,bx+2)), di));	// 10277 mov     [bx+2], di ;~ 0613:12E1
cs=0x613;eip=0x0012e4; 	T(MOV(ax, word_44f3e));	// 10278 mov     ax, word_44F3E ;~ 0613:12E4
cs=0x613;eip=0x0012e7; 	T(CWD);	// 10279 cwd ;~ 0613:12E7
cs=0x613;eip=0x0012e8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 10280 mov     bx, [bp+var_146] ;~ 0613:12E8
cs=0x613;eip=0x0012ec; 	T(MOV(cx, *(dw*)(raddr(ds,bx+4))));	// 10281 mov     cx, [bx+4] ;~ 0613:12EC
cs=0x613;eip=0x0012ef; 	T(MOV(di, *(dw*)(raddr(ds,bx+6))));	// 10282 mov     di, [bx+6] ;~ 0613:12EF
cs=0x613;eip=0x0012f2; 	T(ADD(cx, ax));	// 10283 add     cx, ax ;~ 0613:12F2
cs=0x613;eip=0x0012f4; 	T(ADC(di, dx));	// 10284 adc     di, dx ;~ 0613:12F4
cs=0x613;eip=0x0012f6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10285 mov     bx, [bp+var_DE] ;~ 0613:12F6
cs=0x613;eip=0x0012fa; 	X(MOV(*(dw*)(raddr(ds,bx+4)), cx));	// 10286 mov     [bx+4], cx ;~ 0613:12FA
cs=0x613;eip=0x0012fd; 	X(MOV(*(dw*)(raddr(ds,bx+6)), di));	// 10287 mov     [bx+6], di ;~ 0613:12FD
cs=0x613;eip=0x001300; 	T(MOV(ax, word_44f40));	// 10288 mov     ax, word_44F40 ;~ 0613:1300
cs=0x613;eip=0x001303; 	T(CWD);	// 10289 cwd ;~ 0613:1303
cs=0x613;eip=0x001304; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 10290 mov     bx, [bp+var_146] ;~ 0613:1304
cs=0x613;eip=0x001308; 	T(MOV(cx, *(dw*)(raddr(ds,bx+8))));	// 10291 mov     cx, [bx+8] ;~ 0613:1308
cs=0x613;eip=0x00130b; 	T(MOV(di, *(dw*)(raddr(ds,bx+0x0A))));	// 10292 mov     di, [bx+0Ah] ;~ 0613:130B
cs=0x613;eip=0x00130e; 	T(ADD(cx, ax));	// 10293 add     cx, ax ;~ 0613:130E
cs=0x613;eip=0x001310; 	T(ADC(di, dx));	// 10294 adc     di, dx ;~ 0613:1310
cs=0x613;eip=0x001312; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10295 mov     bx, [bp+var_DE] ;~ 0613:1312
cs=0x613;eip=0x001316; 	X(MOV(*(dw*)(raddr(ds,bx+8)), cx));	// 10296 mov     [bx+8], cx ;~ 0613:1316
cs=0x613;eip=0x001319; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), di));	// 10297 mov     [bx+0Ah], di ;~ 0613:1319
cs=0x613;eip=0x00131c; 	R(JMP(loc_15c04));	// 10298 jmp     loc_15C04 ;~ 0613:131C
loc_15a30:
	// 4940 
cs=0x613;eip=0x001320; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 10303 mov     ax, [bp+var_8] ;~ 0613:1320
cs=0x613;eip=0x001323; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), ax));	// 10304 mov     [bp+var_EE], ax ;~ 0613:1323
cs=0x613;eip=0x001327; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 10305 mov     ax, [bp+var_A] ;~ 0613:1327
cs=0x613;eip=0x00132a; 	T(NEG(ax));	// 10306 neg     ax ;~ 0613:132A
cs=0x613;eip=0x00132c; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 10307 mov     [bp+var_8], ax ;~ 0613:132C
cs=0x613;eip=0x00132f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ee))));	// 10308 mov     ax, [bp+var_EE] ;~ 0613:132F
cs=0x613;eip=0x001333; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 10309 mov     [bp+var_A], ax ;~ 0613:1333
cs=0x613;eip=0x001336; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 10310 mov     ax, [bp+var_18] ;~ 0613:1336
cs=0x613;eip=0x001339; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), ax));	// 10311 mov     [bp+var_EE], ax ;~ 0613:1339
cs=0x613;eip=0x00133d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 10312 mov     ax, [bp+var_1A] ;~ 0613:133D
cs=0x613;eip=0x001340; 	T(NEG(ax));	// 10313 neg     ax ;~ 0613:1340
cs=0x613;eip=0x001342; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 10314 mov     [bp+var_18], ax ;~ 0613:1342
cs=0x613;eip=0x001345; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ee))));	// 10315 mov     ax, [bp+var_EE] ;~ 0613:1345
cs=0x613;eip=0x001349; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 10316 mov     [bp+var_1A], ax ;~ 0613:1349
cs=0x613;eip=0x00134c; 	T(SUB(ax, ax));	// 10317 sub     ax, ax ;~ 0613:134C
cs=0x613;eip=0x00134e; 	X(PUSH(ax));	// 10318 push    ax ;~ 0613:134E
cs=0x613;eip=0x00134f; 	T(ax = bp+vec_fc);	// 10319 lea     ax, [bp+vec_FC] ;~ 0613:134F
cs=0x613;eip=0x001353; 	X(PUSH(ax));	// 10320 push    ax ;~ 0613:1353
cs=0x613;eip=0x001354; 	T(ax = bp+vec_c);	// 10321 lea     ax, [bp+vec_C] ;~ 0613:1354
cs=0x613;eip=0x001357; 	X(PUSH(ax));	// 10322 push    ax ;~ 0613:1357
cs=0x613;eip=0x001358; 	T(ax = bp+vec_1c);	// 10323 lea     ax, [bp+vec_1C] ;~ 0613:1358
cs=0x613;eip=0x00135b; 	X(PUSH(ax));	// 10324 push    ax ;~ 0613:135B
cs=0x613;eip=0x00135c; 	R(CALLF(vector_op_unk,0));	// 10325 call    vector_op_unk ;~ 0613:135C
cs=0x613;eip=0x001361; 	T(ADD(sp, 8));	// 10326 add     sp, 8 ;~ 0613:1361
cs=0x613;eip=0x001364; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vec_1c))));	// 10327 mov     ax, [bp+vec_1C] ;~ 0613:1364
cs=0x613;eip=0x001367; 	T(SUB(ax, *(dw*)(raddr(ss,bp+vec_fc))));	// 10328 sub     ax, [bp+vec_FC] ;~ 0613:1367
cs=0x613;eip=0x00136b; 	T(MOV(cl, 6));	// 10329 mov     cl, 6 ;~ 0613:136B
cs=0x613;eip=0x00136d; 	T(SHL(ax, cl));	// 10330 shl     ax, cl ;~ 0613:136D
cs=0x613;eip=0x00136f; 	X(MOV(*(dw*)(raddr(ss,bp+vec_17c)), ax));	// 10331 mov     [bp+vec_17C], ax ;~ 0613:136F
cs=0x613;eip=0x001373; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 10332 mov     ax, [bp+var_1A] ;~ 0613:1373
cs=0x613;eip=0x001376; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_fa))));	// 10333 sub     ax, [bp+var_FA] ;~ 0613:1376
cs=0x613;eip=0x00137a; 	T(SHL(ax, cl));	// 10334 shl     ax, cl ;~ 0613:137A
cs=0x613;eip=0x00137c; 	X(MOV(*(dw*)(raddr(ss,bp+var_17a)), ax));	// 10335 mov     [bp+var_17A], ax ;~ 0613:137C
cs=0x613;eip=0x001380; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 10336 mov     ax, [bp+var_18] ;~ 0613:1380
cs=0x613;eip=0x001383; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_f8))));	// 10337 sub     ax, [bp+var_F8] ;~ 0613:1383
cs=0x613;eip=0x001387; 	T(SHL(ax, cl));	// 10338 shl     ax, cl ;~ 0613:1387
cs=0x613;eip=0x001389; 	X(MOV(*(dw*)(raddr(ss,bp+var_178)), ax));	// 10339 mov     [bp+var_178], ax ;~ 0613:1389
cs=0x613;eip=0x00138d; 	T(ax = bp+vec_17c);	// 10340 lea     ax, [bp+vec_17C] ;~ 0613:138D
cs=0x613;eip=0x001391; 	X(PUSH(ax));	// 10341 push    ax ;~ 0613:1391
cs=0x613;eip=0x001392; 	R(CALLF(polarradius3d,0));	// 10342 call    polarRadius3D ;~ 0613:1392
cs=0x613;eip=0x001397; 	T(ADD(sp, 2));	// 10343 add     sp, 2 ;~ 0613:1397
cs=0x613;eip=0x00139a; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), ax));	// 10344 mov     [bp+var_EE], ax ;~ 0613:139A
cs=0x613;eip=0x00139e; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10345 mov     al, [bp+var_E8] ;~ 0613:139E
cs=0x613;eip=0x0013a2; 	T(CBW);	// 10346 cbw ;~ 0613:13A2
cs=0x613;eip=0x0013a3; 	T(MOV(di, ax));	// 10347 mov     di, ax ;~ 0613:13A3
cs=0x613;eip=0x0013a5; 	T(SHL(di, 1));	// 10348 shl     di, 1 ;~ 0613:13A5
cs=0x613;eip=0x0013a7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 10349 mov     bx, [bp+arg_0] ;~ 0613:13A7
cs=0x613;eip=0x0013aa; 	T(MOV(ax, *(dw*)(raddr(ds,bx+di+0x4C))));	// 10350 mov     ax, [bx+di+4Ch] ;~ 0613:13AA
cs=0x613;eip=0x0013ad; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_e6))));	// 10351 add     ax, [bp+var_E6] ;~ 0613:13AD
cs=0x613;eip=0x0013b1; 	X(MOV(*(dw*)(raddr(ss,bp+var_f4)), ax));	// 10352 mov     [bp+var_F4], ax ;~ 0613:13B1
cs=0x613;eip=0x0013b5; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_ee))));	// 10353 sub     ax, [bp+var_EE] ;~ 0613:13B5
cs=0x613;eip=0x0013b9; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), ax));	// 10354 mov     [bp+var_F2], ax ;~ 0613:13B9
cs=0x613;eip=0x0013bd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f4))));	// 10355 mov     ax, [bp+var_F4] ;~ 0613:13BD
cs=0x613;eip=0x0013c1; 	T(CWD);	// 10356 cwd ;~ 0613:13C1
cs=0x613;eip=0x0013c2; 	X(PUSH(dx));	// 10357 push    dx ;~ 0613:13C2
cs=0x613;eip=0x0013c3; 	X(PUSH(ax));	// 10358 push    ax ;~ 0613:13C3
cs=0x613;eip=0x0013c4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f2))));	// 10359 mov     ax, [bp+var_F2] ;~ 0613:13C4
cs=0x613;eip=0x0013c8; 	T(CWD);	// 10360 cwd ;~ 0613:13C8
cs=0x613;eip=0x0013c9; 	X(PUSH(dx));	// 10361 push    dx ;~ 0613:13C9
cs=0x613;eip=0x0013ca; 	X(PUSH(ax));	// 10362 push    ax ;~ 0613:13CA
cs=0x613;eip=0x0013cb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10363 mov     bx, [bp+var_DE] ;~ 0613:13CB
cs=0x613;eip=0x0013cf; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 10364 mov     ax, [bx+0] ;~ 0613:13CF
cs=0x613;eip=0x0013d1; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 10365 mov     dx, [bx+2] ;~ 0613:13D1
cs=0x613;eip=0x0013d4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 10366 mov     bx, [bp+var_146] ;~ 0613:13D4
cs=0x613;eip=0x0013d8; 	T(SUB(ax, *(dw*)(raddr(ds,bx+0))));	// 10367 sub     ax, [bx+0] ;~ 0613:13D8
cs=0x613;eip=0x0013da; 	T(SBB(dx, *(dw*)(raddr(ds,bx+2))));	// 10368 sbb     dx, [bx+2] ;~ 0613:13DA
cs=0x613;eip=0x0013dd; 	X(PUSH(dx));	// 10369 push    dx ;~ 0613:13DD
cs=0x613;eip=0x0013de; 	X(PUSH(ax));	// 10370 push    ax ;~ 0613:13DE
cs=0x613;eip=0x0013df; 	R(CALLF(__aflmul,0));	// 10371 call    __aFlmul ;~ 0613:13DF
cs=0x613;eip=0x0013e4; 	X(PUSH(dx));	// 10372 push    dx ;~ 0613:13E4
cs=0x613;eip=0x0013e5; 	X(PUSH(ax));	// 10373 push    ax ;~ 0613:13E5
cs=0x613;eip=0x0013e6; 	R(CALLF(__afldiv,0));	// 10374 call    __aFldiv ;~ 0613:13E6
cs=0x613;eip=0x0013eb; 	X(MOV(*(dw*)(raddr(ss,bp+vec_c)), ax));	// 10375 mov     [bp+vec_C], ax ;~ 0613:13EB
cs=0x613;eip=0x0013ee; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f4))));	// 10376 mov     ax, [bp+var_F4] ;~ 0613:13EE
cs=0x613;eip=0x0013f2; 	T(CWD);	// 10377 cwd ;~ 0613:13F2
cs=0x613;eip=0x0013f3; 	X(PUSH(dx));	// 10378 push    dx ;~ 0613:13F3
cs=0x613;eip=0x0013f4; 	X(PUSH(ax));	// 10379 push    ax ;~ 0613:13F4
cs=0x613;eip=0x0013f5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f2))));	// 10380 mov     ax, [bp+var_F2] ;~ 0613:13F5
cs=0x613;eip=0x0013f9; 	T(CWD);	// 10381 cwd ;~ 0613:13F9
cs=0x613;eip=0x0013fa; 	X(PUSH(dx));	// 10382 push    dx ;~ 0613:13FA
cs=0x613;eip=0x0013fb; 	X(PUSH(ax));	// 10383 push    ax ;~ 0613:13FB
cs=0x613;eip=0x0013fc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10384 mov     bx, [bp+var_DE] ;~ 0613:13FC
cs=0x613;eip=0x001400; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 10385 mov     ax, [bx+4] ;~ 0613:1400
cs=0x613;eip=0x001403; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 10386 mov     dx, [bx+6] ;~ 0613:1403
cs=0x613;eip=0x001406; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 10387 mov     bx, [bp+var_146] ;~ 0613:1406
cs=0x613;eip=0x00140a; 	T(SUB(ax, *(dw*)(raddr(ds,bx+4))));	// 10388 sub     ax, [bx+4] ;~ 0613:140A
cs=0x613;eip=0x00140d; 	T(SBB(dx, *(dw*)(raddr(ds,bx+6))));	// 10389 sbb     dx, [bx+6] ;~ 0613:140D
cs=0x613;eip=0x001410; 	X(PUSH(dx));	// 10390 push    dx ;~ 0613:1410
cs=0x613;eip=0x001411; 	X(PUSH(ax));	// 10391 push    ax ;~ 0613:1411
cs=0x613;eip=0x001412; 	R(CALLF(__aflmul,0));	// 10392 call    __aFlmul ;~ 0613:1412
cs=0x613;eip=0x001417; 	X(PUSH(dx));	// 10393 push    dx ;~ 0613:1417
cs=0x613;eip=0x001418; 	X(PUSH(ax));	// 10394 push    ax ;~ 0613:1418
cs=0x613;eip=0x001419; 	R(CALLF(__afldiv,0));	// 10395 call    __aFldiv ;~ 0613:1419
cs=0x613;eip=0x00141e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 10396 mov     [bp+var_A], ax ;~ 0613:141E
cs=0x613;eip=0x001421; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f4))));	// 10397 mov     ax, [bp+var_F4] ;~ 0613:1421
cs=0x613;eip=0x001425; 	T(CWD);	// 10398 cwd ;~ 0613:1425
cs=0x613;eip=0x001426; 	X(PUSH(dx));	// 10399 push    dx ;~ 0613:1426
cs=0x613;eip=0x001427; 	X(PUSH(ax));	// 10400 push    ax ;~ 0613:1427
cs=0x613;eip=0x001428; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f2))));	// 10401 mov     ax, [bp+var_F2] ;~ 0613:1428
cs=0x613;eip=0x00142c; 	T(CWD);	// 10402 cwd ;~ 0613:142C
cs=0x613;eip=0x00142d; 	X(PUSH(dx));	// 10403 push    dx ;~ 0613:142D
cs=0x613;eip=0x00142e; 	X(PUSH(ax));	// 10404 push    ax ;~ 0613:142E
cs=0x613;eip=0x00142f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10405 mov     bx, [bp+var_DE] ;~ 0613:142F
cs=0x613;eip=0x001433; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 10406 mov     ax, [bx+8] ;~ 0613:1433
cs=0x613;eip=0x001436; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 10407 mov     dx, [bx+0Ah] ;~ 0613:1436
cs=0x613;eip=0x001439; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 10408 mov     bx, [bp+var_146] ;~ 0613:1439
cs=0x613;eip=0x00143d; 	T(SUB(ax, *(dw*)(raddr(ds,bx+8))));	// 10409 sub     ax, [bx+8] ;~ 0613:143D
cs=0x613;eip=0x001440; 	T(SBB(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 10410 sbb     dx, [bx+0Ah] ;~ 0613:1440
cs=0x613;eip=0x001443; 	X(PUSH(dx));	// 10411 push    dx ;~ 0613:1443
cs=0x613;eip=0x001444; 	X(PUSH(ax));	// 10412 push    ax ;~ 0613:1444
cs=0x613;eip=0x001445; 	R(CALLF(__aflmul,0));	// 10413 call    __aFlmul ;~ 0613:1445
cs=0x613;eip=0x00144a; 	X(PUSH(dx));	// 10414 push    dx ;~ 0613:144A
cs=0x613;eip=0x00144b; 	X(PUSH(ax));	// 10415 push    ax ;~ 0613:144B
cs=0x613;eip=0x00144c; 	R(CALLF(__afldiv,0));	// 10416 call    __aFldiv ;~ 0613:144C
cs=0x613;eip=0x001451; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 10417 mov     [bp+var_8], ax ;~ 0613:1451
cs=0x613;eip=0x001454; 	X(MOV(vec_unk2, 0));	// 10418 mov     vec_unk2, 0 ;~ 0613:1454
cs=0x613;eip=0x00145a; 	X(MOV(word_44f38, 0));	// 10419 mov     word_44F38, 0 ;~ 0613:145A
cs=0x613;eip=0x001460; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ee))));	// 10420 mov     ax, [bp+var_EE] ;~ 0613:1460
cs=0x613;eip=0x001464; 	X(MOV(word_44f3a, ax));	// 10421 mov     word_44F3A, ax ;~ 0613:1464
cs=0x613;eip=0x001467; 	T(MOV(ax, planindex));	// 10422 mov     ax, planindex ;~ 0613:1467
cs=0x613;eip=0x00146a; 	X(MOV(planindex_copy, ax));	// 10423 mov     planindex_copy, ax ;~ 0613:146A
cs=0x613;eip=0x00146d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+di+var_140))));	// 10424 mov     ax, [bp+di+var_140] ;~ 0613:146D
cs=0x613;eip=0x001471; 	X(MOV(pstate_f36mminf40sar2, ax));	// 10425 mov     pState_f36Mminf40sar2, ax ;~ 0613:1471
cs=0x613;eip=0x001474; 	X(PUSH(cs));	// 10426 push    cs ;~ 0613:1474
cs=0x613;eip=0x001475; 	R(CALL(plane_rotate_op,0));	// 10427 call    near ptr plane_rotate_op ;~ 0613:1475
cs=0x613;eip=0x001478; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 10428 mov     bx, [bp+var_146] ;~ 0613:1478
cs=0x613;eip=0x00147c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 10429 mov     ax, [bx+0] ;~ 0613:147C
cs=0x613;eip=0x00147e; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 10430 mov     dx, [bx+2] ;~ 0613:147E
cs=0x613;eip=0x001481; 	T(MOV(cx, ax));	// 10431 mov     cx, ax ;~ 0613:1481
cs=0x613;eip=0x001483; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vec_c))));	// 10432 mov     ax, [bp+vec_C] ;~ 0613:1483
cs=0x613;eip=0x001486; 	T(MOV(bx, dx));	// 10433 mov     bx, dx ;~ 0613:1486
cs=0x613;eip=0x001488; 	T(CWD);	// 10434 cwd ;~ 0613:1488
cs=0x613;eip=0x001489; 	T(ADD(cx, ax));	// 10435 add     cx, ax ;~ 0613:1489
cs=0x613;eip=0x00148b; 	T(ADC(bx, dx));	// 10436 adc     bx, dx ;~ 0613:148B
cs=0x613;eip=0x00148d; 	T(MOV(ax, vec_planerotopresult));	// 10437 mov     ax, vec_planerotopresult ;~ 0613:148D
cs=0x613;eip=0x001490; 	T(CWD);	// 10438 cwd ;~ 0613:1490
cs=0x613;eip=0x001491; 	T(ADD(cx, ax));	// 10439 add     cx, ax ;~ 0613:1491
cs=0x613;eip=0x001493; 	T(ADC(bx, dx));	// 10440 adc     bx, dx ;~ 0613:1493
cs=0x613;eip=0x001495; 	T(MOV(ax, bx));	// 10441 mov     ax, bx ;~ 0613:1495
cs=0x613;eip=0x001497; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10442 mov     bx, [bp+var_DE] ;~ 0613:1497
cs=0x613;eip=0x00149b; 	X(MOV(*(dw*)(raddr(ds,bx+0)), cx));	// 10443 mov     [bx+0], cx ;~ 0613:149B
cs=0x613;eip=0x00149d; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 10444 mov     [bx+2], ax ;~ 0613:149D
cs=0x613;eip=0x0014a0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 10445 mov     bx, [bp+var_146] ;~ 0613:14A0
cs=0x613;eip=0x0014a4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 10446 mov     ax, [bx+4] ;~ 0613:14A4
cs=0x613;eip=0x0014a7; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 10447 mov     dx, [bx+6] ;~ 0613:14A7
cs=0x613;eip=0x0014aa; 	T(MOV(cx, ax));	// 10448 mov     cx, ax ;~ 0613:14AA
cs=0x613;eip=0x0014ac; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 10449 mov     ax, [bp+var_A] ;~ 0613:14AC
cs=0x613;eip=0x0014af; 	T(MOV(bx, dx));	// 10450 mov     bx, dx ;~ 0613:14AF
cs=0x613;eip=0x0014b1; 	T(CWD);	// 10451 cwd ;~ 0613:14B1
cs=0x613;eip=0x0014b2; 	T(ADD(cx, ax));	// 10452 add     cx, ax ;~ 0613:14B2
cs=0x613;eip=0x0014b4; 	T(ADC(bx, dx));	// 10453 adc     bx, dx ;~ 0613:14B4
cs=0x613;eip=0x0014b6; 	T(MOV(ax, word_44f3e));	// 10454 mov     ax, word_44F3E ;~ 0613:14B6
cs=0x613;eip=0x0014b9; 	T(CWD);	// 10455 cwd ;~ 0613:14B9
cs=0x613;eip=0x0014ba; 	T(ADD(cx, ax));	// 10456 add     cx, ax ;~ 0613:14BA
cs=0x613;eip=0x0014bc; 	T(ADC(bx, dx));	// 10457 adc     bx, dx ;~ 0613:14BC
cs=0x613;eip=0x0014be; 	T(MOV(ax, bx));	// 10458 mov     ax, bx ;~ 0613:14BE
cs=0x613;eip=0x0014c0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10459 mov     bx, [bp+var_DE] ;~ 0613:14C0
cs=0x613;eip=0x0014c4; 	X(MOV(*(dw*)(raddr(ds,bx+4)), cx));	// 10460 mov     [bx+4], cx ;~ 0613:14C4
cs=0x613;eip=0x0014c7; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 10461 mov     [bx+6], ax ;~ 0613:14C7
cs=0x613;eip=0x0014ca; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_146))));	// 10462 mov     bx, [bp+var_146] ;~ 0613:14CA
cs=0x613;eip=0x0014ce; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 10463 mov     ax, [bx+8] ;~ 0613:14CE
cs=0x613;eip=0x0014d1; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 10464 mov     dx, [bx+0Ah] ;~ 0613:14D1
cs=0x613;eip=0x0014d4; 	T(MOV(cx, ax));	// 10465 mov     cx, ax ;~ 0613:14D4
cs=0x613;eip=0x0014d6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 10466 mov     ax, [bp+var_8] ;~ 0613:14D6
cs=0x613;eip=0x0014d9; 	T(MOV(bx, dx));	// 10467 mov     bx, dx ;~ 0613:14D9
cs=0x613;eip=0x0014db; 	T(CWD);	// 10468 cwd ;~ 0613:14DB
cs=0x613;eip=0x0014dc; 	T(ADD(cx, ax));	// 10469 add     cx, ax ;~ 0613:14DC
cs=0x613;eip=0x0014de; 	T(ADC(bx, dx));	// 10470 adc     bx, dx ;~ 0613:14DE
cs=0x613;eip=0x0014e0; 	T(MOV(ax, word_44f40));	// 10471 mov     ax, word_44F40 ;~ 0613:14E0
cs=0x613;eip=0x0014e3; 	T(CWD);	// 10472 cwd ;~ 0613:14E3
cs=0x613;eip=0x0014e4; 	T(ADD(cx, ax));	// 10473 add     cx, ax ;~ 0613:14E4
cs=0x613;eip=0x0014e6; 	T(ADC(bx, dx));	// 10474 adc     bx, dx ;~ 0613:14E6
cs=0x613;eip=0x0014e8; 	T(MOV(ax, bx));	// 10475 mov     ax, bx ;~ 0613:14E8
cs=0x613;eip=0x0014ea; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10476 mov     bx, [bp+var_DE] ;~ 0613:14EA
cs=0x613;eip=0x0014ee; 	X(MOV(*(dw*)(raddr(ds,bx+8)), cx));	// 10477 mov     [bx+8], cx ;~ 0613:14EE
cs=0x613;eip=0x0014f1; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), ax));	// 10478 mov     [bx+0Ah], ax ;~ 0613:14F1
loc_15c04:
	// 4941 
cs=0x613;eip=0x0014f4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10481 mov     bx, [bp+var_DE] ;~ 0613:14F4
cs=0x613;eip=0x0014f8; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 10482 mov     ax, [bx+0] ;~ 0613:14F8
cs=0x613;eip=0x0014fa; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 10483 mov     dx, [bx+2] ;~ 0613:14FA
cs=0x613;eip=0x0014fd; 	T(MOV(cl, 6));	// 10484 mov     cl, 6 ;~ 0613:14FD
loc_15c0f:
	// 4942 
cs=0x613;eip=0x0014ff; 	T(SAR(dx, 1));	// 10487 sar     dx, 1 ;~ 0613:14FF
cs=0x613;eip=0x001501; 	T(RCR(ax, 1));	// 10488 rcr     ax, 1 ;~ 0613:1501
cs=0x613;eip=0x001503; 	T(DEC(cl));	// 10489 dec     cl ;~ 0613:1503
cs=0x613;eip=0x001505; 	R(JNZ(loc_15c0f));	// 10490 jnz     short loc_15C0F ;~ 0613:1505
cs=0x613;eip=0x001507; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1c6)), ax));	// 10491 mov     [bp+vec_1C6], ax ;~ 0613:1507
cs=0x613;eip=0x00150b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10492 mov     bx, [bp+var_DE] ;~ 0613:150B
cs=0x613;eip=0x00150f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 10493 mov     ax, [bx+4] ;~ 0613:150F
cs=0x613;eip=0x001512; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 10494 mov     dx, [bx+6] ;~ 0613:1512
cs=0x613;eip=0x001515; 	T(MOV(cl, 6));	// 10495 mov     cl, 6 ;~ 0613:1515
loc_15c27:
	// 4943 
cs=0x613;eip=0x001517; 	T(SAR(dx, 1));	// 10498 sar     dx, 1 ;~ 0613:1517
cs=0x613;eip=0x001519; 	T(RCR(ax, 1));	// 10499 rcr     ax, 1 ;~ 0613:1519
cs=0x613;eip=0x00151b; 	T(DEC(cl));	// 10500 dec     cl ;~ 0613:151B
cs=0x613;eip=0x00151d; 	R(JNZ(loc_15c27));	// 10501 jnz     short loc_15C27 ;~ 0613:151D
cs=0x613;eip=0x00151f; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 10502 mov     [bp+var_1C4], ax ;~ 0613:151F
cs=0x613;eip=0x001523; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10503 mov     bx, [bp+var_DE] ;~ 0613:1523
cs=0x613;eip=0x001527; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 10504 mov     ax, [bx+8] ;~ 0613:1527
cs=0x613;eip=0x00152a; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 10505 mov     dx, [bx+0Ah] ;~ 0613:152A
cs=0x613;eip=0x00152d; 	T(MOV(cl, 6));	// 10506 mov     cl, 6 ;~ 0613:152D
loc_15c3f:
	// 4944 
cs=0x613;eip=0x00152f; 	T(SAR(dx, 1));	// 10509 sar     dx, 1 ;~ 0613:152F
cs=0x613;eip=0x001531; 	T(RCR(ax, 1));	// 10510 rcr     ax, 1 ;~ 0613:1531
cs=0x613;eip=0x001533; 	T(DEC(cl));	// 10511 dec     cl ;~ 0613:1533
cs=0x613;eip=0x001535; 	R(JNZ(loc_15c3f));	// 10512 jnz     short loc_15C3F ;~ 0613:1535
cs=0x613;eip=0x001537; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 10513 mov     [bp+var_1C2], ax ;~ 0613:1537
cs=0x613;eip=0x00153b; 	X(PUSH(ax));	// 10514 push    ax ;~ 0613:153B
cs=0x613;eip=0x00153c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c4))));	// 10515 push    [bp+var_1C4] ;~ 0613:153C
cs=0x613;eip=0x001540; 	X(PUSH(*(dw*)(raddr(ss,bp+vec_1c6))));	// 10516 push    [bp+vec_1C6] ;~ 0613:1540
cs=0x613;eip=0x001544; 	X(PUSH(planindex));	// 10517 push    planindex ;~ 0613:1544
cs=0x613;eip=0x001548; 	X(PUSH(cs));	// 10518 push    cs ;~ 0613:1548
cs=0x613;eip=0x001549; 	R(CALL(plane_origin_op,0));	// 10519 call    near ptr plane_origin_op ;~ 0613:1549
cs=0x613;eip=0x00154c; 	T(ADD(sp, 8));	// 10520 add     sp, 8 ;~ 0613:154C
cs=0x613;eip=0x00154f; 	X(MOV(nextposandnormalip, ax));	// 10521 mov     nextPosAndNormalIP, ax ;~ 0613:154F
cs=0x613;eip=0x001552; 	T(OR(ax, ax));	// 10522 or      ax, ax ;~ 0613:1552
cs=0x613;eip=0x001554; 	R(JGE(loc_15cdf));	// 10523 jge     short loc_15CDF ;~ 0613:1554
cs=0x613;eip=0x001556; 	T(CMP(*(raddr(ss,bp+var_136)), 0));	// 10524 cmp     [bp+var_136], 0 ;~ 0613:1556
cs=0x613;eip=0x00155b; 	R(JZ(loc_15c75));	// 10525 jz      short loc_15C75 ;~ 0613:155B
cs=0x613;eip=0x00155d; 	T(NEG(ax));	// 10526 neg     ax ;~ 0613:155D
cs=0x613;eip=0x00155f; 	T(ADD(ax, 6));	// 10527 add     ax, 6 ;~ 0613:155F
cs=0x613;eip=0x001562; 	X(MOV(nextposandnormalip, ax));	// 10528 mov     nextPosAndNormalIP, ax ;~ 0613:1562
loc_15c75:
	// 4945 
cs=0x613;eip=0x001565; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), 0));	// 10531 mov     [bp+var_1C2], 0 ;~ 0613:1565
cs=0x613;eip=0x00156b; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1c6)), 0));	// 10532 mov     [bp+vec_1C6], 0 ;~ 0613:156B
cs=0x613;eip=0x001571; 	T(MOV(ax, nextposandnormalip));	// 10533 mov     ax, nextPosAndNormalIP ;~ 0613:1571
cs=0x613;eip=0x001574; 	T(NEG(ax));	// 10534 neg     ax ;~ 0613:1574
cs=0x613;eip=0x001576; 	T(MOV(cl, 6));	// 10535 mov     cl, 6 ;~ 0613:1576
cs=0x613;eip=0x001578; 	T(SHL(ax, cl));	// 10536 shl     ax, cl ;~ 0613:1578
cs=0x613;eip=0x00157a; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 10537 mov     [bp+var_1C4], ax ;~ 0613:157A
cs=0x613;eip=0x00157e; 	T(ax = bp+vec_fc);	// 10538 lea     ax, [bp+vec_FC] ;~ 0613:157E
cs=0x613;eip=0x001582; 	X(PUSH(ax));	// 10539 push    ax ;~ 0613:1582
cs=0x613;eip=0x001583; 	T(MOV(ax, 0x22));	// 10540 mov     ax, 22h ; '"' ;~ 0613:1583
cs=0x613;eip=0x001586; 	X(IMUL1_2(planindex));	// 10541 imul    planindex ;~ 0613:1586
cs=0x613;eip=0x00158a; 	T(ADD(ax, planptr));	// 10542 add     ax, planptr ;~ 0613:158A
cs=0x613;eip=0x00158e; 	T(MOV(dx, word_454c4));	// 10543 mov     dx, word_454C4 ;~ 0613:158E
cs=0x613;eip=0x001592; 	T(ADD(ax, 0x10));	// 10544 add     ax, 10h ;~ 0613:1592
cs=0x613;eip=0x001595; 	X(PUSH(dx));	// 10545 push    dx ;~ 0613:1595
cs=0x613;eip=0x001596; 	X(PUSH(ax));	// 10546 push    ax ;~ 0613:1596
cs=0x613;eip=0x001597; 	T(ax = bp+vec_1c6);	// 10547 lea     ax, [bp+vec_1C6] ;~ 0613:1597
cs=0x613;eip=0x00159b; 	X(PUSH(ax));	// 10548 push    ax ;~ 0613:159B
cs=0x613;eip=0x00159c; 	X(PUSH(cs));	// 10549 push    cs ;~ 0613:159C
cs=0x613;eip=0x00159d; 	R(CALL(mat_mul_vector2,0));	// 10550 call    near ptr mat_mul_vector2 ;~ 0613:159D
cs=0x613;eip=0x0015a0; 	T(ADD(sp, 8));	// 10551 add     sp, 8 ;~ 0613:15A0
cs=0x613;eip=0x0015a3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vec_fc))));	// 10552 mov     ax, [bp+vec_FC] ;~ 0613:15A3
cs=0x613;eip=0x0015a7; 	T(CWD);	// 10553 cwd ;~ 0613:15A7
cs=0x613;eip=0x0015a8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10554 mov     bx, [bp+var_DE] ;~ 0613:15A8
cs=0x613;eip=0x0015ac; 	X(ADD(*(dw*)(raddr(ds,bx+0)), ax));	// 10555 add     [bx+0], ax ;~ 0613:15AC
cs=0x613;eip=0x0015ae; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 10556 adc     [bx+2], dx ;~ 0613:15AE
cs=0x613;eip=0x0015b1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_fa))));	// 10557 mov     ax, [bp+var_FA] ;~ 0613:15B1
cs=0x613;eip=0x0015b5; 	T(CWD);	// 10558 cwd ;~ 0613:15B5
cs=0x613;eip=0x0015b6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10559 mov     bx, [bp+var_DE] ;~ 0613:15B6
cs=0x613;eip=0x0015ba; 	X(ADD(*(dw*)(raddr(ds,bx+4)), ax));	// 10560 add     [bx+4], ax ;~ 0613:15BA
cs=0x613;eip=0x0015bd; 	X(ADC(*(dw*)(raddr(ds,bx+6)), dx));	// 10561 adc     [bx+6], dx ;~ 0613:15BD
cs=0x613;eip=0x0015c0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f8))));	// 10562 mov     ax, [bp+var_F8] ;~ 0613:15C0
cs=0x613;eip=0x0015c4; 	T(CWD);	// 10563 cwd ;~ 0613:15C4
cs=0x613;eip=0x0015c5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10564 mov     bx, [bp+var_DE] ;~ 0613:15C5
cs=0x613;eip=0x0015c9; 	X(ADD(*(dw*)(raddr(ds,bx+8)), ax));	// 10565 add     [bx+8], ax ;~ 0613:15C9
cs=0x613;eip=0x0015cc; 	X(ADC(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 10566 adc     [bx+0Ah], dx ;~ 0613:15CC
loc_15cdf:
	// 4946 
cs=0x613;eip=0x0015cf; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10570 mov     al, [bp+var_E8] ;~ 0613:15CF
cs=0x613;eip=0x0015d3; 	T(CBW);	// 10571 cbw ;~ 0613:15D3
cs=0x613;eip=0x0015d4; 	T(MOV(di, ax));	// 10572 mov     di, ax ;~ 0613:15D4
cs=0x613;eip=0x0015d6; 	T(SHL(di, 1));	// 10573 shl     di, 1 ;~ 0613:15D6
loc_15ce8:
	// 4947 
cs=0x613;eip=0x0015d8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 10576 mov     bx, [bp+arg_0] ;~ 0613:15D8
cs=0x613;eip=0x0015db; 	T(CMP(*(dw*)(raddr(ds,bx+di+0x4C)), 0x0FA));	// 10577 cmp     word ptr [bx+di+4Ch], 0FAh ; 'ú' ;~ 0613:15DB
cs=0x613;eip=0x0015e0; 	R(JLE(loc_15cf7));	// 10578 jle     short loc_15CF7 ;~ 0613:15E0
cs=0x613;eip=0x0015e2; 	X(OR(*(raddr(ds,bx+0x0CF)), 0x20));	// 10579 or      byte ptr [bx+0CFh], 20h ;~ 0613:15E2
loc_15cf7:
	// 4948 
cs=0x613;eip=0x0015e7; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10582 mov     al, [bp+var_E8] ;~ 0613:15E7
cs=0x613;eip=0x0015eb; 	T(CBW);	// 10583 cbw ;~ 0613:15EB
cs=0x613;eip=0x0015ec; 	T(MOV(di, ax));	// 10584 mov     di, ax ;~ 0613:15EC
cs=0x613;eip=0x0015ee; 	T(SHL(di, 1));	// 10585 shl     di, 1 ;~ 0613:15EE
cs=0x613;eip=0x0015f0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 10586 mov     bx, [bp+arg_0] ;~ 0613:15F0
cs=0x613;eip=0x0015f3; 	T(CMP(*(dw*)(raddr(ds,bx+di+0x4C)), 0x5AEB));	// 10587 cmp     word ptr [bx+di+4Ch], 5AEBh ;~ 0613:15F3
cs=0x613;eip=0x0015f8; 	R(JLE(loc_15d1a));	// 10588 jle     short loc_15D1A ;~ 0613:15F8
cs=0x613;eip=0x0015fa; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 10589 mov     al, [bp+arg_8] ;~ 0613:15FA
cs=0x613;eip=0x0015fd; 	T(CBW);	// 10590 cbw ;~ 0613:15FD
cs=0x613;eip=0x0015fe; 	X(PUSH(ax));	// 10591 push    ax ;~ 0613:15FE
cs=0x613;eip=0x0015ff; 	T(MOV(ax, 1));	// 10592 mov     ax, 1 ;~ 0613:15FF
cs=0x613;eip=0x001602; 	X(PUSH(ax));	// 10593 push    ax ;~ 0613:1602
cs=0x613;eip=0x001603; 	X(PUSH(cs));	// 10594 push    cs ;~ 0613:1603
cs=0x613;eip=0x001604; 	R(CALL(update_crash_state,0));	// 10595 call    near ptr update_crash_state ;~ 0613:1604
cs=0x613;eip=0x001607; 	T(ADD(sp, 4));	// 10596 add     sp, 4 ;~ 0613:1607
loc_15d1a:
	// 4949 
cs=0x613;eip=0x00160a; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10599 mov     al, [bp+var_E8] ;~ 0613:160A
cs=0x613;eip=0x00160e; 	T(CBW);	// 10600 cbw ;~ 0613:160E
cs=0x613;eip=0x00160f; 	T(MOV(di, ax));	// 10601 mov     di, ax ;~ 0613:160F
cs=0x613;eip=0x001611; 	T(SHL(di, 1));	// 10602 shl     di, 1 ;~ 0613:1611
cs=0x613;eip=0x001613; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 10603 mov     bx, [bp+arg_0] ;~ 0613:1613
cs=0x613;eip=0x001616; 	X(MOV(*(dw*)(raddr(ds,bx+di+0x4C)), 0));	// 10604 mov     word ptr [bx+di+4Ch], 0 ;~ 0613:1616
loc_15d2b:
	// 4950 
cs=0x613;eip=0x00161b; 	X(ADD(*(dw*)(raddr(ss,bp+var_de)), 0x0C));	// 10607 add     [bp+var_DE], 0Ch ;~ 0613:161B
cs=0x613;eip=0x001620; 	X(ADD(*(dw*)(raddr(ss,bp+var_146)), 0x0C));	// 10608 add     [bp+var_146], 0Ch ;~ 0613:1620
cs=0x613;eip=0x001625; 	X(INC(*(raddr(ss,bp+var_e8))));	// 10609 inc     [bp+var_E8] ;~ 0613:1625
loc_15d39:
	// 4951 
cs=0x613;eip=0x001629; 	T(CMP(*(raddr(ss,bp+var_e8)), 4));	// 10612 cmp     [bp+var_E8], 4 ;~ 0613:1629
cs=0x613;eip=0x00162e; 	R(JL(loc_15d43));	// 10613 jl      short loc_15D43 ;~ 0613:162E
cs=0x613;eip=0x001630; 	R(JMP(loc_15163));	// 10614 jmp     loc_15163 ;~ 0613:1630
loc_15d43:
	// 4952 
cs=0x613;eip=0x001633; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10618 mov     bx, [bp+var_DE] ;~ 0613:1633
cs=0x613;eip=0x001637; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 10619 mov     ax, [bx+0] ;~ 0613:1637
cs=0x613;eip=0x001639; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 10620 mov     dx, [bx+2] ;~ 0613:1639
cs=0x613;eip=0x00163c; 	T(MOV(cl, 6));	// 10621 mov     cl, 6 ;~ 0613:163C
loc_15d4e:
	// 4953 
cs=0x613;eip=0x00163e; 	T(SAR(dx, 1));	// 10624 sar     dx, 1 ;~ 0613:163E
cs=0x613;eip=0x001640; 	T(RCR(ax, 1));	// 10625 rcr     ax, 1 ;~ 0613:1640
cs=0x613;eip=0x001642; 	T(DEC(cl));	// 10626 dec     cl ;~ 0613:1642
cs=0x613;eip=0x001644; 	R(JNZ(loc_15d4e));	// 10627 jnz     short loc_15D4E ;~ 0613:1644
cs=0x613;eip=0x001646; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1c6)), ax));	// 10628 mov     [bp+vec_1C6], ax ;~ 0613:1646
cs=0x613;eip=0x00164a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10629 mov     bx, [bp+var_DE] ;~ 0613:164A
cs=0x613;eip=0x00164e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 10630 mov     ax, [bx+4] ;~ 0613:164E
cs=0x613;eip=0x001651; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 10631 mov     dx, [bx+6] ;~ 0613:1651
cs=0x613;eip=0x001654; 	T(MOV(cl, 6));	// 10632 mov     cl, 6 ;~ 0613:1654
loc_15d66:
	// 4954 
cs=0x613;eip=0x001656; 	T(SAR(dx, 1));	// 10635 sar     dx, 1 ;~ 0613:1656
cs=0x613;eip=0x001658; 	T(RCR(ax, 1));	// 10636 rcr     ax, 1 ;~ 0613:1658
cs=0x613;eip=0x00165a; 	T(DEC(cl));	// 10637 dec     cl ;~ 0613:165A
cs=0x613;eip=0x00165c; 	R(JNZ(loc_15d66));	// 10638 jnz     short loc_15D66 ;~ 0613:165C
cs=0x613;eip=0x00165e; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 10639 mov     [bp+var_1C4], ax ;~ 0613:165E
cs=0x613;eip=0x001662; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10640 mov     bx, [bp+var_DE] ;~ 0613:1662
cs=0x613;eip=0x001666; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 10641 mov     ax, [bx+8] ;~ 0613:1666
cs=0x613;eip=0x001669; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 10642 mov     dx, [bx+0Ah] ;~ 0613:1669
cs=0x613;eip=0x00166c; 	T(MOV(cl, 6));	// 10643 mov     cl, 6 ;~ 0613:166C
loc_15d7e:
	// 4955 
cs=0x613;eip=0x00166e; 	T(SAR(dx, 1));	// 10646 sar     dx, 1 ;~ 0613:166E
cs=0x613;eip=0x001670; 	T(RCR(ax, 1));	// 10647 rcr     ax, 1 ;~ 0613:1670
cs=0x613;eip=0x001672; 	T(DEC(cl));	// 10648 dec     cl ;~ 0613:1672
cs=0x613;eip=0x001674; 	R(JNZ(loc_15d7e));	// 10649 jnz     short loc_15D7E ;~ 0613:1674
cs=0x613;eip=0x001676; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 10650 mov     [bp+var_1C2], ax ;~ 0613:1676
cs=0x613;eip=0x00167a; 	T(CMP(byte_44889, 2));	// 10651 cmp     byte_44889, 2 ;~ 0613:167A
cs=0x613;eip=0x00167f; 	R(JZ(loc_15d94));	// 10652 jz      short loc_15D94 ;~ 0613:167F
cs=0x613;eip=0x001681; 	R(JMP(loc_151ba));	// 10653 jmp     loc_151BA ;~ 0613:1681
loc_15d94:
	// 4956 
cs=0x613;eip=0x001684; 	X(MOV(wallindex, 0x0FFFF));	// 10657 mov     wallindex, 0FFFFh ;~ 0613:1684
cs=0x613;eip=0x00168a; 	X(MOV(current_surf_type, tarmac));	// 10658 mov     current_surf_type, tarmac ;~ 0613:168A
cs=0x613;eip=0x00168f; 	X(MOV(planindex, 0));	// 10659 mov     planindex, 0 ;~ 0613:168F
cs=0x613;eip=0x001695; 	T(MOV(ax, planptr));	// 10660 mov     ax, planptr ;~ 0613:1695
cs=0x613;eip=0x001698; 	T(MOV(dx, word_454c4));	// 10661 mov     dx, word_454C4 ;~ 0613:1698
cs=0x613;eip=0x00169c; 	X(MOV(current_planptr, ax));	// 10662 mov     current_planptr, ax ;~ 0613:169C
cs=0x613;eip=0x00169f; 	X(MOV(word_44d66, dx));	// 10663 mov     word_44D66, dx ;~ 0613:169F
cs=0x613;eip=0x0016a3; 	R(JMP(loc_151db));	// 10664 jmp     loc_151DB ;~ 0613:16A3
loc_15db6:
	// 4957 
cs=0x613;eip=0x0016a6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ee))));	// 10668 mov     ax, [bp+var_EE] ;~ 0613:16A6
cs=0x613;eip=0x0016aa; 	T(ADD(ax, 0x180));	// 10669 add     ax, 180h ;~ 0613:16AA
cs=0x613;eip=0x0016ad; 	T(CWD);	// 10670 cwd ;~ 0613:16AD
cs=0x613;eip=0x0016ae; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10671 mov     bx, [bp+var_DE] ;~ 0613:16AE
cs=0x613;eip=0x0016b2; 	X(ADD(*(dw*)(raddr(ds,bx+4)), ax));	// 10672 add     [bx+4], ax ;~ 0613:16B2
cs=0x613;eip=0x0016b5; 	X(ADC(*(dw*)(raddr(ds,bx+6)), dx));	// 10673 adc     [bx+6], dx ;~ 0613:16B5
loc_15dc8:
	// 4958 
cs=0x613;eip=0x0016b8; 	X(ADD(*(dw*)(raddr(ss,bp+var_de)), 0x0C));	// 10676 add     [bp+var_DE], 0Ch ;~ 0613:16B8
cs=0x613;eip=0x0016bd; 	X(INC(*(raddr(ss,bp+var_e8))));	// 10677 inc     [bp+var_E8] ;~ 0613:16BD
loc_15dd1:
	// 4959 
cs=0x613;eip=0x0016c1; 	T(CMP(*(raddr(ss,bp+var_e8)), 4));	// 10680 cmp     [bp+var_E8], 4 ;~ 0613:16C1
cs=0x613;eip=0x0016c6; 	R(JL(loc_15ddb));	// 10681 jl      short loc_15DDB ;~ 0613:16C6
cs=0x613;eip=0x0016c8; 	R(JMP(code_update_globalpos));	// 10682 jmp     code_update_globalPos ;~ 0613:16C8
loc_15ddb:
	// 4960 
cs=0x613;eip=0x0016cb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10686 mov     bx, [bp+var_DE] ;~ 0613:16CB
cs=0x613;eip=0x0016cf; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 10687 mov     ax, [bx+0] ;~ 0613:16CF
cs=0x613;eip=0x0016d1; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 10688 mov     dx, [bx+2] ;~ 0613:16D1
cs=0x613;eip=0x0016d4; 	T(MOV(cl, 6));	// 10689 mov     cl, 6 ;~ 0613:16D4
loc_15de6:
	// 4961 
cs=0x613;eip=0x0016d6; 	T(SAR(dx, 1));	// 10692 sar     dx, 1 ;~ 0613:16D6
cs=0x613;eip=0x0016d8; 	T(RCR(ax, 1));	// 10693 rcr     ax, 1 ;~ 0613:16D8
cs=0x613;eip=0x0016da; 	T(DEC(cl));	// 10694 dec     cl ;~ 0613:16DA
cs=0x613;eip=0x0016dc; 	R(JNZ(loc_15de6));	// 10695 jnz     short loc_15DE6 ;~ 0613:16DC
cs=0x613;eip=0x0016de; 	T(MOV(cx, ax));	// 10696 mov     cx, ax ;~ 0613:16DE
cs=0x613;eip=0x0016e0; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10697 mov     al, [bp+var_E8] ;~ 0613:16E0
cs=0x613;eip=0x0016e4; 	T(CBW);	// 10698 cbw ;~ 0613:16E4
cs=0x613;eip=0x0016e5; 	T(MOV(bx, ax));	// 10699 mov     bx, ax ;~ 0613:16E5
cs=0x613;eip=0x0016e7; 	T(SHL(bx, 1));	// 10700 shl     bx, 1 ;~ 0613:16E7
cs=0x613;eip=0x0016e9; 	T(ADD(bx, ax));	// 10701 add     bx, ax ;~ 0613:16E9
cs=0x613;eip=0x0016eb; 	T(SHL(bx, 1));	// 10702 shl     bx, 1 ;~ 0613:16EB
cs=0x613;eip=0x0016ed; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 10703 add     bx, [bp+arg_0] ;~ 0613:16ED
cs=0x613;eip=0x0016f0; 	X(MOV(*(dw*)(raddr(ds,bx+0x74)), cx));	// 10704 mov     [bx+74h], cx ;~ 0613:16F0
cs=0x613;eip=0x0016f3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10705 mov     bx, [bp+var_DE] ;~ 0613:16F3
cs=0x613;eip=0x0016f7; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 10706 mov     ax, [bx+4] ;~ 0613:16F7
cs=0x613;eip=0x0016fa; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 10707 mov     dx, [bx+6] ;~ 0613:16FA
cs=0x613;eip=0x0016fd; 	T(MOV(cl, 6));	// 10708 mov     cl, 6 ;~ 0613:16FD
loc_15e0f:
	// 4962 
cs=0x613;eip=0x0016ff; 	T(SAR(dx, 1));	// 10711 sar     dx, 1 ;~ 0613:16FF
cs=0x613;eip=0x001701; 	T(RCR(ax, 1));	// 10712 rcr     ax, 1 ;~ 0613:1701
cs=0x613;eip=0x001703; 	T(DEC(cl));	// 10713 dec     cl ;~ 0613:1703
cs=0x613;eip=0x001705; 	R(JNZ(loc_15e0f));	// 10714 jnz     short loc_15E0F ;~ 0613:1705
cs=0x613;eip=0x001707; 	T(MOV(cx, ax));	// 10715 mov     cx, ax ;~ 0613:1707
cs=0x613;eip=0x001709; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10716 mov     al, [bp+var_E8] ;~ 0613:1709
cs=0x613;eip=0x00170d; 	T(CBW);	// 10717 cbw ;~ 0613:170D
cs=0x613;eip=0x00170e; 	T(MOV(bx, ax));	// 10718 mov     bx, ax ;~ 0613:170E
cs=0x613;eip=0x001710; 	T(SHL(bx, 1));	// 10719 shl     bx, 1 ;~ 0613:1710
cs=0x613;eip=0x001712; 	T(ADD(bx, ax));	// 10720 add     bx, ax ;~ 0613:1712
cs=0x613;eip=0x001714; 	T(SHL(bx, 1));	// 10721 shl     bx, 1 ;~ 0613:1714
cs=0x613;eip=0x001716; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 10722 add     bx, [bp+arg_0] ;~ 0613:1716
cs=0x613;eip=0x001719; 	X(MOV(*(dw*)(raddr(ds,bx+0x76)), cx));	// 10723 mov     [bx+76h], cx ;~ 0613:1719
cs=0x613;eip=0x00171c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10724 mov     bx, [bp+var_DE] ;~ 0613:171C
cs=0x613;eip=0x001720; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 10725 mov     ax, [bx+8] ;~ 0613:1720
cs=0x613;eip=0x001723; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 10726 mov     dx, [bx+0Ah] ;~ 0613:1723
cs=0x613;eip=0x001726; 	T(MOV(cl, 6));	// 10727 mov     cl, 6 ;~ 0613:1726
loc_15e38:
	// 4963 
cs=0x613;eip=0x001728; 	T(SAR(dx, 1));	// 10730 sar     dx, 1 ;~ 0613:1728
cs=0x613;eip=0x00172a; 	T(RCR(ax, 1));	// 10731 rcr     ax, 1 ;~ 0613:172A
cs=0x613;eip=0x00172c; 	T(DEC(cl));	// 10732 dec     cl ;~ 0613:172C
cs=0x613;eip=0x00172e; 	R(JNZ(loc_15e38));	// 10733 jnz     short loc_15E38 ;~ 0613:172E
cs=0x613;eip=0x001730; 	T(MOV(cx, ax));	// 10734 mov     cx, ax ;~ 0613:1730
cs=0x613;eip=0x001732; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10735 mov     al, [bp+var_E8] ;~ 0613:1732
cs=0x613;eip=0x001736; 	T(CBW);	// 10736 cbw ;~ 0613:1736
cs=0x613;eip=0x001737; 	T(MOV(bx, ax));	// 10737 mov     bx, ax ;~ 0613:1737
cs=0x613;eip=0x001739; 	T(SHL(bx, 1));	// 10738 shl     bx, 1 ;~ 0613:1739
cs=0x613;eip=0x00173b; 	T(ADD(bx, ax));	// 10739 add     bx, ax ;~ 0613:173B
cs=0x613;eip=0x00173d; 	T(SHL(bx, 1));	// 10740 shl     bx, 1 ;~ 0613:173D
cs=0x613;eip=0x00173f; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 10741 add     bx, [bp+arg_0] ;~ 0613:173F
cs=0x613;eip=0x001742; 	X(MOV(*(dw*)(raddr(ds,bx+0x78)), cx));	// 10742 mov     [bx+78h], cx ;~ 0613:1742
cs=0x613;eip=0x001745; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10743 mov     al, [bp+var_E8] ;~ 0613:1745
cs=0x613;eip=0x001749; 	T(CBW);	// 10744 cbw ;~ 0613:1749
cs=0x613;eip=0x00174a; 	T(MOV(di, ax));	// 10745 mov     di, ax ;~ 0613:174A
cs=0x613;eip=0x00174c; 	X(PUSH(di));	// 10746 push    di ;~ 0613:174C
cs=0x613;eip=0x00174d; 	T(MOV(bx, di));	// 10747 mov     bx, di ;~ 0613:174D
cs=0x613;eip=0x00174f; 	T(SHL(bx, 1));	// 10748 shl     bx, 1 ;~ 0613:174F
cs=0x613;eip=0x001751; 	T(ADD(bx, bp));	// 10749 add     bx, bp ;~ 0613:1751
cs=0x613;eip=0x001753; 	X(PUSH(*(dw*)(raddr(ds,bx-0x16))));	// 10750 push    word ptr [bx-16h] ; var_(16-2*wheelIndex) ;~ 0613:1753
cs=0x613;eip=0x001756; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 10751 push    [bp+arg_0] ;~ 0613:1756
cs=0x613;eip=0x001759; 	X(PUSH(cs));	// 10752 push    cs ;~ 0613:1759
cs=0x613;eip=0x00175a; 	R(CALL(carstate_rc_op,0));	// 10753 call    near ptr carState_rc_op ;~ 0613:175A
cs=0x613;eip=0x00175d; 	T(ADD(sp, 6));	// 10754 add     sp, 6 ;~ 0613:175D
cs=0x613;eip=0x001760; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), ax));	// 10755 mov     [bp+var_EE], ax ;~ 0613:1760
cs=0x613;eip=0x001764; 	T(CMP(pstate_minusrotate_z_1, 0));	// 10756 cmp     pState_minusRotate_z_1, 0 ;~ 0613:1764
cs=0x613;eip=0x001769; 	R(JNZ(loc_15e85));	// 10757 jnz     short loc_15E85 ;~ 0613:1769
cs=0x613;eip=0x00176b; 	T(CMP(pstate_minusrotate_x_1, 0));	// 10758 cmp     pState_minusRotate_x_1, 0 ;~ 0613:176B
cs=0x613;eip=0x001770; 	R(JNZ(loc_15e85));	// 10759 jnz     short loc_15E85 ;~ 0613:1770
cs=0x613;eip=0x001772; 	R(JMP(loc_15db6));	// 10760 jmp     loc_15DB6 ;~ 0613:1772
loc_15e85:
	// 4964 
cs=0x613;eip=0x001775; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), 0));	// 10765 mov     [bp+var_1C2], 0 ;~ 0613:1775
cs=0x613;eip=0x00177b; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1c6)), 0));	// 10766 mov     [bp+vec_1C6], 0 ;~ 0613:177B
cs=0x613;eip=0x001781; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ee))));	// 10767 mov     ax, [bp+var_EE] ;~ 0613:1781
cs=0x613;eip=0x001785; 	T(ADD(ax, 0x180));	// 10768 add     ax, 180h ;~ 0613:1785
cs=0x613;eip=0x001788; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 10769 mov     [bp+var_1C4], ax ;~ 0613:1788
cs=0x613;eip=0x00178c; 	T(ax = bp+vec_182);	// 10770 lea     ax, [bp+vec_182] ;~ 0613:178C
cs=0x613;eip=0x001790; 	X(PUSH(ax));	// 10771 push    ax ;~ 0613:1790
cs=0x613;eip=0x001791; 	T(MOV(ax, offset(dseg,mat_unk)));	// 10772 mov     ax, offset mat_unk ;~ 0613:1791
cs=0x613;eip=0x001794; 	X(PUSH(ax));	// 10773 push    ax ;~ 0613:1794
cs=0x613;eip=0x001795; 	T(ax = bp+vec_1c6);	// 10774 lea     ax, [bp+vec_1C6] ;~ 0613:1795
cs=0x613;eip=0x001799; 	X(PUSH(ax));	// 10775 push    ax ;~ 0613:1799
cs=0x613;eip=0x00179a; 	R(CALLF(mat_mul_vector,0));	// 10776 call    mat_mul_vector ;~ 0613:179A
cs=0x613;eip=0x00179f; 	T(ADD(sp, 6));	// 10777 add     sp, 6 ;~ 0613:179F
cs=0x613;eip=0x0017a2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vec_182))));	// 10778 mov     ax, [bp+vec_182] ;~ 0613:17A2
cs=0x613;eip=0x0017a6; 	T(CWD);	// 10779 cwd ;~ 0613:17A6
cs=0x613;eip=0x0017a7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10780 mov     bx, [bp+var_DE] ;~ 0613:17A7
cs=0x613;eip=0x0017ab; 	X(ADD(*(dw*)(raddr(ds,bx+0)), ax));	// 10781 add     [bx+0], ax ;~ 0613:17AB
cs=0x613;eip=0x0017ad; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 10782 adc     [bx+2], dx ;~ 0613:17AD
cs=0x613;eip=0x0017b0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_180))));	// 10783 mov     ax, [bp+var_180] ;~ 0613:17B0
cs=0x613;eip=0x0017b4; 	T(CWD);	// 10784 cwd ;~ 0613:17B4
cs=0x613;eip=0x0017b5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10785 mov     bx, [bp+var_DE] ;~ 0613:17B5
cs=0x613;eip=0x0017b9; 	X(ADD(*(dw*)(raddr(ds,bx+4)), ax));	// 10786 add     [bx+4], ax ;~ 0613:17B9
cs=0x613;eip=0x0017bc; 	X(ADC(*(dw*)(raddr(ds,bx+6)), dx));	// 10787 adc     [bx+6], dx ;~ 0613:17BC
cs=0x613;eip=0x0017bf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_17e))));	// 10788 mov     ax, [bp+var_17E] ;~ 0613:17BF
cs=0x613;eip=0x0017c3; 	T(CWD);	// 10789 cwd ;~ 0613:17C3
cs=0x613;eip=0x0017c4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10790 mov     bx, [bp+var_DE] ;~ 0613:17C4
cs=0x613;eip=0x0017c8; 	X(ADD(*(dw*)(raddr(ds,bx+8)), ax));	// 10791 add     [bx+8], ax ;~ 0613:17C8
cs=0x613;eip=0x0017cb; 	X(ADC(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 10792 adc     [bx+0Ah], dx ;~ 0613:17CB
cs=0x613;eip=0x0017ce; 	R(JMP(loc_15dc8));	// 10793 jmp     loc_15DC8 ;~ 0613:17CE
code_update_globalpos:
	// 4965 
cs=0x613;eip=0x0017d2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vecl_1c0))));	// 10798 mov     ax, [bp+vecl_1C0] ;~ 0613:17D2
cs=0x613;eip=0x0017d6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_1be))));	// 10799 mov     dx, [bp+var_1BE] ;~ 0613:17D6
cs=0x613;eip=0x0017da; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1b4))));	// 10800 add     ax, [bp+var_1B4] ;~ 0613:17DA
cs=0x613;eip=0x0017de; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_1b2))));	// 10801 adc     dx, [bp+var_1B2] ;~ 0613:17DE
cs=0x613;eip=0x0017e2; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1a8))));	// 10802 add     ax, [bp+var_1A8] ;~ 0613:17E2
cs=0x613;eip=0x0017e6; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_1a6))));	// 10803 adc     dx, [bp+var_1A6] ;~ 0613:17E6
cs=0x613;eip=0x0017ea; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_19c))));	// 10804 add     ax, [bp+var_19C] ;~ 0613:17EA
cs=0x613;eip=0x0017ee; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_19a))));	// 10805 adc     dx, [bp+var_19A] ;~ 0613:17EE
cs=0x613;eip=0x0017f2; 	T(MOV(cl, 2));	// 10806 mov     cl, 2 ;~ 0613:17F2
loc_15f04:
	// 4966 
cs=0x613;eip=0x0017f4; 	T(SAR(dx, 1));	// 10809 sar     dx, 1 ;~ 0613:17F4
cs=0x613;eip=0x0017f6; 	T(RCR(ax, 1));	// 10810 rcr     ax, 1 ;~ 0613:17F6
cs=0x613;eip=0x0017f8; 	T(DEC(cl));	// 10811 dec     cl ;~ 0613:17F8
cs=0x613;eip=0x0017fa; 	R(JNZ(loc_15f04));	// 10812 jnz     short loc_15F04 ;~ 0613:17FA
cs=0x613;eip=0x0017fc; 	X(MOV(pstate_lvec1_x, ax));	// 10813 mov     pState_lvec1_x, ax ;~ 0613:17FC
cs=0x613;eip=0x0017ff; 	X(MOV(word_449c0, dx));	// 10814 mov     word_449C0, dx ;~ 0613:17FF
cs=0x613;eip=0x001803; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1bc))));	// 10815 mov     ax, [bp+var_1BC] ;~ 0613:1803
cs=0x613;eip=0x001807; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_1ba))));	// 10816 mov     dx, [bp+var_1BA] ;~ 0613:1807
cs=0x613;eip=0x00180b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1b0))));	// 10817 add     ax, [bp+var_1B0] ;~ 0613:180B
cs=0x613;eip=0x00180f; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_1ae))));	// 10818 adc     dx, [bp+var_1AE] ;~ 0613:180F
cs=0x613;eip=0x001813; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1a4))));	// 10819 add     ax, [bp+var_1A4] ;~ 0613:1813
cs=0x613;eip=0x001817; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_1a2))));	// 10820 adc     dx, [bp+var_1A2] ;~ 0613:1817
cs=0x613;eip=0x00181b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_198))));	// 10821 add     ax, [bp+var_198] ;~ 0613:181B
cs=0x613;eip=0x00181f; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_196))));	// 10822 adc     dx, [bp+var_196] ;~ 0613:181F
cs=0x613;eip=0x001823; 	T(MOV(cl, 2));	// 10823 mov     cl, 2 ;~ 0613:1823
loc_15f35:
	// 4967 
cs=0x613;eip=0x001825; 	T(SAR(dx, 1));	// 10826 sar     dx, 1 ;~ 0613:1825
cs=0x613;eip=0x001827; 	T(RCR(ax, 1));	// 10827 rcr     ax, 1 ;~ 0613:1827
cs=0x613;eip=0x001829; 	T(DEC(cl));	// 10828 dec     cl ;~ 0613:1829
cs=0x613;eip=0x00182b; 	R(JNZ(loc_15f35));	// 10829 jnz     short loc_15F35 ;~ 0613:182B
cs=0x613;eip=0x00182d; 	X(MOV(pstate_lvec1_y, ax));	// 10830 mov     pState_lvec1_y, ax ;~ 0613:182D
cs=0x613;eip=0x001830; 	X(MOV(word_449c8, dx));	// 10831 mov     word_449C8, dx ;~ 0613:1830
cs=0x613;eip=0x001834; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1b8))));	// 10832 mov     ax, [bp+var_1B8] ;~ 0613:1834
cs=0x613;eip=0x001838; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_1b6))));	// 10833 mov     dx, [bp+var_1B6] ;~ 0613:1838
cs=0x613;eip=0x00183c; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1ac))));	// 10834 add     ax, [bp+var_1AC] ;~ 0613:183C
cs=0x613;eip=0x001840; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_1aa))));	// 10835 adc     dx, [bp+var_1AA] ;~ 0613:1840
cs=0x613;eip=0x001844; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1a0))));	// 10836 add     ax, [bp+var_1A0] ;~ 0613:1844
cs=0x613;eip=0x001848; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_19e))));	// 10837 adc     dx, [bp+var_19E] ;~ 0613:1848
cs=0x613;eip=0x00184c; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_194))));	// 10838 add     ax, [bp+var_194] ;~ 0613:184C
cs=0x613;eip=0x001850; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_192))));	// 10839 adc     dx, [bp+var_192] ;~ 0613:1850
cs=0x613;eip=0x001854; 	T(MOV(cl, 2));	// 10840 mov     cl, 2 ;~ 0613:1854
loc_15f66:
	// 4968 
cs=0x613;eip=0x001856; 	T(SAR(dx, 1));	// 10843 sar     dx, 1 ;~ 0613:1856
cs=0x613;eip=0x001858; 	T(RCR(ax, 1));	// 10844 rcr     ax, 1 ;~ 0613:1858
cs=0x613;eip=0x00185a; 	T(DEC(cl));	// 10845 dec     cl ;~ 0613:185A
cs=0x613;eip=0x00185c; 	R(JNZ(loc_15f66));	// 10846 jnz     short loc_15F66 ;~ 0613:185C
cs=0x613;eip=0x00185e; 	X(MOV(pstate_lvec1_z, ax));	// 10847 mov     pState_lvec1_z, ax ;~ 0613:185E
cs=0x613;eip=0x001861; 	X(MOV(word_449cc, dx));	// 10848 mov     word_449CC, dx ;~ 0613:1861
cs=0x613;eip=0x001865; 	T(ax = bp+vecl_1c0);	// 10849 lea     ax, [bp+vecl_1C0] ;~ 0613:1865
cs=0x613;eip=0x001869; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), ax));	// 10850 mov     [bp+var_DE], ax ;~ 0613:1869
cs=0x613;eip=0x00186d; 	X(MOV(*(raddr(ss,bp+var_e8)), 0));	// 10851 mov     [bp+var_E8], 0 ;~ 0613:186D
code_update_rotcoords:
	// 4969 
cs=0x613;eip=0x001872; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10854 mov     al, [bp+var_E8] ;~ 0613:1872
cs=0x613;eip=0x001876; 	T(CBW);	// 10855 cbw ;~ 0613:1876
cs=0x613;eip=0x001877; 	T(MOV(cx, ax));	// 10856 mov     cx, ax ;~ 0613:1877
cs=0x613;eip=0x001879; 	T(SHL(ax, 1));	// 10857 shl     ax, 1 ;~ 0613:1879
cs=0x613;eip=0x00187b; 	T(ADD(ax, cx));	// 10858 add     ax, cx ;~ 0613:187B
cs=0x613;eip=0x00187d; 	T(SHL(ax, 1));	// 10859 shl     ax, 1 ;~ 0613:187D
cs=0x613;eip=0x00187f; 	T(MOV(di, ax));	// 10860 mov     di, ax ;~ 0613:187F
cs=0x613;eip=0x001881; 	T(ADD(di, bp));	// 10861 add     di, bp ;~ 0613:1881
cs=0x613;eip=0x001883; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10862 mov     bx, [bp+var_DE] ;~ 0613:1883
cs=0x613;eip=0x001887; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 10863 mov     ax, [bx+0] ;~ 0613:1887
cs=0x613;eip=0x001889; 	T(SUB(ax, pstate_lvec1_x));	// 10864 sub     ax, pState_lvec1_x ;~ 0613:1889
cs=0x613;eip=0x00188d; 	X(MOV(*(dw*)(raddr(ds,di-0x1DE)), ax));	// 10865 mov     [di-1DEh], ax ;~ 0613:188D
cs=0x613;eip=0x001891; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10866 mov     bx, [bp+var_DE] ;~ 0613:1891
cs=0x613;eip=0x001895; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 10867 mov     ax, [bx+4] ;~ 0613:1895
cs=0x613;eip=0x001898; 	T(SUB(ax, pstate_lvec1_y));	// 10868 sub     ax, pState_lvec1_y ;~ 0613:1898
cs=0x613;eip=0x00189c; 	X(MOV(*(dw*)(raddr(ds,di-0x1DC)), ax));	// 10869 mov     [di-1DCh], ax ;~ 0613:189C
cs=0x613;eip=0x0018a0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 10870 mov     bx, [bp+var_DE] ;~ 0613:18A0
cs=0x613;eip=0x0018a4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 10871 mov     ax, [bx+8] ;~ 0613:18A4
cs=0x613;eip=0x0018a7; 	T(SUB(ax, pstate_lvec1_z));	// 10872 sub     ax, pState_lvec1_z ;~ 0613:18A7
cs=0x613;eip=0x0018ab; 	X(MOV(*(dw*)(raddr(ds,di-0x1DA)), ax));	// 10873 mov     [di-1DAh], ax ;~ 0613:18AB
cs=0x613;eip=0x0018af; 	X(ADD(*(dw*)(raddr(ss,bp+var_de)), 0x0C));	// 10874 add     [bp+var_DE], 0Ch ;~ 0613:18AF
cs=0x613;eip=0x0018b4; 	X(INC(*(raddr(ss,bp+var_e8))));	// 10875 inc     [bp+var_E8] ;~ 0613:18B4
cs=0x613;eip=0x0018b8; 	T(CMP(*(raddr(ss,bp+var_e8)), 4));	// 10876 cmp     [bp+var_E8], 4 ;~ 0613:18B8
cs=0x613;eip=0x0018bd; 	R(JL(code_update_rotcoords));	// 10877 jl      short code_update_rotCoords ;~ 0613:18BD
cs=0x613;eip=0x0018bf; 	T(CMP(word_449c8, 0));	// 10878 cmp     word_449C8, 0 ;~ 0613:18BF
cs=0x613;eip=0x0018c4; 	R(JGE(loc_15fde));	// 10879 jge     short loc_15FDE ;~ 0613:18C4
cs=0x613;eip=0x0018c6; 	T(SUB(ax, ax));	// 10880 sub     ax, ax ;~ 0613:18C6
cs=0x613;eip=0x0018c8; 	X(MOV(word_449c8, ax));	// 10881 mov     word_449C8, ax ;~ 0613:18C8
cs=0x613;eip=0x0018cb; 	X(MOV(pstate_lvec1_y, ax));	// 10882 mov     pState_lvec1_y, ax ;~ 0613:18CB
loc_15fde:
	// 4970 
cs=0x613;eip=0x0018ce; 	T(CMP(word_449c0, 0x1D));	// 10885 cmp     word_449C0, 1Dh ;~ 0613:18CE
cs=0x613;eip=0x0018d3; 	R(JL(loc_15ffe));	// 10886 jl      short loc_15FFE ;~ 0613:18D3
cs=0x613;eip=0x0018d5; 	R(JG(loc_15fef));	// 10887 jg      short loc_15FEF ;~ 0613:18D5
cs=0x613;eip=0x0018d7; 	T(CMP(pstate_lvec1_x, 0x0F100));	// 10888 cmp     pState_lvec1_x, 0F100h ;~ 0613:18D7
cs=0x613;eip=0x0018dd; 	R(JBE(loc_15ffe));	// 10889 jbe     short loc_15FFE ;~ 0613:18DD
loc_15fef:
	// 4971 
cs=0x613;eip=0x0018df; 	X(MOV(pstate_lvec1_x, 0x0F0FF));	// 10892 mov     pState_lvec1_x, 0F0FFh ;~ 0613:18DF
cs=0x613;eip=0x0018e5; 	X(MOV(word_449c0, 0x1D));	// 10893 mov     word_449C0, 1Dh ;~ 0613:18E5
cs=0x613;eip=0x0018eb; 	R(JMP(loc_1601b));	// 10894 jmp     short loc_1601B ;~ 0613:18EB
loc_15ffe:
	// 4972 
cs=0x613;eip=0x0018ee; 	T(CMP(word_449c0, 0));	// 10900 cmp     word_449C0, 0 ;~ 0613:18EE
cs=0x613;eip=0x0018f3; 	R(JG(loc_1601b));	// 10901 jg      short loc_1601B ;~ 0613:18F3
cs=0x613;eip=0x0018f5; 	R(JL(loc_1600f));	// 10902 jl      short loc_1600F ;~ 0613:18F5
cs=0x613;eip=0x0018f7; 	T(CMP(pstate_lvec1_x, 0x0F00));	// 10903 cmp     pState_lvec1_x, 0F00h ;~ 0613:18F7
cs=0x613;eip=0x0018fd; 	R(JNC(loc_1601b));	// 10904 jnb     short loc_1601B ;~ 0613:18FD
loc_1600f:
	// 4973 
cs=0x613;eip=0x0018ff; 	X(MOV(pstate_lvec1_x, 0x0F00));	// 10907 mov     pState_lvec1_x, 0F00h ;~ 0613:18FF
cs=0x613;eip=0x001905; 	X(MOV(word_449c0, 0));	// 10908 mov     word_449C0, 0 ;~ 0613:1905
loc_1601b:
	// 4974 
cs=0x613;eip=0x00190b; 	T(CMP(word_449cc, 0x1D));	// 10912 cmp     word_449CC, 1Dh ;~ 0613:190B
cs=0x613;eip=0x001910; 	R(JL(loc_1603a));	// 10913 jl      short loc_1603A ;~ 0613:1910
cs=0x613;eip=0x001912; 	R(JG(loc_1602c));	// 10914 jg      short loc_1602C ;~ 0613:1912
cs=0x613;eip=0x001914; 	T(CMP(pstate_lvec1_z, 0x0F100));	// 10915 cmp     pState_lvec1_z, 0F100h ;~ 0613:1914
cs=0x613;eip=0x00191a; 	R(JBE(loc_1603a));	// 10916 jbe     short loc_1603A ;~ 0613:191A
loc_1602c:
	// 4975 
cs=0x613;eip=0x00191c; 	X(MOV(pstate_lvec1_z, 0x0F0FF));	// 10919 mov     pState_lvec1_z, 0F0FFh ;~ 0613:191C
cs=0x613;eip=0x001922; 	X(MOV(word_449cc, 0x1D));	// 10920 mov     word_449CC, 1Dh ;~ 0613:1922
cs=0x613;eip=0x001928; 	R(JMP(loc_16057));	// 10921 jmp     short loc_16057 ;~ 0613:1928
loc_1603a:
	// 4976 
cs=0x613;eip=0x00192a; 	T(CMP(word_449cc, 0));	// 10926 cmp     word_449CC, 0 ;~ 0613:192A
cs=0x613;eip=0x00192f; 	R(JG(loc_16057));	// 10927 jg      short loc_16057 ;~ 0613:192F
cs=0x613;eip=0x001931; 	R(JL(loc_1604b));	// 10928 jl      short loc_1604B ;~ 0613:1931
cs=0x613;eip=0x001933; 	T(CMP(pstate_lvec1_z, 0x0F00));	// 10929 cmp     pState_lvec1_z, 0F00h ;~ 0613:1933
cs=0x613;eip=0x001939; 	R(JNC(loc_16057));	// 10930 jnb     short loc_16057 ;~ 0613:1939
loc_1604b:
	// 4977 
cs=0x613;eip=0x00193b; 	X(MOV(pstate_lvec1_z, 0x0F00));	// 10933 mov     pState_lvec1_z, 0F00h ;~ 0613:193B
cs=0x613;eip=0x001941; 	X(MOV(word_449cc, 0));	// 10934 mov     word_449CC, 0 ;~ 0613:1941
loc_16057:
	// 4978 
cs=0x613;eip=0x001947; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1cc))));	// 10938 mov     ax, [bp+var_1CC] ;~ 0613:1947
cs=0x613;eip=0x00194b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1d2))));	// 10939 add     ax, [bp+var_1D2] ;~ 0613:194B
cs=0x613;eip=0x00194f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+vec_1de))));	// 10940 sub     ax, [bp+vec_1DE] ;~ 0613:194F
cs=0x613;eip=0x001953; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1d8))));	// 10941 sub     ax, [bp+var_1D8] ;~ 0613:1953
cs=0x613;eip=0x001957; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), ax));	// 10942 mov     [bp+var_EE], ax ;~ 0613:1957
cs=0x613;eip=0x00195b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c8))));	// 10943 mov     ax, [bp+var_1C8] ;~ 0613:195B
cs=0x613;eip=0x00195f; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1ce))));	// 10944 add     ax, [bp+var_1CE] ;~ 0613:195F
cs=0x613;eip=0x001963; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1da))));	// 10945 sub     ax, [bp+var_1DA] ;~ 0613:1963
cs=0x613;eip=0x001967; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1d4))));	// 10946 sub     ax, [bp+var_1D4] ;~ 0613:1967
cs=0x613;eip=0x00196b; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), ax));	// 10947 mov     [bp+var_F2], ax ;~ 0613:196B
cs=0x613;eip=0x00196f; 	T(NEG(ax));	// 10948 neg     ax ;~ 0613:196F
cs=0x613;eip=0x001971; 	X(PUSH(ax));	// 10949 push    ax ;~ 0613:1971
cs=0x613;eip=0x001972; 	X(PUSH(*(dw*)(raddr(ss,bp+var_ee))));	// 10950 push    [bp+var_EE] ;~ 0613:1972
cs=0x613;eip=0x001976; 	R(CALLF(polarangle,0));	// 10951 call    polarAngle ;~ 0613:1976
cs=0x613;eip=0x00197b; 	T(ADD(sp, 4));	// 10952 add     sp, 4 ;~ 0613:197B
cs=0x613;eip=0x00197e; 	T(AND(ah, 3));	// 10953 and     ah, 3 ;~ 0613:197E
cs=0x613;eip=0x001981; 	X(MOV(pstate_minusrotate_y_1, ax));	// 10954 mov     pState_minusRotate_y_1, ax ;~ 0613:1981
cs=0x613;eip=0x001984; 	X(PUSH(ax));	// 10955 push    ax ;~ 0613:1984
cs=0x613;eip=0x001985; 	T(ax = bp+var_10e);	// 10956 lea     ax, [bp+var_10E] ;~ 0613:1985
cs=0x613;eip=0x001989; 	X(PUSH(ax));	// 10957 push    ax ;~ 0613:1989
cs=0x613;eip=0x00198a; 	R(CALLF(mat_rot_y,0));	// 10958 call    mat_rot_y ;~ 0613:198A
cs=0x613;eip=0x00198f; 	T(ADD(sp, 4));	// 10959 add     sp, 4 ;~ 0613:198F
cs=0x613;eip=0x001992; 	X(MOV(*(raddr(ss,bp+var_e8)), 0));	// 10960 mov     [bp+var_E8], 0 ;~ 0613:1992
loc_160a7:
	// 4979 
cs=0x613;eip=0x001997; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 10963 mov     al, [bp+var_E8] ;~ 0613:1997
cs=0x613;eip=0x00199b; 	T(CBW);	// 10964 cbw ;~ 0613:199B
cs=0x613;eip=0x00199c; 	T(MOV(cx, ax));	// 10965 mov     cx, ax ;~ 0613:199C
cs=0x613;eip=0x00199e; 	T(SHL(ax, 1));	// 10966 shl     ax, 1 ;~ 0613:199E
cs=0x613;eip=0x0019a0; 	T(ADD(ax, cx));	// 10967 add     ax, cx ;~ 0613:19A0
cs=0x613;eip=0x0019a2; 	T(SHL(ax, 1));	// 10968 shl     ax, 1 ;~ 0613:19A2
cs=0x613;eip=0x0019a4; 	T(MOV(di, ax));	// 10969 mov     di, ax ;~ 0613:19A4
cs=0x613;eip=0x0019a6; 	T(ADD(di, bp));	// 10970 add     di, bp ;~ 0613:19A6
cs=0x613;eip=0x0019a8; 	T(SUB(di, 0x1DE));	// 10971 sub     di, 1DEh ;~ 0613:19A8
cs=0x613;eip=0x0019ac; 	X(PUSH(si));	// 10972 push    si ;~ 0613:19AC
cs=0x613;eip=0x0019ad; 	X(PUSH(di));	// 10973 push    di ;~ 0613:19AD
cs=0x613;eip=0x0019ae; 	T(MOV(si, di));	// 10974 mov     si, di ;~ 0613:19AE
cs=0x613;eip=0x0019b0; 	T(di = bp+vec_fc);	// 10975 lea     di, [bp+vec_FC] ;~ 0613:19B0
cs=0x613;eip=0x0019b4; 	X(PUSH(ss));	// 10976 push    ss ;~ 0613:19B4
cs=0x613;eip=0x0019b5; 	X(POP(es));	// 10977 pop     es ;~ 0613:19B5
cs=0x613;eip=0x0019b6; 	X(MOVSW);	// 10978 movsw ;~ 0613:19B6
cs=0x613;eip=0x0019b7; 	X(MOVSW);	// 10979 movsw ;~ 0613:19B7
cs=0x613;eip=0x0019b8; 	X(MOVSW);	// 10980 movsw ;~ 0613:19B8
cs=0x613;eip=0x0019b9; 	X(POP(di));	// 10981 pop     di ;~ 0613:19B9
cs=0x613;eip=0x0019ba; 	X(POP(si));	// 10982 pop     si ;~ 0613:19BA
cs=0x613;eip=0x0019bb; 	X(PUSH(di));	// 10983 push    di ;~ 0613:19BB
cs=0x613;eip=0x0019bc; 	T(ax = bp+var_10e);	// 10984 lea     ax, [bp+var_10E] ;~ 0613:19BC
cs=0x613;eip=0x0019c0; 	X(PUSH(ax));	// 10985 push    ax ;~ 0613:19C0
cs=0x613;eip=0x0019c1; 	T(ax = bp+vec_fc);	// 10986 lea     ax, [bp+vec_FC] ;~ 0613:19C1
cs=0x613;eip=0x0019c5; 	X(PUSH(ax));	// 10987 push    ax ;~ 0613:19C5
cs=0x613;eip=0x0019c6; 	R(CALLF(mat_mul_vector,0));	// 10988 call    mat_mul_vector ;~ 0613:19C6
cs=0x613;eip=0x0019cb; 	T(ADD(sp, 6));	// 10989 add     sp, 6 ;~ 0613:19CB
cs=0x613;eip=0x0019ce; 	X(INC(*(raddr(ss,bp+var_e8))));	// 10990 inc     [bp+var_E8] ;~ 0613:19CE
cs=0x613;eip=0x0019d2; 	T(CMP(*(raddr(ss,bp+var_e8)), 4));	// 10991 cmp     [bp+var_E8], 4 ;~ 0613:19D2
cs=0x613;eip=0x0019d7; 	R(JL(loc_160a7));	// 10992 jl      short loc_160A7 ;~ 0613:19D7
cs=0x613;eip=0x0019d9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c8))));	// 10993 mov     ax, [bp+var_1C8] ;~ 0613:19D9
cs=0x613;eip=0x0019dd; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1ce))));	// 10994 add     ax, [bp+var_1CE] ;~ 0613:19DD
cs=0x613;eip=0x0019e1; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1da))));	// 10995 sub     ax, [bp+var_1DA] ;~ 0613:19E1
cs=0x613;eip=0x0019e5; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1d4))));	// 10996 sub     ax, [bp+var_1D4] ;~ 0613:19E5
cs=0x613;eip=0x0019e9; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), ax));	// 10997 mov     [bp+var_F2], ax ;~ 0613:19E9
cs=0x613;eip=0x0019ed; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1ca))));	// 10998 mov     ax, [bp+var_1CA] ;~ 0613:19ED
cs=0x613;eip=0x0019f1; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1d0))));	// 10999 add     ax, [bp+var_1D0] ;~ 0613:19F1
cs=0x613;eip=0x0019f5; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1dc))));	// 11000 sub     ax, [bp+var_1DC] ;~ 0613:19F5
cs=0x613;eip=0x0019f9; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1d6))));	// 11001 sub     ax, [bp+var_1D6] ;~ 0613:19F9
cs=0x613;eip=0x0019fd; 	X(MOV(*(dw*)(raddr(ss,bp+var_f4)), ax));	// 11002 mov     [bp+var_F4], ax ;~ 0613:19FD
cs=0x613;eip=0x001a01; 	T(OR(ax, ax));	// 11003 or      ax, ax ;~ 0613:1A01
cs=0x613;eip=0x001a03; 	R(JNZ(loc_1611c));	// 11004 jnz     short loc_1611C ;~ 0613:1A03
cs=0x613;eip=0x001a05; 	T(CMP(*(dw*)(raddr(ss,bp+var_f2)), 0));	// 11005 cmp     [bp+var_F2], 0 ;~ 0613:1A05
cs=0x613;eip=0x001a0a; 	R(JL(loc_16146));	// 11006 jl      short loc_16146 ;~ 0613:1A0A
loc_1611c:
	// 4980 
cs=0x613;eip=0x001a0c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_f4))));	// 11009 push    [bp+var_F4] ;~ 0613:1A0C
cs=0x613;eip=0x001a10; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f2))));	// 11010 mov     ax, [bp+var_F2] ;~ 0613:1A10
cs=0x613;eip=0x001a14; 	T(NEG(ax));	// 11011 neg     ax ;~ 0613:1A14
cs=0x613;eip=0x001a16; 	X(PUSH(ax));	// 11012 push    ax ;~ 0613:1A16
cs=0x613;eip=0x001a17; 	R(CALLF(polarangle,0));	// 11013 call    polarAngle ;~ 0613:1A17
cs=0x613;eip=0x001a1c; 	T(ADD(sp, 4));	// 11014 add     sp, 4 ;~ 0613:1A1C
cs=0x613;eip=0x001a1f; 	T(SUB(ax, 0x100));	// 11015 sub     ax, 100h ;~ 0613:1A1F
cs=0x613;eip=0x001a22; 	X(MOV(pstate_minusrotate_x_1, ax));	// 11016 mov     pState_minusRotate_x_1, ax ;~ 0613:1A22
cs=0x613;eip=0x001a25; 	T(OR(ax, ax));	// 11017 or      ax, ax ;~ 0613:1A25
cs=0x613;eip=0x001a27; 	R(JGE(loc_1613e));	// 11018 jge     short loc_1613E ;~ 0613:1A27
cs=0x613;eip=0x001a29; 	T(NEG(ax));	// 11019 neg     ax ;~ 0613:1A29
cs=0x613;eip=0x001a2b; 	R(JMP(loc_16141));	// 11020 jmp     short loc_16141 ;~ 0613:1A2B
loc_1613e:
	// 4981 
cs=0x613;eip=0x001a2e; 	T(MOV(ax, pstate_minusrotate_x_1));	// 11025 mov     ax, pState_minusRotate_x_1 ;~ 0613:1A2E
loc_16141:
	// 4982 
cs=0x613;eip=0x001a31; 	T(CMP(ax, 2));	// 11028 cmp     ax, 2 ;~ 0613:1A31
cs=0x613;eip=0x001a34; 	R(JGE(loc_1614c));	// 11029 jge     short loc_1614C ;~ 0613:1A34
loc_16146:
	// 4983 
cs=0x613;eip=0x001a36; 	X(MOV(pstate_minusrotate_x_1, 0));	// 11032 mov     pState_minusRotate_x_1, 0 ;~ 0613:1A36
loc_1614c:
	// 4984 
cs=0x613;eip=0x001a3c; 	T(CMP(pstate_minusrotate_x_1, 0));	// 11035 cmp     pState_minusRotate_x_1, 0 ;~ 0613:1A3C
cs=0x613;eip=0x001a41; 	R(JZ(loc_161ab));	// 11036 jz      short loc_161AB ;~ 0613:1A41
cs=0x613;eip=0x001a43; 	X(PUSH(pstate_minusrotate_x_1));	// 11037 push    pState_minusRotate_x_1 ;~ 0613:1A43
cs=0x613;eip=0x001a47; 	T(ax = bp+var_10e);	// 11038 lea     ax, [bp+var_10E] ;~ 0613:1A47
cs=0x613;eip=0x001a4b; 	X(PUSH(ax));	// 11039 push    ax ;~ 0613:1A4B
cs=0x613;eip=0x001a4c; 	R(CALLF(mat_rot_x,0));	// 11040 call    mat_rot_x ;~ 0613:1A4C
cs=0x613;eip=0x001a51; 	T(ADD(sp, 4));	// 11041 add     sp, 4 ;~ 0613:1A51
cs=0x613;eip=0x001a54; 	X(MOV(*(raddr(ss,bp+var_e8)), 0));	// 11042 mov     [bp+var_E8], 0 ;~ 0613:1A54
loc_16169:
	// 4985 
cs=0x613;eip=0x001a59; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 11045 mov     al, [bp+var_E8] ;~ 0613:1A59
cs=0x613;eip=0x001a5d; 	T(CBW);	// 11046 cbw ;~ 0613:1A5D
cs=0x613;eip=0x001a5e; 	T(MOV(cx, ax));	// 11047 mov     cx, ax ;~ 0613:1A5E
cs=0x613;eip=0x001a60; 	T(SHL(ax, 1));	// 11048 shl     ax, 1 ;~ 0613:1A60
cs=0x613;eip=0x001a62; 	T(ADD(ax, cx));	// 11049 add     ax, cx ;~ 0613:1A62
cs=0x613;eip=0x001a64; 	T(SHL(ax, 1));	// 11050 shl     ax, 1 ;~ 0613:1A64
cs=0x613;eip=0x001a66; 	T(MOV(di, ax));	// 11051 mov     di, ax ;~ 0613:1A66
cs=0x613;eip=0x001a68; 	T(ADD(di, bp));	// 11052 add     di, bp ;~ 0613:1A68
cs=0x613;eip=0x001a6a; 	T(SUB(di, 0x1DE));	// 11053 sub     di, 1DEh ;~ 0613:1A6A
cs=0x613;eip=0x001a6e; 	X(PUSH(si));	// 11054 push    si ;~ 0613:1A6E
cs=0x613;eip=0x001a6f; 	X(PUSH(di));	// 11055 push    di ;~ 0613:1A6F
cs=0x613;eip=0x001a70; 	T(MOV(si, di));	// 11056 mov     si, di ;~ 0613:1A70
cs=0x613;eip=0x001a72; 	T(di = bp+vec_fc);	// 11057 lea     di, [bp+vec_FC] ;~ 0613:1A72
cs=0x613;eip=0x001a76; 	X(PUSH(ss));	// 11058 push    ss ;~ 0613:1A76
cs=0x613;eip=0x001a77; 	X(POP(es));	// 11059 pop     es ;~ 0613:1A77
cs=0x613;eip=0x001a78; 	X(MOVSW);	// 11060 movsw ;~ 0613:1A78
cs=0x613;eip=0x001a79; 	X(MOVSW);	// 11061 movsw ;~ 0613:1A79
cs=0x613;eip=0x001a7a; 	X(MOVSW);	// 11062 movsw ;~ 0613:1A7A
cs=0x613;eip=0x001a7b; 	X(POP(di));	// 11063 pop     di ;~ 0613:1A7B
cs=0x613;eip=0x001a7c; 	X(POP(si));	// 11064 pop     si ;~ 0613:1A7C
cs=0x613;eip=0x001a7d; 	X(PUSH(di));	// 11065 push    di ;~ 0613:1A7D
cs=0x613;eip=0x001a7e; 	T(ax = bp+var_10e);	// 11066 lea     ax, [bp+var_10E] ;~ 0613:1A7E
cs=0x613;eip=0x001a82; 	X(PUSH(ax));	// 11067 push    ax ;~ 0613:1A82
cs=0x613;eip=0x001a83; 	T(ax = bp+vec_fc);	// 11068 lea     ax, [bp+vec_FC] ;~ 0613:1A83
cs=0x613;eip=0x001a87; 	X(PUSH(ax));	// 11069 push    ax ;~ 0613:1A87
cs=0x613;eip=0x001a88; 	R(CALLF(mat_mul_vector,0));	// 11070 call    mat_mul_vector ;~ 0613:1A88
cs=0x613;eip=0x001a8d; 	T(ADD(sp, 6));	// 11071 add     sp, 6 ;~ 0613:1A8D
cs=0x613;eip=0x001a90; 	X(INC(*(raddr(ss,bp+var_e8))));	// 11072 inc     [bp+var_E8] ;~ 0613:1A90
cs=0x613;eip=0x001a94; 	T(CMP(*(raddr(ss,bp+var_e8)), 4));	// 11073 cmp     [bp+var_E8], 4 ;~ 0613:1A94
cs=0x613;eip=0x001a99; 	R(JL(loc_16169));	// 11074 jl      short loc_16169 ;~ 0613:1A99
loc_161ab:
	// 4986 
cs=0x613;eip=0x001a9b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1d8))));	// 11077 mov     ax, [bp+var_1D8] ;~ 0613:1A9B
cs=0x613;eip=0x001a9f; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1d2))));	// 11078 add     ax, [bp+var_1D2] ;~ 0613:1A9F
cs=0x613;eip=0x001aa3; 	T(SUB(ax, *(dw*)(raddr(ss,bp+vec_1de))));	// 11079 sub     ax, [bp+vec_1DE] ;~ 0613:1AA3
cs=0x613;eip=0x001aa7; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1cc))));	// 11080 sub     ax, [bp+var_1CC] ;~ 0613:1AA7
cs=0x613;eip=0x001aab; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), ax));	// 11081 mov     [bp+var_F2], ax ;~ 0613:1AAB
cs=0x613;eip=0x001aaf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1d6))));	// 11082 mov     ax, [bp+var_1D6] ;~ 0613:1AAF
cs=0x613;eip=0x001ab3; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1d0))));	// 11083 add     ax, [bp+var_1D0] ;~ 0613:1AB3
cs=0x613;eip=0x001ab7; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1dc))));	// 11084 sub     ax, [bp+var_1DC] ;~ 0613:1AB7
cs=0x613;eip=0x001abb; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1ca))));	// 11085 sub     ax, [bp+var_1CA] ;~ 0613:1ABB
cs=0x613;eip=0x001abf; 	X(MOV(*(dw*)(raddr(ss,bp+var_f4)), ax));	// 11086 mov     [bp+var_F4], ax ;~ 0613:1ABF
cs=0x613;eip=0x001ac3; 	T(OR(ax, ax));	// 11087 or      ax, ax ;~ 0613:1AC3
cs=0x613;eip=0x001ac5; 	R(JNZ(loc_161de));	// 11088 jnz     short loc_161DE ;~ 0613:1AC5
cs=0x613;eip=0x001ac7; 	T(CMP(*(dw*)(raddr(ss,bp+var_f2)), 0));	// 11089 cmp     [bp+var_F2], 0 ;~ 0613:1AC7
cs=0x613;eip=0x001acc; 	R(JG(loc_16204));	// 11090 jg      short loc_16204 ;~ 0613:1ACC
loc_161de:
	// 4987 
cs=0x613;eip=0x001ace; 	X(PUSH(*(dw*)(raddr(ss,bp+var_f4))));	// 11093 push    [bp+var_F4] ;~ 0613:1ACE
cs=0x613;eip=0x001ad2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_f2))));	// 11094 push    [bp+var_F2] ;~ 0613:1AD2
cs=0x613;eip=0x001ad6; 	R(CALLF(polarangle,0));	// 11095 call    polarAngle ;~ 0613:1AD6
cs=0x613;eip=0x001adb; 	T(ADD(sp, 4));	// 11096 add     sp, 4 ;~ 0613:1ADB
cs=0x613;eip=0x001ade; 	T(SUB(ax, 0x100));	// 11097 sub     ax, 100h ;~ 0613:1ADE
cs=0x613;eip=0x001ae1; 	X(MOV(pstate_minusrotate_z_1, ax));	// 11098 mov     pState_minusRotate_z_1, ax ;~ 0613:1AE1
cs=0x613;eip=0x001ae4; 	T(OR(ax, ax));	// 11099 or      ax, ax ;~ 0613:1AE4
cs=0x613;eip=0x001ae6; 	R(JGE(loc_161fc));	// 11100 jge     short loc_161FC ;~ 0613:1AE6
cs=0x613;eip=0x001ae8; 	T(NEG(ax));	// 11101 neg     ax ;~ 0613:1AE8
cs=0x613;eip=0x001aea; 	R(JMP(loc_161ff));	// 11102 jmp     short loc_161FF ;~ 0613:1AEA
loc_161fc:
	// 4988 
cs=0x613;eip=0x001aec; 	T(MOV(ax, pstate_minusrotate_z_1));	// 11106 mov     ax, pState_minusRotate_z_1 ;~ 0613:1AEC
loc_161ff:
	// 4989 
cs=0x613;eip=0x001aef; 	T(CMP(ax, 2));	// 11109 cmp     ax, 2 ;~ 0613:1AEF
cs=0x613;eip=0x001af2; 	R(JGE(loc_1620a));	// 11110 jge     short loc_1620A ;~ 0613:1AF2
loc_16204:
	// 4990 
cs=0x613;eip=0x001af4; 	X(MOV(pstate_minusrotate_z_1, 0));	// 11113 mov     pState_minusRotate_z_1, 0 ;~ 0613:1AF4
loc_1620a:
	// 4991 
cs=0x613;eip=0x001afa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11116 mov     bx, [bp+arg_0] ;~ 0613:1AFA
cs=0x613;eip=0x001afd; 	T(MOV(di, bx));	// 11117 mov     di, bx ;~ 0613:1AFD
cs=0x613;eip=0x001aff; 	T(MOV(al, *(raddr(ds,di+0x0C2))));	// 11118 mov     al, [di+0C2h] ;~ 0613:1AFF
cs=0x613;eip=0x001b03; 	T(ADD(al, *(raddr(ds,di+0x0C3))));	// 11119 add     al, [di+0C3h] ;~ 0613:1B03
cs=0x613;eip=0x001b07; 	X(MOV(*(raddr(ds,bx+0x0BF)), al));	// 11120 mov     [bx+0BFh], al ;~ 0613:1B07
cs=0x613;eip=0x001b0b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11121 mov     bx, [bp+arg_0] ;~ 0613:1B0B
cs=0x613;eip=0x001b0e; 	T(MOV(di, bx));	// 11122 mov     di, bx ;~ 0613:1B0E
cs=0x613;eip=0x001b10; 	T(MOV(al, *(raddr(ds,di+0x0C4))));	// 11123 mov     al, [di+0C4h] ;~ 0613:1B10
cs=0x613;eip=0x001b14; 	T(ADD(al, *(raddr(ds,di+0x0C5))));	// 11124 add     al, [di+0C5h] ;~ 0613:1B14
cs=0x613;eip=0x001b18; 	X(MOV(*(raddr(ds,bx+0x0C0)), al));	// 11125 mov     [bx+0C0h], al ;~ 0613:1B18
cs=0x613;eip=0x001b1c; 	T(CMP(byte_44889, 2));	// 11126 cmp     byte_44889, 2 ;~ 0613:1B1C
cs=0x613;eip=0x001b21; 	R(JNZ(loc_16236));	// 11127 jnz     short loc_16236 ;~ 0613:1B21
cs=0x613;eip=0x001b23; 	R(JMP(loc_16840));	// 11128 jmp     loc_16840 ;~ 0613:1B23
loc_16236:
	// 4992 
cs=0x613;eip=0x001b26; 	T(CMP(is_in_replay, 0));	// 11132 cmp     is_in_replay, 0 ;~ 0613:1B26
cs=0x613;eip=0x001b2b; 	R(JNZ(loc_1625f));	// 11133 jnz     short loc_1625F ;~ 0613:1B2B
cs=0x613;eip=0x001b2d; 	T(CMP(*(raddr(ss,bp+arg_8)), 0));	// 11134 cmp     [bp+arg_8], 0 ;~ 0613:1B2D
cs=0x613;eip=0x001b31; 	R(JZ(loc_1624a));	// 11135 jz      short loc_1624A ;~ 0613:1B31
cs=0x613;eip=0x001b33; 	X(PUSH(word_4408c));	// 11136 push    word_4408C ;~ 0613:1B33
cs=0x613;eip=0x001b37; 	R(JMP(loc_1624e));	// 11137 jmp     short loc_1624E ;~ 0613:1B37
loc_1624a:
	// 4993 
cs=0x613;eip=0x001b3a; 	X(PUSH(word_43964));	// 11142 push    word_43964 ;~ 0613:1B3A
loc_1624e:
	// 4994 
cs=0x613;eip=0x001b3e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11145 mov     bx, [bp+arg_0] ;~ 0613:1B3E
cs=0x613;eip=0x001b41; 	T(MOV(al, *(raddr(ds,bx+0x0CF))));	// 11146 mov     al, [bx+0CFh] ;~ 0613:1B41
cs=0x613;eip=0x001b45; 	T(SUB(ah, ah));	// 11147 sub     ah, ah ;~ 0613:1B45
cs=0x613;eip=0x001b47; 	X(PUSH(ax));	// 11148 push    ax ;~ 0613:1B47
cs=0x613;eip=0x001b48; 	X(PUSH(cs));	// 11149 push    cs ;~ 0613:1B48
cs=0x613;eip=0x001b49; 	R(CALL(audio_unk3,0));	// 11150 call    near ptr audio_unk3 ;~ 0613:1B49
cs=0x613;eip=0x001b4c; 	T(ADD(sp, 4));	// 11151 add     sp, 4 ;~ 0613:1B4C
loc_1625f:
	// 4995 
cs=0x613;eip=0x001b4f; 	T(SUB(ax, ax));	// 11154 sub     ax, ax ;~ 0613:1B4F
cs=0x613;eip=0x001b51; 	X(PUSH(ax));	// 11155 push    ax ;~ 0613:1B51
cs=0x613;eip=0x001b52; 	T(MOV(ax, pstate_minusrotate_y_1));	// 11156 mov     ax, pState_minusRotate_y_1 ;~ 0613:1B52
cs=0x613;eip=0x001b55; 	T(NEG(ax));	// 11157 neg     ax ;~ 0613:1B55
cs=0x613;eip=0x001b57; 	X(PUSH(ax));	// 11158 push    ax ;~ 0613:1B57
cs=0x613;eip=0x001b58; 	T(MOV(ax, pstate_minusrotate_x_1));	// 11159 mov     ax, pState_minusRotate_x_1 ;~ 0613:1B58
cs=0x613;eip=0x001b5b; 	T(NEG(ax));	// 11160 neg     ax ;~ 0613:1B5B
cs=0x613;eip=0x001b5d; 	X(PUSH(ax));	// 11161 push    ax ;~ 0613:1B5D
cs=0x613;eip=0x001b5e; 	T(MOV(ax, pstate_minusrotate_z_1));	// 11162 mov     ax, pState_minusRotate_z_1 ;~ 0613:1B5E
cs=0x613;eip=0x001b61; 	T(NEG(ax));	// 11163 neg     ax ;~ 0613:1B61
cs=0x613;eip=0x001b63; 	X(PUSH(ax));	// 11164 push    ax ;~ 0613:1B63
cs=0x613;eip=0x001b64; 	R(CALLF(mat_rot_zxy,0));	// 11165 call    mat_rot_zxy ;~ 0613:1B64
cs=0x613;eip=0x001b69; 	T(ADD(sp, 8));	// 11166 add     sp, 8 ;~ 0613:1B69
cs=0x613;eip=0x001b6c; 	X(MOV(*(dw*)(raddr(ss,bp+var_ea)), ax));	// 11167 mov     [bp+var_EA], ax ;~ 0613:1B6C
cs=0x613;eip=0x001b70; 	X(MOV(*(raddr(ss,bp+var_e8)), 0));	// 11168 mov     [bp+var_E8], 0 ;~ 0613:1B70
cs=0x613;eip=0x001b75; 	R(JMP(loc_1632c));	// 11169 jmp     loc_1632C ;~ 0613:1B75
loc_16288:
	// 4996 
cs=0x613;eip=0x001b78; 	T(MOV(ax, planindex));	// 11173 mov     ax, planindex ;~ 0613:1B78
cs=0x613;eip=0x001b7b; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 11174 mov     [bp+var_E], ax ;~ 0613:1B7B
cs=0x613;eip=0x001b7e; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 11175 mov     al, [bp+var_E8] ;~ 0613:1B7E
cs=0x613;eip=0x001b82; 	T(CBW);	// 11176 cbw ;~ 0613:1B82
cs=0x613;eip=0x001b83; 	T(MOV(di, ax));	// 11177 mov     di, ax ;~ 0613:1B83
cs=0x613;eip=0x001b85; 	T(SHL(di, 1));	// 11178 shl     di, 1 ;~ 0613:1B85
cs=0x613;eip=0x001b87; 	T(ADD(di, ax));	// 11179 add     di, ax ;~ 0613:1B87
cs=0x613;eip=0x001b89; 	T(SHL(di, 1));	// 11180 shl     di, 1 ;~ 0613:1B89
cs=0x613;eip=0x001b8b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11181 mov     bx, [bp+arg_0] ;~ 0613:1B8B
cs=0x613;eip=0x001b8e; 	X(PUSH(si));	// 11182 push    si ;~ 0613:1B8E
cs=0x613;eip=0x001b8f; 	T(si = bx+di+0x8C);	// 11183 lea     si, [bx+di+8Ch] ;~ 0613:1B8F
cs=0x613;eip=0x001b93; 	T(di = bp+vec_1c6);	// 11184 lea     di, [bp+vec_1C6] ;~ 0613:1B93
cs=0x613;eip=0x001b97; 	X(PUSH(ss));	// 11185 push    ss ;~ 0613:1B97
cs=0x613;eip=0x001b98; 	X(POP(es));	// 11186 pop     es ;~ 0613:1B98
cs=0x613;eip=0x001b99; 	X(MOVSW);	// 11187 movsw ;~ 0613:1B99
cs=0x613;eip=0x001b9a; 	X(MOVSW);	// 11188 movsw ;~ 0613:1B9A
cs=0x613;eip=0x001b9b; 	X(MOVSW);	// 11189 movsw ;~ 0613:1B9B
cs=0x613;eip=0x001b9c; 	X(POP(si));	// 11190 pop     si ;~ 0613:1B9C
cs=0x613;eip=0x001b9d; 	T(ax = bp+vec_17c);	// 11191 lea     ax, [bp+vec_17C] ;~ 0613:1B9D
cs=0x613;eip=0x001ba1; 	X(PUSH(ax));	// 11192 push    ax ;~ 0613:1BA1
cs=0x613;eip=0x001ba2; 	T(ax = bp+vec_1c6);	// 11193 lea     ax, [bp+vec_1C6] ;~ 0613:1BA2
cs=0x613;eip=0x001ba6; 	X(PUSH(ax));	// 11194 push    ax ;~ 0613:1BA6
cs=0x613;eip=0x001ba7; 	R(CALLF(build_track_object,0));	// 11195 call    build_track_object ;~ 0613:1BA7
cs=0x613;eip=0x001bac; 	T(ADD(sp, 4));	// 11196 add     sp, 4 ;~ 0613:1BAC
cs=0x613;eip=0x001baf; 	T(MOV(ax, planindex));	// 11197 mov     ax, planindex ;~ 0613:1BAF
cs=0x613;eip=0x001bb2; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), ax));	// 11198 cmp     [bp+var_E], ax ;~ 0613:1BB2
cs=0x613;eip=0x001bb5; 	R(JNZ(loc_16309));	// 11199 jnz     short loc_16309 ;~ 0613:1BB5
cs=0x613;eip=0x001bb7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c2))));	// 11200 push    [bp+var_1C2] ;~ 0613:1BB7
cs=0x613;eip=0x001bbb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c4))));	// 11201 push    [bp+var_1C4] ;~ 0613:1BBB
cs=0x613;eip=0x001bbf; 	X(PUSH(*(dw*)(raddr(ss,bp+vec_1c6))));	// 11202 push    [bp+vec_1C6] ;~ 0613:1BBF
cs=0x613;eip=0x001bc3; 	X(PUSH(ax));	// 11203 push    ax ;~ 0613:1BC3
cs=0x613;eip=0x001bc4; 	X(PUSH(cs));	// 11204 push    cs ;~ 0613:1BC4
cs=0x613;eip=0x001bc5; 	R(CALL(plane_origin_op,0));	// 11205 call    near ptr plane_origin_op ;~ 0613:1BC5
cs=0x613;eip=0x001bc8; 	T(ADD(sp, 8));	// 11206 add     sp, 8 ;~ 0613:1BC8
cs=0x613;eip=0x001bcb; 	X(MOV(*(dw*)(raddr(ss,bp+var_138)), ax));	// 11207 mov     [bp+var_138], ax ;~ 0613:1BCB
cs=0x613;eip=0x001bcf; 	T(CMP(game_replay_mode, 1));	// 11208 cmp     game_replay_mode, 1 ;~ 0613:1BCF
cs=0x613;eip=0x001bd4; 	R(JZ(loc_16309));	// 11209 jz      short loc_16309 ;~ 0613:1BD4
cs=0x613;eip=0x001bd6; 	T(OR(si, si));	// 11210 or      si, si ;~ 0613:1BD6
cs=0x613;eip=0x001bd8; 	R(JGE(loc_162ee));	// 11211 jge     short loc_162EE ;~ 0613:1BD8
cs=0x613;eip=0x001bda; 	T(OR(ax, ax));	// 11212 or      ax, ax ;~ 0613:1BDA
cs=0x613;eip=0x001bdc; 	R(JG(loc_162f9));	// 11213 jg      short loc_162F9 ;~ 0613:1BDC
loc_162ee:
	// 4997 
cs=0x613;eip=0x001bde; 	T(OR(si, si));	// 11216 or      si, si ;~ 0613:1BDE
cs=0x613;eip=0x001be0; 	R(JLE(loc_16309));	// 11217 jle     short loc_16309 ;~ 0613:1BE0
cs=0x613;eip=0x001be2; 	T(CMP(*(dw*)(raddr(ss,bp+var_138)), 0));	// 11218 cmp     [bp+var_138], 0 ;~ 0613:1BE2
cs=0x613;eip=0x001be7; 	R(JGE(loc_16309));	// 11219 jge     short loc_16309 ;~ 0613:1BE7
loc_162f9:
	// 4998 
cs=0x613;eip=0x001be9; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 11223 mov     al, [bp+arg_8] ;~ 0613:1BE9
cs=0x613;eip=0x001bec; 	T(CBW);	// 11224 cbw ;~ 0613:1BEC
cs=0x613;eip=0x001bed; 	X(PUSH(ax));	// 11225 push    ax ;~ 0613:1BED
cs=0x613;eip=0x001bee; 	T(MOV(ax, 5));	// 11226 mov     ax, 5 ;~ 0613:1BEE
cs=0x613;eip=0x001bf1; 	X(PUSH(ax));	// 11227 push    ax ;~ 0613:1BF1
cs=0x613;eip=0x001bf2; 	X(PUSH(cs));	// 11228 push    cs ;~ 0613:1BF2
cs=0x613;eip=0x001bf3; 	R(CALL(update_crash_state,0));	// 11229 call    near ptr update_crash_state ;~ 0613:1BF3
cs=0x613;eip=0x001bf6; 	T(ADD(sp, 4));	// 11230 add     sp, 4 ;~ 0613:1BF6
loc_16309:
	// 4999 
cs=0x613;eip=0x001bf9; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 11234 mov     al, [bp+var_E8] ;~ 0613:1BF9
cs=0x613;eip=0x001bfd; 	T(CBW);	// 11235 cbw ;~ 0613:1BFD
cs=0x613;eip=0x001bfe; 	T(MOV(di, ax));	// 11236 mov     di, ax ;~ 0613:1BFE
cs=0x613;eip=0x001c00; 	T(SHL(di, 1));	// 11237 shl     di, 1 ;~ 0613:1C00
cs=0x613;eip=0x001c02; 	T(ADD(di, ax));	// 11238 add     di, ax ;~ 0613:1C02
cs=0x613;eip=0x001c04; 	T(SHL(di, 1));	// 11239 shl     di, 1 ;~ 0613:1C04
cs=0x613;eip=0x001c06; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11240 mov     bx, [bp+arg_0] ;~ 0613:1C06
cs=0x613;eip=0x001c09; 	X(PUSH(si));	// 11241 push    si ;~ 0613:1C09
cs=0x613;eip=0x001c0a; 	T(di = bx+di+0x8C);	// 11242 lea     di, [bx+di+8Ch] ;~ 0613:1C0A
cs=0x613;eip=0x001c0e; 	T(si = bp+vec_17c);	// 11243 lea     si, [bp+vec_17C] ;~ 0613:1C0E
cs=0x613;eip=0x001c12; 	X(PUSH(ds));	// 11244 push    ds ;~ 0613:1C12
cs=0x613;eip=0x001c13; 	X(POP(es));	// 11245 pop     es ;~ 0613:1C13
cs=0x613;eip=0x001c14; 	X(MOVSW);	// 11247 movsw ;~ 0613:1C14
cs=0x613;eip=0x001c15; 	X(MOVSW);	// 11248 movsw ;~ 0613:1C15
cs=0x613;eip=0x001c16; 	X(MOVSW);	// 11249 movsw ;~ 0613:1C16
cs=0x613;eip=0x001c17; 	X(POP(si));	// 11250 pop     si ;~ 0613:1C17
cs=0x613;eip=0x001c18; 	X(INC(*(raddr(ss,bp+var_e8))));	// 11251 inc     [bp+var_E8] ;~ 0613:1C18
loc_1632c:
	// 5000 
cs=0x613;eip=0x001c1c; 	T(CMP(*(raddr(ss,bp+var_e8)), 4));	// 11254 cmp     [bp+var_E8], 4 ;~ 0613:1C1C
cs=0x613;eip=0x001c21; 	R(JL(loc_16336));	// 11255 jl      short loc_16336 ;~ 0613:1C21
cs=0x613;eip=0x001c23; 	R(JMP(loc_16428));	// 11256 jmp     loc_16428 ;~ 0613:1C23
loc_16336:
	// 5001 
cs=0x613;eip=0x001c26; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 11260 mov     al, [bp+var_E8] ;~ 0613:1C26
cs=0x613;eip=0x001c2a; 	T(CBW);	// 11261 cbw ;~ 0613:1C2A
cs=0x613;eip=0x001c2b; 	T(MOV(di, ax));	// 11262 mov     di, ax ;~ 0613:1C2B
cs=0x613;eip=0x001c2d; 	T(SHL(di, 1));	// 11263 shl     di, 1 ;~ 0613:1C2D
cs=0x613;eip=0x001c2f; 	T(ADD(di, ax));	// 11264 add     di, ax ;~ 0613:1C2F
cs=0x613;eip=0x001c31; 	T(SHL(di, 1));	// 11265 shl     di, 1 ;~ 0613:1C31
cs=0x613;eip=0x001c33; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 11266 mov     bx, [bp+arg_2] ;~ 0613:1C33
cs=0x613;eip=0x001c36; 	X(PUSH(si));	// 11267 push    si ;~ 0613:1C36
cs=0x613;eip=0x001c37; 	T(si = bx+di+0x0D2);	// 11268 lea     si, [bx+di+0D2h] ;~ 0613:1C37
cs=0x613;eip=0x001c3b; 	T(di = bp+vec_1c6);	// 11269 lea     di, [bp+vec_1C6] ;~ 0613:1C3B
cs=0x613;eip=0x001c3f; 	X(PUSH(ss));	// 11270 push    ss ;~ 0613:1C3F
cs=0x613;eip=0x001c40; 	X(POP(es));	// 11271 pop     es ;~ 0613:1C40
cs=0x613;eip=0x001c41; 	X(MOVSW);	// 11273 movsw ;~ 0613:1C41
cs=0x613;eip=0x001c42; 	X(MOVSW);	// 11274 movsw ;~ 0613:1C42
cs=0x613;eip=0x001c43; 	X(MOVSW);	// 11275 movsw ;~ 0613:1C43
cs=0x613;eip=0x001c44; 	X(POP(si));	// 11276 pop     si ;~ 0613:1C44
cs=0x613;eip=0x001c45; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 11277 mov     bx, [bp+arg_2] ;~ 0613:1C45
cs=0x613;eip=0x001c48; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0CA))));	// 11278 mov     ax, [bx+0CAh] ;~ 0613:1C48
cs=0x613;eip=0x001c4c; 	T(MOV(cl, 6));	// 11279 mov     cl, 6 ;~ 0613:1C4C
cs=0x613;eip=0x001c4e; 	T(SHL(ax, cl));	// 11280 shl     ax, cl ;~ 0613:1C4E
cs=0x613;eip=0x001c50; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 11281 mov     [bp+var_1C4], ax ;~ 0613:1C50
cs=0x613;eip=0x001c54; 	T(ax = bp+vec_fc);	// 11282 lea     ax, [bp+vec_FC] ;~ 0613:1C54
cs=0x613;eip=0x001c58; 	X(PUSH(ax));	// 11283 push    ax ;~ 0613:1C58
cs=0x613;eip=0x001c59; 	X(PUSH(*(dw*)(raddr(ss,bp+var_ea))));	// 11284 push    [bp+var_EA] ;~ 0613:1C59
cs=0x613;eip=0x001c5d; 	T(ax = bp+vec_1c6);	// 11285 lea     ax, [bp+vec_1C6] ;~ 0613:1C5D
cs=0x613;eip=0x001c61; 	X(PUSH(ax));	// 11286 push    ax ;~ 0613:1C61
cs=0x613;eip=0x001c62; 	R(CALLF(mat_mul_vector,0));	// 11287 call    mat_mul_vector ;~ 0613:1C62
cs=0x613;eip=0x001c67; 	T(ADD(sp, 6));	// 11288 add     sp, 6 ;~ 0613:1C67
cs=0x613;eip=0x001c6a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+vec_fc))));	// 11289 mov     ax, [bp+vec_FC] ;~ 0613:1C6A
cs=0x613;eip=0x001c6e; 	T(CWD);	// 11290 cwd ;~ 0613:1C6E
cs=0x613;eip=0x001c6f; 	T(ADD(ax, pstate_lvec1_x));	// 11291 add     ax, pState_lvec1_x ;~ 0613:1C6F
cs=0x613;eip=0x001c73; 	T(ADC(dx, word_449c0));	// 11292 adc     dx, word_449C0 ;~ 0613:1C73
cs=0x613;eip=0x001c77; 	T(MOV(cl, 6));	// 11293 mov     cl, 6 ;~ 0613:1C77
loc_16389:
	// 5002 
cs=0x613;eip=0x001c79; 	T(SAR(dx, 1));	// 11296 sar     dx, 1 ;~ 0613:1C79
cs=0x613;eip=0x001c7b; 	T(RCR(ax, 1));	// 11297 rcr     ax, 1 ;~ 0613:1C7B
cs=0x613;eip=0x001c7d; 	T(DEC(cl));	// 11298 dec     cl ;~ 0613:1C7D
cs=0x613;eip=0x001c7f; 	R(JNZ(loc_16389));	// 11299 jnz     short loc_16389 ;~ 0613:1C7F
cs=0x613;eip=0x001c81; 	X(MOV(*(dw*)(raddr(ss,bp+vec_1c6)), ax));	// 11300 mov     [bp+vec_1C6], ax ;~ 0613:1C81
cs=0x613;eip=0x001c85; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_fa))));	// 11301 mov     ax, [bp+var_FA] ;~ 0613:1C85
cs=0x613;eip=0x001c89; 	T(CWD);	// 11302 cwd ;~ 0613:1C89
cs=0x613;eip=0x001c8a; 	T(ADD(ax, pstate_lvec1_y));	// 11303 add     ax, pState_lvec1_y ;~ 0613:1C8A
cs=0x613;eip=0x001c8e; 	T(ADC(dx, word_449c8));	// 11304 adc     dx, word_449C8 ;~ 0613:1C8E
cs=0x613;eip=0x001c92; 	T(MOV(cl, 6));	// 11305 mov     cl, 6 ;~ 0613:1C92
loc_163a4:
	// 5003 
cs=0x613;eip=0x001c94; 	T(SAR(dx, 1));	// 11308 sar     dx, 1 ;~ 0613:1C94
cs=0x613;eip=0x001c96; 	T(RCR(ax, 1));	// 11309 rcr     ax, 1 ;~ 0613:1C96
cs=0x613;eip=0x001c98; 	T(DEC(cl));	// 11310 dec     cl ;~ 0613:1C98
cs=0x613;eip=0x001c9a; 	R(JNZ(loc_163a4));	// 11311 jnz     short loc_163A4 ;~ 0613:1C9A
cs=0x613;eip=0x001c9c; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c4)), ax));	// 11312 mov     [bp+var_1C4], ax ;~ 0613:1C9C
cs=0x613;eip=0x001ca0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f8))));	// 11313 mov     ax, [bp+var_F8] ;~ 0613:1CA0
cs=0x613;eip=0x001ca4; 	T(CWD);	// 11314 cwd ;~ 0613:1CA4
cs=0x613;eip=0x001ca5; 	T(ADD(ax, pstate_lvec1_z));	// 11315 add     ax, pState_lvec1_z ;~ 0613:1CA5
cs=0x613;eip=0x001ca9; 	T(ADC(dx, word_449cc));	// 11316 adc     dx, word_449CC ;~ 0613:1CA9
cs=0x613;eip=0x001cad; 	T(MOV(cl, 6));	// 11317 mov     cl, 6 ;~ 0613:1CAD
loc_163bf:
	// 5004 
cs=0x613;eip=0x001caf; 	T(SAR(dx, 1));	// 11320 sar     dx, 1 ;~ 0613:1CAF
cs=0x613;eip=0x001cb1; 	T(RCR(ax, 1));	// 11321 rcr     ax, 1 ;~ 0613:1CB1
cs=0x613;eip=0x001cb3; 	T(DEC(cl));	// 11322 dec     cl ;~ 0613:1CB3
cs=0x613;eip=0x001cb5; 	R(JNZ(loc_163bf));	// 11323 jnz     short loc_163BF ;~ 0613:1CB5
cs=0x613;eip=0x001cb7; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 11324 mov     [bp+var_1C2], ax ;~ 0613:1CB7
cs=0x613;eip=0x001cbb; 	X(PUSH(si));	// 11325 push    si ;~ 0613:1CBB
cs=0x613;eip=0x001cbc; 	T(di = bp+vec_17c);	// 11326 lea     di, [bp+vec_17C] ;~ 0613:1CBC
cs=0x613;eip=0x001cc0; 	T(si = bp+vec_1c6);	// 11327 lea     si, [bp+vec_1C6] ;~ 0613:1CC0
cs=0x613;eip=0x001cc4; 	X(PUSH(ss));	// 11328 push    ss ;~ 0613:1CC4
cs=0x613;eip=0x001cc5; 	X(POP(es));	// 11329 pop     es ;~ 0613:1CC5
cs=0x613;eip=0x001cc6; 	X(MOVSW);	// 11330 movsw ;~ 0613:1CC6
cs=0x613;eip=0x001cc7; 	X(MOVSW);	// 11331 movsw ;~ 0613:1CC7
cs=0x613;eip=0x001cc8; 	X(MOVSW);	// 11332 movsw ;~ 0613:1CC8
cs=0x613;eip=0x001cc9; 	X(POP(si));	// 11333 pop     si ;~ 0613:1CC9
cs=0x613;eip=0x001cca; 	T(MOV(al, *(raddr(ss,bp+var_e8))));	// 11334 mov     al, [bp+var_E8] ;~ 0613:1CCA
cs=0x613;eip=0x001cce; 	T(CBW);	// 11335 cbw ;~ 0613:1CCE
cs=0x613;eip=0x001ccf; 	T(MOV(cx, ax));	// 11336 mov     cx, ax ;~ 0613:1CCF
cs=0x613;eip=0x001cd1; 	T(SHL(ax, 1));	// 11337 shl     ax, 1 ;~ 0613:1CD1
cs=0x613;eip=0x001cd3; 	T(ADD(ax, cx));	// 11338 add     ax, cx ;~ 0613:1CD3
cs=0x613;eip=0x001cd5; 	T(SHL(ax, 1));	// 11339 shl     ax, 1 ;~ 0613:1CD5
cs=0x613;eip=0x001cd7; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 11340 add     ax, [bp+arg_0] ;~ 0613:1CD7
cs=0x613;eip=0x001cda; 	T(ADD(ax, 0x8C));	// 11341 add     ax, 8Ch ;~ 0613:1CDA
cs=0x613;eip=0x001cdd; 	X(PUSH(ax));	// 11342 push    ax ;~ 0613:1CDD
cs=0x613;eip=0x001cde; 	T(ax = bp+vec_1c6);	// 11343 lea     ax, [bp+vec_1C6] ;~ 0613:1CDE
cs=0x613;eip=0x001ce2; 	X(PUSH(ax));	// 11344 push    ax ;~ 0613:1CE2
cs=0x613;eip=0x001ce3; 	R(CALLF(build_track_object,0));	// 11345 call    build_track_object ;~ 0613:1CE3
cs=0x613;eip=0x001ce8; 	T(ADD(sp, 4));	// 11346 add     sp, 4 ;~ 0613:1CE8
cs=0x613;eip=0x001ceb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c2))));	// 11347 push    [bp+var_1C2] ;~ 0613:1CEB
cs=0x613;eip=0x001cef; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c4))));	// 11348 push    [bp+var_1C4] ;~ 0613:1CEF
cs=0x613;eip=0x001cf3; 	X(PUSH(*(dw*)(raddr(ss,bp+vec_1c6))));	// 11349 push    [bp+vec_1C6] ;~ 0613:1CF3
cs=0x613;eip=0x001cf7; 	X(PUSH(planindex));	// 11350 push    planindex ;~ 0613:1CF7
cs=0x613;eip=0x001cfb; 	X(PUSH(cs));	// 11351 push    cs ;~ 0613:1CFB
cs=0x613;eip=0x001cfc; 	R(CALL(plane_origin_op,0));	// 11352 call    near ptr plane_origin_op ;~ 0613:1CFC
cs=0x613;eip=0x001cff; 	T(ADD(sp, 8));	// 11353 add     sp, 8 ;~ 0613:1CFF
cs=0x613;eip=0x001d02; 	T(MOV(si, ax));	// 11354 mov     si, ax ;~ 0613:1D02
cs=0x613;eip=0x001d04; 	T(CMP(planindex, 4));	// 11355 cmp     planindex, 4 ;~ 0613:1D04
cs=0x613;eip=0x001d09; 	R(JL(loc_1641e));	// 11356 jl      short loc_1641E ;~ 0613:1D09
cs=0x613;eip=0x001d0b; 	R(JMP(loc_16288));	// 11357 jmp     loc_16288 ;~ 0613:1D0B
loc_1641e:
	// 5005 
cs=0x613;eip=0x001d0e; 	T(OR(si, si));	// 11361 or      si, si ;~ 0613:1D0E
cs=0x613;eip=0x001d10; 	R(JLE(loc_16425));	// 11362 jle     short loc_16425 ;~ 0613:1D10
cs=0x613;eip=0x001d12; 	R(JMP(loc_16309));	// 11363 jmp     loc_16309 ;~ 0613:1D12
loc_16425:
	// 5006 
cs=0x613;eip=0x001d15; 	R(JMP(loc_162f9));	// 11367 jmp     loc_162F9 ;~ 0613:1D15
loc_16428:
	// 5007 
cs=0x613;eip=0x001d18; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11371 mov     bx, [bp+arg_0] ;~ 0613:1D18
cs=0x613;eip=0x001d1b; 	T(MOV(al, *(raddr(ds,bx+0x0BF))));	// 11372 mov     al, [bx+0BFh] ;~ 0613:1D1B
cs=0x613;eip=0x001d1f; 	T(ADD(al, *(raddr(ds,bx+0x0C0))));	// 11373 add     al, [bx+0C0h] ;~ 0613:1D1F
cs=0x613;eip=0x001d23; 	X(MOV(*(raddr(ss,bp+var_11c)), al));	// 11374 mov     [bp+var_11C], al ;~ 0613:1D23
cs=0x613;eip=0x001d27; 	T(CMP(*(raddr(ss,bp+arg_8)), 0));	// 11375 cmp     [bp+arg_8], 0 ;~ 0613:1D27
cs=0x613;eip=0x001d2b; 	R(JNZ(loc_1644c));	// 11376 jnz     short loc_1644C ;~ 0613:1D2B
cs=0x613;eip=0x001d2d; 	T(OR(al, al));	// 11377 or      al, al ;~ 0613:1D2D
cs=0x613;eip=0x001d2f; 	R(JNZ(loc_1644c));	// 11378 jnz     short loc_1644C ;~ 0613:1D2F
cs=0x613;eip=0x001d31; 	T(CMP(*(raddr(ds,bx+0x0C1)), 0));	// 11379 cmp     byte ptr [bx+0C1h], 0 ;~ 0613:1D31
cs=0x613;eip=0x001d36; 	R(JZ(loc_1644c));	// 11380 jz      short loc_1644C ;~ 0613:1D36
cs=0x613;eip=0x001d38; 	X(INC(word_445e4));	// 11381 inc     word_445E4 ;~ 0613:1D38
loc_1644c:
	// 5008 
cs=0x613;eip=0x001d3c; 	T(MOV(al, *(raddr(ss,bp+var_11c))));	// 11385 mov     al, [bp+var_11C] ;~ 0613:1D3C
cs=0x613;eip=0x001d40; 	X(MOV(*(raddr(ds,bx+0x0C1)), al));	// 11386 mov     [bx+0C1h], al ;~ 0613:1D40
cs=0x613;eip=0x001d44; 	T(MOV(ax, pstate_lvec1_x));	// 11387 mov     ax, pState_lvec1_x ;~ 0613:1D44
cs=0x613;eip=0x001d47; 	T(MOV(dx, word_449c0));	// 11388 mov     dx, word_449C0 ;~ 0613:1D47
cs=0x613;eip=0x001d4b; 	T(MOV(cl, 6));	// 11389 mov     cl, 6 ;~ 0613:1D4B
loc_1645d:
	// 5009 
cs=0x613;eip=0x001d4d; 	T(SAR(dx, 1));	// 11392 sar     dx, 1 ;~ 0613:1D4D
cs=0x613;eip=0x001d4f; 	T(RCR(ax, 1));	// 11393 rcr     ax, 1 ;~ 0613:1D4F
cs=0x613;eip=0x001d51; 	T(DEC(cl));	// 11394 dec     cl ;~ 0613:1D51
cs=0x613;eip=0x001d53; 	R(JNZ(loc_1645d));	// 11395 jnz     short loc_1645D ;~ 0613:1D53
cs=0x613;eip=0x001d55; 	X(MOV(*(dw*)(raddr(ss,bp+var_11a)), ax));	// 11396 mov     [bp+var_11A], ax ;~ 0613:1D55
cs=0x613;eip=0x001d59; 	T(MOV(ax, pstate_lvec1_y));	// 11397 mov     ax, pState_lvec1_y ;~ 0613:1D59
cs=0x613;eip=0x001d5c; 	T(MOV(dx, word_449c8));	// 11398 mov     dx, word_449C8 ;~ 0613:1D5C
cs=0x613;eip=0x001d60; 	T(MOV(cl, 6));	// 11399 mov     cl, 6 ;~ 0613:1D60
loc_16472:
	// 5010 
cs=0x613;eip=0x001d62; 	T(SAR(dx, 1));	// 11402 sar     dx, 1 ;~ 0613:1D62
cs=0x613;eip=0x001d64; 	T(RCR(ax, 1));	// 11403 rcr     ax, 1 ;~ 0613:1D64
cs=0x613;eip=0x001d66; 	T(DEC(cl));	// 11404 dec     cl ;~ 0613:1D66
cs=0x613;eip=0x001d68; 	R(JNZ(loc_16472));	// 11405 jnz     short loc_16472 ;~ 0613:1D68
cs=0x613;eip=0x001d6a; 	X(MOV(*(dw*)(raddr(ss,bp+var_118)), ax));	// 11406 mov     [bp+var_118], ax ;~ 0613:1D6A
cs=0x613;eip=0x001d6e; 	T(MOV(ax, pstate_lvec1_z));	// 11407 mov     ax, pState_lvec1_z ;~ 0613:1D6E
cs=0x613;eip=0x001d71; 	T(MOV(dx, word_449cc));	// 11408 mov     dx, word_449CC ;~ 0613:1D71
cs=0x613;eip=0x001d75; 	T(MOV(cl, 6));	// 11409 mov     cl, 6 ;~ 0613:1D75
loc_16487:
	// 5011 
cs=0x613;eip=0x001d77; 	T(SAR(dx, 1));	// 11412 sar     dx, 1 ;~ 0613:1D77
cs=0x613;eip=0x001d79; 	T(RCR(ax, 1));	// 11413 rcr     ax, 1 ;~ 0613:1D79
cs=0x613;eip=0x001d7b; 	T(DEC(cl));	// 11414 dec     cl ;~ 0613:1D7B
cs=0x613;eip=0x001d7d; 	R(JNZ(loc_16487));	// 11415 jnz     short loc_16487 ;~ 0613:1D7D
cs=0x613;eip=0x001d7f; 	X(MOV(*(dw*)(raddr(ss,bp+var_116)), ax));	// 11416 mov     [bp+var_116], ax ;~ 0613:1D7F
cs=0x613;eip=0x001d83; 	T(MOV(ax, pstate_minusrotate_z_1));	// 11417 mov     ax, pState_minusRotate_z_1 ;~ 0613:1D83
cs=0x613;eip=0x001d86; 	X(MOV(*(dw*)(raddr(ss,bp+var_114)), ax));	// 11418 mov     [bp+var_114], ax ;~ 0613:1D86
cs=0x613;eip=0x001d8a; 	T(MOV(ax, pstate_minusrotate_x_1));	// 11419 mov     ax, pState_minusRotate_x_1 ;~ 0613:1D8A
cs=0x613;eip=0x001d8d; 	X(MOV(*(dw*)(raddr(ss,bp+var_112)), ax));	// 11420 mov     [bp+var_112], ax ;~ 0613:1D8D
cs=0x613;eip=0x001d91; 	T(MOV(ax, pstate_minusrotate_y_1));	// 11421 mov     ax, pState_minusRotate_y_1 ;~ 0613:1D91
cs=0x613;eip=0x001d94; 	X(MOV(*(dw*)(raddr(ss,bp+var_110)), ax));	// 11422 mov     [bp+var_110], ax ;~ 0613:1D94
cs=0x613;eip=0x001d98; 	T(CMP(byte_449aa, 0));	// 11423 cmp     byte_449AA, 0 ;~ 0613:1D98
cs=0x613;eip=0x001d9d; 	R(JNZ(loc_164b2));	// 11424 jnz     short loc_164B2 ;~ 0613:1D9D
cs=0x613;eip=0x001d9f; 	R(JMP(loc_16578));	// 11425 jmp     loc_16578 ;~ 0613:1D9F
loc_164b2:
	// 5012 
cs=0x613;eip=0x001da2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 11429 mov     bx, [bp+arg_4] ;~ 0613:1DA2
cs=0x613;eip=0x001da5; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 11430 mov     ax, [bx+0] ;~ 0613:1DA5
cs=0x613;eip=0x001da7; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 11431 mov     dx, [bx+2] ;~ 0613:1DA7
cs=0x613;eip=0x001daa; 	T(MOV(cl, 6));	// 11432 mov     cl, 6 ;~ 0613:1DAA
loc_164bc:
	// 5013 
cs=0x613;eip=0x001dac; 	T(SAR(dx, 1));	// 11435 sar     dx, 1 ;~ 0613:1DAC
cs=0x613;eip=0x001dae; 	T(RCR(ax, 1));	// 11436 rcr     ax, 1 ;~ 0613:1DAE
cs=0x613;eip=0x001db0; 	T(DEC(cl));	// 11437 dec     cl ;~ 0613:1DB0
cs=0x613;eip=0x001db2; 	R(JNZ(loc_164bc));	// 11438 jnz     short loc_164BC ;~ 0613:1DB2
cs=0x613;eip=0x001db4; 	X(MOV(*(dw*)(raddr(ss,bp+vec_18eostateworldcrds)), ax));	// 11439 mov     [bp+vec_18EoStateWorldCrds], ax ;~ 0613:1DB4
cs=0x613;eip=0x001db8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 11440 mov     bx, [bp+arg_4] ;~ 0613:1DB8
cs=0x613;eip=0x001dbb; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 11441 mov     ax, [bx+4] ;~ 0613:1DBB
cs=0x613;eip=0x001dbe; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 11442 mov     dx, [bx+6] ;~ 0613:1DBE
cs=0x613;eip=0x001dc1; 	T(MOV(cl, 6));	// 11443 mov     cl, 6 ;~ 0613:1DC1
loc_164d3:
	// 5014 
cs=0x613;eip=0x001dc3; 	T(SAR(dx, 1));	// 11446 sar     dx, 1 ;~ 0613:1DC3
cs=0x613;eip=0x001dc5; 	T(RCR(ax, 1));	// 11447 rcr     ax, 1 ;~ 0613:1DC5
cs=0x613;eip=0x001dc7; 	T(DEC(cl));	// 11448 dec     cl ;~ 0613:1DC7
cs=0x613;eip=0x001dc9; 	R(JNZ(loc_164d3));	// 11449 jnz     short loc_164D3 ;~ 0613:1DC9
cs=0x613;eip=0x001dcb; 	X(MOV(*(dw*)(raddr(ss,bp+var_18c)), ax));	// 11450 mov     [bp+var_18C], ax ;~ 0613:1DCB
cs=0x613;eip=0x001dcf; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 11451 mov     bx, [bp+arg_4] ;~ 0613:1DCF
cs=0x613;eip=0x001dd2; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 11452 mov     ax, [bx+8] ;~ 0613:1DD2
cs=0x613;eip=0x001dd5; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 11453 mov     dx, [bx+0Ah] ;~ 0613:1DD5
cs=0x613;eip=0x001dd8; 	T(MOV(cl, 6));	// 11454 mov     cl, 6 ;~ 0613:1DD8
loc_164ea:
	// 5015 
cs=0x613;eip=0x001dda; 	T(SAR(dx, 1));	// 11457 sar     dx, 1 ;~ 0613:1DDA
cs=0x613;eip=0x001ddc; 	T(RCR(ax, 1));	// 11458 rcr     ax, 1 ;~ 0613:1DDC
cs=0x613;eip=0x001dde; 	T(DEC(cl));	// 11459 dec     cl ;~ 0613:1DDE
cs=0x613;eip=0x001de0; 	R(JNZ(loc_164ea));	// 11460 jnz     short loc_164EA ;~ 0613:1DE0
cs=0x613;eip=0x001de2; 	X(MOV(*(dw*)(raddr(ss,bp+var_18a)), ax));	// 11461 mov     [bp+var_18A], ax ;~ 0613:1DE2
cs=0x613;eip=0x001de6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 11462 mov     bx, [bp+arg_4] ;~ 0613:1DE6
cs=0x613;eip=0x001de9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1C))));	// 11463 mov     ax, [bx+1Ch] ;~ 0613:1DE9
cs=0x613;eip=0x001dec; 	X(MOV(*(dw*)(raddr(ss,bp+var_188)), ax));	// 11464 mov     [bp+var_188], ax ;~ 0613:1DEC
cs=0x613;eip=0x001df0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1A))));	// 11465 mov     ax, [bx+1Ah] ;~ 0613:1DF0
cs=0x613;eip=0x001df3; 	X(MOV(*(dw*)(raddr(ss,bp+var_186)), ax));	// 11466 mov     [bp+var_186], ax ;~ 0613:1DF3
cs=0x613;eip=0x001df7; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x18))));	// 11467 mov     ax, [bx+18h] ;~ 0613:1DF7
cs=0x613;eip=0x001dfa; 	X(MOV(*(dw*)(raddr(ss,bp+var_184)), ax));	// 11468 mov     [bp+var_184], ax ;~ 0613:1DFA
cs=0x613;eip=0x001dfe; 	T(ax = bp+vec_18eostateworldcrds);	// 11469 lea     ax, [bp+vec_18EoStateWorldCrds] ;~ 0613:1DFE
cs=0x613;eip=0x001e02; 	X(PUSH(ax));	// 11470 push    ax ;~ 0613:1E02
cs=0x613;eip=0x001e03; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 11471 mov     ax, [bp+arg_6] ;~ 0613:1E03
cs=0x613;eip=0x001e06; 	T(ADD(ax, 0x0C8));	// 11472 add     ax, 0C8h ;~ 0613:1E06
cs=0x613;eip=0x001e09; 	X(PUSH(ax));	// 11473 push    ax ;~ 0613:1E09
cs=0x613;eip=0x001e0a; 	T(ax = bp+var_11a);	// 11474 lea     ax, [bp+var_11A] ;~ 0613:1E0A
cs=0x613;eip=0x001e0e; 	X(PUSH(ax));	// 11475 push    ax ;~ 0613:1E0E
cs=0x613;eip=0x001e0f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 11476 mov     ax, [bp+arg_2] ;~ 0613:1E0F
cs=0x613;eip=0x001e12; 	T(ADD(ax, 0x0C8));	// 11477 add     ax, 0C8h ;~ 0613:1E12
cs=0x613;eip=0x001e15; 	X(PUSH(ax));	// 11478 push    ax ;~ 0613:1E15
cs=0x613;eip=0x001e16; 	X(PUSH(cs));	// 11479 push    cs ;~ 0613:1E16
cs=0x613;eip=0x001e17; 	R(CALL(car_car_coll_detect_maybe,0));	// 11480 call    near ptr car_car_coll_detect_maybe ;~ 0613:1E17
cs=0x613;eip=0x001e1a; 	T(ADD(sp, 8));	// 11481 add     sp, 8 ;~ 0613:1E1A
cs=0x613;eip=0x001e1d; 	T(OR(al, al));	// 11482 or      al, al ;~ 0613:1E1D
cs=0x613;eip=0x001e1f; 	R(JZ(loc_16578));	// 11483 jz      short loc_16578 ;~ 0613:1E1F
cs=0x613;eip=0x001e21; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11484 mov     bx, [bp+arg_0] ;~ 0613:1E21
cs=0x613;eip=0x001e24; 	T(CMP(*(raddr(ds,bx+0x0C8)), 0));	// 11485 cmp     byte ptr [bx+0C8h], 0 ;~ 0613:1E24
cs=0x613;eip=0x001e29; 	R(JZ(loc_1653e));	// 11486 jz      short loc_1653E ;~ 0613:1E29
cs=0x613;eip=0x001e2b; 	R(JMP(loc_16892));	// 11487 jmp     loc_16892 ;~ 0613:1E2B
loc_1653e:
	// 5016 
cs=0x613;eip=0x001e2e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 11491 push    [bp+arg_4] ;~ 0613:1E2E
cs=0x613;eip=0x001e31; 	X(PUSH(bx));	// 11492 push    bx ;~ 0613:1E31
cs=0x613;eip=0x001e32; 	X(PUSH(cs));	// 11493 push    cs ;~ 0613:1E32
cs=0x613;eip=0x001e33; 	R(CALL(car_car_speed_adjust_maybe,0));	// 11494 call    near ptr car_car_speed_adjust_maybe ;~ 0613:1E33
cs=0x613;eip=0x001e36; 	T(ADD(sp, 4));	// 11495 add     sp, 4 ;~ 0613:1E36
cs=0x613;eip=0x001e39; 	T(OR(al, al));	// 11496 or      al, al ;~ 0613:1E39
cs=0x613;eip=0x001e3b; 	R(JNZ(loc_16550));	// 11497 jnz     short loc_16550 ;~ 0613:1E3B
cs=0x613;eip=0x001e3d; 	R(JMP(loc_16892));	// 11498 jmp     loc_16892 ;~ 0613:1E3D
loc_16550:
	// 5017 
cs=0x613;eip=0x001e40; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 11502 mov     al, [bp+arg_8] ;~ 0613:1E40
cs=0x613;eip=0x001e43; 	T(CBW);	// 11503 cbw ;~ 0613:1E43
cs=0x613;eip=0x001e44; 	X(PUSH(ax));	// 11504 push    ax ;~ 0613:1E44
cs=0x613;eip=0x001e45; 	T(MOV(ax, 1));	// 11505 mov     ax, 1 ;~ 0613:1E45
cs=0x613;eip=0x001e48; 	X(PUSH(ax));	// 11506 push    ax ;~ 0613:1E48
cs=0x613;eip=0x001e49; 	X(PUSH(cs));	// 11507 push    cs ;~ 0613:1E49
cs=0x613;eip=0x001e4a; 	R(CALL(update_crash_state,0));	// 11508 call    near ptr update_crash_state ;~ 0613:1E4A
cs=0x613;eip=0x001e4d; 	T(ADD(sp, 4));	// 11509 add     sp, 4 ;~ 0613:1E4D
cs=0x613;eip=0x001e50; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 11510 mov     al, [bp+arg_8] ;~ 0613:1E50
cs=0x613;eip=0x001e53; 	T(CBW);	// 11511 cbw ;~ 0613:1E53
cs=0x613;eip=0x001e54; 	T(XOR(al, 1));	// 11512 xor     al, 1 ;~ 0613:1E54
loc_16566:
	// 5018 
cs=0x613;eip=0x001e56; 	X(PUSH(ax));	// 11515 push    ax ;~ 0613:1E56
cs=0x613;eip=0x001e57; 	T(MOV(ax, 1));	// 11516 mov     ax, 1 ;~ 0613:1E57
cs=0x613;eip=0x001e5a; 	X(PUSH(ax));	// 11517 push    ax ;~ 0613:1E5A
cs=0x613;eip=0x001e5b; 	X(PUSH(cs));	// 11518 push    cs ;~ 0613:1E5B
cs=0x613;eip=0x001e5c; 	R(CALL(update_crash_state,0));	// 11519 call    near ptr update_crash_state ;~ 0613:1E5C
cs=0x613;eip=0x001e5f; 	T(ADD(sp, 4));	// 11520 add     sp, 4 ;~ 0613:1E5F
cs=0x613;eip=0x001e62; 	X(POP(si));	// 11521 pop     si ;~ 0613:1E62
cs=0x613;eip=0x001e63; 	X(POP(di));	// 11522 pop     di ;~ 0613:1E63
cs=0x613;eip=0x001e64; 	T(MOV(sp, bp));	// 11523 mov     sp, bp ;~ 0613:1E64
cs=0x613;eip=0x001e66; 	X(POP(bp));	// 11524 pop     bp ;~ 0613:1E66
cs=0x613;eip=0x001e67; 	R(RETF(0));	// 11525 retf ;~ 0613:1E67
loc_16578:
	// 5019 
cs=0x613;eip=0x001e68; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_11a))));	// 11530 mov     ax, [bp+var_11A] ;~ 0613:1E68
cs=0x613;eip=0x001e6c; 	T(MOV(cl, 0x0A));	// 11531 mov     cl, 0Ah ;~ 0613:1E6C
cs=0x613;eip=0x001e6e; 	T(SAR(ax, cl));	// 11532 sar     ax, cl ;~ 0613:1E6E
cs=0x613;eip=0x001e70; 	X(MOV(*(dw*)(raddr(ss,bp+vec_fc)), ax));	// 11533 mov     [bp+vec_FC], ax ;~ 0613:1E70
cs=0x613;eip=0x001e74; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_116))));	// 11534 mov     ax, [bp+var_116] ;~ 0613:1E74
cs=0x613;eip=0x001e78; 	T(SAR(ax, cl));	// 11535 sar     ax, cl          ; /2^10 : scale to tile index. ;~ 0613:1E78
cs=0x613;eip=0x001e7a; 	T(SUB(ax, 0x1D));	// 11536 sub     ax, 1Dh ;~ 0613:1E7A
cs=0x613;eip=0x001e7d; 	T(NEG(ax));	// 11537 neg     ax ;~ 0613:1E7D
cs=0x613;eip=0x001e7f; 	X(MOV(*(dw*)(raddr(ss,bp+var_f8)), ax));	// 11538 mov     [bp+var_F8], ax ;~ 0613:1E7F
cs=0x613;eip=0x001e83; 	X(MOV(*(dw*)(raddr(ss,bp+var_188)), 0));	// 11539 mov     [bp+var_188], 0 ;~ 0613:1E83
cs=0x613;eip=0x001e89; 	X(MOV(*(dw*)(raddr(ss,bp+var_186)), 0));	// 11540 mov     [bp+var_186], 0 ;~ 0613:1E89
cs=0x613;eip=0x001e8f; 	X(MOV(*(dw*)(raddr(ss,bp+var_184)), 0));	// 11541 mov     [bp+var_184], 0 ;~ 0613:1E8F
cs=0x613;eip=0x001e95; 	T(CMP(*(dw*)(raddr(ss,bp+vec_fc)), 0));	// 11542 cmp     [bp+vec_FC], 0 ;~ 0613:1E95
cs=0x613;eip=0x001e9a; 	R(JGE(loc_165af));	// 11543 jge     short loc_165AF ;~ 0613:1E9A
cs=0x613;eip=0x001e9c; 	R(JMP(loc_16840));	// 11544 jmp     loc_16840 ;~ 0613:1E9C
loc_165af:
	// 5020 
cs=0x613;eip=0x001e9f; 	T(CMP(*(dw*)(raddr(ss,bp+vec_fc)), 0x1E));	// 11548 cmp     [bp+vec_FC], 1Eh ;~ 0613:1E9F
cs=0x613;eip=0x001ea4; 	R(JL(loc_165b9));	// 11549 jl      short loc_165B9 ;~ 0613:1EA4
cs=0x613;eip=0x001ea6; 	R(JMP(loc_16840));	// 11550 jmp     loc_16840 ;~ 0613:1EA6
loc_165b9:
	// 5021 
cs=0x613;eip=0x001ea9; 	T(OR(ax, ax));	// 11554 or      ax, ax ;~ 0613:1EA9
cs=0x613;eip=0x001eab; 	R(JGE(loc_165c0));	// 11555 jge     short loc_165C0 ;~ 0613:1EAB
cs=0x613;eip=0x001ead; 	R(JMP(loc_16840));	// 11556 jmp     loc_16840 ;~ 0613:1EAD
loc_165c0:
	// 5022 
cs=0x613;eip=0x001eb0; 	T(CMP(ax, 0x1E));	// 11560 cmp     ax, 1Eh ;~ 0613:1EB0
cs=0x613;eip=0x001eb3; 	R(JL(loc_165c8));	// 11561 jl      short loc_165C8 ;~ 0613:1EB3
cs=0x613;eip=0x001eb5; 	R(JMP(loc_16840));	// 11562 jmp     loc_16840 ;~ 0613:1EB5
loc_165c8:
	// 5023 
cs=0x613;eip=0x001eb8; 	T(ax = bp+var_dc);	// 11566 lea     ax, [bp+var_DC] ;~ 0613:1EB8
cs=0x613;eip=0x001ebc; 	X(PUSH(ax));	// 11567 push    ax ;~ 0613:1EBC
cs=0x613;eip=0x001ebd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_f8))));	// 11568 push    [bp+var_F8] ;~ 0613:1EBD
cs=0x613;eip=0x001ec1; 	X(PUSH(*(dw*)(raddr(ss,bp+vec_fc))));	// 11569 push    [bp+vec_FC] ;~ 0613:1EC1
cs=0x613;eip=0x001ec5; 	R(CALLF(bto_auxiliary1,0));	// 11570 call    bto_auxiliary1 ;~ 0613:1EC5
cs=0x613;eip=0x001eca; 	T(ADD(sp, 6));	// 11571 add     sp, 6 ;~ 0613:1ECA
cs=0x613;eip=0x001ecd; 	X(MOV(*(raddr(ss,bp+var_ec)), al));	// 11572 mov     [bp+var_EC], al ;~ 0613:1ECD
cs=0x613;eip=0x001ed1; 	T(OR(al, al));	// 11573 or      al, al ;~ 0613:1ED1
cs=0x613;eip=0x001ed3; 	R(JZ(loc_16650));	// 11574 jz      short loc_16650 ;~ 0613:1ED3
cs=0x613;eip=0x001ed5; 	T(SUB(si, si));	// 11575 sub     si, si ;~ 0613:1ED5
cs=0x613;eip=0x001ed7; 	R(JMP(loc_165f0));	// 11576 jmp     short loc_165F0 ;~ 0613:1ED7
loc_165ea:
	// 5024 
cs=0x613;eip=0x001eda; 	X(ADD(*(dw*)(raddr(ss,bp+var_144)), 6));	// 11581 add     [bp+var_144], 6 ;~ 0613:1EDA
cs=0x613;eip=0x001edf; 	T(INC(si));	// 11582 inc     si ;~ 0613:1EDF
loc_165f0:
	// 5025 
cs=0x613;eip=0x001ee0; 	T(MOV(al, *(raddr(ss,bp+var_ec))));	// 11585 mov     al, [bp+var_EC] ;~ 0613:1EE0
cs=0x613;eip=0x001ee4; 	T(SUB(ah, ah));	// 11586 sub     ah, ah ;~ 0613:1EE4
cs=0x613;eip=0x001ee6; 	T(CMP(ax, si));	// 11587 cmp     ax, si ;~ 0613:1EE6
cs=0x613;eip=0x001ee8; 	R(JBE(loc_16650));	// 11588 jbe     short loc_16650 ;~ 0613:1EE8
cs=0x613;eip=0x001eea; 	T(MOV(ax, si));	// 11589 mov     ax, si ;~ 0613:1EEA
cs=0x613;eip=0x001eec; 	T(MOV(cx, ax));	// 11590 mov     cx, ax ;~ 0613:1EEC
cs=0x613;eip=0x001eee; 	T(SHL(ax, 1));	// 11591 shl     ax, 1 ;~ 0613:1EEE
cs=0x613;eip=0x001ef0; 	T(ADD(ax, cx));	// 11592 add     ax, cx ;~ 0613:1EF0
cs=0x613;eip=0x001ef2; 	T(SHL(ax, 1));	// 11593 shl     ax, 1 ;~ 0613:1EF2
cs=0x613;eip=0x001ef4; 	T(MOV(di, ax));	// 11594 mov     di, ax ;~ 0613:1EF4
cs=0x613;eip=0x001ef6; 	T(ADD(di, bp));	// 11595 add     di, bp ;~ 0613:1EF6
cs=0x613;eip=0x001ef8; 	T(MOV(ax, *(dw*)(raddr(ds,di-0x0DC))));	// 11596 mov     ax, [di-0DCh] ;~ 0613:1EF8
cs=0x613;eip=0x001efc; 	X(MOV(*(dw*)(raddr(ss,bp+vec_18eostateworldcrds)), ax));	// 11597 mov     [bp+vec_18EoStateWorldCrds], ax ;~ 0613:1EFC
cs=0x613;eip=0x001f00; 	T(MOV(ax, *(dw*)(raddr(ds,di-0x0DA))));	// 11598 mov     ax, [di-0DAh] ;~ 0613:1F00
cs=0x613;eip=0x001f04; 	X(MOV(*(dw*)(raddr(ss,bp+var_18c)), ax));	// 11599 mov     [bp+var_18C], ax ;~ 0613:1F04
cs=0x613;eip=0x001f08; 	T(MOV(ax, *(dw*)(raddr(ds,di-0x0D8))));	// 11600 mov     ax, [di-0D8h] ;~ 0613:1F08
cs=0x613;eip=0x001f0c; 	X(MOV(*(dw*)(raddr(ss,bp+var_18a)), ax));	// 11601 mov     [bp+var_18A], ax ;~ 0613:1F0C
cs=0x613;eip=0x001f10; 	T(ax = bp+vec_18eostateworldcrds);	// 11602 lea     ax, [bp+vec_18EoStateWorldCrds] ;~ 0613:1F10
cs=0x613;eip=0x001f14; 	X(PUSH(ax));	// 11603 push    ax ;~ 0613:1F14
cs=0x613;eip=0x001f15; 	T(MOV(ax, offset(dseg,unk_3bd6a)));	// 11604 mov     ax, offset unk_3BD6A ;~ 0613:1F15
cs=0x613;eip=0x001f18; 	X(PUSH(ax));	// 11605 push    ax ;~ 0613:1F18
cs=0x613;eip=0x001f19; 	T(ax = bp+var_11a);	// 11606 lea     ax, [bp+var_11A] ;~ 0613:1F19
cs=0x613;eip=0x001f1d; 	X(PUSH(ax));	// 11607 push    ax ;~ 0613:1F1D
cs=0x613;eip=0x001f1e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 11608 mov     ax, [bp+arg_2] ;~ 0613:1F1E
cs=0x613;eip=0x001f21; 	T(ADD(ax, 0x0C8));	// 11609 add     ax, 0C8h ;~ 0613:1F21
cs=0x613;eip=0x001f24; 	X(PUSH(ax));	// 11610 push    ax ;~ 0613:1F24
cs=0x613;eip=0x001f25; 	X(PUSH(cs));	// 11611 push    cs ;~ 0613:1F25
cs=0x613;eip=0x001f26; 	R(CALL(car_car_coll_detect_maybe,0));	// 11612 call    near ptr car_car_coll_detect_maybe ;~ 0613:1F26
cs=0x613;eip=0x001f29; 	T(ADD(sp, 8));	// 11613 add     sp, 8 ;~ 0613:1F29
cs=0x613;eip=0x001f2c; 	T(OR(al, al));	// 11614 or      al, al ;~ 0613:1F2C
cs=0x613;eip=0x001f2e; 	R(JZ(loc_165ea));	// 11615 jz      short loc_165EA ;~ 0613:1F2E
cs=0x613;eip=0x001f30; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11616 mov     bx, [bp+arg_0] ;~ 0613:1F30
cs=0x613;eip=0x001f33; 	X(SUB(*(dw*)(raddr(ds,bx+0x36)), 0x200));	// 11617 sub     word ptr [bx+36h], 200h ;~ 0613:1F33
loc_16648:
	// 5026 
cs=0x613;eip=0x001f38; 	T(MOV(al, *(raddr(ss,bp+arg_8))));	// 11620 mov     al, [bp+arg_8] ;~ 0613:1F38
cs=0x613;eip=0x001f3b; 	T(CBW);	// 11621 cbw ;~ 0613:1F3B
cs=0x613;eip=0x001f3c; 	R(JMP(loc_16566));	// 11622 jmp     loc_16566 ;~ 0613:1F3C
loc_16650:
	// 5027 
cs=0x613;eip=0x001f40; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_f8))));	// 11628 mov     bx, [bp+var_F8] ;~ 0613:1F40
cs=0x613;eip=0x001f44; 	T(SHL(bx, 1));	// 11629 shl     bx, 1 ;~ 0613:1F44
cs=0x613;eip=0x001f46; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 11630 mov     bx, trackrows[bx] ;~ 0613:1F46
cs=0x613;eip=0x001f4a; 	T(ADD(bx, *(dw*)(raddr(ss,bp+vec_fc))));	// 11631 add     bx, [bp+vec_FC] ;~ 0613:1F4A
cs=0x613;eip=0x001f4e; 	T(LES(di, trackdata19));	// 11632 les     di, trackdata19 ;~ 0613:1F4E
cs=0x613;eip=0x001f52; 	T(MOV(al, *(raddr(es,bx+di))));	// 11633 mov     al, es:[bx+di] ;~ 0613:1F52
cs=0x613;eip=0x001f55; 	T(CBW);	// 11634 cbw ;~ 0613:1F55
cs=0x613;eip=0x001f56; 	T(MOV(si, ax));	// 11635 mov     si, ax ;~ 0613:1F56
cs=0x613;eip=0x001f58; 	T(CMP(si, 0x0FFFF));	// 11636 cmp     si, 0FFFFh ;~ 0613:1F58
cs=0x613;eip=0x001f5b; 	R(JNZ(loc_16670));	// 11637 jnz     short loc_16670 ;~ 0613:1F5B
cs=0x613;eip=0x001f5d; 	R(JMP(loc_16710));	// 11638 jmp     loc_16710 ;~ 0613:1F5D
loc_16670:
	// 5028 
cs=0x613;eip=0x001f60; 	T(CMP(*((&byte_4488e)+si), 0));	// 11642 cmp     byte_4488E[si], 0 ;~ 0613:1F60
cs=0x613;eip=0x001f65; 	R(JZ(loc_1667a));	// 11643 jz      short loc_1667A ;~ 0613:1F65
cs=0x613;eip=0x001f67; 	R(JMP(loc_16710));	// 11644 jmp     loc_16710 ;~ 0613:1F67
loc_1667a:
	// 5029 
cs=0x613;eip=0x001f6a; 	T(MOV(bx, si));	// 11648 mov     bx, si ;~ 0613:1F6A
cs=0x613;eip=0x001f6c; 	T(SHL(bx, 1));	// 11649 shl     bx, 1 ;~ 0613:1F6C
cs=0x613;eip=0x001f6e; 	T(ADD(bx, ax));	// 11650 add     bx, ax ;~ 0613:1F6E
cs=0x613;eip=0x001f70; 	T(SHL(bx, 1));	// 11651 shl     bx, 1 ;~ 0613:1F70
cs=0x613;eip=0x001f72; 	T(LES(di, td10_track_check_rel));	// 11652 les     di, td10_track_check_rel ;~ 0613:1F72
cs=0x613;eip=0x001f76; 	T(MOV(ax, *(dw*)(raddr(es,bx+di))));	// 11653 mov     ax, es:[bx+di] ;~ 0613:1F76
cs=0x613;eip=0x001f79; 	X(MOV(*(dw*)(raddr(ss,bp+vec_18eostateworldcrds)), ax));	// 11654 mov     [bp+vec_18EoStateWorldCrds], ax ;~ 0613:1F79
cs=0x613;eip=0x001f7d; 	T(MOV(di, si));	// 11655 mov     di, si ;~ 0613:1F7D
cs=0x613;eip=0x001f7f; 	T(MOV(ax, di));	// 11656 mov     ax, di ;~ 0613:1F7F
cs=0x613;eip=0x001f81; 	T(SHL(di, 1));	// 11657 shl     di, 1 ;~ 0613:1F81
cs=0x613;eip=0x001f83; 	T(ADD(di, ax));	// 11658 add     di, ax ;~ 0613:1F83
cs=0x613;eip=0x001f85; 	T(SHL(di, 1));	// 11659 shl     di, 1 ;~ 0613:1F85
cs=0x613;eip=0x001f87; 	T(MOV(bx, *(dw*)(((db*)&td10_track_check_rel))));	// 11660 mov     bx, word ptr td10_track_check_rel ;~ 0613:1F87
cs=0x613;eip=0x001f8b; 	T(MOV(ax, *(dw*)(raddr(es,bx+di+2))));	// 11661 mov     ax, es:[bx+di+2] ;~ 0613:1F8B
cs=0x613;eip=0x001f8f; 	X(MOV(*(dw*)(raddr(ss,bp+var_18c)), ax));	// 11662 mov     [bp+var_18C], ax ;~ 0613:1F8F
cs=0x613;eip=0x001f93; 	T(MOV(di, si));	// 11663 mov     di, si ;~ 0613:1F93
cs=0x613;eip=0x001f95; 	T(MOV(ax, di));	// 11664 mov     ax, di ;~ 0613:1F95
cs=0x613;eip=0x001f97; 	T(SHL(di, 1));	// 11665 shl     di, 1 ;~ 0613:1F97
cs=0x613;eip=0x001f99; 	T(ADD(di, ax));	// 11666 add     di, ax ;~ 0613:1F99
cs=0x613;eip=0x001f9b; 	T(SHL(di, 1));	// 11667 shl     di, 1 ;~ 0613:1F9B
cs=0x613;eip=0x001f9d; 	T(MOV(ax, *(dw*)(raddr(es,bx+di+4))));	// 11668 mov     ax, es:[bx+di+4] ;~ 0613:1F9D
cs=0x613;eip=0x001fa1; 	X(MOV(*(dw*)(raddr(ss,bp+var_18a)), ax));	// 11669 mov     [bp+var_18A], ax ;~ 0613:1FA1
cs=0x613;eip=0x001fa5; 	T(ax = bp+vec_18eostateworldcrds);	// 11670 lea     ax, [bp+vec_18EoStateWorldCrds] ;~ 0613:1FA5
cs=0x613;eip=0x001fa9; 	X(PUSH(ax));	// 11671 push    ax ;~ 0613:1FA9
cs=0x613;eip=0x001faa; 	T(MOV(ax, offset(dseg,unk_3bd5a)));	// 11672 mov     ax, offset unk_3BD5A ;~ 0613:1FAA
cs=0x613;eip=0x001fad; 	X(PUSH(ax));	// 11673 push    ax ;~ 0613:1FAD
cs=0x613;eip=0x001fae; 	T(ax = bp+var_11a);	// 11674 lea     ax, [bp+var_11A] ;~ 0613:1FAE
cs=0x613;eip=0x001fb2; 	X(PUSH(ax));	// 11675 push    ax ;~ 0613:1FB2
cs=0x613;eip=0x001fb3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 11676 mov     ax, [bp+arg_2] ;~ 0613:1FB3
cs=0x613;eip=0x001fb6; 	T(ADD(ax, 0x0C8));	// 11677 add     ax, 0C8h ;~ 0613:1FB6
cs=0x613;eip=0x001fb9; 	X(PUSH(ax));	// 11678 push    ax ;~ 0613:1FB9
cs=0x613;eip=0x001fba; 	X(PUSH(cs));	// 11679 push    cs ;~ 0613:1FBA
cs=0x613;eip=0x001fbb; 	R(CALL(car_car_coll_detect_maybe,0));	// 11680 call    near ptr car_car_coll_detect_maybe ;~ 0613:1FBB
cs=0x613;eip=0x001fbe; 	T(ADD(sp, 8));	// 11681 add     sp, 8 ;~ 0613:1FBE
cs=0x613;eip=0x001fc1; 	T(OR(al, al));	// 11682 or      al, al ;~ 0613:1FC1
cs=0x613;eip=0x001fc3; 	R(JZ(loc_16710));	// 11683 jz      short loc_16710 ;~ 0613:1FC3
cs=0x613;eip=0x001fc5; 	X(MOV(*((&byte_4488e)+si), 1));	// 11684 mov     byte_4488E[si], 1 ;~ 0613:1FC5
cs=0x613;eip=0x001fca; 	T(MOV(ax, 0x3C00));	// 11685 mov     ax, 3C00h       ; 15360 = track grid length / 2 ;~ 0613:1FCA
cs=0x613;eip=0x001fcd; 	T(CWD);	// 11686 cwd ;~ 0613:1FCD
cs=0x613;eip=0x001fce; 	X(PUSH(dx));	// 11687 push    dx ;~ 0613:1FCE
cs=0x613;eip=0x001fcf; 	X(PUSH(ax));	// 11688 push    ax ;~ 0613:1FCF
cs=0x613;eip=0x001fd0; 	T(MOV(ax, 0x580));	// 11689 mov     ax, 580h        ; 1408 ;~ 0613:1FD0
cs=0x613;eip=0x001fd3; 	T(CWD);	// 11690 cwd ;~ 0613:1FD3
cs=0x613;eip=0x001fd4; 	X(PUSH(dx));	// 11691 push    dx ;~ 0613:1FD4
cs=0x613;eip=0x001fd5; 	X(PUSH(ax));	// 11692 push    ax ;~ 0613:1FD5
cs=0x613;eip=0x001fd6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11693 mov     bx, [bp+arg_0] ;~ 0613:1FD6
cs=0x613;eip=0x001fd9; 	T(SUB(ax, ax));	// 11694 sub     ax, ax ;~ 0613:1FD9
cs=0x613;eip=0x001fdb; 	X(PUSH(ax));	// 11695 push    ax ;~ 0613:1FDB
cs=0x613;eip=0x001fdc; 	X(PUSH(*(dw*)(raddr(ds,bx+0x2C))));	// 11696 push    word ptr [bx+2Ch] ;~ 0613:1FDC
cs=0x613;eip=0x001fdf; 	R(CALLF(__aflmul,0));	// 11697 call    __aFlmul ;~ 0613:1FDF
cs=0x613;eip=0x001fe4; 	X(PUSH(dx));	// 11698 push    dx ;~ 0613:1FE4
cs=0x613;eip=0x001fe5; 	X(PUSH(ax));	// 11699 push    ax ;~ 0613:1FE5
cs=0x613;eip=0x001fe6; 	R(CALLF(__afuldiv,0));	// 11700 call    __aFuldiv       ; *11/120 ;~ 0613:1FE6
cs=0x613;eip=0x001feb; 	X(PUSH(ax));	// 11701 push    ax ;~ 0613:1FEB
cs=0x613;eip=0x001fec; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11702 mov     bx, [bp+arg_0] ;~ 0613:1FEC
cs=0x613;eip=0x001fef; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x18))));	// 11703 mov     ax, [bx+18h] ;~ 0613:1FEF
cs=0x613;eip=0x001ff2; 	T(NEG(ax));	// 11704 neg     ax ;~ 0613:1FF2
cs=0x613;eip=0x001ff4; 	X(PUSH(ax));	// 11705 push    ax ;~ 0613:1FF4
cs=0x613;eip=0x001ff5; 	T(ax = si+2);	// 11706 lea     ax, [si+2] ;~ 0613:1FF5
cs=0x613;eip=0x001ff8; 	X(PUSH(ax));	// 11707 push    ax ;~ 0613:1FF8
cs=0x613;eip=0x001ff9; 	X(PUSH(cs));	// 11708 push    cs ;~ 0613:1FF9
cs=0x613;eip=0x001ffa; 	R(CALL(state_op_unk,0));	// 11709 call    near ptr state_op_unk ;~ 0613:1FFA
cs=0x613;eip=0x001ffd; 	T(ADD(sp, 6));	// 11710 add     sp, 6 ;~ 0613:1FFD
loc_16710:
	// 5030 
cs=0x613;eip=0x002000; 	T(MOV(al, startcol2));	// 11714 mov     al, startcol2 ;~ 0613:2000
cs=0x613;eip=0x002003; 	T(CBW);	// 11715 cbw ;~ 0613:2003
cs=0x613;eip=0x002004; 	T(MOV(di, ax));	// 11716 mov     di, ax ;~ 0613:2004
cs=0x613;eip=0x002006; 	T(CMP(*(dw*)(raddr(ss,bp+vec_fc)), di));	// 11717 cmp     [bp+vec_FC], di ;~ 0613:2006
cs=0x613;eip=0x00200a; 	R(JZ(loc_1671f));	// 11718 jz      short loc_1671F ;~ 0613:200A
cs=0x613;eip=0x00200c; 	R(JMP(loc_16840));	// 11719 jmp     loc_16840 ;~ 0613:200C
loc_1671f:
	// 5031 
cs=0x613;eip=0x00200f; 	T(MOV(al, startrow2));	// 11723 mov     al, startrow2 ;~ 0613:200F
cs=0x613;eip=0x002012; 	T(CBW);	// 11724 cbw ;~ 0613:2012
cs=0x613;eip=0x002013; 	T(CMP(*(dw*)(raddr(ss,bp+var_f8)), ax));	// 11725 cmp     [bp+var_F8], ax ;~ 0613:2013
cs=0x613;eip=0x002017; 	R(JZ(loc_1672c));	// 11726 jz      short loc_1672C ;~ 0613:2017
cs=0x613;eip=0x002019; 	R(JMP(loc_16840));	// 11727 jmp     loc_16840 ;~ 0613:2019
loc_1672c:
	// 5032 
cs=0x613;eip=0x00201c; 	T(MOV(ax, 0x7E));	// 11731 mov     ax, 7Eh ; '~' ;~ 0613:201C
cs=0x613;eip=0x00201f; 	X(PUSH(ax));	// 11732 push    ax ;~ 0613:201F
cs=0x613;eip=0x002020; 	T(MOV(ax, track_angle));	// 11733 mov     ax, track_angle ;~ 0613:2020
cs=0x613;eip=0x002023; 	T(ADD(ah, 1));	// 11734 add     ah, 1 ;~ 0613:2023
cs=0x613;eip=0x002026; 	X(PUSH(ax));	// 11735 push    ax ;~ 0613:2026
cs=0x613;eip=0x002027; 	R(CALLF(sin_fast,0));	// 11736 call    sin_fast ;~ 0613:2027
cs=0x613;eip=0x00202c; 	T(ADD(sp, 2));	// 11737 add     sp, 2 ;~ 0613:202C
cs=0x613;eip=0x00202f; 	X(PUSH(ax));	// 11738 push    ax ;~ 0613:202F
cs=0x613;eip=0x002030; 	R(CALLF(multiply_and_scale,0));	// 11739 call    multiply_and_scale ;~ 0613:2030
cs=0x613;eip=0x002035; 	T(ADD(sp, 4));	// 11740 add     sp, 4 ;~ 0613:2035
cs=0x613;eip=0x002038; 	T(MOV(bx, di));	// 11741 mov     bx, di ;~ 0613:2038
cs=0x613;eip=0x00203a; 	T(SHL(bx, 1));	// 11742 shl     bx, 1 ;~ 0613:203A
cs=0x613;eip=0x00203c; 	T(MOV(cx, *(dw*)(((db*)trackcenterpos2)+bx)));	// 11743 mov     cx, trackcenterpos2[bx] ;~ 0613:203C
cs=0x613;eip=0x002040; 	T(ADD(cx, ax));	// 11744 add     cx, ax ;~ 0613:2040
cs=0x613;eip=0x002042; 	X(MOV(*(dw*)(raddr(ss,bp+vec_18eostateworldcrds)), cx));	// 11745 mov     [bp+vec_18EoStateWorldCrds], cx ;~ 0613:2042
cs=0x613;eip=0x002046; 	T(MOV(al, hillflag));	// 11746 mov     al, hillFlag ;~ 0613:2046
cs=0x613;eip=0x002049; 	T(CBW);	// 11747 cbw ;~ 0613:2049
cs=0x613;eip=0x00204a; 	T(MOV(bx, ax));	// 11748 mov     bx, ax ;~ 0613:204A
cs=0x613;eip=0x00204c; 	T(SHL(bx, 1));	// 11749 shl     bx, 1 ;~ 0613:204C
cs=0x613;eip=0x00204e; 	T(MOV(ax, *(dw*)(((db*)hillheightconsts)+bx)));	// 11750 mov     ax, hillHeightConsts[bx] ;~ 0613:204E
cs=0x613;eip=0x002052; 	X(MOV(*(dw*)(raddr(ss,bp+var_18c)), ax));	// 11751 mov     [bp+var_18C], ax ;~ 0613:2052
cs=0x613;eip=0x002056; 	T(MOV(ax, 0x7E));	// 11752 mov     ax, 7Eh ; '~' ;~ 0613:2056
cs=0x613;eip=0x002059; 	X(PUSH(ax));	// 11753 push    ax ;~ 0613:2059
cs=0x613;eip=0x00205a; 	T(MOV(ax, track_angle));	// 11754 mov     ax, track_angle ;~ 0613:205A
cs=0x613;eip=0x00205d; 	T(ADD(ah, 1));	// 11755 add     ah, 1 ;~ 0613:205D
cs=0x613;eip=0x002060; 	X(PUSH(ax));	// 11756 push    ax ;~ 0613:2060
cs=0x613;eip=0x002061; 	R(CALLF(cos_fast,0));	// 11757 call    cos_fast ;~ 0613:2061
cs=0x613;eip=0x002066; 	T(ADD(sp, 2));	// 11758 add     sp, 2 ;~ 0613:2066
cs=0x613;eip=0x002069; 	X(PUSH(ax));	// 11759 push    ax ;~ 0613:2069
cs=0x613;eip=0x00206a; 	R(CALLF(multiply_and_scale,0));	// 11760 call    multiply_and_scale ;~ 0613:206A
cs=0x613;eip=0x00206f; 	T(ADD(sp, 4));	// 11761 add     sp, 4 ;~ 0613:206F
cs=0x613;eip=0x002072; 	T(MOV(cx, ax));	// 11762 mov     cx, ax ;~ 0613:2072
cs=0x613;eip=0x002074; 	T(MOV(al, startrow2));	// 11763 mov     al, startrow2 ;~ 0613:2074
cs=0x613;eip=0x002077; 	T(CBW);	// 11764 cbw ;~ 0613:2077
cs=0x613;eip=0x002078; 	T(MOV(bx, ax));	// 11765 mov     bx, ax ;~ 0613:2078
cs=0x613;eip=0x00207a; 	T(SHL(bx, 1));	// 11766 shl     bx, 1 ;~ 0613:207A
cs=0x613;eip=0x00207c; 	T(ADD(cx, *(dw*)(((db*)trackcenterpos)+bx)));	// 11767 add     cx, trackcenterpos[bx] ;~ 0613:207C
cs=0x613;eip=0x002080; 	X(MOV(*(dw*)(raddr(ss,bp+var_18a)), cx));	// 11768 mov     [bp+var_18A], cx ;~ 0613:2080
cs=0x613;eip=0x002084; 	T(ax = bp+vec_18eostateworldcrds);	// 11769 lea     ax, [bp+vec_18EoStateWorldCrds] ;~ 0613:2084
cs=0x613;eip=0x002088; 	X(PUSH(ax));	// 11770 push    ax ;~ 0613:2088
cs=0x613;eip=0x002089; 	T(MOV(ax, offset(dseg,unk_3bd62)));	// 11771 mov     ax, offset unk_3BD62 ;~ 0613:2089
cs=0x613;eip=0x00208c; 	X(PUSH(ax));	// 11772 push    ax ;~ 0613:208C
cs=0x613;eip=0x00208d; 	T(ax = bp+var_11a);	// 11773 lea     ax, [bp+var_11A] ;~ 0613:208D
cs=0x613;eip=0x002091; 	X(PUSH(ax));	// 11774 push    ax ;~ 0613:2091
cs=0x613;eip=0x002092; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 11775 mov     ax, [bp+arg_2] ;~ 0613:2092
cs=0x613;eip=0x002095; 	T(ADD(ax, 0x0C8));	// 11776 add     ax, 0C8h ;~ 0613:2095
cs=0x613;eip=0x002098; 	X(PUSH(ax));	// 11777 push    ax ;~ 0613:2098
cs=0x613;eip=0x002099; 	X(PUSH(cs));	// 11778 push    cs ;~ 0613:2099
cs=0x613;eip=0x00209a; 	R(CALL(car_car_coll_detect_maybe,0));	// 11779 call    near ptr car_car_coll_detect_maybe ;~ 0613:209A
cs=0x613;eip=0x00209d; 	T(ADD(sp, 8));	// 11780 add     sp, 8 ;~ 0613:209D
cs=0x613;eip=0x0020a0; 	T(CBW);	// 11781 cbw ;~ 0613:20A0
cs=0x613;eip=0x0020a1; 	X(MOV(*(dw*)(raddr(ss,bp+var_138)), ax));	// 11782 mov     [bp+var_138], ax ;~ 0613:20A1
cs=0x613;eip=0x0020a5; 	T(OR(ax, ax));	// 11783 or      ax, ax ;~ 0613:20A5
cs=0x613;eip=0x0020a7; 	R(JNZ(loc_16836));	// 11784 jnz     short loc_16836 ;~ 0613:20A7
cs=0x613;eip=0x0020a9; 	T(MOV(ax, 0x7E));	// 11785 mov     ax, 7Eh ; '~' ;~ 0613:20A9
cs=0x613;eip=0x0020ac; 	X(PUSH(ax));	// 11786 push    ax ;~ 0613:20AC
cs=0x613;eip=0x0020ad; 	T(MOV(ax, track_angle));	// 11787 mov     ax, track_angle ;~ 0613:20AD
cs=0x613;eip=0x0020b0; 	T(ADD(ah, 3));	// 11788 add     ah, 3 ;~ 0613:20B0
cs=0x613;eip=0x0020b3; 	X(PUSH(ax));	// 11789 push    ax ;~ 0613:20B3
cs=0x613;eip=0x0020b4; 	R(CALLF(sin_fast,0));	// 11790 call    sin_fast ;~ 0613:20B4
cs=0x613;eip=0x0020b9; 	T(ADD(sp, 2));	// 11791 add     sp, 2 ;~ 0613:20B9
cs=0x613;eip=0x0020bc; 	X(PUSH(ax));	// 11792 push    ax ;~ 0613:20BC
cs=0x613;eip=0x0020bd; 	R(CALLF(multiply_and_scale,0));	// 11793 call    multiply_and_scale ;~ 0613:20BD
cs=0x613;eip=0x0020c2; 	T(ADD(sp, 4));	// 11794 add     sp, 4 ;~ 0613:20C2
cs=0x613;eip=0x0020c5; 	T(MOV(cx, ax));	// 11795 mov     cx, ax ;~ 0613:20C5
cs=0x613;eip=0x0020c7; 	T(MOV(al, startcol2));	// 11796 mov     al, startcol2 ;~ 0613:20C7
cs=0x613;eip=0x0020ca; 	T(CBW);	// 11797 cbw ;~ 0613:20CA
cs=0x613;eip=0x0020cb; 	T(MOV(bx, ax));	// 11798 mov     bx, ax ;~ 0613:20CB
cs=0x613;eip=0x0020cd; 	T(SHL(bx, 1));	// 11799 shl     bx, 1 ;~ 0613:20CD
cs=0x613;eip=0x0020cf; 	T(ADD(cx, *(dw*)(((db*)trackcenterpos2)+bx)));	// 11800 add     cx, trackcenterpos2[bx] ;~ 0613:20CF
cs=0x613;eip=0x0020d3; 	X(MOV(*(dw*)(raddr(ss,bp+vec_18eostateworldcrds)), cx));	// 11801 mov     [bp+vec_18EoStateWorldCrds], cx ;~ 0613:20D3
cs=0x613;eip=0x0020d7; 	T(MOV(ax, 0x7E));	// 11802 mov     ax, 7Eh ; '~' ;~ 0613:20D7
cs=0x613;eip=0x0020da; 	X(PUSH(ax));	// 11803 push    ax ;~ 0613:20DA
cs=0x613;eip=0x0020db; 	T(MOV(ax, track_angle));	// 11804 mov     ax, track_angle ;~ 0613:20DB
cs=0x613;eip=0x0020de; 	T(ADD(ah, 3));	// 11805 add     ah, 3 ;~ 0613:20DE
cs=0x613;eip=0x0020e1; 	X(PUSH(ax));	// 11806 push    ax ;~ 0613:20E1
cs=0x613;eip=0x0020e2; 	R(CALLF(cos_fast,0));	// 11807 call    cos_fast ;~ 0613:20E2
cs=0x613;eip=0x0020e7; 	T(ADD(sp, 2));	// 11808 add     sp, 2 ;~ 0613:20E7
cs=0x613;eip=0x0020ea; 	X(PUSH(ax));	// 11809 push    ax ;~ 0613:20EA
cs=0x613;eip=0x0020eb; 	R(CALLF(multiply_and_scale,0));	// 11810 call    multiply_and_scale ;~ 0613:20EB
cs=0x613;eip=0x0020f0; 	T(ADD(sp, 4));	// 11811 add     sp, 4 ;~ 0613:20F0
cs=0x613;eip=0x0020f3; 	T(MOV(cx, ax));	// 11812 mov     cx, ax ;~ 0613:20F3
cs=0x613;eip=0x0020f5; 	T(MOV(al, startrow2));	// 11813 mov     al, startrow2 ;~ 0613:20F5
cs=0x613;eip=0x0020f8; 	T(CBW);	// 11814 cbw ;~ 0613:20F8
cs=0x613;eip=0x0020f9; 	T(MOV(bx, ax));	// 11815 mov     bx, ax ;~ 0613:20F9
cs=0x613;eip=0x0020fb; 	T(SHL(bx, 1));	// 11816 shl     bx, 1 ;~ 0613:20FB
cs=0x613;eip=0x0020fd; 	T(ADD(cx, *(dw*)(((db*)trackcenterpos)+bx)));	// 11817 add     cx, trackcenterpos[bx] ;~ 0613:20FD
cs=0x613;eip=0x002101; 	X(MOV(*(dw*)(raddr(ss,bp+var_18a)), cx));	// 11818 mov     [bp+var_18A], cx ;~ 0613:2101
cs=0x613;eip=0x002105; 	T(ax = bp+vec_18eostateworldcrds);	// 11819 lea     ax, [bp+vec_18EoStateWorldCrds] ;~ 0613:2105
cs=0x613;eip=0x002109; 	X(PUSH(ax));	// 11820 push    ax ;~ 0613:2109
cs=0x613;eip=0x00210a; 	T(MOV(ax, offset(dseg,unk_3bd62)));	// 11821 mov     ax, offset unk_3BD62 ;~ 0613:210A
cs=0x613;eip=0x00210d; 	X(PUSH(ax));	// 11822 push    ax ;~ 0613:210D
cs=0x613;eip=0x00210e; 	T(ax = bp+var_11a);	// 11823 lea     ax, [bp+var_11A] ;~ 0613:210E
cs=0x613;eip=0x002112; 	X(PUSH(ax));	// 11824 push    ax ;~ 0613:2112
cs=0x613;eip=0x002113; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 11825 mov     ax, [bp+arg_2] ;~ 0613:2113
cs=0x613;eip=0x002116; 	T(ADD(ax, 0x0C8));	// 11826 add     ax, 0C8h ;~ 0613:2116
cs=0x613;eip=0x002119; 	X(PUSH(ax));	// 11827 push    ax ;~ 0613:2119
cs=0x613;eip=0x00211a; 	X(PUSH(cs));	// 11828 push    cs ;~ 0613:211A
cs=0x613;eip=0x00211b; 	R(CALL(car_car_coll_detect_maybe,0));	// 11829 call    near ptr car_car_coll_detect_maybe ;~ 0613:211B
cs=0x613;eip=0x00211e; 	T(ADD(sp, 8));	// 11830 add     sp, 8 ;~ 0613:211E
cs=0x613;eip=0x002121; 	T(CBW);	// 11831 cbw ;~ 0613:2121
cs=0x613;eip=0x002122; 	X(MOV(*(dw*)(raddr(ss,bp+var_138)), ax));	// 11832 mov     [bp+var_138], ax ;~ 0613:2122
loc_16836:
	// 5033 
cs=0x613;eip=0x002126; 	T(CMP(*(dw*)(raddr(ss,bp+var_138)), 0));	// 11835 cmp     [bp+var_138], 0 ;~ 0613:2126
cs=0x613;eip=0x00212b; 	R(JZ(loc_16840));	// 11836 jz      short loc_16840 ;~ 0613:212B
cs=0x613;eip=0x00212d; 	R(JMP(loc_16648));	// 11837 jmp     loc_16648 ;~ 0613:212D
loc_16840:
	// 5034 
cs=0x613;eip=0x002130; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11842 mov     bx, [bp+arg_0] ;~ 0613:2130
cs=0x613;eip=0x002133; 	T(MOV(ax, pstate_lvec1_x));	// 11843 mov     ax, pState_lvec1_x ;~ 0613:2133
cs=0x613;eip=0x002136; 	T(MOV(dx, word_449c0));	// 11844 mov     dx, word_449C0 ;~ 0613:2136
cs=0x613;eip=0x00213a; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 11845 mov     [bx+0], ax ;~ 0613:213A
cs=0x613;eip=0x00213c; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 11846 mov     [bx+2], dx ;~ 0613:213C
cs=0x613;eip=0x00213f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11847 mov     bx, [bp+arg_0] ;~ 0613:213F
cs=0x613;eip=0x002142; 	T(MOV(ax, pstate_lvec1_y));	// 11848 mov     ax, pState_lvec1_y ;~ 0613:2142
cs=0x613;eip=0x002145; 	T(MOV(dx, word_449c8));	// 11849 mov     dx, word_449C8 ;~ 0613:2145
cs=0x613;eip=0x002149; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 11850 mov     [bx+4], ax ;~ 0613:2149
cs=0x613;eip=0x00214c; 	X(MOV(*(dw*)(raddr(ds,bx+6)), dx));	// 11851 mov     [bx+6], dx ;~ 0613:214C
cs=0x613;eip=0x00214f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11852 mov     bx, [bp+arg_0] ;~ 0613:214F
cs=0x613;eip=0x002152; 	T(MOV(ax, pstate_lvec1_z));	// 11853 mov     ax, pState_lvec1_z ;~ 0613:2152
cs=0x613;eip=0x002155; 	T(MOV(dx, word_449cc));	// 11854 mov     dx, word_449CC ;~ 0613:2155
cs=0x613;eip=0x002159; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 11855 mov     [bx+8], ax ;~ 0613:2159
cs=0x613;eip=0x00215c; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 11856 mov     [bx+0Ah], dx ;~ 0613:215C
cs=0x613;eip=0x00215f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11857 mov     bx, [bp+arg_0] ;~ 0613:215F
cs=0x613;eip=0x002162; 	T(MOV(ax, pstate_minusrotate_z_1));	// 11858 mov     ax, pState_minusRotate_z_1 ;~ 0613:2162
cs=0x613;eip=0x002165; 	X(MOV(*(dw*)(raddr(ds,bx+0x1C)), ax));	// 11859 mov     [bx+1Ch], ax ;~ 0613:2165
cs=0x613;eip=0x002168; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11860 mov     bx, [bp+arg_0] ;~ 0613:2168
cs=0x613;eip=0x00216b; 	T(MOV(ax, pstate_minusrotate_x_1));	// 11861 mov     ax, pState_minusRotate_x_1 ;~ 0613:216B
cs=0x613;eip=0x00216e; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A)), ax));	// 11862 mov     [bx+1Ah], ax ;~ 0613:216E
cs=0x613;eip=0x002171; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11863 mov     bx, [bp+arg_0] ;~ 0613:2171
cs=0x613;eip=0x002174; 	T(MOV(ax, pstate_minusrotate_y_1));	// 11864 mov     ax, pState_minusRotate_y_1 ;~ 0613:2174
cs=0x613;eip=0x002177; 	X(MOV(*(dw*)(raddr(ds,bx+0x18)), ax));	// 11865 mov     [bx+18h], ax ;~ 0613:2177
cs=0x613;eip=0x00217a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11866 mov     bx, [bp+arg_0] ;~ 0613:217A
cs=0x613;eip=0x00217d; 	X(MOV(*(raddr(ds,bx+0x0C8)), 0));	// 11867 mov     byte ptr [bx+0C8h], 0 ;~ 0613:217D
loc_16892:
	// 5035 
cs=0x613;eip=0x002182; 	X(POP(si));	// 11871 pop     si ;~ 0613:2182
cs=0x613;eip=0x002183; 	X(POP(di));	// 11872 pop     di ;~ 0613:2183
cs=0x613;eip=0x002184; 	T(MOV(sp, bp));	// 11873 mov     sp, bp ;~ 0613:2184
cs=0x613;eip=0x002186; 	X(POP(bp));	// 11874 pop     bp ;~ 0613:2186
cs=0x613;eip=0x002187; 	R(RETF(0));	// 11875 retf ;~ 0613:2187
init_carstate_from_simd:
	// 11883 
#undef var_e
#define var_e -0x0E
	// 11886 var_E           = word ptr -0Eh ;~ 0613:2188
#undef var_c
#define var_c -0x0C
	// 11887 var_C           = word ptr -0Ch ;~ 0613:2188
#undef var_a
#define var_a -0x0A
	// 11888 var_A           = word ptr -0Ah ;~ 0613:2188
#undef var_8
#define var_8 -8
	// 11889 var_8           = word ptr -8 ;~ 0613:2188
#undef var_6
#define var_6 -6
	// 11890 var_6           = word ptr -6 ;~ 0613:2188
#undef arg_0
#define arg_0 6
	// 11891 arg_0           = word ptr  6 ;~ 0613:2188
#undef arg_2
#define arg_2 8
	// 11892 arg_2           = word ptr  8 ;~ 0613:2188
#undef arg_4
#define arg_4 0x0A
	// 11893 arg_4           = byte ptr  0Ah ;~ 0613:2188
#undef arg_6
#define arg_6 0x0C
	// 11894 arg_6           = word ptr  0Ch ;~ 0613:2188
#undef arg_8
#define arg_8 0x0E
	// 11895 arg_8           = word ptr  0Eh ;~ 0613:2188
#undef arg_a
#define arg_a 0x10
	// 11896 arg_A           = word ptr  10h ;~ 0613:2188
#undef arg_c
#define arg_c 0x12
	// 11897 arg_C           = word ptr  12h ;~ 0613:2188
#undef arg_e
#define arg_e 0x14
	// 11898 arg_E           = word ptr  14h ;~ 0613:2188
#undef arg_10
#define arg_10 0x16
	// 11899 arg_10          = word ptr  16h ;~ 0613:2188
#undef arg_12
#define arg_12 0x18
	// 11900 arg_12          = word ptr  18h ;~ 0613:2188
ret_613_2188:
	// 5036 
cs=0x613;eip=0x002188; 	X(PUSH(bp));	// 11902 push    bp ;~ 0613:2188
cs=0x613;eip=0x002189; 	T(MOV(bp, sp));	// 11903 mov     bp, sp ;~ 0613:2189
cs=0x613;eip=0x00218b; 	T(SUB(sp, 0x0E));	// 11904 sub     sp, 0Eh ;~ 0613:218B
cs=0x613;eip=0x00218e; 	X(PUSH(di));	// 11905 push    di ;~ 0613:218E
cs=0x613;eip=0x00218f; 	X(PUSH(si));	// 11906 push    si ;~ 0613:218F
cs=0x613;eip=0x002190; 	T(SUB(si, si));	// 11907 sub     si, si ;~ 0613:2190
cs=0x613;eip=0x002192; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11908 mov     bx, [bp+arg_0] ;~ 0613:2192
cs=0x613;eip=0x002195; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 11909 mov     ax, [bp+arg_6] ;~ 0613:2195
cs=0x613;eip=0x002198; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_8))));	// 11910 mov     dx, [bp+arg_8] ;~ 0613:2198
cs=0x613;eip=0x00219b; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 11911 mov     [bx+0], ax ;~ 0613:219B
cs=0x613;eip=0x00219d; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 11912 mov     [bx+2], dx ;~ 0613:219D
cs=0x613;eip=0x0021a0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11913 mov     bx, [bp+arg_0] ;~ 0613:21A0
cs=0x613;eip=0x0021a3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 11914 mov     ax, [bp+arg_6] ;~ 0613:21A3
cs=0x613;eip=0x0021a6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_8))));	// 11915 mov     dx, [bp+arg_8] ;~ 0613:21A6
cs=0x613;eip=0x0021a9; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 11916 mov     [bx+0Ch], ax ;~ 0613:21A9
cs=0x613;eip=0x0021ac; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), dx));	// 11917 mov     [bx+0Eh], dx ;~ 0613:21AC
cs=0x613;eip=0x0021af; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11918 mov     bx, [bp+arg_0] ;~ 0613:21AF
cs=0x613;eip=0x0021b2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 11919 mov     ax, [bp+arg_A] ;~ 0613:21B2
cs=0x613;eip=0x0021b5; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_c))));	// 11920 mov     dx, [bp+arg_C] ;~ 0613:21B5
cs=0x613;eip=0x0021b8; 	T(ADD(ax, 0x200));	// 11921 add     ax, 200h ;~ 0613:21B8
cs=0x613;eip=0x0021bb; 	T(ADC(dx, si));	// 11922 adc     dx, si ;~ 0613:21BB
cs=0x613;eip=0x0021bd; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 11923 mov     [bx+4], ax ;~ 0613:21BD
cs=0x613;eip=0x0021c0; 	X(MOV(*(dw*)(raddr(ds,bx+6)), dx));	// 11924 mov     [bx+6], dx ;~ 0613:21C0
cs=0x613;eip=0x0021c3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11925 mov     bx, [bp+arg_0] ;~ 0613:21C3
cs=0x613;eip=0x0021c6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 11926 mov     ax, [bp+arg_A] ;~ 0613:21C6
cs=0x613;eip=0x0021c9; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_c))));	// 11927 mov     dx, [bp+arg_C] ;~ 0613:21C9
cs=0x613;eip=0x0021cc; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), ax));	// 11928 mov     [bx+10h], ax ;~ 0613:21CC
cs=0x613;eip=0x0021cf; 	X(MOV(*(dw*)(raddr(ds,bx+0x12)), dx));	// 11929 mov     [bx+12h], dx ;~ 0613:21CF
cs=0x613;eip=0x0021d2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11930 mov     bx, [bp+arg_0] ;~ 0613:21D2
cs=0x613;eip=0x0021d5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_e))));	// 11931 mov     ax, [bp+arg_E] ;~ 0613:21D5
cs=0x613;eip=0x0021d8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_10))));	// 11932 mov     dx, [bp+arg_10] ;~ 0613:21D8
cs=0x613;eip=0x0021db; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 11933 mov     [bx+8], ax ;~ 0613:21DB
cs=0x613;eip=0x0021de; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 11934 mov     [bx+0Ah], dx ;~ 0613:21DE
cs=0x613;eip=0x0021e1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11935 mov     bx, [bp+arg_0] ;~ 0613:21E1
cs=0x613;eip=0x0021e4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_e))));	// 11936 mov     ax, [bp+arg_E] ;~ 0613:21E4
cs=0x613;eip=0x0021e7; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_10))));	// 11937 mov     dx, [bp+arg_10] ;~ 0613:21E7
cs=0x613;eip=0x0021ea; 	X(MOV(*(dw*)(raddr(ds,bx+0x14)), ax));	// 11938 mov     [bx+14h], ax ;~ 0613:21EA
cs=0x613;eip=0x0021ed; 	X(MOV(*(dw*)(raddr(ds,bx+0x16)), dx));	// 11939 mov     [bx+16h], dx ;~ 0613:21ED
cs=0x613;eip=0x0021f0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11940 mov     bx, [bp+arg_0] ;~ 0613:21F0
cs=0x613;eip=0x0021f3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_12))));	// 11941 mov     ax, [bp+arg_12] ;~ 0613:21F3
cs=0x613;eip=0x0021f6; 	X(MOV(*(dw*)(raddr(ds,bx+0x18)), ax));	// 11942 mov     [bx+18h], ax ;~ 0613:21F6
cs=0x613;eip=0x0021f9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11943 mov     bx, [bp+arg_0] ;~ 0613:21F9
cs=0x613;eip=0x0021fc; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A)), si));	// 11944 mov     [bx+1Ah], si ;~ 0613:21FC
cs=0x613;eip=0x0021ff; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11945 mov     bx, [bp+arg_0] ;~ 0613:21FF
cs=0x613;eip=0x002202; 	X(MOV(*(dw*)(raddr(ds,bx+0x1C)), si));	// 11946 mov     [bx+1Ch], si ;~ 0613:2202
cs=0x613;eip=0x002205; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11947 mov     bx, [bp+arg_0] ;~ 0613:2205
cs=0x613;eip=0x002208; 	X(MOV(*(dw*)(raddr(ds,bx+0x36)), si));	// 11948 mov     [bx+36h], si ;~ 0613:2208
cs=0x613;eip=0x00220b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11949 mov     bx, [bp+arg_0] ;~ 0613:220B
cs=0x613;eip=0x00220e; 	X(MOV(*(dw*)(raddr(ds,bx+0x1E)), si));	// 11950 mov     [bx+1Eh], si ;~ 0613:220E
cs=0x613;eip=0x002211; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11951 mov     bx, [bp+arg_0] ;~ 0613:2211
cs=0x613;eip=0x002214; 	X(MOV(*(dw*)(raddr(ds,bx+0x20)), si));	// 11952 mov     [bx+20h], si ;~ 0613:2214
cs=0x613;eip=0x002217; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11953 mov     bx, [bp+arg_0] ;~ 0613:2217
cs=0x613;eip=0x00221a; 	T(SUB(al, al));	// 11954 sub     al, al ;~ 0613:221A
cs=0x613;eip=0x00221c; 	X(MOV(*(raddr(ds,bx+0x0BC)), al));	// 11955 mov     [bx+0BCh], al ;~ 0613:221C
cs=0x613;eip=0x002220; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11956 mov     bx, [bp+arg_0] ;~ 0613:2220
cs=0x613;eip=0x002223; 	X(MOV(*(raddr(ds,bx+0x0BD)), al));	// 11957 mov     [bx+0BDh], al ;~ 0613:2223
cs=0x613;eip=0x002227; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 11958 mov     bx, [bp+arg_2] ;~ 0613:2227
cs=0x613;eip=0x00222a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 11959 mov     ax, [bx+6] ;~ 0613:222A
cs=0x613;eip=0x00222d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11960 mov     bx, [bp+arg_0] ;~ 0613:222D
cs=0x613;eip=0x002230; 	X(MOV(*(dw*)(raddr(ds,bx+0x22)), ax));	// 11961 mov     [bx+22h], ax ;~ 0613:2230
cs=0x613;eip=0x002233; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11962 mov     bx, [bp+arg_0] ;~ 0613:2233
cs=0x613;eip=0x002236; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 11963 mov     ax, [bx+22h] ;~ 0613:2236
cs=0x613;eip=0x002239; 	X(MOV(*(dw*)(raddr(ds,bx+0x24)), ax));	// 11964 mov     [bx+24h], ax ;~ 0613:2239
cs=0x613;eip=0x00223c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11965 mov     bx, [bp+arg_0] ;~ 0613:223C
cs=0x613;eip=0x00223f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 11966 mov     ax, [bx+22h] ;~ 0613:223F
cs=0x613;eip=0x002242; 	X(MOV(*(dw*)(raddr(ds,bx+0x26)), ax));	// 11967 mov     [bx+26h], ax ;~ 0613:2242
cs=0x613;eip=0x002245; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11968 mov     bx, [bp+arg_0] ;~ 0613:2245
cs=0x613;eip=0x002248; 	X(MOV(*(raddr(ds,bx+0x0BE)), 1));	// 11969 mov     byte ptr [bx+0BEh], 1 ;~ 0613:2248
cs=0x613;eip=0x00224d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11970 mov     bx, [bp+arg_0] ;~ 0613:224D
cs=0x613;eip=0x002250; 	X(MOV(*(dw*)(raddr(ds,bx+0x28)), si));	// 11971 mov     [bx+28h], si ;~ 0613:2250
cs=0x613;eip=0x002253; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11972 mov     bx, [bp+arg_0] ;~ 0613:2253
cs=0x613;eip=0x002256; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), si));	// 11973 mov     [bx+2Ah], si ;~ 0613:2256
cs=0x613;eip=0x002259; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11974 mov     bx, [bp+arg_0] ;~ 0613:2259
cs=0x613;eip=0x00225c; 	X(MOV(*(dw*)(raddr(ds,bx+0x2C)), si));	// 11975 mov     [bx+2Ch], si ;~ 0613:225C
cs=0x613;eip=0x00225f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11976 mov     bx, [bp+arg_0] ;~ 0613:225F
cs=0x613;eip=0x002262; 	X(MOV(*(dw*)(raddr(ds,bx+0x2E)), si));	// 11977 mov     [bx+2Eh], si ;~ 0613:2262
cs=0x613;eip=0x002265; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 11978 mov     bx, [bp+arg_2] ;~ 0613:2265
cs=0x613;eip=0x002268; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 11979 mov     ax, [bx+10h] ;~ 0613:2268
cs=0x613;eip=0x00226b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11980 mov     bx, [bp+arg_0] ;~ 0613:226B
cs=0x613;eip=0x00226e; 	X(MOV(*(dw*)(raddr(ds,bx+0x30)), ax));	// 11981 mov     [bx+30h], ax ;~ 0613:226E
cs=0x613;eip=0x002271; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11982 mov     bx, [bp+arg_0] ;~ 0613:2271
cs=0x613;eip=0x002274; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x30))));	// 11983 mov     ax, [bx+30h] ;~ 0613:2274
cs=0x613;eip=0x002277; 	T(MOV(cl, 8));	// 11984 mov     cl, 8 ;~ 0613:2277
cs=0x613;eip=0x002279; 	T(SHR(ax, cl));	// 11985 shr     ax, cl ;~ 0613:2279
cs=0x613;eip=0x00227b; 	X(MOV(*(dw*)(raddr(ds,bx+0x32)), ax));	// 11986 mov     [bx+32h], ax ;~ 0613:227B
cs=0x613;eip=0x00227e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 11987 mov     bx, [bp+arg_2] ;~ 0613:227E
cs=0x613;eip=0x002281; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 11988 mov     ax, [bx+20h] ;~ 0613:2281
cs=0x613;eip=0x002284; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11989 mov     bx, [bp+arg_0] ;~ 0613:2284
cs=0x613;eip=0x002287; 	X(MOV(*(dw*)(raddr(ds,bx+0x34)), ax));	// 11990 mov     [bx+34h], ax ;~ 0613:2287
cs=0x613;eip=0x00228a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11991 mov     bx, [bp+arg_0] ;~ 0613:228A
cs=0x613;eip=0x00228d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x34))));	// 11992 mov     ax, [bx+34h] ;~ 0613:228D
cs=0x613;eip=0x002290; 	X(MOV(*(dw*)(raddr(ds,bx+0x3A)), ax));	// 11993 mov     [bx+3Ah], ax ;~ 0613:2290
cs=0x613;eip=0x002293; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 11994 mov     bx, [bp+arg_2] ;~ 0613:2293
cs=0x613;eip=0x002296; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 11995 mov     ax, [bx+22h] ;~ 0613:2296
cs=0x613;eip=0x002299; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11996 mov     bx, [bp+arg_0] ;~ 0613:2299
cs=0x613;eip=0x00229c; 	X(MOV(*(dw*)(raddr(ds,bx+0x38)), ax));	// 11997 mov     [bx+38h], ax ;~ 0613:229C
cs=0x613;eip=0x00229f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 11998 mov     bx, [bp+arg_0] ;~ 0613:229F
cs=0x613;eip=0x0022a2; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x38))));	// 11999 mov     ax, [bx+38h] ;~ 0613:22A2
cs=0x613;eip=0x0022a5; 	X(MOV(*(dw*)(raddr(ds,bx+0x3C)), ax));	// 12000 mov     [bx+3Ch], ax ;~ 0613:22A5
cs=0x613;eip=0x0022a8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12001 mov     bx, [bp+arg_0] ;~ 0613:22A8
cs=0x613;eip=0x0022ab; 	X(MOV(*(dw*)(raddr(ds,bx+0x3E)), si));	// 12002 mov     [bx+3Eh], si ;~ 0613:22AB
cs=0x613;eip=0x0022ae; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12003 mov     bx, [bp+arg_0] ;~ 0613:22AE
cs=0x613;eip=0x0022b1; 	X(MOV(*(dw*)(raddr(ds,bx+0x40)), si));	// 12004 mov     [bx+40h], si ;~ 0613:22B1
cs=0x613;eip=0x0022b4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12005 mov     bx, [bp+arg_0] ;~ 0613:22B4
cs=0x613;eip=0x0022b7; 	X(MOV(*(dw*)(raddr(ds,bx+0x42)), si));	// 12006 mov     [bx+42h], si ;~ 0613:22B7
cs=0x613;eip=0x0022ba; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12007 mov     bx, [bp+arg_0] ;~ 0613:22BA
cs=0x613;eip=0x0022bd; 	X(MOV(*(dw*)(raddr(ds,bx+0x48)), si));	// 12008 mov     [bx+48h], si ;~ 0613:22BD
cs=0x613;eip=0x0022c0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12009 mov     bx, [bp+arg_0] ;~ 0613:22C0
cs=0x613;eip=0x0022c3; 	X(MOV(*(dw*)(raddr(ds,bx+0x4A)), si));	// 12010 mov     [bx+4Ah], si ;~ 0613:22C3
cs=0x613;eip=0x0022c6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12011 mov     bx, [bp+arg_0] ;~ 0613:22C6
cs=0x613;eip=0x0022c9; 	X(MOV(*(raddr(ds,bx+0x0BF)), 2));	// 12012 mov     byte ptr [bx+0BFh], 2 ;~ 0613:22C9
cs=0x613;eip=0x0022ce; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12013 mov     bx, [bp+arg_0] ;~ 0613:22CE
cs=0x613;eip=0x0022d1; 	X(MOV(*(raddr(ds,bx+0x0C0)), 2));	// 12014 mov     byte ptr [bx+0C0h], 2 ;~ 0613:22D1
cs=0x613;eip=0x0022d6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12015 mov     bx, [bp+arg_0] ;~ 0613:22D6
cs=0x613;eip=0x0022d9; 	X(MOV(*(raddr(ds,bx+0x0C1)), 4));	// 12016 mov     byte ptr [bx+0C1h], 4 ;~ 0613:22D9
cs=0x613;eip=0x0022de; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12017 mov     bx, [bp+arg_0] ;~ 0613:22DE
cs=0x613;eip=0x0022e1; 	X(MOV(*(dw*)(raddr(ds,bx+0x44)), si));	// 12018 mov     [bx+44h], si ;~ 0613:22E1
cs=0x613;eip=0x0022e4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12019 mov     bx, [bp+arg_0] ;~ 0613:22E4
cs=0x613;eip=0x0022e7; 	X(MOV(*(dw*)(raddr(ds,bx+0x46)), 0x3E8));	// 12020 mov     word ptr [bx+46h], 3E8h ;~ 0613:22E7
cs=0x613;eip=0x0022ec; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 12021 mov     ax, [bp+arg_6] ;~ 0613:22EC
cs=0x613;eip=0x0022ef; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_8))));	// 12022 mov     dx, [bp+arg_8] ;~ 0613:22EF
cs=0x613;eip=0x0022f2; 	T(MOV(cl, 6));	// 12023 mov     cl, 6 ;~ 0613:22F2
loc_16a04:
	// 5037 
cs=0x613;eip=0x0022f4; 	T(SAR(dx, 1));	// 12026 sar     dx, 1 ;~ 0613:22F4
cs=0x613;eip=0x0022f6; 	T(RCR(ax, 1));	// 12027 rcr     ax, 1 ;~ 0613:22F6
cs=0x613;eip=0x0022f8; 	T(DEC(cl));	// 12028 dec     cl ;~ 0613:22F8
cs=0x613;eip=0x0022fa; 	R(JNZ(loc_16a04));	// 12029 jnz     short loc_16A04 ;~ 0613:22FA
cs=0x613;eip=0x0022fc; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 12030 mov     [bp+var_A], ax ;~ 0613:22FC
cs=0x613;eip=0x0022ff; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 12031 mov     ax, [bp+arg_A] ;~ 0613:22FF
cs=0x613;eip=0x002302; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_c))));	// 12032 mov     dx, [bp+arg_C] ;~ 0613:2302
cs=0x613;eip=0x002305; 	T(MOV(cl, 6));	// 12033 mov     cl, 6 ;~ 0613:2305
loc_16a17:
	// 5038 
cs=0x613;eip=0x002307; 	T(SAR(dx, 1));	// 12036 sar     dx, 1 ;~ 0613:2307
cs=0x613;eip=0x002309; 	T(RCR(ax, 1));	// 12037 rcr     ax, 1 ;~ 0613:2309
cs=0x613;eip=0x00230b; 	T(DEC(cl));	// 12038 dec     cl ;~ 0613:230B
cs=0x613;eip=0x00230d; 	R(JNZ(loc_16a17));	// 12039 jnz     short loc_16A17 ;~ 0613:230D
cs=0x613;eip=0x00230f; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12040 mov     [bp+var_8], ax ;~ 0613:230F
cs=0x613;eip=0x002312; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_e))));	// 12041 mov     ax, [bp+arg_E] ;~ 0613:2312
cs=0x613;eip=0x002315; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_10))));	// 12042 mov     dx, [bp+arg_10] ;~ 0613:2315
cs=0x613;eip=0x002318; 	T(MOV(cl, 6));	// 12043 mov     cl, 6 ;~ 0613:2318
loc_16a2a:
	// 5039 
cs=0x613;eip=0x00231a; 	T(SAR(dx, 1));	// 12046 sar     dx, 1 ;~ 0613:231A
cs=0x613;eip=0x00231c; 	T(RCR(ax, 1));	// 12047 rcr     ax, 1 ;~ 0613:231C
cs=0x613;eip=0x00231e; 	T(DEC(cl));	// 12048 dec     cl ;~ 0613:231E
cs=0x613;eip=0x002320; 	R(JNZ(loc_16a2a));	// 12049 jnz     short loc_16A2A ;~ 0613:2320
cs=0x613;eip=0x002322; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 12050 mov     [bp+var_6], ax ;~ 0613:2322
cs=0x613;eip=0x002325; 	T(SUB(di, di));	// 12051 sub     di, di ;~ 0613:2325
loc_16a37:
	// 5040 
cs=0x613;eip=0x002327; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12054 mov     bx, [bp+arg_0] ;~ 0613:2327
cs=0x613;eip=0x00232a; 	X(MOV(*(raddr(ds,bx+di+0x0C2)), 1));	// 12055 mov     byte ptr [bx+di+0C2h], 1 ; initial surface = tarmac ;~ 0613:232A
cs=0x613;eip=0x00232f; 	T(MOV(ax, di));	// 12056 mov     ax, di ;~ 0613:232F
cs=0x613;eip=0x002331; 	T(SHL(ax, 1));	// 12057 shl     ax, 1 ;~ 0613:2331
cs=0x613;eip=0x002333; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 12058 mov     [bp+var_C], ax ;~ 0613:2333
cs=0x613;eip=0x002336; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12059 mov     bx, [bp+arg_0] ;~ 0613:2336
cs=0x613;eip=0x002339; 	T(ADD(bx, ax));	// 12060 add     bx, ax ;~ 0613:2339
cs=0x613;eip=0x00233b; 	X(MOV(*(dw*)(raddr(ds,bx+0x4C)), si));	// 12061 mov     [bx+4Ch], si    ; .rc1 ;~ 0613:233B
cs=0x613;eip=0x00233e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12062 mov     bx, [bp+arg_0] ;~ 0613:233E
cs=0x613;eip=0x002341; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_c))));	// 12063 add     bx, [bp+var_C] ;~ 0613:2341
cs=0x613;eip=0x002344; 	X(MOV(*(dw*)(raddr(ds,bx+0x54)), si));	// 12064 mov     [bx+54h], si    ; rc2 ;~ 0613:2344
cs=0x613;eip=0x002347; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12065 mov     bx, [bp+arg_0] ;~ 0613:2347
cs=0x613;eip=0x00234a; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_c))));	// 12066 add     bx, [bp+var_C] ;~ 0613:234A
cs=0x613;eip=0x00234d; 	X(MOV(*(dw*)(raddr(ds,bx+0x5C)), si));	// 12067 mov     [bx+5Ch], si    ; rc3 ;~ 0613:234D
cs=0x613;eip=0x002350; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12068 mov     bx, [bp+arg_0] ;~ 0613:2350
cs=0x613;eip=0x002353; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_c))));	// 12069 add     bx, [bp+var_C] ;~ 0613:2353
cs=0x613;eip=0x002356; 	X(MOV(*(dw*)(raddr(ds,bx+0x64)), si));	// 12070 mov     [bx+64h], si    ; rc4 ;~ 0613:2356
cs=0x613;eip=0x002359; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12071 mov     bx, [bp+arg_0] ;~ 0613:2359
cs=0x613;eip=0x00235c; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_c))));	// 12072 add     bx, [bp+var_C] ;~ 0613:235C
cs=0x613;eip=0x00235f; 	X(MOV(*(dw*)(raddr(ds,bx+0x6C)), si));	// 12073 mov     [bx+6Ch], si    ; rc5 ;~ 0613:235F
cs=0x613;eip=0x002362; 	T(MOV(ax, di));	// 12074 mov     ax, di ;~ 0613:2362
cs=0x613;eip=0x002364; 	T(MOV(cx, ax));	// 12075 mov     cx, ax ;~ 0613:2364
cs=0x613;eip=0x002366; 	T(SHL(ax, 1));	// 12076 shl     ax, 1 ;~ 0613:2366
cs=0x613;eip=0x002368; 	T(ADD(ax, cx));	// 12077 add     ax, cx ;~ 0613:2368
cs=0x613;eip=0x00236a; 	T(SHL(ax, 1));	// 12078 shl     ax, 1           ; *6 ;~ 0613:236A
cs=0x613;eip=0x00236c; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 12079 mov     [bp+var_E], ax ;~ 0613:236C
cs=0x613;eip=0x00236f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12080 mov     bx, [bp+arg_0] ;~ 0613:236F
cs=0x613;eip=0x002372; 	T(ADD(bx, ax));	// 12081 add     bx, ax ;~ 0613:2372
cs=0x613;eip=0x002374; 	X(PUSH(si));	// 12082 push    si ;~ 0613:2374
cs=0x613;eip=0x002375; 	X(PUSH(di));	// 12083 push    di ;~ 0613:2375
cs=0x613;eip=0x002376; 	T(di = bx+0x74);	// 12084 lea     di, [bx+74h]    ; ax is added into the offset ;~ 0613:2376
cs=0x613;eip=0x002379; 	T(si = bp+var_a);	// 12085 lea     si, [bp+var_A] ;~ 0613:2379
cs=0x613;eip=0x00237c; 	X(PUSH(ds));	// 12086 push    ds ;~ 0613:237C
cs=0x613;eip=0x00237d; 	X(POP(es));	// 12087 pop     es ;~ 0613:237D
cs=0x613;eip=0x00237e; 	X(MOVSW);	// 12089 movsw ;~ 0613:237E
cs=0x613;eip=0x00237f; 	X(MOVSW);	// 12090 movsw ;~ 0613:237F
cs=0x613;eip=0x002380; 	X(MOVSW);	// 12091 movsw ;~ 0613:2380
cs=0x613;eip=0x002381; 	X(POP(di));	// 12092 pop     di ;~ 0613:2381
cs=0x613;eip=0x002382; 	X(POP(si));	// 12093 pop     si ;~ 0613:2382
cs=0x613;eip=0x002383; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12094 mov     bx, [bp+arg_0] ;~ 0613:2383
cs=0x613;eip=0x002386; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_e))));	// 12095 add     bx, [bp+var_E] ;~ 0613:2386
cs=0x613;eip=0x002389; 	X(PUSH(si));	// 12096 push    si ;~ 0613:2389
cs=0x613;eip=0x00238a; 	X(PUSH(di));	// 12097 push    di ;~ 0613:238A
cs=0x613;eip=0x00238b; 	T(di = bx+0x8C);	// 12098 lea     di, [bx+8Ch] ;~ 0613:238B
cs=0x613;eip=0x00238f; 	T(si = bp+var_a);	// 12099 lea     si, [bp+var_A]  ; moves x, y and z. ;~ 0613:238F
cs=0x613;eip=0x002392; 	X(MOVSW);	// 12100 movsw ;~ 0613:2392
cs=0x613;eip=0x002393; 	X(MOVSW);	// 12101 movsw ;~ 0613:2393
cs=0x613;eip=0x002394; 	X(MOVSW);	// 12102 movsw ;~ 0613:2394
cs=0x613;eip=0x002395; 	X(POP(di));	// 12103 pop     di ;~ 0613:2395
cs=0x613;eip=0x002396; 	X(POP(si));	// 12104 pop     si ;~ 0613:2396
cs=0x613;eip=0x002397; 	T(INC(di));	// 12105 inc     di ;~ 0613:2397
cs=0x613;eip=0x002398; 	T(CMP(di, 4));	// 12106 cmp     di, 4 ;~ 0613:2398
cs=0x613;eip=0x00239b; 	R(JL(loc_16a37));	// 12107 jl      short loc_16A37 ;~ 0613:239B
cs=0x613;eip=0x00239d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12108 mov     bx, [bp+arg_0] ;~ 0613:239D
cs=0x613;eip=0x0023a0; 	T(MOV(ax, si));	// 12109 mov     ax, si ;~ 0613:23A0
cs=0x613;eip=0x0023a2; 	X(MOV(*(raddr(ds,bx+0x0C6)), al));	// 12110 mov     [bx+0C6h], al ;~ 0613:23A2
cs=0x613;eip=0x0023a6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12111 mov     bx, [bp+arg_0] ;~ 0613:23A6
cs=0x613;eip=0x0023a9; 	X(MOV(*(raddr(ds,bx+0x0C7)), al));	// 12112 mov     [bx+0C7h], al ;~ 0613:23A9
cs=0x613;eip=0x0023ad; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12113 mov     bx, [bp+arg_0] ;~ 0613:23AD
cs=0x613;eip=0x0023b0; 	X(MOV(*(raddr(ds,bx+0x0C8)), al));	// 12114 mov     [bx+0C8h], al ;~ 0613:23B0
cs=0x613;eip=0x0023b4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12115 mov     bx, [bp+arg_0] ;~ 0613:23B4
cs=0x613;eip=0x0023b7; 	X(MOV(*(raddr(ds,bx+0x0C9)), al));	// 12116 mov     [bx+0C9h], al ;~ 0613:23B7
cs=0x613;eip=0x0023bb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12117 mov     bx, [bp+arg_0] ;~ 0613:23BB
cs=0x613;eip=0x0023be; 	X(MOV(*(raddr(ds,bx+0x0CA)), al));	// 12118 mov     [bx+0CAh], al ;~ 0613:23BE
cs=0x613;eip=0x0023c2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12119 mov     bx, [bp+arg_0] ;~ 0613:23C2
cs=0x613;eip=0x0023c5; 	X(MOV(*(raddr(ds,bx+0x0CB)), al));	// 12120 mov     [bx+0CBh], al ;~ 0613:23C5
cs=0x613;eip=0x0023c9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12121 mov     bx, [bp+arg_0] ;~ 0613:23C9
cs=0x613;eip=0x0023cc; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 12122 mov     al, [bp+arg_4] ;~ 0613:23CC
cs=0x613;eip=0x0023cf; 	X(MOV(*(raddr(ds,bx+0x0CC)), al));	// 12123 mov     [bx+0CCh], al ;~ 0613:23CF
cs=0x613;eip=0x0023d3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12124 mov     bx, [bp+arg_0] ;~ 0613:23D3
cs=0x613;eip=0x0023d6; 	T(MOV(ax, si));	// 12125 mov     ax, si ;~ 0613:23D6
cs=0x613;eip=0x0023d8; 	X(MOV(*(raddr(ds,bx+0x0CD)), al));	// 12126 mov     [bx+0CDh], al ;~ 0613:23D8
cs=0x613;eip=0x0023dc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12127 mov     bx, [bp+arg_0] ;~ 0613:23DC
cs=0x613;eip=0x0023df; 	X(MOV(*(raddr(ds,bx+0x0CE)), al));	// 12128 mov     [bx+0CEh], al ;~ 0613:23DF
cs=0x613;eip=0x0023e3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 12129 mov     bx, [bp+arg_0] ;~ 0613:23E3
cs=0x613;eip=0x0023e6; 	X(MOV(*(raddr(ds,bx+0x0CF)), 1));	// 12130 mov     byte ptr [bx+0CFh], 1 ;~ 0613:23E6
cs=0x613;eip=0x0023eb; 	X(POP(si));	// 12131 pop     si ;~ 0613:23EB
cs=0x613;eip=0x0023ec; 	X(POP(di));	// 12132 pop     di ;~ 0613:23EC
cs=0x613;eip=0x0023ed; 	T(MOV(sp, bp));	// 12133 mov     sp, bp ;~ 0613:23ED
cs=0x613;eip=0x0023ef; 	X(POP(bp));	// 12134 pop     bp ;~ 0613:23EF
cs=0x613;eip=0x0023f0; 	R(RETF(0));	// 12135 retf ;~ 0613:23F0
init_game_state:
	// 12145 
#undef var_a
#define var_a -0x0A
	// 12148 var_A           = word ptr -0Ah ;~ 0613:23F2
#undef var_8
#define var_8 -8
	// 12149 var_8           = word ptr -8 ;~ 0613:23F2
#undef var_2
#define var_2 -2
	// 12150 var_2           = word ptr -2 ;~ 0613:23F2
#undef arg_0
#define arg_0 6
	// 12151 arg_0           = word ptr  6 ;~ 0613:23F2
ret_613_23f2:
	// 5041 
cs=0x613;eip=0x0023f2; 	X(PUSH(bp));	// 12153 push    bp ;~ 0613:23F2
cs=0x613;eip=0x0023f3; 	T(MOV(bp, sp));	// 12154 mov     bp, sp ;~ 0613:23F3
cs=0x613;eip=0x0023f5; 	T(SUB(sp, 0x0A));	// 12155 sub     sp, 0Ah ;~ 0613:23F5
cs=0x613;eip=0x0023f8; 	X(PUSH(di));	// 12156 push    di ;~ 0613:23F8
cs=0x613;eip=0x0023f9; 	X(PUSH(si));	// 12157 push    si ;~ 0613:23F9
cs=0x613;eip=0x0023fa; 	T(SUB(si, si));	// 12158 sub     si, si ;~ 0613:23FA
cs=0x613;eip=0x0023fc; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FFFF));	// 12159 cmp     [bp+arg_0], 0FFFFh ;~ 0613:23FC
cs=0x613;eip=0x002400; 	R(JNZ(loc_16b4d));	// 12160 jnz     short loc_16B4D ;~ 0613:2400
cs=0x613;eip=0x002402; 	X(MOV(elapsed_time1, si));	// 12161 mov     elapsed_time1, si ;~ 0613:2402
cs=0x613;eip=0x002406; 	T(SUB(di, di));	// 12162 sub     di, di ;~ 0613:2406
loc_16b18:
	// 5042 
cs=0x613;eip=0x002408; 	T(MOV(ax, 1120));	// 12165 mov     ax, 1120        ; sizeof(struct GAMESTATE) ;~ 0613:2408
cs=0x613;eip=0x00240b; 	T(CWD);	// 12166 cwd ;~ 0613:240B
cs=0x613;eip=0x00240c; 	X(PUSH(dx));	// 12167 push    dx ;~ 0613:240C
cs=0x613;eip=0x00240d; 	X(PUSH(ax));	// 12168 push    ax ;~ 0613:240D
cs=0x613;eip=0x00240e; 	T(MOV(ax, di));	// 12169 mov     ax, di ;~ 0613:240E
cs=0x613;eip=0x002410; 	T(CWD);	// 12170 cwd ;~ 0613:2410
cs=0x613;eip=0x002411; 	X(PUSH(dx));	// 12171 push    dx ;~ 0613:2411
cs=0x613;eip=0x002412; 	X(PUSH(ax));	// 12172 push    ax ;~ 0613:2412
cs=0x613;eip=0x002413; 	R(CALLF(__aflmul,0));	// 12173 call    __aFlmul ;~ 0613:2413
cs=0x613;eip=0x002418; 	T(ADD(ax, 0x3F4));	// 12174 add     ax, 3F4h ;~ 0613:2418
cs=0x613;eip=0x00241b; 	T(ADC(dx, 0));	// 12175 adc     dx, 0 ;~ 0613:241B
cs=0x613;eip=0x00241e; 	T(ADD(ax, cvxptr));	// 12176 add     ax, cvxptr ;~ 0613:241E
cs=0x613;eip=0x002422; 	T(ADC(dx, 0));	// 12177 adc     dx, 0 ;~ 0613:2422
cs=0x613;eip=0x002425; 	T(MOV(cx, 0x0C));	// 12178 mov     cx, 0Ch ;~ 0613:2425
cs=0x613;eip=0x002428; 	T(SHL(dx, cl));	// 12179 shl     dx, cl ;~ 0613:2428
cs=0x613;eip=0x00242a; 	T(ADD(dx, word_45a22));	// 12180 add     dx, word_45A22 ;~ 0613:242A
cs=0x613;eip=0x00242e; 	T(MOV(es, dx));	// 12181 mov     es, dx ;~ 0613:242E
cs=0x613;eip=0x002430; 	T(MOV(bx, ax));	// 12183 mov     bx, ax ;~ 0613:2430
cs=0x613;eip=0x002432; 	T(MOV(ax, si));	// 12184 mov     ax, si ;~ 0613:2432
cs=0x613;eip=0x002434; 	X(MOV(*(raddr(es,bx)), al));	// 12185 mov     es:[bx], al ;~ 0613:2434
cs=0x613;eip=0x002437; 	T(INC(di));	// 12186 inc     di ;~ 0613:2437
cs=0x613;eip=0x002438; 	T(CMP(di, 20));	// 12187 cmp     di, 20 ;~ 0613:2438
cs=0x613;eip=0x00243b; 	R(JL(loc_16b18));	// 12188 jl      short loc_16B18 ; sizeof(struct GAMESTATE) ;~ 0613:243B
loc_16b4d:
	// 5043 
cs=0x613;eip=0x00243d; 	T(CMP(framespersec, 10));	// 12191 cmp     framespersec, 10 ;~ 0613:243D
cs=0x613;eip=0x002442; 	R(JNZ(loc_16b5c));	// 12192 jnz     short loc_16B5C ;~ 0613:2442
cs=0x613;eip=0x002444; 	X(MOV(steerwhlresptable_ptr, offset(dseg,steerwhlresptable_10fps)));	// 12193 mov     steerWhlRespTable_ptr, offset steerWhlRespTable_10fps ;~ 0613:2444
cs=0x613;eip=0x00244a; 	R(JMP(loc_16b62));	// 12194 jmp     short loc_16B62 ;~ 0613:244A
loc_16b5c:
	// 5044 
cs=0x613;eip=0x00244c; 	X(MOV(steerwhlresptable_ptr, offset(dseg,steerwhlresptable_20fps)));	// 12198 mov     steerWhlRespTable_ptr, offset steerWhlRespTable_20fps ;~ 0613:244C
loc_16b62:
	// 5045 
cs=0x613;eip=0x002452; 	T(MOV(ax, 30));	// 12201 mov     ax, 30 ;~ 0613:2452
cs=0x613;eip=0x002455; 	X(IMUL1_2(framespersec));	// 12202 imul    framespersec ;~ 0613:2455
cs=0x613;eip=0x002459; 	X(MOV(word_45a00, ax));	// 12203 mov     word_45A00, ax ;~ 0613:2459
cs=0x613;eip=0x00245c; 	T(MOV(ax, 100));	// 12204 mov     ax, 100 ;~ 0613:245C
cs=0x613;eip=0x00245f; 	T(CWD);	// 12205 cwd ;~ 0613:245F
cs=0x613;eip=0x002460; 	T(MOV(cx, framespersec));	// 12206 mov     cx, framespersec ;~ 0613:2460
cs=0x613;eip=0x002464; 	T(IDIV2(cx));	// 12207 idiv    cx ;~ 0613:2464
cs=0x613;eip=0x002466; 	X(MOV(word_4499c, ax));	// 12208 mov     word_4499C, ax ;~ 0613:2466
cs=0x613;eip=0x002469; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FFFD));	// 12209 cmp     [bp+arg_0], 0FFFDh ;~ 0613:2469
cs=0x613;eip=0x00246d; 	R(JNZ(loc_16b82));	// 12210 jnz     short loc_16B82 ;~ 0613:246D
cs=0x613;eip=0x00246f; 	R(JMP(loc_16f34));	// 12211 jmp     loc_16F34 ;~ 0613:246F
loc_16b82:
	// 5046 
cs=0x613;eip=0x002472; 	R(CALLF(init_unknown,0));	// 12215 call    init_unknown ;~ 0613:2472
cs=0x613;eip=0x002477; 	X(MOV(byte_44888, 1));	// 12216 mov     byte_44888, 1 ;~ 0613:2477
cs=0x613;eip=0x00247c; 	X(MOV(word_445ce, 1));	// 12217 mov     word_445CE, 1 ;~ 0613:247C
cs=0x613;eip=0x002482; 	T(MOV(ax, si));	// 12218 mov     ax, si ;~ 0613:2482
cs=0x613;eip=0x002484; 	X(MOV(byte_44889, al));	// 12219 mov     byte_44889, al ;~ 0613:2484
cs=0x613;eip=0x002487; 	X(MOV(byte_4488a, al));	// 12220 mov     byte_4488A, al ;~ 0613:2487
cs=0x613;eip=0x00248a; 	X(MOV(word_445cc, si));	// 12221 mov     word_445CC, si ;~ 0613:248A
cs=0x613;eip=0x00248e; 	X(MOV(word_44788, si));	// 12222 mov     word_44788, si ;~ 0613:248E
cs=0x613;eip=0x002492; 	X(MOV(byte_4488b, al));	// 12223 mov     byte_4488B, al ;~ 0613:2492
cs=0x613;eip=0x002495; 	X(MOV(byte_4488c, al));	// 12224 mov     byte_4488C, al ;~ 0613:2495
cs=0x613;eip=0x002498; 	T(MOV(di, si));	// 12225 mov     di, si ;~ 0613:2498
cs=0x613;eip=0x00249a; 	R(JMP(loc_16bb3));	// 12226 jmp     short loc_16BB3 ;~ 0613:249A
loc_16bac:
	// 5047 
cs=0x613;eip=0x00249c; 	T(MOV(ax, si));	// 12230 mov     ax, si ;~ 0613:249C
cs=0x613;eip=0x00249e; 	X(MOV(*((&byte_4488e)+di), al));	// 12231 mov     byte_4488E[di], al ;~ 0613:249E
cs=0x613;eip=0x0024a2; 	T(INC(di));	// 12232 inc     di ;~ 0613:24A2
loc_16bb3:
	// 5048 
cs=0x613;eip=0x0024a3; 	T(CMP(di, 48));	// 12235 cmp     di, 48 ;~ 0613:24A3
cs=0x613;eip=0x0024a6; 	R(JL(loc_16bac));	// 12236 jl      short loc_16BAC ;~ 0613:24A6
cs=0x613;eip=0x0024a8; 	T(MOV(di, si));	// 12237 mov     di, si ;~ 0613:24A8
cs=0x613;eip=0x0024aa; 	R(JMP(loc_16bc5));	// 12238 jmp     short loc_16BC5 ;~ 0613:24AA
loc_16bbc:
	// 5049 
cs=0x613;eip=0x0024ac; 	T(MOV(bx, di));	// 12242 mov     bx, di ;~ 0613:24AC
cs=0x613;eip=0x0024ae; 	T(SHL(bx, 1));	// 12243 shl     bx, 1 ;~ 0613:24AE
cs=0x613;eip=0x0024b0; 	X(MOV(*(dw*)(((db*)&word_44822)+bx), si));	// 12244 mov     word_44822[bx], si ;~ 0613:24B0
cs=0x613;eip=0x0024b4; 	T(INC(di));	// 12245 inc     di ;~ 0613:24B4
loc_16bc5:
	// 5050 
cs=0x613;eip=0x0024b5; 	T(CMP(di, 24));	// 12248 cmp     di, 24 ;~ 0613:24B5
cs=0x613;eip=0x0024b8; 	R(JL(loc_16bbc));	// 12249 jl      short loc_16BBC ;~ 0613:24B8
cs=0x613;eip=0x0024ba; 	T(MOV(ax, 0x200));	// 12250 mov     ax, 200h ;~ 0613:24BA
cs=0x613;eip=0x0024bd; 	X(PUSH(ax));	// 12251 push    ax ;~ 0613:24BD
cs=0x613;eip=0x0024be; 	T(MOV(ax, track_angle));	// 12252 mov     ax, track_angle ;~ 0613:24BE
cs=0x613;eip=0x0024c1; 	T(ADD(ah, 3));	// 12253 add     ah, 3 ;~ 0613:24C1
cs=0x613;eip=0x0024c4; 	X(PUSH(ax));	// 12254 push    ax ;~ 0613:24C4
cs=0x613;eip=0x0024c5; 	R(CALLF(sin_fast,0));	// 12255 call    sin_fast ;~ 0613:24C5
cs=0x613;eip=0x0024ca; 	T(ADD(sp, 2));	// 12256 add     sp, 2 ;~ 0613:24CA
cs=0x613;eip=0x0024cd; 	X(PUSH(ax));	// 12257 push    ax ;~ 0613:24CD
cs=0x613;eip=0x0024ce; 	R(CALLF(multiply_and_scale,0));	// 12258 call    multiply_and_scale ;~ 0613:24CE
cs=0x613;eip=0x0024d3; 	T(ADD(sp, 4));	// 12259 add     sp, 4 ;~ 0613:24D3
cs=0x613;eip=0x0024d6; 	T(MOV(cx, 0x1000));	// 12260 mov     cx, 1000h ;~ 0613:24D6
cs=0x613;eip=0x0024d9; 	X(PUSH(cx));	// 12261 push    cx ;~ 0613:24D9
cs=0x613;eip=0x0024da; 	T(MOV(cx, track_angle));	// 12262 mov     cx, track_angle ;~ 0613:24DA
cs=0x613;eip=0x0024de; 	T(ADD(ch, 2));	// 12263 add     ch, 2 ;~ 0613:24DE
cs=0x613;eip=0x0024e1; 	X(PUSH(cx));	// 12264 push    cx ;~ 0613:24E1
cs=0x613;eip=0x0024e2; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 12265 mov     [bp+var_A], ax ;~ 0613:24E2
cs=0x613;eip=0x0024e5; 	R(CALLF(sin_fast,0));	// 12266 call    sin_fast ;~ 0613:24E5
cs=0x613;eip=0x0024ea; 	T(ADD(sp, 2));	// 12267 add     sp, 2 ;~ 0613:24EA
cs=0x613;eip=0x0024ed; 	X(PUSH(ax));	// 12268 push    ax ;~ 0613:24ED
cs=0x613;eip=0x0024ee; 	R(CALLF(multiply_and_scale,0));	// 12269 call    multiply_and_scale ;~ 0613:24EE
cs=0x613;eip=0x0024f3; 	T(ADD(sp, 4));	// 12270 add     sp, 4 ;~ 0613:24F3
cs=0x613;eip=0x0024f6; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 12271 add     ax, [bp+var_A] ;~ 0613:24F6
cs=0x613;eip=0x0024f9; 	T(MOV(cx, ax));	// 12272 mov     cx, ax ;~ 0613:24F9
cs=0x613;eip=0x0024fb; 	T(MOV(al, startcol2));	// 12273 mov     al, startcol2 ;~ 0613:24FB
cs=0x613;eip=0x0024fe; 	T(CBW);	// 12274 cbw ;~ 0613:24FE
cs=0x613;eip=0x0024ff; 	T(MOV(dx, cx));	// 12275 mov     dx, cx ;~ 0613:24FF
cs=0x613;eip=0x002501; 	T(MOV(cl, 0x0A));	// 12276 mov     cl, 0Ah ;~ 0613:2501
cs=0x613;eip=0x002503; 	T(SHL(ax, cl));	// 12277 shl     ax, cl ;~ 0613:2503
cs=0x613;eip=0x002505; 	T(ADD(dx, ax));	// 12278 add     dx, ax ;~ 0613:2505
cs=0x613;eip=0x002507; 	X(MOV(word_445b4, dx));	// 12279 mov     word_445B4, dx ;~ 0613:2507
cs=0x613;eip=0x00250b; 	T(MOV(al, hillflag));	// 12280 mov     al, hillFlag ;~ 0613:250B
cs=0x613;eip=0x00250e; 	T(CBW);	// 12281 cbw ;~ 0613:250E
cs=0x613;eip=0x00250f; 	T(MOV(bx, ax));	// 12282 mov     bx, ax ;~ 0613:250F
cs=0x613;eip=0x002511; 	T(SHL(bx, 1));	// 12283 shl     bx, 1 ;~ 0613:2511
cs=0x613;eip=0x002513; 	T(MOV(ax, *(dw*)(((db*)hillheightconsts)+bx)));	// 12284 mov     ax, hillHeightConsts[bx] ;~ 0613:2513
cs=0x613;eip=0x002517; 	T(ADD(ax, 0x3C0));	// 12285 add     ax, 3C0h ;~ 0613:2517
cs=0x613;eip=0x00251a; 	X(MOV(word_445b6, ax));	// 12286 mov     word_445B6, ax ;~ 0613:251A
cs=0x613;eip=0x00251d; 	T(MOV(ax, 0x200));	// 12287 mov     ax, 200h ;~ 0613:251D
cs=0x613;eip=0x002520; 	X(PUSH(ax));	// 12288 push    ax ;~ 0613:2520
cs=0x613;eip=0x002521; 	T(MOV(ax, track_angle));	// 12289 mov     ax, track_angle ;~ 0613:2521
cs=0x613;eip=0x002524; 	T(ADD(ah, 3));	// 12290 add     ah, 3 ;~ 0613:2524
cs=0x613;eip=0x002527; 	X(PUSH(ax));	// 12291 push    ax ;~ 0613:2527
cs=0x613;eip=0x002528; 	R(CALLF(cos_fast,0));	// 12292 call    cos_fast ;~ 0613:2528
cs=0x613;eip=0x00252d; 	T(ADD(sp, 2));	// 12293 add     sp, 2 ;~ 0613:252D
cs=0x613;eip=0x002530; 	X(PUSH(ax));	// 12294 push    ax ;~ 0613:2530
cs=0x613;eip=0x002531; 	R(CALLF(multiply_and_scale,0));	// 12295 call    multiply_and_scale ;~ 0613:2531
cs=0x613;eip=0x002536; 	T(ADD(sp, 4));	// 12296 add     sp, 4 ;~ 0613:2536
cs=0x613;eip=0x002539; 	T(MOV(cx, 0x1000));	// 12297 mov     cx, 1000h ;~ 0613:2539
cs=0x613;eip=0x00253c; 	X(PUSH(cx));	// 12298 push    cx ;~ 0613:253C
cs=0x613;eip=0x00253d; 	T(MOV(cx, track_angle));	// 12299 mov     cx, track_angle ;~ 0613:253D
cs=0x613;eip=0x002541; 	T(ADD(ch, 2));	// 12300 add     ch, 2 ;~ 0613:2541
cs=0x613;eip=0x002544; 	X(PUSH(cx));	// 12301 push    cx ;~ 0613:2544
cs=0x613;eip=0x002545; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 12302 mov     [bp+var_A], ax ;~ 0613:2545
cs=0x613;eip=0x002548; 	R(CALLF(cos_fast,0));	// 12303 call    cos_fast ;~ 0613:2548
cs=0x613;eip=0x00254d; 	T(ADD(sp, 2));	// 12304 add     sp, 2 ;~ 0613:254D
cs=0x613;eip=0x002550; 	X(PUSH(ax));	// 12305 push    ax ;~ 0613:2550
cs=0x613;eip=0x002551; 	R(CALLF(multiply_and_scale,0));	// 12306 call    multiply_and_scale ;~ 0613:2551
cs=0x613;eip=0x002556; 	T(ADD(sp, 4));	// 12307 add     sp, 4 ;~ 0613:2556
cs=0x613;eip=0x002559; 	T(MOV(cx, ax));	// 12308 mov     cx, ax ;~ 0613:2559
cs=0x613;eip=0x00255b; 	T(MOV(al, startrow2));	// 12309 mov     al, startrow2 ;~ 0613:255B
cs=0x613;eip=0x00255e; 	T(CBW);	// 12310 cbw ;~ 0613:255E
cs=0x613;eip=0x00255f; 	T(MOV(bx, ax));	// 12311 mov     bx, ax ;~ 0613:255F
cs=0x613;eip=0x002561; 	T(SHL(bx, 1));	// 12312 shl     bx, 1 ;~ 0613:2561
cs=0x613;eip=0x002563; 	T(ADD(cx, *(dw*)(((db*)&trackpos)+bx)));	// 12313 add     cx, trackpos[bx] ;~ 0613:2563
cs=0x613;eip=0x002567; 	T(ADD(cx, *(dw*)(raddr(ss,bp+var_a))));	// 12314 add     cx, [bp+var_A] ;~ 0613:2567
cs=0x613;eip=0x00256a; 	X(MOV(word_445b8, cx));	// 12315 mov     word_445B8, cx ;~ 0613:256A
cs=0x613;eip=0x00256e; 	X(PUSH(si));	// 12316 push    si ;~ 0613:256E
cs=0x613;eip=0x00256f; 	X(PUSH(di));	// 12317 push    di ;~ 0613:256F
cs=0x613;eip=0x002570; 	T(MOV(di, offset(dseg,unk_445ba)));	// 12318 mov     di, offset unk_445BA ;~ 0613:2570
cs=0x613;eip=0x002573; 	T(MOV(si, offset(dseg,word_445b4)));	// 12319 mov     si, offset word_445B4 ;~ 0613:2573
cs=0x613;eip=0x002576; 	X(PUSH(ds));	// 12320 push    ds ;~ 0613:2576
cs=0x613;eip=0x002577; 	X(POP(es));	// 12321 pop     es ;~ 0613:2577
cs=0x613;eip=0x002578; 	X(MOVSW);	// 12323 movsw ;~ 0613:2578
cs=0x613;eip=0x002579; 	X(MOVSW);	// 12324 movsw ;~ 0613:2579
cs=0x613;eip=0x00257a; 	X(MOVSW);	// 12325 movsw ;~ 0613:257A
cs=0x613;eip=0x00257b; 	X(POP(di));	// 12326 pop     di ;~ 0613:257B
cs=0x613;eip=0x00257c; 	X(POP(si));	// 12327 pop     si ;~ 0613:257C
cs=0x613;eip=0x00257d; 	X(PUSH(si));	// 12328 push    si ;~ 0613:257D
cs=0x613;eip=0x00257e; 	X(PUSH(di));	// 12329 push    di ;~ 0613:257E
cs=0x613;eip=0x00257f; 	T(MOV(di, offset(dseg,unk_445c0)));	// 12330 mov     di, offset unk_445C0 ;~ 0613:257F
cs=0x613;eip=0x002582; 	T(MOV(si, offset(dseg,word_445b4)));	// 12331 mov     si, offset word_445B4 ;~ 0613:2582
cs=0x613;eip=0x002585; 	X(MOVSW);	// 12332 movsw ;~ 0613:2585
cs=0x613;eip=0x002586; 	X(MOVSW);	// 12333 movsw ;~ 0613:2586
cs=0x613;eip=0x002587; 	X(MOVSW);	// 12334 movsw ;~ 0613:2587
cs=0x613;eip=0x002588; 	X(POP(di));	// 12335 pop     di ;~ 0613:2588
cs=0x613;eip=0x002589; 	X(POP(si));	// 12336 pop     si ;~ 0613:2589
cs=0x613;eip=0x00258a; 	X(PUSH(si));	// 12337 push    si ;~ 0613:258A
cs=0x613;eip=0x00258b; 	X(PUSH(di));	// 12338 push    di ;~ 0613:258B
cs=0x613;eip=0x00258c; 	T(MOV(di, offset(dseg,unk_445c6)));	// 12339 mov     di, offset unk_445C6 ;~ 0613:258C
cs=0x613;eip=0x00258f; 	T(MOV(si, offset(dseg,word_445b4)));	// 12340 mov     si, offset word_445B4 ;~ 0613:258F
cs=0x613;eip=0x002592; 	X(MOVSW);	// 12341 movsw ;~ 0613:2592
cs=0x613;eip=0x002593; 	X(MOVSW);	// 12342 movsw ;~ 0613:2593
cs=0x613;eip=0x002594; 	X(MOVSW);	// 12343 movsw ;~ 0613:2594
cs=0x613;eip=0x002595; 	X(POP(di));	// 12344 pop     di ;~ 0613:2595
cs=0x613;eip=0x002596; 	X(POP(si));	// 12345 pop     si ;~ 0613:2596
cs=0x613;eip=0x002597; 	T(SUB(ax, ax));	// 12346 sub     ax, ax ;~ 0613:2597
cs=0x613;eip=0x002599; 	X(MOV(word_445d2, ax));	// 12347 mov     word_445D2, ax ;~ 0613:2599
cs=0x613;eip=0x00259c; 	X(MOV(word_445d0, ax));	// 12348 mov     word_445D0, ax ;~ 0613:259C
cs=0x613;eip=0x00259f; 	X(MOV(word_445d4, si));	// 12349 mov     word_445D4, si ;~ 0613:259F
cs=0x613;eip=0x0025a3; 	X(MOV(word_445d6, si));	// 12350 mov     word_445D6, si ;~ 0613:25A3
cs=0x613;eip=0x0025a7; 	X(MOV(word_445d8, si));	// 12351 mov     word_445D8, si ;~ 0613:25A7
cs=0x613;eip=0x0025ab; 	X(MOV(word_445da, si));	// 12352 mov     word_445DA, si ;~ 0613:25AB
cs=0x613;eip=0x0025af; 	X(MOV(word_445dc, si));	// 12353 mov     word_445DC, si ;~ 0613:25AF
cs=0x613;eip=0x0025b3; 	X(MOV(word_445de, si));	// 12354 mov     word_445DE, si ;~ 0613:25B3
cs=0x613;eip=0x0025b7; 	X(MOV(word_445e0, si));	// 12355 mov     word_445E0, si ;~ 0613:25B7
cs=0x613;eip=0x0025bb; 	X(MOV(word_445e2, si));	// 12356 mov     word_445E2, si ;~ 0613:25BB
cs=0x613;eip=0x0025bf; 	X(MOV(word_445e4, si));	// 12357 mov     word_445E4, si ;~ 0613:25BF
cs=0x613;eip=0x0025c3; 	T(MOV(ax, 0x0D2));	// 12358 mov     ax, 0D2h ; 'Ò' ;~ 0613:25C3
cs=0x613;eip=0x0025c6; 	X(PUSH(ax));	// 12359 push    ax ;~ 0613:25C6
cs=0x613;eip=0x0025c7; 	T(MOV(ax, track_angle));	// 12360 mov     ax, track_angle ;~ 0613:25C7
cs=0x613;eip=0x0025ca; 	T(ADD(ah, 2));	// 12361 add     ah, 2 ;~ 0613:25CA
cs=0x613;eip=0x0025cd; 	X(PUSH(ax));	// 12362 push    ax ;~ 0613:25CD
cs=0x613;eip=0x0025ce; 	R(CALLF(sin_fast,0));	// 12363 call    sin_fast ;~ 0613:25CE
cs=0x613;eip=0x0025d3; 	T(ADD(sp, 2));	// 12364 add     sp, 2 ;~ 0613:25D3
cs=0x613;eip=0x0025d6; 	X(PUSH(ax));	// 12365 push    ax ;~ 0613:25D6
cs=0x613;eip=0x0025d7; 	R(CALLF(multiply_and_scale,0));	// 12366 call    multiply_and_scale ;~ 0613:25D7
cs=0x613;eip=0x0025dc; 	T(ADD(sp, 4));	// 12367 add     sp, 4 ;~ 0613:25DC
cs=0x613;eip=0x0025df; 	T(MOV(cx, 0x24));	// 12368 mov     cx, 24h ; '$' ;~ 0613:25DF
cs=0x613;eip=0x0025e2; 	X(PUSH(cx));	// 12369 push    cx ;~ 0613:25E2
cs=0x613;eip=0x0025e3; 	T(MOV(cx, track_angle));	// 12370 mov     cx, track_angle ;~ 0613:25E3
cs=0x613;eip=0x0025e7; 	T(ADD(ch, 1));	// 12371 add     ch, 1 ;~ 0613:25E7
cs=0x613;eip=0x0025ea; 	X(PUSH(cx));	// 12372 push    cx ;~ 0613:25EA
cs=0x613;eip=0x0025eb; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 12373 mov     [bp+var_A], ax ;~ 0613:25EB
cs=0x613;eip=0x0025ee; 	R(CALLF(sin_fast,0));	// 12374 call    sin_fast ;~ 0613:25EE
cs=0x613;eip=0x0025f3; 	T(ADD(sp, 2));	// 12375 add     sp, 2 ;~ 0613:25F3
cs=0x613;eip=0x0025f6; 	X(PUSH(ax));	// 12376 push    ax ;~ 0613:25F6
cs=0x613;eip=0x0025f7; 	R(CALLF(multiply_and_scale,0));	// 12377 call    multiply_and_scale ;~ 0613:25F7
cs=0x613;eip=0x0025fc; 	T(ADD(sp, 4));	// 12378 add     sp, 4 ;~ 0613:25FC
cs=0x613;eip=0x0025ff; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 12379 add     ax, [bp+var_A] ;~ 0613:25FF
cs=0x613;eip=0x002602; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12380 mov     [bp+var_8], ax ;~ 0613:2602
cs=0x613;eip=0x002605; 	T(MOV(ax, 0x0D2));	// 12381 mov     ax, 0D2h ; 'Ò' ;~ 0613:2605
cs=0x613;eip=0x002608; 	X(PUSH(ax));	// 12382 push    ax ;~ 0613:2608
cs=0x613;eip=0x002609; 	T(MOV(ax, track_angle));	// 12383 mov     ax, track_angle ;~ 0613:2609
cs=0x613;eip=0x00260c; 	T(ADD(ah, 2));	// 12384 add     ah, 2 ;~ 0613:260C
cs=0x613;eip=0x00260f; 	X(PUSH(ax));	// 12385 push    ax ;~ 0613:260F
cs=0x613;eip=0x002610; 	R(CALLF(cos_fast,0));	// 12386 call    cos_fast ;~ 0613:2610
cs=0x613;eip=0x002615; 	T(ADD(sp, 2));	// 12387 add     sp, 2 ;~ 0613:2615
cs=0x613;eip=0x002618; 	X(PUSH(ax));	// 12388 push    ax ;~ 0613:2618
cs=0x613;eip=0x002619; 	R(CALLF(multiply_and_scale,0));	// 12389 call    multiply_and_scale ;~ 0613:2619
cs=0x613;eip=0x00261e; 	T(ADD(sp, 4));	// 12390 add     sp, 4 ;~ 0613:261E
cs=0x613;eip=0x002621; 	T(MOV(cx, 0x24));	// 12391 mov     cx, 24h ; '$' ;~ 0613:2621
cs=0x613;eip=0x002624; 	X(PUSH(cx));	// 12392 push    cx ;~ 0613:2624
cs=0x613;eip=0x002625; 	T(MOV(cx, track_angle));	// 12393 mov     cx, track_angle ;~ 0613:2625
cs=0x613;eip=0x002629; 	T(ADD(ch, 1));	// 12394 add     ch, 1 ;~ 0613:2629
cs=0x613;eip=0x00262c; 	X(PUSH(cx));	// 12395 push    cx ;~ 0613:262C
cs=0x613;eip=0x00262d; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 12396 mov     [bp+var_A], ax ;~ 0613:262D
cs=0x613;eip=0x002630; 	R(CALLF(cos_fast,0));	// 12397 call    cos_fast ;~ 0613:2630
cs=0x613;eip=0x002635; 	T(ADD(sp, 2));	// 12398 add     sp, 2 ;~ 0613:2635
cs=0x613;eip=0x002638; 	X(PUSH(ax));	// 12399 push    ax ;~ 0613:2638
cs=0x613;eip=0x002639; 	R(CALLF(multiply_and_scale,0));	// 12400 call    multiply_and_scale ;~ 0613:2639
cs=0x613;eip=0x00263e; 	T(ADD(sp, 4));	// 12401 add     sp, 4 ;~ 0613:263E
cs=0x613;eip=0x002641; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 12402 add     ax, [bp+var_A] ;~ 0613:2641
cs=0x613;eip=0x002644; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 12403 mov     [bp+var_2], ax ;~ 0613:2644
cs=0x613;eip=0x002647; 	T(MOV(ax, track_angle));	// 12404 mov     ax, track_angle ;~ 0613:2647
cs=0x613;eip=0x00264a; 	T(NEG(ax));	// 12405 neg     ax ;~ 0613:264A
cs=0x613;eip=0x00264c; 	X(PUSH(ax));	// 12406 push    ax ;~ 0613:264C
cs=0x613;eip=0x00264d; 	T(MOV(al, startrow2));	// 12407 mov     al, startrow2 ;~ 0613:264D
cs=0x613;eip=0x002650; 	T(CBW);	// 12408 cbw ;~ 0613:2650
cs=0x613;eip=0x002651; 	T(MOV(bx, ax));	// 12409 mov     bx, ax ;~ 0613:2651
cs=0x613;eip=0x002653; 	T(SHL(bx, 1));	// 12410 shl     bx, 1 ;~ 0613:2653
cs=0x613;eip=0x002655; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 12411 mov     ax, trackcenterpos[bx] ;~ 0613:2655
cs=0x613;eip=0x002659; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2))));	// 12412 add     ax, [bp+var_2] ;~ 0613:2659
cs=0x613;eip=0x00265c; 	T(CWD);	// 12413 cwd ;~ 0613:265C
cs=0x613;eip=0x00265d; 	T(MOV(cl, 6));	// 12414 mov     cl, 6 ;~ 0613:265D
loc_16d6f:
	// 5051 
cs=0x613;eip=0x00265f; 	T(SHL(ax, 1));	// 12417 shl     ax, 1 ;~ 0613:265F
cs=0x613;eip=0x002661; 	T(RCL(dx, 1));	// 12418 rcl     dx, 1 ;~ 0613:2661
cs=0x613;eip=0x002663; 	T(DEC(cl));	// 12419 dec     cl ;~ 0613:2663
cs=0x613;eip=0x002665; 	R(JNZ(loc_16d6f));	// 12420 jnz     short loc_16D6F ;~ 0613:2665
cs=0x613;eip=0x002667; 	X(PUSH(dx));	// 12421 push    dx ;~ 0613:2667
cs=0x613;eip=0x002668; 	X(PUSH(ax));	// 12422 push    ax ;~ 0613:2668
cs=0x613;eip=0x002669; 	T(MOV(al, hillflag));	// 12423 mov     al, hillFlag ;~ 0613:2669
cs=0x613;eip=0x00266c; 	T(CBW);	// 12424 cbw ;~ 0613:266C
cs=0x613;eip=0x00266d; 	T(MOV(bx, ax));	// 12425 mov     bx, ax ;~ 0613:266D
cs=0x613;eip=0x00266f; 	T(SHL(bx, 1));	// 12426 shl     bx, 1 ;~ 0613:266F
cs=0x613;eip=0x002671; 	T(MOV(ax, *(dw*)(((db*)hillheightconsts)+bx)));	// 12427 mov     ax, hillHeightConsts[bx] ;~ 0613:2671
cs=0x613;eip=0x002675; 	T(CWD);	// 12428 cwd ;~ 0613:2675
cs=0x613;eip=0x002676; 	T(MOV(cl, 6));	// 12429 mov     cl, 6 ;~ 0613:2676
loc_16d88:
	// 5052 
cs=0x613;eip=0x002678; 	T(SHL(ax, 1));	// 12432 shl     ax, 1 ;~ 0613:2678
cs=0x613;eip=0x00267a; 	T(RCL(dx, 1));	// 12433 rcl     dx, 1 ;~ 0613:267A
cs=0x613;eip=0x00267c; 	T(DEC(cl));	// 12434 dec     cl ;~ 0613:267C
cs=0x613;eip=0x00267e; 	R(JNZ(loc_16d88));	// 12435 jnz     short loc_16D88 ;~ 0613:267E
cs=0x613;eip=0x002680; 	X(PUSH(dx));	// 12436 push    dx ;~ 0613:2680
cs=0x613;eip=0x002681; 	X(PUSH(ax));	// 12437 push    ax ;~ 0613:2681
cs=0x613;eip=0x002682; 	T(MOV(al, startcol2));	// 12438 mov     al, startcol2 ;~ 0613:2682
cs=0x613;eip=0x002685; 	T(CBW);	// 12439 cbw ;~ 0613:2685
cs=0x613;eip=0x002686; 	T(MOV(bx, ax));	// 12440 mov     bx, ax ;~ 0613:2686
cs=0x613;eip=0x002688; 	T(SHL(bx, 1));	// 12441 shl     bx, 1 ;~ 0613:2688
cs=0x613;eip=0x00268a; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 12442 mov     ax, trackcenterpos2[bx] ;~ 0613:268A
cs=0x613;eip=0x00268e; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_8))));	// 12443 add     ax, [bp+var_8] ;~ 0613:268E
cs=0x613;eip=0x002691; 	T(CWD);	// 12444 cwd ;~ 0613:2691
cs=0x613;eip=0x002692; 	T(MOV(cl, 6));	// 12445 mov     cl, 6 ;~ 0613:2692
loc_16da4:
	// 5053 
cs=0x613;eip=0x002694; 	T(SHL(ax, 1));	// 12448 shl     ax, 1 ;~ 0613:2694
cs=0x613;eip=0x002696; 	T(RCL(dx, 1));	// 12449 rcl     dx, 1 ;~ 0613:2696
cs=0x613;eip=0x002698; 	T(DEC(cl));	// 12450 dec     cl ;~ 0613:2698
cs=0x613;eip=0x00269a; 	R(JNZ(loc_16da4));	// 12451 jnz     short loc_16DA4 ;~ 0613:269A
cs=0x613;eip=0x00269c; 	X(PUSH(dx));	// 12452 push    dx ;~ 0613:269C
cs=0x613;eip=0x00269d; 	X(PUSH(ax));	// 12453 push    ax ;~ 0613:269D
cs=0x613;eip=0x00269e; 	T(MOV(al, byte_449a9));	// 12454 mov     al, byte_449A9 ;~ 0613:269E
cs=0x613;eip=0x0026a1; 	T(CBW);	// 12455 cbw ;~ 0613:26A1
cs=0x613;eip=0x0026a2; 	X(PUSH(ax));	// 12456 push    ax ;~ 0613:26A2
cs=0x613;eip=0x0026a3; 	T(MOV(ax, offset(dseg,simd_player)));	// 12457 mov     ax, offset simd_player ; dseg: simd_copy ;~ 0613:26A3
cs=0x613;eip=0x0026a6; 	X(PUSH(ax));	// 12458 push    ax ;~ 0613:26A6
cs=0x613;eip=0x0026a7; 	T(MOV(ax, offset(dseg,word_445e6)));	// 12459 mov     ax, offset word_445E6 ; dseg: state.playerstate ;~ 0613:26A7
cs=0x613;eip=0x0026aa; 	X(PUSH(ax));	// 12460 push    ax ;~ 0613:26AA
cs=0x613;eip=0x0026ab; 	X(PUSH(cs));	// 12461 push    cs ;~ 0613:26AB
cs=0x613;eip=0x0026ac; 	R(CALL(init_carstate_from_simd,0));	// 12462 call    near ptr init_carstate_from_simd ;~ 0613:26AC
cs=0x613;eip=0x0026af; 	T(ADD(sp, 0x14));	// 12463 add     sp, 14h ;~ 0613:26AF
cs=0x613;eip=0x0026b2; 	X(MOV(word_44786, si));	// 12464 mov     word_44786, si ;~ 0613:26B2
cs=0x613;eip=0x0026b6; 	T(MOV(ax, si));	// 12465 mov     ax, si ;~ 0613:26B6
cs=0x613;eip=0x0026b8; 	X(MOV(byte_448f1, al));	// 12466 mov     byte_448F1, al ;~ 0613:26B8
cs=0x613;eip=0x0026bb; 	X(MOV(byte_448f2, al));	// 12467 mov     byte_448F2, al ;~ 0613:26BB
cs=0x613;eip=0x0026be; 	X(MOV(byte_448ef, al));	// 12468 mov     byte_448EF, al ;~ 0613:26BE
cs=0x613;eip=0x0026c1; 	X(MOV(byte_448f0, al));	// 12469 mov     byte_448F0, al ;~ 0613:26C1
cs=0x613;eip=0x0026c4; 	T(MOV(al, startcol2));	// 12470 mov     al, startcol2 ;~ 0613:26C4
cs=0x613;eip=0x0026c7; 	T(CBW);	// 12471 cbw ;~ 0613:26C7
cs=0x613;eip=0x0026c8; 	X(MOV(word_4478a, ax));	// 12472 mov     word_4478A, ax ;~ 0613:26C8
cs=0x613;eip=0x0026cb; 	X(MOV(word_4478c, ax));	// 12473 mov     word_4478C, ax ;~ 0613:26CB
cs=0x613;eip=0x0026ce; 	T(MOV(al, startrow2));	// 12474 mov     al, startrow2 ;~ 0613:26CE
cs=0x613;eip=0x0026d1; 	T(CBW);	// 12475 cbw ;~ 0613:26D1
cs=0x613;eip=0x0026d2; 	X(MOV(word_4478e, ax));	// 12476 mov     word_4478E, ax ;~ 0613:26D2
cs=0x613;eip=0x0026d5; 	X(MOV(word_44790, ax));	// 12477 mov     word_44790, ax ;~ 0613:26D5
cs=0x613;eip=0x0026d8; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FFFE));	// 12478 cmp     [bp+arg_0], 0FFFEh ;~ 0613:26D8
cs=0x613;eip=0x0026dc; 	R(JZ(loc_16e0a));	// 12479 jz      short loc_16E0A ;~ 0613:26DC
cs=0x613;eip=0x0026de; 	T(SUB(ax, ax));	// 12480 sub     ax, ax ;~ 0613:26DE
cs=0x613;eip=0x0026e0; 	X(PUSH(ax));	// 12481 push    ax ;~ 0613:26E0
cs=0x613;eip=0x0026e1; 	T(MOV(al, byte_446b4));	// 12482 mov     al, byte_446B4 ;~ 0613:26E1
cs=0x613;eip=0x0026e4; 	X(INC(byte_446b4));	// 12483 inc     byte_446B4 ;~ 0613:26E4
cs=0x613;eip=0x0026e8; 	T(SUB(ah, ah));	// 12484 sub     ah, ah ;~ 0613:26E8
cs=0x613;eip=0x0026ea; 	X(PUSH(ax));	// 12485 push    ax ;~ 0613:26EA
cs=0x613;eip=0x0026eb; 	T(MOV(ax, offset(dseg,word_4468a)));	// 12486 mov     ax, offset word_4468A ;~ 0613:26EB
cs=0x613;eip=0x0026ee; 	X(PUSH(ax));	// 12487 push    ax ;~ 0613:26EE
cs=0x613;eip=0x0026ef; 	X(PUSH(word_44630));	// 12488 push    word_44630 ;~ 0613:26EF
cs=0x613;eip=0x0026f3; 	X(PUSH(cs));	// 12489 push    cs ;~ 0613:26F3
cs=0x613;eip=0x0026f4; 	R(CALL(sub_18d60,0));	// 12490 call    near ptr sub_18D60 ;~ 0613:26F4
cs=0x613;eip=0x0026f7; 	T(ADD(sp, 8));	// 12491 add     sp, 8 ;~ 0613:26F7
loc_16e0a:
	// 5054 
cs=0x613;eip=0x0026fa; 	T(MOV(ax, 0x0D2));	// 12494 mov     ax, 0D2h ; 'Ò' ;~ 0613:26FA
cs=0x613;eip=0x0026fd; 	X(PUSH(ax));	// 12495 push    ax ;~ 0613:26FD
cs=0x613;eip=0x0026fe; 	T(MOV(ax, track_angle));	// 12496 mov     ax, track_angle ;~ 0613:26FE
cs=0x613;eip=0x002701; 	T(ADD(ah, 2));	// 12497 add     ah, 2 ;~ 0613:2701
cs=0x613;eip=0x002704; 	X(PUSH(ax));	// 12498 push    ax ;~ 0613:2704
cs=0x613;eip=0x002705; 	R(CALLF(sin_fast,0));	// 12499 call    sin_fast ;~ 0613:2705
cs=0x613;eip=0x00270a; 	T(ADD(sp, 2));	// 12500 add     sp, 2 ;~ 0613:270A
cs=0x613;eip=0x00270d; 	X(PUSH(ax));	// 12501 push    ax ;~ 0613:270D
cs=0x613;eip=0x00270e; 	R(CALLF(multiply_and_scale,0));	// 12502 call    multiply_and_scale ;~ 0613:270E
cs=0x613;eip=0x002713; 	T(ADD(sp, 4));	// 12503 add     sp, 4 ;~ 0613:2713
cs=0x613;eip=0x002716; 	T(MOV(cx, 0x24));	// 12504 mov     cx, 24h ; '$' ;~ 0613:2716
cs=0x613;eip=0x002719; 	X(PUSH(cx));	// 12505 push    cx ;~ 0613:2719
cs=0x613;eip=0x00271a; 	T(MOV(cx, track_angle));	// 12506 mov     cx, track_angle ;~ 0613:271A
cs=0x613;eip=0x00271e; 	T(ADD(ch, 3));	// 12507 add     ch, 3 ;~ 0613:271E
cs=0x613;eip=0x002721; 	X(PUSH(cx));	// 12508 push    cx ;~ 0613:2721
cs=0x613;eip=0x002722; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 12509 mov     [bp+var_A], ax ;~ 0613:2722
cs=0x613;eip=0x002725; 	R(CALLF(sin_fast,0));	// 12510 call    sin_fast ;~ 0613:2725
cs=0x613;eip=0x00272a; 	T(ADD(sp, 2));	// 12511 add     sp, 2 ;~ 0613:272A
cs=0x613;eip=0x00272d; 	X(PUSH(ax));	// 12512 push    ax ;~ 0613:272D
cs=0x613;eip=0x00272e; 	R(CALLF(multiply_and_scale,0));	// 12513 call    multiply_and_scale ;~ 0613:272E
cs=0x613;eip=0x002733; 	T(ADD(sp, 4));	// 12514 add     sp, 4 ;~ 0613:2733
cs=0x613;eip=0x002736; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 12515 add     ax, [bp+var_A] ;~ 0613:2736
cs=0x613;eip=0x002739; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 12516 mov     [bp+var_8], ax ;~ 0613:2739
cs=0x613;eip=0x00273c; 	T(MOV(ax, 0x0D2));	// 12517 mov     ax, 0D2h ; 'Ò' ;~ 0613:273C
cs=0x613;eip=0x00273f; 	X(PUSH(ax));	// 12518 push    ax ;~ 0613:273F
cs=0x613;eip=0x002740; 	T(MOV(ax, track_angle));	// 12519 mov     ax, track_angle ;~ 0613:2740
cs=0x613;eip=0x002743; 	T(ADD(ah, 2));	// 12520 add     ah, 2 ;~ 0613:2743
cs=0x613;eip=0x002746; 	X(PUSH(ax));	// 12521 push    ax ;~ 0613:2746
cs=0x613;eip=0x002747; 	R(CALLF(cos_fast,0));	// 12522 call    cos_fast ;~ 0613:2747
cs=0x613;eip=0x00274c; 	T(ADD(sp, 2));	// 12523 add     sp, 2 ;~ 0613:274C
cs=0x613;eip=0x00274f; 	X(PUSH(ax));	// 12524 push    ax ;~ 0613:274F
cs=0x613;eip=0x002750; 	R(CALLF(multiply_and_scale,0));	// 12525 call    multiply_and_scale ;~ 0613:2750
cs=0x613;eip=0x002755; 	T(ADD(sp, 4));	// 12526 add     sp, 4 ;~ 0613:2755
cs=0x613;eip=0x002758; 	T(MOV(cx, 0x24));	// 12527 mov     cx, 24h ; '$' ;~ 0613:2758
cs=0x613;eip=0x00275b; 	X(PUSH(cx));	// 12528 push    cx ;~ 0613:275B
cs=0x613;eip=0x00275c; 	T(MOV(cx, track_angle));	// 12529 mov     cx, track_angle ;~ 0613:275C
cs=0x613;eip=0x002760; 	T(ADD(ch, 3));	// 12530 add     ch, 3 ;~ 0613:2760
cs=0x613;eip=0x002763; 	X(PUSH(cx));	// 12531 push    cx ;~ 0613:2763
cs=0x613;eip=0x002764; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 12532 mov     [bp+var_A], ax ;~ 0613:2764
cs=0x613;eip=0x002767; 	R(CALLF(cos_fast,0));	// 12533 call    cos_fast ;~ 0613:2767
cs=0x613;eip=0x00276c; 	T(ADD(sp, 2));	// 12534 add     sp, 2 ;~ 0613:276C
cs=0x613;eip=0x00276f; 	X(PUSH(ax));	// 12535 push    ax ;~ 0613:276F
cs=0x613;eip=0x002770; 	R(CALLF(multiply_and_scale,0));	// 12536 call    multiply_and_scale ;~ 0613:2770
cs=0x613;eip=0x002775; 	T(ADD(sp, 4));	// 12537 add     sp, 4 ;~ 0613:2775
cs=0x613;eip=0x002778; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 12538 add     ax, [bp+var_A] ;~ 0613:2778
cs=0x613;eip=0x00277b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 12539 mov     [bp+var_2], ax ;~ 0613:277B
cs=0x613;eip=0x00277e; 	T(MOV(ax, track_angle));	// 12540 mov     ax, track_angle ;~ 0613:277E
cs=0x613;eip=0x002781; 	T(NEG(ax));	// 12541 neg     ax ;~ 0613:2781
cs=0x613;eip=0x002783; 	X(PUSH(ax));	// 12542 push    ax ;~ 0613:2783
cs=0x613;eip=0x002784; 	T(MOV(al, startrow2));	// 12543 mov     al, startrow2 ;~ 0613:2784
cs=0x613;eip=0x002787; 	T(CBW);	// 12544 cbw ;~ 0613:2787
cs=0x613;eip=0x002788; 	T(MOV(bx, ax));	// 12545 mov     bx, ax ;~ 0613:2788
cs=0x613;eip=0x00278a; 	T(SHL(bx, 1));	// 12546 shl     bx, 1 ;~ 0613:278A
cs=0x613;eip=0x00278c; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 12547 mov     ax, trackcenterpos[bx] ;~ 0613:278C
cs=0x613;eip=0x002790; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2))));	// 12548 add     ax, [bp+var_2] ;~ 0613:2790
cs=0x613;eip=0x002793; 	T(CWD);	// 12549 cwd ;~ 0613:2793
cs=0x613;eip=0x002794; 	T(MOV(cl, 6));	// 12550 mov     cl, 6 ;~ 0613:2794
loc_16ea6:
	// 5055 
cs=0x613;eip=0x002796; 	T(SHL(ax, 1));	// 12553 shl     ax, 1 ;~ 0613:2796
cs=0x613;eip=0x002798; 	T(RCL(dx, 1));	// 12554 rcl     dx, 1 ;~ 0613:2798
cs=0x613;eip=0x00279a; 	T(DEC(cl));	// 12555 dec     cl ;~ 0613:279A
cs=0x613;eip=0x00279c; 	R(JNZ(loc_16ea6));	// 12556 jnz     short loc_16EA6 ;~ 0613:279C
cs=0x613;eip=0x00279e; 	X(PUSH(dx));	// 12557 push    dx ;~ 0613:279E
cs=0x613;eip=0x00279f; 	X(PUSH(ax));	// 12558 push    ax ;~ 0613:279F
cs=0x613;eip=0x0027a0; 	T(MOV(al, hillflag));	// 12559 mov     al, hillFlag ;~ 0613:27A0
cs=0x613;eip=0x0027a3; 	T(CBW);	// 12560 cbw ;~ 0613:27A3
cs=0x613;eip=0x0027a4; 	T(MOV(bx, ax));	// 12561 mov     bx, ax ;~ 0613:27A4
cs=0x613;eip=0x0027a6; 	T(SHL(bx, 1));	// 12562 shl     bx, 1 ;~ 0613:27A6
cs=0x613;eip=0x0027a8; 	T(MOV(ax, *(dw*)(((db*)hillheightconsts)+bx)));	// 12563 mov     ax, hillHeightConsts[bx] ;~ 0613:27A8
cs=0x613;eip=0x0027ac; 	T(CWD);	// 12564 cwd ;~ 0613:27AC
cs=0x613;eip=0x0027ad; 	T(MOV(cl, 6));	// 12565 mov     cl, 6 ;~ 0613:27AD
loc_16ebf:
	// 5056 
cs=0x613;eip=0x0027af; 	T(SHL(ax, 1));	// 12568 shl     ax, 1 ;~ 0613:27AF
cs=0x613;eip=0x0027b1; 	T(RCL(dx, 1));	// 12569 rcl     dx, 1 ;~ 0613:27B1
cs=0x613;eip=0x0027b3; 	T(DEC(cl));	// 12570 dec     cl ;~ 0613:27B3
cs=0x613;eip=0x0027b5; 	R(JNZ(loc_16ebf));	// 12571 jnz     short loc_16EBF ;~ 0613:27B5
cs=0x613;eip=0x0027b7; 	X(PUSH(dx));	// 12572 push    dx ;~ 0613:27B7
cs=0x613;eip=0x0027b8; 	X(PUSH(ax));	// 12573 push    ax ;~ 0613:27B8
cs=0x613;eip=0x0027b9; 	T(MOV(al, startcol2));	// 12574 mov     al, startcol2 ;~ 0613:27B9
cs=0x613;eip=0x0027bc; 	T(CBW);	// 12575 cbw ;~ 0613:27BC
cs=0x613;eip=0x0027bd; 	T(MOV(bx, ax));	// 12576 mov     bx, ax ;~ 0613:27BD
cs=0x613;eip=0x0027bf; 	T(SHL(bx, 1));	// 12577 shl     bx, 1 ;~ 0613:27BF
cs=0x613;eip=0x0027c1; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 12578 mov     ax, trackcenterpos2[bx] ;~ 0613:27C1
cs=0x613;eip=0x0027c5; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_8))));	// 12579 add     ax, [bp+var_8] ;~ 0613:27C5
cs=0x613;eip=0x0027c8; 	T(CWD);	// 12580 cwd ;~ 0613:27C8
cs=0x613;eip=0x0027c9; 	T(MOV(cl, 6));	// 12581 mov     cl, 6 ;~ 0613:27C9
loc_16edb:
	// 5057 
cs=0x613;eip=0x0027cb; 	T(SHL(ax, 1));	// 12584 shl     ax, 1 ;~ 0613:27CB
cs=0x613;eip=0x0027cd; 	T(RCL(dx, 1));	// 12585 rcl     dx, 1 ;~ 0613:27CD
cs=0x613;eip=0x0027cf; 	T(DEC(cl));	// 12586 dec     cl ;~ 0613:27CF
cs=0x613;eip=0x0027d1; 	R(JNZ(loc_16edb));	// 12587 jnz     short loc_16EDB ;~ 0613:27D1
cs=0x613;eip=0x0027d3; 	X(PUSH(dx));	// 12588 push    dx ;~ 0613:27D3
cs=0x613;eip=0x0027d4; 	X(PUSH(ax));	// 12589 push    ax ;~ 0613:27D4
cs=0x613;eip=0x0027d5; 	T(MOV(ax, 1));	// 12590 mov     ax, 1 ;~ 0613:27D5
cs=0x613;eip=0x0027d8; 	X(PUSH(ax));	// 12591 push    ax ;~ 0613:27D8
cs=0x613;eip=0x0027d9; 	T(MOV(ax, offset(dseg,simd_opponent)));	// 12592 mov     ax, offset simd_opponent ;~ 0613:27D9
cs=0x613;eip=0x0027dc; 	X(PUSH(ax));	// 12593 push    ax ;~ 0613:27DC
cs=0x613;eip=0x0027dd; 	T(MOV(ax, offset(dseg,word_446b6)));	// 12594 mov     ax, offset word_446B6 ;~ 0613:27DD
cs=0x613;eip=0x0027e0; 	X(PUSH(ax));	// 12595 push    ax ;~ 0613:27E0
cs=0x613;eip=0x0027e1; 	X(PUSH(cs));	// 12596 push    cs ;~ 0613:27E1
cs=0x613;eip=0x0027e2; 	R(CALL(init_carstate_from_simd,0));	// 12597 call    near ptr init_carstate_from_simd ;~ 0613:27E2
cs=0x613;eip=0x0027e5; 	T(ADD(sp, 0x14));	// 12598 add     sp, 14h ;~ 0613:27E5
cs=0x613;eip=0x0027e8; 	T(CMP(byte_449aa, 0));	// 12599 cmp     byte_449AA, 0 ;~ 0613:27E8
cs=0x613;eip=0x0027ed; 	R(JZ(loc_16f2f));	// 12600 jz      short loc_16F2F ;~ 0613:27ED
cs=0x613;eip=0x0027ef; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FFFE));	// 12601 cmp     [bp+arg_0], 0FFFEh ;~ 0613:27EF
cs=0x613;eip=0x0027f3; 	R(JZ(loc_16f2f));	// 12602 jz      short loc_16F2F ;~ 0613:27F3
cs=0x613;eip=0x0027f5; 	T(MOV(ax, offset(dseg,byte_4488d)));	// 12603 mov     ax, offset byte_4488D ;~ 0613:27F5
cs=0x613;eip=0x0027f8; 	X(PUSH(ax));	// 12604 push    ax ;~ 0613:27F8
cs=0x613;eip=0x0027f9; 	T(MOV(al, byte_44784));	// 12605 mov     al, byte_44784 ;~ 0613:27F9
cs=0x613;eip=0x0027fc; 	X(INC(byte_44784));	// 12606 inc     byte_44784 ;~ 0613:27FC
cs=0x613;eip=0x002800; 	T(SUB(ah, ah));	// 12607 sub     ah, ah ;~ 0613:2800
cs=0x613;eip=0x002802; 	X(PUSH(ax));	// 12608 push    ax ;~ 0613:2802
cs=0x613;eip=0x002803; 	T(MOV(ax, offset(dseg,word_4475a)));	// 12609 mov     ax, offset word_4475A ;~ 0613:2803
cs=0x613;eip=0x002806; 	X(PUSH(ax));	// 12610 push    ax ;~ 0613:2806
cs=0x613;eip=0x002807; 	T(MOV(bx, word_44700));	// 12611 mov     bx, word_44700 ;~ 0613:2807
cs=0x613;eip=0x00280b; 	T(SHL(bx, 1));	// 12612 shl     bx, 1 ;~ 0613:280B
cs=0x613;eip=0x00280d; 	T(ADD(bx, *(dw*)(((db*)&trackdata3))));	// 12613 add     bx, word ptr trackdata3 ;~ 0613:280D
cs=0x613;eip=0x002811; 	T(MOV(es, *(dw*)(((db*)&trackdata3)+2)));	// 12614 mov     es, word ptr trackdata3+2 ;~ 0613:2811
cs=0x613;eip=0x002815; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 12616 push    word ptr es:[bx] ;~ 0613:2815
cs=0x613;eip=0x002818; 	X(PUSH(cs));	// 12617 push    cs ;~ 0613:2818
cs=0x613;eip=0x002819; 	R(CALL(sub_18d60,0));	// 12618 call    near ptr sub_18D60 ;~ 0613:2819
cs=0x613;eip=0x00281c; 	T(ADD(sp, 8));	// 12619 add     sp, 8 ;~ 0613:281C
loc_16f2f:
	// 5058 
cs=0x613;eip=0x00281f; 	T(MOV(ax, si));	// 12623 mov     ax, si ;~ 0613:281F
cs=0x613;eip=0x002821; 	X(MOV(byte_448be, al));	// 12624 mov     byte_448BE, al ;~ 0613:2821
loc_16f34:
	// 5059 
cs=0x613;eip=0x002824; 	X(POP(si));	// 12627 pop     si ;~ 0613:2824
cs=0x613;eip=0x002825; 	X(POP(di));	// 12628 pop     di ;~ 0613:2825
cs=0x613;eip=0x002826; 	T(MOV(sp, bp));	// 12629 mov     sp, bp ;~ 0613:2826
cs=0x613;eip=0x002828; 	X(POP(bp));	// 12630 pop     bp ;~ 0613:2828
cs=0x613;eip=0x002829; 	R(RETF(0));	// 12631 retf ;~ 0613:2829
restore_gamestate:
	// 12639 
#undef arg_0
#define arg_0 6
	// 12642 arg_0           = word ptr  6 ;~ 0613:282A
ret_613_282a:
	// 5060 
cs=0x613;eip=0x00282a; 	X(PUSH(bp));	// 12644 push    bp ;~ 0613:282A
cs=0x613;eip=0x00282b; 	T(MOV(bp, sp));	// 12645 mov     bp, sp ;~ 0613:282B
cs=0x613;eip=0x00282d; 	T(SUB(sp, 2));	// 12646 sub     sp, 2 ;~ 0613:282D
cs=0x613;eip=0x002830; 	X(PUSH(di));	// 12647 push    di ;~ 0613:2830
cs=0x613;eip=0x002831; 	X(PUSH(si));	// 12648 push    si ;~ 0613:2831
cs=0x613;eip=0x002832; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 12649 cmp     [bp+arg_0], 0 ;~ 0613:2832
cs=0x613;eip=0x002836; 	R(JNZ(loc_16f59));	// 12650 jnz     short loc_16F59 ;~ 0613:2836
cs=0x613;eip=0x002838; 	T(CMP(elapsed_time1, 0));	// 12651 cmp     elapsed_time1, 0 ;~ 0613:2838
cs=0x613;eip=0x00283d; 	R(JNZ(loc_16f59));	// 12652 jnz     short loc_16F59 ;~ 0613:283D
cs=0x613;eip=0x00283f; 	T(SUB(ax, ax));	// 12653 sub     ax, ax ;~ 0613:283F
cs=0x613;eip=0x002841; 	X(PUSH(ax));	// 12654 push    ax ;~ 0613:2841
cs=0x613;eip=0x002842; 	X(PUSH(cs));	// 12655 push    cs ;~ 0613:2842
cs=0x613;eip=0x002843; 	R(CALL(init_game_state,0));	// 12656 call    near ptr init_game_state ;~ 0613:2843
cs=0x613;eip=0x002846; 	T(ADD(sp, 2));	// 12657 add     sp, 2 ;~ 0613:2846
loc_16f59:
	// 5061 
cs=0x613;eip=0x002849; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 12661 mov     ax, [bp+arg_0] ;~ 0613:2849
cs=0x613;eip=0x00284c; 	T(CWD);	// 12662 cwd ;~ 0613:284C
cs=0x613;eip=0x00284d; 	T(MOV(cx, word_45a00));	// 12663 mov     cx, word_45A00 ;~ 0613:284D
cs=0x613;eip=0x002851; 	T(IDIV2(cx));	// 12664 idiv    cx ;~ 0613:2851
cs=0x613;eip=0x002853; 	T(MOV(si, ax));	// 12665 mov     si, ax ;~ 0613:2853
cs=0x613;eip=0x002855; 	T(CMP(si, 0x14));	// 12666 cmp     si, 14h ;~ 0613:2855
cs=0x613;eip=0x002858; 	R(JNZ(loc_16f6b));	// 12667 jnz     short loc_16F6B ;~ 0613:2858
cs=0x613;eip=0x00285a; 	T(DEC(si));	// 12668 dec     si ;~ 0613:285A
loc_16f6b:
	// 5062 
cs=0x613;eip=0x00285b; 	T(MOV(ax, word_445d4));	// 12671 mov     ax, word_445D4 ;~ 0613:285B
cs=0x613;eip=0x00285e; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 12672 cmp     [bp+arg_0], ax ;~ 0613:285E
cs=0x613;eip=0x002861; 	R(JC(loc_16fb1));	// 12673 jb      short loc_16FB1 ;~ 0613:2861
loc_16f73:
	// 5063 
cs=0x613;eip=0x002863; 	T(MOV(ax, word_45a00));	// 12676 mov     ax, word_45A00 ;~ 0613:2863
cs=0x613;eip=0x002866; 	T(IMUL1_2(si));	// 12677 imul    si ;~ 0613:2866
cs=0x613;eip=0x002868; 	T(CMP(ax, word_445d4));	// 12678 cmp     ax, word_445D4 ;~ 0613:2868
cs=0x613;eip=0x00286c; 	R(JA(loc_16f81));	// 12679 ja      short loc_16F81 ;~ 0613:286C
cs=0x613;eip=0x00286e; 	R(JMP(loc_17002));	// 12680 jmp     loc_17002 ;~ 0613:286E
loc_16f81:
	// 5064 
cs=0x613;eip=0x002871; 	T(MOV(ax, 0x460));	// 12684 mov     ax, 460h ;~ 0613:2871
cs=0x613;eip=0x002874; 	T(CWD);	// 12685 cwd ;~ 0613:2874
cs=0x613;eip=0x002875; 	X(PUSH(dx));	// 12686 push    dx ;~ 0613:2875
cs=0x613;eip=0x002876; 	X(PUSH(ax));	// 12687 push    ax ;~ 0613:2876
cs=0x613;eip=0x002877; 	T(MOV(ax, si));	// 12688 mov     ax, si ;~ 0613:2877
cs=0x613;eip=0x002879; 	T(CWD);	// 12689 cwd ;~ 0613:2879
cs=0x613;eip=0x00287a; 	X(PUSH(dx));	// 12690 push    dx ;~ 0613:287A
cs=0x613;eip=0x00287b; 	X(PUSH(ax));	// 12691 push    ax ;~ 0613:287B
cs=0x613;eip=0x00287c; 	R(CALLF(__aflmul,0));	// 12692 call    __aFlmul ;~ 0613:287C
cs=0x613;eip=0x002881; 	T(ADD(ax, 0x3F4));	// 12693 add     ax, 3F4h ;~ 0613:2881
cs=0x613;eip=0x002884; 	T(ADC(dx, 0));	// 12694 adc     dx, 0 ;~ 0613:2884
cs=0x613;eip=0x002887; 	T(ADD(ax, cvxptr));	// 12695 add     ax, cvxptr ;~ 0613:2887
cs=0x613;eip=0x00288b; 	T(ADC(dx, 0));	// 12696 adc     dx, 0 ;~ 0613:288B
cs=0x613;eip=0x00288e; 	T(MOV(cx, 0x0C));	// 12697 mov     cx, 0Ch ;~ 0613:288E
cs=0x613;eip=0x002891; 	T(SHL(dx, cl));	// 12698 shl     dx, cl ;~ 0613:2891
cs=0x613;eip=0x002893; 	T(ADD(dx, word_45a22));	// 12699 add     dx, word_45A22 ;~ 0613:2893
cs=0x613;eip=0x002897; 	T(MOV(es, dx));	// 12700 mov     es, dx ;~ 0613:2897
cs=0x613;eip=0x002899; 	T(MOV(bx, ax));	// 12701 mov     bx, ax ;~ 0613:2899
cs=0x613;eip=0x00289b; 	T(CMP(*(raddr(es,bx)), 0));	// 12702 cmp     byte ptr es:[bx], 0 ;~ 0613:289B
cs=0x613;eip=0x00289f; 	R(JZ(loc_16ffe));	// 12703 jz      short loc_16FFE ;~ 0613:289F
loc_16fb1:
	// 5065 
cs=0x613;eip=0x0028a1; 	T(MOV(ax, 0x460));	// 12706 mov     ax, 460h ;~ 0613:28A1
cs=0x613;eip=0x0028a4; 	T(CWD);	// 12707 cwd ;~ 0613:28A4
cs=0x613;eip=0x0028a5; 	X(PUSH(dx));	// 12708 push    dx ;~ 0613:28A5
cs=0x613;eip=0x0028a6; 	X(PUSH(ax));	// 12709 push    ax ;~ 0613:28A6
cs=0x613;eip=0x0028a7; 	T(MOV(ax, si));	// 12710 mov     ax, si ;~ 0613:28A7
cs=0x613;eip=0x0028a9; 	T(CWD);	// 12711 cwd ;~ 0613:28A9
cs=0x613;eip=0x0028aa; 	X(PUSH(dx));	// 12712 push    dx ;~ 0613:28AA
cs=0x613;eip=0x0028ab; 	X(PUSH(ax));	// 12713 push    ax ;~ 0613:28AB
cs=0x613;eip=0x0028ac; 	R(CALLF(__aflmul,0));	// 12714 call    __aFlmul ;~ 0613:28AC
cs=0x613;eip=0x0028b1; 	T(ADD(ax, cvxptr));	// 12715 add     ax, cvxptr ;~ 0613:28B1
cs=0x613;eip=0x0028b5; 	T(ADC(dx, 0));	// 12716 adc     dx, 0 ;~ 0613:28B5
cs=0x613;eip=0x0028b8; 	T(MOV(cx, 0x0C));	// 12717 mov     cx, 0Ch ;~ 0613:28B8
cs=0x613;eip=0x0028bb; 	T(SHL(dx, cl));	// 12718 shl     dx, cl ;~ 0613:28BB
cs=0x613;eip=0x0028bd; 	T(ADD(dx, word_45a22));	// 12719 add     dx, word_45A22 ;~ 0613:28BD
cs=0x613;eip=0x0028c1; 	X(PUSH(si));	// 12720 push    si ;~ 0613:28C1
cs=0x613;eip=0x0028c2; 	T(MOV(di, offset(dseg,state)));	// 12721 mov     di, offset state ;~ 0613:28C2
cs=0x613;eip=0x0028c5; 	T(MOV(si, ax));	// 12722 mov     si, ax ;~ 0613:28C5
cs=0x613;eip=0x0028c7; 	X(PUSH(ds));	// 12723 push    ds ;~ 0613:28C7
cs=0x613;eip=0x0028c8; 	X(POP(es));	// 12724 pop     es ;~ 0613:28C8
cs=0x613;eip=0x0028c9; 	X(PUSH(ds));	// 12726 push    ds ;~ 0613:28C9
cs=0x613;eip=0x0028ca; 	T(MOV(ds, dx));	// 12727 mov     ds, dx ;~ 0613:28CA
cs=0x613;eip=0x0028cc; 	T(MOV(cx, 0x230));	// 12728 mov     cx, 230h ;~ 0613:28CC
	// 12729 repne movsw ;~ 0613:28CF
cs=0x613;eip=0x0028cf; 	X(	REPNE MOVSW);	// 12729 repne movsw ;~ 0613:28CF
cs=0x613;eip=0x0028d1; 	X(POP(ds));	// 12730 pop     ds ;~ 0613:28D1
cs=0x613;eip=0x0028d2; 	X(POP(si));	// 12731 pop     si ;~ 0613:28D2
cs=0x613;eip=0x0028d3; 	T(MOV(ax, offset(dseg,unk_44882)));	// 12732 mov     ax, offset unk_44882 ;~ 0613:28D3
cs=0x613;eip=0x0028d6; 	X(PUSH(ax));	// 12733 push    ax ;~ 0613:28D6
cs=0x613;eip=0x0028d7; 	R(CALLF(init_kevinrandom,0));	// 12734 call    init_kevinrandom ;~ 0613:28D7
cs=0x613;eip=0x0028dc; 	T(ADD(sp, 2));	// 12735 add     sp, 2 ;~ 0613:28DC
cs=0x613;eip=0x0028df; 	T(MOV(ax, word_445d4));	// 12736 mov     ax, word_445D4 ;~ 0613:28DF
cs=0x613;eip=0x0028e2; 	X(MOV(elapsed_time2, ax));	// 12737 mov     elapsed_time2, ax ;~ 0613:28E2
cs=0x613;eip=0x0028e5; 	X(POP(si));	// 12738 pop     si ;~ 0613:28E5
cs=0x613;eip=0x0028e6; 	X(POP(di));	// 12739 pop     di ;~ 0613:28E6
cs=0x613;eip=0x0028e7; 	T(MOV(sp, bp));	// 12740 mov     sp, bp ;~ 0613:28E7
cs=0x613;eip=0x0028e9; 	X(POP(bp));	// 12741 pop     bp ;~ 0613:28E9
cs=0x613;eip=0x0028ea; 	R(RETF(0));	// 12742 retf ;~ 0613:28EA
loc_16ffe:
	// 5066 
cs=0x613;eip=0x0028ee; 	T(DEC(si));	// 12748 dec     si ;~ 0613:28EE
cs=0x613;eip=0x0028ef; 	R(JMP(loc_16f73));	// 12749 jmp     loc_16F73 ;~ 0613:28EF
loc_17002:
	// 5067 
cs=0x613;eip=0x0028f2; 	X(POP(si));	// 12753 pop     si ;~ 0613:28F2
cs=0x613;eip=0x0028f3; 	X(POP(di));	// 12754 pop     di ;~ 0613:28F3
cs=0x613;eip=0x0028f4; 	T(MOV(sp, bp));	// 12755 mov     sp, bp ;~ 0613:28F4
cs=0x613;eip=0x0028f6; 	X(POP(bp));	// 12756 pop     bp ;~ 0613:28F6
cs=0x613;eip=0x0028f7; 	R(RETF(0));	// 12757 retf ;~ 0613:28F7
update_gamestate:
	// 12765 
#undef var_4
#define var_4 -4
	// 12768 var_4           = byte ptr -4 ;~ 0613:28F8
ret_613_28f8:
	// 5068 
cs=0x613;eip=0x0028f8; 	X(PUSH(bp));	// 12770 push    bp ;~ 0613:28F8
cs=0x613;eip=0x0028f9; 	T(MOV(bp, sp));	// 12771 mov     bp, sp ;~ 0613:28F9
cs=0x613;eip=0x0028fb; 	T(SUB(sp, 4));	// 12772 sub     sp, 4 ;~ 0613:28FB
cs=0x613;eip=0x0028fe; 	X(PUSH(di));	// 12773 push    di ;~ 0613:28FE
cs=0x613;eip=0x0028ff; 	X(PUSH(si));	// 12774 push    si ;~ 0613:28FF
cs=0x613;eip=0x002900; 	T(MOV(bx, word_445d4));	// 12775 mov     bx, word_445D4 ;~ 0613:2900
cs=0x613;eip=0x002904; 	T(LES(di, td16_rpl_buffer));	// 12776 les     di, td16_rpl_buffer ;~ 0613:2904
cs=0x613;eip=0x002908; 	T(MOV(al, *(raddr(es,bx+di))));	// 12778 mov     al, es:[bx+di] ;~ 0613:2908
cs=0x613;eip=0x00290b; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 12779 mov     [bp+var_4], al ;~ 0613:290B
cs=0x613;eip=0x00290e; 	T(OR(al, al));	// 12780 or      al, al ;~ 0613:290E
cs=0x613;eip=0x002910; 	R(JZ(loc_17027));	// 12781 jz      short loc_17027 ;~ 0613:2910
cs=0x613;eip=0x002912; 	X(MOV(byte_44889, 1));	// 12782 mov     byte_44889, 1 ;~ 0613:2912
loc_17027:
	// 5069 
cs=0x613;eip=0x002917; 	T(MOV(ax, bx));	// 12785 mov     ax, bx ;~ 0613:2917
cs=0x613;eip=0x002919; 	T(SUB(dx, dx));	// 12786 sub     dx, dx ;~ 0613:2919
cs=0x613;eip=0x00291b; 	X(DIV2(word_45a00));	// 12787 div     word_45A00 ;~ 0613:291B
cs=0x613;eip=0x00291f; 	T(OR(dx, dx));	// 12788 or      dx, dx ;~ 0613:291F
cs=0x613;eip=0x002921; 	R(JNZ(loc_17079));	// 12789 jnz     short loc_17079 ;~ 0613:2921
cs=0x613;eip=0x002923; 	T(MOV(ax, bx));	// 12790 mov     ax, bx ;~ 0613:2923
cs=0x613;eip=0x002925; 	T(SUB(dx, dx));	// 12791 sub     dx, dx ;~ 0613:2925
cs=0x613;eip=0x002927; 	X(DIV2(word_45a00));	// 12792 div     word_45A00 ;~ 0613:2927
cs=0x613;eip=0x00292b; 	T(MOV(si, ax));	// 12793 mov     si, ax ;~ 0613:292B
cs=0x613;eip=0x00292d; 	T(MOV(ax, offset(dseg,unk_44882)));	// 12794 mov     ax, offset unk_44882 ;~ 0613:292D
cs=0x613;eip=0x002930; 	X(PUSH(ax));	// 12795 push    ax ;~ 0613:2930
cs=0x613;eip=0x002931; 	R(CALLF(get_kevinrandom_seed,0));	// 12796 call    get_kevinrandom_seed ;~ 0613:2931
cs=0x613;eip=0x002936; 	T(ADD(sp, 2));	// 12797 add     sp, 2 ;~ 0613:2936
cs=0x613;eip=0x002939; 	T(MOV(ax, 0x460));	// 12798 mov     ax, 460h ;~ 0613:2939
cs=0x613;eip=0x00293c; 	T(CWD);	// 12799 cwd ;~ 0613:293C
cs=0x613;eip=0x00293d; 	X(PUSH(dx));	// 12800 push    dx ;~ 0613:293D
cs=0x613;eip=0x00293e; 	X(PUSH(ax));	// 12801 push    ax ;~ 0613:293E
cs=0x613;eip=0x00293f; 	T(MOV(ax, si));	// 12802 mov     ax, si ;~ 0613:293F
cs=0x613;eip=0x002941; 	T(CWD);	// 12803 cwd ;~ 0613:2941
cs=0x613;eip=0x002942; 	X(PUSH(dx));	// 12804 push    dx ;~ 0613:2942
cs=0x613;eip=0x002943; 	X(PUSH(ax));	// 12805 push    ax ;~ 0613:2943
cs=0x613;eip=0x002944; 	R(CALLF(__aflmul,0));	// 12806 call    __aFlmul ;~ 0613:2944
cs=0x613;eip=0x002949; 	T(ADD(ax, cvxptr));	// 12807 add     ax, cvxptr ;~ 0613:2949
cs=0x613;eip=0x00294d; 	T(ADC(dx, 0));	// 12808 adc     dx, 0 ;~ 0613:294D
cs=0x613;eip=0x002950; 	T(MOV(cx, 0x0C));	// 12809 mov     cx, 0Ch ;~ 0613:2950
cs=0x613;eip=0x002953; 	T(SHL(dx, cl));	// 12810 shl     dx, cl ;~ 0613:2953
cs=0x613;eip=0x002955; 	T(ADD(dx, word_45a22));	// 12811 add     dx, word_45A22 ;~ 0613:2955
cs=0x613;eip=0x002959; 	T(MOV(bx, ax));	// 12812 mov     bx, ax ;~ 0613:2959
cs=0x613;eip=0x00295b; 	T(MOV(es, dx));	// 12813 mov     es, dx ;~ 0613:295B
cs=0x613;eip=0x00295d; 	X(PUSH(si));	// 12814 push    si ;~ 0613:295D
cs=0x613;eip=0x00295e; 	T(MOV(di, bx));	// 12815 mov     di, bx ;~ 0613:295E
cs=0x613;eip=0x002960; 	T(MOV(si, offset(dseg,state)));	// 12816 mov     si, offset state ;~ 0613:2960
cs=0x613;eip=0x002963; 	T(MOV(cx, 0x230));	// 12817 mov     cx, 230h ;~ 0613:2963
	// 12818 repne movsw ;~ 0613:2966
cs=0x613;eip=0x002966; 	X(	REPNE MOVSW);	// 12818 repne movsw ;~ 0613:2966
cs=0x613;eip=0x002968; 	X(POP(si));	// 12819 pop     si ;~ 0613:2968
loc_17079:
	// 5070 
cs=0x613;eip=0x002969; 	X(INC(word_445d4));	// 12822 inc     word_445D4 ;~ 0613:2969
cs=0x613;eip=0x00296d; 	T(CMP(byte_4488a, 0));	// 12823 cmp     byte_4488A, 0 ;~ 0613:296D
cs=0x613;eip=0x002972; 	R(JZ(loc_170be));	// 12824 jz      short loc_170BE ;~ 0613:2972
cs=0x613;eip=0x002974; 	T(MOV(ax, word_445ce));	// 12825 mov     ax, word_445CE ;~ 0613:2974
cs=0x613;eip=0x002977; 	T(CMP(word_445cc, ax));	// 12826 cmp     word_445CC, ax ;~ 0613:2977
cs=0x613;eip=0x00297b; 	R(JGE(loc_170be));	// 12827 jge     short loc_170BE ;~ 0613:297B
cs=0x613;eip=0x00297d; 	X(INC(word_445cc));	// 12828 inc     word_445CC ;~ 0613:297D
cs=0x613;eip=0x002981; 	T(CMP(word_445cc, ax));	// 12829 cmp     word_445CC, ax ;~ 0613:2981
cs=0x613;eip=0x002985; 	R(JNZ(loc_170be));	// 12830 jnz     short loc_170BE ;~ 0613:2985
cs=0x613;eip=0x002987; 	T(CMP(byte_449da, 0));	// 12831 cmp     byte_449DA, 0 ;~ 0613:2987
cs=0x613;eip=0x00298c; 	R(JNZ(loc_170be));	// 12832 jnz     short loc_170BE ;~ 0613:298C
cs=0x613;eip=0x00298e; 	T(CMP(byte_446af, 1));	// 12833 cmp     byte_446AF, 1 ;~ 0613:298E
cs=0x613;eip=0x002993; 	R(JNZ(loc_170b2));	// 12834 jnz     short loc_170B2 ;~ 0613:2993
cs=0x613;eip=0x002995; 	T(CMP(word_44612, 0));	// 12835 cmp     word_44612, 0 ;~ 0613:2995
cs=0x613;eip=0x00299a; 	R(JZ(loc_170b2));	// 12836 jz      short loc_170B2 ;~ 0613:299A
cs=0x613;eip=0x00299c; 	X(INC(word_445ce));	// 12837 inc     word_445CE ;~ 0613:299C
cs=0x613;eip=0x0029a0; 	R(JMP(loc_170be));	// 12838 jmp     short loc_170BE ;~ 0613:29A0
loc_170b2:
	// 5071 
cs=0x613;eip=0x0029a2; 	T(CMP(game_replay_mode, 0));	// 12843 cmp     game_replay_mode, 0 ;~ 0613:29A2
cs=0x613;eip=0x0029a7; 	R(JNZ(loc_170be));	// 12844 jnz     short loc_170BE ;~ 0613:29A7
cs=0x613;eip=0x0029a9; 	X(MOV(byte_449da, 1));	// 12845 mov     byte_449DA, 1 ;~ 0613:29A9
loc_170be:
	// 5072 
cs=0x613;eip=0x0029ae; 	T(CMP(byte_44889, 0));	// 12849 cmp     byte_44889, 0 ;~ 0613:29AE
cs=0x613;eip=0x0029b3; 	R(JZ(loc_170f6));	// 12850 jz      short loc_170F6 ;~ 0613:29B3
cs=0x613;eip=0x0029b5; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 12851 mov     al, [bp+var_4] ;~ 0613:29B5
cs=0x613;eip=0x0029b8; 	T(CBW);	// 12852 cbw ;~ 0613:29B8
cs=0x613;eip=0x0029b9; 	X(PUSH(ax));	// 12853 push    ax ;~ 0613:29B9
cs=0x613;eip=0x0029ba; 	X(PUSH(cs));	// 12854 push    cs ;~ 0613:29BA
cs=0x613;eip=0x0029bb; 	R(CALL(player_op,0));	// 12855 call    near ptr player_op ;~ 0613:29BB
cs=0x613;eip=0x0029be; 	T(ADD(sp, 2));	// 12856 add     sp, 2 ;~ 0613:29BE
cs=0x613;eip=0x0029c1; 	T(CMP(byte_449aa, 0));	// 12857 cmp     byte_449AA, 0 ;~ 0613:29C1
cs=0x613;eip=0x0029c6; 	R(JZ(loc_170dc));	// 12858 jz      short loc_170DC ;~ 0613:29C6
cs=0x613;eip=0x0029c8; 	X(PUSH(cs));	// 12859 push    cs ;~ 0613:29C8
cs=0x613;eip=0x0029c9; 	R(CALL(opponent_op,0));	// 12860 call    near ptr opponent_op ;~ 0613:29C9
loc_170dc:
	// 5073 
cs=0x613;eip=0x0029cc; 	R(CALLF(sub_2298c,0));	// 12863 call    sub_2298C ;~ 0613:29CC
cs=0x613;eip=0x0029d1; 	T(CMP(byte_448be, 0));	// 12864 cmp     byte_448BE, 0 ;~ 0613:29D1
cs=0x613;eip=0x0029d6; 	R(JZ(loc_170ec));	// 12865 jz      short loc_170EC ;~ 0613:29D6
cs=0x613;eip=0x0029d8; 	X(PUSH(cs));	// 12866 push    cs ;~ 0613:29D8
cs=0x613;eip=0x0029d9; 	R(CALL(sub_19ba0,0));	// 12867 call    near ptr sub_19BA0 ;~ 0613:29D9
loc_170ec:
	// 5074 
cs=0x613;eip=0x0029dc; 	X(PUSH(cs));	// 12870 push    cs ;~ 0613:29DC
cs=0x613;eip=0x0029dd; 	R(CALL(audio_carstate,0));	// 12871 call    near ptr audio_carstate ;~ 0613:29DD
cs=0x613;eip=0x0029e0; 	X(POP(si));	// 12872 pop     si ;~ 0613:29E0
cs=0x613;eip=0x0029e1; 	X(POP(di));	// 12873 pop     di ;~ 0613:29E1
cs=0x613;eip=0x0029e2; 	T(MOV(sp, bp));	// 12874 mov     sp, bp ;~ 0613:29E2
cs=0x613;eip=0x0029e4; 	X(POP(bp));	// 12875 pop     bp ;~ 0613:29E4
cs=0x613;eip=0x0029e5; 	R(RETF(0));	// 12876 retf ;~ 0613:29E5
loc_170f6:
	// 5075 
cs=0x613;eip=0x0029e6; 	T(CMP(game_replay_mode, 1));	// 12880 cmp     game_replay_mode, 1 ;~ 0613:29E6
cs=0x613;eip=0x0029eb; 	R(JZ(loc_17100));	// 12881 jz      short loc_17100 ;~ 0613:29EB
cs=0x613;eip=0x0029ed; 	R(JMP(loc_171e1));	// 12882 jmp     loc_171E1 ;~ 0613:29ED
loc_17100:
	// 5076 
cs=0x613;eip=0x0029f0; 	X(PUSH(cs));	// 12886 push    cs ;~ 0613:29F0
cs=0x613;eip=0x0029f1; 	R(CALL(audio_carstate,0));	// 12887 call    near ptr audio_carstate ;~ 0613:29F1
cs=0x613;eip=0x0029f4; 	T(CMP(byte_4393c, 0));	// 12888 cmp     byte_4393C, 0 ;~ 0613:29F4
cs=0x613;eip=0x0029f9; 	R(JNZ(loc_1710e));	// 12889 jnz     short loc_1710E ;~ 0613:29F9
cs=0x613;eip=0x0029fb; 	R(JMP(loc_171e1));	// 12890 jmp     loc_171E1 ;~ 0613:29FB
loc_1710e:
	// 5077 
cs=0x613;eip=0x0029fe; 	T(CMP(word_44dca, 0x1C2));	// 12894 cmp     word_44DCA, 1C2h ;~ 0613:29FE
cs=0x613;eip=0x002a04; 	R(JGE(loc_1711b));	// 12895 jge     short loc_1711B ;~ 0613:2A04
cs=0x613;eip=0x002a06; 	X(ADD(word_44dca, 8));	// 12896 add     word_44DCA, 8 ;~ 0613:2A06
loc_1711b:
	// 5078 
cs=0x613;eip=0x002a0b; 	T(CMP(byte_4393c, 1));	// 12899 cmp     byte_4393C, 1 ;~ 0613:2A0B
cs=0x613;eip=0x002a10; 	R(JNZ(loc_1712e));	// 12900 jnz     short loc_1712E ;~ 0613:2A10
cs=0x613;eip=0x002a12; 	T(CMP(word_44dca, 0x180));	// 12901 cmp     word_44DCA, 180h ;~ 0613:2A12
cs=0x613;eip=0x002a18; 	R(JLE(loc_1712e));	// 12902 jle     short loc_1712E ;~ 0613:2A18
cs=0x613;eip=0x002a1a; 	X(INC(byte_4393c));	// 12903 inc     byte_4393C ;~ 0613:2A1A
loc_1712e:
	// 5079 
cs=0x613;eip=0x002a1e; 	T(CMP(byte_4393c, 2));	// 12907 cmp     byte_4393C, 2 ;~ 0613:2A1E
cs=0x613;eip=0x002a23; 	R(JZ(loc_17138));	// 12908 jz      short loc_17138 ;~ 0613:2A23
cs=0x613;eip=0x002a25; 	R(JMP(loc_171e1));	// 12909 jmp     loc_171E1 ;~ 0613:2A25
loc_17138:
	// 5080 
cs=0x613;eip=0x002a28; 	T(MOV(al, startrow2));	// 12913 mov     al, startrow2 ;~ 0613:2A28
cs=0x613;eip=0x002a2b; 	T(CBW);	// 12914 cbw ;~ 0613:2A2B
cs=0x613;eip=0x002a2c; 	T(MOV(bx, ax));	// 12915 mov     bx, ax ;~ 0613:2A2C
cs=0x613;eip=0x002a2e; 	T(SHL(bx, 1));	// 12916 shl     bx, 1 ;~ 0613:2A2E
cs=0x613;eip=0x002a30; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 12917 mov     ax, trackcenterpos[bx] ;~ 0613:2A30
cs=0x613;eip=0x002a34; 	T(MOV(cx, word_445ee));	// 12918 mov     cx, word_445EE ;~ 0613:2A34
cs=0x613;eip=0x002a38; 	T(MOV(bx, word_445f0));	// 12919 mov     bx, word_445F0 ;~ 0613:2A38
cs=0x613;eip=0x002a3c; 	T(MOV(dx, cx));	// 12920 mov     dx, cx ;~ 0613:2A3C
cs=0x613;eip=0x002a3e; 	T(MOV(cl, 6));	// 12921 mov     cl, 6 ;~ 0613:2A3E
loc_17150:
	// 5081 
cs=0x613;eip=0x002a40; 	T(SAR(bx, 1));	// 12924 sar     bx, 1 ;~ 0613:2A40
cs=0x613;eip=0x002a42; 	T(RCR(dx, 1));	// 12925 rcr     dx, 1 ;~ 0613:2A42
cs=0x613;eip=0x002a44; 	T(DEC(cl));	// 12926 dec     cl ;~ 0613:2A44
cs=0x613;eip=0x002a46; 	R(JNZ(loc_17150));	// 12927 jnz     short loc_17150 ;~ 0613:2A46
cs=0x613;eip=0x002a48; 	T(SUB(ax, dx));	// 12928 sub     ax, dx ;~ 0613:2A48
cs=0x613;eip=0x002a4a; 	X(PUSH(ax));	// 12929 push    ax ;~ 0613:2A4A
cs=0x613;eip=0x002a4b; 	X(PUSH(track_angle));	// 12930 push    track_angle ;~ 0613:2A4B
cs=0x613;eip=0x002a4f; 	R(CALLF(cos_fast,0));	// 12931 call    cos_fast ;~ 0613:2A4F
cs=0x613;eip=0x002a54; 	T(ADD(sp, 2));	// 12932 add     sp, 2 ;~ 0613:2A54
cs=0x613;eip=0x002a57; 	X(PUSH(ax));	// 12933 push    ax ;~ 0613:2A57
cs=0x613;eip=0x002a58; 	R(CALLF(multiply_and_scale,0));	// 12934 call    multiply_and_scale ;~ 0613:2A58
cs=0x613;eip=0x002a5d; 	T(ADD(sp, 4));	// 12935 add     sp, 4 ;~ 0613:2A5D
cs=0x613;eip=0x002a60; 	T(MOV(si, ax));	// 12936 mov     si, ax ;~ 0613:2A60
cs=0x613;eip=0x002a62; 	T(MOV(al, startcol2));	// 12937 mov     al, startcol2 ;~ 0613:2A62
cs=0x613;eip=0x002a65; 	T(CBW);	// 12938 cbw ;~ 0613:2A65
cs=0x613;eip=0x002a66; 	T(MOV(bx, ax));	// 12939 mov     bx, ax ;~ 0613:2A66
cs=0x613;eip=0x002a68; 	T(SHL(bx, 1));	// 12940 shl     bx, 1 ;~ 0613:2A68
cs=0x613;eip=0x002a6a; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 12941 mov     ax, trackcenterpos2[bx] ;~ 0613:2A6A
cs=0x613;eip=0x002a6e; 	T(MOV(cx, word_445e6));	// 12942 mov     cx, word_445E6 ;~ 0613:2A6E
cs=0x613;eip=0x002a72; 	T(MOV(bx, word_445e8));	// 12943 mov     bx, word_445E8 ;~ 0613:2A72
cs=0x613;eip=0x002a76; 	T(MOV(dx, cx));	// 12944 mov     dx, cx ;~ 0613:2A76
cs=0x613;eip=0x002a78; 	T(MOV(cl, 6));	// 12945 mov     cl, 6 ;~ 0613:2A78
loc_1718a:
	// 5082 
cs=0x613;eip=0x002a7a; 	T(SAR(bx, 1));	// 12948 sar     bx, 1 ;~ 0613:2A7A
cs=0x613;eip=0x002a7c; 	T(RCR(dx, 1));	// 12949 rcr     dx, 1 ;~ 0613:2A7C
cs=0x613;eip=0x002a7e; 	T(DEC(cl));	// 12950 dec     cl ;~ 0613:2A7E
cs=0x613;eip=0x002a80; 	R(JNZ(loc_1718a));	// 12951 jnz     short loc_1718A ;~ 0613:2A80
cs=0x613;eip=0x002a82; 	T(SUB(ax, dx));	// 12952 sub     ax, dx ;~ 0613:2A82
cs=0x613;eip=0x002a84; 	X(PUSH(ax));	// 12953 push    ax ;~ 0613:2A84
cs=0x613;eip=0x002a85; 	X(PUSH(track_angle));	// 12954 push    track_angle ;~ 0613:2A85
cs=0x613;eip=0x002a89; 	R(CALLF(sin_fast,0));	// 12955 call    sin_fast ;~ 0613:2A89
cs=0x613;eip=0x002a8e; 	T(ADD(sp, 2));	// 12956 add     sp, 2 ;~ 0613:2A8E
cs=0x613;eip=0x002a91; 	X(PUSH(ax));	// 12957 push    ax ;~ 0613:2A91
cs=0x613;eip=0x002a92; 	R(CALLF(multiply_and_scale,0));	// 12958 call    multiply_and_scale ;~ 0613:2A92
cs=0x613;eip=0x002a97; 	T(ADD(sp, 4));	// 12959 add     sp, 4 ;~ 0613:2A97
cs=0x613;eip=0x002a9a; 	T(ADD(si, ax));	// 12960 add     si, ax ;~ 0613:2A9A
cs=0x613;eip=0x002a9c; 	T(CMP(si, 0x0E4));	// 12961 cmp     si, 0E4h ; 'ä' ;~ 0613:2A9C
cs=0x613;eip=0x002aa0; 	R(JLE(loc_171d0));	// 12962 jle     short loc_171D0 ;~ 0613:2AA0
cs=0x613;eip=0x002aa2; 	T(CMP(word_44610, 0x500));	// 12963 cmp     word_44610, 500h ;~ 0613:2AA2
cs=0x613;eip=0x002aa8; 	R(JNC(loc_171cc));	// 12964 jnb     short loc_171CC ;~ 0613:2AA8
cs=0x613;eip=0x002aaa; 	T(MOV(ax, 1));	// 12965 mov     ax, 1 ;~ 0613:2AAA
loc_171bd:
	// 5083 
cs=0x613;eip=0x002aad; 	X(PUSH(ax));	// 12969 push    ax ;~ 0613:2AAD
cs=0x613;eip=0x002aae; 	X(PUSH(cs));	// 12970 push    cs ;~ 0613:2AAE
cs=0x613;eip=0x002aaf; 	R(CALL(player_op,0));	// 12971 call    near ptr player_op ;~ 0613:2AAF
cs=0x613;eip=0x002ab2; 	T(ADD(sp, 2));	// 12972 add     sp, 2 ;~ 0613:2AB2
cs=0x613;eip=0x002ab5; 	X(POP(si));	// 12973 pop     si ;~ 0613:2AB5
cs=0x613;eip=0x002ab6; 	X(POP(di));	// 12974 pop     di ;~ 0613:2AB6
cs=0x613;eip=0x002ab7; 	T(MOV(sp, bp));	// 12975 mov     sp, bp ;~ 0613:2AB7
cs=0x613;eip=0x002ab9; 	X(POP(bp));	// 12976 pop     bp ;~ 0613:2AB9
cs=0x613;eip=0x002aba; 	R(RETF(0));	// 12977 retf ;~ 0613:2ABA
loc_171cc:
	// 5084 
cs=0x613;eip=0x002abc; 	T(SUB(ax, ax));	// 12982 sub     ax, ax ;~ 0613:2ABC
cs=0x613;eip=0x002abe; 	R(JMP(loc_171bd));	// 12983 jmp     short loc_171BD ;~ 0613:2ABE
loc_171d0:
	// 5085 
cs=0x613;eip=0x002ac0; 	T(CMP(word_44610, 0));	// 12987 cmp     word_44610, 0 ;~ 0613:2AC0
cs=0x613;eip=0x002ac5; 	R(JZ(loc_171dc));	// 12988 jz      short loc_171DC ;~ 0613:2AC5
cs=0x613;eip=0x002ac7; 	T(MOV(ax, 2));	// 12989 mov     ax, 2 ;~ 0613:2AC7
cs=0x613;eip=0x002aca; 	R(JMP(loc_171bd));	// 12990 jmp     short loc_171BD ;~ 0613:2ACA
loc_171dc:
	// 5086 
cs=0x613;eip=0x002acc; 	X(MOV(byte_4393c, 0));	// 12994 mov     byte_4393C, 0 ;~ 0613:2ACC
loc_171e1:
	// 5087 
cs=0x613;eip=0x002ad1; 	X(POP(si));	// 12998 pop     si ;~ 0613:2AD1
cs=0x613;eip=0x002ad2; 	X(POP(di));	// 12999 pop     di ;~ 0613:2AD2
cs=0x613;eip=0x002ad3; 	T(MOV(sp, bp));	// 13000 mov     sp, bp ;~ 0613:2AD3
cs=0x613;eip=0x002ad5; 	X(POP(bp));	// 13001 pop     bp ;~ 0613:2AD5
cs=0x613;eip=0x002ad6; 	R(RETF(0));	// 13002 retf ;~ 0613:2AD6
player_op:
	// 13012 
#undef var_52
#define var_52 -0x52
	// 13015 var_52          = word ptr -52h ;~ 0613:2AD8
#undef var_4e
#define var_4e -0x4E
	// 13016 var_4E          = word ptr -4Eh ;~ 0613:2AD8
#undef var_3a
#define var_3a -0x3A
	// 13017 var_3A          = byte ptr -3Ah ;~ 0613:2AD8
#undef var_38
#define var_38 -0x38
	// 13018 var_38          = word ptr -38h ;~ 0613:2AD8
#undef var_34
#define var_34 -0x34
	// 13019 var_34          = word ptr -34h ;~ 0613:2AD8
#undef var_32
#define var_32 -0x32
	// 13020 var_32          = word ptr -32h ;~ 0613:2AD8
#undef var_30
#define var_30 -0x30
	// 13021 var_30          = word ptr -30h ;~ 0613:2AD8
#undef var_2e
#define var_2e -0x2E
	// 13022 var_2E          = word ptr -2Eh ;~ 0613:2AD8
#undef var_2c
#define var_2c -0x2C
	// 13023 var_2C          = byte ptr -2Ch ;~ 0613:2AD8
#undef var_2a
#define var_2a -0x2A
	// 13024 var_2A          = byte ptr -2Ah ;~ 0613:2AD8
#undef var_28
#define var_28 -0x28
	// 13025 var_28          = word ptr -28h ;~ 0613:2AD8
#undef var_26
#define var_26 -0x26
	// 13026 var_26          = word ptr -26h ;~ 0613:2AD8
#undef var_24
#define var_24 -0x24
	// 13027 var_24          = word ptr -24h ;~ 0613:2AD8
#undef var_20
#define var_20 -0x20
	// 13028 var_20          = word ptr -20h ;~ 0613:2AD8
#undef var_1e
#define var_1e -0x1E
	// 13029 var_1E          = word ptr -1Eh ;~ 0613:2AD8
#undef var_1c
#define var_1c -0x1C
	// 13030 var_1C          = byte ptr -1Ch ;~ 0613:2AD8
#undef var_1a
#define var_1a -0x1A
	// 13031 var_1A          = word ptr -1Ah ;~ 0613:2AD8
#undef var_16
#define var_16 -0x16
	// 13032 var_16          = word ptr -16h ;~ 0613:2AD8
#undef var_2
#define var_2 -2
	// 13033 var_2           = word ptr -2 ;~ 0613:2AD8
#undef arg_0
#define arg_0 6
	// 13034 arg_0           = byte ptr  6 ;~ 0613:2AD8
ret_613_2ad8:
	// 5088 
cs=0x613;eip=0x002ad8; 	X(PUSH(bp));	// 13036 push    bp ;~ 0613:2AD8
cs=0x613;eip=0x002ad9; 	T(MOV(bp, sp));	// 13037 mov     bp, sp ;~ 0613:2AD9
cs=0x613;eip=0x002adb; 	T(SUB(sp, 0x52));	// 13038 sub     sp, 52h ;~ 0613:2ADB
cs=0x613;eip=0x002ade; 	X(PUSH(di));	// 13039 push    di ;~ 0613:2ADE
cs=0x613;eip=0x002adf; 	X(PUSH(si));	// 13040 push    si ;~ 0613:2ADF
cs=0x613;eip=0x002ae0; 	T(CMP(show_penalty_counter, 0));	// 13041 cmp     show_penalty_counter, 0 ;~ 0613:2AE0
cs=0x613;eip=0x002ae5; 	R(JZ(loc_171fb));	// 13042 jz      short loc_171FB ;~ 0613:2AE5
cs=0x613;eip=0x002ae7; 	X(DEC(show_penalty_counter));	// 13043 dec     show_penalty_counter ;~ 0613:2AE7
loc_171fb:
	// 5089 
cs=0x613;eip=0x002aeb; 	X(MOV(byte_446b5, 1));	// 13046 mov     byte_446B5, 1 ;~ 0613:2AEB
cs=0x613;eip=0x002af0; 	T(CMP(byte_446af, 0));	// 13047 cmp     byte_446AF, 0 ;~ 0613:2AF0
cs=0x613;eip=0x002af5; 	R(JZ(loc_17242));	// 13048 jz      short loc_17242 ;~ 0613:2AF5
cs=0x613;eip=0x002af7; 	X(MOV(byte_448f1, 0));	// 13049 mov     byte_448F1, 0 ;~ 0613:2AF7
cs=0x613;eip=0x002afc; 	X(MOV(*(raddr(ss,bp+arg_0)), 2));	// 13050 mov     [bp+arg_0], 2 ;~ 0613:2AFC
cs=0x613;eip=0x002b00; 	T(CMP(word_44612, 0));	// 13051 cmp     word_44612, 0 ;~ 0613:2B00
cs=0x613;eip=0x002b05; 	R(JNZ(loc_17242));	// 13052 jnz     short loc_17242 ;~ 0613:2B05
cs=0x613;eip=0x002b07; 	X(MOV(byte_446b5, 0));	// 13053 mov     byte_446B5, 0 ;~ 0613:2B07
cs=0x613;eip=0x002b0c; 	T(CMP(word_44610, 0));	// 13054 cmp     word_44610, 0 ;~ 0613:2B0C
cs=0x613;eip=0x002b11; 	R(JNZ(loc_17242));	// 13055 jnz     short loc_17242 ;~ 0613:2B11
cs=0x613;eip=0x002b13; 	T(CMP(word_44632, 0));	// 13056 cmp     word_44632, 0 ;~ 0613:2B13
cs=0x613;eip=0x002b18; 	R(JNZ(loc_17242));	// 13057 jnz     short loc_17242 ;~ 0613:2B18
cs=0x613;eip=0x002b1a; 	T(CMP(word_44634, 0));	// 13058 cmp     word_44634, 0 ;~ 0613:2B1A
cs=0x613;eip=0x002b1f; 	R(JNZ(loc_17242));	// 13059 jnz     short loc_17242 ;~ 0613:2B1F
cs=0x613;eip=0x002b21; 	T(CMP(word_44636, 0));	// 13060 cmp     word_44636, 0 ;~ 0613:2B21
cs=0x613;eip=0x002b26; 	R(JNZ(loc_17242));	// 13061 jnz     short loc_17242 ;~ 0613:2B26
cs=0x613;eip=0x002b28; 	T(CMP(word_44638, 0));	// 13062 cmp     word_44638, 0 ;~ 0613:2B28
cs=0x613;eip=0x002b2d; 	R(JNZ(loc_17242));	// 13063 jnz     short loc_17242 ;~ 0613:2B2D
cs=0x613;eip=0x002b2f; 	R(JMP(loc_17810));	// 13064 jmp     loc_17810 ;~ 0613:2B2F
loc_17242:
	// 5090 
cs=0x613;eip=0x002b32; 	T(MOV(ax, offset(dseg,simd_player)));	// 13069 mov     ax, offset simd_player ;~ 0613:2B32
cs=0x613;eip=0x002b35; 	X(PUSH(ax));	// 13070 push    ax ;~ 0613:2B35
cs=0x613;eip=0x002b36; 	T(MOV(ax, offset(dseg,word_445e6)));	// 13071 mov     ax, offset word_445E6 ;~ 0613:2B36
cs=0x613;eip=0x002b39; 	X(PUSH(ax));	// 13072 push    ax ;~ 0613:2B39
cs=0x613;eip=0x002b3a; 	T(SUB(ax, ax));	// 13073 sub     ax, ax ;~ 0613:2B3A
cs=0x613;eip=0x002b3c; 	X(PUSH(ax));	// 13074 push    ax ;~ 0613:2B3C
cs=0x613;eip=0x002b3d; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 13075 mov     al, [bp+arg_0] ;~ 0613:2B3D
cs=0x613;eip=0x002b40; 	T(CBW);	// 13076 cbw ;~ 0613:2B40
cs=0x613;eip=0x002b41; 	X(PUSH(ax));	// 13077 push    ax ;~ 0613:2B41
cs=0x613;eip=0x002b42; 	X(PUSH(cs));	// 13078 push    cs ;~ 0613:2B42
cs=0x613;eip=0x002b43; 	R(CALL(update_car_speed,0));	// 13079 call    near ptr update_car_speed ;~ 0613:2B43
cs=0x613;eip=0x002b46; 	T(ADD(sp, 8));	// 13080 add     sp, 8 ;~ 0613:2B46
cs=0x613;eip=0x002b49; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 13081 mov     al, [bp+arg_0] ;~ 0613:2B49
cs=0x613;eip=0x002b4c; 	T(CBW);	// 13082 cbw ;~ 0613:2B4C
cs=0x613;eip=0x002b4d; 	T(SAR(ax, 1));	// 13083 sar     ax, 1 ;~ 0613:2B4D
cs=0x613;eip=0x002b4f; 	T(SAR(ax, 1));	// 13084 sar     ax, 1 ;~ 0613:2B4F
cs=0x613;eip=0x002b51; 	T(AND(ax, 3));	// 13085 and     ax, 3           ; masks all keys but the steering ones. ;~ 0613:2B51
cs=0x613;eip=0x002b54; 	X(PUSH(ax));	// 13086 push    ax ;~ 0613:2B54
cs=0x613;eip=0x002b55; 	X(PUSH(cs));	// 13087 push    cs ;~ 0613:2B55
cs=0x613;eip=0x002b56; 	R(CALL(upd_statef20_from_steer_input,0));	// 13088 call    near ptr upd_statef20_from_steer_input ;~ 0613:2B56
cs=0x613;eip=0x002b59; 	T(ADD(sp, 2));	// 13089 add     sp, 2 ;~ 0613:2B59
cs=0x613;eip=0x002b5c; 	T(MOV(ax, 1));	// 13090 mov     ax, 1 ;~ 0613:2B5C
cs=0x613;eip=0x002b5f; 	X(PUSH(ax));	// 13091 push    ax ;~ 0613:2B5F
cs=0x613;eip=0x002b60; 	T(MOV(ax, offset(dseg,simd_player)));	// 13092 mov     ax, offset simd_player ;~ 0613:2B60
cs=0x613;eip=0x002b63; 	X(PUSH(ax));	// 13093 push    ax ;~ 0613:2B63
cs=0x613;eip=0x002b64; 	T(MOV(ax, offset(dseg,word_445e6)));	// 13094 mov     ax, offset word_445E6 ;~ 0613:2B64
cs=0x613;eip=0x002b67; 	X(PUSH(ax));	// 13095 push    ax ;~ 0613:2B67
cs=0x613;eip=0x002b68; 	X(PUSH(cs));	// 13096 push    cs ;~ 0613:2B68
cs=0x613;eip=0x002b69; 	R(CALL(update_grip,0));	// 13097 call    near ptr update_grip ;~ 0613:2B69
cs=0x613;eip=0x002b6c; 	T(ADD(sp, 6));	// 13098 add     sp, 6 ;~ 0613:2B6C
cs=0x613;eip=0x002b6f; 	T(SUB(ax, ax));	// 13099 sub     ax, ax ;~ 0613:2B6F
cs=0x613;eip=0x002b71; 	X(PUSH(ax));	// 13100 push    ax ;~ 0613:2B71
cs=0x613;eip=0x002b72; 	T(MOV(ax, offset(dseg,simd_opponent)));	// 13101 mov     ax, offset simd_opponent ; simd2 ;~ 0613:2B72
cs=0x613;eip=0x002b75; 	X(PUSH(ax));	// 13102 push    ax ;~ 0613:2B75
cs=0x613;eip=0x002b76; 	T(MOV(ax, offset(dseg,word_446b6)));	// 13103 mov     ax, offset word_446B6 ; opp CARSTATE ;~ 0613:2B76
cs=0x613;eip=0x002b79; 	X(PUSH(ax));	// 13104 push    ax ;~ 0613:2B79
cs=0x613;eip=0x002b7a; 	T(MOV(ax, offset(dseg,simd_player)));	// 13105 mov     ax, offset simd_player ;~ 0613:2B7A
cs=0x613;eip=0x002b7d; 	X(PUSH(ax));	// 13106 push    ax ;~ 0613:2B7D
cs=0x613;eip=0x002b7e; 	T(MOV(ax, offset(dseg,word_445e6)));	// 13107 mov     ax, offset word_445E6 ; player CARSTATE ;~ 0613:2B7E
cs=0x613;eip=0x002b81; 	X(PUSH(ax));	// 13108 push    ax ;~ 0613:2B81
cs=0x613;eip=0x002b82; 	X(PUSH(cs));	// 13109 push    cs ;~ 0613:2B82
cs=0x613;eip=0x002b83; 	R(CALL(update_player_state,0));	// 13110 call    near ptr update_player_state ;~ 0613:2B83
cs=0x613;eip=0x002b86; 	T(ADD(sp, 0x0A));	// 13111 add     sp, 0Ah ;~ 0613:2B86
cs=0x613;eip=0x002b89; 	T(MOV(ax, word_44612));	// 13112 mov     ax, word_44612 ;~ 0613:2B89
cs=0x613;eip=0x002b8c; 	T(SUB(dx, dx));	// 13113 sub     dx, dx ;~ 0613:2B8C
cs=0x613;eip=0x002b8e; 	X(ADD(word_445d0, ax));	// 13114 add     word_445D0, ax ;~ 0613:2B8E
cs=0x613;eip=0x002b92; 	X(ADC(word_445d2, dx));	// 13115 adc     word_445D2, dx ;~ 0613:2B92
cs=0x613;eip=0x002b96; 	T(MOV(al, byte_448ef));	// 13116 mov     al, byte_448EF ;~ 0613:2B96
cs=0x613;eip=0x002b99; 	X(MOV(*(raddr(ss,bp+var_1c)), al));	// 13117 mov     [bp+var_1C], al ;~ 0613:2B99
cs=0x613;eip=0x002b9c; 	T(MOV(ax, word_44786));	// 13118 mov     ax, word_44786 ;~ 0613:2B9C
cs=0x613;eip=0x002b9f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 13119 mov     [bp+var_2], ax ;~ 0613:2B9F
cs=0x613;eip=0x002ba2; 	T(ax = bp+var_1e);	// 13120 lea     ax, [bp+var_1E] ;~ 0613:2BA2
cs=0x613;eip=0x002ba5; 	X(PUSH(ax));	// 13121 push    ax ;~ 0613:2BA5
cs=0x613;eip=0x002ba6; 	T(ax = bp+var_2);	// 13122 lea     ax, [bp+var_2] ;~ 0613:2BA6
cs=0x613;eip=0x002ba9; 	X(PUSH(ax));	// 13123 push    ax ;~ 0613:2BA9
cs=0x613;eip=0x002baa; 	X(PUSH(cs));	// 13124 push    cs ;~ 0613:2BAA
cs=0x613;eip=0x002bab; 	R(CALL(detect_penalty,0));	// 13125 call    near ptr detect_penalty ;~ 0613:2BAB
cs=0x613;eip=0x002bae; 	T(ADD(sp, 4));	// 13126 add     sp, 4 ;~ 0613:2BAE
cs=0x613;eip=0x002bb1; 	T(CBW);	// 13127 cbw ;~ 0613:2BB1
cs=0x613;eip=0x002bb2; 	T(MOV(si, ax));	// 13128 mov     si, ax ;~ 0613:2BB2
cs=0x613;eip=0x002bb4; 	T(OR(si, si));	// 13129 or      si, si ;~ 0613:2BB4
cs=0x613;eip=0x002bb6; 	R(JNZ(loc_172cb));	// 13130 jnz     short loc_172CB ;~ 0613:2BB6
cs=0x613;eip=0x002bb8; 	R(JMP(loc_173b3));	// 13131 jmp     loc_173B3 ;~ 0613:2BB8
loc_172cb:
	// 5091 
cs=0x613;eip=0x002bbb; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0x0FFFE));	// 13135 cmp     [bp+var_1E], 0FFFEh ;~ 0613:2BBB
cs=0x613;eip=0x002bbf; 	R(JNZ(loc_172d8));	// 13136 jnz     short loc_172D8 ;~ 0613:2BBF
cs=0x613;eip=0x002bc1; 	X(MOV(byte_448ef, 1));	// 13137 mov     byte_448EF, 1 ;~ 0613:2BC1
cs=0x613;eip=0x002bc6; 	R(JMP(loc_172e4));	// 13138 jmp     short loc_172E4 ;~ 0613:2BC6
loc_172d8:
	// 5092 
cs=0x613;eip=0x002bc8; 	T(CMP(byte_448ef, 1));	// 13142 cmp     byte_448EF, 1 ;~ 0613:2BC8
cs=0x613;eip=0x002bcd; 	R(JNZ(loc_172e9));	// 13143 jnz     short loc_172E9 ;~ 0613:2BCD
cs=0x613;eip=0x002bcf; 	X(MOV(byte_448ef, 0));	// 13144 mov     byte_448EF, 0 ;~ 0613:2BCF
loc_172e4:
	// 5093 
cs=0x613;eip=0x002bd4; 	X(MOV(byte_448f0, 0));	// 13147 mov     byte_448F0, 0 ;~ 0613:2BD4
loc_172e9:
	// 5094 
cs=0x613;eip=0x002bd9; 	T(CMP(byte_448ef, 0));	// 13150 cmp     byte_448EF, 0 ;~ 0613:2BD9
cs=0x613;eip=0x002bde; 	R(JZ(loc_172f3));	// 13151 jz      short loc_172F3 ;~ 0613:2BDE
cs=0x613;eip=0x002be0; 	R(JMP(loc_173ad));	// 13152 jmp     loc_173AD ;~ 0613:2BE0
loc_172f3:
	// 5095 
cs=0x613;eip=0x002be3; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 13156 cmp     [bp+var_2], 0 ;~ 0613:2BE3
cs=0x613;eip=0x002be7; 	R(JNZ(loc_17308));	// 13157 jnz     short loc_17308 ;~ 0613:2BE7
cs=0x613;eip=0x002be9; 	T(CMP(word_44788, 0));	// 13158 cmp     word_44788, 0 ;~ 0613:2BE9
cs=0x613;eip=0x002bee; 	R(JZ(loc_17308));	// 13159 jz      short loc_17308 ;~ 0613:2BEE
cs=0x613;eip=0x002bf0; 	X(INC(byte_446b3));	// 13160 inc     byte_446B3 ;~ 0613:2BF0
cs=0x613;eip=0x002bf4; 	R(JMP(loc_1737b));	// 13161 jmp     short loc_1737B ;~ 0613:2BF4
loc_17308:
	// 5096 
cs=0x613;eip=0x002bf8; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 13168 cmp     [bp+var_1E], 0 ;~ 0613:2BF8
cs=0x613;eip=0x002bfc; 	R(JL(loc_17322));	// 13169 jl      short loc_17322 ;~ 0613:2BFC
cs=0x613;eip=0x002bfe; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 3));	// 13170 cmp     [bp+var_1E], 3 ;~ 0613:2BFE
cs=0x613;eip=0x002c02; 	R(JGE(loc_17322));	// 13171 jge     short loc_17322 ;~ 0613:2C02
cs=0x613;eip=0x002c04; 	X(MOV(byte_448f0, 0));	// 13172 mov     byte_448F0, 0 ;~ 0613:2C04
cs=0x613;eip=0x002c09; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13173 mov     ax, [bp+var_2] ;~ 0613:2C09
cs=0x613;eip=0x002c0c; 	X(MOV(word_44786, ax));	// 13174 mov     word_44786, ax ;~ 0613:2C0C
cs=0x613;eip=0x002c0f; 	R(JMP(loc_173ad));	// 13175 jmp     loc_173AD ;~ 0613:2C0F
loc_17322:
	// 5097 
cs=0x613;eip=0x002c12; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0x0FFFF));	// 13180 cmp     [bp+var_1E], 0FFFFh ;~ 0613:2C12
cs=0x613;eip=0x002c16; 	R(JZ(loc_1732e));	// 13181 jz      short loc_1732E ;~ 0613:2C16
cs=0x613;eip=0x002c18; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 3));	// 13182 cmp     [bp+var_1E], 3 ;~ 0613:2C18
cs=0x613;eip=0x002c1c; 	R(JLE(loc_173ad));	// 13183 jle     short loc_173AD ;~ 0613:2C1C
loc_1732e:
	// 5098 
cs=0x613;eip=0x002c1e; 	T(MOV(di, word_44788));	// 13186 mov     di, word_44788 ;~ 0613:2C1E
cs=0x613;eip=0x002c22; 	T(SHL(di, 1));	// 13187 shl     di, 1 ;~ 0613:2C22
cs=0x613;eip=0x002c24; 	T(LES(bx, td01_track_file_cpy));	// 13188 les     bx, td01_track_file_cpy ;~ 0613:2C24
cs=0x613;eip=0x002c28; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13189 mov     ax, [bp+var_2] ;~ 0613:2C28
cs=0x613;eip=0x002c2b; 	T(CMP(*(dw*)(raddr(es,bx+di)), ax));	// 13190 cmp     es:[bx+di], ax ;~ 0613:2C2B
cs=0x613;eip=0x002c2e; 	R(JZ(loc_17349));	// 13191 jz      short loc_17349 ;~ 0613:2C2E
cs=0x613;eip=0x002c30; 	T(LES(bx, td02_penalty_related));	// 13192 les     bx, td02_penalty_related ;~ 0613:2C30
cs=0x613;eip=0x002c34; 	T(CMP(*(dw*)(raddr(es,bx+di)), ax));	// 13193 cmp     es:[bx+di], ax ;~ 0613:2C34
cs=0x613;eip=0x002c37; 	R(JNZ(loc_17350));	// 13194 jnz     short loc_17350 ;~ 0613:2C37
loc_17349:
	// 5099 
cs=0x613;eip=0x002c39; 	X(INC(byte_448f0));	// 13197 inc     byte_448F0 ;~ 0613:2C39
cs=0x613;eip=0x002c3d; 	R(JMP(loc_17374));	// 13198 jmp     short loc_17374 ;~ 0613:2C3D
loc_17350:
	// 5100 
cs=0x613;eip=0x002c40; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_2))));	// 13203 mov     di, [bp+var_2] ;~ 0613:2C40
cs=0x613;eip=0x002c43; 	T(SHL(di, 1));	// 13204 shl     di, 1 ;~ 0613:2C43
cs=0x613;eip=0x002c45; 	T(LES(bx, td01_track_file_cpy));	// 13205 les     bx, td01_track_file_cpy ;~ 0613:2C45
cs=0x613;eip=0x002c49; 	T(MOV(ax, word_44788));	// 13206 mov     ax, word_44788 ;~ 0613:2C49
cs=0x613;eip=0x002c4c; 	T(CMP(*(dw*)(raddr(es,bx+di)), ax));	// 13207 cmp     es:[bx+di], ax ;~ 0613:2C4C
cs=0x613;eip=0x002c4f; 	R(JZ(loc_1736a));	// 13208 jz      short loc_1736A ;~ 0613:2C4F
cs=0x613;eip=0x002c51; 	T(LES(bx, td02_penalty_related));	// 13209 les     bx, td02_penalty_related ;~ 0613:2C51
cs=0x613;eip=0x002c55; 	T(CMP(*(dw*)(raddr(es,bx+di)), ax));	// 13210 cmp     es:[bx+di], ax ;~ 0613:2C55
cs=0x613;eip=0x002c58; 	R(JNZ(loc_1736f));	// 13211 jnz     short loc_1736F ;~ 0613:2C58
loc_1736a:
	// 5101 
cs=0x613;eip=0x002c5a; 	X(MOV(byte_448ef, 2));	// 13214 mov     byte_448EF, 2 ;~ 0613:2C5A
loc_1736f:
	// 5102 
cs=0x613;eip=0x002c5f; 	X(MOV(byte_448f0, 1));	// 13217 mov     byte_448F0, 1 ;~ 0613:2C5F
loc_17374:
	// 5103 
cs=0x613;eip=0x002c64; 	T(CMP(byte_448f0, 3));	// 13220 cmp     byte_448F0, 3 ;~ 0613:2C64
cs=0x613;eip=0x002c69; 	R(JL(loc_173ad));	// 13221 jl      short loc_173AD ;~ 0613:2C69
loc_1737b:
	// 5104 
cs=0x613;eip=0x002c6b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13224 mov     ax, [bp+var_2] ;~ 0613:2C6B
cs=0x613;eip=0x002c6e; 	X(MOV(word_44786, ax));	// 13225 mov     word_44786, ax ;~ 0613:2C6E
cs=0x613;eip=0x002c71; 	X(MOV(byte_448f0, 0));	// 13226 mov     byte_448F0, 0 ;~ 0613:2C71
cs=0x613;eip=0x002c76; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 13227 cmp     [bp+var_1E], 0 ;~ 0613:2C76
cs=0x613;eip=0x002c7a; 	R(JLE(loc_173ad));	// 13228 jle     short loc_173AD ;~ 0613:2C7A
cs=0x613;eip=0x002c7c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 13229 mov     ax, [bp+var_1E] ;~ 0613:2C7C
cs=0x613;eip=0x002c7f; 	X(IMUL1_2(framespersec));	// 13230 imul    framespersec ;~ 0613:2C7F
cs=0x613;eip=0x002c83; 	T(MOV(cx, ax));	// 13231 mov     cx, ax ;~ 0613:2C83
cs=0x613;eip=0x002c85; 	T(SHL(ax, 1));	// 13232 shl     ax, 1 ;~ 0613:2C85
cs=0x613;eip=0x002c87; 	T(ADD(ax, cx));	// 13233 add     ax, cx ;~ 0613:2C87
cs=0x613;eip=0x002c89; 	X(MOV(penalty_time, ax));	// 13234 mov     penalty_time, ax ;~ 0613:2C89
cs=0x613;eip=0x002c8c; 	T(MOV(al, *(db*)(((db*)&framespersec))));	// 13235 mov     al, byte ptr framespersec ;~ 0613:2C8C
cs=0x613;eip=0x002c8f; 	T(SHL(al, 1));	// 13236 shl     al, 1 ;~ 0613:2C8F
cs=0x613;eip=0x002c91; 	T(SHL(al, 1));	// 13237 shl     al, 1 ;~ 0613:2C91
cs=0x613;eip=0x002c93; 	X(MOV(show_penalty_counter, al));	// 13238 mov     show_penalty_counter, al ;~ 0613:2C93
cs=0x613;eip=0x002c96; 	T(MOV(ax, penalty_time));	// 13239 mov     ax, penalty_time ;~ 0613:2C96
cs=0x613;eip=0x002c99; 	X(ADD(word_445de, ax));	// 13240 add     word_445DE, ax ;~ 0613:2C99
loc_173ad:
	// 5105 
cs=0x613;eip=0x002c9d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13244 mov     ax, [bp+var_2] ;~ 0613:2C9D
cs=0x613;eip=0x002ca0; 	X(MOV(word_44788, ax));	// 13245 mov     word_44788, ax ;~ 0613:2CA0
loc_173b3:
	// 5106 
cs=0x613;eip=0x002ca3; 	X(MOV(byte_448f1, 0));	// 13248 mov     byte_448F1, 0 ;~ 0613:2CA3
cs=0x613;eip=0x002ca8; 	T(CMP(byte_448ef, 1));	// 13249 cmp     byte_448EF, 1 ;~ 0613:2CA8
cs=0x613;eip=0x002cad; 	R(JNZ(loc_173c2));	// 13250 jnz     short loc_173C2 ;~ 0613:2CAD
cs=0x613;eip=0x002caf; 	R(JMP(loc_17810));	// 13251 jmp     loc_17810 ;~ 0613:2CAF
loc_173c2:
	// 5107 
cs=0x613;eip=0x002cb2; 	T(MOV(ax, 1));	// 13255 mov     ax, 1 ;~ 0613:2CB2
cs=0x613;eip=0x002cb5; 	X(PUSH(ax));	// 13256 push    ax ;~ 0613:2CB5
cs=0x613;eip=0x002cb6; 	X(PUSH(word_445fe));	// 13257 push    word_445FE ;~ 0613:2CB6
cs=0x613;eip=0x002cba; 	X(PUSH(word_44600));	// 13258 push    word_44600 ;~ 0613:2CBA
cs=0x613;eip=0x002cbe; 	X(PUSH(word_44602));	// 13259 push    word_44602 ;~ 0613:2CBE
cs=0x613;eip=0x002cc2; 	R(CALLF(mat_rot_zxy,0));	// 13260 call    mat_rot_zxy ;~ 0613:2CC2
cs=0x613;eip=0x002cc7; 	T(ADD(sp, 8));	// 13261 add     sp, 8 ;~ 0613:2CC7
cs=0x613;eip=0x002cca; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 13262 mov     [bp+var_20], ax ;~ 0613:2CCA
cs=0x613;eip=0x002ccd; 	T(CMP(byte_448ef, 2));	// 13263 cmp     byte_448EF, 2 ;~ 0613:2CCD
cs=0x613;eip=0x002cd2; 	R(JNZ(loc_173f6));	// 13264 jnz     short loc_173F6 ;~ 0613:2CD2
cs=0x613;eip=0x002cd4; 	T(CMP(byte_446af, 0));	// 13265 cmp     byte_446AF, 0 ;~ 0613:2CD4
cs=0x613;eip=0x002cd9; 	R(JNZ(loc_173f0));	// 13266 jnz     short loc_173F0 ;~ 0613:2CD9
cs=0x613;eip=0x002cdb; 	X(MOV(byte_448f1, 3));	// 13267 mov     byte_448F1, 3 ;~ 0613:2CDB
loc_173f0:
	// 5108 
cs=0x613;eip=0x002ce0; 	T(MOV(ax, word_44788));	// 13270 mov     ax, word_44788 ;~ 0613:2CE0
cs=0x613;eip=0x002ce3; 	R(JMP(loc_174c9));	// 13271 jmp     loc_174C9 ;~ 0613:2CE3
loc_173f6:
	// 5109 
cs=0x613;eip=0x002ce6; 	T(CMP(word_44630, 0x0FFFF));	// 13275 cmp     word_44630, 0FFFFh ;~ 0613:2CE6
cs=0x613;eip=0x002ceb; 	R(JNZ(loc_17402));	// 13276 jnz     short loc_17402 ;~ 0613:2CEB
loc_173fd:
	// 5110 
cs=0x613;eip=0x002ced; 	T(SUB(si, si));	// 13279 sub     si, si ;~ 0613:2CED
cs=0x613;eip=0x002cef; 	R(JMP(loc_174b3));	// 13280 jmp     loc_174B3 ;~ 0613:2CEF
loc_17402:
	// 5111 
cs=0x613;eip=0x002cf2; 	T(CMP(*(raddr(ss,bp+var_1c)), 0));	// 13284 cmp     [bp+var_1C], 0 ;~ 0613:2CF2
cs=0x613;eip=0x002cf6; 	R(JZ(loc_1740f));	// 13285 jz      short loc_1740F ;~ 0613:2CF6
cs=0x613;eip=0x002cf8; 	T(CMP(byte_448ef, 0));	// 13286 cmp     byte_448EF, 0 ;~ 0613:2CF8
cs=0x613;eip=0x002cfd; 	R(JZ(loc_17431));	// 13287 jz      short loc_17431 ;~ 0613:2CFD
loc_1740f:
	// 5112 
cs=0x613;eip=0x002cff; 	T(MOV(ax, word_44786));	// 13290 mov     ax, word_44786 ;~ 0613:2CFF
cs=0x613;eip=0x002d02; 	T(CMP(word_44630, ax));	// 13291 cmp     word_44630, ax ;~ 0613:2D02
cs=0x613;eip=0x002d06; 	R(JZ(loc_1743a));	// 13292 jz      short loc_1743A ;~ 0613:2D06
cs=0x613;eip=0x002d08; 	T(MOV(di, ax));	// 13293 mov     di, ax ;~ 0613:2D08
cs=0x613;eip=0x002d0a; 	T(SHL(di, 1));	// 13294 shl     di, 1 ;~ 0613:2D0A
cs=0x613;eip=0x002d0c; 	T(LES(bx, td01_track_file_cpy));	// 13295 les     bx, td01_track_file_cpy ;~ 0613:2D0C
cs=0x613;eip=0x002d10; 	T(MOV(ax, word_44630));	// 13296 mov     ax, word_44630 ;~ 0613:2D10
cs=0x613;eip=0x002d13; 	T(CMP(*(dw*)(raddr(es,bx+di)), ax));	// 13297 cmp     es:[bx+di], ax ;~ 0613:2D13
cs=0x613;eip=0x002d16; 	R(JZ(loc_1743a));	// 13298 jz      short loc_1743A ;~ 0613:2D16
cs=0x613;eip=0x002d18; 	T(LES(bx, td02_penalty_related));	// 13299 les     bx, td02_penalty_related ;~ 0613:2D18
cs=0x613;eip=0x002d1c; 	T(CMP(*(dw*)(raddr(es,bx+di)), ax));	// 13300 cmp     es:[bx+di], ax ;~ 0613:2D1C
cs=0x613;eip=0x002d1f; 	R(JZ(loc_1743a));	// 13301 jz      short loc_1743A ;~ 0613:2D1F
loc_17431:
	// 5113 
cs=0x613;eip=0x002d21; 	X(MOV(word_44630, 0x0FFFF));	// 13304 mov     word_44630, 0FFFFh ;~ 0613:2D21
cs=0x613;eip=0x002d27; 	R(JMP(loc_173fd));	// 13305 jmp     short loc_173FD ;~ 0613:2D27
loc_1743a:
	// 5114 
cs=0x613;eip=0x002d2a; 	T(MOV(ax, word_4468a));	// 13311 mov     ax, word_4468A ;~ 0613:2D2A
cs=0x613;eip=0x002d2d; 	T(MOV(cx, word_445e6));	// 13312 mov     cx, word_445E6 ;~ 0613:2D2D
cs=0x613;eip=0x002d31; 	T(MOV(bx, word_445e8));	// 13313 mov     bx, word_445E8 ;~ 0613:2D31
cs=0x613;eip=0x002d35; 	T(MOV(dx, cx));	// 13314 mov     dx, cx ;~ 0613:2D35
cs=0x613;eip=0x002d37; 	T(MOV(cl, 6));	// 13315 mov     cl, 6 ;~ 0613:2D37
loc_17449:
	// 5115 
cs=0x613;eip=0x002d39; 	T(SAR(bx, 1));	// 13318 sar     bx, 1 ;~ 0613:2D39
cs=0x613;eip=0x002d3b; 	T(RCR(dx, 1));	// 13319 rcr     dx, 1 ;~ 0613:2D3B
cs=0x613;eip=0x002d3d; 	T(DEC(cl));	// 13320 dec     cl ;~ 0613:2D3D
cs=0x613;eip=0x002d3f; 	R(JNZ(loc_17449));	// 13321 jnz     short loc_17449 ;~ 0613:2D3F
cs=0x613;eip=0x002d41; 	T(SUB(ax, dx));	// 13322 sub     ax, dx ;~ 0613:2D41
cs=0x613;eip=0x002d43; 	X(MOV(*(dw*)(raddr(ss,bp+var_32)), ax));	// 13323 mov     [bp+var_32], ax ;~ 0613:2D43
cs=0x613;eip=0x002d46; 	T(CMP(word_4468c, 0x0FFFF));	// 13324 cmp     word_4468C, 0FFFFh ;~ 0613:2D46
cs=0x613;eip=0x002d4b; 	R(JZ(loc_1747c));	// 13325 jz      short loc_1747C ;~ 0613:2D4B
cs=0x613;eip=0x002d4d; 	T(MOV(ax, word_4468c));	// 13326 mov     ax, word_4468C ;~ 0613:2D4D
cs=0x613;eip=0x002d50; 	T(MOV(cx, word_445ea));	// 13327 mov     cx, word_445EA ;~ 0613:2D50
cs=0x613;eip=0x002d54; 	T(MOV(bx, word_445ec));	// 13328 mov     bx, word_445EC ;~ 0613:2D54
cs=0x613;eip=0x002d58; 	T(MOV(dx, cx));	// 13329 mov     dx, cx ;~ 0613:2D58
cs=0x613;eip=0x002d5a; 	T(MOV(cl, 6));	// 13330 mov     cl, 6 ;~ 0613:2D5A
loc_1746c:
	// 5116 
cs=0x613;eip=0x002d5c; 	T(SAR(bx, 1));	// 13333 sar     bx, 1 ;~ 0613:2D5C
cs=0x613;eip=0x002d5e; 	T(RCR(dx, 1));	// 13334 rcr     dx, 1 ;~ 0613:2D5E
cs=0x613;eip=0x002d60; 	T(DEC(cl));	// 13335 dec     cl ;~ 0613:2D60
cs=0x613;eip=0x002d62; 	R(JNZ(loc_1746c));	// 13336 jnz     short loc_1746C ;~ 0613:2D62
cs=0x613;eip=0x002d64; 	T(SUB(ax, dx));	// 13337 sub     ax, dx ;~ 0613:2D64
cs=0x613;eip=0x002d66; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 13338 mov     [bp+var_30], ax ;~ 0613:2D66
cs=0x613;eip=0x002d69; 	R(JMP(loc_17481));	// 13339 jmp     short loc_17481 ;~ 0613:2D69
loc_1747c:
	// 5117 
cs=0x613;eip=0x002d6c; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), 0));	// 13344 mov     [bp+var_30], 0 ;~ 0613:2D6C
loc_17481:
	// 5118 
cs=0x613;eip=0x002d71; 	T(MOV(ax, word_4468e));	// 13347 mov     ax, word_4468E ;~ 0613:2D71
cs=0x613;eip=0x002d74; 	T(MOV(cx, word_445ee));	// 13348 mov     cx, word_445EE ;~ 0613:2D74
cs=0x613;eip=0x002d78; 	T(MOV(bx, word_445f0));	// 13349 mov     bx, word_445F0 ;~ 0613:2D78
cs=0x613;eip=0x002d7c; 	T(MOV(dx, cx));	// 13350 mov     dx, cx ;~ 0613:2D7C
cs=0x613;eip=0x002d7e; 	T(MOV(cl, 6));	// 13351 mov     cl, 6 ;~ 0613:2D7E
loc_17490:
	// 5119 
cs=0x613;eip=0x002d80; 	T(SAR(bx, 1));	// 13354 sar     bx, 1 ;~ 0613:2D80
cs=0x613;eip=0x002d82; 	T(RCR(dx, 1));	// 13355 rcr     dx, 1 ;~ 0613:2D82
cs=0x613;eip=0x002d84; 	T(DEC(cl));	// 13356 dec     cl ;~ 0613:2D84
cs=0x613;eip=0x002d86; 	R(JNZ(loc_17490));	// 13357 jnz     short loc_17490 ;~ 0613:2D86
cs=0x613;eip=0x002d88; 	T(SUB(ax, dx));	// 13358 sub     ax, dx ;~ 0613:2D88
cs=0x613;eip=0x002d8a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 13359 mov     [bp+var_2E], ax ;~ 0613:2D8A
cs=0x613;eip=0x002d8d; 	T(ax = bp+var_38);	// 13360 lea     ax, [bp+var_38] ;~ 0613:2D8D
cs=0x613;eip=0x002d90; 	X(PUSH(ax));	// 13361 push    ax ;~ 0613:2D90
cs=0x613;eip=0x002d91; 	X(PUSH(*(dw*)(raddr(ss,bp+var_20))));	// 13362 push    [bp+var_20] ;~ 0613:2D91
cs=0x613;eip=0x002d94; 	T(ax = bp+var_32);	// 13363 lea     ax, [bp+var_32] ;~ 0613:2D94
cs=0x613;eip=0x002d97; 	X(PUSH(ax));	// 13364 push    ax ;~ 0613:2D97
cs=0x613;eip=0x002d98; 	R(CALLF(mat_mul_vector,0));	// 13365 call    mat_mul_vector ;~ 0613:2D98
cs=0x613;eip=0x002d9d; 	T(ADD(sp, 6));	// 13366 add     sp, 6 ;~ 0613:2D9D
cs=0x613;eip=0x002da0; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_34))));	// 13367 mov     si, [bp+var_34] ;~ 0613:2DA0
loc_174b3:
	// 5120 
cs=0x613;eip=0x002da3; 	T(CMP(si, 0x113));	// 13370 cmp     si, 113h ;~ 0613:2DA3
cs=0x613;eip=0x002da7; 	R(JL(loc_174bc));	// 13371 jl      short loc_174BC ;~ 0613:2DA7
cs=0x613;eip=0x002da9; 	R(JMP(loc_17699));	// 13372 jmp     loc_17699 ;~ 0613:2DA9
loc_174bc:
	// 5121 
cs=0x613;eip=0x002dac; 	T(CMP(word_44630, 0x0FFFF));	// 13376 cmp     word_44630, 0FFFFh ;~ 0613:2DAC
cs=0x613;eip=0x002db1; 	R(JZ(loc_174c6));	// 13377 jz      short loc_174C6 ;~ 0613:2DB1
cs=0x613;eip=0x002db3; 	R(JMP(loc_1764c));	// 13378 jmp     loc_1764C ;~ 0613:2DB3
loc_174c6:
	// 5122 
cs=0x613;eip=0x002db6; 	T(MOV(ax, word_44786));	// 13382 mov     ax, word_44786 ;~ 0613:2DB6
loc_174c9:
	// 5123 
cs=0x613;eip=0x002db9; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 13385 mov     [bp+var_2], ax ;~ 0613:2DB9
cs=0x613;eip=0x002dbc; 	T(MOV(bx, ax));	// 13386 mov     bx, ax ;~ 0613:2DBC
cs=0x613;eip=0x002dbe; 	T(SHL(bx, 1));	// 13387 shl     bx, 1 ;~ 0613:2DBE
cs=0x613;eip=0x002dc0; 	T(LES(di, td02_penalty_related));	// 13388 les     di, td02_penalty_related ;~ 0613:2DC0
cs=0x613;eip=0x002dc4; 	T(CMP(*(dw*)(raddr(es,bx+di)), 0x0FFFF));	// 13389 cmp     word ptr es:[bx+di], 0FFFFh ;~ 0613:2DC4
cs=0x613;eip=0x002dc8; 	R(JZ(loc_174dd));	// 13390 jz      short loc_174DD ;~ 0613:2DC8
cs=0x613;eip=0x002dca; 	R(JMP(loc_17771));	// 13391 jmp     loc_17771 ;~ 0613:2DCA
loc_174dd:
	// 5124 
cs=0x613;eip=0x002dcd; 	X(MOV(*(raddr(ss,bp+var_2a)), 0));	// 13395 mov     [bp+var_2A], 0 ;~ 0613:2DCD
cs=0x613;eip=0x002dd1; 	X(MOV(*(raddr(ss,bp+var_2c)), 0));	// 13396 mov     [bp+var_2C], 0 ;~ 0613:2DD1
loc_174e5:
	// 5125 
cs=0x613;eip=0x002dd5; 	T(SUB(ax, ax));	// 13399 sub     ax, ax ;~ 0613:2DD5
cs=0x613;eip=0x002dd7; 	X(PUSH(ax));	// 13400 push    ax ;~ 0613:2DD7
cs=0x613;eip=0x002dd8; 	T(MOV(al, *(raddr(ss,bp+var_2c))));	// 13401 mov     al, [bp+var_2C] ;~ 0613:2DD8
cs=0x613;eip=0x002ddb; 	T(SUB(ah, ah));	// 13402 sub     ah, ah ;~ 0613:2DDB
cs=0x613;eip=0x002ddd; 	X(PUSH(ax));	// 13403 push    ax ;~ 0613:2DDD
cs=0x613;eip=0x002dde; 	T(MOV(ax, offset(dseg,word_4468a)));	// 13404 mov     ax, offset word_4468A ;~ 0613:2DDE
cs=0x613;eip=0x002de1; 	X(PUSH(ax));	// 13405 push    ax ;~ 0613:2DE1
cs=0x613;eip=0x002de2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 13406 push    [bp+var_2] ;~ 0613:2DE2
cs=0x613;eip=0x002de5; 	X(PUSH(cs));	// 13407 push    cs ;~ 0613:2DE5
cs=0x613;eip=0x002de6; 	R(CALL(sub_18d60,0));	// 13408 call    near ptr sub_18D60 ;~ 0613:2DE6
cs=0x613;eip=0x002de9; 	T(ADD(sp, 8));	// 13409 add     sp, 8 ;~ 0613:2DE9
cs=0x613;eip=0x002dec; 	X(MOV(*(raddr(ss,bp+var_2a)), al));	// 13410 mov     [bp+var_2A], al ;~ 0613:2DEC
cs=0x613;eip=0x002def; 	X(PUSH(si));	// 13411 push    si ;~ 0613:2DEF
cs=0x613;eip=0x002df0; 	T(di = bp+var_28);	// 13412 lea     di, [bp+var_28] ;~ 0613:2DF0
cs=0x613;eip=0x002df3; 	T(MOV(si, offset(dseg,word_4468a)));	// 13413 mov     si, offset word_4468A ;~ 0613:2DF3
cs=0x613;eip=0x002df6; 	X(PUSH(ss));	// 13414 push    ss ;~ 0613:2DF6
cs=0x613;eip=0x002df7; 	X(POP(es));	// 13415 pop     es ;~ 0613:2DF7
cs=0x613;eip=0x002df8; 	X(MOVSW);	// 13416 movsw ;~ 0613:2DF8
cs=0x613;eip=0x002df9; 	X(MOVSW);	// 13417 movsw ;~ 0613:2DF9
cs=0x613;eip=0x002dfa; 	X(MOVSW);	// 13418 movsw ;~ 0613:2DFA
cs=0x613;eip=0x002dfb; 	X(POP(si));	// 13419 pop     si ;~ 0613:2DFB
cs=0x613;eip=0x002dfc; 	T(MOV(ax, word_445e6));	// 13420 mov     ax, word_445E6 ;~ 0613:2DFC
cs=0x613;eip=0x002dff; 	T(MOV(dx, word_445e8));	// 13421 mov     dx, word_445E8 ;~ 0613:2DFF
cs=0x613;eip=0x002e03; 	T(MOV(cl, 6));	// 13422 mov     cl, 6 ;~ 0613:2E03
loc_17515:
	// 5126 
cs=0x613;eip=0x002e05; 	T(SAR(dx, 1));	// 13425 sar     dx, 1 ;~ 0613:2E05
cs=0x613;eip=0x002e07; 	T(RCR(ax, 1));	// 13426 rcr     ax, 1 ;~ 0613:2E07
cs=0x613;eip=0x002e09; 	T(DEC(cl));	// 13427 dec     cl ;~ 0613:2E09
cs=0x613;eip=0x002e0b; 	R(JNZ(loc_17515));	// 13428 jnz     short loc_17515 ;~ 0613:2E0B
cs=0x613;eip=0x002e0d; 	X(SUB(*(dw*)(raddr(ss,bp+var_28)), ax));	// 13429 sub     [bp+var_28], ax ;~ 0613:2E0D
cs=0x613;eip=0x002e10; 	T(CMP(*(dw*)(raddr(ss,bp+var_26)), 0x0FFFF));	// 13430 cmp     [bp+var_26], 0FFFFh ;~ 0613:2E10
cs=0x613;eip=0x002e14; 	R(JNZ(loc_1753e));	// 13431 jnz     short loc_1753E ;~ 0613:2E14
cs=0x613;eip=0x002e16; 	T(MOV(ax, word_445ea));	// 13432 mov     ax, word_445EA ;~ 0613:2E16
cs=0x613;eip=0x002e19; 	T(MOV(dx, word_445ec));	// 13433 mov     dx, word_445EC ;~ 0613:2E19
cs=0x613;eip=0x002e1d; 	T(MOV(cl, 6));	// 13434 mov     cl, 6 ;~ 0613:2E1D
loc_1752f:
	// 5127 
cs=0x613;eip=0x002e1f; 	T(SAR(dx, 1));	// 13437 sar     dx, 1 ;~ 0613:2E1F
cs=0x613;eip=0x002e21; 	T(RCR(ax, 1));	// 13438 rcr     ax, 1 ;~ 0613:2E21
cs=0x613;eip=0x002e23; 	T(DEC(cl));	// 13439 dec     cl ;~ 0613:2E23
cs=0x613;eip=0x002e25; 	R(JNZ(loc_1752f));	// 13440 jnz     short loc_1752F ;~ 0613:2E25
cs=0x613;eip=0x002e27; 	T(NEG(ax));	// 13441 neg     ax ;~ 0613:2E27
cs=0x613;eip=0x002e29; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), ax));	// 13442 mov     [bp+var_26], ax ;~ 0613:2E29
cs=0x613;eip=0x002e2c; 	R(JMP(loc_17552));	// 13443 jmp     short loc_17552 ;~ 0613:2E2C
loc_1753e:
	// 5128 
cs=0x613;eip=0x002e2e; 	T(MOV(ax, word_445ea));	// 13447 mov     ax, word_445EA ;~ 0613:2E2E
cs=0x613;eip=0x002e31; 	T(MOV(dx, word_445ec));	// 13448 mov     dx, word_445EC ;~ 0613:2E31
cs=0x613;eip=0x002e35; 	T(MOV(cl, 6));	// 13449 mov     cl, 6 ;~ 0613:2E35
loc_17547:
	// 5129 
cs=0x613;eip=0x002e37; 	T(SAR(dx, 1));	// 13452 sar     dx, 1 ;~ 0613:2E37
cs=0x613;eip=0x002e39; 	T(RCR(ax, 1));	// 13453 rcr     ax, 1 ;~ 0613:2E39
cs=0x613;eip=0x002e3b; 	T(DEC(cl));	// 13454 dec     cl ;~ 0613:2E3B
cs=0x613;eip=0x002e3d; 	R(JNZ(loc_17547));	// 13455 jnz     short loc_17547 ;~ 0613:2E3D
cs=0x613;eip=0x002e3f; 	X(SUB(*(dw*)(raddr(ss,bp+var_26)), ax));	// 13456 sub     [bp+var_26], ax ;~ 0613:2E3F
loc_17552:
	// 5130 
cs=0x613;eip=0x002e42; 	T(MOV(ax, word_445ee));	// 13459 mov     ax, word_445EE ;~ 0613:2E42
cs=0x613;eip=0x002e45; 	T(MOV(dx, word_445f0));	// 13460 mov     dx, word_445F0 ;~ 0613:2E45
cs=0x613;eip=0x002e49; 	T(MOV(cl, 6));	// 13461 mov     cl, 6 ;~ 0613:2E49
loc_1755b:
	// 5131 
cs=0x613;eip=0x002e4b; 	T(SAR(dx, 1));	// 13464 sar     dx, 1 ;~ 0613:2E4B
cs=0x613;eip=0x002e4d; 	T(RCR(ax, 1));	// 13465 rcr     ax, 1 ;~ 0613:2E4D
cs=0x613;eip=0x002e4f; 	T(DEC(cl));	// 13466 dec     cl ;~ 0613:2E4F
cs=0x613;eip=0x002e51; 	R(JNZ(loc_1755b));	// 13467 jnz     short loc_1755B ;~ 0613:2E51
cs=0x613;eip=0x002e53; 	X(SUB(*(dw*)(raddr(ss,bp+var_24)), ax));	// 13468 sub     [bp+var_24], ax ;~ 0613:2E53
cs=0x613;eip=0x002e56; 	T(ax = bp+var_38);	// 13469 lea     ax, [bp+var_38] ;~ 0613:2E56
cs=0x613;eip=0x002e59; 	X(PUSH(ax));	// 13470 push    ax ;~ 0613:2E59
cs=0x613;eip=0x002e5a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_20))));	// 13471 push    [bp+var_20] ;~ 0613:2E5A
cs=0x613;eip=0x002e5d; 	T(ax = bp+var_28);	// 13472 lea     ax, [bp+var_28] ;~ 0613:2E5D
cs=0x613;eip=0x002e60; 	X(PUSH(ax));	// 13473 push    ax ;~ 0613:2E60
cs=0x613;eip=0x002e61; 	R(CALLF(mat_mul_vector,0));	// 13474 call    mat_mul_vector ;~ 0613:2E61
cs=0x613;eip=0x002e66; 	T(ADD(sp, 6));	// 13475 add     sp, 6 ;~ 0613:2E66
cs=0x613;eip=0x002e69; 	T(CMP(*(raddr(ss,bp+var_2c)), 0));	// 13476 cmp     [bp+var_2C], 0 ;~ 0613:2E69
cs=0x613;eip=0x002e6d; 	R(JZ(loc_1758d));	// 13477 jz      short loc_1758D ;~ 0613:2E6D
cs=0x613;eip=0x002e6f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2e))));	// 13478 mov     ax, [bp+var_2E] ;~ 0613:2E6F
cs=0x613;eip=0x002e72; 	T(CMP(*(dw*)(raddr(ss,bp+var_34)), ax));	// 13479 cmp     [bp+var_34], ax ;~ 0613:2E72
cs=0x613;eip=0x002e75; 	R(JGE(loc_17599));	// 13480 jge     short loc_17599 ;~ 0613:2E75
cs=0x613;eip=0x002e77; 	T(CMP(*(dw*)(raddr(ss,bp+var_34)), 0));	// 13481 cmp     [bp+var_34], 0 ;~ 0613:2E77
cs=0x613;eip=0x002e7b; 	R(JLE(loc_17599));	// 13482 jle     short loc_17599 ;~ 0613:2E7B
loc_1758d:
	// 5132 
cs=0x613;eip=0x002e7d; 	T(MOV(al, *(raddr(ss,bp+var_2c))));	// 13485 mov     al, [bp+var_2C] ;~ 0613:2E7D
cs=0x613;eip=0x002e80; 	X(MOV(*(raddr(ss,bp+var_3a)), al));	// 13486 mov     [bp+var_3A], al ;~ 0613:2E80
cs=0x613;eip=0x002e83; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_34))));	// 13487 mov     ax, [bp+var_34] ;~ 0613:2E83
cs=0x613;eip=0x002e86; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 13488 mov     [bp+var_2E], ax ;~ 0613:2E86
loc_17599:
	// 5133 
cs=0x613;eip=0x002e89; 	X(INC(*(raddr(ss,bp+var_2c))));	// 13492 inc     [bp+var_2C] ;~ 0613:2E89
cs=0x613;eip=0x002e8c; 	T(CMP(*(raddr(ss,bp+var_2a)), 0));	// 13493 cmp     [bp+var_2A], 0 ;~ 0613:2E8C
cs=0x613;eip=0x002e90; 	R(JNZ(loc_175a5));	// 13494 jnz     short loc_175A5 ;~ 0613:2E90
cs=0x613;eip=0x002e92; 	R(JMP(loc_174e5));	// 13495 jmp     loc_174E5 ;~ 0613:2E92
loc_175a5:
	// 5134 
cs=0x613;eip=0x002e95; 	T(CMP(byte_448ef, 2));	// 13499 cmp     byte_448EF, 2 ;~ 0613:2E95
cs=0x613;eip=0x002e9a; 	R(JZ(loc_175af));	// 13500 jz      short loc_175AF ;~ 0613:2E9A
cs=0x613;eip=0x002e9c; 	R(JMP(loc_17640));	// 13501 jmp     loc_17640 ;~ 0613:2E9C
loc_175af:
	// 5135 
cs=0x613;eip=0x002e9f; 	T(CMP(*(raddr(ss,bp+var_3a)), 0));	// 13505 cmp     [bp+var_3A], 0 ;~ 0613:2E9F
cs=0x613;eip=0x002ea3; 	R(JNZ(loc_175d0));	// 13506 jnz     short loc_175D0 ;~ 0613:2EA3
cs=0x613;eip=0x002ea5; 	T(SUB(ax, ax));	// 13507 sub     ax, ax ;~ 0613:2EA5
cs=0x613;eip=0x002ea7; 	X(PUSH(ax));	// 13508 push    ax ;~ 0613:2EA7
cs=0x613;eip=0x002ea8; 	X(PUSH(ax));	// 13509 push    ax ;~ 0613:2EA8
cs=0x613;eip=0x002ea9; 	T(ax = bp+var_52);	// 13510 lea     ax, [bp+var_52] ;~ 0613:2EA9
cs=0x613;eip=0x002eac; 	X(PUSH(ax));	// 13511 push    ax ;~ 0613:2EAC
cs=0x613;eip=0x002ead; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 13512 push    [bp+var_2] ;~ 0613:2EAD
cs=0x613;eip=0x002eb0; 	X(PUSH(cs));	// 13513 push    cs ;~ 0613:2EB0
cs=0x613;eip=0x002eb1; 	R(CALL(sub_18d60,0));	// 13514 call    near ptr sub_18D60 ;~ 0613:2EB1
cs=0x613;eip=0x002eb4; 	T(ADD(sp, 8));	// 13515 add     sp, 8 ;~ 0613:2EB4
cs=0x613;eip=0x002eb7; 	T(SUB(ax, ax));	// 13516 sub     ax, ax ;~ 0613:2EB7
cs=0x613;eip=0x002eb9; 	X(PUSH(ax));	// 13517 push    ax ;~ 0613:2EB9
cs=0x613;eip=0x002eba; 	T(MOV(ax, 1));	// 13518 mov     ax, 1 ;~ 0613:2EBA
cs=0x613;eip=0x002ebd; 	R(JMP(loc_175f0));	// 13519 jmp     short loc_175F0 ;~ 0613:2EBD
loc_175d0:
	// 5136 
cs=0x613;eip=0x002ec0; 	T(SUB(ax, ax));	// 13524 sub     ax, ax ;~ 0613:2EC0
cs=0x613;eip=0x002ec2; 	X(PUSH(ax));	// 13525 push    ax ;~ 0613:2EC2
cs=0x613;eip=0x002ec3; 	T(MOV(al, *(raddr(ss,bp+var_3a))));	// 13526 mov     al, [bp+var_3A] ;~ 0613:2EC3
cs=0x613;eip=0x002ec6; 	T(DEC(al));	// 13527 dec     al ;~ 0613:2EC6
cs=0x613;eip=0x002ec8; 	T(CBW);	// 13528 cbw ;~ 0613:2EC8
cs=0x613;eip=0x002ec9; 	X(PUSH(ax));	// 13529 push    ax ;~ 0613:2EC9
cs=0x613;eip=0x002eca; 	T(ax = bp+var_52);	// 13530 lea     ax, [bp+var_52] ;~ 0613:2ECA
cs=0x613;eip=0x002ecd; 	X(PUSH(ax));	// 13531 push    ax ;~ 0613:2ECD
cs=0x613;eip=0x002ece; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 13532 push    [bp+var_2] ;~ 0613:2ECE
cs=0x613;eip=0x002ed1; 	X(PUSH(cs));	// 13533 push    cs ;~ 0613:2ED1
cs=0x613;eip=0x002ed2; 	R(CALL(sub_18d60,0));	// 13534 call    near ptr sub_18D60 ;~ 0613:2ED2
cs=0x613;eip=0x002ed5; 	T(ADD(sp, 8));	// 13535 add     sp, 8 ;~ 0613:2ED5
cs=0x613;eip=0x002ed8; 	T(SUB(ax, ax));	// 13536 sub     ax, ax ;~ 0613:2ED8
cs=0x613;eip=0x002eda; 	X(PUSH(ax));	// 13537 push    ax ;~ 0613:2EDA
cs=0x613;eip=0x002edb; 	T(MOV(al, *(raddr(ss,bp+var_3a))));	// 13538 mov     al, [bp+var_3A] ;~ 0613:2EDB
cs=0x613;eip=0x002ede; 	T(SUB(ah, ah));	// 13539 sub     ah, ah ;~ 0613:2EDE
loc_175f0:
	// 5137 
cs=0x613;eip=0x002ee0; 	X(PUSH(ax));	// 13542 push    ax ;~ 0613:2EE0
cs=0x613;eip=0x002ee1; 	T(ax = bp+var_1a);	// 13543 lea     ax, [bp+var_1A] ;~ 0613:2EE1
cs=0x613;eip=0x002ee4; 	X(PUSH(ax));	// 13544 push    ax ;~ 0613:2EE4
cs=0x613;eip=0x002ee5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 13545 push    [bp+var_2] ;~ 0613:2EE5
cs=0x613;eip=0x002ee8; 	X(PUSH(cs));	// 13546 push    cs ;~ 0613:2EE8
cs=0x613;eip=0x002ee9; 	R(CALL(sub_18d60,0));	// 13547 call    near ptr sub_18D60 ;~ 0613:2EE9
cs=0x613;eip=0x002eec; 	T(ADD(sp, 8));	// 13548 add     sp, 8 ;~ 0613:2EEC
cs=0x613;eip=0x002eef; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 13549 mov     ax, [bp+var_16] ;~ 0613:2EEF
cs=0x613;eip=0x002ef2; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4e))));	// 13550 sub     ax, [bp+var_4E] ;~ 0613:2EF2
cs=0x613;eip=0x002ef5; 	X(PUSH(ax));	// 13551 push    ax ;~ 0613:2EF5
cs=0x613;eip=0x002ef6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_52))));	// 13552 mov     ax, [bp+var_52] ;~ 0613:2EF6
cs=0x613;eip=0x002ef9; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 13553 sub     ax, [bp+var_1A] ;~ 0613:2EF9
cs=0x613;eip=0x002efc; 	X(PUSH(ax));	// 13554 push    ax ;~ 0613:2EFC
cs=0x613;eip=0x002efd; 	R(CALLF(polarangle,0));	// 13555 call    polarAngle ;~ 0613:2EFD
cs=0x613;eip=0x002f02; 	T(ADD(sp, 4));	// 13556 add     sp, 4 ;~ 0613:2F02
cs=0x613;eip=0x002f05; 	T(MOV(si, ax));	// 13557 mov     si, ax ;~ 0613:2F05
cs=0x613;eip=0x002f07; 	T(AND(si, 0x3FF));	// 13558 and     si, 3FFh ;~ 0613:2F07
cs=0x613;eip=0x002f0b; 	T(MOV(ax, word_445fe));	// 13559 mov     ax, word_445FE ;~ 0613:2F0B
cs=0x613;eip=0x002f0e; 	T(SUB(ax, si));	// 13560 sub     ax, si ;~ 0613:2F0E
cs=0x613;eip=0x002f10; 	T(AND(ah, 3));	// 13561 and     ah, 3 ;~ 0613:2F10
cs=0x613;eip=0x002f13; 	T(MOV(si, ax));	// 13562 mov     si, ax ;~ 0613:2F13
cs=0x613;eip=0x002f15; 	T(CMP(si, 0x380));	// 13563 cmp     si, 380h ;~ 0613:2F15
cs=0x613;eip=0x002f19; 	R(JG(loc_17631));	// 13564 jg      short loc_17631 ;~ 0613:2F19
cs=0x613;eip=0x002f1b; 	T(CMP(si, 0x80));	// 13565 cmp     si, 80h ; '€' ;~ 0613:2F1B
cs=0x613;eip=0x002f1f; 	R(JGE(loc_1764c));	// 13566 jge     short loc_1764C ;~ 0613:2F1F
loc_17631:
	// 5138 
cs=0x613;eip=0x002f21; 	X(MOV(byte_448ef, 0));	// 13569 mov     byte_448EF, 0 ;~ 0613:2F21
cs=0x613;eip=0x002f26; 	X(MOV(byte_448f0, 1));	// 13570 mov     byte_448F0, 1 ;~ 0613:2F26
cs=0x613;eip=0x002f2b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 13571 mov     ax, [bp+var_2] ;~ 0613:2F2B
cs=0x613;eip=0x002f2e; 	R(JMP(loc_17643));	// 13572 jmp     short loc_17643 ;~ 0613:2F2E
loc_17640:
	// 5139 
cs=0x613;eip=0x002f30; 	T(MOV(ax, word_44786));	// 13576 mov     ax, word_44786 ;~ 0613:2F30
loc_17643:
	// 5140 
cs=0x613;eip=0x002f33; 	X(MOV(word_44630, ax));	// 13579 mov     word_44630, ax ;~ 0613:2F33
cs=0x613;eip=0x002f36; 	T(MOV(al, *(raddr(ss,bp+var_3a))));	// 13580 mov     al, [bp+var_3A] ;~ 0613:2F36
cs=0x613;eip=0x002f39; 	X(MOV(byte_446b4, al));	// 13581 mov     byte_446B4, al ;~ 0613:2F39
loc_1764c:
	// 5141 
cs=0x613;eip=0x002f3c; 	T(SUB(ax, ax));	// 13585 sub     ax, ax ;~ 0613:2F3C
cs=0x613;eip=0x002f3e; 	X(PUSH(ax));	// 13586 push    ax ;~ 0613:2F3E
cs=0x613;eip=0x002f3f; 	T(MOV(al, byte_446b4));	// 13587 mov     al, byte_446B4 ;~ 0613:2F3F
cs=0x613;eip=0x002f42; 	X(INC(byte_446b4));	// 13588 inc     byte_446B4 ;~ 0613:2F42
cs=0x613;eip=0x002f46; 	T(SUB(ah, ah));	// 13589 sub     ah, ah ;~ 0613:2F46
cs=0x613;eip=0x002f48; 	X(PUSH(ax));	// 13590 push    ax ;~ 0613:2F48
cs=0x613;eip=0x002f49; 	T(MOV(ax, offset(dseg,word_4468a)));	// 13591 mov     ax, offset word_4468A ;~ 0613:2F49
cs=0x613;eip=0x002f4c; 	X(PUSH(ax));	// 13592 push    ax ;~ 0613:2F4C
cs=0x613;eip=0x002f4d; 	X(PUSH(word_44630));	// 13593 push    word_44630 ;~ 0613:2F4D
cs=0x613;eip=0x002f51; 	X(PUSH(cs));	// 13594 push    cs ;~ 0613:2F51
cs=0x613;eip=0x002f52; 	R(CALL(sub_18d60,0));	// 13595 call    near ptr sub_18D60 ;~ 0613:2F52
cs=0x613;eip=0x002f55; 	T(ADD(sp, 8));	// 13596 add     sp, 8 ;~ 0613:2F55
cs=0x613;eip=0x002f58; 	T(OR(al, al));	// 13597 or      al, al ;~ 0613:2F58
cs=0x613;eip=0x002f5a; 	R(JZ(loc_17699));	// 13598 jz      short loc_17699 ;~ 0613:2F5A
cs=0x613;eip=0x002f5c; 	T(MOV(bx, word_44786));	// 13599 mov     bx, word_44786 ;~ 0613:2F5C
cs=0x613;eip=0x002f60; 	T(SHL(bx, 1));	// 13600 shl     bx, 1 ;~ 0613:2F60
cs=0x613;eip=0x002f62; 	T(LES(di, td02_penalty_related));	// 13601 les     di, td02_penalty_related ;~ 0613:2F62
cs=0x613;eip=0x002f66; 	T(CMP(*(dw*)(raddr(es,bx+di)), 0x0FFFF));	// 13602 cmp     word ptr es:[bx+di], 0FFFFh ;~ 0613:2F66
cs=0x613;eip=0x002f6a; 	R(JZ(loc_17684));	// 13603 jz      short loc_17684 ;~ 0613:2F6A
cs=0x613;eip=0x002f6c; 	X(MOV(word_44630, 0x0FFFF));	// 13604 mov     word_44630, 0FFFFh ;~ 0613:2F6C
cs=0x613;eip=0x002f72; 	R(JMP(loc_17694));	// 13605 jmp     short loc_17694 ;~ 0613:2F72
loc_17684:
	// 5142 
cs=0x613;eip=0x002f74; 	T(MOV(bx, word_44786));	// 13609 mov     bx, word_44786 ;~ 0613:2F74
cs=0x613;eip=0x002f78; 	T(SHL(bx, 1));	// 13610 shl     bx, 1 ;~ 0613:2F78
cs=0x613;eip=0x002f7a; 	T(LES(di, td01_track_file_cpy));	// 13611 les     di, td01_track_file_cpy ;~ 0613:2F7A
cs=0x613;eip=0x002f7e; 	T(MOV(ax, *(dw*)(raddr(es,bx+di))));	// 13612 mov     ax, es:[bx+di] ;~ 0613:2F7E
cs=0x613;eip=0x002f81; 	X(MOV(word_44630, ax));	// 13613 mov     word_44630, ax ;~ 0613:2F81
loc_17694:
	// 5143 
cs=0x613;eip=0x002f84; 	X(MOV(byte_446b4, 0));	// 13616 mov     byte_446B4, 0 ;~ 0613:2F84
loc_17699:
	// 5144 
cs=0x613;eip=0x002f89; 	X(PUSH(si));	// 13620 push    si ;~ 0613:2F89
cs=0x613;eip=0x002f8a; 	T(di = bp+var_28);	// 13621 lea     di, [bp+var_28] ;~ 0613:2F8A
cs=0x613;eip=0x002f8d; 	T(MOV(si, offset(dseg,word_4468a)));	// 13622 mov     si, offset word_4468A ;~ 0613:2F8D
cs=0x613;eip=0x002f90; 	X(PUSH(ss));	// 13623 push    ss ;~ 0613:2F90
cs=0x613;eip=0x002f91; 	X(POP(es));	// 13624 pop     es ;~ 0613:2F91
cs=0x613;eip=0x002f92; 	X(MOVSW);	// 13625 movsw ;~ 0613:2F92
cs=0x613;eip=0x002f93; 	X(MOVSW);	// 13626 movsw ;~ 0613:2F93
cs=0x613;eip=0x002f94; 	X(MOVSW);	// 13627 movsw ;~ 0613:2F94
cs=0x613;eip=0x002f95; 	X(POP(si));	// 13628 pop     si ;~ 0613:2F95
cs=0x613;eip=0x002f96; 	T(CMP(word_44630, 0x0FFFF));	// 13629 cmp     word_44630, 0FFFFh ;~ 0613:2F96
cs=0x613;eip=0x002f9b; 	R(JNZ(loc_176b0));	// 13630 jnz     short loc_176B0 ;~ 0613:2F9B
cs=0x613;eip=0x002f9d; 	R(JMP(loc_17771));	// 13631 jmp     loc_17771 ;~ 0613:2F9D
loc_176b0:
	// 5145 
cs=0x613;eip=0x002fa0; 	T(CMP(byte_448ef, 0));	// 13635 cmp     byte_448EF, 0 ;~ 0613:2FA0
cs=0x613;eip=0x002fa5; 	R(JZ(loc_176ba));	// 13636 jz      short loc_176BA ;~ 0613:2FA5
cs=0x613;eip=0x002fa7; 	R(JMP(loc_17771));	// 13637 jmp     loc_17771 ;~ 0613:2FA7
loc_176ba:
	// 5146 
cs=0x613;eip=0x002faa; 	T(MOV(ax, word_445e6));	// 13641 mov     ax, word_445E6 ;~ 0613:2FAA
cs=0x613;eip=0x002fad; 	T(MOV(dx, word_445e8));	// 13642 mov     dx, word_445E8 ;~ 0613:2FAD
cs=0x613;eip=0x002fb1; 	T(MOV(cl, 6));	// 13643 mov     cl, 6 ;~ 0613:2FB1
loc_176c3:
	// 5147 
cs=0x613;eip=0x002fb3; 	T(SAR(dx, 1));	// 13646 sar     dx, 1 ;~ 0613:2FB3
cs=0x613;eip=0x002fb5; 	T(RCR(ax, 1));	// 13647 rcr     ax, 1 ;~ 0613:2FB5
cs=0x613;eip=0x002fb7; 	T(DEC(cl));	// 13648 dec     cl ;~ 0613:2FB7
cs=0x613;eip=0x002fb9; 	R(JNZ(loc_176c3));	// 13649 jnz     short loc_176C3 ;~ 0613:2FB9
cs=0x613;eip=0x002fbb; 	X(SUB(*(dw*)(raddr(ss,bp+var_28)), ax));	// 13650 sub     [bp+var_28], ax ;~ 0613:2FBB
cs=0x613;eip=0x002fbe; 	T(CMP(*(dw*)(raddr(ss,bp+var_26)), 0x0FFFF));	// 13651 cmp     [bp+var_26], 0FFFFh ;~ 0613:2FBE
cs=0x613;eip=0x002fc2; 	R(JNZ(loc_176dc));	// 13652 jnz     short loc_176DC ;~ 0613:2FC2
cs=0x613;eip=0x002fc4; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), 0));	// 13653 mov     [bp+var_26], 0 ;~ 0613:2FC4
cs=0x613;eip=0x002fc9; 	R(JMP(loc_176f0));	// 13654 jmp     short loc_176F0 ;~ 0613:2FC9
loc_176dc:
	// 5148 
cs=0x613;eip=0x002fcc; 	T(MOV(ax, word_445ea));	// 13659 mov     ax, word_445EA ;~ 0613:2FCC
cs=0x613;eip=0x002fcf; 	T(MOV(dx, word_445ec));	// 13660 mov     dx, word_445EC ;~ 0613:2FCF
cs=0x613;eip=0x002fd3; 	T(MOV(cl, 6));	// 13661 mov     cl, 6 ;~ 0613:2FD3
loc_176e5:
	// 5149 
cs=0x613;eip=0x002fd5; 	T(SAR(dx, 1));	// 13664 sar     dx, 1 ;~ 0613:2FD5
cs=0x613;eip=0x002fd7; 	T(RCR(ax, 1));	// 13665 rcr     ax, 1 ;~ 0613:2FD7
cs=0x613;eip=0x002fd9; 	T(DEC(cl));	// 13666 dec     cl ;~ 0613:2FD9
cs=0x613;eip=0x002fdb; 	R(JNZ(loc_176e5));	// 13667 jnz     short loc_176E5 ;~ 0613:2FDB
cs=0x613;eip=0x002fdd; 	X(SUB(*(dw*)(raddr(ss,bp+var_26)), ax));	// 13668 sub     [bp+var_26], ax ;~ 0613:2FDD
loc_176f0:
	// 5150 
cs=0x613;eip=0x002fe0; 	T(MOV(ax, word_445ee));	// 13671 mov     ax, word_445EE ;~ 0613:2FE0
cs=0x613;eip=0x002fe3; 	T(MOV(dx, word_445f0));	// 13672 mov     dx, word_445F0 ;~ 0613:2FE3
cs=0x613;eip=0x002fe7; 	T(MOV(cl, 6));	// 13673 mov     cl, 6 ;~ 0613:2FE7
loc_176f9:
	// 5151 
cs=0x613;eip=0x002fe9; 	T(SAR(dx, 1));	// 13676 sar     dx, 1 ;~ 0613:2FE9
cs=0x613;eip=0x002feb; 	T(RCR(ax, 1));	// 13677 rcr     ax, 1 ;~ 0613:2FEB
cs=0x613;eip=0x002fed; 	T(DEC(cl));	// 13678 dec     cl ;~ 0613:2FED
cs=0x613;eip=0x002fef; 	R(JNZ(loc_176f9));	// 13679 jnz     short loc_176F9 ;~ 0613:2FEF
cs=0x613;eip=0x002ff1; 	X(SUB(*(dw*)(raddr(ss,bp+var_24)), ax));	// 13680 sub     [bp+var_24], ax ;~ 0613:2FF1
cs=0x613;eip=0x002ff4; 	T(MOV(ax, 1));	// 13681 mov     ax, 1 ;~ 0613:2FF4
cs=0x613;eip=0x002ff7; 	X(PUSH(ax));	// 13682 push    ax ;~ 0613:2FF7
cs=0x613;eip=0x002ff8; 	X(PUSH(word_445fe));	// 13683 push    word_445FE ;~ 0613:2FF8
cs=0x613;eip=0x002ffc; 	X(PUSH(word_44600));	// 13684 push    word_44600 ;~ 0613:2FFC
cs=0x613;eip=0x003000; 	X(PUSH(word_44602));	// 13685 push    word_44602 ;~ 0613:3000
cs=0x613;eip=0x003004; 	R(CALLF(mat_rot_zxy,0));	// 13686 call    mat_rot_zxy ;~ 0613:3004
cs=0x613;eip=0x003009; 	T(ADD(sp, 8));	// 13687 add     sp, 8 ;~ 0613:3009
cs=0x613;eip=0x00300c; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 13688 mov     [bp+var_20], ax ;~ 0613:300C
cs=0x613;eip=0x00300f; 	T(ax = bp+var_38);	// 13689 lea     ax, [bp+var_38] ;~ 0613:300F
cs=0x613;eip=0x003012; 	X(PUSH(ax));	// 13690 push    ax ;~ 0613:3012
cs=0x613;eip=0x003013; 	X(PUSH(*(dw*)(raddr(ss,bp+var_20))));	// 13691 push    [bp+var_20] ;~ 0613:3013
cs=0x613;eip=0x003016; 	T(ax = bp+var_28);	// 13692 lea     ax, [bp+var_28] ;~ 0613:3016
cs=0x613;eip=0x003019; 	X(PUSH(ax));	// 13693 push    ax ;~ 0613:3019
cs=0x613;eip=0x00301a; 	R(CALLF(mat_mul_vector,0));	// 13694 call    mat_mul_vector ;~ 0613:301A
cs=0x613;eip=0x00301f; 	T(ADD(sp, 6));	// 13695 add     sp, 6 ;~ 0613:301F
cs=0x613;eip=0x003022; 	X(PUSH(*(dw*)(raddr(ss,bp+var_34))));	// 13696 push    [bp+var_34] ;~ 0613:3022
cs=0x613;eip=0x003025; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_38))));	// 13697 mov     ax, [bp+var_38] ;~ 0613:3025
cs=0x613;eip=0x003028; 	T(NEG(ax));	// 13698 neg     ax ;~ 0613:3028
cs=0x613;eip=0x00302a; 	X(PUSH(ax));	// 13699 push    ax ;~ 0613:302A
cs=0x613;eip=0x00302b; 	R(CALLF(polarangle,0));	// 13700 call    polarAngle ;~ 0613:302B
cs=0x613;eip=0x003030; 	T(ADD(sp, 4));	// 13701 add     sp, 4 ;~ 0613:3030
cs=0x613;eip=0x003033; 	T(AND(ah, 3));	// 13702 and     ah, 3 ;~ 0613:3033
cs=0x613;eip=0x003036; 	X(MOV(word_4462e, ax));	// 13703 mov     word_4462E, ax ;~ 0613:3036
cs=0x613;eip=0x003039; 	T(CMP(byte_446af, 0));	// 13704 cmp     byte_446AF, 0 ;~ 0613:3039
cs=0x613;eip=0x00303e; 	R(JNZ(loc_17771));	// 13705 jnz     short loc_17771 ;~ 0613:303E
cs=0x613;eip=0x003040; 	T(ADD(ax, 0x80));	// 13706 add     ax, 80h ; '€' ;~ 0613:3040
cs=0x613;eip=0x003043; 	T(AND(ah, 3));	// 13707 and     ah, 3 ;~ 0613:3043
cs=0x613;eip=0x003046; 	T(MOV(cl, 8));	// 13708 mov     cl, 8 ;~ 0613:3046
cs=0x613;eip=0x003048; 	T(SHR(ax, cl));	// 13709 shr     ax, cl ;~ 0613:3048
cs=0x613;eip=0x00304a; 	T(CMP(ax, 1));	// 13710 cmp     ax, 1 ;~ 0613:304A
cs=0x613;eip=0x00304d; 	R(JZ(loc_1776c));	// 13711 jz      short loc_1776C ;~ 0613:304D
cs=0x613;eip=0x00304f; 	T(CMP(ax, 3));	// 13712 cmp     ax, 3 ;~ 0613:304F
cs=0x613;eip=0x003052; 	R(JZ(loc_1779e));	// 13713 jz      short loc_1779E ;~ 0613:3052
loc_17764:
	// 5152 
cs=0x613;eip=0x003054; 	X(MOV(byte_448f1, 0));	// 13716 mov     byte_448F1, 0 ;~ 0613:3054
cs=0x613;eip=0x003059; 	R(JMP(loc_17771));	// 13717 jmp     short loc_17771 ;~ 0613:3059
loc_1776c:
	// 5153 
cs=0x613;eip=0x00305c; 	X(MOV(byte_448f1, 1));	// 13722 mov     byte_448F1, 1 ;~ 0613:305C
loc_17771:
	// 5154 
cs=0x613;eip=0x003061; 	T(CMP(byte_446b3, 0));	// 13726 cmp     byte_446B3, 0 ;~ 0613:3061
cs=0x613;eip=0x003066; 	R(JNZ(loc_1777b));	// 13727 jnz     short loc_1777B ;~ 0613:3066
cs=0x613;eip=0x003068; 	R(JMP(loc_17810));	// 13728 jmp     loc_17810 ;~ 0613:3068
loc_1777b:
	// 5155 
cs=0x613;eip=0x00306b; 	T(MOV(al, startrow2));	// 13732 mov     al, startrow2 ;~ 0613:306B
cs=0x613;eip=0x00306e; 	T(CBW);	// 13733 cbw ;~ 0613:306E
cs=0x613;eip=0x00306f; 	T(MOV(bx, ax));	// 13734 mov     bx, ax ;~ 0613:306F
cs=0x613;eip=0x003071; 	T(SHL(bx, 1));	// 13735 shl     bx, 1 ;~ 0613:3071
cs=0x613;eip=0x003073; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 13736 mov     ax, trackcenterpos[bx] ;~ 0613:3073
cs=0x613;eip=0x003077; 	T(MOV(cx, word_445ee));	// 13737 mov     cx, word_445EE ;~ 0613:3077
cs=0x613;eip=0x00307b; 	T(MOV(bx, word_445f0));	// 13738 mov     bx, word_445F0 ;~ 0613:307B
cs=0x613;eip=0x00307f; 	T(MOV(dx, cx));	// 13739 mov     dx, cx ;~ 0613:307F
cs=0x613;eip=0x003081; 	T(MOV(cl, 6));	// 13740 mov     cl, 6 ;~ 0613:3081
loc_17793:
	// 5156 
cs=0x613;eip=0x003083; 	T(SAR(bx, 1));	// 13743 sar     bx, 1 ;~ 0613:3083
cs=0x613;eip=0x003085; 	T(RCR(dx, 1));	// 13744 rcr     dx, 1 ;~ 0613:3085
cs=0x613;eip=0x003087; 	T(DEC(cl));	// 13745 dec     cl ;~ 0613:3087
cs=0x613;eip=0x003089; 	R(JZ(loc_177ac));	// 13746 jz      short loc_177AC ;~ 0613:3089
cs=0x613;eip=0x00308b; 	R(JMP(loc_17793));	// 13747 jmp     short loc_17793 ;~ 0613:308B
loc_1779e:
	// 5157 
cs=0x613;eip=0x00308e; 	T(CMP(word_4469c, 0));	// 13752 cmp     word_4469C, 0 ;~ 0613:308E
cs=0x613;eip=0x003093; 	R(JNZ(loc_17764));	// 13753 jnz     short loc_17764 ;~ 0613:3093
cs=0x613;eip=0x003095; 	X(MOV(byte_448f1, 2));	// 13754 mov     byte_448F1, 2 ;~ 0613:3095
cs=0x613;eip=0x00309a; 	R(JMP(loc_17771));	// 13755 jmp     short loc_17771 ;~ 0613:309A
loc_177ac:
	// 5158 
cs=0x613;eip=0x00309c; 	T(SUB(ax, dx));	// 13759 sub     ax, dx ;~ 0613:309C
cs=0x613;eip=0x00309e; 	X(PUSH(ax));	// 13760 push    ax ;~ 0613:309E
cs=0x613;eip=0x00309f; 	X(PUSH(track_angle));	// 13761 push    track_angle ;~ 0613:309F
cs=0x613;eip=0x0030a3; 	R(CALLF(cos_fast,0));	// 13762 call    cos_fast ;~ 0613:30A3
cs=0x613;eip=0x0030a8; 	T(ADD(sp, 2));	// 13763 add     sp, 2 ;~ 0613:30A8
cs=0x613;eip=0x0030ab; 	X(PUSH(ax));	// 13764 push    ax ;~ 0613:30AB
cs=0x613;eip=0x0030ac; 	R(CALLF(multiply_and_scale,0));	// 13765 call    multiply_and_scale ;~ 0613:30AC
cs=0x613;eip=0x0030b1; 	T(ADD(sp, 4));	// 13766 add     sp, 4 ;~ 0613:30B1
cs=0x613;eip=0x0030b4; 	T(MOV(si, ax));	// 13767 mov     si, ax ;~ 0613:30B4
cs=0x613;eip=0x0030b6; 	T(MOV(al, startcol2));	// 13768 mov     al, startcol2 ;~ 0613:30B6
cs=0x613;eip=0x0030b9; 	T(CBW);	// 13769 cbw ;~ 0613:30B9
cs=0x613;eip=0x0030ba; 	T(MOV(bx, ax));	// 13770 mov     bx, ax ;~ 0613:30BA
cs=0x613;eip=0x0030bc; 	T(SHL(bx, 1));	// 13771 shl     bx, 1 ;~ 0613:30BC
cs=0x613;eip=0x0030be; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 13772 mov     ax, trackcenterpos2[bx] ;~ 0613:30BE
cs=0x613;eip=0x0030c2; 	T(MOV(cx, word_445e6));	// 13773 mov     cx, word_445E6 ;~ 0613:30C2
cs=0x613;eip=0x0030c6; 	T(MOV(bx, word_445e8));	// 13774 mov     bx, word_445E8 ;~ 0613:30C6
cs=0x613;eip=0x0030ca; 	T(MOV(dx, cx));	// 13775 mov     dx, cx ;~ 0613:30CA
cs=0x613;eip=0x0030cc; 	T(MOV(cl, 6));	// 13776 mov     cl, 6 ;~ 0613:30CC
loc_177de:
	// 5159 
cs=0x613;eip=0x0030ce; 	T(SAR(bx, 1));	// 13779 sar     bx, 1 ;~ 0613:30CE
cs=0x613;eip=0x0030d0; 	T(RCR(dx, 1));	// 13780 rcr     dx, 1 ;~ 0613:30D0
cs=0x613;eip=0x0030d2; 	T(DEC(cl));	// 13781 dec     cl ;~ 0613:30D2
cs=0x613;eip=0x0030d4; 	R(JNZ(loc_177de));	// 13782 jnz     short loc_177DE ;~ 0613:30D4
cs=0x613;eip=0x0030d6; 	T(SUB(ax, dx));	// 13783 sub     ax, dx ;~ 0613:30D6
cs=0x613;eip=0x0030d8; 	X(PUSH(ax));	// 13784 push    ax ;~ 0613:30D8
cs=0x613;eip=0x0030d9; 	X(PUSH(track_angle));	// 13785 push    track_angle ;~ 0613:30D9
cs=0x613;eip=0x0030dd; 	R(CALLF(sin_fast,0));	// 13786 call    sin_fast ;~ 0613:30DD
cs=0x613;eip=0x0030e2; 	T(ADD(sp, 2));	// 13787 add     sp, 2 ;~ 0613:30E2
cs=0x613;eip=0x0030e5; 	X(PUSH(ax));	// 13788 push    ax ;~ 0613:30E5
cs=0x613;eip=0x0030e6; 	R(CALLF(multiply_and_scale,0));	// 13789 call    multiply_and_scale ;~ 0613:30E6
cs=0x613;eip=0x0030eb; 	T(ADD(sp, 4));	// 13790 add     sp, 4 ;~ 0613:30EB
cs=0x613;eip=0x0030ee; 	T(ADD(si, ax));	// 13791 add     si, ax ;~ 0613:30EE
cs=0x613;eip=0x0030f0; 	R(JNS(loc_17810));	// 13792 jns     short loc_17810 ;~ 0613:30F0
cs=0x613;eip=0x0030f2; 	T(SUB(ax, ax));	// 13793 sub     ax, ax ;~ 0613:30F2
cs=0x613;eip=0x0030f4; 	X(PUSH(ax));	// 13794 push    ax ;~ 0613:30F4
cs=0x613;eip=0x0030f5; 	T(MOV(ax, 3));	// 13795 mov     ax, 3 ;~ 0613:30F5
cs=0x613;eip=0x0030f8; 	X(PUSH(ax));	// 13796 push    ax ;~ 0613:30F8
cs=0x613;eip=0x0030f9; 	X(PUSH(cs));	// 13797 push    cs ;~ 0613:30F9
cs=0x613;eip=0x0030fa; 	R(CALL(update_crash_state,0));	// 13798 call    near ptr update_crash_state ;~ 0613:30FA
cs=0x613;eip=0x0030fd; 	T(ADD(sp, 4));	// 13799 add     sp, 4 ;~ 0613:30FD
loc_17810:
	// 5160 
cs=0x613;eip=0x003100; 	X(POP(si));	// 13803 pop     si ;~ 0613:3100
cs=0x613;eip=0x003101; 	X(POP(di));	// 13804 pop     di ;~ 0613:3101
cs=0x613;eip=0x003102; 	T(MOV(sp, bp));	// 13805 mov     sp, bp ;~ 0613:3102
cs=0x613;eip=0x003104; 	X(POP(bp));	// 13806 pop     bp ;~ 0613:3104
cs=0x613;eip=0x003105; 	R(RETF(0));	// 13807 retf ;~ 0613:3105
detect_penalty:
	// 13815 
#undef var_5a4
#define var_5a4 -0x5A4
	// 13817 var_5A4         = word ptr -5A4h ;~ 0613:3106
#undef var_5a2
#define var_5a2 -0x5A2
	// 13818 var_5A2         = byte ptr -5A2h ;~ 0613:3106
#undef var_21a
#define var_21a -0x21A
	// 13819 var_21A         = word ptr -21Ah ;~ 0613:3106
#undef var_218
#define var_218 -0x218
	// 13820 var_218         = byte ptr -218h ;~ 0613:3106
#undef var_116
#define var_116 -0x116
	// 13821 var_116         = byte ptr -116h ;~ 0613:3106
#undef var_114
#define var_114 -0x114
	// 13822 var_114         = byte ptr -114h ;~ 0613:3106
#undef var_110
#define var_110 -0x110
	// 13823 var_110         = word ptr -110h ;~ 0613:3106
#undef var_e
#define var_e -0x0E
	// 13824 var_E           = byte ptr -0Eh ;~ 0613:3106
#undef var_c
#define var_c -0x0C
	// 13825 var_C           = byte ptr -0Ch ;~ 0613:3106
#undef var_a
#define var_a -0x0A
	// 13826 var_A           = byte ptr -0Ah ;~ 0613:3106
#undef var_8
#define var_8 -8
	// 13827 var_8           = word ptr -8 ;~ 0613:3106
#undef var_6
#define var_6 -6
	// 13828 var_6           = word ptr -6 ;~ 0613:3106
#undef var_4
#define var_4 -4
	// 13829 var_4           = byte ptr -4 ;~ 0613:3106
#undef var_2
#define var_2 -2
	// 13830 var_2           = word ptr -2 ;~ 0613:3106
#undef arg_0
#define arg_0 6
	// 13831 arg_0           = word ptr  6 ;~ 0613:3106
#undef arg_2
#define arg_2 8
	// 13832 arg_2           = word ptr  8 ;~ 0613:3106
ret_613_3106:
	// 5161 
cs=0x613;eip=0x003106; 	X(PUSH(bp));	// 13834 push    bp ;~ 0613:3106
cs=0x613;eip=0x003107; 	T(MOV(bp, sp));	// 13835 mov     bp, sp ;~ 0613:3107
cs=0x613;eip=0x003109; 	T(SUB(sp, 0x5A4));	// 13836 sub     sp, 5A4h ;~ 0613:3109
cs=0x613;eip=0x00310d; 	X(PUSH(di));	// 13837 push    di ;~ 0613:310D
cs=0x613;eip=0x00310e; 	X(PUSH(si));	// 13838 push    si ;~ 0613:310E
cs=0x613;eip=0x00310f; 	T(MOV(al, *(db*)(((db*)&word_445e8))));	// 13839 mov     al, byte ptr word_445E8 ;~ 0613:310F
cs=0x613;eip=0x003112; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 13840 mov     [bp+var_4], al ;~ 0613:3112
cs=0x613;eip=0x003115; 	T(MOV(al, 0x1D));	// 13841 mov     al, 1Dh ;~ 0613:3115
cs=0x613;eip=0x003117; 	T(SUB(al, *(db*)(((db*)&word_445f0))));	// 13842 sub     al, byte ptr word_445F0 ;~ 0613:3117
cs=0x613;eip=0x00311b; 	X(MOV(*(raddr(ss,bp+var_a)), al));	// 13843 mov     [bp+var_A], al ;~ 0613:311B
cs=0x613;eip=0x00311e; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 13844 mov     al, [bp+var_4] ;~ 0613:311E
cs=0x613;eip=0x003121; 	T(CBW);	// 13845 cbw ;~ 0613:3121
cs=0x613;eip=0x003122; 	X(MOV(*(dw*)(raddr(ss,bp+var_5a4)), ax));	// 13846 mov     [bp+var_5A4], ax ;~ 0613:3122
cs=0x613;eip=0x003126; 	T(MOV(ax, word_4478a));	// 13847 mov     ax, word_4478A ;~ 0613:3126
cs=0x613;eip=0x003129; 	T(CMP(*(dw*)(raddr(ss,bp+var_5a4)), ax));	// 13848 cmp     [bp+var_5A4], ax ;~ 0613:3129
cs=0x613;eip=0x00312d; 	R(JZ(loc_17848));	// 13849 jz      short loc_17848 ;~ 0613:312D
cs=0x613;eip=0x00312f; 	T(MOV(ax, word_4478c));	// 13850 mov     ax, word_4478C ;~ 0613:312F
cs=0x613;eip=0x003132; 	T(CMP(*(dw*)(raddr(ss,bp+var_5a4)), ax));	// 13851 cmp     [bp+var_5A4], ax ;~ 0613:3132
cs=0x613;eip=0x003136; 	R(JNZ(loc_17872));	// 13852 jnz     short loc_17872 ;~ 0613:3136
loc_17848:
	// 5162 
cs=0x613;eip=0x003138; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 13855 mov     al, [bp+var_A] ;~ 0613:3138
cs=0x613;eip=0x00313b; 	T(CBW);	// 13856 cbw ;~ 0613:313B
cs=0x613;eip=0x00313c; 	X(MOV(*(dw*)(raddr(ss,bp+var_5a4)), ax));	// 13857 mov     [bp+var_5A4], ax ;~ 0613:313C
cs=0x613;eip=0x003140; 	T(MOV(ax, word_4478e));	// 13858 mov     ax, word_4478E ;~ 0613:3140
cs=0x613;eip=0x003143; 	T(CMP(*(dw*)(raddr(ss,bp+var_5a4)), ax));	// 13859 cmp     [bp+var_5A4], ax ;~ 0613:3143
cs=0x613;eip=0x003147; 	R(JZ(loc_17862));	// 13860 jz      short loc_17862 ;~ 0613:3147
cs=0x613;eip=0x003149; 	T(MOV(ax, word_44790));	// 13861 mov     ax, word_44790 ;~ 0613:3149
cs=0x613;eip=0x00314c; 	T(CMP(*(dw*)(raddr(ss,bp+var_5a4)), ax));	// 13862 cmp     [bp+var_5A4], ax ;~ 0613:314C
cs=0x613;eip=0x003150; 	R(JNZ(loc_17872));	// 13863 jnz     short loc_17872 ;~ 0613:3150
loc_17862:
	// 5163 
cs=0x613;eip=0x003152; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 13866 mov     bx, [bp+arg_2] ;~ 0613:3152
cs=0x613;eip=0x003155; 	X(MOV(*(dw*)(raddr(ds,bx)), 0));	// 13867 mov     word ptr [bx], 0 ;~ 0613:3155
cs=0x613;eip=0x003159; 	T(SUB(ax, ax));	// 13868 sub     ax, ax ;~ 0613:3159
cs=0x613;eip=0x00315b; 	X(POP(si));	// 13869 pop     si ;~ 0613:315B
cs=0x613;eip=0x00315c; 	X(POP(di));	// 13870 pop     di ;~ 0613:315C
cs=0x613;eip=0x00315d; 	T(MOV(sp, bp));	// 13871 mov     sp, bp ;~ 0613:315D
cs=0x613;eip=0x00315f; 	X(POP(bp));	// 13872 pop     bp ;~ 0613:315F
cs=0x613;eip=0x003160; 	R(RETF(0));	// 13873 retf ;~ 0613:3160
loc_17872:
	// 5164 
cs=0x613;eip=0x003162; 	T(CMP(*(raddr(ss,bp+var_4)), 0));	// 13879 cmp     [bp+var_4], 0 ;~ 0613:3162
cs=0x613;eip=0x003166; 	R(JGE(loc_1787b));	// 13880 jge     short loc_1787B ;~ 0613:3166
cs=0x613;eip=0x003168; 	R(JMP(loc_1792e));	// 13881 jmp     loc_1792E ;~ 0613:3168
loc_1787b:
	// 5165 
cs=0x613;eip=0x00316b; 	T(CMP(*(raddr(ss,bp+var_4)), 0x1D));	// 13885 cmp     [bp+var_4], 1Dh ;~ 0613:316B
cs=0x613;eip=0x00316f; 	R(JLE(loc_17884));	// 13886 jle     short loc_17884 ;~ 0613:316F
cs=0x613;eip=0x003171; 	R(JMP(loc_1792e));	// 13887 jmp     loc_1792E ;~ 0613:3171
loc_17884:
	// 5166 
cs=0x613;eip=0x003174; 	T(CMP(*(raddr(ss,bp+var_a)), 0));	// 13891 cmp     [bp+var_A], 0 ;~ 0613:3174
cs=0x613;eip=0x003178; 	R(JGE(loc_1788d));	// 13892 jge     short loc_1788D ;~ 0613:3178
cs=0x613;eip=0x00317a; 	R(JMP(loc_1792e));	// 13893 jmp     loc_1792E ;~ 0613:317A
loc_1788d:
	// 5167 
cs=0x613;eip=0x00317d; 	T(CMP(*(raddr(ss,bp+var_a)), 0x1D));	// 13897 cmp     [bp+var_A], 1Dh ;~ 0613:317D
cs=0x613;eip=0x003181; 	R(JLE(loc_17896));	// 13898 jle     short loc_17896 ;~ 0613:3181
cs=0x613;eip=0x003183; 	R(JMP(loc_1792e));	// 13899 jmp     loc_1792E ;~ 0613:3183
loc_17896:
	// 5168 
cs=0x613;eip=0x003186; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 13903 mov     [bp+var_6], 0 ;~ 0613:3186
cs=0x613;eip=0x00318b; 	X(MOV(*(dw*)(raddr(ss,bp+var_21a)), 0));	// 13904 mov     [bp+var_21A], 0 ;~ 0613:318B
cs=0x613;eip=0x003191; 	T(SUB(di, di));	// 13905 sub     di, di ;~ 0613:3191
cs=0x613;eip=0x003193; 	T(SUB(si, si));	// 13906 sub     si, si ;~ 0613:3193
cs=0x613;eip=0x003195; 	R(JMP(loc_178ae));	// 13907 jmp     short loc_178AE ;~ 0613:3195
loc_178a8:
	// 5169 
cs=0x613;eip=0x003198; 	X(MOV(*(raddr(ss,bp+si+var_5a2)), 0));	// 13912 mov     [bp+si+var_5A2], 0 ;~ 0613:3198
cs=0x613;eip=0x00319d; 	T(INC(si));	// 13913 inc     si ;~ 0613:319D
loc_178ae:
	// 5170 
cs=0x613;eip=0x00319e; 	T(CMP(track_pieces_counter, si));	// 13916 cmp     track_pieces_counter, si ;~ 0613:319E
cs=0x613;eip=0x0031a2; 	R(JG(loc_178a8));	// 13917 jg      short loc_178A8 ;~ 0613:31A2
cs=0x613;eip=0x0031a4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 13918 mov     bx, [bp+arg_0] ;~ 0613:31A4
cs=0x613;eip=0x0031a7; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 13919 mov     si, [bx] ;~ 0613:31A7
loc_178b9:
	// 5171 
cs=0x613;eip=0x0031a9; 	T(MOV(bx, si));	// 13923 mov     bx, si ;~ 0613:31A9
cs=0x613;eip=0x0031ab; 	T(SHL(bx, 1));	// 13924 shl     bx, 1 ;~ 0613:31AB
cs=0x613;eip=0x0031ad; 	T(ADD(bx, *(dw*)(((db*)&td01_track_file_cpy))));	// 13925 add     bx, word ptr td01_track_file_cpy ;~ 0613:31AD
cs=0x613;eip=0x0031b1; 	T(MOV(es, *(dw*)(((db*)&td01_track_file_cpy)+2)));	// 13926 mov     es, word ptr td01_track_file_cpy+2 ;~ 0613:31B1
cs=0x613;eip=0x0031b5; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 13927 mov     ax, es:[bx] ;~ 0613:31B5
cs=0x613;eip=0x0031b8; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 13928 mov     [bp+var_2], ax ;~ 0613:31B8
cs=0x613;eip=0x0031bb; 	T(MOV(bx, ax));	// 13929 mov     bx, ax ;~ 0613:31BB
cs=0x613;eip=0x0031bd; 	T(ADD(bx, bp));	// 13930 add     bx, bp ;~ 0613:31BD
cs=0x613;eip=0x0031bf; 	T(CMP(*(raddr(ds,bx-0x5A2)), 0));	// 13931 cmp     byte ptr [bx-5A2h], 0 ;~ 0613:31BF
cs=0x613;eip=0x0031c4; 	R(JZ(loc_17938));	// 13932 jz      short loc_17938 ;~ 0613:31C4
cs=0x613;eip=0x0031c6; 	T(CMP(*(dw*)(raddr(ss,bp+var_21a)), 0));	// 13933 cmp     [bp+var_21A], 0 ;~ 0613:31C6
cs=0x613;eip=0x0031cb; 	R(JZ(loc_178fa));	// 13934 jz      short loc_178FA ;~ 0613:31CB
cs=0x613;eip=0x0031cd; 	X(DEC(*(dw*)(raddr(ss,bp+var_21a))));	// 13935 dec     [bp+var_21A] ;~ 0613:31CD
cs=0x613;eip=0x0031d1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_21a))));	// 13936 mov     ax, [bp+var_21A] ;~ 0613:31D1
cs=0x613;eip=0x0031d5; 	T(SHL(ax, 1));	// 13937 shl     ax, 1 ;~ 0613:31D5
cs=0x613;eip=0x0031d7; 	T(ADD(ax, bp));	// 13938 add     ax, bp ;~ 0613:31D7
cs=0x613;eip=0x0031d9; 	X(MOV(*(dw*)(raddr(ss,bp+var_5a4)), ax));	// 13939 mov     [bp+var_5A4], ax ;~ 0613:31D9
cs=0x613;eip=0x0031dd; 	T(MOV(bx, ax));	// 13940 mov     bx, ax ;~ 0613:31DD
cs=0x613;eip=0x0031df; 	T(MOV(si, *(dw*)(raddr(ds,bx-0x216))));	// 13941 mov     si, [bx-216h] ;~ 0613:31DF
cs=0x613;eip=0x0031e3; 	T(MOV(di, *(dw*)(raddr(ds,bx-0x10E))));	// 13942 mov     di, [bx-10Eh] ;~ 0613:31E3
cs=0x613;eip=0x0031e7; 	R(JMP(loc_178b9));	// 13943 jmp     short loc_178B9 ;~ 0613:31E7
loc_178fa:
	// 5172 
cs=0x613;eip=0x0031ea; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0));	// 13948 cmp     [bp+var_6], 0 ;~ 0613:31EA
cs=0x613;eip=0x0031ee; 	R(JZ(loc_1791a));	// 13949 jz      short loc_1791A ;~ 0613:31EE
cs=0x613;eip=0x0031f0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 13950 mov     bx, [bp+arg_0] ;~ 0613:31F0
cs=0x613;eip=0x0031f3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_110))));	// 13951 mov     ax, [bp+var_110] ;~ 0613:31F3
cs=0x613;eip=0x0031f7; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 13952 mov     [bx], ax ;~ 0613:31F7
cs=0x613;eip=0x0031f9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 13953 mov     bx, [bp+arg_2] ;~ 0613:31F9
cs=0x613;eip=0x0031fc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 13954 mov     ax, [bp+var_6] ;~ 0613:31FC
cs=0x613;eip=0x0031ff; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 13955 mov     [bx], ax ;~ 0613:31FF
loc_17911:
	// 5173 
cs=0x613;eip=0x003201; 	T(MOV(ax, 1));	// 13959 mov     ax, 1 ;~ 0613:3201
cs=0x613;eip=0x003204; 	X(POP(si));	// 13960 pop     si ;~ 0613:3204
cs=0x613;eip=0x003205; 	X(POP(di));	// 13961 pop     di ;~ 0613:3205
cs=0x613;eip=0x003206; 	T(MOV(sp, bp));	// 13962 mov     sp, bp ;~ 0613:3206
cs=0x613;eip=0x003208; 	X(POP(bp));	// 13963 pop     bp ;~ 0613:3208
cs=0x613;eip=0x003209; 	R(RETF(0));	// 13964 retf ;~ 0613:3209
loc_1791a:
	// 5174 
cs=0x613;eip=0x00320a; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 13968 mov     al, [bp+var_4] ;~ 0613:320A
cs=0x613;eip=0x00320d; 	T(CBW);	// 13969 cbw ;~ 0613:320D
cs=0x613;eip=0x00320e; 	X(MOV(word_4478a, ax));	// 13970 mov     word_4478A, ax ;~ 0613:320E
cs=0x613;eip=0x003211; 	X(MOV(word_4478c, ax));	// 13971 mov     word_4478C, ax ;~ 0613:3211
cs=0x613;eip=0x003214; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 13972 mov     al, [bp+var_A] ;~ 0613:3214
cs=0x613;eip=0x003217; 	T(CBW);	// 13973 cbw ;~ 0613:3217
cs=0x613;eip=0x003218; 	X(MOV(word_4478e, ax));	// 13974 mov     word_4478E, ax ;~ 0613:3218
cs=0x613;eip=0x00321b; 	X(MOV(word_44790, ax));	// 13975 mov     word_44790, ax ;~ 0613:321B
loc_1792e:
	// 5175 
cs=0x613;eip=0x00321e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 13979 mov     bx, [bp+arg_2] ;~ 0613:321E
cs=0x613;eip=0x003221; 	X(MOV(*(dw*)(raddr(ds,bx)), 0x0FFFE));	// 13980 mov     word ptr [bx], 0FFFEh ;~ 0613:3221
cs=0x613;eip=0x003225; 	R(JMP(loc_17911));	// 13981 jmp     short loc_17911 ;~ 0613:3225
loc_17938:
	// 5176 
cs=0x613;eip=0x003228; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 13986 mov     bx, [bp+var_2] ;~ 0613:3228
cs=0x613;eip=0x00322b; 	T(ADD(bx, bp));	// 13987 add     bx, bp ;~ 0613:322B
cs=0x613;eip=0x00322d; 	X(MOV(*(raddr(ds,bx-0x5A2)), 1));	// 13988 mov     byte ptr [bx-5A2h], 1 ;~ 0613:322D
cs=0x613;eip=0x003232; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 13989 mov     bx, [bp+var_2] ;~ 0613:3232
cs=0x613;eip=0x003235; 	T(ADD(bx, *(dw*)(((db*)&td22_row_from_path))));	// 13990 add     bx, word ptr td22_row_from_path ;~ 0613:3235
cs=0x613;eip=0x003239; 	T(MOV(es, *(dw*)(((db*)&td22_row_from_path)+2)));	// 13991 mov     es, word ptr td22_row_from_path+2 ;~ 0613:3239
cs=0x613;eip=0x00323d; 	T(MOV(al, *(raddr(es,bx))));	// 13992 mov     al, es:[bx] ;~ 0613:323D
cs=0x613;eip=0x003240; 	X(MOV(*(raddr(ss,bp+var_e)), al));	// 13993 mov     [bp+var_E], al ;~ 0613:3240
cs=0x613;eip=0x003243; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 13994 mov     bx, [bp+var_2] ;~ 0613:3243
cs=0x613;eip=0x003246; 	T(ADD(bx, *(dw*)(((db*)&td17_trk_elem_ordered))));	// 13995 add     bx, word ptr td17_trk_elem_ordered ;~ 0613:3246
cs=0x613;eip=0x00324a; 	T(MOV(es, *(dw*)(((db*)&td17_trk_elem_ordered)+2)));	// 13996 mov     es, word ptr td17_trk_elem_ordered+2 ;~ 0613:324A
cs=0x613;eip=0x00324e; 	T(MOV(al, *(raddr(es,bx))));	// 13997 mov     al, es:[bx] ;~ 0613:324E
cs=0x613;eip=0x003251; 	T(SUB(ah, ah));	// 13998 sub     ah, ah ;~ 0613:3251
cs=0x613;eip=0x003253; 	T(MOV(bx, ax));	// 13999 mov     bx, ax ;~ 0613:3253
cs=0x613;eip=0x003255; 	T(SHL(bx, 1));	// 14000 shl     bx, 1 ;~ 0613:3255
cs=0x613;eip=0x003257; 	T(ADD(bx, ax));	// 14001 add     bx, ax ;~ 0613:3257
cs=0x613;eip=0x003259; 	T(SHL(bx, 1));	// 14002 shl     bx, 1 ;~ 0613:3259
cs=0x613;eip=0x00325b; 	T(ADD(bx, ax));	// 14003 add     bx, ax ;~ 0613:325B
cs=0x613;eip=0x00325d; 	T(SHL(bx, 1));	// 14004 shl     bx, 1 ;~ 0613:325D
cs=0x613;eip=0x00325f; 	T(MOV(al, *((&byte_3d813)+bx)));	// 14005 mov     al, byte_3D813[bx] ;~ 0613:325F
cs=0x613;eip=0x003263; 	X(MOV(*(raddr(ss,bp+var_116)), al));	// 14006 mov     [bp+var_116], al ;~ 0613:3263
cs=0x613;eip=0x003267; 	T(TEST(*(raddr(ss,bp+var_116)), 1));	// 14007 test    [bp+var_116], 1 ;~ 0613:3267
cs=0x613;eip=0x00326c; 	R(JZ(loc_17986));	// 14008 jz      short loc_17986 ;~ 0613:326C
cs=0x613;eip=0x00326e; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 14009 mov     al, [bp+var_E] ;~ 0613:326E
cs=0x613;eip=0x003271; 	T(INC(al));	// 14010 inc     al ;~ 0613:3271
cs=0x613;eip=0x003273; 	R(JMP(loc_17989));	// 14011 jmp     short loc_17989 ;~ 0613:3273
loc_17986:
	// 5177 
cs=0x613;eip=0x003276; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 14016 mov     al, [bp+var_E] ;~ 0613:3276
loc_17989:
	// 5178 
cs=0x613;eip=0x003279; 	X(MOV(*(raddr(ss,bp+var_218)), al));	// 14019 mov     [bp+var_218], al ;~ 0613:3279
cs=0x613;eip=0x00327d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 14020 mov     bx, [bp+var_2] ;~ 0613:327D
cs=0x613;eip=0x003280; 	T(ADD(bx, *(dw*)(((db*)&td21_col_from_path))));	// 14021 add     bx, word ptr td21_col_from_path ;~ 0613:3280
cs=0x613;eip=0x003284; 	T(MOV(es, *(dw*)(((db*)&td21_col_from_path)+2)));	// 14022 mov     es, word ptr td21_col_from_path+2 ;~ 0613:3284
cs=0x613;eip=0x003288; 	T(MOV(al, *(raddr(es,bx))));	// 14023 mov     al, es:[bx] ;~ 0613:3288
cs=0x613;eip=0x00328b; 	X(MOV(*(raddr(ss,bp+var_c)), al));	// 14024 mov     [bp+var_C], al ;~ 0613:328B
cs=0x613;eip=0x00328e; 	T(TEST(*(raddr(ss,bp+var_116)), 2));	// 14025 test    [bp+var_116], 2 ;~ 0613:328E
cs=0x613;eip=0x003293; 	R(JZ(loc_179aa));	// 14026 jz      short loc_179AA ;~ 0613:3293
cs=0x613;eip=0x003295; 	T(INC(al));	// 14027 inc     al ;~ 0613:3295
cs=0x613;eip=0x003297; 	R(JMP(loc_179ad));	// 14028 jmp     short loc_179AD ;~ 0613:3297
loc_179aa:
	// 5179 
cs=0x613;eip=0x00329a; 	T(MOV(al, *(raddr(ss,bp+var_c))));	// 14033 mov     al, [bp+var_C] ;~ 0613:329A
loc_179ad:
	// 5180 
cs=0x613;eip=0x00329d; 	X(MOV(*(raddr(ss,bp+var_114)), al));	// 14036 mov     [bp+var_114], al ;~ 0613:329D
cs=0x613;eip=0x0032a1; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 14037 mov     al, [bp+var_4] ;~ 0613:32A1
cs=0x613;eip=0x0032a4; 	T(CMP(*(raddr(ss,bp+var_c)), al));	// 14038 cmp     [bp+var_C], al ;~ 0613:32A4
cs=0x613;eip=0x0032a7; 	R(JZ(loc_179bf));	// 14039 jz      short loc_179BF ;~ 0613:32A7
cs=0x613;eip=0x0032a9; 	T(CMP(*(raddr(ss,bp+var_114)), al));	// 14040 cmp     [bp+var_114], al ;~ 0613:32A9
cs=0x613;eip=0x0032ad; 	R(JNZ(loc_17a19));	// 14041 jnz     short loc_17A19 ;~ 0613:32AD
loc_179bf:
	// 5181 
cs=0x613;eip=0x0032af; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 14044 mov     al, [bp+var_A] ;~ 0613:32AF
cs=0x613;eip=0x0032b2; 	T(CMP(*(raddr(ss,bp+var_e)), al));	// 14045 cmp     [bp+var_E], al ;~ 0613:32B2
cs=0x613;eip=0x0032b5; 	R(JZ(loc_179cd));	// 14046 jz      short loc_179CD ;~ 0613:32B5
cs=0x613;eip=0x0032b7; 	T(CMP(*(raddr(ss,bp+var_218)), al));	// 14047 cmp     [bp+var_218], al ;~ 0613:32B7
cs=0x613;eip=0x0032bb; 	R(JNZ(loc_17a19));	// 14048 jnz     short loc_17A19 ;~ 0613:32BB
loc_179cd:
	// 5182 
cs=0x613;eip=0x0032bd; 	T(MOV(bx, si));	// 14051 mov     bx, si ;~ 0613:32BD
cs=0x613;eip=0x0032bf; 	T(SHL(bx, 1));	// 14052 shl     bx, 1 ;~ 0613:32BF
cs=0x613;eip=0x0032c1; 	T(ADD(bx, *(dw*)(((db*)&td02_penalty_related))));	// 14053 add     bx, word ptr td02_penalty_related ;~ 0613:32C1
cs=0x613;eip=0x0032c5; 	T(MOV(es, *(dw*)(((db*)&td02_penalty_related)+2)));	// 14054 mov     es, word ptr td02_penalty_related+2 ;~ 0613:32C5
cs=0x613;eip=0x0032c9; 	T(CMP(*(dw*)(raddr(es,bx)), 0x0FFFF));	// 14055 cmp     word ptr es:[bx], 0FFFFh ;~ 0613:32C9
cs=0x613;eip=0x0032cd; 	R(JZ(loc_179e2));	// 14056 jz      short loc_179E2 ;~ 0613:32CD
cs=0x613;eip=0x0032cf; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 14057 mov     [bp+var_2], si ;~ 0613:32CF
loc_179e2:
	// 5183 
cs=0x613;eip=0x0032d2; 	T(MOV(al, *(raddr(ss,bp+var_c))));	// 14060 mov     al, [bp+var_C] ;~ 0613:32D2
cs=0x613;eip=0x0032d5; 	T(CBW);	// 14061 cbw ;~ 0613:32D5
cs=0x613;eip=0x0032d6; 	X(MOV(word_4478a, ax));	// 14062 mov     word_4478A, ax ;~ 0613:32D6
cs=0x613;eip=0x0032d9; 	T(MOV(al, *(raddr(ss,bp+var_114))));	// 14063 mov     al, [bp+var_114] ;~ 0613:32D9
cs=0x613;eip=0x0032dd; 	T(CBW);	// 14064 cbw ;~ 0613:32DD
cs=0x613;eip=0x0032de; 	X(MOV(word_4478c, ax));	// 14065 mov     word_4478C, ax ;~ 0613:32DE
cs=0x613;eip=0x0032e1; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 14066 mov     al, [bp+var_E] ;~ 0613:32E1
cs=0x613;eip=0x0032e4; 	T(CBW);	// 14067 cbw ;~ 0613:32E4
cs=0x613;eip=0x0032e5; 	X(MOV(word_4478e, ax));	// 14068 mov     word_4478E, ax ;~ 0613:32E5
cs=0x613;eip=0x0032e8; 	T(MOV(al, *(raddr(ss,bp+var_218))));	// 14069 mov     al, [bp+var_218] ;~ 0613:32E8
cs=0x613;eip=0x0032ec; 	T(CBW);	// 14070 cbw ;~ 0613:32EC
cs=0x613;eip=0x0032ed; 	X(MOV(word_44790, ax));	// 14071 mov     word_44790, ax ;~ 0613:32ED
cs=0x613;eip=0x0032f0; 	T(OR(di, di));	// 14072 or      di, di ;~ 0613:32F0
cs=0x613;eip=0x0032f2; 	R(JLE(loc_17a5e));	// 14073 jle     short loc_17A5E ;~ 0613:32F2
cs=0x613;eip=0x0032f4; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0));	// 14074 cmp     [bp+var_6], 0 ;~ 0613:32F4
cs=0x613;eip=0x0032f8; 	R(JZ(loc_17a0f));	// 14075 jz      short loc_17A0F ;~ 0613:32F8
cs=0x613;eip=0x0032fa; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), di));	// 14076 cmp     [bp+var_6], di ;~ 0613:32FA
cs=0x613;eip=0x0032fd; 	R(JLE(loc_17a19));	// 14077 jle     short loc_17A19 ;~ 0613:32FD
loc_17a0f:
	// 5184 
cs=0x613;eip=0x0032ff; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 14080 mov     ax, [bp+var_2] ;~ 0613:32FF
cs=0x613;eip=0x003302; 	X(MOV(*(dw*)(raddr(ss,bp+var_110)), ax));	// 14081 mov     [bp+var_110], ax ;~ 0613:3302
cs=0x613;eip=0x003306; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), di));	// 14082 mov     [bp+var_6], di ;~ 0613:3306
loc_17a19:
	// 5185 
cs=0x613;eip=0x003309; 	T(MOV(bx, si));	// 14086 mov     bx, si ;~ 0613:3309
cs=0x613;eip=0x00330b; 	T(SHL(bx, 1));	// 14087 shl     bx, 1 ;~ 0613:330B
cs=0x613;eip=0x00330d; 	T(ADD(bx, *(dw*)(((db*)&td02_penalty_related))));	// 14088 add     bx, word ptr td02_penalty_related ;~ 0613:330D
cs=0x613;eip=0x003311; 	T(MOV(es, *(dw*)(((db*)&td02_penalty_related)+2)));	// 14089 mov     es, word ptr td02_penalty_related+2 ;~ 0613:3311
cs=0x613;eip=0x003315; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 14090 mov     ax, es:[bx] ;~ 0613:3315
cs=0x613;eip=0x003318; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 14091 mov     [bp+var_8], ax ;~ 0613:3318
cs=0x613;eip=0x00331b; 	T(CMP(ax, 0x0FFFF));	// 14092 cmp     ax, 0FFFFh ;~ 0613:331B
cs=0x613;eip=0x00331e; 	R(JZ(loc_17a4f));	// 14093 jz      short loc_17A4F ;~ 0613:331E
cs=0x613;eip=0x003320; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_21a))));	// 14094 mov     bx, [bp+var_21A] ;~ 0613:3320
cs=0x613;eip=0x003324; 	T(SHL(bx, 1));	// 14095 shl     bx, 1 ;~ 0613:3324
cs=0x613;eip=0x003326; 	T(ADD(bx, bp));	// 14096 add     bx, bp ;~ 0613:3326
cs=0x613;eip=0x003328; 	X(MOV(*(dw*)(raddr(ds,bx-0x10E)), di));	// 14097 mov     [bx-10Eh], di ;~ 0613:3328
cs=0x613;eip=0x00332c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_21a))));	// 14098 mov     bx, [bp+var_21A] ;~ 0613:332C
cs=0x613;eip=0x003330; 	X(INC(*(dw*)(raddr(ss,bp+var_21a))));	// 14099 inc     [bp+var_21A] ;~ 0613:3330
cs=0x613;eip=0x003334; 	T(SHL(bx, 1));	// 14100 shl     bx, 1 ;~ 0613:3334
cs=0x613;eip=0x003336; 	T(ADD(bx, bp));	// 14101 add     bx, bp ;~ 0613:3336
cs=0x613;eip=0x003338; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 14102 mov     ax, [bp+var_8] ;~ 0613:3338
cs=0x613;eip=0x00333b; 	X(MOV(*(dw*)(raddr(ds,bx-0x216)), ax));	// 14103 mov     [bx-216h], ax ;~ 0613:333B
loc_17a4f:
	// 5186 
cs=0x613;eip=0x00333f; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 14106 cmp     [bp+var_2], 0 ;~ 0613:333F
cs=0x613;eip=0x003343; 	R(JZ(loc_17a6e));	// 14107 jz      short loc_17A6E ;~ 0613:3343
cs=0x613;eip=0x003345; 	T(CMP(di, 0x0FFFF));	// 14108 cmp     di, 0FFFFh ;~ 0613:3345
cs=0x613;eip=0x003348; 	R(JZ(loc_17a71));	// 14109 jz      short loc_17A71 ;~ 0613:3348
cs=0x613;eip=0x00334a; 	T(INC(di));	// 14110 inc     di ;~ 0613:334A
cs=0x613;eip=0x00334b; 	R(JMP(loc_17a71));	// 14111 jmp     short loc_17A71 ;~ 0613:334B
loc_17a5e:
	// 5187 
cs=0x613;eip=0x00334e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14116 mov     bx, [bp+arg_0] ;~ 0613:334E
cs=0x613;eip=0x003351; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 14117 mov     ax, [bp+var_2] ;~ 0613:3351
cs=0x613;eip=0x003354; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 14118 mov     [bx], ax ;~ 0613:3354
cs=0x613;eip=0x003356; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 14119 mov     bx, [bp+arg_2] ;~ 0613:3356
cs=0x613;eip=0x003359; 	X(MOV(*(dw*)(raddr(ds,bx)), di));	// 14120 mov     [bx], di ;~ 0613:3359
cs=0x613;eip=0x00335b; 	R(JMP(loc_17911));	// 14121 jmp     loc_17911 ;~ 0613:335B
loc_17a6e:
	// 5188 
cs=0x613;eip=0x00335e; 	T(MOV(di, 0x0FFFF));	// 14125 mov     di, 0FFFFh ;~ 0613:335E
loc_17a71:
	// 5189 
cs=0x613;eip=0x003361; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2))));	// 14129 mov     si, [bp+var_2] ;~ 0613:3361
cs=0x613;eip=0x003364; 	R(JMP(loc_178b9));	// 14130 jmp     loc_178B9 ;~ 0613:3364
update_car_speed:
	// 14140 
#undef var_a
#define var_a -0x0A
	// 14143 var_A           = byte ptr -0Ah ;~ 0613:3368
#undef var_8
#define var_8 -8
	// 14144 var_8           = word ptr -8 ;~ 0613:3368
#undef var_6
#define var_6 -6
	// 14145 var_6           = word ptr -6 ;~ 0613:3368
#undef var_4
#define var_4 -4
	// 14146 var_4           = dword ptr -4 ;~ 0613:3368
#undef arg_0
#define arg_0 6
	// 14147 arg_0           = byte ptr  6 ;~ 0613:3368
#undef arg_2
#define arg_2 8
	// 14148 arg_2           = byte ptr  8 ;~ 0613:3368
#undef arg_4
#define arg_4 0x0A
	// 14149 arg_4           = word ptr  0Ah ;~ 0613:3368
#undef arg_6
#define arg_6 0x0C
	// 14150 arg_6           = word ptr  0Ch ;~ 0613:3368
ret_613_3368:
	// 5190 
cs=0x613;eip=0x003368; 	X(PUSH(bp));	// 14152 push    bp              ; former update_car_state ;~ 0613:3368
cs=0x613;eip=0x003369; 	T(MOV(bp, sp));	// 14153 mov     bp, sp ;~ 0613:3369
cs=0x613;eip=0x00336b; 	T(SUB(sp, 0x0A));	// 14154 sub     sp, 0Ah ;~ 0613:336B
cs=0x613;eip=0x00336e; 	X(PUSH(di));	// 14155 push    di ;~ 0613:336E
cs=0x613;eip=0x00336f; 	X(PUSH(si));	// 14156 push    si ;~ 0613:336F
cs=0x613;eip=0x003370; 	T(CMP(framespersec, 0x14));	// 14157 cmp     framespersec, 14h ;~ 0613:3370
cs=0x613;eip=0x003375; 	R(JNZ(loc_17a8e));	// 14158 jnz     short loc_17A8E ;~ 0613:3375
cs=0x613;eip=0x003377; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), 6));	// 14159 mov     word ptr [bp+var_4+2], 6 ;~ 0613:3377
cs=0x613;eip=0x00337c; 	R(JMP(loc_17a93));	// 14160 jmp     short loc_17A93 ;~ 0613:337C
loc_17a8e:
	// 5191 
cs=0x613;eip=0x00337e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), 0x0C));	// 14164 mov     word ptr [bp+var_4+2], 0Ch ;~ 0613:337E
loc_17a93:
	// 5192 
cs=0x613;eip=0x003383; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14167 mov     bx, [bp+arg_4] ;~ 0613:3383
cs=0x613;eip=0x003386; 	T(CMP(*(raddr(ds,bx+0x0C6)), 0));	// 14168 cmp     byte ptr [bx+0C6h], 0 ;~ 0613:3386
cs=0x613;eip=0x00338b; 	R(JZ(loc_17aa1));	// 14169 jz      short loc_17AA1 ;~ 0613:338B
cs=0x613;eip=0x00338d; 	X(DEC(*(raddr(ds,bx+0x0C6))));	// 14170 dec     byte ptr [bx+0C6h] ;~ 0613:338D
loc_17aa1:
	// 5193 
cs=0x613;eip=0x003391; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14173 mov     bx, [bp+arg_4] ;~ 0613:3391
cs=0x613;eip=0x003394; 	T(MOV(si, bx));	// 14174 mov     si, bx ;~ 0613:3394
cs=0x613;eip=0x003396; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x2C))));	// 14175 mov     ax, [si+2Ch] ;~ 0613:3396
cs=0x613;eip=0x003399; 	T(SUB(ax, *(dw*)(raddr(ds,si+0x2E))));	// 14176 sub     ax, [si+2Eh] ;~ 0613:3399
cs=0x613;eip=0x00339c; 	X(MOV(*(dw*)(raddr(ds,bx+0x28)), ax));	// 14177 mov     [bx+28h], ax ;~ 0613:339C
cs=0x613;eip=0x00339f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14178 mov     bx, [bp+arg_4] ;~ 0613:339F
cs=0x613;eip=0x0033a2; 	T(MOV(si, bx));	// 14179 mov     si, bx ;~ 0613:33A2
cs=0x613;eip=0x0033a4; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x2C))));	// 14180 mov     ax, [si+2Ch] ;~ 0613:33A4
cs=0x613;eip=0x0033a7; 	X(MOV(*(dw*)(raddr(ds,bx+0x2E)), ax));	// 14181 mov     [bx+2Eh], ax ;~ 0613:33A7
cs=0x613;eip=0x0033aa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14182 mov     bx, [bp+arg_4] ;~ 0613:33AA
cs=0x613;eip=0x0033ad; 	T(MOV(si, bx));	// 14183 mov     si, bx ;~ 0613:33AD
cs=0x613;eip=0x0033af; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x22))));	// 14184 mov     ax, [si+22h] ;~ 0613:33AF
cs=0x613;eip=0x0033b2; 	X(MOV(*(dw*)(raddr(ds,bx+0x24)), ax));	// 14185 mov     [bx+24h], ax ;~ 0613:33B2
cs=0x613;eip=0x0033b5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14186 mov     bx, [bp+arg_4] ;~ 0613:33B5
cs=0x613;eip=0x0033b8; 	T(CMP(*(raddr(ds,bx+0x0CC)), 0));	// 14187 cmp     byte ptr [bx+0CCh], 0 ;~ 0613:33B8
cs=0x613;eip=0x0033bd; 	R(JNZ(loc_17ae6));	// 14188 jnz     short loc_17AE6 ;~ 0613:33BD
cs=0x613;eip=0x0033bf; 	T(CMP(*(raddr(ds,bx+0x0CA)), 0));	// 14189 cmp     byte ptr [bx+0CAh], 0 ;~ 0613:33BF
cs=0x613;eip=0x0033c4; 	R(JNZ(loc_17ae6));	// 14190 jnz     short loc_17AE6 ;~ 0613:33C4
cs=0x613;eip=0x0033c6; 	T(TEST(*(raddr(ss,bp+arg_0)), 0x10));	// 14191 test    [bp+arg_0], 10h ;~ 0613:33C6
cs=0x613;eip=0x0033ca; 	R(JNZ(loc_17b0f));	// 14192 jnz     short loc_17B0F ;~ 0613:33CA
cs=0x613;eip=0x0033cc; 	T(TEST(*(raddr(ss,bp+arg_0)), 0x20));	// 14193 test    [bp+arg_0], 20h ;~ 0613:33CC
cs=0x613;eip=0x0033d0; 	R(JNZ(loc_17b2e));	// 14194 jnz     short loc_17B2E ;~ 0613:33D0
cs=0x613;eip=0x0033d2; 	R(JMP(loc_17b86));	// 14195 jmp     loc_17B86 ;~ 0613:33D2
loc_17ae6:
	// 5194 
cs=0x613;eip=0x0033d6; 	T(CMP(*(raddr(ds,bx+0x0BE)), 0));	// 14201 cmp     byte ptr [bx+0BEh], 0 ;~ 0613:33D6
cs=0x613;eip=0x0033db; 	R(JNZ(loc_17af0));	// 14202 jnz     short loc_17AF0 ;~ 0613:33DB
cs=0x613;eip=0x0033dd; 	R(JMP(loc_17b86));	// 14203 jmp     loc_17B86 ;~ 0613:33DD
loc_17af0:
	// 5195 
cs=0x613;eip=0x0033e0; 	T(CMP(*(raddr(ds,bx+0x0CA)), 0));	// 14207 cmp     byte ptr [bx+0CAh], 0 ;~ 0613:33E0
cs=0x613;eip=0x0033e5; 	R(JZ(loc_17afa));	// 14208 jz      short loc_17AFA ;~ 0613:33E5
cs=0x613;eip=0x0033e7; 	R(JMP(loc_17b86));	// 14209 jmp     loc_17B86 ;~ 0613:33E7
loc_17afa:
	// 5196 
cs=0x613;eip=0x0033ea; 	T(CMP(*(raddr(ds,bx+0x0C0)), 0));	// 14213 cmp     byte ptr [bx+0C0h], 0 ;~ 0613:33EA
cs=0x613;eip=0x0033ef; 	R(JNZ(loc_17b04));	// 14214 jnz     short loc_17B04 ;~ 0613:33EF
cs=0x613;eip=0x0033f1; 	R(JMP(loc_17b86));	// 14215 jmp     loc_17B86 ;~ 0613:33F1
loc_17b04:
	// 5197 
cs=0x613;eip=0x0033f4; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_6))));	// 14219 mov     si, [bp+arg_6] ;~ 0613:33F4
cs=0x613;eip=0x0033f7; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x0A))));	// 14220 mov     ax, [si+0Ah] ;~ 0613:33F7
cs=0x613;eip=0x0033fa; 	T(CMP(*(dw*)(raddr(ds,bx+0x22)), ax));	// 14221 cmp     [bx+22h], ax ;~ 0613:33FA
cs=0x613;eip=0x0033fd; 	R(JBE(loc_17b20));	// 14222 jbe     short loc_17B20 ;~ 0613:33FD
loc_17b0f:
	// 5198 
cs=0x613;eip=0x0033ff; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_6))));	// 14225 mov     si, [bp+arg_6] ;~ 0613:33FF
cs=0x613;eip=0x003402; 	T(MOV(al, *(raddr(ds,si+0))));	// 14226 mov     al, [si+0] ;~ 0613:3402
cs=0x613;eip=0x003404; 	T(CMP(*(raddr(ds,bx+0x0BE)), al));	// 14227 cmp     [bx+0BEh], al ;~ 0613:3404
cs=0x613;eip=0x003408; 	R(JZ(loc_17b86));	// 14228 jz      short loc_17B86 ;~ 0613:3408
cs=0x613;eip=0x00340a; 	X(INC(*(raddr(ds,bx+0x0BE))));	// 14229 inc     byte ptr [bx+0BEh] ;~ 0613:340A
cs=0x613;eip=0x00340e; 	R(JMP(loc_17b39));	// 14230 jmp     short loc_17B39 ;~ 0613:340E
loc_17b20:
	// 5199 
cs=0x613;eip=0x003410; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14234 mov     bx, [bp+arg_4] ;~ 0613:3410
cs=0x613;eip=0x003413; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_6))));	// 14235 mov     si, [bp+arg_6] ;~ 0613:3413
cs=0x613;eip=0x003416; 	T(MOV(ax, *(dw*)(raddr(ds,si+8))));	// 14236 mov     ax, [si+8] ;~ 0613:3416
cs=0x613;eip=0x003419; 	T(CMP(*(dw*)(raddr(ds,bx+0x22)), ax));	// 14237 cmp     [bx+22h], ax ;~ 0613:3419
cs=0x613;eip=0x00341c; 	R(JNC(loc_17b86));	// 14238 jnb     short loc_17B86 ;~ 0613:341C
loc_17b2e:
	// 5200 
cs=0x613;eip=0x00341e; 	T(CMP(*(raddr(ds,bx+0x0BE)), 1));	// 14241 cmp     byte ptr [bx+0BEh], 1 ;~ 0613:341E
cs=0x613;eip=0x003423; 	R(JLE(loc_17b86));	// 14242 jle     short loc_17B86 ;~ 0613:3423
cs=0x613;eip=0x003425; 	X(DEC(*(raddr(ds,bx+0x0BE))));	// 14243 dec     byte ptr [bx+0BEh] ;~ 0613:3425
loc_17b39:
	// 5201 
cs=0x613;eip=0x003429; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14246 mov     bx, [bp+arg_4] ;~ 0613:3429
cs=0x613;eip=0x00342c; 	X(MOV(*(raddr(ds,bx+0x0CA)), 1));	// 14247 mov     byte ptr [bx+0CAh], 1 ;~ 0613:342C
cs=0x613;eip=0x003431; 	T(MOV(al, *(db*)(((db*)&framespersec))));	// 14248 mov     al, byte ptr framespersec ;~ 0613:3431
cs=0x613;eip=0x003434; 	T(CBW);	// 14249 cbw ;~ 0613:3434
cs=0x613;eip=0x003435; 	T(SAR(ax, 1));	// 14250 sar     ax, 1 ;~ 0613:3435
cs=0x613;eip=0x003437; 	T(ADD(al, *(db*)(((db*)&framespersec))));	// 14251 add     al, byte ptr framespersec ;~ 0613:3437
cs=0x613;eip=0x00343b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14252 mov     bx, [bp+arg_4] ;~ 0613:343B
cs=0x613;eip=0x00343e; 	X(MOV(*(raddr(ds,bx+0x0CB)), al));	// 14253 mov     [bx+0CBh], al ;~ 0613:343E
cs=0x613;eip=0x003442; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14254 mov     bx, [bp+arg_4] ;~ 0613:3442
cs=0x613;eip=0x003445; 	T(MOV(al, *(raddr(ds,bx+0x0BE))));	// 14255 mov     al, [bx+0BEh] ;~ 0613:3445
cs=0x613;eip=0x003449; 	T(CBW);	// 14256 cbw ;~ 0613:3449
cs=0x613;eip=0x00344a; 	T(MOV(si, ax));	// 14257 mov     si, ax ;~ 0613:344A
cs=0x613;eip=0x00344c; 	T(SHL(si, 1));	// 14258 shl     si, 1 ;~ 0613:344C
cs=0x613;eip=0x00344e; 	T(SHL(si, 1));	// 14259 shl     si, 1 ;~ 0613:344E
cs=0x613;eip=0x003450; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14260 mov     bx, [bp+arg_6] ;~ 0613:3450
cs=0x613;eip=0x003453; 	T(MOV(ax, *(dw*)(raddr(ds,bx+si+0x1C))));	// 14261 mov     ax, [bx+si+1Ch] ;~ 0613:3453
cs=0x613;eip=0x003456; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14262 mov     bx, [bp+arg_4] ;~ 0613:3456
cs=0x613;eip=0x003459; 	X(MOV(*(dw*)(raddr(ds,bx+0x3A)), ax));	// 14263 mov     [bx+3Ah], ax ;~ 0613:3459
cs=0x613;eip=0x00345c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14264 mov     bx, [bp+arg_4] ;~ 0613:345C
cs=0x613;eip=0x00345f; 	T(MOV(al, *(raddr(ds,bx+0x0BE))));	// 14265 mov     al, [bx+0BEh] ;~ 0613:345F
cs=0x613;eip=0x003463; 	T(CBW);	// 14266 cbw ;~ 0613:3463
cs=0x613;eip=0x003464; 	T(MOV(si, ax));	// 14267 mov     si, ax ;~ 0613:3464
cs=0x613;eip=0x003466; 	T(SHL(si, 1));	// 14268 shl     si, 1 ;~ 0613:3466
cs=0x613;eip=0x003468; 	T(SHL(si, 1));	// 14269 shl     si, 1 ;~ 0613:3468
cs=0x613;eip=0x00346a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14270 mov     bx, [bp+arg_6] ;~ 0613:346A
cs=0x613;eip=0x00346d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+si+0x1E))));	// 14271 mov     ax, [bx+si+1Eh] ;~ 0613:346D
cs=0x613;eip=0x003470; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14272 mov     bx, [bp+arg_4] ;~ 0613:3470
cs=0x613;eip=0x003473; 	X(MOV(*(dw*)(raddr(ds,bx+0x3C)), ax));	// 14273 mov     [bx+3Ch], ax ;~ 0613:3473
loc_17b86:
	// 5202 
cs=0x613;eip=0x003476; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14277 mov     bx, [bp+arg_4] ;~ 0613:3476
cs=0x613;eip=0x003479; 	T(CMP(*(raddr(ds,bx+0x0CA)), 0));	// 14278 cmp     byte ptr [bx+0CAh], 0 ;~ 0613:3479
cs=0x613;eip=0x00347e; 	R(JNZ(loc_17b93));	// 14279 jnz     short loc_17B93 ;~ 0613:347E
cs=0x613;eip=0x003480; 	R(JMP(loc_17c9e));	// 14280 jmp     loc_17C9E ;~ 0613:3480
loc_17b93:
	// 5203 
cs=0x613;eip=0x003483; 	T(MOV(si, bx));	// 14284 mov     si, bx ;~ 0613:3483
cs=0x613;eip=0x003485; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x3A))));	// 14285 mov     ax, [si+3Ah] ;~ 0613:3485
cs=0x613;eip=0x003488; 	T(CMP(*(dw*)(raddr(ds,bx+0x34)), ax));	// 14286 cmp     [bx+34h], ax ;~ 0613:3488
cs=0x613;eip=0x00348b; 	R(JNZ(loc_17c0c));	// 14287 jnz     short loc_17C0C ;~ 0613:348B
cs=0x613;eip=0x00348d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x3C))));	// 14288 mov     ax, [bx+3Ch] ;~ 0613:348D
cs=0x613;eip=0x003490; 	T(SUB(ax, *(dw*)(raddr(ds,bx+0x38))));	// 14289 sub     ax, [bx+38h] ;~ 0613:3490
cs=0x613;eip=0x003493; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 14290 mov     word ptr [bp+var_4], ax ;~ 0613:3493
cs=0x613;eip=0x003496; 	T(OR(ax, ax));	// 14291 or      ax, ax ;~ 0613:3496
cs=0x613;eip=0x003498; 	R(JNZ(loc_17bda));	// 14292 jnz     short loc_17BDA ;~ 0613:3498
cs=0x613;eip=0x00349a; 	X(MOV(*(raddr(ds,bx+0x0CA)), 0));	// 14293 mov     byte ptr [bx+0CAh], 0 ;~ 0613:349A
cs=0x613;eip=0x00349f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14294 mov     bx, [bp+arg_4] ;~ 0613:349F
cs=0x613;eip=0x0034a2; 	T(MOV(al, *(raddr(ds,bx+0x0BE))));	// 14295 mov     al, [bx+0BEh] ;~ 0613:34A2
cs=0x613;eip=0x0034a6; 	T(CBW);	// 14296 cbw ;~ 0613:34A6
cs=0x613;eip=0x0034a7; 	T(MOV(si, ax));	// 14297 mov     si, ax ;~ 0613:34A7
cs=0x613;eip=0x0034a9; 	T(SHL(si, 1));	// 14298 shl     si, 1 ;~ 0613:34A9
cs=0x613;eip=0x0034ab; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14299 mov     bx, [bp+arg_6] ;~ 0613:34AB
cs=0x613;eip=0x0034ae; 	T(MOV(ax, *(dw*)(raddr(ds,bx+si+0x0E))));	// 14300 mov     ax, [bx+si+0Eh] ;~ 0613:34AE
cs=0x613;eip=0x0034b1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14301 mov     bx, [bp+arg_4] ;~ 0613:34B1
cs=0x613;eip=0x0034b4; 	X(MOV(*(dw*)(raddr(ds,bx+0x30)), ax));	// 14302 mov     [bx+30h], ax ;~ 0613:34B4
cs=0x613;eip=0x0034b7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14303 mov     bx, [bp+arg_4] ;~ 0613:34B7
cs=0x613;eip=0x0034ba; 	T(MOV(si, bx));	// 14304 mov     si, bx ;~ 0613:34BA
cs=0x613;eip=0x0034bc; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x30))));	// 14305 mov     ax, [si+30h] ;~ 0613:34BC
cs=0x613;eip=0x0034bf; 	T(MOV(cl, 8));	// 14306 mov     cl, 8 ;~ 0613:34BF
cs=0x613;eip=0x0034c1; 	T(SHR(ax, cl));	// 14307 shr     ax, cl ;~ 0613:34C1
cs=0x613;eip=0x0034c3; 	X(MOV(*(dw*)(raddr(ds,bx+0x32)), ax));	// 14308 mov     [bx+32h], ax ;~ 0613:34C3
cs=0x613;eip=0x0034c6; 	R(JMP(loc_17cac));	// 14309 jmp     loc_17CAC ;~ 0613:34C6
loc_17bda:
	// 5204 
cs=0x613;eip=0x0034ca; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 14314 push    word ptr [bp+var_4] ; int ;~ 0613:34CA
cs=0x613;eip=0x0034cd; 	R(CALLF(_abs,0));	// 14315 call    _abs ;~ 0613:34CD
cs=0x613;eip=0x0034d2; 	T(ADD(sp, 2));	// 14316 add     sp, 2 ;~ 0613:34D2
cs=0x613;eip=0x0034d5; 	T(CMP(ax, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 14317 cmp     ax, word ptr [bp+var_4+2] ;~ 0613:34D5
cs=0x613;eip=0x0034d8; 	R(JG(loc_17bf6));	// 14318 jg      short loc_17BF6 ;~ 0613:34D8
cs=0x613;eip=0x0034da; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14319 mov     bx, [bp+arg_4] ;~ 0613:34DA
cs=0x613;eip=0x0034dd; 	T(MOV(si, bx));	// 14320 mov     si, bx ;~ 0613:34DD
cs=0x613;eip=0x0034df; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x3C))));	// 14321 mov     ax, [si+3Ch] ;~ 0613:34DF
cs=0x613;eip=0x0034e2; 	R(JMP(loc_17c84));	// 14322 jmp     loc_17C84 ;~ 0613:34E2
loc_17bf6:
	// 5205 
cs=0x613;eip=0x0034e6; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_4))), 0));	// 14327 cmp     word ptr [bp+var_4], 0 ;~ 0613:34E6
cs=0x613;eip=0x0034ea; 	R(JLE(loc_17bff));	// 14328 jle     short loc_17BFF ;~ 0613:34EA
cs=0x613;eip=0x0034ec; 	R(JMP(loc_17c93));	// 14329 jmp     loc_17C93 ;~ 0613:34EC
loc_17bff:
	// 5206 
cs=0x613;eip=0x0034ef; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14334 mov     bx, [bp+arg_4] ;~ 0613:34EF
cs=0x613;eip=0x0034f2; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 14335 mov     ax, word ptr [bp+var_4+2] ;~ 0613:34F2
cs=0x613;eip=0x0034f5; 	X(SUB(*(dw*)(raddr(ds,bx+0x38)), ax));	// 14336 sub     [bx+38h], ax ;~ 0613:34F5
cs=0x613;eip=0x0034f8; 	R(JMP(loc_17cac));	// 14337 jmp     loc_17CAC ;~ 0613:34F8
loc_17c0c:
	// 5207 
cs=0x613;eip=0x0034fc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14342 mov     bx, [bp+arg_6] ;~ 0613:34FC
cs=0x613;eip=0x0034ff; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 14343 mov     si, [bp+arg_4] ;~ 0613:34FF
cs=0x613;eip=0x003502; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x38))));	// 14344 mov     ax, [si+38h] ;~ 0613:3502
cs=0x613;eip=0x003505; 	T(CMP(*(dw*)(raddr(ds,bx+0x1E)), ax));	// 14345 cmp     [bx+1Eh], ax ;~ 0613:3505
cs=0x613;eip=0x003508; 	R(JNZ(loc_17c5e));	// 14346 jnz     short loc_17C5E ;~ 0613:3508
cs=0x613;eip=0x00350a; 	T(MOV(bx, si));	// 14347 mov     bx, si ;~ 0613:350A
cs=0x613;eip=0x00350c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x3A))));	// 14348 mov     ax, [bx+3Ah] ;~ 0613:350C
cs=0x613;eip=0x00350f; 	T(SUB(ax, *(dw*)(raddr(ds,bx+0x34))));	// 14349 sub     ax, [bx+34h] ;~ 0613:350F
cs=0x613;eip=0x003512; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 14350 mov     word ptr [bp+var_4], ax ;~ 0613:3512
cs=0x613;eip=0x003515; 	X(PUSH(ax));	// 14351 push    ax              ; int ;~ 0613:3515
cs=0x613;eip=0x003516; 	R(CALLF(_abs,0));	// 14352 call    _abs ;~ 0613:3516
cs=0x613;eip=0x00351b; 	T(ADD(sp, 2));	// 14353 add     sp, 2 ;~ 0613:351B
cs=0x613;eip=0x00351e; 	T(CMP(ax, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 14354 cmp     ax, word ptr [bp+var_4+2] ;~ 0613:351E
cs=0x613;eip=0x003521; 	R(JG(loc_17c40));	// 14355 jg      short loc_17C40 ;~ 0613:3521
cs=0x613;eip=0x003523; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14356 mov     bx, [bp+arg_4] ;~ 0613:3523
cs=0x613;eip=0x003526; 	T(MOV(si, bx));	// 14357 mov     si, bx ;~ 0613:3526
cs=0x613;eip=0x003528; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x3A))));	// 14358 mov     ax, [si+3Ah] ;~ 0613:3528
cs=0x613;eip=0x00352b; 	X(MOV(*(dw*)(raddr(ds,bx+0x34)), ax));	// 14359 mov     [bx+34h], ax ;~ 0613:352B
cs=0x613;eip=0x00352e; 	R(JMP(loc_17cac));	// 14360 jmp     short loc_17CAC ;~ 0613:352E
loc_17c40:
	// 5208 
cs=0x613;eip=0x003530; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_4))), 0));	// 14364 cmp     word ptr [bp+var_4], 0 ;~ 0613:3530
cs=0x613;eip=0x003534; 	R(JLE(loc_17c52));	// 14365 jle     short loc_17C52 ;~ 0613:3534
cs=0x613;eip=0x003536; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14366 mov     bx, [bp+arg_4] ;~ 0613:3536
cs=0x613;eip=0x003539; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 14367 mov     ax, word ptr [bp+var_4+2] ;~ 0613:3539
cs=0x613;eip=0x00353c; 	X(ADD(*(dw*)(raddr(ds,bx+0x34)), ax));	// 14368 add     [bx+34h], ax ;~ 0613:353C
cs=0x613;eip=0x00353f; 	R(JMP(loc_17cac));	// 14369 jmp     short loc_17CAC ;~ 0613:353F
loc_17c52:
	// 5209 
cs=0x613;eip=0x003542; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14374 mov     bx, [bp+arg_4] ;~ 0613:3542
cs=0x613;eip=0x003545; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 14375 mov     ax, word ptr [bp+var_4+2] ;~ 0613:3545
cs=0x613;eip=0x003548; 	X(SUB(*(dw*)(raddr(ds,bx+0x34)), ax));	// 14376 sub     [bx+34h], ax ;~ 0613:3548
cs=0x613;eip=0x00354b; 	R(JMP(loc_17cac));	// 14377 jmp     short loc_17CAC ;~ 0613:354B
loc_17c5e:
	// 5210 
cs=0x613;eip=0x00354e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14382 mov     bx, [bp+arg_6] ;~ 0613:354E
cs=0x613;eip=0x003551; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1E))));	// 14383 mov     ax, [bx+1Eh] ;~ 0613:3551
cs=0x613;eip=0x003554; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14384 mov     bx, [bp+arg_4] ;~ 0613:3554
cs=0x613;eip=0x003557; 	T(SUB(ax, *(dw*)(raddr(ds,bx+0x38))));	// 14385 sub     ax, [bx+38h] ;~ 0613:3557
cs=0x613;eip=0x00355a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 14386 mov     word ptr [bp+var_4], ax ;~ 0613:355A
cs=0x613;eip=0x00355d; 	X(PUSH(ax));	// 14387 push    ax              ; int ;~ 0613:355D
cs=0x613;eip=0x00355e; 	R(CALLF(_abs,0));	// 14388 call    _abs ;~ 0613:355E
cs=0x613;eip=0x003563; 	T(ADD(sp, 2));	// 14389 add     sp, 2 ;~ 0613:3563
cs=0x613;eip=0x003566; 	T(CMP(ax, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 14390 cmp     ax, word ptr [bp+var_4+2] ;~ 0613:3566
cs=0x613;eip=0x003569; 	R(JG(loc_17c8a));	// 14391 jg      short loc_17C8A ;~ 0613:3569
cs=0x613;eip=0x00356b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14392 mov     bx, [bp+arg_4] ;~ 0613:356B
cs=0x613;eip=0x00356e; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_6))));	// 14393 mov     si, [bp+arg_6] ;~ 0613:356E
cs=0x613;eip=0x003571; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x1E))));	// 14394 mov     ax, [si+1Eh] ;~ 0613:3571
loc_17c84:
	// 5211 
cs=0x613;eip=0x003574; 	X(MOV(*(dw*)(raddr(ds,bx+0x38)), ax));	// 14397 mov     [bx+38h], ax ;~ 0613:3574
cs=0x613;eip=0x003577; 	R(JMP(loc_17cac));	// 14398 jmp     short loc_17CAC ;~ 0613:3577
loc_17c8a:
	// 5212 
cs=0x613;eip=0x00357a; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_4))), 0));	// 14403 cmp     word ptr [bp+var_4], 0 ;~ 0613:357A
cs=0x613;eip=0x00357e; 	R(JG(loc_17c93));	// 14404 jg      short loc_17C93 ;~ 0613:357E
cs=0x613;eip=0x003580; 	R(JMP(loc_17bff));	// 14405 jmp     loc_17BFF ;~ 0613:3580
loc_17c93:
	// 5213 
cs=0x613;eip=0x003583; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14410 mov     bx, [bp+arg_4] ;~ 0613:3583
cs=0x613;eip=0x003586; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 14411 mov     ax, word ptr [bp+var_4+2] ;~ 0613:3586
cs=0x613;eip=0x003589; 	X(ADD(*(dw*)(raddr(ds,bx+0x38)), ax));	// 14412 add     [bx+38h], ax ;~ 0613:3589
cs=0x613;eip=0x00358c; 	R(JMP(loc_17cac));	// 14413 jmp     short loc_17CAC ;~ 0613:358C
loc_17c9e:
	// 5214 
cs=0x613;eip=0x00358e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14417 mov     bx, [bp+arg_4] ;~ 0613:358E
cs=0x613;eip=0x003591; 	T(CMP(*(raddr(ds,bx+0x0CB)), 0));	// 14418 cmp     byte ptr [bx+0CBh], 0 ;~ 0613:3591
cs=0x613;eip=0x003596; 	R(JZ(loc_17cac));	// 14419 jz      short loc_17CAC ;~ 0613:3596
cs=0x613;eip=0x003598; 	X(DEC(*(raddr(ds,bx+0x0CB))));	// 14420 dec     byte ptr [bx+0CBh] ;~ 0613:3598
loc_17cac:
	// 5215 
cs=0x613;eip=0x00359c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14424 mov     bx, [bp+arg_4] ;~ 0613:359C
cs=0x613;eip=0x00359f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x2A))));	// 14425 mov     ax, [bx+2Ah] ;~ 0613:359F
cs=0x613;eip=0x0035a2; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 14426 mov     [bp+var_6], ax ;~ 0613:35A2
cs=0x613;eip=0x0035a5; 	T(MOV(si, ax));	// 14427 mov     si, ax ;~ 0613:35A5
cs=0x613;eip=0x0035a7; 	T(MOV(cl, 0x0A));	// 14428 mov     cl, 0Ah ;~ 0613:35A7
cs=0x613;eip=0x0035a9; 	T(SHR(si, cl));	// 14429 shr     si, cl ;~ 0613:35A9
cs=0x613;eip=0x0035ab; 	T(SHL(si, 1));	// 14430 shl     si, 1           ; this is NOT part of the calculations *LOL* ;~ 0613:35AB
cs=0x613;eip=0x0035ad; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14431 mov     bx, [bp+arg_6] ;~ 0613:35AD
cs=0x613;eip=0x0035b0; 	T(LES(bx, *(dw*)(raddr(ds,bx+0x304))));	// 14432 les     bx, [bx+304h] ;~ 0613:35B0
cs=0x613;eip=0x0035b4; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 14433 mov     di, [bp+arg_4] ;~ 0613:35B4
cs=0x613;eip=0x0035b7; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x1E))));	// 14434 mov     ax, [di+1Eh] ;~ 0613:35B7
cs=0x613;eip=0x0035ba; 	T(SUB(ax, *(dw*)(raddr(es,bx+si))));	// 14435 sub     ax, es:[bx+si] ;~ 0613:35BA
cs=0x613;eip=0x0035bd; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 14436 mov     [bp+var_8], ax ;~ 0613:35BD
cs=0x613;eip=0x0035c0; 	T(MOV(bx, di));	// 14437 mov     bx, di ;~ 0613:35C0
cs=0x613;eip=0x0035c2; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_6))));	// 14438 mov     si, [bp+arg_6] ;~ 0613:35C2
cs=0x613;eip=0x0035c5; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x0C))));	// 14439 mov     ax, [si+0Ch] ;~ 0613:35C5
cs=0x613;eip=0x0035c8; 	T(CMP(*(dw*)(raddr(ds,bx+0x22)), ax));	// 14440 cmp     [bx+22h], ax ;~ 0613:35C8
cs=0x613;eip=0x0035cb; 	R(JBE(loc_17cea));	// 14441 jbe     short loc_17CEA ;~ 0613:35CB
cs=0x613;eip=0x0035cd; 	T(DEC(ax));	// 14442 dec     ax ;~ 0613:35CD
cs=0x613;eip=0x0035ce; 	X(MOV(*(dw*)(raddr(ds,bx+0x22)), ax));	// 14443 mov     [bx+22h], ax ;~ 0613:35CE
loc_17ce1:
	// 5216 
cs=0x613;eip=0x0035d1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14446 mov     bx, [bp+arg_6] ;~ 0613:35D1
cs=0x613;eip=0x0035d4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 14447 mov     ax, [bx+4] ;~ 0613:35D4
cs=0x613;eip=0x0035d7; 	R(JMP(loc_17d36));	// 14448 jmp     short loc_17D36 ;~ 0613:35D7
loc_17cea:
	// 5217 
cs=0x613;eip=0x0035da; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 14453 mov     al, [bp+arg_0] ;~ 0613:35DA
cs=0x613;eip=0x0035dd; 	T(AND(ax, 3));	// 14454 and     ax, 3 ;~ 0613:35DD
cs=0x613;eip=0x0035e0; 	T(CMP(ax, 1));	// 14455 cmp     ax, 1 ;~ 0613:35E0
cs=0x613;eip=0x0035e3; 	R(JNZ(loc_17cf8));	// 14456 jnz     short loc_17CF8 ;~ 0613:35E3
cs=0x613;eip=0x0035e5; 	R(JMP(loc_17d82));	// 14457 jmp     loc_17D82 ;~ 0613:35E5
loc_17cf8:
	// 5218 
cs=0x613;eip=0x0035e8; 	T(CMP(ax, 2));	// 14461 cmp     ax, 2 ;~ 0613:35E8
cs=0x613;eip=0x0035eb; 	R(JZ(loc_17d10));	// 14462 jz      short loc_17D10 ;~ 0613:35EB
cs=0x613;eip=0x0035ed; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14463 mov     bx, [bp+arg_4] ;~ 0613:35ED
cs=0x613;eip=0x0035f0; 	X(MOV(*(raddr(ds,bx+0x0BD)), 0));	// 14464 mov     byte ptr [bx+0BDh], 0 ;~ 0613:35F0
cs=0x613;eip=0x0035f5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14465 mov     bx, [bp+arg_4] ;~ 0613:35F5
cs=0x613;eip=0x0035f8; 	X(MOV(*(raddr(ds,bx+0x0BC)), 0));	// 14466 mov     byte ptr [bx+0BCh], 0 ;~ 0613:35F8
cs=0x613;eip=0x0035fd; 	R(JMP(loc_17d39));	// 14467 jmp     short loc_17D39 ;~ 0613:35FD
loc_17d10:
	// 5219 
cs=0x613;eip=0x003600; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14472 mov     bx, [bp+arg_4] ;~ 0613:3600
cs=0x613;eip=0x003603; 	X(MOV(*(raddr(ds,bx+0x0BD)), 0));	// 14473 mov     byte ptr [bx+0BDh], 0 ;~ 0613:3603
cs=0x613;eip=0x003608; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14474 mov     bx, [bp+arg_4] ;~ 0613:3608
cs=0x613;eip=0x00360b; 	X(MOV(*(raddr(ds,bx+0x0C6)), 0));	// 14475 mov     byte ptr [bx+0C6h], 0 ;~ 0613:360B
cs=0x613;eip=0x003610; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14476 mov     bx, [bp+arg_4] ;~ 0613:3610
cs=0x613;eip=0x003613; 	X(MOV(*(raddr(ds,bx+0x0BC)), 1));	// 14477 mov     byte ptr [bx+0BCh], 1 ;~ 0613:3613
cs=0x613;eip=0x003618; 	T(CMP(*(raddr(ss,bp+arg_2)), 0));	// 14478 cmp     [bp+arg_2], 0 ;~ 0613:3618
cs=0x613;eip=0x00361c; 	R(JZ(loc_17ce1));	// 14479 jz      short loc_17CE1 ;~ 0613:361C
cs=0x613;eip=0x00361e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14480 mov     bx, [bp+arg_6] ;~ 0613:361E
cs=0x613;eip=0x003621; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 14481 mov     ax, [bx+4] ;~ 0613:3621
cs=0x613;eip=0x003624; 	T(SHL(ax, 1));	// 14482 shl     ax, 1 ;~ 0613:3624
loc_17d36:
	// 5220 
cs=0x613;eip=0x003626; 	X(SUB(*(dw*)(raddr(ss,bp+var_8)), ax));	// 14485 sub     [bp+var_8], ax ;~ 0613:3626
loc_17d39:
	// 5221 
cs=0x613;eip=0x003629; 	T(CMP(framespersec, 0x0A));	// 14489 cmp     framespersec, 0Ah ;~ 0613:3629
cs=0x613;eip=0x00362e; 	R(JNZ(loc_17d46));	// 14490 jnz     short loc_17D46 ;~ 0613:362E
cs=0x613;eip=0x003630; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 14491 mov     ax, [bp+var_8] ;~ 0613:3630
cs=0x613;eip=0x003633; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), ax));	// 14492 add     [bp+var_8], ax ;~ 0613:3633
loc_17d46:
	// 5222 
cs=0x613;eip=0x003636; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 14495 cmp     [bp+var_8], 0 ;~ 0613:3636
cs=0x613;eip=0x00363a; 	R(JGE(loc_17d4f));	// 14496 jge     short loc_17D4F ;~ 0613:363A
cs=0x613;eip=0x00363c; 	R(JMP(loc_17ee2));	// 14497 jmp     loc_17EE2 ;~ 0613:363C
loc_17d4f:
	// 5223 
cs=0x613;eip=0x00363f; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0x8000));	// 14501 cmp     [bp+var_6], 8000h ;~ 0613:363F
cs=0x613;eip=0x003644; 	R(JC(loc_17d59));	// 14502 jb      short loc_17D59 ;~ 0613:3644
cs=0x613;eip=0x003646; 	R(JMP(loc_17ec2));	// 14503 jmp     loc_17EC2 ;~ 0613:3646
loc_17d59:
	// 5224 
cs=0x613;eip=0x003649; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 14508 mov     ax, [bp+var_8] ;~ 0613:3649
cs=0x613;eip=0x00364c; 	X(ADD(*(dw*)(raddr(ss,bp+var_6)), ax));	// 14509 add     [bp+var_6], ax ;~ 0613:364C
loc_17d5f:
	// 5225 
cs=0x613;eip=0x00364f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14513 mov     bx, [bp+arg_4] ;~ 0613:364F
cs=0x613;eip=0x003652; 	T(CMP(*(raddr(ds,bx+0x0C0)), 0));	// 14514 cmp     byte ptr [bx+0C0h], 0 ;~ 0613:3652
cs=0x613;eip=0x003657; 	R(JNZ(loc_17d6c));	// 14515 jnz     short loc_17D6C ;~ 0613:3657
cs=0x613;eip=0x003659; 	R(JMP(loc_17f3c));	// 14516 jmp     loc_17F3C ;~ 0613:3659
loc_17d6c:
	// 5226 
cs=0x613;eip=0x00365c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x2C))));	// 14520 mov     ax, [bx+2Ch] ;~ 0613:365C
cs=0x613;eip=0x00365f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_6))));	// 14521 sub     ax, [bp+var_6] ;~ 0613:365F
cs=0x613;eip=0x003662; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 14522 mov     word ptr [bp+var_4], ax ;~ 0613:3662
cs=0x613;eip=0x003665; 	T(OR(ax, ax));	// 14523 or      ax, ax ;~ 0613:3665
cs=0x613;eip=0x003667; 	R(JL(loc_17d7c));	// 14524 jl      short loc_17D7C ;~ 0613:3667
cs=0x613;eip=0x003669; 	R(JMP(loc_17ef8));	// 14525 jmp     loc_17EF8 ;~ 0613:3669
loc_17d7c:
	// 5227 
cs=0x613;eip=0x00366c; 	T(NEG(ax));	// 14529 neg     ax ;~ 0613:366C
cs=0x613;eip=0x00366e; 	R(JMP(loc_17efb));	// 14530 jmp     loc_17EFB ;~ 0613:366E
loc_17d82:
	// 5228 
cs=0x613;eip=0x003672; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14535 mov     bx, [bp+arg_4] ;~ 0613:3672
cs=0x613;eip=0x003675; 	X(MOV(*(raddr(ds,bx+0x0BC)), 0));	// 14536 mov     byte ptr [bx+0BCh], 0 ;~ 0613:3675
cs=0x613;eip=0x00367a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14537 mov     bx, [bp+arg_4] ;~ 0613:367A
cs=0x613;eip=0x00367d; 	X(MOV(*(raddr(ds,bx+0x0BD)), 1));	// 14538 mov     byte ptr [bx+0BDh], 1 ;~ 0613:367D
cs=0x613;eip=0x003682; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14539 mov     bx, [bp+arg_4] ;~ 0613:3682
cs=0x613;eip=0x003685; 	T(CMP(*(raddr(ds,bx+0x0CA)), 0));	// 14540 cmp     byte ptr [bx+0CAh], 0 ;~ 0613:3685
cs=0x613;eip=0x00368a; 	R(JZ(loc_17dbc));	// 14541 jz      short loc_17DBC ;~ 0613:368A
cs=0x613;eip=0x00368c; 	X(MOV(*(raddr(ds,bx+0x0C6)), 0));	// 14542 mov     byte ptr [bx+0C6h], 0 ;~ 0613:368C
cs=0x613;eip=0x003691; 	T(CMP(framespersec, 0x0A));	// 14543 cmp     framespersec, 0Ah ;~ 0613:3691
cs=0x613;eip=0x003696; 	R(JNZ(loc_17db2));	// 14544 jnz     short loc_17DB2 ;~ 0613:3696
cs=0x613;eip=0x003698; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14545 mov     bx, [bp+arg_4] ;~ 0613:3698
cs=0x613;eip=0x00369b; 	X(SUB(*(dw*)(raddr(ds,bx+0x22)), 0x50));	// 14546 sub     word ptr [bx+22h], 50h ; 'P' ;~ 0613:369B
cs=0x613;eip=0x00369f; 	R(JMP(loc_17d39));	// 14547 jmp     short loc_17D39 ;~ 0613:369F
loc_17db2:
	// 5229 
cs=0x613;eip=0x0036a2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14552 mov     bx, [bp+arg_4] ;~ 0613:36A2
cs=0x613;eip=0x0036a5; 	X(SUB(*(dw*)(raddr(ds,bx+0x22)), 0x28));	// 14553 sub     word ptr [bx+22h], 28h ; '(' ;~ 0613:36A5
cs=0x613;eip=0x0036a9; 	R(JMP(loc_17d39));	// 14554 jmp     loc_17D39 ;~ 0613:36A9
loc_17dbc:
	// 5230 
cs=0x613;eip=0x0036ac; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14558 mov     bx, [bp+arg_4] ;~ 0613:36AC
cs=0x613;eip=0x0036af; 	T(CMP(*(raddr(ds,bx+0x0C0)), 0));	// 14559 cmp     byte ptr [bx+0C0h], 0 ;~ 0613:36AF
cs=0x613;eip=0x0036b4; 	R(JNZ(loc_17de6));	// 14560 jnz     short loc_17DE6 ;~ 0613:36B4
cs=0x613;eip=0x0036b6; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_6))));	// 14561 mov     si, [bp+arg_6] ;~ 0613:36B6
cs=0x613;eip=0x0036b9; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x0C))));	// 14562 mov     ax, [si+0Ch] ;~ 0613:36B9
cs=0x613;eip=0x0036bc; 	T(CMP(*(dw*)(raddr(ds,bx+0x22)), ax));	// 14563 cmp     [bx+22h], ax ;~ 0613:36BC
cs=0x613;eip=0x0036bf; 	R(JC(loc_17dd4));	// 14564 jb      short loc_17DD4 ;~ 0613:36BF
cs=0x613;eip=0x0036c1; 	R(JMP(loc_17d39));	// 14565 jmp     loc_17D39 ;~ 0613:36C1
loc_17dd4:
	// 5231 
cs=0x613;eip=0x0036c4; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0x0FA00));	// 14569 cmp     [bp+var_6], 0FA00h ;~ 0613:36C4
cs=0x613;eip=0x0036c9; 	R(JC(loc_17dde));	// 14570 jb      short loc_17DDE ;~ 0613:36C9
cs=0x613;eip=0x0036cb; 	R(JMP(loc_17d39));	// 14571 jmp     loc_17D39 ;~ 0613:36CB
loc_17dde:
	// 5232 
cs=0x613;eip=0x0036ce; 	X(ADD(*(db*)(raddr(ss,bp+var_8+1)), 3));	// 14575 add     byte ptr [bp+var_8+1], 3 ;~ 0613:36CE
cs=0x613;eip=0x0036d2; 	R(JMP(loc_17d39));	// 14576 jmp     loc_17D39 ;~ 0613:36D2
loc_17de6:
	// 5233 
cs=0x613;eip=0x0036d6; 	T(CMP(*(raddr(ds,bx+0x0BE)), 1));	// 14581 cmp     byte ptr [bx+0BEh], 1 ;~ 0613:36D6
cs=0x613;eip=0x0036db; 	R(JG(loc_17dfc));	// 14582 jg      short loc_17DFC ;~ 0613:36DB
cs=0x613;eip=0x0036dd; 	T(CMP(*(dw*)(raddr(ds,bx+0x22)), 0x0A28));	// 14583 cmp     word ptr [bx+22h], 0A28h ;~ 0613:36DD
cs=0x613;eip=0x0036e2; 	R(JGE(loc_17dfc));	// 14584 jge     short loc_17DFC ;~ 0613:36E2
cs=0x613;eip=0x0036e4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14585 mov     bx, [bp+arg_6] ;~ 0613:36E4
cs=0x613;eip=0x0036e7; 	T(MOV(al, *(raddr(ds,bx+0x3A))));	// 14586 mov     al, [bx+3Ah] ;~ 0613:36E7
cs=0x613;eip=0x0036ea; 	R(JMP(loc_17e0c));	// 14587 jmp     short loc_17E0C ;~ 0613:36EA
loc_17dfc:
	// 5234 
cs=0x613;eip=0x0036ec; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14592 mov     bx, [bp+arg_4] ;~ 0613:36EC
cs=0x613;eip=0x0036ef; 	T(MOV(si, *(dw*)(raddr(ds,bx+0x22))));	// 14593 mov     si, [bx+22h] ;~ 0613:36EF
cs=0x613;eip=0x0036f2; 	T(MOV(cl, 7));	// 14594 mov     cl, 7 ;~ 0613:36F2
cs=0x613;eip=0x0036f4; 	T(SHR(si, cl));	// 14595 shr     si, cl          ; divide rpm by 2^7 to find offset. ;~ 0613:36F4
cs=0x613;eip=0x0036f6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14596 mov     bx, [bp+arg_6] ;~ 0613:36F6
cs=0x613;eip=0x0036f9; 	T(MOV(al, *(raddr(ds,bx+si+0x3B))));	// 14597 mov     al, [bx+si+3Bh] ;~ 0613:36F9
loc_17e0c:
	// 5235 
cs=0x613;eip=0x0036fc; 	X(MOV(*(raddr(ss,bp+var_a)), al));	// 14600 mov     [bp+var_A], al ;~ 0613:36FC
cs=0x613;eip=0x0036ff; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14601 mov     bx, [bp+arg_4] ;~ 0613:36FF
cs=0x613;eip=0x003702; 	T(CMP(*(raddr(ds,bx+0x0C6)), 0));	// 14602 cmp     byte ptr [bx+0C6h], 0 ;~ 0613:3702
cs=0x613;eip=0x003707; 	R(JZ(loc_17e34));	// 14603 jz      short loc_17E34 ;~ 0613:3707
cs=0x613;eip=0x003709; 	T(CMP(*(dw*)(raddr(ds,bx+0x22)), 0x1388));	// 14604 cmp     word ptr [bx+22h], 1388h ;~ 0613:3709
cs=0x613;eip=0x00370e; 	R(JGE(loc_17e34));	// 14605 jge     short loc_17E34 ;~ 0613:370E
cs=0x613;eip=0x003710; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14606 mov     bx, [bp+arg_6] ;~ 0613:3710
cs=0x613;eip=0x003713; 	T(MOV(al, *(raddr(ds,bx+0x3A))));	// 14607 mov     al, [bx+3Ah] ;~ 0613:3713
cs=0x613;eip=0x003716; 	T(SUB(ah, ah));	// 14608 sub     ah, ah ;~ 0613:3716
cs=0x613;eip=0x003718; 	T(MOV(cl, *(raddr(ss,bp+var_a))));	// 14609 mov     cl, [bp+var_A] ;~ 0613:3718
cs=0x613;eip=0x00371b; 	T(SUB(ch, ch));	// 14610 sub     ch, ch ;~ 0613:371B
cs=0x613;eip=0x00371d; 	T(ADD(ax, cx));	// 14611 add     ax, cx ;~ 0613:371D
cs=0x613;eip=0x00371f; 	T(SHR(ax, 1));	// 14612 shr     ax, 1 ;~ 0613:371F
cs=0x613;eip=0x003721; 	X(MOV(*(raddr(ss,bp+var_a)), al));	// 14613 mov     [bp+var_A], al ;~ 0613:3721
loc_17e34:
	// 5236 
cs=0x613;eip=0x003724; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 14617 mov     al, [bp+var_A] ;~ 0613:3724
cs=0x613;eip=0x003727; 	T(SUB(ah, ah));	// 14618 sub     ah, ah ;~ 0613:3727
cs=0x613;eip=0x003729; 	T(MOV(cx, ax));	// 14619 mov     cx, ax ;~ 0613:3729
cs=0x613;eip=0x00372b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14620 mov     bx, [bp+arg_4] ;~ 0613:372B
cs=0x613;eip=0x00372e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x32))));	// 14621 mov     ax, [bx+32h] ;~ 0613:372E
cs=0x613;eip=0x003731; 	T(MUL1_2(cx));	// 14622 mul     cx ;~ 0613:3731
cs=0x613;eip=0x003733; 	T(MOV(cl, 4));	// 14623 mov     cl, 4 ;~ 0613:3733
cs=0x613;eip=0x003735; 	T(SHR(ax, cl));	// 14624 shr     ax, cl          ; torque * ratio / 4096 ;~ 0613:3735
cs=0x613;eip=0x003737; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), ax));	// 14625 add     [bp+var_8], ax ;~ 0613:3737
cs=0x613;eip=0x00373a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14626 mov     bx, [bp+arg_6] ;~ 0613:373A
cs=0x613;eip=0x00373d; 	T(SUB(ax, ax));	// 14627 sub     ax, ax ;~ 0613:373D
cs=0x613;eip=0x00373f; 	X(PUSH(ax));	// 14628 push    ax ;~ 0613:373F
cs=0x613;eip=0x003740; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 14629 push    word ptr [bx+2] ; push cwd(MASS) ;~ 0613:3740
cs=0x613;eip=0x003743; 	T(MOV(ax, 0x19));	// 14630 mov     ax, 19h ;~ 0613:3743
cs=0x613;eip=0x003746; 	T(CWD);	// 14631 cwd ;~ 0613:3746
cs=0x613;eip=0x003747; 	X(PUSH(dx));	// 14632 push    dx ;~ 0613:3747
cs=0x613;eip=0x003748; 	X(PUSH(ax));	// 14633 push    ax ;~ 0613:3748
cs=0x613;eip=0x003749; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 14634 mov     ax, [bp+var_8] ;~ 0613:3749
cs=0x613;eip=0x00374c; 	T(CWD);	// 14635 cwd ;~ 0613:374C
cs=0x613;eip=0x00374d; 	X(PUSH(dx));	// 14636 push    dx ;~ 0613:374D
cs=0x613;eip=0x00374e; 	X(PUSH(ax));	// 14637 push    ax ;~ 0613:374E
cs=0x613;eip=0x00374f; 	R(CALLF(__aflmul,0));	// 14638 call    __aFlmul ;~ 0613:374F
cs=0x613;eip=0x003754; 	X(PUSH(dx));	// 14639 push    dx ;~ 0613:3754
cs=0x613;eip=0x003755; 	X(PUSH(ax));	// 14640 push    ax ;~ 0613:3755
cs=0x613;eip=0x003756; 	R(CALLF(__afuldiv,0));	// 14641 call    __aFuldiv ;~ 0613:3756
cs=0x613;eip=0x00375b; 	T(SAR(ax, 1));	// 14642 sar     ax, 1 ;~ 0613:375B
cs=0x613;eip=0x00375d; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 14643 mov     [bp+var_8], ax ;~ 0613:375D
cs=0x613;eip=0x003760; 	T(CMP(*(raddr(ss,bp+arg_2)), 0));	// 14644 cmp     [bp+arg_2], 0 ;~ 0613:3760
cs=0x613;eip=0x003764; 	R(JZ(loc_17ead));	// 14645 jz      short loc_17EAD ;~ 0613:3764
cs=0x613;eip=0x003766; 	T(MOV(al, oppnentsped));	// 14646 mov     al, oppnentSped ;~ 0613:3766
cs=0x613;eip=0x003769; 	T(SUB(ah, ah));	// 14647 sub     ah, ah ;~ 0613:3769
cs=0x613;eip=0x00376b; 	T(SUB(ax, 0x0C8));	// 14648 sub     ax, 0C8h ; 'È' ;~ 0613:376B
cs=0x613;eip=0x00376e; 	T(NEG(ax));	// 14649 neg     ax ;~ 0613:376E
cs=0x613;eip=0x003770; 	T(SHR(ax, 1));	// 14650 shr     ax, 1 ;~ 0613:3770
cs=0x613;eip=0x003772; 	X(MOV(*(raddr(ss,bp+var_a)), al));	// 14651 mov     [bp+var_A], al ;~ 0613:3772
cs=0x613;eip=0x003775; 	T(OR(al, al));	// 14652 or      al, al ;~ 0613:3775
cs=0x613;eip=0x003777; 	R(JZ(loc_17ead));	// 14653 jz      short loc_17EAD ;~ 0613:3777
cs=0x613;eip=0x003779; 	T(MOV(ax, 0x0C8));	// 14654 mov     ax, 0C8h ; 'È' ;~ 0613:3779
cs=0x613;eip=0x00377c; 	T(CWD);	// 14655 cwd ;~ 0613:377C
cs=0x613;eip=0x00377d; 	X(PUSH(dx));	// 14656 push    dx ;~ 0613:377D
cs=0x613;eip=0x00377e; 	X(PUSH(ax));	// 14657 push    ax ;~ 0613:377E
cs=0x613;eip=0x00377f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 14658 mov     ax, [bp+var_8] ;~ 0613:377F
cs=0x613;eip=0x003782; 	T(CWD);	// 14659 cwd ;~ 0613:3782
cs=0x613;eip=0x003783; 	X(PUSH(dx));	// 14660 push    dx ;~ 0613:3783
cs=0x613;eip=0x003784; 	X(PUSH(ax));	// 14661 push    ax ;~ 0613:3784
cs=0x613;eip=0x003785; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 14662 mov     al, [bp+var_A] ;~ 0613:3785
cs=0x613;eip=0x003788; 	T(SUB(ah, ah));	// 14663 sub     ah, ah ;~ 0613:3788
cs=0x613;eip=0x00378a; 	T(SUB(cx, cx));	// 14664 sub     cx, cx ;~ 0613:378A
cs=0x613;eip=0x00378c; 	X(PUSH(cx));	// 14665 push    cx ;~ 0613:378C
cs=0x613;eip=0x00378d; 	X(PUSH(ax));	// 14666 push    ax ;~ 0613:378D
cs=0x613;eip=0x00378e; 	R(CALLF(__aflmul,0));	// 14667 call    __aFlmul ;~ 0613:378E
cs=0x613;eip=0x003793; 	X(PUSH(dx));	// 14668 push    dx ;~ 0613:3793
cs=0x613;eip=0x003794; 	X(PUSH(ax));	// 14669 push    ax ;~ 0613:3794
cs=0x613;eip=0x003795; 	R(CALLF(__afldiv,0));	// 14670 call    __aFldiv ;~ 0613:3795
cs=0x613;eip=0x00379a; 	X(SUB(*(dw*)(raddr(ss,bp+var_8)), ax));	// 14671 sub     [bp+var_8], ax ;~ 0613:379A
loc_17ead:
	// 5237 
cs=0x613;eip=0x00379d; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x128));	// 14675 cmp     [bp+var_8], 128h ; (37/32)mph, a quite large value ;~ 0613:379D
cs=0x613;eip=0x0037a2; 	R(JG(loc_17eb7));	// 14676 jg      short loc_17EB7 ;~ 0613:37A2
cs=0x613;eip=0x0037a4; 	R(JMP(loc_17d39));	// 14677 jmp     loc_17D39 ;~ 0613:37A4
loc_17eb7:
	// 5238 
cs=0x613;eip=0x0037a7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14681 mov     bx, [bp+arg_4] ;~ 0613:37A7
cs=0x613;eip=0x0037aa; 	X(MOV(*(raddr(ds,bx+0x0C6)), 5));	// 14682 mov     byte ptr [bx+0C6h], 5 ;~ 0613:37AA
cs=0x613;eip=0x0037af; 	R(JMP(loc_17d39));	// 14683 jmp     loc_17D39 ;~ 0613:37AF
loc_17ec2:
	// 5239 
cs=0x613;eip=0x0037b2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 14687 mov     ax, [bp+var_8] ;~ 0613:37B2
cs=0x613;eip=0x0037b5; 	X(ADD(*(dw*)(raddr(ss,bp+var_6)), ax));	// 14688 add     [bp+var_6], ax ;~ 0613:37B5
cs=0x613;eip=0x0037b8; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0x8000));	// 14689 cmp     [bp+var_6], 8000h ;~ 0613:37B8
cs=0x613;eip=0x0037bd; 	R(JC(loc_17ed9));	// 14690 jb      short loc_17ED9 ;~ 0613:37BD
cs=0x613;eip=0x0037bf; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0x0F500));	// 14691 cmp     [bp+var_6], 0F500h ;~ 0613:37BF
cs=0x613;eip=0x0037c4; 	R(JA(loc_17ed9));	// 14692 ja      short loc_17ED9 ;~ 0613:37C4
cs=0x613;eip=0x0037c6; 	R(JMP(loc_17d5f));	// 14693 jmp     loc_17D5F ;~ 0613:37C6
loc_17ed9:
	// 5240 
cs=0x613;eip=0x0037c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0x0F500));	// 14698 mov     [bp+var_6], 0F500h ;~ 0613:37C9
cs=0x613;eip=0x0037ce; 	R(JMP(loc_17d5f));	// 14699 jmp     loc_17D5F ;~ 0613:37CE
loc_17ee2:
	// 5241 
cs=0x613;eip=0x0037d2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 14704 mov     ax, [bp+var_8] ;~ 0613:37D2
cs=0x613;eip=0x0037d5; 	T(NEG(ax));	// 14705 neg     ax ;~ 0613:37D5
cs=0x613;eip=0x0037d7; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_6))));	// 14706 cmp     ax, [bp+var_6] ;~ 0613:37D7
cs=0x613;eip=0x0037da; 	R(JA(loc_17eef));	// 14707 ja      short loc_17EEF ;~ 0613:37DA
cs=0x613;eip=0x0037dc; 	R(JMP(loc_17d59));	// 14708 jmp     loc_17D59 ;~ 0613:37DC
loc_17eef:
	// 5242 
cs=0x613;eip=0x0037df; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 14712 mov     [bp+var_6], 0 ;~ 0613:37DF
cs=0x613;eip=0x0037e4; 	R(JMP(loc_17d5f));	// 14713 jmp     loc_17D5F ;~ 0613:37E4
loc_17ef8:
	// 5243 
cs=0x613;eip=0x0037e8; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 14718 mov     ax, word ptr [bp+var_4] ;~ 0613:37E8
loc_17efb:
	// 5244 
cs=0x613;eip=0x0037eb; 	T(CMP(ax, 0x1400));	// 14721 cmp     ax, 1400h       ; abs.delta = 20mph: a lot ;~ 0613:37EB
cs=0x613;eip=0x0037ee; 	R(JLE(loc_17f28));	// 14722 jle     short loc_17F28 ;~ 0613:37EE
cs=0x613;eip=0x0037f0; 	T(MOV(si, bx));	// 14723 mov     si, bx ;~ 0613:37F0
cs=0x613;eip=0x0037f2; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x2A))));	// 14724 mov     ax, [si+2Ah] ;~ 0613:37F2
cs=0x613;eip=0x0037f5; 	T(SUB(dx, dx));	// 14725 sub     dx, dx ;~ 0613:37F5
cs=0x613;eip=0x0037f7; 	T(ADD(ax, *(dw*)(raddr(ds,si+0x2C))));	// 14726 add     ax, [si+2Ch] ;~ 0613:37F7
cs=0x613;eip=0x0037fa; 	T(ADC(dx, dx));	// 14727 adc     dx, dx ;~ 0613:37FA
cs=0x613;eip=0x0037fc; 	T(SHR(dx, 1));	// 14728 shr     dx, 1 ;~ 0613:37FC
cs=0x613;eip=0x0037fe; 	T(RCR(ax, 1));	// 14729 rcr     ax, 1           ; an average ;~ 0613:37FE
cs=0x613;eip=0x003800; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), ax));	// 14730 mov     [bx+2Ah], ax ;~ 0613:3800
cs=0x613;eip=0x003803; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14731 mov     bx, [bp+arg_4] ;~ 0613:3803
cs=0x613;eip=0x003806; 	T(MOV(si, bx));	// 14732 mov     si, bx ;~ 0613:3806
cs=0x613;eip=0x003808; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x2A))));	// 14733 mov     ax, [si+2Ah] ;~ 0613:3808
cs=0x613;eip=0x00380b; 	X(MOV(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 14734 mov     [bx+2Ch], ax ;~ 0613:380B
cs=0x613;eip=0x00380e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14735 mov     bx, [bp+arg_4] ;~ 0613:380E
cs=0x613;eip=0x003811; 	X(MOV(*(raddr(ds,bx+0x0C6)), 5));	// 14736 mov     byte ptr [bx+0C6h], 5 ;~ 0613:3811
cs=0x613;eip=0x003816; 	R(JMP(loc_17f45));	// 14737 jmp     short loc_17F45 ;~ 0613:3816
loc_17f28:
	// 5245 
cs=0x613;eip=0x003818; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14741 mov     bx, [bp+arg_4] ;~ 0613:3818
cs=0x613;eip=0x00381b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 14742 mov     ax, [bp+var_6] ;~ 0613:381B
cs=0x613;eip=0x00381e; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), ax));	// 14743 mov     [bx+2Ah], ax ;~ 0613:381E
cs=0x613;eip=0x003821; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14744 mov     bx, [bp+arg_4] ;~ 0613:3821
cs=0x613;eip=0x003824; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 14745 mov     ax, [bp+var_6] ;~ 0613:3824
cs=0x613;eip=0x003827; 	X(MOV(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 14746 mov     [bx+2Ch], ax ;~ 0613:3827
cs=0x613;eip=0x00382a; 	R(JMP(loc_17f45));	// 14747 jmp     short loc_17F45 ;~ 0613:382A
loc_17f3c:
	// 5246 
cs=0x613;eip=0x00382c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14751 mov     bx, [bp+arg_4] ;~ 0613:382C
cs=0x613;eip=0x00382f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 14752 mov     ax, [bp+var_6] ;~ 0613:382F
cs=0x613;eip=0x003832; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), ax));	// 14753 mov     [bx+2Ah], ax ;~ 0613:3832
loc_17f45:
	// 5247 
cs=0x613;eip=0x003835; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14757 mov     bx, [bp+arg_6] ;~ 0613:3835
cs=0x613;eip=0x003838; 	X(PUSH(*(dw*)(raddr(ds,bx+6))));	// 14758 push    word ptr [bx+6] ;~ 0613:3838
cs=0x613;eip=0x00383b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14759 mov     bx, [bp+arg_4] ;~ 0613:383B
cs=0x613;eip=0x00383e; 	T(MOV(al, *(raddr(ds,bx+0x0CA))));	// 14760 mov     al, [bx+0CAh] ;~ 0613:383E
cs=0x613;eip=0x003842; 	T(CBW);	// 14761 cbw ;~ 0613:3842
cs=0x613;eip=0x003843; 	X(PUSH(ax));	// 14762 push    ax ;~ 0613:3843
cs=0x613;eip=0x003844; 	X(PUSH(*(dw*)(raddr(ds,bx+0x30))));	// 14763 push    word ptr [bx+30h] ;~ 0613:3844
cs=0x613;eip=0x003847; 	X(PUSH(*(dw*)(raddr(ds,bx+0x2A))));	// 14764 push    word ptr [bx+2Ah] ;~ 0613:3847
cs=0x613;eip=0x00384a; 	X(PUSH(*(dw*)(raddr(ds,bx+0x22))));	// 14765 push    word ptr [bx+22h] ;~ 0613:384A
cs=0x613;eip=0x00384d; 	R(CALLF(update_rpm_from_speed,0));	// 14766 call    update_rpm_from_speed ;~ 0613:384D
cs=0x613;eip=0x003852; 	T(ADD(sp, 0x0A));	// 14767 add     sp, 0Ah ;~ 0613:3852
cs=0x613;eip=0x003855; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14768 mov     bx, [bp+arg_4] ;~ 0613:3855
cs=0x613;eip=0x003858; 	X(MOV(*(dw*)(raddr(ds,bx+0x22)), ax));	// 14769 mov     [bx+22h], ax ;~ 0613:3858
cs=0x613;eip=0x00385b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14770 mov     bx, [bp+arg_4] ;~ 0613:385B
cs=0x613;eip=0x00385e; 	T(CMP(*(raddr(ds,bx+0x0C1)), 0));	// 14771 cmp     byte ptr [bx+0C1h], 0 ;~ 0613:385E
cs=0x613;eip=0x003863; 	R(JZ(loc_17fbf));	// 14772 jz      short loc_17FBF ;~ 0613:3863
cs=0x613;eip=0x003865; 	T(MOV(si, bx));	// 14773 mov     si, bx ;~ 0613:3865
cs=0x613;eip=0x003867; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x22))));	// 14774 mov     ax, [si+22h] ;~ 0613:3867
cs=0x613;eip=0x00386a; 	T(CMP(*(dw*)(raddr(ds,bx+0x24)), ax));	// 14775 cmp     [bx+24h], ax ;~ 0613:386A
cs=0x613;eip=0x00386d; 	R(JLE(loc_17fbf));	// 14776 jle     short loc_17FBF ;~ 0613:386D
cs=0x613;eip=0x00386f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x24))));	// 14777 mov     ax, [bx+24h] ;~ 0613:386F
cs=0x613;eip=0x003872; 	T(SUB(ax, *(dw*)(raddr(ds,bx+0x22))));	// 14778 sub     ax, [bx+22h] ;~ 0613:3872
cs=0x613;eip=0x003875; 	T(CMP(ax, 0x7D0));	// 14779 cmp     ax, 7D0h        ; 2000rpm ;~ 0613:3875
cs=0x613;eip=0x003878; 	R(JLE(loc_17fa4));	// 14780 jle     short loc_17FA4 ;~ 0613:3878
cs=0x613;eip=0x00387a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 14781 mov     bx, [bp+arg_6] ;~ 0613:387A
cs=0x613;eip=0x00387d; 	T(MOV(al, *(raddr(ds,bx+0x3A))));	// 14782 mov     al, [bx+3Ah] ;~ 0613:387D
cs=0x613;eip=0x003880; 	T(SUB(ah, ah));	// 14783 sub     ah, ah ;~ 0613:3880
cs=0x613;eip=0x003882; 	T(MOV(bx, si));	// 14784 mov     bx, si ;~ 0613:3882
cs=0x613;eip=0x003884; 	X(MUL1_2(*(dw*)(raddr(ds,bx+0x32))));	// 14785 mul     word ptr [bx+32h] ;~ 0613:3884
cs=0x613;eip=0x003887; 	T(CMP(ax, 0x2EE0));	// 14786 cmp     ax, 2EE0h ;~ 0613:3887
cs=0x613;eip=0x00388a; 	R(JLE(loc_17fbf));	// 14787 jle     short loc_17FBF ;~ 0613:388A
cs=0x613;eip=0x00388c; 	X(MOV(*(raddr(ds,bx+0x0C6)), 0x1E));	// 14788 mov     byte ptr [bx+0C6h], 1Eh ;~ 0613:388C
cs=0x613;eip=0x003891; 	R(JMP(loc_17fbf));	// 14789 jmp     short loc_17FBF ;~ 0613:3891
loc_17fa4:
	// 5248 
cs=0x613;eip=0x003894; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14794 mov     bx, [bp+arg_4] ;~ 0613:3894
cs=0x613;eip=0x003897; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 14795 mov     ax, [bx+22h] ;~ 0613:3897
cs=0x613;eip=0x00389a; 	T(SUB(ax, *(dw*)(raddr(ds,bx+0x24))));	// 14796 sub     ax, [bx+24h] ;~ 0613:389A
cs=0x613;eip=0x00389d; 	T(CMP(ax, 0x7D0));	// 14797 cmp     ax, 7D0h        ; 2000rpm ;~ 0613:389D
cs=0x613;eip=0x0038a0; 	R(JLE(loc_17fbf));	// 14798 jle     short loc_17FBF ;~ 0613:38A0
cs=0x613;eip=0x0038a2; 	X(MOV(*(raddr(ds,bx+0x0C6)), 0x0A));	// 14799 mov     byte ptr [bx+0C6h], 0Ah ;~ 0613:38A2
cs=0x613;eip=0x0038a7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14800 mov     bx, [bp+arg_4] ;~ 0613:38A7
cs=0x613;eip=0x0038aa; 	X(SUB(*(dw*)(raddr(ds,bx+0x2C)), 0x500));	// 14801 sub     word ptr [bx+2Ch], 500h ; 5mph ;~ 0613:38AA
loc_17fbf:
	// 5249 
cs=0x613;eip=0x0038af; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 14805 mov     bx, [bp+arg_4] ;~ 0613:38AF
cs=0x613;eip=0x0038b2; 	T(MOV(ax, word_445e2));	// 14806 mov     ax, word_445E2 ;~ 0613:38B2
cs=0x613;eip=0x0038b5; 	T(CMP(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 14807 cmp     [bx+2Ch], ax ;~ 0613:38B5
cs=0x613;eip=0x0038b8; 	R(JBE(loc_17fd0));	// 14808 jbe     short loc_17FD0 ;~ 0613:38B8
cs=0x613;eip=0x0038ba; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x2C))));	// 14809 mov     ax, [bx+2Ch] ;~ 0613:38BA
cs=0x613;eip=0x0038bd; 	X(MOV(word_445e2, ax));	// 14810 mov     word_445E2, ax ;~ 0613:38BD
loc_17fd0:
	// 5250 
cs=0x613;eip=0x0038c0; 	X(POP(si));	// 14813 pop     si ;~ 0613:38C0
cs=0x613;eip=0x0038c1; 	X(POP(di));	// 14814 pop     di ;~ 0613:38C1
cs=0x613;eip=0x0038c2; 	T(MOV(sp, bp));	// 14815 mov     sp, bp ;~ 0613:38C2
cs=0x613;eip=0x0038c4; 	X(POP(bp));	// 14816 pop     bp ;~ 0613:38C4
cs=0x613;eip=0x0038c5; 	R(RETF(0));	// 14817 retf ;~ 0613:38C5
update_grip:
	// 14825 
#undef var_10
#define var_10 -0x10
	// 14828 var_10          = word ptr -10h ;~ 0613:38C6
#undef var_e
#define var_e -0x0E
	// 14829 var_E           = byte ptr -0Eh ;~ 0613:38C6
#undef var_c
#define var_c -0x0C
	// 14830 var_C           = word ptr -0Ch ;~ 0613:38C6
#undef var_a
#define var_a -0x0A
	// 14831 var_A           = byte ptr -0Ah ;~ 0613:38C6
#undef var_8
#define var_8 -8
	// 14832 var_8           = word ptr -8 ;~ 0613:38C6
#undef var_6
#define var_6 -6
	// 14833 var_6           = word ptr -6 ;~ 0613:38C6
#undef var_4
#define var_4 -4
	// 14834 var_4           = word ptr -4 ;~ 0613:38C6
#undef var_2
#define var_2 -2
	// 14835 var_2           = word ptr -2 ;~ 0613:38C6
#undef arg_0
#define arg_0 6
	// 14836 arg_0           = word ptr  6 ;~ 0613:38C6
#undef arg_2
#define arg_2 8
	// 14837 arg_2           = word ptr  8 ;~ 0613:38C6
#undef arg_4
#define arg_4 0x0A
	// 14838 arg_4           = word ptr  0Ah ;~ 0613:38C6
ret_613_38c6:
	// 5251 
cs=0x613;eip=0x0038c6; 	X(PUSH(bp));	// 14840 push    bp ;~ 0613:38C6
cs=0x613;eip=0x0038c7; 	T(MOV(bp, sp));	// 14841 mov     bp, sp ;~ 0613:38C7
cs=0x613;eip=0x0038c9; 	T(SUB(sp, 0x10));	// 14842 sub     sp, 10h ;~ 0613:38C9
cs=0x613;eip=0x0038cc; 	X(PUSH(di));	// 14843 push    di ;~ 0613:38CC
cs=0x613;eip=0x0038cd; 	X(PUSH(si));	// 14844 push    si ;~ 0613:38CD
cs=0x613;eip=0x0038ce; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14845 mov     bx, [bp+arg_0] ;~ 0613:38CE
cs=0x613;eip=0x0038d1; 	T(CMP(*(raddr(ds,bx+0x0C1)), 0));	// 14846 cmp     byte ptr [bx+0C1h], 0 ;~ 0613:38D1
cs=0x613;eip=0x0038d6; 	R(JNZ(loc_17ffc));	// 14847 jnz     short loc_17FFC ;~ 0613:38D6
cs=0x613;eip=0x0038d8; 	X(MOV(*(dw*)(raddr(ds,bx+0x40)), 0));	// 14848 mov     word ptr [bx+40h], 0 ;~ 0613:38D8
cs=0x613;eip=0x0038dd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14849 mov     bx, [bp+arg_0] ;~ 0613:38DD
cs=0x613;eip=0x0038e0; 	X(MOV(*(raddr(ds,bx+0x0C7)), 0));	// 14850 mov     byte ptr [bx+0C7h], 0 ;~ 0613:38E0
cs=0x613;eip=0x0038e5; 	X(POP(si));	// 14851 pop     si ;~ 0613:38E5
cs=0x613;eip=0x0038e6; 	X(POP(di));	// 14852 pop     di ;~ 0613:38E6
cs=0x613;eip=0x0038e7; 	T(MOV(sp, bp));	// 14853 mov     sp, bp ;~ 0613:38E7
cs=0x613;eip=0x0038e9; 	X(POP(bp));	// 14854 pop     bp ;~ 0613:38E9
cs=0x613;eip=0x0038ea; 	R(RETF(0));	// 14855 retf ;~ 0613:38EA
loc_17ffc:
	// 5252 
cs=0x613;eip=0x0038ec; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 14860 mov     [bp+var_8], 0 ;~ 0613:38EC
cs=0x613;eip=0x0038f1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14861 mov     bx, [bp+arg_0] ;~ 0613:38F1
cs=0x613;eip=0x0038f4; 	T(CMP(*(raddr(ds,bx+0x0C2)), 4));	// 14862 cmp     byte ptr [bx+0C2h], 4 ;~ 0613:38F4
cs=0x613;eip=0x0038f9; 	R(JNZ(loc_1800e));	// 14863 jnz     short loc_1800E ;~ 0613:38F9
cs=0x613;eip=0x0038fb; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 14864 inc     [bp+var_8] ;~ 0613:38FB
loc_1800e:
	// 5253 
cs=0x613;eip=0x0038fe; 	T(CMP(*(raddr(ds,bx+0x0C3)), 4));	// 14867 cmp     byte ptr [bx+0C3h], 4 ;~ 0613:38FE
cs=0x613;eip=0x003903; 	R(JNZ(loc_18018));	// 14868 jnz     short loc_18018 ;~ 0613:3903
cs=0x613;eip=0x003905; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 14869 inc     [bp+var_8] ;~ 0613:3905
loc_18018:
	// 5254 
cs=0x613;eip=0x003908; 	T(CMP(*(raddr(ds,bx+0x0C4)), 4));	// 14872 cmp     byte ptr [bx+0C4h], 4 ;~ 0613:3908
cs=0x613;eip=0x00390d; 	R(JNZ(loc_18022));	// 14873 jnz     short loc_18022 ;~ 0613:390D
cs=0x613;eip=0x00390f; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 14874 inc     [bp+var_8] ;~ 0613:390F
loc_18022:
	// 5255 
cs=0x613;eip=0x003912; 	T(CMP(*(raddr(ds,bx+0x0C5)), 4));	// 14877 cmp     byte ptr [bx+0C5h], 4 ;~ 0613:3912
cs=0x613;eip=0x003917; 	R(JNZ(loc_1802c));	// 14878 jnz     short loc_1802C ;~ 0613:3917
cs=0x613;eip=0x003919; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 14879 inc     [bp+var_8] ;~ 0613:3919
loc_1802c:
	// 5256 
cs=0x613;eip=0x00391c; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 14882 cmp     [bp+var_8], 0 ;~ 0613:391C
cs=0x613;eip=0x003920; 	R(JZ(loc_18051));	// 14883 jz      short loc_18051 ;~ 0613:3920
cs=0x613;eip=0x003922; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x2C))));	// 14884 mov     ax, [bx+2Ch] ;~ 0613:3922
cs=0x613;eip=0x003925; 	T(SUB(dx, dx));	// 14885 sub     dx, dx ;~ 0613:3925
cs=0x613;eip=0x003927; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 14886 mov     bx, [bp+var_8] ;~ 0613:3927
cs=0x613;eip=0x00392a; 	T(SHL(bx, 1));	// 14887 shl     bx, 1 ;~ 0613:392A
cs=0x613;eip=0x00392c; 	X(DIV2(*(dw*)(((db*)grassdeceldivtab)+bx)));	// 14888 div     grassDecelDivTab[bx] ;~ 0613:392C
cs=0x613;eip=0x003930; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14889 mov     bx, [bp+arg_0] ;~ 0613:3930
cs=0x613;eip=0x003933; 	X(SUB(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 14890 sub     [bx+2Ch], ax ;~ 0613:3933
cs=0x613;eip=0x003936; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14891 mov     bx, [bp+arg_0] ;~ 0613:3936
cs=0x613;eip=0x003939; 	T(MOV(si, bx));	// 14892 mov     si, bx ;~ 0613:3939
cs=0x613;eip=0x00393b; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x2C))));	// 14893 mov     ax, [si+2Ch] ;~ 0613:393B
cs=0x613;eip=0x00393e; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), ax));	// 14894 mov     [bx+2Ah], ax ;~ 0613:393E
loc_18051:
	// 5257 
cs=0x613;eip=0x003941; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14897 mov     bx, [bp+arg_0] ;~ 0613:3941
cs=0x613;eip=0x003944; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 14898 mov     ax, [bx+20h] ;~ 0613:3944
cs=0x613;eip=0x003947; 	T(ADD(ax, *(dw*)(raddr(ds,bx+0x36))));	// 14899 add     ax, [bx+36h] ;~ 0613:3947
cs=0x613;eip=0x00394a; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 14900 mov     [bp+var_10], ax ;~ 0613:394A
cs=0x613;eip=0x00394d; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 14901 mov     [bp+var_C], ax ;~ 0613:394D
cs=0x613;eip=0x003950; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x2A))));	// 14902 mov     ax, [bx+2Ah] ;~ 0613:3950
cs=0x613;eip=0x003953; 	T(MOV(cl, 8));	// 14903 mov     cl, 8 ;~ 0613:3953
cs=0x613;eip=0x003955; 	T(SHR(ax, cl));	// 14904 shr     ax, cl ;~ 0613:3955
cs=0x613;eip=0x003957; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 14905 mov     [bp+var_2], ax ;~ 0613:3957
cs=0x613;eip=0x00395a; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 0));	// 14906 cmp     [bp+var_C], 0 ;~ 0613:395A
cs=0x613;eip=0x00395e; 	R(JGE(loc_18078));	// 14907 jge     short loc_18078 ;~ 0613:395E
cs=0x613;eip=0x003960; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 14908 mov     ax, [bp+var_C] ;~ 0613:3960
cs=0x613;eip=0x003963; 	T(NEG(ax));	// 14909 neg     ax ;~ 0613:3963
cs=0x613;eip=0x003965; 	R(JMP(loc_1807b));	// 14910 jmp     short loc_1807B ;~ 0613:3965
loc_18078:
	// 5258 
cs=0x613;eip=0x003968; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 14915 mov     ax, [bp+var_C] ;~ 0613:3968
loc_1807b:
	// 5259 
cs=0x613;eip=0x00396b; 	T(MOV(cl, 3));	// 14918 mov     cl, 3 ;~ 0613:396B
cs=0x613;eip=0x00396d; 	T(SAR(ax, cl));	// 14919 sar     ax, cl ;~ 0613:396D
cs=0x613;eip=0x00396f; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 14920 mov     [bp+var_8], ax ;~ 0613:396F
cs=0x613;eip=0x003972; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 14921 mov     ax, [bp+var_2] ;~ 0613:3972
cs=0x613;eip=0x003975; 	T(MUL1_2(ax));	// 14922 mul     ax ;~ 0613:3975
cs=0x613;eip=0x003977; 	T(MOV(cl, 6));	// 14923 mov     cl, 6 ;~ 0613:3977
cs=0x613;eip=0x003979; 	T(SHR(ax, cl));	// 14924 shr     ax, cl ;~ 0613:3979
cs=0x613;eip=0x00397b; 	X(MUL1_2(*(dw*)(raddr(ss,bp+var_8))));	// 14925 mul     [bp+var_8] ;~ 0613:397B
cs=0x613;eip=0x00397e; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 14926 mov     [bp+var_4], ax ;~ 0613:397E
cs=0x613;eip=0x003981; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 14927 mov     bx, [bp+arg_2] ;~ 0613:3981
cs=0x613;eip=0x003984; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A4))));	// 14928 mov     ax, [bx+0A4h] ;~ 0613:3984
cs=0x613;eip=0x003988; 	T(SHL(ax, 1));	// 14929 shl     ax, 1 ;~ 0613:3988
cs=0x613;eip=0x00398a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 14930 mov     [bp+var_6], ax ;~ 0613:398A
cs=0x613;eip=0x00398d; 	T(CWD);	// 14931 cwd ;~ 0613:398D
cs=0x613;eip=0x00398e; 	X(PUSH(dx));	// 14932 push    dx ;~ 0613:398E
cs=0x613;eip=0x00398f; 	X(PUSH(ax));	// 14933 push    ax ;~ 0613:398F
cs=0x613;eip=0x003990; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14934 mov     bx, [bp+arg_0] ;~ 0613:3990
cs=0x613;eip=0x003993; 	T(MOV(al, *(raddr(ds,bx+0x0C5))));	// 14935 mov     al, [bx+0C5h] ;~ 0613:3993
cs=0x613;eip=0x003997; 	T(CBW);	// 14936 cbw ;~ 0613:3997
cs=0x613;eip=0x003998; 	T(MOV(si, ax));	// 14937 mov     si, ax ;~ 0613:3998
cs=0x613;eip=0x00399a; 	T(SHL(si, 1));	// 14938 shl     si, 1 ;~ 0613:399A
cs=0x613;eip=0x00399c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 14939 mov     bx, [bp+arg_2] ;~ 0613:399C
cs=0x613;eip=0x00399f; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 14940 mov     di, [bp+arg_0] ;~ 0613:399F
cs=0x613;eip=0x0039a2; 	T(MOV(al, *(raddr(ds,di+0x0C4))));	// 14941 mov     al, [di+0C4h] ;~ 0613:39A2
cs=0x613;eip=0x0039a6; 	T(CBW);	// 14942 cbw ;~ 0613:39A6
cs=0x613;eip=0x0039a7; 	T(MOV(di, ax));	// 14943 mov     di, ax ;~ 0613:39A7
cs=0x613;eip=0x0039a9; 	T(SHL(di, 1));	// 14944 shl     di, 1 ;~ 0613:39A9
cs=0x613;eip=0x0039ab; 	T(MOV(ax, *(dw*)(raddr(ds,bx+si+0x0B4))));	// 14945 mov     ax, [bx+si+0B4h] ;~ 0613:39AB
cs=0x613;eip=0x0039af; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14946 mov     bx, [bp+arg_0] ;~ 0613:39AF
cs=0x613;eip=0x0039b2; 	T(MOV(cx, ax));	// 14947 mov     cx, ax ;~ 0613:39B2
cs=0x613;eip=0x0039b4; 	T(MOV(al, *(raddr(ds,bx+0x0C3))));	// 14948 mov     al, [bx+0C3h] ;~ 0613:39B4
cs=0x613;eip=0x0039b8; 	T(CBW);	// 14949 cbw ;~ 0613:39B8
cs=0x613;eip=0x0039b9; 	T(MOV(si, ax));	// 14950 mov     si, ax ;~ 0613:39B9
cs=0x613;eip=0x0039bb; 	T(SHL(si, 1));	// 14951 shl     si, 1 ;~ 0613:39BB
cs=0x613;eip=0x0039bd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 14952 mov     bx, [bp+arg_2] ;~ 0613:39BD
cs=0x613;eip=0x0039c0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+si+0x0B4))));	// 14953 mov     ax, [bx+si+0B4h] ;~ 0613:39C0
cs=0x613;eip=0x0039c4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14954 mov     bx, [bp+arg_0] ;~ 0613:39C4
cs=0x613;eip=0x0039c7; 	T(MOV(dx, ax));	// 14955 mov     dx, ax ;~ 0613:39C7
cs=0x613;eip=0x0039c9; 	T(MOV(al, *(raddr(ds,bx+0x0C2))));	// 14956 mov     al, [bx+0C2h] ;~ 0613:39C9
cs=0x613;eip=0x0039cd; 	T(CBW);	// 14957 cbw ;~ 0613:39CD
cs=0x613;eip=0x0039ce; 	T(MOV(si, ax));	// 14958 mov     si, ax ;~ 0613:39CE
cs=0x613;eip=0x0039d0; 	T(SHL(si, 1));	// 14959 shl     si, 1 ;~ 0613:39D0
cs=0x613;eip=0x0039d2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 14960 mov     bx, [bp+arg_2] ;~ 0613:39D2
cs=0x613;eip=0x0039d5; 	T(MOV(ax, *(dw*)(raddr(ds,bx+si+0x0B4))));	// 14961 mov     ax, [bx+si+0B4h] ;~ 0613:39D5
cs=0x613;eip=0x0039d9; 	T(ADD(ax, dx));	// 14962 add     ax, dx ;~ 0613:39D9
cs=0x613;eip=0x0039db; 	T(ADD(ax, *(dw*)(raddr(ds,bx+di+0x0B4))));	// 14963 add     ax, [bx+di+0B4h] ;~ 0613:39DB
cs=0x613;eip=0x0039df; 	T(ADD(ax, cx));	// 14964 add     ax, cx ;~ 0613:39DF
cs=0x613;eip=0x0039e1; 	T(CWD);	// 14965 cwd ;~ 0613:39E1
cs=0x613;eip=0x0039e2; 	X(PUSH(dx));	// 14966 push    dx ;~ 0613:39E2
cs=0x613;eip=0x0039e3; 	X(PUSH(ax));	// 14967 push    ax ;~ 0613:39E3
cs=0x613;eip=0x0039e4; 	R(CALLF(__aflmul,0));	// 14968 call    __aFlmul ;~ 0613:39E4
cs=0x613;eip=0x0039e9; 	T(MOV(cl, 0x0A));	// 14969 mov     cl, 0Ah ;~ 0613:39E9
loc_180fb:
	// 5260 
cs=0x613;eip=0x0039eb; 	T(SAR(dx, 1));	// 14972 sar     dx, 1 ;~ 0613:39EB
cs=0x613;eip=0x0039ed; 	T(RCR(ax, 1));	// 14973 rcr     ax, 1 ;~ 0613:39ED
cs=0x613;eip=0x0039ef; 	T(DEC(cl));	// 14974 dec     cl ;~ 0613:39EF
cs=0x613;eip=0x0039f1; 	R(JNZ(loc_180fb));	// 14975 jnz     short loc_180FB ;~ 0613:39F1
cs=0x613;eip=0x0039f3; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 14976 mov     [bp+var_6], ax ;~ 0613:39F3
cs=0x613;eip=0x0039f6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14977 mov     bx, [bp+arg_0] ;~ 0613:39F6
cs=0x613;eip=0x0039f9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 14978 mov     ax, [bp+var_4] ;~ 0613:39F9
cs=0x613;eip=0x0039fc; 	X(MOV(*(dw*)(raddr(ds,bx+0x44)), ax));	// 14979 mov     [bx+44h], ax ;~ 0613:39FC
cs=0x613;eip=0x0039ff; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14980 mov     bx, [bp+arg_0] ;~ 0613:39FF
cs=0x613;eip=0x003a02; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 14981 mov     ax, [bp+var_6] ;~ 0613:3A02
cs=0x613;eip=0x003a05; 	X(MOV(*(dw*)(raddr(ds,bx+0x46)), ax));	// 14982 mov     [bx+46h], ax ;~ 0613:3A05
cs=0x613;eip=0x003a08; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0));	// 14983 cmp     [bp+arg_4], 0 ;~ 0613:3A08
cs=0x613;eip=0x003a0c; 	R(JNZ(loc_18121));	// 14984 jnz     short loc_18121 ;~ 0613:3A0C
cs=0x613;eip=0x003a0e; 	R(JMP(loc_1835e));	// 14985 jmp     loc_1835E ;~ 0613:3A0E
loc_18121:
	// 5261 
cs=0x613;eip=0x003a11; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 14989 mov     bx, [bp+arg_0] ;~ 0613:3A11
cs=0x613;eip=0x003a14; 	T(CMP(*(dw*)(raddr(ds,bx+0x20)), 0));	// 14990 cmp     word ptr [bx+20h], 0 ;~ 0613:3A14
cs=0x613;eip=0x003a18; 	R(JNZ(loc_18168));	// 14991 jnz     short loc_18168 ;~ 0613:3A18
cs=0x613;eip=0x003a1a; 	T(MOV(al, *(raddr(ds,bx+0x18))));	// 14992 mov     al, [bx+18h] ;~ 0613:3A1A
cs=0x613;eip=0x003a1d; 	T(SUB(ah, ah));	// 14993 sub     ah, ah ;~ 0613:3A1D
cs=0x613;eip=0x003a1f; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 14994 mov     [bp+var_8], ax ;~ 0613:3A1F
cs=0x613;eip=0x003a22; 	T(CMP(ax, 0x7F));	// 14995 cmp     ax, 7Fh ;~ 0613:3A22
cs=0x613;eip=0x003a25; 	R(JLE(loc_1813c));	// 14996 jle     short loc_1813C ;~ 0613:3A25
cs=0x613;eip=0x003a27; 	X(SUB(*(dw*)(raddr(ss,bp+var_8)), 0x100));	// 14997 sub     [bp+var_8], 100h ;~ 0613:3A27
loc_1813c:
	// 5262 
cs=0x613;eip=0x003a2c; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 15000 cmp     [bp+var_8], 0 ;~ 0613:3A2C
cs=0x613;eip=0x003a30; 	R(JZ(loc_18168));	// 15001 jz      short loc_18168 ;~ 0613:3A30
cs=0x613;eip=0x003a32; 	R(JGE(loc_1814c));	// 15002 jge     short loc_1814C ;~ 0613:3A32
cs=0x613;eip=0x003a34; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 15003 mov     ax, [bp+var_8] ;~ 0613:3A34
cs=0x613;eip=0x003a37; 	T(NEG(ax));	// 15004 neg     ax ;~ 0613:3A37
cs=0x613;eip=0x003a39; 	R(JMP(loc_1814f));	// 15005 jmp     short loc_1814F ;~ 0613:3A39
loc_1814c:
	// 5263 
cs=0x613;eip=0x003a3c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 15010 mov     ax, [bp+var_8] ;~ 0613:3A3C
loc_1814f:
	// 5264 
cs=0x613;eip=0x003a3f; 	T(CMP(ax, 8));	// 15013 cmp     ax, 8 ;~ 0613:3A3F
cs=0x613;eip=0x003a42; 	R(JGE(loc_18168));	// 15014 jge     short loc_18168 ;~ 0613:3A42
cs=0x613;eip=0x003a44; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 15015 cmp     [bp+var_8], 0 ;~ 0613:3A44
cs=0x613;eip=0x003a48; 	R(JLE(loc_18162));	// 15016 jle     short loc_18162 ;~ 0613:3A48
cs=0x613;eip=0x003a4a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15017 mov     bx, [bp+arg_0] ;~ 0613:3A4A
cs=0x613;eip=0x003a4d; 	X(DEC(*(dw*)(raddr(ds,bx+0x18))));	// 15018 dec     word ptr [bx+18h] ;~ 0613:3A4D
cs=0x613;eip=0x003a50; 	R(JMP(loc_18168));	// 15019 jmp     short loc_18168 ;~ 0613:3A50
loc_18162:
	// 5265 
cs=0x613;eip=0x003a52; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15023 mov     bx, [bp+arg_0] ;~ 0613:3A52
cs=0x613;eip=0x003a55; 	X(INC(*(dw*)(raddr(ds,bx+0x18))));	// 15024 inc     word ptr [bx+18h] ;~ 0613:3A55
loc_18168:
	// 5266 
cs=0x613;eip=0x003a58; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 15028 mov     ax, [bp+var_6] ;~ 0613:3A58
cs=0x613;eip=0x003a5b; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), ax));	// 15029 cmp     [bp+var_4], ax ;~ 0613:3A5B
cs=0x613;eip=0x003a5e; 	R(JLE(loc_181ce));	// 15030 jle     short loc_181CE ;~ 0613:3A5E
cs=0x613;eip=0x003a60; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15031 mov     bx, [bp+arg_0] ;~ 0613:3A60
cs=0x613;eip=0x003a63; 	X(MOV(*(raddr(ds,bx+0x0C7)), 1));	// 15032 mov     byte ptr [bx+0C7h], 1 ;~ 0613:3A63
cs=0x613;eip=0x003a68; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 15033 mov     ax, [bp+var_2] ;~ 0613:3A68
cs=0x613;eip=0x003a6b; 	T(CWD);	// 15034 cwd ;~ 0613:3A6B
cs=0x613;eip=0x003a6c; 	X(PUSH(dx));	// 15035 push    dx ;~ 0613:3A6C
cs=0x613;eip=0x003a6d; 	X(PUSH(ax));	// 15036 push    ax ;~ 0613:3A6D
cs=0x613;eip=0x003a6e; 	T(CWD);	// 15037 cwd ;~ 0613:3A6E
cs=0x613;eip=0x003a6f; 	X(PUSH(dx));	// 15038 push    dx ;~ 0613:3A6F
cs=0x613;eip=0x003a70; 	X(PUSH(ax));	// 15039 push    ax ;~ 0613:3A70
cs=0x613;eip=0x003a71; 	R(CALLF(__aflmul,0));	// 15040 call    __aFlmul ;~ 0613:3A71
cs=0x613;eip=0x003a76; 	X(PUSH(dx));	// 15041 push    dx ;~ 0613:3A76
cs=0x613;eip=0x003a77; 	X(PUSH(ax));	// 15042 push    ax ;~ 0613:3A77
cs=0x613;eip=0x003a78; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 15043 mov     ax, [bp+var_6] ;~ 0613:3A78
cs=0x613;eip=0x003a7b; 	T(CWD);	// 15044 cwd ;~ 0613:3A7B
cs=0x613;eip=0x003a7c; 	T(MOV(dh, dl));	// 15045 mov     dh, dl ;~ 0613:3A7C
cs=0x613;eip=0x003a7e; 	T(MOV(dl, ah));	// 15046 mov     dl, ah ;~ 0613:3A7E
cs=0x613;eip=0x003a80; 	T(MOV(ah, al));	// 15047 mov     ah, al ;~ 0613:3A80
cs=0x613;eip=0x003a82; 	T(SUB(al, al));	// 15048 sub     al, al          ; *2^8 ;~ 0613:3A82
cs=0x613;eip=0x003a84; 	X(PUSH(dx));	// 15049 push    dx ;~ 0613:3A84
cs=0x613;eip=0x003a85; 	X(PUSH(ax));	// 15050 push    ax ;~ 0613:3A85
cs=0x613;eip=0x003a86; 	R(CALLF(__afldiv,0));	// 15051 call    __aFldiv ;~ 0613:3A86
cs=0x613;eip=0x003a8b; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 15052 mov     [bp+var_C], ax ;~ 0613:3A8B
cs=0x613;eip=0x003a8e; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0));	// 15053 cmp     [bp+var_10], 0 ;~ 0613:3A8E
cs=0x613;eip=0x003a92; 	R(JGE(loc_181ad));	// 15054 jge     short loc_181AD ;~ 0613:3A92
cs=0x613;eip=0x003a94; 	T(MOV(ax, 0x0FFFF));	// 15055 mov     ax, 0FFFFh ;~ 0613:3A94
cs=0x613;eip=0x003a97; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_c))));	// 15056 imul    [bp+var_C] ;~ 0613:3A97
cs=0x613;eip=0x003a9a; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 15057 mov     [bp+var_C], ax ;~ 0613:3A9A
loc_181ad:
	// 5267 
cs=0x613;eip=0x003a9d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 15060 mov     ax, [bp+var_C] ;~ 0613:3A9D
cs=0x613;eip=0x003aa0; 	T(MOV(cx, ax));	// 15061 mov     cx, ax ;~ 0613:3AA0
cs=0x613;eip=0x003aa2; 	T(SHL(ax, 1));	// 15062 shl     ax, 1 ;~ 0613:3AA2
cs=0x613;eip=0x003aa4; 	T(ADD(ax, cx));	// 15063 add     ax, cx ;~ 0613:3AA4
cs=0x613;eip=0x003aa6; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_10))));	// 15064 add     ax, [bp+var_10] ;~ 0613:3AA6
cs=0x613;eip=0x003aa9; 	T(SAR(ax, 1));	// 15065 sar     ax, 1 ;~ 0613:3AA9
cs=0x613;eip=0x003aab; 	T(SAR(ax, 1));	// 15066 sar     ax, 1 ;~ 0613:3AAB
cs=0x613;eip=0x003aad; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 15067 mov     [bp+var_C], ax ;~ 0613:3AAD
cs=0x613;eip=0x003ab0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15068 mov     bx, [bp+arg_0] ;~ 0613:3AB0
cs=0x613;eip=0x003ab3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 15069 mov     ax, [bp+var_10] ;~ 0613:3AB3
cs=0x613;eip=0x003ab6; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_c))));	// 15070 sub     ax, [bp+var_C] ;~ 0613:3AB6
cs=0x613;eip=0x003ab9; 	X(MOV(*(dw*)(raddr(ds,bx+0x42)), ax));	// 15071 mov     [bx+42h], ax ;~ 0613:3AB9
cs=0x613;eip=0x003abc; 	R(JMP(loc_18207));	// 15072 jmp     short loc_18207 ;~ 0613:3ABC
loc_181ce:
	// 5268 
cs=0x613;eip=0x003abe; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15076 mov     bx, [bp+arg_0] ;~ 0613:3ABE
cs=0x613;eip=0x003ac1; 	X(MOV(*(raddr(ds,bx+0x0C7)), 0));	// 15077 mov     byte ptr [bx+0C7h], 0 ;~ 0613:3AC1
cs=0x613;eip=0x003ac6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15078 mov     bx, [bp+arg_0] ;~ 0613:3AC6
cs=0x613;eip=0x003ac9; 	T(CMP(*(dw*)(raddr(ds,bx+0x42)), 0));	// 15079 cmp     word ptr [bx+42h], 0 ;~ 0613:3AC9
cs=0x613;eip=0x003acd; 	R(JZ(loc_18207));	// 15080 jz      short loc_18207 ;~ 0613:3ACD
cs=0x613;eip=0x003acf; 	T(MOV(si, bx));	// 15081 mov     si, bx ;~ 0613:3ACF
cs=0x613;eip=0x003ad1; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x42))));	// 15082 mov     ax, [si+42h] ;~ 0613:3AD1
cs=0x613;eip=0x003ad4; 	T(MOV(cl, 4));	// 15083 mov     cl, 4 ;~ 0613:3AD4
cs=0x613;eip=0x003ad6; 	T(SAR(ax, cl));	// 15084 sar     ax, cl ;~ 0613:3AD6
cs=0x613;eip=0x003ad8; 	X(SUB(*(dw*)(raddr(ds,bx+0x42)), ax));	// 15085 sub     [bx+42h], ax ;~ 0613:3AD8
cs=0x613;eip=0x003adb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15086 mov     bx, [bp+arg_0] ;~ 0613:3ADB
cs=0x613;eip=0x003ade; 	T(CMP(*(dw*)(raddr(ds,bx+0x42)), 0));	// 15087 cmp     word ptr [bx+42h], 0 ;~ 0613:3ADE
cs=0x613;eip=0x003ae2; 	R(JGE(loc_181fc));	// 15088 jge     short loc_181FC ;~ 0613:3AE2
cs=0x613;eip=0x003ae4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x42))));	// 15089 mov     ax, [bx+42h] ;~ 0613:3AE4
cs=0x613;eip=0x003ae7; 	T(NEG(ax));	// 15090 neg     ax ;~ 0613:3AE7
cs=0x613;eip=0x003ae9; 	R(JMP(loc_181ff));	// 15091 jmp     short loc_181FF ;~ 0613:3AE9
loc_181fc:
	// 5269 
cs=0x613;eip=0x003aec; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x42))));	// 15096 mov     ax, [bx+42h] ;~ 0613:3AEC
loc_181ff:
	// 5270 
cs=0x613;eip=0x003aef; 	T(CMP(ax, 0x10));	// 15099 cmp     ax, 10h ;~ 0613:3AEF
cs=0x613;eip=0x003af2; 	R(JGE(loc_18207));	// 15100 jge     short loc_18207 ;~ 0613:3AF2
cs=0x613;eip=0x003af4; 	X(SAR(*(dw*)(raddr(ds,bx+0x42)), 1));	// 15101 sar     word ptr [bx+42h], 1 ;~ 0613:3AF4
loc_18207:
	// 5271 
cs=0x613;eip=0x003af7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15105 mov     bx, [bp+arg_0] ;~ 0613:3AF7
cs=0x613;eip=0x003afa; 	T(CMP(*(dw*)(raddr(ds,bx+0x3E)), 0));	// 15106 cmp     word ptr [bx+3Eh], 0 ;~ 0613:3AFA
cs=0x613;eip=0x003afe; 	R(JNZ(loc_18220));	// 15107 jnz     short loc_18220 ;~ 0613:3AFE
cs=0x613;eip=0x003b00; 	T(CMP(*(raddr(ds,bx+0x0C9)), 1));	// 15108 cmp     byte ptr [bx+0C9h], 1 ;~ 0613:3B00
cs=0x613;eip=0x003b05; 	R(JZ(loc_18220));	// 15109 jz      short loc_18220 ;~ 0613:3B05
cs=0x613;eip=0x003b07; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 15110 mov     ax, [bp+var_C] ;~ 0613:3B07
cs=0x613;eip=0x003b0a; 	X(MOV(*(dw*)(raddr(ds,bx+0x40)), ax));	// 15111 mov     [bx+40h], ax ;~ 0613:3B0A
cs=0x613;eip=0x003b0d; 	R(JMP(loc_18228));	// 15112 jmp     short loc_18228 ;~ 0613:3B0D
loc_18220:
	// 5272 
cs=0x613;eip=0x003b10; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15118 mov     bx, [bp+arg_0] ;~ 0613:3B10
cs=0x613;eip=0x003b13; 	X(MOV(*(dw*)(raddr(ds,bx+0x40)), 0));	// 15119 mov     word ptr [bx+40h], 0 ;~ 0613:3B13
loc_18228:
	// 5273 
cs=0x613;eip=0x003b18; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15122 mov     bx, [bp+arg_0] ;~ 0613:3B18
cs=0x613;eip=0x003b1b; 	T(CMP(*(dw*)(raddr(ds,bx+0x1C)), 0));	// 15123 cmp     word ptr [bx+1Ch], 0 ;~ 0613:3B1B
cs=0x613;eip=0x003b1f; 	R(JNZ(loc_18234));	// 15124 jnz     short loc_18234 ;~ 0613:3B1F
cs=0x613;eip=0x003b21; 	R(JMP(loc_182bd));	// 15125 jmp     loc_182BD ;~ 0613:3B21
loc_18234:
	// 5274 
cs=0x613;eip=0x003b24; 	R(JGE(loc_1823e));	// 15129 jge     short loc_1823E ;~ 0613:3B24
cs=0x613;eip=0x003b26; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1C))));	// 15130 mov     ax, [bx+1Ch] ;~ 0613:3B26
cs=0x613;eip=0x003b29; 	T(NEG(ax));	// 15131 neg     ax ;~ 0613:3B29
cs=0x613;eip=0x003b2b; 	R(JMP(loc_18241));	// 15132 jmp     short loc_18241 ;~ 0613:3B2B
loc_1823e:
	// 5275 
cs=0x613;eip=0x003b2e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1C))));	// 15137 mov     ax, [bx+1Ch] ;~ 0613:3B2E
loc_18241:
	// 5276 
cs=0x613;eip=0x003b31; 	T(CMP(ax, 4));	// 15140 cmp     ax, 4 ;~ 0613:3B31
cs=0x613;eip=0x003b34; 	R(JLE(loc_182bd));	// 15141 jle     short loc_182BD ;~ 0613:3B34
cs=0x613;eip=0x003b36; 	T(MOV(al, *(raddr(ds,bx+2))));	// 15142 mov     al, [bx+2] ;~ 0613:3B36
cs=0x613;eip=0x003b39; 	X(MOV(*(raddr(ss,bp+var_a)), al));	// 15143 mov     [bp+var_A], al ;~ 0613:3B39
cs=0x613;eip=0x003b3c; 	T(MOV(al, *(raddr(ds,bx+0x0A))));	// 15144 mov     al, [bx+0Ah] ;~ 0613:3B3C
cs=0x613;eip=0x003b3f; 	X(MOV(*(raddr(ss,bp+var_e)), al));	// 15145 mov     [bp+var_E], al ;~ 0613:3B3F
cs=0x613;eip=0x003b42; 	T(MOV(bl, al));	// 15146 mov     bl, al          ; hi-word > word : div by 2^8 ;~ 0613:3B42
cs=0x613;eip=0x003b44; 	T(SUB(bh, bh));	// 15147 sub     bh, bh ;~ 0613:3B44
cs=0x613;eip=0x003b46; 	T(SHL(bx, 1));	// 15148 shl     bx, 1 ;~ 0613:3B46
cs=0x613;eip=0x003b48; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 15149 mov     bx, terrainrows[bx] ;~ 0613:3B48
cs=0x613;eip=0x003b4c; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 15150 mov     al, [bp+var_A] ;~ 0613:3B4C
cs=0x613;eip=0x003b4f; 	T(SUB(ah, ah));	// 15151 sub     ah, ah ;~ 0613:3B4F
cs=0x613;eip=0x003b51; 	T(ADD(bx, ax));	// 15152 add     bx, ax ;~ 0613:3B51
cs=0x613;eip=0x003b53; 	T(LES(si, td14_elem_map_main));	// 15153 les     si, td14_elem_map_main ;~ 0613:3B53
cs=0x613;eip=0x003b57; 	T(MOV(al, *(raddr(es,bx+si))));	// 15154 mov     al, es:[bx+si] ;~ 0613:3B57
cs=0x613;eip=0x003b5a; 	T(CMP(ax, 0x0FD));	// 15155 cmp     ax, 0FDh ; 'ý' ;~ 0613:3B5A
cs=0x613;eip=0x003b5d; 	R(JZ(loc_1827c));	// 15156 jz      short loc_1827C ;~ 0613:3B5D
cs=0x613;eip=0x003b5f; 	T(CMP(ax, 0x0FE));	// 15157 cmp     ax, 0FEh ; 'þ' ;~ 0613:3B5F
cs=0x613;eip=0x003b62; 	R(JZ(loc_1827f));	// 15158 jz      short loc_1827F ;~ 0613:3B62
cs=0x613;eip=0x003b64; 	T(CMP(ax, 0x0FF));	// 15159 cmp     ax, 0FFh ;~ 0613:3B64
cs=0x613;eip=0x003b67; 	R(JZ(loc_182a8));	// 15160 jz      short loc_182A8 ;~ 0613:3B67
cs=0x613;eip=0x003b69; 	R(JMP(loc_18282));	// 15161 jmp     short loc_18282 ;~ 0613:3B69
loc_1827c:
	// 5277 
cs=0x613;eip=0x003b6c; 	X(DEC(*(raddr(ss,bp+var_a))));	// 15166 dec     [bp+var_A] ;~ 0613:3B6C
loc_1827f:
	// 5278 
cs=0x613;eip=0x003b6f; 	X(INC(*(raddr(ss,bp+var_e))));	// 15169 inc     [bp+var_E] ;~ 0613:3B6F
loc_18282:
	// 5279 
cs=0x613;eip=0x003b72; 	T(MOV(bl, *(raddr(ss,bp+var_e))));	// 15173 mov     bl, [bp+var_E] ;~ 0613:3B72
cs=0x613;eip=0x003b75; 	T(SUB(bh, bh));	// 15174 sub     bh, bh ;~ 0613:3B75
cs=0x613;eip=0x003b77; 	T(SHL(bx, 1));	// 15175 shl     bx, 1 ;~ 0613:3B77
cs=0x613;eip=0x003b79; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 15176 mov     bx, terrainrows[bx] ;~ 0613:3B79
cs=0x613;eip=0x003b7d; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 15177 mov     al, [bp+var_A] ;~ 0613:3B7D
cs=0x613;eip=0x003b80; 	T(SUB(ah, ah));	// 15178 sub     ah, ah ;~ 0613:3B80
cs=0x613;eip=0x003b82; 	T(ADD(bx, ax));	// 15179 add     bx, ax ;~ 0613:3B82
cs=0x613;eip=0x003b84; 	T(LES(si, td14_elem_map_main));	// 15180 les     si, td14_elem_map_main ;~ 0613:3B84
cs=0x613;eip=0x003b88; 	T(MOV(al, *(raddr(es,bx+si))));	// 15181 mov     al, es:[bx+si] ;~ 0613:3B88
cs=0x613;eip=0x003b8b; 	T(CMP(ax, 0x34));	// 15182 cmp     ax, 34h ; '4' ;~ 0613:3B8B
cs=0x613;eip=0x003b8e; 	R(JC(loc_182bd));	// 15183 jb      short loc_182BD ;~ 0613:3B8E
cs=0x613;eip=0x003b90; 	T(CMP(ax, 0x37));	// 15184 cmp     ax, 37h ; '7' ;~ 0613:3B90
cs=0x613;eip=0x003b93; 	R(JBE(loc_182ae));	// 15185 jbe     short loc_182AE ;~ 0613:3B93
cs=0x613;eip=0x003b95; 	R(JMP(loc_182bd));	// 15186 jmp     short loc_182BD ;~ 0613:3B95
loc_182a8:
	// 5280 
cs=0x613;eip=0x003b98; 	X(DEC(*(raddr(ss,bp+var_a))));	// 15191 dec     [bp+var_A] ;~ 0613:3B98
cs=0x613;eip=0x003b9b; 	R(JMP(loc_18282));	// 15192 jmp     short loc_18282 ;~ 0613:3B9B
loc_182ae:
	// 5281 
cs=0x613;eip=0x003b9e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15197 mov     bx, [bp+arg_0] ;~ 0613:3B9E
cs=0x613;eip=0x003ba1; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1C))));	// 15198 mov     ax, [bx+1Ch] ;~ 0613:3BA1
cs=0x613;eip=0x003ba4; 	T(CWD);	// 15199 cwd ;~ 0613:3BA4
cs=0x613;eip=0x003ba5; 	T(MOV(cx, 5));	// 15200 mov     cx, 5 ;~ 0613:3BA5
cs=0x613;eip=0x003ba8; 	T(IDIV2(cx));	// 15201 idiv    cx ;~ 0613:3BA8
cs=0x613;eip=0x003baa; 	X(ADD(*(dw*)(raddr(ds,bx+0x40)), ax));	// 15202 add     [bx+40h], ax ;~ 0613:3BAA
loc_182bd:
	// 5282 
cs=0x613;eip=0x003bad; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 15206 mov     ax, [bp+var_6] ;~ 0613:3BAD
cs=0x613;eip=0x003bb0; 	T(ADD(ax, 0x3E8));	// 15207 add     ax, 3E8h ;~ 0613:3BB0
cs=0x613;eip=0x003bb3; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4))));	// 15208 cmp     ax, [bp+var_4] ;~ 0613:3BB3
cs=0x613;eip=0x003bb6; 	R(JGE(loc_182ea));	// 15209 jge     short loc_182EA ;~ 0613:3BB6
cs=0x613;eip=0x003bb8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 15210 mov     ax, [bp+var_C] ;~ 0613:3BB8
cs=0x613;eip=0x003bbb; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_10))));	// 15211 sub     ax, [bp+var_10] ;~ 0613:3BBB
cs=0x613;eip=0x003bbe; 	T(CWD);	// 15212 cwd ;~ 0613:3BBE
cs=0x613;eip=0x003bbf; 	T(MOV(cx, 0x0E));	// 15213 mov     cx, 0Eh ;~ 0613:3BBF
cs=0x613;eip=0x003bc2; 	T(IDIV2(cx));	// 15214 idiv    cx ;~ 0613:3BC2
cs=0x613;eip=0x003bc4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15215 mov     bx, [bp+arg_0] ;~ 0613:3BC4
cs=0x613;eip=0x003bc7; 	X(ADD(*(dw*)(raddr(ds,bx+0x3E)), ax));	// 15216 add     [bx+3Eh], ax ;~ 0613:3BC7
cs=0x613;eip=0x003bca; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15217 mov     bx, [bp+arg_0] ;~ 0613:3BCA
cs=0x613;eip=0x003bcd; 	T(MOV(cx, 2));	// 15218 mov     cx, 2 ;~ 0613:3BCD
cs=0x613;eip=0x003bd0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x3E))));	// 15219 mov     ax, [bx+3Eh] ;~ 0613:3BD0
cs=0x613;eip=0x003bd3; 	T(CWD);	// 15220 cwd ;~ 0613:3BD3
cs=0x613;eip=0x003bd4; 	T(IDIV2(cx));	// 15221 idiv    cx ;~ 0613:3BD4
cs=0x613;eip=0x003bd6; 	R(JMP(loc_1838b));	// 15222 jmp     loc_1838B ;~ 0613:3BD6
loc_182ea:
	// 5283 
cs=0x613;eip=0x003bda; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15227 mov     bx, [bp+arg_0] ;~ 0613:3BDA
cs=0x613;eip=0x003bdd; 	T(CMP(*(dw*)(raddr(ds,bx+0x3E)), 0));	// 15228 cmp     word ptr [bx+3Eh], 0 ;~ 0613:3BDD
cs=0x613;eip=0x003be1; 	R(JNZ(loc_182f6));	// 15229 jnz     short loc_182F6 ;~ 0613:3BE1
cs=0x613;eip=0x003be3; 	R(JMP(loc_1838e));	// 15230 jmp     loc_1838E ;~ 0613:3BE3
loc_182f6:
	// 5284 
cs=0x613;eip=0x003be6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 15234 mov     ax, [bp+var_C] ;~ 0613:3BE6
cs=0x613;eip=0x003be9; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_10))));	// 15235 sub     ax, [bp+var_10] ;~ 0613:3BE9
cs=0x613;eip=0x003bec; 	T(CWD);	// 15236 cwd ;~ 0613:3BEC
cs=0x613;eip=0x003bed; 	T(MOV(cx, 0x0E));	// 15237 mov     cx, 0Eh ;~ 0613:3BED
cs=0x613;eip=0x003bf0; 	T(IDIV2(cx));	// 15238 idiv    cx ;~ 0613:3BF0
cs=0x613;eip=0x003bf2; 	X(ADD(*(dw*)(raddr(ds,bx+0x3E)), ax));	// 15239 add     [bx+3Eh], ax ;~ 0613:3BF2
cs=0x613;eip=0x003bf5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15240 mov     bx, [bp+arg_0] ;~ 0613:3BF5
cs=0x613;eip=0x003bf8; 	T(MOV(cx, 2));	// 15241 mov     cx, 2 ;~ 0613:3BF8
cs=0x613;eip=0x003bfb; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x3E))));	// 15242 mov     ax, [bx+3Eh] ;~ 0613:3BFB
cs=0x613;eip=0x003bfe; 	T(CWD);	// 15243 cwd ;~ 0613:3BFE
cs=0x613;eip=0x003bff; 	T(IDIV2(cx));	// 15244 idiv    cx ;~ 0613:3BFF
cs=0x613;eip=0x003c01; 	X(MOV(*(dw*)(raddr(ds,bx+0x3E)), ax));	// 15245 mov     [bx+3Eh], ax ;~ 0613:3C01
cs=0x613;eip=0x003c04; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15246 mov     bx, [bp+arg_0] ;~ 0613:3C04
cs=0x613;eip=0x003c07; 	T(CMP(*(dw*)(raddr(ds,bx+0x3E)), 0));	// 15247 cmp     word ptr [bx+3Eh], 0 ;~ 0613:3C07
cs=0x613;eip=0x003c0b; 	R(JNZ(loc_1838e));	// 15248 jnz     short loc_1838E ;~ 0613:3C0B
cs=0x613;eip=0x003c0d; 	X(PUSH(*(dw*)(raddr(ds,bx+0x2C))));	// 15249 push    word ptr [bx+2Ch] ;~ 0613:3C0D
cs=0x613;eip=0x003c10; 	X(PUSH(*(dw*)(raddr(ds,bx+0x36))));	// 15250 push    word ptr [bx+36h] ;~ 0613:3C10
cs=0x613;eip=0x003c13; 	R(CALLF(cos_fast,0));	// 15251 call    cos_fast ;~ 0613:3C13
cs=0x613;eip=0x003c18; 	T(ADD(sp, 2));	// 15252 add     sp, 2 ;~ 0613:3C18
cs=0x613;eip=0x003c1b; 	X(PUSH(ax));	// 15253 push    ax ;~ 0613:3C1B
cs=0x613;eip=0x003c1c; 	R(CALLF(multiply_and_scale,0));	// 15254 call    multiply_and_scale ;~ 0613:3C1C
cs=0x613;eip=0x003c21; 	T(ADD(sp, 4));	// 15255 add     sp, 4 ;~ 0613:3C21
cs=0x613;eip=0x003c24; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15256 mov     bx, [bp+arg_0] ;~ 0613:3C24
cs=0x613;eip=0x003c27; 	X(MOV(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 15257 mov     [bx+2Ch], ax ;~ 0613:3C27
cs=0x613;eip=0x003c2a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15258 mov     bx, [bp+arg_0] ;~ 0613:3C2A
cs=0x613;eip=0x003c2d; 	X(PUSH(*(dw*)(raddr(ds,bx+0x36))));	// 15259 push    word ptr [bx+36h] ;~ 0613:3C2D
cs=0x613;eip=0x003c30; 	R(CALLF(cos_fast,0));	// 15260 call    cos_fast ;~ 0613:3C30
cs=0x613;eip=0x003c35; 	T(ADD(sp, 2));	// 15261 add     sp, 2 ;~ 0613:3C35
cs=0x613;eip=0x003c38; 	T(OR(ax, ax));	// 15262 or      ax, ax ;~ 0613:3C38
cs=0x613;eip=0x003c3a; 	R(JGE(loc_18354));	// 15263 jge     short loc_18354 ;~ 0613:3C3A
cs=0x613;eip=0x003c3c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15264 mov     bx, [bp+arg_0] ;~ 0613:3C3C
cs=0x613;eip=0x003c3f; 	X(MOV(*(dw*)(raddr(ds,bx+0x2C)), 0));	// 15265 mov     word ptr [bx+2Ch], 0 ;~ 0613:3C3F
loc_18354:
	// 5285 
cs=0x613;eip=0x003c44; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15268 mov     bx, [bp+arg_0] ;~ 0613:3C44
cs=0x613;eip=0x003c47; 	X(MOV(*(dw*)(raddr(ds,bx+0x36)), 0));	// 15269 mov     word ptr [bx+36h], 0 ;~ 0613:3C47
cs=0x613;eip=0x003c4c; 	R(JMP(loc_1838e));	// 15270 jmp     short loc_1838E ;~ 0613:3C4C
loc_1835e:
	// 5286 
cs=0x613;eip=0x003c4e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15274 mov     bx, [bp+arg_0] ;~ 0613:3C4E
cs=0x613;eip=0x003c51; 	T(MOV(si, bx));	// 15275 mov     si, bx ;~ 0613:3C51
cs=0x613;eip=0x003c53; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x20))));	// 15276 mov     ax, [si+20h] ;~ 0613:3C53
cs=0x613;eip=0x003c56; 	T(SHL(ax, 1));	// 15277 shl     ax, 1 ;~ 0613:3C56
cs=0x613;eip=0x003c58; 	T(SHL(ax, 1));	// 15278 shl     ax, 1 ;~ 0613:3C58
cs=0x613;eip=0x003c5a; 	X(MOV(*(dw*)(raddr(ds,bx+0x40)), ax));	// 15279 mov     [bx+40h], ax ;~ 0613:3C5A
cs=0x613;eip=0x003c5d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15280 mov     bx, [bp+arg_0] ;~ 0613:3C5D
cs=0x613;eip=0x003c60; 	T(CMP(*(dw*)(raddr(ds,bx+0x3E)), 0));	// 15281 cmp     word ptr [bx+3Eh], 0 ;~ 0613:3C60
cs=0x613;eip=0x003c64; 	R(JZ(loc_1838e));	// 15282 jz      short loc_1838E ;~ 0613:3C64
cs=0x613;eip=0x003c66; 	T(MOV(si, bx));	// 15283 mov     si, bx ;~ 0613:3C66
cs=0x613;eip=0x003c68; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x3E))));	// 15284 mov     ax, [si+3Eh] ;~ 0613:3C68
cs=0x613;eip=0x003c6b; 	T(MOV(cx, ax));	// 15285 mov     cx, ax ;~ 0613:3C6B
cs=0x613;eip=0x003c6d; 	T(SHL(ax, 1));	// 15286 shl     ax, 1 ;~ 0613:3C6D
cs=0x613;eip=0x003c6f; 	T(SHL(ax, 1));	// 15287 shl     ax, 1 ;~ 0613:3C6F
cs=0x613;eip=0x003c71; 	T(SHL(ax, 1));	// 15288 shl     ax, 1 ;~ 0613:3C71
cs=0x613;eip=0x003c73; 	T(SHL(ax, 1));	// 15289 shl     ax, 1 ;~ 0613:3C73
cs=0x613;eip=0x003c75; 	T(SUB(ax, cx));	// 15290 sub     ax, cx ;~ 0613:3C75
cs=0x613;eip=0x003c77; 	T(MOV(cl, 4));	// 15291 mov     cl, 4 ;~ 0613:3C77
cs=0x613;eip=0x003c79; 	T(SAR(ax, cl));	// 15292 sar     ax, cl ;~ 0613:3C79
loc_1838b:
	// 5287 
cs=0x613;eip=0x003c7b; 	X(MOV(*(dw*)(raddr(ds,bx+0x3E)), ax));	// 15295 mov     [bx+3Eh], ax ;~ 0613:3C7B
loc_1838e:
	// 5288 
cs=0x613;eip=0x003c7e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15299 mov     bx, [bp+arg_0] ;~ 0613:3C7E
cs=0x613;eip=0x003c81; 	T(CMP(*(dw*)(raddr(ds,bx+0x36)), 0));	// 15300 cmp     word ptr [bx+36h], 0 ;~ 0613:3C81
cs=0x613;eip=0x003c85; 	R(JZ(loc_183b5));	// 15301 jz      short loc_183B5 ;~ 0613:3C85
cs=0x613;eip=0x003c87; 	T(CMP(*(dw*)(raddr(ds,bx+0x3E)), 0));	// 15302 cmp     word ptr [bx+3Eh], 0 ;~ 0613:3C87
cs=0x613;eip=0x003c8b; 	R(JNZ(loc_183b5));	// 15303 jnz     short loc_183B5 ;~ 0613:3C8B
cs=0x613;eip=0x003c8d; 	T(MOV(si, bx));	// 15304 mov     si, bx ;~ 0613:3C8D
cs=0x613;eip=0x003c8f; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x36))));	// 15305 mov     ax, [si+36h] ;~ 0613:3C8F
cs=0x613;eip=0x003c92; 	T(MOV(cx, ax));	// 15306 mov     cx, ax ;~ 0613:3C92
cs=0x613;eip=0x003c94; 	T(SHL(ax, 1));	// 15307 shl     ax, 1 ;~ 0613:3C94
cs=0x613;eip=0x003c96; 	T(SHL(ax, 1));	// 15308 shl     ax, 1 ;~ 0613:3C96
cs=0x613;eip=0x003c98; 	T(SHL(ax, 1));	// 15309 shl     ax, 1 ;~ 0613:3C98
cs=0x613;eip=0x003c9a; 	T(SHL(ax, 1));	// 15310 shl     ax, 1 ;~ 0613:3C9A
cs=0x613;eip=0x003c9c; 	T(SUB(ax, cx));	// 15311 sub     ax, cx ;~ 0613:3C9C
cs=0x613;eip=0x003c9e; 	T(MOV(cl, 4));	// 15312 mov     cl, 4 ;~ 0613:3C9E
cs=0x613;eip=0x003ca0; 	T(SAR(ax, cl));	// 15313 sar     ax, cl ;~ 0613:3CA0
cs=0x613;eip=0x003ca2; 	X(MOV(*(dw*)(raddr(ds,bx+0x36)), ax));	// 15314 mov     [bx+36h], ax ;~ 0613:3CA2
loc_183b5:
	// 5289 
cs=0x613;eip=0x003ca5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15318 mov     bx, [bp+arg_0] ;~ 0613:3CA5
cs=0x613;eip=0x003ca8; 	T(CMP(*(dw*)(raddr(ds,bx+0x3E)), 0));	// 15319 cmp     word ptr [bx+3Eh], 0 ;~ 0613:3CA8
cs=0x613;eip=0x003cac; 	R(JZ(loc_183c6));	// 15320 jz      short loc_183C6 ;~ 0613:3CAC
cs=0x613;eip=0x003cae; 	T(MOV(si, bx));	// 15321 mov     si, bx ;~ 0613:3CAE
cs=0x613;eip=0x003cb0; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x3E))));	// 15322 mov     ax, [si+3Eh] ;~ 0613:3CB0
cs=0x613;eip=0x003cb3; 	X(SUB(*(dw*)(raddr(ds,bx+0x36)), ax));	// 15323 sub     [bx+36h], ax ;~ 0613:3CB3
loc_183c6:
	// 5290 
cs=0x613;eip=0x003cb6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15326 mov     bx, [bp+arg_0] ;~ 0613:3CB6
cs=0x613;eip=0x003cb9; 	T(CMP(*(raddr(ds,bx+0x0C7)), 0));	// 15327 cmp     byte ptr [bx+0C7h], 0 ;~ 0613:3CB9
cs=0x613;eip=0x003cbe; 	R(JNZ(loc_183d3));	// 15328 jnz     short loc_183D3 ;~ 0613:3CBE
cs=0x613;eip=0x003cc0; 	R(JMP(loc_18458));	// 15329 jmp     loc_18458 ;~ 0613:3CC0
loc_183d3:
	// 5291 
cs=0x613;eip=0x003cc3; 	T(CMP(*(dw*)(raddr(ds,bx+0x42)), 0));	// 15333 cmp     word ptr [bx+42h], 0 ;~ 0613:3CC3
cs=0x613;eip=0x003cc7; 	R(JGE(loc_183e0));	// 15334 jge     short loc_183E0 ;~ 0613:3CC7
cs=0x613;eip=0x003cc9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x42))));	// 15335 mov     ax, [bx+42h] ;~ 0613:3CC9
cs=0x613;eip=0x003ccc; 	T(NEG(ax));	// 15336 neg     ax ;~ 0613:3CCC
cs=0x613;eip=0x003cce; 	R(JMP(loc_183e3));	// 15337 jmp     short loc_183E3 ;~ 0613:3CCE
loc_183e0:
	// 5292 
cs=0x613;eip=0x003cd0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x42))));	// 15341 mov     ax, [bx+42h] ;~ 0613:3CD0
loc_183e3:
	// 5293 
cs=0x613;eip=0x003cd3; 	T(SHL(ax, 1));	// 15344 shl     ax, 1 ;~ 0613:3CD3
cs=0x613;eip=0x003cd5; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 15345 mov     [bp+var_8], ax ;~ 0613:3CD5
cs=0x613;eip=0x003cd8; 	T(CMP(*(dw*)(raddr(ds,bx+0x2A)), ax));	// 15346 cmp     [bx+2Ah], ax ;~ 0613:3CD8
cs=0x613;eip=0x003cdb; 	R(JBE(loc_18448));	// 15347 jbe     short loc_18448 ;~ 0613:3CDB
cs=0x613;eip=0x003cdd; 	T(CMP(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 15348 cmp     [bx+2Ch], ax ;~ 0613:3CDD
cs=0x613;eip=0x003ce0; 	R(JBE(loc_18400));	// 15349 jbe     short loc_18400 ;~ 0613:3CE0
cs=0x613;eip=0x003ce2; 	X(SUB(*(dw*)(raddr(ds,bx+0x2A)), ax));	// 15350 sub     [bx+2Ah], ax ;~ 0613:3CE2
cs=0x613;eip=0x003ce5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15351 mov     bx, [bp+arg_0] ;~ 0613:3CE5
cs=0x613;eip=0x003ce8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 15352 mov     ax, [bp+var_8] ;~ 0613:3CE8
cs=0x613;eip=0x003ceb; 	X(SUB(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 15353 sub     [bx+2Ch], ax ;~ 0613:3CEB
cs=0x613;eip=0x003cee; 	R(JMP(loc_18410));	// 15354 jmp     short loc_18410 ;~ 0613:3CEE
loc_18400:
	// 5294 
cs=0x613;eip=0x003cf0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15358 mov     bx, [bp+arg_0] ;~ 0613:3CF0
cs=0x613;eip=0x003cf3; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), 0));	// 15359 mov     word ptr [bx+2Ah], 0 ;~ 0613:3CF3
cs=0x613;eip=0x003cf8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15360 mov     bx, [bp+arg_0] ;~ 0613:3CF8
cs=0x613;eip=0x003cfb; 	X(MOV(*(dw*)(raddr(ds,bx+0x2C)), 0));	// 15361 mov     word ptr [bx+2Ch], 0 ;~ 0613:3CFB
loc_18410:
	// 5295 
cs=0x613;eip=0x003d00; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15364 mov     bx, [bp+arg_0] ;~ 0613:3D00
cs=0x613;eip=0x003d03; 	T(CMP(*(raddr(ds,bx+0x0C9)), 0));	// 15365 cmp     byte ptr [bx+0C9h], 0 ;~ 0613:3D03
cs=0x613;eip=0x003d08; 	R(JNZ(loc_18458));	// 15366 jnz     short loc_18458 ;~ 0613:3D08
cs=0x613;eip=0x003d0a; 	T(CMP(*(raddr(ds,bx+0x0C2)), 1));	// 15367 cmp     byte ptr [bx+0C2h], 1 ;~ 0613:3D0A
cs=0x613;eip=0x003d0f; 	R(JZ(loc_18436));	// 15368 jz      short loc_18436 ;~ 0613:3D0F
cs=0x613;eip=0x003d11; 	T(CMP(*(raddr(ds,bx+0x0C3)), 1));	// 15369 cmp     byte ptr [bx+0C3h], 1 ;~ 0613:3D11
cs=0x613;eip=0x003d16; 	R(JZ(loc_18436));	// 15370 jz      short loc_18436 ;~ 0613:3D16
cs=0x613;eip=0x003d18; 	T(CMP(*(raddr(ds,bx+0x0C4)), 1));	// 15371 cmp     byte ptr [bx+0C4h], 1 ;~ 0613:3D18
cs=0x613;eip=0x003d1d; 	R(JZ(loc_18436));	// 15372 jz      short loc_18436 ;~ 0613:3D1D
cs=0x613;eip=0x003d1f; 	T(CMP(*(raddr(ds,bx+0x0C5)), 1));	// 15373 cmp     byte ptr [bx+0C5h], 1 ;~ 0613:3D1F
cs=0x613;eip=0x003d24; 	R(JNZ(loc_1843e));	// 15374 jnz     short loc_1843E ;~ 0613:3D24
loc_18436:
	// 5296 
cs=0x613;eip=0x003d26; 	X(OR(*(raddr(ds,bx+0x0CF)), 2));	// 15378 or      byte ptr [bx+0CFh], 2 ;~ 0613:3D26
cs=0x613;eip=0x003d2b; 	R(JMP(loc_18458));	// 15379 jmp     short loc_18458 ;~ 0613:3D2B
loc_1843e:
	// 5297 
cs=0x613;eip=0x003d2e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15384 mov     bx, [bp+arg_0] ;~ 0613:3D2E
cs=0x613;eip=0x003d31; 	X(OR(*(raddr(ds,bx+0x0CF)), 4));	// 15385 or      byte ptr [bx+0CFh], 4 ;~ 0613:3D31
cs=0x613;eip=0x003d36; 	R(JMP(loc_18458));	// 15386 jmp     short loc_18458 ;~ 0613:3D36
loc_18448:
	// 5298 
cs=0x613;eip=0x003d38; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15390 mov     bx, [bp+arg_0] ;~ 0613:3D38
cs=0x613;eip=0x003d3b; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), 0));	// 15391 mov     word ptr [bx+2Ah], 0 ;~ 0613:3D3B
cs=0x613;eip=0x003d40; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15392 mov     bx, [bp+arg_0] ;~ 0613:3D40
cs=0x613;eip=0x003d43; 	X(MOV(*(dw*)(raddr(ds,bx+0x2C)), 0));	// 15393 mov     word ptr [bx+2Ch], 0 ;~ 0613:3D43
loc_18458:
	// 5299 
cs=0x613;eip=0x003d48; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15397 mov     bx, [bp+arg_0] ;~ 0613:3D48
cs=0x613;eip=0x003d4b; 	X(MOV(*(dw*)(raddr(ds,bx+0x42)), 0));	// 15398 mov     word ptr [bx+42h], 0 ;~ 0613:3D4B
cs=0x613;eip=0x003d50; 	X(POP(si));	// 15399 pop     si ;~ 0613:3D50
cs=0x613;eip=0x003d51; 	X(POP(di));	// 15400 pop     di ;~ 0613:3D51
cs=0x613;eip=0x003d52; 	T(MOV(sp, bp));	// 15401 mov     sp, bp ;~ 0613:3D52
cs=0x613;eip=0x003d54; 	X(POP(bp));	// 15402 pop     bp ;~ 0613:3D54
cs=0x613;eip=0x003d55; 	R(RETF(0));	// 15403 retf ;~ 0613:3D55
car_car_speed_adjust_maybe:
	// 15411 
#undef var_18
#define var_18 -0x18
	// 15413 var_18          = word ptr -18h ;~ 0613:3D56
#undef var_16
#define var_16 -0x16
	// 15414 var_16          = word ptr -16h ;~ 0613:3D56
#undef var_14
#define var_14 -0x14
	// 15415 var_14          = word ptr -14h ;~ 0613:3D56
#undef var_12
#define var_12 -0x12
	// 15416 var_12          = word ptr -12h ;~ 0613:3D56
#undef var_10
#define var_10 -0x10
	// 15417 var_10          = word ptr -10h ;~ 0613:3D56
#undef var_e
#define var_e -0x0E
	// 15418 var_E           = word ptr -0Eh ;~ 0613:3D56
#undef var_c
#define var_c -0x0C
	// 15419 var_C           = word ptr -0Ch ;~ 0613:3D56
#undef var_a
#define var_a -0x0A
	// 15420 var_A           = word ptr -0Ah ;~ 0613:3D56
#undef var_8
#define var_8 -8
	// 15421 var_8           = word ptr -8 ;~ 0613:3D56
#undef var_6
#define var_6 -6
	// 15422 var_6           = word ptr -6 ;~ 0613:3D56
#undef var_4
#define var_4 -4
	// 15423 var_4           = word ptr -4 ;~ 0613:3D56
#undef var_2
#define var_2 -2
	// 15424 var_2           = word ptr -2 ;~ 0613:3D56
#undef arg_0
#define arg_0 6
	// 15425 arg_0           = word ptr  6 ;~ 0613:3D56
#undef arg_2
#define arg_2 8
	// 15426 arg_2           = word ptr  8 ;~ 0613:3D56
ret_613_3d56:
	// 5300 
cs=0x613;eip=0x003d56; 	X(PUSH(bp));	// 15428 push    bp ;~ 0613:3D56
cs=0x613;eip=0x003d57; 	T(MOV(bp, sp));	// 15429 mov     bp, sp ;~ 0613:3D57
cs=0x613;eip=0x003d59; 	T(SUB(sp, 0x18));	// 15430 sub     sp, 18h ;~ 0613:3D59
cs=0x613;eip=0x003d5c; 	X(PUSH(si));	// 15431 push    si ;~ 0613:3D5C
cs=0x613;eip=0x003d5d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15432 mov     bx, [bp+arg_0] ;~ 0613:3D5D
cs=0x613;eip=0x003d60; 	X(MOV(*(raddr(ds,bx+0x0C8)), 1));	// 15433 mov     byte ptr [bx+0C8h], 1 ;~ 0613:3D60
cs=0x613;eip=0x003d65; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 15434 mov     bx, [bp+arg_2] ;~ 0613:3D65
cs=0x613;eip=0x003d68; 	X(MOV(*(raddr(ds,bx+0x0C8)), 1));	// 15435 mov     byte ptr [bx+0C8h], 1 ;~ 0613:3D68
cs=0x613;eip=0x003d6d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15436 mov     bx, [bp+arg_0] ;~ 0613:3D6D
cs=0x613;eip=0x003d70; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x2C))));	// 15437 mov     ax, [bx+2Ch] ;~ 0613:3D70
cs=0x613;eip=0x003d73; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 15438 mov     [bp+var_6], ax ;~ 0613:3D73
cs=0x613;eip=0x003d76; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 15439 mov     bx, [bp+arg_2] ;~ 0613:3D76
cs=0x613;eip=0x003d79; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x2C))));	// 15440 mov     ax, [bx+2Ch] ;~ 0613:3D79
cs=0x613;eip=0x003d7c; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 15441 mov     [bp+var_C], ax ;~ 0613:3D7C
cs=0x613;eip=0x003d7f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15442 mov     bx, [bp+arg_0] ;~ 0613:3D7F
cs=0x613;eip=0x003d82; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x18))));	// 15443 mov     ax, [bx+18h] ;~ 0613:3D82
cs=0x613;eip=0x003d85; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 15444 mov     [bp+var_2], ax ;~ 0613:3D85
cs=0x613;eip=0x003d88; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 15445 mov     bx, [bp+arg_2] ;~ 0613:3D88
cs=0x613;eip=0x003d8b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x18))));	// 15446 mov     ax, [bx+18h] ;~ 0613:3D8B
cs=0x613;eip=0x003d8e; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 15447 mov     [bp+var_4], ax ;~ 0613:3D8E
cs=0x613;eip=0x003d91; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 15448 push    [bp+var_2] ;~ 0613:3D91
cs=0x613;eip=0x003d94; 	R(CALLF(sin_fast,0));	// 15449 call    sin_fast ;~ 0613:3D94
cs=0x613;eip=0x003d99; 	T(ADD(sp, 2));	// 15450 add     sp, 2 ;~ 0613:3D99
cs=0x613;eip=0x003d9c; 	X(PUSH(ax));	// 15451 push    ax ;~ 0613:3D9C
cs=0x613;eip=0x003d9d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 15452 mov     ax, [bp+var_6] ;~ 0613:3D9D
cs=0x613;eip=0x003da0; 	T(MOV(cl, 8));	// 15453 mov     cl, 8 ;~ 0613:3DA0
cs=0x613;eip=0x003da2; 	T(SHR(ax, cl));	// 15454 shr     ax, cl ;~ 0613:3DA2
cs=0x613;eip=0x003da4; 	X(PUSH(ax));	// 15455 push    ax ;~ 0613:3DA4
cs=0x613;eip=0x003da5; 	R(CALLF(multiply_and_scale,0));	// 15456 call    multiply_and_scale ;~ 0613:3DA5
cs=0x613;eip=0x003daa; 	T(ADD(sp, 4));	// 15457 add     sp, 4 ;~ 0613:3DAA
cs=0x613;eip=0x003dad; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 15458 mov     [bp+var_10], ax ;~ 0613:3DAD
cs=0x613;eip=0x003db0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 15459 push    [bp+var_4] ;~ 0613:3DB0
cs=0x613;eip=0x003db3; 	R(CALLF(sin_fast,0));	// 15460 call    sin_fast ;~ 0613:3DB3
cs=0x613;eip=0x003db8; 	T(ADD(sp, 2));	// 15461 add     sp, 2 ;~ 0613:3DB8
cs=0x613;eip=0x003dbb; 	X(PUSH(ax));	// 15462 push    ax ;~ 0613:3DBB
cs=0x613;eip=0x003dbc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 15463 mov     ax, [bp+var_C] ;~ 0613:3DBC
cs=0x613;eip=0x003dbf; 	T(MOV(cl, 8));	// 15464 mov     cl, 8 ;~ 0613:3DBF
cs=0x613;eip=0x003dc1; 	T(SHR(ax, cl));	// 15465 shr     ax, cl ;~ 0613:3DC1
cs=0x613;eip=0x003dc3; 	X(PUSH(ax));	// 15466 push    ax ;~ 0613:3DC3
cs=0x613;eip=0x003dc4; 	R(CALLF(multiply_and_scale,0));	// 15467 call    multiply_and_scale ;~ 0613:3DC4
cs=0x613;eip=0x003dc9; 	T(ADD(sp, 4));	// 15468 add     sp, 4 ;~ 0613:3DC9
cs=0x613;eip=0x003dcc; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 15469 mov     [bp+var_14], ax ;~ 0613:3DCC
cs=0x613;eip=0x003dcf; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 15470 push    [bp+var_2] ;~ 0613:3DCF
cs=0x613;eip=0x003dd2; 	R(CALLF(cos_fast,0));	// 15471 call    cos_fast ;~ 0613:3DD2
cs=0x613;eip=0x003dd7; 	T(ADD(sp, 2));	// 15472 add     sp, 2 ;~ 0613:3DD7
cs=0x613;eip=0x003dda; 	X(PUSH(ax));	// 15473 push    ax ;~ 0613:3DDA
cs=0x613;eip=0x003ddb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 15474 mov     ax, [bp+var_6] ;~ 0613:3DDB
cs=0x613;eip=0x003dde; 	T(MOV(cl, 8));	// 15475 mov     cl, 8 ;~ 0613:3DDE
cs=0x613;eip=0x003de0; 	T(SHR(ax, cl));	// 15476 shr     ax, cl ;~ 0613:3DE0
cs=0x613;eip=0x003de2; 	X(PUSH(ax));	// 15477 push    ax ;~ 0613:3DE2
cs=0x613;eip=0x003de3; 	R(CALLF(multiply_and_scale,0));	// 15478 call    multiply_and_scale ;~ 0613:3DE3
cs=0x613;eip=0x003de8; 	T(ADD(sp, 4));	// 15479 add     sp, 4 ;~ 0613:3DE8
cs=0x613;eip=0x003deb; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 15480 mov     [bp+var_12], ax ;~ 0613:3DEB
cs=0x613;eip=0x003dee; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 15481 push    [bp+var_4] ;~ 0613:3DEE
cs=0x613;eip=0x003df1; 	R(CALLF(cos_fast,0));	// 15482 call    cos_fast ;~ 0613:3DF1
cs=0x613;eip=0x003df6; 	T(ADD(sp, 2));	// 15483 add     sp, 2 ;~ 0613:3DF6
cs=0x613;eip=0x003df9; 	X(PUSH(ax));	// 15484 push    ax ;~ 0613:3DF9
cs=0x613;eip=0x003dfa; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 15485 mov     ax, [bp+var_C] ;~ 0613:3DFA
cs=0x613;eip=0x003dfd; 	T(MOV(cl, 8));	// 15486 mov     cl, 8 ;~ 0613:3DFD
cs=0x613;eip=0x003dff; 	T(SHR(ax, cl));	// 15487 shr     ax, cl ;~ 0613:3DFF
cs=0x613;eip=0x003e01; 	X(PUSH(ax));	// 15488 push    ax ;~ 0613:3E01
cs=0x613;eip=0x003e02; 	R(CALLF(multiply_and_scale,0));	// 15489 call    multiply_and_scale ;~ 0613:3E02
cs=0x613;eip=0x003e07; 	T(ADD(sp, 4));	// 15490 add     sp, 4 ;~ 0613:3E07
cs=0x613;eip=0x003e0a; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 15491 mov     [bp+var_16], ax ;~ 0613:3E0A
cs=0x613;eip=0x003e0d; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_12))));	// 15492 sub     ax, [bp+var_12] ;~ 0613:3E0D
cs=0x613;eip=0x003e10; 	X(PUSH(ax));	// 15493 push    ax ;~ 0613:3E10
cs=0x613;eip=0x003e11; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 15494 mov     ax, [bp+var_14] ;~ 0613:3E11
cs=0x613;eip=0x003e14; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_10))));	// 15495 sub     ax, [bp+var_10] ;~ 0613:3E14
cs=0x613;eip=0x003e17; 	X(PUSH(ax));	// 15496 push    ax ;~ 0613:3E17
cs=0x613;eip=0x003e18; 	R(CALLF(polarradius2d,0));	// 15497 call    polarRadius2D ;~ 0613:3E18
cs=0x613;eip=0x003e1d; 	T(ADD(sp, 4));	// 15498 add     sp, 4 ;~ 0613:3E1D
cs=0x613;eip=0x003e20; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 15499 mov     [bp+var_A], ax ;~ 0613:3E20
cs=0x613;eip=0x003e23; 	T(CMP(ax, 0x0A));	// 15500 cmp     ax, 0Ah ;~ 0613:3E23
cs=0x613;eip=0x003e26; 	R(JGE(loc_1853d));	// 15501 jge     short loc_1853D ;~ 0613:3E26
cs=0x613;eip=0x003e28; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x0A));	// 15502 mov     [bp+var_A], 0Ah ;~ 0613:3E28
loc_1853d:
	// 5301 
cs=0x613;eip=0x003e2d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 15505 mov     ax, [bp+var_2] ;~ 0613:3E2D
cs=0x613;eip=0x003e30; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 15506 sub     ax, [bp+var_4] ;~ 0613:3E30
cs=0x613;eip=0x003e33; 	T(AND(ah, 3));	// 15507 and     ah, 3 ;~ 0613:3E33
cs=0x613;eip=0x003e36; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 15508 mov     [bp+var_8], ax ;~ 0613:3E36
cs=0x613;eip=0x003e39; 	T(MOV(ah, *(db*)(raddr(ss,bp+var_a))));	// 15509 mov     ah, byte ptr [bp+var_A] ;~ 0613:3E39
cs=0x613;eip=0x003e3c; 	T(SUB(al, al));	// 15510 sub     al, al ;~ 0613:3E3C
cs=0x613;eip=0x003e3e; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 15511 mov     [bp+var_E], ax ;~ 0613:3E3E
cs=0x613;eip=0x003e41; 	T(MOV(ax, 0x300));	// 15512 mov     ax, 300h ;~ 0613:3E41
cs=0x613;eip=0x003e44; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_a))));	// 15513 imul    [bp+var_A] ;~ 0613:3E44
cs=0x613;eip=0x003e47; 	T(SAR(ax, 1));	// 15514 sar     ax, 1 ;~ 0613:3E47
cs=0x613;eip=0x003e49; 	T(SAR(ax, 1));	// 15515 sar     ax, 1 ;~ 0613:3E49
cs=0x613;eip=0x003e4b; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 15516 mov     [bp+var_18], ax ;~ 0613:3E4B
cs=0x613;eip=0x003e4e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15517 mov     bx, [bp+arg_0] ;~ 0613:3E4E
cs=0x613;eip=0x003e51; 	T(CMP(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 15518 cmp     [bx+2Ch], ax ;~ 0613:3E51
cs=0x613;eip=0x003e54; 	R(JNC(loc_1856e));	// 15519 jnb     short loc_1856E ;~ 0613:3E54
cs=0x613;eip=0x003e56; 	X(MOV(*(dw*)(raddr(ds,bx+0x2C)), 0));	// 15520 mov     word ptr [bx+2Ch], 0 ;~ 0613:3E56
cs=0x613;eip=0x003e5b; 	R(JMP(loc_18577));	// 15521 jmp     short loc_18577 ;~ 0613:3E5B
loc_1856e:
	// 5302 
cs=0x613;eip=0x003e5e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15526 mov     bx, [bp+arg_0] ;~ 0613:3E5E
cs=0x613;eip=0x003e61; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 15527 mov     ax, [bp+var_18] ;~ 0613:3E61
cs=0x613;eip=0x003e64; 	X(SUB(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 15528 sub     [bx+2Ch], ax ;~ 0613:3E64
loc_18577:
	// 5303 
cs=0x613;eip=0x003e67; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15531 mov     bx, [bp+arg_0] ;~ 0613:3E67
cs=0x613;eip=0x003e6a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 15532 mov     ax, [bp+var_4] ;~ 0613:3E6A
cs=0x613;eip=0x003e6d; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2))));	// 15533 sub     ax, [bp+var_2] ;~ 0613:3E6D
cs=0x613;eip=0x003e70; 	X(MOV(*(dw*)(raddr(ds,bx+0x36)), ax));	// 15534 mov     [bx+36h], ax ;~ 0613:3E70
cs=0x613;eip=0x003e73; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15535 mov     bx, [bp+arg_0] ;~ 0613:3E73
cs=0x613;eip=0x003e76; 	T(CMP(*(dw*)(raddr(ds,bx+0x36)), 0x200));	// 15536 cmp     word ptr [bx+36h], 200h ;~ 0613:3E76
cs=0x613;eip=0x003e7b; 	R(JL(loc_18592));	// 15537 jl      short loc_18592 ;~ 0613:3E7B
cs=0x613;eip=0x003e7d; 	X(SUB(*(dw*)(raddr(ds,bx+0x36)), 0x400));	// 15538 sub     word ptr [bx+36h], 400h ;~ 0613:3E7D
loc_18592:
	// 5304 
cs=0x613;eip=0x003e82; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15541 mov     bx, [bp+arg_0] ;~ 0613:3E82
cs=0x613;eip=0x003e85; 	T(CMP(*(dw*)(raddr(ds,bx+0x36)), 0x0FE00));	// 15542 cmp     word ptr [bx+36h], 0FE00h ;~ 0613:3E85
cs=0x613;eip=0x003e8a; 	R(JG(loc_185a0));	// 15543 jg      short loc_185A0 ;~ 0613:3E8A
cs=0x613;eip=0x003e8c; 	X(ADD(*(raddr(ds,bx+0x37)), 4));	// 15544 add     byte ptr [bx+37h], 4 ;~ 0613:3E8C
loc_185a0:
	// 5305 
cs=0x613;eip=0x003e90; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 15547 mov     bx, [bp+arg_2] ;~ 0613:3E90
cs=0x613;eip=0x003e93; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 15548 mov     ax, [bp+var_2] ;~ 0613:3E93
cs=0x613;eip=0x003e96; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 15549 sub     ax, [bp+var_4] ;~ 0613:3E96
cs=0x613;eip=0x003e99; 	X(MOV(*(dw*)(raddr(ds,bx+0x36)), ax));	// 15550 mov     [bx+36h], ax ;~ 0613:3E99
cs=0x613;eip=0x003e9c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 15551 mov     bx, [bp+arg_2] ;~ 0613:3E9C
cs=0x613;eip=0x003e9f; 	T(CMP(*(dw*)(raddr(ds,bx+0x36)), 0x200));	// 15552 cmp     word ptr [bx+36h], 200h ;~ 0613:3E9F
cs=0x613;eip=0x003ea4; 	R(JL(loc_185bb));	// 15553 jl      short loc_185BB ;~ 0613:3EA4
cs=0x613;eip=0x003ea6; 	X(SUB(*(dw*)(raddr(ds,bx+0x36)), 0x400));	// 15554 sub     word ptr [bx+36h], 400h ;~ 0613:3EA6
loc_185bb:
	// 5306 
cs=0x613;eip=0x003eab; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 15557 mov     bx, [bp+arg_2] ;~ 0613:3EAB
cs=0x613;eip=0x003eae; 	T(CMP(*(dw*)(raddr(ds,bx+0x36)), 0x0FE00));	// 15558 cmp     word ptr [bx+36h], 0FE00h ;~ 0613:3EAE
cs=0x613;eip=0x003eb3; 	R(JG(loc_185c9));	// 15559 jg      short loc_185C9 ;~ 0613:3EB3
cs=0x613;eip=0x003eb5; 	X(ADD(*(raddr(ds,bx+0x37)), 4));	// 15560 add     byte ptr [bx+37h], 4 ;~ 0613:3EB5
loc_185c9:
	// 5307 
cs=0x613;eip=0x003eb9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15563 mov     bx, [bp+arg_0] ;~ 0613:3EB9
cs=0x613;eip=0x003ebc; 	T(MOV(si, bx));	// 15564 mov     si, bx ;~ 0613:3EBC
cs=0x613;eip=0x003ebe; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x2C))));	// 15565 mov     ax, [si+2Ch] ;~ 0613:3EBE
cs=0x613;eip=0x003ec1; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), ax));	// 15566 mov     [bx+2Ah], ax ;~ 0613:3EC1
cs=0x613;eip=0x003ec4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 15567 mov     bx, [bp+arg_2] ;~ 0613:3EC4
cs=0x613;eip=0x003ec7; 	T(MOV(si, bx));	// 15568 mov     si, bx ;~ 0613:3EC7
cs=0x613;eip=0x003ec9; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x2C))));	// 15569 mov     ax, [si+2Ch] ;~ 0613:3EC9
cs=0x613;eip=0x003ecc; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), ax));	// 15570 mov     [bx+2Ah], ax ;~ 0613:3ECC
cs=0x613;eip=0x003ecf; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x1E));	// 15571 cmp     [bp+var_A], 1Eh ;~ 0613:3ECF
cs=0x613;eip=0x003ed3; 	R(JLE(loc_185ee));	// 15572 jle     short loc_185EE ;~ 0613:3ED3
cs=0x613;eip=0x003ed5; 	T(MOV(ax, 1));	// 15573 mov     ax, 1 ;~ 0613:3ED5
cs=0x613;eip=0x003ed8; 	X(POP(si));	// 15574 pop     si ;~ 0613:3ED8
cs=0x613;eip=0x003ed9; 	T(MOV(sp, bp));	// 15575 mov     sp, bp ;~ 0613:3ED9
cs=0x613;eip=0x003edb; 	X(POP(bp));	// 15576 pop     bp ;~ 0613:3EDB
cs=0x613;eip=0x003edc; 	R(RETF(0));	// 15577 retf ;~ 0613:3EDC
loc_185ee:
	// 5308 
cs=0x613;eip=0x003ede; 	T(SUB(ax, ax));	// 15582 sub     ax, ax ;~ 0613:3EDE
cs=0x613;eip=0x003ee0; 	X(POP(si));	// 15583 pop     si ;~ 0613:3EE0
cs=0x613;eip=0x003ee1; 	T(MOV(sp, bp));	// 15584 mov     sp, bp ;~ 0613:3EE1
cs=0x613;eip=0x003ee3; 	X(POP(bp));	// 15585 pop     bp ;~ 0613:3EE3
cs=0x613;eip=0x003ee4; 	R(RETF(0));	// 15586 retf ;~ 0613:3EE4
carstate_rc_op:
	// 15596 
#undef var_6
#define var_6 -6
	// 15598 var_6           = word ptr -6 ;~ 0613:3EE6
#undef var_4
#define var_4 -4
	// 15599 var_4           = word ptr -4 ;~ 0613:3EE6
#undef var_2
#define var_2 -2
	// 15600 var_2           = word ptr -2 ;~ 0613:3EE6
#undef arg_0
#define arg_0 6
	// 15601 arg_0           = word ptr  6 ;~ 0613:3EE6
#undef arg_2
#define arg_2 8
	// 15602 arg_2           = word ptr  8 ;~ 0613:3EE6
#undef arg_4
#define arg_4 0x0A
	// 15603 arg_4           = word ptr  0Ah ;~ 0613:3EE6
ret_613_3ee6:
	// 5309 
cs=0x613;eip=0x003ee6; 	X(PUSH(bp));	// 15605 push    bp ;~ 0613:3EE6
cs=0x613;eip=0x003ee7; 	T(MOV(bp, sp));	// 15606 mov     bp, sp ;~ 0613:3EE7
cs=0x613;eip=0x003ee9; 	T(SUB(sp, 6));	// 15607 sub     sp, 6 ;~ 0613:3EE9
cs=0x613;eip=0x003eec; 	X(PUSH(di));	// 15608 push    di ;~ 0613:3EEC
cs=0x613;eip=0x003eed; 	X(PUSH(si));	// 15609 push    si ;~ 0613:3EED
cs=0x613;eip=0x003eee; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15610 mov     si, [bp+arg_4] ;~ 0613:3EEE
cs=0x613;eip=0x003ef1; 	T(SHL(si, 1));	// 15611 shl     si, 1 ;~ 0613:3EF1
cs=0x613;eip=0x003ef3; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 15612 add     si, [bp+arg_0] ;~ 0613:3EF3
cs=0x613;eip=0x003ef6; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x54))));	// 15613 mov     ax, [si+54h]    ; rc accesses are offset by the wheel index. ;~ 0613:3EF6
cs=0x613;eip=0x003ef9; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 15614 mov     [bp+var_2], ax ;~ 0613:3EF9
cs=0x613;eip=0x003efc; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 15615 mov     [bp+var_4], 0 ;~ 0613:3EFC
cs=0x613;eip=0x003f01; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 15616 mov     [bp+var_6], 0 ;~ 0613:3F01
cs=0x613;eip=0x003f06; 	T(CMP(*(dw*)(raddr(ds,si+0x6C)), 0));	// 15617 cmp     word ptr [si+6Ch], 0 ;~ 0613:3F06
cs=0x613;eip=0x003f0a; 	R(JZ(loc_18659));	// 15618 jz      short loc_18659 ;~ 0613:3F0A
cs=0x613;eip=0x003f0c; 	R(JGE(loc_18636));	// 15619 jge     short loc_18636 ;~ 0613:3F0C
cs=0x613;eip=0x003f0e; 	X(ADD(*(dw*)(raddr(ds,si+0x6C)), 4));	// 15620 add     word ptr [si+6Ch], 4 ;~ 0613:3F0E
cs=0x613;eip=0x003f12; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15621 mov     si, [bp+arg_4] ;~ 0613:3F12
cs=0x613;eip=0x003f15; 	T(SHL(si, 1));	// 15622 shl     si, 1 ;~ 0613:3F15
cs=0x613;eip=0x003f17; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 15623 add     si, [bp+arg_0] ;~ 0613:3F17
cs=0x613;eip=0x003f1a; 	T(ADD(si, 0x6C));	// 15624 add     si, 6Ch ;~ 0613:3F1A
cs=0x613;eip=0x003f1d; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 15625 mov     ax, [si] ;~ 0613:3F1D
cs=0x613;eip=0x003f1f; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 15626 cmp     [bp+var_6], ax ;~ 0613:3F1F
cs=0x613;eip=0x003f22; 	R(JGE(loc_18659));	// 15627 jge     short loc_18659 ;~ 0613:3F22
cs=0x613;eip=0x003f24; 	R(JMP(loc_18654));	// 15628 jmp     short loc_18654 ;~ 0613:3F24
loc_18636:
	// 5310 
cs=0x613;eip=0x003f26; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 15632 mov     di, [bp+arg_4] ;~ 0613:3F26
cs=0x613;eip=0x003f29; 	T(SHL(di, 1));	// 15633 shl     di, 1 ;~ 0613:3F29
cs=0x613;eip=0x003f2b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15634 mov     bx, [bp+arg_0] ;~ 0613:3F2B
cs=0x613;eip=0x003f2e; 	X(SUB(*(dw*)(raddr(ds,bx+di+0x6C)), 4));	// 15635 sub     word ptr [bx+di+6Ch], 4 ;~ 0613:3F2E
cs=0x613;eip=0x003f32; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15636 mov     si, [bp+arg_4] ;~ 0613:3F32
cs=0x613;eip=0x003f35; 	T(SHL(si, 1));	// 15637 shl     si, 1 ;~ 0613:3F35
cs=0x613;eip=0x003f37; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 15638 add     si, [bp+arg_0] ;~ 0613:3F37
cs=0x613;eip=0x003f3a; 	T(ADD(si, 0x6C));	// 15639 add     si, 6Ch ;~ 0613:3F3A
cs=0x613;eip=0x003f3d; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 15640 mov     ax, [si] ;~ 0613:3F3D
cs=0x613;eip=0x003f3f; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 15641 cmp     [bp+var_6], ax ;~ 0613:3F3F
cs=0x613;eip=0x003f42; 	R(JLE(loc_18659));	// 15642 jle     short loc_18659 ;~ 0613:3F42
loc_18654:
	// 5311 
cs=0x613;eip=0x003f44; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 15645 mov     ax, [bp+var_6] ;~ 0613:3F44
cs=0x613;eip=0x003f47; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 15646 mov     [si], ax ;~ 0613:3F47
loc_18659:
	// 5312 
cs=0x613;eip=0x003f49; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 15650 mov     di, [bp+arg_4] ;~ 0613:3F49
cs=0x613;eip=0x003f4c; 	T(SHL(di, 1));	// 15651 shl     di, 1 ;~ 0613:3F4C
cs=0x613;eip=0x003f4e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15652 mov     bx, [bp+arg_0] ;~ 0613:3F4E
cs=0x613;eip=0x003f51; 	T(MOV(si, *(dw*)(raddr(ds,bx+di+0x6C))));	// 15653 mov     si, [bx+di+6Ch] ;~ 0613:3F51
cs=0x613;eip=0x003f54; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 15654 mov     di, [bp+arg_4] ;~ 0613:3F54
cs=0x613;eip=0x003f57; 	T(SHL(di, 1));	// 15655 shl     di, 1 ;~ 0613:3F57
cs=0x613;eip=0x003f59; 	X(MOV(*(dw*)(raddr(ds,bx+di+0x6C)), si));	// 15656 mov     [bx+di+6Ch], si ;~ 0613:3F59
cs=0x613;eip=0x003f5c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 15657 cmp     [bp+arg_2], 0 ;~ 0613:3F5C
cs=0x613;eip=0x003f60; 	R(JGE(loc_18689));	// 15658 jge     short loc_18689 ;~ 0613:3F60
cs=0x613;eip=0x003f62; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 15659 mov     di, [bp+arg_4] ;~ 0613:3F62
cs=0x613;eip=0x003f65; 	T(SHL(di, 1));	// 15660 shl     di, 1 ;~ 0613:3F65
cs=0x613;eip=0x003f67; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15661 mov     bx, [bp+arg_0] ;~ 0613:3F67
cs=0x613;eip=0x003f6a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 15662 mov     ax, [bp+arg_2] ;~ 0613:3F6A
cs=0x613;eip=0x003f6d; 	T(NEG(ax));	// 15663 neg     ax ;~ 0613:3F6D
cs=0x613;eip=0x003f6f; 	T(CMP(*(dw*)(raddr(ds,bx+di+0x54)), ax));	// 15664 cmp     [bx+di+54h], ax ;~ 0613:3F6F
cs=0x613;eip=0x003f72; 	R(JLE(loc_18689));	// 15665 jle     short loc_18689 ;~ 0613:3F72
cs=0x613;eip=0x003f74; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 15666 mov     [bp+arg_2], 0 ;~ 0613:3F74
loc_18689:
	// 5313 
cs=0x613;eip=0x003f79; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 15670 cmp     [bp+arg_2], 0 ;~ 0613:3F79
cs=0x613;eip=0x003f7d; 	R(JNZ(loc_186fa));	// 15671 jnz     short loc_186FA ;~ 0613:3F7D
cs=0x613;eip=0x003f7f; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15672 mov     si, [bp+arg_4] ;~ 0613:3F7F
cs=0x613;eip=0x003f82; 	T(SHL(si, 1));	// 15673 shl     si, 1 ;~ 0613:3F82
cs=0x613;eip=0x003f84; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 15674 add     si, [bp+arg_0] ;~ 0613:3F84
cs=0x613;eip=0x003f87; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x6C))));	// 15675 mov     ax, [si+6Ch] ;~ 0613:3F87
cs=0x613;eip=0x003f8a; 	T(CMP(*(dw*)(raddr(ds,si+0x54)), ax));	// 15676 cmp     [si+54h], ax ;~ 0613:3F8A
cs=0x613;eip=0x003f8d; 	R(JLE(loc_186c8));	// 15677 jle     short loc_186C8 ;~ 0613:3F8D
cs=0x613;eip=0x003f8f; 	X(SUB(*(dw*)(raddr(ds,si+0x54)), 0x80));	// 15678 sub     word ptr [si+54h], 80h ; '€' ;~ 0613:3F8F
cs=0x613;eip=0x003f94; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15679 mov     si, [bp+arg_4] ;~ 0613:3F94
cs=0x613;eip=0x003f97; 	T(SHL(si, 1));	// 15680 shl     si, 1 ;~ 0613:3F97
cs=0x613;eip=0x003f99; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 15681 add     si, [bp+arg_0] ;~ 0613:3F99
cs=0x613;eip=0x003f9c; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x6C))));	// 15682 mov     ax, [si+6Ch] ;~ 0613:3F9C
cs=0x613;eip=0x003f9f; 	T(CMP(*(dw*)(raddr(ds,si+0x54)), ax));	// 15683 cmp     [si+54h], ax ;~ 0613:3F9F
cs=0x613;eip=0x003fa2; 	R(JGE(loc_186b7));	// 15684 jge     short loc_186B7 ;~ 0613:3FA2
cs=0x613;eip=0x003fa4; 	X(MOV(*(dw*)(raddr(ds,si+0x54)), ax));	// 15685 mov     [si+54h], ax ;~ 0613:3FA4
loc_186b7:
	// 5314 
cs=0x613;eip=0x003fa7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 15688 mov     ax, [bp+var_2] ;~ 0613:3FA7
cs=0x613;eip=0x003faa; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15689 mov     si, [bp+arg_4] ;~ 0613:3FAA
cs=0x613;eip=0x003fad; 	T(SHL(si, 1));	// 15690 shl     si, 1 ;~ 0613:3FAD
cs=0x613;eip=0x003faf; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15691 mov     bx, [bp+arg_0] ;~ 0613:3FAF
cs=0x613;eip=0x003fb2; 	T(SUB(ax, *(dw*)(raddr(ds,bx+si+0x54))));	// 15692 sub     ax, [bx+si+54h] ;~ 0613:3FB2
cs=0x613;eip=0x003fb5; 	R(JMP(loc_187a2));	// 15693 jmp     loc_187A2 ;~ 0613:3FB5
loc_186c8:
	// 5315 
cs=0x613;eip=0x003fb8; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15697 mov     si, [bp+arg_4] ;~ 0613:3FB8
cs=0x613;eip=0x003fbb; 	T(SHL(si, 1));	// 15698 shl     si, 1 ;~ 0613:3FBB
cs=0x613;eip=0x003fbd; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 15699 add     si, [bp+arg_0] ;~ 0613:3FBD
cs=0x613;eip=0x003fc0; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x6C))));	// 15700 mov     ax, [si+6Ch] ;~ 0613:3FC0
cs=0x613;eip=0x003fc3; 	T(CMP(*(dw*)(raddr(ds,si+0x54)), ax));	// 15701 cmp     [si+54h], ax ;~ 0613:3FC3
cs=0x613;eip=0x003fc6; 	R(JL(loc_186db));	// 15702 jl      short loc_186DB ;~ 0613:3FC6
cs=0x613;eip=0x003fc8; 	R(JMP(loc_187a5));	// 15703 jmp     loc_187A5 ;~ 0613:3FC8
loc_186db:
	// 5316 
cs=0x613;eip=0x003fcb; 	X(ADD(*(dw*)(raddr(ds,si+0x54)), 0x80));	// 15707 add     word ptr [si+54h], 80h ; '€' ;~ 0613:3FCB
cs=0x613;eip=0x003fd0; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15708 mov     si, [bp+arg_4] ;~ 0613:3FD0
cs=0x613;eip=0x003fd3; 	T(SHL(si, 1));	// 15709 shl     si, 1 ;~ 0613:3FD3
cs=0x613;eip=0x003fd5; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 15710 add     si, [bp+arg_0] ;~ 0613:3FD5
cs=0x613;eip=0x003fd8; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x6C))));	// 15711 mov     ax, [si+6Ch] ;~ 0613:3FD8
cs=0x613;eip=0x003fdb; 	T(CMP(*(dw*)(raddr(ds,si+0x54)), ax));	// 15712 cmp     [si+54h], ax ;~ 0613:3FDB
cs=0x613;eip=0x003fde; 	R(JG(loc_186f3));	// 15713 jg      short loc_186F3 ;~ 0613:3FDE
cs=0x613;eip=0x003fe0; 	R(JMP(loc_187a5));	// 15714 jmp     loc_187A5 ;~ 0613:3FE0
loc_186f3:
	// 5317 
cs=0x613;eip=0x003fe3; 	X(MOV(*(dw*)(raddr(ds,si+0x54)), ax));	// 15718 mov     [si+54h], ax ;~ 0613:3FE3
cs=0x613;eip=0x003fe6; 	R(JMP(loc_187a5));	// 15719 jmp     loc_187A5 ;~ 0613:3FE6
loc_186fa:
	// 5318 
cs=0x613;eip=0x003fea; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 15724 cmp     [bp+arg_2], 0 ;~ 0613:3FEA
cs=0x613;eip=0x003fee; 	R(JLE(loc_18748));	// 15725 jle     short loc_18748 ;~ 0613:3FEE
cs=0x613;eip=0x003ff0; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0x0C0));	// 15726 cmp     [bp+arg_2], 0C0h ; 'À' ;~ 0613:3FF0
cs=0x613;eip=0x003ff5; 	R(JLE(loc_18716));	// 15727 jle     short loc_18716 ;~ 0613:3FF5
cs=0x613;eip=0x003ff7; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15728 mov     si, [bp+arg_4] ;~ 0613:3FF7
cs=0x613;eip=0x003ffa; 	T(SHL(si, 1));	// 15729 shl     si, 1 ;~ 0613:3FFA
cs=0x613;eip=0x003ffc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15730 mov     bx, [bp+arg_0] ;~ 0613:3FFC
cs=0x613;eip=0x003fff; 	X(ADD(*(dw*)(raddr(ds,bx+si+0x54)), 0x0C0));	// 15731 add     word ptr [bx+si+54h], 0C0h ; 'À' ;~ 0613:3FFF
cs=0x613;eip=0x004004; 	R(JMP(loc_18724));	// 15732 jmp     short loc_18724 ;~ 0613:4004
loc_18716:
	// 5319 
cs=0x613;eip=0x004006; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15736 mov     si, [bp+arg_4] ;~ 0613:4006
cs=0x613;eip=0x004009; 	T(SHL(si, 1));	// 15737 shl     si, 1 ;~ 0613:4009
cs=0x613;eip=0x00400b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15738 mov     bx, [bp+arg_0] ;~ 0613:400B
cs=0x613;eip=0x00400e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 15739 mov     ax, [bp+arg_2] ;~ 0613:400E
cs=0x613;eip=0x004011; 	X(ADD(*(dw*)(raddr(ds,bx+si+0x54)), ax));	// 15740 add     [bx+si+54h], ax ;~ 0613:4011
loc_18724:
	// 5320 
cs=0x613;eip=0x004014; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15743 mov     si, [bp+arg_4] ;~ 0613:4014
cs=0x613;eip=0x004017; 	T(SHL(si, 1));	// 15744 shl     si, 1 ;~ 0613:4017
cs=0x613;eip=0x004019; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 15745 add     si, [bp+arg_0] ;~ 0613:4019
cs=0x613;eip=0x00401c; 	T(ADD(si, 0x54));	// 15746 add     si, 54h ; 'T'   ; 54 = car_rc2 ;~ 0613:401C
cs=0x613;eip=0x00401f; 	T(CMP(*(dw*)(raddr(ds,si)), 0x180));	// 15747 cmp     word ptr [si], 180h ;~ 0613:401F
cs=0x613;eip=0x004023; 	R(JLE(loc_18739));	// 15748 jle     short loc_18739 ;~ 0613:4023
cs=0x613;eip=0x004025; 	X(MOV(*(dw*)(raddr(ds,si)), 0x180));	// 15749 mov     word ptr [si], 180h ;~ 0613:4025
loc_18739:
	// 5321 
cs=0x613;eip=0x004029; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15752 mov     si, [bp+arg_4] ;~ 0613:4029
cs=0x613;eip=0x00402c; 	T(SHL(si, 1));	// 15753 shl     si, 1 ;~ 0613:402C
cs=0x613;eip=0x00402e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15754 mov     bx, [bp+arg_0] ;~ 0613:402E
cs=0x613;eip=0x004031; 	X(MOV(*(dw*)(raddr(ds,bx+si+0x64)), 0));	// 15755 mov     word ptr [bx+si+64h], 0 ; 64 = car_rc4 ;~ 0613:4031
cs=0x613;eip=0x004036; 	R(JMP(loc_187a5));	// 15756 jmp     short loc_187A5 ;~ 0613:4036
loc_18748:
	// 5322 
cs=0x613;eip=0x004038; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15760 mov     si, [bp+arg_4] ;~ 0613:4038
cs=0x613;eip=0x00403b; 	T(SHL(si, 1));	// 15761 shl     si, 1 ;~ 0613:403B
cs=0x613;eip=0x00403d; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 15762 add     si, [bp+arg_0] ;~ 0613:403D
cs=0x613;eip=0x004040; 	T(ADD(si, 0x54));	// 15763 add     si, 54h ;~ 0613:4040
cs=0x613;eip=0x004043; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 15764 mov     ax, [bp+arg_2] ;~ 0613:4043
cs=0x613;eip=0x004046; 	T(ADD(ax, *(dw*)(raddr(ds,si))));	// 15765 add     ax, [si] ;~ 0613:4046
cs=0x613;eip=0x004048; 	T(CMP(ax, 0x0FEE0));	// 15766 cmp     ax, 0FEE0h ;~ 0613:4048
cs=0x613;eip=0x00404b; 	R(JLE(loc_18764));	// 15767 jle     short loc_18764 ;~ 0613:404B
cs=0x613;eip=0x00404d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 15768 mov     ax, [bp+arg_2] ;~ 0613:404D
cs=0x613;eip=0x004050; 	X(ADD(*(dw*)(raddr(ds,si)), ax));	// 15769 add     [si], ax ;~ 0613:4050
cs=0x613;eip=0x004052; 	R(JMP(loc_18791));	// 15770 jmp     short loc_18791 ;~ 0613:4052
loc_18764:
	// 5323 
cs=0x613;eip=0x004054; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 15774 mov     di, [bp+arg_4] ;~ 0613:4054
cs=0x613;eip=0x004057; 	T(SHL(di, 1));	// 15775 shl     di, 1 ;~ 0613:4057
cs=0x613;eip=0x004059; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15776 mov     bx, [bp+arg_0] ;~ 0613:4059
cs=0x613;eip=0x00405c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 15777 mov     ax, [bp+arg_2] ;~ 0613:405C
cs=0x613;eip=0x00405f; 	T(MOV(cx, ax));	// 15778 mov     cx, ax ;~ 0613:405F
cs=0x613;eip=0x004061; 	T(SHL(ax, 1));	// 15779 shl     ax, 1 ;~ 0613:4061
cs=0x613;eip=0x004063; 	T(ADD(ax, cx));	// 15780 add     ax, cx ;~ 0613:4063
cs=0x613;eip=0x004065; 	T(SAR(ax, 1));	// 15781 sar     ax, 1 ;~ 0613:4065
cs=0x613;eip=0x004067; 	T(SAR(ax, 1));	// 15782 sar     ax, 1 ;~ 0613:4067
cs=0x613;eip=0x004069; 	X(ADD(*(dw*)(raddr(ds,bx+di+0x54)), ax));	// 15783 add     [bx+di+54h], ax ;~ 0613:4069
cs=0x613;eip=0x00406c; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15784 mov     si, [bp+arg_4] ;~ 0613:406C
cs=0x613;eip=0x00406f; 	T(SHL(si, 1));	// 15785 shl     si, 1 ;~ 0613:406F
cs=0x613;eip=0x004071; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_0))));	// 15786 add     si, [bp+arg_0] ;~ 0613:4071
cs=0x613;eip=0x004074; 	T(ADD(si, 0x54));	// 15787 add     si, 54h ;~ 0613:4074
cs=0x613;eip=0x004077; 	T(CMP(*(dw*)(raddr(ds,si)), 0x0FE80));	// 15788 cmp     word ptr [si], 0FE80h ;~ 0613:4077
cs=0x613;eip=0x00407b; 	R(JGE(loc_18791));	// 15789 jge     short loc_18791 ;~ 0613:407B
cs=0x613;eip=0x00407d; 	X(MOV(*(dw*)(raddr(ds,si)), 0x0FE80));	// 15790 mov     word ptr [si], 0FE80h ;~ 0613:407D
loc_18791:
	// 5324 
cs=0x613;eip=0x004081; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 15794 mov     ax, [bp+var_2] ;~ 0613:4081
cs=0x613;eip=0x004084; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 15795 mov     si, [bp+arg_4] ;~ 0613:4084
cs=0x613;eip=0x004087; 	T(SHL(si, 1));	// 15796 shl     si, 1 ;~ 0613:4087
cs=0x613;eip=0x004089; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 15797 mov     bx, [bp+arg_0] ;~ 0613:4089
cs=0x613;eip=0x00408c; 	T(SUB(ax, *(dw*)(raddr(ds,bx+si+0x54))));	// 15798 sub     ax, [bx+si+54h] ;~ 0613:408C
cs=0x613;eip=0x00408f; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 15799 add     ax, [bp+arg_2] ;~ 0613:408F
loc_187a2:
	// 5325 
cs=0x613;eip=0x004092; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 15802 mov     [bp+var_4], ax ;~ 0613:4092
loc_187a5:
	// 5326 
cs=0x613;eip=0x004095; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 15806 mov     ax, [bp+var_2] ;~ 0613:4095
cs=0x613;eip=0x004098; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 15807 add     ax, [bp+var_4] ;~ 0613:4098
cs=0x613;eip=0x00409b; 	X(POP(si));	// 15808 pop     si ;~ 0613:409B
cs=0x613;eip=0x00409c; 	X(POP(di));	// 15809 pop     di ;~ 0613:409C
cs=0x613;eip=0x00409d; 	T(MOV(sp, bp));	// 15810 mov     sp, bp ;~ 0613:409D
cs=0x613;eip=0x00409f; 	X(POP(bp));	// 15811 pop     bp ;~ 0613:409F
cs=0x613;eip=0x0040a0; 	R(RETF(0));	// 15812 retf ;~ 0613:40A0
upd_statef20_from_steer_input:
	// 15822 
#undef var_4
#define var_4 -4
	// 15824 var_4           = byte ptr -4 ;~ 0613:40A2
#undef arg_0
#define arg_0 6
	// 15825 arg_0           = byte ptr  6 ;~ 0613:40A2
ret_613_40a2:
	// 5327 
cs=0x613;eip=0x0040a2; 	X(PUSH(bp));	// 15827 push    bp ;~ 0613:40A2
cs=0x613;eip=0x0040a3; 	T(MOV(bp, sp));	// 15828 mov     bp, sp ;~ 0613:40A3
cs=0x613;eip=0x0040a5; 	T(SUB(sp, 6));	// 15829 sub     sp, 6 ;~ 0613:40A5
cs=0x613;eip=0x0040a8; 	X(PUSH(di));	// 15830 push    di ;~ 0613:40A8
cs=0x613;eip=0x0040a9; 	X(PUSH(si));	// 15831 push    si ;~ 0613:40A9
cs=0x613;eip=0x0040aa; 	T(MOV(di, word_44606));	// 15832 mov     di, word_44606 ;~ 0613:40AA
cs=0x613;eip=0x0040ae; 	T(MOV(ax, word_44612));	// 15833 mov     ax, word_44612 ;~ 0613:40AE
cs=0x613;eip=0x0040b1; 	T(MOV(cl, 0x0A));	// 15834 mov     cl, 0Ah ;~ 0613:40B1
cs=0x613;eip=0x0040b3; 	T(SHR(ax, cl));	// 15835 shr     ax, cl ;~ 0613:40B3
cs=0x613;eip=0x0040b5; 	T(AND(al, 0x0FC));	// 15836 and     al, 0FCh ;~ 0613:40B5
cs=0x613;eip=0x0040b7; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 15837 mov     [bp+var_4], al ;~ 0613:40B7
cs=0x613;eip=0x0040ba; 	T(CBW);	// 15838 cbw ;~ 0613:40BA
cs=0x613;eip=0x0040bb; 	T(MOV(bx, ax));	// 15839 mov     bx, ax ;~ 0613:40BB
cs=0x613;eip=0x0040bd; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 15840 mov     al, [bp+arg_0] ;~ 0613:40BD
cs=0x613;eip=0x0040c0; 	T(CBW);	// 15841 cbw ;~ 0613:40C0
cs=0x613;eip=0x0040c1; 	T(ADD(bx, ax));	// 15842 add     bx, ax ;~ 0613:40C1
cs=0x613;eip=0x0040c3; 	T(ADD(bx, steerwhlresptable_ptr));	// 15843 add     bx, steerWhlRespTable_ptr ;~ 0613:40C3
cs=0x613;eip=0x0040c7; 	T(MOV(al, *(raddr(ds,bx))));	// 15844 mov     al, [bx] ;~ 0613:40C7
cs=0x613;eip=0x0040c9; 	T(CBW);	// 15845 cbw ;~ 0613:40C9
cs=0x613;eip=0x0040ca; 	T(MOV(si, ax));	// 15846 mov     si, ax ;~ 0613:40CA
cs=0x613;eip=0x0040cc; 	T(OR(si, si));	// 15847 or      si, si ;~ 0613:40CC
cs=0x613;eip=0x0040ce; 	R(JLE(loc_187e8));	// 15848 jle     short loc_187E8 ;~ 0613:40CE
cs=0x613;eip=0x0040d0; 	T(CMP(di, 0x0FFFF));	// 15849 cmp     di, 0FFFFh ;~ 0613:40D0
cs=0x613;eip=0x0040d3; 	R(JGE(loc_187f5));	// 15850 jge     short loc_187F5 ;~ 0613:40D3
cs=0x613;eip=0x0040d5; 	R(JMP(loc_187f1));	// 15851 jmp     short loc_187F1 ;~ 0613:40D5
loc_187e8:
	// 5328 
cs=0x613;eip=0x0040d8; 	T(OR(si, si));	// 15856 or      si, si ;~ 0613:40D8
cs=0x613;eip=0x0040da; 	R(JZ(loc_187f5));	// 15857 jz      short loc_187F5 ;~ 0613:40DA
cs=0x613;eip=0x0040dc; 	T(CMP(di, 1));	// 15858 cmp     di, 1 ;~ 0613:40DC
cs=0x613;eip=0x0040df; 	R(JLE(loc_187f5));	// 15859 jle     short loc_187F5 ;~ 0613:40DF
loc_187f1:
	// 5329 
cs=0x613;eip=0x0040e1; 	T(MOV(cl, 2));	// 15862 mov     cl, 2 ;~ 0613:40E1
cs=0x613;eip=0x0040e3; 	T(SHL(si, cl));	// 15863 shl     si, cl ;~ 0613:40E3
loc_187f5:
	// 5330 
cs=0x613;eip=0x0040e5; 	T(OR(si, si));	// 15867 or      si, si ;~ 0613:40E5
cs=0x613;eip=0x0040e7; 	R(JNZ(loc_18835));	// 15868 jnz     short loc_18835 ;~ 0613:40E7
cs=0x613;eip=0x0040e9; 	T(CMP(word_44612, 0));	// 15869 cmp     word_44612, 0 ;~ 0613:40E9
cs=0x613;eip=0x0040ee; 	R(JZ(loc_18835));	// 15870 jz      short loc_18835 ;~ 0613:40EE
cs=0x613;eip=0x0040f0; 	T(OR(di, di));	// 15871 or      di, di ;~ 0613:40F0
cs=0x613;eip=0x0040f2; 	R(JZ(loc_18835));	// 15872 jz      short loc_18835 ;~ 0613:40F2
cs=0x613;eip=0x0040f4; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 15873 mov     al, [bp+var_4] ;~ 0613:40F4
cs=0x613;eip=0x0040f7; 	T(CBW);	// 15874 cbw ;~ 0613:40F7
cs=0x613;eip=0x0040f8; 	T(MOV(bx, ax));	// 15875 mov     bx, ax ;~ 0613:40F8
cs=0x613;eip=0x0040fa; 	T(ADD(bx, steerwhlresptable_ptr));	// 15876 add     bx, steerWhlRespTable_ptr ;~ 0613:40FA
cs=0x613;eip=0x0040fe; 	T(MOV(al, *(raddr(ds,bx+1))));	// 15877 mov     al, [bx+1]      ; tables?! With 40h values!! ;~ 0613:40FE
cs=0x613;eip=0x004101; 	T(CBW);	// 15878 cbw ;~ 0613:4101
cs=0x613;eip=0x004102; 	T(MOV(si, ax));	// 15879 mov     si, ax ;~ 0613:4102
cs=0x613;eip=0x004104; 	T(SHL(si, 1));	// 15880 shl     si, 1 ;~ 0613:4104
cs=0x613;eip=0x004106; 	T(OR(di, di));	// 15881 or      di, di ;~ 0613:4106
cs=0x613;eip=0x004108; 	R(JGE(loc_18820));	// 15882 jge     short loc_18820 ;~ 0613:4108
cs=0x613;eip=0x00410a; 	T(MOV(ax, di));	// 15883 mov     ax, di ;~ 0613:410A
cs=0x613;eip=0x00410c; 	T(NEG(ax));	// 15884 neg     ax ;~ 0613:410C
cs=0x613;eip=0x00410e; 	R(JMP(loc_18822));	// 15885 jmp     short loc_18822 ;~ 0613:410E
loc_18820:
	// 5331 
cs=0x613;eip=0x004110; 	T(MOV(ax, di));	// 15889 mov     ax, di ;~ 0613:4110
loc_18822:
	// 5332 
cs=0x613;eip=0x004112; 	T(CMP(ax, si));	// 15892 cmp     ax, si ;~ 0613:4112
cs=0x613;eip=0x004114; 	R(JLE(loc_1882e));	// 15893 jle     short loc_1882E ;~ 0613:4114
cs=0x613;eip=0x004116; 	T(OR(di, di));	// 15894 or      di, di ;~ 0613:4116
cs=0x613;eip=0x004118; 	R(JLE(loc_18835));	// 15895 jle     short loc_18835 ;~ 0613:4118
cs=0x613;eip=0x00411a; 	T(MOV(ax, si));	// 15896 mov     ax, si ;~ 0613:411A
cs=0x613;eip=0x00411c; 	R(JMP(loc_18831));	// 15897 jmp     short loc_18831 ;~ 0613:411C
loc_1882e:
	// 5333 
cs=0x613;eip=0x00411e; 	T(MOV(ax, word_44606));	// 15901 mov     ax, word_44606 ;~ 0613:411E
loc_18831:
	// 5334 
cs=0x613;eip=0x004121; 	T(NEG(ax));	// 15904 neg     ax ;~ 0613:4121
cs=0x613;eip=0x004123; 	T(MOV(si, ax));	// 15905 mov     si, ax ;~ 0613:4123
loc_18835:
	// 5335 
cs=0x613;eip=0x004125; 	T(CMP(framespersec, 0x0A));	// 15909 cmp     framespersec, 0Ah ;~ 0613:4125
cs=0x613;eip=0x00412a; 	R(JNZ(loc_18850));	// 15910 jnz     short loc_18850 ;~ 0613:412A
cs=0x613;eip=0x00412c; 	T(CMP(si, 0x0A0));	// 15911 cmp     si, 0A0h ; ' ' ;~ 0613:412C
cs=0x613;eip=0x004130; 	R(JLE(loc_18845));	// 15912 jle     short loc_18845 ;~ 0613:4130
cs=0x613;eip=0x004132; 	T(MOV(si, 0x0A0));	// 15913 mov     si, 0A0h ; ' ' ;~ 0613:4132
loc_18845:
	// 5336 
cs=0x613;eip=0x004135; 	T(CMP(si, 0x0FF60));	// 15916 cmp     si, 0FF60h ;~ 0613:4135
cs=0x613;eip=0x004139; 	R(JGE(loc_18860));	// 15917 jge     short loc_18860 ;~ 0613:4139
cs=0x613;eip=0x00413b; 	T(MOV(si, 0x0FF60));	// 15918 mov     si, 0FF60h ;~ 0613:413B
cs=0x613;eip=0x00413e; 	R(JMP(loc_18860));	// 15919 jmp     short loc_18860 ;~ 0613:413E
loc_18850:
	// 5337 
cs=0x613;eip=0x004140; 	T(CMP(si, 0x50));	// 15923 cmp     si, 50h ; 'P' ;~ 0613:4140
cs=0x613;eip=0x004143; 	R(JLE(loc_18858));	// 15924 jle     short loc_18858 ;~ 0613:4143
cs=0x613;eip=0x004145; 	T(MOV(si, 0x50));	// 15925 mov     si, 50h ; 'P' ;~ 0613:4145
loc_18858:
	// 5338 
cs=0x613;eip=0x004148; 	T(CMP(si, 0x0FFB0));	// 15928 cmp     si, 0FFB0h ;~ 0613:4148
cs=0x613;eip=0x00414b; 	R(JGE(loc_18860));	// 15929 jge     short loc_18860 ;~ 0613:414B
cs=0x613;eip=0x00414d; 	T(MOV(si, 0x0FFB0));	// 15930 mov     si, 0FFB0h ;~ 0613:414D
loc_18860:
	// 5339 
cs=0x613;eip=0x004150; 	T(ADD(di, si));	// 15934 add     di, si ;~ 0613:4150
cs=0x613;eip=0x004152; 	T(CMP(di, 0x0F0));	// 15935 cmp     di, 0F0h ; 'ð' ;~ 0613:4152
cs=0x613;eip=0x004156; 	R(JLE(loc_1886b));	// 15936 jle     short loc_1886B ;~ 0613:4156
cs=0x613;eip=0x004158; 	T(MOV(di, 0x0F0));	// 15937 mov     di, 0F0h ; 'ð' ;~ 0613:4158
loc_1886b:
	// 5340 
cs=0x613;eip=0x00415b; 	T(CMP(di, 0x0FF10));	// 15940 cmp     di, 0FF10h ;~ 0613:415B
cs=0x613;eip=0x00415f; 	R(JGE(loc_18874));	// 15941 jge     short loc_18874 ;~ 0613:415F
cs=0x613;eip=0x004161; 	T(MOV(di, 0x0FF10));	// 15942 mov     di, 0FF10h ;~ 0613:4161
loc_18874:
	// 5341 
cs=0x613;eip=0x004164; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 15945 mov     al, [bp+var_4] ;~ 0613:4164
cs=0x613;eip=0x004167; 	T(CBW);	// 15946 cbw ;~ 0613:4167
cs=0x613;eip=0x004168; 	T(MOV(bx, ax));	// 15947 mov     bx, ax ;~ 0613:4168
cs=0x613;eip=0x00416a; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 15948 mov     al, [bp+arg_0] ;~ 0613:416A
cs=0x613;eip=0x00416d; 	T(CBW);	// 15949 cbw ;~ 0613:416D
cs=0x613;eip=0x00416e; 	T(ADD(bx, ax));	// 15950 add     bx, ax ;~ 0613:416E
cs=0x613;eip=0x004170; 	T(ADD(bx, steerwhlresptable_ptr));	// 15951 add     bx, steerWhlRespTable_ptr ;~ 0613:4170
cs=0x613;eip=0x004174; 	T(CMP(*(raddr(ds,bx)), 0));	// 15952 cmp     byte ptr [bx], 0 ;~ 0613:4174
cs=0x613;eip=0x004177; 	R(JNZ(loc_18899));	// 15953 jnz     short loc_18899 ;~ 0613:4177
cs=0x613;eip=0x004179; 	X(PUSH(di));	// 15954 push    di              ; int ;~ 0613:4179
cs=0x613;eip=0x00417a; 	R(CALLF(_abs,0));	// 15955 call    _abs ;~ 0613:417A
cs=0x613;eip=0x00417f; 	T(ADD(sp, 2));	// 15956 add     sp, 2 ;~ 0613:417F
cs=0x613;eip=0x004182; 	T(CMP(ax, 8));	// 15957 cmp     ax, 8 ;~ 0613:4182
cs=0x613;eip=0x004185; 	R(JGE(loc_18899));	// 15958 jge     short loc_18899 ;~ 0613:4185
cs=0x613;eip=0x004187; 	T(SUB(di, di));	// 15959 sub     di, di ;~ 0613:4187
loc_18899:
	// 5342 
cs=0x613;eip=0x004189; 	X(MOV(word_44606, di));	// 15963 mov     word_44606, di ;~ 0613:4189
cs=0x613;eip=0x00418d; 	X(POP(si));	// 15964 pop     si ;~ 0613:418D
cs=0x613;eip=0x00418e; 	X(POP(di));	// 15965 pop     di ;~ 0613:418E
cs=0x613;eip=0x00418f; 	T(MOV(sp, bp));	// 15966 mov     sp, bp ;~ 0613:418F
cs=0x613;eip=0x004191; 	X(POP(bp));	// 15967 pop     bp ;~ 0613:4191
cs=0x613;eip=0x004192; 	R(RETF(0));	// 15968 retf ;~ 0613:4192
audio_carstate:
	// 15978 
#undef var_34
#define var_34 -0x34
	// 15981 var_34          = dword ptr -34h ;~ 0613:4194
#undef var_30
#define var_30 -0x30
	// 15982 var_30          = word ptr -30h ;~ 0613:4194
#undef var_2e
#define var_2e -0x2E
	// 15983 var_2E          = word ptr -2Eh ;~ 0613:4194
#undef var_2c
#define var_2c -0x2C
	// 15984 var_2C          = word ptr -2Ch ;~ 0613:4194
#undef var_2a
#define var_2a -0x2A
	// 15985 var_2A          = word ptr -2Ah ;~ 0613:4194
#undef var_28
#define var_28 -0x28
	// 15986 var_28          = word ptr -28h ;~ 0613:4194
#undef var_26
#define var_26 -0x26
	// 15987 var_26          = word ptr -26h ;~ 0613:4194
#undef var_24
#define var_24 -0x24
	// 15988 var_24          = word ptr -24h ;~ 0613:4194
#undef var_22
#define var_22 -0x22
	// 15989 var_22          = word ptr -22h ;~ 0613:4194
#undef var_20
#define var_20 -0x20
	// 15990 var_20          = word ptr -20h ;~ 0613:4194
#undef var_1e
#define var_1e -0x1E
	// 15991 var_1E          = word ptr -1Eh ;~ 0613:4194
#undef var_1c
#define var_1c -0x1C
	// 15992 var_1C          = word ptr -1Ch ;~ 0613:4194
#undef var_1a
#define var_1a -0x1A
	// 15993 var_1A          = word ptr -1Ah ;~ 0613:4194
#undef var_18
#define var_18 -0x18
	// 15994 var_18          = word ptr -18h ;~ 0613:4194
#undef var_16
#define var_16 -0x16
	// 15995 var_16          = byte ptr -16h ;~ 0613:4194
#undef var_14
#define var_14 -0x14
	// 15996 var_14          = word ptr -14h ;~ 0613:4194
#undef var_12
#define var_12 -0x12
	// 15997 var_12          = word ptr -12h ;~ 0613:4194
#undef var_10
#define var_10 -0x10
	// 15998 var_10          = word ptr -10h ;~ 0613:4194
#undef var_e
#define var_e -0x0E
	// 15999 var_E           = word ptr -0Eh ;~ 0613:4194
#undef var_c
#define var_c -0x0C
	// 16000 var_C           = word ptr -0Ch ;~ 0613:4194
#undef var_a
#define var_a -0x0A
	// 16001 var_A           = word ptr -0Ah ;~ 0613:4194
#undef var_8
#define var_8 -8
	// 16002 var_8           = word ptr -8 ;~ 0613:4194
#undef var_6
#define var_6 -6
	// 16003 var_6           = word ptr -6 ;~ 0613:4194
#undef var_4
#define var_4 -4
	// 16004 var_4           = word ptr -4 ;~ 0613:4194
#undef var_2
#define var_2 -2
	// 16005 var_2           = word ptr -2 ;~ 0613:4194
ret_613_4194:
	// 5343 
cs=0x613;eip=0x004194; 	X(PUSH(bp));	// 16007 push    bp ;~ 0613:4194
cs=0x613;eip=0x004195; 	T(MOV(bp, sp));	// 16008 mov     bp, sp ;~ 0613:4195
cs=0x613;eip=0x004197; 	T(SUB(sp, 0x34));	// 16009 sub     sp, 34h ;~ 0613:4197
cs=0x613;eip=0x00419a; 	X(PUSH(di));	// 16010 push    di ;~ 0613:419A
cs=0x613;eip=0x00419b; 	X(PUSH(si));	// 16011 push    si ;~ 0613:419B
cs=0x613;eip=0x00419c; 	T(CMP(is_in_replay, 0));	// 16012 cmp     is_in_replay, 0 ;~ 0613:419C
cs=0x613;eip=0x0041a1; 	R(JNZ(loc_188b6));	// 16013 jnz     short loc_188B6 ;~ 0613:41A1
cs=0x613;eip=0x0041a3; 	R(JMP(loc_1893a));	// 16014 jmp     loc_1893A ;~ 0613:41A3
loc_188b6:
	// 5344 
cs=0x613;eip=0x0041a6; 	T(CMP(byte_459d8, 0));	// 16018 cmp     byte_459D8, 0 ;~ 0613:41A6
cs=0x613;eip=0x0041ab; 	R(JZ(loc_18925));	// 16019 jz      short loc_18925 ;~ 0613:41AB
cs=0x613;eip=0x0041ad; 	T(MOV(ax, word_449e4));	// 16020 mov     ax, word_449E4 ;~ 0613:41AD
cs=0x613;eip=0x0041b0; 	X(MOV(word_44d1e, ax));	// 16021 mov     word_44D1E, ax ;~ 0613:41B0
cs=0x613;eip=0x0041b3; 	T(TEST(byte_42d26, 6));	// 16022 test    byte_42D26, 6 ;~ 0613:41B3
cs=0x613;eip=0x0041b8; 	R(JZ(loc_188d6));	// 16023 jz      short loc_188D6 ;~ 0613:41B8
cs=0x613;eip=0x0041ba; 	X(PUSH(word_43964));	// 16024 push    word_43964 ;~ 0613:41BA
cs=0x613;eip=0x0041be; 	R(CALLF(audio_op_unk7,0));	// 16025 call    audio_op_unk7 ;~ 0613:41BE
cs=0x613;eip=0x0041c3; 	T(ADD(sp, 2));	// 16026 add     sp, 2 ;~ 0613:41C3
loc_188d6:
	// 5345 
cs=0x613;eip=0x0041c6; 	T(TEST(byte_42d26, 1));	// 16029 test    byte_42D26, 1 ;~ 0613:41C6
cs=0x613;eip=0x0041cb; 	R(JZ(loc_188e9));	// 16030 jz      short loc_188E9 ;~ 0613:41CB
cs=0x613;eip=0x0041cd; 	X(PUSH(word_43964));	// 16031 push    word_43964 ;~ 0613:41CD
cs=0x613;eip=0x0041d1; 	R(CALLF(audio_function2,0));	// 16032 call    audio_function2 ;~ 0613:41D1
cs=0x613;eip=0x0041d6; 	T(ADD(sp, 2));	// 16033 add     sp, 2 ;~ 0613:41D6
loc_188e9:
	// 5346 
cs=0x613;eip=0x0041d9; 	T(CMP(byte_449aa, 0));	// 16036 cmp     byte_449AA, 0 ;~ 0613:41D9
cs=0x613;eip=0x0041de; 	R(JZ(loc_18916));	// 16037 jz      short loc_18916 ;~ 0613:41DE
cs=0x613;eip=0x0041e0; 	T(TEST(byte_42d2a, 6));	// 16038 test    byte_42D2A, 6 ;~ 0613:41E0
cs=0x613;eip=0x0041e5; 	R(JZ(loc_18903));	// 16039 jz      short loc_18903 ;~ 0613:41E5
cs=0x613;eip=0x0041e7; 	X(PUSH(word_4408c));	// 16040 push    word_4408C ;~ 0613:41E7
cs=0x613;eip=0x0041eb; 	R(CALLF(audio_op_unk7,0));	// 16041 call    audio_op_unk7 ;~ 0613:41EB
cs=0x613;eip=0x0041f0; 	T(ADD(sp, 2));	// 16042 add     sp, 2 ;~ 0613:41F0
loc_18903:
	// 5347 
cs=0x613;eip=0x0041f3; 	T(TEST(byte_42d2a, 1));	// 16045 test    byte_42D2A, 1 ;~ 0613:41F3
cs=0x613;eip=0x0041f8; 	R(JZ(loc_18916));	// 16046 jz      short loc_18916 ;~ 0613:41F8
cs=0x613;eip=0x0041fa; 	X(PUSH(word_4408c));	// 16047 push    word_4408C ;~ 0613:41FA
cs=0x613;eip=0x0041fe; 	R(CALLF(audio_function2,0));	// 16048 call    audio_function2 ;~ 0613:41FE
cs=0x613;eip=0x004203; 	T(ADD(sp, 2));	// 16049 add     sp, 2 ;~ 0613:4203
loc_18916:
	// 5348 
cs=0x613;eip=0x004206; 	X(MOV(byte_459d8, 0));	// 16053 mov     byte_459D8, 0 ;~ 0613:4206
cs=0x613;eip=0x00420b; 	X(MOV(byte_42d26, 0));	// 16054 mov     byte_42D26, 0 ;~ 0613:420B
cs=0x613;eip=0x004210; 	X(MOV(byte_42d2a, 0));	// 16055 mov     byte_42D2A, 0 ;~ 0613:4210
loc_18925:
	// 5349 
cs=0x613;eip=0x004215; 	T(MOV(al, byte_3be02));	// 16058 mov     al, byte_3BE02 ;~ 0613:4215
cs=0x613;eip=0x004218; 	T(CMP(is_in_replay, al));	// 16059 cmp     is_in_replay, al ;~ 0613:4218
cs=0x613;eip=0x00421c; 	R(JNZ(loc_18931));	// 16060 jnz     short loc_18931 ;~ 0613:421C
cs=0x613;eip=0x00421e; 	R(JMP(loc_18ccc));	// 16061 jmp     loc_18CCC ;~ 0613:421E
loc_18931:
	// 5350 
cs=0x613;eip=0x004221; 	R(CALLF(sub_38178,0));	// 16065 call    sub_38178 ;~ 0613:4221
cs=0x613;eip=0x004226; 	R(JMP(loc_18ccc));	// 16066 jmp     loc_18CCC ;~ 0613:4226
loc_1893a:
	// 5351 
cs=0x613;eip=0x00422a; 	T(MOV(ax, word_445f2));	// 16071 mov     ax, word_445F2 ;~ 0613:422A
cs=0x613;eip=0x00422d; 	T(MOV(dx, word_445f4));	// 16072 mov     dx, word_445F4 ;~ 0613:422D
cs=0x613;eip=0x004231; 	T(MOV(cl, 6));	// 16073 mov     cl, 6 ;~ 0613:4231
loc_18943:
	// 5352 
cs=0x613;eip=0x004233; 	T(SAR(dx, 1));	// 16076 sar     dx, 1 ;~ 0613:4233
cs=0x613;eip=0x004235; 	T(RCR(ax, 1));	// 16077 rcr     ax, 1 ;~ 0613:4235
cs=0x613;eip=0x004237; 	T(DEC(cl));	// 16078 dec     cl ;~ 0613:4237
cs=0x613;eip=0x004239; 	R(JNZ(loc_18943));	// 16079 jnz     short loc_18943 ;~ 0613:4239
cs=0x613;eip=0x00423b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 16080 mov     [bp+var_1C], ax ;~ 0613:423B
cs=0x613;eip=0x00423e; 	T(MOV(ax, word_445f6));	// 16081 mov     ax, word_445F6 ;~ 0613:423E
cs=0x613;eip=0x004241; 	T(MOV(dx, word_445f8));	// 16082 mov     dx, word_445F8 ;~ 0613:4241
cs=0x613;eip=0x004245; 	T(MOV(cl, 6));	// 16083 mov     cl, 6 ;~ 0613:4245
loc_18957:
	// 5353 
cs=0x613;eip=0x004247; 	T(SAR(dx, 1));	// 16086 sar     dx, 1 ;~ 0613:4247
cs=0x613;eip=0x004249; 	T(RCR(ax, 1));	// 16087 rcr     ax, 1 ;~ 0613:4249
cs=0x613;eip=0x00424b; 	T(DEC(cl));	// 16088 dec     cl ;~ 0613:424B
cs=0x613;eip=0x00424d; 	R(JNZ(loc_18957));	// 16089 jnz     short loc_18957 ;~ 0613:424D
cs=0x613;eip=0x00424f; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 16090 mov     [bp+var_1A], ax ;~ 0613:424F
cs=0x613;eip=0x004252; 	T(MOV(ax, word_445fa));	// 16091 mov     ax, word_445FA ;~ 0613:4252
cs=0x613;eip=0x004255; 	T(MOV(dx, word_445fc));	// 16092 mov     dx, word_445FC ;~ 0613:4255
cs=0x613;eip=0x004259; 	T(MOV(cl, 6));	// 16093 mov     cl, 6 ;~ 0613:4259
loc_1896b:
	// 5354 
cs=0x613;eip=0x00425b; 	T(SAR(dx, 1));	// 16096 sar     dx, 1 ;~ 0613:425B
cs=0x613;eip=0x00425d; 	T(RCR(ax, 1));	// 16097 rcr     ax, 1 ;~ 0613:425D
cs=0x613;eip=0x00425f; 	T(DEC(cl));	// 16098 dec     cl ;~ 0613:425F
cs=0x613;eip=0x004261; 	R(JNZ(loc_1896b));	// 16099 jnz     short loc_1896B ;~ 0613:4261
cs=0x613;eip=0x004263; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 16100 mov     [bp+var_18], ax ;~ 0613:4263
cs=0x613;eip=0x004266; 	T(MOV(ax, word_445e6));	// 16101 mov     ax, word_445E6 ;~ 0613:4266
cs=0x613;eip=0x004269; 	T(MOV(dx, word_445e8));	// 16102 mov     dx, word_445E8 ;~ 0613:4269
cs=0x613;eip=0x00426d; 	T(MOV(cl, 6));	// 16103 mov     cl, 6 ;~ 0613:426D
loc_1897f:
	// 5355 
cs=0x613;eip=0x00426f; 	T(SAR(dx, 1));	// 16106 sar     dx, 1 ;~ 0613:426F
cs=0x613;eip=0x004271; 	T(RCR(ax, 1));	// 16107 rcr     ax, 1 ;~ 0613:4271
cs=0x613;eip=0x004273; 	T(DEC(cl));	// 16108 dec     cl ;~ 0613:4273
cs=0x613;eip=0x004275; 	R(JNZ(loc_1897f));	// 16109 jnz     short loc_1897F ;~ 0613:4275
cs=0x613;eip=0x004277; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 16110 mov     [bp+var_8], ax ;~ 0613:4277
cs=0x613;eip=0x00427a; 	T(MOV(ax, word_445ea));	// 16111 mov     ax, word_445EA ;~ 0613:427A
cs=0x613;eip=0x00427d; 	T(MOV(dx, word_445ec));	// 16112 mov     dx, word_445EC ;~ 0613:427D
cs=0x613;eip=0x004281; 	T(MOV(cl, 6));	// 16113 mov     cl, 6 ;~ 0613:4281
loc_18993:
	// 5356 
cs=0x613;eip=0x004283; 	T(SAR(dx, 1));	// 16116 sar     dx, 1 ;~ 0613:4283
cs=0x613;eip=0x004285; 	T(RCR(ax, 1));	// 16117 rcr     ax, 1 ;~ 0613:4285
cs=0x613;eip=0x004287; 	T(DEC(cl));	// 16118 dec     cl ;~ 0613:4287
cs=0x613;eip=0x004289; 	R(JNZ(loc_18993));	// 16119 jnz     short loc_18993 ;~ 0613:4289
cs=0x613;eip=0x00428b; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 16120 mov     [bp+var_6], ax ;~ 0613:428B
cs=0x613;eip=0x00428e; 	T(MOV(ax, word_445ee));	// 16121 mov     ax, word_445EE ;~ 0613:428E
cs=0x613;eip=0x004291; 	T(MOV(dx, word_445f0));	// 16122 mov     dx, word_445F0 ;~ 0613:4291
cs=0x613;eip=0x004295; 	T(MOV(cl, 6));	// 16123 mov     cl, 6 ;~ 0613:4295
loc_189a7:
	// 5357 
cs=0x613;eip=0x004297; 	T(SAR(dx, 1));	// 16126 sar     dx, 1 ;~ 0613:4297
cs=0x613;eip=0x004299; 	T(RCR(ax, 1));	// 16127 rcr     ax, 1 ;~ 0613:4299
cs=0x613;eip=0x00429b; 	T(DEC(cl));	// 16128 dec     cl ;~ 0613:429B
cs=0x613;eip=0x00429d; 	R(JNZ(loc_189a7));	// 16129 jnz     short loc_189A7 ;~ 0613:429D
cs=0x613;eip=0x00429f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 16130 mov     [bp+var_4], ax ;~ 0613:429F
cs=0x613;eip=0x0042a2; 	T(CMP(byte_449aa, 0));	// 16131 cmp     byte_449AA, 0 ;~ 0613:42A2
cs=0x613;eip=0x0042a7; 	R(JZ(loc_18a31));	// 16132 jz      short loc_18A31 ;~ 0613:42A7
cs=0x613;eip=0x0042a9; 	T(MOV(ax, word_446c2));	// 16133 mov     ax, word_446C2 ;~ 0613:42A9
cs=0x613;eip=0x0042ac; 	T(MOV(dx, word_446c4));	// 16134 mov     dx, word_446C4 ;~ 0613:42AC
cs=0x613;eip=0x0042b0; 	T(MOV(cl, 6));	// 16135 mov     cl, 6 ;~ 0613:42B0
loc_189c2:
	// 5358 
cs=0x613;eip=0x0042b2; 	T(SAR(dx, 1));	// 16138 sar     dx, 1 ;~ 0613:42B2
cs=0x613;eip=0x0042b4; 	T(RCR(ax, 1));	// 16139 rcr     ax, 1 ;~ 0613:42B4
cs=0x613;eip=0x0042b6; 	T(DEC(cl));	// 16140 dec     cl ;~ 0613:42B6
cs=0x613;eip=0x0042b8; 	R(JNZ(loc_189c2));	// 16141 jnz     short loc_189C2 ;~ 0613:42B8
cs=0x613;eip=0x0042ba; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 16142 mov     [bp+var_24], ax ;~ 0613:42BA
cs=0x613;eip=0x0042bd; 	T(MOV(ax, word_446c6));	// 16143 mov     ax, word_446C6 ;~ 0613:42BD
cs=0x613;eip=0x0042c0; 	T(MOV(dx, word_446c8));	// 16144 mov     dx, word_446C8 ;~ 0613:42C0
cs=0x613;eip=0x0042c4; 	T(MOV(cl, 6));	// 16145 mov     cl, 6 ;~ 0613:42C4
loc_189d6:
	// 5359 
cs=0x613;eip=0x0042c6; 	T(SAR(dx, 1));	// 16148 sar     dx, 1 ;~ 0613:42C6
cs=0x613;eip=0x0042c8; 	T(RCR(ax, 1));	// 16149 rcr     ax, 1 ;~ 0613:42C8
cs=0x613;eip=0x0042ca; 	T(DEC(cl));	// 16150 dec     cl ;~ 0613:42CA
cs=0x613;eip=0x0042cc; 	R(JNZ(loc_189d6));	// 16151 jnz     short loc_189D6 ;~ 0613:42CC
cs=0x613;eip=0x0042ce; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 16152 mov     [bp+var_22], ax ;~ 0613:42CE
cs=0x613;eip=0x0042d1; 	T(MOV(ax, word_446ca));	// 16153 mov     ax, word_446CA ;~ 0613:42D1
cs=0x613;eip=0x0042d4; 	T(MOV(dx, word_446cc));	// 16154 mov     dx, word_446CC ;~ 0613:42D4
cs=0x613;eip=0x0042d8; 	T(MOV(cl, 6));	// 16155 mov     cl, 6 ;~ 0613:42D8
loc_189ea:
	// 5360 
cs=0x613;eip=0x0042da; 	T(SAR(dx, 1));	// 16158 sar     dx, 1 ;~ 0613:42DA
cs=0x613;eip=0x0042dc; 	T(RCR(ax, 1));	// 16159 rcr     ax, 1 ;~ 0613:42DC
cs=0x613;eip=0x0042de; 	T(DEC(cl));	// 16160 dec     cl ;~ 0613:42DE
cs=0x613;eip=0x0042e0; 	R(JNZ(loc_189ea));	// 16161 jnz     short loc_189EA ;~ 0613:42E0
cs=0x613;eip=0x0042e2; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 16162 mov     [bp+var_20], ax ;~ 0613:42E2
cs=0x613;eip=0x0042e5; 	T(MOV(ax, word_446b6));	// 16163 mov     ax, word_446B6 ;~ 0613:42E5
cs=0x613;eip=0x0042e8; 	T(MOV(dx, word_446b8));	// 16164 mov     dx, word_446B8 ;~ 0613:42E8
cs=0x613;eip=0x0042ec; 	T(MOV(cl, 6));	// 16165 mov     cl, 6 ;~ 0613:42EC
loc_189fe:
	// 5361 
cs=0x613;eip=0x0042ee; 	T(SAR(dx, 1));	// 16168 sar     dx, 1 ;~ 0613:42EE
cs=0x613;eip=0x0042f0; 	T(RCR(ax, 1));	// 16169 rcr     ax, 1 ;~ 0613:42F0
cs=0x613;eip=0x0042f2; 	T(DEC(cl));	// 16170 dec     cl ;~ 0613:42F2
cs=0x613;eip=0x0042f4; 	R(JNZ(loc_189fe));	// 16171 jnz     short loc_189FE ;~ 0613:42F4
cs=0x613;eip=0x0042f6; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 16172 mov     [bp+var_E], ax ;~ 0613:42F6
cs=0x613;eip=0x0042f9; 	T(MOV(ax, word_446ba));	// 16173 mov     ax, word_446BA ;~ 0613:42F9
cs=0x613;eip=0x0042fc; 	T(MOV(dx, word_446bc));	// 16174 mov     dx, word_446BC ;~ 0613:42FC
cs=0x613;eip=0x004300; 	T(MOV(cl, 6));	// 16175 mov     cl, 6 ;~ 0613:4300
loc_18a12:
	// 5362 
cs=0x613;eip=0x004302; 	T(SAR(dx, 1));	// 16178 sar     dx, 1 ;~ 0613:4302
cs=0x613;eip=0x004304; 	T(RCR(ax, 1));	// 16179 rcr     ax, 1 ;~ 0613:4304
cs=0x613;eip=0x004306; 	T(DEC(cl));	// 16180 dec     cl ;~ 0613:4306
cs=0x613;eip=0x004308; 	R(JNZ(loc_18a12));	// 16181 jnz     short loc_18A12 ;~ 0613:4308
cs=0x613;eip=0x00430a; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 16182 mov     [bp+var_C], ax ;~ 0613:430A
cs=0x613;eip=0x00430d; 	T(MOV(ax, word_446be));	// 16183 mov     ax, word_446BE ;~ 0613:430D
cs=0x613;eip=0x004310; 	T(MOV(dx, word_446c0));	// 16184 mov     dx, word_446C0 ;~ 0613:4310
cs=0x613;eip=0x004314; 	T(MOV(cl, 6));	// 16185 mov     cl, 6 ;~ 0613:4314
loc_18a26:
	// 5363 
cs=0x613;eip=0x004316; 	T(SAR(dx, 1));	// 16188 sar     dx, 1 ;~ 0613:4316
cs=0x613;eip=0x004318; 	T(RCR(ax, 1));	// 16189 rcr     ax, 1 ;~ 0613:4318
cs=0x613;eip=0x00431a; 	T(DEC(cl));	// 16190 dec     cl ;~ 0613:431A
cs=0x613;eip=0x00431c; 	R(JNZ(loc_18a26));	// 16191 jnz     short loc_18A26 ;~ 0613:431C
cs=0x613;eip=0x00431e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 16192 mov     [bp+var_A], ax ;~ 0613:431E
loc_18a31:
	// 5364 
cs=0x613;eip=0x004321; 	T(MOV(al, cameramode));	// 16195 mov     al, cameramode ;~ 0613:4321
cs=0x613;eip=0x004324; 	T(CBW);	// 16196 cbw ;~ 0613:4324
cs=0x613;eip=0x004325; 	T(OR(ax, ax));	// 16197 or      ax, ax ;~ 0613:4325
cs=0x613;eip=0x004327; 	R(JZ(loc_18a52));	// 16198 jz      short loc_18A52 ;~ 0613:4327
cs=0x613;eip=0x004329; 	T(CMP(ax, 1));	// 16199 cmp     ax, 1 ;~ 0613:4329
cs=0x613;eip=0x00432c; 	R(JNZ(loc_18a41));	// 16200 jnz     short loc_18A41 ;~ 0613:432C
cs=0x613;eip=0x00432e; 	R(JMP(loc_18b42));	// 16201 jmp     loc_18B42 ;~ 0613:432E
loc_18a41:
	// 5365 
cs=0x613;eip=0x004331; 	T(CMP(ax, 2));	// 16205 cmp     ax, 2 ;~ 0613:4331
cs=0x613;eip=0x004334; 	R(JZ(loc_18a52));	// 16206 jz      short loc_18A52 ;~ 0613:4334
cs=0x613;eip=0x004336; 	T(CMP(ax, 3));	// 16207 cmp     ax, 3 ;~ 0613:4336
cs=0x613;eip=0x004339; 	R(JNZ(loc_18a4e));	// 16208 jnz     short loc_18A4E ;~ 0613:4339
cs=0x613;eip=0x00433b; 	R(JMP(loc_18b6e));	// 16209 jmp     loc_18B6E ;~ 0613:433B
loc_18a4e:
	// 5366 
cs=0x613;eip=0x00433e; 	R(JMP(loc_18a82));	// 16213 jmp     short loc_18A82 ;~ 0613:433E
loc_18a52:
	// 5367 
cs=0x613;eip=0x004342; 	T(CMP(followopponentflag, 0));	// 16220 cmp     followOpponentFlag, 0 ;~ 0613:4342
cs=0x613;eip=0x004347; 	R(JZ(loc_18a6e));	// 16221 jz      short loc_18A6E ;~ 0613:4347
cs=0x613;eip=0x004349; 	T(di = bp+var_14);	// 16222 lea     di, [bp+var_14] ;~ 0613:4349
cs=0x613;eip=0x00434c; 	T(si = bp+var_e);	// 16223 lea     si, [bp+var_E] ;~ 0613:434C
cs=0x613;eip=0x00434f; 	X(PUSH(ss));	// 16224 push    ss ;~ 0613:434F
cs=0x613;eip=0x004350; 	X(POP(es));	// 16225 pop     es ;~ 0613:4350
cs=0x613;eip=0x004351; 	X(MOVSW);	// 16226 movsw ;~ 0613:4351
cs=0x613;eip=0x004352; 	X(MOVSW);	// 16227 movsw ;~ 0613:4352
cs=0x613;eip=0x004353; 	X(MOVSW);	// 16228 movsw ;~ 0613:4353
cs=0x613;eip=0x004354; 	T(di = bp+var_2a);	// 16229 lea     di, [bp+var_2A] ;~ 0613:4354
cs=0x613;eip=0x004357; 	T(si = bp+var_24);	// 16230 lea     si, [bp+var_24] ;~ 0613:4357
loc_18a6a:
	// 5368 
cs=0x613;eip=0x00435a; 	X(PUSH(ss));	// 16233 push    ss ;~ 0613:435A
cs=0x613;eip=0x00435b; 	X(POP(es));	// 16234 pop     es ;~ 0613:435B
cs=0x613;eip=0x00435c; 	R(JMP(loc_18a7f));	// 16235 jmp     short loc_18A7F ;~ 0613:435C
loc_18a6e:
	// 5369 
cs=0x613;eip=0x00435e; 	T(di = bp+var_14);	// 16239 lea     di, [bp+var_14] ;~ 0613:435E
cs=0x613;eip=0x004361; 	T(si = bp+var_8);	// 16240 lea     si, [bp+var_8] ;~ 0613:4361
cs=0x613;eip=0x004364; 	X(PUSH(ss));	// 16241 push    ss ;~ 0613:4364
cs=0x613;eip=0x004365; 	X(POP(es));	// 16242 pop     es ;~ 0613:4365
cs=0x613;eip=0x004366; 	X(MOVSW);	// 16243 movsw ;~ 0613:4366
cs=0x613;eip=0x004367; 	X(MOVSW);	// 16244 movsw ;~ 0613:4367
cs=0x613;eip=0x004368; 	X(MOVSW);	// 16245 movsw ;~ 0613:4368
cs=0x613;eip=0x004369; 	T(di = bp+var_2a);	// 16246 lea     di, [bp+var_2A] ;~ 0613:4369
cs=0x613;eip=0x00436c; 	T(si = bp+var_1c);	// 16247 lea     si, [bp+var_1C] ;~ 0613:436C
loc_18a7f:
	// 5370 
cs=0x613;eip=0x00436f; 	X(MOVSW);	// 16250 movsw ;~ 0613:436F
cs=0x613;eip=0x004370; 	X(MOVSW);	// 16251 movsw ;~ 0613:4370
cs=0x613;eip=0x004371; 	X(MOVSW);	// 16252 movsw ;~ 0613:4371
loc_18a82:
	// 5371 
cs=0x613;eip=0x004372; 	T(MOV(ax, 0x22));	// 16256 mov     ax, 22h ; '"' ;~ 0613:4372
cs=0x613;eip=0x004375; 	X(IMUL1_2(word_449e4));	// 16257 imul    word_449E4 ;~ 0613:4375
cs=0x613;eip=0x004379; 	T(ADD(ax, offset(dseg,unk_44f4c)));	// 16258 add     ax, offset unk_44F4C ;~ 0613:4379
cs=0x613;eip=0x00437c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 16259 mov     [bp+var_2], ax ;~ 0613:437C
cs=0x613;eip=0x00437f; 	T(MOV(bx, ax));	// 16260 mov     bx, ax ;~ 0613:437F
cs=0x613;eip=0x004381; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2a))));	// 16261 mov     ax, [bp+var_2A] ;~ 0613:4381
cs=0x613;eip=0x004384; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 16262 sub     ax, [bp+var_1C] ;~ 0613:4384
cs=0x613;eip=0x004387; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 16263 mov     [bx+6], ax ;~ 0613:4387
cs=0x613;eip=0x00438a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16264 mov     bx, [bp+var_2] ;~ 0613:438A
cs=0x613;eip=0x00438d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 16265 mov     ax, [bp+var_28] ;~ 0613:438D
cs=0x613;eip=0x004390; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 16266 sub     ax, [bp+var_1A] ;~ 0613:4390
cs=0x613;eip=0x004393; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 16267 mov     [bx+8], ax ;~ 0613:4393
cs=0x613;eip=0x004396; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16268 mov     bx, [bp+var_2] ;~ 0613:4396
cs=0x613;eip=0x004399; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_26))));	// 16269 mov     ax, [bp+var_26] ;~ 0613:4399
cs=0x613;eip=0x00439c; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_18))));	// 16270 sub     ax, [bp+var_18] ;~ 0613:439C
cs=0x613;eip=0x00439f; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), ax));	// 16271 mov     [bx+0Ah], ax ;~ 0613:439F
cs=0x613;eip=0x0043a2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16272 mov     bx, [bp+var_2] ;~ 0613:43A2
cs=0x613;eip=0x0043a5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 16273 mov     ax, [bp+var_14] ;~ 0613:43A5
cs=0x613;eip=0x0043a8; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_8))));	// 16274 sub     ax, [bp+var_8] ;~ 0613:43A8
cs=0x613;eip=0x0043ab; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 16275 mov     [bx+0Ch], ax ;~ 0613:43AB
cs=0x613;eip=0x0043ae; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16276 mov     bx, [bp+var_2] ;~ 0613:43AE
cs=0x613;eip=0x0043b1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 16277 mov     ax, [bp+var_12] ;~ 0613:43B1
cs=0x613;eip=0x0043b4; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_6))));	// 16278 sub     ax, [bp+var_6] ;~ 0613:43B4
cs=0x613;eip=0x0043b7; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), ax));	// 16279 mov     [bx+0Eh], ax ;~ 0613:43B7
cs=0x613;eip=0x0043ba; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16280 mov     bx, [bp+var_2] ;~ 0613:43BA
cs=0x613;eip=0x0043bd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 16281 mov     ax, [bp+var_10] ;~ 0613:43BD
cs=0x613;eip=0x0043c0; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 16282 sub     ax, [bp+var_4] ;~ 0613:43C0
cs=0x613;eip=0x0043c3; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), ax));	// 16283 mov     [bx+10h], ax ;~ 0613:43C3
cs=0x613;eip=0x0043c6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16284 mov     bx, [bp+var_2] ;~ 0613:43C6
cs=0x613;eip=0x0043c9; 	T(MOV(ax, word_44608));	// 16285 mov     ax, word_44608 ;~ 0613:43C9
cs=0x613;eip=0x0043cc; 	X(MOV(*(dw*)(raddr(ds,bx+0x1E)), ax));	// 16286 mov     [bx+1Eh], ax ;~ 0613:43CC
cs=0x613;eip=0x0043cf; 	T(CMP(byte_449aa, 0));	// 16287 cmp     byte_449AA, 0 ;~ 0613:43CF
cs=0x613;eip=0x0043d4; 	R(JNZ(loc_18ae9));	// 16288 jnz     short loc_18AE9 ;~ 0613:43D4
cs=0x613;eip=0x0043d6; 	R(JMP(loc_18bb6));	// 16289 jmp     loc_18BB6 ;~ 0613:43D6
loc_18ae9:
	// 5372 
cs=0x613;eip=0x0043d9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16293 mov     bx, [bp+var_2] ;~ 0613:43D9
cs=0x613;eip=0x0043dc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2a))));	// 16294 mov     ax, [bp+var_2A] ;~ 0613:43DC
cs=0x613;eip=0x0043df; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_24))));	// 16295 sub     ax, [bp+var_24] ;~ 0613:43DF
cs=0x613;eip=0x0043e2; 	X(MOV(*(dw*)(raddr(ds,bx+0x12)), ax));	// 16296 mov     [bx+12h], ax ;~ 0613:43E2
cs=0x613;eip=0x0043e5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16297 mov     bx, [bp+var_2] ;~ 0613:43E5
cs=0x613;eip=0x0043e8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 16298 mov     ax, [bp+var_28] ;~ 0613:43E8
cs=0x613;eip=0x0043eb; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_22))));	// 16299 sub     ax, [bp+var_22] ;~ 0613:43EB
cs=0x613;eip=0x0043ee; 	X(MOV(*(dw*)(raddr(ds,bx+0x14)), ax));	// 16300 mov     [bx+14h], ax ;~ 0613:43EE
cs=0x613;eip=0x0043f1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16301 mov     bx, [bp+var_2] ;~ 0613:43F1
cs=0x613;eip=0x0043f4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_26))));	// 16302 mov     ax, [bp+var_26] ;~ 0613:43F4
cs=0x613;eip=0x0043f7; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_20))));	// 16303 sub     ax, [bp+var_20] ;~ 0613:43F7
cs=0x613;eip=0x0043fa; 	X(MOV(*(dw*)(raddr(ds,bx+0x16)), ax));	// 16304 mov     [bx+16h], ax ;~ 0613:43FA
cs=0x613;eip=0x0043fd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16305 mov     bx, [bp+var_2] ;~ 0613:43FD
cs=0x613;eip=0x004400; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 16306 mov     ax, [bp+var_14] ;~ 0613:4400
cs=0x613;eip=0x004403; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_e))));	// 16307 sub     ax, [bp+var_E] ;~ 0613:4403
cs=0x613;eip=0x004406; 	X(MOV(*(dw*)(raddr(ds,bx+0x18)), ax));	// 16308 mov     [bx+18h], ax ;~ 0613:4406
cs=0x613;eip=0x004409; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16309 mov     bx, [bp+var_2] ;~ 0613:4409
cs=0x613;eip=0x00440c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 16310 mov     ax, [bp+var_12] ;~ 0613:440C
cs=0x613;eip=0x00440f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_c))));	// 16311 sub     ax, [bp+var_C] ;~ 0613:440F
cs=0x613;eip=0x004412; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A)), ax));	// 16312 mov     [bx+1Ah], ax ;~ 0613:4412
cs=0x613;eip=0x004415; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16313 mov     bx, [bp+var_2] ;~ 0613:4415
cs=0x613;eip=0x004418; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 16314 mov     ax, [bp+var_10] ;~ 0613:4418
cs=0x613;eip=0x00441b; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_a))));	// 16315 sub     ax, [bp+var_A] ;~ 0613:441B
cs=0x613;eip=0x00441e; 	X(MOV(*(dw*)(raddr(ds,bx+0x1C)), ax));	// 16316 mov     [bx+1Ch], ax ;~ 0613:441E
cs=0x613;eip=0x004421; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 16317 mov     bx, [bp+var_2] ;~ 0613:4421
cs=0x613;eip=0x004424; 	T(MOV(ax, word_446d8));	// 16318 mov     ax, word_446D8 ;~ 0613:4424
cs=0x613;eip=0x004427; 	X(MOV(*(dw*)(raddr(ds,bx+0x20)), ax));	// 16319 mov     [bx+20h], ax ;~ 0613:4427
cs=0x613;eip=0x00442a; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), 2));	// 16320 mov     [bp+var_30], 2 ;~ 0613:442A
cs=0x613;eip=0x00442f; 	R(JMP(loc_18bbb));	// 16321 jmp     short loc_18BBB ;~ 0613:442F
loc_18b42:
	// 5373 
cs=0x613;eip=0x004432; 	T(MOV(al, followopponentflag));	// 16326 mov     al, followOpponentFlag ;~ 0613:4432
cs=0x613;eip=0x004435; 	T(CBW);	// 16327 cbw ;~ 0613:4435
cs=0x613;eip=0x004436; 	T(MOV(cx, ax));	// 16328 mov     cx, ax ;~ 0613:4436
cs=0x613;eip=0x004438; 	T(SHL(ax, 1));	// 16329 shl     ax, 1 ;~ 0613:4438
cs=0x613;eip=0x00443a; 	T(ADD(ax, cx));	// 16330 add     ax, cx ;~ 0613:443A
cs=0x613;eip=0x00443c; 	T(SHL(ax, 1));	// 16331 shl     ax, 1 ;~ 0613:443C
cs=0x613;eip=0x00443e; 	T(MOV(si, ax));	// 16332 mov     si, ax ;~ 0613:443E
cs=0x613;eip=0x004440; 	X(PUSH(si));	// 16333 push    si ;~ 0613:4440
cs=0x613;eip=0x004441; 	T(di = bp+var_14);	// 16334 lea     di, [bp+var_14] ;~ 0613:4441
cs=0x613;eip=0x004444; 	T(si = offset(dseg,word_445b4)+si);	// 16335 lea     si, word_445B4[si] ;~ 0613:4444
cs=0x613;eip=0x004448; 	X(PUSH(ss));	// 16336 push    ss ;~ 0613:4448
cs=0x613;eip=0x004449; 	X(POP(es));	// 16337 pop     es ;~ 0613:4449
cs=0x613;eip=0x00444a; 	X(MOVSW);	// 16338 movsw ;~ 0613:444A
cs=0x613;eip=0x00444b; 	X(MOVSW);	// 16339 movsw ;~ 0613:444B
cs=0x613;eip=0x00444c; 	X(MOVSW);	// 16340 movsw ;~ 0613:444C
cs=0x613;eip=0x00444d; 	X(POP(si));	// 16341 pop     si ;~ 0613:444D
cs=0x613;eip=0x00444e; 	X(PUSH(si));	// 16342 push    si ;~ 0613:444E
cs=0x613;eip=0x00444f; 	T(di = bp+var_2a);	// 16343 lea     di, [bp+var_2A] ;~ 0613:444F
cs=0x613;eip=0x004452; 	T(si = offset(dseg,unk_445c0)+si);	// 16344 lea     si, unk_445C0[si] ;~ 0613:4452
cs=0x613;eip=0x004456; 	X(MOVSW);	// 16345 movsw ;~ 0613:4456
cs=0x613;eip=0x004457; 	X(MOVSW);	// 16346 movsw ;~ 0613:4457
cs=0x613;eip=0x004458; 	X(MOVSW);	// 16347 movsw ;~ 0613:4458
cs=0x613;eip=0x004459; 	X(POP(si));	// 16348 pop     si ;~ 0613:4459
cs=0x613;eip=0x00445a; 	R(JMP(loc_18a82));	// 16349 jmp     loc_18A82 ;~ 0613:445A
loc_18b6e:
	// 5374 
cs=0x613;eip=0x00445e; 	T(MOV(al, followopponentflag));	// 16354 mov     al, followOpponentFlag ;~ 0613:445E
cs=0x613;eip=0x004461; 	T(CBW);	// 16355 cbw ;~ 0613:4461
cs=0x613;eip=0x004462; 	T(MOV(bx, ax));	// 16356 mov     bx, ax ;~ 0613:4462
cs=0x613;eip=0x004464; 	T(MOV(al, *((&byte_4488b)+bx)));	// 16357 mov     al, byte_4488B[bx] ;~ 0613:4464
cs=0x613;eip=0x004468; 	T(CBW);	// 16358 cbw ;~ 0613:4468
cs=0x613;eip=0x004469; 	T(MOV(cx, ax));	// 16359 mov     cx, ax ;~ 0613:4469
cs=0x613;eip=0x00446b; 	T(SHL(ax, 1));	// 16360 shl     ax, 1 ;~ 0613:446B
cs=0x613;eip=0x00446d; 	T(ADD(ax, cx));	// 16361 add     ax, cx ;~ 0613:446D
cs=0x613;eip=0x00446f; 	T(SHL(ax, 1));	// 16362 shl     ax, 1 ;~ 0613:446F
cs=0x613;eip=0x004471; 	T(ADD(ax, trackdata9));	// 16363 add     ax, trackdata9 ;~ 0613:4471
cs=0x613;eip=0x004475; 	T(MOV(dx, word_449de));	// 16364 mov     dx, word_449DE ;~ 0613:4475
cs=0x613;eip=0x004479; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_34))), ax));	// 16365 mov     word ptr [bp+var_34], ax ;~ 0613:4479
cs=0x613;eip=0x00447c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_34+2))), dx));	// 16366 mov     word ptr [bp+var_34+2], dx ;~ 0613:447C
cs=0x613;eip=0x00447f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_34))));	// 16367 les     bx, [bp+var_34] ;~ 0613:447F
cs=0x613;eip=0x004482; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 16368 mov     ax, es:[bx] ;~ 0613:4482
cs=0x613;eip=0x004485; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 16369 mov     [bp+var_14], ax ;~ 0613:4485
cs=0x613;eip=0x004488; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 16370 mov     ax, es:[bx+2] ;~ 0613:4488
cs=0x613;eip=0x00448c; 	T(ADD(ax, word_44d20));	// 16371 add     ax, word_44D20 ;~ 0613:448C
cs=0x613;eip=0x004490; 	T(ADD(ax, 0x5A));	// 16372 add     ax, 5Ah ; 'Z' ;~ 0613:4490
cs=0x613;eip=0x004493; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 16373 mov     [bp+var_12], ax ;~ 0613:4493
cs=0x613;eip=0x004496; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 16374 mov     ax, es:[bx+4] ;~ 0613:4496
cs=0x613;eip=0x00449a; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 16375 mov     [bp+var_10], ax ;~ 0613:449A
cs=0x613;eip=0x00449d; 	T(di = bp+var_2a);	// 16376 lea     di, [bp+var_2A] ;~ 0613:449D
cs=0x613;eip=0x0044a0; 	T(si = bp+var_14);	// 16377 lea     si, [bp+var_14] ;~ 0613:44A0
cs=0x613;eip=0x0044a3; 	R(JMP(loc_18a6a));	// 16378 jmp     loc_18A6A ;~ 0613:44A3
loc_18bb6:
	// 5375 
cs=0x613;eip=0x0044a6; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), 1));	// 16382 mov     [bp+var_30], 1 ;~ 0613:44A6
loc_18bbb:
	// 5376 
cs=0x613;eip=0x0044ab; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 16385 mov     [bp+var_1E], 0 ;~ 0613:44AB
cs=0x613;eip=0x0044b0; 	R(JMP(loc_18c93));	// 16386 jmp     loc_18C93 ;~ 0613:44B0
loc_18bc4:
	// 5377 
cs=0x613;eip=0x0044b4; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), offset(dseg,word_445e6)));	// 16391 mov     [bp+var_2C], offset word_445E6 ;~ 0613:44B4
cs=0x613;eip=0x0044b9; 	T(MOV(ax, word_43964));	// 16392 mov     ax, word_43964 ;~ 0613:44B9
cs=0x613;eip=0x0044bc; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 16393 mov     [bp+var_2E], ax ;~ 0613:44BC
cs=0x613;eip=0x0044bf; 	T(MOV(al, byte_42d26));	// 16394 mov     al, byte_42D26 ;~ 0613:44BF
loc_18bd2:
	// 5378 
cs=0x613;eip=0x0044c2; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 16397 mov     [bp+var_16], al ;~ 0613:44C2
cs=0x613;eip=0x0044c5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2c))));	// 16398 mov     bx, [bp+var_2C] ;~ 0613:44C5
cs=0x613;eip=0x0044c8; 	T(TEST(*(raddr(ds,bx+0x0CF)), 1));	// 16399 test    byte ptr [bx+0CFh], 1 ;~ 0613:44C8
cs=0x613;eip=0x0044cd; 	R(JZ(loc_18bf4));	// 16400 jz      short loc_18BF4 ;~ 0613:44CD
cs=0x613;eip=0x0044cf; 	T(TEST(*(raddr(ss,bp+var_16)), 1));	// 16401 test    [bp+var_16], 1 ;~ 0613:44CF
cs=0x613;eip=0x0044d3; 	R(JNZ(loc_18c08));	// 16402 jnz     short loc_18C08 ;~ 0613:44D3
cs=0x613;eip=0x0044d5; 	X(OR(*(raddr(ss,bp+var_16)), 1));	// 16403 or      [bp+var_16], 1 ;~ 0613:44D5
cs=0x613;eip=0x0044d9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 16404 push    [bp+var_2E] ;~ 0613:44D9
cs=0x613;eip=0x0044dc; 	R(CALLF(audio_op_unk,0));	// 16405 call    audio_op_unk ;~ 0613:44DC
cs=0x613;eip=0x0044e1; 	R(JMP(loc_18c05));	// 16406 jmp     short loc_18C05 ;~ 0613:44E1
loc_18bf4:
	// 5379 
cs=0x613;eip=0x0044e4; 	T(TEST(*(raddr(ss,bp+var_16)), 1));	// 16411 test    [bp+var_16], 1 ;~ 0613:44E4
cs=0x613;eip=0x0044e8; 	R(JZ(loc_18c08));	// 16412 jz      short loc_18C08 ;~ 0613:44E8
cs=0x613;eip=0x0044ea; 	X(DEC(*(raddr(ss,bp+var_16))));	// 16413 dec     [bp+var_16] ;~ 0613:44EA
cs=0x613;eip=0x0044ed; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 16414 push    [bp+var_2E] ;~ 0613:44ED
cs=0x613;eip=0x0044f0; 	R(CALLF(audio_function2,0));	// 16415 call    audio_function2 ;~ 0613:44F0
loc_18c05:
	// 5380 
cs=0x613;eip=0x0044f5; 	T(ADD(sp, 2));	// 16418 add     sp, 2 ;~ 0613:44F5
loc_18c08:
	// 5381 
cs=0x613;eip=0x0044f8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2c))));	// 16422 mov     bx, [bp+var_2C] ;~ 0613:44F8
cs=0x613;eip=0x0044fb; 	T(TEST(*(raddr(ds,bx+0x0CF)), 6));	// 16423 test    byte ptr [bx+0CFh], 6 ;~ 0613:44FB
cs=0x613;eip=0x004500; 	R(JZ(loc_18c56));	// 16424 jz      short loc_18C56 ;~ 0613:4500
cs=0x613;eip=0x004502; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 16425 mov     al, [bp+var_16] ;~ 0613:4502
cs=0x613;eip=0x004505; 	T(AND(al, 6));	// 16426 and     al, 6 ;~ 0613:4505
cs=0x613;eip=0x004507; 	X(MOV(*(db*)(raddr(ss,bp+var_34)), al));	// 16427 mov     byte ptr [bp+var_34], al ;~ 0613:4507
cs=0x613;eip=0x00450a; 	T(MOV(al, *(raddr(ds,bx+0x0CF))));	// 16428 mov     al, [bx+0CFh] ;~ 0613:450A
cs=0x613;eip=0x00450e; 	T(AND(al, 6));	// 16429 and     al, 6 ;~ 0613:450E
cs=0x613;eip=0x004510; 	T(CMP(al, *(db*)(raddr(ss,bp+var_34))));	// 16430 cmp     al, byte ptr [bp+var_34] ;~ 0613:4510
cs=0x613;eip=0x004513; 	R(JZ(loc_18c7b));	// 16431 jz      short loc_18C7B ;~ 0613:4513
cs=0x613;eip=0x004515; 	T(TEST(*(raddr(ss,bp+var_16)), 6));	// 16432 test    [bp+var_16], 6 ;~ 0613:4515
cs=0x613;eip=0x004519; 	R(JNZ(loc_18c5c));	// 16433 jnz     short loc_18C5C ;~ 0613:4519
cs=0x613;eip=0x00451b; 	T(TEST(*(raddr(ds,bx+0x0CF)), 2));	// 16434 test    byte ptr [bx+0CFh], 2 ;~ 0613:451B
cs=0x613;eip=0x004520; 	R(JZ(loc_18c44));	// 16435 jz      short loc_18C44 ;~ 0613:4520
cs=0x613;eip=0x004522; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 16436 push    [bp+var_2E] ;~ 0613:4522
cs=0x613;eip=0x004525; 	R(CALLF(audio_op_unk5,0));	// 16437 call    audio_op_unk5 ;~ 0613:4525
cs=0x613;eip=0x00452a; 	T(ADD(sp, 2));	// 16438 add     sp, 2 ;~ 0613:452A
cs=0x613;eip=0x00452d; 	X(ADD(*(raddr(ss,bp+var_16)), 2));	// 16439 add     [bp+var_16], 2 ;~ 0613:452D
cs=0x613;eip=0x004531; 	R(JMP(loc_18c7b));	// 16440 jmp     short loc_18C7B ;~ 0613:4531
loc_18c44:
	// 5382 
cs=0x613;eip=0x004534; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 16445 push    [bp+var_2E] ;~ 0613:4534
cs=0x613;eip=0x004537; 	R(CALLF(audio_op_unk6,0));	// 16446 call    audio_op_unk6 ;~ 0613:4537
cs=0x613;eip=0x00453c; 	T(ADD(sp, 2));	// 16447 add     sp, 2 ;~ 0613:453C
cs=0x613;eip=0x00453f; 	X(ADD(*(raddr(ss,bp+var_16)), 4));	// 16448 add     [bp+var_16], 4 ;~ 0613:453F
cs=0x613;eip=0x004543; 	R(JMP(loc_18c7b));	// 16449 jmp     short loc_18C7B ;~ 0613:4543
loc_18c56:
	// 5383 
cs=0x613;eip=0x004546; 	T(TEST(*(raddr(ss,bp+var_16)), 6));	// 16454 test    [bp+var_16], 6 ;~ 0613:4546
cs=0x613;eip=0x00454a; 	R(JZ(loc_18c7b));	// 16455 jz      short loc_18C7B ;~ 0613:454A
loc_18c5c:
	// 5384 
cs=0x613;eip=0x00454c; 	T(TEST(*(raddr(ss,bp+var_16)), 2));	// 16458 test    [bp+var_16], 2 ;~ 0613:454C
cs=0x613;eip=0x004550; 	R(JZ(loc_18c66));	// 16459 jz      short loc_18C66 ;~ 0613:4550
cs=0x613;eip=0x004552; 	X(SUB(*(raddr(ss,bp+var_16)), 2));	// 16460 sub     [bp+var_16], 2 ;~ 0613:4552
loc_18c66:
	// 5385 
cs=0x613;eip=0x004556; 	T(TEST(*(raddr(ss,bp+var_16)), 4));	// 16463 test    [bp+var_16], 4 ;~ 0613:4556
cs=0x613;eip=0x00455a; 	R(JZ(loc_18c70));	// 16464 jz      short loc_18C70 ;~ 0613:455A
cs=0x613;eip=0x00455c; 	X(SUB(*(raddr(ss,bp+var_16)), 4));	// 16465 sub     [bp+var_16], 4 ;~ 0613:455C
loc_18c70:
	// 5386 
cs=0x613;eip=0x004560; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 16468 push    [bp+var_2E] ;~ 0613:4560
cs=0x613;eip=0x004563; 	R(CALLF(audio_op_unk7,0));	// 16469 call    audio_op_unk7 ;~ 0613:4563
cs=0x613;eip=0x004568; 	T(ADD(sp, 2));	// 16470 add     sp, 2 ;~ 0613:4568
loc_18c7b:
	// 5387 
cs=0x613;eip=0x00456b; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 16474 cmp     [bp+var_1E], 0 ;~ 0613:456B
cs=0x613;eip=0x00456f; 	R(JZ(loc_18c8a));	// 16475 jz      short loc_18C8A ;~ 0613:456F
cs=0x613;eip=0x004571; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 16476 mov     al, [bp+var_16] ;~ 0613:4571
cs=0x613;eip=0x004574; 	X(MOV(byte_42d2a, al));	// 16477 mov     byte_42D2A, al ;~ 0613:4574
cs=0x613;eip=0x004577; 	R(JMP(loc_18c90));	// 16478 jmp     short loc_18C90 ;~ 0613:4577
loc_18c8a:
	// 5388 
cs=0x613;eip=0x00457a; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 16483 mov     al, [bp+var_16] ;~ 0613:457A
cs=0x613;eip=0x00457d; 	X(MOV(byte_42d26, al));	// 16484 mov     byte_42D26, al ;~ 0613:457D
loc_18c90:
	// 5389 
cs=0x613;eip=0x004580; 	X(INC(*(dw*)(raddr(ss,bp+var_1e))));	// 16487 inc     [bp+var_1E] ;~ 0613:4580
loc_18c93:
	// 5390 
cs=0x613;eip=0x004583; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_30))));	// 16490 mov     ax, [bp+var_30] ;~ 0613:4583
cs=0x613;eip=0x004586; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 16491 cmp     [bp+var_1E], ax ;~ 0613:4586
cs=0x613;eip=0x004589; 	R(JGE(loc_18cb6));	// 16492 jge     short loc_18CB6 ;~ 0613:4589
cs=0x613;eip=0x00458b; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 16493 cmp     [bp+var_1E], 0 ;~ 0613:458B
cs=0x613;eip=0x00458f; 	R(JNZ(loc_18ca4));	// 16494 jnz     short loc_18CA4 ;~ 0613:458F
cs=0x613;eip=0x004591; 	R(JMP(loc_18bc4));	// 16495 jmp     loc_18BC4 ;~ 0613:4591
loc_18ca4:
	// 5391 
cs=0x613;eip=0x004594; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), offset(dseg,word_446b6)));	// 16499 mov     [bp+var_2C], offset word_446B6 ;~ 0613:4594
cs=0x613;eip=0x004599; 	T(MOV(ax, word_4408c));	// 16500 mov     ax, word_4408C ;~ 0613:4599
cs=0x613;eip=0x00459c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 16501 mov     [bp+var_2E], ax ;~ 0613:459C
cs=0x613;eip=0x00459f; 	T(MOV(al, byte_42d2a));	// 16502 mov     al, byte_42D2A ;~ 0613:459F
cs=0x613;eip=0x0045a2; 	R(JMP(loc_18bd2));	// 16503 jmp     loc_18BD2 ;~ 0613:45A2
loc_18cb6:
	// 5392 
cs=0x613;eip=0x0045a6; 	X(MOV(byte_459d8, 1));	// 16508 mov     byte_459D8, 1 ;~ 0613:45A6
cs=0x613;eip=0x0045ab; 	X(INC(word_449e4));	// 16509 inc     word_449E4 ;~ 0613:45AB
cs=0x613;eip=0x0045af; 	T(CMP(word_449e4, 0x28));	// 16510 cmp     word_449E4, 28h ; '(' ;~ 0613:45AF
cs=0x613;eip=0x0045b4; 	R(JNZ(loc_18ccc));	// 16511 jnz     short loc_18CCC ;~ 0613:45B4
cs=0x613;eip=0x0045b6; 	X(MOV(word_449e4, 0));	// 16512 mov     word_449E4, 0 ;~ 0613:45B6
loc_18ccc:
	// 5393 
cs=0x613;eip=0x0045bc; 	T(MOV(al, is_in_replay));	// 16516 mov     al, is_in_replay ;~ 0613:45BC
cs=0x613;eip=0x0045bf; 	X(MOV(byte_3be02, al));	// 16517 mov     byte_3BE02, al ;~ 0613:45BF
cs=0x613;eip=0x0045c2; 	X(POP(si));	// 16518 pop     si ;~ 0613:45C2
cs=0x613;eip=0x0045c3; 	X(POP(di));	// 16519 pop     di ;~ 0613:45C3
cs=0x613;eip=0x0045c4; 	T(MOV(sp, bp));	// 16520 mov     sp, bp ;~ 0613:45C4
cs=0x613;eip=0x0045c6; 	X(POP(bp));	// 16521 pop     bp ;~ 0613:45C6
cs=0x613;eip=0x0045c7; 	R(RETF(0));	// 16522 retf ;~ 0613:45C7
audio_unk3:
	// 16530 
#undef arg_0
#define arg_0 6
	// 16532 arg_0           = byte ptr  6 ;~ 0613:45C8
#undef arg_2
#define arg_2 8
	// 16533 arg_2           = word ptr  8 ;~ 0613:45C8
ret_613_45c8:
	// 5394 
cs=0x613;eip=0x0045c8; 	X(PUSH(bp));	// 16535 push    bp ;~ 0613:45C8
cs=0x613;eip=0x0045c9; 	T(MOV(bp, sp));	// 16536 mov     bp, sp ;~ 0613:45C9
cs=0x613;eip=0x0045cb; 	T(CMP(byte_459d8, 0));	// 16537 cmp     byte_459D8, 0 ;~ 0613:45CB
cs=0x613;eip=0x0045d0; 	R(JZ(loc_18d04));	// 16538 jz      short loc_18D04 ;~ 0613:45D0
cs=0x613;eip=0x0045d2; 	T(TEST(*(raddr(ss,bp+arg_0)), 0x10));	// 16539 test    [bp+arg_0], 10h ;~ 0613:45D2
cs=0x613;eip=0x0045d6; 	R(JZ(loc_18cf3));	// 16540 jz      short loc_18CF3 ;~ 0613:45D6
cs=0x613;eip=0x0045d8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 16541 push    [bp+arg_2] ;~ 0613:45D8
cs=0x613;eip=0x0045db; 	R(CALLF(audio_op_unk4,0));	// 16542 call    audio_op_unk4 ;~ 0613:45DB
cs=0x613;eip=0x0045e0; 	T(ADD(sp, 2));	// 16543 add     sp, 2 ;~ 0613:45E0
loc_18cf3:
	// 5395 
cs=0x613;eip=0x0045e3; 	T(TEST(*(raddr(ss,bp+arg_0)), 0x20));	// 16546 test    [bp+arg_0], 20h ;~ 0613:45E3
cs=0x613;eip=0x0045e7; 	R(JZ(loc_18d04));	// 16547 jz      short loc_18D04 ;~ 0613:45E7
cs=0x613;eip=0x0045e9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 16548 push    [bp+arg_2] ;~ 0613:45E9
cs=0x613;eip=0x0045ec; 	R(CALLF(audio_op_unk3,0));	// 16549 call    audio_op_unk3 ;~ 0613:45EC
cs=0x613;eip=0x0045f1; 	T(ADD(sp, 2));	// 16550 add     sp, 2 ;~ 0613:45F1
loc_18d04:
	// 5396 
cs=0x613;eip=0x0045f4; 	X(POP(bp));	// 16554 pop     bp ;~ 0613:45F4
cs=0x613;eip=0x0045f5; 	R(RETF(0));	// 16555 retf ;~ 0613:45F5
sub_18d06:
	// 16563 
#undef arg_0
#define arg_0 6
	// 16565 arg_0           = word ptr  6 ;~ 0613:45F6
#undef arg_2
#define arg_2 8
	// 16566 arg_2           = word ptr  8 ;~ 0613:45F6
ret_613_45f6:
	// 5397 
cs=0x613;eip=0x0045f6; 	X(PUSH(bp));	// 16568 push    bp ;~ 0613:45F6
cs=0x613;eip=0x0045f7; 	T(MOV(bp, sp));	// 16569 mov     bp, sp ;~ 0613:45F7
cs=0x613;eip=0x0045f9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 16570 push    [bp+arg_2] ;~ 0613:45F9
cs=0x613;eip=0x0045fc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 16571 mov     bx, [bp+arg_0] ;~ 0613:45FC
cs=0x613;eip=0x0045ff; 	X(PUSH(*(dw*)(raddr(ds,bx+0x10))));	// 16572 push    word ptr [bx+10h] ;~ 0613:45FF
cs=0x613;eip=0x004602; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0E))));	// 16573 push    word ptr [bx+0Eh] ;~ 0613:4602
cs=0x613;eip=0x004605; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0C))));	// 16574 push    word ptr [bx+0Ch] ;~ 0613:4605
cs=0x613;eip=0x004608; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0A))));	// 16575 push    word ptr [bx+0Ah] ;~ 0613:4608
cs=0x613;eip=0x00460b; 	X(PUSH(*(dw*)(raddr(ds,bx+8))));	// 16576 push    word ptr [bx+8] ;~ 0613:460B
cs=0x613;eip=0x00460e; 	X(PUSH(*(dw*)(raddr(ds,bx+6))));	// 16577 push    word ptr [bx+6] ;~ 0613:460E
cs=0x613;eip=0x004611; 	X(PUSH(*(dw*)(raddr(ds,bx+0x1E))));	// 16578 push    word ptr [bx+1Eh] ;~ 0613:4611
cs=0x613;eip=0x004614; 	X(PUSH(word_43964));	// 16579 push    word_43964 ;~ 0613:4614
cs=0x613;eip=0x004618; 	R(CALLF(audio_op_unk2,0));	// 16580 call    audio_op_unk2 ;~ 0613:4618
cs=0x613;eip=0x00461d; 	T(ADD(sp, 0x12));	// 16581 add     sp, 12h ;~ 0613:461D
cs=0x613;eip=0x004620; 	T(CMP(byte_449aa, 0));	// 16582 cmp     byte_449AA, 0 ;~ 0613:4620
cs=0x613;eip=0x004625; 	R(JZ(loc_18d5e));	// 16583 jz      short loc_18D5E ;~ 0613:4625
cs=0x613;eip=0x004627; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 16584 push    [bp+arg_2] ;~ 0613:4627
cs=0x613;eip=0x00462a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 16585 mov     bx, [bp+arg_0] ;~ 0613:462A
cs=0x613;eip=0x00462d; 	X(PUSH(*(dw*)(raddr(ds,bx+0x1C))));	// 16586 push    word ptr [bx+1Ch] ;~ 0613:462D
cs=0x613;eip=0x004630; 	X(PUSH(*(dw*)(raddr(ds,bx+0x1A))));	// 16587 push    word ptr [bx+1Ah] ;~ 0613:4630
cs=0x613;eip=0x004633; 	X(PUSH(*(dw*)(raddr(ds,bx+0x18))));	// 16588 push    word ptr [bx+18h] ;~ 0613:4633
cs=0x613;eip=0x004636; 	X(PUSH(*(dw*)(raddr(ds,bx+0x16))));	// 16589 push    word ptr [bx+16h] ;~ 0613:4636
cs=0x613;eip=0x004639; 	X(PUSH(*(dw*)(raddr(ds,bx+0x14))));	// 16590 push    word ptr [bx+14h] ;~ 0613:4639
cs=0x613;eip=0x00463c; 	X(PUSH(*(dw*)(raddr(ds,bx+0x12))));	// 16591 push    word ptr [bx+12h] ;~ 0613:463C
cs=0x613;eip=0x00463f; 	X(PUSH(*(dw*)(raddr(ds,bx+0x20))));	// 16592 push    word ptr [bx+20h] ;~ 0613:463F
cs=0x613;eip=0x004642; 	X(PUSH(word_4408c));	// 16593 push    word_4408C ;~ 0613:4642
cs=0x613;eip=0x004646; 	R(CALLF(audio_op_unk2,0));	// 16594 call    audio_op_unk2 ;~ 0613:4646
cs=0x613;eip=0x00464b; 	T(ADD(sp, 0x12));	// 16595 add     sp, 12h ;~ 0613:464B
loc_18d5e:
	// 5398 
cs=0x613;eip=0x00464e; 	X(POP(bp));	// 16598 pop     bp ;~ 0613:464E
cs=0x613;eip=0x00464f; 	R(RETF(0));	// 16599 retf ;~ 0613:464F
sub_18d60:
	// 16607 
#undef var_30
#define var_30 -0x30
	// 16610 var_30          = word ptr -30h ;~ 0613:4650
#undef var_2e
#define var_2e -0x2E
	// 16611 var_2E          = word ptr -2Eh ;~ 0613:4650
#undef var_2c
#define var_2c -0x2C
	// 16612 var_2C          = word ptr -2Ch ;~ 0613:4650
#undef var_2a
#define var_2a -0x2A
	// 16613 var_2A          = word ptr -2Ah ;~ 0613:4650
#undef var_28
#define var_28 -0x28
	// 16614 var_28          = byte ptr -28h ;~ 0613:4650
#undef var_26
#define var_26 -0x26
	// 16615 var_26          = word ptr -26h ;~ 0613:4650
#undef var_24
#define var_24 -0x24
	// 16616 var_24          = word ptr -24h ;~ 0613:4650
#undef var_22
#define var_22 -0x22
	// 16617 var_22          = word ptr -22h ;~ 0613:4650
#undef var_20
#define var_20 -0x20
	// 16618 var_20          = word ptr -20h ;~ 0613:4650
#undef var_1e
#define var_1e -0x1E
	// 16619 var_1E          = word ptr -1Eh ;~ 0613:4650
#undef var_1c
#define var_1c -0x1C
	// 16620 var_1C          = byte ptr -1Ch ;~ 0613:4650
#undef var_1a
#define var_1a -0x1A
	// 16621 var_1A          = word ptr -1Ah ;~ 0613:4650
#undef var_18
#define var_18 -0x18
	// 16622 var_18          = byte ptr -18h ;~ 0613:4650
#undef var_16
#define var_16 -0x16
	// 16623 var_16          = byte ptr -16h ;~ 0613:4650
#undef var_14
#define var_14 -0x14
	// 16624 var_14          = word ptr -14h ;~ 0613:4650
#undef var_12
#define var_12 -0x12
	// 16625 var_12          = word ptr -12h ;~ 0613:4650
#undef var_10
#define var_10 -0x10
	// 16626 var_10          = byte ptr -10h ;~ 0613:4650
#undef var_e
#define var_e -0x0E
	// 16627 var_E           = word ptr -0Eh ;~ 0613:4650
#undef var_c
#define var_c -0x0C
	// 16628 var_C           = word ptr -0Ch ;~ 0613:4650
#undef var_a
#define var_a -0x0A
	// 16629 var_A           = word ptr -0Ah ;~ 0613:4650
#undef var_8
#define var_8 -8
	// 16630 var_8           = word ptr -8 ;~ 0613:4650
#undef var_6
#define var_6 -6
	// 16631 var_6           = dword ptr -6 ;~ 0613:4650
#undef var_2
#define var_2 -2
	// 16632 var_2           = byte ptr -2 ;~ 0613:4650
#undef arg_0
#define arg_0 6
	// 16633 arg_0           = word ptr  6 ;~ 0613:4650
#undef arg_2
#define arg_2 8
	// 16634 arg_2           = word ptr  8 ;~ 0613:4650
#undef arg_4
#define arg_4 0x0A
	// 16635 arg_4           = byte ptr  0Ah ;~ 0613:4650
#undef arg_6
#define arg_6 0x0C
	// 16636 arg_6           = word ptr  0Ch ;~ 0613:4650
ret_613_4650:
	// 5399 
cs=0x613;eip=0x004650; 	X(PUSH(bp));	// 16638 push    bp ;~ 0613:4650
cs=0x613;eip=0x004651; 	T(MOV(bp, sp));	// 16639 mov     bp, sp ;~ 0613:4651
cs=0x613;eip=0x004653; 	T(SUB(sp, 0x30));	// 16640 sub     sp, 30h ;~ 0613:4653
cs=0x613;eip=0x004656; 	X(PUSH(di));	// 16641 push    di ;~ 0613:4656
cs=0x613;eip=0x004657; 	X(PUSH(si));	// 16642 push    si ;~ 0613:4657
cs=0x613;eip=0x004658; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 16643 mov     bx, [bp+arg_0] ;~ 0613:4658
cs=0x613;eip=0x00465b; 	T(LES(si, td17_trk_elem_ordered));	// 16644 les     si, td17_trk_elem_ordered ;~ 0613:465B
cs=0x613;eip=0x00465f; 	T(MOV(al, *(raddr(es,bx+si))));	// 16645 mov     al, es:[bx+si] ;~ 0613:465F
cs=0x613;eip=0x004662; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 16646 mov     [bp+var_2], al ;~ 0613:4662
cs=0x613;eip=0x004665; 	T(LES(si, trackdata18));	// 16647 les     si, trackdata18 ;~ 0613:4665
cs=0x613;eip=0x004669; 	T(MOV(al, *(raddr(es,bx+si))));	// 16648 mov     al, es:[bx+si] ;~ 0613:4669
cs=0x613;eip=0x00466c; 	T(AND(al, 0x0F));	// 16649 and     al, 0Fh ;~ 0613:466C
cs=0x613;eip=0x00466e; 	X(MOV(*(raddr(ss,bp+var_1c)), al));	// 16650 mov     [bp+var_1C], al ;~ 0613:466E
cs=0x613;eip=0x004671; 	T(MOV(al, *(raddr(es,bx+si))));	// 16651 mov     al, es:[bx+si] ;~ 0613:4671
cs=0x613;eip=0x004674; 	T(AND(al, 0x10));	// 16652 and     al, 10h ;~ 0613:4674
cs=0x613;eip=0x004676; 	X(MOV(*(raddr(ss,bp+var_28)), al));	// 16653 mov     [bp+var_28], al ;~ 0613:4676
cs=0x613;eip=0x004679; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 16654 mov     al, [bp+var_2] ;~ 0613:4679
cs=0x613;eip=0x00467c; 	T(SUB(ah, ah));	// 16655 sub     ah, ah ;~ 0613:467C
cs=0x613;eip=0x00467e; 	T(MOV(cx, ax));	// 16656 mov     cx, ax          ; * sizeof(struct TRACKOBJECT) ;~ 0613:467E
cs=0x613;eip=0x004680; 	T(SHL(ax, 1));	// 16657 shl     ax, 1 ;~ 0613:4680
cs=0x613;eip=0x004682; 	T(ADD(ax, cx));	// 16658 add     ax, cx ;~ 0613:4682
cs=0x613;eip=0x004684; 	T(SHL(ax, 1));	// 16659 shl     ax, 1 ;~ 0613:4684
cs=0x613;eip=0x004686; 	T(ADD(ax, cx));	// 16660 add     ax, cx ;~ 0613:4686
cs=0x613;eip=0x004688; 	T(SHL(ax, 1));	// 16661 shl     ax, 1 ;~ 0613:4688
cs=0x613;eip=0x00468a; 	T(ADD(ax, offset(dseg,trkobjectlist)));	// 16662 add     ax, offset trkObjectList ;~ 0613:468A
cs=0x613;eip=0x00468d; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), ax));	// 16663 mov     [bp+var_26], ax ;~ 0613:468D
cs=0x613;eip=0x004690; 	T(MOV(bx, ax));	// 16664 mov     bx, ax ;~ 0613:4690
cs=0x613;eip=0x004692; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 16665 mov     ax, [bx] ;~ 0613:4692
cs=0x613;eip=0x004694; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 16666 mov     [bp+var_14], ax ;~ 0613:4694
cs=0x613;eip=0x004697; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ds));	// 16667 mov     [bp+var_12], ds ;~ 0613:4697
cs=0x613;eip=0x00469a; 	T(MOV(al, *(raddr(ss,bp+var_1c))));	// 16668 mov     al, [bp+var_1C] ;~ 0613:469A
cs=0x613;eip=0x00469d; 	T(SUB(ah, ah));	// 16669 sub     ah, ah ;~ 0613:469D
cs=0x613;eip=0x00469f; 	T(MOV(cx, ax));	// 16670 mov     cx, ax          ; * sizeof(struct TRKOBJINFO) ;~ 0613:469F
cs=0x613;eip=0x0046a1; 	T(SHL(ax, 1));	// 16671 shl     ax, 1 ;~ 0613:46A1
cs=0x613;eip=0x0046a3; 	T(ADD(ax, cx));	// 16672 add     ax, cx ;~ 0613:46A3
cs=0x613;eip=0x0046a5; 	T(SHL(ax, 1));	// 16673 shl     ax, 1 ;~ 0613:46A5
cs=0x613;eip=0x0046a7; 	T(ADD(ax, cx));	// 16674 add     ax, cx ;~ 0613:46A7
cs=0x613;eip=0x0046a9; 	T(SHL(ax, 1));	// 16675 shl     ax, 1 ;~ 0613:46A9
cs=0x613;eip=0x0046ab; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_14))));	// 16676 add     ax, [bp+var_14] ;~ 0613:46AB
cs=0x613;eip=0x0046ae; 	T(MOV(dx, ds));	// 16677 mov     dx, ds ;~ 0613:46AE
cs=0x613;eip=0x0046b0; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 16678 mov     word ptr [bp+var_6], ax ;~ 0613:46B0
cs=0x613;eip=0x0046b3; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 16679 mov     word ptr [bp+var_6+2], dx ;~ 0613:46B3
cs=0x613;eip=0x0046b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), 0));	// 16680 mov     [bp+var_24], 0 ;~ 0613:46B6
cs=0x613;eip=0x0046bb; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 16681 les     bx, [bp+var_6] ;~ 0613:46BB
cs=0x613;eip=0x0046be; 	T(MOV(al, *(raddr(es,bx+5))));	// 16682 mov     al, es:[bx+5] ;~ 0613:46BE
cs=0x613;eip=0x0046c2; 	X(MOV(*(raddr(ss,bp+var_18)), al));	// 16683 mov     [bp+var_18], al ;~ 0613:46C2
cs=0x613;eip=0x0046c5; 	T(CMP(*(raddr(ss,bp+var_28)), 0));	// 16684 cmp     [bp+var_28], 0 ;~ 0613:46C5
cs=0x613;eip=0x0046c9; 	R(JNZ(loc_18de2));	// 16685 jnz     short loc_18DE2 ;~ 0613:46C9
cs=0x613;eip=0x0046cb; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 16686 mov     al, [bp+arg_4] ;~ 0613:46CB
cs=0x613;eip=0x0046ce; 	T(SHL(al, 1));	// 16687 shl     al, 1 ;~ 0613:46CE
cs=0x613;eip=0x0046d0; 	R(JMP(loc_18dec));	// 16688 jmp     short loc_18DEC ;~ 0613:46D0
loc_18de2:
	// 5400 
cs=0x613;eip=0x0046d2; 	T(MOV(al, *(raddr(ss,bp+var_18))));	// 16692 mov     al, [bp+var_18] ;~ 0613:46D2
cs=0x613;eip=0x0046d5; 	T(SUB(al, *(raddr(ss,bp+arg_4))));	// 16693 sub     al, [bp+arg_4] ;~ 0613:46D5
cs=0x613;eip=0x0046d8; 	T(SHL(al, 1));	// 16694 shl     al, 1 ;~ 0613:46D8
cs=0x613;eip=0x0046da; 	T(SUB(al, 2));	// 16695 sub     al, 2 ;~ 0613:46DA
loc_18dec:
	// 5401 
cs=0x613;eip=0x0046dc; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 16698 mov     [bp+var_10], al ;~ 0613:46DC
cs=0x613;eip=0x0046df; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0));	// 16699 cmp     [bp+arg_6], 0 ;~ 0613:46DF
cs=0x613;eip=0x0046e3; 	R(JZ(loc_18e1a));	// 16700 jz      short loc_18E1A ;~ 0613:46E3
cs=0x613;eip=0x0046e5; 	T(MOV(al, *(raddr(es,bx+0x0D))));	// 16701 mov     al, es:[bx+0Dh] ;~ 0613:46E5
cs=0x613;eip=0x0046e9; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 16702 mov     [bp+var_16], al ;~ 0613:46E9
cs=0x613;eip=0x0046ec; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_26))));	// 16703 mov     bx, [bp+var_26] ;~ 0613:46EC
cs=0x613;eip=0x0046ef; 	T(MOV(al, *(raddr(ds,bx+9))));	// 16704 mov     al, [bx+9] ;~ 0613:46EF
cs=0x613;eip=0x0046f2; 	X(MOV(*(db*)(raddr(ss,bp+var_1a)), al));	// 16705 mov     byte ptr [bp+var_1A], al ;~ 0613:46F2
cs=0x613;eip=0x0046f5; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_1a))));	// 16706 mov     si, [bp+var_1A] ;~ 0613:46F5
cs=0x613;eip=0x0046f8; 	T(AND(si, 0x0FF));	// 16707 and     si, 0FFh ;~ 0613:46F8
cs=0x613;eip=0x0046fc; 	T(MOV(bl, *(raddr(ss,bp+var_16))));	// 16708 mov     bl, [bp+var_16] ;~ 0613:46FC
cs=0x613;eip=0x0046ff; 	T(SUB(bh, bh));	// 16709 sub     bh, bh ;~ 0613:46FF
cs=0x613;eip=0x004701; 	T(MOV(al, *((&oppnentsped)+bx+si)));	// 16710 mov     al, oppnentSped[bx+si] ;~ 0613:4701
cs=0x613;eip=0x004705; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 16711 mov     bx, [bp+arg_6] ;~ 0613:4705
cs=0x613;eip=0x004708; 	X(MOV(*(raddr(ds,bx)), al));	// 16712 mov     [bx], al ;~ 0613:4708
loc_18e1a:
	// 5402 
cs=0x613;eip=0x00470a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 16715 les     bx, [bp+var_6] ;~ 0613:470A
cs=0x613;eip=0x00470d; 	T(CMP(*(dw*)(raddr(es,bx+0x0A)), 0));	// 16716 cmp     word ptr es:[bx+0Ah], 0 ;~ 0613:470D
cs=0x613;eip=0x004712; 	R(JZ(loc_18e29));	// 16717 jz      short loc_18E29 ;~ 0613:4712
cs=0x613;eip=0x004714; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), 1));	// 16718 mov     [bp+var_24], 1 ;~ 0613:4714
loc_18e29:
	// 5403 
cs=0x613;eip=0x004719; 	T(CMP(*(raddr(ss,bp+var_28)), 0));	// 16721 cmp     [bp+var_28], 0 ;~ 0613:4719
cs=0x613;eip=0x00471d; 	R(JZ(loc_18e76));	// 16722 jz      short loc_18E76 ;~ 0613:471D
cs=0x613;eip=0x00471f; 	T(CMP(*(dw*)(raddr(ss,bp+var_24)), 0));	// 16723 cmp     [bp+var_24], 0 ;~ 0613:471F
cs=0x613;eip=0x004723; 	R(JZ(loc_18e3c));	// 16724 jz      short loc_18E3C ;~ 0613:4723
cs=0x613;eip=0x004725; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 16725 mov     ax, es:[bx+0Ah] ;~ 0613:4725
cs=0x613;eip=0x004729; 	R(JMP(loc_18e7d));	// 16726 jmp     short loc_18E7D ;~ 0613:4729
loc_18e3c:
	// 5404 
cs=0x613;eip=0x00472c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 16731 les     bx, [bp+var_6] ;~ 0613:472C
cs=0x613;eip=0x00472f; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 16732 mov     ax, es:[bx+8] ;~ 0613:472F
cs=0x613;eip=0x004733; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 16733 mov     [bp+var_2C], ax ;~ 0613:4733
cs=0x613;eip=0x004736; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), ds));	// 16734 mov     [bp+var_2A], ds ;~ 0613:4736
cs=0x613;eip=0x004739; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 16735 mov     al, [bp+var_10] ;~ 0613:4739
cs=0x613;eip=0x00473c; 	T(SUB(ah, ah));	// 16736 sub     ah, ah ;~ 0613:473C
cs=0x613;eip=0x00473e; 	T(MOV(cx, ax));	// 16737 mov     cx, ax ;~ 0613:473E
cs=0x613;eip=0x004740; 	T(SHL(ax, 1));	// 16738 shl     ax, 1 ;~ 0613:4740
cs=0x613;eip=0x004742; 	T(ADD(ax, cx));	// 16739 add     ax, cx ;~ 0613:4742
cs=0x613;eip=0x004744; 	T(SHL(ax, 1));	// 16740 shl     ax, 1 ;~ 0613:4744
cs=0x613;eip=0x004746; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 16741 add     ax, [bp+var_2C] ;~ 0613:4746
cs=0x613;eip=0x004749; 	T(MOV(dx, ds));	// 16742 mov     dx, ds ;~ 0613:4749
cs=0x613;eip=0x00474b; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 16743 mov     [bp+var_30], ax ;~ 0613:474B
cs=0x613;eip=0x00474e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), dx));	// 16744 mov     [bp+var_2E], dx ;~ 0613:474E
cs=0x613;eip=0x004751; 	T(ADD(ax, 6));	// 16745 add     ax, 6 ;~ 0613:4751
cs=0x613;eip=0x004754; 	T(di = bp+var_c);	// 16746 lea     di, [bp+var_C] ;~ 0613:4754
cs=0x613;eip=0x004757; 	T(MOV(si, ax));	// 16747 mov     si, ax ;~ 0613:4757
cs=0x613;eip=0x004759; 	X(PUSH(ss));	// 16748 push    ss ;~ 0613:4759
cs=0x613;eip=0x00475a; 	X(POP(es));	// 16749 pop     es ;~ 0613:475A
cs=0x613;eip=0x00475b; 	X(PUSH(ds));	// 16750 push    ds ;~ 0613:475B
cs=0x613;eip=0x00475c; 	X(MOVSW);	// 16751 movsw ;~ 0613:475C
cs=0x613;eip=0x00475d; 	X(MOVSW);	// 16752 movsw ;~ 0613:475D
cs=0x613;eip=0x00475e; 	X(MOVSW);	// 16753 movsw ;~ 0613:475E
cs=0x613;eip=0x00475f; 	X(POP(ds));	// 16754 pop     ds ;~ 0613:475F
cs=0x613;eip=0x004760; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_30))));	// 16755 mov     ax, [bp+var_30] ;~ 0613:4760
cs=0x613;eip=0x004763; 	R(JMP(loc_18eaa));	// 16756 jmp     short loc_18EAA ;~ 0613:4763
loc_18e76:
	// 5405 
cs=0x613;eip=0x004766; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 16761 les     bx, [bp+var_6] ;~ 0613:4766
cs=0x613;eip=0x004769; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 16762 mov     ax, es:[bx+8] ;~ 0613:4769
loc_18e7d:
	// 5406 
cs=0x613;eip=0x00476d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 16765 mov     [bp+var_2C], ax ;~ 0613:476D
cs=0x613;eip=0x004770; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), ds));	// 16766 mov     [bp+var_2A], ds ;~ 0613:4770
cs=0x613;eip=0x004773; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 16767 mov     al, [bp+var_10] ;~ 0613:4773
cs=0x613;eip=0x004776; 	T(SUB(ah, ah));	// 16768 sub     ah, ah ;~ 0613:4776
cs=0x613;eip=0x004778; 	T(MOV(cx, ax));	// 16769 mov     cx, ax ;~ 0613:4778
cs=0x613;eip=0x00477a; 	T(SHL(ax, 1));	// 16770 shl     ax, 1 ;~ 0613:477A
cs=0x613;eip=0x00477c; 	T(ADD(ax, cx));	// 16771 add     ax, cx ;~ 0613:477C
cs=0x613;eip=0x00477e; 	T(SHL(ax, 1));	// 16772 shl     ax, 1 ;~ 0613:477E
cs=0x613;eip=0x004780; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 16773 add     ax, [bp+var_2C] ;~ 0613:4780
cs=0x613;eip=0x004783; 	T(MOV(dx, ds));	// 16774 mov     dx, ds ;~ 0613:4783
cs=0x613;eip=0x004785; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 16775 mov     [bp+var_30], ax ;~ 0613:4785
cs=0x613;eip=0x004788; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), dx));	// 16776 mov     [bp+var_2E], dx ;~ 0613:4788
cs=0x613;eip=0x00478b; 	T(di = bp+var_c);	// 16777 lea     di, [bp+var_C] ;~ 0613:478B
cs=0x613;eip=0x00478e; 	T(MOV(si, ax));	// 16778 mov     si, ax ;~ 0613:478E
cs=0x613;eip=0x004790; 	X(PUSH(ss));	// 16779 push    ss ;~ 0613:4790
cs=0x613;eip=0x004791; 	X(POP(es));	// 16780 pop     es ;~ 0613:4791
cs=0x613;eip=0x004792; 	X(PUSH(ds));	// 16781 push    ds ;~ 0613:4792
cs=0x613;eip=0x004793; 	X(MOVSW);	// 16782 movsw ;~ 0613:4793
cs=0x613;eip=0x004794; 	X(MOVSW);	// 16783 movsw ;~ 0613:4794
cs=0x613;eip=0x004795; 	X(MOVSW);	// 16784 movsw ;~ 0613:4795
cs=0x613;eip=0x004796; 	X(POP(ds));	// 16785 pop     ds ;~ 0613:4796
cs=0x613;eip=0x004797; 	T(ADD(ax, 6));	// 16786 add     ax, 6 ;~ 0613:4797
loc_18eaa:
	// 5407 
cs=0x613;eip=0x00479a; 	T(di = bp+var_22);	// 16789 lea     di, [bp+var_22] ;~ 0613:479A
cs=0x613;eip=0x00479d; 	T(MOV(si, ax));	// 16790 mov     si, ax ;~ 0613:479D
cs=0x613;eip=0x00479f; 	X(PUSH(ds));	// 16791 push    ds ;~ 0613:479F
cs=0x613;eip=0x0047a0; 	T(MOV(ds, dx));	// 16792 mov     ds, dx ;~ 0613:47A0
cs=0x613;eip=0x0047a2; 	X(MOVSW);	// 16793 movsw ;~ 0613:47A2
cs=0x613;eip=0x0047a3; 	X(MOVSW);	// 16794 movsw ;~ 0613:47A3
cs=0x613;eip=0x0047a4; 	X(MOVSW);	// 16795 movsw ;~ 0613:47A4
cs=0x613;eip=0x0047a5; 	X(POP(ds));	// 16796 pop     ds ;~ 0613:47A5
cs=0x613;eip=0x0047a6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 16797 les     bx, [bp+var_6] ;~ 0613:47A6
cs=0x613;eip=0x0047a9; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 16798 mov     ax, es:[bx+6] ;~ 0613:47A9
cs=0x613;eip=0x0047ad; 	T(CMP(ax, 0x100));	// 16799 cmp     ax, 100h ;~ 0613:47AD
cs=0x613;eip=0x0047b0; 	R(JNZ(loc_18ec5));	// 16800 jnz     short loc_18EC5 ;~ 0613:47B0
cs=0x613;eip=0x0047b2; 	R(JMP(loc_18f74));	// 16801 jmp     loc_18F74 ;~ 0613:47B2
loc_18ec5:
	// 5408 
cs=0x613;eip=0x0047b5; 	T(CMP(ax, 0x200));	// 16805 cmp     ax, 200h ;~ 0613:47B5
cs=0x613;eip=0x0047b8; 	R(JNZ(loc_18ecd));	// 16806 jnz     short loc_18ECD ;~ 0613:47B8
cs=0x613;eip=0x0047ba; 	R(JMP(loc_18f52));	// 16807 jmp     loc_18F52 ;~ 0613:47BA
loc_18ecd:
	// 5409 
cs=0x613;eip=0x0047bd; 	T(CMP(ax, 0x300));	// 16811 cmp     ax, 300h ;~ 0613:47BD
cs=0x613;eip=0x0047c0; 	R(JNZ(loc_18efa));	// 16812 jnz     short loc_18EFA ;~ 0613:47C0
cs=0x613;eip=0x0047c2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 16813 mov     ax, [bp+var_C] ;~ 0613:47C2
cs=0x613;eip=0x0047c5; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 16814 mov     [bp+var_E], ax ;~ 0613:47C5
cs=0x613;eip=0x0047c8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 16815 mov     ax, [bp+var_8] ;~ 0613:47C8
cs=0x613;eip=0x0047cb; 	T(NEG(ax));	// 16816 neg     ax ;~ 0613:47CB
cs=0x613;eip=0x0047cd; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 16817 mov     [bp+var_C], ax ;~ 0613:47CD
cs=0x613;eip=0x0047d0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 16818 mov     ax, [bp+var_E] ;~ 0613:47D0
cs=0x613;eip=0x0047d3; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 16819 mov     [bp+var_8], ax ;~ 0613:47D3
cs=0x613;eip=0x0047d6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 16820 mov     ax, [bp+var_22] ;~ 0613:47D6
cs=0x613;eip=0x0047d9; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 16821 mov     [bp+var_E], ax ;~ 0613:47D9
cs=0x613;eip=0x0047dc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 16822 mov     ax, [bp+var_1E] ;~ 0613:47DC
cs=0x613;eip=0x0047df; 	T(NEG(ax));	// 16823 neg     ax ;~ 0613:47DF
cs=0x613;eip=0x0047e1; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 16824 mov     [bp+var_22], ax ;~ 0613:47E1
cs=0x613;eip=0x0047e4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 16825 mov     ax, [bp+var_E] ;~ 0613:47E4
loc_18ef7:
	// 5410 
cs=0x613;eip=0x0047e7; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 16828 mov     [bp+var_1E], ax ;~ 0613:47E7
loc_18efa:
	// 5411 
cs=0x613;eip=0x0047ea; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 16832 mov     bx, [bp+arg_0] ;~ 0613:47EA
cs=0x613;eip=0x0047ed; 	T(LES(si, td21_col_from_path));	// 16833 les     si, td21_col_from_path ;~ 0613:47ED
cs=0x613;eip=0x0047f1; 	T(MOV(al, *(raddr(es,bx+si))));	// 16834 mov     al, es:[bx+si] ;~ 0613:47F1
cs=0x613;eip=0x0047f4; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 16835 mov     [bp+var_16], al ;~ 0613:47F4
cs=0x613;eip=0x0047f7; 	T(LES(si, td22_row_from_path));	// 16836 les     si, td22_row_from_path ;~ 0613:47F7
cs=0x613;eip=0x0047fb; 	T(MOV(al, *(raddr(es,bx+si))));	// 16837 mov     al, es:[bx+si] ;~ 0613:47FB
cs=0x613;eip=0x0047fe; 	X(MOV(*(db*)(raddr(ss,bp+var_1a)), al));	// 16838 mov     byte ptr [bp+var_1A], al ;~ 0613:47FE
cs=0x613;eip=0x004801; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x0FFFF));	// 16839 cmp     [bp+var_A], 0FFFFh ;~ 0613:4801
cs=0x613;eip=0x004805; 	R(JZ(loc_18f3b));	// 16840 jz      short loc_18F3B ;~ 0613:4805
cs=0x613;eip=0x004807; 	T(MOV(bl, al));	// 16841 mov     bl, al ;~ 0613:4807
cs=0x613;eip=0x004809; 	T(SUB(bh, bh));	// 16842 sub     bh, bh ;~ 0613:4809
cs=0x613;eip=0x00480b; 	T(SHL(bx, 1));	// 16843 shl     bx, 1 ;~ 0613:480B
cs=0x613;eip=0x00480d; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 16844 mov     bx, terrainrows[bx] ;~ 0613:480D
cs=0x613;eip=0x004811; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 16845 mov     al, [bp+var_16] ;~ 0613:4811
cs=0x613;eip=0x004814; 	T(SUB(ah, ah));	// 16846 sub     ah, ah ;~ 0613:4814
cs=0x613;eip=0x004816; 	T(ADD(bx, ax));	// 16847 add     bx, ax ;~ 0613:4816
cs=0x613;eip=0x004818; 	T(LES(si, td15_terr_map_main));	// 16848 les     si, td15_terr_map_main ;~ 0613:4818
cs=0x613;eip=0x00481c; 	T(CMP(*(raddr(es,bx+si)), 6));	// 16849 cmp     byte ptr es:[bx+si], 6 ;~ 0613:481C
cs=0x613;eip=0x004820; 	R(JNZ(loc_18f3b));	// 16850 jnz     short loc_18F3B ;~ 0613:4820
cs=0x613;eip=0x004822; 	T(MOV(ax, *(dw*)(((db*)hillheightconsts)+2)));	// 16851 mov     ax, hillHeightConsts+2 ;~ 0613:4822
cs=0x613;eip=0x004825; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), ax));	// 16852 add     [bp+var_A], ax ;~ 0613:4825
cs=0x613;eip=0x004828; 	X(ADD(*(dw*)(raddr(ss,bp+var_20)), ax));	// 16853 add     [bp+var_20], ax ;~ 0613:4828
loc_18f3b:
	// 5412 
cs=0x613;eip=0x00482b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_26))));	// 16857 mov     bx, [bp+var_26] ;~ 0613:482B
cs=0x613;eip=0x00482e; 	T(TEST(*(raddr(ds,bx+0x0B)), 1));	// 16858 test    byte ptr [bx+0Bh], 1 ;~ 0613:482E
cs=0x613;eip=0x004832; 	R(JZ(loc_18f9c));	// 16859 jz      short loc_18F9C ;~ 0613:4832
cs=0x613;eip=0x004834; 	T(MOV(bl, *(db*)(raddr(ss,bp+var_1a))));	// 16860 mov     bl, byte ptr [bp+var_1A] ;~ 0613:4834
cs=0x613;eip=0x004837; 	T(SUB(bh, bh));	// 16861 sub     bh, bh ;~ 0613:4837
cs=0x613;eip=0x004839; 	T(SHL(bx, 1));	// 16862 shl     bx, 1 ;~ 0613:4839
cs=0x613;eip=0x00483b; 	T(MOV(si, *(dw*)(((db*)&trackpos)+bx)));	// 16863 mov     si, trackpos[bx] ;~ 0613:483B
cs=0x613;eip=0x00483f; 	R(JMP(loc_18fa7));	// 16864 jmp     short loc_18FA7 ;~ 0613:483F
loc_18f52:
	// 5413 
cs=0x613;eip=0x004842; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 16869 mov     ax, [bp+var_8] ;~ 0613:4842
cs=0x613;eip=0x004845; 	T(NEG(ax));	// 16870 neg     ax ;~ 0613:4845
cs=0x613;eip=0x004847; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 16871 mov     [bp+var_8], ax ;~ 0613:4847
cs=0x613;eip=0x00484a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 16872 mov     ax, [bp+var_C] ;~ 0613:484A
cs=0x613;eip=0x00484d; 	T(NEG(ax));	// 16873 neg     ax ;~ 0613:484D
cs=0x613;eip=0x00484f; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 16874 mov     [bp+var_C], ax ;~ 0613:484F
cs=0x613;eip=0x004852; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 16875 mov     ax, [bp+var_1E] ;~ 0613:4852
cs=0x613;eip=0x004855; 	T(NEG(ax));	// 16876 neg     ax ;~ 0613:4855
cs=0x613;eip=0x004857; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 16877 mov     [bp+var_1E], ax ;~ 0613:4857
cs=0x613;eip=0x00485a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 16878 mov     ax, [bp+var_22] ;~ 0613:485A
cs=0x613;eip=0x00485d; 	T(NEG(ax));	// 16879 neg     ax ;~ 0613:485D
cs=0x613;eip=0x00485f; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 16880 mov     [bp+var_22], ax ;~ 0613:485F
cs=0x613;eip=0x004862; 	R(JMP(loc_18efa));	// 16881 jmp     short loc_18EFA ;~ 0613:4862
loc_18f74:
	// 5414 
cs=0x613;eip=0x004864; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 16885 mov     ax, [bp+var_C] ;~ 0613:4864
cs=0x613;eip=0x004867; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 16886 mov     [bp+var_E], ax ;~ 0613:4867
cs=0x613;eip=0x00486a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 16887 mov     ax, [bp+var_8] ;~ 0613:486A
cs=0x613;eip=0x00486d; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 16888 mov     [bp+var_C], ax ;~ 0613:486D
cs=0x613;eip=0x004870; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 16889 mov     ax, [bp+var_E] ;~ 0613:4870
cs=0x613;eip=0x004873; 	T(NEG(ax));	// 16890 neg     ax ;~ 0613:4873
cs=0x613;eip=0x004875; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 16891 mov     [bp+var_8], ax ;~ 0613:4875
cs=0x613;eip=0x004878; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 16892 mov     ax, [bp+var_22] ;~ 0613:4878
cs=0x613;eip=0x00487b; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 16893 mov     [bp+var_E], ax ;~ 0613:487B
cs=0x613;eip=0x00487e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 16894 mov     ax, [bp+var_1E] ;~ 0613:487E
cs=0x613;eip=0x004881; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 16895 mov     [bp+var_22], ax ;~ 0613:4881
cs=0x613;eip=0x004884; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 16896 mov     ax, [bp+var_E] ;~ 0613:4884
cs=0x613;eip=0x004887; 	T(NEG(ax));	// 16897 neg     ax ;~ 0613:4887
cs=0x613;eip=0x004889; 	R(JMP(loc_18ef7));	// 16898 jmp     loc_18EF7 ;~ 0613:4889
loc_18f9c:
	// 5415 
cs=0x613;eip=0x00488c; 	T(MOV(bl, *(db*)(raddr(ss,bp+var_1a))));	// 16902 mov     bl, byte ptr [bp+var_1A] ;~ 0613:488C
cs=0x613;eip=0x00488f; 	T(SUB(bh, bh));	// 16903 sub     bh, bh ;~ 0613:488F
cs=0x613;eip=0x004891; 	T(SHL(bx, 1));	// 16904 shl     bx, 1 ;~ 0613:4891
cs=0x613;eip=0x004893; 	T(MOV(si, *(dw*)(((db*)trackcenterpos)+bx)));	// 16905 mov     si, trackcenterpos[bx] ;~ 0613:4893
loc_18fa7:
	// 5416 
cs=0x613;eip=0x004897; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), si));	// 16908 add     [bp+var_8], si ;~ 0613:4897
cs=0x613;eip=0x00489a; 	X(ADD(*(dw*)(raddr(ss,bp+var_1e)), si));	// 16909 add     [bp+var_1E], si ;~ 0613:489A
cs=0x613;eip=0x00489d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_26))));	// 16910 mov     bx, [bp+var_26] ;~ 0613:489D
cs=0x613;eip=0x0048a0; 	T(TEST(*(raddr(ds,bx+0x0B)), 2));	// 16911 test    byte ptr [bx+0Bh], 2 ;~ 0613:48A0
cs=0x613;eip=0x0048a4; 	R(JZ(loc_18fc4));	// 16912 jz      short loc_18FC4 ;~ 0613:48A4
cs=0x613;eip=0x0048a6; 	T(MOV(bl, *(raddr(ss,bp+var_16))));	// 16913 mov     bl, [bp+var_16] ;~ 0613:48A6
cs=0x613;eip=0x0048a9; 	T(SUB(bh, bh));	// 16914 sub     bh, bh ;~ 0613:48A9
cs=0x613;eip=0x0048ab; 	T(SHL(bx, 1));	// 16915 shl     bx, 1 ;~ 0613:48AB
cs=0x613;eip=0x0048ad; 	T(MOV(si, *(dw*)((((db*)trackpos2)+2)+bx)));	// 16916 mov     si, (trackpos2+2)[bx] ;~ 0613:48AD
cs=0x613;eip=0x0048b1; 	R(JMP(loc_18fcf));	// 16917 jmp     short loc_18FCF ;~ 0613:48B1
loc_18fc4:
	// 5417 
cs=0x613;eip=0x0048b4; 	T(MOV(bl, *(raddr(ss,bp+var_16))));	// 16922 mov     bl, [bp+var_16] ;~ 0613:48B4
cs=0x613;eip=0x0048b7; 	T(SUB(bh, bh));	// 16923 sub     bh, bh ;~ 0613:48B7
cs=0x613;eip=0x0048b9; 	T(SHL(bx, 1));	// 16924 shl     bx, 1 ;~ 0613:48B9
cs=0x613;eip=0x0048bb; 	T(MOV(si, *(dw*)(((db*)trackcenterpos2)+bx)));	// 16925 mov     si, trackcenterpos2[bx] ;~ 0613:48BB
loc_18fcf:
	// 5418 
cs=0x613;eip=0x0048bf; 	X(ADD(*(dw*)(raddr(ss,bp+var_c)), si));	// 16928 add     [bp+var_C], si ;~ 0613:48BF
cs=0x613;eip=0x0048c2; 	X(ADD(*(dw*)(raddr(ss,bp+var_22)), si));	// 16929 add     [bp+var_22], si ;~ 0613:48C2
cs=0x613;eip=0x0048c5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 16930 mov     ax, [bp+var_22] ;~ 0613:48C5
cs=0x613;eip=0x0048c8; 	T(CWD);	// 16931 cwd ;~ 0613:48C8
cs=0x613;eip=0x0048c9; 	T(MOV(cx, ax));	// 16932 mov     cx, ax ;~ 0613:48C9
cs=0x613;eip=0x0048cb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 16933 mov     ax, [bp+var_C] ;~ 0613:48CB
cs=0x613;eip=0x0048ce; 	T(MOV(bx, dx));	// 16934 mov     bx, dx ;~ 0613:48CE
cs=0x613;eip=0x0048d0; 	T(CWD);	// 16935 cwd ;~ 0613:48D0
cs=0x613;eip=0x0048d1; 	T(ADD(ax, cx));	// 16936 add     ax, cx ;~ 0613:48D1
cs=0x613;eip=0x0048d3; 	T(ADC(dx, bx));	// 16937 adc     dx, bx ;~ 0613:48D3
cs=0x613;eip=0x0048d5; 	T(SAR(dx, 1));	// 16938 sar     dx, 1 ;~ 0613:48D5
cs=0x613;eip=0x0048d7; 	T(RCR(ax, 1));	// 16939 rcr     ax, 1 ;~ 0613:48D7
cs=0x613;eip=0x0048d9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 16940 mov     bx, [bp+arg_2] ;~ 0613:48D9
cs=0x613;eip=0x0048dc; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 16941 mov     [bx+0], ax ;~ 0613:48DC
cs=0x613;eip=0x0048de; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x0FFFF));	// 16942 cmp     [bp+var_A], 0FFFFh ;~ 0613:48DE
cs=0x613;eip=0x0048e2; 	R(JNZ(loc_18ffe));	// 16943 jnz     short loc_18FFE ;~ 0613:48E2
cs=0x613;eip=0x0048e4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 16944 mov     bx, [bp+arg_2] ;~ 0613:48E4
cs=0x613;eip=0x0048e7; 	X(MOV(*(dw*)(raddr(ds,bx+2)), 0x0FFFF));	// 16945 mov     word ptr [bx+2], 0FFFFh ;~ 0613:48E7
cs=0x613;eip=0x0048ec; 	R(JMP(loc_19018));	// 16946 jmp     short loc_19018 ;~ 0613:48EC
loc_18ffe:
	// 5419 
cs=0x613;eip=0x0048ee; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_20))));	// 16950 mov     ax, [bp+var_20] ;~ 0613:48EE
cs=0x613;eip=0x0048f1; 	T(CWD);	// 16951 cwd ;~ 0613:48F1
cs=0x613;eip=0x0048f2; 	T(MOV(cx, ax));	// 16952 mov     cx, ax ;~ 0613:48F2
cs=0x613;eip=0x0048f4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 16953 mov     ax, [bp+var_A] ;~ 0613:48F4
cs=0x613;eip=0x0048f7; 	T(MOV(bx, dx));	// 16954 mov     bx, dx ;~ 0613:48F7
cs=0x613;eip=0x0048f9; 	T(CWD);	// 16955 cwd ;~ 0613:48F9
cs=0x613;eip=0x0048fa; 	T(ADD(ax, cx));	// 16956 add     ax, cx ;~ 0613:48FA
cs=0x613;eip=0x0048fc; 	T(ADC(dx, bx));	// 16957 adc     dx, bx ;~ 0613:48FC
cs=0x613;eip=0x0048fe; 	T(SAR(dx, 1));	// 16958 sar     dx, 1 ;~ 0613:48FE
cs=0x613;eip=0x004900; 	T(RCR(ax, 1));	// 16959 rcr     ax, 1 ;~ 0613:4900
cs=0x613;eip=0x004902; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 16960 mov     bx, [bp+arg_2] ;~ 0613:4902
cs=0x613;eip=0x004905; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 16961 mov     [bx+2], ax ;~ 0613:4905
loc_19018:
	// 5420 
cs=0x613;eip=0x004908; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 16964 mov     ax, [bp+var_1E] ;~ 0613:4908
cs=0x613;eip=0x00490b; 	T(CWD);	// 16965 cwd ;~ 0613:490B
cs=0x613;eip=0x00490c; 	T(MOV(cx, ax));	// 16966 mov     cx, ax ;~ 0613:490C
cs=0x613;eip=0x00490e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 16967 mov     ax, [bp+var_8] ;~ 0613:490E
cs=0x613;eip=0x004911; 	T(MOV(bx, dx));	// 16968 mov     bx, dx ;~ 0613:4911
cs=0x613;eip=0x004913; 	T(CWD);	// 16969 cwd ;~ 0613:4913
cs=0x613;eip=0x004914; 	T(ADD(ax, cx));	// 16970 add     ax, cx ;~ 0613:4914
cs=0x613;eip=0x004916; 	T(ADC(dx, bx));	// 16971 adc     dx, bx ;~ 0613:4916
cs=0x613;eip=0x004918; 	T(SAR(dx, 1));	// 16972 sar     dx, 1 ;~ 0613:4918
cs=0x613;eip=0x00491a; 	T(RCR(ax, 1));	// 16973 rcr     ax, 1 ;~ 0613:491A
cs=0x613;eip=0x00491c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 16974 mov     bx, [bp+arg_2] ;~ 0613:491C
cs=0x613;eip=0x00491f; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 16975 mov     [bx+4], ax ;~ 0613:491F
cs=0x613;eip=0x004922; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 16976 mov     bx, [bp+arg_2] ;~ 0613:4922
cs=0x613;eip=0x004925; 	T(di = bx+6);	// 16977 lea     di, [bx+6] ;~ 0613:4925
cs=0x613;eip=0x004928; 	T(si = bp+var_c);	// 16978 lea     si, [bp+var_C] ;~ 0613:4928
cs=0x613;eip=0x00492b; 	X(PUSH(ds));	// 16979 push    ds ;~ 0613:492B
cs=0x613;eip=0x00492c; 	X(POP(es));	// 16980 pop     es ;~ 0613:492C
cs=0x613;eip=0x00492d; 	X(MOVSW);	// 16982 movsw ;~ 0613:492D
cs=0x613;eip=0x00492e; 	X(MOVSW);	// 16983 movsw ;~ 0613:492E
cs=0x613;eip=0x00492f; 	X(MOVSW);	// 16984 movsw ;~ 0613:492F
cs=0x613;eip=0x004930; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 16985 mov     bx, [bp+arg_2] ;~ 0613:4930
cs=0x613;eip=0x004933; 	T(di = bx+0x0C);	// 16986 lea     di, [bx+0Ch] ;~ 0613:4933
cs=0x613;eip=0x004936; 	T(si = bp+var_22);	// 16987 lea     si, [bp+var_22] ;~ 0613:4936
cs=0x613;eip=0x004939; 	X(MOVSW);	// 16988 movsw ;~ 0613:4939
cs=0x613;eip=0x00493a; 	X(MOVSW);	// 16989 movsw ;~ 0613:493A
cs=0x613;eip=0x00493b; 	X(MOVSW);	// 16990 movsw ;~ 0613:493B
cs=0x613;eip=0x00493c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 16991 mov     bx, [bp+arg_2] ;~ 0613:493C
cs=0x613;eip=0x00493f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_24))));	// 16992 mov     ax, [bp+var_24] ;~ 0613:493F
cs=0x613;eip=0x004942; 	X(MOV(*(dw*)(raddr(ds,bx+0x12)), ax));	// 16993 mov     [bx+12h], ax ;~ 0613:4942
cs=0x613;eip=0x004945; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 16994 mov     al, [bp+arg_4] ;~ 0613:4945
cs=0x613;eip=0x004948; 	T(CBW);	// 16995 cbw ;~ 0613:4948
cs=0x613;eip=0x004949; 	T(MOV(cl, *(raddr(ss,bp+var_18))));	// 16996 mov     cl, [bp+var_18] ;~ 0613:4949
cs=0x613;eip=0x00494c; 	T(SUB(ch, ch));	// 16997 sub     ch, ch ;~ 0613:494C
cs=0x613;eip=0x00494e; 	T(DEC(cx));	// 16998 dec     cx ;~ 0613:494E
cs=0x613;eip=0x00494f; 	T(CMP(cx, ax));	// 16999 cmp     cx, ax ;~ 0613:494F
cs=0x613;eip=0x004951; 	R(JNZ(loc_1906c));	// 17000 jnz     short loc_1906C ;~ 0613:4951
cs=0x613;eip=0x004953; 	T(MOV(ax, 1));	// 17001 mov     ax, 1 ;~ 0613:4953
cs=0x613;eip=0x004956; 	X(POP(si));	// 17002 pop     si ;~ 0613:4956
cs=0x613;eip=0x004957; 	X(POP(di));	// 17003 pop     di ;~ 0613:4957
cs=0x613;eip=0x004958; 	T(MOV(sp, bp));	// 17004 mov     sp, bp ;~ 0613:4958
cs=0x613;eip=0x00495a; 	X(POP(bp));	// 17005 pop     bp ;~ 0613:495A
cs=0x613;eip=0x00495b; 	R(RETF(0));	// 17006 retf ;~ 0613:495B
loc_1906c:
	// 5421 
cs=0x613;eip=0x00495c; 	T(SUB(ax, ax));	// 17010 sub     ax, ax ;~ 0613:495C
cs=0x613;eip=0x00495e; 	X(POP(si));	// 17011 pop     si ;~ 0613:495E
cs=0x613;eip=0x00495f; 	X(POP(di));	// 17012 pop     di ;~ 0613:495F
cs=0x613;eip=0x004960; 	T(MOV(sp, bp));	// 17013 mov     sp, bp ;~ 0613:4960
cs=0x613;eip=0x004962; 	X(POP(bp));	// 17014 pop     bp ;~ 0613:4962
cs=0x613;eip=0x004963; 	R(RETF(0));	// 17015 retf ;~ 0613:4963
car_car_coll_detect_maybe:
	// 17023 
#undef var_2a
#define var_2a -0x2A
	// 17026 var_2A          = word ptr -2Ah ;~ 0613:4964
#undef var_28
#define var_28 -0x28
	// 17027 var_28          = word ptr -28h ;~ 0613:4964
#undef var_26
#define var_26 -0x26
	// 17028 var_26          = word ptr -26h ;~ 0613:4964
#undef var_24
#define var_24 -0x24
	// 17029 var_24          = byte ptr -24h ;~ 0613:4964
#undef var_c
#define var_c -0x0C
	// 17030 var_C           = word ptr -0Ch ;~ 0613:4964
#undef var_a
#define var_a -0x0A
	// 17031 var_A           = word ptr -0Ah ;~ 0613:4964
#undef var_8
#define var_8 -8
	// 17032 var_8           = word ptr -8 ;~ 0613:4964
#undef var_6
#define var_6 -6
	// 17033 var_6           = byte ptr -6 ;~ 0613:4964
#undef var_4
#define var_4 -4
	// 17034 var_4           = word ptr -4 ;~ 0613:4964
#undef arg_0
#define arg_0 6
	// 17035 arg_0           = word ptr  6 ;~ 0613:4964
#undef arg_2
#define arg_2 8
	// 17036 arg_2           = word ptr  8 ;~ 0613:4964
#undef arg_4
#define arg_4 0x0A
	// 17037 arg_4           = word ptr  0Ah ;~ 0613:4964
#undef arg_6
#define arg_6 0x0C
	// 17038 arg_6           = word ptr  0Ch ;~ 0613:4964
ret_613_4964:
	// 5422 
cs=0x613;eip=0x004964; 	X(PUSH(bp));	// 17040 push    bp ;~ 0613:4964
cs=0x613;eip=0x004965; 	T(MOV(bp, sp));	// 17041 mov     bp, sp ;~ 0613:4965
cs=0x613;eip=0x004967; 	T(SUB(sp, 0x2A));	// 17042 sub     sp, 2Ah ;~ 0613:4967
cs=0x613;eip=0x00496a; 	X(PUSH(di));	// 17043 push    di ;~ 0613:496A
cs=0x613;eip=0x00496b; 	X(PUSH(si));	// 17044 push    si ;~ 0613:496B
cs=0x613;eip=0x00496c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 17045 mov     bx, [bp+arg_0] ;~ 0613:496C
cs=0x613;eip=0x00496f; 	T(MOV(si, *(dw*)(raddr(ds,bx+6))));	// 17046 mov     si, [bx+6]      ; the 4th field of collPoints ;~ 0613:496F
cs=0x613;eip=0x004972; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 17047 mov     bx, [bp+arg_4] ;~ 0613:4972
cs=0x613;eip=0x004975; 	T(ADD(si, *(dw*)(raddr(ds,bx+6))));	// 17048 add     si, [bx+6] ;~ 0613:4975
cs=0x613;eip=0x004978; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 17049 mov     bx, [bp+arg_2] ;~ 0613:4978
cs=0x613;eip=0x00497b; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_6))));	// 17050 mov     di, [bp+arg_6] ;~ 0613:497B
cs=0x613;eip=0x00497e; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 17051 mov     ax, [di] ;~ 0613:497E
cs=0x613;eip=0x004980; 	T(CMP(*(dw*)(raddr(ds,bx)), ax));	// 17052 cmp     [bx], ax ;~ 0613:4980
cs=0x613;eip=0x004982; 	R(JL(loc_19098));	// 17053 jl      short loc_19098 ;~ 0613:4982
cs=0x613;eip=0x004984; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 17054 mov     ax, [bx] ;~ 0613:4984
cs=0x613;eip=0x004986; 	T(MOV(bx, di));	// 17055 mov     bx, di ;~ 0613:4986
loc_19098:
	// 5423 
cs=0x613;eip=0x004988; 	T(SUB(ax, *(dw*)(raddr(ds,bx))));	// 17058 sub     ax, [bx] ;~ 0613:4988
cs=0x613;eip=0x00498a; 	T(CMP(ax, si));	// 17059 cmp     ax, si ;~ 0613:498A
cs=0x613;eip=0x00498c; 	R(JG(loc_190d2));	// 17060 jg      short loc_190D2 ;~ 0613:498C
cs=0x613;eip=0x00498e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 17061 mov     bx, [bp+arg_2] ;~ 0613:498E
cs=0x613;eip=0x004991; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_6))));	// 17062 mov     di, [bp+arg_6] ;~ 0613:4991
cs=0x613;eip=0x004994; 	T(MOV(ax, *(dw*)(raddr(ds,di+4))));	// 17063 mov     ax, [di+4] ;~ 0613:4994
cs=0x613;eip=0x004997; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 17064 cmp     [bx+4], ax ;~ 0613:4997
cs=0x613;eip=0x00499a; 	R(JL(loc_190b1));	// 17065 jl      short loc_190B1 ;~ 0613:499A
cs=0x613;eip=0x00499c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17066 mov     ax, [bx+4] ;~ 0613:499C
cs=0x613;eip=0x00499f; 	T(MOV(bx, di));	// 17067 mov     bx, di ;~ 0613:499F
loc_190b1:
	// 5424 
cs=0x613;eip=0x0049a1; 	T(SUB(ax, *(dw*)(raddr(ds,bx+4))));	// 17070 sub     ax, [bx+4] ;~ 0613:49A1
cs=0x613;eip=0x0049a4; 	T(CMP(ax, si));	// 17071 cmp     ax, si ;~ 0613:49A4
cs=0x613;eip=0x0049a6; 	R(JG(loc_190d2));	// 17072 jg      short loc_190D2 ;~ 0613:49A6
cs=0x613;eip=0x0049a8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 17073 mov     bx, [bp+arg_2] ;~ 0613:49A8
cs=0x613;eip=0x0049ab; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_6))));	// 17074 mov     di, [bp+arg_6] ;~ 0613:49AB
cs=0x613;eip=0x0049ae; 	T(MOV(ax, *(dw*)(raddr(ds,di+2))));	// 17075 mov     ax, [di+2] ;~ 0613:49AE
cs=0x613;eip=0x0049b1; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 17076 cmp     [bx+2], ax ;~ 0613:49B1
cs=0x613;eip=0x0049b4; 	R(JL(loc_190cb));	// 17077 jl      short loc_190CB ;~ 0613:49B4
cs=0x613;eip=0x0049b6; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 17078 mov     ax, [bx+2] ;~ 0613:49B6
cs=0x613;eip=0x0049b9; 	T(MOV(bx, di));	// 17079 mov     bx, di ;~ 0613:49B9
loc_190cb:
	// 5425 
cs=0x613;eip=0x0049bb; 	T(SUB(ax, *(dw*)(raddr(ds,bx+2))));	// 17082 sub     ax, [bx+2] ;~ 0613:49BB
cs=0x613;eip=0x0049be; 	T(CMP(ax, si));	// 17083 cmp     ax, si ;~ 0613:49BE
cs=0x613;eip=0x0049c0; 	R(JLE(loc_190da));	// 17084 jle     short loc_190DA ;~ 0613:49C0
loc_190d2:
	// 5426 
cs=0x613;eip=0x0049c2; 	T(SUB(ax, ax));	// 17088 sub     ax, ax ;~ 0613:49C2
cs=0x613;eip=0x0049c4; 	X(POP(si));	// 17089 pop     si ;~ 0613:49C4
cs=0x613;eip=0x0049c5; 	X(POP(di));	// 17090 pop     di ;~ 0613:49C5
cs=0x613;eip=0x0049c6; 	T(MOV(sp, bp));	// 17091 mov     sp, bp ;~ 0613:49C6
cs=0x613;eip=0x0049c8; 	X(POP(bp));	// 17092 pop     bp ;~ 0613:49C8
cs=0x613;eip=0x0049c9; 	R(RETF(0));	// 17093 retf ;~ 0613:49C9
loc_190da:
	// 5427 
cs=0x613;eip=0x0049ca; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 17097 mov     bx, [bp+arg_2] ;~ 0613:49CA
cs=0x613;eip=0x0049cd; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 17098 mov     ax, [bx] ;~ 0613:49CD
cs=0x613;eip=0x0049cf; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 17099 mov     bx, [bp+arg_6] ;~ 0613:49CF
cs=0x613;eip=0x0049d2; 	T(SUB(ax, *(dw*)(raddr(ds,bx))));	// 17100 sub     ax, [bx] ;~ 0613:49D2
cs=0x613;eip=0x0049d4; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 17101 mov     [bp+var_2A], ax ;~ 0613:49D4
cs=0x613;eip=0x0049d7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 17102 mov     bx, [bp+arg_2] ;~ 0613:49D7
cs=0x613;eip=0x0049da; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 17103 mov     ax, [bx+2] ;~ 0613:49DA
cs=0x613;eip=0x0049dd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 17104 mov     bx, [bp+arg_6] ;~ 0613:49DD
cs=0x613;eip=0x0049e0; 	T(SUB(ax, *(dw*)(raddr(ds,bx+2))));	// 17105 sub     ax, [bx+2] ;~ 0613:49E0
cs=0x613;eip=0x0049e3; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 17106 mov     [bp+var_28], ax ;~ 0613:49E3
cs=0x613;eip=0x0049e6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 17107 mov     bx, [bp+arg_2] ;~ 0613:49E6
cs=0x613;eip=0x0049e9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17108 mov     ax, [bx+4] ;~ 0613:49E9
cs=0x613;eip=0x0049ec; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 17109 mov     bx, [bp+arg_6] ;~ 0613:49EC
cs=0x613;eip=0x0049ef; 	T(SUB(ax, *(dw*)(raddr(ds,bx+4))));	// 17110 sub     ax, [bx+4] ;~ 0613:49EF
cs=0x613;eip=0x0049f2; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), ax));	// 17111 mov     [bp+var_26], ax ;~ 0613:49F2
cs=0x613;eip=0x0049f5; 	T(ax = bp+var_2a);	// 17112 lea     ax, [bp+var_2A] ;~ 0613:49F5
cs=0x613;eip=0x0049f8; 	X(PUSH(ax));	// 17113 push    ax ;~ 0613:49F8
cs=0x613;eip=0x0049f9; 	R(CALLF(polarradius3d,0));	// 17114 call    polarRadius3D ;~ 0613:49F9
cs=0x613;eip=0x0049fe; 	T(ADD(sp, 2));	// 17115 add     sp, 2 ;~ 0613:49FE
cs=0x613;eip=0x004a01; 	T(CMP(ax, si));	// 17116 cmp     ax, si ;~ 0613:4A01
cs=0x613;eip=0x004a03; 	R(JA(loc_190d2));	// 17117 ja      short loc_190D2 ;~ 0613:4A03
cs=0x613;eip=0x004a05; 	T(SUB(ax, ax));	// 17118 sub     ax, ax ;~ 0613:4A05
cs=0x613;eip=0x004a07; 	X(PUSH(ax));	// 17119 push    ax ;~ 0613:4A07
cs=0x613;eip=0x004a08; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 17120 mov     bx, [bp+arg_2] ;~ 0613:4A08
cs=0x613;eip=0x004a0b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 17121 mov     ax, [bx+0Ah] ;~ 0613:4A0B
cs=0x613;eip=0x004a0e; 	T(NEG(ax));	// 17122 neg     ax ;~ 0613:4A0E
cs=0x613;eip=0x004a10; 	X(PUSH(ax));	// 17123 push    ax ;~ 0613:4A10
cs=0x613;eip=0x004a11; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 17124 mov     ax, [bx+8] ;~ 0613:4A11
cs=0x613;eip=0x004a14; 	T(NEG(ax));	// 17125 neg     ax ;~ 0613:4A14
cs=0x613;eip=0x004a16; 	X(PUSH(ax));	// 17126 push    ax ;~ 0613:4A16
cs=0x613;eip=0x004a17; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 17127 mov     ax, [bx+6] ;~ 0613:4A17
cs=0x613;eip=0x004a1a; 	T(NEG(ax));	// 17128 neg     ax ;~ 0613:4A1A
cs=0x613;eip=0x004a1c; 	X(PUSH(ax));	// 17129 push    ax ;~ 0613:4A1C
cs=0x613;eip=0x004a1d; 	R(CALLF(mat_rot_zxy,0));	// 17130 call    mat_rot_zxy ;~ 0613:4A1D
cs=0x613;eip=0x004a22; 	T(ADD(sp, 8));	// 17131 add     sp, 8 ;~ 0613:4A22
cs=0x613;eip=0x004a25; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 17132 mov     [bp+var_4], ax ;~ 0613:4A25
cs=0x613;eip=0x004a28; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 17133 mov     [bp+var_6], 0 ;~ 0613:4A28
cs=0x613;eip=0x004a2c; 	R(JMP(loc_191b2));	// 17134 jmp     short loc_191B2 ;~ 0613:4A2C
loc_1913e:
	// 5428 
cs=0x613;eip=0x004a2e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 17138 mov     bx, [bp+arg_0] ;~ 0613:4A2E
cs=0x613;eip=0x004a31; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 17139 mov     ax, [bx] ;~ 0613:4A31
cs=0x613;eip=0x004a33; 	T(NEG(ax));	// 17140 neg     ax ;~ 0613:4A33
loc_19145:
	// 5429 
cs=0x613;eip=0x004a35; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 17143 mov     [bp+var_C], ax ;~ 0613:4A35
cs=0x613;eip=0x004a38; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 17144 mov     [bp+var_A], 0 ;~ 0613:4A38
cs=0x613;eip=0x004a3d; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 17145 mov     al, [bp+var_6] ;~ 0613:4A3D
cs=0x613;eip=0x004a40; 	T(CBW);	// 17146 cbw ;~ 0613:4A40
cs=0x613;eip=0x004a41; 	T(MOV(bx, ax));	// 17147 mov     bx, ax ;~ 0613:4A41
cs=0x613;eip=0x004a43; 	T(SHL(bx, 1));	// 17148 shl     bx, 1 ;~ 0613:4A43
cs=0x613;eip=0x004a45; 	T(CMP(*(dw*)(((db*)&word_3be0c)+bx), 0));	// 17149 cmp     word_3BE0C[bx], 0 ;~ 0613:4A45
cs=0x613;eip=0x004a4a; 	R(JNZ(loc_19164));	// 17150 jnz     short loc_19164 ;~ 0613:4A4A
cs=0x613;eip=0x004a4c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 17151 mov     bx, [bp+arg_0] ;~ 0613:4A4C
cs=0x613;eip=0x004a4f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17152 mov     ax, [bx+4] ;~ 0613:4A4F
cs=0x613;eip=0x004a52; 	R(JMP(loc_1916c));	// 17153 jmp     short loc_1916C ;~ 0613:4A52
loc_19164:
	// 5430 
cs=0x613;eip=0x004a54; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 17157 mov     bx, [bp+arg_0] ;~ 0613:4A54
cs=0x613;eip=0x004a57; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17158 mov     ax, [bx+4] ;~ 0613:4A57
cs=0x613;eip=0x004a5a; 	T(NEG(ax));	// 17159 neg     ax ;~ 0613:4A5A
loc_1916c:
	// 5431 
cs=0x613;eip=0x004a5c; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 17162 mov     [bp+var_8], ax ;~ 0613:4A5C
cs=0x613;eip=0x004a5f; 	T(ax = bp+var_2a);	// 17163 lea     ax, [bp+var_2A] ;~ 0613:4A5F
cs=0x613;eip=0x004a62; 	X(PUSH(ax));	// 17164 push    ax ;~ 0613:4A62
cs=0x613;eip=0x004a63; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 17165 push    [bp+var_4] ;~ 0613:4A63
cs=0x613;eip=0x004a66; 	T(ax = bp+var_c);	// 17166 lea     ax, [bp+var_C] ;~ 0613:4A66
cs=0x613;eip=0x004a69; 	X(PUSH(ax));	// 17167 push    ax ;~ 0613:4A69
cs=0x613;eip=0x004a6a; 	R(CALLF(mat_mul_vector,0));	// 17168 call    mat_mul_vector ;~ 0613:4A6A
cs=0x613;eip=0x004a6f; 	T(ADD(sp, 6));	// 17169 add     sp, 6 ;~ 0613:4A6F
cs=0x613;eip=0x004a72; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 17170 mov     bx, [bp+arg_2] ;~ 0613:4A72
cs=0x613;eip=0x004a75; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 17171 mov     ax, [bx] ;~ 0613:4A75
cs=0x613;eip=0x004a77; 	X(ADD(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 17172 add     [bp+var_2A], ax ;~ 0613:4A77
cs=0x613;eip=0x004a7a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 17173 mov     ax, [bx+2] ;~ 0613:4A7A
cs=0x613;eip=0x004a7d; 	X(ADD(*(dw*)(raddr(ss,bp+var_28)), ax));	// 17174 add     [bp+var_28], ax ;~ 0613:4A7D
cs=0x613;eip=0x004a80; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17175 mov     ax, [bx+4] ;~ 0613:4A80
cs=0x613;eip=0x004a83; 	X(ADD(*(dw*)(raddr(ss,bp+var_26)), ax));	// 17176 add     [bp+var_26], ax ;~ 0613:4A83
cs=0x613;eip=0x004a86; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 17177 mov     al, [bp+var_6] ;~ 0613:4A86
cs=0x613;eip=0x004a89; 	T(CBW);	// 17178 cbw ;~ 0613:4A89
cs=0x613;eip=0x004a8a; 	T(MOV(di, ax));	// 17179 mov     di, ax ;~ 0613:4A8A
cs=0x613;eip=0x004a8c; 	T(SHL(di, 1));	// 17180 shl     di, 1 ;~ 0613:4A8C
cs=0x613;eip=0x004a8e; 	T(ADD(di, ax));	// 17181 add     di, ax ;~ 0613:4A8E
cs=0x613;eip=0x004a90; 	T(SHL(di, 1));	// 17182 shl     di, 1 ;~ 0613:4A90
cs=0x613;eip=0x004a92; 	X(PUSH(si));	// 17183 push    si ;~ 0613:4A92
cs=0x613;eip=0x004a93; 	T(di = bp+di+var_24);	// 17184 lea     di, [bp+di+var_24] ;~ 0613:4A93
cs=0x613;eip=0x004a96; 	T(si = bp+var_2a);	// 17185 lea     si, [bp+var_2A] ;~ 0613:4A96
cs=0x613;eip=0x004a99; 	X(PUSH(ss));	// 17186 push    ss ;~ 0613:4A99
cs=0x613;eip=0x004a9a; 	X(POP(es));	// 17187 pop     es ;~ 0613:4A9A
cs=0x613;eip=0x004a9b; 	X(MOVSW);	// 17189 movsw ;~ 0613:4A9B
cs=0x613;eip=0x004a9c; 	X(MOVSW);	// 17190 movsw ;~ 0613:4A9C
cs=0x613;eip=0x004a9d; 	X(MOVSW);	// 17191 movsw ;~ 0613:4A9D
cs=0x613;eip=0x004a9e; 	X(POP(si));	// 17192 pop     si ;~ 0613:4A9E
cs=0x613;eip=0x004a9f; 	X(INC(*(raddr(ss,bp+var_6))));	// 17193 inc     [bp+var_6] ;~ 0613:4A9F
loc_191b2:
	// 5432 
cs=0x613;eip=0x004aa2; 	T(CMP(*(raddr(ss,bp+var_6)), 4));	// 17196 cmp     [bp+var_6], 4 ;~ 0613:4AA2
cs=0x613;eip=0x004aa6; 	R(JGE(loc_191d2));	// 17197 jge     short loc_191D2 ;~ 0613:4AA6
cs=0x613;eip=0x004aa8; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 17198 mov     al, [bp+var_6] ;~ 0613:4AA8
cs=0x613;eip=0x004aab; 	T(CBW);	// 17199 cbw ;~ 0613:4AAB
cs=0x613;eip=0x004aac; 	T(MOV(bx, ax));	// 17200 mov     bx, ax ;~ 0613:4AAC
cs=0x613;eip=0x004aae; 	T(SHL(bx, 1));	// 17201 shl     bx, 1 ;~ 0613:4AAE
cs=0x613;eip=0x004ab0; 	T(CMP(*(dw*)(((db*)&word_3be04)+bx), 0));	// 17202 cmp     word_3BE04[bx], 0 ;~ 0613:4AB0
cs=0x613;eip=0x004ab5; 	R(JZ(loc_191ca));	// 17203 jz      short loc_191CA ;~ 0613:4AB5
cs=0x613;eip=0x004ab7; 	R(JMP(loc_1913e));	// 17204 jmp     loc_1913E ;~ 0613:4AB7
loc_191ca:
	// 5433 
cs=0x613;eip=0x004aba; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 17208 mov     bx, [bp+arg_0] ;~ 0613:4ABA
cs=0x613;eip=0x004abd; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 17209 mov     ax, [bx] ;~ 0613:4ABD
cs=0x613;eip=0x004abf; 	R(JMP(loc_19145));	// 17210 jmp     loc_19145 ;~ 0613:4ABF
loc_191d2:
	// 5434 
cs=0x613;eip=0x004ac2; 	T(MOV(ax, 1));	// 17214 mov     ax, 1 ;~ 0613:4AC2
cs=0x613;eip=0x004ac5; 	X(PUSH(ax));	// 17215 push    ax ;~ 0613:4AC5
cs=0x613;eip=0x004ac6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 17216 mov     bx, [bp+arg_6] ;~ 0613:4AC6
cs=0x613;eip=0x004ac9; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0A))));	// 17217 push    word ptr [bx+0Ah] ;~ 0613:4AC9
cs=0x613;eip=0x004acc; 	X(PUSH(*(dw*)(raddr(ds,bx+8))));	// 17218 push    word ptr [bx+8] ;~ 0613:4ACC
cs=0x613;eip=0x004acf; 	X(PUSH(*(dw*)(raddr(ds,bx+6))));	// 17219 push    word ptr [bx+6] ;~ 0613:4ACF
cs=0x613;eip=0x004ad2; 	R(CALLF(mat_rot_zxy,0));	// 17220 call    mat_rot_zxy ;~ 0613:4AD2
cs=0x613;eip=0x004ad7; 	T(ADD(sp, 8));	// 17221 add     sp, 8 ;~ 0613:4AD7
cs=0x613;eip=0x004ada; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 17222 mov     [bp+var_4], ax ;~ 0613:4ADA
cs=0x613;eip=0x004add; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 17223 mov     [bp+var_6], 0 ;~ 0613:4ADD
cs=0x613;eip=0x004ae1; 	R(JMP(loc_191f7));	// 17224 jmp     short loc_191F7 ;~ 0613:4AE1
loc_191f4:
	// 5435 
cs=0x613;eip=0x004ae4; 	X(INC(*(raddr(ss,bp+var_6))));	// 17230 inc     [bp+var_6] ;~ 0613:4AE4
loc_191f7:
	// 5436 
cs=0x613;eip=0x004ae7; 	T(CMP(*(raddr(ss,bp+var_6)), 4));	// 17233 cmp     [bp+var_6], 4 ;~ 0613:4AE7
cs=0x613;eip=0x004aeb; 	R(JGE(loc_1927a));	// 17234 jge     short loc_1927A ;~ 0613:4AEB
cs=0x613;eip=0x004aed; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 17235 mov     al, [bp+var_6] ;~ 0613:4AED
cs=0x613;eip=0x004af0; 	T(CBW);	// 17236 cbw ;~ 0613:4AF0
cs=0x613;eip=0x004af1; 	T(MOV(cx, ax));	// 17237 mov     cx, ax ;~ 0613:4AF1
cs=0x613;eip=0x004af3; 	T(SHL(ax, 1));	// 17238 shl     ax, 1 ;~ 0613:4AF3
cs=0x613;eip=0x004af5; 	T(ADD(ax, cx));	// 17239 add     ax, cx ;~ 0613:4AF5
cs=0x613;eip=0x004af7; 	T(SHL(ax, 1));	// 17240 shl     ax, 1 ;~ 0613:4AF7
cs=0x613;eip=0x004af9; 	T(MOV(di, ax));	// 17241 mov     di, ax ;~ 0613:4AF9
cs=0x613;eip=0x004afb; 	T(ADD(di, bp));	// 17242 add     di, bp ;~ 0613:4AFB
cs=0x613;eip=0x004afd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 17243 mov     bx, [bp+arg_6] ;~ 0613:4AFD
cs=0x613;eip=0x004b00; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 17244 mov     ax, [bx] ;~ 0613:4B00
cs=0x613;eip=0x004b02; 	T(SUB(ax, *(dw*)(raddr(ds,di-0x24))));	// 17245 sub     ax, [di-24h] ;~ 0613:4B02
cs=0x613;eip=0x004b05; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 17246 mov     [bp+var_C], ax ;~ 0613:4B05
cs=0x613;eip=0x004b08; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 17247 mov     ax, [bx+2] ;~ 0613:4B08
cs=0x613;eip=0x004b0b; 	T(SUB(ax, *(dw*)(raddr(ds,di-0x22))));	// 17248 sub     ax, [di-22h] ;~ 0613:4B0B
cs=0x613;eip=0x004b0e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 17249 mov     [bp+var_A], ax ;~ 0613:4B0E
cs=0x613;eip=0x004b11; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17250 mov     ax, [bx+4] ;~ 0613:4B11
cs=0x613;eip=0x004b14; 	T(SUB(ax, *(dw*)(raddr(ds,di-0x20))));	// 17251 sub     ax, [di-20h] ;~ 0613:4B14
cs=0x613;eip=0x004b17; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 17252 mov     [bp+var_8], ax ;~ 0613:4B17
cs=0x613;eip=0x004b1a; 	T(ax = bp+var_2a);	// 17253 lea     ax, [bp+var_2A] ;~ 0613:4B1A
cs=0x613;eip=0x004b1d; 	X(PUSH(ax));	// 17254 push    ax ;~ 0613:4B1D
cs=0x613;eip=0x004b1e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 17255 push    [bp+var_4] ;~ 0613:4B1E
cs=0x613;eip=0x004b21; 	T(ax = bp+var_c);	// 17256 lea     ax, [bp+var_C] ;~ 0613:4B21
cs=0x613;eip=0x004b24; 	X(PUSH(ax));	// 17257 push    ax ;~ 0613:4B24
cs=0x613;eip=0x004b25; 	R(CALLF(mat_mul_vector,0));	// 17258 call    mat_mul_vector ;~ 0613:4B25
cs=0x613;eip=0x004b2a; 	T(ADD(sp, 6));	// 17259 add     sp, 6 ;~ 0613:4B2A
cs=0x613;eip=0x004b2d; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0));	// 17260 cmp     [bp+var_28], 0 ;~ 0613:4B2D
cs=0x613;eip=0x004b31; 	R(JL(loc_191f4));	// 17261 jl      short loc_191F4 ;~ 0613:4B31
cs=0x613;eip=0x004b33; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 17262 mov     bx, [bp+arg_4] ;~ 0613:4B33
cs=0x613;eip=0x004b36; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 17263 mov     ax, [bp+var_28] ;~ 0613:4B36
cs=0x613;eip=0x004b39; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 17264 cmp     [bx+2], ax ;~ 0613:4B39
cs=0x613;eip=0x004b3c; 	R(JL(loc_191f4));	// 17265 jl      short loc_191F4 ;~ 0613:4B3C
cs=0x613;eip=0x004b3e; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 17266 mov     di, [bx] ;~ 0613:4B3E
cs=0x613;eip=0x004b40; 	T(MOV(ax, di));	// 17267 mov     ax, di ;~ 0613:4B40
cs=0x613;eip=0x004b42; 	T(NEG(ax));	// 17268 neg     ax ;~ 0613:4B42
cs=0x613;eip=0x004b44; 	T(CMP(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 17269 cmp     [bp+var_2A], ax ;~ 0613:4B44
cs=0x613;eip=0x004b47; 	R(JL(loc_191f4));	// 17270 jl      short loc_191F4 ;~ 0613:4B47
cs=0x613;eip=0x004b49; 	T(CMP(*(dw*)(raddr(ss,bp+var_2a)), di));	// 17271 cmp     [bp+var_2A], di ;~ 0613:4B49
cs=0x613;eip=0x004b4c; 	R(JG(loc_191f4));	// 17272 jg      short loc_191F4 ;~ 0613:4B4C
cs=0x613;eip=0x004b4e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17273 mov     ax, [bx+4] ;~ 0613:4B4E
cs=0x613;eip=0x004b51; 	T(NEG(ax));	// 17274 neg     ax ;~ 0613:4B51
cs=0x613;eip=0x004b53; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_26))));	// 17275 cmp     ax, [bp+var_26] ;~ 0613:4B53
cs=0x613;eip=0x004b56; 	R(JG(loc_191f4));	// 17276 jg      short loc_191F4 ;~ 0613:4B56
cs=0x613;eip=0x004b58; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_26))));	// 17277 mov     ax, [bp+var_26] ;~ 0613:4B58
cs=0x613;eip=0x004b5b; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 17278 cmp     [bx+4], ax ;~ 0613:4B5B
cs=0x613;eip=0x004b5e; 	R(JL(loc_191f4));	// 17279 jl      short loc_191F4 ;~ 0613:4B5E
loc_19270:
	// 5437 
cs=0x613;eip=0x004b60; 	T(MOV(ax, 1));	// 17282 mov     ax, 1 ;~ 0613:4B60
cs=0x613;eip=0x004b63; 	X(POP(si));	// 17283 pop     si ;~ 0613:4B63
cs=0x613;eip=0x004b64; 	X(POP(di));	// 17284 pop     di ;~ 0613:4B64
cs=0x613;eip=0x004b65; 	T(MOV(sp, bp));	// 17285 mov     sp, bp ;~ 0613:4B65
cs=0x613;eip=0x004b67; 	X(POP(bp));	// 17286 pop     bp ;~ 0613:4B67
cs=0x613;eip=0x004b68; 	R(RETF(0));	// 17287 retf ;~ 0613:4B68
loc_1927a:
	// 5438 
cs=0x613;eip=0x004b6a; 	T(SUB(ax, ax));	// 17292 sub     ax, ax ;~ 0613:4B6A
cs=0x613;eip=0x004b6c; 	X(PUSH(ax));	// 17293 push    ax ;~ 0613:4B6C
cs=0x613;eip=0x004b6d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 17294 mov     bx, [bp+arg_6] ;~ 0613:4B6D
cs=0x613;eip=0x004b70; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 17295 mov     ax, [bx+0Ah] ;~ 0613:4B70
cs=0x613;eip=0x004b73; 	T(NEG(ax));	// 17296 neg     ax ;~ 0613:4B73
cs=0x613;eip=0x004b75; 	X(PUSH(ax));	// 17297 push    ax ;~ 0613:4B75
cs=0x613;eip=0x004b76; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 17298 mov     ax, [bx+8] ;~ 0613:4B76
cs=0x613;eip=0x004b79; 	T(NEG(ax));	// 17299 neg     ax ;~ 0613:4B79
cs=0x613;eip=0x004b7b; 	X(PUSH(ax));	// 17300 push    ax ;~ 0613:4B7B
cs=0x613;eip=0x004b7c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 17301 mov     ax, [bx+6] ;~ 0613:4B7C
cs=0x613;eip=0x004b7f; 	T(NEG(ax));	// 17302 neg     ax ;~ 0613:4B7F
cs=0x613;eip=0x004b81; 	X(PUSH(ax));	// 17303 push    ax ;~ 0613:4B81
cs=0x613;eip=0x004b82; 	R(CALLF(mat_rot_zxy,0));	// 17304 call    mat_rot_zxy ;~ 0613:4B82
cs=0x613;eip=0x004b87; 	T(ADD(sp, 8));	// 17305 add     sp, 8 ;~ 0613:4B87
cs=0x613;eip=0x004b8a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 17306 mov     [bp+var_4], ax ;~ 0613:4B8A
cs=0x613;eip=0x004b8d; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 17307 mov     [bp+var_6], 0 ;~ 0613:4B8D
cs=0x613;eip=0x004b91; 	R(JMP(loc_19318));	// 17308 jmp     short loc_19318 ;~ 0613:4B91
loc_192a4:
	// 5439 
cs=0x613;eip=0x004b94; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 17313 mov     bx, [bp+arg_4] ;~ 0613:4B94
cs=0x613;eip=0x004b97; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 17314 mov     ax, [bx] ;~ 0613:4B97
cs=0x613;eip=0x004b99; 	T(NEG(ax));	// 17315 neg     ax ;~ 0613:4B99
loc_192ab:
	// 5440 
cs=0x613;eip=0x004b9b; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 17318 mov     [bp+var_C], ax ;~ 0613:4B9B
cs=0x613;eip=0x004b9e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 17319 mov     [bp+var_A], 0 ;~ 0613:4B9E
cs=0x613;eip=0x004ba3; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 17320 mov     al, [bp+var_6] ;~ 0613:4BA3
cs=0x613;eip=0x004ba6; 	T(CBW);	// 17321 cbw ;~ 0613:4BA6
cs=0x613;eip=0x004ba7; 	T(MOV(bx, ax));	// 17322 mov     bx, ax ;~ 0613:4BA7
cs=0x613;eip=0x004ba9; 	T(SHL(bx, 1));	// 17323 shl     bx, 1 ;~ 0613:4BA9
cs=0x613;eip=0x004bab; 	T(CMP(*(dw*)(((db*)&word_3be0c)+bx), 0));	// 17324 cmp     word_3BE0C[bx], 0 ;~ 0613:4BAB
cs=0x613;eip=0x004bb0; 	R(JNZ(loc_192ca));	// 17325 jnz     short loc_192CA ;~ 0613:4BB0
cs=0x613;eip=0x004bb2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 17326 mov     bx, [bp+arg_4] ;~ 0613:4BB2
cs=0x613;eip=0x004bb5; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17327 mov     ax, [bx+4] ;~ 0613:4BB5
cs=0x613;eip=0x004bb8; 	R(JMP(loc_192d2));	// 17328 jmp     short loc_192D2 ;~ 0613:4BB8
loc_192ca:
	// 5441 
cs=0x613;eip=0x004bba; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 17332 mov     bx, [bp+arg_4] ;~ 0613:4BBA
cs=0x613;eip=0x004bbd; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17333 mov     ax, [bx+4] ;~ 0613:4BBD
cs=0x613;eip=0x004bc0; 	T(NEG(ax));	// 17334 neg     ax ;~ 0613:4BC0
loc_192d2:
	// 5442 
cs=0x613;eip=0x004bc2; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 17337 mov     [bp+var_8], ax ;~ 0613:4BC2
cs=0x613;eip=0x004bc5; 	T(ax = bp+var_2a);	// 17338 lea     ax, [bp+var_2A] ;~ 0613:4BC5
cs=0x613;eip=0x004bc8; 	X(PUSH(ax));	// 17339 push    ax ;~ 0613:4BC8
cs=0x613;eip=0x004bc9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 17340 push    [bp+var_4] ;~ 0613:4BC9
cs=0x613;eip=0x004bcc; 	T(ax = bp+var_c);	// 17341 lea     ax, [bp+var_C] ;~ 0613:4BCC
cs=0x613;eip=0x004bcf; 	X(PUSH(ax));	// 17342 push    ax ;~ 0613:4BCF
cs=0x613;eip=0x004bd0; 	R(CALLF(mat_mul_vector,0));	// 17343 call    mat_mul_vector ;~ 0613:4BD0
cs=0x613;eip=0x004bd5; 	T(ADD(sp, 6));	// 17344 add     sp, 6 ;~ 0613:4BD5
cs=0x613;eip=0x004bd8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 17345 mov     bx, [bp+arg_6] ;~ 0613:4BD8
cs=0x613;eip=0x004bdb; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 17346 mov     ax, [bx] ;~ 0613:4BDB
cs=0x613;eip=0x004bdd; 	X(ADD(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 17347 add     [bp+var_2A], ax ;~ 0613:4BDD
cs=0x613;eip=0x004be0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 17348 mov     ax, [bx+2] ;~ 0613:4BE0
cs=0x613;eip=0x004be3; 	X(ADD(*(dw*)(raddr(ss,bp+var_28)), ax));	// 17349 add     [bp+var_28], ax ;~ 0613:4BE3
cs=0x613;eip=0x004be6; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17350 mov     ax, [bx+4] ;~ 0613:4BE6
cs=0x613;eip=0x004be9; 	X(ADD(*(dw*)(raddr(ss,bp+var_26)), ax));	// 17351 add     [bp+var_26], ax ;~ 0613:4BE9
cs=0x613;eip=0x004bec; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 17352 mov     al, [bp+var_6] ;~ 0613:4BEC
cs=0x613;eip=0x004bef; 	T(CBW);	// 17353 cbw ;~ 0613:4BEF
cs=0x613;eip=0x004bf0; 	T(MOV(di, ax));	// 17354 mov     di, ax ;~ 0613:4BF0
cs=0x613;eip=0x004bf2; 	T(SHL(di, 1));	// 17355 shl     di, 1 ;~ 0613:4BF2
cs=0x613;eip=0x004bf4; 	T(ADD(di, ax));	// 17356 add     di, ax ;~ 0613:4BF4
cs=0x613;eip=0x004bf6; 	T(SHL(di, 1));	// 17357 shl     di, 1 ;~ 0613:4BF6
cs=0x613;eip=0x004bf8; 	X(PUSH(si));	// 17358 push    si ;~ 0613:4BF8
cs=0x613;eip=0x004bf9; 	T(di = bp+di+var_24);	// 17359 lea     di, [bp+di+var_24] ;~ 0613:4BF9
cs=0x613;eip=0x004bfc; 	T(si = bp+var_2a);	// 17360 lea     si, [bp+var_2A] ;~ 0613:4BFC
cs=0x613;eip=0x004bff; 	X(PUSH(ss));	// 17361 push    ss ;~ 0613:4BFF
cs=0x613;eip=0x004c00; 	X(POP(es));	// 17362 pop     es ;~ 0613:4C00
cs=0x613;eip=0x004c01; 	X(MOVSW);	// 17363 movsw ;~ 0613:4C01
cs=0x613;eip=0x004c02; 	X(MOVSW);	// 17364 movsw ;~ 0613:4C02
cs=0x613;eip=0x004c03; 	X(MOVSW);	// 17365 movsw ;~ 0613:4C03
cs=0x613;eip=0x004c04; 	X(POP(si));	// 17366 pop     si ;~ 0613:4C04
cs=0x613;eip=0x004c05; 	X(INC(*(raddr(ss,bp+var_6))));	// 17367 inc     [bp+var_6] ;~ 0613:4C05
loc_19318:
	// 5443 
cs=0x613;eip=0x004c08; 	T(CMP(*(raddr(ss,bp+var_6)), 4));	// 17370 cmp     [bp+var_6], 4 ;~ 0613:4C08
cs=0x613;eip=0x004c0c; 	R(JGE(loc_19338));	// 17371 jge     short loc_19338 ;~ 0613:4C0C
cs=0x613;eip=0x004c0e; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 17372 mov     al, [bp+var_6] ;~ 0613:4C0E
cs=0x613;eip=0x004c11; 	T(CBW);	// 17373 cbw ;~ 0613:4C11
cs=0x613;eip=0x004c12; 	T(MOV(bx, ax));	// 17374 mov     bx, ax ;~ 0613:4C12
cs=0x613;eip=0x004c14; 	T(SHL(bx, 1));	// 17375 shl     bx, 1 ;~ 0613:4C14
cs=0x613;eip=0x004c16; 	T(CMP(*(dw*)(((db*)&word_3be04)+bx), 0));	// 17376 cmp     word_3BE04[bx], 0 ;~ 0613:4C16
cs=0x613;eip=0x004c1b; 	R(JZ(loc_19330));	// 17377 jz      short loc_19330 ;~ 0613:4C1B
cs=0x613;eip=0x004c1d; 	R(JMP(loc_192a4));	// 17378 jmp     loc_192A4 ;~ 0613:4C1D
loc_19330:
	// 5444 
cs=0x613;eip=0x004c20; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 17382 mov     bx, [bp+arg_4] ;~ 0613:4C20
cs=0x613;eip=0x004c23; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 17383 mov     ax, [bx] ;~ 0613:4C23
cs=0x613;eip=0x004c25; 	R(JMP(loc_192ab));	// 17384 jmp     loc_192AB ;~ 0613:4C25
loc_19338:
	// 5445 
cs=0x613;eip=0x004c28; 	T(MOV(ax, 1));	// 17388 mov     ax, 1 ;~ 0613:4C28
cs=0x613;eip=0x004c2b; 	X(PUSH(ax));	// 17389 push    ax ;~ 0613:4C2B
cs=0x613;eip=0x004c2c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 17390 mov     bx, [bp+arg_2] ;~ 0613:4C2C
cs=0x613;eip=0x004c2f; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0A))));	// 17391 push    word ptr [bx+0Ah] ;~ 0613:4C2F
cs=0x613;eip=0x004c32; 	X(PUSH(*(dw*)(raddr(ds,bx+8))));	// 17392 push    word ptr [bx+8] ;~ 0613:4C32
cs=0x613;eip=0x004c35; 	X(PUSH(*(dw*)(raddr(ds,bx+6))));	// 17393 push    word ptr [bx+6] ;~ 0613:4C35
cs=0x613;eip=0x004c38; 	R(CALLF(mat_rot_zxy,0));	// 17394 call    mat_rot_zxy ;~ 0613:4C38
cs=0x613;eip=0x004c3d; 	T(ADD(sp, 8));	// 17395 add     sp, 8 ;~ 0613:4C3D
cs=0x613;eip=0x004c40; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 17396 mov     [bp+var_4], ax ;~ 0613:4C40
cs=0x613;eip=0x004c43; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 17397 mov     [bp+var_6], 0 ;~ 0613:4C43
cs=0x613;eip=0x004c47; 	R(JMP(loc_1935d));	// 17398 jmp     short loc_1935D ;~ 0613:4C47
loc_1935a:
	// 5446 
cs=0x613;eip=0x004c4a; 	X(INC(*(raddr(ss,bp+var_6))));	// 17404 inc     [bp+var_6] ;~ 0613:4C4A
loc_1935d:
	// 5447 
cs=0x613;eip=0x004c4d; 	T(CMP(*(raddr(ss,bp+var_6)), 4));	// 17407 cmp     [bp+var_6], 4 ;~ 0613:4C4D
cs=0x613;eip=0x004c51; 	R(JL(loc_19366));	// 17408 jl      short loc_19366 ;~ 0613:4C51
cs=0x613;eip=0x004c53; 	R(JMP(loc_190d2));	// 17409 jmp     loc_190D2 ;~ 0613:4C53
loc_19366:
	// 5448 
cs=0x613;eip=0x004c56; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 17413 mov     al, [bp+var_6] ;~ 0613:4C56
cs=0x613;eip=0x004c59; 	T(CBW);	// 17414 cbw ;~ 0613:4C59
cs=0x613;eip=0x004c5a; 	T(MOV(cx, ax));	// 17415 mov     cx, ax ;~ 0613:4C5A
cs=0x613;eip=0x004c5c; 	T(SHL(ax, 1));	// 17416 shl     ax, 1 ;~ 0613:4C5C
cs=0x613;eip=0x004c5e; 	T(ADD(ax, cx));	// 17417 add     ax, cx ;~ 0613:4C5E
cs=0x613;eip=0x004c60; 	T(SHL(ax, 1));	// 17418 shl     ax, 1 ;~ 0613:4C60
cs=0x613;eip=0x004c62; 	T(MOV(di, ax));	// 17419 mov     di, ax ;~ 0613:4C62
cs=0x613;eip=0x004c64; 	T(ADD(di, bp));	// 17420 add     di, bp ;~ 0613:4C64
cs=0x613;eip=0x004c66; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 17421 mov     bx, [bp+arg_2] ;~ 0613:4C66
cs=0x613;eip=0x004c69; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 17422 mov     ax, [bx] ;~ 0613:4C69
cs=0x613;eip=0x004c6b; 	T(SUB(ax, *(dw*)(raddr(ds,di-0x24))));	// 17423 sub     ax, [di-24h] ;~ 0613:4C6B
cs=0x613;eip=0x004c6e; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 17424 mov     [bp+var_C], ax ;~ 0613:4C6E
cs=0x613;eip=0x004c71; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 17425 mov     ax, [bx+2] ;~ 0613:4C71
cs=0x613;eip=0x004c74; 	T(SUB(ax, *(dw*)(raddr(ds,di-0x22))));	// 17426 sub     ax, [di-22h] ;~ 0613:4C74
cs=0x613;eip=0x004c77; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 17427 mov     [bp+var_A], ax ;~ 0613:4C77
cs=0x613;eip=0x004c7a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17428 mov     ax, [bx+4] ;~ 0613:4C7A
cs=0x613;eip=0x004c7d; 	T(SUB(ax, *(dw*)(raddr(ds,di-0x20))));	// 17429 sub     ax, [di-20h] ;~ 0613:4C7D
cs=0x613;eip=0x004c80; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 17430 mov     [bp+var_8], ax ;~ 0613:4C80
cs=0x613;eip=0x004c83; 	T(ax = bp+var_2a);	// 17431 lea     ax, [bp+var_2A] ;~ 0613:4C83
cs=0x613;eip=0x004c86; 	X(PUSH(ax));	// 17432 push    ax ;~ 0613:4C86
cs=0x613;eip=0x004c87; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 17433 push    [bp+var_4] ;~ 0613:4C87
cs=0x613;eip=0x004c8a; 	T(ax = bp+var_c);	// 17434 lea     ax, [bp+var_C] ;~ 0613:4C8A
cs=0x613;eip=0x004c8d; 	X(PUSH(ax));	// 17435 push    ax ;~ 0613:4C8D
cs=0x613;eip=0x004c8e; 	R(CALLF(mat_mul_vector,0));	// 17436 call    mat_mul_vector ;~ 0613:4C8E
cs=0x613;eip=0x004c93; 	T(ADD(sp, 6));	// 17437 add     sp, 6 ;~ 0613:4C93
cs=0x613;eip=0x004c96; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0));	// 17438 cmp     [bp+var_28], 0 ;~ 0613:4C96
cs=0x613;eip=0x004c9a; 	R(JL(loc_1935a));	// 17439 jl      short loc_1935A ;~ 0613:4C9A
cs=0x613;eip=0x004c9c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 17440 mov     bx, [bp+arg_0] ;~ 0613:4C9C
cs=0x613;eip=0x004c9f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 17441 mov     ax, [bp+var_28] ;~ 0613:4C9F
cs=0x613;eip=0x004ca2; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 17442 cmp     [bx+2], ax ;~ 0613:4CA2
cs=0x613;eip=0x004ca5; 	R(JL(loc_1935a));	// 17443 jl      short loc_1935A ;~ 0613:4CA5
cs=0x613;eip=0x004ca7; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 17444 mov     di, [bx] ;~ 0613:4CA7
cs=0x613;eip=0x004ca9; 	T(MOV(ax, di));	// 17445 mov     ax, di ;~ 0613:4CA9
cs=0x613;eip=0x004cab; 	T(NEG(ax));	// 17446 neg     ax ;~ 0613:4CAB
cs=0x613;eip=0x004cad; 	T(CMP(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 17447 cmp     [bp+var_2A], ax ;~ 0613:4CAD
cs=0x613;eip=0x004cb0; 	R(JL(loc_1935a));	// 17448 jl      short loc_1935A ;~ 0613:4CB0
cs=0x613;eip=0x004cb2; 	T(CMP(*(dw*)(raddr(ss,bp+var_2a)), di));	// 17449 cmp     [bp+var_2A], di ;~ 0613:4CB2
cs=0x613;eip=0x004cb5; 	R(JG(loc_1935a));	// 17450 jg      short loc_1935A ;~ 0613:4CB5
cs=0x613;eip=0x004cb7; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 17451 mov     ax, [bx+4] ;~ 0613:4CB7
cs=0x613;eip=0x004cba; 	T(NEG(ax));	// 17452 neg     ax ;~ 0613:4CBA
cs=0x613;eip=0x004cbc; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_26))));	// 17453 cmp     ax, [bp+var_26] ;~ 0613:4CBC
cs=0x613;eip=0x004cbf; 	R(JG(loc_1935a));	// 17454 jg      short loc_1935A ;~ 0613:4CBF
cs=0x613;eip=0x004cc1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_26))));	// 17455 mov     ax, [bp+var_26] ;~ 0613:4CC1
cs=0x613;eip=0x004cc4; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 17456 cmp     [bx+4], ax ;~ 0613:4CC4
cs=0x613;eip=0x004cc7; 	R(JL(loc_193dc));	// 17457 jl      short loc_193DC ;~ 0613:4CC7
cs=0x613;eip=0x004cc9; 	R(JMP(loc_19270));	// 17458 jmp     loc_19270 ;~ 0613:4CC9
loc_193dc:
	// 5449 
cs=0x613;eip=0x004ccc; 	R(JMP(loc_1935a));	// 17462 jmp     loc_1935A ;~ 0613:4CCC
init_plantrak:
	// 17472 
cs=0x613;eip=0x004cd0; 	X(PUSH(bp));	// 17473 push    bp ;~ 0613:4CD0
ret_613_4cd1:
	// 5450 
cs=0x613;eip=0x004cd1; 	T(MOV(bp, sp));	// 17474 mov     bp, sp ;~ 0613:4CD1
cs=0x613;eip=0x004cd3; 	T(SUB(sp, 2));	// 17475 sub     sp, 2 ;~ 0613:4CD3
cs=0x613;eip=0x004cd6; 	X(PUSH(di));	// 17476 push    di ;~ 0613:4CD6
cs=0x613;eip=0x004cd7; 	X(PUSH(si));	// 17477 push    si ;~ 0613:4CD7
cs=0x613;eip=0x004cd8; 	T(MOV(ax, 0x0FFFD));	// 17478 mov     ax, 0FFFDh ;~ 0613:4CD8
cs=0x613;eip=0x004cdb; 	X(PUSH(ax));	// 17479 push    ax ;~ 0613:4CDB
cs=0x613;eip=0x004cdc; 	X(PUSH(cs));	// 17480 push    cs ;~ 0613:4CDC
cs=0x613;eip=0x004cdd; 	R(CALL(init_game_state,0));	// 17481 call    near ptr init_game_state ;~ 0613:4CDD
cs=0x613;eip=0x004ce0; 	T(ADD(sp, 2));	// 17482 add     sp, 2 ;~ 0613:4CE0
cs=0x613;eip=0x004ce3; 	T(SUB(si, si));	// 17483 sub     si, si ;~ 0613:4CE3
cs=0x613;eip=0x004ce5; 	X(MOV(byte_44889, 2));	// 17484 mov     byte_44889, 2 ;~ 0613:4CE5
cs=0x613;eip=0x004cea; 	X(MOV(planptr, offset(seg038,plan_memres)));	// 17485 mov     planptr, offset plan_memres ;~ 0613:4CEA
cs=0x613;eip=0x004cf0; 	X(MOV(word_454c4, seg_offset(seg038)));	// 17486 mov     word_454C4, seg seg038 ;~ 0613:4CF0
cs=0x613;eip=0x004cf6; 	X(MOV(startcol2, 1));	// 17487 mov     startcol2, 1 ;~ 0613:4CF6
cs=0x613;eip=0x004cfb; 	X(MOV(startrow2, 0x1C));	// 17488 mov     startrow2, 1Ch ;~ 0613:4CFB
cs=0x613;eip=0x004d00; 	T(LES(bx, td17_trk_elem_ordered));	// 17489 les     bx, td17_trk_elem_ordered ;~ 0613:4D00
cs=0x613;eip=0x004d04; 	X(MOV(*(raddr(es,bx)), 7));	// 17490 mov     byte ptr es:[bx], 7 ;~ 0613:4D04
cs=0x613;eip=0x004d08; 	T(LES(bx, td21_col_from_path));	// 17491 les     bx, td21_col_from_path ;~ 0613:4D08
cs=0x613;eip=0x004d0c; 	X(MOV(*(raddr(es,bx)), 1));	// 17492 mov     byte ptr es:[bx], 1 ;~ 0613:4D0C
cs=0x613;eip=0x004d10; 	T(LES(bx, td22_row_from_path));	// 17493 les     bx, td22_row_from_path ;~ 0613:4D10
cs=0x613;eip=0x004d14; 	T(MOV(al, startrow2));	// 17494 mov     al, startrow2 ;~ 0613:4D14
cs=0x613;eip=0x004d17; 	X(MOV(*(raddr(es,bx)), al));	// 17495 mov     es:[bx], al ;~ 0613:4D17
cs=0x613;eip=0x004d1a; 	T(LES(bx, trackdata18));	// 17496 les     bx, trackdata18 ;~ 0613:4D1A
cs=0x613;eip=0x004d1e; 	X(MOV(*(raddr(es,bx)), 0));	// 17497 mov     byte ptr es:[bx], 0 ;~ 0613:4D1E
cs=0x613;eip=0x004d22; 	T(LES(bx, td17_trk_elem_ordered));	// 17498 les     bx, td17_trk_elem_ordered ;~ 0613:4D22
cs=0x613;eip=0x004d26; 	X(MOV(*(raddr(es,bx+1)), 6));	// 17499 mov     byte ptr es:[bx+1], 6 ;~ 0613:4D26
cs=0x613;eip=0x004d2b; 	T(LES(bx, td21_col_from_path));	// 17500 les     bx, td21_col_from_path ;~ 0613:4D2B
cs=0x613;eip=0x004d2f; 	X(MOV(*(raddr(es,bx+1)), 0));	// 17501 mov     byte ptr es:[bx+1], 0 ;~ 0613:4D2F
cs=0x613;eip=0x004d34; 	T(LES(bx, td22_row_from_path));	// 17502 les     bx, td22_row_from_path ;~ 0613:4D34
cs=0x613;eip=0x004d38; 	T(MOV(al, startrow2));	// 17503 mov     al, startrow2 ;~ 0613:4D38
cs=0x613;eip=0x004d3b; 	X(MOV(*(raddr(es,bx+1)), al));	// 17504 mov     es:[bx+1], al ;~ 0613:4D3B
cs=0x613;eip=0x004d3f; 	T(LES(bx, trackdata18));	// 17505 les     bx, trackdata18 ;~ 0613:4D3F
cs=0x613;eip=0x004d43; 	X(MOV(*(raddr(es,bx+1)), 0));	// 17506 mov     byte ptr es:[bx+1], 0 ;~ 0613:4D43
cs=0x613;eip=0x004d48; 	T(LES(bx, td17_trk_elem_ordered));	// 17507 les     bx, td17_trk_elem_ordered ;~ 0613:4D48
cs=0x613;eip=0x004d4c; 	X(MOV(*(raddr(es,bx+2)), 8));	// 17508 mov     byte ptr es:[bx+2], 8 ;~ 0613:4D4C
cs=0x613;eip=0x004d51; 	T(LES(bx, td21_col_from_path));	// 17509 les     bx, td21_col_from_path ;~ 0613:4D51
cs=0x613;eip=0x004d55; 	X(MOV(*(raddr(es,bx+2)), 0));	// 17510 mov     byte ptr es:[bx+2], 0 ;~ 0613:4D55
cs=0x613;eip=0x004d5a; 	T(LES(bx, td22_row_from_path));	// 17511 les     bx, td22_row_from_path ;~ 0613:4D5A
cs=0x613;eip=0x004d5e; 	T(MOV(al, startrow2));	// 17512 mov     al, startrow2 ;~ 0613:4D5E
cs=0x613;eip=0x004d61; 	T(INC(al));	// 17513 inc     al ;~ 0613:4D61
cs=0x613;eip=0x004d63; 	X(MOV(*(raddr(es,bx+2)), al));	// 17514 mov     es:[bx+2], al ;~ 0613:4D63
cs=0x613;eip=0x004d67; 	T(LES(bx, trackdata18));	// 17515 les     bx, trackdata18 ;~ 0613:4D67
cs=0x613;eip=0x004d6b; 	X(MOV(*(raddr(es,bx+2)), 0));	// 17516 mov     byte ptr es:[bx+2], 0 ;~ 0613:4D6B
cs=0x613;eip=0x004d70; 	T(LES(bx, td17_trk_elem_ordered));	// 17517 les     bx, td17_trk_elem_ordered ;~ 0613:4D70
cs=0x613;eip=0x004d74; 	X(MOV(*(raddr(es,bx+3)), 9));	// 17518 mov     byte ptr es:[bx+3], 9 ;~ 0613:4D74
cs=0x613;eip=0x004d79; 	T(LES(bx, td21_col_from_path));	// 17519 les     bx, td21_col_from_path ;~ 0613:4D79
cs=0x613;eip=0x004d7d; 	X(MOV(*(raddr(es,bx+3)), 1));	// 17520 mov     byte ptr es:[bx+3], 1 ;~ 0613:4D7D
cs=0x613;eip=0x004d82; 	T(LES(bx, td22_row_from_path));	// 17521 les     bx, td22_row_from_path ;~ 0613:4D82
cs=0x613;eip=0x004d86; 	T(MOV(al, startrow2));	// 17522 mov     al, startrow2 ;~ 0613:4D86
cs=0x613;eip=0x004d89; 	T(INC(al));	// 17523 inc     al ;~ 0613:4D89
cs=0x613;eip=0x004d8b; 	X(MOV(*(raddr(es,bx+3)), al));	// 17524 mov     es:[bx+3], al ;~ 0613:4D8B
cs=0x613;eip=0x004d8f; 	T(LES(bx, trackdata18));	// 17525 les     bx, trackdata18 ;~ 0613:4D8F
cs=0x613;eip=0x004d93; 	X(MOV(*(raddr(es,bx+3)), 0));	// 17526 mov     byte ptr es:[bx+3], 0 ;~ 0613:4D93
cs=0x613;eip=0x004d98; 	T(LES(bx, td17_trk_elem_ordered));	// 17527 les     bx, td17_trk_elem_ordered ;~ 0613:4D98
cs=0x613;eip=0x004d9c; 	X(MOV(*(raddr(es,bx+4)), 7));	// 17528 mov     byte ptr es:[bx+4], 7 ;~ 0613:4D9C
cs=0x613;eip=0x004da1; 	T(LES(bx, td21_col_from_path));	// 17529 les     bx, td21_col_from_path ;~ 0613:4DA1
cs=0x613;eip=0x004da5; 	X(MOV(*(raddr(es,bx+4)), 1));	// 17530 mov     byte ptr es:[bx+4], 1 ;~ 0613:4DA5
cs=0x613;eip=0x004daa; 	T(LES(bx, td22_row_from_path));	// 17531 les     bx, td22_row_from_path ;~ 0613:4DAA
cs=0x613;eip=0x004dae; 	T(MOV(al, startrow2));	// 17532 mov     al, startrow2 ;~ 0613:4DAE
cs=0x613;eip=0x004db1; 	X(MOV(*(raddr(es,bx+4)), al));	// 17533 mov     es:[bx+4], al ;~ 0613:4DB1
cs=0x613;eip=0x004db5; 	T(LES(bx, trackdata18));	// 17534 les     bx, trackdata18 ;~ 0613:4DB5
cs=0x613;eip=0x004db9; 	X(MOV(*(raddr(es,bx+4)), 0));	// 17535 mov     byte ptr es:[bx+4], 0 ;~ 0613:4DB9
cs=0x613;eip=0x004dbe; 	T(LES(bx, trackdata3));	// 17536 les     bx, trackdata3 ;~ 0613:4DBE
cs=0x613;eip=0x004dc2; 	X(MOV(*(dw*)(raddr(es,bx)), si));	// 17537 mov     es:[bx], si ;~ 0613:4DC2
cs=0x613;eip=0x004dc5; 	T(LES(bx, trackdata3));	// 17538 les     bx, trackdata3 ;~ 0613:4DC5
cs=0x613;eip=0x004dc9; 	X(MOV(*(dw*)(raddr(es,bx+2)), 1));	// 17539 mov     word ptr es:[bx+2], 1 ;~ 0613:4DC9
cs=0x613;eip=0x004dcf; 	T(LES(bx, trackdata3));	// 17540 les     bx, trackdata3 ;~ 0613:4DCF
cs=0x613;eip=0x004dd3; 	X(MOV(*(dw*)(raddr(es,bx+4)), 2));	// 17541 mov     word ptr es:[bx+4], 2 ;~ 0613:4DD3
cs=0x613;eip=0x004dd9; 	T(LES(bx, trackdata3));	// 17542 les     bx, trackdata3 ;~ 0613:4DD9
cs=0x613;eip=0x004ddd; 	X(MOV(*(dw*)(raddr(es,bx+6)), 3));	// 17543 mov     word ptr es:[bx+6], 3 ;~ 0613:4DDD
cs=0x613;eip=0x004de3; 	T(LES(bx, trackdata3));	// 17544 les     bx, trackdata3 ;~ 0613:4DE3
cs=0x613;eip=0x004de7; 	X(MOV(*(dw*)(raddr(es,bx+8)), 4));	// 17545 mov     word ptr es:[bx+8], 4 ;~ 0613:4DE7
cs=0x613;eip=0x004ded; 	T(LES(bx, trackdata3));	// 17546 les     bx, trackdata3 ;~ 0613:4DED
cs=0x613;eip=0x004df1; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), 1));	// 17547 mov     word ptr es:[bx+0Ah], 1 ;~ 0613:4DF1
cs=0x613;eip=0x004df7; 	T(LES(bx, trackdata3));	// 17548 les     bx, trackdata3 ;~ 0613:4DF7
cs=0x613;eip=0x004dfb; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), 2));	// 17549 mov     word ptr es:[bx+0Ch], 2 ;~ 0613:4DFB
cs=0x613;eip=0x004e01; 	T(LES(bx, trackdata3));	// 17550 les     bx, trackdata3 ;~ 0613:4E01
cs=0x613;eip=0x004e05; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), 3));	// 17551 mov     word ptr es:[bx+0Eh], 3 ;~ 0613:4E05
cs=0x613;eip=0x004e0b; 	T(LES(bx, trackdata3));	// 17552 les     bx, trackdata3 ;~ 0613:4E0B
cs=0x613;eip=0x004e0f; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), 4));	// 17553 mov     word ptr es:[bx+10h], 4 ;~ 0613:4E0F
cs=0x613;eip=0x004e15; 	T(LES(bx, trackdata3));	// 17554 les     bx, trackdata3 ;~ 0613:4E15
cs=0x613;eip=0x004e19; 	X(MOV(*(dw*)(raddr(es,bx+0x12)), 1));	// 17555 mov     word ptr es:[bx+12h], 1 ;~ 0613:4E19
cs=0x613;eip=0x004e1f; 	T(LES(bx, trackdata3));	// 17556 les     bx, trackdata3 ;~ 0613:4E1F
cs=0x613;eip=0x004e23; 	X(MOV(*(dw*)(raddr(es,bx+0x14)), 2));	// 17557 mov     word ptr es:[bx+14h], 2 ;~ 0613:4E23
cs=0x613;eip=0x004e29; 	T(LES(bx, trackdata3));	// 17558 les     bx, trackdata3 ;~ 0613:4E29
cs=0x613;eip=0x004e2d; 	X(MOV(*(dw*)(raddr(es,bx+0x16)), 3));	// 17559 mov     word ptr es:[bx+16h], 3 ;~ 0613:4E2D
cs=0x613;eip=0x004e33; 	T(LES(bx, trackdata3));	// 17560 les     bx, trackdata3 ;~ 0613:4E33
cs=0x613;eip=0x004e37; 	X(MOV(*(dw*)(raddr(es,bx+0x18)), 4));	// 17561 mov     word ptr es:[bx+18h], 4 ;~ 0613:4E37
cs=0x613;eip=0x004e3d; 	T(LES(bx, trackdata3));	// 17562 les     bx, trackdata3 ;~ 0613:4E3D
cs=0x613;eip=0x004e41; 	X(MOV(*(dw*)(raddr(es,bx+0x1A)), si));	// 17563 mov     es:[bx+1Ah], si ;~ 0613:4E41
cs=0x613;eip=0x004e45; 	T(LES(bx, trackdata3));	// 17564 les     bx, trackdata3 ;~ 0613:4E45
cs=0x613;eip=0x004e49; 	X(MOV(*(dw*)(raddr(es,bx+0x1C)), 1));	// 17565 mov     word ptr es:[bx+1Ch], 1 ;~ 0613:4E49
cs=0x613;eip=0x004e4f; 	T(LES(bx, trackdata3));	// 17566 les     bx, trackdata3 ;~ 0613:4E4F
cs=0x613;eip=0x004e53; 	X(MOV(*(dw*)(raddr(es,bx+0x1E)), 2));	// 17567 mov     word ptr es:[bx+1Eh], 2 ;~ 0613:4E53
cs=0x613;eip=0x004e59; 	T(LES(bx, trackdata3));	// 17568 les     bx, trackdata3 ;~ 0613:4E59
cs=0x613;eip=0x004e5d; 	X(MOV(*(dw*)(raddr(es,bx+0x20)), 3));	// 17569 mov     word ptr es:[bx+20h], 3 ;~ 0613:4E5D
cs=0x613;eip=0x004e63; 	T(LES(bx, trackdata3));	// 17570 les     bx, trackdata3 ;~ 0613:4E63
cs=0x613;eip=0x004e67; 	X(MOV(*(dw*)(raddr(es,bx+0x22)), si));	// 17571 mov     es:[bx+22h], si ;~ 0613:4E67
cs=0x613;eip=0x004e6b; 	X(MOV(oppnentsped, 0x0C8));	// 17572 mov     oppnentSped, 0C8h ; 'È' ;~ 0613:4E6B
cs=0x613;eip=0x004e70; 	T(SUB(ax, ax));	// 17573 sub     ax, ax ;~ 0613:4E70
cs=0x613;eip=0x004e72; 	X(PUSH(ax));	// 17574 push    ax ;~ 0613:4E72
cs=0x613;eip=0x004e73; 	T(MOV(ax, word_43924));	// 17575 mov     ax, word_43924 ;~ 0613:4E73
cs=0x613;eip=0x004e76; 	T(ADD(ax, 0x12E));	// 17576 add     ax, 12Eh ;~ 0613:4E76
cs=0x613;eip=0x004e79; 	T(CWD);	// 17577 cwd ;~ 0613:4E79
cs=0x613;eip=0x004e7a; 	T(MOV(cl, 6));	// 17578 mov     cl, 6 ;~ 0613:4E7A
loc_1958c:
	// 5451 
cs=0x613;eip=0x004e7c; 	T(SHL(ax, 1));	// 17581 shl     ax, 1 ;~ 0613:4E7C
cs=0x613;eip=0x004e7e; 	T(RCL(dx, 1));	// 17582 rcl     dx, 1 ;~ 0613:4E7E
cs=0x613;eip=0x004e80; 	T(DEC(cl));	// 17583 dec     cl ;~ 0613:4E80
cs=0x613;eip=0x004e82; 	R(JNZ(loc_1958c));	// 17584 jnz     short loc_1958C ;~ 0613:4E82
cs=0x613;eip=0x004e84; 	X(PUSH(dx));	// 17585 push    dx ;~ 0613:4E84
cs=0x613;eip=0x004e85; 	X(PUSH(ax));	// 17586 push    ax ;~ 0613:4E85
cs=0x613;eip=0x004e86; 	T(SUB(ax, ax));	// 17587 sub     ax, ax ;~ 0613:4E86
cs=0x613;eip=0x004e88; 	X(PUSH(ax));	// 17588 push    ax ;~ 0613:4E88
cs=0x613;eip=0x004e89; 	X(PUSH(ax));	// 17589 push    ax ;~ 0613:4E89
cs=0x613;eip=0x004e8a; 	T(MOV(ax, 0x7700));	// 17590 mov     ax, 7700h ;~ 0613:4E8A
cs=0x613;eip=0x004e8d; 	T(MOV(dx, 1));	// 17591 mov     dx, 1 ;~ 0613:4E8D
cs=0x613;eip=0x004e90; 	X(PUSH(dx));	// 17592 push    dx ;~ 0613:4E90
cs=0x613;eip=0x004e91; 	X(PUSH(ax));	// 17593 push    ax ;~ 0613:4E91
cs=0x613;eip=0x004e92; 	T(MOV(ax, dx));	// 17594 mov     ax, dx ;~ 0613:4E92
cs=0x613;eip=0x004e94; 	X(PUSH(ax));	// 17595 push    ax ;~ 0613:4E94
cs=0x613;eip=0x004e95; 	T(MOV(ax, offset(dseg,simd_opponent)));	// 17596 mov     ax, offset simd_opponent ;~ 0613:4E95
cs=0x613;eip=0x004e98; 	X(PUSH(ax));	// 17597 push    ax ;~ 0613:4E98
cs=0x613;eip=0x004e99; 	T(MOV(ax, offset(dseg,word_446b6)));	// 17598 mov     ax, offset word_446B6 ;~ 0613:4E99
cs=0x613;eip=0x004e9c; 	X(PUSH(ax));	// 17599 push    ax ;~ 0613:4E9C
cs=0x613;eip=0x004e9d; 	X(PUSH(cs));	// 17600 push    cs ;~ 0613:4E9D
cs=0x613;eip=0x004e9e; 	R(CALL(init_carstate_from_simd,0));	// 17601 call    near ptr init_carstate_from_simd ;~ 0613:4E9E
cs=0x613;eip=0x004ea1; 	T(ADD(sp, 0x14));	// 17602 add     sp, 14h ;~ 0613:4EA1
cs=0x613;eip=0x004ea4; 	T(MOV(ax, offset(dseg,byte_4488d)));	// 17603 mov     ax, offset byte_4488D ;~ 0613:4EA4
cs=0x613;eip=0x004ea7; 	X(PUSH(ax));	// 17604 push    ax ;~ 0613:4EA7
cs=0x613;eip=0x004ea8; 	T(MOV(al, byte_44784));	// 17605 mov     al, byte_44784 ;~ 0613:4EA8
cs=0x613;eip=0x004eab; 	X(INC(byte_44784));	// 17606 inc     byte_44784 ;~ 0613:4EAB
cs=0x613;eip=0x004eaf; 	T(SUB(ah, ah));	// 17607 sub     ah, ah ;~ 0613:4EAF
cs=0x613;eip=0x004eb1; 	X(PUSH(ax));	// 17608 push    ax ;~ 0613:4EB1
cs=0x613;eip=0x004eb2; 	T(MOV(ax, offset(dseg,word_4475a)));	// 17609 mov     ax, offset word_4475A ;~ 0613:4EB2
cs=0x613;eip=0x004eb5; 	X(PUSH(ax));	// 17610 push    ax ;~ 0613:4EB5
cs=0x613;eip=0x004eb6; 	T(MOV(bx, word_44700));	// 17611 mov     bx, word_44700 ;~ 0613:4EB6
cs=0x613;eip=0x004eba; 	T(SHL(bx, 1));	// 17612 shl     bx, 1 ;~ 0613:4EBA
cs=0x613;eip=0x004ebc; 	T(LES(di, trackdata3));	// 17613 les     di, trackdata3 ;~ 0613:4EBC
cs=0x613;eip=0x004ec0; 	X(PUSH(*(dw*)(raddr(es,bx+di))));	// 17614 push    word ptr es:[bx+di] ;~ 0613:4EC0
cs=0x613;eip=0x004ec3; 	X(PUSH(cs));	// 17615 push    cs ;~ 0613:4EC3
cs=0x613;eip=0x004ec4; 	R(CALL(sub_18d60,0));	// 17616 call    near ptr sub_18D60 ;~ 0613:4EC4
cs=0x613;eip=0x004ec7; 	T(ADD(sp, 8));	// 17617 add     sp, 8 ;~ 0613:4EC7
cs=0x613;eip=0x004eca; 	X(POP(si));	// 17618 pop     si ;~ 0613:4ECA
cs=0x613;eip=0x004ecb; 	X(POP(di));	// 17619 pop     di ;~ 0613:4ECB
cs=0x613;eip=0x004ecc; 	T(MOV(sp, bp));	// 17620 mov     sp, bp ;~ 0613:4ECC
cs=0x613;eip=0x004ece; 	X(POP(bp));	// 17621 pop     bp ;~ 0613:4ECE
cs=0x613;eip=0x004ecf; 	R(RETF(0));	// 17622 retf ;~ 0613:4ECF
do_opponent_op:
	// 17629 
cs=0x613;eip=0x004ed0; 	X(PUSH(cs));	// 17630 push    cs ;~ 0613:4ED0
ret_613_4ed1:
	// 5452 
cs=0x613;eip=0x004ed1; 	R(CALL(opponent_op,0));	// 17631 call    near ptr opponent_op ;~ 0613:4ED1
cs=0x613;eip=0x004ed4; 	R(RETF(0));	// 17632 retf ;~ 0613:4ED4
update_crash_state:
	// 17642 
#undef var_4
#define var_4 -4
	// 17645 var_4           = word ptr -4 ;~ 0613:4ED6
#undef var_2
#define var_2 -2
	// 17646 var_2           = byte ptr -2 ;~ 0613:4ED6
#undef arg_0
#define arg_0 6
	// 17647 arg_0           = word ptr  6 ;~ 0613:4ED6
#undef arg_2
#define arg_2 8
	// 17648 arg_2           = word ptr  8 ;~ 0613:4ED6
ret_613_4ed6:
	// 5453 
cs=0x613;eip=0x004ed6; 	X(PUSH(bp));	// 17650 push    bp ;~ 0613:4ED6
cs=0x613;eip=0x004ed7; 	T(MOV(bp, sp));	// 17651 mov     bp, sp ;~ 0613:4ED7
cs=0x613;eip=0x004ed9; 	T(SUB(sp, 4));	// 17652 sub     sp, 4 ;~ 0613:4ED9
cs=0x613;eip=0x004edc; 	X(PUSH(di));	// 17653 push    di ;~ 0613:4EDC
cs=0x613;eip=0x004edd; 	X(PUSH(si));	// 17654 push    si ;~ 0613:4EDD
cs=0x613;eip=0x004ede; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 17655 mov     ax, [bp+arg_2] ;~ 0613:4EDE
cs=0x613;eip=0x004ee1; 	T(OR(ax, ax));	// 17656 or      ax, ax ;~ 0613:4EE1
cs=0x613;eip=0x004ee3; 	R(JZ(loc_195fc));	// 17657 jz      short loc_195FC ;~ 0613:4EE3
cs=0x613;eip=0x004ee5; 	T(CMP(ax, 1));	// 17658 cmp     ax, 1 ;~ 0613:4EE5
cs=0x613;eip=0x004ee8; 	R(JZ(loc_19612));	// 17659 jz      short loc_19612 ;~ 0613:4EE8
cs=0x613;eip=0x004eea; 	R(JMP(loc_19601));	// 17660 jmp     short loc_19601 ;~ 0613:4EEA
loc_195fc:
	// 5454 
cs=0x613;eip=0x004eec; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), offset(dseg,word_445e6)));	// 17664 mov     [bp+var_4], offset word_445E6 ;~ 0613:4EEC
loc_19601:
	// 5455 
cs=0x613;eip=0x004ef1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 17668 mov     bx, [bp+var_4] ;~ 0613:4EF1
cs=0x613;eip=0x004ef4; 	T(CMP(*(raddr(ds,bx+0x0C9)), 0));	// 17669 cmp     byte ptr [bx+0C9h], 0 ;~ 0613:4EF4
cs=0x613;eip=0x004ef9; 	R(JZ(loc_1961a));	// 17670 jz      short loc_1961A ;~ 0613:4EF9
cs=0x613;eip=0x004efb; 	X(POP(si));	// 17671 pop     si ;~ 0613:4EFB
cs=0x613;eip=0x004efc; 	X(POP(di));	// 17672 pop     di ;~ 0613:4EFC
cs=0x613;eip=0x004efd; 	T(MOV(sp, bp));	// 17673 mov     sp, bp ;~ 0613:4EFD
cs=0x613;eip=0x004eff; 	X(POP(bp));	// 17674 pop     bp ;~ 0613:4EFF
cs=0x613;eip=0x004f00; 	R(RETF(0));	// 17675 retf ;~ 0613:4F00
loc_19612:
	// 5456 
cs=0x613;eip=0x004f02; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), offset(dseg,word_446b6)));	// 17680 mov     [bp+var_4], offset word_446B6 ;~ 0613:4F02
cs=0x613;eip=0x004f07; 	R(JMP(loc_19601));	// 17681 jmp     short loc_19601 ;~ 0613:4F07
loc_1961a:
	// 5457 
cs=0x613;eip=0x004f0a; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 17686 mov     [bp+var_2], 0 ;~ 0613:4F0A
cs=0x613;eip=0x004f0e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 17687 mov     ax, [bp+arg_0] ;~ 0613:4F0E
cs=0x613;eip=0x004f11; 	T(CMP(ax, 1));	// 17688 cmp     ax, 1 ;~ 0613:4F11
cs=0x613;eip=0x004f14; 	R(JZ(loc_1967f));	// 17689 jz      short loc_1967F ;~ 0613:4F14
cs=0x613;eip=0x004f16; 	T(CMP(ax, 2));	// 17690 cmp     ax, 2 ;~ 0613:4F16
cs=0x613;eip=0x004f19; 	R(JNZ(loc_1962e));	// 17691 jnz     short loc_1962E ;~ 0613:4F19
cs=0x613;eip=0x004f1b; 	R(JMP(loc_196de));	// 17692 jmp     loc_196DE ;~ 0613:4F1B
loc_1962e:
	// 5458 
cs=0x613;eip=0x004f1e; 	T(CMP(ax, 3));	// 17696 cmp     ax, 3 ;~ 0613:4F1E
cs=0x613;eip=0x004f21; 	R(JNZ(loc_19636));	// 17697 jnz     short loc_19636 ;~ 0613:4F21
cs=0x613;eip=0x004f23; 	R(JMP(loc_19730));	// 17698 jmp     loc_19730 ;~ 0613:4F23
loc_19636:
	// 5459 
cs=0x613;eip=0x004f26; 	T(CMP(ax, 4));	// 17702 cmp     ax, 4 ;~ 0613:4F26
cs=0x613;eip=0x004f29; 	R(JZ(loc_19642));	// 17703 jz      short loc_19642 ;~ 0613:4F29
cs=0x613;eip=0x004f2b; 	T(CMP(ax, 5));	// 17704 cmp     ax, 5 ;~ 0613:4F2B
cs=0x613;eip=0x004f2e; 	R(JZ(loc_19676));	// 17705 jz      short loc_19676 ;~ 0613:4F2E
cs=0x613;eip=0x004f30; 	R(JMP(loc_1964e));	// 17706 jmp     short loc_1964E ;~ 0613:4F30
loc_19642:
	// 5460 
cs=0x613;eip=0x004f32; 	X(MOV(word_445cc, 1));	// 17710 mov     word_445CC, 1 ;~ 0613:4F32
cs=0x613;eip=0x004f38; 	X(MOV(word_445ce, 1));	// 17711 mov     word_445CE, 1 ;~ 0613:4F38
loc_1964e:
	// 5461 
cs=0x613;eip=0x004f3e; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 17715 cmp     [bp+var_2], 0 ;~ 0613:4F3E
cs=0x613;eip=0x004f42; 	R(JZ(loc_19664));	// 17716 jz      short loc_19664 ;~ 0613:4F42
cs=0x613;eip=0x004f44; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 17717 mov     bx, [bp+var_4] ;~ 0613:4F44
cs=0x613;eip=0x004f47; 	X(MOV(*(dw*)(raddr(ds,bx+0x2C)), 0));	// 17718 mov     word ptr [bx+2Ch], 0 ;~ 0613:4F47
cs=0x613;eip=0x004f4c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 17719 mov     bx, [bp+var_4] ;~ 0613:4F4C
cs=0x613;eip=0x004f4f; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), 0));	// 17720 mov     word ptr [bx+2Ah], 0 ;~ 0613:4F4F
loc_19664:
	// 5462 
cs=0x613;eip=0x004f54; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 17723 cmp     [bp+arg_2], 0 ;~ 0613:4F54
cs=0x613;eip=0x004f58; 	R(JNZ(loc_1966d));	// 17724 jnz     short loc_1966D ;~ 0613:4F58
cs=0x613;eip=0x004f5a; 	R(JMP(loc_19760));	// 17725 jmp     loc_19760 ;~ 0613:4F5A
loc_1966d:
	// 5463 
cs=0x613;eip=0x004f5d; 	T(MOV(ax, word_445d4));	// 17729 mov     ax, word_445D4 ;~ 0613:4F5D
cs=0x613;eip=0x004f60; 	X(MOV(word_445dc, ax));	// 17730 mov     word_445DC, ax ;~ 0613:4F60
cs=0x613;eip=0x004f63; 	R(JMP(loc_19766));	// 17731 jmp     loc_19766 ;~ 0613:4F63
loc_19676:
	// 5464 
cs=0x613;eip=0x004f66; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), 1));	// 17735 mov     [bp+arg_0], 1 ;~ 0613:4F66
cs=0x613;eip=0x004f6b; 	X(MOV(*(raddr(ss,bp+var_2)), 1));	// 17736 mov     [bp+var_2], 1 ;~ 0613:4F6B
loc_1967f:
	// 5465 
cs=0x613;eip=0x004f6f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 17739 mov     bx, [bp+var_4] ;~ 0613:4F6F
cs=0x613;eip=0x004f72; 	X(MOV(*(raddr(ds,bx+0x0C9)), 1));	// 17740 mov     byte ptr [bx+0C9h], 1 ;~ 0613:4F72
cs=0x613;eip=0x004f77; 	T(SUB(ax, ax));	// 17741 sub     ax, ax ;~ 0613:4F77
cs=0x613;eip=0x004f79; 	X(PUSH(ax));	// 17742 push    ax ;~ 0613:4F79
cs=0x613;eip=0x004f7a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 17743 mov     bx, [bp+var_4] ;~ 0613:4F7A
cs=0x613;eip=0x004f7d; 	X(PUSH(*(dw*)(raddr(ds,bx+0x18))));	// 17744 push    word ptr [bx+18h] ;~ 0613:4F7D
cs=0x613;eip=0x004f80; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 17745 push    [bp+arg_2] ;~ 0613:4F80
cs=0x613;eip=0x004f83; 	X(PUSH(cs));	// 17746 push    cs ;~ 0613:4F83
cs=0x613;eip=0x004f84; 	R(CALL(state_op_unk,0));	// 17747 call    near ptr state_op_unk ;~ 0613:4F84
cs=0x613;eip=0x004f87; 	T(ADD(sp, 6));	// 17748 add     sp, 6 ;~ 0613:4F87
cs=0x613;eip=0x004f8a; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 17749 cmp     [bp+arg_2], 0 ;~ 0613:4F8A
cs=0x613;eip=0x004f8e; 	R(JNZ(loc_196b3));	// 17750 jnz     short loc_196B3 ;~ 0613:4F8E
cs=0x613;eip=0x004f90; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 17751 mov     bx, [bp+var_4] ;~ 0613:4F90
cs=0x613;eip=0x004f93; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x2C))));	// 17752 mov     ax, [bx+2Ch] ;~ 0613:4F93
cs=0x613;eip=0x004f96; 	X(MOV(word_445e0, ax));	// 17753 mov     word_445E0, ax ;~ 0613:4F96
cs=0x613;eip=0x004f99; 	T(MOV(ax, framespersec));	// 17754 mov     ax, framespersec ;~ 0613:4F99
cs=0x613;eip=0x004f9c; 	T(SHL(ax, 1));	// 17755 shl     ax, 1 ;~ 0613:4F9C
cs=0x613;eip=0x004f9e; 	T(SHL(ax, 1));	// 17756 shl     ax, 1 ;~ 0613:4F9E
cs=0x613;eip=0x004fa0; 	X(MOV(word_445ce, ax));	// 17757 mov     word_445CE, ax ;~ 0613:4FA0
loc_196b3:
	// 5466 
cs=0x613;eip=0x004fa3; 	T(CMP(is_in_replay, 0));	// 17760 cmp     is_in_replay, 0 ;~ 0613:4FA3
cs=0x613;eip=0x004fa8; 	R(JNZ(loc_1964e));	// 17761 jnz     short loc_1964E ;~ 0613:4FA8
cs=0x613;eip=0x004faa; 	T(CMP(byte_459d8, 0));	// 17762 cmp     byte_459D8, 0 ;~ 0613:4FAA
cs=0x613;eip=0x004faf; 	R(JZ(loc_1964e));	// 17763 jz      short loc_1964E ;~ 0613:4FAF
cs=0x613;eip=0x004fb1; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 17764 cmp     [bp+arg_2], 0 ;~ 0613:4FB1
cs=0x613;eip=0x004fb5; 	R(JNZ(loc_196ce));	// 17765 jnz     short loc_196CE ;~ 0613:4FB5
cs=0x613;eip=0x004fb7; 	X(PUSH(word_43964));	// 17766 push    word_43964 ;~ 0613:4FB7
cs=0x613;eip=0x004fbb; 	R(JMP(loc_196d2));	// 17767 jmp     short loc_196D2 ;~ 0613:4FBB
loc_196ce:
	// 5467 
cs=0x613;eip=0x004fbe; 	X(PUSH(word_4408c));	// 17772 push    word_4408C ;~ 0613:4FBE
loc_196d2:
	// 5468 
cs=0x613;eip=0x004fc2; 	R(CALLF(audio_function2_wrap,0));	// 17775 call    audio_function2_wrap ;~ 0613:4FC2
cs=0x613;eip=0x004fc7; 	T(ADD(sp, 2));	// 17776 add     sp, 2 ;~ 0613:4FC7
cs=0x613;eip=0x004fca; 	R(JMP(loc_1964e));	// 17777 jmp     loc_1964E ;~ 0613:4FCA
loc_196de:
	// 5469 
cs=0x613;eip=0x004fce; 	T(CMP(is_in_replay, 0));	// 17782 cmp     is_in_replay, 0 ;~ 0613:4FCE
cs=0x613;eip=0x004fd3; 	R(JNZ(loc_19704));	// 17783 jnz     short loc_19704 ;~ 0613:4FD3
cs=0x613;eip=0x004fd5; 	T(CMP(byte_459d8, 0));	// 17784 cmp     byte_459D8, 0 ;~ 0613:4FD5
cs=0x613;eip=0x004fda; 	R(JZ(loc_19704));	// 17785 jz      short loc_19704 ;~ 0613:4FDA
cs=0x613;eip=0x004fdc; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 17786 cmp     [bp+arg_2], 0 ;~ 0613:4FDC
cs=0x613;eip=0x004fe0; 	R(JNZ(loc_196f8));	// 17787 jnz     short loc_196F8 ;~ 0613:4FE0
cs=0x613;eip=0x004fe2; 	X(PUSH(word_43964));	// 17788 push    word_43964 ;~ 0613:4FE2
cs=0x613;eip=0x004fe6; 	R(JMP(loc_196fc));	// 17789 jmp     short loc_196FC ;~ 0613:4FE6
loc_196f8:
	// 5470 
cs=0x613;eip=0x004fe8; 	X(PUSH(word_4408c));	// 17793 push    word_4408C ;~ 0613:4FE8
loc_196fc:
	// 5471 
cs=0x613;eip=0x004fec; 	R(CALLF(audio_function2_wrap,0));	// 17796 call    audio_function2_wrap ;~ 0613:4FEC
cs=0x613;eip=0x004ff1; 	T(ADD(sp, 2));	// 17797 add     sp, 2 ;~ 0613:4FF1
loc_19704:
	// 5472 
cs=0x613;eip=0x004ff4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 17801 mov     bx, [bp+var_4] ;~ 0613:4FF4
cs=0x613;eip=0x004ff7; 	X(MOV(*(raddr(ds,bx+0x0C9)), 2));	// 17802 mov     byte ptr [bx+0C9h], 2 ;~ 0613:4FF7
cs=0x613;eip=0x004ffc; 	X(MOV(*(raddr(ss,bp+var_2)), 1));	// 17803 mov     [bp+var_2], 1 ;~ 0613:4FFC
cs=0x613;eip=0x005000; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 17804 cmp     [bp+arg_2], 0 ;~ 0613:5000
cs=0x613;eip=0x005004; 	R(JZ(loc_19719));	// 17805 jz      short loc_19719 ;~ 0613:5004
cs=0x613;eip=0x005006; 	R(JMP(loc_1964e));	// 17806 jmp     loc_1964E ;~ 0613:5006
loc_19719:
	// 5473 
cs=0x613;eip=0x005009; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 17810 mov     bx, [bp+var_4] ;~ 0613:5009
cs=0x613;eip=0x00500c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x2C))));	// 17811 mov     ax, [bx+2Ch] ;~ 0613:500C
cs=0x613;eip=0x00500f; 	X(MOV(word_445e0, ax));	// 17812 mov     word_445E0, ax ;~ 0613:500F
cs=0x613;eip=0x005012; 	T(MOV(ax, framespersec));	// 17813 mov     ax, framespersec ;~ 0613:5012
cs=0x613;eip=0x005015; 	T(SHL(ax, 1));	// 17814 shl     ax, 1 ;~ 0613:5015
cs=0x613;eip=0x005017; 	T(SHL(ax, 1));	// 17815 shl     ax, 1 ;~ 0613:5017
loc_19729:
	// 5474 
cs=0x613;eip=0x005019; 	X(MOV(word_445ce, ax));	// 17818 mov     word_445CE, ax ;~ 0613:5019
cs=0x613;eip=0x00501c; 	R(JMP(loc_1964e));	// 17819 jmp     loc_1964E ;~ 0613:501C
loc_19730:
	// 5475 
cs=0x613;eip=0x005020; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 17824 mov     bx, [bp+var_4] ;~ 0613:5020
cs=0x613;eip=0x005023; 	X(MOV(*(raddr(ds,bx+0x0C9)), 3));	// 17825 mov     byte ptr [bx+0C9h], 3 ;~ 0613:5023
cs=0x613;eip=0x005028; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 17826 cmp     [bp+arg_2], 0 ;~ 0613:5028
cs=0x613;eip=0x00502c; 	R(JNZ(loc_19752));	// 17827 jnz     short loc_19752 ;~ 0613:502C
cs=0x613;eip=0x00502e; 	T(MOV(ax, word_445d4));	// 17828 mov     ax, word_445D4 ;~ 0613:502E
cs=0x613;eip=0x005031; 	T(ADD(ax, word_445de));	// 17829 add     ax, word_445DE ;~ 0613:5031
cs=0x613;eip=0x005035; 	T(ADD(ax, elapsed_time1));	// 17830 add     ax, elapsed_time1 ;~ 0613:5035
cs=0x613;eip=0x005039; 	X(MOV(word_445d6, ax));	// 17831 mov     word_445D6, ax ;~ 0613:5039
cs=0x613;eip=0x00503c; 	T(MOV(ax, framespersec));	// 17832 mov     ax, framespersec ;~ 0613:503C
cs=0x613;eip=0x00503f; 	R(JMP(loc_19729));	// 17833 jmp     short loc_19729 ;~ 0613:503F
loc_19752:
	// 5476 
cs=0x613;eip=0x005042; 	T(MOV(ax, word_445d4));	// 17838 mov     ax, word_445D4 ;~ 0613:5042
cs=0x613;eip=0x005045; 	T(ADD(ax, elapsed_time1));	// 17839 add     ax, elapsed_time1 ;~ 0613:5045
cs=0x613;eip=0x005049; 	X(MOV(word_445d8, ax));	// 17840 mov     word_445D8, ax ;~ 0613:5049
cs=0x613;eip=0x00504c; 	R(JMP(loc_1964e));	// 17841 jmp     loc_1964E ;~ 0613:504C
loc_19760:
	// 5477 
cs=0x613;eip=0x005050; 	T(MOV(ax, word_445d4));	// 17846 mov     ax, word_445D4 ;~ 0613:5050
cs=0x613;eip=0x005053; 	X(MOV(word_445da, ax));	// 17847 mov     word_445DA, ax ;~ 0613:5053
loc_19766:
	// 5478 
cs=0x613;eip=0x005056; 	T(CMP(byte_4488a, 0));	// 17850 cmp     byte_4488A, 0 ;~ 0613:5056
cs=0x613;eip=0x00505b; 	R(JNZ(loc_19779));	// 17851 jnz     short loc_19779 ;~ 0613:505B
cs=0x613;eip=0x00505d; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 17852 cmp     [bp+arg_2], 0 ;~ 0613:505D
cs=0x613;eip=0x005061; 	R(JNZ(loc_19779));	// 17853 jnz     short loc_19779 ;~ 0613:5061
cs=0x613;eip=0x005063; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0))));	// 17854 mov     al, byte ptr [bp+arg_0] ;~ 0613:5063
cs=0x613;eip=0x005066; 	X(MOV(byte_4488a, al));	// 17855 mov     byte_4488A, al ;~ 0613:5066
loc_19779:
	// 5479 
cs=0x613;eip=0x005069; 	T(TEST(byte_43966, 4));	// 17859 test    byte_43966, 4 ;~ 0613:5069
cs=0x613;eip=0x00506e; 	R(JNZ(loc_1978d));	// 17860 jnz     short loc_1978D ;~ 0613:506E
cs=0x613;eip=0x005070; 	T(MOV(di, offset(dseg,gstate_travdist)));	// 17861 mov     di, offset gState_travDist ;~ 0613:5070
cs=0x613;eip=0x005073; 	T(MOV(si, offset(dseg,word_445d0)));	// 17862 mov     si, offset word_445D0 ;~ 0613:5073
cs=0x613;eip=0x005076; 	X(PUSH(ds));	// 17863 push    ds ;~ 0613:5076
cs=0x613;eip=0x005077; 	X(POP(es));	// 17864 pop     es ;~ 0613:5077
cs=0x613;eip=0x005078; 	T(MOV(cx, 0x0B));	// 17866 mov     cx, 0Bh ;~ 0613:5078
	// 17867 repne movsw ;~ 0613:507B
cs=0x613;eip=0x00507b; 	X(	REPNE MOVSW);	// 17867 repne movsw ;~ 0613:507B
loc_1978d:
	// 5480 
cs=0x613;eip=0x00507d; 	X(POP(si));	// 17870 pop     si ;~ 0613:507D
cs=0x613;eip=0x00507e; 	X(POP(di));	// 17871 pop     di ;~ 0613:507E
cs=0x613;eip=0x00507f; 	T(MOV(sp, bp));	// 17872 mov     sp, bp ;~ 0613:507F
cs=0x613;eip=0x005081; 	X(POP(bp));	// 17873 pop     bp ;~ 0613:5081
cs=0x613;eip=0x005082; 	R(RETF(0));	// 17874 retf ;~ 0613:5082
plane_rotate_op:
	// 17884 
#undef var_36
#define var_36 -0x36
	// 17887 var_36          = dword ptr -36h ;~ 0613:5084
#undef var_32
#define var_32 -0x32
	// 17888 var_32          = word ptr -32h ;~ 0613:5084
#undef var_2e
#define var_2e -0x2E
	// 17889 var_2E          = word ptr -2Eh ;~ 0613:5084
#undef var_2c
#define var_2c -0x2C
	// 17890 var_2C          = byte ptr -2Ch ;~ 0613:5084
#undef var_1a
#define var_1a -0x1A
	// 17891 var_1A          = byte ptr -1Ah ;~ 0613:5084
#undef var_8
#define var_8 -8
	// 17892 var_8           = byte ptr -8 ;~ 0613:5084
ret_613_5084:
	// 5481 
cs=0x613;eip=0x005084; 	X(PUSH(bp));	// 17894 push    bp ;~ 0613:5084
cs=0x613;eip=0x005085; 	T(MOV(bp, sp));	// 17895 mov     bp, sp ;~ 0613:5085
cs=0x613;eip=0x005087; 	T(SUB(sp, 0x36));	// 17896 sub     sp, 36h ;~ 0613:5087
cs=0x613;eip=0x00508a; 	X(PUSH(di));	// 17897 push    di ;~ 0613:508A
cs=0x613;eip=0x00508b; 	X(PUSH(si));	// 17898 push    si ;~ 0613:508B
cs=0x613;eip=0x00508c; 	T(CMP(planindex_copy, 0x0FFFF));	// 17899 cmp     planindex_copy, 0FFFFh ;~ 0613:508C
cs=0x613;eip=0x005091; 	R(JNZ(loc_197a6));	// 17900 jnz     short loc_197A6 ;~ 0613:5091
cs=0x613;eip=0x005093; 	R(JMP(loc_198c2));	// 17901 jmp     loc_198C2 ;~ 0613:5093
loc_197a6:
	// 5482 
cs=0x613;eip=0x005096; 	T(MOV(ax, 0x22));	// 17905 mov     ax, 22h ; '"' ;~ 0613:5096
cs=0x613;eip=0x005099; 	X(IMUL1_2(planindex_copy));	// 17906 imul    planindex_copy ;~ 0613:5099
cs=0x613;eip=0x00509d; 	T(ADD(ax, planptr));	// 17907 add     ax, planptr ;~ 0613:509D
cs=0x613;eip=0x0050a1; 	T(MOV(dx, word_454c4));	// 17908 mov     dx, word_454C4 ;~ 0613:50A1
cs=0x613;eip=0x0050a5; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_36))), ax));	// 17909 mov     word ptr [bp+var_36], ax ;~ 0613:50A5
cs=0x613;eip=0x0050a8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_36+2))), dx));	// 17910 mov     word ptr [bp+var_36+2], dx ;~ 0613:50A8
cs=0x613;eip=0x0050ab; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_36))));	// 17911 les     bx, [bp+var_36] ;~ 0613:50AB
cs=0x613;eip=0x0050ae; 	T(MOV(ax, pstate_minusrotate_x_2));	// 17913 mov     ax, pState_minusRotate_x_2 ;~ 0613:50AE
cs=0x613;eip=0x0050b1; 	T(CMP(*(dw*)(raddr(es,bx+2)), ax));	// 17914 cmp     es:[bx+2], ax ;~ 0613:50B1
cs=0x613;eip=0x0050b5; 	R(JNZ(loc_197d6));	// 17915 jnz     short loc_197D6 ;~ 0613:50B5
cs=0x613;eip=0x0050b7; 	T(MOV(ax, pstate_minusrotate_z_2));	// 17916 mov     ax, pState_minusRotate_z_2 ;~ 0613:50B7
cs=0x613;eip=0x0050ba; 	T(CMP(*(dw*)(raddr(es,bx+0)), ax));	// 17917 cmp     es:[bx+0], ax ;~ 0613:50BA
cs=0x613;eip=0x0050bd; 	R(JNZ(loc_197d6));	// 17918 jnz     short loc_197D6 ;~ 0613:50BD
cs=0x613;eip=0x0050bf; 	T(MOV(si, pstate_minusrotate_y_2));	// 17919 mov     si, pState_minusRotate_y_2 ;~ 0613:50BF
cs=0x613;eip=0x0050c3; 	R(JMP(loc_19845));	// 17920 jmp     short loc_19845 ;~ 0613:50C3
loc_197d6:
	// 5483 
cs=0x613;eip=0x0050c6; 	T(ax = bp+var_8);	// 17926 lea     ax, [bp+var_8] ;~ 0613:50C6
cs=0x613;eip=0x0050c9; 	X(PUSH(ax));	// 17927 push    ax ;~ 0613:50C9
cs=0x613;eip=0x0050ca; 	T(MOV(ax, offset(dseg,mat_unk)));	// 17928 mov     ax, offset mat_unk ;~ 0613:50CA
cs=0x613;eip=0x0050cd; 	X(PUSH(ax));	// 17929 push    ax ;~ 0613:50CD
cs=0x613;eip=0x0050ce; 	T(MOV(ax, offset(dseg,vec_unk2)));	// 17930 mov     ax, offset vec_unk2 ;~ 0613:50CE
cs=0x613;eip=0x0050d1; 	X(PUSH(ax));	// 17931 push    ax ;~ 0613:50D1
cs=0x613;eip=0x0050d2; 	R(CALLF(mat_mul_vector,0));	// 17932 call    mat_mul_vector ;~ 0613:50D2
cs=0x613;eip=0x0050d7; 	T(ADD(sp, 6));	// 17933 add     sp, 6 ;~ 0613:50D7
cs=0x613;eip=0x0050da; 	T(MOV(ax, 0x22));	// 17934 mov     ax, 22h ; '"' ;~ 0613:50DA
cs=0x613;eip=0x0050dd; 	X(IMUL1_2(planindex_copy));	// 17935 imul    planindex_copy ;~ 0613:50DD
cs=0x613;eip=0x0050e1; 	T(ADD(ax, planptr));	// 17936 add     ax, planptr ;~ 0613:50E1
cs=0x613;eip=0x0050e5; 	T(MOV(dx, word_454c4));	// 17937 mov     dx, word_454C4 ;~ 0613:50E5
cs=0x613;eip=0x0050e9; 	T(ADD(ax, 0x10));	// 17938 add     ax, 10h         ; plane rotation matrix ;~ 0613:50E9
cs=0x613;eip=0x0050ec; 	X(PUSH(si));	// 17939 push    si ;~ 0613:50EC
cs=0x613;eip=0x0050ed; 	T(di = bp+var_1a);	// 17940 lea     di, [bp+var_1A] ;~ 0613:50ED
cs=0x613;eip=0x0050f0; 	T(MOV(si, ax));	// 17941 mov     si, ax ;~ 0613:50F0
cs=0x613;eip=0x0050f2; 	X(PUSH(ss));	// 17942 push    ss ;~ 0613:50F2
cs=0x613;eip=0x0050f3; 	X(POP(es));	// 17943 pop     es ;~ 0613:50F3
cs=0x613;eip=0x0050f4; 	X(PUSH(ds));	// 17944 push    ds ;~ 0613:50F4
cs=0x613;eip=0x0050f5; 	T(MOV(ds, dx));	// 17945 mov     ds, dx ;~ 0613:50F5
cs=0x613;eip=0x0050f7; 	T(MOV(cx, 9));	// 17946 mov     cx, 9 ;~ 0613:50F7
	// 17947 repne movsw ;~ 0613:50FA
cs=0x613;eip=0x0050fa; 	X(	REPNE MOVSW);	// 17947 repne movsw ;~ 0613:50FA
cs=0x613;eip=0x0050fc; 	X(POP(ds));	// 17948 pop     ds ;~ 0613:50FC
cs=0x613;eip=0x0050fd; 	X(POP(si));	// 17949 pop     si ;~ 0613:50FD
cs=0x613;eip=0x0050fe; 	T(ax = bp+var_2c);	// 17950 lea     ax, [bp+var_2C] ;~ 0613:50FE
cs=0x613;eip=0x005101; 	X(PUSH(ax));	// 17951 push    ax ;~ 0613:5101
cs=0x613;eip=0x005102; 	T(ax = bp+var_1a);	// 17952 lea     ax, [bp+var_1A] ;~ 0613:5102
cs=0x613;eip=0x005105; 	X(PUSH(ax));	// 17953 push    ax ;~ 0613:5105
cs=0x613;eip=0x005106; 	R(CALLF(mat_invert,0));	// 17954 call    mat_invert ;~ 0613:5106
cs=0x613;eip=0x00510b; 	T(ADD(sp, 4));	// 17955 add     sp, 4 ;~ 0613:510B
cs=0x613;eip=0x00510e; 	T(ax = bp+var_32);	// 17956 lea     ax, [bp+var_32] ;~ 0613:510E
cs=0x613;eip=0x005111; 	X(PUSH(ax));	// 17957 push    ax ;~ 0613:5111
cs=0x613;eip=0x005112; 	T(ax = bp+var_2c);	// 17958 lea     ax, [bp+var_2C] ;~ 0613:5112
cs=0x613;eip=0x005115; 	X(PUSH(ax));	// 17959 push    ax ;~ 0613:5115
cs=0x613;eip=0x005116; 	T(ax = bp+var_8);	// 17960 lea     ax, [bp+var_8] ;~ 0613:5116
cs=0x613;eip=0x005119; 	X(PUSH(ax));	// 17961 push    ax ;~ 0613:5119
cs=0x613;eip=0x00511a; 	R(CALLF(mat_mul_vector,0));	// 17962 call    mat_mul_vector ;~ 0613:511A
cs=0x613;eip=0x00511f; 	T(ADD(sp, 6));	// 17963 add     sp, 6 ;~ 0613:511F
cs=0x613;eip=0x005122; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 17964 push    [bp+var_2E] ;~ 0613:5122
cs=0x613;eip=0x005125; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_32))));	// 17965 mov     ax, [bp+var_32] ;~ 0613:5125
cs=0x613;eip=0x005128; 	T(NEG(ax));	// 17966 neg     ax ;~ 0613:5128
cs=0x613;eip=0x00512a; 	X(PUSH(ax));	// 17967 push    ax ;~ 0613:512A
cs=0x613;eip=0x00512b; 	R(CALLF(polarangle,0));	// 17968 call    polarAngle ;~ 0613:512B
cs=0x613;eip=0x005130; 	T(ADD(sp, 4));	// 17969 add     sp, 4 ;~ 0613:5130
cs=0x613;eip=0x005133; 	T(MOV(si, ax));	// 17970 mov     si, ax ;~ 0613:5133
loc_19845:
	// 5484 
cs=0x613;eip=0x005135; 	T(ADD(si, pstate_f36mminf40sar2));	// 17973 add     si, pState_f36Mminf40sar2 ;~ 0613:5135
cs=0x613;eip=0x005139; 	R(JZ(loc_198a4));	// 17974 jz      short loc_198A4 ;~ 0613:5139
cs=0x613;eip=0x00513b; 	T(CMP(word_3be16, si));	// 17975 cmp     word_3BE16, si ;~ 0613:513B
cs=0x613;eip=0x00513f; 	R(JZ(loc_19866));	// 17976 jz      short loc_19866 ;~ 0613:513F
cs=0x613;eip=0x005141; 	T(MOV(ax, si));	// 17977 mov     ax, si ;~ 0613:5141
cs=0x613;eip=0x005143; 	T(NEG(ax));	// 17978 neg     ax ;~ 0613:5143
cs=0x613;eip=0x005145; 	X(PUSH(ax));	// 17979 push    ax ;~ 0613:5145
cs=0x613;eip=0x005146; 	T(MOV(ax, offset(dseg,mat_planetmp)));	// 17980 mov     ax, offset mat_planetmp ;~ 0613:5146
cs=0x613;eip=0x005149; 	X(PUSH(ax));	// 17981 push    ax ;~ 0613:5149
cs=0x613;eip=0x00514a; 	R(CALLF(mat_rot_y,0));	// 17982 call    mat_rot_y ;~ 0613:514A
cs=0x613;eip=0x00514f; 	T(ADD(sp, 4));	// 17983 add     sp, 4 ;~ 0613:514F
cs=0x613;eip=0x005152; 	X(MOV(word_3be16, si));	// 17984 mov     word_3BE16, si ;~ 0613:5152
loc_19866:
	// 5485 
cs=0x613;eip=0x005156; 	T(ax = bp+var_32);	// 17987 lea     ax, [bp+var_32] ;~ 0613:5156
cs=0x613;eip=0x005159; 	X(PUSH(ax));	// 17988 push    ax ;~ 0613:5159
cs=0x613;eip=0x00515a; 	T(MOV(ax, offset(dseg,mat_planetmp)));	// 17989 mov     ax, offset mat_planetmp ;~ 0613:515A
cs=0x613;eip=0x00515d; 	X(PUSH(ax));	// 17990 push    ax ;~ 0613:515D
cs=0x613;eip=0x00515e; 	T(MOV(ax, offset(dseg,vec_unk2)));	// 17991 mov     ax, offset vec_unk2 ;~ 0613:515E
cs=0x613;eip=0x005161; 	X(PUSH(ax));	// 17992 push    ax ;~ 0613:5161
cs=0x613;eip=0x005162; 	R(CALLF(mat_mul_vector,0));	// 17993 call    mat_mul_vector ;~ 0613:5162
cs=0x613;eip=0x005167; 	T(ADD(sp, 6));	// 17994 add     sp, 6 ;~ 0613:5167
cs=0x613;eip=0x00516a; 	T(MOV(ax, offset(dseg,vec_planerotopresult)));	// 17995 mov     ax, offset vec_planerotopresult ;~ 0613:516A
cs=0x613;eip=0x00516d; 	X(PUSH(ax));	// 17996 push    ax ;~ 0613:516D
cs=0x613;eip=0x00516e; 	T(MOV(ax, 0x22));	// 17997 mov     ax, 22h ; '"' ;~ 0613:516E
cs=0x613;eip=0x005171; 	X(IMUL1_2(planindex_copy));	// 17998 imul    planindex_copy ;~ 0613:5171
cs=0x613;eip=0x005175; 	T(ADD(ax, planptr));	// 17999 add     ax, planptr ;~ 0613:5175
cs=0x613;eip=0x005179; 	T(MOV(dx, word_454c4));	// 18000 mov     dx, word_454C4 ;~ 0613:5179
cs=0x613;eip=0x00517d; 	T(ADD(ax, 0x10));	// 18001 add     ax, 10h         ; plane rotation matrix. ;~ 0613:517D
cs=0x613;eip=0x005180; 	X(PUSH(dx));	// 18002 push    dx ;~ 0613:5180
cs=0x613;eip=0x005181; 	X(PUSH(ax));	// 18003 push    ax ;~ 0613:5181
cs=0x613;eip=0x005182; 	T(ax = bp+var_32);	// 18004 lea     ax, [bp+var_32] ;~ 0613:5182
loc_19895:
	// 5486 
cs=0x613;eip=0x005185; 	X(PUSH(ax));	// 18007 push    ax ;~ 0613:5185
cs=0x613;eip=0x005186; 	X(PUSH(cs));	// 18008 push    cs ;~ 0613:5186
cs=0x613;eip=0x005187; 	R(CALL(mat_mul_vector2,0));	// 18009 call    near ptr mat_mul_vector2 ;~ 0613:5187
cs=0x613;eip=0x00518a; 	T(ADD(sp, 8));	// 18010 add     sp, 8 ;~ 0613:518A
cs=0x613;eip=0x00518d; 	X(POP(si));	// 18011 pop     si ;~ 0613:518D
cs=0x613;eip=0x00518e; 	X(POP(di));	// 18012 pop     di ;~ 0613:518E
cs=0x613;eip=0x00518f; 	T(MOV(sp, bp));	// 18013 mov     sp, bp ;~ 0613:518F
cs=0x613;eip=0x005191; 	X(POP(bp));	// 18014 pop     bp ;~ 0613:5191
cs=0x613;eip=0x005192; 	R(RETF(0));	// 18015 retf ;~ 0613:5192
loc_198a4:
	// 5487 
cs=0x613;eip=0x005194; 	T(MOV(ax, offset(dseg,vec_planerotopresult)));	// 18020 mov     ax, offset vec_planerotopresult ;~ 0613:5194
cs=0x613;eip=0x005197; 	X(PUSH(ax));	// 18021 push    ax ;~ 0613:5197
cs=0x613;eip=0x005198; 	T(MOV(ax, 0x22));	// 18022 mov     ax, 22h         ; sizeof plane ;~ 0613:5198
cs=0x613;eip=0x00519b; 	X(IMUL1_2(planindex_copy));	// 18023 imul    planindex_copy ;~ 0613:519B
cs=0x613;eip=0x00519f; 	T(ADD(ax, planptr));	// 18024 add     ax, planptr ;~ 0613:519F
cs=0x613;eip=0x0051a3; 	T(MOV(dx, word_454c4));	// 18025 mov     dx, word_454C4 ;~ 0613:51A3
cs=0x613;eip=0x0051a7; 	T(ADD(ax, 0x10));	// 18026 add     ax, 10h ;~ 0613:51A7
cs=0x613;eip=0x0051aa; 	X(PUSH(dx));	// 18027 push    dx ;~ 0613:51AA
cs=0x613;eip=0x0051ab; 	X(PUSH(ax));	// 18028 push    ax ;~ 0613:51AB
cs=0x613;eip=0x0051ac; 	T(MOV(ax, offset(dseg,vec_unk2)));	// 18029 mov     ax, offset vec_unk2 ;~ 0613:51AC
cs=0x613;eip=0x0051af; 	R(JMP(loc_19895));	// 18030 jmp     short loc_19895 ;~ 0613:51AF
loc_198c2:
	// 5488 
cs=0x613;eip=0x0051b2; 	T(CMP(pstate_f36mminf40sar2, 0));	// 18035 cmp     pState_f36Mminf40sar2, 0 ;~ 0613:51B2
cs=0x613;eip=0x0051b7; 	R(JZ(loc_1990c));	// 18036 jz      short loc_1990C ;~ 0613:51B7
cs=0x613;eip=0x0051b9; 	T(MOV(ax, f36f40_whldata));	// 18037 mov     ax, f36f40_whlData ;~ 0613:51B9
cs=0x613;eip=0x0051bc; 	T(CMP(pstate_f36mminf40sar2, ax));	// 18038 cmp     pState_f36Mminf40sar2, ax ;~ 0613:51BC
cs=0x613;eip=0x0051c0; 	R(JZ(loc_198ea));	// 18039 jz      short loc_198EA ;~ 0613:51C0
cs=0x613;eip=0x0051c2; 	T(MOV(ax, pstate_f36mminf40sar2));	// 18040 mov     ax, pState_f36Mminf40sar2 ;~ 0613:51C2
cs=0x613;eip=0x0051c5; 	T(NEG(ax));	// 18041 neg     ax ;~ 0613:51C5
cs=0x613;eip=0x0051c7; 	X(PUSH(ax));	// 18042 push    ax ;~ 0613:51C7
cs=0x613;eip=0x0051c8; 	T(MOV(ax, offset(dseg,mat_unk2)));	// 18043 mov     ax, offset mat_unk2 ;~ 0613:51C8
cs=0x613;eip=0x0051cb; 	X(PUSH(ax));	// 18044 push    ax ;~ 0613:51CB
cs=0x613;eip=0x0051cc; 	R(CALLF(mat_rot_y,0));	// 18045 call    mat_rot_y ;~ 0613:51CC
cs=0x613;eip=0x0051d1; 	T(ADD(sp, 4));	// 18046 add     sp, 4 ;~ 0613:51D1
cs=0x613;eip=0x0051d4; 	T(MOV(ax, pstate_f36mminf40sar2));	// 18047 mov     ax, pState_f36Mminf40sar2 ;~ 0613:51D4
cs=0x613;eip=0x0051d7; 	X(MOV(f36f40_whldata, ax));	// 18048 mov     f36f40_whlData, ax ;~ 0613:51D7
loc_198ea:
	// 5489 
cs=0x613;eip=0x0051da; 	T(ax = bp+var_32);	// 18051 lea     ax, [bp+var_32] ;~ 0613:51DA
cs=0x613;eip=0x0051dd; 	X(PUSH(ax));	// 18052 push    ax ;~ 0613:51DD
cs=0x613;eip=0x0051de; 	T(MOV(ax, offset(dseg,mat_unk2)));	// 18053 mov     ax, offset mat_unk2 ;~ 0613:51DE
cs=0x613;eip=0x0051e1; 	X(PUSH(ax));	// 18054 push    ax ;~ 0613:51E1
cs=0x613;eip=0x0051e2; 	T(MOV(ax, offset(dseg,vec_unk2)));	// 18055 mov     ax, offset vec_unk2 ;~ 0613:51E2
cs=0x613;eip=0x0051e5; 	X(PUSH(ax));	// 18056 push    ax ;~ 0613:51E5
cs=0x613;eip=0x0051e6; 	R(CALLF(mat_mul_vector,0));	// 18057 call    mat_mul_vector ;~ 0613:51E6
cs=0x613;eip=0x0051eb; 	T(ADD(sp, 6));	// 18058 add     sp, 6 ;~ 0613:51EB
cs=0x613;eip=0x0051ee; 	T(MOV(ax, offset(dseg,vec_planerotopresult)));	// 18059 mov     ax, offset vec_planerotopresult ;~ 0613:51EE
cs=0x613;eip=0x0051f1; 	X(PUSH(ax));	// 18060 push    ax ;~ 0613:51F1
cs=0x613;eip=0x0051f2; 	T(MOV(ax, offset(dseg,mat_unk)));	// 18061 mov     ax, offset mat_unk ;~ 0613:51F2
cs=0x613;eip=0x0051f5; 	X(PUSH(ax));	// 18062 push    ax ;~ 0613:51F5
cs=0x613;eip=0x0051f6; 	T(ax = bp+var_32);	// 18063 lea     ax, [bp+var_32] ;~ 0613:51F6
cs=0x613;eip=0x0051f9; 	R(JMP(loc_19917));	// 18064 jmp     short loc_19917 ;~ 0613:51F9
loc_1990c:
	// 5490 
cs=0x613;eip=0x0051fc; 	T(MOV(ax, offset(dseg,vec_planerotopresult)));	// 18069 mov     ax, offset vec_planerotopresult ;~ 0613:51FC
cs=0x613;eip=0x0051ff; 	X(PUSH(ax));	// 18070 push    ax ;~ 0613:51FF
cs=0x613;eip=0x005200; 	T(MOV(ax, offset(dseg,mat_unk)));	// 18071 mov     ax, offset mat_unk ;~ 0613:5200
cs=0x613;eip=0x005203; 	X(PUSH(ax));	// 18072 push    ax ;~ 0613:5203
cs=0x613;eip=0x005204; 	T(MOV(ax, offset(dseg,vec_unk2)));	// 18073 mov     ax, offset vec_unk2 ;~ 0613:5204
loc_19917:
	// 5491 
cs=0x613;eip=0x005207; 	X(PUSH(ax));	// 18076 push    ax ;~ 0613:5207
cs=0x613;eip=0x005208; 	R(CALLF(mat_mul_vector,0));	// 18077 call    mat_mul_vector ;~ 0613:5208
cs=0x613;eip=0x00520d; 	T(ADD(sp, 6));	// 18078 add     sp, 6 ;~ 0613:520D
cs=0x613;eip=0x005210; 	X(POP(si));	// 18079 pop     si ;~ 0613:5210
cs=0x613;eip=0x005211; 	X(POP(di));	// 18080 pop     di ;~ 0613:5211
cs=0x613;eip=0x005212; 	T(MOV(sp, bp));	// 18081 mov     sp, bp ;~ 0613:5212
cs=0x613;eip=0x005214; 	X(POP(bp));	// 18082 pop     bp ;~ 0613:5214
cs=0x613;eip=0x005215; 	R(RETF(0));	// 18083 retf ;~ 0613:5215
plane_origin_op:
	// 18091 
#undef var_10
#define var_10 -0x10
	// 18094 var_10          = word ptr -10h ;~ 0613:5216
#undef var_e
#define var_e -0x0E
	// 18095 var_E           = word ptr -0Eh ;~ 0613:5216
#undef var_c
#define var_c -0x0C
	// 18096 var_C           = word ptr -0Ch ;~ 0613:5216
#undef var_a
#define var_a -0x0A
	// 18097 var_A           = word ptr -0Ah ;~ 0613:5216
#undef var_8
#define var_8 -8
	// 18098 var_8           = word ptr -8 ;~ 0613:5216
#undef var_6
#define var_6 -6
	// 18099 var_6           = word ptr -6 ;~ 0613:5216
#undef var_4
#define var_4 -4
	// 18100 var_4           = dword ptr -4 ;~ 0613:5216
#undef arg_0
#define arg_0 6
	// 18101 arg_0           = word ptr  6 ;~ 0613:5216
#undef arg_2
#define arg_2 8
	// 18102 arg_2           = word ptr  8 ;~ 0613:5216
#undef arg_4
#define arg_4 0x0A
	// 18103 arg_4           = word ptr  0Ah ;~ 0613:5216
#undef arg_6
#define arg_6 0x0C
	// 18104 arg_6           = word ptr  0Ch ;~ 0613:5216
ret_613_5216:
	// 5492 
cs=0x613;eip=0x005216; 	X(PUSH(bp));	// 18106 push    bp ;~ 0613:5216
cs=0x613;eip=0x005217; 	T(MOV(bp, sp));	// 18107 mov     bp, sp ;~ 0613:5217
cs=0x613;eip=0x005219; 	T(SUB(sp, 0x10));	// 18108 sub     sp, 10h ;~ 0613:5219
cs=0x613;eip=0x00521c; 	T(MOV(ax, planindex));	// 18109 mov     ax, planindex ;~ 0613:521C
cs=0x613;eip=0x00521f; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 18110 cmp     [bp+arg_0], ax ;~ 0613:521F
cs=0x613;eip=0x005222; 	R(JNZ(loc_1993e));	// 18111 jnz     short loc_1993E ; sizeof PLANE ;~ 0613:5222
cs=0x613;eip=0x005224; 	T(MOV(ax, current_planptr));	// 18112 mov     ax, current_planptr ;~ 0613:5224
cs=0x613;eip=0x005227; 	T(MOV(dx, word_44d66));	// 18113 mov     dx, word_44D66 ;~ 0613:5227
cs=0x613;eip=0x00522b; 	R(JMP(loc_1994c));	// 18114 jmp     short loc_1994C ;~ 0613:522B
loc_1993e:
	// 5493 
cs=0x613;eip=0x00522e; 	T(MOV(ax, 0x22));	// 18119 mov     ax, 22h         ; sizeof PLANE ;~ 0613:522E
cs=0x613;eip=0x005231; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 18120 imul    [bp+arg_0] ;~ 0613:5231
cs=0x613;eip=0x005234; 	T(ADD(ax, planptr));	// 18121 add     ax, planptr ;~ 0613:5234
cs=0x613;eip=0x005238; 	T(MOV(dx, word_454c4));	// 18122 mov     dx, word_454C4 ;~ 0613:5238
loc_1994c:
	// 5494 
cs=0x613;eip=0x00523c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 18125 mov     word ptr [bp+var_4], ax ;~ 0613:523C
cs=0x613;eip=0x00523f; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 18126 mov     word ptr [bp+var_4+2], dx ;~ 0613:523F
cs=0x613;eip=0x005242; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 18127 les     bx, [bp+var_4] ;~ 0613:5242
cs=0x613;eip=0x005245; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 18128 mov     ax, es:[bx+6] ;~ 0613:5245
cs=0x613;eip=0x005249; 	T(ADD(ax, terrainheight));	// 18129 add     ax, terrainHeight ;~ 0613:5249
cs=0x613;eip=0x00524d; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 18130 mov     [bp+var_E], ax ;~ 0613:524D
cs=0x613;eip=0x005250; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 18131 mov     ax, [bp+arg_4] ;~ 0613:5250
cs=0x613;eip=0x005253; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_e))));	// 18132 sub     ax, [bp+var_E] ;~ 0613:5253
cs=0x613;eip=0x005256; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 18133 mov     [bp+var_8], ax  ; y ;~ 0613:5256
cs=0x613;eip=0x005259; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 4));	// 18134 cmp     [bp+arg_0], 4 ;~ 0613:5259
cs=0x613;eip=0x00525d; 	R(JL(loc_199ae));	// 18135 jl      short loc_199AE ;~ 0613:525D
cs=0x613;eip=0x00525f; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 18136 mov     ax, es:[bx+4] ;~ 0613:525F
cs=0x613;eip=0x005263; 	T(ADD(ax, elem_xcenter));	// 18137 add     ax, elem_xCenter ;~ 0613:5263
cs=0x613;eip=0x005267; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 18138 mov     [bp+var_10], ax ;~ 0613:5267
cs=0x613;eip=0x00526a; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 18139 mov     ax, es:[bx+8] ;~ 0613:526A
cs=0x613;eip=0x00526e; 	T(ADD(ax, elem_zcenter));	// 18140 add     ax, elem_zCenter ;~ 0613:526E
cs=0x613;eip=0x005272; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 18141 mov     [bp+var_C], ax ;~ 0613:5272
cs=0x613;eip=0x005275; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 18142 mov     ax, [bp+arg_2] ;~ 0613:5275
cs=0x613;eip=0x005278; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_10))));	// 18143 sub     ax, [bp+var_10] ;~ 0613:5278
cs=0x613;eip=0x00527b; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 18144 mov     [bp+var_A], ax  ; x ;~ 0613:527B
cs=0x613;eip=0x00527e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 18145 mov     ax, [bp+arg_6] ;~ 0613:527E
cs=0x613;eip=0x005281; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_c))));	// 18146 sub     ax, [bp+var_C] ;~ 0613:5281
cs=0x613;eip=0x005284; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 18147 mov     [bp+var_6], ax  ; z ;~ 0613:5284
cs=0x613;eip=0x005287; 	T(MOV(ax, bx));	// 18148 mov     ax, bx ;~ 0613:5287
cs=0x613;eip=0x005289; 	T(ADD(ax, 0x0A));	// 18149 add     ax, 0Ah ;~ 0613:5289
cs=0x613;eip=0x00528c; 	X(PUSH(dx));	// 18150 push    dx ;~ 0613:528C
cs=0x613;eip=0x00528d; 	X(PUSH(ax));	// 18151 push    ax ;~ 0613:528D
cs=0x613;eip=0x00528e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 18152 push    [bp+var_6] ;~ 0613:528E
cs=0x613;eip=0x005291; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 18153 push    [bp+var_8] ;~ 0613:5291
cs=0x613;eip=0x005294; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 18154 push    [bp+var_A] ;~ 0613:5294
cs=0x613;eip=0x005297; 	X(PUSH(cs));	// 18155 push    cs ;~ 0613:5297
cs=0x613;eip=0x005298; 	R(CALL(vec_normalinnerproduct,0));	// 18156 call    near ptr vec_normalInnerProduct ;~ 0613:5298
cs=0x613;eip=0x00529b; 	T(ADD(sp, 0x0A));	// 18157 add     sp, 0Ah ;~ 0613:529B
loc_199ae:
	// 5495 
cs=0x613;eip=0x00529e; 	T(MOV(sp, bp));	// 18160 mov     sp, bp ;~ 0613:529E
cs=0x613;eip=0x0052a0; 	X(POP(bp));	// 18161 pop     bp ;~ 0613:52A0
cs=0x613;eip=0x0052a1; 	R(RETF(0));	// 18162 retf ;~ 0613:52A1
vec_normalinnerproduct:
	// 18170 
#undef var_4
#define var_4 -4
	// 18172 var_4           = word ptr -4 ;~ 0613:52A2
#undef var_2
#define var_2 -2
	// 18173 var_2           = word ptr -2 ;~ 0613:52A2
#undef arg_0
#define arg_0 6
	// 18174 arg_0           = word ptr  6 ;~ 0613:52A2
#undef arg_2
#define arg_2 8
	// 18175 arg_2           = word ptr  8 ;~ 0613:52A2
#undef arg_4
#define arg_4 0x0A
	// 18176 arg_4           = word ptr  0Ah ;~ 0613:52A2
#undef arg_6
#define arg_6 0x0C
	// 18177 arg_6           = dword ptr  0Ch ;~ 0613:52A2
ret_613_52a2:
	// 5496 
cs=0x613;eip=0x0052a2; 	X(PUSH(bp));	// 18179 push    bp ;~ 0613:52A2
cs=0x613;eip=0x0052a3; 	T(MOV(bp, sp));	// 18180 mov     bp, sp ;~ 0613:52A3
cs=0x613;eip=0x0052a5; 	T(SUB(sp, 4));	// 18181 sub     sp, 4 ;~ 0613:52A5
cs=0x613;eip=0x0052a8; 	X(PUSH(di));	// 18182 push    di ;~ 0613:52A8
cs=0x613;eip=0x0052a9; 	X(PUSH(si));	// 18183 push    si ;~ 0613:52A9
cs=0x613;eip=0x0052aa; 	T(MOV(ax, 0x2000));	// 18184 mov     ax, 2000h       ; length of normal vector => normalization ;~ 0613:52AA
cs=0x613;eip=0x0052ad; 	T(CWD);	// 18185 cwd ;~ 0613:52AD
cs=0x613;eip=0x0052ae; 	X(PUSH(dx));	// 18186 push    dx ;~ 0613:52AE
cs=0x613;eip=0x0052af; 	X(PUSH(ax));	// 18187 push    ax ;~ 0613:52AF
cs=0x613;eip=0x0052b0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 18188 mov     ax, [bp+arg_0] ;~ 0613:52B0
cs=0x613;eip=0x0052b3; 	T(CWD);	// 18189 cwd ;~ 0613:52B3
cs=0x613;eip=0x0052b4; 	X(PUSH(dx));	// 18190 push    dx ;~ 0613:52B4
cs=0x613;eip=0x0052b5; 	X(PUSH(ax));	// 18191 push    ax ;~ 0613:52B5
cs=0x613;eip=0x0052b6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 18192 les     bx, [bp+arg_6] ;~ 0613:52B6
cs=0x613;eip=0x0052b9; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 18193 mov     ax, es:[bx] ;~ 0613:52B9
cs=0x613;eip=0x0052bc; 	T(CWD);	// 18194 cwd ;~ 0613:52BC
cs=0x613;eip=0x0052bd; 	X(PUSH(dx));	// 18195 push    dx ;~ 0613:52BD
cs=0x613;eip=0x0052be; 	X(PUSH(ax));	// 18196 push    ax ;~ 0613:52BE
cs=0x613;eip=0x0052bf; 	R(CALLF(__aflmul,0));	// 18197 call    __aFlmul ;~ 0613:52BF
cs=0x613;eip=0x0052c4; 	T(MOV(cx, ax));	// 18198 mov     cx, ax ;~ 0613:52C4
cs=0x613;eip=0x0052c6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 18199 mov     ax, [bp+arg_4] ;~ 0613:52C6
cs=0x613;eip=0x0052c9; 	T(MOV(bx, dx));	// 18200 mov     bx, dx ;~ 0613:52C9
cs=0x613;eip=0x0052cb; 	T(CWD);	// 18201 cwd ;~ 0613:52CB
cs=0x613;eip=0x0052cc; 	X(PUSH(dx));	// 18202 push    dx ;~ 0613:52CC
cs=0x613;eip=0x0052cd; 	X(PUSH(ax));	// 18203 push    ax ;~ 0613:52CD
cs=0x613;eip=0x0052ce; 	T(LES(si, *(dd*)(raddr(ss,bp+arg_6))));	// 18204 les     si, [bp+arg_6] ;~ 0613:52CE
cs=0x613;eip=0x0052d1; 	T(MOV(ax, *(dw*)(raddr(es,si+4))));	// 18205 mov     ax, es:[si+4] ;~ 0613:52D1
cs=0x613;eip=0x0052d5; 	T(CWD);	// 18206 cwd ;~ 0613:52D5
cs=0x613;eip=0x0052d6; 	X(PUSH(dx));	// 18207 push    dx ;~ 0613:52D6
cs=0x613;eip=0x0052d7; 	X(PUSH(ax));	// 18208 push    ax ;~ 0613:52D7
cs=0x613;eip=0x0052d8; 	T(MOV(si, cx));	// 18209 mov     si, cx ;~ 0613:52D8
cs=0x613;eip=0x0052da; 	T(MOV(di, bx));	// 18210 mov     di, bx ;~ 0613:52DA
cs=0x613;eip=0x0052dc; 	R(CALLF(__aflmul,0));	// 18211 call    __aFlmul ;~ 0613:52DC
cs=0x613;eip=0x0052e1; 	T(MOV(cx, ax));	// 18212 mov     cx, ax ;~ 0613:52E1
cs=0x613;eip=0x0052e3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 18213 mov     ax, [bp+arg_2] ;~ 0613:52E3
cs=0x613;eip=0x0052e6; 	T(MOV(bx, dx));	// 18214 mov     bx, dx ;~ 0613:52E6
cs=0x613;eip=0x0052e8; 	T(CWD);	// 18215 cwd ;~ 0613:52E8
cs=0x613;eip=0x0052e9; 	X(PUSH(dx));	// 18216 push    dx ;~ 0613:52E9
cs=0x613;eip=0x0052ea; 	X(PUSH(ax));	// 18217 push    ax ;~ 0613:52EA
cs=0x613;eip=0x0052eb; 	T(MOV(ax, bx));	// 18218 mov     ax, bx ;~ 0613:52EB
cs=0x613;eip=0x0052ed; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 18219 les     bx, [bp+arg_6] ;~ 0613:52ED
cs=0x613;eip=0x0052f0; 	T(MOV(dx, ax));	// 18220 mov     dx, ax ;~ 0613:52F0
cs=0x613;eip=0x0052f2; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 18221 mov     ax, es:[bx+2] ;~ 0613:52F2
cs=0x613;eip=0x0052f6; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), cx));	// 18222 mov     [bp+var_4], cx  ; 1st multiplication lo-byte ;~ 0613:52F6
cs=0x613;eip=0x0052f9; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 18223 mov     [bp+var_2], dx  ; 1st multiplication hi-byte ;~ 0613:52F9
cs=0x613;eip=0x0052fc; 	T(CWD);	// 18224 cwd ;~ 0613:52FC
cs=0x613;eip=0x0052fd; 	X(PUSH(dx));	// 18225 push    dx ;~ 0613:52FD
cs=0x613;eip=0x0052fe; 	X(PUSH(ax));	// 18226 push    ax ;~ 0613:52FE
cs=0x613;eip=0x0052ff; 	R(CALLF(__aflmul,0));	// 18227 call    __aFlmul ;~ 0613:52FF
cs=0x613;eip=0x005304; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 18228 add     ax, [bp+var_4] ;~ 0613:5304
cs=0x613;eip=0x005307; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_2))));	// 18229 adc     dx, [bp+var_2] ;~ 0613:5307
cs=0x613;eip=0x00530a; 	T(ADD(ax, si));	// 18230 add     ax, si ;~ 0613:530A
cs=0x613;eip=0x00530c; 	T(ADC(dx, di));	// 18231 adc     dx, di ;~ 0613:530C
cs=0x613;eip=0x00530e; 	X(PUSH(dx));	// 18232 push    dx ;~ 0613:530E
cs=0x613;eip=0x00530f; 	X(PUSH(ax));	// 18233 push    ax ;~ 0613:530F
cs=0x613;eip=0x005310; 	R(CALLF(__afldiv,0));	// 18234 call    __aFldiv        ; /2000h ;~ 0613:5310
cs=0x613;eip=0x005315; 	X(POP(si));	// 18235 pop     si ;~ 0613:5315
cs=0x613;eip=0x005316; 	X(POP(di));	// 18236 pop     di ;~ 0613:5316
cs=0x613;eip=0x005317; 	T(MOV(sp, bp));	// 18237 mov     sp, bp ;~ 0613:5317
cs=0x613;eip=0x005319; 	X(POP(bp));	// 18238 pop     bp ;~ 0613:5319
cs=0x613;eip=0x00531a; 	R(RETF(0));	// 18239 retf ;~ 0613:531A
state_op_unk:
	// 18249 
#undef var_18
#define var_18 -0x18
	// 18252 var_18          = word ptr -18h ;~ 0613:531C
#undef var_16
#define var_16 -0x16
	// 18253 var_16          = word ptr -16h ;~ 0613:531C
#undef var_14
#define var_14 -0x14
	// 18254 var_14          = word ptr -14h ;~ 0613:531C
#undef var_12
#define var_12 -0x12
	// 18255 var_12          = word ptr -12h ;~ 0613:531C
#undef var_10
#define var_10 -0x10
	// 18256 var_10          = word ptr -10h ;~ 0613:531C
#undef var_e
#define var_e -0x0E
	// 18257 var_E           = word ptr -0Eh ;~ 0613:531C
#undef var_c
#define var_c -0x0C
	// 18258 var_C           = word ptr -0Ch ;~ 0613:531C
#undef var_8
#define var_8 -8
	// 18259 var_8           = word ptr -8 ;~ 0613:531C
#undef var_6
#define var_6 -6
	// 18260 var_6           = word ptr -6 ;~ 0613:531C
#undef var_2
#define var_2 -2
	// 18261 var_2           = word ptr -2 ;~ 0613:531C
#undef arg_0
#define arg_0 6
	// 18262 arg_0           = word ptr  6 ;~ 0613:531C
#undef arg_2
#define arg_2 8
	// 18263 arg_2           = word ptr  8 ;~ 0613:531C
#undef arg_4
#define arg_4 0x0A
	// 18264 arg_4           = word ptr  0Ah ;~ 0613:531C
ret_613_531c:
	// 5497 
cs=0x613;eip=0x00531c; 	X(PUSH(bp));	// 18266 push    bp ;~ 0613:531C
cs=0x613;eip=0x00531d; 	T(MOV(bp, sp));	// 18267 mov     bp, sp ;~ 0613:531D
cs=0x613;eip=0x00531f; 	T(SUB(sp, 0x18));	// 18268 sub     sp, 18h ;~ 0613:531F
cs=0x613;eip=0x005322; 	X(PUSH(di));	// 18269 push    di ;~ 0613:5322
cs=0x613;eip=0x005323; 	X(PUSH(si));	// 18270 push    si ;~ 0613:5323
cs=0x613;eip=0x005324; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 2));	// 18271 cmp     [bp+arg_0], 2 ;~ 0613:5324
cs=0x613;eip=0x005328; 	R(JGE(loc_19a5e));	// 18272 jge     short loc_19A5E ;~ 0613:5328
cs=0x613;eip=0x00532a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 18273 mov     ax, [bp+arg_2] ;~ 0613:532A
cs=0x613;eip=0x00532d; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 18274 mov     [bp+var_6], ax ;~ 0613:532D
cs=0x613;eip=0x005330; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x400));	// 18275 mov     [bp+var_2], 400h ;~ 0613:5330
cs=0x613;eip=0x005335; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0x12));	// 18276 mov     [bp+var_E], 12h ;~ 0613:5335
cs=0x613;eip=0x00533a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 18277 mov     ax, [bp+arg_0] ;~ 0613:533A
cs=0x613;eip=0x00533d; 	T(SHL(ax, 1));	// 18278 shl     ax, 1 ;~ 0613:533D
cs=0x613;eip=0x00533f; 	T(SHL(ax, 1));	// 18279 shl     ax, 1 ;~ 0613:533F
cs=0x613;eip=0x005341; 	T(ADD(ax, 4));	// 18280 add     ax, 4 ;~ 0613:5341
cs=0x613;eip=0x005344; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 18281 mov     [bp+var_10], ax ;~ 0613:5344
cs=0x613;eip=0x005347; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 6));	// 18282 mov     [bp+var_8], 6 ;~ 0613:5347
cs=0x613;eip=0x00534c; 	R(JMP(loc_19a7b));	// 18283 jmp     short loc_19A7B ;~ 0613:534C
loc_19a5e:
	// 5498 
cs=0x613;eip=0x00534e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 18287 mov     ax, [bp+arg_2] ;~ 0613:534E
cs=0x613;eip=0x005351; 	T(SUB(ax, 0x60));	// 18288 sub     ax, 60h ; '`' ;~ 0613:5351
cs=0x613;eip=0x005354; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 18289 mov     [bp+var_6], ax ;~ 0613:5354
cs=0x613;eip=0x005357; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0C0));	// 18290 mov     [bp+var_2], 0C0h ; 'À' ;~ 0613:5357
cs=0x613;eip=0x00535c; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 8));	// 18291 mov     [bp+var_E], 8 ;~ 0613:535C
cs=0x613;eip=0x005361; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0));	// 18292 mov     [bp+var_10], 0 ;~ 0613:5361
cs=0x613;eip=0x005366; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 1));	// 18293 mov     [bp+var_8], 1 ;~ 0613:5366
loc_19a7b:
	// 5499 
cs=0x613;eip=0x00536b; 	X(MOV(byte_448be, 1));	// 18296 mov     byte_448BE, 1 ;~ 0613:536B
cs=0x613;eip=0x005370; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 0));	// 18297 mov     [bp+var_12], 0 ;~ 0613:5370
cs=0x613;eip=0x005375; 	T(SUB(si, si));	// 18298 sub     si, si ;~ 0613:5375
loc_19a87:
	// 5500 
cs=0x613;eip=0x005377; 	T(MOV(bx, si));	// 18301 mov     bx, si ;~ 0613:5377
cs=0x613;eip=0x005379; 	T(SHL(bx, 1));	// 18302 shl     bx, 1 ;~ 0613:5379
cs=0x613;eip=0x00537b; 	T(CMP(*(dw*)(((db*)&word_44822)+bx), 0));	// 18303 cmp     word_44822[bx], 0 ;~ 0613:537B
cs=0x613;eip=0x005380; 	R(JNZ(loc_19a95));	// 18304 jnz     short loc_19A95 ;~ 0613:5380
cs=0x613;eip=0x005382; 	X(INC(*(dw*)(raddr(ss,bp+var_12))));	// 18305 inc     [bp+var_12] ;~ 0613:5382
loc_19a95:
	// 5501 
cs=0x613;eip=0x005385; 	T(INC(si));	// 18308 inc     si ;~ 0613:5385
cs=0x613;eip=0x005386; 	T(CMP(si, 0x18));	// 18309 cmp     si, 18h ;~ 0613:5386
cs=0x613;eip=0x005389; 	R(JL(loc_19a87));	// 18310 jl      short loc_19A87 ;~ 0613:5389
cs=0x613;eip=0x00538b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 18311 mov     ax, [bp+var_E] ;~ 0613:538B
cs=0x613;eip=0x00538e; 	T(CMP(*(dw*)(raddr(ss,bp+var_12)), ax));	// 18312 cmp     [bp+var_12], ax ;~ 0613:538E
cs=0x613;eip=0x005391; 	R(JLE(loc_19aa6));	// 18313 jle     short loc_19AA6 ;~ 0613:5391
cs=0x613;eip=0x005393; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 18314 mov     [bp+var_12], ax ;~ 0613:5393
loc_19aa6:
	// 5502 
cs=0x613;eip=0x005396; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0));	// 18317 mov     [bp+var_C], 0 ;~ 0613:5396
cs=0x613;eip=0x00539b; 	T(SUB(si, si));	// 18318 sub     si, si ;~ 0613:539B
cs=0x613;eip=0x00539d; 	R(JMP(loc_19ab1));	// 18319 jmp     short loc_19AB1 ;~ 0613:539D
loc_19ab0:
	// 5503 
cs=0x613;eip=0x0053a0; 	T(INC(si));	// 18325 inc     si ;~ 0613:53A0
loc_19ab1:
	// 5504 
cs=0x613;eip=0x0053a1; 	T(CMP(si, 0x18));	// 18328 cmp     si, 18h ;~ 0613:53A1
cs=0x613;eip=0x0053a4; 	R(JL(loc_19ab9));	// 18329 jl      short loc_19AB9 ;~ 0613:53A4
cs=0x613;eip=0x0053a6; 	R(JMP(loc_19b99));	// 18330 jmp     loc_19B99 ;~ 0613:53A6
loc_19ab9:
	// 5505 
cs=0x613;eip=0x0053a9; 	T(MOV(ax, si));	// 18334 mov     ax, si ;~ 0613:53A9
cs=0x613;eip=0x0053ab; 	T(SHL(ax, 1));	// 18335 shl     ax, 1 ;~ 0613:53AB
cs=0x613;eip=0x0053ad; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 18336 mov     [bp+var_14], ax ;~ 0613:53AD
cs=0x613;eip=0x0053b0; 	T(MOV(bx, ax));	// 18337 mov     bx, ax ;~ 0613:53B0
cs=0x613;eip=0x0053b2; 	T(CMP(*(dw*)(((db*)&word_44822)+bx), 0));	// 18338 cmp     word_44822[bx], 0 ;~ 0613:53B2
cs=0x613;eip=0x0053b7; 	R(JNZ(loc_19ab0));	// 18339 jnz     short loc_19AB0 ;~ 0613:53B7
cs=0x613;eip=0x0053b9; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0))));	// 18340 mov     al, byte ptr [bp+arg_0] ;~ 0613:53B9
cs=0x613;eip=0x0053bc; 	X(MOV(*((&byte_448d7)+si), al));	// 18341 mov     byte_448D7[si], al ;~ 0613:53BC
cs=0x613;eip=0x0053c0; 	T(MOV(al, *(db*)(raddr(ss,bp+var_c))));	// 18342 mov     al, byte ptr [bp+var_C] ;~ 0613:53C0
cs=0x613;eip=0x0053c3; 	T(AND(al, 3));	// 18343 and     al, 3 ;~ 0613:53C3
cs=0x613;eip=0x0053c5; 	T(ADD(al, *(db*)(raddr(ss,bp+var_10))));	// 18344 add     al, byte ptr [bp+var_10] ;~ 0613:53C5
cs=0x613;eip=0x0053c8; 	X(MOV(*((&byte_448bf)+si), al));	// 18345 mov     byte_448BF[si], al ;~ 0613:53C8
cs=0x613;eip=0x0053cc; 	T(MOV(ax, si));	// 18346 mov     ax, si ;~ 0613:53CC
cs=0x613;eip=0x0053ce; 	T(SHL(ax, 1));	// 18347 shl     ax, 1 ;~ 0613:53CE
cs=0x613;eip=0x0053d0; 	T(SHL(ax, 1));	// 18348 shl     ax, 1 ;~ 0613:53D0
cs=0x613;eip=0x0053d2; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 18349 mov     [bp+var_16], ax ;~ 0613:53D2
cs=0x613;eip=0x0053d5; 	T(MOV(bx, ax));	// 18350 mov     bx, ax ;~ 0613:53D5
cs=0x613;eip=0x0053d7; 	T(SUB(ax, ax));	// 18351 sub     ax, ax ;~ 0613:53D7
cs=0x613;eip=0x0053d9; 	X(MOV(*(dw*)(((db*)&word_44496)+bx), ax));	// 18352 mov     word_44496[bx], ax ;~ 0613:53D9
cs=0x613;eip=0x0053dd; 	X(MOV(*(dw*)(((db*)&state)+bx), ax));	// 18353 mov     state[bx], ax ;~ 0613:53DD
cs=0x613;eip=0x0053e1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 18354 mov     bx, [bp+var_16] ;~ 0613:53E1
cs=0x613;eip=0x0053e4; 	X(MOV(*(dw*)(((db*)&word_444f6)+bx), ax));	// 18355 mov     word_444F6[bx], ax ;~ 0613:53E4
cs=0x613;eip=0x0053e8; 	X(MOV(*(dw*)(((db*)&word_444f4)+bx), ax));	// 18356 mov     word_444F4[bx], ax ;~ 0613:53E8
cs=0x613;eip=0x0053ec; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 18357 mov     bx, [bp+var_16] ;~ 0613:53EC
cs=0x613;eip=0x0053ef; 	X(MOV(*(dw*)(((db*)&word_44556)+bx), ax));	// 18358 mov     word_44556[bx], ax ;~ 0613:53EF
cs=0x613;eip=0x0053f3; 	X(MOV(*(dw*)(((db*)&word_44554)+bx), ax));	// 18359 mov     word_44554[bx], ax ;~ 0613:53F3
cs=0x613;eip=0x0053f7; 	R(CALLF(get_kevinrandom,0));	// 18360 call    get_kevinrandom ;~ 0613:53F7
cs=0x613;eip=0x0053fc; 	T(SHL(ax, 1));	// 18361 shl     ax, 1 ;~ 0613:53FC
cs=0x613;eip=0x0053fe; 	T(SHL(ax, 1));	// 18362 shl     ax, 1 ;~ 0613:53FE
cs=0x613;eip=0x005400; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_14))));	// 18363 mov     bx, [bp+var_14] ;~ 0613:5400
cs=0x613;eip=0x005403; 	X(MOV(*(dw*)(((db*)&word_44792)+bx), ax));	// 18364 mov     word_44792[bx], ax ;~ 0613:5403
cs=0x613;eip=0x005407; 	R(CALLF(get_kevinrandom,0));	// 18365 call    get_kevinrandom ;~ 0613:5407
cs=0x613;eip=0x00540c; 	T(SHL(ax, 1));	// 18366 shl     ax, 1 ;~ 0613:540C
cs=0x613;eip=0x00540e; 	T(SHL(ax, 1));	// 18367 shl     ax, 1 ;~ 0613:540E
cs=0x613;eip=0x005410; 	T(MOV(bx, si));	// 18368 mov     bx, si ;~ 0613:5410
cs=0x613;eip=0x005412; 	T(SHL(bx, 1));	// 18369 shl     bx, 1 ;~ 0613:5412
cs=0x613;eip=0x005414; 	X(MOV(*(dw*)(((db*)&word_447c2)+bx), ax));	// 18370 mov     word_447C2[bx], ax ;~ 0613:5414
cs=0x613;eip=0x005418; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 18371 mov     ax, [bp+var_12] ;~ 0613:5418
cs=0x613;eip=0x00541b; 	T(CWD);	// 18372 cwd ;~ 0613:541B
cs=0x613;eip=0x00541c; 	X(PUSH(dx));	// 18373 push    dx ;~ 0613:541C
cs=0x613;eip=0x00541d; 	X(PUSH(ax));	// 18374 push    ax ;~ 0613:541D
cs=0x613;eip=0x00541e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 18375 mov     ax, [bp+var_C] ;~ 0613:541E
cs=0x613;eip=0x005421; 	T(CWD);	// 18376 cwd ;~ 0613:5421
cs=0x613;eip=0x005422; 	X(PUSH(dx));	// 18377 push    dx ;~ 0613:5422
cs=0x613;eip=0x005423; 	X(PUSH(ax));	// 18378 push    ax ;~ 0613:5423
cs=0x613;eip=0x005424; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 18379 mov     ax, [bp+var_2] ;~ 0613:5424
cs=0x613;eip=0x005427; 	T(CWD);	// 18380 cwd ;~ 0613:5427
cs=0x613;eip=0x005428; 	X(PUSH(dx));	// 18381 push    dx ;~ 0613:5428
cs=0x613;eip=0x005429; 	X(PUSH(ax));	// 18382 push    ax ;~ 0613:5429
cs=0x613;eip=0x00542a; 	R(CALLF(__aflmul,0));	// 18383 call    __aFlmul ;~ 0613:542A
cs=0x613;eip=0x00542f; 	X(PUSH(dx));	// 18384 push    dx ;~ 0613:542F
cs=0x613;eip=0x005430; 	X(PUSH(ax));	// 18385 push    ax ;~ 0613:5430
cs=0x613;eip=0x005431; 	R(CALLF(__afldiv,0));	// 18386 call    __aFldiv ;~ 0613:5431
cs=0x613;eip=0x005436; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_6))));	// 18387 add     ax, [bp+var_6] ;~ 0613:5436
cs=0x613;eip=0x005439; 	T(AND(ah, 3));	// 18388 and     ah, 3 ;~ 0613:5439
cs=0x613;eip=0x00543c; 	T(MOV(bx, si));	// 18389 mov     bx, si ;~ 0613:543C
cs=0x613;eip=0x00543e; 	T(SHL(bx, 1));	// 18390 shl     bx, 1 ;~ 0613:543E
cs=0x613;eip=0x005440; 	X(MOV(*(dw*)(((db*)&word_447f2)+bx), ax));	// 18391 mov     word_447F2[bx], ax ;~ 0613:5440
cs=0x613;eip=0x005444; 	R(CALLF(get_kevinrandom,0));	// 18392 call    get_kevinrandom ;~ 0613:5444
cs=0x613;eip=0x005449; 	T(MOV(cx, ax));	// 18393 mov     cx, ax ;~ 0613:5449
cs=0x613;eip=0x00544b; 	T(SHL(ax, 1));	// 18394 shl     ax, 1 ;~ 0613:544B
cs=0x613;eip=0x00544d; 	T(ADD(ax, cx));	// 18395 add     ax, cx ;~ 0613:544D
cs=0x613;eip=0x00544f; 	T(SHL(ax, 1));	// 18396 shl     ax, 1 ;~ 0613:544F
cs=0x613;eip=0x005451; 	T(MOV(di, ax));	// 18397 mov     di, ax ;~ 0613:5451
cs=0x613;eip=0x005453; 	T(MOV(cl, 2));	// 18398 mov     cl, 2 ;~ 0613:5453
cs=0x613;eip=0x005455; 	T(SAR(di, cl));	// 18399 sar     di, cl ;~ 0613:5455
cs=0x613;eip=0x005457; 	T(ADD(di, *(dw*)(raddr(ss,bp+arg_4))));	// 18400 add     di, [bp+arg_4] ;~ 0613:5457
cs=0x613;eip=0x00545a; 	T(ADD(di, 0x180));	// 18401 add     di, 180h ;~ 0613:545A
cs=0x613;eip=0x00545e; 	T(MOV(ax, si));	// 18402 mov     ax, si ;~ 0613:545E
cs=0x613;eip=0x005460; 	T(SHL(ax, 1));	// 18403 shl     ax, 1 ;~ 0613:5460
cs=0x613;eip=0x005462; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 18404 mov     [bp+var_18], ax ;~ 0613:5462
cs=0x613;eip=0x005465; 	T(MOV(bx, ax));	// 18405 mov     bx, ax ;~ 0613:5465
cs=0x613;eip=0x005467; 	X(MOV(*(dw*)(((db*)&word_44822)+bx), di));	// 18406 mov     word_44822[bx], di ;~ 0613:5467
cs=0x613;eip=0x00546b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 18407 mov     ax, [bp+var_8] ;~ 0613:546B
cs=0x613;eip=0x00546e; 	T(IMUL1_2(di));	// 18408 imul    di ;~ 0613:546E
cs=0x613;eip=0x005470; 	T(SAR(ax, 1));	// 18409 sar     ax, 1 ;~ 0613:5470
cs=0x613;eip=0x005472; 	T(SAR(ax, 1));	// 18410 sar     ax, 1 ;~ 0613:5472
cs=0x613;eip=0x005474; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_18))));	// 18411 mov     bx, [bp+var_18] ;~ 0613:5474
cs=0x613;eip=0x005477; 	X(MOV(*(dw*)(((db*)&word_44852)+bx), ax));	// 18412 mov     word_44852[bx], ax ;~ 0613:5477
cs=0x613;eip=0x00547b; 	X(INC(*(dw*)(raddr(ss,bp+var_c))));	// 18413 inc     [bp+var_C] ;~ 0613:547B
cs=0x613;eip=0x00547e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 18414 mov     ax, [bp+var_12] ;~ 0613:547E
cs=0x613;eip=0x005481; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), ax));	// 18415 cmp     [bp+var_C], ax ;~ 0613:5481
cs=0x613;eip=0x005484; 	R(JZ(loc_19b99));	// 18416 jz      short loc_19B99 ;~ 0613:5484
cs=0x613;eip=0x005486; 	R(JMP(loc_19ab0));	// 18417 jmp     loc_19AB0 ;~ 0613:5486
loc_19b99:
	// 5506 
cs=0x613;eip=0x005489; 	X(POP(si));	// 18422 pop     si ;~ 0613:5489
cs=0x613;eip=0x00548a; 	X(POP(di));	// 18423 pop     di ;~ 0613:548A
cs=0x613;eip=0x00548b; 	T(MOV(sp, bp));	// 18424 mov     sp, bp ;~ 0613:548B
cs=0x613;eip=0x00548d; 	X(POP(bp));	// 18425 pop     bp ;~ 0613:548D
cs=0x613;eip=0x00548e; 	R(RETF(0));	// 18426 retf ;~ 0613:548E
sub_19ba0:
	// 18436 
#undef var_14
#define var_14 -0x14
	// 18438 var_14          = word ptr -14h ;~ 0613:5490
#undef var_12
#define var_12 -0x12
	// 18439 var_12          = word ptr -12h ;~ 0613:5490
#undef var_e
#define var_e -0x0E
	// 18440 var_E           = word ptr -0Eh ;~ 0613:5490
#undef var_c
#define var_c -0x0C
	// 18441 var_C           = word ptr -0Ch ;~ 0613:5490
#undef var_a
#define var_a -0x0A
	// 18442 var_A           = word ptr -0Ah ;~ 0613:5490
#undef var_8
#define var_8 -8
	// 18443 var_8           = word ptr -8 ;~ 0613:5490
#undef var_4
#define var_4 -4
	// 18444 var_4           = word ptr -4 ;~ 0613:5490
#undef var_2
#define var_2 -2
	// 18445 var_2           = byte ptr -2 ;~ 0613:5490
ret_613_5490:
	// 5507 
cs=0x613;eip=0x005490; 	X(PUSH(bp));	// 18447 push    bp ;~ 0613:5490
cs=0x613;eip=0x005491; 	T(MOV(bp, sp));	// 18448 mov     bp, sp ;~ 0613:5491
cs=0x613;eip=0x005493; 	T(SUB(sp, 0x14));	// 18449 sub     sp, 14h ;~ 0613:5493
cs=0x613;eip=0x005496; 	X(PUSH(di));	// 18450 push    di ;~ 0613:5496
cs=0x613;eip=0x005497; 	X(PUSH(si));	// 18451 push    si ;~ 0613:5497
cs=0x613;eip=0x005498; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 18452 mov     [bp+var_2], 0 ;~ 0613:5498
cs=0x613;eip=0x00549c; 	T(SUB(si, si));	// 18453 sub     si, si ;~ 0613:549C
cs=0x613;eip=0x00549e; 	R(JMP(loc_19bc3));	// 18454 jmp     short loc_19BC3 ;~ 0613:549E
loc_19bb0:
	// 5508 
cs=0x613;eip=0x0054a0; 	X(MOV(*(raddr(ss,bp+var_2)), 1));	// 18458 mov     [bp+var_2], 1 ;~ 0613:54A0
cs=0x613;eip=0x0054a4; 	T(MOV(di, si));	// 18459 mov     di, si ;~ 0613:54A4
cs=0x613;eip=0x0054a6; 	T(SHL(di, 1));	// 18460 shl     di, 1 ;~ 0613:54A6
cs=0x613;eip=0x0054a8; 	X(ADD(*(dw*)(((db*)&word_44792)+di), 0x10));	// 18461 add     word_44792[di], 10h ;~ 0613:54A8
cs=0x613;eip=0x0054ad; 	X(ADD(*(dw*)(((db*)&word_447c2)+di), 0x10));	// 18462 add     word_447C2[di], 10h ;~ 0613:54AD
loc_19bc2:
	// 5509 
cs=0x613;eip=0x0054b2; 	T(INC(si));	// 18466 inc     si ;~ 0613:54B2
loc_19bc3:
	// 5510 
cs=0x613;eip=0x0054b3; 	T(CMP(si, 0x18));	// 18469 cmp     si, 18h ;~ 0613:54B3
cs=0x613;eip=0x0054b6; 	R(JL(loc_19bcb));	// 18470 jl      short loc_19BCB ;~ 0613:54B6
cs=0x613;eip=0x0054b8; 	R(JMP(loc_19c96));	// 18471 jmp     loc_19C96 ;~ 0613:54B8
loc_19bcb:
	// 5511 
cs=0x613;eip=0x0054bb; 	T(MOV(di, si));	// 18475 mov     di, si ;~ 0613:54BB
cs=0x613;eip=0x0054bd; 	T(SHL(di, 1));	// 18476 shl     di, 1 ;~ 0613:54BD
cs=0x613;eip=0x0054bf; 	T(CMP(*(dw*)(((db*)&word_44822)+di), 0));	// 18477 cmp     word_44822[di], 0 ;~ 0613:54BF
cs=0x613;eip=0x0054c4; 	R(JZ(loc_19bc2));	// 18478 jz      short loc_19BC2 ;~ 0613:54C4
cs=0x613;eip=0x0054c6; 	T(MOV(ax, 1));	// 18479 mov     ax, 1 ;~ 0613:54C6
cs=0x613;eip=0x0054c9; 	X(PUSH(ax));	// 18480 push    ax ;~ 0613:54C9
cs=0x613;eip=0x0054ca; 	X(PUSH(*(dw*)(((db*)&word_447f2)+di)));	// 18481 push    word_447F2[di] ;~ 0613:54CA
cs=0x613;eip=0x0054ce; 	T(SUB(ax, ax));	// 18482 sub     ax, ax ;~ 0613:54CE
cs=0x613;eip=0x0054d0; 	X(PUSH(ax));	// 18483 push    ax ;~ 0613:54D0
cs=0x613;eip=0x0054d1; 	X(PUSH(ax));	// 18484 push    ax ;~ 0613:54D1
cs=0x613;eip=0x0054d2; 	R(CALLF(mat_rot_zxy,0));	// 18485 call    mat_rot_zxy ;~ 0613:54D2
cs=0x613;eip=0x0054d7; 	T(ADD(sp, 8));	// 18486 add     sp, 8 ;~ 0613:54D7
cs=0x613;eip=0x0054da; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 18487 mov     [bp+var_4], ax ;~ 0613:54DA
cs=0x613;eip=0x0054dd; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0));	// 18488 mov     [bp+var_C], 0 ;~ 0613:54DD
cs=0x613;eip=0x0054e2; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 18489 mov     [bp+var_A], 0 ;~ 0613:54E2
cs=0x613;eip=0x0054e7; 	T(MOV(bx, si));	// 18490 mov     bx, si ;~ 0613:54E7
cs=0x613;eip=0x0054e9; 	T(SHL(bx, 1));	// 18491 shl     bx, 1 ;~ 0613:54E9
cs=0x613;eip=0x0054eb; 	T(MOV(ax, *(dw*)(((db*)&word_44822)+bx)));	// 18492 mov     ax, word_44822[bx] ;~ 0613:54EB
cs=0x613;eip=0x0054ef; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 18493 mov     [bp+var_8], ax ;~ 0613:54EF
cs=0x613;eip=0x0054f2; 	T(ax = bp+var_12);	// 18494 lea     ax, [bp+var_12] ;~ 0613:54F2
cs=0x613;eip=0x0054f5; 	X(PUSH(ax));	// 18495 push    ax ;~ 0613:54F5
cs=0x613;eip=0x0054f6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 18496 push    [bp+var_4] ;~ 0613:54F6
cs=0x613;eip=0x0054f9; 	T(ax = bp+var_c);	// 18497 lea     ax, [bp+var_C] ;~ 0613:54F9
cs=0x613;eip=0x0054fc; 	X(PUSH(ax));	// 18498 push    ax ;~ 0613:54FC
cs=0x613;eip=0x0054fd; 	R(CALLF(mat_mul_vector,0));	// 18499 call    mat_mul_vector ;~ 0613:54FD
cs=0x613;eip=0x005502; 	T(ADD(sp, 6));	// 18500 add     sp, 6 ;~ 0613:5502
cs=0x613;eip=0x005505; 	T(MOV(di, si));	// 18501 mov     di, si ;~ 0613:5505
cs=0x613;eip=0x005507; 	T(MOV(cl, 2));	// 18502 mov     cl, 2 ;~ 0613:5507
cs=0x613;eip=0x005509; 	T(SHL(di, cl));	// 18503 shl     di, cl ;~ 0613:5509
cs=0x613;eip=0x00550b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 18504 mov     ax, [bp+var_12] ;~ 0613:550B
cs=0x613;eip=0x00550e; 	T(CWD);	// 18505 cwd ;~ 0613:550E
cs=0x613;eip=0x00550f; 	X(ADD(*(dw*)(((db*)&state)+di), ax));	// 18506 add     state[di], ax ;~ 0613:550F
cs=0x613;eip=0x005513; 	X(ADC(*(dw*)(((db*)&word_44496)+di), dx));	// 18507 adc     word_44496[di], dx ;~ 0613:5513
cs=0x613;eip=0x005517; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 18508 mov     ax, [bp+var_E] ;~ 0613:5517
cs=0x613;eip=0x00551a; 	T(CWD);	// 18509 cwd ;~ 0613:551A
cs=0x613;eip=0x00551b; 	X(ADD(*(dw*)(((db*)&word_44554)+di), ax));	// 18510 add     word_44554[di], ax ;~ 0613:551B
cs=0x613;eip=0x00551f; 	X(ADC(*(dw*)(((db*)&word_44556)+di), dx));	// 18511 adc     word_44556[di], dx ;~ 0613:551F
cs=0x613;eip=0x005523; 	T(MOV(ax, si));	// 18512 mov     ax, si ;~ 0613:5523
cs=0x613;eip=0x005525; 	T(SHL(ax, 1));	// 18513 shl     ax, 1 ;~ 0613:5525
cs=0x613;eip=0x005527; 	T(ADD(ax, offset(dseg,word_44852)));	// 18514 add     ax, offset word_44852 ;~ 0613:5527
cs=0x613;eip=0x00552a; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 18515 mov     [bp+var_14], ax ;~ 0613:552A
cs=0x613;eip=0x00552d; 	T(MOV(bx, ax));	// 18516 mov     bx, ax ;~ 0613:552D
cs=0x613;eip=0x00552f; 	X(SUB(*(dw*)(raddr(ds,bx)), 0x13));	// 18517 sub     word ptr [bx], 13h ;~ 0613:552F
cs=0x613;eip=0x005532; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_14))));	// 18518 mov     bx, [bp+var_14] ;~ 0613:5532
cs=0x613;eip=0x005535; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 18519 mov     ax, [bx] ;~ 0613:5535
cs=0x613;eip=0x005537; 	T(CWD);	// 18520 cwd ;~ 0613:5537
cs=0x613;eip=0x005538; 	X(ADD(*(dw*)(((db*)&word_444f4)+di), ax));	// 18521 add     word_444F4[di], ax ;~ 0613:5538
cs=0x613;eip=0x00553c; 	X(ADC(*(dw*)(((db*)&word_444f6)+di), dx));	// 18522 adc     word_444F6[di], dx ;~ 0613:553C
cs=0x613;eip=0x005540; 	T(CMP(framespersec, 0x0A));	// 18523 cmp     framespersec, 0Ah ;~ 0613:5540
cs=0x613;eip=0x005545; 	R(JNZ(loc_19c6b));	// 18524 jnz     short loc_19C6B ;~ 0613:5545
cs=0x613;eip=0x005547; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_14))));	// 18525 mov     bx, [bp+var_14] ;~ 0613:5547
cs=0x613;eip=0x00554a; 	X(SUB(*(dw*)(raddr(ds,bx)), 0x13));	// 18526 sub     word ptr [bx], 13h ;~ 0613:554A
cs=0x613;eip=0x00554d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_14))));	// 18527 mov     bx, [bp+var_14] ;~ 0613:554D
cs=0x613;eip=0x005550; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 18528 mov     ax, [bx] ;~ 0613:5550
cs=0x613;eip=0x005552; 	T(CWD);	// 18529 cwd ;~ 0613:5552
cs=0x613;eip=0x005553; 	X(ADD(*(dw*)(((db*)&word_444f4)+di), ax));	// 18530 add     word_444F4[di], ax ;~ 0613:5553
cs=0x613;eip=0x005557; 	X(ADC(*(dw*)(((db*)&word_444f6)+di), dx));	// 18531 adc     word_444F6[di], dx ;~ 0613:5557
loc_19c6b:
	// 5512 
cs=0x613;eip=0x00555b; 	T(MOV(bx, si));	// 18534 mov     bx, si ;~ 0613:555B
cs=0x613;eip=0x00555d; 	T(SHL(bx, 1));	// 18535 shl     bx, 1 ;~ 0613:555D
cs=0x613;eip=0x00555f; 	T(SHL(bx, 1));	// 18536 shl     bx, 1 ;~ 0613:555F
cs=0x613;eip=0x005561; 	T(MOV(ax, *(dw*)(((db*)&word_444f4)+bx)));	// 18537 mov     ax, word_444F4[bx] ;~ 0613:5561
cs=0x613;eip=0x005565; 	T(MOV(dx, *(dw*)(((db*)&word_444f6)+bx)));	// 18538 mov     dx, word_444F6[bx] ;~ 0613:5565
cs=0x613;eip=0x005569; 	T(ADD(ax, word_445ea));	// 18539 add     ax, word_445EA ;~ 0613:5569
cs=0x613;eip=0x00556d; 	T(ADC(dx, word_445ec));	// 18540 adc     dx, word_445EC ;~ 0613:556D
cs=0x613;eip=0x005571; 	T(OR(dx, dx));	// 18541 or      dx, dx ;~ 0613:5571
cs=0x613;eip=0x005573; 	R(JL(loc_19c88));	// 18542 jl      short loc_19C88 ;~ 0613:5573
cs=0x613;eip=0x005575; 	R(JMP(loc_19bb0));	// 18543 jmp     loc_19BB0 ;~ 0613:5575
loc_19c88:
	// 5513 
cs=0x613;eip=0x005578; 	T(MOV(bx, si));	// 18547 mov     bx, si ;~ 0613:5578
cs=0x613;eip=0x00557a; 	T(SHL(bx, 1));	// 18548 shl     bx, 1 ;~ 0613:557A
cs=0x613;eip=0x00557c; 	X(MOV(*(dw*)(((db*)&word_44822)+bx), 0));	// 18549 mov     word_44822[bx], 0 ;~ 0613:557C
cs=0x613;eip=0x005582; 	R(JMP(loc_19bc2));	// 18550 jmp     loc_19BC2 ;~ 0613:5582
loc_19c96:
	// 5514 
cs=0x613;eip=0x005586; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 18555 mov     al, [bp+var_2] ;~ 0613:5586
cs=0x613;eip=0x005589; 	X(MOV(byte_448be, al));	// 18556 mov     byte_448BE, al ;~ 0613:5589
cs=0x613;eip=0x00558c; 	X(POP(si));	// 18557 pop     si ;~ 0613:558C
cs=0x613;eip=0x00558d; 	X(POP(di));	// 18558 pop     di ;~ 0613:558D
cs=0x613;eip=0x00558e; 	T(MOV(sp, bp));	// 18559 mov     sp, bp ;~ 0613:558E
cs=0x613;eip=0x005590; 	X(POP(bp));	// 18560 pop     bp ;~ 0613:5590
cs=0x613;eip=0x005591; 	R(RETF(0));	// 18561 retf ;~ 0613:5591
setup_aero_trackdata:
	// 18569 
#undef arg_0
#define arg_0 6
	// 18572 arg_0           = word ptr  6 ;~ 0613:5592
#undef arg_2
#define arg_2 8
	// 18573 arg_2           = word ptr  8 ;~ 0613:5592
#undef arg_4
#define arg_4 0x0A
	// 18574 arg_4           = word ptr  0Ah ;~ 0613:5592
ret_613_5592:
	// 5515 
cs=0x613;eip=0x005592; 	X(PUSH(bp));	// 18576 push    bp ;~ 0613:5592
cs=0x613;eip=0x005593; 	T(MOV(bp, sp));	// 18577 mov     bp, sp ;~ 0613:5593
cs=0x613;eip=0x005595; 	T(SUB(sp, 2));	// 18578 sub     sp, 2 ;~ 0613:5595
cs=0x613;eip=0x005598; 	X(PUSH(di));	// 18579 push    di ;~ 0613:5598
cs=0x613;eip=0x005599; 	X(PUSH(si));	// 18580 push    si ;~ 0613:5599
cs=0x613;eip=0x00559a; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0));	// 18581 cmp     [bp+arg_4], 0 ;~ 0613:559A
cs=0x613;eip=0x00559e; 	R(JZ(loc_19cb3));	// 18582 jz      short loc_19CB3 ;~ 0613:559E
cs=0x613;eip=0x0055a0; 	R(JMP(loc_19d36));	// 18583 jmp     loc_19D36 ;~ 0613:55A0
loc_19cb3:
	// 5516 
cs=0x613;eip=0x0055a3; 	T(MOV(ax, offset(dseg,asimd)));	// 18587 mov     ax, offset aSimd ; "simd" ;~ 0613:55A3
cs=0x613;eip=0x0055a6; 	X(PUSH(ax));	// 18588 push    ax ;~ 0613:55A6
cs=0x613;eip=0x0055a7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 18589 push    [bp+arg_2] ;~ 0613:55A7
cs=0x613;eip=0x0055aa; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 18590 push    [bp+arg_0] ;~ 0613:55AA
cs=0x613;eip=0x0055ad; 	R(CALLF(locate_shape_alt,0));	// 18591 call    locate_shape_alt ;~ 0613:55AD
cs=0x613;eip=0x0055b2; 	T(ADD(sp, 6));	// 18592 add     sp, 6 ;~ 0613:55B2
cs=0x613;eip=0x0055b5; 	X(PUSH(si));	// 18593 push    si ;~ 0613:55B5
cs=0x613;eip=0x0055b6; 	T(MOV(di, offset(dseg,simd_player)));	// 18594 mov     di, offset simd_player ;~ 0613:55B6
cs=0x613;eip=0x0055b9; 	T(MOV(si, ax));	// 18595 mov     si, ax ;~ 0613:55B9
cs=0x613;eip=0x0055bb; 	X(PUSH(ds));	// 18596 push    ds ;~ 0613:55BB
cs=0x613;eip=0x0055bc; 	X(POP(es));	// 18597 pop     es ;~ 0613:55BC
cs=0x613;eip=0x0055bd; 	X(PUSH(ds));	// 18599 push    ds ;~ 0613:55BD
cs=0x613;eip=0x0055be; 	T(MOV(ds, dx));	// 18600 mov     ds, dx ;~ 0613:55BE
cs=0x613;eip=0x0055c0; 	T(MOV(cx, 0x184));	// 18601 mov     cx, 184h ;~ 0613:55C0
	// 18602 repne movsw ;~ 0613:55C3
cs=0x613;eip=0x0055c3; 	X(	REPNE MOVSW);	// 18602 repne movsw ;~ 0613:55C3
cs=0x613;eip=0x0055c5; 	X(POP(ds));	// 18603 pop     ds ;~ 0613:55C5
cs=0x613;eip=0x0055c6; 	X(POP(si));	// 18604 pop     si ;~ 0613:55C6
cs=0x613;eip=0x0055c7; 	T(MOV(ax, *(dw*)(((db*)&td04_aerotable_pl))));	// 18605 mov     ax, word ptr td04_aerotable_pl ;~ 0613:55C7
cs=0x613;eip=0x0055ca; 	T(MOV(dx, *(dw*)(((db*)&td04_aerotable_pl)+2)));	// 18606 mov     dx, word ptr td04_aerotable_pl+2 ;~ 0613:55CA
cs=0x613;eip=0x0055ce; 	X(MOV(word_4615e, ax));	// 18607 mov     word_4615E, ax ;~ 0613:55CE
cs=0x613;eip=0x0055d1; 	X(MOV(word_46160, dx));	// 18608 mov     word_46160, dx ;~ 0613:55D1
cs=0x613;eip=0x0055d5; 	T(SUB(si, si));	// 18609 sub     si, si ;~ 0613:55D5
loc_19ce7:
	// 5517 
cs=0x613;eip=0x0055d7; 	T(MOV(ax, si));	// 18612 mov     ax, si ;~ 0613:55D7
cs=0x613;eip=0x0055d9; 	T(CWD);	// 18613 cwd ;~ 0613:55D9
cs=0x613;eip=0x0055da; 	X(PUSH(dx));	// 18614 push    dx ;~ 0613:55DA
cs=0x613;eip=0x0055db; 	X(PUSH(ax));	// 18615 push    ax ;~ 0613:55DB
cs=0x613;eip=0x0055dc; 	T(CWD);	// 18616 cwd ;~ 0613:55DC
cs=0x613;eip=0x0055dd; 	X(PUSH(dx));	// 18617 push    dx ;~ 0613:55DD
cs=0x613;eip=0x0055de; 	X(PUSH(ax));	// 18618 push    ax ;~ 0613:55DE
cs=0x613;eip=0x0055df; 	T(MOV(ax, word_45e92));	// 18619 mov     ax, word_45E92 ;~ 0613:55DF
cs=0x613;eip=0x0055e2; 	T(CWD);	// 18620 cwd ;~ 0613:55E2
cs=0x613;eip=0x0055e3; 	X(PUSH(dx));	// 18621 push    dx ;~ 0613:55E3
cs=0x613;eip=0x0055e4; 	X(PUSH(ax));	// 18622 push    ax ;~ 0613:55E4
cs=0x613;eip=0x0055e5; 	R(CALLF(__aflmul,0));	// 18623 call    __aFlmul ;~ 0613:55E5
cs=0x613;eip=0x0055ea; 	X(PUSH(dx));	// 18624 push    dx ;~ 0613:55EA
cs=0x613;eip=0x0055eb; 	X(PUSH(ax));	// 18625 push    ax ;~ 0613:55EB
cs=0x613;eip=0x0055ec; 	R(CALLF(__aflmul,0));	// 18626 call    __aFlmul ;~ 0613:55EC
cs=0x613;eip=0x0055f1; 	T(MOV(cl, 9));	// 18627 mov     cl, 9 ;~ 0613:55F1
loc_19d03:
	// 5518 
cs=0x613;eip=0x0055f3; 	T(SAR(dx, 1));	// 18630 sar     dx, 1 ;~ 0613:55F3
cs=0x613;eip=0x0055f5; 	T(RCR(ax, 1));	// 18631 rcr     ax, 1 ;~ 0613:55F5
cs=0x613;eip=0x0055f7; 	T(DEC(cl));	// 18632 dec     cl ;~ 0613:55F7
cs=0x613;eip=0x0055f9; 	R(JNZ(loc_19d03));	// 18633 jnz     short loc_19D03 ;~ 0613:55F9
cs=0x613;eip=0x0055fb; 	T(MOV(bx, si));	// 18634 mov     bx, si ;~ 0613:55FB
cs=0x613;eip=0x0055fd; 	T(SHL(bx, 1));	// 18635 shl     bx, 1 ;~ 0613:55FD
cs=0x613;eip=0x0055ff; 	T(LES(di, td04_aerotable_pl));	// 18636 les     di, td04_aerotable_pl ;~ 0613:55FF
cs=0x613;eip=0x005603; 	X(MOV(*(dw*)(raddr(es,bx+di)), ax));	// 18638 mov     es:[bx+di], ax ;~ 0613:5603
cs=0x613;eip=0x005606; 	T(INC(si));	// 18639 inc     si ;~ 0613:5606
cs=0x613;eip=0x005607; 	T(CMP(si, 0x40));	// 18640 cmp     si, 40h ; '@' ;~ 0613:5607
cs=0x613;eip=0x00560a; 	R(JL(loc_19ce7));	// 18641 jl      short loc_19CE7 ;~ 0613:560A
cs=0x613;eip=0x00560c; 	T(MOV(ax, offset(dseg,agnam)));	// 18642 mov     ax, offset aGnam ; "gnam" ;~ 0613:560C
cs=0x613;eip=0x00560f; 	X(PUSH(ax));	// 18643 push    ax ;~ 0613:560F
cs=0x613;eip=0x005610; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 18644 push    [bp+arg_2] ;~ 0613:5610
cs=0x613;eip=0x005613; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 18645 push    [bp+arg_0] ;~ 0613:5613
cs=0x613;eip=0x005616; 	R(CALLF(locate_shape_alt,0));	// 18646 call    locate_shape_alt ;~ 0613:5616
cs=0x613;eip=0x00561b; 	T(ADD(sp, 6));	// 18647 add     sp, 6 ;~ 0613:561B
cs=0x613;eip=0x00561e; 	X(PUSH(dx));	// 18648 push    dx ;~ 0613:561E
cs=0x613;eip=0x00561f; 	X(PUSH(ax));	// 18649 push    ax ;~ 0613:561F
cs=0x613;eip=0x005620; 	T(MOV(ax, offset(dseg,gnam_string)));	// 18650 mov     ax, offset gnam_string ;~ 0613:5620
cs=0x613;eip=0x005623; 	R(JMP(loc_19db6));	// 18651 jmp     loc_19DB6 ;~ 0613:5623
loc_19d36:
	// 5519 
cs=0x613;eip=0x005626; 	T(MOV(ax, offset(dseg,asimd_0)));	// 18655 mov     ax, offset aSimd_0 ; "simd" ;~ 0613:5626
cs=0x613;eip=0x005629; 	X(PUSH(ax));	// 18656 push    ax ;~ 0613:5629
cs=0x613;eip=0x00562a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 18657 push    [bp+arg_2] ;~ 0613:562A
cs=0x613;eip=0x00562d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 18658 push    [bp+arg_0] ;~ 0613:562D
cs=0x613;eip=0x005630; 	R(CALLF(locate_shape_alt,0));	// 18659 call    locate_shape_alt ;~ 0613:5630
cs=0x613;eip=0x005635; 	T(ADD(sp, 6));	// 18660 add     sp, 6 ;~ 0613:5635
cs=0x613;eip=0x005638; 	X(PUSH(si));	// 18661 push    si ;~ 0613:5638
cs=0x613;eip=0x005639; 	T(MOV(di, offset(dseg,simd_opponent)));	// 18662 mov     di, offset simd_opponent ;~ 0613:5639
cs=0x613;eip=0x00563c; 	T(MOV(si, ax));	// 18663 mov     si, ax ;~ 0613:563C
cs=0x613;eip=0x00563e; 	X(PUSH(ds));	// 18664 push    ds ;~ 0613:563E
cs=0x613;eip=0x00563f; 	X(POP(es));	// 18665 pop     es ;~ 0613:563F
cs=0x613;eip=0x005640; 	X(PUSH(ds));	// 18667 push    ds ;~ 0613:5640
cs=0x613;eip=0x005641; 	T(MOV(ds, dx));	// 18668 mov     ds, dx ;~ 0613:5641
cs=0x613;eip=0x005643; 	T(MOV(cx, 0x184));	// 18669 mov     cx, 184h ;~ 0613:5643
	// 18670 repne movsw ;~ 0613:5646
cs=0x613;eip=0x005646; 	X(	REPNE MOVSW);	// 18670 repne movsw ;~ 0613:5646
cs=0x613;eip=0x005648; 	X(POP(ds));	// 18671 pop     ds ;~ 0613:5648
cs=0x613;eip=0x005649; 	X(POP(si));	// 18672 pop     si ;~ 0613:5649
cs=0x613;eip=0x00564a; 	T(MOV(ax, *(dw*)(((db*)&td05_aerotable_op))));	// 18673 mov     ax, word ptr td05_aerotable_op ;~ 0613:564A
cs=0x613;eip=0x00564d; 	T(MOV(dx, *(dw*)(((db*)&td05_aerotable_op)+2)));	// 18674 mov     dx, word ptr td05_aerotable_op+2 ;~ 0613:564D
cs=0x613;eip=0x005651; 	X(MOV(word_45944, ax));	// 18675 mov     word_45944, ax ;~ 0613:5651
cs=0x613;eip=0x005654; 	X(MOV(word_45946, dx));	// 18676 mov     word_45946, dx ;~ 0613:5654
cs=0x613;eip=0x005658; 	T(SUB(si, si));	// 18677 sub     si, si ;~ 0613:5658
loc_19d6a:
	// 5520 
cs=0x613;eip=0x00565a; 	T(MOV(ax, si));	// 18680 mov     ax, si ;~ 0613:565A
cs=0x613;eip=0x00565c; 	T(CWD);	// 18681 cwd ;~ 0613:565C
cs=0x613;eip=0x00565d; 	X(PUSH(dx));	// 18682 push    dx ;~ 0613:565D
cs=0x613;eip=0x00565e; 	X(PUSH(ax));	// 18683 push    ax ;~ 0613:565E
cs=0x613;eip=0x00565f; 	T(CWD);	// 18684 cwd ;~ 0613:565F
cs=0x613;eip=0x005660; 	X(PUSH(dx));	// 18685 push    dx ;~ 0613:5660
cs=0x613;eip=0x005661; 	X(PUSH(ax));	// 18686 push    ax ;~ 0613:5661
cs=0x613;eip=0x005662; 	T(MOV(ax, word_45678));	// 18687 mov     ax, word_45678 ;~ 0613:5662
cs=0x613;eip=0x005665; 	T(CWD);	// 18688 cwd ;~ 0613:5665
cs=0x613;eip=0x005666; 	X(PUSH(dx));	// 18689 push    dx ;~ 0613:5666
cs=0x613;eip=0x005667; 	X(PUSH(ax));	// 18690 push    ax ;~ 0613:5667
cs=0x613;eip=0x005668; 	R(CALLF(__aflmul,0));	// 18691 call    __aFlmul ;~ 0613:5668
cs=0x613;eip=0x00566d; 	X(PUSH(dx));	// 18692 push    dx ;~ 0613:566D
cs=0x613;eip=0x00566e; 	X(PUSH(ax));	// 18693 push    ax ;~ 0613:566E
cs=0x613;eip=0x00566f; 	R(CALLF(__aflmul,0));	// 18694 call    __aFlmul ;~ 0613:566F
cs=0x613;eip=0x005674; 	T(MOV(cl, 9));	// 18695 mov     cl, 9 ;~ 0613:5674
loc_19d86:
	// 5521 
cs=0x613;eip=0x005676; 	T(SAR(dx, 1));	// 18698 sar     dx, 1 ;~ 0613:5676
cs=0x613;eip=0x005678; 	T(RCR(ax, 1));	// 18699 rcr     ax, 1 ;~ 0613:5678
cs=0x613;eip=0x00567a; 	T(DEC(cl));	// 18700 dec     cl ;~ 0613:567A
cs=0x613;eip=0x00567c; 	R(JNZ(loc_19d86));	// 18701 jnz     short loc_19D86 ;~ 0613:567C
cs=0x613;eip=0x00567e; 	T(MOV(bx, si));	// 18702 mov     bx, si ;~ 0613:567E
cs=0x613;eip=0x005680; 	T(SHL(bx, 1));	// 18703 shl     bx, 1 ;~ 0613:5680
cs=0x613;eip=0x005682; 	T(LES(di, td05_aerotable_op));	// 18704 les     di, td05_aerotable_op ;~ 0613:5682
cs=0x613;eip=0x005686; 	X(MOV(*(dw*)(raddr(es,bx+di)), ax));	// 18706 mov     es:[bx+di], ax ;~ 0613:5686
cs=0x613;eip=0x005689; 	T(INC(si));	// 18707 inc     si ;~ 0613:5689
cs=0x613;eip=0x00568a; 	T(CMP(si, 0x40));	// 18708 cmp     si, 40h ; '@' ;~ 0613:568A
cs=0x613;eip=0x00568d; 	R(JL(loc_19d6a));	// 18709 jl      short loc_19D6A ;~ 0613:568D
cs=0x613;eip=0x00568f; 	T(MOV(ax, offset(dseg,agsna)));	// 18710 mov     ax, offset aGsna ; "gsna" ;~ 0613:568F
cs=0x613;eip=0x005692; 	X(PUSH(ax));	// 18711 push    ax ;~ 0613:5692
cs=0x613;eip=0x005693; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 18712 push    [bp+arg_2] ;~ 0613:5693
cs=0x613;eip=0x005696; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 18713 push    [bp+arg_0] ;~ 0613:5696
cs=0x613;eip=0x005699; 	R(CALLF(locate_shape_alt,0));	// 18714 call    locate_shape_alt ;~ 0613:5699
cs=0x613;eip=0x00569e; 	T(ADD(sp, 6));	// 18715 add     sp, 6 ;~ 0613:569E
cs=0x613;eip=0x0056a1; 	X(PUSH(dx));	// 18716 push    dx ;~ 0613:56A1
cs=0x613;eip=0x0056a2; 	X(PUSH(ax));	// 18717 push    ax ;~ 0613:56A2
cs=0x613;eip=0x0056a3; 	T(MOV(ax, offset(dseg,gsna_string)));	// 18718 mov     ax, offset gsna_string ;~ 0613:56A3
loc_19db6:
	// 5522 
cs=0x613;eip=0x0056a6; 	X(PUSH(ax));	// 18721 push    ax ;~ 0613:56A6
cs=0x613;eip=0x0056a7; 	R(CALLF(copy_string,0));	// 18722 call    copy_string ;~ 0613:56A7
cs=0x613;eip=0x0056ac; 	T(ADD(sp, 6));	// 18723 add     sp, 6 ;~ 0613:56AC
cs=0x613;eip=0x0056af; 	X(POP(si));	// 18724 pop     si ;~ 0613:56AF
cs=0x613;eip=0x0056b0; 	X(POP(di));	// 18725 pop     di ;~ 0613:56B0
cs=0x613;eip=0x0056b1; 	T(MOV(sp, bp));	// 18726 mov     sp, bp ;~ 0613:56B1
cs=0x613;eip=0x0056b3; 	X(POP(bp));	// 18727 pop     bp ;~ 0613:56B3
cs=0x613;eip=0x0056b4; 	R(RETF(0));	// 18728 retf ;~ 0613:56B4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kaudio_carstate: 	goto audio_carstate;
        case m2c::kcar_car_coll_detect_maybe: 	goto car_car_coll_detect_maybe;
        case m2c::kcar_car_speed_adjust_maybe: 	goto car_car_speed_adjust_maybe;
        case m2c::kcarstate_rc_op: 	goto carstate_rc_op;
        case m2c::kcode_update_globalpos: 	goto code_update_globalpos;
        case m2c::kcode_update_rotcoords: 	goto code_update_rotcoords;
        case m2c::kdo_opponent_op: 	goto do_opponent_op;
        case m2c::kinit_game_state: 	goto init_game_state;
        case m2c::kinit_plantrak: 	goto init_plantrak;
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
        case m2c::kloc_16a04: 	goto loc_16a04;
        case m2c::kloc_16a17: 	goto loc_16a17;
        case m2c::kloc_16a2a: 	goto loc_16a2a;
        case m2c::kloc_16a37: 	goto loc_16a37;
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
        case m2c::kloc_16f59: 	goto loc_16f59;
        case m2c::kloc_16f6b: 	goto loc_16f6b;
        case m2c::kloc_16f73: 	goto loc_16f73;
        case m2c::kloc_16f81: 	goto loc_16f81;
        case m2c::kloc_16fb1: 	goto loc_16fb1;
        case m2c::kloc_16ffe: 	goto loc_16ffe;
        case m2c::kloc_17002: 	goto loc_17002;
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
        case m2c::kloc_1853d: 	goto loc_1853d;
        case m2c::kloc_1856e: 	goto loc_1856e;
        case m2c::kloc_18577: 	goto loc_18577;
        case m2c::kloc_18592: 	goto loc_18592;
        case m2c::kloc_185a0: 	goto loc_185a0;
        case m2c::kloc_185bb: 	goto loc_185bb;
        case m2c::kloc_185c9: 	goto loc_185c9;
        case m2c::kloc_185ee: 	goto loc_185ee;
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
        case m2c::kloc_18cf3: 	goto loc_18cf3;
        case m2c::kloc_18d04: 	goto loc_18d04;
        case m2c::kloc_18d5e: 	goto loc_18d5e;
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
        case m2c::kloc_1958c: 	goto loc_1958c;
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
        case m2c::kloc_1993e: 	goto loc_1993e;
        case m2c::kloc_1994c: 	goto loc_1994c;
        case m2c::kloc_199ae: 	goto loc_199ae;
        case m2c::kloc_19a5e: 	goto loc_19a5e;
        case m2c::kloc_19a7b: 	goto loc_19a7b;
        case m2c::kloc_19a87: 	goto loc_19a87;
        case m2c::kloc_19a95: 	goto loc_19a95;
        case m2c::kloc_19aa6: 	goto loc_19aa6;
        case m2c::kloc_19ab0: 	goto loc_19ab0;
        case m2c::kloc_19ab1: 	goto loc_19ab1;
        case m2c::kloc_19ab9: 	goto loc_19ab9;
        case m2c::kloc_19b99: 	goto loc_19b99;
        case m2c::kloc_19bb0: 	goto loc_19bb0;
        case m2c::kloc_19bc2: 	goto loc_19bc2;
        case m2c::kloc_19bc3: 	goto loc_19bc3;
        case m2c::kloc_19bcb: 	goto loc_19bcb;
        case m2c::kloc_19c6b: 	goto loc_19c6b;
        case m2c::kloc_19c88: 	goto loc_19c88;
        case m2c::kloc_19c96: 	goto loc_19c96;
        case m2c::kloc_19cb3: 	goto loc_19cb3;
        case m2c::kloc_19ce7: 	goto loc_19ce7;
        case m2c::kloc_19d03: 	goto loc_19d03;
        case m2c::kloc_19d36: 	goto loc_19d36;
        case m2c::kloc_19d6a: 	goto loc_19d6a;
        case m2c::kloc_19d86: 	goto loc_19d86;
        case m2c::kloc_19db6: 	goto loc_19db6;
        case m2c::kmat_mul_vector2: 	goto mat_mul_vector2;
        case m2c::kplane_origin_op: 	goto plane_origin_op;
        case m2c::kplane_rotate_op: 	goto plane_rotate_op;
        case m2c::kret_613_2: 	goto ret_613_2;
        case m2c::kret_613_2188: 	goto ret_613_2188;
        case m2c::kret_613_282a: 	goto ret_613_282a;
        case m2c::kret_613_28f8: 	goto ret_613_28f8;
        case m2c::kret_613_2ad8: 	goto ret_613_2ad8;
        case m2c::kret_613_3106: 	goto ret_613_3106;
        case m2c::kret_613_3368: 	goto ret_613_3368;
        case m2c::kret_613_45c8: 	goto ret_613_45c8;
        case m2c::kret_613_4cd1: 	goto ret_613_4cd1;
        case m2c::kret_613_4ed1: 	goto ret_613_4ed1;
        case m2c::kret_613_5490: 	goto ret_613_5490;
        case m2c::ksetup_aero_trackdata: 	goto setup_aero_trackdata;
        case m2c::kstate_op_unk: 	goto state_op_unk;
        case m2c::ksub_18d06: 	goto sub_18d06;
        case m2c::ksub_18d60: 	goto sub_18d60;
        case m2c::kupd_statef20_from_steer_input: 	goto upd_statef20_from_steer_input;
        case m2c::kupdate_crash_state: 	goto update_crash_state;
        case m2c::kupdate_grip: 	goto update_grip;
        case m2c::kupdate_player_state: 	goto update_player_state;
        case m2c::kvec_normalinnerproduct: 	goto vec_normalinnerproduct;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

