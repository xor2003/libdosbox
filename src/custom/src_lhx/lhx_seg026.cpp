/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group24(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group24:
    _begin:
sub_374e6:
	// 89068 
#undef var_6
#define var_6 -6
	// 89070 var_6           = dword ptr -6 ;~ 28F0:0006
#undef var_2
#define var_2 -2
	// 89071 var_2           = byte ptr -2 ;~ 28F0:0006
#undef arg_0
#define arg_0 4
	// 89072 arg_0           = word ptr  4 ;~ 28F0:0006
cs=0x28f0;eip=0x000006; 	X(PUSH(bp));	// 89074 push    bp ;~ 28F0:0006
cs=0x28f0;eip=0x000007; 	T(MOV(bp, sp));	// 89075 mov     bp, sp ;~ 28F0:0007
cs=0x28f0;eip=0x000009; 	T(SUB(sp, 6));	// 89076 sub     sp, 6 ;~ 28F0:0009
cs=0x28f0;eip=0x00000c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 89077 push    [bp+arg_0] ;~ 28F0:000C
cs=0x28f0;eip=0x00000f; 	T(ax = bp+var_2);	// 89078 lea     ax, [bp+var_2] ;~ 28F0:000F
cs=0x28f0;eip=0x000012; 	X(PUSH(ax));	// 89079 push    ax ;~ 28F0:0012
cs=0x28f0;eip=0x000013; 	R(CALLF(sub_30a14,0));	// 89080 call    sub_30A14 ;~ 28F0:0013
cs=0x28f0;eip=0x000018; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 89081 mov     word ptr [bp+var_6], ax ;~ 28F0:0018
cs=0x28f0;eip=0x00001b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 89082 mov     word ptr [bp+var_6+2], dx ;~ 28F0:001B
cs=0x28f0;eip=0x00001e; 	T(OR(dx, ax));	// 89083 or      dx, ax ;~ 28F0:001E
cs=0x28f0;eip=0x000020; 	R(JNZ(loc_37514));	// 89084 jnz     short loc_37514 ;~ 28F0:0020
cs=0x28f0;eip=0x000022; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 89085 push    [bp+arg_0] ;~ 28F0:0022
cs=0x28f0;eip=0x000025; 	T(ax = bp+var_2);	// 89086 lea     ax, [bp+var_2] ;~ 28F0:0025
cs=0x28f0;eip=0x000028; 	X(PUSH(ax));	// 89087 push    ax ;~ 28F0:0028
cs=0x28f0;eip=0x000029; 	R(CALLF(sub_31643,0));	// 89088 call    sub_31643 ;~ 28F0:0029
cs=0x28f0;eip=0x00002e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 89089 mov     word ptr [bp+var_6], ax ;~ 28F0:002E
cs=0x28f0;eip=0x000031; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 89090 mov     word ptr [bp+var_6+2], dx ;~ 28F0:0031
loc_37514:
	// 10102 
cs=0x28f0;eip=0x000034; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 89093 mov     ax, word ptr [bp+var_6] ;~ 28F0:0034
cs=0x28f0;eip=0x000037; 	T(OR(ax, *(dw*)((dw*)(raddr(ss,bp+var_6+2)))));	// 89094 or      ax, word ptr [bp+var_6+2] ;~ 28F0:0037
cs=0x28f0;eip=0x00003a; 	R(JZ(loc_37544));	// 89095 jz      short loc_37544 ;~ 28F0:003A
cs=0x28f0;eip=0x00003c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 89096 les     bx, [bp+var_6] ;~ 28F0:003C
cs=0x28f0;eip=0x00003f; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 3));	// 89097 cmp     word ptr es:[bx+306h], 3 ;~ 28F0:003F
cs=0x28f0;eip=0x000045; 	R(JNZ(loc_37544));	// 89098 jnz     short loc_37544 ;~ 28F0:0045
cs=0x28f0;eip=0x000047; 	T(MOV(ax, bx));	// 89099 mov     ax, bx ;~ 28F0:0047
cs=0x28f0;eip=0x000049; 	T(MOV(dx, es));	// 89100 mov     dx, es ;~ 28F0:0049
cs=0x28f0;eip=0x00004b; 	T(ADD(ax, 0x344));	// 89101 add     ax, 344h ;~ 28F0:004B
cs=0x28f0;eip=0x00004e; 	X(MOV(*(dw*)(raddr(es,bx+0x326)), ax));	// 89102 mov     es:[bx+326h], ax ;~ 28F0:004E
cs=0x28f0;eip=0x000053; 	X(MOV(*(dw*)(raddr(es,bx+0x328)), dx));	// 89103 mov     es:[bx+328h], dx ;~ 28F0:0053
cs=0x28f0;eip=0x000058; 	T(SUB(ax, ax));	// 89104 sub     ax, ax ;~ 28F0:0058
cs=0x28f0;eip=0x00005a; 	X(MOV(*(dw*)(raddr(es,bx+0x66C)), ax));	// 89105 mov     es:[bx+66Ch], ax ;~ 28F0:005A
cs=0x28f0;eip=0x00005f; 	X(MOV(*(dw*)(raddr(es,bx+0x66A)), ax));	// 89106 mov     es:[bx+66Ah], ax ;~ 28F0:005F
loc_37544:
	// 10103 
cs=0x28f0;eip=0x000064; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 89110 mov     ax, word ptr [bp+var_6] ;~ 28F0:0064
cs=0x28f0;eip=0x000067; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_6+2)))));	// 89111 mov     dx, word ptr [bp+var_6+2] ;~ 28F0:0067
cs=0x28f0;eip=0x00006a; 	T(MOV(sp, bp));	// 89112 mov     sp, bp ;~ 28F0:006A
cs=0x28f0;eip=0x00006c; 	X(POP(bp));	// 89113 pop     bp ;~ 28F0:006C
cs=0x28f0;eip=0x00006d; 	R(RETN(2));	// 89114 retn    2 ;~ 28F0:006D
sub_37550:
	// 89122 
#undef var_4
#define var_4 -4
	// 89124 var_4           = dword ptr -4 ;~ 28F0:0070
#undef arg_0
#define arg_0 6
	// 89125 arg_0           = word ptr  6 ;~ 28F0:0070
#undef arg_2
#define arg_2 8
	// 89126 arg_2           = word ptr  8 ;~ 28F0:0070
#undef arg_4
#define arg_4 0x0A
	// 89127 arg_4           = word ptr  0Ah ;~ 28F0:0070
cs=0x28f0;eip=0x000070; 	X(PUSH(bp));	// 89129 push    bp ;~ 28F0:0070
cs=0x28f0;eip=0x000071; 	T(MOV(bp, sp));	// 89130 mov     bp, sp ;~ 28F0:0071
cs=0x28f0;eip=0x000073; 	T(SUB(sp, 4));	// 89131 sub     sp, 4 ;~ 28F0:0073
cs=0x28f0;eip=0x000076; 	X(PUSH(si));	// 89132 push    si ;~ 28F0:0076
cs=0x28f0;eip=0x000077; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 89133 push    [bp+arg_0] ;~ 28F0:0077
cs=0x28f0;eip=0x00007a; 	R(CALL(sub_374e6,0));	// 89134 call    sub_374E6 ;~ 28F0:007A
cs=0x28f0;eip=0x00007d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 89135 mov     word ptr [bp+var_4], ax ;~ 28F0:007D
cs=0x28f0;eip=0x000080; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 89136 mov     word ptr [bp+var_4+2], dx ;~ 28F0:0080
cs=0x28f0;eip=0x000083; 	T(OR(ax, dx));	// 89137 or      ax, dx ;~ 28F0:0083
cs=0x28f0;eip=0x000085; 	R(JNZ(loc_3756a));	// 89138 jnz     short loc_3756A ;~ 28F0:0085
cs=0x28f0;eip=0x000087; 	R(JMP(loc_376d6));	// 89139 jmp     loc_376D6 ;~ 28F0:0087
loc_3756a:
	// 10104 
cs=0x28f0;eip=0x00008a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 89143 les     bx, [bp+var_4] ;~ 28F0:008A
cs=0x28f0;eip=0x00008d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 89144 mov     ax, [bp+arg_2] ;~ 28F0:008D
cs=0x28f0;eip=0x000090; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 89145 mov     dx, [bp+arg_4] ;~ 28F0:0090
cs=0x28f0;eip=0x000093; 	X(MOV(*(dw*)(raddr(es,bx+0x31C)), ax));	// 89146 mov     es:[bx+31Ch], ax ;~ 28F0:0093
cs=0x28f0;eip=0x000098; 	X(MOV(*(dw*)(raddr(es,bx+0x31E)), dx));	// 89147 mov     es:[bx+31Eh], dx ;~ 28F0:0098
cs=0x28f0;eip=0x00009d; 	T(MOV(si, *(dw*)((&unk_47ab2))));	// 89148 mov     si, word ptr unk_47AB2 ;~ 28F0:009D
cs=0x28f0;eip=0x0000a1; 	T(SHL(si, 1));	// 89149 shl     si, 1 ;~ 28F0:00A1
cs=0x28f0;eip=0x0000a3; 	T(SHL(si, 1));	// 89150 shl     si, 1 ;~ 28F0:00A3
cs=0x28f0;eip=0x0000a5; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x2B0E))));	// 89151 mov     ax, [si+2B0Eh] ;~ 28F0:00A5
cs=0x28f0;eip=0x0000a9; 	T(MOV(dx, *(dw*)(raddr(ds,si+0x2B10))));	// 89152 mov     dx, [si+2B10h] ;~ 28F0:00A9
cs=0x28f0;eip=0x0000ad; 	X(MOV(*(dw*)(raddr(es,bx+0x302)), ax));	// 89153 mov     es:[bx+302h], ax ;~ 28F0:00AD
cs=0x28f0;eip=0x0000b2; 	X(MOV(*(dw*)(raddr(es,bx+0x304)), dx));	// 89154 mov     es:[bx+304h], dx ;~ 28F0:00B2
cs=0x28f0;eip=0x0000b7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x27E))));	// 89155 mov     ax, es:[bx+27Eh] ;~ 28F0:00B7
cs=0x28f0;eip=0x0000bc; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x280))));	// 89156 mov     dx, es:[bx+280h] ;~ 28F0:00BC
cs=0x28f0;eip=0x0000c1; 	X(MOV(*(dw*)(raddr(es,bx+0x276)), ax));	// 89157 mov     es:[bx+276h], ax ;~ 28F0:00C1
cs=0x28f0;eip=0x0000c6; 	X(MOV(*(dw*)(raddr(es,bx+0x278)), dx));	// 89158 mov     es:[bx+278h], dx ;~ 28F0:00C6
cs=0x28f0;eip=0x0000cb; 	T(CMP(*(dw*)(raddr(es,bx+0x20C)), 0));	// 89159 cmp     word ptr es:[bx+20Ch], 0 ;~ 28F0:00CB
cs=0x28f0;eip=0x0000d1; 	R(JLE(loc_375bb));	// 89160 jle     short loc_375BB ;~ 28F0:00D1
cs=0x28f0;eip=0x0000d3; 	T(CMP(*(raddr(es,bx+0x214)), 0));	// 89161 cmp     byte ptr es:[bx+214h], 0 ;~ 28F0:00D3
cs=0x28f0;eip=0x0000d9; 	R(JL(loc_375cb));	// 89162 jl      short loc_375CB ;~ 28F0:00D9
loc_375bb:
	// 10105 
cs=0x28f0;eip=0x0000db; 	T(CMP(*(dw*)(raddr(es,bx+0x20C)), 0));	// 89165 cmp     word ptr es:[bx+20Ch], 0 ;~ 28F0:00DB
cs=0x28f0;eip=0x0000e1; 	R(JGE(loc_375d8));	// 89166 jge     short loc_375D8 ;~ 28F0:00E1
cs=0x28f0;eip=0x0000e3; 	T(CMP(*(raddr(es,bx+0x214)), 0));	// 89167 cmp     byte ptr es:[bx+214h], 0 ;~ 28F0:00E3
cs=0x28f0;eip=0x0000e9; 	R(JLE(loc_375d8));	// 89168 jle     short loc_375D8 ;~ 28F0:00E9
loc_375cb:
	// 10106 
cs=0x28f0;eip=0x0000eb; 	T(MOV(al, *(raddr(es,bx+0x214))));	// 89171 mov     al, es:[bx+214h] ;~ 28F0:00EB
cs=0x28f0;eip=0x0000f0; 	T(CBW);	// 89172 cbw ;~ 28F0:00F0
cs=0x28f0;eip=0x0000f1; 	T(NEG(ax));	// 89173 neg     ax ;~ 28F0:00F1
cs=0x28f0;eip=0x0000f3; 	X(ADD(*(dw*)(raddr(es,bx+0x20C)), ax));	// 89174 add     es:[bx+20Ch], ax ;~ 28F0:00F3
loc_375d8:
	// 10107 
cs=0x28f0;eip=0x0000f8; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 89178 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:00F8
cs=0x28f0;eip=0x0000fe; 	R(JNZ(loc_375e7));	// 89179 jnz     short loc_375E7 ;~ 28F0:00FE
cs=0x28f0;eip=0x000100; 	X(PUSH(es));	// 89180 push    es ;~ 28F0:0100
cs=0x28f0;eip=0x000101; 	X(PUSH(bx));	// 89181 push    bx ;~ 28F0:0101
cs=0x28f0;eip=0x000102; 	R(CALL(sub_3a624,0));	// 89182 call    sub_3A624 ;~ 28F0:0102
cs=0x28f0;eip=0x000105; 	R(JMP(loc_375f6));	// 89183 jmp     short loc_375F6 ;~ 28F0:0105
loc_375e7:
	// 10108 
cs=0x28f0;eip=0x000107; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 89187 les     bx, [bp+var_4] ;~ 28F0:0107
cs=0x28f0;eip=0x00010a; 	T(SUB(ax, ax));	// 89188 sub     ax, ax ;~ 28F0:010A
cs=0x28f0;eip=0x00010c; 	X(MOV(*(dw*)(raddr(es,bx+0x324)), ax));	// 89189 mov     es:[bx+324h], ax ;~ 28F0:010C
cs=0x28f0;eip=0x000111; 	X(MOV(*(dw*)(raddr(es,bx+0x322)), ax));	// 89190 mov     es:[bx+322h], ax ;~ 28F0:0111
loc_375f6:
	// 10109 
cs=0x28f0;eip=0x000116; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 89193 push    word ptr [bp+var_4+2] ;~ 28F0:0116
cs=0x28f0;eip=0x000119; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 89194 push    word ptr [bp+var_4] ;~ 28F0:0119
cs=0x28f0;eip=0x00011c; 	R(CALL(sub_37e25,0));	// 89195 call    sub_37E25 ;~ 28F0:011C
cs=0x28f0;eip=0x00011f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 89196 les     bx, [bp+var_4] ;~ 28F0:011F
cs=0x28f0;eip=0x000122; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 89197 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:0122
cs=0x28f0;eip=0x000128; 	R(JNZ(loc_3761a));	// 89198 jnz     short loc_3761A ;~ 28F0:0128
cs=0x28f0;eip=0x00012a; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x24))));	// 89199 mov     ax, es:[bx+24h] ;~ 28F0:012A
cs=0x28f0;eip=0x00012e; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x26))));	// 89200 mov     dx, es:[bx+26h] ;~ 28F0:012E
cs=0x28f0;eip=0x000132; 	X(MOV(*(dw*)(raddr(es,bx+0x20)), ax));	// 89201 mov     es:[bx+20h], ax ;~ 28F0:0132
cs=0x28f0;eip=0x000136; 	X(MOV(*(dw*)(raddr(es,bx+0x22)), dx));	// 89202 mov     es:[bx+22h], dx ;~ 28F0:0136
loc_3761a:
	// 10110 
cs=0x28f0;eip=0x00013a; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 3));	// 89205 cmp     word ptr es:[bx+306h], 3 ;~ 28F0:013A
cs=0x28f0;eip=0x000140; 	R(JZ(loc_37625));	// 89206 jz      short loc_37625 ;~ 28F0:0140
cs=0x28f0;eip=0x000142; 	R(JMP(loc_376d6));	// 89207 jmp     loc_376D6 ;~ 28F0:0142
loc_37625:
	// 10111 
cs=0x28f0;eip=0x000145; 	X(MOV(*(dw*)(raddr(es,bx+0x306)), 1));	// 89211 mov     word ptr es:[bx+306h], 1 ;~ 28F0:0145
cs=0x28f0;eip=0x00014c; 	T(LES(bx, *(dw*)(raddr(es,bx+0x326))));	// 89212 les     bx, es:[bx+326h] ;~ 28F0:014C
cs=0x28f0;eip=0x000151; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 89213 mov     ax, [bp+arg_2] ;~ 28F0:0151
cs=0x28f0;eip=0x000154; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 89214 mov     dx, [bp+arg_4] ;~ 28F0:0154
cs=0x28f0;eip=0x000157; 	X(MOV(*(dw*)(raddr(es,bx+0x31C)), ax));	// 89215 mov     es:[bx+31Ch], ax ;~ 28F0:0157
cs=0x28f0;eip=0x00015c; 	X(MOV(*(dw*)(raddr(es,bx+0x31E)), dx));	// 89216 mov     es:[bx+31Eh], dx ;~ 28F0:015C
cs=0x28f0;eip=0x000161; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 89217 les     bx, [bp+var_4] ;~ 28F0:0161
cs=0x28f0;eip=0x000164; 	T(LES(bx, *(dw*)(raddr(es,bx+0x326))));	// 89218 les     bx, es:[bx+326h] ;~ 28F0:0164
cs=0x28f0;eip=0x000169; 	T(MOV(si, *(dw*)((&unk_47ab2))));	// 89219 mov     si, word ptr unk_47AB2 ;~ 28F0:0169
cs=0x28f0;eip=0x00016d; 	T(SHL(si, 1));	// 89220 shl     si, 1 ;~ 28F0:016D
cs=0x28f0;eip=0x00016f; 	T(SHL(si, 1));	// 89221 shl     si, 1 ;~ 28F0:016F
cs=0x28f0;eip=0x000171; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x2B0E))));	// 89222 mov     ax, [si+2B0Eh] ;~ 28F0:0171
cs=0x28f0;eip=0x000175; 	T(MOV(dx, *(dw*)(raddr(ds,si+0x2B10))));	// 89223 mov     dx, [si+2B10h] ;~ 28F0:0175
cs=0x28f0;eip=0x000179; 	X(MOV(*(dw*)(raddr(es,bx+0x302)), ax));	// 89224 mov     es:[bx+302h], ax ;~ 28F0:0179
cs=0x28f0;eip=0x00017e; 	X(MOV(*(dw*)(raddr(es,bx+0x304)), dx));	// 89225 mov     es:[bx+304h], dx ;~ 28F0:017E
cs=0x28f0;eip=0x000183; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 89226 les     bx, [bp+var_4] ;~ 28F0:0183
cs=0x28f0;eip=0x000186; 	T(LES(bx, *(dw*)(raddr(es,bx+0x326))));	// 89227 les     bx, es:[bx+326h] ;~ 28F0:0186
cs=0x28f0;eip=0x00018b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x27E))));	// 89228 mov     ax, es:[bx+27Eh] ;~ 28F0:018B
cs=0x28f0;eip=0x000190; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x280))));	// 89229 mov     dx, es:[bx+280h] ;~ 28F0:0190
cs=0x28f0;eip=0x000195; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 89230 les     bx, [bp+var_4] ;~ 28F0:0195
cs=0x28f0;eip=0x000198; 	T(LES(bx, *(dw*)(raddr(es,bx+0x326))));	// 89231 les     bx, es:[bx+326h] ;~ 28F0:0198
cs=0x28f0;eip=0x00019d; 	X(MOV(*(dw*)(raddr(es,bx+0x276)), ax));	// 89232 mov     es:[bx+276h], ax ;~ 28F0:019D
cs=0x28f0;eip=0x0001a2; 	X(MOV(*(dw*)(raddr(es,bx+0x278)), dx));	// 89233 mov     es:[bx+278h], dx ;~ 28F0:01A2
cs=0x28f0;eip=0x0001a7; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 89234 les     bx, [bp+var_4] ;~ 28F0:01A7
cs=0x28f0;eip=0x0001aa; 	T(LES(bx, *(dw*)(raddr(es,bx+0x326))));	// 89235 les     bx, es:[bx+326h] ;~ 28F0:01AA
cs=0x28f0;eip=0x0001af; 	T(MOV(al, *(raddr(es,bx+0x214))));	// 89236 mov     al, es:[bx+214h] ;~ 28F0:01AF
cs=0x28f0;eip=0x0001b4; 	T(CBW);	// 89237 cbw ;~ 28F0:01B4
cs=0x28f0;eip=0x0001b5; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 89238 les     bx, [bp+var_4] ;~ 28F0:01B5
cs=0x28f0;eip=0x0001b8; 	T(LES(bx, *(dw*)(raddr(es,bx+0x326))));	// 89239 les     bx, es:[bx+326h] ;~ 28F0:01B8
cs=0x28f0;eip=0x0001bd; 	X(SUB(*(dw*)(raddr(es,bx+0x20C)), ax));	// 89240 sub     es:[bx+20Ch], ax ;~ 28F0:01BD
cs=0x28f0;eip=0x0001c2; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 89241 les     bx, [bp+var_4] ;~ 28F0:01C2
cs=0x28f0;eip=0x0001c5; 	X(PUSH(*(dw*)(raddr(es,bx+0x328))));	// 89242 push    word ptr es:[bx+328h] ;~ 28F0:01C5
cs=0x28f0;eip=0x0001ca; 	X(PUSH(*(dw*)(raddr(es,bx+0x326))));	// 89243 push    word ptr es:[bx+326h] ;~ 28F0:01CA
cs=0x28f0;eip=0x0001cf; 	R(CALL(sub_3a624,0));	// 89244 call    sub_3A624 ;~ 28F0:01CF
cs=0x28f0;eip=0x0001d2; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 89245 push    word ptr [bp+var_4+2] ;~ 28F0:01D2
cs=0x28f0;eip=0x0001d5; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 89246 push    word ptr [bp+var_4] ;~ 28F0:01D5
cs=0x28f0;eip=0x0001d8; 	R(CALL(sub_37e25,0));	// 89247 call    sub_37E25 ;~ 28F0:01D8
cs=0x28f0;eip=0x0001db; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 89248 les     bx, [bp+var_4] ;~ 28F0:01DB
cs=0x28f0;eip=0x0001de; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 89249 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:01DE
cs=0x28f0;eip=0x0001e4; 	R(JNZ(loc_376d6));	// 89250 jnz     short loc_376D6 ;~ 28F0:01E4
cs=0x28f0;eip=0x0001e6; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x24))));	// 89251 mov     ax, es:[bx+24h] ;~ 28F0:01E6
cs=0x28f0;eip=0x0001ea; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x26))));	// 89252 mov     dx, es:[bx+26h] ;~ 28F0:01EA
cs=0x28f0;eip=0x0001ee; 	X(MOV(*(dw*)(raddr(es,bx+0x20)), ax));	// 89253 mov     es:[bx+20h], ax ;~ 28F0:01EE
cs=0x28f0;eip=0x0001f2; 	X(MOV(*(dw*)(raddr(es,bx+0x22)), dx));	// 89254 mov     es:[bx+22h], dx ;~ 28F0:01F2
loc_376d6:
	// 10112 
cs=0x28f0;eip=0x0001f6; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 89258 mov     ax, word ptr [bp+var_4] ;~ 28F0:01F6
cs=0x28f0;eip=0x0001f9; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 89259 mov     dx, word ptr [bp+var_4+2] ;~ 28F0:01F9
cs=0x28f0;eip=0x0001fc; 	X(POP(si));	// 89260 pop     si ;~ 28F0:01FC
cs=0x28f0;eip=0x0001fd; 	T(MOV(sp, bp));	// 89261 mov     sp, bp ;~ 28F0:01FD
cs=0x28f0;eip=0x0001ff; 	X(POP(bp));	// 89262 pop     bp ;~ 28F0:01FF
cs=0x28f0;eip=0x000200; 	R(RETF(0));	// 89263 retf ;~ 28F0:0200
sub_376e1:
	// 89271 
#undef arg_0
#define arg_0 6
	// 89274 arg_0           = dword ptr  6 ;~ 28F0:0201
#undef arg_4
#define arg_4 0x0A
	// 89275 arg_4           = word ptr  0Ah ;~ 28F0:0201
cs=0x28f0;eip=0x000201; 	X(PUSH(bp));	// 89277 push    bp ;~ 28F0:0201
cs=0x28f0;eip=0x000202; 	T(MOV(bp, sp));	// 89278 mov     bp, sp ;~ 28F0:0202
cs=0x28f0;eip=0x000204; 	X(PUSH(si));	// 89279 push    si ;~ 28F0:0204
cs=0x28f0;eip=0x000205; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89280 les     bx, [bp+arg_0] ;~ 28F0:0205
cs=0x28f0;eip=0x000208; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x276))));	// 89281 mov     ax, es:[bx+276h] ;~ 28F0:0208
cs=0x28f0;eip=0x00020d; 	T(OR(ax, *(dw*)(raddr(es,bx+0x278))));	// 89282 or      ax, es:[bx+278h] ;~ 28F0:020D
cs=0x28f0;eip=0x000212; 	R(JNZ(loc_376f7));	// 89283 jnz     short loc_376F7 ;~ 28F0:0212
cs=0x28f0;eip=0x000214; 	R(JMP(loc_37784));	// 89284 jmp     loc_37784 ;~ 28F0:0214
loc_376f7:
	// 10113 
cs=0x28f0;eip=0x000217; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x31));	// 89288 cmp     [bp+arg_4], 31h ; '1' ;~ 28F0:0217
cs=0x28f0;eip=0x00021b; 	R(JGE(loc_37700));	// 89289 jge     short loc_37700 ;~ 28F0:021B
cs=0x28f0;eip=0x00021d; 	R(JMP(loc_37784));	// 89290 jmp     loc_37784 ;~ 28F0:021D
loc_37700:
	// 10114 
cs=0x28f0;eip=0x000220; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x35));	// 89294 cmp     [bp+arg_4], 35h ; '5' ;~ 28F0:0220
cs=0x28f0;eip=0x000224; 	R(JG(loc_37784));	// 89295 jg      short loc_37784 ;~ 28F0:0224
cs=0x28f0;eip=0x000226; 	T(SUB(ax, ax));	// 89296 sub     ax, ax ;~ 28F0:0226
cs=0x28f0;eip=0x000228; 	X(MOV(*(dw*)(raddr(es,bx+0x244)), ax));	// 89297 mov     es:[bx+244h], ax ;~ 28F0:0228
cs=0x28f0;eip=0x00022d; 	X(MOV(*(dw*)(raddr(es,bx+0x242)), ax));	// 89298 mov     es:[bx+242h], ax ;~ 28F0:022D
cs=0x28f0;eip=0x000232; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 89299 mov     si, [bp+arg_4] ;~ 28F0:0232
cs=0x28f0;eip=0x000235; 	T(SHL(si, 1));	// 89300 shl     si, 1 ;~ 28F0:0235
cs=0x28f0;eip=0x000237; 	T(MOV(ax, *(dw*)(raddr(es,bx+si+0x1D6))));	// 89301 mov     ax, es:[bx+si+1D6h] ;~ 28F0:0237
cs=0x28f0;eip=0x00023c; 	T(CWD);	// 89302 cwd ;~ 28F0:023C
cs=0x28f0;eip=0x00023d; 	T(MOV(dh, dl));	// 89303 mov     dh, dl ;~ 28F0:023D
cs=0x28f0;eip=0x00023f; 	T(MOV(dl, ah));	// 89304 mov     dl, ah ;~ 28F0:023F
cs=0x28f0;eip=0x000241; 	T(MOV(ah, al));	// 89305 mov     ah, al ;~ 28F0:0241
cs=0x28f0;eip=0x000243; 	T(SUB(al, al));	// 89306 sub     al, al ;~ 28F0:0243
cs=0x28f0;eip=0x000245; 	X(MOV(*(dw*)(raddr(es,bx+0x21C)), ax));	// 89307 mov     es:[bx+21Ch], ax ;~ 28F0:0245
cs=0x28f0;eip=0x00024a; 	X(MOV(*(dw*)(raddr(es,bx+0x21E)), dx));	// 89308 mov     es:[bx+21Eh], dx ;~ 28F0:024A
cs=0x28f0;eip=0x00024f; 	T(TEST(*(raddr(es,bx+0x340)), 1));	// 89309 test    byte ptr es:[bx+340h], 1 ;~ 28F0:024F
cs=0x28f0;eip=0x000255; 	R(JZ(loc_3775e));	// 89310 jz      short loc_3775E ;~ 28F0:0255
cs=0x28f0;eip=0x000257; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x236))));	// 89311 cmp     dx, es:[bx+236h] ;~ 28F0:0257
cs=0x28f0;eip=0x00025c; 	R(JL(loc_37751));	// 89312 jl      short loc_37751 ;~ 28F0:025C
cs=0x28f0;eip=0x00025e; 	R(JG(loc_37747));	// 89313 jg      short loc_37747 ;~ 28F0:025E
cs=0x28f0;eip=0x000260; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x234))));	// 89314 cmp     ax, es:[bx+234h] ;~ 28F0:0260
cs=0x28f0;eip=0x000265; 	R(JBE(loc_37751));	// 89315 jbe     short loc_37751 ;~ 28F0:0265
loc_37747:
	// 10115 
cs=0x28f0;eip=0x000267; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x236))));	// 89318 mov     dx, es:[bx+236h] ;~ 28F0:0267
cs=0x28f0;eip=0x00026c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x234))));	// 89319 mov     ax, es:[bx+234h] ;~ 28F0:026C
loc_37751:
	// 10116 
cs=0x28f0;eip=0x000271; 	X(MOV(*(dw*)(raddr(es,bx+0x21C)), ax));	// 89323 mov     es:[bx+21Ch], ax ;~ 28F0:0271
cs=0x28f0;eip=0x000276; 	X(MOV(*(dw*)(raddr(es,bx+0x21E)), dx));	// 89324 mov     es:[bx+21Eh], dx ;~ 28F0:0276
cs=0x28f0;eip=0x00027b; 	R(JMP(loc_37a17));	// 89325 jmp     loc_37A17 ;~ 28F0:027B
loc_3775e:
	// 10117 
cs=0x28f0;eip=0x00027e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x21C))));	// 89329 mov     ax, es:[bx+21Ch] ;~ 28F0:027E
cs=0x28f0;eip=0x000283; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21E))));	// 89330 mov     dx, es:[bx+21Eh] ;~ 28F0:0283
cs=0x28f0;eip=0x000288; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x222))));	// 89331 cmp     dx, es:[bx+222h] ;~ 28F0:0288
cs=0x28f0;eip=0x00028d; 	R(JL(loc_37751));	// 89332 jl      short loc_37751 ;~ 28F0:028D
cs=0x28f0;eip=0x00028f; 	R(JG(loc_37778));	// 89333 jg      short loc_37778 ;~ 28F0:028F
cs=0x28f0;eip=0x000291; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x220))));	// 89334 cmp     ax, es:[bx+220h] ;~ 28F0:0291
cs=0x28f0;eip=0x000296; 	R(JBE(loc_37751));	// 89335 jbe     short loc_37751 ;~ 28F0:0296
loc_37778:
	// 10118 
cs=0x28f0;eip=0x000298; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x222))));	// 89338 mov     dx, es:[bx+222h] ;~ 28F0:0298
cs=0x28f0;eip=0x00029d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x220))));	// 89339 mov     ax, es:[bx+220h] ;~ 28F0:029D
cs=0x28f0;eip=0x0002a2; 	R(JMP(loc_37751));	// 89340 jmp     short loc_37751 ;~ 28F0:02A2
loc_37784:
	// 10119 
cs=0x28f0;eip=0x0002a4; 	X(OR(*(db*)(raddr(ss,bp+arg_4)), 0x20));	// 89345 or      byte ptr [bp+arg_4], 20h ;~ 28F0:02A4
cs=0x28f0;eip=0x0002a8; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x276))));	// 89346 mov     ax, es:[bx+276h] ;~ 28F0:02A8
cs=0x28f0;eip=0x0002ad; 	T(OR(ax, *(dw*)(raddr(es,bx+0x278))));	// 89347 or      ax, es:[bx+278h] ;~ 28F0:02AD
cs=0x28f0;eip=0x0002b2; 	R(JZ(loc_37812));	// 89348 jz      short loc_37812 ;~ 28F0:02B2
cs=0x28f0;eip=0x0002b4; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x37));	// 89349 cmp     [bp+arg_4], 37h ; '7' ;~ 28F0:02B4
cs=0x28f0;eip=0x0002b8; 	R(JNZ(loc_37812));	// 89350 jnz     short loc_37812 ;~ 28F0:02B8
cs=0x28f0;eip=0x0002ba; 	T(SUB(ax, ax));	// 89351 sub     ax, ax ;~ 28F0:02BA
cs=0x28f0;eip=0x0002bc; 	X(MOV(*(dw*)(raddr(es,bx+0x244)), ax));	// 89352 mov     es:[bx+244h], ax ;~ 28F0:02BC
cs=0x28f0;eip=0x0002c1; 	X(MOV(*(dw*)(raddr(es,bx+0x242)), ax));	// 89353 mov     es:[bx+242h], ax ;~ 28F0:02C1
cs=0x28f0;eip=0x0002c6; 	X(ADD(*(dw*)(raddr(es,bx+0x21C)), 0x0A00));	// 89354 add     word ptr es:[bx+21Ch], 0A00h ;~ 28F0:02C6
cs=0x28f0;eip=0x0002cd; 	X(ADC(*(dw*)(raddr(es,bx+0x21E)), 0));	// 89355 adc     word ptr es:[bx+21Eh], 0 ;~ 28F0:02CD
cs=0x28f0;eip=0x0002d3; 	T(TEST(*(raddr(es,bx+0x340)), 1));	// 89356 test    byte ptr es:[bx+340h], 1 ;~ 28F0:02D3
cs=0x28f0;eip=0x0002d9; 	R(JZ(loc_377ec));	// 89357 jz      short loc_377EC ;~ 28F0:02D9
cs=0x28f0;eip=0x0002db; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x21C))));	// 89358 mov     ax, es:[bx+21Ch] ;~ 28F0:02DB
cs=0x28f0;eip=0x0002e0; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21E))));	// 89359 mov     dx, es:[bx+21Eh] ;~ 28F0:02E0
cs=0x28f0;eip=0x0002e5; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x236))));	// 89360 cmp     dx, es:[bx+236h] ;~ 28F0:02E5
cs=0x28f0;eip=0x0002ea; 	R(JL(loc_377df));	// 89361 jl      short loc_377DF ;~ 28F0:02EA
cs=0x28f0;eip=0x0002ec; 	R(JG(loc_377d5));	// 89362 jg      short loc_377D5 ;~ 28F0:02EC
cs=0x28f0;eip=0x0002ee; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x234))));	// 89363 cmp     ax, es:[bx+234h] ;~ 28F0:02EE
cs=0x28f0;eip=0x0002f3; 	R(JBE(loc_377df));	// 89364 jbe     short loc_377DF ;~ 28F0:02F3
loc_377d5:
	// 10120 
cs=0x28f0;eip=0x0002f5; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x236))));	// 89367 mov     dx, es:[bx+236h] ;~ 28F0:02F5
cs=0x28f0;eip=0x0002fa; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x234))));	// 89368 mov     ax, es:[bx+234h] ;~ 28F0:02FA
loc_377df:
	// 10121 
cs=0x28f0;eip=0x0002ff; 	X(MOV(*(dw*)(raddr(es,bx+0x21C)), ax));	// 89372 mov     es:[bx+21Ch], ax ;~ 28F0:02FF
cs=0x28f0;eip=0x000304; 	X(MOV(*(dw*)(raddr(es,bx+0x21E)), dx));	// 89373 mov     es:[bx+21Eh], dx ;~ 28F0:0304
cs=0x28f0;eip=0x000309; 	R(JMP(loc_3793f));	// 89374 jmp     loc_3793F ;~ 28F0:0309
loc_377ec:
	// 10122 
cs=0x28f0;eip=0x00030c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x21C))));	// 89378 mov     ax, es:[bx+21Ch] ;~ 28F0:030C
cs=0x28f0;eip=0x000311; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21E))));	// 89379 mov     dx, es:[bx+21Eh] ;~ 28F0:0311
cs=0x28f0;eip=0x000316; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x222))));	// 89380 cmp     dx, es:[bx+222h] ;~ 28F0:0316
cs=0x28f0;eip=0x00031b; 	R(JL(loc_377df));	// 89381 jl      short loc_377DF ;~ 28F0:031B
cs=0x28f0;eip=0x00031d; 	R(JG(loc_37806));	// 89382 jg      short loc_37806 ;~ 28F0:031D
cs=0x28f0;eip=0x00031f; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x220))));	// 89383 cmp     ax, es:[bx+220h] ;~ 28F0:031F
cs=0x28f0;eip=0x000324; 	R(JBE(loc_377df));	// 89384 jbe     short loc_377DF ;~ 28F0:0324
loc_37806:
	// 10123 
cs=0x28f0;eip=0x000326; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x222))));	// 89387 mov     dx, es:[bx+222h] ;~ 28F0:0326
cs=0x28f0;eip=0x00032b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x220))));	// 89388 mov     ax, es:[bx+220h] ;~ 28F0:032B
cs=0x28f0;eip=0x000330; 	R(JMP(loc_377df));	// 89389 jmp     short loc_377DF ;~ 28F0:0330
loc_37812:
	// 10124 
cs=0x28f0;eip=0x000332; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x36));	// 89394 cmp     [bp+arg_4], 36h ; '6' ;~ 28F0:0332
cs=0x28f0;eip=0x000336; 	R(JNZ(loc_37857));	// 89395 jnz     short loc_37857 ;~ 28F0:0336
cs=0x28f0;eip=0x000338; 	T(SUB(ax, ax));	// 89396 sub     ax, ax ;~ 28F0:0338
cs=0x28f0;eip=0x00033a; 	X(MOV(*(dw*)(raddr(es,bx+0x244)), ax));	// 89397 mov     es:[bx+244h], ax ;~ 28F0:033A
cs=0x28f0;eip=0x00033f; 	X(MOV(*(dw*)(raddr(es,bx+0x242)), ax));	// 89398 mov     es:[bx+242h], ax ;~ 28F0:033F
cs=0x28f0;eip=0x000344; 	X(SUB(*(dw*)(raddr(es,bx+0x21C)), 0x0A00));	// 89399 sub     word ptr es:[bx+21Ch], 0A00h ;~ 28F0:0344
cs=0x28f0;eip=0x00034b; 	X(SBB(*(dw*)(raddr(es,bx+0x21E)), 0));	// 89400 sbb     word ptr es:[bx+21Eh], 0 ;~ 28F0:034B
cs=0x28f0;eip=0x000351; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x21C))));	// 89401 mov     ax, es:[bx+21Ch] ;~ 28F0:0351
cs=0x28f0;eip=0x000356; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21E))));	// 89402 mov     dx, es:[bx+21Eh] ;~ 28F0:0356
cs=0x28f0;eip=0x00035b; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x226))));	// 89403 cmp     dx, es:[bx+226h] ;~ 28F0:035B
cs=0x28f0;eip=0x000360; 	R(JG(loc_377df));	// 89404 jg      short loc_377DF ;~ 28F0:0360
cs=0x28f0;eip=0x000362; 	R(JL(loc_3784b));	// 89405 jl      short loc_3784B ;~ 28F0:0362
cs=0x28f0;eip=0x000364; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x224))));	// 89406 cmp     ax, es:[bx+224h] ;~ 28F0:0364
cs=0x28f0;eip=0x000369; 	R(JNC(loc_377df));	// 89407 jnb     short loc_377DF ;~ 28F0:0369
loc_3784b:
	// 10125 
cs=0x28f0;eip=0x00036b; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x226))));	// 89410 mov     dx, es:[bx+226h] ;~ 28F0:036B
cs=0x28f0;eip=0x000370; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x224))));	// 89411 mov     ax, es:[bx+224h] ;~ 28F0:0370
cs=0x28f0;eip=0x000375; 	R(JMP(loc_377df));	// 89412 jmp     short loc_377DF ;~ 28F0:0375
loc_37857:
	// 10126 
cs=0x28f0;eip=0x000377; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x67));	// 89416 cmp     [bp+arg_4], 67h ; 'g' ;~ 28F0:0377
cs=0x28f0;eip=0x00037b; 	R(JNZ(loc_378ba));	// 89417 jnz     short loc_378BA ;~ 28F0:037B
cs=0x28f0;eip=0x00037d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89418 les     bx, [bp+arg_0] ;~ 28F0:037D
cs=0x28f0;eip=0x000380; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 89419 mov     ax, es:[bx+2FAh] ;~ 28F0:0380
cs=0x28f0;eip=0x000385; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 89420 mov     dx, es:[bx+2FCh] ;~ 28F0:0385
cs=0x28f0;eip=0x00038a; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 89421 add     ax, es:[bx+302h] ;~ 28F0:038A
cs=0x28f0;eip=0x00038f; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 89422 adc     dx, es:[bx+304h] ;~ 28F0:038F
cs=0x28f0;eip=0x000394; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 89423 les     bx, es:[bx+31Ch] ;~ 28F0:0394
cs=0x28f0;eip=0x000399; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 89424 cmp     dx, es:[bx+0Ch] ;~ 28F0:0399
cs=0x28f0;eip=0x00039d; 	R(JG(loc_378ba));	// 89425 jg      short loc_378BA ;~ 28F0:039D
cs=0x28f0;eip=0x00039f; 	R(JL(loc_37887));	// 89426 jl      short loc_37887 ;~ 28F0:039F
cs=0x28f0;eip=0x0003a1; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 89427 cmp     ax, es:[bx+0Ah] ;~ 28F0:03A1
cs=0x28f0;eip=0x0003a5; 	R(JNC(loc_378ba));	// 89428 jnb     short loc_378BA ;~ 28F0:03A5
loc_37887:
	// 10127 
cs=0x28f0;eip=0x0003a7; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89431 les     bx, [bp+arg_0] ;~ 28F0:03A7
cs=0x28f0;eip=0x0003aa; 	T(TEST(*(raddr(es,bx+0x340)), 8));	// 89432 test    byte ptr es:[bx+340h], 8 ;~ 28F0:03AA
cs=0x28f0;eip=0x0003b0; 	R(JNZ(loc_378ba));	// 89433 jnz     short loc_378BA ;~ 28F0:03B0
cs=0x28f0;eip=0x0003b2; 	T(CMP(*(dw*)((&unk_47ab2)), 3));	// 89434 cmp     word ptr unk_47AB2, 3 ;~ 28F0:03B2
cs=0x28f0;eip=0x0003b7; 	R(JZ(loc_378a3));	// 89435 jz      short loc_378A3 ;~ 28F0:03B7
cs=0x28f0;eip=0x0003b9; 	T(CMP(*(dw*)((&unk_47ab2)), 2));	// 89436 cmp     word ptr unk_47AB2, 2 ;~ 28F0:03B9
cs=0x28f0;eip=0x0003be; 	R(JZ(loc_378a3));	// 89437 jz      short loc_378A3 ;~ 28F0:03BE
cs=0x28f0;eip=0x0003c0; 	R(JMP(loc_3793f));	// 89438 jmp     loc_3793F ;~ 28F0:03C0
loc_378a3:
	// 10128 
cs=0x28f0;eip=0x0003c3; 	T(CMP(*(dw*)(raddr(es,bx+0x212)), 1));	// 89443 cmp     word ptr es:[bx+212h], 1 ;~ 28F0:03C3
cs=0x28f0;eip=0x0003c9; 	T(SBB(ax, ax));	// 89444 sbb     ax, ax ;~ 28F0:03C9
cs=0x28f0;eip=0x0003cb; 	T(NEG(ax));	// 89445 neg     ax ;~ 28F0:03CB
cs=0x28f0;eip=0x0003cd; 	X(MOV(*(dw*)(raddr(es,bx+0x212)), ax));	// 89446 mov     es:[bx+212h], ax ;~ 28F0:03CD
cs=0x28f0;eip=0x0003d2; 	R(CALLF(sub_36f51,0));	// 89447 call    sub_36F51 ;~ 28F0:03D2
cs=0x28f0;eip=0x0003d7; 	R(JMP(loc_3793f));	// 89448 jmp     loc_3793F ;~ 28F0:03D7
loc_378ba:
	// 10129 
cs=0x28f0;eip=0x0003da; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x76));	// 89453 cmp     [bp+arg_4], 76h ; 'v' ;~ 28F0:03DA
cs=0x28f0;eip=0x0003de; 	R(JNZ(loc_3793f));	// 89454 jnz     short loc_3793F ;~ 28F0:03DE
cs=0x28f0;eip=0x0003e0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89455 les     bx, [bp+arg_0] ;~ 28F0:03E0
cs=0x28f0;eip=0x0003e3; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x326))));	// 89456 mov     ax, es:[bx+326h] ;~ 28F0:03E3
cs=0x28f0;eip=0x0003e8; 	T(OR(ax, *(dw*)(raddr(es,bx+0x328))));	// 89457 or      ax, es:[bx+328h] ;~ 28F0:03E8
cs=0x28f0;eip=0x0003ed; 	R(JZ(loc_3793f));	// 89458 jz      short loc_3793F ;~ 28F0:03ED
cs=0x28f0;eip=0x0003ef; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x32C))));	// 89459 mov     ax, es:[bx+32Ch] ;~ 28F0:03EF
cs=0x28f0;eip=0x0003f4; 	T(OR(ax, *(dw*)(raddr(es,bx+0x32E))));	// 89460 or      ax, es:[bx+32Eh] ;~ 28F0:03F4
cs=0x28f0;eip=0x0003f9; 	R(JNZ(loc_3793f));	// 89461 jnz     short loc_3793F ;~ 28F0:03F9
cs=0x28f0;eip=0x0003fb; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 89462 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:03FB
cs=0x28f0;eip=0x000401; 	R(JNZ(loc_378fd));	// 89463 jnz     short loc_378FD ;~ 28F0:0401
loc_378e3:
	// 10130 
cs=0x28f0;eip=0x000403; 	R(CALLF(sub_36f51,0));	// 89466 call    sub_36F51 ;~ 28F0:0403
cs=0x28f0;eip=0x000408; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89467 les     bx, [bp+arg_0] ;~ 28F0:0408
cs=0x28f0;eip=0x00040b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x32A))));	// 89468 mov     ax, es:[bx+32Ah] ;~ 28F0:040B
cs=0x28f0;eip=0x000410; 	T(CWD);	// 89469 cwd ;~ 28F0:0410
cs=0x28f0;eip=0x000411; 	X(MOV(*(dw*)(raddr(es,bx+0x32C)), ax));	// 89470 mov     es:[bx+32Ch], ax ;~ 28F0:0411
cs=0x28f0;eip=0x000416; 	X(MOV(*(dw*)(raddr(es,bx+0x32E)), dx));	// 89471 mov     es:[bx+32Eh], dx ;~ 28F0:0416
cs=0x28f0;eip=0x00041b; 	R(JMP(loc_3793f));	// 89472 jmp     short loc_3793F ;~ 28F0:041B
loc_378fd:
	// 10131 
cs=0x28f0;eip=0x00041d; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 89476 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:041D
cs=0x28f0;eip=0x000423; 	R(JNZ(loc_3793f));	// 89477 jnz     short loc_3793F ;~ 28F0:0423
cs=0x28f0;eip=0x000425; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 89478 mov     ax, es:[bx+120h] ;~ 28F0:0425
cs=0x28f0;eip=0x00042a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 89479 mov     dx, es:[bx+122h] ;~ 28F0:042A
cs=0x28f0;eip=0x00042f; 	T(LES(bx, *(dw*)(raddr(es,bx+0x326))));	// 89480 les     bx, es:[bx+326h] ;~ 28F0:042F
cs=0x28f0;eip=0x000434; 	X(MOV(*(dw*)(raddr(es,bx+0x120)), ax));	// 89481 mov     es:[bx+120h], ax ;~ 28F0:0434
cs=0x28f0;eip=0x000439; 	X(MOV(*(dw*)(raddr(es,bx+0x122)), dx));	// 89482 mov     es:[bx+122h], dx ;~ 28F0:0439
cs=0x28f0;eip=0x00043e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89483 les     bx, [bp+arg_0] ;~ 28F0:043E
cs=0x28f0;eip=0x000441; 	X(PUSH(*(dw*)(raddr(es,bx+0x328))));	// 89484 push    word ptr es:[bx+328h] ;~ 28F0:0441
cs=0x28f0;eip=0x000446; 	X(PUSH(*(dw*)(raddr(es,bx+0x326))));	// 89485 push    word ptr es:[bx+326h] ;~ 28F0:0446
cs=0x28f0;eip=0x00044b; 	R(CALL(sub_3a769,0));	// 89486 call    sub_3A769 ;~ 28F0:044B
cs=0x28f0;eip=0x00044e; 	T(OR(ax, ax));	// 89487 or      ax, ax ;~ 28F0:044E
cs=0x28f0;eip=0x000450; 	R(JZ(loc_378e3));	// 89488 jz      short loc_378E3 ;~ 28F0:0450
cs=0x28f0;eip=0x000452; 	T(MOV(ax, 0x288));	// 89489 mov     ax, 288h ;~ 28F0:0452
cs=0x28f0;eip=0x000455; 	T(MOV(dx, seg_offset(seg041)));	// 89490 mov     dx, seg seg041 ;~ 28F0:0455
cs=0x28f0;eip=0x000458; 	X(PUSH(dx));	// 89491 push    dx ;~ 28F0:0458
cs=0x28f0;eip=0x000459; 	X(PUSH(ax));	// 89492 push    ax ;~ 28F0:0459
cs=0x28f0;eip=0x00045a; 	R(CALLF(sub_1c5f1,0));	// 89493 call    sub_1C5F1 ;~ 28F0:045A
loc_3793f:
	// 10132 
cs=0x28f0;eip=0x00045f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89497 les     bx, [bp+arg_0] ;~ 28F0:045F
cs=0x28f0;eip=0x000462; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 89498 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:0462
cs=0x28f0;eip=0x000468; 	R(JZ(loc_3794d));	// 89499 jz      short loc_3794D ;~ 28F0:0468
cs=0x28f0;eip=0x00046a; 	R(JMP(loc_37a17));	// 89500 jmp     loc_37A17 ;~ 28F0:046A
loc_3794d:
	// 10133 
cs=0x28f0;eip=0x00046d; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x39));	// 89504 cmp     [bp+arg_4], 39h ; '9' ;~ 28F0:046D
cs=0x28f0;eip=0x000471; 	R(JNZ(loc_3798c));	// 89505 jnz     short loc_3798C ;~ 28F0:0471
cs=0x28f0;eip=0x000473; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x48))));	// 89506 mov     ax, es:[bx+48h] ;~ 28F0:0473
cs=0x28f0;eip=0x000477; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x4A))));	// 89507 mov     dx, es:[bx+4Ah] ;~ 28F0:0477
cs=0x28f0;eip=0x00047b; 	X(ADD(*(dw*)(raddr(es,bx+0x44)), ax));	// 89508 add     es:[bx+44h], ax ;~ 28F0:047B
cs=0x28f0;eip=0x00047f; 	X(ADC(*(dw*)(raddr(es,bx+0x46)), dx));	// 89509 adc     es:[bx+46h], dx ;~ 28F0:047F
cs=0x28f0;eip=0x000483; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x44))));	// 89510 mov     ax, es:[bx+44h] ;~ 28F0:0483
cs=0x28f0;eip=0x000487; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x46))));	// 89511 mov     dx, es:[bx+46h] ;~ 28F0:0487
cs=0x28f0;eip=0x00048b; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x4A))));	// 89512 cmp     dx, es:[bx+4Ah] ;~ 28F0:048B
cs=0x28f0;eip=0x00048f; 	R(JL(loc_37981));	// 89513 jl      short loc_37981 ;~ 28F0:048F
cs=0x28f0;eip=0x000491; 	R(JG(loc_37979));	// 89514 jg      short loc_37979 ;~ 28F0:0491
cs=0x28f0;eip=0x000493; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x48))));	// 89515 cmp     ax, es:[bx+48h] ;~ 28F0:0493
cs=0x28f0;eip=0x000497; 	R(JBE(loc_37981));	// 89516 jbe     short loc_37981 ;~ 28F0:0497
loc_37979:
	// 10134 
cs=0x28f0;eip=0x000499; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x4A))));	// 89519 mov     dx, es:[bx+4Ah] ;~ 28F0:0499
cs=0x28f0;eip=0x00049d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x48))));	// 89520 mov     ax, es:[bx+48h] ;~ 28F0:049D
loc_37981:
	// 10135 
cs=0x28f0;eip=0x0004a1; 	X(MOV(*(dw*)(raddr(es,bx+0x44)), ax));	// 89524 mov     es:[bx+44h], ax ;~ 28F0:04A1
cs=0x28f0;eip=0x0004a5; 	X(MOV(*(dw*)(raddr(es,bx+0x46)), dx));	// 89525 mov     es:[bx+46h], dx ;~ 28F0:04A5
cs=0x28f0;eip=0x0004a9; 	R(JMP(loc_37a17));	// 89526 jmp     loc_37A17 ;~ 28F0:04A9
loc_3798c:
	// 10136 
cs=0x28f0;eip=0x0004ac; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x30));	// 89530 cmp     [bp+arg_4], 30h ; '0' ;~ 28F0:04AC
cs=0x28f0;eip=0x0004b0; 	R(JNZ(loc_379c2));	// 89531 jnz     short loc_379C2 ;~ 28F0:04B0
cs=0x28f0;eip=0x0004b2; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x4C))));	// 89532 mov     ax, es:[bx+4Ch] ;~ 28F0:04B2
cs=0x28f0;eip=0x0004b6; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x4E))));	// 89533 mov     dx, es:[bx+4Eh] ;~ 28F0:04B6
cs=0x28f0;eip=0x0004ba; 	X(ADD(*(dw*)(raddr(es,bx+0x44)), ax));	// 89534 add     es:[bx+44h], ax ;~ 28F0:04BA
cs=0x28f0;eip=0x0004be; 	X(ADC(*(dw*)(raddr(es,bx+0x46)), dx));	// 89535 adc     es:[bx+46h], dx ;~ 28F0:04BE
cs=0x28f0;eip=0x0004c2; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x44))));	// 89536 mov     ax, es:[bx+44h] ;~ 28F0:04C2
cs=0x28f0;eip=0x0004c6; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x46))));	// 89537 mov     dx, es:[bx+46h] ;~ 28F0:04C6
cs=0x28f0;eip=0x0004ca; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x4E))));	// 89538 cmp     dx, es:[bx+4Eh] ;~ 28F0:04CA
cs=0x28f0;eip=0x0004ce; 	R(JG(loc_37981));	// 89539 jg      short loc_37981 ;~ 28F0:04CE
cs=0x28f0;eip=0x0004d0; 	R(JL(loc_379b8));	// 89540 jl      short loc_379B8 ;~ 28F0:04D0
cs=0x28f0;eip=0x0004d2; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x4C))));	// 89541 cmp     ax, es:[bx+4Ch] ;~ 28F0:04D2
cs=0x28f0;eip=0x0004d6; 	R(JNC(loc_37981));	// 89542 jnb     short loc_37981 ;~ 28F0:04D6
loc_379b8:
	// 10137 
cs=0x28f0;eip=0x0004d8; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x4E))));	// 89545 mov     dx, es:[bx+4Eh] ;~ 28F0:04D8
cs=0x28f0;eip=0x0004dc; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x4C))));	// 89546 mov     ax, es:[bx+4Ch] ;~ 28F0:04DC
cs=0x28f0;eip=0x0004e0; 	R(JMP(loc_37981));	// 89547 jmp     short loc_37981 ;~ 28F0:04E0
loc_379c2:
	// 10138 
cs=0x28f0;eip=0x0004e2; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x60));	// 89551 cmp     [bp+arg_4], 60h ; '`' ;~ 28F0:04E2
cs=0x28f0;eip=0x0004e6; 	R(JNZ(loc_37a17));	// 89552 jnz     short loc_37A17 ;~ 28F0:04E6
cs=0x28f0;eip=0x0004e8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89553 les     bx, [bp+arg_0] ;~ 28F0:04E8
cs=0x28f0;eip=0x0004eb; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 8));	// 89554 cmp     word ptr es:[bx+332h], 8 ;~ 28F0:04EB
cs=0x28f0;eip=0x0004f1; 	R(JNZ(loc_379f0));	// 89555 jnz     short loc_379F0 ;~ 28F0:04F1
cs=0x28f0;eip=0x0004f3; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), 5));	// 89556 mov     word ptr es:[bx+332h], 5 ;~ 28F0:04F3
cs=0x28f0;eip=0x0004fa; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x160))));	// 89557 mov     ax, es:[bx+160h] ;~ 28F0:04FA
cs=0x28f0;eip=0x0004ff; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x162))));	// 89558 mov     dx, es:[bx+162h] ;~ 28F0:04FF
cs=0x28f0;eip=0x000504; 	X(MOV(*(dw*)(raddr(es,bx+0x1C0)), ax));	// 89559 mov     es:[bx+1C0h], ax ;~ 28F0:0504
cs=0x28f0;eip=0x000509; 	X(MOV(*(dw*)(raddr(es,bx+0x1C2)), dx));	// 89560 mov     es:[bx+1C2h], dx ;~ 28F0:0509
cs=0x28f0;eip=0x00050e; 	R(JMP(loc_37a17));	// 89561 jmp     short loc_37A17 ;~ 28F0:050E
loc_379f0:
	// 10139 
cs=0x28f0;eip=0x000510; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), 8));	// 89565 mov     word ptr es:[bx+332h], 8 ;~ 28F0:0510
cs=0x28f0;eip=0x000517; 	T(SUB(ax, ax));	// 89566 sub     ax, ax ;~ 28F0:0517
cs=0x28f0;eip=0x000519; 	X(MOV(*(dw*)(raddr(es,bx+0x21A)), ax));	// 89567 mov     es:[bx+21Ah], ax ;~ 28F0:0519
cs=0x28f0;eip=0x00051e; 	X(MOV(*(dw*)(raddr(es,bx+0x218)), ax));	// 89568 mov     es:[bx+218h], ax ;~ 28F0:051E
cs=0x28f0;eip=0x000523; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1C0))));	// 89569 mov     ax, es:[bx+1C0h] ;~ 28F0:0523
cs=0x28f0;eip=0x000528; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1C2))));	// 89570 mov     dx, es:[bx+1C2h] ;~ 28F0:0528
cs=0x28f0;eip=0x00052d; 	X(MOV(*(dw*)(raddr(es,bx+0x160)), ax));	// 89571 mov     es:[bx+160h], ax ;~ 28F0:052D
cs=0x28f0;eip=0x000532; 	X(MOV(*(dw*)(raddr(es,bx+0x162)), dx));	// 89572 mov     es:[bx+162h], dx ;~ 28F0:0532
loc_37a17:
	// 10140 
cs=0x28f0;eip=0x000537; 	X(POP(si));	// 89576 pop     si ;~ 28F0:0537
cs=0x28f0;eip=0x000538; 	X(POP(bp));	// 89577 pop     bp ;~ 28F0:0538
cs=0x28f0;eip=0x000539; 	R(RETF(0));	// 89578 retf ;~ 28F0:0539
sub_37a1a:
	// 89586 
#undef arg_0
#define arg_0 4
	// 89589 arg_0           = dword ptr  4 ;~ 28F0:053A
cs=0x28f0;eip=0x00053a; 	X(PUSH(bp));	// 89591 push    bp ;~ 28F0:053A
cs=0x28f0;eip=0x00053b; 	T(MOV(bp, sp));	// 89592 mov     bp, sp ;~ 28F0:053B
cs=0x28f0;eip=0x00053d; 	T(CMP(unk_55206, 0));	// 89593 cmp     byte ptr unk_55206, 0 ;~ 28F0:053D
cs=0x28f0;eip=0x000542; 	R(JZ(loc_37a29));	// 89594 jz      short loc_37A29 ;~ 28F0:0542
loc_37a24:
	// 10141 
cs=0x28f0;eip=0x000544; 	T(SUB(ax, ax));	// 89598 sub     ax, ax ;~ 28F0:0544
cs=0x28f0;eip=0x000546; 	R(JMP(loc_37bb9));	// 89599 jmp     loc_37BB9 ;~ 28F0:0546
loc_37a29:
	// 10142 
cs=0x28f0;eip=0x000549; 	T(CMP(*(dw*)((&unk_47ab2)), 3));	// 89603 cmp     word ptr unk_47AB2, 3 ;~ 28F0:0549
cs=0x28f0;eip=0x00054e; 	R(JZ(loc_37a37));	// 89604 jz      short loc_37A37 ;~ 28F0:054E
cs=0x28f0;eip=0x000550; 	T(CMP(*(dw*)((&unk_47ab2)), 2));	// 89605 cmp     word ptr unk_47AB2, 2 ;~ 28F0:0550
cs=0x28f0;eip=0x000555; 	R(JNZ(loc_37a48));	// 89606 jnz     short loc_37A48 ;~ 28F0:0555
loc_37a37:
	// 10143 
cs=0x28f0;eip=0x000557; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89609 les     bx, [bp+arg_0] ;~ 28F0:0557
cs=0x28f0;eip=0x00055a; 	T(CMP(*(dw*)(raddr(es,bx+0x212)), 0));	// 89610 cmp     word ptr es:[bx+212h], 0 ;~ 28F0:055A
cs=0x28f0;eip=0x000560; 	R(JNZ(loc_37a48));	// 89611 jnz     short loc_37A48 ;~ 28F0:0560
loc_37a42:
	// 10144 
cs=0x28f0;eip=0x000562; 	T(MOV(ax, 1));	// 89615 mov     ax, 1 ;~ 28F0:0562
cs=0x28f0;eip=0x000565; 	R(JMP(loc_37bb9));	// 89616 jmp     loc_37BB9 ;~ 28F0:0565
loc_37a48:
	// 10145 
cs=0x28f0;eip=0x000568; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89621 les     bx, [bp+arg_0] ;~ 28F0:0568
cs=0x28f0;eip=0x00056b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C0))));	// 89622 mov     ax, es:[bx+0C0h] ;~ 28F0:056B
cs=0x28f0;eip=0x000570; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C2))));	// 89623 mov     dx, es:[bx+0C2h] ;~ 28F0:0570
cs=0x28f0;eip=0x000575; 	T(OR(dx, dx));	// 89624 or      dx, dx ;~ 28F0:0575
cs=0x28f0;eip=0x000577; 	R(JGE(loc_37a60));	// 89625 jge     short loc_37A60 ;~ 28F0:0577
cs=0x28f0;eip=0x000579; 	T(NEG(ax));	// 89626 neg     ax ;~ 28F0:0579
cs=0x28f0;eip=0x00057b; 	T(ADC(dx, 0));	// 89627 adc     dx, 0 ;~ 28F0:057B
cs=0x28f0;eip=0x00057e; 	T(NEG(dx));	// 89628 neg     dx ;~ 28F0:057E
loc_37a60:
	// 10146 
cs=0x28f0;eip=0x000580; 	T(MOV(cx, ax));	// 89631 mov     cx, ax ;~ 28F0:0580
cs=0x28f0;eip=0x000582; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x208))));	// 89632 mov     ax, es:[bx+208h] ;~ 28F0:0582
cs=0x28f0;eip=0x000587; 	T(MOV(bx, dx));	// 89633 mov     bx, dx ;~ 28F0:0587
cs=0x28f0;eip=0x000589; 	T(CWD);	// 89634 cwd ;~ 28F0:0589
cs=0x28f0;eip=0x00058a; 	T(MOV(dh, dl));	// 89635 mov     dh, dl ;~ 28F0:058A
cs=0x28f0;eip=0x00058c; 	T(MOV(dl, ah));	// 89636 mov     dl, ah ;~ 28F0:058C
cs=0x28f0;eip=0x00058e; 	T(MOV(ah, al));	// 89637 mov     ah, al ;~ 28F0:058E
cs=0x28f0;eip=0x000590; 	T(SUB(al, al));	// 89638 sub     al, al ;~ 28F0:0590
cs=0x28f0;eip=0x000592; 	T(CMP(dx, bx));	// 89639 cmp     dx, bx ;~ 28F0:0592
cs=0x28f0;eip=0x000594; 	R(JL(loc_37a42));	// 89640 jl      short loc_37A42 ;~ 28F0:0594
cs=0x28f0;eip=0x000596; 	R(JG(loc_37a7c));	// 89641 jg      short loc_37A7C ;~ 28F0:0596
cs=0x28f0;eip=0x000598; 	T(CMP(ax, cx));	// 89642 cmp     ax, cx ;~ 28F0:0598
cs=0x28f0;eip=0x00059a; 	R(JBE(loc_37a42));	// 89643 jbe     short loc_37A42 ;~ 28F0:059A
loc_37a7c:
	// 10147 
cs=0x28f0;eip=0x00059c; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 89646 mov     bx, word ptr [bp+arg_0] ;~ 28F0:059C
cs=0x28f0;eip=0x00059f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 89647 mov     ax, es:[bx+0E0h] ;~ 28F0:059F
cs=0x28f0;eip=0x0005a4; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 89648 mov     dx, es:[bx+0E2h] ;~ 28F0:05A4
cs=0x28f0;eip=0x0005a9; 	T(OR(dx, dx));	// 89649 or      dx, dx ;~ 28F0:05A9
cs=0x28f0;eip=0x0005ab; 	R(JGE(loc_37a94));	// 89650 jge     short loc_37A94 ;~ 28F0:05AB
cs=0x28f0;eip=0x0005ad; 	T(NEG(ax));	// 89651 neg     ax ;~ 28F0:05AD
cs=0x28f0;eip=0x0005af; 	T(ADC(dx, 0));	// 89652 adc     dx, 0 ;~ 28F0:05AF
cs=0x28f0;eip=0x0005b2; 	T(NEG(dx));	// 89653 neg     dx ;~ 28F0:05B2
loc_37a94:
	// 10148 
cs=0x28f0;eip=0x0005b4; 	T(MOV(cx, ax));	// 89656 mov     cx, ax ;~ 28F0:05B4
cs=0x28f0;eip=0x0005b6; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x206))));	// 89657 mov     ax, es:[bx+206h] ;~ 28F0:05B6
cs=0x28f0;eip=0x0005bb; 	T(MOV(bx, dx));	// 89658 mov     bx, dx ;~ 28F0:05BB
cs=0x28f0;eip=0x0005bd; 	T(CWD);	// 89659 cwd ;~ 28F0:05BD
cs=0x28f0;eip=0x0005be; 	T(MOV(dh, dl));	// 89660 mov     dh, dl ;~ 28F0:05BE
cs=0x28f0;eip=0x0005c0; 	T(MOV(dl, ah));	// 89661 mov     dl, ah ;~ 28F0:05C0
cs=0x28f0;eip=0x0005c2; 	T(MOV(ah, al));	// 89662 mov     ah, al ;~ 28F0:05C2
cs=0x28f0;eip=0x0005c4; 	T(SUB(al, al));	// 89663 sub     al, al ;~ 28F0:05C4
cs=0x28f0;eip=0x0005c6; 	T(CMP(dx, bx));	// 89664 cmp     dx, bx ;~ 28F0:05C6
cs=0x28f0;eip=0x0005c8; 	R(JL(loc_37a42));	// 89665 jl      short loc_37A42 ;~ 28F0:05C8
cs=0x28f0;eip=0x0005ca; 	R(JG(loc_37ab0));	// 89666 jg      short loc_37AB0 ;~ 28F0:05CA
cs=0x28f0;eip=0x0005cc; 	T(CMP(ax, cx));	// 89667 cmp     ax, cx ;~ 28F0:05CC
cs=0x28f0;eip=0x0005ce; 	R(JBE(loc_37a42));	// 89668 jbe     short loc_37A42 ;~ 28F0:05CE
loc_37ab0:
	// 10149 
cs=0x28f0;eip=0x0005d0; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 89671 mov     bx, word ptr [bp+arg_0] ;~ 28F0:05D0
cs=0x28f0;eip=0x0005d3; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 89672 mov     ax, es:[bx+120h] ;~ 28F0:05D3
cs=0x28f0;eip=0x0005d8; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 89673 mov     dx, es:[bx+122h] ;~ 28F0:05D8
cs=0x28f0;eip=0x0005dd; 	T(OR(dx, dx));	// 89674 or      dx, dx ;~ 28F0:05DD
cs=0x28f0;eip=0x0005df; 	R(JGE(loc_37ac8));	// 89675 jge     short loc_37AC8 ;~ 28F0:05DF
cs=0x28f0;eip=0x0005e1; 	T(NEG(ax));	// 89676 neg     ax ;~ 28F0:05E1
cs=0x28f0;eip=0x0005e3; 	T(ADC(dx, 0));	// 89677 adc     dx, 0 ;~ 28F0:05E3
cs=0x28f0;eip=0x0005e6; 	T(NEG(dx));	// 89678 neg     dx ;~ 28F0:05E6
loc_37ac8:
	// 10150 
cs=0x28f0;eip=0x0005e8; 	T(MOV(cx, ax));	// 89681 mov     cx, ax ;~ 28F0:05E8
cs=0x28f0;eip=0x0005ea; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x200))));	// 89682 mov     ax, es:[bx+200h] ;~ 28F0:05EA
cs=0x28f0;eip=0x0005ef; 	T(MOV(bx, dx));	// 89683 mov     bx, dx ;~ 28F0:05EF
cs=0x28f0;eip=0x0005f1; 	T(CWD);	// 89684 cwd ;~ 28F0:05F1
cs=0x28f0;eip=0x0005f2; 	T(MOV(dh, dl));	// 89685 mov     dh, dl ;~ 28F0:05F2
cs=0x28f0;eip=0x0005f4; 	T(MOV(dl, ah));	// 89686 mov     dl, ah ;~ 28F0:05F4
cs=0x28f0;eip=0x0005f6; 	T(MOV(ah, al));	// 89687 mov     ah, al ;~ 28F0:05F6
cs=0x28f0;eip=0x0005f8; 	T(SUB(al, al));	// 89688 sub     al, al ;~ 28F0:05F8
cs=0x28f0;eip=0x0005fa; 	T(CMP(dx, bx));	// 89689 cmp     dx, bx ;~ 28F0:05FA
cs=0x28f0;eip=0x0005fc; 	R(JGE(loc_37ae1));	// 89690 jge     short loc_37AE1 ;~ 28F0:05FC
cs=0x28f0;eip=0x0005fe; 	R(JMP(loc_37a42));	// 89691 jmp     loc_37A42 ;~ 28F0:05FE
loc_37ae1:
	// 10151 
cs=0x28f0;eip=0x000601; 	R(JG(loc_37aea));	// 89695 jg      short loc_37AEA ;~ 28F0:0601
cs=0x28f0;eip=0x000603; 	T(CMP(ax, cx));	// 89696 cmp     ax, cx ;~ 28F0:0603
cs=0x28f0;eip=0x000605; 	R(JA(loc_37aea));	// 89697 ja      short loc_37AEA ;~ 28F0:0605
cs=0x28f0;eip=0x000607; 	R(JMP(loc_37a42));	// 89698 jmp     loc_37A42 ;~ 28F0:0607
loc_37aea:
	// 10152 
cs=0x28f0;eip=0x00060a; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 89703 mov     bx, word ptr [bp+arg_0] ;~ 28F0:060A
cs=0x28f0;eip=0x00060d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x140))));	// 89704 mov     ax, es:[bx+140h] ;~ 28F0:060D
cs=0x28f0;eip=0x000612; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x142))));	// 89705 mov     dx, es:[bx+142h] ;~ 28F0:0612
cs=0x28f0;eip=0x000617; 	T(OR(dx, dx));	// 89706 or      dx, dx ;~ 28F0:0617
cs=0x28f0;eip=0x000619; 	R(JGE(loc_37b02));	// 89707 jge     short loc_37B02 ;~ 28F0:0619
cs=0x28f0;eip=0x00061b; 	T(NEG(ax));	// 89708 neg     ax ;~ 28F0:061B
cs=0x28f0;eip=0x00061d; 	T(ADC(dx, 0));	// 89709 adc     dx, 0 ;~ 28F0:061D
cs=0x28f0;eip=0x000620; 	T(NEG(dx));	// 89710 neg     dx ;~ 28F0:0620
loc_37b02:
	// 10153 
cs=0x28f0;eip=0x000622; 	T(MOV(cx, ax));	// 89713 mov     cx, ax ;~ 28F0:0622
cs=0x28f0;eip=0x000624; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x202))));	// 89714 mov     ax, es:[bx+202h] ;~ 28F0:0624
cs=0x28f0;eip=0x000629; 	T(MOV(bx, dx));	// 89715 mov     bx, dx ;~ 28F0:0629
cs=0x28f0;eip=0x00062b; 	T(CWD);	// 89716 cwd ;~ 28F0:062B
cs=0x28f0;eip=0x00062c; 	T(MOV(dh, dl));	// 89717 mov     dh, dl ;~ 28F0:062C
cs=0x28f0;eip=0x00062e; 	T(MOV(dl, ah));	// 89718 mov     dl, ah ;~ 28F0:062E
cs=0x28f0;eip=0x000630; 	T(MOV(ah, al));	// 89719 mov     ah, al ;~ 28F0:0630
cs=0x28f0;eip=0x000632; 	T(SUB(al, al));	// 89720 sub     al, al ;~ 28F0:0632
cs=0x28f0;eip=0x000634; 	T(CMP(dx, bx));	// 89721 cmp     dx, bx ;~ 28F0:0634
cs=0x28f0;eip=0x000636; 	R(JGE(loc_37b1b));	// 89722 jge     short loc_37B1B ;~ 28F0:0636
cs=0x28f0;eip=0x000638; 	R(JMP(loc_37a42));	// 89723 jmp     loc_37A42 ;~ 28F0:0638
loc_37b1b:
	// 10154 
cs=0x28f0;eip=0x00063b; 	R(JG(loc_37b24));	// 89727 jg      short loc_37B24 ;~ 28F0:063B
cs=0x28f0;eip=0x00063d; 	T(CMP(ax, cx));	// 89728 cmp     ax, cx ;~ 28F0:063D
cs=0x28f0;eip=0x00063f; 	R(JA(loc_37b24));	// 89729 ja      short loc_37B24 ;~ 28F0:063F
cs=0x28f0;eip=0x000641; 	R(JMP(loc_37a42));	// 89730 jmp     loc_37A42 ;~ 28F0:0641
loc_37b24:
	// 10155 
cs=0x28f0;eip=0x000644; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 89735 mov     bx, word ptr [bp+arg_0] ;~ 28F0:0644
cs=0x28f0;eip=0x000647; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 89736 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:0647
cs=0x28f0;eip=0x00064d; 	R(JNZ(loc_37b66));	// 89737 jnz     short loc_37B66 ;~ 28F0:064D
cs=0x28f0;eip=0x00064f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1C0))));	// 89738 mov     ax, es:[bx+1C0h] ;~ 28F0:064F
cs=0x28f0;eip=0x000654; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1C2))));	// 89739 mov     dx, es:[bx+1C2h] ;~ 28F0:0654
cs=0x28f0;eip=0x000659; 	T(OR(dx, dx));	// 89740 or      dx, dx ;~ 28F0:0659
cs=0x28f0;eip=0x00065b; 	R(JGE(loc_37b44));	// 89741 jge     short loc_37B44 ;~ 28F0:065B
cs=0x28f0;eip=0x00065d; 	T(NEG(ax));	// 89742 neg     ax ;~ 28F0:065D
cs=0x28f0;eip=0x00065f; 	T(ADC(dx, 0));	// 89743 adc     dx, 0 ;~ 28F0:065F
cs=0x28f0;eip=0x000662; 	T(NEG(dx));	// 89744 neg     dx ;~ 28F0:0662
loc_37b44:
	// 10156 
cs=0x28f0;eip=0x000664; 	T(MOV(cx, ax));	// 89747 mov     cx, ax ;~ 28F0:0664
cs=0x28f0;eip=0x000666; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x204))));	// 89748 mov     ax, es:[bx+204h] ;~ 28F0:0666
cs=0x28f0;eip=0x00066b; 	T(MOV(bx, dx));	// 89749 mov     bx, dx ;~ 28F0:066B
cs=0x28f0;eip=0x00066d; 	T(CWD);	// 89750 cwd ;~ 28F0:066D
cs=0x28f0;eip=0x00066e; 	T(MOV(dh, dl));	// 89751 mov     dh, dl ;~ 28F0:066E
cs=0x28f0;eip=0x000670; 	T(MOV(dl, ah));	// 89752 mov     dl, ah ;~ 28F0:0670
cs=0x28f0;eip=0x000672; 	T(MOV(ah, al));	// 89753 mov     ah, al ;~ 28F0:0672
cs=0x28f0;eip=0x000674; 	T(SUB(al, al));	// 89754 sub     al, al ;~ 28F0:0674
cs=0x28f0;eip=0x000676; 	T(CMP(dx, bx));	// 89755 cmp     dx, bx ;~ 28F0:0676
cs=0x28f0;eip=0x000678; 	R(JLE(loc_37b5d));	// 89756 jle     short loc_37B5D ;~ 28F0:0678
cs=0x28f0;eip=0x00067a; 	R(JMP(loc_37a24));	// 89757 jmp     loc_37A24 ;~ 28F0:067A
loc_37b5d:
	// 10157 
cs=0x28f0;eip=0x00067d; 	R(JL(loc_37b66));	// 89761 jl      short loc_37B66 ;~ 28F0:067D
cs=0x28f0;eip=0x00067f; 	T(CMP(ax, cx));	// 89762 cmp     ax, cx ;~ 28F0:067F
cs=0x28f0;eip=0x000681; 	R(JBE(loc_37b66));	// 89763 jbe     short loc_37B66 ;~ 28F0:0681
cs=0x28f0;eip=0x000683; 	R(JMP(loc_37a24));	// 89764 jmp     loc_37A24 ;~ 28F0:0683
loc_37b66:
	// 10158 
cs=0x28f0;eip=0x000686; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 89769 mov     bx, word ptr [bp+arg_0] ;~ 28F0:0686
cs=0x28f0;eip=0x000689; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 89770 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:0689
cs=0x28f0;eip=0x00068f; 	R(JZ(loc_37b7c));	// 89771 jz      short loc_37B7C ;~ 28F0:068F
cs=0x28f0;eip=0x000691; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 8));	// 89772 cmp     word ptr es:[bx+332h], 8 ;~ 28F0:0691
cs=0x28f0;eip=0x000697; 	R(JZ(loc_37b7c));	// 89773 jz      short loc_37B7C ;~ 28F0:0697
cs=0x28f0;eip=0x000699; 	R(JMP(loc_37a42));	// 89774 jmp     loc_37A42 ;~ 28F0:0699
loc_37b7c:
	// 10159 
cs=0x28f0;eip=0x00069c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x160))));	// 89779 mov     ax, es:[bx+160h] ;~ 28F0:069C
cs=0x28f0;eip=0x0006a1; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x162))));	// 89780 mov     dx, es:[bx+162h] ;~ 28F0:06A1
cs=0x28f0;eip=0x0006a6; 	T(OR(dx, dx));	// 89781 or      dx, dx ;~ 28F0:06A6
cs=0x28f0;eip=0x0006a8; 	R(JGE(loc_37b91));	// 89782 jge     short loc_37B91 ;~ 28F0:06A8
cs=0x28f0;eip=0x0006aa; 	T(NEG(ax));	// 89783 neg     ax ;~ 28F0:06AA
cs=0x28f0;eip=0x0006ac; 	T(ADC(dx, 0));	// 89784 adc     dx, 0 ;~ 28F0:06AC
cs=0x28f0;eip=0x0006af; 	T(NEG(dx));	// 89785 neg     dx ;~ 28F0:06AF
loc_37b91:
	// 10160 
cs=0x28f0;eip=0x0006b1; 	T(MOV(cx, ax));	// 89788 mov     cx, ax ;~ 28F0:06B1
cs=0x28f0;eip=0x0006b3; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x204))));	// 89789 mov     ax, es:[bx+204h] ;~ 28F0:06B3
cs=0x28f0;eip=0x0006b8; 	T(MOV(bx, dx));	// 89790 mov     bx, dx ;~ 28F0:06B8
cs=0x28f0;eip=0x0006ba; 	T(CWD);	// 89791 cwd ;~ 28F0:06BA
cs=0x28f0;eip=0x0006bb; 	T(MOV(dh, dl));	// 89792 mov     dh, dl ;~ 28F0:06BB
cs=0x28f0;eip=0x0006bd; 	T(MOV(dl, ah));	// 89793 mov     dl, ah ;~ 28F0:06BD
cs=0x28f0;eip=0x0006bf; 	T(MOV(ah, al));	// 89794 mov     ah, al ;~ 28F0:06BF
cs=0x28f0;eip=0x0006c1; 	T(SUB(al, al));	// 89795 sub     al, al ;~ 28F0:06C1
cs=0x28f0;eip=0x0006c3; 	T(CMP(dx, bx));	// 89796 cmp     dx, bx ;~ 28F0:06C3
cs=0x28f0;eip=0x0006c5; 	R(JGE(loc_37baa));	// 89797 jge     short loc_37BAA ;~ 28F0:06C5
cs=0x28f0;eip=0x0006c7; 	R(JMP(loc_37a42));	// 89798 jmp     loc_37A42 ;~ 28F0:06C7
loc_37baa:
	// 10161 
cs=0x28f0;eip=0x0006ca; 	R(JLE(loc_37baf));	// 89802 jle     short loc_37BAF ;~ 28F0:06CA
cs=0x28f0;eip=0x0006cc; 	R(JMP(loc_37a24));	// 89803 jmp     loc_37A24 ;~ 28F0:06CC
loc_37baf:
	// 10162 
cs=0x28f0;eip=0x0006cf; 	T(CMP(ax, cx));	// 89807 cmp     ax, cx ;~ 28F0:06CF
cs=0x28f0;eip=0x0006d1; 	R(JA(loc_37bb6));	// 89808 ja      short loc_37BB6 ;~ 28F0:06D1
cs=0x28f0;eip=0x0006d3; 	R(JMP(loc_37a42));	// 89809 jmp     loc_37A42 ;~ 28F0:06D3
loc_37bb6:
	// 10163 
cs=0x28f0;eip=0x0006d6; 	R(JMP(loc_37a24));	// 89813 jmp     loc_37A24 ;~ 28F0:06D6
loc_37bb9:
	// 10164 
cs=0x28f0;eip=0x0006d9; 	X(POP(bp));	// 89818 pop     bp ;~ 28F0:06D9
cs=0x28f0;eip=0x0006da; 	R(RETN(4));	// 89819 retn    4 ;~ 28F0:06DA
sub_37bbd:
	// 89827 
#undef var_8
#define var_8 -8
	// 89829 var_8           = word ptr -8 ;~ 28F0:06DD
#undef var_6
#define var_6 -6
	// 89830 var_6           = word ptr -6 ;~ 28F0:06DD
#undef var_4
#define var_4 -4
	// 89831 var_4           = word ptr -4 ;~ 28F0:06DD
#undef var_2
#define var_2 -2
	// 89832 var_2           = word ptr -2 ;~ 28F0:06DD
cs=0x28f0;eip=0x0006dd; 	X(PUSH(bp));	// 89834 push    bp ;~ 28F0:06DD
cs=0x28f0;eip=0x0006de; 	T(MOV(bp, sp));	// 89835 mov     bp, sp ;~ 28F0:06DE
cs=0x28f0;eip=0x0006e0; 	T(SUB(sp, 8));	// 89836 sub     sp, 8 ;~ 28F0:06E0
cs=0x28f0;eip=0x0006e3; 	R(CALLF(sub_182cf,0));	// 89837 call    sub_182CF ;~ 28F0:06E3
cs=0x28f0;eip=0x0006e8; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 89838 mov     [bp+var_4], ax ;~ 28F0:06E8
cs=0x28f0;eip=0x0006eb; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 89839 mov     [bp+var_2], dx ;~ 28F0:06EB
cs=0x28f0;eip=0x0006ee; 	R(CALLF(sub_181a3,0));	// 89840 call    sub_181A3 ;~ 28F0:06EE
cs=0x28f0;eip=0x0006f3; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 89841 mov     [bp+var_8], ax ;~ 28F0:06F3
cs=0x28f0;eip=0x0006f6; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 89842 mov     [bp+var_6], dx ;~ 28F0:06F6
cs=0x28f0;eip=0x0006f9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 89843 mov     ax, [bp+var_4] ;~ 28F0:06F9
cs=0x28f0;eip=0x0006fc; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 89844 mov     dx, [bp+var_2] ;~ 28F0:06FC
cs=0x28f0;eip=0x0006ff; 	T(CMP(dx, *(dw*)(raddr(ss,bp+var_6))));	// 89845 cmp     dx, [bp+var_6] ;~ 28F0:06FF
cs=0x28f0;eip=0x000702; 	R(JL(loc_37bf1));	// 89846 jl      short loc_37BF1 ;~ 28F0:0702
cs=0x28f0;eip=0x000704; 	R(JG(loc_37beb));	// 89847 jg      short loc_37BEB ;~ 28F0:0704
cs=0x28f0;eip=0x000706; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_8))));	// 89848 cmp     ax, [bp+var_8] ;~ 28F0:0706
cs=0x28f0;eip=0x000709; 	R(JBE(loc_37bf1));	// 89849 jbe     short loc_37BF1 ;~ 28F0:0709
loc_37beb:
	// 10165 
cs=0x28f0;eip=0x00070b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 89852 mov     dx, [bp+var_6] ;~ 28F0:070B
cs=0x28f0;eip=0x00070e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 89853 mov     ax, [bp+var_8] ;~ 28F0:070E
loc_37bf1:
	// 10166 
cs=0x28f0;eip=0x000711; 	T(OR(dx, dx));	// 89857 or      dx, dx ;~ 28F0:0711
cs=0x28f0;eip=0x000713; 	R(JG(loc_37c00));	// 89858 jg      short loc_37C00 ;~ 28F0:0713
cs=0x28f0;eip=0x000715; 	R(JL(loc_37bfb));	// 89859 jl      short loc_37BFB ;~ 28F0:0715
cs=0x28f0;eip=0x000717; 	T(OR(ax, ax));	// 89860 or      ax, ax ;~ 28F0:0717
cs=0x28f0;eip=0x000719; 	R(JNZ(loc_37c00));	// 89861 jnz     short loc_37C00 ;~ 28F0:0719
loc_37bfb:
	// 10167 
cs=0x28f0;eip=0x00071b; 	T(MOV(ax, 1));	// 89864 mov     ax, 1 ;~ 28F0:071B
cs=0x28f0;eip=0x00071e; 	R(JMP(loc_37c02));	// 89865 jmp     short loc_37C02 ;~ 28F0:071E
loc_37c00:
	// 10168 
cs=0x28f0;eip=0x000720; 	T(SUB(ax, ax));	// 89870 sub     ax, ax ;~ 28F0:0720
loc_37c02:
	// 10169 
cs=0x28f0;eip=0x000722; 	T(MOV(sp, bp));	// 89873 mov     sp, bp ;~ 28F0:0722
cs=0x28f0;eip=0x000724; 	X(POP(bp));	// 89874 pop     bp ;~ 28F0:0724
cs=0x28f0;eip=0x000725; 	R(RETN(4));	// 89875 retn    4 ;~ 28F0:0725
sub_37c08:
	// 89883 
#undef var_8
#define var_8 -8
	// 89886 var_8           = dword ptr -8 ;~ 28F0:0728
#undef arg_0
#define arg_0 4
	// 89887 arg_0           = dword ptr  4 ;~ 28F0:0728
cs=0x28f0;eip=0x000728; 	X(PUSH(bp));	// 89889 push    bp ;~ 28F0:0728
cs=0x28f0;eip=0x000729; 	T(MOV(bp, sp));	// 89890 mov     bp, sp ;~ 28F0:0729
cs=0x28f0;eip=0x00072b; 	T(SUB(sp, 8));	// 89891 sub     sp, 8 ;~ 28F0:072B
cs=0x28f0;eip=0x00072e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89892 les     bx, [bp+arg_0] ;~ 28F0:072E
cs=0x28f0;eip=0x000731; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x31C))));	// 89893 mov     ax, es:[bx+31Ch] ;~ 28F0:0731
cs=0x28f0;eip=0x000736; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x31E))));	// 89894 mov     dx, es:[bx+31Eh] ;~ 28F0:0736
cs=0x28f0;eip=0x00073b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 89895 mov     word ptr [bp+var_8], ax ;~ 28F0:073B
cs=0x28f0;eip=0x00073e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 89896 mov     word ptr [bp+var_8+2], dx ;~ 28F0:073E
cs=0x28f0;eip=0x000741; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 89897 mov     ax, es:[bx+2FAh] ;~ 28F0:0741
cs=0x28f0;eip=0x000746; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 89898 mov     dx, es:[bx+2FCh] ;~ 28F0:0746
cs=0x28f0;eip=0x00074b; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 89899 add     ax, es:[bx+302h] ;~ 28F0:074B
cs=0x28f0;eip=0x000750; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 89900 adc     dx, es:[bx+304h] ;~ 28F0:0750
cs=0x28f0;eip=0x000755; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 89901 add     ax, es:[bx+20Eh] ;~ 28F0:0755
cs=0x28f0;eip=0x00075a; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 89902 adc     dx, es:[bx+210h] ;~ 28F0:075A
cs=0x28f0;eip=0x00075f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89903 les     bx, [bp+var_8] ;~ 28F0:075F
cs=0x28f0;eip=0x000762; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 89904 cmp     dx, es:[bx+0Ch] ;~ 28F0:0762
cs=0x28f0;eip=0x000766; 	R(JGE(loc_37c4b));	// 89905 jge     short loc_37C4B ;~ 28F0:0766
cs=0x28f0;eip=0x000768; 	R(JMP(loc_37dec));	// 89906 jmp     loc_37DEC ;~ 28F0:0768
loc_37c4b:
	// 10170 
cs=0x28f0;eip=0x00076b; 	R(JG(loc_37c56));	// 89910 jg      short loc_37C56 ;~ 28F0:076B
cs=0x28f0;eip=0x00076d; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 89911 cmp     ax, es:[bx+0Ah] ;~ 28F0:076D
cs=0x28f0;eip=0x000771; 	R(JA(loc_37c56));	// 89912 ja      short loc_37C56 ;~ 28F0:0771
cs=0x28f0;eip=0x000773; 	R(JMP(loc_37dec));	// 89913 jmp     loc_37DEC ;~ 28F0:0773
loc_37c56:
	// 10171 
cs=0x28f0;eip=0x000776; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89918 les     bx, [bp+arg_0] ;~ 28F0:0776
cs=0x28f0;eip=0x000779; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 5));	// 89919 cmp     word ptr es:[bx+332h], 5 ;~ 28F0:0779
cs=0x28f0;eip=0x00077f; 	R(JGE(loc_37cc2));	// 89920 jge     short loc_37CC2 ;~ 28F0:077F
cs=0x28f0;eip=0x000781; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 89921 mov     ax, es:[bx+2FAh] ;~ 28F0:0781
cs=0x28f0;eip=0x000786; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 89922 mov     dx, es:[bx+2FCh] ;~ 28F0:0786
cs=0x28f0;eip=0x00078b; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 89923 add     ax, es:[bx+302h] ;~ 28F0:078B
cs=0x28f0;eip=0x000790; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 89924 adc     dx, es:[bx+304h] ;~ 28F0:0790
cs=0x28f0;eip=0x000795; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89925 les     bx, [bp+var_8] ;~ 28F0:0795
cs=0x28f0;eip=0x000798; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 89926 cmp     dx, es:[bx+0Ch] ;~ 28F0:0798
cs=0x28f0;eip=0x00079c; 	R(JG(loc_37c8e));	// 89927 jg      short loc_37C8E ;~ 28F0:079C
cs=0x28f0;eip=0x00079e; 	R(JL(loc_37c86));	// 89928 jl      short loc_37C86 ;~ 28F0:079E
cs=0x28f0;eip=0x0007a0; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 89929 cmp     ax, es:[bx+0Ah] ;~ 28F0:07A0
cs=0x28f0;eip=0x0007a4; 	R(JNC(loc_37c8e));	// 89930 jnb     short loc_37C8E ;~ 28F0:07A4
loc_37c86:
	// 10172 
cs=0x28f0;eip=0x0007a6; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 89933 mov     dx, es:[bx+0Ch] ;~ 28F0:07A6
cs=0x28f0;eip=0x0007aa; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 89934 mov     ax, es:[bx+0Ah] ;~ 28F0:07AA
loc_37c8e:
	// 10173 
cs=0x28f0;eip=0x0007ae; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 89938 mov     es:[bx+0Ah], ax ;~ 28F0:07AE
cs=0x28f0;eip=0x0007b2; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 89939 mov     es:[bx+0Ch], dx ;~ 28F0:07B2
cs=0x28f0;eip=0x0007b6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89940 les     bx, [bp+arg_0] ;~ 28F0:07B6
cs=0x28f0;eip=0x0007b9; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 2));	// 89941 cmp     word ptr es:[bx+332h], 2 ;~ 28F0:07B9
cs=0x28f0;eip=0x0007bf; 	R(JNZ(loc_37cb5));	// 89942 jnz     short loc_37CB5 ;~ 28F0:07BF
cs=0x28f0;eip=0x0007c1; 	X(PUSH(es));	// 89943 push    es ;~ 28F0:07C1
cs=0x28f0;eip=0x0007c2; 	X(PUSH(bx));	// 89944 push    bx ;~ 28F0:07C2
cs=0x28f0;eip=0x0007c3; 	T(MOV(ax, 2));	// 89945 mov     ax, 2 ;~ 28F0:07C3
cs=0x28f0;eip=0x0007c6; 	X(PUSH(ax));	// 89946 push    ax ;~ 28F0:07C6
cs=0x28f0;eip=0x0007c7; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89947 les     bx, [bp+var_8] ;~ 28F0:07C7
cs=0x28f0;eip=0x0007ca; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 89948 push    word ptr es:[bx+0Ch] ;~ 28F0:07CA
cs=0x28f0;eip=0x0007ce; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 89949 push    word ptr es:[bx+0Ah] ;~ 28F0:07CE
cs=0x28f0;eip=0x0007d2; 	R(CALL(sub_3842f,0));	// 89950 call    sub_3842F ;~ 28F0:07D2
loc_37cb5:
	// 10174 
cs=0x28f0;eip=0x0007d5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89953 les     bx, [bp+arg_0] ;~ 28F0:07D5
cs=0x28f0;eip=0x0007d8; 	X(MOV(*(dw*)(raddr(es,bx+0x320)), 0x0FFFF));	// 89954 mov     word ptr es:[bx+320h], 0FFFFh ;~ 28F0:07D8
cs=0x28f0;eip=0x0007df; 	R(JMP(loc_37dec));	// 89955 jmp     loc_37DEC ;~ 28F0:07DF
loc_37cc2:
	// 10175 
cs=0x28f0;eip=0x0007e2; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 89959 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:07E2
cs=0x28f0;eip=0x0007e8; 	R(JNZ(loc_37d2f));	// 89960 jnz     short loc_37D2F ;~ 28F0:07E8
cs=0x28f0;eip=0x0007ea; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 89961 mov     ax, es:[bx+2FAh] ;~ 28F0:07EA
cs=0x28f0;eip=0x0007ef; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 89962 mov     dx, es:[bx+2FCh] ;~ 28F0:07EF
cs=0x28f0;eip=0x0007f4; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 89963 add     ax, es:[bx+302h] ;~ 28F0:07F4
cs=0x28f0;eip=0x0007f9; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 89964 adc     dx, es:[bx+304h] ;~ 28F0:07F9
cs=0x28f0;eip=0x0007fe; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 89965 add     ax, es:[bx+20Eh] ;~ 28F0:07FE
cs=0x28f0;eip=0x000803; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 89966 adc     dx, es:[bx+210h] ;~ 28F0:0803
cs=0x28f0;eip=0x000808; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89967 les     bx, [bp+var_8] ;~ 28F0:0808
cs=0x28f0;eip=0x00080b; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 89968 mov     es:[bx+0Ah], ax ;~ 28F0:080B
cs=0x28f0;eip=0x00080f; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 89969 mov     es:[bx+0Ch], dx ;~ 28F0:080F
cs=0x28f0;eip=0x000813; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 89970 push    word ptr [bp+arg_0+2] ;~ 28F0:0813
cs=0x28f0;eip=0x000816; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 89971 push    word ptr [bp+arg_0] ;~ 28F0:0816
cs=0x28f0;eip=0x000819; 	R(CALL(sub_37a1a,0));	// 89972 call    sub_37A1A ;~ 28F0:0819
cs=0x28f0;eip=0x00081c; 	T(OR(ax, ax));	// 89973 or      ax, ax ;~ 28F0:081C
cs=0x28f0;eip=0x00081e; 	R(JZ(loc_37d14));	// 89974 jz      short loc_37D14 ;~ 28F0:081E
cs=0x28f0;eip=0x000820; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 89975 push    word ptr [bp+arg_0+2] ;~ 28F0:0820
cs=0x28f0;eip=0x000823; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 89976 push    word ptr [bp+arg_0] ;~ 28F0:0823
cs=0x28f0;eip=0x000826; 	T(MOV(ax, 2));	// 89977 mov     ax, 2 ;~ 28F0:0826
cs=0x28f0;eip=0x000829; 	X(PUSH(ax));	// 89978 push    ax ;~ 28F0:0829
cs=0x28f0;eip=0x00082a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89979 les     bx, [bp+var_8] ;~ 28F0:082A
cs=0x28f0;eip=0x00082d; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 89980 push    word ptr es:[bx+0Ch] ;~ 28F0:082D
cs=0x28f0;eip=0x000831; 	R(JMP(loc_37dc3));	// 89981 jmp     loc_37DC3 ;~ 28F0:0831
loc_37d14:
	// 10176 
cs=0x28f0;eip=0x000834; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 89985 push    word ptr [bp+arg_0+2] ;~ 28F0:0834
cs=0x28f0;eip=0x000837; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 89986 push    word ptr [bp+arg_0] ;~ 28F0:0837
cs=0x28f0;eip=0x00083a; 	T(MOV(ax, 1));	// 89987 mov     ax, 1 ;~ 28F0:083A
cs=0x28f0;eip=0x00083d; 	X(PUSH(ax));	// 89988 push    ax ;~ 28F0:083D
cs=0x28f0;eip=0x00083e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89989 les     bx, [bp+var_8] ;~ 28F0:083E
cs=0x28f0;eip=0x000841; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 89990 push    word ptr es:[bx+0Ch] ;~ 28F0:0841
cs=0x28f0;eip=0x000845; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 89991 push    word ptr es:[bx+0Ah] ;~ 28F0:0845
cs=0x28f0;eip=0x000849; 	R(CALL(sub_3842f,0));	// 89992 call    sub_3842F ;~ 28F0:0849
cs=0x28f0;eip=0x00084c; 	R(JMP(loc_37dd4));	// 89993 jmp     loc_37DD4 ;~ 28F0:084C
loc_37d2f:
	// 10177 
cs=0x28f0;eip=0x00084f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89997 les     bx, [bp+arg_0] ;~ 28F0:084F
cs=0x28f0;eip=0x000852; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 2));	// 89998 cmp     word ptr es:[bx+332h], 2 ;~ 28F0:0852
cs=0x28f0;eip=0x000858; 	R(JNZ(loc_37d3d));	// 89999 jnz     short loc_37D3D ;~ 28F0:0858
cs=0x28f0;eip=0x00085a; 	R(JMP(loc_37dd4));	// 90000 jmp     loc_37DD4 ;~ 28F0:085A
loc_37d3d:
	// 10178 
cs=0x28f0;eip=0x00085d; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), 0));	// 90004 cmp     word ptr es:[bx+122h], 0 ;~ 28F0:085D
cs=0x28f0;eip=0x000863; 	R(JGE(loc_37d51));	// 90005 jge     short loc_37D51 ;~ 28F0:0863
cs=0x28f0;eip=0x000865; 	T(SUB(ax, ax));	// 90006 sub     ax, ax ;~ 28F0:0865
cs=0x28f0;eip=0x000867; 	X(MOV(*(dw*)(raddr(es,bx+0x122)), ax));	// 90007 mov     es:[bx+122h], ax ;~ 28F0:0867
cs=0x28f0;eip=0x00086c; 	X(MOV(*(dw*)(raddr(es,bx+0x120)), ax));	// 90008 mov     es:[bx+120h], ax ;~ 28F0:086C
loc_37d51:
	// 10179 
cs=0x28f0;eip=0x000871; 	T(CMP(*(dw*)((&unk_47ab2)), 3));	// 90011 cmp     word ptr unk_47AB2, 3 ;~ 28F0:0871
cs=0x28f0;eip=0x000876; 	R(JNZ(loc_37d5f));	// 90012 jnz     short loc_37D5F ;~ 28F0:0876
cs=0x28f0;eip=0x000878; 	T(CMP(unk_55206, 0));	// 90013 cmp     byte ptr unk_55206, 0 ;~ 28F0:0878
cs=0x28f0;eip=0x00087d; 	R(JMP(loc_37d77));	// 90014 jmp     short loc_37D77 ;~ 28F0:087D
loc_37d5f:
	// 10180 
cs=0x28f0;eip=0x00087f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 90018 push    word ptr [bp+arg_0+2] ;~ 28F0:087F
cs=0x28f0;eip=0x000882; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 90019 push    word ptr [bp+arg_0] ;~ 28F0:0882
cs=0x28f0;eip=0x000885; 	R(CALL(sub_37a1a,0));	// 90020 call    sub_37A1A ;~ 28F0:0885
cs=0x28f0;eip=0x000888; 	T(OR(ax, ax));	// 90021 or      ax, ax ;~ 28F0:0888
cs=0x28f0;eip=0x00088a; 	R(JNZ(loc_37d96));	// 90022 jnz     short loc_37D96 ;~ 28F0:088A
cs=0x28f0;eip=0x00088c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 90023 push    word ptr [bp+arg_0+2] ;~ 28F0:088C
cs=0x28f0;eip=0x00088f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 90024 push    word ptr [bp+arg_0] ;~ 28F0:088F
cs=0x28f0;eip=0x000892; 	R(CALL(sub_37bbd,0));	// 90025 call    sub_37BBD ;~ 28F0:0892
cs=0x28f0;eip=0x000895; 	T(OR(ax, ax));	// 90026 or      ax, ax ;~ 28F0:0895
loc_37d77:
	// 10181 
cs=0x28f0;eip=0x000897; 	R(JZ(loc_37d96));	// 90029 jz      short loc_37D96 ;~ 28F0:0897
cs=0x28f0;eip=0x000899; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90030 les     bx, [bp+arg_0] ;~ 28F0:0899
cs=0x28f0;eip=0x00089c; 	T(SUB(ax, ax));	// 90031 sub     ax, ax ;~ 28F0:089C
cs=0x28f0;eip=0x00089e; 	X(MOV(*(dw*)(raddr(es,bx+0x0C2)), ax));	// 90032 mov     es:[bx+0C2h], ax ;~ 28F0:089E
cs=0x28f0;eip=0x0008a3; 	X(MOV(*(dw*)(raddr(es,bx+0x0C0)), ax));	// 90033 mov     es:[bx+0C0h], ax ;~ 28F0:08A3
cs=0x28f0;eip=0x0008a8; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), 1));	// 90034 mov     word ptr es:[bx+332h], 1 ;~ 28F0:08A8
cs=0x28f0;eip=0x0008af; 	R(CALLF(sub_36f79,0));	// 90035 call    sub_36F79 ;~ 28F0:08AF
cs=0x28f0;eip=0x0008b4; 	R(JMP(loc_37dd4));	// 90036 jmp     short loc_37DD4 ;~ 28F0:08B4
loc_37d96:
	// 10182 
cs=0x28f0;eip=0x0008b6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90041 les     bx, [bp+arg_0] ;~ 28F0:08B6
cs=0x28f0;eip=0x0008b9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 90042 mov     ax, es:[bx+2FAh] ;~ 28F0:08B9
cs=0x28f0;eip=0x0008be; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 90043 mov     dx, es:[bx+2FCh] ;~ 28F0:08BE
cs=0x28f0;eip=0x0008c3; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 90044 add     ax, es:[bx+302h] ;~ 28F0:08C3
cs=0x28f0;eip=0x0008c8; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 90045 adc     dx, es:[bx+304h] ;~ 28F0:08C8
cs=0x28f0;eip=0x0008cd; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 90046 les     bx, [bp+var_8] ;~ 28F0:08CD
cs=0x28f0;eip=0x0008d0; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 90047 mov     es:[bx+0Ah], ax ;~ 28F0:08D0
cs=0x28f0;eip=0x0008d4; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 90048 mov     es:[bx+0Ch], dx ;~ 28F0:08D4
cs=0x28f0;eip=0x0008d8; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 90049 push    word ptr [bp+arg_0+2] ;~ 28F0:08D8
cs=0x28f0;eip=0x0008db; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 90050 push    word ptr [bp+arg_0] ;~ 28F0:08DB
cs=0x28f0;eip=0x0008de; 	T(MOV(ax, 2));	// 90051 mov     ax, 2 ;~ 28F0:08DE
cs=0x28f0;eip=0x0008e1; 	X(PUSH(ax));	// 90052 push    ax ;~ 28F0:08E1
cs=0x28f0;eip=0x0008e2; 	X(PUSH(dx));	// 90053 push    dx ;~ 28F0:08E2
loc_37dc3:
	// 10183 
cs=0x28f0;eip=0x0008e3; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 90056 push    word ptr es:[bx+0Ah] ;~ 28F0:08E3
cs=0x28f0;eip=0x0008e7; 	R(CALL(sub_3842f,0));	// 90057 call    sub_3842F ;~ 28F0:08E7
cs=0x28f0;eip=0x0008ea; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90058 les     bx, [bp+arg_0] ;~ 28F0:08EA
cs=0x28f0;eip=0x0008ed; 	X(MOV(*(dw*)(raddr(es,bx+0x320)), 0x0FFFF));	// 90059 mov     word ptr es:[bx+320h], 0FFFFh ;~ 28F0:08ED
loc_37dd4:
	// 10184 
cs=0x28f0;eip=0x0008f4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90063 les     bx, [bp+arg_0] ;~ 28F0:08F4
cs=0x28f0;eip=0x0008f7; 	T(SUB(ax, ax));	// 90064 sub     ax, ax ;~ 28F0:08F7
cs=0x28f0;eip=0x0008f9; 	T(CWD);	// 90065 cwd ;~ 28F0:08F9
cs=0x28f0;eip=0x0008fa; 	X(MOV(*(dw*)(raddr(es,bx+0x0A0)), ax));	// 90066 mov     es:[bx+0A0h], ax ;~ 28F0:08FA
cs=0x28f0;eip=0x0008ff; 	X(MOV(*(dw*)(raddr(es,bx+0x0A2)), dx));	// 90067 mov     es:[bx+0A2h], dx ;~ 28F0:08FF
cs=0x28f0;eip=0x000904; 	X(MOV(*(dw*)(raddr(es,bx+0x40)), ax));	// 90068 mov     es:[bx+40h], ax ;~ 28F0:0904
cs=0x28f0;eip=0x000908; 	X(MOV(*(dw*)(raddr(es,bx+0x42)), dx));	// 90069 mov     es:[bx+42h], dx ;~ 28F0:0908
loc_37dec:
	// 10185 
cs=0x28f0;eip=0x00090c; 	T(MOV(sp, bp));	// 90073 mov     sp, bp ;~ 28F0:090C
cs=0x28f0;eip=0x00090e; 	X(POP(bp));	// 90074 pop     bp ;~ 28F0:090E
cs=0x28f0;eip=0x00090f; 	R(RETN(4));	// 90075 retn    4 ;~ 28F0:090F
sub_37df2:
	// 90083 
#undef arg_0
#define arg_0 4
	// 90085 arg_0           = dword ptr  4 ;~ 28F0:0912
cs=0x28f0;eip=0x000912; 	X(PUSH(bp));	// 90087 push    bp ;~ 28F0:0912
cs=0x28f0;eip=0x000913; 	T(MOV(bp, sp));	// 90088 mov     bp, sp ;~ 28F0:0913
cs=0x28f0;eip=0x000915; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90089 les     bx, [bp+arg_0] ;~ 28F0:0915
cs=0x28f0;eip=0x000918; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x334))));	// 90090 mov     ax, es:[bx+334h] ;~ 28F0:0918
cs=0x28f0;eip=0x00091d; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), ax));	// 90091 cmp     es:[bx+332h], ax ;~ 28F0:091D
cs=0x28f0;eip=0x000922; 	R(JZ(loc_37e1b));	// 90092 jz      short loc_37E1B ;~ 28F0:0922
cs=0x28f0;eip=0x000924; 	X(MOV(*(raddr(es,bx+0x33C)), 1));	// 90093 mov     byte ptr es:[bx+33Ch], 1 ;~ 28F0:0924
cs=0x28f0;eip=0x00092a; 	X(MOV(*(dw*)(raddr(es,bx+0x336)), ax));	// 90094 mov     es:[bx+336h], ax ;~ 28F0:092A
cs=0x28f0;eip=0x00092f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x332))));	// 90095 mov     ax, es:[bx+332h] ;~ 28F0:092F
cs=0x28f0;eip=0x000934; 	X(MOV(*(dw*)(raddr(es,bx+0x334)), ax));	// 90096 mov     es:[bx+334h], ax ;~ 28F0:0934
cs=0x28f0;eip=0x000939; 	R(JMP(loc_37e21));	// 90097 jmp     short loc_37E21 ;~ 28F0:0939
loc_37e1b:
	// 10186 
cs=0x28f0;eip=0x00093b; 	X(MOV(*(raddr(es,bx+0x33C)), 0));	// 90101 mov     byte ptr es:[bx+33Ch], 0 ;~ 28F0:093B
loc_37e21:
	// 10187 
cs=0x28f0;eip=0x000941; 	X(POP(bp));	// 90104 pop     bp ;~ 28F0:0941
cs=0x28f0;eip=0x000942; 	R(RETN(4));	// 90105 retn    4 ;~ 28F0:0942
sub_37e25:
	// 90113 
#undef var_58
#define var_58 -0x58
	// 90116 var_58          = word ptr -58h ;~ 28F0:0945
#undef var_56
#define var_56 -0x56
	// 90117 var_56          = word ptr -56h ;~ 28F0:0945
#undef arg_0
#define arg_0 4
	// 90118 arg_0           = dword ptr  4 ;~ 28F0:0945
cs=0x28f0;eip=0x000945; 	X(PUSH(bp));	// 90120 push    bp ;~ 28F0:0945
cs=0x28f0;eip=0x000946; 	T(MOV(bp, sp));	// 90121 mov     bp, sp ;~ 28F0:0946
cs=0x28f0;eip=0x000948; 	T(SUB(sp, 0x5C));	// 90122 sub     sp, 5Ch ;~ 28F0:0948
cs=0x28f0;eip=0x00094b; 	X(PUSH(si));	// 90123 push    si ;~ 28F0:094B
cs=0x28f0;eip=0x00094c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90124 les     bx, [bp+arg_0] ;~ 28F0:094C
cs=0x28f0;eip=0x00094f; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 1));	// 90125 cmp     word ptr es:[bx+332h], 1 ;~ 28F0:094F
cs=0x28f0;eip=0x000955; 	R(JZ(loc_37e84));	// 90126 jz      short loc_37E84 ;~ 28F0:0955
cs=0x28f0;eip=0x000957; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 90127 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:0957
cs=0x28f0;eip=0x00095d; 	R(JZ(loc_37e42));	// 90128 jz      short loc_37E42 ;~ 28F0:095D
cs=0x28f0;eip=0x00095f; 	R(JMP(loc_380bb));	// 90129 jmp     loc_380BB ;~ 28F0:095F
loc_37e42:
	// 10188 
cs=0x28f0;eip=0x000962; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 5));	// 90133 cmp     word ptr es:[bx+332h], 5 ;~ 28F0:0962
cs=0x28f0;eip=0x000968; 	R(JZ(loc_37e4d));	// 90134 jz      short loc_37E4D ;~ 28F0:0968
cs=0x28f0;eip=0x00096a; 	R(JMP(loc_380bb));	// 90135 jmp     loc_380BB ;~ 28F0:096A
loc_37e4d:
	// 10189 
cs=0x28f0;eip=0x00096d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 90139 mov     ax, es:[bx+2FAh] ;~ 28F0:096D
cs=0x28f0;eip=0x000972; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 90140 mov     dx, es:[bx+2FCh] ;~ 28F0:0972
cs=0x28f0;eip=0x000977; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 90141 add     ax, es:[bx+302h] ;~ 28F0:0977
cs=0x28f0;eip=0x00097c; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 90142 adc     dx, es:[bx+304h] ;~ 28F0:097C
cs=0x28f0;eip=0x000981; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 90143 add     ax, es:[bx+20Eh] ;~ 28F0:0981
cs=0x28f0;eip=0x000986; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 90144 adc     dx, es:[bx+210h] ;~ 28F0:0986
cs=0x28f0;eip=0x00098b; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90145 les     bx, es:[bx+31Ch] ;~ 28F0:098B
cs=0x28f0;eip=0x000990; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 90146 cmp     dx, es:[bx+0Ch] ;~ 28F0:0990
cs=0x28f0;eip=0x000994; 	R(JGE(loc_37e79));	// 90147 jge     short loc_37E79 ;~ 28F0:0994
cs=0x28f0;eip=0x000996; 	R(JMP(loc_380bb));	// 90148 jmp     loc_380BB ;~ 28F0:0996
loc_37e79:
	// 10190 
cs=0x28f0;eip=0x000999; 	R(JG(loc_37e84));	// 90152 jg      short loc_37E84 ;~ 28F0:0999
cs=0x28f0;eip=0x00099b; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 90153 cmp     ax, es:[bx+0Ah] ;~ 28F0:099B
cs=0x28f0;eip=0x00099f; 	R(JA(loc_37e84));	// 90154 ja      short loc_37E84 ;~ 28F0:099F
cs=0x28f0;eip=0x0009a1; 	R(JMP(loc_380bb));	// 90155 jmp     loc_380BB ;~ 28F0:09A1
loc_37e84:
	// 10191 
cs=0x28f0;eip=0x0009a4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90160 les     bx, [bp+arg_0] ;~ 28F0:09A4
cs=0x28f0;eip=0x0009a7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 90161 mov     ax, es:[bx+2FAh] ;~ 28F0:09A7
cs=0x28f0;eip=0x0009ac; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 90162 mov     dx, es:[bx+2FCh] ;~ 28F0:09AC
cs=0x28f0;eip=0x0009b1; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 90163 add     ax, es:[bx+302h] ;~ 28F0:09B1
cs=0x28f0;eip=0x0009b6; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 90164 adc     dx, es:[bx+304h] ;~ 28F0:09B6
cs=0x28f0;eip=0x0009bb; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90165 les     bx, es:[bx+31Ch] ;~ 28F0:09BB
cs=0x28f0;eip=0x0009c0; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 90166 cmp     dx, es:[bx+0Ch] ;~ 28F0:09C0
cs=0x28f0;eip=0x0009c4; 	R(JG(loc_37eb6));	// 90167 jg      short loc_37EB6 ;~ 28F0:09C4
cs=0x28f0;eip=0x0009c6; 	R(JL(loc_37eae));	// 90168 jl      short loc_37EAE ;~ 28F0:09C6
cs=0x28f0;eip=0x0009c8; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 90169 cmp     ax, es:[bx+0Ah] ;~ 28F0:09C8
cs=0x28f0;eip=0x0009cc; 	R(JNC(loc_37eb6));	// 90170 jnb     short loc_37EB6 ;~ 28F0:09CC
loc_37eae:
	// 10192 
cs=0x28f0;eip=0x0009ce; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 90173 mov     dx, es:[bx+0Ch] ;~ 28F0:09CE
cs=0x28f0;eip=0x0009d2; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 90174 mov     ax, es:[bx+0Ah] ;~ 28F0:09D2
loc_37eb6:
	// 10193 
cs=0x28f0;eip=0x0009d6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90178 les     bx, [bp+arg_0] ;~ 28F0:09D6
cs=0x28f0;eip=0x0009d9; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90179 les     bx, es:[bx+31Ch] ;~ 28F0:09D9
cs=0x28f0;eip=0x0009de; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 90180 mov     es:[bx+0Ah], ax ;~ 28F0:09DE
cs=0x28f0;eip=0x0009e2; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 90181 mov     es:[bx+0Ch], dx ;~ 28F0:09E2
cs=0x28f0;eip=0x0009e6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90182 les     bx, [bp+arg_0] ;~ 28F0:09E6
cs=0x28f0;eip=0x0009e9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 90183 mov     ax, es:[bx+2FAh] ;~ 28F0:09E9
cs=0x28f0;eip=0x0009ee; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 90184 mov     dx, es:[bx+2FCh] ;~ 28F0:09EE
cs=0x28f0;eip=0x0009f3; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 90185 add     ax, es:[bx+302h] ;~ 28F0:09F3
cs=0x28f0;eip=0x0009f8; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 90186 adc     dx, es:[bx+304h] ;~ 28F0:09F8
cs=0x28f0;eip=0x0009fd; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 90187 add     ax, es:[bx+20Eh] ;~ 28F0:09FD
cs=0x28f0;eip=0x000a02; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 90188 adc     dx, es:[bx+210h] ;~ 28F0:0A02
cs=0x28f0;eip=0x000a07; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90189 les     bx, es:[bx+31Ch] ;~ 28F0:0A07
cs=0x28f0;eip=0x000a0c; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 90190 cmp     dx, es:[bx+0Ch] ;~ 28F0:0A0C
cs=0x28f0;eip=0x000a10; 	R(JL(loc_37f67));	// 90191 jl      short loc_37F67 ;~ 28F0:0A10
cs=0x28f0;eip=0x000a12; 	R(JG(loc_37efa));	// 90192 jg      short loc_37EFA ;~ 28F0:0A12
cs=0x28f0;eip=0x000a14; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 90193 cmp     ax, es:[bx+0Ah] ;~ 28F0:0A14
cs=0x28f0;eip=0x000a18; 	R(JC(loc_37f67));	// 90194 jb      short loc_37F67 ;~ 28F0:0A18
loc_37efa:
	// 10194 
cs=0x28f0;eip=0x000a1a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90197 les     bx, [bp+arg_0] ;~ 28F0:0A1A
cs=0x28f0;eip=0x000a1d; 	T(CMP(*(dw*)(raddr(es,bx+0x212)), 0));	// 90198 cmp     word ptr es:[bx+212h], 0 ;~ 28F0:0A1D
cs=0x28f0;eip=0x000a23; 	R(JZ(loc_37f67));	// 90199 jz      short loc_37F67 ;~ 28F0:0A23
cs=0x28f0;eip=0x000a25; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20E))));	// 90200 mov     ax, es:[bx+20Eh] ;~ 28F0:0A25
cs=0x28f0;eip=0x000a2a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x210))));	// 90201 mov     dx, es:[bx+210h] ;~ 28F0:0A2A
cs=0x28f0;eip=0x000a2f; 	T(MOV(cl, 8));	// 90202 mov     cl, 8 ;~ 28F0:0A2F
cs=0x28f0;eip=0x000a31; 	R(CALLF(sub_10240,0));	// 90203 call    sub_10240 ;~ 28F0:0A31
cs=0x28f0;eip=0x000a36; 	X(PUSH(dx));	// 90204 push    dx ;~ 28F0:0A36
cs=0x28f0;eip=0x000a37; 	X(PUSH(ax));	// 90205 push    ax ;~ 28F0:0A37
cs=0x28f0;eip=0x000a38; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90206 les     bx, [bp+arg_0] ;~ 28F0:0A38
cs=0x28f0;eip=0x000a3b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20C))));	// 90207 mov     ax, es:[bx+20Ch] ;~ 28F0:0A3B
cs=0x28f0;eip=0x000a40; 	T(CWD);	// 90208 cwd ;~ 28F0:0A40
cs=0x28f0;eip=0x000a41; 	X(PUSH(dx));	// 90209 push    dx ;~ 28F0:0A41
cs=0x28f0;eip=0x000a42; 	X(PUSH(ax));	// 90210 push    ax ;~ 28F0:0A42
cs=0x28f0;eip=0x000a43; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 90211 mov     ax, es:[bx+2FAh] ;~ 28F0:0A43
cs=0x28f0;eip=0x000a48; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 90212 mov     dx, es:[bx+2FCh] ;~ 28F0:0A48
cs=0x28f0;eip=0x000a4d; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90213 les     bx, es:[bx+31Ch] ;~ 28F0:0A4D
cs=0x28f0;eip=0x000a52; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x0A))));	// 90214 sub     ax, es:[bx+0Ah] ;~ 28F0:0A52
cs=0x28f0;eip=0x000a56; 	T(SBB(dx, *(dw*)(raddr(es,bx+0x0C))));	// 90215 sbb     dx, es:[bx+0Ch] ;~ 28F0:0A56
cs=0x28f0;eip=0x000a5a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90216 les     bx, [bp+arg_0] ;~ 28F0:0A5A
cs=0x28f0;eip=0x000a5d; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 90217 add     ax, es:[bx+302h] ;~ 28F0:0A5D
cs=0x28f0;eip=0x000a62; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 90218 adc     dx, es:[bx+304h] ;~ 28F0:0A62
cs=0x28f0;eip=0x000a67; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 90219 add     ax, es:[bx+20Eh] ;~ 28F0:0A67
cs=0x28f0;eip=0x000a6c; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 90220 adc     dx, es:[bx+210h] ;~ 28F0:0A6C
cs=0x28f0;eip=0x000a71; 	X(PUSH(dx));	// 90221 push    dx ;~ 28F0:0A71
cs=0x28f0;eip=0x000a72; 	X(PUSH(ax));	// 90222 push    ax ;~ 28F0:0A72
cs=0x28f0;eip=0x000a73; 	R(CALLF(sub_105c2,0));	// 90223 call    sub_105C2 ;~ 28F0:0A73
cs=0x28f0;eip=0x000a78; 	X(PUSH(dx));	// 90224 push    dx ;~ 28F0:0A78
cs=0x28f0;eip=0x000a79; 	X(PUSH(ax));	// 90225 push    ax ;~ 28F0:0A79
cs=0x28f0;eip=0x000a7a; 	R(CALLF(sub_10526,0));	// 90226 call    sub_10526 ;~ 28F0:0A7A
cs=0x28f0;eip=0x000a7f; 	X(MOV(*(dw*)(raddr(ss,bp+var_58)), ax));	// 90227 mov     [bp+var_58], ax ;~ 28F0:0A7F
cs=0x28f0;eip=0x000a82; 	X(MOV(*(dw*)(raddr(ss,bp+var_56)), dx));	// 90228 mov     [bp+var_56], dx ;~ 28F0:0A82
cs=0x28f0;eip=0x000a85; 	R(JMP(loc_37f6f));	// 90229 jmp     short loc_37F6F ;~ 28F0:0A85
loc_37f67:
	// 10195 
cs=0x28f0;eip=0x000a87; 	T(SUB(ax, ax));	// 90234 sub     ax, ax ;~ 28F0:0A87
cs=0x28f0;eip=0x000a89; 	X(MOV(*(dw*)(raddr(ss,bp+var_56)), ax));	// 90235 mov     [bp+var_56], ax ;~ 28F0:0A89
cs=0x28f0;eip=0x000a8c; 	X(MOV(*(dw*)(raddr(ss,bp+var_58)), ax));	// 90236 mov     [bp+var_58], ax ;~ 28F0:0A8C
loc_37f6f:
	// 10196 
cs=0x28f0;eip=0x000a8f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90239 les     bx, [bp+arg_0] ;~ 28F0:0A8F
cs=0x28f0;eip=0x000a92; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 90240 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:0A92
cs=0x28f0;eip=0x000a98; 	R(JZ(loc_37f7d));	// 90241 jz      short loc_37F7D ;~ 28F0:0A98
cs=0x28f0;eip=0x000a9a; 	R(JMP(loc_3800a));	// 90242 jmp     loc_3800A ;~ 28F0:0A9A
loc_37f7d:
	// 10197 
cs=0x28f0;eip=0x000a9d; 	T(CMP(*(dw*)((&unk_57116)), 0));	// 90246 cmp     word ptr unk_57116, 0 ;~ 28F0:0A9D
cs=0x28f0;eip=0x000aa2; 	R(JZ(loc_37fc5));	// 90247 jz      short loc_37FC5 ;~ 28F0:0AA2
cs=0x28f0;eip=0x000aa4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_58))));	// 90248 mov     ax, [bp+var_58] ;~ 28F0:0AA4
cs=0x28f0;eip=0x000aa7; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_56))));	// 90249 mov     dx, [bp+var_56] ;~ 28F0:0AA7
cs=0x28f0;eip=0x000aaa; 	T(CMP(*(dw*)(raddr(es,bx+0x0E2)), dx));	// 90250 cmp     es:[bx+0E2h], dx ;~ 28F0:0AAA
cs=0x28f0;eip=0x000aaf; 	R(JL(loc_37fc5));	// 90251 jl      short loc_37FC5 ;~ 28F0:0AAF
cs=0x28f0;eip=0x000ab1; 	R(JG(loc_37f9a));	// 90252 jg      short loc_37F9A ;~ 28F0:0AB1
cs=0x28f0;eip=0x000ab3; 	T(CMP(*(dw*)(raddr(es,bx+0x0E0)), ax));	// 90253 cmp     es:[bx+0E0h], ax ;~ 28F0:0AB3
cs=0x28f0;eip=0x000ab8; 	R(JBE(loc_37fc5));	// 90254 jbe     short loc_37FC5 ;~ 28F0:0AB8
loc_37f9a:
	// 10198 
cs=0x28f0;eip=0x000aba; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 90257 mov     ax, es:[bx+2FAh] ;~ 28F0:0ABA
cs=0x28f0;eip=0x000abf; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 90258 mov     dx, es:[bx+2FCh] ;~ 28F0:0ABF
cs=0x28f0;eip=0x000ac4; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 90259 add     ax, es:[bx+302h] ;~ 28F0:0AC4
cs=0x28f0;eip=0x000ac9; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 90260 adc     dx, es:[bx+304h] ;~ 28F0:0AC9
cs=0x28f0;eip=0x000ace; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90261 les     bx, es:[bx+31Ch] ;~ 28F0:0ACE
cs=0x28f0;eip=0x000ad3; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 90262 cmp     ax, es:[bx+0Ah] ;~ 28F0:0AD3
cs=0x28f0;eip=0x000ad7; 	R(JZ(loc_37fbc));	// 90263 jz      short loc_37FBC ;~ 28F0:0AD7
cs=0x28f0;eip=0x000ad9; 	R(JMP(loc_380bb));	// 90264 jmp     loc_380BB ;~ 28F0:0AD9
loc_37fbc:
	// 10199 
cs=0x28f0;eip=0x000adc; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 90268 cmp     dx, es:[bx+0Ch] ;~ 28F0:0ADC
cs=0x28f0;eip=0x000ae0; 	R(JZ(loc_37fc5));	// 90269 jz      short loc_37FC5 ;~ 28F0:0AE0
cs=0x28f0;eip=0x000ae2; 	R(JMP(loc_380bb));	// 90270 jmp     loc_380BB ;~ 28F0:0AE2
loc_37fc5:
	// 10200 
cs=0x28f0;eip=0x000ae5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90275 les     bx, [bp+arg_0] ;~ 28F0:0AE5
cs=0x28f0;eip=0x000ae8; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 90276 mov     ax, es:[bx+0E0h] ;~ 28F0:0AE8
cs=0x28f0;eip=0x000aed; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 90277 mov     dx, es:[bx+0E2h] ;~ 28F0:0AED
cs=0x28f0;eip=0x000af2; 	T(CMP(dx, *(dw*)(raddr(ss,bp+var_56))));	// 90278 cmp     dx, [bp+var_56] ;~ 28F0:0AF2
cs=0x28f0;eip=0x000af5; 	R(JL(loc_37fe4));	// 90279 jl      short loc_37FE4 ;~ 28F0:0AF5
cs=0x28f0;eip=0x000af7; 	R(JG(loc_37fde));	// 90280 jg      short loc_37FDE ;~ 28F0:0AF7
cs=0x28f0;eip=0x000af9; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_58))));	// 90281 cmp     ax, [bp+var_58] ;~ 28F0:0AF9
cs=0x28f0;eip=0x000afc; 	R(JBE(loc_37fe4));	// 90282 jbe     short loc_37FE4 ;~ 28F0:0AFC
loc_37fde:
	// 10201 
cs=0x28f0;eip=0x000afe; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_56))));	// 90285 mov     dx, [bp+var_56] ;~ 28F0:0AFE
cs=0x28f0;eip=0x000b01; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_58))));	// 90286 mov     ax, [bp+var_58] ;~ 28F0:0B01
loc_37fe4:
	// 10202 
cs=0x28f0;eip=0x000b04; 	X(MOV(*(dw*)(raddr(es,bx+0x0E0)), ax));	// 90290 mov     es:[bx+0E0h], ax ;~ 28F0:0B04
cs=0x28f0;eip=0x000b09; 	X(MOV(*(dw*)(raddr(es,bx+0x0E2)), dx));	// 90291 mov     es:[bx+0E2h], dx ;~ 28F0:0B09
cs=0x28f0;eip=0x000b0e; 	T(MOV(al, *(raddr(es,bx+0x214))));	// 90292 mov     al, es:[bx+214h] ;~ 28F0:0B0E
cs=0x28f0;eip=0x000b13; 	T(CBW);	// 90293 cbw ;~ 28F0:0B13
cs=0x28f0;eip=0x000b14; 	T(CWD);	// 90294 cwd ;~ 28F0:0B14
cs=0x28f0;eip=0x000b15; 	T(MOV(dh, dl));	// 90295 mov     dh, dl ;~ 28F0:0B15
cs=0x28f0;eip=0x000b17; 	T(MOV(dl, ah));	// 90296 mov     dl, ah ;~ 28F0:0B17
cs=0x28f0;eip=0x000b19; 	T(MOV(ah, al));	// 90297 mov     ah, al ;~ 28F0:0B19
cs=0x28f0;eip=0x000b1b; 	T(SUB(al, al));	// 90298 sub     al, al ;~ 28F0:0B1B
cs=0x28f0;eip=0x000b1d; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 90299 add     ax, es:[bx+0E0h] ;~ 28F0:0B1D
cs=0x28f0;eip=0x000b22; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 90300 adc     dx, es:[bx+0E2h] ;~ 28F0:0B22
cs=0x28f0;eip=0x000b27; 	R(JMP(loc_380a2));	// 90301 jmp     loc_380A2 ;~ 28F0:0B27
loc_3800a:
	// 10203 
cs=0x28f0;eip=0x000b2a; 	T(CMP(*(dw*)((&unk_57116)), 0));	// 90305 cmp     word ptr unk_57116, 0 ;~ 28F0:0B2A
cs=0x28f0;eip=0x000b2f; 	R(JZ(loc_38051));	// 90306 jz      short loc_38051 ;~ 28F0:0B2F
cs=0x28f0;eip=0x000b31; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_58))));	// 90307 mov     ax, [bp+var_58] ;~ 28F0:0B31
cs=0x28f0;eip=0x000b34; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_56))));	// 90308 mov     dx, [bp+var_56] ;~ 28F0:0B34
cs=0x28f0;eip=0x000b37; 	T(NEG(ax));	// 90309 neg     ax ;~ 28F0:0B37
cs=0x28f0;eip=0x000b39; 	T(ADC(dx, 0));	// 90310 adc     dx, 0 ;~ 28F0:0B39
cs=0x28f0;eip=0x000b3c; 	T(NEG(dx));	// 90311 neg     dx ;~ 28F0:0B3C
cs=0x28f0;eip=0x000b3e; 	T(CMP(*(dw*)(raddr(es,bx+0x22)), dx));	// 90312 cmp     es:[bx+22h], dx ;~ 28F0:0B3E
cs=0x28f0;eip=0x000b42; 	R(JL(loc_38051));	// 90313 jl      short loc_38051 ;~ 28F0:0B42
cs=0x28f0;eip=0x000b44; 	R(JG(loc_3802c));	// 90314 jg      short loc_3802C ;~ 28F0:0B44
cs=0x28f0;eip=0x000b46; 	T(CMP(*(dw*)(raddr(es,bx+0x20)), ax));	// 90315 cmp     es:[bx+20h], ax ;~ 28F0:0B46
cs=0x28f0;eip=0x000b4a; 	R(JBE(loc_38051));	// 90316 jbe     short loc_38051 ;~ 28F0:0B4A
loc_3802c:
	// 10204 
cs=0x28f0;eip=0x000b4c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 90319 mov     ax, es:[bx+2FAh] ;~ 28F0:0B4C
cs=0x28f0;eip=0x000b51; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 90320 mov     dx, es:[bx+2FCh] ;~ 28F0:0B51
cs=0x28f0;eip=0x000b56; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 90321 add     ax, es:[bx+302h] ;~ 28F0:0B56
cs=0x28f0;eip=0x000b5b; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 90322 adc     dx, es:[bx+304h] ;~ 28F0:0B5B
cs=0x28f0;eip=0x000b60; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90323 les     bx, es:[bx+31Ch] ;~ 28F0:0B60
cs=0x28f0;eip=0x000b65; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 90324 cmp     ax, es:[bx+0Ah] ;~ 28F0:0B65
cs=0x28f0;eip=0x000b69; 	R(JNZ(loc_380bb));	// 90325 jnz     short loc_380BB ;~ 28F0:0B69
cs=0x28f0;eip=0x000b6b; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 90326 cmp     dx, es:[bx+0Ch] ;~ 28F0:0B6B
cs=0x28f0;eip=0x000b6f; 	R(JNZ(loc_380bb));	// 90327 jnz     short loc_380BB ;~ 28F0:0B6F
loc_38051:
	// 10205 
cs=0x28f0;eip=0x000b71; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90331 les     bx, [bp+arg_0] ;~ 28F0:0B71
cs=0x28f0;eip=0x000b74; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_58))));	// 90332 mov     ax, [bp+var_58] ;~ 28F0:0B74
cs=0x28f0;eip=0x000b77; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_56))));	// 90333 mov     dx, [bp+var_56] ;~ 28F0:0B77
cs=0x28f0;eip=0x000b7a; 	T(NEG(ax));	// 90334 neg     ax ;~ 28F0:0B7A
cs=0x28f0;eip=0x000b7c; 	T(ADC(dx, 0));	// 90335 adc     dx, 0 ;~ 28F0:0B7C
cs=0x28f0;eip=0x000b7f; 	T(NEG(dx));	// 90336 neg     dx ;~ 28F0:0B7F
cs=0x28f0;eip=0x000b81; 	X(MOV(*(dw*)(raddr(es,bx+0x24)), ax));	// 90337 mov     es:[bx+24h], ax ;~ 28F0:0B81
cs=0x28f0;eip=0x000b85; 	X(MOV(*(dw*)(raddr(es,bx+0x26)), dx));	// 90338 mov     es:[bx+26h], dx ;~ 28F0:0B85
cs=0x28f0;eip=0x000b89; 	T(MOV(ax, bx));	// 90339 mov     ax, bx ;~ 28F0:0B89
cs=0x28f0;eip=0x000b8b; 	T(MOV(dx, es));	// 90340 mov     dx, es ;~ 28F0:0B8B
cs=0x28f0;eip=0x000b8d; 	T(ADD(ax, 0x20));	// 90341 add     ax, 20h ; ' ' ;~ 28F0:0B8D
cs=0x28f0;eip=0x000b90; 	X(PUSH(dx));	// 90342 push    dx ;~ 28F0:0B90
cs=0x28f0;eip=0x000b91; 	X(PUSH(ax));	// 90343 push    ax ;~ 28F0:0B91
cs=0x28f0;eip=0x000b92; 	X(PUSH(*(dw*)(raddr(es,bx+0x36))));	// 90344 push    word ptr es:[bx+36h] ;~ 28F0:0B92
cs=0x28f0;eip=0x000b96; 	X(PUSH(*(dw*)(raddr(es,bx+0x34))));	// 90345 push    word ptr es:[bx+34h] ;~ 28F0:0B96
cs=0x28f0;eip=0x000b9a; 	R(CALL(sub_3b9eb,0));	// 90346 call    sub_3B9EB ;~ 28F0:0B9A
cs=0x28f0;eip=0x000b9d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90347 les     bx, [bp+arg_0] ;~ 28F0:0B9D
cs=0x28f0;eip=0x000ba0; 	T(MOV(al, *(raddr(es,bx+0x214))));	// 90348 mov     al, es:[bx+214h] ;~ 28F0:0BA0
cs=0x28f0;eip=0x000ba5; 	T(CBW);	// 90349 cbw ;~ 28F0:0BA5
cs=0x28f0;eip=0x000ba6; 	T(CWD);	// 90350 cwd ;~ 28F0:0BA6
cs=0x28f0;eip=0x000ba7; 	T(MOV(dh, dl));	// 90351 mov     dh, dl ;~ 28F0:0BA7
cs=0x28f0;eip=0x000ba9; 	T(MOV(dl, ah));	// 90352 mov     dl, ah ;~ 28F0:0BA9
cs=0x28f0;eip=0x000bab; 	T(MOV(ah, al));	// 90353 mov     ah, al ;~ 28F0:0BAB
cs=0x28f0;eip=0x000bad; 	T(SUB(al, al));	// 90354 sub     al, al ;~ 28F0:0BAD
cs=0x28f0;eip=0x000baf; 	T(MOV(cx, *(dw*)(raddr(es,bx+0x20))));	// 90355 mov     cx, es:[bx+20h] ;~ 28F0:0BAF
cs=0x28f0;eip=0x000bb3; 	T(MOV(si, *(dw*)(raddr(es,bx+0x22))));	// 90356 mov     si, es:[bx+22h] ;~ 28F0:0BB3
cs=0x28f0;eip=0x000bb7; 	T(NEG(cx));	// 90357 neg     cx ;~ 28F0:0BB7
cs=0x28f0;eip=0x000bb9; 	T(ADC(si, 0));	// 90358 adc     si, 0 ;~ 28F0:0BB9
cs=0x28f0;eip=0x000bbc; 	T(NEG(si));	// 90359 neg     si ;~ 28F0:0BBC
cs=0x28f0;eip=0x000bbe; 	T(ADD(ax, cx));	// 90360 add     ax, cx ;~ 28F0:0BBE
cs=0x28f0;eip=0x000bc0; 	T(ADC(dx, si));	// 90361 adc     dx, si ;~ 28F0:0BC0
loc_380a2:
	// 10206 
cs=0x28f0;eip=0x000bc2; 	T(MOV(cl, 5));	// 90364 mov     cl, 5 ;~ 28F0:0BC2
cs=0x28f0;eip=0x000bc4; 	R(CALLF(sub_10240,0));	// 90365 call    sub_10240 ;~ 28F0:0BC4
cs=0x28f0;eip=0x000bc9; 	X(PUSH(ax));	// 90366 push    ax ;~ 28F0:0BC9
cs=0x28f0;eip=0x000bca; 	R(CALLF(sub_24cf8,0));	// 90367 call    sub_24CF8 ;~ 28F0:0BCA
cs=0x28f0;eip=0x000bcf; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90368 les     bx, [bp+arg_0] ;~ 28F0:0BCF
cs=0x28f0;eip=0x000bd2; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90369 les     bx, es:[bx+31Ch] ;~ 28F0:0BD2
cs=0x28f0;eip=0x000bd7; 	X(MOV(*(dw*)(raddr(es,bx+0x14)), ax));	// 90370 mov     es:[bx+14h], ax ;~ 28F0:0BD7
loc_380bb:
	// 10207 
cs=0x28f0;eip=0x000bdb; 	X(POP(si));	// 90374 pop     si ;~ 28F0:0BDB
cs=0x28f0;eip=0x000bdc; 	T(MOV(sp, bp));	// 90375 mov     sp, bp ;~ 28F0:0BDC
cs=0x28f0;eip=0x000bde; 	X(POP(bp));	// 90376 pop     bp ;~ 28F0:0BDE
cs=0x28f0;eip=0x000bdf; 	R(RETN(4));	// 90377 retn    4 ;~ 28F0:0BDF
seg026_proc:
	// 90381 
cs=0x28f0;eip=0x000be2; 	X(PUSH(bp));	// 90381 push    bp ;~ 28F0:0BE2
cs=0x28f0;eip=0x000be3; 	T(MOV(bp, sp));	// 90382 mov     bp, sp ;~ 28F0:0BE3
cs=0x28f0;eip=0x000be5; 	T(SUB(sp, 8));	// 90383 sub     sp, 8 ;~ 28F0:0BE5
cs=0x28f0;eip=0x000be8; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 90384 les     bx, [bp+4] ;~ 28F0:0BE8
cs=0x28f0;eip=0x000beb; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 90385 mov     ax, es:[bx+2FAh] ;~ 28F0:0BEB
cs=0x28f0;eip=0x000bf0; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 90386 mov     dx, es:[bx+2FCh] ;~ 28F0:0BF0
cs=0x28f0;eip=0x000bf5; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 90387 add     ax, es:[bx+302h] ;~ 28F0:0BF5
cs=0x28f0;eip=0x000bfa; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 90388 adc     dx, es:[bx+304h] ;~ 28F0:0BFA
cs=0x28f0;eip=0x000bff; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90389 les     bx, es:[bx+31Ch] ;~ 28F0:0BFF
cs=0x28f0;eip=0x000c04; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 90390 cmp     dx, es:[bx+0Ch] ;~ 28F0:0C04
cs=0x28f0;eip=0x000c08; 	R(JG(loc_380fa));	// 90391 jg      short loc_380FA ;~ 28F0:0C08
cs=0x28f0;eip=0x000c0a; 	R(JL(loc_380f2));	// 90392 jl      short loc_380F2 ;~ 28F0:0C0A
cs=0x28f0;eip=0x000c0c; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 90393 cmp     ax, es:[bx+0Ah] ;~ 28F0:0C0C
cs=0x28f0;eip=0x000c10; 	R(JNC(loc_380fa));	// 90394 jnb     short loc_380FA ;~ 28F0:0C10
loc_380f2:
	// 10208 
cs=0x28f0;eip=0x000c12; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 90397 mov     dx, es:[bx+0Ch] ;~ 28F0:0C12
cs=0x28f0;eip=0x000c16; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 90398 mov     ax, es:[bx+0Ah] ;~ 28F0:0C16
loc_380fa:
	// 10209 
cs=0x28f0;eip=0x000c1a; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 90402 les     bx, [bp+4] ;~ 28F0:0C1A
cs=0x28f0;eip=0x000c1d; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90403 les     bx, es:[bx+31Ch] ;~ 28F0:0C1D
cs=0x28f0;eip=0x000c22; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 90404 mov     es:[bx+0Ah], ax ;~ 28F0:0C22
cs=0x28f0;eip=0x000c26; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 90405 mov     es:[bx+0Ch], dx ;~ 28F0:0C26
cs=0x28f0;eip=0x000c2a; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 90406 les     bx, [bp+4] ;~ 28F0:0C2A
cs=0x28f0;eip=0x000c2d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 90407 mov     ax, es:[bx+2FAh] ;~ 28F0:0C2D
cs=0x28f0;eip=0x000c32; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 90408 mov     dx, es:[bx+2FCh] ;~ 28F0:0C32
cs=0x28f0;eip=0x000c37; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 90409 add     ax, es:[bx+302h] ;~ 28F0:0C37
cs=0x28f0;eip=0x000c3c; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 90410 adc     dx, es:[bx+304h] ;~ 28F0:0C3C
cs=0x28f0;eip=0x000c41; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 90411 add     ax, es:[bx+20Eh] ;~ 28F0:0C41
cs=0x28f0;eip=0x000c46; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 90412 adc     dx, es:[bx+210h] ;~ 28F0:0C46
cs=0x28f0;eip=0x000c4b; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90413 les     bx, es:[bx+31Ch] ;~ 28F0:0C4B
cs=0x28f0;eip=0x000c50; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 90414 cmp     dx, es:[bx+0Ch] ;~ 28F0:0C50
cs=0x28f0;eip=0x000c54; 	R(JL(loc_381ab));	// 90415 jl      short loc_381AB ;~ 28F0:0C54
cs=0x28f0;eip=0x000c56; 	R(JG(loc_3813e));	// 90416 jg      short loc_3813E ;~ 28F0:0C56
cs=0x28f0;eip=0x000c58; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 90417 cmp     ax, es:[bx+0Ah] ;~ 28F0:0C58
cs=0x28f0;eip=0x000c5c; 	R(JBE(loc_381ab));	// 90418 jbe     short loc_381AB ;~ 28F0:0C5C
loc_3813e:
	// 10210 
cs=0x28f0;eip=0x000c5e; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 90421 les     bx, [bp+4] ;~ 28F0:0C5E
cs=0x28f0;eip=0x000c61; 	T(CMP(*(dw*)(raddr(es,bx+0x212)), 0));	// 90422 cmp     word ptr es:[bx+212h], 0 ;~ 28F0:0C61
cs=0x28f0;eip=0x000c67; 	R(JZ(loc_381ab));	// 90423 jz      short loc_381AB ;~ 28F0:0C67
cs=0x28f0;eip=0x000c69; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20E))));	// 90424 mov     ax, es:[bx+20Eh] ;~ 28F0:0C69
cs=0x28f0;eip=0x000c6e; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x210))));	// 90425 mov     dx, es:[bx+210h] ;~ 28F0:0C6E
cs=0x28f0;eip=0x000c73; 	T(MOV(cl, 8));	// 90426 mov     cl, 8 ;~ 28F0:0C73
cs=0x28f0;eip=0x000c75; 	R(CALLF(sub_10240,0));	// 90427 call    sub_10240 ;~ 28F0:0C75
cs=0x28f0;eip=0x000c7a; 	X(PUSH(dx));	// 90428 push    dx ;~ 28F0:0C7A
cs=0x28f0;eip=0x000c7b; 	X(PUSH(ax));	// 90429 push    ax ;~ 28F0:0C7B
cs=0x28f0;eip=0x000c7c; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 90430 les     bx, [bp+4] ;~ 28F0:0C7C
cs=0x28f0;eip=0x000c7f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20C))));	// 90431 mov     ax, es:[bx+20Ch] ;~ 28F0:0C7F
cs=0x28f0;eip=0x000c84; 	T(CWD);	// 90432 cwd ;~ 28F0:0C84
cs=0x28f0;eip=0x000c85; 	X(PUSH(dx));	// 90433 push    dx ;~ 28F0:0C85
cs=0x28f0;eip=0x000c86; 	X(PUSH(ax));	// 90434 push    ax ;~ 28F0:0C86
cs=0x28f0;eip=0x000c87; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 90435 mov     ax, es:[bx+2FAh] ;~ 28F0:0C87
cs=0x28f0;eip=0x000c8c; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 90436 mov     dx, es:[bx+2FCh] ;~ 28F0:0C8C
cs=0x28f0;eip=0x000c91; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90437 les     bx, es:[bx+31Ch] ;~ 28F0:0C91
cs=0x28f0;eip=0x000c96; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x0A))));	// 90438 sub     ax, es:[bx+0Ah] ;~ 28F0:0C96
cs=0x28f0;eip=0x000c9a; 	T(SBB(dx, *(dw*)(raddr(es,bx+0x0C))));	// 90439 sbb     dx, es:[bx+0Ch] ;~ 28F0:0C9A
cs=0x28f0;eip=0x000c9e; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 90440 les     bx, [bp+4] ;~ 28F0:0C9E
cs=0x28f0;eip=0x000ca1; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 90441 add     ax, es:[bx+302h] ;~ 28F0:0CA1
cs=0x28f0;eip=0x000ca6; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 90442 adc     dx, es:[bx+304h] ;~ 28F0:0CA6
cs=0x28f0;eip=0x000cab; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 90443 add     ax, es:[bx+20Eh] ;~ 28F0:0CAB
cs=0x28f0;eip=0x000cb0; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 90444 adc     dx, es:[bx+210h] ;~ 28F0:0CB0
cs=0x28f0;eip=0x000cb5; 	X(PUSH(dx));	// 90445 push    dx ;~ 28F0:0CB5
cs=0x28f0;eip=0x000cb6; 	X(PUSH(ax));	// 90446 push    ax ;~ 28F0:0CB6
cs=0x28f0;eip=0x000cb7; 	R(CALLF(sub_105c2,0));	// 90447 call    sub_105C2 ;~ 28F0:0CB7
cs=0x28f0;eip=0x000cbc; 	X(PUSH(dx));	// 90448 push    dx ;~ 28F0:0CBC
cs=0x28f0;eip=0x000cbd; 	X(PUSH(ax));	// 90449 push    ax ;~ 28F0:0CBD
cs=0x28f0;eip=0x000cbe; 	R(CALLF(sub_10526,0));	// 90450 call    sub_10526 ;~ 28F0:0CBE
cs=0x28f0;eip=0x000cc3; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 90451 mov     [bp-4], ax ;~ 28F0:0CC3
cs=0x28f0;eip=0x000cc6; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 90452 mov     [bp-2], dx ;~ 28F0:0CC6
cs=0x28f0;eip=0x000cc9; 	R(JMP(loc_381b3));	// 90453 jmp     short loc_381B3 ;~ 28F0:0CC9
loc_381ab:
	// 10211 
cs=0x28f0;eip=0x000ccb; 	T(SUB(ax, ax));	// 90458 sub     ax, ax ;~ 28F0:0CCB
cs=0x28f0;eip=0x000ccd; 	X(MOV(*(dw*)(raddr(ss,bp-2)), ax));	// 90459 mov     [bp-2], ax ;~ 28F0:0CCD
cs=0x28f0;eip=0x000cd0; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 90460 mov     [bp-4], ax ;~ 28F0:0CD0
loc_381b3:
	// 10212 
cs=0x28f0;eip=0x000cd3; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 90463 les     bx, [bp+4] ;~ 28F0:0CD3
cs=0x28f0;eip=0x000cd6; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 90464 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:0CD6
cs=0x28f0;eip=0x000cdc; 	R(JNZ(loc_381e6));	// 90465 jnz     short loc_381E6 ;~ 28F0:0CDC
cs=0x28f0;eip=0x000cde; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 90466 mov     ax, es:[bx+0E0h] ;~ 28F0:0CDE
cs=0x28f0;eip=0x000ce3; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 90467 mov     dx, es:[bx+0E2h] ;~ 28F0:0CE3
cs=0x28f0;eip=0x000ce8; 	T(CMP(dx, *(dw*)(raddr(ss,bp-2))));	// 90468 cmp     dx, [bp-2] ;~ 28F0:0CE8
cs=0x28f0;eip=0x000ceb; 	R(JL(loc_381da));	// 90469 jl      short loc_381DA ;~ 28F0:0CEB
cs=0x28f0;eip=0x000ced; 	R(JG(loc_381d4));	// 90470 jg      short loc_381D4 ;~ 28F0:0CED
cs=0x28f0;eip=0x000cef; 	T(CMP(ax, *(dw*)(raddr(ss,bp-4))));	// 90471 cmp     ax, [bp-4] ;~ 28F0:0CEF
cs=0x28f0;eip=0x000cf2; 	R(JBE(loc_381da));	// 90472 jbe     short loc_381DA ;~ 28F0:0CF2
loc_381d4:
	// 10213 
cs=0x28f0;eip=0x000cf4; 	T(MOV(dx, *(dw*)(raddr(ss,bp-2))));	// 90475 mov     dx, [bp-2] ;~ 28F0:0CF4
cs=0x28f0;eip=0x000cf7; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 90476 mov     ax, [bp-4] ;~ 28F0:0CF7
loc_381da:
	// 10214 
cs=0x28f0;eip=0x000cfa; 	X(MOV(*(dw*)(raddr(es,bx+0x0E0)), ax));	// 90480 mov     es:[bx+0E0h], ax ;~ 28F0:0CFA
cs=0x28f0;eip=0x000cff; 	X(MOV(*(dw*)(raddr(es,bx+0x0E2)), dx));	// 90481 mov     es:[bx+0E2h], dx ;~ 28F0:0CFF
cs=0x28f0;eip=0x000d04; 	R(JMP(loc_3820a));	// 90482 jmp     short loc_3820A ;~ 28F0:0D04
loc_381e6:
	// 10215 
cs=0x28f0;eip=0x000d06; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 90486 mov     ax, [bp-4] ;~ 28F0:0D06
cs=0x28f0;eip=0x000d09; 	T(MOV(dx, *(dw*)(raddr(ss,bp-2))));	// 90487 mov     dx, [bp-2] ;~ 28F0:0D09
cs=0x28f0;eip=0x000d0c; 	T(NEG(ax));	// 90488 neg     ax ;~ 28F0:0D0C
cs=0x28f0;eip=0x000d0e; 	T(ADC(dx, 0));	// 90489 adc     dx, 0 ;~ 28F0:0D0E
cs=0x28f0;eip=0x000d11; 	T(NEG(dx));	// 90490 neg     dx ;~ 28F0:0D11
cs=0x28f0;eip=0x000d13; 	X(MOV(*(dw*)(raddr(es,bx+0x20)), ax));	// 90491 mov     es:[bx+20h], ax ;~ 28F0:0D13
cs=0x28f0;eip=0x000d17; 	X(MOV(*(dw*)(raddr(es,bx+0x22)), dx));	// 90492 mov     es:[bx+22h], dx ;~ 28F0:0D17
cs=0x28f0;eip=0x000d1b; 	X(MOV(*(dw*)(raddr(es,bx+0x24)), ax));	// 90493 mov     es:[bx+24h], ax ;~ 28F0:0D1B
cs=0x28f0;eip=0x000d1f; 	X(MOV(*(dw*)(raddr(es,bx+0x26)), dx));	// 90494 mov     es:[bx+26h], dx ;~ 28F0:0D1F
cs=0x28f0;eip=0x000d23; 	T(NEG(ax));	// 90495 neg     ax ;~ 28F0:0D23
cs=0x28f0;eip=0x000d25; 	T(ADC(dx, 0));	// 90496 adc     dx, 0 ;~ 28F0:0D25
cs=0x28f0;eip=0x000d28; 	T(NEG(dx));	// 90497 neg     dx ;~ 28F0:0D28
loc_3820a:
	// 10216 
cs=0x28f0;eip=0x000d2a; 	T(MOV(cl, 5));	// 90500 mov     cl, 5 ;~ 28F0:0D2A
cs=0x28f0;eip=0x000d2c; 	R(CALLF(sub_10240,0));	// 90501 call    sub_10240 ;~ 28F0:0D2C
cs=0x28f0;eip=0x000d31; 	X(PUSH(ax));	// 90502 push    ax ;~ 28F0:0D31
cs=0x28f0;eip=0x000d32; 	R(CALLF(sub_24cf8,0));	// 90503 call    sub_24CF8 ;~ 28F0:0D32
cs=0x28f0;eip=0x000d37; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 90504 les     bx, [bp+4] ;~ 28F0:0D37
cs=0x28f0;eip=0x000d3a; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90505 les     bx, es:[bx+31Ch] ;~ 28F0:0D3A
cs=0x28f0;eip=0x000d3f; 	X(MOV(*(dw*)(raddr(es,bx+0x14)), ax));	// 90506 mov     es:[bx+14h], ax ;~ 28F0:0D3F
cs=0x28f0;eip=0x000d43; 	T(MOV(sp, bp));	// 90507 mov     sp, bp ;~ 28F0:0D43
cs=0x28f0;eip=0x000d45; 	X(POP(bp));	// 90508 pop     bp ;~ 28F0:0D45
cs=0x28f0;eip=0x000d46; 	R(RETN(4));	// 90509 retn    4 ;~ 28F0:0D46
cs=0x28f0;eip=0x0023c1; 	X(PUSH(bp));	// 93099 push    bp ;~ 28F0:23C1
cs=0x28f0;eip=0x0023c2; 	T(MOV(bp, sp));	// 93100 mov     bp, sp ;~ 28F0:23C2
cs=0x28f0;eip=0x0023c4; 	T(SUB(sp, 0x12));	// 93101 sub     sp, 12h ;~ 28F0:23C4
cs=0x28f0;eip=0x0023c7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+4))));	// 93102 mov     ax, [bp+4] ;~ 28F0:23C7
cs=0x28f0;eip=0x0023ca; 	T(MOV(dx, *(dw*)(raddr(ss,bp+6))));	// 93103 mov     dx, [bp+6] ;~ 28F0:23CA
cs=0x28f0;eip=0x0023cd; 	T(ADD(ax, 0x0A0));	// 93104 add     ax, 0A0h ; ' ' ;~ 28F0:23CD
cs=0x28f0;eip=0x0023d0; 	X(MOV(*(dw*)(raddr(ss,bp-0x10)), ax));	// 93105 mov     [bp-10h], ax ;~ 28F0:23D0
cs=0x28f0;eip=0x0023d3; 	X(MOV(*(dw*)(raddr(ss,bp-0x0E)), dx));	// 93106 mov     [bp-0Eh], dx ;~ 28F0:23D3
cs=0x28f0;eip=0x0023d6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+4))));	// 93107 mov     ax, [bp+4] ;~ 28F0:23D6
cs=0x28f0;eip=0x0023d9; 	T(ADD(ax, 0x120));	// 93108 add     ax, 120h ;~ 28F0:23D9
cs=0x28f0;eip=0x0023dc; 	X(MOV(*(dw*)(raddr(ss,bp-0x0C)), ax));	// 93109 mov     [bp-0Ch], ax ;~ 28F0:23DC
cs=0x28f0;eip=0x0023df; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), dx));	// 93110 mov     [bp-0Ah], dx ;~ 28F0:23DF
cs=0x28f0;eip=0x0023e2; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 93111 les     bx, [bp+4] ;~ 28F0:23E2
cs=0x28f0;eip=0x0023e5; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 93112 mov     ax, es:[bx] ;~ 28F0:23E5
cs=0x28f0;eip=0x0023e8; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 93113 mov     dx, es:[bx+2] ;~ 28F0:23E8
cs=0x28f0;eip=0x0023ec; 	T(MOV(cl, 5));	// 93114 mov     cl, 5 ;~ 28F0:23EC
cs=0x28f0;eip=0x0023ee; 	R(CALLF(sub_10240,0));	// 93115 call    sub_10240 ;~ 28F0:23EE
cs=0x28f0;eip=0x0023f3; 	X(PUSH(ax));	// 93116 push    ax ;~ 28F0:23F3
cs=0x28f0;eip=0x0023f4; 	R(CALLF(sub_24cf8,0));	// 93117 call    sub_24CF8 ;~ 28F0:23F4
cs=0x28f0;eip=0x0023f9; 	X(MOV(*(dw*)(raddr(ss,bp-0x12)), ax));	// 93118 mov     [bp-12h], ax ;~ 28F0:23F9
cs=0x28f0;eip=0x0023fc; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 93119 les     bx, [bp+4] ;~ 28F0:23FC
cs=0x28f0;eip=0x0023ff; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 93120 mov     ax, es:[bx+120h] ;~ 28F0:23FF
cs=0x28f0;eip=0x002404; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 93121 mov     dx, es:[bx+122h] ;~ 28F0:2404
cs=0x28f0;eip=0x002409; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 93122 mov     [bp-4], ax ;~ 28F0:2409
cs=0x28f0;eip=0x00240c; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 93123 mov     [bp-2], dx ;~ 28F0:240C
cs=0x28f0;eip=0x00240f; 	X(PUSH(*(dw*)(raddr(ss,bp-0x12))));	// 93124 push    word ptr [bp-12h] ;~ 28F0:240F
cs=0x28f0;eip=0x002412; 	R(CALLF(sub_27cb4,0));	// 93125 call    sub_27CB4 ;~ 28F0:2412
cs=0x28f0;eip=0x002417; 	X(PUSH(dx));	// 93126 push    dx ;~ 28F0:2417
cs=0x28f0;eip=0x002418; 	X(PUSH(ax));	// 93127 push    ax ;~ 28F0:2418
cs=0x28f0;eip=0x002419; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 93128 mov     ax, [bp-4] ;~ 28F0:2419
cs=0x28f0;eip=0x00241c; 	T(MOV(dx, *(dw*)(raddr(ss,bp-2))));	// 93129 mov     dx, [bp-2] ;~ 28F0:241C
cs=0x28f0;eip=0x00241f; 	T(MOV(cl, 8));	// 93130 mov     cl, 8 ;~ 28F0:241F
cs=0x28f0;eip=0x002421; 	R(CALLF(sub_10240,0));	// 93131 call    sub_10240 ;~ 28F0:2421
cs=0x28f0;eip=0x002426; 	X(PUSH(dx));	// 93132 push    dx ;~ 28F0:2426
cs=0x28f0;eip=0x002427; 	X(PUSH(ax));	// 93133 push    ax ;~ 28F0:2427
cs=0x28f0;eip=0x002428; 	R(CALLF(sub_105c2,0));	// 93134 call    sub_105C2 ;~ 28F0:2428
cs=0x28f0;eip=0x00242d; 	T(MOV(cl, 8));	// 93135 mov     cl, 8 ;~ 28F0:242D
cs=0x28f0;eip=0x00242f; 	R(CALLF(sub_10240,0));	// 93136 call    sub_10240 ;~ 28F0:242F
cs=0x28f0;eip=0x002434; 	X(MOV(*(dw*)(raddr(ss,bp-8)), ax));	// 93137 mov     [bp-8], ax ;~ 28F0:2434
cs=0x28f0;eip=0x002437; 	X(MOV(*(dw*)(raddr(ss,bp-6)), dx));	// 93138 mov     [bp-6], dx ;~ 28F0:2437
cs=0x28f0;eip=0x00243a; 	T(LES(bx, *(dw*)(raddr(ss,bp-0x0C))));	// 93139 les     bx, [bp-0Ch] ;~ 28F0:243A
cs=0x28f0;eip=0x00243d; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 93140 mov     ax, es:[bx+8] ;~ 28F0:243D
cs=0x28f0;eip=0x002441; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 93141 mov     dx, es:[bx+0Ah] ;~ 28F0:2441
cs=0x28f0;eip=0x002445; 	T(MOV(cl, 2));	// 93142 mov     cl, 2 ;~ 28F0:2445
cs=0x28f0;eip=0x002447; 	R(CALLF(sub_10240,0));	// 93143 call    sub_10240 ;~ 28F0:2447
cs=0x28f0;eip=0x00244c; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 93144 les     bx, [bp+4] ;~ 28F0:244C
cs=0x28f0;eip=0x00244f; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x122))));	// 93145 cmp     dx, es:[bx+122h] ;~ 28F0:244F
cs=0x28f0;eip=0x002454; 	R(JL(loc_39949));	// 93146 jl      short loc_39949 ;~ 28F0:2454
cs=0x28f0;eip=0x002456; 	R(JG(loc_3993f));	// 93147 jg      short loc_3993F ;~ 28F0:2456
cs=0x28f0;eip=0x002458; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x120))));	// 93148 cmp     ax, es:[bx+120h] ;~ 28F0:2458
cs=0x28f0;eip=0x00245d; 	R(JBE(loc_39949));	// 93149 jbe     short loc_39949 ;~ 28F0:245D
loc_3993f:
	// 10384 
cs=0x28f0;eip=0x00245f; 	T(SUB(ax, ax));	// 93152 sub     ax, ax ;~ 28F0:245F
cs=0x28f0;eip=0x002461; 	X(MOV(*(dw*)(raddr(ss,bp-6)), ax));	// 93153 mov     [bp-6], ax ;~ 28F0:2461
cs=0x28f0;eip=0x002464; 	X(MOV(*(dw*)(raddr(ss,bp-8)), ax));	// 93154 mov     [bp-8], ax ;~ 28F0:2464
cs=0x28f0;eip=0x002467; 	R(JMP(loc_399b5));	// 93155 jmp     short loc_399B5 ;~ 28F0:2467
loc_39949:
	// 10385 
cs=0x28f0;eip=0x002469; 	T(MOV(ax, *(dw*)(raddr(ss,bp-8))));	// 93160 mov     ax, [bp-8] ;~ 28F0:2469
cs=0x28f0;eip=0x00246c; 	T(OR(ax, *(dw*)(raddr(ss,bp-6))));	// 93161 or      ax, [bp-6] ;~ 28F0:246C
cs=0x28f0;eip=0x00246f; 	R(JNZ(loc_39972));	// 93162 jnz     short loc_39972 ;~ 28F0:246F
cs=0x28f0;eip=0x002471; 	T(CMP(*(dw*)(raddr(ss,bp-0x12)), 0x5A0));	// 93163 cmp     word ptr [bp-12h], 5A0h ;~ 28F0:2471
cs=0x28f0;eip=0x002476; 	R(JG(loc_39965));	// 93164 jg      short loc_39965 ;~ 28F0:2476
cs=0x28f0;eip=0x002478; 	T(LES(bx, *(dw*)(raddr(ss,bp-0x10))));	// 93165 les     bx, [bp-10h] ;~ 28F0:2478
cs=0x28f0;eip=0x00247b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 93166 mov     ax, es:[bx+0Ch] ;~ 28F0:247B
cs=0x28f0;eip=0x00247f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 93167 mov     dx, es:[bx+0Eh] ;~ 28F0:247F
cs=0x28f0;eip=0x002483; 	R(JMP(loc_399af));	// 93168 jmp     short loc_399AF ;~ 28F0:2483
loc_39965:
	// 10386 
cs=0x28f0;eip=0x002485; 	T(LES(bx, *(dw*)(raddr(ss,bp-0x10))));	// 93172 les     bx, [bp-10h] ;~ 28F0:2485
cs=0x28f0;eip=0x002488; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 93173 mov     ax, es:[bx+8] ;~ 28F0:2488
cs=0x28f0;eip=0x00248c; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 93174 mov     dx, es:[bx+0Ah] ;~ 28F0:248C
cs=0x28f0;eip=0x002490; 	R(JMP(loc_399af));	// 93175 jmp     short loc_399AF ;~ 28F0:2490
loc_39972:
	// 10387 
cs=0x28f0;eip=0x002492; 	X(PUSH(*(dw*)(raddr(ss,bp-6))));	// 93179 push    word ptr [bp-6] ;~ 28F0:2492
cs=0x28f0;eip=0x002495; 	X(PUSH(*(dw*)(raddr(ss,bp-8))));	// 93180 push    word ptr [bp-8] ;~ 28F0:2495
cs=0x28f0;eip=0x002498; 	T(MOV(ax, 0x0CFA0));	// 93181 mov     ax, 0CFA0h ;~ 28F0:2498
cs=0x28f0;eip=0x00249b; 	T(CWD);	// 93182 cwd ;~ 28F0:249B
cs=0x28f0;eip=0x00249c; 	X(PUSH(dx));	// 93183 push    dx ;~ 28F0:249C
cs=0x28f0;eip=0x00249d; 	X(PUSH(ax));	// 93184 push    ax ;~ 28F0:249D
cs=0x28f0;eip=0x00249e; 	X(PUSH(*(dw*)(raddr(ss,bp-0x12))));	// 93185 push    word ptr [bp-12h] ;~ 28F0:249E
cs=0x28f0;eip=0x0024a1; 	R(CALLF(sub_27c9e,0));	// 93186 call    sub_27C9E ;~ 28F0:24A1
cs=0x28f0;eip=0x0024a6; 	X(PUSH(dx));	// 93187 push    dx ;~ 28F0:24A6
cs=0x28f0;eip=0x0024a7; 	X(PUSH(ax));	// 93188 push    ax ;~ 28F0:24A7
cs=0x28f0;eip=0x0024a8; 	R(CALLF(sub_105c2,0));	// 93189 call    sub_105C2 ;~ 28F0:24A8
cs=0x28f0;eip=0x0024ad; 	X(PUSH(dx));	// 93190 push    dx ;~ 28F0:24AD
cs=0x28f0;eip=0x0024ae; 	X(PUSH(ax));	// 93191 push    ax ;~ 28F0:24AE
cs=0x28f0;eip=0x0024af; 	R(CALLF(sub_10526,0));	// 93192 call    sub_10526 ;~ 28F0:24AF
cs=0x28f0;eip=0x0024b4; 	X(MOV(*(dw*)(raddr(ss,bp-8)), ax));	// 93193 mov     [bp-8], ax ;~ 28F0:24B4
cs=0x28f0;eip=0x0024b7; 	X(MOV(*(dw*)(raddr(ss,bp-6)), dx));	// 93194 mov     [bp-6], dx ;~ 28F0:24B7
cs=0x28f0;eip=0x0024ba; 	T(CMP(*(dw*)(raddr(ss,bp-0x12)), 0x2D0));	// 93195 cmp     word ptr [bp-12h], 2D0h ;~ 28F0:24BA
cs=0x28f0;eip=0x0024bf; 	R(JLE(loc_399b5));	// 93196 jle     short loc_399B5 ;~ 28F0:24BF
cs=0x28f0;eip=0x0024c1; 	T(CMP(*(dw*)(raddr(ss,bp-0x12)), 0x870));	// 93197 cmp     word ptr [bp-12h], 870h ;~ 28F0:24C1
cs=0x28f0;eip=0x0024c6; 	R(JGE(loc_399b5));	// 93198 jge     short loc_399B5 ;~ 28F0:24C6
cs=0x28f0;eip=0x0024c8; 	T(NEG(ax));	// 93199 neg     ax ;~ 28F0:24C8
cs=0x28f0;eip=0x0024ca; 	T(ADC(dx, 0));	// 93200 adc     dx, 0 ;~ 28F0:24CA
cs=0x28f0;eip=0x0024cd; 	T(NEG(dx));	// 93201 neg     dx ;~ 28F0:24CD
loc_399af:
	// 10388 
cs=0x28f0;eip=0x0024cf; 	X(MOV(*(dw*)(raddr(ss,bp-8)), ax));	// 93205 mov     [bp-8], ax ;~ 28F0:24CF
cs=0x28f0;eip=0x0024d2; 	X(MOV(*(dw*)(raddr(ss,bp-6)), dx));	// 93206 mov     [bp-6], dx ;~ 28F0:24D2
loc_399b5:
	// 10389 
cs=0x28f0;eip=0x0024d5; 	T(LES(bx, *(dw*)(raddr(ss,bp-0x10))));	// 93210 les     bx, [bp-10h] ;~ 28F0:24D5
cs=0x28f0;eip=0x0024d8; 	T(MOV(ax, *(dw*)(raddr(ss,bp-8))));	// 93211 mov     ax, [bp-8] ;~ 28F0:24D8
cs=0x28f0;eip=0x0024db; 	T(MOV(dx, *(dw*)(raddr(ss,bp-6))));	// 93212 mov     dx, [bp-6] ;~ 28F0:24DB
cs=0x28f0;eip=0x0024de; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 93213 mov     es:[bx], ax ;~ 28F0:24DE
cs=0x28f0;eip=0x0024e1; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 93214 mov     es:[bx+2], dx ;~ 28F0:24E1
cs=0x28f0;eip=0x0024e5; 	X(PUSH(es));	// 93215 push    es ;~ 28F0:24E5
cs=0x28f0;eip=0x0024e6; 	X(PUSH(bx));	// 93216 push    bx ;~ 28F0:24E6
cs=0x28f0;eip=0x0024e7; 	R(CALL(sub_3bb03,0));	// 93217 call    sub_3BB03 ;~ 28F0:24E7
cs=0x28f0;eip=0x0024ea; 	T(MOV(sp, bp));	// 93218 mov     sp, bp ;~ 28F0:24EA
cs=0x28f0;eip=0x0024ec; 	X(POP(bp));	// 93219 pop     bp ;~ 28F0:24EC
cs=0x28f0;eip=0x0024ed; 	R(RETN(4));	// 93220 retn    4 ;~ 28F0:24ED
cs=0x28f0;eip=0x004670; 	X(PUSH(bp));	// 97195 push    bp ;~ 28F0:4670
cs=0x28f0;eip=0x004671; 	T(MOV(bp, sp));	// 97196 mov     bp, sp ;~ 28F0:4671
cs=0x28f0;eip=0x004673; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 97197 les     bx, [bp+4] ;~ 28F0:4673
cs=0x28f0;eip=0x004676; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 97198 mov     ax, es:[bx] ;~ 28F0:4676
cs=0x28f0;eip=0x004679; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 97199 mov     dx, es:[bx+2] ;~ 28F0:4679
cs=0x28f0;eip=0x00467d; 	T(CMP(*(dw*)(raddr(es,bx+0x1A)), dx));	// 97200 cmp     es:[bx+1Ah], dx ;~ 28F0:467D
cs=0x28f0;eip=0x004681; 	R(JG(loc_3bb75));	// 97201 jg      short loc_3BB75 ;~ 28F0:4681
cs=0x28f0;eip=0x004683; 	R(JL(loc_3bb6b));	// 97202 jl      short loc_3BB6B ;~ 28F0:4683
cs=0x28f0;eip=0x004685; 	T(CMP(*(dw*)(raddr(es,bx+0x18)), ax));	// 97203 cmp     es:[bx+18h], ax ;~ 28F0:4685
cs=0x28f0;eip=0x004689; 	R(JNC(loc_3bb75));	// 97204 jnb     short loc_3BB75 ;~ 28F0:4689
loc_3bb6b:
	// 10623 
cs=0x28f0;eip=0x00468b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x18))));	// 97207 mov     ax, es:[bx+18h] ;~ 28F0:468B
cs=0x28f0;eip=0x00468f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1A))));	// 97208 mov     dx, es:[bx+1Ah] ;~ 28F0:468F
cs=0x28f0;eip=0x004693; 	R(JMP(loc_3bb92));	// 97209 jmp     short loc_3BB92 ;~ 28F0:4693
loc_3bb75:
	// 10624 
cs=0x28f0;eip=0x004695; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 97214 mov     ax, es:[bx] ;~ 28F0:4695
cs=0x28f0;eip=0x004698; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 97215 mov     dx, es:[bx+2] ;~ 28F0:4698
cs=0x28f0;eip=0x00469c; 	T(CMP(*(dw*)(raddr(es,bx+0x1E)), dx));	// 97216 cmp     es:[bx+1Eh], dx ;~ 28F0:469C
cs=0x28f0;eip=0x0046a0; 	R(JL(loc_3bb99));	// 97217 jl      short loc_3BB99 ;~ 28F0:46A0
cs=0x28f0;eip=0x0046a2; 	R(JG(loc_3bb8a));	// 97218 jg      short loc_3BB8A ;~ 28F0:46A2
cs=0x28f0;eip=0x0046a4; 	T(CMP(*(dw*)(raddr(es,bx+0x1C)), ax));	// 97219 cmp     es:[bx+1Ch], ax ;~ 28F0:46A4
cs=0x28f0;eip=0x0046a8; 	R(JBE(loc_3bb99));	// 97220 jbe     short loc_3BB99 ;~ 28F0:46A8
loc_3bb8a:
	// 10625 
cs=0x28f0;eip=0x0046aa; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1C))));	// 97223 mov     ax, es:[bx+1Ch] ;~ 28F0:46AA
cs=0x28f0;eip=0x0046ae; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1E))));	// 97224 mov     dx, es:[bx+1Eh] ;~ 28F0:46AE
loc_3bb92:
	// 10626 
cs=0x28f0;eip=0x0046b2; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 97227 mov     es:[bx], ax ;~ 28F0:46B2
cs=0x28f0;eip=0x0046b5; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 97228 mov     es:[bx+2], dx ;~ 28F0:46B5
loc_3bb99:
	// 10627 
cs=0x28f0;eip=0x0046b9; 	X(POP(bp));	// 97232 pop     bp ;~ 28F0:46B9
cs=0x28f0;eip=0x0046ba; 	R(RETN(4));	// 97233 retn    4 ;~ 28F0:46BA
cs=0x28f0;eip=0x004a32; 	X(PUSH(bp));	// 97761 push    bp ;~ 28F0:4A32
cs=0x28f0;eip=0x004a33; 	T(MOV(bp, sp));	// 97762 mov     bp, sp ;~ 28F0:4A33
cs=0x28f0;eip=0x004a35; 	T(SUB(sp, 4));	// 97763 sub     sp, 4 ;~ 28F0:4A35
cs=0x28f0;eip=0x004a38; 	T(SUB(ax, ax));	// 97764 sub     ax, ax ;~ 28F0:4A38
cs=0x28f0;eip=0x004a3a; 	X(MOV(*(dw*)(raddr(ss,bp-2)), ax));	// 97765 mov     [bp-2], ax ;~ 28F0:4A3A
cs=0x28f0;eip=0x004a3d; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 97766 mov     [bp-4], ax ;~ 28F0:4A3D
cs=0x28f0;eip=0x004a40; 	T(CMP(*(dw*)(raddr(ss,bp+4)), ax));	// 97767 cmp     [bp+4], ax ;~ 28F0:4A40
cs=0x28f0;eip=0x004a43; 	R(JLE(loc_3bf74));	// 97768 jle     short loc_3BF74 ;~ 28F0:4A43
cs=0x28f0;eip=0x004a45; 	T(CMP(*(dw*)(raddr(ss,bp+4)), 0x64));	// 97769 cmp     word ptr [bp+4], 64h ; 'd' ;~ 28F0:4A45
cs=0x28f0;eip=0x004a49; 	R(JL(loc_3bf38));	// 97770 jl      short loc_3BF38 ;~ 28F0:4A49
cs=0x28f0;eip=0x004a4b; 	T(LES(bx, *(dw*)(raddr(ss,bp+6))));	// 97771 les     bx, [bp+6] ;~ 28F0:4A4B
cs=0x28f0;eip=0x004a4e; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 97772 mov     ax, es:[bx+8] ;~ 28F0:4A4E
cs=0x28f0;eip=0x004a52; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 97773 mov     dx, es:[bx+0Ah] ;~ 28F0:4A52
cs=0x28f0;eip=0x004a56; 	R(JMP(loc_3bf5b));	// 97774 jmp     short loc_3BF5B ;~ 28F0:4A56
loc_3bf38:
	// 10660 
cs=0x28f0;eip=0x004a58; 	T(MOV(ax, 0x64));	// 97778 mov     ax, 64h ; 'd' ;~ 28F0:4A58
cs=0x28f0;eip=0x004a5b; 	T(CWD);	// 97779 cwd ;~ 28F0:4A5B
cs=0x28f0;eip=0x004a5c; 	X(PUSH(dx));	// 97780 push    dx ;~ 28F0:4A5C
cs=0x28f0;eip=0x004a5d; 	X(PUSH(ax));	// 97781 push    ax ;~ 28F0:4A5D
cs=0x28f0;eip=0x004a5e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+4))));	// 97782 mov     ax, [bp+4] ;~ 28F0:4A5E
cs=0x28f0;eip=0x004a61; 	T(CWD);	// 97783 cwd ;~ 28F0:4A61
cs=0x28f0;eip=0x004a62; 	X(PUSH(dx));	// 97784 push    dx ;~ 28F0:4A62
cs=0x28f0;eip=0x004a63; 	X(PUSH(ax));	// 97785 push    ax ;~ 28F0:4A63
cs=0x28f0;eip=0x004a64; 	T(LES(bx, *(dw*)(raddr(ss,bp+6))));	// 97786 les     bx, [bp+6] ;~ 28F0:4A64
cs=0x28f0;eip=0x004a67; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 97787 push    word ptr es:[bx+0Ah] ;~ 28F0:4A67
cs=0x28f0;eip=0x004a6b; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 97788 push    word ptr es:[bx+8] ;~ 28F0:4A6B
cs=0x28f0;eip=0x004a6f; 	R(CALLF(sub_105c2,0));	// 97789 call    sub_105C2 ;~ 28F0:4A6F
cs=0x28f0;eip=0x004a74; 	X(PUSH(dx));	// 97790 push    dx ;~ 28F0:4A74
cs=0x28f0;eip=0x004a75; 	X(PUSH(ax));	// 97791 push    ax ;~ 28F0:4A75
cs=0x28f0;eip=0x004a76; 	R(CALLF(sub_10526,0));	// 97792 call    sub_10526 ;~ 28F0:4A76
loc_3bf5b:
	// 10661 
cs=0x28f0;eip=0x004a7b; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 97795 mov     [bp-4], ax ;~ 28F0:4A7B
cs=0x28f0;eip=0x004a7e; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 97796 mov     [bp-2], dx ;~ 28F0:4A7E
cs=0x28f0;eip=0x004a81; 	X(PUSH(*(dw*)(raddr(ss,bp+8))));	// 97797 push    word ptr [bp+8] ;~ 28F0:4A81
cs=0x28f0;eip=0x004a84; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 97798 push    word ptr [bp+6] ;~ 28F0:4A84
cs=0x28f0;eip=0x004a87; 	X(PUSH(dx));	// 97799 push    dx ;~ 28F0:4A87
cs=0x28f0;eip=0x004a88; 	X(PUSH(ax));	// 97800 push    ax ;~ 28F0:4A88
cs=0x28f0;eip=0x004a89; 	T(NEG(ax));	// 97801 neg     ax ;~ 28F0:4A89
cs=0x28f0;eip=0x004a8b; 	T(ADC(dx, 0));	// 97802 adc     dx, 0 ;~ 28F0:4A8B
cs=0x28f0;eip=0x004a8e; 	T(NEG(dx));	// 97803 neg     dx ;~ 28F0:4A8E
cs=0x28f0;eip=0x004a90; 	X(PUSH(dx));	// 97804 push    dx ;~ 28F0:4A90
cs=0x28f0;eip=0x004a91; 	X(PUSH(ax));	// 97805 push    ax ;~ 28F0:4A91
cs=0x28f0;eip=0x004a92; 	R(JMP(loc_3bfc5));	// 97806 jmp     short loc_3BFC5 ;~ 28F0:4A92
loc_3bf74:
	// 10662 
cs=0x28f0;eip=0x004a94; 	T(CMP(*(dw*)(raddr(ss,bp+4)), 0x0FF9C));	// 97810 cmp     word ptr [bp+4], 0FF9Ch ;~ 28F0:4A94
cs=0x28f0;eip=0x004a98; 	R(JG(loc_3bf87));	// 97811 jg      short loc_3BF87 ;~ 28F0:4A98
cs=0x28f0;eip=0x004a9a; 	T(LES(bx, *(dw*)(raddr(ss,bp+6))));	// 97812 les     bx, [bp+6] ;~ 28F0:4A9A
cs=0x28f0;eip=0x004a9d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 97813 mov     ax, es:[bx+0Ch] ;~ 28F0:4A9D
cs=0x28f0;eip=0x004aa1; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 97814 mov     dx, es:[bx+0Eh] ;~ 28F0:4AA1
cs=0x28f0;eip=0x004aa5; 	R(JMP(loc_3bfaa));	// 97815 jmp     short loc_3BFAA ;~ 28F0:4AA5
loc_3bf87:
	// 10663 
cs=0x28f0;eip=0x004aa7; 	T(MOV(ax, 0x0FF9C));	// 97819 mov     ax, 0FF9Ch ;~ 28F0:4AA7
cs=0x28f0;eip=0x004aaa; 	T(CWD);	// 97820 cwd ;~ 28F0:4AAA
cs=0x28f0;eip=0x004aab; 	X(PUSH(dx));	// 97821 push    dx ;~ 28F0:4AAB
cs=0x28f0;eip=0x004aac; 	X(PUSH(ax));	// 97822 push    ax ;~ 28F0:4AAC
cs=0x28f0;eip=0x004aad; 	T(MOV(ax, *(dw*)(raddr(ss,bp+4))));	// 97823 mov     ax, [bp+4] ;~ 28F0:4AAD
cs=0x28f0;eip=0x004ab0; 	T(CWD);	// 97824 cwd ;~ 28F0:4AB0
cs=0x28f0;eip=0x004ab1; 	X(PUSH(dx));	// 97825 push    dx ;~ 28F0:4AB1
cs=0x28f0;eip=0x004ab2; 	X(PUSH(ax));	// 97826 push    ax ;~ 28F0:4AB2
cs=0x28f0;eip=0x004ab3; 	T(LES(bx, *(dw*)(raddr(ss,bp+6))));	// 97827 les     bx, [bp+6] ;~ 28F0:4AB3
cs=0x28f0;eip=0x004ab6; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 97828 push    word ptr es:[bx+0Eh] ;~ 28F0:4AB6
cs=0x28f0;eip=0x004aba; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 97829 push    word ptr es:[bx+0Ch] ;~ 28F0:4ABA
cs=0x28f0;eip=0x004abe; 	R(CALLF(sub_105c2,0));	// 97830 call    sub_105C2 ;~ 28F0:4ABE
cs=0x28f0;eip=0x004ac3; 	X(PUSH(dx));	// 97831 push    dx ;~ 28F0:4AC3
cs=0x28f0;eip=0x004ac4; 	X(PUSH(ax));	// 97832 push    ax ;~ 28F0:4AC4
cs=0x28f0;eip=0x004ac5; 	R(CALLF(sub_10526,0));	// 97833 call    sub_10526 ;~ 28F0:4AC5
loc_3bfaa:
	// 10664 
cs=0x28f0;eip=0x004aca; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 97836 mov     [bp-4], ax ;~ 28F0:4ACA
cs=0x28f0;eip=0x004acd; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 97837 mov     [bp-2], dx ;~ 28F0:4ACD
cs=0x28f0;eip=0x004ad0; 	X(PUSH(*(dw*)(raddr(ss,bp+8))));	// 97838 push    word ptr [bp+8] ;~ 28F0:4AD0
cs=0x28f0;eip=0x004ad3; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 97839 push    word ptr [bp+6] ;~ 28F0:4AD3
cs=0x28f0;eip=0x004ad6; 	T(NEG(ax));	// 97840 neg     ax ;~ 28F0:4AD6
cs=0x28f0;eip=0x004ad8; 	T(ADC(dx, 0));	// 97841 adc     dx, 0 ;~ 28F0:4AD8
cs=0x28f0;eip=0x004adb; 	T(NEG(dx));	// 97842 neg     dx ;~ 28F0:4ADB
cs=0x28f0;eip=0x004add; 	X(PUSH(dx));	// 97843 push    dx ;~ 28F0:4ADD
cs=0x28f0;eip=0x004ade; 	X(PUSH(ax));	// 97844 push    ax ;~ 28F0:4ADE
cs=0x28f0;eip=0x004adf; 	X(PUSH(*(dw*)(raddr(ss,bp-2))));	// 97845 push    word ptr [bp-2] ;~ 28F0:4ADF
cs=0x28f0;eip=0x004ae2; 	X(PUSH(*(dw*)(raddr(ss,bp-4))));	// 97846 push    word ptr [bp-4] ;~ 28F0:4AE2
loc_3bfc5:
	// 10665 
cs=0x28f0;eip=0x004ae5; 	R(CALL(sub_3bb9d,0));	// 97849 call    sub_3BB9D ;~ 28F0:4AE5
cs=0x28f0;eip=0x004ae8; 	T(MOV(sp, bp));	// 97850 mov     sp, bp ;~ 28F0:4AE8
cs=0x28f0;eip=0x004aea; 	X(POP(bp));	// 97851 pop     bp ;~ 28F0:4AEA
cs=0x28f0;eip=0x004aeb; 	R(RETN(6));	// 97852 retn    6 ;~ 28F0:4AEB
sub_38229:
	// 90515 
#undef arg_0
#define arg_0 4
	// 90517 arg_0           = dword ptr  4 ;~ 28F0:0D49
cs=0x28f0;eip=0x000d49; 	X(PUSH(bp));	// 90519 push    bp ;~ 28F0:0D49
cs=0x28f0;eip=0x000d4a; 	T(MOV(bp, sp));	// 90520 mov     bp, sp ;~ 28F0:0D4A
cs=0x28f0;eip=0x000d4c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90521 les     bx, [bp+arg_0] ;~ 28F0:0D4C
cs=0x28f0;eip=0x000d4f; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 90522 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:0D4F
cs=0x28f0;eip=0x000d55; 	R(JNZ(loc_38243));	// 90523 jnz     short loc_38243 ;~ 28F0:0D55
cs=0x28f0;eip=0x000d57; 	T(SUB(ax, ax));	// 90524 sub     ax, ax ;~ 28F0:0D57
cs=0x28f0;eip=0x000d59; 	X(MOV(*(dw*)(raddr(es,bx+0x0E2)), ax));	// 90525 mov     es:[bx+0E2h], ax ;~ 28F0:0D59
cs=0x28f0;eip=0x000d5e; 	X(MOV(*(dw*)(raddr(es,bx+0x0E0)), ax));	// 90526 mov     es:[bx+0E0h], ax ;~ 28F0:0D5E
loc_38243:
	// 10217 
cs=0x28f0;eip=0x000d63; 	X(POP(bp));	// 90529 pop     bp ;~ 28F0:0D63
cs=0x28f0;eip=0x000d64; 	R(RETN(4));	// 90530 retn    4 ;~ 28F0:0D64
sub_38247:
	// 90538 
#undef arg_0
#define arg_0 6
	// 90541 arg_0           = dword ptr  6 ;~ 28F0:0D67
#undef arg_4
#define arg_4 0x0A
	// 90542 arg_4           = word ptr  0Ah ;~ 28F0:0D67
#undef arg_6
#define arg_6 0x0C
	// 90543 arg_6           = word ptr  0Ch ;~ 28F0:0D67
cs=0x28f0;eip=0x000d67; 	X(PUSH(bp));	// 90545 push    bp ;~ 28F0:0D67
cs=0x28f0;eip=0x000d68; 	T(MOV(bp, sp));	// 90546 mov     bp, sp ;~ 28F0:0D68
cs=0x28f0;eip=0x000d6a; 	X(PUSH(si));	// 90547 push    si ;~ 28F0:0D6A
cs=0x28f0;eip=0x000d6b; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0));	// 90548 cmp     [bp+arg_6], 0 ;~ 28F0:0D6B
cs=0x28f0;eip=0x000d6f; 	R(JLE(loc_38257));	// 90549 jle     short loc_38257 ;~ 28F0:0D6F
cs=0x28f0;eip=0x000d71; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0x64));	// 90550 cmp     [bp+arg_6], 64h ; 'd' ;~ 28F0:0D71
cs=0x28f0;eip=0x000d75; 	R(JLE(loc_3825c));	// 90551 jle     short loc_3825C ;~ 28F0:0D75
loc_38257:
	// 10218 
cs=0x28f0;eip=0x000d77; 	T(SUB(ax, ax));	// 90554 sub     ax, ax ;~ 28F0:0D77
cs=0x28f0;eip=0x000d79; 	R(JMP(loc_3842c));	// 90555 jmp     loc_3842C ;~ 28F0:0D79
loc_3825c:
	// 10219 
cs=0x28f0;eip=0x000d7c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 90559 mov     ax, [bp+arg_4] ;~ 28F0:0D7C
cs=0x28f0;eip=0x000d7f; 	T(CWD);	// 90560 cwd ;~ 28F0:0D7F
cs=0x28f0;eip=0x000d80; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90561 les     bx, [bp+arg_0] ;~ 28F0:0D80
cs=0x28f0;eip=0x000d83; 	X(OR(*(dw*)(raddr(es,bx+0x340)), ax));	// 90562 or      es:[bx+340h], ax ;~ 28F0:0D83
cs=0x28f0;eip=0x000d88; 	X(OR(*(dw*)(raddr(es,bx+0x342)), dx));	// 90563 or      es:[bx+342h], dx ;~ 28F0:0D88
cs=0x28f0;eip=0x000d8d; 	T(CMP(ax, 1));	// 90564 cmp     ax, 1 ;~ 28F0:0D8D
cs=0x28f0;eip=0x000d90; 	R(JNZ(loc_38275));	// 90565 jnz     short loc_38275 ;~ 28F0:0D90
cs=0x28f0;eip=0x000d92; 	R(JMP(loc_3832f));	// 90566 jmp     loc_3832F ;~ 28F0:0D92
loc_38275:
	// 10220 
cs=0x28f0;eip=0x000d95; 	T(CMP(ax, 2));	// 90570 cmp     ax, 2 ;~ 28F0:0D95
cs=0x28f0;eip=0x000d98; 	R(JZ(loc_3829d));	// 90571 jz      short loc_3829D ;~ 28F0:0D98
cs=0x28f0;eip=0x000d9a; 	T(CMP(ax, 4));	// 90572 cmp     ax, 4 ;~ 28F0:0D9A
cs=0x28f0;eip=0x000d9d; 	R(JNZ(loc_38282));	// 90573 jnz     short loc_38282 ;~ 28F0:0D9D
cs=0x28f0;eip=0x000d9f; 	R(JMP(loc_3838a));	// 90574 jmp     loc_3838A ;~ 28F0:0D9F
loc_38282:
	// 10221 
cs=0x28f0;eip=0x000da2; 	T(CMP(ax, 8));	// 90578 cmp     ax, 8 ;~ 28F0:0DA2
cs=0x28f0;eip=0x000da5; 	R(JNZ(loc_3828a));	// 90579 jnz     short loc_3828A ;~ 28F0:0DA5
cs=0x28f0;eip=0x000da7; 	R(JMP(loc_38329));	// 90580 jmp     loc_38329 ;~ 28F0:0DA7
loc_3828a:
	// 10222 
cs=0x28f0;eip=0x000daa; 	T(CMP(ax, 0x10));	// 90584 cmp     ax, 10h ;~ 28F0:0DAA
cs=0x28f0;eip=0x000dad; 	R(JNZ(loc_38292));	// 90585 jnz     short loc_38292 ;~ 28F0:0DAD
cs=0x28f0;eip=0x000daf; 	R(JMP(loc_38329));	// 90586 jmp     loc_38329 ;~ 28F0:0DAF
loc_38292:
	// 10223 
cs=0x28f0;eip=0x000db2; 	T(CMP(ax, 0x20));	// 90590 cmp     ax, 20h ; ' ' ;~ 28F0:0DB2
cs=0x28f0;eip=0x000db5; 	R(JNZ(loc_3829a));	// 90591 jnz     short loc_3829A ;~ 28F0:0DB5
cs=0x28f0;eip=0x000db7; 	R(JMP(loc_383ef));	// 90592 jmp     loc_383EF ;~ 28F0:0DB7
loc_3829a:
	// 10224 
cs=0x28f0;eip=0x000dba; 	R(JMP(loc_38329));	// 90596 jmp     loc_38329 ;~ 28F0:0DBA
loc_3829d:
	// 10225 
cs=0x28f0;eip=0x000dbd; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 90600 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:0DBD
cs=0x28f0;eip=0x000dc3; 	R(JNZ(loc_382fa));	// 90601 jnz     short loc_382FA ;~ 28F0:0DC3
cs=0x28f0;eip=0x000dc5; 	T(MOV(ax, 0x64));	// 90602 mov     ax, 64h ; 'd' ;~ 28F0:0DC5
cs=0x28f0;eip=0x000dc8; 	T(CWD);	// 90603 cwd ;~ 28F0:0DC8
cs=0x28f0;eip=0x000dc9; 	X(PUSH(dx));	// 90604 push    dx ;~ 28F0:0DC9
cs=0x28f0;eip=0x000dca; 	X(PUSH(ax));	// 90605 push    ax ;~ 28F0:0DCA
cs=0x28f0;eip=0x000dcb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 90606 mov     ax, [bp+arg_6] ;~ 28F0:0DCB
cs=0x28f0;eip=0x000dce; 	T(CWD);	// 90607 cwd ;~ 28F0:0DCE
cs=0x28f0;eip=0x000dcf; 	X(PUSH(dx));	// 90608 push    dx ;~ 28F0:0DCF
cs=0x28f0;eip=0x000dd0; 	X(PUSH(ax));	// 90609 push    ax ;~ 28F0:0DD0
cs=0x28f0;eip=0x000dd1; 	X(PUSH(*(dw*)(raddr(es,bx+0x12A))));	// 90610 push    word ptr es:[bx+12Ah] ;~ 28F0:0DD1
cs=0x28f0;eip=0x000dd6; 	X(PUSH(*(dw*)(raddr(es,bx+0x128))));	// 90611 push    word ptr es:[bx+128h] ;~ 28F0:0DD6
cs=0x28f0;eip=0x000ddb; 	R(CALLF(sub_105c2,0));	// 90612 call    sub_105C2 ;~ 28F0:0DDB
cs=0x28f0;eip=0x000de0; 	X(PUSH(dx));	// 90613 push    dx ;~ 28F0:0DE0
cs=0x28f0;eip=0x000de1; 	X(PUSH(ax));	// 90614 push    ax ;~ 28F0:0DE1
cs=0x28f0;eip=0x000de2; 	R(CALLF(sub_10526,0));	// 90615 call    sub_10526 ;~ 28F0:0DE2
cs=0x28f0;eip=0x000de7; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90616 les     bx, [bp+arg_0] ;~ 28F0:0DE7
cs=0x28f0;eip=0x000dea; 	X(SUB(*(dw*)(raddr(es,bx+0x128)), ax));	// 90617 sub     es:[bx+128h], ax ;~ 28F0:0DEA
cs=0x28f0;eip=0x000def; 	X(SBB(*(dw*)(raddr(es,bx+0x12A)), dx));	// 90618 sbb     es:[bx+12Ah], dx ;~ 28F0:0DEF
cs=0x28f0;eip=0x000df4; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x128))));	// 90619 mov     ax, es:[bx+128h] ;~ 28F0:0DF4
cs=0x28f0;eip=0x000df9; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12A))));	// 90620 mov     dx, es:[bx+12Ah] ;~ 28F0:0DF9
cs=0x28f0;eip=0x000dfe; 	T(OR(dx, dx));	// 90621 or      dx, dx ;~ 28F0:0DFE
cs=0x28f0;eip=0x000e00; 	R(JG(loc_382ee));	// 90622 jg      short loc_382EE ;~ 28F0:0E00
cs=0x28f0;eip=0x000e02; 	R(JL(loc_382e9));	// 90623 jl      short loc_382E9 ;~ 28F0:0E02
cs=0x28f0;eip=0x000e04; 	T(CMP(ax, 0x6400));	// 90624 cmp     ax, 6400h ;~ 28F0:0E04
cs=0x28f0;eip=0x000e07; 	R(JNC(loc_382ee));	// 90625 jnb     short loc_382EE ;~ 28F0:0E07
loc_382e9:
	// 10226 
cs=0x28f0;eip=0x000e09; 	T(SUB(dx, dx));	// 90628 sub     dx, dx ;~ 28F0:0E09
cs=0x28f0;eip=0x000e0b; 	T(MOV(ax, 0x6400));	// 90629 mov     ax, 6400h ;~ 28F0:0E0B
loc_382ee:
	// 10227 
cs=0x28f0;eip=0x000e0e; 	X(MOV(*(dw*)(raddr(es,bx+0x128)), ax));	// 90633 mov     es:[bx+128h], ax ;~ 28F0:0E0E
cs=0x28f0;eip=0x000e13; 	X(MOV(*(dw*)(raddr(es,bx+0x12A)), dx));	// 90634 mov     es:[bx+12Ah], dx ;~ 28F0:0E13
cs=0x28f0;eip=0x000e18; 	R(JMP(loc_38329));	// 90635 jmp     short loc_38329 ;~ 28F0:0E18
loc_382fa:
	// 10228 
cs=0x28f0;eip=0x000e1a; 	T(MOV(ax, 0x64));	// 90639 mov     ax, 64h ; 'd' ;~ 28F0:0E1A
cs=0x28f0;eip=0x000e1d; 	T(CWD);	// 90640 cwd ;~ 28F0:0E1D
cs=0x28f0;eip=0x000e1e; 	X(PUSH(dx));	// 90641 push    dx ;~ 28F0:0E1E
cs=0x28f0;eip=0x000e1f; 	X(PUSH(ax));	// 90642 push    ax ;~ 28F0:0E1F
cs=0x28f0;eip=0x000e20; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 90643 mov     ax, [bp+arg_6] ;~ 28F0:0E20
cs=0x28f0;eip=0x000e23; 	T(CWD);	// 90644 cwd ;~ 28F0:0E23
cs=0x28f0;eip=0x000e24; 	X(PUSH(dx));	// 90645 push    dx ;~ 28F0:0E24
cs=0x28f0;eip=0x000e25; 	X(PUSH(ax));	// 90646 push    ax ;~ 28F0:0E25
cs=0x28f0;eip=0x000e26; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E8))));	// 90647 push    word ptr es:[bx+2E8h] ;~ 28F0:0E26
cs=0x28f0;eip=0x000e2b; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E6))));	// 90648 push    word ptr es:[bx+2E6h] ;~ 28F0:0E2B
cs=0x28f0;eip=0x000e30; 	R(CALLF(sub_105c2,0));	// 90649 call    sub_105C2 ;~ 28F0:0E30
cs=0x28f0;eip=0x000e35; 	X(PUSH(dx));	// 90650 push    dx ;~ 28F0:0E35
cs=0x28f0;eip=0x000e36; 	X(PUSH(ax));	// 90651 push    ax ;~ 28F0:0E36
cs=0x28f0;eip=0x000e37; 	R(CALLF(sub_10526,0));	// 90652 call    sub_10526 ;~ 28F0:0E37
cs=0x28f0;eip=0x000e3c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90653 les     bx, [bp+arg_0] ;~ 28F0:0E3C
cs=0x28f0;eip=0x000e3f; 	X(ADD(*(dw*)(raddr(es,bx+0x2E6)), ax));	// 90654 add     es:[bx+2E6h], ax ;~ 28F0:0E3F
cs=0x28f0;eip=0x000e44; 	X(ADC(*(dw*)(raddr(es,bx+0x2E8)), dx));	// 90655 adc     es:[bx+2E8h], dx ;~ 28F0:0E44
loc_38329:
	// 10229 
cs=0x28f0;eip=0x000e49; 	T(MOV(ax, 1));	// 90659 mov     ax, 1 ;~ 28F0:0E49
cs=0x28f0;eip=0x000e4c; 	R(JMP(loc_3842c));	// 90660 jmp     loc_3842C ;~ 28F0:0E4C
loc_3832f:
	// 10230 
cs=0x28f0;eip=0x000e4f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 90664 mov     ax, [bp+arg_6] ;~ 28F0:0E4F
cs=0x28f0;eip=0x000e52; 	T(CWD);	// 90665 cwd ;~ 28F0:0E52
cs=0x28f0;eip=0x000e53; 	T(MOV(dh, dl));	// 90666 mov     dh, dl ;~ 28F0:0E53
cs=0x28f0;eip=0x000e55; 	T(MOV(dl, ah));	// 90667 mov     dl, ah ;~ 28F0:0E55
cs=0x28f0;eip=0x000e57; 	T(MOV(ah, al));	// 90668 mov     ah, al ;~ 28F0:0E57
cs=0x28f0;eip=0x000e59; 	T(SUB(al, al));	// 90669 sub     al, al ;~ 28F0:0E59
cs=0x28f0;eip=0x000e5b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90670 les     bx, [bp+arg_0] ;~ 28F0:0E5B
cs=0x28f0;eip=0x000e5e; 	T(MOV(cx, *(dw*)(raddr(es,bx+0x234))));	// 90671 mov     cx, es:[bx+234h] ;~ 28F0:0E5E
cs=0x28f0;eip=0x000e63; 	T(MOV(si, *(dw*)(raddr(es,bx+0x236))));	// 90672 mov     si, es:[bx+236h] ;~ 28F0:0E63
cs=0x28f0;eip=0x000e68; 	T(SUB(cx, ax));	// 90673 sub     cx, ax ;~ 28F0:0E68
cs=0x28f0;eip=0x000e6a; 	T(SBB(si, dx));	// 90674 sbb     si, dx ;~ 28F0:0E6A
cs=0x28f0;eip=0x000e6c; 	T(OR(si, si));	// 90675 or      si, si ;~ 28F0:0E6C
cs=0x28f0;eip=0x000e6e; 	R(JG(loc_38356));	// 90676 jg      short loc_38356 ;~ 28F0:0E6E
cs=0x28f0;eip=0x000e70; 	R(JGE(loc_38356));	// 90677 jge     short loc_38356 ;~ 28F0:0E70
cs=0x28f0;eip=0x000e72; 	T(SUB(si, si));	// 90678 sub     si, si ;~ 28F0:0E72
cs=0x28f0;eip=0x000e74; 	T(SUB(cx, cx));	// 90679 sub     cx, cx ;~ 28F0:0E74
loc_38356:
	// 10231 
cs=0x28f0;eip=0x000e76; 	X(MOV(*(dw*)(raddr(es,bx+0x234)), cx));	// 90683 mov     es:[bx+234h], cx ;~ 28F0:0E76
cs=0x28f0;eip=0x000e7b; 	X(MOV(*(dw*)(raddr(es,bx+0x236)), si));	// 90684 mov     es:[bx+236h], si ;~ 28F0:0E7B
cs=0x28f0;eip=0x000e80; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x21C))));	// 90685 mov     ax, es:[bx+21Ch] ;~ 28F0:0E80
cs=0x28f0;eip=0x000e85; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21E))));	// 90686 mov     dx, es:[bx+21Eh] ;~ 28F0:0E85
cs=0x28f0;eip=0x000e8a; 	T(CMP(dx, si));	// 90687 cmp     dx, si ;~ 28F0:0E8A
cs=0x28f0;eip=0x000e8c; 	R(JL(loc_3837e));	// 90688 jl      short loc_3837E ;~ 28F0:0E8C
cs=0x28f0;eip=0x000e8e; 	R(JG(loc_38374));	// 90689 jg      short loc_38374 ;~ 28F0:0E8E
cs=0x28f0;eip=0x000e90; 	T(CMP(ax, cx));	// 90690 cmp     ax, cx ;~ 28F0:0E90
cs=0x28f0;eip=0x000e92; 	R(JBE(loc_3837e));	// 90691 jbe     short loc_3837E ;~ 28F0:0E92
loc_38374:
	// 10232 
cs=0x28f0;eip=0x000e94; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x236))));	// 90694 mov     dx, es:[bx+236h] ;~ 28F0:0E94
cs=0x28f0;eip=0x000e99; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x234))));	// 90695 mov     ax, es:[bx+234h] ;~ 28F0:0E99
loc_3837e:
	// 10233 
cs=0x28f0;eip=0x000e9e; 	X(MOV(*(dw*)(raddr(es,bx+0x21C)), ax));	// 90699 mov     es:[bx+21Ch], ax ;~ 28F0:0E9E
cs=0x28f0;eip=0x000ea3; 	X(MOV(*(dw*)(raddr(es,bx+0x21E)), dx));	// 90700 mov     es:[bx+21Eh], dx ;~ 28F0:0EA3
cs=0x28f0;eip=0x000ea8; 	R(JMP(loc_38329));	// 90701 jmp     short loc_38329 ;~ 28F0:0EA8
loc_3838a:
	// 10234 
cs=0x28f0;eip=0x000eaa; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 90705 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:0EAA
cs=0x28f0;eip=0x000eb0; 	R(JNZ(loc_38329));	// 90706 jnz     short loc_38329 ;~ 28F0:0EB0
cs=0x28f0;eip=0x000eb2; 	T(MOV(ax, 0x64));	// 90707 mov     ax, 64h ; 'd' ;~ 28F0:0EB2
cs=0x28f0;eip=0x000eb5; 	T(CWD);	// 90708 cwd ;~ 28F0:0EB5
cs=0x28f0;eip=0x000eb6; 	X(PUSH(dx));	// 90709 push    dx ;~ 28F0:0EB6
cs=0x28f0;eip=0x000eb7; 	X(PUSH(ax));	// 90710 push    ax ;~ 28F0:0EB7
cs=0x28f0;eip=0x000eb8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 90711 mov     ax, [bp+arg_6] ;~ 28F0:0EB8
cs=0x28f0;eip=0x000ebb; 	T(CWD);	// 90712 cwd ;~ 28F0:0EBB
cs=0x28f0;eip=0x000ebc; 	X(PUSH(dx));	// 90713 push    dx ;~ 28F0:0EBC
cs=0x28f0;eip=0x000ebd; 	X(PUSH(ax));	// 90714 push    ax ;~ 28F0:0EBD
cs=0x28f0;eip=0x000ebe; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 90715 push    word ptr es:[bx+0Ah] ;~ 28F0:0EBE
cs=0x28f0;eip=0x000ec2; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 90716 push    word ptr es:[bx+8] ;~ 28F0:0EC2
cs=0x28f0;eip=0x000ec6; 	R(CALLF(sub_105c2,0));	// 90717 call    sub_105C2 ;~ 28F0:0EC6
cs=0x28f0;eip=0x000ecb; 	X(PUSH(dx));	// 90718 push    dx ;~ 28F0:0ECB
cs=0x28f0;eip=0x000ecc; 	X(PUSH(ax));	// 90719 push    ax ;~ 28F0:0ECC
cs=0x28f0;eip=0x000ecd; 	R(CALLF(sub_10526,0));	// 90720 call    sub_10526 ;~ 28F0:0ECD
cs=0x28f0;eip=0x000ed2; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90721 les     bx, [bp+arg_0] ;~ 28F0:0ED2
cs=0x28f0;eip=0x000ed5; 	X(SUB(*(dw*)(raddr(es,bx+8)), ax));	// 90722 sub     es:[bx+8], ax ;~ 28F0:0ED5
cs=0x28f0;eip=0x000ed9; 	X(SBB(*(dw*)(raddr(es,bx+0x0A)), dx));	// 90723 sbb     es:[bx+0Ah], dx ;~ 28F0:0ED9
cs=0x28f0;eip=0x000edd; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 90724 mov     ax, es:[bx+8] ;~ 28F0:0EDD
cs=0x28f0;eip=0x000ee1; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 90725 mov     dx, es:[bx+0Ah] ;~ 28F0:0EE1
cs=0x28f0;eip=0x000ee5; 	T(OR(dx, dx));	// 90726 or      dx, dx ;~ 28F0:0EE5
cs=0x28f0;eip=0x000ee7; 	R(JG(loc_383d5));	// 90727 jg      short loc_383D5 ;~ 28F0:0EE7
cs=0x28f0;eip=0x000ee9; 	R(JL(loc_383d0));	// 90728 jl      short loc_383D0 ;~ 28F0:0EE9
cs=0x28f0;eip=0x000eeb; 	T(CMP(ax, 0x0A00));	// 90729 cmp     ax, 0A00h ;~ 28F0:0EEB
cs=0x28f0;eip=0x000eee; 	R(JNC(loc_383d5));	// 90730 jnb     short loc_383D5 ;~ 28F0:0EEE
loc_383d0:
	// 10235 
cs=0x28f0;eip=0x000ef0; 	T(SUB(dx, dx));	// 90733 sub     dx, dx ;~ 28F0:0EF0
cs=0x28f0;eip=0x000ef2; 	T(MOV(ax, 0x0A00));	// 90734 mov     ax, 0A00h ;~ 28F0:0EF2
loc_383d5:
	// 10236 
cs=0x28f0;eip=0x000ef5; 	X(MOV(*(dw*)(raddr(es,bx+8)), ax));	// 90738 mov     es:[bx+8], ax ;~ 28F0:0EF5
cs=0x28f0;eip=0x000ef9; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), dx));	// 90739 mov     es:[bx+0Ah], dx ;~ 28F0:0EF9
cs=0x28f0;eip=0x000efd; 	T(NEG(ax));	// 90740 neg     ax ;~ 28F0:0EFD
cs=0x28f0;eip=0x000eff; 	T(ADC(dx, 0));	// 90741 adc     dx, 0 ;~ 28F0:0EFF
cs=0x28f0;eip=0x000f02; 	T(NEG(dx));	// 90742 neg     dx ;~ 28F0:0F02
cs=0x28f0;eip=0x000f04; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), ax));	// 90743 mov     es:[bx+0Ch], ax ;~ 28F0:0F04
cs=0x28f0;eip=0x000f08; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), dx));	// 90744 mov     es:[bx+0Eh], dx ;~ 28F0:0F08
cs=0x28f0;eip=0x000f0c; 	R(JMP(loc_38329));	// 90745 jmp     loc_38329 ;~ 28F0:0F0C
loc_383ef:
	// 10237 
cs=0x28f0;eip=0x000f0f; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 90749 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:0F0F
cs=0x28f0;eip=0x000f15; 	R(JZ(loc_383fa));	// 90750 jz      short loc_383FA ;~ 28F0:0F15
cs=0x28f0;eip=0x000f17; 	R(JMP(loc_38329));	// 90751 jmp     loc_38329 ;~ 28F0:0F17
loc_383fa:
	// 10238 
cs=0x28f0;eip=0x000f1a; 	T(MOV(ax, 0x64));	// 90755 mov     ax, 64h ; 'd' ;~ 28F0:0F1A
cs=0x28f0;eip=0x000f1d; 	T(CWD);	// 90756 cwd ;~ 28F0:0F1D
cs=0x28f0;eip=0x000f1e; 	X(PUSH(dx));	// 90757 push    dx ;~ 28F0:0F1E
cs=0x28f0;eip=0x000f1f; 	X(PUSH(ax));	// 90758 push    ax ;~ 28F0:0F1F
cs=0x28f0;eip=0x000f20; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 90759 mov     ax, [bp+arg_6] ;~ 28F0:0F20
cs=0x28f0;eip=0x000f23; 	T(CWD);	// 90760 cwd ;~ 28F0:0F23
cs=0x28f0;eip=0x000f24; 	X(PUSH(dx));	// 90761 push    dx ;~ 28F0:0F24
cs=0x28f0;eip=0x000f25; 	X(PUSH(ax));	// 90762 push    ax ;~ 28F0:0F25
cs=0x28f0;eip=0x000f26; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E4))));	// 90763 push    word ptr es:[bx+2E4h] ;~ 28F0:0F26
cs=0x28f0;eip=0x000f2b; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E2))));	// 90764 push    word ptr es:[bx+2E2h] ;~ 28F0:0F2B
cs=0x28f0;eip=0x000f30; 	R(CALLF(sub_105c2,0));	// 90765 call    sub_105C2 ;~ 28F0:0F30
cs=0x28f0;eip=0x000f35; 	X(PUSH(dx));	// 90766 push    dx ;~ 28F0:0F35
cs=0x28f0;eip=0x000f36; 	X(PUSH(ax));	// 90767 push    ax ;~ 28F0:0F36
cs=0x28f0;eip=0x000f37; 	R(CALLF(sub_10526,0));	// 90768 call    sub_10526 ;~ 28F0:0F37
cs=0x28f0;eip=0x000f3c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90769 les     bx, [bp+arg_0] ;~ 28F0:0F3C
cs=0x28f0;eip=0x000f3f; 	X(SUB(*(dw*)(raddr(es,bx+0x2E2)), ax));	// 90770 sub     es:[bx+2E2h], ax ;~ 28F0:0F3F
cs=0x28f0;eip=0x000f44; 	X(SBB(*(dw*)(raddr(es,bx+0x2E4)), dx));	// 90771 sbb     es:[bx+2E4h], dx ;~ 28F0:0F44
cs=0x28f0;eip=0x000f49; 	R(JMP(loc_38329));	// 90772 jmp     loc_38329 ;~ 28F0:0F49
loc_3842c:
	// 10239 
cs=0x28f0;eip=0x000f4c; 	X(POP(si));	// 90777 pop     si ;~ 28F0:0F4C
cs=0x28f0;eip=0x000f4d; 	X(POP(bp));	// 90778 pop     bp ;~ 28F0:0F4D
cs=0x28f0;eip=0x000f4e; 	R(RETF(0));	// 90779 retf ;~ 28F0:0F4E
sub_3842f:
	// 90787 
#undef var_2
#define var_2 -2
	// 90790 var_2           = word ptr -2 ;~ 28F0:0F4F
#undef arg_0
#define arg_0 4
	// 90791 arg_0           = word ptr  4 ;~ 28F0:0F4F
#undef arg_2
#define arg_2 6
	// 90792 arg_2           = word ptr  6 ;~ 28F0:0F4F
#undef arg_4
#define arg_4 8
	// 90793 arg_4           = word ptr  8 ;~ 28F0:0F4F
#undef arg_6
#define arg_6 0x0A
	// 90794 arg_6           = dword ptr  0Ah ;~ 28F0:0F4F
cs=0x28f0;eip=0x000f4f; 	X(PUSH(bp));	// 90796 push    bp ;~ 28F0:0F4F
cs=0x28f0;eip=0x000f50; 	T(MOV(bp, sp));	// 90797 mov     bp, sp ;~ 28F0:0F50
cs=0x28f0;eip=0x000f52; 	T(SUB(sp, 2));	// 90798 sub     sp, 2 ;~ 28F0:0F52
cs=0x28f0;eip=0x000f55; 	X(PUSH(di));	// 90799 push    di ;~ 28F0:0F55
cs=0x28f0;eip=0x000f56; 	X(PUSH(si));	// 90800 push    si ;~ 28F0:0F56
cs=0x28f0;eip=0x000f57; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 90801 mov     [bp+var_2], 0 ;~ 28F0:0F57
cs=0x28f0;eip=0x000f5c; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_6)))));	// 90802 mov     ax, word ptr [bp+arg_6] ;~ 28F0:0F5C
cs=0x28f0;eip=0x000f5f; 	T(OR(ax, *(dw*)((dw*)(raddr(ss,bp+arg_6+2)))));	// 90803 or      ax, word ptr [bp+arg_6+2] ;~ 28F0:0F5F
cs=0x28f0;eip=0x000f62; 	R(JNZ(loc_38447));	// 90804 jnz     short loc_38447 ;~ 28F0:0F62
cs=0x28f0;eip=0x000f64; 	R(JMP(loc_3855c));	// 90805 jmp     loc_3855C ;~ 28F0:0F64
loc_38447:
	// 10240 
cs=0x28f0;eip=0x000f67; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0));	// 90809 cmp     [bp+arg_4], 0 ;~ 28F0:0F67
cs=0x28f0;eip=0x000f6b; 	R(JGE(loc_38450));	// 90810 jge     short loc_38450 ;~ 28F0:0F6B
cs=0x28f0;eip=0x000f6d; 	R(JMP(loc_3855c));	// 90811 jmp     loc_3855C ;~ 28F0:0F6D
loc_38450:
	// 10241 
cs=0x28f0;eip=0x000f70; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 7));	// 90815 cmp     [bp+arg_4], 7 ;~ 28F0:0F70
cs=0x28f0;eip=0x000f74; 	R(JLE(loc_38459));	// 90816 jle     short loc_38459 ;~ 28F0:0F74
cs=0x28f0;eip=0x000f76; 	R(JMP(loc_3855c));	// 90817 jmp     loc_3855C ;~ 28F0:0F76
loc_38459:
	// 10242 
cs=0x28f0;eip=0x000f79; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 90821 mov     ax, [bp+arg_4] ;~ 28F0:0F79
cs=0x28f0;eip=0x000f7c; 	T(CMP(ax, 1));	// 90822 cmp     ax, 1 ;~ 28F0:0F7C
cs=0x28f0;eip=0x000f7f; 	R(JZ(loc_38484));	// 90823 jz      short loc_38484 ;~ 28F0:0F7F
cs=0x28f0;eip=0x000f81; 	T(CMP(ax, 2));	// 90824 cmp     ax, 2 ;~ 28F0:0F81
cs=0x28f0;eip=0x000f84; 	R(JNZ(loc_38469));	// 90825 jnz     short loc_38469 ;~ 28F0:0F84
cs=0x28f0;eip=0x000f86; 	R(JMP(loc_38562));	// 90826 jmp     loc_38562 ;~ 28F0:0F86
loc_38469:
	// 10243 
cs=0x28f0;eip=0x000f89; 	T(CMP(ax, 5));	// 90830 cmp     ax, 5 ;~ 28F0:0F89
cs=0x28f0;eip=0x000f8c; 	R(JNZ(loc_38471));	// 90831 jnz     short loc_38471 ;~ 28F0:0F8C
cs=0x28f0;eip=0x000f8e; 	R(JMP(loc_3871a));	// 90832 jmp     loc_3871A ;~ 28F0:0F8E
loc_38471:
	// 10244 
cs=0x28f0;eip=0x000f91; 	T(CMP(ax, 6));	// 90836 cmp     ax, 6 ;~ 28F0:0F91
cs=0x28f0;eip=0x000f94; 	R(JNZ(loc_38479));	// 90837 jnz     short loc_38479 ;~ 28F0:0F94
cs=0x28f0;eip=0x000f96; 	R(JMP(loc_38749));	// 90838 jmp     loc_38749 ;~ 28F0:0F96
loc_38479:
	// 10245 
cs=0x28f0;eip=0x000f99; 	T(CMP(ax, 7));	// 90842 cmp     ax, 7 ;~ 28F0:0F99
cs=0x28f0;eip=0x000f9c; 	R(JNZ(loc_38481));	// 90843 jnz     short loc_38481 ;~ 28F0:0F9C
cs=0x28f0;eip=0x000f9e; 	R(JMP(loc_3880a));	// 90844 jmp     loc_3880A ;~ 28F0:0F9E
loc_38481:
	// 10246 
cs=0x28f0;eip=0x000fa1; 	R(JMP(loc_38557));	// 90848 jmp     loc_38557 ;~ 28F0:0FA1
loc_38484:
	// 10247 
cs=0x28f0;eip=0x000fa4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90852 les     bx, [bp+arg_6] ;~ 28F0:0FA4
cs=0x28f0;eip=0x000fa7; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 8));	// 90853 cmp     word ptr es:[bx+332h], 8 ;~ 28F0:0FA7
cs=0x28f0;eip=0x000fad; 	R(JNZ(loc_3849b));	// 90854 jnz     short loc_3849B ;~ 28F0:0FAD
cs=0x28f0;eip=0x000faf; 	T(SUB(ax, ax));	// 90855 sub     ax, ax ;~ 28F0:0FAF
cs=0x28f0;eip=0x000fb1; 	X(MOV(*(dw*)(raddr(es,bx+0x21E)), ax));	// 90856 mov     es:[bx+21Eh], ax ;~ 28F0:0FB1
cs=0x28f0;eip=0x000fb6; 	X(MOV(*(dw*)(raddr(es,bx+0x21C)), ax));	// 90857 mov     es:[bx+21Ch], ax ;~ 28F0:0FB6
loc_3849b:
	// 10248 
cs=0x28f0;eip=0x000fbb; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90860 les     bx, es:[bx+31Ch] ;~ 28F0:0FBB
cs=0x28f0;eip=0x000fc0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 90861 mov     ax, [bp+arg_0] ;~ 28F0:0FC0
cs=0x28f0;eip=0x000fc3; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 90862 mov     dx, [bp+arg_2] ;~ 28F0:0FC3
cs=0x28f0;eip=0x000fc6; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 90863 mov     es:[bx+0Ah], ax ;~ 28F0:0FC6
cs=0x28f0;eip=0x000fca; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 90864 mov     es:[bx+0Ch], dx ;~ 28F0:0FCA
cs=0x28f0;eip=0x000fce; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90865 les     bx, [bp+arg_6] ;~ 28F0:0FCE
cs=0x28f0;eip=0x000fd1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 90866 mov     ax, [bp+arg_4] ;~ 28F0:0FD1
cs=0x28f0;eip=0x000fd4; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), ax));	// 90867 mov     es:[bx+332h], ax ;~ 28F0:0FD4
cs=0x28f0;eip=0x000fd9; 	T(SUB(ax, ax));	// 90868 sub     ax, ax ;~ 28F0:0FD9
cs=0x28f0;eip=0x000fdb; 	T(CWD);	// 90869 cwd ;~ 28F0:0FDB
cs=0x28f0;eip=0x000fdc; 	X(MOV(*(dw*)(raddr(es,bx+0x160)), ax));	// 90870 mov     es:[bx+160h], ax ;~ 28F0:0FDC
cs=0x28f0;eip=0x000fe1; 	X(MOV(*(dw*)(raddr(es,bx+0x162)), dx));	// 90871 mov     es:[bx+162h], dx ;~ 28F0:0FE1
cs=0x28f0;eip=0x000fe6; 	X(MOV(*(dw*)(raddr(es,bx+0x140)), ax));	// 90872 mov     es:[bx+140h], ax ;~ 28F0:0FE6
cs=0x28f0;eip=0x000feb; 	X(MOV(*(dw*)(raddr(es,bx+0x142)), dx));	// 90873 mov     es:[bx+142h], dx ;~ 28F0:0FEB
cs=0x28f0;eip=0x000ff0; 	X(MOV(*(dw*)(raddr(es,bx+0x120)), ax));	// 90874 mov     es:[bx+120h], ax ;~ 28F0:0FF0
cs=0x28f0;eip=0x000ff5; 	X(MOV(*(dw*)(raddr(es,bx+0x122)), dx));	// 90875 mov     es:[bx+122h], dx ;~ 28F0:0FF5
cs=0x28f0;eip=0x000ffa; 	T(CWD);	// 90876 cwd ;~ 28F0:0FFA
cs=0x28f0;eip=0x000ffb; 	X(MOV(*(dw*)(raddr(es,bx+0x20)), ax));	// 90877 mov     es:[bx+20h], ax ;~ 28F0:0FFB
cs=0x28f0;eip=0x000fff; 	X(MOV(*(dw*)(raddr(es,bx+0x22)), dx));	// 90878 mov     es:[bx+22h], dx ;~ 28F0:0FFF
cs=0x28f0;eip=0x001003; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 90879 mov     es:[bx], ax ;~ 28F0:1003
cs=0x28f0;eip=0x001006; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 90880 mov     es:[bx+2], dx ;~ 28F0:1006
cs=0x28f0;eip=0x00100a; 	T(CWD);	// 90881 cwd ;~ 28F0:100A
cs=0x28f0;eip=0x00100b; 	X(MOV(*(dw*)(raddr(es,bx+0x0A0)), ax));	// 90882 mov     es:[bx+0A0h], ax ;~ 28F0:100B
cs=0x28f0;eip=0x001010; 	X(MOV(*(dw*)(raddr(es,bx+0x0A2)), dx));	// 90883 mov     es:[bx+0A2h], dx ;~ 28F0:1010
cs=0x28f0;eip=0x001015; 	X(MOV(*(dw*)(raddr(es,bx+0x40)), ax));	// 90884 mov     es:[bx+40h], ax ;~ 28F0:1015
cs=0x28f0;eip=0x001019; 	X(MOV(*(dw*)(raddr(es,bx+0x42)), dx));	// 90885 mov     es:[bx+42h], dx ;~ 28F0:1019
cs=0x28f0;eip=0x00101d; 	X(MOV(*(dw*)(raddr(es,bx+0x1C6)), ax));	// 90886 mov     es:[bx+1C6h], ax ;~ 28F0:101D
cs=0x28f0;eip=0x001022; 	X(MOV(*(dw*)(raddr(es,bx+0x1C4)), ax));	// 90887 mov     es:[bx+1C4h], ax ;~ 28F0:1022
cs=0x28f0;eip=0x001027; 	T(CWD);	// 90888 cwd ;~ 28F0:1027
cs=0x28f0;eip=0x001028; 	X(MOV(*(dw*)(raddr(es,bx+0x0E0)), ax));	// 90889 mov     es:[bx+0E0h], ax ;~ 28F0:1028
cs=0x28f0;eip=0x00102d; 	X(MOV(*(dw*)(raddr(es,bx+0x0E2)), dx));	// 90890 mov     es:[bx+0E2h], dx ;~ 28F0:102D
cs=0x28f0;eip=0x001032; 	X(MOV(*(dw*)(raddr(es,bx+0x0C0)), ax));	// 90891 mov     es:[bx+0C0h], ax ;~ 28F0:1032
cs=0x28f0;eip=0x001037; 	X(MOV(*(dw*)(raddr(es,bx+0x0C2)), dx));	// 90892 mov     es:[bx+0C2h], dx ;~ 28F0:1037
cs=0x28f0;eip=0x00103c; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90893 les     bx, es:[bx+31Ch] ;~ 28F0:103C
cs=0x28f0;eip=0x001041; 	X(MOV(*(dw*)(raddr(es,bx+0x14)), ax));	// 90894 mov     es:[bx+14h], ax ;~ 28F0:1041
cs=0x28f0;eip=0x001045; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90895 les     bx, [bp+arg_6] ;~ 28F0:1045
cs=0x28f0;eip=0x001048; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90896 les     bx, es:[bx+31Ch] ;~ 28F0:1048
cs=0x28f0;eip=0x00104d; 	X(MOV(*(dw*)(raddr(es,bx+0x16)), ax));	// 90897 mov     es:[bx+16h], ax ;~ 28F0:104D
cs=0x28f0;eip=0x001051; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90898 les     bx, [bp+arg_6] ;~ 28F0:1051
cs=0x28f0;eip=0x001054; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x326))));	// 90899 mov     ax, es:[bx+326h] ;~ 28F0:1054
cs=0x28f0;eip=0x001059; 	T(OR(ax, *(dw*)(raddr(es,bx+0x328))));	// 90900 or      ax, es:[bx+328h] ;~ 28F0:1059
cs=0x28f0;eip=0x00105e; 	R(JZ(loc_38557));	// 90901 jz      short loc_38557 ;~ 28F0:105E
cs=0x28f0;eip=0x001060; 	X(PUSH(*(dw*)(raddr(es,bx+0x328))));	// 90902 push    word ptr es:[bx+328h] ;~ 28F0:1060
cs=0x28f0;eip=0x001065; 	X(PUSH(*(dw*)(raddr(es,bx+0x326))));	// 90903 push    word ptr es:[bx+326h] ;~ 28F0:1065
cs=0x28f0;eip=0x00106a; 	T(MOV(ax, 1));	// 90904 mov     ax, 1 ;~ 28F0:106A
cs=0x28f0;eip=0x00106d; 	X(PUSH(ax));	// 90905 push    ax ;~ 28F0:106D
cs=0x28f0;eip=0x00106e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 90906 push    [bp+arg_2] ;~ 28F0:106E
cs=0x28f0;eip=0x001071; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 90907 push    [bp+arg_0] ;~ 28F0:1071
cs=0x28f0;eip=0x001074; 	R(CALL(sub_3842f,0));	// 90908 call    sub_3842F ;~ 28F0:1074
loc_38557:
	// 10249 
cs=0x28f0;eip=0x001077; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 1));	// 90912 mov     [bp+var_2], 1 ;~ 28F0:1077
loc_3855c:
	// 10250 
cs=0x28f0;eip=0x00107c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 90916 mov     ax, [bp+var_2] ;~ 28F0:107C
cs=0x28f0;eip=0x00107f; 	R(JMP(loc_38845));	// 90917 jmp     loc_38845 ;~ 28F0:107F
loc_38562:
	// 10251 
cs=0x28f0;eip=0x001082; 	R(CALLF(nullsub_13,0));	// 90921 call    nullsub_13 ;~ 28F0:1082
cs=0x28f0;eip=0x001087; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90922 les     bx, [bp+arg_6] ;~ 28F0:1087
cs=0x28f0;eip=0x00108a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 90923 mov     ax, [bp+arg_4] ;~ 28F0:108A
cs=0x28f0;eip=0x00108d; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), ax));	// 90924 mov     es:[bx+332h], ax ;~ 28F0:108D
cs=0x28f0;eip=0x001092; 	T(SUB(ax, ax));	// 90925 sub     ax, ax ;~ 28F0:1092
cs=0x28f0;eip=0x001094; 	X(MOV(*(dw*)(raddr(es,bx+0x21E)), ax));	// 90926 mov     es:[bx+21Eh], ax ;~ 28F0:1094
cs=0x28f0;eip=0x001099; 	X(MOV(*(dw*)(raddr(es,bx+0x21C)), ax));	// 90927 mov     es:[bx+21Ch], ax ;~ 28F0:1099
cs=0x28f0;eip=0x00109e; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 90928 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:109E
cs=0x28f0;eip=0x0010a4; 	R(JNZ(loc_38590));	// 90929 jnz     short loc_38590 ;~ 28F0:10A4
cs=0x28f0;eip=0x0010a6; 	X(MOV(*(dw*)(raddr(es,bx+0x222)), ax));	// 90930 mov     es:[bx+222h], ax ;~ 28F0:10A6
cs=0x28f0;eip=0x0010ab; 	X(MOV(*(dw*)(raddr(es,bx+0x220)), ax));	// 90931 mov     es:[bx+220h], ax ;~ 28F0:10AB
loc_38590:
	// 10252 
cs=0x28f0;eip=0x0010b0; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 90934 mov     ax, es:[bx+2FAh] ;~ 28F0:10B0
cs=0x28f0;eip=0x0010b5; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 90935 mov     dx, es:[bx+2FCh] ;~ 28F0:10B5
cs=0x28f0;eip=0x0010ba; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 90936 add     ax, es:[bx+302h] ;~ 28F0:10BA
cs=0x28f0;eip=0x0010bf; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 90937 adc     dx, es:[bx+304h] ;~ 28F0:10BF
cs=0x28f0;eip=0x0010c4; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 90938 add     ax, es:[bx+20Eh] ;~ 28F0:10C4
cs=0x28f0;eip=0x0010c9; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 90939 adc     dx, es:[bx+210h] ;~ 28F0:10C9
cs=0x28f0;eip=0x0010ce; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90940 les     bx, es:[bx+31Ch] ;~ 28F0:10CE
cs=0x28f0;eip=0x0010d3; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 90941 cmp     dx, es:[bx+0Ch] ;~ 28F0:10D3
cs=0x28f0;eip=0x0010d7; 	R(JGE(loc_385bc));	// 90942 jge     short loc_385BC ;~ 28F0:10D7
cs=0x28f0;eip=0x0010d9; 	R(JMP(loc_386fb));	// 90943 jmp     loc_386FB ;~ 28F0:10D9
loc_385bc:
	// 10253 
cs=0x28f0;eip=0x0010dc; 	R(JG(loc_385c7));	// 90947 jg      short loc_385C7 ;~ 28F0:10DC
cs=0x28f0;eip=0x0010de; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 90948 cmp     ax, es:[bx+0Ah] ;~ 28F0:10DE
cs=0x28f0;eip=0x0010e2; 	R(JNC(loc_385c7));	// 90949 jnb     short loc_385C7 ;~ 28F0:10E2
cs=0x28f0;eip=0x0010e4; 	R(JMP(loc_386fb));	// 90950 jmp     loc_386FB ;~ 28F0:10E4
loc_385c7:
	// 10254 
cs=0x28f0;eip=0x0010e7; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90955 les     bx, [bp+arg_6] ;~ 28F0:10E7
cs=0x28f0;eip=0x0010ea; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 90956 mov     ax, es:[bx+2FAh] ;~ 28F0:10EA
cs=0x28f0;eip=0x0010ef; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 90957 mov     dx, es:[bx+2FCh] ;~ 28F0:10EF
cs=0x28f0;eip=0x0010f4; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 90958 add     ax, es:[bx+302h] ;~ 28F0:10F4
cs=0x28f0;eip=0x0010f9; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 90959 adc     dx, es:[bx+304h] ;~ 28F0:10F9
cs=0x28f0;eip=0x0010fe; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90960 les     bx, es:[bx+31Ch] ;~ 28F0:10FE
cs=0x28f0;eip=0x001103; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 90961 cmp     dx, es:[bx+0Ch] ;~ 28F0:1103
cs=0x28f0;eip=0x001107; 	R(JL(loc_38615));	// 90962 jl      short loc_38615 ;~ 28F0:1107
cs=0x28f0;eip=0x001109; 	R(JG(loc_385f1));	// 90963 jg      short loc_385F1 ;~ 28F0:1109
cs=0x28f0;eip=0x00110b; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 90964 cmp     ax, es:[bx+0Ah] ;~ 28F0:110B
cs=0x28f0;eip=0x00110f; 	R(JBE(loc_38615));	// 90965 jbe     short loc_38615 ;~ 28F0:110F
loc_385f1:
	// 10255 
cs=0x28f0;eip=0x001111; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90968 les     bx, [bp+arg_6] ;~ 28F0:1111
cs=0x28f0;eip=0x001114; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 90969 mov     ax, es:[bx+2FAh] ;~ 28F0:1114
cs=0x28f0;eip=0x001119; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 90970 mov     dx, es:[bx+2FCh] ;~ 28F0:1119
cs=0x28f0;eip=0x00111e; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 90971 add     ax, es:[bx+302h] ;~ 28F0:111E
cs=0x28f0;eip=0x001123; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 90972 adc     dx, es:[bx+304h] ;~ 28F0:1123
cs=0x28f0;eip=0x001128; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90973 les     bx, es:[bx+31Ch] ;~ 28F0:1128
cs=0x28f0;eip=0x00112d; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 90974 mov     es:[bx+0Ah], ax ;~ 28F0:112D
cs=0x28f0;eip=0x001131; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 90975 mov     es:[bx+0Ch], dx ;~ 28F0:1131
loc_38615:
	// 10256 
cs=0x28f0;eip=0x001135; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90979 les     bx, [bp+arg_6] ;~ 28F0:1135
cs=0x28f0;eip=0x001138; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 90980 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:1138
cs=0x28f0;eip=0x00113e; 	R(JNZ(loc_38657));	// 90981 jnz     short loc_38657 ;~ 28F0:113E
cs=0x28f0;eip=0x001140; 	T(SUB(ax, ax));	// 90982 sub     ax, ax ;~ 28F0:1140
cs=0x28f0;eip=0x001142; 	T(CWD);	// 90983 cwd ;~ 28F0:1142
cs=0x28f0;eip=0x001143; 	X(MOV(*(dw*)(raddr(es,bx+0x160)), ax));	// 90984 mov     es:[bx+160h], ax ;~ 28F0:1143
cs=0x28f0;eip=0x001148; 	X(MOV(*(dw*)(raddr(es,bx+0x162)), dx));	// 90985 mov     es:[bx+162h], dx ;~ 28F0:1148
cs=0x28f0;eip=0x00114d; 	X(MOV(*(dw*)(raddr(es,bx+0x140)), ax));	// 90986 mov     es:[bx+140h], ax ;~ 28F0:114D
cs=0x28f0;eip=0x001152; 	X(MOV(*(dw*)(raddr(es,bx+0x142)), dx));	// 90987 mov     es:[bx+142h], dx ;~ 28F0:1152
cs=0x28f0;eip=0x001157; 	X(MOV(*(dw*)(raddr(es,bx+0x120)), ax));	// 90988 mov     es:[bx+120h], ax ;~ 28F0:1157
cs=0x28f0;eip=0x00115c; 	X(MOV(*(dw*)(raddr(es,bx+0x122)), dx));	// 90989 mov     es:[bx+122h], dx ;~ 28F0:115C
cs=0x28f0;eip=0x001161; 	T(CWD);	// 90990 cwd ;~ 28F0:1161
cs=0x28f0;eip=0x001162; 	X(MOV(*(dw*)(raddr(es,bx+0x0A0)), ax));	// 90991 mov     es:[bx+0A0h], ax ;~ 28F0:1162
cs=0x28f0;eip=0x001167; 	X(MOV(*(dw*)(raddr(es,bx+0x0A2)), dx));	// 90992 mov     es:[bx+0A2h], dx ;~ 28F0:1167
cs=0x28f0;eip=0x00116c; 	X(MOV(*(dw*)(raddr(es,bx+0x40)), ax));	// 90993 mov     es:[bx+40h], ax ;~ 28F0:116C
cs=0x28f0;eip=0x001170; 	X(MOV(*(dw*)(raddr(es,bx+0x42)), dx));	// 90994 mov     es:[bx+42h], dx ;~ 28F0:1170
cs=0x28f0;eip=0x001174; 	R(JMP(loc_38557));	// 90995 jmp     loc_38557 ;~ 28F0:1174
loc_38657:
	// 10257 
cs=0x28f0;eip=0x001177; 	T(CMP(*(dw*)(raddr(es,bx+0x0C2)), 0));	// 90999 cmp     word ptr es:[bx+0C2h], 0 ;~ 28F0:1177
cs=0x28f0;eip=0x00117d; 	R(JL(loc_3867a));	// 91000 jl      short loc_3867A ;~ 28F0:117D
cs=0x28f0;eip=0x00117f; 	R(JG(loc_3866a));	// 91001 jg      short loc_3866A ;~ 28F0:117F
cs=0x28f0;eip=0x001181; 	T(CMP(*(dw*)(raddr(es,bx+0x0C0)), 0x5A00));	// 91002 cmp     word ptr es:[bx+0C0h], 5A00h ;~ 28F0:1181
cs=0x28f0;eip=0x001188; 	R(JBE(loc_3867a));	// 91003 jbe     short loc_3867A ;~ 28F0:1188
loc_3866a:
	// 10258 
cs=0x28f0;eip=0x00118a; 	X(MOV(*(dw*)(raddr(es,bx+0x0C4)), 0x0B400));	// 91006 mov     word ptr es:[bx+0C4h], 0B400h ;~ 28F0:118A
cs=0x28f0;eip=0x001191; 	X(MOV(*(dw*)(raddr(es,bx+0x0C6)), 0));	// 91007 mov     word ptr es:[bx+0C6h], 0 ;~ 28F0:1191
cs=0x28f0;eip=0x001198; 	R(JMP(loc_386a9));	// 91008 jmp     short loc_386A9 ;~ 28F0:1198
loc_3867a:
	// 10259 
cs=0x28f0;eip=0x00119a; 	T(CMP(*(dw*)(raddr(es,bx+0x0C2)), 0x0FFFF));	// 91013 cmp     word ptr es:[bx+0C2h], 0FFFFh ;~ 28F0:119A
cs=0x28f0;eip=0x0011a0; 	R(JG(loc_3869d));	// 91014 jg      short loc_3869D ;~ 28F0:11A0
cs=0x28f0;eip=0x0011a2; 	R(JL(loc_3868d));	// 91015 jl      short loc_3868D ;~ 28F0:11A2
cs=0x28f0;eip=0x0011a4; 	T(CMP(*(dw*)(raddr(es,bx+0x0C0)), 0x0A600));	// 91016 cmp     word ptr es:[bx+0C0h], 0A600h ;~ 28F0:11A4
cs=0x28f0;eip=0x0011ab; 	R(JNC(loc_3869d));	// 91017 jnb     short loc_3869D ;~ 28F0:11AB
loc_3868d:
	// 10260 
cs=0x28f0;eip=0x0011ad; 	X(MOV(*(dw*)(raddr(es,bx+0x0C4)), 0x4C00));	// 91020 mov     word ptr es:[bx+0C4h], 4C00h ;~ 28F0:11AD
cs=0x28f0;eip=0x0011b4; 	X(MOV(*(dw*)(raddr(es,bx+0x0C6)), 0x0FFFF));	// 91021 mov     word ptr es:[bx+0C6h], 0FFFFh ;~ 28F0:11B4
cs=0x28f0;eip=0x0011bb; 	R(JMP(loc_386a9));	// 91022 jmp     short loc_386A9 ;~ 28F0:11BB
loc_3869d:
	// 10261 
cs=0x28f0;eip=0x0011bd; 	T(SUB(ax, ax));	// 91027 sub     ax, ax ;~ 28F0:11BD
cs=0x28f0;eip=0x0011bf; 	X(MOV(*(dw*)(raddr(es,bx+0x0C6)), ax));	// 91028 mov     es:[bx+0C6h], ax ;~ 28F0:11BF
cs=0x28f0;eip=0x0011c4; 	X(MOV(*(dw*)(raddr(es,bx+0x0C4)), ax));	// 91029 mov     es:[bx+0C4h], ax ;~ 28F0:11C4
loc_386a9:
	// 10262 
cs=0x28f0;eip=0x0011c9; 	T(SUB(ax, ax));	// 91033 sub     ax, ax ;~ 28F0:11C9
cs=0x28f0;eip=0x0011cb; 	X(MOV(*(dw*)(raddr(es,bx+0x0E6)), ax));	// 91034 mov     es:[bx+0E6h], ax ;~ 28F0:11CB
cs=0x28f0;eip=0x0011d0; 	X(MOV(*(dw*)(raddr(es,bx+0x0E4)), ax));	// 91035 mov     es:[bx+0E4h], ax ;~ 28F0:11D0
cs=0x28f0;eip=0x0011d5; 	T(CWD);	// 91036 cwd ;~ 28F0:11D5
cs=0x28f0;eip=0x0011d6; 	X(MOV(*(dw*)(raddr(es,bx+0x144)), ax));	// 91037 mov     es:[bx+144h], ax ;~ 28F0:11D6
cs=0x28f0;eip=0x0011db; 	X(MOV(*(dw*)(raddr(es,bx+0x146)), dx));	// 91038 mov     es:[bx+146h], dx ;~ 28F0:11DB
cs=0x28f0;eip=0x0011e0; 	X(MOV(*(dw*)(raddr(es,bx+0x124)), ax));	// 91039 mov     es:[bx+124h], ax ;~ 28F0:11E0
cs=0x28f0;eip=0x0011e5; 	X(MOV(*(dw*)(raddr(es,bx+0x126)), dx));	// 91040 mov     es:[bx+126h], dx ;~ 28F0:11E5
cs=0x28f0;eip=0x0011ea; 	X(MOV(*(dw*)(raddr(es,bx+0x164)), 0x1400));	// 91041 mov     word ptr es:[bx+164h], 1400h ;~ 28F0:11EA
cs=0x28f0;eip=0x0011f1; 	X(MOV(*(dw*)(raddr(es,bx+0x166)), ax));	// 91042 mov     es:[bx+166h], ax ;~ 28F0:11F1
cs=0x28f0;eip=0x0011f6; 	T(CWD);	// 91043 cwd ;~ 28F0:11F6
cs=0x28f0;eip=0x0011f7; 	X(MOV(*(dw*)(raddr(es,bx+0x40)), ax));	// 91044 mov     es:[bx+40h], ax ;~ 28F0:11F7
cs=0x28f0;eip=0x0011fb; 	X(MOV(*(dw*)(raddr(es,bx+0x42)), dx));	// 91045 mov     es:[bx+42h], dx ;~ 28F0:11FB
cs=0x28f0;eip=0x0011ff; 	X(MOV(*(dw*)(raddr(es,bx+0x20)), ax));	// 91046 mov     es:[bx+20h], ax ;~ 28F0:11FF
cs=0x28f0;eip=0x001203; 	X(MOV(*(dw*)(raddr(es,bx+0x22)), dx));	// 91047 mov     es:[bx+22h], dx ;~ 28F0:1203
cs=0x28f0;eip=0x001207; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 91048 mov     es:[bx], ax ;~ 28F0:1207
cs=0x28f0;eip=0x00120a; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 91049 mov     es:[bx+2], dx ;~ 28F0:120A
cs=0x28f0;eip=0x00120e; 	X(MOV(*(dw*)(raddr(es,bx+0x0A2)), ax));	// 91050 mov     es:[bx+0A2h], ax ;~ 28F0:120E
cs=0x28f0;eip=0x001213; 	X(MOV(*(dw*)(raddr(es,bx+0x0A0)), ax));	// 91051 mov     es:[bx+0A0h], ax ;~ 28F0:1213
cs=0x28f0;eip=0x001218; 	R(JMP(loc_38557));	// 91052 jmp     loc_38557 ;~ 28F0:1218
loc_386fb:
	// 10263 
cs=0x28f0;eip=0x00121b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 91057 les     bx, [bp+arg_6] ;~ 28F0:121B
cs=0x28f0;eip=0x00121e; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 91058 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:121E
cs=0x28f0;eip=0x001224; 	R(JNZ(loc_38709));	// 91059 jnz     short loc_38709 ;~ 28F0:1224
cs=0x28f0;eip=0x001226; 	R(JMP(loc_38557));	// 91060 jmp     loc_38557 ;~ 28F0:1226
loc_38709:
	// 10264 
cs=0x28f0;eip=0x001229; 	X(MOV(*(dw*)(raddr(es,bx+0x0E4)), 0x0C400));	// 91064 mov     word ptr es:[bx+0E4h], 0C400h ;~ 28F0:1229
cs=0x28f0;eip=0x001230; 	X(MOV(*(dw*)(raddr(es,bx+0x0E6)), 0x0FFFF));	// 91065 mov     word ptr es:[bx+0E6h], 0FFFFh ;~ 28F0:1230
cs=0x28f0;eip=0x001237; 	R(JMP(loc_38557));	// 91066 jmp     loc_38557 ;~ 28F0:1237
loc_3871a:
	// 10265 
cs=0x28f0;eip=0x00123a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 91070 les     bx, [bp+arg_6] ;~ 28F0:123A
cs=0x28f0;eip=0x00123d; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 91071 les     bx, es:[bx+31Ch] ;~ 28F0:123D
cs=0x28f0;eip=0x001242; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 91072 mov     ax, [bp+arg_0] ;~ 28F0:1242
cs=0x28f0;eip=0x001245; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 91073 mov     dx, [bp+arg_2] ;~ 28F0:1245
cs=0x28f0;eip=0x001248; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 91074 mov     es:[bx+0Ah], ax ;~ 28F0:1248
cs=0x28f0;eip=0x00124c; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 91075 mov     es:[bx+0Ch], dx ;~ 28F0:124C
cs=0x28f0;eip=0x001250; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 91076 les     bx, [bp+arg_6] ;~ 28F0:1250
cs=0x28f0;eip=0x001253; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 91077 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:1253
cs=0x28f0;eip=0x001259; 	R(JZ(loc_3873e));	// 91078 jz      short loc_3873E ;~ 28F0:1259
cs=0x28f0;eip=0x00125b; 	R(JMP(loc_38557));	// 91079 jmp     loc_38557 ;~ 28F0:125B
loc_3873e:
	// 10266 
cs=0x28f0;eip=0x00125e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 91083 mov     ax, [bp+arg_4] ;~ 28F0:125E
cs=0x28f0;eip=0x001261; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), ax));	// 91084 mov     es:[bx+332h], ax ;~ 28F0:1261
cs=0x28f0;eip=0x001266; 	R(JMP(loc_38557));	// 91085 jmp     loc_38557 ;~ 28F0:1266
loc_38749:
	// 10267 
cs=0x28f0;eip=0x001269; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 91089 les     bx, [bp+arg_6] ;~ 28F0:1269
cs=0x28f0;eip=0x00126c; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 91090 les     bx, es:[bx+31Ch] ;~ 28F0:126C
cs=0x28f0;eip=0x001271; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 91091 mov     ax, [bp+arg_0] ;~ 28F0:1271
cs=0x28f0;eip=0x001274; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 91092 mov     dx, [bp+arg_2] ;~ 28F0:1274
cs=0x28f0;eip=0x001277; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 91093 mov     es:[bx+0Ah], ax ;~ 28F0:1277
cs=0x28f0;eip=0x00127b; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 91094 mov     es:[bx+0Ch], dx ;~ 28F0:127B
cs=0x28f0;eip=0x00127f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 91095 les     bx, [bp+arg_6] ;~ 28F0:127F
cs=0x28f0;eip=0x001282; 	T(SUB(ax, ax));	// 91096 sub     ax, ax ;~ 28F0:1282
cs=0x28f0;eip=0x001284; 	X(MOV(*(dw*)(raddr(es,bx+0x0E6)), ax));	// 91097 mov     es:[bx+0E6h], ax ;~ 28F0:1284
cs=0x28f0;eip=0x001289; 	X(MOV(*(dw*)(raddr(es,bx+0x0E4)), ax));	// 91098 mov     es:[bx+0E4h], ax ;~ 28F0:1289
cs=0x28f0;eip=0x00128e; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 91099 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:128E
cs=0x28f0;eip=0x001294; 	R(JZ(loc_38779));	// 91100 jz      short loc_38779 ;~ 28F0:1294
cs=0x28f0;eip=0x001296; 	R(JMP(loc_38557));	// 91101 jmp     loc_38557 ;~ 28F0:1296
loc_38779:
	// 10268 
cs=0x28f0;eip=0x001299; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 91105 mov     ax, [bp+arg_4] ;~ 28F0:1299
cs=0x28f0;eip=0x00129c; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), ax));	// 91106 mov     es:[bx+332h], ax ;~ 28F0:129C
cs=0x28f0;eip=0x0012a1; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x21C))));	// 91107 mov     ax, es:[bx+21Ch] ;~ 28F0:12A1
cs=0x28f0;eip=0x0012a6; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21E))));	// 91108 mov     dx, es:[bx+21Eh] ;~ 28F0:12A6
cs=0x28f0;eip=0x0012ab; 	T(OR(dx, dx));	// 91109 or      dx, dx ;~ 28F0:12AB
cs=0x28f0;eip=0x0012ad; 	R(JG(loc_3879b));	// 91110 jg      short loc_3879B ;~ 28F0:12AD
cs=0x28f0;eip=0x0012af; 	R(JL(loc_38796));	// 91111 jl      short loc_38796 ;~ 28F0:12AF
cs=0x28f0;eip=0x0012b1; 	T(CMP(ax, 0x3200));	// 91112 cmp     ax, 3200h ;~ 28F0:12B1
cs=0x28f0;eip=0x0012b4; 	R(JNC(loc_3879b));	// 91113 jnb     short loc_3879B ;~ 28F0:12B4
loc_38796:
	// 10269 
cs=0x28f0;eip=0x0012b6; 	T(SUB(dx, dx));	// 91116 sub     dx, dx ;~ 28F0:12B6
cs=0x28f0;eip=0x0012b8; 	T(MOV(ax, 0x3200));	// 91117 mov     ax, 3200h ;~ 28F0:12B8
loc_3879b:
	// 10270 
cs=0x28f0;eip=0x0012bb; 	X(MOV(*(dw*)(raddr(es,bx+0x21C)), ax));	// 91121 mov     es:[bx+21Ch], ax ;~ 28F0:12BB
cs=0x28f0;eip=0x0012c0; 	X(MOV(*(dw*)(raddr(es,bx+0x21E)), dx));	// 91122 mov     es:[bx+21Eh], dx ;~ 28F0:12C0
cs=0x28f0;eip=0x0012c5; 	X(MOV(*(dw*)(raddr(es,bx+0x218)), ax));	// 91123 mov     es:[bx+218h], ax ;~ 28F0:12C5
cs=0x28f0;eip=0x0012ca; 	X(MOV(*(dw*)(raddr(es,bx+0x21A)), dx));	// 91124 mov     es:[bx+21Ah], dx ;~ 28F0:12CA
cs=0x28f0;eip=0x0012cf; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x128))));	// 91125 mov     ax, es:[bx+128h] ;~ 28F0:12CF
cs=0x28f0;eip=0x0012d4; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12A))));	// 91126 mov     dx, es:[bx+12Ah] ;~ 28F0:12D4
cs=0x28f0;eip=0x0012d9; 	T(MOV(cl, 3));	// 91127 mov     cl, 3 ;~ 28F0:12D9
cs=0x28f0;eip=0x0012db; 	R(CALLF(sub_10240,0));	// 91128 call    sub_10240 ;~ 28F0:12DB
cs=0x28f0;eip=0x0012e0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 91129 les     bx, [bp+arg_6] ;~ 28F0:12E0
cs=0x28f0;eip=0x0012e3; 	T(MOV(cx, ax));	// 91130 mov     cx, ax ;~ 28F0:12E3
cs=0x28f0;eip=0x0012e5; 	T(MOV(si, dx));	// 91131 mov     si, dx ;~ 28F0:12E5
cs=0x28f0;eip=0x0012e7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x128))));	// 91132 mov     ax, es:[bx+128h] ;~ 28F0:12E7
cs=0x28f0;eip=0x0012ec; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12A))));	// 91133 mov     dx, es:[bx+12Ah] ;~ 28F0:12EC
cs=0x28f0;eip=0x0012f1; 	T(MOV(bx, cx));	// 91134 mov     bx, cx ;~ 28F0:12F1
cs=0x28f0;eip=0x0012f3; 	T(MOV(cl, 2));	// 91135 mov     cl, 2 ;~ 28F0:12F3
cs=0x28f0;eip=0x0012f5; 	T(MOV(di, bx));	// 91136 mov     di, bx ;~ 28F0:12F5
cs=0x28f0;eip=0x0012f7; 	R(CALLF(sub_10240,0));	// 91137 call    sub_10240 ;~ 28F0:12F7
cs=0x28f0;eip=0x0012fc; 	T(ADD(ax, di));	// 91138 add     ax, di ;~ 28F0:12FC
cs=0x28f0;eip=0x0012fe; 	T(ADC(dx, si));	// 91139 adc     dx, si ;~ 28F0:12FE
cs=0x28f0;eip=0x001300; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 91140 les     bx, [bp+arg_6] ;~ 28F0:1300
cs=0x28f0;eip=0x001303; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x122))));	// 91141 cmp     dx, es:[bx+122h] ;~ 28F0:1303
cs=0x28f0;eip=0x001308; 	R(JG(loc_387fd));	// 91142 jg      short loc_387FD ;~ 28F0:1308
cs=0x28f0;eip=0x00130a; 	R(JL(loc_387f3));	// 91143 jl      short loc_387F3 ;~ 28F0:130A
cs=0x28f0;eip=0x00130c; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x120))));	// 91144 cmp     ax, es:[bx+120h] ;~ 28F0:130C
cs=0x28f0;eip=0x001311; 	R(JNC(loc_387fd));	// 91145 jnb     short loc_387FD ;~ 28F0:1311
loc_387f3:
	// 10271 
cs=0x28f0;eip=0x001313; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 91148 mov     dx, es:[bx+122h] ;~ 28F0:1313
cs=0x28f0;eip=0x001318; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 91149 mov     ax, es:[bx+120h] ;~ 28F0:1318
loc_387fd:
	// 10272 
cs=0x28f0;eip=0x00131d; 	X(MOV(*(dw*)(raddr(es,bx+0x120)), ax));	// 91153 mov     es:[bx+120h], ax ;~ 28F0:131D
cs=0x28f0;eip=0x001322; 	X(MOV(*(dw*)(raddr(es,bx+0x122)), dx));	// 91154 mov     es:[bx+122h], dx ;~ 28F0:1322
cs=0x28f0;eip=0x001327; 	R(JMP(loc_38557));	// 91155 jmp     loc_38557 ;~ 28F0:1327
loc_3880a:
	// 10273 
cs=0x28f0;eip=0x00132a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 91159 les     bx, [bp+arg_6] ;~ 28F0:132A
cs=0x28f0;eip=0x00132d; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 91160 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:132D
cs=0x28f0;eip=0x001333; 	R(JZ(loc_38818));	// 91161 jz      short loc_38818 ;~ 28F0:1333
cs=0x28f0;eip=0x001335; 	R(JMP(loc_38557));	// 91162 jmp     loc_38557 ;~ 28F0:1335
loc_38818:
	// 10274 
cs=0x28f0;eip=0x001338; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 91166 mov     ax, [bp+arg_4] ;~ 28F0:1338
cs=0x28f0;eip=0x00133b; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), ax));	// 91167 mov     es:[bx+332h], ax ;~ 28F0:133B
cs=0x28f0;eip=0x001340; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2F2))));	// 91168 mov     ax, es:[bx+2F2h] ;~ 28F0:1340
cs=0x28f0;eip=0x001345; 	T(CWD);	// 91169 cwd ;~ 28F0:1345
cs=0x28f0;eip=0x001346; 	T(MOV(dh, dl));	// 91170 mov     dh, dl ;~ 28F0:1346
cs=0x28f0;eip=0x001348; 	T(MOV(dl, ah));	// 91171 mov     dl, ah ;~ 28F0:1348
cs=0x28f0;eip=0x00134a; 	T(MOV(ah, al));	// 91172 mov     ah, al ;~ 28F0:134A
cs=0x28f0;eip=0x00134c; 	T(SUB(al, al));	// 91173 sub     al, al ;~ 28F0:134C
cs=0x28f0;eip=0x00134e; 	X(MOV(*(dw*)(raddr(es,bx+0x0E4)), ax));	// 91174 mov     es:[bx+0E4h], ax ;~ 28F0:134E
cs=0x28f0;eip=0x001353; 	X(MOV(*(dw*)(raddr(es,bx+0x0E6)), dx));	// 91175 mov     es:[bx+0E6h], dx ;~ 28F0:1353
cs=0x28f0;eip=0x001358; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2F6))));	// 91176 mov     ax, es:[bx+2F6h] ;~ 28F0:1358
cs=0x28f0;eip=0x00135d; 	X(MOV(*(dw*)(raddr(es,bx+0x2F8)), ax));	// 91177 mov     es:[bx+2F8h], ax ;~ 28F0:135D
cs=0x28f0;eip=0x001362; 	R(JMP(loc_38557));	// 91178 jmp     loc_38557 ;~ 28F0:1362
loc_38845:
	// 10275 
cs=0x28f0;eip=0x001365; 	X(POP(si));	// 91182 pop     si ;~ 28F0:1365
cs=0x28f0;eip=0x001366; 	X(POP(di));	// 91183 pop     di ;~ 28F0:1366
cs=0x28f0;eip=0x001367; 	T(MOV(sp, bp));	// 91184 mov     sp, bp ;~ 28F0:1367
cs=0x28f0;eip=0x001369; 	X(POP(bp));	// 91185 pop     bp ;~ 28F0:1369
cs=0x28f0;eip=0x00136a; 	R(RETN(0x0A));	// 91186 retn    0Ah ;~ 28F0:136A
sub_3884d:
	// 91194 
#undef arg_0
#define arg_0 4
	// 91196 arg_0           = dword ptr  4 ;~ 28F0:136D
cs=0x28f0;eip=0x00136d; 	X(PUSH(bp));	// 91198 push    bp ;~ 28F0:136D
cs=0x28f0;eip=0x00136e; 	T(MOV(bp, sp));	// 91199 mov     bp, sp ;~ 28F0:136E
cs=0x28f0;eip=0x001370; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91200 push    word ptr [bp+arg_0+2] ;~ 28F0:1370
cs=0x28f0;eip=0x001373; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91201 push    word ptr [bp+arg_0] ;~ 28F0:1373
cs=0x28f0;eip=0x001376; 	R(CALL(sub_38229,0));	// 91202 call    sub_38229 ;~ 28F0:1376
cs=0x28f0;eip=0x001379; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91203 les     bx, [bp+arg_0] ;~ 28F0:1379
cs=0x28f0;eip=0x00137c; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 91204 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:137C
cs=0x28f0;eip=0x001382; 	R(JNZ(loc_3886b));	// 91205 jnz     short loc_3886B ;~ 28F0:1382
cs=0x28f0;eip=0x001384; 	X(PUSH(es));	// 91206 push    es ;~ 28F0:1384
cs=0x28f0;eip=0x001385; 	X(PUSH(bx));	// 91207 push    bx ;~ 28F0:1385
cs=0x28f0;eip=0x001386; 	R(CALL(sub_3b44e,0));	// 91208 call    sub_3B44E ;~ 28F0:1386
cs=0x28f0;eip=0x001389; 	R(JMP(loc_3887b));	// 91209 jmp     short loc_3887B ;~ 28F0:1389
loc_3886b:
	// 10276 
cs=0x28f0;eip=0x00138b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91213 les     bx, [bp+arg_0] ;~ 28F0:138B
cs=0x28f0;eip=0x00138e; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 91214 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:138E
cs=0x28f0;eip=0x001394; 	R(JNZ(loc_3887b));	// 91215 jnz     short loc_3887B ;~ 28F0:1394
cs=0x28f0;eip=0x001396; 	X(PUSH(es));	// 91216 push    es ;~ 28F0:1396
cs=0x28f0;eip=0x001397; 	X(PUSH(bx));	// 91217 push    bx ;~ 28F0:1397
cs=0x28f0;eip=0x001398; 	R(CALL(sub_39c0c,0));	// 91218 call    sub_39C0C ;~ 28F0:1398
loc_3887b:
	// 10277 
cs=0x28f0;eip=0x00139b; 	X(POP(bp));	// 91222 pop     bp ;~ 28F0:139B
cs=0x28f0;eip=0x00139c; 	R(RETN(4));	// 91223 retn    4 ;~ 28F0:139C
sub_3887f:
	// 91231 
#undef arg_0
#define arg_0 4
	// 91233 arg_0           = dword ptr  4 ;~ 28F0:139F
cs=0x28f0;eip=0x00139f; 	X(PUSH(bp));	// 91235 push    bp ;~ 28F0:139F
cs=0x28f0;eip=0x0013a0; 	T(MOV(bp, sp));	// 91236 mov     bp, sp ;~ 28F0:13A0
cs=0x28f0;eip=0x0013a2; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91237 mov     ax, word ptr [bp+arg_0] ;~ 28F0:13A2
cs=0x28f0;eip=0x0013a5; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91238 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:13A5
cs=0x28f0;eip=0x0013a8; 	T(ADD(ax, 0x20));	// 91239 add     ax, 20h ; ' ' ;~ 28F0:13A8
cs=0x28f0;eip=0x0013ab; 	X(PUSH(dx));	// 91240 push    dx ;~ 28F0:13AB
cs=0x28f0;eip=0x0013ac; 	X(PUSH(ax));	// 91241 push    ax ;~ 28F0:13AC
cs=0x28f0;eip=0x0013ad; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91242 les     bx, [bp+arg_0] ;~ 28F0:13AD
cs=0x28f0;eip=0x0013b0; 	X(PUSH(*(dw*)(raddr(es,bx+0x36))));	// 91243 push    word ptr es:[bx+36h] ;~ 28F0:13B0
cs=0x28f0;eip=0x0013b4; 	X(PUSH(*(dw*)(raddr(es,bx+0x34))));	// 91244 push    word ptr es:[bx+34h] ;~ 28F0:13B4
cs=0x28f0;eip=0x0013b8; 	R(CALL(sub_3b9eb,0));	// 91245 call    sub_3B9EB ;~ 28F0:13B8
cs=0x28f0;eip=0x0013bb; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91246 mov     ax, word ptr [bp+arg_0] ;~ 28F0:13BB
cs=0x28f0;eip=0x0013be; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91247 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:13BE
cs=0x28f0;eip=0x0013c1; 	T(ADD(ax, 0x29C));	// 91248 add     ax, 29Ch ;~ 28F0:13C1
cs=0x28f0;eip=0x0013c4; 	X(PUSH(dx));	// 91249 push    dx ;~ 28F0:13C4
cs=0x28f0;eip=0x0013c5; 	X(PUSH(ax));	// 91250 push    ax ;~ 28F0:13C5
cs=0x28f0;eip=0x0013c6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91251 les     bx, [bp+arg_0] ;~ 28F0:13C6
cs=0x28f0;eip=0x0013c9; 	X(PUSH(*(dw*)(raddr(es,bx+0x2B2))));	// 91252 push    word ptr es:[bx+2B2h] ;~ 28F0:13C9
cs=0x28f0;eip=0x0013ce; 	X(PUSH(*(dw*)(raddr(es,bx+0x2B0))));	// 91253 push    word ptr es:[bx+2B0h] ;~ 28F0:13CE
cs=0x28f0;eip=0x0013d3; 	R(CALL(sub_3b9eb,0));	// 91254 call    sub_3B9EB ;~ 28F0:13D3
cs=0x28f0;eip=0x0013d6; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91255 mov     ax, word ptr [bp+arg_0] ;~ 28F0:13D6
cs=0x28f0;eip=0x0013d9; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91256 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:13D9
cs=0x28f0;eip=0x0013dc; 	T(ADD(ax, 0x2BC));	// 91257 add     ax, 2BCh ;~ 28F0:13DC
cs=0x28f0;eip=0x0013df; 	X(PUSH(dx));	// 91258 push    dx ;~ 28F0:13DF
cs=0x28f0;eip=0x0013e0; 	X(PUSH(ax));	// 91259 push    ax ;~ 28F0:13E0
cs=0x28f0;eip=0x0013e1; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91260 les     bx, [bp+arg_0] ;~ 28F0:13E1
cs=0x28f0;eip=0x0013e4; 	X(PUSH(*(dw*)(raddr(es,bx+0x2D2))));	// 91261 push    word ptr es:[bx+2D2h] ;~ 28F0:13E4
cs=0x28f0;eip=0x0013e9; 	X(PUSH(*(dw*)(raddr(es,bx+0x2D0))));	// 91262 push    word ptr es:[bx+2D0h] ;~ 28F0:13E9
cs=0x28f0;eip=0x0013ee; 	R(CALL(sub_3b9eb,0));	// 91263 call    sub_3B9EB ;~ 28F0:13EE
cs=0x28f0;eip=0x0013f1; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91264 push    word ptr [bp+arg_0+2] ;~ 28F0:13F1
cs=0x28f0;eip=0x0013f4; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91265 push    word ptr [bp+arg_0] ;~ 28F0:13F4
cs=0x28f0;eip=0x0013f7; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91266 les     bx, [bp+arg_0] ;~ 28F0:13F7
cs=0x28f0;eip=0x0013fa; 	X(PUSH(*(dw*)(raddr(es,bx+0x16))));	// 91267 push    word ptr es:[bx+16h] ;~ 28F0:13FA
cs=0x28f0;eip=0x0013fe; 	X(PUSH(*(dw*)(raddr(es,bx+0x14))));	// 91268 push    word ptr es:[bx+14h] ;~ 28F0:13FE
cs=0x28f0;eip=0x001402; 	R(CALL(sub_3b9eb,0));	// 91269 call    sub_3B9EB ;~ 28F0:1402
cs=0x28f0;eip=0x001405; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91270 mov     ax, word ptr [bp+arg_0] ;~ 28F0:1405
cs=0x28f0;eip=0x001408; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91271 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:1408
cs=0x28f0;eip=0x00140b; 	T(ADD(ax, 0x40));	// 91272 add     ax, 40h ; '@' ;~ 28F0:140B
cs=0x28f0;eip=0x00140e; 	X(PUSH(dx));	// 91273 push    dx ;~ 28F0:140E
cs=0x28f0;eip=0x00140f; 	X(PUSH(ax));	// 91274 push    ax ;~ 28F0:140F
cs=0x28f0;eip=0x001410; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91275 les     bx, [bp+arg_0] ;~ 28F0:1410
cs=0x28f0;eip=0x001413; 	X(PUSH(*(dw*)(raddr(es,bx+0x56))));	// 91276 push    word ptr es:[bx+56h] ;~ 28F0:1413
cs=0x28f0;eip=0x001417; 	X(PUSH(*(dw*)(raddr(es,bx+0x54))));	// 91277 push    word ptr es:[bx+54h] ;~ 28F0:1417
cs=0x28f0;eip=0x00141b; 	R(CALL(sub_3b9eb,0));	// 91278 call    sub_3B9EB ;~ 28F0:141B
cs=0x28f0;eip=0x00141e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91279 push    word ptr [bp+arg_0+2] ;~ 28F0:141E
cs=0x28f0;eip=0x001421; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91280 push    word ptr [bp+arg_0] ;~ 28F0:1421
cs=0x28f0;eip=0x001424; 	R(CALL(sub_3a84e,0));	// 91281 call    sub_3A84E ;~ 28F0:1424
cs=0x28f0;eip=0x001427; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91282 push    word ptr [bp+arg_0+2] ;~ 28F0:1427
cs=0x28f0;eip=0x00142a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91283 push    word ptr [bp+arg_0] ;~ 28F0:142A
cs=0x28f0;eip=0x00142d; 	R(CALL(sub_3b300,0));	// 91284 call    sub_3B300 ;~ 28F0:142D
cs=0x28f0;eip=0x001430; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91285 mov     ax, word ptr [bp+arg_0] ;~ 28F0:1430
cs=0x28f0;eip=0x001433; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91286 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:1433
cs=0x28f0;eip=0x001436; 	T(ADD(ax, 0x0E0));	// 91287 add     ax, 0E0h ; 'à' ;~ 28F0:1436
cs=0x28f0;eip=0x001439; 	X(PUSH(dx));	// 91288 push    dx ;~ 28F0:1439
cs=0x28f0;eip=0x00143a; 	X(PUSH(ax));	// 91289 push    ax ;~ 28F0:143A
cs=0x28f0;eip=0x00143b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91290 les     bx, [bp+arg_0] ;~ 28F0:143B
cs=0x28f0;eip=0x00143e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2F4))));	// 91291 mov     ax, es:[bx+2F4h] ;~ 28F0:143E
cs=0x28f0;eip=0x001443; 	T(CWD);	// 91292 cwd ;~ 28F0:1443
cs=0x28f0;eip=0x001444; 	T(MOV(dh, dl));	// 91293 mov     dh, dl ;~ 28F0:1444
cs=0x28f0;eip=0x001446; 	T(MOV(dl, ah));	// 91294 mov     dl, ah ;~ 28F0:1446
cs=0x28f0;eip=0x001448; 	T(MOV(ah, al));	// 91295 mov     ah, al ;~ 28F0:1448
cs=0x28f0;eip=0x00144a; 	T(SUB(al, al));	// 91296 sub     al, al ;~ 28F0:144A
cs=0x28f0;eip=0x00144c; 	X(PUSH(dx));	// 91297 push    dx ;~ 28F0:144C
cs=0x28f0;eip=0x00144d; 	X(PUSH(ax));	// 91298 push    ax ;~ 28F0:144D
cs=0x28f0;eip=0x00144e; 	R(CALL(sub_3b9eb,0));	// 91299 call    sub_3B9EB ;~ 28F0:144E
cs=0x28f0;eip=0x001451; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91300 les     bx, [bp+arg_0] ;~ 28F0:1451
cs=0x28f0;eip=0x001454; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 91301 mov     ax, word ptr unk_57111 ;~ 28F0:1454
cs=0x28f0;eip=0x001457; 	X(SUB(*(dw*)(raddr(es,bx+0x2F8)), ax));	// 91302 sub     es:[bx+2F8h], ax ;~ 28F0:1457
cs=0x28f0;eip=0x00145c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2F8))));	// 91303 mov     ax, es:[bx+2F8h] ;~ 28F0:145C
cs=0x28f0;eip=0x001461; 	T(OR(ax, ax));	// 91304 or      ax, ax ;~ 28F0:1461
cs=0x28f0;eip=0x001463; 	R(JGE(loc_38947));	// 91305 jge     short loc_38947 ;~ 28F0:1463
cs=0x28f0;eip=0x001465; 	T(SUB(ax, ax));	// 91306 sub     ax, ax ;~ 28F0:1465
loc_38947:
	// 10278 
cs=0x28f0;eip=0x001467; 	X(MOV(*(dw*)(raddr(es,bx+0x2F8)), ax));	// 91309 mov     es:[bx+2F8h], ax ;~ 28F0:1467
cs=0x28f0;eip=0x00146c; 	T(OR(ax, ax));	// 91310 or      ax, ax ;~ 28F0:146C
cs=0x28f0;eip=0x00146e; 	R(JG(loc_38991));	// 91311 jg      short loc_38991 ;~ 28F0:146E
cs=0x28f0;eip=0x001470; 	X(PUSH(es));	// 91312 push    es ;~ 28F0:1470
cs=0x28f0;eip=0x001471; 	X(PUSH(bx));	// 91313 push    bx ;~ 28F0:1471
cs=0x28f0;eip=0x001472; 	R(CALL(sub_3a769,0));	// 91314 call    sub_3A769 ;~ 28F0:1472
cs=0x28f0;eip=0x001475; 	T(CMP(ax, 1));	// 91315 cmp     ax, 1 ;~ 28F0:1475
cs=0x28f0;eip=0x001478; 	R(JZ(loc_38964));	// 91316 jz      short loc_38964 ;~ 28F0:1478
cs=0x28f0;eip=0x00147a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91317 les     bx, [bp+arg_0] ;~ 28F0:147A
cs=0x28f0;eip=0x00147d; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), 6));	// 91318 mov     word ptr es:[bx+332h], 6 ;~ 28F0:147D
loc_38964:
	// 10279 
cs=0x28f0;eip=0x001484; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91321 les     bx, [bp+arg_0] ;~ 28F0:1484
cs=0x28f0;eip=0x001487; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x326))));	// 91322 mov     ax, es:[bx+326h] ;~ 28F0:1487
cs=0x28f0;eip=0x00148c; 	T(OR(ax, *(dw*)(raddr(es,bx+0x328))));	// 91323 or      ax, es:[bx+328h] ;~ 28F0:148C
cs=0x28f0;eip=0x001491; 	R(JZ(loc_3899e));	// 91324 jz      short loc_3899E ;~ 28F0:1491
cs=0x28f0;eip=0x001493; 	T(CMP(*(raddr(es,bx+0x330)), 0));	// 91325 cmp     byte ptr es:[bx+330h], 0 ;~ 28F0:1493
cs=0x28f0;eip=0x001499; 	R(JZ(loc_3899e));	// 91326 jz      short loc_3899E ;~ 28F0:1499
cs=0x28f0;eip=0x00149b; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), 6));	// 91327 mov     word ptr es:[bx+332h], 6 ;~ 28F0:149B
cs=0x28f0;eip=0x0014a2; 	T(MOV(ax, 0x76));	// 91328 mov     ax, 76h ; 'v' ;~ 28F0:14A2
cs=0x28f0;eip=0x0014a5; 	X(PUSH(ax));	// 91329 push    ax ;~ 28F0:14A5
cs=0x28f0;eip=0x0014a6; 	X(PUSH(es));	// 91330 push    es ;~ 28F0:14A6
cs=0x28f0;eip=0x0014a7; 	X(PUSH(bx));	// 91331 push    bx ;~ 28F0:14A7
cs=0x28f0;eip=0x0014a8; 	X(PUSH(cs));	// 91332 push    cs ;~ 28F0:14A8
cs=0x28f0;eip=0x0014a9; 	R(CALL(sub_376e1,0));	// 91333 call    near ptr sub_376E1 ;~ 28F0:14A9
cs=0x28f0;eip=0x0014ac; 	T(ADD(sp, 6));	// 91334 add     sp, 6 ;~ 28F0:14AC
cs=0x28f0;eip=0x0014af; 	R(JMP(loc_3899e));	// 91335 jmp     short loc_3899E ;~ 28F0:14AF
loc_38991:
	// 10280 
cs=0x28f0;eip=0x0014b1; 	T(MOV(ax, 0x1DB));	// 91339 mov     ax, 1DBh ;~ 28F0:14B1
cs=0x28f0;eip=0x0014b4; 	T(MOV(dx, seg_offset(seg041)));	// 91340 mov     dx, seg seg041 ;~ 28F0:14B4
cs=0x28f0;eip=0x0014b7; 	X(PUSH(dx));	// 91341 push    dx ;~ 28F0:14B7
cs=0x28f0;eip=0x0014b8; 	X(PUSH(ax));	// 91342 push    ax ;~ 28F0:14B8
cs=0x28f0;eip=0x0014b9; 	R(CALLF(sub_1c605,0));	// 91343 call    sub_1C605 ;~ 28F0:14B9
loc_3899e:
	// 10281 
cs=0x28f0;eip=0x0014be; 	X(POP(bp));	// 91347 pop     bp ;~ 28F0:14BE
cs=0x28f0;eip=0x0014bf; 	R(RETN(4));	// 91348 retn    4 ;~ 28F0:14BF
sub_389a2:
	// 91355 
cs=0x28f0;eip=0x0014c2; 	X(PUSH(bp));	// 91356 push    bp ;~ 28F0:14C2
cs=0x28f0;eip=0x0014c3; 	X(POP(bp));	// 91357 pop     bp ;~ 28F0:14C3
cs=0x28f0;eip=0x0014c4; 	R(RETN(4));	// 91358 retn    4 ;~ 28F0:14C4
sub_389a7:
	// 91366 
#undef arg_0
#define arg_0 4
	// 91368 arg_0           = dword ptr  4 ;~ 28F0:14C7
cs=0x28f0;eip=0x0014c7; 	X(PUSH(bp));	// 91370 push    bp ;~ 28F0:14C7
cs=0x28f0;eip=0x0014c8; 	T(MOV(bp, sp));	// 91371 mov     bp, sp ;~ 28F0:14C8
cs=0x28f0;eip=0x0014ca; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91372 les     bx, [bp+arg_0] ;~ 28F0:14CA
cs=0x28f0;eip=0x0014cd; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x21C))));	// 91373 mov     ax, es:[bx+21Ch] ;~ 28F0:14CD
cs=0x28f0;eip=0x0014d2; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21E))));	// 91374 mov     dx, es:[bx+21Eh] ;~ 28F0:14D2
cs=0x28f0;eip=0x0014d7; 	T(CMP(*(dw*)(raddr(es,bx+0x218)), ax));	// 91375 cmp     es:[bx+218h], ax ;~ 28F0:14D7
cs=0x28f0;eip=0x0014dc; 	R(JNZ(loc_389c5));	// 91376 jnz     short loc_389C5 ;~ 28F0:14DC
cs=0x28f0;eip=0x0014de; 	T(CMP(*(dw*)(raddr(es,bx+0x21A)), dx));	// 91377 cmp     es:[bx+21Ah], dx ;~ 28F0:14DE
cs=0x28f0;eip=0x0014e3; 	R(JZ(loc_38a3a));	// 91378 jz      short loc_38A3A ;~ 28F0:14E3
loc_389c5:
	// 10282 
cs=0x28f0;eip=0x0014e5; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 8));	// 91381 cmp     word ptr es:[bx+332h], 8 ;~ 28F0:14E5
cs=0x28f0;eip=0x0014eb; 	R(JZ(loc_38a3a));	// 91382 jz      short loc_38A3A ;~ 28F0:14EB
cs=0x28f0;eip=0x0014ed; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 91383 mov     ax, word ptr unk_57111 ;~ 28F0:14ED
cs=0x28f0;eip=0x0014f0; 	T(CWD);	// 91384 cwd ;~ 28F0:14F0
cs=0x28f0;eip=0x0014f1; 	X(ADD(*(dw*)(raddr(es,bx+0x242)), ax));	// 91385 add     es:[bx+242h], ax ;~ 28F0:14F1
cs=0x28f0;eip=0x0014f6; 	X(ADC(*(dw*)(raddr(es,bx+0x244)), dx));	// 91386 adc     es:[bx+244h], dx ;~ 28F0:14F6
cs=0x28f0;eip=0x0014fb; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x246))));	// 91387 mov     ax, es:[bx+246h] ;~ 28F0:14FB
cs=0x28f0;eip=0x001500; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x248))));	// 91388 mov     dx, es:[bx+248h] ;~ 28F0:1500
cs=0x28f0;eip=0x001505; 	T(CMP(*(dw*)(raddr(es,bx+0x244)), dx));	// 91389 cmp     es:[bx+244h], dx ;~ 28F0:1505
cs=0x28f0;eip=0x00150a; 	R(JL(loc_38a3a));	// 91390 jl      short loc_38A3A ;~ 28F0:150A
cs=0x28f0;eip=0x00150c; 	R(JG(loc_389f5));	// 91391 jg      short loc_389F5 ;~ 28F0:150C
cs=0x28f0;eip=0x00150e; 	T(CMP(*(dw*)(raddr(es,bx+0x242)), ax));	// 91392 cmp     es:[bx+242h], ax ;~ 28F0:150E
cs=0x28f0;eip=0x001513; 	R(JC(loc_38a3a));	// 91393 jb      short loc_38A3A ;~ 28F0:1513
loc_389f5:
	// 10283 
cs=0x28f0;eip=0x001515; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x21C))));	// 91396 mov     ax, es:[bx+21Ch] ;~ 28F0:1515
cs=0x28f0;eip=0x00151a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21E))));	// 91397 mov     dx, es:[bx+21Eh] ;~ 28F0:151A
cs=0x28f0;eip=0x00151f; 	T(CMP(*(dw*)(raddr(es,bx+0x21A)), dx));	// 91398 cmp     es:[bx+21Ah], dx ;~ 28F0:151F
cs=0x28f0;eip=0x001524; 	R(JG(loc_38a24));	// 91399 jg      short loc_38A24 ;~ 28F0:1524
cs=0x28f0;eip=0x001526; 	R(JL(loc_38a0f));	// 91400 jl      short loc_38A0F ;~ 28F0:1526
cs=0x28f0;eip=0x001528; 	T(CMP(*(dw*)(raddr(es,bx+0x218)), ax));	// 91401 cmp     es:[bx+218h], ax ;~ 28F0:1528
cs=0x28f0;eip=0x00152d; 	R(JNC(loc_38a24));	// 91402 jnb     short loc_38A24 ;~ 28F0:152D
loc_38a0f:
	// 10284 
cs=0x28f0;eip=0x00152f; 	T(MOV(ax, bx));	// 91405 mov     ax, bx ;~ 28F0:152F
cs=0x28f0;eip=0x001531; 	T(MOV(dx, es));	// 91406 mov     dx, es ;~ 28F0:1531
cs=0x28f0;eip=0x001533; 	T(ADD(ax, 0x218));	// 91407 add     ax, 218h ;~ 28F0:1533
cs=0x28f0;eip=0x001536; 	X(PUSH(dx));	// 91408 push    dx ;~ 28F0:1536
cs=0x28f0;eip=0x001537; 	X(PUSH(ax));	// 91409 push    ax ;~ 28F0:1537
cs=0x28f0;eip=0x001538; 	X(PUSH(*(dw*)(raddr(es,bx+0x22A))));	// 91410 push    word ptr es:[bx+22Ah] ;~ 28F0:1538
cs=0x28f0;eip=0x00153d; 	X(PUSH(*(dw*)(raddr(es,bx+0x228))));	// 91411 push    word ptr es:[bx+228h] ;~ 28F0:153D
cs=0x28f0;eip=0x001542; 	R(JMP(loc_38a37));	// 91412 jmp     short loc_38A37 ;~ 28F0:1542
loc_38a24:
	// 10285 
cs=0x28f0;eip=0x001544; 	T(MOV(ax, bx));	// 91417 mov     ax, bx ;~ 28F0:1544
cs=0x28f0;eip=0x001546; 	T(MOV(dx, es));	// 91418 mov     dx, es ;~ 28F0:1546
cs=0x28f0;eip=0x001548; 	T(ADD(ax, 0x218));	// 91419 add     ax, 218h ;~ 28F0:1548
cs=0x28f0;eip=0x00154b; 	X(PUSH(dx));	// 91420 push    dx ;~ 28F0:154B
cs=0x28f0;eip=0x00154c; 	X(PUSH(ax));	// 91421 push    ax ;~ 28F0:154C
cs=0x28f0;eip=0x00154d; 	X(PUSH(*(dw*)(raddr(es,bx+0x22E))));	// 91422 push    word ptr es:[bx+22Eh] ;~ 28F0:154D
cs=0x28f0;eip=0x001552; 	X(PUSH(*(dw*)(raddr(es,bx+0x22C))));	// 91423 push    word ptr es:[bx+22Ch] ;~ 28F0:1552
loc_38a37:
	// 10286 
cs=0x28f0;eip=0x001557; 	R(CALL(sub_3b9eb,0));	// 91426 call    sub_3B9EB ;~ 28F0:1557
loc_38a3a:
	// 10287 
cs=0x28f0;eip=0x00155a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91430 les     bx, [bp+arg_0] ;~ 28F0:155A
cs=0x28f0;eip=0x00155d; 	T(CMP(*(dw*)(raddr(es,bx+0x21E)), 0));	// 91431 cmp     word ptr es:[bx+21Eh], 0 ;~ 28F0:155D
cs=0x28f0;eip=0x001563; 	R(JGE(loc_38a48));	// 91432 jge     short loc_38A48 ;~ 28F0:1563
cs=0x28f0;eip=0x001565; 	R(JMP(loc_38b00));	// 91433 jmp     loc_38B00 ;~ 28F0:1565
loc_38a48:
	// 10288 
cs=0x28f0;eip=0x001568; 	R(JG(loc_38a55));	// 91437 jg      short loc_38A55 ;~ 28F0:1568
cs=0x28f0;eip=0x00156a; 	T(CMP(*(dw*)(raddr(es,bx+0x21C)), 0));	// 91438 cmp     word ptr es:[bx+21Ch], 0 ;~ 28F0:156A
cs=0x28f0;eip=0x001570; 	R(JNZ(loc_38a55));	// 91439 jnz     short loc_38A55 ;~ 28F0:1570
cs=0x28f0;eip=0x001572; 	R(JMP(loc_38b00));	// 91440 jmp     loc_38B00 ;~ 28F0:1572
loc_38a55:
	// 10289 
cs=0x28f0;eip=0x001575; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 91445 mov     ax, word ptr unk_57111 ;~ 28F0:1575
cs=0x28f0;eip=0x001578; 	T(CWD);	// 91446 cwd ;~ 28F0:1578
cs=0x28f0;eip=0x001579; 	X(ADD(*(dw*)(raddr(es,bx+0x27A)), ax));	// 91447 add     es:[bx+27Ah], ax ;~ 28F0:1579
cs=0x28f0;eip=0x00157e; 	X(ADC(*(dw*)(raddr(es,bx+0x27C)), dx));	// 91448 adc     es:[bx+27Ch], dx ;~ 28F0:157E
cs=0x28f0;eip=0x001583; 	T(CMP(*(dw*)(raddr(es,bx+0x27C)), 0));	// 91449 cmp     word ptr es:[bx+27Ch], 0 ;~ 28F0:1583
cs=0x28f0;eip=0x001589; 	R(JGE(loc_38a6e));	// 91450 jge     short loc_38A6E ;~ 28F0:1589
cs=0x28f0;eip=0x00158b; 	R(JMP(loc_38b00));	// 91451 jmp     loc_38B00 ;~ 28F0:158B
loc_38a6e:
	// 10290 
cs=0x28f0;eip=0x00158e; 	R(JG(loc_38a7c));	// 91455 jg      short loc_38A7C ;~ 28F0:158E
cs=0x28f0;eip=0x001590; 	T(CMP(*(dw*)(raddr(es,bx+0x27A)), 0x100));	// 91456 cmp     word ptr es:[bx+27Ah], 100h ;~ 28F0:1590
cs=0x28f0;eip=0x001597; 	R(JNC(loc_38a7c));	// 91457 jnb     short loc_38A7C ;~ 28F0:1597
cs=0x28f0;eip=0x001599; 	R(JMP(loc_38b00));	// 91458 jmp     loc_38B00 ;~ 28F0:1599
loc_38a7c:
	// 10291 
cs=0x28f0;eip=0x00159c; 	T(MOV(ax, 0x64));	// 91463 mov     ax, 64h ; 'd' ;~ 28F0:159C
cs=0x28f0;eip=0x00159f; 	T(CWD);	// 91464 cwd ;~ 28F0:159F
cs=0x28f0;eip=0x0015a0; 	X(PUSH(dx));	// 91465 push    dx ;~ 28F0:15A0
cs=0x28f0;eip=0x0015a1; 	X(PUSH(ax));	// 91466 push    ax ;~ 28F0:15A1
cs=0x28f0;eip=0x0015a2; 	X(PUSH(*(dw*)(raddr(es,bx+0x21A))));	// 91467 push    word ptr es:[bx+21Ah] ;~ 28F0:15A2
cs=0x28f0;eip=0x0015a7; 	X(PUSH(*(dw*)(raddr(es,bx+0x218))));	// 91468 push    word ptr es:[bx+218h] ;~ 28F0:15A7
cs=0x28f0;eip=0x0015ac; 	T(MOV(ax, 0x100));	// 91469 mov     ax, 100h ;~ 28F0:15AC
cs=0x28f0;eip=0x0015af; 	T(CWD);	// 91470 cwd ;~ 28F0:15AF
cs=0x28f0;eip=0x0015b0; 	X(PUSH(dx));	// 91471 push    dx ;~ 28F0:15B0
cs=0x28f0;eip=0x0015b1; 	X(PUSH(ax));	// 91472 push    ax ;~ 28F0:15B1
cs=0x28f0;eip=0x0015b2; 	X(PUSH(*(dw*)(raddr(es,bx+0x27C))));	// 91473 push    word ptr es:[bx+27Ch] ;~ 28F0:15B2
cs=0x28f0;eip=0x0015b7; 	X(PUSH(*(dw*)(raddr(es,bx+0x27A))));	// 91474 push    word ptr es:[bx+27Ah] ;~ 28F0:15B7
cs=0x28f0;eip=0x0015bc; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x286))));	// 91475 mov     ax, es:[bx+286h] ;~ 28F0:15BC
cs=0x28f0;eip=0x0015c1; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x288))));	// 91476 mov     dx, es:[bx+288h] ;~ 28F0:15C1
cs=0x28f0;eip=0x0015c6; 	T(MOV(cl, 8));	// 91477 mov     cl, 8 ;~ 28F0:15C6
cs=0x28f0;eip=0x0015c8; 	R(CALLF(sub_10240,0));	// 91478 call    sub_10240 ;~ 28F0:15C8
cs=0x28f0;eip=0x0015cd; 	X(PUSH(dx));	// 91479 push    dx ;~ 28F0:15CD
cs=0x28f0;eip=0x0015ce; 	X(PUSH(ax));	// 91480 push    ax ;~ 28F0:15CE
cs=0x28f0;eip=0x0015cf; 	R(CALLF(sub_105c2,0));	// 91481 call    sub_105C2 ;~ 28F0:15CF
cs=0x28f0;eip=0x0015d4; 	X(PUSH(dx));	// 91482 push    dx ;~ 28F0:15D4
cs=0x28f0;eip=0x0015d5; 	X(PUSH(ax));	// 91483 push    ax ;~ 28F0:15D5
cs=0x28f0;eip=0x0015d6; 	R(CALLF(sub_10526,0));	// 91484 call    sub_10526 ;~ 28F0:15D6
cs=0x28f0;eip=0x0015db; 	X(PUSH(dx));	// 91485 push    dx ;~ 28F0:15DB
cs=0x28f0;eip=0x0015dc; 	X(PUSH(ax));	// 91486 push    ax ;~ 28F0:15DC
cs=0x28f0;eip=0x0015dd; 	R(CALLF(sub_105c2,0));	// 91487 call    sub_105C2 ;~ 28F0:15DD
cs=0x28f0;eip=0x0015e2; 	X(PUSH(dx));	// 91488 push    dx ;~ 28F0:15E2
cs=0x28f0;eip=0x0015e3; 	X(PUSH(ax));	// 91489 push    ax ;~ 28F0:15E3
cs=0x28f0;eip=0x0015e4; 	R(CALLF(sub_10526,0));	// 91490 call    sub_10526 ;~ 28F0:15E4
cs=0x28f0;eip=0x0015e9; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91491 les     bx, [bp+arg_0] ;~ 28F0:15E9
cs=0x28f0;eip=0x0015ec; 	X(SUB(*(dw*)(raddr(es,bx+0x276)), ax));	// 91492 sub     es:[bx+276h], ax ;~ 28F0:15EC
cs=0x28f0;eip=0x0015f1; 	X(SBB(*(dw*)(raddr(es,bx+0x278)), dx));	// 91493 sbb     es:[bx+278h], dx ;~ 28F0:15F1
cs=0x28f0;eip=0x0015f6; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x276))));	// 91494 mov     ax, es:[bx+276h] ;~ 28F0:15F6
cs=0x28f0;eip=0x0015fb; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x278))));	// 91495 mov     dx, es:[bx+278h] ;~ 28F0:15FB
cs=0x28f0;eip=0x001600; 	T(OR(dx, dx));	// 91496 or      dx, dx ;~ 28F0:1600
cs=0x28f0;eip=0x001602; 	R(JG(loc_38aea));	// 91497 jg      short loc_38AEA ;~ 28F0:1602
cs=0x28f0;eip=0x001604; 	R(JGE(loc_38aea));	// 91498 jge     short loc_38AEA ;~ 28F0:1604
cs=0x28f0;eip=0x001606; 	T(SUB(dx, dx));	// 91499 sub     dx, dx ;~ 28F0:1606
cs=0x28f0;eip=0x001608; 	T(SUB(ax, ax));	// 91500 sub     ax, ax ;~ 28F0:1608
loc_38aea:
	// 10292 
cs=0x28f0;eip=0x00160a; 	X(MOV(*(dw*)(raddr(es,bx+0x276)), ax));	// 91504 mov     es:[bx+276h], ax ;~ 28F0:160A
cs=0x28f0;eip=0x00160f; 	X(MOV(*(dw*)(raddr(es,bx+0x278)), dx));	// 91505 mov     es:[bx+278h], dx ;~ 28F0:160F
cs=0x28f0;eip=0x001614; 	T(SUB(ax, ax));	// 91506 sub     ax, ax ;~ 28F0:1614
cs=0x28f0;eip=0x001616; 	X(MOV(*(dw*)(raddr(es,bx+0x27C)), ax));	// 91507 mov     es:[bx+27Ch], ax ;~ 28F0:1616
cs=0x28f0;eip=0x00161b; 	X(MOV(*(dw*)(raddr(es,bx+0x27A)), ax));	// 91508 mov     es:[bx+27Ah], ax ;~ 28F0:161B
loc_38b00:
	// 10293 
cs=0x28f0;eip=0x001620; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x276))));	// 91512 mov     ax, es:[bx+276h] ;~ 28F0:1620
cs=0x28f0;eip=0x001625; 	T(OR(ax, *(dw*)(raddr(es,bx+0x278))));	// 91513 or      ax, es:[bx+278h] ;~ 28F0:1625
cs=0x28f0;eip=0x00162a; 	R(JNZ(loc_38b18));	// 91514 jnz     short loc_38B18 ;~ 28F0:162A
cs=0x28f0;eip=0x00162c; 	T(SUB(ax, ax));	// 91515 sub     ax, ax ;~ 28F0:162C
cs=0x28f0;eip=0x00162e; 	X(MOV(*(dw*)(raddr(es,bx+0x21E)), ax));	// 91516 mov     es:[bx+21Eh], ax ;~ 28F0:162E
cs=0x28f0;eip=0x001633; 	X(MOV(*(dw*)(raddr(es,bx+0x21C)), ax));	// 91517 mov     es:[bx+21Ch], ax ;~ 28F0:1633
loc_38b18:
	// 10294 
cs=0x28f0;eip=0x001638; 	X(POP(bp));	// 91520 pop     bp ;~ 28F0:1638
cs=0x28f0;eip=0x001639; 	R(RETN(4));	// 91521 retn    4 ;~ 28F0:1639
sub_38b1c:
	// 91529 
#undef arg_0
#define arg_0 4
	// 91532 arg_0           = word ptr  4 ;~ 28F0:163C
cs=0x28f0;eip=0x00163c; 	X(PUSH(bp));	// 91534 push    bp ;~ 28F0:163C
cs=0x28f0;eip=0x00163d; 	T(MOV(bp, sp));	// 91535 mov     bp, sp ;~ 28F0:163D
cs=0x28f0;eip=0x00163f; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 91536 cmp     [bp+arg_0], 0 ;~ 28F0:163F
cs=0x28f0;eip=0x001643; 	R(JLE(loc_38b38));	// 91537 jle     short loc_38B38 ;~ 28F0:1643
cs=0x28f0;eip=0x001645; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x14));	// 91538 cmp     [bp+arg_0], 14h ;~ 28F0:1645
cs=0x28f0;eip=0x001649; 	R(JG(loc_38b32));	// 91539 jg      short loc_38B32 ;~ 28F0:1649
loc_38b2b:
	// 10295 
cs=0x28f0;eip=0x00164b; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 91542 mov     [bp+arg_0], 0 ;~ 28F0:164B
cs=0x28f0;eip=0x001650; 	R(JMP(loc_38b48));	// 91543 jmp     short loc_38B48 ;~ 28F0:1650
loc_38b32:
	// 10296 
cs=0x28f0;eip=0x001652; 	X(SUB(*(dw*)(raddr(ss,bp+arg_0)), 0x14));	// 91547 sub     [bp+arg_0], 14h ;~ 28F0:1652
cs=0x28f0;eip=0x001656; 	R(JMP(loc_38b48));	// 91548 jmp     short loc_38B48 ;~ 28F0:1656
loc_38b38:
	// 10297 
cs=0x28f0;eip=0x001658; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 91552 cmp     [bp+arg_0], 0 ;~ 28F0:1658
cs=0x28f0;eip=0x00165c; 	R(JGE(loc_38b48));	// 91553 jge     short loc_38B48 ;~ 28F0:165C
cs=0x28f0;eip=0x00165e; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FFEC));	// 91554 cmp     [bp+arg_0], 0FFECh ;~ 28F0:165E
cs=0x28f0;eip=0x001662; 	R(JGE(loc_38b2b));	// 91555 jge     short loc_38B2B ;~ 28F0:1662
cs=0x28f0;eip=0x001664; 	X(ADD(*(dw*)(raddr(ss,bp+arg_0)), 0x14));	// 91556 add     [bp+arg_0], 14h ;~ 28F0:1664
loc_38b48:
	// 10298 
cs=0x28f0;eip=0x001668; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 91560 mov     ax, [bp+arg_0] ;~ 28F0:1668
cs=0x28f0;eip=0x00166b; 	X(POP(bp));	// 91561 pop     bp ;~ 28F0:166B
cs=0x28f0;eip=0x00166c; 	R(RETN(2));	// 91562 retn    2 ;~ 28F0:166C
sub_38b4f:
	// 91570 
#undef arg_0
#define arg_0 6
	// 91572 arg_0           = dword ptr  6 ;~ 28F0:166F
cs=0x28f0;eip=0x00166f; 	X(PUSH(bp));	// 91574 push    bp ;~ 28F0:166F
cs=0x28f0;eip=0x001670; 	T(MOV(bp, sp));	// 91575 mov     bp, sp ;~ 28F0:1670
cs=0x28f0;eip=0x001672; 	R(CALLF(sub_2eef5,0));	// 91576 call    sub_2EEF5 ;~ 28F0:1672
cs=0x28f0;eip=0x001677; 	T(AND(al, 8));	// 91577 and     al, 8 ;~ 28F0:1677
cs=0x28f0;eip=0x001679; 	T(CMP(al, 1));	// 91578 cmp     al, 1 ;~ 28F0:1679
cs=0x28f0;eip=0x00167b; 	T(SBB(cx, cx));	// 91579 sbb     cx, cx ;~ 28F0:167B
cs=0x28f0;eip=0x00167d; 	T(INC(cx));	// 91580 inc     cx ;~ 28F0:167D
cs=0x28f0;eip=0x00167e; 	X(MOV(unk_57113, cl));	// 91581 mov     byte ptr unk_57113, cl ;~ 28F0:167E
cs=0x28f0;eip=0x001682; 	X(PUSH(*(dw*)((&unk_56486))));	// 91582 push    word ptr unk_56486 ;~ 28F0:1682
cs=0x28f0;eip=0x001686; 	R(CALL(sub_38b1c,0));	// 91583 call    sub_38B1C ;~ 28F0:1686
cs=0x28f0;eip=0x001689; 	X(MOV(*(dw*)((&unk_57114)), ax));	// 91584 mov     word ptr unk_57114, ax ;~ 28F0:1689
cs=0x28f0;eip=0x00168c; 	X(PUSH(*(dw*)((&unk_56488))));	// 91585 push    word ptr unk_56488 ;~ 28F0:168C
cs=0x28f0;eip=0x001690; 	R(CALL(sub_38b1c,0));	// 91586 call    sub_38B1C ;~ 28F0:1690
cs=0x28f0;eip=0x001693; 	X(MOV(*(dw*)((&unk_57116)), ax));	// 91587 mov     word ptr unk_57116, ax ;~ 28F0:1693
cs=0x28f0;eip=0x001696; 	T(MOV(ax, *(dw*)((&unk_57056))));	// 91588 mov     ax, word ptr unk_57056 ;~ 28F0:1696
cs=0x28f0;eip=0x001699; 	X(MOV(*(dw*)((&unk_57111)), ax));	// 91589 mov     word ptr unk_57111, ax ;~ 28F0:1699
cs=0x28f0;eip=0x00169c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91590 les     bx, [bp+arg_0] ;~ 28F0:169C
cs=0x28f0;eip=0x00169f; 	T(MOV(ax, word_5705a));	// 91591 mov     ax, word_5705A ;~ 28F0:169F
cs=0x28f0;eip=0x0016a2; 	T(MOV(dx, word_5705c));	// 91592 mov     dx, word_5705C ;~ 28F0:16A2
cs=0x28f0;eip=0x0016a6; 	X(MOV(*(dw*)(raddr(es,bx+0x318)), ax));	// 91593 mov     es:[bx+318h], ax ;~ 28F0:16A6
cs=0x28f0;eip=0x0016ab; 	X(MOV(*(dw*)(raddr(es,bx+0x31A)), dx));	// 91594 mov     es:[bx+31Ah], dx ;~ 28F0:16AB
cs=0x28f0;eip=0x0016b0; 	X(PUSH(es));	// 91595 push    es ;~ 28F0:16B0
cs=0x28f0;eip=0x0016b1; 	X(PUSH(bx));	// 91596 push    bx ;~ 28F0:16B1
cs=0x28f0;eip=0x0016b2; 	R(CALL(sub_389a7,0));	// 91597 call    sub_389A7 ;~ 28F0:16B2
cs=0x28f0;eip=0x0016b5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91598 les     bx, [bp+arg_0] ;~ 28F0:16B5
cs=0x28f0;eip=0x0016b8; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 5));	// 91599 cmp     word ptr es:[bx+332h], 5 ;~ 28F0:16B8
cs=0x28f0;eip=0x0016be; 	R(JNZ(loc_38ba7));	// 91600 jnz     short loc_38BA7 ;~ 28F0:16BE
cs=0x28f0;eip=0x0016c0; 	X(PUSH(es));	// 91601 push    es ;~ 28F0:16C0
cs=0x28f0;eip=0x0016c1; 	X(PUSH(bx));	// 91602 push    bx ;~ 28F0:16C1
cs=0x28f0;eip=0x0016c2; 	R(CALL(sub_39c0c,0));	// 91603 call    sub_39C0C ;~ 28F0:16C2
cs=0x28f0;eip=0x0016c5; 	R(JMP(loc_38bff));	// 91604 jmp     short loc_38BFF ;~ 28F0:16C5
loc_38ba7:
	// 10299 
cs=0x28f0;eip=0x0016c7; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91608 les     bx, [bp+arg_0] ;~ 28F0:16C7
cs=0x28f0;eip=0x0016ca; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 6));	// 91609 cmp     word ptr es:[bx+332h], 6 ;~ 28F0:16CA
cs=0x28f0;eip=0x0016d0; 	R(JNZ(loc_38bb9));	// 91610 jnz     short loc_38BB9 ;~ 28F0:16D0
cs=0x28f0;eip=0x0016d2; 	X(PUSH(es));	// 91611 push    es ;~ 28F0:16D2
cs=0x28f0;eip=0x0016d3; 	X(PUSH(bx));	// 91612 push    bx ;~ 28F0:16D3
cs=0x28f0;eip=0x0016d4; 	R(CALL(sub_3b608,0));	// 91613 call    sub_3B608 ;~ 28F0:16D4
cs=0x28f0;eip=0x0016d7; 	R(JMP(loc_38bff));	// 91614 jmp     short loc_38BFF ;~ 28F0:16D7
loc_38bb9:
	// 10300 
cs=0x28f0;eip=0x0016d9; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91618 les     bx, [bp+arg_0] ;~ 28F0:16D9
cs=0x28f0;eip=0x0016dc; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 1));	// 91619 cmp     word ptr es:[bx+332h], 1 ;~ 28F0:16DC
cs=0x28f0;eip=0x0016e2; 	R(JNZ(loc_38bcb));	// 91620 jnz     short loc_38BCB ;~ 28F0:16E2
cs=0x28f0;eip=0x0016e4; 	X(PUSH(es));	// 91621 push    es ;~ 28F0:16E4
cs=0x28f0;eip=0x0016e5; 	X(PUSH(bx));	// 91622 push    bx ;~ 28F0:16E5
cs=0x28f0;eip=0x0016e6; 	R(CALL(sub_3884d,0));	// 91623 call    sub_3884D ;~ 28F0:16E6
cs=0x28f0;eip=0x0016e9; 	R(JMP(loc_38bff));	// 91624 jmp     short loc_38BFF ;~ 28F0:16E9
loc_38bcb:
	// 10301 
cs=0x28f0;eip=0x0016eb; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91628 les     bx, [bp+arg_0] ;~ 28F0:16EB
cs=0x28f0;eip=0x0016ee; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 2));	// 91629 cmp     word ptr es:[bx+332h], 2 ;~ 28F0:16EE
cs=0x28f0;eip=0x0016f4; 	R(JNZ(loc_38bdd));	// 91630 jnz     short loc_38BDD ;~ 28F0:16F4
cs=0x28f0;eip=0x0016f6; 	X(PUSH(es));	// 91631 push    es ;~ 28F0:16F6
cs=0x28f0;eip=0x0016f7; 	X(PUSH(bx));	// 91632 push    bx ;~ 28F0:16F7
cs=0x28f0;eip=0x0016f8; 	R(CALL(sub_389a2,0));	// 91633 call    sub_389A2 ;~ 28F0:16F8
cs=0x28f0;eip=0x0016fb; 	R(JMP(loc_38bff));	// 91634 jmp     short loc_38BFF ;~ 28F0:16FB
loc_38bdd:
	// 10302 
cs=0x28f0;eip=0x0016fd; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91638 les     bx, [bp+arg_0] ;~ 28F0:16FD
cs=0x28f0;eip=0x001700; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 7));	// 91639 cmp     word ptr es:[bx+332h], 7 ;~ 28F0:1700
cs=0x28f0;eip=0x001706; 	R(JNZ(loc_38bef));	// 91640 jnz     short loc_38BEF ;~ 28F0:1706
cs=0x28f0;eip=0x001708; 	X(PUSH(es));	// 91641 push    es ;~ 28F0:1708
cs=0x28f0;eip=0x001709; 	X(PUSH(bx));	// 91642 push    bx ;~ 28F0:1709
cs=0x28f0;eip=0x00170a; 	R(CALL(sub_3887f,0));	// 91643 call    sub_3887F ;~ 28F0:170A
cs=0x28f0;eip=0x00170d; 	R(JMP(loc_38bff));	// 91644 jmp     short loc_38BFF ;~ 28F0:170D
loc_38bef:
	// 10303 
cs=0x28f0;eip=0x00170f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91648 les     bx, [bp+arg_0] ;~ 28F0:170F
cs=0x28f0;eip=0x001712; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 8));	// 91649 cmp     word ptr es:[bx+332h], 8 ;~ 28F0:1712
cs=0x28f0;eip=0x001718; 	R(JNZ(loc_38bff));	// 91650 jnz     short loc_38BFF ;~ 28F0:1718
cs=0x28f0;eip=0x00171a; 	X(PUSH(es));	// 91651 push    es ;~ 28F0:171A
cs=0x28f0;eip=0x00171b; 	X(PUSH(bx));	// 91652 push    bx ;~ 28F0:171B
cs=0x28f0;eip=0x00171c; 	R(CALL(sub_399d0,0));	// 91653 call    sub_399D0 ;~ 28F0:171C
loc_38bff:
	// 10304 
cs=0x28f0;eip=0x00171f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91657 les     bx, [bp+arg_0] ;~ 28F0:171F
cs=0x28f0;eip=0x001722; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 0));	// 91658 cmp     word ptr es:[bx+332h], 0 ;~ 28F0:1722
cs=0x28f0;eip=0x001728; 	R(JZ(loc_38c57));	// 91659 jz      short loc_38C57 ;~ 28F0:1728
cs=0x28f0;eip=0x00172a; 	X(PUSH(es));	// 91660 push    es ;~ 28F0:172A
cs=0x28f0;eip=0x00172b; 	X(PUSH(bx));	// 91661 push    bx ;~ 28F0:172B
cs=0x28f0;eip=0x00172c; 	R(CALL(sub_3c5a1,0));	// 91662 call    sub_3C5A1 ;~ 28F0:172C
cs=0x28f0;eip=0x00172f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91663 push    word ptr [bp+arg_0+2] ;~ 28F0:172F
cs=0x28f0;eip=0x001732; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91664 push    word ptr [bp+arg_0] ;~ 28F0:1732
cs=0x28f0;eip=0x001735; 	R(CALL(sub_3ccd7,0));	// 91665 call    sub_3CCD7 ;~ 28F0:1735
cs=0x28f0;eip=0x001738; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91666 push    word ptr [bp+arg_0+2] ;~ 28F0:1738
cs=0x28f0;eip=0x00173b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91667 push    word ptr [bp+arg_0] ;~ 28F0:173B
cs=0x28f0;eip=0x00173e; 	R(CALL(sub_3c71e,0));	// 91668 call    sub_3C71E ;~ 28F0:173E
cs=0x28f0;eip=0x001741; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91669 push    word ptr [bp+arg_0+2] ;~ 28F0:1741
cs=0x28f0;eip=0x001744; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91670 push    word ptr [bp+arg_0] ;~ 28F0:1744
cs=0x28f0;eip=0x001747; 	R(CALL(sub_3c974,0));	// 91671 call    sub_3C974 ;~ 28F0:1747
cs=0x28f0;eip=0x00174a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91672 push    word ptr [bp+arg_0+2] ;~ 28F0:174A
cs=0x28f0;eip=0x00174d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91673 push    word ptr [bp+arg_0] ;~ 28F0:174D
cs=0x28f0;eip=0x001750; 	R(CALL(sub_3cf1a,0));	// 91674 call    sub_3CF1A ;~ 28F0:1750
cs=0x28f0;eip=0x001753; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91675 push    word ptr [bp+arg_0+2] ;~ 28F0:1753
cs=0x28f0;eip=0x001756; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91676 push    word ptr [bp+arg_0] ;~ 28F0:1756
cs=0x28f0;eip=0x001759; 	R(CALL(sub_37c08,0));	// 91677 call    sub_37C08 ;~ 28F0:1759
cs=0x28f0;eip=0x00175c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91678 push    word ptr [bp+arg_0+2] ;~ 28F0:175C
cs=0x28f0;eip=0x00175f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91679 push    word ptr [bp+arg_0] ;~ 28F0:175F
cs=0x28f0;eip=0x001762; 	R(CALL(sub_37e25,0));	// 91680 call    sub_37E25 ;~ 28F0:1762
cs=0x28f0;eip=0x001765; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91681 push    word ptr [bp+arg_0+2] ;~ 28F0:1765
cs=0x28f0;eip=0x001768; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91682 push    word ptr [bp+arg_0] ;~ 28F0:1768
cs=0x28f0;eip=0x00176b; 	R(CALL(sub_3cc2d,0));	// 91683 call    sub_3CC2D ;~ 28F0:176B
cs=0x28f0;eip=0x00176e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91684 push    word ptr [bp+arg_0+2] ;~ 28F0:176E
cs=0x28f0;eip=0x001771; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91685 push    word ptr [bp+arg_0] ;~ 28F0:1771
cs=0x28f0;eip=0x001774; 	R(CALL(sub_37c08,0));	// 91686 call    sub_37C08 ;~ 28F0:1774
loc_38c57:
	// 10305 
cs=0x28f0;eip=0x001777; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91689 push    word ptr [bp+arg_0+2] ;~ 28F0:1777
cs=0x28f0;eip=0x00177a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91690 push    word ptr [bp+arg_0] ;~ 28F0:177A
cs=0x28f0;eip=0x00177d; 	R(CALL(sub_37df2,0));	// 91691 call    sub_37DF2 ;~ 28F0:177D
cs=0x28f0;eip=0x001780; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91692 les     bx, [bp+arg_0] ;~ 28F0:1780
cs=0x28f0;eip=0x001783; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 91693 mov     ax, es:[bx+120h] ;~ 28F0:1783
cs=0x28f0;eip=0x001788; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 91694 mov     dx, es:[bx+122h] ;~ 28F0:1788
cs=0x28f0;eip=0x00178d; 	T(MOV(bx, *(dw*)((&unk_47a9a))));	// 91695 mov     bx, word ptr unk_47A9A ;~ 28F0:178D
cs=0x28f0;eip=0x001791; 	T(MOV(cx, *(dw*)((&unk_56fbf))));	// 91696 mov     cx, word ptr unk_56FBF ;~ 28F0:1791
cs=0x28f0;eip=0x001795; 	T(MOV(es, bx));	// 91697 mov     es, bx ;~ 28F0:1795
cs=0x28f0;eip=0x001797; 	T(MOV(bx, cx));	// 91699 mov     bx, cx ;~ 28F0:1797
cs=0x28f0;eip=0x001799; 	X(MOV(*(dw*)(raddr(es,bx+0x1A)), ax));	// 91700 mov     es:[bx+1Ah], ax ;~ 28F0:1799
cs=0x28f0;eip=0x00179d; 	X(MOV(*(dw*)(raddr(es,bx+0x1C)), dx));	// 91701 mov     es:[bx+1Ch], dx ;~ 28F0:179D
cs=0x28f0;eip=0x0017a1; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91702 les     bx, [bp+arg_0] ;~ 28F0:17A1
cs=0x28f0;eip=0x0017a4; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1C0))));	// 91704 mov     ax, es:[bx+1C0h] ;~ 28F0:17A4
cs=0x28f0;eip=0x0017a9; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1C2))));	// 91705 mov     dx, es:[bx+1C2h] ;~ 28F0:17A9
cs=0x28f0;eip=0x0017ae; 	T(NEG(ax));	// 91706 neg     ax ;~ 28F0:17AE
cs=0x28f0;eip=0x0017b0; 	T(ADC(dx, 0));	// 91707 adc     dx, 0 ;~ 28F0:17B0
cs=0x28f0;eip=0x0017b3; 	T(NEG(dx));	// 91708 neg     dx ;~ 28F0:17B3
cs=0x28f0;eip=0x0017b5; 	X(MOV(*(dw*)((&unk_47aba)), ax));	// 91709 mov     word ptr unk_47ABA, ax ;~ 28F0:17B5
cs=0x28f0;eip=0x0017b8; 	X(MOV(*(dw*)((&unk_47abc)), dx));	// 91710 mov     word ptr unk_47ABC, dx ;~ 28F0:17B8
cs=0x28f0;eip=0x0017bc; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x320))));	// 91711 mov     ax, es:[bx+320h] ;~ 28F0:17BC
cs=0x28f0;eip=0x0017c1; 	X(POP(bp));	// 91712 pop     bp ;~ 28F0:17C1
cs=0x28f0;eip=0x0017c2; 	R(RETF(0));	// 91713 retf ;~ 28F0:17C2
sub_38ca4:
	// 91723 
#undef var_4
#define var_4 -4
	// 91726 var_4           = dword ptr -4 ;~ 28F0:17C4
#undef arg_0
#define arg_0 4
	// 91727 arg_0           = dword ptr  4 ;~ 28F0:17C4
cs=0x28f0;eip=0x0017c4; 	X(PUSH(bp));	// 91729 push    bp ;~ 28F0:17C4
cs=0x28f0;eip=0x0017c5; 	T(MOV(bp, sp));	// 91730 mov     bp, sp ;~ 28F0:17C5
cs=0x28f0;eip=0x0017c7; 	T(SUB(sp, 4));	// 91731 sub     sp, 4 ;~ 28F0:17C7
cs=0x28f0;eip=0x0017ca; 	X(PUSH(di));	// 91732 push    di ;~ 28F0:17CA
cs=0x28f0;eip=0x0017cb; 	X(PUSH(si));	// 91733 push    si ;~ 28F0:17CB
cs=0x28f0;eip=0x0017cc; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91734 les     bx, [bp+arg_0] ;~ 28F0:17CC
cs=0x28f0;eip=0x0017cf; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x326))));	// 91735 mov     ax, es:[bx+326h] ;~ 28F0:17CF
cs=0x28f0;eip=0x0017d4; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x328))));	// 91736 mov     dx, es:[bx+328h] ;~ 28F0:17D4
cs=0x28f0;eip=0x0017d9; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 91737 mov     word ptr [bp+var_4], ax ;~ 28F0:17D9
cs=0x28f0;eip=0x0017dc; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 91738 mov     word ptr [bp+var_4+2], dx ;~ 28F0:17DC
cs=0x28f0;eip=0x0017df; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 91739 mov     ax, es:[bx+120h] ;~ 28F0:17DF
cs=0x28f0;eip=0x0017e4; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 91740 mov     dx, es:[bx+122h] ;~ 28F0:17E4
cs=0x28f0;eip=0x0017e9; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91741 les     bx, [bp+var_4] ;~ 28F0:17E9
cs=0x28f0;eip=0x0017ec; 	X(MOV(*(dw*)(raddr(es,bx+0x120)), ax));	// 91742 mov     es:[bx+120h], ax ;~ 28F0:17EC
cs=0x28f0;eip=0x0017f1; 	X(MOV(*(dw*)(raddr(es,bx+0x122)), dx));	// 91743 mov     es:[bx+122h], dx ;~ 28F0:17F1
cs=0x28f0;eip=0x0017f6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91744 les     bx, [bp+arg_0] ;~ 28F0:17F6
cs=0x28f0;eip=0x0017f9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x140))));	// 91745 mov     ax, es:[bx+140h] ;~ 28F0:17F9
cs=0x28f0;eip=0x0017fe; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x142))));	// 91746 mov     dx, es:[bx+142h] ;~ 28F0:17FE
cs=0x28f0;eip=0x001803; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91747 les     bx, [bp+var_4] ;~ 28F0:1803
cs=0x28f0;eip=0x001806; 	X(MOV(*(dw*)(raddr(es,bx+0x140)), ax));	// 91748 mov     es:[bx+140h], ax ;~ 28F0:1806
cs=0x28f0;eip=0x00180b; 	X(MOV(*(dw*)(raddr(es,bx+0x142)), dx));	// 91749 mov     es:[bx+142h], dx ;~ 28F0:180B
cs=0x28f0;eip=0x001810; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91750 les     bx, [bp+arg_0] ;~ 28F0:1810
cs=0x28f0;eip=0x001813; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x160))));	// 91751 mov     ax, es:[bx+160h] ;~ 28F0:1813
cs=0x28f0;eip=0x001818; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x162))));	// 91752 mov     dx, es:[bx+162h] ;~ 28F0:1818
cs=0x28f0;eip=0x00181d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91753 les     bx, [bp+var_4] ;~ 28F0:181D
cs=0x28f0;eip=0x001820; 	X(MOV(*(dw*)(raddr(es,bx+0x160)), ax));	// 91754 mov     es:[bx+160h], ax ;~ 28F0:1820
cs=0x28f0;eip=0x001825; 	X(MOV(*(dw*)(raddr(es,bx+0x162)), dx));	// 91755 mov     es:[bx+162h], dx ;~ 28F0:1825
cs=0x28f0;eip=0x00182a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91756 les     bx, [bp+arg_0] ;~ 28F0:182A
cs=0x28f0;eip=0x00182d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1C0))));	// 91757 mov     ax, es:[bx+1C0h] ;~ 28F0:182D
cs=0x28f0;eip=0x001832; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1C2))));	// 91758 mov     dx, es:[bx+1C2h] ;~ 28F0:1832
cs=0x28f0;eip=0x001837; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91759 les     bx, [bp+var_4] ;~ 28F0:1837
cs=0x28f0;eip=0x00183a; 	X(MOV(*(dw*)(raddr(es,bx+0x1C0)), ax));	// 91760 mov     es:[bx+1C0h], ax ;~ 28F0:183A
cs=0x28f0;eip=0x00183f; 	X(MOV(*(dw*)(raddr(es,bx+0x1C2)), dx));	// 91761 mov     es:[bx+1C2h], dx ;~ 28F0:183F
cs=0x28f0;eip=0x001844; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91762 les     bx, [bp+arg_0] ;~ 28F0:1844
cs=0x28f0;eip=0x001847; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 5));	// 91763 cmp     word ptr es:[bx+332h], 5 ;~ 28F0:1847
cs=0x28f0;eip=0x00184d; 	R(JNZ(loc_38d64));	// 91764 jnz     short loc_38D64 ;~ 28F0:184D
cs=0x28f0;eip=0x00184f; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 91765 mov     ax, es:[bx] ;~ 28F0:184F
cs=0x28f0;eip=0x001852; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 91766 mov     dx, es:[bx+2] ;~ 28F0:1852
cs=0x28f0;eip=0x001856; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91767 les     bx, [bp+var_4] ;~ 28F0:1856
cs=0x28f0;eip=0x001859; 	X(MOV(*(dw*)(raddr(es,bx+0x0C0)), ax));	// 91768 mov     es:[bx+0C0h], ax ;~ 28F0:1859
cs=0x28f0;eip=0x00185e; 	X(MOV(*(dw*)(raddr(es,bx+0x0C2)), dx));	// 91769 mov     es:[bx+0C2h], dx ;~ 28F0:185E
cs=0x28f0;eip=0x001863; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91770 les     bx, [bp+arg_0] ;~ 28F0:1863
cs=0x28f0;eip=0x001866; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20))));	// 91771 mov     ax, es:[bx+20h] ;~ 28F0:1866
cs=0x28f0;eip=0x00186a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x22))));	// 91772 mov     dx, es:[bx+22h] ;~ 28F0:186A
cs=0x28f0;eip=0x00186e; 	T(NEG(ax));	// 91773 neg     ax ;~ 28F0:186E
cs=0x28f0;eip=0x001870; 	T(ADC(dx, 0));	// 91774 adc     dx, 0 ;~ 28F0:1870
cs=0x28f0;eip=0x001873; 	T(NEG(dx));	// 91775 neg     dx ;~ 28F0:1873
cs=0x28f0;eip=0x001875; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91776 les     bx, [bp+var_4] ;~ 28F0:1875
cs=0x28f0;eip=0x001878; 	X(MOV(*(dw*)(raddr(es,bx+0x0E0)), ax));	// 91777 mov     es:[bx+0E0h], ax ;~ 28F0:1878
cs=0x28f0;eip=0x00187d; 	X(MOV(*(dw*)(raddr(es,bx+0x0E2)), dx));	// 91778 mov     es:[bx+0E2h], dx ;~ 28F0:187D
cs=0x28f0;eip=0x001882; 	R(JMP(loc_38d9a));	// 91779 jmp     short loc_38D9A ;~ 28F0:1882
loc_38d64:
	// 10306 
cs=0x28f0;eip=0x001884; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91783 les     bx, [bp+arg_0] ;~ 28F0:1884
cs=0x28f0;eip=0x001887; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C0))));	// 91784 mov     ax, es:[bx+0C0h] ;~ 28F0:1887
cs=0x28f0;eip=0x00188c; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C2))));	// 91785 mov     dx, es:[bx+0C2h] ;~ 28F0:188C
cs=0x28f0;eip=0x001891; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91786 les     bx, [bp+var_4] ;~ 28F0:1891
cs=0x28f0;eip=0x001894; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 91787 mov     es:[bx], ax ;~ 28F0:1894
cs=0x28f0;eip=0x001897; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 91788 mov     es:[bx+2], dx ;~ 28F0:1897
cs=0x28f0;eip=0x00189b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91789 les     bx, [bp+arg_0] ;~ 28F0:189B
cs=0x28f0;eip=0x00189e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 91790 mov     ax, es:[bx+0E0h] ;~ 28F0:189E
cs=0x28f0;eip=0x0018a3; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 91791 mov     dx, es:[bx+0E2h] ;~ 28F0:18A3
cs=0x28f0;eip=0x0018a8; 	T(NEG(ax));	// 91792 neg     ax ;~ 28F0:18A8
cs=0x28f0;eip=0x0018aa; 	T(ADC(dx, 0));	// 91793 adc     dx, 0 ;~ 28F0:18AA
cs=0x28f0;eip=0x0018ad; 	T(NEG(dx));	// 91794 neg     dx ;~ 28F0:18AD
cs=0x28f0;eip=0x0018af; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91795 les     bx, [bp+var_4] ;~ 28F0:18AF
cs=0x28f0;eip=0x0018b2; 	X(MOV(*(dw*)(raddr(es,bx+0x20)), ax));	// 91796 mov     es:[bx+20h], ax ;~ 28F0:18B2
cs=0x28f0;eip=0x0018b6; 	X(MOV(*(dw*)(raddr(es,bx+0x22)), dx));	// 91797 mov     es:[bx+22h], dx ;~ 28F0:18B6
loc_38d9a:
	// 10307 
cs=0x28f0;eip=0x0018ba; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91800 les     bx, [bp+arg_0] ;~ 28F0:18BA
cs=0x28f0;eip=0x0018bd; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x100))));	// 91801 mov     ax, es:[bx+100h] ;~ 28F0:18BD
cs=0x28f0;eip=0x0018c2; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x102))));	// 91802 mov     dx, es:[bx+102h] ;~ 28F0:18C2
cs=0x28f0;eip=0x0018c7; 	T(NEG(ax));	// 91803 neg     ax ;~ 28F0:18C7
cs=0x28f0;eip=0x0018c9; 	T(ADC(dx, 0));	// 91804 adc     dx, 0 ;~ 28F0:18C9
cs=0x28f0;eip=0x0018cc; 	T(NEG(dx));	// 91805 neg     dx ;~ 28F0:18CC
cs=0x28f0;eip=0x0018ce; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91806 les     bx, [bp+var_4] ;~ 28F0:18CE
cs=0x28f0;eip=0x0018d1; 	X(MOV(*(dw*)(raddr(es,bx+0x100)), ax));	// 91807 mov     es:[bx+100h], ax ;~ 28F0:18D1
cs=0x28f0;eip=0x0018d6; 	X(MOV(*(dw*)(raddr(es,bx+0x102)), dx));	// 91808 mov     es:[bx+102h], dx ;~ 28F0:18D6
cs=0x28f0;eip=0x0018db; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91809 mov     ax, word ptr [bp+arg_0] ;~ 28F0:18DB
cs=0x28f0;eip=0x0018de; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91810 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:18DE
cs=0x28f0;eip=0x0018e1; 	T(ADD(ax, 0x218));	// 91811 add     ax, 218h ;~ 28F0:18E1
cs=0x28f0;eip=0x0018e4; 	T(di = bx+0x218);	// 91812 lea     di, [bx+218h] ;~ 28F0:18E4
cs=0x28f0;eip=0x0018e8; 	T(MOV(si, ax));	// 91813 mov     si, ax ;~ 28F0:18E8
cs=0x28f0;eip=0x0018ea; 	X(PUSH(ds));	// 91814 push    ds ;~ 28F0:18EA
cs=0x28f0;eip=0x0018eb; 	T(MOV(ds, dx));	// 91815 mov     ds, dx ;~ 28F0:18EB
cs=0x28f0;eip=0x0018ed; 	T(MOV(cx, 0x10));	// 91816 mov     cx, 10h ;~ 28F0:18ED
	// 91817 repne movsw ;~ 28F0:18F0
cs=0x28f0;eip=0x0018f0; 	X(	REPNE MOVSW);	// 91817 repne movsw ;~ 28F0:18F0
cs=0x28f0;eip=0x0018f2; 	X(POP(ds));	// 91818 pop     ds ;~ 28F0:18F2
cs=0x28f0;eip=0x0018f3; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91819 mov     ax, word ptr [bp+arg_0] ;~ 28F0:18F3
cs=0x28f0;eip=0x0018f6; 	T(ADD(ax, 0x276));	// 91820 add     ax, 276h ;~ 28F0:18F6
cs=0x28f0;eip=0x0018f9; 	T(di = bx+0x276);	// 91821 lea     di, [bx+276h] ;~ 28F0:18F9
cs=0x28f0;eip=0x0018fd; 	T(MOV(si, ax));	// 91822 mov     si, ax ;~ 28F0:18FD
cs=0x28f0;eip=0x0018ff; 	X(PUSH(ds));	// 91823 push    ds ;~ 28F0:18FF
cs=0x28f0;eip=0x001900; 	T(MOV(ds, dx));	// 91824 mov     ds, dx ;~ 28F0:1900
cs=0x28f0;eip=0x001902; 	T(MOV(cx, 0x10));	// 91825 mov     cx, 10h ;~ 28F0:1902
	// 91826 repne movsw ;~ 28F0:1905
cs=0x28f0;eip=0x001905; 	X(	REPNE MOVSW);	// 91826 repne movsw ;~ 28F0:1905
cs=0x28f0;eip=0x001907; 	X(POP(ds));	// 91827 pop     ds ;~ 28F0:1907
cs=0x28f0;eip=0x001908; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91828 les     bx, [bp+arg_0] ;~ 28F0:1908
cs=0x28f0;eip=0x00190b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x242))));	// 91829 mov     ax, es:[bx+242h] ;~ 28F0:190B
cs=0x28f0;eip=0x001910; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x244))));	// 91830 mov     dx, es:[bx+244h] ;~ 28F0:1910
cs=0x28f0;eip=0x001915; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91831 les     bx, [bp+var_4] ;~ 28F0:1915
cs=0x28f0;eip=0x001918; 	X(MOV(*(dw*)(raddr(es,bx+0x242)), ax));	// 91832 mov     es:[bx+242h], ax ;~ 28F0:1918
cs=0x28f0;eip=0x00191d; 	X(MOV(*(dw*)(raddr(es,bx+0x244)), dx));	// 91833 mov     es:[bx+244h], dx ;~ 28F0:191D
cs=0x28f0;eip=0x001922; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91834 les     bx, [bp+arg_0] ;~ 28F0:1922
cs=0x28f0;eip=0x001925; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x212))));	// 91835 mov     ax, es:[bx+212h] ;~ 28F0:1925
cs=0x28f0;eip=0x00192a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91836 les     bx, [bp+var_4] ;~ 28F0:192A
cs=0x28f0;eip=0x00192d; 	X(MOV(*(dw*)(raddr(es,bx+0x212)), ax));	// 91837 mov     es:[bx+212h], ax ;~ 28F0:192D
cs=0x28f0;eip=0x001932; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91838 les     bx, [bp+arg_0] ;~ 28F0:1932
cs=0x28f0;eip=0x001935; 	T(MOV(al, *(raddr(es,bx+0x216))));	// 91839 mov     al, es:[bx+216h] ;~ 28F0:1935
cs=0x28f0;eip=0x00193a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91840 les     bx, [bp+var_4] ;~ 28F0:193A
cs=0x28f0;eip=0x00193d; 	X(MOV(*(raddr(es,bx+0x216)), al));	// 91841 mov     es:[bx+216h], al ;~ 28F0:193D
cs=0x28f0;eip=0x001942; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91842 les     bx, [bp+arg_0] ;~ 28F0:1942
cs=0x28f0;eip=0x001945; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x318))));	// 91843 mov     ax, es:[bx+318h] ;~ 28F0:1945
cs=0x28f0;eip=0x00194a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x31A))));	// 91844 mov     dx, es:[bx+31Ah] ;~ 28F0:194A
cs=0x28f0;eip=0x00194f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91845 les     bx, [bp+var_4] ;~ 28F0:194F
cs=0x28f0;eip=0x001952; 	X(MOV(*(dw*)(raddr(es,bx+0x318)), ax));	// 91846 mov     es:[bx+318h], ax ;~ 28F0:1952
cs=0x28f0;eip=0x001957; 	X(MOV(*(dw*)(raddr(es,bx+0x31A)), dx));	// 91847 mov     es:[bx+31Ah], dx ;~ 28F0:1957
cs=0x28f0;eip=0x00195c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91848 les     bx, [bp+arg_0] ;~ 28F0:195C
cs=0x28f0;eip=0x00195f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x31C))));	// 91849 mov     ax, es:[bx+31Ch] ;~ 28F0:195F
cs=0x28f0;eip=0x001964; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x31E))));	// 91850 mov     dx, es:[bx+31Eh] ;~ 28F0:1964
cs=0x28f0;eip=0x001969; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91851 les     bx, [bp+var_4] ;~ 28F0:1969
cs=0x28f0;eip=0x00196c; 	X(MOV(*(dw*)(raddr(es,bx+0x31C)), ax));	// 91852 mov     es:[bx+31Ch], ax ;~ 28F0:196C
cs=0x28f0;eip=0x001971; 	X(MOV(*(dw*)(raddr(es,bx+0x31E)), dx));	// 91853 mov     es:[bx+31Eh], dx ;~ 28F0:1971
cs=0x28f0;eip=0x001976; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91854 les     bx, [bp+arg_0] ;~ 28F0:1976
cs=0x28f0;eip=0x001979; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 5));	// 91855 cmp     word ptr es:[bx+332h], 5 ;~ 28F0:1979
cs=0x28f0;eip=0x00197f; 	R(JNZ(loc_38e7f));	// 91856 jnz     short loc_38E7F ;~ 28F0:197F
cs=0x28f0;eip=0x001981; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 91857 push    word ptr [bp+var_4+2] ;~ 28F0:1981
cs=0x28f0;eip=0x001984; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 91858 push    word ptr [bp+var_4] ;~ 28F0:1984
cs=0x28f0;eip=0x001987; 	R(CALL(sub_3a769,0));	// 91859 call    sub_3A769 ;~ 28F0:1987
cs=0x28f0;eip=0x00198a; 	T(OR(ax, ax));	// 91860 or      ax, ax ;~ 28F0:198A
cs=0x28f0;eip=0x00198c; 	R(JZ(loc_38e73));	// 91861 jz      short loc_38E73 ;~ 28F0:198C
cs=0x28f0;eip=0x00198e; 	T(SUB(ax, ax));	// 91862 sub     ax, ax ;~ 28F0:198E
cs=0x28f0;eip=0x001990; 	R(JMP(loc_38ef7));	// 91863 jmp     loc_38EF7 ;~ 28F0:1990
loc_38e73:
	// 10308 
cs=0x28f0;eip=0x001993; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91867 les     bx, [bp+var_4] ;~ 28F0:1993
cs=0x28f0;eip=0x001996; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), 6));	// 91868 mov     word ptr es:[bx+332h], 6 ;~ 28F0:1996
cs=0x28f0;eip=0x00199d; 	R(JMP(loc_38eba));	// 91869 jmp     short loc_38EBA ;~ 28F0:199D
loc_38e7f:
	// 10309 
cs=0x28f0;eip=0x00199f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91873 les     bx, [bp+arg_0] ;~ 28F0:199F
cs=0x28f0;eip=0x0019a2; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 6));	// 91874 cmp     word ptr es:[bx+332h], 6 ;~ 28F0:19A2
cs=0x28f0;eip=0x0019a8; 	R(JZ(loc_38e92));	// 91875 jz      short loc_38E92 ;~ 28F0:19A8
cs=0x28f0;eip=0x0019aa; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 7));	// 91876 cmp     word ptr es:[bx+332h], 7 ;~ 28F0:19AA
cs=0x28f0;eip=0x0019b0; 	R(JNZ(loc_38ead));	// 91877 jnz     short loc_38EAD ;~ 28F0:19B0
loc_38e92:
	// 10310 
cs=0x28f0;eip=0x0019b2; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91880 les     bx, [bp+var_4] ;~ 28F0:19B2
cs=0x28f0;eip=0x0019b5; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), 5));	// 91881 mov     word ptr es:[bx+332h], 5 ;~ 28F0:19B5
cs=0x28f0;eip=0x0019bc; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91882 les     bx, [bp+arg_0] ;~ 28F0:19BC
cs=0x28f0;eip=0x0019bf; 	T(SUB(ax, ax));	// 91883 sub     ax, ax ;~ 28F0:19BF
cs=0x28f0;eip=0x0019c1; 	X(MOV(*(dw*)(raddr(es,bx+0x2BE)), ax));	// 91884 mov     es:[bx+2BEh], ax ;~ 28F0:19C1
cs=0x28f0;eip=0x0019c6; 	X(MOV(*(dw*)(raddr(es,bx+0x2BC)), ax));	// 91885 mov     es:[bx+2BCh], ax ;~ 28F0:19C6
cs=0x28f0;eip=0x0019cb; 	R(JMP(loc_38eba));	// 91886 jmp     short loc_38EBA ;~ 28F0:19CB
loc_38ead:
	// 10311 
cs=0x28f0;eip=0x0019cd; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x332))));	// 91890 mov     ax, es:[bx+332h] ;~ 28F0:19CD
cs=0x28f0;eip=0x0019d2; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91891 les     bx, [bp+var_4] ;~ 28F0:19D2
cs=0x28f0;eip=0x0019d5; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), ax));	// 91892 mov     es:[bx+332h], ax ;~ 28F0:19D5
loc_38eba:
	// 10312 
cs=0x28f0;eip=0x0019da; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91896 les     bx, [bp+arg_0] ;~ 28F0:19DA
cs=0x28f0;eip=0x0019dd; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x326))));	// 91897 mov     ax, es:[bx+326h] ;~ 28F0:19DD
cs=0x28f0;eip=0x0019e2; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x328))));	// 91898 mov     dx, es:[bx+328h] ;~ 28F0:19E2
cs=0x28f0;eip=0x0019e7; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91899 les     bx, [bp+var_4] ;~ 28F0:19E7
cs=0x28f0;eip=0x0019ea; 	X(MOV(*(dw*)(raddr(es,bx+0x326)), ax));	// 91900 mov     es:[bx+326h], ax ;~ 28F0:19EA
cs=0x28f0;eip=0x0019ef; 	X(MOV(*(dw*)(raddr(es,bx+0x328)), dx));	// 91901 mov     es:[bx+328h], dx ;~ 28F0:19EF
cs=0x28f0;eip=0x0019f4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91902 les     bx, [bp+arg_0] ;~ 28F0:19F4
cs=0x28f0;eip=0x0019f7; 	T(SUB(ax, ax));	// 91903 sub     ax, ax ;~ 28F0:19F7
cs=0x28f0;eip=0x0019f9; 	X(MOV(*(dw*)(raddr(es,bx+0x328)), ax));	// 91904 mov     es:[bx+328h], ax ;~ 28F0:19F9
cs=0x28f0;eip=0x0019fe; 	X(MOV(*(dw*)(raddr(es,bx+0x326)), ax));	// 91905 mov     es:[bx+326h], ax ;~ 28F0:19FE
cs=0x28f0;eip=0x001a03; 	X(PUSH(es));	// 91906 push    es ;~ 28F0:1A03
cs=0x28f0;eip=0x001a04; 	X(PUSH(bx));	// 91907 push    bx ;~ 28F0:1A04
cs=0x28f0;eip=0x001a05; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 91908 push    word ptr [bp+var_4+2] ;~ 28F0:1A05
cs=0x28f0;eip=0x001a08; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 91909 push    word ptr [bp+var_4] ;~ 28F0:1A08
cs=0x28f0;eip=0x001a0b; 	T(MOV(ax, 0x344));	// 91910 mov     ax, 344h ;~ 28F0:1A0B
cs=0x28f0;eip=0x001a0e; 	X(PUSH(ax));	// 91911 push    ax ;~ 28F0:1A0E
cs=0x28f0;eip=0x001a0f; 	R(CALLF(sub_2113e,0));	// 91912 call    sub_2113E ;~ 28F0:1A0F
cs=0x28f0;eip=0x001a14; 	T(MOV(ax, 1));	// 91913 mov     ax, 1 ;~ 28F0:1A14
loc_38ef7:
	// 10313 
cs=0x28f0;eip=0x001a17; 	X(POP(si));	// 91916 pop     si ;~ 28F0:1A17
cs=0x28f0;eip=0x001a18; 	X(POP(di));	// 91917 pop     di ;~ 28F0:1A18
cs=0x28f0;eip=0x001a19; 	T(MOV(sp, bp));	// 91918 mov     sp, bp ;~ 28F0:1A19
cs=0x28f0;eip=0x001a1b; 	X(POP(bp));	// 91919 pop     bp ;~ 28F0:1A1B
cs=0x28f0;eip=0x001a1c; 	R(RETN(4));	// 91920 retn    4 ;~ 28F0:1A1C
sub_38eff:
	// 91928 
#undef var_8
#define var_8 -8
	// 91930 var_8           = word ptr -8 ;~ 28F0:1A1F
#undef var_6
#define var_6 -6
	// 91931 var_6           = word ptr -6 ;~ 28F0:1A1F
#undef arg_0
#define arg_0 4
	// 91932 arg_0           = word ptr  4 ;~ 28F0:1A1F
#undef arg_2
#define arg_2 6
	// 91933 arg_2           = dword ptr  6 ;~ 28F0:1A1F
cs=0x28f0;eip=0x001a1f; 	X(PUSH(bp));	// 91935 push    bp ;~ 28F0:1A1F
cs=0x28f0;eip=0x001a20; 	T(MOV(bp, sp));	// 91936 mov     bp, sp ;~ 28F0:1A20
cs=0x28f0;eip=0x001a22; 	T(SUB(sp, 8));	// 91937 sub     sp, 8 ;~ 28F0:1A22
cs=0x28f0;eip=0x001a25; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 91938 les     bx, [bp+arg_2] ;~ 28F0:1A25
cs=0x28f0;eip=0x001a28; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 91939 mov     ax, es:[bx+10h] ;~ 28F0:1A28
cs=0x28f0;eip=0x001a2c; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 91940 mov     dx, es:[bx+12h] ;~ 28F0:1A2C
cs=0x28f0;eip=0x001a30; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 91941 mov     [bp+var_8], ax ;~ 28F0:1A30
cs=0x28f0;eip=0x001a33; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 91942 mov     [bp+var_6], dx ;~ 28F0:1A33
cs=0x28f0;eip=0x001a36; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 91943 cmp     [bp+arg_0], 0 ;~ 28F0:1A36
cs=0x28f0;eip=0x001a3a; 	R(JLE(loc_38f2b));	// 91944 jle     short loc_38F2B ;~ 28F0:1A3A
cs=0x28f0;eip=0x001a3c; 	T(CMP(*(dw*)(raddr(es,bx+2)), 0));	// 91945 cmp     word ptr es:[bx+2], 0 ;~ 28F0:1A3C
cs=0x28f0;eip=0x001a41; 	R(JL(loc_38f2b));	// 91946 jl      short loc_38F2B ;~ 28F0:1A41
cs=0x28f0;eip=0x001a43; 	R(JG(loc_38f38));	// 91947 jg      short loc_38F38 ;~ 28F0:1A43
cs=0x28f0;eip=0x001a45; 	T(CMP(*(dw*)(raddr(es,bx)), 0));	// 91948 cmp     word ptr es:[bx], 0 ;~ 28F0:1A45
cs=0x28f0;eip=0x001a49; 	R(JNZ(loc_38f38));	// 91949 jnz     short loc_38F38 ;~ 28F0:1A49
loc_38f2b:
	// 10314 
cs=0x28f0;eip=0x001a4b; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 91953 cmp     [bp+arg_0], 0 ;~ 28F0:1A4B
cs=0x28f0;eip=0x001a4f; 	R(JGE(loc_38f48));	// 91954 jge     short loc_38F48 ;~ 28F0:1A4F
cs=0x28f0;eip=0x001a51; 	T(CMP(*(dw*)(raddr(es,bx+2)), 0));	// 91955 cmp     word ptr es:[bx+2], 0 ;~ 28F0:1A51
cs=0x28f0;eip=0x001a56; 	R(JGE(loc_38f48));	// 91956 jge     short loc_38F48 ;~ 28F0:1A56
loc_38f38:
	// 10315 
cs=0x28f0;eip=0x001a58; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 91960 mov     ax, es:[bx+14h] ;~ 28F0:1A58
cs=0x28f0;eip=0x001a5c; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x16))));	// 91961 mov     dx, es:[bx+16h] ;~ 28F0:1A5C
cs=0x28f0;eip=0x001a60; 	X(ADD(*(dw*)(raddr(es,bx+0x10)), ax));	// 91962 add     es:[bx+10h], ax ;~ 28F0:1A60
cs=0x28f0;eip=0x001a64; 	X(ADC(*(dw*)(raddr(es,bx+0x12)), dx));	// 91963 adc     es:[bx+12h], dx ;~ 28F0:1A64
loc_38f48:
	// 10316 
cs=0x28f0;eip=0x001a68; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 91967 push    word ptr [bp+arg_2+2] ;~ 28F0:1A68
cs=0x28f0;eip=0x001a6b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 91968 push    word ptr [bp+arg_2] ;~ 28F0:1A6B
cs=0x28f0;eip=0x001a6e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 91969 push    [bp+arg_0] ;~ 28F0:1A6E
cs=0x28f0;eip=0x001a71; 	R(CALL(sub_3be56,0));	// 91970 call    sub_3BE56 ;~ 28F0:1A71
cs=0x28f0;eip=0x001a74; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 91971 push    word ptr [bp+arg_2+2] ;~ 28F0:1A74
cs=0x28f0;eip=0x001a77; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 91972 push    word ptr [bp+arg_2] ;~ 28F0:1A77
cs=0x28f0;eip=0x001a7a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 91973 mov     ax, [bp+arg_0] ;~ 28F0:1A7A
cs=0x28f0;eip=0x001a7d; 	T(NEG(ax));	// 91974 neg     ax ;~ 28F0:1A7D
cs=0x28f0;eip=0x001a7f; 	X(PUSH(ax));	// 91975 push    ax ;~ 28F0:1A7F
cs=0x28f0;eip=0x001a80; 	R(CALL(sub_3bc2a,0));	// 91976 call    sub_3BC2A ;~ 28F0:1A80
cs=0x28f0;eip=0x001a83; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 91977 push    word ptr [bp+arg_2+2] ;~ 28F0:1A83
cs=0x28f0;eip=0x001a86; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 91978 push    word ptr [bp+arg_2] ;~ 28F0:1A86
cs=0x28f0;eip=0x001a89; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 91979 les     bx, [bp+arg_2] ;~ 28F0:1A89
cs=0x28f0;eip=0x001a8c; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 91980 push    word ptr es:[bx+12h] ;~ 28F0:1A8C
cs=0x28f0;eip=0x001a90; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 91981 push    word ptr es:[bx+10h] ;~ 28F0:1A90
cs=0x28f0;eip=0x001a94; 	R(CALL(sub_3b9eb,0));	// 91982 call    sub_3B9EB ;~ 28F0:1A94
cs=0x28f0;eip=0x001a97; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 91983 les     bx, [bp+arg_2] ;~ 28F0:1A97
cs=0x28f0;eip=0x001a9a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 91984 mov     ax, [bp+var_8] ;~ 28F0:1A9A
cs=0x28f0;eip=0x001a9d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 91985 mov     dx, [bp+var_6] ;~ 28F0:1A9D
cs=0x28f0;eip=0x001aa0; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), ax));	// 91986 mov     es:[bx+10h], ax ;~ 28F0:1AA0
cs=0x28f0;eip=0x001aa4; 	X(MOV(*(dw*)(raddr(es,bx+0x12)), dx));	// 91987 mov     es:[bx+12h], dx ;~ 28F0:1AA4
cs=0x28f0;eip=0x001aa8; 	T(MOV(sp, bp));	// 91988 mov     sp, bp ;~ 28F0:1AA8
cs=0x28f0;eip=0x001aaa; 	X(POP(bp));	// 91989 pop     bp ;~ 28F0:1AAA
cs=0x28f0;eip=0x001aab; 	R(RETN(6));	// 91990 retn    6 ;~ 28F0:1AAB
sub_38f8e:
	// 91998 
#undef var_8
#define var_8 -8
	// 92000 var_8           = word ptr -8 ;~ 28F0:1AAE
#undef var_6
#define var_6 -6
	// 92001 var_6           = word ptr -6 ;~ 28F0:1AAE
#undef arg_0
#define arg_0 4
	// 92002 arg_0           = word ptr  4 ;~ 28F0:1AAE
#undef arg_2
#define arg_2 6
	// 92003 arg_2           = dword ptr  6 ;~ 28F0:1AAE
cs=0x28f0;eip=0x001aae; 	X(PUSH(bp));	// 92005 push    bp ;~ 28F0:1AAE
cs=0x28f0;eip=0x001aaf; 	T(MOV(bp, sp));	// 92006 mov     bp, sp ;~ 28F0:1AAF
cs=0x28f0;eip=0x001ab1; 	T(SUB(sp, 8));	// 92007 sub     sp, 8 ;~ 28F0:1AB1
cs=0x28f0;eip=0x001ab4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 92008 les     bx, [bp+arg_2] ;~ 28F0:1AB4
cs=0x28f0;eip=0x001ab7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 92009 mov     ax, es:[bx+10h] ;~ 28F0:1AB7
cs=0x28f0;eip=0x001abb; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 92010 mov     dx, es:[bx+12h] ;~ 28F0:1ABB
cs=0x28f0;eip=0x001abf; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 92011 mov     [bp+var_8], ax ;~ 28F0:1ABF
cs=0x28f0;eip=0x001ac2; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 92012 mov     [bp+var_6], dx ;~ 28F0:1AC2
cs=0x28f0;eip=0x001ac5; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 92013 cmp     [bp+arg_0], 0 ;~ 28F0:1AC5
cs=0x28f0;eip=0x001ac9; 	R(JLE(loc_38fb2));	// 92014 jle     short loc_38FB2 ;~ 28F0:1AC9
cs=0x28f0;eip=0x001acb; 	T(CMP(*(dw*)(raddr(es,bx+2)), 0));	// 92015 cmp     word ptr es:[bx+2], 0 ;~ 28F0:1ACB
cs=0x28f0;eip=0x001ad0; 	R(JL(loc_38fc7));	// 92016 jl      short loc_38FC7 ;~ 28F0:1AD0
loc_38fb2:
	// 10317 
cs=0x28f0;eip=0x001ad2; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 92019 cmp     [bp+arg_0], 0 ;~ 28F0:1AD2
cs=0x28f0;eip=0x001ad6; 	R(JGE(loc_38fd7));	// 92020 jge     short loc_38FD7 ;~ 28F0:1AD6
cs=0x28f0;eip=0x001ad8; 	T(CMP(*(dw*)(raddr(es,bx+2)), 0));	// 92021 cmp     word ptr es:[bx+2], 0 ;~ 28F0:1AD8
cs=0x28f0;eip=0x001add; 	R(JL(loc_38fd7));	// 92022 jl      short loc_38FD7 ;~ 28F0:1ADD
cs=0x28f0;eip=0x001adf; 	R(JG(loc_38fc7));	// 92023 jg      short loc_38FC7 ;~ 28F0:1ADF
cs=0x28f0;eip=0x001ae1; 	T(CMP(*(dw*)(raddr(es,bx)), 0));	// 92024 cmp     word ptr es:[bx], 0 ;~ 28F0:1AE1
cs=0x28f0;eip=0x001ae5; 	R(JZ(loc_38fd7));	// 92025 jz      short loc_38FD7 ;~ 28F0:1AE5
loc_38fc7:
	// 10318 
cs=0x28f0;eip=0x001ae7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 92029 mov     ax, es:[bx+14h] ;~ 28F0:1AE7
cs=0x28f0;eip=0x001aeb; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x16))));	// 92030 mov     dx, es:[bx+16h] ;~ 28F0:1AEB
cs=0x28f0;eip=0x001aef; 	X(ADD(*(dw*)(raddr(es,bx+0x10)), ax));	// 92031 add     es:[bx+10h], ax ;~ 28F0:1AEF
cs=0x28f0;eip=0x001af3; 	X(ADC(*(dw*)(raddr(es,bx+0x12)), dx));	// 92032 adc     es:[bx+12h], dx ;~ 28F0:1AF3
loc_38fd7:
	// 10319 
cs=0x28f0;eip=0x001af7; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 92036 push    word ptr [bp+arg_2+2] ;~ 28F0:1AF7
cs=0x28f0;eip=0x001afa; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 92037 push    word ptr [bp+arg_2] ;~ 28F0:1AFA
cs=0x28f0;eip=0x001afd; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 92038 push    [bp+arg_0] ;~ 28F0:1AFD
cs=0x28f0;eip=0x001b00; 	R(CALL(sub_3c1fa,0));	// 92039 call    sub_3C1FA ;~ 28F0:1B00
cs=0x28f0;eip=0x001b03; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 92040 push    word ptr [bp+arg_2+2] ;~ 28F0:1B03
cs=0x28f0;eip=0x001b06; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 92041 push    word ptr [bp+arg_2] ;~ 28F0:1B06
cs=0x28f0;eip=0x001b09; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 92042 push    [bp+arg_0] ;~ 28F0:1B09
cs=0x28f0;eip=0x001b0c; 	R(CALL(sub_3bfce,0));	// 92043 call    sub_3BFCE ;~ 28F0:1B0C
cs=0x28f0;eip=0x001b0f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 92044 push    word ptr [bp+arg_2+2] ;~ 28F0:1B0F
cs=0x28f0;eip=0x001b12; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 92045 push    word ptr [bp+arg_2] ;~ 28F0:1B12
cs=0x28f0;eip=0x001b15; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 92046 les     bx, [bp+arg_2] ;~ 28F0:1B15
cs=0x28f0;eip=0x001b18; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 92047 push    word ptr es:[bx+12h] ;~ 28F0:1B18
cs=0x28f0;eip=0x001b1c; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 92048 push    word ptr es:[bx+10h] ;~ 28F0:1B1C
cs=0x28f0;eip=0x001b20; 	R(CALL(sub_3b9eb,0));	// 92049 call    sub_3B9EB ;~ 28F0:1B20
cs=0x28f0;eip=0x001b23; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 92050 les     bx, [bp+arg_2] ;~ 28F0:1B23
cs=0x28f0;eip=0x001b26; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 92051 mov     ax, [bp+var_8] ;~ 28F0:1B26
cs=0x28f0;eip=0x001b29; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 92052 mov     dx, [bp+var_6] ;~ 28F0:1B29
cs=0x28f0;eip=0x001b2c; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), ax));	// 92053 mov     es:[bx+10h], ax ;~ 28F0:1B2C
cs=0x28f0;eip=0x001b30; 	X(MOV(*(dw*)(raddr(es,bx+0x12)), dx));	// 92054 mov     es:[bx+12h], dx ;~ 28F0:1B30
cs=0x28f0;eip=0x001b34; 	T(MOV(sp, bp));	// 92055 mov     sp, bp ;~ 28F0:1B34
cs=0x28f0;eip=0x001b36; 	X(POP(bp));	// 92056 pop     bp ;~ 28F0:1B36
cs=0x28f0;eip=0x001b37; 	R(RETN(6));	// 92057 retn    6 ;~ 28F0:1B37
sub_3901a:
	// 92065 
#undef var_8
#define var_8 -8
	// 92067 var_8           = word ptr -8 ;~ 28F0:1B3A
#undef var_6
#define var_6 -6
	// 92068 var_6           = dword ptr -6 ;~ 28F0:1B3A
#undef var_2
#define var_2 -2
	// 92069 var_2           = word ptr -2 ;~ 28F0:1B3A
#undef arg_0
#define arg_0 4
	// 92070 arg_0           = dword ptr  4 ;~ 28F0:1B3A
cs=0x28f0;eip=0x001b3a; 	X(PUSH(bp));	// 92072 push    bp ;~ 28F0:1B3A
cs=0x28f0;eip=0x001b3b; 	T(MOV(bp, sp));	// 92073 mov     bp, sp ;~ 28F0:1B3B
cs=0x28f0;eip=0x001b3d; 	T(SUB(sp, 8));	// 92074 sub     sp, 8 ;~ 28F0:1B3D
cs=0x28f0;eip=0x001b40; 	X(PUSH(di));	// 92075 push    di ;~ 28F0:1B40
cs=0x28f0;eip=0x001b41; 	X(PUSH(si));	// 92076 push    si ;~ 28F0:1B41
cs=0x28f0;eip=0x001b42; 	T(SUB(di, di));	// 92077 sub     di, di ;~ 28F0:1B42
cs=0x28f0;eip=0x001b44; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 92078 mov     ax, word ptr [bp+arg_0] ;~ 28F0:1B44
cs=0x28f0;eip=0x001b47; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 92079 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:1B47
cs=0x28f0;eip=0x001b4a; 	T(ADD(ax, 0x238));	// 92080 add     ax, 238h ;~ 28F0:1B4A
cs=0x28f0;eip=0x001b4d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 92081 mov     word ptr [bp+var_6], ax ;~ 28F0:1B4D
cs=0x28f0;eip=0x001b50; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 92082 mov     word ptr [bp+var_6+2], dx ;~ 28F0:1B50
cs=0x28f0;eip=0x001b53; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ds));	// 92083 mov     [bp+var_8], ds ;~ 28F0:1B53
cs=0x28f0;eip=0x001b56; 	T(LDS(si, *(dd*)(raddr(ss,bp+var_6))));	// 92084 lds     si, [bp+var_6] ;~ 28F0:1B56
loc_39039:
	// 10320 
cs=0x28f0;eip=0x001b59; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 92087 mov     ax, [si] ;~ 28F0:1B59
cs=0x28f0;eip=0x001b5b; 	T(CWD);	// 92088 cwd ;~ 28F0:1B5B
cs=0x28f0;eip=0x001b5c; 	T(MOV(dh, dl));	// 92089 mov     dh, dl ;~ 28F0:1B5C
cs=0x28f0;eip=0x001b5e; 	T(MOV(dl, ah));	// 92090 mov     dl, ah ;~ 28F0:1B5E
cs=0x28f0;eip=0x001b60; 	T(MOV(ah, al));	// 92091 mov     ah, al ;~ 28F0:1B60
cs=0x28f0;eip=0x001b62; 	T(SUB(al, al));	// 92092 sub     al, al ;~ 28F0:1B62
cs=0x28f0;eip=0x001b64; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92093 les     bx, [bp+arg_0] ;~ 28F0:1B64
cs=0x28f0;eip=0x001b67; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x21A))));	// 92094 cmp     dx, es:[bx+21Ah] ;~ 28F0:1B67
cs=0x28f0;eip=0x001b6c; 	R(JL(loc_3907f));	// 92095 jl      short loc_3907F ;~ 28F0:1B6C
cs=0x28f0;eip=0x001b6e; 	R(JG(loc_39057));	// 92096 jg      short loc_39057 ;~ 28F0:1B6E
cs=0x28f0;eip=0x001b70; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x218))));	// 92097 cmp     ax, es:[bx+218h] ;~ 28F0:1B70
cs=0x28f0;eip=0x001b75; 	R(JC(loc_3907f));	// 92098 jb      short loc_3907F ;~ 28F0:1B75
loc_39057:
	// 10321 
cs=0x28f0;eip=0x001b77; 	T(MOV(ds, *(dw*)(raddr(ss,bp+var_8))));	// 92102 mov     ds, [bp+var_8] ;~ 28F0:1B77
cs=0x28f0;eip=0x001b7a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), di));	// 92103 mov     [bp+var_2], di ;~ 28F0:1B7A
cs=0x28f0;eip=0x001b7d; 	T(OR(di, di));	// 92104 or      di, di ;~ 28F0:1B7D
cs=0x28f0;eip=0x001b7f; 	R(JNZ(loc_3908a));	// 92105 jnz     short loc_3908A ;~ 28F0:1B7F
cs=0x28f0;eip=0x001b81; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92106 les     bx, [bp+arg_0] ;~ 28F0:1B81
cs=0x28f0;eip=0x001b84; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x24A))));	// 92107 mov     ax, es:[bx+24Ah] ;~ 28F0:1B84
cs=0x28f0;eip=0x001b89; 	T(CWD);	// 92108 cwd ;~ 28F0:1B89
cs=0x28f0;eip=0x001b8a; 	T(MOV(dh, dl));	// 92109 mov     dh, dl ;~ 28F0:1B8A
cs=0x28f0;eip=0x001b8c; 	T(MOV(dl, ah));	// 92110 mov     dl, ah ;~ 28F0:1B8C
cs=0x28f0;eip=0x001b8e; 	T(MOV(ah, al));	// 92111 mov     ah, al ;~ 28F0:1B8E
cs=0x28f0;eip=0x001b90; 	T(SUB(al, al));	// 92112 sub     al, al ;~ 28F0:1B90
cs=0x28f0;eip=0x001b92; 	X(MOV(*(dw*)(raddr(es,bx+0x1C4)), ax));	// 92113 mov     es:[bx+1C4h], ax ;~ 28F0:1B92
cs=0x28f0;eip=0x001b97; 	X(MOV(*(dw*)(raddr(es,bx+0x1C6)), dx));	// 92114 mov     es:[bx+1C6h], dx ;~ 28F0:1B97
cs=0x28f0;eip=0x001b9c; 	R(JMP(loc_3910b));	// 92115 jmp     loc_3910B ;~ 28F0:1B9C
loc_3907f:
	// 10322 
cs=0x28f0;eip=0x001b9f; 	T(ADD(si, 2));	// 92120 add     si, 2 ;~ 28F0:1B9F
cs=0x28f0;eip=0x001ba2; 	T(INC(di));	// 92121 inc     di ;~ 28F0:1BA2
cs=0x28f0;eip=0x001ba3; 	T(CMP(di, 5));	// 92122 cmp     di, 5 ;~ 28F0:1BA3
cs=0x28f0;eip=0x001ba6; 	R(JGE(loc_39057));	// 92123 jge     short loc_39057 ;~ 28F0:1BA6
cs=0x28f0;eip=0x001ba8; 	R(JMP(loc_39039));	// 92124 jmp     short loc_39039 ;~ 28F0:1BA8
loc_3908a:
	// 10323 
cs=0x28f0;eip=0x001baa; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 92128 mov     ax, [bp+var_2] ;~ 28F0:1BAA
cs=0x28f0;eip=0x001bad; 	T(SHL(ax, 1));	// 92129 shl     ax, 1 ;~ 28F0:1BAD
cs=0x28f0;eip=0x001baf; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 92130 add     ax, word ptr [bp+arg_0] ;~ 28F0:1BAF
cs=0x28f0;eip=0x001bb2; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 92131 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:1BB2
cs=0x28f0;eip=0x001bb5; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 92132 mov     word ptr [bp+var_6], ax ;~ 28F0:1BB5
cs=0x28f0;eip=0x001bb8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 92133 mov     word ptr [bp+var_6+2], dx ;~ 28F0:1BB8
cs=0x28f0;eip=0x001bbb; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 92134 les     bx, [bp+var_6] ;~ 28F0:1BBB
cs=0x28f0;eip=0x001bbe; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x238))));	// 92135 mov     ax, es:[bx+238h] ;~ 28F0:1BBE
cs=0x28f0;eip=0x001bc3; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x236))));	// 92136 sub     ax, es:[bx+236h] ;~ 28F0:1BC3
cs=0x28f0;eip=0x001bc8; 	T(CWD);	// 92137 cwd ;~ 28F0:1BC8
cs=0x28f0;eip=0x001bc9; 	X(PUSH(dx));	// 92138 push    dx ;~ 28F0:1BC9
cs=0x28f0;eip=0x001bca; 	X(PUSH(ax));	// 92139 push    ax ;~ 28F0:1BCA
cs=0x28f0;eip=0x001bcb; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x24A))));	// 92140 mov     ax, es:[bx+24Ah] ;~ 28F0:1BCB
cs=0x28f0;eip=0x001bd0; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x248))));	// 92141 sub     ax, es:[bx+248h] ;~ 28F0:1BD0
cs=0x28f0;eip=0x001bd5; 	T(CWD);	// 92142 cwd ;~ 28F0:1BD5
cs=0x28f0;eip=0x001bd6; 	X(PUSH(dx));	// 92143 push    dx ;~ 28F0:1BD6
cs=0x28f0;eip=0x001bd7; 	X(PUSH(ax));	// 92144 push    ax ;~ 28F0:1BD7
cs=0x28f0;eip=0x001bd8; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x236))));	// 92145 mov     ax, es:[bx+236h] ;~ 28F0:1BD8
cs=0x28f0;eip=0x001bdd; 	T(CWD);	// 92146 cwd ;~ 28F0:1BDD
cs=0x28f0;eip=0x001bde; 	T(MOV(dh, dl));	// 92147 mov     dh, dl ;~ 28F0:1BDE
cs=0x28f0;eip=0x001be0; 	T(MOV(dl, ah));	// 92148 mov     dl, ah ;~ 28F0:1BE0
cs=0x28f0;eip=0x001be2; 	T(MOV(ah, al));	// 92149 mov     ah, al ;~ 28F0:1BE2
cs=0x28f0;eip=0x001be4; 	T(SUB(al, al));	// 92150 sub     al, al ;~ 28F0:1BE4
cs=0x28f0;eip=0x001be6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92151 les     bx, [bp+arg_0] ;~ 28F0:1BE6
cs=0x28f0;eip=0x001be9; 	T(MOV(cx, *(dw*)(raddr(es,bx+0x218))));	// 92152 mov     cx, es:[bx+218h] ;~ 28F0:1BE9
cs=0x28f0;eip=0x001bee; 	T(MOV(si, *(dw*)(raddr(es,bx+0x21A))));	// 92153 mov     si, es:[bx+21Ah] ;~ 28F0:1BEE
cs=0x28f0;eip=0x001bf3; 	T(SUB(cx, ax));	// 92154 sub     cx, ax ;~ 28F0:1BF3
cs=0x28f0;eip=0x001bf5; 	T(SBB(si, dx));	// 92155 sbb     si, dx ;~ 28F0:1BF5
cs=0x28f0;eip=0x001bf7; 	X(PUSH(si));	// 92156 push    si ;~ 28F0:1BF7
cs=0x28f0;eip=0x001bf8; 	X(PUSH(cx));	// 92157 push    cx ;~ 28F0:1BF8
cs=0x28f0;eip=0x001bf9; 	R(CALLF(sub_105c2,0));	// 92158 call    sub_105C2 ;~ 28F0:1BF9
cs=0x28f0;eip=0x001bfe; 	X(PUSH(dx));	// 92159 push    dx ;~ 28F0:1BFE
cs=0x28f0;eip=0x001bff; 	X(PUSH(ax));	// 92160 push    ax ;~ 28F0:1BFF
cs=0x28f0;eip=0x001c00; 	R(CALLF(sub_10526,0));	// 92161 call    sub_10526 ;~ 28F0:1C00
cs=0x28f0;eip=0x001c05; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 92162 les     bx, [bp+var_6] ;~ 28F0:1C05
cs=0x28f0;eip=0x001c08; 	T(MOV(cx, ax));	// 92163 mov     cx, ax ;~ 28F0:1C08
cs=0x28f0;eip=0x001c0a; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x248))));	// 92164 mov     ax, es:[bx+248h] ;~ 28F0:1C0A
cs=0x28f0;eip=0x001c0f; 	T(MOV(bx, dx));	// 92165 mov     bx, dx ;~ 28F0:1C0F
cs=0x28f0;eip=0x001c11; 	T(CWD);	// 92166 cwd ;~ 28F0:1C11
cs=0x28f0;eip=0x001c12; 	T(MOV(dh, dl));	// 92167 mov     dh, dl ;~ 28F0:1C12
cs=0x28f0;eip=0x001c14; 	T(MOV(dl, ah));	// 92168 mov     dl, ah ;~ 28F0:1C14
cs=0x28f0;eip=0x001c16; 	T(MOV(ah, al));	// 92169 mov     ah, al ;~ 28F0:1C16
cs=0x28f0;eip=0x001c18; 	T(SUB(al, al));	// 92170 sub     al, al ;~ 28F0:1C18
cs=0x28f0;eip=0x001c1a; 	T(ADD(cx, ax));	// 92171 add     cx, ax ;~ 28F0:1C1A
cs=0x28f0;eip=0x001c1c; 	T(ADC(bx, dx));	// 92172 adc     bx, dx ;~ 28F0:1C1C
cs=0x28f0;eip=0x001c1e; 	T(LES(si, *(dd*)(raddr(ss,bp+arg_0))));	// 92173 les     si, [bp+arg_0] ;~ 28F0:1C1E
cs=0x28f0;eip=0x001c21; 	X(MOV(*(dw*)(raddr(es,si+0x1C4)), cx));	// 92174 mov     es:[si+1C4h], cx ;~ 28F0:1C21
cs=0x28f0;eip=0x001c26; 	X(MOV(*(dw*)(raddr(es,si+0x1C6)), bx));	// 92175 mov     es:[si+1C6h], bx ;~ 28F0:1C26
loc_3910b:
	// 10324 
cs=0x28f0;eip=0x001c2b; 	X(POP(si));	// 92178 pop     si ;~ 28F0:1C2B
cs=0x28f0;eip=0x001c2c; 	X(POP(di));	// 92179 pop     di ;~ 28F0:1C2C
cs=0x28f0;eip=0x001c2d; 	T(MOV(sp, bp));	// 92180 mov     sp, bp ;~ 28F0:1C2D
cs=0x28f0;eip=0x001c2f; 	X(POP(bp));	// 92181 pop     bp ;~ 28F0:1C2F
cs=0x28f0;eip=0x001c30; 	R(RETN(4));	// 92182 retn    4 ;~ 28F0:1C30
sub_39113:
	// 92190 
#undef var_4
#define var_4 -4
	// 92192 var_4           = dword ptr -4 ;~ 28F0:1C33
#undef arg_0
#define arg_0 4
	// 92193 arg_0           = word ptr  4 ;~ 28F0:1C33
#undef arg_2
#define arg_2 6
	// 92194 arg_2           = word ptr  6 ;~ 28F0:1C33
cs=0x28f0;eip=0x001c33; 	X(PUSH(bp));	// 92196 push    bp ;~ 28F0:1C33
cs=0x28f0;eip=0x001c34; 	T(MOV(bp, sp));	// 92197 mov     bp, sp ;~ 28F0:1C34
cs=0x28f0;eip=0x001c36; 	T(SUB(sp, 4));	// 92198 sub     sp, 4 ;~ 28F0:1C36
cs=0x28f0;eip=0x001c39; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 92199 push    [bp+arg_2] ;~ 28F0:1C39
cs=0x28f0;eip=0x001c3c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 92200 push    [bp+arg_0] ;~ 28F0:1C3C
cs=0x28f0;eip=0x001c3f; 	R(CALL(sub_3901a,0));	// 92201 call    sub_3901A ;~ 28F0:1C3F
cs=0x28f0;eip=0x001c42; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 92202 mov     ax, [bp+arg_0] ;~ 28F0:1C42
cs=0x28f0;eip=0x001c45; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 92203 mov     dx, [bp+arg_2] ;~ 28F0:1C45
cs=0x28f0;eip=0x001c48; 	T(ADD(ax, 0x1C0));	// 92204 add     ax, 1C0h ;~ 28F0:1C48
cs=0x28f0;eip=0x001c4b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 92205 mov     word ptr [bp+var_4], ax ;~ 28F0:1C4B
cs=0x28f0;eip=0x001c4e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 92206 mov     word ptr [bp+var_4+2], dx ;~ 28F0:1C4E
cs=0x28f0;eip=0x001c51; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 92207 les     bx, [bp+var_4] ;~ 28F0:1C51
cs=0x28f0;eip=0x001c54; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92208 mov     ax, es:[bx] ;~ 28F0:1C54
cs=0x28f0;eip=0x001c57; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92209 mov     dx, es:[bx+2] ;~ 28F0:1C57
cs=0x28f0;eip=0x001c5b; 	T(CMP(*(dw*)(raddr(es,bx+4)), ax));	// 92210 cmp     es:[bx+4], ax ;~ 28F0:1C5B
cs=0x28f0;eip=0x001c5f; 	R(JNZ(loc_39147));	// 92211 jnz     short loc_39147 ;~ 28F0:1C5F
cs=0x28f0;eip=0x001c61; 	T(CMP(*(dw*)(raddr(es,bx+6)), dx));	// 92212 cmp     es:[bx+6], dx ;~ 28F0:1C61
cs=0x28f0;eip=0x001c65; 	R(JZ(loc_39154));	// 92213 jz      short loc_39154 ;~ 28F0:1C65
loc_39147:
	// 10325 
cs=0x28f0;eip=0x001c67; 	X(PUSH(es));	// 92216 push    es ;~ 28F0:1C67
cs=0x28f0;eip=0x001c68; 	X(PUSH(bx));	// 92217 push    bx ;~ 28F0:1C68
cs=0x28f0;eip=0x001c69; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 92218 push    word ptr es:[bx+12h] ;~ 28F0:1C69
cs=0x28f0;eip=0x001c6d; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 92219 push    word ptr es:[bx+10h] ;~ 28F0:1C6D
cs=0x28f0;eip=0x001c71; 	R(CALL(sub_3b9eb,0));	// 92220 call    sub_3B9EB ;~ 28F0:1C71
loc_39154:
	// 10326 
cs=0x28f0;eip=0x001c74; 	T(MOV(sp, bp));	// 92223 mov     sp, bp ;~ 28F0:1C74
cs=0x28f0;eip=0x001c76; 	X(POP(bp));	// 92224 pop     bp ;~ 28F0:1C76
cs=0x28f0;eip=0x001c77; 	R(RETN(4));	// 92225 retn    4 ;~ 28F0:1C77
sub_3915a:
	// 92233 
#undef var_1c
#define var_1c -0x1C
	// 92235 var_1C          = word ptr -1Ch ;~ 28F0:1C7A
#undef var_1a
#define var_1a -0x1A
	// 92236 var_1A          = word ptr -1Ah ;~ 28F0:1C7A
#undef var_18
#define var_18 -0x18
	// 92237 var_18          = word ptr -18h ;~ 28F0:1C7A
#undef var_16
#define var_16 -0x16
	// 92238 var_16          = word ptr -16h ;~ 28F0:1C7A
#undef var_14
#define var_14 -0x14
	// 92239 var_14          = word ptr -14h ;~ 28F0:1C7A
#undef var_12
#define var_12 -0x12
	// 92240 var_12          = word ptr -12h ;~ 28F0:1C7A
#undef var_10
#define var_10 -0x10
	// 92241 var_10          = word ptr -10h ;~ 28F0:1C7A
#undef var_e
#define var_e -0x0E
	// 92242 var_E           = word ptr -0Eh ;~ 28F0:1C7A
#undef var_c
#define var_c -0x0C
	// 92243 var_C           = word ptr -0Ch ;~ 28F0:1C7A
#undef var_a
#define var_a -0x0A
	// 92244 var_A           = word ptr -0Ah ;~ 28F0:1C7A
#undef var_8
#define var_8 -8
	// 92245 var_8           = dword ptr -8 ;~ 28F0:1C7A
#undef var_4
#define var_4 -4
	// 92246 var_4           = dword ptr -4 ;~ 28F0:1C7A
#undef arg_0
#define arg_0 4
	// 92247 arg_0           = dword ptr  4 ;~ 28F0:1C7A
cs=0x28f0;eip=0x001c7a; 	X(PUSH(bp));	// 92249 push    bp ;~ 28F0:1C7A
cs=0x28f0;eip=0x001c7b; 	T(MOV(bp, sp));	// 92250 mov     bp, sp ;~ 28F0:1C7B
cs=0x28f0;eip=0x001c7d; 	T(SUB(sp, 0x1C));	// 92251 sub     sp, 1Ch ;~ 28F0:1C7D
cs=0x28f0;eip=0x001c80; 	X(PUSH(di));	// 92252 push    di ;~ 28F0:1C80
cs=0x28f0;eip=0x001c81; 	X(PUSH(si));	// 92253 push    si ;~ 28F0:1C81
cs=0x28f0;eip=0x001c82; 	T(SUB(ax, ax));	// 92254 sub     ax, ax ;~ 28F0:1C82
cs=0x28f0;eip=0x001c84; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 92255 mov     [bp+var_A], ax ;~ 28F0:1C84
cs=0x28f0;eip=0x001c87; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 92256 mov     [bp+var_C], ax ;~ 28F0:1C87
cs=0x28f0;eip=0x001c8a; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 92257 mov     ax, word ptr [bp+arg_0] ;~ 28F0:1C8A
cs=0x28f0;eip=0x001c8d; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 92258 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:1C8D
cs=0x28f0;eip=0x001c90; 	T(ADD(ax, 0x1C0));	// 92259 add     ax, 1C0h ;~ 28F0:1C90
cs=0x28f0;eip=0x001c93; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 92260 mov     word ptr [bp+var_8], ax ;~ 28F0:1C93
cs=0x28f0;eip=0x001c96; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 92261 mov     word ptr [bp+var_8+2], dx ;~ 28F0:1C96
cs=0x28f0;eip=0x001c99; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 92262 mov     ax, word ptr [bp+arg_0] ;~ 28F0:1C99
cs=0x28f0;eip=0x001c9c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 92263 mov     word ptr [bp+var_4], ax ;~ 28F0:1C9C
cs=0x28f0;eip=0x001c9f; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 92264 mov     word ptr [bp+var_4+2], dx ;~ 28F0:1C9F
cs=0x28f0;eip=0x001ca2; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 92265 les     bx, [bp+var_4] ;~ 28F0:1CA2
cs=0x28f0;eip=0x001ca5; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92266 mov     ax, es:[bx] ;~ 28F0:1CA5
cs=0x28f0;eip=0x001ca8; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92267 mov     dx, es:[bx+2] ;~ 28F0:1CA8
cs=0x28f0;eip=0x001cac; 	T(CMP(*(dw*)(raddr(es,bx+0x1A)), dx));	// 92268 cmp     es:[bx+1Ah], dx ;~ 28F0:1CAC
cs=0x28f0;eip=0x001cb0; 	R(JL(loc_391af));	// 92269 jl      short loc_391AF ;~ 28F0:1CB0
cs=0x28f0;eip=0x001cb2; 	R(JG(loc_3919a));	// 92270 jg      short loc_3919A ;~ 28F0:1CB2
cs=0x28f0;eip=0x001cb4; 	T(CMP(*(dw*)(raddr(es,bx+0x18)), ax));	// 92271 cmp     es:[bx+18h], ax ;~ 28F0:1CB4
cs=0x28f0;eip=0x001cb8; 	R(JC(loc_391af));	// 92272 jb      short loc_391AF ;~ 28F0:1CB8
loc_3919a:
	// 10327 
cs=0x28f0;eip=0x001cba; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92275 mov     ax, es:[bx] ;~ 28F0:1CBA
cs=0x28f0;eip=0x001cbd; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92276 mov     dx, es:[bx+2] ;~ 28F0:1CBD
cs=0x28f0;eip=0x001cc1; 	T(CMP(*(dw*)(raddr(es,bx+0x1E)), dx));	// 92277 cmp     es:[bx+1Eh], dx ;~ 28F0:1CC1
cs=0x28f0;eip=0x001cc5; 	R(JL(loc_391d9));	// 92278 jl      short loc_391D9 ;~ 28F0:1CC5
cs=0x28f0;eip=0x001cc7; 	R(JG(loc_391af));	// 92279 jg      short loc_391AF ;~ 28F0:1CC7
cs=0x28f0;eip=0x001cc9; 	T(CMP(*(dw*)(raddr(es,bx+0x1C)), ax));	// 92280 cmp     es:[bx+1Ch], ax ;~ 28F0:1CC9
cs=0x28f0;eip=0x001ccd; 	R(JBE(loc_391d9));	// 92281 jbe     short loc_391D9 ;~ 28F0:1CCD
loc_391af:
	// 10328 
cs=0x28f0;eip=0x001ccf; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92285 mov     ax, es:[bx] ;~ 28F0:1CCF
cs=0x28f0;eip=0x001cd2; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92286 mov     dx, es:[bx+2] ;~ 28F0:1CD2
cs=0x28f0;eip=0x001cd6; 	T(MOV(cl, 5));	// 92287 mov     cl, 5 ;~ 28F0:1CD6
cs=0x28f0;eip=0x001cd8; 	R(CALLF(sub_10240,0));	// 92288 call    sub_10240 ;~ 28F0:1CD8
cs=0x28f0;eip=0x001cdd; 	X(PUSH(ax));	// 92289 push    ax ;~ 28F0:1CDD
cs=0x28f0;eip=0x001cde; 	R(CALLF(sub_24cf8,0));	// 92290 call    sub_24CF8 ;~ 28F0:1CDE
cs=0x28f0;eip=0x001ce3; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 92291 mov     [bp+var_10], ax ;~ 28F0:1CE3
cs=0x28f0;eip=0x001ce6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 92292 les     bx, [bp+var_8] ;~ 28F0:1CE6
cs=0x28f0;eip=0x001ce9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 92293 mov     ax, es:[bx+14h] ;~ 28F0:1CE9
cs=0x28f0;eip=0x001ced; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x16))));	// 92294 mov     dx, es:[bx+16h] ;~ 28F0:1CED
cs=0x28f0;eip=0x001cf1; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 92295 mov     [bp+var_C], ax ;~ 28F0:1CF1
cs=0x28f0;eip=0x001cf4; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 92296 mov     [bp+var_A], dx ;~ 28F0:1CF4
cs=0x28f0;eip=0x001cf7; 	R(JMP(loc_391de));	// 92297 jmp     short loc_391DE ;~ 28F0:1CF7
loc_391d9:
	// 10329 
cs=0x28f0;eip=0x001cf9; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0));	// 92302 mov     [bp+var_10], 0 ;~ 28F0:1CF9
loc_391de:
	// 10330 
cs=0x28f0;eip=0x001cfe; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 92305 mov     ax, word ptr [bp+arg_0] ;~ 28F0:1CFE
cs=0x28f0;eip=0x001d01; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 92306 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:1D01
cs=0x28f0;eip=0x001d04; 	T(ADD(ax, 0x20));	// 92307 add     ax, 20h ; ' ' ;~ 28F0:1D04
cs=0x28f0;eip=0x001d07; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 92308 mov     word ptr [bp+var_4], ax ;~ 28F0:1D07
cs=0x28f0;eip=0x001d0a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 92309 mov     word ptr [bp+var_4+2], dx ;~ 28F0:1D0A
cs=0x28f0;eip=0x001d0d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 92310 les     bx, [bp+var_4] ;~ 28F0:1D0D
cs=0x28f0;eip=0x001d10; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x18))));	// 92311 mov     ax, es:[bx+18h] ;~ 28F0:1D10
cs=0x28f0;eip=0x001d14; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1A))));	// 92312 mov     dx, es:[bx+1Ah] ;~ 28F0:1D14
cs=0x28f0;eip=0x001d18; 	T(SHL(ax, 1));	// 92313 shl     ax, 1 ;~ 28F0:1D18
cs=0x28f0;eip=0x001d1a; 	T(RCL(dx, 1));	// 92314 rcl     dx, 1 ;~ 28F0:1D1A
cs=0x28f0;eip=0x001d1c; 	T(CMP(dx, *(dw*)(raddr(es,bx+2))));	// 92315 cmp     dx, es:[bx+2] ;~ 28F0:1D1C
cs=0x28f0;eip=0x001d20; 	R(JL(loc_39222));	// 92316 jl      short loc_39222 ;~ 28F0:1D20
cs=0x28f0;eip=0x001d22; 	R(JG(loc_39209));	// 92317 jg      short loc_39209 ;~ 28F0:1D22
cs=0x28f0;eip=0x001d24; 	T(CMP(ax, *(dw*)(raddr(es,bx))));	// 92318 cmp     ax, es:[bx] ;~ 28F0:1D24
cs=0x28f0;eip=0x001d27; 	R(JC(loc_39222));	// 92319 jb      short loc_39222 ;~ 28F0:1D27
loc_39209:
	// 10331 
cs=0x28f0;eip=0x001d29; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1C))));	// 92322 mov     ax, es:[bx+1Ch] ;~ 28F0:1D29
cs=0x28f0;eip=0x001d2d; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1E))));	// 92323 mov     dx, es:[bx+1Eh] ;~ 28F0:1D2D
cs=0x28f0;eip=0x001d31; 	T(SHL(ax, 1));	// 92324 shl     ax, 1 ;~ 28F0:1D31
cs=0x28f0;eip=0x001d33; 	T(RCL(dx, 1));	// 92325 rcl     dx, 1 ;~ 28F0:1D33
cs=0x28f0;eip=0x001d35; 	T(CMP(dx, *(dw*)(raddr(es,bx+2))));	// 92326 cmp     dx, es:[bx+2] ;~ 28F0:1D35
cs=0x28f0;eip=0x001d39; 	R(JL(loc_39253));	// 92327 jl      short loc_39253 ;~ 28F0:1D39
cs=0x28f0;eip=0x001d3b; 	R(JG(loc_39222));	// 92328 jg      short loc_39222 ;~ 28F0:1D3B
cs=0x28f0;eip=0x001d3d; 	T(CMP(ax, *(dw*)(raddr(es,bx))));	// 92329 cmp     ax, es:[bx] ;~ 28F0:1D3D
cs=0x28f0;eip=0x001d40; 	R(JBE(loc_39253));	// 92330 jbe     short loc_39253 ;~ 28F0:1D40
loc_39222:
	// 10332 
cs=0x28f0;eip=0x001d42; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92334 mov     ax, es:[bx] ;~ 28F0:1D42
cs=0x28f0;eip=0x001d45; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92335 mov     dx, es:[bx+2] ;~ 28F0:1D45
cs=0x28f0;eip=0x001d49; 	T(NEG(ax));	// 92336 neg     ax ;~ 28F0:1D49
cs=0x28f0;eip=0x001d4b; 	T(ADC(dx, 0));	// 92337 adc     dx, 0 ;~ 28F0:1D4B
cs=0x28f0;eip=0x001d4e; 	T(NEG(dx));	// 92338 neg     dx ;~ 28F0:1D4E
cs=0x28f0;eip=0x001d50; 	T(MOV(cl, 5));	// 92339 mov     cl, 5 ;~ 28F0:1D50
cs=0x28f0;eip=0x001d52; 	R(CALLF(sub_10240,0));	// 92340 call    sub_10240 ;~ 28F0:1D52
cs=0x28f0;eip=0x001d57; 	X(PUSH(ax));	// 92341 push    ax ;~ 28F0:1D57
cs=0x28f0;eip=0x001d58; 	R(CALLF(sub_24cf8,0));	// 92342 call    sub_24CF8 ;~ 28F0:1D58
cs=0x28f0;eip=0x001d5d; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 92343 mov     [bp+var_E], ax ;~ 28F0:1D5D
cs=0x28f0;eip=0x001d60; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 92344 les     bx, [bp+var_8] ;~ 28F0:1D60
cs=0x28f0;eip=0x001d63; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 92345 mov     ax, es:[bx+14h] ;~ 28F0:1D63
cs=0x28f0;eip=0x001d67; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x16))));	// 92346 mov     dx, es:[bx+16h] ;~ 28F0:1D67
cs=0x28f0;eip=0x001d6b; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 92347 mov     [bp+var_C], ax ;~ 28F0:1D6B
cs=0x28f0;eip=0x001d6e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 92348 mov     [bp+var_A], dx ;~ 28F0:1D6E
cs=0x28f0;eip=0x001d71; 	R(JMP(loc_39258));	// 92349 jmp     short loc_39258 ;~ 28F0:1D71
loc_39253:
	// 10333 
cs=0x28f0;eip=0x001d73; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 92354 mov     [bp+var_E], 0 ;~ 28F0:1D73
loc_39258:
	// 10334 
cs=0x28f0;eip=0x001d78; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92357 les     bx, [bp+arg_0] ;~ 28F0:1D78
cs=0x28f0;eip=0x001d7b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FE))));	// 92358 mov     ax, es:[bx+2FEh] ;~ 28F0:1D7B
cs=0x28f0;eip=0x001d80; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x300))));	// 92359 mov     dx, es:[bx+300h] ;~ 28F0:1D80
cs=0x28f0;eip=0x001d85; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 92360 les     bx, es:[bx+31Ch] ;~ 28F0:1D85
cs=0x28f0;eip=0x001d8a; 	T(CMP(*(dw*)(raddr(es,bx+0x0C)), dx));	// 92361 cmp     es:[bx+0Ch], dx ;~ 28F0:1D8A
cs=0x28f0;eip=0x001d8e; 	R(JL(loc_39289));	// 92362 jl      short loc_39289 ;~ 28F0:1D8E
cs=0x28f0;eip=0x001d90; 	R(JG(loc_39278));	// 92363 jg      short loc_39278 ;~ 28F0:1D90
cs=0x28f0;eip=0x001d92; 	T(CMP(*(dw*)(raddr(es,bx+0x0A)), ax));	// 92364 cmp     es:[bx+0Ah], ax ;~ 28F0:1D92
cs=0x28f0;eip=0x001d96; 	R(JBE(loc_39289));	// 92365 jbe     short loc_39289 ;~ 28F0:1D96
loc_39278:
	// 10335 
cs=0x28f0;eip=0x001d98; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 92368 les     bx, [bp+var_8] ;~ 28F0:1D98
cs=0x28f0;eip=0x001d9b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 92369 mov     ax, es:[bx+14h] ;~ 28F0:1D9B
cs=0x28f0;eip=0x001d9f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x16))));	// 92370 mov     dx, es:[bx+16h] ;~ 28F0:1D9F
cs=0x28f0;eip=0x001da3; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 92371 mov     [bp+var_C], ax ;~ 28F0:1DA3
cs=0x28f0;eip=0x001da6; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 92372 mov     [bp+var_A], dx ;~ 28F0:1DA6
loc_39289:
	// 10336 
cs=0x28f0;eip=0x001da9; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0));	// 92376 cmp     [bp+var_10], 0 ;~ 28F0:1DA9
cs=0x28f0;eip=0x001dad; 	R(JNZ(loc_392c5));	// 92377 jnz     short loc_392C5 ;~ 28F0:1DAD
cs=0x28f0;eip=0x001daf; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0));	// 92378 cmp     [bp+var_E], 0 ;~ 28F0:1DAF
cs=0x28f0;eip=0x001db3; 	R(JNZ(loc_392c5));	// 92379 jnz     short loc_392C5 ;~ 28F0:1DB3
cs=0x28f0;eip=0x001db5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92380 les     bx, [bp+arg_0] ;~ 28F0:1DB5
cs=0x28f0;eip=0x001db8; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FE))));	// 92381 mov     ax, es:[bx+2FEh] ;~ 28F0:1DB8
cs=0x28f0;eip=0x001dbd; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x300))));	// 92382 mov     dx, es:[bx+300h] ;~ 28F0:1DBD
cs=0x28f0;eip=0x001dc2; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 92383 les     bx, es:[bx+31Ch] ;~ 28F0:1DC2
cs=0x28f0;eip=0x001dc7; 	T(CMP(*(dw*)(raddr(es,bx+0x0C)), dx));	// 92384 cmp     es:[bx+0Ch], dx ;~ 28F0:1DC7
cs=0x28f0;eip=0x001dcb; 	R(JG(loc_392c5));	// 92385 jg      short loc_392C5 ;~ 28F0:1DCB
cs=0x28f0;eip=0x001dcd; 	R(JL(loc_392b5));	// 92386 jl      short loc_392B5 ;~ 28F0:1DCD
cs=0x28f0;eip=0x001dcf; 	T(CMP(*(dw*)(raddr(es,bx+0x0A)), ax));	// 92387 cmp     es:[bx+0Ah], ax ;~ 28F0:1DCF
cs=0x28f0;eip=0x001dd3; 	R(JA(loc_392c5));	// 92388 ja      short loc_392C5 ;~ 28F0:1DD3
loc_392b5:
	// 10337 
cs=0x28f0;eip=0x001dd5; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 92391 les     bx, [bp+var_8] ;~ 28F0:1DD5
cs=0x28f0;eip=0x001dd8; 	T(SUB(ax, ax));	// 92392 sub     ax, ax ;~ 28F0:1DD8
cs=0x28f0;eip=0x001dda; 	X(MOV(*(dw*)(raddr(es,bx+0x1A)), ax));	// 92393 mov     es:[bx+1Ah], ax ;~ 28F0:1DDA
cs=0x28f0;eip=0x001dde; 	X(MOV(*(dw*)(raddr(es,bx+0x18)), ax));	// 92394 mov     es:[bx+18h], ax ;~ 28F0:1DDE
cs=0x28f0;eip=0x001de2; 	R(JMP(loc_39470));	// 92395 jmp     loc_39470 ;~ 28F0:1DE2
loc_392c5:
	// 10338 
cs=0x28f0;eip=0x001de5; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0x2D0));	// 92400 cmp     [bp+var_10], 2D0h ;~ 28F0:1DE5
cs=0x28f0;eip=0x001dea; 	R(JL(loc_392d3));	// 92401 jl      short loc_392D3 ;~ 28F0:1DEA
cs=0x28f0;eip=0x001dec; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0x870));	// 92402 cmp     [bp+var_10], 870h ;~ 28F0:1DEC
cs=0x28f0;eip=0x001df1; 	R(JLE(loc_3934f));	// 92403 jle     short loc_3934F ;~ 28F0:1DF1
loc_392d3:
	// 10339 
cs=0x28f0;eip=0x001df3; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 92406 les     bx, [bp+var_8] ;~ 28F0:1DF3
cs=0x28f0;eip=0x001df6; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 92407 mov     ax, es:[bx+10h] ;~ 28F0:1DF6
cs=0x28f0;eip=0x001dfa; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 92408 mov     dx, es:[bx+12h] ;~ 28F0:1DFA
cs=0x28f0;eip=0x001dfe; 	T(NEG(ax));	// 92409 neg     ax ;~ 28F0:1DFE
cs=0x28f0;eip=0x001e00; 	T(ADC(dx, 0));	// 92410 adc     dx, 0 ;~ 28F0:1E00
cs=0x28f0;eip=0x001e03; 	T(NEG(dx));	// 92411 neg     dx ;~ 28F0:1E03
cs=0x28f0;eip=0x001e05; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 92412 mov     [bp+var_18], ax ;~ 28F0:1E05
cs=0x28f0;eip=0x001e08; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), dx));	// 92413 mov     [bp+var_16], dx ;~ 28F0:1E08
cs=0x28f0;eip=0x001e0b; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0));	// 92414 cmp     [bp+var_10], 0 ;~ 28F0:1E0B
cs=0x28f0;eip=0x001e0f; 	R(JZ(loc_3931c));	// 92415 jz      short loc_3931C ;~ 28F0:1E0F
cs=0x28f0;eip=0x001e11; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10))));	// 92416 push    [bp+var_10] ;~ 28F0:1E11
cs=0x28f0;eip=0x001e14; 	R(CALLF(sub_27cb4,0));	// 92417 call    sub_27CB4 ;~ 28F0:1E14
cs=0x28f0;eip=0x001e19; 	X(PUSH(dx));	// 92418 push    dx ;~ 28F0:1E19
cs=0x28f0;eip=0x001e1a; 	X(PUSH(ax));	// 92419 push    ax ;~ 28F0:1E1A
cs=0x28f0;eip=0x001e1b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 92420 mov     ax, [bp+var_18] ;~ 28F0:1E1B
cs=0x28f0;eip=0x001e1e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_16))));	// 92421 mov     dx, [bp+var_16] ;~ 28F0:1E1E
cs=0x28f0;eip=0x001e21; 	T(MOV(cl, 8));	// 92422 mov     cl, 8 ;~ 28F0:1E21
cs=0x28f0;eip=0x001e23; 	R(CALLF(sub_10240,0));	// 92423 call    sub_10240 ;~ 28F0:1E23
cs=0x28f0;eip=0x001e28; 	X(PUSH(dx));	// 92424 push    dx ;~ 28F0:1E28
cs=0x28f0;eip=0x001e29; 	X(PUSH(ax));	// 92425 push    ax ;~ 28F0:1E29
cs=0x28f0;eip=0x001e2a; 	R(CALLF(sub_105c2,0));	// 92426 call    sub_105C2 ;~ 28F0:1E2A
cs=0x28f0;eip=0x001e2f; 	T(MOV(cl, 8));	// 92427 mov     cl, 8 ;~ 28F0:1E2F
cs=0x28f0;eip=0x001e31; 	R(CALLF(sub_10240,0));	// 92428 call    sub_10240 ;~ 28F0:1E31
cs=0x28f0;eip=0x001e36; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 92429 mov     [bp+var_18], ax ;~ 28F0:1E36
cs=0x28f0;eip=0x001e39; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), dx));	// 92430 mov     [bp+var_16], dx ;~ 28F0:1E39
loc_3931c:
	// 10340 
cs=0x28f0;eip=0x001e3c; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0));	// 92433 cmp     [bp+var_E], 0 ;~ 28F0:1E3C
cs=0x28f0;eip=0x001e40; 	R(JZ(loc_39357));	// 92434 jz      short loc_39357 ;~ 28F0:1E40
cs=0x28f0;eip=0x001e42; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 92435 push    [bp+var_E] ;~ 28F0:1E42
cs=0x28f0;eip=0x001e45; 	R(CALLF(sub_27cb4,0));	// 92436 call    sub_27CB4 ;~ 28F0:1E45
cs=0x28f0;eip=0x001e4a; 	X(PUSH(dx));	// 92437 push    dx ;~ 28F0:1E4A
cs=0x28f0;eip=0x001e4b; 	X(PUSH(ax));	// 92438 push    ax ;~ 28F0:1E4B
cs=0x28f0;eip=0x001e4c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 92439 mov     ax, [bp+var_18] ;~ 28F0:1E4C
cs=0x28f0;eip=0x001e4f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_16))));	// 92440 mov     dx, [bp+var_16] ;~ 28F0:1E4F
cs=0x28f0;eip=0x001e52; 	T(MOV(cl, 8));	// 92441 mov     cl, 8 ;~ 28F0:1E52
cs=0x28f0;eip=0x001e54; 	R(CALLF(sub_10240,0));	// 92442 call    sub_10240 ;~ 28F0:1E54
cs=0x28f0;eip=0x001e59; 	X(PUSH(dx));	// 92443 push    dx ;~ 28F0:1E59
cs=0x28f0;eip=0x001e5a; 	X(PUSH(ax));	// 92444 push    ax ;~ 28F0:1E5A
cs=0x28f0;eip=0x001e5b; 	R(CALLF(sub_105c2,0));	// 92445 call    sub_105C2 ;~ 28F0:1E5B
cs=0x28f0;eip=0x001e60; 	T(MOV(cl, 8));	// 92446 mov     cl, 8 ;~ 28F0:1E60
cs=0x28f0;eip=0x001e62; 	R(CALLF(sub_10240,0));	// 92447 call    sub_10240 ;~ 28F0:1E62
cs=0x28f0;eip=0x001e67; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 92448 mov     [bp+var_18], ax ;~ 28F0:1E67
cs=0x28f0;eip=0x001e6a; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), dx));	// 92449 mov     [bp+var_16], dx ;~ 28F0:1E6A
cs=0x28f0;eip=0x001e6d; 	R(JMP(loc_39357));	// 92450 jmp     short loc_39357 ;~ 28F0:1E6D
loc_3934f:
	// 10341 
cs=0x28f0;eip=0x001e6f; 	T(SUB(ax, ax));	// 92454 sub     ax, ax ;~ 28F0:1E6F
cs=0x28f0;eip=0x001e71; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 92455 mov     [bp+var_16], ax ;~ 28F0:1E71
cs=0x28f0;eip=0x001e74; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 92456 mov     [bp+var_18], ax ;~ 28F0:1E74
loc_39357:
	// 10342 
cs=0x28f0;eip=0x001e77; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 92460 les     bx, [bp+var_8] ;~ 28F0:1E77
cs=0x28f0;eip=0x001e7a; 	T(CMP(*(dw*)(raddr(es,bx+6)), 0));	// 92461 cmp     word ptr es:[bx+6], 0 ;~ 28F0:1E7A
cs=0x28f0;eip=0x001e7f; 	R(JL(loc_39389));	// 92462 jl      short loc_39389 ;~ 28F0:1E7F
cs=0x28f0;eip=0x001e81; 	R(JG(loc_3936a));	// 92463 jg      short loc_3936A ;~ 28F0:1E81
cs=0x28f0;eip=0x001e83; 	T(CMP(*(dw*)(raddr(es,bx+4)), 0));	// 92464 cmp     word ptr es:[bx+4], 0 ;~ 28F0:1E83
cs=0x28f0;eip=0x001e88; 	R(JZ(loc_39389));	// 92465 jz      short loc_39389 ;~ 28F0:1E88
loc_3936a:
	// 10343 
cs=0x28f0;eip=0x001e8a; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0x2D0));	// 92468 cmp     [bp+var_10], 2D0h ;~ 28F0:1E8A
cs=0x28f0;eip=0x001e8f; 	R(JLE(loc_39389));	// 92469 jle     short loc_39389 ;~ 28F0:1E8F
cs=0x28f0;eip=0x001e91; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0x870));	// 92470 cmp     [bp+var_10], 870h ;~ 28F0:1E91
cs=0x28f0;eip=0x001e96; 	R(JGE(loc_39389));	// 92471 jge     short loc_39389 ;~ 28F0:1E96
cs=0x28f0;eip=0x001e98; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 92472 mov     ax, es:[bx+4] ;~ 28F0:1E98
cs=0x28f0;eip=0x001e9c; 	T(MOV(dx, *(dw*)(raddr(es,bx+6))));	// 92473 mov     dx, es:[bx+6] ;~ 28F0:1E9C
cs=0x28f0;eip=0x001ea0; 	T(NEG(ax));	// 92474 neg     ax ;~ 28F0:1EA0
cs=0x28f0;eip=0x001ea2; 	T(ADC(dx, 0));	// 92475 adc     dx, 0 ;~ 28F0:1EA2
cs=0x28f0;eip=0x001ea5; 	T(NEG(dx));	// 92476 neg     dx ;~ 28F0:1EA5
cs=0x28f0;eip=0x001ea7; 	R(JMP(loc_39394));	// 92477 jmp     short loc_39394 ;~ 28F0:1EA7
loc_39389:
	// 10344 
cs=0x28f0;eip=0x001ea9; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 92482 les     bx, [bp+var_8] ;~ 28F0:1EA9
cs=0x28f0;eip=0x001eac; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 92483 mov     ax, es:[bx+4] ;~ 28F0:1EAC
cs=0x28f0;eip=0x001eb0; 	T(MOV(dx, *(dw*)(raddr(es,bx+6))));	// 92484 mov     dx, es:[bx+6] ;~ 28F0:1EB0
loc_39394:
	// 10345 
cs=0x28f0;eip=0x001eb4; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 92487 mov     [bp+var_14], ax ;~ 28F0:1EB4
cs=0x28f0;eip=0x001eb7; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), dx));	// 92488 mov     [bp+var_12], dx ;~ 28F0:1EB7
cs=0x28f0;eip=0x001eba; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0));	// 92489 cmp     [bp+var_10], 0 ;~ 28F0:1EBA
cs=0x28f0;eip=0x001ebe; 	R(JZ(loc_393cb));	// 92490 jz      short loc_393CB ;~ 28F0:1EBE
cs=0x28f0;eip=0x001ec0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10))));	// 92491 push    [bp+var_10] ;~ 28F0:1EC0
cs=0x28f0;eip=0x001ec3; 	R(CALLF(sub_27cb4,0));	// 92492 call    sub_27CB4 ;~ 28F0:1EC3
cs=0x28f0;eip=0x001ec8; 	X(PUSH(dx));	// 92493 push    dx ;~ 28F0:1EC8
cs=0x28f0;eip=0x001ec9; 	X(PUSH(ax));	// 92494 push    ax ;~ 28F0:1EC9
cs=0x28f0;eip=0x001eca; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 92495 mov     ax, [bp+var_14] ;~ 28F0:1ECA
cs=0x28f0;eip=0x001ecd; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_12))));	// 92496 mov     dx, [bp+var_12] ;~ 28F0:1ECD
cs=0x28f0;eip=0x001ed0; 	T(MOV(cl, 8));	// 92497 mov     cl, 8 ;~ 28F0:1ED0
cs=0x28f0;eip=0x001ed2; 	R(CALLF(sub_10240,0));	// 92498 call    sub_10240 ;~ 28F0:1ED2
cs=0x28f0;eip=0x001ed7; 	X(PUSH(dx));	// 92499 push    dx ;~ 28F0:1ED7
cs=0x28f0;eip=0x001ed8; 	X(PUSH(ax));	// 92500 push    ax ;~ 28F0:1ED8
cs=0x28f0;eip=0x001ed9; 	R(CALLF(sub_105c2,0));	// 92501 call    sub_105C2 ;~ 28F0:1ED9
cs=0x28f0;eip=0x001ede; 	T(MOV(cl, 8));	// 92502 mov     cl, 8 ;~ 28F0:1EDE
cs=0x28f0;eip=0x001ee0; 	R(CALLF(sub_10240,0));	// 92503 call    sub_10240 ;~ 28F0:1EE0
cs=0x28f0;eip=0x001ee5; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 92504 mov     [bp+var_14], ax ;~ 28F0:1EE5
cs=0x28f0;eip=0x001ee8; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), dx));	// 92505 mov     [bp+var_12], dx ;~ 28F0:1EE8
loc_393cb:
	// 10346 
cs=0x28f0;eip=0x001eeb; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0));	// 92508 cmp     [bp+var_E], 0 ;~ 28F0:1EEB
cs=0x28f0;eip=0x001eef; 	R(JZ(loc_393fc));	// 92509 jz      short loc_393FC ;~ 28F0:1EEF
cs=0x28f0;eip=0x001ef1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 92510 push    [bp+var_E] ;~ 28F0:1EF1
cs=0x28f0;eip=0x001ef4; 	R(CALLF(sub_27cb4,0));	// 92511 call    sub_27CB4 ;~ 28F0:1EF4
cs=0x28f0;eip=0x001ef9; 	X(PUSH(dx));	// 92512 push    dx ;~ 28F0:1EF9
cs=0x28f0;eip=0x001efa; 	X(PUSH(ax));	// 92513 push    ax ;~ 28F0:1EFA
cs=0x28f0;eip=0x001efb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 92514 mov     ax, [bp+var_14] ;~ 28F0:1EFB
cs=0x28f0;eip=0x001efe; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_12))));	// 92515 mov     dx, [bp+var_12] ;~ 28F0:1EFE
cs=0x28f0;eip=0x001f01; 	T(MOV(cl, 8));	// 92516 mov     cl, 8 ;~ 28F0:1F01
cs=0x28f0;eip=0x001f03; 	R(CALLF(sub_10240,0));	// 92517 call    sub_10240 ;~ 28F0:1F03
cs=0x28f0;eip=0x001f08; 	X(PUSH(dx));	// 92518 push    dx ;~ 28F0:1F08
cs=0x28f0;eip=0x001f09; 	X(PUSH(ax));	// 92519 push    ax ;~ 28F0:1F09
cs=0x28f0;eip=0x001f0a; 	R(CALLF(sub_105c2,0));	// 92520 call    sub_105C2 ;~ 28F0:1F0A
cs=0x28f0;eip=0x001f0f; 	T(MOV(cl, 8));	// 92521 mov     cl, 8 ;~ 28F0:1F0F
cs=0x28f0;eip=0x001f11; 	R(CALLF(sub_10240,0));	// 92522 call    sub_10240 ;~ 28F0:1F11
cs=0x28f0;eip=0x001f16; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 92523 mov     [bp+var_14], ax ;~ 28F0:1F16
cs=0x28f0;eip=0x001f19; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), dx));	// 92524 mov     [bp+var_12], dx ;~ 28F0:1F19
loc_393fc:
	// 10347 
cs=0x28f0;eip=0x001f1c; 	T(MOV(ax, 0x100));	// 92527 mov     ax, 100h ;~ 28F0:1F1C
cs=0x28f0;eip=0x001f1f; 	T(CWD);	// 92528 cwd ;~ 28F0:1F1F
cs=0x28f0;eip=0x001f20; 	X(PUSH(dx));	// 92529 push    dx ;~ 28F0:1F20
cs=0x28f0;eip=0x001f21; 	X(PUSH(ax));	// 92530 push    ax ;~ 28F0:1F21
cs=0x28f0;eip=0x001f22; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 92531 mov     ax, word ptr unk_57111 ;~ 28F0:1F22
cs=0x28f0;eip=0x001f25; 	T(CWD);	// 92532 cwd ;~ 28F0:1F25
cs=0x28f0;eip=0x001f26; 	X(PUSH(dx));	// 92533 push    dx ;~ 28F0:1F26
cs=0x28f0;eip=0x001f27; 	X(PUSH(ax));	// 92534 push    ax ;~ 28F0:1F27
cs=0x28f0;eip=0x001f28; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 92535 push    [bp+var_16] ;~ 28F0:1F28
cs=0x28f0;eip=0x001f2b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 92536 push    [bp+var_18] ;~ 28F0:1F2B
cs=0x28f0;eip=0x001f2e; 	R(CALLF(sub_105c2,0));	// 92537 call    sub_105C2 ;~ 28F0:1F2E
cs=0x28f0;eip=0x001f33; 	X(PUSH(dx));	// 92538 push    dx ;~ 28F0:1F33
cs=0x28f0;eip=0x001f34; 	X(PUSH(ax));	// 92539 push    ax ;~ 28F0:1F34
cs=0x28f0;eip=0x001f35; 	R(CALLF(sub_10526,0));	// 92540 call    sub_10526 ;~ 28F0:1F35
cs=0x28f0;eip=0x001f3a; 	T(MOV(cx, 0x100));	// 92541 mov     cx, 100h ;~ 28F0:1F3A
cs=0x28f0;eip=0x001f3d; 	T(SUB(bx, bx));	// 92542 sub     bx, bx ;~ 28F0:1F3D
cs=0x28f0;eip=0x001f3f; 	X(PUSH(bx));	// 92543 push    bx ;~ 28F0:1F3F
cs=0x28f0;eip=0x001f40; 	X(PUSH(cx));	// 92544 push    cx ;~ 28F0:1F40
cs=0x28f0;eip=0x001f41; 	T(MOV(cx, ax));	// 92545 mov     cx, ax ;~ 28F0:1F41
cs=0x28f0;eip=0x001f43; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 92546 mov     ax, word ptr unk_57111 ;~ 28F0:1F43
cs=0x28f0;eip=0x001f46; 	T(MOV(bx, dx));	// 92547 mov     bx, dx ;~ 28F0:1F46
cs=0x28f0;eip=0x001f48; 	T(CWD);	// 92548 cwd ;~ 28F0:1F48
cs=0x28f0;eip=0x001f49; 	X(PUSH(dx));	// 92549 push    dx ;~ 28F0:1F49
cs=0x28f0;eip=0x001f4a; 	X(PUSH(ax));	// 92550 push    ax ;~ 28F0:1F4A
cs=0x28f0;eip=0x001f4b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 92551 push    [bp+var_A] ;~ 28F0:1F4B
cs=0x28f0;eip=0x001f4e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 92552 push    [bp+var_C] ;~ 28F0:1F4E
cs=0x28f0;eip=0x001f51; 	T(MOV(si, cx));	// 92553 mov     si, cx ;~ 28F0:1F51
cs=0x28f0;eip=0x001f53; 	T(MOV(di, bx));	// 92554 mov     di, bx ;~ 28F0:1F53
cs=0x28f0;eip=0x001f55; 	R(CALLF(sub_105c2,0));	// 92555 call    sub_105C2 ;~ 28F0:1F55
cs=0x28f0;eip=0x001f5a; 	X(PUSH(dx));	// 92556 push    dx ;~ 28F0:1F5A
cs=0x28f0;eip=0x001f5b; 	X(PUSH(ax));	// 92557 push    ax ;~ 28F0:1F5B
cs=0x28f0;eip=0x001f5c; 	R(CALLF(sub_10526,0));	// 92558 call    sub_10526 ;~ 28F0:1F5C
cs=0x28f0;eip=0x001f61; 	T(ADD(ax, si));	// 92559 add     ax, si ;~ 28F0:1F61
cs=0x28f0;eip=0x001f63; 	T(ADC(dx, di));	// 92560 adc     dx, di ;~ 28F0:1F63
cs=0x28f0;eip=0x001f65; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 92561 les     bx, [bp+var_8] ;~ 28F0:1F65
cs=0x28f0;eip=0x001f68; 	X(ADD(*(dw*)(raddr(es,bx+0x18)), ax));	// 92562 add     es:[bx+18h], ax ;~ 28F0:1F68
cs=0x28f0;eip=0x001f6c; 	X(ADC(*(dw*)(raddr(es,bx+0x1A)), dx));	// 92563 adc     es:[bx+1Ah], dx ;~ 28F0:1F6C
cs=0x28f0;eip=0x001f70; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x18))));	// 92564 mov     ax, es:[bx+18h] ;~ 28F0:1F70
cs=0x28f0;eip=0x001f74; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1A))));	// 92565 mov     dx, es:[bx+1Ah] ;~ 28F0:1F74
cs=0x28f0;eip=0x001f78; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_14))));	// 92566 add     ax, [bp+var_14] ;~ 28F0:1F78
cs=0x28f0;eip=0x001f7b; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_12))));	// 92567 adc     dx, [bp+var_12] ;~ 28F0:1F7B
cs=0x28f0;eip=0x001f7e; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 92568 mov     [bp+var_1C], ax ;~ 28F0:1F7E
cs=0x28f0;eip=0x001f81; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), dx));	// 92569 mov     [bp+var_1A], dx ;~ 28F0:1F81
cs=0x28f0;eip=0x001f84; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 92570 mov     es:[bx], ax ;~ 28F0:1F84
cs=0x28f0;eip=0x001f87; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 92571 mov     es:[bx+2], dx ;~ 28F0:1F87
cs=0x28f0;eip=0x001f8b; 	X(PUSH(es));	// 92572 push    es ;~ 28F0:1F8B
cs=0x28f0;eip=0x001f8c; 	X(PUSH(bx));	// 92573 push    bx ;~ 28F0:1F8C
cs=0x28f0;eip=0x001f8d; 	R(CALL(sub_3bb03,0));	// 92574 call    sub_3BB03 ;~ 28F0:1F8D
loc_39470:
	// 10348 
cs=0x28f0;eip=0x001f90; 	X(POP(si));	// 92577 pop     si ;~ 28F0:1F90
cs=0x28f0;eip=0x001f91; 	X(POP(di));	// 92578 pop     di ;~ 28F0:1F91
cs=0x28f0;eip=0x001f92; 	T(MOV(sp, bp));	// 92579 mov     sp, bp ;~ 28F0:1F92
cs=0x28f0;eip=0x001f94; 	X(POP(bp));	// 92580 pop     bp ;~ 28F0:1F94
cs=0x28f0;eip=0x001f95; 	R(RETN(4));	// 92581 retn    4 ;~ 28F0:1F95
sub_39478:
	// 92589 
#undef var_4
#define var_4 -4
	// 92592 var_4           = dword ptr -4 ;~ 28F0:1F98
#undef arg_0
#define arg_0 4
	// 92593 arg_0           = word ptr  4 ;~ 28F0:1F98
#undef arg_2
#define arg_2 6
	// 92594 arg_2           = dword ptr  6 ;~ 28F0:1F98
cs=0x28f0;eip=0x001f98; 	X(PUSH(bp));	// 92596 push    bp ;~ 28F0:1F98
cs=0x28f0;eip=0x001f99; 	T(MOV(bp, sp));	// 92597 mov     bp, sp ;~ 28F0:1F99
cs=0x28f0;eip=0x001f9b; 	T(SUB(sp, 4));	// 92598 sub     sp, 4 ;~ 28F0:1F9B
cs=0x28f0;eip=0x001f9e; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 92599 mov     ax, word ptr [bp+arg_2] ;~ 28F0:1F9E
cs=0x28f0;eip=0x001fa1; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 92600 mov     dx, word ptr [bp+arg_2+2] ;~ 28F0:1FA1
cs=0x28f0;eip=0x001fa4; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 92601 mov     word ptr [bp+var_4], ax ;~ 28F0:1FA4
cs=0x28f0;eip=0x001fa7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 92602 mov     word ptr [bp+var_4+2], dx ;~ 28F0:1FA7
cs=0x28f0;eip=0x001faa; 	T(CMP(unk_57113, 0));	// 92603 cmp     byte ptr unk_57113, 0 ;~ 28F0:1FAA
cs=0x28f0;eip=0x001faf; 	R(JZ(loc_394c7));	// 92604 jz      short loc_394C7 ;~ 28F0:1FAF
cs=0x28f0;eip=0x001fb1; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 92605 les     bx, [bp+arg_2] ;~ 28F0:1FB1
cs=0x28f0;eip=0x001fb4; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x138))));	// 92606 mov     ax, es:[bx+138h] ;~ 28F0:1FB4
cs=0x28f0;eip=0x001fb9; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13A))));	// 92607 mov     dx, es:[bx+13Ah] ;~ 28F0:1FB9
cs=0x28f0;eip=0x001fbe; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 92608 cmp     es:[bx+122h], dx ;~ 28F0:1FBE
cs=0x28f0;eip=0x001fc3; 	R(JL(loc_394b3));	// 92609 jl      short loc_394B3 ;~ 28F0:1FC3
cs=0x28f0;eip=0x001fc5; 	R(JG(loc_394ae));	// 92610 jg      short loc_394AE ;~ 28F0:1FC5
cs=0x28f0;eip=0x001fc7; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 92611 cmp     es:[bx+120h], ax ;~ 28F0:1FC7
cs=0x28f0;eip=0x001fcc; 	R(JC(loc_394b3));	// 92612 jb      short loc_394B3 ;~ 28F0:1FCC
loc_394ae:
	// 10349 
cs=0x28f0;eip=0x001fce; 	T(MOV(ax, 1));	// 92615 mov     ax, 1 ;~ 28F0:1FCE
cs=0x28f0;eip=0x001fd1; 	R(JMP(loc_394b5));	// 92616 jmp     short loc_394B5 ;~ 28F0:1FD1
loc_394b3:
	// 10350 
cs=0x28f0;eip=0x001fd3; 	T(SUB(ax, ax));	// 92621 sub     ax, ax ;~ 28F0:1FD3
loc_394b5:
	// 10351 
cs=0x28f0;eip=0x001fd5; 	T(OR(ax, ax));	// 92624 or      ax, ax ;~ 28F0:1FD5
cs=0x28f0;eip=0x001fd7; 	R(JZ(loc_394c7));	// 92625 jz      short loc_394C7 ;~ 28F0:1FD7
cs=0x28f0;eip=0x001fd9; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 92626 push    word ptr [bp+var_4+2] ;~ 28F0:1FD9
cs=0x28f0;eip=0x001fdc; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 92627 push    word ptr [bp+var_4] ;~ 28F0:1FDC
cs=0x28f0;eip=0x001fdf; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 92628 push    [bp+arg_0] ;~ 28F0:1FDF
cs=0x28f0;eip=0x001fe2; 	R(CALL(sub_3c13f,0));	// 92629 call    sub_3C13F ;~ 28F0:1FE2
cs=0x28f0;eip=0x001fe5; 	R(JMP(loc_3951f));	// 92630 jmp     short loc_3951F ;~ 28F0:1FE5
loc_394c7:
	// 10352 
cs=0x28f0;eip=0x001fe7; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 92635 les     bx, [bp+var_4] ;~ 28F0:1FE7
cs=0x28f0;eip=0x001fea; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92636 mov     ax, es:[bx] ;~ 28F0:1FEA
cs=0x28f0;eip=0x001fed; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92637 mov     dx, es:[bx+2] ;~ 28F0:1FED
cs=0x28f0;eip=0x001ff1; 	T(CMP(*(dw*)(raddr(es,bx+0x1A)), dx));	// 92638 cmp     es:[bx+1Ah], dx ;~ 28F0:1FF1
cs=0x28f0;eip=0x001ff5; 	R(JL(loc_3951f));	// 92639 jl      short loc_3951F ;~ 28F0:1FF5
cs=0x28f0;eip=0x001ff7; 	R(JG(loc_394df));	// 92640 jg      short loc_394DF ;~ 28F0:1FF7
cs=0x28f0;eip=0x001ff9; 	T(CMP(*(dw*)(raddr(es,bx+0x18)), ax));	// 92641 cmp     es:[bx+18h], ax ;~ 28F0:1FF9
cs=0x28f0;eip=0x001ffd; 	R(JC(loc_3951f));	// 92642 jb      short loc_3951F ;~ 28F0:1FFD
loc_394df:
	// 10353 
cs=0x28f0;eip=0x001fff; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92645 mov     ax, es:[bx] ;~ 28F0:1FFF
cs=0x28f0;eip=0x002002; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92646 mov     dx, es:[bx+2] ;~ 28F0:2002
cs=0x28f0;eip=0x002006; 	T(CMP(*(dw*)(raddr(es,bx+0x1E)), dx));	// 92647 cmp     es:[bx+1Eh], dx ;~ 28F0:2006
cs=0x28f0;eip=0x00200a; 	R(JG(loc_3951f));	// 92648 jg      short loc_3951F ;~ 28F0:200A
cs=0x28f0;eip=0x00200c; 	R(JL(loc_394f4));	// 92649 jl      short loc_394F4 ;~ 28F0:200C
cs=0x28f0;eip=0x00200e; 	T(CMP(*(dw*)(raddr(es,bx+0x1C)), ax));	// 92650 cmp     es:[bx+1Ch], ax ;~ 28F0:200E
cs=0x28f0;eip=0x002012; 	R(JA(loc_3951f));	// 92651 ja      short loc_3951F ;~ 28F0:2012
loc_394f4:
	// 10354 
cs=0x28f0;eip=0x002014; 	X(PUSH(es));	// 92654 push    es ;~ 28F0:2014
cs=0x28f0;eip=0x002015; 	X(PUSH(bx));	// 92655 push    bx ;~ 28F0:2015
cs=0x28f0;eip=0x002016; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 92656 push    [bp+arg_0] ;~ 28F0:2016
cs=0x28f0;eip=0x002019; 	R(CALL(sub_3c1fa,0));	// 92657 call    sub_3C1FA ;~ 28F0:2019
cs=0x28f0;eip=0x00201c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 92658 push    word ptr [bp+var_4+2] ;~ 28F0:201C
cs=0x28f0;eip=0x00201f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 92659 push    word ptr [bp+var_4] ;~ 28F0:201F
cs=0x28f0;eip=0x002022; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 92660 mov     ax, [bp+arg_0] ;~ 28F0:2022
cs=0x28f0;eip=0x002025; 	T(NEG(ax));	// 92661 neg     ax ;~ 28F0:2025
cs=0x28f0;eip=0x002027; 	X(PUSH(ax));	// 92662 push    ax ;~ 28F0:2027
cs=0x28f0;eip=0x002028; 	R(CALL(sub_3c08a,0));	// 92663 call    sub_3C08A ;~ 28F0:2028
cs=0x28f0;eip=0x00202b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 92664 push    word ptr [bp+var_4+2] ;~ 28F0:202B
cs=0x28f0;eip=0x00202e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 92665 push    word ptr [bp+var_4] ;~ 28F0:202E
cs=0x28f0;eip=0x002031; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 92666 les     bx, [bp+var_4] ;~ 28F0:2031
cs=0x28f0;eip=0x002034; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 92667 push    word ptr es:[bx+12h] ;~ 28F0:2034
cs=0x28f0;eip=0x002038; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 92668 push    word ptr es:[bx+10h] ;~ 28F0:2038
cs=0x28f0;eip=0x00203c; 	R(CALL(sub_3b9eb,0));	// 92669 call    sub_3B9EB ;~ 28F0:203C
loc_3951f:
	// 10355 
cs=0x28f0;eip=0x00203f; 	T(CMP(unk_57113, 0));	// 92673 cmp     byte ptr unk_57113, 0 ;~ 28F0:203F
cs=0x28f0;eip=0x002044; 	R(JZ(loc_3954e));	// 92674 jz      short loc_3954E ;~ 28F0:2044
cs=0x28f0;eip=0x002046; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 92675 les     bx, [bp+arg_2] ;~ 28F0:2046
cs=0x28f0;eip=0x002049; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x138))));	// 92676 mov     ax, es:[bx+138h] ;~ 28F0:2049
cs=0x28f0;eip=0x00204e; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13A))));	// 92677 mov     dx, es:[bx+13Ah] ;~ 28F0:204E
cs=0x28f0;eip=0x002053; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 92678 cmp     es:[bx+122h], dx ;~ 28F0:2053
cs=0x28f0;eip=0x002058; 	R(JL(loc_39548));	// 92679 jl      short loc_39548 ;~ 28F0:2058
cs=0x28f0;eip=0x00205a; 	R(JG(loc_39543));	// 92680 jg      short loc_39543 ;~ 28F0:205A
cs=0x28f0;eip=0x00205c; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 92681 cmp     es:[bx+120h], ax ;~ 28F0:205C
cs=0x28f0;eip=0x002061; 	R(JC(loc_39548));	// 92682 jb      short loc_39548 ;~ 28F0:2061
loc_39543:
	// 10356 
cs=0x28f0;eip=0x002063; 	T(MOV(ax, 1));	// 92685 mov     ax, 1 ;~ 28F0:2063
cs=0x28f0;eip=0x002066; 	R(JMP(loc_3954a));	// 92686 jmp     short loc_3954A ;~ 28F0:2066
loc_39548:
	// 10357 
cs=0x28f0;eip=0x002068; 	T(SUB(ax, ax));	// 92691 sub     ax, ax ;~ 28F0:2068
loc_3954a:
	// 10358 
cs=0x28f0;eip=0x00206a; 	T(OR(ax, ax));	// 92694 or      ax, ax ;~ 28F0:206A
cs=0x28f0;eip=0x00206c; 	R(JNZ(loc_3956c));	// 92695 jnz     short loc_3956C ;~ 28F0:206C
loc_3954e:
	// 10359 
cs=0x28f0;eip=0x00206e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 92698 push    word ptr [bp+var_4+2] ;~ 28F0:206E
cs=0x28f0;eip=0x002071; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 92699 push    word ptr [bp+var_4] ;~ 28F0:2071
cs=0x28f0;eip=0x002074; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 92700 les     bx, [bp+var_4] ;~ 28F0:2074
cs=0x28f0;eip=0x002077; 	X(PUSH(*(dw*)(raddr(es,bx+0x1A))));	// 92701 push    word ptr es:[bx+1Ah] ;~ 28F0:2077
cs=0x28f0;eip=0x00207b; 	X(PUSH(*(dw*)(raddr(es,bx+0x18))));	// 92702 push    word ptr es:[bx+18h] ;~ 28F0:207B
cs=0x28f0;eip=0x00207f; 	X(PUSH(*(dw*)(raddr(es,bx+0x1E))));	// 92703 push    word ptr es:[bx+1Eh] ;~ 28F0:207F
cs=0x28f0;eip=0x002083; 	X(PUSH(*(dw*)(raddr(es,bx+0x1C))));	// 92704 push    word ptr es:[bx+1Ch] ;~ 28F0:2083
cs=0x28f0;eip=0x002087; 	R(CALL(sub_3ba8c,0));	// 92705 call    sub_3BA8C ;~ 28F0:2087
cs=0x28f0;eip=0x00208a; 	R(JMP(loc_39575));	// 92706 jmp     short loc_39575 ;~ 28F0:208A
loc_3956c:
	// 10360 
cs=0x28f0;eip=0x00208c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 92710 push    word ptr [bp+var_4+2] ;~ 28F0:208C
cs=0x28f0;eip=0x00208f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 92711 push    word ptr [bp+var_4] ;~ 28F0:208F
cs=0x28f0;eip=0x002092; 	R(CALL(sub_3c2b6,0));	// 92712 call    sub_3C2B6 ;~ 28F0:2092
loc_39575:
	// 10361 
cs=0x28f0;eip=0x002095; 	T(MOV(sp, bp));	// 92715 mov     sp, bp ;~ 28F0:2095
cs=0x28f0;eip=0x002097; 	X(POP(bp));	// 92716 pop     bp ;~ 28F0:2097
cs=0x28f0;eip=0x002098; 	R(RETN(6));	// 92717 retn    6 ;~ 28F0:2098
sub_3957b:
	// 92725 
#undef var_4
#define var_4 -4
	// 92728 var_4           = dword ptr -4 ;~ 28F0:209B
#undef arg_0
#define arg_0 4
	// 92729 arg_0           = word ptr  4 ;~ 28F0:209B
#undef arg_2
#define arg_2 6
	// 92730 arg_2           = dword ptr  6 ;~ 28F0:209B
cs=0x28f0;eip=0x00209b; 	X(PUSH(bp));	// 92732 push    bp ;~ 28F0:209B
cs=0x28f0;eip=0x00209c; 	T(MOV(bp, sp));	// 92733 mov     bp, sp ;~ 28F0:209C
cs=0x28f0;eip=0x00209e; 	T(SUB(sp, 4));	// 92734 sub     sp, 4 ;~ 28F0:209E
cs=0x28f0;eip=0x0020a1; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 92735 les     bx, [bp+arg_2] ;~ 28F0:20A1
cs=0x28f0;eip=0x0020a4; 	T(CMP(*(dw*)(raddr(es,bx+2)), 0));	// 92736 cmp     word ptr es:[bx+2], 0 ;~ 28F0:20A4
cs=0x28f0;eip=0x0020a9; 	R(JL(loc_3959c));	// 92737 jl      short loc_3959C ;~ 28F0:20A9
cs=0x28f0;eip=0x0020ab; 	R(JG(loc_39593));	// 92738 jg      short loc_39593 ;~ 28F0:20AB
cs=0x28f0;eip=0x0020ad; 	T(CMP(*(dw*)(raddr(es,bx)), 0));	// 92739 cmp     word ptr es:[bx], 0 ;~ 28F0:20AD
cs=0x28f0;eip=0x0020b1; 	R(JZ(loc_3959c));	// 92740 jz      short loc_3959C ;~ 28F0:20B1
loc_39593:
	// 10362 
cs=0x28f0;eip=0x0020b3; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92743 mov     ax, es:[bx] ;~ 28F0:20B3
cs=0x28f0;eip=0x0020b6; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92744 mov     dx, es:[bx+2] ;~ 28F0:20B6
cs=0x28f0;eip=0x0020ba; 	R(JMP(loc_395aa));	// 92745 jmp     short loc_395AA ;~ 28F0:20BA
loc_3959c:
	// 10363 
cs=0x28f0;eip=0x0020bc; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92750 mov     ax, es:[bx] ;~ 28F0:20BC
cs=0x28f0;eip=0x0020bf; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92751 mov     dx, es:[bx+2] ;~ 28F0:20BF
cs=0x28f0;eip=0x0020c3; 	T(NEG(ax));	// 92752 neg     ax ;~ 28F0:20C3
cs=0x28f0;eip=0x0020c5; 	T(ADC(dx, 0));	// 92753 adc     dx, 0 ;~ 28F0:20C5
cs=0x28f0;eip=0x0020c8; 	T(NEG(dx));	// 92754 neg     dx ;~ 28F0:20C8
loc_395aa:
	// 10364 
cs=0x28f0;eip=0x0020ca; 	T(OR(dx, dx));	// 92757 or      dx, dx ;~ 28F0:20CA
cs=0x28f0;eip=0x0020cc; 	R(JL(loc_395bd));	// 92758 jl      short loc_395BD ;~ 28F0:20CC
cs=0x28f0;eip=0x0020ce; 	R(JG(loc_395b5));	// 92759 jg      short loc_395B5 ;~ 28F0:20CE
cs=0x28f0;eip=0x0020d0; 	T(CMP(ax, 0x5A00));	// 92760 cmp     ax, 5A00h ;~ 28F0:20D0
cs=0x28f0;eip=0x0020d3; 	R(JBE(loc_395bd));	// 92761 jbe     short loc_395BD ;~ 28F0:20D3
loc_395b5:
	// 10365 
cs=0x28f0;eip=0x0020d5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 92764 mov     ax, [bp+arg_0] ;~ 28F0:20D5
cs=0x28f0;eip=0x0020d8; 	T(NEG(ax));	// 92765 neg     ax ;~ 28F0:20D8
cs=0x28f0;eip=0x0020da; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 92766 mov     [bp+arg_0], ax ;~ 28F0:20DA
loc_395bd:
	// 10366 
cs=0x28f0;eip=0x0020dd; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 92770 mov     ax, word ptr [bp+arg_2] ;~ 28F0:20DD
cs=0x28f0;eip=0x0020e0; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 92771 mov     dx, word ptr [bp+arg_2+2] ;~ 28F0:20E0
cs=0x28f0;eip=0x0020e3; 	T(ADD(ax, 0x20));	// 92772 add     ax, 20h ; ' ' ;~ 28F0:20E3
cs=0x28f0;eip=0x0020e6; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 92773 mov     word ptr [bp+var_4], ax ;~ 28F0:20E6
cs=0x28f0;eip=0x0020e9; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 92774 mov     word ptr [bp+var_4+2], dx ;~ 28F0:20E9
cs=0x28f0;eip=0x0020ec; 	T(CMP(unk_57113, 0));	// 92775 cmp     byte ptr unk_57113, 0 ;~ 28F0:20EC
cs=0x28f0;eip=0x0020f1; 	R(JZ(loc_39609));	// 92776 jz      short loc_39609 ;~ 28F0:20F1
cs=0x28f0;eip=0x0020f3; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 92777 les     bx, [bp+arg_2] ;~ 28F0:20F3
cs=0x28f0;eip=0x0020f6; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x138))));	// 92778 mov     ax, es:[bx+138h] ;~ 28F0:20F6
cs=0x28f0;eip=0x0020fb; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13A))));	// 92779 mov     dx, es:[bx+13Ah] ;~ 28F0:20FB
cs=0x28f0;eip=0x002100; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 92780 cmp     es:[bx+122h], dx ;~ 28F0:2100
cs=0x28f0;eip=0x002105; 	R(JL(loc_395f5));	// 92781 jl      short loc_395F5 ;~ 28F0:2105
cs=0x28f0;eip=0x002107; 	R(JG(loc_395f0));	// 92782 jg      short loc_395F0 ;~ 28F0:2107
cs=0x28f0;eip=0x002109; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 92783 cmp     es:[bx+120h], ax ;~ 28F0:2109
cs=0x28f0;eip=0x00210e; 	R(JC(loc_395f5));	// 92784 jb      short loc_395F5 ;~ 28F0:210E
loc_395f0:
	// 10367 
cs=0x28f0;eip=0x002110; 	T(MOV(ax, 1));	// 92787 mov     ax, 1 ;~ 28F0:2110
cs=0x28f0;eip=0x002113; 	R(JMP(loc_395f7));	// 92788 jmp     short loc_395F7 ;~ 28F0:2113
loc_395f5:
	// 10368 
cs=0x28f0;eip=0x002115; 	T(SUB(ax, ax));	// 92793 sub     ax, ax ;~ 28F0:2115
loc_395f7:
	// 10369 
cs=0x28f0;eip=0x002117; 	T(OR(ax, ax));	// 92796 or      ax, ax ;~ 28F0:2117
cs=0x28f0;eip=0x002119; 	R(JZ(loc_39609));	// 92797 jz      short loc_39609 ;~ 28F0:2119
cs=0x28f0;eip=0x00211b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 92798 push    word ptr [bp+var_4+2] ;~ 28F0:211B
cs=0x28f0;eip=0x00211e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 92799 push    word ptr [bp+var_4] ;~ 28F0:211E
cs=0x28f0;eip=0x002121; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 92800 push    [bp+arg_0] ;~ 28F0:2121
cs=0x28f0;eip=0x002124; 	R(CALL(sub_3bd9b,0));	// 92801 call    sub_3BD9B ;~ 28F0:2124
cs=0x28f0;eip=0x002127; 	R(JMP(loc_39661));	// 92802 jmp     short loc_39661 ;~ 28F0:2127
loc_39609:
	// 10370 
cs=0x28f0;eip=0x002129; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 92807 les     bx, [bp+var_4] ;~ 28F0:2129
cs=0x28f0;eip=0x00212c; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92808 mov     ax, es:[bx] ;~ 28F0:212C
cs=0x28f0;eip=0x00212f; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92809 mov     dx, es:[bx+2] ;~ 28F0:212F
cs=0x28f0;eip=0x002133; 	T(CMP(*(dw*)(raddr(es,bx+0x1A)), dx));	// 92810 cmp     es:[bx+1Ah], dx ;~ 28F0:2133
cs=0x28f0;eip=0x002137; 	R(JL(loc_39661));	// 92811 jl      short loc_39661 ;~ 28F0:2137
cs=0x28f0;eip=0x002139; 	R(JG(loc_39621));	// 92812 jg      short loc_39621 ;~ 28F0:2139
cs=0x28f0;eip=0x00213b; 	T(CMP(*(dw*)(raddr(es,bx+0x18)), ax));	// 92813 cmp     es:[bx+18h], ax ;~ 28F0:213B
cs=0x28f0;eip=0x00213f; 	R(JC(loc_39661));	// 92814 jb      short loc_39661 ;~ 28F0:213F
loc_39621:
	// 10371 
cs=0x28f0;eip=0x002141; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92817 mov     ax, es:[bx] ;~ 28F0:2141
cs=0x28f0;eip=0x002144; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92818 mov     dx, es:[bx+2] ;~ 28F0:2144
cs=0x28f0;eip=0x002148; 	T(CMP(*(dw*)(raddr(es,bx+0x1E)), dx));	// 92819 cmp     es:[bx+1Eh], dx ;~ 28F0:2148
cs=0x28f0;eip=0x00214c; 	R(JG(loc_39661));	// 92820 jg      short loc_39661 ;~ 28F0:214C
cs=0x28f0;eip=0x00214e; 	R(JL(loc_39636));	// 92821 jl      short loc_39636 ;~ 28F0:214E
cs=0x28f0;eip=0x002150; 	T(CMP(*(dw*)(raddr(es,bx+0x1C)), ax));	// 92822 cmp     es:[bx+1Ch], ax ;~ 28F0:2150
cs=0x28f0;eip=0x002154; 	R(JA(loc_39661));	// 92823 ja      short loc_39661 ;~ 28F0:2154
loc_39636:
	// 10372 
cs=0x28f0;eip=0x002156; 	X(PUSH(es));	// 92826 push    es ;~ 28F0:2156
cs=0x28f0;eip=0x002157; 	X(PUSH(bx));	// 92827 push    bx ;~ 28F0:2157
cs=0x28f0;eip=0x002158; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 92828 push    [bp+arg_0] ;~ 28F0:2158
cs=0x28f0;eip=0x00215b; 	R(CALL(sub_3be56,0));	// 92829 call    sub_3BE56 ;~ 28F0:215B
cs=0x28f0;eip=0x00215e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 92830 push    word ptr [bp+var_4+2] ;~ 28F0:215E
cs=0x28f0;eip=0x002161; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 92831 push    word ptr [bp+var_4] ;~ 28F0:2161
cs=0x28f0;eip=0x002164; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 92832 mov     ax, [bp+arg_0] ;~ 28F0:2164
cs=0x28f0;eip=0x002167; 	T(NEG(ax));	// 92833 neg     ax ;~ 28F0:2167
cs=0x28f0;eip=0x002169; 	X(PUSH(ax));	// 92834 push    ax ;~ 28F0:2169
cs=0x28f0;eip=0x00216a; 	R(CALL(sub_3bce6,0));	// 92835 call    sub_3BCE6 ;~ 28F0:216A
cs=0x28f0;eip=0x00216d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 92836 push    word ptr [bp+var_4+2] ;~ 28F0:216D
cs=0x28f0;eip=0x002170; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 92837 push    word ptr [bp+var_4] ;~ 28F0:2170
cs=0x28f0;eip=0x002173; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 92838 les     bx, [bp+var_4] ;~ 28F0:2173
cs=0x28f0;eip=0x002176; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 92839 push    word ptr es:[bx+12h] ;~ 28F0:2176
cs=0x28f0;eip=0x00217a; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 92840 push    word ptr es:[bx+10h] ;~ 28F0:217A
cs=0x28f0;eip=0x00217e; 	R(CALL(sub_3b9eb,0));	// 92841 call    sub_3B9EB ;~ 28F0:217E
loc_39661:
	// 10373 
cs=0x28f0;eip=0x002181; 	T(CMP(unk_57113, 0));	// 92845 cmp     byte ptr unk_57113, 0 ;~ 28F0:2181
cs=0x28f0;eip=0x002186; 	R(JZ(loc_39690));	// 92846 jz      short loc_39690 ;~ 28F0:2186
cs=0x28f0;eip=0x002188; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 92847 les     bx, [bp+arg_2] ;~ 28F0:2188
cs=0x28f0;eip=0x00218b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x138))));	// 92848 mov     ax, es:[bx+138h] ;~ 28F0:218B
cs=0x28f0;eip=0x002190; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13A))));	// 92849 mov     dx, es:[bx+13Ah] ;~ 28F0:2190
cs=0x28f0;eip=0x002195; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 92850 cmp     es:[bx+122h], dx ;~ 28F0:2195
cs=0x28f0;eip=0x00219a; 	R(JL(loc_3968a));	// 92851 jl      short loc_3968A ;~ 28F0:219A
cs=0x28f0;eip=0x00219c; 	R(JG(loc_39685));	// 92852 jg      short loc_39685 ;~ 28F0:219C
cs=0x28f0;eip=0x00219e; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 92853 cmp     es:[bx+120h], ax ;~ 28F0:219E
cs=0x28f0;eip=0x0021a3; 	R(JC(loc_3968a));	// 92854 jb      short loc_3968A ;~ 28F0:21A3
loc_39685:
	// 10374 
cs=0x28f0;eip=0x0021a5; 	T(MOV(ax, 1));	// 92857 mov     ax, 1 ;~ 28F0:21A5
cs=0x28f0;eip=0x0021a8; 	R(JMP(loc_3968c));	// 92858 jmp     short loc_3968C ;~ 28F0:21A8
loc_3968a:
	// 10375 
cs=0x28f0;eip=0x0021aa; 	T(SUB(ax, ax));	// 92863 sub     ax, ax ;~ 28F0:21AA
loc_3968c:
	// 10376 
cs=0x28f0;eip=0x0021ac; 	T(OR(ax, ax));	// 92866 or      ax, ax ;~ 28F0:21AC
cs=0x28f0;eip=0x0021ae; 	R(JNZ(loc_396ae));	// 92867 jnz     short loc_396AE ;~ 28F0:21AE
loc_39690:
	// 10377 
cs=0x28f0;eip=0x0021b0; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 92870 push    word ptr [bp+var_4+2] ;~ 28F0:21B0
cs=0x28f0;eip=0x0021b3; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 92871 push    word ptr [bp+var_4] ;~ 28F0:21B3
cs=0x28f0;eip=0x0021b6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 92872 les     bx, [bp+var_4] ;~ 28F0:21B6
cs=0x28f0;eip=0x0021b9; 	X(PUSH(*(dw*)(raddr(es,bx+0x1A))));	// 92873 push    word ptr es:[bx+1Ah] ;~ 28F0:21B9
cs=0x28f0;eip=0x0021bd; 	X(PUSH(*(dw*)(raddr(es,bx+0x18))));	// 92874 push    word ptr es:[bx+18h] ;~ 28F0:21BD
cs=0x28f0;eip=0x0021c1; 	X(PUSH(*(dw*)(raddr(es,bx+0x1E))));	// 92875 push    word ptr es:[bx+1Eh] ;~ 28F0:21C1
cs=0x28f0;eip=0x0021c5; 	X(PUSH(*(dw*)(raddr(es,bx+0x1C))));	// 92876 push    word ptr es:[bx+1Ch] ;~ 28F0:21C5
cs=0x28f0;eip=0x0021c9; 	R(CALL(sub_3ba8c,0));	// 92877 call    sub_3BA8C ;~ 28F0:21C9
cs=0x28f0;eip=0x0021cc; 	R(JMP(loc_39723));	// 92878 jmp     short loc_39723 ;~ 28F0:21CC
loc_396ae:
	// 10378 
cs=0x28f0;eip=0x0021ce; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 92882 push    word ptr [bp+var_4+2] ;~ 28F0:21CE
cs=0x28f0;eip=0x0021d1; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 92883 push    word ptr [bp+var_4] ;~ 28F0:21D1
cs=0x28f0;eip=0x0021d4; 	R(CALL(sub_3c2b6,0));	// 92884 call    sub_3C2B6 ;~ 28F0:21D4
cs=0x28f0;eip=0x0021d7; 	T(OR(al, al));	// 92885 or      al, al ;~ 28F0:21D7
cs=0x28f0;eip=0x0021d9; 	R(JZ(loc_39723));	// 92886 jz      short loc_39723 ;~ 28F0:21D9
cs=0x28f0;eip=0x0021db; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 92887 les     bx, [bp+var_4] ;~ 28F0:21DB
cs=0x28f0;eip=0x0021de; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92888 mov     ax, es:[bx] ;~ 28F0:21DE
cs=0x28f0;eip=0x0021e1; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92889 mov     dx, es:[bx+2] ;~ 28F0:21E1
cs=0x28f0;eip=0x0021e5; 	T(NEG(ax));	// 92890 neg     ax ;~ 28F0:21E5
cs=0x28f0;eip=0x0021e7; 	T(ADC(dx, 0));	// 92891 adc     dx, 0 ;~ 28F0:21E7
cs=0x28f0;eip=0x0021ea; 	T(NEG(dx));	// 92892 neg     dx ;~ 28F0:21EA
cs=0x28f0;eip=0x0021ec; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 92893 mov     es:[bx], ax ;~ 28F0:21EC
cs=0x28f0;eip=0x0021ef; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 92894 mov     es:[bx+2], dx ;~ 28F0:21EF
cs=0x28f0;eip=0x0021f3; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 92895 mov     ax, word ptr [bp+arg_2] ;~ 28F0:21F3
cs=0x28f0;eip=0x0021f6; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 92896 mov     dx, word ptr [bp+arg_2+2] ;~ 28F0:21F6
cs=0x28f0;eip=0x0021f9; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 92897 mov     word ptr [bp+var_4], ax ;~ 28F0:21F9
cs=0x28f0;eip=0x0021fc; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 92898 mov     word ptr [bp+var_4+2], dx ;~ 28F0:21FC
cs=0x28f0;eip=0x0021ff; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 92899 les     bx, [bp+var_4] ;~ 28F0:21FF
cs=0x28f0;eip=0x002202; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 92900 mov     ax, es:[bx+0Ch] ;~ 28F0:2202
cs=0x28f0;eip=0x002206; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 92901 mov     dx, es:[bx+0Eh] ;~ 28F0:2206
cs=0x28f0;eip=0x00220a; 	T(SUB(ax, *(dw*)(raddr(es,bx))));	// 92902 sub     ax, es:[bx] ;~ 28F0:220A
cs=0x28f0;eip=0x00220d; 	T(SBB(dx, *(dw*)(raddr(es,bx+2))));	// 92903 sbb     dx, es:[bx+2] ;~ 28F0:220D
cs=0x28f0;eip=0x002211; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 92904 mov     es:[bx], ax ;~ 28F0:2211
cs=0x28f0;eip=0x002214; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 92905 mov     es:[bx+2], dx ;~ 28F0:2214
cs=0x28f0;eip=0x002218; 	X(PUSH(es));	// 92906 push    es ;~ 28F0:2218
cs=0x28f0;eip=0x002219; 	X(PUSH(bx));	// 92907 push    bx ;~ 28F0:2219
cs=0x28f0;eip=0x00221a; 	R(CALL(sub_3c2b6,0));	// 92908 call    sub_3C2B6 ;~ 28F0:221A
cs=0x28f0;eip=0x00221d; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 92909 mov     ax, word ptr [bp+arg_2] ;~ 28F0:221D
cs=0x28f0;eip=0x002220; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 92910 mov     dx, word ptr [bp+arg_2+2] ;~ 28F0:2220
cs=0x28f0;eip=0x002223; 	T(ADD(ah, 1));	// 92911 add     ah, 1 ;~ 28F0:2223
cs=0x28f0;eip=0x002226; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 92912 mov     word ptr [bp+var_4], ax ;~ 28F0:2226
cs=0x28f0;eip=0x002229; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 92913 mov     word ptr [bp+var_4+2], dx ;~ 28F0:2229
cs=0x28f0;eip=0x00222c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 92914 les     bx, [bp+var_4] ;~ 28F0:222C
cs=0x28f0;eip=0x00222f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 92915 mov     ax, es:[bx+0Ch] ;~ 28F0:222F
cs=0x28f0;eip=0x002233; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 92916 mov     dx, es:[bx+0Eh] ;~ 28F0:2233
cs=0x28f0;eip=0x002237; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 92917 add     es:[bx], ax ;~ 28F0:2237
cs=0x28f0;eip=0x00223a; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 92918 adc     es:[bx+2], dx ;~ 28F0:223A
cs=0x28f0;eip=0x00223e; 	X(PUSH(es));	// 92919 push    es ;~ 28F0:223E
cs=0x28f0;eip=0x00223f; 	X(PUSH(bx));	// 92920 push    bx ;~ 28F0:223F
cs=0x28f0;eip=0x002240; 	R(CALL(sub_3c2b6,0));	// 92921 call    sub_3C2B6 ;~ 28F0:2240
loc_39723:
	// 10379 
cs=0x28f0;eip=0x002243; 	T(MOV(sp, bp));	// 92925 mov     sp, bp ;~ 28F0:2243
cs=0x28f0;eip=0x002245; 	X(POP(bp));	// 92926 pop     bp ;~ 28F0:2245
cs=0x28f0;eip=0x002246; 	R(RETN(6));	// 92927 retn    6 ;~ 28F0:2246
sub_39729:
	// 92935 
#undef arg_0
#define arg_0 4
	// 92938 arg_0           = word ptr  4 ;~ 28F0:2249
#undef arg_2
#define arg_2 6
	// 92939 arg_2           = dword ptr  6 ;~ 28F0:2249
cs=0x28f0;eip=0x002249; 	X(PUSH(bp));	// 92941 push    bp ;~ 28F0:2249
cs=0x28f0;eip=0x00224a; 	T(MOV(bp, sp));	// 92942 mov     bp, sp ;~ 28F0:224A
cs=0x28f0;eip=0x00224c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 92943 push    word ptr [bp+arg_2+2] ;~ 28F0:224C
cs=0x28f0;eip=0x00224f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 92944 push    word ptr [bp+arg_2] ;~ 28F0:224F
cs=0x28f0;eip=0x002252; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 92945 push    [bp+arg_0] ;~ 28F0:2252
cs=0x28f0;eip=0x002255; 	R(CALL(sub_3c1fa,0));	// 92946 call    sub_3C1FA ;~ 28F0:2255
cs=0x28f0;eip=0x002258; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 92947 push    word ptr [bp+arg_2+2] ;~ 28F0:2258
cs=0x28f0;eip=0x00225b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 92948 push    word ptr [bp+arg_2] ;~ 28F0:225B
cs=0x28f0;eip=0x00225e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 92949 push    [bp+arg_0] ;~ 28F0:225E
cs=0x28f0;eip=0x002261; 	R(CALL(sub_3bfce,0));	// 92950 call    sub_3BFCE ;~ 28F0:2261
cs=0x28f0;eip=0x002264; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 92951 push    word ptr [bp+arg_2+2] ;~ 28F0:2264
cs=0x28f0;eip=0x002267; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 92952 push    word ptr [bp+arg_2] ;~ 28F0:2267
cs=0x28f0;eip=0x00226a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 92953 les     bx, [bp+arg_2] ;~ 28F0:226A
cs=0x28f0;eip=0x00226d; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 92954 push    word ptr es:[bx+12h] ;~ 28F0:226D
cs=0x28f0;eip=0x002271; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 92955 push    word ptr es:[bx+10h] ;~ 28F0:2271
cs=0x28f0;eip=0x002275; 	R(CALL(sub_3b9eb,0));	// 92956 call    sub_3B9EB ;~ 28F0:2275
cs=0x28f0;eip=0x002278; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 92957 push    word ptr [bp+arg_2+2] ;~ 28F0:2278
cs=0x28f0;eip=0x00227b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 92958 push    word ptr [bp+arg_2] ;~ 28F0:227B
cs=0x28f0;eip=0x00227e; 	R(CALL(sub_3bb03,0));	// 92959 call    sub_3BB03 ;~ 28F0:227E
cs=0x28f0;eip=0x002281; 	X(POP(bp));	// 92960 pop     bp ;~ 28F0:2281
cs=0x28f0;eip=0x002282; 	R(RETN(6));	// 92961 retn    6 ;~ 28F0:2282
sub_39765:
	// 92969 
#undef var_10
#define var_10 -0x10
	// 92971 var_10          = word ptr -10h ;~ 28F0:2285
#undef var_e
#define var_e -0x0E
	// 92972 var_E           = word ptr -0Eh ;~ 28F0:2285
#undef var_c
#define var_c -0x0C
	// 92973 var_C           = word ptr -0Ch ;~ 28F0:2285
#undef var_a
#define var_a -0x0A
	// 92974 var_A           = word ptr -0Ah ;~ 28F0:2285
#undef var_8
#define var_8 -8
	// 92975 var_8           = dword ptr -8 ;~ 28F0:2285
#undef arg_0
#define arg_0 4
	// 92976 arg_0           = dword ptr  4 ;~ 28F0:2285
cs=0x28f0;eip=0x002285; 	X(PUSH(bp));	// 92978 push    bp ;~ 28F0:2285
cs=0x28f0;eip=0x002286; 	T(MOV(bp, sp));	// 92979 mov     bp, sp ;~ 28F0:2286
cs=0x28f0;eip=0x002288; 	T(SUB(sp, 0x10));	// 92980 sub     sp, 10h ;~ 28F0:2288
cs=0x28f0;eip=0x00228b; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 92981 mov     ax, word ptr [bp+arg_0] ;~ 28F0:228B
cs=0x28f0;eip=0x00228e; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 92982 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:228E
cs=0x28f0;eip=0x002291; 	T(ADD(ax, 0x40));	// 92983 add     ax, 40h ; '@' ;~ 28F0:2291
cs=0x28f0;eip=0x002294; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 92984 mov     word ptr [bp+var_8], ax ;~ 28F0:2294
cs=0x28f0;eip=0x002297; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 92985 mov     word ptr [bp+var_8+2], dx ;~ 28F0:2297
cs=0x28f0;eip=0x00229a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 92986 les     bx, [bp+var_8] ;~ 28F0:229A
cs=0x28f0;eip=0x00229d; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92987 mov     ax, es:[bx] ;~ 28F0:229D
cs=0x28f0;eip=0x0022a0; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92988 mov     dx, es:[bx+2] ;~ 28F0:22A0
cs=0x28f0;eip=0x0022a4; 	T(CMP(*(dw*)(raddr(es,bx+4)), ax));	// 92989 cmp     es:[bx+4], ax ;~ 28F0:22A4
cs=0x28f0;eip=0x0022a8; 	R(JNZ(loc_39790));	// 92990 jnz     short loc_39790 ;~ 28F0:22A8
cs=0x28f0;eip=0x0022aa; 	T(CMP(*(dw*)(raddr(es,bx+6)), dx));	// 92991 cmp     es:[bx+6], dx ;~ 28F0:22AA
cs=0x28f0;eip=0x0022ae; 	R(JZ(loc_3979d));	// 92992 jz      short loc_3979D ;~ 28F0:22AE
loc_39790:
	// 10380 
cs=0x28f0;eip=0x0022b0; 	X(PUSH(es));	// 92995 push    es ;~ 28F0:22B0
cs=0x28f0;eip=0x0022b1; 	X(PUSH(bx));	// 92996 push    bx ;~ 28F0:22B1
cs=0x28f0;eip=0x0022b2; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 92997 push    word ptr es:[bx+12h] ;~ 28F0:22B2
cs=0x28f0;eip=0x0022b6; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 92998 push    word ptr es:[bx+10h] ;~ 28F0:22B6
cs=0x28f0;eip=0x0022ba; 	R(CALL(sub_3b9eb,0));	// 92999 call    sub_3B9EB ;~ 28F0:22BA
loc_3979d:
	// 10381 
cs=0x28f0;eip=0x0022bd; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 93002 les     bx, [bp+var_8] ;~ 28F0:22BD
cs=0x28f0;eip=0x0022c0; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 93003 mov     ax, es:[bx] ;~ 28F0:22C0
cs=0x28f0;eip=0x0022c3; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 93004 mov     dx, es:[bx+2] ;~ 28F0:22C3
cs=0x28f0;eip=0x0022c7; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 93005 mov     [bp+var_C], ax ;~ 28F0:22C7
cs=0x28f0;eip=0x0022ca; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 93006 mov     [bp+var_A], dx ;~ 28F0:22CA
cs=0x28f0;eip=0x0022cd; 	T(OR(ax, dx));	// 93007 or      ax, dx ;~ 28F0:22CD
cs=0x28f0;eip=0x0022cf; 	R(JNZ(loc_397b4));	// 93008 jnz     short loc_397B4 ;~ 28F0:22CF
cs=0x28f0;eip=0x0022d1; 	R(JMP(loc_3989b));	// 93009 jmp     loc_3989B ;~ 28F0:22D1
loc_397b4:
	// 10382 
cs=0x28f0;eip=0x0022d4; 	T(MOV(ax, 0x100));	// 93013 mov     ax, 100h ;~ 28F0:22D4
cs=0x28f0;eip=0x0022d7; 	T(CWD);	// 93014 cwd ;~ 28F0:22D7
cs=0x28f0;eip=0x0022d8; 	X(PUSH(dx));	// 93015 push    dx ;~ 28F0:22D8
cs=0x28f0;eip=0x0022d9; 	X(PUSH(ax));	// 93016 push    ax ;~ 28F0:22D9
cs=0x28f0;eip=0x0022da; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 93017 mov     ax, word ptr unk_57111 ;~ 28F0:22DA
cs=0x28f0;eip=0x0022dd; 	T(CWD);	// 93018 cwd ;~ 28F0:22DD
cs=0x28f0;eip=0x0022de; 	X(PUSH(dx));	// 93019 push    dx ;~ 28F0:22DE
cs=0x28f0;eip=0x0022df; 	X(PUSH(ax));	// 93020 push    ax ;~ 28F0:22DF
cs=0x28f0;eip=0x0022e0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 93021 push    [bp+var_A] ;~ 28F0:22E0
cs=0x28f0;eip=0x0022e3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 93022 push    [bp+var_C] ;~ 28F0:22E3
cs=0x28f0;eip=0x0022e6; 	R(CALLF(sub_105c2,0));	// 93023 call    sub_105C2 ;~ 28F0:22E6
cs=0x28f0;eip=0x0022eb; 	X(PUSH(dx));	// 93024 push    dx ;~ 28F0:22EB
cs=0x28f0;eip=0x0022ec; 	X(PUSH(ax));	// 93025 push    ax ;~ 28F0:22EC
cs=0x28f0;eip=0x0022ed; 	R(CALLF(sub_10526,0));	// 93026 call    sub_10526 ;~ 28F0:22ED
cs=0x28f0;eip=0x0022f2; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 93027 mov     [bp+var_C], ax ;~ 28F0:22F2
cs=0x28f0;eip=0x0022f5; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 93028 mov     [bp+var_A], dx ;~ 28F0:22F5
cs=0x28f0;eip=0x0022f8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93029 les     bx, [bp+arg_0] ;~ 28F0:22F8
cs=0x28f0;eip=0x0022fb; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 93030 mov     ax, es:[bx+120h] ;~ 28F0:22FB
cs=0x28f0;eip=0x002300; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 93031 mov     dx, es:[bx+122h] ;~ 28F0:2300
cs=0x28f0;eip=0x002305; 	T(MOV(cl, 8));	// 93032 mov     cl, 8 ;~ 28F0:2305
cs=0x28f0;eip=0x002307; 	R(CALLF(sub_10240,0));	// 93033 call    sub_10240 ;~ 28F0:2307
cs=0x28f0;eip=0x00230c; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 93034 mov     [bp+var_10], ax ;~ 28F0:230C
cs=0x28f0;eip=0x00230f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93035 les     bx, [bp+arg_0] ;~ 28F0:230F
cs=0x28f0;eip=0x002312; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x140))));	// 93036 mov     ax, es:[bx+140h] ;~ 28F0:2312
cs=0x28f0;eip=0x002317; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x142))));	// 93037 mov     dx, es:[bx+142h] ;~ 28F0:2317
cs=0x28f0;eip=0x00231c; 	T(MOV(cl, 8));	// 93038 mov     cl, 8 ;~ 28F0:231C
cs=0x28f0;eip=0x00231e; 	R(CALLF(sub_10240,0));	// 93039 call    sub_10240 ;~ 28F0:231E
cs=0x28f0;eip=0x002323; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 93040 mov     [bp+var_E], ax ;~ 28F0:2323
cs=0x28f0;eip=0x002326; 	T(ax = bp+var_10);	// 93041 lea     ax, [bp+var_10] ;~ 28F0:2326
cs=0x28f0;eip=0x002329; 	X(PUSH(ax));	// 93042 push    ax ;~ 28F0:2329
cs=0x28f0;eip=0x00232a; 	T(MOV(ax, 0x106));	// 93043 mov     ax, 106h ;~ 28F0:232A
cs=0x28f0;eip=0x00232d; 	X(PUSH(ax));	// 93044 push    ax ;~ 28F0:232D
cs=0x28f0;eip=0x00232e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 93045 mov     ax, [bp+var_C] ;~ 28F0:232E
cs=0x28f0;eip=0x002331; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_a))));	// 93046 mov     dx, [bp+var_A] ;~ 28F0:2331
cs=0x28f0;eip=0x002334; 	T(MOV(cl, 5));	// 93047 mov     cl, 5 ;~ 28F0:2334
cs=0x28f0;eip=0x002336; 	R(CALLF(sub_10240,0));	// 93048 call    sub_10240 ;~ 28F0:2336
cs=0x28f0;eip=0x00233b; 	X(PUSH(ax));	// 93049 push    ax ;~ 28F0:233B
cs=0x28f0;eip=0x00233c; 	R(CALLF(sub_24cf8,0));	// 93050 call    sub_24CF8 ;~ 28F0:233C
cs=0x28f0;eip=0x002341; 	X(PUSH(ax));	// 93051 push    ax ;~ 28F0:2341
cs=0x28f0;eip=0x002342; 	R(CALLF(sub_27d5d,0));	// 93052 call    sub_27D5D ;~ 28F0:2342
cs=0x28f0;eip=0x002347; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 93053 mov     ax, [bp+var_10] ;~ 28F0:2347
cs=0x28f0;eip=0x00234a; 	T(CWD);	// 93054 cwd ;~ 28F0:234A
cs=0x28f0;eip=0x00234b; 	T(MOV(dh, dl));	// 93055 mov     dh, dl ;~ 28F0:234B
cs=0x28f0;eip=0x00234d; 	T(MOV(dl, ah));	// 93056 mov     dl, ah ;~ 28F0:234D
cs=0x28f0;eip=0x00234f; 	T(MOV(ah, al));	// 93057 mov     ah, al ;~ 28F0:234F
cs=0x28f0;eip=0x002351; 	T(SUB(al, al));	// 93058 sub     al, al ;~ 28F0:2351
cs=0x28f0;eip=0x002353; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93059 les     bx, [bp+arg_0] ;~ 28F0:2353
cs=0x28f0;eip=0x002356; 	X(MOV(*(dw*)(raddr(es,bx+0x120)), ax));	// 93060 mov     es:[bx+120h], ax ;~ 28F0:2356
cs=0x28f0;eip=0x00235b; 	X(MOV(*(dw*)(raddr(es,bx+0x122)), dx));	// 93061 mov     es:[bx+122h], dx ;~ 28F0:235B
cs=0x28f0;eip=0x002360; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 93062 mov     ax, [bp+var_E] ;~ 28F0:2360
cs=0x28f0;eip=0x002363; 	T(CWD);	// 93063 cwd ;~ 28F0:2363
cs=0x28f0;eip=0x002364; 	T(MOV(dh, dl));	// 93064 mov     dh, dl ;~ 28F0:2364
cs=0x28f0;eip=0x002366; 	T(MOV(dl, ah));	// 93065 mov     dl, ah ;~ 28F0:2366
cs=0x28f0;eip=0x002368; 	T(MOV(ah, al));	// 93066 mov     ah, al ;~ 28F0:2368
cs=0x28f0;eip=0x00236a; 	T(SUB(al, al));	// 93067 sub     al, al ;~ 28F0:236A
cs=0x28f0;eip=0x00236c; 	X(MOV(*(dw*)(raddr(es,bx+0x140)), ax));	// 93068 mov     es:[bx+140h], ax ;~ 28F0:236C
cs=0x28f0;eip=0x002371; 	X(MOV(*(dw*)(raddr(es,bx+0x142)), dx));	// 93069 mov     es:[bx+142h], dx ;~ 28F0:2371
cs=0x28f0;eip=0x002376; 	T(MOV(ax, bx));	// 93070 mov     ax, bx ;~ 28F0:2376
cs=0x28f0;eip=0x002378; 	T(MOV(dx, es));	// 93071 mov     dx, es ;~ 28F0:2378
cs=0x28f0;eip=0x00237a; 	T(ADD(ax, 0x120));	// 93072 add     ax, 120h ;~ 28F0:237A
cs=0x28f0;eip=0x00237d; 	X(PUSH(dx));	// 93073 push    dx ;~ 28F0:237D
cs=0x28f0;eip=0x00237e; 	X(PUSH(ax));	// 93074 push    ax ;~ 28F0:237E
cs=0x28f0;eip=0x00237f; 	X(PUSH(*(dw*)(raddr(es,bx+0x12A))));	// 93075 push    word ptr es:[bx+12Ah] ;~ 28F0:237F
cs=0x28f0;eip=0x002384; 	X(PUSH(*(dw*)(raddr(es,bx+0x128))));	// 93076 push    word ptr es:[bx+128h] ;~ 28F0:2384
cs=0x28f0;eip=0x002389; 	X(PUSH(*(dw*)(raddr(es,bx+0x12E))));	// 93077 push    word ptr es:[bx+12Eh] ;~ 28F0:2389
cs=0x28f0;eip=0x00238e; 	X(PUSH(*(dw*)(raddr(es,bx+0x12C))));	// 93078 push    word ptr es:[bx+12Ch] ;~ 28F0:238E
cs=0x28f0;eip=0x002393; 	R(CALL(sub_3ba8c,0));	// 93079 call    sub_3BA8C ;~ 28F0:2393
cs=0x28f0;eip=0x002396; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93080 mov     ax, word ptr [bp+arg_0] ;~ 28F0:2396
cs=0x28f0;eip=0x002399; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93081 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:2399
cs=0x28f0;eip=0x00239c; 	T(ADD(ax, 0x140));	// 93082 add     ax, 140h ;~ 28F0:239C
cs=0x28f0;eip=0x00239f; 	X(PUSH(dx));	// 93083 push    dx ;~ 28F0:239F
cs=0x28f0;eip=0x0023a0; 	X(PUSH(ax));	// 93084 push    ax ;~ 28F0:23A0
cs=0x28f0;eip=0x0023a1; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93085 les     bx, [bp+arg_0] ;~ 28F0:23A1
cs=0x28f0;eip=0x0023a4; 	X(PUSH(*(dw*)(raddr(es,bx+0x14A))));	// 93086 push    word ptr es:[bx+14Ah] ;~ 28F0:23A4
cs=0x28f0;eip=0x0023a9; 	X(PUSH(*(dw*)(raddr(es,bx+0x148))));	// 93087 push    word ptr es:[bx+148h] ;~ 28F0:23A9
cs=0x28f0;eip=0x0023ae; 	X(PUSH(*(dw*)(raddr(es,bx+0x14E))));	// 93088 push    word ptr es:[bx+14Eh] ;~ 28F0:23AE
cs=0x28f0;eip=0x0023b3; 	X(PUSH(*(dw*)(raddr(es,bx+0x14C))));	// 93089 push    word ptr es:[bx+14Ch] ;~ 28F0:23B3
cs=0x28f0;eip=0x0023b8; 	R(CALL(sub_3ba8c,0));	// 93090 call    sub_3BA8C ;~ 28F0:23B8
loc_3989b:
	// 10383 
cs=0x28f0;eip=0x0023bb; 	T(MOV(sp, bp));	// 93093 mov     sp, bp ;~ 28F0:23BB
cs=0x28f0;eip=0x0023bd; 	X(POP(bp));	// 93094 pop     bp ;~ 28F0:23BD
cs=0x28f0;eip=0x0023be; 	R(RETN(4));	// 93095 retn    4 ;~ 28F0:23BE
sub_399d0:
	// 93226 
#undef arg_0
#define arg_0 4
	// 93228 arg_0           = dword ptr  4 ;~ 28F0:24F0
cs=0x28f0;eip=0x0024f0; 	X(PUSH(bp));	// 93230 push    bp ;~ 28F0:24F0
cs=0x28f0;eip=0x0024f1; 	T(MOV(bp, sp));	// 93231 mov     bp, sp ;~ 28F0:24F1
cs=0x28f0;eip=0x0024f3; 	T(CMP(*(dw*)((&unk_57116)), 0));	// 93232 cmp     word ptr unk_57116, 0 ;~ 28F0:24F3
cs=0x28f0;eip=0x0024f8; 	R(JNZ(loc_399dd));	// 93233 jnz     short loc_399DD ;~ 28F0:24F8
cs=0x28f0;eip=0x0024fa; 	R(JMP(loc_39a8d));	// 93234 jmp     loc_39A8D ;~ 28F0:24FA
loc_399dd:
	// 10390 
cs=0x28f0;eip=0x0024fd; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93238 push    word ptr [bp+arg_0+2] ;~ 28F0:24FD
cs=0x28f0;eip=0x002500; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93239 push    word ptr [bp+arg_0] ;~ 28F0:2500
cs=0x28f0;eip=0x002503; 	X(PUSH(*(dw*)((&unk_57116))));	// 93240 push    word ptr unk_57116 ;~ 28F0:2503
cs=0x28f0;eip=0x002507; 	R(CALL(sub_3957b,0));	// 93241 call    sub_3957B ;~ 28F0:2507
cs=0x28f0;eip=0x00250a; 	T(CMP(*(dw*)((&unk_57114)), 0));	// 93242 cmp     word ptr unk_57114, 0 ;~ 28F0:250A
cs=0x28f0;eip=0x00250f; 	R(JZ(loc_39a64));	// 93243 jz      short loc_39A64 ;~ 28F0:250F
cs=0x28f0;eip=0x002511; 	T(CMP(unk_57113, 0));	// 93244 cmp     byte ptr unk_57113, 0 ;~ 28F0:2511
cs=0x28f0;eip=0x002516; 	R(JZ(loc_39a20));	// 93245 jz      short loc_39A20 ;~ 28F0:2516
cs=0x28f0;eip=0x002518; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93246 les     bx, [bp+arg_0] ;~ 28F0:2518
cs=0x28f0;eip=0x00251b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 93247 mov     ax, es:[bx+13Ch] ;~ 28F0:251B
cs=0x28f0;eip=0x002520; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 93248 mov     dx, es:[bx+13Eh] ;~ 28F0:2520
cs=0x28f0;eip=0x002525; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93249 cmp     es:[bx+122h], dx ;~ 28F0:2525
cs=0x28f0;eip=0x00252a; 	R(JG(loc_39a1a));	// 93250 jg      short loc_39A1A ;~ 28F0:252A
cs=0x28f0;eip=0x00252c; 	R(JL(loc_39a15));	// 93251 jl      short loc_39A15 ;~ 28F0:252C
cs=0x28f0;eip=0x00252e; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93252 cmp     es:[bx+120h], ax ;~ 28F0:252E
cs=0x28f0;eip=0x002533; 	R(JA(loc_39a1a));	// 93253 ja      short loc_39A1A ;~ 28F0:2533
loc_39a15:
	// 10391 
cs=0x28f0;eip=0x002535; 	T(MOV(ax, 1));	// 93256 mov     ax, 1 ;~ 28F0:2535
cs=0x28f0;eip=0x002538; 	R(JMP(loc_39a1c));	// 93257 jmp     short loc_39A1C ;~ 28F0:2538
loc_39a1a:
	// 10392 
cs=0x28f0;eip=0x00253a; 	T(SUB(ax, ax));	// 93262 sub     ax, ax ;~ 28F0:253A
loc_39a1c:
	// 10393 
cs=0x28f0;eip=0x00253c; 	T(OR(ax, ax));	// 93265 or      ax, ax ;~ 28F0:253C
cs=0x28f0;eip=0x00253e; 	R(JNZ(loc_39a64));	// 93266 jnz     short loc_39A64 ;~ 28F0:253E
loc_39a20:
	// 10394 
cs=0x28f0;eip=0x002540; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93269 les     bx, [bp+arg_0] ;~ 28F0:2540
cs=0x28f0;eip=0x002543; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), 0));	// 93270 cmp     word ptr es:[bx+122h], 0 ;~ 28F0:2543
cs=0x28f0;eip=0x002549; 	R(JGE(loc_39a30));	// 93271 jge     short loc_39A30 ;~ 28F0:2549
cs=0x28f0;eip=0x00254b; 	T(MOV(ax, 1));	// 93272 mov     ax, 1 ;~ 28F0:254B
cs=0x28f0;eip=0x00254e; 	R(JMP(loc_39a32));	// 93273 jmp     short loc_39A32 ;~ 28F0:254E
loc_39a30:
	// 10395 
cs=0x28f0;eip=0x002550; 	T(SUB(ax, ax));	// 93277 sub     ax, ax ;~ 28F0:2550
loc_39a32:
	// 10396 
cs=0x28f0;eip=0x002552; 	T(OR(ax, ax));	// 93280 or      ax, ax ;~ 28F0:2552
cs=0x28f0;eip=0x002554; 	R(JZ(loc_39a51));	// 93281 jz      short loc_39A51 ;~ 28F0:2554
cs=0x28f0;eip=0x002556; 	T(CMP(*(raddr(es,bx+0x254)), 0));	// 93282 cmp     byte ptr es:[bx+254h], 0 ;~ 28F0:2556
cs=0x28f0;eip=0x00255c; 	R(JNZ(loc_39a51));	// 93283 jnz     short loc_39A51 ;~ 28F0:255C
cs=0x28f0;eip=0x00255e; 	T(MOV(ax, bx));	// 93284 mov     ax, bx ;~ 28F0:255E
cs=0x28f0;eip=0x002560; 	T(MOV(dx, es));	// 93285 mov     dx, es ;~ 28F0:2560
cs=0x28f0;eip=0x002562; 	T(ADD(ax, 0x0A0));	// 93286 add     ax, 0A0h ; ' ' ;~ 28F0:2562
cs=0x28f0;eip=0x002565; 	X(PUSH(dx));	// 93287 push    dx ;~ 28F0:2565
cs=0x28f0;eip=0x002566; 	X(PUSH(ax));	// 93288 push    ax ;~ 28F0:2566
cs=0x28f0;eip=0x002567; 	X(PUSH(*(dw*)((&unk_57114))));	// 93289 push    word ptr unk_57114 ;~ 28F0:2567
loc_39a4b:
	// 10397 
cs=0x28f0;eip=0x00256b; 	R(CALL(sub_39729,0));	// 93292 call    sub_39729 ;~ 28F0:256B
cs=0x28f0;eip=0x00256e; 	R(JMP(loc_39afd));	// 93293 jmp     loc_39AFD ;~ 28F0:256E
loc_39a51:
	// 10398 
cs=0x28f0;eip=0x002571; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93298 mov     ax, word ptr [bp+arg_0] ;~ 28F0:2571
cs=0x28f0;eip=0x002574; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93299 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:2574
cs=0x28f0;eip=0x002577; 	T(ADD(ax, 0x0A0));	// 93300 add     ax, 0A0h ; ' ' ;~ 28F0:2577
cs=0x28f0;eip=0x00257a; 	X(PUSH(dx));	// 93301 push    dx ;~ 28F0:257A
cs=0x28f0;eip=0x00257b; 	X(PUSH(ax));	// 93302 push    ax ;~ 28F0:257B
cs=0x28f0;eip=0x00257c; 	T(MOV(ax, *(dw*)((&unk_57114))));	// 93303 mov     ax, word ptr unk_57114 ;~ 28F0:257C
cs=0x28f0;eip=0x00257f; 	T(NEG(ax));	// 93304 neg     ax ;~ 28F0:257F
cs=0x28f0;eip=0x002581; 	X(PUSH(ax));	// 93305 push    ax ;~ 28F0:2581
cs=0x28f0;eip=0x002582; 	R(JMP(loc_39a4b));	// 93306 jmp     short loc_39A4B ;~ 28F0:2582
loc_39a64:
	// 10399 
cs=0x28f0;eip=0x002584; 	T(CMP(unk_57113, 0));	// 93311 cmp     byte ptr unk_57113, 0 ;~ 28F0:2584
cs=0x28f0;eip=0x002589; 	R(JZ(loc_39ad8));	// 93312 jz      short loc_39AD8 ;~ 28F0:2589
cs=0x28f0;eip=0x00258b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93313 les     bx, [bp+arg_0] ;~ 28F0:258B
cs=0x28f0;eip=0x00258e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 93314 mov     ax, es:[bx+13Ch] ;~ 28F0:258E
cs=0x28f0;eip=0x002593; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 93315 mov     dx, es:[bx+13Eh] ;~ 28F0:2593
cs=0x28f0;eip=0x002598; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93316 cmp     es:[bx+122h], dx ;~ 28F0:2598
cs=0x28f0;eip=0x00259d; 	R(JG(loc_39ad2));	// 93317 jg      short loc_39AD2 ;~ 28F0:259D
cs=0x28f0;eip=0x00259f; 	R(JL(loc_39a88));	// 93318 jl      short loc_39A88 ;~ 28F0:259F
cs=0x28f0;eip=0x0025a1; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93319 cmp     es:[bx+120h], ax ;~ 28F0:25A1
cs=0x28f0;eip=0x0025a6; 	R(JA(loc_39ad2));	// 93320 ja      short loc_39AD2 ;~ 28F0:25A6
loc_39a88:
	// 10400 
cs=0x28f0;eip=0x0025a8; 	T(MOV(ax, 1));	// 93324 mov     ax, 1 ;~ 28F0:25A8
cs=0x28f0;eip=0x0025ab; 	R(JMP(loc_39ad4));	// 93325 jmp     short loc_39AD4 ;~ 28F0:25AB
loc_39a8d:
	// 10401 
cs=0x28f0;eip=0x0025ad; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93329 les     bx, [bp+arg_0] ;~ 28F0:25AD
cs=0x28f0;eip=0x0025b0; 	T(SUB(ax, ax));	// 93330 sub     ax, ax ;~ 28F0:25B0
cs=0x28f0;eip=0x0025b2; 	X(MOV(*(dw*)(raddr(es,bx+0x26)), ax));	// 93331 mov     es:[bx+26h], ax ;~ 28F0:25B2
cs=0x28f0;eip=0x0025b6; 	X(MOV(*(dw*)(raddr(es,bx+0x24)), ax));	// 93332 mov     es:[bx+24h], ax ;~ 28F0:25B6
cs=0x28f0;eip=0x0025ba; 	T(MOV(ax, bx));	// 93333 mov     ax, bx ;~ 28F0:25BA
cs=0x28f0;eip=0x0025bc; 	T(MOV(dx, es));	// 93334 mov     dx, es ;~ 28F0:25BC
cs=0x28f0;eip=0x0025be; 	T(ADD(ax, 0x20));	// 93335 add     ax, 20h ; ' ' ;~ 28F0:25BE
cs=0x28f0;eip=0x0025c1; 	X(PUSH(dx));	// 93336 push    dx ;~ 28F0:25C1
cs=0x28f0;eip=0x0025c2; 	X(PUSH(ax));	// 93337 push    ax ;~ 28F0:25C2
cs=0x28f0;eip=0x0025c3; 	X(PUSH(*(dw*)(raddr(es,bx+0x36))));	// 93338 push    word ptr es:[bx+36h] ;~ 28F0:25C3
cs=0x28f0;eip=0x0025c7; 	X(PUSH(*(dw*)(raddr(es,bx+0x34))));	// 93339 push    word ptr es:[bx+34h] ;~ 28F0:25C7
cs=0x28f0;eip=0x0025cb; 	R(CALL(sub_3b9eb,0));	// 93340 call    sub_3B9EB ;~ 28F0:25CB
cs=0x28f0;eip=0x0025ce; 	T(CMP(unk_57113, 0));	// 93341 cmp     byte ptr unk_57113, 0 ;~ 28F0:25CE
cs=0x28f0;eip=0x0025d3; 	R(JZ(loc_39ad8));	// 93342 jz      short loc_39AD8 ;~ 28F0:25D3
cs=0x28f0;eip=0x0025d5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93343 les     bx, [bp+arg_0] ;~ 28F0:25D5
cs=0x28f0;eip=0x0025d8; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 93344 mov     ax, es:[bx+13Ch] ;~ 28F0:25D8
cs=0x28f0;eip=0x0025dd; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 93345 mov     dx, es:[bx+13Eh] ;~ 28F0:25DD
cs=0x28f0;eip=0x0025e2; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93346 cmp     es:[bx+122h], dx ;~ 28F0:25E2
cs=0x28f0;eip=0x0025e7; 	R(JG(loc_39ad2));	// 93347 jg      short loc_39AD2 ;~ 28F0:25E7
cs=0x28f0;eip=0x0025e9; 	R(JL(loc_39a88));	// 93348 jl      short loc_39A88 ;~ 28F0:25E9
cs=0x28f0;eip=0x0025eb; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93349 cmp     es:[bx+120h], ax ;~ 28F0:25EB
cs=0x28f0;eip=0x0025f0; 	R(JBE(loc_39a88));	// 93350 jbe     short loc_39A88 ;~ 28F0:25F0
loc_39ad2:
	// 10402 
cs=0x28f0;eip=0x0025f2; 	T(SUB(ax, ax));	// 93354 sub     ax, ax ;~ 28F0:25F2
loc_39ad4:
	// 10403 
cs=0x28f0;eip=0x0025f4; 	T(OR(ax, ax));	// 93357 or      ax, ax ;~ 28F0:25F4
cs=0x28f0;eip=0x0025f6; 	R(JNZ(loc_39afd));	// 93358 jnz     short loc_39AFD ;~ 28F0:25F6
loc_39ad8:
	// 10404 
cs=0x28f0;eip=0x0025f8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93362 les     bx, [bp+arg_0] ;~ 28F0:25F8
cs=0x28f0;eip=0x0025fb; 	T(SUB(ax, ax));	// 93363 sub     ax, ax ;~ 28F0:25FB
cs=0x28f0;eip=0x0025fd; 	X(MOV(*(dw*)(raddr(es,bx+0x0A6)), ax));	// 93364 mov     es:[bx+0A6h], ax ;~ 28F0:25FD
cs=0x28f0;eip=0x002602; 	X(MOV(*(dw*)(raddr(es,bx+0x0A4)), ax));	// 93365 mov     es:[bx+0A4h], ax ;~ 28F0:2602
cs=0x28f0;eip=0x002607; 	T(MOV(ax, bx));	// 93366 mov     ax, bx ;~ 28F0:2607
cs=0x28f0;eip=0x002609; 	T(MOV(dx, es));	// 93367 mov     dx, es ;~ 28F0:2609
cs=0x28f0;eip=0x00260b; 	T(ADD(ax, 0x0A0));	// 93368 add     ax, 0A0h ; ' ' ;~ 28F0:260B
cs=0x28f0;eip=0x00260e; 	X(PUSH(dx));	// 93369 push    dx ;~ 28F0:260E
cs=0x28f0;eip=0x00260f; 	X(PUSH(ax));	// 93370 push    ax ;~ 28F0:260F
cs=0x28f0;eip=0x002610; 	X(PUSH(*(dw*)(raddr(es,bx+0x0B6))));	// 93371 push    word ptr es:[bx+0B6h] ;~ 28F0:2610
cs=0x28f0;eip=0x002615; 	X(PUSH(*(dw*)(raddr(es,bx+0x0B4))));	// 93372 push    word ptr es:[bx+0B4h] ;~ 28F0:2615
cs=0x28f0;eip=0x00261a; 	R(CALL(sub_3b9eb,0));	// 93373 call    sub_3B9EB ;~ 28F0:261A
loc_39afd:
	// 10405 
cs=0x28f0;eip=0x00261d; 	T(CMP(*(dw*)((&unk_57114)), 0));	// 93377 cmp     word ptr unk_57114, 0 ;~ 28F0:261D
cs=0x28f0;eip=0x002622; 	R(JZ(loc_39b13));	// 93378 jz      short loc_39B13 ;~ 28F0:2622
cs=0x28f0;eip=0x002624; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93379 push    word ptr [bp+arg_0+2] ;~ 28F0:2624
cs=0x28f0;eip=0x002627; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93380 push    word ptr [bp+arg_0] ;~ 28F0:2627
cs=0x28f0;eip=0x00262a; 	X(PUSH(*(dw*)((&unk_57114))));	// 93381 push    word ptr unk_57114 ;~ 28F0:262A
cs=0x28f0;eip=0x00262e; 	R(CALL(sub_39478,0));	// 93382 call    sub_39478 ;~ 28F0:262E
cs=0x28f0;eip=0x002631; 	R(JMP(loc_39b2d));	// 93383 jmp     short loc_39B2D ;~ 28F0:2631
loc_39b13:
	// 10406 
cs=0x28f0;eip=0x002633; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93387 les     bx, [bp+arg_0] ;~ 28F0:2633
cs=0x28f0;eip=0x002636; 	T(SUB(ax, ax));	// 93388 sub     ax, ax ;~ 28F0:2636
cs=0x28f0;eip=0x002638; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 93389 mov     es:[bx+6], ax ;~ 28F0:2638
cs=0x28f0;eip=0x00263c; 	X(MOV(*(dw*)(raddr(es,bx+4)), ax));	// 93390 mov     es:[bx+4], ax ;~ 28F0:263C
cs=0x28f0;eip=0x002640; 	X(PUSH(es));	// 93391 push    es ;~ 28F0:2640
cs=0x28f0;eip=0x002641; 	X(PUSH(bx));	// 93392 push    bx ;~ 28F0:2641
cs=0x28f0;eip=0x002642; 	X(PUSH(*(dw*)(raddr(es,bx+0x16))));	// 93393 push    word ptr es:[bx+16h] ;~ 28F0:2642
cs=0x28f0;eip=0x002646; 	X(PUSH(*(dw*)(raddr(es,bx+0x14))));	// 93394 push    word ptr es:[bx+14h] ;~ 28F0:2646
cs=0x28f0;eip=0x00264a; 	R(CALL(sub_3b9eb,0));	// 93395 call    sub_3B9EB ;~ 28F0:264A
loc_39b2d:
	// 10407 
cs=0x28f0;eip=0x00264d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93398 push    word ptr [bp+arg_0+2] ;~ 28F0:264D
cs=0x28f0;eip=0x002650; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93399 push    word ptr [bp+arg_0] ;~ 28F0:2650
cs=0x28f0;eip=0x002653; 	R(CALL(sub_3b300,0));	// 93400 call    sub_3B300 ;~ 28F0:2653
cs=0x28f0;eip=0x002656; 	T(CMP(*(dw*)((&unk_57116)), 0));	// 93401 cmp     word ptr unk_57116, 0 ;~ 28F0:2656
cs=0x28f0;eip=0x00265b; 	R(JLE(loc_39b77));	// 93402 jle     short loc_39B77 ;~ 28F0:265B
cs=0x28f0;eip=0x00265d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93403 les     bx, [bp+arg_0] ;~ 28F0:265D
cs=0x28f0;eip=0x002660; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), 0));	// 93404 cmp     word ptr es:[bx+122h], 0 ;~ 28F0:2660
cs=0x28f0;eip=0x002666; 	R(JL(loc_39b77));	// 93405 jl      short loc_39B77 ;~ 28F0:2666
cs=0x28f0;eip=0x002668; 	T(MOV(ax, 0x64));	// 93406 mov     ax, 64h ; 'd' ;~ 28F0:2668
cs=0x28f0;eip=0x00266b; 	T(CWD);	// 93407 cwd ;~ 28F0:266B
cs=0x28f0;eip=0x00266c; 	X(PUSH(dx));	// 93408 push    dx ;~ 28F0:266C
cs=0x28f0;eip=0x00266d; 	X(PUSH(ax));	// 93409 push    ax ;~ 28F0:266D
cs=0x28f0;eip=0x00266e; 	T(MOV(ax, *(dw*)((&unk_57116))));	// 93410 mov     ax, word ptr unk_57116 ;~ 28F0:266E
cs=0x28f0;eip=0x002671; 	T(CWD);	// 93411 cwd ;~ 28F0:2671
cs=0x28f0;eip=0x002672; 	X(PUSH(dx));	// 93412 push    dx ;~ 28F0:2672
cs=0x28f0;eip=0x002673; 	X(PUSH(ax));	// 93413 push    ax ;~ 28F0:2673
cs=0x28f0;eip=0x002674; 	X(PUSH(*(dw*)(raddr(es,bx+0x162))));	// 93414 push    word ptr es:[bx+162h] ;~ 28F0:2674
cs=0x28f0;eip=0x002679; 	X(PUSH(*(dw*)(raddr(es,bx+0x160))));	// 93415 push    word ptr es:[bx+160h] ;~ 28F0:2679
cs=0x28f0;eip=0x00267e; 	R(CALLF(sub_105c2,0));	// 93416 call    sub_105C2 ;~ 28F0:267E
cs=0x28f0;eip=0x002683; 	X(PUSH(dx));	// 93417 push    dx ;~ 28F0:2683
cs=0x28f0;eip=0x002684; 	X(PUSH(ax));	// 93418 push    ax ;~ 28F0:2684
cs=0x28f0;eip=0x002685; 	R(CALLF(sub_10526,0));	// 93419 call    sub_10526 ;~ 28F0:2685
cs=0x28f0;eip=0x00268a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93420 les     bx, [bp+arg_0] ;~ 28F0:268A
cs=0x28f0;eip=0x00268d; 	X(SUB(*(dw*)(raddr(es,bx+0x160)), ax));	// 93421 sub     es:[bx+160h], ax ;~ 28F0:268D
cs=0x28f0;eip=0x002692; 	X(SBB(*(dw*)(raddr(es,bx+0x162)), dx));	// 93422 sbb     es:[bx+162h], dx ;~ 28F0:2692
loc_39b77:
	// 10408 
cs=0x28f0;eip=0x002697; 	X(POP(bp));	// 93426 pop     bp ;~ 28F0:2697
cs=0x28f0;eip=0x002698; 	R(RETN(4));	// 93427 retn    4 ;~ 28F0:2698
sub_39b7b:
	// 93435 
#undef arg_0
#define arg_0 4
	// 93438 arg_0           = dword ptr  4 ;~ 28F0:269B
cs=0x28f0;eip=0x00269b; 	X(PUSH(bp));	// 93440 push    bp ;~ 28F0:269B
cs=0x28f0;eip=0x00269c; 	T(MOV(bp, sp));	// 93441 mov     bp, sp ;~ 28F0:269C
cs=0x28f0;eip=0x00269e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93442 les     bx, [bp+arg_0] ;~ 28F0:269E
cs=0x28f0;eip=0x0026a1; 	T(CMP(*(dw*)(raddr(es,bx+0x212)), 0));	// 93443 cmp     word ptr es:[bx+212h], 0 ;~ 28F0:26A1
cs=0x28f0;eip=0x0026a7; 	R(JZ(loc_39bd7));	// 93444 jz      short loc_39BD7 ;~ 28F0:26A7
cs=0x28f0;eip=0x0026a9; 	T(CMP(*(dw*)((&unk_47ab2)), 3));	// 93445 cmp     word ptr unk_47AB2, 3 ;~ 28F0:26A9
cs=0x28f0;eip=0x0026ae; 	R(JZ(loc_39b97));	// 93446 jz      short loc_39B97 ;~ 28F0:26AE
cs=0x28f0;eip=0x0026b0; 	T(CMP(*(dw*)((&unk_47ab2)), 2));	// 93447 cmp     word ptr unk_47AB2, 2 ;~ 28F0:26B0
cs=0x28f0;eip=0x0026b5; 	R(JNZ(loc_39bd7));	// 93448 jnz     short loc_39BD7 ;~ 28F0:26B5
loc_39b97:
	// 10409 
cs=0x28f0;eip=0x0026b7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x128))));	// 93451 mov     ax, es:[bx+128h] ;~ 28F0:26B7
cs=0x28f0;eip=0x0026bc; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12A))));	// 93452 mov     dx, es:[bx+12Ah] ;~ 28F0:26BC
cs=0x28f0;eip=0x0026c1; 	X(MOV(*(dw*)((&unk_544ec)), ax));	// 93453 mov     word ptr unk_544EC, ax ;~ 28F0:26C1
cs=0x28f0;eip=0x0026c4; 	X(MOV(*(dw*)((&unk_544ee)), dx));	// 93454 mov     word ptr unk_544EE, dx ;~ 28F0:26C4
cs=0x28f0;eip=0x0026c8; 	T(MOV(ax, 4));	// 93455 mov     ax, 4 ;~ 28F0:26C8
cs=0x28f0;eip=0x0026cb; 	T(CWD);	// 93456 cwd ;~ 28F0:26CB
cs=0x28f0;eip=0x0026cc; 	X(PUSH(dx));	// 93457 push    dx ;~ 28F0:26CC
cs=0x28f0;eip=0x0026cd; 	X(PUSH(ax));	// 93458 push    ax ;~ 28F0:26CD
cs=0x28f0;eip=0x0026ce; 	T(MOV(ax, 3));	// 93459 mov     ax, 3 ;~ 28F0:26CE
cs=0x28f0;eip=0x0026d1; 	T(CWD);	// 93460 cwd ;~ 28F0:26D1
cs=0x28f0;eip=0x0026d2; 	X(PUSH(dx));	// 93461 push    dx ;~ 28F0:26D2
cs=0x28f0;eip=0x0026d3; 	X(PUSH(ax));	// 93462 push    ax ;~ 28F0:26D3
cs=0x28f0;eip=0x0026d4; 	X(PUSH(*(dw*)(raddr(es,bx+0x12A))));	// 93463 push    word ptr es:[bx+12Ah] ;~ 28F0:26D4
cs=0x28f0;eip=0x0026d9; 	X(PUSH(*(dw*)(raddr(es,bx+0x128))));	// 93464 push    word ptr es:[bx+128h] ;~ 28F0:26D9
cs=0x28f0;eip=0x0026de; 	R(CALLF(sub_105c2,0));	// 93465 call    sub_105C2 ;~ 28F0:26DE
cs=0x28f0;eip=0x0026e3; 	X(PUSH(dx));	// 93466 push    dx ;~ 28F0:26E3
cs=0x28f0;eip=0x0026e4; 	X(PUSH(ax));	// 93467 push    ax ;~ 28F0:26E4
cs=0x28f0;eip=0x0026e5; 	R(CALLF(sub_10526,0));	// 93468 call    sub_10526 ;~ 28F0:26E5
cs=0x28f0;eip=0x0026ea; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93469 les     bx, [bp+arg_0] ;~ 28F0:26EA
cs=0x28f0;eip=0x0026ed; 	X(MOV(*(dw*)(raddr(es,bx+0x128)), ax));	// 93470 mov     es:[bx+128h], ax ;~ 28F0:26ED
cs=0x28f0;eip=0x0026f2; 	X(MOV(*(dw*)(raddr(es,bx+0x12A)), dx));	// 93471 mov     es:[bx+12Ah], dx ;~ 28F0:26F2
loc_39bd7:
	// 10410 
cs=0x28f0;eip=0x0026f7; 	X(POP(bp));	// 93475 pop     bp ;~ 28F0:26F7
cs=0x28f0;eip=0x0026f8; 	R(RETN(4));	// 93476 retn    4 ;~ 28F0:26F8
sub_39bdb:
	// 93484 
#undef arg_0
#define arg_0 4
	// 93487 arg_0           = dword ptr  4 ;~ 28F0:26FB
cs=0x28f0;eip=0x0026fb; 	X(PUSH(bp));	// 93489 push    bp ;~ 28F0:26FB
cs=0x28f0;eip=0x0026fc; 	T(MOV(bp, sp));	// 93490 mov     bp, sp ;~ 28F0:26FC
cs=0x28f0;eip=0x0026fe; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93491 les     bx, [bp+arg_0] ;~ 28F0:26FE
cs=0x28f0;eip=0x002701; 	T(CMP(*(dw*)(raddr(es,bx+0x212)), 0));	// 93492 cmp     word ptr es:[bx+212h], 0 ;~ 28F0:2701
cs=0x28f0;eip=0x002707; 	R(JZ(loc_39c08));	// 93493 jz      short loc_39C08 ;~ 28F0:2707
cs=0x28f0;eip=0x002709; 	T(CMP(*(dw*)((&unk_47ab2)), 3));	// 93494 cmp     word ptr unk_47AB2, 3 ;~ 28F0:2709
cs=0x28f0;eip=0x00270e; 	R(JZ(loc_39bf7));	// 93495 jz      short loc_39BF7 ;~ 28F0:270E
cs=0x28f0;eip=0x002710; 	T(CMP(*(dw*)((&unk_47ab2)), 2));	// 93496 cmp     word ptr unk_47AB2, 2 ;~ 28F0:2710
cs=0x28f0;eip=0x002715; 	R(JNZ(loc_39c08));	// 93497 jnz     short loc_39C08 ;~ 28F0:2715
loc_39bf7:
	// 10411 
cs=0x28f0;eip=0x002717; 	T(MOV(ax, *(dw*)((&unk_544ec))));	// 93500 mov     ax, word ptr unk_544EC ;~ 28F0:2717
cs=0x28f0;eip=0x00271a; 	T(MOV(dx, *(dw*)((&unk_544ee))));	// 93501 mov     dx, word ptr unk_544EE ;~ 28F0:271A
cs=0x28f0;eip=0x00271e; 	X(MOV(*(dw*)(raddr(es,bx+0x128)), ax));	// 93502 mov     es:[bx+128h], ax ;~ 28F0:271E
cs=0x28f0;eip=0x002723; 	X(MOV(*(dw*)(raddr(es,bx+0x12A)), dx));	// 93503 mov     es:[bx+12Ah], dx ;~ 28F0:2723
loc_39c08:
	// 10412 
cs=0x28f0;eip=0x002728; 	X(POP(bp));	// 93507 pop     bp ;~ 28F0:2728
cs=0x28f0;eip=0x002729; 	R(RETN(4));	// 93508 retn    4 ;~ 28F0:2729
sub_39c0c:
	// 93516 
#undef var_8
#define var_8 -8
	// 93519 var_8           = dword ptr -8 ;~ 28F0:272C
#undef var_4
#define var_4 -4
	// 93520 var_4           = dword ptr -4 ;~ 28F0:272C
#undef arg_0
#define arg_0 4
	// 93521 arg_0           = dword ptr  4 ;~ 28F0:272C
cs=0x28f0;eip=0x00272c; 	X(PUSH(bp));	// 93523 push    bp ;~ 28F0:272C
cs=0x28f0;eip=0x00272d; 	T(MOV(bp, sp));	// 93524 mov     bp, sp ;~ 28F0:272D
cs=0x28f0;eip=0x00272f; 	T(SUB(sp, 8));	// 93525 sub     sp, 8 ;~ 28F0:272F
cs=0x28f0;eip=0x002732; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93526 push    word ptr [bp+arg_0+2] ;~ 28F0:2732
cs=0x28f0;eip=0x002735; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93527 push    word ptr [bp+arg_0] ;~ 28F0:2735
cs=0x28f0;eip=0x002738; 	R(CALL(sub_39b7b,0));	// 93528 call    sub_39B7B ;~ 28F0:2738
cs=0x28f0;eip=0x00273b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93529 les     bx, [bp+arg_0] ;~ 28F0:273B
cs=0x28f0;eip=0x00273e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 93530 mov     ax, es:[bx+2FAh] ;~ 28F0:273E
cs=0x28f0;eip=0x002743; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 93531 mov     dx, es:[bx+2FCh] ;~ 28F0:2743
cs=0x28f0;eip=0x002748; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 93532 add     ax, es:[bx+302h] ;~ 28F0:2748
cs=0x28f0;eip=0x00274d; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 93533 adc     dx, es:[bx+304h] ;~ 28F0:274D
cs=0x28f0;eip=0x002752; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 93534 les     bx, es:[bx+31Ch] ;~ 28F0:2752
cs=0x28f0;eip=0x002757; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 93535 cmp     dx, es:[bx+0Ch] ;~ 28F0:2757
cs=0x28f0;eip=0x00275b; 	R(JLE(loc_39c40));	// 93536 jle     short loc_39C40 ;~ 28F0:275B
cs=0x28f0;eip=0x00275d; 	R(JMP(loc_3a117));	// 93537 jmp     loc_3A117 ;~ 28F0:275D
loc_39c40:
	// 10413 
cs=0x28f0;eip=0x002760; 	R(JL(loc_39c4b));	// 93541 jl      short loc_39C4B ;~ 28F0:2760
cs=0x28f0;eip=0x002762; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 93542 cmp     ax, es:[bx+0Ah] ;~ 28F0:2762
cs=0x28f0;eip=0x002766; 	R(JC(loc_39c4b));	// 93543 jb      short loc_39C4B ;~ 28F0:2766
cs=0x28f0;eip=0x002768; 	R(JMP(loc_3a117));	// 93544 jmp     loc_3A117 ;~ 28F0:2768
loc_39c4b:
	// 10414 
cs=0x28f0;eip=0x00276b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93549 les     bx, [bp+arg_0] ;~ 28F0:276B
cs=0x28f0;eip=0x00276e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x32C))));	// 93550 mov     ax, es:[bx+32Ch] ;~ 28F0:276E
cs=0x28f0;eip=0x002773; 	T(OR(ax, *(dw*)(raddr(es,bx+0x32E))));	// 93551 or      ax, es:[bx+32Eh] ;~ 28F0:2773
cs=0x28f0;eip=0x002778; 	R(JNZ(loc_39c5d));	// 93552 jnz     short loc_39C5D ;~ 28F0:2778
cs=0x28f0;eip=0x00277a; 	R(JMP(loc_39d11));	// 93553 jmp     loc_39D11 ;~ 28F0:277A
loc_39c5d:
	// 10415 
cs=0x28f0;eip=0x00277d; 	T(MOV(ax, 0x249));	// 93557 mov     ax, 249h ;~ 28F0:277D
cs=0x28f0;eip=0x002780; 	T(MOV(dx, seg_offset(seg041)));	// 93558 mov     dx, seg seg041 ;~ 28F0:2780
cs=0x28f0;eip=0x002783; 	X(PUSH(dx));	// 93559 push    dx ;~ 28F0:2783
cs=0x28f0;eip=0x002784; 	X(PUSH(ax));	// 93560 push    ax ;~ 28F0:2784
cs=0x28f0;eip=0x002785; 	R(CALLF(sub_1c5f1,0));	// 93561 call    sub_1C5F1 ;~ 28F0:2785
cs=0x28f0;eip=0x00278a; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 93562 mov     ax, word ptr unk_57111 ;~ 28F0:278A
cs=0x28f0;eip=0x00278d; 	T(CWD);	// 93563 cwd ;~ 28F0:278D
cs=0x28f0;eip=0x00278e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93564 les     bx, [bp+arg_0] ;~ 28F0:278E
cs=0x28f0;eip=0x002791; 	X(SUB(*(dw*)(raddr(es,bx+0x32C)), ax));	// 93565 sub     es:[bx+32Ch], ax ;~ 28F0:2791
cs=0x28f0;eip=0x002796; 	X(SBB(*(dw*)(raddr(es,bx+0x32E)), dx));	// 93566 sbb     es:[bx+32Eh], dx ;~ 28F0:2796
cs=0x28f0;eip=0x00279b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x32C))));	// 93567 mov     ax, es:[bx+32Ch] ;~ 28F0:279B
cs=0x28f0;eip=0x0027a0; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x32E))));	// 93568 mov     dx, es:[bx+32Eh] ;~ 28F0:27A0
cs=0x28f0;eip=0x0027a5; 	T(OR(dx, dx));	// 93569 or      dx, dx ;~ 28F0:27A5
cs=0x28f0;eip=0x0027a7; 	R(JG(loc_39c8f));	// 93570 jg      short loc_39C8F ;~ 28F0:27A7
cs=0x28f0;eip=0x0027a9; 	R(JGE(loc_39c8f));	// 93571 jge     short loc_39C8F ;~ 28F0:27A9
cs=0x28f0;eip=0x0027ab; 	T(SUB(dx, dx));	// 93572 sub     dx, dx ;~ 28F0:27AB
cs=0x28f0;eip=0x0027ad; 	T(SUB(ax, ax));	// 93573 sub     ax, ax ;~ 28F0:27AD
loc_39c8f:
	// 10416 
cs=0x28f0;eip=0x0027af; 	X(MOV(*(dw*)(raddr(es,bx+0x32C)), ax));	// 93577 mov     es:[bx+32Ch], ax ;~ 28F0:27AF
cs=0x28f0;eip=0x0027b4; 	X(MOV(*(dw*)(raddr(es,bx+0x32E)), dx));	// 93578 mov     es:[bx+32Eh], dx ;~ 28F0:27B4
cs=0x28f0;eip=0x0027b9; 	T(OR(ax, dx));	// 93579 or      ax, dx ;~ 28F0:27B9
cs=0x28f0;eip=0x0027bb; 	R(JNZ(loc_39cd0));	// 93580 jnz     short loc_39CD0 ;~ 28F0:27BB
cs=0x28f0;eip=0x0027bd; 	X(PUSH(es));	// 93581 push    es ;~ 28F0:27BD
cs=0x28f0;eip=0x0027be; 	X(PUSH(bx));	// 93582 push    bx ;~ 28F0:27BE
cs=0x28f0;eip=0x0027bf; 	R(CALL(sub_39bdb,0));	// 93583 call    sub_39BDB ;~ 28F0:27BF
cs=0x28f0;eip=0x0027c2; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93584 push    word ptr [bp+arg_0+2] ;~ 28F0:27C2
cs=0x28f0;eip=0x0027c5; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93585 push    word ptr [bp+arg_0] ;~ 28F0:27C5
cs=0x28f0;eip=0x0027c8; 	R(CALL(sub_38ca4,0));	// 93586 call    sub_38CA4 ;~ 28F0:27C8
cs=0x28f0;eip=0x0027cb; 	T(OR(ax, ax));	// 93587 or      ax, ax ;~ 28F0:27CB
cs=0x28f0;eip=0x0027cd; 	R(JZ(loc_39cb7));	// 93588 jz      short loc_39CB7 ;~ 28F0:27CD
cs=0x28f0;eip=0x0027cf; 	T(MOV(ax, 0x269));	// 93589 mov     ax, 269h ;~ 28F0:27CF
cs=0x28f0;eip=0x0027d2; 	T(MOV(dx, seg_offset(seg041)));	// 93590 mov     dx, seg seg041 ;~ 28F0:27D2
cs=0x28f0;eip=0x0027d5; 	R(JMP(loc_39cbd));	// 93591 jmp     short loc_39CBD ;~ 28F0:27D5
loc_39cb7:
	// 10417 
cs=0x28f0;eip=0x0027d7; 	T(MOV(ax, 0x288));	// 93595 mov     ax, 288h ;~ 28F0:27D7
cs=0x28f0;eip=0x0027da; 	T(MOV(dx, seg_offset(seg041)));	// 93596 mov     dx, seg seg041 ;~ 28F0:27DA
loc_39cbd:
	// 10418 
cs=0x28f0;eip=0x0027dd; 	X(PUSH(dx));	// 93599 push    dx ;~ 28F0:27DD
cs=0x28f0;eip=0x0027de; 	X(PUSH(ax));	// 93600 push    ax ;~ 28F0:27DE
cs=0x28f0;eip=0x0027df; 	R(CALLF(sub_1c5f1,0));	// 93601 call    sub_1C5F1 ;~ 28F0:27DF
cs=0x28f0;eip=0x0027e4; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93602 push    word ptr [bp+arg_0+2] ;~ 28F0:27E4
cs=0x28f0;eip=0x0027e7; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93603 push    word ptr [bp+arg_0] ;~ 28F0:27E7
cs=0x28f0;eip=0x0027ea; 	R(CALL(sub_39b7b,0));	// 93604 call    sub_39B7B ;~ 28F0:27EA
cs=0x28f0;eip=0x0027ed; 	R(JMP(loc_3a15c));	// 93605 jmp     loc_3A15C ;~ 28F0:27ED
loc_39cd0:
	// 10419 
cs=0x28f0;eip=0x0027f0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93609 les     bx, [bp+arg_0] ;~ 28F0:27F0
cs=0x28f0;eip=0x0027f3; 	T(SUB(ax, ax));	// 93610 sub     ax, ax ;~ 28F0:27F3
cs=0x28f0;eip=0x0027f5; 	T(CWD);	// 93611 cwd ;~ 28F0:27F5
cs=0x28f0;eip=0x0027f6; 	X(MOV(*(dw*)(raddr(es,bx+0x24)), ax));	// 93612 mov     es:[bx+24h], ax ;~ 28F0:27F6
cs=0x28f0;eip=0x0027fa; 	X(MOV(*(dw*)(raddr(es,bx+0x26)), dx));	// 93613 mov     es:[bx+26h], dx ;~ 28F0:27FA
cs=0x28f0;eip=0x0027fe; 	X(MOV(*(dw*)(raddr(es,bx+4)), ax));	// 93614 mov     es:[bx+4], ax ;~ 28F0:27FE
cs=0x28f0;eip=0x002802; 	X(MOV(*(dw*)(raddr(es,bx+6)), dx));	// 93615 mov     es:[bx+6], dx ;~ 28F0:2802
cs=0x28f0;eip=0x002806; 	T(MOV(ax, bx));	// 93616 mov     ax, bx ;~ 28F0:2806
cs=0x28f0;eip=0x002808; 	T(MOV(dx, es));	// 93617 mov     dx, es ;~ 28F0:2808
cs=0x28f0;eip=0x00280a; 	T(ADD(ax, 0x20));	// 93618 add     ax, 20h ; ' ' ;~ 28F0:280A
cs=0x28f0;eip=0x00280d; 	X(PUSH(dx));	// 93619 push    dx ;~ 28F0:280D
cs=0x28f0;eip=0x00280e; 	X(PUSH(ax));	// 93620 push    ax ;~ 28F0:280E
cs=0x28f0;eip=0x00280f; 	X(PUSH(*(dw*)(raddr(es,bx+0x36))));	// 93621 push    word ptr es:[bx+36h] ;~ 28F0:280F
cs=0x28f0;eip=0x002813; 	X(PUSH(*(dw*)(raddr(es,bx+0x34))));	// 93622 push    word ptr es:[bx+34h] ;~ 28F0:2813
cs=0x28f0;eip=0x002817; 	R(CALL(sub_3b9eb,0));	// 93623 call    sub_3B9EB ;~ 28F0:2817
cs=0x28f0;eip=0x00281a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93624 push    word ptr [bp+arg_0+2] ;~ 28F0:281A
cs=0x28f0;eip=0x00281d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93625 push    word ptr [bp+arg_0] ;~ 28F0:281D
cs=0x28f0;eip=0x002820; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93626 les     bx, [bp+arg_0] ;~ 28F0:2820
loc_39d03:
	// 10420 
cs=0x28f0;eip=0x002823; 	X(PUSH(*(dw*)(raddr(es,bx+0x16))));	// 93629 push    word ptr es:[bx+16h] ;~ 28F0:2823
cs=0x28f0;eip=0x002827; 	X(PUSH(*(dw*)(raddr(es,bx+0x14))));	// 93630 push    word ptr es:[bx+14h] ;~ 28F0:2827
cs=0x28f0;eip=0x00282b; 	R(CALL(sub_3b9eb,0));	// 93631 call    sub_3B9EB ;~ 28F0:282B
cs=0x28f0;eip=0x00282e; 	R(JMP(loc_3a15c));	// 93632 jmp     loc_3A15C ;~ 28F0:282E
loc_39d11:
	// 10421 
cs=0x28f0;eip=0x002831; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93636 mov     ax, word ptr [bp+arg_0] ;~ 28F0:2831
cs=0x28f0;eip=0x002834; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93637 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:2834
cs=0x28f0;eip=0x002837; 	T(ADD(ax, 0x120));	// 93638 add     ax, 120h ;~ 28F0:2837
cs=0x28f0;eip=0x00283a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 93639 mov     word ptr [bp+var_4], ax ;~ 28F0:283A
cs=0x28f0;eip=0x00283d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 93640 mov     word ptr [bp+var_4+2], dx ;~ 28F0:283D
cs=0x28f0;eip=0x002840; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93641 mov     ax, word ptr [bp+arg_0] ;~ 28F0:2840
cs=0x28f0;eip=0x002843; 	T(ADD(ax, 0x20));	// 93642 add     ax, 20h ; ' ' ;~ 28F0:2843
cs=0x28f0;eip=0x002846; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 93643 mov     word ptr [bp+var_8], ax ;~ 28F0:2846
cs=0x28f0;eip=0x002849; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 93644 mov     word ptr [bp+var_8+2], dx ;~ 28F0:2849
cs=0x28f0;eip=0x00284c; 	T(CMP(*(dw*)((&unk_57116)), 0));	// 93645 cmp     word ptr unk_57116, 0 ;~ 28F0:284C
cs=0x28f0;eip=0x002851; 	R(JNZ(loc_39d36));	// 93646 jnz     short loc_39D36 ;~ 28F0:2851
cs=0x28f0;eip=0x002853; 	R(JMP(loc_39e52));	// 93647 jmp     loc_39E52 ;~ 28F0:2853
loc_39d36:
	// 10422 
cs=0x28f0;eip=0x002856; 	X(PUSH(dx));	// 93651 push    dx ;~ 28F0:2856
cs=0x28f0;eip=0x002857; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93652 push    word ptr [bp+arg_0] ;~ 28F0:2857
cs=0x28f0;eip=0x00285a; 	X(PUSH(*(dw*)((&unk_57116))));	// 93653 push    word ptr unk_57116 ;~ 28F0:285A
cs=0x28f0;eip=0x00285e; 	R(CALL(sub_3957b,0));	// 93654 call    sub_3957B ;~ 28F0:285E
cs=0x28f0;eip=0x002861; 	T(CMP(unk_57113, 0));	// 93655 cmp     byte ptr unk_57113, 0 ;~ 28F0:2861
cs=0x28f0;eip=0x002866; 	R(JZ(loc_39d98));	// 93656 jz      short loc_39D98 ;~ 28F0:2866
cs=0x28f0;eip=0x002868; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93657 les     bx, [bp+arg_0] ;~ 28F0:2868
cs=0x28f0;eip=0x00286b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x138))));	// 93658 mov     ax, es:[bx+138h] ;~ 28F0:286B
cs=0x28f0;eip=0x002870; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13A))));	// 93659 mov     dx, es:[bx+13Ah] ;~ 28F0:2870
cs=0x28f0;eip=0x002875; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93660 cmp     es:[bx+122h], dx ;~ 28F0:2875
cs=0x28f0;eip=0x00287a; 	R(JL(loc_39d6a));	// 93661 jl      short loc_39D6A ;~ 28F0:287A
cs=0x28f0;eip=0x00287c; 	R(JG(loc_39d65));	// 93662 jg      short loc_39D65 ;~ 28F0:287C
cs=0x28f0;eip=0x00287e; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93663 cmp     es:[bx+120h], ax ;~ 28F0:287E
cs=0x28f0;eip=0x002883; 	R(JC(loc_39d6a));	// 93664 jb      short loc_39D6A ;~ 28F0:2883
loc_39d65:
	// 10423 
cs=0x28f0;eip=0x002885; 	T(MOV(ax, 1));	// 93667 mov     ax, 1 ;~ 28F0:2885
cs=0x28f0;eip=0x002888; 	R(JMP(loc_39d6c));	// 93668 jmp     short loc_39D6C ;~ 28F0:2888
loc_39d6a:
	// 10424 
cs=0x28f0;eip=0x00288a; 	T(SUB(ax, ax));	// 93673 sub     ax, ax ;~ 28F0:288A
loc_39d6c:
	// 10425 
cs=0x28f0;eip=0x00288c; 	T(OR(ax, ax));	// 93676 or      ax, ax ;~ 28F0:288C
cs=0x28f0;eip=0x00288e; 	R(JNZ(loc_39da5));	// 93677 jnz     short loc_39DA5 ;~ 28F0:288E
cs=0x28f0;eip=0x002890; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93678 les     bx, [bp+arg_0] ;~ 28F0:2890
cs=0x28f0;eip=0x002893; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 93679 mov     ax, es:[bx+13Ch] ;~ 28F0:2893
cs=0x28f0;eip=0x002898; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 93680 mov     dx, es:[bx+13Eh] ;~ 28F0:2898
cs=0x28f0;eip=0x00289d; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93681 cmp     es:[bx+122h], dx ;~ 28F0:289D
cs=0x28f0;eip=0x0028a2; 	R(JG(loc_39d92));	// 93682 jg      short loc_39D92 ;~ 28F0:28A2
cs=0x28f0;eip=0x0028a4; 	R(JL(loc_39d8d));	// 93683 jl      short loc_39D8D ;~ 28F0:28A4
cs=0x28f0;eip=0x0028a6; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93684 cmp     es:[bx+120h], ax ;~ 28F0:28A6
cs=0x28f0;eip=0x0028ab; 	R(JA(loc_39d92));	// 93685 ja      short loc_39D92 ;~ 28F0:28AB
loc_39d8d:
	// 10426 
cs=0x28f0;eip=0x0028ad; 	T(MOV(ax, 1));	// 93688 mov     ax, 1 ;~ 28F0:28AD
cs=0x28f0;eip=0x0028b0; 	R(JMP(loc_39d94));	// 93689 jmp     short loc_39D94 ;~ 28F0:28B0
loc_39d92:
	// 10427 
cs=0x28f0;eip=0x0028b2; 	T(SUB(ax, ax));	// 93694 sub     ax, ax ;~ 28F0:28B2
loc_39d94:
	// 10428 
cs=0x28f0;eip=0x0028b4; 	T(OR(ax, ax));	// 93697 or      ax, ax ;~ 28F0:28B4
cs=0x28f0;eip=0x0028b6; 	R(JNZ(loc_39da5));	// 93698 jnz     short loc_39DA5 ;~ 28F0:28B6
loc_39d98:
	// 10429 
cs=0x28f0;eip=0x0028b8; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 93701 push    word ptr [bp+var_4+2] ;~ 28F0:28B8
cs=0x28f0;eip=0x0028bb; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 93702 push    word ptr [bp+var_4] ;~ 28F0:28BB
cs=0x28f0;eip=0x0028be; 	X(PUSH(*(dw*)((&unk_57116))));	// 93703 push    word ptr unk_57116 ;~ 28F0:28BE
cs=0x28f0;eip=0x0028c2; 	R(CALL(sub_38eff,0));	// 93704 call    sub_38EFF ;~ 28F0:28C2
loc_39da5:
	// 10430 
cs=0x28f0;eip=0x0028c5; 	T(CMP(*(dw*)((&unk_57114)), 0));	// 93708 cmp     word ptr unk_57114, 0 ;~ 28F0:28C5
cs=0x28f0;eip=0x0028ca; 	R(JZ(loc_39e1f));	// 93709 jz      short loc_39E1F ;~ 28F0:28CA
cs=0x28f0;eip=0x0028cc; 	T(CMP(unk_57113, 0));	// 93710 cmp     byte ptr unk_57113, 0 ;~ 28F0:28CC
cs=0x28f0;eip=0x0028d1; 	R(JZ(loc_39ddb));	// 93711 jz      short loc_39DDB ;~ 28F0:28D1
cs=0x28f0;eip=0x0028d3; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93712 les     bx, [bp+arg_0] ;~ 28F0:28D3
cs=0x28f0;eip=0x0028d6; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 93713 mov     ax, es:[bx+13Ch] ;~ 28F0:28D6
cs=0x28f0;eip=0x0028db; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 93714 mov     dx, es:[bx+13Eh] ;~ 28F0:28DB
cs=0x28f0;eip=0x0028e0; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93715 cmp     es:[bx+122h], dx ;~ 28F0:28E0
cs=0x28f0;eip=0x0028e5; 	R(JG(loc_39dd5));	// 93716 jg      short loc_39DD5 ;~ 28F0:28E5
cs=0x28f0;eip=0x0028e7; 	R(JL(loc_39dd0));	// 93717 jl      short loc_39DD0 ;~ 28F0:28E7
cs=0x28f0;eip=0x0028e9; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93718 cmp     es:[bx+120h], ax ;~ 28F0:28E9
cs=0x28f0;eip=0x0028ee; 	R(JA(loc_39dd5));	// 93719 ja      short loc_39DD5 ;~ 28F0:28EE
loc_39dd0:
	// 10431 
cs=0x28f0;eip=0x0028f0; 	T(MOV(ax, 1));	// 93722 mov     ax, 1 ;~ 28F0:28F0
cs=0x28f0;eip=0x0028f3; 	R(JMP(loc_39dd7));	// 93723 jmp     short loc_39DD7 ;~ 28F0:28F3
loc_39dd5:
	// 10432 
cs=0x28f0;eip=0x0028f5; 	T(SUB(ax, ax));	// 93728 sub     ax, ax ;~ 28F0:28F5
loc_39dd7:
	// 10433 
cs=0x28f0;eip=0x0028f7; 	T(OR(ax, ax));	// 93731 or      ax, ax ;~ 28F0:28F7
cs=0x28f0;eip=0x0028f9; 	R(JNZ(loc_39e1f));	// 93732 jnz     short loc_39E1F ;~ 28F0:28F9
loc_39ddb:
	// 10434 
cs=0x28f0;eip=0x0028fb; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93735 les     bx, [bp+arg_0] ;~ 28F0:28FB
cs=0x28f0;eip=0x0028fe; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), 0));	// 93736 cmp     word ptr es:[bx+122h], 0 ;~ 28F0:28FE
cs=0x28f0;eip=0x002904; 	R(JGE(loc_39deb));	// 93737 jge     short loc_39DEB ;~ 28F0:2904
cs=0x28f0;eip=0x002906; 	T(MOV(ax, 1));	// 93738 mov     ax, 1 ;~ 28F0:2906
cs=0x28f0;eip=0x002909; 	R(JMP(loc_39ded));	// 93739 jmp     short loc_39DED ;~ 28F0:2909
loc_39deb:
	// 10435 
cs=0x28f0;eip=0x00290b; 	T(SUB(ax, ax));	// 93743 sub     ax, ax ;~ 28F0:290B
loc_39ded:
	// 10436 
cs=0x28f0;eip=0x00290d; 	T(OR(ax, ax));	// 93746 or      ax, ax ;~ 28F0:290D
cs=0x28f0;eip=0x00290f; 	R(JZ(loc_39e0c));	// 93747 jz      short loc_39E0C ;~ 28F0:290F
cs=0x28f0;eip=0x002911; 	T(CMP(*(raddr(es,bx+0x254)), 0));	// 93748 cmp     byte ptr es:[bx+254h], 0 ;~ 28F0:2911
cs=0x28f0;eip=0x002917; 	R(JNZ(loc_39e0c));	// 93749 jnz     short loc_39E0C ;~ 28F0:2917
cs=0x28f0;eip=0x002919; 	T(MOV(ax, bx));	// 93750 mov     ax, bx ;~ 28F0:2919
cs=0x28f0;eip=0x00291b; 	T(MOV(dx, es));	// 93751 mov     dx, es ;~ 28F0:291B
cs=0x28f0;eip=0x00291d; 	T(ADD(ax, 0x0A0));	// 93752 add     ax, 0A0h ; ' ' ;~ 28F0:291D
cs=0x28f0;eip=0x002920; 	X(PUSH(dx));	// 93753 push    dx ;~ 28F0:2920
cs=0x28f0;eip=0x002921; 	X(PUSH(ax));	// 93754 push    ax ;~ 28F0:2921
cs=0x28f0;eip=0x002922; 	X(PUSH(*(dw*)((&unk_57114))));	// 93755 push    word ptr unk_57114 ;~ 28F0:2922
loc_39e06:
	// 10437 
cs=0x28f0;eip=0x002926; 	R(CALL(sub_39729,0));	// 93758 call    sub_39729 ;~ 28F0:2926
cs=0x28f0;eip=0x002929; 	R(JMP(loc_39f0a));	// 93759 jmp     loc_39F0A ;~ 28F0:2929
loc_39e0c:
	// 10438 
cs=0x28f0;eip=0x00292c; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93764 mov     ax, word ptr [bp+arg_0] ;~ 28F0:292C
cs=0x28f0;eip=0x00292f; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93765 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:292F
cs=0x28f0;eip=0x002932; 	T(ADD(ax, 0x0A0));	// 93766 add     ax, 0A0h ; ' ' ;~ 28F0:2932
cs=0x28f0;eip=0x002935; 	X(PUSH(dx));	// 93767 push    dx ;~ 28F0:2935
cs=0x28f0;eip=0x002936; 	X(PUSH(ax));	// 93768 push    ax ;~ 28F0:2936
cs=0x28f0;eip=0x002937; 	T(MOV(ax, *(dw*)((&unk_57114))));	// 93769 mov     ax, word ptr unk_57114 ;~ 28F0:2937
cs=0x28f0;eip=0x00293a; 	T(NEG(ax));	// 93770 neg     ax ;~ 28F0:293A
cs=0x28f0;eip=0x00293c; 	X(PUSH(ax));	// 93771 push    ax ;~ 28F0:293C
cs=0x28f0;eip=0x00293d; 	R(JMP(loc_39e06));	// 93772 jmp     short loc_39E06 ;~ 28F0:293D
loc_39e1f:
	// 10439 
cs=0x28f0;eip=0x00293f; 	T(CMP(unk_57113, 0));	// 93777 cmp     byte ptr unk_57113, 0 ;~ 28F0:293F
cs=0x28f0;eip=0x002944; 	R(JNZ(loc_39e29));	// 93778 jnz     short loc_39E29 ;~ 28F0:2944
cs=0x28f0;eip=0x002946; 	R(JMP(loc_39ee5));	// 93779 jmp     loc_39EE5 ;~ 28F0:2946
loc_39e29:
	// 10440 
cs=0x28f0;eip=0x002949; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93783 les     bx, [bp+arg_0] ;~ 28F0:2949
cs=0x28f0;eip=0x00294c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 93784 mov     ax, es:[bx+13Ch] ;~ 28F0:294C
cs=0x28f0;eip=0x002951; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 93785 mov     dx, es:[bx+13Eh] ;~ 28F0:2951
cs=0x28f0;eip=0x002956; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93786 cmp     es:[bx+122h], dx ;~ 28F0:2956
cs=0x28f0;eip=0x00295b; 	R(JLE(loc_39e40));	// 93787 jle     short loc_39E40 ;~ 28F0:295B
cs=0x28f0;eip=0x00295d; 	R(JMP(loc_39edf));	// 93788 jmp     loc_39EDF ;~ 28F0:295D
loc_39e40:
	// 10441 
cs=0x28f0;eip=0x002960; 	R(JL(loc_39e4c));	// 93792 jl      short loc_39E4C ;~ 28F0:2960
cs=0x28f0;eip=0x002962; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93793 cmp     es:[bx+120h], ax ;~ 28F0:2962
cs=0x28f0;eip=0x002967; 	R(JBE(loc_39e4c));	// 93794 jbe     short loc_39E4C ;~ 28F0:2967
cs=0x28f0;eip=0x002969; 	R(JMP(loc_39edf));	// 93795 jmp     loc_39EDF ;~ 28F0:2969
loc_39e4c:
	// 10442 
cs=0x28f0;eip=0x00296c; 	T(MOV(ax, 1));	// 93800 mov     ax, 1 ;~ 28F0:296C
cs=0x28f0;eip=0x00296f; 	R(JMP(loc_39ee1));	// 93801 jmp     loc_39EE1 ;~ 28F0:296F
loc_39e52:
	// 10443 
cs=0x28f0;eip=0x002972; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 93805 les     bx, [bp+var_8] ;~ 28F0:2972
cs=0x28f0;eip=0x002975; 	T(SUB(ax, ax));	// 93806 sub     ax, ax ;~ 28F0:2975
cs=0x28f0;eip=0x002977; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 93807 mov     es:[bx+6], ax ;~ 28F0:2977
cs=0x28f0;eip=0x00297b; 	X(MOV(*(dw*)(raddr(es,bx+4)), ax));	// 93808 mov     es:[bx+4], ax ;~ 28F0:297B
cs=0x28f0;eip=0x00297f; 	X(PUSH(es));	// 93809 push    es ;~ 28F0:297F
cs=0x28f0;eip=0x002980; 	X(PUSH(bx));	// 93810 push    bx ;~ 28F0:2980
cs=0x28f0;eip=0x002981; 	X(PUSH(*(dw*)(raddr(es,bx+0x16))));	// 93811 push    word ptr es:[bx+16h] ;~ 28F0:2981
cs=0x28f0;eip=0x002985; 	X(PUSH(*(dw*)(raddr(es,bx+0x14))));	// 93812 push    word ptr es:[bx+14h] ;~ 28F0:2985
cs=0x28f0;eip=0x002989; 	R(CALL(sub_3b9eb,0));	// 93813 call    sub_3B9EB ;~ 28F0:2989
cs=0x28f0;eip=0x00298c; 	T(CMP(unk_57113, 0));	// 93814 cmp     byte ptr unk_57113, 0 ;~ 28F0:298C
cs=0x28f0;eip=0x002991; 	R(JZ(loc_39e9b));	// 93815 jz      short loc_39E9B ;~ 28F0:2991
cs=0x28f0;eip=0x002993; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93816 les     bx, [bp+arg_0] ;~ 28F0:2993
cs=0x28f0;eip=0x002996; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x138))));	// 93817 mov     ax, es:[bx+138h] ;~ 28F0:2996
cs=0x28f0;eip=0x00299b; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13A))));	// 93818 mov     dx, es:[bx+13Ah] ;~ 28F0:299B
cs=0x28f0;eip=0x0029a0; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93819 cmp     es:[bx+122h], dx ;~ 28F0:29A0
cs=0x28f0;eip=0x0029a5; 	R(JL(loc_39e95));	// 93820 jl      short loc_39E95 ;~ 28F0:29A5
cs=0x28f0;eip=0x0029a7; 	R(JG(loc_39e90));	// 93821 jg      short loc_39E90 ;~ 28F0:29A7
cs=0x28f0;eip=0x0029a9; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93822 cmp     es:[bx+120h], ax ;~ 28F0:29A9
cs=0x28f0;eip=0x0029ae; 	R(JC(loc_39e95));	// 93823 jb      short loc_39E95 ;~ 28F0:29AE
loc_39e90:
	// 10444 
cs=0x28f0;eip=0x0029b0; 	T(MOV(ax, 1));	// 93826 mov     ax, 1 ;~ 28F0:29B0
cs=0x28f0;eip=0x0029b3; 	R(JMP(loc_39e97));	// 93827 jmp     short loc_39E97 ;~ 28F0:29B3
loc_39e95:
	// 10445 
cs=0x28f0;eip=0x0029b5; 	T(SUB(ax, ax));	// 93832 sub     ax, ax ;~ 28F0:29B5
loc_39e97:
	// 10446 
cs=0x28f0;eip=0x0029b7; 	T(OR(ax, ax));	// 93835 or      ax, ax ;~ 28F0:29B7
cs=0x28f0;eip=0x0029b9; 	R(JNZ(loc_39eb5));	// 93836 jnz     short loc_39EB5 ;~ 28F0:29B9
loc_39e9b:
	// 10447 
cs=0x28f0;eip=0x0029bb; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 93839 les     bx, [bp+var_4] ;~ 28F0:29BB
cs=0x28f0;eip=0x0029be; 	T(SUB(ax, ax));	// 93840 sub     ax, ax ;~ 28F0:29BE
cs=0x28f0;eip=0x0029c0; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 93841 mov     es:[bx+6], ax ;~ 28F0:29C0
cs=0x28f0;eip=0x0029c4; 	X(MOV(*(dw*)(raddr(es,bx+4)), ax));	// 93842 mov     es:[bx+4], ax ;~ 28F0:29C4
cs=0x28f0;eip=0x0029c8; 	X(PUSH(es));	// 93843 push    es ;~ 28F0:29C8
cs=0x28f0;eip=0x0029c9; 	X(PUSH(bx));	// 93844 push    bx ;~ 28F0:29C9
cs=0x28f0;eip=0x0029ca; 	X(PUSH(*(dw*)(raddr(es,bx+0x16))));	// 93845 push    word ptr es:[bx+16h] ;~ 28F0:29CA
cs=0x28f0;eip=0x0029ce; 	X(PUSH(*(dw*)(raddr(es,bx+0x14))));	// 93846 push    word ptr es:[bx+14h] ;~ 28F0:29CE
cs=0x28f0;eip=0x0029d2; 	R(CALL(sub_3b9eb,0));	// 93847 call    sub_3B9EB ;~ 28F0:29D2
loc_39eb5:
	// 10448 
cs=0x28f0;eip=0x0029d5; 	T(CMP(unk_57113, 0));	// 93850 cmp     byte ptr unk_57113, 0 ;~ 28F0:29D5
cs=0x28f0;eip=0x0029da; 	R(JZ(loc_39ee5));	// 93851 jz      short loc_39EE5 ;~ 28F0:29DA
cs=0x28f0;eip=0x0029dc; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93852 les     bx, [bp+arg_0] ;~ 28F0:29DC
cs=0x28f0;eip=0x0029df; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 93853 mov     ax, es:[bx+13Ch] ;~ 28F0:29DF
cs=0x28f0;eip=0x0029e4; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 93854 mov     dx, es:[bx+13Eh] ;~ 28F0:29E4
cs=0x28f0;eip=0x0029e9; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93855 cmp     es:[bx+122h], dx ;~ 28F0:29E9
cs=0x28f0;eip=0x0029ee; 	R(JG(loc_39edf));	// 93856 jg      short loc_39EDF ;~ 28F0:29EE
cs=0x28f0;eip=0x0029f0; 	R(JGE(loc_39ed5));	// 93857 jge     short loc_39ED5 ;~ 28F0:29F0
cs=0x28f0;eip=0x0029f2; 	R(JMP(loc_39e4c));	// 93858 jmp     loc_39E4C ;~ 28F0:29F2
loc_39ed5:
	// 10449 
cs=0x28f0;eip=0x0029f5; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93862 cmp     es:[bx+120h], ax ;~ 28F0:29F5
cs=0x28f0;eip=0x0029fa; 	R(JA(loc_39edf));	// 93863 ja      short loc_39EDF ;~ 28F0:29FA
cs=0x28f0;eip=0x0029fc; 	R(JMP(loc_39e4c));	// 93864 jmp     loc_39E4C ;~ 28F0:29FC
loc_39edf:
	// 10450 
cs=0x28f0;eip=0x0029ff; 	T(SUB(ax, ax));	// 93869 sub     ax, ax ;~ 28F0:29FF
loc_39ee1:
	// 10451 
cs=0x28f0;eip=0x002a01; 	T(OR(ax, ax));	// 93872 or      ax, ax ;~ 28F0:2A01
cs=0x28f0;eip=0x002a03; 	R(JNZ(loc_39f0a));	// 93873 jnz     short loc_39F0A ;~ 28F0:2A03
loc_39ee5:
	// 10452 
cs=0x28f0;eip=0x002a05; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93877 les     bx, [bp+arg_0] ;~ 28F0:2A05
cs=0x28f0;eip=0x002a08; 	T(SUB(ax, ax));	// 93878 sub     ax, ax ;~ 28F0:2A08
cs=0x28f0;eip=0x002a0a; 	X(MOV(*(dw*)(raddr(es,bx+0x0A6)), ax));	// 93879 mov     es:[bx+0A6h], ax ;~ 28F0:2A0A
cs=0x28f0;eip=0x002a0f; 	X(MOV(*(dw*)(raddr(es,bx+0x0A4)), ax));	// 93880 mov     es:[bx+0A4h], ax ;~ 28F0:2A0F
cs=0x28f0;eip=0x002a14; 	T(MOV(ax, bx));	// 93881 mov     ax, bx ;~ 28F0:2A14
cs=0x28f0;eip=0x002a16; 	T(MOV(dx, es));	// 93882 mov     dx, es ;~ 28F0:2A16
cs=0x28f0;eip=0x002a18; 	T(ADD(ax, 0x0A0));	// 93883 add     ax, 0A0h ; ' ' ;~ 28F0:2A18
cs=0x28f0;eip=0x002a1b; 	X(PUSH(dx));	// 93884 push    dx ;~ 28F0:2A1B
cs=0x28f0;eip=0x002a1c; 	X(PUSH(ax));	// 93885 push    ax ;~ 28F0:2A1C
cs=0x28f0;eip=0x002a1d; 	X(PUSH(*(dw*)(raddr(es,bx+0x0B6))));	// 93886 push    word ptr es:[bx+0B6h] ;~ 28F0:2A1D
cs=0x28f0;eip=0x002a22; 	X(PUSH(*(dw*)(raddr(es,bx+0x0B4))));	// 93887 push    word ptr es:[bx+0B4h] ;~ 28F0:2A22
cs=0x28f0;eip=0x002a27; 	R(CALL(sub_3b9eb,0));	// 93888 call    sub_3B9EB ;~ 28F0:2A27
loc_39f0a:
	// 10453 
cs=0x28f0;eip=0x002a2a; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93892 mov     ax, word ptr [bp+arg_0] ;~ 28F0:2A2A
cs=0x28f0;eip=0x002a2d; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93893 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:2A2D
cs=0x28f0;eip=0x002a30; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 93894 mov     word ptr [bp+var_8], ax ;~ 28F0:2A30
cs=0x28f0;eip=0x002a33; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 93895 mov     word ptr [bp+var_8+2], dx ;~ 28F0:2A33
cs=0x28f0;eip=0x002a36; 	T(CMP(*(dw*)((&unk_57114)), 0));	// 93896 cmp     word ptr unk_57114, 0 ;~ 28F0:2A36
cs=0x28f0;eip=0x002a3b; 	R(JNZ(loc_39f20));	// 93897 jnz     short loc_39F20 ;~ 28F0:2A3B
cs=0x28f0;eip=0x002a3d; 	R(JMP(loc_3a011));	// 93898 jmp     loc_3A011 ;~ 28F0:2A3D
loc_39f20:
	// 10454 
cs=0x28f0;eip=0x002a40; 	T(CMP(unk_57113, 0));	// 93902 cmp     byte ptr unk_57113, 0 ;~ 28F0:2A40
cs=0x28f0;eip=0x002a45; 	R(JZ(loc_39f4f));	// 93903 jz      short loc_39F4F ;~ 28F0:2A45
cs=0x28f0;eip=0x002a47; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93904 les     bx, [bp+arg_0] ;~ 28F0:2A47
cs=0x28f0;eip=0x002a4a; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 93905 mov     ax, es:[bx+13Ch] ;~ 28F0:2A4A
cs=0x28f0;eip=0x002a4f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 93906 mov     dx, es:[bx+13Eh] ;~ 28F0:2A4F
cs=0x28f0;eip=0x002a54; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93907 cmp     es:[bx+122h], dx ;~ 28F0:2A54
cs=0x28f0;eip=0x002a59; 	R(JG(loc_39f49));	// 93908 jg      short loc_39F49 ;~ 28F0:2A59
cs=0x28f0;eip=0x002a5b; 	R(JL(loc_39f44));	// 93909 jl      short loc_39F44 ;~ 28F0:2A5B
cs=0x28f0;eip=0x002a5d; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93910 cmp     es:[bx+120h], ax ;~ 28F0:2A5D
cs=0x28f0;eip=0x002a62; 	R(JA(loc_39f49));	// 93911 ja      short loc_39F49 ;~ 28F0:2A62
loc_39f44:
	// 10455 
cs=0x28f0;eip=0x002a64; 	T(MOV(ax, 1));	// 93914 mov     ax, 1 ;~ 28F0:2A64
cs=0x28f0;eip=0x002a67; 	R(JMP(loc_39f4b));	// 93915 jmp     short loc_39F4B ;~ 28F0:2A67
loc_39f49:
	// 10456 
cs=0x28f0;eip=0x002a69; 	T(SUB(ax, ax));	// 93920 sub     ax, ax ;~ 28F0:2A69
loc_39f4b:
	// 10457 
cs=0x28f0;eip=0x002a6b; 	T(OR(ax, ax));	// 93923 or      ax, ax ;~ 28F0:2A6B
cs=0x28f0;eip=0x002a6d; 	R(JNZ(loc_39f5c));	// 93924 jnz     short loc_39F5C ;~ 28F0:2A6D
loc_39f4f:
	// 10458 
cs=0x28f0;eip=0x002a6f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93927 push    word ptr [bp+arg_0+2] ;~ 28F0:2A6F
cs=0x28f0;eip=0x002a72; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93928 push    word ptr [bp+arg_0] ;~ 28F0:2A72
cs=0x28f0;eip=0x002a75; 	X(PUSH(*(dw*)((&unk_57114))));	// 93929 push    word ptr unk_57114 ;~ 28F0:2A75
cs=0x28f0;eip=0x002a79; 	R(CALL(sub_39478,0));	// 93930 call    sub_39478 ;~ 28F0:2A79
loc_39f5c:
	// 10459 
cs=0x28f0;eip=0x002a7c; 	T(CMP(unk_57113, 0));	// 93933 cmp     byte ptr unk_57113, 0 ;~ 28F0:2A7C
cs=0x28f0;eip=0x002a81; 	R(JZ(loc_39fb3));	// 93934 jz      short loc_39FB3 ;~ 28F0:2A81
cs=0x28f0;eip=0x002a83; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93935 les     bx, [bp+arg_0] ;~ 28F0:2A83
cs=0x28f0;eip=0x002a86; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x138))));	// 93936 mov     ax, es:[bx+138h] ;~ 28F0:2A86
cs=0x28f0;eip=0x002a8b; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13A))));	// 93937 mov     dx, es:[bx+13Ah] ;~ 28F0:2A8B
cs=0x28f0;eip=0x002a90; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93938 cmp     es:[bx+122h], dx ;~ 28F0:2A90
cs=0x28f0;eip=0x002a95; 	R(JL(loc_39f85));	// 93939 jl      short loc_39F85 ;~ 28F0:2A95
cs=0x28f0;eip=0x002a97; 	R(JG(loc_39f80));	// 93940 jg      short loc_39F80 ;~ 28F0:2A97
cs=0x28f0;eip=0x002a99; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93941 cmp     es:[bx+120h], ax ;~ 28F0:2A99
cs=0x28f0;eip=0x002a9e; 	R(JC(loc_39f85));	// 93942 jb      short loc_39F85 ;~ 28F0:2A9E
loc_39f80:
	// 10460 
cs=0x28f0;eip=0x002aa0; 	T(MOV(ax, 1));	// 93945 mov     ax, 1 ;~ 28F0:2AA0
cs=0x28f0;eip=0x002aa3; 	R(JMP(loc_39f87));	// 93946 jmp     short loc_39F87 ;~ 28F0:2AA3
loc_39f85:
	// 10461 
cs=0x28f0;eip=0x002aa5; 	T(SUB(ax, ax));	// 93951 sub     ax, ax ;~ 28F0:2AA5
loc_39f87:
	// 10462 
cs=0x28f0;eip=0x002aa7; 	T(OR(ax, ax));	// 93954 or      ax, ax ;~ 28F0:2AA7
cs=0x28f0;eip=0x002aa9; 	R(JNZ(loc_39fc5));	// 93955 jnz     short loc_39FC5 ;~ 28F0:2AA9
cs=0x28f0;eip=0x002aab; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93956 les     bx, [bp+arg_0] ;~ 28F0:2AAB
cs=0x28f0;eip=0x002aae; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 93957 mov     ax, es:[bx+13Ch] ;~ 28F0:2AAE
cs=0x28f0;eip=0x002ab3; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 93958 mov     dx, es:[bx+13Eh] ;~ 28F0:2AB3
cs=0x28f0;eip=0x002ab8; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93959 cmp     es:[bx+122h], dx ;~ 28F0:2AB8
cs=0x28f0;eip=0x002abd; 	R(JG(loc_39fad));	// 93960 jg      short loc_39FAD ;~ 28F0:2ABD
cs=0x28f0;eip=0x002abf; 	R(JL(loc_39fa8));	// 93961 jl      short loc_39FA8 ;~ 28F0:2ABF
cs=0x28f0;eip=0x002ac1; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93962 cmp     es:[bx+120h], ax ;~ 28F0:2AC1
cs=0x28f0;eip=0x002ac6; 	R(JA(loc_39fad));	// 93963 ja      short loc_39FAD ;~ 28F0:2AC6
loc_39fa8:
	// 10463 
cs=0x28f0;eip=0x002ac8; 	T(MOV(ax, 1));	// 93966 mov     ax, 1 ;~ 28F0:2AC8
cs=0x28f0;eip=0x002acb; 	R(JMP(loc_39faf));	// 93967 jmp     short loc_39FAF ;~ 28F0:2ACB
loc_39fad:
	// 10464 
cs=0x28f0;eip=0x002acd; 	T(SUB(ax, ax));	// 93972 sub     ax, ax ;~ 28F0:2ACD
loc_39faf:
	// 10465 
cs=0x28f0;eip=0x002acf; 	T(OR(ax, ax));	// 93975 or      ax, ax ;~ 28F0:2ACF
cs=0x28f0;eip=0x002ad1; 	R(JNZ(loc_39fc5));	// 93976 jnz     short loc_39FC5 ;~ 28F0:2AD1
loc_39fb3:
	// 10466 
cs=0x28f0;eip=0x002ad3; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93979 mov     ax, word ptr [bp+arg_0] ;~ 28F0:2AD3
cs=0x28f0;eip=0x002ad6; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93980 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:2AD6
cs=0x28f0;eip=0x002ad9; 	T(ADD(ax, 0x140));	// 93981 add     ax, 140h ;~ 28F0:2AD9
cs=0x28f0;eip=0x002adc; 	X(PUSH(dx));	// 93982 push    dx ;~ 28F0:2ADC
cs=0x28f0;eip=0x002add; 	X(PUSH(ax));	// 93983 push    ax ;~ 28F0:2ADD
cs=0x28f0;eip=0x002ade; 	X(PUSH(*(dw*)((&unk_57114))));	// 93984 push    word ptr unk_57114 ;~ 28F0:2ADE
cs=0x28f0;eip=0x002ae2; 	R(CALL(sub_38f8e,0));	// 93985 call    sub_38F8E ;~ 28F0:2AE2
loc_39fc5:
	// 10467 
cs=0x28f0;eip=0x002ae5; 	T(CMP(unk_57113, 0));	// 93989 cmp     byte ptr unk_57113, 0 ;~ 28F0:2AE5
cs=0x28f0;eip=0x002aea; 	R(JNZ(loc_39fcf));	// 93990 jnz     short loc_39FCF ;~ 28F0:2AEA
cs=0x28f0;eip=0x002aec; 	R(JMP(loc_3a0d3));	// 93991 jmp     loc_3A0D3 ;~ 28F0:2AEC
loc_39fcf:
	// 10468 
cs=0x28f0;eip=0x002aef; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93995 les     bx, [bp+arg_0] ;~ 28F0:2AEF
cs=0x28f0;eip=0x002af2; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 93996 mov     ax, es:[bx+13Ch] ;~ 28F0:2AF2
cs=0x28f0;eip=0x002af7; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 93997 mov     dx, es:[bx+13Eh] ;~ 28F0:2AF7
cs=0x28f0;eip=0x002afc; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93998 cmp     es:[bx+122h], dx ;~ 28F0:2AFC
cs=0x28f0;eip=0x002b01; 	R(JG(loc_39ff1));	// 93999 jg      short loc_39FF1 ;~ 28F0:2B01
cs=0x28f0;eip=0x002b03; 	R(JL(loc_39fec));	// 94000 jl      short loc_39FEC ;~ 28F0:2B03
cs=0x28f0;eip=0x002b05; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 94001 cmp     es:[bx+120h], ax ;~ 28F0:2B05
cs=0x28f0;eip=0x002b0a; 	R(JA(loc_39ff1));	// 94002 ja      short loc_39FF1 ;~ 28F0:2B0A
loc_39fec:
	// 10469 
cs=0x28f0;eip=0x002b0c; 	T(MOV(ax, 1));	// 94005 mov     ax, 1 ;~ 28F0:2B0C
cs=0x28f0;eip=0x002b0f; 	R(JMP(loc_39ff3));	// 94006 jmp     short loc_39FF3 ;~ 28F0:2B0F
loc_39ff1:
	// 10470 
cs=0x28f0;eip=0x002b11; 	T(SUB(ax, ax));	// 94011 sub     ax, ax ;~ 28F0:2B11
loc_39ff3:
	// 10471 
cs=0x28f0;eip=0x002b13; 	T(OR(ax, ax));	// 94014 or      ax, ax ;~ 28F0:2B13
cs=0x28f0;eip=0x002b15; 	R(JNZ(loc_39ffa));	// 94015 jnz     short loc_39FFA ;~ 28F0:2B15
cs=0x28f0;eip=0x002b17; 	R(JMP(loc_3a0d3));	// 94016 jmp     loc_3A0D3 ;~ 28F0:2B17
loc_39ffa:
	// 10472 
cs=0x28f0;eip=0x002b1a; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94020 mov     ax, word ptr [bp+arg_0] ;~ 28F0:2B1A
cs=0x28f0;eip=0x002b1d; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94021 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:2B1D
cs=0x28f0;eip=0x002b20; 	T(ADD(ax, 0x0A0));	// 94022 add     ax, 0A0h ; ' ' ;~ 28F0:2B20
cs=0x28f0;eip=0x002b23; 	X(PUSH(dx));	// 94023 push    dx ;~ 28F0:2B23
cs=0x28f0;eip=0x002b24; 	X(PUSH(ax));	// 94024 push    ax ;~ 28F0:2B24
cs=0x28f0;eip=0x002b25; 	T(MOV(ax, *(dw*)((&unk_57114))));	// 94025 mov     ax, word ptr unk_57114 ;~ 28F0:2B25
cs=0x28f0;eip=0x002b28; 	T(NEG(ax));	// 94026 neg     ax ;~ 28F0:2B28
cs=0x28f0;eip=0x002b2a; 	X(PUSH(ax));	// 94027 push    ax ;~ 28F0:2B2A
cs=0x28f0;eip=0x002b2b; 	R(CALL(sub_39729,0));	// 94028 call    sub_39729 ;~ 28F0:2B2B
cs=0x28f0;eip=0x002b2e; 	R(JMP(loc_3a0d3));	// 94029 jmp     loc_3A0D3 ;~ 28F0:2B2E
loc_3a011:
	// 10473 
cs=0x28f0;eip=0x002b31; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 94033 les     bx, [bp+var_8] ;~ 28F0:2B31
cs=0x28f0;eip=0x002b34; 	T(SUB(ax, ax));	// 94034 sub     ax, ax ;~ 28F0:2B34
cs=0x28f0;eip=0x002b36; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 94035 mov     es:[bx+6], ax ;~ 28F0:2B36
cs=0x28f0;eip=0x002b3a; 	X(MOV(*(dw*)(raddr(es,bx+4)), ax));	// 94036 mov     es:[bx+4], ax ;~ 28F0:2B3A
cs=0x28f0;eip=0x002b3e; 	X(PUSH(es));	// 94037 push    es ;~ 28F0:2B3E
cs=0x28f0;eip=0x002b3f; 	X(PUSH(bx));	// 94038 push    bx ;~ 28F0:2B3F
cs=0x28f0;eip=0x002b40; 	X(PUSH(*(dw*)(raddr(es,bx+0x16))));	// 94039 push    word ptr es:[bx+16h] ;~ 28F0:2B40
cs=0x28f0;eip=0x002b44; 	X(PUSH(*(dw*)(raddr(es,bx+0x14))));	// 94040 push    word ptr es:[bx+14h] ;~ 28F0:2B44
cs=0x28f0;eip=0x002b48; 	R(CALL(sub_3b9eb,0));	// 94041 call    sub_3B9EB ;~ 28F0:2B48
cs=0x28f0;eip=0x002b4b; 	T(CMP(unk_57113, 0));	// 94042 cmp     byte ptr unk_57113, 0 ;~ 28F0:2B4B
cs=0x28f0;eip=0x002b50; 	R(JZ(loc_3a05a));	// 94043 jz      short loc_3A05A ;~ 28F0:2B50
cs=0x28f0;eip=0x002b52; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94044 les     bx, [bp+arg_0] ;~ 28F0:2B52
cs=0x28f0;eip=0x002b55; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x138))));	// 94045 mov     ax, es:[bx+138h] ;~ 28F0:2B55
cs=0x28f0;eip=0x002b5a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13A))));	// 94046 mov     dx, es:[bx+13Ah] ;~ 28F0:2B5A
cs=0x28f0;eip=0x002b5f; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 94047 cmp     es:[bx+122h], dx ;~ 28F0:2B5F
cs=0x28f0;eip=0x002b64; 	R(JL(loc_3a054));	// 94048 jl      short loc_3A054 ;~ 28F0:2B64
cs=0x28f0;eip=0x002b66; 	R(JG(loc_3a04f));	// 94049 jg      short loc_3A04F ;~ 28F0:2B66
cs=0x28f0;eip=0x002b68; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 94050 cmp     es:[bx+120h], ax ;~ 28F0:2B68
cs=0x28f0;eip=0x002b6d; 	R(JC(loc_3a054));	// 94051 jb      short loc_3A054 ;~ 28F0:2B6D
loc_3a04f:
	// 10474 
cs=0x28f0;eip=0x002b6f; 	T(MOV(ax, 1));	// 94054 mov     ax, 1 ;~ 28F0:2B6F
cs=0x28f0;eip=0x002b72; 	R(JMP(loc_3a056));	// 94055 jmp     short loc_3A056 ;~ 28F0:2B72
loc_3a054:
	// 10475 
cs=0x28f0;eip=0x002b74; 	T(SUB(ax, ax));	// 94060 sub     ax, ax ;~ 28F0:2B74
loc_3a056:
	// 10476 
cs=0x28f0;eip=0x002b76; 	T(OR(ax, ax));	// 94063 or      ax, ax ;~ 28F0:2B76
cs=0x28f0;eip=0x002b78; 	R(JNZ(loc_3a07f));	// 94064 jnz     short loc_3A07F ;~ 28F0:2B78
loc_3a05a:
	// 10477 
cs=0x28f0;eip=0x002b7a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94067 les     bx, [bp+arg_0] ;~ 28F0:2B7A
cs=0x28f0;eip=0x002b7d; 	T(SUB(ax, ax));	// 94068 sub     ax, ax ;~ 28F0:2B7D
cs=0x28f0;eip=0x002b7f; 	X(MOV(*(dw*)(raddr(es,bx+0x146)), ax));	// 94069 mov     es:[bx+146h], ax ;~ 28F0:2B7F
cs=0x28f0;eip=0x002b84; 	X(MOV(*(dw*)(raddr(es,bx+0x144)), ax));	// 94070 mov     es:[bx+144h], ax ;~ 28F0:2B84
cs=0x28f0;eip=0x002b89; 	T(MOV(ax, bx));	// 94071 mov     ax, bx ;~ 28F0:2B89
cs=0x28f0;eip=0x002b8b; 	T(MOV(dx, es));	// 94072 mov     dx, es ;~ 28F0:2B8B
cs=0x28f0;eip=0x002b8d; 	T(ADD(ax, 0x140));	// 94073 add     ax, 140h ;~ 28F0:2B8D
cs=0x28f0;eip=0x002b90; 	X(PUSH(dx));	// 94074 push    dx ;~ 28F0:2B90
cs=0x28f0;eip=0x002b91; 	X(PUSH(ax));	// 94075 push    ax ;~ 28F0:2B91
cs=0x28f0;eip=0x002b92; 	X(PUSH(*(dw*)(raddr(es,bx+0x156))));	// 94076 push    word ptr es:[bx+156h] ;~ 28F0:2B92
cs=0x28f0;eip=0x002b97; 	X(PUSH(*(dw*)(raddr(es,bx+0x154))));	// 94077 push    word ptr es:[bx+154h] ;~ 28F0:2B97
cs=0x28f0;eip=0x002b9c; 	R(CALL(sub_3b9eb,0));	// 94078 call    sub_3B9EB ;~ 28F0:2B9C
loc_3a07f:
	// 10478 
cs=0x28f0;eip=0x002b9f; 	T(CMP(unk_57113, 0));	// 94081 cmp     byte ptr unk_57113, 0 ;~ 28F0:2B9F
cs=0x28f0;eip=0x002ba4; 	R(JZ(loc_3a0d3));	// 94082 jz      short loc_3A0D3 ;~ 28F0:2BA4
cs=0x28f0;eip=0x002ba6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94083 les     bx, [bp+arg_0] ;~ 28F0:2BA6
cs=0x28f0;eip=0x002ba9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 94084 mov     ax, es:[bx+13Ch] ;~ 28F0:2BA9
cs=0x28f0;eip=0x002bae; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 94085 mov     dx, es:[bx+13Eh] ;~ 28F0:2BAE
cs=0x28f0;eip=0x002bb3; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 94086 cmp     es:[bx+122h], dx ;~ 28F0:2BB3
cs=0x28f0;eip=0x002bb8; 	R(JG(loc_3a0a8));	// 94087 jg      short loc_3A0A8 ;~ 28F0:2BB8
cs=0x28f0;eip=0x002bba; 	R(JL(loc_3a0a3));	// 94088 jl      short loc_3A0A3 ;~ 28F0:2BBA
cs=0x28f0;eip=0x002bbc; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 94089 cmp     es:[bx+120h], ax ;~ 28F0:2BBC
cs=0x28f0;eip=0x002bc1; 	R(JA(loc_3a0a8));	// 94090 ja      short loc_3A0A8 ;~ 28F0:2BC1
loc_3a0a3:
	// 10479 
cs=0x28f0;eip=0x002bc3; 	T(MOV(ax, 1));	// 94093 mov     ax, 1 ;~ 28F0:2BC3
cs=0x28f0;eip=0x002bc6; 	R(JMP(loc_3a0aa));	// 94094 jmp     short loc_3A0AA ;~ 28F0:2BC6
loc_3a0a8:
	// 10480 
cs=0x28f0;eip=0x002bc8; 	T(SUB(ax, ax));	// 94099 sub     ax, ax ;~ 28F0:2BC8
loc_3a0aa:
	// 10481 
cs=0x28f0;eip=0x002bca; 	T(OR(ax, ax));	// 94102 or      ax, ax ;~ 28F0:2BCA
cs=0x28f0;eip=0x002bcc; 	R(JZ(loc_3a0d3));	// 94103 jz      short loc_3A0D3 ;~ 28F0:2BCC
cs=0x28f0;eip=0x002bce; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94104 les     bx, [bp+arg_0] ;~ 28F0:2BCE
cs=0x28f0;eip=0x002bd1; 	T(SUB(ax, ax));	// 94105 sub     ax, ax ;~ 28F0:2BD1
cs=0x28f0;eip=0x002bd3; 	X(MOV(*(dw*)(raddr(es,bx+0x0A6)), ax));	// 94106 mov     es:[bx+0A6h], ax ;~ 28F0:2BD3
cs=0x28f0;eip=0x002bd8; 	X(MOV(*(dw*)(raddr(es,bx+0x0A4)), ax));	// 94107 mov     es:[bx+0A4h], ax ;~ 28F0:2BD8
cs=0x28f0;eip=0x002bdd; 	T(MOV(ax, bx));	// 94108 mov     ax, bx ;~ 28F0:2BDD
cs=0x28f0;eip=0x002bdf; 	T(MOV(dx, es));	// 94109 mov     dx, es ;~ 28F0:2BDF
cs=0x28f0;eip=0x002be1; 	T(ADD(ax, 0x0A0));	// 94110 add     ax, 0A0h ; ' ' ;~ 28F0:2BE1
cs=0x28f0;eip=0x002be4; 	X(PUSH(dx));	// 94111 push    dx ;~ 28F0:2BE4
cs=0x28f0;eip=0x002be5; 	X(PUSH(ax));	// 94112 push    ax ;~ 28F0:2BE5
cs=0x28f0;eip=0x002be6; 	X(PUSH(*(dw*)(raddr(es,bx+0x0B6))));	// 94113 push    word ptr es:[bx+0B6h] ;~ 28F0:2BE6
cs=0x28f0;eip=0x002beb; 	X(PUSH(*(dw*)(raddr(es,bx+0x0B4))));	// 94114 push    word ptr es:[bx+0B4h] ;~ 28F0:2BEB
cs=0x28f0;eip=0x002bf0; 	R(CALL(sub_3b9eb,0));	// 94115 call    sub_3B9EB ;~ 28F0:2BF0
loc_3a0d3:
	// 10482 
cs=0x28f0;eip=0x002bf3; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94119 push    word ptr [bp+arg_0+2] ;~ 28F0:2BF3
cs=0x28f0;eip=0x002bf6; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94120 push    word ptr [bp+arg_0] ;~ 28F0:2BF6
cs=0x28f0;eip=0x002bf9; 	R(CALL(sub_39765,0));	// 94121 call    sub_39765 ;~ 28F0:2BF9
cs=0x28f0;eip=0x002bfc; 	T(CMP(unk_57113, 0));	// 94122 cmp     byte ptr unk_57113, 0 ;~ 28F0:2BFC
cs=0x28f0;eip=0x002c01; 	R(JZ(loc_3a15c));	// 94123 jz      short loc_3A15C ;~ 28F0:2C01
cs=0x28f0;eip=0x002c03; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94124 les     bx, [bp+arg_0] ;~ 28F0:2C03
cs=0x28f0;eip=0x002c06; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 94125 mov     ax, es:[bx+13Ch] ;~ 28F0:2C06
cs=0x28f0;eip=0x002c0b; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 94126 mov     dx, es:[bx+13Eh] ;~ 28F0:2C0B
cs=0x28f0;eip=0x002c10; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 94127 cmp     es:[bx+122h], dx ;~ 28F0:2C10
cs=0x28f0;eip=0x002c15; 	R(JG(loc_3a105));	// 94128 jg      short loc_3A105 ;~ 28F0:2C15
cs=0x28f0;eip=0x002c17; 	R(JL(loc_3a100));	// 94129 jl      short loc_3A100 ;~ 28F0:2C17
cs=0x28f0;eip=0x002c19; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 94130 cmp     es:[bx+120h], ax ;~ 28F0:2C19
cs=0x28f0;eip=0x002c1e; 	R(JA(loc_3a105));	// 94131 ja      short loc_3A105 ;~ 28F0:2C1E
loc_3a100:
	// 10483 
cs=0x28f0;eip=0x002c20; 	T(MOV(ax, 1));	// 94134 mov     ax, 1 ;~ 28F0:2C20
cs=0x28f0;eip=0x002c23; 	R(JMP(loc_3a107));	// 94135 jmp     short loc_3A107 ;~ 28F0:2C23
loc_3a105:
	// 10484 
cs=0x28f0;eip=0x002c25; 	T(SUB(ax, ax));	// 94140 sub     ax, ax ;~ 28F0:2C25
loc_3a107:
	// 10485 
cs=0x28f0;eip=0x002c27; 	T(OR(ax, ax));	// 94143 or      ax, ax ;~ 28F0:2C27
cs=0x28f0;eip=0x002c29; 	R(JZ(loc_3a15c));	// 94144 jz      short loc_3A15C ;~ 28F0:2C29
cs=0x28f0;eip=0x002c2b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 94145 push    word ptr [bp+var_4+2] ;~ 28F0:2C2B
cs=0x28f0;eip=0x002c2e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 94146 push    word ptr [bp+var_4] ;~ 28F0:2C2E
cs=0x28f0;eip=0x002c31; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 94147 les     bx, [bp+var_4] ;~ 28F0:2C31
cs=0x28f0;eip=0x002c34; 	R(JMP(loc_39d03));	// 94148 jmp     loc_39D03 ;~ 28F0:2C34
loc_3a117:
	// 10486 
cs=0x28f0;eip=0x002c37; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94153 les     bx, [bp+arg_0] ;~ 28F0:2C37
cs=0x28f0;eip=0x002c3a; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), 1));	// 94154 mov     word ptr es:[bx+332h], 1 ;~ 28F0:2C3A
cs=0x28f0;eip=0x002c41; 	T(SUB(ax, ax));	// 94155 sub     ax, ax ;~ 28F0:2C41
cs=0x28f0;eip=0x002c43; 	X(MOV(*(dw*)(raddr(es,bx+2)), ax));	// 94156 mov     es:[bx+2], ax ;~ 28F0:2C43
cs=0x28f0;eip=0x002c47; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 94157 mov     es:[bx], ax ;~ 28F0:2C47
cs=0x28f0;eip=0x002c4a; 	T(CWD);	// 94158 cwd ;~ 28F0:2C4A
cs=0x28f0;eip=0x002c4b; 	X(MOV(*(dw*)(raddr(es,bx+0x0A0)), ax));	// 94159 mov     es:[bx+0A0h], ax ;~ 28F0:2C4B
cs=0x28f0;eip=0x002c50; 	X(MOV(*(dw*)(raddr(es,bx+0x0A2)), dx));	// 94160 mov     es:[bx+0A2h], dx ;~ 28F0:2C50
cs=0x28f0;eip=0x002c55; 	X(MOV(*(dw*)(raddr(es,bx+0x40)), ax));	// 94161 mov     es:[bx+40h], ax ;~ 28F0:2C55
cs=0x28f0;eip=0x002c59; 	X(MOV(*(dw*)(raddr(es,bx+0x42)), dx));	// 94162 mov     es:[bx+42h], dx ;~ 28F0:2C59
cs=0x28f0;eip=0x002c5d; 	T(CWD);	// 94163 cwd ;~ 28F0:2C5D
cs=0x28f0;eip=0x002c5e; 	X(MOV(*(dw*)(raddr(es,bx+0x160)), ax));	// 94164 mov     es:[bx+160h], ax ;~ 28F0:2C5E
cs=0x28f0;eip=0x002c63; 	X(MOV(*(dw*)(raddr(es,bx+0x162)), dx));	// 94165 mov     es:[bx+162h], dx ;~ 28F0:2C63
cs=0x28f0;eip=0x002c68; 	X(MOV(*(dw*)(raddr(es,bx+0x140)), ax));	// 94166 mov     es:[bx+140h], ax ;~ 28F0:2C68
cs=0x28f0;eip=0x002c6d; 	X(MOV(*(dw*)(raddr(es,bx+0x142)), dx));	// 94167 mov     es:[bx+142h], dx ;~ 28F0:2C6D
cs=0x28f0;eip=0x002c72; 	X(MOV(*(dw*)(raddr(es,bx+0x120)), ax));	// 94168 mov     es:[bx+120h], ax ;~ 28F0:2C72
cs=0x28f0;eip=0x002c77; 	X(MOV(*(dw*)(raddr(es,bx+0x122)), dx));	// 94169 mov     es:[bx+122h], dx ;~ 28F0:2C77
loc_3a15c:
	// 10487 
cs=0x28f0;eip=0x002c7c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94173 push    word ptr [bp+arg_0+2] ;~ 28F0:2C7C
cs=0x28f0;eip=0x002c7f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94174 push    word ptr [bp+arg_0] ;~ 28F0:2C7F
cs=0x28f0;eip=0x002c82; 	R(CALL(sub_39113,0));	// 94175 call    sub_39113 ;~ 28F0:2C82
cs=0x28f0;eip=0x002c85; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94176 push    word ptr [bp+arg_0+2] ;~ 28F0:2C85
cs=0x28f0;eip=0x002c88; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94177 push    word ptr [bp+arg_0] ;~ 28F0:2C88
cs=0x28f0;eip=0x002c8b; 	R(CALL(sub_3915a,0));	// 94178 call    sub_3915A ;~ 28F0:2C8B
cs=0x28f0;eip=0x002c8e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94179 les     bx, [bp+arg_0] ;~ 28F0:2C8E
cs=0x28f0;eip=0x002c91; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 1));	// 94180 cmp     word ptr es:[bx+332h], 1 ;~ 28F0:2C91
cs=0x28f0;eip=0x002c97; 	R(JZ(loc_3a17c));	// 94181 jz      short loc_3A17C ;~ 28F0:2C97
cs=0x28f0;eip=0x002c99; 	R(JMP(loc_3a21e));	// 94182 jmp     loc_3A21E ;~ 28F0:2C99
loc_3a17c:
	// 10488 
cs=0x28f0;eip=0x002c9c; 	T(CMP(*(dw*)(raddr(es,bx+0x1C2)), 0));	// 94186 cmp     word ptr es:[bx+1C2h], 0 ;~ 28F0:2C9C
cs=0x28f0;eip=0x002ca2; 	R(JGE(loc_3a1e8));	// 94187 jge     short loc_3A1E8 ;~ 28F0:2CA2
cs=0x28f0;eip=0x002ca4; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 94188 mov     ax, es:[bx+2FAh] ;~ 28F0:2CA4
cs=0x28f0;eip=0x002ca9; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 94189 mov     dx, es:[bx+2FCh] ;~ 28F0:2CA9
cs=0x28f0;eip=0x002cae; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 94190 add     ax, es:[bx+302h] ;~ 28F0:2CAE
cs=0x28f0;eip=0x002cb3; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 94191 adc     dx, es:[bx+304h] ;~ 28F0:2CB3
cs=0x28f0;eip=0x002cb8; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 94192 add     ax, es:[bx+20Eh] ;~ 28F0:2CB8
cs=0x28f0;eip=0x002cbd; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 94193 adc     dx, es:[bx+210h] ;~ 28F0:2CBD
cs=0x28f0;eip=0x002cc2; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 94194 les     bx, es:[bx+31Ch] ;~ 28F0:2CC2
cs=0x28f0;eip=0x002cc7; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 94195 cmp     dx, es:[bx+0Ch] ;~ 28F0:2CC7
cs=0x28f0;eip=0x002ccb; 	R(JG(loc_3a21e));	// 94196 jg      short loc_3A21E ;~ 28F0:2CCB
cs=0x28f0;eip=0x002ccd; 	R(JL(loc_3a1b5));	// 94197 jl      short loc_3A1B5 ;~ 28F0:2CCD
cs=0x28f0;eip=0x002ccf; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 94198 cmp     ax, es:[bx+0Ah] ;~ 28F0:2CCF
cs=0x28f0;eip=0x002cd3; 	R(JNC(loc_3a21e));	// 94199 jnb     short loc_3A21E ;~ 28F0:2CD3
loc_3a1b5:
	// 10489 
cs=0x28f0;eip=0x002cd5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94202 les     bx, [bp+arg_0] ;~ 28F0:2CD5
cs=0x28f0;eip=0x002cd8; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1C4))));	// 94203 mov     ax, es:[bx+1C4h] ;~ 28F0:2CD8
cs=0x28f0;eip=0x002cdd; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1C6))));	// 94204 mov     dx, es:[bx+1C6h] ;~ 28F0:2CDD
cs=0x28f0;eip=0x002ce2; 	T(CMP(*(dw*)(raddr(es,bx+0x1C2)), dx));	// 94205 cmp     es:[bx+1C2h], dx ;~ 28F0:2CE2
cs=0x28f0;eip=0x002ce7; 	R(JL(loc_3a1dc));	// 94206 jl      short loc_3A1DC ;~ 28F0:2CE7
cs=0x28f0;eip=0x002ce9; 	R(JG(loc_3a1d2));	// 94207 jg      short loc_3A1D2 ;~ 28F0:2CE9
cs=0x28f0;eip=0x002ceb; 	T(CMP(*(dw*)(raddr(es,bx+0x1C0)), ax));	// 94208 cmp     es:[bx+1C0h], ax ;~ 28F0:2CEB
cs=0x28f0;eip=0x002cf0; 	R(JBE(loc_3a1dc));	// 94209 jbe     short loc_3A1DC ;~ 28F0:2CF0
loc_3a1d2:
	// 10490 
cs=0x28f0;eip=0x002cf2; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20))));	// 94212 mov     ax, es:[bx+20h] ;~ 28F0:2CF2
cs=0x28f0;eip=0x002cf6; 	T(OR(ax, *(dw*)(raddr(es,bx+0x22))));	// 94213 or      ax, es:[bx+22h] ;~ 28F0:2CF6
cs=0x28f0;eip=0x002cfa; 	R(JNZ(loc_3a21e));	// 94214 jnz     short loc_3A21E ;~ 28F0:2CFA
loc_3a1dc:
	// 10491 
cs=0x28f0;eip=0x002cfc; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x338))));	// 94218 mov     ax, es:[bx+338h] ;~ 28F0:2CFC
cs=0x28f0;eip=0x002d01; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), ax));	// 94219 mov     es:[bx+332h], ax ;~ 28F0:2D01
cs=0x28f0;eip=0x002d06; 	R(JMP(loc_3a21e));	// 94220 jmp     short loc_3A21E ;~ 28F0:2D06
loc_3a1e8:
	// 10492 
cs=0x28f0;eip=0x002d08; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 94224 mov     ax, es:[bx+2FAh] ;~ 28F0:2D08
cs=0x28f0;eip=0x002d0d; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 94225 mov     dx, es:[bx+2FCh] ;~ 28F0:2D0D
cs=0x28f0;eip=0x002d12; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 94226 add     ax, es:[bx+302h] ;~ 28F0:2D12
cs=0x28f0;eip=0x002d17; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 94227 adc     dx, es:[bx+304h] ;~ 28F0:2D17
cs=0x28f0;eip=0x002d1c; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 94228 les     bx, es:[bx+31Ch] ;~ 28F0:2D1C
cs=0x28f0;eip=0x002d21; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 94229 cmp     dx, es:[bx+0Ch] ;~ 28F0:2D21
cs=0x28f0;eip=0x002d25; 	R(JL(loc_3a21e));	// 94230 jl      short loc_3A21E ;~ 28F0:2D25
cs=0x28f0;eip=0x002d27; 	R(JG(loc_3a20f));	// 94231 jg      short loc_3A20F ;~ 28F0:2D27
cs=0x28f0;eip=0x002d29; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 94232 cmp     ax, es:[bx+0Ah] ;~ 28F0:2D29
cs=0x28f0;eip=0x002d2d; 	R(JC(loc_3a21e));	// 94233 jb      short loc_3A21E ;~ 28F0:2D2D
loc_3a20f:
	// 10493 
cs=0x28f0;eip=0x002d2f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94236 les     bx, [bp+arg_0] ;~ 28F0:2D2F
cs=0x28f0;eip=0x002d32; 	T(SUB(ax, ax));	// 94237 sub     ax, ax ;~ 28F0:2D32
cs=0x28f0;eip=0x002d34; 	X(MOV(*(dw*)(raddr(es,bx+0x1C2)), ax));	// 94238 mov     es:[bx+1C2h], ax ;~ 28F0:2D34
cs=0x28f0;eip=0x002d39; 	X(MOV(*(dw*)(raddr(es,bx+0x1C0)), ax));	// 94239 mov     es:[bx+1C0h], ax ;~ 28F0:2D39
loc_3a21e:
	// 10494 
cs=0x28f0;eip=0x002d3e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94243 push    word ptr [bp+arg_0+2] ;~ 28F0:2D3E
cs=0x28f0;eip=0x002d41; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94244 push    word ptr [bp+arg_0] ;~ 28F0:2D41
cs=0x28f0;eip=0x002d44; 	R(CALL(sub_39bdb,0));	// 94245 call    sub_39BDB ;~ 28F0:2D44
cs=0x28f0;eip=0x002d47; 	T(MOV(sp, bp));	// 94246 mov     sp, bp ;~ 28F0:2D47
cs=0x28f0;eip=0x002d49; 	X(POP(bp));	// 94247 pop     bp ;~ 28F0:2D49
cs=0x28f0;eip=0x002d4a; 	R(RETN(4));	// 94248 retn    4 ;~ 28F0:2D4A
sub_3a22e:
	// 94258 
#undef var_2
#define var_2 -2
	// 94260 var_2           = word ptr -2 ;~ 28F0:2D4E
#undef arg_0
#define arg_0 4
	// 94261 arg_0           = word ptr  4 ;~ 28F0:2D4E
#undef arg_2
#define arg_2 6
	// 94262 arg_2           = word ptr  6 ;~ 28F0:2D4E
#undef arg_4
#define arg_4 8
	// 94263 arg_4           = word ptr  8 ;~ 28F0:2D4E
#undef arg_6
#define arg_6 0x0A
	// 94264 arg_6           = word ptr  0Ah ;~ 28F0:2D4E
#undef arg_8
#define arg_8 0x0C
	// 94265 arg_8           = word ptr  0Ch ;~ 28F0:2D4E
cs=0x28f0;eip=0x002d4e; 	X(PUSH(bp));	// 94267 push    bp ;~ 28F0:2D4E
cs=0x28f0;eip=0x002d4f; 	T(MOV(bp, sp));	// 94268 mov     bp, sp ;~ 28F0:2D4F
cs=0x28f0;eip=0x002d51; 	T(SUB(sp, 2));	// 94269 sub     sp, 2 ;~ 28F0:2D51
cs=0x28f0;eip=0x002d54; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 94270 mov     ax, [bp+arg_4] ;~ 28F0:2D54
cs=0x28f0;eip=0x002d57; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 94271 sub     ax, [bp+arg_8] ;~ 28F0:2D57
cs=0x28f0;eip=0x002d5a; 	T(CWD);	// 94272 cwd ;~ 28F0:2D5A
cs=0x28f0;eip=0x002d5b; 	X(PUSH(dx));	// 94273 push    dx ;~ 28F0:2D5B
cs=0x28f0;eip=0x002d5c; 	X(PUSH(ax));	// 94274 push    ax ;~ 28F0:2D5C
cs=0x28f0;eip=0x002d5d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 94275 mov     ax, [bp+arg_2] ;~ 28F0:2D5D
cs=0x28f0;eip=0x002d60; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 94276 sub     ax, [bp+arg_6] ;~ 28F0:2D60
cs=0x28f0;eip=0x002d63; 	T(CWD);	// 94277 cwd ;~ 28F0:2D63
cs=0x28f0;eip=0x002d64; 	X(PUSH(dx));	// 94278 push    dx ;~ 28F0:2D64
cs=0x28f0;eip=0x002d65; 	X(PUSH(ax));	// 94279 push    ax ;~ 28F0:2D65
cs=0x28f0;eip=0x002d66; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 94280 mov     ax, [bp+arg_0] ;~ 28F0:2D66
cs=0x28f0;eip=0x002d69; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 94281 sub     ax, [bp+arg_8] ;~ 28F0:2D69
cs=0x28f0;eip=0x002d6c; 	T(CWD);	// 94282 cwd ;~ 28F0:2D6C
cs=0x28f0;eip=0x002d6d; 	X(PUSH(dx));	// 94283 push    dx ;~ 28F0:2D6D
cs=0x28f0;eip=0x002d6e; 	X(PUSH(ax));	// 94284 push    ax ;~ 28F0:2D6E
cs=0x28f0;eip=0x002d6f; 	R(CALLF(sub_105c2,0));	// 94285 call    sub_105C2 ;~ 28F0:2D6F
cs=0x28f0;eip=0x002d74; 	X(PUSH(dx));	// 94286 push    dx ;~ 28F0:2D74
cs=0x28f0;eip=0x002d75; 	X(PUSH(ax));	// 94287 push    ax ;~ 28F0:2D75
cs=0x28f0;eip=0x002d76; 	R(CALLF(sub_10526,0));	// 94288 call    sub_10526 ;~ 28F0:2D76
cs=0x28f0;eip=0x002d7b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 94289 add     ax, [bp+arg_6] ;~ 28F0:2D7B
cs=0x28f0;eip=0x002d7e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 94290 mov     [bp+var_2], ax ;~ 28F0:2D7E
cs=0x28f0;eip=0x002d81; 	T(MOV(sp, bp));	// 94291 mov     sp, bp ;~ 28F0:2D81
cs=0x28f0;eip=0x002d83; 	X(POP(bp));	// 94292 pop     bp ;~ 28F0:2D83
cs=0x28f0;eip=0x002d84; 	R(RETN(0x0A));	// 94293 retn    0Ah ;~ 28F0:2D84
sub_3a267:
	// 94301 
#undef var_2
#define var_2 -2
	// 94304 var_2           = word ptr -2 ;~ 28F0:2D87
#undef arg_0
#define arg_0 4
	// 94305 arg_0           = word ptr  4 ;~ 28F0:2D87
#undef arg_2
#define arg_2 6
	// 94306 arg_2           = word ptr  6 ;~ 28F0:2D87
#undef arg_4
#define arg_4 8
	// 94307 arg_4           = word ptr  8 ;~ 28F0:2D87
#undef arg_6
#define arg_6 0x0A
	// 94308 arg_6           = word ptr  0Ah ;~ 28F0:2D87
#undef arg_8
#define arg_8 0x0C
	// 94309 arg_8           = word ptr  0Ch ;~ 28F0:2D87
cs=0x28f0;eip=0x002d87; 	X(PUSH(bp));	// 94311 push    bp ;~ 28F0:2D87
cs=0x28f0;eip=0x002d88; 	T(MOV(bp, sp));	// 94312 mov     bp, sp ;~ 28F0:2D88
cs=0x28f0;eip=0x002d8a; 	T(SUB(sp, 2));	// 94313 sub     sp, 2 ;~ 28F0:2D8A
cs=0x28f0;eip=0x002d8d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 94314 mov     ax, [bp+arg_2] ;~ 28F0:2D8D
cs=0x28f0;eip=0x002d90; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 94315 sub     ax, [bp+arg_6] ;~ 28F0:2D90
cs=0x28f0;eip=0x002d93; 	T(CWD);	// 94316 cwd ;~ 28F0:2D93
cs=0x28f0;eip=0x002d94; 	X(PUSH(dx));	// 94317 push    dx ;~ 28F0:2D94
cs=0x28f0;eip=0x002d95; 	X(PUSH(ax));	// 94318 push    ax ;~ 28F0:2D95
cs=0x28f0;eip=0x002d96; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 94319 mov     ax, [bp+arg_4] ;~ 28F0:2D96
cs=0x28f0;eip=0x002d99; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 94320 sub     ax, [bp+arg_8] ;~ 28F0:2D99
cs=0x28f0;eip=0x002d9c; 	T(CWD);	// 94321 cwd ;~ 28F0:2D9C
cs=0x28f0;eip=0x002d9d; 	X(PUSH(dx));	// 94322 push    dx ;~ 28F0:2D9D
cs=0x28f0;eip=0x002d9e; 	X(PUSH(ax));	// 94323 push    ax ;~ 28F0:2D9E
cs=0x28f0;eip=0x002d9f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 94324 mov     ax, [bp+arg_0] ;~ 28F0:2D9F
cs=0x28f0;eip=0x002da2; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 94325 sub     ax, [bp+arg_6] ;~ 28F0:2DA2
cs=0x28f0;eip=0x002da5; 	T(CWD);	// 94326 cwd ;~ 28F0:2DA5
cs=0x28f0;eip=0x002da6; 	X(PUSH(dx));	// 94327 push    dx ;~ 28F0:2DA6
cs=0x28f0;eip=0x002da7; 	X(PUSH(ax));	// 94328 push    ax ;~ 28F0:2DA7
cs=0x28f0;eip=0x002da8; 	R(CALLF(sub_105c2,0));	// 94329 call    sub_105C2 ;~ 28F0:2DA8
cs=0x28f0;eip=0x002dad; 	X(PUSH(dx));	// 94330 push    dx ;~ 28F0:2DAD
cs=0x28f0;eip=0x002dae; 	X(PUSH(ax));	// 94331 push    ax ;~ 28F0:2DAE
cs=0x28f0;eip=0x002daf; 	R(CALLF(sub_10526,0));	// 94332 call    sub_10526 ;~ 28F0:2DAF
cs=0x28f0;eip=0x002db4; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 94333 add     ax, [bp+arg_8] ;~ 28F0:2DB4
cs=0x28f0;eip=0x002db7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 94334 mov     [bp+var_2], ax ;~ 28F0:2DB7
cs=0x28f0;eip=0x002dba; 	T(MOV(sp, bp));	// 94335 mov     sp, bp ;~ 28F0:2DBA
cs=0x28f0;eip=0x002dbc; 	X(POP(bp));	// 94336 pop     bp ;~ 28F0:2DBC
cs=0x28f0;eip=0x002dbd; 	R(RETN(0x0A));	// 94337 retn    0Ah ;~ 28F0:2DBD
sub_3a2a0:
	// 94345 
#undef var_14
#define var_14 -0x14
	// 94347 var_14          = dword ptr -14h ;~ 28F0:2DC0
#undef var_10
#define var_10 -0x10
	// 94348 var_10          = dword ptr -10h ;~ 28F0:2DC0
#undef var_c
#define var_c -0x0C
	// 94349 var_C           = word ptr -0Ch ;~ 28F0:2DC0
#undef var_a
#define var_a -0x0A
	// 94350 var_A           = word ptr -0Ah ;~ 28F0:2DC0
#undef var_8
#define var_8 -8
	// 94351 var_8           = word ptr -8 ;~ 28F0:2DC0
#undef var_6
#define var_6 -6
	// 94352 var_6           = word ptr -6 ;~ 28F0:2DC0
#undef var_4
#define var_4 -4
	// 94353 var_4           = word ptr -4 ;~ 28F0:2DC0
#undef var_2
#define var_2 -2
	// 94354 var_2           = word ptr -2 ;~ 28F0:2DC0
#undef arg_0
#define arg_0 4
	// 94355 arg_0           = dword ptr  4 ;~ 28F0:2DC0
#undef arg_4
#define arg_4 8
	// 94356 arg_4           = dword ptr  8 ;~ 28F0:2DC0
cs=0x28f0;eip=0x002dc0; 	X(PUSH(bp));	// 94358 push    bp ;~ 28F0:2DC0
cs=0x28f0;eip=0x002dc1; 	T(MOV(bp, sp));	// 94359 mov     bp, sp ;~ 28F0:2DC1
cs=0x28f0;eip=0x002dc3; 	T(SUB(sp, 0x14));	// 94360 sub     sp, 14h ;~ 28F0:2DC3
cs=0x28f0;eip=0x002dc6; 	X(PUSH(di));	// 94361 push    di ;~ 28F0:2DC6
cs=0x28f0;eip=0x002dc7; 	X(PUSH(si));	// 94362 push    si ;~ 28F0:2DC7
cs=0x28f0;eip=0x002dc8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 94363 les     bx, [bp+arg_4] ;~ 28F0:2DC8
cs=0x28f0;eip=0x002dcb; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 94364 mov     ax, es:[bx+120h] ;~ 28F0:2DCB
cs=0x28f0;eip=0x002dd0; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 94365 mov     dx, es:[bx+122h] ;~ 28F0:2DD0
cs=0x28f0;eip=0x002dd5; 	T(MOV(cl, 8));	// 94366 mov     cl, 8 ;~ 28F0:2DD5
cs=0x28f0;eip=0x002dd7; 	R(CALLF(sub_10240,0));	// 94367 call    sub_10240 ;~ 28F0:2DD7
cs=0x28f0;eip=0x002ddc; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 94368 mov     [bp+var_C], ax ;~ 28F0:2DDC
cs=0x28f0;eip=0x002ddf; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 94369 les     bx, [bp+arg_4] ;~ 28F0:2DDF
cs=0x28f0;eip=0x002de2; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 94370 les     bx, es:[bx+31Ch] ;~ 28F0:2DE2
cs=0x28f0;eip=0x002de7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 94371 mov     ax, es:[bx+0Ah] ;~ 28F0:2DE7
cs=0x28f0;eip=0x002deb; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 94372 mov     dx, es:[bx+0Ch] ;~ 28F0:2DEB
cs=0x28f0;eip=0x002def; 	T(MOV(cl, 8));	// 94373 mov     cl, 8 ;~ 28F0:2DEF
cs=0x28f0;eip=0x002df1; 	R(CALLF(sub_10240,0));	// 94374 call    sub_10240 ;~ 28F0:2DF1
cs=0x28f0;eip=0x002df6; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 94375 mov     [bp+var_A], ax ;~ 28F0:2DF6
cs=0x28f0;eip=0x002df9; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 94376 mov     [bp+var_8], dx ;~ 28F0:2DF9
cs=0x28f0;eip=0x002dfc; 	T(OR(dx, dx));	// 94377 or      dx, dx ;~ 28F0:2DFC
cs=0x28f0;eip=0x002dfe; 	R(JG(loc_3a2fa));	// 94378 jg      short loc_3A2FA ;~ 28F0:2DFE
cs=0x28f0;eip=0x002e00; 	R(JL(loc_3a2e7));	// 94379 jl      short loc_3A2E7 ;~ 28F0:2E00
cs=0x28f0;eip=0x002e02; 	T(CMP(ax, 0x32));	// 94380 cmp     ax, 32h ; '2' ;~ 28F0:2E02
cs=0x28f0;eip=0x002e05; 	R(JNC(loc_3a2fa));	// 94381 jnb     short loc_3A2FA ;~ 28F0:2E05
loc_3a2e7:
	// 10495 
cs=0x28f0;eip=0x002e07; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94384 les     bx, [bp+arg_0] ;~ 28F0:2E07
cs=0x28f0;eip=0x002e0a; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 94385 mov     ax, es:[bx+4] ;~ 28F0:2E0A
cs=0x28f0;eip=0x002e0e; 	T(SAR(ax, 1));	// 94386 sar     ax, 1 ;~ 28F0:2E0E
cs=0x28f0;eip=0x002e10; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_c))));	// 94387 cmp     ax, [bp+var_C] ;~ 28F0:2E10
cs=0x28f0;eip=0x002e13; 	R(JGE(loc_3a30c));	// 94388 jge     short loc_3A30C ;~ 28F0:2E13
loc_3a2f5:
	// 10496 
cs=0x28f0;eip=0x002e15; 	T(SUB(ax, ax));	// 94391 sub     ax, ax ;~ 28F0:2E15
cs=0x28f0;eip=0x002e17; 	R(JMP(loc_3a3bc));	// 94392 jmp     loc_3A3BC ;~ 28F0:2E17
loc_3a2fa:
	// 10497 
cs=0x28f0;eip=0x002e1a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94397 les     bx, [bp+arg_0] ;~ 28F0:2E1A
cs=0x28f0;eip=0x002e1d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 94398 mov     ax, [bp+var_C] ;~ 28F0:2E1D
cs=0x28f0;eip=0x002e20; 	T(CMP(*(dw*)(raddr(es,bx+4)), ax));	// 94399 cmp     es:[bx+4], ax ;~ 28F0:2E20
cs=0x28f0;eip=0x002e24; 	R(JLE(loc_3a30c));	// 94400 jle     short loc_3A30C ;~ 28F0:2E24
loc_3a306:
	// 10498 
cs=0x28f0;eip=0x002e26; 	T(MOV(ax, 1));	// 94403 mov     ax, 1 ;~ 28F0:2E26
cs=0x28f0;eip=0x002e29; 	R(JMP(loc_3a3bc));	// 94404 jmp     loc_3A3BC ;~ 28F0:2E29
loc_3a30c:
	// 10499 
cs=0x28f0;eip=0x002e2c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94409 les     bx, [bp+arg_0] ;~ 28F0:2E2C
cs=0x28f0;eip=0x002e2f; 	T(MOV(al, *(raddr(es,bx+2))));	// 94410 mov     al, es:[bx+2] ;~ 28F0:2E2F
cs=0x28f0;eip=0x002e33; 	T(CBW);	// 94411 cbw ;~ 28F0:2E33
cs=0x28f0;eip=0x002e34; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 94412 mov     [bp+var_4], ax ;~ 28F0:2E34
cs=0x28f0;eip=0x002e37; 	T(OR(ax, ax));	// 94413 or      ax, ax ;~ 28F0:2E37
cs=0x28f0;eip=0x002e39; 	R(JZ(loc_3a344));	// 94414 jz      short loc_3A344 ;~ 28F0:2E39
cs=0x28f0;eip=0x002e3b; 	T(MOV(ax, 6));	// 94415 mov     ax, 6 ;~ 28F0:2E3B
cs=0x28f0;eip=0x002e3e; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_4))));	// 94416 imul    [bp+var_4] ;~ 28F0:2E3E
cs=0x28f0;eip=0x002e41; 	T(ADD(ax, bx));	// 94417 add     ax, bx ;~ 28F0:2E41
cs=0x28f0;eip=0x002e43; 	T(MOV(dx, es));	// 94418 mov     dx, es ;~ 28F0:2E43
cs=0x28f0;eip=0x002e45; 	T(ADD(ax, 4));	// 94419 add     ax, 4 ;~ 28F0:2E45
cs=0x28f0;eip=0x002e48; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 94420 mov     word ptr [bp+var_10], ax ;~ 28F0:2E48
cs=0x28f0;eip=0x002e4b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 94421 mov     word ptr [bp+var_10+2], dx ;~ 28F0:2E4B
cs=0x28f0;eip=0x002e4e; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_c))));	// 94422 mov     si, [bp+var_C] ;~ 28F0:2E4E
cs=0x28f0;eip=0x002e51; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_4))));	// 94423 mov     cx, [bp+var_4] ;~ 28F0:2E51
cs=0x28f0;eip=0x002e54; 	T(LES(di, *(dd*)(raddr(ss,bp+var_10))));	// 94424 les     di, [bp+var_10] ;~ 28F0:2E54
loc_3a337:
	// 10500 
cs=0x28f0;eip=0x002e57; 	T(CMP(*(dw*)(raddr(es,di)), si));	// 94427 cmp     es:[di], si ;~ 28F0:2E57
cs=0x28f0;eip=0x002e5a; 	R(JLE(loc_3a341));	// 94428 jle     short loc_3A341 ;~ 28F0:2E5A
cs=0x28f0;eip=0x002e5c; 	T(SUB(di, 6));	// 94429 sub     di, 6 ;~ 28F0:2E5C
cs=0x28f0;eip=0x002e5f; 	R(LOOP(loc_3a337));	// 94430 loop    loc_3A337 ;~ 28F0:2E5F
loc_3a341:
	// 10501 
cs=0x28f0;eip=0x002e61; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), cx));	// 94433 mov     [bp+var_4], cx ;~ 28F0:2E61
loc_3a344:
	// 10502 
cs=0x28f0;eip=0x002e64; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 94436 mov     ax, [bp+var_4] ;~ 28F0:2E64
cs=0x28f0;eip=0x002e67; 	T(INC(ax));	// 94437 inc     ax ;~ 28F0:2E67
cs=0x28f0;eip=0x002e68; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 94438 mov     [bp+var_6], ax ;~ 28F0:2E68
cs=0x28f0;eip=0x002e6b; 	T(MOV(ax, 6));	// 94439 mov     ax, 6 ;~ 28F0:2E6B
cs=0x28f0;eip=0x002e6e; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_6))));	// 94440 imul    [bp+var_6] ;~ 28F0:2E6E
cs=0x28f0;eip=0x002e71; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94441 add     ax, word ptr [bp+arg_0] ;~ 28F0:2E71
cs=0x28f0;eip=0x002e74; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94442 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:2E74
cs=0x28f0;eip=0x002e77; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 94443 mov     word ptr [bp+var_10], ax ;~ 28F0:2E77
cs=0x28f0;eip=0x002e7a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 94444 mov     word ptr [bp+var_10+2], dx ;~ 28F0:2E7A
cs=0x28f0;eip=0x002e7d; 	T(MOV(ax, 6));	// 94445 mov     ax, 6 ;~ 28F0:2E7D
cs=0x28f0;eip=0x002e80; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_4))));	// 94446 imul    [bp+var_4] ;~ 28F0:2E80
cs=0x28f0;eip=0x002e83; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94447 add     ax, word ptr [bp+arg_0] ;~ 28F0:2E83
cs=0x28f0;eip=0x002e86; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94448 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:2E86
cs=0x28f0;eip=0x002e89; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_14))), ax));	// 94449 mov     word ptr [bp+var_14], ax ;~ 28F0:2E89
cs=0x28f0;eip=0x002e8c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_14+2))), dx));	// 94450 mov     word ptr [bp+var_14+2], dx ;~ 28F0:2E8C
cs=0x28f0;eip=0x002e8f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_14))));	// 94451 les     bx, [bp+var_14] ;~ 28F0:2E8F
cs=0x28f0;eip=0x002e92; 	X(PUSH(*(dw*)(raddr(es,bx+4))));	// 94452 push    word ptr es:[bx+4] ;~ 28F0:2E92
cs=0x28f0;eip=0x002e96; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 94453 mov     ax, es:[bx+6] ;~ 28F0:2E96
cs=0x28f0;eip=0x002e9a; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 94454 mov     dx, es:[bx+8] ;~ 28F0:2E9A
cs=0x28f0;eip=0x002e9e; 	T(MOV(cl, 3));	// 94455 mov     cl, 3 ;~ 28F0:2E9E
cs=0x28f0;eip=0x002ea0; 	R(CALLF(sub_10240,0));	// 94456 call    sub_10240 ;~ 28F0:2EA0
cs=0x28f0;eip=0x002ea5; 	X(PUSH(ax));	// 94457 push    ax ;~ 28F0:2EA5
cs=0x28f0;eip=0x002ea6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 94458 les     bx, [bp+var_10] ;~ 28F0:2EA6
cs=0x28f0;eip=0x002ea9; 	X(PUSH(*(dw*)(raddr(es,bx+4))));	// 94459 push    word ptr es:[bx+4] ;~ 28F0:2EA9
cs=0x28f0;eip=0x002ead; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 94460 mov     ax, es:[bx+6] ;~ 28F0:2EAD
cs=0x28f0;eip=0x002eb1; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 94461 mov     dx, es:[bx+8] ;~ 28F0:2EB1
cs=0x28f0;eip=0x002eb5; 	T(MOV(cl, 3));	// 94462 mov     cl, 3 ;~ 28F0:2EB5
cs=0x28f0;eip=0x002eb7; 	R(CALLF(sub_10240,0));	// 94463 call    sub_10240 ;~ 28F0:2EB7
cs=0x28f0;eip=0x002ebc; 	X(PUSH(ax));	// 94464 push    ax ;~ 28F0:2EBC
cs=0x28f0;eip=0x002ebd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 94465 mov     ax, [bp+var_A] ;~ 28F0:2EBD
cs=0x28f0;eip=0x002ec0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 94466 mov     dx, [bp+var_8] ;~ 28F0:2EC0
cs=0x28f0;eip=0x002ec3; 	T(MOV(cl, 3));	// 94467 mov     cl, 3 ;~ 28F0:2EC3
cs=0x28f0;eip=0x002ec5; 	R(CALLF(sub_10240,0));	// 94468 call    sub_10240 ;~ 28F0:2EC5
cs=0x28f0;eip=0x002eca; 	X(PUSH(ax));	// 94469 push    ax ;~ 28F0:2ECA
cs=0x28f0;eip=0x002ecb; 	R(CALL(sub_3a267,0));	// 94470 call    sub_3A267 ;~ 28F0:2ECB
cs=0x28f0;eip=0x002ece; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 94471 mov     [bp+var_2], ax ;~ 28F0:2ECE
cs=0x28f0;eip=0x002ed1; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), ax));	// 94472 cmp     [bp+var_C], ax ;~ 28F0:2ED1
cs=0x28f0;eip=0x002ed4; 	R(JL(loc_3a3b9));	// 94473 jl      short loc_3A3B9 ;~ 28F0:2ED4
cs=0x28f0;eip=0x002ed6; 	R(JMP(loc_3a2f5));	// 94474 jmp     loc_3A2F5 ;~ 28F0:2ED6
loc_3a3b9:
	// 10503 
cs=0x28f0;eip=0x002ed9; 	R(JMP(loc_3a306));	// 94478 jmp     loc_3A306 ;~ 28F0:2ED9
loc_3a3bc:
	// 10504 
cs=0x28f0;eip=0x002edc; 	X(POP(si));	// 94483 pop     si ;~ 28F0:2EDC
cs=0x28f0;eip=0x002edd; 	X(POP(di));	// 94484 pop     di ;~ 28F0:2EDD
cs=0x28f0;eip=0x002ede; 	T(MOV(sp, bp));	// 94485 mov     sp, bp ;~ 28F0:2EDE
cs=0x28f0;eip=0x002ee0; 	X(POP(bp));	// 94486 pop     bp ;~ 28F0:2EE0
cs=0x28f0;eip=0x002ee1; 	R(RETN(8));	// 94487 retn    8 ;~ 28F0:2EE1
sub_3a3c4:
	// 94495 
#undef var_18
#define var_18 -0x18
	// 94497 var_18          = dword ptr -18h ;~ 28F0:2EE4
#undef var_14
#define var_14 -0x14
	// 94498 var_14          = dword ptr -14h ;~ 28F0:2EE4
#undef var_e
#define var_e -0x0E
	// 94499 var_E           = word ptr -0Eh ;~ 28F0:2EE4
#undef var_c
#define var_c -0x0C
	// 94500 var_C           = word ptr -0Ch ;~ 28F0:2EE4
#undef var_a
#define var_a -0x0A
	// 94501 var_A           = word ptr -0Ah ;~ 28F0:2EE4
#undef var_8
#define var_8 -8
	// 94502 var_8           = word ptr -8 ;~ 28F0:2EE4
#undef var_6
#define var_6 -6
	// 94503 var_6           = word ptr -6 ;~ 28F0:2EE4
#undef var_4
#define var_4 -4
	// 94504 var_4           = word ptr -4 ;~ 28F0:2EE4
#undef var_2
#define var_2 -2
	// 94505 var_2           = word ptr -2 ;~ 28F0:2EE4
#undef arg_0
#define arg_0 4
	// 94506 arg_0           = dword ptr  4 ;~ 28F0:2EE4
#undef arg_4
#define arg_4 8
	// 94507 arg_4           = dword ptr  8 ;~ 28F0:2EE4
cs=0x28f0;eip=0x002ee4; 	X(PUSH(bp));	// 94509 push    bp ;~ 28F0:2EE4
cs=0x28f0;eip=0x002ee5; 	T(MOV(bp, sp));	// 94510 mov     bp, sp ;~ 28F0:2EE5
cs=0x28f0;eip=0x002ee7; 	T(SUB(sp, 0x18));	// 94511 sub     sp, 18h ;~ 28F0:2EE7
cs=0x28f0;eip=0x002eea; 	X(PUSH(di));	// 94512 push    di ;~ 28F0:2EEA
cs=0x28f0;eip=0x002eeb; 	X(PUSH(si));	// 94513 push    si ;~ 28F0:2EEB
cs=0x28f0;eip=0x002eec; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 94514 les     bx, [bp+arg_4] ;~ 28F0:2EEC
cs=0x28f0;eip=0x002eef; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 94515 les     bx, es:[bx+31Ch] ;~ 28F0:2EEF
cs=0x28f0;eip=0x002ef4; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 94516 mov     ax, es:[bx+0Ah] ;~ 28F0:2EF4
cs=0x28f0;eip=0x002ef8; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 94517 mov     dx, es:[bx+0Ch] ;~ 28F0:2EF8
cs=0x28f0;eip=0x002efc; 	T(MOV(cl, 8));	// 94518 mov     cl, 8 ;~ 28F0:2EFC
cs=0x28f0;eip=0x002efe; 	R(CALLF(sub_10240,0));	// 94519 call    sub_10240 ;~ 28F0:2EFE
cs=0x28f0;eip=0x002f03; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 94520 mov     [bp+var_8], ax ;~ 28F0:2F03
cs=0x28f0;eip=0x002f06; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 94521 mov     [bp+var_6], dx ;~ 28F0:2F06
cs=0x28f0;eip=0x002f09; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94522 les     bx, [bp+arg_0] ;~ 28F0:2F09
cs=0x28f0;eip=0x002f0c; 	T(MOV(al, 6));	// 94523 mov     al, 6 ;~ 28F0:2F0C
cs=0x28f0;eip=0x002f0e; 	X(IMUL1_1(*(raddr(es,bx+2))));	// 94524 imul    byte ptr es:[bx+2] ;~ 28F0:2F0E
cs=0x28f0;eip=0x002f12; 	T(MOV(si, ax));	// 94525 mov     si, ax ;~ 28F0:2F12
cs=0x28f0;eip=0x002f14; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 94526 mov     ax, [bp+var_8] ;~ 28F0:2F14
cs=0x28f0;eip=0x002f17; 	T(CMP(*(dw*)(raddr(es,bx+si+8)), dx));	// 94527 cmp     es:[bx+si+8], dx ;~ 28F0:2F17
cs=0x28f0;eip=0x002f1b; 	R(JG(loc_3a40b));	// 94528 jg      short loc_3A40B ;~ 28F0:2F1B
cs=0x28f0;eip=0x002f1d; 	R(JL(loc_3a405));	// 94529 jl      short loc_3A405 ;~ 28F0:2F1D
cs=0x28f0;eip=0x002f1f; 	T(CMP(*(dw*)(raddr(es,bx+si+6)), ax));	// 94530 cmp     es:[bx+si+6], ax ;~ 28F0:2F1F
cs=0x28f0;eip=0x002f23; 	R(JNC(loc_3a40b));	// 94531 jnb     short loc_3A40B ;~ 28F0:2F23
loc_3a405:
	// 10505 
cs=0x28f0;eip=0x002f25; 	T(MOV(ax, 2));	// 94535 mov     ax, 2 ;~ 28F0:2F25
cs=0x28f0;eip=0x002f28; 	R(JMP(loc_3a4fd));	// 94536 jmp     loc_3A4FD ;~ 28F0:2F28
loc_3a40b:
	// 10506 
cs=0x28f0;eip=0x002f2b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94541 les     bx, [bp+arg_0] ;~ 28F0:2F2B
cs=0x28f0;eip=0x002f2e; 	T(MOV(al, *(raddr(es,bx+2))));	// 94542 mov     al, es:[bx+2] ;~ 28F0:2F2E
cs=0x28f0;eip=0x002f32; 	T(CBW);	// 94543 cbw ;~ 28F0:2F32
cs=0x28f0;eip=0x002f33; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 94544 mov     [bp+var_4], ax ;~ 28F0:2F33
cs=0x28f0;eip=0x002f36; 	T(MOV(al, *(raddr(es,bx+3))));	// 94545 mov     al, es:[bx+3] ;~ 28F0:2F36
cs=0x28f0;eip=0x002f3a; 	T(CBW);	// 94546 cbw ;~ 28F0:2F3A
cs=0x28f0;eip=0x002f3b; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4))));	// 94547 cmp     ax, [bp+var_4] ;~ 28F0:2F3B
cs=0x28f0;eip=0x002f3e; 	R(JZ(loc_3a45a));	// 94548 jz      short loc_3A45A ;~ 28F0:2F3E
cs=0x28f0;eip=0x002f40; 	T(CBW);	// 94549 cbw ;~ 28F0:2F40
cs=0x28f0;eip=0x002f41; 	T(MOV(si, ax));	// 94550 mov     si, ax ;~ 28F0:2F41
cs=0x28f0;eip=0x002f43; 	T(MOV(ax, 6));	// 94551 mov     ax, 6 ;~ 28F0:2F43
cs=0x28f0;eip=0x002f46; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_4))));	// 94552 imul    [bp+var_4] ;~ 28F0:2F46
cs=0x28f0;eip=0x002f49; 	T(ADD(ax, bx));	// 94553 add     ax, bx ;~ 28F0:2F49
cs=0x28f0;eip=0x002f4b; 	T(MOV(dx, es));	// 94554 mov     dx, es ;~ 28F0:2F4B
cs=0x28f0;eip=0x002f4d; 	T(ADD(ax, 6));	// 94555 add     ax, 6 ;~ 28F0:2F4D
cs=0x28f0;eip=0x002f50; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_14))), ax));	// 94556 mov     word ptr [bp+var_14], ax ;~ 28F0:2F50
cs=0x28f0;eip=0x002f53; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_14+2))), dx));	// 94557 mov     word ptr [bp+var_14+2], dx ;~ 28F0:2F53
cs=0x28f0;eip=0x002f56; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_4))));	// 94558 mov     cx, [bp+var_4] ;~ 28F0:2F56
cs=0x28f0;eip=0x002f59; 	T(LES(di, *(dd*)(raddr(ss,bp+var_14))));	// 94559 les     di, [bp+var_14] ;~ 28F0:2F59
loc_3a43c:
	// 10507 
cs=0x28f0;eip=0x002f5c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 94562 mov     ax, [bp+var_8] ;~ 28F0:2F5C
cs=0x28f0;eip=0x002f5f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 94563 mov     dx, [bp+var_6] ;~ 28F0:2F5F
cs=0x28f0;eip=0x002f62; 	T(CMP(*(dw*)(raddr(es,di+2)), dx));	// 94564 cmp     es:[di+2], dx ;~ 28F0:2F62
cs=0x28f0;eip=0x002f66; 	R(JL(loc_3a457));	// 94565 jl      short loc_3A457 ;~ 28F0:2F66
cs=0x28f0;eip=0x002f68; 	R(JG(loc_3a44f));	// 94566 jg      short loc_3A44F ;~ 28F0:2F68
cs=0x28f0;eip=0x002f6a; 	T(CMP(*(dw*)(raddr(es,di)), ax));	// 94567 cmp     es:[di], ax ;~ 28F0:2F6A
cs=0x28f0;eip=0x002f6d; 	R(JBE(loc_3a457));	// 94568 jbe     short loc_3A457 ;~ 28F0:2F6D
loc_3a44f:
	// 10508 
cs=0x28f0;eip=0x002f6f; 	T(ADD(di, 6));	// 94571 add     di, 6 ;~ 28F0:2F6F
cs=0x28f0;eip=0x002f72; 	T(INC(cx));	// 94572 inc     cx ;~ 28F0:2F72
cs=0x28f0;eip=0x002f73; 	T(CMP(cx, si));	// 94573 cmp     cx, si ;~ 28F0:2F73
cs=0x28f0;eip=0x002f75; 	R(JNZ(loc_3a43c));	// 94574 jnz     short loc_3A43C ;~ 28F0:2F75
loc_3a457:
	// 10509 
cs=0x28f0;eip=0x002f77; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), cx));	// 94578 mov     [bp+var_4], cx ;~ 28F0:2F77
loc_3a45a:
	// 10510 
cs=0x28f0;eip=0x002f7a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 94581 mov     ax, [bp+var_4] ;~ 28F0:2F7A
cs=0x28f0;eip=0x002f7d; 	T(DEC(ax));	// 94582 dec     ax ;~ 28F0:2F7D
cs=0x28f0;eip=0x002f7e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 94583 mov     [bp+var_2], ax ;~ 28F0:2F7E
cs=0x28f0;eip=0x002f81; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 94584 les     bx, [bp+arg_4] ;~ 28F0:2F81
cs=0x28f0;eip=0x002f84; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 94585 mov     ax, es:[bx+120h] ;~ 28F0:2F84
cs=0x28f0;eip=0x002f89; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 94586 mov     dx, es:[bx+122h] ;~ 28F0:2F89
cs=0x28f0;eip=0x002f8e; 	T(MOV(cl, 8));	// 94587 mov     cl, 8 ;~ 28F0:2F8E
cs=0x28f0;eip=0x002f90; 	R(CALLF(sub_10240,0));	// 94588 call    sub_10240 ;~ 28F0:2F90
cs=0x28f0;eip=0x002f95; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 94589 mov     [bp+var_E], ax ;~ 28F0:2F95
cs=0x28f0;eip=0x002f98; 	T(MOV(ax, 6));	// 94590 mov     ax, 6 ;~ 28F0:2F98
cs=0x28f0;eip=0x002f9b; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_4))));	// 94591 imul    [bp+var_4] ;~ 28F0:2F9B
cs=0x28f0;eip=0x002f9e; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94592 add     ax, word ptr [bp+arg_0] ;~ 28F0:2F9E
cs=0x28f0;eip=0x002fa1; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94593 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:2FA1
cs=0x28f0;eip=0x002fa4; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_14))), ax));	// 94594 mov     word ptr [bp+var_14], ax ;~ 28F0:2FA4
cs=0x28f0;eip=0x002fa7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_14+2))), dx));	// 94595 mov     word ptr [bp+var_14+2], dx ;~ 28F0:2FA7
cs=0x28f0;eip=0x002faa; 	T(MOV(ax, 6));	// 94596 mov     ax, 6 ;~ 28F0:2FAA
cs=0x28f0;eip=0x002fad; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 94597 imul    [bp+var_2] ;~ 28F0:2FAD
cs=0x28f0;eip=0x002fb0; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94598 add     ax, word ptr [bp+arg_0] ;~ 28F0:2FB0
cs=0x28f0;eip=0x002fb3; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94599 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:2FB3
cs=0x28f0;eip=0x002fb6; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_18))), ax));	// 94600 mov     word ptr [bp+var_18], ax ;~ 28F0:2FB6
cs=0x28f0;eip=0x002fb9; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_18+2))), dx));	// 94601 mov     word ptr [bp+var_18+2], dx ;~ 28F0:2FB9
cs=0x28f0;eip=0x002fbc; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_18))));	// 94602 les     bx, [bp+var_18] ;~ 28F0:2FBC
cs=0x28f0;eip=0x002fbf; 	X(PUSH(*(dw*)(raddr(es,bx+4))));	// 94603 push    word ptr es:[bx+4] ;~ 28F0:2FBF
cs=0x28f0;eip=0x002fc3; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 94604 mov     ax, es:[bx+6] ;~ 28F0:2FC3
cs=0x28f0;eip=0x002fc7; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 94605 mov     dx, es:[bx+8] ;~ 28F0:2FC7
cs=0x28f0;eip=0x002fcb; 	T(MOV(cl, 3));	// 94606 mov     cl, 3 ;~ 28F0:2FCB
cs=0x28f0;eip=0x002fcd; 	R(CALLF(sub_10240,0));	// 94607 call    sub_10240 ;~ 28F0:2FCD
cs=0x28f0;eip=0x002fd2; 	X(PUSH(ax));	// 94608 push    ax ;~ 28F0:2FD2
cs=0x28f0;eip=0x002fd3; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_14))));	// 94609 les     bx, [bp+var_14] ;~ 28F0:2FD3
cs=0x28f0;eip=0x002fd6; 	X(PUSH(*(dw*)(raddr(es,bx+4))));	// 94610 push    word ptr es:[bx+4] ;~ 28F0:2FD6
cs=0x28f0;eip=0x002fda; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 94611 mov     ax, es:[bx+6] ;~ 28F0:2FDA
cs=0x28f0;eip=0x002fde; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 94612 mov     dx, es:[bx+8] ;~ 28F0:2FDE
cs=0x28f0;eip=0x002fe2; 	T(MOV(cl, 3));	// 94613 mov     cl, 3 ;~ 28F0:2FE2
cs=0x28f0;eip=0x002fe4; 	R(CALLF(sub_10240,0));	// 94614 call    sub_10240 ;~ 28F0:2FE4
cs=0x28f0;eip=0x002fe9; 	X(PUSH(ax));	// 94615 push    ax ;~ 28F0:2FE9
cs=0x28f0;eip=0x002fea; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 94616 push    [bp+var_E] ;~ 28F0:2FEA
cs=0x28f0;eip=0x002fed; 	R(CALL(sub_3a22e,0));	// 94617 call    sub_3A22E ;~ 28F0:2FED
cs=0x28f0;eip=0x002ff0; 	T(CWD);	// 94618 cwd ;~ 28F0:2FF0
cs=0x28f0;eip=0x002ff1; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 94619 mov     [bp+var_C], ax ;~ 28F0:2FF1
cs=0x28f0;eip=0x002ff4; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 94620 mov     [bp+var_A], dx ;~ 28F0:2FF4
cs=0x28f0;eip=0x002ff7; 	T(MOV(al, 3));	// 94621 mov     al, 3 ;~ 28F0:2FF7
cs=0x28f0;eip=0x002ff9; 	X(PUSH(ax));	// 94622 push    ax ;~ 28F0:2FF9
cs=0x28f0;eip=0x002ffa; 	T(ax = bp+var_c);	// 94623 lea     ax, [bp+var_C] ;~ 28F0:2FFA
cs=0x28f0;eip=0x002ffd; 	X(PUSH(ax));	// 94624 push    ax ;~ 28F0:2FFD
cs=0x28f0;eip=0x002ffe; 	R(CALLF(sub_10626,0));	// 94625 call    sub_10626 ;~ 28F0:2FFE
cs=0x28f0;eip=0x003003; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 94626 mov     ax, [bp+var_C] ;~ 28F0:3003
cs=0x28f0;eip=0x003006; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_a))));	// 94627 mov     dx, [bp+var_A] ;~ 28F0:3006
cs=0x28f0;eip=0x003009; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), dx));	// 94628 cmp     [bp+var_6], dx ;~ 28F0:3009
cs=0x28f0;eip=0x00300c; 	R(JL(loc_3a4fb));	// 94629 jl      short loc_3A4FB ;~ 28F0:300C
cs=0x28f0;eip=0x00300e; 	R(JLE(loc_3a4f3));	// 94630 jle     short loc_3A4F3 ;~ 28F0:300E
cs=0x28f0;eip=0x003010; 	R(JMP(loc_3a405));	// 94631 jmp     loc_3A405 ;~ 28F0:3010
loc_3a4f3:
	// 10511 
cs=0x28f0;eip=0x003013; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), ax));	// 94635 cmp     [bp+var_8], ax ;~ 28F0:3013
cs=0x28f0;eip=0x003016; 	R(JBE(loc_3a4fb));	// 94636 jbe     short loc_3A4FB ;~ 28F0:3016
cs=0x28f0;eip=0x003018; 	R(JMP(loc_3a405));	// 94637 jmp     loc_3A405 ;~ 28F0:3018
loc_3a4fb:
	// 10512 
cs=0x28f0;eip=0x00301b; 	T(SUB(ax, ax));	// 94642 sub     ax, ax ;~ 28F0:301B
loc_3a4fd:
	// 10513 
cs=0x28f0;eip=0x00301d; 	X(POP(si));	// 94645 pop     si ;~ 28F0:301D
cs=0x28f0;eip=0x00301e; 	X(POP(di));	// 94646 pop     di ;~ 28F0:301E
cs=0x28f0;eip=0x00301f; 	T(MOV(sp, bp));	// 94647 mov     sp, bp ;~ 28F0:301F
cs=0x28f0;eip=0x003021; 	X(POP(bp));	// 94648 pop     bp ;~ 28F0:3021
cs=0x28f0;eip=0x003022; 	R(RETN(8));	// 94649 retn    8 ;~ 28F0:3022
sub_3a505:
	// 94657 
#undef var_16
#define var_16 -0x16
	// 94659 var_16          = dword ptr -16h ;~ 28F0:3025
#undef var_12
#define var_12 -0x12
	// 94660 var_12          = dword ptr -12h ;~ 28F0:3025
#undef var_c
#define var_c -0x0C
	// 94661 var_C           = word ptr -0Ch ;~ 28F0:3025
#undef var_a
#define var_a -0x0A
	// 94662 var_A           = word ptr -0Ah ;~ 28F0:3025
#undef var_8
#define var_8 -8
	// 94663 var_8           = word ptr -8 ;~ 28F0:3025
#undef var_6
#define var_6 -6
	// 94664 var_6           = word ptr -6 ;~ 28F0:3025
#undef var_4
#define var_4 -4
	// 94665 var_4           = word ptr -4 ;~ 28F0:3025
#undef var_2
#define var_2 -2
	// 94666 var_2           = word ptr -2 ;~ 28F0:3025
#undef arg_0
#define arg_0 4
	// 94667 arg_0           = dword ptr  4 ;~ 28F0:3025
#undef arg_4
#define arg_4 8
	// 94668 arg_4           = dword ptr  8 ;~ 28F0:3025
cs=0x28f0;eip=0x003025; 	X(PUSH(bp));	// 94670 push    bp ;~ 28F0:3025
cs=0x28f0;eip=0x003026; 	T(MOV(bp, sp));	// 94671 mov     bp, sp ;~ 28F0:3026
cs=0x28f0;eip=0x003028; 	T(SUB(sp, 0x16));	// 94672 sub     sp, 16h ;~ 28F0:3028
cs=0x28f0;eip=0x00302b; 	X(PUSH(di));	// 94673 push    di ;~ 28F0:302B
cs=0x28f0;eip=0x00302c; 	X(PUSH(si));	// 94674 push    si ;~ 28F0:302C
cs=0x28f0;eip=0x00302d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 94675 les     bx, [bp+arg_4] ;~ 28F0:302D
cs=0x28f0;eip=0x003030; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 94676 mov     ax, es:[bx+120h] ;~ 28F0:3030
cs=0x28f0;eip=0x003035; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 94677 mov     dx, es:[bx+122h] ;~ 28F0:3035
cs=0x28f0;eip=0x00303a; 	T(MOV(cl, 8));	// 94678 mov     cl, 8 ;~ 28F0:303A
cs=0x28f0;eip=0x00303c; 	R(CALLF(sub_10240,0));	// 94679 call    sub_10240 ;~ 28F0:303C
cs=0x28f0;eip=0x003041; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 94680 mov     [bp+var_C], ax ;~ 28F0:3041
cs=0x28f0;eip=0x003044; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94681 les     bx, [bp+arg_0] ;~ 28F0:3044
cs=0x28f0;eip=0x003047; 	T(MOV(al, 6));	// 94682 mov     al, 6 ;~ 28F0:3047
cs=0x28f0;eip=0x003049; 	X(IMUL1_1(*(raddr(es,bx+3))));	// 94683 imul    byte ptr es:[bx+3] ;~ 28F0:3049
cs=0x28f0;eip=0x00304d; 	T(MOV(si, ax));	// 94684 mov     si, ax ;~ 28F0:304D
cs=0x28f0;eip=0x00304f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 94685 mov     ax, [bp+var_C] ;~ 28F0:304F
cs=0x28f0;eip=0x003052; 	T(CMP(*(dw*)(raddr(es,bx+si+4)), ax));	// 94686 cmp     es:[bx+si+4], ax ;~ 28F0:3052
cs=0x28f0;eip=0x003056; 	R(JGE(loc_3a53e));	// 94687 jge     short loc_3A53E ;~ 28F0:3056
loc_3a538:
	// 10514 
cs=0x28f0;eip=0x003058; 	T(MOV(ax, 3));	// 94690 mov     ax, 3 ;~ 28F0:3058
cs=0x28f0;eip=0x00305b; 	R(JMP(loc_3a61c));	// 94691 jmp     loc_3A61C ;~ 28F0:305B
loc_3a53e:
	// 10515 
cs=0x28f0;eip=0x00305e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94695 les     bx, [bp+arg_0] ;~ 28F0:305E
cs=0x28f0;eip=0x003061; 	T(MOV(al, *(raddr(es,bx+3))));	// 94696 mov     al, es:[bx+3] ;~ 28F0:3061
cs=0x28f0;eip=0x003065; 	T(CBW);	// 94697 cbw ;~ 28F0:3065
cs=0x28f0;eip=0x003066; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 94698 mov     [bp+var_4], ax ;~ 28F0:3066
cs=0x28f0;eip=0x003069; 	T(MOV(al, *(raddr(es,bx+1))));	// 94699 mov     al, es:[bx+1] ;~ 28F0:3069
cs=0x28f0;eip=0x00306d; 	T(CBW);	// 94700 cbw ;~ 28F0:306D
cs=0x28f0;eip=0x00306e; 	T(DEC(ax));	// 94701 dec     ax ;~ 28F0:306E
cs=0x28f0;eip=0x00306f; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4))));	// 94702 cmp     ax, [bp+var_4] ;~ 28F0:306F
cs=0x28f0;eip=0x003072; 	R(JZ(loc_3a588));	// 94703 jz      short loc_3A588 ;~ 28F0:3072
cs=0x28f0;eip=0x003074; 	T(MOV(al, *(raddr(es,bx+1))));	// 94704 mov     al, es:[bx+1] ;~ 28F0:3074
cs=0x28f0;eip=0x003078; 	T(CBW);	// 94705 cbw ;~ 28F0:3078
cs=0x28f0;eip=0x003079; 	T(MOV(si, ax));	// 94706 mov     si, ax ;~ 28F0:3079
cs=0x28f0;eip=0x00307b; 	T(DEC(si));	// 94707 dec     si ;~ 28F0:307B
cs=0x28f0;eip=0x00307c; 	T(MOV(ax, 6));	// 94708 mov     ax, 6 ;~ 28F0:307C
cs=0x28f0;eip=0x00307f; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_4))));	// 94709 imul    [bp+var_4] ;~ 28F0:307F
cs=0x28f0;eip=0x003082; 	T(ADD(ax, bx));	// 94710 add     ax, bx ;~ 28F0:3082
cs=0x28f0;eip=0x003084; 	T(MOV(dx, es));	// 94711 mov     dx, es ;~ 28F0:3084
cs=0x28f0;eip=0x003086; 	T(ADD(ax, 4));	// 94712 add     ax, 4 ;~ 28F0:3086
cs=0x28f0;eip=0x003089; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_12))), ax));	// 94713 mov     word ptr [bp+var_12], ax ;~ 28F0:3089
cs=0x28f0;eip=0x00308c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_12+2))), dx));	// 94714 mov     word ptr [bp+var_12+2], dx ;~ 28F0:308C
cs=0x28f0;eip=0x00308f; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_4))));	// 94715 mov     cx, [bp+var_4] ;~ 28F0:308F
cs=0x28f0;eip=0x003092; 	T(LES(di, *(dd*)(raddr(ss,bp+var_12))));	// 94716 les     di, [bp+var_12] ;~ 28F0:3092
loc_3a575:
	// 10516 
cs=0x28f0;eip=0x003095; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 94719 mov     ax, [bp+var_C] ;~ 28F0:3095
cs=0x28f0;eip=0x003098; 	T(CMP(*(dw*)(raddr(es,di)), ax));	// 94720 cmp     es:[di], ax ;~ 28F0:3098
cs=0x28f0;eip=0x00309b; 	R(JLE(loc_3a585));	// 94721 jle     short loc_3A585 ;~ 28F0:309B
cs=0x28f0;eip=0x00309d; 	T(ADD(di, 6));	// 94722 add     di, 6 ;~ 28F0:309D
cs=0x28f0;eip=0x0030a0; 	T(INC(cx));	// 94723 inc     cx ;~ 28F0:30A0
cs=0x28f0;eip=0x0030a1; 	T(CMP(cx, si));	// 94724 cmp     cx, si ;~ 28F0:30A1
cs=0x28f0;eip=0x0030a3; 	R(JNZ(loc_3a575));	// 94725 jnz     short loc_3A575 ;~ 28F0:30A3
loc_3a585:
	// 10517 
cs=0x28f0;eip=0x0030a5; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), cx));	// 94728 mov     [bp+var_4], cx ;~ 28F0:30A5
loc_3a588:
	// 10518 
cs=0x28f0;eip=0x0030a8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 94731 mov     ax, [bp+var_4] ;~ 28F0:30A8
cs=0x28f0;eip=0x0030ab; 	T(DEC(ax));	// 94732 dec     ax ;~ 28F0:30AB
cs=0x28f0;eip=0x0030ac; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 94733 mov     [bp+var_6], ax ;~ 28F0:30AC
cs=0x28f0;eip=0x0030af; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 94734 les     bx, [bp+arg_4] ;~ 28F0:30AF
cs=0x28f0;eip=0x0030b2; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 94735 les     bx, es:[bx+31Ch] ;~ 28F0:30B2
cs=0x28f0;eip=0x0030b7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 94736 mov     ax, es:[bx+0Ah] ;~ 28F0:30B7
cs=0x28f0;eip=0x0030bb; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 94737 mov     dx, es:[bx+0Ch] ;~ 28F0:30BB
cs=0x28f0;eip=0x0030bf; 	T(MOV(cl, 8));	// 94738 mov     cl, 8 ;~ 28F0:30BF
cs=0x28f0;eip=0x0030c1; 	R(CALLF(sub_10240,0));	// 94739 call    sub_10240 ;~ 28F0:30C1
cs=0x28f0;eip=0x0030c6; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 94740 mov     [bp+var_A], ax ;~ 28F0:30C6
cs=0x28f0;eip=0x0030c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 94741 mov     [bp+var_8], dx ;~ 28F0:30C9
cs=0x28f0;eip=0x0030cc; 	T(MOV(ax, 6));	// 94742 mov     ax, 6 ;~ 28F0:30CC
cs=0x28f0;eip=0x0030cf; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_6))));	// 94743 imul    [bp+var_6] ;~ 28F0:30CF
cs=0x28f0;eip=0x0030d2; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94744 add     ax, word ptr [bp+arg_0] ;~ 28F0:30D2
cs=0x28f0;eip=0x0030d5; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94745 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:30D5
cs=0x28f0;eip=0x0030d8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_12))), ax));	// 94746 mov     word ptr [bp+var_12], ax ;~ 28F0:30D8
cs=0x28f0;eip=0x0030db; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_12+2))), dx));	// 94747 mov     word ptr [bp+var_12+2], dx ;~ 28F0:30DB
cs=0x28f0;eip=0x0030de; 	T(MOV(ax, 6));	// 94748 mov     ax, 6 ;~ 28F0:30DE
cs=0x28f0;eip=0x0030e1; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_4))));	// 94749 imul    [bp+var_4] ;~ 28F0:30E1
cs=0x28f0;eip=0x0030e4; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94750 add     ax, word ptr [bp+arg_0] ;~ 28F0:30E4
cs=0x28f0;eip=0x0030e7; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94751 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:30E7
cs=0x28f0;eip=0x0030ea; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_16))), ax));	// 94752 mov     word ptr [bp+var_16], ax ;~ 28F0:30EA
cs=0x28f0;eip=0x0030ed; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_16+2))), dx));	// 94753 mov     word ptr [bp+var_16+2], dx ;~ 28F0:30ED
cs=0x28f0;eip=0x0030f0; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_16))));	// 94754 les     bx, [bp+var_16] ;~ 28F0:30F0
cs=0x28f0;eip=0x0030f3; 	X(PUSH(*(dw*)(raddr(es,bx+4))));	// 94755 push    word ptr es:[bx+4] ;~ 28F0:30F3
cs=0x28f0;eip=0x0030f7; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 94756 mov     ax, es:[bx+6] ;~ 28F0:30F7
cs=0x28f0;eip=0x0030fb; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 94757 mov     dx, es:[bx+8] ;~ 28F0:30FB
cs=0x28f0;eip=0x0030ff; 	T(MOV(cl, 3));	// 94758 mov     cl, 3 ;~ 28F0:30FF
cs=0x28f0;eip=0x003101; 	R(CALLF(sub_10240,0));	// 94759 call    sub_10240 ;~ 28F0:3101
cs=0x28f0;eip=0x003106; 	X(PUSH(ax));	// 94760 push    ax ;~ 28F0:3106
cs=0x28f0;eip=0x003107; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_12))));	// 94761 les     bx, [bp+var_12] ;~ 28F0:3107
cs=0x28f0;eip=0x00310a; 	X(PUSH(*(dw*)(raddr(es,bx+4))));	// 94762 push    word ptr es:[bx+4] ;~ 28F0:310A
cs=0x28f0;eip=0x00310e; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 94763 mov     ax, es:[bx+6] ;~ 28F0:310E
cs=0x28f0;eip=0x003112; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 94764 mov     dx, es:[bx+8] ;~ 28F0:3112
cs=0x28f0;eip=0x003116; 	T(MOV(cl, 3));	// 94765 mov     cl, 3 ;~ 28F0:3116
cs=0x28f0;eip=0x003118; 	R(CALLF(sub_10240,0));	// 94766 call    sub_10240 ;~ 28F0:3118
cs=0x28f0;eip=0x00311d; 	X(PUSH(ax));	// 94767 push    ax ;~ 28F0:311D
cs=0x28f0;eip=0x00311e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 94768 mov     ax, [bp+var_A] ;~ 28F0:311E
cs=0x28f0;eip=0x003121; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 94769 mov     dx, [bp+var_8] ;~ 28F0:3121
cs=0x28f0;eip=0x003124; 	T(MOV(cl, 3));	// 94770 mov     cl, 3 ;~ 28F0:3124
cs=0x28f0;eip=0x003126; 	R(CALLF(sub_10240,0));	// 94771 call    sub_10240 ;~ 28F0:3126
cs=0x28f0;eip=0x00312b; 	X(PUSH(ax));	// 94772 push    ax ;~ 28F0:312B
cs=0x28f0;eip=0x00312c; 	R(CALL(sub_3a267,0));	// 94773 call    sub_3A267 ;~ 28F0:312C
cs=0x28f0;eip=0x00312f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 94774 mov     [bp+var_2], ax ;~ 28F0:312F
cs=0x28f0;eip=0x003132; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), ax));	// 94775 cmp     [bp+var_C], ax ;~ 28F0:3132
cs=0x28f0;eip=0x003135; 	R(JLE(loc_3a61a));	// 94776 jle     short loc_3A61A ;~ 28F0:3135
cs=0x28f0;eip=0x003137; 	R(JMP(loc_3a538));	// 94777 jmp     loc_3A538 ;~ 28F0:3137
loc_3a61a:
	// 10519 
cs=0x28f0;eip=0x00313a; 	T(SUB(ax, ax));	// 94781 sub     ax, ax ;~ 28F0:313A
loc_3a61c:
	// 10520 
cs=0x28f0;eip=0x00313c; 	X(POP(si));	// 94784 pop     si ;~ 28F0:313C
cs=0x28f0;eip=0x00313d; 	X(POP(di));	// 94785 pop     di ;~ 28F0:313D
cs=0x28f0;eip=0x00313e; 	T(MOV(sp, bp));	// 94786 mov     sp, bp ;~ 28F0:313E
cs=0x28f0;eip=0x003140; 	X(POP(bp));	// 94787 pop     bp ;~ 28F0:3140
cs=0x28f0;eip=0x003141; 	R(RETN(8));	// 94788 retn    8 ;~ 28F0:3141
sub_3a624:
	// 94796 
#undef var_56
#define var_56 -0x56
	// 94799 var_56          = dword ptr -56h ;~ 28F0:3144
#undef var_52
#define var_52 -0x52
	// 94800 var_52          = byte ptr -52h ;~ 28F0:3144
#undef var_2
#define var_2 -2
	// 94801 var_2           = byte ptr -2 ;~ 28F0:3144
#undef arg_0
#define arg_0 4
	// 94802 arg_0           = dword ptr  4 ;~ 28F0:3144
cs=0x28f0;eip=0x003144; 	X(PUSH(bp));	// 94804 push    bp ;~ 28F0:3144
cs=0x28f0;eip=0x003145; 	T(MOV(bp, sp));	// 94805 mov     bp, sp ;~ 28F0:3145
cs=0x28f0;eip=0x003147; 	T(SUB(sp, 0x56));	// 94806 sub     sp, 56h ;~ 28F0:3147
cs=0x28f0;eip=0x00314a; 	X(PUSH(di));	// 94807 push    di ;~ 28F0:314A
cs=0x28f0;eip=0x00314b; 	X(PUSH(si));	// 94808 push    si ;~ 28F0:314B
cs=0x28f0;eip=0x00314c; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94809 mov     bx, word ptr [bp+arg_0] ;~ 28F0:314C
cs=0x28f0;eip=0x00314f; 	T(MOV(cx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94810 mov     cx, word ptr [bp+arg_0+2] ;~ 28F0:314F
cs=0x28f0;eip=0x003152; 	T(ADD(bx, 0x308));	// 94811 add     bx, 308h ;~ 28F0:3152
cs=0x28f0;eip=0x003156; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56))), bx));	// 94812 mov     word ptr [bp+var_56], bx ;~ 28F0:3156
cs=0x28f0;eip=0x003159; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56+2))), cx));	// 94813 mov     word ptr [bp+var_56+2], cx ;~ 28F0:3159
cs=0x28f0;eip=0x00315c; 	T(si = bp+var_52);	// 94814 lea     si, [bp+var_52] ;~ 28F0:315C
cs=0x28f0;eip=0x00315f; 	T(LES(di, *(dd*)(raddr(ss,bp+var_56))));	// 94815 les     di, [bp+var_56] ;~ 28F0:315F
cs=0x28f0;eip=0x003162; 	T(MOV(cx, 0x0FFFF));	// 94816 mov     cx, 0FFFFh ;~ 28F0:3162
cs=0x28f0;eip=0x003165; 	T(XOR(ax, ax));	// 94817 xor     ax, ax ;~ 28F0:3165
	// 94818 repne scasb ;~ 28F0:3167
cs=0x28f0;eip=0x003167; 	T(	REPNE SCASB);	// 94818 repne scasb ;~ 28F0:3167
cs=0x28f0;eip=0x003169; 	T(NOT(cx));	// 94819 not     cx ;~ 28F0:3169
cs=0x28f0;eip=0x00316b; 	T(SUB(di, cx));	// 94820 sub     di, cx ;~ 28F0:316B
cs=0x28f0;eip=0x00316d; 	T(XCHG(di, si));	// 94821 xchg    di, si ;~ 28F0:316D
cs=0x28f0;eip=0x00316f; 	T(MOV(dx, ds));	// 94822 mov     dx, ds ;~ 28F0:316F
cs=0x28f0;eip=0x003171; 	X(PUSH(es));	// 94823 push    es ;~ 28F0:3171
cs=0x28f0;eip=0x003172; 	T(MOV(es, dx));	// 94824 mov     es, dx ;~ 28F0:3172
cs=0x28f0;eip=0x003174; 	X(POP(ds));	// 94826 pop     ds ;~ 28F0:3174
cs=0x28f0;eip=0x003175; 	T(SHR(cx, 1));	// 94827 shr     cx, 1 ;~ 28F0:3175
	// 94828 repne movsw ;~ 28F0:3177
cs=0x28f0;eip=0x003177; 	X(	REPNE MOVSW);	// 94828 repne movsw ;~ 28F0:3177
cs=0x28f0;eip=0x003179; 	T(ADC(cx, cx));	// 94829 adc     cx, cx ;~ 28F0:3179
	// 94830 repne movsb ;~ 28F0:317B
cs=0x28f0;eip=0x00317b; 	X(	REPNE MOVSB);	// 94830 repne movsb ;~ 28F0:317B
cs=0x28f0;eip=0x00317d; 	T(MOV(ds, dx));	// 94831 mov     ds, dx ;~ 28F0:317D
cs=0x28f0;eip=0x00317f; 	T(MOV(di, 0x2B1E));	// 94832 mov     di, 2B1Eh ;~ 28F0:317F
cs=0x28f0;eip=0x003182; 	T(si = bp+var_52);	// 94833 lea     si, [bp+var_52] ;~ 28F0:3182
cs=0x28f0;eip=0x003185; 	T(MOV(ax, ds));	// 94834 mov     ax, ds ;~ 28F0:3185
cs=0x28f0;eip=0x003187; 	T(MOV(cx, 0x0FFFF));	// 94835 mov     cx, 0FFFFh ;~ 28F0:3187
cs=0x28f0;eip=0x00318a; 	T(XOR(ax, ax));	// 94836 xor     ax, ax ;~ 28F0:318A
	// 94837 repne scasb ;~ 28F0:318C
cs=0x28f0;eip=0x00318c; 	T(	REPNE SCASB);	// 94837 repne scasb ;~ 28F0:318C
cs=0x28f0;eip=0x00318e; 	T(NOT(cx));	// 94838 not     cx ;~ 28F0:318E
cs=0x28f0;eip=0x003190; 	T(SUB(di, cx));	// 94839 sub     di, cx ;~ 28F0:3190
cs=0x28f0;eip=0x003192; 	T(MOV(bx, cx));	// 94840 mov     bx, cx ;~ 28F0:3192
cs=0x28f0;eip=0x003194; 	T(XCHG(di, si));	// 94841 xchg    di, si ;~ 28F0:3194
cs=0x28f0;eip=0x003196; 	T(MOV(cx, 0x0FFFF));	// 94842 mov     cx, 0FFFFh ;~ 28F0:3196
	// 94843 repne scasb ;~ 28F0:3199
cs=0x28f0;eip=0x003199; 	T(	REPNE SCASB);	// 94843 repne scasb ;~ 28F0:3199
cs=0x28f0;eip=0x00319b; 	T(DEC(di));	// 94844 dec     di ;~ 28F0:319B
cs=0x28f0;eip=0x00319c; 	T(MOV(cx, bx));	// 94845 mov     cx, bx ;~ 28F0:319C
cs=0x28f0;eip=0x00319e; 	T(SHR(cx, 1));	// 94846 shr     cx, 1 ;~ 28F0:319E
	// 94847 repne movsw ;~ 28F0:31A0
cs=0x28f0;eip=0x0031a0; 	X(	REPNE MOVSW);	// 94847 repne movsw ;~ 28F0:31A0
cs=0x28f0;eip=0x0031a2; 	T(ADC(cx, cx));	// 94848 adc     cx, cx ;~ 28F0:31A2
	// 94849 repne movsb ;~ 28F0:31A4
cs=0x28f0;eip=0x0031a4; 	X(	REPNE MOVSB);	// 94849 repne movsb ;~ 28F0:31A4
cs=0x28f0;eip=0x0031a6; 	T(ax = bp+var_52);	// 94850 lea     ax, [bp+var_52] ;~ 28F0:31A6
cs=0x28f0;eip=0x0031a9; 	X(PUSH(ax));	// 94851 push    ax ;~ 28F0:31A9
cs=0x28f0;eip=0x0031aa; 	T(ax = bp+var_2);	// 94852 lea     ax, [bp+var_2] ;~ 28F0:31AA
cs=0x28f0;eip=0x0031ad; 	X(PUSH(ax));	// 94853 push    ax ;~ 28F0:31AD
cs=0x28f0;eip=0x0031ae; 	R(CALLF(sub_30a14,0));	// 94854 call    sub_30A14 ;~ 28F0:31AE
cs=0x28f0;eip=0x0031b3; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94855 les     bx, [bp+arg_0] ;~ 28F0:31B3
cs=0x28f0;eip=0x0031b6; 	X(MOV(*(dw*)(raddr(es,bx+0x322)), ax));	// 94857 mov     es:[bx+322h], ax ;~ 28F0:31B6
cs=0x28f0;eip=0x0031bb; 	X(MOV(*(dw*)(raddr(es,bx+0x324)), dx));	// 94858 mov     es:[bx+324h], dx ;~ 28F0:31BB
cs=0x28f0;eip=0x0031c0; 	T(OR(dx, ax));	// 94859 or      dx, ax ;~ 28F0:31C0
cs=0x28f0;eip=0x0031c2; 	R(JNZ(loc_3a6be));	// 94860 jnz     short loc_3A6BE ;~ 28F0:31C2
cs=0x28f0;eip=0x0031c4; 	T(ax = bp+var_52);	// 94861 lea     ax, [bp+var_52] ;~ 28F0:31C4
cs=0x28f0;eip=0x0031c7; 	X(PUSH(ax));	// 94862 push    ax ;~ 28F0:31C7
cs=0x28f0;eip=0x0031c8; 	T(ax = bp+var_2);	// 94863 lea     ax, [bp+var_2] ;~ 28F0:31C8
cs=0x28f0;eip=0x0031cb; 	X(PUSH(ax));	// 94864 push    ax ;~ 28F0:31CB
cs=0x28f0;eip=0x0031cc; 	R(CALLF(sub_31643,0));	// 94865 call    sub_31643 ;~ 28F0:31CC
cs=0x28f0;eip=0x0031d1; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94866 les     bx, [bp+arg_0] ;~ 28F0:31D1
cs=0x28f0;eip=0x0031d4; 	X(MOV(*(dw*)(raddr(es,bx+0x322)), ax));	// 94867 mov     es:[bx+322h], ax ;~ 28F0:31D4
cs=0x28f0;eip=0x0031d9; 	X(MOV(*(dw*)(raddr(es,bx+0x324)), dx));	// 94868 mov     es:[bx+324h], dx ;~ 28F0:31D9
loc_3a6be:
	// 10521 
cs=0x28f0;eip=0x0031de; 	X(POP(si));	// 94871 pop     si ;~ 28F0:31DE
cs=0x28f0;eip=0x0031df; 	X(POP(di));	// 94872 pop     di ;~ 28F0:31DF
cs=0x28f0;eip=0x0031e0; 	T(MOV(sp, bp));	// 94873 mov     sp, bp ;~ 28F0:31E0
cs=0x28f0;eip=0x0031e2; 	X(POP(bp));	// 94874 pop     bp ;~ 28F0:31E2
cs=0x28f0;eip=0x0031e3; 	R(RETN(4));	// 94875 retn    4 ;~ 28F0:31E3
sub_3a6c6:
	// 94883 
#undef var_a
#define var_a -0x0A
	// 94886 var_A           = dword ptr -0Ah ;~ 28F0:31E6
#undef var_6
#define var_6 -6
	// 94887 var_6           = word ptr -6 ;~ 28F0:31E6
#undef arg_0
#define arg_0 4
	// 94888 arg_0           = word ptr  4 ;~ 28F0:31E6
#undef arg_2
#define arg_2 6
	// 94889 arg_2           = dword ptr  6 ;~ 28F0:31E6
cs=0x28f0;eip=0x0031e6; 	X(PUSH(bp));	// 94891 push    bp ;~ 28F0:31E6
cs=0x28f0;eip=0x0031e7; 	T(MOV(bp, sp));	// 94892 mov     bp, sp ;~ 28F0:31E7
cs=0x28f0;eip=0x0031e9; 	T(SUB(sp, 0x0A));	// 94893 sub     sp, 0Ah ;~ 28F0:31E9
cs=0x28f0;eip=0x0031ec; 	X(PUSH(di));	// 94894 push    di ;~ 28F0:31EC
cs=0x28f0;eip=0x0031ed; 	X(PUSH(si));	// 94895 push    si ;~ 28F0:31ED
cs=0x28f0;eip=0x0031ee; 	T(SUB(cx, cx));	// 94896 sub     cx, cx ;~ 28F0:31EE
cs=0x28f0;eip=0x0031f0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 94897 les     bx, [bp+arg_2] ;~ 28F0:31F0
cs=0x28f0;eip=0x0031f3; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x322))));	// 94898 mov     ax, es:[bx+322h] ;~ 28F0:31F3
cs=0x28f0;eip=0x0031f8; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x324))));	// 94899 mov     dx, es:[bx+324h] ;~ 28F0:31F8
cs=0x28f0;eip=0x0031fd; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 94900 mov     word ptr [bp+var_A], ax ;~ 28F0:31FD
cs=0x28f0;eip=0x003200; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 94901 mov     word ptr [bp+var_A+2], dx ;~ 28F0:3200
cs=0x28f0;eip=0x003203; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 94902 mov     si, [bp+arg_0] ;~ 28F0:3203
cs=0x28f0;eip=0x003206; 	T(LES(di, *(dd*)(raddr(ss,bp+var_a))));	// 94903 les     di, [bp+var_A] ;~ 28F0:3206
loc_3a6e9:
	// 10522 
cs=0x28f0;eip=0x003209; 	T(MOV(al, *(raddr(es,di))));	// 94906 mov     al, es:[di] ;~ 28F0:3209
cs=0x28f0;eip=0x00320c; 	T(CBW);	// 94907 cbw ;~ 28F0:320C
cs=0x28f0;eip=0x00320d; 	T(CMP(ax, si));	// 94908 cmp     ax, si ;~ 28F0:320D
cs=0x28f0;eip=0x00320f; 	R(JNZ(loc_3a6fe));	// 94909 jnz     short loc_3A6FE ;~ 28F0:320F
loc_3a6f1:
	// 10523 
cs=0x28f0;eip=0x003211; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), cx));	// 94912 mov     [bp+var_6], cx ;~ 28F0:3211
cs=0x28f0;eip=0x003214; 	T(CMP(cx, 0x10));	// 94913 cmp     cx, 10h ;~ 28F0:3214
cs=0x28f0;eip=0x003217; 	R(JNZ(loc_3a709));	// 94914 jnz     short loc_3A709 ;~ 28F0:3217
cs=0x28f0;eip=0x003219; 	T(SUB(ax, ax));	// 94915 sub     ax, ax ;~ 28F0:3219
cs=0x28f0;eip=0x00321b; 	T(CWD);	// 94916 cwd ;~ 28F0:321B
cs=0x28f0;eip=0x00321c; 	R(JMP(loc_3a720));	// 94917 jmp     short loc_3A720 ;~ 28F0:321C
loc_3a6fe:
	// 10524 
cs=0x28f0;eip=0x00321e; 	T(ADD(di, 0x34));	// 94921 add     di, 34h ; '4' ;~ 28F0:321E
cs=0x28f0;eip=0x003221; 	T(INC(cx));	// 94922 inc     cx ;~ 28F0:3221
cs=0x28f0;eip=0x003222; 	T(CMP(cx, 0x10));	// 94923 cmp     cx, 10h ;~ 28F0:3222
cs=0x28f0;eip=0x003225; 	R(JGE(loc_3a6f1));	// 94924 jge     short loc_3A6F1 ;~ 28F0:3225
cs=0x28f0;eip=0x003227; 	R(JMP(loc_3a6e9));	// 94925 jmp     short loc_3A6E9 ;~ 28F0:3227
loc_3a709:
	// 10525 
cs=0x28f0;eip=0x003229; 	T(MOV(ax, 0x34));	// 94929 mov     ax, 34h ; '4' ;~ 28F0:3229
cs=0x28f0;eip=0x00322c; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_6))));	// 94930 imul    [bp+var_6] ;~ 28F0:322C
cs=0x28f0;eip=0x00322f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 94931 les     bx, [bp+arg_2] ;~ 28F0:322F
cs=0x28f0;eip=0x003232; 	T(MOV(cx, ax));	// 94932 mov     cx, ax ;~ 28F0:3232
cs=0x28f0;eip=0x003234; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x322))));	// 94933 mov     ax, es:[bx+322h] ;~ 28F0:3234
cs=0x28f0;eip=0x003239; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x324))));	// 94934 mov     dx, es:[bx+324h] ;~ 28F0:3239
cs=0x28f0;eip=0x00323e; 	T(ADD(ax, cx));	// 94935 add     ax, cx ;~ 28F0:323E
loc_3a720:
	// 10526 
cs=0x28f0;eip=0x003240; 	X(POP(si));	// 94938 pop     si ;~ 28F0:3240
cs=0x28f0;eip=0x003241; 	X(POP(di));	// 94939 pop     di ;~ 28F0:3241
cs=0x28f0;eip=0x003242; 	T(MOV(sp, bp));	// 94940 mov     sp, bp ;~ 28F0:3242
cs=0x28f0;eip=0x003244; 	X(POP(bp));	// 94941 pop     bp ;~ 28F0:3244
cs=0x28f0;eip=0x003245; 	R(RETN(6));	// 94942 retn    6 ;~ 28F0:3245
sub_3a728:
	// 94950 
#undef var_4
#define var_4 -4
	// 94952 var_4           = dword ptr -4 ;~ 28F0:3248
#undef arg_0
#define arg_0 4
	// 94953 arg_0           = dword ptr  4 ;~ 28F0:3248
cs=0x28f0;eip=0x003248; 	X(PUSH(bp));	// 94955 push    bp ;~ 28F0:3248
cs=0x28f0;eip=0x003249; 	T(MOV(bp, sp));	// 94956 mov     bp, sp ;~ 28F0:3249
cs=0x28f0;eip=0x00324b; 	T(SUB(sp, 4));	// 94957 sub     sp, 4 ;~ 28F0:324B
cs=0x28f0;eip=0x00324e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94958 push    word ptr [bp+arg_0+2] ;~ 28F0:324E
cs=0x28f0;eip=0x003251; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94959 push    word ptr [bp+arg_0] ;~ 28F0:3251
cs=0x28f0;eip=0x003254; 	T(MOV(ax, 1));	// 94960 mov     ax, 1 ;~ 28F0:3254
cs=0x28f0;eip=0x003257; 	X(PUSH(ax));	// 94961 push    ax ;~ 28F0:3257
cs=0x28f0;eip=0x003258; 	R(CALL(sub_3a6c6,0));	// 94962 call    sub_3A6C6 ;~ 28F0:3258
cs=0x28f0;eip=0x00325b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 94963 mov     word ptr [bp+var_4], ax ;~ 28F0:325B
cs=0x28f0;eip=0x00325e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 94964 mov     word ptr [bp+var_4+2], dx ;~ 28F0:325E
cs=0x28f0;eip=0x003261; 	T(OR(ax, dx));	// 94965 or      ax, dx ;~ 28F0:3261
cs=0x28f0;eip=0x003263; 	R(JNZ(loc_3a75b));	// 94966 jnz     short loc_3A75B ;~ 28F0:3263
cs=0x28f0;eip=0x003265; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94967 les     bx, [bp+arg_0] ;~ 28F0:3265
cs=0x28f0;eip=0x003268; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 94968 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:3268
cs=0x28f0;eip=0x00326e; 	R(JNZ(loc_3a756));	// 94969 jnz     short loc_3A756 ;~ 28F0:326E
cs=0x28f0;eip=0x003270; 	T(SUB(ax, ax));	// 94970 sub     ax, ax ;~ 28F0:3270
loc_3a752:
	// 10527 
cs=0x28f0;eip=0x003272; 	T(SUB(dx, dx));	// 94973 sub     dx, dx ;~ 28F0:3272
cs=0x28f0;eip=0x003274; 	R(JMP(loc_3a763));	// 94974 jmp     short loc_3A763 ;~ 28F0:3274
loc_3a756:
	// 10528 
cs=0x28f0;eip=0x003276; 	T(MOV(ax, 0x0A0));	// 94978 mov     ax, 0A0h ; ' ' ;~ 28F0:3276
cs=0x28f0;eip=0x003279; 	R(JMP(loc_3a752));	// 94979 jmp     short loc_3A752 ;~ 28F0:3279
loc_3a75b:
	// 10529 
cs=0x28f0;eip=0x00327b; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 94983 les     bx, [bp+var_4] ;~ 28F0:327B
cs=0x28f0;eip=0x00327e; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 94984 mov     ax, es:[bx+4] ;~ 28F0:327E
cs=0x28f0;eip=0x003282; 	T(CWD);	// 94985 cwd ;~ 28F0:3282
loc_3a763:
	// 10530 
cs=0x28f0;eip=0x003283; 	T(MOV(sp, bp));	// 94988 mov     sp, bp ;~ 28F0:3283
cs=0x28f0;eip=0x003285; 	X(POP(bp));	// 94989 pop     bp ;~ 28F0:3285
cs=0x28f0;eip=0x003286; 	R(RETN(4));	// 94990 retn    4 ;~ 28F0:3286
sub_3a769:
	// 94998 
#undef var_8
#define var_8 -8
	// 95001 var_8           = dword ptr -8 ;~ 28F0:3289
#undef arg_0
#define arg_0 4
	// 95002 arg_0           = dword ptr  4 ;~ 28F0:3289
cs=0x28f0;eip=0x003289; 	X(PUSH(bp));	// 95004 push    bp ;~ 28F0:3289
cs=0x28f0;eip=0x00328a; 	T(MOV(bp, sp));	// 95005 mov     bp, sp ;~ 28F0:328A
cs=0x28f0;eip=0x00328c; 	T(SUB(sp, 8));	// 95006 sub     sp, 8 ;~ 28F0:328C
cs=0x28f0;eip=0x00328f; 	X(PUSH(si));	// 95007 push    si ;~ 28F0:328F
cs=0x28f0;eip=0x003290; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95008 push    word ptr [bp+arg_0+2] ;~ 28F0:3290
cs=0x28f0;eip=0x003293; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95009 push    word ptr [bp+arg_0] ;~ 28F0:3293
cs=0x28f0;eip=0x003296; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95010 les     bx, [bp+arg_0] ;~ 28F0:3296
cs=0x28f0;eip=0x003299; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2BC))));	// 95011 mov     ax, es:[bx+2BCh] ;~ 28F0:3299
cs=0x28f0;eip=0x00329e; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2BE))));	// 95012 mov     dx, es:[bx+2BEh] ;~ 28F0:329E
cs=0x28f0;eip=0x0032a3; 	T(MOV(cl, 8));	// 95013 mov     cl, 8 ;~ 28F0:32A3
cs=0x28f0;eip=0x0032a5; 	R(CALLF(sub_10240,0));	// 95014 call    sub_10240 ;~ 28F0:32A5
cs=0x28f0;eip=0x0032aa; 	T(INC(ax));	// 95015 inc     ax ;~ 28F0:32AA
cs=0x28f0;eip=0x0032ab; 	X(PUSH(ax));	// 95016 push    ax ;~ 28F0:32AB
cs=0x28f0;eip=0x0032ac; 	R(CALL(sub_3a6c6,0));	// 95017 call    sub_3A6C6 ;~ 28F0:32AC
cs=0x28f0;eip=0x0032af; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 95018 mov     word ptr [bp+var_8], ax ;~ 28F0:32AF
cs=0x28f0;eip=0x0032b2; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 95019 mov     word ptr [bp+var_8+2], dx ;~ 28F0:32B2
cs=0x28f0;eip=0x0032b5; 	T(OR(dx, ax));	// 95020 or      dx, ax ;~ 28F0:32B5
cs=0x28f0;eip=0x0032b7; 	R(JNZ(loc_3a79e));	// 95021 jnz     short loc_3A79E ;~ 28F0:32B7
loc_3a799:
	// 10531 
cs=0x28f0;eip=0x0032b9; 	T(SUB(ax, ax));	// 95024 sub     ax, ax ;~ 28F0:32B9
cs=0x28f0;eip=0x0032bb; 	R(JMP(loc_3a846));	// 95025 jmp     loc_3A846 ;~ 28F0:32BB
loc_3a79e:
	// 10532 
cs=0x28f0;eip=0x0032be; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95029 les     bx, [bp+arg_0] ;~ 28F0:32BE
cs=0x28f0;eip=0x0032c1; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 95030 mov     ax, es:[bx+120h] ;~ 28F0:32C1
cs=0x28f0;eip=0x0032c6; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 95031 mov     dx, es:[bx+122h] ;~ 28F0:32C6
cs=0x28f0;eip=0x0032cb; 	T(MOV(cl, 8));	// 95032 mov     cl, 8 ;~ 28F0:32CB
cs=0x28f0;eip=0x0032cd; 	R(CALLF(sub_10240,0));	// 95033 call    sub_10240 ;~ 28F0:32CD
cs=0x28f0;eip=0x0032d2; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 95034 les     bx, [bp+var_8] ;~ 28F0:32D2
cs=0x28f0;eip=0x0032d5; 	T(MOV(cx, ax));	// 95035 mov     cx, ax ;~ 28F0:32D5
cs=0x28f0;eip=0x0032d7; 	T(MOV(al, 6));	// 95036 mov     al, 6 ;~ 28F0:32D7
cs=0x28f0;eip=0x0032d9; 	X(IMUL1_1(*(raddr(es,bx+2))));	// 95037 imul    byte ptr es:[bx+2] ;~ 28F0:32D9
cs=0x28f0;eip=0x0032dd; 	T(MOV(si, ax));	// 95038 mov     si, ax ;~ 28F0:32DD
cs=0x28f0;eip=0x0032df; 	T(CMP(*(dw*)(raddr(es,bx+si+4)), cx));	// 95039 cmp     es:[bx+si+4], cx ;~ 28F0:32DF
cs=0x28f0;eip=0x0032e3; 	R(JLE(loc_3a7d2));	// 95040 jle     short loc_3A7D2 ;~ 28F0:32E3
cs=0x28f0;eip=0x0032e5; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95041 push    word ptr [bp+arg_0+2] ;~ 28F0:32E5
cs=0x28f0;eip=0x0032e8; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95042 push    word ptr [bp+arg_0] ;~ 28F0:32E8
cs=0x28f0;eip=0x0032eb; 	X(PUSH(es));	// 95043 push    es ;~ 28F0:32EB
cs=0x28f0;eip=0x0032ec; 	X(PUSH(bx));	// 95044 push    bx ;~ 28F0:32EC
cs=0x28f0;eip=0x0032ed; 	R(CALL(sub_3a2a0,0));	// 95045 call    sub_3A2A0 ;~ 28F0:32ED
cs=0x28f0;eip=0x0032f0; 	R(JMP(loc_3a846));	// 95046 jmp     short loc_3A846 ;~ 28F0:32F0
loc_3a7d2:
	// 10533 
cs=0x28f0;eip=0x0032f2; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95050 les     bx, [bp+arg_0] ;~ 28F0:32F2
cs=0x28f0;eip=0x0032f5; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 95051 les     bx, es:[bx+31Ch] ;~ 28F0:32F5
cs=0x28f0;eip=0x0032fa; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 95052 mov     ax, es:[bx+0Ah] ;~ 28F0:32FA
cs=0x28f0;eip=0x0032fe; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 95053 mov     dx, es:[bx+0Ch] ;~ 28F0:32FE
cs=0x28f0;eip=0x003302; 	T(MOV(cl, 8));	// 95054 mov     cl, 8 ;~ 28F0:3302
cs=0x28f0;eip=0x003304; 	R(CALLF(sub_10240,0));	// 95055 call    sub_10240 ;~ 28F0:3304
cs=0x28f0;eip=0x003309; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 95056 les     bx, [bp+var_8] ;~ 28F0:3309
cs=0x28f0;eip=0x00330c; 	T(MOV(cx, ax));	// 95057 mov     cx, ax ;~ 28F0:330C
cs=0x28f0;eip=0x00330e; 	T(MOV(al, 6));	// 95058 mov     al, 6 ;~ 28F0:330E
cs=0x28f0;eip=0x003310; 	X(IMUL1_1(*(raddr(es,bx+3))));	// 95059 imul    byte ptr es:[bx+3] ;~ 28F0:3310
cs=0x28f0;eip=0x003314; 	T(MOV(si, ax));	// 95060 mov     si, ax ;~ 28F0:3314
cs=0x28f0;eip=0x003316; 	T(CMP(*(dw*)(raddr(es,bx+si+8)), dx));	// 95061 cmp     es:[bx+si+8], dx ;~ 28F0:3316
cs=0x28f0;eip=0x00331a; 	R(JG(loc_3a811));	// 95062 jg      short loc_3A811 ;~ 28F0:331A
cs=0x28f0;eip=0x00331c; 	R(JL(loc_3a804));	// 95063 jl      short loc_3A804 ;~ 28F0:331C
cs=0x28f0;eip=0x00331e; 	T(CMP(*(dw*)(raddr(es,bx+si+6)), cx));	// 95064 cmp     es:[bx+si+6], cx ;~ 28F0:331E
cs=0x28f0;eip=0x003322; 	R(JA(loc_3a811));	// 95065 ja      short loc_3A811 ;~ 28F0:3322
loc_3a804:
	// 10534 
cs=0x28f0;eip=0x003324; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95068 push    word ptr [bp+arg_0+2] ;~ 28F0:3324
cs=0x28f0;eip=0x003327; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95069 push    word ptr [bp+arg_0] ;~ 28F0:3327
cs=0x28f0;eip=0x00332a; 	X(PUSH(es));	// 95070 push    es ;~ 28F0:332A
cs=0x28f0;eip=0x00332b; 	X(PUSH(bx));	// 95071 push    bx ;~ 28F0:332B
cs=0x28f0;eip=0x00332c; 	R(CALL(sub_3a3c4,0));	// 95072 call    sub_3A3C4 ;~ 28F0:332C
cs=0x28f0;eip=0x00332f; 	R(JMP(loc_3a846));	// 95073 jmp     short loc_3A846 ;~ 28F0:332F
loc_3a811:
	// 10535 
cs=0x28f0;eip=0x003331; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95078 les     bx, [bp+arg_0] ;~ 28F0:3331
cs=0x28f0;eip=0x003334; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 95079 mov     ax, es:[bx+120h] ;~ 28F0:3334
cs=0x28f0;eip=0x003339; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 95080 mov     dx, es:[bx+122h] ;~ 28F0:3339
cs=0x28f0;eip=0x00333e; 	T(MOV(cl, 8));	// 95081 mov     cl, 8 ;~ 28F0:333E
cs=0x28f0;eip=0x003340; 	R(CALLF(sub_10240,0));	// 95082 call    sub_10240 ;~ 28F0:3340
cs=0x28f0;eip=0x003345; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 95083 les     bx, [bp+var_8] ;~ 28F0:3345
cs=0x28f0;eip=0x003348; 	T(MOV(cx, ax));	// 95084 mov     cx, ax ;~ 28F0:3348
cs=0x28f0;eip=0x00334a; 	T(MOV(al, 6));	// 95085 mov     al, 6 ;~ 28F0:334A
cs=0x28f0;eip=0x00334c; 	X(IMUL1_1(*(raddr(es,bx+1))));	// 95086 imul    byte ptr es:[bx+1] ;~ 28F0:334C
cs=0x28f0;eip=0x003350; 	T(MOV(si, ax));	// 95087 mov     si, ax ;~ 28F0:3350
cs=0x28f0;eip=0x003352; 	T(CMP(*(dw*)(raddr(es,bx+si-2)), cx));	// 95088 cmp     es:[bx+si-2], cx ;~ 28F0:3352
cs=0x28f0;eip=0x003356; 	R(JL(loc_3a83b));	// 95089 jl      short loc_3A83B ;~ 28F0:3356
cs=0x28f0;eip=0x003358; 	R(JMP(loc_3a799));	// 95090 jmp     loc_3A799 ;~ 28F0:3358
loc_3a83b:
	// 10536 
cs=0x28f0;eip=0x00335b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95094 push    word ptr [bp+arg_0+2] ;~ 28F0:335B
cs=0x28f0;eip=0x00335e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95095 push    word ptr [bp+arg_0] ;~ 28F0:335E
cs=0x28f0;eip=0x003361; 	X(PUSH(es));	// 95096 push    es ;~ 28F0:3361
cs=0x28f0;eip=0x003362; 	X(PUSH(bx));	// 95097 push    bx ;~ 28F0:3362
cs=0x28f0;eip=0x003363; 	R(CALL(sub_3a505,0));	// 95098 call    sub_3A505 ;~ 28F0:3363
loc_3a846:
	// 10537 
cs=0x28f0;eip=0x003366; 	X(POP(si));	// 95102 pop     si ;~ 28F0:3366
cs=0x28f0;eip=0x003367; 	T(MOV(sp, bp));	// 95103 mov     sp, bp ;~ 28F0:3367
cs=0x28f0;eip=0x003369; 	X(POP(bp));	// 95104 pop     bp ;~ 28F0:3369
cs=0x28f0;eip=0x00336a; 	R(RETN(4));	// 95105 retn    4 ;~ 28F0:336A
sub_3a84e:
	// 95115 
#undef var_12
#define var_12 -0x12
	// 95118 var_12          = word ptr -12h ;~ 28F0:336E
#undef var_10
#define var_10 -0x10
	// 95119 var_10          = dword ptr -10h ;~ 28F0:336E
#undef var_c
#define var_c -0x0C
	// 95120 var_C           = word ptr -0Ch ;~ 28F0:336E
#undef var_8
#define var_8 -8
	// 95121 var_8           = word ptr -8 ;~ 28F0:336E
#undef var_6
#define var_6 -6
	// 95122 var_6           = word ptr -6 ;~ 28F0:336E
#undef var_4
#define var_4 -4
	// 95123 var_4           = word ptr -4 ;~ 28F0:336E
#undef var_2
#define var_2 -2
	// 95124 var_2           = word ptr -2 ;~ 28F0:336E
#undef arg_0
#define arg_0 4
	// 95125 arg_0           = dword ptr  4 ;~ 28F0:336E
cs=0x28f0;eip=0x00336e; 	X(PUSH(bp));	// 95127 push    bp ;~ 28F0:336E
cs=0x28f0;eip=0x00336f; 	T(MOV(bp, sp));	// 95128 mov     bp, sp ;~ 28F0:336F
cs=0x28f0;eip=0x003371; 	T(SUB(sp, 0x12));	// 95129 sub     sp, 12h ;~ 28F0:3371
cs=0x28f0;eip=0x003374; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95130 mov     ax, word ptr [bp+arg_0] ;~ 28F0:3374
cs=0x28f0;eip=0x003377; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95131 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:3377
cs=0x28f0;eip=0x00337a; 	T(ADD(ax, 0x0A0));	// 95132 add     ax, 0A0h ; ' ' ;~ 28F0:337A
cs=0x28f0;eip=0x00337d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 95133 mov     word ptr [bp+var_10], ax ;~ 28F0:337D
cs=0x28f0;eip=0x003380; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 95134 mov     word ptr [bp+var_10+2], dx ;~ 28F0:3380
cs=0x28f0;eip=0x003383; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95135 les     bx, [bp+arg_0] ;~ 28F0:3383
cs=0x28f0;eip=0x003386; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), 0));	// 95136 cmp     word ptr es:[bx+122h], 0 ;~ 28F0:3386
cs=0x28f0;eip=0x00338c; 	R(JGE(loc_3a871));	// 95137 jge     short loc_3A871 ;~ 28F0:338C
cs=0x28f0;eip=0x00338e; 	R(JMP(loc_3a9b2));	// 95138 jmp     loc_3A9B2 ;~ 28F0:338E
loc_3a871:
	// 10538 
cs=0x28f0;eip=0x003391; 	R(JG(loc_3a87e));	// 95142 jg      short loc_3A87E ;~ 28F0:3391
cs=0x28f0;eip=0x003393; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), 0));	// 95143 cmp     word ptr es:[bx+120h], 0 ;~ 28F0:3393
cs=0x28f0;eip=0x003399; 	R(JNZ(loc_3a87e));	// 95144 jnz     short loc_3A87E ;~ 28F0:3399
cs=0x28f0;eip=0x00339b; 	R(JMP(loc_3a9b2));	// 95145 jmp     loc_3A9B2 ;~ 28F0:339B
loc_3a87e:
	// 10539 
cs=0x28f0;eip=0x00339e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 95150 les     bx, [bp+var_10] ;~ 28F0:339E
cs=0x28f0;eip=0x0033a1; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 95151 mov     ax, es:[bx+8] ;~ 28F0:33A1
cs=0x28f0;eip=0x0033a5; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 95152 mov     dx, es:[bx+0Ah] ;~ 28F0:33A5
cs=0x28f0;eip=0x0033a9; 	T(SAR(dx, 1));	// 95153 sar     dx, 1 ;~ 28F0:33A9
cs=0x28f0;eip=0x0033ab; 	T(RCR(ax, 1));	// 95154 rcr     ax, 1 ;~ 28F0:33AB
cs=0x28f0;eip=0x0033ad; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 95155 mov     [bp+var_4], ax ;~ 28F0:33AD
cs=0x28f0;eip=0x0033b0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 95156 mov     [bp+var_2], dx ;~ 28F0:33B0
cs=0x28f0;eip=0x0033b3; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95157 les     bx, [bp+arg_0] ;~ 28F0:33B3
cs=0x28f0;eip=0x0033b6; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C0))));	// 95158 mov     ax, es:[bx+0C0h] ;~ 28F0:33B6
cs=0x28f0;eip=0x0033bb; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C2))));	// 95159 mov     dx, es:[bx+0C2h] ;~ 28F0:33BB
cs=0x28f0;eip=0x0033c0; 	T(MOV(cl, 5));	// 95160 mov     cl, 5 ;~ 28F0:33C0
cs=0x28f0;eip=0x0033c2; 	R(CALLF(sub_10240,0));	// 95161 call    sub_10240 ;~ 28F0:33C2
cs=0x28f0;eip=0x0033c7; 	X(PUSH(ax));	// 95162 push    ax ;~ 28F0:33C7
cs=0x28f0;eip=0x0033c8; 	R(CALLF(sub_24cf8,0));	// 95163 call    sub_24CF8 ;~ 28F0:33C8
cs=0x28f0;eip=0x0033cd; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 95164 mov     [bp+var_12], ax ;~ 28F0:33CD
cs=0x28f0;eip=0x0033d0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95165 les     bx, [bp+arg_0] ;~ 28F0:33D0
cs=0x28f0;eip=0x0033d3; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 95166 mov     ax, es:[bx+0E0h] ;~ 28F0:33D3
cs=0x28f0;eip=0x0033d8; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 95167 mov     dx, es:[bx+0E2h] ;~ 28F0:33D8
cs=0x28f0;eip=0x0033dd; 	T(MOV(cl, 5));	// 95168 mov     cl, 5 ;~ 28F0:33DD
cs=0x28f0;eip=0x0033df; 	R(CALLF(sub_10240,0));	// 95169 call    sub_10240 ;~ 28F0:33DF
cs=0x28f0;eip=0x0033e4; 	X(PUSH(ax));	// 95170 push    ax ;~ 28F0:33E4
cs=0x28f0;eip=0x0033e5; 	R(CALLF(sub_24cf8,0));	// 95171 call    sub_24CF8 ;~ 28F0:33E5
cs=0x28f0;eip=0x0033ea; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 95172 mov     [bp+var_C], ax ;~ 28F0:33EA
cs=0x28f0;eip=0x0033ed; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 95173 push    [bp+var_12] ;~ 28F0:33ED
cs=0x28f0;eip=0x0033f0; 	R(CALLF(sub_27cb4,0));	// 95174 call    sub_27CB4 ;~ 28F0:33F0
cs=0x28f0;eip=0x0033f5; 	X(PUSH(dx));	// 95175 push    dx ;~ 28F0:33F5
cs=0x28f0;eip=0x0033f6; 	X(PUSH(ax));	// 95176 push    ax ;~ 28F0:33F6
cs=0x28f0;eip=0x0033f7; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95177 les     bx, [bp+arg_0] ;~ 28F0:33F7
cs=0x28f0;eip=0x0033fa; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 95178 mov     ax, es:[bx+120h] ;~ 28F0:33FA
cs=0x28f0;eip=0x0033ff; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 95179 mov     dx, es:[bx+122h] ;~ 28F0:33FF
cs=0x28f0;eip=0x003404; 	T(MOV(cl, 8));	// 95180 mov     cl, 8 ;~ 28F0:3404
cs=0x28f0;eip=0x003406; 	R(CALLF(sub_10240,0));	// 95181 call    sub_10240 ;~ 28F0:3406
cs=0x28f0;eip=0x00340b; 	X(PUSH(dx));	// 95182 push    dx ;~ 28F0:340B
cs=0x28f0;eip=0x00340c; 	X(PUSH(ax));	// 95183 push    ax ;~ 28F0:340C
cs=0x28f0;eip=0x00340d; 	R(CALLF(sub_105c2,0));	// 95184 call    sub_105C2 ;~ 28F0:340D
cs=0x28f0;eip=0x003412; 	T(MOV(cl, 8));	// 95185 mov     cl, 8 ;~ 28F0:3412
cs=0x28f0;eip=0x003414; 	R(CALLF(sub_10240,0));	// 95186 call    sub_10240 ;~ 28F0:3414
cs=0x28f0;eip=0x003419; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 95187 mov     [bp+var_8], ax ;~ 28F0:3419
cs=0x28f0;eip=0x00341c; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 95188 mov     [bp+var_6], dx ;~ 28F0:341C
cs=0x28f0;eip=0x00341f; 	T(OR(ax, dx));	// 95189 or      ax, dx ;~ 28F0:341F
cs=0x28f0;eip=0x003421; 	R(JNZ(loc_3a91a));	// 95190 jnz     short loc_3A91A ;~ 28F0:3421
cs=0x28f0;eip=0x003423; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 95191 push    [bp+var_2] ;~ 28F0:3423
cs=0x28f0;eip=0x003426; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 95192 push    [bp+var_4] ;~ 28F0:3426
cs=0x28f0;eip=0x003429; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 95193 push    [bp+var_12] ;~ 28F0:3429
cs=0x28f0;eip=0x00342c; 	R(CALLF(sub_27c9e,0));	// 95194 call    sub_27C9E ;~ 28F0:342C
cs=0x28f0;eip=0x003431; 	X(PUSH(dx));	// 95195 push    dx ;~ 28F0:3431
cs=0x28f0;eip=0x003432; 	X(PUSH(ax));	// 95196 push    ax ;~ 28F0:3432
cs=0x28f0;eip=0x003433; 	R(CALLF(sub_105c2,0));	// 95197 call    sub_105C2 ;~ 28F0:3433
cs=0x28f0;eip=0x003438; 	R(JMP(loc_3a93c));	// 95198 jmp     short loc_3A93C ;~ 28F0:3438
loc_3a91a:
	// 10540 
cs=0x28f0;eip=0x00343a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 95202 push    [bp+var_6] ;~ 28F0:343A
cs=0x28f0;eip=0x00343d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 95203 push    [bp+var_8] ;~ 28F0:343D
cs=0x28f0;eip=0x003440; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 95204 push    [bp+var_2] ;~ 28F0:3440
cs=0x28f0;eip=0x003443; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 95205 push    [bp+var_4] ;~ 28F0:3443
cs=0x28f0;eip=0x003446; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 95206 push    [bp+var_12] ;~ 28F0:3446
cs=0x28f0;eip=0x003449; 	R(CALLF(sub_27c9e,0));	// 95207 call    sub_27C9E ;~ 28F0:3449
cs=0x28f0;eip=0x00344e; 	X(PUSH(dx));	// 95208 push    dx ;~ 28F0:344E
cs=0x28f0;eip=0x00344f; 	X(PUSH(ax));	// 95209 push    ax ;~ 28F0:344F
cs=0x28f0;eip=0x003450; 	R(CALLF(sub_105c2,0));	// 95210 call    sub_105C2 ;~ 28F0:3450
cs=0x28f0;eip=0x003455; 	X(PUSH(dx));	// 95211 push    dx ;~ 28F0:3455
cs=0x28f0;eip=0x003456; 	X(PUSH(ax));	// 95212 push    ax ;~ 28F0:3456
cs=0x28f0;eip=0x003457; 	R(CALLF(sub_10526,0));	// 95213 call    sub_10526 ;~ 28F0:3457
loc_3a93c:
	// 10541 
cs=0x28f0;eip=0x00345c; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 95216 mov     [bp+var_8], ax ;~ 28F0:345C
cs=0x28f0;eip=0x00345f; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 95217 mov     [bp+var_6], dx ;~ 28F0:345F
cs=0x28f0;eip=0x003462; 	T(CMP(*(dw*)(raddr(ss,bp+var_12)), 0x2D0));	// 95218 cmp     [bp+var_12], 2D0h ;~ 28F0:3462
cs=0x28f0;eip=0x003467; 	R(JLE(loc_3a95d));	// 95219 jle     short loc_3A95D ;~ 28F0:3467
cs=0x28f0;eip=0x003469; 	T(CMP(*(dw*)(raddr(ss,bp+var_12)), 0x870));	// 95220 cmp     [bp+var_12], 870h ;~ 28F0:3469
cs=0x28f0;eip=0x00346e; 	R(JGE(loc_3a95d));	// 95221 jge     short loc_3A95D ;~ 28F0:346E
cs=0x28f0;eip=0x003470; 	T(NEG(ax));	// 95222 neg     ax ;~ 28F0:3470
cs=0x28f0;eip=0x003472; 	T(ADC(dx, 0));	// 95223 adc     dx, 0 ;~ 28F0:3472
cs=0x28f0;eip=0x003475; 	T(NEG(dx));	// 95224 neg     dx ;~ 28F0:3475
cs=0x28f0;eip=0x003477; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 95225 mov     [bp+var_8], ax ;~ 28F0:3477
cs=0x28f0;eip=0x00347a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 95226 mov     [bp+var_6], dx ;~ 28F0:347A
loc_3a95d:
	// 10542 
cs=0x28f0;eip=0x00347d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 95230 les     bx, [bp+var_10] ;~ 28F0:347D
cs=0x28f0;eip=0x003480; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 95231 mov     ax, [bp+var_8] ;~ 28F0:3480
cs=0x28f0;eip=0x003483; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 95232 mov     dx, [bp+var_6] ;~ 28F0:3483
cs=0x28f0;eip=0x003486; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 95233 mov     es:[bx], ax ;~ 28F0:3486
cs=0x28f0;eip=0x003489; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 95234 mov     es:[bx+2], dx ;~ 28F0:3489
cs=0x28f0;eip=0x00348d; 	X(PUSH(es));	// 95235 push    es ;~ 28F0:348D
cs=0x28f0;eip=0x00348e; 	X(PUSH(bx));	// 95236 push    bx ;~ 28F0:348E
cs=0x28f0;eip=0x00348f; 	R(CALL(sub_3bb03,0));	// 95237 call    sub_3BB03 ;~ 28F0:348F
cs=0x28f0;eip=0x003492; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 95238 push    [bp+var_C] ;~ 28F0:3492
cs=0x28f0;eip=0x003495; 	R(CALLF(sub_27cb4,0));	// 95239 call    sub_27CB4 ;~ 28F0:3495
cs=0x28f0;eip=0x00349a; 	X(PUSH(dx));	// 95240 push    dx ;~ 28F0:349A
cs=0x28f0;eip=0x00349b; 	X(PUSH(ax));	// 95241 push    ax ;~ 28F0:349B
cs=0x28f0;eip=0x00349c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 95242 les     bx, [bp+var_10] ;~ 28F0:349C
cs=0x28f0;eip=0x00349f; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 95243 mov     ax, es:[bx] ;~ 28F0:349F
cs=0x28f0;eip=0x0034a2; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 95244 mov     dx, es:[bx+2] ;~ 28F0:34A2
cs=0x28f0;eip=0x0034a6; 	T(MOV(cl, 8));	// 95245 mov     cl, 8 ;~ 28F0:34A6
cs=0x28f0;eip=0x0034a8; 	R(CALLF(sub_10240,0));	// 95246 call    sub_10240 ;~ 28F0:34A8
cs=0x28f0;eip=0x0034ad; 	X(PUSH(dx));	// 95247 push    dx ;~ 28F0:34AD
cs=0x28f0;eip=0x0034ae; 	X(PUSH(ax));	// 95248 push    ax ;~ 28F0:34AE
cs=0x28f0;eip=0x0034af; 	R(CALLF(sub_105c2,0));	// 95249 call    sub_105C2 ;~ 28F0:34AF
cs=0x28f0;eip=0x0034b4; 	T(MOV(cl, 8));	// 95250 mov     cl, 8 ;~ 28F0:34B4
cs=0x28f0;eip=0x0034b6; 	R(CALLF(sub_10240,0));	// 95251 call    sub_10240 ;~ 28F0:34B6
cs=0x28f0;eip=0x0034bb; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 95252 les     bx, [bp+var_10] ;~ 28F0:34BB
cs=0x28f0;eip=0x0034be; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 95253 mov     es:[bx], ax ;~ 28F0:34BE
cs=0x28f0;eip=0x0034c1; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 95254 mov     es:[bx+2], dx ;~ 28F0:34C1
cs=0x28f0;eip=0x0034c5; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95255 push    word ptr [bp+arg_0+2] ;~ 28F0:34C5
cs=0x28f0;eip=0x0034c8; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95256 push    word ptr [bp+arg_0] ;~ 28F0:34C8
cs=0x28f0;eip=0x0034cb; 	X(PUSH(es));	// 95257 push    es ;~ 28F0:34CB
cs=0x28f0;eip=0x0034cc; 	X(PUSH(bx));	// 95258 push    bx ;~ 28F0:34CC
cs=0x28f0;eip=0x0034cd; 	R(CALL(sub_3b97e,0));	// 95259 call    sub_3B97E ;~ 28F0:34CD
cs=0x28f0;eip=0x0034d0; 	R(JMP(loc_3a9be));	// 95260 jmp     short loc_3A9BE ;~ 28F0:34D0
loc_3a9b2:
	// 10543 
cs=0x28f0;eip=0x0034d2; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 95265 les     bx, [bp+var_10] ;~ 28F0:34D2
cs=0x28f0;eip=0x0034d5; 	T(SUB(ax, ax));	// 95266 sub     ax, ax ;~ 28F0:34D5
cs=0x28f0;eip=0x0034d7; 	X(MOV(*(dw*)(raddr(es,bx+2)), ax));	// 95267 mov     es:[bx+2], ax ;~ 28F0:34D7
cs=0x28f0;eip=0x0034db; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 95268 mov     es:[bx], ax ;~ 28F0:34DB
loc_3a9be:
	// 10544 
cs=0x28f0;eip=0x0034de; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95271 mov     ax, word ptr [bp+arg_0] ;~ 28F0:34DE
cs=0x28f0;eip=0x0034e1; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95272 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:34E1
cs=0x28f0;eip=0x0034e4; 	T(ADD(ax, 0x40));	// 95273 add     ax, 40h ; '@' ;~ 28F0:34E4
cs=0x28f0;eip=0x0034e7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 95274 mov     word ptr [bp+var_10], ax ;~ 28F0:34E7
cs=0x28f0;eip=0x0034ea; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 95275 mov     word ptr [bp+var_10+2], dx ;~ 28F0:34EA
cs=0x28f0;eip=0x0034ed; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 95276 push    [bp+var_12] ;~ 28F0:34ED
cs=0x28f0;eip=0x0034f0; 	R(CALLF(sub_24cf8,0));	// 95277 call    sub_24CF8 ;~ 28F0:34F0
cs=0x28f0;eip=0x0034f5; 	X(PUSH(ax));	// 95278 push    ax ;~ 28F0:34F5
cs=0x28f0;eip=0x0034f6; 	R(CALLF(sub_27c9e,0));	// 95279 call    sub_27C9E ;~ 28F0:34F6
cs=0x28f0;eip=0x0034fb; 	X(PUSH(dx));	// 95280 push    dx ;~ 28F0:34FB
cs=0x28f0;eip=0x0034fc; 	X(PUSH(ax));	// 95281 push    ax ;~ 28F0:34FC
cs=0x28f0;eip=0x0034fd; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 95282 les     bx, [bp+var_10] ;~ 28F0:34FD
cs=0x28f0;eip=0x003500; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 95283 mov     ax, es:[bx+8] ;~ 28F0:3500
cs=0x28f0;eip=0x003504; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 95284 mov     dx, es:[bx+0Ah] ;~ 28F0:3504
cs=0x28f0;eip=0x003508; 	T(MOV(cl, 8));	// 95285 mov     cl, 8 ;~ 28F0:3508
cs=0x28f0;eip=0x00350a; 	R(CALLF(sub_10240,0));	// 95286 call    sub_10240 ;~ 28F0:350A
cs=0x28f0;eip=0x00350f; 	X(PUSH(dx));	// 95287 push    dx ;~ 28F0:350F
cs=0x28f0;eip=0x003510; 	X(PUSH(ax));	// 95288 push    ax ;~ 28F0:3510
cs=0x28f0;eip=0x003511; 	R(CALLF(sub_105c2,0));	// 95289 call    sub_105C2 ;~ 28F0:3511
cs=0x28f0;eip=0x003516; 	T(MOV(cl, 8));	// 95290 mov     cl, 8 ;~ 28F0:3516
cs=0x28f0;eip=0x003518; 	R(CALLF(sub_10240,0));	// 95291 call    sub_10240 ;~ 28F0:3518
cs=0x28f0;eip=0x00351d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 95292 les     bx, [bp+var_10] ;~ 28F0:351D
cs=0x28f0;eip=0x003520; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 95293 mov     es:[bx], ax ;~ 28F0:3520
cs=0x28f0;eip=0x003523; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 95294 mov     es:[bx+2], dx ;~ 28F0:3523
cs=0x28f0;eip=0x003527; 	T(MOV(sp, bp));	// 95295 mov     sp, bp ;~ 28F0:3527
cs=0x28f0;eip=0x003529; 	X(POP(bp));	// 95296 pop     bp ;~ 28F0:3529
cs=0x28f0;eip=0x00352a; 	R(RETN(4));	// 95297 retn    4 ;~ 28F0:352A
sub_3aa0d:
	// 95305 
#undef var_8
#define var_8 -8
	// 95307 var_8           = word ptr -8 ;~ 28F0:352D
#undef var_6
#define var_6 -6
	// 95308 var_6           = word ptr -6 ;~ 28F0:352D
#undef var_4
#define var_4 -4
	// 95309 var_4           = word ptr -4 ;~ 28F0:352D
#undef var_2
#define var_2 -2
	// 95310 var_2           = word ptr -2 ;~ 28F0:352D
#undef arg_4
#define arg_4 8
	// 95311 arg_4           = word ptr  8 ;~ 28F0:352D
#undef arg_6
#define arg_6 0x0A
	// 95312 arg_6           = dword ptr  0Ah ;~ 28F0:352D
cs=0x28f0;eip=0x00352d; 	X(PUSH(bp));	// 95314 push    bp ;~ 28F0:352D
cs=0x28f0;eip=0x00352e; 	T(MOV(bp, sp));	// 95315 mov     bp, sp ;~ 28F0:352E
cs=0x28f0;eip=0x003530; 	T(SUB(sp, 8));	// 95316 sub     sp, 8 ;~ 28F0:3530
cs=0x28f0;eip=0x003533; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95317 les     bx, [bp+arg_6] ;~ 28F0:3533
cs=0x28f0;eip=0x003536; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x276))));	// 95318 mov     ax, es:[bx+276h] ;~ 28F0:3536
cs=0x28f0;eip=0x00353b; 	T(OR(ax, *(dw*)(raddr(es,bx+0x278))));	// 95319 or      ax, es:[bx+278h] ;~ 28F0:353B
cs=0x28f0;eip=0x003540; 	R(JNZ(loc_3aa25));	// 95320 jnz     short loc_3AA25 ;~ 28F0:3540
cs=0x28f0;eip=0x003542; 	R(JMP(loc_3ab7a));	// 95321 jmp     loc_3AB7A ;~ 28F0:3542
loc_3aa25:
	// 10545 
cs=0x28f0;eip=0x003545; 	T(CMP(*(dw*)(raddr(es,bx+0x21A)), 0));	// 95325 cmp     word ptr es:[bx+21Ah], 0 ;~ 28F0:3545
cs=0x28f0;eip=0x00354b; 	R(JGE(loc_3aa30));	// 95326 jge     short loc_3AA30 ;~ 28F0:354B
cs=0x28f0;eip=0x00354d; 	R(JMP(loc_3ab7a));	// 95327 jmp     loc_3AB7A ;~ 28F0:354D
loc_3aa30:
	// 10546 
cs=0x28f0;eip=0x003550; 	R(JG(loc_3aa3d));	// 95331 jg      short loc_3AA3D ;~ 28F0:3550
cs=0x28f0;eip=0x003552; 	T(CMP(*(dw*)(raddr(es,bx+0x218)), 0));	// 95332 cmp     word ptr es:[bx+218h], 0 ;~ 28F0:3552
cs=0x28f0;eip=0x003558; 	R(JNZ(loc_3aa3d));	// 95333 jnz     short loc_3AA3D ;~ 28F0:3558
cs=0x28f0;eip=0x00355a; 	R(JMP(loc_3ab7a));	// 95334 jmp     loc_3AB7A ;~ 28F0:355A
loc_3aa3d:
	// 10547 
cs=0x28f0;eip=0x00355d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x218))));	// 95339 mov     ax, es:[bx+218h] ;~ 28F0:355D
cs=0x28f0;eip=0x003562; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21A))));	// 95340 mov     dx, es:[bx+21Ah] ;~ 28F0:3562
cs=0x28f0;eip=0x003567; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 95341 mov     [bp+var_8], ax ;~ 28F0:3567
cs=0x28f0;eip=0x00356a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 95342 mov     [bp+var_6], dx ;~ 28F0:356A
cs=0x28f0;eip=0x00356d; 	T(CMP(*(raddr(es,bx+0x217)), 0));	// 95343 cmp     byte ptr es:[bx+217h], 0 ;~ 28F0:356D
cs=0x28f0;eip=0x003573; 	R(JZ(loc_3aa96));	// 95344 jz      short loc_3AA96 ;~ 28F0:3573
cs=0x28f0;eip=0x003575; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x220))));	// 95345 mov     ax, es:[bx+220h] ;~ 28F0:3575
cs=0x28f0;eip=0x00357a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x222))));	// 95346 mov     dx, es:[bx+222h] ;~ 28F0:357A
cs=0x28f0;eip=0x00357f; 	T(MOV(cl, 8));	// 95347 mov     cl, 8 ;~ 28F0:357F
cs=0x28f0;eip=0x003581; 	R(CALLF(sub_10240,0));	// 95348 call    sub_10240 ;~ 28F0:3581
cs=0x28f0;eip=0x003586; 	X(PUSH(dx));	// 95349 push    dx ;~ 28F0:3586
cs=0x28f0;eip=0x003587; 	X(PUSH(ax));	// 95350 push    ax ;~ 28F0:3587
cs=0x28f0;eip=0x003588; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 95351 push    [bp+var_6] ;~ 28F0:3588
cs=0x28f0;eip=0x00358b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 95352 push    [bp+var_8] ;~ 28F0:358B
cs=0x28f0;eip=0x00358e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95353 les     bx, [bp+arg_6] ;~ 28F0:358E
cs=0x28f0;eip=0x003591; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x230))));	// 95354 mov     ax, es:[bx+230h] ;~ 28F0:3591
cs=0x28f0;eip=0x003596; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x232))));	// 95355 mov     dx, es:[bx+232h] ;~ 28F0:3596
cs=0x28f0;eip=0x00359b; 	T(MOV(cl, 8));	// 95356 mov     cl, 8 ;~ 28F0:359B
cs=0x28f0;eip=0x00359d; 	R(CALLF(sub_10240,0));	// 95357 call    sub_10240 ;~ 28F0:359D
cs=0x28f0;eip=0x0035a2; 	X(PUSH(dx));	// 95358 push    dx ;~ 28F0:35A2
cs=0x28f0;eip=0x0035a3; 	X(PUSH(ax));	// 95359 push    ax ;~ 28F0:35A3
cs=0x28f0;eip=0x0035a4; 	R(CALLF(sub_105c2,0));	// 95360 call    sub_105C2 ;~ 28F0:35A4
cs=0x28f0;eip=0x0035a9; 	X(PUSH(dx));	// 95361 push    dx ;~ 28F0:35A9
cs=0x28f0;eip=0x0035aa; 	X(PUSH(ax));	// 95362 push    ax ;~ 28F0:35AA
cs=0x28f0;eip=0x0035ab; 	R(CALLF(sub_10526,0));	// 95363 call    sub_10526 ;~ 28F0:35AB
cs=0x28f0;eip=0x0035b0; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 95364 mov     [bp+var_8], ax ;~ 28F0:35B0
cs=0x28f0;eip=0x0035b3; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 95365 mov     [bp+var_6], dx ;~ 28F0:35B3
loc_3aa96:
	// 10548 
cs=0x28f0;eip=0x0035b6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95368 les     bx, [bp+arg_6] ;~ 28F0:35B6
cs=0x28f0;eip=0x0035b9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x296))));	// 95369 mov     ax, es:[bx+296h] ;~ 28F0:35B9
cs=0x28f0;eip=0x0035be; 	T(CWD);	// 95370 cwd ;~ 28F0:35BE
cs=0x28f0;eip=0x0035bf; 	X(PUSH(dx));	// 95371 push    dx ;~ 28F0:35BF
cs=0x28f0;eip=0x0035c0; 	X(PUSH(ax));	// 95372 push    ax ;~ 28F0:35C0
cs=0x28f0;eip=0x0035c1; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x220))));	// 95373 mov     ax, es:[bx+220h] ;~ 28F0:35C1
cs=0x28f0;eip=0x0035c6; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x222))));	// 95374 mov     dx, es:[bx+222h] ;~ 28F0:35C6
cs=0x28f0;eip=0x0035cb; 	T(MOV(cl, 8));	// 95375 mov     cl, 8 ;~ 28F0:35CB
cs=0x28f0;eip=0x0035cd; 	R(CALLF(sub_10240,0));	// 95376 call    sub_10240 ;~ 28F0:35CD
cs=0x28f0;eip=0x0035d2; 	X(PUSH(dx));	// 95377 push    dx ;~ 28F0:35D2
cs=0x28f0;eip=0x0035d3; 	X(PUSH(ax));	// 95378 push    ax ;~ 28F0:35D3
cs=0x28f0;eip=0x0035d4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 95379 mov     ax, [bp+var_8] ;~ 28F0:35D4
cs=0x28f0;eip=0x0035d7; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 95380 mov     dx, [bp+var_6] ;~ 28F0:35D7
cs=0x28f0;eip=0x0035da; 	T(MOV(cl, 8));	// 95381 mov     cl, 8 ;~ 28F0:35DA
cs=0x28f0;eip=0x0035dc; 	R(CALLF(sub_10240,0));	// 95382 call    sub_10240 ;~ 28F0:35DC
cs=0x28f0;eip=0x0035e1; 	X(PUSH(dx));	// 95383 push    dx ;~ 28F0:35E1
cs=0x28f0;eip=0x0035e2; 	X(PUSH(ax));	// 95384 push    ax ;~ 28F0:35E2
cs=0x28f0;eip=0x0035e3; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95385 les     bx, [bp+arg_6] ;~ 28F0:35E3
cs=0x28f0;eip=0x0035e6; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x25E))));	// 95386 mov     ax, es:[bx+25Eh] ;~ 28F0:35E6
cs=0x28f0;eip=0x0035eb; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x260))));	// 95387 mov     dx, es:[bx+260h] ;~ 28F0:35EB
cs=0x28f0;eip=0x0035f0; 	T(MOV(cl, 8));	// 95388 mov     cl, 8 ;~ 28F0:35F0
cs=0x28f0;eip=0x0035f2; 	R(CALLF(sub_10240,0));	// 95389 call    sub_10240 ;~ 28F0:35F2
cs=0x28f0;eip=0x0035f7; 	X(PUSH(dx));	// 95390 push    dx ;~ 28F0:35F7
cs=0x28f0;eip=0x0035f8; 	X(PUSH(ax));	// 95391 push    ax ;~ 28F0:35F8
cs=0x28f0;eip=0x0035f9; 	R(CALLF(sub_105c2,0));	// 95392 call    sub_105C2 ;~ 28F0:35F9
cs=0x28f0;eip=0x0035fe; 	X(PUSH(dx));	// 95393 push    dx ;~ 28F0:35FE
cs=0x28f0;eip=0x0035ff; 	X(PUSH(ax));	// 95394 push    ax ;~ 28F0:35FF
cs=0x28f0;eip=0x003600; 	R(CALLF(sub_10526,0));	// 95395 call    sub_10526 ;~ 28F0:3600
cs=0x28f0;eip=0x003605; 	X(PUSH(dx));	// 95396 push    dx ;~ 28F0:3605
cs=0x28f0;eip=0x003606; 	X(PUSH(ax));	// 95397 push    ax ;~ 28F0:3606
cs=0x28f0;eip=0x003607; 	R(CALLF(sub_105c2,0));	// 95398 call    sub_105C2 ;~ 28F0:3607
cs=0x28f0;eip=0x00360c; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 95399 mov     [bp+var_8], ax ;~ 28F0:360C
cs=0x28f0;eip=0x00360f; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 95400 mov     [bp+var_6], dx ;~ 28F0:360F
cs=0x28f0;eip=0x003612; 	T(MOV(cl, 8));	// 95401 mov     cl, 8 ;~ 28F0:3612
cs=0x28f0;eip=0x003614; 	R(CALLF(sub_10240,0));	// 95402 call    sub_10240 ;~ 28F0:3614
cs=0x28f0;eip=0x003619; 	X(PUSH(dx));	// 95403 push    dx ;~ 28F0:3619
cs=0x28f0;eip=0x00361a; 	X(PUSH(ax));	// 95404 push    ax ;~ 28F0:361A
cs=0x28f0;eip=0x00361b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95405 les     bx, [bp+arg_6] ;~ 28F0:361B
cs=0x28f0;eip=0x00361e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2EA))));	// 95406 mov     ax, es:[bx+2EAh] ;~ 28F0:361E
cs=0x28f0;eip=0x003623; 	T(CWD);	// 95407 cwd ;~ 28F0:3623
cs=0x28f0;eip=0x003624; 	X(PUSH(dx));	// 95408 push    dx ;~ 28F0:3624
cs=0x28f0;eip=0x003625; 	X(PUSH(ax));	// 95409 push    ax ;~ 28F0:3625
cs=0x28f0;eip=0x003626; 	R(CALLF(sub_105c2,0));	// 95410 call    sub_105C2 ;~ 28F0:3626
cs=0x28f0;eip=0x00362b; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 95411 mov     [bp+var_8], ax ;~ 28F0:362B
cs=0x28f0;eip=0x00362e; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 95412 mov     [bp+var_6], dx ;~ 28F0:362E
cs=0x28f0;eip=0x003631; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95413 les     bx, [bp+arg_6] ;~ 28F0:3631
cs=0x28f0;eip=0x003634; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x128))));	// 95414 mov     ax, es:[bx+128h] ;~ 28F0:3634
cs=0x28f0;eip=0x003639; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12A))));	// 95415 mov     dx, es:[bx+12Ah] ;~ 28F0:3639
cs=0x28f0;eip=0x00363e; 	T(MOV(cl, 8));	// 95416 mov     cl, 8 ;~ 28F0:363E
cs=0x28f0;eip=0x003640; 	R(CALLF(sub_10240,0));	// 95417 call    sub_10240 ;~ 28F0:3640
cs=0x28f0;eip=0x003645; 	X(PUSH(dx));	// 95418 push    dx ;~ 28F0:3645
cs=0x28f0;eip=0x003646; 	X(PUSH(ax));	// 95419 push    ax ;~ 28F0:3646
cs=0x28f0;eip=0x003647; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 95420 mov     ax, [bp+var_8] ;~ 28F0:3647
cs=0x28f0;eip=0x00364a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 95421 mov     dx, [bp+var_6] ;~ 28F0:364A
cs=0x28f0;eip=0x00364d; 	T(MOV(cl, 9));	// 95422 mov     cl, 9 ;~ 28F0:364D
cs=0x28f0;eip=0x00364f; 	R(CALLF(sub_10240,0));	// 95423 call    sub_10240 ;~ 28F0:364F
cs=0x28f0;eip=0x003654; 	X(PUSH(dx));	// 95424 push    dx ;~ 28F0:3654
cs=0x28f0;eip=0x003655; 	X(PUSH(ax));	// 95425 push    ax ;~ 28F0:3655
cs=0x28f0;eip=0x003656; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95426 les     bx, [bp+arg_6] ;~ 28F0:3656
cs=0x28f0;eip=0x003659; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 95427 mov     ax, es:[bx+120h] ;~ 28F0:3659
cs=0x28f0;eip=0x00365e; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 95428 mov     dx, es:[bx+122h] ;~ 28F0:365E
cs=0x28f0;eip=0x003663; 	T(MOV(cl, 8));	// 95429 mov     cl, 8 ;~ 28F0:3663
cs=0x28f0;eip=0x003665; 	R(CALLF(sub_10240,0));	// 95430 call    sub_10240 ;~ 28F0:3665
cs=0x28f0;eip=0x00366a; 	X(PUSH(dx));	// 95431 push    dx ;~ 28F0:366A
cs=0x28f0;eip=0x00366b; 	X(PUSH(ax));	// 95432 push    ax ;~ 28F0:366B
cs=0x28f0;eip=0x00366c; 	R(CALLF(sub_105c2,0));	// 95433 call    sub_105C2 ;~ 28F0:366C
cs=0x28f0;eip=0x003671; 	X(PUSH(dx));	// 95434 push    dx ;~ 28F0:3671
cs=0x28f0;eip=0x003672; 	X(PUSH(ax));	// 95435 push    ax ;~ 28F0:3672
cs=0x28f0;eip=0x003673; 	R(CALLF(sub_10526,0));	// 95436 call    sub_10526 ;~ 28F0:3673
cs=0x28f0;eip=0x003678; 	T(MOV(dh, dl));	// 95437 mov     dh, dl ;~ 28F0:3678
cs=0x28f0;eip=0x00367a; 	T(MOV(dl, ah));	// 95438 mov     dl, ah ;~ 28F0:367A
cs=0x28f0;eip=0x00367c; 	T(MOV(ah, al));	// 95439 mov     ah, al ;~ 28F0:367C
cs=0x28f0;eip=0x00367e; 	T(SUB(al, al));	// 95440 sub     al, al ;~ 28F0:367E
cs=0x28f0;eip=0x003680; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 95441 mov     [bp+var_4], ax ;~ 28F0:3680
cs=0x28f0;eip=0x003683; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 95442 mov     [bp+var_2], dx ;~ 28F0:3683
cs=0x28f0;eip=0x003686; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 95443 mov     bx, [bp+arg_4] ;~ 28F0:3686
cs=0x28f0;eip=0x003689; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 95444 mov     ax, [bp+var_8] ;~ 28F0:3689
cs=0x28f0;eip=0x00368c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 95445 mov     dx, [bp+var_6] ;~ 28F0:368C
cs=0x28f0;eip=0x00368f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 95446 sub     ax, [bp+var_4] ;~ 28F0:368F
cs=0x28f0;eip=0x003692; 	T(SBB(dx, *(dw*)(raddr(ss,bp+var_2))));	// 95447 sbb     dx, [bp+var_2] ;~ 28F0:3692
cs=0x28f0;eip=0x003695; 	X(ADD(*(dw*)(raddr(ds,bx)), ax));	// 95448 add     [bx], ax ;~ 28F0:3695
cs=0x28f0;eip=0x003697; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 95449 adc     [bx+2], dx ;~ 28F0:3697
loc_3ab7a:
	// 10549 
cs=0x28f0;eip=0x00369a; 	T(MOV(sp, bp));	// 95453 mov     sp, bp ;~ 28F0:369A
cs=0x28f0;eip=0x00369c; 	X(POP(bp));	// 95454 pop     bp ;~ 28F0:369C
cs=0x28f0;eip=0x00369d; 	R(RETN(0x0A));	// 95455 retn    0Ah ;~ 28F0:369D
sub_3ab80:
	// 95463 
#undef var_a
#define var_a -0x0A
	// 95465 var_A           = word ptr -0Ah ;~ 28F0:36A0
#undef var_8
#define var_8 -8
	// 95466 var_8           = word ptr -8 ;~ 28F0:36A0
#undef var_6
#define var_6 -6
	// 95467 var_6           = word ptr -6 ;~ 28F0:36A0
#undef var_4
#define var_4 -4
	// 95468 var_4           = word ptr -4 ;~ 28F0:36A0
#undef var_2
#define var_2 -2
	// 95469 var_2           = word ptr -2 ;~ 28F0:36A0
#undef arg_4
#define arg_4 8
	// 95470 arg_4           = word ptr  8 ;~ 28F0:36A0
#undef arg_6
#define arg_6 0x0A
	// 95471 arg_6           = dword ptr  0Ah ;~ 28F0:36A0
cs=0x28f0;eip=0x0036a0; 	X(PUSH(bp));	// 95473 push    bp ;~ 28F0:36A0
cs=0x28f0;eip=0x0036a1; 	T(MOV(bp, sp));	// 95474 mov     bp, sp ;~ 28F0:36A1
cs=0x28f0;eip=0x0036a3; 	T(SUB(sp, 0x0A));	// 95475 sub     sp, 0Ah ;~ 28F0:36A3
cs=0x28f0;eip=0x0036a6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95476 les     bx, [bp+arg_6] ;~ 28F0:36A6
cs=0x28f0;eip=0x0036a9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x296))));	// 95477 mov     ax, es:[bx+296h] ;~ 28F0:36A9
cs=0x28f0;eip=0x0036ae; 	T(CWD);	// 95478 cwd ;~ 28F0:36AE
cs=0x28f0;eip=0x0036af; 	X(PUSH(dx));	// 95479 push    dx ;~ 28F0:36AF
cs=0x28f0;eip=0x0036b0; 	X(PUSH(ax));	// 95480 push    ax ;~ 28F0:36B0
cs=0x28f0;eip=0x0036b1; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x25E))));	// 95481 mov     ax, es:[bx+25Eh] ;~ 28F0:36B1
cs=0x28f0;eip=0x0036b6; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x260))));	// 95482 mov     dx, es:[bx+260h] ;~ 28F0:36B6
cs=0x28f0;eip=0x0036bb; 	T(MOV(cl, 8));	// 95483 mov     cl, 8 ;~ 28F0:36BB
cs=0x28f0;eip=0x0036bd; 	R(CALLF(sub_10240,0));	// 95484 call    sub_10240 ;~ 28F0:36BD
cs=0x28f0;eip=0x0036c2; 	X(PUSH(dx));	// 95485 push    dx ;~ 28F0:36C2
cs=0x28f0;eip=0x0036c3; 	X(PUSH(ax));	// 95486 push    ax ;~ 28F0:36C3
cs=0x28f0;eip=0x0036c4; 	R(CALLF(sub_105c2,0));	// 95487 call    sub_105C2 ;~ 28F0:36C4
cs=0x28f0;eip=0x0036c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 95488 mov     [bp+var_4], ax ;~ 28F0:36C9
cs=0x28f0;eip=0x0036cc; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 95489 mov     [bp+var_2], dx ;~ 28F0:36CC
cs=0x28f0;eip=0x0036cf; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95490 les     bx, [bp+arg_6] ;~ 28F0:36CF
cs=0x28f0;eip=0x0036d2; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x128))));	// 95491 mov     ax, es:[bx+128h] ;~ 28F0:36D2
cs=0x28f0;eip=0x0036d7; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12A))));	// 95492 mov     dx, es:[bx+12Ah] ;~ 28F0:36D7
cs=0x28f0;eip=0x0036dc; 	T(MOV(cl, 8));	// 95493 mov     cl, 8 ;~ 28F0:36DC
cs=0x28f0;eip=0x0036de; 	R(CALLF(sub_10240,0));	// 95494 call    sub_10240 ;~ 28F0:36DE
cs=0x28f0;eip=0x0036e3; 	X(PUSH(dx));	// 95495 push    dx ;~ 28F0:36E3
cs=0x28f0;eip=0x0036e4; 	X(PUSH(ax));	// 95496 push    ax ;~ 28F0:36E4
cs=0x28f0;eip=0x0036e5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 95497 mov     ax, [bp+var_4] ;~ 28F0:36E5
cs=0x28f0;eip=0x0036e8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 95498 mov     dx, [bp+var_2] ;~ 28F0:36E8
cs=0x28f0;eip=0x0036eb; 	T(MOV(cl, 9));	// 95499 mov     cl, 9 ;~ 28F0:36EB
cs=0x28f0;eip=0x0036ed; 	R(CALLF(sub_10240,0));	// 95500 call    sub_10240 ;~ 28F0:36ED
cs=0x28f0;eip=0x0036f2; 	X(PUSH(dx));	// 95501 push    dx ;~ 28F0:36F2
cs=0x28f0;eip=0x0036f3; 	X(PUSH(ax));	// 95502 push    ax ;~ 28F0:36F3
cs=0x28f0;eip=0x0036f4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95503 les     bx, [bp+arg_6] ;~ 28F0:36F4
cs=0x28f0;eip=0x0036f7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 95504 mov     ax, es:[bx+120h] ;~ 28F0:36F7
cs=0x28f0;eip=0x0036fc; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 95505 mov     dx, es:[bx+122h] ;~ 28F0:36FC
cs=0x28f0;eip=0x003701; 	T(MOV(cl, 8));	// 95506 mov     cl, 8 ;~ 28F0:3701
cs=0x28f0;eip=0x003703; 	R(CALLF(sub_10240,0));	// 95507 call    sub_10240 ;~ 28F0:3703
cs=0x28f0;eip=0x003708; 	X(PUSH(dx));	// 95508 push    dx ;~ 28F0:3708
cs=0x28f0;eip=0x003709; 	X(PUSH(ax));	// 95509 push    ax ;~ 28F0:3709
cs=0x28f0;eip=0x00370a; 	R(CALLF(sub_105c2,0));	// 95510 call    sub_105C2 ;~ 28F0:370A
cs=0x28f0;eip=0x00370f; 	X(PUSH(dx));	// 95511 push    dx ;~ 28F0:370F
cs=0x28f0;eip=0x003710; 	X(PUSH(ax));	// 95512 push    ax ;~ 28F0:3710
cs=0x28f0;eip=0x003711; 	R(CALLF(sub_10526,0));	// 95513 call    sub_10526 ;~ 28F0:3711
cs=0x28f0;eip=0x003716; 	T(MOV(dh, dl));	// 95514 mov     dh, dl ;~ 28F0:3716
cs=0x28f0;eip=0x003718; 	T(MOV(dl, ah));	// 95515 mov     dl, ah ;~ 28F0:3718
cs=0x28f0;eip=0x00371a; 	T(MOV(ah, al));	// 95516 mov     ah, al ;~ 28F0:371A
cs=0x28f0;eip=0x00371c; 	T(SUB(al, al));	// 95517 sub     al, al ;~ 28F0:371C
cs=0x28f0;eip=0x00371e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 95518 mov     [bp+var_A], ax ;~ 28F0:371E
cs=0x28f0;eip=0x003721; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 95519 mov     [bp+var_8], dx ;~ 28F0:3721
cs=0x28f0;eip=0x003724; 	T(MOV(cl, 8));	// 95520 mov     cl, 8 ;~ 28F0:3724
cs=0x28f0;eip=0x003726; 	R(CALLF(sub_10240,0));	// 95521 call    sub_10240 ;~ 28F0:3726
cs=0x28f0;eip=0x00372b; 	X(PUSH(dx));	// 95522 push    dx ;~ 28F0:372B
cs=0x28f0;eip=0x00372c; 	X(PUSH(ax));	// 95523 push    ax ;~ 28F0:372C
cs=0x28f0;eip=0x00372d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95524 les     bx, [bp+arg_6] ;~ 28F0:372D
cs=0x28f0;eip=0x003730; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E8))));	// 95525 push    word ptr es:[bx+2E8h] ;~ 28F0:3730
cs=0x28f0;eip=0x003735; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E6))));	// 95526 push    word ptr es:[bx+2E6h] ;~ 28F0:3735
cs=0x28f0;eip=0x00373a; 	R(CALLF(sub_105c2,0));	// 95527 call    sub_105C2 ;~ 28F0:373A
cs=0x28f0;eip=0x00373f; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 95528 mov     [bp+var_A], ax ;~ 28F0:373F
cs=0x28f0;eip=0x003742; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 95529 mov     [bp+var_8], dx ;~ 28F0:3742
cs=0x28f0;eip=0x003745; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95530 les     bx, [bp+arg_6] ;~ 28F0:3745
cs=0x28f0;eip=0x003748; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 95531 mov     ax, es:[bx+2FAh] ;~ 28F0:3748
cs=0x28f0;eip=0x00374d; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 95532 mov     dx, es:[bx+2FCh] ;~ 28F0:374D
cs=0x28f0;eip=0x003752; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 95533 add     ax, es:[bx+302h] ;~ 28F0:3752
cs=0x28f0;eip=0x003757; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 95534 adc     dx, es:[bx+304h] ;~ 28F0:3757
cs=0x28f0;eip=0x00375c; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 95535 add     ax, es:[bx+20Eh] ;~ 28F0:375C
cs=0x28f0;eip=0x003761; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 95536 adc     dx, es:[bx+210h] ;~ 28F0:3761
cs=0x28f0;eip=0x003766; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 95537 les     bx, es:[bx+31Ch] ;~ 28F0:3766
cs=0x28f0;eip=0x00376b; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 95538 cmp     dx, es:[bx+0Ch] ;~ 28F0:376B
cs=0x28f0;eip=0x00376f; 	R(JL(loc_3ac69));	// 95539 jl      short loc_3AC69 ;~ 28F0:376F
cs=0x28f0;eip=0x003771; 	R(JG(loc_3ac59));	// 95540 jg      short loc_3AC59 ;~ 28F0:3771
cs=0x28f0;eip=0x003773; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 95541 cmp     ax, es:[bx+0Ah] ;~ 28F0:3773
cs=0x28f0;eip=0x003777; 	R(JBE(loc_3ac69));	// 95542 jbe     short loc_3AC69 ;~ 28F0:3777
loc_3ac59:
	// 10550 
cs=0x28f0;eip=0x003779; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 95545 mov     ax, [bp+var_A] ;~ 28F0:3779
cs=0x28f0;eip=0x00377c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 95546 mov     dx, [bp+var_8] ;~ 28F0:377C
cs=0x28f0;eip=0x00377f; 	T(SAR(dx, 1));	// 95547 sar     dx, 1 ;~ 28F0:377F
cs=0x28f0;eip=0x003781; 	T(RCR(ax, 1));	// 95548 rcr     ax, 1 ;~ 28F0:3781
cs=0x28f0;eip=0x003783; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), ax));	// 95549 add     [bp+var_A], ax ;~ 28F0:3783
cs=0x28f0;eip=0x003786; 	X(ADC(*(dw*)(raddr(ss,bp+var_8)), dx));	// 95550 adc     [bp+var_8], dx ;~ 28F0:3786
loc_3ac69:
	// 10551 
cs=0x28f0;eip=0x003789; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 95554 mov     bx, [bp+arg_4] ;~ 28F0:3789
cs=0x28f0;eip=0x00378c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 95555 mov     ax, [bp+var_A] ;~ 28F0:378C
cs=0x28f0;eip=0x00378f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 95556 mov     dx, [bp+var_8] ;~ 28F0:378F
cs=0x28f0;eip=0x003792; 	T(NEG(ax));	// 95557 neg     ax ;~ 28F0:3792
cs=0x28f0;eip=0x003794; 	T(ADC(dx, 0));	// 95558 adc     dx, 0 ;~ 28F0:3794
cs=0x28f0;eip=0x003797; 	T(NEG(dx));	// 95559 neg     dx ;~ 28F0:3797
cs=0x28f0;eip=0x003799; 	X(ADD(*(dw*)(raddr(ds,bx)), ax));	// 95560 add     [bx], ax ;~ 28F0:3799
cs=0x28f0;eip=0x00379b; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 95561 adc     [bx+2], dx ;~ 28F0:379B
cs=0x28f0;eip=0x00379e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95562 les     bx, [bp+arg_6] ;~ 28F0:379E
cs=0x28f0;eip=0x0037a1; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x148))));	// 95563 mov     ax, es:[bx+148h] ;~ 28F0:37A1
cs=0x28f0;eip=0x0037a6; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x14A))));	// 95564 mov     dx, es:[bx+14Ah] ;~ 28F0:37A6
cs=0x28f0;eip=0x0037ab; 	T(MOV(cl, 8));	// 95565 mov     cl, 8 ;~ 28F0:37AB
cs=0x28f0;eip=0x0037ad; 	R(CALLF(sub_10240,0));	// 95566 call    sub_10240 ;~ 28F0:37AD
cs=0x28f0;eip=0x0037b2; 	X(PUSH(dx));	// 95567 push    dx ;~ 28F0:37B2
cs=0x28f0;eip=0x0037b3; 	X(PUSH(ax));	// 95568 push    ax ;~ 28F0:37B3
cs=0x28f0;eip=0x0037b4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 95569 mov     ax, [bp+var_4] ;~ 28F0:37B4
cs=0x28f0;eip=0x0037b7; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 95570 mov     dx, [bp+var_2] ;~ 28F0:37B7
cs=0x28f0;eip=0x0037ba; 	T(MOV(cl, 9));	// 95571 mov     cl, 9 ;~ 28F0:37BA
cs=0x28f0;eip=0x0037bc; 	R(CALLF(sub_10240,0));	// 95572 call    sub_10240 ;~ 28F0:37BC
cs=0x28f0;eip=0x0037c1; 	X(PUSH(dx));	// 95573 push    dx ;~ 28F0:37C1
cs=0x28f0;eip=0x0037c2; 	X(PUSH(ax));	// 95574 push    ax ;~ 28F0:37C2
cs=0x28f0;eip=0x0037c3; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95575 les     bx, [bp+arg_6] ;~ 28F0:37C3
cs=0x28f0;eip=0x0037c6; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x140))));	// 95576 mov     ax, es:[bx+140h] ;~ 28F0:37C6
cs=0x28f0;eip=0x0037cb; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x142))));	// 95577 mov     dx, es:[bx+142h] ;~ 28F0:37CB
cs=0x28f0;eip=0x0037d0; 	T(MOV(cl, 8));	// 95578 mov     cl, 8 ;~ 28F0:37D0
cs=0x28f0;eip=0x0037d2; 	R(CALLF(sub_10240,0));	// 95579 call    sub_10240 ;~ 28F0:37D2
cs=0x28f0;eip=0x0037d7; 	X(PUSH(dx));	// 95580 push    dx ;~ 28F0:37D7
cs=0x28f0;eip=0x0037d8; 	X(PUSH(ax));	// 95581 push    ax ;~ 28F0:37D8
cs=0x28f0;eip=0x0037d9; 	R(CALLF(sub_105c2,0));	// 95582 call    sub_105C2 ;~ 28F0:37D9
cs=0x28f0;eip=0x0037de; 	X(PUSH(dx));	// 95583 push    dx ;~ 28F0:37DE
cs=0x28f0;eip=0x0037df; 	X(PUSH(ax));	// 95584 push    ax ;~ 28F0:37DF
cs=0x28f0;eip=0x0037e0; 	R(CALLF(sub_10526,0));	// 95585 call    sub_10526 ;~ 28F0:37E0
cs=0x28f0;eip=0x0037e5; 	T(MOV(dh, dl));	// 95586 mov     dh, dl ;~ 28F0:37E5
cs=0x28f0;eip=0x0037e7; 	T(MOV(dl, ah));	// 95587 mov     dl, ah ;~ 28F0:37E7
cs=0x28f0;eip=0x0037e9; 	T(MOV(ah, al));	// 95588 mov     ah, al ;~ 28F0:37E9
cs=0x28f0;eip=0x0037eb; 	T(SUB(al, al));	// 95589 sub     al, al ;~ 28F0:37EB
cs=0x28f0;eip=0x0037ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 95590 mov     [bp+var_A], ax ;~ 28F0:37ED
cs=0x28f0;eip=0x0037f0; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 95591 mov     [bp+var_8], dx ;~ 28F0:37F0
cs=0x28f0;eip=0x0037f3; 	T(MOV(cl, 8));	// 95592 mov     cl, 8 ;~ 28F0:37F3
cs=0x28f0;eip=0x0037f5; 	R(CALLF(sub_10240,0));	// 95593 call    sub_10240 ;~ 28F0:37F5
cs=0x28f0;eip=0x0037fa; 	X(PUSH(dx));	// 95594 push    dx ;~ 28F0:37FA
cs=0x28f0;eip=0x0037fb; 	X(PUSH(ax));	// 95595 push    ax ;~ 28F0:37FB
cs=0x28f0;eip=0x0037fc; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95596 les     bx, [bp+arg_6] ;~ 28F0:37FC
cs=0x28f0;eip=0x0037ff; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E8))));	// 95597 push    word ptr es:[bx+2E8h] ;~ 28F0:37FF
cs=0x28f0;eip=0x003804; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E6))));	// 95598 push    word ptr es:[bx+2E6h] ;~ 28F0:3804
cs=0x28f0;eip=0x003809; 	R(CALLF(sub_105c2,0));	// 95599 call    sub_105C2 ;~ 28F0:3809
cs=0x28f0;eip=0x00380e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 95600 mov     [bp+var_A], ax ;~ 28F0:380E
cs=0x28f0;eip=0x003811; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 95601 mov     [bp+var_8], dx ;~ 28F0:3811
cs=0x28f0;eip=0x003814; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 95602 mov     bx, [bp+arg_4] ;~ 28F0:3814
cs=0x28f0;eip=0x003817; 	T(NEG(ax));	// 95603 neg     ax ;~ 28F0:3817
cs=0x28f0;eip=0x003819; 	T(ADC(dx, 0));	// 95604 adc     dx, 0 ;~ 28F0:3819
cs=0x28f0;eip=0x00381c; 	T(NEG(dx));	// 95605 neg     dx ;~ 28F0:381C
cs=0x28f0;eip=0x00381e; 	X(ADD(*(dw*)(raddr(ds,bx+4)), ax));	// 95606 add     [bx+4], ax ;~ 28F0:381E
cs=0x28f0;eip=0x003821; 	X(ADC(*(dw*)(raddr(ds,bx+6)), dx));	// 95607 adc     [bx+6], dx ;~ 28F0:3821
cs=0x28f0;eip=0x003824; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95608 les     bx, [bp+arg_6] ;~ 28F0:3824
cs=0x28f0;eip=0x003827; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 95609 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:3827
cs=0x28f0;eip=0x00382d; 	R(JZ(loc_3ad12));	// 95610 jz      short loc_3AD12 ;~ 28F0:382D
cs=0x28f0;eip=0x00382f; 	R(JMP(loc_3adf3));	// 95611 jmp     loc_3ADF3 ;~ 28F0:382F
loc_3ad12:
	// 10552 
cs=0x28f0;eip=0x003832; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), 0));	// 95615 cmp     word ptr es:[bx+122h], 0 ;~ 28F0:3832
cs=0x28f0;eip=0x003838; 	R(JGE(loc_3ad1d));	// 95616 jge     short loc_3AD1D ;~ 28F0:3838
cs=0x28f0;eip=0x00383a; 	R(JMP(loc_3adf3));	// 95617 jmp     loc_3ADF3 ;~ 28F0:383A
loc_3ad1d:
	// 10553 
cs=0x28f0;eip=0x00383d; 	R(JG(loc_3ad2a));	// 95621 jg      short loc_3AD2A ;~ 28F0:383D
cs=0x28f0;eip=0x00383f; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), 0));	// 95622 cmp     word ptr es:[bx+120h], 0 ;~ 28F0:383F
cs=0x28f0;eip=0x003845; 	R(JNZ(loc_3ad2a));	// 95623 jnz     short loc_3AD2A ;~ 28F0:3845
cs=0x28f0;eip=0x003847; 	R(JMP(loc_3adf3));	// 95624 jmp     loc_3ADF3 ;~ 28F0:3847
loc_3ad2a:
	// 10554 
cs=0x28f0;eip=0x00384a; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x25E))));	// 95629 mov     ax, es:[bx+25Eh] ;~ 28F0:384A
cs=0x28f0;eip=0x00384f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x260))));	// 95630 mov     dx, es:[bx+260h] ;~ 28F0:384F
cs=0x28f0;eip=0x003854; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 95631 mov     [bp+var_4], ax ;~ 28F0:3854
cs=0x28f0;eip=0x003857; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 95632 mov     [bp+var_2], dx ;~ 28F0:3857
cs=0x28f0;eip=0x00385a; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2DC))));	// 95633 mov     ax, es:[bx+2DCh] ;~ 28F0:385A
cs=0x28f0;eip=0x00385f; 	T(CWD);	// 95634 cwd ;~ 28F0:385F
cs=0x28f0;eip=0x003860; 	X(PUSH(dx));	// 95635 push    dx ;~ 28F0:3860
cs=0x28f0;eip=0x003861; 	X(PUSH(ax));	// 95636 push    ax ;~ 28F0:3861
cs=0x28f0;eip=0x003862; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 95637 push    [bp+var_2] ;~ 28F0:3862
cs=0x28f0;eip=0x003865; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 95638 push    [bp+var_4] ;~ 28F0:3865
cs=0x28f0;eip=0x003868; 	R(CALLF(sub_10526,0));	// 95639 call    sub_10526 ;~ 28F0:3868
cs=0x28f0;eip=0x00386d; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 95640 mov     [bp+var_A], ax ;~ 28F0:386D
cs=0x28f0;eip=0x003870; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 95641 mov     [bp+var_8], dx ;~ 28F0:3870
cs=0x28f0;eip=0x003873; 	X(PUSH(dx));	// 95642 push    dx ;~ 28F0:3873
cs=0x28f0;eip=0x003874; 	X(PUSH(ax));	// 95643 push    ax ;~ 28F0:3874
cs=0x28f0;eip=0x003875; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95644 les     bx, [bp+arg_6] ;~ 28F0:3875
cs=0x28f0;eip=0x003878; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2DE))));	// 95645 mov     ax, es:[bx+2DEh] ;~ 28F0:3878
cs=0x28f0;eip=0x00387d; 	T(CWD);	// 95646 cwd ;~ 28F0:387D
cs=0x28f0;eip=0x00387e; 	X(PUSH(dx));	// 95647 push    dx ;~ 28F0:387E
cs=0x28f0;eip=0x00387f; 	X(PUSH(ax));	// 95648 push    ax ;~ 28F0:387F
cs=0x28f0;eip=0x003880; 	T(CWD);	// 95649 cwd ;~ 28F0:3880
cs=0x28f0;eip=0x003881; 	X(PUSH(dx));	// 95650 push    dx ;~ 28F0:3881
cs=0x28f0;eip=0x003882; 	X(PUSH(ax));	// 95651 push    ax ;~ 28F0:3882
cs=0x28f0;eip=0x003883; 	R(CALLF(sub_105c2,0));	// 95652 call    sub_105C2 ;~ 28F0:3883
cs=0x28f0;eip=0x003888; 	X(PUSH(dx));	// 95653 push    dx ;~ 28F0:3888
cs=0x28f0;eip=0x003889; 	X(PUSH(ax));	// 95654 push    ax ;~ 28F0:3889
cs=0x28f0;eip=0x00388a; 	R(CALLF(sub_105c2,0));	// 95655 call    sub_105C2 ;~ 28F0:388A
cs=0x28f0;eip=0x00388f; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 95656 mov     [bp+var_A], ax ;~ 28F0:388F
cs=0x28f0;eip=0x003892; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 95657 mov     [bp+var_8], dx ;~ 28F0:3892
cs=0x28f0;eip=0x003895; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95658 les     bx, [bp+arg_6] ;~ 28F0:3895
cs=0x28f0;eip=0x003898; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x29C))));	// 95659 mov     ax, es:[bx+29Ch] ;~ 28F0:3898
cs=0x28f0;eip=0x00389d; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x29E))));	// 95660 mov     dx, es:[bx+29Eh] ;~ 28F0:389D
cs=0x28f0;eip=0x0038a2; 	T(MOV(cl, 5));	// 95661 mov     cl, 5 ;~ 28F0:38A2
cs=0x28f0;eip=0x0038a4; 	R(CALLF(sub_10240,0));	// 95662 call    sub_10240 ;~ 28F0:38A4
cs=0x28f0;eip=0x0038a9; 	X(PUSH(ax));	// 95663 push    ax ;~ 28F0:38A9
cs=0x28f0;eip=0x0038aa; 	R(CALLF(sub_24cf8,0));	// 95664 call    sub_24CF8 ;~ 28F0:38AA
cs=0x28f0;eip=0x0038af; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 95665 mov     [bp+var_6], ax ;~ 28F0:38AF
cs=0x28f0;eip=0x0038b2; 	X(PUSH(ax));	// 95666 push    ax ;~ 28F0:38B2
cs=0x28f0;eip=0x0038b3; 	R(CALLF(sub_27c9e,0));	// 95667 call    sub_27C9E ;~ 28F0:38B3
cs=0x28f0;eip=0x0038b8; 	X(PUSH(dx));	// 95668 push    dx ;~ 28F0:38B8
cs=0x28f0;eip=0x0038b9; 	X(PUSH(ax));	// 95669 push    ax ;~ 28F0:38B9
cs=0x28f0;eip=0x0038ba; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 95670 mov     ax, [bp+var_A] ;~ 28F0:38BA
cs=0x28f0;eip=0x0038bd; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 95671 mov     dx, [bp+var_8] ;~ 28F0:38BD
cs=0x28f0;eip=0x0038c0; 	T(MOV(cl, 8));	// 95672 mov     cl, 8 ;~ 28F0:38C0
cs=0x28f0;eip=0x0038c2; 	R(CALLF(sub_10240,0));	// 95673 call    sub_10240 ;~ 28F0:38C2
cs=0x28f0;eip=0x0038c7; 	X(PUSH(dx));	// 95674 push    dx ;~ 28F0:38C7
cs=0x28f0;eip=0x0038c8; 	X(PUSH(ax));	// 95675 push    ax ;~ 28F0:38C8
cs=0x28f0;eip=0x0038c9; 	R(CALLF(sub_105c2,0));	// 95676 call    sub_105C2 ;~ 28F0:38C9
cs=0x28f0;eip=0x0038ce; 	T(MOV(cl, 8));	// 95677 mov     cl, 8 ;~ 28F0:38CE
cs=0x28f0;eip=0x0038d0; 	R(CALLF(sub_10240,0));	// 95678 call    sub_10240 ;~ 28F0:38D0
cs=0x28f0;eip=0x0038d5; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 95679 mov     [bp+var_A], ax ;~ 28F0:38D5
cs=0x28f0;eip=0x0038d8; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 95680 mov     [bp+var_8], dx ;~ 28F0:38D8
cs=0x28f0;eip=0x0038db; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95681 les     bx, [bp+arg_6] ;~ 28F0:38DB
cs=0x28f0;eip=0x0038de; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2BC))));	// 95682 mov     ax, es:[bx+2BCh] ;~ 28F0:38DE
cs=0x28f0;eip=0x0038e3; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2BE))));	// 95683 mov     dx, es:[bx+2BEh] ;~ 28F0:38E3
cs=0x28f0;eip=0x0038e8; 	T(MOV(cl, 8));	// 95684 mov     cl, 8 ;~ 28F0:38E8
cs=0x28f0;eip=0x0038ea; 	R(CALLF(sub_10240,0));	// 95685 call    sub_10240 ;~ 28F0:38EA
cs=0x28f0;eip=0x0038ef; 	X(PUSH(dx));	// 95686 push    dx ;~ 28F0:38EF
cs=0x28f0;eip=0x0038f0; 	X(PUSH(ax));	// 95687 push    ax ;~ 28F0:38F0
cs=0x28f0;eip=0x0038f1; 	T(ax = bp+var_a);	// 95688 lea     ax, [bp+var_A] ;~ 28F0:38F1
cs=0x28f0;eip=0x0038f4; 	X(PUSH(ax));	// 95689 push    ax ;~ 28F0:38F4
cs=0x28f0;eip=0x0038f5; 	R(CALLF(sub_10602,0));	// 95690 call    sub_10602 ;~ 28F0:38F5
cs=0x28f0;eip=0x0038fa; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 95691 mov     ax, [bp+var_A] ;~ 28F0:38FA
cs=0x28f0;eip=0x0038fd; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 95692 mov     dx, [bp+var_8] ;~ 28F0:38FD
cs=0x28f0;eip=0x003900; 	T(OR(dx, dx));	// 95693 or      dx, dx ;~ 28F0:3900
cs=0x28f0;eip=0x003902; 	R(JGE(loc_3adeb));	// 95694 jge     short loc_3ADEB ;~ 28F0:3902
cs=0x28f0;eip=0x003904; 	T(NEG(ax));	// 95695 neg     ax ;~ 28F0:3904
cs=0x28f0;eip=0x003906; 	T(ADC(dx, 0));	// 95696 adc     dx, 0 ;~ 28F0:3906
cs=0x28f0;eip=0x003909; 	T(NEG(dx));	// 95697 neg     dx ;~ 28F0:3909
loc_3adeb:
	// 10555 
cs=0x28f0;eip=0x00390b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 95700 mov     bx, [bp+arg_4] ;~ 28F0:390B
cs=0x28f0;eip=0x00390e; 	X(SUB(*(dw*)(raddr(ds,bx)), ax));	// 95701 sub     [bx], ax ;~ 28F0:390E
cs=0x28f0;eip=0x003910; 	X(SBB(*(dw*)(raddr(ds,bx+2)), dx));	// 95702 sbb     [bx+2], dx ;~ 28F0:3910
loc_3adf3:
	// 10556 
cs=0x28f0;eip=0x003913; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95706 les     bx, [bp+arg_6] ;~ 28F0:3913
cs=0x28f0;eip=0x003916; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x25E))));	// 95707 mov     ax, es:[bx+25Eh] ;~ 28F0:3916
cs=0x28f0;eip=0x00391b; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x260))));	// 95708 mov     dx, es:[bx+260h] ;~ 28F0:391B
cs=0x28f0;eip=0x003920; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 95709 mov     [bp+var_4], ax ;~ 28F0:3920
cs=0x28f0;eip=0x003923; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 95710 mov     [bp+var_2], dx ;~ 28F0:3923
cs=0x28f0;eip=0x003926; 	T(CMP(*(dw*)(raddr(es,bx+0x212)), 0));	// 95711 cmp     word ptr es:[bx+212h], 0 ;~ 28F0:3926
cs=0x28f0;eip=0x00392c; 	R(JZ(loc_3ae6f));	// 95712 jz      short loc_3AE6F ;~ 28F0:392C
cs=0x28f0;eip=0x00392e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x128))));	// 95713 mov     ax, es:[bx+128h] ;~ 28F0:392E
cs=0x28f0;eip=0x003933; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12A))));	// 95714 mov     dx, es:[bx+12Ah] ;~ 28F0:3933
cs=0x28f0;eip=0x003938; 	T(MOV(cl, 8));	// 95715 mov     cl, 8 ;~ 28F0:3938
cs=0x28f0;eip=0x00393a; 	R(CALLF(sub_10240,0));	// 95716 call    sub_10240 ;~ 28F0:393A
cs=0x28f0;eip=0x00393f; 	X(PUSH(dx));	// 95717 push    dx ;~ 28F0:393F
cs=0x28f0;eip=0x003940; 	X(PUSH(ax));	// 95718 push    ax ;~ 28F0:3940
cs=0x28f0;eip=0x003941; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 95719 mov     ax, [bp+var_4] ;~ 28F0:3941
cs=0x28f0;eip=0x003944; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 95720 mov     dx, [bp+var_2] ;~ 28F0:3944
cs=0x28f0;eip=0x003947; 	T(MOV(cl, 0x0B));	// 95721 mov     cl, 0Bh ;~ 28F0:3947
cs=0x28f0;eip=0x003949; 	R(CALLF(sub_10240,0));	// 95722 call    sub_10240 ;~ 28F0:3949
cs=0x28f0;eip=0x00394e; 	X(PUSH(dx));	// 95723 push    dx ;~ 28F0:394E
cs=0x28f0;eip=0x00394f; 	X(PUSH(ax));	// 95724 push    ax ;~ 28F0:394F
cs=0x28f0;eip=0x003950; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95725 les     bx, [bp+arg_6] ;~ 28F0:3950
cs=0x28f0;eip=0x003953; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 95726 mov     ax, es:[bx+120h] ;~ 28F0:3953
cs=0x28f0;eip=0x003958; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 95727 mov     dx, es:[bx+122h] ;~ 28F0:3958
cs=0x28f0;eip=0x00395d; 	T(MOV(cl, 8));	// 95728 mov     cl, 8 ;~ 28F0:395D
cs=0x28f0;eip=0x00395f; 	R(CALLF(sub_10240,0));	// 95729 call    sub_10240 ;~ 28F0:395F
cs=0x28f0;eip=0x003964; 	X(PUSH(dx));	// 95730 push    dx ;~ 28F0:3964
cs=0x28f0;eip=0x003965; 	X(PUSH(ax));	// 95731 push    ax ;~ 28F0:3965
cs=0x28f0;eip=0x003966; 	R(CALLF(sub_105c2,0));	// 95732 call    sub_105C2 ;~ 28F0:3966
cs=0x28f0;eip=0x00396b; 	X(PUSH(dx));	// 95733 push    dx ;~ 28F0:396B
cs=0x28f0;eip=0x00396c; 	X(PUSH(ax));	// 95734 push    ax ;~ 28F0:396C
cs=0x28f0;eip=0x00396d; 	R(CALLF(sub_10526,0));	// 95735 call    sub_10526 ;~ 28F0:396D
cs=0x28f0;eip=0x003972; 	T(MOV(dh, dl));	// 95736 mov     dh, dl ;~ 28F0:3972
cs=0x28f0;eip=0x003974; 	T(MOV(dl, ah));	// 95737 mov     dl, ah ;~ 28F0:3974
cs=0x28f0;eip=0x003976; 	T(MOV(ah, al));	// 95738 mov     ah, al ;~ 28F0:3976
cs=0x28f0;eip=0x003978; 	T(SUB(al, al));	// 95739 sub     al, al ;~ 28F0:3978
cs=0x28f0;eip=0x00397a; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 95740 mov     [bp+var_A], ax ;~ 28F0:397A
cs=0x28f0;eip=0x00397d; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 95741 mov     [bp+var_8], dx ;~ 28F0:397D
cs=0x28f0;eip=0x003980; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 95742 mov     bx, [bp+arg_4] ;~ 28F0:3980
cs=0x28f0;eip=0x003983; 	T(NEG(ax));	// 95743 neg     ax ;~ 28F0:3983
cs=0x28f0;eip=0x003985; 	T(ADC(dx, 0));	// 95744 adc     dx, 0 ;~ 28F0:3985
cs=0x28f0;eip=0x003988; 	T(NEG(dx));	// 95745 neg     dx ;~ 28F0:3988
cs=0x28f0;eip=0x00398a; 	X(ADD(*(dw*)(raddr(ds,bx)), ax));	// 95746 add     [bx], ax ;~ 28F0:398A
cs=0x28f0;eip=0x00398c; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 95747 adc     [bx+2], dx ;~ 28F0:398C
loc_3ae6f:
	// 10557 
cs=0x28f0;eip=0x00398f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95750 les     bx, [bp+arg_6] ;~ 28F0:398F
cs=0x28f0;eip=0x003992; 	T(CMP(*(raddr(es,bx+0x216)), 0));	// 95751 cmp     byte ptr es:[bx+216h], 0 ;~ 28F0:3992
cs=0x28f0;eip=0x003998; 	R(JZ(loc_3aedb));	// 95752 jz      short loc_3AEDB ;~ 28F0:3998
cs=0x28f0;eip=0x00399a; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x128))));	// 95753 mov     ax, es:[bx+128h] ;~ 28F0:399A
cs=0x28f0;eip=0x00399f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12A))));	// 95754 mov     dx, es:[bx+12Ah] ;~ 28F0:399F
cs=0x28f0;eip=0x0039a4; 	T(MOV(cl, 8));	// 95755 mov     cl, 8 ;~ 28F0:39A4
cs=0x28f0;eip=0x0039a6; 	R(CALLF(sub_10240,0));	// 95756 call    sub_10240 ;~ 28F0:39A6
cs=0x28f0;eip=0x0039ab; 	X(PUSH(dx));	// 95757 push    dx ;~ 28F0:39AB
cs=0x28f0;eip=0x0039ac; 	X(PUSH(ax));	// 95758 push    ax ;~ 28F0:39AC
cs=0x28f0;eip=0x0039ad; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 95759 mov     ax, [bp+var_4] ;~ 28F0:39AD
cs=0x28f0;eip=0x0039b0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 95760 mov     dx, [bp+var_2] ;~ 28F0:39B0
cs=0x28f0;eip=0x0039b3; 	T(MOV(cl, 9));	// 95761 mov     cl, 9 ;~ 28F0:39B3
cs=0x28f0;eip=0x0039b5; 	R(CALLF(sub_10240,0));	// 95762 call    sub_10240 ;~ 28F0:39B5
cs=0x28f0;eip=0x0039ba; 	X(PUSH(dx));	// 95763 push    dx ;~ 28F0:39BA
cs=0x28f0;eip=0x0039bb; 	X(PUSH(ax));	// 95764 push    ax ;~ 28F0:39BB
cs=0x28f0;eip=0x0039bc; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95765 les     bx, [bp+arg_6] ;~ 28F0:39BC
cs=0x28f0;eip=0x0039bf; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 95766 mov     ax, es:[bx+120h] ;~ 28F0:39BF
cs=0x28f0;eip=0x0039c4; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 95767 mov     dx, es:[bx+122h] ;~ 28F0:39C4
cs=0x28f0;eip=0x0039c9; 	T(MOV(cl, 8));	// 95768 mov     cl, 8 ;~ 28F0:39C9
cs=0x28f0;eip=0x0039cb; 	R(CALLF(sub_10240,0));	// 95769 call    sub_10240 ;~ 28F0:39CB
cs=0x28f0;eip=0x0039d0; 	X(PUSH(dx));	// 95770 push    dx ;~ 28F0:39D0
cs=0x28f0;eip=0x0039d1; 	X(PUSH(ax));	// 95771 push    ax ;~ 28F0:39D1
cs=0x28f0;eip=0x0039d2; 	R(CALLF(sub_105c2,0));	// 95772 call    sub_105C2 ;~ 28F0:39D2
cs=0x28f0;eip=0x0039d7; 	X(PUSH(dx));	// 95773 push    dx ;~ 28F0:39D7
cs=0x28f0;eip=0x0039d8; 	X(PUSH(ax));	// 95774 push    ax ;~ 28F0:39D8
cs=0x28f0;eip=0x0039d9; 	R(CALLF(sub_10526,0));	// 95775 call    sub_10526 ;~ 28F0:39D9
cs=0x28f0;eip=0x0039de; 	T(MOV(dh, dl));	// 95776 mov     dh, dl ;~ 28F0:39DE
cs=0x28f0;eip=0x0039e0; 	T(MOV(dl, ah));	// 95777 mov     dl, ah ;~ 28F0:39E0
cs=0x28f0;eip=0x0039e2; 	T(MOV(ah, al));	// 95778 mov     ah, al ;~ 28F0:39E2
cs=0x28f0;eip=0x0039e4; 	T(SUB(al, al));	// 95779 sub     al, al ;~ 28F0:39E4
cs=0x28f0;eip=0x0039e6; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 95780 mov     [bp+var_A], ax ;~ 28F0:39E6
cs=0x28f0;eip=0x0039e9; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 95781 mov     [bp+var_8], dx ;~ 28F0:39E9
cs=0x28f0;eip=0x0039ec; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 95782 mov     bx, [bp+arg_4] ;~ 28F0:39EC
cs=0x28f0;eip=0x0039ef; 	T(NEG(ax));	// 95783 neg     ax ;~ 28F0:39EF
cs=0x28f0;eip=0x0039f1; 	T(ADC(dx, 0));	// 95784 adc     dx, 0 ;~ 28F0:39F1
cs=0x28f0;eip=0x0039f4; 	T(NEG(dx));	// 95785 neg     dx ;~ 28F0:39F4
cs=0x28f0;eip=0x0039f6; 	X(ADD(*(dw*)(raddr(ds,bx)), ax));	// 95786 add     [bx], ax ;~ 28F0:39F6
cs=0x28f0;eip=0x0039f8; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 95787 adc     [bx+2], dx ;~ 28F0:39F8
loc_3aedb:
	// 10558 
cs=0x28f0;eip=0x0039fb; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95790 les     bx, [bp+arg_6] ;~ 28F0:39FB
cs=0x28f0;eip=0x0039fe; 	T(CMP(*(raddr(es,bx+0x215)), 0));	// 95791 cmp     byte ptr es:[bx+215h], 0 ;~ 28F0:39FE
cs=0x28f0;eip=0x003a04; 	R(JNZ(loc_3aee9));	// 95792 jnz     short loc_3AEE9 ;~ 28F0:3A04
cs=0x28f0;eip=0x003a06; 	R(JMP(loc_3af71));	// 95793 jmp     loc_3AF71 ;~ 28F0:3A06
loc_3aee9:
	// 10559 
cs=0x28f0;eip=0x003a09; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x128))));	// 95797 mov     ax, es:[bx+128h] ;~ 28F0:3A09
cs=0x28f0;eip=0x003a0e; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12A))));	// 95798 mov     dx, es:[bx+12Ah] ;~ 28F0:3A0E
cs=0x28f0;eip=0x003a13; 	T(MOV(cl, 8));	// 95799 mov     cl, 8 ;~ 28F0:3A13
cs=0x28f0;eip=0x003a15; 	R(CALLF(sub_10240,0));	// 95800 call    sub_10240 ;~ 28F0:3A15
cs=0x28f0;eip=0x003a1a; 	X(PUSH(dx));	// 95801 push    dx ;~ 28F0:3A1A
cs=0x28f0;eip=0x003a1b; 	X(PUSH(ax));	// 95802 push    ax ;~ 28F0:3A1B
cs=0x28f0;eip=0x003a1c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 95803 mov     ax, [bp+var_4] ;~ 28F0:3A1C
cs=0x28f0;eip=0x003a1f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 95804 mov     dx, [bp+var_2] ;~ 28F0:3A1F
cs=0x28f0;eip=0x003a22; 	T(MOV(cl, 2));	// 95805 mov     cl, 2 ;~ 28F0:3A22
cs=0x28f0;eip=0x003a24; 	R(CALLF(sub_105f6,0));	// 95806 call    sub_105F6 ;~ 28F0:3A24
cs=0x28f0;eip=0x003a29; 	T(MOV(cl, 8));	// 95807 mov     cl, 8 ;~ 28F0:3A29
cs=0x28f0;eip=0x003a2b; 	R(CALLF(sub_10240,0));	// 95808 call    sub_10240 ;~ 28F0:3A2B
cs=0x28f0;eip=0x003a30; 	X(PUSH(dx));	// 95809 push    dx ;~ 28F0:3A30
cs=0x28f0;eip=0x003a31; 	X(PUSH(ax));	// 95810 push    ax ;~ 28F0:3A31
cs=0x28f0;eip=0x003a32; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95811 les     bx, [bp+arg_6] ;~ 28F0:3A32
cs=0x28f0;eip=0x003a35; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 95812 mov     ax, es:[bx+120h] ;~ 28F0:3A35
cs=0x28f0;eip=0x003a3a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 95813 mov     dx, es:[bx+122h] ;~ 28F0:3A3A
cs=0x28f0;eip=0x003a3f; 	T(MOV(cl, 8));	// 95814 mov     cl, 8 ;~ 28F0:3A3F
cs=0x28f0;eip=0x003a41; 	R(CALLF(sub_10240,0));	// 95815 call    sub_10240 ;~ 28F0:3A41
cs=0x28f0;eip=0x003a46; 	X(PUSH(dx));	// 95816 push    dx ;~ 28F0:3A46
cs=0x28f0;eip=0x003a47; 	X(PUSH(ax));	// 95817 push    ax ;~ 28F0:3A47
cs=0x28f0;eip=0x003a48; 	R(CALLF(sub_105c2,0));	// 95818 call    sub_105C2 ;~ 28F0:3A48
cs=0x28f0;eip=0x003a4d; 	X(PUSH(dx));	// 95819 push    dx ;~ 28F0:3A4D
cs=0x28f0;eip=0x003a4e; 	X(PUSH(ax));	// 95820 push    ax ;~ 28F0:3A4E
cs=0x28f0;eip=0x003a4f; 	R(CALLF(sub_10526,0));	// 95821 call    sub_10526 ;~ 28F0:3A4F
cs=0x28f0;eip=0x003a54; 	T(MOV(dh, dl));	// 95822 mov     dh, dl ;~ 28F0:3A54
cs=0x28f0;eip=0x003a56; 	T(MOV(dl, ah));	// 95823 mov     dl, ah ;~ 28F0:3A56
cs=0x28f0;eip=0x003a58; 	T(MOV(ah, al));	// 95824 mov     ah, al ;~ 28F0:3A58
cs=0x28f0;eip=0x003a5a; 	T(SUB(al, al));	// 95825 sub     al, al ;~ 28F0:3A5A
cs=0x28f0;eip=0x003a5c; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 95826 mov     [bp+var_A], ax ;~ 28F0:3A5C
cs=0x28f0;eip=0x003a5f; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 95827 mov     [bp+var_8], dx ;~ 28F0:3A5F
cs=0x28f0;eip=0x003a62; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 95828 mov     bx, [bp+arg_4] ;~ 28F0:3A62
cs=0x28f0;eip=0x003a65; 	T(NEG(ax));	// 95829 neg     ax ;~ 28F0:3A65
cs=0x28f0;eip=0x003a67; 	T(ADC(dx, 0));	// 95830 adc     dx, 0 ;~ 28F0:3A67
cs=0x28f0;eip=0x003a6a; 	T(NEG(dx));	// 95831 neg     dx ;~ 28F0:3A6A
cs=0x28f0;eip=0x003a6c; 	X(ADD(*(dw*)(raddr(ds,bx)), ax));	// 95832 add     [bx], ax ;~ 28F0:3A6C
cs=0x28f0;eip=0x003a6e; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 95833 adc     [bx+2], dx ;~ 28F0:3A6E
cs=0x28f0;eip=0x003a71; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95834 les     bx, [bp+arg_6] ;~ 28F0:3A71
cs=0x28f0;eip=0x003a74; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 1));	// 95835 cmp     word ptr es:[bx+332h], 1 ;~ 28F0:3A74
cs=0x28f0;eip=0x003a7a; 	R(JNZ(loc_3af71));	// 95836 jnz     short loc_3AF71 ;~ 28F0:3A7A
cs=0x28f0;eip=0x003a7c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 95837 mov     bx, [bp+arg_4] ;~ 28F0:3A7C
cs=0x28f0;eip=0x003a7f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 95838 mov     ax, [bp+var_4] ;~ 28F0:3A7F
cs=0x28f0;eip=0x003a82; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 95839 mov     dx, [bp+var_2] ;~ 28F0:3A82
cs=0x28f0;eip=0x003a85; 	T(NEG(ax));	// 95840 neg     ax ;~ 28F0:3A85
cs=0x28f0;eip=0x003a87; 	T(ADC(dx, 0));	// 95841 adc     dx, 0 ;~ 28F0:3A87
cs=0x28f0;eip=0x003a8a; 	T(NEG(dx));	// 95842 neg     dx ;~ 28F0:3A8A
cs=0x28f0;eip=0x003a8c; 	X(ADD(*(dw*)(raddr(ds,bx)), ax));	// 95843 add     [bx], ax ;~ 28F0:3A8C
cs=0x28f0;eip=0x003a8e; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 95844 adc     [bx+2], dx ;~ 28F0:3A8E
loc_3af71:
	// 10560 
cs=0x28f0;eip=0x003a91; 	T(MOV(sp, bp));	// 95848 mov     sp, bp ;~ 28F0:3A91
cs=0x28f0;eip=0x003a93; 	X(POP(bp));	// 95849 pop     bp ;~ 28F0:3A93
cs=0x28f0;eip=0x003a94; 	R(RETN(0x0A));	// 95850 retn    0Ah ;~ 28F0:3A94
sub_3af77:
	// 95858 
#undef var_8
#define var_8 -8
	// 95860 var_8           = word ptr -8 ;~ 28F0:3A97
#undef var_6
#define var_6 -6
	// 95861 var_6           = word ptr -6 ;~ 28F0:3A97
#undef var_4
#define var_4 -4
	// 95862 var_4           = word ptr -4 ;~ 28F0:3A97
#undef var_2
#define var_2 -2
	// 95863 var_2           = word ptr -2 ;~ 28F0:3A97
#undef arg_0
#define arg_0 4
	// 95864 arg_0           = word ptr  4 ;~ 28F0:3A97
#undef arg_2
#define arg_2 6
	// 95865 arg_2           = word ptr  6 ;~ 28F0:3A97
#undef arg_4
#define arg_4 8
	// 95866 arg_4           = word ptr  8 ;~ 28F0:3A97
#undef arg_6
#define arg_6 0x0A
	// 95867 arg_6           = dword ptr  0Ah ;~ 28F0:3A97
cs=0x28f0;eip=0x003a97; 	X(PUSH(bp));	// 95869 push    bp ;~ 28F0:3A97
cs=0x28f0;eip=0x003a98; 	T(MOV(bp, sp));	// 95870 mov     bp, sp ;~ 28F0:3A98
cs=0x28f0;eip=0x003a9a; 	T(SUB(sp, 8));	// 95871 sub     sp, 8 ;~ 28F0:3A9A
cs=0x28f0;eip=0x003a9d; 	X(PUSH(di));	// 95872 push    di ;~ 28F0:3A9D
cs=0x28f0;eip=0x003a9e; 	X(PUSH(si));	// 95873 push    si ;~ 28F0:3A9E
cs=0x28f0;eip=0x003a9f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_6+2)))));	// 95874 push    word ptr [bp+arg_6+2] ;~ 28F0:3A9F
cs=0x28f0;eip=0x003aa2; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_6)))));	// 95875 push    word ptr [bp+arg_6] ;~ 28F0:3AA2
cs=0x28f0;eip=0x003aa5; 	R(CALL(sub_3a728,0));	// 95876 call    sub_3A728 ;~ 28F0:3AA5
cs=0x28f0;eip=0x003aa8; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 95877 mov     [bp+var_4], ax ;~ 28F0:3AA8
cs=0x28f0;eip=0x003aab; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 95878 mov     [bp+var_2], dx ;~ 28F0:3AAB
cs=0x28f0;eip=0x003aae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 95879 mov     ax, [bp+arg_0] ;~ 28F0:3AAE
cs=0x28f0;eip=0x003ab1; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 95880 mov     dx, [bp+arg_2] ;~ 28F0:3AB1
cs=0x28f0;eip=0x003ab4; 	T(MOV(cl, 8));	// 95881 mov     cl, 8 ;~ 28F0:3AB4
cs=0x28f0;eip=0x003ab6; 	R(CALLF(sub_10240,0));	// 95882 call    sub_10240 ;~ 28F0:3AB6
cs=0x28f0;eip=0x003abb; 	T(CMP(dx, *(dw*)(raddr(ss,bp+var_2))));	// 95883 cmp     dx, [bp+var_2] ;~ 28F0:3ABB
cs=0x28f0;eip=0x003abe; 	R(JG(loc_3afb2));	// 95884 jg      short loc_3AFB2 ;~ 28F0:3ABE
cs=0x28f0;eip=0x003ac0; 	R(JL(loc_3afa7));	// 95885 jl      short loc_3AFA7 ;~ 28F0:3AC0
cs=0x28f0;eip=0x003ac2; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4))));	// 95886 cmp     ax, [bp+var_4] ;~ 28F0:3AC2
cs=0x28f0;eip=0x003ac5; 	R(JNC(loc_3afb2));	// 95887 jnb     short loc_3AFB2 ;~ 28F0:3AC5
loc_3afa7:
	// 10561 
cs=0x28f0;eip=0x003ac7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 95890 mov     ax, [bp+var_4] ;~ 28F0:3AC7
cs=0x28f0;eip=0x003aca; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_2))));	// 95891 or      ax, [bp+var_2] ;~ 28F0:3ACA
cs=0x28f0;eip=0x003acd; 	R(JZ(loc_3afb2));	// 95892 jz      short loc_3AFB2 ;~ 28F0:3ACD
cs=0x28f0;eip=0x003acf; 	R(JMP(loc_3b0e6));	// 95893 jmp     loc_3B0E6 ;~ 28F0:3ACF
loc_3afb2:
	// 10562 
cs=0x28f0;eip=0x003ad2; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 95898 cmp     [bp+var_2], 0 ;~ 28F0:3AD2
cs=0x28f0;eip=0x003ad6; 	R(JL(loc_3aff9));	// 95899 jl      short loc_3AFF9 ;~ 28F0:3AD6
cs=0x28f0;eip=0x003ad8; 	R(JG(loc_3afc0));	// 95900 jg      short loc_3AFC0 ;~ 28F0:3AD8
cs=0x28f0;eip=0x003ada; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 95901 cmp     [bp+var_4], 0 ;~ 28F0:3ADA
cs=0x28f0;eip=0x003ade; 	R(JZ(loc_3aff9));	// 95902 jz      short loc_3AFF9 ;~ 28F0:3ADE
loc_3afc0:
	// 10563 
cs=0x28f0;eip=0x003ae0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 95905 push    [bp+var_2] ;~ 28F0:3AE0
cs=0x28f0;eip=0x003ae3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 95906 push    [bp+var_4] ;~ 28F0:3AE3
cs=0x28f0;eip=0x003ae6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 95907 mov     ax, [bp+arg_0] ;~ 28F0:3AE6
cs=0x28f0;eip=0x003ae9; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 95908 mov     dx, [bp+arg_2] ;~ 28F0:3AE9
cs=0x28f0;eip=0x003aec; 	T(MOV(cl, 8));	// 95909 mov     cl, 8 ;~ 28F0:3AEC
cs=0x28f0;eip=0x003aee; 	R(CALLF(sub_10240,0));	// 95910 call    sub_10240 ;~ 28F0:3AEE
cs=0x28f0;eip=0x003af3; 	X(PUSH(dx));	// 95911 push    dx ;~ 28F0:3AF3
cs=0x28f0;eip=0x003af4; 	X(PUSH(ax));	// 95912 push    ax ;~ 28F0:3AF4
cs=0x28f0;eip=0x003af5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95913 les     bx, [bp+arg_6] ;~ 28F0:3AF5
cs=0x28f0;eip=0x003af8; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x25E))));	// 95914 mov     ax, es:[bx+25Eh] ;~ 28F0:3AF8
cs=0x28f0;eip=0x003afd; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x260))));	// 95915 mov     dx, es:[bx+260h] ;~ 28F0:3AFD
cs=0x28f0;eip=0x003b02; 	T(MOV(cl, 8));	// 95916 mov     cl, 8 ;~ 28F0:3B02
cs=0x28f0;eip=0x003b04; 	R(CALLF(sub_10240,0));	// 95917 call    sub_10240 ;~ 28F0:3B04
cs=0x28f0;eip=0x003b09; 	X(PUSH(dx));	// 95918 push    dx ;~ 28F0:3B09
cs=0x28f0;eip=0x003b0a; 	X(PUSH(ax));	// 95919 push    ax ;~ 28F0:3B0A
cs=0x28f0;eip=0x003b0b; 	R(CALLF(sub_105c2,0));	// 95920 call    sub_105C2 ;~ 28F0:3B0B
cs=0x28f0;eip=0x003b10; 	X(PUSH(dx));	// 95921 push    dx ;~ 28F0:3B10
cs=0x28f0;eip=0x003b11; 	X(PUSH(ax));	// 95922 push    ax ;~ 28F0:3B11
cs=0x28f0;eip=0x003b12; 	R(CALLF(sub_10526,0));	// 95923 call    sub_10526 ;~ 28F0:3B12
cs=0x28f0;eip=0x003b17; 	R(JMP(loc_3b00d));	// 95924 jmp     short loc_3B00D ;~ 28F0:3B17
loc_3aff9:
	// 10564 
cs=0x28f0;eip=0x003b19; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95929 les     bx, [bp+arg_6] ;~ 28F0:3B19
cs=0x28f0;eip=0x003b1c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x25E))));	// 95930 mov     ax, es:[bx+25Eh] ;~ 28F0:3B1C
cs=0x28f0;eip=0x003b21; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x260))));	// 95931 mov     dx, es:[bx+260h] ;~ 28F0:3B21
cs=0x28f0;eip=0x003b26; 	T(MOV(cl, 9));	// 95932 mov     cl, 9 ;~ 28F0:3B26
cs=0x28f0;eip=0x003b28; 	R(CALLF(sub_10240,0));	// 95933 call    sub_10240 ;~ 28F0:3B28
loc_3b00d:
	// 10565 
cs=0x28f0;eip=0x003b2d; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 95936 mov     [bp+var_8], ax ;~ 28F0:3B2D
cs=0x28f0;eip=0x003b30; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 95937 mov     [bp+var_6], dx ;~ 28F0:3B30
cs=0x28f0;eip=0x003b33; 	T(MOV(cl, 8));	// 95938 mov     cl, 8 ;~ 28F0:3B33
cs=0x28f0;eip=0x003b35; 	R(CALLF(sub_10240,0));	// 95939 call    sub_10240 ;~ 28F0:3B35
cs=0x28f0;eip=0x003b3a; 	X(PUSH(dx));	// 95940 push    dx ;~ 28F0:3B3A
cs=0x28f0;eip=0x003b3b; 	X(PUSH(ax));	// 95941 push    ax ;~ 28F0:3B3B
cs=0x28f0;eip=0x003b3c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95942 les     bx, [bp+arg_6] ;~ 28F0:3B3C
cs=0x28f0;eip=0x003b3f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2EA))));	// 95943 mov     ax, es:[bx+2EAh] ;~ 28F0:3B3F
cs=0x28f0;eip=0x003b44; 	T(CWD);	// 95944 cwd ;~ 28F0:3B44
cs=0x28f0;eip=0x003b45; 	X(PUSH(dx));	// 95945 push    dx ;~ 28F0:3B45
cs=0x28f0;eip=0x003b46; 	X(PUSH(ax));	// 95946 push    ax ;~ 28F0:3B46
cs=0x28f0;eip=0x003b47; 	R(CALLF(sub_105c2,0));	// 95947 call    sub_105C2 ;~ 28F0:3B47
cs=0x28f0;eip=0x003b4c; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 95948 mov     [bp+var_8], ax ;~ 28F0:3B4C
cs=0x28f0;eip=0x003b4f; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 95949 mov     [bp+var_6], dx ;~ 28F0:3B4F
cs=0x28f0;eip=0x003b52; 	T(MOV(cl, 8));	// 95950 mov     cl, 8 ;~ 28F0:3B52
cs=0x28f0;eip=0x003b54; 	R(CALLF(sub_10240,0));	// 95951 call    sub_10240 ;~ 28F0:3B54
cs=0x28f0;eip=0x003b59; 	X(PUSH(dx));	// 95952 push    dx ;~ 28F0:3B59
cs=0x28f0;eip=0x003b5a; 	X(PUSH(ax));	// 95953 push    ax ;~ 28F0:3B5A
cs=0x28f0;eip=0x003b5b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95954 les     bx, [bp+arg_6] ;~ 28F0:3B5B
cs=0x28f0;eip=0x003b5e; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E4))));	// 95955 push    word ptr es:[bx+2E4h] ;~ 28F0:3B5E
cs=0x28f0;eip=0x003b63; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E2))));	// 95956 push    word ptr es:[bx+2E2h] ;~ 28F0:3B63
cs=0x28f0;eip=0x003b68; 	R(CALLF(sub_105c2,0));	// 95957 call    sub_105C2 ;~ 28F0:3B68
cs=0x28f0;eip=0x003b6d; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 95958 mov     [bp+var_8], ax ;~ 28F0:3B6D
cs=0x28f0;eip=0x003b70; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 95959 mov     [bp+var_6], dx ;~ 28F0:3B70
cs=0x28f0;eip=0x003b73; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 95960 cmp     [bp+var_2], 0 ;~ 28F0:3B73
cs=0x28f0;eip=0x003b77; 	R(JL(loc_3b0c8));	// 95961 jl      short loc_3B0C8 ;~ 28F0:3B77
cs=0x28f0;eip=0x003b79; 	R(JG(loc_3b061));	// 95962 jg      short loc_3B061 ;~ 28F0:3B79
cs=0x28f0;eip=0x003b7b; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 95963 cmp     [bp+var_4], 0 ;~ 28F0:3B7B
cs=0x28f0;eip=0x003b7f; 	R(JZ(loc_3b0c8));	// 95964 jz      short loc_3B0C8 ;~ 28F0:3B7F
loc_3b061:
	// 10566 
cs=0x28f0;eip=0x003b81; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95967 les     bx, [bp+arg_6] ;~ 28F0:3B81
cs=0x28f0;eip=0x003b84; 	T(CMP(*(raddr(es,bx+0x216)), 0));	// 95968 cmp     byte ptr es:[bx+216h], 0 ;~ 28F0:3B84
cs=0x28f0;eip=0x003b8a; 	R(JZ(loc_3b07c));	// 95969 jz      short loc_3B07C ;~ 28F0:3B8A
cs=0x28f0;eip=0x003b8c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 95970 mov     ax, [bp+var_8] ;~ 28F0:3B8C
cs=0x28f0;eip=0x003b8f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 95971 mov     dx, [bp+var_6] ;~ 28F0:3B8F
cs=0x28f0;eip=0x003b92; 	T(SAR(dx, 1));	// 95972 sar     dx, 1 ;~ 28F0:3B92
cs=0x28f0;eip=0x003b94; 	T(RCR(ax, 1));	// 95973 rcr     ax, 1 ;~ 28F0:3B94
cs=0x28f0;eip=0x003b96; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), ax));	// 95974 add     [bp+var_8], ax ;~ 28F0:3B96
cs=0x28f0;eip=0x003b99; 	X(ADC(*(dw*)(raddr(ss,bp+var_6)), dx));	// 95975 adc     [bp+var_6], dx ;~ 28F0:3B99
loc_3b07c:
	// 10567 
cs=0x28f0;eip=0x003b9c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x25E))));	// 95978 mov     ax, es:[bx+25Eh] ;~ 28F0:3B9C
cs=0x28f0;eip=0x003ba1; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x260))));	// 95979 mov     dx, es:[bx+260h] ;~ 28F0:3BA1
cs=0x28f0;eip=0x003ba6; 	T(MOV(cl, 8));	// 95980 mov     cl, 8 ;~ 28F0:3BA6
cs=0x28f0;eip=0x003ba8; 	R(CALLF(sub_10240,0));	// 95981 call    sub_10240 ;~ 28F0:3BA8
cs=0x28f0;eip=0x003bad; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95982 les     bx, [bp+arg_6] ;~ 28F0:3BAD
cs=0x28f0;eip=0x003bb0; 	T(MOV(cx, ax));	// 95983 mov     cx, ax ;~ 28F0:3BB0
cs=0x28f0;eip=0x003bb2; 	T(MOV(si, dx));	// 95984 mov     si, dx ;~ 28F0:3BB2
cs=0x28f0;eip=0x003bb4; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x25E))));	// 95985 mov     ax, es:[bx+25Eh] ;~ 28F0:3BB4
cs=0x28f0;eip=0x003bb9; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x260))));	// 95986 mov     dx, es:[bx+260h] ;~ 28F0:3BB9
cs=0x28f0;eip=0x003bbe; 	T(MOV(bx, cx));	// 95987 mov     bx, cx ;~ 28F0:3BBE
cs=0x28f0;eip=0x003bc0; 	T(MOV(cl, 8));	// 95988 mov     cl, 8 ;~ 28F0:3BC0
cs=0x28f0;eip=0x003bc2; 	T(MOV(di, bx));	// 95989 mov     di, bx ;~ 28F0:3BC2
cs=0x28f0;eip=0x003bc4; 	R(CALLF(sub_10240,0));	// 95990 call    sub_10240 ;~ 28F0:3BC4
cs=0x28f0;eip=0x003bc9; 	T(MOV(cx, ax));	// 95991 mov     cx, ax ;~ 28F0:3BC9
cs=0x28f0;eip=0x003bcb; 	T(MOV(bx, dx));	// 95992 mov     bx, dx ;~ 28F0:3BCB
cs=0x28f0;eip=0x003bcd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 95993 mov     ax, [bp+var_8] ;~ 28F0:3BCD
cs=0x28f0;eip=0x003bd0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 95994 mov     dx, [bp+var_6] ;~ 28F0:3BD0
cs=0x28f0;eip=0x003bd3; 	T(SUB(ax, cx));	// 95995 sub     ax, cx ;~ 28F0:3BD3
cs=0x28f0;eip=0x003bd5; 	T(SBB(dx, bx));	// 95996 sbb     dx, bx ;~ 28F0:3BD5
cs=0x28f0;eip=0x003bd7; 	T(MOV(cl, 4));	// 95997 mov     cl, 4 ;~ 28F0:3BD7
cs=0x28f0;eip=0x003bd9; 	R(CALLF(sub_10240,0));	// 95998 call    sub_10240 ;~ 28F0:3BD9
cs=0x28f0;eip=0x003bde; 	T(ADD(ax, di));	// 95999 add     ax, di ;~ 28F0:3BDE
cs=0x28f0;eip=0x003be0; 	T(ADC(dx, si));	// 96000 adc     dx, si ;~ 28F0:3BE0
cs=0x28f0;eip=0x003be2; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 96001 mov     [bp+var_8], ax ;~ 28F0:3BE2
cs=0x28f0;eip=0x003be5; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 96002 mov     [bp+var_6], dx ;~ 28F0:3BE5
loc_3b0c8:
	// 10568 
cs=0x28f0;eip=0x003be8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 96006 mov     ax, [bp+var_8] ;~ 28F0:3BE8
cs=0x28f0;eip=0x003beb; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 96007 mov     dx, [bp+var_6] ;~ 28F0:3BEB
cs=0x28f0;eip=0x003bee; 	T(MOV(dh, dl));	// 96008 mov     dh, dl ;~ 28F0:3BEE
cs=0x28f0;eip=0x003bf0; 	T(MOV(dl, ah));	// 96009 mov     dl, ah ;~ 28F0:3BF0
cs=0x28f0;eip=0x003bf2; 	T(MOV(ah, al));	// 96010 mov     ah, al ;~ 28F0:3BF2
cs=0x28f0;eip=0x003bf4; 	T(SUB(al, al));	// 96011 sub     al, al ;~ 28F0:3BF4
cs=0x28f0;eip=0x003bf6; 	T(NEG(ax));	// 96012 neg     ax ;~ 28F0:3BF6
cs=0x28f0;eip=0x003bf8; 	T(ADC(dx, 0));	// 96013 adc     dx, 0 ;~ 28F0:3BF8
cs=0x28f0;eip=0x003bfb; 	T(NEG(dx));	// 96014 neg     dx ;~ 28F0:3BFB
cs=0x28f0;eip=0x003bfd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 96015 mov     bx, [bp+arg_4] ;~ 28F0:3BFD
cs=0x28f0;eip=0x003c00; 	X(ADD(*(dw*)(raddr(ds,bx+8)), ax));	// 96016 add     [bx+8], ax ;~ 28F0:3C00
cs=0x28f0;eip=0x003c03; 	X(ADC(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 96017 adc     [bx+0Ah], dx ;~ 28F0:3C03
loc_3b0e6:
	// 10569 
cs=0x28f0;eip=0x003c06; 	X(POP(si));	// 96020 pop     si ;~ 28F0:3C06
cs=0x28f0;eip=0x003c07; 	X(POP(di));	// 96021 pop     di ;~ 28F0:3C07
cs=0x28f0;eip=0x003c08; 	T(MOV(sp, bp));	// 96022 mov     sp, bp ;~ 28F0:3C08
cs=0x28f0;eip=0x003c0a; 	X(POP(bp));	// 96023 pop     bp ;~ 28F0:3C0A
cs=0x28f0;eip=0x003c0b; 	R(RETN(0x0A));	// 96024 retn    0Ah ;~ 28F0:3C0B
sub_3b0ee:
	// 96032 
#undef var_c
#define var_c -0x0C
	// 96034 var_C           = word ptr -0Ch ;~ 28F0:3C0E
#undef var_a
#define var_a -0x0A
	// 96035 var_A           = word ptr -0Ah ;~ 28F0:3C0E
#undef var_8
#define var_8 -8
	// 96036 var_8           = word ptr -8 ;~ 28F0:3C0E
#undef var_6
#define var_6 -6
	// 96037 var_6           = word ptr -6 ;~ 28F0:3C0E
#undef var_4
#define var_4 -4
	// 96038 var_4           = word ptr -4 ;~ 28F0:3C0E
#undef var_2
#define var_2 -2
	// 96039 var_2           = word ptr -2 ;~ 28F0:3C0E
#undef arg_0
#define arg_0 4
	// 96040 arg_0           = word ptr  4 ;~ 28F0:3C0E
#undef arg_2
#define arg_2 6
	// 96041 arg_2           = dword ptr  6 ;~ 28F0:3C0E
cs=0x28f0;eip=0x003c0e; 	X(PUSH(bp));	// 96043 push    bp ;~ 28F0:3C0E
cs=0x28f0;eip=0x003c0f; 	T(MOV(bp, sp));	// 96044 mov     bp, sp ;~ 28F0:3C0F
cs=0x28f0;eip=0x003c11; 	T(SUB(sp, 0x0C));	// 96045 sub     sp, 0Ch ;~ 28F0:3C11
cs=0x28f0;eip=0x003c14; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 96046 les     bx, [bp+arg_2] ;~ 28F0:3C14
cs=0x28f0;eip=0x003c17; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C0))));	// 96047 mov     ax, es:[bx+0C0h] ;~ 28F0:3C17
cs=0x28f0;eip=0x003c1c; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C2))));	// 96048 mov     dx, es:[bx+0C2h] ;~ 28F0:3C1C
cs=0x28f0;eip=0x003c21; 	T(MOV(cl, 5));	// 96049 mov     cl, 5 ;~ 28F0:3C21
cs=0x28f0;eip=0x003c23; 	R(CALLF(sub_10240,0));	// 96050 call    sub_10240 ;~ 28F0:3C23
cs=0x28f0;eip=0x003c28; 	X(PUSH(ax));	// 96051 push    ax ;~ 28F0:3C28
cs=0x28f0;eip=0x003c29; 	R(CALLF(sub_24cf8,0));	// 96052 call    sub_24CF8 ;~ 28F0:3C29
cs=0x28f0;eip=0x003c2e; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 96053 mov     [bp+var_8], ax ;~ 28F0:3C2E
cs=0x28f0;eip=0x003c31; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 96054 les     bx, [bp+arg_2] ;~ 28F0:3C31
cs=0x28f0;eip=0x003c34; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 96055 mov     ax, es:[bx+0E0h] ;~ 28F0:3C34
cs=0x28f0;eip=0x003c39; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 96056 mov     dx, es:[bx+0E2h] ;~ 28F0:3C39
cs=0x28f0;eip=0x003c3e; 	T(MOV(cl, 5));	// 96057 mov     cl, 5 ;~ 28F0:3C3E
cs=0x28f0;eip=0x003c40; 	R(CALLF(sub_10240,0));	// 96058 call    sub_10240 ;~ 28F0:3C40
cs=0x28f0;eip=0x003c45; 	X(PUSH(ax));	// 96059 push    ax ;~ 28F0:3C45
cs=0x28f0;eip=0x003c46; 	R(CALLF(sub_24cf8,0));	// 96060 call    sub_24CF8 ;~ 28F0:3C46
cs=0x28f0;eip=0x003c4b; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 96061 mov     [bp+var_6], ax ;~ 28F0:3C4B
cs=0x28f0;eip=0x003c4e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 96062 les     bx, [bp+arg_2] ;~ 28F0:3C4E
cs=0x28f0;eip=0x003c51; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1D4))));	// 96063 mov     ax, es:[bx+1D4h] ;~ 28F0:3C51
cs=0x28f0;eip=0x003c56; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1D6))));	// 96064 mov     dx, es:[bx+1D6h] ;~ 28F0:3C56
cs=0x28f0;eip=0x003c5b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 96065 mov     [bp+var_4], ax ;~ 28F0:3C5B
cs=0x28f0;eip=0x003c5e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 96066 mov     [bp+var_2], dx ;~ 28F0:3C5E
cs=0x28f0;eip=0x003c61; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 96067 push    [bp+var_6] ;~ 28F0:3C61
cs=0x28f0;eip=0x003c64; 	R(CALLF(sub_27c9e,0));	// 96068 call    sub_27C9E ;~ 28F0:3C64
cs=0x28f0;eip=0x003c69; 	X(PUSH(dx));	// 96069 push    dx ;~ 28F0:3C69
cs=0x28f0;eip=0x003c6a; 	X(PUSH(ax));	// 96070 push    ax ;~ 28F0:3C6A
cs=0x28f0;eip=0x003c6b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 96071 mov     ax, [bp+var_4] ;~ 28F0:3C6B
cs=0x28f0;eip=0x003c6e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 96072 mov     dx, [bp+var_2] ;~ 28F0:3C6E
cs=0x28f0;eip=0x003c71; 	T(MOV(cl, 8));	// 96073 mov     cl, 8 ;~ 28F0:3C71
cs=0x28f0;eip=0x003c73; 	R(CALLF(sub_10240,0));	// 96074 call    sub_10240 ;~ 28F0:3C73
cs=0x28f0;eip=0x003c78; 	X(PUSH(dx));	// 96075 push    dx ;~ 28F0:3C78
cs=0x28f0;eip=0x003c79; 	X(PUSH(ax));	// 96076 push    ax ;~ 28F0:3C79
cs=0x28f0;eip=0x003c7a; 	R(CALLF(sub_105c2,0));	// 96077 call    sub_105C2 ;~ 28F0:3C7A
cs=0x28f0;eip=0x003c7f; 	T(MOV(cl, 8));	// 96078 mov     cl, 8 ;~ 28F0:3C7F
cs=0x28f0;eip=0x003c81; 	R(CALLF(sub_10240,0));	// 96079 call    sub_10240 ;~ 28F0:3C81
cs=0x28f0;eip=0x003c86; 	T(NEG(ax));	// 96080 neg     ax ;~ 28F0:3C86
cs=0x28f0;eip=0x003c88; 	T(ADC(dx, 0));	// 96081 adc     dx, 0 ;~ 28F0:3C88
cs=0x28f0;eip=0x003c8b; 	T(NEG(dx));	// 96082 neg     dx ;~ 28F0:3C8B
cs=0x28f0;eip=0x003c8d; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 96083 mov     [bp+var_C], ax ;~ 28F0:3C8D
cs=0x28f0;eip=0x003c90; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 96084 mov     [bp+var_A], dx ;~ 28F0:3C90
cs=0x28f0;eip=0x003c93; 	X(PUSH(dx));	// 96085 push    dx ;~ 28F0:3C93
cs=0x28f0;eip=0x003c94; 	X(PUSH(ax));	// 96086 push    ax ;~ 28F0:3C94
cs=0x28f0;eip=0x003c95; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 96087 les     bx, [bp+arg_2] ;~ 28F0:3C95
cs=0x28f0;eip=0x003c98; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x298))));	// 96088 mov     ax, es:[bx+298h] ;~ 28F0:3C98
cs=0x28f0;eip=0x003c9d; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x29A))));	// 96089 mov     dx, es:[bx+29Ah] ;~ 28F0:3C9D
cs=0x28f0;eip=0x003ca2; 	T(MOV(cl, 8));	// 96090 mov     cl, 8 ;~ 28F0:3CA2
cs=0x28f0;eip=0x003ca4; 	R(CALLF(sub_10240,0));	// 96091 call    sub_10240 ;~ 28F0:3CA4
cs=0x28f0;eip=0x003ca9; 	X(PUSH(dx));	// 96092 push    dx ;~ 28F0:3CA9
cs=0x28f0;eip=0x003caa; 	X(PUSH(ax));	// 96093 push    ax ;~ 28F0:3CAA
cs=0x28f0;eip=0x003cab; 	R(CALLF(sub_105c2,0));	// 96094 call    sub_105C2 ;~ 28F0:3CAB
cs=0x28f0;eip=0x003cb0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 96095 mov     bx, [bp+arg_0] ;~ 28F0:3CB0
cs=0x28f0;eip=0x003cb3; 	X(ADD(*(dw*)(raddr(ds,bx)), ax));	// 96096 add     [bx], ax ;~ 28F0:3CB3
cs=0x28f0;eip=0x003cb5; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 96097 adc     [bx+2], dx ;~ 28F0:3CB5
cs=0x28f0;eip=0x003cb8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 96098 push    [bp+var_6] ;~ 28F0:3CB8
cs=0x28f0;eip=0x003cbb; 	R(CALLF(sub_27cb4,0));	// 96099 call    sub_27CB4 ;~ 28F0:3CBB
cs=0x28f0;eip=0x003cc0; 	X(PUSH(dx));	// 96100 push    dx ;~ 28F0:3CC0
cs=0x28f0;eip=0x003cc1; 	X(PUSH(ax));	// 96101 push    ax ;~ 28F0:3CC1
cs=0x28f0;eip=0x003cc2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 96102 mov     ax, [bp+var_4] ;~ 28F0:3CC2
cs=0x28f0;eip=0x003cc5; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 96103 mov     dx, [bp+var_2] ;~ 28F0:3CC5
cs=0x28f0;eip=0x003cc8; 	T(MOV(cl, 8));	// 96104 mov     cl, 8 ;~ 28F0:3CC8
cs=0x28f0;eip=0x003cca; 	R(CALLF(sub_10240,0));	// 96105 call    sub_10240 ;~ 28F0:3CCA
cs=0x28f0;eip=0x003ccf; 	X(PUSH(dx));	// 96106 push    dx ;~ 28F0:3CCF
cs=0x28f0;eip=0x003cd0; 	X(PUSH(ax));	// 96107 push    ax ;~ 28F0:3CD0
cs=0x28f0;eip=0x003cd1; 	R(CALLF(sub_105c2,0));	// 96108 call    sub_105C2 ;~ 28F0:3CD1
cs=0x28f0;eip=0x003cd6; 	T(MOV(cl, 8));	// 96109 mov     cl, 8 ;~ 28F0:3CD6
cs=0x28f0;eip=0x003cd8; 	R(CALLF(sub_10240,0));	// 96110 call    sub_10240 ;~ 28F0:3CD8
cs=0x28f0;eip=0x003cdd; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 96111 mov     [bp+var_4], ax ;~ 28F0:3CDD
cs=0x28f0;eip=0x003ce0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 96112 mov     [bp+var_2], dx ;~ 28F0:3CE0
cs=0x28f0;eip=0x003ce3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 96113 push    [bp+var_8] ;~ 28F0:3CE3
cs=0x28f0;eip=0x003ce6; 	R(CALLF(sub_27c9e,0));	// 96114 call    sub_27C9E ;~ 28F0:3CE6
cs=0x28f0;eip=0x003ceb; 	X(PUSH(dx));	// 96115 push    dx ;~ 28F0:3CEB
cs=0x28f0;eip=0x003cec; 	X(PUSH(ax));	// 96116 push    ax ;~ 28F0:3CEC
cs=0x28f0;eip=0x003ced; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 96117 mov     ax, [bp+var_4] ;~ 28F0:3CED
cs=0x28f0;eip=0x003cf0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 96118 mov     dx, [bp+var_2] ;~ 28F0:3CF0
cs=0x28f0;eip=0x003cf3; 	T(MOV(cl, 8));	// 96119 mov     cl, 8 ;~ 28F0:3CF3
cs=0x28f0;eip=0x003cf5; 	R(CALLF(sub_10240,0));	// 96120 call    sub_10240 ;~ 28F0:3CF5
cs=0x28f0;eip=0x003cfa; 	X(PUSH(dx));	// 96121 push    dx ;~ 28F0:3CFA
cs=0x28f0;eip=0x003cfb; 	X(PUSH(ax));	// 96122 push    ax ;~ 28F0:3CFB
cs=0x28f0;eip=0x003cfc; 	R(CALLF(sub_105c2,0));	// 96123 call    sub_105C2 ;~ 28F0:3CFC
cs=0x28f0;eip=0x003d01; 	T(MOV(cl, 8));	// 96124 mov     cl, 8 ;~ 28F0:3D01
cs=0x28f0;eip=0x003d03; 	R(CALLF(sub_10240,0));	// 96125 call    sub_10240 ;~ 28F0:3D03
cs=0x28f0;eip=0x003d08; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 96126 mov     [bp+var_C], ax ;~ 28F0:3D08
cs=0x28f0;eip=0x003d0b; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 96127 mov     [bp+var_A], dx ;~ 28F0:3D0B
cs=0x28f0;eip=0x003d0e; 	X(PUSH(dx));	// 96128 push    dx ;~ 28F0:3D0E
cs=0x28f0;eip=0x003d0f; 	X(PUSH(ax));	// 96129 push    ax ;~ 28F0:3D0F
cs=0x28f0;eip=0x003d10; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 96130 les     bx, [bp+arg_2] ;~ 28F0:3D10
cs=0x28f0;eip=0x003d13; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x298))));	// 96131 mov     ax, es:[bx+298h] ;~ 28F0:3D13
cs=0x28f0;eip=0x003d18; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x29A))));	// 96132 mov     dx, es:[bx+29Ah] ;~ 28F0:3D18
cs=0x28f0;eip=0x003d1d; 	T(MOV(cl, 8));	// 96133 mov     cl, 8 ;~ 28F0:3D1D
cs=0x28f0;eip=0x003d1f; 	R(CALLF(sub_10240,0));	// 96134 call    sub_10240 ;~ 28F0:3D1F
cs=0x28f0;eip=0x003d24; 	X(PUSH(dx));	// 96135 push    dx ;~ 28F0:3D24
cs=0x28f0;eip=0x003d25; 	X(PUSH(ax));	// 96136 push    ax ;~ 28F0:3D25
cs=0x28f0;eip=0x003d26; 	R(CALLF(sub_105c2,0));	// 96137 call    sub_105C2 ;~ 28F0:3D26
cs=0x28f0;eip=0x003d2b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 96138 mov     bx, [bp+arg_0] ;~ 28F0:3D2B
cs=0x28f0;eip=0x003d2e; 	X(ADD(*(dw*)(raddr(ds,bx+4)), ax));	// 96139 add     [bx+4], ax ;~ 28F0:3D2E
cs=0x28f0;eip=0x003d31; 	X(ADC(*(dw*)(raddr(ds,bx+6)), dx));	// 96140 adc     [bx+6], dx ;~ 28F0:3D31
cs=0x28f0;eip=0x003d34; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 96141 push    [bp+var_8] ;~ 28F0:3D34
cs=0x28f0;eip=0x003d37; 	R(CALLF(sub_27cb4,0));	// 96142 call    sub_27CB4 ;~ 28F0:3D37
cs=0x28f0;eip=0x003d3c; 	X(PUSH(dx));	// 96143 push    dx ;~ 28F0:3D3C
cs=0x28f0;eip=0x003d3d; 	X(PUSH(ax));	// 96144 push    ax ;~ 28F0:3D3D
cs=0x28f0;eip=0x003d3e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 96145 mov     ax, [bp+var_4] ;~ 28F0:3D3E
cs=0x28f0;eip=0x003d41; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 96146 mov     dx, [bp+var_2] ;~ 28F0:3D41
cs=0x28f0;eip=0x003d44; 	T(MOV(cl, 8));	// 96147 mov     cl, 8 ;~ 28F0:3D44
cs=0x28f0;eip=0x003d46; 	R(CALLF(sub_10240,0));	// 96148 call    sub_10240 ;~ 28F0:3D46
cs=0x28f0;eip=0x003d4b; 	X(PUSH(dx));	// 96149 push    dx ;~ 28F0:3D4B
cs=0x28f0;eip=0x003d4c; 	X(PUSH(ax));	// 96150 push    ax ;~ 28F0:3D4C
cs=0x28f0;eip=0x003d4d; 	R(CALLF(sub_105c2,0));	// 96151 call    sub_105C2 ;~ 28F0:3D4D
cs=0x28f0;eip=0x003d52; 	T(MOV(cl, 8));	// 96152 mov     cl, 8 ;~ 28F0:3D52
cs=0x28f0;eip=0x003d54; 	R(CALLF(sub_10240,0));	// 96153 call    sub_10240 ;~ 28F0:3D54
cs=0x28f0;eip=0x003d59; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 96154 mov     [bp+var_C], ax ;~ 28F0:3D59
cs=0x28f0;eip=0x003d5c; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 96155 mov     [bp+var_A], dx ;~ 28F0:3D5C
cs=0x28f0;eip=0x003d5f; 	X(PUSH(dx));	// 96156 push    dx ;~ 28F0:3D5F
cs=0x28f0;eip=0x003d60; 	X(PUSH(ax));	// 96157 push    ax ;~ 28F0:3D60
cs=0x28f0;eip=0x003d61; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 96158 les     bx, [bp+arg_2] ;~ 28F0:3D61
cs=0x28f0;eip=0x003d64; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x298))));	// 96159 mov     ax, es:[bx+298h] ;~ 28F0:3D64
cs=0x28f0;eip=0x003d69; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x29A))));	// 96160 mov     dx, es:[bx+29Ah] ;~ 28F0:3D69
cs=0x28f0;eip=0x003d6e; 	T(MOV(cl, 8));	// 96161 mov     cl, 8 ;~ 28F0:3D6E
cs=0x28f0;eip=0x003d70; 	R(CALLF(sub_10240,0));	// 96162 call    sub_10240 ;~ 28F0:3D70
cs=0x28f0;eip=0x003d75; 	X(PUSH(dx));	// 96163 push    dx ;~ 28F0:3D75
cs=0x28f0;eip=0x003d76; 	X(PUSH(ax));	// 96164 push    ax ;~ 28F0:3D76
cs=0x28f0;eip=0x003d77; 	R(CALLF(sub_105c2,0));	// 96165 call    sub_105C2 ;~ 28F0:3D77
cs=0x28f0;eip=0x003d7c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 96166 mov     bx, [bp+arg_0] ;~ 28F0:3D7C
cs=0x28f0;eip=0x003d7f; 	X(ADD(*(dw*)(raddr(ds,bx+8)), ax));	// 96167 add     [bx+8], ax ;~ 28F0:3D7F
cs=0x28f0;eip=0x003d82; 	X(ADC(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 96168 adc     [bx+0Ah], dx ;~ 28F0:3D82
cs=0x28f0;eip=0x003d85; 	T(MOV(sp, bp));	// 96169 mov     sp, bp ;~ 28F0:3D85
cs=0x28f0;eip=0x003d87; 	X(POP(bp));	// 96170 pop     bp ;~ 28F0:3D87
cs=0x28f0;eip=0x003d88; 	R(RETN(6));	// 96171 retn    6 ;~ 28F0:3D88
sub_3b26b:
	// 96179 
#undef arg_0
#define arg_0 4
	// 96182 arg_0           = word ptr  4 ;~ 28F0:3D8B
#undef arg_2
#define arg_2 6
	// 96183 arg_2           = word ptr  6 ;~ 28F0:3D8B
#undef arg_4
#define arg_4 8
	// 96184 arg_4           = dword ptr  8 ;~ 28F0:3D8B
cs=0x28f0;eip=0x003d8b; 	X(PUSH(bp));	// 96186 push    bp ;~ 28F0:3D8B
cs=0x28f0;eip=0x003d8c; 	T(MOV(bp, sp));	// 96187 mov     bp, sp ;~ 28F0:3D8C
cs=0x28f0;eip=0x003d8e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 96188 les     bx, [bp+arg_4] ;~ 28F0:3D8E
cs=0x28f0;eip=0x003d91; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 96189 mov     ax, [bp+arg_0] ;~ 28F0:3D91
cs=0x28f0;eip=0x003d94; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 96190 mov     dx, [bp+arg_2] ;~ 28F0:3D94
cs=0x28f0;eip=0x003d97; 	T(CMP(*(dw*)(raddr(es,bx+0x12)), dx));	// 96191 cmp     es:[bx+12h], dx ;~ 28F0:3D97
cs=0x28f0;eip=0x003d9b; 	R(JG(loc_3b28f));	// 96192 jg      short loc_3B28F ;~ 28F0:3D9B
cs=0x28f0;eip=0x003d9d; 	R(JL(loc_3b285));	// 96193 jl      short loc_3B285 ;~ 28F0:3D9D
cs=0x28f0;eip=0x003d9f; 	T(CMP(*(dw*)(raddr(es,bx+0x10)), ax));	// 96194 cmp     es:[bx+10h], ax ;~ 28F0:3D9F
cs=0x28f0;eip=0x003da3; 	R(JNC(loc_3b28f));	// 96195 jnb     short loc_3B28F ;~ 28F0:3DA3
loc_3b285:
	// 10570 
cs=0x28f0;eip=0x003da5; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 96198 mov     ax, es:[bx+10h] ;~ 28F0:3DA5
cs=0x28f0;eip=0x003da9; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 96199 mov     dx, es:[bx+12h] ;~ 28F0:3DA9
cs=0x28f0;eip=0x003dad; 	R(JMP(loc_3b2b9));	// 96200 jmp     short loc_3B2B9 ;~ 28F0:3DAD
loc_3b28f:
	// 10571 
cs=0x28f0;eip=0x003daf; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 96205 mov     ax, es:[bx+14h] ;~ 28F0:3DAF
cs=0x28f0;eip=0x003db3; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x16))));	// 96206 mov     dx, es:[bx+16h] ;~ 28F0:3DB3
cs=0x28f0;eip=0x003db7; 	T(NEG(ax));	// 96207 neg     ax ;~ 28F0:3DB7
cs=0x28f0;eip=0x003db9; 	T(ADC(dx, 0));	// 96208 adc     dx, 0 ;~ 28F0:3DB9
cs=0x28f0;eip=0x003dbc; 	T(NEG(dx));	// 96209 neg     dx ;~ 28F0:3DBC
cs=0x28f0;eip=0x003dbe; 	T(CMP(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 96210 cmp     dx, [bp+arg_2] ;~ 28F0:3DBE
cs=0x28f0;eip=0x003dc1; 	R(JL(loc_3b2bf));	// 96211 jl      short loc_3B2BF ;~ 28F0:3DC1
cs=0x28f0;eip=0x003dc3; 	R(JG(loc_3b2aa));	// 96212 jg      short loc_3B2AA ;~ 28F0:3DC3
cs=0x28f0;eip=0x003dc5; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 96213 cmp     ax, [bp+arg_0] ;~ 28F0:3DC5
cs=0x28f0;eip=0x003dc8; 	R(JBE(loc_3b2bf));	// 96214 jbe     short loc_3B2BF ;~ 28F0:3DC8
loc_3b2aa:
	// 10572 
cs=0x28f0;eip=0x003dca; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 96217 mov     ax, es:[bx+14h] ;~ 28F0:3DCA
cs=0x28f0;eip=0x003dce; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x16))));	// 96218 mov     dx, es:[bx+16h] ;~ 28F0:3DCE
cs=0x28f0;eip=0x003dd2; 	T(NEG(ax));	// 96219 neg     ax ;~ 28F0:3DD2
cs=0x28f0;eip=0x003dd4; 	T(ADC(dx, 0));	// 96220 adc     dx, 0 ;~ 28F0:3DD4
cs=0x28f0;eip=0x003dd7; 	T(NEG(dx));	// 96221 neg     dx ;~ 28F0:3DD7
loc_3b2b9:
	// 10573 
cs=0x28f0;eip=0x003dd9; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 96224 mov     [bp+arg_0], ax ;~ 28F0:3DD9
cs=0x28f0;eip=0x003ddc; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), dx));	// 96225 mov     [bp+arg_2], dx ;~ 28F0:3DDC
loc_3b2bf:
	// 10574 
cs=0x28f0;eip=0x003ddf; 	T(MOV(ax, 0x100));	// 96229 mov     ax, 100h ;~ 28F0:3DDF
cs=0x28f0;eip=0x003de2; 	T(CWD);	// 96230 cwd ;~ 28F0:3DE2
cs=0x28f0;eip=0x003de3; 	X(PUSH(dx));	// 96231 push    dx ;~ 28F0:3DE3
cs=0x28f0;eip=0x003de4; 	X(PUSH(ax));	// 96232 push    ax ;~ 28F0:3DE4
cs=0x28f0;eip=0x003de5; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 96233 mov     ax, word ptr unk_57111 ;~ 28F0:3DE5
cs=0x28f0;eip=0x003de8; 	T(CWD);	// 96234 cwd ;~ 28F0:3DE8
cs=0x28f0;eip=0x003de9; 	X(PUSH(dx));	// 96235 push    dx ;~ 28F0:3DE9
cs=0x28f0;eip=0x003dea; 	X(PUSH(ax));	// 96236 push    ax ;~ 28F0:3DEA
cs=0x28f0;eip=0x003deb; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 96237 push    [bp+arg_2] ;~ 28F0:3DEB
cs=0x28f0;eip=0x003dee; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 96238 push    [bp+arg_0] ;~ 28F0:3DEE
cs=0x28f0;eip=0x003df1; 	R(CALLF(sub_105c2,0));	// 96239 call    sub_105C2 ;~ 28F0:3DF1
cs=0x28f0;eip=0x003df6; 	X(PUSH(dx));	// 96240 push    dx ;~ 28F0:3DF6
cs=0x28f0;eip=0x003df7; 	X(PUSH(ax));	// 96241 push    ax ;~ 28F0:3DF7
cs=0x28f0;eip=0x003df8; 	R(CALLF(sub_10526,0));	// 96242 call    sub_10526 ;~ 28F0:3DF8
cs=0x28f0;eip=0x003dfd; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 96243 les     bx, [bp+arg_4] ;~ 28F0:3DFD
cs=0x28f0;eip=0x003e00; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 96244 add     es:[bx], ax ;~ 28F0:3E00
cs=0x28f0;eip=0x003e03; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 96245 adc     es:[bx+2], dx ;~ 28F0:3E03
cs=0x28f0;eip=0x003e07; 	X(PUSH(es));	// 96246 push    es ;~ 28F0:3E07
cs=0x28f0;eip=0x003e08; 	X(PUSH(bx));	// 96247 push    bx ;~ 28F0:3E08
cs=0x28f0;eip=0x003e09; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 96248 push    word ptr es:[bx+0Ah] ;~ 28F0:3E09
cs=0x28f0;eip=0x003e0d; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 96249 push    word ptr es:[bx+8] ;~ 28F0:3E0D
cs=0x28f0;eip=0x003e11; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 96250 push    word ptr es:[bx+0Eh] ;~ 28F0:3E11
cs=0x28f0;eip=0x003e15; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 96251 push    word ptr es:[bx+0Ch] ;~ 28F0:3E15
cs=0x28f0;eip=0x003e19; 	R(CALL(sub_3ba8c,0));	// 96252 call    sub_3BA8C ;~ 28F0:3E19
cs=0x28f0;eip=0x003e1c; 	X(POP(bp));	// 96253 pop     bp ;~ 28F0:3E1C
cs=0x28f0;eip=0x003e1d; 	R(RETN(8));	// 96254 retn    8 ;~ 28F0:3E1D
sub_3b300:
	// 96262 
#undef var_4
#define var_4 -4
	// 96265 var_4           = word ptr -4 ;~ 28F0:3E20
#undef var_2
#define var_2 -2
	// 96266 var_2           = word ptr -2 ;~ 28F0:3E20
#undef arg_0
#define arg_0 4
	// 96267 arg_0           = dword ptr  4 ;~ 28F0:3E20
cs=0x28f0;eip=0x003e20; 	X(PUSH(bp));	// 96269 push    bp ;~ 28F0:3E20
cs=0x28f0;eip=0x003e21; 	T(MOV(bp, sp));	// 96270 mov     bp, sp ;~ 28F0:3E21
cs=0x28f0;eip=0x003e23; 	T(SUB(sp, 4));	// 96271 sub     sp, 4 ;~ 28F0:3E23
cs=0x28f0;eip=0x003e26; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96272 mov     ax, word ptr [bp+arg_0] ;~ 28F0:3E26
cs=0x28f0;eip=0x003e29; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96273 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:3E29
cs=0x28f0;eip=0x003e2c; 	T(ADD(ax, 0x120));	// 96274 add     ax, 120h ;~ 28F0:3E2C
cs=0x28f0;eip=0x003e2f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 96275 mov     [bp+var_4], ax ;~ 28F0:3E2F
cs=0x28f0;eip=0x003e32; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 96276 mov     [bp+var_2], dx ;~ 28F0:3E32
cs=0x28f0;eip=0x003e35; 	T(SUB(ax, ax));	// 96277 sub     ax, ax ;~ 28F0:3E35
cs=0x28f0;eip=0x003e37; 	T(CWD);	// 96278 cwd ;~ 28F0:3E37
cs=0x28f0;eip=0x003e38; 	X(MOV(*(dw*)((&unk_57120)), ax));	// 96279 mov     word ptr unk_57120, ax ;~ 28F0:3E38
cs=0x28f0;eip=0x003e3b; 	X(MOV(*(dw*)((&unk_57122)), dx));	// 96280 mov     word ptr unk_57122, dx ;~ 28F0:3E3B
cs=0x28f0;eip=0x003e3f; 	X(MOV(*(dw*)((&unk_5711c)), ax));	// 96281 mov     word ptr unk_5711C, ax ;~ 28F0:3E3F
cs=0x28f0;eip=0x003e42; 	X(MOV(*(dw*)((&unk_5711e)), dx));	// 96282 mov     word ptr unk_5711E, dx ;~ 28F0:3E42
cs=0x28f0;eip=0x003e46; 	X(MOV(*(dw*)((&unk_57118)), ax));	// 96283 mov     word ptr unk_57118, ax ;~ 28F0:3E46
cs=0x28f0;eip=0x003e49; 	X(MOV(*(dw*)((&unk_5711a)), dx));	// 96284 mov     word ptr unk_5711A, dx ;~ 28F0:3E49
cs=0x28f0;eip=0x003e4d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96285 push    word ptr [bp+arg_0+2] ;~ 28F0:3E4D
cs=0x28f0;eip=0x003e50; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96286 push    word ptr [bp+arg_0] ;~ 28F0:3E50
cs=0x28f0;eip=0x003e53; 	T(MOV(ax, 0x0F768));	// 96287 mov     ax, 0F768h ;~ 28F0:3E53
cs=0x28f0;eip=0x003e56; 	X(PUSH(ax));	// 96288 push    ax ;~ 28F0:3E56
cs=0x28f0;eip=0x003e57; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96289 les     bx, [bp+arg_0] ;~ 28F0:3E57
cs=0x28f0;eip=0x003e5a; 	X(PUSH(*(dw*)(raddr(es,bx+0x122))));	// 96290 push    word ptr es:[bx+122h] ;~ 28F0:3E5A
cs=0x28f0;eip=0x003e5f; 	X(PUSH(*(dw*)(raddr(es,bx+0x120))));	// 96291 push    word ptr es:[bx+120h] ;~ 28F0:3E5F
cs=0x28f0;eip=0x003e64; 	R(CALL(sub_3aa0d,0));	// 96292 call    sub_3AA0D ;~ 28F0:3E64
cs=0x28f0;eip=0x003e67; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96293 push    word ptr [bp+arg_0+2] ;~ 28F0:3E67
cs=0x28f0;eip=0x003e6a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96294 push    word ptr [bp+arg_0] ;~ 28F0:3E6A
cs=0x28f0;eip=0x003e6d; 	T(MOV(ax, 0x0F768));	// 96295 mov     ax, 0F768h ;~ 28F0:3E6D
cs=0x28f0;eip=0x003e70; 	X(PUSH(ax));	// 96296 push    ax ;~ 28F0:3E70
cs=0x28f0;eip=0x003e71; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96297 les     bx, [bp+arg_0] ;~ 28F0:3E71
cs=0x28f0;eip=0x003e74; 	X(PUSH(*(dw*)(raddr(es,bx+0x122))));	// 96298 push    word ptr es:[bx+122h] ;~ 28F0:3E74
cs=0x28f0;eip=0x003e79; 	X(PUSH(*(dw*)(raddr(es,bx+0x120))));	// 96299 push    word ptr es:[bx+120h] ;~ 28F0:3E79
cs=0x28f0;eip=0x003e7e; 	R(CALL(sub_3ab80,0));	// 96300 call    sub_3AB80 ;~ 28F0:3E7E
cs=0x28f0;eip=0x003e81; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96301 push    word ptr [bp+arg_0+2] ;~ 28F0:3E81
cs=0x28f0;eip=0x003e84; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96302 push    word ptr [bp+arg_0] ;~ 28F0:3E84
cs=0x28f0;eip=0x003e87; 	T(MOV(ax, 0x0F768));	// 96303 mov     ax, 0F768h ;~ 28F0:3E87
cs=0x28f0;eip=0x003e8a; 	X(PUSH(ax));	// 96304 push    ax ;~ 28F0:3E8A
cs=0x28f0;eip=0x003e8b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96305 les     bx, [bp+arg_0] ;~ 28F0:3E8B
cs=0x28f0;eip=0x003e8e; 	X(PUSH(*(dw*)(raddr(es,bx+0x122))));	// 96306 push    word ptr es:[bx+122h] ;~ 28F0:3E8E
cs=0x28f0;eip=0x003e93; 	X(PUSH(*(dw*)(raddr(es,bx+0x120))));	// 96307 push    word ptr es:[bx+120h] ;~ 28F0:3E93
cs=0x28f0;eip=0x003e98; 	R(CALL(sub_3af77,0));	// 96308 call    sub_3AF77 ;~ 28F0:3E98
cs=0x28f0;eip=0x003e9b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96309 push    word ptr [bp+arg_0+2] ;~ 28F0:3E9B
cs=0x28f0;eip=0x003e9e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96310 push    word ptr [bp+arg_0] ;~ 28F0:3E9E
cs=0x28f0;eip=0x003ea1; 	T(MOV(ax, 0x0F768));	// 96311 mov     ax, 0F768h ;~ 28F0:3EA1
cs=0x28f0;eip=0x003ea4; 	X(PUSH(ax));	// 96312 push    ax ;~ 28F0:3EA4
cs=0x28f0;eip=0x003ea5; 	R(CALL(sub_3b0ee,0));	// 96313 call    sub_3B0EE ;~ 28F0:3EA5
cs=0x28f0;eip=0x003ea8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96314 les     bx, [bp+arg_0] ;~ 28F0:3EA8
cs=0x28f0;eip=0x003eab; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x298))));	// 96315 mov     ax, es:[bx+298h] ;~ 28F0:3EAB
cs=0x28f0;eip=0x003eb0; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x29A))));	// 96316 mov     dx, es:[bx+29Ah] ;~ 28F0:3EB0
cs=0x28f0;eip=0x003eb5; 	T(MOV(cl, 8));	// 96317 mov     cl, 8 ;~ 28F0:3EB5
cs=0x28f0;eip=0x003eb7; 	R(CALLF(sub_10240,0));	// 96318 call    sub_10240 ;~ 28F0:3EB7
cs=0x28f0;eip=0x003ebc; 	X(PUSH(dx));	// 96319 push    dx ;~ 28F0:3EBC
cs=0x28f0;eip=0x003ebd; 	X(PUSH(ax));	// 96320 push    ax ;~ 28F0:3EBD
cs=0x28f0;eip=0x003ebe; 	X(PUSH(*(dw*)((&unk_5711a))));	// 96321 push    word ptr unk_5711A ;~ 28F0:3EBE
cs=0x28f0;eip=0x003ec2; 	X(PUSH(*(dw*)((&unk_57118))));	// 96322 push    word ptr unk_57118 ;~ 28F0:3EC2
cs=0x28f0;eip=0x003ec6; 	R(CALLF(sub_10526,0));	// 96323 call    sub_10526 ;~ 28F0:3EC6
cs=0x28f0;eip=0x003ecb; 	X(MOV(*(dw*)((&unk_57124)), ax));	// 96324 mov     word ptr unk_57124, ax ;~ 28F0:3ECB
cs=0x28f0;eip=0x003ece; 	X(MOV(*(dw*)((&unk_57126)), dx));	// 96325 mov     word ptr unk_57126, dx ;~ 28F0:3ECE
cs=0x28f0;eip=0x003ed2; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96326 les     bx, [bp+arg_0] ;~ 28F0:3ED2
cs=0x28f0;eip=0x003ed5; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x298))));	// 96327 mov     ax, es:[bx+298h] ;~ 28F0:3ED5
cs=0x28f0;eip=0x003eda; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x29A))));	// 96328 mov     dx, es:[bx+29Ah] ;~ 28F0:3EDA
cs=0x28f0;eip=0x003edf; 	T(MOV(cl, 8));	// 96329 mov     cl, 8 ;~ 28F0:3EDF
cs=0x28f0;eip=0x003ee1; 	R(CALLF(sub_10240,0));	// 96330 call    sub_10240 ;~ 28F0:3EE1
cs=0x28f0;eip=0x003ee6; 	X(PUSH(dx));	// 96331 push    dx ;~ 28F0:3EE6
cs=0x28f0;eip=0x003ee7; 	X(PUSH(ax));	// 96332 push    ax ;~ 28F0:3EE7
cs=0x28f0;eip=0x003ee8; 	X(PUSH(*(dw*)((&unk_5711e))));	// 96333 push    word ptr unk_5711E ;~ 28F0:3EE8
cs=0x28f0;eip=0x003eec; 	X(PUSH(*(dw*)((&unk_5711c))));	// 96334 push    word ptr unk_5711C ;~ 28F0:3EEC
cs=0x28f0;eip=0x003ef0; 	R(CALLF(sub_10526,0));	// 96335 call    sub_10526 ;~ 28F0:3EF0
cs=0x28f0;eip=0x003ef5; 	X(MOV(*(dw*)((&unk_57128)), ax));	// 96336 mov     word ptr unk_57128, ax ;~ 28F0:3EF5
cs=0x28f0;eip=0x003ef8; 	X(MOV(*(dw*)((&unk_5712a)), dx));	// 96337 mov     word ptr unk_5712A, dx ;~ 28F0:3EF8
cs=0x28f0;eip=0x003efc; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96338 les     bx, [bp+arg_0] ;~ 28F0:3EFC
cs=0x28f0;eip=0x003eff; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x298))));	// 96339 mov     ax, es:[bx+298h] ;~ 28F0:3EFF
cs=0x28f0;eip=0x003f04; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x29A))));	// 96340 mov     dx, es:[bx+29Ah] ;~ 28F0:3F04
cs=0x28f0;eip=0x003f09; 	T(MOV(cl, 8));	// 96341 mov     cl, 8 ;~ 28F0:3F09
cs=0x28f0;eip=0x003f0b; 	R(CALLF(sub_10240,0));	// 96342 call    sub_10240 ;~ 28F0:3F0B
cs=0x28f0;eip=0x003f10; 	X(PUSH(dx));	// 96343 push    dx ;~ 28F0:3F10
cs=0x28f0;eip=0x003f11; 	X(PUSH(ax));	// 96344 push    ax ;~ 28F0:3F11
cs=0x28f0;eip=0x003f12; 	X(PUSH(*(dw*)((&unk_57122))));	// 96345 push    word ptr unk_57122 ;~ 28F0:3F12
cs=0x28f0;eip=0x003f16; 	X(PUSH(*(dw*)((&unk_57120))));	// 96346 push    word ptr unk_57120 ;~ 28F0:3F16
cs=0x28f0;eip=0x003f1a; 	R(CALLF(sub_10526,0));	// 96347 call    sub_10526 ;~ 28F0:3F1A
cs=0x28f0;eip=0x003f1f; 	X(MOV(*(dw*)((&unk_5712c)), ax));	// 96348 mov     word ptr unk_5712C, ax ;~ 28F0:3F1F
cs=0x28f0;eip=0x003f22; 	X(MOV(*(dw*)((&unk_5712e)), dx));	// 96349 mov     word ptr unk_5712E, dx ;~ 28F0:3F22
cs=0x28f0;eip=0x003f26; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96350 mov     ax, word ptr [bp+arg_0] ;~ 28F0:3F26
cs=0x28f0;eip=0x003f29; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96351 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:3F29
cs=0x28f0;eip=0x003f2c; 	T(ADD(ax, 0x120));	// 96352 add     ax, 120h ;~ 28F0:3F2C
cs=0x28f0;eip=0x003f2f; 	X(PUSH(dx));	// 96353 push    dx ;~ 28F0:3F2F
cs=0x28f0;eip=0x003f30; 	X(PUSH(ax));	// 96354 push    ax ;~ 28F0:3F30
cs=0x28f0;eip=0x003f31; 	X(PUSH(*(dw*)((&unk_57126))));	// 96355 push    word ptr unk_57126 ;~ 28F0:3F31
cs=0x28f0;eip=0x003f35; 	X(PUSH(*(dw*)((&unk_57124))));	// 96356 push    word ptr unk_57124 ;~ 28F0:3F35
cs=0x28f0;eip=0x003f39; 	R(CALL(sub_3b26b,0));	// 96357 call    sub_3B26B ;~ 28F0:3F39
cs=0x28f0;eip=0x003f3c; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96358 mov     ax, word ptr [bp+arg_0] ;~ 28F0:3F3C
cs=0x28f0;eip=0x003f3f; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96359 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:3F3F
cs=0x28f0;eip=0x003f42; 	T(ADD(ax, 0x140));	// 96360 add     ax, 140h ;~ 28F0:3F42
cs=0x28f0;eip=0x003f45; 	X(PUSH(dx));	// 96361 push    dx ;~ 28F0:3F45
cs=0x28f0;eip=0x003f46; 	X(PUSH(ax));	// 96362 push    ax ;~ 28F0:3F46
cs=0x28f0;eip=0x003f47; 	X(PUSH(*(dw*)((&unk_5712a))));	// 96363 push    word ptr unk_5712A ;~ 28F0:3F47
cs=0x28f0;eip=0x003f4b; 	X(PUSH(*(dw*)((&unk_57128))));	// 96364 push    word ptr unk_57128 ;~ 28F0:3F4B
cs=0x28f0;eip=0x003f4f; 	R(CALL(sub_3b26b,0));	// 96365 call    sub_3B26B ;~ 28F0:3F4F
cs=0x28f0;eip=0x003f52; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96366 mov     ax, word ptr [bp+arg_0] ;~ 28F0:3F52
cs=0x28f0;eip=0x003f55; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96367 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:3F55
cs=0x28f0;eip=0x003f58; 	T(ADD(ax, 0x160));	// 96368 add     ax, 160h ;~ 28F0:3F58
cs=0x28f0;eip=0x003f5b; 	X(PUSH(dx));	// 96369 push    dx ;~ 28F0:3F5B
cs=0x28f0;eip=0x003f5c; 	X(PUSH(ax));	// 96370 push    ax ;~ 28F0:3F5C
cs=0x28f0;eip=0x003f5d; 	X(PUSH(*(dw*)((&unk_5712e))));	// 96371 push    word ptr unk_5712E ;~ 28F0:3F5D
cs=0x28f0;eip=0x003f61; 	X(PUSH(*(dw*)((&unk_5712c))));	// 96372 push    word ptr unk_5712C ;~ 28F0:3F61
cs=0x28f0;eip=0x003f65; 	R(CALL(sub_3b26b,0));	// 96373 call    sub_3B26B ;~ 28F0:3F65
cs=0x28f0;eip=0x003f68; 	T(MOV(sp, bp));	// 96374 mov     sp, bp ;~ 28F0:3F68
cs=0x28f0;eip=0x003f6a; 	X(POP(bp));	// 96375 pop     bp ;~ 28F0:3F6A
cs=0x28f0;eip=0x003f6b; 	R(RETN(4));	// 96376 retn    4 ;~ 28F0:3F6B
sub_3b44e:
	// 96384 
#undef var_4
#define var_4 -4
	// 96386 var_4           = word ptr -4 ;~ 28F0:3F6E
#undef var_2
#define var_2 -2
	// 96387 var_2           = word ptr -2 ;~ 28F0:3F6E
#undef arg_0
#define arg_0 4
	// 96388 arg_0           = dword ptr  4 ;~ 28F0:3F6E
cs=0x28f0;eip=0x003f6e; 	X(PUSH(bp));	// 96390 push    bp ;~ 28F0:3F6E
cs=0x28f0;eip=0x003f6f; 	T(MOV(bp, sp));	// 96391 mov     bp, sp ;~ 28F0:3F6F
cs=0x28f0;eip=0x003f71; 	T(SUB(sp, 4));	// 96392 sub     sp, 4 ;~ 28F0:3F71
cs=0x28f0;eip=0x003f74; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96393 les     bx, [bp+arg_0] ;~ 28F0:3F74
cs=0x28f0;eip=0x003f77; 	T(SUB(ax, ax));	// 96394 sub     ax, ax ;~ 28F0:3F77
cs=0x28f0;eip=0x003f79; 	X(MOV(*(dw*)(raddr(es,bx+2)), ax));	// 96395 mov     es:[bx+2], ax ;~ 28F0:3F79
cs=0x28f0;eip=0x003f7d; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 96396 mov     es:[bx], ax ;~ 28F0:3F7D
cs=0x28f0;eip=0x003f80; 	T(CMP(*(dw*)((&unk_57116)), ax));	// 96397 cmp     word ptr unk_57116, ax ;~ 28F0:3F80
cs=0x28f0;eip=0x003f84; 	R(JZ(loc_3b49b));	// 96398 jz      short loc_3B49B ;~ 28F0:3F84
cs=0x28f0;eip=0x003f86; 	T(MOV(ax, bx));	// 96399 mov     ax, bx ;~ 28F0:3F86
cs=0x28f0;eip=0x003f88; 	T(MOV(dx, es));	// 96400 mov     dx, es ;~ 28F0:3F88
cs=0x28f0;eip=0x003f8a; 	T(ADD(ax, 0x20));	// 96401 add     ax, 20h ; ' ' ;~ 28F0:3F8A
cs=0x28f0;eip=0x003f8d; 	X(PUSH(dx));	// 96402 push    dx ;~ 28F0:3F8D
cs=0x28f0;eip=0x003f8e; 	X(PUSH(ax));	// 96403 push    ax ;~ 28F0:3F8E
cs=0x28f0;eip=0x003f8f; 	T(MOV(ax, *(dw*)((&unk_57116))));	// 96404 mov     ax, word ptr unk_57116 ;~ 28F0:3F8F
cs=0x28f0;eip=0x003f92; 	T(NEG(ax));	// 96405 neg     ax ;~ 28F0:3F92
cs=0x28f0;eip=0x003f94; 	X(PUSH(ax));	// 96406 push    ax ;~ 28F0:3F94
cs=0x28f0;eip=0x003f95; 	R(CALL(sub_3bd9b,0));	// 96407 call    sub_3BD9B ;~ 28F0:3F95
cs=0x28f0;eip=0x003f98; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96408 mov     ax, word ptr [bp+arg_0] ;~ 28F0:3F98
cs=0x28f0;eip=0x003f9b; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96409 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:3F9B
cs=0x28f0;eip=0x003f9e; 	T(ADD(ax, 0x20));	// 96410 add     ax, 20h ; ' ' ;~ 28F0:3F9E
cs=0x28f0;eip=0x003fa1; 	X(PUSH(dx));	// 96411 push    dx ;~ 28F0:3FA1
cs=0x28f0;eip=0x003fa2; 	X(PUSH(ax));	// 96412 push    ax ;~ 28F0:3FA2
cs=0x28f0;eip=0x003fa3; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96413 les     bx, [bp+arg_0] ;~ 28F0:3FA3
cs=0x28f0;eip=0x003fa6; 	X(PUSH(*(dw*)(raddr(es,bx+0x2A))));	// 96414 push    word ptr es:[bx+2Ah] ;~ 28F0:3FA6
cs=0x28f0;eip=0x003faa; 	X(PUSH(*(dw*)(raddr(es,bx+0x28))));	// 96415 push    word ptr es:[bx+28h] ;~ 28F0:3FAA
cs=0x28f0;eip=0x003fae; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E))));	// 96416 push    word ptr es:[bx+2Eh] ;~ 28F0:3FAE
cs=0x28f0;eip=0x003fb2; 	X(PUSH(*(dw*)(raddr(es,bx+0x2C))));	// 96417 push    word ptr es:[bx+2Ch] ;~ 28F0:3FB2
cs=0x28f0;eip=0x003fb6; 	R(CALL(sub_3ba8c,0));	// 96418 call    sub_3BA8C ;~ 28F0:3FB6
cs=0x28f0;eip=0x003fb9; 	R(JMP(loc_3b4b4));	// 96419 jmp     short loc_3B4B4 ;~ 28F0:3FB9
loc_3b49b:
	// 10575 
cs=0x28f0;eip=0x003fbb; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96423 mov     ax, word ptr [bp+arg_0] ;~ 28F0:3FBB
cs=0x28f0;eip=0x003fbe; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96424 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:3FBE
cs=0x28f0;eip=0x003fc1; 	T(ADD(ax, 0x20));	// 96425 add     ax, 20h ; ' ' ;~ 28F0:3FC1
cs=0x28f0;eip=0x003fc4; 	X(PUSH(dx));	// 96426 push    dx ;~ 28F0:3FC4
cs=0x28f0;eip=0x003fc5; 	X(PUSH(ax));	// 96427 push    ax ;~ 28F0:3FC5
cs=0x28f0;eip=0x003fc6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96428 les     bx, [bp+arg_0] ;~ 28F0:3FC6
cs=0x28f0;eip=0x003fc9; 	X(PUSH(*(dw*)(raddr(es,bx+0x36))));	// 96429 push    word ptr es:[bx+36h] ;~ 28F0:3FC9
cs=0x28f0;eip=0x003fcd; 	X(PUSH(*(dw*)(raddr(es,bx+0x34))));	// 96430 push    word ptr es:[bx+34h] ;~ 28F0:3FCD
cs=0x28f0;eip=0x003fd1; 	R(CALL(sub_3b9eb,0));	// 96431 call    sub_3B9EB ;~ 28F0:3FD1
loc_3b4b4:
	// 10576 
cs=0x28f0;eip=0x003fd4; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96434 mov     ax, word ptr [bp+arg_0] ;~ 28F0:3FD4
cs=0x28f0;eip=0x003fd7; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96435 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:3FD7
cs=0x28f0;eip=0x003fda; 	T(ADD(ax, 0x40));	// 96436 add     ax, 40h ; '@' ;~ 28F0:3FDA
cs=0x28f0;eip=0x003fdd; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 96437 mov     [bp+var_4], ax ;~ 28F0:3FDD
cs=0x28f0;eip=0x003fe0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 96438 mov     [bp+var_2], dx ;~ 28F0:3FE0
cs=0x28f0;eip=0x003fe3; 	T(CMP(*(dw*)((&unk_57114)), 0));	// 96439 cmp     word ptr unk_57114, 0 ;~ 28F0:3FE3
cs=0x28f0;eip=0x003fe8; 	R(JZ(loc_3b4fc));	// 96440 jz      short loc_3B4FC ;~ 28F0:3FE8
cs=0x28f0;eip=0x003fea; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96441 mov     ax, word ptr [bp+arg_0] ;~ 28F0:3FEA
cs=0x28f0;eip=0x003fed; 	T(ADD(ax, 0x40));	// 96442 add     ax, 40h ; '@' ;~ 28F0:3FED
cs=0x28f0;eip=0x003ff0; 	X(PUSH(dx));	// 96443 push    dx ;~ 28F0:3FF0
cs=0x28f0;eip=0x003ff1; 	X(PUSH(ax));	// 96444 push    ax ;~ 28F0:3FF1
cs=0x28f0;eip=0x003ff2; 	X(PUSH(*(dw*)((&unk_57114))));	// 96445 push    word ptr unk_57114 ;~ 28F0:3FF2
cs=0x28f0;eip=0x003ff6; 	R(CALL(sub_3c13f,0));	// 96446 call    sub_3C13F ;~ 28F0:3FF6
cs=0x28f0;eip=0x003ff9; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96447 mov     ax, word ptr [bp+arg_0] ;~ 28F0:3FF9
cs=0x28f0;eip=0x003ffc; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96448 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:3FFC
cs=0x28f0;eip=0x003fff; 	T(ADD(ax, 0x40));	// 96449 add     ax, 40h ; '@' ;~ 28F0:3FFF
cs=0x28f0;eip=0x004002; 	X(PUSH(dx));	// 96450 push    dx ;~ 28F0:4002
cs=0x28f0;eip=0x004003; 	X(PUSH(ax));	// 96451 push    ax ;~ 28F0:4003
cs=0x28f0;eip=0x004004; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96452 les     bx, [bp+arg_0] ;~ 28F0:4004
cs=0x28f0;eip=0x004007; 	X(PUSH(*(dw*)(raddr(es,bx+0x4A))));	// 96453 push    word ptr es:[bx+4Ah] ;~ 28F0:4007
cs=0x28f0;eip=0x00400b; 	X(PUSH(*(dw*)(raddr(es,bx+0x48))));	// 96454 push    word ptr es:[bx+48h] ;~ 28F0:400B
cs=0x28f0;eip=0x00400f; 	X(PUSH(*(dw*)(raddr(es,bx+0x4E))));	// 96455 push    word ptr es:[bx+4Eh] ;~ 28F0:400F
cs=0x28f0;eip=0x004013; 	X(PUSH(*(dw*)(raddr(es,bx+0x4C))));	// 96456 push    word ptr es:[bx+4Ch] ;~ 28F0:4013
cs=0x28f0;eip=0x004017; 	R(CALL(sub_3ba8c,0));	// 96457 call    sub_3BA8C ;~ 28F0:4017
cs=0x28f0;eip=0x00401a; 	R(JMP(loc_3b515));	// 96458 jmp     short loc_3B515 ;~ 28F0:401A
loc_3b4fc:
	// 10577 
cs=0x28f0;eip=0x00401c; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96462 mov     ax, word ptr [bp+arg_0] ;~ 28F0:401C
cs=0x28f0;eip=0x00401f; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96463 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:401F
cs=0x28f0;eip=0x004022; 	T(ADD(ax, 0x40));	// 96464 add     ax, 40h ; '@' ;~ 28F0:4022
cs=0x28f0;eip=0x004025; 	X(PUSH(dx));	// 96465 push    dx ;~ 28F0:4025
cs=0x28f0;eip=0x004026; 	X(PUSH(ax));	// 96466 push    ax ;~ 28F0:4026
cs=0x28f0;eip=0x004027; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96467 les     bx, [bp+arg_0] ;~ 28F0:4027
cs=0x28f0;eip=0x00402a; 	X(PUSH(*(dw*)(raddr(es,bx+0x56))));	// 96468 push    word ptr es:[bx+56h] ;~ 28F0:402A
cs=0x28f0;eip=0x00402e; 	X(PUSH(*(dw*)(raddr(es,bx+0x54))));	// 96469 push    word ptr es:[bx+54h] ;~ 28F0:402E
cs=0x28f0;eip=0x004032; 	R(CALL(sub_3b9eb,0));	// 96470 call    sub_3B9EB ;~ 28F0:4032
loc_3b515:
	// 10578 
cs=0x28f0;eip=0x004035; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96473 les     bx, [bp+arg_0] ;~ 28F0:4035
cs=0x28f0;eip=0x004038; 	T(SUB(ax, ax));	// 96474 sub     ax, ax ;~ 28F0:4038
cs=0x28f0;eip=0x00403a; 	X(MOV(*(dw*)(raddr(es,bx+0x0A2)), ax));	// 96475 mov     es:[bx+0A2h], ax ;~ 28F0:403A
cs=0x28f0;eip=0x00403f; 	X(MOV(*(dw*)(raddr(es,bx+0x0A0)), ax));	// 96476 mov     es:[bx+0A0h], ax ;~ 28F0:403F
cs=0x28f0;eip=0x004044; 	T(MOV(ax, bx));	// 96477 mov     ax, bx ;~ 28F0:4044
cs=0x28f0;eip=0x004046; 	T(MOV(dx, es));	// 96478 mov     dx, es ;~ 28F0:4046
cs=0x28f0;eip=0x004048; 	T(ADD(ax, 0x2BC));	// 96479 add     ax, 2BCh ;~ 28F0:4048
cs=0x28f0;eip=0x00404b; 	X(PUSH(dx));	// 96480 push    dx ;~ 28F0:404B
cs=0x28f0;eip=0x00404c; 	X(PUSH(ax));	// 96481 push    ax ;~ 28F0:404C
cs=0x28f0;eip=0x00404d; 	X(PUSH(*(dw*)(raddr(es,bx+0x2D2))));	// 96482 push    word ptr es:[bx+2D2h] ;~ 28F0:404D
cs=0x28f0;eip=0x004052; 	X(PUSH(*(dw*)(raddr(es,bx+0x2D0))));	// 96483 push    word ptr es:[bx+2D0h] ;~ 28F0:4052
cs=0x28f0;eip=0x004057; 	R(CALL(sub_3b9eb,0));	// 96484 call    sub_3B9EB ;~ 28F0:4057
cs=0x28f0;eip=0x00405a; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96485 mov     ax, word ptr [bp+arg_0] ;~ 28F0:405A
cs=0x28f0;eip=0x00405d; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96486 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:405D
cs=0x28f0;eip=0x004060; 	T(ADD(ax, 0x29C));	// 96487 add     ax, 29Ch ;~ 28F0:4060
cs=0x28f0;eip=0x004063; 	X(PUSH(dx));	// 96488 push    dx ;~ 28F0:4063
cs=0x28f0;eip=0x004064; 	X(PUSH(ax));	// 96489 push    ax ;~ 28F0:4064
cs=0x28f0;eip=0x004065; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96490 les     bx, [bp+arg_0] ;~ 28F0:4065
cs=0x28f0;eip=0x004068; 	X(PUSH(*(dw*)(raddr(es,bx+0x2B2))));	// 96491 push    word ptr es:[bx+2B2h] ;~ 28F0:4068
cs=0x28f0;eip=0x00406d; 	X(PUSH(*(dw*)(raddr(es,bx+0x2B0))));	// 96492 push    word ptr es:[bx+2B0h] ;~ 28F0:406D
cs=0x28f0;eip=0x004072; 	R(CALL(sub_3b9eb,0));	// 96493 call    sub_3B9EB ;~ 28F0:4072
cs=0x28f0;eip=0x004075; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96494 push    word ptr [bp+arg_0+2] ;~ 28F0:4075
cs=0x28f0;eip=0x004078; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96495 push    word ptr [bp+arg_0] ;~ 28F0:4078
cs=0x28f0;eip=0x00407b; 	R(CALL(sub_3b300,0));	// 96496 call    sub_3B300 ;~ 28F0:407B
cs=0x28f0;eip=0x00407e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96497 les     bx, [bp+arg_0] ;~ 28F0:407E
cs=0x28f0;eip=0x004081; 	T(CMP(*(raddr(es,bx+0x215)), 0));	// 96498 cmp     byte ptr es:[bx+215h], 0 ;~ 28F0:4081
cs=0x28f0;eip=0x004087; 	R(JZ(loc_3b587));	// 96499 jz      short loc_3B587 ;~ 28F0:4087
cs=0x28f0;eip=0x004089; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 96500 mov     ax, es:[bx+120h] ;~ 28F0:4089
cs=0x28f0;eip=0x00408e; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 96501 mov     dx, es:[bx+122h] ;~ 28F0:408E
cs=0x28f0;eip=0x004093; 	T(OR(dx, dx));	// 96502 or      dx, dx ;~ 28F0:4093
cs=0x28f0;eip=0x004095; 	R(JG(loc_3b57d));	// 96503 jg      short loc_3B57D ;~ 28F0:4095
cs=0x28f0;eip=0x004097; 	R(JGE(loc_3b57d));	// 96504 jge     short loc_3B57D ;~ 28F0:4097
cs=0x28f0;eip=0x004099; 	T(SUB(dx, dx));	// 96505 sub     dx, dx ;~ 28F0:4099
cs=0x28f0;eip=0x00409b; 	T(SUB(ax, ax));	// 96506 sub     ax, ax ;~ 28F0:409B
loc_3b57d:
	// 10579 
cs=0x28f0;eip=0x00409d; 	X(MOV(*(dw*)(raddr(es,bx+0x120)), ax));	// 96510 mov     es:[bx+120h], ax ;~ 28F0:409D
cs=0x28f0;eip=0x0040a2; 	X(MOV(*(dw*)(raddr(es,bx+0x122)), dx));	// 96511 mov     es:[bx+122h], dx ;~ 28F0:40A2
loc_3b587:
	// 10580 
cs=0x28f0;eip=0x0040a7; 	T(CMP(*(dw*)(raddr(es,bx+0x162)), 0));	// 96514 cmp     word ptr es:[bx+162h], 0 ;~ 28F0:40A7
cs=0x28f0;eip=0x0040ad; 	R(JGE(loc_3b5cc));	// 96515 jge     short loc_3B5CC ;~ 28F0:40AD
cs=0x28f0;eip=0x0040af; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 96516 mov     ax, es:[bx+2FAh] ;~ 28F0:40AF
cs=0x28f0;eip=0x0040b4; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 96517 mov     dx, es:[bx+2FCh] ;~ 28F0:40B4
cs=0x28f0;eip=0x0040b9; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 96518 add     ax, es:[bx+302h] ;~ 28F0:40B9
cs=0x28f0;eip=0x0040be; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 96519 adc     dx, es:[bx+304h] ;~ 28F0:40BE
cs=0x28f0;eip=0x0040c3; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 96520 add     ax, es:[bx+20Eh] ;~ 28F0:40C3
cs=0x28f0;eip=0x0040c8; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 96521 adc     dx, es:[bx+210h] ;~ 28F0:40C8
cs=0x28f0;eip=0x0040cd; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 96522 les     bx, es:[bx+31Ch] ;~ 28F0:40CD
cs=0x28f0;eip=0x0040d2; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 96523 cmp     dx, es:[bx+0Ch] ;~ 28F0:40D2
cs=0x28f0;eip=0x0040d6; 	R(JG(loc_3b602));	// 96524 jg      short loc_3B602 ;~ 28F0:40D6
cs=0x28f0;eip=0x0040d8; 	R(JL(loc_3b5c0));	// 96525 jl      short loc_3B5C0 ;~ 28F0:40D8
cs=0x28f0;eip=0x0040da; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 96526 cmp     ax, es:[bx+0Ah] ;~ 28F0:40DA
cs=0x28f0;eip=0x0040de; 	R(JA(loc_3b602));	// 96527 ja      short loc_3B602 ;~ 28F0:40DE
loc_3b5c0:
	// 10581 
cs=0x28f0;eip=0x0040e0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96530 les     bx, [bp+arg_0] ;~ 28F0:40E0
cs=0x28f0;eip=0x0040e3; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), 6));	// 96531 mov     word ptr es:[bx+332h], 6 ;~ 28F0:40E3
cs=0x28f0;eip=0x0040ea; 	R(JMP(loc_3b602));	// 96532 jmp     short loc_3B602 ;~ 28F0:40EA
loc_3b5cc:
	// 10582 
cs=0x28f0;eip=0x0040ec; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 96536 mov     ax, es:[bx+2FAh] ;~ 28F0:40EC
cs=0x28f0;eip=0x0040f1; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 96537 mov     dx, es:[bx+2FCh] ;~ 28F0:40F1
cs=0x28f0;eip=0x0040f6; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 96538 add     ax, es:[bx+302h] ;~ 28F0:40F6
cs=0x28f0;eip=0x0040fb; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 96539 adc     dx, es:[bx+304h] ;~ 28F0:40FB
cs=0x28f0;eip=0x004100; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 96540 les     bx, es:[bx+31Ch] ;~ 28F0:4100
cs=0x28f0;eip=0x004105; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 96541 cmp     dx, es:[bx+0Ch] ;~ 28F0:4105
cs=0x28f0;eip=0x004109; 	R(JL(loc_3b602));	// 96542 jl      short loc_3B602 ;~ 28F0:4109
cs=0x28f0;eip=0x00410b; 	R(JG(loc_3b5f3));	// 96543 jg      short loc_3B5F3 ;~ 28F0:410B
cs=0x28f0;eip=0x00410d; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 96544 cmp     ax, es:[bx+0Ah] ;~ 28F0:410D
cs=0x28f0;eip=0x004111; 	R(JC(loc_3b602));	// 96545 jb      short loc_3B602 ;~ 28F0:4111
loc_3b5f3:
	// 10583 
cs=0x28f0;eip=0x004113; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96548 les     bx, [bp+arg_0] ;~ 28F0:4113
cs=0x28f0;eip=0x004116; 	T(SUB(ax, ax));	// 96549 sub     ax, ax ;~ 28F0:4116
cs=0x28f0;eip=0x004118; 	X(MOV(*(dw*)(raddr(es,bx+0x162)), ax));	// 96550 mov     es:[bx+162h], ax ;~ 28F0:4118
cs=0x28f0;eip=0x00411d; 	X(MOV(*(dw*)(raddr(es,bx+0x160)), ax));	// 96551 mov     es:[bx+160h], ax ;~ 28F0:411D
loc_3b602:
	// 10584 
cs=0x28f0;eip=0x004122; 	T(MOV(sp, bp));	// 96555 mov     sp, bp ;~ 28F0:4122
cs=0x28f0;eip=0x004124; 	X(POP(bp));	// 96556 pop     bp ;~ 28F0:4124
cs=0x28f0;eip=0x004125; 	R(RETN(4));	// 96557 retn    4 ;~ 28F0:4125
sub_3b608:
	// 96565 
#undef var_2
#define var_2 -2
	// 96567 var_2           = word ptr -2 ;~ 28F0:4128
#undef arg_0
#define arg_0 4
	// 96568 arg_0           = dword ptr  4 ;~ 28F0:4128
cs=0x28f0;eip=0x004128; 	X(PUSH(bp));	// 96570 push    bp ;~ 28F0:4128
cs=0x28f0;eip=0x004129; 	T(MOV(bp, sp));	// 96571 mov     bp, sp ;~ 28F0:4129
cs=0x28f0;eip=0x00412b; 	T(SUB(sp, 2));	// 96572 sub     sp, 2 ;~ 28F0:412B
cs=0x28f0;eip=0x00412e; 	T(CMP(*(dw*)((&unk_57116)), 0));	// 96573 cmp     word ptr unk_57116, 0 ;~ 28F0:412E
cs=0x28f0;eip=0x004133; 	R(JZ(loc_3b685));	// 96574 jz      short loc_3B685 ;~ 28F0:4133
cs=0x28f0;eip=0x004135; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96575 mov     ax, word ptr [bp+arg_0] ;~ 28F0:4135
cs=0x28f0;eip=0x004138; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96576 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:4138
cs=0x28f0;eip=0x00413b; 	T(ADD(ax, 0x2BC));	// 96577 add     ax, 2BCh ;~ 28F0:413B
cs=0x28f0;eip=0x00413e; 	X(PUSH(dx));	// 96578 push    dx ;~ 28F0:413E
cs=0x28f0;eip=0x00413f; 	X(PUSH(ax));	// 96579 push    ax ;~ 28F0:413F
cs=0x28f0;eip=0x004140; 	T(MOV(ax, *(dw*)((&unk_57116))));	// 96580 mov     ax, word ptr unk_57116 ;~ 28F0:4140
cs=0x28f0;eip=0x004143; 	T(NEG(ax));	// 96581 neg     ax ;~ 28F0:4143
cs=0x28f0;eip=0x004145; 	X(PUSH(ax));	// 96582 push    ax ;~ 28F0:4145
cs=0x28f0;eip=0x004146; 	R(CALL(sub_3bd9b,0));	// 96583 call    sub_3BD9B ;~ 28F0:4146
cs=0x28f0;eip=0x004149; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96584 mov     ax, word ptr [bp+arg_0] ;~ 28F0:4149
cs=0x28f0;eip=0x00414c; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96585 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:414C
cs=0x28f0;eip=0x00414f; 	T(ADD(ax, 0x2BC));	// 96586 add     ax, 2BCh ;~ 28F0:414F
cs=0x28f0;eip=0x004152; 	X(PUSH(dx));	// 96587 push    dx ;~ 28F0:4152
cs=0x28f0;eip=0x004153; 	X(PUSH(ax));	// 96588 push    ax ;~ 28F0:4153
cs=0x28f0;eip=0x004154; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96589 les     bx, [bp+arg_0] ;~ 28F0:4154
cs=0x28f0;eip=0x004157; 	X(PUSH(*(dw*)(raddr(es,bx+0x2C6))));	// 96590 push    word ptr es:[bx+2C6h] ;~ 28F0:4157
cs=0x28f0;eip=0x00415c; 	X(PUSH(*(dw*)(raddr(es,bx+0x2C4))));	// 96591 push    word ptr es:[bx+2C4h] ;~ 28F0:415C
cs=0x28f0;eip=0x004161; 	X(PUSH(*(dw*)(raddr(es,bx+0x2CA))));	// 96592 push    word ptr es:[bx+2CAh] ;~ 28F0:4161
cs=0x28f0;eip=0x004166; 	X(PUSH(*(dw*)(raddr(es,bx+0x2C8))));	// 96593 push    word ptr es:[bx+2C8h] ;~ 28F0:4166
cs=0x28f0;eip=0x00416b; 	R(CALL(sub_3ba8c,0));	// 96594 call    sub_3BA8C ;~ 28F0:416B
cs=0x28f0;eip=0x00416e; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96595 mov     ax, word ptr [bp+arg_0] ;~ 28F0:416E
cs=0x28f0;eip=0x004171; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96596 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:4171
cs=0x28f0;eip=0x004174; 	T(ADD(ax, 0x20));	// 96597 add     ax, 20h ; ' ' ;~ 28F0:4174
cs=0x28f0;eip=0x004177; 	X(PUSH(dx));	// 96598 push    dx ;~ 28F0:4177
cs=0x28f0;eip=0x004178; 	X(PUSH(ax));	// 96599 push    ax ;~ 28F0:4178
cs=0x28f0;eip=0x004179; 	T(MOV(ax, *(dw*)((&unk_57116))));	// 96600 mov     ax, word ptr unk_57116 ;~ 28F0:4179
cs=0x28f0;eip=0x00417c; 	T(NEG(ax));	// 96601 neg     ax ;~ 28F0:417C
cs=0x28f0;eip=0x00417e; 	X(PUSH(ax));	// 96602 push    ax ;~ 28F0:417E
cs=0x28f0;eip=0x00417f; 	R(CALL(sub_3bd9b,0));	// 96603 call    sub_3BD9B ;~ 28F0:417F
cs=0x28f0;eip=0x004182; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96604 mov     ax, word ptr [bp+arg_0] ;~ 28F0:4182
cs=0x28f0;eip=0x004185; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96605 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:4185
cs=0x28f0;eip=0x004188; 	T(ADD(ax, 0x20));	// 96606 add     ax, 20h ; ' ' ;~ 28F0:4188
cs=0x28f0;eip=0x00418b; 	X(PUSH(dx));	// 96607 push    dx ;~ 28F0:418B
cs=0x28f0;eip=0x00418c; 	X(PUSH(ax));	// 96608 push    ax ;~ 28F0:418C
cs=0x28f0;eip=0x00418d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96609 les     bx, [bp+arg_0] ;~ 28F0:418D
cs=0x28f0;eip=0x004190; 	X(PUSH(*(dw*)(raddr(es,bx+0x2A))));	// 96610 push    word ptr es:[bx+2Ah] ;~ 28F0:4190
cs=0x28f0;eip=0x004194; 	X(PUSH(*(dw*)(raddr(es,bx+0x28))));	// 96611 push    word ptr es:[bx+28h] ;~ 28F0:4194
cs=0x28f0;eip=0x004198; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E))));	// 96612 push    word ptr es:[bx+2Eh] ;~ 28F0:4198
cs=0x28f0;eip=0x00419c; 	X(PUSH(*(dw*)(raddr(es,bx+0x2C))));	// 96613 push    word ptr es:[bx+2Ch] ;~ 28F0:419C
cs=0x28f0;eip=0x0041a0; 	R(CALL(sub_3ba8c,0));	// 96614 call    sub_3BA8C ;~ 28F0:41A0
cs=0x28f0;eip=0x0041a3; 	R(JMP(loc_3b6b9));	// 96615 jmp     short loc_3B6B9 ;~ 28F0:41A3
loc_3b685:
	// 10585 
cs=0x28f0;eip=0x0041a5; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96619 mov     ax, word ptr [bp+arg_0] ;~ 28F0:41A5
cs=0x28f0;eip=0x0041a8; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96620 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:41A8
cs=0x28f0;eip=0x0041ab; 	T(ADD(ax, 0x2BC));	// 96621 add     ax, 2BCh ;~ 28F0:41AB
cs=0x28f0;eip=0x0041ae; 	X(PUSH(dx));	// 96622 push    dx ;~ 28F0:41AE
cs=0x28f0;eip=0x0041af; 	X(PUSH(ax));	// 96623 push    ax ;~ 28F0:41AF
cs=0x28f0;eip=0x0041b0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96624 les     bx, [bp+arg_0] ;~ 28F0:41B0
cs=0x28f0;eip=0x0041b3; 	X(PUSH(*(dw*)(raddr(es,bx+0x2D2))));	// 96625 push    word ptr es:[bx+2D2h] ;~ 28F0:41B3
cs=0x28f0;eip=0x0041b8; 	X(PUSH(*(dw*)(raddr(es,bx+0x2D0))));	// 96626 push    word ptr es:[bx+2D0h] ;~ 28F0:41B8
cs=0x28f0;eip=0x0041bd; 	R(CALL(sub_3b9eb,0));	// 96627 call    sub_3B9EB ;~ 28F0:41BD
cs=0x28f0;eip=0x0041c0; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96628 mov     ax, word ptr [bp+arg_0] ;~ 28F0:41C0
cs=0x28f0;eip=0x0041c3; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96629 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:41C3
cs=0x28f0;eip=0x0041c6; 	T(ADD(ax, 0x20));	// 96630 add     ax, 20h ; ' ' ;~ 28F0:41C6
cs=0x28f0;eip=0x0041c9; 	X(PUSH(dx));	// 96631 push    dx ;~ 28F0:41C9
cs=0x28f0;eip=0x0041ca; 	X(PUSH(ax));	// 96632 push    ax ;~ 28F0:41CA
cs=0x28f0;eip=0x0041cb; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96633 les     bx, [bp+arg_0] ;~ 28F0:41CB
cs=0x28f0;eip=0x0041ce; 	X(PUSH(*(dw*)(raddr(es,bx+0x36))));	// 96634 push    word ptr es:[bx+36h] ;~ 28F0:41CE
cs=0x28f0;eip=0x0041d2; 	X(PUSH(*(dw*)(raddr(es,bx+0x34))));	// 96635 push    word ptr es:[bx+34h] ;~ 28F0:41D2
cs=0x28f0;eip=0x0041d6; 	R(CALL(sub_3b9eb,0));	// 96636 call    sub_3B9EB ;~ 28F0:41D6
loc_3b6b9:
	// 10586 
cs=0x28f0;eip=0x0041d9; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96639 les     bx, [bp+arg_0] ;~ 28F0:41D9
cs=0x28f0;eip=0x0041dc; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2BC))));	// 96640 mov     ax, es:[bx+2BCh] ;~ 28F0:41DC
cs=0x28f0;eip=0x0041e1; 	T(OR(ax, *(dw*)(raddr(es,bx+0x2BE))));	// 96641 or      ax, es:[bx+2BEh] ;~ 28F0:41E1
cs=0x28f0;eip=0x0041e6; 	R(JNZ(loc_3b6cb));	// 96642 jnz     short loc_3B6CB ;~ 28F0:41E6
cs=0x28f0;eip=0x0041e8; 	R(JMP(loc_3b74f));	// 96643 jmp     loc_3B74F ;~ 28F0:41E8
loc_3b6cb:
	// 10587 
cs=0x28f0;eip=0x0041eb; 	T(CMP(*(dw*)(raddr(es,bx+0x2BE)), 0));	// 96647 cmp     word ptr es:[bx+2BEh], 0 ;~ 28F0:41EB
cs=0x28f0;eip=0x0041f1; 	R(JL(loc_3b6f5));	// 96648 jl      short loc_3B6F5 ;~ 28F0:41F1
cs=0x28f0;eip=0x0041f3; 	R(JG(loc_3b6dd));	// 96649 jg      short loc_3B6DD ;~ 28F0:41F3
cs=0x28f0;eip=0x0041f5; 	T(CMP(*(dw*)(raddr(es,bx+0x2BC)), 0));	// 96650 cmp     word ptr es:[bx+2BCh], 0 ;~ 28F0:41F5
cs=0x28f0;eip=0x0041fb; 	R(JZ(loc_3b6f5));	// 96651 jz      short loc_3B6F5 ;~ 28F0:41FB
loc_3b6dd:
	// 10588 
cs=0x28f0;eip=0x0041fd; 	T(MOV(ax, bx));	// 96654 mov     ax, bx ;~ 28F0:41FD
cs=0x28f0;eip=0x0041ff; 	T(MOV(dx, es));	// 96655 mov     dx, es ;~ 28F0:41FF
cs=0x28f0;eip=0x004201; 	T(ADD(ax, 0x29C));	// 96656 add     ax, 29Ch ;~ 28F0:4201
cs=0x28f0;eip=0x004204; 	X(PUSH(dx));	// 96657 push    dx ;~ 28F0:4204
cs=0x28f0;eip=0x004205; 	X(PUSH(ax));	// 96658 push    ax ;~ 28F0:4205
cs=0x28f0;eip=0x004206; 	X(PUSH(*(dw*)(raddr(es,bx+0x2C6))));	// 96659 push    word ptr es:[bx+2C6h] ;~ 28F0:4206
cs=0x28f0;eip=0x00420b; 	X(PUSH(*(dw*)(raddr(es,bx+0x2C4))));	// 96660 push    word ptr es:[bx+2C4h] ;~ 28F0:420B
cs=0x28f0;eip=0x004210; 	T(MOV(ax, 0x64));	// 96661 mov     ax, 64h ; 'd' ;~ 28F0:4210
cs=0x28f0;eip=0x004213; 	R(JMP(loc_3b70b));	// 96662 jmp     short loc_3B70B ;~ 28F0:4213
loc_3b6f5:
	// 10589 
cs=0x28f0;eip=0x004215; 	T(MOV(ax, bx));	// 96667 mov     ax, bx ;~ 28F0:4215
cs=0x28f0;eip=0x004217; 	T(MOV(dx, es));	// 96668 mov     dx, es ;~ 28F0:4217
cs=0x28f0;eip=0x004219; 	T(ADD(ax, 0x29C));	// 96669 add     ax, 29Ch ;~ 28F0:4219
cs=0x28f0;eip=0x00421c; 	X(PUSH(dx));	// 96670 push    dx ;~ 28F0:421C
cs=0x28f0;eip=0x00421d; 	X(PUSH(ax));	// 96671 push    ax ;~ 28F0:421D
cs=0x28f0;eip=0x00421e; 	X(PUSH(*(dw*)(raddr(es,bx+0x2CA))));	// 96672 push    word ptr es:[bx+2CAh] ;~ 28F0:421E
cs=0x28f0;eip=0x004223; 	X(PUSH(*(dw*)(raddr(es,bx+0x2C8))));	// 96673 push    word ptr es:[bx+2C8h] ;~ 28F0:4223
cs=0x28f0;eip=0x004228; 	T(MOV(ax, 0x0FF9C));	// 96674 mov     ax, 0FF9Ch ;~ 28F0:4228
loc_3b70b:
	// 10590 
cs=0x28f0;eip=0x00422b; 	T(CWD);	// 96677 cwd ;~ 28F0:422B
cs=0x28f0;eip=0x00422c; 	X(PUSH(dx));	// 96678 push    dx ;~ 28F0:422C
cs=0x28f0;eip=0x00422d; 	X(PUSH(ax));	// 96679 push    ax ;~ 28F0:422D
cs=0x28f0;eip=0x00422e; 	X(PUSH(*(dw*)(raddr(es,bx+0x2BE))));	// 96680 push    word ptr es:[bx+2BEh] ;~ 28F0:422E
cs=0x28f0;eip=0x004233; 	X(PUSH(*(dw*)(raddr(es,bx+0x2BC))));	// 96681 push    word ptr es:[bx+2BCh] ;~ 28F0:4233
cs=0x28f0;eip=0x004238; 	R(CALLF(sub_105c2,0));	// 96682 call    sub_105C2 ;~ 28F0:4238
cs=0x28f0;eip=0x00423d; 	X(PUSH(dx));	// 96683 push    dx ;~ 28F0:423D
cs=0x28f0;eip=0x00423e; 	X(PUSH(ax));	// 96684 push    ax ;~ 28F0:423E
cs=0x28f0;eip=0x00423f; 	R(CALLF(sub_10526,0));	// 96685 call    sub_10526 ;~ 28F0:423F
cs=0x28f0;eip=0x004244; 	X(PUSH(ax));	// 96686 push    ax ;~ 28F0:4244
cs=0x28f0;eip=0x004245; 	R(CALL(sub_3bd9b,0));	// 96687 call    sub_3BD9B ;~ 28F0:4245
cs=0x28f0;eip=0x004248; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96688 mov     ax, word ptr [bp+arg_0] ;~ 28F0:4248
cs=0x28f0;eip=0x00424b; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96689 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:424B
cs=0x28f0;eip=0x00424e; 	T(ADD(ax, 0x29C));	// 96690 add     ax, 29Ch ;~ 28F0:424E
cs=0x28f0;eip=0x004251; 	X(PUSH(dx));	// 96691 push    dx ;~ 28F0:4251
cs=0x28f0;eip=0x004252; 	X(PUSH(ax));	// 96692 push    ax ;~ 28F0:4252
cs=0x28f0;eip=0x004253; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96693 les     bx, [bp+arg_0] ;~ 28F0:4253
cs=0x28f0;eip=0x004256; 	X(PUSH(*(dw*)(raddr(es,bx+0x2A6))));	// 96694 push    word ptr es:[bx+2A6h] ;~ 28F0:4256
cs=0x28f0;eip=0x00425b; 	X(PUSH(*(dw*)(raddr(es,bx+0x2A4))));	// 96695 push    word ptr es:[bx+2A4h] ;~ 28F0:425B
cs=0x28f0;eip=0x004260; 	X(PUSH(*(dw*)(raddr(es,bx+0x2AA))));	// 96696 push    word ptr es:[bx+2AAh] ;~ 28F0:4260
cs=0x28f0;eip=0x004265; 	X(PUSH(*(dw*)(raddr(es,bx+0x2A8))));	// 96697 push    word ptr es:[bx+2A8h] ;~ 28F0:4265
cs=0x28f0;eip=0x00426a; 	R(CALL(sub_3ba8c,0));	// 96698 call    sub_3BA8C ;~ 28F0:426A
cs=0x28f0;eip=0x00426d; 	R(JMP(loc_3b76a));	// 96699 jmp     short loc_3B76A ;~ 28F0:426D
loc_3b74f:
	// 10591 
cs=0x28f0;eip=0x00426f; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96703 mov     ax, word ptr [bp+arg_0] ;~ 28F0:426F
cs=0x28f0;eip=0x004272; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96704 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:4272
cs=0x28f0;eip=0x004275; 	T(ADD(ax, 0x29C));	// 96705 add     ax, 29Ch ;~ 28F0:4275
cs=0x28f0;eip=0x004278; 	X(PUSH(dx));	// 96706 push    dx ;~ 28F0:4278
cs=0x28f0;eip=0x004279; 	X(PUSH(ax));	// 96707 push    ax ;~ 28F0:4279
cs=0x28f0;eip=0x00427a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96708 les     bx, [bp+arg_0] ;~ 28F0:427A
cs=0x28f0;eip=0x00427d; 	X(PUSH(*(dw*)(raddr(es,bx+0x2B2))));	// 96709 push    word ptr es:[bx+2B2h] ;~ 28F0:427D
cs=0x28f0;eip=0x004282; 	X(PUSH(*(dw*)(raddr(es,bx+0x2B0))));	// 96710 push    word ptr es:[bx+2B0h] ;~ 28F0:4282
cs=0x28f0;eip=0x004287; 	R(CALL(sub_3b9eb,0));	// 96711 call    sub_3B9EB ;~ 28F0:4287
loc_3b76a:
	// 10592 
cs=0x28f0;eip=0x00428a; 	T(CMP(*(dw*)((&unk_57114)), 0));	// 96714 cmp     word ptr unk_57114, 0 ;~ 28F0:428A
cs=0x28f0;eip=0x00428f; 	R(JZ(loc_3b7e0));	// 96715 jz      short loc_3B7E0 ;~ 28F0:428F
cs=0x28f0;eip=0x004291; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96716 push    word ptr [bp+arg_0+2] ;~ 28F0:4291
cs=0x28f0;eip=0x004294; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96717 push    word ptr [bp+arg_0] ;~ 28F0:4294
cs=0x28f0;eip=0x004297; 	X(PUSH(*(dw*)((&unk_57114))));	// 96718 push    word ptr unk_57114 ;~ 28F0:4297
cs=0x28f0;eip=0x00429b; 	R(CALL(sub_3c13f,0));	// 96719 call    sub_3C13F ;~ 28F0:429B
cs=0x28f0;eip=0x00429e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96720 push    word ptr [bp+arg_0+2] ;~ 28F0:429E
cs=0x28f0;eip=0x0042a1; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96721 push    word ptr [bp+arg_0] ;~ 28F0:42A1
cs=0x28f0;eip=0x0042a4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96722 les     bx, [bp+arg_0] ;~ 28F0:42A4
cs=0x28f0;eip=0x0042a7; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 96723 push    word ptr es:[bx+0Ah] ;~ 28F0:42A7
cs=0x28f0;eip=0x0042ab; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 96724 push    word ptr es:[bx+8] ;~ 28F0:42AB
cs=0x28f0;eip=0x0042af; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 96725 push    word ptr es:[bx+0Eh] ;~ 28F0:42AF
cs=0x28f0;eip=0x0042b3; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 96726 push    word ptr es:[bx+0Ch] ;~ 28F0:42B3
cs=0x28f0;eip=0x0042b7; 	R(CALL(sub_3ba8c,0));	// 96727 call    sub_3BA8C ;~ 28F0:42B7
cs=0x28f0;eip=0x0042ba; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96728 push    word ptr [bp+arg_0+2] ;~ 28F0:42BA
cs=0x28f0;eip=0x0042bd; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96729 push    word ptr [bp+arg_0] ;~ 28F0:42BD
cs=0x28f0;eip=0x0042c0; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96730 push    word ptr [bp+arg_0+2] ;~ 28F0:42C0
cs=0x28f0;eip=0x0042c3; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96731 push    word ptr [bp+arg_0] ;~ 28F0:42C3
cs=0x28f0;eip=0x0042c6; 	R(CALL(sub_3b97e,0));	// 96732 call    sub_3B97E ;~ 28F0:42C6
cs=0x28f0;eip=0x0042c9; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96733 mov     ax, word ptr [bp+arg_0] ;~ 28F0:42C9
cs=0x28f0;eip=0x0042cc; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96734 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:42CC
cs=0x28f0;eip=0x0042cf; 	T(ADD(ax, 0x40));	// 96735 add     ax, 40h ; '@' ;~ 28F0:42CF
cs=0x28f0;eip=0x0042d2; 	X(PUSH(dx));	// 96736 push    dx ;~ 28F0:42D2
cs=0x28f0;eip=0x0042d3; 	X(PUSH(ax));	// 96737 push    ax ;~ 28F0:42D3
cs=0x28f0;eip=0x0042d4; 	T(MOV(ax, *(dw*)((&unk_57114))));	// 96738 mov     ax, word ptr unk_57114 ;~ 28F0:42D4
cs=0x28f0;eip=0x0042d7; 	T(NEG(ax));	// 96739 neg     ax ;~ 28F0:42D7
cs=0x28f0;eip=0x0042d9; 	X(PUSH(ax));	// 96740 push    ax ;~ 28F0:42D9
cs=0x28f0;eip=0x0042da; 	R(CALL(sub_3c13f,0));	// 96741 call    sub_3C13F ;~ 28F0:42DA
cs=0x28f0;eip=0x0042dd; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96742 mov     ax, word ptr [bp+arg_0] ;~ 28F0:42DD
cs=0x28f0;eip=0x0042e0; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96743 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:42E0
cs=0x28f0;eip=0x0042e3; 	T(ADD(ax, 0x40));	// 96744 add     ax, 40h ; '@' ;~ 28F0:42E3
cs=0x28f0;eip=0x0042e6; 	X(PUSH(dx));	// 96745 push    dx ;~ 28F0:42E6
cs=0x28f0;eip=0x0042e7; 	X(PUSH(ax));	// 96746 push    ax ;~ 28F0:42E7
cs=0x28f0;eip=0x0042e8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96747 les     bx, [bp+arg_0] ;~ 28F0:42E8
cs=0x28f0;eip=0x0042eb; 	X(PUSH(*(dw*)(raddr(es,bx+0x4A))));	// 96748 push    word ptr es:[bx+4Ah] ;~ 28F0:42EB
cs=0x28f0;eip=0x0042ef; 	X(PUSH(*(dw*)(raddr(es,bx+0x48))));	// 96749 push    word ptr es:[bx+48h] ;~ 28F0:42EF
cs=0x28f0;eip=0x0042f3; 	X(PUSH(*(dw*)(raddr(es,bx+0x4E))));	// 96750 push    word ptr es:[bx+4Eh] ;~ 28F0:42F3
cs=0x28f0;eip=0x0042f7; 	X(PUSH(*(dw*)(raddr(es,bx+0x4C))));	// 96751 push    word ptr es:[bx+4Ch] ;~ 28F0:42F7
cs=0x28f0;eip=0x0042fb; 	R(CALL(sub_3ba8c,0));	// 96752 call    sub_3BA8C ;~ 28F0:42FB
cs=0x28f0;eip=0x0042fe; 	R(JMP(loc_3b80d));	// 96753 jmp     short loc_3B80D ;~ 28F0:42FE
loc_3b7e0:
	// 10593 
cs=0x28f0;eip=0x004300; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96757 push    word ptr [bp+arg_0+2] ;~ 28F0:4300
cs=0x28f0;eip=0x004303; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96758 push    word ptr [bp+arg_0] ;~ 28F0:4303
cs=0x28f0;eip=0x004306; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96759 les     bx, [bp+arg_0] ;~ 28F0:4306
cs=0x28f0;eip=0x004309; 	X(PUSH(*(dw*)(raddr(es,bx+0x16))));	// 96760 push    word ptr es:[bx+16h] ;~ 28F0:4309
cs=0x28f0;eip=0x00430d; 	X(PUSH(*(dw*)(raddr(es,bx+0x14))));	// 96761 push    word ptr es:[bx+14h] ;~ 28F0:430D
cs=0x28f0;eip=0x004311; 	R(CALL(sub_3b9eb,0));	// 96762 call    sub_3B9EB ;~ 28F0:4311
cs=0x28f0;eip=0x004314; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96763 mov     ax, word ptr [bp+arg_0] ;~ 28F0:4314
cs=0x28f0;eip=0x004317; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96764 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:4317
cs=0x28f0;eip=0x00431a; 	T(ADD(ax, 0x40));	// 96765 add     ax, 40h ; '@' ;~ 28F0:431A
cs=0x28f0;eip=0x00431d; 	X(PUSH(dx));	// 96766 push    dx ;~ 28F0:431D
cs=0x28f0;eip=0x00431e; 	X(PUSH(ax));	// 96767 push    ax ;~ 28F0:431E
cs=0x28f0;eip=0x00431f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96768 les     bx, [bp+arg_0] ;~ 28F0:431F
cs=0x28f0;eip=0x004322; 	X(PUSH(*(dw*)(raddr(es,bx+0x56))));	// 96769 push    word ptr es:[bx+56h] ;~ 28F0:4322
cs=0x28f0;eip=0x004326; 	X(PUSH(*(dw*)(raddr(es,bx+0x54))));	// 96770 push    word ptr es:[bx+54h] ;~ 28F0:4326
cs=0x28f0;eip=0x00432a; 	R(CALL(sub_3b9eb,0));	// 96771 call    sub_3B9EB ;~ 28F0:432A
loc_3b80d:
	// 10594 
cs=0x28f0;eip=0x00432d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96774 push    word ptr [bp+arg_0+2] ;~ 28F0:432D
cs=0x28f0;eip=0x004330; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96775 push    word ptr [bp+arg_0] ;~ 28F0:4330
cs=0x28f0;eip=0x004333; 	R(CALL(sub_3a84e,0));	// 96776 call    sub_3A84E ;~ 28F0:4333
cs=0x28f0;eip=0x004336; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96777 push    word ptr [bp+arg_0+2] ;~ 28F0:4336
cs=0x28f0;eip=0x004339; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96778 push    word ptr [bp+arg_0] ;~ 28F0:4339
cs=0x28f0;eip=0x00433c; 	R(CALL(sub_3b300,0));	// 96779 call    sub_3B300 ;~ 28F0:433C
cs=0x28f0;eip=0x00433f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96780 les     bx, [bp+arg_0] ;~ 28F0:433F
cs=0x28f0;eip=0x004342; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x32C))));	// 96781 mov     ax, es:[bx+32Ch] ;~ 28F0:4342
cs=0x28f0;eip=0x004347; 	T(OR(ax, *(dw*)(raddr(es,bx+0x32E))));	// 96782 or      ax, es:[bx+32Eh] ;~ 28F0:4347
cs=0x28f0;eip=0x00434c; 	R(JZ(loc_3b88a));	// 96783 jz      short loc_3B88A ;~ 28F0:434C
cs=0x28f0;eip=0x00434e; 	T(MOV(ax, 0x206));	// 96784 mov     ax, 206h ;~ 28F0:434E
cs=0x28f0;eip=0x004351; 	T(MOV(dx, seg_offset(seg041)));	// 96785 mov     dx, seg seg041 ;~ 28F0:4351
cs=0x28f0;eip=0x004354; 	X(PUSH(dx));	// 96786 push    dx ;~ 28F0:4354
cs=0x28f0;eip=0x004355; 	X(PUSH(ax));	// 96787 push    ax ;~ 28F0:4355
cs=0x28f0;eip=0x004356; 	R(CALLF(sub_1c5f1,0));	// 96788 call    sub_1C5F1 ;~ 28F0:4356
cs=0x28f0;eip=0x00435b; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 96789 mov     ax, word ptr unk_57111 ;~ 28F0:435B
cs=0x28f0;eip=0x00435e; 	T(CWD);	// 96790 cwd ;~ 28F0:435E
cs=0x28f0;eip=0x00435f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96791 les     bx, [bp+arg_0] ;~ 28F0:435F
cs=0x28f0;eip=0x004362; 	X(SUB(*(dw*)(raddr(es,bx+0x32C)), ax));	// 96792 sub     es:[bx+32Ch], ax ;~ 28F0:4362
cs=0x28f0;eip=0x004367; 	X(SBB(*(dw*)(raddr(es,bx+0x32E)), dx));	// 96793 sbb     es:[bx+32Eh], dx ;~ 28F0:4367
cs=0x28f0;eip=0x00436c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x32C))));	// 96794 mov     ax, es:[bx+32Ch] ;~ 28F0:436C
cs=0x28f0;eip=0x004371; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x32E))));	// 96795 mov     dx, es:[bx+32Eh] ;~ 28F0:4371
cs=0x28f0;eip=0x004376; 	T(OR(dx, dx));	// 96796 or      dx, dx ;~ 28F0:4376
cs=0x28f0;eip=0x004378; 	R(JG(loc_3b860));	// 96797 jg      short loc_3B860 ;~ 28F0:4378
cs=0x28f0;eip=0x00437a; 	R(JGE(loc_3b860));	// 96798 jge     short loc_3B860 ;~ 28F0:437A
cs=0x28f0;eip=0x00437c; 	T(SUB(dx, dx));	// 96799 sub     dx, dx ;~ 28F0:437C
cs=0x28f0;eip=0x00437e; 	T(SUB(ax, ax));	// 96800 sub     ax, ax ;~ 28F0:437E
loc_3b860:
	// 10595 
cs=0x28f0;eip=0x004380; 	X(MOV(*(dw*)(raddr(es,bx+0x32C)), ax));	// 96804 mov     es:[bx+32Ch], ax ;~ 28F0:4380
cs=0x28f0;eip=0x004385; 	X(MOV(*(dw*)(raddr(es,bx+0x32E)), dx));	// 96805 mov     es:[bx+32Eh], dx ;~ 28F0:4385
cs=0x28f0;eip=0x00438a; 	T(OR(ax, dx));	// 96806 or      ax, dx ;~ 28F0:438A
cs=0x28f0;eip=0x00438c; 	R(JNZ(loc_3b88a));	// 96807 jnz     short loc_3B88A ;~ 28F0:438C
cs=0x28f0;eip=0x00438e; 	X(PUSH(es));	// 96808 push    es ;~ 28F0:438E
cs=0x28f0;eip=0x00438f; 	X(PUSH(bx));	// 96809 push    bx ;~ 28F0:438F
cs=0x28f0;eip=0x004390; 	R(CALL(sub_38ca4,0));	// 96810 call    sub_38CA4 ;~ 28F0:4390
cs=0x28f0;eip=0x004393; 	T(OR(ax, ax));	// 96811 or      ax, ax ;~ 28F0:4393
cs=0x28f0;eip=0x004395; 	R(JZ(loc_3b880));	// 96812 jz      short loc_3B880 ;~ 28F0:4395
cs=0x28f0;eip=0x004397; 	T(MOV(ax, 0x228));	// 96813 mov     ax, 228h ;~ 28F0:4397
cs=0x28f0;eip=0x00439a; 	T(MOV(dx, seg_offset(seg041)));	// 96814 mov     dx, seg seg041 ;~ 28F0:439A
cs=0x28f0;eip=0x00439d; 	X(PUSH(dx));	// 96815 push    dx ;~ 28F0:439D
cs=0x28f0;eip=0x00439e; 	R(JMP(loc_3b884));	// 96816 jmp     short loc_3B884 ;~ 28F0:439E
loc_3b880:
	// 10596 
cs=0x28f0;eip=0x0043a0; 	T(MOV(ax, 0x288));	// 96820 mov     ax, 288h ;~ 28F0:43A0
cs=0x28f0;eip=0x0043a3; 	X(PUSH(ds));	// 96821 push    ds ;~ 28F0:43A3
loc_3b884:
	// 10597 
cs=0x28f0;eip=0x0043a4; 	X(PUSH(ax));	// 96824 push    ax ;~ 28F0:43A4
cs=0x28f0;eip=0x0043a5; 	R(CALLF(sub_1c5f1,0));	// 96825 call    sub_1C5F1 ;~ 28F0:43A5
loc_3b88a:
	// 10598 
cs=0x28f0;eip=0x0043aa; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96829 push    word ptr [bp+arg_0+2] ;~ 28F0:43AA
cs=0x28f0;eip=0x0043ad; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96830 push    word ptr [bp+arg_0] ;~ 28F0:43AD
cs=0x28f0;eip=0x0043b0; 	R(CALL(sub_3a769,0));	// 96831 call    sub_3A769 ;~ 28F0:43B0
cs=0x28f0;eip=0x0043b3; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 96832 mov     [bp+var_2], ax ;~ 28F0:43B3
cs=0x28f0;eip=0x0043b6; 	T(OR(ax, ax));	// 96833 or      ax, ax ;~ 28F0:43B6
cs=0x28f0;eip=0x0043b8; 	R(JNZ(loc_3b89d));	// 96834 jnz     short loc_3B89D ;~ 28F0:43B8
cs=0x28f0;eip=0x0043ba; 	R(JMP(loc_3b92f));	// 96835 jmp     loc_3B92F ;~ 28F0:43BA
loc_3b89d:
	// 10599 
cs=0x28f0;eip=0x0043bd; 	T(CMP(ax, 1));	// 96839 cmp     ax, 1 ;~ 28F0:43BD
cs=0x28f0;eip=0x0043c0; 	R(JNZ(loc_3b8c2));	// 96840 jnz     short loc_3B8C2 ;~ 28F0:43C0
cs=0x28f0;eip=0x0043c2; 	T(MOV(ax, 0x1DB));	// 96841 mov     ax, 1DBh ;~ 28F0:43C2
cs=0x28f0;eip=0x0043c5; 	T(MOV(dx, seg_offset(seg041)));	// 96842 mov     dx, seg seg041 ;~ 28F0:43C5
cs=0x28f0;eip=0x0043c8; 	X(PUSH(dx));	// 96843 push    dx ;~ 28F0:43C8
cs=0x28f0;eip=0x0043c9; 	X(PUSH(ax));	// 96844 push    ax ;~ 28F0:43C9
cs=0x28f0;eip=0x0043ca; 	R(CALLF(sub_1c605,0));	// 96845 call    sub_1C605 ;~ 28F0:43CA
cs=0x28f0;eip=0x0043cf; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96846 push    word ptr [bp+arg_0+2] ;~ 28F0:43CF
cs=0x28f0;eip=0x0043d2; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96847 push    word ptr [bp+arg_0] ;~ 28F0:43D2
cs=0x28f0;eip=0x0043d5; 	T(MOV(ax, 7));	// 96848 mov     ax, 7 ;~ 28F0:43D5
cs=0x28f0;eip=0x0043d8; 	X(PUSH(ax));	// 96849 push    ax ;~ 28F0:43D8
cs=0x28f0;eip=0x0043d9; 	T(SUB(ax, ax));	// 96850 sub     ax, ax ;~ 28F0:43D9
cs=0x28f0;eip=0x0043db; 	X(PUSH(ax));	// 96851 push    ax ;~ 28F0:43DB
cs=0x28f0;eip=0x0043dc; 	X(PUSH(ax));	// 96852 push    ax ;~ 28F0:43DC
cs=0x28f0;eip=0x0043dd; 	R(CALL(sub_3842f,0));	// 96853 call    sub_3842F ;~ 28F0:43DD
cs=0x28f0;eip=0x0043e0; 	R(JMP(loc_3b92f));	// 96854 jmp     short loc_3B92F ;~ 28F0:43E0
loc_3b8c2:
	// 10600 
cs=0x28f0;eip=0x0043e2; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 2));	// 96858 cmp     [bp+var_2], 2 ;~ 28F0:43E2
cs=0x28f0;eip=0x0043e6; 	R(JNZ(loc_3b8f3));	// 96859 jnz     short loc_3B8F3 ;~ 28F0:43E6
cs=0x28f0;eip=0x0043e8; 	T(MOV(ax, 0x1E1));	// 96860 mov     ax, 1E1h ;~ 28F0:43E8
cs=0x28f0;eip=0x0043eb; 	T(MOV(dx, seg_offset(seg041)));	// 96861 mov     dx, seg seg041 ;~ 28F0:43EB
cs=0x28f0;eip=0x0043ee; 	X(PUSH(dx));	// 96862 push    dx ;~ 28F0:43EE
cs=0x28f0;eip=0x0043ef; 	X(PUSH(ax));	// 96863 push    ax ;~ 28F0:43EF
cs=0x28f0;eip=0x0043f0; 	R(CALLF(sub_1c605,0));	// 96864 call    sub_1C605 ;~ 28F0:43F0
cs=0x28f0;eip=0x0043f5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96865 les     bx, [bp+arg_0] ;~ 28F0:43F5
cs=0x28f0;eip=0x0043f8; 	T(CMP(*(dw*)(raddr(es,bx+0x2EA)), 0));	// 96866 cmp     word ptr es:[bx+2EAh], 0 ;~ 28F0:43F8
cs=0x28f0;eip=0x0043fe; 	R(JZ(loc_3b92f));	// 96867 jz      short loc_3B92F ;~ 28F0:43FE
cs=0x28f0;eip=0x004400; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2EA))));	// 96868 mov     ax, es:[bx+2EAh] ;~ 28F0:4400
cs=0x28f0;eip=0x004405; 	X(MOV(*(dw*)(raddr(es,bx+0x2EC)), ax));	// 96869 mov     es:[bx+2ECh], ax ;~ 28F0:4405
cs=0x28f0;eip=0x00440a; 	X(MOV(*(dw*)(raddr(es,bx+0x2EA)), 0));	// 96870 mov     word ptr es:[bx+2EAh], 0 ;~ 28F0:440A
cs=0x28f0;eip=0x004411; 	R(JMP(loc_3b92f));	// 96871 jmp     short loc_3B92F ;~ 28F0:4411
loc_3b8f3:
	// 10601 
cs=0x28f0;eip=0x004413; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 3));	// 96875 cmp     [bp+var_2], 3 ;~ 28F0:4413
cs=0x28f0;eip=0x004417; 	R(JNZ(loc_3b92f));	// 96876 jnz     short loc_3B92F ;~ 28F0:4417
cs=0x28f0;eip=0x004419; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96877 les     bx, [bp+arg_0] ;~ 28F0:4419
cs=0x28f0;eip=0x00441c; 	T(CMP(*(dw*)(raddr(es,bx+0x2E6)), 0x400));	// 96878 cmp     word ptr es:[bx+2E6h], 400h ;~ 28F0:441C
cs=0x28f0;eip=0x004423; 	R(JNZ(loc_3b90d));	// 96879 jnz     short loc_3B90D ;~ 28F0:4423
cs=0x28f0;eip=0x004425; 	T(CMP(*(dw*)(raddr(es,bx+0x2E8)), 0));	// 96880 cmp     word ptr es:[bx+2E8h], 0 ;~ 28F0:4425
cs=0x28f0;eip=0x00442b; 	R(JZ(loc_3b92f));	// 96881 jz      short loc_3B92F ;~ 28F0:442B
loc_3b90d:
	// 10602 
cs=0x28f0;eip=0x00442d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2E6))));	// 96884 mov     ax, es:[bx+2E6h] ;~ 28F0:442D
cs=0x28f0;eip=0x004432; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2E8))));	// 96885 mov     dx, es:[bx+2E8h] ;~ 28F0:4432
cs=0x28f0;eip=0x004437; 	X(MOV(*(dw*)(raddr(es,bx+0x2EE)), ax));	// 96886 mov     es:[bx+2EEh], ax ;~ 28F0:4437
cs=0x28f0;eip=0x00443c; 	X(MOV(*(dw*)(raddr(es,bx+0x2F0)), dx));	// 96887 mov     es:[bx+2F0h], dx ;~ 28F0:443C
cs=0x28f0;eip=0x004441; 	X(MOV(*(dw*)(raddr(es,bx+0x2E6)), 0x400));	// 96888 mov     word ptr es:[bx+2E6h], 400h ;~ 28F0:4441
cs=0x28f0;eip=0x004448; 	X(MOV(*(dw*)(raddr(es,bx+0x2E8)), 0));	// 96889 mov     word ptr es:[bx+2E8h], 0 ;~ 28F0:4448
loc_3b92f:
	// 10603 
cs=0x28f0;eip=0x00444f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96893 les     bx, [bp+arg_0] ;~ 28F0:444F
cs=0x28f0;eip=0x004452; 	T(CMP(*(dw*)(raddr(es,bx+0x2EA)), 0));	// 96894 cmp     word ptr es:[bx+2EAh], 0 ;~ 28F0:4452
cs=0x28f0;eip=0x004458; 	R(JNZ(loc_3b94c));	// 96895 jnz     short loc_3B94C ;~ 28F0:4458
cs=0x28f0;eip=0x00445a; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 2));	// 96896 cmp     [bp+var_2], 2 ;~ 28F0:445A
cs=0x28f0;eip=0x00445e; 	R(JZ(loc_3b94c));	// 96897 jz      short loc_3B94C ;~ 28F0:445E
cs=0x28f0;eip=0x004460; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2EC))));	// 96898 mov     ax, es:[bx+2ECh] ;~ 28F0:4460
cs=0x28f0;eip=0x004465; 	X(MOV(*(dw*)(raddr(es,bx+0x2EA)), ax));	// 96899 mov     es:[bx+2EAh], ax ;~ 28F0:4465
cs=0x28f0;eip=0x00446a; 	R(JMP(loc_3b977));	// 96900 jmp     short loc_3B977 ;~ 28F0:446A
loc_3b94c:
	// 10604 
cs=0x28f0;eip=0x00446c; 	T(CMP(*(dw*)(raddr(es,bx+0x2E6)), 0x400));	// 96905 cmp     word ptr es:[bx+2E6h], 400h ;~ 28F0:446C
cs=0x28f0;eip=0x004473; 	R(JNZ(loc_3b977));	// 96906 jnz     short loc_3B977 ;~ 28F0:4473
cs=0x28f0;eip=0x004475; 	T(CMP(*(dw*)(raddr(es,bx+0x2E8)), 0));	// 96907 cmp     word ptr es:[bx+2E8h], 0 ;~ 28F0:4475
cs=0x28f0;eip=0x00447b; 	R(JNZ(loc_3b977));	// 96908 jnz     short loc_3B977 ;~ 28F0:447B
cs=0x28f0;eip=0x00447d; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 3));	// 96909 cmp     [bp+var_2], 3 ;~ 28F0:447D
cs=0x28f0;eip=0x004481; 	R(JZ(loc_3b977));	// 96910 jz      short loc_3B977 ;~ 28F0:4481
cs=0x28f0;eip=0x004483; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2EE))));	// 96911 mov     ax, es:[bx+2EEh] ;~ 28F0:4483
cs=0x28f0;eip=0x004488; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2F0))));	// 96912 mov     dx, es:[bx+2F0h] ;~ 28F0:4488
cs=0x28f0;eip=0x00448d; 	X(MOV(*(dw*)(raddr(es,bx+0x2E6)), ax));	// 96913 mov     es:[bx+2E6h], ax ;~ 28F0:448D
cs=0x28f0;eip=0x004492; 	X(MOV(*(dw*)(raddr(es,bx+0x2E8)), dx));	// 96914 mov     es:[bx+2E8h], dx ;~ 28F0:4492
loc_3b977:
	// 10605 
cs=0x28f0;eip=0x004497; 	T(MOV(sp, bp));	// 96918 mov     sp, bp ;~ 28F0:4497
cs=0x28f0;eip=0x004499; 	X(POP(bp));	// 96919 pop     bp ;~ 28F0:4499
cs=0x28f0;eip=0x00449a; 	R(RETN(4));	// 96920 retn    4 ;~ 28F0:449A
sub_3b97e:
	// 96930 
#undef var_2
#define var_2 -2
	// 96933 var_2           = word ptr -2 ;~ 28F0:449E
#undef arg_0
#define arg_0 4
	// 96934 arg_0           = dword ptr  4 ;~ 28F0:449E
#undef arg_4
#define arg_4 8
	// 96935 arg_4           = dword ptr  8 ;~ 28F0:449E
cs=0x28f0;eip=0x00449e; 	X(PUSH(bp));	// 96937 push    bp ;~ 28F0:449E
cs=0x28f0;eip=0x00449f; 	T(MOV(bp, sp));	// 96938 mov     bp, sp ;~ 28F0:449F
cs=0x28f0;eip=0x0044a1; 	T(SUB(sp, 2));	// 96939 sub     sp, 2 ;~ 28F0:44A1
cs=0x28f0;eip=0x0044a4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 96940 les     bx, [bp+arg_4] ;~ 28F0:44A4
cs=0x28f0;eip=0x0044a7; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), 0));	// 96941 cmp     word ptr es:[bx+122h], 0 ;~ 28F0:44A7
cs=0x28f0;eip=0x0044ad; 	R(JG(loc_3b9e5));	// 96942 jg      short loc_3B9E5 ;~ 28F0:44AD
cs=0x28f0;eip=0x0044af; 	R(JL(loc_3b99a));	// 96943 jl      short loc_3B99A ;~ 28F0:44AF
cs=0x28f0;eip=0x0044b1; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), 0x5A00));	// 96944 cmp     word ptr es:[bx+120h], 5A00h ;~ 28F0:44B1
cs=0x28f0;eip=0x0044b8; 	R(JNC(loc_3b9e5));	// 96945 jnb     short loc_3B9E5 ;~ 28F0:44B8
loc_3b99a:
	// 10606 
cs=0x28f0;eip=0x0044ba; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 96948 mov     ax, es:[bx+120h] ;~ 28F0:44BA
cs=0x28f0;eip=0x0044bf; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 96949 mov     dx, es:[bx+122h] ;~ 28F0:44BF
cs=0x28f0;eip=0x0044c4; 	T(MOV(cl, 5));	// 96950 mov     cl, 5 ;~ 28F0:44C4
cs=0x28f0;eip=0x0044c6; 	R(CALLF(sub_10240,0));	// 96951 call    sub_10240 ;~ 28F0:44C6
cs=0x28f0;eip=0x0044cb; 	X(PUSH(ax));	// 96952 push    ax ;~ 28F0:44CB
cs=0x28f0;eip=0x0044cc; 	R(CALLF(sub_24cf8,0));	// 96953 call    sub_24CF8 ;~ 28F0:44CC
cs=0x28f0;eip=0x0044d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 96954 mov     [bp+var_2], ax ;~ 28F0:44D1
cs=0x28f0;eip=0x0044d4; 	X(PUSH(ax));	// 96955 push    ax ;~ 28F0:44D4
cs=0x28f0;eip=0x0044d5; 	R(CALLF(sub_27c9e,0));	// 96956 call    sub_27C9E ;~ 28F0:44D5
cs=0x28f0;eip=0x0044da; 	X(PUSH(dx));	// 96957 push    dx ;~ 28F0:44DA
cs=0x28f0;eip=0x0044db; 	X(PUSH(ax));	// 96958 push    ax ;~ 28F0:44DB
cs=0x28f0;eip=0x0044dc; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96959 les     bx, [bp+arg_0] ;~ 28F0:44DC
cs=0x28f0;eip=0x0044df; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 96960 mov     ax, es:[bx] ;~ 28F0:44DF
cs=0x28f0;eip=0x0044e2; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 96961 mov     dx, es:[bx+2] ;~ 28F0:44E2
cs=0x28f0;eip=0x0044e6; 	T(MOV(cl, 8));	// 96962 mov     cl, 8 ;~ 28F0:44E6
cs=0x28f0;eip=0x0044e8; 	R(CALLF(sub_10240,0));	// 96963 call    sub_10240 ;~ 28F0:44E8
cs=0x28f0;eip=0x0044ed; 	X(PUSH(dx));	// 96964 push    dx ;~ 28F0:44ED
cs=0x28f0;eip=0x0044ee; 	X(PUSH(ax));	// 96965 push    ax ;~ 28F0:44EE
cs=0x28f0;eip=0x0044ef; 	R(CALLF(sub_105c2,0));	// 96966 call    sub_105C2 ;~ 28F0:44EF
cs=0x28f0;eip=0x0044f4; 	T(MOV(cl, 8));	// 96967 mov     cl, 8 ;~ 28F0:44F4
cs=0x28f0;eip=0x0044f6; 	R(CALLF(sub_10240,0));	// 96968 call    sub_10240 ;~ 28F0:44F6
cs=0x28f0;eip=0x0044fb; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96969 les     bx, [bp+arg_0] ;~ 28F0:44FB
cs=0x28f0;eip=0x0044fe; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 96970 mov     es:[bx], ax ;~ 28F0:44FE
cs=0x28f0;eip=0x004501; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 96971 mov     es:[bx+2], dx ;~ 28F0:4501
loc_3b9e5:
	// 10607 
cs=0x28f0;eip=0x004505; 	T(MOV(sp, bp));	// 96975 mov     sp, bp ;~ 28F0:4505
cs=0x28f0;eip=0x004507; 	X(POP(bp));	// 96976 pop     bp ;~ 28F0:4507
cs=0x28f0;eip=0x004508; 	R(RETN(8));	// 96977 retn    8 ;~ 28F0:4508
sub_3b9eb:
	// 96985 
#undef var_4
#define var_4 -4
	// 96988 var_4           = word ptr -4 ;~ 28F0:450B
#undef var_2
#define var_2 -2
	// 96989 var_2           = word ptr -2 ;~ 28F0:450B
#undef arg_0
#define arg_0 4
	// 96990 arg_0           = word ptr  4 ;~ 28F0:450B
#undef arg_2
#define arg_2 6
	// 96991 arg_2           = word ptr  6 ;~ 28F0:450B
#undef arg_4
#define arg_4 8
	// 96992 arg_4           = dword ptr  8 ;~ 28F0:450B
cs=0x28f0;eip=0x00450b; 	X(PUSH(bp));	// 96994 push    bp ;~ 28F0:450B
cs=0x28f0;eip=0x00450c; 	T(MOV(bp, sp));	// 96995 mov     bp, sp ;~ 28F0:450C
cs=0x28f0;eip=0x00450e; 	T(SUB(sp, 4));	// 96996 sub     sp, 4 ;~ 28F0:450E
cs=0x28f0;eip=0x004511; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 96997 les     bx, [bp+arg_4] ;~ 28F0:4511
cs=0x28f0;eip=0x004514; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 96998 mov     ax, es:[bx] ;~ 28F0:4514
cs=0x28f0;eip=0x004517; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 96999 mov     dx, es:[bx+2] ;~ 28F0:4517
cs=0x28f0;eip=0x00451b; 	T(SUB(ax, *(dw*)(raddr(es,bx+4))));	// 97000 sub     ax, es:[bx+4] ;~ 28F0:451B
cs=0x28f0;eip=0x00451f; 	T(SBB(dx, *(dw*)(raddr(es,bx+6))));	// 97001 sbb     dx, es:[bx+6] ;~ 28F0:451F
cs=0x28f0;eip=0x004523; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97002 mov     [bp+var_4], ax ;~ 28F0:4523
cs=0x28f0;eip=0x004526; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97003 mov     [bp+var_2], dx ;~ 28F0:4526
cs=0x28f0;eip=0x004529; 	T(MOV(ax, 0x100));	// 97004 mov     ax, 100h ;~ 28F0:4529
cs=0x28f0;eip=0x00452c; 	T(CWD);	// 97005 cwd ;~ 28F0:452C
cs=0x28f0;eip=0x00452d; 	X(PUSH(dx));	// 97006 push    dx ;~ 28F0:452D
cs=0x28f0;eip=0x00452e; 	X(PUSH(ax));	// 97007 push    ax ;~ 28F0:452E
cs=0x28f0;eip=0x00452f; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 97008 mov     ax, word ptr unk_57111 ;~ 28F0:452F
cs=0x28f0;eip=0x004532; 	T(CWD);	// 97009 cwd ;~ 28F0:4532
cs=0x28f0;eip=0x004533; 	X(PUSH(dx));	// 97010 push    dx ;~ 28F0:4533
cs=0x28f0;eip=0x004534; 	X(PUSH(ax));	// 97011 push    ax ;~ 28F0:4534
cs=0x28f0;eip=0x004535; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 97012 push    [bp+arg_2] ;~ 28F0:4535
cs=0x28f0;eip=0x004538; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 97013 push    [bp+arg_0] ;~ 28F0:4538
cs=0x28f0;eip=0x00453b; 	R(CALLF(sub_105c2,0));	// 97014 call    sub_105C2 ;~ 28F0:453B
cs=0x28f0;eip=0x004540; 	X(PUSH(dx));	// 97015 push    dx ;~ 28F0:4540
cs=0x28f0;eip=0x004541; 	X(PUSH(ax));	// 97016 push    ax ;~ 28F0:4541
cs=0x28f0;eip=0x004542; 	R(CALLF(sub_10526,0));	// 97017 call    sub_10526 ;~ 28F0:4542
cs=0x28f0;eip=0x004547; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 97018 mov     [bp+arg_0], ax ;~ 28F0:4547
cs=0x28f0;eip=0x00454a; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), dx));	// 97019 mov     [bp+arg_2], dx ;~ 28F0:454A
cs=0x28f0;eip=0x00454d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 97020 mov     ax, [bp+var_4] ;~ 28F0:454D
cs=0x28f0;eip=0x004550; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 97021 mov     dx, [bp+var_2] ;~ 28F0:4550
cs=0x28f0;eip=0x004553; 	T(OR(dx, dx));	// 97022 or      dx, dx ;~ 28F0:4553
cs=0x28f0;eip=0x004555; 	R(JGE(loc_3ba3e));	// 97023 jge     short loc_3BA3E ;~ 28F0:4555
cs=0x28f0;eip=0x004557; 	T(NEG(ax));	// 97024 neg     ax ;~ 28F0:4557
cs=0x28f0;eip=0x004559; 	T(ADC(dx, 0));	// 97025 adc     dx, 0 ;~ 28F0:4559
cs=0x28f0;eip=0x00455c; 	T(NEG(dx));	// 97026 neg     dx ;~ 28F0:455C
loc_3ba3e:
	// 10608 
cs=0x28f0;eip=0x00455e; 	T(CMP(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 97029 cmp     dx, [bp+arg_2] ;~ 28F0:455E
cs=0x28f0;eip=0x004561; 	R(JG(loc_3ba5e));	// 97030 jg      short loc_3BA5E ;~ 28F0:4561
cs=0x28f0;eip=0x004563; 	R(JL(loc_3ba4a));	// 97031 jl      short loc_3BA4A ;~ 28F0:4563
cs=0x28f0;eip=0x004565; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97032 cmp     ax, [bp+arg_0] ;~ 28F0:4565
cs=0x28f0;eip=0x004568; 	R(JA(loc_3ba5e));	// 97033 ja      short loc_3BA5E ;~ 28F0:4568
loc_3ba4a:
	// 10609 
cs=0x28f0;eip=0x00456a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 97036 les     bx, [bp+arg_4] ;~ 28F0:456A
cs=0x28f0;eip=0x00456d; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 97037 mov     ax, es:[bx+4] ;~ 28F0:456D
cs=0x28f0;eip=0x004571; 	T(MOV(dx, *(dw*)(raddr(es,bx+6))));	// 97038 mov     dx, es:[bx+6] ;~ 28F0:4571
cs=0x28f0;eip=0x004575; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 97039 mov     es:[bx], ax ;~ 28F0:4575
cs=0x28f0;eip=0x004578; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 97040 mov     es:[bx+2], dx ;~ 28F0:4578
cs=0x28f0;eip=0x00457c; 	R(JMP(loc_3ba86));	// 97041 jmp     short loc_3BA86 ;~ 28F0:457C
loc_3ba5e:
	// 10610 
cs=0x28f0;eip=0x00457e; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 97046 cmp     [bp+var_2], 0 ;~ 28F0:457E
cs=0x28f0;eip=0x004582; 	R(JGE(loc_3ba76));	// 97047 jge     short loc_3BA76 ;~ 28F0:4582
cs=0x28f0;eip=0x004584; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 97048 les     bx, [bp+arg_4] ;~ 28F0:4584
cs=0x28f0;eip=0x004587; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97049 mov     ax, [bp+arg_0] ;~ 28F0:4587
cs=0x28f0;eip=0x00458a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 97050 mov     dx, [bp+arg_2] ;~ 28F0:458A
cs=0x28f0;eip=0x00458d; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 97051 add     es:[bx], ax ;~ 28F0:458D
cs=0x28f0;eip=0x004590; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 97052 adc     es:[bx+2], dx ;~ 28F0:4590
cs=0x28f0;eip=0x004594; 	R(JMP(loc_3ba86));	// 97053 jmp     short loc_3BA86 ;~ 28F0:4594
loc_3ba76:
	// 10611 
cs=0x28f0;eip=0x004596; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 97057 les     bx, [bp+arg_4] ;~ 28F0:4596
cs=0x28f0;eip=0x004599; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97058 mov     ax, [bp+arg_0] ;~ 28F0:4599
cs=0x28f0;eip=0x00459c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 97059 mov     dx, [bp+arg_2] ;~ 28F0:459C
cs=0x28f0;eip=0x00459f; 	X(SUB(*(dw*)(raddr(es,bx)), ax));	// 97060 sub     es:[bx], ax ;~ 28F0:459F
cs=0x28f0;eip=0x0045a2; 	X(SBB(*(dw*)(raddr(es,bx+2)), dx));	// 97061 sbb     es:[bx+2], dx ;~ 28F0:45A2
loc_3ba86:
	// 10612 
cs=0x28f0;eip=0x0045a6; 	T(MOV(sp, bp));	// 97065 mov     sp, bp ;~ 28F0:45A6
cs=0x28f0;eip=0x0045a8; 	X(POP(bp));	// 97066 pop     bp ;~ 28F0:45A8
cs=0x28f0;eip=0x0045a9; 	R(RETN(8));	// 97067 retn    8 ;~ 28F0:45A9
sub_3ba8c:
	// 97075 
#undef var_4
#define var_4 -4
	// 97078 var_4           = word ptr -4 ;~ 28F0:45AC
#undef var_2
#define var_2 -2
	// 97079 var_2           = word ptr -2 ;~ 28F0:45AC
#undef arg_0
#define arg_0 4
	// 97080 arg_0           = word ptr  4 ;~ 28F0:45AC
#undef arg_2
#define arg_2 6
	// 97081 arg_2           = word ptr  6 ;~ 28F0:45AC
#undef arg_4
#define arg_4 8
	// 97082 arg_4           = word ptr  8 ;~ 28F0:45AC
#undef arg_6
#define arg_6 0x0A
	// 97083 arg_6           = word ptr  0Ah ;~ 28F0:45AC
#undef arg_8
#define arg_8 0x0C
	// 97084 arg_8           = dword ptr  0Ch ;~ 28F0:45AC
cs=0x28f0;eip=0x0045ac; 	X(PUSH(bp));	// 97086 push    bp ;~ 28F0:45AC
cs=0x28f0;eip=0x0045ad; 	T(MOV(bp, sp));	// 97087 mov     bp, sp ;~ 28F0:45AD
cs=0x28f0;eip=0x0045af; 	T(SUB(sp, 4));	// 97088 sub     sp, 4 ;~ 28F0:45AF
cs=0x28f0;eip=0x0045b2; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 97089 les     bx, [bp+arg_8] ;~ 28F0:45B2
cs=0x28f0;eip=0x0045b5; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 97090 mov     ax, es:[bx+4] ;~ 28F0:45B5
cs=0x28f0;eip=0x0045b9; 	T(MOV(dx, *(dw*)(raddr(es,bx+6))));	// 97091 mov     dx, es:[bx+6] ;~ 28F0:45B9
cs=0x28f0;eip=0x0045bd; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97092 mov     [bp+var_4], ax ;~ 28F0:45BD
cs=0x28f0;eip=0x0045c0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97093 mov     [bp+var_2], dx ;~ 28F0:45C0
cs=0x28f0;eip=0x0045c3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 97094 mov     ax, [bp+arg_4] ;~ 28F0:45C3
cs=0x28f0;eip=0x0045c6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 97095 mov     dx, [bp+arg_6] ;~ 28F0:45C6
cs=0x28f0;eip=0x0045c9; 	T(CMP(*(dw*)(raddr(es,bx+2)), dx));	// 97096 cmp     es:[bx+2], dx ;~ 28F0:45C9
cs=0x28f0;eip=0x0045cd; 	R(JL(loc_3babe));	// 97097 jl      short loc_3BABE ;~ 28F0:45CD
cs=0x28f0;eip=0x0045cf; 	R(JG(loc_3bab6));	// 97098 jg      short loc_3BAB6 ;~ 28F0:45CF
cs=0x28f0;eip=0x0045d1; 	T(CMP(*(dw*)(raddr(es,bx)), ax));	// 97099 cmp     es:[bx], ax ;~ 28F0:45D1
cs=0x28f0;eip=0x0045d4; 	R(JBE(loc_3babe));	// 97100 jbe     short loc_3BABE ;~ 28F0:45D4
loc_3bab6:
	// 10613 
cs=0x28f0;eip=0x0045d6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 97103 mov     ax, [bp+arg_4] ;~ 28F0:45D6
cs=0x28f0;eip=0x0045d9; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 97104 mov     dx, [bp+arg_6] ;~ 28F0:45D9
cs=0x28f0;eip=0x0045dc; 	R(JMP(loc_3bad7));	// 97105 jmp     short loc_3BAD7 ;~ 28F0:45DC
loc_3babe:
	// 10614 
cs=0x28f0;eip=0x0045de; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97110 mov     ax, [bp+arg_0] ;~ 28F0:45DE
cs=0x28f0;eip=0x0045e1; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 97111 mov     dx, [bp+arg_2] ;~ 28F0:45E1
cs=0x28f0;eip=0x0045e4; 	T(CMP(*(dw*)(raddr(es,bx+2)), dx));	// 97112 cmp     es:[bx+2], dx ;~ 28F0:45E4
cs=0x28f0;eip=0x0045e8; 	R(JG(loc_3baec));	// 97113 jg      short loc_3BAEC ;~ 28F0:45E8
cs=0x28f0;eip=0x0045ea; 	R(JL(loc_3bad1));	// 97114 jl      short loc_3BAD1 ;~ 28F0:45EA
cs=0x28f0;eip=0x0045ec; 	T(CMP(*(dw*)(raddr(es,bx)), ax));	// 97115 cmp     es:[bx], ax ;~ 28F0:45EC
cs=0x28f0;eip=0x0045ef; 	R(JNC(loc_3baec));	// 97116 jnb     short loc_3BAEC ;~ 28F0:45EF
loc_3bad1:
	// 10615 
cs=0x28f0;eip=0x0045f1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97119 mov     ax, [bp+arg_0] ;~ 28F0:45F1
cs=0x28f0;eip=0x0045f4; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 97120 mov     dx, [bp+arg_2] ;~ 28F0:45F4
loc_3bad7:
	// 10616 
cs=0x28f0;eip=0x0045f7; 	X(MOV(*(dw*)(raddr(es,bx+4)), ax));	// 97123 mov     es:[bx+4], ax ;~ 28F0:45F7
cs=0x28f0;eip=0x0045fb; 	X(MOV(*(dw*)(raddr(es,bx+6)), dx));	// 97124 mov     es:[bx+6], dx ;~ 28F0:45FB
cs=0x28f0;eip=0x0045ff; 	X(PUSH(es));	// 97125 push    es ;~ 28F0:45FF
cs=0x28f0;eip=0x004600; 	X(PUSH(bx));	// 97126 push    bx ;~ 28F0:4600
cs=0x28f0;eip=0x004601; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 97127 push    word ptr es:[bx+12h] ;~ 28F0:4601
cs=0x28f0;eip=0x004605; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 97128 push    word ptr es:[bx+10h] ;~ 28F0:4605
cs=0x28f0;eip=0x004609; 	R(CALL(sub_3b9eb,0));	// 97129 call    sub_3B9EB ;~ 28F0:4609
loc_3baec:
	// 10617 
cs=0x28f0;eip=0x00460c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 97133 les     bx, [bp+arg_8] ;~ 28F0:460C
cs=0x28f0;eip=0x00460f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 97134 mov     ax, [bp+var_4] ;~ 28F0:460F
cs=0x28f0;eip=0x004612; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 97135 mov     dx, [bp+var_2] ;~ 28F0:4612
cs=0x28f0;eip=0x004615; 	X(MOV(*(dw*)(raddr(es,bx+4)), ax));	// 97136 mov     es:[bx+4], ax ;~ 28F0:4615
cs=0x28f0;eip=0x004619; 	X(MOV(*(dw*)(raddr(es,bx+6)), dx));	// 97137 mov     es:[bx+6], dx ;~ 28F0:4619
cs=0x28f0;eip=0x00461d; 	T(MOV(sp, bp));	// 97138 mov     sp, bp ;~ 28F0:461D
cs=0x28f0;eip=0x00461f; 	X(POP(bp));	// 97139 pop     bp ;~ 28F0:461F
cs=0x28f0;eip=0x004620; 	R(RETN(0x0C));	// 97140 retn    0Ch ;~ 28F0:4620
sub_3bb03:
	// 97148 
#undef arg_0
#define arg_0 4
	// 97151 arg_0           = dword ptr  4 ;~ 28F0:4623
cs=0x28f0;eip=0x004623; 	X(PUSH(bp));	// 97153 push    bp ;~ 28F0:4623
cs=0x28f0;eip=0x004624; 	T(MOV(bp, sp));	// 97154 mov     bp, sp ;~ 28F0:4624
cs=0x28f0;eip=0x004626; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 97155 les     bx, [bp+arg_0] ;~ 28F0:4626
cs=0x28f0;eip=0x004629; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 97156 mov     ax, es:[bx] ;~ 28F0:4629
cs=0x28f0;eip=0x00462c; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 97157 mov     dx, es:[bx+2] ;~ 28F0:462C
cs=0x28f0;eip=0x004630; 	T(CMP(*(dw*)(raddr(es,bx+0x0A)), dx));	// 97158 cmp     es:[bx+0Ah], dx ;~ 28F0:4630
cs=0x28f0;eip=0x004634; 	R(JG(loc_3bb28));	// 97159 jg      short loc_3BB28 ;~ 28F0:4634
cs=0x28f0;eip=0x004636; 	R(JL(loc_3bb1e));	// 97160 jl      short loc_3BB1E ;~ 28F0:4636
cs=0x28f0;eip=0x004638; 	T(CMP(*(dw*)(raddr(es,bx+8)), ax));	// 97161 cmp     es:[bx+8], ax ;~ 28F0:4638
cs=0x28f0;eip=0x00463c; 	R(JNC(loc_3bb28));	// 97162 jnb     short loc_3BB28 ;~ 28F0:463C
loc_3bb1e:
	// 10618 
cs=0x28f0;eip=0x00463e; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 97165 mov     ax, es:[bx+8] ;~ 28F0:463E
cs=0x28f0;eip=0x004642; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 97166 mov     dx, es:[bx+0Ah] ;~ 28F0:4642
cs=0x28f0;eip=0x004646; 	R(JMP(loc_3bb45));	// 97167 jmp     short loc_3BB45 ;~ 28F0:4646
loc_3bb28:
	// 10619 
cs=0x28f0;eip=0x004648; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 97172 mov     ax, es:[bx] ;~ 28F0:4648
cs=0x28f0;eip=0x00464b; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 97173 mov     dx, es:[bx+2] ;~ 28F0:464B
cs=0x28f0;eip=0x00464f; 	T(CMP(*(dw*)(raddr(es,bx+0x0E)), dx));	// 97174 cmp     es:[bx+0Eh], dx ;~ 28F0:464F
cs=0x28f0;eip=0x004653; 	R(JL(loc_3bb4c));	// 97175 jl      short loc_3BB4C ;~ 28F0:4653
cs=0x28f0;eip=0x004655; 	R(JG(loc_3bb3d));	// 97176 jg      short loc_3BB3D ;~ 28F0:4655
cs=0x28f0;eip=0x004657; 	T(CMP(*(dw*)(raddr(es,bx+0x0C)), ax));	// 97177 cmp     es:[bx+0Ch], ax ;~ 28F0:4657
cs=0x28f0;eip=0x00465b; 	R(JBE(loc_3bb4c));	// 97178 jbe     short loc_3BB4C ;~ 28F0:465B
loc_3bb3d:
	// 10620 
cs=0x28f0;eip=0x00465d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 97181 mov     ax, es:[bx+0Ch] ;~ 28F0:465D
cs=0x28f0;eip=0x004661; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 97182 mov     dx, es:[bx+0Eh] ;~ 28F0:4661
loc_3bb45:
	// 10621 
cs=0x28f0;eip=0x004665; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 97185 mov     es:[bx], ax ;~ 28F0:4665
cs=0x28f0;eip=0x004668; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 97186 mov     es:[bx+2], dx ;~ 28F0:4668
loc_3bb4c:
	// 10622 
cs=0x28f0;eip=0x00466c; 	X(POP(bp));	// 97190 pop     bp ;~ 28F0:466C
cs=0x28f0;eip=0x00466d; 	R(RETN(4));	// 97191 retn    4 ;~ 28F0:466D
sub_3bb9d:
	// 97239 
#undef arg_0
#define arg_0 4
	// 97241 arg_0           = word ptr  4 ;~ 28F0:46BD
#undef arg_2
#define arg_2 6
	// 97242 arg_2           = word ptr  6 ;~ 28F0:46BD
#undef arg_4
#define arg_4 8
	// 97243 arg_4           = word ptr  8 ;~ 28F0:46BD
#undef arg_6
#define arg_6 0x0A
	// 97244 arg_6           = word ptr  0Ah ;~ 28F0:46BD
#undef arg_8
#define arg_8 0x0C
	// 97245 arg_8           = dword ptr  0Ch ;~ 28F0:46BD
cs=0x28f0;eip=0x0046bd; 	X(PUSH(bp));	// 97247 push    bp ;~ 28F0:46BD
cs=0x28f0;eip=0x0046be; 	T(MOV(bp, sp));	// 97248 mov     bp, sp ;~ 28F0:46BE
cs=0x28f0;eip=0x0046c0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 97249 les     bx, [bp+arg_8] ;~ 28F0:46C0
cs=0x28f0;eip=0x0046c3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 97250 mov     ax, [bp+arg_4] ;~ 28F0:46C3
cs=0x28f0;eip=0x0046c6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 97251 mov     dx, [bp+arg_6] ;~ 28F0:46C6
cs=0x28f0;eip=0x0046c9; 	T(CMP(*(dw*)(raddr(es,bx+2)), dx));	// 97252 cmp     es:[bx+2], dx ;~ 28F0:46C9
cs=0x28f0;eip=0x0046cd; 	R(JL(loc_3bbbe));	// 97253 jl      short loc_3BBBE ;~ 28F0:46CD
cs=0x28f0;eip=0x0046cf; 	R(JG(loc_3bbb6));	// 97254 jg      short loc_3BBB6 ;~ 28F0:46CF
cs=0x28f0;eip=0x0046d1; 	T(CMP(*(dw*)(raddr(es,bx)), ax));	// 97255 cmp     es:[bx], ax ;~ 28F0:46D1
cs=0x28f0;eip=0x0046d4; 	R(JBE(loc_3bbbe));	// 97256 jbe     short loc_3BBBE ;~ 28F0:46D4
loc_3bbb6:
	// 10628 
cs=0x28f0;eip=0x0046d6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 97259 mov     ax, [bp+arg_4] ;~ 28F0:46D6
cs=0x28f0;eip=0x0046d9; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 97260 mov     dx, [bp+arg_6] ;~ 28F0:46D9
cs=0x28f0;eip=0x0046dc; 	R(JMP(loc_3bbd7));	// 97261 jmp     short loc_3BBD7 ;~ 28F0:46DC
loc_3bbbe:
	// 10629 
cs=0x28f0;eip=0x0046de; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97266 mov     ax, [bp+arg_0] ;~ 28F0:46DE
cs=0x28f0;eip=0x0046e1; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 97267 mov     dx, [bp+arg_2] ;~ 28F0:46E1
cs=0x28f0;eip=0x0046e4; 	T(CMP(*(dw*)(raddr(es,bx+2)), dx));	// 97268 cmp     es:[bx+2], dx ;~ 28F0:46E4
cs=0x28f0;eip=0x0046e8; 	R(JG(loc_3bbde));	// 97269 jg      short loc_3BBDE ;~ 28F0:46E8
cs=0x28f0;eip=0x0046ea; 	R(JL(loc_3bbd1));	// 97270 jl      short loc_3BBD1 ;~ 28F0:46EA
cs=0x28f0;eip=0x0046ec; 	T(CMP(*(dw*)(raddr(es,bx)), ax));	// 97271 cmp     es:[bx], ax ;~ 28F0:46EC
cs=0x28f0;eip=0x0046ef; 	R(JNC(loc_3bbde));	// 97272 jnb     short loc_3BBDE ;~ 28F0:46EF
loc_3bbd1:
	// 10630 
cs=0x28f0;eip=0x0046f1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97275 mov     ax, [bp+arg_0] ;~ 28F0:46F1
cs=0x28f0;eip=0x0046f4; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 97276 mov     dx, [bp+arg_2] ;~ 28F0:46F4
loc_3bbd7:
	// 10631 
cs=0x28f0;eip=0x0046f7; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 97279 mov     es:[bx], ax ;~ 28F0:46F7
cs=0x28f0;eip=0x0046fa; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 97280 mov     es:[bx+2], dx ;~ 28F0:46FA
loc_3bbde:
	// 10632 
cs=0x28f0;eip=0x0046fe; 	X(POP(bp));	// 97284 pop     bp ;~ 28F0:46FE
cs=0x28f0;eip=0x0046ff; 	R(RETN(0x0C));	// 97285 retn    0Ch ;~ 28F0:46FF
sub_3bbe2:
	// 97293 
#undef arg_0
#define arg_0 4
	// 97296 arg_0           = word ptr  4 ;~ 28F0:4702
#undef arg_2
#define arg_2 6
	// 97297 arg_2           = word ptr  6 ;~ 28F0:4702
#undef arg_4
#define arg_4 8
	// 97298 arg_4           = word ptr  8 ;~ 28F0:4702
#undef arg_6
#define arg_6 0x0A
	// 97299 arg_6           = word ptr  0Ah ;~ 28F0:4702
#undef arg_8
#define arg_8 0x0C
	// 97300 arg_8           = dword ptr  0Ch ;~ 28F0:4702
cs=0x28f0;eip=0x004702; 	X(PUSH(bp));	// 97302 push    bp ;~ 28F0:4702
cs=0x28f0;eip=0x004703; 	T(MOV(bp, sp));	// 97303 mov     bp, sp ;~ 28F0:4703
cs=0x28f0;eip=0x004705; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 97304 les     bx, [bp+arg_8] ;~ 28F0:4705
cs=0x28f0;eip=0x004708; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 97305 mov     ax, [bp+arg_4] ;~ 28F0:4708
cs=0x28f0;eip=0x00470b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 97306 mov     dx, [bp+arg_6] ;~ 28F0:470B
cs=0x28f0;eip=0x00470e; 	T(CMP(*(dw*)(raddr(es,bx+6)), dx));	// 97307 cmp     es:[bx+6], dx ;~ 28F0:470E
cs=0x28f0;eip=0x004712; 	R(JL(loc_3bc04));	// 97308 jl      short loc_3BC04 ;~ 28F0:4712
cs=0x28f0;eip=0x004714; 	R(JG(loc_3bbfc));	// 97309 jg      short loc_3BBFC ;~ 28F0:4714
cs=0x28f0;eip=0x004716; 	T(CMP(*(dw*)(raddr(es,bx+4)), ax));	// 97310 cmp     es:[bx+4], ax ;~ 28F0:4716
cs=0x28f0;eip=0x00471a; 	R(JBE(loc_3bc04));	// 97311 jbe     short loc_3BC04 ;~ 28F0:471A
loc_3bbfc:
	// 10633 
cs=0x28f0;eip=0x00471c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 97314 mov     ax, [bp+arg_4] ;~ 28F0:471C
cs=0x28f0;eip=0x00471f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 97315 mov     dx, [bp+arg_6] ;~ 28F0:471F
cs=0x28f0;eip=0x004722; 	R(JMP(loc_3bc1e));	// 97316 jmp     short loc_3BC1E ;~ 28F0:4722
loc_3bc04:
	// 10634 
cs=0x28f0;eip=0x004724; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97321 mov     ax, [bp+arg_0] ;~ 28F0:4724
cs=0x28f0;eip=0x004727; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 97322 mov     dx, [bp+arg_2] ;~ 28F0:4727
cs=0x28f0;eip=0x00472a; 	T(CMP(*(dw*)(raddr(es,bx+6)), dx));	// 97323 cmp     es:[bx+6], dx ;~ 28F0:472A
cs=0x28f0;eip=0x00472e; 	R(JG(loc_3bc26));	// 97324 jg      short loc_3BC26 ;~ 28F0:472E
cs=0x28f0;eip=0x004730; 	R(JL(loc_3bc18));	// 97325 jl      short loc_3BC18 ;~ 28F0:4730
cs=0x28f0;eip=0x004732; 	T(CMP(*(dw*)(raddr(es,bx+4)), ax));	// 97326 cmp     es:[bx+4], ax ;~ 28F0:4732
cs=0x28f0;eip=0x004736; 	R(JNC(loc_3bc26));	// 97327 jnb     short loc_3BC26 ;~ 28F0:4736
loc_3bc18:
	// 10635 
cs=0x28f0;eip=0x004738; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97330 mov     ax, [bp+arg_0] ;~ 28F0:4738
cs=0x28f0;eip=0x00473b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 97331 mov     dx, [bp+arg_2] ;~ 28F0:473B
loc_3bc1e:
	// 10636 
cs=0x28f0;eip=0x00473e; 	X(MOV(*(dw*)(raddr(es,bx+4)), ax));	// 97334 mov     es:[bx+4], ax ;~ 28F0:473E
cs=0x28f0;eip=0x004742; 	X(MOV(*(dw*)(raddr(es,bx+6)), dx));	// 97335 mov     es:[bx+6], dx ;~ 28F0:4742
loc_3bc26:
	// 10637 
cs=0x28f0;eip=0x004746; 	X(POP(bp));	// 97339 pop     bp ;~ 28F0:4746
cs=0x28f0;eip=0x004747; 	R(RETN(0x0C));	// 97340 retn    0Ch ;~ 28F0:4747
sub_3bc2a:
	// 97348 
#undef var_4
#define var_4 -4
	// 97350 var_4           = word ptr -4 ;~ 28F0:474A
#undef var_2
#define var_2 -2
	// 97351 var_2           = word ptr -2 ;~ 28F0:474A
#undef arg_0
#define arg_0 4
	// 97352 arg_0           = word ptr  4 ;~ 28F0:474A
#undef arg_2
#define arg_2 6
	// 97353 arg_2           = dword ptr  6 ;~ 28F0:474A
cs=0x28f0;eip=0x00474a; 	X(PUSH(bp));	// 97355 push    bp ;~ 28F0:474A
cs=0x28f0;eip=0x00474b; 	T(MOV(bp, sp));	// 97356 mov     bp, sp ;~ 28F0:474B
cs=0x28f0;eip=0x00474d; 	T(SUB(sp, 4));	// 97357 sub     sp, 4 ;~ 28F0:474D
cs=0x28f0;eip=0x004750; 	T(SUB(ax, ax));	// 97358 sub     ax, ax ;~ 28F0:4750
cs=0x28f0;eip=0x004752; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 97359 mov     [bp+var_2], ax ;~ 28F0:4752
cs=0x28f0;eip=0x004755; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97360 mov     [bp+var_4], ax ;~ 28F0:4755
cs=0x28f0;eip=0x004758; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 97361 cmp     [bp+arg_0], ax ;~ 28F0:4758
cs=0x28f0;eip=0x00475b; 	R(JLE(loc_3bc8c));	// 97362 jle     short loc_3BC8C ;~ 28F0:475B
cs=0x28f0;eip=0x00475d; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x64));	// 97363 cmp     [bp+arg_0], 64h ; 'd' ;~ 28F0:475D
cs=0x28f0;eip=0x004761; 	R(JL(loc_3bc50));	// 97364 jl      short loc_3BC50 ;~ 28F0:4761
cs=0x28f0;eip=0x004763; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97365 les     bx, [bp+arg_2] ;~ 28F0:4763
cs=0x28f0;eip=0x004766; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 97366 mov     ax, es:[bx+8] ;~ 28F0:4766
cs=0x28f0;eip=0x00476a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 97367 mov     dx, es:[bx+0Ah] ;~ 28F0:476A
cs=0x28f0;eip=0x00476e; 	R(JMP(loc_3bc73));	// 97368 jmp     short loc_3BC73 ;~ 28F0:476E
loc_3bc50:
	// 10638 
cs=0x28f0;eip=0x004770; 	T(MOV(ax, 0x64));	// 97372 mov     ax, 64h ; 'd' ;~ 28F0:4770
cs=0x28f0;eip=0x004773; 	T(CWD);	// 97373 cwd ;~ 28F0:4773
cs=0x28f0;eip=0x004774; 	X(PUSH(dx));	// 97374 push    dx ;~ 28F0:4774
cs=0x28f0;eip=0x004775; 	X(PUSH(ax));	// 97375 push    ax ;~ 28F0:4775
cs=0x28f0;eip=0x004776; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97376 mov     ax, [bp+arg_0] ;~ 28F0:4776
cs=0x28f0;eip=0x004779; 	T(CWD);	// 97377 cwd ;~ 28F0:4779
cs=0x28f0;eip=0x00477a; 	X(PUSH(dx));	// 97378 push    dx ;~ 28F0:477A
cs=0x28f0;eip=0x00477b; 	X(PUSH(ax));	// 97379 push    ax ;~ 28F0:477B
cs=0x28f0;eip=0x00477c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97380 les     bx, [bp+arg_2] ;~ 28F0:477C
cs=0x28f0;eip=0x00477f; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 97381 push    word ptr es:[bx+0Ah] ;~ 28F0:477F
cs=0x28f0;eip=0x004783; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 97382 push    word ptr es:[bx+8] ;~ 28F0:4783
cs=0x28f0;eip=0x004787; 	R(CALLF(sub_105c2,0));	// 97383 call    sub_105C2 ;~ 28F0:4787
cs=0x28f0;eip=0x00478c; 	X(PUSH(dx));	// 97384 push    dx ;~ 28F0:478C
cs=0x28f0;eip=0x00478d; 	X(PUSH(ax));	// 97385 push    ax ;~ 28F0:478D
cs=0x28f0;eip=0x00478e; 	R(CALLF(sub_10526,0));	// 97386 call    sub_10526 ;~ 28F0:478E
loc_3bc73:
	// 10639 
cs=0x28f0;eip=0x004793; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97389 mov     [bp+var_4], ax ;~ 28F0:4793
cs=0x28f0;eip=0x004796; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97390 mov     [bp+var_2], dx ;~ 28F0:4796
cs=0x28f0;eip=0x004799; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 97391 push    word ptr [bp+arg_2+2] ;~ 28F0:4799
cs=0x28f0;eip=0x00479c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 97392 push    word ptr [bp+arg_2] ;~ 28F0:479C
cs=0x28f0;eip=0x00479f; 	X(PUSH(dx));	// 97393 push    dx ;~ 28F0:479F
cs=0x28f0;eip=0x0047a0; 	X(PUSH(ax));	// 97394 push    ax ;~ 28F0:47A0
cs=0x28f0;eip=0x0047a1; 	T(NEG(ax));	// 97395 neg     ax ;~ 28F0:47A1
cs=0x28f0;eip=0x0047a3; 	T(ADC(dx, 0));	// 97396 adc     dx, 0 ;~ 28F0:47A3
cs=0x28f0;eip=0x0047a6; 	T(NEG(dx));	// 97397 neg     dx ;~ 28F0:47A6
cs=0x28f0;eip=0x0047a8; 	X(PUSH(dx));	// 97398 push    dx ;~ 28F0:47A8
cs=0x28f0;eip=0x0047a9; 	X(PUSH(ax));	// 97399 push    ax ;~ 28F0:47A9
cs=0x28f0;eip=0x0047aa; 	R(JMP(loc_3bcdd));	// 97400 jmp     short loc_3BCDD ;~ 28F0:47AA
loc_3bc8c:
	// 10640 
cs=0x28f0;eip=0x0047ac; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FF9C));	// 97404 cmp     [bp+arg_0], 0FF9Ch ;~ 28F0:47AC
cs=0x28f0;eip=0x0047b0; 	R(JG(loc_3bc9f));	// 97405 jg      short loc_3BC9F ;~ 28F0:47B0
cs=0x28f0;eip=0x0047b2; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97406 les     bx, [bp+arg_2] ;~ 28F0:47B2
cs=0x28f0;eip=0x0047b5; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 97407 mov     ax, es:[bx+0Ch] ;~ 28F0:47B5
cs=0x28f0;eip=0x0047b9; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 97408 mov     dx, es:[bx+0Eh] ;~ 28F0:47B9
cs=0x28f0;eip=0x0047bd; 	R(JMP(loc_3bcc2));	// 97409 jmp     short loc_3BCC2 ;~ 28F0:47BD
loc_3bc9f:
	// 10641 
cs=0x28f0;eip=0x0047bf; 	T(MOV(ax, 0x0FF9C));	// 97413 mov     ax, 0FF9Ch ;~ 28F0:47BF
cs=0x28f0;eip=0x0047c2; 	T(CWD);	// 97414 cwd ;~ 28F0:47C2
cs=0x28f0;eip=0x0047c3; 	X(PUSH(dx));	// 97415 push    dx ;~ 28F0:47C3
cs=0x28f0;eip=0x0047c4; 	X(PUSH(ax));	// 97416 push    ax ;~ 28F0:47C4
cs=0x28f0;eip=0x0047c5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97417 mov     ax, [bp+arg_0] ;~ 28F0:47C5
cs=0x28f0;eip=0x0047c8; 	T(CWD);	// 97418 cwd ;~ 28F0:47C8
cs=0x28f0;eip=0x0047c9; 	X(PUSH(dx));	// 97419 push    dx ;~ 28F0:47C9
cs=0x28f0;eip=0x0047ca; 	X(PUSH(ax));	// 97420 push    ax ;~ 28F0:47CA
cs=0x28f0;eip=0x0047cb; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97421 les     bx, [bp+arg_2] ;~ 28F0:47CB
cs=0x28f0;eip=0x0047ce; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 97422 push    word ptr es:[bx+0Eh] ;~ 28F0:47CE
cs=0x28f0;eip=0x0047d2; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 97423 push    word ptr es:[bx+0Ch] ;~ 28F0:47D2
cs=0x28f0;eip=0x0047d6; 	R(CALLF(sub_105c2,0));	// 97424 call    sub_105C2 ;~ 28F0:47D6
cs=0x28f0;eip=0x0047db; 	X(PUSH(dx));	// 97425 push    dx ;~ 28F0:47DB
cs=0x28f0;eip=0x0047dc; 	X(PUSH(ax));	// 97426 push    ax ;~ 28F0:47DC
cs=0x28f0;eip=0x0047dd; 	R(CALLF(sub_10526,0));	// 97427 call    sub_10526 ;~ 28F0:47DD
loc_3bcc2:
	// 10642 
cs=0x28f0;eip=0x0047e2; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97430 mov     [bp+var_4], ax ;~ 28F0:47E2
cs=0x28f0;eip=0x0047e5; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97431 mov     [bp+var_2], dx ;~ 28F0:47E5
cs=0x28f0;eip=0x0047e8; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 97432 push    word ptr [bp+arg_2+2] ;~ 28F0:47E8
cs=0x28f0;eip=0x0047eb; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 97433 push    word ptr [bp+arg_2] ;~ 28F0:47EB
cs=0x28f0;eip=0x0047ee; 	T(NEG(ax));	// 97434 neg     ax ;~ 28F0:47EE
cs=0x28f0;eip=0x0047f0; 	T(ADC(dx, 0));	// 97435 adc     dx, 0 ;~ 28F0:47F0
cs=0x28f0;eip=0x0047f3; 	T(NEG(dx));	// 97436 neg     dx ;~ 28F0:47F3
cs=0x28f0;eip=0x0047f5; 	X(PUSH(dx));	// 97437 push    dx ;~ 28F0:47F5
cs=0x28f0;eip=0x0047f6; 	X(PUSH(ax));	// 97438 push    ax ;~ 28F0:47F6
cs=0x28f0;eip=0x0047f7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 97439 push    [bp+var_2] ;~ 28F0:47F7
cs=0x28f0;eip=0x0047fa; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 97440 push    [bp+var_4] ;~ 28F0:47FA
loc_3bcdd:
	// 10643 
cs=0x28f0;eip=0x0047fd; 	R(CALL(sub_3bbe2,0));	// 97443 call    sub_3BBE2 ;~ 28F0:47FD
cs=0x28f0;eip=0x004800; 	T(MOV(sp, bp));	// 97444 mov     sp, bp ;~ 28F0:4800
cs=0x28f0;eip=0x004802; 	X(POP(bp));	// 97445 pop     bp ;~ 28F0:4802
cs=0x28f0;eip=0x004803; 	R(RETN(6));	// 97446 retn    6 ;~ 28F0:4803
sub_3bce6:
	// 97454 
#undef var_4
#define var_4 -4
	// 97456 var_4           = word ptr -4 ;~ 28F0:4806
#undef var_2
#define var_2 -2
	// 97457 var_2           = word ptr -2 ;~ 28F0:4806
#undef arg_0
#define arg_0 4
	// 97458 arg_0           = word ptr  4 ;~ 28F0:4806
#undef arg_2
#define arg_2 6
	// 97459 arg_2           = dword ptr  6 ;~ 28F0:4806
cs=0x28f0;eip=0x004806; 	X(PUSH(bp));	// 97461 push    bp ;~ 28F0:4806
cs=0x28f0;eip=0x004807; 	T(MOV(bp, sp));	// 97462 mov     bp, sp ;~ 28F0:4807
cs=0x28f0;eip=0x004809; 	T(SUB(sp, 4));	// 97463 sub     sp, 4 ;~ 28F0:4809
cs=0x28f0;eip=0x00480c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 97464 cmp     [bp+arg_0], 0 ;~ 28F0:480C
cs=0x28f0;eip=0x004810; 	R(JLE(loc_3bd41));	// 97465 jle     short loc_3BD41 ;~ 28F0:4810
cs=0x28f0;eip=0x004812; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x64));	// 97466 cmp     [bp+arg_0], 64h ; 'd' ;~ 28F0:4812
cs=0x28f0;eip=0x004816; 	R(JL(loc_3bd05));	// 97467 jl      short loc_3BD05 ;~ 28F0:4816
cs=0x28f0;eip=0x004818; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97468 les     bx, [bp+arg_2] ;~ 28F0:4818
cs=0x28f0;eip=0x00481b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x18))));	// 97469 mov     ax, es:[bx+18h] ;~ 28F0:481B
cs=0x28f0;eip=0x00481f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1A))));	// 97470 mov     dx, es:[bx+1Ah] ;~ 28F0:481F
cs=0x28f0;eip=0x004823; 	R(JMP(loc_3bd28));	// 97471 jmp     short loc_3BD28 ;~ 28F0:4823
loc_3bd05:
	// 10644 
cs=0x28f0;eip=0x004825; 	T(MOV(ax, 0x64));	// 97475 mov     ax, 64h ; 'd' ;~ 28F0:4825
cs=0x28f0;eip=0x004828; 	T(CWD);	// 97476 cwd ;~ 28F0:4828
cs=0x28f0;eip=0x004829; 	X(PUSH(dx));	// 97477 push    dx ;~ 28F0:4829
cs=0x28f0;eip=0x00482a; 	X(PUSH(ax));	// 97478 push    ax ;~ 28F0:482A
cs=0x28f0;eip=0x00482b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97479 mov     ax, [bp+arg_0] ;~ 28F0:482B
cs=0x28f0;eip=0x00482e; 	T(CWD);	// 97480 cwd ;~ 28F0:482E
cs=0x28f0;eip=0x00482f; 	X(PUSH(dx));	// 97481 push    dx ;~ 28F0:482F
cs=0x28f0;eip=0x004830; 	X(PUSH(ax));	// 97482 push    ax ;~ 28F0:4830
cs=0x28f0;eip=0x004831; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97483 les     bx, [bp+arg_2] ;~ 28F0:4831
cs=0x28f0;eip=0x004834; 	X(PUSH(*(dw*)(raddr(es,bx+0x1A))));	// 97484 push    word ptr es:[bx+1Ah] ;~ 28F0:4834
cs=0x28f0;eip=0x004838; 	X(PUSH(*(dw*)(raddr(es,bx+0x18))));	// 97485 push    word ptr es:[bx+18h] ;~ 28F0:4838
cs=0x28f0;eip=0x00483c; 	R(CALLF(sub_105c2,0));	// 97486 call    sub_105C2 ;~ 28F0:483C
cs=0x28f0;eip=0x004841; 	X(PUSH(dx));	// 97487 push    dx ;~ 28F0:4841
cs=0x28f0;eip=0x004842; 	X(PUSH(ax));	// 97488 push    ax ;~ 28F0:4842
cs=0x28f0;eip=0x004843; 	R(CALLF(sub_10526,0));	// 97489 call    sub_10526 ;~ 28F0:4843
loc_3bd28:
	// 10645 
cs=0x28f0;eip=0x004848; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97492 mov     [bp+var_4], ax ;~ 28F0:4848
cs=0x28f0;eip=0x00484b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97493 mov     [bp+var_2], dx ;~ 28F0:484B
cs=0x28f0;eip=0x00484e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 97494 push    word ptr [bp+arg_2+2] ;~ 28F0:484E
cs=0x28f0;eip=0x004851; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 97495 push    word ptr [bp+arg_2] ;~ 28F0:4851
cs=0x28f0;eip=0x004854; 	X(PUSH(dx));	// 97496 push    dx ;~ 28F0:4854
cs=0x28f0;eip=0x004855; 	X(PUSH(ax));	// 97497 push    ax ;~ 28F0:4855
cs=0x28f0;eip=0x004856; 	T(NEG(ax));	// 97498 neg     ax ;~ 28F0:4856
cs=0x28f0;eip=0x004858; 	T(ADC(dx, 0));	// 97499 adc     dx, 0 ;~ 28F0:4858
cs=0x28f0;eip=0x00485b; 	T(NEG(dx));	// 97500 neg     dx ;~ 28F0:485B
cs=0x28f0;eip=0x00485d; 	X(PUSH(dx));	// 97501 push    dx ;~ 28F0:485D
cs=0x28f0;eip=0x00485e; 	X(PUSH(ax));	// 97502 push    ax ;~ 28F0:485E
cs=0x28f0;eip=0x00485f; 	R(JMP(loc_3bd92));	// 97503 jmp     short loc_3BD92 ;~ 28F0:485F
loc_3bd41:
	// 10646 
cs=0x28f0;eip=0x004861; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FF9C));	// 97507 cmp     [bp+arg_0], 0FF9Ch ;~ 28F0:4861
cs=0x28f0;eip=0x004865; 	R(JG(loc_3bd54));	// 97508 jg      short loc_3BD54 ;~ 28F0:4865
cs=0x28f0;eip=0x004867; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97509 les     bx, [bp+arg_2] ;~ 28F0:4867
cs=0x28f0;eip=0x00486a; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1C))));	// 97510 mov     ax, es:[bx+1Ch] ;~ 28F0:486A
cs=0x28f0;eip=0x00486e; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1E))));	// 97511 mov     dx, es:[bx+1Eh] ;~ 28F0:486E
cs=0x28f0;eip=0x004872; 	R(JMP(loc_3bd77));	// 97512 jmp     short loc_3BD77 ;~ 28F0:4872
loc_3bd54:
	// 10647 
cs=0x28f0;eip=0x004874; 	T(MOV(ax, 0x0FF9C));	// 97516 mov     ax, 0FF9Ch ;~ 28F0:4874
cs=0x28f0;eip=0x004877; 	T(CWD);	// 97517 cwd ;~ 28F0:4877
cs=0x28f0;eip=0x004878; 	X(PUSH(dx));	// 97518 push    dx ;~ 28F0:4878
cs=0x28f0;eip=0x004879; 	X(PUSH(ax));	// 97519 push    ax ;~ 28F0:4879
cs=0x28f0;eip=0x00487a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97520 mov     ax, [bp+arg_0] ;~ 28F0:487A
cs=0x28f0;eip=0x00487d; 	T(CWD);	// 97521 cwd ;~ 28F0:487D
cs=0x28f0;eip=0x00487e; 	X(PUSH(dx));	// 97522 push    dx ;~ 28F0:487E
cs=0x28f0;eip=0x00487f; 	X(PUSH(ax));	// 97523 push    ax ;~ 28F0:487F
cs=0x28f0;eip=0x004880; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97524 les     bx, [bp+arg_2] ;~ 28F0:4880
cs=0x28f0;eip=0x004883; 	X(PUSH(*(dw*)(raddr(es,bx+0x1E))));	// 97525 push    word ptr es:[bx+1Eh] ;~ 28F0:4883
cs=0x28f0;eip=0x004887; 	X(PUSH(*(dw*)(raddr(es,bx+0x1C))));	// 97526 push    word ptr es:[bx+1Ch] ;~ 28F0:4887
cs=0x28f0;eip=0x00488b; 	R(CALLF(sub_105c2,0));	// 97527 call    sub_105C2 ;~ 28F0:488B
cs=0x28f0;eip=0x004890; 	X(PUSH(dx));	// 97528 push    dx ;~ 28F0:4890
cs=0x28f0;eip=0x004891; 	X(PUSH(ax));	// 97529 push    ax ;~ 28F0:4891
cs=0x28f0;eip=0x004892; 	R(CALLF(sub_10526,0));	// 97530 call    sub_10526 ;~ 28F0:4892
loc_3bd77:
	// 10648 
cs=0x28f0;eip=0x004897; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97533 mov     [bp+var_4], ax ;~ 28F0:4897
cs=0x28f0;eip=0x00489a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97534 mov     [bp+var_2], dx ;~ 28F0:489A
cs=0x28f0;eip=0x00489d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 97535 push    word ptr [bp+arg_2+2] ;~ 28F0:489D
cs=0x28f0;eip=0x0048a0; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 97536 push    word ptr [bp+arg_2] ;~ 28F0:48A0
cs=0x28f0;eip=0x0048a3; 	T(NEG(ax));	// 97537 neg     ax ;~ 28F0:48A3
cs=0x28f0;eip=0x0048a5; 	T(ADC(dx, 0));	// 97538 adc     dx, 0 ;~ 28F0:48A5
cs=0x28f0;eip=0x0048a8; 	T(NEG(dx));	// 97539 neg     dx ;~ 28F0:48A8
cs=0x28f0;eip=0x0048aa; 	X(PUSH(dx));	// 97540 push    dx ;~ 28F0:48AA
cs=0x28f0;eip=0x0048ab; 	X(PUSH(ax));	// 97541 push    ax ;~ 28F0:48AB
cs=0x28f0;eip=0x0048ac; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 97542 push    [bp+var_2] ;~ 28F0:48AC
cs=0x28f0;eip=0x0048af; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 97543 push    [bp+var_4] ;~ 28F0:48AF
loc_3bd92:
	// 10649 
cs=0x28f0;eip=0x0048b2; 	R(CALL(sub_3bbe2,0));	// 97546 call    sub_3BBE2 ;~ 28F0:48B2
cs=0x28f0;eip=0x0048b5; 	T(MOV(sp, bp));	// 97547 mov     sp, bp ;~ 28F0:48B5
cs=0x28f0;eip=0x0048b7; 	X(POP(bp));	// 97548 pop     bp ;~ 28F0:48B7
cs=0x28f0;eip=0x0048b8; 	R(RETN(6));	// 97549 retn    6 ;~ 28F0:48B8
sub_3bd9b:
	// 97557 
#undef var_4
#define var_4 -4
	// 97560 var_4           = word ptr -4 ;~ 28F0:48BB
#undef var_2
#define var_2 -2
	// 97561 var_2           = word ptr -2 ;~ 28F0:48BB
#undef arg_0
#define arg_0 4
	// 97562 arg_0           = word ptr  4 ;~ 28F0:48BB
#undef arg_2
#define arg_2 6
	// 97563 arg_2           = dword ptr  6 ;~ 28F0:48BB
cs=0x28f0;eip=0x0048bb; 	X(PUSH(bp));	// 97565 push    bp ;~ 28F0:48BB
cs=0x28f0;eip=0x0048bc; 	T(MOV(bp, sp));	// 97566 mov     bp, sp ;~ 28F0:48BC
cs=0x28f0;eip=0x0048be; 	T(SUB(sp, 4));	// 97567 sub     sp, 4 ;~ 28F0:48BE
cs=0x28f0;eip=0x0048c1; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 97568 cmp     [bp+arg_0], 0 ;~ 28F0:48C1
cs=0x28f0;eip=0x0048c5; 	R(JLE(loc_3bde6));	// 97569 jle     short loc_3BDE6 ;~ 28F0:48C5
cs=0x28f0;eip=0x0048c7; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x64));	// 97570 cmp     [bp+arg_0], 64h ; 'd' ;~ 28F0:48C7
cs=0x28f0;eip=0x0048cb; 	R(JL(loc_3bdc1));	// 97571 jl      short loc_3BDC1 ;~ 28F0:48CB
cs=0x28f0;eip=0x0048cd; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97572 les     bx, [bp+arg_2] ;~ 28F0:48CD
cs=0x28f0;eip=0x0048d0; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 97573 mov     ax, es:[bx+10h] ;~ 28F0:48D0
cs=0x28f0;eip=0x0048d4; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 97574 mov     dx, es:[bx+12h] ;~ 28F0:48D4
cs=0x28f0;eip=0x0048d8; 	T(NEG(ax));	// 97575 neg     ax ;~ 28F0:48D8
cs=0x28f0;eip=0x0048da; 	T(ADC(dx, 0));	// 97576 adc     dx, 0 ;~ 28F0:48DA
cs=0x28f0;eip=0x0048dd; 	T(NEG(dx));	// 97577 neg     dx ;~ 28F0:48DD
cs=0x28f0;eip=0x0048df; 	R(JMP(loc_3be1c));	// 97578 jmp     short loc_3BE1C ;~ 28F0:48DF
loc_3bdc1:
	// 10650 
cs=0x28f0;eip=0x0048e1; 	T(MOV(ax, 0x64));	// 97582 mov     ax, 64h ; 'd' ;~ 28F0:48E1
cs=0x28f0;eip=0x0048e4; 	T(CWD);	// 97583 cwd ;~ 28F0:48E4
cs=0x28f0;eip=0x0048e5; 	X(PUSH(dx));	// 97584 push    dx ;~ 28F0:48E5
cs=0x28f0;eip=0x0048e6; 	X(PUSH(ax));	// 97585 push    ax ;~ 28F0:48E6
cs=0x28f0;eip=0x0048e7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97586 mov     ax, [bp+arg_0] ;~ 28F0:48E7
cs=0x28f0;eip=0x0048ea; 	T(CWD);	// 97587 cwd ;~ 28F0:48EA
cs=0x28f0;eip=0x0048eb; 	X(PUSH(dx));	// 97588 push    dx ;~ 28F0:48EB
cs=0x28f0;eip=0x0048ec; 	X(PUSH(ax));	// 97589 push    ax ;~ 28F0:48EC
cs=0x28f0;eip=0x0048ed; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97590 les     bx, [bp+arg_2] ;~ 28F0:48ED
cs=0x28f0;eip=0x0048f0; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 97591 push    word ptr es:[bx+12h] ;~ 28F0:48F0
cs=0x28f0;eip=0x0048f4; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 97592 push    word ptr es:[bx+10h] ;~ 28F0:48F4
cs=0x28f0;eip=0x0048f8; 	R(CALLF(sub_105c2,0));	// 97593 call    sub_105C2 ;~ 28F0:48F8
cs=0x28f0;eip=0x0048fd; 	T(NEG(ax));	// 97594 neg     ax ;~ 28F0:48FD
cs=0x28f0;eip=0x0048ff; 	T(ADC(dx, 0));	// 97595 adc     dx, 0 ;~ 28F0:48FF
cs=0x28f0;eip=0x004902; 	T(NEG(dx));	// 97596 neg     dx ;~ 28F0:4902
cs=0x28f0;eip=0x004904; 	R(JMP(loc_3be15));	// 97597 jmp     short loc_3BE15 ;~ 28F0:4904
loc_3bde6:
	// 10651 
cs=0x28f0;eip=0x004906; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FF9C));	// 97601 cmp     [bp+arg_0], 0FF9Ch ;~ 28F0:4906
cs=0x28f0;eip=0x00490a; 	R(JG(loc_3bdf9));	// 97602 jg      short loc_3BDF9 ;~ 28F0:490A
cs=0x28f0;eip=0x00490c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97603 les     bx, [bp+arg_2] ;~ 28F0:490C
cs=0x28f0;eip=0x00490f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 97604 mov     ax, es:[bx+10h] ;~ 28F0:490F
cs=0x28f0;eip=0x004913; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 97605 mov     dx, es:[bx+12h] ;~ 28F0:4913
cs=0x28f0;eip=0x004917; 	R(JMP(loc_3be1c));	// 97606 jmp     short loc_3BE1C ;~ 28F0:4917
loc_3bdf9:
	// 10652 
cs=0x28f0;eip=0x004919; 	T(MOV(ax, 0x0FF9C));	// 97610 mov     ax, 0FF9Ch ;~ 28F0:4919
cs=0x28f0;eip=0x00491c; 	T(CWD);	// 97611 cwd ;~ 28F0:491C
cs=0x28f0;eip=0x00491d; 	X(PUSH(dx));	// 97612 push    dx ;~ 28F0:491D
cs=0x28f0;eip=0x00491e; 	X(PUSH(ax));	// 97613 push    ax ;~ 28F0:491E
cs=0x28f0;eip=0x00491f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97614 mov     ax, [bp+arg_0] ;~ 28F0:491F
cs=0x28f0;eip=0x004922; 	T(CWD);	// 97615 cwd ;~ 28F0:4922
cs=0x28f0;eip=0x004923; 	X(PUSH(dx));	// 97616 push    dx ;~ 28F0:4923
cs=0x28f0;eip=0x004924; 	X(PUSH(ax));	// 97617 push    ax ;~ 28F0:4924
cs=0x28f0;eip=0x004925; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97618 les     bx, [bp+arg_2] ;~ 28F0:4925
cs=0x28f0;eip=0x004928; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 97619 push    word ptr es:[bx+12h] ;~ 28F0:4928
cs=0x28f0;eip=0x00492c; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 97620 push    word ptr es:[bx+10h] ;~ 28F0:492C
cs=0x28f0;eip=0x004930; 	R(CALLF(sub_105c2,0));	// 97621 call    sub_105C2 ;~ 28F0:4930
loc_3be15:
	// 10653 
cs=0x28f0;eip=0x004935; 	X(PUSH(dx));	// 97624 push    dx ;~ 28F0:4935
cs=0x28f0;eip=0x004936; 	X(PUSH(ax));	// 97625 push    ax ;~ 28F0:4936
cs=0x28f0;eip=0x004937; 	R(CALLF(sub_10526,0));	// 97626 call    sub_10526 ;~ 28F0:4937
loc_3be1c:
	// 10654 
cs=0x28f0;eip=0x00493c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97630 mov     [bp+var_4], ax ;~ 28F0:493C
cs=0x28f0;eip=0x00493f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97631 mov     [bp+var_2], dx ;~ 28F0:493F
cs=0x28f0;eip=0x004942; 	T(MOV(ax, 0x100));	// 97632 mov     ax, 100h ;~ 28F0:4942
cs=0x28f0;eip=0x004945; 	T(CWD);	// 97633 cwd ;~ 28F0:4945
cs=0x28f0;eip=0x004946; 	X(PUSH(dx));	// 97634 push    dx ;~ 28F0:4946
cs=0x28f0;eip=0x004947; 	X(PUSH(ax));	// 97635 push    ax ;~ 28F0:4947
cs=0x28f0;eip=0x004948; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 97636 mov     ax, word ptr unk_57111 ;~ 28F0:4948
cs=0x28f0;eip=0x00494b; 	T(CWD);	// 97637 cwd ;~ 28F0:494B
cs=0x28f0;eip=0x00494c; 	X(PUSH(dx));	// 97638 push    dx ;~ 28F0:494C
cs=0x28f0;eip=0x00494d; 	X(PUSH(ax));	// 97639 push    ax ;~ 28F0:494D
cs=0x28f0;eip=0x00494e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 97640 push    [bp+var_2] ;~ 28F0:494E
cs=0x28f0;eip=0x004951; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 97641 push    [bp+var_4] ;~ 28F0:4951
cs=0x28f0;eip=0x004954; 	R(CALLF(sub_105c2,0));	// 97642 call    sub_105C2 ;~ 28F0:4954
cs=0x28f0;eip=0x004959; 	X(PUSH(dx));	// 97643 push    dx ;~ 28F0:4959
cs=0x28f0;eip=0x00495a; 	X(PUSH(ax));	// 97644 push    ax ;~ 28F0:495A
cs=0x28f0;eip=0x00495b; 	R(CALLF(sub_10526,0));	// 97645 call    sub_10526 ;~ 28F0:495B
cs=0x28f0;eip=0x004960; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97646 mov     [bp+var_4], ax ;~ 28F0:4960
cs=0x28f0;eip=0x004963; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97647 mov     [bp+var_2], dx ;~ 28F0:4963
cs=0x28f0;eip=0x004966; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97648 les     bx, [bp+arg_2] ;~ 28F0:4966
cs=0x28f0;eip=0x004969; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 97649 add     es:[bx], ax ;~ 28F0:4969
cs=0x28f0;eip=0x00496c; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 97650 adc     es:[bx+2], dx ;~ 28F0:496C
cs=0x28f0;eip=0x004970; 	T(MOV(sp, bp));	// 97651 mov     sp, bp ;~ 28F0:4970
cs=0x28f0;eip=0x004972; 	X(POP(bp));	// 97652 pop     bp ;~ 28F0:4972
cs=0x28f0;eip=0x004973; 	R(RETN(6));	// 97653 retn    6 ;~ 28F0:4973
sub_3be56:
	// 97661 
#undef var_4
#define var_4 -4
	// 97664 var_4           = word ptr -4 ;~ 28F0:4976
#undef var_2
#define var_2 -2
	// 97665 var_2           = word ptr -2 ;~ 28F0:4976
#undef arg_0
#define arg_0 4
	// 97666 arg_0           = word ptr  4 ;~ 28F0:4976
#undef arg_2
#define arg_2 6
	// 97667 arg_2           = dword ptr  6 ;~ 28F0:4976
cs=0x28f0;eip=0x004976; 	X(PUSH(bp));	// 97669 push    bp ;~ 28F0:4976
cs=0x28f0;eip=0x004977; 	T(MOV(bp, sp));	// 97670 mov     bp, sp ;~ 28F0:4977
cs=0x28f0;eip=0x004979; 	T(SUB(sp, 4));	// 97671 sub     sp, 4 ;~ 28F0:4979
cs=0x28f0;eip=0x00497c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 97672 cmp     [bp+arg_0], 0 ;~ 28F0:497C
cs=0x28f0;eip=0x004980; 	R(JLE(loc_3bea1));	// 97673 jle     short loc_3BEA1 ;~ 28F0:4980
cs=0x28f0;eip=0x004982; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x64));	// 97674 cmp     [bp+arg_0], 64h ; 'd' ;~ 28F0:4982
cs=0x28f0;eip=0x004986; 	R(JL(loc_3be7c));	// 97675 jl      short loc_3BE7C ;~ 28F0:4986
cs=0x28f0;eip=0x004988; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97676 les     bx, [bp+arg_2] ;~ 28F0:4988
cs=0x28f0;eip=0x00498b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 97677 mov     ax, es:[bx+10h] ;~ 28F0:498B
cs=0x28f0;eip=0x00498f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 97678 mov     dx, es:[bx+12h] ;~ 28F0:498F
cs=0x28f0;eip=0x004993; 	T(NEG(ax));	// 97679 neg     ax ;~ 28F0:4993
cs=0x28f0;eip=0x004995; 	T(ADC(dx, 0));	// 97680 adc     dx, 0 ;~ 28F0:4995
cs=0x28f0;eip=0x004998; 	T(NEG(dx));	// 97681 neg     dx ;~ 28F0:4998
cs=0x28f0;eip=0x00499a; 	R(JMP(loc_3bed7));	// 97682 jmp     short loc_3BED7 ;~ 28F0:499A
loc_3be7c:
	// 10655 
cs=0x28f0;eip=0x00499c; 	T(MOV(ax, 0x64));	// 97686 mov     ax, 64h ; 'd' ;~ 28F0:499C
cs=0x28f0;eip=0x00499f; 	T(CWD);	// 97687 cwd ;~ 28F0:499F
cs=0x28f0;eip=0x0049a0; 	X(PUSH(dx));	// 97688 push    dx ;~ 28F0:49A0
cs=0x28f0;eip=0x0049a1; 	X(PUSH(ax));	// 97689 push    ax ;~ 28F0:49A1
cs=0x28f0;eip=0x0049a2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97690 mov     ax, [bp+arg_0] ;~ 28F0:49A2
cs=0x28f0;eip=0x0049a5; 	T(CWD);	// 97691 cwd ;~ 28F0:49A5
cs=0x28f0;eip=0x0049a6; 	X(PUSH(dx));	// 97692 push    dx ;~ 28F0:49A6
cs=0x28f0;eip=0x0049a7; 	X(PUSH(ax));	// 97693 push    ax ;~ 28F0:49A7
cs=0x28f0;eip=0x0049a8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97694 les     bx, [bp+arg_2] ;~ 28F0:49A8
cs=0x28f0;eip=0x0049ab; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 97695 push    word ptr es:[bx+12h] ;~ 28F0:49AB
cs=0x28f0;eip=0x0049af; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 97696 push    word ptr es:[bx+10h] ;~ 28F0:49AF
cs=0x28f0;eip=0x0049b3; 	R(CALLF(sub_105c2,0));	// 97697 call    sub_105C2 ;~ 28F0:49B3
cs=0x28f0;eip=0x0049b8; 	T(NEG(ax));	// 97698 neg     ax ;~ 28F0:49B8
cs=0x28f0;eip=0x0049ba; 	T(ADC(dx, 0));	// 97699 adc     dx, 0 ;~ 28F0:49BA
cs=0x28f0;eip=0x0049bd; 	T(NEG(dx));	// 97700 neg     dx ;~ 28F0:49BD
cs=0x28f0;eip=0x0049bf; 	R(JMP(loc_3bed0));	// 97701 jmp     short loc_3BED0 ;~ 28F0:49BF
loc_3bea1:
	// 10656 
cs=0x28f0;eip=0x0049c1; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FF9C));	// 97705 cmp     [bp+arg_0], 0FF9Ch ;~ 28F0:49C1
cs=0x28f0;eip=0x0049c5; 	R(JG(loc_3beb4));	// 97706 jg      short loc_3BEB4 ;~ 28F0:49C5
cs=0x28f0;eip=0x0049c7; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97707 les     bx, [bp+arg_2] ;~ 28F0:49C7
cs=0x28f0;eip=0x0049ca; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 97708 mov     ax, es:[bx+10h] ;~ 28F0:49CA
cs=0x28f0;eip=0x0049ce; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 97709 mov     dx, es:[bx+12h] ;~ 28F0:49CE
cs=0x28f0;eip=0x0049d2; 	R(JMP(loc_3bed7));	// 97710 jmp     short loc_3BED7 ;~ 28F0:49D2
loc_3beb4:
	// 10657 
cs=0x28f0;eip=0x0049d4; 	T(MOV(ax, 0x0FF9C));	// 97714 mov     ax, 0FF9Ch ;~ 28F0:49D4
cs=0x28f0;eip=0x0049d7; 	T(CWD);	// 97715 cwd ;~ 28F0:49D7
cs=0x28f0;eip=0x0049d8; 	X(PUSH(dx));	// 97716 push    dx ;~ 28F0:49D8
cs=0x28f0;eip=0x0049d9; 	X(PUSH(ax));	// 97717 push    ax ;~ 28F0:49D9
cs=0x28f0;eip=0x0049da; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97718 mov     ax, [bp+arg_0] ;~ 28F0:49DA
cs=0x28f0;eip=0x0049dd; 	T(CWD);	// 97719 cwd ;~ 28F0:49DD
cs=0x28f0;eip=0x0049de; 	X(PUSH(dx));	// 97720 push    dx ;~ 28F0:49DE
cs=0x28f0;eip=0x0049df; 	X(PUSH(ax));	// 97721 push    ax ;~ 28F0:49DF
cs=0x28f0;eip=0x0049e0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97722 les     bx, [bp+arg_2] ;~ 28F0:49E0
cs=0x28f0;eip=0x0049e3; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 97723 push    word ptr es:[bx+12h] ;~ 28F0:49E3
cs=0x28f0;eip=0x0049e7; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 97724 push    word ptr es:[bx+10h] ;~ 28F0:49E7
cs=0x28f0;eip=0x0049eb; 	R(CALLF(sub_105c2,0));	// 97725 call    sub_105C2 ;~ 28F0:49EB
loc_3bed0:
	// 10658 
cs=0x28f0;eip=0x0049f0; 	X(PUSH(dx));	// 97728 push    dx ;~ 28F0:49F0
cs=0x28f0;eip=0x0049f1; 	X(PUSH(ax));	// 97729 push    ax ;~ 28F0:49F1
cs=0x28f0;eip=0x0049f2; 	R(CALLF(sub_10526,0));	// 97730 call    sub_10526 ;~ 28F0:49F2
loc_3bed7:
	// 10659 
cs=0x28f0;eip=0x0049f7; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97734 mov     [bp+var_4], ax ;~ 28F0:49F7
cs=0x28f0;eip=0x0049fa; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97735 mov     [bp+var_2], dx ;~ 28F0:49FA
cs=0x28f0;eip=0x0049fd; 	T(MOV(ax, 0x100));	// 97736 mov     ax, 100h ;~ 28F0:49FD
cs=0x28f0;eip=0x004a00; 	T(CWD);	// 97737 cwd ;~ 28F0:4A00
cs=0x28f0;eip=0x004a01; 	X(PUSH(dx));	// 97738 push    dx ;~ 28F0:4A01
cs=0x28f0;eip=0x004a02; 	X(PUSH(ax));	// 97739 push    ax ;~ 28F0:4A02
cs=0x28f0;eip=0x004a03; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 97740 mov     ax, word ptr unk_57111 ;~ 28F0:4A03
cs=0x28f0;eip=0x004a06; 	T(CWD);	// 97741 cwd ;~ 28F0:4A06
cs=0x28f0;eip=0x004a07; 	X(PUSH(dx));	// 97742 push    dx ;~ 28F0:4A07
cs=0x28f0;eip=0x004a08; 	X(PUSH(ax));	// 97743 push    ax ;~ 28F0:4A08
cs=0x28f0;eip=0x004a09; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 97744 push    [bp+var_2] ;~ 28F0:4A09
cs=0x28f0;eip=0x004a0c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 97745 push    [bp+var_4] ;~ 28F0:4A0C
cs=0x28f0;eip=0x004a0f; 	R(CALLF(sub_105c2,0));	// 97746 call    sub_105C2 ;~ 28F0:4A0F
cs=0x28f0;eip=0x004a14; 	X(PUSH(dx));	// 97747 push    dx ;~ 28F0:4A14
cs=0x28f0;eip=0x004a15; 	X(PUSH(ax));	// 97748 push    ax ;~ 28F0:4A15
cs=0x28f0;eip=0x004a16; 	R(CALLF(sub_10526,0));	// 97749 call    sub_10526 ;~ 28F0:4A16
cs=0x28f0;eip=0x004a1b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97750 mov     [bp+var_4], ax ;~ 28F0:4A1B
cs=0x28f0;eip=0x004a1e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97751 mov     [bp+var_2], dx ;~ 28F0:4A1E
cs=0x28f0;eip=0x004a21; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97752 les     bx, [bp+arg_2] ;~ 28F0:4A21
cs=0x28f0;eip=0x004a24; 	X(ADD(*(dw*)(raddr(es,bx+4)), ax));	// 97753 add     es:[bx+4], ax ;~ 28F0:4A24
cs=0x28f0;eip=0x004a28; 	X(ADC(*(dw*)(raddr(es,bx+6)), dx));	// 97754 adc     es:[bx+6], dx ;~ 28F0:4A28
cs=0x28f0;eip=0x004a2c; 	T(MOV(sp, bp));	// 97755 mov     sp, bp ;~ 28F0:4A2C
cs=0x28f0;eip=0x004a2e; 	X(POP(bp));	// 97756 pop     bp ;~ 28F0:4A2E
cs=0x28f0;eip=0x004a2f; 	R(RETN(6));	// 97757 retn    6 ;~ 28F0:4A2F
sub_3bfce:
	// 97858 
#undef var_4
#define var_4 -4
	// 97861 var_4           = word ptr -4 ;~ 28F0:4AEE
#undef var_2
#define var_2 -2
	// 97862 var_2           = word ptr -2 ;~ 28F0:4AEE
#undef arg_0
#define arg_0 4
	// 97863 arg_0           = word ptr  4 ;~ 28F0:4AEE
#undef arg_2
#define arg_2 6
	// 97864 arg_2           = dword ptr  6 ;~ 28F0:4AEE
cs=0x28f0;eip=0x004aee; 	X(PUSH(bp));	// 97866 push    bp ;~ 28F0:4AEE
cs=0x28f0;eip=0x004aef; 	T(MOV(bp, sp));	// 97867 mov     bp, sp ;~ 28F0:4AEF
cs=0x28f0;eip=0x004af1; 	T(SUB(sp, 4));	// 97868 sub     sp, 4 ;~ 28F0:4AF1
cs=0x28f0;eip=0x004af4; 	T(SUB(ax, ax));	// 97869 sub     ax, ax ;~ 28F0:4AF4
cs=0x28f0;eip=0x004af6; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 97870 mov     [bp+var_2], ax ;~ 28F0:4AF6
cs=0x28f0;eip=0x004af9; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97871 mov     [bp+var_4], ax ;~ 28F0:4AF9
cs=0x28f0;eip=0x004afc; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 97872 cmp     [bp+arg_0], ax ;~ 28F0:4AFC
cs=0x28f0;eip=0x004aff; 	R(JLE(loc_3c030));	// 97873 jle     short loc_3C030 ;~ 28F0:4AFF
cs=0x28f0;eip=0x004b01; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x64));	// 97874 cmp     [bp+arg_0], 64h ; 'd' ;~ 28F0:4B01
cs=0x28f0;eip=0x004b05; 	R(JL(loc_3bff4));	// 97875 jl      short loc_3BFF4 ;~ 28F0:4B05
cs=0x28f0;eip=0x004b07; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97876 les     bx, [bp+arg_2] ;~ 28F0:4B07
cs=0x28f0;eip=0x004b0a; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 97877 mov     ax, es:[bx+8] ;~ 28F0:4B0A
cs=0x28f0;eip=0x004b0e; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 97878 mov     dx, es:[bx+0Ah] ;~ 28F0:4B0E
cs=0x28f0;eip=0x004b12; 	R(JMP(loc_3c017));	// 97879 jmp     short loc_3C017 ;~ 28F0:4B12
loc_3bff4:
	// 10666 
cs=0x28f0;eip=0x004b14; 	T(MOV(ax, 0x64));	// 97883 mov     ax, 64h ; 'd' ;~ 28F0:4B14
cs=0x28f0;eip=0x004b17; 	T(CWD);	// 97884 cwd ;~ 28F0:4B17
cs=0x28f0;eip=0x004b18; 	X(PUSH(dx));	// 97885 push    dx ;~ 28F0:4B18
cs=0x28f0;eip=0x004b19; 	X(PUSH(ax));	// 97886 push    ax ;~ 28F0:4B19
cs=0x28f0;eip=0x004b1a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97887 mov     ax, [bp+arg_0] ;~ 28F0:4B1A
cs=0x28f0;eip=0x004b1d; 	T(CWD);	// 97888 cwd ;~ 28F0:4B1D
cs=0x28f0;eip=0x004b1e; 	X(PUSH(dx));	// 97889 push    dx ;~ 28F0:4B1E
cs=0x28f0;eip=0x004b1f; 	X(PUSH(ax));	// 97890 push    ax ;~ 28F0:4B1F
cs=0x28f0;eip=0x004b20; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97891 les     bx, [bp+arg_2] ;~ 28F0:4B20
cs=0x28f0;eip=0x004b23; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 97892 push    word ptr es:[bx+0Ah] ;~ 28F0:4B23
cs=0x28f0;eip=0x004b27; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 97893 push    word ptr es:[bx+8] ;~ 28F0:4B27
cs=0x28f0;eip=0x004b2b; 	R(CALLF(sub_105c2,0));	// 97894 call    sub_105C2 ;~ 28F0:4B2B
cs=0x28f0;eip=0x004b30; 	X(PUSH(dx));	// 97895 push    dx ;~ 28F0:4B30
cs=0x28f0;eip=0x004b31; 	X(PUSH(ax));	// 97896 push    ax ;~ 28F0:4B31
cs=0x28f0;eip=0x004b32; 	R(CALLF(sub_10526,0));	// 97897 call    sub_10526 ;~ 28F0:4B32
loc_3c017:
	// 10667 
cs=0x28f0;eip=0x004b37; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97900 mov     [bp+var_4], ax ;~ 28F0:4B37
cs=0x28f0;eip=0x004b3a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97901 mov     [bp+var_2], dx ;~ 28F0:4B3A
cs=0x28f0;eip=0x004b3d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 97902 push    word ptr [bp+arg_2+2] ;~ 28F0:4B3D
cs=0x28f0;eip=0x004b40; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 97903 push    word ptr [bp+arg_2] ;~ 28F0:4B40
cs=0x28f0;eip=0x004b43; 	X(PUSH(dx));	// 97904 push    dx ;~ 28F0:4B43
cs=0x28f0;eip=0x004b44; 	X(PUSH(ax));	// 97905 push    ax ;~ 28F0:4B44
cs=0x28f0;eip=0x004b45; 	T(NEG(ax));	// 97906 neg     ax ;~ 28F0:4B45
cs=0x28f0;eip=0x004b47; 	T(ADC(dx, 0));	// 97907 adc     dx, 0 ;~ 28F0:4B47
cs=0x28f0;eip=0x004b4a; 	T(NEG(dx));	// 97908 neg     dx ;~ 28F0:4B4A
cs=0x28f0;eip=0x004b4c; 	X(PUSH(dx));	// 97909 push    dx ;~ 28F0:4B4C
cs=0x28f0;eip=0x004b4d; 	X(PUSH(ax));	// 97910 push    ax ;~ 28F0:4B4D
cs=0x28f0;eip=0x004b4e; 	R(JMP(loc_3c081));	// 97911 jmp     short loc_3C081 ;~ 28F0:4B4E
loc_3c030:
	// 10668 
cs=0x28f0;eip=0x004b50; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FF9C));	// 97915 cmp     [bp+arg_0], 0FF9Ch ;~ 28F0:4B50
cs=0x28f0;eip=0x004b54; 	R(JG(loc_3c043));	// 97916 jg      short loc_3C043 ;~ 28F0:4B54
cs=0x28f0;eip=0x004b56; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97917 les     bx, [bp+arg_2] ;~ 28F0:4B56
cs=0x28f0;eip=0x004b59; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 97918 mov     ax, es:[bx+0Ch] ;~ 28F0:4B59
cs=0x28f0;eip=0x004b5d; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 97919 mov     dx, es:[bx+0Eh] ;~ 28F0:4B5D
cs=0x28f0;eip=0x004b61; 	R(JMP(loc_3c066));	// 97920 jmp     short loc_3C066 ;~ 28F0:4B61
loc_3c043:
	// 10669 
cs=0x28f0;eip=0x004b63; 	T(MOV(ax, 0x0FF9C));	// 97924 mov     ax, 0FF9Ch ;~ 28F0:4B63
cs=0x28f0;eip=0x004b66; 	T(CWD);	// 97925 cwd ;~ 28F0:4B66
cs=0x28f0;eip=0x004b67; 	X(PUSH(dx));	// 97926 push    dx ;~ 28F0:4B67
cs=0x28f0;eip=0x004b68; 	X(PUSH(ax));	// 97927 push    ax ;~ 28F0:4B68
cs=0x28f0;eip=0x004b69; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97928 mov     ax, [bp+arg_0] ;~ 28F0:4B69
cs=0x28f0;eip=0x004b6c; 	T(CWD);	// 97929 cwd ;~ 28F0:4B6C
cs=0x28f0;eip=0x004b6d; 	X(PUSH(dx));	// 97930 push    dx ;~ 28F0:4B6D
cs=0x28f0;eip=0x004b6e; 	X(PUSH(ax));	// 97931 push    ax ;~ 28F0:4B6E
cs=0x28f0;eip=0x004b6f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97932 les     bx, [bp+arg_2] ;~ 28F0:4B6F
cs=0x28f0;eip=0x004b72; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 97933 push    word ptr es:[bx+0Eh] ;~ 28F0:4B72
cs=0x28f0;eip=0x004b76; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 97934 push    word ptr es:[bx+0Ch] ;~ 28F0:4B76
cs=0x28f0;eip=0x004b7a; 	R(CALLF(sub_105c2,0));	// 97935 call    sub_105C2 ;~ 28F0:4B7A
cs=0x28f0;eip=0x004b7f; 	X(PUSH(dx));	// 97936 push    dx ;~ 28F0:4B7F
cs=0x28f0;eip=0x004b80; 	X(PUSH(ax));	// 97937 push    ax ;~ 28F0:4B80
cs=0x28f0;eip=0x004b81; 	R(CALLF(sub_10526,0));	// 97938 call    sub_10526 ;~ 28F0:4B81
loc_3c066:
	// 10670 
cs=0x28f0;eip=0x004b86; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97941 mov     [bp+var_4], ax ;~ 28F0:4B86
cs=0x28f0;eip=0x004b89; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97942 mov     [bp+var_2], dx ;~ 28F0:4B89
cs=0x28f0;eip=0x004b8c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 97943 push    word ptr [bp+arg_2+2] ;~ 28F0:4B8C
cs=0x28f0;eip=0x004b8f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 97944 push    word ptr [bp+arg_2] ;~ 28F0:4B8F
cs=0x28f0;eip=0x004b92; 	T(NEG(ax));	// 97945 neg     ax ;~ 28F0:4B92
cs=0x28f0;eip=0x004b94; 	T(ADC(dx, 0));	// 97946 adc     dx, 0 ;~ 28F0:4B94
cs=0x28f0;eip=0x004b97; 	T(NEG(dx));	// 97947 neg     dx ;~ 28F0:4B97
cs=0x28f0;eip=0x004b99; 	X(PUSH(dx));	// 97948 push    dx ;~ 28F0:4B99
cs=0x28f0;eip=0x004b9a; 	X(PUSH(ax));	// 97949 push    ax ;~ 28F0:4B9A
cs=0x28f0;eip=0x004b9b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 97950 push    [bp+var_2] ;~ 28F0:4B9B
cs=0x28f0;eip=0x004b9e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 97951 push    [bp+var_4] ;~ 28F0:4B9E
loc_3c081:
	// 10671 
cs=0x28f0;eip=0x004ba1; 	R(CALL(sub_3bbe2,0));	// 97954 call    sub_3BBE2 ;~ 28F0:4BA1
cs=0x28f0;eip=0x004ba4; 	T(MOV(sp, bp));	// 97955 mov     sp, bp ;~ 28F0:4BA4
cs=0x28f0;eip=0x004ba6; 	X(POP(bp));	// 97956 pop     bp ;~ 28F0:4BA6
cs=0x28f0;eip=0x004ba7; 	R(RETN(6));	// 97957 retn    6 ;~ 28F0:4BA7
sub_3c08a:
	// 97965 
#undef var_4
#define var_4 -4
	// 97967 var_4           = word ptr -4 ;~ 28F0:4BAA
#undef var_2
#define var_2 -2
	// 97968 var_2           = word ptr -2 ;~ 28F0:4BAA
#undef arg_0
#define arg_0 4
	// 97969 arg_0           = word ptr  4 ;~ 28F0:4BAA
#undef arg_2
#define arg_2 6
	// 97970 arg_2           = dword ptr  6 ;~ 28F0:4BAA
cs=0x28f0;eip=0x004baa; 	X(PUSH(bp));	// 97972 push    bp ;~ 28F0:4BAA
cs=0x28f0;eip=0x004bab; 	T(MOV(bp, sp));	// 97973 mov     bp, sp ;~ 28F0:4BAB
cs=0x28f0;eip=0x004bad; 	T(SUB(sp, 4));	// 97974 sub     sp, 4 ;~ 28F0:4BAD
cs=0x28f0;eip=0x004bb0; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 97975 cmp     [bp+arg_0], 0 ;~ 28F0:4BB0
cs=0x28f0;eip=0x004bb4; 	R(JLE(loc_3c0e5));	// 97976 jle     short loc_3C0E5 ;~ 28F0:4BB4
cs=0x28f0;eip=0x004bb6; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x64));	// 97977 cmp     [bp+arg_0], 64h ; 'd' ;~ 28F0:4BB6
cs=0x28f0;eip=0x004bba; 	R(JL(loc_3c0a9));	// 97978 jl      short loc_3C0A9 ;~ 28F0:4BBA
cs=0x28f0;eip=0x004bbc; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97979 les     bx, [bp+arg_2] ;~ 28F0:4BBC
cs=0x28f0;eip=0x004bbf; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x18))));	// 97980 mov     ax, es:[bx+18h] ;~ 28F0:4BBF
cs=0x28f0;eip=0x004bc3; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1A))));	// 97981 mov     dx, es:[bx+1Ah] ;~ 28F0:4BC3
cs=0x28f0;eip=0x004bc7; 	R(JMP(loc_3c0cc));	// 97982 jmp     short loc_3C0CC ;~ 28F0:4BC7
loc_3c0a9:
	// 10672 
cs=0x28f0;eip=0x004bc9; 	T(MOV(ax, 0x64));	// 97986 mov     ax, 64h ; 'd' ;~ 28F0:4BC9
cs=0x28f0;eip=0x004bcc; 	T(CWD);	// 97987 cwd ;~ 28F0:4BCC
cs=0x28f0;eip=0x004bcd; 	X(PUSH(dx));	// 97988 push    dx ;~ 28F0:4BCD
cs=0x28f0;eip=0x004bce; 	X(PUSH(ax));	// 97989 push    ax ;~ 28F0:4BCE
cs=0x28f0;eip=0x004bcf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97990 mov     ax, [bp+arg_0] ;~ 28F0:4BCF
cs=0x28f0;eip=0x004bd2; 	T(CWD);	// 97991 cwd ;~ 28F0:4BD2
cs=0x28f0;eip=0x004bd3; 	X(PUSH(dx));	// 97992 push    dx ;~ 28F0:4BD3
cs=0x28f0;eip=0x004bd4; 	X(PUSH(ax));	// 97993 push    ax ;~ 28F0:4BD4
cs=0x28f0;eip=0x004bd5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97994 les     bx, [bp+arg_2] ;~ 28F0:4BD5
cs=0x28f0;eip=0x004bd8; 	X(PUSH(*(dw*)(raddr(es,bx+0x1A))));	// 97995 push    word ptr es:[bx+1Ah] ;~ 28F0:4BD8
cs=0x28f0;eip=0x004bdc; 	X(PUSH(*(dw*)(raddr(es,bx+0x18))));	// 97996 push    word ptr es:[bx+18h] ;~ 28F0:4BDC
cs=0x28f0;eip=0x004be0; 	R(CALLF(sub_105c2,0));	// 97997 call    sub_105C2 ;~ 28F0:4BE0
cs=0x28f0;eip=0x004be5; 	X(PUSH(dx));	// 97998 push    dx ;~ 28F0:4BE5
cs=0x28f0;eip=0x004be6; 	X(PUSH(ax));	// 97999 push    ax ;~ 28F0:4BE6
cs=0x28f0;eip=0x004be7; 	R(CALLF(sub_10526,0));	// 98000 call    sub_10526 ;~ 28F0:4BE7
loc_3c0cc:
	// 10673 
cs=0x28f0;eip=0x004bec; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 98003 mov     [bp+var_4], ax ;~ 28F0:4BEC
cs=0x28f0;eip=0x004bef; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 98004 mov     [bp+var_2], dx ;~ 28F0:4BEF
cs=0x28f0;eip=0x004bf2; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 98005 push    word ptr [bp+arg_2+2] ;~ 28F0:4BF2
cs=0x28f0;eip=0x004bf5; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 98006 push    word ptr [bp+arg_2] ;~ 28F0:4BF5
cs=0x28f0;eip=0x004bf8; 	X(PUSH(dx));	// 98007 push    dx ;~ 28F0:4BF8
cs=0x28f0;eip=0x004bf9; 	X(PUSH(ax));	// 98008 push    ax ;~ 28F0:4BF9
cs=0x28f0;eip=0x004bfa; 	T(NEG(ax));	// 98009 neg     ax ;~ 28F0:4BFA
cs=0x28f0;eip=0x004bfc; 	T(ADC(dx, 0));	// 98010 adc     dx, 0 ;~ 28F0:4BFC
cs=0x28f0;eip=0x004bff; 	T(NEG(dx));	// 98011 neg     dx ;~ 28F0:4BFF
cs=0x28f0;eip=0x004c01; 	X(PUSH(dx));	// 98012 push    dx ;~ 28F0:4C01
cs=0x28f0;eip=0x004c02; 	X(PUSH(ax));	// 98013 push    ax ;~ 28F0:4C02
cs=0x28f0;eip=0x004c03; 	R(JMP(loc_3c136));	// 98014 jmp     short loc_3C136 ;~ 28F0:4C03
loc_3c0e5:
	// 10674 
cs=0x28f0;eip=0x004c05; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FF9C));	// 98018 cmp     [bp+arg_0], 0FF9Ch ;~ 28F0:4C05
cs=0x28f0;eip=0x004c09; 	R(JG(loc_3c0f8));	// 98019 jg      short loc_3C0F8 ;~ 28F0:4C09
cs=0x28f0;eip=0x004c0b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 98020 les     bx, [bp+arg_2] ;~ 28F0:4C0B
cs=0x28f0;eip=0x004c0e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1C))));	// 98021 mov     ax, es:[bx+1Ch] ;~ 28F0:4C0E
cs=0x28f0;eip=0x004c12; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1E))));	// 98022 mov     dx, es:[bx+1Eh] ;~ 28F0:4C12
cs=0x28f0;eip=0x004c16; 	R(JMP(loc_3c11b));	// 98023 jmp     short loc_3C11B ;~ 28F0:4C16
loc_3c0f8:
	// 10675 
cs=0x28f0;eip=0x004c18; 	T(MOV(ax, 0x0FF9C));	// 98027 mov     ax, 0FF9Ch ;~ 28F0:4C18
cs=0x28f0;eip=0x004c1b; 	T(CWD);	// 98028 cwd ;~ 28F0:4C1B
cs=0x28f0;eip=0x004c1c; 	X(PUSH(dx));	// 98029 push    dx ;~ 28F0:4C1C
cs=0x28f0;eip=0x004c1d; 	X(PUSH(ax));	// 98030 push    ax ;~ 28F0:4C1D
cs=0x28f0;eip=0x004c1e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 98031 mov     ax, [bp+arg_0] ;~ 28F0:4C1E
cs=0x28f0;eip=0x004c21; 	T(CWD);	// 98032 cwd ;~ 28F0:4C21
cs=0x28f0;eip=0x004c22; 	X(PUSH(dx));	// 98033 push    dx ;~ 28F0:4C22
cs=0x28f0;eip=0x004c23; 	X(PUSH(ax));	// 98034 push    ax ;~ 28F0:4C23
cs=0x28f0;eip=0x004c24; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 98035 les     bx, [bp+arg_2] ;~ 28F0:4C24
cs=0x28f0;eip=0x004c27; 	X(PUSH(*(dw*)(raddr(es,bx+0x1E))));	// 98036 push    word ptr es:[bx+1Eh] ;~ 28F0:4C27
cs=0x28f0;eip=0x004c2b; 	X(PUSH(*(dw*)(raddr(es,bx+0x1C))));	// 98037 push    word ptr es:[bx+1Ch] ;~ 28F0:4C2B
cs=0x28f0;eip=0x004c2f; 	R(CALLF(sub_105c2,0));	// 98038 call    sub_105C2 ;~ 28F0:4C2F
cs=0x28f0;eip=0x004c34; 	X(PUSH(dx));	// 98039 push    dx ;~ 28F0:4C34
cs=0x28f0;eip=0x004c35; 	X(PUSH(ax));	// 98040 push    ax ;~ 28F0:4C35
cs=0x28f0;eip=0x004c36; 	R(CALLF(sub_10526,0));	// 98041 call    sub_10526 ;~ 28F0:4C36
loc_3c11b:
	// 10676 
cs=0x28f0;eip=0x004c3b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 98044 mov     [bp+var_4], ax ;~ 28F0:4C3B
cs=0x28f0;eip=0x004c3e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 98045 mov     [bp+var_2], dx ;~ 28F0:4C3E
cs=0x28f0;eip=0x004c41; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 98046 push    word ptr [bp+arg_2+2] ;~ 28F0:4C41
cs=0x28f0;eip=0x004c44; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 98047 push    word ptr [bp+arg_2] ;~ 28F0:4C44
cs=0x28f0;eip=0x004c47; 	T(NEG(ax));	// 98048 neg     ax ;~ 28F0:4C47
cs=0x28f0;eip=0x004c49; 	T(ADC(dx, 0));	// 98049 adc     dx, 0 ;~ 28F0:4C49
cs=0x28f0;eip=0x004c4c; 	T(NEG(dx));	// 98050 neg     dx ;~ 28F0:4C4C
cs=0x28f0;eip=0x004c4e; 	X(PUSH(dx));	// 98051 push    dx ;~ 28F0:4C4E
cs=0x28f0;eip=0x004c4f; 	X(PUSH(ax));	// 98052 push    ax ;~ 28F0:4C4F
cs=0x28f0;eip=0x004c50; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 98053 push    [bp+var_2] ;~ 28F0:4C50
cs=0x28f0;eip=0x004c53; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 98054 push    [bp+var_4] ;~ 28F0:4C53
loc_3c136:
	// 10677 
cs=0x28f0;eip=0x004c56; 	R(CALL(sub_3bbe2,0));	// 98057 call    sub_3BBE2 ;~ 28F0:4C56
cs=0x28f0;eip=0x004c59; 	T(MOV(sp, bp));	// 98058 mov     sp, bp ;~ 28F0:4C59
cs=0x28f0;eip=0x004c5b; 	X(POP(bp));	// 98059 pop     bp ;~ 28F0:4C5B
cs=0x28f0;eip=0x004c5c; 	R(RETN(6));	// 98060 retn    6 ;~ 28F0:4C5C
sub_3c13f:
	// 98068 
#undef var_4
#define var_4 -4
	// 98071 var_4           = word ptr -4 ;~ 28F0:4C5F
#undef var_2
#define var_2 -2
	// 98072 var_2           = word ptr -2 ;~ 28F0:4C5F
#undef arg_0
#define arg_0 4
	// 98073 arg_0           = word ptr  4 ;~ 28F0:4C5F
#undef arg_2
#define arg_2 6
	// 98074 arg_2           = dword ptr  6 ;~ 28F0:4C5F
cs=0x28f0;eip=0x004c5f; 	X(PUSH(bp));	// 98076 push    bp ;~ 28F0:4C5F
cs=0x28f0;eip=0x004c60; 	T(MOV(bp, sp));	// 98077 mov     bp, sp ;~ 28F0:4C60
cs=0x28f0;eip=0x004c62; 	T(SUB(sp, 4));	// 98078 sub     sp, 4 ;~ 28F0:4C62
cs=0x28f0;eip=0x004c65; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 98079 cmp     [bp+arg_0], 0 ;~ 28F0:4C65
cs=0x28f0;eip=0x004c69; 	R(JLE(loc_3c17c));	// 98080 jle     short loc_3C17C ;~ 28F0:4C69
cs=0x28f0;eip=0x004c6b; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x64));	// 98081 cmp     [bp+arg_0], 64h ; 'd' ;~ 28F0:4C6B
cs=0x28f0;eip=0x004c6f; 	R(JL(loc_3c15e));	// 98082 jl      short loc_3C15E ;~ 28F0:4C6F
cs=0x28f0;eip=0x004c71; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 98083 les     bx, [bp+arg_2] ;~ 28F0:4C71
cs=0x28f0;eip=0x004c74; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 98084 mov     ax, es:[bx+10h] ;~ 28F0:4C74
cs=0x28f0;eip=0x004c78; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 98085 mov     dx, es:[bx+12h] ;~ 28F0:4C78
cs=0x28f0;eip=0x004c7c; 	R(JMP(loc_3c1c0));	// 98086 jmp     short loc_3C1C0 ;~ 28F0:4C7C
loc_3c15e:
	// 10678 
cs=0x28f0;eip=0x004c7e; 	T(MOV(ax, 0x64));	// 98090 mov     ax, 64h ; 'd' ;~ 28F0:4C7E
cs=0x28f0;eip=0x004c81; 	T(CWD);	// 98091 cwd ;~ 28F0:4C81
cs=0x28f0;eip=0x004c82; 	X(PUSH(dx));	// 98092 push    dx ;~ 28F0:4C82
cs=0x28f0;eip=0x004c83; 	X(PUSH(ax));	// 98093 push    ax ;~ 28F0:4C83
cs=0x28f0;eip=0x004c84; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 98094 mov     ax, [bp+arg_0] ;~ 28F0:4C84
cs=0x28f0;eip=0x004c87; 	T(CWD);	// 98095 cwd ;~ 28F0:4C87
cs=0x28f0;eip=0x004c88; 	X(PUSH(dx));	// 98096 push    dx ;~ 28F0:4C88
cs=0x28f0;eip=0x004c89; 	X(PUSH(ax));	// 98097 push    ax ;~ 28F0:4C89
cs=0x28f0;eip=0x004c8a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 98098 les     bx, [bp+arg_2] ;~ 28F0:4C8A
cs=0x28f0;eip=0x004c8d; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 98099 push    word ptr es:[bx+12h] ;~ 28F0:4C8D
cs=0x28f0;eip=0x004c91; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 98100 push    word ptr es:[bx+10h] ;~ 28F0:4C91
cs=0x28f0;eip=0x004c95; 	R(CALLF(sub_105c2,0));	// 98101 call    sub_105C2 ;~ 28F0:4C95
cs=0x28f0;eip=0x004c9a; 	R(JMP(loc_3c1b9));	// 98102 jmp     short loc_3C1B9 ;~ 28F0:4C9A
loc_3c17c:
	// 10679 
cs=0x28f0;eip=0x004c9c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FF9C));	// 98106 cmp     [bp+arg_0], 0FF9Ch ;~ 28F0:4C9C
cs=0x28f0;eip=0x004ca0; 	R(JG(loc_3c196));	// 98107 jg      short loc_3C196 ;~ 28F0:4CA0
cs=0x28f0;eip=0x004ca2; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 98108 les     bx, [bp+arg_2] ;~ 28F0:4CA2
cs=0x28f0;eip=0x004ca5; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 98109 mov     ax, es:[bx+10h] ;~ 28F0:4CA5
cs=0x28f0;eip=0x004ca9; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 98110 mov     dx, es:[bx+12h] ;~ 28F0:4CA9
cs=0x28f0;eip=0x004cad; 	T(NEG(ax));	// 98111 neg     ax ;~ 28F0:4CAD
cs=0x28f0;eip=0x004caf; 	T(ADC(dx, 0));	// 98112 adc     dx, 0 ;~ 28F0:4CAF
cs=0x28f0;eip=0x004cb2; 	T(NEG(dx));	// 98113 neg     dx ;~ 28F0:4CB2
cs=0x28f0;eip=0x004cb4; 	R(JMP(loc_3c1c0));	// 98114 jmp     short loc_3C1C0 ;~ 28F0:4CB4
loc_3c196:
	// 10680 
cs=0x28f0;eip=0x004cb6; 	T(MOV(ax, 0x0FF9C));	// 98118 mov     ax, 0FF9Ch ;~ 28F0:4CB6
cs=0x28f0;eip=0x004cb9; 	T(CWD);	// 98119 cwd ;~ 28F0:4CB9
cs=0x28f0;eip=0x004cba; 	X(PUSH(dx));	// 98120 push    dx ;~ 28F0:4CBA
cs=0x28f0;eip=0x004cbb; 	X(PUSH(ax));	// 98121 push    ax ;~ 28F0:4CBB
cs=0x28f0;eip=0x004cbc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 98122 mov     ax, [bp+arg_0] ;~ 28F0:4CBC
cs=0x28f0;eip=0x004cbf; 	T(CWD);	// 98123 cwd ;~ 28F0:4CBF
cs=0x28f0;eip=0x004cc0; 	X(PUSH(dx));	// 98124 push    dx ;~ 28F0:4CC0
cs=0x28f0;eip=0x004cc1; 	X(PUSH(ax));	// 98125 push    ax ;~ 28F0:4CC1
cs=0x28f0;eip=0x004cc2; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 98126 les     bx, [bp+arg_2] ;~ 28F0:4CC2
cs=0x28f0;eip=0x004cc5; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 98127 push    word ptr es:[bx+12h] ;~ 28F0:4CC5
cs=0x28f0;eip=0x004cc9; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 98128 push    word ptr es:[bx+10h] ;~ 28F0:4CC9
cs=0x28f0;eip=0x004ccd; 	R(CALLF(sub_105c2,0));	// 98129 call    sub_105C2 ;~ 28F0:4CCD
cs=0x28f0;eip=0x004cd2; 	T(NEG(ax));	// 98130 neg     ax ;~ 28F0:4CD2
cs=0x28f0;eip=0x004cd4; 	T(ADC(dx, 0));	// 98131 adc     dx, 0 ;~ 28F0:4CD4
cs=0x28f0;eip=0x004cd7; 	T(NEG(dx));	// 98132 neg     dx ;~ 28F0:4CD7
loc_3c1b9:
	// 10681 
cs=0x28f0;eip=0x004cd9; 	X(PUSH(dx));	// 98135 push    dx ;~ 28F0:4CD9
cs=0x28f0;eip=0x004cda; 	X(PUSH(ax));	// 98136 push    ax ;~ 28F0:4CDA
cs=0x28f0;eip=0x004cdb; 	R(CALLF(sub_10526,0));	// 98137 call    sub_10526 ;~ 28F0:4CDB
loc_3c1c0:
	// 10682 
cs=0x28f0;eip=0x004ce0; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 98141 mov     [bp+var_4], ax ;~ 28F0:4CE0
cs=0x28f0;eip=0x004ce3; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 98142 mov     [bp+var_2], dx ;~ 28F0:4CE3
cs=0x28f0;eip=0x004ce6; 	T(MOV(ax, 0x100));	// 98143 mov     ax, 100h ;~ 28F0:4CE6
cs=0x28f0;eip=0x004ce9; 	T(CWD);	// 98144 cwd ;~ 28F0:4CE9
cs=0x28f0;eip=0x004cea; 	X(PUSH(dx));	// 98145 push    dx ;~ 28F0:4CEA
cs=0x28f0;eip=0x004ceb; 	X(PUSH(ax));	// 98146 push    ax ;~ 28F0:4CEB
cs=0x28f0;eip=0x004cec; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 98147 mov     ax, word ptr unk_57111 ;~ 28F0:4CEC
cs=0x28f0;eip=0x004cef; 	T(CWD);	// 98148 cwd ;~ 28F0:4CEF
cs=0x28f0;eip=0x004cf0; 	X(PUSH(dx));	// 98149 push    dx ;~ 28F0:4CF0
cs=0x28f0;eip=0x004cf1; 	X(PUSH(ax));	// 98150 push    ax ;~ 28F0:4CF1
cs=0x28f0;eip=0x004cf2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 98151 push    [bp+var_2] ;~ 28F0:4CF2
cs=0x28f0;eip=0x004cf5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 98152 push    [bp+var_4] ;~ 28F0:4CF5
cs=0x28f0;eip=0x004cf8; 	R(CALLF(sub_105c2,0));	// 98153 call    sub_105C2 ;~ 28F0:4CF8
cs=0x28f0;eip=0x004cfd; 	X(PUSH(dx));	// 98154 push    dx ;~ 28F0:4CFD
cs=0x28f0;eip=0x004cfe; 	X(PUSH(ax));	// 98155 push    ax ;~ 28F0:4CFE
cs=0x28f0;eip=0x004cff; 	R(CALLF(sub_10526,0));	// 98156 call    sub_10526 ;~ 28F0:4CFF
cs=0x28f0;eip=0x004d04; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 98157 mov     [bp+var_4], ax ;~ 28F0:4D04
cs=0x28f0;eip=0x004d07; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 98158 mov     [bp+var_2], dx ;~ 28F0:4D07
cs=0x28f0;eip=0x004d0a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 98159 les     bx, [bp+arg_2] ;~ 28F0:4D0A
cs=0x28f0;eip=0x004d0d; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 98160 add     es:[bx], ax ;~ 28F0:4D0D
cs=0x28f0;eip=0x004d10; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 98161 adc     es:[bx+2], dx ;~ 28F0:4D10
cs=0x28f0;eip=0x004d14; 	T(MOV(sp, bp));	// 98162 mov     sp, bp ;~ 28F0:4D14
cs=0x28f0;eip=0x004d16; 	X(POP(bp));	// 98163 pop     bp ;~ 28F0:4D16
cs=0x28f0;eip=0x004d17; 	R(RETN(6));	// 98164 retn    6 ;~ 28F0:4D17
sub_3c1fa:
	// 98172 
#undef var_4
#define var_4 -4
	// 98175 var_4           = word ptr -4 ;~ 28F0:4D1A
#undef var_2
#define var_2 -2
	// 98176 var_2           = word ptr -2 ;~ 28F0:4D1A
#undef arg_0
#define arg_0 4
	// 98177 arg_0           = word ptr  4 ;~ 28F0:4D1A
#undef arg_2
#define arg_2 6
	// 98178 arg_2           = dword ptr  6 ;~ 28F0:4D1A
cs=0x28f0;eip=0x004d1a; 	X(PUSH(bp));	// 98180 push    bp ;~ 28F0:4D1A
cs=0x28f0;eip=0x004d1b; 	T(MOV(bp, sp));	// 98181 mov     bp, sp ;~ 28F0:4D1B
cs=0x28f0;eip=0x004d1d; 	T(SUB(sp, 4));	// 98182 sub     sp, 4 ;~ 28F0:4D1D
cs=0x28f0;eip=0x004d20; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 98183 cmp     [bp+arg_0], 0 ;~ 28F0:4D20
cs=0x28f0;eip=0x004d24; 	R(JLE(loc_3c237));	// 98184 jle     short loc_3C237 ;~ 28F0:4D24
cs=0x28f0;eip=0x004d26; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x64));	// 98185 cmp     [bp+arg_0], 64h ; 'd' ;~ 28F0:4D26
cs=0x28f0;eip=0x004d2a; 	R(JL(loc_3c219));	// 98186 jl      short loc_3C219 ;~ 28F0:4D2A
cs=0x28f0;eip=0x004d2c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 98187 les     bx, [bp+arg_2] ;~ 28F0:4D2C
cs=0x28f0;eip=0x004d2f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 98188 mov     ax, es:[bx+10h] ;~ 28F0:4D2F
cs=0x28f0;eip=0x004d33; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 98189 mov     dx, es:[bx+12h] ;~ 28F0:4D33
cs=0x28f0;eip=0x004d37; 	R(JMP(loc_3c27b));	// 98190 jmp     short loc_3C27B ;~ 28F0:4D37
loc_3c219:
	// 10683 
cs=0x28f0;eip=0x004d39; 	T(MOV(ax, 0x64));	// 98194 mov     ax, 64h ; 'd' ;~ 28F0:4D39
cs=0x28f0;eip=0x004d3c; 	T(CWD);	// 98195 cwd ;~ 28F0:4D3C
cs=0x28f0;eip=0x004d3d; 	X(PUSH(dx));	// 98196 push    dx ;~ 28F0:4D3D
cs=0x28f0;eip=0x004d3e; 	X(PUSH(ax));	// 98197 push    ax ;~ 28F0:4D3E
cs=0x28f0;eip=0x004d3f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 98198 mov     ax, [bp+arg_0] ;~ 28F0:4D3F
cs=0x28f0;eip=0x004d42; 	T(CWD);	// 98199 cwd ;~ 28F0:4D42
cs=0x28f0;eip=0x004d43; 	X(PUSH(dx));	// 98200 push    dx ;~ 28F0:4D43
cs=0x28f0;eip=0x004d44; 	X(PUSH(ax));	// 98201 push    ax ;~ 28F0:4D44
cs=0x28f0;eip=0x004d45; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 98202 les     bx, [bp+arg_2] ;~ 28F0:4D45
cs=0x28f0;eip=0x004d48; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 98203 push    word ptr es:[bx+12h] ;~ 28F0:4D48
cs=0x28f0;eip=0x004d4c; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 98204 push    word ptr es:[bx+10h] ;~ 28F0:4D4C
cs=0x28f0;eip=0x004d50; 	R(CALLF(sub_105c2,0));	// 98205 call    sub_105C2 ;~ 28F0:4D50
cs=0x28f0;eip=0x004d55; 	R(JMP(loc_3c274));	// 98206 jmp     short loc_3C274 ;~ 28F0:4D55
loc_3c237:
	// 10684 
cs=0x28f0;eip=0x004d57; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FF9C));	// 98210 cmp     [bp+arg_0], 0FF9Ch ;~ 28F0:4D57
cs=0x28f0;eip=0x004d5b; 	R(JG(loc_3c251));	// 98211 jg      short loc_3C251 ;~ 28F0:4D5B
cs=0x28f0;eip=0x004d5d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 98212 les     bx, [bp+arg_2] ;~ 28F0:4D5D
cs=0x28f0;eip=0x004d60; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 98213 mov     ax, es:[bx+10h] ;~ 28F0:4D60
cs=0x28f0;eip=0x004d64; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 98214 mov     dx, es:[bx+12h] ;~ 28F0:4D64
cs=0x28f0;eip=0x004d68; 	T(NEG(ax));	// 98215 neg     ax ;~ 28F0:4D68
cs=0x28f0;eip=0x004d6a; 	T(ADC(dx, 0));	// 98216 adc     dx, 0 ;~ 28F0:4D6A
cs=0x28f0;eip=0x004d6d; 	T(NEG(dx));	// 98217 neg     dx ;~ 28F0:4D6D
cs=0x28f0;eip=0x004d6f; 	R(JMP(loc_3c27b));	// 98218 jmp     short loc_3C27B ;~ 28F0:4D6F
loc_3c251:
	// 10685 
cs=0x28f0;eip=0x004d71; 	T(MOV(ax, 0x0FF9C));	// 98222 mov     ax, 0FF9Ch ;~ 28F0:4D71
cs=0x28f0;eip=0x004d74; 	T(CWD);	// 98223 cwd ;~ 28F0:4D74
cs=0x28f0;eip=0x004d75; 	X(PUSH(dx));	// 98224 push    dx ;~ 28F0:4D75
cs=0x28f0;eip=0x004d76; 	X(PUSH(ax));	// 98225 push    ax ;~ 28F0:4D76
cs=0x28f0;eip=0x004d77; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 98226 mov     ax, [bp+arg_0] ;~ 28F0:4D77
cs=0x28f0;eip=0x004d7a; 	T(CWD);	// 98227 cwd ;~ 28F0:4D7A
cs=0x28f0;eip=0x004d7b; 	X(PUSH(dx));	// 98228 push    dx ;~ 28F0:4D7B
cs=0x28f0;eip=0x004d7c; 	X(PUSH(ax));	// 98229 push    ax ;~ 28F0:4D7C
cs=0x28f0;eip=0x004d7d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 98230 les     bx, [bp+arg_2] ;~ 28F0:4D7D
cs=0x28f0;eip=0x004d80; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 98231 push    word ptr es:[bx+12h] ;~ 28F0:4D80
cs=0x28f0;eip=0x004d84; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 98232 push    word ptr es:[bx+10h] ;~ 28F0:4D84
cs=0x28f0;eip=0x004d88; 	R(CALLF(sub_105c2,0));	// 98233 call    sub_105C2 ;~ 28F0:4D88
cs=0x28f0;eip=0x004d8d; 	T(NEG(ax));	// 98234 neg     ax ;~ 28F0:4D8D
cs=0x28f0;eip=0x004d8f; 	T(ADC(dx, 0));	// 98235 adc     dx, 0 ;~ 28F0:4D8F
cs=0x28f0;eip=0x004d92; 	T(NEG(dx));	// 98236 neg     dx ;~ 28F0:4D92
loc_3c274:
	// 10686 
cs=0x28f0;eip=0x004d94; 	X(PUSH(dx));	// 98239 push    dx ;~ 28F0:4D94
cs=0x28f0;eip=0x004d95; 	X(PUSH(ax));	// 98240 push    ax ;~ 28F0:4D95
cs=0x28f0;eip=0x004d96; 	R(CALLF(sub_10526,0));	// 98241 call    sub_10526 ;~ 28F0:4D96
loc_3c27b:
	// 10687 
cs=0x28f0;eip=0x004d9b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 98245 mov     [bp+var_4], ax ;~ 28F0:4D9B
cs=0x28f0;eip=0x004d9e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 98246 mov     [bp+var_2], dx ;~ 28F0:4D9E
cs=0x28f0;eip=0x004da1; 	T(MOV(ax, 0x100));	// 98247 mov     ax, 100h ;~ 28F0:4DA1
cs=0x28f0;eip=0x004da4; 	T(CWD);	// 98248 cwd ;~ 28F0:4DA4
cs=0x28f0;eip=0x004da5; 	X(PUSH(dx));	// 98249 push    dx ;~ 28F0:4DA5
cs=0x28f0;eip=0x004da6; 	X(PUSH(ax));	// 98250 push    ax ;~ 28F0:4DA6
cs=0x28f0;eip=0x004da7; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 98251 mov     ax, word ptr unk_57111 ;~ 28F0:4DA7
cs=0x28f0;eip=0x004daa; 	T(CWD);	// 98252 cwd ;~ 28F0:4DAA
cs=0x28f0;eip=0x004dab; 	X(PUSH(dx));	// 98253 push    dx ;~ 28F0:4DAB
cs=0x28f0;eip=0x004dac; 	X(PUSH(ax));	// 98254 push    ax ;~ 28F0:4DAC
cs=0x28f0;eip=0x004dad; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 98255 push    [bp+var_2] ;~ 28F0:4DAD
cs=0x28f0;eip=0x004db0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 98256 push    [bp+var_4] ;~ 28F0:4DB0
cs=0x28f0;eip=0x004db3; 	R(CALLF(sub_105c2,0));	// 98257 call    sub_105C2 ;~ 28F0:4DB3
cs=0x28f0;eip=0x004db8; 	X(PUSH(dx));	// 98258 push    dx ;~ 28F0:4DB8
cs=0x28f0;eip=0x004db9; 	X(PUSH(ax));	// 98259 push    ax ;~ 28F0:4DB9
cs=0x28f0;eip=0x004dba; 	R(CALLF(sub_10526,0));	// 98260 call    sub_10526 ;~ 28F0:4DBA
cs=0x28f0;eip=0x004dbf; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 98261 mov     [bp+var_4], ax ;~ 28F0:4DBF
cs=0x28f0;eip=0x004dc2; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 98262 mov     [bp+var_2], dx ;~ 28F0:4DC2
cs=0x28f0;eip=0x004dc5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 98263 les     bx, [bp+arg_2] ;~ 28F0:4DC5
cs=0x28f0;eip=0x004dc8; 	X(ADD(*(dw*)(raddr(es,bx+4)), ax));	// 98264 add     es:[bx+4], ax ;~ 28F0:4DC8
cs=0x28f0;eip=0x004dcc; 	X(ADC(*(dw*)(raddr(es,bx+6)), dx));	// 98265 adc     es:[bx+6], dx ;~ 28F0:4DCC
cs=0x28f0;eip=0x004dd0; 	T(MOV(sp, bp));	// 98266 mov     sp, bp ;~ 28F0:4DD0
cs=0x28f0;eip=0x004dd2; 	X(POP(bp));	// 98267 pop     bp ;~ 28F0:4DD2
cs=0x28f0;eip=0x004dd3; 	R(RETN(6));	// 98268 retn    6 ;~ 28F0:4DD3
sub_3c2b6:
	// 98276 
#undef arg_0
#define arg_0 4
	// 98279 arg_0           = dword ptr  4 ;~ 28F0:4DD6
cs=0x28f0;eip=0x004dd6; 	X(PUSH(bp));	// 98281 push    bp ;~ 28F0:4DD6
cs=0x28f0;eip=0x004dd7; 	T(MOV(bp, sp));	// 98282 mov     bp, sp ;~ 28F0:4DD7
cs=0x28f0;eip=0x004dd9; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98283 les     bx, [bp+arg_0] ;~ 28F0:4DD9
cs=0x28f0;eip=0x004ddc; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 98284 mov     ax, es:[bx] ;~ 28F0:4DDC
cs=0x28f0;eip=0x004ddf; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 98285 mov     dx, es:[bx+2] ;~ 28F0:4DDF
cs=0x28f0;eip=0x004de3; 	T(CMP(*(dw*)(raddr(es,bx+0x0A)), dx));	// 98286 cmp     es:[bx+0Ah], dx ;~ 28F0:4DE3
cs=0x28f0;eip=0x004de7; 	R(JG(loc_3c2ed));	// 98287 jg      short loc_3C2ED ;~ 28F0:4DE7
cs=0x28f0;eip=0x004de9; 	R(JL(loc_3c2d1));	// 98288 jl      short loc_3C2D1 ;~ 28F0:4DE9
cs=0x28f0;eip=0x004deb; 	T(CMP(*(dw*)(raddr(es,bx+8)), ax));	// 98289 cmp     es:[bx+8], ax ;~ 28F0:4DEB
cs=0x28f0;eip=0x004def; 	R(JA(loc_3c2ed));	// 98290 ja      short loc_3C2ED ;~ 28F0:4DEF
loc_3c2d1:
	// 10688 
cs=0x28f0;eip=0x004df1; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 98293 mov     ax, es:[bx+0Ch] ;~ 28F0:4DF1
cs=0x28f0;eip=0x004df5; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 98294 mov     dx, es:[bx+0Eh] ;~ 28F0:4DF5
cs=0x28f0;eip=0x004df9; 	T(SUB(ax, *(dw*)(raddr(es,bx+8))));	// 98295 sub     ax, es:[bx+8] ;~ 28F0:4DF9
cs=0x28f0;eip=0x004dfd; 	T(SBB(dx, *(dw*)(raddr(es,bx+0x0A))));	// 98296 sbb     dx, es:[bx+0Ah] ;~ 28F0:4DFD
loc_3c2e1:
	// 10689 
cs=0x28f0;eip=0x004e01; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 98299 add     es:[bx], ax ;~ 28F0:4E01
cs=0x28f0;eip=0x004e04; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 98300 adc     es:[bx+2], dx ;~ 28F0:4E04
cs=0x28f0;eip=0x004e08; 	T(MOV(ax, 1));	// 98301 mov     ax, 1 ;~ 28F0:4E08
cs=0x28f0;eip=0x004e0b; 	R(JMP(loc_3c316));	// 98302 jmp     short loc_3C316 ;~ 28F0:4E0B
loc_3c2ed:
	// 10690 
cs=0x28f0;eip=0x004e0d; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 98307 mov     ax, es:[bx] ;~ 28F0:4E0D
cs=0x28f0;eip=0x004e10; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 98308 mov     dx, es:[bx+2] ;~ 28F0:4E10
cs=0x28f0;eip=0x004e14; 	T(CMP(*(dw*)(raddr(es,bx+0x0E)), dx));	// 98309 cmp     es:[bx+0Eh], dx ;~ 28F0:4E14
cs=0x28f0;eip=0x004e18; 	R(JL(loc_3c314));	// 98310 jl      short loc_3C314 ;~ 28F0:4E18
cs=0x28f0;eip=0x004e1a; 	R(JG(loc_3c302));	// 98311 jg      short loc_3C302 ;~ 28F0:4E1A
cs=0x28f0;eip=0x004e1c; 	T(CMP(*(dw*)(raddr(es,bx+0x0C)), ax));	// 98312 cmp     es:[bx+0Ch], ax ;~ 28F0:4E1C
cs=0x28f0;eip=0x004e20; 	R(JBE(loc_3c314));	// 98313 jbe     short loc_3C314 ;~ 28F0:4E20
loc_3c302:
	// 10691 
cs=0x28f0;eip=0x004e22; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 98316 mov     ax, es:[bx+8] ;~ 28F0:4E22
cs=0x28f0;eip=0x004e26; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 98317 mov     dx, es:[bx+0Ah] ;~ 28F0:4E26
cs=0x28f0;eip=0x004e2a; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x0C))));	// 98318 sub     ax, es:[bx+0Ch] ;~ 28F0:4E2A
cs=0x28f0;eip=0x004e2e; 	T(SBB(dx, *(dw*)(raddr(es,bx+0x0E))));	// 98319 sbb     dx, es:[bx+0Eh] ;~ 28F0:4E2E
cs=0x28f0;eip=0x004e32; 	R(JMP(loc_3c2e1));	// 98320 jmp     short loc_3C2E1 ;~ 28F0:4E32
loc_3c314:
	// 10692 
cs=0x28f0;eip=0x004e34; 	T(SUB(ax, ax));	// 98325 sub     ax, ax ;~ 28F0:4E34
loc_3c316:
	// 10693 
cs=0x28f0;eip=0x004e36; 	X(POP(bp));	// 98328 pop     bp ;~ 28F0:4E36
cs=0x28f0;eip=0x004e37; 	R(RETN(4));	// 98329 retn    4 ;~ 28F0:4E37
sub_3c31a:
	// 98337 
#undef var_1e
#define var_1e -0x1E
	// 98339 var_1E          = byte ptr -1Eh ;~ 28F0:4E3A
#undef var_c
#define var_c -0x0C
	// 98340 var_C           = word ptr -0Ch ;~ 28F0:4E3A
#undef var_a
#define var_a -0x0A
	// 98341 var_A           = word ptr -0Ah ;~ 28F0:4E3A
#undef var_8
#define var_8 -8
	// 98342 var_8           = word ptr -8 ;~ 28F0:4E3A
#undef var_6
#define var_6 -6
	// 98343 var_6           = word ptr -6 ;~ 28F0:4E3A
#undef var_4
#define var_4 -4
	// 98344 var_4           = word ptr -4 ;~ 28F0:4E3A
#undef var_2
#define var_2 -2
	// 98345 var_2           = word ptr -2 ;~ 28F0:4E3A
#undef arg_0
#define arg_0 4
	// 98346 arg_0           = word ptr  4 ;~ 28F0:4E3A
#undef arg_2
#define arg_2 6
	// 98347 arg_2           = word ptr  6 ;~ 28F0:4E3A
#undef arg_4
#define arg_4 8
	// 98348 arg_4           = word ptr  8 ;~ 28F0:4E3A
#undef arg_6
#define arg_6 0x0A
	// 98349 arg_6           = dword ptr  0Ah ;~ 28F0:4E3A
#undef arg_a
#define arg_a 0x0E
	// 98350 arg_A           = dword ptr  0Eh ;~ 28F0:4E3A
cs=0x28f0;eip=0x004e3a; 	X(PUSH(bp));	// 98352 push    bp ;~ 28F0:4E3A
cs=0x28f0;eip=0x004e3b; 	T(MOV(bp, sp));	// 98353 mov     bp, sp ;~ 28F0:4E3B
cs=0x28f0;eip=0x004e3d; 	T(SUB(sp, 0x1E));	// 98354 sub     sp, 1Eh ;~ 28F0:4E3D
cs=0x28f0;eip=0x004e40; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_a))));	// 98355 les     bx, [bp+arg_A] ;~ 28F0:4E40
cs=0x28f0;eip=0x004e43; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 98356 mov     ax, es:[bx] ;~ 28F0:4E43
cs=0x28f0;eip=0x004e46; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 98357 mov     dx, es:[bx+2] ;~ 28F0:4E46
cs=0x28f0;eip=0x004e4a; 	T(MOV(dh, dl));	// 98358 mov     dh, dl ;~ 28F0:4E4A
cs=0x28f0;eip=0x004e4c; 	T(MOV(dl, ah));	// 98359 mov     dl, ah ;~ 28F0:4E4C
cs=0x28f0;eip=0x004e4e; 	T(MOV(ah, al));	// 98360 mov     ah, al ;~ 28F0:4E4E
cs=0x28f0;eip=0x004e50; 	T(SUB(al, al));	// 98361 sub     al, al ;~ 28F0:4E50
cs=0x28f0;eip=0x004e52; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 98362 mov     [bp+var_4], ax ;~ 28F0:4E52
cs=0x28f0;eip=0x004e55; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 98363 mov     [bp+var_2], dx ;~ 28F0:4E55
cs=0x28f0;eip=0x004e58; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20))));	// 98364 mov     ax, es:[bx+20h] ;~ 28F0:4E58
cs=0x28f0;eip=0x004e5c; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x22))));	// 98365 mov     dx, es:[bx+22h] ;~ 28F0:4E5C
cs=0x28f0;eip=0x004e60; 	T(MOV(dh, dl));	// 98366 mov     dh, dl ;~ 28F0:4E60
cs=0x28f0;eip=0x004e62; 	T(MOV(dl, ah));	// 98367 mov     dl, ah ;~ 28F0:4E62
cs=0x28f0;eip=0x004e64; 	T(MOV(ah, al));	// 98368 mov     ah, al ;~ 28F0:4E64
cs=0x28f0;eip=0x004e66; 	T(SUB(al, al));	// 98369 sub     al, al ;~ 28F0:4E66
cs=0x28f0;eip=0x004e68; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 98370 mov     [bp+var_C], ax ;~ 28F0:4E68
cs=0x28f0;eip=0x004e6b; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 98371 mov     [bp+var_A], dx ;~ 28F0:4E6B
cs=0x28f0;eip=0x004e6e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x40))));	// 98372 mov     ax, es:[bx+40h] ;~ 28F0:4E6E
cs=0x28f0;eip=0x004e72; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x42))));	// 98373 mov     dx, es:[bx+42h] ;~ 28F0:4E72
cs=0x28f0;eip=0x004e76; 	T(MOV(dh, dl));	// 98374 mov     dh, dl ;~ 28F0:4E76
cs=0x28f0;eip=0x004e78; 	T(MOV(dl, ah));	// 98375 mov     dl, ah ;~ 28F0:4E78
cs=0x28f0;eip=0x004e7a; 	T(MOV(ah, al));	// 98376 mov     ah, al ;~ 28F0:4E7A
cs=0x28f0;eip=0x004e7c; 	T(SUB(al, al));	// 98377 sub     al, al ;~ 28F0:4E7C
cs=0x28f0;eip=0x004e7e; 	T(NEG(ax));	// 98378 neg     ax ;~ 28F0:4E7E
cs=0x28f0;eip=0x004e80; 	T(ADC(dx, 0));	// 98379 adc     dx, 0 ;~ 28F0:4E80
cs=0x28f0;eip=0x004e83; 	T(NEG(dx));	// 98380 neg     dx ;~ 28F0:4E83
cs=0x28f0;eip=0x004e85; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 98381 mov     [bp+var_8], ax ;~ 28F0:4E85
cs=0x28f0;eip=0x004e88; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 98382 mov     [bp+var_6], dx ;~ 28F0:4E88
cs=0x28f0;eip=0x004e8b; 	T(ax = bp+var_1e);	// 98383 lea     ax, [bp+var_1E] ;~ 28F0:4E8B
cs=0x28f0;eip=0x004e8e; 	X(PUSH(ax));	// 98384 push    ax ;~ 28F0:4E8E
cs=0x28f0;eip=0x004e8f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 98385 push    [bp+arg_0] ;~ 28F0:4E8F
cs=0x28f0;eip=0x004e92; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 98386 push    [bp+arg_2] ;~ 28F0:4E92
cs=0x28f0;eip=0x004e95; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 98387 push    [bp+arg_4] ;~ 28F0:4E95
cs=0x28f0;eip=0x004e98; 	R(CALLF(sub_24872,0));	// 98388 call    sub_24872 ;~ 28F0:4E98
cs=0x28f0;eip=0x004e9d; 	T(ax = bp+var_c);	// 98389 lea     ax, [bp+var_C] ;~ 28F0:4E9D
cs=0x28f0;eip=0x004ea0; 	X(PUSH(ax));	// 98390 push    ax ;~ 28F0:4EA0
cs=0x28f0;eip=0x004ea1; 	T(ax = bp+var_1e);	// 98391 lea     ax, [bp+var_1E] ;~ 28F0:4EA1
cs=0x28f0;eip=0x004ea4; 	X(PUSH(ax));	// 98392 push    ax ;~ 28F0:4EA4
cs=0x28f0;eip=0x004ea5; 	R(CALLF(sub_2b372,0));	// 98393 call    sub_2B372 ;~ 28F0:4EA5
cs=0x28f0;eip=0x004eaa; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 98394 mov     ax, [bp+var_4] ;~ 28F0:4EAA
cs=0x28f0;eip=0x004ead; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 98395 mov     dx, [bp+var_2] ;~ 28F0:4EAD
cs=0x28f0;eip=0x004eb0; 	T(MOV(cl, 8));	// 98396 mov     cl, 8 ;~ 28F0:4EB0
cs=0x28f0;eip=0x004eb2; 	R(CALLF(sub_10240,0));	// 98397 call    sub_10240 ;~ 28F0:4EB2
cs=0x28f0;eip=0x004eb7; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 98398 les     bx, [bp+arg_6] ;~ 28F0:4EB7
cs=0x28f0;eip=0x004eba; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 98399 mov     es:[bx], ax ;~ 28F0:4EBA
cs=0x28f0;eip=0x004ebd; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 98400 mov     es:[bx+2], dx ;~ 28F0:4EBD
cs=0x28f0;eip=0x004ec1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 98401 mov     ax, [bp+var_C] ;~ 28F0:4EC1
cs=0x28f0;eip=0x004ec4; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_a))));	// 98402 mov     dx, [bp+var_A] ;~ 28F0:4EC4
cs=0x28f0;eip=0x004ec7; 	T(MOV(cl, 8));	// 98403 mov     cl, 8 ;~ 28F0:4EC7
cs=0x28f0;eip=0x004ec9; 	R(CALLF(sub_10240,0));	// 98404 call    sub_10240 ;~ 28F0:4EC9
cs=0x28f0;eip=0x004ece; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 98405 les     bx, [bp+arg_6] ;~ 28F0:4ECE
cs=0x28f0;eip=0x004ed1; 	X(MOV(*(dw*)(raddr(es,bx+0x20)), ax));	// 98406 mov     es:[bx+20h], ax ;~ 28F0:4ED1
cs=0x28f0;eip=0x004ed5; 	X(MOV(*(dw*)(raddr(es,bx+0x22)), dx));	// 98407 mov     es:[bx+22h], dx ;~ 28F0:4ED5
cs=0x28f0;eip=0x004ed9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 98408 mov     ax, [bp+var_8] ;~ 28F0:4ED9
cs=0x28f0;eip=0x004edc; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 98409 mov     dx, [bp+var_6] ;~ 28F0:4EDC
cs=0x28f0;eip=0x004edf; 	T(MOV(cl, 8));	// 98410 mov     cl, 8 ;~ 28F0:4EDF
cs=0x28f0;eip=0x004ee1; 	R(CALLF(sub_10240,0));	// 98411 call    sub_10240 ;~ 28F0:4EE1
cs=0x28f0;eip=0x004ee6; 	T(NEG(ax));	// 98412 neg     ax ;~ 28F0:4EE6
cs=0x28f0;eip=0x004ee8; 	T(ADC(dx, 0));	// 98413 adc     dx, 0 ;~ 28F0:4EE8
cs=0x28f0;eip=0x004eeb; 	T(NEG(dx));	// 98414 neg     dx ;~ 28F0:4EEB
cs=0x28f0;eip=0x004eed; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 98415 les     bx, [bp+arg_6] ;~ 28F0:4EED
cs=0x28f0;eip=0x004ef0; 	X(MOV(*(dw*)(raddr(es,bx+0x40)), ax));	// 98416 mov     es:[bx+40h], ax ;~ 28F0:4EF0
cs=0x28f0;eip=0x004ef4; 	X(MOV(*(dw*)(raddr(es,bx+0x42)), dx));	// 98417 mov     es:[bx+42h], dx ;~ 28F0:4EF4
cs=0x28f0;eip=0x004ef8; 	T(MOV(sp, bp));	// 98418 mov     sp, bp ;~ 28F0:4EF8
cs=0x28f0;eip=0x004efa; 	X(POP(bp));	// 98419 pop     bp ;~ 28F0:4EFA
cs=0x28f0;eip=0x004efb; 	R(RETN(0x0E));	// 98420 retn    0Eh ;~ 28F0:4EFB
sub_3c3de:
	// 98428 
#undef arg_0
#define arg_0 4
	// 98430 arg_0           = word ptr  4 ;~ 28F0:4EFE
#undef arg_2
#define arg_2 6
	// 98431 arg_2           = word ptr  6 ;~ 28F0:4EFE
#undef arg_4
#define arg_4 8
	// 98432 arg_4           = dword ptr  8 ;~ 28F0:4EFE
#undef arg_8
#define arg_8 0x0C
	// 98433 arg_8           = dword ptr  0Ch ;~ 28F0:4EFE
cs=0x28f0;eip=0x004efe; 	X(PUSH(bp));	// 98435 push    bp ;~ 28F0:4EFE
cs=0x28f0;eip=0x004eff; 	T(MOV(bp, sp));	// 98436 mov     bp, sp ;~ 28F0:4EFF
cs=0x28f0;eip=0x004f01; 	T(SUB(sp, 4));	// 98437 sub     sp, 4 ;~ 28F0:4F01
cs=0x28f0;eip=0x004f04; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x2D0));	// 98438 cmp     [bp+arg_0], 2D0h ;~ 28F0:4F04
cs=0x28f0;eip=0x004f09; 	R(JNZ(loc_3c3f2));	// 98439 jnz     short loc_3C3F2 ;~ 28F0:4F09
cs=0x28f0;eip=0x004f0b; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), 0x2C8));	// 98440 mov     [bp+arg_0], 2C8h ;~ 28F0:4F0B
cs=0x28f0;eip=0x004f10; 	R(JMP(loc_3c3fe));	// 98441 jmp     short loc_3C3FE ;~ 28F0:4F10
loc_3c3f2:
	// 10694 
cs=0x28f0;eip=0x004f12; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x870));	// 98445 cmp     [bp+arg_0], 870h ;~ 28F0:4F12
cs=0x28f0;eip=0x004f17; 	R(JNZ(loc_3c3fe));	// 98446 jnz     short loc_3C3FE ;~ 28F0:4F17
cs=0x28f0;eip=0x004f19; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), 0x878));	// 98447 mov     [bp+arg_0], 878h ;~ 28F0:4F19
loc_3c3fe:
	// 10695 
cs=0x28f0;eip=0x004f1e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 98451 push    [bp+arg_0] ;~ 28F0:4F1E
cs=0x28f0;eip=0x004f21; 	R(CALLF(sub_27c9e,0));	// 98452 call    sub_27C9E ;~ 28F0:4F21
cs=0x28f0;eip=0x004f26; 	X(PUSH(dx));	// 98453 push    dx ;~ 28F0:4F26
cs=0x28f0;eip=0x004f27; 	X(PUSH(ax));	// 98454 push    ax ;~ 28F0:4F27
cs=0x28f0;eip=0x004f28; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 98455 push    [bp+arg_0] ;~ 28F0:4F28
cs=0x28f0;eip=0x004f2b; 	R(CALLF(sub_27cb4,0));	// 98456 call    sub_27CB4 ;~ 28F0:4F2B
cs=0x28f0;eip=0x004f30; 	X(PUSH(dx));	// 98457 push    dx ;~ 28F0:4F30
cs=0x28f0;eip=0x004f31; 	X(PUSH(ax));	// 98458 push    ax ;~ 28F0:4F31
cs=0x28f0;eip=0x004f32; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 98459 push    [bp+arg_2] ;~ 28F0:4F32
cs=0x28f0;eip=0x004f35; 	R(CALLF(sub_27cb4,0));	// 98460 call    sub_27CB4 ;~ 28F0:4F35
cs=0x28f0;eip=0x004f3a; 	X(PUSH(dx));	// 98461 push    dx ;~ 28F0:4F3A
cs=0x28f0;eip=0x004f3b; 	X(PUSH(ax));	// 98462 push    ax ;~ 28F0:4F3B
cs=0x28f0;eip=0x004f3c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 98463 les     bx, [bp+arg_8] ;~ 28F0:4F3C
cs=0x28f0;eip=0x004f3f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x40))));	// 98464 mov     ax, es:[bx+40h] ;~ 28F0:4F3F
cs=0x28f0;eip=0x004f43; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x42))));	// 98465 mov     dx, es:[bx+42h] ;~ 28F0:4F43
cs=0x28f0;eip=0x004f47; 	T(MOV(cl, 8));	// 98466 mov     cl, 8 ;~ 28F0:4F47
cs=0x28f0;eip=0x004f49; 	R(CALLF(sub_10240,0));	// 98467 call    sub_10240 ;~ 28F0:4F49
cs=0x28f0;eip=0x004f4e; 	X(PUSH(dx));	// 98468 push    dx ;~ 28F0:4F4E
cs=0x28f0;eip=0x004f4f; 	X(PUSH(ax));	// 98469 push    ax ;~ 28F0:4F4F
cs=0x28f0;eip=0x004f50; 	R(CALLF(sub_105c2,0));	// 98470 call    sub_105C2 ;~ 28F0:4F50
cs=0x28f0;eip=0x004f55; 	X(PUSH(dx));	// 98471 push    dx ;~ 28F0:4F55
cs=0x28f0;eip=0x004f56; 	X(PUSH(ax));	// 98472 push    ax ;~ 28F0:4F56
cs=0x28f0;eip=0x004f57; 	R(CALLF(sub_10526,0));	// 98473 call    sub_10526 ;~ 28F0:4F57
cs=0x28f0;eip=0x004f5c; 	X(PUSH(dx));	// 98474 push    dx ;~ 28F0:4F5C
cs=0x28f0;eip=0x004f5d; 	X(PUSH(ax));	// 98475 push    ax ;~ 28F0:4F5D
cs=0x28f0;eip=0x004f5e; 	R(CALLF(sub_105c2,0));	// 98476 call    sub_105C2 ;~ 28F0:4F5E
cs=0x28f0;eip=0x004f63; 	T(MOV(cl, 8));	// 98477 mov     cl, 8 ;~ 28F0:4F63
cs=0x28f0;eip=0x004f65; 	R(CALLF(sub_10240,0));	// 98478 call    sub_10240 ;~ 28F0:4F65
cs=0x28f0;eip=0x004f6a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 98479 les     bx, [bp+arg_4] ;~ 28F0:4F6A
cs=0x28f0;eip=0x004f6d; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 98480 mov     es:[bx], ax ;~ 28F0:4F6D
cs=0x28f0;eip=0x004f70; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 98481 mov     es:[bx+2], dx ;~ 28F0:4F70
cs=0x28f0;eip=0x004f74; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 98482 push    [bp+arg_0] ;~ 28F0:4F74
cs=0x28f0;eip=0x004f77; 	R(CALLF(sub_27c9e,0));	// 98483 call    sub_27C9E ;~ 28F0:4F77
cs=0x28f0;eip=0x004f7c; 	X(PUSH(dx));	// 98484 push    dx ;~ 28F0:4F7C
cs=0x28f0;eip=0x004f7d; 	X(PUSH(ax));	// 98485 push    ax ;~ 28F0:4F7D
cs=0x28f0;eip=0x004f7e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 98486 push    [bp+arg_0] ;~ 28F0:4F7E
cs=0x28f0;eip=0x004f81; 	R(CALLF(sub_27cb4,0));	// 98487 call    sub_27CB4 ;~ 28F0:4F81
cs=0x28f0;eip=0x004f86; 	X(PUSH(dx));	// 98488 push    dx ;~ 28F0:4F86
cs=0x28f0;eip=0x004f87; 	X(PUSH(ax));	// 98489 push    ax ;~ 28F0:4F87
cs=0x28f0;eip=0x004f88; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 98490 push    [bp+arg_2] ;~ 28F0:4F88
cs=0x28f0;eip=0x004f8b; 	R(CALLF(sub_27c9e,0));	// 98491 call    sub_27C9E ;~ 28F0:4F8B
cs=0x28f0;eip=0x004f90; 	X(PUSH(dx));	// 98492 push    dx ;~ 28F0:4F90
cs=0x28f0;eip=0x004f91; 	X(PUSH(ax));	// 98493 push    ax ;~ 28F0:4F91
cs=0x28f0;eip=0x004f92; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 98494 les     bx, [bp+arg_8] ;~ 28F0:4F92
cs=0x28f0;eip=0x004f95; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20))));	// 98495 mov     ax, es:[bx+20h] ;~ 28F0:4F95
cs=0x28f0;eip=0x004f99; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x22))));	// 98496 mov     dx, es:[bx+22h] ;~ 28F0:4F99
cs=0x28f0;eip=0x004f9d; 	T(MOV(cl, 8));	// 98497 mov     cl, 8 ;~ 28F0:4F9D
cs=0x28f0;eip=0x004f9f; 	R(CALLF(sub_10240,0));	// 98498 call    sub_10240 ;~ 28F0:4F9F
cs=0x28f0;eip=0x004fa4; 	X(PUSH(dx));	// 98499 push    dx ;~ 28F0:4FA4
cs=0x28f0;eip=0x004fa5; 	X(PUSH(ax));	// 98500 push    ax ;~ 28F0:4FA5
cs=0x28f0;eip=0x004fa6; 	R(CALLF(sub_105c2,0));	// 98501 call    sub_105C2 ;~ 28F0:4FA6
cs=0x28f0;eip=0x004fab; 	X(PUSH(dx));	// 98502 push    dx ;~ 28F0:4FAB
cs=0x28f0;eip=0x004fac; 	X(PUSH(ax));	// 98503 push    ax ;~ 28F0:4FAC
cs=0x28f0;eip=0x004fad; 	R(CALLF(sub_10526,0));	// 98504 call    sub_10526 ;~ 28F0:4FAD
cs=0x28f0;eip=0x004fb2; 	X(PUSH(dx));	// 98505 push    dx ;~ 28F0:4FB2
cs=0x28f0;eip=0x004fb3; 	X(PUSH(ax));	// 98506 push    ax ;~ 28F0:4FB3
cs=0x28f0;eip=0x004fb4; 	R(CALLF(sub_105c2,0));	// 98507 call    sub_105C2 ;~ 28F0:4FB4
cs=0x28f0;eip=0x004fb9; 	T(MOV(cl, 8));	// 98508 mov     cl, 8 ;~ 28F0:4FB9
cs=0x28f0;eip=0x004fbb; 	R(CALLF(sub_10240,0));	// 98509 call    sub_10240 ;~ 28F0:4FBB
cs=0x28f0;eip=0x004fc0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 98510 les     bx, [bp+arg_4] ;~ 28F0:4FC0
cs=0x28f0;eip=0x004fc3; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 98511 add     es:[bx], ax ;~ 28F0:4FC3
cs=0x28f0;eip=0x004fc6; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 98512 adc     es:[bx+2], dx ;~ 28F0:4FC6
cs=0x28f0;eip=0x004fca; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 98513 les     bx, [bp+arg_8] ;~ 28F0:4FCA
cs=0x28f0;eip=0x004fcd; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 98514 mov     ax, es:[bx] ;~ 28F0:4FCD
cs=0x28f0;eip=0x004fd0; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 98515 mov     dx, es:[bx+2] ;~ 28F0:4FD0
cs=0x28f0;eip=0x004fd4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 98516 les     bx, [bp+arg_4] ;~ 28F0:4FD4
cs=0x28f0;eip=0x004fd7; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 98517 add     es:[bx], ax ;~ 28F0:4FD7
cs=0x28f0;eip=0x004fda; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 98518 adc     es:[bx+2], dx ;~ 28F0:4FDA
cs=0x28f0;eip=0x004fde; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 98519 push    [bp+arg_2] ;~ 28F0:4FDE
cs=0x28f0;eip=0x004fe1; 	R(CALLF(sub_27c9e,0));	// 98520 call    sub_27C9E ;~ 28F0:4FE1
cs=0x28f0;eip=0x004fe6; 	X(PUSH(dx));	// 98521 push    dx ;~ 28F0:4FE6
cs=0x28f0;eip=0x004fe7; 	X(PUSH(ax));	// 98522 push    ax ;~ 28F0:4FE7
cs=0x28f0;eip=0x004fe8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 98523 les     bx, [bp+arg_8] ;~ 28F0:4FE8
cs=0x28f0;eip=0x004feb; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x40))));	// 98524 mov     ax, es:[bx+40h] ;~ 28F0:4FEB
cs=0x28f0;eip=0x004fef; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x42))));	// 98525 mov     dx, es:[bx+42h] ;~ 28F0:4FEF
cs=0x28f0;eip=0x004ff3; 	T(MOV(cl, 8));	// 98526 mov     cl, 8 ;~ 28F0:4FF3
cs=0x28f0;eip=0x004ff5; 	R(CALLF(sub_10240,0));	// 98527 call    sub_10240 ;~ 28F0:4FF5
cs=0x28f0;eip=0x004ffa; 	X(PUSH(dx));	// 98528 push    dx ;~ 28F0:4FFA
cs=0x28f0;eip=0x004ffb; 	X(PUSH(ax));	// 98529 push    ax ;~ 28F0:4FFB
cs=0x28f0;eip=0x004ffc; 	R(CALLF(sub_105c2,0));	// 98530 call    sub_105C2 ;~ 28F0:4FFC
cs=0x28f0;eip=0x005001; 	T(MOV(cl, 8));	// 98531 mov     cl, 8 ;~ 28F0:5001
cs=0x28f0;eip=0x005003; 	R(CALLF(sub_10240,0));	// 98532 call    sub_10240 ;~ 28F0:5003
cs=0x28f0;eip=0x005008; 	T(NEG(ax));	// 98533 neg     ax ;~ 28F0:5008
cs=0x28f0;eip=0x00500a; 	T(ADC(dx, 0));	// 98534 adc     dx, 0 ;~ 28F0:500A
cs=0x28f0;eip=0x00500d; 	T(NEG(dx));	// 98535 neg     dx ;~ 28F0:500D
cs=0x28f0;eip=0x00500f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 98536 les     bx, [bp+arg_4] ;~ 28F0:500F
cs=0x28f0;eip=0x005012; 	X(MOV(*(dw*)(raddr(es,bx+0x20)), ax));	// 98537 mov     es:[bx+20h], ax ;~ 28F0:5012
cs=0x28f0;eip=0x005016; 	X(MOV(*(dw*)(raddr(es,bx+0x22)), dx));	// 98538 mov     es:[bx+22h], dx ;~ 28F0:5016
cs=0x28f0;eip=0x00501a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 98539 push    [bp+arg_2] ;~ 28F0:501A
cs=0x28f0;eip=0x00501d; 	R(CALLF(sub_27cb4,0));	// 98540 call    sub_27CB4 ;~ 28F0:501D
cs=0x28f0;eip=0x005022; 	X(PUSH(dx));	// 98541 push    dx ;~ 28F0:5022
cs=0x28f0;eip=0x005023; 	X(PUSH(ax));	// 98542 push    ax ;~ 28F0:5023
cs=0x28f0;eip=0x005024; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 98543 les     bx, [bp+arg_8] ;~ 28F0:5024
cs=0x28f0;eip=0x005027; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20))));	// 98544 mov     ax, es:[bx+20h] ;~ 28F0:5027
cs=0x28f0;eip=0x00502b; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x22))));	// 98545 mov     dx, es:[bx+22h] ;~ 28F0:502B
cs=0x28f0;eip=0x00502f; 	T(MOV(cl, 8));	// 98546 mov     cl, 8 ;~ 28F0:502F
cs=0x28f0;eip=0x005031; 	R(CALLF(sub_10240,0));	// 98547 call    sub_10240 ;~ 28F0:5031
cs=0x28f0;eip=0x005036; 	X(PUSH(dx));	// 98548 push    dx ;~ 28F0:5036
cs=0x28f0;eip=0x005037; 	X(PUSH(ax));	// 98549 push    ax ;~ 28F0:5037
cs=0x28f0;eip=0x005038; 	R(CALLF(sub_105c2,0));	// 98550 call    sub_105C2 ;~ 28F0:5038
cs=0x28f0;eip=0x00503d; 	T(MOV(cl, 8));	// 98551 mov     cl, 8 ;~ 28F0:503D
cs=0x28f0;eip=0x00503f; 	R(CALLF(sub_10240,0));	// 98552 call    sub_10240 ;~ 28F0:503F
cs=0x28f0;eip=0x005044; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 98553 les     bx, [bp+arg_4] ;~ 28F0:5044
cs=0x28f0;eip=0x005047; 	X(ADD(*(dw*)(raddr(es,bx+0x20)), ax));	// 98554 add     es:[bx+20h], ax ;~ 28F0:5047
cs=0x28f0;eip=0x00504b; 	X(ADC(*(dw*)(raddr(es,bx+0x22)), dx));	// 98555 adc     es:[bx+22h], dx ;~ 28F0:504B
cs=0x28f0;eip=0x00504f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 98556 push    [bp+arg_0] ;~ 28F0:504F
cs=0x28f0;eip=0x005052; 	R(CALLF(sub_27cb4,0));	// 98557 call    sub_27CB4 ;~ 28F0:5052
cs=0x28f0;eip=0x005057; 	X(PUSH(dx));	// 98558 push    dx ;~ 28F0:5057
cs=0x28f0;eip=0x005058; 	X(PUSH(ax));	// 98559 push    ax ;~ 28F0:5058
cs=0x28f0;eip=0x005059; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 98560 push    [bp+arg_2] ;~ 28F0:5059
cs=0x28f0;eip=0x00505c; 	R(CALLF(sub_27cb4,0));	// 98561 call    sub_27CB4 ;~ 28F0:505C
cs=0x28f0;eip=0x005061; 	X(PUSH(dx));	// 98562 push    dx ;~ 28F0:5061
cs=0x28f0;eip=0x005062; 	X(PUSH(ax));	// 98563 push    ax ;~ 28F0:5062
cs=0x28f0;eip=0x005063; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 98564 les     bx, [bp+arg_8] ;~ 28F0:5063
cs=0x28f0;eip=0x005066; 	X(PUSH(*(dw*)(raddr(es,bx+0x42))));	// 98565 push    word ptr es:[bx+42h] ;~ 28F0:5066
cs=0x28f0;eip=0x00506a; 	X(PUSH(*(dw*)(raddr(es,bx+0x40))));	// 98566 push    word ptr es:[bx+40h] ;~ 28F0:506A
cs=0x28f0;eip=0x00506e; 	R(CALLF(sub_105c2,0));	// 98567 call    sub_105C2 ;~ 28F0:506E
cs=0x28f0;eip=0x005073; 	X(PUSH(dx));	// 98568 push    dx ;~ 28F0:5073
cs=0x28f0;eip=0x005074; 	X(PUSH(ax));	// 98569 push    ax ;~ 28F0:5074
cs=0x28f0;eip=0x005075; 	R(CALLF(sub_10526,0));	// 98570 call    sub_10526 ;~ 28F0:5075
cs=0x28f0;eip=0x00507a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 98571 les     bx, [bp+arg_4] ;~ 28F0:507A
cs=0x28f0;eip=0x00507d; 	X(ADD(*(dw*)(raddr(es,bx+0x40)), ax));	// 98572 add     es:[bx+40h], ax ;~ 28F0:507D
cs=0x28f0;eip=0x005081; 	X(ADC(*(dw*)(raddr(es,bx+0x42)), dx));	// 98573 adc     es:[bx+42h], dx ;~ 28F0:5081
cs=0x28f0;eip=0x005085; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 98574 push    [bp+arg_0] ;~ 28F0:5085
cs=0x28f0;eip=0x005088; 	R(CALLF(sub_27cb4,0));	// 98575 call    sub_27CB4 ;~ 28F0:5088
cs=0x28f0;eip=0x00508d; 	X(PUSH(dx));	// 98576 push    dx ;~ 28F0:508D
cs=0x28f0;eip=0x00508e; 	X(PUSH(ax));	// 98577 push    ax ;~ 28F0:508E
cs=0x28f0;eip=0x00508f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 98578 push    [bp+arg_2] ;~ 28F0:508F
cs=0x28f0;eip=0x005092; 	R(CALLF(sub_27c9e,0));	// 98579 call    sub_27C9E ;~ 28F0:5092
cs=0x28f0;eip=0x005097; 	X(PUSH(dx));	// 98580 push    dx ;~ 28F0:5097
cs=0x28f0;eip=0x005098; 	X(PUSH(ax));	// 98581 push    ax ;~ 28F0:5098
cs=0x28f0;eip=0x005099; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 98582 les     bx, [bp+arg_8] ;~ 28F0:5099
cs=0x28f0;eip=0x00509c; 	X(PUSH(*(dw*)(raddr(es,bx+0x22))));	// 98583 push    word ptr es:[bx+22h] ;~ 28F0:509C
cs=0x28f0;eip=0x0050a0; 	X(PUSH(*(dw*)(raddr(es,bx+0x20))));	// 98584 push    word ptr es:[bx+20h] ;~ 28F0:50A0
cs=0x28f0;eip=0x0050a4; 	R(CALLF(sub_105c2,0));	// 98585 call    sub_105C2 ;~ 28F0:50A4
cs=0x28f0;eip=0x0050a9; 	X(PUSH(dx));	// 98586 push    dx ;~ 28F0:50A9
cs=0x28f0;eip=0x0050aa; 	X(PUSH(ax));	// 98587 push    ax ;~ 28F0:50AA
cs=0x28f0;eip=0x0050ab; 	R(CALLF(sub_10526,0));	// 98588 call    sub_10526 ;~ 28F0:50AB
cs=0x28f0;eip=0x0050b0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 98589 les     bx, [bp+arg_4] ;~ 28F0:50B0
cs=0x28f0;eip=0x0050b3; 	X(ADD(*(dw*)(raddr(es,bx+0x40)), ax));	// 98590 add     es:[bx+40h], ax ;~ 28F0:50B3
cs=0x28f0;eip=0x0050b7; 	X(ADC(*(dw*)(raddr(es,bx+0x42)), dx));	// 98591 adc     es:[bx+42h], dx ;~ 28F0:50B7
cs=0x28f0;eip=0x0050bb; 	T(MOV(sp, bp));	// 98592 mov     sp, bp ;~ 28F0:50BB
cs=0x28f0;eip=0x0050bd; 	X(POP(bp));	// 98593 pop     bp ;~ 28F0:50BD
cs=0x28f0;eip=0x0050be; 	R(RETN(0x0C));	// 98594 retn    0Ch ;~ 28F0:50BE
sub_3c5a1:
	// 98602 
#undef arg_0
#define arg_0 4
	// 98604 arg_0           = dword ptr  4 ;~ 28F0:50C1
cs=0x28f0;eip=0x0050c1; 	X(PUSH(bp));	// 98606 push    bp ;~ 28F0:50C1
cs=0x28f0;eip=0x0050c2; 	T(MOV(bp, sp));	// 98607 mov     bp, sp ;~ 28F0:50C2
cs=0x28f0;eip=0x0050c4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98608 les     bx, [bp+arg_0] ;~ 28F0:50C4
cs=0x28f0;eip=0x0050c7; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 98609 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:50C7
cs=0x28f0;eip=0x0050cd; 	R(JNZ(loc_3c5e2));	// 98610 jnz     short loc_3C5E2 ;~ 28F0:50CD
cs=0x28f0;eip=0x0050cf; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 8));	// 98611 cmp     word ptr es:[bx+332h], 8 ;~ 28F0:50CF
cs=0x28f0;eip=0x0050d5; 	R(JZ(loc_3c5e2));	// 98612 jz      short loc_3C5E2 ;~ 28F0:50D5
cs=0x28f0;eip=0x0050d7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 98613 mov     ax, es:[bx+120h] ;~ 28F0:50D7
cs=0x28f0;eip=0x0050dc; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 98614 mov     dx, es:[bx+122h] ;~ 28F0:50DC
cs=0x28f0;eip=0x0050e1; 	X(MOV(*(dw*)(raddr(es,bx+0x180)), ax));	// 98615 mov     es:[bx+180h], ax ;~ 28F0:50E1
cs=0x28f0;eip=0x0050e6; 	X(MOV(*(dw*)(raddr(es,bx+0x182)), dx));	// 98616 mov     es:[bx+182h], dx ;~ 28F0:50E6
cs=0x28f0;eip=0x0050eb; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x140))));	// 98617 mov     ax, es:[bx+140h] ;~ 28F0:50EB
cs=0x28f0;eip=0x0050f0; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x142))));	// 98618 mov     dx, es:[bx+142h] ;~ 28F0:50F0
cs=0x28f0;eip=0x0050f5; 	X(MOV(*(dw*)(raddr(es,bx+0x1A0)), ax));	// 98619 mov     es:[bx+1A0h], ax ;~ 28F0:50F5
cs=0x28f0;eip=0x0050fa; 	X(MOV(*(dw*)(raddr(es,bx+0x1A2)), dx));	// 98620 mov     es:[bx+1A2h], dx ;~ 28F0:50FA
cs=0x28f0;eip=0x0050ff; 	R(JMP(loc_3c6a4));	// 98621 jmp     loc_3C6A4 ;~ 28F0:50FF
loc_3c5e2:
	// 10696 
cs=0x28f0;eip=0x005102; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 98626 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:5102
cs=0x28f0;eip=0x005108; 	R(JNZ(loc_3c63c));	// 98627 jnz     short loc_3C63C ;~ 28F0:5108
cs=0x28f0;eip=0x00510a; 	T(MOV(ax, bx));	// 98628 mov     ax, bx ;~ 28F0:510A
cs=0x28f0;eip=0x00510c; 	T(MOV(dx, es));	// 98629 mov     dx, es ;~ 28F0:510C
cs=0x28f0;eip=0x00510e; 	T(ADD(ax, 0x120));	// 98630 add     ax, 120h ;~ 28F0:510E
cs=0x28f0;eip=0x005111; 	X(PUSH(dx));	// 98631 push    dx ;~ 28F0:5111
cs=0x28f0;eip=0x005112; 	X(PUSH(ax));	// 98632 push    ax ;~ 28F0:5112
cs=0x28f0;eip=0x005113; 	T(MOV(ax, bx));	// 98633 mov     ax, bx ;~ 28F0:5113
cs=0x28f0;eip=0x005115; 	T(ADD(ax, 0x180));	// 98634 add     ax, 180h ;~ 28F0:5115
cs=0x28f0;eip=0x005118; 	X(PUSH(dx));	// 98635 push    dx ;~ 28F0:5118
cs=0x28f0;eip=0x005119; 	X(PUSH(ax));	// 98636 push    ax ;~ 28F0:5119
cs=0x28f0;eip=0x00511a; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C0))));	// 98637 mov     ax, es:[bx+0C0h] ;~ 28F0:511A
cs=0x28f0;eip=0x00511f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C2))));	// 98638 mov     dx, es:[bx+0C2h] ;~ 28F0:511F
cs=0x28f0;eip=0x005124; 	T(MOV(cl, 5));	// 98639 mov     cl, 5 ;~ 28F0:5124
cs=0x28f0;eip=0x005126; 	R(CALLF(sub_10240,0));	// 98640 call    sub_10240 ;~ 28F0:5126
cs=0x28f0;eip=0x00512b; 	X(PUSH(ax));	// 98641 push    ax ;~ 28F0:512B
cs=0x28f0;eip=0x00512c; 	R(CALLF(sub_24cf8,0));	// 98642 call    sub_24CF8 ;~ 28F0:512C
cs=0x28f0;eip=0x005131; 	X(PUSH(ax));	// 98643 push    ax ;~ 28F0:5131
cs=0x28f0;eip=0x005132; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98644 les     bx, [bp+arg_0] ;~ 28F0:5132
cs=0x28f0;eip=0x005135; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 98645 mov     ax, es:[bx+0E0h] ;~ 28F0:5135
cs=0x28f0;eip=0x00513a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 98646 mov     dx, es:[bx+0E2h] ;~ 28F0:513A
cs=0x28f0;eip=0x00513f; 	T(MOV(cl, 5));	// 98647 mov     cl, 5 ;~ 28F0:513F
cs=0x28f0;eip=0x005141; 	R(CALLF(sub_10240,0));	// 98648 call    sub_10240 ;~ 28F0:5141
cs=0x28f0;eip=0x005146; 	X(PUSH(ax));	// 98649 push    ax ;~ 28F0:5146
cs=0x28f0;eip=0x005147; 	R(CALLF(sub_24cf8,0));	// 98650 call    sub_24CF8 ;~ 28F0:5147
cs=0x28f0;eip=0x00514c; 	X(PUSH(ax));	// 98651 push    ax ;~ 28F0:514C
cs=0x28f0;eip=0x00514d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98652 les     bx, [bp+arg_0] ;~ 28F0:514D
cs=0x28f0;eip=0x005150; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x100))));	// 98653 mov     ax, es:[bx+100h] ;~ 28F0:5150
cs=0x28f0;eip=0x005155; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x102))));	// 98654 mov     dx, es:[bx+102h] ;~ 28F0:5155
cs=0x28f0;eip=0x00515a; 	R(JMP(loc_3c693));	// 98655 jmp     short loc_3C693 ;~ 28F0:515A
loc_3c63c:
	// 10697 
cs=0x28f0;eip=0x00515c; 	T(MOV(ax, bx));	// 98659 mov     ax, bx ;~ 28F0:515C
cs=0x28f0;eip=0x00515e; 	T(MOV(dx, es));	// 98660 mov     dx, es ;~ 28F0:515E
cs=0x28f0;eip=0x005160; 	T(ADD(ax, 0x120));	// 98661 add     ax, 120h ;~ 28F0:5160
cs=0x28f0;eip=0x005163; 	X(PUSH(dx));	// 98662 push    dx ;~ 28F0:5163
cs=0x28f0;eip=0x005164; 	X(PUSH(ax));	// 98663 push    ax ;~ 28F0:5164
cs=0x28f0;eip=0x005165; 	T(MOV(ax, bx));	// 98664 mov     ax, bx ;~ 28F0:5165
cs=0x28f0;eip=0x005167; 	T(ADD(ax, 0x180));	// 98665 add     ax, 180h ;~ 28F0:5167
cs=0x28f0;eip=0x00516a; 	X(PUSH(dx));	// 98666 push    dx ;~ 28F0:516A
cs=0x28f0;eip=0x00516b; 	X(PUSH(ax));	// 98667 push    ax ;~ 28F0:516B
cs=0x28f0;eip=0x00516c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C0))));	// 98668 mov     ax, es:[bx+0C0h] ;~ 28F0:516C
cs=0x28f0;eip=0x005171; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C2))));	// 98669 mov     dx, es:[bx+0C2h] ;~ 28F0:5171
cs=0x28f0;eip=0x005176; 	T(MOV(cl, 5));	// 98670 mov     cl, 5 ;~ 28F0:5176
cs=0x28f0;eip=0x005178; 	R(CALLF(sub_10240,0));	// 98671 call    sub_10240 ;~ 28F0:5178
cs=0x28f0;eip=0x00517d; 	X(PUSH(ax));	// 98672 push    ax ;~ 28F0:517D
cs=0x28f0;eip=0x00517e; 	R(CALLF(sub_24cf8,0));	// 98673 call    sub_24CF8 ;~ 28F0:517E
cs=0x28f0;eip=0x005183; 	X(PUSH(ax));	// 98674 push    ax ;~ 28F0:5183
cs=0x28f0;eip=0x005184; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98675 les     bx, [bp+arg_0] ;~ 28F0:5184
cs=0x28f0;eip=0x005187; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 98676 mov     ax, es:[bx+0E0h] ;~ 28F0:5187
cs=0x28f0;eip=0x00518c; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 98677 mov     dx, es:[bx+0E2h] ;~ 28F0:518C
cs=0x28f0;eip=0x005191; 	T(MOV(cl, 5));	// 98678 mov     cl, 5 ;~ 28F0:5191
cs=0x28f0;eip=0x005193; 	R(CALLF(sub_10240,0));	// 98679 call    sub_10240 ;~ 28F0:5193
cs=0x28f0;eip=0x005198; 	X(PUSH(ax));	// 98680 push    ax ;~ 28F0:5198
cs=0x28f0;eip=0x005199; 	R(CALLF(sub_24cf8,0));	// 98681 call    sub_24CF8 ;~ 28F0:5199
cs=0x28f0;eip=0x00519e; 	X(PUSH(ax));	// 98682 push    ax ;~ 28F0:519E
cs=0x28f0;eip=0x00519f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98683 les     bx, [bp+arg_0] ;~ 28F0:519F
cs=0x28f0;eip=0x0051a2; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x100))));	// 98684 mov     ax, es:[bx+100h] ;~ 28F0:51A2
cs=0x28f0;eip=0x0051a7; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x102))));	// 98685 mov     dx, es:[bx+102h] ;~ 28F0:51A7
cs=0x28f0;eip=0x0051ac; 	T(NEG(ax));	// 98686 neg     ax ;~ 28F0:51AC
cs=0x28f0;eip=0x0051ae; 	T(ADC(dx, 0));	// 98687 adc     dx, 0 ;~ 28F0:51AE
cs=0x28f0;eip=0x0051b1; 	T(NEG(dx));	// 98688 neg     dx ;~ 28F0:51B1
loc_3c693:
	// 10698 
cs=0x28f0;eip=0x0051b3; 	T(MOV(cl, 5));	// 98691 mov     cl, 5 ;~ 28F0:51B3
cs=0x28f0;eip=0x0051b5; 	R(CALLF(sub_10240,0));	// 98692 call    sub_10240 ;~ 28F0:51B5
cs=0x28f0;eip=0x0051ba; 	X(PUSH(ax));	// 98693 push    ax ;~ 28F0:51BA
cs=0x28f0;eip=0x0051bb; 	R(CALLF(sub_24cf8,0));	// 98694 call    sub_24CF8 ;~ 28F0:51BB
cs=0x28f0;eip=0x0051c0; 	X(PUSH(ax));	// 98695 push    ax ;~ 28F0:51C0
cs=0x28f0;eip=0x0051c1; 	R(CALL(sub_3c31a,0));	// 98696 call    sub_3C31A ;~ 28F0:51C1
loc_3c6a4:
	// 10699 
cs=0x28f0;eip=0x0051c4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98699 les     bx, [bp+arg_0] ;~ 28F0:51C4
cs=0x28f0;eip=0x0051c7; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 98700 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:51C7
cs=0x28f0;eip=0x0051cd; 	R(JNZ(loc_3c6d9));	// 98701 jnz     short loc_3C6D9 ;~ 28F0:51CD
cs=0x28f0;eip=0x0051cf; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 98702 mov     ax, es:[bx] ;~ 28F0:51CF
cs=0x28f0;eip=0x0051d2; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 98703 mov     dx, es:[bx+2] ;~ 28F0:51D2
cs=0x28f0;eip=0x0051d6; 	X(MOV(*(dw*)(raddr(es,bx+0x60)), ax));	// 98704 mov     es:[bx+60h], ax ;~ 28F0:51D6
cs=0x28f0;eip=0x0051da; 	X(MOV(*(dw*)(raddr(es,bx+0x62)), dx));	// 98705 mov     es:[bx+62h], dx ;~ 28F0:51DA
cs=0x28f0;eip=0x0051de; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20))));	// 98706 mov     ax, es:[bx+20h] ;~ 28F0:51DE
cs=0x28f0;eip=0x0051e2; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x22))));	// 98707 mov     dx, es:[bx+22h] ;~ 28F0:51E2
cs=0x28f0;eip=0x0051e6; 	T(NEG(ax));	// 98708 neg     ax ;~ 28F0:51E6
cs=0x28f0;eip=0x0051e8; 	T(ADC(dx, 0));	// 98709 adc     dx, 0 ;~ 28F0:51E8
cs=0x28f0;eip=0x0051eb; 	T(NEG(dx));	// 98710 neg     dx ;~ 28F0:51EB
cs=0x28f0;eip=0x0051ed; 	X(MOV(*(dw*)(raddr(es,bx+0x80)), ax));	// 98711 mov     es:[bx+80h], ax ;~ 28F0:51ED
cs=0x28f0;eip=0x0051f2; 	X(MOV(*(dw*)(raddr(es,bx+0x82)), dx));	// 98712 mov     es:[bx+82h], dx ;~ 28F0:51F2
cs=0x28f0;eip=0x0051f7; 	R(JMP(loc_3c71a));	// 98713 jmp     short loc_3C71A ;~ 28F0:51F7
loc_3c6d9:
	// 10700 
cs=0x28f0;eip=0x0051f9; 	X(PUSH(es));	// 98717 push    es ;~ 28F0:51F9
cs=0x28f0;eip=0x0051fa; 	X(PUSH(bx));	// 98718 push    bx ;~ 28F0:51FA
cs=0x28f0;eip=0x0051fb; 	T(MOV(ax, bx));	// 98719 mov     ax, bx ;~ 28F0:51FB
cs=0x28f0;eip=0x0051fd; 	T(MOV(dx, es));	// 98720 mov     dx, es ;~ 28F0:51FD
cs=0x28f0;eip=0x0051ff; 	T(ADD(ax, 0x60));	// 98721 add     ax, 60h ; '`' ;~ 28F0:51FF
cs=0x28f0;eip=0x005202; 	X(PUSH(dx));	// 98722 push    dx ;~ 28F0:5202
cs=0x28f0;eip=0x005203; 	X(PUSH(ax));	// 98723 push    ax ;~ 28F0:5203
cs=0x28f0;eip=0x005204; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C0))));	// 98724 mov     ax, es:[bx+0C0h] ;~ 28F0:5204
cs=0x28f0;eip=0x005209; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C2))));	// 98725 mov     dx, es:[bx+0C2h] ;~ 28F0:5209
cs=0x28f0;eip=0x00520e; 	T(MOV(cl, 5));	// 98726 mov     cl, 5 ;~ 28F0:520E
cs=0x28f0;eip=0x005210; 	R(CALLF(sub_10240,0));	// 98727 call    sub_10240 ;~ 28F0:5210
cs=0x28f0;eip=0x005215; 	X(PUSH(ax));	// 98728 push    ax ;~ 28F0:5215
cs=0x28f0;eip=0x005216; 	R(CALLF(sub_24cf8,0));	// 98729 call    sub_24CF8 ;~ 28F0:5216
cs=0x28f0;eip=0x00521b; 	X(PUSH(ax));	// 98730 push    ax ;~ 28F0:521B
cs=0x28f0;eip=0x00521c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98731 les     bx, [bp+arg_0] ;~ 28F0:521C
cs=0x28f0;eip=0x00521f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 98732 mov     ax, es:[bx+0E0h] ;~ 28F0:521F
cs=0x28f0;eip=0x005224; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 98733 mov     dx, es:[bx+0E2h] ;~ 28F0:5224
cs=0x28f0;eip=0x005229; 	T(MOV(cl, 5));	// 98734 mov     cl, 5 ;~ 28F0:5229
cs=0x28f0;eip=0x00522b; 	R(CALLF(sub_10240,0));	// 98735 call    sub_10240 ;~ 28F0:522B
cs=0x28f0;eip=0x005230; 	X(PUSH(ax));	// 98736 push    ax ;~ 28F0:5230
cs=0x28f0;eip=0x005231; 	R(CALLF(sub_24cf8,0));	// 98737 call    sub_24CF8 ;~ 28F0:5231
cs=0x28f0;eip=0x005236; 	X(PUSH(ax));	// 98738 push    ax ;~ 28F0:5236
cs=0x28f0;eip=0x005237; 	R(CALL(sub_3c3de,0));	// 98739 call    sub_3C3DE ;~ 28F0:5237
loc_3c71a:
	// 10701 
cs=0x28f0;eip=0x00523a; 	X(POP(bp));	// 98742 pop     bp ;~ 28F0:523A
cs=0x28f0;eip=0x00523b; 	R(RETN(4));	// 98743 retn    4 ;~ 28F0:523B
sub_3c71e:
	// 98751 
#undef var_4
#define var_4 -4
	// 98753 var_4           = dword ptr -4 ;~ 28F0:523E
#undef arg_0
#define arg_0 4
	// 98754 arg_0           = dword ptr  4 ;~ 28F0:523E
cs=0x28f0;eip=0x00523e; 	X(PUSH(bp));	// 98756 push    bp ;~ 28F0:523E
cs=0x28f0;eip=0x00523f; 	T(MOV(bp, sp));	// 98757 mov     bp, sp ;~ 28F0:523F
cs=0x28f0;eip=0x005241; 	T(SUB(sp, 4));	// 98758 sub     sp, 4 ;~ 28F0:5241
cs=0x28f0;eip=0x005244; 	T(MOV(ax, 0x100));	// 98759 mov     ax, 100h ;~ 28F0:5244
cs=0x28f0;eip=0x005247; 	T(CWD);	// 98760 cwd ;~ 28F0:5247
cs=0x28f0;eip=0x005248; 	X(PUSH(dx));	// 98761 push    dx ;~ 28F0:5248
cs=0x28f0;eip=0x005249; 	X(PUSH(ax));	// 98762 push    ax ;~ 28F0:5249
cs=0x28f0;eip=0x00524a; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 98763 mov     ax, word ptr unk_57111 ;~ 28F0:524A
cs=0x28f0;eip=0x00524d; 	T(CWD);	// 98764 cwd ;~ 28F0:524D
cs=0x28f0;eip=0x00524e; 	X(PUSH(dx));	// 98765 push    dx ;~ 28F0:524E
cs=0x28f0;eip=0x00524f; 	X(PUSH(ax));	// 98766 push    ax ;~ 28F0:524F
cs=0x28f0;eip=0x005250; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98767 les     bx, [bp+arg_0] ;~ 28F0:5250
cs=0x28f0;eip=0x005253; 	X(PUSH(*(dw*)(raddr(es,bx+0x182))));	// 98768 push    word ptr es:[bx+182h] ;~ 28F0:5253
cs=0x28f0;eip=0x005258; 	X(PUSH(*(dw*)(raddr(es,bx+0x180))));	// 98769 push    word ptr es:[bx+180h] ;~ 28F0:5258
cs=0x28f0;eip=0x00525d; 	R(CALLF(sub_105c2,0));	// 98770 call    sub_105C2 ;~ 28F0:525D
cs=0x28f0;eip=0x005262; 	X(PUSH(dx));	// 98771 push    dx ;~ 28F0:5262
cs=0x28f0;eip=0x005263; 	X(PUSH(ax));	// 98772 push    ax ;~ 28F0:5263
cs=0x28f0;eip=0x005264; 	R(CALLF(sub_10526,0));	// 98773 call    sub_10526 ;~ 28F0:5264
cs=0x28f0;eip=0x005269; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98774 les     bx, [bp+arg_0] ;~ 28F0:5269
cs=0x28f0;eip=0x00526c; 	X(MOV(*(dw*)(raddr(es,bx+0x1E0)), ax));	// 98775 mov     es:[bx+1E0h], ax ;~ 28F0:526C
cs=0x28f0;eip=0x005271; 	X(MOV(*(dw*)(raddr(es,bx+0x1E2)), dx));	// 98776 mov     es:[bx+1E2h], dx ;~ 28F0:5271
cs=0x28f0;eip=0x005276; 	T(MOV(ax, 0x100));	// 98777 mov     ax, 100h ;~ 28F0:5276
cs=0x28f0;eip=0x005279; 	T(CWD);	// 98778 cwd ;~ 28F0:5279
cs=0x28f0;eip=0x00527a; 	X(PUSH(dx));	// 98779 push    dx ;~ 28F0:527A
cs=0x28f0;eip=0x00527b; 	X(PUSH(ax));	// 98780 push    ax ;~ 28F0:527B
cs=0x28f0;eip=0x00527c; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 98781 mov     ax, word ptr unk_57111 ;~ 28F0:527C
cs=0x28f0;eip=0x00527f; 	T(CWD);	// 98782 cwd ;~ 28F0:527F
cs=0x28f0;eip=0x005280; 	X(PUSH(dx));	// 98783 push    dx ;~ 28F0:5280
cs=0x28f0;eip=0x005281; 	X(PUSH(ax));	// 98784 push    ax ;~ 28F0:5281
cs=0x28f0;eip=0x005282; 	X(PUSH(*(dw*)(raddr(es,bx+0x1A2))));	// 98785 push    word ptr es:[bx+1A2h] ;~ 28F0:5282
cs=0x28f0;eip=0x005287; 	X(PUSH(*(dw*)(raddr(es,bx+0x1A0))));	// 98786 push    word ptr es:[bx+1A0h] ;~ 28F0:5287
cs=0x28f0;eip=0x00528c; 	R(CALLF(sub_105c2,0));	// 98787 call    sub_105C2 ;~ 28F0:528C
cs=0x28f0;eip=0x005291; 	X(PUSH(dx));	// 98788 push    dx ;~ 28F0:5291
cs=0x28f0;eip=0x005292; 	X(PUSH(ax));	// 98789 push    ax ;~ 28F0:5292
cs=0x28f0;eip=0x005293; 	R(CALLF(sub_10526,0));	// 98790 call    sub_10526 ;~ 28F0:5293
cs=0x28f0;eip=0x005298; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98791 les     bx, [bp+arg_0] ;~ 28F0:5298
cs=0x28f0;eip=0x00529b; 	X(MOV(*(dw*)(raddr(es,bx+0x1E4)), ax));	// 98792 mov     es:[bx+1E4h], ax ;~ 28F0:529B
cs=0x28f0;eip=0x0052a0; 	X(MOV(*(dw*)(raddr(es,bx+0x1E6)), dx));	// 98793 mov     es:[bx+1E6h], dx ;~ 28F0:52A0
cs=0x28f0;eip=0x0052a5; 	T(MOV(ax, 0x100));	// 98794 mov     ax, 100h ;~ 28F0:52A5
cs=0x28f0;eip=0x0052a8; 	T(CWD);	// 98795 cwd ;~ 28F0:52A8
cs=0x28f0;eip=0x0052a9; 	X(PUSH(dx));	// 98796 push    dx ;~ 28F0:52A9
cs=0x28f0;eip=0x0052aa; 	X(PUSH(ax));	// 98797 push    ax ;~ 28F0:52AA
cs=0x28f0;eip=0x0052ab; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 98798 mov     ax, word ptr unk_57111 ;~ 28F0:52AB
cs=0x28f0;eip=0x0052ae; 	T(CWD);	// 98799 cwd ;~ 28F0:52AE
cs=0x28f0;eip=0x0052af; 	X(PUSH(dx));	// 98800 push    dx ;~ 28F0:52AF
cs=0x28f0;eip=0x0052b0; 	X(PUSH(ax));	// 98801 push    ax ;~ 28F0:52B0
cs=0x28f0;eip=0x0052b1; 	X(PUSH(*(dw*)(raddr(es,bx+0x1C2))));	// 98802 push    word ptr es:[bx+1C2h] ;~ 28F0:52B1
cs=0x28f0;eip=0x0052b6; 	X(PUSH(*(dw*)(raddr(es,bx+0x1C0))));	// 98803 push    word ptr es:[bx+1C0h] ;~ 28F0:52B6
cs=0x28f0;eip=0x0052bb; 	R(CALLF(sub_105c2,0));	// 98804 call    sub_105C2 ;~ 28F0:52BB
cs=0x28f0;eip=0x0052c0; 	X(PUSH(dx));	// 98805 push    dx ;~ 28F0:52C0
cs=0x28f0;eip=0x0052c1; 	X(PUSH(ax));	// 98806 push    ax ;~ 28F0:52C1
cs=0x28f0;eip=0x0052c2; 	R(CALLF(sub_10526,0));	// 98807 call    sub_10526 ;~ 28F0:52C2
cs=0x28f0;eip=0x0052c7; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98808 les     bx, [bp+arg_0] ;~ 28F0:52C7
cs=0x28f0;eip=0x0052ca; 	X(MOV(*(dw*)(raddr(es,bx+0x1E8)), ax));	// 98809 mov     es:[bx+1E8h], ax ;~ 28F0:52CA
cs=0x28f0;eip=0x0052cf; 	X(MOV(*(dw*)(raddr(es,bx+0x1EA)), dx));	// 98810 mov     es:[bx+1EAh], dx ;~ 28F0:52CF
cs=0x28f0;eip=0x0052d4; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 98811 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:52D4
cs=0x28f0;eip=0x0052da; 	R(JNZ(loc_3c7e5));	// 98812 jnz     short loc_3C7E5 ;~ 28F0:52DA
cs=0x28f0;eip=0x0052dc; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x60))));	// 98813 mov     ax, es:[bx+60h] ;~ 28F0:52DC
cs=0x28f0;eip=0x0052e0; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x62))));	// 98814 mov     dx, es:[bx+62h] ;~ 28F0:52E0
cs=0x28f0;eip=0x0052e4; 	X(MOV(*(dw*)(raddr(es,bx+0x0C0)), ax));	// 98815 mov     es:[bx+0C0h], ax ;~ 28F0:52E4
cs=0x28f0;eip=0x0052e9; 	X(MOV(*(dw*)(raddr(es,bx+0x0C2)), dx));	// 98816 mov     es:[bx+0C2h], dx ;~ 28F0:52E9
cs=0x28f0;eip=0x0052ee; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x80))));	// 98817 mov     ax, es:[bx+80h] ;~ 28F0:52EE
cs=0x28f0;eip=0x0052f3; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x82))));	// 98818 mov     dx, es:[bx+82h] ;~ 28F0:52F3
cs=0x28f0;eip=0x0052f8; 	X(MOV(*(dw*)(raddr(es,bx+0x0E0)), ax));	// 98819 mov     es:[bx+0E0h], ax ;~ 28F0:52F8
cs=0x28f0;eip=0x0052fd; 	X(MOV(*(dw*)(raddr(es,bx+0x0E2)), dx));	// 98820 mov     es:[bx+0E2h], dx ;~ 28F0:52FD
cs=0x28f0;eip=0x005302; 	R(JMP(loc_3c8cf));	// 98821 jmp     loc_3C8CF ;~ 28F0:5302
loc_3c7e5:
	// 10702 
cs=0x28f0;eip=0x005305; 	T(MOV(ax, 0x100));	// 98825 mov     ax, 100h ;~ 28F0:5305
cs=0x28f0;eip=0x005308; 	T(CWD);	// 98826 cwd ;~ 28F0:5308
cs=0x28f0;eip=0x005309; 	X(PUSH(dx));	// 98827 push    dx ;~ 28F0:5309
cs=0x28f0;eip=0x00530a; 	X(PUSH(ax));	// 98828 push    ax ;~ 28F0:530A
cs=0x28f0;eip=0x00530b; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 98829 mov     ax, word ptr unk_57111 ;~ 28F0:530B
cs=0x28f0;eip=0x00530e; 	T(CWD);	// 98830 cwd ;~ 28F0:530E
cs=0x28f0;eip=0x00530f; 	X(PUSH(dx));	// 98831 push    dx ;~ 28F0:530F
cs=0x28f0;eip=0x005310; 	X(PUSH(ax));	// 98832 push    ax ;~ 28F0:5310
cs=0x28f0;eip=0x005311; 	X(PUSH(*(dw*)(raddr(es,bx+0x62))));	// 98833 push    word ptr es:[bx+62h] ;~ 28F0:5311
cs=0x28f0;eip=0x005315; 	X(PUSH(*(dw*)(raddr(es,bx+0x60))));	// 98834 push    word ptr es:[bx+60h] ;~ 28F0:5315
cs=0x28f0;eip=0x005319; 	R(CALLF(sub_105c2,0));	// 98835 call    sub_105C2 ;~ 28F0:5319
cs=0x28f0;eip=0x00531e; 	X(PUSH(dx));	// 98836 push    dx ;~ 28F0:531E
cs=0x28f0;eip=0x00531f; 	X(PUSH(ax));	// 98837 push    ax ;~ 28F0:531F
cs=0x28f0;eip=0x005320; 	R(CALLF(sub_10526,0));	// 98838 call    sub_10526 ;~ 28F0:5320
cs=0x28f0;eip=0x005325; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98839 les     bx, [bp+arg_0] ;~ 28F0:5325
cs=0x28f0;eip=0x005328; 	X(ADD(*(dw*)(raddr(es,bx+0x0C0)), ax));	// 98840 add     es:[bx+0C0h], ax ;~ 28F0:5328
cs=0x28f0;eip=0x00532d; 	X(ADC(*(dw*)(raddr(es,bx+0x0C2)), dx));	// 98841 adc     es:[bx+0C2h], dx ;~ 28F0:532D
cs=0x28f0;eip=0x005332; 	T(MOV(ax, bx));	// 98842 mov     ax, bx ;~ 28F0:5332
cs=0x28f0;eip=0x005334; 	T(MOV(dx, es));	// 98843 mov     dx, es ;~ 28F0:5334
cs=0x28f0;eip=0x005336; 	T(ADD(ax, 0x0C0));	// 98844 add     ax, 0C0h ; 'À' ;~ 28F0:5336
cs=0x28f0;eip=0x005339; 	X(PUSH(dx));	// 98845 push    dx ;~ 28F0:5339
cs=0x28f0;eip=0x00533a; 	X(PUSH(ax));	// 98846 push    ax ;~ 28F0:533A
cs=0x28f0;eip=0x00533b; 	R(CALL(sub_3c2b6,0));	// 98847 call    sub_3C2B6 ;~ 28F0:533B
cs=0x28f0;eip=0x00533e; 	T(MOV(ax, 0x100));	// 98848 mov     ax, 100h ;~ 28F0:533E
cs=0x28f0;eip=0x005341; 	T(CWD);	// 98849 cwd ;~ 28F0:5341
cs=0x28f0;eip=0x005342; 	X(PUSH(dx));	// 98850 push    dx ;~ 28F0:5342
cs=0x28f0;eip=0x005343; 	X(PUSH(ax));	// 98851 push    ax ;~ 28F0:5343
cs=0x28f0;eip=0x005344; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 98852 mov     ax, word ptr unk_57111 ;~ 28F0:5344
cs=0x28f0;eip=0x005347; 	T(CWD);	// 98853 cwd ;~ 28F0:5347
cs=0x28f0;eip=0x005348; 	X(PUSH(dx));	// 98854 push    dx ;~ 28F0:5348
cs=0x28f0;eip=0x005349; 	X(PUSH(ax));	// 98855 push    ax ;~ 28F0:5349
cs=0x28f0;eip=0x00534a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98856 les     bx, [bp+arg_0] ;~ 28F0:534A
cs=0x28f0;eip=0x00534d; 	X(PUSH(*(dw*)(raddr(es,bx+0x82))));	// 98857 push    word ptr es:[bx+82h] ;~ 28F0:534D
cs=0x28f0;eip=0x005352; 	X(PUSH(*(dw*)(raddr(es,bx+0x80))));	// 98858 push    word ptr es:[bx+80h] ;~ 28F0:5352
cs=0x28f0;eip=0x005357; 	R(CALLF(sub_105c2,0));	// 98859 call    sub_105C2 ;~ 28F0:5357
cs=0x28f0;eip=0x00535c; 	X(PUSH(dx));	// 98860 push    dx ;~ 28F0:535C
cs=0x28f0;eip=0x00535d; 	X(PUSH(ax));	// 98861 push    ax ;~ 28F0:535D
cs=0x28f0;eip=0x00535e; 	R(CALLF(sub_10526,0));	// 98862 call    sub_10526 ;~ 28F0:535E
cs=0x28f0;eip=0x005363; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98863 les     bx, [bp+arg_0] ;~ 28F0:5363
cs=0x28f0;eip=0x005366; 	X(ADD(*(dw*)(raddr(es,bx+0x0E0)), ax));	// 98864 add     es:[bx+0E0h], ax ;~ 28F0:5366
cs=0x28f0;eip=0x00536b; 	X(ADC(*(dw*)(raddr(es,bx+0x0E2)), dx));	// 98865 adc     es:[bx+0E2h], dx ;~ 28F0:536B
cs=0x28f0;eip=0x005370; 	T(MOV(ax, bx));	// 98866 mov     ax, bx ;~ 28F0:5370
cs=0x28f0;eip=0x005372; 	T(MOV(dx, es));	// 98867 mov     dx, es ;~ 28F0:5372
cs=0x28f0;eip=0x005374; 	T(ADD(ax, 0x0E0));	// 98868 add     ax, 0E0h ; 'à' ;~ 28F0:5374
cs=0x28f0;eip=0x005377; 	X(PUSH(dx));	// 98869 push    dx ;~ 28F0:5377
cs=0x28f0;eip=0x005378; 	X(PUSH(ax));	// 98870 push    ax ;~ 28F0:5378
cs=0x28f0;eip=0x005379; 	R(CALL(sub_3c2b6,0));	// 98871 call    sub_3C2B6 ;~ 28F0:5379
cs=0x28f0;eip=0x00537c; 	T(OR(al, al));	// 98872 or      al, al ;~ 28F0:537C
cs=0x28f0;eip=0x00537e; 	R(JZ(loc_3c8cf));	// 98873 jz      short loc_3C8CF ;~ 28F0:537E
cs=0x28f0;eip=0x005380; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98874 les     bx, [bp+arg_0] ;~ 28F0:5380
cs=0x28f0;eip=0x005383; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 98875 mov     ax, es:[bx+0E0h] ;~ 28F0:5383
cs=0x28f0;eip=0x005388; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 98876 mov     dx, es:[bx+0E2h] ;~ 28F0:5388
cs=0x28f0;eip=0x00538d; 	T(NEG(ax));	// 98877 neg     ax ;~ 28F0:538D
cs=0x28f0;eip=0x00538f; 	T(ADC(dx, 0));	// 98878 adc     dx, 0 ;~ 28F0:538F
cs=0x28f0;eip=0x005392; 	T(NEG(dx));	// 98879 neg     dx ;~ 28F0:5392
cs=0x28f0;eip=0x005394; 	X(MOV(*(dw*)(raddr(es,bx+0x0E0)), ax));	// 98880 mov     es:[bx+0E0h], ax ;~ 28F0:5394
cs=0x28f0;eip=0x005399; 	X(MOV(*(dw*)(raddr(es,bx+0x0E2)), dx));	// 98881 mov     es:[bx+0E2h], dx ;~ 28F0:5399
cs=0x28f0;eip=0x00539e; 	T(MOV(ax, bx));	// 98882 mov     ax, bx ;~ 28F0:539E
cs=0x28f0;eip=0x0053a0; 	T(MOV(dx, es));	// 98883 mov     dx, es ;~ 28F0:53A0
cs=0x28f0;eip=0x0053a2; 	T(ADD(ax, 0x0C0));	// 98884 add     ax, 0C0h ; 'À' ;~ 28F0:53A2
cs=0x28f0;eip=0x0053a5; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 98885 mov     word ptr [bp+var_4], ax ;~ 28F0:53A5
cs=0x28f0;eip=0x0053a8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 98886 mov     word ptr [bp+var_4+2], dx ;~ 28F0:53A8
cs=0x28f0;eip=0x0053ab; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 98887 les     bx, [bp+var_4] ;~ 28F0:53AB
cs=0x28f0;eip=0x0053ae; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 98888 mov     ax, es:[bx+0Ch] ;~ 28F0:53AE
cs=0x28f0;eip=0x0053b2; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 98889 mov     dx, es:[bx+0Eh] ;~ 28F0:53B2
cs=0x28f0;eip=0x0053b6; 	T(SUB(ax, *(dw*)(raddr(es,bx))));	// 98890 sub     ax, es:[bx] ;~ 28F0:53B6
cs=0x28f0;eip=0x0053b9; 	T(SBB(dx, *(dw*)(raddr(es,bx+2))));	// 98891 sbb     dx, es:[bx+2] ;~ 28F0:53B9
cs=0x28f0;eip=0x0053bd; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 98892 mov     es:[bx], ax ;~ 28F0:53BD
cs=0x28f0;eip=0x0053c0; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 98893 mov     es:[bx+2], dx ;~ 28F0:53C0
cs=0x28f0;eip=0x0053c4; 	X(PUSH(es));	// 98894 push    es ;~ 28F0:53C4
cs=0x28f0;eip=0x0053c5; 	X(PUSH(bx));	// 98895 push    bx ;~ 28F0:53C5
cs=0x28f0;eip=0x0053c6; 	R(CALL(sub_3c2b6,0));	// 98896 call    sub_3C2B6 ;~ 28F0:53C6
cs=0x28f0;eip=0x0053c9; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 98897 mov     ax, word ptr [bp+arg_0] ;~ 28F0:53C9
cs=0x28f0;eip=0x0053cc; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 98898 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:53CC
cs=0x28f0;eip=0x0053cf; 	T(ADD(ah, 1));	// 98899 add     ah, 1 ;~ 28F0:53CF
cs=0x28f0;eip=0x0053d2; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 98900 mov     word ptr [bp+var_4], ax ;~ 28F0:53D2
cs=0x28f0;eip=0x0053d5; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 98901 mov     word ptr [bp+var_4+2], dx ;~ 28F0:53D5
cs=0x28f0;eip=0x0053d8; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 98902 les     bx, [bp+var_4] ;~ 28F0:53D8
cs=0x28f0;eip=0x0053db; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 98903 mov     ax, es:[bx+0Ch] ;~ 28F0:53DB
cs=0x28f0;eip=0x0053df; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 98904 mov     dx, es:[bx+0Eh] ;~ 28F0:53DF
cs=0x28f0;eip=0x0053e3; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 98905 add     es:[bx], ax ;~ 28F0:53E3
cs=0x28f0;eip=0x0053e6; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 98906 adc     es:[bx+2], dx ;~ 28F0:53E6
cs=0x28f0;eip=0x0053ea; 	X(PUSH(es));	// 98907 push    es ;~ 28F0:53EA
cs=0x28f0;eip=0x0053eb; 	X(PUSH(bx));	// 98908 push    bx ;~ 28F0:53EB
cs=0x28f0;eip=0x0053ec; 	R(CALL(sub_3c2b6,0));	// 98909 call    sub_3C2B6 ;~ 28F0:53EC
loc_3c8cf:
	// 10703 
cs=0x28f0;eip=0x0053ef; 	T(MOV(ax, 0x100));	// 98913 mov     ax, 100h ;~ 28F0:53EF
cs=0x28f0;eip=0x0053f2; 	T(CWD);	// 98914 cwd ;~ 28F0:53F2
cs=0x28f0;eip=0x0053f3; 	X(PUSH(dx));	// 98915 push    dx ;~ 28F0:53F3
cs=0x28f0;eip=0x0053f4; 	X(PUSH(ax));	// 98916 push    ax ;~ 28F0:53F4
cs=0x28f0;eip=0x0053f5; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 98917 mov     ax, word ptr unk_57111 ;~ 28F0:53F5
cs=0x28f0;eip=0x0053f8; 	T(CWD);	// 98918 cwd ;~ 28F0:53F8
cs=0x28f0;eip=0x0053f9; 	X(PUSH(dx));	// 98919 push    dx ;~ 28F0:53F9
cs=0x28f0;eip=0x0053fa; 	X(PUSH(ax));	// 98920 push    ax ;~ 28F0:53FA
cs=0x28f0;eip=0x0053fb; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98921 les     bx, [bp+arg_0] ;~ 28F0:53FB
cs=0x28f0;eip=0x0053fe; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A2))));	// 98922 push    word ptr es:[bx+0A2h] ;~ 28F0:53FE
cs=0x28f0;eip=0x005403; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A0))));	// 98923 push    word ptr es:[bx+0A0h] ;~ 28F0:5403
cs=0x28f0;eip=0x005408; 	R(CALLF(sub_105c2,0));	// 98924 call    sub_105C2 ;~ 28F0:5408
cs=0x28f0;eip=0x00540d; 	X(PUSH(dx));	// 98925 push    dx ;~ 28F0:540D
cs=0x28f0;eip=0x00540e; 	X(PUSH(ax));	// 98926 push    ax ;~ 28F0:540E
cs=0x28f0;eip=0x00540f; 	R(CALLF(sub_10526,0));	// 98927 call    sub_10526 ;~ 28F0:540F
cs=0x28f0;eip=0x005414; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98928 les     bx, [bp+arg_0] ;~ 28F0:5414
cs=0x28f0;eip=0x005417; 	X(ADD(*(dw*)(raddr(es,bx+0x100)), ax));	// 98929 add     es:[bx+100h], ax ;~ 28F0:5417
cs=0x28f0;eip=0x00541c; 	X(ADC(*(dw*)(raddr(es,bx+0x102)), dx));	// 98930 adc     es:[bx+102h], dx ;~ 28F0:541C
cs=0x28f0;eip=0x005421; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 98931 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:5421
cs=0x28f0;eip=0x005427; 	R(JNZ(loc_3c960));	// 98932 jnz     short loc_3C960 ;~ 28F0:5427
cs=0x28f0;eip=0x005429; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 98933 mov     ax, es:[bx+2FAh] ;~ 28F0:5429
cs=0x28f0;eip=0x00542e; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 98934 mov     dx, es:[bx+2FCh] ;~ 28F0:542E
cs=0x28f0;eip=0x005433; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 98935 add     ax, es:[bx+302h] ;~ 28F0:5433
cs=0x28f0;eip=0x005438; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 98936 adc     dx, es:[bx+304h] ;~ 28F0:5438
cs=0x28f0;eip=0x00543d; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 98937 les     bx, es:[bx+31Ch] ;~ 28F0:543D
cs=0x28f0;eip=0x005442; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 98938 cmp     dx, es:[bx+0Ch] ;~ 28F0:5442
cs=0x28f0;eip=0x005446; 	R(JG(loc_3c960));	// 98939 jg      short loc_3C960 ;~ 28F0:5446
cs=0x28f0;eip=0x005448; 	R(JL(loc_3c930));	// 98940 jl      short loc_3C930 ;~ 28F0:5448
cs=0x28f0;eip=0x00544a; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 98941 cmp     ax, es:[bx+0Ah] ;~ 28F0:544A
cs=0x28f0;eip=0x00544e; 	R(JNC(loc_3c960));	// 98942 jnb     short loc_3C960 ;~ 28F0:544E
loc_3c930:
	// 10704 
cs=0x28f0;eip=0x005450; 	T(MOV(ax, 0x100));	// 98945 mov     ax, 100h ;~ 28F0:5450
cs=0x28f0;eip=0x005453; 	T(CWD);	// 98946 cwd ;~ 28F0:5453
cs=0x28f0;eip=0x005454; 	X(PUSH(dx));	// 98947 push    dx ;~ 28F0:5454
cs=0x28f0;eip=0x005455; 	X(PUSH(ax));	// 98948 push    ax ;~ 28F0:5455
cs=0x28f0;eip=0x005456; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 98949 mov     ax, word ptr unk_57111 ;~ 28F0:5456
cs=0x28f0;eip=0x005459; 	T(CWD);	// 98950 cwd ;~ 28F0:5459
cs=0x28f0;eip=0x00545a; 	X(PUSH(dx));	// 98951 push    dx ;~ 28F0:545A
cs=0x28f0;eip=0x00545b; 	X(PUSH(ax));	// 98952 push    ax ;~ 28F0:545B
cs=0x28f0;eip=0x00545c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98953 les     bx, [bp+arg_0] ;~ 28F0:545C
cs=0x28f0;eip=0x00545f; 	X(PUSH(*(dw*)(raddr(es,bx+0x42))));	// 98954 push    word ptr es:[bx+42h] ;~ 28F0:545F
cs=0x28f0;eip=0x005463; 	X(PUSH(*(dw*)(raddr(es,bx+0x40))));	// 98955 push    word ptr es:[bx+40h] ;~ 28F0:5463
cs=0x28f0;eip=0x005467; 	R(CALLF(sub_105c2,0));	// 98956 call    sub_105C2 ;~ 28F0:5467
cs=0x28f0;eip=0x00546c; 	X(PUSH(dx));	// 98957 push    dx ;~ 28F0:546C
cs=0x28f0;eip=0x00546d; 	X(PUSH(ax));	// 98958 push    ax ;~ 28F0:546D
cs=0x28f0;eip=0x00546e; 	R(CALLF(sub_10526,0));	// 98959 call    sub_10526 ;~ 28F0:546E
cs=0x28f0;eip=0x005473; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98960 les     bx, [bp+arg_0] ;~ 28F0:5473
cs=0x28f0;eip=0x005476; 	X(ADD(*(dw*)(raddr(es,bx+0x100)), ax));	// 98961 add     es:[bx+100h], ax ;~ 28F0:5476
cs=0x28f0;eip=0x00547b; 	X(ADC(*(dw*)(raddr(es,bx+0x102)), dx));	// 98962 adc     es:[bx+102h], dx ;~ 28F0:547B
loc_3c960:
	// 10705 
cs=0x28f0;eip=0x005480; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 98966 mov     ax, word ptr [bp+arg_0] ;~ 28F0:5480
cs=0x28f0;eip=0x005483; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 98967 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:5483
cs=0x28f0;eip=0x005486; 	T(ADD(ah, 1));	// 98968 add     ah, 1 ;~ 28F0:5486
cs=0x28f0;eip=0x005489; 	X(PUSH(dx));	// 98969 push    dx ;~ 28F0:5489
cs=0x28f0;eip=0x00548a; 	X(PUSH(ax));	// 98970 push    ax ;~ 28F0:548A
cs=0x28f0;eip=0x00548b; 	R(CALL(sub_3c2b6,0));	// 98971 call    sub_3C2B6 ;~ 28F0:548B
cs=0x28f0;eip=0x00548e; 	T(MOV(sp, bp));	// 98972 mov     sp, bp ;~ 28F0:548E
cs=0x28f0;eip=0x005490; 	X(POP(bp));	// 98973 pop     bp ;~ 28F0:5490
cs=0x28f0;eip=0x005491; 	R(RETN(4));	// 98974 retn    4 ;~ 28F0:5491
sub_3c974:
	// 98982 
#undef var_a
#define var_a -0x0A
	// 98984 var_A           = dword ptr -0Ah ;~ 28F0:5494
#undef var_6
#define var_6 -6
	// 98985 var_6           = word ptr -6 ;~ 28F0:5494
#undef var_4
#define var_4 -4
	// 98986 var_4           = word ptr -4 ;~ 28F0:5494
#undef var_2
#define var_2 -2
	// 98987 var_2           = word ptr -2 ;~ 28F0:5494
#undef arg_0
#define arg_0 4
	// 98988 arg_0           = dword ptr  4 ;~ 28F0:5494
cs=0x28f0;eip=0x005494; 	X(PUSH(bp));	// 98990 push    bp ;~ 28F0:5494
cs=0x28f0;eip=0x005495; 	T(MOV(bp, sp));	// 98991 mov     bp, sp ;~ 28F0:5495
cs=0x28f0;eip=0x005497; 	T(SUB(sp, 0x0A));	// 98992 sub     sp, 0Ah ;~ 28F0:5497
cs=0x28f0;eip=0x00549a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98993 les     bx, [bp+arg_0] ;~ 28F0:549A
cs=0x28f0;eip=0x00549d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x31C))));	// 98994 mov     ax, es:[bx+31Ch] ;~ 28F0:549D
cs=0x28f0;eip=0x0054a2; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x31E))));	// 98995 mov     dx, es:[bx+31Eh] ;~ 28F0:54A2
cs=0x28f0;eip=0x0054a7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 98996 mov     word ptr [bp+var_A], ax ;~ 28F0:54A7
cs=0x28f0;eip=0x0054aa; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 98997 mov     word ptr [bp+var_A+2], dx ;~ 28F0:54AA
cs=0x28f0;eip=0x0054ad; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 98998 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:54AD
cs=0x28f0;eip=0x0054b3; 	R(JZ(loc_3c998));	// 98999 jz      short loc_3C998 ;~ 28F0:54B3
cs=0x28f0;eip=0x0054b5; 	R(JMP(loc_3ca8f));	// 99000 jmp     loc_3CA8F ;~ 28F0:54B5
loc_3c998:
	// 10706 
cs=0x28f0;eip=0x0054b8; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 8));	// 99004 cmp     word ptr es:[bx+332h], 8 ;~ 28F0:54B8
cs=0x28f0;eip=0x0054be; 	R(JNZ(loc_3c9a3));	// 99005 jnz     short loc_3C9A3 ;~ 28F0:54BE
cs=0x28f0;eip=0x0054c0; 	R(JMP(loc_3ca8f));	// 99006 jmp     loc_3CA8F ;~ 28F0:54C0
loc_3c9a3:
	// 10707 
cs=0x28f0;eip=0x0054c3; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 99010 les     bx, [bp+var_A] ;~ 28F0:54C3
cs=0x28f0;eip=0x0054c6; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 99011 mov     ax, es:[bx+12h] ;~ 28F0:54C6
cs=0x28f0;eip=0x0054ca; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 99012 mov     [bp+var_2], ax ;~ 28F0:54CA
cs=0x28f0;eip=0x0054cd; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99013 les     bx, [bp+arg_0] ;~ 28F0:54CD
cs=0x28f0;eip=0x0054d0; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1E0))));	// 99014 mov     ax, es:[bx+1E0h] ;~ 28F0:54D0
cs=0x28f0;eip=0x0054d5; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1E2))));	// 99015 mov     dx, es:[bx+1E2h] ;~ 28F0:54D5
cs=0x28f0;eip=0x0054da; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 99016 mov     [bp+var_6], ax ;~ 28F0:54DA
cs=0x28f0;eip=0x0054dd; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 99017 mov     [bp+var_4], dx ;~ 28F0:54DD
cs=0x28f0;eip=0x0054e0; 	T(OR(dx, dx));	// 99018 or      dx, dx ;~ 28F0:54E0
cs=0x28f0;eip=0x0054e2; 	R(JL(loc_3c9e3));	// 99019 jl      short loc_3C9E3 ;~ 28F0:54E2
cs=0x28f0;eip=0x0054e4; 	R(JG(loc_3c9ca));	// 99020 jg      short loc_3C9CA ;~ 28F0:54E4
cs=0x28f0;eip=0x0054e6; 	T(OR(ax, ax));	// 99021 or      ax, ax ;~ 28F0:54E6
cs=0x28f0;eip=0x0054e8; 	R(JZ(loc_3c9e3));	// 99022 jz      short loc_3C9E3 ;~ 28F0:54E8
loc_3c9ca:
	// 10708 
cs=0x28f0;eip=0x0054ea; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_a)))));	// 99025 mov     ax, word ptr [bp+var_A] ;~ 28F0:54EA
cs=0x28f0;eip=0x0054ed; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_a+2)))));	// 99026 mov     dx, word ptr [bp+var_A+2] ;~ 28F0:54ED
cs=0x28f0;eip=0x0054f0; 	T(ADD(ax, 6));	// 99027 add     ax, 6 ;~ 28F0:54F0
cs=0x28f0;eip=0x0054f3; 	X(PUSH(dx));	// 99028 push    dx ;~ 28F0:54F3
cs=0x28f0;eip=0x0054f4; 	X(PUSH(ax));	// 99029 push    ax ;~ 28F0:54F4
cs=0x28f0;eip=0x0054f5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 99030 push    [bp+var_2] ;~ 28F0:54F5
cs=0x28f0;eip=0x0054f8; 	T(SUB(ax, ax));	// 99031 sub     ax, ax ;~ 28F0:54F8
cs=0x28f0;eip=0x0054fa; 	X(PUSH(ax));	// 99032 push    ax ;~ 28F0:54FA
cs=0x28f0;eip=0x0054fb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 99033 push    [bp+var_4] ;~ 28F0:54FB
cs=0x28f0;eip=0x0054fe; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 99034 push    [bp+var_6] ;~ 28F0:54FE
cs=0x28f0;eip=0x005501; 	R(JMP(loc_3ca13));	// 99035 jmp     short loc_3CA13 ;~ 28F0:5501
loc_3c9e3:
	// 10709 
cs=0x28f0;eip=0x005503; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 99040 cmp     [bp+var_4], 0 ;~ 28F0:5503
cs=0x28f0;eip=0x005507; 	R(JGE(loc_3ca18));	// 99041 jge     short loc_3CA18 ;~ 28F0:5507
cs=0x28f0;eip=0x005509; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_a)))));	// 99042 mov     ax, word ptr [bp+var_A] ;~ 28F0:5509
cs=0x28f0;eip=0x00550c; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_a+2)))));	// 99043 mov     dx, word ptr [bp+var_A+2] ;~ 28F0:550C
cs=0x28f0;eip=0x00550f; 	T(ADD(ax, 6));	// 99044 add     ax, 6 ;~ 28F0:550F
cs=0x28f0;eip=0x005512; 	X(PUSH(dx));	// 99045 push    dx ;~ 28F0:5512
cs=0x28f0;eip=0x005513; 	X(PUSH(ax));	// 99046 push    ax ;~ 28F0:5513
cs=0x28f0;eip=0x005514; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 99047 mov     ax, [bp+var_2] ;~ 28F0:5514
cs=0x28f0;eip=0x005517; 	T(ADD(ax, 0x5A0));	// 99048 add     ax, 5A0h ;~ 28F0:5517
cs=0x28f0;eip=0x00551a; 	X(PUSH(ax));	// 99049 push    ax ;~ 28F0:551A
cs=0x28f0;eip=0x00551b; 	R(CALLF(sub_24cf8,0));	// 99050 call    sub_24CF8 ;~ 28F0:551B
cs=0x28f0;eip=0x005520; 	X(PUSH(ax));	// 99051 push    ax ;~ 28F0:5520
cs=0x28f0;eip=0x005521; 	T(SUB(ax, ax));	// 99052 sub     ax, ax ;~ 28F0:5521
cs=0x28f0;eip=0x005523; 	X(PUSH(ax));	// 99053 push    ax ;~ 28F0:5523
cs=0x28f0;eip=0x005524; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 99054 mov     ax, [bp+var_6] ;~ 28F0:5524
cs=0x28f0;eip=0x005527; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 99055 mov     dx, [bp+var_4] ;~ 28F0:5527
cs=0x28f0;eip=0x00552a; 	T(NEG(ax));	// 99056 neg     ax ;~ 28F0:552A
cs=0x28f0;eip=0x00552c; 	T(ADC(dx, 0));	// 99057 adc     dx, 0 ;~ 28F0:552C
cs=0x28f0;eip=0x00552f; 	T(NEG(dx));	// 99058 neg     dx ;~ 28F0:552F
cs=0x28f0;eip=0x005531; 	X(PUSH(dx));	// 99059 push    dx ;~ 28F0:5531
cs=0x28f0;eip=0x005532; 	X(PUSH(ax));	// 99060 push    ax ;~ 28F0:5532
loc_3ca13:
	// 10710 
cs=0x28f0;eip=0x005533; 	R(CALLF(sub_2f4ee,0));	// 99063 call    sub_2F4EE ;~ 28F0:5533
loc_3ca18:
	// 10711 
cs=0x28f0;eip=0x005538; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99066 les     bx, [bp+arg_0] ;~ 28F0:5538
cs=0x28f0;eip=0x00553b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1E4))));	// 99067 mov     ax, es:[bx+1E4h] ;~ 28F0:553B
cs=0x28f0;eip=0x005540; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1E6))));	// 99068 mov     dx, es:[bx+1E6h] ;~ 28F0:5540
cs=0x28f0;eip=0x005545; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 99069 mov     [bp+var_6], ax ;~ 28F0:5545
cs=0x28f0;eip=0x005548; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 99070 mov     [bp+var_4], dx ;~ 28F0:5548
cs=0x28f0;eip=0x00554b; 	T(OR(dx, dx));	// 99071 or      dx, dx ;~ 28F0:554B
cs=0x28f0;eip=0x00554d; 	R(JL(loc_3ca5d));	// 99072 jl      short loc_3CA5D ;~ 28F0:554D
cs=0x28f0;eip=0x00554f; 	R(JG(loc_3ca35));	// 99073 jg      short loc_3CA35 ;~ 28F0:554F
cs=0x28f0;eip=0x005551; 	T(OR(ax, ax));	// 99074 or      ax, ax ;~ 28F0:5551
cs=0x28f0;eip=0x005553; 	R(JZ(loc_3ca5d));	// 99075 jz      short loc_3CA5D ;~ 28F0:5553
loc_3ca35:
	// 10712 
cs=0x28f0;eip=0x005555; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_a)))));	// 99078 mov     ax, word ptr [bp+var_A] ;~ 28F0:5555
cs=0x28f0;eip=0x005558; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_a+2)))));	// 99079 mov     dx, word ptr [bp+var_A+2] ;~ 28F0:5558
cs=0x28f0;eip=0x00555b; 	T(ADD(ax, 6));	// 99080 add     ax, 6 ;~ 28F0:555B
cs=0x28f0;eip=0x00555e; 	X(PUSH(dx));	// 99081 push    dx ;~ 28F0:555E
cs=0x28f0;eip=0x00555f; 	X(PUSH(ax));	// 99082 push    ax ;~ 28F0:555F
cs=0x28f0;eip=0x005560; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 99083 mov     ax, [bp+var_2] ;~ 28F0:5560
cs=0x28f0;eip=0x005563; 	T(SUB(ax, 0x2D0));	// 99084 sub     ax, 2D0h ;~ 28F0:5563
cs=0x28f0;eip=0x005566; 	X(PUSH(ax));	// 99085 push    ax ;~ 28F0:5566
cs=0x28f0;eip=0x005567; 	R(CALLF(sub_24cf8,0));	// 99086 call    sub_24CF8 ;~ 28F0:5567
cs=0x28f0;eip=0x00556c; 	X(PUSH(ax));	// 99087 push    ax ;~ 28F0:556C
cs=0x28f0;eip=0x00556d; 	T(SUB(ax, ax));	// 99088 sub     ax, ax ;~ 28F0:556D
cs=0x28f0;eip=0x00556f; 	X(PUSH(ax));	// 99089 push    ax ;~ 28F0:556F
cs=0x28f0;eip=0x005570; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 99090 push    [bp+var_4] ;~ 28F0:5570
cs=0x28f0;eip=0x005573; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 99091 push    [bp+var_6] ;~ 28F0:5573
loc_3ca56:
	// 10713 
cs=0x28f0;eip=0x005576; 	R(CALLF(sub_2f4ee,0));	// 99094 call    sub_2F4EE ;~ 28F0:5576
cs=0x28f0;eip=0x00557b; 	R(JMP(loc_3cabf));	// 99095 jmp     short loc_3CABF ;~ 28F0:557B
loc_3ca5d:
	// 10714 
cs=0x28f0;eip=0x00557d; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 99100 cmp     [bp+var_4], 0 ;~ 28F0:557D
cs=0x28f0;eip=0x005581; 	R(JGE(loc_3cabf));	// 99101 jge     short loc_3CABF ;~ 28F0:5581
cs=0x28f0;eip=0x005583; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_a)))));	// 99102 mov     ax, word ptr [bp+var_A] ;~ 28F0:5583
cs=0x28f0;eip=0x005586; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_a+2)))));	// 99103 mov     dx, word ptr [bp+var_A+2] ;~ 28F0:5586
cs=0x28f0;eip=0x005589; 	T(ADD(ax, 6));	// 99104 add     ax, 6 ;~ 28F0:5589
cs=0x28f0;eip=0x00558c; 	X(PUSH(dx));	// 99105 push    dx ;~ 28F0:558C
cs=0x28f0;eip=0x00558d; 	X(PUSH(ax));	// 99106 push    ax ;~ 28F0:558D
cs=0x28f0;eip=0x00558e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 99107 mov     ax, [bp+var_2] ;~ 28F0:558E
cs=0x28f0;eip=0x005591; 	T(SUB(ax, 0x870));	// 99108 sub     ax, 870h ;~ 28F0:5591
cs=0x28f0;eip=0x005594; 	X(PUSH(ax));	// 99109 push    ax ;~ 28F0:5594
cs=0x28f0;eip=0x005595; 	R(CALLF(sub_24cf8,0));	// 99110 call    sub_24CF8 ;~ 28F0:5595
cs=0x28f0;eip=0x00559a; 	X(PUSH(ax));	// 99111 push    ax ;~ 28F0:559A
cs=0x28f0;eip=0x00559b; 	T(SUB(ax, ax));	// 99112 sub     ax, ax ;~ 28F0:559B
cs=0x28f0;eip=0x00559d; 	X(PUSH(ax));	// 99113 push    ax ;~ 28F0:559D
cs=0x28f0;eip=0x00559e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 99114 mov     ax, [bp+var_6] ;~ 28F0:559E
cs=0x28f0;eip=0x0055a1; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 99115 mov     dx, [bp+var_4] ;~ 28F0:55A1
cs=0x28f0;eip=0x0055a4; 	T(NEG(ax));	// 99116 neg     ax ;~ 28F0:55A4
cs=0x28f0;eip=0x0055a6; 	T(ADC(dx, 0));	// 99117 adc     dx, 0 ;~ 28F0:55A6
cs=0x28f0;eip=0x0055a9; 	T(NEG(dx));	// 99118 neg     dx ;~ 28F0:55A9
cs=0x28f0;eip=0x0055ab; 	X(PUSH(dx));	// 99119 push    dx ;~ 28F0:55AB
cs=0x28f0;eip=0x0055ac; 	X(PUSH(ax));	// 99120 push    ax ;~ 28F0:55AC
cs=0x28f0;eip=0x0055ad; 	R(JMP(loc_3ca56));	// 99121 jmp     short loc_3CA56 ;~ 28F0:55AD
loc_3ca8f:
	// 10715 
cs=0x28f0;eip=0x0055af; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99126 les     bx, [bp+arg_0] ;~ 28F0:55AF
cs=0x28f0;eip=0x0055b2; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1E0))));	// 99127 mov     ax, es:[bx+1E0h] ;~ 28F0:55B2
cs=0x28f0;eip=0x0055b7; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1E2))));	// 99128 mov     dx, es:[bx+1E2h] ;~ 28F0:55B7
cs=0x28f0;eip=0x0055bc; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 99129 les     bx, [bp+var_A] ;~ 28F0:55BC
cs=0x28f0;eip=0x0055bf; 	X(ADD(*(dw*)(raddr(es,bx+0x0E)), ax));	// 99130 add     es:[bx+0Eh], ax ;~ 28F0:55BF
cs=0x28f0;eip=0x0055c3; 	X(ADC(*(dw*)(raddr(es,bx+0x10)), dx));	// 99131 adc     es:[bx+10h], dx ;~ 28F0:55C3
cs=0x28f0;eip=0x0055c7; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99132 les     bx, [bp+arg_0] ;~ 28F0:55C7
cs=0x28f0;eip=0x0055ca; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1E4))));	// 99133 mov     ax, es:[bx+1E4h] ;~ 28F0:55CA
cs=0x28f0;eip=0x0055cf; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1E6))));	// 99134 mov     dx, es:[bx+1E6h] ;~ 28F0:55CF
cs=0x28f0;eip=0x0055d4; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 99135 les     bx, [bp+var_A] ;~ 28F0:55D4
cs=0x28f0;eip=0x0055d7; 	X(ADD(*(dw*)(raddr(es,bx+6)), ax));	// 99136 add     es:[bx+6], ax ;~ 28F0:55D7
cs=0x28f0;eip=0x0055db; 	X(ADC(*(dw*)(raddr(es,bx+8)), dx));	// 99137 adc     es:[bx+8], dx ;~ 28F0:55DB
loc_3cabf:
	// 10716 
cs=0x28f0;eip=0x0055df; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99141 les     bx, [bp+arg_0] ;~ 28F0:55DF
cs=0x28f0;eip=0x0055e2; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1E8))));	// 99142 mov     ax, es:[bx+1E8h] ;~ 28F0:55E2
cs=0x28f0;eip=0x0055e7; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1EA))));	// 99143 mov     dx, es:[bx+1EAh] ;~ 28F0:55E7
cs=0x28f0;eip=0x0055ec; 	T(NEG(ax));	// 99144 neg     ax ;~ 28F0:55EC
cs=0x28f0;eip=0x0055ee; 	T(ADC(dx, 0));	// 99145 adc     dx, 0 ;~ 28F0:55EE
cs=0x28f0;eip=0x0055f1; 	T(NEG(dx));	// 99146 neg     dx ;~ 28F0:55F1
cs=0x28f0;eip=0x0055f3; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 99147 les     bx, [bp+var_A] ;~ 28F0:55F3
cs=0x28f0;eip=0x0055f6; 	X(ADD(*(dw*)(raddr(es,bx+0x0A)), ax));	// 99148 add     es:[bx+0Ah], ax ;~ 28F0:55F6
cs=0x28f0;eip=0x0055fa; 	X(ADC(*(dw*)(raddr(es,bx+0x0C)), dx));	// 99149 adc     es:[bx+0Ch], dx ;~ 28F0:55FA
cs=0x28f0;eip=0x0055fe; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99150 les     bx, [bp+arg_0] ;~ 28F0:55FE
cs=0x28f0;eip=0x005601; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 99151 mov     ax, es:[bx+2FAh] ;~ 28F0:5601
cs=0x28f0;eip=0x005606; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 99152 mov     dx, es:[bx+2FCh] ;~ 28F0:5606
cs=0x28f0;eip=0x00560b; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 99153 add     ax, es:[bx+302h] ;~ 28F0:560B
cs=0x28f0;eip=0x005610; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 99154 adc     dx, es:[bx+304h] ;~ 28F0:5610
cs=0x28f0;eip=0x005615; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 99155 les     bx, [bp+var_A] ;~ 28F0:5615
cs=0x28f0;eip=0x005618; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 99156 cmp     dx, es:[bx+0Ch] ;~ 28F0:5618
cs=0x28f0;eip=0x00561c; 	R(JG(loc_3cb0e));	// 99157 jg      short loc_3CB0E ;~ 28F0:561C
cs=0x28f0;eip=0x00561e; 	R(JL(loc_3cb06));	// 99158 jl      short loc_3CB06 ;~ 28F0:561E
cs=0x28f0;eip=0x005620; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 99159 cmp     ax, es:[bx+0Ah] ;~ 28F0:5620
cs=0x28f0;eip=0x005624; 	R(JNC(loc_3cb0e));	// 99160 jnb     short loc_3CB0E ;~ 28F0:5624
loc_3cb06:
	// 10717 
cs=0x28f0;eip=0x005626; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 99163 mov     dx, es:[bx+0Ch] ;~ 28F0:5626
cs=0x28f0;eip=0x00562a; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 99164 mov     ax, es:[bx+0Ah] ;~ 28F0:562A
loc_3cb0e:
	// 10718 
cs=0x28f0;eip=0x00562e; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 99168 mov     es:[bx+0Ah], ax ;~ 28F0:562E
cs=0x28f0;eip=0x005632; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 99169 mov     es:[bx+0Ch], dx ;~ 28F0:5632
cs=0x28f0;eip=0x005636; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 99170 mov     ax, es:[bx+6] ;~ 28F0:5636
cs=0x28f0;eip=0x00563a; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 99171 mov     dx, es:[bx+8] ;~ 28F0:563A
cs=0x28f0;eip=0x00563e; 	T(CMP(dx, *(dw*)((&unk_57000))));	// 99172 cmp     dx, word ptr unk_57000 ;~ 28F0:563E
cs=0x28f0;eip=0x005642; 	R(JG(loc_3cb33));	// 99173 jg      short loc_3CB33 ;~ 28F0:5642
cs=0x28f0;eip=0x005644; 	R(JL(loc_3cb2c));	// 99174 jl      short loc_3CB2C ;~ 28F0:5644
cs=0x28f0;eip=0x005646; 	T(CMP(ax, *(dw*)((&unk_56ffe))));	// 99175 cmp     ax, word ptr unk_56FFE ;~ 28F0:5646
cs=0x28f0;eip=0x00564a; 	R(JNC(loc_3cb33));	// 99176 jnb     short loc_3CB33 ;~ 28F0:564A
loc_3cb2c:
	// 10719 
cs=0x28f0;eip=0x00564c; 	T(MOV(dx, *(dw*)((&unk_57000))));	// 99179 mov     dx, word ptr unk_57000 ;~ 28F0:564C
cs=0x28f0;eip=0x005650; 	T(MOV(ax, *(dw*)((&unk_56ffe))));	// 99180 mov     ax, word ptr unk_56FFE ;~ 28F0:5650
loc_3cb33:
	// 10720 
cs=0x28f0;eip=0x005653; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 99184 mov     es:[bx+6], ax ;~ 28F0:5653
cs=0x28f0;eip=0x005657; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 99185 mov     es:[bx+8], dx ;~ 28F0:5657
cs=0x28f0;eip=0x00565b; 	T(CMP(dx, *(dw*)((&unk_57004))));	// 99186 cmp     dx, word ptr unk_57004 ;~ 28F0:565B
cs=0x28f0;eip=0x00565f; 	R(JL(loc_3cb50));	// 99187 jl      short loc_3CB50 ;~ 28F0:565F
cs=0x28f0;eip=0x005661; 	R(JG(loc_3cb49));	// 99188 jg      short loc_3CB49 ;~ 28F0:5661
cs=0x28f0;eip=0x005663; 	T(CMP(ax, *(dw*)((&unk_57002))));	// 99189 cmp     ax, word ptr unk_57002 ;~ 28F0:5663
cs=0x28f0;eip=0x005667; 	R(JBE(loc_3cb50));	// 99190 jbe     short loc_3CB50 ;~ 28F0:5667
loc_3cb49:
	// 10721 
cs=0x28f0;eip=0x005669; 	T(MOV(dx, *(dw*)((&unk_57004))));	// 99193 mov     dx, word ptr unk_57004 ;~ 28F0:5669
cs=0x28f0;eip=0x00566d; 	T(MOV(ax, *(dw*)((&unk_57002))));	// 99194 mov     ax, word ptr unk_57002 ;~ 28F0:566D
loc_3cb50:
	// 10722 
cs=0x28f0;eip=0x005670; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 99198 mov     es:[bx+6], ax ;~ 28F0:5670
cs=0x28f0;eip=0x005674; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 99199 mov     es:[bx+8], dx ;~ 28F0:5674
cs=0x28f0;eip=0x005678; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 99200 mov     ax, es:[bx+0Eh] ;~ 28F0:5678
cs=0x28f0;eip=0x00567c; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x10))));	// 99201 mov     dx, es:[bx+10h] ;~ 28F0:567C
cs=0x28f0;eip=0x005680; 	T(CMP(dx, *(dw*)((&unk_57008))));	// 99202 cmp     dx, word ptr unk_57008 ;~ 28F0:5680
cs=0x28f0;eip=0x005684; 	R(JG(loc_3cb75));	// 99203 jg      short loc_3CB75 ;~ 28F0:5684
cs=0x28f0;eip=0x005686; 	R(JL(loc_3cb6e));	// 99204 jl      short loc_3CB6E ;~ 28F0:5686
cs=0x28f0;eip=0x005688; 	T(CMP(ax, *(dw*)((&unk_57006))));	// 99205 cmp     ax, word ptr unk_57006 ;~ 28F0:5688
cs=0x28f0;eip=0x00568c; 	R(JNC(loc_3cb75));	// 99206 jnb     short loc_3CB75 ;~ 28F0:568C
loc_3cb6e:
	// 10723 
cs=0x28f0;eip=0x00568e; 	T(MOV(dx, *(dw*)((&unk_57008))));	// 99209 mov     dx, word ptr unk_57008 ;~ 28F0:568E
cs=0x28f0;eip=0x005692; 	T(MOV(ax, *(dw*)((&unk_57006))));	// 99210 mov     ax, word ptr unk_57006 ;~ 28F0:5692
loc_3cb75:
	// 10724 
cs=0x28f0;eip=0x005695; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 99214 mov     es:[bx+0Eh], ax ;~ 28F0:5695
cs=0x28f0;eip=0x005699; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), dx));	// 99215 mov     es:[bx+10h], dx ;~ 28F0:5699
cs=0x28f0;eip=0x00569d; 	T(CMP(dx, *(dw*)((&unk_5700c))));	// 99216 cmp     dx, word ptr unk_5700C ;~ 28F0:569D
cs=0x28f0;eip=0x0056a1; 	R(JL(loc_3cb92));	// 99217 jl      short loc_3CB92 ;~ 28F0:56A1
cs=0x28f0;eip=0x0056a3; 	R(JG(loc_3cb8b));	// 99218 jg      short loc_3CB8B ;~ 28F0:56A3
cs=0x28f0;eip=0x0056a5; 	T(CMP(ax, *(dw*)((&unk_5700a))));	// 99219 cmp     ax, word ptr unk_5700A ;~ 28F0:56A5
cs=0x28f0;eip=0x0056a9; 	R(JBE(loc_3cb92));	// 99220 jbe     short loc_3CB92 ;~ 28F0:56A9
loc_3cb8b:
	// 10725 
cs=0x28f0;eip=0x0056ab; 	T(MOV(dx, *(dw*)((&unk_5700c))));	// 99223 mov     dx, word ptr unk_5700C ;~ 28F0:56AB
cs=0x28f0;eip=0x0056af; 	T(MOV(ax, *(dw*)((&unk_5700a))));	// 99224 mov     ax, word ptr unk_5700A ;~ 28F0:56AF
loc_3cb92:
	// 10726 
cs=0x28f0;eip=0x0056b2; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 99228 mov     es:[bx+0Eh], ax ;~ 28F0:56B2
cs=0x28f0;eip=0x0056b6; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), dx));	// 99229 mov     es:[bx+10h], dx ;~ 28F0:56B6
cs=0x28f0;eip=0x0056ba; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99230 les     bx, [bp+arg_0] ;~ 28F0:56BA
cs=0x28f0;eip=0x0056bd; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C0))));	// 99231 mov     ax, es:[bx+0C0h] ;~ 28F0:56BD
cs=0x28f0;eip=0x0056c2; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C2))));	// 99232 mov     dx, es:[bx+0C2h] ;~ 28F0:56C2
cs=0x28f0;eip=0x0056c7; 	T(MOV(cl, 5));	// 99233 mov     cl, 5 ;~ 28F0:56C7
cs=0x28f0;eip=0x0056c9; 	R(CALLF(sub_10240,0));	// 99234 call    sub_10240 ;~ 28F0:56C9
cs=0x28f0;eip=0x0056ce; 	X(PUSH(ax));	// 99235 push    ax ;~ 28F0:56CE
cs=0x28f0;eip=0x0056cf; 	R(CALLF(sub_24cf8,0));	// 99236 call    sub_24CF8 ;~ 28F0:56CF
cs=0x28f0;eip=0x0056d4; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 99237 les     bx, [bp+var_A] ;~ 28F0:56D4
cs=0x28f0;eip=0x0056d7; 	X(MOV(*(dw*)(raddr(es,bx+0x16)), ax));	// 99238 mov     es:[bx+16h], ax ;~ 28F0:56D7
cs=0x28f0;eip=0x0056db; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99239 les     bx, [bp+arg_0] ;~ 28F0:56DB
cs=0x28f0;eip=0x0056de; 	T(MOV(al, *(raddr(es,bx+0x214))));	// 99240 mov     al, es:[bx+214h] ;~ 28F0:56DE
cs=0x28f0;eip=0x0056e3; 	T(CBW);	// 99241 cbw ;~ 28F0:56E3
cs=0x28f0;eip=0x0056e4; 	T(CWD);	// 99242 cwd ;~ 28F0:56E4
cs=0x28f0;eip=0x0056e5; 	T(MOV(dh, dl));	// 99243 mov     dh, dl ;~ 28F0:56E5
cs=0x28f0;eip=0x0056e7; 	T(MOV(dl, ah));	// 99244 mov     dl, ah ;~ 28F0:56E7
cs=0x28f0;eip=0x0056e9; 	T(MOV(ah, al));	// 99245 mov     ah, al ;~ 28F0:56E9
cs=0x28f0;eip=0x0056eb; 	T(SUB(al, al));	// 99246 sub     al, al ;~ 28F0:56EB
cs=0x28f0;eip=0x0056ed; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 99247 add     ax, es:[bx+0E0h] ;~ 28F0:56ED
cs=0x28f0;eip=0x0056f2; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 99248 adc     dx, es:[bx+0E2h] ;~ 28F0:56F2
cs=0x28f0;eip=0x0056f7; 	T(MOV(cl, 5));	// 99249 mov     cl, 5 ;~ 28F0:56F7
cs=0x28f0;eip=0x0056f9; 	R(CALLF(sub_10240,0));	// 99250 call    sub_10240 ;~ 28F0:56F9
cs=0x28f0;eip=0x0056fe; 	X(PUSH(ax));	// 99251 push    ax ;~ 28F0:56FE
cs=0x28f0;eip=0x0056ff; 	R(CALLF(sub_24cf8,0));	// 99252 call    sub_24CF8 ;~ 28F0:56FF
cs=0x28f0;eip=0x005704; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 99253 les     bx, [bp+var_A] ;~ 28F0:5704
cs=0x28f0;eip=0x005707; 	X(MOV(*(dw*)(raddr(es,bx+0x14)), ax));	// 99254 mov     es:[bx+14h], ax ;~ 28F0:5707
cs=0x28f0;eip=0x00570b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99255 les     bx, [bp+arg_0] ;~ 28F0:570B
cs=0x28f0;eip=0x00570e; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 99256 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:570E
cs=0x28f0;eip=0x005714; 	R(JNZ(loc_3cc02));	// 99257 jnz     short loc_3CC02 ;~ 28F0:5714
cs=0x28f0;eip=0x005716; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x100))));	// 99258 mov     ax, es:[bx+100h] ;~ 28F0:5716
cs=0x28f0;eip=0x00571b; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x102))));	// 99259 mov     dx, es:[bx+102h] ;~ 28F0:571B
cs=0x28f0;eip=0x005720; 	R(JMP(loc_3cc13));	// 99260 jmp     short loc_3CC13 ;~ 28F0:5720
loc_3cc02:
	// 10727 
cs=0x28f0;eip=0x005722; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x100))));	// 99264 mov     ax, es:[bx+100h] ;~ 28F0:5722
cs=0x28f0;eip=0x005727; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x102))));	// 99265 mov     dx, es:[bx+102h] ;~ 28F0:5727
cs=0x28f0;eip=0x00572c; 	T(NEG(ax));	// 99266 neg     ax ;~ 28F0:572C
cs=0x28f0;eip=0x00572e; 	T(ADC(dx, 0));	// 99267 adc     dx, 0 ;~ 28F0:572E
cs=0x28f0;eip=0x005731; 	T(NEG(dx));	// 99268 neg     dx ;~ 28F0:5731
loc_3cc13:
	// 10728 
cs=0x28f0;eip=0x005733; 	T(MOV(cl, 5));	// 99271 mov     cl, 5 ;~ 28F0:5733
cs=0x28f0;eip=0x005735; 	R(CALLF(sub_10240,0));	// 99272 call    sub_10240 ;~ 28F0:5735
cs=0x28f0;eip=0x00573a; 	X(PUSH(ax));	// 99273 push    ax ;~ 28F0:573A
cs=0x28f0;eip=0x00573b; 	R(CALLF(sub_24cf8,0));	// 99274 call    sub_24CF8 ;~ 28F0:573B
cs=0x28f0;eip=0x005740; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 99275 les     bx, [bp+var_A] ;~ 28F0:5740
cs=0x28f0;eip=0x005743; 	X(MOV(*(dw*)(raddr(es,bx+0x12)), ax));	// 99276 mov     es:[bx+12h], ax ;~ 28F0:5743
cs=0x28f0;eip=0x005747; 	T(MOV(sp, bp));	// 99277 mov     sp, bp ;~ 28F0:5747
cs=0x28f0;eip=0x005749; 	X(POP(bp));	// 99278 pop     bp ;~ 28F0:5749
cs=0x28f0;eip=0x00574a; 	R(RETN(4));	// 99279 retn    4 ;~ 28F0:574A
sub_3cc2d:
	// 99287 
#undef var_6
#define var_6 -6
	// 99289 var_6           = word ptr -6 ;~ 28F0:574D
#undef var_4
#define var_4 -4
	// 99290 var_4           = word ptr -4 ;~ 28F0:574D
#undef var_2
#define var_2 -2
	// 99291 var_2           = word ptr -2 ;~ 28F0:574D
#undef arg_0
#define arg_0 4
	// 99292 arg_0           = dword ptr  4 ;~ 28F0:574D
cs=0x28f0;eip=0x00574d; 	X(PUSH(bp));	// 99294 push    bp ;~ 28F0:574D
cs=0x28f0;eip=0x00574e; 	T(MOV(bp, sp));	// 99295 mov     bp, sp ;~ 28F0:574E
cs=0x28f0;eip=0x005750; 	T(SUB(sp, 6));	// 99296 sub     sp, 6 ;~ 28F0:5750
cs=0x28f0;eip=0x005753; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99297 les     bx, [bp+arg_0] ;~ 28F0:5753
cs=0x28f0;eip=0x005756; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 2));	// 99298 cmp     word ptr es:[bx+332h], 2 ;~ 28F0:5756
cs=0x28f0;eip=0x00575c; 	R(JG(loc_3cc65));	// 99299 jg      short loc_3CC65 ;~ 28F0:575C
cs=0x28f0;eip=0x00575e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 99300 mov     ax, es:[bx+2FAh] ;~ 28F0:575E
cs=0x28f0;eip=0x005763; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 99301 mov     dx, es:[bx+2FCh] ;~ 28F0:5763
cs=0x28f0;eip=0x005768; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 99302 add     ax, es:[bx+302h] ;~ 28F0:5768
cs=0x28f0;eip=0x00576d; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 99303 adc     dx, es:[bx+304h] ;~ 28F0:576D
cs=0x28f0;eip=0x005772; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 99304 les     bx, es:[bx+31Ch] ;~ 28F0:5772
cs=0x28f0;eip=0x005777; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 99305 cmp     dx, es:[bx+0Ch] ;~ 28F0:5777
cs=0x28f0;eip=0x00577b; 	R(JL(loc_3cc65));	// 99306 jl      short loc_3CC65 ;~ 28F0:577B
cs=0x28f0;eip=0x00577d; 	R(JG(loc_3ccd1));	// 99307 jg      short loc_3CCD1 ;~ 28F0:577D
cs=0x28f0;eip=0x00577f; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 99308 cmp     ax, es:[bx+0Ah] ;~ 28F0:577F
cs=0x28f0;eip=0x005783; 	R(JNC(loc_3ccd1));	// 99309 jnb     short loc_3CCD1 ;~ 28F0:5783
loc_3cc65:
	// 10729 
cs=0x28f0;eip=0x005785; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99313 les     bx, [bp+arg_0] ;~ 28F0:5785
cs=0x28f0;eip=0x005788; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 99314 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:5788
cs=0x28f0;eip=0x00578e; 	R(JNZ(loc_3ccd1));	// 99315 jnz     short loc_3CCD1 ;~ 28F0:578E
cs=0x28f0;eip=0x005790; 	X(PUSH(*(dw*)(raddr(es,bx+0x1FC))));	// 99316 push    word ptr es:[bx+1FCh] ;~ 28F0:5790
cs=0x28f0;eip=0x005795; 	R(CALLF(sub_24cf8,0));	// 99317 call    sub_24CF8 ;~ 28F0:5795
cs=0x28f0;eip=0x00579a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 99318 mov     [bp+var_2], ax ;~ 28F0:579A
cs=0x28f0;eip=0x00579d; 	T(MOV(ax, 0x100));	// 99319 mov     ax, 100h ;~ 28F0:579D
cs=0x28f0;eip=0x0057a0; 	T(CWD);	// 99320 cwd ;~ 28F0:57A0
cs=0x28f0;eip=0x0057a1; 	X(PUSH(dx));	// 99321 push    dx ;~ 28F0:57A1
cs=0x28f0;eip=0x0057a2; 	X(PUSH(ax));	// 99322 push    ax ;~ 28F0:57A2
cs=0x28f0;eip=0x0057a3; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 99323 mov     ax, word ptr unk_57111 ;~ 28F0:57A3
cs=0x28f0;eip=0x0057a6; 	T(CWD);	// 99324 cwd ;~ 28F0:57A6
cs=0x28f0;eip=0x0057a7; 	X(PUSH(dx));	// 99325 push    dx ;~ 28F0:57A7
cs=0x28f0;eip=0x0057a8; 	X(PUSH(ax));	// 99326 push    ax ;~ 28F0:57A8
cs=0x28f0;eip=0x0057a9; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99327 les     bx, [bp+arg_0] ;~ 28F0:57A9
cs=0x28f0;eip=0x0057ac; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1FE))));	// 99328 mov     ax, es:[bx+1FEh] ;~ 28F0:57AC
cs=0x28f0;eip=0x0057b1; 	T(CWD);	// 99329 cwd ;~ 28F0:57B1
cs=0x28f0;eip=0x0057b2; 	T(MOV(dh, dl));	// 99330 mov     dh, dl ;~ 28F0:57B2
cs=0x28f0;eip=0x0057b4; 	T(MOV(dl, ah));	// 99331 mov     dl, ah ;~ 28F0:57B4
cs=0x28f0;eip=0x0057b6; 	T(MOV(ah, al));	// 99332 mov     ah, al ;~ 28F0:57B6
cs=0x28f0;eip=0x0057b8; 	T(SUB(al, al));	// 99333 sub     al, al ;~ 28F0:57B8
cs=0x28f0;eip=0x0057ba; 	X(PUSH(dx));	// 99334 push    dx ;~ 28F0:57BA
cs=0x28f0;eip=0x0057bb; 	X(PUSH(ax));	// 99335 push    ax ;~ 28F0:57BB
cs=0x28f0;eip=0x0057bc; 	R(CALLF(sub_105c2,0));	// 99336 call    sub_105C2 ;~ 28F0:57BC
cs=0x28f0;eip=0x0057c1; 	X(PUSH(dx));	// 99337 push    dx ;~ 28F0:57C1
cs=0x28f0;eip=0x0057c2; 	X(PUSH(ax));	// 99338 push    ax ;~ 28F0:57C2
cs=0x28f0;eip=0x0057c3; 	R(CALLF(sub_10526,0));	// 99339 call    sub_10526 ;~ 28F0:57C3
cs=0x28f0;eip=0x0057c8; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 99340 mov     [bp+var_6], ax ;~ 28F0:57C8
cs=0x28f0;eip=0x0057cb; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 99341 mov     [bp+var_4], dx ;~ 28F0:57CB
cs=0x28f0;eip=0x0057ce; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99342 les     bx, [bp+arg_0] ;~ 28F0:57CE
cs=0x28f0;eip=0x0057d1; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x31C))));	// 99343 mov     ax, es:[bx+31Ch] ;~ 28F0:57D1
cs=0x28f0;eip=0x0057d6; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x31E))));	// 99344 mov     dx, es:[bx+31Eh] ;~ 28F0:57D6
cs=0x28f0;eip=0x0057db; 	T(ADD(ax, 6));	// 99345 add     ax, 6 ;~ 28F0:57DB
cs=0x28f0;eip=0x0057de; 	X(PUSH(dx));	// 99346 push    dx ;~ 28F0:57DE
cs=0x28f0;eip=0x0057df; 	X(PUSH(ax));	// 99347 push    ax ;~ 28F0:57DF
cs=0x28f0;eip=0x0057e0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 99348 push    [bp+var_2] ;~ 28F0:57E0
cs=0x28f0;eip=0x0057e3; 	T(SUB(ax, ax));	// 99349 sub     ax, ax ;~ 28F0:57E3
cs=0x28f0;eip=0x0057e5; 	X(PUSH(ax));	// 99350 push    ax ;~ 28F0:57E5
cs=0x28f0;eip=0x0057e6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 99351 push    [bp+var_4] ;~ 28F0:57E6
cs=0x28f0;eip=0x0057e9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 99352 push    [bp+var_6] ;~ 28F0:57E9
cs=0x28f0;eip=0x0057ec; 	R(CALLF(sub_2f4ee,0));	// 99353 call    sub_2F4EE ;~ 28F0:57EC
loc_3ccd1:
	// 10730 
cs=0x28f0;eip=0x0057f1; 	T(MOV(sp, bp));	// 99357 mov     sp, bp ;~ 28F0:57F1
cs=0x28f0;eip=0x0057f3; 	X(POP(bp));	// 99358 pop     bp ;~ 28F0:57F3
cs=0x28f0;eip=0x0057f4; 	R(RETN(4));	// 99359 retn    4 ;~ 28F0:57F4
sub_3ccd7:
	// 99367 
#undef var_8
#define var_8 -8
	// 99369 var_8           = word ptr -8 ;~ 28F0:57F7
#undef var_6
#define var_6 -6
	// 99370 var_6           = word ptr -6 ;~ 28F0:57F7
#undef var_4
#define var_4 -4
	// 99371 var_4           = word ptr -4 ;~ 28F0:57F7
#undef var_2
#define var_2 -2
	// 99372 var_2           = word ptr -2 ;~ 28F0:57F7
#undef arg_0
#define arg_0 4
	// 99373 arg_0           = dword ptr  4 ;~ 28F0:57F7
cs=0x28f0;eip=0x0057f7; 	X(PUSH(bp));	// 99375 push    bp ;~ 28F0:57F7
cs=0x28f0;eip=0x0057f8; 	T(MOV(bp, sp));	// 99376 mov     bp, sp ;~ 28F0:57F8
cs=0x28f0;eip=0x0057fa; 	T(SUB(sp, 8));	// 99377 sub     sp, 8 ;~ 28F0:57FA
cs=0x28f0;eip=0x0057fd; 	X(PUSH(si));	// 99378 push    si ;~ 28F0:57FD
cs=0x28f0;eip=0x0057fe; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99379 les     bx, [bp+arg_0] ;~ 28F0:57FE
cs=0x28f0;eip=0x005801; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 99380 mov     ax, es:[bx+2FAh] ;~ 28F0:5801
cs=0x28f0;eip=0x005806; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 99381 mov     dx, es:[bx+2FCh] ;~ 28F0:5806
cs=0x28f0;eip=0x00580b; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 99382 add     ax, es:[bx+302h] ;~ 28F0:580B
cs=0x28f0;eip=0x005810; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 99383 adc     dx, es:[bx+304h] ;~ 28F0:5810
cs=0x28f0;eip=0x005815; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x1EC))));	// 99384 add     ax, es:[bx+1ECh] ;~ 28F0:5815
cs=0x28f0;eip=0x00581a; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x1EE))));	// 99385 adc     dx, es:[bx+1EEh] ;~ 28F0:581A
cs=0x28f0;eip=0x00581f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 99386 mov     [bp+var_4], ax ;~ 28F0:581F
cs=0x28f0;eip=0x005822; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 99387 mov     [bp+var_2], dx ;~ 28F0:5822
cs=0x28f0;eip=0x005825; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 2));	// 99388 cmp     word ptr es:[bx+332h], 2 ;~ 28F0:5825
cs=0x28f0;eip=0x00582b; 	R(JG(loc_3cd3a));	// 99389 jg      short loc_3CD3A ;~ 28F0:582B
cs=0x28f0;eip=0x00582d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 99390 mov     ax, es:[bx+2FAh] ;~ 28F0:582D
cs=0x28f0;eip=0x005832; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 99391 mov     dx, es:[bx+2FCh] ;~ 28F0:5832
cs=0x28f0;eip=0x005837; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 99392 add     ax, es:[bx+302h] ;~ 28F0:5837
cs=0x28f0;eip=0x00583c; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 99393 adc     dx, es:[bx+304h] ;~ 28F0:583C
cs=0x28f0;eip=0x005841; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 99394 les     bx, es:[bx+31Ch] ;~ 28F0:5841
cs=0x28f0;eip=0x005846; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 99395 cmp     dx, es:[bx+0Ch] ;~ 28F0:5846
cs=0x28f0;eip=0x00584a; 	R(JL(loc_3cd3a));	// 99396 jl      short loc_3CD3A ;~ 28F0:584A
cs=0x28f0;eip=0x00584c; 	R(JLE(loc_3cd31));	// 99397 jle     short loc_3CD31 ;~ 28F0:584C
cs=0x28f0;eip=0x00584e; 	R(JMP(loc_3cf13));	// 99398 jmp     loc_3CF13 ;~ 28F0:584E
loc_3cd31:
	// 10731 
cs=0x28f0;eip=0x005851; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 99402 cmp     ax, es:[bx+0Ah] ;~ 28F0:5851
cs=0x28f0;eip=0x005855; 	R(JC(loc_3cd3a));	// 99403 jb      short loc_3CD3A ;~ 28F0:5855
cs=0x28f0;eip=0x005857; 	R(JMP(loc_3cf13));	// 99404 jmp     loc_3CF13 ;~ 28F0:5857
loc_3cd3a:
	// 10732 
cs=0x28f0;eip=0x00585a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99409 les     bx, [bp+arg_0] ;~ 28F0:585A
cs=0x28f0;eip=0x00585d; 	T(MOV(ax, word_5705a));	// 99410 mov     ax, word_5705A ;~ 28F0:585D
cs=0x28f0;eip=0x005860; 	T(MOV(dx, word_5705c));	// 99411 mov     dx, word_5705C ;~ 28F0:5860
cs=0x28f0;eip=0x005864; 	T(CMP(*(dw*)(raddr(es,bx+0x1F6)), dx));	// 99412 cmp     es:[bx+1F6h], dx ;~ 28F0:5864
cs=0x28f0;eip=0x005869; 	R(JLE(loc_3cd4e));	// 99413 jle     short loc_3CD4E ;~ 28F0:5869
cs=0x28f0;eip=0x00586b; 	R(JMP(loc_3cf13));	// 99414 jmp     loc_3CF13 ;~ 28F0:586B
loc_3cd4e:
	// 10733 
cs=0x28f0;eip=0x00586e; 	R(JL(loc_3cd5a));	// 99418 jl      short loc_3CD5A ;~ 28F0:586E
cs=0x28f0;eip=0x005870; 	T(CMP(*(dw*)(raddr(es,bx+0x1F4)), ax));	// 99419 cmp     es:[bx+1F4h], ax ;~ 28F0:5870
cs=0x28f0;eip=0x005875; 	R(JBE(loc_3cd5a));	// 99420 jbe     short loc_3CD5A ;~ 28F0:5875
cs=0x28f0;eip=0x005877; 	R(JMP(loc_3cf13));	// 99421 jmp     loc_3CF13 ;~ 28F0:5877
loc_3cd5a:
	// 10734 
cs=0x28f0;eip=0x00587a; 	T(MOV(ax, word_5705a));	// 99426 mov     ax, word_5705A ;~ 28F0:587A
cs=0x28f0;eip=0x00587d; 	T(MOV(dx, word_5705c));	// 99427 mov     dx, word_5705C ;~ 28F0:587D
cs=0x28f0;eip=0x005881; 	T(CMP(*(dw*)(raddr(es,bx+0x1FA)), dx));	// 99428 cmp     es:[bx+1FAh], dx ;~ 28F0:5881
cs=0x28f0;eip=0x005886; 	R(JL(loc_3cda9));	// 99429 jl      short loc_3CDA9 ;~ 28F0:5886
cs=0x28f0;eip=0x005888; 	R(JG(loc_3cd71));	// 99430 jg      short loc_3CD71 ;~ 28F0:5888
cs=0x28f0;eip=0x00588a; 	T(CMP(*(dw*)(raddr(es,bx+0x1F8)), ax));	// 99431 cmp     es:[bx+1F8h], ax ;~ 28F0:588A
cs=0x28f0;eip=0x00588f; 	R(JBE(loc_3cda9));	// 99432 jbe     short loc_3CDA9 ;~ 28F0:588F
loc_3cd71:
	// 10735 
cs=0x28f0;eip=0x005891; 	T(MOV(ax, 0x100));	// 99435 mov     ax, 100h ;~ 28F0:5891
cs=0x28f0;eip=0x005894; 	T(CWD);	// 99436 cwd ;~ 28F0:5894
cs=0x28f0;eip=0x005895; 	X(PUSH(dx));	// 99437 push    dx ;~ 28F0:5895
cs=0x28f0;eip=0x005896; 	X(PUSH(ax));	// 99438 push    ax ;~ 28F0:5896
cs=0x28f0;eip=0x005897; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 99439 mov     ax, word ptr unk_57111 ;~ 28F0:5897
cs=0x28f0;eip=0x00589a; 	T(CWD);	// 99440 cwd ;~ 28F0:589A
cs=0x28f0;eip=0x00589b; 	X(PUSH(dx));	// 99441 push    dx ;~ 28F0:589B
cs=0x28f0;eip=0x00589c; 	X(PUSH(ax));	// 99442 push    ax ;~ 28F0:589C
cs=0x28f0;eip=0x00589d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1F2))));	// 99443 mov     ax, es:[bx+1F2h] ;~ 28F0:589D
cs=0x28f0;eip=0x0058a2; 	T(CWD);	// 99444 cwd ;~ 28F0:58A2
cs=0x28f0;eip=0x0058a3; 	T(MOV(dh, dl));	// 99445 mov     dh, dl ;~ 28F0:58A3
cs=0x28f0;eip=0x0058a5; 	T(MOV(dl, ah));	// 99446 mov     dl, ah ;~ 28F0:58A5
cs=0x28f0;eip=0x0058a7; 	T(MOV(ah, al));	// 99447 mov     ah, al ;~ 28F0:58A7
cs=0x28f0;eip=0x0058a9; 	T(SUB(al, al));	// 99448 sub     al, al ;~ 28F0:58A9
cs=0x28f0;eip=0x0058ab; 	X(PUSH(dx));	// 99449 push    dx ;~ 28F0:58AB
cs=0x28f0;eip=0x0058ac; 	X(PUSH(ax));	// 99450 push    ax ;~ 28F0:58AC
cs=0x28f0;eip=0x0058ad; 	R(CALLF(sub_105c2,0));	// 99451 call    sub_105C2 ;~ 28F0:58AD
cs=0x28f0;eip=0x0058b2; 	X(PUSH(dx));	// 99452 push    dx ;~ 28F0:58B2
cs=0x28f0;eip=0x0058b3; 	X(PUSH(ax));	// 99453 push    ax ;~ 28F0:58B3
cs=0x28f0;eip=0x0058b4; 	R(CALLF(sub_10526,0));	// 99454 call    sub_10526 ;~ 28F0:58B4
cs=0x28f0;eip=0x0058b9; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99455 les     bx, [bp+arg_0] ;~ 28F0:58B9
cs=0x28f0;eip=0x0058bc; 	X(SUB(*(dw*)(raddr(es,bx+0x1C0)), ax));	// 99456 sub     es:[bx+1C0h], ax ;~ 28F0:58BC
cs=0x28f0;eip=0x0058c1; 	X(SBB(*(dw*)(raddr(es,bx+0x1C2)), dx));	// 99457 sbb     es:[bx+1C2h], dx ;~ 28F0:58C1
cs=0x28f0;eip=0x0058c6; 	R(JMP(loc_3cf13));	// 99458 jmp     loc_3CF13 ;~ 28F0:58C6
loc_3cda9:
	// 10736 
cs=0x28f0;eip=0x0058c9; 	T(MOV(ax, 0x200));	// 99463 mov     ax, 200h ;~ 28F0:58C9
cs=0x28f0;eip=0x0058cc; 	X(PUSH(ax));	// 99464 push    ax ;~ 28F0:58CC
cs=0x28f0;eip=0x0058cd; 	R(CALLF(sub_2937a,0));	// 99465 call    sub_2937A ;~ 28F0:58CD
cs=0x28f0;eip=0x0058d2; 	T(CWD);	// 99466 cwd ;~ 28F0:58D2
cs=0x28f0;eip=0x0058d3; 	T(ADD(ax, word_5705a));	// 99467 add     ax, word_5705A ;~ 28F0:58D3
cs=0x28f0;eip=0x0058d7; 	T(ADC(dx, word_5705c));	// 99468 adc     dx, word_5705C ;~ 28F0:58D7
cs=0x28f0;eip=0x0058db; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99469 les     bx, [bp+arg_0] ;~ 28F0:58DB
cs=0x28f0;eip=0x0058de; 	X(MOV(*(dw*)(raddr(es,bx+0x1F4)), ax));	// 99470 mov     es:[bx+1F4h], ax ;~ 28F0:58DE
cs=0x28f0;eip=0x0058e3; 	X(MOV(*(dw*)(raddr(es,bx+0x1F6)), dx));	// 99471 mov     es:[bx+1F6h], dx ;~ 28F0:58E3
cs=0x28f0;eip=0x0058e8; 	T(MOV(ax, 0x100));	// 99472 mov     ax, 100h ;~ 28F0:58E8
cs=0x28f0;eip=0x0058eb; 	X(PUSH(ax));	// 99473 push    ax ;~ 28F0:58EB
cs=0x28f0;eip=0x0058ec; 	R(CALLF(sub_2937a,0));	// 99474 call    sub_2937A ;~ 28F0:58EC
cs=0x28f0;eip=0x0058f1; 	T(CWD);	// 99475 cwd ;~ 28F0:58F1
cs=0x28f0;eip=0x0058f2; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99476 les     bx, [bp+arg_0] ;~ 28F0:58F2
cs=0x28f0;eip=0x0058f5; 	T(MOV(cx, *(dw*)(raddr(es,bx+0x1F4))));	// 99477 mov     cx, es:[bx+1F4h] ;~ 28F0:58F5
cs=0x28f0;eip=0x0058fa; 	T(MOV(si, *(dw*)(raddr(es,bx+0x1F6))));	// 99478 mov     si, es:[bx+1F6h] ;~ 28F0:58FA
cs=0x28f0;eip=0x0058ff; 	T(ADD(cx, ax));	// 99479 add     cx, ax ;~ 28F0:58FF
cs=0x28f0;eip=0x005901; 	T(ADC(si, dx));	// 99480 adc     si, dx ;~ 28F0:5901
cs=0x28f0;eip=0x005903; 	X(MOV(*(dw*)(raddr(es,bx+0x1F8)), cx));	// 99481 mov     es:[bx+1F8h], cx ;~ 28F0:5903
cs=0x28f0;eip=0x005908; 	X(MOV(*(dw*)(raddr(es,bx+0x1FA)), si));	// 99482 mov     es:[bx+1FAh], si ;~ 28F0:5908
cs=0x28f0;eip=0x00590d; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 5));	// 99483 cmp     word ptr es:[bx+332h], 5 ;~ 28F0:590D
cs=0x28f0;eip=0x005913; 	R(JZ(loc_3ce0f));	// 99484 jz      short loc_3CE0F ;~ 28F0:5913
cs=0x28f0;eip=0x005915; 	T(MOV(ax, 0x80));	// 99485 mov     ax, 80h ; '€' ;~ 28F0:5915
cs=0x28f0;eip=0x005918; 	X(PUSH(ax));	// 99486 push    ax ;~ 28F0:5918
cs=0x28f0;eip=0x005919; 	R(CALLF(sub_2937a,0));	// 99487 call    sub_2937A ;~ 28F0:5919
cs=0x28f0;eip=0x00591e; 	T(ADD(ax, 0x80));	// 99488 add     ax, 80h ; '€' ;~ 28F0:591E
cs=0x28f0;eip=0x005921; 	T(CWD);	// 99489 cwd ;~ 28F0:5921
cs=0x28f0;eip=0x005922; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99490 les     bx, [bp+arg_0] ;~ 28F0:5922
cs=0x28f0;eip=0x005925; 	X(ADD(*(dw*)(raddr(es,bx+0x1F8)), ax));	// 99491 add     es:[bx+1F8h], ax ;~ 28F0:5925
cs=0x28f0;eip=0x00592a; 	X(ADC(*(dw*)(raddr(es,bx+0x1FA)), dx));	// 99492 adc     es:[bx+1FAh], dx ;~ 28F0:592A
loc_3ce0f:
	// 10737 
cs=0x28f0;eip=0x00592f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 99495 mov     ax, es:[bx+120h] ;~ 28F0:592F
cs=0x28f0;eip=0x005934; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 99496 mov     dx, es:[bx+122h] ;~ 28F0:5934
cs=0x28f0;eip=0x005939; 	T(MOV(cl, 8));	// 99497 mov     cl, 8 ;~ 28F0:5939
cs=0x28f0;eip=0x00593b; 	R(CALLF(sub_10240,0));	// 99498 call    sub_10240 ;~ 28F0:593B
cs=0x28f0;eip=0x005940; 	T(CWD);	// 99499 cwd ;~ 28F0:5940
cs=0x28f0;eip=0x005941; 	T(XOR(ax, dx));	// 99500 xor     ax, dx ;~ 28F0:5941
cs=0x28f0;eip=0x005943; 	T(SUB(ax, dx));	// 99501 sub     ax, dx ;~ 28F0:5943
cs=0x28f0;eip=0x005945; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 99502 mov     [bp+var_8], ax ;~ 28F0:5945
cs=0x28f0;eip=0x005948; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99503 les     bx, [bp+arg_0] ;~ 28F0:5948
cs=0x28f0;eip=0x00594b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x140))));	// 99504 mov     ax, es:[bx+140h] ;~ 28F0:594B
cs=0x28f0;eip=0x005950; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x142))));	// 99505 mov     dx, es:[bx+142h] ;~ 28F0:5950
cs=0x28f0;eip=0x005955; 	T(MOV(cl, 8));	// 99506 mov     cl, 8 ;~ 28F0:5955
cs=0x28f0;eip=0x005957; 	R(CALLF(sub_10240,0));	// 99507 call    sub_10240 ;~ 28F0:5957
cs=0x28f0;eip=0x00595c; 	T(CWD);	// 99508 cwd ;~ 28F0:595C
cs=0x28f0;eip=0x00595d; 	T(XOR(ax, dx));	// 99509 xor     ax, dx ;~ 28F0:595D
cs=0x28f0;eip=0x00595f; 	T(SUB(ax, dx));	// 99510 sub     ax, dx ;~ 28F0:595F
cs=0x28f0;eip=0x005961; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 99511 mov     [bp+var_6], ax ;~ 28F0:5961
cs=0x28f0;eip=0x005964; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), ax));	// 99512 cmp     [bp+var_8], ax ;~ 28F0:5964
cs=0x28f0;eip=0x005967; 	R(JGE(loc_3ce4c));	// 99513 jge     short loc_3CE4C ;~ 28F0:5967
cs=0x28f0;eip=0x005969; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 99514 mov     [bp+var_8], ax ;~ 28F0:5969
loc_3ce4c:
	// 10738 
cs=0x28f0;eip=0x00596c; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x96));	// 99517 cmp     [bp+var_8], 96h ; '–' ;~ 28F0:596C
cs=0x28f0;eip=0x005971; 	R(JLE(loc_3ce58));	// 99518 jle     short loc_3CE58 ;~ 28F0:5971
cs=0x28f0;eip=0x005973; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x96));	// 99519 mov     [bp+var_8], 96h ; '–' ;~ 28F0:5973
loc_3ce58:
	// 10739 
cs=0x28f0;eip=0x005978; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99522 les     bx, [bp+arg_0] ;~ 28F0:5978
cs=0x28f0;eip=0x00597b; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 99523 les     bx, es:[bx+31Ch] ;~ 28F0:597B
cs=0x28f0;eip=0x005980; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 99524 mov     ax, [bp+var_4] ;~ 28F0:5980
cs=0x28f0;eip=0x005983; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 99525 mov     dx, [bp+var_2] ;~ 28F0:5983
cs=0x28f0;eip=0x005986; 	T(CMP(*(dw*)(raddr(es,bx+0x0C)), dx));	// 99526 cmp     es:[bx+0Ch], dx ;~ 28F0:5986
cs=0x28f0;eip=0x00598a; 	R(JG(loc_3ced8));	// 99527 jg      short loc_3CED8 ;~ 28F0:598A
cs=0x28f0;eip=0x00598c; 	R(JL(loc_3ce74));	// 99528 jl      short loc_3CE74 ;~ 28F0:598C
cs=0x28f0;eip=0x00598e; 	T(CMP(*(dw*)(raddr(es,bx+0x0A)), ax));	// 99529 cmp     es:[bx+0Ah], ax ;~ 28F0:598E
cs=0x28f0;eip=0x005992; 	R(JNC(loc_3ced8));	// 99530 jnb     short loc_3CED8 ;~ 28F0:5992
loc_3ce74:
	// 10740 
cs=0x28f0;eip=0x005994; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99533 les     bx, [bp+arg_0] ;~ 28F0:5994
cs=0x28f0;eip=0x005997; 	X(PUSH(*(dw*)(raddr(es,bx+0x1F0))));	// 99534 push    word ptr es:[bx+1F0h] ;~ 28F0:5997
cs=0x28f0;eip=0x00599c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 99535 push    [bp+var_8] ;~ 28F0:599C
cs=0x28f0;eip=0x00599f; 	T(MOV(ax, 0x96));	// 99536 mov     ax, 96h ; '–' ;~ 28F0:599F
cs=0x28f0;eip=0x0059a2; 	X(PUSH(ax));	// 99537 push    ax ;~ 28F0:59A2
cs=0x28f0;eip=0x0059a3; 	R(CALLF(sub_2f01c,0));	// 99538 call    sub_2F01C ;~ 28F0:59A3
cs=0x28f0;eip=0x0059a8; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 99539 mov     [bp+var_8], ax ;~ 28F0:59A8
cs=0x28f0;eip=0x0059ab; 	X(PUSH(ax));	// 99540 push    ax ;~ 28F0:59AB
cs=0x28f0;eip=0x0059ac; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99541 les     bx, [bp+arg_0] ;~ 28F0:59AC
cs=0x28f0;eip=0x0059af; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 99542 les     bx, es:[bx+31Ch] ;~ 28F0:59AF
cs=0x28f0;eip=0x0059b4; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 99543 mov     ax, es:[bx+0Ah] ;~ 28F0:59B4
cs=0x28f0;eip=0x0059b8; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 99544 mov     dx, es:[bx+0Ch] ;~ 28F0:59B8
cs=0x28f0;eip=0x0059bc; 	T(MOV(cl, 8));	// 99545 mov     cl, 8 ;~ 28F0:59BC
cs=0x28f0;eip=0x0059be; 	R(CALLF(sub_10240,0));	// 99546 call    sub_10240 ;~ 28F0:59BE
cs=0x28f0;eip=0x0059c3; 	T(MOV(cx, ax));	// 99547 mov     cx, ax ;~ 28F0:59C3
cs=0x28f0;eip=0x0059c5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 99548 mov     ax, [bp+var_4] ;~ 28F0:59C5
cs=0x28f0;eip=0x0059c8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 99549 mov     dx, [bp+var_2] ;~ 28F0:59C8
cs=0x28f0;eip=0x0059cb; 	T(MOV(bx, cx));	// 99550 mov     bx, cx ;~ 28F0:59CB
cs=0x28f0;eip=0x0059cd; 	T(MOV(cl, 8));	// 99551 mov     cl, 8 ;~ 28F0:59CD
cs=0x28f0;eip=0x0059cf; 	T(MOV(si, bx));	// 99552 mov     si, bx ;~ 28F0:59CF
cs=0x28f0;eip=0x0059d1; 	R(CALLF(sub_10240,0));	// 99553 call    sub_10240 ;~ 28F0:59D1
cs=0x28f0;eip=0x0059d6; 	T(SUB(ax, si));	// 99554 sub     ax, si ;~ 28F0:59D6
cs=0x28f0;eip=0x0059d8; 	X(PUSH(ax));	// 99555 push    ax ;~ 28F0:59D8
cs=0x28f0;eip=0x0059d9; 	T(MOV(ax, 0x64));	// 99556 mov     ax, 64h ; 'd' ;~ 28F0:59D9
cs=0x28f0;eip=0x0059dc; 	X(PUSH(ax));	// 99557 push    ax ;~ 28F0:59DC
cs=0x28f0;eip=0x0059dd; 	R(CALLF(sub_2f01c,0));	// 99558 call    sub_2F01C ;~ 28F0:59DD
cs=0x28f0;eip=0x0059e2; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 99559 mov     [bp+var_8], ax ;~ 28F0:59E2
cs=0x28f0;eip=0x0059e5; 	T(OR(ax, ax));	// 99560 or      ax, ax ;~ 28F0:59E5
cs=0x28f0;eip=0x0059e7; 	R(JZ(loc_3cf09));	// 99561 jz      short loc_3CF09 ;~ 28F0:59E7
loc_3cec9:
	// 10741 
cs=0x28f0;eip=0x0059e9; 	X(PUSH(ax));	// 99564 push    ax ;~ 28F0:59E9
cs=0x28f0;eip=0x0059ea; 	R(CALLF(sub_2937a,0));	// 99565 call    sub_2937A ;~ 28F0:59EA
cs=0x28f0;eip=0x0059ef; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_8))));	// 99566 mov     cx, [bp+var_8] ;~ 28F0:59EF
cs=0x28f0;eip=0x0059f2; 	T(SAR(cx, 1));	// 99567 sar     cx, 1 ;~ 28F0:59F2
cs=0x28f0;eip=0x0059f4; 	T(SUB(ax, cx));	// 99568 sub     ax, cx ;~ 28F0:59F4
cs=0x28f0;eip=0x0059f6; 	R(JMP(loc_3cf0b));	// 99569 jmp     short loc_3CF0B ;~ 28F0:59F6
loc_3ced8:
	// 10742 
cs=0x28f0;eip=0x0059f8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99574 les     bx, [bp+arg_0] ;~ 28F0:59F8
cs=0x28f0;eip=0x0059fb; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1F0))));	// 99575 mov     ax, es:[bx+1F0h] ;~ 28F0:59FB
cs=0x28f0;eip=0x005a00; 	T(SAR(ax, 1));	// 99576 sar     ax, 1 ;~ 28F0:5A00
cs=0x28f0;eip=0x005a02; 	T(SAR(ax, 1));	// 99577 sar     ax, 1 ;~ 28F0:5A02
cs=0x28f0;eip=0x005a04; 	X(PUSH(ax));	// 99578 push    ax ;~ 28F0:5A04
cs=0x28f0;eip=0x005a05; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 99579 push    [bp+var_8] ;~ 28F0:5A05
cs=0x28f0;eip=0x005a08; 	T(MOV(ax, 0x96));	// 99580 mov     ax, 96h ; '–' ;~ 28F0:5A08
cs=0x28f0;eip=0x005a0b; 	X(PUSH(ax));	// 99581 push    ax ;~ 28F0:5A0B
cs=0x28f0;eip=0x005a0c; 	R(CALLF(sub_2f01c,0));	// 99582 call    sub_2F01C ;~ 28F0:5A0C
cs=0x28f0;eip=0x005a11; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 99583 mov     [bp+var_8], ax ;~ 28F0:5A11
cs=0x28f0;eip=0x005a14; 	X(PUSH(ax));	// 99584 push    ax ;~ 28F0:5A14
cs=0x28f0;eip=0x005a15; 	T(MOV(ax, 0x0C8));	// 99585 mov     ax, 0C8h ; 'È' ;~ 28F0:5A15
cs=0x28f0;eip=0x005a18; 	X(PUSH(ax));	// 99586 push    ax ;~ 28F0:5A18
cs=0x28f0;eip=0x005a19; 	T(MOV(ax, 0x64));	// 99587 mov     ax, 64h ; 'd' ;~ 28F0:5A19
cs=0x28f0;eip=0x005a1c; 	X(PUSH(ax));	// 99588 push    ax ;~ 28F0:5A1C
cs=0x28f0;eip=0x005a1d; 	R(CALLF(sub_2f01c,0));	// 99589 call    sub_2F01C ;~ 28F0:5A1D
cs=0x28f0;eip=0x005a22; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 99590 mov     [bp+var_8], ax ;~ 28F0:5A22
cs=0x28f0;eip=0x005a25; 	T(OR(ax, ax));	// 99591 or      ax, ax ;~ 28F0:5A25
cs=0x28f0;eip=0x005a27; 	R(JNZ(loc_3cec9));	// 99592 jnz     short loc_3CEC9 ;~ 28F0:5A27
loc_3cf09:
	// 10743 
cs=0x28f0;eip=0x005a29; 	T(SUB(ax, ax));	// 99595 sub     ax, ax ;~ 28F0:5A29
loc_3cf0b:
	// 10744 
cs=0x28f0;eip=0x005a2b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99598 les     bx, [bp+arg_0] ;~ 28F0:5A2B
cs=0x28f0;eip=0x005a2e; 	X(MOV(*(dw*)(raddr(es,bx+0x1F2)), ax));	// 99599 mov     es:[bx+1F2h], ax ;~ 28F0:5A2E
loc_3cf13:
	// 10745 
cs=0x28f0;eip=0x005a33; 	X(POP(si));	// 99603 pop     si ;~ 28F0:5A33
cs=0x28f0;eip=0x005a34; 	T(MOV(sp, bp));	// 99604 mov     sp, bp ;~ 28F0:5A34
cs=0x28f0;eip=0x005a36; 	X(POP(bp));	// 99605 pop     bp ;~ 28F0:5A36
cs=0x28f0;eip=0x005a37; 	R(RETN(4));	// 99606 retn    4 ;~ 28F0:5A37
sub_3cf1a:
	// 99614 
#undef var_5a
#define var_5a -0x5A
	// 99616 var_5A          = dword ptr -5Ah ;~ 28F0:5A3A
#undef var_56
#define var_56 -0x56
	// 99617 var_56          = dword ptr -56h ;~ 28F0:5A3A
#undef var_52
#define var_52 -0x52
	// 99618 var_52          = dword ptr -52h ;~ 28F0:5A3A
#undef var_4e
#define var_4e -0x4E
	// 99619 var_4E          = word ptr -4Eh ;~ 28F0:5A3A
#undef var_4c
#define var_4c -0x4C
	// 99620 var_4C          = word ptr -4Ch ;~ 28F0:5A3A
#undef var_1a
#define var_1a -0x1A
	// 99621 var_1A          = word ptr -1Ah ;~ 28F0:5A3A
#undef var_18
#define var_18 -0x18
	// 99622 var_18          = byte ptr -18h ;~ 28F0:5A3A
#undef var_c
#define var_c -0x0C
	// 99623 var_C           = byte ptr -0Ch ;~ 28F0:5A3A
#undef var_8
#define var_8 -8
	// 99624 var_8           = word ptr -8 ;~ 28F0:5A3A
#undef var_6
#define var_6 -6
	// 99625 var_6           = word ptr -6 ;~ 28F0:5A3A
#undef arg_0
#define arg_0 4
	// 99626 arg_0           = dword ptr  4 ;~ 28F0:5A3A
cs=0x28f0;eip=0x005a3a; 	X(PUSH(bp));	// 99628 push    bp ;~ 28F0:5A3A
cs=0x28f0;eip=0x005a3b; 	T(MOV(bp, sp));	// 99629 mov     bp, sp ;~ 28F0:5A3B
cs=0x28f0;eip=0x005a3d; 	T(SUB(sp, 0x5A));	// 99630 sub     sp, 5Ah ;~ 28F0:5A3D
cs=0x28f0;eip=0x005a40; 	X(PUSH(di));	// 99631 push    di ;~ 28F0:5A40
cs=0x28f0;eip=0x005a41; 	X(PUSH(si));	// 99632 push    si ;~ 28F0:5A41
cs=0x28f0;eip=0x005a42; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99633 les     bx, [bp+arg_0] ;~ 28F0:5A42
cs=0x28f0;eip=0x005a45; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x31C))));	// 99634 mov     ax, es:[bx+31Ch] ;~ 28F0:5A45
cs=0x28f0;eip=0x005a4a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x31E))));	// 99635 mov     dx, es:[bx+31Eh] ;~ 28F0:5A4A
cs=0x28f0;eip=0x005a4f; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_52))), ax));	// 99636 mov     word ptr [bp+var_52], ax ;~ 28F0:5A4F
cs=0x28f0;eip=0x005a52; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_52+2))), dx));	// 99637 mov     word ptr [bp+var_52+2], dx ;~ 28F0:5A52
cs=0x28f0;eip=0x005a55; 	T(ADD(ax, 6));	// 99638 add     ax, 6 ;~ 28F0:5A55
cs=0x28f0;eip=0x005a58; 	T(di = bp+var_18);	// 99639 lea     di, [bp+var_18] ;~ 28F0:5A58
cs=0x28f0;eip=0x005a5b; 	T(MOV(si, ax));	// 99640 mov     si, ax ;~ 28F0:5A5B
cs=0x28f0;eip=0x005a5d; 	X(PUSH(ss));	// 99641 push    ss ;~ 28F0:5A5D
cs=0x28f0;eip=0x005a5e; 	X(POP(es));	// 99642 pop     es ;~ 28F0:5A5E
cs=0x28f0;eip=0x005a5f; 	X(PUSH(ds));	// 99643 push    ds ;~ 28F0:5A5F
cs=0x28f0;eip=0x005a60; 	T(MOV(ds, dx));	// 99644 mov     ds, dx ;~ 28F0:5A60
cs=0x28f0;eip=0x005a62; 	T(MOV(cx, 6));	// 99645 mov     cx, 6 ;~ 28F0:5A62
	// 99646 repne movsw ;~ 28F0:5A65
cs=0x28f0;eip=0x005a65; 	X(	REPNE MOVSW);	// 99646 repne movsw ;~ 28F0:5A65
cs=0x28f0;eip=0x005a67; 	X(POP(ds));	// 99647 pop     ds ;~ 28F0:5A67
cs=0x28f0;eip=0x005a68; 	T(MOV(es, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 99648 mov     es, word ptr [bp+arg_0+2] ;~ 28F0:5A68
cs=0x28f0;eip=0x005a6b; 	X(MOV(*(dw*)(raddr(es,bx+0x320)), 0));	// 99649 mov     word ptr es:[bx+320h], 0 ;~ 28F0:5A6B
cs=0x28f0;eip=0x005a72; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_52))));	// 99650 les     bx, [bp+var_52] ;~ 28F0:5A72
cs=0x28f0;eip=0x005a75; 	T(CMP(*(dw*)(raddr(es,bx+0x0C)), 0));	// 99651 cmp     word ptr es:[bx+0Ch], 0 ;~ 28F0:5A75
cs=0x28f0;eip=0x005a7a; 	R(JGE(loc_3cf5f));	// 99652 jge     short loc_3CF5F ;~ 28F0:5A7A
cs=0x28f0;eip=0x005a7c; 	R(JMP(loc_3d1dc));	// 99653 jmp     loc_3D1DC ;~ 28F0:5A7C
loc_3cf5f:
	// 10746 
cs=0x28f0;eip=0x005a7f; 	X(PUSH(bx));	// 99657 push    bx ;~ 28F0:5A7F
cs=0x28f0;eip=0x005a80; 	T(ax = bp+var_18);	// 99658 lea     ax, [bp+var_18] ;~ 28F0:5A80
cs=0x28f0;eip=0x005a83; 	X(PUSH(ss));	// 99659 push    ss ;~ 28F0:5A83
cs=0x28f0;eip=0x005a84; 	X(PUSH(ax));	// 99660 push    ax ;~ 28F0:5A84
cs=0x28f0;eip=0x005a85; 	T(MOV(ax, bx));	// 99661 mov     ax, bx ;~ 28F0:5A85
cs=0x28f0;eip=0x005a87; 	T(ADD(ax, 6));	// 99662 add     ax, 6 ;~ 28F0:5A87
cs=0x28f0;eip=0x005a8a; 	X(PUSH(dx));	// 99663 push    dx ;~ 28F0:5A8A
cs=0x28f0;eip=0x005a8b; 	X(PUSH(ax));	// 99664 push    ax ;~ 28F0:5A8B
cs=0x28f0;eip=0x005a8c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99665 les     bx, [bp+arg_0] ;~ 28F0:5A8C
cs=0x28f0;eip=0x005a8f; 	X(PUSH(*(dw*)(raddr(es,bx+0x304))));	// 99666 push    word ptr es:[bx+304h] ;~ 28F0:5A8F
cs=0x28f0;eip=0x005a94; 	X(PUSH(*(dw*)(raddr(es,bx+0x302))));	// 99667 push    word ptr es:[bx+302h] ;~ 28F0:5A94
cs=0x28f0;eip=0x005a99; 	T(ax = bp+var_c);	// 99668 lea     ax, [bp+var_C] ;~ 28F0:5A99
cs=0x28f0;eip=0x005a9c; 	X(PUSH(ax));	// 99669 push    ax ;~ 28F0:5A9C
cs=0x28f0;eip=0x005a9d; 	T(MOV(ax, 0x100));	// 99670 mov     ax, 100h ;~ 28F0:5A9D
cs=0x28f0;eip=0x005aa0; 	X(PUSH(ax));	// 99671 push    ax ;~ 28F0:5AA0
cs=0x28f0;eip=0x005aa1; 	T(SUB(ax, ax));	// 99672 sub     ax, ax ;~ 28F0:5AA1
cs=0x28f0;eip=0x005aa3; 	X(PUSH(ax));	// 99673 push    ax ;~ 28F0:5AA3
cs=0x28f0;eip=0x005aa4; 	T(MOV(ax, 1));	// 99674 mov     ax, 1 ;~ 28F0:5AA4
cs=0x28f0;eip=0x005aa7; 	X(PUSH(ax));	// 99675 push    ax ;~ 28F0:5AA7
cs=0x28f0;eip=0x005aa8; 	T(SUB(ax, ax));	// 99676 sub     ax, ax ;~ 28F0:5AA8
cs=0x28f0;eip=0x005aaa; 	X(PUSH(ax));	// 99677 push    ax ;~ 28F0:5AAA
cs=0x28f0;eip=0x005aab; 	X(PUSH(ax));	// 99678 push    ax ;~ 28F0:5AAB
cs=0x28f0;eip=0x005aac; 	R(CALLF(sub_35cf4,0));	// 99679 call    sub_35CF4 ;~ 28F0:5AAC
cs=0x28f0;eip=0x005ab1; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 99680 mov     [bp+var_1A], ax ;~ 28F0:5AB1
cs=0x28f0;eip=0x005ab4; 	T(OR(ax, ax));	// 99681 or      ax, ax ;~ 28F0:5AB4
cs=0x28f0;eip=0x005ab6; 	R(JNZ(loc_3cf9b));	// 99682 jnz     short loc_3CF9B ;~ 28F0:5AB6
cs=0x28f0;eip=0x005ab8; 	R(JMP(loc_3d1c1));	// 99683 jmp     loc_3D1C1 ;~ 28F0:5AB8
loc_3cf9b:
	// 10747 
cs=0x28f0;eip=0x005abb; 	T(CMP(ax, 0x0FFFF));	// 99687 cmp     ax, 0FFFFh ;~ 28F0:5ABB
cs=0x28f0;eip=0x005abe; 	R(JNZ(loc_3cfa3));	// 99688 jnz     short loc_3CFA3 ;~ 28F0:5ABE
cs=0x28f0;eip=0x005ac0; 	R(JMP(loc_3d1c1));	// 99689 jmp     loc_3D1C1 ;~ 28F0:5AC0
loc_3cfa3:
	// 10748 
cs=0x28f0;eip=0x005ac3; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 99693 mov     dx, word ptr unk_47A9A ;~ 28F0:5AC3
cs=0x28f0;eip=0x005ac7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56))), ax));	// 99694 mov     word ptr [bp+var_56], ax ;~ 28F0:5AC7
cs=0x28f0;eip=0x005aca; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56+2))), dx));	// 99695 mov     word ptr [bp+var_56+2], dx ;~ 28F0:5ACA
cs=0x28f0;eip=0x005acd; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_56))));	// 99696 les     bx, [bp+var_56] ;~ 28F0:5ACD
cs=0x28f0;eip=0x005ad0; 	T(MOV(bx, *(dw*)(raddr(es,bx))));	// 99697 mov     bx, es:[bx] ;~ 28F0:5AD0
cs=0x28f0;eip=0x005ad3; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x38))));	// 99698 mov     ax, [bx+38h] ;~ 28F0:5AD3
cs=0x28f0;eip=0x005ad6; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x3A))));	// 99699 mov     dx, [bx+3Ah] ;~ 28F0:5AD6
cs=0x28f0;eip=0x005ad9; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_56)))));	// 99700 mov     bx, word ptr [bp+var_56] ;~ 28F0:5AD9
cs=0x28f0;eip=0x005adc; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x0A))));	// 99701 add     ax, es:[bx+0Ah] ;~ 28F0:5ADC
cs=0x28f0;eip=0x005ae0; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x0C))));	// 99702 adc     dx, es:[bx+0Ch] ;~ 28F0:5AE0
cs=0x28f0;eip=0x005ae4; 	X(MOV(*(dw*)(raddr(ss,bp+var_4e)), ax));	// 99703 mov     [bp+var_4E], ax ;~ 28F0:5AE4
cs=0x28f0;eip=0x005ae7; 	X(MOV(*(dw*)(raddr(ss,bp+var_4c)), dx));	// 99704 mov     [bp+var_4C], dx ;~ 28F0:5AE7
cs=0x28f0;eip=0x005aea; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99705 les     bx, [bp+arg_0] ;~ 28F0:5AEA
cs=0x28f0;eip=0x005aed; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x302))));	// 99706 mov     ax, es:[bx+302h] ;~ 28F0:5AED
cs=0x28f0;eip=0x005af2; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x304))));	// 99707 mov     dx, es:[bx+304h] ;~ 28F0:5AF2
cs=0x28f0;eip=0x005af7; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 99708 add     ax, es:[bx+20Eh] ;~ 28F0:5AF7
cs=0x28f0;eip=0x005afc; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 99709 adc     dx, es:[bx+210h] ;~ 28F0:5AFC
cs=0x28f0;eip=0x005b01; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4e))));	// 99710 add     ax, [bp+var_4E] ;~ 28F0:5B01
cs=0x28f0;eip=0x005b04; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_4c))));	// 99711 adc     dx, [bp+var_4C] ;~ 28F0:5B04
cs=0x28f0;eip=0x005b07; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_52))));	// 99712 les     bx, [bp+var_52] ;~ 28F0:5B07
cs=0x28f0;eip=0x005b0a; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 99713 cmp     dx, es:[bx+0Ch] ;~ 28F0:5B0A
cs=0x28f0;eip=0x005b0e; 	R(JGE(loc_3cff3));	// 99714 jge     short loc_3CFF3 ;~ 28F0:5B0E
cs=0x28f0;eip=0x005b10; 	R(JMP(loc_3d18c));	// 99715 jmp     loc_3D18C ;~ 28F0:5B10
loc_3cff3:
	// 10749 
cs=0x28f0;eip=0x005b13; 	R(JG(loc_3cffe));	// 99719 jg      short loc_3CFFE ;~ 28F0:5B13
cs=0x28f0;eip=0x005b15; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 99720 cmp     ax, es:[bx+0Ah] ;~ 28F0:5B15
cs=0x28f0;eip=0x005b19; 	R(JNC(loc_3cffe));	// 99721 jnb     short loc_3CFFE ;~ 28F0:5B19
cs=0x28f0;eip=0x005b1b; 	R(JMP(loc_3d18c));	// 99722 jmp     loc_3D18C ;~ 28F0:5B1B
loc_3cffe:
	// 10750 
cs=0x28f0;eip=0x005b1e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_56))));	// 99727 les     bx, [bp+var_56] ;~ 28F0:5B1E
cs=0x28f0;eip=0x005b21; 	T(TEST(*(dw*)(raddr(es,bx+2)), 0x8000));	// 99728 test    word ptr es:[bx+2], 8000h ;~ 28F0:5B21
cs=0x28f0;eip=0x005b27; 	R(JNZ(loc_3d00c));	// 99729 jnz     short loc_3D00C ;~ 28F0:5B27
cs=0x28f0;eip=0x005b29; 	R(JMP(loc_3d18c));	// 99730 jmp     loc_3D18C ;~ 28F0:5B29
loc_3d00c:
	// 10751 
cs=0x28f0;eip=0x005b2c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 99734 push    word ptr [bp+arg_0+2] ;~ 28F0:5B2C
cs=0x28f0;eip=0x005b2f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 99735 push    word ptr [bp+arg_0] ;~ 28F0:5B2F
cs=0x28f0;eip=0x005b32; 	R(CALL(sub_37a1a,0));	// 99736 call    sub_37A1A ;~ 28F0:5B32
cs=0x28f0;eip=0x005b35; 	T(OR(ax, ax));	// 99737 or      ax, ax ;~ 28F0:5B35
cs=0x28f0;eip=0x005b37; 	R(JZ(loc_3d01c));	// 99738 jz      short loc_3D01C ;~ 28F0:5B37
cs=0x28f0;eip=0x005b39; 	R(JMP(loc_3d137));	// 99739 jmp     loc_3D137 ;~ 28F0:5B39
loc_3d01c:
	// 10752 
cs=0x28f0;eip=0x005b3c; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 99743 mov     dx, word ptr unk_47A9A ;~ 28F0:5B3C
cs=0x28f0;eip=0x005b40; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 99744 mov     ax, [bp+var_1A] ;~ 28F0:5B40
cs=0x28f0;eip=0x005b43; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_5a))), ax));	// 99745 mov     word ptr [bp+var_5A], ax ;~ 28F0:5B43
cs=0x28f0;eip=0x005b46; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_5a+2))), dx));	// 99746 mov     word ptr [bp+var_5A+2], dx ;~ 28F0:5B46
cs=0x28f0;eip=0x005b49; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_5a))));	// 99747 les     bx, [bp+var_5A] ;~ 28F0:5B49
cs=0x28f0;eip=0x005b4c; 	T(MOV(si, *(dw*)(raddr(es,bx))));	// 99748 mov     si, es:[bx] ;~ 28F0:5B4C
cs=0x28f0;eip=0x005b4f; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 99749 mov     ax, es:[bx+6] ;~ 28F0:5B4F
cs=0x28f0;eip=0x005b53; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 99750 mov     dx, es:[bx+8] ;~ 28F0:5B53
cs=0x28f0;eip=0x005b57; 	T(ADD(ax, *(dw*)(raddr(ds,si+0x2C))));	// 99751 add     ax, [si+2Ch] ;~ 28F0:5B57
cs=0x28f0;eip=0x005b5a; 	T(ADC(dx, *(dw*)(raddr(ds,si+0x2E))));	// 99752 adc     dx, [si+2Eh] ;~ 28F0:5B5A
cs=0x28f0;eip=0x005b5d; 	T(ADD(ax, 0x0A00));	// 99753 add     ax, 0A00h ;~ 28F0:5B5D
cs=0x28f0;eip=0x005b60; 	T(ADC(dx, 0));	// 99754 adc     dx, 0 ;~ 28F0:5B60
cs=0x28f0;eip=0x005b63; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_52))));	// 99755 les     bx, [bp+var_52] ;~ 28F0:5B63
cs=0x28f0;eip=0x005b66; 	T(CMP(dx, *(dw*)(raddr(es,bx+8))));	// 99756 cmp     dx, es:[bx+8] ;~ 28F0:5B66
cs=0x28f0;eip=0x005b6a; 	R(JLE(loc_3d04f));	// 99757 jle     short loc_3D04F ;~ 28F0:5B6A
cs=0x28f0;eip=0x005b6c; 	R(JMP(loc_3d137));	// 99758 jmp     loc_3D137 ;~ 28F0:5B6C
loc_3d04f:
	// 10753 
cs=0x28f0;eip=0x005b6f; 	R(JL(loc_3d05a));	// 99762 jl      short loc_3D05A ;~ 28F0:5B6F
cs=0x28f0;eip=0x005b71; 	T(CMP(ax, *(dw*)(raddr(es,bx+6))));	// 99763 cmp     ax, es:[bx+6] ;~ 28F0:5B71
cs=0x28f0;eip=0x005b75; 	R(JBE(loc_3d05a));	// 99764 jbe     short loc_3D05A ;~ 28F0:5B75
cs=0x28f0;eip=0x005b77; 	R(JMP(loc_3d137));	// 99765 jmp     loc_3D137 ;~ 28F0:5B77
loc_3d05a:
	// 10754 
cs=0x28f0;eip=0x005b7a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_5a))));	// 99770 les     bx, [bp+var_5A] ;~ 28F0:5B7A
cs=0x28f0;eip=0x005b7d; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 99771 mov     ax, es:[bx+6] ;~ 28F0:5B7D
cs=0x28f0;eip=0x005b81; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 99772 mov     dx, es:[bx+8] ;~ 28F0:5B81
cs=0x28f0;eip=0x005b85; 	T(ADD(ax, *(dw*)(raddr(ds,si+0x30))));	// 99773 add     ax, [si+30h] ;~ 28F0:5B85
cs=0x28f0;eip=0x005b88; 	T(ADC(dx, *(dw*)(raddr(ds,si+0x32))));	// 99774 adc     dx, [si+32h] ;~ 28F0:5B88
cs=0x28f0;eip=0x005b8b; 	T(SUB(ax, 0x0A00));	// 99775 sub     ax, 0A00h ;~ 28F0:5B8B
cs=0x28f0;eip=0x005b8e; 	T(SBB(dx, 0));	// 99776 sbb     dx, 0 ;~ 28F0:5B8E
cs=0x28f0;eip=0x005b91; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_52))));	// 99777 les     bx, [bp+var_52] ;~ 28F0:5B91
cs=0x28f0;eip=0x005b94; 	T(CMP(dx, *(dw*)(raddr(es,bx+8))));	// 99778 cmp     dx, es:[bx+8] ;~ 28F0:5B94
cs=0x28f0;eip=0x005b98; 	R(JGE(loc_3d07d));	// 99779 jge     short loc_3D07D ;~ 28F0:5B98
cs=0x28f0;eip=0x005b9a; 	R(JMP(loc_3d137));	// 99780 jmp     loc_3D137 ;~ 28F0:5B9A
loc_3d07d:
	// 10755 
cs=0x28f0;eip=0x005b9d; 	R(JG(loc_3d088));	// 99784 jg      short loc_3D088 ;~ 28F0:5B9D
cs=0x28f0;eip=0x005b9f; 	T(CMP(ax, *(dw*)(raddr(es,bx+6))));	// 99785 cmp     ax, es:[bx+6] ;~ 28F0:5B9F
cs=0x28f0;eip=0x005ba3; 	R(JNC(loc_3d088));	// 99786 jnb     short loc_3D088 ;~ 28F0:5BA3
cs=0x28f0;eip=0x005ba5; 	R(JMP(loc_3d137));	// 99787 jmp     loc_3D137 ;~ 28F0:5BA5
loc_3d088:
	// 10756 
cs=0x28f0;eip=0x005ba8; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_5a))));	// 99792 les     bx, [bp+var_5A] ;~ 28F0:5BA8
cs=0x28f0;eip=0x005bab; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 99793 mov     ax, es:[bx+0Eh] ;~ 28F0:5BAB
cs=0x28f0;eip=0x005baf; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x10))));	// 99794 mov     dx, es:[bx+10h] ;~ 28F0:5BAF
cs=0x28f0;eip=0x005bb3; 	T(ADD(ax, *(dw*)(raddr(ds,si+0x3C))));	// 99795 add     ax, [si+3Ch] ;~ 28F0:5BB3
cs=0x28f0;eip=0x005bb6; 	T(ADC(dx, *(dw*)(raddr(ds,si+0x3E))));	// 99796 adc     dx, [si+3Eh] ;~ 28F0:5BB6
cs=0x28f0;eip=0x005bb9; 	T(ADD(ax, 0x0A00));	// 99797 add     ax, 0A00h ;~ 28F0:5BB9
cs=0x28f0;eip=0x005bbc; 	T(ADC(dx, 0));	// 99798 adc     dx, 0 ;~ 28F0:5BBC
cs=0x28f0;eip=0x005bbf; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_52))));	// 99799 les     bx, [bp+var_52] ;~ 28F0:5BBF
cs=0x28f0;eip=0x005bc2; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x10))));	// 99800 cmp     dx, es:[bx+10h] ;~ 28F0:5BC2
cs=0x28f0;eip=0x005bc6; 	R(JLE(loc_3d0ab));	// 99801 jle     short loc_3D0AB ;~ 28F0:5BC6
cs=0x28f0;eip=0x005bc8; 	R(JMP(loc_3d137));	// 99802 jmp     loc_3D137 ;~ 28F0:5BC8
loc_3d0ab:
	// 10757 
cs=0x28f0;eip=0x005bcb; 	R(JL(loc_3d0b6));	// 99806 jl      short loc_3D0B6 ;~ 28F0:5BCB
cs=0x28f0;eip=0x005bcd; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0E))));	// 99807 cmp     ax, es:[bx+0Eh] ;~ 28F0:5BCD
cs=0x28f0;eip=0x005bd1; 	R(JBE(loc_3d0b6));	// 99808 jbe     short loc_3D0B6 ;~ 28F0:5BD1
cs=0x28f0;eip=0x005bd3; 	R(JMP(loc_3d137));	// 99809 jmp     loc_3D137 ;~ 28F0:5BD3
loc_3d0b6:
	// 10758 
cs=0x28f0;eip=0x005bd6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_5a))));	// 99814 les     bx, [bp+var_5A] ;~ 28F0:5BD6
cs=0x28f0;eip=0x005bd9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 99815 mov     ax, es:[bx+0Eh] ;~ 28F0:5BD9
cs=0x28f0;eip=0x005bdd; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x10))));	// 99816 mov     dx, es:[bx+10h] ;~ 28F0:5BDD
cs=0x28f0;eip=0x005be1; 	T(ADD(ax, *(dw*)(raddr(ds,si+0x40))));	// 99817 add     ax, [si+40h] ;~ 28F0:5BE1
cs=0x28f0;eip=0x005be4; 	T(ADC(dx, *(dw*)(raddr(ds,si+0x42))));	// 99818 adc     dx, [si+42h] ;~ 28F0:5BE4
cs=0x28f0;eip=0x005be7; 	T(SUB(ax, 0x0A00));	// 99819 sub     ax, 0A00h ;~ 28F0:5BE7
cs=0x28f0;eip=0x005bea; 	T(SBB(dx, 0));	// 99820 sbb     dx, 0 ;~ 28F0:5BEA
cs=0x28f0;eip=0x005bed; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_52))));	// 99821 les     bx, [bp+var_52] ;~ 28F0:5BED
cs=0x28f0;eip=0x005bf0; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x10))));	// 99822 cmp     dx, es:[bx+10h] ;~ 28F0:5BF0
cs=0x28f0;eip=0x005bf4; 	R(JL(loc_3d137));	// 99823 jl      short loc_3D137 ;~ 28F0:5BF4
cs=0x28f0;eip=0x005bf6; 	R(JG(loc_3d0de));	// 99824 jg      short loc_3D0DE ;~ 28F0:5BF6
cs=0x28f0;eip=0x005bf8; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0E))));	// 99825 cmp     ax, es:[bx+0Eh] ;~ 28F0:5BF8
cs=0x28f0;eip=0x005bfc; 	R(JC(loc_3d137));	// 99826 jb      short loc_3D137 ;~ 28F0:5BFC
loc_3d0de:
	// 10759 
cs=0x28f0;eip=0x005bfe; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99829 les     bx, [bp+arg_0] ;~ 28F0:5BFE
cs=0x28f0;eip=0x005c01; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x302))));	// 99830 mov     ax, es:[bx+302h] ;~ 28F0:5C01
cs=0x28f0;eip=0x005c06; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x304))));	// 99831 mov     dx, es:[bx+304h] ;~ 28F0:5C06
cs=0x28f0;eip=0x005c0b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4e))));	// 99832 add     ax, [bp+var_4E] ;~ 28F0:5C0B
cs=0x28f0;eip=0x005c0e; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_4c))));	// 99833 adc     dx, [bp+var_4C] ;~ 28F0:5C0E
cs=0x28f0;eip=0x005c11; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_52))));	// 99834 les     bx, [bp+var_52] ;~ 28F0:5C11
cs=0x28f0;eip=0x005c14; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 99835 cmp     dx, es:[bx+0Ch] ;~ 28F0:5C14
cs=0x28f0;eip=0x005c18; 	R(JG(loc_3d10a));	// 99836 jg      short loc_3D10A ;~ 28F0:5C18
cs=0x28f0;eip=0x005c1a; 	R(JL(loc_3d102));	// 99837 jl      short loc_3D102 ;~ 28F0:5C1A
cs=0x28f0;eip=0x005c1c; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 99838 cmp     ax, es:[bx+0Ah] ;~ 28F0:5C1C
cs=0x28f0;eip=0x005c20; 	R(JNC(loc_3d10a));	// 99839 jnb     short loc_3D10A ;~ 28F0:5C20
loc_3d102:
	// 10760 
cs=0x28f0;eip=0x005c22; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 99842 mov     dx, es:[bx+0Ch] ;~ 28F0:5C22
cs=0x28f0;eip=0x005c26; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 99843 mov     ax, es:[bx+0Ah] ;~ 28F0:5C26
loc_3d10a:
	// 10761 
cs=0x28f0;eip=0x005c2a; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 99847 mov     es:[bx+0Ah], ax ;~ 28F0:5C2A
cs=0x28f0;eip=0x005c2e; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 99848 mov     es:[bx+0Ch], dx ;~ 28F0:5C2E
cs=0x28f0;eip=0x005c32; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99849 les     bx, [bp+arg_0] ;~ 28F0:5C32
cs=0x28f0;eip=0x005c35; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 1));	// 99850 cmp     word ptr es:[bx+332h], 1 ;~ 28F0:5C35
cs=0x28f0;eip=0x005c3b; 	R(JNZ(loc_3d120));	// 99851 jnz     short loc_3D120 ;~ 28F0:5C3B
cs=0x28f0;eip=0x005c3d; 	R(JMP(loc_3d1c9));	// 99852 jmp     loc_3D1C9 ;~ 28F0:5C3D
loc_3d120:
	// 10762 
cs=0x28f0;eip=0x005c40; 	X(PUSH(es));	// 99856 push    es ;~ 28F0:5C40
cs=0x28f0;eip=0x005c41; 	X(PUSH(bx));	// 99857 push    bx ;~ 28F0:5C41
cs=0x28f0;eip=0x005c42; 	T(MOV(ax, 1));	// 99858 mov     ax, 1 ;~ 28F0:5C42
cs=0x28f0;eip=0x005c45; 	X(PUSH(ax));	// 99859 push    ax ;~ 28F0:5C45
cs=0x28f0;eip=0x005c46; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_52))));	// 99860 les     bx, [bp+var_52] ;~ 28F0:5C46
cs=0x28f0;eip=0x005c49; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 99861 push    word ptr es:[bx+0Ch] ;~ 28F0:5C49
cs=0x28f0;eip=0x005c4d; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 99862 push    word ptr es:[bx+0Ah] ;~ 28F0:5C4D
cs=0x28f0;eip=0x005c51; 	R(CALL(sub_3842f,0));	// 99863 call    sub_3842F ;~ 28F0:5C51
cs=0x28f0;eip=0x005c54; 	R(JMP(loc_3d1c9));	// 99864 jmp     loc_3D1C9 ;~ 28F0:5C54
loc_3d137:
	// 10763 
cs=0x28f0;eip=0x005c57; 	T(SUB(ax, ax));	// 99869 sub     ax, ax ;~ 28F0:5C57
cs=0x28f0;eip=0x005c59; 	X(MOV(*(dw*)(raddr(ss,bp+var_4c)), ax));	// 99870 mov     [bp+var_4C], ax ;~ 28F0:5C59
cs=0x28f0;eip=0x005c5c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4e)), ax));	// 99871 mov     [bp+var_4E], ax ;~ 28F0:5C5C
cs=0x28f0;eip=0x005c5f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99872 les     bx, [bp+arg_0] ;~ 28F0:5C5F
cs=0x28f0;eip=0x005c62; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x302))));	// 99873 mov     ax, es:[bx+302h] ;~ 28F0:5C62
cs=0x28f0;eip=0x005c67; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x304))));	// 99874 mov     dx, es:[bx+304h] ;~ 28F0:5C67
cs=0x28f0;eip=0x005c6c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_52))));	// 99875 les     bx, [bp+var_52] ;~ 28F0:5C6C
cs=0x28f0;eip=0x005c6f; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 99876 cmp     dx, es:[bx+0Ch] ;~ 28F0:5C6F
cs=0x28f0;eip=0x005c73; 	R(JG(loc_3d165));	// 99877 jg      short loc_3D165 ;~ 28F0:5C73
cs=0x28f0;eip=0x005c75; 	R(JL(loc_3d15d));	// 99878 jl      short loc_3D15D ;~ 28F0:5C75
cs=0x28f0;eip=0x005c77; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 99879 cmp     ax, es:[bx+0Ah] ;~ 28F0:5C77
cs=0x28f0;eip=0x005c7b; 	R(JNC(loc_3d165));	// 99880 jnb     short loc_3D165 ;~ 28F0:5C7B
loc_3d15d:
	// 10764 
cs=0x28f0;eip=0x005c7d; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 99883 mov     dx, es:[bx+0Ch] ;~ 28F0:5C7D
cs=0x28f0;eip=0x005c81; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 99884 mov     ax, es:[bx+0Ah] ;~ 28F0:5C81
loc_3d165:
	// 10765 
cs=0x28f0;eip=0x005c85; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 99888 mov     es:[bx+0Ah], ax ;~ 28F0:5C85
cs=0x28f0;eip=0x005c89; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 99889 mov     es:[bx+0Ch], dx ;~ 28F0:5C89
cs=0x28f0;eip=0x005c8d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 99890 push    word ptr [bp+arg_0+2] ;~ 28F0:5C8D
cs=0x28f0;eip=0x005c90; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 99891 push    word ptr [bp+arg_0] ;~ 28F0:5C90
cs=0x28f0;eip=0x005c93; 	T(MOV(ax, 2));	// 99892 mov     ax, 2 ;~ 28F0:5C93
cs=0x28f0;eip=0x005c96; 	X(PUSH(ax));	// 99893 push    ax ;~ 28F0:5C96
cs=0x28f0;eip=0x005c97; 	X(PUSH(dx));	// 99894 push    dx ;~ 28F0:5C97
cs=0x28f0;eip=0x005c98; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 99895 push    word ptr es:[bx+0Ah] ;~ 28F0:5C98
cs=0x28f0;eip=0x005c9c; 	R(CALL(sub_3842f,0));	// 99896 call    sub_3842F ;~ 28F0:5C9C
loc_3d17f:
	// 10766 
cs=0x28f0;eip=0x005c9f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99899 les     bx, [bp+arg_0] ;~ 28F0:5C9F
cs=0x28f0;eip=0x005ca2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 99900 mov     ax, [bp+var_1A] ;~ 28F0:5CA2
cs=0x28f0;eip=0x005ca5; 	X(MOV(*(dw*)(raddr(es,bx+0x320)), ax));	// 99901 mov     es:[bx+320h], ax ;~ 28F0:5CA5
cs=0x28f0;eip=0x005caa; 	R(JMP(loc_3d1c9));	// 99902 jmp     short loc_3D1C9 ;~ 28F0:5CAA
loc_3d18c:
	// 10767 
cs=0x28f0;eip=0x005cac; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4e))));	// 99907 mov     ax, [bp+var_4E] ;~ 28F0:5CAC
cs=0x28f0;eip=0x005caf; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4c))));	// 99908 mov     dx, [bp+var_4C] ;~ 28F0:5CAF
cs=0x28f0;eip=0x005cb2; 	T(SUB(ax, 0x100));	// 99909 sub     ax, 100h ;~ 28F0:5CB2
cs=0x28f0;eip=0x005cb5; 	T(SBB(dx, 0));	// 99910 sbb     dx, 0 ;~ 28F0:5CB5
cs=0x28f0;eip=0x005cb8; 	T(CMP(dx, *(dw*)(raddr(ss,bp+var_6))));	// 99911 cmp     dx, [bp+var_6] ;~ 28F0:5CB8
cs=0x28f0;eip=0x005cbb; 	R(JG(loc_3d1b7));	// 99912 jg      short loc_3D1B7 ;~ 28F0:5CBB
cs=0x28f0;eip=0x005cbd; 	R(JL(loc_3d1a4));	// 99913 jl      short loc_3D1A4 ;~ 28F0:5CBD
cs=0x28f0;eip=0x005cbf; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_8))));	// 99914 cmp     ax, [bp+var_8] ;~ 28F0:5CBF
cs=0x28f0;eip=0x005cc2; 	R(JA(loc_3d1b7));	// 99915 ja      short loc_3D1B7 ;~ 28F0:5CC2
loc_3d1a4:
	// 10768 
cs=0x28f0;eip=0x005cc4; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 99918 mov     dx, word ptr unk_47A9A ;~ 28F0:5CC4
cs=0x28f0;eip=0x005cc8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 99919 mov     ax, [bp+var_1A] ;~ 28F0:5CC8
cs=0x28f0;eip=0x005ccb; 	T(MOV(es, dx));	// 99920 mov     es, dx ;~ 28F0:5CCB
cs=0x28f0;eip=0x005ccd; 	T(MOV(bx, ax));	// 99922 mov     bx, ax ;~ 28F0:5CCD
cs=0x28f0;eip=0x005ccf; 	T(TEST(*(dw*)(raddr(es,bx+2)), 0x8000));	// 99923 test    word ptr es:[bx+2], 8000h ;~ 28F0:5CCF
cs=0x28f0;eip=0x005cd5; 	R(JNZ(loc_3d1c9));	// 99924 jnz     short loc_3D1C9 ;~ 28F0:5CD5
loc_3d1b7:
	// 10769 
cs=0x28f0;eip=0x005cd7; 	T(SUB(ax, ax));	// 99928 sub     ax, ax ;~ 28F0:5CD7
cs=0x28f0;eip=0x005cd9; 	X(MOV(*(dw*)(raddr(ss,bp+var_4c)), ax));	// 99929 mov     [bp+var_4C], ax ;~ 28F0:5CD9
cs=0x28f0;eip=0x005cdc; 	X(MOV(*(dw*)(raddr(ss,bp+var_4e)), ax));	// 99930 mov     [bp+var_4E], ax ;~ 28F0:5CDC
cs=0x28f0;eip=0x005cdf; 	R(JMP(loc_3d17f));	// 99931 jmp     short loc_3D17F ;~ 28F0:5CDF
loc_3d1c1:
	// 10770 
cs=0x28f0;eip=0x005ce1; 	T(SUB(ax, ax));	// 99936 sub     ax, ax ;~ 28F0:5CE1
cs=0x28f0;eip=0x005ce3; 	X(MOV(*(dw*)(raddr(ss,bp+var_4c)), ax));	// 99937 mov     [bp+var_4C], ax ;~ 28F0:5CE3
cs=0x28f0;eip=0x005ce6; 	X(MOV(*(dw*)(raddr(ss,bp+var_4e)), ax));	// 99938 mov     [bp+var_4E], ax ;~ 28F0:5CE6
loc_3d1c9:
	// 10771 
cs=0x28f0;eip=0x005ce9; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99942 les     bx, [bp+arg_0] ;~ 28F0:5CE9
cs=0x28f0;eip=0x005cec; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4e))));	// 99944 mov     ax, [bp+var_4E] ;~ 28F0:5CEC
cs=0x28f0;eip=0x005cef; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4c))));	// 99945 mov     dx, [bp+var_4C] ;~ 28F0:5CEF
cs=0x28f0;eip=0x005cf2; 	X(MOV(*(dw*)(raddr(es,bx+0x2FA)), ax));	// 99946 mov     es:[bx+2FAh], ax ;~ 28F0:5CF2
cs=0x28f0;eip=0x005cf7; 	X(MOV(*(dw*)(raddr(es,bx+0x2FC)), dx));	// 99947 mov     es:[bx+2FCh], dx ;~ 28F0:5CF7
loc_3d1dc:
	// 10772 
cs=0x28f0;eip=0x005cfc; 	X(POP(si));	// 99950 pop     si ;~ 28F0:5CFC
cs=0x28f0;eip=0x005cfd; 	X(POP(di));	// 99951 pop     di ;~ 28F0:5CFD
cs=0x28f0;eip=0x005cfe; 	T(MOV(sp, bp));	// 99952 mov     sp, bp ;~ 28F0:5CFE
cs=0x28f0;eip=0x005d00; 	X(POP(bp));	// 99953 pop     bp ;~ 28F0:5D00
cs=0x28f0;eip=0x005d01; 	R(RETN(4));	// 99954 retn    4 ;~ 28F0:5D01

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_37514: 	goto loc_37514;
        case m2c::kloc_37544: 	goto loc_37544;
        case m2c::kloc_3756a: 	goto loc_3756a;
        case m2c::kloc_375bb: 	goto loc_375bb;
        case m2c::kloc_375cb: 	goto loc_375cb;
        case m2c::kloc_375d8: 	goto loc_375d8;
        case m2c::kloc_375e7: 	goto loc_375e7;
        case m2c::kloc_375f6: 	goto loc_375f6;
        case m2c::kloc_3761a: 	goto loc_3761a;
        case m2c::kloc_37625: 	goto loc_37625;
        case m2c::kloc_376d6: 	goto loc_376d6;
        case m2c::kloc_376f7: 	goto loc_376f7;
        case m2c::kloc_37700: 	goto loc_37700;
        case m2c::kloc_37747: 	goto loc_37747;
        case m2c::kloc_37751: 	goto loc_37751;
        case m2c::kloc_3775e: 	goto loc_3775e;
        case m2c::kloc_37778: 	goto loc_37778;
        case m2c::kloc_37784: 	goto loc_37784;
        case m2c::kloc_377d5: 	goto loc_377d5;
        case m2c::kloc_377df: 	goto loc_377df;
        case m2c::kloc_377ec: 	goto loc_377ec;
        case m2c::kloc_37806: 	goto loc_37806;
        case m2c::kloc_37812: 	goto loc_37812;
        case m2c::kloc_3784b: 	goto loc_3784b;
        case m2c::kloc_37857: 	goto loc_37857;
        case m2c::kloc_37887: 	goto loc_37887;
        case m2c::kloc_378a3: 	goto loc_378a3;
        case m2c::kloc_378ba: 	goto loc_378ba;
        case m2c::kloc_378e3: 	goto loc_378e3;
        case m2c::kloc_378fd: 	goto loc_378fd;
        case m2c::kloc_3793f: 	goto loc_3793f;
        case m2c::kloc_3794d: 	goto loc_3794d;
        case m2c::kloc_37979: 	goto loc_37979;
        case m2c::kloc_37981: 	goto loc_37981;
        case m2c::kloc_3798c: 	goto loc_3798c;
        case m2c::kloc_379b8: 	goto loc_379b8;
        case m2c::kloc_379c2: 	goto loc_379c2;
        case m2c::kloc_379f0: 	goto loc_379f0;
        case m2c::kloc_37a17: 	goto loc_37a17;
        case m2c::kloc_37a24: 	goto loc_37a24;
        case m2c::kloc_37a29: 	goto loc_37a29;
        case m2c::kloc_37a37: 	goto loc_37a37;
        case m2c::kloc_37a42: 	goto loc_37a42;
        case m2c::kloc_37a48: 	goto loc_37a48;
        case m2c::kloc_37a60: 	goto loc_37a60;
        case m2c::kloc_37a7c: 	goto loc_37a7c;
        case m2c::kloc_37a94: 	goto loc_37a94;
        case m2c::kloc_37ab0: 	goto loc_37ab0;
        case m2c::kloc_37ac8: 	goto loc_37ac8;
        case m2c::kloc_37ae1: 	goto loc_37ae1;
        case m2c::kloc_37aea: 	goto loc_37aea;
        case m2c::kloc_37b02: 	goto loc_37b02;
        case m2c::kloc_37b1b: 	goto loc_37b1b;
        case m2c::kloc_37b24: 	goto loc_37b24;
        case m2c::kloc_37b44: 	goto loc_37b44;
        case m2c::kloc_37b5d: 	goto loc_37b5d;
        case m2c::kloc_37b66: 	goto loc_37b66;
        case m2c::kloc_37b7c: 	goto loc_37b7c;
        case m2c::kloc_37b91: 	goto loc_37b91;
        case m2c::kloc_37baa: 	goto loc_37baa;
        case m2c::kloc_37baf: 	goto loc_37baf;
        case m2c::kloc_37bb6: 	goto loc_37bb6;
        case m2c::kloc_37bb9: 	goto loc_37bb9;
        case m2c::kloc_37beb: 	goto loc_37beb;
        case m2c::kloc_37bf1: 	goto loc_37bf1;
        case m2c::kloc_37bfb: 	goto loc_37bfb;
        case m2c::kloc_37c00: 	goto loc_37c00;
        case m2c::kloc_37c02: 	goto loc_37c02;
        case m2c::kloc_37c4b: 	goto loc_37c4b;
        case m2c::kloc_37c56: 	goto loc_37c56;
        case m2c::kloc_37c86: 	goto loc_37c86;
        case m2c::kloc_37c8e: 	goto loc_37c8e;
        case m2c::kloc_37cb5: 	goto loc_37cb5;
        case m2c::kloc_37cc2: 	goto loc_37cc2;
        case m2c::kloc_37d14: 	goto loc_37d14;
        case m2c::kloc_37d2f: 	goto loc_37d2f;
        case m2c::kloc_37d3d: 	goto loc_37d3d;
        case m2c::kloc_37d51: 	goto loc_37d51;
        case m2c::kloc_37d5f: 	goto loc_37d5f;
        case m2c::kloc_37d77: 	goto loc_37d77;
        case m2c::kloc_37d96: 	goto loc_37d96;
        case m2c::kloc_37dc3: 	goto loc_37dc3;
        case m2c::kloc_37dd4: 	goto loc_37dd4;
        case m2c::kloc_37dec: 	goto loc_37dec;
        case m2c::kloc_37e1b: 	goto loc_37e1b;
        case m2c::kloc_37e21: 	goto loc_37e21;
        case m2c::kloc_37e42: 	goto loc_37e42;
        case m2c::kloc_37e4d: 	goto loc_37e4d;
        case m2c::kloc_37e79: 	goto loc_37e79;
        case m2c::kloc_37e84: 	goto loc_37e84;
        case m2c::kloc_37eae: 	goto loc_37eae;
        case m2c::kloc_37eb6: 	goto loc_37eb6;
        case m2c::kloc_37efa: 	goto loc_37efa;
        case m2c::kloc_37f67: 	goto loc_37f67;
        case m2c::kloc_37f6f: 	goto loc_37f6f;
        case m2c::kloc_37f7d: 	goto loc_37f7d;
        case m2c::kloc_37f9a: 	goto loc_37f9a;
        case m2c::kloc_37fbc: 	goto loc_37fbc;
        case m2c::kloc_37fc5: 	goto loc_37fc5;
        case m2c::kloc_37fde: 	goto loc_37fde;
        case m2c::kloc_37fe4: 	goto loc_37fe4;
        case m2c::kloc_3800a: 	goto loc_3800a;
        case m2c::kloc_3802c: 	goto loc_3802c;
        case m2c::kloc_38051: 	goto loc_38051;
        case m2c::kloc_380a2: 	goto loc_380a2;
        case m2c::kloc_380bb: 	goto loc_380bb;
        case m2c::kloc_380f2: 	goto loc_380f2;
        case m2c::kloc_380fa: 	goto loc_380fa;
        case m2c::kloc_3813e: 	goto loc_3813e;
        case m2c::kloc_381ab: 	goto loc_381ab;
        case m2c::kloc_381b3: 	goto loc_381b3;
        case m2c::kloc_381d4: 	goto loc_381d4;
        case m2c::kloc_381da: 	goto loc_381da;
        case m2c::kloc_381e6: 	goto loc_381e6;
        case m2c::kloc_3820a: 	goto loc_3820a;
        case m2c::kloc_38243: 	goto loc_38243;
        case m2c::kloc_38257: 	goto loc_38257;
        case m2c::kloc_3825c: 	goto loc_3825c;
        case m2c::kloc_38275: 	goto loc_38275;
        case m2c::kloc_38282: 	goto loc_38282;
        case m2c::kloc_3828a: 	goto loc_3828a;
        case m2c::kloc_38292: 	goto loc_38292;
        case m2c::kloc_3829a: 	goto loc_3829a;
        case m2c::kloc_3829d: 	goto loc_3829d;
        case m2c::kloc_382e9: 	goto loc_382e9;
        case m2c::kloc_382ee: 	goto loc_382ee;
        case m2c::kloc_382fa: 	goto loc_382fa;
        case m2c::kloc_38329: 	goto loc_38329;
        case m2c::kloc_3832f: 	goto loc_3832f;
        case m2c::kloc_38356: 	goto loc_38356;
        case m2c::kloc_38374: 	goto loc_38374;
        case m2c::kloc_3837e: 	goto loc_3837e;
        case m2c::kloc_3838a: 	goto loc_3838a;
        case m2c::kloc_383d0: 	goto loc_383d0;
        case m2c::kloc_383d5: 	goto loc_383d5;
        case m2c::kloc_383ef: 	goto loc_383ef;
        case m2c::kloc_383fa: 	goto loc_383fa;
        case m2c::kloc_3842c: 	goto loc_3842c;
        case m2c::kloc_38447: 	goto loc_38447;
        case m2c::kloc_38450: 	goto loc_38450;
        case m2c::kloc_38459: 	goto loc_38459;
        case m2c::kloc_38469: 	goto loc_38469;
        case m2c::kloc_38471: 	goto loc_38471;
        case m2c::kloc_38479: 	goto loc_38479;
        case m2c::kloc_38481: 	goto loc_38481;
        case m2c::kloc_38484: 	goto loc_38484;
        case m2c::kloc_3849b: 	goto loc_3849b;
        case m2c::kloc_38557: 	goto loc_38557;
        case m2c::kloc_3855c: 	goto loc_3855c;
        case m2c::kloc_38562: 	goto loc_38562;
        case m2c::kloc_38590: 	goto loc_38590;
        case m2c::kloc_385bc: 	goto loc_385bc;
        case m2c::kloc_385c7: 	goto loc_385c7;
        case m2c::kloc_385f1: 	goto loc_385f1;
        case m2c::kloc_38615: 	goto loc_38615;
        case m2c::kloc_38657: 	goto loc_38657;
        case m2c::kloc_3866a: 	goto loc_3866a;
        case m2c::kloc_3867a: 	goto loc_3867a;
        case m2c::kloc_3868d: 	goto loc_3868d;
        case m2c::kloc_3869d: 	goto loc_3869d;
        case m2c::kloc_386a9: 	goto loc_386a9;
        case m2c::kloc_386fb: 	goto loc_386fb;
        case m2c::kloc_38709: 	goto loc_38709;
        case m2c::kloc_3871a: 	goto loc_3871a;
        case m2c::kloc_3873e: 	goto loc_3873e;
        case m2c::kloc_38749: 	goto loc_38749;
        case m2c::kloc_38779: 	goto loc_38779;
        case m2c::kloc_38796: 	goto loc_38796;
        case m2c::kloc_3879b: 	goto loc_3879b;
        case m2c::kloc_387f3: 	goto loc_387f3;
        case m2c::kloc_387fd: 	goto loc_387fd;
        case m2c::kloc_3880a: 	goto loc_3880a;
        case m2c::kloc_38818: 	goto loc_38818;
        case m2c::kloc_38845: 	goto loc_38845;
        case m2c::kloc_3886b: 	goto loc_3886b;
        case m2c::kloc_3887b: 	goto loc_3887b;
        case m2c::kloc_38947: 	goto loc_38947;
        case m2c::kloc_38964: 	goto loc_38964;
        case m2c::kloc_38991: 	goto loc_38991;
        case m2c::kloc_3899e: 	goto loc_3899e;
        case m2c::kloc_389c5: 	goto loc_389c5;
        case m2c::kloc_389f5: 	goto loc_389f5;
        case m2c::kloc_38a0f: 	goto loc_38a0f;
        case m2c::kloc_38a24: 	goto loc_38a24;
        case m2c::kloc_38a37: 	goto loc_38a37;
        case m2c::kloc_38a3a: 	goto loc_38a3a;
        case m2c::kloc_38a48: 	goto loc_38a48;
        case m2c::kloc_38a55: 	goto loc_38a55;
        case m2c::kloc_38a6e: 	goto loc_38a6e;
        case m2c::kloc_38a7c: 	goto loc_38a7c;
        case m2c::kloc_38aea: 	goto loc_38aea;
        case m2c::kloc_38b00: 	goto loc_38b00;
        case m2c::kloc_38b18: 	goto loc_38b18;
        case m2c::kloc_38b2b: 	goto loc_38b2b;
        case m2c::kloc_38b32: 	goto loc_38b32;
        case m2c::kloc_38b38: 	goto loc_38b38;
        case m2c::kloc_38b48: 	goto loc_38b48;
        case m2c::kloc_38ba7: 	goto loc_38ba7;
        case m2c::kloc_38bb9: 	goto loc_38bb9;
        case m2c::kloc_38bcb: 	goto loc_38bcb;
        case m2c::kloc_38bdd: 	goto loc_38bdd;
        case m2c::kloc_38bef: 	goto loc_38bef;
        case m2c::kloc_38bff: 	goto loc_38bff;
        case m2c::kloc_38c57: 	goto loc_38c57;
        case m2c::kloc_38d64: 	goto loc_38d64;
        case m2c::kloc_38d9a: 	goto loc_38d9a;
        case m2c::kloc_38e73: 	goto loc_38e73;
        case m2c::kloc_38e7f: 	goto loc_38e7f;
        case m2c::kloc_38e92: 	goto loc_38e92;
        case m2c::kloc_38ead: 	goto loc_38ead;
        case m2c::kloc_38eba: 	goto loc_38eba;
        case m2c::kloc_38ef7: 	goto loc_38ef7;
        case m2c::kloc_38f2b: 	goto loc_38f2b;
        case m2c::kloc_38f38: 	goto loc_38f38;
        case m2c::kloc_38f48: 	goto loc_38f48;
        case m2c::kloc_38fb2: 	goto loc_38fb2;
        case m2c::kloc_38fc7: 	goto loc_38fc7;
        case m2c::kloc_38fd7: 	goto loc_38fd7;
        case m2c::kloc_39039: 	goto loc_39039;
        case m2c::kloc_39057: 	goto loc_39057;
        case m2c::kloc_3907f: 	goto loc_3907f;
        case m2c::kloc_3908a: 	goto loc_3908a;
        case m2c::kloc_3910b: 	goto loc_3910b;
        case m2c::kloc_39147: 	goto loc_39147;
        case m2c::kloc_39154: 	goto loc_39154;
        case m2c::kloc_3919a: 	goto loc_3919a;
        case m2c::kloc_391af: 	goto loc_391af;
        case m2c::kloc_391d9: 	goto loc_391d9;
        case m2c::kloc_391de: 	goto loc_391de;
        case m2c::kloc_39209: 	goto loc_39209;
        case m2c::kloc_39222: 	goto loc_39222;
        case m2c::kloc_39253: 	goto loc_39253;
        case m2c::kloc_39258: 	goto loc_39258;
        case m2c::kloc_39278: 	goto loc_39278;
        case m2c::kloc_39289: 	goto loc_39289;
        case m2c::kloc_392b5: 	goto loc_392b5;
        case m2c::kloc_392c5: 	goto loc_392c5;
        case m2c::kloc_392d3: 	goto loc_392d3;
        case m2c::kloc_3931c: 	goto loc_3931c;
        case m2c::kloc_3934f: 	goto loc_3934f;
        case m2c::kloc_39357: 	goto loc_39357;
        case m2c::kloc_3936a: 	goto loc_3936a;
        case m2c::kloc_39389: 	goto loc_39389;
        case m2c::kloc_39394: 	goto loc_39394;
        case m2c::kloc_393cb: 	goto loc_393cb;
        case m2c::kloc_393fc: 	goto loc_393fc;
        case m2c::kloc_39470: 	goto loc_39470;
        case m2c::kloc_394ae: 	goto loc_394ae;
        case m2c::kloc_394b3: 	goto loc_394b3;
        case m2c::kloc_394b5: 	goto loc_394b5;
        case m2c::kloc_394c7: 	goto loc_394c7;
        case m2c::kloc_394df: 	goto loc_394df;
        case m2c::kloc_394f4: 	goto loc_394f4;
        case m2c::kloc_3951f: 	goto loc_3951f;
        case m2c::kloc_39543: 	goto loc_39543;
        case m2c::kloc_39548: 	goto loc_39548;
        case m2c::kloc_3954a: 	goto loc_3954a;
        case m2c::kloc_3954e: 	goto loc_3954e;
        case m2c::kloc_3956c: 	goto loc_3956c;
        case m2c::kloc_39575: 	goto loc_39575;
        case m2c::kloc_39593: 	goto loc_39593;
        case m2c::kloc_3959c: 	goto loc_3959c;
        case m2c::kloc_395aa: 	goto loc_395aa;
        case m2c::kloc_395b5: 	goto loc_395b5;
        case m2c::kloc_395bd: 	goto loc_395bd;
        case m2c::kloc_395f0: 	goto loc_395f0;
        case m2c::kloc_395f5: 	goto loc_395f5;
        case m2c::kloc_395f7: 	goto loc_395f7;
        case m2c::kloc_39609: 	goto loc_39609;
        case m2c::kloc_39621: 	goto loc_39621;
        case m2c::kloc_39636: 	goto loc_39636;
        case m2c::kloc_39661: 	goto loc_39661;
        case m2c::kloc_39685: 	goto loc_39685;
        case m2c::kloc_3968a: 	goto loc_3968a;
        case m2c::kloc_3968c: 	goto loc_3968c;
        case m2c::kloc_39690: 	goto loc_39690;
        case m2c::kloc_396ae: 	goto loc_396ae;
        case m2c::kloc_39723: 	goto loc_39723;
        case m2c::kloc_39790: 	goto loc_39790;
        case m2c::kloc_3979d: 	goto loc_3979d;
        case m2c::kloc_397b4: 	goto loc_397b4;
        case m2c::kloc_3989b: 	goto loc_3989b;
        case m2c::kloc_3993f: 	goto loc_3993f;
        case m2c::kloc_39949: 	goto loc_39949;
        case m2c::kloc_39965: 	goto loc_39965;
        case m2c::kloc_39972: 	goto loc_39972;
        case m2c::kloc_399af: 	goto loc_399af;
        case m2c::kloc_399b5: 	goto loc_399b5;
        case m2c::kloc_399dd: 	goto loc_399dd;
        case m2c::kloc_39a15: 	goto loc_39a15;
        case m2c::kloc_39a1a: 	goto loc_39a1a;
        case m2c::kloc_39a1c: 	goto loc_39a1c;
        case m2c::kloc_39a20: 	goto loc_39a20;
        case m2c::kloc_39a30: 	goto loc_39a30;
        case m2c::kloc_39a32: 	goto loc_39a32;
        case m2c::kloc_39a4b: 	goto loc_39a4b;
        case m2c::kloc_39a51: 	goto loc_39a51;
        case m2c::kloc_39a64: 	goto loc_39a64;
        case m2c::kloc_39a88: 	goto loc_39a88;
        case m2c::kloc_39a8d: 	goto loc_39a8d;
        case m2c::kloc_39ad2: 	goto loc_39ad2;
        case m2c::kloc_39ad4: 	goto loc_39ad4;
        case m2c::kloc_39ad8: 	goto loc_39ad8;
        case m2c::kloc_39afd: 	goto loc_39afd;
        case m2c::kloc_39b13: 	goto loc_39b13;
        case m2c::kloc_39b2d: 	goto loc_39b2d;
        case m2c::kloc_39b77: 	goto loc_39b77;
        case m2c::kloc_39b97: 	goto loc_39b97;
        case m2c::kloc_39bd7: 	goto loc_39bd7;
        case m2c::kloc_39bf7: 	goto loc_39bf7;
        case m2c::kloc_39c08: 	goto loc_39c08;
        case m2c::kloc_39c40: 	goto loc_39c40;
        case m2c::kloc_39c4b: 	goto loc_39c4b;
        case m2c::kloc_39c5d: 	goto loc_39c5d;
        case m2c::kloc_39c8f: 	goto loc_39c8f;
        case m2c::kloc_39cb7: 	goto loc_39cb7;
        case m2c::kloc_39cbd: 	goto loc_39cbd;
        case m2c::kloc_39cd0: 	goto loc_39cd0;
        case m2c::kloc_39d03: 	goto loc_39d03;
        case m2c::kloc_39d11: 	goto loc_39d11;
        case m2c::kloc_39d36: 	goto loc_39d36;
        case m2c::kloc_39d65: 	goto loc_39d65;
        case m2c::kloc_39d6a: 	goto loc_39d6a;
        case m2c::kloc_39d6c: 	goto loc_39d6c;
        case m2c::kloc_39d8d: 	goto loc_39d8d;
        case m2c::kloc_39d92: 	goto loc_39d92;
        case m2c::kloc_39d94: 	goto loc_39d94;
        case m2c::kloc_39d98: 	goto loc_39d98;
        case m2c::kloc_39da5: 	goto loc_39da5;
        case m2c::kloc_39dd0: 	goto loc_39dd0;
        case m2c::kloc_39dd5: 	goto loc_39dd5;
        case m2c::kloc_39dd7: 	goto loc_39dd7;
        case m2c::kloc_39ddb: 	goto loc_39ddb;
        case m2c::kloc_39deb: 	goto loc_39deb;
        case m2c::kloc_39ded: 	goto loc_39ded;
        case m2c::kloc_39e06: 	goto loc_39e06;
        case m2c::kloc_39e0c: 	goto loc_39e0c;
        case m2c::kloc_39e1f: 	goto loc_39e1f;
        case m2c::kloc_39e29: 	goto loc_39e29;
        case m2c::kloc_39e40: 	goto loc_39e40;
        case m2c::kloc_39e4c: 	goto loc_39e4c;
        case m2c::kloc_39e52: 	goto loc_39e52;
        case m2c::kloc_39e90: 	goto loc_39e90;
        case m2c::kloc_39e95: 	goto loc_39e95;
        case m2c::kloc_39e97: 	goto loc_39e97;
        case m2c::kloc_39e9b: 	goto loc_39e9b;
        case m2c::kloc_39eb5: 	goto loc_39eb5;
        case m2c::kloc_39ed5: 	goto loc_39ed5;
        case m2c::kloc_39edf: 	goto loc_39edf;
        case m2c::kloc_39ee1: 	goto loc_39ee1;
        case m2c::kloc_39ee5: 	goto loc_39ee5;
        case m2c::kloc_39f0a: 	goto loc_39f0a;
        case m2c::kloc_39f20: 	goto loc_39f20;
        case m2c::kloc_39f44: 	goto loc_39f44;
        case m2c::kloc_39f49: 	goto loc_39f49;
        case m2c::kloc_39f4b: 	goto loc_39f4b;
        case m2c::kloc_39f4f: 	goto loc_39f4f;
        case m2c::kloc_39f5c: 	goto loc_39f5c;
        case m2c::kloc_39f80: 	goto loc_39f80;
        case m2c::kloc_39f85: 	goto loc_39f85;
        case m2c::kloc_39f87: 	goto loc_39f87;
        case m2c::kloc_39fa8: 	goto loc_39fa8;
        case m2c::kloc_39fad: 	goto loc_39fad;
        case m2c::kloc_39faf: 	goto loc_39faf;
        case m2c::kloc_39fb3: 	goto loc_39fb3;
        case m2c::kloc_39fc5: 	goto loc_39fc5;
        case m2c::kloc_39fcf: 	goto loc_39fcf;
        case m2c::kloc_39fec: 	goto loc_39fec;
        case m2c::kloc_39ff1: 	goto loc_39ff1;
        case m2c::kloc_39ff3: 	goto loc_39ff3;
        case m2c::kloc_39ffa: 	goto loc_39ffa;
        case m2c::kloc_3a011: 	goto loc_3a011;
        case m2c::kloc_3a04f: 	goto loc_3a04f;
        case m2c::kloc_3a054: 	goto loc_3a054;
        case m2c::kloc_3a056: 	goto loc_3a056;
        case m2c::kloc_3a05a: 	goto loc_3a05a;
        case m2c::kloc_3a07f: 	goto loc_3a07f;
        case m2c::kloc_3a0a3: 	goto loc_3a0a3;
        case m2c::kloc_3a0a8: 	goto loc_3a0a8;
        case m2c::kloc_3a0aa: 	goto loc_3a0aa;
        case m2c::kloc_3a0d3: 	goto loc_3a0d3;
        case m2c::kloc_3a100: 	goto loc_3a100;
        case m2c::kloc_3a105: 	goto loc_3a105;
        case m2c::kloc_3a107: 	goto loc_3a107;
        case m2c::kloc_3a117: 	goto loc_3a117;
        case m2c::kloc_3a15c: 	goto loc_3a15c;
        case m2c::kloc_3a17c: 	goto loc_3a17c;
        case m2c::kloc_3a1b5: 	goto loc_3a1b5;
        case m2c::kloc_3a1d2: 	goto loc_3a1d2;
        case m2c::kloc_3a1dc: 	goto loc_3a1dc;
        case m2c::kloc_3a1e8: 	goto loc_3a1e8;
        case m2c::kloc_3a20f: 	goto loc_3a20f;
        case m2c::kloc_3a21e: 	goto loc_3a21e;
        case m2c::kloc_3a2e7: 	goto loc_3a2e7;
        case m2c::kloc_3a2f5: 	goto loc_3a2f5;
        case m2c::kloc_3a2fa: 	goto loc_3a2fa;
        case m2c::kloc_3a306: 	goto loc_3a306;
        case m2c::kloc_3a30c: 	goto loc_3a30c;
        case m2c::kloc_3a337: 	goto loc_3a337;
        case m2c::kloc_3a341: 	goto loc_3a341;
        case m2c::kloc_3a344: 	goto loc_3a344;
        case m2c::kloc_3a3b9: 	goto loc_3a3b9;
        case m2c::kloc_3a3bc: 	goto loc_3a3bc;
        case m2c::kloc_3a405: 	goto loc_3a405;
        case m2c::kloc_3a40b: 	goto loc_3a40b;
        case m2c::kloc_3a43c: 	goto loc_3a43c;
        case m2c::kloc_3a44f: 	goto loc_3a44f;
        case m2c::kloc_3a457: 	goto loc_3a457;
        case m2c::kloc_3a45a: 	goto loc_3a45a;
        case m2c::kloc_3a4f3: 	goto loc_3a4f3;
        case m2c::kloc_3a4fb: 	goto loc_3a4fb;
        case m2c::kloc_3a4fd: 	goto loc_3a4fd;
        case m2c::kloc_3a538: 	goto loc_3a538;
        case m2c::kloc_3a53e: 	goto loc_3a53e;
        case m2c::kloc_3a575: 	goto loc_3a575;
        case m2c::kloc_3a585: 	goto loc_3a585;
        case m2c::kloc_3a588: 	goto loc_3a588;
        case m2c::kloc_3a61a: 	goto loc_3a61a;
        case m2c::kloc_3a61c: 	goto loc_3a61c;
        case m2c::kloc_3a6be: 	goto loc_3a6be;
        case m2c::kloc_3a6e9: 	goto loc_3a6e9;
        case m2c::kloc_3a6f1: 	goto loc_3a6f1;
        case m2c::kloc_3a6fe: 	goto loc_3a6fe;
        case m2c::kloc_3a709: 	goto loc_3a709;
        case m2c::kloc_3a720: 	goto loc_3a720;
        case m2c::kloc_3a752: 	goto loc_3a752;
        case m2c::kloc_3a756: 	goto loc_3a756;
        case m2c::kloc_3a75b: 	goto loc_3a75b;
        case m2c::kloc_3a763: 	goto loc_3a763;
        case m2c::kloc_3a799: 	goto loc_3a799;
        case m2c::kloc_3a79e: 	goto loc_3a79e;
        case m2c::kloc_3a7d2: 	goto loc_3a7d2;
        case m2c::kloc_3a804: 	goto loc_3a804;
        case m2c::kloc_3a811: 	goto loc_3a811;
        case m2c::kloc_3a83b: 	goto loc_3a83b;
        case m2c::kloc_3a846: 	goto loc_3a846;
        case m2c::kloc_3a871: 	goto loc_3a871;
        case m2c::kloc_3a87e: 	goto loc_3a87e;
        case m2c::kloc_3a91a: 	goto loc_3a91a;
        case m2c::kloc_3a93c: 	goto loc_3a93c;
        case m2c::kloc_3a95d: 	goto loc_3a95d;
        case m2c::kloc_3a9b2: 	goto loc_3a9b2;
        case m2c::kloc_3a9be: 	goto loc_3a9be;
        case m2c::kloc_3aa25: 	goto loc_3aa25;
        case m2c::kloc_3aa30: 	goto loc_3aa30;
        case m2c::kloc_3aa3d: 	goto loc_3aa3d;
        case m2c::kloc_3aa96: 	goto loc_3aa96;
        case m2c::kloc_3ab7a: 	goto loc_3ab7a;
        case m2c::kloc_3ac59: 	goto loc_3ac59;
        case m2c::kloc_3ac69: 	goto loc_3ac69;
        case m2c::kloc_3ad12: 	goto loc_3ad12;
        case m2c::kloc_3ad1d: 	goto loc_3ad1d;
        case m2c::kloc_3ad2a: 	goto loc_3ad2a;
        case m2c::kloc_3adeb: 	goto loc_3adeb;
        case m2c::kloc_3adf3: 	goto loc_3adf3;
        case m2c::kloc_3ae6f: 	goto loc_3ae6f;
        case m2c::kloc_3aedb: 	goto loc_3aedb;
        case m2c::kloc_3aee9: 	goto loc_3aee9;
        case m2c::kloc_3af71: 	goto loc_3af71;
        case m2c::kloc_3afa7: 	goto loc_3afa7;
        case m2c::kloc_3afb2: 	goto loc_3afb2;
        case m2c::kloc_3afc0: 	goto loc_3afc0;
        case m2c::kloc_3aff9: 	goto loc_3aff9;
        case m2c::kloc_3b00d: 	goto loc_3b00d;
        case m2c::kloc_3b061: 	goto loc_3b061;
        case m2c::kloc_3b07c: 	goto loc_3b07c;
        case m2c::kloc_3b0c8: 	goto loc_3b0c8;
        case m2c::kloc_3b0e6: 	goto loc_3b0e6;
        case m2c::kloc_3b285: 	goto loc_3b285;
        case m2c::kloc_3b28f: 	goto loc_3b28f;
        case m2c::kloc_3b2aa: 	goto loc_3b2aa;
        case m2c::kloc_3b2b9: 	goto loc_3b2b9;
        case m2c::kloc_3b2bf: 	goto loc_3b2bf;
        case m2c::kloc_3b49b: 	goto loc_3b49b;
        case m2c::kloc_3b4b4: 	goto loc_3b4b4;
        case m2c::kloc_3b4fc: 	goto loc_3b4fc;
        case m2c::kloc_3b515: 	goto loc_3b515;
        case m2c::kloc_3b57d: 	goto loc_3b57d;
        case m2c::kloc_3b587: 	goto loc_3b587;
        case m2c::kloc_3b5c0: 	goto loc_3b5c0;
        case m2c::kloc_3b5cc: 	goto loc_3b5cc;
        case m2c::kloc_3b5f3: 	goto loc_3b5f3;
        case m2c::kloc_3b602: 	goto loc_3b602;
        case m2c::kloc_3b685: 	goto loc_3b685;
        case m2c::kloc_3b6b9: 	goto loc_3b6b9;
        case m2c::kloc_3b6cb: 	goto loc_3b6cb;
        case m2c::kloc_3b6dd: 	goto loc_3b6dd;
        case m2c::kloc_3b6f5: 	goto loc_3b6f5;
        case m2c::kloc_3b70b: 	goto loc_3b70b;
        case m2c::kloc_3b74f: 	goto loc_3b74f;
        case m2c::kloc_3b76a: 	goto loc_3b76a;
        case m2c::kloc_3b7e0: 	goto loc_3b7e0;
        case m2c::kloc_3b80d: 	goto loc_3b80d;
        case m2c::kloc_3b860: 	goto loc_3b860;
        case m2c::kloc_3b880: 	goto loc_3b880;
        case m2c::kloc_3b884: 	goto loc_3b884;
        case m2c::kloc_3b88a: 	goto loc_3b88a;
        case m2c::kloc_3b89d: 	goto loc_3b89d;
        case m2c::kloc_3b8c2: 	goto loc_3b8c2;
        case m2c::kloc_3b8f3: 	goto loc_3b8f3;
        case m2c::kloc_3b90d: 	goto loc_3b90d;
        case m2c::kloc_3b92f: 	goto loc_3b92f;
        case m2c::kloc_3b94c: 	goto loc_3b94c;
        case m2c::kloc_3b977: 	goto loc_3b977;
        case m2c::kloc_3b99a: 	goto loc_3b99a;
        case m2c::kloc_3b9e5: 	goto loc_3b9e5;
        case m2c::kloc_3ba3e: 	goto loc_3ba3e;
        case m2c::kloc_3ba4a: 	goto loc_3ba4a;
        case m2c::kloc_3ba5e: 	goto loc_3ba5e;
        case m2c::kloc_3ba76: 	goto loc_3ba76;
        case m2c::kloc_3ba86: 	goto loc_3ba86;
        case m2c::kloc_3bab6: 	goto loc_3bab6;
        case m2c::kloc_3babe: 	goto loc_3babe;
        case m2c::kloc_3bad1: 	goto loc_3bad1;
        case m2c::kloc_3bad7: 	goto loc_3bad7;
        case m2c::kloc_3baec: 	goto loc_3baec;
        case m2c::kloc_3bb1e: 	goto loc_3bb1e;
        case m2c::kloc_3bb28: 	goto loc_3bb28;
        case m2c::kloc_3bb3d: 	goto loc_3bb3d;
        case m2c::kloc_3bb45: 	goto loc_3bb45;
        case m2c::kloc_3bb4c: 	goto loc_3bb4c;
        case m2c::kloc_3bb6b: 	goto loc_3bb6b;
        case m2c::kloc_3bb75: 	goto loc_3bb75;
        case m2c::kloc_3bb8a: 	goto loc_3bb8a;
        case m2c::kloc_3bb92: 	goto loc_3bb92;
        case m2c::kloc_3bb99: 	goto loc_3bb99;
        case m2c::kloc_3bbb6: 	goto loc_3bbb6;
        case m2c::kloc_3bbbe: 	goto loc_3bbbe;
        case m2c::kloc_3bbd1: 	goto loc_3bbd1;
        case m2c::kloc_3bbd7: 	goto loc_3bbd7;
        case m2c::kloc_3bbde: 	goto loc_3bbde;
        case m2c::kloc_3bbfc: 	goto loc_3bbfc;
        case m2c::kloc_3bc04: 	goto loc_3bc04;
        case m2c::kloc_3bc18: 	goto loc_3bc18;
        case m2c::kloc_3bc1e: 	goto loc_3bc1e;
        case m2c::kloc_3bc26: 	goto loc_3bc26;
        case m2c::kloc_3bc50: 	goto loc_3bc50;
        case m2c::kloc_3bc73: 	goto loc_3bc73;
        case m2c::kloc_3bc8c: 	goto loc_3bc8c;
        case m2c::kloc_3bc9f: 	goto loc_3bc9f;
        case m2c::kloc_3bcc2: 	goto loc_3bcc2;
        case m2c::kloc_3bcdd: 	goto loc_3bcdd;
        case m2c::kloc_3bd05: 	goto loc_3bd05;
        case m2c::kloc_3bd28: 	goto loc_3bd28;
        case m2c::kloc_3bd41: 	goto loc_3bd41;
        case m2c::kloc_3bd54: 	goto loc_3bd54;
        case m2c::kloc_3bd77: 	goto loc_3bd77;
        case m2c::kloc_3bd92: 	goto loc_3bd92;
        case m2c::kloc_3bdc1: 	goto loc_3bdc1;
        case m2c::kloc_3bde6: 	goto loc_3bde6;
        case m2c::kloc_3bdf9: 	goto loc_3bdf9;
        case m2c::kloc_3be15: 	goto loc_3be15;
        case m2c::kloc_3be1c: 	goto loc_3be1c;
        case m2c::kloc_3be7c: 	goto loc_3be7c;
        case m2c::kloc_3bea1: 	goto loc_3bea1;
        case m2c::kloc_3beb4: 	goto loc_3beb4;
        case m2c::kloc_3bed0: 	goto loc_3bed0;
        case m2c::kloc_3bed7: 	goto loc_3bed7;
        case m2c::kloc_3bf38: 	goto loc_3bf38;
        case m2c::kloc_3bf5b: 	goto loc_3bf5b;
        case m2c::kloc_3bf74: 	goto loc_3bf74;
        case m2c::kloc_3bf87: 	goto loc_3bf87;
        case m2c::kloc_3bfaa: 	goto loc_3bfaa;
        case m2c::kloc_3bfc5: 	goto loc_3bfc5;
        case m2c::kloc_3bff4: 	goto loc_3bff4;
        case m2c::kloc_3c017: 	goto loc_3c017;
        case m2c::kloc_3c030: 	goto loc_3c030;
        case m2c::kloc_3c043: 	goto loc_3c043;
        case m2c::kloc_3c066: 	goto loc_3c066;
        case m2c::kloc_3c081: 	goto loc_3c081;
        case m2c::kloc_3c0a9: 	goto loc_3c0a9;
        case m2c::kloc_3c0cc: 	goto loc_3c0cc;
        case m2c::kloc_3c0e5: 	goto loc_3c0e5;
        case m2c::kloc_3c0f8: 	goto loc_3c0f8;
        case m2c::kloc_3c11b: 	goto loc_3c11b;
        case m2c::kloc_3c136: 	goto loc_3c136;
        case m2c::kloc_3c15e: 	goto loc_3c15e;
        case m2c::kloc_3c17c: 	goto loc_3c17c;
        case m2c::kloc_3c196: 	goto loc_3c196;
        case m2c::kloc_3c1b9: 	goto loc_3c1b9;
        case m2c::kloc_3c1c0: 	goto loc_3c1c0;
        case m2c::kloc_3c219: 	goto loc_3c219;
        case m2c::kloc_3c237: 	goto loc_3c237;
        case m2c::kloc_3c251: 	goto loc_3c251;
        case m2c::kloc_3c274: 	goto loc_3c274;
        case m2c::kloc_3c27b: 	goto loc_3c27b;
        case m2c::kloc_3c2d1: 	goto loc_3c2d1;
        case m2c::kloc_3c2e1: 	goto loc_3c2e1;
        case m2c::kloc_3c2ed: 	goto loc_3c2ed;
        case m2c::kloc_3c302: 	goto loc_3c302;
        case m2c::kloc_3c314: 	goto loc_3c314;
        case m2c::kloc_3c316: 	goto loc_3c316;
        case m2c::kloc_3c3f2: 	goto loc_3c3f2;
        case m2c::kloc_3c3fe: 	goto loc_3c3fe;
        case m2c::kloc_3c5e2: 	goto loc_3c5e2;
        case m2c::kloc_3c63c: 	goto loc_3c63c;
        case m2c::kloc_3c693: 	goto loc_3c693;
        case m2c::kloc_3c6a4: 	goto loc_3c6a4;
        case m2c::kloc_3c6d9: 	goto loc_3c6d9;
        case m2c::kloc_3c71a: 	goto loc_3c71a;
        case m2c::kloc_3c7e5: 	goto loc_3c7e5;
        case m2c::kloc_3c8cf: 	goto loc_3c8cf;
        case m2c::kloc_3c930: 	goto loc_3c930;
        case m2c::kloc_3c960: 	goto loc_3c960;
        case m2c::kloc_3c998: 	goto loc_3c998;
        case m2c::kloc_3c9a3: 	goto loc_3c9a3;
        case m2c::kloc_3c9ca: 	goto loc_3c9ca;
        case m2c::kloc_3c9e3: 	goto loc_3c9e3;
        case m2c::kloc_3ca13: 	goto loc_3ca13;
        case m2c::kloc_3ca18: 	goto loc_3ca18;
        case m2c::kloc_3ca35: 	goto loc_3ca35;
        case m2c::kloc_3ca56: 	goto loc_3ca56;
        case m2c::kloc_3ca5d: 	goto loc_3ca5d;
        case m2c::kloc_3ca8f: 	goto loc_3ca8f;
        case m2c::kloc_3cabf: 	goto loc_3cabf;
        case m2c::kloc_3cb06: 	goto loc_3cb06;
        case m2c::kloc_3cb0e: 	goto loc_3cb0e;
        case m2c::kloc_3cb2c: 	goto loc_3cb2c;
        case m2c::kloc_3cb33: 	goto loc_3cb33;
        case m2c::kloc_3cb49: 	goto loc_3cb49;
        case m2c::kloc_3cb50: 	goto loc_3cb50;
        case m2c::kloc_3cb6e: 	goto loc_3cb6e;
        case m2c::kloc_3cb75: 	goto loc_3cb75;
        case m2c::kloc_3cb8b: 	goto loc_3cb8b;
        case m2c::kloc_3cb92: 	goto loc_3cb92;
        case m2c::kloc_3cc02: 	goto loc_3cc02;
        case m2c::kloc_3cc13: 	goto loc_3cc13;
        case m2c::kloc_3cc65: 	goto loc_3cc65;
        case m2c::kloc_3ccd1: 	goto loc_3ccd1;
        case m2c::kloc_3cd31: 	goto loc_3cd31;
        case m2c::kloc_3cd3a: 	goto loc_3cd3a;
        case m2c::kloc_3cd4e: 	goto loc_3cd4e;
        case m2c::kloc_3cd5a: 	goto loc_3cd5a;
        case m2c::kloc_3cd71: 	goto loc_3cd71;
        case m2c::kloc_3cda9: 	goto loc_3cda9;
        case m2c::kloc_3ce0f: 	goto loc_3ce0f;
        case m2c::kloc_3ce4c: 	goto loc_3ce4c;
        case m2c::kloc_3ce58: 	goto loc_3ce58;
        case m2c::kloc_3ce74: 	goto loc_3ce74;
        case m2c::kloc_3cec9: 	goto loc_3cec9;
        case m2c::kloc_3ced8: 	goto loc_3ced8;
        case m2c::kloc_3cf09: 	goto loc_3cf09;
        case m2c::kloc_3cf0b: 	goto loc_3cf0b;
        case m2c::kloc_3cf13: 	goto loc_3cf13;
        case m2c::kloc_3cf5f: 	goto loc_3cf5f;
        case m2c::kloc_3cf9b: 	goto loc_3cf9b;
        case m2c::kloc_3cfa3: 	goto loc_3cfa3;
        case m2c::kloc_3cff3: 	goto loc_3cff3;
        case m2c::kloc_3cffe: 	goto loc_3cffe;
        case m2c::kloc_3d00c: 	goto loc_3d00c;
        case m2c::kloc_3d01c: 	goto loc_3d01c;
        case m2c::kloc_3d04f: 	goto loc_3d04f;
        case m2c::kloc_3d05a: 	goto loc_3d05a;
        case m2c::kloc_3d07d: 	goto loc_3d07d;
        case m2c::kloc_3d088: 	goto loc_3d088;
        case m2c::kloc_3d0ab: 	goto loc_3d0ab;
        case m2c::kloc_3d0b6: 	goto loc_3d0b6;
        case m2c::kloc_3d0de: 	goto loc_3d0de;
        case m2c::kloc_3d102: 	goto loc_3d102;
        case m2c::kloc_3d10a: 	goto loc_3d10a;
        case m2c::kloc_3d120: 	goto loc_3d120;
        case m2c::kloc_3d137: 	goto loc_3d137;
        case m2c::kloc_3d15d: 	goto loc_3d15d;
        case m2c::kloc_3d165: 	goto loc_3d165;
        case m2c::kloc_3d17f: 	goto loc_3d17f;
        case m2c::kloc_3d18c: 	goto loc_3d18c;
        case m2c::kloc_3d1a4: 	goto loc_3d1a4;
        case m2c::kloc_3d1b7: 	goto loc_3d1b7;
        case m2c::kloc_3d1c1: 	goto loc_3d1c1;
        case m2c::kloc_3d1c9: 	goto loc_3d1c9;
        case m2c::kloc_3d1dc: 	goto loc_3d1dc;
        case m2c::kseg026_proc: 	goto seg026_proc;
        case m2c::ksub_374e6: 	goto sub_374e6;
        case m2c::ksub_37550: 	goto sub_37550;
        case m2c::ksub_376e1: 	goto sub_376e1;
        case m2c::ksub_37a1a: 	goto sub_37a1a;
        case m2c::ksub_37bbd: 	goto sub_37bbd;
        case m2c::ksub_37c08: 	goto sub_37c08;
        case m2c::ksub_37df2: 	goto sub_37df2;
        case m2c::ksub_37e25: 	goto sub_37e25;
        case m2c::ksub_38229: 	goto sub_38229;
        case m2c::ksub_38247: 	goto sub_38247;
        case m2c::ksub_3842f: 	goto sub_3842f;
        case m2c::ksub_3884d: 	goto sub_3884d;
        case m2c::ksub_3887f: 	goto sub_3887f;
        case m2c::ksub_389a2: 	goto sub_389a2;
        case m2c::ksub_389a7: 	goto sub_389a7;
        case m2c::ksub_38b1c: 	goto sub_38b1c;
        case m2c::ksub_38b4f: 	goto sub_38b4f;
        case m2c::ksub_38ca4: 	goto sub_38ca4;
        case m2c::ksub_38eff: 	goto sub_38eff;
        case m2c::ksub_38f8e: 	goto sub_38f8e;
        case m2c::ksub_3901a: 	goto sub_3901a;
        case m2c::ksub_39113: 	goto sub_39113;
        case m2c::ksub_3915a: 	goto sub_3915a;
        case m2c::ksub_39478: 	goto sub_39478;
        case m2c::ksub_3957b: 	goto sub_3957b;
        case m2c::ksub_39729: 	goto sub_39729;
        case m2c::ksub_39765: 	goto sub_39765;
        case m2c::ksub_399d0: 	goto sub_399d0;
        case m2c::ksub_39b7b: 	goto sub_39b7b;
        case m2c::ksub_39bdb: 	goto sub_39bdb;
        case m2c::ksub_39c0c: 	goto sub_39c0c;
        case m2c::ksub_3a22e: 	goto sub_3a22e;
        case m2c::ksub_3a267: 	goto sub_3a267;
        case m2c::ksub_3a2a0: 	goto sub_3a2a0;
        case m2c::ksub_3a3c4: 	goto sub_3a3c4;
        case m2c::ksub_3a505: 	goto sub_3a505;
        case m2c::ksub_3a624: 	goto sub_3a624;
        case m2c::ksub_3a6c6: 	goto sub_3a6c6;
        case m2c::ksub_3a728: 	goto sub_3a728;
        case m2c::ksub_3a769: 	goto sub_3a769;
        case m2c::ksub_3a84e: 	goto sub_3a84e;
        case m2c::ksub_3aa0d: 	goto sub_3aa0d;
        case m2c::ksub_3ab80: 	goto sub_3ab80;
        case m2c::ksub_3af77: 	goto sub_3af77;
        case m2c::ksub_3b0ee: 	goto sub_3b0ee;
        case m2c::ksub_3b26b: 	goto sub_3b26b;
        case m2c::ksub_3b300: 	goto sub_3b300;
        case m2c::ksub_3b44e: 	goto sub_3b44e;
        case m2c::ksub_3b608: 	goto sub_3b608;
        case m2c::ksub_3b97e: 	goto sub_3b97e;
        case m2c::ksub_3b9eb: 	goto sub_3b9eb;
        case m2c::ksub_3ba8c: 	goto sub_3ba8c;
        case m2c::ksub_3bb03: 	goto sub_3bb03;
        case m2c::ksub_3bb9d: 	goto sub_3bb9d;
        case m2c::ksub_3bbe2: 	goto sub_3bbe2;
        case m2c::ksub_3bc2a: 	goto sub_3bc2a;
        case m2c::ksub_3bce6: 	goto sub_3bce6;
        case m2c::ksub_3bd9b: 	goto sub_3bd9b;
        case m2c::ksub_3be56: 	goto sub_3be56;
        case m2c::ksub_3bfce: 	goto sub_3bfce;
        case m2c::ksub_3c08a: 	goto sub_3c08a;
        case m2c::ksub_3c13f: 	goto sub_3c13f;
        case m2c::ksub_3c1fa: 	goto sub_3c1fa;
        case m2c::ksub_3c2b6: 	goto sub_3c2b6;
        case m2c::ksub_3c31a: 	goto sub_3c31a;
        case m2c::ksub_3c3de: 	goto sub_3c3de;
        case m2c::ksub_3c5a1: 	goto sub_3c5a1;
        case m2c::ksub_3c71e: 	goto sub_3c71e;
        case m2c::ksub_3c974: 	goto sub_3c974;
        case m2c::ksub_3cc2d: 	goto sub_3cc2d;
        case m2c::ksub_3ccd7: 	goto sub_3ccd7;
        case m2c::ksub_3cf1a: 	goto sub_3cf1a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

