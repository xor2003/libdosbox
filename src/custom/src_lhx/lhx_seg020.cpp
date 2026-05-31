/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group18(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group18:
    _begin:
nullsub_13:
	// 74960 
cs=0x229a;eip=0x000003; 	R(RETF(0));	// 74961 retf ;~ 229A:0003
sub_30f84:
	// 74969 
#undef var_4
#define var_4 -4
	// 74971 var_4           = byte ptr -4 ;~ 229A:0004
#undef var_2
#define var_2 -2
	// 74972 var_2           = byte ptr -2 ;~ 229A:0004
#undef arg_0
#define arg_0 4
	// 74973 arg_0           = byte ptr  4 ;~ 229A:0004
cs=0x229a;eip=0x000004; 	X(PUSH(bp));	// 74975 push    bp ;~ 229A:0004
cs=0x229a;eip=0x000005; 	T(MOV(bp, sp));	// 74976 mov     bp, sp ;~ 229A:0005
cs=0x229a;eip=0x000007; 	T(SUB(sp, 4));	// 74977 sub     sp, 4 ;~ 229A:0007
cs=0x229a;eip=0x00000a; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 74978 mov     al, [bp+arg_0] ;~ 229A:000A
cs=0x229a;eip=0x00000d; 	T(CBW);	// 74979 cbw ;~ 229A:000D
cs=0x229a;eip=0x00000e; 	T(MOV(bx, ax));	// 74980 mov     bx, ax ;~ 229A:000E
cs=0x229a;eip=0x000010; 	T(TEST(*(raddr(ds,bx-0x3D7B)), 1));	// 74981 test    byte ptr [bx-3D7Bh], 1 ;~ 229A:0010
cs=0x229a;eip=0x000015; 	R(JZ(loc_30f9b));	// 74982 jz      short loc_30F9B ;~ 229A:0015
cs=0x229a;eip=0x000017; 	T(ADD(al, 0x20));	// 74983 add     al, 20h ; ' ' ;~ 229A:0017
cs=0x229a;eip=0x000019; 	R(JMP(loc_30f9e));	// 74984 jmp     short loc_30F9E ;~ 229A:0019
loc_30f9b:
	// 9256 
cs=0x229a;eip=0x00001b; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 74988 mov     al, [bp+arg_0] ;~ 229A:001B
loc_30f9e:
	// 9257 
cs=0x229a;eip=0x00001e; 	T(SUB(al, 0x61));	// 74991 sub     al, 61h ; 'a' ;~ 229A:001E
cs=0x229a;eip=0x000020; 	X(MOV(*(raddr(ss,bp+arg_0)), al));	// 74992 mov     [bp+arg_0], al ;~ 229A:0020
cs=0x229a;eip=0x000023; 	T(MOV(bx, 0x40));	// 74993 mov     bx, 40h ; '@' ;~ 229A:0023
cs=0x229a;eip=0x000026; 	T(MOV(es, bx));	// 74994 mov     es, bx ;~ 229A:0026
cs=0x229a;eip=0x000028; 	T(MOV(bx, 0x10));	// 74996 mov     bx, 10h ;~ 229A:0028
cs=0x229a;eip=0x00002b; 	T(MOV(al, *(raddr(es,bx))));	// 74997 mov     al, es:[bx] ;~ 229A:002B
cs=0x229a;eip=0x00002e; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 74998 mov     [bp+var_4], al ;~ 229A:002E
cs=0x229a;eip=0x000031; 	T(CMP(*(raddr(ss,bp+arg_0)), 1));	// 74999 cmp     [bp+arg_0], 1 ;~ 229A:0031
cs=0x229a;eip=0x000035; 	R(JG(loc_30fed));	// 75000 jg      short loc_30FED ;~ 229A:0035
cs=0x229a;eip=0x000037; 	T(TEST(*(raddr(ss,bp+var_4)), 1));	// 75001 test    [bp+var_4], 1 ;~ 229A:0037
cs=0x229a;eip=0x00003b; 	R(JZ(loc_30fed));	// 75002 jz      short loc_30FED ;~ 229A:003B
cs=0x229a;eip=0x00003d; 	T(TEST(*(raddr(ss,bp+var_4)), 0x0C0));	// 75003 test    [bp+var_4], 0C0h ;~ 229A:003D
cs=0x229a;eip=0x000041; 	R(JNZ(loc_30fed));	// 75004 jnz     short loc_30FED ;~ 229A:0041
cs=0x229a;eip=0x000043; 	T(MOV(bx, 0x50));	// 75005 mov     bx, 50h ; 'P' ;~ 229A:0043
cs=0x229a;eip=0x000046; 	T(MOV(es, bx));	// 75006 mov     es, bx ;~ 229A:0046
cs=0x229a;eip=0x000048; 	T(MOV(bx, 4));	// 75008 mov     bx, 4 ;~ 229A:0048
cs=0x229a;eip=0x00004b; 	T(MOV(al, *(raddr(es,bx))));	// 75009 mov     al, es:[bx] ;~ 229A:004B
cs=0x229a;eip=0x00004e; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 75010 mov     [bp+var_2], al ;~ 229A:004E
cs=0x229a;eip=0x000051; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 75011 cmp     [bp+arg_0], 0 ;~ 229A:0051
cs=0x229a;eip=0x000055; 	R(JNZ(loc_30fdb));	// 75012 jnz     short loc_30FDB ;~ 229A:0055
cs=0x229a;eip=0x000057; 	T(CMP(al, 1));	// 75013 cmp     al, 1 ;~ 229A:0057
cs=0x229a;eip=0x000059; 	R(JZ(loc_30fe7));	// 75014 jz      short loc_30FE7 ;~ 229A:0059
loc_30fdb:
	// 9258 
cs=0x229a;eip=0x00005b; 	T(CMP(*(raddr(ss,bp+arg_0)), 1));	// 75017 cmp     [bp+arg_0], 1 ;~ 229A:005B
cs=0x229a;eip=0x00005f; 	R(JNZ(loc_30fed));	// 75018 jnz     short loc_30FED ;~ 229A:005F
cs=0x229a;eip=0x000061; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 75019 cmp     [bp+var_2], 0 ;~ 229A:0061
cs=0x229a;eip=0x000065; 	R(JNZ(loc_30fed));	// 75020 jnz     short loc_30FED ;~ 229A:0065
loc_30fe7:
	// 9259 
cs=0x229a;eip=0x000067; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 75023 mov     al, [bp+var_2] ;~ 229A:0067
cs=0x229a;eip=0x00006a; 	X(MOV(*(raddr(ss,bp+arg_0)), al));	// 75024 mov     [bp+arg_0], al ;~ 229A:006A
loc_30fed:
	// 9260 
cs=0x229a;eip=0x00006d; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 75028 mov     al, [bp+arg_0] ;~ 229A:006D
cs=0x229a;eip=0x000070; 	T(CBW);	// 75029 cbw ;~ 229A:0070
cs=0x229a;eip=0x000071; 	T(ADD(ax, 0x61));	// 75030 add     ax, 61h ; 'a' ;~ 229A:0071
cs=0x229a;eip=0x000074; 	T(MOV(sp, bp));	// 75031 mov     sp, bp ;~ 229A:0074
cs=0x229a;eip=0x000076; 	X(POP(bp));	// 75032 pop     bp ;~ 229A:0076
cs=0x229a;eip=0x000077; 	R(RETN(2));	// 75033 retn    2 ;~ 229A:0077
sub_30ffa:
	// 75041 
#undef arg_0
#define arg_0 6
	// 75044 arg_0           = word ptr  6 ;~ 229A:007A
#undef arg_2
#define arg_2 8
	// 75045 arg_2           = word ptr  8 ;~ 229A:007A
#undef arg_4
#define arg_4 0x0A
	// 75046 arg_4           = word ptr  0Ah ;~ 229A:007A
#undef arg_6
#define arg_6 0x0C
	// 75047 arg_6           = word ptr  0Ch ;~ 229A:007A
cs=0x229a;eip=0x00007a; 	X(PUSH(bp));	// 75049 push    bp ;~ 229A:007A
cs=0x229a;eip=0x00007b; 	T(MOV(bp, sp));	// 75050 mov     bp, sp ;~ 229A:007B
cs=0x229a;eip=0x00007d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 75051 push    [bp+arg_0] ;~ 229A:007D
cs=0x229a;eip=0x000080; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 75052 push    [bp+arg_0] ;~ 229A:0080
cs=0x229a;eip=0x000083; 	R(CALLF(sub_2dcb2,0));	// 75053 call    sub_2DCB2 ;~ 229A:0083
cs=0x229a;eip=0x000088; 	T(SAR(ax, 1));	// 75054 sar     ax, 1 ;~ 229A:0088
cs=0x229a;eip=0x00008a; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 75055 mov     cx, [bp+arg_2] ;~ 229A:008A
cs=0x229a;eip=0x00008d; 	T(ADD(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 75056 add     cx, [bp+arg_4] ;~ 229A:008D
cs=0x229a;eip=0x000090; 	T(SAR(cx, 1));	// 75057 sar     cx, 1 ;~ 229A:0090
cs=0x229a;eip=0x000092; 	T(SUB(cx, ax));	// 75058 sub     cx, ax ;~ 229A:0092
cs=0x229a;eip=0x000094; 	X(PUSH(cx));	// 75059 push    cx ;~ 229A:0094
cs=0x229a;eip=0x000095; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 75060 push    [bp+arg_6] ;~ 229A:0095
cs=0x229a;eip=0x000098; 	R(CALLF(sub_2dce4,0));	// 75061 call    sub_2DCE4 ;~ 229A:0098
cs=0x229a;eip=0x00009d; 	X(POP(bp));	// 75062 pop     bp ;~ 229A:009D
cs=0x229a;eip=0x00009e; 	R(RETF(0));	// 75063 retf ;~ 229A:009E
sub_3101f:
	// 75070 
cs=0x229a;eip=0x00009f; 	R(CALLF(sub_3d1e6,0));	// 75072 call    sub_3D1E6 ;~ 229A:009F
cs=0x229a;eip=0x0000a4; 	X(MOV(unk_49ae0, 1));	// 75073 mov     byte ptr unk_49AE0, 1 ;~ 229A:00A4
cs=0x229a;eip=0x0000a9; 	R(RETF(0));	// 75074 retf ;~ 229A:00A9
sub_3102a:
	// 75081 
cs=0x229a;eip=0x0000aa; 	T(CMP(unk_49ae0, 0));	// 75083 cmp     byte ptr unk_49AE0, 0 ;~ 229A:00AA
cs=0x229a;eip=0x0000af; 	R(JZ(locret_3103b));	// 75084 jz      short locret_3103B ;~ 229A:00AF
cs=0x229a;eip=0x0000b1; 	X(MOV(unk_49ae0, 0));	// 75085 mov     byte ptr unk_49AE0, 0 ;~ 229A:00B1
cs=0x229a;eip=0x0000b6; 	R(CALLF(sub_3d237,0));	// 75086 call    sub_3D237 ;~ 229A:00B6
locret_3103b:
	// 9261 
cs=0x229a;eip=0x0000bb; 	R(RETF(0));	// 75089 retf ;~ 229A:00BB
sub_3103c:
	// 75097 
#undef var_34
#define var_34 -0x34
	// 75100 var_34          = byte ptr -34h ;~ 229A:00BC
#undef var_1e
#define var_1e -0x1E
	// 75101 var_1E          = byte ptr -1Eh ;~ 229A:00BC
#undef var_18
#define var_18 -0x18
	// 75102 var_18          = byte ptr -18h ;~ 229A:00BC
#undef var_6
#define var_6 -6
	// 75103 var_6           = word ptr -6 ;~ 229A:00BC
#undef var_4
#define var_4 -4
	// 75104 var_4           = word ptr -4 ;~ 229A:00BC
#undef var_2
#define var_2 -2
	// 75105 var_2           = word ptr -2 ;~ 229A:00BC
#undef arg_0
#define arg_0 6
	// 75106 arg_0           = word ptr  6 ;~ 229A:00BC
#undef arg_2
#define arg_2 8
	// 75107 arg_2           = dword ptr  8 ;~ 229A:00BC
cs=0x229a;eip=0x0000bc; 	X(PUSH(bp));	// 75109 push    bp ;~ 229A:00BC
cs=0x229a;eip=0x0000bd; 	T(MOV(bp, sp));	// 75110 mov     bp, sp ;~ 229A:00BD
cs=0x229a;eip=0x0000bf; 	T(SUB(sp, 0x34));	// 75111 sub     sp, 34h ;~ 229A:00BF
cs=0x229a;eip=0x0000c2; 	X(PUSH(di));	// 75112 push    di ;~ 229A:00C2
cs=0x229a;eip=0x0000c3; 	X(PUSH(si));	// 75113 push    si ;~ 229A:00C3
cs=0x229a;eip=0x0000c4; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 75114 les     bx, dword ptr unk_47AD0 ;~ 229A:00C4
cs=0x229a;eip=0x0000c8; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 75116 push    word ptr es:[bx+8] ;~ 229A:00C8
cs=0x229a;eip=0x0000cc; 	X(PUSH(*(dw*)(raddr(es,bx+6))));	// 75117 push    word ptr es:[bx+6] ;~ 229A:00CC
cs=0x229a;eip=0x0000d0; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 75118 push    word ptr es:[bx+10h] ;~ 229A:00D0
cs=0x229a;eip=0x0000d4; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 75119 push    word ptr es:[bx+0Eh] ;~ 229A:00D4
cs=0x229a;eip=0x0000d8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 75120 les     bx, [bp+arg_2] ;~ 229A:00D8
cs=0x229a;eip=0x0000db; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 75121 push    word ptr es:[bx+2] ;~ 229A:00DB
cs=0x229a;eip=0x0000df; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 75122 push    word ptr es:[bx] ;~ 229A:00DF
cs=0x229a;eip=0x0000e2; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 75123 push    word ptr es:[bx+0Ah] ;~ 229A:00E2
cs=0x229a;eip=0x0000e6; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 75124 push    word ptr es:[bx+8] ;~ 229A:00E6
cs=0x229a;eip=0x0000ea; 	R(CALLF(sub_27e64,0));	// 75125 call    sub_27E64 ;~ 229A:00EA
cs=0x229a;eip=0x0000ef; 	T(MOV(si, ax));	// 75126 mov     si, ax ;~ 229A:00EF
cs=0x229a;eip=0x0000f1; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 75127 les     bx, dword ptr unk_47AD0 ;~ 229A:00F1
cs=0x229a;eip=0x0000f5; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x12))));	// 75128 sub     ax, es:[bx+12h] ;~ 229A:00F5
cs=0x229a;eip=0x0000f9; 	X(PUSH(ax));	// 75129 push    ax ;~ 229A:00F9
cs=0x229a;eip=0x0000fa; 	R(CALLF(sub_24cf8,0));	// 75130 call    sub_24CF8 ;~ 229A:00FA
cs=0x229a;eip=0x0000ff; 	T(MOV(si, ax));	// 75131 mov     si, ax ;~ 229A:00FF
cs=0x229a;eip=0x000101; 	T(CMP(si, 0x5A0));	// 75132 cmp     si, 5A0h ;~ 229A:0101
cs=0x229a;eip=0x000105; 	R(JL(loc_3108e));	// 75133 jl      short loc_3108E ;~ 229A:0105
cs=0x229a;eip=0x000107; 	T(MOV(ax, 0x0B40));	// 75134 mov     ax, 0B40h ;~ 229A:0107
cs=0x229a;eip=0x00010a; 	T(SUB(ax, si));	// 75135 sub     ax, si ;~ 229A:010A
cs=0x229a;eip=0x00010c; 	R(JMP(loc_31092));	// 75136 jmp     short loc_31092 ;~ 229A:010C
loc_3108e:
	// 9262 
cs=0x229a;eip=0x00010e; 	T(MOV(ax, si));	// 75140 mov     ax, si ;~ 229A:010E
cs=0x229a;eip=0x000110; 	T(NEG(ax));	// 75141 neg     ax ;~ 229A:0110
loc_31092:
	// 9263 
cs=0x229a;eip=0x000112; 	T(MOV(si, ax));	// 75144 mov     si, ax ;~ 229A:0112
cs=0x229a;eip=0x000114; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 75145 mov     ax, word ptr [bp+arg_2] ;~ 229A:0114
cs=0x229a;eip=0x000117; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 75146 mov     dx, word ptr [bp+arg_2+2] ;~ 229A:0117
cs=0x229a;eip=0x00011a; 	X(PUSH(si));	// 75147 push    si ;~ 229A:011A
cs=0x229a;eip=0x00011b; 	T(di = bp+var_18);	// 75148 lea     di, [bp+var_18] ;~ 229A:011B
cs=0x229a;eip=0x00011e; 	T(MOV(si, ax));	// 75149 mov     si, ax ;~ 229A:011E
cs=0x229a;eip=0x000120; 	X(PUSH(ss));	// 75150 push    ss ;~ 229A:0120
cs=0x229a;eip=0x000121; 	X(POP(es));	// 75151 pop     es ;~ 229A:0121
cs=0x229a;eip=0x000122; 	X(PUSH(ds));	// 75152 push    ds ;~ 229A:0122
cs=0x229a;eip=0x000123; 	T(MOV(ds, dx));	// 75153 mov     ds, dx ;~ 229A:0123
cs=0x229a;eip=0x000125; 	T(MOV(cx, 6));	// 75154 mov     cx, 6 ;~ 229A:0125
	// 75155 repne movsw ;~ 229A:0128
cs=0x229a;eip=0x000128; 	X(	REPNE MOVSW);	// 75155 repne movsw ;~ 229A:0128
cs=0x229a;eip=0x00012a; 	X(POP(ds));	// 75156 pop     ds ;~ 229A:012A
cs=0x229a;eip=0x00012b; 	X(POP(si));	// 75157 pop     si ;~ 229A:012B
cs=0x229a;eip=0x00012c; 	X(PUSH(*(dw*)((&unk_47ad2))));	// 75158 push    word ptr unk_47AD2 ;~ 229A:012C
cs=0x229a;eip=0x000130; 	X(PUSH(*(dw*)((&unk_47ad0))));	// 75159 push    word ptr unk_47AD0 ;~ 229A:0130
cs=0x229a;eip=0x000134; 	T(ax = bp+var_1e);	// 75160 lea     ax, [bp+var_1E] ;~ 229A:0134
cs=0x229a;eip=0x000137; 	X(PUSH(ss));	// 75161 push    ss ;~ 229A:0137
cs=0x229a;eip=0x000138; 	X(PUSH(ax));	// 75162 push    ax ;~ 229A:0138
cs=0x229a;eip=0x000139; 	R(CALLF(sub_19ba3,0));	// 75163 call    sub_19BA3 ;~ 229A:0139
cs=0x229a;eip=0x00013e; 	T(MOV(cl, 8));	// 75164 mov     cl, 8 ;~ 229A:013E
cs=0x229a;eip=0x000140; 	R(CALLF(sub_10240,0));	// 75165 call    sub_10240 ;~ 229A:0140
cs=0x229a;eip=0x000145; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 75166 mov     [bp+var_4], ax ;~ 229A:0145
cs=0x229a;eip=0x000148; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 75167 mov     [bp+var_2], dx ;~ 229A:0148
cs=0x229a;eip=0x00014b; 	T(OR(dx, dx));	// 75168 or      dx, dx ;~ 229A:014B
cs=0x229a;eip=0x00014d; 	R(JG(loc_310eb));	// 75169 jg      short loc_310EB ;~ 229A:014D
cs=0x229a;eip=0x00014f; 	R(JL(loc_310d6));	// 75170 jl      short loc_310D6 ;~ 229A:014F
cs=0x229a;eip=0x000151; 	T(CMP(ax, 0x14A0));	// 75171 cmp     ax, 14A0h ;~ 229A:0151
cs=0x229a;eip=0x000154; 	R(JNC(loc_310eb));	// 75172 jnb     short loc_310EB ;~ 229A:0154
loc_310d6:
	// 9264 
