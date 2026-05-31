/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group20(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group20:
    _begin:
sub_35078:
	// 84028 
#undef var_8
#define var_8 -8
	// 84031 var_8           = word ptr -8 ;~ 26A9:0008
#undef var_6
#define var_6 -6
	// 84032 var_6           = word ptr -6 ;~ 26A9:0008
#undef var_4
#define var_4 -4
	// 84033 var_4           = word ptr -4 ;~ 26A9:0008
#undef var_2
#define var_2 -2
	// 84034 var_2           = byte ptr -2 ;~ 26A9:0008
#undef arg_0
#define arg_0 4
	// 84035 arg_0           = word ptr  4 ;~ 26A9:0008
#undef arg_2
#define arg_2 6
	// 84036 arg_2           = word ptr  6 ;~ 26A9:0008
#undef arg_4
#define arg_4 8
	// 84037 arg_4           = word ptr  8 ;~ 26A9:0008
cs=0x26a9;eip=0x000008; 	X(PUSH(bp));	// 84039 push    bp ;~ 26A9:0008
cs=0x26a9;eip=0x000009; 	T(MOV(bp, sp));	// 84040 mov     bp, sp ;~ 26A9:0009
cs=0x26a9;eip=0x00000b; 	T(SUB(sp, 8));	// 84041 sub     sp, 8 ;~ 26A9:000B
cs=0x26a9;eip=0x00000e; 	X(PUSH(di));	// 84042 push    di ;~ 26A9:000E
cs=0x26a9;eip=0x00000f; 	X(PUSH(si));	// 84043 push    si ;~ 26A9:000F
cs=0x26a9;eip=0x000010; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 84044 mov     si, [bp+arg_4] ;~ 26A9:0010
cs=0x26a9;eip=0x000013; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 84045 mov     di, [bp+arg_2] ;~ 26A9:0013
cs=0x26a9;eip=0x000016; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 84046 mov     ax, [di] ;~ 26A9:0016
cs=0x26a9;eip=0x000018; 	T(MOV(dx, *(dw*)(raddr(ds,di+2))));	// 84047 mov     dx, [di+2] ;~ 26A9:0018
cs=0x26a9;eip=0x00001b; 	T(CMP(*(dw*)(raddr(ds,si+2)), dx));	// 84048 cmp     [si+2], dx ;~ 26A9:001B
cs=0x26a9;eip=0x00001e; 	R(JL(loc_3509a));	// 84049 jl      short loc_3509A ;~ 26A9:001E
cs=0x26a9;eip=0x000020; 	R(JG(loc_35096));	// 84050 jg      short loc_35096 ;~ 26A9:0020
cs=0x26a9;eip=0x000022; 	T(CMP(*(dw*)(raddr(ds,si)), ax));	// 84051 cmp     [si], ax ;~ 26A9:0022
cs=0x26a9;eip=0x000024; 	R(JC(loc_3509a));	// 84052 jb      short loc_3509A ;~ 26A9:0024
loc_35096:
	// 9785 
cs=0x26a9;eip=0x000026; 	T(MOV(al, 1));	// 84055 mov     al, 1 ;~ 26A9:0026
cs=0x26a9;eip=0x000028; 	R(JMP(loc_3509c));	// 84056 jmp     short loc_3509C ;~ 26A9:0028
loc_3509a:
	// 9786 
cs=0x26a9;eip=0x00002a; 	T(SUB(al, al));	// 84061 sub     al, al ;~ 26A9:002A
loc_3509c:
	// 9787 
cs=0x26a9;eip=0x00002c; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 84064 mov     [bp+var_2], al ;~ 26A9:002C
cs=0x26a9;eip=0x00002f; 	T(MOV(ax, 0x64));	// 84065 mov     ax, 64h ; 'd' ;~ 26A9:002F
cs=0x26a9;eip=0x000032; 	T(CWD);	// 84066 cwd ;~ 26A9:0032
cs=0x26a9;eip=0x000033; 	X(PUSH(dx));	// 84067 push    dx ;~ 26A9:0033
cs=0x26a9;eip=0x000034; 	X(PUSH(ax));	// 84068 push    ax ;~ 26A9:0034
cs=0x26a9;eip=0x000035; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 84069 mov     bx, [bp+arg_0] ;~ 26A9:0035
cs=0x26a9;eip=0x000038; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 84070 push    word ptr [bx+2] ;~ 26A9:0038
cs=0x26a9;eip=0x00003b; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 84071 push    word ptr [bx] ;~ 26A9:003B
cs=0x26a9;eip=0x00003d; 	R(CALLF(sub_10526,0));	// 84072 call    sub_10526 ;~ 26A9:003D
cs=0x26a9;eip=0x000042; 	T(ADD(ax, *(dw*)(raddr(ds,di))));	// 84073 add     ax, [di] ;~ 26A9:0042
cs=0x26a9;eip=0x000044; 	T(ADC(dx, *(dw*)(raddr(ds,di+2))));	// 84074 adc     dx, [di+2] ;~ 26A9:0044
cs=0x26a9;eip=0x000047; 	T(SUB(ax, *(dw*)(raddr(ds,si))));	// 84075 sub     ax, [si] ;~ 26A9:0047
cs=0x26a9;eip=0x000049; 	T(SBB(dx, *(dw*)(raddr(ds,si+2))));	// 84076 sbb     dx, [si+2] ;~ 26A9:0049
cs=0x26a9;eip=0x00004c; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 84077 mov     [bp+var_6], ax ;~ 26A9:004C
cs=0x26a9;eip=0x00004f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 84078 mov     [bp+var_4], dx ;~ 26A9:004F
cs=0x26a9;eip=0x000052; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 84079 mov     [bp+var_8], 0 ;~ 26A9:0052
cs=0x26a9;eip=0x000057; 	R(JMP(loc_350d9));	// 84080 jmp     short loc_350D9 ;~ 26A9:0057
loc_350c9:
	// 9788 
cs=0x26a9;eip=0x000059; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), 2));	// 84084 add     [bp+var_8], 2 ;~ 26A9:0059
cs=0x26a9;eip=0x00005d; 	T(MOV(al, 2));	// 84085 mov     al, 2 ;~ 26A9:005D
cs=0x26a9;eip=0x00005f; 	X(PUSH(ax));	// 84086 push    ax ;~ 26A9:005F
cs=0x26a9;eip=0x000060; 	T(ax = bp+var_6);	// 84087 lea     ax, [bp+var_6] ;~ 26A9:0060
cs=0x26a9;eip=0x000063; 	X(PUSH(ax));	// 84088 push    ax ;~ 26A9:0063
cs=0x26a9;eip=0x000064; 	R(CALLF(sub_10648,0));	// 84089 call    sub_10648 ;~ 26A9:0064
loc_350d9:
	// 9789 
cs=0x26a9;eip=0x000069; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 84092 mov     ax, [bp+var_6] ;~ 26A9:0069
cs=0x26a9;eip=0x00006c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 84093 mov     dx, [bp+var_4] ;~ 26A9:006C
cs=0x26a9;eip=0x00006f; 	T(OR(dx, dx));	// 84094 or      dx, dx ;~ 26A9:006F
cs=0x26a9;eip=0x000071; 	R(JGE(loc_350ea));	// 84095 jge     short loc_350EA ;~ 26A9:0071
cs=0x26a9;eip=0x000073; 	T(NEG(ax));	// 84096 neg     ax ;~ 26A9:0073
cs=0x26a9;eip=0x000075; 	T(ADC(dx, 0));	// 84097 adc     dx, 0 ;~ 26A9:0075
cs=0x26a9;eip=0x000078; 	T(NEG(dx));	// 84098 neg     dx ;~ 26A9:0078
loc_350ea:
	// 9790 
cs=0x26a9;eip=0x00007a; 	T(CMP(dx, 1));	// 84101 cmp     dx, 1 ;~ 26A9:007A
cs=0x26a9;eip=0x00007d; 	R(JGE(loc_350c9));	// 84102 jge     short loc_350C9 ;~ 26A9:007D
cs=0x26a9;eip=0x00007f; 	T(MOV(ax, *(dw*)((&unk_57056))));	// 84103 mov     ax, word ptr unk_57056 ;~ 26A9:007F
cs=0x26a9;eip=0x000082; 	T(CWD);	// 84104 cwd ;~ 26A9:0082
cs=0x26a9;eip=0x000083; 	X(PUSH(dx));	// 84105 push    dx ;~ 26A9:0083
cs=0x26a9;eip=0x000084; 	X(PUSH(ax));	// 84106 push    ax ;~ 26A9:0084
cs=0x26a9;eip=0x000085; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 84107 push    [bp+var_4] ;~ 26A9:0085
cs=0x26a9;eip=0x000088; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 84108 push    [bp+var_6] ;~ 26A9:0088
cs=0x26a9;eip=0x00008b; 	R(CALLF(sub_105c2,0));	// 84109 call    sub_105C2 ;~ 26A9:008B
cs=0x26a9;eip=0x000090; 	T(MOV(cl, 8));	// 84110 mov     cl, 8 ;~ 26A9:0090
cs=0x26a9;eip=0x000092; 	R(CALLF(sub_10240,0));	// 84111 call    sub_10240 ;~ 26A9:0092
cs=0x26a9;eip=0x000097; 	T(MOV(cl, *(db*)(raddr(ss,bp+var_8))));	// 84112 mov     cl, byte ptr [bp+var_8] ;~ 26A9:0097
cs=0x26a9;eip=0x00009a; 	R(CALLF(sub_105f6,0));	// 84113 call    sub_105F6 ;~ 26A9:009A
cs=0x26a9;eip=0x00009f; 	X(ADD(*(dw*)(raddr(ds,si)), ax));	// 84114 add     [si], ax ;~ 26A9:009F
cs=0x26a9;eip=0x0000a1; 	X(ADC(*(dw*)(raddr(ds,si+2)), dx));	// 84115 adc     [si+2], dx ;~ 26A9:00A1
cs=0x26a9;eip=0x0000a4; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 84116 mov     ax, [di] ;~ 26A9:00A4
cs=0x26a9;eip=0x0000a6; 	T(MOV(dx, *(dw*)(raddr(ds,di+2))));	// 84117 mov     dx, [di+2] ;~ 26A9:00A6
cs=0x26a9;eip=0x0000a9; 	T(CMP(*(dw*)(raddr(ds,si+2)), dx));	// 84118 cmp     [si+2], dx ;~ 26A9:00A9
cs=0x26a9;eip=0x0000ac; 	R(JL(loc_35129));	// 84119 jl      short loc_35129 ;~ 26A9:00AC
cs=0x26a9;eip=0x0000ae; 	R(JG(loc_35124));	// 84120 jg      short loc_35124 ;~ 26A9:00AE
cs=0x26a9;eip=0x0000b0; 	T(CMP(*(dw*)(raddr(ds,si)), ax));	// 84121 cmp     [si], ax ;~ 26A9:00B0
cs=0x26a9;eip=0x0000b2; 	R(JC(loc_35129));	// 84122 jb      short loc_35129 ;~ 26A9:00B2
loc_35124:
	// 9791 
cs=0x26a9;eip=0x0000b4; 	T(MOV(ax, 1));	// 84125 mov     ax, 1 ;~ 26A9:00B4
cs=0x26a9;eip=0x0000b7; 	R(JMP(loc_3512b));	// 84126 jmp     short loc_3512B ;~ 26A9:00B7
loc_35129:
	// 9792 
cs=0x26a9;eip=0x0000b9; 	T(SUB(ax, ax));	// 84131 sub     ax, ax ;~ 26A9:00B9
loc_3512b:
	// 9793 
cs=0x26a9;eip=0x0000bb; 	T(MOV(cx, ax));	// 84134 mov     cx, ax ;~ 26A9:00BB
cs=0x26a9;eip=0x0000bd; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84135 mov     al, [bp+var_2] ;~ 26A9:00BD
cs=0x26a9;eip=0x0000c0; 	T(CBW);	// 84136 cbw ;~ 26A9:00C0
cs=0x26a9;eip=0x0000c1; 	T(CMP(cx, ax));	// 84137 cmp     cx, ax ;~ 26A9:00C1
cs=0x26a9;eip=0x0000c3; 	R(JZ(loc_3513f));	// 84138 jz      short loc_3513F ;~ 26A9:00C3
cs=0x26a9;eip=0x0000c5; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 84139 mov     ax, [di] ;~ 26A9:00C5
cs=0x26a9;eip=0x0000c7; 	T(MOV(dx, *(dw*)(raddr(ds,di+2))));	// 84140 mov     dx, [di+2] ;~ 26A9:00C7
cs=0x26a9;eip=0x0000ca; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 84141 mov     [si], ax ;~ 26A9:00CA
cs=0x26a9;eip=0x0000cc; 	X(MOV(*(dw*)(raddr(ds,si+2)), dx));	// 84142 mov     [si+2], dx ;~ 26A9:00CC
loc_3513f:
	// 9794 
cs=0x26a9;eip=0x0000cf; 	X(POP(si));	// 84145 pop     si ;~ 26A9:00CF
cs=0x26a9;eip=0x0000d0; 	X(POP(di));	// 84146 pop     di ;~ 26A9:00D0
cs=0x26a9;eip=0x0000d1; 	T(MOV(sp, bp));	// 84147 mov     sp, bp ;~ 26A9:00D1
cs=0x26a9;eip=0x0000d3; 	X(POP(bp));	// 84148 pop     bp ;~ 26A9:00D3
cs=0x26a9;eip=0x0000d4; 	R(RETN(6));	// 84149 retn    6 ;~ 26A9:00D4
sub_35147:
	// 84157 
#undef var_58
#define var_58 -0x58
	// 84159 var_58          = byte ptr -58h ;~ 26A9:00D7
#undef var_56
#define var_56 -0x56
	// 84160 var_56          = byte ptr -56h ;~ 26A9:00D7
#undef var_54
#define var_54 -0x54
	// 84161 var_54          = word ptr -54h ;~ 26A9:00D7
#undef var_52
#define var_52 -0x52
	// 84162 var_52          = word ptr -52h ;~ 26A9:00D7
#undef var_50
#define var_50 -0x50
	// 84163 var_50          = word ptr -50h ;~ 26A9:00D7
#undef var_4e
#define var_4e -0x4E
	// 84164 var_4E          = word ptr -4Eh ;~ 26A9:00D7
#undef var_4c
#define var_4c -0x4C
	// 84165 var_4C          = word ptr -4Ch ;~ 26A9:00D7
#undef var_4a
#define var_4a -0x4A
	// 84166 var_4A          = word ptr -4Ah ;~ 26A9:00D7
#undef var_48
#define var_48 -0x48
	// 84167 var_48          = word ptr -48h ;~ 26A9:00D7
#undef var_46
#define var_46 -0x46
	// 84168 var_46          = word ptr -46h ;~ 26A9:00D7
#undef var_44
#define var_44 -0x44
	// 84169 var_44          = word ptr -44h ;~ 26A9:00D7
#undef var_42
#define var_42 -0x42
	// 84170 var_42          = byte ptr -42h ;~ 26A9:00D7
#undef var_40
#define var_40 -0x40
	// 84171 var_40          = word ptr -40h ;~ 26A9:00D7
#undef var_3e
#define var_3e -0x3E
	// 84172 var_3E          = word ptr -3Eh ;~ 26A9:00D7
#undef var_3c
#define var_3c -0x3C
	// 84173 var_3C          = word ptr -3Ch ;~ 26A9:00D7
#undef var_3a
#define var_3a -0x3A
	// 84174 var_3A          = word ptr -3Ah ;~ 26A9:00D7
#undef var_36
#define var_36 -0x36
	// 84175 var_36          = word ptr -36h ;~ 26A9:00D7
#undef var_32
#define var_32 -0x32
	// 84176 var_32          = word ptr -32h ;~ 26A9:00D7
#undef var_30
#define var_30 -0x30
	// 84177 var_30          = word ptr -30h ;~ 26A9:00D7
#undef var_2e
#define var_2e -0x2E
	// 84178 var_2E          = word ptr -2Eh ;~ 26A9:00D7
#undef var_2c
#define var_2c -0x2C
	// 84179 var_2C          = byte ptr -2Ch ;~ 26A9:00D7
#undef var_2a
#define var_2a -0x2A
	// 84180 var_2A          = byte ptr -2Ah ;~ 26A9:00D7
#undef var_28
#define var_28 -0x28
	// 84181 var_28          = word ptr -28h ;~ 26A9:00D7
#undef var_26
#define var_26 -0x26
	// 84182 var_26          = word ptr -26h ;~ 26A9:00D7
#undef var_22
#define var_22 -0x22
	// 84183 var_22          = word ptr -22h ;~ 26A9:00D7
#undef var_20
#define var_20 -0x20
	// 84184 var_20          = word ptr -20h ;~ 26A9:00D7
#undef var_1e
#define var_1e -0x1E
	// 84185 var_1E          = byte ptr -1Eh ;~ 26A9:00D7
#undef var_1c
#define var_1c -0x1C
	// 84186 var_1C          = word ptr -1Ch ;~ 26A9:00D7
#undef var_1a
#define var_1a -0x1A
	// 84187 var_1A          = word ptr -1Ah ;~ 26A9:00D7
#undef var_18
#define var_18 -0x18
	// 84188 var_18          = word ptr -18h ;~ 26A9:00D7
#undef var_16
#define var_16 -0x16
	// 84189 var_16          = word ptr -16h ;~ 26A9:00D7
#undef var_14
#define var_14 -0x14
	// 84190 var_14          = word ptr -14h ;~ 26A9:00D7
#undef var_12
#define var_12 -0x12
	// 84191 var_12          = word ptr -12h ;~ 26A9:00D7
#undef var_10
#define var_10 -0x10
	// 84192 var_10          = byte ptr -10h ;~ 26A9:00D7
#undef var_e
#define var_e -0x0E
	// 84193 var_E           = word ptr -0Eh ;~ 26A9:00D7
#undef var_c
#define var_c -0x0C
	// 84194 var_C           = word ptr -0Ch ;~ 26A9:00D7
#undef var_a
#define var_a -0x0A
	// 84195 var_A           = word ptr -0Ah ;~ 26A9:00D7
#undef var_8
#define var_8 -8
	// 84196 var_8           = word ptr -8 ;~ 26A9:00D7
#undef var_6
#define var_6 -6
	// 84197 var_6           = word ptr -6 ;~ 26A9:00D7
#undef var_4
#define var_4 -4
	// 84198 var_4           = word ptr -4 ;~ 26A9:00D7
#undef var_2
#define var_2 -2
	// 84199 var_2           = word ptr -2 ;~ 26A9:00D7
#undef arg_0
#define arg_0 6
	// 84200 arg_0           = word ptr  6 ;~ 26A9:00D7
#undef arg_2
#define arg_2 8
	// 84201 arg_2           = word ptr  8 ;~ 26A9:00D7
#undef arg_4
#define arg_4 0x0A
	// 84202 arg_4           = word ptr  0Ah ;~ 26A9:00D7
#undef arg_6
#define arg_6 0x0C
	// 84203 arg_6           = word ptr  0Ch ;~ 26A9:00D7
#undef arg_8
#define arg_8 0x0E
	// 84204 arg_8           = word ptr  0Eh ;~ 26A9:00D7
#undef arg_a
#define arg_a 0x10
	// 84205 arg_A           = word ptr  10h ;~ 26A9:00D7
#undef arg_c
#define arg_c 0x12
	// 84206 arg_C           = word ptr  12h ;~ 26A9:00D7
cs=0x26a9;eip=0x0000d7; 	X(PUSH(bp));	// 84208 push    bp ;~ 26A9:00D7
cs=0x26a9;eip=0x0000d8; 	T(MOV(bp, sp));	// 84209 mov     bp, sp ;~ 26A9:00D8
cs=0x26a9;eip=0x0000da; 	T(SUB(sp, 0x58));	// 84210 sub     sp, 58h ;~ 26A9:00DA
cs=0x26a9;eip=0x0000dd; 	X(PUSH(di));	// 84211 push    di ;~ 26A9:00DD
cs=0x26a9;eip=0x0000de; 	X(PUSH(si));	// 84212 push    si ;~ 26A9:00DE
cs=0x26a9;eip=0x0000df; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_c))));	// 84213 mov     ax, [bp+arg_C] ;~ 26A9:00DF
cs=0x26a9;eip=0x0000e2; 	T(di = bp+var_3a);	// 84214 lea     di, [bp+var_3A] ;~ 26A9:00E2
cs=0x26a9;eip=0x0000e5; 	T(MOV(si, ax));	// 84215 mov     si, ax ;~ 26A9:00E5
cs=0x26a9;eip=0x0000e7; 	X(PUSH(ss));	// 84216 push    ss ;~ 26A9:00E7
cs=0x26a9;eip=0x0000e8; 	X(POP(es));	// 84217 pop     es ;~ 26A9:00E8
cs=0x26a9;eip=0x0000e9; 	X(MOVSW);	// 84218 movsw ;~ 26A9:00E9
cs=0x26a9;eip=0x0000ea; 	X(MOVSW);	// 84219 movsw ;~ 26A9:00EA
cs=0x26a9;eip=0x0000eb; 	X(MOVSW);	// 84220 movsw ;~ 26A9:00EB
cs=0x26a9;eip=0x0000ec; 	X(MOVSW);	// 84221 movsw ;~ 26A9:00EC
cs=0x26a9;eip=0x0000ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 84222 mov     [bp+var_2], 0 ;~ 26A9:00ED
cs=0x26a9;eip=0x0000f2; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), 0x870));	// 84223 mov     [bp+var_30], 870h ;~ 26A9:00F2
cs=0x26a9;eip=0x0000f7; 	T(MOV(ax, *(dw*)((&unk_47ad0))));	// 84224 mov     ax, word ptr unk_47AD0 ;~ 26A9:00F7
cs=0x26a9;eip=0x0000fa; 	T(MOV(dx, *(dw*)((&unk_47ad2))));	// 84225 mov     dx, word ptr unk_47AD2 ;~ 26A9:00FA
cs=0x26a9;eip=0x0000fe; 	T(ADD(ax, 6));	// 84226 add     ax, 6 ;~ 26A9:00FE
cs=0x26a9;eip=0x000101; 	T(di = bp+var_e);	// 84227 lea     di, [bp+var_E] ;~ 26A9:0101
cs=0x26a9;eip=0x000104; 	T(MOV(si, ax));	// 84228 mov     si, ax ;~ 26A9:0104
cs=0x26a9;eip=0x000106; 	X(PUSH(ds));	// 84229 push    ds ;~ 26A9:0106
cs=0x26a9;eip=0x000107; 	T(MOV(ds, dx));	// 84230 mov     ds, dx ;~ 26A9:0107
cs=0x26a9;eip=0x000109; 	T(MOV(cx, 6));	// 84231 mov     cx, 6 ;~ 26A9:0109
	// 84232 repne movsw ;~ 26A9:010C
