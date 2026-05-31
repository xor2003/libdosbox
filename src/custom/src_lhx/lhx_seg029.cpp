/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group27(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group27:
    _begin:
sub_3d9b2:
	// 101074 
#undef var_4
#define var_4 -4
	// 101076 var_4           = dword ptr -4 ;~ 2F3D:0002
cs=0x2f3d;eip=0x000002; 	X(PUSH(bp));	// 101078 push    bp ;~ 2F3D:0002
cs=0x2f3d;eip=0x000003; 	T(MOV(bp, sp));	// 101079 mov     bp, sp ;~ 2F3D:0003
cs=0x2f3d;eip=0x000005; 	T(SUB(sp, 0x0A));	// 101080 sub     sp, 0Ah ;~ 2F3D:0005
cs=0x2f3d;eip=0x000008; 	X(PUSH(di));	// 101081 push    di ;~ 2F3D:0008
cs=0x2f3d;eip=0x000009; 	X(PUSH(si));	// 101082 push    si ;~ 2F3D:0009
cs=0x2f3d;eip=0x00000a; 	T(MOV(si, 1));	// 101083 mov     si, 1 ;~ 2F3D:000A
cs=0x2f3d;eip=0x00000d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), offset(seg042,unk_40f50)));	// 101084 mov     word ptr [bp+var_4], offset unk_40F50 ;~ 2F3D:000D
cs=0x2f3d;eip=0x000012; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), seg_offset(seg042)));	// 101085 mov     word ptr [bp+var_4+2], seg seg042 ;~ 2F3D:0012
cs=0x2f3d;eip=0x000017; 	R(JMP(loc_3d9f4));	// 101086 jmp     short loc_3D9F4 ;~ 2F3D:0017
loc_3d9c9:
	// 10834 
cs=0x2f3d;eip=0x000019; 	T(CMP(*(dw*)(raddr(ds,di+0x22)), 0));	// 101090 cmp     word ptr [di+22h], 0 ;~ 2F3D:0019
cs=0x2f3d;eip=0x00001d; 	R(JZ(loc_3d9d5));	// 101091 jz      short loc_3D9D5 ;~ 2F3D:001D
cs=0x2f3d;eip=0x00001f; 	X(PUSH(di));	// 101092 push    di ;~ 2F3D:001F
cs=0x2f3d;eip=0x000020; 	R(CALLF(sub_267b7,0));	// 101093 call    sub_267B7 ;~ 2F3D:0020
loc_3d9d5:
	// 10835 
cs=0x2f3d;eip=0x000025; 	X(PUSH(di));	// 101096 push    di ;~ 2F3D:0025
cs=0x2f3d;eip=0x000026; 	R(CALLF(sub_25033,0));	// 101097 call    far ptr sub_25033 ;~ 2F3D:0026
cs=0x2f3d;eip=0x00002b; 	T(OR(al, al));	// 101098 or      al, al ;~ 2F3D:002B
cs=0x2f3d;eip=0x00002d; 	R(JNZ(loc_3d9e4));	// 101099 jnz     short loc_3D9E4 ;~ 2F3D:002D
cs=0x2f3d;eip=0x00002f; 	R(CALLF(sub_2f82e,0));	// 101100 call    sub_2F82E ;~ 2F3D:002F
loc_3d9e4:
	// 10836 
cs=0x2f3d;eip=0x000034; 	T(CMP(*(dw*)(raddr(ds,di+0x22)), 0));	// 101104 cmp     word ptr [di+22h], 0 ;~ 2F3D:0034
cs=0x2f3d;eip=0x000038; 	R(JZ(loc_3d9f0));	// 101105 jz      short loc_3D9F0 ;~ 2F3D:0038
cs=0x2f3d;eip=0x00003a; 	X(PUSH(di));	// 101106 push    di ;~ 2F3D:003A
cs=0x2f3d;eip=0x00003b; 	R(CALLF(sub_26819,0));	// 101107 call    sub_26819 ;~ 2F3D:003B
loc_3d9f0:
	// 10837 
cs=0x2f3d;eip=0x000040; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_4))), 2));	// 101110 add     word ptr [bp+var_4], 2 ;~ 2F3D:0040
loc_3d9f4:
	// 10838 
cs=0x2f3d;eip=0x000044; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 101113 les     bx, [bp+var_4] ;~ 2F3D:0044
cs=0x2f3d;eip=0x000047; 	T(MOV(di, *(dw*)(raddr(es,bx))));	// 101114 mov     di, es:[bx] ;~ 2F3D:0047
cs=0x2f3d;eip=0x00004a; 	T(OR(di, di));	// 101115 or      di, di ;~ 2F3D:004A
cs=0x2f3d;eip=0x00004c; 	R(JNZ(loc_3d9c9));	// 101116 jnz     short loc_3D9C9 ;~ 2F3D:004C
cs=0x2f3d;eip=0x00004e; 	T(OR(si, si));	// 101117 or      si, si ;~ 2F3D:004E
cs=0x2f3d;eip=0x000050; 	R(JNZ(loc_3da07));	// 101118 jnz     short loc_3DA07 ;~ 2F3D:0050
cs=0x2f3d;eip=0x000052; 	R(CALLF(sub_315c9,0));	// 101119 call    sub_315C9 ;~ 2F3D:0052
loc_3da07:
	// 10839 
cs=0x2f3d;eip=0x000057; 	X(POP(si));	// 101123 pop     si ;~ 2F3D:0057
cs=0x2f3d;eip=0x000058; 	X(POP(di));	// 101124 pop     di ;~ 2F3D:0058
cs=0x2f3d;eip=0x000059; 	T(MOV(sp, bp));	// 101125 mov     sp, bp ;~ 2F3D:0059
cs=0x2f3d;eip=0x00005b; 	X(POP(bp));	// 101126 pop     bp ;~ 2F3D:005B
cs=0x2f3d;eip=0x00005c; 	R(RETF(0));	// 101127 retf ;~ 2F3D:005C
sub_3da0d:
	// 101135 
#undef var_4
#define var_4 -4
	// 101137 var_4           = dword ptr -4 ;~ 2F3D:005D
cs=0x2f3d;eip=0x00005d; 	X(PUSH(bp));	// 101139 push    bp ;~ 2F3D:005D
cs=0x2f3d;eip=0x00005e; 	T(MOV(bp, sp));	// 101140 mov     bp, sp ;~ 2F3D:005E
cs=0x2f3d;eip=0x000060; 	T(SUB(sp, 6));	// 101141 sub     sp, 6 ;~ 2F3D:0060
cs=0x2f3d;eip=0x000063; 	X(PUSH(si));	// 101142 push    si ;~ 2F3D:0063
cs=0x2f3d;eip=0x000064; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), offset(seg042,unk_40f50)));	// 101143 mov     word ptr [bp+var_4], offset unk_40F50 ;~ 2F3D:0064
cs=0x2f3d;eip=0x000069; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), seg_offset(seg042)));	// 101144 mov     word ptr [bp+var_4+2], seg seg042 ;~ 2F3D:0069
cs=0x2f3d;eip=0x00006e; 	R(JMP(loc_3da42));	// 101145 jmp     short loc_3DA42 ;~ 2F3D:006E
loc_3da20:
	// 10840 
cs=0x2f3d;eip=0x000070; 	T(CMP(*(dw*)(raddr(ds,si+0x22)), 0));	// 101149 cmp     word ptr [si+22h], 0 ;~ 2F3D:0070
cs=0x2f3d;eip=0x000074; 	R(JZ(loc_3da2c));	// 101150 jz      short loc_3DA2C ;~ 2F3D:0074
cs=0x2f3d;eip=0x000076; 	X(PUSH(si));	// 101151 push    si ;~ 2F3D:0076
cs=0x2f3d;eip=0x000077; 	R(CALLF(sub_267b7,0));	// 101152 call    sub_267B7 ;~ 2F3D:0077
loc_3da2c:
	// 10841 
cs=0x2f3d;eip=0x00007c; 	X(PUSH(si));	// 101155 push    si ;~ 2F3D:007C
cs=0x2f3d;eip=0x00007d; 	R(CALLF(sub_2636e,0));	// 101156 call    sub_2636E ;~ 2F3D:007D
cs=0x2f3d;eip=0x000082; 	T(CMP(*(dw*)(raddr(ds,si+0x22)), 0));	// 101157 cmp     word ptr [si+22h], 0 ;~ 2F3D:0082
cs=0x2f3d;eip=0x000086; 	R(JZ(loc_3da3e));	// 101158 jz      short loc_3DA3E ;~ 2F3D:0086
cs=0x2f3d;eip=0x000088; 	X(PUSH(si));	// 101159 push    si ;~ 2F3D:0088
cs=0x2f3d;eip=0x000089; 	R(CALLF(sub_26819,0));	// 101160 call    sub_26819 ;~ 2F3D:0089
loc_3da3e:
	// 10842 
cs=0x2f3d;eip=0x00008e; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_4))), 2));	// 101163 add     word ptr [bp+var_4], 2 ;~ 2F3D:008E
loc_3da42:
	// 10843 
cs=0x2f3d;eip=0x000092; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 101166 les     bx, [bp+var_4] ;~ 2F3D:0092
cs=0x2f3d;eip=0x000095; 	T(MOV(si, *(dw*)(raddr(es,bx))));	// 101167 mov     si, es:[bx] ;~ 2F3D:0095
cs=0x2f3d;eip=0x000098; 	T(OR(si, si));	// 101168 or      si, si ;~ 2F3D:0098
cs=0x2f3d;eip=0x00009a; 	R(JNZ(loc_3da20));	// 101169 jnz     short loc_3DA20 ;~ 2F3D:009A
cs=0x2f3d;eip=0x00009c; 	X(POP(si));	// 101170 pop     si ;~ 2F3D:009C
cs=0x2f3d;eip=0x00009d; 	T(MOV(sp, bp));	// 101171 mov     sp, bp ;~ 2F3D:009D
cs=0x2f3d;eip=0x00009f; 	X(POP(bp));	// 101172 pop     bp ;~ 2F3D:009F
cs=0x2f3d;eip=0x0000a0; 	R(RETF(0));	// 101173 retf ;~ 2F3D:00A0
sub_3da51:
	// 101181 
#undef var_4
#define var_4 -4
	// 101183 var_4           = word ptr -4 ;~ 2F3D:00A1
#undef var_2
#define var_2 -2
	// 101184 var_2           = word ptr -2 ;~ 2F3D:00A1
cs=0x2f3d;eip=0x0000a1; 	X(PUSH(bp));	// 101186 push    bp ;~ 2F3D:00A1
cs=0x2f3d;eip=0x0000a2; 	T(MOV(bp, sp));	// 101187 mov     bp, sp ;~ 2F3D:00A2
cs=0x2f3d;eip=0x0000a4; 	T(SUB(sp, 8));	// 101188 sub     sp, 8 ;~ 2F3D:00A4
cs=0x2f3d;eip=0x0000a7; 	X(PUSH(di));	// 101189 push    di ;~ 2F3D:00A7
cs=0x2f3d;eip=0x0000a8; 	X(PUSH(si));	// 101190 push    si ;~ 2F3D:00A8
cs=0x2f3d;eip=0x0000a9; 	T(MOV(al, 8));	// 101191 mov     al, 8 ;~ 2F3D:00A9
cs=0x2f3d;eip=0x0000ab; 	X(MOV(unk_4df3f, al));	// 101192 mov     byte ptr unk_4DF3F, al ;~ 2F3D:00AB
cs=0x2f3d;eip=0x0000ae; 	X(MOV(unk_4df2a, al));	// 101193 mov     byte ptr unk_4DF2A, al ;~ 2F3D:00AE
cs=0x2f3d;eip=0x0000b1; 	X(MOV(unk_4df20, al));	// 101194 mov     byte ptr unk_4DF20, al ;~ 2F3D:00B1
cs=0x2f3d;eip=0x0000b4; 	X(MOV(unk_4df16, al));	// 101195 mov     byte ptr unk_4DF16, al ;~ 2F3D:00B4
cs=0x2f3d;eip=0x0000b7; 	X(MOV(unk_4df0c, al));	// 101196 mov     byte ptr unk_4DF0C, al ;~ 2F3D:00B7
cs=0x2f3d;eip=0x0000ba; 	X(MOV(unk_4df02, al));	// 101197 mov     byte ptr unk_4DF02, al ;~ 2F3D:00BA
cs=0x2f3d;eip=0x0000bd; 	T(MOV(ax, 0x40));	// 101198 mov     ax, 40h ; '@' ;~ 2F3D:00BD
cs=0x2f3d;eip=0x0000c0; 	T(CWD);	// 101199 cwd ;~ 2F3D:00C0
cs=0x2f3d;eip=0x0000c1; 	X(PUSH(dx));	// 101200 push    dx ;~ 2F3D:00C1
cs=0x2f3d;eip=0x0000c2; 	X(PUSH(ax));	// 101201 push    ax ;~ 2F3D:00C2
cs=0x2f3d;eip=0x0000c3; 	X(PUSH(word_5705c));	// 101202 push    word_5705C ;~ 2F3D:00C3
cs=0x2f3d;eip=0x0000c7; 	X(PUSH(word_5705a));	// 101203 push    word_5705A ;~ 2F3D:00C7
cs=0x2f3d;eip=0x0000cb; 	R(CALLF(sub_10526,0));	// 101204 call    sub_10526 ;~ 2F3D:00CB
cs=0x2f3d;eip=0x0000d0; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 101205 mov     [bp+var_4], ax ;~ 2F3D:00D0
cs=0x2f3d;eip=0x0000d3; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 101206 mov     [bp+var_2], dx ;~ 2F3D:00D3
cs=0x2f3d;eip=0x0000d6; 	T(MOV(si, ax));	// 101207 mov     si, ax ;~ 2F3D:00D6
cs=0x2f3d;eip=0x0000d8; 	T(AND(si, 0x0F));	// 101208 and     si, 0Fh ;~ 2F3D:00D8
cs=0x2f3d;eip=0x0000db; 	T(MOV(cl, 4));	// 101209 mov     cl, 4 ;~ 2F3D:00DB
cs=0x2f3d;eip=0x0000dd; 	R(CALLF(sub_10240,0));	// 101210 call    sub_10240 ;~ 2F3D:00DD
cs=0x2f3d;eip=0x0000e2; 	T(MOV(di, ax));	// 101211 mov     di, ax ;~ 2F3D:00E2
cs=0x2f3d;eip=0x0000e4; 	T(AND(di, 3));	// 101212 and     di, 3 ;~ 2F3D:00E4
cs=0x2f3d;eip=0x0000e7; 	R(JNZ(loc_3dabe));	// 101213 jnz     short loc_3DABE ;~ 2F3D:00E7
cs=0x2f3d;eip=0x0000e9; 	X(MOV(unk_4df3f, 0));	// 101214 mov     byte ptr unk_4DF3F, 0 ;~ 2F3D:00E9
cs=0x2f3d;eip=0x0000ee; 	T(CMP(si, 8));	// 101215 cmp     si, 8 ;~ 2F3D:00EE
cs=0x2f3d;eip=0x0000f1; 	R(JGE(loc_3daaa));	// 101216 jge     short loc_3DAAA ;~ 2F3D:00F1
cs=0x2f3d;eip=0x0000f3; 	X(MOV(unk_4df2a, 0));	// 101217 mov     byte ptr unk_4DF2A, 0 ;~ 2F3D:00F3
cs=0x2f3d;eip=0x0000f8; 	R(JMP(loc_3db0f));	// 101218 jmp     short loc_3DB0F ;~ 2F3D:00F8
loc_3daaa:
	// 10844 
cs=0x2f3d;eip=0x0000fa; 	T(TEST(si, 1));	// 101222 test    si, 1 ;~ 2F3D:00FA
cs=0x2f3d;eip=0x0000fe; 	R(JZ(loc_3dab7));	// 101223 jz      short loc_3DAB7 ;~ 2F3D:00FE
cs=0x2f3d;eip=0x000100; 	X(MOV(unk_4df02, 0));	// 101224 mov     byte ptr unk_4DF02, 0 ;~ 2F3D:0100
cs=0x2f3d;eip=0x000105; 	R(JMP(loc_3db0f));	// 101225 jmp     short loc_3DB0F ;~ 2F3D:0105
loc_3dab7:
	// 10845 
cs=0x2f3d;eip=0x000107; 	X(MOV(unk_4df0c, 0));	// 101229 mov     byte ptr unk_4DF0C, 0 ;~ 2F3D:0107
cs=0x2f3d;eip=0x00010c; 	R(JMP(loc_3db0f));	// 101230 jmp     short loc_3DB0F ;~ 2F3D:010C
loc_3dabe:
	// 10846 
cs=0x2f3d;eip=0x00010e; 	T(CMP(di, 2));	// 101234 cmp     di, 2 ;~ 2F3D:010E
cs=0x2f3d;eip=0x000111; 	R(JNZ(loc_3dae8));	// 101235 jnz     short loc_3DAE8 ;~ 2F3D:0111
cs=0x2f3d;eip=0x000113; 	X(MOV(unk_4df2a, 0));	// 101236 mov     byte ptr unk_4DF2A, 0 ;~ 2F3D:0113
cs=0x2f3d;eip=0x000118; 	T(CMP(si, 8));	// 101237 cmp     si, 8 ;~ 2F3D:0118
cs=0x2f3d;eip=0x00011b; 	R(JGE(loc_3dad4));	// 101238 jge     short loc_3DAD4 ;~ 2F3D:011B
cs=0x2f3d;eip=0x00011d; 	X(MOV(unk_4df3f, 0));	// 101239 mov     byte ptr unk_4DF3F, 0 ;~ 2F3D:011D
cs=0x2f3d;eip=0x000122; 	R(JMP(loc_3db0f));	// 101240 jmp     short loc_3DB0F ;~ 2F3D:0122
loc_3dad4:
	// 10847 