cs=0x229a;eip=0x000156; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 75175 push    [bp+var_4] ;~ 229A:0156
cs=0x229a;eip=0x000159; 	T(MOV(ax, 0x2131));	// 75176 mov     ax, 2131h ;~ 229A:0159
cs=0x229a;eip=0x00015c; 	X(PUSH(ax));	// 75177 push    ax ;~ 229A:015C
cs=0x229a;eip=0x00015d; 	T(ax = bp+var_34);	// 75178 lea     ax, [bp+var_34] ;~ 229A:015D
cs=0x229a;eip=0x000160; 	X(PUSH(ax));	// 75179 push    ax ;~ 229A:0160
cs=0x229a;eip=0x000161; 	R(CALLF(sub_2f1d9,0));	// 75180 call    sub_2F1D9 ;~ 229A:0161
cs=0x229a;eip=0x000166; 	T(ADD(sp, 6));	// 75181 add     sp, 6 ;~ 229A:0166
cs=0x229a;eip=0x000169; 	R(JMP(loc_31158));	// 75182 jmp     short loc_31158 ;~ 229A:0169
loc_310eb:
	// 9265 
cs=0x229a;eip=0x00016b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 75187 push    [bp+var_2] ;~ 229A:016B
cs=0x229a;eip=0x00016e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 75188 push    [bp+var_4] ;~ 229A:016E
cs=0x229a;eip=0x000171; 	T(MOV(ax, 0x210));	// 75189 mov     ax, 210h ;~ 229A:0171
cs=0x229a;eip=0x000174; 	X(PUSH(ax));	// 75190 push    ax ;~ 229A:0174
cs=0x229a;eip=0x000175; 	R(CALLF(sub_2efe2,0));	// 75191 call    sub_2EFE2 ;~ 229A:0175
cs=0x229a;eip=0x00017a; 	X(PUSH(ax));	// 75192 push    ax ;~ 229A:017A
cs=0x229a;eip=0x00017b; 	T(ax = bp+var_34);	// 75193 lea     ax, [bp+var_34] ;~ 229A:017B
cs=0x229a;eip=0x00017e; 	X(PUSH(ax));	// 75194 push    ax ;~ 229A:017E
cs=0x229a;eip=0x00017f; 	X(PUSH(cs));	// 75195 push    cs ;~ 229A:017F
cs=0x229a;eip=0x000180; 	R(CALL(sub_312c7,0));	// 75196 call    near ptr sub_312C7 ;~ 229A:0180
cs=0x229a;eip=0x000183; 	T(di = bp+var_34);	// 75197 lea     di, [bp+var_34] ;~ 229A:0183
cs=0x229a;eip=0x000186; 	T(MOV(ax, ss));	// 75198 mov     ax, ss ;~ 229A:0186
cs=0x229a;eip=0x000188; 	T(MOV(es, ax));	// 75199 mov     es, ax ;~ 229A:0188
cs=0x229a;eip=0x00018a; 	T(MOV(cx, 0x0FFFF));	// 75200 mov     cx, 0FFFFh ;~ 229A:018A
cs=0x229a;eip=0x00018d; 	T(XOR(ax, ax));	// 75201 xor     ax, ax ;~ 229A:018D
	// 75202 repne scasb ;~ 229A:018F
cs=0x229a;eip=0x00018f; 	T(	REPNE SCASB);	// 75202 repne scasb ;~ 229A:018F
cs=0x229a;eip=0x000191; 	T(NOT(cx));	// 75203 not     cx ;~ 229A:0191
cs=0x229a;eip=0x000193; 	T(DEC(cx));	// 75204 dec     cx ;~ 229A:0193
cs=0x229a;eip=0x000194; 	T(MOV(di, cx));	// 75205 mov     di, cx ;~ 229A:0194
cs=0x229a;eip=0x000196; 	T(ax = bp+di+var_34);	// 75206 lea     ax, [bp+di+var_34] ;~ 229A:0196
cs=0x229a;eip=0x000199; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 75207 mov     [bp+var_6], ax ;~ 229A:0199
cs=0x229a;eip=0x00019c; 	T(MOV(bx, ax));	// 75208 mov     bx, ax ;~ 229A:019C
cs=0x229a;eip=0x00019e; 	T(MOV(di, ax));	// 75209 mov     di, ax ;~ 229A:019E
cs=0x229a;eip=0x0001a0; 	T(MOV(al, *(raddr(ds,di-1))));	// 75210 mov     al, [di-1] ;~ 229A:01A0
cs=0x229a;eip=0x0001a3; 	X(MOV(*(raddr(ds,bx)), al));	// 75211 mov     [bx], al ;~ 229A:01A3
cs=0x229a;eip=0x0001a5; 	X(MOV(*(raddr(ds,bx-1)), 0x2E));	// 75212 mov     byte ptr [bx-1], 2Eh ; '.' ;~ 229A:01A5
cs=0x229a;eip=0x0001a9; 	X(MOV(*(raddr(ds,bx+1)), 0));	// 75213 mov     byte ptr [bx+1], 0 ;~ 229A:01A9
cs=0x229a;eip=0x0001ad; 	X(PUSH(si));	// 75214 push    si ;~ 229A:01AD
cs=0x229a;eip=0x0001ae; 	T(MOV(di, 0x2137));	// 75215 mov     di, 2137h ;~ 229A:01AE
cs=0x229a;eip=0x0001b1; 	T(si = bp+var_34);	// 75216 lea     si, [bp+var_34] ;~ 229A:01B1
cs=0x229a;eip=0x0001b4; 	T(MOV(ax, ds));	// 75217 mov     ax, ds ;~ 229A:01B4
cs=0x229a;eip=0x0001b6; 	T(MOV(es, ax));	// 75218 mov     es, ax ;~ 229A:01B6
cs=0x229a;eip=0x0001b8; 	T(MOV(cx, 0x0FFFF));	// 75220 mov     cx, 0FFFFh ;~ 229A:01B8
cs=0x229a;eip=0x0001bb; 	T(XOR(ax, ax));	// 75221 xor     ax, ax ;~ 229A:01BB
	// 75222 repne scasb ;~ 229A:01BD
cs=0x229a;eip=0x0001bd; 	T(	REPNE SCASB);	// 75222 repne scasb ;~ 229A:01BD
cs=0x229a;eip=0x0001bf; 	T(NOT(cx));	// 75223 not     cx ;~ 229A:01BF
cs=0x229a;eip=0x0001c1; 	T(SUB(di, cx));	// 75224 sub     di, cx ;~ 229A:01C1
cs=0x229a;eip=0x0001c3; 	T(MOV(bx, cx));	// 75225 mov     bx, cx ;~ 229A:01C3
cs=0x229a;eip=0x0001c5; 	T(XCHG(di, si));	// 75226 xchg    di, si ;~ 229A:01C5
cs=0x229a;eip=0x0001c7; 	T(MOV(cx, 0x0FFFF));	// 75227 mov     cx, 0FFFFh ;~ 229A:01C7
	// 75228 repne scasb ;~ 229A:01CA
cs=0x229a;eip=0x0001ca; 	T(	REPNE SCASB);	// 75228 repne scasb ;~ 229A:01CA
cs=0x229a;eip=0x0001cc; 	T(DEC(di));	// 75229 dec     di ;~ 229A:01CC
cs=0x229a;eip=0x0001cd; 	T(MOV(cx, bx));	// 75230 mov     cx, bx ;~ 229A:01CD
cs=0x229a;eip=0x0001cf; 	T(SHR(cx, 1));	// 75231 shr     cx, 1 ;~ 229A:01CF
	// 75232 repne movsw ;~ 229A:01D1
cs=0x229a;eip=0x0001d1; 	X(	REPNE MOVSW);	// 75232 repne movsw ;~ 229A:01D1
cs=0x229a;eip=0x0001d3; 	T(ADC(cx, cx));	// 75233 adc     cx, cx ;~ 229A:01D3
	// 75234 repne movsb ;~ 229A:01D5
cs=0x229a;eip=0x0001d5; 	X(	REPNE MOVSB);	// 75234 repne movsb ;~ 229A:01D5
cs=0x229a;eip=0x0001d7; 	X(POP(si));	// 75235 pop     si ;~ 229A:01D7
loc_31158:
	// 9266 
cs=0x229a;eip=0x0001d8; 	T(ax = si+4);	// 75238 lea     ax, [si+4] ;~ 229A:01D8
cs=0x229a;eip=0x0001db; 	T(MOV(cl, 3));	// 75239 mov     cl, 3 ;~ 229A:01DB
cs=0x229a;eip=0x0001dd; 	T(SAR(ax, cl));	// 75240 sar     ax, cl ;~ 229A:01DD
cs=0x229a;eip=0x0001df; 	X(PUSH(ax));	// 75241 push    ax ;~ 229A:01DF
cs=0x229a;eip=0x0001e0; 	T(ax = bp+var_34);	// 75242 lea     ax, [bp+var_34] ;~ 229A:01E0
cs=0x229a;eip=0x0001e3; 	X(PUSH(ax));	// 75243 push    ax ;~ 229A:01E3
cs=0x229a;eip=0x0001e4; 	T(MOV(ax, 0x213B));	// 75244 mov     ax, 213Bh ;~ 229A:01E4
cs=0x229a;eip=0x0001e7; 	X(PUSH(ax));	// 75245 push    ax ;~ 229A:01E7
cs=0x229a;eip=0x0001e8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 75246 push    [bp+arg_0] ;~ 229A:01E8
cs=0x229a;eip=0x0001eb; 	R(CALLF(sub_2f1d9,0));	// 75247 call    sub_2F1D9 ;~ 229A:01EB
cs=0x229a;eip=0x0001f0; 	T(ADD(sp, 8));	// 75248 add     sp, 8 ;~ 229A:01F0
cs=0x229a;eip=0x0001f3; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 75249 cmp     [bp+var_2], 0 ;~ 229A:01F3
cs=0x229a;eip=0x0001f7; 	R(JZ(loc_3117e));	// 75250 jz      short loc_3117E ;~ 229A:01F7
cs=0x229a;eip=0x0001f9; 	T(MOV(ax, 0x0FFFF));	// 75251 mov     ax, 0FFFFh ;~ 229A:01F9
cs=0x229a;eip=0x0001fc; 	R(JMP(loc_31181));	// 75252 jmp     short loc_31181 ;~ 229A:01FC
loc_3117e:
	// 9267 
cs=0x229a;eip=0x0001fe; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 75256 mov     ax, [bp+var_4] ;~ 229A:01FE
loc_31181:
	// 9268 
cs=0x229a;eip=0x000201; 	X(POP(si));	// 75259 pop     si ;~ 229A:0201
cs=0x229a;eip=0x000202; 	X(POP(di));	// 75260 pop     di ;~ 229A:0202
cs=0x229a;eip=0x000203; 	T(MOV(sp, bp));	// 75261 mov     sp, bp ;~ 229A:0203
cs=0x229a;eip=0x000205; 	X(POP(bp));	// 75262 pop     bp ;~ 229A:0205
cs=0x229a;eip=0x000206; 	R(RETF(0));	// 75263 retf ;~ 229A:0206
seg020_proc:
	// 75267 
cs=0x229a;eip=0x000207; 	X(PUSH(bp));	// 75267 push    bp ;~ 229A:0207
cs=0x229a;eip=0x000208; 	T(MOV(bp, sp));	// 75268 mov     bp, sp ;~ 229A:0208
cs=0x229a;eip=0x00020a; 	T(SUB(sp, 0x0C8));	// 75269 sub     sp, 0C8h ;~ 229A:020A
cs=0x229a;eip=0x00020e; 	X(PUSH(*(dw*)(raddr(ss,bp+0x1E))));	// 75270 push    word ptr [bp+1Eh] ;~ 229A:020E
cs=0x229a;eip=0x000211; 	X(PUSH(*(dw*)(raddr(ss,bp+0x1C))));	// 75271 push    word ptr [bp+1Ch] ;~ 229A:0211
cs=0x229a;eip=0x000214; 	X(PUSH(*(dw*)(raddr(ss,bp+0x1A))));	// 75272 push    word ptr [bp+1Ah] ;~ 229A:0214
cs=0x229a;eip=0x000217; 	X(PUSH(*(dw*)(raddr(ss,bp+0x18))));	// 75273 push    word ptr [bp+18h] ;~ 229A:0217
cs=0x229a;eip=0x00021a; 	X(PUSH(*(dw*)(raddr(ss,bp+0x16))));	// 75274 push    word ptr [bp+16h] ;~ 229A:021A
cs=0x229a;eip=0x00021d; 	X(PUSH(*(dw*)(raddr(ss,bp+0x14))));	// 75275 push    word ptr [bp+14h] ;~ 229A:021D
cs=0x229a;eip=0x000220; 	X(PUSH(*(dw*)(raddr(ss,bp+0x12))));	// 75276 push    word ptr [bp+12h] ;~ 229A:0220
cs=0x229a;eip=0x000223; 	X(PUSH(*(dw*)(raddr(ss,bp+0x10))));	// 75277 push    word ptr [bp+10h] ;~ 229A:0223
cs=0x229a;eip=0x000226; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0E))));	// 75278 push    word ptr [bp+0Eh] ;~ 229A:0226
cs=0x229a;eip=0x000229; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 75279 push    word ptr [bp+0Ch] ;~ 229A:0229
cs=0x229a;eip=0x00022c; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0A))));	// 75280 push    word ptr [bp+0Ah] ;~ 229A:022C
cs=0x229a;eip=0x00022f; 	X(PUSH(*(dw*)(raddr(ss,bp+8))));	// 75281 push    word ptr [bp+8] ;~ 229A:022F
cs=0x229a;eip=0x000232; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 75282 push    word ptr [bp+6] ;~ 229A:0232
cs=0x229a;eip=0x000235; 	T(ax = bp-0x0C8);	// 75283 lea     ax, [bp-0C8h] ;~ 229A:0235
cs=0x229a;eip=0x000239; 	X(PUSH(ax));	// 75284 push    ax ;~ 229A:0239
cs=0x229a;eip=0x00023a; 	R(CALLF(sub_2f1d9,0));	// 75285 call    sub_2F1D9 ;~ 229A:023A
cs=0x229a;eip=0x00023f; 	T(ADD(sp, 0x1C));	// 75286 add     sp, 1Ch ;~ 229A:023F
cs=0x229a;eip=0x000242; 	T(ax = bp-0x0C8);	// 75287 lea     ax, [bp-0C8h] ;~ 229A:0242
cs=0x229a;eip=0x000246; 	X(PUSH(ax));	// 75288 push    ax ;~ 229A:0246
cs=0x229a;eip=0x000247; 	R(CALLF(sub_2f3f8,0));	// 75289 call    sub_2F3F8 ;~ 229A:0247
cs=0x229a;eip=0x00024c; 	T(MOV(sp, bp));	// 75290 mov     sp, bp ;~ 229A:024C
cs=0x229a;eip=0x00024e; 	X(POP(bp));	// 75291 pop     bp ;~ 229A:024E
cs=0x229a;eip=0x00024f; 	R(RETF(0));	// 75292 retf ;~ 229A:024F
cs=0x229a;eip=0x000643; 	T(MOV(sp, bp));	// 75903 mov     sp, bp ;~ 229A:0643
cs=0x229a;eip=0x000645; 	X(POP(bp));	// 75904 pop     bp ;~ 229A:0645
cs=0x229a;eip=0x000646; 	R(RETF(2));	// 75905 retf    2 ;~ 229A:0646
cs=0x229a;eip=0x00065d; 	R(RETF(0));	// 75923 retf ;~ 229A:065D
cs=0x229a;eip=0x00068b; 	T(MOV(sp, bp));	// 75955 mov     sp, bp ;~ 229A:068B
cs=0x229a;eip=0x00068d; 	X(POP(bp));	// 75956 pop     bp ;~ 229A:068D
cs=0x229a;eip=0x00068e; 	R(RETN(2));	// 75957 retn    2 ;~ 229A:068E
ret_229a_691:
	// 9288 
cs=0x229a;eip=0x000691; 	X(PUSH(bp));	// 75959 push    bp ;~ 229A:0691
cs=0x229a;eip=0x000692; 	T(MOV(bp, sp));	// 75960 mov     bp, sp ;~ 229A:0692
cs=0x229a;eip=0x000694; 	T(SUB(sp, 4));	// 75961 sub     sp, 4 ;~ 229A:0694
cs=0x229a;eip=0x000697; 	X(PUSH(di));	// 75962 push    di ;~ 229A:0697
cs=0x229a;eip=0x000698; 	X(PUSH(si));	// 75963 push    si ;~ 229A:0698
cs=0x229a;eip=0x000699; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 75964 mov     di, [bp+6] ;~ 229A:0699
cs=0x229a;eip=0x00069c; 	T(MOV(si, *(dw*)(raddr(ss,bp+8))));	// 75965 mov     si, [bp+8] ;~ 229A:069C
cs=0x229a;eip=0x00069f; 	R(JMP(loc_31625));	// 75966 jmp     short loc_31625 ;~ 229A:069F
loc_31621:
	// 9289 
cs=0x229a;eip=0x0006a1; 	X(PUSH(si));	// 75970 push    si ;~ 229A:06A1
cs=0x229a;eip=0x0006a2; 	R(CALL(sub_315de,0));	// 75971 call    sub_315DE ;~ 229A:06A2
loc_31625:
	// 9290 