cs=0x26a9;eip=0x00010c; 	X(	REPNE MOVSW);	// 84232 repne movsw ;~ 26A9:010C
cs=0x26a9;eip=0x00010e; 	X(POP(ds));	// 84233 pop     ds ;~ 26A9:010E
cs=0x26a9;eip=0x00010f; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x2800));	// 84234 mov     [bp+var_A], 2800h ;~ 26A9:010F
cs=0x26a9;eip=0x000114; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 84235 mov     [bp+var_8], 0 ;~ 26A9:0114
cs=0x26a9;eip=0x000119; 	T(ax = bp+var_e);	// 84236 lea     ax, [bp+var_E] ;~ 26A9:0119
cs=0x26a9;eip=0x00011c; 	X(PUSH(ss));	// 84237 push    ss ;~ 26A9:011C
cs=0x26a9;eip=0x00011d; 	X(PUSH(ax));	// 84238 push    ax ;~ 26A9:011D
cs=0x26a9;eip=0x00011e; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 84239 les     bx, dword ptr unk_47AD0 ;~ 26A9:011E
cs=0x26a9;eip=0x000122; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 84240 mov     ax, es:[bx+12h] ;~ 26A9:0122
cs=0x26a9;eip=0x000126; 	T(ADD(ax, 0x5A0));	// 84241 add     ax, 5A0h ;~ 26A9:0126
cs=0x26a9;eip=0x000129; 	X(PUSH(ax));	// 84242 push    ax ;~ 26A9:0129
cs=0x26a9;eip=0x00012a; 	T(SUB(ax, ax));	// 84243 sub     ax, ax ;~ 26A9:012A
cs=0x26a9;eip=0x00012c; 	X(PUSH(ax));	// 84244 push    ax ;~ 26A9:012C
cs=0x26a9;eip=0x00012d; 	T(MOV(ax, 0x4600));	// 84245 mov     ax, 4600h ;~ 26A9:012D
cs=0x26a9;eip=0x000130; 	T(CWD);	// 84246 cwd ;~ 26A9:0130
cs=0x26a9;eip=0x000131; 	X(PUSH(dx));	// 84247 push    dx ;~ 26A9:0131
cs=0x26a9;eip=0x000132; 	X(PUSH(ax));	// 84248 push    ax ;~ 26A9:0132
cs=0x26a9;eip=0x000133; 	R(CALLF(sub_2f4ee,0));	// 84249 call    sub_2F4EE ;~ 26A9:0133
cs=0x26a9;eip=0x000138; 	X(MOV(*(dw*)(raddr(ss,bp+var_50)), 0x0B3F));	// 84250 mov     [bp+var_50], 0B3Fh ;~ 26A9:0138
cs=0x26a9;eip=0x00013d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 84251 mov     ax, [bp+var_E] ;~ 26A9:013D
cs=0x26a9;eip=0x000140; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_c))));	// 84252 mov     dx, [bp+var_C] ;~ 26A9:0140
cs=0x26a9;eip=0x000143; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 84253 sub     ax, [bp+arg_0] ;~ 26A9:0143
cs=0x26a9;eip=0x000146; 	T(SBB(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 84254 sbb     dx, [bp+arg_2] ;~ 26A9:0146
cs=0x26a9;eip=0x000149; 	X(MOV(*(dw*)(raddr(ss,bp+var_4e)), ax));	// 84255 mov     [bp+var_4E], ax ;~ 26A9:0149
cs=0x26a9;eip=0x00014c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4c)), dx));	// 84256 mov     [bp+var_4C], dx ;~ 26A9:014C
cs=0x26a9;eip=0x00014f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 84257 mov     ax, [bp+var_A] ;~ 26A9:014F
cs=0x26a9;eip=0x000152; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 84258 mov     dx, [bp+var_8] ;~ 26A9:0152
cs=0x26a9;eip=0x000155; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 84259 sub     ax, [bp+arg_4] ;~ 26A9:0155
cs=0x26a9;eip=0x000158; 	T(SBB(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 84260 sbb     dx, [bp+arg_6] ;~ 26A9:0158
cs=0x26a9;eip=0x00015b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4a)), ax));	// 84261 mov     [bp+var_4A], ax ;~ 26A9:015B
cs=0x26a9;eip=0x00015e; 	X(MOV(*(dw*)(raddr(ss,bp+var_48)), dx));	// 84262 mov     [bp+var_48], dx ;~ 26A9:015E
cs=0x26a9;eip=0x000161; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 84263 mov     ax, [bp+var_6] ;~ 26A9:0161
cs=0x26a9;eip=0x000164; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 84264 mov     dx, [bp+var_4] ;~ 26A9:0164
cs=0x26a9;eip=0x000167; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 84265 sub     ax, [bp+arg_8] ;~ 26A9:0167
cs=0x26a9;eip=0x00016a; 	T(SBB(dx, *(dw*)(raddr(ss,bp+arg_a))));	// 84266 sbb     dx, [bp+arg_A] ;~ 26A9:016A
cs=0x26a9;eip=0x00016d; 	X(MOV(*(dw*)(raddr(ss,bp+var_46)), ax));	// 84267 mov     [bp+var_46], ax ;~ 26A9:016D
cs=0x26a9;eip=0x000170; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), dx));	// 84268 mov     [bp+var_44], dx ;~ 26A9:0170
cs=0x26a9;eip=0x000173; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 84269 mov     ax, [bp+arg_0] ;~ 26A9:0173
cs=0x26a9;eip=0x000176; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 84270 mov     dx, [bp+arg_2] ;~ 26A9:0176
cs=0x26a9;eip=0x000179; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 84271 mov     [bp+var_1C], ax ;~ 26A9:0179
cs=0x26a9;eip=0x00017c; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), dx));	// 84272 mov     [bp+var_1A], dx ;~ 26A9:017C
cs=0x26a9;eip=0x00017f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 84273 mov     ax, [bp+arg_4] ;~ 26A9:017F
cs=0x26a9;eip=0x000182; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 84274 mov     dx, [bp+arg_6] ;~ 26A9:0182
cs=0x26a9;eip=0x000185; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 84275 mov     [bp+var_18], ax ;~ 26A9:0185
cs=0x26a9;eip=0x000188; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), dx));	// 84276 mov     [bp+var_16], dx ;~ 26A9:0188
cs=0x26a9;eip=0x00018b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 84277 mov     ax, [bp+arg_8] ;~ 26A9:018B
cs=0x26a9;eip=0x00018e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_a))));	// 84278 mov     dx, [bp+arg_A] ;~ 26A9:018E
cs=0x26a9;eip=0x000191; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 84279 mov     [bp+var_14], ax ;~ 26A9:0191
cs=0x26a9;eip=0x000194; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), dx));	// 84280 mov     [bp+var_12], dx ;~ 26A9:0194
cs=0x26a9;eip=0x000197; 	X(MOV(*(dw*)(raddr(ss,bp+var_54)), 0));	// 84281 mov     [bp+var_54], 0 ;~ 26A9:0197
cs=0x26a9;eip=0x00019c; 	T(SUB(al, al));	// 84282 sub     al, al ;~ 26A9:019C
cs=0x26a9;eip=0x00019e; 	X(MOV(*(raddr(ss,bp+var_1e)), al));	// 84283 mov     [bp+var_1E], al ;~ 26A9:019E
cs=0x26a9;eip=0x0001a1; 	X(MOV(*(raddr(ss,bp+var_58)), al));	// 84284 mov     [bp+var_58], al ;~ 26A9:01A1
cs=0x26a9;eip=0x0001a4; 	X(MOV(*(raddr(ss,bp+var_2c)), al));	// 84285 mov     [bp+var_2C], al ;~ 26A9:01A4
cs=0x26a9;eip=0x0001a7; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 84286 mov     [bp+var_10], al ;~ 26A9:01A7
cs=0x26a9;eip=0x0001aa; 	X(MOV(*(raddr(ss,bp+var_42)), al));	// 84287 mov     [bp+var_42], al ;~ 26A9:01AA
cs=0x26a9;eip=0x0001ad; 	T(MOV(ax, *(dw*)((&unk_5649a))));	// 84288 mov     ax, word ptr unk_5649A ;~ 26A9:01AD
cs=0x26a9;eip=0x0001b0; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 84289 mov     [bp+var_22], ax ;~ 26A9:01B0
cs=0x26a9;eip=0x0001b3; 	T(MOV(ax, *(dw*)((&unk_57068))));	// 84290 mov     ax, word ptr unk_57068 ;~ 26A9:01B3
cs=0x26a9;eip=0x0001b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_52)), ax));	// 84291 mov     [bp+var_52], ax ;~ 26A9:01B6
cs=0x26a9;eip=0x0001b9; 	T(MOV(al, unk_564ec));	// 84292 mov     al, byte ptr unk_564EC ;~ 26A9:01B9
cs=0x26a9;eip=0x0001bc; 	X(MOV(*(raddr(ss,bp+var_2a)), al));	// 84293 mov     [bp+var_2A], al ;~ 26A9:01BC
cs=0x26a9;eip=0x0001bf; 	X(MOV(unk_564ec, 0));	// 84294 mov     byte ptr unk_564EC, 0 ;~ 26A9:01BF
cs=0x26a9;eip=0x0001c4; 	T(MOV(al, unk_570ba));	// 84295 mov     al, byte ptr unk_570BA ;~ 26A9:01C4
cs=0x26a9;eip=0x0001c7; 	X(MOV(*(raddr(ss,bp+var_56)), al));	// 84296 mov     [bp+var_56], al ;~ 26A9:01C7
cs=0x26a9;eip=0x0001ca; 	X(MOV(unk_570ba, 0));	// 84297 mov     byte ptr unk_570BA, 0 ;~ 26A9:01CA
cs=0x26a9;eip=0x0001cf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_36))));	// 84298 mov     ax, [bp+var_36] ;~ 26A9:01CF
cs=0x26a9;eip=0x0001d2; 	T(SAR(ax, 1));	// 84299 sar     ax, 1 ;~ 26A9:01D2
cs=0x26a9;eip=0x0001d4; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_3a))));	// 84300 add     ax, [bp+var_3A] ;~ 26A9:01D4
cs=0x26a9;eip=0x0001d7; 	X(MOV(*(dw*)((&unk_49ff8)), ax));	// 84301 mov     word ptr unk_49FF8, ax ;~ 26A9:01D7
cs=0x26a9;eip=0x0001da; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), ax));	// 84302 mov     [bp+var_3E], ax ;~ 26A9:01DA
cs=0x26a9;eip=0x0001dd; 	T(CMP(unk_47ac2, 0));	// 84303 cmp     byte ptr unk_47AC2, 0 ;~ 26A9:01DD
cs=0x26a9;eip=0x0001e2; 	R(JNZ(loc_35257));	// 84304 jnz     short loc_35257 ;~ 26A9:01E2
cs=0x26a9;eip=0x0001e4; 	R(JMP(loc_355a6));	// 84305 jmp     loc_355A6 ;~ 26A9:01E4
loc_35257:
	// 9795 
cs=0x26a9;eip=0x0001e7; 	X(PUSH(word_5651a));	// 84309 push    word_5651A ;~ 26A9:01E7
cs=0x26a9;eip=0x0001eb; 	T(MOV(ax, 1));	// 84310 mov     ax, 1 ;~ 26A9:01EB
cs=0x26a9;eip=0x0001ee; 	T(SUB(ax, word_5651a));	// 84311 sub     ax, word_5651A ;~ 26A9:01EE
cs=0x26a9;eip=0x0001f2; 	X(PUSH(ax));	// 84312 push    ax ;~ 26A9:01F2
cs=0x26a9;eip=0x0001f3; 	R(CALLF(sub_2c939,0));	// 84313 call    sub_2C939 ;~ 26A9:01F3
cs=0x26a9;eip=0x0001f8; 	R(CALLF(sub_3101f,0));	// 84314 call    sub_3101F ;~ 26A9:01F8
cs=0x26a9;eip=0x0001fd; 	R(CALLF(sub_1bbee,0));	// 84315 call    sub_1BBEE ;~ 26A9:01FD
cs=0x26a9;eip=0x000202; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), 0));	// 84316 mov     [bp+var_20], 0 ;~ 26A9:0202
loc_35277:
	// 9796 
cs=0x26a9;eip=0x000207; 	R(CALLF(sub_2ee71,0));	// 84320 call    sub_2EE71 ;~ 26A9:0207
cs=0x26a9;eip=0x00020c; 	X(MOV(*(dw*)(raddr(ss,bp+var_3c)), ax));	// 84321 mov     [bp+var_3C], ax ;~ 26A9:020C
cs=0x26a9;eip=0x00020f; 	T(OR(ax, ax));	// 84322 or      ax, ax ;~ 26A9:020F
cs=0x26a9;eip=0x000211; 	R(JZ(loc_35290));	// 84323 jz      short loc_35290 ;~ 26A9:0211
cs=0x26a9;eip=0x000213; 	T(CMP(ax, 3));	// 84324 cmp     ax, 3 ;~ 26A9:0213
cs=0x26a9;eip=0x000216; 	R(JZ(loc_3528b));	// 84325 jz      short loc_3528B ;~ 26A9:0216
cs=0x26a9;eip=0x000218; 	R(JMP(loc_355a6));	// 84326 jmp     loc_355A6 ;~ 26A9:0218
loc_3528b:
	// 9797 
cs=0x26a9;eip=0x00021b; 	R(CALLF(sub_318b6,0));	// 84330 call    sub_318B6 ;~ 26A9:021B
loc_35290:
	// 9798 
cs=0x26a9;eip=0x000220; 	R(CALLF(sub_1bc16,0));	// 84333 call    sub_1BC16 ;~ 26A9:0220
cs=0x26a9;eip=0x000225; 	T(CMP(*(dw*)((&unk_57056)), 0x80));	// 84334 cmp     word ptr unk_57056, 80h ; '€' ;~ 26A9:0225
cs=0x26a9;eip=0x00022b; 	R(JLE(loc_352a3));	// 84335 jle     short loc_352A3 ;~ 26A9:022B
cs=0x26a9;eip=0x00022d; 	X(MOV(*(dw*)((&unk_57056)), 0x80));	// 84336 mov     word ptr unk_57056, 80h ; '€' ;~ 26A9:022D
loc_352a3:
	// 9799 
cs=0x26a9;eip=0x000233; 	T(CMP(*(dw*)((&unk_57058)), 1));	// 84339 cmp     word ptr unk_57058, 1 ;~ 26A9:0233
cs=0x26a9;eip=0x000238; 	R(JC(loc_352c5));	// 84340 jb      short loc_352C5 ;~ 26A9:0238
cs=0x26a9;eip=0x00023a; 	T(CMP(*(raddr(ss,bp+var_1e)), 0));	// 84341 cmp     [bp+var_1E], 0 ;~ 26A9:023A
cs=0x26a9;eip=0x00023e; 	R(JNZ(loc_352c5));	// 84342 jnz     short loc_352C5 ;~ 26A9:023E
cs=0x26a9;eip=0x000240; 	X(MOV(*(raddr(ss,bp+var_1e)), 1));	// 84343 mov     [bp+var_1E], 1 ;~ 26A9:0240
cs=0x26a9;eip=0x000244; 	T(di = bp+var_3a);	// 84344 lea     di, [bp+var_3A] ;~ 26A9:0244
cs=0x26a9;eip=0x000247; 	T(MOV(si, 0x180));	// 84345 mov     si, 180h ;~ 26A9:0247
cs=0x26a9;eip=0x00024a; 	X(PUSH(ss));	// 84346 push    ss ;~ 26A9:024A
cs=0x26a9;eip=0x00024b; 	X(POP(es));	// 84347 pop     es ;~ 26A9:024B
cs=0x26a9;eip=0x00024c; 	X(MOVSW);	// 84348 movsw ;~ 26A9:024C
cs=0x26a9;eip=0x00024d; 	X(MOVSW);	// 84349 movsw ;~ 26A9:024D
cs=0x26a9;eip=0x00024e; 	X(MOVSW);	// 84350 movsw ;~ 26A9:024E
cs=0x26a9;eip=0x00024f; 	X(MOVSW);	// 84351 movsw ;~ 26A9:024F
cs=0x26a9;eip=0x000250; 	R(CALLF(sub_20565,0));	// 84352 call    sub_20565 ;~ 26A9:0250
loc_352c5:
	// 9800 
cs=0x26a9;eip=0x000255; 	T(CMP(*(dw*)((&unk_57058)), 2));	// 84356 cmp     word ptr unk_57058, 2 ;~ 26A9:0255
cs=0x26a9;eip=0x00025a; 	R(JNC(loc_352e8));	// 84357 jnb     short loc_352E8 ;~ 26A9:025A
cs=0x26a9;eip=0x00025c; 	X(PUSH(word_5705a));	// 84358 push    word_5705A ;~ 26A9:025C
cs=0x26a9;eip=0x000260; 	T(MOV(ax, 0x0A0));	// 84359 mov     ax, 0A0h ; ' ' ;~ 26A9:0260
cs=0x26a9;eip=0x000263; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_3e))));	// 84360 sub     ax, [bp+var_3E] ;~ 26A9:0263
cs=0x26a9;eip=0x000266; 	X(PUSH(ax));	// 84361 push    ax ;~ 26A9:0266
cs=0x26a9;eip=0x000267; 	T(MOV(ax, 0x200));	// 84362 mov     ax, 200h ;~ 26A9:0267
cs=0x26a9;eip=0x00026a; 	X(PUSH(ax));	// 84363 push    ax ;~ 26A9:026A
cs=0x26a9;eip=0x00026b; 	R(CALLF(sub_2f01c,0));	// 84364 call    sub_2F01C ;~ 26A9:026B
cs=0x26a9;eip=0x000270; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_3e))));	// 84365 add     ax, [bp+var_3E] ;~ 26A9:0270
cs=0x26a9;eip=0x000273; 	X(MOV(*(dw*)((&unk_49ff8)), ax));	// 84366 mov     word ptr unk_49FF8, ax ;~ 26A9:0273
cs=0x26a9;eip=0x000276; 	R(JMP(loc_352ee));	// 84367 jmp     short loc_352EE ;~ 26A9:0276
loc_352e8:
	// 9801 
cs=0x26a9;eip=0x000278; 	X(MOV(*(dw*)((&unk_49ff8)), 0x0A0));	// 84371 mov     word ptr unk_49FF8, 0A0h ; ' ' ;~ 26A9:0278
loc_352ee:
	// 9802 
cs=0x26a9;eip=0x00027e; 	T(ax = bp+var_1c);	// 84374 lea     ax, [bp+var_1C] ;~ 26A9:027E
cs=0x26a9;eip=0x000281; 	X(PUSH(ax));	// 84375 push    ax ;~ 26A9:0281
cs=0x26a9;eip=0x000282; 	T(ax = bp+var_e);	// 84376 lea     ax, [bp+var_E] ;~ 26A9:0282
cs=0x26a9;eip=0x000285; 	X(PUSH(ax));	// 84377 push    ax ;~ 26A9:0285
cs=0x26a9;eip=0x000286; 	T(ax = bp+var_4e);	// 84378 lea     ax, [bp+var_4E] ;~ 26A9:0286
cs=0x26a9;eip=0x000289; 	X(PUSH(ax));	// 84379 push    ax ;~ 26A9:0289
cs=0x26a9;eip=0x00028a; 	R(CALL(sub_35078,0));	// 84380 call    sub_35078 ;~ 26A9:028A
cs=0x26a9;eip=0x00028d; 	T(ax = bp+var_18);	// 84381 lea     ax, [bp+var_18] ;~ 26A9:028D
cs=0x26a9;eip=0x000290; 	X(PUSH(ax));	// 84382 push    ax ;~ 26A9:0290
cs=0x26a9;eip=0x000291; 	T(ax = bp+var_a);	// 84383 lea     ax, [bp+var_A] ;~ 26A9:0291
cs=0x26a9;eip=0x000294; 	X(PUSH(ax));	// 84384 push    ax ;~ 26A9:0294
cs=0x26a9;eip=0x000295; 	T(ax = bp+var_4a);	// 84385 lea     ax, [bp+var_4A] ;~ 26A9:0295
cs=0x26a9;eip=0x000298; 	X(PUSH(ax));	// 84386 push    ax ;~ 26A9:0298
cs=0x26a9;eip=0x000299; 	R(CALL(sub_35078,0));	// 84387 call    sub_35078 ;~ 26A9:0299
cs=0x26a9;eip=0x00029c; 	T(ax = bp+var_14);	// 84388 lea     ax, [bp+var_14] ;~ 26A9:029C
cs=0x26a9;eip=0x00029f; 	X(PUSH(ax));	// 84389 push    ax ;~ 26A9:029F
cs=0x26a9;eip=0x0002a0; 	T(ax = bp+var_6);	// 84390 lea     ax, [bp+var_6] ;~ 26A9:02A0
cs=0x26a9;eip=0x0002a3; 	X(PUSH(ax));	// 84391 push    ax ;~ 26A9:02A3
cs=0x26a9;eip=0x0002a4; 	T(ax = bp+var_46);	// 84392 lea     ax, [bp+var_46] ;~ 26A9:02A4
cs=0x26a9;eip=0x0002a7; 	X(PUSH(ax));	// 84393 push    ax ;~ 26A9:02A7
cs=0x26a9;eip=0x0002a8; 	R(CALL(sub_35078,0));	// 84394 call    sub_35078 ;~ 26A9:02A8
cs=0x26a9;eip=0x0002ab; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 84395 mov     ax, [bp+var_14] ;~ 26A9:02AB
cs=0x26a9;eip=0x0002ae; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_12))));	// 84396 mov     dx, [bp+var_12] ;~ 26A9:02AE
cs=0x26a9;eip=0x0002b1; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_6))));	// 84397 sub     ax, [bp+var_6] ;~ 26A9:02B1
cs=0x26a9;eip=0x0002b4; 	T(SBB(dx, *(dw*)(raddr(ss,bp+var_4))));	// 84398 sbb     dx, [bp+var_4] ;~ 26A9:02B4
cs=0x26a9;eip=0x0002b7; 	R(JNS(loc_35330));	// 84399 jns     short loc_35330 ;~ 26A9:02B7
cs=0x26a9;eip=0x0002b9; 	T(NEG(ax));	// 84400 neg     ax ;~ 26A9:02B9
cs=0x26a9;eip=0x0002bb; 	T(ADC(dx, 0));	// 84401 adc     dx, 0 ;~ 26A9:02BB
cs=0x26a9;eip=0x0002be; 	T(NEG(dx));	// 84402 neg     dx ;~ 26A9:02BE
loc_35330:
	// 9803 