cs=0x2f3d;eip=0x000124; 	T(TEST(si, 1));	// 101244 test    si, 1 ;~ 2F3D:0124
cs=0x2f3d;eip=0x000128; 	R(JZ(loc_3dae1));	// 101245 jz      short loc_3DAE1 ;~ 2F3D:0128
cs=0x2f3d;eip=0x00012a; 	X(MOV(unk_4df20, 0));	// 101246 mov     byte ptr unk_4DF20, 0 ;~ 2F3D:012A
cs=0x2f3d;eip=0x00012f; 	R(JMP(loc_3db0f));	// 101247 jmp     short loc_3DB0F ;~ 2F3D:012F
loc_3dae1:
	// 10848 
cs=0x2f3d;eip=0x000131; 	X(MOV(unk_4df16, 0));	// 101251 mov     byte ptr unk_4DF16, 0 ;~ 2F3D:0131
cs=0x2f3d;eip=0x000136; 	R(JMP(loc_3db0f));	// 101252 jmp     short loc_3DB0F ;~ 2F3D:0136
loc_3dae8:
	// 10849 
cs=0x2f3d;eip=0x000138; 	T(CMP(si, 8));	// 101256 cmp     si, 8 ;~ 2F3D:0138
cs=0x2f3d;eip=0x00013b; 	R(JGE(loc_3daf7));	// 101257 jge     short loc_3DAF7 ;~ 2F3D:013B
cs=0x2f3d;eip=0x00013d; 	T(SUB(al, al));	// 101258 sub     al, al ;~ 2F3D:013D
cs=0x2f3d;eip=0x00013f; 	X(MOV(unk_4df3f, al));	// 101259 mov     byte ptr unk_4DF3F, al ;~ 2F3D:013F
cs=0x2f3d;eip=0x000142; 	X(MOV(unk_4df2a, al));	// 101260 mov     byte ptr unk_4DF2A, al ;~ 2F3D:0142
cs=0x2f3d;eip=0x000145; 	R(JMP(loc_3db0f));	// 101261 jmp     short loc_3DB0F ;~ 2F3D:0145
loc_3daf7:
	// 10850 
cs=0x2f3d;eip=0x000147; 	T(TEST(si, 1));	// 101265 test    si, 1 ;~ 2F3D:0147
cs=0x2f3d;eip=0x00014b; 	R(JZ(loc_3db07));	// 101266 jz      short loc_3DB07 ;~ 2F3D:014B
cs=0x2f3d;eip=0x00014d; 	T(SUB(al, al));	// 101267 sub     al, al ;~ 2F3D:014D
cs=0x2f3d;eip=0x00014f; 	X(MOV(unk_4df20, al));	// 101268 mov     byte ptr unk_4DF20, al ;~ 2F3D:014F
cs=0x2f3d;eip=0x000152; 	X(MOV(unk_4df02, al));	// 101269 mov     byte ptr unk_4DF02, al ;~ 2F3D:0152
cs=0x2f3d;eip=0x000155; 	R(JMP(loc_3db0f));	// 101270 jmp     short loc_3DB0F ;~ 2F3D:0155
loc_3db07:
	// 10851 
cs=0x2f3d;eip=0x000157; 	T(SUB(al, al));	// 101274 sub     al, al ;~ 2F3D:0157
cs=0x2f3d;eip=0x000159; 	X(MOV(unk_4df16, al));	// 101275 mov     byte ptr unk_4DF16, al ;~ 2F3D:0159
cs=0x2f3d;eip=0x00015c; 	X(MOV(unk_4df0c, al));	// 101276 mov     byte ptr unk_4DF0C, al ;~ 2F3D:015C
loc_3db0f:
	// 10852 
cs=0x2f3d;eip=0x00015f; 	X(POP(si));	// 101280 pop     si ;~ 2F3D:015F
cs=0x2f3d;eip=0x000160; 	X(POP(di));	// 101281 pop     di ;~ 2F3D:0160
cs=0x2f3d;eip=0x000161; 	T(MOV(sp, bp));	// 101282 mov     sp, bp ;~ 2F3D:0161
cs=0x2f3d;eip=0x000163; 	X(POP(bp));	// 101283 pop     bp ;~ 2F3D:0163
cs=0x2f3d;eip=0x000164; 	R(RETN(0));	// 101284 retn ;~ 2F3D:0164
sub_3db15:
	// 101291 
cs=0x2f3d;eip=0x000165; 	X(MOV(*(dw*)((&unk_4bd2e)), 0x2D0));	// 101292 mov     word ptr unk_4BD2E, 2D0h ;~ 2F3D:0165
cs=0x2f3d;eip=0x00016b; 	X(MOV(*(dw*)((&unk_4b07a)), 0));	// 101293 mov     word ptr unk_4B07A, 0 ;~ 2F3D:016B
cs=0x2f3d;eip=0x000171; 	R(RETF(0));	// 101294 retf ;~ 2F3D:0171
sub_3db22:
	// 101302 
#undef var_4
#define var_4 -4
	// 101305 var_4           = word ptr -4 ;~ 2F3D:0172
#undef var_2
#define var_2 -2
	// 101306 var_2           = word ptr -2 ;~ 2F3D:0172
cs=0x2f3d;eip=0x000172; 	X(PUSH(bp));	// 101308 push    bp ;~ 2F3D:0172
cs=0x2f3d;eip=0x000173; 	T(MOV(bp, sp));	// 101309 mov     bp, sp ;~ 2F3D:0173
cs=0x2f3d;eip=0x000175; 	T(SUB(sp, 4));	// 101310 sub     sp, 4 ;~ 2F3D:0175
cs=0x2f3d;eip=0x000178; 	R(CALL(sub_3da51,0));	// 101311 call    sub_3DA51 ;~ 2F3D:0178
cs=0x2f3d;eip=0x00017b; 	X(INC(unk_4b07c));	// 101312 inc     byte ptr unk_4B07C ;~ 2F3D:017B
cs=0x2f3d;eip=0x00017f; 	T(CMP(unk_4b07c, 2));	// 101313 cmp     byte ptr unk_4B07C, 2 ;~ 2F3D:017F
cs=0x2f3d;eip=0x000184; 	R(JC(loc_3db3b));	// 101314 jb      short loc_3DB3B ;~ 2F3D:0184
cs=0x2f3d;eip=0x000186; 	X(MOV(unk_4b07c, 0));	// 101315 mov     byte ptr unk_4B07C, 0 ;~ 2F3D:0186
loc_3db3b:
	// 10853 
cs=0x2f3d;eip=0x00018b; 	X(INC(unk_4b07d));	// 101318 inc     byte ptr unk_4B07D ;~ 2F3D:018B
cs=0x2f3d;eip=0x00018f; 	T(CMP(unk_4b07d, 3));	// 101319 cmp     byte ptr unk_4B07D, 3 ;~ 2F3D:018F
cs=0x2f3d;eip=0x000194; 	R(JC(loc_3db4b));	// 101320 jb      short loc_3DB4B ;~ 2F3D:0194
cs=0x2f3d;eip=0x000196; 	X(MOV(unk_4b07d, 0));	// 101321 mov     byte ptr unk_4B07D, 0 ;~ 2F3D:0196
loc_3db4b:
	// 10854 
cs=0x2f3d;eip=0x00019b; 	T(CMP(unk_57041, 2));	// 101324 cmp     byte ptr unk_57041, 2 ;~ 2F3D:019B
cs=0x2f3d;eip=0x0001a0; 	R(JNZ(loc_3db61));	// 101325 jnz     short loc_3DB61 ;~ 2F3D:01A0
cs=0x2f3d;eip=0x0001a2; 	T(MOV(ax, 0x58FD));	// 101326 mov     ax, 58FDh ;~ 2F3D:01A2
cs=0x2f3d;eip=0x0001a5; 	X(PUSH(ax));	// 101327 push    ax ;~ 2F3D:01A5
cs=0x2f3d;eip=0x0001a6; 	T(MOV(ax, 0x78));	// 101328 mov     ax, 78h ; 'x' ;~ 2F3D:01A6
cs=0x2f3d;eip=0x0001a9; 	X(PUSH(ax));	// 101329 push    ax ;~ 2F3D:01A9
cs=0x2f3d;eip=0x0001aa; 	R(CALLF(sub_24cde,0));	// 101330 call    sub_24CDE ;~ 2F3D:01AA
cs=0x2f3d;eip=0x0001af; 	R(JMP(loc_3db67));	// 101331 jmp     short loc_3DB67 ;~ 2F3D:01AF
loc_3db61:
	// 10855 
cs=0x2f3d;eip=0x0001b1; 	X(MOV(*(dw*)((&unk_4d2ad)), 0));	// 101335 mov     word ptr unk_4D2AD, 0 ;~ 2F3D:01B1
loc_3db67:
	// 10856 
cs=0x2f3d;eip=0x0001b7; 	T(MOV(ax, *(dw*)((&unk_4d2ad))));	// 101338 mov     ax, word ptr unk_4D2AD ;~ 2F3D:01B7
cs=0x2f3d;eip=0x0001ba; 	X(MOV(*(dw*)((&unk_51b92)), ax));	// 101339 mov     word ptr unk_51B92, ax ;~ 2F3D:01BA
cs=0x2f3d;eip=0x0001bd; 	T(CMP(*(dw*)((&unk_47ab2)), 3));	// 101340 cmp     word ptr unk_47AB2, 3 ;~ 2F3D:01BD
cs=0x2f3d;eip=0x0001c2; 	R(JZ(loc_3db77));	// 101341 jz      short loc_3DB77 ;~ 2F3D:01C2
cs=0x2f3d;eip=0x0001c4; 	R(JMP(loc_3dcde));	// 101342 jmp     loc_3DCDE ;~ 2F3D:01C4
loc_3db77:
	// 10857 
cs=0x2f3d;eip=0x0001c7; 	T(CMP(*(dw*)((&unk_56fd8)), 0));	// 101346 cmp     word ptr unk_56FD8, 0 ;~ 2F3D:01C7
cs=0x2f3d;eip=0x0001cc; 	R(JNZ(loc_3db87));	// 101347 jnz     short loc_3DB87 ;~ 2F3D:01CC
cs=0x2f3d;eip=0x0001ce; 	X(MOV(*(dw*)((&unk_4bd2e)), 0x2D0));	// 101348 mov     word ptr unk_4BD2E, 2D0h ;~ 2F3D:01CE
cs=0x2f3d;eip=0x0001d4; 	R(JMP(loc_3dcde));	// 101349 jmp     loc_3DCDE ;~ 2F3D:01D4
loc_3db87:
	// 10858 
cs=0x2f3d;eip=0x0001d7; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 101353 les     bx, dword ptr unk_56FD6 ;~ 2F3D:01D7
cs=0x2f3d;eip=0x0001db; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 101354 cmp     word ptr es:[bx+306h], 1 ;~ 2F3D:01DB
cs=0x2f3d;eip=0x0001e1; 	R(JNZ(loc_3db9f));	// 101355 jnz     short loc_3DB9F ;~ 2F3D:01E1
cs=0x2f3d;eip=0x0001e3; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x32C))));	// 101356 mov     ax, es:[bx+32Ch] ;~ 2F3D:01E3
cs=0x2f3d;eip=0x0001e8; 	T(OR(ax, *(dw*)(raddr(es,bx+0x32E))));	// 101357 or      ax, es:[bx+32Eh] ;~ 2F3D:01E8
cs=0x2f3d;eip=0x0001ed; 	R(JZ(loc_3dbb9));	// 101358 jz      short loc_3DBB9 ;~ 2F3D:01ED
loc_3db9f:
	// 10859 
cs=0x2f3d;eip=0x0001ef; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 101361 cmp     word ptr es:[bx+306h], 2 ;~ 2F3D:01EF
cs=0x2f3d;eip=0x0001f5; 	R(JZ(loc_3dbaa));	// 101362 jz      short loc_3DBAA ;~ 2F3D:01F5
cs=0x2f3d;eip=0x0001f7; 	R(JMP(loc_3dca6));	// 101363 jmp     loc_3DCA6 ;~ 2F3D:01F7
loc_3dbaa:
	// 10860 
cs=0x2f3d;eip=0x0001fa; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x32C))));	// 101367 mov     ax, es:[bx+32Ch] ;~ 2F3D:01FA
cs=0x2f3d;eip=0x0001ff; 	T(OR(ax, *(dw*)(raddr(es,bx+0x32E))));	// 101368 or      ax, es:[bx+32Eh] ;~ 2F3D:01FF
cs=0x2f3d;eip=0x000204; 	R(JNZ(loc_3dbb9));	// 101369 jnz     short loc_3DBB9 ;~ 2F3D:0204
cs=0x2f3d;eip=0x000206; 	R(JMP(loc_3dca6));	// 101370 jmp     loc_3DCA6 ;~ 2F3D:0206
loc_3dbb9:
	// 10861 
cs=0x2f3d;eip=0x000209; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 1));	// 101375 cmp     word ptr es:[bx+332h], 1 ;~ 2F3D:0209
cs=0x2f3d;eip=0x00020f; 	R(JNZ(loc_3dbe5));	// 101376 jnz     short loc_3DBE5 ;~ 2F3D:020F
cs=0x2f3d;eip=0x000211; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 101377 mov     dx, word ptr unk_47A9A ;~ 2F3D:0211
cs=0x2f3d;eip=0x000215; 	T(MOV(ax, *(dw*)((&unk_56fbf))));	// 101378 mov     ax, word ptr unk_56FBF ;~ 2F3D:0215
cs=0x2f3d;eip=0x000218; 	T(MOV(es, dx));	// 101379 mov     es, dx ;~ 2F3D:0218
cs=0x2f3d;eip=0x00021a; 	T(MOV(bx, ax));	// 101381 mov     bx, ax ;~ 2F3D:021A
cs=0x2f3d;eip=0x00021c; 	T(CMP(*(dw*)(raddr(es,bx+0x1C)), 0));	// 101382 cmp     word ptr es:[bx+1Ch], 0 ;~ 2F3D:021C
cs=0x2f3d;eip=0x000221; 	R(JG(loc_3dbe5));	// 101383 jg      short loc_3DBE5 ;~ 2F3D:0221
cs=0x2f3d;eip=0x000223; 	R(JL(loc_3dbdd));	// 101384 jl      short loc_3DBDD ;~ 2F3D:0223
cs=0x2f3d;eip=0x000225; 	T(CMP(*(dw*)(raddr(es,bx+0x1A)), 0x1E00));	// 101385 cmp     word ptr es:[bx+1Ah], 1E00h ;~ 2F3D:0225
cs=0x2f3d;eip=0x00022b; 	R(JNC(loc_3dbe5));	// 101386 jnb     short loc_3DBE5 ;~ 2F3D:022B
loc_3dbdd:
	// 10862 
cs=0x2f3d;eip=0x00022d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x2D0));	// 101389 mov     [bp+var_2], 2D0h ;~ 2F3D:022D
cs=0x2f3d;eip=0x000232; 	R(JMP(loc_3dcab));	// 101390 jmp     loc_3DCAB ;~ 2F3D:0232
loc_3dbe5:
	// 10863 
cs=0x2f3d;eip=0x000235; 	T(CMP(unk_57113, 0));	// 101395 cmp     byte ptr unk_57113, 0 ;~ 2F3D:0235
cs=0x2f3d;eip=0x00023a; 	R(JZ(loc_3dc22));	// 101396 jz      short loc_3DC22 ;~ 2F3D:023A
cs=0x2f3d;eip=0x00023c; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 101397 les     bx, dword ptr unk_56FD6 ;~ 2F3D:023C
cs=0x2f3d;eip=0x000240; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x138))));	// 101399 mov     ax, es:[bx+138h] ;~ 2F3D:0240
cs=0x2f3d;eip=0x000245; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13A))));	// 101400 mov     dx, es:[bx+13Ah] ;~ 2F3D:0245
cs=0x2f3d;eip=0x00024a; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 101401 cmp     es:[bx+122h], dx ;~ 2F3D:024A
cs=0x2f3d;eip=0x00024f; 	R(JL(loc_3dc0f));	// 101402 jl      short loc_3DC0F ;~ 2F3D:024F
cs=0x2f3d;eip=0x000251; 	R(JG(loc_3dc0a));	// 101403 jg      short loc_3DC0A ;~ 2F3D:0251
cs=0x2f3d;eip=0x000253; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 101404 cmp     es:[bx+120h], ax ;~ 2F3D:0253
cs=0x2f3d;eip=0x000258; 	R(JC(loc_3dc0f));	// 101405 jb      short loc_3DC0F ;~ 2F3D:0258
loc_3dc0a:
	// 10864 
cs=0x2f3d;eip=0x00025a; 	T(MOV(ax, 1));	// 101408 mov     ax, 1 ;~ 2F3D:025A
cs=0x2f3d;eip=0x00025d; 	R(JMP(loc_3dc11));	// 101409 jmp     short loc_3DC11 ;~ 2F3D:025D
loc_3dc0f:
	// 10865 
cs=0x2f3d;eip=0x00025f; 	T(SUB(ax, ax));	// 101414 sub     ax, ax ;~ 2F3D:025F
loc_3dc11:
	// 10866 
cs=0x2f3d;eip=0x000261; 	T(OR(ax, ax));	// 101417 or      ax, ax ;~ 2F3D:0261
cs=0x2f3d;eip=0x000263; 	R(JNZ(loc_3dc22));	// 101418 jnz     short loc_3DC22 ;~ 2F3D:0263
cs=0x2f3d;eip=0x000265; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 101419 les     bx, dword ptr unk_47AD0 ;~ 2F3D:0265
cs=0x2f3d;eip=0x000269; 	T(MOV(ax, 0x2D0));	// 101420 mov     ax, 2D0h ;~ 2F3D:0269
loc_3dc1c:
	// 10867 
cs=0x2f3d;eip=0x00026c; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x14))));	// 101423 sub     ax, es:[bx+14h] ;~ 2F3D:026C
cs=0x2f3d;eip=0x000270; 	R(JMP(loc_3dc7b));	// 101424 jmp     short loc_3DC7B ;~ 2F3D:0270
loc_3dc22:
	// 10868 