cs=0x229a;eip=0x0006a5; 	X(PUSH(si));	// 75975 push    si ;~ 229A:06A5
cs=0x229a;eip=0x0006a6; 	X(PUSH(di));	// 75976 push    di ;~ 229A:06A6
cs=0x229a;eip=0x0006a7; 	R(CALLF(sub_30a14,0));	// 75977 call    sub_30A14 ;~ 229A:06A7
cs=0x229a;eip=0x0006ac; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 75978 mov     [bp-4], ax ;~ 229A:06AC
cs=0x229a;eip=0x0006af; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 75979 mov     [bp-2], dx ;~ 229A:06AF
cs=0x229a;eip=0x0006b2; 	T(MOV(ax, dx));	// 75980 mov     ax, dx ;~ 229A:06B2
cs=0x229a;eip=0x0006b4; 	T(OR(ax, ax));	// 75981 or      ax, ax ;~ 229A:06B4
cs=0x229a;eip=0x0006b6; 	R(JZ(loc_31621));	// 75982 jz      short loc_31621 ;~ 229A:06B6
cs=0x229a;eip=0x0006b8; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 75983 mov     ax, [bp-4] ;~ 229A:06B8
cs=0x229a;eip=0x0006bb; 	X(POP(si));	// 75984 pop     si ;~ 229A:06BB
cs=0x229a;eip=0x0006bc; 	X(POP(di));	// 75985 pop     di ;~ 229A:06BC
cs=0x229a;eip=0x0006bd; 	T(MOV(sp, bp));	// 75986 mov     sp, bp ;~ 229A:06BD
cs=0x229a;eip=0x0006bf; 	X(POP(bp));	// 75987 pop     bp ;~ 229A:06BF
cs=0x229a;eip=0x0006c0; 	R(RETF(4));	// 75988 retf    4 ;~ 229A:06C0
cs=0x229a;eip=0x000844; 	X(PUSH(bp));	// 76261 push    bp ;~ 229A:0844
cs=0x229a;eip=0x000845; 	T(MOV(bp, sp));	// 76262 mov     bp, sp ;~ 229A:0845
cs=0x229a;eip=0x000847; 	T(SUB(sp, 2));	// 76263 sub     sp, 2 ;~ 229A:0847
cs=0x229a;eip=0x00084a; 	X(PUSH(si));	// 76264 push    si ;~ 229A:084A
cs=0x229a;eip=0x00084b; 	T(LES(bx, *(dw*)(raddr(ss,bp+6))));	// 76265 les     bx, [bp+6] ;~ 229A:084B
cs=0x229a;eip=0x00084e; 	T(MOV(si, *(dw*)(raddr(es,bx))));	// 76267 mov     si, es:[bx] ;~ 229A:084E
cs=0x229a;eip=0x000851; 	T(CMP(si, 0x6CB6));	// 76268 cmp     si, 6CB6h ;~ 229A:0851
cs=0x229a;eip=0x000855; 	R(JZ(loc_3180d));	// 76269 jz      short loc_3180D ;~ 229A:0855
cs=0x229a;eip=0x000857; 	T(CMP(si, 0x6D3C));	// 76270 cmp     si, 6D3Ch ;~ 229A:0857
cs=0x229a;eip=0x00085b; 	R(JZ(loc_3180d));	// 76271 jz      short loc_3180D ;~ 229A:085B
cs=0x229a;eip=0x00085d; 	T(CMP(si, 0x6DC2));	// 76272 cmp     si, 6DC2h ;~ 229A:085D
cs=0x229a;eip=0x000861; 	R(JZ(loc_3180d));	// 76273 jz      short loc_3180D ;~ 229A:0861
cs=0x229a;eip=0x000863; 	T(CMP(si, 0x0BDD0));	// 76274 cmp     si, 0BDD0h ;~ 229A:0863
cs=0x229a;eip=0x000867; 	R(JZ(loc_3180d));	// 76275 jz      short loc_3180D ;~ 229A:0867
cs=0x229a;eip=0x000869; 	T(CMP(si, 0x0BE40));	// 76276 cmp     si, 0BE40h ;~ 229A:0869
cs=0x229a;eip=0x00086d; 	R(JZ(loc_3180d));	// 76277 jz      short loc_3180D ;~ 229A:086D
cs=0x229a;eip=0x00086f; 	T(CMP(si, 0x0BEB0));	// 76278 cmp     si, 0BEB0h ;~ 229A:086F
cs=0x229a;eip=0x000873; 	R(JZ(loc_3180d));	// 76279 jz      short loc_3180D ;~ 229A:0873
cs=0x229a;eip=0x000875; 	T(CMP(si, 0x45AC));	// 76280 cmp     si, 45ACh ;~ 229A:0875
cs=0x229a;eip=0x000879; 	R(JZ(loc_3180d));	// 76281 jz      short loc_3180D ;~ 229A:0879
cs=0x229a;eip=0x00087b; 	T(CMP(si, 0x0AF70));	// 76282 cmp     si, 0AF70h ;~ 229A:087B
cs=0x229a;eip=0x00087f; 	R(JZ(loc_3180d));	// 76283 jz      short loc_3180D ;~ 229A:087F
cs=0x229a;eip=0x000881; 	T(CMP(si, 0x0AE48));	// 76284 cmp     si, 0AE48h ;~ 229A:0881
cs=0x229a;eip=0x000885; 	R(JZ(loc_3180d));	// 76285 jz      short loc_3180D ;~ 229A:0885
cs=0x229a;eip=0x000887; 	T(CMP(si, 0x0AE92));	// 76286 cmp     si, 0AE92h ;~ 229A:0887
cs=0x229a;eip=0x00088b; 	R(JNZ(loc_31823));	// 76287 jnz     short loc_31823 ;~ 229A:088B
loc_3180d:
	// 9300 
cs=0x229a;eip=0x00088d; 	T(CMP(unk_57041, 0));	// 76291 cmp     byte ptr unk_57041, 0 ;~ 229A:088D
cs=0x229a;eip=0x000892; 	R(JNZ(loc_3181b));	// 76292 jnz     short loc_3181B ;~ 229A:0892
cs=0x229a;eip=0x000894; 	X(AND(*(raddr(es,bx+2)), 0x0FE));	// 76293 and     byte ptr es:[bx+2], 0FEh ;~ 229A:0894
cs=0x229a;eip=0x000899; 	R(JMP(loc_31823));	// 76294 jmp     short loc_31823 ;~ 229A:0899
loc_3181b:
	// 9301 
cs=0x229a;eip=0x00089b; 	T(LES(bx, *(dw*)(raddr(ss,bp+6))));	// 76298 les     bx, [bp+6] ;~ 229A:089B
cs=0x229a;eip=0x00089e; 	X(OR(*(raddr(es,bx+2)), 1));	// 76299 or      byte ptr es:[bx+2], 1 ;~ 229A:089E
loc_31823:
	// 9302 
cs=0x229a;eip=0x0008a3; 	X(POP(si));	// 76303 pop     si ;~ 229A:08A3
cs=0x229a;eip=0x0008a4; 	T(MOV(sp, bp));	// 76304 mov     sp, bp ;~ 229A:08A4
cs=0x229a;eip=0x0008a6; 	X(POP(bp));	// 76305 pop     bp ;~ 229A:08A6
cs=0x229a;eip=0x0008a7; 	R(RETF(0));	// 76306 retf ;~ 229A:08A7
cs=0x229a;eip=0x000935; 	R(RETF(0));	// 76408 retf ;~ 229A:0935
sub_311d0:
	// 75298 
#undef arg_0
#define arg_0 6
	// 75301 arg_0           = byte ptr  6 ;~ 229A:0250
#undef arg_2
#define arg_2 8
	// 75302 arg_2           = word ptr  8 ;~ 229A:0250
cs=0x229a;eip=0x000250; 	X(PUSH(bp));	// 75304 push    bp ;~ 229A:0250
cs=0x229a;eip=0x000251; 	T(MOV(bp, sp));	// 75305 mov     bp, sp ;~ 229A:0251
cs=0x229a;eip=0x000253; 	T(SUB(sp, 2));	// 75306 sub     sp, 2 ;~ 229A:0253
cs=0x229a;eip=0x000256; 	X(PUSH(di));	// 75307 push    di ;~ 229A:0256
cs=0x229a;eip=0x000257; 	X(PUSH(si));	// 75308 push    si ;~ 229A:0257
cs=0x229a;eip=0x000258; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 75309 mov     si, [bp+arg_2] ;~ 229A:0258
cs=0x229a;eip=0x00025b; 	T(OR(si, si));	// 75310 or      si, si ;~ 229A:025B
cs=0x229a;eip=0x00025d; 	R(JNZ(loc_311e4));	// 75311 jnz     short loc_311E4 ;~ 229A:025D
cs=0x229a;eip=0x00025f; 	T(MOV(ax, 0x21DE));	// 75312 mov     ax, 21DEh ;~ 229A:025F
cs=0x229a;eip=0x000262; 	R(JMP(loc_31211));	// 75313 jmp     short loc_31211 ;~ 229A:0262
loc_311e4:
	// 9269 
cs=0x229a;eip=0x000264; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 75317 cmp     [bp+arg_0], 0 ;~ 229A:0264
cs=0x229a;eip=0x000268; 	R(JNZ(loc_31200));	// 75318 jnz     short loc_31200 ;~ 229A:0268
cs=0x229a;eip=0x00026a; 	T(MOV(di, 0x21EA));	// 75319 mov     di, 21EAh ;~ 229A:026A
cs=0x229a;eip=0x00026d; 	R(JMP(loc_311f2));	// 75320 jmp     short loc_311F2 ;~ 229A:026D
loc_311ef:
	// 9270 
cs=0x229a;eip=0x00026f; 	T(ADD(di, 4));	// 75324 add     di, 4 ;~ 229A:026F
loc_311f2:
	// 9271 
cs=0x229a;eip=0x000272; 	T(CMP(*(dw*)(raddr(ds,di)), 0));	// 75327 cmp     word ptr [di], 0 ;~ 229A:0272
cs=0x229a;eip=0x000275; 	R(JZ(loc_31200));	// 75328 jz      short loc_31200 ;~ 229A:0275
cs=0x229a;eip=0x000277; 	T(CMP(*(dw*)(raddr(ds,di)), si));	// 75329 cmp     [di], si ;~ 229A:0277
cs=0x229a;eip=0x000279; 	R(JNZ(loc_311ef));	// 75330 jnz     short loc_311EF ;~ 229A:0279
loc_311fb:
	// 9272 
cs=0x229a;eip=0x00027b; 	T(MOV(ax, *(dw*)(raddr(ds,di+2))));	// 75333 mov     ax, [di+2] ;~ 229A:027B
cs=0x229a;eip=0x00027e; 	R(JMP(loc_31211));	// 75334 jmp     short loc_31211 ;~ 229A:027E
loc_31200:
	// 9273 
cs=0x229a;eip=0x000280; 	T(MOV(di, 0x21FE));	// 75339 mov     di, 21FEh ;~ 229A:0280
cs=0x229a;eip=0x000283; 	R(JMP(loc_3120c));	// 75340 jmp     short loc_3120C ;~ 229A:0283
loc_31205:
	// 9274 
cs=0x229a;eip=0x000285; 	T(CMP(*(dw*)(raddr(ds,di)), si));	// 75344 cmp     [di], si ;~ 229A:0285
cs=0x229a;eip=0x000287; 	R(JZ(loc_311fb));	// 75345 jz      short loc_311FB ;~ 229A:0287
cs=0x229a;eip=0x000289; 	T(ADD(di, 4));	// 75346 add     di, 4 ;~ 229A:0289
loc_3120c:
	// 9275 
cs=0x229a;eip=0x00028c; 	T(CMP(*(dw*)(raddr(ds,di)), 0));	// 75349 cmp     word ptr [di], 0 ;~ 229A:028C
cs=0x229a;eip=0x00028f; 	R(JNZ(loc_31205));	// 75350 jnz     short loc_31205 ;~ 229A:028F
loc_31211:
	// 9276 
cs=0x229a;eip=0x000291; 	X(POP(si));	// 75354 pop     si ;~ 229A:0291
cs=0x229a;eip=0x000292; 	X(POP(di));	// 75355 pop     di ;~ 229A:0292
cs=0x229a;eip=0x000293; 	T(MOV(sp, bp));	// 75356 mov     sp, bp ;~ 229A:0293
cs=0x229a;eip=0x000295; 	X(POP(bp));	// 75357 pop     bp ;~ 229A:0295
cs=0x229a;eip=0x000296; 	R(RETF(4));	// 75358 retf    4 ;~ 229A:0296
sub_31219:
	// 75365 
cs=0x229a;eip=0x000299; 	X(PUSH(di));	// 75366 push    di ;~ 229A:0299
cs=0x229a;eip=0x00029a; 	X(MOV(*(dw*)((&unk_5520b)), 0));	// 75367 mov     word ptr unk_5520B, 0 ;~ 229A:029A
cs=0x229a;eip=0x0002a0; 	T(MOV(ax, word_5705a));	// 75368 mov     ax, word_5705A ;~ 229A:02A0
cs=0x229a;eip=0x0002a3; 	T(MOV(dx, word_5705c));	// 75369 mov     dx, word_5705C ;~ 229A:02A3
cs=0x229a;eip=0x0002a7; 	X(MOV(*(dw*)((&unk_5430c)), ax));	// 75370 mov     word ptr unk_5430C, ax ;~ 229A:02A7
cs=0x229a;eip=0x0002aa; 	X(MOV(*(dw*)((&unk_5430e)), dx));	// 75371 mov     word ptr unk_5430E, dx ;~ 229A:02AA
cs=0x229a;eip=0x0002ae; 	T(MOV(cx, 0x20));	// 75372 mov     cx, 20h ; ' ' ;~ 229A:02AE
cs=0x229a;eip=0x0002b1; 	T(MOV(di, 0x0C93A));	// 75373 mov     di, 0C93Ah ;~ 229A:02B1
cs=0x229a;eip=0x0002b4; 	T(MOV(ax, ds));	// 75374 mov     ax, ds ;~ 229A:02B4
cs=0x229a;eip=0x0002b6; 	T(MOV(es, ax));	// 75375 mov     es, ax ;~ 229A:02B6
cs=0x229a;eip=0x0002b8; 	T(SUB(ax, ax));	// 75376 sub     ax, ax ;~ 229A:02B8
	// 75377 repne stosb ;~ 229A:02BA
cs=0x229a;eip=0x0002ba; 	R(REPNE STOSB);	// 75377 repne stosb ;~ 229A:02BA
cs=0x229a;eip=0x0002bc; 	X(POP(di));	// 75378 pop     di ;~ 229A:02BC
cs=0x229a;eip=0x0002bd; 	R(RETF(0));	// 75379 retf ;~ 229A:02BD
sub_3123e:
	// 75387 
cs=0x229a;eip=0x0002be; 	X(PUSH(bp));	// 75388 push    bp ;~ 229A:02BE
cs=0x229a;eip=0x0002bf; 	T(MOV(bp, sp));	// 75389 mov     bp, sp ;~ 229A:02BF
cs=0x229a;eip=0x0002c1; 	T(SUB(sp, 2));	// 75390 sub     sp, 2 ;~ 229A:02C1
cs=0x229a;eip=0x0002c4; 	X(PUSH(si));	// 75391 push    si ;~ 229A:02C4
cs=0x229a;eip=0x0002c5; 	R(JMP(loc_31270));	// 75392 jmp     short loc_31270 ;~ 229A:02C5
loc_31247:
	// 9277 
cs=0x229a;eip=0x0002c7; 	X(ADD(*(dw*)((&unk_5430c)), 8));	// 75397 add     word ptr unk_5430C, 8 ;~ 229A:02C7
cs=0x229a;eip=0x0002cc; 	X(ADC(*(dw*)((&unk_5430e)), 0));	// 75398 adc     word ptr unk_5430E, 0 ;~ 229A:02CC
cs=0x229a;eip=0x0002d1; 	T(MOV(ax, 0x1E));	// 75399 mov     ax, 1Eh ;~ 229A:02D1
cs=0x229a;eip=0x0002d4; 	X(PUSH(ax));	// 75400 push    ax ;~ 229A:02D4
cs=0x229a;eip=0x0002d5; 	T(MOV(ax, 0x0C93C));	// 75401 mov     ax, 0C93Ch ;~ 229A:02D5
cs=0x229a;eip=0x0002d8; 	X(PUSH(ax));	// 75402 push    ax ;~ 229A:02D8
cs=0x229a;eip=0x0002d9; 	T(MOV(ax, 0x0C93A));	// 75403 mov     ax, 0C93Ah ;~ 229A:02D9
cs=0x229a;eip=0x0002dc; 	X(PUSH(ax));	// 75404 push    ax ;~ 229A:02DC
cs=0x229a;eip=0x0002dd; 	R(CALLF(sub_104b8,0));	// 75405 call    sub_104B8 ;~ 229A:02DD
cs=0x229a;eip=0x0002e2; 	T(ADD(sp, 6));	// 75406 add     sp, 6 ;~ 229A:02E2
cs=0x229a;eip=0x0002e5; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 75407 les     bx, dword ptr unk_47AD0 ;~ 229A:02E5
cs=0x229a;eip=0x0002e9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x16))));	// 75409 mov     ax, es:[bx+16h] ;~ 229A:02E9
cs=0x229a;eip=0x0002ed; 	X(MOV(*(dw*)((&unk_54308)), ax));	// 75410 mov     word ptr unk_54308, ax ;~ 229A:02ED
loc_31270:
	// 9278 
cs=0x229a;eip=0x0002f0; 	T(MOV(ax, *(dw*)((&unk_5430c))));	// 75413 mov     ax, word ptr unk_5430C ;~ 229A:02F0
cs=0x229a;eip=0x0002f3; 	T(MOV(dx, *(dw*)((&unk_5430e))));	// 75414 mov     dx, word ptr unk_5430E ;~ 229A:02F3
cs=0x229a;eip=0x0002f7; 	T(ADD(ax, 8));	// 75415 add     ax, 8 ;~ 229A:02F7
cs=0x229a;eip=0x0002fa; 	T(ADC(dx, 0));	// 75416 adc     dx, 0 ;~ 229A:02FA
cs=0x229a;eip=0x0002fd; 	T(CMP(dx, word_5705c));	// 75417 cmp     dx, word_5705C ;~ 229A:02FD
cs=0x229a;eip=0x000301; 	R(JG(loc_3128b));	// 75418 jg      short loc_3128B ;~ 229A:0301
cs=0x229a;eip=0x000303; 	R(JL(loc_31247));	// 75419 jl      short loc_31247 ;~ 229A:0303
cs=0x229a;eip=0x000305; 	T(CMP(ax, word_5705a));	// 75420 cmp     ax, word_5705A ;~ 229A:0305
cs=0x229a;eip=0x000309; 	R(JBE(loc_31247));	// 75421 jbe     short loc_31247 ;~ 229A:0309
loc_3128b:
	// 9279 
cs=0x229a;eip=0x00030b; 	T(MOV(si, word_5705a));	// 75424 mov     si, word_5705A ;~ 229A:030B
cs=0x229a;eip=0x00030f; 	T(SUB(si, *(dw*)((&unk_5430a))));	// 75425 sub     si, word ptr unk_5430A ;~ 229A:030F
cs=0x229a;eip=0x000313; 	R(JNZ(loc_31298));	// 75426 jnz     short loc_31298 ;~ 229A:0313
cs=0x229a;eip=0x000315; 	T(MOV(si, 1));	// 75427 mov     si, 1 ;~ 229A:0315
loc_31298:
	// 9280 