cs=0x26a9;eip=0x0002c0; 	T(MOV(cx, ax));	// 84405 mov     cx, ax ;~ 26A9:02C0
cs=0x26a9;eip=0x0002c2; 	T(MOV(bx, dx));	// 84406 mov     bx, dx ;~ 26A9:02C2
cs=0x26a9;eip=0x0002c4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 84407 mov     ax, [bp+var_18] ;~ 26A9:02C4
cs=0x26a9;eip=0x0002c7; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_16))));	// 84408 mov     dx, [bp+var_16] ;~ 26A9:02C7
cs=0x26a9;eip=0x0002ca; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_a))));	// 84409 sub     ax, [bp+var_A] ;~ 26A9:02CA
cs=0x26a9;eip=0x0002cd; 	T(SBB(dx, *(dw*)(raddr(ss,bp+var_8))));	// 84410 sbb     dx, [bp+var_8] ;~ 26A9:02CD
cs=0x26a9;eip=0x0002d0; 	R(JNS(loc_35349));	// 84411 jns     short loc_35349 ;~ 26A9:02D0
cs=0x26a9;eip=0x0002d2; 	T(NEG(ax));	// 84412 neg     ax ;~ 26A9:02D2
cs=0x26a9;eip=0x0002d4; 	T(ADC(dx, 0));	// 84413 adc     dx, 0 ;~ 26A9:02D4
cs=0x26a9;eip=0x0002d7; 	T(NEG(dx));	// 84414 neg     dx ;~ 26A9:02D7
loc_35349:
	// 9804 
cs=0x26a9;eip=0x0002d9; 	T(MOV(si, ax));	// 84417 mov     si, ax ;~ 26A9:02D9
cs=0x26a9;eip=0x0002db; 	T(MOV(di, dx));	// 84418 mov     di, dx ;~ 26A9:02DB
cs=0x26a9;eip=0x0002dd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 84419 mov     ax, [bp+var_1C] ;~ 26A9:02DD
cs=0x26a9;eip=0x0002e0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_1a))));	// 84420 mov     dx, [bp+var_1A] ;~ 26A9:02E0
cs=0x26a9;eip=0x0002e3; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_e))));	// 84421 sub     ax, [bp+var_E] ;~ 26A9:02E3
cs=0x26a9;eip=0x0002e6; 	T(SBB(dx, *(dw*)(raddr(ss,bp+var_c))));	// 84422 sbb     dx, [bp+var_C] ;~ 26A9:02E6
cs=0x26a9;eip=0x0002e9; 	R(JNS(loc_35362));	// 84423 jns     short loc_35362 ;~ 26A9:02E9
cs=0x26a9;eip=0x0002eb; 	T(NEG(ax));	// 84424 neg     ax ;~ 26A9:02EB
cs=0x26a9;eip=0x0002ed; 	T(ADC(dx, 0));	// 84425 adc     dx, 0 ;~ 26A9:02ED
cs=0x26a9;eip=0x0002f0; 	T(NEG(dx));	// 84426 neg     dx ;~ 26A9:02F0
loc_35362:
	// 9805 
cs=0x26a9;eip=0x0002f2; 	T(ADD(ax, si));	// 84429 add     ax, si ;~ 26A9:02F2
cs=0x26a9;eip=0x0002f4; 	T(ADC(dx, di));	// 84430 adc     dx, di ;~ 26A9:02F4
cs=0x26a9;eip=0x0002f6; 	T(ADD(ax, cx));	// 84431 add     ax, cx ;~ 26A9:02F6
cs=0x26a9;eip=0x0002f8; 	T(ADC(dx, bx));	// 84432 adc     dx, bx ;~ 26A9:02F8
cs=0x26a9;eip=0x0002fa; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 84433 mov     [bp+var_28], ax ;~ 26A9:02FA
cs=0x26a9;eip=0x0002fd; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), dx));	// 84434 mov     [bp+var_26], dx ;~ 26A9:02FD
cs=0x26a9;eip=0x000300; 	T(MOV(cl, 8));	// 84435 mov     cl, 8 ;~ 26A9:0300
cs=0x26a9;eip=0x000302; 	R(CALLF(sub_10240,0));	// 84436 call    sub_10240 ;~ 26A9:0302
cs=0x26a9;eip=0x000307; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_54))));	// 84437 mov     bx, [bp+var_54] ;~ 26A9:0307
cs=0x26a9;eip=0x00030a; 	T(SHL(bx, 1));	// 84438 shl     bx, 1 ;~ 26A9:030A
cs=0x26a9;eip=0x00030c; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x264A))));	// 84439 mov     cx, [bx+264Ah] ;~ 26A9:030C
cs=0x26a9;eip=0x000310; 	T(SUB(bx, bx));	// 84440 sub     bx, bx ;~ 26A9:0310
cs=0x26a9;eip=0x000312; 	T(CMP(bx, dx));	// 84441 cmp     bx, dx ;~ 26A9:0312
cs=0x26a9;eip=0x000314; 	R(JC(loc_353a1));	// 84442 jb      short loc_353A1 ;~ 26A9:0314
cs=0x26a9;eip=0x000316; 	R(JA(loc_3538c));	// 84443 ja      short loc_3538C ;~ 26A9:0316
cs=0x26a9;eip=0x000318; 	T(CMP(cx, ax));	// 84444 cmp     cx, ax ;~ 26A9:0318
cs=0x26a9;eip=0x00031a; 	R(JBE(loc_353a1));	// 84445 jbe     short loc_353A1 ;~ 26A9:031A
loc_3538c:
	// 9806 
cs=0x26a9;eip=0x00031c; 	X(SAR(*(dw*)(raddr(ss,bp+var_4c)), 1));	// 84448 sar     [bp+var_4C], 1 ;~ 26A9:031C
cs=0x26a9;eip=0x00031f; 	X(RCR(*(dw*)(raddr(ss,bp+var_4e)), 1));	// 84449 rcr     [bp+var_4E], 1 ;~ 26A9:031F
cs=0x26a9;eip=0x000322; 	X(SAR(*(dw*)(raddr(ss,bp+var_48)), 1));	// 84450 sar     [bp+var_48], 1 ;~ 26A9:0322
cs=0x26a9;eip=0x000325; 	X(RCR(*(dw*)(raddr(ss,bp+var_4a)), 1));	// 84451 rcr     [bp+var_4A], 1 ;~ 26A9:0325
cs=0x26a9;eip=0x000328; 	X(SAR(*(dw*)(raddr(ss,bp+var_44)), 1));	// 84452 sar     [bp+var_44], 1 ;~ 26A9:0328
cs=0x26a9;eip=0x00032b; 	X(RCR(*(dw*)(raddr(ss,bp+var_46)), 1));	// 84453 rcr     [bp+var_46], 1 ;~ 26A9:032B
cs=0x26a9;eip=0x00032e; 	X(INC(*(dw*)(raddr(ss,bp+var_54))));	// 84454 inc     [bp+var_54] ;~ 26A9:032E
loc_353a1:
	// 9807 
cs=0x26a9;eip=0x000331; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 84458 push    [bp+var_1A] ;~ 26A9:0331
cs=0x26a9;eip=0x000334; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 84459 push    [bp+var_1C] ;~ 26A9:0334
cs=0x26a9;eip=0x000337; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 84460 push    [bp+var_16] ;~ 26A9:0337
cs=0x26a9;eip=0x00033a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 84461 push    [bp+var_18] ;~ 26A9:033A
cs=0x26a9;eip=0x00033d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 84462 push    [bp+var_12] ;~ 26A9:033D
cs=0x26a9;eip=0x000340; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 84463 push    [bp+var_14] ;~ 26A9:0340
cs=0x26a9;eip=0x000343; 	X(PUSH(*(dw*)((&unk_47ad2))));	// 84464 push    word ptr unk_47AD2 ;~ 26A9:0343
cs=0x26a9;eip=0x000347; 	X(PUSH(*(dw*)((&unk_47ad0))));	// 84465 push    word ptr unk_47AD0 ;~ 26A9:0347
cs=0x26a9;eip=0x00034b; 	T(ax = bp+var_2e);	// 84466 lea     ax, [bp+var_2E] ;~ 26A9:034B
cs=0x26a9;eip=0x00034e; 	X(PUSH(ax));	// 84467 push    ax ;~ 26A9:034E
cs=0x26a9;eip=0x00034f; 	T(ax = bp+var_32);	// 84468 lea     ax, [bp+var_32] ;~ 26A9:034F
cs=0x26a9;eip=0x000352; 	X(PUSH(ax));	// 84469 push    ax ;~ 26A9:0352
cs=0x26a9;eip=0x000353; 	R(CALLF(sub_25b9c,0));	// 84470 call    sub_25B9C ;~ 26A9:0353
cs=0x26a9;eip=0x000358; 	T(MOV(ax, 0x0F0));	// 84471 mov     ax, 0F0h ; 'ğ' ;~ 26A9:0358
cs=0x26a9;eip=0x00035b; 	X(PUSH(ax));	// 84472 push    ax ;~ 26A9:035B
cs=0x26a9;eip=0x00035c; 	X(PUSH(*(dw*)((&unk_57056))));	// 84473 push    word ptr unk_57056 ;~ 26A9:035C
cs=0x26a9;eip=0x000360; 	R(CALLF(sub_2f002,0));	// 84474 call    sub_2F002 ;~ 26A9:0360
cs=0x26a9;eip=0x000365; 	T(MOV(cl, 8));	// 84475 mov     cl, 8 ;~ 26A9:0365
cs=0x26a9;eip=0x000367; 	R(CALLF(sub_10240,0));	// 84476 call    sub_10240 ;~ 26A9:0367
cs=0x26a9;eip=0x00036c; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 84477 mov     [bp+var_40], ax ;~ 26A9:036C
cs=0x26a9;eip=0x00036f; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 1));	// 84478 cmp     [bp+var_16], 1 ;~ 26A9:036F
cs=0x26a9;eip=0x000373; 	R(JGE(loc_353ed));	// 84479 jge     short loc_353ED ;~ 26A9:0373
cs=0x26a9;eip=0x000375; 	T(MOV(al, 1));	// 84480 mov     al, 1 ;~ 26A9:0375
cs=0x26a9;eip=0x000377; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 84481 mov     [bp+var_10], al ;~ 26A9:0377
cs=0x26a9;eip=0x00037a; 	X(MOV(*(raddr(ss,bp+var_42)), al));	// 84482 mov     [bp+var_42], al ;~ 26A9:037A
loc_353ed:
	// 9808 
cs=0x26a9;eip=0x00037d; 	T(CMP(*(raddr(ss,bp+var_42)), 0));	// 84485 cmp     [bp+var_42], 0 ;~ 26A9:037D
cs=0x26a9;eip=0x000381; 	R(JZ(loc_353fb));	// 84486 jz      short loc_353FB ;~ 26A9:0381
cs=0x26a9;eip=0x000383; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2e))));	// 84487 mov     ax, [bp+var_2E] ;~ 26A9:0383
cs=0x26a9;eip=0x000386; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 84488 mov     [bp+var_2], ax ;~ 26A9:0386
cs=0x26a9;eip=0x000389; 	R(JMP(loc_3541d));	// 84489 jmp     short loc_3541D ;~ 26A9:0389
loc_353fb:
	// 9809 
cs=0x26a9;eip=0x00038b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 84493 push    [bp+var_2] ;~ 26A9:038B
cs=0x26a9;eip=0x00038e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 84494 push    [bp+var_2E] ;~ 26A9:038E
cs=0x26a9;eip=0x000391; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40))));	// 84495 push    [bp+var_40] ;~ 26A9:0391
cs=0x26a9;eip=0x000394; 	R(CALLF(sub_13561,0));	// 84496 call    sub_13561 ;~ 26A9:0394
cs=0x26a9;eip=0x000399; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 84497 mov     [bp+var_2], ax ;~ 26A9:0399
cs=0x26a9;eip=0x00039c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2e))));	// 84498 mov     ax, [bp+var_2E] ;~ 26A9:039C
cs=0x26a9;eip=0x00039f; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 84499 cmp     [bp+var_2], ax ;~ 26A9:039F
cs=0x26a9;eip=0x0003a2; 	R(JNZ(loc_35418));	// 84500 jnz     short loc_35418 ;~ 26A9:03A2
cs=0x26a9;eip=0x0003a4; 	T(MOV(al, 1));	// 84501 mov     al, 1 ;~ 26A9:03A4
cs=0x26a9;eip=0x0003a6; 	R(JMP(loc_3541a));	// 84502 jmp     short loc_3541A ;~ 26A9:03A6
loc_35418:
	// 9810 
cs=0x26a9;eip=0x0003a8; 	T(SUB(al, al));	// 84506 sub     al, al ;~ 26A9:03A8
loc_3541a:
	// 9811 
cs=0x26a9;eip=0x0003aa; 	X(MOV(*(raddr(ss,bp+var_42)), al));	// 84509 mov     [bp+var_42], al ;~ 26A9:03AA
loc_3541d:
	// 9812 
cs=0x26a9;eip=0x0003ad; 	T(CMP(*(raddr(ss,bp+var_10)), 0));	// 84512 cmp     [bp+var_10], 0 ;~ 26A9:03AD
cs=0x26a9;eip=0x0003b1; 	R(JZ(loc_3542b));	// 84513 jz      short loc_3542B ;~ 26A9:03B1
cs=0x26a9;eip=0x0003b3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_32))));	// 84514 mov     ax, [bp+var_32] ;~ 26A9:03B3
cs=0x26a9;eip=0x0003b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 84515 mov     [bp+var_30], ax ;~ 26A9:03B6
cs=0x26a9;eip=0x0003b9; 	R(JMP(loc_3544d));	// 84516 jmp     short loc_3544D ;~ 26A9:03B9
loc_3542b:
	// 9813 
cs=0x26a9;eip=0x0003bb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30))));	// 84520 push    [bp+var_30] ;~ 26A9:03BB
cs=0x26a9;eip=0x0003be; 	X(PUSH(*(dw*)(raddr(ss,bp+var_32))));	// 84521 push    [bp+var_32] ;~ 26A9:03BE
cs=0x26a9;eip=0x0003c1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40))));	// 84522 push    [bp+var_40] ;~ 26A9:03C1
cs=0x26a9;eip=0x0003c4; 	R(CALLF(sub_13561,0));	// 84523 call    sub_13561 ;~ 26A9:03C4
cs=0x26a9;eip=0x0003c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 84524 mov     [bp+var_30], ax ;~ 26A9:03C9
cs=0x26a9;eip=0x0003cc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_32))));	// 84525 mov     ax, [bp+var_32] ;~ 26A9:03CC
cs=0x26a9;eip=0x0003cf; 	T(CMP(*(dw*)(raddr(ss,bp+var_30)), ax));	// 84526 cmp     [bp+var_30], ax ;~ 26A9:03CF
cs=0x26a9;eip=0x0003d2; 	R(JNZ(loc_35448));	// 84527 jnz     short loc_35448 ;~ 26A9:03D2
cs=0x26a9;eip=0x0003d4; 	T(MOV(al, 1));	// 84528 mov     al, 1 ;~ 26A9:03D4
cs=0x26a9;eip=0x0003d6; 	R(JMP(loc_3544a));	// 84529 jmp     short loc_3544A ;~ 26A9:03D6
loc_35448:
	// 9814 
cs=0x26a9;eip=0x0003d8; 	T(SUB(al, al));	// 84533 sub     al, al ;~ 26A9:03D8
loc_3544a:
	// 9815 
cs=0x26a9;eip=0x0003da; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 84536 mov     [bp+var_10], al ;~ 26A9:03DA
loc_3544d:
	// 9816 
cs=0x26a9;eip=0x0003dd; 	R(CALLF(sub_3db22,0));	// 84539 call    sub_3DB22 ;~ 26A9:03DD
cs=0x26a9;eip=0x0003e2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 84540 push    [bp+var_12] ;~ 26A9:03E2
cs=0x26a9;eip=0x0003e5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 84541 push    [bp+var_14] ;~ 26A9:03E5
cs=0x26a9;eip=0x0003e8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 84542 push    [bp+var_16] ;~ 26A9:03E8
cs=0x26a9;eip=0x0003eb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 84543 push    [bp+var_18] ;~ 26A9:03EB
cs=0x26a9;eip=0x0003ee; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 84544 push    [bp+var_1A] ;~ 26A9:03EE
cs=0x26a9;eip=0x0003f1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 84545 push    [bp+var_1C] ;~ 26A9:03F1
cs=0x26a9;eip=0x0003f4; 	R(CALLF(sub_3e0d0,0));	// 84546 call    sub_3E0D0 ;~ 26A9:03F4
cs=0x26a9;eip=0x0003f9; 	T(ADD(sp, 0x0C));	// 84547 add     sp, 0Ch ;~ 26A9:03F9
cs=0x26a9;eip=0x0003fc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 84548 push    [bp+var_12] ;~ 26A9:03FC
cs=0x26a9;eip=0x0003ff; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 84549 push    [bp+var_14] ;~ 26A9:03FF
cs=0x26a9;eip=0x000402; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 84550 push    [bp+var_16] ;~ 26A9:0402
cs=0x26a9;eip=0x000405; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 84551 push    [bp+var_18] ;~ 26A9:0405
cs=0x26a9;eip=0x000408; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 84552 push    [bp+var_1A] ;~ 26A9:0408
cs=0x26a9;eip=0x00040b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 84553 push    [bp+var_1C] ;~ 26A9:040B
cs=0x26a9;eip=0x00040e; 	R(CALLF(sub_3e149,0));	// 84554 call    sub_3E149 ;~ 26A9:040E
cs=0x26a9;eip=0x000413; 	T(ADD(sp, 0x0C));	// 84555 add     sp, 0Ch ;~ 26A9:0413
cs=0x26a9;eip=0x000416; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x4E));	// 84556 cmp     [bp+var_16], 4Eh ; 'N' ;~ 26A9:0416
cs=0x26a9;eip=0x00041a; 	R(JL(loc_354fe));	// 84557 jl      short loc_354FE ;~ 26A9:041A
cs=0x26a9;eip=0x00041c; 	R(JG(loc_35495));	// 84558 jg      short loc_35495 ;~ 26A9:041C
cs=0x26a9;eip=0x00041e; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x2000));	// 84559 cmp     [bp+var_18], 2000h ;~ 26A9:041E
cs=0x26a9;eip=0x000423; 	R(JC(loc_354fe));	// 84560 jb      short loc_354FE ;~ 26A9:0423
loc_35495:
	// 9817 
cs=0x26a9;eip=0x000425; 	T(CMP(*(raddr(ss,bp+var_58)), 0));	// 84563 cmp     [bp+var_58], 0 ;~ 26A9:0425
cs=0x26a9;eip=0x000429; 	R(JZ(loc_354a0));	// 84564 jz      short loc_354A0 ;~ 26A9:0429
cs=0x26a9;eip=0x00042b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_52))));	// 84565 mov     ax, [bp+var_52] ;~ 26A9:042B
cs=0x26a9;eip=0x00042e; 	R(JMP(loc_354a3));	// 84566 jmp     short loc_354A3 ;~ 26A9:042E
loc_354a0:
	// 9818 
cs=0x26a9;eip=0x000430; 	T(MOV(ax, 1));	// 84570 mov     ax, 1 ;~ 26A9:0430
loc_354a3:
	// 9819 