cs=0x2f3d;eip=0x000272; 	X(PUSH(*(dw*)((&unk_56488))));	// 101429 push    word ptr unk_56488 ;~ 2F3D:0272
cs=0x2f3d;eip=0x000276; 	T(MOV(ax, 0x2D0));	// 101430 mov     ax, 2D0h ;~ 2F3D:0276
cs=0x2f3d;eip=0x000279; 	X(PUSH(ax));	// 101431 push    ax ;~ 2F3D:0279
cs=0x2f3d;eip=0x00027a; 	T(MOV(ax, 0x0FF9C));	// 101432 mov     ax, 0FF9Ch ;~ 2F3D:027A
cs=0x2f3d;eip=0x00027d; 	X(PUSH(ax));	// 101433 push    ax ;~ 2F3D:027D
cs=0x2f3d;eip=0x00027e; 	R(CALLF(sub_2f01c,0));	// 101434 call    sub_2F01C ;~ 2F3D:027E
cs=0x2f3d;eip=0x000283; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 101435 mov     [bp+var_2], ax ;~ 2F3D:0283
cs=0x2f3d;eip=0x000286; 	T(CMP(ax, 0x0F0));	// 101436 cmp     ax, 0F0h ; 'ğ' ;~ 2F3D:0286
cs=0x2f3d;eip=0x000289; 	R(JLE(loc_3dc40));	// 101437 jle     short loc_3DC40 ;~ 2F3D:0289
cs=0x2f3d;eip=0x00028b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0F0));	// 101438 mov     [bp+var_2], 0F0h ; 'ğ' ;~ 2F3D:028B
loc_3dc40:
	// 10869 
cs=0x2f3d;eip=0x000290; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x0FF10));	// 101441 cmp     [bp+var_2], 0FF10h ;~ 2F3D:0290
cs=0x2f3d;eip=0x000295; 	R(JGE(loc_3dc4c));	// 101442 jge     short loc_3DC4C ;~ 2F3D:0295
cs=0x2f3d;eip=0x000297; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0FF10));	// 101443 mov     [bp+var_2], 0FF10h ;~ 2F3D:0297
loc_3dc4c:
	// 10870 
cs=0x2f3d;eip=0x00029c; 	T(MOV(ax, 0x2D0));	// 101446 mov     ax, 2D0h ;~ 2F3D:029C
cs=0x2f3d;eip=0x00029f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2))));	// 101447 sub     ax, [bp+var_2] ;~ 2F3D:029F
cs=0x2f3d;eip=0x0002a2; 	X(PUSH(ax));	// 101448 push    ax ;~ 2F3D:02A2
cs=0x2f3d;eip=0x0002a3; 	R(CALLF(sub_24cf8,0));	// 101449 call    sub_24CF8 ;~ 2F3D:02A3
cs=0x2f3d;eip=0x0002a8; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 101450 mov     [bp+var_2], ax ;~ 2F3D:02A8
cs=0x2f3d;eip=0x0002ab; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 101451 les     bx, dword ptr unk_47AD0 ;~ 2F3D:02AB
cs=0x2f3d;eip=0x0002af; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 101452 mov     ax, es:[bx+14h] ;~ 2F3D:02AF
cs=0x2f3d;eip=0x0002b3; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2))));	// 101453 add     ax, [bp+var_2] ;~ 2F3D:02B3
cs=0x2f3d;eip=0x0002b6; 	X(PUSH(ax));	// 101454 push    ax ;~ 2F3D:02B6
cs=0x2f3d;eip=0x0002b7; 	R(CALLF(sub_24cf8,0));	// 101455 call    sub_24CF8 ;~ 2F3D:02B7
cs=0x2f3d;eip=0x0002bc; 	T(CMP(ax, 0x870));	// 101456 cmp     ax, 870h ;~ 2F3D:02BC
cs=0x2f3d;eip=0x0002bf; 	R(JLE(loc_3dc86));	// 101457 jle     short loc_3DC86 ;~ 2F3D:02BF
cs=0x2f3d;eip=0x0002c1; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 101458 les     bx, dword ptr unk_47AD0 ;~ 2F3D:02C1
cs=0x2f3d;eip=0x0002c5; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 101459 mov     ax, es:[bx+14h] ;~ 2F3D:02C5
cs=0x2f3d;eip=0x0002c9; 	T(NEG(ax));	// 101460 neg     ax ;~ 2F3D:02C9
loc_3dc7b:
	// 10871 
cs=0x2f3d;eip=0x0002cb; 	X(PUSH(ax));	// 101463 push    ax ;~ 2F3D:02CB
cs=0x2f3d;eip=0x0002cc; 	R(CALLF(sub_24cf8,0));	// 101464 call    sub_24CF8 ;~ 2F3D:02CC
cs=0x2f3d;eip=0x0002d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 101465 mov     [bp+var_2], ax ;~ 2F3D:02D1
cs=0x2f3d;eip=0x0002d4; 	R(JMP(loc_3dcab));	// 101466 jmp     short loc_3DCAB ;~ 2F3D:02D4
loc_3dc86:
	// 10872 
cs=0x2f3d;eip=0x0002d6; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 101470 les     bx, dword ptr unk_47AD0 ;~ 2F3D:02D6
cs=0x2f3d;eip=0x0002da; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 101471 mov     ax, es:[bx+14h] ;~ 2F3D:02DA
cs=0x2f3d;eip=0x0002de; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2))));	// 101472 add     ax, [bp+var_2] ;~ 2F3D:02DE
cs=0x2f3d;eip=0x0002e1; 	X(PUSH(ax));	// 101473 push    ax ;~ 2F3D:02E1
cs=0x2f3d;eip=0x0002e2; 	R(CALLF(sub_24cf8,0));	// 101474 call    sub_24CF8 ;~ 2F3D:02E2
cs=0x2f3d;eip=0x0002e7; 	T(CMP(ax, 0x5A0));	// 101475 cmp     ax, 5A0h ;~ 2F3D:02E7
cs=0x2f3d;eip=0x0002ea; 	R(JLE(loc_3dcab));	// 101476 jle     short loc_3DCAB ;~ 2F3D:02EA
cs=0x2f3d;eip=0x0002ec; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 101477 les     bx, dword ptr unk_47AD0 ;~ 2F3D:02EC
cs=0x2f3d;eip=0x0002f0; 	T(MOV(ax, 0x5A0));	// 101478 mov     ax, 5A0h ;~ 2F3D:02F0
cs=0x2f3d;eip=0x0002f3; 	R(JMP(loc_3dc1c));	// 101479 jmp     loc_3DC1C ;~ 2F3D:02F3
loc_3dca6:
	// 10873 
cs=0x2f3d;eip=0x0002f6; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 101484 mov     [bp+var_2], 0 ;~ 2F3D:02F6
loc_3dcab:
	// 10874 
cs=0x2f3d;eip=0x0002fb; 	T(MOV(ax, 0x168));	// 101488 mov     ax, 168h ;~ 2F3D:02FB
cs=0x2f3d;eip=0x0002fe; 	X(PUSH(ax));	// 101489 push    ax ;~ 2F3D:02FE
cs=0x2f3d;eip=0x0002ff; 	T(MOV(ax, word_5705a));	// 101490 mov     ax, word_5705A ;~ 2F3D:02FF
cs=0x2f3d;eip=0x000302; 	T(SUB(ax, *(dw*)((&unk_4b07a))));	// 101491 sub     ax, word ptr unk_4B07A ;~ 2F3D:0302
cs=0x2f3d;eip=0x000306; 	X(PUSH(ax));	// 101492 push    ax ;~ 2F3D:0306
cs=0x2f3d;eip=0x000307; 	R(CALLF(sub_2f002,0));	// 101493 call    sub_2F002 ;~ 2F3D:0307
cs=0x2f3d;eip=0x00030c; 	T(MOV(cl, 8));	// 101494 mov     cl, 8 ;~ 2F3D:030C
cs=0x2f3d;eip=0x00030e; 	R(CALLF(sub_10240,0));	// 101495 call    sub_10240 ;~ 2F3D:030E
cs=0x2f3d;eip=0x000313; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 101496 mov     [bp+var_4], ax ;~ 2F3D:0313
cs=0x2f3d;eip=0x000316; 	T(MOV(ax, word_5705a));	// 101497 mov     ax, word_5705A ;~ 2F3D:0316
cs=0x2f3d;eip=0x000319; 	X(MOV(*(dw*)((&unk_4b07a)), ax));	// 101498 mov     word ptr unk_4B07A, ax ;~ 2F3D:0319
cs=0x2f3d;eip=0x00031c; 	X(PUSH(*(dw*)((&unk_4bd2e))));	// 101499 push    word ptr unk_4BD2E ;~ 2F3D:031C
cs=0x2f3d;eip=0x000320; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 101500 push    [bp+var_2] ;~ 2F3D:0320
cs=0x2f3d;eip=0x000323; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 101501 push    [bp+var_4] ;~ 2F3D:0323
cs=0x2f3d;eip=0x000326; 	R(CALLF(sub_13561,0));	// 101502 call    sub_13561 ;~ 2F3D:0326
cs=0x2f3d;eip=0x00032b; 	X(MOV(*(dw*)((&unk_4bd2e)), ax));	// 101503 mov     word ptr unk_4BD2E, ax ;~ 2F3D:032B
loc_3dcde:
	// 10875 
cs=0x2f3d;eip=0x00032e; 	T(MOV(ax, *(dw*)((&unk_4bd2e))));	// 101507 mov     ax, word ptr unk_4BD2E ;~ 2F3D:032E
cs=0x2f3d;eip=0x000331; 	X(MOV(*(dw*)((&unk_4b7e0)), ax));	// 101508 mov     word ptr unk_4B7E0, ax ;~ 2F3D:0331
cs=0x2f3d;eip=0x000334; 	T(MOV(al, 1));	// 101509 mov     al, 1 ;~ 2F3D:0334
cs=0x2f3d;eip=0x000336; 	X(MOV(unk_4ffce, al));	// 101510 mov     byte ptr unk_4FFCE, al ;~ 2F3D:0336
cs=0x2f3d;eip=0x000339; 	X(MOV(unk_4ffc6, al));	// 101511 mov     byte ptr unk_4FFC6, al ;~ 2F3D:0339
cs=0x2f3d;eip=0x00033c; 	X(MOV(unk_4ffbe, al));	// 101512 mov     byte ptr unk_4FFBE, al ;~ 2F3D:033C
cs=0x2f3d;eip=0x00033f; 	X(MOV(unk_4ffa8, al));	// 101513 mov     byte ptr unk_4FFA8, al ;~ 2F3D:033F
cs=0x2f3d;eip=0x000342; 	X(MOV(unk_4ffa0, al));	// 101514 mov     byte ptr unk_4FFA0, al ;~ 2F3D:0342
cs=0x2f3d;eip=0x000345; 	X(MOV(unk_4ff98, al));	// 101515 mov     byte ptr unk_4FF98, al ;~ 2F3D:0345
cs=0x2f3d;eip=0x000348; 	X(MOV(unk_4f567, al));	// 101516 mov     byte ptr unk_4F567, al ;~ 2F3D:0348
cs=0x2f3d;eip=0x00034b; 	X(MOV(unk_4f571, al));	// 101517 mov     byte ptr unk_4F571, al ;~ 2F3D:034B
cs=0x2f3d;eip=0x00034e; 	X(MOV(unk_4f57b, al));	// 101518 mov     byte ptr unk_4F57B, al ;~ 2F3D:034E
cs=0x2f3d;eip=0x000351; 	X(MOV(unk_510f7, al));	// 101519 mov     byte ptr unk_510F7, al ;~ 2F3D:0351
cs=0x2f3d;eip=0x000354; 	X(MOV(unk_510eb, al));	// 101520 mov     byte ptr unk_510EB, al ;~ 2F3D:0354
cs=0x2f3d;eip=0x000357; 	X(MOV(unk_510df, al));	// 101521 mov     byte ptr unk_510DF, al ;~ 2F3D:0357
cs=0x2f3d;eip=0x00035a; 	X(MOV(unk_4e627, al));	// 101522 mov     byte ptr unk_4E627, al ;~ 2F3D:035A
cs=0x2f3d;eip=0x00035d; 	X(MOV(unk_4e633, al));	// 101523 mov     byte ptr unk_4E633, al ;~ 2F3D:035D
cs=0x2f3d;eip=0x000360; 	X(MOV(unk_4e63f, al));	// 101524 mov     byte ptr unk_4E63F, al ;~ 2F3D:0360
cs=0x2f3d;eip=0x000363; 	X(MOV(unk_4b4f8, al));	// 101525 mov     byte ptr unk_4B4F8, al ;~ 2F3D:0363
cs=0x2f3d;eip=0x000366; 	X(MOV(unk_4b502, al));	// 101526 mov     byte ptr unk_4B502, al ;~ 2F3D:0366
cs=0x2f3d;eip=0x000369; 	X(MOV(unk_4b50c, al));	// 101527 mov     byte ptr unk_4B50C, al ;~ 2F3D:0369
cs=0x2f3d;eip=0x00036c; 	X(MOV(unk_5091a, al));	// 101528 mov     byte ptr unk_5091A, al ;~ 2F3D:036C
cs=0x2f3d;eip=0x00036f; 	X(MOV(unk_5090e, al));	// 101529 mov     byte ptr unk_5090E, al ;~ 2F3D:036F
cs=0x2f3d;eip=0x000372; 	X(MOV(unk_50902, al));	// 101530 mov     byte ptr unk_50902, al ;~ 2F3D:0372
cs=0x2f3d;eip=0x000375; 	X(MOV(unk_4db4d, al));	// 101531 mov     byte ptr unk_4DB4D, al ;~ 2F3D:0375
cs=0x2f3d;eip=0x000378; 	X(MOV(unk_4db3c, al));	// 101532 mov     byte ptr unk_4DB3C, al ;~ 2F3D:0378
cs=0x2f3d;eip=0x00037b; 	X(MOV(unk_4db32, al));	// 101533 mov     byte ptr unk_4DB32, al ;~ 2F3D:037B
cs=0x2f3d;eip=0x00037e; 	X(MOV(unk_4bdf6, al));	// 101534 mov     byte ptr unk_4BDF6, al ;~ 2F3D:037E
cs=0x2f3d;eip=0x000381; 	X(MOV(unk_4bdfe, al));	// 101535 mov     byte ptr unk_4BDFE, al ;~ 2F3D:0381
cs=0x2f3d;eip=0x000384; 	X(MOV(unk_4be06, al));	// 101536 mov     byte ptr unk_4BE06, al ;~ 2F3D:0384
cs=0x2f3d;eip=0x000387; 	X(MOV(unk_4bd3c, al));	// 101537 mov     byte ptr unk_4BD3C, al ;~ 2F3D:0387
cs=0x2f3d;eip=0x00038a; 	X(MOV(unk_4bd44, al));	// 101538 mov     byte ptr unk_4BD44, al ;~ 2F3D:038A
cs=0x2f3d;eip=0x00038d; 	X(MOV(unk_4bd4c, al));	// 101539 mov     byte ptr unk_4BD4C, al ;~ 2F3D:038D
cs=0x2f3d;eip=0x000390; 	T(MOV(al, unk_4b07d));	// 101540 mov     al, byte ptr unk_4B07D ;~ 2F3D:0390
cs=0x2f3d;eip=0x000393; 	T(SUB(ah, ah));	// 101541 sub     ah, ah ;~ 2F3D:0393
cs=0x2f3d;eip=0x000395; 	T(OR(ax, ax));	// 101542 or      ax, ax ;~ 2F3D:0395
cs=0x2f3d;eip=0x000397; 	R(JZ(loc_3dd55));	// 101543 jz      short loc_3DD55 ;~ 2F3D:0397
cs=0x2f3d;eip=0x000399; 	T(CMP(ax, 1));	// 101544 cmp     ax, 1 ;~ 2F3D:0399
cs=0x2f3d;eip=0x00039c; 	R(JZ(loc_3dda6));	// 101545 jz      short loc_3DDA6 ;~ 2F3D:039C
cs=0x2f3d;eip=0x00039e; 	T(CMP(ax, 2));	// 101546 cmp     ax, 2 ;~ 2F3D:039E
cs=0x2f3d;eip=0x0003a1; 	R(JZ(loc_3ddc8));	// 101547 jz      short loc_3DDC8 ;~ 2F3D:03A1
cs=0x2f3d;eip=0x0003a3; 	R(JMP(loc_3dd75));	// 101548 jmp     short loc_3DD75 ;~ 2F3D:03A3
loc_3dd55:
	// 10876 
cs=0x2f3d;eip=0x0003a5; 	T(MOV(al, 3));	// 101552 mov     al, 3 ;~ 2F3D:03A5
cs=0x2f3d;eip=0x0003a7; 	X(MOV(unk_4ffbe, al));	// 101553 mov     byte ptr unk_4FFBE, al ;~ 2F3D:03A7
cs=0x2f3d;eip=0x0003aa; 	X(MOV(unk_4ff98, al));	// 101554 mov     byte ptr unk_4FF98, al ;~ 2F3D:03AA
cs=0x2f3d;eip=0x0003ad; 	X(MOV(unk_4f57b, al));	// 101555 mov     byte ptr unk_4F57B, al ;~ 2F3D:03AD
cs=0x2f3d;eip=0x0003b0; 	X(MOV(unk_510df, al));	// 101556 mov     byte ptr unk_510DF, al ;~ 2F3D:03B0
cs=0x2f3d;eip=0x0003b3; 	X(MOV(unk_4e63f, al));	// 101557 mov     byte ptr unk_4E63F, al ;~ 2F3D:03B3
cs=0x2f3d;eip=0x0003b6; 	X(MOV(unk_4b50c, al));	// 101558 mov     byte ptr unk_4B50C, al ;~ 2F3D:03B6
cs=0x2f3d;eip=0x0003b9; 	X(MOV(unk_50902, al));	// 101559 mov     byte ptr unk_50902, al ;~ 2F3D:03B9
cs=0x2f3d;eip=0x0003bc; 	X(MOV(unk_4db32, al));	// 101560 mov     byte ptr unk_4DB32, al ;~ 2F3D:03BC
cs=0x2f3d;eip=0x0003bf; 	X(MOV(unk_4be06, al));	// 101561 mov     byte ptr unk_4BE06, al ;~ 2F3D:03BF
cs=0x2f3d;eip=0x0003c2; 	X(MOV(unk_4bd4c, al));	// 101562 mov     byte ptr unk_4BD4C, al ;~ 2F3D:03C2
loc_3dd75:
	// 10877 