cs=0x229a;eip=0x000318; 	X(PUSH(*(dw*)((&unk_5520b))));	// 75430 push    word ptr unk_5520B ;~ 229A:0318
cs=0x229a;eip=0x00031c; 	X(PUSH(*(dw*)((&unk_542ea))));	// 75431 push    word ptr unk_542EA ;~ 229A:031C
cs=0x229a;eip=0x000320; 	T(MOV(ax, 0x0F0));	// 75432 mov     ax, 0F0h ; 'ğ' ;~ 229A:0320
cs=0x229a;eip=0x000323; 	T(IMUL1_2(si));	// 75433 imul    si ;~ 229A:0323
cs=0x229a;eip=0x000325; 	T(CWD);	// 75434 cwd ;~ 229A:0325
cs=0x229a;eip=0x000326; 	T(XOR(ax, dx));	// 75435 xor     ax, dx ;~ 229A:0326
cs=0x229a;eip=0x000328; 	T(SUB(ax, dx));	// 75436 sub     ax, dx ;~ 229A:0328
cs=0x229a;eip=0x00032a; 	T(MOV(cx, 8));	// 75437 mov     cx, 8 ;~ 229A:032A
cs=0x229a;eip=0x00032d; 	T(SAR(ax, cl));	// 75438 sar     ax, cl ;~ 229A:032D
cs=0x229a;eip=0x00032f; 	T(XOR(ax, dx));	// 75439 xor     ax, dx ;~ 229A:032F
cs=0x229a;eip=0x000331; 	T(SUB(ax, dx));	// 75440 sub     ax, dx ;~ 229A:0331
cs=0x229a;eip=0x000333; 	X(PUSH(ax));	// 75441 push    ax ;~ 229A:0333
cs=0x229a;eip=0x000334; 	R(CALLF(sub_13561,0));	// 75442 call    sub_13561 ;~ 229A:0334
cs=0x229a;eip=0x000339; 	X(MOV(*(dw*)((&unk_5520b)), ax));	// 75443 mov     word ptr unk_5520B, ax ;~ 229A:0339
cs=0x229a;eip=0x00033c; 	T(MOV(ax, word_5705a));	// 75444 mov     ax, word_5705A ;~ 229A:033C
cs=0x229a;eip=0x00033f; 	X(MOV(*(dw*)((&unk_5430a)), ax));	// 75445 mov     word ptr unk_5430A, ax ;~ 229A:033F
cs=0x229a;eip=0x000342; 	X(POP(si));	// 75446 pop     si ;~ 229A:0342
cs=0x229a;eip=0x000343; 	T(MOV(sp, bp));	// 75447 mov     sp, bp ;~ 229A:0343
cs=0x229a;eip=0x000345; 	X(POP(bp));	// 75448 pop     bp ;~ 229A:0345
cs=0x229a;eip=0x000346; 	R(RETF(0));	// 75449 retf ;~ 229A:0346
sub_312c7:
	// 75457 
#undef arg_0
#define arg_0 6
	// 75460 arg_0           = word ptr  6 ;~ 229A:0347
#undef arg_2
#define arg_2 8
	// 75461 arg_2           = word ptr  8 ;~ 229A:0347
cs=0x229a;eip=0x000347; 	X(PUSH(bp));	// 75463 push    bp ;~ 229A:0347
cs=0x229a;eip=0x000348; 	T(MOV(bp, sp));	// 75464 mov     bp, sp ;~ 229A:0348
cs=0x229a;eip=0x00034a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 75465 push    [bp+arg_2] ;~ 229A:034A
cs=0x229a;eip=0x00034d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 75466 push    [bp+arg_0] ;~ 229A:034D
cs=0x229a;eip=0x000350; 	T(MOV(ax, 0x0FFFF));	// 75467 mov     ax, 0FFFFh ;~ 229A:0350
cs=0x229a;eip=0x000353; 	X(PUSH(ax));	// 75468 push    ax ;~ 229A:0353
cs=0x229a;eip=0x000354; 	T(MOV(ax, 0x20));	// 75469 mov     ax, 20h ; ' ' ;~ 229A:0354
cs=0x229a;eip=0x000357; 	X(PUSH(ax));	// 75470 push    ax ;~ 229A:0357
cs=0x229a;eip=0x000358; 	R(CALLF(sub_2f12e,0));	// 75471 call    sub_2F12E ;~ 229A:0358
cs=0x229a;eip=0x00035d; 	X(POP(bp));	// 75472 pop     bp ;~ 229A:035D
cs=0x229a;eip=0x00035e; 	R(RETF(4));	// 75473 retf    4 ;~ 229A:035E
sub_312e1:
	// 75481 
#undef var_6
#define var_6 -6
	// 75483 var_6           = word ptr -6 ;~ 229A:0361
#undef var_4
#define var_4 -4
	// 75484 var_4           = word ptr -4 ;~ 229A:0361
#undef var_2
#define var_2 -2
	// 75485 var_2           = byte ptr -2 ;~ 229A:0361
cs=0x229a;eip=0x000361; 	X(PUSH(bp));	// 75487 push    bp ;~ 229A:0361
cs=0x229a;eip=0x000362; 	T(MOV(bp, sp));	// 75488 mov     bp, sp ;~ 229A:0362
cs=0x229a;eip=0x000364; 	T(SUB(sp, 6));	// 75489 sub     sp, 6 ;~ 229A:0364
cs=0x229a;eip=0x000367; 	T(MOV(ax, 0x222A));	// 75490 mov     ax, 222Ah ;~ 229A:0367
cs=0x229a;eip=0x00036a; 	X(PUSH(ax));	// 75491 push    ax ;~ 229A:036A
cs=0x229a;eip=0x00036b; 	T(ax = bp+var_2);	// 75492 lea     ax, [bp+var_2] ;~ 229A:036B
cs=0x229a;eip=0x00036e; 	X(PUSH(ax));	// 75493 push    ax ;~ 229A:036E
cs=0x229a;eip=0x00036f; 	X(PUSH(cs));	// 75494 push    cs ;~ 229A:036F
cs=0x229a;eip=0x000370; 	R(CALL(sub_31643,0));	// 75495 call    near ptr sub_31643 ;~ 229A:0370
cs=0x229a;eip=0x000373; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 75496 mov     [bp+var_6], ax ;~ 229A:0373
cs=0x229a;eip=0x000376; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 75497 mov     [bp+var_4], dx ;~ 229A:0376
cs=0x229a;eip=0x000379; 	X(PUSH(dx));	// 75498 push    dx ;~ 229A:0379
cs=0x229a;eip=0x00037a; 	X(PUSH(ax));	// 75499 push    ax ;~ 229A:037A
cs=0x229a;eip=0x00037b; 	R(CALLF(sub_2f06b,0));	// 75500 call    sub_2F06B ;~ 229A:037B
cs=0x229a;eip=0x000380; 	T(ADD(sp, 4));	// 75501 add     sp, 4 ;~ 229A:0380
cs=0x229a;eip=0x000383; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 75502 push    [bp+var_4] ;~ 229A:0383
cs=0x229a;eip=0x000386; 	R(CALLF(sub_2397c,0));	// 75503 call    sub_2397C ;~ 229A:0386
cs=0x229a;eip=0x00038b; 	T(MOV(sp, bp));	// 75504 mov     sp, bp ;~ 229A:038B
cs=0x229a;eip=0x00038d; 	X(POP(bp));	// 75505 pop     bp ;~ 229A:038D
cs=0x229a;eip=0x00038e; 	R(RETF(0));	// 75506 retf ;~ 229A:038E
sub_3130f:
	// 75513 
cs=0x229a;eip=0x00038f; 	T(MOV(ax, 1));	// 75515 mov     ax, 1 ;~ 229A:038F
cs=0x229a;eip=0x000392; 	X(PUSH(ax));	// 75516 push    ax ;~ 229A:0392
cs=0x229a;eip=0x000393; 	R(CALLF(sub_3e446,0));	// 75517 call    sub_3E446 ;~ 229A:0393
cs=0x229a;eip=0x000398; 	T(MOV(ax, 0x41));	// 75518 mov     ax, 41h ; 'A' ;~ 229A:0398
cs=0x229a;eip=0x00039b; 	X(PUSH(ax));	// 75519 push    ax ;~ 229A:039B
cs=0x229a;eip=0x00039c; 	T(MOV(ax, 0x2234));	// 75520 mov     ax, 2234h ;~ 229A:039C
cs=0x229a;eip=0x00039f; 	X(PUSH(ds));	// 75521 push    ds ;~ 229A:039F
cs=0x229a;eip=0x0003a0; 	X(PUSH(ax));	// 75522 push    ax ;~ 229A:03A0
cs=0x229a;eip=0x0003a1; 	T(MOV(ax, 5));	// 75523 mov     ax, 5 ;~ 229A:03A1
cs=0x229a;eip=0x0003a4; 	X(PUSH(ax));	// 75524 push    ax ;~ 229A:03A4
cs=0x229a;eip=0x0003a5; 	T(MOV(ax, 0x22C0));	// 75525 mov     ax, 22C0h ;~ 229A:03A5
cs=0x229a;eip=0x0003a8; 	X(PUSH(ds));	// 75526 push    ds ;~ 229A:03A8
cs=0x229a;eip=0x0003a9; 	X(PUSH(ax));	// 75527 push    ax ;~ 229A:03A9
cs=0x229a;eip=0x0003aa; 	T(MOV(ax, 0x0D));	// 75528 mov     ax, 0Dh ;~ 229A:03AA
cs=0x229a;eip=0x0003ad; 	X(PUSH(ax));	// 75529 push    ax ;~ 229A:03AD
cs=0x229a;eip=0x0003ae; 	R(CALLF(sub_3e4f4,0));	// 75530 call    sub_3E4F4 ;~ 229A:03AE
cs=0x229a;eip=0x0003b3; 	T(OR(al, al));	// 75531 or      al, al ;~ 229A:03B3
cs=0x229a;eip=0x0003b5; 	R(JNZ(locret_31340));	// 75532 jnz     short locret_31340 ;~ 229A:03B5
cs=0x229a;eip=0x0003b7; 	T(MOV(ax, 0x146));	// 75533 mov     ax, 146h ;~ 229A:03B7
cs=0x229a;eip=0x0003ba; 	X(PUSH(ax));	// 75534 push    ax ;~ 229A:03BA
cs=0x229a;eip=0x0003bb; 	R(CALLF(sub_2f7e0,0));	// 75535 call    sub_2F7E0 ;~ 229A:03BB
locret_31340:
	// 9281 
cs=0x229a;eip=0x0003c0; 	R(RETF(0));	// 75539 retf ;~ 229A:03C0
sub_31341:
	// 75546 
cs=0x229a;eip=0x0003c1; 	T(SUB(ax, ax));	// 75548 sub     ax, ax ;~ 229A:03C1
cs=0x229a;eip=0x0003c3; 	X(PUSH(ax));	// 75549 push    ax ;~ 229A:03C3
cs=0x229a;eip=0x0003c4; 	R(CALLF(sub_3e446,0));	// 75550 call    sub_3E446 ;~ 229A:03C4
cs=0x229a;eip=0x0003c9; 	R(CALLF(sub_3e56b,0));	// 75551 call    sub_3E56B ;~ 229A:03C9
cs=0x229a;eip=0x0003ce; 	R(RETF(0));	// 75552 retf ;~ 229A:03CE
sub_3134f:
	// 75560 
#undef var_2
#define var_2 -2
	// 75563 var_2           = byte ptr -2 ;~ 229A:03CF
cs=0x229a;eip=0x0003cf; 	X(PUSH(bp));	// 75565 push    bp ;~ 229A:03CF
cs=0x229a;eip=0x0003d0; 	T(MOV(bp, sp));	// 75566 mov     bp, sp ;~ 229A:03D0
cs=0x229a;eip=0x0003d2; 	T(SUB(sp, 2));	// 75567 sub     sp, 2 ;~ 229A:03D2
cs=0x229a;eip=0x0003d5; 	R(CALLF(sub_3ee5b,0));	// 75568 call    sub_3EE5B ;~ 229A:03D5
cs=0x229a;eip=0x0003da; 	T(MOV(ax, 0x2376));	// 75569 mov     ax, 2376h ;~ 229A:03DA
cs=0x229a;eip=0x0003dd; 	X(PUSH(ax));	// 75570 push    ax ;~ 229A:03DD
cs=0x229a;eip=0x0003de; 	T(ax = bp+var_2);	// 75571 lea     ax, [bp+var_2] ;~ 229A:03DE
cs=0x229a;eip=0x0003e1; 	X(PUSH(ax));	// 75572 push    ax ;~ 229A:03E1
cs=0x229a;eip=0x0003e2; 	X(PUSH(cs));	// 75573 push    cs ;~ 229A:03E2
cs=0x229a;eip=0x0003e3; 	R(CALL(sub_31643,0));	// 75574 call    near ptr sub_31643 ;~ 229A:03E3
cs=0x229a;eip=0x0003e6; 	T(MOV(ax, dx));	// 75575 mov     ax, dx ;~ 229A:03E6
cs=0x229a;eip=0x0003e8; 	X(PUSH(ax));	// 75576 push    ax ;~ 229A:03E8
cs=0x229a;eip=0x0003e9; 	R(CALLF(sub_2397c,0));	// 75577 call    sub_2397C ;~ 229A:03E9
cs=0x229a;eip=0x0003ee; 	T(MOV(al, unk_49bff));	// 75578 mov     al, byte ptr unk_49BFF ;~ 229A:03EE
cs=0x229a;eip=0x0003f1; 	X(MOV(unk_54310, al));	// 75579 mov     byte ptr unk_54310, al ;~ 229A:03F1
cs=0x229a;eip=0x0003f4; 	X(MOV(unk_54311, 0x3A));	// 75580 mov     byte ptr unk_54311, 3Ah ; ':' ;~ 229A:03F4
cs=0x229a;eip=0x0003f9; 	X(MOV(unk_54312, 0));	// 75581 mov     byte ptr unk_54312, 0 ;~ 229A:03F9
cs=0x229a;eip=0x0003fe; 	T(MOV(ax, 0x0C960));	// 75582 mov     ax, 0C960h ;~ 229A:03FE
cs=0x229a;eip=0x000401; 	T(MOV(sp, bp));	// 75583 mov     sp, bp ;~ 229A:0401
cs=0x229a;eip=0x000403; 	X(POP(bp));	// 75584 pop     bp ;~ 229A:0403
cs=0x229a;eip=0x000404; 	R(RETF(0));	// 75585 retf ;~ 229A:0404
sub_31385:
	// 75593 
#undef arg_0
#define arg_0 6
	// 75595 arg_0           = word ptr  6 ;~ 229A:0405
#undef arg_2
#define arg_2 8
	// 75596 arg_2           = word ptr  8 ;~ 229A:0405
#undef arg_4
#define arg_4 0x0A
	// 75597 arg_4           = word ptr  0Ah ;~ 229A:0405
#undef arg_6
#define arg_6 0x0C
	// 75598 arg_6           = word ptr  0Ch ;~ 229A:0405