cs=0x26a9;eip=0x000433; 	X(MOV(*(dw*)((&unk_57068)), ax));	// 84573 mov     word ptr unk_57068, ax ;~ 26A9:0433
cs=0x26a9;eip=0x000436; 	X(MOV(*(raddr(ss,bp+var_58)), 1));	// 84574 mov     [bp+var_58], 1 ;~ 26A9:0436
cs=0x26a9;eip=0x00043a; 	T(MOV(al, unk_47ac4));	// 84575 mov     al, byte ptr unk_47AC4 ;~ 26A9:043A
cs=0x26a9;eip=0x00043d; 	T(CBW);	// 84576 cbw ;~ 26A9:043D
cs=0x26a9;eip=0x00043e; 	X(PUSH(ax));	// 84577 push    ax ;~ 26A9:043E
cs=0x26a9;eip=0x00043f; 	T(MOV(ax, 1));	// 84578 mov     ax, 1 ;~ 26A9:043F
cs=0x26a9;eip=0x000442; 	X(PUSH(ax));	// 84579 push    ax ;~ 26A9:0442
cs=0x26a9;eip=0x000443; 	T(SUB(ax, ax));	// 84580 sub     ax, ax ;~ 26A9:0443
cs=0x26a9;eip=0x000445; 	X(PUSH(ax));	// 84581 push    ax ;~ 26A9:0445
cs=0x26a9;eip=0x000446; 	T(ax = bp+var_3a);	// 84582 lea     ax, [bp+var_3A] ;~ 26A9:0446
cs=0x26a9;eip=0x000449; 	X(PUSH(ax));	// 84583 push    ax ;~ 26A9:0449
cs=0x26a9;eip=0x00044a; 	T(MOV(ax, 7));	// 84584 mov     ax, 7 ;~ 26A9:044A
cs=0x26a9;eip=0x00044d; 	X(PUSH(ax));	// 84585 push    ax ;~ 26A9:044D
cs=0x26a9;eip=0x00044e; 	T(SUB(ax, ax));	// 84586 sub     ax, ax ;~ 26A9:044E
cs=0x26a9;eip=0x000450; 	X(PUSH(ax));	// 84587 push    ax ;~ 26A9:0450
cs=0x26a9;eip=0x000451; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30))));	// 84588 push    [bp+var_30] ;~ 26A9:0451
cs=0x26a9;eip=0x000454; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 84589 push    [bp+var_2] ;~ 26A9:0454
cs=0x26a9;eip=0x000457; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 84590 mov     ax, [bp+var_14] ;~ 26A9:0457
cs=0x26a9;eip=0x00045a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_12))));	// 84591 mov     dx, [bp+var_12] ;~ 26A9:045A
cs=0x26a9;eip=0x00045d; 	T(MOV(cl, 8));	// 84592 mov     cl, 8 ;~ 26A9:045D
cs=0x26a9;eip=0x00045f; 	R(CALLF(sub_10240,0));	// 84593 call    sub_10240 ;~ 26A9:045F
cs=0x26a9;eip=0x000464; 	X(PUSH(dx));	// 84594 push    dx ;~ 26A9:0464
cs=0x26a9;eip=0x000465; 	X(PUSH(ax));	// 84595 push    ax ;~ 26A9:0465
cs=0x26a9;eip=0x000466; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 84596 mov     ax, [bp+var_18] ;~ 26A9:0466
cs=0x26a9;eip=0x000469; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_16))));	// 84597 mov     dx, [bp+var_16] ;~ 26A9:0469
cs=0x26a9;eip=0x00046c; 	T(MOV(cl, 9));	// 84598 mov     cl, 9 ;~ 26A9:046C
cs=0x26a9;eip=0x00046e; 	R(CALLF(sub_10240,0));	// 84599 call    sub_10240 ;~ 26A9:046E
cs=0x26a9;eip=0x000473; 	X(PUSH(dx));	// 84600 push    dx ;~ 26A9:0473
cs=0x26a9;eip=0x000474; 	X(PUSH(ax));	// 84601 push    ax ;~ 26A9:0474
cs=0x26a9;eip=0x000475; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 84602 mov     ax, [bp+var_1C] ;~ 26A9:0475
cs=0x26a9;eip=0x000478; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_1a))));	// 84603 mov     dx, [bp+var_1A] ;~ 26A9:0478
cs=0x26a9;eip=0x00047b; 	T(MOV(cl, 8));	// 84604 mov     cl, 8 ;~ 26A9:047B
cs=0x26a9;eip=0x00047d; 	R(CALLF(sub_10240,0));	// 84605 call    sub_10240 ;~ 26A9:047D
cs=0x26a9;eip=0x000482; 	X(PUSH(dx));	// 84606 push    dx ;~ 26A9:0482
cs=0x26a9;eip=0x000483; 	X(PUSH(ax));	// 84607 push    ax ;~ 26A9:0483
cs=0x26a9;eip=0x000484; 	R(CALLF(sub_2d15d,0));	// 84608 call    sub_2D15D ;~ 26A9:0484
cs=0x26a9;eip=0x000489; 	T(ADD(sp, 0x1C));	// 84609 add     sp, 1Ch ;~ 26A9:0489
cs=0x26a9;eip=0x00048c; 	R(JMP(loc_35553));	// 84610 jmp     short loc_35553 ;~ 26A9:048C
loc_354fe:
	// 9820 
cs=0x26a9;eip=0x00048e; 	T(CMP(*(raddr(ss,bp+var_2c)), 0));	// 84615 cmp     [bp+var_2C], 0 ;~ 26A9:048E
cs=0x26a9;eip=0x000492; 	R(JZ(loc_35509));	// 84616 jz      short loc_35509 ;~ 26A9:0492
cs=0x26a9;eip=0x000494; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 84617 mov     ax, [bp+var_22] ;~ 26A9:0494
cs=0x26a9;eip=0x000497; 	R(JMP(loc_3550c));	// 84618 jmp     short loc_3550C ;~ 26A9:0497
loc_35509:
	// 9821 
cs=0x26a9;eip=0x000499; 	T(MOV(ax, 1));	// 84622 mov     ax, 1 ;~ 26A9:0499
loc_3550c:
	// 9822 
cs=0x26a9;eip=0x00049c; 	X(MOV(*(dw*)((&unk_5649a)), ax));	// 84625 mov     word ptr unk_5649A, ax ;~ 26A9:049C
cs=0x26a9;eip=0x00049f; 	X(MOV(*(raddr(ss,bp+var_2c)), 1));	// 84626 mov     [bp+var_2C], 1 ;~ 26A9:049F
cs=0x26a9;eip=0x0004a3; 	T(MOV(ax, 0x0E0));	// 84627 mov     ax, 0E0h ; 'à' ;~ 26A9:04A3
cs=0x26a9;eip=0x0004a6; 	X(PUSH(ax));	// 84628 push    ax ;~ 26A9:04A6
cs=0x26a9;eip=0x0004a7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 84629 push    [bp+var_1A] ;~ 26A9:04A7
cs=0x26a9;eip=0x0004aa; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 84630 push    [bp+var_1C] ;~ 26A9:04AA
cs=0x26a9;eip=0x0004ad; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 84631 push    [bp+var_16] ;~ 26A9:04AD
cs=0x26a9;eip=0x0004b0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 84632 push    [bp+var_18] ;~ 26A9:04B0
cs=0x26a9;eip=0x0004b3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 84633 push    [bp+var_12] ;~ 26A9:04B3
cs=0x26a9;eip=0x0004b6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 84634 push    [bp+var_14] ;~ 26A9:04B6
cs=0x26a9;eip=0x0004b9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 84635 push    [bp+var_2] ;~ 26A9:04B9
cs=0x26a9;eip=0x0004bc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30))));	// 84636 push    [bp+var_30] ;~ 26A9:04BC
cs=0x26a9;eip=0x0004bf; 	T(SUB(ax, ax));	// 84637 sub     ax, ax ;~ 26A9:04BF
cs=0x26a9;eip=0x0004c1; 	X(PUSH(ax));	// 84638 push    ax ;~ 26A9:04C1
cs=0x26a9;eip=0x0004c2; 	T(ax = bp+var_3a);	// 84639 lea     ax, [bp+var_3A] ;~ 26A9:04C2
cs=0x26a9;eip=0x0004c5; 	X(PUSH(ax));	// 84640 push    ax ;~ 26A9:04C5
cs=0x26a9;eip=0x0004c6; 	T(MOV(ax, 8));	// 84641 mov     ax, 8 ;~ 26A9:04C6
cs=0x26a9;eip=0x0004c9; 	X(PUSH(ax));	// 84642 push    ax ;~ 26A9:04C9
cs=0x26a9;eip=0x0004ca; 	T(MOV(ax, 0x0CC9C));	// 84643 mov     ax, 0CC9Ch ;~ 26A9:04CA
cs=0x26a9;eip=0x0004cd; 	X(PUSH(ax));	// 84644 push    ax ;~ 26A9:04CD
cs=0x26a9;eip=0x0004ce; 	T(MOV(ax, 0x0BB8));	// 84645 mov     ax, 0BB8h ;~ 26A9:04CE
cs=0x26a9;eip=0x0004d1; 	X(PUSH(ax));	// 84646 push    ax ;~ 26A9:04D1
cs=0x26a9;eip=0x0004d2; 	T(MOV(ax, 0x0EAE4));	// 84647 mov     ax, 0EAE4h ;~ 26A9:04D2
cs=0x26a9;eip=0x0004d5; 	X(PUSH(ax));	// 84648 push    ax ;~ 26A9:04D5
cs=0x26a9;eip=0x0004d6; 	T(SUB(ax, ax));	// 84649 sub     ax, ax ;~ 26A9:04D6
cs=0x26a9;eip=0x0004d8; 	X(PUSH(ax));	// 84650 push    ax ;~ 26A9:04D8
cs=0x26a9;eip=0x0004d9; 	T(MOV(al, unk_47ac4));	// 84651 mov     al, byte ptr unk_47AC4 ;~ 26A9:04D9
cs=0x26a9;eip=0x0004dc; 	T(CBW);	// 84652 cbw ;~ 26A9:04DC
cs=0x26a9;eip=0x0004dd; 	X(PUSH(ax));	// 84653 push    ax ;~ 26A9:04DD
cs=0x26a9;eip=0x0004de; 	R(CALLF(sub_240ce,0));	// 84654 call    sub_240CE ;~ 26A9:04DE
loc_35553:
	// 9823 
cs=0x26a9;eip=0x0004e3; 	T(MOV(ax, 1));	// 84657 mov     ax, 1 ;~ 26A9:04E3
cs=0x26a9;eip=0x0004e6; 	X(PUSH(ax));	// 84658 push    ax ;~ 26A9:04E6
cs=0x26a9;eip=0x0004e7; 	T(SUB(ax, ax));	// 84659 sub     ax, ax ;~ 26A9:04E7
cs=0x26a9;eip=0x0004e9; 	X(PUSH(ax));	// 84660 push    ax ;~ 26A9:04E9
cs=0x26a9;eip=0x0004ea; 	R(CALLF(sub_20275,0));	// 84661 call    sub_20275 ;~ 26A9:04EA
cs=0x26a9;eip=0x0004ef; 	R(CALLF(sub_3d480,0));	// 84662 call    sub_3D480 ;~ 26A9:04EF
cs=0x26a9;eip=0x0004f4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 84663 mov     ax, [bp+var_E] ;~ 26A9:04F4
cs=0x26a9;eip=0x0004f7; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_c))));	// 84664 mov     dx, [bp+var_C] ;~ 26A9:04F7
cs=0x26a9;eip=0x0004fa; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 84665 cmp     [bp+var_1C], ax ;~ 26A9:04FA
cs=0x26a9;eip=0x0004fd; 	R(JZ(loc_35572));	// 84666 jz      short loc_35572 ;~ 26A9:04FD
cs=0x26a9;eip=0x0004ff; 	R(JMP(loc_35277));	// 84667 jmp     loc_35277 ;~ 26A9:04FF
loc_35572:
	// 9824 
cs=0x26a9;eip=0x000502; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), dx));	// 84671 cmp     [bp+var_1A], dx ;~ 26A9:0502
cs=0x26a9;eip=0x000505; 	R(JZ(loc_3557a));	// 84672 jz      short loc_3557A ;~ 26A9:0505
cs=0x26a9;eip=0x000507; 	R(JMP(loc_35277));	// 84673 jmp     loc_35277 ;~ 26A9:0507
loc_3557a:
	// 9825 
cs=0x26a9;eip=0x00050a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 84677 mov     ax, [bp+var_A] ;~ 26A9:050A
cs=0x26a9;eip=0x00050d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 84678 mov     dx, [bp+var_8] ;~ 26A9:050D
cs=0x26a9;eip=0x000510; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), ax));	// 84679 cmp     [bp+var_18], ax ;~ 26A9:0510
cs=0x26a9;eip=0x000513; 	R(JZ(loc_35588));	// 84680 jz      short loc_35588 ;~ 26A9:0513
cs=0x26a9;eip=0x000515; 	R(JMP(loc_35277));	// 84681 jmp     loc_35277 ;~ 26A9:0515
loc_35588:
	// 9826 
cs=0x26a9;eip=0x000518; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), dx));	// 84685 cmp     [bp+var_16], dx ;~ 26A9:0518
cs=0x26a9;eip=0x00051b; 	R(JZ(loc_35590));	// 84686 jz      short loc_35590 ;~ 26A9:051B
cs=0x26a9;eip=0x00051d; 	R(JMP(loc_35277));	// 84687 jmp     loc_35277 ;~ 26A9:051D
loc_35590:
	// 9827 
cs=0x26a9;eip=0x000520; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 84691 mov     ax, [bp+var_6] ;~ 26A9:0520
cs=0x26a9;eip=0x000523; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 84692 mov     dx, [bp+var_4] ;~ 26A9:0523
cs=0x26a9;eip=0x000526; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), ax));	// 84693 cmp     [bp+var_14], ax ;~ 26A9:0526
cs=0x26a9;eip=0x000529; 	R(JZ(loc_3559e));	// 84694 jz      short loc_3559E ;~ 26A9:0529
cs=0x26a9;eip=0x00052b; 	R(JMP(loc_35277));	// 84695 jmp     loc_35277 ;~ 26A9:052B
loc_3559e:
	// 9828 
cs=0x26a9;eip=0x00052e; 	T(CMP(*(dw*)(raddr(ss,bp+var_12)), dx));	// 84699 cmp     [bp+var_12], dx ;~ 26A9:052E
cs=0x26a9;eip=0x000531; 	R(JZ(loc_355a6));	// 84700 jz      short loc_355A6 ;~ 26A9:0531
cs=0x26a9;eip=0x000533; 	R(JMP(loc_35277));	// 84701 jmp     loc_35277 ;~ 26A9:0533
loc_355a6:
	// 9829 
cs=0x26a9;eip=0x000536; 	R(CALLF(sub_20565,0));	// 84706 call    sub_20565 ;~ 26A9:0536
cs=0x26a9;eip=0x00053b; 	T(MOV(ax, 0x0E0));	// 84707 mov     ax, 0E0h ; 'à' ;~ 26A9:053B
cs=0x26a9;eip=0x00053e; 	X(PUSH(ax));	// 84708 push    ax ;~ 26A9:053E
cs=0x26a9;eip=0x00053f; 	R(CALLF(sub_25ad0,0));	// 84709 call    sub_25AD0 ;~ 26A9:053F
cs=0x26a9;eip=0x000544; 	T(MOV(ax, 0x2664));	// 84710 mov     ax, 2664h ;~ 26A9:0544
cs=0x26a9;eip=0x000547; 	X(PUSH(ax));	// 84711 push    ax ;~ 26A9:0547
cs=0x26a9;eip=0x000548; 	R(CALLF(sub_25ad0,0));	// 84712 call    sub_25AD0 ;~ 26A9:0548
cs=0x26a9;eip=0x00054d; 	R(CALLF(sub_3102a,0));	// 84713 call    sub_3102A ;~ 26A9:054D
cs=0x26a9;eip=0x000552; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 84714 mov     ax, [bp+var_22] ;~ 26A9:0552
cs=0x26a9;eip=0x000555; 	X(MOV(*(dw*)((&unk_5649a)), ax));	// 84715 mov     word ptr unk_5649A, ax ;~ 26A9:0555
cs=0x26a9;eip=0x000558; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_52))));	// 84716 mov     ax, [bp+var_52] ;~ 26A9:0558
cs=0x26a9;eip=0x00055b; 	X(MOV(*(dw*)((&unk_57068)), ax));	// 84717 mov     word ptr unk_57068, ax ;~ 26A9:055B
cs=0x26a9;eip=0x00055e; 	T(MOV(al, *(raddr(ss,bp+var_2a))));	// 84718 mov     al, [bp+var_2A] ;~ 26A9:055E
cs=0x26a9;eip=0x000561; 	X(MOV(unk_564ec, al));	// 84719 mov     byte ptr unk_564EC, al ;~ 26A9:0561
cs=0x26a9;eip=0x000564; 	T(MOV(al, *(raddr(ss,bp+var_56))));	// 84720 mov     al, [bp+var_56] ;~ 26A9:0564
cs=0x26a9;eip=0x000567; 	X(MOV(unk_570ba, al));	// 84721 mov     byte ptr unk_570BA, al ;~ 26A9:0567
cs=0x26a9;eip=0x00056a; 	T(MOV(ax, 0x0EAE4));	// 84722 mov     ax, 0EAE4h ;~ 26A9:056A
cs=0x26a9;eip=0x00056d; 	X(PUSH(ax));	// 84723 push    ax ;~ 26A9:056D
cs=0x26a9;eip=0x00056e; 	R(CALLF(sub_259bd,0));	// 84724 call    sub_259BD ;~ 26A9:056E
cs=0x26a9;eip=0x000573; 	T(MOV(ax, 0x0F6B2));	// 84725 mov     ax, 0F6B2h ;~ 26A9:0573
cs=0x26a9;eip=0x000576; 	X(PUSH(ax));	// 84726 push    ax ;~ 26A9:0576
cs=0x26a9;eip=0x000577; 	R(CALLF(sub_259bd,0));	// 84727 call    sub_259BD ;~ 26A9:0577
cs=0x26a9;eip=0x00057c; 	X(MOV(*(dw*)((&unk_49ff8)), 0x0FFFF));	// 84728 mov     word ptr unk_49FF8, 0FFFFh ;~ 26A9:057C
cs=0x26a9;eip=0x000582; 	X(POP(si));	// 84729 pop     si ;~ 26A9:0582
cs=0x26a9;eip=0x000583; 	X(POP(di));	// 84730 pop     di ;~ 26A9:0583
cs=0x26a9;eip=0x000584; 	T(MOV(sp, bp));	// 84731 mov     sp, bp ;~ 26A9:0584
cs=0x26a9;eip=0x000586; 	X(POP(bp));	// 84732 pop     bp ;~ 26A9:0586
cs=0x26a9;eip=0x000587; 	R(RETF(0));	// 84733 retf ;~ 26A9:0587
sub_355f8:
	// 84741 
#undef var_8
#define var_8 -8
	// 84744 var_8           = word ptr -8 ;~ 26A9:0588
#undef var_6
#define var_6 -6
	// 84745 var_6           = word ptr -6 ;~ 26A9:0588
#undef var_4
#define var_4 -4
	// 84746 var_4           = byte ptr -4 ;~ 26A9:0588
#undef var_2
#define var_2 -2
	// 84747 var_2           = word ptr -2 ;~ 26A9:0588
#undef arg_0
#define arg_0 4
	// 84748 arg_0           = word ptr  4 ;~ 26A9:0588
#undef arg_2
#define arg_2 6
	// 84749 arg_2           = word ptr  6 ;~ 26A9:0588
cs=0x26a9;eip=0x000588; 	X(PUSH(bp));	// 84751 push    bp ;~ 26A9:0588
cs=0x26a9;eip=0x000589; 	T(MOV(bp, sp));	// 84752 mov     bp, sp ;~ 26A9:0589
cs=0x26a9;eip=0x00058b; 	T(SUB(sp, 8));	// 84753 sub     sp, 8 ;~ 26A9:058B
cs=0x26a9;eip=0x00058e; 	X(PUSH(si));	// 84754 push    si ;~ 26A9:058E
cs=0x26a9;eip=0x00058f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 84755 mov     bx, [bp+arg_2] ;~ 26A9:058F
cs=0x26a9;eip=0x000592; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 84756 mov     si, [bp+arg_0] ;~ 26A9:0592
cs=0x26a9;eip=0x000595; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 84757 mov     ax, [si] ;~ 26A9:0595
cs=0x26a9;eip=0x000597; 	T(MOV(dx, *(dw*)(raddr(ds,si+2))));	// 84758 mov     dx, [si+2] ;~ 26A9:0597
cs=0x26a9;eip=0x00059a; 	T(CMP(*(dw*)(raddr(ds,bx+2)), dx));	// 84759 cmp     [bx+2], dx ;~ 26A9:059A
cs=0x26a9;eip=0x00059d; 	R(JL(loc_35619));	// 84760 jl      short loc_35619 ;~ 26A9:059D
cs=0x26a9;eip=0x00059f; 	R(JG(loc_35615));	// 84761 jg      short loc_35615 ;~ 26A9:059F
cs=0x26a9;eip=0x0005a1; 	T(CMP(*(dw*)(raddr(ds,bx)), ax));	// 84762 cmp     [bx], ax ;~ 26A9:05A1
cs=0x26a9;eip=0x0005a3; 	R(JC(loc_35619));	// 84763 jb      short loc_35619 ;~ 26A9:05A3
loc_35615:
	// 9830 
cs=0x26a9;eip=0x0005a5; 	T(MOV(al, 1));	// 84766 mov     al, 1 ;~ 26A9:05A5
cs=0x26a9;eip=0x0005a7; 	R(JMP(loc_3561b));	// 84767 jmp     short loc_3561B ;~ 26A9:05A7
loc_35619:
	// 9831 
cs=0x26a9;eip=0x0005a9; 	T(SUB(al, al));	// 84772 sub     al, al ;~ 26A9:05A9
loc_3561b:
	// 9832 
cs=0x26a9;eip=0x0005ab; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 84775 mov     [bp+var_4], al ;~ 26A9:05AB
cs=0x26a9;eip=0x0005ae; 	T(CMP(*(dw*)((&unk_57058)), 7));	// 84776 cmp     word ptr unk_57058, 7 ;~ 26A9:05AE
cs=0x26a9;eip=0x0005b3; 	R(JC(loc_3562c));	// 84777 jb      short loc_3562C ;~ 26A9:05B3
cs=0x26a9;eip=0x0005b5; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x5DC0));	// 84778 mov     [bp+var_2], 5DC0h ;~ 26A9:05B5
cs=0x26a9;eip=0x0005ba; 	R(JMP(loc_35685));	// 84779 jmp     short loc_35685 ;~ 26A9:05BA
loc_3562c:
	// 9833 
cs=0x26a9;eip=0x0005bc; 	T(CMP(*(dw*)((&unk_57058)), 6));	// 84783 cmp     word ptr unk_57058, 6 ;~ 26A9:05BC
cs=0x26a9;eip=0x0005c1; 	R(JC(loc_3563a));	// 84784 jb      short loc_3563A ;~ 26A9:05C1
cs=0x26a9;eip=0x0005c3; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x2EE0));	// 84785 mov     [bp+var_2], 2EE0h ;~ 26A9:05C3
cs=0x26a9;eip=0x0005c8; 	R(JMP(loc_35685));	// 84786 jmp     short loc_35685 ;~ 26A9:05C8
loc_3563a:
	// 9834 
cs=0x26a9;eip=0x0005ca; 	T(CMP(*(dw*)((&unk_57058)), 5));	// 84790 cmp     word ptr unk_57058, 5 ;~ 26A9:05CA
cs=0x26a9;eip=0x0005cf; 	R(JC(loc_35648));	// 84791 jb      short loc_35648 ;~ 26A9:05CF
cs=0x26a9;eip=0x0005d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x1770));	// 84792 mov     [bp+var_2], 1770h ;~ 26A9:05D1
cs=0x26a9;eip=0x0005d6; 	R(JMP(loc_35685));	// 84793 jmp     short loc_35685 ;~ 26A9:05D6
loc_35648:
	// 9835 