cs=0x2f3d;eip=0x0003c5; 	T(CMP(unk_4b07c, 0));	// 101566 cmp     byte ptr unk_4B07C, 0 ;~ 2F3D:03C5
cs=0x2f3d;eip=0x0003ca; 	R(JNZ(loc_3ddea));	// 101567 jnz     short loc_3DDEA ;~ 2F3D:03CA
cs=0x2f3d;eip=0x0003cc; 	T(MOV(al, 3));	// 101568 mov     al, 3 ;~ 2F3D:03CC
cs=0x2f3d;eip=0x0003ce; 	X(MOV(unk_4de51, al));	// 101569 mov     byte ptr unk_4DE51, al ;~ 2F3D:03CE
cs=0x2f3d;eip=0x0003d1; 	X(MOV(unk_4f47d, al));	// 101570 mov     byte ptr unk_4F47D, al ;~ 2F3D:03D1
cs=0x2f3d;eip=0x0003d4; 	X(MOV(unk_5100c, al));	// 101571 mov     byte ptr unk_5100C, al ;~ 2F3D:03D4
cs=0x2f3d;eip=0x0003d7; 	X(MOV(unk_4e4fe, al));	// 101572 mov     byte ptr unk_4E4FE, al ;~ 2F3D:03D7
cs=0x2f3d;eip=0x0003da; 	X(MOV(unk_5087a, al));	// 101573 mov     byte ptr unk_5087A, al ;~ 2F3D:03DA
cs=0x2f3d;eip=0x0003dd; 	X(MOV(unk_4dbe6, al));	// 101574 mov     byte ptr unk_4DBE6, al ;~ 2F3D:03DD
cs=0x2f3d;eip=0x0003e0; 	T(MOV(al, 1));	// 101575 mov     al, 1 ;~ 2F3D:03E0
cs=0x2f3d;eip=0x0003e2; 	X(MOV(unk_4de4b, al));	// 101576 mov     byte ptr unk_4DE4B, al ;~ 2F3D:03E2
cs=0x2f3d;eip=0x0003e5; 	X(MOV(unk_4f477, al));	// 101577 mov     byte ptr unk_4F477, al ;~ 2F3D:03E5
cs=0x2f3d;eip=0x0003e8; 	X(MOV(unk_51012, al));	// 101578 mov     byte ptr unk_51012, al ;~ 2F3D:03E8
cs=0x2f3d;eip=0x0003eb; 	X(MOV(unk_4e4f6, al));	// 101579 mov     byte ptr unk_4E4F6, al ;~ 2F3D:03EB
cs=0x2f3d;eip=0x0003ee; 	X(MOV(unk_50874, al));	// 101580 mov     byte ptr unk_50874, al ;~ 2F3D:03EE
cs=0x2f3d;eip=0x0003f1; 	X(MOV(unk_4dbe0, al));	// 101581 mov     byte ptr unk_4DBE0, al ;~ 2F3D:03F1
cs=0x2f3d;eip=0x0003f4; 	R(JMP(loc_3de12));	// 101582 jmp     short loc_3DE12 ;~ 2F3D:03F4
loc_3dda6:
	// 10878 
cs=0x2f3d;eip=0x0003f6; 	T(MOV(al, 3));	// 101586 mov     al, 3 ;~ 2F3D:03F6
cs=0x2f3d;eip=0x0003f8; 	X(MOV(unk_4ffc6, al));	// 101587 mov     byte ptr unk_4FFC6, al ;~ 2F3D:03F8
cs=0x2f3d;eip=0x0003fb; 	X(MOV(unk_4ffa0, al));	// 101588 mov     byte ptr unk_4FFA0, al ;~ 2F3D:03FB
cs=0x2f3d;eip=0x0003fe; 	X(MOV(unk_4f571, al));	// 101589 mov     byte ptr unk_4F571, al ;~ 2F3D:03FE
cs=0x2f3d;eip=0x000401; 	X(MOV(unk_510eb, al));	// 101590 mov     byte ptr unk_510EB, al ;~ 2F3D:0401
cs=0x2f3d;eip=0x000404; 	X(MOV(unk_4e633, al));	// 101591 mov     byte ptr unk_4E633, al ;~ 2F3D:0404
cs=0x2f3d;eip=0x000407; 	X(MOV(unk_4b502, al));	// 101592 mov     byte ptr unk_4B502, al ;~ 2F3D:0407
cs=0x2f3d;eip=0x00040a; 	X(MOV(unk_5090e, al));	// 101593 mov     byte ptr unk_5090E, al ;~ 2F3D:040A
cs=0x2f3d;eip=0x00040d; 	X(MOV(unk_4db3c, al));	// 101594 mov     byte ptr unk_4DB3C, al ;~ 2F3D:040D
cs=0x2f3d;eip=0x000410; 	X(MOV(unk_4bdfe, al));	// 101595 mov     byte ptr unk_4BDFE, al ;~ 2F3D:0410
cs=0x2f3d;eip=0x000413; 	X(MOV(unk_4bd44, al));	// 101596 mov     byte ptr unk_4BD44, al ;~ 2F3D:0413
cs=0x2f3d;eip=0x000416; 	R(JMP(loc_3dd75));	// 101597 jmp     short loc_3DD75 ;~ 2F3D:0416
loc_3ddc8:
	// 10879 
cs=0x2f3d;eip=0x000418; 	T(MOV(al, 3));	// 101601 mov     al, 3 ;~ 2F3D:0418
cs=0x2f3d;eip=0x00041a; 	X(MOV(unk_4ffce, al));	// 101602 mov     byte ptr unk_4FFCE, al ;~ 2F3D:041A
cs=0x2f3d;eip=0x00041d; 	X(MOV(unk_4ffa8, al));	// 101603 mov     byte ptr unk_4FFA8, al ;~ 2F3D:041D
cs=0x2f3d;eip=0x000420; 	X(MOV(unk_4f567, al));	// 101604 mov     byte ptr unk_4F567, al ;~ 2F3D:0420
cs=0x2f3d;eip=0x000423; 	X(MOV(unk_510f7, al));	// 101605 mov     byte ptr unk_510F7, al ;~ 2F3D:0423
cs=0x2f3d;eip=0x000426; 	X(MOV(unk_4e627, al));	// 101606 mov     byte ptr unk_4E627, al ;~ 2F3D:0426
cs=0x2f3d;eip=0x000429; 	X(MOV(unk_4b4f8, al));	// 101607 mov     byte ptr unk_4B4F8, al ;~ 2F3D:0429
cs=0x2f3d;eip=0x00042c; 	X(MOV(unk_5091a, al));	// 101608 mov     byte ptr unk_5091A, al ;~ 2F3D:042C
cs=0x2f3d;eip=0x00042f; 	X(MOV(unk_4db4d, al));	// 101609 mov     byte ptr unk_4DB4D, al ;~ 2F3D:042F
cs=0x2f3d;eip=0x000432; 	X(MOV(unk_4bdf6, al));	// 101610 mov     byte ptr unk_4BDF6, al ;~ 2F3D:0432
cs=0x2f3d;eip=0x000435; 	X(MOV(unk_4bd3c, al));	// 101611 mov     byte ptr unk_4BD3C, al ;~ 2F3D:0435
cs=0x2f3d;eip=0x000438; 	R(JMP(loc_3dd75));	// 101612 jmp     short loc_3DD75 ;~ 2F3D:0438
loc_3ddea:
	// 10880 
cs=0x2f3d;eip=0x00043a; 	T(MOV(al, 3));	// 101616 mov     al, 3 ;~ 2F3D:043A
cs=0x2f3d;eip=0x00043c; 	X(MOV(unk_4de4b, al));	// 101617 mov     byte ptr unk_4DE4B, al ;~ 2F3D:043C
cs=0x2f3d;eip=0x00043f; 	X(MOV(unk_4f477, al));	// 101618 mov     byte ptr unk_4F477, al ;~ 2F3D:043F
cs=0x2f3d;eip=0x000442; 	X(MOV(unk_51012, al));	// 101619 mov     byte ptr unk_51012, al ;~ 2F3D:0442
cs=0x2f3d;eip=0x000445; 	X(MOV(unk_4e4f6, al));	// 101620 mov     byte ptr unk_4E4F6, al ;~ 2F3D:0445
cs=0x2f3d;eip=0x000448; 	X(MOV(unk_50874, al));	// 101621 mov     byte ptr unk_50874, al ;~ 2F3D:0448
cs=0x2f3d;eip=0x00044b; 	X(MOV(unk_4dbe0, al));	// 101622 mov     byte ptr unk_4DBE0, al ;~ 2F3D:044B
cs=0x2f3d;eip=0x00044e; 	T(MOV(al, 1));	// 101623 mov     al, 1 ;~ 2F3D:044E
cs=0x2f3d;eip=0x000450; 	X(MOV(unk_4de51, al));	// 101624 mov     byte ptr unk_4DE51, al ;~ 2F3D:0450
cs=0x2f3d;eip=0x000453; 	X(MOV(unk_4f47d, al));	// 101625 mov     byte ptr unk_4F47D, al ;~ 2F3D:0453
cs=0x2f3d;eip=0x000456; 	X(MOV(unk_5100c, al));	// 101626 mov     byte ptr unk_5100C, al ;~ 2F3D:0456
cs=0x2f3d;eip=0x000459; 	X(MOV(unk_4e4fe, al));	// 101627 mov     byte ptr unk_4E4FE, al ;~ 2F3D:0459
cs=0x2f3d;eip=0x00045c; 	X(MOV(unk_5087a, al));	// 101628 mov     byte ptr unk_5087A, al ;~ 2F3D:045C
cs=0x2f3d;eip=0x00045f; 	X(MOV(unk_4dbe6, al));	// 101629 mov     byte ptr unk_4DBE6, al ;~ 2F3D:045F
loc_3de12:
	// 10881 
cs=0x2f3d;eip=0x000462; 	T(MOV(sp, bp));	// 101632 mov     sp, bp ;~ 2F3D:0462
cs=0x2f3d;eip=0x000464; 	X(POP(bp));	// 101633 pop     bp ;~ 2F3D:0464
cs=0x2f3d;eip=0x000465; 	R(RETF(0));	// 101634 retf ;~ 2F3D:0465
seg029_proc:
	// 101639 
loc_3de16:
	// 10882 
cs=0x2f3d;eip=0x000466; 	X(PUSH(bp));	// 101641 push    bp ;~ 2F3D:0466
cs=0x2f3d;eip=0x000467; 	T(MOV(bp, sp));	// 101642 mov     bp, sp ;~ 2F3D:0467
cs=0x2f3d;eip=0x000469; 	T(SUB(sp, 4));	// 101643 sub     sp, 4 ;~ 2F3D:0469
cs=0x2f3d;eip=0x00046c; 	T(MOV(ax, *(dw*)((&unk_56bb1))));	// 101644 mov     ax, word ptr unk_56BB1 ;~ 2F3D:046C
cs=0x2f3d;eip=0x00046f; 	T(MOV(dx, *(dw*)((&unk_56bb3))));	// 101645 mov     dx, word ptr unk_56BB3 ;~ 2F3D:046F
cs=0x2f3d;eip=0x000473; 	T(ADD(ax, 0x18));	// 101646 add     ax, 18h ;~ 2F3D:0473
cs=0x2f3d;eip=0x000476; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 101647 mov     [bp-4], ax ;~ 2F3D:0476
cs=0x2f3d;eip=0x000479; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 101648 mov     [bp-2], dx ;~ 2F3D:0479
cs=0x2f3d;eip=0x00047c; 	T(LES(bx, *(dw*)(raddr(ss,bp-4))));	// 101649 les     bx, [bp-4] ;~ 2F3D:047C
cs=0x2f3d;eip=0x00047f; 	T(CMP(*(dw*)(raddr(es,bx)), 0x1BBE));	// 101650 cmp     word ptr es:[bx], 1BBEh ;~ 2F3D:047F
cs=0x2f3d;eip=0x000484; 	R(JNZ(loc_3de3a));	// 101651 jnz     short loc_3DE3A ;~ 2F3D:0484
cs=0x2f3d;eip=0x000486; 	T(MOV(al, 3));	// 101652 mov     al, 3 ;~ 2F3D:0486
cs=0x2f3d;eip=0x000488; 	R(JMP(loc_3de3c));	// 101653 jmp     short loc_3DE3C ;~ 2F3D:0488
loc_3de3a:
	// 10883 
cs=0x2f3d;eip=0x00048a; 	T(MOV(al, 1));	// 101657 mov     al, 1 ;~ 2F3D:048A
loc_3de3c:
	// 10884 
cs=0x2f3d;eip=0x00048c; 	X(MOV(unk_535fc, al));	// 101660 mov     byte ptr unk_535FC, al ;~ 2F3D:048C
cs=0x2f3d;eip=0x00048f; 	X(MOV(unk_53472, al));	// 101661 mov     byte ptr unk_53472, al ;~ 2F3D:048F
cs=0x2f3d;eip=0x000492; 	T(MOV(sp, bp));	// 101662 mov     sp, bp ;~ 2F3D:0492
cs=0x2f3d;eip=0x000494; 	X(POP(bp));	// 101663 pop     bp ;~ 2F3D:0494
cs=0x2f3d;eip=0x000495; 	R(RETF(0));	// 101664 retf ;~ 2F3D:0495
loc_3de46:
	// 10885 
cs=0x2f3d;eip=0x000496; 	X(PUSH(bp));	// 101669 push    bp ;~ 2F3D:0496
cs=0x2f3d;eip=0x000497; 	T(MOV(bp, sp));	// 101670 mov     bp, sp ;~ 2F3D:0497
cs=0x2f3d;eip=0x000499; 	T(SUB(sp, 4));	// 101671 sub     sp, 4 ;~ 2F3D:0499
cs=0x2f3d;eip=0x00049c; 	T(MOV(ax, *(dw*)((&unk_56bb1))));	// 101672 mov     ax, word ptr unk_56BB1 ;~ 2F3D:049C
cs=0x2f3d;eip=0x00049f; 	T(MOV(dx, *(dw*)((&unk_56bb3))));	// 101673 mov     dx, word ptr unk_56BB3 ;~ 2F3D:049F
cs=0x2f3d;eip=0x0004a3; 	T(ADD(ax, 0x18));	// 101674 add     ax, 18h ;~ 2F3D:04A3
cs=0x2f3d;eip=0x0004a6; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 101675 mov     [bp-4], ax ;~ 2F3D:04A6
cs=0x2f3d;eip=0x0004a9; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 101676 mov     [bp-2], dx ;~ 2F3D:04A9
cs=0x2f3d;eip=0x0004ac; 	T(LES(bx, *(dw*)(raddr(ss,bp-4))));	// 101677 les     bx, [bp-4] ;~ 2F3D:04AC
cs=0x2f3d;eip=0x0004af; 	T(CMP(*(dw*)(raddr(es,bx)), 0x1C5A));	// 101678 cmp     word ptr es:[bx], 1C5Ah ;~ 2F3D:04AF
cs=0x2f3d;eip=0x0004b4; 	R(JNZ(loc_3de7e));	// 101679 jnz     short loc_3DE7E ;~ 2F3D:04B4
cs=0x2f3d;eip=0x0004b6; 	T(MOV(al, 3));	// 101680 mov     al, 3 ;~ 2F3D:04B6
cs=0x2f3d;eip=0x0004b8; 	X(MOV(unk_53bc1, al));	// 101681 mov     byte ptr unk_53BC1, al ;~ 2F3D:04B8
cs=0x2f3d;eip=0x0004bb; 	X(MOV(unk_53a28, al));	// 101682 mov     byte ptr unk_53A28, al ;~ 2F3D:04BB
cs=0x2f3d;eip=0x0004be; 	T(MOV(al, 1));	// 101683 mov     al, 1 ;~ 2F3D:04BE
cs=0x2f3d;eip=0x0004c0; 	X(MOV(unk_53bcb, al));	// 101684 mov     byte ptr unk_53BCB, al ;~ 2F3D:04C0
cs=0x2f3d;eip=0x0004c3; 	X(MOV(unk_53a32, al));	// 101685 mov     byte ptr unk_53A32, al ;~ 2F3D:04C3
cs=0x2f3d;eip=0x0004c6; 	X(MOV(*(dw*)((&unk_53b69)), 0x0FF0C));	// 101686 mov     word ptr unk_53B69, 0FF0Ch ;~ 2F3D:04C6
cs=0x2f3d;eip=0x0004cc; 	R(JMP(loc_3de94));	// 101687 jmp     short loc_3DE94 ;~ 2F3D:04CC
loc_3de7e:
	// 10886 
cs=0x2f3d;eip=0x0004ce; 	T(MOV(al, 1));	// 101691 mov     al, 1 ;~ 2F3D:04CE
cs=0x2f3d;eip=0x0004d0; 	X(MOV(unk_53bc1, al));	// 101692 mov     byte ptr unk_53BC1, al ;~ 2F3D:04D0
cs=0x2f3d;eip=0x0004d3; 	X(MOV(unk_53a28, al));	// 101693 mov     byte ptr unk_53A28, al ;~ 2F3D:04D3
cs=0x2f3d;eip=0x0004d6; 	T(MOV(al, 3));	// 101694 mov     al, 3 ;~ 2F3D:04D6
cs=0x2f3d;eip=0x0004d8; 	X(MOV(unk_53bcb, al));	// 101695 mov     byte ptr unk_53BCB, al ;~ 2F3D:04D8
cs=0x2f3d;eip=0x0004db; 	X(MOV(unk_53a32, al));	// 101696 mov     byte ptr unk_53A32, al ;~ 2F3D:04DB
cs=0x2f3d;eip=0x0004de; 	X(MOV(*(dw*)((&unk_53b69)), 0x0FF09));	// 101697 mov     word ptr unk_53B69, 0FF09h ;~ 2F3D:04DE
loc_3de94:
	// 10887 
cs=0x2f3d;eip=0x0004e4; 	T(MOV(sp, bp));	// 101700 mov     sp, bp ;~ 2F3D:04E4
cs=0x2f3d;eip=0x0004e6; 	X(POP(bp));	// 101701 pop     bp ;~ 2F3D:04E6
cs=0x2f3d;eip=0x0004e7; 	R(RETF(0));	// 101702 retf ;~ 2F3D:04E7
loc_3de98:
	// 10888 