cs=0x229a;eip=0x000405; 	X(PUSH(bp));	// 75600 push    bp ;~ 229A:0405
cs=0x229a;eip=0x000406; 	T(MOV(bp, sp));	// 75601 mov     bp, sp ;~ 229A:0406
cs=0x229a;eip=0x000408; 	T(MOV(al, unk_5651c));	// 75602 mov     al, byte ptr unk_5651C ;~ 229A:0408
cs=0x229a;eip=0x00040b; 	X(MOV(unk_54328, al));	// 75603 mov     byte ptr unk_54328, al ;~ 229A:040B
cs=0x229a;eip=0x00040e; 	T(MOV(ax, *(dw*)((&unk_5687d))));	// 75604 mov     ax, word ptr unk_5687D ;~ 229A:040E
cs=0x229a;eip=0x000411; 	X(MOV(*(dw*)((&unk_5431e)), ax));	// 75605 mov     word ptr unk_5431E, ax ;~ 229A:0411
cs=0x229a;eip=0x000414; 	T(MOV(ax, *(dw*)((&unk_56881))));	// 75606 mov     ax, word ptr unk_56881 ;~ 229A:0414
cs=0x229a;eip=0x000417; 	X(MOV(*(dw*)((&unk_54320)), ax));	// 75607 mov     word ptr unk_54320, ax ;~ 229A:0417
cs=0x229a;eip=0x00041a; 	T(MOV(ax, *(dw*)((&unk_564fe))));	// 75608 mov     ax, word ptr unk_564FE ;~ 229A:041A
cs=0x229a;eip=0x00041d; 	X(MOV(*(dw*)((&unk_54322)), ax));	// 75609 mov     word ptr unk_54322, ax ;~ 229A:041D
cs=0x229a;eip=0x000420; 	T(MOV(ax, *(dw*)((&unk_56500))));	// 75610 mov     ax, word ptr unk_56500 ;~ 229A:0420
cs=0x229a;eip=0x000423; 	X(MOV(*(dw*)((&unk_54324)), ax));	// 75611 mov     word ptr unk_54324, ax ;~ 229A:0423
cs=0x229a;eip=0x000426; 	X(PUSH(word_5651a));	// 75612 push    word_5651A ;~ 229A:0426
cs=0x229a;eip=0x00042a; 	R(CALLF(sub_202f1,0));	// 75613 call    sub_202F1 ;~ 229A:042A
cs=0x229a;eip=0x00042f; 	R(CALLF(sub_203b0,0));	// 75614 call    sub_203B0 ;~ 229A:042F
cs=0x229a;eip=0x000434; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 75615 mov     ax, [bp+arg_6] ;~ 229A:0434
cs=0x229a;eip=0x000437; 	X(MOV(*(dw*)((&unk_54314)), ax));	// 75616 mov     word ptr unk_54314, ax ;~ 229A:0437
cs=0x229a;eip=0x00043a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 75617 mov     ax, [bp+arg_4] ;~ 229A:043A
cs=0x229a;eip=0x00043d; 	X(MOV(*(dw*)((&unk_54316)), ax));	// 75618 mov     word ptr unk_54316, ax ;~ 229A:043D
cs=0x229a;eip=0x000440; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 75619 mov     ax, [bp+arg_2] ;~ 229A:0440
cs=0x229a;eip=0x000443; 	T(ADD(ax, 6));	// 75620 add     ax, 6 ;~ 229A:0443
cs=0x229a;eip=0x000446; 	X(MOV(*(dw*)((&unk_54318)), ax));	// 75621 mov     word ptr unk_54318, ax ;~ 229A:0446
cs=0x229a;eip=0x000449; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 75622 mov     ax, [bp+arg_0] ;~ 229A:0449
cs=0x229a;eip=0x00044c; 	T(ADD(ax, 6));	// 75623 add     ax, 6 ;~ 229A:044C
cs=0x229a;eip=0x00044f; 	X(MOV(*(dw*)((&unk_5431a)), ax));	// 75624 mov     word ptr unk_5431A, ax ;~ 229A:044F
cs=0x229a;eip=0x000452; 	T(MOV(ax, 0x0C964));	// 75625 mov     ax, 0C964h ;~ 229A:0452
cs=0x229a;eip=0x000455; 	X(PUSH(ax));	// 75626 push    ax ;~ 229A:0455
cs=0x229a;eip=0x000456; 	R(CALLF(sub_23644,0));	// 75627 call    sub_23644 ;~ 229A:0456
cs=0x229a;eip=0x00045b; 	T(MOV(ax, 0x0ED08));	// 75628 mov     ax, 0ED08h ;~ 229A:045B
cs=0x229a;eip=0x00045e; 	X(PUSH(ax));	// 75629 push    ax ;~ 229A:045E
cs=0x229a;eip=0x00045f; 	X(PUSH(*(dw*)((&unk_54314))));	// 75630 push    word ptr unk_54314 ;~ 229A:045F
cs=0x229a;eip=0x000463; 	X(PUSH(*(dw*)((&unk_54316))));	// 75631 push    word ptr unk_54316 ;~ 229A:0463
cs=0x229a;eip=0x000467; 	T(MOV(ax, 0x2380));	// 75632 mov     ax, 2380h ;~ 229A:0467
cs=0x229a;eip=0x00046a; 	X(PUSH(ax));	// 75633 push    ax ;~ 229A:046A
cs=0x229a;eip=0x00046b; 	T(SUB(ax, ax));	// 75634 sub     ax, ax ;~ 229A:046B
cs=0x229a;eip=0x00046d; 	X(PUSH(ax));	// 75635 push    ax ;~ 229A:046D
cs=0x229a;eip=0x00046e; 	X(PUSH(ax));	// 75636 push    ax ;~ 229A:046E
cs=0x229a;eip=0x00046f; 	X(PUSH(*(dw*)((&unk_54318))));	// 75637 push    word ptr unk_54318 ;~ 229A:046F
cs=0x229a;eip=0x000473; 	X(PUSH(*(dw*)((&unk_5431a))));	// 75638 push    word ptr unk_5431A ;~ 229A:0473
cs=0x229a;eip=0x000477; 	R(CALLF(sub_2c4d3,0));	// 75639 call    sub_2C4D3 ;~ 229A:0477
cs=0x229a;eip=0x00047c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 75640 push    [bp+arg_6] ;~ 229A:047C
cs=0x229a;eip=0x00047f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 75641 push    [bp+arg_4] ;~ 229A:047F
cs=0x229a;eip=0x000482; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 75642 push    [bp+arg_2] ;~ 229A:0482
cs=0x229a;eip=0x000485; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 75643 push    [bp+arg_0] ;~ 229A:0485
cs=0x229a;eip=0x000488; 	T(MOV(ax, 1));	// 75644 mov     ax, 1 ;~ 229A:0488
cs=0x229a;eip=0x00048b; 	X(PUSH(ax));	// 75645 push    ax ;~ 229A:048B
cs=0x229a;eip=0x00048c; 	R(CALLF(sub_2fbda,0));	// 75646 call    sub_2FBDA ;~ 229A:048C
cs=0x229a;eip=0x000491; 	T(MOV(ax, *(dw*)((&unk_47bde))));	// 75647 mov     ax, word ptr unk_47BDE ;~ 229A:0491
cs=0x229a;eip=0x000494; 	X(MOV(*(dw*)((&unk_54326)), ax));	// 75648 mov     word ptr unk_54326, ax ;~ 229A:0494
cs=0x229a;eip=0x000497; 	T(MOV(al, unk_56885));	// 75649 mov     al, byte ptr unk_56885 ;~ 229A:0497
cs=0x229a;eip=0x00049a; 	X(MOV(unk_5431c, al));	// 75650 mov     byte ptr unk_5431C, al ;~ 229A:049A
cs=0x229a;eip=0x00049d; 	X(MOV(*(dw*)((&unk_47bde)), 0x0FF00));	// 75651 mov     word ptr unk_47BDE, 0FF00h ;~ 229A:049D
cs=0x229a;eip=0x0004a3; 	X(MOV(unk_56885, 0));	// 75652 mov     byte ptr unk_56885, 0 ;~ 229A:04A3
cs=0x229a;eip=0x0004a8; 	X(POP(bp));	// 75653 pop     bp ;~ 229A:04A8
cs=0x229a;eip=0x0004a9; 	R(RETF(8));	// 75654 retf    8 ;~ 229A:04A9
sub_3142c:
	// 75661 
cs=0x229a;eip=0x0004ac; 	T(MOV(ax, 0x2380));	// 75663 mov     ax, 2380h ;~ 229A:04AC
cs=0x229a;eip=0x0004af; 	X(PUSH(ax));	// 75664 push    ax ;~ 229A:04AF
cs=0x229a;eip=0x0004b0; 	T(SUB(ax, ax));	// 75665 sub     ax, ax ;~ 229A:04B0
cs=0x229a;eip=0x0004b2; 	X(PUSH(ax));	// 75666 push    ax ;~ 229A:04B2
cs=0x229a;eip=0x0004b3; 	X(PUSH(ax));	// 75667 push    ax ;~ 229A:04B3
cs=0x229a;eip=0x0004b4; 	T(MOV(ax, 0x0ED08));	// 75668 mov     ax, 0ED08h ;~ 229A:04B4
cs=0x229a;eip=0x0004b7; 	X(PUSH(ax));	// 75669 push    ax ;~ 229A:04B7
cs=0x229a;eip=0x0004b8; 	X(PUSH(*(dw*)((&unk_54314))));	// 75670 push    word ptr unk_54314 ;~ 229A:04B8
cs=0x229a;eip=0x0004bc; 	X(PUSH(*(dw*)((&unk_54316))));	// 75671 push    word ptr unk_54316 ;~ 229A:04BC
cs=0x229a;eip=0x0004c0; 	X(PUSH(*(dw*)((&unk_54318))));	// 75672 push    word ptr unk_54318 ;~ 229A:04C0
cs=0x229a;eip=0x0004c4; 	X(PUSH(*(dw*)((&unk_5431a))));	// 75673 push    word ptr unk_5431A ;~ 229A:04C4
cs=0x229a;eip=0x0004c8; 	R(CALLF(sub_2c4d3,0));	// 75674 call    sub_2C4D3 ;~ 229A:04C8
cs=0x229a;eip=0x0004cd; 	T(MOV(al, unk_54328));	// 75675 mov     al, byte ptr unk_54328 ;~ 229A:04CD
cs=0x229a;eip=0x0004d0; 	T(SUB(ah, ah));	// 75676 sub     ah, ah ;~ 229A:04D0
cs=0x229a;eip=0x0004d2; 	X(PUSH(ax));	// 75677 push    ax ;~ 229A:04D2
cs=0x229a;eip=0x0004d3; 	R(CALLF(sub_202f1,0));	// 75678 call    sub_202F1 ;~ 229A:04D3
cs=0x229a;eip=0x0004d8; 	X(PUSH(*(dw*)((&unk_5431e))));	// 75679 push    word ptr unk_5431E ;~ 229A:04D8
cs=0x229a;eip=0x0004dc; 	X(PUSH(*(dw*)((&unk_54320))));	// 75680 push    word ptr unk_54320 ;~ 229A:04DC
cs=0x229a;eip=0x0004e0; 	X(PUSH(*(dw*)((&unk_54322))));	// 75681 push    word ptr unk_54322 ;~ 229A:04E0
cs=0x229a;eip=0x0004e4; 	X(PUSH(*(dw*)((&unk_54324))));	// 75682 push    word ptr unk_54324 ;~ 229A:04E4
cs=0x229a;eip=0x0004e8; 	R(CALLF(sub_212a2,0));	// 75683 call    sub_212A2 ;~ 229A:04E8
cs=0x229a;eip=0x0004ed; 	T(MOV(ax, *(dw*)((&unk_54326))));	// 75684 mov     ax, word ptr unk_54326 ;~ 229A:04ED
cs=0x229a;eip=0x0004f0; 	X(MOV(*(dw*)((&unk_47bde)), ax));	// 75685 mov     word ptr unk_47BDE, ax ;~ 229A:04F0
cs=0x229a;eip=0x0004f3; 	T(MOV(al, unk_5431c));	// 75686 mov     al, byte ptr unk_5431C ;~ 229A:04F3
cs=0x229a;eip=0x0004f6; 	X(MOV(unk_56885, al));	// 75687 mov     byte ptr unk_56885, al ;~ 229A:04F6
cs=0x229a;eip=0x0004f9; 	R(RETF(0));	// 75688 retf ;~ 229A:04F9
sub_3147a:
	// 75696 
#undef var_8
#define var_8 -8
	// 75699 var_8           = word ptr -8 ;~ 229A:04FA
#undef var_6
#define var_6 -6
	// 75700 var_6           = word ptr -6 ;~ 229A:04FA
#undef var_4
#define var_4 -4
	// 75701 var_4           = word ptr -4 ;~ 229A:04FA
#undef var_2
#define var_2 -2
	// 75702 var_2           = word ptr -2 ;~ 229A:04FA
#undef arg_0
#define arg_0 4
	// 75703 arg_0           = word ptr  4 ;~ 229A:04FA
cs=0x229a;eip=0x0004fa; 	X(PUSH(bp));	// 75705 push    bp ;~ 229A:04FA
cs=0x229a;eip=0x0004fb; 	T(MOV(bp, sp));	// 75706 mov     bp, sp ;~ 229A:04FB
cs=0x229a;eip=0x0004fd; 	T(SUB(sp, 8));	// 75707 sub     sp, 8 ;~ 229A:04FD
cs=0x229a;eip=0x000500; 	X(PUSH(di));	// 75708 push    di ;~ 229A:0500
cs=0x229a;eip=0x000501; 	X(PUSH(ds));	// 75709 push    ds ;~ 229A:0501
cs=0x229a;eip=0x000502; 	X(POP(es));	// 75710 pop     es ;~ 229A:0502
cs=0x229a;eip=0x000503; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 75712 mov     di, [bp+arg_0] ;~ 229A:0503
cs=0x229a;eip=0x000506; 	T(MOV(cx, 0x0FFFF));	// 75713 mov     cx, 0FFFFh ;~ 229A:0506
cs=0x229a;eip=0x000509; 	T(XOR(ax, ax));	// 75714 xor     ax, ax ;~ 229A:0509
	// 75715 repne scasb ;~ 229A:050B
cs=0x229a;eip=0x00050b; 	T(	REPNE SCASB);	// 75715 repne scasb ;~ 229A:050B
cs=0x229a;eip=0x00050d; 	T(NOT(cx));	// 75716 not     cx ;~ 229A:050D
cs=0x229a;eip=0x00050f; 	T(DEC(cx));	// 75717 dec     cx ;~ 229A:050F
cs=0x229a;eip=0x000510; 	T(SHL(cx, 1));	// 75718 shl     cx, 1 ;~ 229A:0510
cs=0x229a;eip=0x000512; 	T(SHL(cx, 1));	// 75719 shl     cx, 1 ;~ 229A:0512
cs=0x229a;eip=0x000514; 	T(ADD(cx, 0x18));	// 75720 add     cx, 18h ;~ 229A:0514
cs=0x229a;eip=0x000517; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), cx));	// 75721 mov     [bp+var_2], cx ;~ 229A:0517
cs=0x229a;eip=0x00051a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0x1A));	// 75722 mov     [bp+var_4], 1Ah ;~ 229A:051A
cs=0x229a;eip=0x00051f; 	T(MOV(ax, cx));	// 75723 mov     ax, cx ;~ 229A:051F
cs=0x229a;eip=0x000521; 	T(SAR(ax, 1));	// 75724 sar     ax, 1 ;~ 229A:0521
cs=0x229a;eip=0x000523; 	T(SUB(ax, 0x0A0));	// 75725 sub     ax, 0A0h ; ' ' ;~ 229A:0523
cs=0x229a;eip=0x000526; 	T(NEG(ax));	// 75726 neg     ax ;~ 229A:0526
cs=0x229a;eip=0x000528; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 75727 mov     [bp+var_6], ax ;~ 229A:0528
cs=0x229a;eip=0x00052b; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x43));	// 75728 mov     [bp+var_8], 43h ; 'C' ;~ 229A:052B
cs=0x229a;eip=0x000530; 	X(PUSH(ax));	// 75729 push    ax ;~ 229A:0530
cs=0x229a;eip=0x000531; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 75730 push    [bp+var_8] ;~ 229A:0531
cs=0x229a;eip=0x000534; 	X(PUSH(cx));	// 75731 push    cx ;~ 229A:0534
cs=0x229a;eip=0x000535; 	T(MOV(ax, 0x1A));	// 75732 mov     ax, 1Ah ;~ 229A:0535
cs=0x229a;eip=0x000538; 	X(PUSH(ax));	// 75733 push    ax ;~ 229A:0538
cs=0x229a;eip=0x000539; 	X(PUSH(cs));	// 75734 push    cs ;~ 229A:0539
cs=0x229a;eip=0x00053a; 	R(CALL(sub_31385,0));	// 75735 call    near ptr sub_31385 ;~ 229A:053A
cs=0x229a;eip=0x00053d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 75736 push    [bp+arg_0] ;~ 229A:053D
cs=0x229a;eip=0x000540; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 75737 mov     ax, [bp+var_6] ;~ 229A:0540
cs=0x229a;eip=0x000543; 	T(ADD(ax, 0x0C));	// 75738 add     ax, 0Ch ;~ 229A:0543
cs=0x229a;eip=0x000546; 	X(PUSH(ax));	// 75739 push    ax ;~ 229A:0546
cs=0x229a;eip=0x000547; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 75740 mov     ax, [bp+var_8] ;~ 229A:0547
cs=0x229a;eip=0x00054a; 	T(ADD(ax, 0x0A));	// 75741 add     ax, 0Ah ;~ 229A:054A
cs=0x229a;eip=0x00054d; 	X(PUSH(ax));	// 75742 push    ax ;~ 229A:054D
cs=0x229a;eip=0x00054e; 	R(CALLF(sub_2dd68,0));	// 75743 call    sub_2DD68 ;~ 229A:054E
cs=0x229a;eip=0x000553; 	X(POP(di));	// 75744 pop     di ;~ 229A:0553
cs=0x229a;eip=0x000554; 	T(MOV(sp, bp));	// 75745 mov     sp, bp ;~ 229A:0554
cs=0x229a;eip=0x000556; 	X(POP(bp));	// 75746 pop     bp ;~ 229A:0556
cs=0x229a;eip=0x000557; 	R(RETN(2));	// 75747 retn    2 ;~ 229A:0557
sub_314da:
	// 75754 
cs=0x229a;eip=0x00055a; 	T(MOV(ax, 0x2380));	// 75755 mov     ax, 2380h ;~ 229A:055A
cs=0x229a;eip=0x00055d; 	X(PUSH(ax));	// 75756 push    ax ;~ 229A:055D
cs=0x229a;eip=0x00055e; 	T(MOV(ax, 0x140));	// 75757 mov     ax, 140h ;~ 229A:055E
cs=0x229a;eip=0x000561; 	X(PUSH(ax));	// 75758 push    ax ;~ 229A:0561
cs=0x229a;eip=0x000562; 	T(MOV(ax, 0x20));	// 75759 mov     ax, 20h ; ' ' ;~ 229A:0562
cs=0x229a;eip=0x000565; 	X(PUSH(ax));	// 75760 push    ax ;~ 229A:0565
cs=0x229a;eip=0x000566; 	X(PUSH(cs));	// 75761 push    cs ;~ 229A:0566
cs=0x229a;eip=0x000567; 	R(CALL(sub_31695,0));	// 75762 call    near ptr sub_31695 ;~ 229A:0567
cs=0x229a;eip=0x00056a; 	R(RETF(0));	// 75763 retf ;~ 229A:056A
sub_314eb:
	// 75770 
cs=0x229a;eip=0x00056b; 	T(MOV(ax, 0x2380));	// 75771 mov     ax, 2380h ;~ 229A:056B
cs=0x229a;eip=0x00056e; 	X(PUSH(ax));	// 75772 push    ax ;~ 229A:056E
cs=0x229a;eip=0x00056f; 	R(CALLF(sub_236fe,0));	// 75773 call    sub_236FE ;~ 229A:056F
cs=0x229a;eip=0x000574; 	R(RETF(0));	// 75774 retf ;~ 229A:0574
sub_314f5:
	// 75782 
#undef var_7a
#define var_7a -0x7A
	// 75784 var_7A          = byte ptr -7Ah ;~ 229A:0575
#undef var_52
#define var_52 -0x52
	// 75785 var_52          = byte ptr -52h ;~ 229A:0575
#undef var_2
#define var_2 -2
	// 75786 var_2           = byte ptr -2 ;~ 229A:0575
#undef arg_0
#define arg_0 6
	// 75787 arg_0           = word ptr  6 ;~ 229A:0575
#undef arg_2
#define arg_2 8
	// 75788 arg_2           = word ptr  8 ;~ 229A:0575
cs=0x229a;eip=0x000575; 	X(PUSH(bp));	// 75790 push    bp ;~ 229A:0575
cs=0x229a;eip=0x000576; 	T(MOV(bp, sp));	// 75791 mov     bp, sp ;~ 229A:0576
cs=0x229a;eip=0x000578; 	T(SUB(sp, 0x7A));	// 75792 sub     sp, 7Ah ;~ 229A:0578
cs=0x229a;eip=0x00057b; 	T(CMP(*(dw*)((&unk_47bdc)), 0));	// 75793 cmp     word ptr unk_47BDC, 0 ;~ 229A:057B
cs=0x229a;eip=0x000580; 	R(JZ(loc_31509));	// 75794 jz      short loc_31509 ;~ 229A:0580
cs=0x229a;eip=0x000582; 	T(CMP(*(dw*)((&byte_47b2e)), 0x0FFFF));	// 75795 cmp     word ptr byte_47B2E, 0FFFFh ;~ 229A:0582
cs=0x229a;eip=0x000587; 	R(JNZ(loc_31528));	// 75796 jnz     short loc_31528 ;~ 229A:0587
loc_31509:
	// 9282 