cs=0x26a9;eip=0x0005d8; 	T(CMP(*(dw*)((&unk_57058)), 4));	// 84797 cmp     word ptr unk_57058, 4 ;~ 26A9:05D8
cs=0x26a9;eip=0x0005dd; 	R(JC(loc_35656));	// 84798 jb      short loc_35656 ;~ 26A9:05DD
cs=0x26a9;eip=0x0005df; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0BB8));	// 84799 mov     [bp+var_2], 0BB8h ;~ 26A9:05DF
cs=0x26a9;eip=0x0005e4; 	R(JMP(loc_35685));	// 84800 jmp     short loc_35685 ;~ 26A9:05E4
loc_35656:
	// 9836 
cs=0x26a9;eip=0x0005e6; 	T(CMP(*(dw*)((&unk_57058)), 3));	// 84804 cmp     word ptr unk_57058, 3 ;~ 26A9:05E6
cs=0x26a9;eip=0x0005eb; 	R(JC(loc_35664));	// 84805 jb      short loc_35664 ;~ 26A9:05EB
cs=0x26a9;eip=0x0005ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x5DC));	// 84806 mov     [bp+var_2], 5DCh ;~ 26A9:05ED
cs=0x26a9;eip=0x0005f2; 	R(JMP(loc_35685));	// 84807 jmp     short loc_35685 ;~ 26A9:05F2
loc_35664:
	// 9837 
cs=0x26a9;eip=0x0005f4; 	T(CMP(*(dw*)((&unk_57058)), 2));	// 84811 cmp     word ptr unk_57058, 2 ;~ 26A9:05F4
cs=0x26a9;eip=0x0005f9; 	R(JC(loc_35672));	// 84812 jb      short loc_35672 ;~ 26A9:05F9
cs=0x26a9;eip=0x0005fb; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x258));	// 84813 mov     [bp+var_2], 258h ;~ 26A9:05FB
cs=0x26a9;eip=0x000600; 	R(JMP(loc_35685));	// 84814 jmp     short loc_35685 ;~ 26A9:0600
loc_35672:
	// 9838 
cs=0x26a9;eip=0x000602; 	T(CMP(*(dw*)((&unk_57058)), 1));	// 84818 cmp     word ptr unk_57058, 1 ;~ 26A9:0602
cs=0x26a9;eip=0x000607; 	R(JC(loc_35680));	// 84819 jb      short loc_35680 ;~ 26A9:0607
cs=0x26a9;eip=0x000609; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x12C));	// 84820 mov     [bp+var_2], 12Ch ;~ 26A9:0609
cs=0x26a9;eip=0x00060e; 	R(JMP(loc_35685));	// 84821 jmp     short loc_35685 ;~ 26A9:060E
loc_35680:
	// 9839 
cs=0x26a9;eip=0x000610; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x96));	// 84825 mov     [bp+var_2], 96h ; '–' ;~ 26A9:0610
loc_35685:
	// 9840 
cs=0x26a9;eip=0x000615; 	T(MOV(ax, *(dw*)((&unk_57056))));	// 84829 mov     ax, word ptr unk_57056 ;~ 26A9:0615
cs=0x26a9;eip=0x000618; 	T(CWD);	// 84830 cwd ;~ 26A9:0618
cs=0x26a9;eip=0x000619; 	X(PUSH(dx));	// 84831 push    dx ;~ 26A9:0619
cs=0x26a9;eip=0x00061a; 	X(PUSH(ax));	// 84832 push    ax ;~ 26A9:061A
cs=0x26a9;eip=0x00061b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 84833 mov     ax, [bp+var_2] ;~ 26A9:061B
cs=0x26a9;eip=0x00061e; 	T(CWD);	// 84834 cwd ;~ 26A9:061E
cs=0x26a9;eip=0x00061f; 	T(MOV(dh, dl));	// 84835 mov     dh, dl ;~ 26A9:061F
cs=0x26a9;eip=0x000621; 	T(MOV(dl, ah));	// 84836 mov     dl, ah ;~ 26A9:0621
cs=0x26a9;eip=0x000623; 	T(MOV(ah, al));	// 84837 mov     ah, al ;~ 26A9:0623
cs=0x26a9;eip=0x000625; 	T(SUB(al, al));	// 84838 sub     al, al ;~ 26A9:0625
cs=0x26a9;eip=0x000627; 	X(PUSH(dx));	// 84839 push    dx ;~ 26A9:0627
cs=0x26a9;eip=0x000628; 	X(PUSH(ax));	// 84840 push    ax ;~ 26A9:0628
cs=0x26a9;eip=0x000629; 	R(CALLF(sub_105c2,0));	// 84841 call    sub_105C2 ;~ 26A9:0629
cs=0x26a9;eip=0x00062e; 	T(MOV(cl, 8));	// 84842 mov     cl, 8 ;~ 26A9:062E
cs=0x26a9;eip=0x000630; 	R(CALLF(sub_10240,0));	// 84843 call    sub_10240 ;~ 26A9:0630
cs=0x26a9;eip=0x000635; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 84844 mov     [bp+var_8], ax ;~ 26A9:0635
cs=0x26a9;eip=0x000638; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 84845 mov     [bp+var_6], dx ;~ 26A9:0638
cs=0x26a9;eip=0x00063b; 	T(CMP(*(raddr(ss,bp+var_4)), 0));	// 84846 cmp     [bp+var_4], 0 ;~ 26A9:063B
cs=0x26a9;eip=0x00063f; 	R(JZ(loc_356be));	// 84847 jz      short loc_356BE ;~ 26A9:063F
cs=0x26a9;eip=0x000641; 	T(NEG(ax));	// 84848 neg     ax ;~ 26A9:0641
cs=0x26a9;eip=0x000643; 	T(ADC(dx, 0));	// 84849 adc     dx, 0 ;~ 26A9:0643
cs=0x26a9;eip=0x000646; 	T(NEG(dx));	// 84850 neg     dx ;~ 26A9:0646
cs=0x26a9;eip=0x000648; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 84851 mov     [bp+var_8], ax ;~ 26A9:0648
cs=0x26a9;eip=0x00064b; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 84852 mov     [bp+var_6], dx ;~ 26A9:064B
loc_356be:
	// 9841 
cs=0x26a9;eip=0x00064e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 84855 mov     bx, [bp+arg_2] ;~ 26A9:064E
cs=0x26a9;eip=0x000651; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 84856 mov     ax, [bp+var_8] ;~ 26A9:0651
cs=0x26a9;eip=0x000654; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 84857 mov     dx, [bp+var_6] ;~ 26A9:0654
cs=0x26a9;eip=0x000657; 	X(ADD(*(dw*)(raddr(ds,bx)), ax));	// 84858 add     [bx], ax ;~ 26A9:0657
cs=0x26a9;eip=0x000659; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 84859 adc     [bx+2], dx ;~ 26A9:0659
cs=0x26a9;eip=0x00065c; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 84860 mov     si, [bp+arg_0] ;~ 26A9:065C
cs=0x26a9;eip=0x00065f; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 84861 mov     ax, [si] ;~ 26A9:065F
cs=0x26a9;eip=0x000661; 	T(MOV(dx, *(dw*)(raddr(ds,si+2))));	// 84862 mov     dx, [si+2] ;~ 26A9:0661
cs=0x26a9;eip=0x000664; 	T(CMP(*(dw*)(raddr(ds,bx+2)), dx));	// 84863 cmp     [bx+2], dx ;~ 26A9:0664
cs=0x26a9;eip=0x000667; 	R(JL(loc_356e4));	// 84864 jl      short loc_356E4 ;~ 26A9:0667
cs=0x26a9;eip=0x000669; 	R(JG(loc_356df));	// 84865 jg      short loc_356DF ;~ 26A9:0669
cs=0x26a9;eip=0x00066b; 	T(CMP(*(dw*)(raddr(ds,bx)), ax));	// 84866 cmp     [bx], ax ;~ 26A9:066B
cs=0x26a9;eip=0x00066d; 	R(JC(loc_356e4));	// 84867 jb      short loc_356E4 ;~ 26A9:066D
loc_356df:
	// 9842 
cs=0x26a9;eip=0x00066f; 	T(MOV(ax, 1));	// 84870 mov     ax, 1 ;~ 26A9:066F
cs=0x26a9;eip=0x000672; 	R(JMP(loc_356e6));	// 84871 jmp     short loc_356E6 ;~ 26A9:0672
loc_356e4:
	// 9843 
cs=0x26a9;eip=0x000674; 	T(SUB(ax, ax));	// 84876 sub     ax, ax ;~ 26A9:0674
loc_356e6:
	// 9844 
cs=0x26a9;eip=0x000676; 	T(MOV(cx, ax));	// 84879 mov     cx, ax ;~ 26A9:0676
cs=0x26a9;eip=0x000678; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 84880 mov     al, [bp+var_4] ;~ 26A9:0678
cs=0x26a9;eip=0x00067b; 	T(CBW);	// 84881 cbw ;~ 26A9:067B
cs=0x26a9;eip=0x00067c; 	T(CMP(cx, ax));	// 84882 cmp     cx, ax ;~ 26A9:067C
cs=0x26a9;eip=0x00067e; 	R(JZ(loc_35700));	// 84883 jz      short loc_35700 ;~ 26A9:067E
cs=0x26a9;eip=0x000680; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 84884 mov     bx, [bp+arg_2] ;~ 26A9:0680
cs=0x26a9;eip=0x000683; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 84885 mov     si, [bp+arg_0] ;~ 26A9:0683
cs=0x26a9;eip=0x000686; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 84886 mov     ax, [si] ;~ 26A9:0686
cs=0x26a9;eip=0x000688; 	T(MOV(dx, *(dw*)(raddr(ds,si+2))));	// 84887 mov     dx, [si+2] ;~ 26A9:0688
cs=0x26a9;eip=0x00068b; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 84888 mov     [bx], ax ;~ 26A9:068B
cs=0x26a9;eip=0x00068d; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 84889 mov     [bx+2], dx ;~ 26A9:068D
loc_35700:
	// 9845 
cs=0x26a9;eip=0x000690; 	X(POP(si));	// 84892 pop     si ;~ 26A9:0690
cs=0x26a9;eip=0x000691; 	T(MOV(sp, bp));	// 84893 mov     sp, bp ;~ 26A9:0691
cs=0x26a9;eip=0x000693; 	X(POP(bp));	// 84894 pop     bp ;~ 26A9:0693
cs=0x26a9;eip=0x000694; 	R(RETN(4));	// 84895 retn    4 ;~ 26A9:0694
sub_35707:
	// 84903 
#undef var_58
#define var_58 -0x58
	// 84905 var_58          = byte ptr -58h ;~ 26A9:0697
#undef var_56
#define var_56 -0x56
	// 84906 var_56          = byte ptr -56h ;~ 26A9:0697
#undef var_54
#define var_54 -0x54
	// 84907 var_54          = byte ptr -54h ;~ 26A9:0697
#undef var_52
#define var_52 -0x52
	// 84908 var_52          = word ptr -52h ;~ 26A9:0697
#undef var_50
#define var_50 -0x50
	// 84909 var_50          = byte ptr -50h ;~ 26A9:0697
#undef var_46
#define var_46 -0x46
	// 84910 var_46          = word ptr -46h ;~ 26A9:0697
#undef var_44
#define var_44 -0x44
	// 84911 var_44          = byte ptr -44h ;~ 26A9:0697
#undef var_42
#define var_42 -0x42
	// 84912 var_42          = word ptr -42h ;~ 26A9:0697
#undef var_40
#define var_40 -0x40
	// 84913 var_40          = byte ptr -40h ;~ 26A9:0697
#undef var_36
#define var_36 -0x36
	// 84914 var_36          = word ptr -36h ;~ 26A9:0697
#undef var_34
#define var_34 -0x34
	// 84915 var_34          = byte ptr -34h ;~ 26A9:0697
#undef var_33
#define var_33 -0x33
	// 84916 var_33          = byte ptr -33h ;~ 26A9:0697
#undef var_30
#define var_30 -0x30
	// 84917 var_30          = byte ptr -30h ;~ 26A9:0697
#undef var_2e
#define var_2e -0x2E
	// 84918 var_2E          = byte ptr -2Eh ;~ 26A9:0697
#undef var_2c
#define var_2c -0x2C
	// 84919 var_2C          = byte ptr -2Ch ;~ 26A9:0697
#undef var_2a
#define var_2a -0x2A
	// 84920 var_2A          = word ptr -2Ah ;~ 26A9:0697
#undef var_28
#define var_28 -0x28
	// 84921 var_28          = word ptr -28h ;~ 26A9:0697
#undef var_24
#define var_24 -0x24
	// 84922 var_24          = word ptr -24h ;~ 26A9:0697
#undef var_22
#define var_22 -0x22
	// 84923 var_22          = word ptr -22h ;~ 26A9:0697
#undef var_20
#define var_20 -0x20
	// 84924 var_20          = word ptr -20h ;~ 26A9:0697
#undef var_1e
#define var_1e -0x1E
	// 84925 var_1E          = word ptr -1Eh ;~ 26A9:0697
#undef var_1c
#define var_1c -0x1C
	// 84926 var_1C          = word ptr -1Ch ;~ 26A9:0697
#undef var_1a
#define var_1a -0x1A
	// 84927 var_1A          = word ptr -1Ah ;~ 26A9:0697
#undef var_18
#define var_18 -0x18
	// 84928 var_18          = word ptr -18h ;~ 26A9:0697
#undef var_16
#define var_16 -0x16
	// 84929 var_16          = word ptr -16h ;~ 26A9:0697
#undef var_14
#define var_14 -0x14
	// 84930 var_14          = word ptr -14h ;~ 26A9:0697
#undef var_12
#define var_12 -0x12
	// 84931 var_12          = byte ptr -12h ;~ 26A9:0697
#undef var_10
#define var_10 -0x10
	// 84932 var_10          = byte ptr -10h ;~ 26A9:0697
#undef var_e
#define var_e -0x0E
	// 84933 var_E           = word ptr -0Eh ;~ 26A9:0697
#undef var_c
#define var_c -0x0C
	// 84934 var_C           = word ptr -0Ch ;~ 26A9:0697
#undef var_a
#define var_a -0x0A
	// 84935 var_A           = word ptr -0Ah ;~ 26A9:0697
#undef var_8
#define var_8 -8
	// 84936 var_8           = word ptr -8 ;~ 26A9:0697
#undef var_6
#define var_6 -6
	// 84937 var_6           = word ptr -6 ;~ 26A9:0697
#undef var_4
#define var_4 -4
	// 84938 var_4           = word ptr -4 ;~ 26A9:0697
#undef var_2
#define var_2 -2
	// 84939 var_2           = word ptr -2 ;~ 26A9:0697
#undef arg_0
#define arg_0 6
	// 84940 arg_0           = byte ptr  6 ;~ 26A9:0697
#undef arg_4
#define arg_4 0x0A
	// 84941 arg_4           = word ptr  0Ah ;~ 26A9:0697
#undef arg_6
#define arg_6 0x0C
	// 84942 arg_6           = word ptr  0Ch ;~ 26A9:0697
#undef arg_8
#define arg_8 0x0E
	// 84943 arg_8           = byte ptr  0Eh ;~ 26A9:0697
#undef arg_c
#define arg_c 0x12
	// 84944 arg_C           = word ptr  12h ;~ 26A9:0697
cs=0x26a9;eip=0x000697; 	X(PUSH(bp));	// 84946 push    bp ;~ 26A9:0697
cs=0x26a9;eip=0x000698; 	T(MOV(bp, sp));	// 84947 mov     bp, sp ;~ 26A9:0698
cs=0x26a9;eip=0x00069a; 	T(SUB(sp, 0x58));	// 84948 sub     sp, 58h ;~ 26A9:069A
cs=0x26a9;eip=0x00069d; 	X(PUSH(di));	// 84949 push    di ;~ 26A9:069D
cs=0x26a9;eip=0x00069e; 	X(PUSH(si));	// 84950 push    si ;~ 26A9:069E
cs=0x26a9;eip=0x00069f; 	T(CMP(unk_47ac2, 0));	// 84951 cmp     byte ptr unk_47AC2, 0 ;~ 26A9:069F
cs=0x26a9;eip=0x0006a4; 	R(JNZ(loc_35719));	// 84952 jnz     short loc_35719 ;~ 26A9:06A4
cs=0x26a9;eip=0x0006a6; 	R(JMP(loc_35ba8));	// 84953 jmp     loc_35BA8 ;~ 26A9:06A6
loc_35719:
	// 9846 
cs=0x26a9;eip=0x0006a9; 	T(MOV(ax, 0x0EAE4));	// 84957 mov     ax, 0EAE4h ;~ 26A9:06A9
cs=0x26a9;eip=0x0006ac; 	X(PUSH(ax));	// 84958 push    ax ;~ 26A9:06AC
cs=0x26a9;eip=0x0006ad; 	R(CALLF(sub_259bd,0));	// 84959 call    sub_259BD ;~ 26A9:06AD
cs=0x26a9;eip=0x0006b2; 	T(MOV(ax, 0x0F6B2));	// 84960 mov     ax, 0F6B2h ;~ 26A9:06B2
cs=0x26a9;eip=0x0006b5; 	X(PUSH(ax));	// 84961 push    ax ;~ 26A9:06B5
cs=0x26a9;eip=0x0006b6; 	R(CALLF(sub_259bd,0));	// 84962 call    sub_259BD ;~ 26A9:06B6
cs=0x26a9;eip=0x0006bb; 	T(CMP(*(dw*)((&byte_47b2e)), 4));	// 84963 cmp     word ptr byte_47B2E, 4 ;~ 26A9:06BB
cs=0x26a9;eip=0x0006c0; 	R(JZ(loc_35739));	// 84964 jz      short loc_35739 ;~ 26A9:06C0
cs=0x26a9;eip=0x0006c2; 	T(CMP(*(dw*)((&byte_47b2e)), 5));	// 84965 cmp     word ptr byte_47B2E, 5 ;~ 26A9:06C2
cs=0x26a9;eip=0x0006c7; 	R(JNZ(loc_3573d));	// 84966 jnz     short loc_3573D ;~ 26A9:06C7
loc_35739:
	// 9847 
cs=0x26a9;eip=0x0006c9; 	T(MOV(al, 1));	// 84969 mov     al, 1 ;~ 26A9:06C9
cs=0x26a9;eip=0x0006cb; 	R(JMP(loc_3573f));	// 84970 jmp     short loc_3573F ;~ 26A9:06CB
loc_3573d:
	// 9848 
cs=0x26a9;eip=0x0006cd; 	T(SUB(al, al));	// 84974 sub     al, al ;~ 26A9:06CD
loc_3573f:
	// 9849 
cs=0x26a9;eip=0x0006cf; 	X(MOV(*(raddr(ss,bp+var_54)), al));	// 84977 mov     [bp+var_54], al ;~ 26A9:06CF
cs=0x26a9;eip=0x0006d2; 	T(OR(al, al));	// 84978 or      al, al ;~ 26A9:06D2
cs=0x26a9;eip=0x0006d4; 	R(JZ(loc_3574c));	// 84979 jz      short loc_3574C ;~ 26A9:06D4
cs=0x26a9;eip=0x0006d6; 	X(MOV(*(raddr(ss,bp+var_10)), 0));	// 84980 mov     [bp+var_10], 0 ;~ 26A9:06D6
cs=0x26a9;eip=0x0006da; 	R(JMP(loc_35788));	// 84981 jmp     short loc_35788 ;~ 26A9:06DA
loc_3574c:
	// 9850 
cs=0x26a9;eip=0x0006dc; 	T(MOV(cx, 0x0A));	// 84985 mov     cx, 0Ah ;~ 26A9:06DC
cs=0x26a9;eip=0x0006df; 	T(di = bp+var_50);	// 84986 lea     di, [bp+var_50] ;~ 26A9:06DF
cs=0x26a9;eip=0x0006e2; 	T(MOV(ax, ss));	// 84987 mov     ax, ss ;~ 26A9:06E2
cs=0x26a9;eip=0x0006e4; 	T(MOV(es, ax));	// 84988 mov     es, ax ;~ 26A9:06E4
cs=0x26a9;eip=0x0006e6; 	T(SUB(ax, ax));	// 84989 sub     ax, ax ;~ 26A9:06E6
	// 84990 repne stosb ;~ 26A9:06E8
cs=0x26a9;eip=0x0006e8; 	R(REPNE STOSB);	// 84990 repne stosb ;~ 26A9:06E8
cs=0x26a9;eip=0x0006ea; 	T(ax = bp+var_50);	// 84991 lea     ax, [bp+var_50] ;~ 26A9:06EA
cs=0x26a9;eip=0x0006ed; 	X(PUSH(ax));	// 84992 push    ax ;~ 26A9:06ED
cs=0x26a9;eip=0x0006ee; 	X(PUSH(*(dw*)((&unk_47b34))));	// 84993 push    word ptr unk_47B34 ;~ 26A9:06EE
cs=0x26a9;eip=0x0006f2; 	X(PUSH(*(dw*)((&unk_47b36))));	// 84994 push    word ptr unk_47B36 ;~ 26A9:06F2
cs=0x26a9;eip=0x0006f6; 	R(CALLF(sub_31695,0));	// 84995 call    sub_31695 ;~ 26A9:06F6
cs=0x26a9;eip=0x0006fb; 	T(MOV(ax, 0x0ED08));	// 84996 mov     ax, 0ED08h ;~ 26A9:06FB
cs=0x26a9;eip=0x0006fe; 	X(PUSH(ax));	// 84997 push    ax ;~ 26A9:06FE
cs=0x26a9;eip=0x0006ff; 	T(SUB(ax, ax));	// 84998 sub     ax, ax ;~ 26A9:06FF
cs=0x26a9;eip=0x000701; 	X(PUSH(ax));	// 84999 push    ax ;~ 26A9:0701
cs=0x26a9;eip=0x000702; 	X(PUSH(ax));	// 85000 push    ax ;~ 26A9:0702
cs=0x26a9;eip=0x000703; 	T(ax = bp+var_50);	// 85001 lea     ax, [bp+var_50] ;~ 26A9:0703
cs=0x26a9;eip=0x000706; 	X(PUSH(ax));	// 85002 push    ax ;~ 26A9:0706
cs=0x26a9;eip=0x000707; 	T(SUB(ax, ax));	// 85003 sub     ax, ax ;~ 26A9:0707
cs=0x26a9;eip=0x000709; 	X(PUSH(ax));	// 85004 push    ax ;~ 26A9:0709
cs=0x26a9;eip=0x00070a; 	X(PUSH(ax));	// 85005 push    ax ;~ 26A9:070A
cs=0x26a9;eip=0x00070b; 	X(PUSH(*(dw*)((&unk_47b34))));	// 85006 push    word ptr unk_47B34 ;~ 26A9:070B
cs=0x26a9;eip=0x00070f; 	X(PUSH(*(dw*)((&unk_47b36))));	// 85007 push    word ptr unk_47B36 ;~ 26A9:070F
cs=0x26a9;eip=0x000713; 	R(CALLF(sub_2c4d3,0));	// 85008 call    sub_2C4D3 ;~ 26A9:0713
loc_35788:
	// 9851 
