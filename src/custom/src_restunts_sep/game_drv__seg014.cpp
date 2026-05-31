/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool prerender_wheel_helper3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    prerender_wheel_helper3:
    _begin:
#undef var_a
#define var_a -0x0A
	// 79139 var_A           = word ptr -0Ah ;~ 27C6:0006
#undef var_8
#define var_8 -8
	// 79140 var_8           = word ptr -8 ;~ 27C6:0006
#undef var_6
#define var_6 -6
	// 79141 var_6           = word ptr -6 ;~ 27C6:0006
#undef var_4
#define var_4 -4
	// 79142 var_4           = word ptr -4 ;~ 27C6:0006
#undef var_2
#define var_2 -2
	// 79143 var_2           = word ptr -2 ;~ 27C6:0006
#undef arg_0
#define arg_0 6
	// 79144 arg_0           = word ptr  6 ;~ 27C6:0006
#undef arg_2
#define arg_2 8
	// 79145 arg_2           = word ptr  8 ;~ 27C6:0006
cs=0x27c6;eip=0x000006; 	X(PUSH(bp));	// 79147 push    bp ;~ 27C6:0006
cs=0x27c6;eip=0x000007; 	T(MOV(bp, sp));	// 79148 mov     bp, sp ;~ 27C6:0007
cs=0x27c6;eip=0x000009; 	T(SUB(sp, 0x0A));	// 79149 sub     sp, 0Ah ;~ 27C6:0009
cs=0x27c6;eip=0x00000c; 	X(PUSH(di));	// 79150 push    di ;~ 27C6:000C
cs=0x27c6;eip=0x00000d; 	X(PUSH(si));	// 79151 push    si ;~ 27C6:000D
cs=0x27c6;eip=0x00000e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 79152 mov     bx, [bp+arg_0] ;~ 27C6:000E
cs=0x27c6;eip=0x000011; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 79153 mov     si, [bx] ;~ 27C6:0011
cs=0x27c6;eip=0x000013; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 79154 mov     ax, [bx+4] ;~ 27C6:0013
cs=0x27c6;eip=0x000016; 	T(SUB(ax, si));	// 79155 sub     ax, si ;~ 27C6:0016
cs=0x27c6;eip=0x000018; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79156 mov     bx, [bp+arg_2] ;~ 27C6:0018
cs=0x27c6;eip=0x00001b; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 79157 mov     [bx], ax ;~ 27C6:001B
cs=0x27c6;eip=0x00001d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 79158 mov     bx, [bp+arg_0] ;~ 27C6:001D
cs=0x27c6;eip=0x000020; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 79159 mov     ax, [bx+6] ;~ 27C6:0020
cs=0x27c6;eip=0x000023; 	T(SUB(ax, *(dw*)(raddr(ds,bx+2))));	// 79160 sub     ax, [bx+2] ;~ 27C6:0023
cs=0x27c6;eip=0x000026; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79161 mov     bx, [bp+arg_2] ;~ 27C6:0026
cs=0x27c6;eip=0x000029; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 79162 mov     [bx+2], ax ;~ 27C6:0029
cs=0x27c6;eip=0x00002c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 79163 mov     bx, [bp+arg_0] ;~ 27C6:002C
cs=0x27c6;eip=0x00002f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 79164 mov     ax, [bx+8] ;~ 27C6:002F
cs=0x27c6;eip=0x000032; 	T(SUB(ax, si));	// 79165 sub     ax, si ;~ 27C6:0032
cs=0x27c6;eip=0x000034; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79166 mov     bx, [bp+arg_2] ;~ 27C6:0034
cs=0x27c6;eip=0x000037; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), ax));	// 79167 mov     [bx+10h], ax ;~ 27C6:0037
cs=0x27c6;eip=0x00003a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 79168 mov     bx, [bp+arg_0] ;~ 27C6:003A
cs=0x27c6;eip=0x00003d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 79169 mov     ax, [bx+0Ah] ;~ 27C6:003D
cs=0x27c6;eip=0x000040; 	T(SUB(ax, *(dw*)(raddr(ds,bx+2))));	// 79170 sub     ax, [bx+2] ;~ 27C6:0040
cs=0x27c6;eip=0x000043; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79171 mov     bx, [bp+arg_2] ;~ 27C6:0043
cs=0x27c6;eip=0x000046; 	X(MOV(*(dw*)(raddr(ds,bx+0x12)), ax));	// 79172 mov     [bx+12h], ax ;~ 27C6:0046
cs=0x27c6;eip=0x000049; 	T(MOV(ax, 0x2D41));	// 79173 mov     ax, 2D41h ;~ 27C6:0049
cs=0x27c6;eip=0x00004c; 	X(PUSH(ax));	// 79174 push    ax ;~ 27C6:004C
cs=0x27c6;eip=0x00004d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 79175 mov     ax, [bx+10h] ;~ 27C6:004D
cs=0x27c6;eip=0x000050; 	T(ADD(ax, *(dw*)(raddr(ds,bx))));	// 79176 add     ax, [bx] ;~ 27C6:0050
cs=0x27c6;eip=0x000052; 	X(PUSH(ax));	// 79177 push    ax ;~ 27C6:0052
cs=0x27c6;eip=0x000053; 	J(CALLF(multiply_and_scale,0));	// 79178 call    multiply_and_scale ;~ 27C6:0053
cs=0x27c6;eip=0x000058; 	T(ADD(sp, 4));	// 79179 add     sp, 4 ;~ 27C6:0058
cs=0x27c6;eip=0x00005b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79180 mov     bx, [bp+arg_2] ;~ 27C6:005B
cs=0x27c6;eip=0x00005e; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 79181 mov     [bx+8], ax ;~ 27C6:005E
cs=0x27c6;eip=0x000061; 	T(MOV(ax, 0x2D41));	// 79182 mov     ax, 2D41h ;~ 27C6:0061
cs=0x27c6;eip=0x000064; 	X(PUSH(ax));	// 79183 push    ax ;~ 27C6:0064
cs=0x27c6;eip=0x000065; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79184 mov     ax, [bx+2] ;~ 27C6:0065
cs=0x27c6;eip=0x000068; 	T(ADD(ax, *(dw*)(raddr(ds,bx+0x12))));	// 79185 add     ax, [bx+12h] ;~ 27C6:0068
cs=0x27c6;eip=0x00006b; 	X(PUSH(ax));	// 79186 push    ax ;~ 27C6:006B
cs=0x27c6;eip=0x00006c; 	J(CALLF(multiply_and_scale,0));	// 79187 call    multiply_and_scale ;~ 27C6:006C
cs=0x27c6;eip=0x000071; 	T(ADD(sp, 4));	// 79188 add     sp, 4 ;~ 27C6:0071
cs=0x27c6;eip=0x000074; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79189 mov     bx, [bp+arg_2] ;~ 27C6:0074
cs=0x27c6;eip=0x000077; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), ax));	// 79190 mov     [bx+0Ah], ax ;~ 27C6:0077
cs=0x27c6;eip=0x00007a; 	T(MOV(si, *(dw*)(raddr(ds,bx+0x10))));	// 79191 mov     si, [bx+10h] ;~ 27C6:007A
cs=0x27c6;eip=0x00007d; 	T(SAR(si, 1));	// 79192 sar     si, 1 ;~ 27C6:007D
cs=0x27c6;eip=0x00007f; 	T(MOV(ax, offset(dseg,unk_3f0ae)));	// 79193 mov     ax, offset unk_3F0AE ;~ 27C6:007F
cs=0x27c6;eip=0x000082; 	X(PUSH(ax));	// 79194 push    ax ;~ 27C6:0082
cs=0x27c6;eip=0x000083; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 79195 mov     ax, [bx] ;~ 27C6:0083
cs=0x27c6;eip=0x000085; 	T(ADD(ax, si));	// 79196 add     ax, si ;~ 27C6:0085
cs=0x27c6;eip=0x000087; 	X(PUSH(ax));	// 79197 push    ax ;~ 27C6:0087
cs=0x27c6;eip=0x000088; 	J(CALLF(multiply_and_scale,0));	// 79198 call    multiply_and_scale ;~ 27C6:0088
cs=0x27c6;eip=0x00008d; 	T(ADD(sp, 4));	// 79199 add     sp, 4 ;~ 27C6:008D
cs=0x27c6;eip=0x000090; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79200 mov     bx, [bp+arg_2] ;~ 27C6:0090
cs=0x27c6;eip=0x000093; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 79201 mov     [bx+4], ax ;~ 27C6:0093
cs=0x27c6;eip=0x000096; 	T(MOV(di, *(dw*)(raddr(ds,bx+0x12))));	// 79202 mov     di, [bx+12h] ;~ 27C6:0096
cs=0x27c6;eip=0x000099; 	T(SAR(di, 1));	// 79203 sar     di, 1 ;~ 27C6:0099
cs=0x27c6;eip=0x00009b; 	T(MOV(ax, 0x393E));	// 79204 mov     ax, 393Eh ;~ 27C6:009B
cs=0x27c6;eip=0x00009e; 	X(PUSH(ax));	// 79205 push    ax ;~ 27C6:009E
cs=0x27c6;eip=0x00009f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79206 mov     ax, [bx+2] ;~ 27C6:009F
cs=0x27c6;eip=0x0000a2; 	T(ADD(ax, di));	// 79207 add     ax, di ;~ 27C6:00A2
cs=0x27c6;eip=0x0000a4; 	X(PUSH(ax));	// 79208 push    ax ;~ 27C6:00A4
cs=0x27c6;eip=0x0000a5; 	J(CALLF(multiply_and_scale,0));	// 79209 call    multiply_and_scale ;~ 27C6:00A5
cs=0x27c6;eip=0x0000aa; 	T(ADD(sp, 4));	// 79210 add     sp, 4 ;~ 27C6:00AA
cs=0x27c6;eip=0x0000ad; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79211 mov     bx, [bp+arg_2] ;~ 27C6:00AD
cs=0x27c6;eip=0x0000b0; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 79212 mov     [bx+6], ax ;~ 27C6:00B0
cs=0x27c6;eip=0x0000b3; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 79213 mov     ax, [bx] ;~ 27C6:00B3
cs=0x27c6;eip=0x0000b5; 	T(SAR(ax, 1));	// 79214 sar     ax, 1 ;~ 27C6:00B5
cs=0x27c6;eip=0x0000b7; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 79215 mov     [bp+var_4], ax ;~ 27C6:00B7
cs=0x27c6;eip=0x0000ba; 	T(MOV(ax, 0x393E));	// 79216 mov     ax, 393Eh ;~ 27C6:00BA
cs=0x27c6;eip=0x0000bd; 	X(PUSH(ax));	// 79217 push    ax ;~ 27C6:00BD
cs=0x27c6;eip=0x0000be; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 79218 mov     ax, [bx+10h] ;~ 27C6:00BE
cs=0x27c6;eip=0x0000c1; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 79219 add     ax, [bp+var_4] ;~ 27C6:00C1
cs=0x27c6;eip=0x0000c4; 	X(PUSH(ax));	// 79220 push    ax ;~ 27C6:00C4
cs=0x27c6;eip=0x0000c5; 	J(CALLF(multiply_and_scale,0));	// 79221 call    multiply_and_scale ;~ 27C6:00C5
cs=0x27c6;eip=0x0000ca; 	T(ADD(sp, 4));	// 79222 add     sp, 4 ;~ 27C6:00CA
cs=0x27c6;eip=0x0000cd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79223 mov     bx, [bp+arg_2] ;~ 27C6:00CD
cs=0x27c6;eip=0x0000d0; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 79224 mov     [bx+0Ch], ax ;~ 27C6:00D0
cs=0x27c6;eip=0x0000d3; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79225 mov     ax, [bx+2] ;~ 27C6:00D3
cs=0x27c6;eip=0x0000d6; 	T(SAR(ax, 1));	// 79226 sar     ax, 1 ;~ 27C6:00D6
cs=0x27c6;eip=0x0000d8; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 79227 mov     [bp+var_6], ax ;~ 27C6:00D8
cs=0x27c6;eip=0x0000db; 	T(MOV(ax, 0x393E));	// 79228 mov     ax, 393Eh ;~ 27C6:00DB
cs=0x27c6;eip=0x0000de; 	X(PUSH(ax));	// 79229 push    ax ;~ 27C6:00DE
cs=0x27c6;eip=0x0000df; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x12))));	// 79230 mov     ax, [bx+12h] ;~ 27C6:00DF
cs=0x27c6;eip=0x0000e2; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_6))));	// 79231 add     ax, [bp+var_6] ;~ 27C6:00E2
cs=0x27c6;eip=0x0000e5; 	X(PUSH(ax));	// 79232 push    ax ;~ 27C6:00E5
cs=0x27c6;eip=0x0000e6; 	J(CALLF(multiply_and_scale,0));	// 79233 call    multiply_and_scale ;~ 27C6:00E6
cs=0x27c6;eip=0x0000eb; 	T(ADD(sp, 4));	// 79234 add     sp, 4 ;~ 27C6:00EB
cs=0x27c6;eip=0x0000ee; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79235 mov     bx, [bp+arg_2] ;~ 27C6:00EE
cs=0x27c6;eip=0x0000f1; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), ax));	// 79236 mov     [bx+0Eh], ax ;~ 27C6:00F1
cs=0x27c6;eip=0x0000f4; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 79237 mov     ax, [bx] ;~ 27C6:00F4
cs=0x27c6;eip=0x0000f6; 	T(NEG(ax));	// 79238 neg     ax ;~ 27C6:00F6
cs=0x27c6;eip=0x0000f8; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 79239 mov     [bp+var_8], ax ;~ 27C6:00F8
cs=0x27c6;eip=0x0000fb; 	T(MOV(ax, 0x2D41));	// 79240 mov     ax, 2D41h ;~ 27C6:00FB
cs=0x27c6;eip=0x0000fe; 	X(PUSH(ax));	// 79241 push    ax ;~ 27C6:00FE
cs=0x27c6;eip=0x0000ff; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 79242 mov     ax, [bx+10h] ;~ 27C6:00FF
cs=0x27c6;eip=0x000102; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_8))));	// 79243 add     ax, [bp+var_8] ;~ 27C6:0102
cs=0x27c6;eip=0x000105; 	X(PUSH(ax));	// 79244 push    ax ;~ 27C6:0105
cs=0x27c6;eip=0x000106; 	J(CALLF(multiply_and_scale,0));	// 79245 call    multiply_and_scale ;~ 27C6:0106
cs=0x27c6;eip=0x00010b; 	T(ADD(sp, 4));	// 79246 add     sp, 4 ;~ 27C6:010B
cs=0x27c6;eip=0x00010e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79247 mov     bx, [bp+arg_2] ;~ 27C6:010E
cs=0x27c6;eip=0x000111; 	X(MOV(*(dw*)(raddr(ds,bx+0x18)), ax));	// 79248 mov     [bx+18h], ax ;~ 27C6:0111
cs=0x27c6;eip=0x000114; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79249 mov     ax, [bx+2] ;~ 27C6:0114
cs=0x27c6;eip=0x000117; 	T(NEG(ax));	// 79250 neg     ax ;~ 27C6:0117
cs=0x27c6;eip=0x000119; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 79251 mov     [bp+var_A], ax ;~ 27C6:0119
cs=0x27c6;eip=0x00011c; 	T(MOV(ax, 0x2D41));	// 79252 mov     ax, 2D41h ;~ 27C6:011C
cs=0x27c6;eip=0x00011f; 	X(PUSH(ax));	// 79253 push    ax ;~ 27C6:011F
cs=0x27c6;eip=0x000120; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x12))));	// 79254 mov     ax, [bx+12h] ;~ 27C6:0120
cs=0x27c6;eip=0x000123; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 79255 add     ax, [bp+var_A] ;~ 27C6:0123
cs=0x27c6;eip=0x000126; 	X(PUSH(ax));	// 79256 push    ax ;~ 27C6:0126
cs=0x27c6;eip=0x000127; 	J(CALLF(multiply_and_scale,0));	// 79257 call    multiply_and_scale ;~ 27C6:0127
cs=0x27c6;eip=0x00012c; 	T(ADD(sp, 4));	// 79258 add     sp, 4 ;~ 27C6:012C
cs=0x27c6;eip=0x00012f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79259 mov     bx, [bp+arg_2] ;~ 27C6:012F
cs=0x27c6;eip=0x000132; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A)), ax));	// 79260 mov     [bx+1Ah], ax ;~ 27C6:0132
cs=0x27c6;eip=0x000135; 	T(MOV(ax, 0x393E));	// 79261 mov     ax, 393Eh ;~ 27C6:0135
cs=0x27c6;eip=0x000138; 	X(PUSH(ax));	// 79262 push    ax ;~ 27C6:0138
cs=0x27c6;eip=0x000139; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 79263 mov     ax, [bp+var_8] ;~ 27C6:0139
cs=0x27c6;eip=0x00013c; 	T(ADD(ax, si));	// 79264 add     ax, si ;~ 27C6:013C
cs=0x27c6;eip=0x00013e; 	X(PUSH(ax));	// 79265 push    ax ;~ 27C6:013E
cs=0x27c6;eip=0x00013f; 	J(CALLF(multiply_and_scale,0));	// 79266 call    multiply_and_scale ;~ 27C6:013F
cs=0x27c6;eip=0x000144; 	T(ADD(sp, 4));	// 79267 add     sp, 4 ;~ 27C6:0144
cs=0x27c6;eip=0x000147; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79268 mov     bx, [bp+arg_2] ;~ 27C6:0147
cs=0x27c6;eip=0x00014a; 	X(MOV(*(dw*)(raddr(ds,bx+0x1C)), ax));	// 79269 mov     [bx+1Ch], ax ;~ 27C6:014A
cs=0x27c6;eip=0x00014d; 	T(MOV(ax, 0x393E));	// 79270 mov     ax, 393Eh ;~ 27C6:014D
cs=0x27c6;eip=0x000150; 	X(PUSH(ax));	// 79271 push    ax ;~ 27C6:0150
cs=0x27c6;eip=0x000151; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 79272 mov     ax, [bp+var_A] ;~ 27C6:0151
cs=0x27c6;eip=0x000154; 	T(ADD(ax, di));	// 79273 add     ax, di ;~ 27C6:0154
cs=0x27c6;eip=0x000156; 	X(PUSH(ax));	// 79274 push    ax ;~ 27C6:0156
cs=0x27c6;eip=0x000157; 	J(CALLF(multiply_and_scale,0));	// 79275 call    multiply_and_scale ;~ 27C6:0157
cs=0x27c6;eip=0x00015c; 	T(ADD(sp, 4));	// 79276 add     sp, 4 ;~ 27C6:015C
cs=0x27c6;eip=0x00015f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79277 mov     bx, [bp+arg_2] ;~ 27C6:015F
cs=0x27c6;eip=0x000162; 	X(MOV(*(dw*)(raddr(ds,bx+0x1E)), ax));	// 79278 mov     [bx+1Eh], ax ;~ 27C6:0162
cs=0x27c6;eip=0x000165; 	T(MOV(ax, 0x393E));	// 79279 mov     ax, 393Eh ;~ 27C6:0165
cs=0x27c6;eip=0x000168; 	X(PUSH(ax));	// 79280 push    ax ;~ 27C6:0168
cs=0x27c6;eip=0x000169; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 79281 mov     ax, [bx+10h] ;~ 27C6:0169
cs=0x27c6;eip=0x00016c; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 79282 sub     ax, [bp+var_4] ;~ 27C6:016C
cs=0x27c6;eip=0x00016f; 	X(PUSH(ax));	// 79283 push    ax ;~ 27C6:016F
cs=0x27c6;eip=0x000170; 	J(CALLF(multiply_and_scale,0));	// 79284 call    multiply_and_scale ;~ 27C6:0170
cs=0x27c6;eip=0x000175; 	T(ADD(sp, 4));	// 79285 add     sp, 4 ;~ 27C6:0175
cs=0x27c6;eip=0x000178; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79286 mov     bx, [bp+arg_2] ;~ 27C6:0178
cs=0x27c6;eip=0x00017b; 	X(MOV(*(dw*)(raddr(ds,bx+0x14)), ax));	// 79287 mov     [bx+14h], ax ;~ 27C6:017B
cs=0x27c6;eip=0x00017e; 	T(MOV(ax, 0x393E));	// 79288 mov     ax, 393Eh ;~ 27C6:017E
cs=0x27c6;eip=0x000181; 	X(PUSH(ax));	// 79289 push    ax ;~ 27C6:0181
cs=0x27c6;eip=0x000182; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x12))));	// 79290 mov     ax, [bx+12h] ;~ 27C6:0182
cs=0x27c6;eip=0x000185; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_6))));	// 79291 sub     ax, [bp+var_6] ;~ 27C6:0185
cs=0x27c6;eip=0x000188; 	X(PUSH(ax));	// 79292 push    ax ;~ 27C6:0188
cs=0x27c6;eip=0x000189; 	J(CALLF(multiply_and_scale,0));	// 79293 call    multiply_and_scale ;~ 27C6:0189
cs=0x27c6;eip=0x00018e; 	T(ADD(sp, 4));	// 79294 add     sp, 4 ;~ 27C6:018E
cs=0x27c6;eip=0x000191; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79295 mov     bx, [bp+arg_2] ;~ 27C6:0191
cs=0x27c6;eip=0x000194; 	X(MOV(*(dw*)(raddr(ds,bx+0x16)), ax));	// 79296 mov     [bx+16h], ax ;~ 27C6:0194
cs=0x27c6;eip=0x000197; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 79297 mov     [bp+var_2], 0 ;~ 27C6:0197
loc_363dc:
	// 9441 