cs=0x229a;eip=0x000589; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 75799 push    [bp+arg_2] ;~ 229A:0589
cs=0x229a;eip=0x00058c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 75800 push    [bp+arg_0] ;~ 229A:058C
cs=0x229a;eip=0x00058f; 	T(MOV(ax, 0x238A));	// 75801 mov     ax, 238Ah ;~ 229A:058F
cs=0x229a;eip=0x000592; 	X(PUSH(ax));	// 75802 push    ax ;~ 229A:0592
cs=0x229a;eip=0x000593; 	T(ax = bp+var_52);	// 75803 lea     ax, [bp+var_52] ;~ 229A:0593
cs=0x229a;eip=0x000596; 	X(PUSH(ax));	// 75804 push    ax ;~ 229A:0596
cs=0x229a;eip=0x000597; 	R(CALLF(sub_2f1d9,0));	// 75805 call    sub_2F1D9 ;~ 229A:0597
cs=0x229a;eip=0x00059c; 	T(ADD(sp, 8));	// 75806 add     sp, 8 ;~ 229A:059C
cs=0x229a;eip=0x00059f; 	T(ax = bp+var_52);	// 75807 lea     ax, [bp+var_52] ;~ 229A:059F
cs=0x229a;eip=0x0005a2; 	X(PUSH(ax));	// 75808 push    ax ;~ 229A:05A2
cs=0x229a;eip=0x0005a3; 	R(CALLF(sub_2f7e0,0));	// 75809 call    sub_2F7E0 ;~ 229A:05A3
loc_31528:
	// 9283 
cs=0x229a;eip=0x0005a8; 	T(ax = bp+var_7a);	// 75813 lea     ax, [bp+var_7A] ;~ 229A:05A8
cs=0x229a;eip=0x0005ab; 	X(PUSH(ax));	// 75814 push    ax ;~ 229A:05AB
cs=0x229a;eip=0x0005ac; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 75815 push    [bp+arg_2] ;~ 229A:05AC
cs=0x229a;eip=0x0005af; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 75816 push    [bp+arg_0] ;~ 229A:05AF
cs=0x229a;eip=0x0005b2; 	R(CALLF(sub_318f0,0));	// 75817 call    sub_318F0 ;~ 229A:05B2
cs=0x229a;eip=0x0005b7; 	T(ax = bp+var_7a);	// 75818 lea     ax, [bp+var_7A] ;~ 229A:05B7
cs=0x229a;eip=0x0005ba; 	X(PUSH(ax));	// 75819 push    ax ;~ 229A:05BA
cs=0x229a;eip=0x0005bb; 	T(MOV(ax, 0x239B));	// 75820 mov     ax, 239Bh ;~ 229A:05BB
cs=0x229a;eip=0x0005be; 	X(PUSH(ax));	// 75821 push    ax ;~ 229A:05BE
cs=0x229a;eip=0x0005bf; 	T(ax = bp+var_52);	// 75822 lea     ax, [bp+var_52] ;~ 229A:05BF
cs=0x229a;eip=0x0005c2; 	X(PUSH(ax));	// 75823 push    ax ;~ 229A:05C2
cs=0x229a;eip=0x0005c3; 	R(CALLF(sub_2f1d9,0));	// 75824 call    sub_2F1D9 ;~ 229A:05C3
cs=0x229a;eip=0x0005c8; 	T(ADD(sp, 6));	// 75825 add     sp, 6 ;~ 229A:05C8
cs=0x229a;eip=0x0005cb; 	T(ax = bp+var_52);	// 75826 lea     ax, [bp+var_52] ;~ 229A:05CB
cs=0x229a;eip=0x0005ce; 	X(PUSH(ax));	// 75827 push    ax ;~ 229A:05CE
cs=0x229a;eip=0x0005cf; 	R(CALL(sub_3147a,0));	// 75828 call    sub_3147A ;~ 229A:05CF
loc_31552:
	// 9284 
cs=0x229a;eip=0x0005d2; 	R(CALLF(sub_2eee2,0));	// 75832 call    sub_2EEE2 ;~ 229A:05D2
cs=0x229a;eip=0x0005d7; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 75833 mov     [bp+var_2], al ;~ 229A:05D7
cs=0x229a;eip=0x0005da; 	T(CMP(al, 0x20));	// 75834 cmp     al, 20h ; ' ' ;~ 229A:05DA
cs=0x229a;eip=0x0005dc; 	R(JNZ(loc_31566));	// 75835 jnz     short loc_31566 ;~ 229A:05DC
cs=0x229a;eip=0x0005de; 	X(PUSH(cs));	// 75836 push    cs ;~ 229A:05DE
cs=0x229a;eip=0x0005df; 	R(CALL(sub_3142c,0));	// 75837 call    near ptr sub_3142C ;~ 229A:05DF
cs=0x229a;eip=0x0005e2; 	T(SUB(ax, ax));	// 75838 sub     ax, ax ;~ 229A:05E2
cs=0x229a;eip=0x0005e4; 	R(JMP(loc_31590));	// 75839 jmp     short loc_31590 ;~ 229A:05E4
loc_31566:
	// 9285 
cs=0x229a;eip=0x0005e6; 	T(CMP(*(raddr(ss,bp+var_2)), 0x1B));	// 75843 cmp     [bp+var_2], 1Bh ;~ 229A:05E6
cs=0x229a;eip=0x0005ea; 	R(JNZ(loc_31576));	// 75844 jnz     short loc_31576 ;~ 229A:05EA
cs=0x229a;eip=0x0005ec; 	T(SUB(ax, ax));	// 75845 sub     ax, ax ;~ 229A:05EC
cs=0x229a;eip=0x0005ee; 	X(PUSH(ax));	// 75846 push    ax ;~ 229A:05EE
cs=0x229a;eip=0x0005ef; 	R(CALLF(sub_2f7e0,0));	// 75847 call    sub_2F7E0 ;~ 229A:05EF
cs=0x229a;eip=0x0005f4; 	R(JMP(loc_31552));	// 75849 jmp     short loc_31552 ;~ 229A:05F4
loc_31576:
	// 9286 
cs=0x229a;eip=0x0005f6; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 75853 mov     al, [bp+var_2] ;~ 229A:05F6
cs=0x229a;eip=0x0005f9; 	T(CBW);	// 75854 cbw ;~ 229A:05F9
cs=0x229a;eip=0x0005fa; 	T(MOV(bx, ax));	// 75855 mov     bx, ax ;~ 229A:05FA
cs=0x229a;eip=0x0005fc; 	T(TEST(*(raddr(ds,bx-0x3D7B)), 3));	// 75856 test    byte ptr [bx-3D7Bh], 3 ;~ 229A:05FC
cs=0x229a;eip=0x000601; 	R(JZ(loc_31552));	// 75857 jz      short loc_31552 ;~ 229A:0601
cs=0x229a;eip=0x000603; 	X(PUSH(cs));	// 75858 push    cs ;~ 229A:0603
cs=0x229a;eip=0x000604; 	R(CALL(sub_3142c,0));	// 75859 call    near ptr sub_3142C ;~ 229A:0604
cs=0x229a;eip=0x000607; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 75860 mov     al, [bp+var_2] ;~ 229A:0607
cs=0x229a;eip=0x00060a; 	T(CBW);	// 75861 cbw ;~ 229A:060A
cs=0x229a;eip=0x00060b; 	X(PUSH(ax));	// 75862 push    ax ;~ 229A:060B
cs=0x229a;eip=0x00060c; 	R(CALL(sub_30f84,0));	// 75863 call    sub_30F84 ;~ 229A:060C
cs=0x229a;eip=0x00060f; 	T(CBW);	// 75864 cbw ;~ 229A:060F
loc_31590:
	// 9287 
cs=0x229a;eip=0x000610; 	T(MOV(sp, bp));	// 75867 mov     sp, bp ;~ 229A:0610
cs=0x229a;eip=0x000612; 	X(POP(bp));	// 75868 pop     bp ;~ 229A:0612
cs=0x229a;eip=0x000613; 	R(RETF(4));	// 75869 retf    4 ;~ 229A:0613
sub_31596:
	// 75877 
#undef var_50
#define var_50 -0x50
	// 75880 var_50          = byte ptr -50h ;~ 229A:0616
#undef arg_0
#define arg_0 6
	// 75881 arg_0           = word ptr  6 ;~ 229A:0616
cs=0x229a;eip=0x000616; 	X(PUSH(bp));	// 75883 push    bp ;~ 229A:0616
cs=0x229a;eip=0x000617; 	T(MOV(bp, sp));	// 75884 mov     bp, sp ;~ 229A:0617
cs=0x229a;eip=0x000619; 	T(SUB(sp, 0x50));	// 75885 sub     sp, 50h ;~ 229A:0619
cs=0x229a;eip=0x00061c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 75886 push    [bp+arg_0] ;~ 229A:061C
cs=0x229a;eip=0x00061f; 	T(MOV(ax, 0x23CA));	// 75887 mov     ax, 23CAh ;~ 229A:061F
cs=0x229a;eip=0x000622; 	X(PUSH(ax));	// 75888 push    ax ;~ 229A:0622
cs=0x229a;eip=0x000623; 	T(ax = bp+var_50);	// 75889 lea     ax, [bp+var_50] ;~ 229A:0623
cs=0x229a;eip=0x000626; 	X(PUSH(ax));	// 75890 push    ax ;~ 229A:0626
cs=0x229a;eip=0x000627; 	R(CALLF(sub_2f1d9,0));	// 75891 call    sub_2F1D9 ;~ 229A:0627
cs=0x229a;eip=0x00062c; 	T(ADD(sp, 6));	// 75892 add     sp, 6 ;~ 229A:062C
cs=0x229a;eip=0x00062f; 	T(ax = bp+var_50);	// 75893 lea     ax, [bp+var_50] ;~ 229A:062F
cs=0x229a;eip=0x000632; 	X(PUSH(ax));	// 75894 push    ax ;~ 229A:0632
cs=0x229a;eip=0x000633; 	R(CALL(sub_3147a,0));	// 75895 call    sub_3147A ;~ 229A:0633
cs=0x229a;eip=0x000636; 	R(CALLF(sub_2eee2,0));	// 75896 call    sub_2EEE2 ;~ 229A:0636
cs=0x229a;eip=0x00063b; 	T(SUB(ax, ax));	// 75897 sub     ax, ax ;~ 229A:063B
cs=0x229a;eip=0x00063d; 	X(PUSH(ax));	// 75898 push    ax ;~ 229A:063D
cs=0x229a;eip=0x00063e; 	R(CALLF(sub_2f7e0,0));	// 75899 call    sub_2F7E0 ;~ 229A:063E
sub_315c9:
	// 75911 
cs=0x229a;eip=0x000649; 	T(MOV(ax, 0x23FC));	// 75913 mov     ax, 23FCh ;~ 229A:0649
cs=0x229a;eip=0x00064c; 	X(PUSH(ax));	// 75914 push    ax ;~ 229A:064C
cs=0x229a;eip=0x00064d; 	R(CALL(sub_3147a,0));	// 75915 call    sub_3147A ;~ 229A:064D
cs=0x229a;eip=0x000650; 	R(CALLF(sub_2eee2,0));	// 75916 call    sub_2EEE2 ;~ 229A:0650
cs=0x229a;eip=0x000655; 	T(SUB(ax, ax));	// 75917 sub     ax, ax ;~ 229A:0655
cs=0x229a;eip=0x000657; 	X(PUSH(ax));	// 75918 push    ax ;~ 229A:0657
cs=0x229a;eip=0x000658; 	R(CALLF(sub_2f7e0,0));	// 75919 call    sub_2F7E0 ;~ 229A:0658
sub_315de:
	// 75929 
#undef var_50
#define var_50 -0x50
	// 75932 var_50          = byte ptr -50h ;~ 229A:065E
#undef arg_0
#define arg_0 4
	// 75933 arg_0           = word ptr  4 ;~ 229A:065E
cs=0x229a;eip=0x00065e; 	X(PUSH(bp));	// 75935 push    bp ;~ 229A:065E
cs=0x229a;eip=0x00065f; 	T(MOV(bp, sp));	// 75936 mov     bp, sp ;~ 229A:065F
cs=0x229a;eip=0x000661; 	T(SUB(sp, 0x50));	// 75937 sub     sp, 50h ;~ 229A:0661
cs=0x229a;eip=0x000664; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 75938 push    [bp+arg_0] ;~ 229A:0664
cs=0x229a;eip=0x000667; 	T(MOV(ax, 0x242A));	// 75939 mov     ax, 242Ah ;~ 229A:0667
cs=0x229a;eip=0x00066a; 	X(PUSH(ax));	// 75940 push    ax ;~ 229A:066A
cs=0x229a;eip=0x00066b; 	T(ax = bp+var_50);	// 75941 lea     ax, [bp+var_50] ;~ 229A:066B
cs=0x229a;eip=0x00066e; 	X(PUSH(ax));	// 75942 push    ax ;~ 229A:066E
cs=0x229a;eip=0x00066f; 	R(CALLF(sub_2f1d9,0));	// 75943 call    sub_2F1D9 ;~ 229A:066F
cs=0x229a;eip=0x000674; 	T(ADD(sp, 6));	// 75944 add     sp, 6 ;~ 229A:0674
cs=0x229a;eip=0x000677; 	T(ax = bp+var_50);	// 75945 lea     ax, [bp+var_50] ;~ 229A:0677
cs=0x229a;eip=0x00067a; 	X(PUSH(ax));	// 75946 push    ax ;~ 229A:067A
cs=0x229a;eip=0x00067b; 	R(CALL(sub_3147a,0));	// 75947 call    sub_3147A ;~ 229A:067B
cs=0x229a;eip=0x00067e; 	R(CALLF(sub_2eee2,0));	// 75948 call    sub_2EEE2 ;~ 229A:067E
cs=0x229a;eip=0x000683; 	T(SUB(ax, ax));	// 75949 sub     ax, ax ;~ 229A:0683
cs=0x229a;eip=0x000685; 	X(PUSH(ax));	// 75950 push    ax ;~ 229A:0685
cs=0x229a;eip=0x000686; 	R(CALLF(sub_2f7e0,0));	// 75951 call    sub_2F7E0 ;~ 229A:0686
sub_31643:
	// 75994 
#undef var_4
#define var_4 -4
	// 75997 var_4           = word ptr -4 ;~ 229A:06C3
#undef var_2
#define var_2 -2
	// 75998 var_2           = word ptr -2 ;~ 229A:06C3
#undef arg_0
#define arg_0 6
	// 75999 arg_0           = word ptr  6 ;~ 229A:06C3
#undef arg_2
#define arg_2 8
	// 76000 arg_2           = word ptr  8 ;~ 229A:06C3
cs=0x229a;eip=0x0006c3; 	X(PUSH(bp));	// 76002 push    bp ;~ 229A:06C3
cs=0x229a;eip=0x0006c4; 	T(MOV(bp, sp));	// 76003 mov     bp, sp ;~ 229A:06C4
cs=0x229a;eip=0x0006c6; 	T(SUB(sp, 4));	// 76004 sub     sp, 4 ;~ 229A:06C6
cs=0x229a;eip=0x0006c9; 	X(PUSH(di));	// 76005 push    di ;~ 229A:06C9
cs=0x229a;eip=0x0006ca; 	X(PUSH(si));	// 76006 push    si ;~ 229A:06CA
cs=0x229a;eip=0x0006cb; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 76007 mov     di, [bp+arg_0] ;~ 229A:06CB
cs=0x229a;eip=0x0006ce; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 76008 mov     si, [bp+arg_2] ;~ 229A:06CE
cs=0x229a;eip=0x0006d1; 	R(JMP(loc_31657));	// 76009 jmp     short loc_31657 ;~ 229A:06D1
loc_31653:
	// 9291 
cs=0x229a;eip=0x0006d3; 	X(PUSH(si));	// 76013 push    si ;~ 229A:06D3
cs=0x229a;eip=0x0006d4; 	R(CALL(sub_315de,0));	// 76014 call    sub_315DE ;~ 229A:06D4
loc_31657:
	// 9292 
cs=0x229a;eip=0x0006d7; 	X(PUSH(si));	// 76018 push    si ;~ 229A:06D7
cs=0x229a;eip=0x0006d8; 	X(PUSH(di));	// 76019 push    di ;~ 229A:06D8
cs=0x229a;eip=0x0006d9; 	R(CALLF(sub_3e595,0));	// 76020 call    sub_3E595 ;~ 229A:06D9
cs=0x229a;eip=0x0006de; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 76021 mov     [bp+var_4], ax ;~ 229A:06DE
cs=0x229a;eip=0x0006e1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 76022 mov     [bp+var_2], dx ;~ 229A:06E1
cs=0x229a;eip=0x0006e4; 	T(OR(dx, ax));	// 76023 or      dx, ax ;~ 229A:06E4
cs=0x229a;eip=0x0006e6; 	R(JZ(loc_31653));	// 76024 jz      short loc_31653 ;~ 229A:06E6
cs=0x229a;eip=0x0006e8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 76025 mov     dx, [bp+var_2] ;~ 229A:06E8
cs=0x229a;eip=0x0006eb; 	X(POP(si));	// 76026 pop     si ;~ 229A:06EB
cs=0x229a;eip=0x0006ec; 	X(POP(di));	// 76027 pop     di ;~ 229A:06EC
cs=0x229a;eip=0x0006ed; 	T(MOV(sp, bp));	// 76028 mov     sp, bp ;~ 229A:06ED
cs=0x229a;eip=0x0006ef; 	X(POP(bp));	// 76029 pop     bp ;~ 229A:06EF
cs=0x229a;eip=0x0006f0; 	R(RETF(4));	// 76030 retf    4 ;~ 229A:06F0
sub_31673:
	// 76038 
#undef arg_0
#define arg_0 6
	// 76041 arg_0           = word ptr  6 ;~ 229A:06F3
#undef arg_2
#define arg_2 8
	// 76042 arg_2           = word ptr  8 ;~ 229A:06F3
cs=0x229a;eip=0x0006f3; 	X(PUSH(bp));	// 76044 push    bp ;~ 229A:06F3
cs=0x229a;eip=0x0006f4; 	T(MOV(bp, sp));	// 76045 mov     bp, sp ;~ 229A:06F4
cs=0x229a;eip=0x0006f6; 	X(PUSH(di));	// 76046 push    di ;~ 229A:06F6
cs=0x229a;eip=0x0006f7; 	X(PUSH(si));	// 76047 push    si ;~ 229A:06F7
cs=0x229a;eip=0x0006f8; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 76048 mov     di, [bp+arg_0] ;~ 229A:06F8
cs=0x229a;eip=0x0006fb; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 76049 mov     si, [bp+arg_2] ;~ 229A:06FB
cs=0x229a;eip=0x0006fe; 	R(JMP(loc_31684));	// 76050 jmp     short loc_31684 ;~ 229A:06FE
loc_31680:
	// 9293 
cs=0x229a;eip=0x000700; 	X(PUSH(si));	// 76054 push    si ;~ 229A:0700
cs=0x229a;eip=0x000701; 	R(CALL(sub_315de,0));	// 76055 call    sub_315DE ;~ 229A:0701
loc_31684:
	// 9294 