cs=0x26a9;eip=0x000718; 	T(di = bp+var_40);	// 85011 lea     di, [bp+var_40] ;~ 26A9:0718
cs=0x26a9;eip=0x00071b; 	T(MOV(si, 0x180));	// 85012 mov     si, 180h ;~ 26A9:071B
cs=0x26a9;eip=0x00071e; 	X(PUSH(ss));	// 85013 push    ss ;~ 26A9:071E
cs=0x26a9;eip=0x00071f; 	X(POP(es));	// 85014 pop     es ;~ 26A9:071F
cs=0x26a9;eip=0x000720; 	X(MOVSW);	// 85015 movsw ;~ 26A9:0720
cs=0x26a9;eip=0x000721; 	X(MOVSW);	// 85016 movsw ;~ 26A9:0721
cs=0x26a9;eip=0x000722; 	X(MOVSW);	// 85017 movsw ;~ 26A9:0722
cs=0x26a9;eip=0x000723; 	X(MOVSW);	// 85018 movsw ;~ 26A9:0723
cs=0x26a9;eip=0x000724; 	T(MOV(ax, *(dw*)((&unk_47ad0))));	// 85019 mov     ax, word ptr unk_47AD0 ;~ 26A9:0724
cs=0x26a9;eip=0x000727; 	T(MOV(dx, *(dw*)((&unk_47ad2))));	// 85020 mov     dx, word ptr unk_47AD2 ;~ 26A9:0727
cs=0x26a9;eip=0x00072b; 	T(ADD(ax, 6));	// 85021 add     ax, 6 ;~ 26A9:072B
cs=0x26a9;eip=0x00072e; 	T(di = bp+var_e);	// 85022 lea     di, [bp+var_E] ;~ 26A9:072E
cs=0x26a9;eip=0x000731; 	T(MOV(si, ax));	// 85023 mov     si, ax ;~ 26A9:0731
cs=0x26a9;eip=0x000733; 	X(PUSH(ds));	// 85024 push    ds ;~ 26A9:0733
cs=0x26a9;eip=0x000734; 	T(MOV(ds, dx));	// 85025 mov     ds, dx ;~ 26A9:0734
cs=0x26a9;eip=0x000736; 	T(MOV(cx, 6));	// 85026 mov     cx, 6 ;~ 26A9:0736
	// 85027 repne movsw ;~ 26A9:0739
cs=0x26a9;eip=0x000739; 	X(	REPNE MOVSW);	// 85027 repne movsw ;~ 26A9:0739
cs=0x26a9;eip=0x00073b; 	X(POP(ds));	// 85028 pop     ds ;~ 26A9:073B
cs=0x26a9;eip=0x00073c; 	T(ax = bp+var_e);	// 85029 lea     ax, [bp+var_E] ;~ 26A9:073C
cs=0x26a9;eip=0x00073f; 	X(PUSH(ss));	// 85030 push    ss ;~ 26A9:073F
cs=0x26a9;eip=0x000740; 	X(PUSH(ax));	// 85031 push    ax ;~ 26A9:0740
cs=0x26a9;eip=0x000741; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 85032 les     bx, dword ptr unk_47AD0 ;~ 26A9:0741
cs=0x26a9;eip=0x000745; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 85033 mov     ax, es:[bx+12h] ;~ 26A9:0745
cs=0x26a9;eip=0x000749; 	T(ADD(ax, 0x5A0));	// 85034 add     ax, 5A0h ;~ 26A9:0749
cs=0x26a9;eip=0x00074c; 	X(PUSH(ax));	// 85035 push    ax ;~ 26A9:074C
cs=0x26a9;eip=0x00074d; 	T(MOV(ax, 0x78));	// 85036 mov     ax, 78h ; 'x' ;~ 26A9:074D
cs=0x26a9;eip=0x000750; 	X(PUSH(ax));	// 85037 push    ax ;~ 26A9:0750
cs=0x26a9;eip=0x000751; 	T(MOV(ax, 0x4600));	// 85038 mov     ax, 4600h ;~ 26A9:0751
cs=0x26a9;eip=0x000754; 	T(CWD);	// 85039 cwd ;~ 26A9:0754
cs=0x26a9;eip=0x000755; 	X(PUSH(dx));	// 85040 push    dx ;~ 26A9:0755
cs=0x26a9;eip=0x000756; 	X(PUSH(ax));	// 85041 push    ax ;~ 26A9:0756
cs=0x26a9;eip=0x000757; 	R(CALLF(sub_2f4ee,0));	// 85042 call    sub_2F4EE ;~ 26A9:0757
cs=0x26a9;eip=0x00075c; 	T(di = bp+var_1e);	// 85043 lea     di, [bp+var_1E] ;~ 26A9:075C
cs=0x26a9;eip=0x00075f; 	T(si = bp+var_e);	// 85044 lea     si, [bp+var_E] ;~ 26A9:075F
cs=0x26a9;eip=0x000762; 	X(PUSH(ss));	// 85045 push    ss ;~ 26A9:0762
cs=0x26a9;eip=0x000763; 	X(POP(es));	// 85046 pop     es ;~ 26A9:0763
cs=0x26a9;eip=0x000764; 	T(MOV(cx, 6));	// 85047 mov     cx, 6 ;~ 26A9:0764
	// 85048 repne movsw ;~ 26A9:0767
cs=0x26a9;eip=0x000767; 	X(	REPNE MOVSW);	// 85048 repne movsw ;~ 26A9:0767
cs=0x26a9;eip=0x000769; 	T(SUB(ax, ax));	// 85049 sub     ax, ax ;~ 26A9:0769
cs=0x26a9;eip=0x00076b; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), ax));	// 85050 mov     [bp+var_36], ax ;~ 26A9:076B
cs=0x26a9;eip=0x00076e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 85051 mov     [bp+var_2], ax ;~ 26A9:076E
cs=0x26a9;eip=0x000771; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 85052 mov     [bp+var_24], ax ;~ 26A9:0771
cs=0x26a9;eip=0x000774; 	X(MOV(*(dw*)(raddr(ss,bp+var_46)), 0x870));	// 85053 mov     [bp+var_46], 870h ;~ 26A9:0774
cs=0x26a9;eip=0x000779; 	T(SUB(al, al));	// 85054 sub     al, al ;~ 26A9:0779
cs=0x26a9;eip=0x00077b; 	X(MOV(*(raddr(ss,bp+var_33)), al));	// 85055 mov     [bp+var_33], al ;~ 26A9:077B
cs=0x26a9;eip=0x00077e; 	X(MOV(*(raddr(ss,bp+var_34)), al));	// 85056 mov     [bp+var_34], al ;~ 26A9:077E
cs=0x26a9;eip=0x000781; 	X(MOV(*(raddr(ss,bp+var_2e)), al));	// 85057 mov     [bp+var_2E], al ;~ 26A9:0781
cs=0x26a9;eip=0x000784; 	X(MOV(*(raddr(ss,bp+var_58)), al));	// 85058 mov     [bp+var_58], al ;~ 26A9:0784
cs=0x26a9;eip=0x000787; 	X(MOV(*(raddr(ss,bp+var_30)), al));	// 85059 mov     [bp+var_30], al ;~ 26A9:0787
cs=0x26a9;eip=0x00078a; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 85060 mov     [bp+var_12], al ;~ 26A9:078A
cs=0x26a9;eip=0x00078d; 	X(MOV(*(raddr(ss,bp+var_44)), al));	// 85061 mov     [bp+var_44], al ;~ 26A9:078D
cs=0x26a9;eip=0x000790; 	T(MOV(ax, *(dw*)((&unk_5649a))));	// 85062 mov     ax, word ptr unk_5649A ;~ 26A9:0790
cs=0x26a9;eip=0x000793; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 85063 mov     [bp+var_22], ax ;~ 26A9:0793
cs=0x26a9;eip=0x000796; 	T(MOV(ax, *(dw*)((&unk_57068))));	// 85064 mov     ax, word ptr unk_57068 ;~ 26A9:0796
cs=0x26a9;eip=0x000799; 	X(MOV(*(dw*)(raddr(ss,bp+var_52)), ax));	// 85065 mov     [bp+var_52], ax ;~ 26A9:0799
cs=0x26a9;eip=0x00079c; 	T(MOV(al, unk_564ec));	// 85066 mov     al, byte ptr unk_564EC ;~ 26A9:079C
cs=0x26a9;eip=0x00079f; 	X(MOV(*(raddr(ss,bp+var_2c)), al));	// 85067 mov     [bp+var_2C], al ;~ 26A9:079F
cs=0x26a9;eip=0x0007a2; 	T(MOV(al, unk_570ba));	// 85068 mov     al, byte ptr unk_570BA ;~ 26A9:07A2
cs=0x26a9;eip=0x0007a5; 	X(MOV(*(raddr(ss,bp+var_56)), al));	// 85069 mov     [bp+var_56], al ;~ 26A9:07A5
cs=0x26a9;eip=0x0007a8; 	T(SUB(al, al));	// 85070 sub     al, al ;~ 26A9:07A8
cs=0x26a9;eip=0x0007aa; 	X(MOV(unk_570ba, al));	// 85071 mov     byte ptr unk_570BA, al ;~ 26A9:07AA
cs=0x26a9;eip=0x0007ad; 	X(MOV(unk_564ec, al));	// 85072 mov     byte ptr unk_564EC, al ;~ 26A9:07AD
cs=0x26a9;eip=0x0007b0; 	X(MOV(*(dw*)((&unk_49ff8)), 0x0A0));	// 85073 mov     word ptr unk_49FF8, 0A0h ; ' ' ;~ 26A9:07B0
cs=0x26a9;eip=0x0007b6; 	R(CALLF(sub_3101f,0));	// 85074 call    sub_3101F ;~ 26A9:07B6
cs=0x26a9;eip=0x0007bb; 	R(CALLF(sub_1bbee,0));	// 85075 call    sub_1BBEE ;~ 26A9:07BB
cs=0x26a9;eip=0x0007c0; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), 0));	// 85076 mov     [bp+var_20], 0 ;~ 26A9:07C0
loc_35835:
	// 9852 
cs=0x26a9;eip=0x0007c5; 	R(CALLF(sub_2ee71,0));	// 85080 call    sub_2EE71 ;~ 26A9:07C5
cs=0x26a9;eip=0x0007ca; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), ax));	// 85081 mov     [bp+var_42], ax ;~ 26A9:07CA
cs=0x26a9;eip=0x0007cd; 	T(OR(ax, ax));	// 85082 or      ax, ax ;~ 26A9:07CD
cs=0x26a9;eip=0x0007cf; 	R(JZ(loc_3584e));	// 85083 jz      short loc_3584E ;~ 26A9:07CF
cs=0x26a9;eip=0x0007d1; 	T(CMP(ax, 3));	// 85084 cmp     ax, 3 ;~ 26A9:07D1
cs=0x26a9;eip=0x0007d4; 	R(JZ(loc_35849));	// 85085 jz      short loc_35849 ;~ 26A9:07D4
cs=0x26a9;eip=0x0007d6; 	R(JMP(loc_35b1b));	// 85086 jmp     loc_35B1B ;~ 26A9:07D6
loc_35849:
	// 9853 
cs=0x26a9;eip=0x0007d9; 	R(CALLF(sub_318b6,0));	// 85090 call    sub_318B6 ;~ 26A9:07D9
loc_3584e:
	// 9854 
cs=0x26a9;eip=0x0007de; 	R(CALLF(sub_1bc16,0));	// 85093 call    sub_1BC16 ;~ 26A9:07DE
cs=0x26a9;eip=0x0007e3; 	T(CMP(*(dw*)((&unk_57056)), 0x80));	// 85094 cmp     word ptr unk_57056, 80h ; '€' ;~ 26A9:07E3
cs=0x26a9;eip=0x0007e9; 	R(JLE(loc_35861));	// 85095 jle     short loc_35861 ;~ 26A9:07E9
cs=0x26a9;eip=0x0007eb; 	X(MOV(*(dw*)((&unk_57056)), 0x80));	// 85096 mov     word ptr unk_57056, 80h ; '€' ;~ 26A9:07EB
loc_35861:
	// 9855 
cs=0x26a9;eip=0x0007f1; 	T(CMP(*(dw*)((&unk_57058)), 4));	// 85099 cmp     word ptr unk_57058, 4 ;~ 26A9:07F1
cs=0x26a9;eip=0x0007f6; 	R(JC(loc_35885));	// 85100 jb      short loc_35885 ;~ 26A9:07F6
cs=0x26a9;eip=0x0007f8; 	T(CMP(*(raddr(ss,bp+var_2e)), 0));	// 85101 cmp     [bp+var_2E], 0 ;~ 26A9:07F8
cs=0x26a9;eip=0x0007fc; 	R(JNZ(loc_35885));	// 85102 jnz     short loc_35885 ;~ 26A9:07FC
cs=0x26a9;eip=0x0007fe; 	X(MOV(*(raddr(ss,bp+var_2e)), 1));	// 85103 mov     [bp+var_2E], 1 ;~ 26A9:07FE
cs=0x26a9;eip=0x000802; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_c))));	// 85104 mov     ax, [bp+arg_C] ;~ 26A9:0802
cs=0x26a9;eip=0x000805; 	T(di = bp+var_40);	// 85105 lea     di, [bp+var_40] ;~ 26A9:0805
cs=0x26a9;eip=0x000808; 	T(MOV(si, ax));	// 85106 mov     si, ax ;~ 26A9:0808
cs=0x26a9;eip=0x00080a; 	X(PUSH(ss));	// 85107 push    ss ;~ 26A9:080A
cs=0x26a9;eip=0x00080b; 	X(POP(es));	// 85108 pop     es ;~ 26A9:080B
cs=0x26a9;eip=0x00080c; 	X(MOVSW);	// 85109 movsw ;~ 26A9:080C
cs=0x26a9;eip=0x00080d; 	X(MOVSW);	// 85110 movsw ;~ 26A9:080D
cs=0x26a9;eip=0x00080e; 	X(MOVSW);	// 85111 movsw ;~ 26A9:080E
cs=0x26a9;eip=0x00080f; 	X(MOVSW);	// 85112 movsw ;~ 26A9:080F
cs=0x26a9;eip=0x000810; 	R(CALLF(sub_20565,0));	// 85113 call    sub_20565 ;~ 26A9:0810
loc_35885:
	// 9856 
cs=0x26a9;eip=0x000815; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 85117 mov     ax, [bp+var_16] ;~ 26A9:0815
cs=0x26a9;eip=0x000818; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_14))));	// 85118 mov     dx, [bp+var_14] ;~ 26A9:0818
cs=0x26a9;eip=0x00081b; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_6))));	// 85119 sub     ax, [bp+var_6] ;~ 26A9:081B
cs=0x26a9;eip=0x00081e; 	T(SBB(dx, *(dw*)(raddr(ss,bp+var_4))));	// 85120 sbb     dx, [bp+var_4] ;~ 26A9:081E
cs=0x26a9;eip=0x000821; 	R(JNS(loc_3589a));	// 85121 jns     short loc_3589A ;~ 26A9:0821
cs=0x26a9;eip=0x000823; 	T(NEG(ax));	// 85122 neg     ax ;~ 26A9:0823
cs=0x26a9;eip=0x000825; 	T(ADC(dx, 0));	// 85123 adc     dx, 0 ;~ 26A9:0825
cs=0x26a9;eip=0x000828; 	T(NEG(dx));	// 85124 neg     dx ;~ 26A9:0828
loc_3589a:
	// 9857 
cs=0x26a9;eip=0x00082a; 	T(MOV(cx, ax));	// 85127 mov     cx, ax ;~ 26A9:082A
cs=0x26a9;eip=0x00082c; 	T(MOV(bx, dx));	// 85128 mov     bx, dx ;~ 26A9:082C
cs=0x26a9;eip=0x00082e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 85129 mov     ax, [bp+var_1A] ;~ 26A9:082E
cs=0x26a9;eip=0x000831; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_18))));	// 85130 mov     dx, [bp+var_18] ;~ 26A9:0831
cs=0x26a9;eip=0x000834; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_a))));	// 85131 sub     ax, [bp+var_A] ;~ 26A9:0834
cs=0x26a9;eip=0x000837; 	T(SBB(dx, *(dw*)(raddr(ss,bp+var_8))));	// 85132 sbb     dx, [bp+var_8] ;~ 26A9:0837
cs=0x26a9;eip=0x00083a; 	R(JNS(loc_358b3));	// 85133 jns     short loc_358B3 ;~ 26A9:083A
cs=0x26a9;eip=0x00083c; 	T(NEG(ax));	// 85134 neg     ax ;~ 26A9:083C
cs=0x26a9;eip=0x00083e; 	T(ADC(dx, 0));	// 85135 adc     dx, 0 ;~ 26A9:083E
cs=0x26a9;eip=0x000841; 	T(NEG(dx));	// 85136 neg     dx ;~ 26A9:0841
loc_358b3:
	// 9858 
cs=0x26a9;eip=0x000843; 	T(MOV(si, ax));	// 85139 mov     si, ax ;~ 26A9:0843
cs=0x26a9;eip=0x000845; 	T(MOV(di, dx));	// 85140 mov     di, dx ;~ 26A9:0845
cs=0x26a9;eip=0x000847; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 85141 mov     ax, [bp+var_1E] ;~ 26A9:0847
cs=0x26a9;eip=0x00084a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_1c))));	// 85142 mov     dx, [bp+var_1C] ;~ 26A9:084A
cs=0x26a9;eip=0x00084d; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_e))));	// 85143 sub     ax, [bp+var_E] ;~ 26A9:084D
cs=0x26a9;eip=0x000850; 	T(SBB(dx, *(dw*)(raddr(ss,bp+var_c))));	// 85144 sbb     dx, [bp+var_C] ;~ 26A9:0850
cs=0x26a9;eip=0x000853; 	R(JNS(loc_358cc));	// 85145 jns     short loc_358CC ;~ 26A9:0853
cs=0x26a9;eip=0x000855; 	T(NEG(ax));	// 85146 neg     ax ;~ 26A9:0855
cs=0x26a9;eip=0x000857; 	T(ADC(dx, 0));	// 85147 adc     dx, 0 ;~ 26A9:0857
cs=0x26a9;eip=0x00085a; 	T(NEG(dx));	// 85148 neg     dx ;~ 26A9:085A
loc_358cc:
	// 9859 