cs=0x2f3d;eip=0x0004e8; 	X(PUSH(bp));	// 101707 push    bp ;~ 2F3D:04E8
cs=0x2f3d;eip=0x0004e9; 	T(MOV(bp, sp));	// 101708 mov     bp, sp ;~ 2F3D:04E9
cs=0x2f3d;eip=0x0004eb; 	T(SUB(sp, 6));	// 101709 sub     sp, 6 ;~ 2F3D:04EB
cs=0x2f3d;eip=0x0004ee; 	T(CMP(*(dw*)((&unk_56bb9)), 0x6771));	// 101710 cmp     word ptr unk_56BB9, 6771h ;~ 2F3D:04EE
cs=0x2f3d;eip=0x0004f4; 	R(JNZ(loc_3def3));	// 101711 jnz     short loc_3DEF3 ;~ 2F3D:04F4
cs=0x2f3d;eip=0x0004f6; 	T(MOV(ax, 0x6C47));	// 101712 mov     ax, 6C47h ;~ 2F3D:04F6
cs=0x2f3d;eip=0x0004f9; 	X(PUSH(ax));	// 101713 push    ax ;~ 2F3D:04F9
cs=0x2f3d;eip=0x0004fa; 	R(CALL(sub_3e27a,0));	// 101714 call    sub_3E27A ;~ 2F3D:04FA
cs=0x2f3d;eip=0x0004fd; 	T(MOV(ax, *(dw*)((&unk_56bb1))));	// 101715 mov     ax, word ptr unk_56BB1 ;~ 2F3D:04FD
cs=0x2f3d;eip=0x000500; 	T(MOV(dx, *(dw*)((&unk_56bb3))));	// 101716 mov     dx, word ptr unk_56BB3 ;~ 2F3D:0500
cs=0x2f3d;eip=0x000504; 	T(ADD(ax, 0x18));	// 101717 add     ax, 18h ;~ 2F3D:0504
cs=0x2f3d;eip=0x000507; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 101718 mov     [bp-4], ax ;~ 2F3D:0507
cs=0x2f3d;eip=0x00050a; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 101719 mov     [bp-2], dx ;~ 2F3D:050A
cs=0x2f3d;eip=0x00050d; 	T(LES(bx, *(dw*)(raddr(ss,bp-4))));	// 101720 les     bx, [bp-4] ;~ 2F3D:050D
cs=0x2f3d;eip=0x000510; 	T(CMP(*(dw*)(raddr(es,bx)), 0x1A74));	// 101721 cmp     word ptr es:[bx], 1A74h ;~ 2F3D:0510
cs=0x2f3d;eip=0x000515; 	R(JNZ(loc_3ded3));	// 101722 jnz     short loc_3DED3 ;~ 2F3D:0515
cs=0x2f3d;eip=0x000517; 	X(MOV(unk_4e581, 3));	// 101723 mov     byte ptr unk_4E581, 3 ;~ 2F3D:0517
cs=0x2f3d;eip=0x00051c; 	X(MOV(unk_4e56f, 1));	// 101724 mov     byte ptr unk_4E56F, 1 ;~ 2F3D:051C
cs=0x2f3d;eip=0x000521; 	R(JMP(loc_3dedd));	// 101725 jmp     short loc_3DEDD ;~ 2F3D:0521
loc_3ded3:
	// 10889 
cs=0x2f3d;eip=0x000523; 	X(MOV(unk_4e581, 1));	// 101729 mov     byte ptr unk_4E581, 1 ;~ 2F3D:0523
cs=0x2f3d;eip=0x000528; 	X(MOV(unk_4e56f, 3));	// 101730 mov     byte ptr unk_4E56F, 3 ;~ 2F3D:0528
loc_3dedd:
	// 10890 
cs=0x2f3d;eip=0x00052d; 	T(LES(bx, *(dw*)(raddr(ss,bp-4))));	// 101733 les     bx, [bp-4] ;~ 2F3D:052D
cs=0x2f3d;eip=0x000530; 	T(CMP(*(dw*)(raddr(es,bx)), 0x1ABC));	// 101734 cmp     word ptr es:[bx], 1ABCh ;~ 2F3D:0530
cs=0x2f3d;eip=0x000535; 	R(JNZ(loc_3deeb));	// 101735 jnz     short loc_3DEEB ;~ 2F3D:0535
cs=0x2f3d;eip=0x000537; 	T(MOV(al, 3));	// 101736 mov     al, 3 ;~ 2F3D:0537
cs=0x2f3d;eip=0x000539; 	R(JMP(loc_3deed));	// 101737 jmp     short loc_3DEED ;~ 2F3D:0539
loc_3deeb:
	// 10891 
cs=0x2f3d;eip=0x00053b; 	T(MOV(al, 1));	// 101741 mov     al, 1 ;~ 2F3D:053B
loc_3deed:
	// 10892 
cs=0x2f3d;eip=0x00053d; 	X(MOV(unk_4e5cd, al));	// 101744 mov     byte ptr unk_4E5CD, al ;~ 2F3D:053D
cs=0x2f3d;eip=0x000540; 	X(MOV(unk_4e5ad, al));	// 101745 mov     byte ptr unk_4E5AD, al ;~ 2F3D:0540
loc_3def3:
	// 10893 
cs=0x2f3d;eip=0x000543; 	T(MOV(sp, bp));	// 101748 mov     sp, bp ;~ 2F3D:0543
cs=0x2f3d;eip=0x000545; 	X(POP(bp));	// 101749 pop     bp ;~ 2F3D:0545
cs=0x2f3d;eip=0x000546; 	R(RETF(0));	// 101750 retf ;~ 2F3D:0546
loc_3def7:
	// 10894 
cs=0x2f3d;eip=0x000547; 	X(PUSH(bp));	// 101755 push    bp ;~ 2F3D:0547
cs=0x2f3d;eip=0x000548; 	T(MOV(bp, sp));	// 101756 mov     bp, sp ;~ 2F3D:0548
cs=0x2f3d;eip=0x00054a; 	T(SUB(sp, 4));	// 101757 sub     sp, 4 ;~ 2F3D:054A
cs=0x2f3d;eip=0x00054d; 	T(CMP(*(dw*)((&unk_56bb9)), 0x8030));	// 101758 cmp     word ptr unk_56BB9, 8030h ;~ 2F3D:054D
cs=0x2f3d;eip=0x000553; 	R(JNZ(loc_3df0c));	// 101759 jnz     short loc_3DF0C ;~ 2F3D:0553
cs=0x2f3d;eip=0x000555; 	T(MOV(ax, 0x8548));	// 101760 mov     ax, 8548h ;~ 2F3D:0555
cs=0x2f3d;eip=0x000558; 	X(PUSH(ax));	// 101761 push    ax ;~ 2F3D:0558
cs=0x2f3d;eip=0x000559; 	R(CALL(sub_3e27a,0));	// 101762 call    sub_3E27A ;~ 2F3D:0559
loc_3df0c:
	// 10895 
cs=0x2f3d;eip=0x00055c; 	T(MOV(sp, bp));	// 101765 mov     sp, bp ;~ 2F3D:055C
cs=0x2f3d;eip=0x00055e; 	X(POP(bp));	// 101766 pop     bp ;~ 2F3D:055E
cs=0x2f3d;eip=0x00055f; 	R(RETF(0));	// 101767 retf ;~ 2F3D:055F
loc_3df10:
	// 10896 
cs=0x2f3d;eip=0x000560; 	T(CMP(*(dw*)((&unk_56bb9)), 0x388C));	// 101772 cmp     word ptr unk_56BB9, 388Ch ;~ 2F3D:0560
cs=0x2f3d;eip=0x000566; 	R(JNZ(locret_3df2e));	// 101773 jnz     short locret_3DF2E ;~ 2F3D:0566
cs=0x2f3d;eip=0x000568; 	X(MOV(unk_4b5d4, 1));	// 101774 mov     byte ptr unk_4B5D4, 1 ;~ 2F3D:0568
cs=0x2f3d;eip=0x00056d; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 101775 les     bx, dword ptr unk_56FD6 ;~ 2F3D:056D
cs=0x2f3d;eip=0x000571; 	T(CMP(*(dw*)(raddr(es,bx+0x212)), 0));	// 101776 cmp     word ptr es:[bx+212h], 0 ;~ 2F3D:0571
cs=0x2f3d;eip=0x000577; 	R(JZ(locret_3df2e));	// 101777 jz      short locret_3DF2E ;~ 2F3D:0577
cs=0x2f3d;eip=0x000579; 	X(MOV(unk_4b5d4, 3));	// 101778 mov     byte ptr unk_4B5D4, 3 ;~ 2F3D:0579
locret_3df2e:
	// 10897 
cs=0x2f3d;eip=0x00057e; 	R(RETF(0));	// 101782 retf ;~ 2F3D:057E
loc_3df2f:
	// 10898 
cs=0x2f3d;eip=0x00057f; 	T(CMP(*(dw*)((&unk_56bb9)), 0x3EB0));	// 101787 cmp     word ptr unk_56BB9, 3EB0h ;~ 2F3D:057F
cs=0x2f3d;eip=0x000585; 	R(JNZ(locret_3df4d));	// 101788 jnz     short locret_3DF4D ;~ 2F3D:0585
cs=0x2f3d;eip=0x000587; 	X(MOV(unk_4be6d, 1));	// 101789 mov     byte ptr unk_4BE6D, 1 ;~ 2F3D:0587
cs=0x2f3d;eip=0x00058c; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 101790 les     bx, dword ptr unk_56FD6 ;~ 2F3D:058C
cs=0x2f3d;eip=0x000590; 	T(CMP(*(dw*)(raddr(es,bx+0x212)), 0));	// 101791 cmp     word ptr es:[bx+212h], 0 ;~ 2F3D:0590
cs=0x2f3d;eip=0x000596; 	R(JZ(locret_3df4d));	// 101792 jz      short locret_3DF4D ;~ 2F3D:0596
cs=0x2f3d;eip=0x000598; 	X(MOV(unk_4be6d, 3));	// 101793 mov     byte ptr unk_4BE6D, 3 ;~ 2F3D:0598
locret_3df4d:
	// 10899 
cs=0x2f3d;eip=0x00059d; 	R(RETF(0));	// 101797 retf ;~ 2F3D:059D
ret_2f3d_59e:
	// 10900 
cs=0x2f3d;eip=0x00059e; 	R(RETF(0));	// 101799 retf ;~ 2F3D:059E
cs=0x2f3d;eip=0x000820; 	X(PUSH(bp));	// 102207 push    bp ;~ 2F3D:0820
cs=0x2f3d;eip=0x000821; 	X(POP(bp));	// 102208 pop     bp ;~ 2F3D:0821
cs=0x2f3d;eip=0x000822; 	R(RETF(0));	// 102209 retf ;~ 2F3D:0822
locret_3e276:
	// 10925 
cs=0x2f3d;eip=0x0008c6; 	R(RETF(0));	// 102304 retf ;~ 2F3D:08C6
loc_3e277:
	// 10926 
cs=0x2f3d;eip=0x0008c7; 	X(PUSH(bp));	// 102308 push    bp ;~ 2F3D:08C7
cs=0x2f3d;eip=0x0008c8; 	X(POP(bp));	// 102309 pop     bp ;~ 2F3D:08C8
cs=0x2f3d;eip=0x0008c9; 	R(RETF(0));	// 102310 retf ;~ 2F3D:08C9
sub_3df4f:
	// 101805 
cs=0x2f3d;eip=0x00059f; 	X(PUSH(bp));	// 101806 push    bp ;~ 2F3D:059F
cs=0x2f3d;eip=0x0005a0; 	T(MOV(bp, sp));	// 101807 mov     bp, sp ;~ 2F3D:05A0
cs=0x2f3d;eip=0x0005a2; 	T(SUB(sp, 2));	// 101808 sub     sp, 2 ;~ 2F3D:05A2
cs=0x2f3d;eip=0x0005a5; 	X(PUSH(si));	// 101809 push    si ;~ 2F3D:05A5
cs=0x2f3d;eip=0x0005a6; 	X(MOV(*(dw*)((&unk_4b080)), 0));	// 101810 mov     word ptr unk_4B080, 0 ;~ 2F3D:05A6
cs=0x2f3d;eip=0x0005ac; 	T(MOV(si, 0x0CC8C));	// 101811 mov     si, 0CC8Ch ;~ 2F3D:05AC
cs=0x2f3d;eip=0x0005af; 	R(JMP(loc_3df73));	// 101812 jmp     short loc_3DF73 ;~ 2F3D:05AF
loc_3df61:
	// 10901 
cs=0x2f3d;eip=0x0005b1; 	T(MOV(ax, 0x36CE));	// 101816 mov     ax, 36CEh ;~ 2F3D:05B1
cs=0x2f3d;eip=0x0005b4; 	X(PUSH(ax));	// 101817 push    ax ;~ 2F3D:05B4
cs=0x2f3d;eip=0x0005b5; 	T(MOV(ax, 0x0E0));	// 101818 mov     ax, 0E0h ; 'à' ;~ 2F3D:05B5
cs=0x2f3d;eip=0x0005b8; 	X(PUSH(ax));	// 101819 push    ax ;~ 2F3D:05B8
cs=0x2f3d;eip=0x0005b9; 	R(CALLF(sub_24f74,0));	// 101820 call    sub_24F74 ;~ 2F3D:05B9
cs=0x2f3d;eip=0x0005be; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 101821 mov     [si], ax ;~ 2F3D:05BE
cs=0x2f3d;eip=0x0005c0; 	T(SUB(si, 6));	// 101822 sub     si, 6 ;~ 2F3D:05C0
loc_3df73:
	// 10902 
cs=0x2f3d;eip=0x0005c3; 	T(CMP(si, 0x0CC74));	// 101825 cmp     si, 0CC74h ;~ 2F3D:05C3
cs=0x2f3d;eip=0x0005c7; 	R(JNC(loc_3df61));	// 101826 jnb     short loc_3DF61 ;~ 2F3D:05C7
cs=0x2f3d;eip=0x0005c9; 	X(POP(si));	// 101827 pop     si ;~ 2F3D:05C9
cs=0x2f3d;eip=0x0005ca; 	T(MOV(sp, bp));	// 101828 mov     sp, bp ;~ 2F3D:05CA
cs=0x2f3d;eip=0x0005cc; 	X(POP(bp));	// 101829 pop     bp ;~ 2F3D:05CC
cs=0x2f3d;eip=0x0005cd; 	R(RETF(0));	// 101830 retf ;~ 2F3D:05CD
sub_3df7e:
	// 101838 
cs=0x2f3d;eip=0x0005ce; 	X(PUSH(bp));	// 101839 push    bp ;~ 2F3D:05CE
cs=0x2f3d;eip=0x0005cf; 	T(MOV(bp, sp));	// 101840 mov     bp, sp ;~ 2F3D:05CF
cs=0x2f3d;eip=0x0005d1; 	T(SUB(sp, 2));	// 101841 sub     sp, 2 ;~ 2F3D:05D1
cs=0x2f3d;eip=0x0005d4; 	X(PUSH(si));	// 101842 push    si ;~ 2F3D:05D4
cs=0x2f3d;eip=0x0005d5; 	T(MOV(si, 0x0CC8C));	// 101843 mov     si, 0CC8Ch ;~ 2F3D:05D5
cs=0x2f3d;eip=0x0005d8; 	R(JMP(loc_3df95));	// 101844 jmp     short loc_3DF95 ;~ 2F3D:05D8
loc_3df8a:
	// 10903 
cs=0x2f3d;eip=0x0005da; 	X(PUSH(si));	// 101848 push    si ;~ 2F3D:05DA
cs=0x2f3d;eip=0x0005db; 	X(PUSH(cs));	// 101849 push    cs ;~ 2F3D:05DB
cs=0x2f3d;eip=0x0005dc; 	R(CALL(sub_3e098,0));	// 101850 call    near ptr sub_3E098 ;~ 2F3D:05DC
cs=0x2f3d;eip=0x0005df; 	T(ADD(sp, 2));	// 101851 add     sp, 2 ;~ 2F3D:05DF
cs=0x2f3d;eip=0x0005e2; 	T(SUB(si, 6));	// 101852 sub     si, 6 ;~ 2F3D:05E2
loc_3df95:
	// 10904 
cs=0x2f3d;eip=0x0005e5; 	T(CMP(si, 0x0CC74));	// 101855 cmp     si, 0CC74h ;~ 2F3D:05E5
cs=0x2f3d;eip=0x0005e9; 	R(JNC(loc_3df8a));	// 101856 jnb     short loc_3DF8A ;~ 2F3D:05E9
cs=0x2f3d;eip=0x0005eb; 	X(POP(si));	// 101857 pop     si ;~ 2F3D:05EB
cs=0x2f3d;eip=0x0005ec; 	T(MOV(sp, bp));	// 101858 mov     sp, bp ;~ 2F3D:05EC
cs=0x2f3d;eip=0x0005ee; 	X(POP(bp));	// 101859 pop     bp ;~ 2F3D:05EE
cs=0x2f3d;eip=0x0005ef; 	R(RETF(0));	// 101860 retf ;~ 2F3D:05EF
sub_3dfa0:
	// 101868 
#undef var_c
#define var_c -0x0C
	// 101871 var_C           = word ptr -0Ch ;~ 2F3D:05F0
#undef var_a
#define var_a -0x0A
	// 101872 var_A           = word ptr -0Ah ;~ 2F3D:05F0
#undef var_8
#define var_8 -8
	// 101873 var_8           = word ptr -8 ;~ 2F3D:05F0
#undef var_6
#define var_6 -6
	// 101874 var_6           = word ptr -6 ;~ 2F3D:05F0
#undef arg_0
#define arg_0 6
	// 101875 arg_0           = word ptr  6 ;~ 2F3D:05F0
#undef arg_2
#define arg_2 8
	// 101876 arg_2           = word ptr  8 ;~ 2F3D:05F0