cs=0x27c6;eip=0x00019c; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2))));	// 79300 mov     si, [bp+var_2] ;~ 27C6:019C
cs=0x27c6;eip=0x00019f; 	T(MOV(cl, 2));	// 79301 mov     cl, 2 ;~ 27C6:019F
cs=0x27c6;eip=0x0001a1; 	T(SHL(si, cl));	// 79302 shl     si, cl ;~ 27C6:01A1
cs=0x27c6;eip=0x0001a3; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_2))));	// 79303 add     si, [bp+arg_2] ;~ 27C6:01A3
cs=0x27c6;eip=0x0001a6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 79304 mov     bx, [bp+arg_0] ;~ 27C6:01A6
cs=0x27c6;eip=0x0001a9; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 79305 mov     di, [bx] ;~ 27C6:01A9
cs=0x27c6;eip=0x0001ab; 	T(MOV(ax, di));	// 79306 mov     ax, di ;~ 27C6:01AB
cs=0x27c6;eip=0x0001ad; 	T(SUB(ax, *(dw*)(raddr(ds,si))));	// 79307 sub     ax, [si] ;~ 27C6:01AD
cs=0x27c6;eip=0x0001af; 	X(MOV(*(dw*)(raddr(ds,si+0x20)), ax));	// 79308 mov     [si+20h], ax ;~ 27C6:01AF
cs=0x27c6;eip=0x0001b2; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79309 mov     ax, [bx+2] ;~ 27C6:01B2
cs=0x27c6;eip=0x0001b5; 	T(SUB(ax, *(dw*)(raddr(ds,si+2))));	// 79310 sub     ax, [si+2] ;~ 27C6:01B5
cs=0x27c6;eip=0x0001b8; 	X(MOV(*(dw*)(raddr(ds,si+0x22)), ax));	// 79311 mov     [si+22h], ax ;~ 27C6:01B8
cs=0x27c6;eip=0x0001bb; 	X(ADD(*(dw*)(raddr(ds,si)), di));	// 79312 add     [si], di ;~ 27C6:01BB
cs=0x27c6;eip=0x0001bd; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79313 mov     ax, [bx+2] ;~ 27C6:01BD
cs=0x27c6;eip=0x0001c0; 	X(ADD(*(dw*)(raddr(ds,si+2)), ax));	// 79314 add     [si+2], ax ;~ 27C6:01C0
cs=0x27c6;eip=0x0001c3; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 79315 inc     [bp+var_2] ;~ 27C6:01C3
cs=0x27c6;eip=0x0001c6; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 8));	// 79316 cmp     [bp+var_2], 8 ;~ 27C6:01C6
cs=0x27c6;eip=0x0001ca; 	J(JL(loc_363dc));	// 79317 jl      short loc_363DC ;~ 27C6:01CA
cs=0x27c6;eip=0x0001cc; 	X(POP(si));	// 79318 pop     si ;~ 27C6:01CC
cs=0x27c6;eip=0x0001cd; 	X(POP(di));	// 79319 pop     di ;~ 27C6:01CD
cs=0x27c6;eip=0x0001ce; 	T(MOV(sp, bp));	// 79320 mov     sp, bp ;~ 27C6:01CE
cs=0x27c6;eip=0x0001d0; 	X(POP(bp));	// 79321 pop     bp ;~ 27C6:01D0
cs=0x27c6;eip=0x0001d1; 	J(RETF(0));	// 79322 retf ;~ 27C6:01D1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_363dc: 	goto loc_363dc;
        case m2c::kprerender_wheel_helper3: 	goto prerender_wheel_helper3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