cs=0x26a9;eip=0x00085c; 	T(ADD(ax, si));	// 85151 add     ax, si ;~ 26A9:085C
cs=0x26a9;eip=0x00085e; 	T(ADC(dx, di));	// 85152 adc     dx, di ;~ 26A9:085E
cs=0x26a9;eip=0x000860; 	T(ADD(ax, cx));	// 85153 add     ax, cx ;~ 26A9:0860
cs=0x26a9;eip=0x000862; 	T(ADC(dx, bx));	// 85154 adc     dx, bx ;~ 26A9:0862
cs=0x26a9;eip=0x000864; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 85155 mov     [bp+var_2A], ax ;~ 26A9:0864
cs=0x26a9;eip=0x000867; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), dx));	// 85156 mov     [bp+var_28], dx ;~ 26A9:0867
cs=0x26a9;eip=0x00086a; 	T(ax = bp+var_1e);	// 85157 lea     ax, [bp+var_1E] ;~ 26A9:086A
cs=0x26a9;eip=0x00086d; 	X(PUSH(ax));	// 85158 push    ax ;~ 26A9:086D
cs=0x26a9;eip=0x00086e; 	T(ax = bp+arg_0);	// 85159 lea     ax, [bp+arg_0] ;~ 26A9:086E
cs=0x26a9;eip=0x000871; 	X(PUSH(ax));	// 85160 push    ax ;~ 26A9:0871
cs=0x26a9;eip=0x000872; 	R(CALL(sub_355f8,0));	// 85161 call    sub_355F8 ;~ 26A9:0872
cs=0x26a9;eip=0x000875; 	T(ax = bp+var_1a);	// 85162 lea     ax, [bp+var_1A] ;~ 26A9:0875
cs=0x26a9;eip=0x000878; 	X(PUSH(ax));	// 85163 push    ax ;~ 26A9:0878
cs=0x26a9;eip=0x000879; 	T(ax = bp+arg_4);	// 85164 lea     ax, [bp+arg_4] ;~ 26A9:0879
cs=0x26a9;eip=0x00087c; 	X(PUSH(ax));	// 85165 push    ax ;~ 26A9:087C
cs=0x26a9;eip=0x00087d; 	R(CALL(sub_355f8,0));	// 85166 call    sub_355F8 ;~ 26A9:087D
cs=0x26a9;eip=0x000880; 	T(ax = bp+var_16);	// 85167 lea     ax, [bp+var_16] ;~ 26A9:0880
cs=0x26a9;eip=0x000883; 	X(PUSH(ax));	// 85168 push    ax ;~ 26A9:0883
cs=0x26a9;eip=0x000884; 	T(ax = bp+arg_8);	// 85169 lea     ax, [bp+arg_8] ;~ 26A9:0884
cs=0x26a9;eip=0x000887; 	X(PUSH(ax));	// 85170 push    ax ;~ 26A9:0887
cs=0x26a9;eip=0x000888; 	R(CALL(sub_355f8,0));	// 85171 call    sub_355F8 ;~ 26A9:0888
cs=0x26a9;eip=0x00088b; 	T(CMP(*(dw*)((&unk_57058)), 1));	// 85172 cmp     word ptr unk_57058, 1 ;~ 26A9:088B
cs=0x26a9;eip=0x000890; 	R(JNC(loc_3592b));	// 85173 jnb     short loc_3592B ;~ 26A9:0890
cs=0x26a9;eip=0x000892; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 85174 push    [bp+var_1C] ;~ 26A9:0892
cs=0x26a9;eip=0x000895; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1e))));	// 85175 push    [bp+var_1E] ;~ 26A9:0895
cs=0x26a9;eip=0x000898; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 85176 push    [bp+var_18] ;~ 26A9:0898
cs=0x26a9;eip=0x00089b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 85177 push    [bp+var_1A] ;~ 26A9:089B
cs=0x26a9;eip=0x00089e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 85178 push    [bp+var_14] ;~ 26A9:089E
cs=0x26a9;eip=0x0008a1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 85179 push    [bp+var_16] ;~ 26A9:08A1
cs=0x26a9;eip=0x0008a4; 	X(PUSH(*(dw*)((&unk_47ad2))));	// 85180 push    word ptr unk_47AD2 ;~ 26A9:08A4
cs=0x26a9;eip=0x0008a8; 	X(PUSH(*(dw*)((&unk_47ad0))));	// 85181 push    word ptr unk_47AD0 ;~ 26A9:08A8
cs=0x26a9;eip=0x0008ac; 	T(ax = bp+var_2);	// 85182 lea     ax, [bp+var_2] ;~ 26A9:08AC
cs=0x26a9;eip=0x0008af; 	X(PUSH(ax));	// 85183 push    ax ;~ 26A9:08AF
cs=0x26a9;eip=0x0008b0; 	T(ax = bp+var_36);	// 85184 lea     ax, [bp+var_36] ;~ 26A9:08B0
cs=0x26a9;eip=0x0008b3; 	X(PUSH(ax));	// 85185 push    ax ;~ 26A9:08B3
cs=0x26a9;eip=0x0008b4; 	R(CALLF(sub_25b9c,0));	// 85186 call    sub_25B9C ;~ 26A9:08B4
cs=0x26a9;eip=0x0008b9; 	R(JMP(loc_35971));	// 85187 jmp     short loc_35971 ;~ 26A9:08B9
loc_3592b:
	// 9860 
cs=0x26a9;eip=0x0008bb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 85191 push    [bp+var_2] ;~ 26A9:08BB
cs=0x26a9;eip=0x0008be; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 85192 push    [bp+var_24] ;~ 26A9:08BE
cs=0x26a9;eip=0x0008c1; 	T(MOV(ax, 0x168));	// 85193 mov     ax, 168h ;~ 26A9:08C1
cs=0x26a9;eip=0x0008c4; 	X(PUSH(ax));	// 85194 push    ax ;~ 26A9:08C4
cs=0x26a9;eip=0x0008c5; 	X(PUSH(*(dw*)((&unk_57056))));	// 85195 push    word ptr unk_57056 ;~ 26A9:08C5
cs=0x26a9;eip=0x0008c9; 	R(CALLF(sub_2f002,0));	// 85196 call    sub_2F002 ;~ 26A9:08C9
cs=0x26a9;eip=0x0008ce; 	T(MOV(cl, 8));	// 85197 mov     cl, 8 ;~ 26A9:08CE
cs=0x26a9;eip=0x0008d0; 	R(CALLF(sub_10240,0));	// 85198 call    sub_10240 ;~ 26A9:08D0
cs=0x26a9;eip=0x0008d5; 	X(PUSH(ax));	// 85199 push    ax ;~ 26A9:08D5
cs=0x26a9;eip=0x0008d6; 	R(CALLF(sub_13561,0));	// 85200 call    sub_13561 ;~ 26A9:08D6
cs=0x26a9;eip=0x0008db; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 85201 mov     [bp+var_2], ax ;~ 26A9:08DB
cs=0x26a9;eip=0x0008de; 	X(PUSH(*(dw*)(raddr(ss,bp+var_36))));	// 85202 push    [bp+var_36] ;~ 26A9:08DE
cs=0x26a9;eip=0x0008e1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_46))));	// 85203 push    [bp+var_46] ;~ 26A9:08E1
cs=0x26a9;eip=0x0008e4; 	T(MOV(ax, 0x168));	// 85204 mov     ax, 168h ;~ 26A9:08E4
cs=0x26a9;eip=0x0008e7; 	X(PUSH(ax));	// 85205 push    ax ;~ 26A9:08E7
cs=0x26a9;eip=0x0008e8; 	X(PUSH(*(dw*)((&unk_57056))));	// 85206 push    word ptr unk_57056 ;~ 26A9:08E8
cs=0x26a9;eip=0x0008ec; 	R(CALLF(sub_2f002,0));	// 85207 call    sub_2F002 ;~ 26A9:08EC
cs=0x26a9;eip=0x0008f1; 	T(MOV(cl, 8));	// 85208 mov     cl, 8 ;~ 26A9:08F1
cs=0x26a9;eip=0x0008f3; 	R(CALLF(sub_10240,0));	// 85209 call    sub_10240 ;~ 26A9:08F3
cs=0x26a9;eip=0x0008f8; 	X(PUSH(ax));	// 85210 push    ax ;~ 26A9:08F8
cs=0x26a9;eip=0x0008f9; 	R(CALLF(sub_13561,0));	// 85211 call    sub_13561 ;~ 26A9:08F9
cs=0x26a9;eip=0x0008fe; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), ax));	// 85212 mov     [bp+var_36], ax ;~ 26A9:08FE
loc_35971:
	// 9861 
cs=0x26a9;eip=0x000901; 	T(CMP(*(raddr(ss,bp+var_2e)), 0));	// 85215 cmp     [bp+var_2E], 0 ;~ 26A9:0901
cs=0x26a9;eip=0x000905; 	R(JZ(loc_359cb));	// 85216 jz      short loc_359CB ;~ 26A9:0905
cs=0x26a9;eip=0x000907; 	T(MOV(si, *(dw*)((&unk_5651c))));	// 85217 mov     si, word ptr unk_5651C ;~ 26A9:0907
cs=0x26a9;eip=0x00090b; 	T(CMP(*(raddr(ss,bp+si+var_34)), 0));	// 85218 cmp     [bp+si+var_34], 0 ;~ 26A9:090B
cs=0x26a9;eip=0x00090f; 	R(JNZ(loc_359cb));	// 85219 jnz     short loc_359CB ;~ 26A9:090F
cs=0x26a9;eip=0x000911; 	T(CMP(*(raddr(ss,bp+var_54)), 0));	// 85220 cmp     [bp+var_54], 0 ;~ 26A9:0911
cs=0x26a9;eip=0x000915; 	R(JZ(loc_3599a));	// 85221 jz      short loc_3599A ;~ 26A9:0915
cs=0x26a9;eip=0x000917; 	T(MOV(ax, 0x265A));	// 85222 mov     ax, 265Ah ;~ 26A9:0917
cs=0x26a9;eip=0x00091a; 	X(PUSH(ax));	// 85223 push    ax ;~ 26A9:091A
cs=0x26a9;eip=0x00091b; 	T(MOV(ax, 0x0ED08));	// 85224 mov     ax, 0ED08h ;~ 26A9:091B
cs=0x26a9;eip=0x00091e; 	X(PUSH(ax));	// 85225 push    ax ;~ 26A9:091E
cs=0x26a9;eip=0x00091f; 	R(CALLF(sub_316b2,0));	// 85226 call    sub_316B2 ;~ 26A9:091F
cs=0x26a9;eip=0x000924; 	X(MOV(*(raddr(ss,bp+var_10)), 1));	// 85227 mov     [bp+var_10], 1 ;~ 26A9:0924
cs=0x26a9;eip=0x000928; 	R(JMP(loc_359b7));	// 85228 jmp     short loc_359B7 ;~ 26A9:0928
loc_3599a:
	// 9862 
cs=0x26a9;eip=0x00092a; 	T(ax = bp+var_50);	// 85232 lea     ax, [bp+var_50] ;~ 26A9:092A
cs=0x26a9;eip=0x00092d; 	X(PUSH(ax));	// 85233 push    ax ;~ 26A9:092D
cs=0x26a9;eip=0x00092e; 	T(SUB(ax, ax));	// 85234 sub     ax, ax ;~ 26A9:092E
cs=0x26a9;eip=0x000930; 	X(PUSH(ax));	// 85235 push    ax ;~ 26A9:0930
cs=0x26a9;eip=0x000931; 	X(PUSH(ax));	// 85236 push    ax ;~ 26A9:0931
cs=0x26a9;eip=0x000932; 	T(MOV(ax, 0x0ED08));	// 85237 mov     ax, 0ED08h ;~ 26A9:0932
cs=0x26a9;eip=0x000935; 	X(PUSH(ax));	// 85238 push    ax ;~ 26A9:0935
cs=0x26a9;eip=0x000936; 	T(SUB(ax, ax));	// 85239 sub     ax, ax ;~ 26A9:0936
cs=0x26a9;eip=0x000938; 	X(PUSH(ax));	// 85240 push    ax ;~ 26A9:0938
cs=0x26a9;eip=0x000939; 	X(PUSH(ax));	// 85241 push    ax ;~ 26A9:0939
cs=0x26a9;eip=0x00093a; 	X(PUSH(*(dw*)((&unk_47b34))));	// 85242 push    word ptr unk_47B34 ;~ 26A9:093A
cs=0x26a9;eip=0x00093e; 	X(PUSH(*(dw*)((&unk_47b36))));	// 85243 push    word ptr unk_47B36 ;~ 26A9:093E
cs=0x26a9;eip=0x000942; 	R(CALLF(sub_2c4d3,0));	// 85244 call    sub_2C4D3 ;~ 26A9:0942
loc_359b7:
	// 9863 
cs=0x26a9;eip=0x000947; 	T(TEST(byte_5687c, 2));	// 85247 test    byte_5687C, 2 ;~ 26A9:0947
cs=0x26a9;eip=0x00094c; 	R(JZ(loc_359c6));	// 85248 jz      short loc_359C6 ;~ 26A9:094C
cs=0x26a9;eip=0x00094e; 	T(MOV(si, *(dw*)((&unk_5651c))));	// 85249 mov     si, word ptr unk_5651C ;~ 26A9:094E
cs=0x26a9;eip=0x000952; 	X(MOV(*(raddr(ss,bp+si+var_34)), 1));	// 85250 mov     [bp+si+var_34], 1 ;~ 26A9:0952
loc_359c6:
	// 9864 
cs=0x26a9;eip=0x000956; 	R(CALLF(sub_1bc9c,0));	// 85253 call    sub_1BC9C ;~ 26A9:0956
loc_359cb:
	// 9865 
cs=0x26a9;eip=0x00095b; 	R(CALLF(sub_3db22,0));	// 85257 call    sub_3DB22 ;~ 26A9:095B
cs=0x26a9;eip=0x000960; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 85258 push    [bp+var_14] ;~ 26A9:0960
cs=0x26a9;eip=0x000963; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 85259 push    [bp+var_16] ;~ 26A9:0963
cs=0x26a9;eip=0x000966; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 85260 push    [bp+var_18] ;~ 26A9:0966
cs=0x26a9;eip=0x000969; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 85261 push    [bp+var_1A] ;~ 26A9:0969
cs=0x26a9;eip=0x00096c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 85262 push    [bp+var_1C] ;~ 26A9:096C
cs=0x26a9;eip=0x00096f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1e))));	// 85263 push    [bp+var_1E] ;~ 26A9:096F
cs=0x26a9;eip=0x000972; 	R(CALLF(sub_3e0d0,0));	// 85264 call    sub_3E0D0 ;~ 26A9:0972
cs=0x26a9;eip=0x000977; 	T(ADD(sp, 0x0C));	// 85265 add     sp, 0Ch ;~ 26A9:0977
cs=0x26a9;eip=0x00097a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 85266 push    [bp+var_14] ;~ 26A9:097A
cs=0x26a9;eip=0x00097d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 85267 push    [bp+var_16] ;~ 26A9:097D
cs=0x26a9;eip=0x000980; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 85268 push    [bp+var_18] ;~ 26A9:0980
cs=0x26a9;eip=0x000983; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 85269 push    [bp+var_1A] ;~ 26A9:0983
cs=0x26a9;eip=0x000986; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 85270 push    [bp+var_1C] ;~ 26A9:0986
cs=0x26a9;eip=0x000989; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1e))));	// 85271 push    [bp+var_1E] ;~ 26A9:0989
cs=0x26a9;eip=0x00098c; 	R(CALLF(sub_3e149,0));	// 85272 call    sub_3E149 ;~ 26A9:098C
cs=0x26a9;eip=0x000991; 	T(ADD(sp, 0x0C));	// 85273 add     sp, 0Ch ;~ 26A9:0991
cs=0x26a9;eip=0x000994; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x4E));	// 85274 cmp     [bp+var_18], 4Eh ; 'N' ;~ 26A9:0994
cs=0x26a9;eip=0x000998; 	R(JL(loc_35a79));	// 85275 jl      short loc_35A79 ;~ 26A9:0998
cs=0x26a9;eip=0x00099a; 	R(JG(loc_35a13));	// 85276 jg      short loc_35A13 ;~ 26A9:099A
cs=0x26a9;eip=0x00099c; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), 0x2000));	// 85277 cmp     [bp+var_1A], 2000h ;~ 26A9:099C
cs=0x26a9;eip=0x0009a1; 	R(JC(loc_35a79));	// 85278 jb      short loc_35A79 ;~ 26A9:09A1
loc_35a13:
	// 9866 
cs=0x26a9;eip=0x0009a3; 	T(CMP(*(raddr(ss,bp+var_58)), 0));	// 85281 cmp     [bp+var_58], 0 ;~ 26A9:09A3
cs=0x26a9;eip=0x0009a7; 	R(JZ(loc_35a1e));	// 85282 jz      short loc_35A1E ;~ 26A9:09A7
cs=0x26a9;eip=0x0009a9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_52))));	// 85283 mov     ax, [bp+var_52] ;~ 26A9:09A9
cs=0x26a9;eip=0x0009ac; 	R(JMP(loc_35a21));	// 85284 jmp     short loc_35A21 ;~ 26A9:09AC
loc_35a1e:
	// 9867 
cs=0x26a9;eip=0x0009ae; 	T(MOV(ax, 1));	// 85288 mov     ax, 1 ;~ 26A9:09AE
loc_35a21:
	// 9868 
cs=0x26a9;eip=0x0009b1; 	X(MOV(*(dw*)((&unk_57068)), ax));	// 85291 mov     word ptr unk_57068, ax ;~ 26A9:09B1
cs=0x26a9;eip=0x0009b4; 	X(MOV(*(raddr(ss,bp+var_58)), 1));	// 85292 mov     [bp+var_58], 1 ;~ 26A9:09B4
cs=0x26a9;eip=0x0009b8; 	T(MOV(al, unk_47ac4));	// 85293 mov     al, byte ptr unk_47AC4 ;~ 26A9:09B8
cs=0x26a9;eip=0x0009bb; 	T(CBW);	// 85294 cbw ;~ 26A9:09BB
cs=0x26a9;eip=0x0009bc; 	X(PUSH(ax));	// 85295 push    ax ;~ 26A9:09BC
cs=0x26a9;eip=0x0009bd; 	T(SUB(ax, ax));	// 85296 sub     ax, ax ;~ 26A9:09BD
cs=0x26a9;eip=0x0009bf; 	X(PUSH(ax));	// 85297 push    ax ;~ 26A9:09BF
cs=0x26a9;eip=0x0009c0; 	X(PUSH(ax));	// 85298 push    ax ;~ 26A9:09C0
cs=0x26a9;eip=0x0009c1; 	T(ax = bp+var_40);	// 85299 lea     ax, [bp+var_40] ;~ 26A9:09C1
cs=0x26a9;eip=0x0009c4; 	X(PUSH(ax));	// 85300 push    ax ;~ 26A9:09C4
cs=0x26a9;eip=0x0009c5; 	T(MOV(ax, 7));	// 85301 mov     ax, 7 ;~ 26A9:09C5
cs=0x26a9;eip=0x0009c8; 	X(PUSH(ax));	// 85302 push    ax ;~ 26A9:09C8
cs=0x26a9;eip=0x0009c9; 	T(SUB(ax, ax));	// 85303 sub     ax, ax ;~ 26A9:09C9
cs=0x26a9;eip=0x0009cb; 	X(PUSH(ax));	// 85304 push    ax ;~ 26A9:09CB
cs=0x26a9;eip=0x0009cc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_36))));	// 85305 push    [bp+var_36] ;~ 26A9:09CC
cs=0x26a9;eip=0x0009cf; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 85306 push    [bp+var_2] ;~ 26A9:09CF
cs=0x26a9;eip=0x0009d2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 85307 mov     ax, [bp+var_16] ;~ 26A9:09D2
cs=0x26a9;eip=0x0009d5; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_14))));	// 85308 mov     dx, [bp+var_14] ;~ 26A9:09D5
cs=0x26a9;eip=0x0009d8; 	T(MOV(cl, 8));	// 85309 mov     cl, 8 ;~ 26A9:09D8
cs=0x26a9;eip=0x0009da; 	R(CALLF(sub_10240,0));	// 85310 call    sub_10240 ;~ 26A9:09DA
cs=0x26a9;eip=0x0009df; 	X(PUSH(dx));	// 85311 push    dx ;~ 26A9:09DF
cs=0x26a9;eip=0x0009e0; 	X(PUSH(ax));	// 85312 push    ax ;~ 26A9:09E0
cs=0x26a9;eip=0x0009e1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 85313 mov     ax, [bp+var_1A] ;~ 26A9:09E1
cs=0x26a9;eip=0x0009e4; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_18))));	// 85314 mov     dx, [bp+var_18] ;~ 26A9:09E4
cs=0x26a9;eip=0x0009e7; 	T(MOV(cl, 8));	// 85315 mov     cl, 8 ;~ 26A9:09E7
cs=0x26a9;eip=0x0009e9; 	R(CALLF(sub_10240,0));	// 85316 call    sub_10240 ;~ 26A9:09E9
cs=0x26a9;eip=0x0009ee; 	X(PUSH(dx));	// 85317 push    dx ;~ 26A9:09EE
cs=0x26a9;eip=0x0009ef; 	X(PUSH(ax));	// 85318 push    ax ;~ 26A9:09EF
cs=0x26a9;eip=0x0009f0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 85319 mov     ax, [bp+var_1E] ;~ 26A9:09F0
cs=0x26a9;eip=0x0009f3; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_1c))));	// 85320 mov     dx, [bp+var_1C] ;~ 26A9:09F3
cs=0x26a9;eip=0x0009f6; 	T(MOV(cl, 8));	// 85321 mov     cl, 8 ;~ 26A9:09F6
cs=0x26a9;eip=0x0009f8; 	R(CALLF(sub_10240,0));	// 85322 call    sub_10240 ;~ 26A9:09F8
cs=0x26a9;eip=0x0009fd; 	X(PUSH(dx));	// 85323 push    dx ;~ 26A9:09FD
cs=0x26a9;eip=0x0009fe; 	X(PUSH(ax));	// 85324 push    ax ;~ 26A9:09FE
cs=0x26a9;eip=0x0009ff; 	R(CALLF(sub_2d15d,0));	// 85325 call    sub_2D15D ;~ 26A9:09FF
cs=0x26a9;eip=0x000a04; 	T(ADD(sp, 0x1C));	// 85326 add     sp, 1Ch ;~ 26A9:0A04
cs=0x26a9;eip=0x000a07; 	R(JMP(loc_35ace));	// 85327 jmp     short loc_35ACE ;~ 26A9:0A07
loc_35a79:
	// 9869 
cs=0x26a9;eip=0x000a09; 	T(CMP(*(raddr(ss,bp+var_30)), 0));	// 85332 cmp     [bp+var_30], 0 ;~ 26A9:0A09
cs=0x26a9;eip=0x000a0d; 	R(JZ(loc_35a84));	// 85333 jz      short loc_35A84 ;~ 26A9:0A0D
cs=0x26a9;eip=0x000a0f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 85334 mov     ax, [bp+var_22] ;~ 26A9:0A0F
cs=0x26a9;eip=0x000a12; 	R(JMP(loc_35a87));	// 85335 jmp     short loc_35A87 ;~ 26A9:0A12
loc_35a84:
	// 9870 
cs=0x26a9;eip=0x000a14; 	T(MOV(ax, 1));	// 85339 mov     ax, 1 ;~ 26A9:0A14
loc_35a87:
	// 9871 