#undef arg_4
#define arg_4 0x0A
	// 101877 arg_4           = word ptr  0Ah ;~ 2F3D:05F0
#undef arg_6
#define arg_6 0x0C
	// 101878 arg_6           = word ptr  0Ch ;~ 2F3D:05F0
cs=0x2f3d;eip=0x0005f0; 	X(PUSH(bp));	// 101880 push    bp ;~ 2F3D:05F0
cs=0x2f3d;eip=0x0005f1; 	T(MOV(bp, sp));	// 101881 mov     bp, sp ;~ 2F3D:05F1
cs=0x2f3d;eip=0x0005f3; 	T(SUB(sp, 0x0C));	// 101882 sub     sp, 0Ch ;~ 2F3D:05F3
cs=0x2f3d;eip=0x0005f6; 	X(PUSH(di));	// 101883 push    di ;~ 2F3D:05F6
cs=0x2f3d;eip=0x0005f7; 	X(PUSH(si));	// 101884 push    si ;~ 2F3D:05F7
cs=0x2f3d;eip=0x0005f8; 	T(MOV(si, 0x0CC8C));	// 101885 mov     si, 0CC8Ch ;~ 2F3D:05F8
cs=0x2f3d;eip=0x0005fb; 	T(CMP(si, 0x0CC74));	// 101886 cmp     si, 0CC74h ;~ 2F3D:05FB
cs=0x2f3d;eip=0x0005ff; 	R(JC(loc_3dfd0));	// 101887 jb      short loc_3DFD0 ;~ 2F3D:05FF
cs=0x2f3d;eip=0x000601; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 101888 mov     dx, word ptr unk_47A9A ;~ 2F3D:0601
cs=0x2f3d;eip=0x000605; 	T(SUB(ax, ax));	// 101889 sub     ax, ax ;~ 2F3D:0605
cs=0x2f3d;eip=0x000607; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 101890 mov     [bp+var_C], ax ;~ 2F3D:0607
cs=0x2f3d;eip=0x00060a; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 101891 mov     [bp+var_A], dx ;~ 2F3D:060A
loc_3dfbd:
	// 10905 
cs=0x2f3d;eip=0x00060d; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 101894 mov     ax, [si] ;~ 2F3D:060D
cs=0x2f3d;eip=0x00060f; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_c))));	// 101895 or      ax, [bp+var_C] ;~ 2F3D:060F
cs=0x2f3d;eip=0x000612; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_a))));	// 101896 mov     dx, [bp+var_A] ;~ 2F3D:0612
cs=0x2f3d;eip=0x000615; 	T(MOV(es, dx));	// 101897 mov     es, dx ;~ 2F3D:0615
cs=0x2f3d;eip=0x000617; 	T(MOV(bx, ax));	// 101898 mov     bx, ax ;~ 2F3D:0617
cs=0x2f3d;eip=0x000619; 	T(TEST(*(raddr(es,bx+2)), 1));	// 101899 test    byte ptr es:[bx+2], 1 ;~ 2F3D:0619
cs=0x2f3d;eip=0x00061e; 	R(JNZ(loc_3dfeb));	// 101900 jnz     short loc_3DFEB ;~ 2F3D:061E
loc_3dfd0:
	// 10906 
cs=0x2f3d;eip=0x000620; 	T(CMP(si, 0x0CC74));	// 101904 cmp     si, 0CC74h ;~ 2F3D:0620
cs=0x2f3d;eip=0x000624; 	R(JNC(loc_3e027));	// 101905 jnb     short loc_3E027 ;~ 2F3D:0624
cs=0x2f3d;eip=0x000626; 	T(MOV(si, 0x0CC74));	// 101906 mov     si, 0CC74h ;~ 2F3D:0626
cs=0x2f3d;eip=0x000629; 	T(MOV(ax, *(dw*)((&unk_54626))));	// 101907 mov     ax, word ptr unk_54626 ;~ 2F3D:0629
cs=0x2f3d;eip=0x00062c; 	T(MOV(dx, *(dw*)((&unk_54628))));	// 101908 mov     dx, word ptr unk_54628 ;~ 2F3D:062C
cs=0x2f3d;eip=0x000630; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 101909 mov     [bp+var_8], ax ;~ 2F3D:0630
cs=0x2f3d;eip=0x000633; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 101910 mov     [bp+var_6], dx ;~ 2F3D:0633
cs=0x2f3d;eip=0x000636; 	T(MOV(di, 0x0CC8C));	// 101911 mov     di, 0CC8Ch ;~ 2F3D:0636
cs=0x2f3d;eip=0x000639; 	R(JMP(loc_3e019));	// 101912 jmp     short loc_3E019 ;~ 2F3D:0639
loc_3dfeb:
	// 10907 
cs=0x2f3d;eip=0x00063b; 	T(SUB(si, 6));	// 101916 sub     si, 6 ;~ 2F3D:063B
cs=0x2f3d;eip=0x00063e; 	T(CMP(si, 0x0CC74));	// 101917 cmp     si, 0CC74h ;~ 2F3D:063E
cs=0x2f3d;eip=0x000642; 	R(JC(loc_3dfd0));	// 101918 jb      short loc_3DFD0 ;~ 2F3D:0642
cs=0x2f3d;eip=0x000644; 	R(JMP(loc_3dfbd));	// 101919 jmp     short loc_3DFBD ;~ 2F3D:0644
loc_3dff6:
	// 10908 
cs=0x2f3d;eip=0x000646; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 101923 mov     ax, [bp+var_8] ;~ 2F3D:0646
cs=0x2f3d;eip=0x000649; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 101924 mov     dx, [bp+var_6] ;~ 2F3D:0649
cs=0x2f3d;eip=0x00064c; 	T(CMP(*(dw*)(raddr(ds,di+4)), dx));	// 101925 cmp     [di+4], dx ;~ 2F3D:064C
cs=0x2f3d;eip=0x00064f; 	R(JG(loc_3e016));	// 101926 jg      short loc_3E016 ;~ 2F3D:064F
cs=0x2f3d;eip=0x000651; 	R(JL(loc_3e008));	// 101927 jl      short loc_3E008 ;~ 2F3D:0651
cs=0x2f3d;eip=0x000653; 	T(CMP(*(dw*)(raddr(ds,di+2)), ax));	// 101928 cmp     [di+2], ax ;~ 2F3D:0653
cs=0x2f3d;eip=0x000656; 	R(JNC(loc_3e016));	// 101929 jnb     short loc_3E016 ;~ 2F3D:0656
loc_3e008:
	// 10909 
cs=0x2f3d;eip=0x000658; 	T(MOV(si, di));	// 101932 mov     si, di ;~ 2F3D:0658
cs=0x2f3d;eip=0x00065a; 	T(MOV(ax, *(dw*)(raddr(ds,di+2))));	// 101933 mov     ax, [di+2] ;~ 2F3D:065A
cs=0x2f3d;eip=0x00065d; 	T(MOV(dx, *(dw*)(raddr(ds,di+4))));	// 101934 mov     dx, [di+4] ;~ 2F3D:065D
cs=0x2f3d;eip=0x000660; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 101935 mov     [bp+var_8], ax ;~ 2F3D:0660
cs=0x2f3d;eip=0x000663; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 101936 mov     [bp+var_6], dx ;~ 2F3D:0663
loc_3e016:
	// 10910 
cs=0x2f3d;eip=0x000666; 	T(SUB(di, 6));	// 101940 sub     di, 6 ;~ 2F3D:0666
loc_3e019:
	// 10911 
cs=0x2f3d;eip=0x000669; 	T(CMP(di, 0x0CC7A));	// 101943 cmp     di, 0CC7Ah ;~ 2F3D:0669
cs=0x2f3d;eip=0x00066d; 	R(JNC(loc_3dff6));	// 101944 jnb     short loc_3DFF6 ;~ 2F3D:066D
cs=0x2f3d;eip=0x00066f; 	X(PUSH(si));	// 101945 push    si ;~ 2F3D:066F
cs=0x2f3d;eip=0x000670; 	X(PUSH(cs));	// 101946 push    cs ;~ 2F3D:0670
cs=0x2f3d;eip=0x000671; 	R(CALL(sub_3e098,0));	// 101947 call    near ptr sub_3E098 ;~ 2F3D:0671
cs=0x2f3d;eip=0x000674; 	T(ADD(sp, 2));	// 101948 add     sp, 2 ;~ 2F3D:0674
loc_3e027:
	// 10912 
cs=0x2f3d;eip=0x000677; 	T(CMP(unk_57041, 2));	// 101951 cmp     byte ptr unk_57041, 2 ;~ 2F3D:0677
cs=0x2f3d;eip=0x00067c; 	R(JC(loc_3e039));	// 101952 jb      short loc_3E039 ;~ 2F3D:067C
cs=0x2f3d;eip=0x00067e; 	T(MOV(ax, 0x0B40));	// 101953 mov     ax, 0B40h ;~ 2F3D:067E
cs=0x2f3d;eip=0x000681; 	X(PUSH(ax));	// 101954 push    ax ;~ 2F3D:0681
cs=0x2f3d;eip=0x000682; 	R(CALLF(sub_2937a,0));	// 101955 call    sub_2937A ;~ 2F3D:0682
cs=0x2f3d;eip=0x000687; 	R(JMP(loc_3e03b));	// 101956 jmp     short loc_3E03B ;~ 2F3D:0687
loc_3e039:
	// 10913 
cs=0x2f3d;eip=0x000689; 	T(SUB(ax, ax));	// 101960 sub     ax, ax ;~ 2F3D:0689
loc_3e03b:
	// 10914 
cs=0x2f3d;eip=0x00068b; 	T(MOV(bx, *(dw*)((&unk_47a9a))));	// 101963 mov     bx, word ptr unk_47A9A ;~ 2F3D:068B
cs=0x2f3d;eip=0x00068f; 	T(MOV(cx, *(dw*)(raddr(ds,si))));	// 101964 mov     cx, [si] ;~ 2F3D:068F
cs=0x2f3d;eip=0x000691; 	T(MOV(es, bx));	// 101965 mov     es, bx ;~ 2F3D:0691
cs=0x2f3d;eip=0x000693; 	T(MOV(bx, cx));	// 101967 mov     bx, cx ;~ 2F3D:0693
cs=0x2f3d;eip=0x000695; 	X(MOV(*(dw*)(raddr(es,bx+0x12)), ax));	// 101968 mov     es:[bx+12h], ax ;~ 2F3D:0695
cs=0x2f3d;eip=0x000699; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 101969 mov     ax, [bp+arg_0] ;~ 2F3D:0699
cs=0x2f3d;eip=0x00069c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 101970 mov     dx, [bp+arg_2] ;~ 2F3D:069C
cs=0x2f3d;eip=0x00069f; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 101971 mov     es:[bx+6], ax ;~ 2F3D:069F
cs=0x2f3d;eip=0x0006a3; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 101972 mov     es:[bx+8], dx ;~ 2F3D:06A3
cs=0x2f3d;eip=0x0006a7; 	T(MOV(ax, cx));	// 101973 mov     ax, cx ;~ 2F3D:06A7
cs=0x2f3d;eip=0x0006a9; 	T(SUB(ax, ax));	// 101974 sub     ax, ax ;~ 2F3D:06A9
cs=0x2f3d;eip=0x0006ab; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), ax));	// 101975 mov     es:[bx+0Ch], ax ;~ 2F3D:06AB
cs=0x2f3d;eip=0x0006af; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 101976 mov     es:[bx+0Ah], ax ;~ 2F3D:06AF
cs=0x2f3d;eip=0x0006b3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 101977 mov     ax, [bp+arg_4] ;~ 2F3D:06B3
cs=0x2f3d;eip=0x0006b6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 101978 mov     dx, [bp+arg_6] ;~ 2F3D:06B6
cs=0x2f3d;eip=0x0006b9; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 101979 mov     es:[bx+0Eh], ax ;~ 2F3D:06B9
cs=0x2f3d;eip=0x0006bd; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), dx));	// 101980 mov     es:[bx+10h], dx ;~ 2F3D:06BD
cs=0x2f3d;eip=0x0006c1; 	T(MOV(ax, cx));	// 101981 mov     ax, cx ;~ 2F3D:06C1
cs=0x2f3d;eip=0x0006c3; 	X(OR(*(raddr(es,bx+2)), 1));	// 101982 or      byte ptr es:[bx+2], 1 ;~ 2F3D:06C3
cs=0x2f3d;eip=0x0006c8; 	X(PUSH(ax));	// 101983 push    ax ;~ 2F3D:06C8
cs=0x2f3d;eip=0x0006c9; 	T(MOV(ax, 0x0EAE4));	// 101984 mov     ax, 0EAE4h ;~ 2F3D:06C9
cs=0x2f3d;eip=0x0006cc; 	X(PUSH(ax));	// 101985 push    ax ;~ 2F3D:06CC
cs=0x2f3d;eip=0x0006cd; 	R(CALLF(sub_23e92,0));	// 101986 call    sub_23E92 ;~ 2F3D:06CD
cs=0x2f3d;eip=0x0006d2; 	T(ADD(sp, 4));	// 101987 add     sp, 4 ;~ 2F3D:06D2
cs=0x2f3d;eip=0x0006d5; 	T(MOV(ax, word_5705a));	// 101988 mov     ax, word_5705A ;~ 2F3D:06D5
cs=0x2f3d;eip=0x0006d8; 	T(MOV(dx, word_5705c));	// 101989 mov     dx, word_5705C ;~ 2F3D:06D8
cs=0x2f3d;eip=0x0006dc; 	X(MOV(*(dw*)(raddr(ds,si+2)), ax));	// 101990 mov     [si+2], ax ;~ 2F3D:06DC
cs=0x2f3d;eip=0x0006df; 	X(MOV(*(dw*)(raddr(ds,si+4)), dx));	// 101991 mov     [si+4], dx ;~ 2F3D:06DF
cs=0x2f3d;eip=0x0006e2; 	X(POP(si));	// 101992 pop     si ;~ 2F3D:06E2
cs=0x2f3d;eip=0x0006e3; 	X(POP(di));	// 101993 pop     di ;~ 2F3D:06E3
cs=0x2f3d;eip=0x0006e4; 	T(MOV(sp, bp));	// 101994 mov     sp, bp ;~ 2F3D:06E4
cs=0x2f3d;eip=0x0006e6; 	X(POP(bp));	// 101995 pop     bp ;~ 2F3D:06E6
cs=0x2f3d;eip=0x0006e7; 	R(RETF(0));	// 101996 retf ;~ 2F3D:06E7
sub_3e098:
	// 102004 
#undef arg_0
#define arg_0 6
	// 102007 arg_0           = word ptr  6 ;~ 2F3D:06E8
cs=0x2f3d;eip=0x0006e8; 	X(PUSH(bp));	// 102009 push    bp ;~ 2F3D:06E8
cs=0x2f3d;eip=0x0006e9; 	T(MOV(bp, sp));	// 102010 mov     bp, sp ;~ 2F3D:06E9
cs=0x2f3d;eip=0x0006eb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 102011 mov     bx, [bp+arg_0] ;~ 2F3D:06EB
cs=0x2f3d;eip=0x0006ee; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 102012 mov     ax, [bx] ;~ 2F3D:06EE
cs=0x2f3d;eip=0x0006f0; 	T(MOV(bx, *(dw*)((&unk_47a9a))));	// 102013 mov     bx, word ptr unk_47A9A ;~ 2F3D:06F0
cs=0x2f3d;eip=0x0006f4; 	T(MOV(dx, bx));	// 102014 mov     dx, bx ;~ 2F3D:06F4
cs=0x2f3d;eip=0x0006f6; 	T(MOV(es, dx));	// 102015 mov     es, dx ;~ 2F3D:06F6
cs=0x2f3d;eip=0x0006f8; 	T(MOV(bx, ax));	// 102016 mov     bx, ax ;~ 2F3D:06F8
cs=0x2f3d;eip=0x0006fa; 	X(AND(*(raddr(es,bx+2)), 0x0FE));	// 102017 and     byte ptr es:[bx+2], 0FEh ;~ 2F3D:06FA
cs=0x2f3d;eip=0x0006ff; 	X(POP(bp));	// 102018 pop     bp ;~ 2F3D:06FF
cs=0x2f3d;eip=0x000700; 	R(RETF(0));	// 102019 retf ;~ 2F3D:0700
sub_3e0b1:
	// 102027 
#undef arg_0
#define arg_0 6
	// 102029 arg_0           = byte ptr  6 ;~ 2F3D:0701
cs=0x2f3d;eip=0x000701; 	X(PUSH(bp));	// 102031 push    bp ;~ 2F3D:0701
cs=0x2f3d;eip=0x000702; 	T(MOV(bp, sp));	// 102032 mov     bp, sp ;~ 2F3D:0702
cs=0x2f3d;eip=0x000704; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 102033 cmp     [bp+arg_0], 0 ;~ 2F3D:0704
cs=0x2f3d;eip=0x000708; 	R(JZ(loc_3e0c5));	// 102034 jz      short loc_3E0C5 ;~ 2F3D:0708
cs=0x2f3d;eip=0x00070a; 	T(LES(bx, *(dd*)((&unk_4b076))));	// 102035 les     bx, dword ptr unk_4B076 ;~ 2F3D:070A
cs=0x2f3d;eip=0x00070e; 	X(OR(*(raddr(es,bx+2)), 1));	// 102037 or      byte ptr es:[bx+2], 1 ;~ 2F3D:070E
cs=0x2f3d;eip=0x000713; 	R(JMP(loc_3e0ce));	// 102038 jmp     short loc_3E0CE ;~ 2F3D:0713
loc_3e0c5:
	// 10915 
cs=0x2f3d;eip=0x000715; 	T(LES(bx, *(dd*)((&unk_4b076))));	// 102042 les     bx, dword ptr unk_4B076 ;~ 2F3D:0715
cs=0x2f3d;eip=0x000719; 	X(AND(*(raddr(es,bx+2)), 0x0FE));	// 102043 and     byte ptr es:[bx+2], 0FEh ;~ 2F3D:0719
loc_3e0ce:
	// 10916 