cs=0x229a;eip=0x000704; 	X(PUSH(si));	// 76059 push    si ;~ 229A:0704
cs=0x229a;eip=0x000705; 	X(PUSH(di));	// 76060 push    di ;~ 229A:0705
cs=0x229a;eip=0x000706; 	R(CALLF(sub_3e7d3,0));	// 76061 call    sub_3E7D3 ;~ 229A:0706
cs=0x229a;eip=0x00070b; 	T(OR(al, al));	// 76062 or      al, al ;~ 229A:070B
cs=0x229a;eip=0x00070d; 	R(JZ(loc_31680));	// 76063 jz      short loc_31680 ;~ 229A:070D
cs=0x229a;eip=0x00070f; 	X(POP(si));	// 76064 pop     si ;~ 229A:070F
cs=0x229a;eip=0x000710; 	X(POP(di));	// 76065 pop     di ;~ 229A:0710
cs=0x229a;eip=0x000711; 	X(POP(bp));	// 76066 pop     bp ;~ 229A:0711
cs=0x229a;eip=0x000712; 	R(RETF(4));	// 76067 retf    4 ;~ 229A:0712
sub_31695:
	// 76075 
#undef arg_0
#define arg_0 6
	// 76078 arg_0           = word ptr  6 ;~ 229A:0715
#undef arg_2
#define arg_2 8
	// 76079 arg_2           = word ptr  8 ;~ 229A:0715
#undef arg_4
#define arg_4 0x0A
	// 76080 arg_4           = word ptr  0Ah ;~ 229A:0715
cs=0x229a;eip=0x000715; 	X(PUSH(bp));	// 76082 push    bp ;~ 229A:0715
cs=0x229a;eip=0x000716; 	T(MOV(bp, sp));	// 76083 mov     bp, sp ;~ 229A:0716
cs=0x229a;eip=0x000718; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 76084 push    [bp+arg_4] ;~ 229A:0718
cs=0x229a;eip=0x00071b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 76085 push    [bp+arg_2] ;~ 229A:071B
cs=0x229a;eip=0x00071e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 76086 push    [bp+arg_0] ;~ 229A:071E
cs=0x229a;eip=0x000721; 	R(CALLF(sub_23696,0));	// 76087 call    sub_23696 ;~ 229A:0721
cs=0x229a;eip=0x000726; 	T(OR(al, al));	// 76088 or      al, al ;~ 229A:0726
cs=0x229a;eip=0x000728; 	R(JNZ(loc_316ae));	// 76089 jnz     short loc_316AE ;~ 229A:0728
cs=0x229a;eip=0x00072a; 	X(PUSH(cs));	// 76090 push    cs ;~ 229A:072A
cs=0x229a;eip=0x00072b; 	R(CALL(sub_315c9,0));	// 76091 call    near ptr sub_315C9 ;~ 229A:072B
loc_316ae:
	// 9295 
cs=0x229a;eip=0x00072e; 	X(POP(bp));	// 76095 pop     bp ;~ 229A:072E
cs=0x229a;eip=0x00072f; 	R(RETF(6));	// 76096 retf    6 ;~ 229A:072F
sub_316b2:
	// 76104 
#undef var_50
#define var_50 -0x50
	// 76107 var_50          = byte ptr -50h ;~ 229A:0732
#undef arg_0
#define arg_0 6
	// 76108 arg_0           = word ptr  6 ;~ 229A:0732
#undef arg_2
#define arg_2 8
	// 76109 arg_2           = word ptr  8 ;~ 229A:0732
cs=0x229a;eip=0x000732; 	X(PUSH(bp));	// 76111 push    bp ;~ 229A:0732
cs=0x229a;eip=0x000733; 	T(MOV(bp, sp));	// 76112 mov     bp, sp ;~ 229A:0733
cs=0x229a;eip=0x000735; 	T(SUB(sp, 0x50));	// 76113 sub     sp, 50h ;~ 229A:0735
cs=0x229a;eip=0x000738; 	X(PUSH(di));	// 76114 push    di ;~ 229A:0738
cs=0x229a;eip=0x000739; 	X(PUSH(si));	// 76115 push    si ;~ 229A:0739
cs=0x229a;eip=0x00073a; 	T(si = bp+var_50);	// 76116 lea     si, [bp+var_50] ;~ 229A:073A
cs=0x229a;eip=0x00073d; 	X(PUSH(ds));	// 76117 push    ds ;~ 229A:073D
cs=0x229a;eip=0x00073e; 	X(POP(es));	// 76118 pop     es ;~ 229A:073E
cs=0x229a;eip=0x00073f; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 76119 mov     di, [bp+arg_2] ;~ 229A:073F
cs=0x229a;eip=0x000742; 	T(MOV(cx, 0x0FFFF));	// 76120 mov     cx, 0FFFFh ;~ 229A:0742
cs=0x229a;eip=0x000745; 	T(XOR(ax, ax));	// 76121 xor     ax, ax ;~ 229A:0745
	// 76122 repne scasb ;~ 229A:0747
cs=0x229a;eip=0x000747; 	T(	REPNE SCASB);	// 76122 repne scasb ;~ 229A:0747
cs=0x229a;eip=0x000749; 	T(NOT(cx));	// 76123 not     cx ;~ 229A:0749
cs=0x229a;eip=0x00074b; 	T(SUB(di, cx));	// 76124 sub     di, cx ;~ 229A:074B
cs=0x229a;eip=0x00074d; 	T(XCHG(di, si));	// 76125 xchg    di, si ;~ 229A:074D
cs=0x229a;eip=0x00074f; 	T(SHR(cx, 1));	// 76126 shr     cx, 1 ;~ 229A:074F
	// 76127 repne movsw ;~ 229A:0751
cs=0x229a;eip=0x000751; 	X(	REPNE MOVSW);	// 76127 repne movsw ;~ 229A:0751
cs=0x229a;eip=0x000753; 	T(ADC(cx, cx));	// 76128 adc     cx, cx ;~ 229A:0753
	// 76129 repne movsb ;~ 229A:0755
cs=0x229a;eip=0x000755; 	X(	REPNE MOVSB);	// 76129 repne movsb ;~ 229A:0755
cs=0x229a;eip=0x000757; 	T(CMP(*(dw*)((&byte_47b2e)), 4));	// 76130 cmp     word ptr byte_47B2E, 4 ;~ 229A:0757
cs=0x229a;eip=0x00075c; 	R(JNZ(loc_31705));	// 76131 jnz     short loc_31705 ;~ 229A:075C
cs=0x229a;eip=0x00075e; 	T(MOV(di, 0x2466));	// 76132 mov     di, 2466h ;~ 229A:075E
cs=0x229a;eip=0x000761; 	T(si = bp+var_50);	// 76133 lea     si, [bp+var_50] ;~ 229A:0761
cs=0x229a;eip=0x000764; 	T(MOV(ax, ds));	// 76134 mov     ax, ds ;~ 229A:0764
cs=0x229a;eip=0x000766; 	T(MOV(cx, 0x0FFFF));	// 76135 mov     cx, 0FFFFh ;~ 229A:0766
cs=0x229a;eip=0x000769; 	T(XOR(ax, ax));	// 76136 xor     ax, ax ;~ 229A:0769
	// 76137 repne scasb ;~ 229A:076B
cs=0x229a;eip=0x00076b; 	T(	REPNE SCASB);	// 76137 repne scasb ;~ 229A:076B
cs=0x229a;eip=0x00076d; 	T(NOT(cx));	// 76138 not     cx ;~ 229A:076D
cs=0x229a;eip=0x00076f; 	T(SUB(di, cx));	// 76139 sub     di, cx ;~ 229A:076F
cs=0x229a;eip=0x000771; 	T(MOV(bx, cx));	// 76140 mov     bx, cx ;~ 229A:0771
cs=0x229a;eip=0x000773; 	T(XCHG(di, si));	// 76141 xchg    di, si ;~ 229A:0773
cs=0x229a;eip=0x000775; 	T(MOV(cx, 0x0FFFF));	// 76142 mov     cx, 0FFFFh ;~ 229A:0775
	// 76143 repne scasb ;~ 229A:0778
cs=0x229a;eip=0x000778; 	T(	REPNE SCASB);	// 76143 repne scasb ;~ 229A:0778
cs=0x229a;eip=0x00077a; 	T(DEC(di));	// 76144 dec     di ;~ 229A:077A
cs=0x229a;eip=0x00077b; 	T(MOV(cx, bx));	// 76145 mov     cx, bx ;~ 229A:077B
cs=0x229a;eip=0x00077d; 	T(SHR(cx, 1));	// 76146 shr     cx, 1 ;~ 229A:077D
	// 76147 repne movsw ;~ 229A:077F
cs=0x229a;eip=0x00077f; 	X(	REPNE MOVSW);	// 76147 repne movsw ;~ 229A:077F
cs=0x229a;eip=0x000781; 	T(ADC(cx, cx));	// 76148 adc     cx, cx ;~ 229A:0781
	// 76149 repne movsb ;~ 229A:0783
cs=0x229a;eip=0x000783; 	X(	REPNE MOVSB);	// 76149 repne movsb ;~ 229A:0783
loc_31705:
	// 9296 
cs=0x229a;eip=0x000785; 	T(MOV(di, 0x2468));	// 76152 mov     di, 2468h ;~ 229A:0785
cs=0x229a;eip=0x000788; 	T(si = bp+var_50);	// 76153 lea     si, [bp+var_50] ;~ 229A:0788
cs=0x229a;eip=0x00078b; 	T(MOV(ax, ds));	// 76154 mov     ax, ds ;~ 229A:078B
cs=0x229a;eip=0x00078d; 	T(MOV(cx, 0x0FFFF));	// 76155 mov     cx, 0FFFFh ;~ 229A:078D
cs=0x229a;eip=0x000790; 	T(XOR(ax, ax));	// 76156 xor     ax, ax ;~ 229A:0790
	// 76157 repne scasb ;~ 229A:0792
cs=0x229a;eip=0x000792; 	T(	REPNE SCASB);	// 76157 repne scasb ;~ 229A:0792
cs=0x229a;eip=0x000794; 	T(NOT(cx));	// 76158 not     cx ;~ 229A:0794
cs=0x229a;eip=0x000796; 	T(SUB(di, cx));	// 76159 sub     di, cx ;~ 229A:0796
cs=0x229a;eip=0x000798; 	T(MOV(bx, cx));	// 76160 mov     bx, cx ;~ 229A:0798
cs=0x229a;eip=0x00079a; 	T(XCHG(di, si));	// 76161 xchg    di, si ;~ 229A:079A
cs=0x229a;eip=0x00079c; 	T(MOV(cx, 0x0FFFF));	// 76162 mov     cx, 0FFFFh ;~ 229A:079C
	// 76163 repne scasb ;~ 229A:079F
cs=0x229a;eip=0x00079f; 	T(	REPNE SCASB);	// 76163 repne scasb ;~ 229A:079F
cs=0x229a;eip=0x0007a1; 	T(DEC(di));	// 76164 dec     di ;~ 229A:07A1
cs=0x229a;eip=0x0007a2; 	T(MOV(cx, bx));	// 76165 mov     cx, bx ;~ 229A:07A2
cs=0x229a;eip=0x0007a4; 	T(SHR(cx, 1));	// 76166 shr     cx, 1 ;~ 229A:07A4
	// 76167 repne movsw ;~ 229A:07A6
cs=0x229a;eip=0x0007a6; 	X(	REPNE MOVSW);	// 76167 repne movsw ;~ 229A:07A6
cs=0x229a;eip=0x0007a8; 	T(ADC(cx, cx));	// 76168 adc     cx, cx ;~ 229A:07A8
	// 76169 repne movsb ;~ 229A:07AA
cs=0x229a;eip=0x0007aa; 	X(	REPNE MOVSB);	// 76169 repne movsb ;~ 229A:07AA
cs=0x229a;eip=0x0007ac; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 76170 mov     si, [bp+arg_0] ;~ 229A:07AC
cs=0x229a;eip=0x0007af; 	R(JMP(loc_31738));	// 76171 jmp     short loc_31738 ;~ 229A:07AF
loc_31731:
	// 9297 
cs=0x229a;eip=0x0007b1; 	T(ax = bp+var_50);	// 76175 lea     ax, [bp+var_50] ;~ 229A:07B1
cs=0x229a;eip=0x0007b4; 	X(PUSH(ax));	// 76176 push    ax ;~ 229A:07B4
cs=0x229a;eip=0x0007b5; 	R(CALL(sub_315de,0));	// 76177 call    sub_315DE ;~ 229A:07B5
loc_31738:
	// 9298 
cs=0x229a;eip=0x0007b8; 	T(ax = bp+var_50);	// 76181 lea     ax, [bp+var_50] ;~ 229A:07B8
cs=0x229a;eip=0x0007bb; 	X(PUSH(ax));	// 76182 push    ax ;~ 229A:07BB
cs=0x229a;eip=0x0007bc; 	X(PUSH(si));	// 76183 push    si ;~ 229A:07BC
cs=0x229a;eip=0x0007bd; 	R(CALLF(sub_3e7d3,0));	// 76184 call    sub_3E7D3 ;~ 229A:07BD
cs=0x229a;eip=0x0007c2; 	T(OR(al, al));	// 76185 or      al, al ;~ 229A:07C2
cs=0x229a;eip=0x0007c4; 	R(JZ(loc_31731));	// 76186 jz      short loc_31731 ;~ 229A:07C4
cs=0x229a;eip=0x0007c6; 	X(POP(si));	// 76187 pop     si ;~ 229A:07C6
cs=0x229a;eip=0x0007c7; 	X(POP(di));	// 76188 pop     di ;~ 229A:07C7
cs=0x229a;eip=0x0007c8; 	T(MOV(sp, bp));	// 76189 mov     sp, bp ;~ 229A:07C8
cs=0x229a;eip=0x0007ca; 	X(POP(bp));	// 76190 pop     bp ;~ 229A:07CA
cs=0x229a;eip=0x0007cb; 	R(RETF(4));	// 76191 retf    4 ;~ 229A:07CB
sub_3174e:
	// 76199 
#undef var_10
#define var_10 -0x10
	// 76202 var_10          = word ptr -10h ;~ 229A:07CE
#undef var_e
#define var_e -0x0E
	// 76203 var_E           = word ptr -0Eh ;~ 229A:07CE
#undef var_c
#define var_c -0x0C
	// 76204 var_C           = word ptr -0Ch ;~ 229A:07CE
#undef var_a
#define var_a -0x0A
	// 76205 var_A           = word ptr -0Ah ;~ 229A:07CE
#undef var_8
#define var_8 -8
	// 76206 var_8           = word ptr -8 ;~ 229A:07CE
#undef var_6
#define var_6 -6
	// 76207 var_6           = word ptr -6 ;~ 229A:07CE
#undef arg_0
#define arg_0 6
	// 76208 arg_0           = word ptr  6 ;~ 229A:07CE
#undef arg_2
#define arg_2 8
	// 76209 arg_2           = word ptr  8 ;~ 229A:07CE
cs=0x229a;eip=0x0007ce; 	X(PUSH(bp));	// 76211 push    bp ;~ 229A:07CE
cs=0x229a;eip=0x0007cf; 	T(MOV(bp, sp));	// 76212 mov     bp, sp ;~ 229A:07CF
cs=0x229a;eip=0x0007d1; 	T(SUB(sp, 0x10));	// 76213 sub     sp, 10h ;~ 229A:07D1
cs=0x229a;eip=0x0007d4; 	X(PUSH(di));	// 76214 push    di ;~ 229A:07D4
cs=0x229a;eip=0x0007d5; 	X(PUSH(si));	// 76215 push    si ;~ 229A:07D5
cs=0x229a;eip=0x0007d6; 	R(CALLF(sub_203b0,0));	// 76216 call    sub_203B0 ;~ 229A:07D6
cs=0x229a;eip=0x0007db; 	T(SUB(si, si));	// 76217 sub     si, si ;~ 229A:07DB
cs=0x229a;eip=0x0007dd; 	T(SUB(di, di));	// 76218 sub     di, di ;~ 229A:07DD
cs=0x229a;eip=0x0007df; 	T(MOV(ax, 0x0A));	// 76219 mov     ax, 0Ah ;~ 229A:07DF
cs=0x229a;eip=0x0007e2; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 76220 imul    [bp+arg_0] ;~ 229A:07E2
cs=0x229a;eip=0x0007e5; 	T(ADD(ax, 0x0ED12));	// 76221 add     ax, 0ED12h ;~ 229A:07E5
cs=0x229a;eip=0x0007e8; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 76222 mov     [bp+var_6], ax ;~ 229A:07E8
cs=0x229a;eip=0x0007eb; 	T(MOV(ax, 0x0A));	// 76223 mov     ax, 0Ah ;~ 229A:07EB
cs=0x229a;eip=0x0007ee; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_2))));	// 76224 imul    [bp+arg_2] ;~ 229A:07EE
cs=0x229a;eip=0x0007f1; 	T(ADD(ax, 0x0ED12));	// 76225 add     ax, 0ED12h ;~ 229A:07F1
cs=0x229a;eip=0x0007f4; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 76226 mov     [bp+var_8], ax ;~ 229A:07F4
cs=0x229a;eip=0x0007f7; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), si));	// 76227 mov     [bp+var_A], si ;~ 229A:07F7
cs=0x229a;eip=0x0007fa; 	T(MOV(ax, si));	// 76228 mov     ax, si ;~ 229A:07FA
cs=0x229a;eip=0x0007fc; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 76229 mov     [bp+var_C], ax ;~ 229A:07FC
loc_3177f:
	// 9299 
cs=0x229a;eip=0x0007ff; 	T(MOV(ax, 0x64));	// 76232 mov     ax, 64h ; 'd' ;~ 229A:07FF
cs=0x229a;eip=0x000802; 	T(SUB(ax, di));	// 76233 sub     ax, di ;~ 229A:0802
cs=0x229a;eip=0x000804; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 76234 mov     [bp+var_E], ax ;~ 229A:0804
cs=0x229a;eip=0x000807; 	T(MOV(ax, 0x0A0));	// 76235 mov     ax, 0A0h ; ' ' ;~ 229A:0807
cs=0x229a;eip=0x00080a; 	T(SUB(ax, si));	// 76236 sub     ax, si ;~ 229A:080A
cs=0x229a;eip=0x00080c; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 76237 mov     [bp+var_10], ax ;~ 229A:080C
cs=0x229a;eip=0x00080f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 76238 push    [bp+var_8] ;~ 229A:080F
cs=0x229a;eip=0x000812; 	X(PUSH(ax));	// 76239 push    ax ;~ 229A:0812
cs=0x229a;eip=0x000813; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 76240 push    [bp+var_E] ;~ 229A:0813
cs=0x229a;eip=0x000816; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 76241 push    [bp+var_6] ;~ 229A:0816
cs=0x229a;eip=0x000819; 	X(PUSH(ax));	// 76242 push    ax ;~ 229A:0819
cs=0x229a;eip=0x00081a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 76243 push    [bp+var_E] ;~ 229A:081A
cs=0x229a;eip=0x00081d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 76244 push    [bp+var_A] ;~ 229A:081D
cs=0x229a;eip=0x000820; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 76245 push    [bp+var_C] ;~ 229A:0820
cs=0x229a;eip=0x000823; 	R(CALLF(sub_2c4d3,0));	// 76246 call    sub_2C4D3 ;~ 229A:0823
cs=0x229a;eip=0x000828; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 0x20));	// 76247 add     [bp+var_A], 20h ; ' ' ;~ 229A:0828
cs=0x229a;eip=0x00082c; 	T(ADD(si, 0x10));	// 76248 add     si, 10h ;~ 229A:082C
cs=0x229a;eip=0x00082f; 	X(ADD(*(dw*)(raddr(ss,bp+var_c)), 0x14));	// 76249 add     [bp+var_C], 14h ;~ 229A:082F
cs=0x229a;eip=0x000833; 	T(ADD(di, 0x0A));	// 76250 add     di, 0Ah ;~ 229A:0833
cs=0x229a;eip=0x000836; 	T(CMP(si, 0x0A0));	// 76251 cmp     si, 0A0h ; ' ' ;~ 229A:0836
cs=0x229a;eip=0x00083a; 	R(JLE(loc_3177f));	// 76252 jle     short loc_3177F ;~ 229A:083A
cs=0x229a;eip=0x00083c; 	X(POP(si));	// 76253 pop     si ;~ 229A:083C
cs=0x229a;eip=0x00083d; 	X(POP(di));	// 76254 pop     di ;~ 229A:083D
cs=0x229a;eip=0x00083e; 	T(MOV(sp, bp));	// 76255 mov     sp, bp ;~ 229A:083E
cs=0x229a;eip=0x000840; 	X(POP(bp));	// 76256 pop     bp ;~ 229A:0840
cs=0x229a;eip=0x000841; 	R(RETF(4));	// 76257 retf    4 ;~ 229A:0841
sub_31828:
	// 76312 