cs=0x26a9;eip=0x000a17; 	X(MOV(*(dw*)((&unk_5649a)), ax));	// 85342 mov     word ptr unk_5649A, ax ;~ 26A9:0A17
cs=0x26a9;eip=0x000a1a; 	X(MOV(*(raddr(ss,bp+var_30)), 1));	// 85343 mov     [bp+var_30], 1 ;~ 26A9:0A1A
cs=0x26a9;eip=0x000a1e; 	T(MOV(ax, 0x0E0));	// 85344 mov     ax, 0E0h ; 'à' ;~ 26A9:0A1E
cs=0x26a9;eip=0x000a21; 	X(PUSH(ax));	// 85345 push    ax ;~ 26A9:0A21
cs=0x26a9;eip=0x000a22; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 85346 push    [bp+var_1C] ;~ 26A9:0A22
cs=0x26a9;eip=0x000a25; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1e))));	// 85347 push    [bp+var_1E] ;~ 26A9:0A25
cs=0x26a9;eip=0x000a28; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 85348 push    [bp+var_18] ;~ 26A9:0A28
cs=0x26a9;eip=0x000a2b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 85349 push    [bp+var_1A] ;~ 26A9:0A2B
cs=0x26a9;eip=0x000a2e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 85350 push    [bp+var_14] ;~ 26A9:0A2E
cs=0x26a9;eip=0x000a31; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 85351 push    [bp+var_16] ;~ 26A9:0A31
cs=0x26a9;eip=0x000a34; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 85352 push    [bp+var_2] ;~ 26A9:0A34
cs=0x26a9;eip=0x000a37; 	X(PUSH(*(dw*)(raddr(ss,bp+var_36))));	// 85353 push    [bp+var_36] ;~ 26A9:0A37
cs=0x26a9;eip=0x000a3a; 	T(SUB(ax, ax));	// 85354 sub     ax, ax ;~ 26A9:0A3A
cs=0x26a9;eip=0x000a3c; 	X(PUSH(ax));	// 85355 push    ax ;~ 26A9:0A3C
cs=0x26a9;eip=0x000a3d; 	T(ax = bp+var_40);	// 85356 lea     ax, [bp+var_40] ;~ 26A9:0A3D
cs=0x26a9;eip=0x000a40; 	X(PUSH(ax));	// 85357 push    ax ;~ 26A9:0A40
cs=0x26a9;eip=0x000a41; 	T(MOV(ax, 7));	// 85358 mov     ax, 7 ;~ 26A9:0A41
cs=0x26a9;eip=0x000a44; 	X(PUSH(ax));	// 85359 push    ax ;~ 26A9:0A44
cs=0x26a9;eip=0x000a45; 	T(MOV(ax, 0x0CC9C));	// 85360 mov     ax, 0CC9Ch ;~ 26A9:0A45
cs=0x26a9;eip=0x000a48; 	X(PUSH(ax));	// 85361 push    ax ;~ 26A9:0A48
cs=0x26a9;eip=0x000a49; 	T(MOV(ax, 0x0BB8));	// 85362 mov     ax, 0BB8h ;~ 26A9:0A49
cs=0x26a9;eip=0x000a4c; 	X(PUSH(ax));	// 85363 push    ax ;~ 26A9:0A4C
cs=0x26a9;eip=0x000a4d; 	T(MOV(ax, 0x0EAE4));	// 85364 mov     ax, 0EAE4h ;~ 26A9:0A4D
cs=0x26a9;eip=0x000a50; 	X(PUSH(ax));	// 85365 push    ax ;~ 26A9:0A50
cs=0x26a9;eip=0x000a51; 	T(SUB(ax, ax));	// 85366 sub     ax, ax ;~ 26A9:0A51
cs=0x26a9;eip=0x000a53; 	X(PUSH(ax));	// 85367 push    ax ;~ 26A9:0A53
cs=0x26a9;eip=0x000a54; 	T(MOV(al, unk_47ac4));	// 85368 mov     al, byte ptr unk_47AC4 ;~ 26A9:0A54
cs=0x26a9;eip=0x000a57; 	T(CBW);	// 85369 cbw ;~ 26A9:0A57
cs=0x26a9;eip=0x000a58; 	X(PUSH(ax));	// 85370 push    ax ;~ 26A9:0A58
cs=0x26a9;eip=0x000a59; 	R(CALLF(sub_240ce,0));	// 85371 call    sub_240CE ;~ 26A9:0A59
loc_35ace:
	// 9872 
cs=0x26a9;eip=0x000a5e; 	T(CMP(*(raddr(ss,bp+var_2e)), 0));	// 85374 cmp     [bp+var_2E], 0 ;~ 26A9:0A5E
cs=0x26a9;eip=0x000a62; 	R(JZ(loc_35af2));	// 85375 jz      short loc_35AF2 ;~ 26A9:0A62
cs=0x26a9;eip=0x000a64; 	T(MOV(si, *(dw*)((&unk_5651c))));	// 85376 mov     si, word ptr unk_5651C ;~ 26A9:0A64
cs=0x26a9;eip=0x000a68; 	T(CMP(*(raddr(ss,bp+si+var_34)), 0));	// 85377 cmp     [bp+si+var_34], 0 ;~ 26A9:0A68
cs=0x26a9;eip=0x000a6c; 	R(JNZ(loc_35af2));	// 85378 jnz     short loc_35AF2 ;~ 26A9:0A6C
cs=0x26a9;eip=0x000a6e; 	T(TEST(byte_5687c, 2));	// 85379 test    byte_5687C, 2 ;~ 26A9:0A6E
cs=0x26a9;eip=0x000a73; 	R(JNZ(loc_35af2));	// 85380 jnz     short loc_35AF2 ;~ 26A9:0A73
cs=0x26a9;eip=0x000a75; 	R(CALLF(sub_203b0,0));	// 85381 call    sub_203B0 ;~ 26A9:0A75
cs=0x26a9;eip=0x000a7a; 	T(MOV(si, *(dw*)((&unk_5651c))));	// 85382 mov     si, word ptr unk_5651C ;~ 26A9:0A7A
cs=0x26a9;eip=0x000a7e; 	X(MOV(*(raddr(ss,bp+si+var_34)), 1));	// 85383 mov     [bp+si+var_34], 1 ;~ 26A9:0A7E
loc_35af2:
	// 9873 
cs=0x26a9;eip=0x000a82; 	T(MOV(ax, 1));	// 85387 mov     ax, 1 ;~ 26A9:0A82
cs=0x26a9;eip=0x000a85; 	X(PUSH(ax));	// 85388 push    ax ;~ 26A9:0A85
cs=0x26a9;eip=0x000a86; 	T(SUB(ax, ax));	// 85389 sub     ax, ax ;~ 26A9:0A86
cs=0x26a9;eip=0x000a88; 	X(PUSH(ax));	// 85390 push    ax ;~ 26A9:0A88
cs=0x26a9;eip=0x000a89; 	R(CALLF(sub_20275,0));	// 85391 call    sub_20275 ;~ 26A9:0A89
cs=0x26a9;eip=0x000a8e; 	R(CALLF(sub_3d480,0));	// 85392 call    sub_3D480 ;~ 26A9:0A8E
cs=0x26a9;eip=0x000a93; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 85393 mov     ax, [bp+arg_4] ;~ 26A9:0A93
cs=0x26a9;eip=0x000a96; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 85394 mov     dx, [bp+arg_6] ;~ 26A9:0A96
cs=0x26a9;eip=0x000a99; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), dx));	// 85395 cmp     [bp+var_18], dx ;~ 26A9:0A99
cs=0x26a9;eip=0x000a9c; 	R(JGE(loc_35b11));	// 85396 jge     short loc_35B11 ;~ 26A9:0A9C
cs=0x26a9;eip=0x000a9e; 	R(JMP(loc_35835));	// 85397 jmp     loc_35835 ;~ 26A9:0A9E
loc_35b11:
	// 9874 
cs=0x26a9;eip=0x000aa1; 	R(JG(loc_35b1b));	// 85401 jg      short loc_35B1B ;~ 26A9:0AA1
cs=0x26a9;eip=0x000aa3; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 85402 cmp     [bp+var_1A], ax ;~ 26A9:0AA3
cs=0x26a9;eip=0x000aa6; 	R(JNC(loc_35b1b));	// 85403 jnb     short loc_35B1B ;~ 26A9:0AA6
cs=0x26a9;eip=0x000aa8; 	R(JMP(loc_35835));	// 85404 jmp     loc_35835 ;~ 26A9:0AA8
loc_35b1b:
	// 9875 
cs=0x26a9;eip=0x000aab; 	T(MOV(ax, 0x0E0));	// 85409 mov     ax, 0E0h ; 'à' ;~ 26A9:0AAB
cs=0x26a9;eip=0x000aae; 	X(PUSH(ax));	// 85410 push    ax ;~ 26A9:0AAE
cs=0x26a9;eip=0x000aaf; 	R(CALLF(sub_25ad0,0));	// 85411 call    sub_25AD0 ;~ 26A9:0AAF
cs=0x26a9;eip=0x000ab4; 	T(MOV(ax, 0x2664));	// 85412 mov     ax, 2664h ;~ 26A9:0AB4
cs=0x26a9;eip=0x000ab7; 	X(PUSH(ax));	// 85413 push    ax ;~ 26A9:0AB7
cs=0x26a9;eip=0x000ab8; 	R(CALLF(sub_25ad0,0));	// 85414 call    sub_25AD0 ;~ 26A9:0AB8
cs=0x26a9;eip=0x000abd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 85415 mov     ax, [bp+var_22] ;~ 26A9:0ABD
cs=0x26a9;eip=0x000ac0; 	X(MOV(*(dw*)((&unk_5649a)), ax));	// 85416 mov     word ptr unk_5649A, ax ;~ 26A9:0AC0
cs=0x26a9;eip=0x000ac3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_52))));	// 85417 mov     ax, [bp+var_52] ;~ 26A9:0AC3
cs=0x26a9;eip=0x000ac6; 	X(MOV(*(dw*)((&unk_57068)), ax));	// 85418 mov     word ptr unk_57068, ax ;~ 26A9:0AC6
cs=0x26a9;eip=0x000ac9; 	T(MOV(al, *(raddr(ss,bp+var_2c))));	// 85419 mov     al, [bp+var_2C] ;~ 26A9:0AC9
cs=0x26a9;eip=0x000acc; 	X(MOV(unk_564ec, al));	// 85420 mov     byte ptr unk_564EC, al ;~ 26A9:0ACC
cs=0x26a9;eip=0x000acf; 	T(MOV(al, *(raddr(ss,bp+var_56))));	// 85421 mov     al, [bp+var_56] ;~ 26A9:0ACF
cs=0x26a9;eip=0x000ad2; 	X(MOV(unk_570ba, al));	// 85422 mov     byte ptr unk_570BA, al ;~ 26A9:0AD2
cs=0x26a9;eip=0x000ad5; 	T(CMP(*(raddr(ss,bp+var_2e)), 0));	// 85423 cmp     [bp+var_2E], 0 ;~ 26A9:0AD5
cs=0x26a9;eip=0x000ad9; 	R(JNZ(loc_35b8e));	// 85424 jnz     short loc_35B8E ;~ 26A9:0AD9
cs=0x26a9;eip=0x000adb; 	T(CMP(*(raddr(ss,bp+var_54)), 0));	// 85425 cmp     [bp+var_54], 0 ;~ 26A9:0ADB
cs=0x26a9;eip=0x000adf; 	R(JZ(loc_35b60));	// 85426 jz      short loc_35B60 ;~ 26A9:0ADF
cs=0x26a9;eip=0x000ae1; 	T(MOV(ax, 0x265F));	// 85427 mov     ax, 265Fh ;~ 26A9:0AE1
cs=0x26a9;eip=0x000ae4; 	X(PUSH(ax));	// 85428 push    ax ;~ 26A9:0AE4
cs=0x26a9;eip=0x000ae5; 	T(MOV(ax, 0x0ED08));	// 85429 mov     ax, 0ED08h ;~ 26A9:0AE5
cs=0x26a9;eip=0x000ae8; 	X(PUSH(ax));	// 85430 push    ax ;~ 26A9:0AE8
cs=0x26a9;eip=0x000ae9; 	R(CALLF(sub_316b2,0));	// 85431 call    sub_316B2 ;~ 26A9:0AE9
cs=0x26a9;eip=0x000aee; 	R(JMP(loc_35b7d));	// 85432 jmp     short loc_35B7D ;~ 26A9:0AEE
loc_35b60:
	// 9876 
cs=0x26a9;eip=0x000af0; 	T(ax = bp+var_50);	// 85436 lea     ax, [bp+var_50] ;~ 26A9:0AF0
cs=0x26a9;eip=0x000af3; 	X(PUSH(ax));	// 85437 push    ax ;~ 26A9:0AF3
cs=0x26a9;eip=0x000af4; 	T(SUB(ax, ax));	// 85438 sub     ax, ax ;~ 26A9:0AF4
cs=0x26a9;eip=0x000af6; 	X(PUSH(ax));	// 85439 push    ax ;~ 26A9:0AF6
cs=0x26a9;eip=0x000af7; 	X(PUSH(ax));	// 85440 push    ax ;~ 26A9:0AF7
cs=0x26a9;eip=0x000af8; 	T(MOV(ax, 0x0ED08));	// 85441 mov     ax, 0ED08h ;~ 26A9:0AF8
cs=0x26a9;eip=0x000afb; 	X(PUSH(ax));	// 85442 push    ax ;~ 26A9:0AFB
cs=0x26a9;eip=0x000afc; 	T(SUB(ax, ax));	// 85443 sub     ax, ax ;~ 26A9:0AFC
cs=0x26a9;eip=0x000afe; 	X(PUSH(ax));	// 85444 push    ax ;~ 26A9:0AFE
cs=0x26a9;eip=0x000aff; 	X(PUSH(ax));	// 85445 push    ax ;~ 26A9:0AFF
cs=0x26a9;eip=0x000b00; 	X(PUSH(*(dw*)((&unk_47b34))));	// 85446 push    word ptr unk_47B34 ;~ 26A9:0B00
cs=0x26a9;eip=0x000b04; 	X(PUSH(*(dw*)((&unk_47b36))));	// 85447 push    word ptr unk_47B36 ;~ 26A9:0B04
cs=0x26a9;eip=0x000b08; 	R(CALLF(sub_2c4d3,0));	// 85448 call    sub_2C4D3 ;~ 26A9:0B08
loc_35b7d:
	// 9877 
cs=0x26a9;eip=0x000b0d; 	X(PUSH(*(dw*)((&unk_5651c))));	// 85451 push    word ptr unk_5651C ;~ 26A9:0B0D
cs=0x26a9;eip=0x000b11; 	T(MOV(ax, 1));	// 85452 mov     ax, 1 ;~ 26A9:0B11
cs=0x26a9;eip=0x000b14; 	T(SUB(ax, *(dw*)((&unk_5651c))));	// 85453 sub     ax, word ptr unk_5651C ;~ 26A9:0B14
cs=0x26a9;eip=0x000b18; 	X(PUSH(ax));	// 85454 push    ax ;~ 26A9:0B18
cs=0x26a9;eip=0x000b19; 	R(CALLF(sub_2c939,0));	// 85455 call    sub_2C939 ;~ 26A9:0B19
loc_35b8e:
	// 9878 
cs=0x26a9;eip=0x000b1e; 	T(CMP(*(raddr(ss,bp+var_54)), 0));	// 85458 cmp     [bp+var_54], 0 ;~ 26A9:0B1E
cs=0x26a9;eip=0x000b22; 	R(JNZ(loc_35b9d));	// 85459 jnz     short loc_35B9D ;~ 26A9:0B22
cs=0x26a9;eip=0x000b24; 	T(ax = bp+var_50);	// 85460 lea     ax, [bp+var_50] ;~ 26A9:0B24
cs=0x26a9;eip=0x000b27; 	X(PUSH(ax));	// 85461 push    ax ;~ 26A9:0B27
cs=0x26a9;eip=0x000b28; 	R(CALLF(sub_236fe,0));	// 85462 call    sub_236FE ;~ 26A9:0B28
loc_35b9d:
	// 9879 
cs=0x26a9;eip=0x000b2d; 	R(CALLF(sub_3102a,0));	// 85465 call    sub_3102A ;~ 26A9:0B2D
cs=0x26a9;eip=0x000b32; 	X(MOV(*(dw*)((&unk_49ff8)), 0x0FFFF));	// 85466 mov     word ptr unk_49FF8, 0FFFFh ;~ 26A9:0B32
loc_35ba8:
	// 9880 
cs=0x26a9;eip=0x000b38; 	X(POP(si));	// 85469 pop     si ;~ 26A9:0B38
cs=0x26a9;eip=0x000b39; 	X(POP(di));	// 85470 pop     di ;~ 26A9:0B39
cs=0x26a9;eip=0x000b3a; 	T(MOV(sp, bp));	// 85471 mov     sp, bp ;~ 26A9:0B3A
cs=0x26a9;eip=0x000b3c; 	X(POP(bp));	// 85472 pop     bp ;~ 26A9:0B3C
cs=0x26a9;eip=0x000b3d; 	R(RETF(0));	// 85473 retf ;~ 26A9:0B3D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_35096: 	goto loc_35096;
        case m2c::kloc_3509a: 	goto loc_3509a;
        case m2c::kloc_3509c: 	goto loc_3509c;
        case m2c::kloc_350c9: 	goto loc_350c9;
        case m2c::kloc_350d9: 	goto loc_350d9;
        case m2c::kloc_350ea: 	goto loc_350ea;
        case m2c::kloc_35124: 	goto loc_35124;
        case m2c::kloc_35129: 	goto loc_35129;
        case m2c::kloc_3512b: 	goto loc_3512b;
        case m2c::kloc_3513f: 	goto loc_3513f;
        case m2c::kloc_35257: 	goto loc_35257;
        case m2c::kloc_35277: 	goto loc_35277;
        case m2c::kloc_3528b: 	goto loc_3528b;
        case m2c::kloc_35290: 	goto loc_35290;
        case m2c::kloc_352a3: 	goto loc_352a3;
        case m2c::kloc_352c5: 	goto loc_352c5;
        case m2c::kloc_352e8: 	goto loc_352e8;
        case m2c::kloc_352ee: 	goto loc_352ee;
        case m2c::kloc_35330: 	goto loc_35330;
        case m2c::kloc_35349: 	goto loc_35349;
        case m2c::kloc_35362: 	goto loc_35362;
        case m2c::kloc_3538c: 	goto loc_3538c;
        case m2c::kloc_353a1: 	goto loc_353a1;
        case m2c::kloc_353ed: 	goto loc_353ed;
        case m2c::kloc_353fb: 	goto loc_353fb;
        case m2c::kloc_35418: 	goto loc_35418;
        case m2c::kloc_3541a: 	goto loc_3541a;
        case m2c::kloc_3541d: 	goto loc_3541d;
        case m2c::kloc_3542b: 	goto loc_3542b;
        case m2c::kloc_35448: 	goto loc_35448;
        case m2c::kloc_3544a: 	goto loc_3544a;
        case m2c::kloc_3544d: 	goto loc_3544d;
        case m2c::kloc_35495: 	goto loc_35495;
        case m2c::kloc_354a0: 	goto loc_354a0;
        case m2c::kloc_354a3: 	goto loc_354a3;
        case m2c::kloc_354fe: 	goto loc_354fe;
        case m2c::kloc_35509: 	goto loc_35509;
        case m2c::kloc_3550c: 	goto loc_3550c;
        case m2c::kloc_35553: 	goto loc_35553;
        case m2c::kloc_35572: 	goto loc_35572;
        case m2c::kloc_3557a: 	goto loc_3557a;
        case m2c::kloc_35588: 	goto loc_35588;
        case m2c::kloc_35590: 	goto loc_35590;
        case m2c::kloc_3559e: 	goto loc_3559e;
        case m2c::kloc_355a6: 	goto loc_355a6;
        case m2c::kloc_35615: 	goto loc_35615;
        case m2c::kloc_35619: 	goto loc_35619;
        case m2c::kloc_3561b: 	goto loc_3561b;
        case m2c::kloc_3562c: 	goto loc_3562c;
        case m2c::kloc_3563a: 	goto loc_3563a;
        case m2c::kloc_35648: 	goto loc_35648;
        case m2c::kloc_35656: 	goto loc_35656;
        case m2c::kloc_35664: 	goto loc_35664;
        case m2c::kloc_35672: 	goto loc_35672;
        case m2c::kloc_35680: 	goto loc_35680;
        case m2c::kloc_35685: 	goto loc_35685;
        case m2c::kloc_356be: 	goto loc_356be;
        case m2c::kloc_356df: 	goto loc_356df;
        case m2c::kloc_356e4: 	goto loc_356e4;
        case m2c::kloc_356e6: 	goto loc_356e6;
        case m2c::kloc_35700: 	goto loc_35700;
        case m2c::kloc_35719: 	goto loc_35719;
        case m2c::kloc_35739: 	goto loc_35739;
        case m2c::kloc_3573d: 	goto loc_3573d;
        case m2c::kloc_3573f: 	goto loc_3573f;
        case m2c::kloc_3574c: 	goto loc_3574c;
        case m2c::kloc_35788: 	goto loc_35788;
        case m2c::kloc_35835: 	goto loc_35835;
        case m2c::kloc_35849: 	goto loc_35849;
        case m2c::kloc_3584e: 	goto loc_3584e;
        case m2c::kloc_35861: 	goto loc_35861;
        case m2c::kloc_35885: 	goto loc_35885;
        case m2c::kloc_3589a: 	goto loc_3589a;
        case m2c::kloc_358b3: 	goto loc_358b3;
        case m2c::kloc_358cc: 	goto loc_358cc;
        case m2c::kloc_3592b: 	goto loc_3592b;
        case m2c::kloc_35971: 	goto loc_35971;
        case m2c::kloc_3599a: 	goto loc_3599a;
        case m2c::kloc_359b7: 	goto loc_359b7;
        case m2c::kloc_359c6: 	goto loc_359c6;
        case m2c::kloc_359cb: 	goto loc_359cb;
        case m2c::kloc_35a13: 	goto loc_35a13;
        case m2c::kloc_35a1e: 	goto loc_35a1e;
        case m2c::kloc_35a21: 	goto loc_35a21;
        case m2c::kloc_35a79: 	goto loc_35a79;
        case m2c::kloc_35a84: 	goto loc_35a84;
        case m2c::kloc_35a87: 	goto loc_35a87;
        case m2c::kloc_35ace: 	goto loc_35ace;
        case m2c::kloc_35af2: 	goto loc_35af2;
        case m2c::kloc_35b11: 	goto loc_35b11;
        case m2c::kloc_35b1b: 	goto loc_35b1b;
        case m2c::kloc_35b60: 	goto loc_35b60;
        case m2c::kloc_35b7d: 	goto loc_35b7d;
        case m2c::kloc_35b8e: 	goto loc_35b8e;
        case m2c::kloc_35b9d: 	goto loc_35b9d;
        case m2c::kloc_35ba8: 	goto loc_35ba8;
        case m2c::ksub_35078: 	goto sub_35078;
        case m2c::ksub_35147: 	goto sub_35147;
        case m2c::ksub_355f8: 	goto sub_355f8;
        case m2c::ksub_35707: 	goto sub_35707;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