cs=0x2f3d;eip=0x00071e; 	X(POP(bp));	// 102046 pop     bp ;~ 2F3D:071E
cs=0x2f3d;eip=0x00071f; 	R(RETF(0));	// 102047 retf ;~ 2F3D:071F
sub_3e0d0:
	// 102055 
#undef arg_0
#define arg_0 6
	// 102058 arg_0           = word ptr  6 ;~ 2F3D:0720
#undef arg_2
#define arg_2 8
	// 102059 arg_2           = word ptr  8 ;~ 2F3D:0720
#undef arg_4
#define arg_4 0x0A
	// 102060 arg_4           = word ptr  0Ah ;~ 2F3D:0720
#undef arg_6
#define arg_6 0x0C
	// 102061 arg_6           = word ptr  0Ch ;~ 2F3D:0720
#undef arg_8
#define arg_8 0x0E
	// 102062 arg_8           = word ptr  0Eh ;~ 2F3D:0720
#undef arg_a
#define arg_a 0x10
	// 102063 arg_A           = word ptr  10h ;~ 2F3D:0720
cs=0x2f3d;eip=0x000720; 	X(PUSH(bp));	// 102065 push    bp ;~ 2F3D:0720
cs=0x2f3d;eip=0x000721; 	T(MOV(bp, sp));	// 102066 mov     bp, sp ;~ 2F3D:0721
cs=0x2f3d;eip=0x000723; 	T(LES(bx, *(dd*)((&unk_4b076))));	// 102067 les     bx, dword ptr unk_4B076 ;~ 2F3D:0723
cs=0x2f3d;eip=0x000727; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 102068 mov     ax, [bp+arg_0] ;~ 2F3D:0727
cs=0x2f3d;eip=0x00072a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 102069 mov     dx, [bp+arg_2] ;~ 2F3D:072A
cs=0x2f3d;eip=0x00072d; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 102070 mov     es:[bx+6], ax ;~ 2F3D:072D
cs=0x2f3d;eip=0x000731; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 102071 mov     es:[bx+8], dx ;~ 2F3D:0731
cs=0x2f3d;eip=0x000735; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 102072 mov     ax, [bp+arg_4] ;~ 2F3D:0735
cs=0x2f3d;eip=0x000738; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 102073 mov     dx, [bp+arg_6] ;~ 2F3D:0738
cs=0x2f3d;eip=0x00073b; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 102074 mov     es:[bx+0Ah], ax ;~ 2F3D:073B
cs=0x2f3d;eip=0x00073f; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 102075 mov     es:[bx+0Ch], dx ;~ 2F3D:073F
cs=0x2f3d;eip=0x000743; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 102076 mov     ax, [bp+arg_8] ;~ 2F3D:0743
cs=0x2f3d;eip=0x000746; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_a))));	// 102077 mov     dx, [bp+arg_A] ;~ 2F3D:0746
cs=0x2f3d;eip=0x000749; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 102078 mov     es:[bx+0Eh], ax ;~ 2F3D:0749
cs=0x2f3d;eip=0x00074d; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), dx));	// 102079 mov     es:[bx+10h], dx ;~ 2F3D:074D
cs=0x2f3d;eip=0x000751; 	X(POP(bp));	// 102080 pop     bp ;~ 2F3D:0751
cs=0x2f3d;eip=0x000752; 	R(RETF(0));	// 102081 retf ;~ 2F3D:0752
sub_3e103:
	// 102089 
#undef arg_0
#define arg_0 6
	// 102091 arg_0           = word ptr  6 ;~ 2F3D:0753
#undef arg_6
#define arg_6 0x0C
	// 102092 arg_6           = word ptr  0Ch ;~ 2F3D:0753
cs=0x2f3d;eip=0x000753; 	X(PUSH(bp));	// 102094 push    bp ;~ 2F3D:0753
cs=0x2f3d;eip=0x000754; 	T(MOV(bp, sp));	// 102095 mov     bp, sp ;~ 2F3D:0754
cs=0x2f3d;eip=0x000756; 	T(SUB(sp, 0x0A));	// 102096 sub     sp, 0Ah ;~ 2F3D:0756
cs=0x2f3d;eip=0x000759; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 102097 mov     ax, [bp+arg_0] ;~ 2F3D:0759
cs=0x2f3d;eip=0x00075c; 	T(CWD);	// 102098 cwd ;~ 2F3D:075C
cs=0x2f3d;eip=0x00075d; 	T(MOV(dh, dl));	// 102099 mov     dh, dl ;~ 2F3D:075D
cs=0x2f3d;eip=0x00075f; 	T(MOV(dl, ah));	// 102100 mov     dl, ah ;~ 2F3D:075F
cs=0x2f3d;eip=0x000761; 	T(MOV(ah, al));	// 102101 mov     ah, al ;~ 2F3D:0761
cs=0x2f3d;eip=0x000763; 	T(SUB(al, al));	// 102102 sub     al, al ;~ 2F3D:0763
cs=0x2f3d;eip=0x000765; 	T(MOV(ax, dx));	// 102103 mov     ax, dx ;~ 2F3D:0765
cs=0x2f3d;eip=0x000767; 	X(MOV(*(dw*)((&unk_4e918)), ax));	// 102104 mov     word ptr unk_4E918, ax ;~ 2F3D:0767
cs=0x2f3d;eip=0x00076a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 102105 mov     ax, [bp+arg_6] ;~ 2F3D:076A
cs=0x2f3d;eip=0x00076d; 	T(CWD);	// 102106 cwd ;~ 2F3D:076D
cs=0x2f3d;eip=0x00076e; 	T(MOV(dh, dl));	// 102107 mov     dh, dl ;~ 2F3D:076E
cs=0x2f3d;eip=0x000770; 	T(MOV(dl, ah));	// 102108 mov     dl, ah ;~ 2F3D:0770
cs=0x2f3d;eip=0x000772; 	T(MOV(ah, al));	// 102109 mov     ah, al ;~ 2F3D:0772
cs=0x2f3d;eip=0x000774; 	T(SUB(al, al));	// 102110 sub     al, al ;~ 2F3D:0774
cs=0x2f3d;eip=0x000776; 	X(MOV(*(dw*)((&unk_54620)), ax));	// 102111 mov     word ptr unk_54620, ax ;~ 2F3D:0776
cs=0x2f3d;eip=0x000779; 	X(MOV(*(dw*)((&unk_54622)), dx));	// 102112 mov     word ptr unk_54622, dx ;~ 2F3D:0779
cs=0x2f3d;eip=0x00077d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 102113 mov     ax, [bp+arg_6] ;~ 2F3D:077D
cs=0x2f3d;eip=0x000780; 	T(DEC(ax));	// 102114 dec     ax ;~ 2F3D:0780
cs=0x2f3d;eip=0x000781; 	T(CWD);	// 102115 cwd ;~ 2F3D:0781
cs=0x2f3d;eip=0x000782; 	T(MOV(dh, dl));	// 102116 mov     dh, dl ;~ 2F3D:0782
cs=0x2f3d;eip=0x000784; 	T(MOV(dl, ah));	// 102117 mov     dl, ah ;~ 2F3D:0784
cs=0x2f3d;eip=0x000786; 	T(MOV(ah, al));	// 102118 mov     ah, al ;~ 2F3D:0786
cs=0x2f3d;eip=0x000788; 	T(MOV(al, 0x0FF));	// 102119 mov     al, 0FFh ;~ 2F3D:0788
cs=0x2f3d;eip=0x00078a; 	T(NOT(ax));	// 102120 not     ax ;~ 2F3D:078A
cs=0x2f3d;eip=0x00078c; 	T(NOT(dx));	// 102121 not     dx ;~ 2F3D:078C
cs=0x2f3d;eip=0x00078e; 	X(MOV(*(dw*)((&unk_5461c)), ax));	// 102122 mov     word ptr unk_5461C, ax ;~ 2F3D:078E
cs=0x2f3d;eip=0x000791; 	X(MOV(*(dw*)((&unk_5461e)), dx));	// 102123 mov     word ptr unk_5461E, dx ;~ 2F3D:0791
cs=0x2f3d;eip=0x000795; 	T(MOV(sp, bp));	// 102124 mov     sp, bp ;~ 2F3D:0795
cs=0x2f3d;eip=0x000797; 	X(POP(bp));	// 102125 pop     bp ;~ 2F3D:0797
cs=0x2f3d;eip=0x000798; 	R(RETF(0));	// 102126 retf ;~ 2F3D:0798
sub_3e149:
	// 102134 
#undef var_4
#define var_4 -4
	// 102137 var_4           = word ptr -4 ;~ 2F3D:0799
#undef var_2
#define var_2 -2
	// 102138 var_2           = word ptr -2 ;~ 2F3D:0799
#undef arg_0
#define arg_0 6
	// 102139 arg_0           = word ptr  6 ;~ 2F3D:0799
#undef arg_2
#define arg_2 8
	// 102140 arg_2           = word ptr  8 ;~ 2F3D:0799
#undef arg_8
#define arg_8 0x0E
	// 102141 arg_8           = word ptr  0Eh ;~ 2F3D:0799
#undef arg_a
#define arg_a 0x10
	// 102142 arg_A           = word ptr  10h ;~ 2F3D:0799
cs=0x2f3d;eip=0x000799; 	X(PUSH(bp));	// 102144 push    bp ;~ 2F3D:0799
cs=0x2f3d;eip=0x00079a; 	T(MOV(bp, sp));	// 102145 mov     bp, sp ;~ 2F3D:079A
cs=0x2f3d;eip=0x00079c; 	T(SUB(sp, 4));	// 102146 sub     sp, 4 ;~ 2F3D:079C
cs=0x2f3d;eip=0x00079f; 	T(MOV(ax, *(dw*)((&unk_54620))));	// 102147 mov     ax, word ptr unk_54620 ;~ 2F3D:079F
cs=0x2f3d;eip=0x0007a2; 	T(MOV(dx, *(dw*)((&unk_54622))));	// 102148 mov     dx, word ptr unk_54622 ;~ 2F3D:07A2
cs=0x2f3d;eip=0x0007a6; 	T(MOV(cl, 1));	// 102149 mov     cl, 1 ;~ 2F3D:07A6
cs=0x2f3d;eip=0x0007a8; 	T(SUB(cl, unk_4e916));	// 102150 sub     cl, byte ptr unk_4E916 ;~ 2F3D:07A8
cs=0x2f3d;eip=0x0007ac; 	R(CALLF(sub_10240,0));	// 102151 call    sub_10240 ;~ 2F3D:07AC
cs=0x2f3d;eip=0x0007b1; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 102152 mov     [bp+var_4], ax ;~ 2F3D:07B1
cs=0x2f3d;eip=0x0007b4; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 102153 mov     [bp+var_2], dx ;~ 2F3D:07B4
cs=0x2f3d;eip=0x0007b7; 	T(LES(bx, *(dd*)((&unk_4b072))));	// 102154 les     bx, dword ptr unk_4B072 ;~ 2F3D:07B7
cs=0x2f3d;eip=0x0007bb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 102155 mov     ax, [bp+arg_0] ;~ 2F3D:07BB
cs=0x2f3d;eip=0x0007be; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 102156 mov     dx, [bp+arg_2] ;~ 2F3D:07BE
cs=0x2f3d;eip=0x0007c1; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 102157 add     ax, [bp+var_4] ;~ 2F3D:07C1
cs=0x2f3d;eip=0x0007c4; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_2))));	// 102158 adc     dx, [bp+var_2] ;~ 2F3D:07C4
cs=0x2f3d;eip=0x0007c7; 	T(AND(ax, *(dw*)((&unk_5461c))));	// 102159 and     ax, word ptr unk_5461C ;~ 2F3D:07C7
cs=0x2f3d;eip=0x0007cb; 	T(AND(dx, *(dw*)((&unk_5461e))));	// 102160 and     dx, word ptr unk_5461E ;~ 2F3D:07CB
cs=0x2f3d;eip=0x0007cf; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 102161 mov     es:[bx+6], ax ;~ 2F3D:07CF
cs=0x2f3d;eip=0x0007d3; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 102162 mov     es:[bx+8], dx ;~ 2F3D:07D3
cs=0x2f3d;eip=0x0007d7; 	T(SUB(ax, ax));	// 102163 sub     ax, ax ;~ 2F3D:07D7
cs=0x2f3d;eip=0x0007d9; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), ax));	// 102164 mov     es:[bx+0Ch], ax ;~ 2F3D:07D9
cs=0x2f3d;eip=0x0007dd; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 102165 mov     es:[bx+0Ah], ax ;~ 2F3D:07DD
cs=0x2f3d;eip=0x0007e1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 102166 mov     ax, [bp+arg_8] ;~ 2F3D:07E1
cs=0x2f3d;eip=0x0007e4; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_a))));	// 102167 mov     dx, [bp+arg_A] ;~ 2F3D:07E4
cs=0x2f3d;eip=0x0007e7; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 102168 add     ax, [bp+var_4] ;~ 2F3D:07E7
cs=0x2f3d;eip=0x0007ea; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_2))));	// 102169 adc     dx, [bp+var_2] ;~ 2F3D:07EA
cs=0x2f3d;eip=0x0007ed; 	T(AND(ax, *(dw*)((&unk_5461c))));	// 102170 and     ax, word ptr unk_5461C ;~ 2F3D:07ED
cs=0x2f3d;eip=0x0007f1; 	T(AND(dx, *(dw*)((&unk_5461e))));	// 102171 and     dx, word ptr unk_5461E ;~ 2F3D:07F1
cs=0x2f3d;eip=0x0007f5; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 102172 mov     es:[bx+0Eh], ax ;~ 2F3D:07F5
cs=0x2f3d;eip=0x0007f9; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), dx));	// 102173 mov     es:[bx+10h], dx ;~ 2F3D:07F9
cs=0x2f3d;eip=0x0007fd; 	T(MOV(sp, bp));	// 102174 mov     sp, bp ;~ 2F3D:07FD
cs=0x2f3d;eip=0x0007ff; 	X(POP(bp));	// 102175 pop     bp ;~ 2F3D:07FF
cs=0x2f3d;eip=0x000800; 	R(RETF(0));	// 102176 retf ;~ 2F3D:0800
sub_3e1b1:
	// 102184 
#undef arg_0
#define arg_0 6
	// 102186 arg_0           = byte ptr  6 ;~ 2F3D:0801
cs=0x2f3d;eip=0x000801; 	X(PUSH(bp));	// 102188 push    bp ;~ 2F3D:0801
cs=0x2f3d;eip=0x000802; 	T(MOV(bp, sp));	// 102189 mov     bp, sp ;~ 2F3D:0802
cs=0x2f3d;eip=0x000804; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 102190 cmp     [bp+arg_0], 0 ;~ 2F3D:0804
cs=0x2f3d;eip=0x000808; 	R(JZ(loc_3e1c5));	// 102191 jz      short loc_3E1C5 ;~ 2F3D:0808
cs=0x2f3d;eip=0x00080a; 	T(LES(bx, *(dd*)((&unk_4b072))));	// 102192 les     bx, dword ptr unk_4B072 ;~ 2F3D:080A
cs=0x2f3d;eip=0x00080e; 	X(OR(*(raddr(es,bx+2)), 1));	// 102193 or      byte ptr es:[bx+2], 1 ;~ 2F3D:080E
cs=0x2f3d;eip=0x000813; 	R(JMP(loc_3e1ce));	// 102194 jmp     short loc_3E1CE ;~ 2F3D:0813
loc_3e1c5:
	// 10917 
cs=0x2f3d;eip=0x000815; 	T(LES(bx, *(dd*)((&unk_4b072))));	// 102198 les     bx, dword ptr unk_4B072 ;~ 2F3D:0815
cs=0x2f3d;eip=0x000819; 	X(AND(*(raddr(es,bx+2)), 0x0FE));	// 102199 and     byte ptr es:[bx+2], 0FEh ;~ 2F3D:0819
loc_3e1ce:
	// 10918 
cs=0x2f3d;eip=0x00081e; 	X(POP(bp));	// 102202 pop     bp ;~ 2F3D:081E
cs=0x2f3d;eip=0x00081f; 	R(RETF(0));	// 102203 retf ;~ 2F3D:081F
sub_3e1d3:
	// 102215 
#undef var_14
#define var_14 -0x14
	// 102218 var_14          = word ptr -14h ;~ 2F3D:0823
#undef var_12
#define var_12 -0x12
	// 102219 var_12          = word ptr -12h ;~ 2F3D:0823
#undef var_10
#define var_10 -0x10
	// 102220 var_10          = dword ptr -10h ;~ 2F3D:0823
#undef var_c
#define var_c -0x0C
	// 102221 var_C           = dword ptr -0Ch ;~ 2F3D:0823
#undef var_8
#define var_8 -8
	// 102222 var_8           = dword ptr -8 ;~ 2F3D:0823
#undef arg_0
#define arg_0 6
	// 102223 arg_0           = word ptr  6 ;~ 2F3D:0823
cs=0x2f3d;eip=0x000823; 	X(PUSH(bp));	// 102225 push    bp ;~ 2F3D:0823
cs=0x2f3d;eip=0x000824; 	T(MOV(bp, sp));	// 102226 mov     bp, sp ;~ 2F3D:0824
cs=0x2f3d;eip=0x000826; 	T(SUB(sp, 0x14));	// 102227 sub     sp, 14h ;~ 2F3D:0826
cs=0x2f3d;eip=0x000829; 	X(PUSH(di));	// 102228 push    di ;~ 2F3D:0829
cs=0x2f3d;eip=0x00082a; 	X(PUSH(si));	// 102229 push    si ;~ 2F3D:082A
cs=0x2f3d;eip=0x00082b; 	T(MOV(ax, *(dw*)((&unk_4b096))));	// 102230 mov     ax, word ptr unk_4B096 ;~ 2F3D:082B
cs=0x2f3d;eip=0x00082e; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 102231 cmp     [bp+arg_0], ax ;~ 2F3D:082E
cs=0x2f3d;eip=0x000831; 	R(JNZ(loc_3e1e6));	// 102232 jnz     short loc_3E1E6 ;~ 2F3D:0831
cs=0x2f3d;eip=0x000833; 	R(JMP(loc_3e26e));	// 102233 jmp     loc_3E26E ;~ 2F3D:0833
loc_3e1e6:
	// 10919 