#undef arg_0
#define arg_0 6
	// 76315 arg_0           = byte ptr  6 ;~ 229A:08A8
cs=0x229a;eip=0x0008a8; 	X(PUSH(bp));	// 76317 push    bp ;~ 229A:08A8
cs=0x229a;eip=0x0008a9; 	T(MOV(bp, sp));	// 76318 mov     bp, sp ;~ 229A:08A9
cs=0x229a;eip=0x0008ab; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 76319 mov     al, [bp+arg_0] ;~ 229A:08AB
cs=0x229a;eip=0x0008ae; 	X(MOV(unk_57041, al));	// 76320 mov     byte ptr unk_57041, al ;~ 229A:08AE
cs=0x229a;eip=0x0008b1; 	T(CMP(al, 1));	// 76321 cmp     al, 1 ;~ 229A:08B1
cs=0x229a;eip=0x0008b3; 	R(JC(loc_3183a));	// 76322 jb      short loc_3183A ;~ 229A:08B3
cs=0x229a;eip=0x0008b5; 	T(MOV(ax, 1));	// 76323 mov     ax, 1 ;~ 229A:08B5
cs=0x229a;eip=0x0008b8; 	R(JMP(loc_3183c));	// 76324 jmp     short loc_3183C ;~ 229A:08B8
loc_3183a:
	// 9303 
cs=0x229a;eip=0x0008ba; 	T(SUB(ax, ax));	// 76328 sub     ax, ax ;~ 229A:08BA
loc_3183c:
	// 9304 
cs=0x229a;eip=0x0008bc; 	X(PUSH(ax));	// 76331 push    ax ;~ 229A:08BC
cs=0x229a;eip=0x0008bd; 	R(CALLF(sub_3e1d3,0));	// 76332 call    sub_3E1D3 ;~ 229A:08BD
cs=0x229a;eip=0x0008c2; 	T(CMP(*(dw*)((&unk_47a9a)), 0));	// 76333 cmp     word ptr unk_47A9A, 0 ;~ 229A:08C2
cs=0x229a;eip=0x0008c7; 	R(JZ(loc_3185a));	// 76334 jz      short loc_3185A ;~ 229A:08C7
cs=0x229a;eip=0x0008c9; 	T(MOV(ax, 0x0E0));	// 76335 mov     ax, 0E0h ; 'à' ;~ 229A:08C9
cs=0x229a;eip=0x0008cc; 	X(PUSH(ax));	// 76336 push    ax ;~ 229A:08CC
cs=0x229a;eip=0x0008cd; 	T(MOV(ax, 0x844));	// 76337 mov     ax, 844h ;~ 229A:08CD
cs=0x229a;eip=0x0008d0; 	T(MOV(dx, seg_offset(seg020)));	// 76338 mov     dx, seg seg020 ;~ 229A:08D0
cs=0x229a;eip=0x0008d3; 	X(PUSH(dx));	// 76339 push    dx ;~ 229A:08D3
cs=0x229a;eip=0x0008d4; 	X(PUSH(ax));	// 76340 push    ax ;~ 229A:08D4
cs=0x229a;eip=0x0008d5; 	R(CALLF(sub_25b35,0));	// 76341 call    sub_25B35 ;~ 229A:08D5
loc_3185a:
	// 9305 
cs=0x229a;eip=0x0008da; 	X(POP(bp));	// 76344 pop     bp ;~ 229A:08DA
cs=0x229a;eip=0x0008db; 	R(RETF(0));	// 76345 retf ;~ 229A:08DB
sub_3185c:
	// 76353 
#undef arg_0
#define arg_0 6
	// 76356 arg_0           = byte ptr  6 ;~ 229A:08DC
cs=0x229a;eip=0x0008dc; 	X(PUSH(bp));	// 76358 push    bp ;~ 229A:08DC
cs=0x229a;eip=0x0008dd; 	T(MOV(bp, sp));	// 76359 mov     bp, sp ;~ 229A:08DD
cs=0x229a;eip=0x0008df; 	R(CALLF(sub_3e3be,0));	// 76360 call    sub_3E3BE ;~ 229A:08DF
cs=0x229a;eip=0x0008e4; 	T(CMP(*(raddr(ss,bp+arg_0)), 1));	// 76361 cmp     [bp+arg_0], 1 ;~ 229A:08E4
cs=0x229a;eip=0x0008e8; 	R(JNZ(loc_31873));	// 76362 jnz     short loc_31873 ;~ 229A:08E8
cs=0x229a;eip=0x0008ea; 	R(CALLF(sub_2f60c,0));	// 76363 call    sub_2F60C ;~ 229A:08EA
cs=0x229a;eip=0x0008ef; 	T(OR(ax, ax));	// 76364 or      ax, ax ;~ 229A:08EF
cs=0x229a;eip=0x0008f1; 	R(JLE(loc_318a6));	// 76365 jle     short loc_318A6 ;~ 229A:08F1
loc_31873:
	// 9306 
cs=0x229a;eip=0x0008f3; 	T(CMP(*(raddr(ss,bp+arg_0)), 3));	// 76368 cmp     [bp+arg_0], 3 ;~ 229A:08F3
cs=0x229a;eip=0x0008f7; 	R(JC(loc_3188b));	// 76369 jb      short loc_3188B ;~ 229A:08F7
cs=0x229a;eip=0x0008f9; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 76370 mov     al, [bp+arg_0] ;~ 229A:08F9
cs=0x229a;eip=0x0008fc; 	T(SUB(ah, ah));	// 76371 sub     ah, ah ;~ 229A:08FC
cs=0x229a;eip=0x0008fe; 	X(PUSH(ax));	// 76372 push    ax ;~ 229A:08FE
cs=0x229a;eip=0x0008ff; 	R(CALLF(sub_3e2aa,0));	// 76373 call    sub_3E2AA ;~ 229A:08FF
cs=0x229a;eip=0x000904; 	T(ADD(sp, 2));	// 76374 add     sp, 2 ;~ 229A:0904
cs=0x229a;eip=0x000907; 	T(OR(ax, ax));	// 76375 or      ax, ax ;~ 229A:0907
cs=0x229a;eip=0x000909; 	R(JZ(loc_318a6));	// 76376 jz      short loc_318A6 ;~ 229A:0909
loc_3188b:
	// 9307 
cs=0x229a;eip=0x00090b; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 76379 mov     al, [bp+arg_0] ;~ 229A:090B
cs=0x229a;eip=0x00090e; 	X(MOV(byte_55204, al));	// 76380 mov     byte_55204, al ;~ 229A:090E
cs=0x229a;eip=0x000911; 	T(SUB(ax, ax));	// 76381 sub     ax, ax ;~ 229A:0911
cs=0x229a;eip=0x000913; 	X(MOV(*(dw*)((&unk_56488)), ax));	// 76382 mov     word ptr unk_56488, ax ;~ 229A:0913
cs=0x229a;eip=0x000916; 	X(MOV(*(dw*)((&unk_56486)), ax));	// 76383 mov     word ptr unk_56486, ax ;~ 229A:0916
cs=0x229a;eip=0x000919; 	X(MOV(byte_56492, 0));	// 76384 mov     byte_56492, 0 ;~ 229A:0919
cs=0x229a;eip=0x00091e; 	T(SUB(al, al));	// 76385 sub     al, al ;~ 229A:091E
cs=0x229a;eip=0x000920; 	X(MOV(byte_47ab5, al));	// 76386 mov     byte_47AB5, al ;~ 229A:0920
cs=0x229a;eip=0x000923; 	X(MOV(byte_47ab4, al));	// 76387 mov     byte_47AB4, al ;~ 229A:0923
loc_318a6:
	// 9308 
cs=0x229a;eip=0x000926; 	X(POP(bp));	// 76391 pop     bp ;~ 229A:0926
cs=0x229a;eip=0x000927; 	R(RETF(0));	// 76392 retf ;~ 229A:0927
sub_318a8:
	// 76400 
cs=0x229a;eip=0x000928; 	R(CALLF(sub_3d819,0));	// 76401 call    sub_3D819 ;~ 229A:0928
cs=0x229a;eip=0x00092d; 	T(SUB(ax, ax));	// 76402 sub     ax, ax ;~ 229A:092D
cs=0x229a;eip=0x00092f; 	X(PUSH(ax));	// 76403 push    ax ;~ 229A:092F
cs=0x229a;eip=0x000930; 	R(CALLF(sub_2f7e0,0));	// 76404 call    sub_2F7E0 ;~ 229A:0930
sub_318b6:
	// 76414 
cs=0x229a;eip=0x000936; 	X(PUSH(bp));	// 76416 push    bp ;~ 229A:0936
cs=0x229a;eip=0x000937; 	T(MOV(bp, sp));	// 76417 mov     bp, sp ;~ 229A:0937
cs=0x229a;eip=0x000939; 	T(SUB(sp, 2));	// 76418 sub     sp, 2 ;~ 229A:0939
cs=0x229a;eip=0x00093c; 	X(PUSH(si));	// 76419 push    si ;~ 229A:093C
cs=0x229a;eip=0x00093d; 	T(MOV(ax, 0x246D));	// 76420 mov     ax, 246Dh ;~ 229A:093D
cs=0x229a;eip=0x000940; 	X(PUSH(ax));	// 76421 push    ax ;~ 229A:0940
cs=0x229a;eip=0x000941; 	R(CALL(sub_3147a,0));	// 76422 call    sub_3147A ;~ 229A:0941
cs=0x229a;eip=0x000944; 	R(CALLF(sub_2eee2,0));	// 76423 call    sub_2EEE2 ;~ 229A:0944
cs=0x229a;eip=0x000949; 	T(MOV(si, ax));	// 76424 mov     si, ax ;~ 229A:0949
cs=0x229a;eip=0x00094b; 	X(PUSH(cs));	// 76425 push    cs ;~ 229A:094B
cs=0x229a;eip=0x00094c; 	R(CALL(sub_3142c,0));	// 76426 call    near ptr sub_3142C ;~ 229A:094C
cs=0x229a;eip=0x00094f; 	T(TEST(*(raddr(ds,si-0x3D7B)), 1));	// 76427 test    byte ptr [si-3D7Bh], 1 ;~ 229A:094F
cs=0x229a;eip=0x000954; 	R(JZ(loc_318db));	// 76428 jz      short loc_318DB ;~ 229A:0954
cs=0x229a;eip=0x000956; 	T(ax = si+0x20);	// 76429 lea     ax, [si+20h] ;~ 229A:0956
cs=0x229a;eip=0x000959; 	R(JMP(loc_318dd));	// 76430 jmp     short loc_318DD ;~ 229A:0959
loc_318db:
	// 9309 
cs=0x229a;eip=0x00095b; 	T(MOV(ax, si));	// 76434 mov     ax, si ;~ 229A:095B
loc_318dd:
	// 9310 
cs=0x229a;eip=0x00095d; 	T(CMP(ax, 0x79));	// 76437 cmp     ax, 79h ; 'y' ;~ 229A:095D
cs=0x229a;eip=0x000960; 	R(JNZ(loc_318e6));	// 76438 jnz     short loc_318E6 ;~ 229A:0960
cs=0x229a;eip=0x000962; 	X(PUSH(cs));	// 76439 push    cs ;~ 229A:0962
cs=0x229a;eip=0x000963; 	R(CALL(sub_318a8,0));	// 76440 call    near ptr sub_318A8 ;~ 229A:0963
loc_318e6:
	// 9311 
cs=0x229a;eip=0x000966; 	R(CALLF(sub_1bc9c,0));	// 76444 call    sub_1BC9C ;~ 229A:0966
cs=0x229a;eip=0x00096b; 	X(POP(si));	// 76445 pop     si ;~ 229A:096B
cs=0x229a;eip=0x00096c; 	T(MOV(sp, bp));	// 76446 mov     sp, bp ;~ 229A:096C
cs=0x229a;eip=0x00096e; 	X(POP(bp));	// 76447 pop     bp ;~ 229A:096E
cs=0x229a;eip=0x00096f; 	R(RETF(0));	// 76448 retf ;~ 229A:096F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_30f9b: 	goto loc_30f9b;
        case m2c::kloc_30f9e: 	goto loc_30f9e;
        case m2c::kloc_30fdb: 	goto loc_30fdb;
        case m2c::kloc_30fe7: 	goto loc_30fe7;
        case m2c::kloc_30fed: 	goto loc_30fed;
        case m2c::kloc_3108e: 	goto loc_3108e;
        case m2c::kloc_31092: 	goto loc_31092;
        case m2c::kloc_310d6: 	goto loc_310d6;
        case m2c::kloc_310eb: 	goto loc_310eb;
        case m2c::kloc_31158: 	goto loc_31158;
        case m2c::kloc_3117e: 	goto loc_3117e;
        case m2c::kloc_31181: 	goto loc_31181;
        case m2c::kloc_311e4: 	goto loc_311e4;
        case m2c::kloc_311ef: 	goto loc_311ef;
        case m2c::kloc_311f2: 	goto loc_311f2;
        case m2c::kloc_311fb: 	goto loc_311fb;
        case m2c::kloc_31200: 	goto loc_31200;
        case m2c::kloc_31205: 	goto loc_31205;
        case m2c::kloc_3120c: 	goto loc_3120c;
        case m2c::kloc_31211: 	goto loc_31211;
        case m2c::kloc_31247: 	goto loc_31247;
        case m2c::kloc_31270: 	goto loc_31270;
        case m2c::kloc_3128b: 	goto loc_3128b;
        case m2c::kloc_31298: 	goto loc_31298;
        case m2c::kloc_31509: 	goto loc_31509;
        case m2c::kloc_31528: 	goto loc_31528;
        case m2c::kloc_31552: 	goto loc_31552;
        case m2c::kloc_31566: 	goto loc_31566;
        case m2c::kloc_31576: 	goto loc_31576;
        case m2c::kloc_31590: 	goto loc_31590;
        case m2c::kloc_31621: 	goto loc_31621;
        case m2c::kloc_31625: 	goto loc_31625;
        case m2c::kloc_31653: 	goto loc_31653;
        case m2c::kloc_31657: 	goto loc_31657;
        case m2c::kloc_31680: 	goto loc_31680;
        case m2c::kloc_31684: 	goto loc_31684;
        case m2c::kloc_316ae: 	goto loc_316ae;
        case m2c::kloc_31705: 	goto loc_31705;
        case m2c::kloc_31731: 	goto loc_31731;
        case m2c::kloc_31738: 	goto loc_31738;
        case m2c::kloc_3177f: 	goto loc_3177f;
        case m2c::kloc_3180d: 	goto loc_3180d;
        case m2c::kloc_3181b: 	goto loc_3181b;
        case m2c::kloc_31823: 	goto loc_31823;
        case m2c::kloc_3183a: 	goto loc_3183a;
        case m2c::kloc_3183c: 	goto loc_3183c;
        case m2c::kloc_3185a: 	goto loc_3185a;
        case m2c::kloc_31873: 	goto loc_31873;
        case m2c::kloc_3188b: 	goto loc_3188b;
        case m2c::kloc_318a6: 	goto loc_318a6;
        case m2c::kloc_318db: 	goto loc_318db;
        case m2c::kloc_318dd: 	goto loc_318dd;
        case m2c::kloc_318e6: 	goto loc_318e6;
        case m2c::klocret_3103b: 	goto locret_3103b;
        case m2c::klocret_31340: 	goto locret_31340;
        case m2c::knullsub_13: 	goto nullsub_13;
        case m2c::kret_229a_691: 	goto ret_229a_691;
        case m2c::kseg020_proc: 	goto seg020_proc;
        case m2c::ksub_30f84: 	goto sub_30f84;
        case m2c::ksub_30ffa: 	goto sub_30ffa;
        case m2c::ksub_3101f: 	goto sub_3101f;
        case m2c::ksub_3102a: 	goto sub_3102a;
        case m2c::ksub_3103c: 	goto sub_3103c;
        case m2c::ksub_311d0: 	goto sub_311d0;
        case m2c::ksub_31219: 	goto sub_31219;
        case m2c::ksub_3123e: 	goto sub_3123e;
        case m2c::ksub_312c7: 	goto sub_312c7;
        case m2c::ksub_312e1: 	goto sub_312e1;
        case m2c::ksub_3130f: 	goto sub_3130f;
        case m2c::ksub_31341: 	goto sub_31341;
        case m2c::ksub_3134f: 	goto sub_3134f;
        case m2c::ksub_31385: 	goto sub_31385;
        case m2c::ksub_3142c: 	goto sub_3142c;
        case m2c::ksub_3147a: 	goto sub_3147a;
        case m2c::ksub_314da: 	goto sub_314da;
        case m2c::ksub_314eb: 	goto sub_314eb;
        case m2c::ksub_314f5: 	goto sub_314f5;
        case m2c::ksub_31596: 	goto sub_31596;
        case m2c::ksub_315c9: 	goto sub_315c9;
        case m2c::ksub_315de: 	goto sub_315de;
        case m2c::ksub_31643: 	goto sub_31643;
        case m2c::ksub_31673: 	goto sub_31673;
        case m2c::ksub_31695: 	goto sub_31695;
        case m2c::ksub_316b2: 	goto sub_316b2;
        case m2c::ksub_3174e: 	goto sub_3174e;
        case m2c::ksub_31828: 	goto sub_31828;
        case m2c::ksub_3185c: 	goto sub_3185c;
        case m2c::ksub_318a8: 	goto sub_318a8;
        case m2c::ksub_318b6: 	goto sub_318b6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