cs=0x2f3d;eip=0x000836; 	T(CMP(ax, 0x0FFFF));	// 102237 cmp     ax, 0FFFFh ;~ 2F3D:0836
cs=0x2f3d;eip=0x000839; 	R(JNZ(loc_3e1ee));	// 102238 jnz     short loc_3E1EE ;~ 2F3D:0839
cs=0x2f3d;eip=0x00083b; 	R(JMP(loc_3e26e));	// 102239 jmp     loc_3E26E ;~ 2F3D:083B
loc_3e1ee:
	// 10920 
cs=0x2f3d;eip=0x00083e; 	T(SUB(si, si));	// 102243 sub     si, si ;~ 2F3D:083E
cs=0x2f3d;eip=0x000840; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), si));	// 102244 mov     [bp+var_14], si ;~ 2F3D:0840
cs=0x2f3d;eip=0x000843; 	T(MOV(ax, si));	// 102245 mov     ax, si ;~ 2F3D:0843
cs=0x2f3d;eip=0x000845; 	T(ADD(ax, 0x132));	// 102246 add     ax, 132h ;~ 2F3D:0845
cs=0x2f3d;eip=0x000848; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 102247 mov     word ptr [bp+var_8], ax ;~ 2F3D:0848
cs=0x2f3d;eip=0x00084b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), seg_offset(seg042)));	// 102248 mov     word ptr [bp+var_8+2], seg seg042 ;~ 2F3D:084B
cs=0x2f3d;eip=0x000850; 	T(MOV(ax, si));	// 102249 mov     ax, si ;~ 2F3D:0850
cs=0x2f3d;eip=0x000852; 	T(ADD(ax, 0x0DA));	// 102250 add     ax, 0DAh ; 'Ú' ;~ 2F3D:0852
cs=0x2f3d;eip=0x000855; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 102251 mov     word ptr [bp+var_C], ax ;~ 2F3D:0855
cs=0x2f3d;eip=0x000858; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), seg_offset(seg042)));	// 102252 mov     word ptr [bp+var_C+2], seg seg042 ;~ 2F3D:0858
cs=0x2f3d;eip=0x00085d; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_c+2)))));	// 102253 mov     dx, word ptr [bp+var_C+2] ;~ 2F3D:085D
cs=0x2f3d;eip=0x000860; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 102254 mov     word ptr [bp+var_10], ax ;~ 2F3D:0860
cs=0x2f3d;eip=0x000863; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 102255 mov     word ptr [bp+var_10+2], dx ;~ 2F3D:0863
cs=0x2f3d;eip=0x000866; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 0x2C));	// 102256 mov     [bp+var_12], 2Ch ; ',' ;~ 2F3D:0866
cs=0x2f3d;eip=0x00086b; 	T(ADD(si, 0x2C));	// 102257 add     si, 2Ch ; ',' ;~ 2F3D:086B
loc_3e21e:
	// 10921 
cs=0x2f3d;eip=0x00086e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 102260 les     bx, [bp+var_8] ;~ 2F3D:086E
cs=0x2f3d;eip=0x000871; 	T(MOV(di, *(dw*)(raddr(es,bx))));	// 102261 mov     di, es:[bx] ;~ 2F3D:0871
cs=0x2f3d;eip=0x000874; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 1));	// 102262 cmp     [bp+arg_0], 1 ;~ 2F3D:0874
cs=0x2f3d;eip=0x000878; 	R(JNZ(loc_3e235));	// 102263 jnz     short loc_3E235 ;~ 2F3D:0878
cs=0x2f3d;eip=0x00087a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_c))));	// 102264 les     bx, [bp+var_C] ;~ 2F3D:087A
cs=0x2f3d;eip=0x00087d; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 102265 mov     ax, es:[bx] ;~ 2F3D:087D
cs=0x2f3d;eip=0x000880; 	X(MOV(*(dw*)(raddr(ds,di+0x48)), ax));	// 102266 mov     [di+48h], ax ;~ 2F3D:0880
cs=0x2f3d;eip=0x000883; 	R(JMP(loc_3e24e));	// 102267 jmp     short loc_3E24E ;~ 2F3D:0883
loc_3e235:
	// 10922 
cs=0x2f3d;eip=0x000885; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 102271 les     bx, [bp+var_10] ;~ 2F3D:0885
cs=0x2f3d;eip=0x000888; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x48))));	// 102272 mov     ax, [di+48h] ;~ 2F3D:0888
cs=0x2f3d;eip=0x00088b; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 102273 mov     es:[bx], ax ;~ 2F3D:088B
cs=0x2f3d;eip=0x00088e; 	X(MOV(*(dw*)(raddr(ds,di+0x48)), 0));	// 102274 mov     word ptr [di+48h], 0 ;~ 2F3D:088E
cs=0x2f3d;eip=0x000893; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FFFF));	// 102275 cmp     [bp+arg_0], 0FFFFh ;~ 2F3D:0893
cs=0x2f3d;eip=0x000897; 	R(JNZ(loc_3e24e));	// 102276 jnz     short loc_3E24E ;~ 2F3D:0897
cs=0x2f3d;eip=0x000899; 	X(MOV(*(dw*)(raddr(ds,di+0x14)), 0));	// 102277 mov     word ptr [di+14h], 0 ;~ 2F3D:0899
loc_3e24e:
	// 10923 
cs=0x2f3d;eip=0x00089e; 	X(PUSH(di));	// 102281 push    di ;~ 2F3D:089E
cs=0x2f3d;eip=0x00089f; 	R(CALLF(sub_25e68,0));	// 102282 call    sub_25E68 ;~ 2F3D:089F
cs=0x2f3d;eip=0x0008a4; 	T(ADD(sp, 2));	// 102283 add     sp, 2 ;~ 2F3D:08A4
cs=0x2f3d;eip=0x0008a7; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_8))), 2));	// 102284 add     word ptr [bp+var_8], 2 ;~ 2F3D:08A7
cs=0x2f3d;eip=0x0008ab; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_c))), 2));	// 102285 add     word ptr [bp+var_C], 2 ;~ 2F3D:08AB
cs=0x2f3d;eip=0x0008af; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_10))), 2));	// 102286 add     word ptr [bp+var_10], 2 ;~ 2F3D:08AF
cs=0x2f3d;eip=0x0008b3; 	X(DEC(*(dw*)(raddr(ss,bp+var_12))));	// 102287 dec     [bp+var_12] ;~ 2F3D:08B3
cs=0x2f3d;eip=0x0008b6; 	R(JNZ(loc_3e21e));	// 102288 jnz     short loc_3E21E ;~ 2F3D:08B6
cs=0x2f3d;eip=0x0008b8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 102289 mov     ax, [bp+arg_0] ;~ 2F3D:08B8
cs=0x2f3d;eip=0x0008bb; 	X(MOV(*(dw*)((&unk_4b096)), ax));	// 102290 mov     word ptr unk_4B096, ax ;~ 2F3D:08BB
loc_3e26e:
	// 10924 
cs=0x2f3d;eip=0x0008be; 	X(POP(si));	// 102294 pop     si ;~ 2F3D:08BE
cs=0x2f3d;eip=0x0008bf; 	X(POP(di));	// 102295 pop     di ;~ 2F3D:08BF
cs=0x2f3d;eip=0x0008c0; 	T(MOV(sp, bp));	// 102296 mov     sp, bp ;~ 2F3D:08C0
cs=0x2f3d;eip=0x0008c2; 	X(POP(bp));	// 102297 pop     bp ;~ 2F3D:08C2
cs=0x2f3d;eip=0x0008c3; 	R(RETF(2));	// 102298 retf    2 ;~ 2F3D:08C3
sub_3e27a:
	// 102316 
#undef arg_0
#define arg_0 4
	// 102319 arg_0           = word ptr  4 ;~ 2F3D:08CA
cs=0x2f3d;eip=0x0008ca; 	X(PUSH(bp));	// 102321 push    bp ;~ 2F3D:08CA
cs=0x2f3d;eip=0x0008cb; 	T(MOV(bp, sp));	// 102322 mov     bp, sp ;~ 2F3D:08CB
cs=0x2f3d;eip=0x0008cd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 102323 mov     bx, [bp+arg_0] ;~ 2F3D:08CD
cs=0x2f3d;eip=0x0008d0; 	X(MOV(*(raddr(ds,bx)), 1));	// 102324 mov     byte ptr [bx], 1 ;~ 2F3D:08D0
cs=0x2f3d;eip=0x0008d3; 	T(LES(bx, *(dd*)((&unk_56bb1))));	// 102325 les     bx, dword ptr unk_56BB1 ;~ 2F3D:08D3
cs=0x2f3d;eip=0x0008d7; 	T(CMP(*(dw*)(raddr(es,bx+0x0C)), 0));	// 102326 cmp     word ptr es:[bx+0Ch], 0 ;~ 2F3D:08D7
cs=0x2f3d;eip=0x0008dc; 	R(JG(loc_3e2a5));	// 102327 jg      short loc_3E2A5 ;~ 2F3D:08DC
cs=0x2f3d;eip=0x0008de; 	R(JL(loc_3e298));	// 102328 jl      short loc_3E298 ;~ 2F3D:08DE
cs=0x2f3d;eip=0x0008e0; 	T(CMP(*(dw*)(raddr(es,bx+0x0A)), 0x6400));	// 102329 cmp     word ptr es:[bx+0Ah], 6400h ;~ 2F3D:08E0
cs=0x2f3d;eip=0x0008e6; 	R(JNC(loc_3e2a5));	// 102330 jnb     short loc_3E2A5 ;~ 2F3D:08E6
loc_3e298:
	// 10927 
cs=0x2f3d;eip=0x0008e8; 	T(CMP(*(raddr(es,bx+0x24)), 7));	// 102333 cmp     byte ptr es:[bx+24h], 7 ;~ 2F3D:08E8
cs=0x2f3d;eip=0x0008ed; 	R(JZ(loc_3e2a5));	// 102334 jz      short loc_3E2A5 ;~ 2F3D:08ED
cs=0x2f3d;eip=0x0008ef; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 102335 mov     bx, [bp+arg_0] ;~ 2F3D:08EF
cs=0x2f3d;eip=0x0008f2; 	X(MOV(*(raddr(ds,bx)), 3));	// 102336 mov     byte ptr [bx], 3 ;~ 2F3D:08F2
loc_3e2a5:
	// 10928 
cs=0x2f3d;eip=0x0008f5; 	X(POP(bp));	// 102340 pop     bp ;~ 2F3D:08F5
cs=0x2f3d;eip=0x0008f6; 	R(RETN(2));	// 102341 retn    2 ;~ 2F3D:08F6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_3d9c9: 	goto loc_3d9c9;
        case m2c::kloc_3d9d5: 	goto loc_3d9d5;
        case m2c::kloc_3d9e4: 	goto loc_3d9e4;
        case m2c::kloc_3d9f0: 	goto loc_3d9f0;
        case m2c::kloc_3d9f4: 	goto loc_3d9f4;
        case m2c::kloc_3da07: 	goto loc_3da07;
        case m2c::kloc_3da20: 	goto loc_3da20;
        case m2c::kloc_3da2c: 	goto loc_3da2c;
        case m2c::kloc_3da3e: 	goto loc_3da3e;
        case m2c::kloc_3da42: 	goto loc_3da42;
        case m2c::kloc_3daaa: 	goto loc_3daaa;
        case m2c::kloc_3dab7: 	goto loc_3dab7;
        case m2c::kloc_3dabe: 	goto loc_3dabe;
        case m2c::kloc_3dad4: 	goto loc_3dad4;
        case m2c::kloc_3dae1: 	goto loc_3dae1;
        case m2c::kloc_3dae8: 	goto loc_3dae8;
        case m2c::kloc_3daf7: 	goto loc_3daf7;
        case m2c::kloc_3db07: 	goto loc_3db07;
        case m2c::kloc_3db0f: 	goto loc_3db0f;
        case m2c::kloc_3db3b: 	goto loc_3db3b;
        case m2c::kloc_3db4b: 	goto loc_3db4b;
        case m2c::kloc_3db61: 	goto loc_3db61;
        case m2c::kloc_3db67: 	goto loc_3db67;
        case m2c::kloc_3db77: 	goto loc_3db77;
        case m2c::kloc_3db87: 	goto loc_3db87;
        case m2c::kloc_3db9f: 	goto loc_3db9f;
        case m2c::kloc_3dbaa: 	goto loc_3dbaa;
        case m2c::kloc_3dbb9: 	goto loc_3dbb9;
        case m2c::kloc_3dbdd: 	goto loc_3dbdd;
        case m2c::kloc_3dbe5: 	goto loc_3dbe5;
        case m2c::kloc_3dc0a: 	goto loc_3dc0a;
        case m2c::kloc_3dc0f: 	goto loc_3dc0f;
        case m2c::kloc_3dc11: 	goto loc_3dc11;
        case m2c::kloc_3dc1c: 	goto loc_3dc1c;
        case m2c::kloc_3dc22: 	goto loc_3dc22;
        case m2c::kloc_3dc40: 	goto loc_3dc40;
        case m2c::kloc_3dc4c: 	goto loc_3dc4c;
        case m2c::kloc_3dc7b: 	goto loc_3dc7b;
        case m2c::kloc_3dc86: 	goto loc_3dc86;
        case m2c::kloc_3dca6: 	goto loc_3dca6;
        case m2c::kloc_3dcab: 	goto loc_3dcab;
        case m2c::kloc_3dcde: 	goto loc_3dcde;
        case m2c::kloc_3dd55: 	goto loc_3dd55;
        case m2c::kloc_3dd75: 	goto loc_3dd75;
        case m2c::kloc_3dda6: 	goto loc_3dda6;
        case m2c::kloc_3ddc8: 	goto loc_3ddc8;
        case m2c::kloc_3ddea: 	goto loc_3ddea;
        case m2c::kloc_3de12: 	goto loc_3de12;
        case m2c::kloc_3de3a: 	goto loc_3de3a;
        case m2c::kloc_3de3c: 	goto loc_3de3c;
        case m2c::kloc_3de46: 	goto loc_3de46;
        case m2c::kloc_3de7e: 	goto loc_3de7e;
        case m2c::kloc_3de94: 	goto loc_3de94;
        case m2c::kloc_3de98: 	goto loc_3de98;
        case m2c::kloc_3ded3: 	goto loc_3ded3;
        case m2c::kloc_3dedd: 	goto loc_3dedd;
        case m2c::kloc_3deeb: 	goto loc_3deeb;
        case m2c::kloc_3deed: 	goto loc_3deed;
        case m2c::kloc_3def3: 	goto loc_3def3;
        case m2c::kloc_3def7: 	goto loc_3def7;
        case m2c::kloc_3df0c: 	goto loc_3df0c;
        case m2c::kloc_3df10: 	goto loc_3df10;
        case m2c::kloc_3df2f: 	goto loc_3df2f;
        case m2c::kloc_3df61: 	goto loc_3df61;
        case m2c::kloc_3df73: 	goto loc_3df73;
        case m2c::kloc_3df8a: 	goto loc_3df8a;
        case m2c::kloc_3df95: 	goto loc_3df95;
        case m2c::kloc_3dfbd: 	goto loc_3dfbd;
        case m2c::kloc_3dfd0: 	goto loc_3dfd0;
        case m2c::kloc_3dfeb: 	goto loc_3dfeb;
        case m2c::kloc_3dff6: 	goto loc_3dff6;
        case m2c::kloc_3e008: 	goto loc_3e008;
        case m2c::kloc_3e016: 	goto loc_3e016;
        case m2c::kloc_3e019: 	goto loc_3e019;
        case m2c::kloc_3e027: 	goto loc_3e027;
        case m2c::kloc_3e039: 	goto loc_3e039;
        case m2c::kloc_3e03b: 	goto loc_3e03b;
        case m2c::kloc_3e0c5: 	goto loc_3e0c5;
        case m2c::kloc_3e0ce: 	goto loc_3e0ce;
        case m2c::kloc_3e1c5: 	goto loc_3e1c5;
        case m2c::kloc_3e1ce: 	goto loc_3e1ce;
        case m2c::kloc_3e1e6: 	goto loc_3e1e6;
        case m2c::kloc_3e1ee: 	goto loc_3e1ee;
        case m2c::kloc_3e21e: 	goto loc_3e21e;
        case m2c::kloc_3e235: 	goto loc_3e235;
        case m2c::kloc_3e24e: 	goto loc_3e24e;
        case m2c::kloc_3e26e: 	goto loc_3e26e;
        case m2c::kloc_3e277: 	goto loc_3e277;
        case m2c::kloc_3e298: 	goto loc_3e298;
        case m2c::kloc_3e2a5: 	goto loc_3e2a5;
        case m2c::klocret_3df2e: 	goto locret_3df2e;
        case m2c::klocret_3df4d: 	goto locret_3df4d;
        case m2c::klocret_3e276: 	goto locret_3e276;
        case m2c::kret_2f3d_59e: 	goto ret_2f3d_59e;
        case m2c::kseg029_proc: 	goto seg029_proc;
        case m2c::ksub_3d9b2: 	goto sub_3d9b2;
        case m2c::ksub_3da0d: 	goto sub_3da0d;
        case m2c::ksub_3da51: 	goto sub_3da51;
        case m2c::ksub_3db15: 	goto sub_3db15;
        case m2c::ksub_3db22: 	goto sub_3db22;
        case m2c::ksub_3df4f: 	goto sub_3df4f;
        case m2c::ksub_3df7e: 	goto sub_3df7e;
        case m2c::ksub_3dfa0: 	goto sub_3dfa0;
        case m2c::ksub_3e098: 	goto sub_3e098;
        case m2c::ksub_3e0b1: 	goto sub_3e0b1;
        case m2c::ksub_3e0d0: 	goto sub_3e0d0;
        case m2c::ksub_3e103: 	goto sub_3e103;
        case m2c::ksub_3e149: 	goto sub_3e149;
        case m2c::ksub_3e1b1: 	goto sub_3e1b1;
        case m2c::ksub_3e1d3: 	goto sub_3e1d3;
        case m2c::ksub_3e27a: 	goto sub_3e27a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

