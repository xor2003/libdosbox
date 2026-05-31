/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool build_track_object(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    build_track_object:
    _begin:
#undef var_40
#define var_40 -0x40
	// 27083 var_40          = dword ptr -40h ;~ 0FBC:0000
#undef var_3c
#define var_3c -0x3C
	// 27084 var_3C          = word ptr -3Ch ;~ 0FBC:0000
#undef var_3a
#define var_3a -0x3A
	// 27085 var_3A          = word ptr -3Ah ;~ 0FBC:0000
#undef var_38
#define var_38 -0x38
	// 27086 var_38          = word ptr -38h ;~ 0FBC:0000
#undef var_36
#define var_36 -0x36
	// 27087 var_36          = word ptr -36h ;~ 0FBC:0000
#undef var_34
#define var_34 -0x34
	// 27088 var_34          = byte ptr -34h ;~ 0FBC:0000
#undef var_32
#define var_32 -0x32
	// 27089 var_32          = word ptr -32h ;~ 0FBC:0000
#undef var_2e
#define var_2e -0x2E
	// 27090 var_2E          = word ptr -2Eh ;~ 0FBC:0000
#undef var_2c
#define var_2c -0x2C
	// 27091 var_2C          = word ptr -2Ch ;~ 0FBC:0000
#undef var_28
#define var_28 -0x28
	// 27092 var_28          = word ptr -28h ;~ 0FBC:0000
#undef var_24
#define var_24 -0x24
	// 27093 var_24          = word ptr -24h ;~ 0FBC:0000
#undef var_22
#define var_22 -0x22
	// 27094 var_22          = word ptr -22h ;~ 0FBC:0000
#undef var_20
#define var_20 -0x20
	// 27095 var_20          = byte ptr -20h ;~ 0FBC:0000
#undef var_1e
#define var_1e -0x1E
	// 27096 var_1E          = word ptr -1Eh ;~ 0FBC:0000
#undef var_1c
#define var_1c -0x1C
	// 27097 var_1C          = word ptr -1Ch ;~ 0FBC:0000
#undef var_1a
#define var_1a -0x1A
	// 27098 var_1A          = byte ptr -1Ah ;~ 0FBC:0000
#undef var_18
#define var_18 -0x18
	// 27099 var_18          = word ptr -18h ;~ 0FBC:0000
#undef var_14
#define var_14 -0x14
	// 27100 var_14          = word ptr -14h ;~ 0FBC:0000
#undef var_12
#define var_12 -0x12
	// 27101 var_12          = byte ptr -12h ;~ 0FBC:0000
#undef var_10
#define var_10 -0x10
	// 27102 var_10          = word ptr -10h ;~ 0FBC:0000
#undef var_e
#define var_e -0x0E
	// 27103 var_E           = word ptr -0Eh ;~ 0FBC:0000
#undef var_c
#define var_c -0x0C
	// 27104 var_C           = word ptr -0Ch ;~ 0FBC:0000
#undef var_a
#define var_a -0x0A
	// 27105 var_A           = word ptr -0Ah ;~ 0FBC:0000
#undef var_8
#define var_8 -8
	// 27106 var_8           = byte ptr -8 ;~ 0FBC:0000
#undef var_6
#define var_6 -6
	// 27107 var_6           = word ptr -6 ;~ 0FBC:0000
#undef var_2
#define var_2 -2
	// 27108 var_2           = word ptr -2 ;~ 0FBC:0000
#undef arg_0
#define arg_0 6
	// 27109 arg_0           = word ptr  6 ;~ 0FBC:0000
#undef arg_2
#define arg_2 8
	// 27110 arg_2           = word ptr  8 ;~ 0FBC:0000
cs=0xfbc;eip=0x000000; 	X(PUSH(bp));	// 27112 push    bp ;~ 0FBC:0000
cs=0xfbc;eip=0x000001; 	T(MOV(bp, sp));	// 27113 mov     bp, sp ;~ 0FBC:0001
cs=0xfbc;eip=0x000003; 	T(SUB(sp, 0x40));	// 27114 sub     sp, 40h ;~ 0FBC:0003
cs=0xfbc;eip=0x000006; 	X(PUSH(di));	// 27115 push    di ;~ 0FBC:0006
cs=0xfbc;eip=0x000007; 	X(PUSH(si));	// 27116 push    si ;~ 0FBC:0007
cs=0xfbc;eip=0x000008; 	X(MOV(planindex, 0));	// 27117 mov     planindex, 0 ;~ 0FBC:0008
cs=0xfbc;eip=0x00000e; 	X(MOV(wallindex, 0x0FFFF));	// 27118 mov     wallindex, 0FFFFh ;~ 0FBC:000E
cs=0xfbc;eip=0x000014; 	X(MOV(wallheight, 0x0FFF4));	// 27119 mov     wallHeight, 0FFF4h ;~ 0FBC:0014
cs=0xfbc;eip=0x00001a; 	X(MOV(elrdwallrelated, 0x0FC18));	// 27120 mov     elRdWallRelated, 0FC18h ; -1000 ;~ 0FBC:001A
cs=0xfbc;eip=0x000020; 	X(MOV(corkflag, 0));	// 27121 mov     corkFlag, 0 ;~ 0FBC:0020
cs=0xfbc;eip=0x000025; 	X(MOV(current_surf_type, grass));	// 27122 mov     current_surf_type, grass ; grass is the default surface ;~ 0FBC:0025
cs=0xfbc;eip=0x00002a; 	X(MOV(byte_4392c, 1));	// 27123 mov     byte_4392C, 1 ;~ 0FBC:002A
cs=0xfbc;eip=0x00002f; 	T(SUB(si, si));	// 27124 sub     si, si ;~ 0FBC:002F
cs=0xfbc;eip=0x000031; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), si));	// 27125 mov     [bp+var_38], si ;~ 0FBC:0031
cs=0xfbc;eip=0x000034; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), si));	// 27126 mov     [bp+var_10], si ;~ 0FBC:0034
cs=0xfbc;eip=0x000037; 	X(MOV(terrainheight, si));	// 27127 mov     terrainHeight, si ;~ 0FBC:0037
cs=0xfbc;eip=0x00003b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 27128 mov     bx, [bp+arg_0] ;~ 0FBC:003B
cs=0xfbc;eip=0x00003e; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 27129 mov     ax, [bx] ;~ 0FBC:003E
cs=0xfbc;eip=0x000040; 	T(MOV(cl, 0x0A));	// 27130 mov     cl, 0Ah ;~ 0FBC:0040
cs=0xfbc;eip=0x000042; 	T(SAR(ax, cl));	// 27131 sar     ax, cl          ; divide by 1024 ;~ 0FBC:0042
cs=0xfbc;eip=0x000044; 	X(MOV(*(raddr(ss,bp+var_1a)), al));	// 27132 mov     [bp+var_1A], al ;~ 0FBC:0044
cs=0xfbc;eip=0x000047; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 27133 mov     ax, [bx+4]      ; 2D word vector... world xz coords? ;~ 0FBC:0047
cs=0xfbc;eip=0x00004a; 	T(SAR(ax, cl));	// 27134 sar     ax, cl ;~ 0FBC:004A
cs=0xfbc;eip=0x00004c; 	X(MOV(*(raddr(ss,bp+var_20)), al));	// 27135 mov     [bp+var_20], al ;~ 0FBC:004C
cs=0xfbc;eip=0x00004f; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), 0x0FFFF));	// 27136 mov     [bp+var_24], 0FFFFh ;~ 0FBC:004F
cs=0xfbc;eip=0x000054; 	T(CMP(*(raddr(ss,bp+var_1a)), 0));	// 27137 cmp     [bp+var_1A], 0 ;~ 0FBC:0054
cs=0xfbc;eip=0x000058; 	J(JGE(loc_1e1fd));	// 27138 jge     short loc_1E1FD ;~ 0FBC:0058
cs=0xfbc;eip=0x00005a; 	J(JMP(loc_1f8cd));	// 27139 jmp     loc_1F8CD ;~ 0FBC:005A
loc_1e1fd:
	// 6027 
cs=0xfbc;eip=0x00005d; 	T(CMP(*(raddr(ss,bp+var_1a)), 0x1D));	// 27143 cmp     [bp+var_1A], 1Dh ;~ 0FBC:005D
cs=0xfbc;eip=0x000061; 	J(JLE(loc_1e206));	// 27144 jle     short loc_1E206 ;~ 0FBC:0061
cs=0xfbc;eip=0x000063; 	J(JMP(loc_1f8cd));	// 27145 jmp     loc_1F8CD ;~ 0FBC:0063
loc_1e206:
	// 6028 
cs=0xfbc;eip=0x000066; 	T(OR(al, al));	// 27149 or      al, al ;~ 0FBC:0066
cs=0xfbc;eip=0x000068; 	J(JGE(loc_1e20d));	// 27150 jge     short loc_1E20D ;~ 0FBC:0068
cs=0xfbc;eip=0x00006a; 	J(JMP(loc_1f8cd));	// 27151 jmp     loc_1F8CD ;~ 0FBC:006A
loc_1e20d:
	// 6029 
cs=0xfbc;eip=0x00006d; 	T(CMP(al, 0x1D));	// 27155 cmp     al, 1Dh ;~ 0FBC:006D
cs=0xfbc;eip=0x00006f; 	J(JLE(loc_1e214));	// 27156 jle     short loc_1E214 ;~ 0FBC:006F
cs=0xfbc;eip=0x000071; 	J(JMP(loc_1f8cd));	// 27157 jmp     loc_1F8CD ;~ 0FBC:0071
loc_1e214:
	// 6030 
cs=0xfbc;eip=0x000074; 	T(MOV(al, *(raddr(ss,bp+var_1a))));	// 27161 mov     al, [bp+var_1A] ;~ 0FBC:0074
cs=0xfbc;eip=0x000077; 	T(CBW);	// 27162 cbw ;~ 0FBC:0077
cs=0xfbc;eip=0x000078; 	T(MOV(di, ax));	// 27163 mov     di, ax ;~ 0FBC:0078
cs=0xfbc;eip=0x00007a; 	T(MOV(bx, di));	// 27164 mov     bx, di ;~ 0FBC:007A
cs=0xfbc;eip=0x00007c; 	T(SHL(bx, 1));	// 27165 shl     bx, 1 ;~ 0FBC:007C
cs=0xfbc;eip=0x00007e; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 27166 mov     ax, trackcenterpos2[bx] ;~ 0FBC:007E
cs=0xfbc;eip=0x000082; 	X(MOV(elem_xcenter, ax));	// 27167 mov     elem_xCenter, ax ;~ 0FBC:0082
cs=0xfbc;eip=0x000085; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 27168 mov     al, [bp+var_20] ;~ 0FBC:0085
cs=0xfbc;eip=0x000088; 	T(CBW);	// 27169 cbw ;~ 0FBC:0088
cs=0xfbc;eip=0x000089; 	T(SHL(ax, 1));	// 27170 shl     ax, 1 ;~ 0FBC:0089
cs=0xfbc;eip=0x00008b; 	X(MOV(*(dw*)(raddr(ss,bp+var_3c)), ax));	// 27171 mov     [bp+var_3C], ax ;~ 0FBC:008B
cs=0xfbc;eip=0x00008e; 	T(MOV(bx, ax));	// 27172 mov     bx, ax ;~ 0FBC:008E
cs=0xfbc;eip=0x000090; 	T(MOV(ax, *(dw*)(((db*)terraincenterpos)+bx)));	// 27173 mov     ax, terraincenterpos[bx] ;~ 0FBC:0090
cs=0xfbc;eip=0x000094; 	X(MOV(elem_zcenter, ax));	// 27174 mov     elem_zCenter, ax ;~ 0FBC:0094
cs=0xfbc;eip=0x000097; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 27175 mov     bx, trackrows[bx] ;~ 0FBC:0097
cs=0xfbc;eip=0x00009b; 	T(ADD(bx, *(dw*)(((db*)&td15_terr_map_main))));	// 27176 add     bx, word ptr td15_terr_map_main ;~ 0FBC:009B
cs=0xfbc;eip=0x00009f; 	T(MOV(es, *(dw*)(((db*)&td15_terr_map_main)+2)));	// 27177 mov     es, word ptr td15_terr_map_main+2 ;~ 0FBC:009F
cs=0xfbc;eip=0x0000a3; 	T(MOV(al, *(raddr(es,bx+di))));	// 27178 mov     al, es:[bx+di] ;~ 0FBC:00A3
cs=0xfbc;eip=0x0000a6; 	X(MOV(*(raddr(ss,bp+var_34)), al));	// 27179 mov     [bp+var_34], al ; terrain tile ;~ 0FBC:00A6
cs=0xfbc;eip=0x0000a9; 	T(OR(al, al));	// 27180 or      al, al ;~ 0FBC:00A9
cs=0xfbc;eip=0x0000ab; 	J(JZ(loc_1e276));	// 27181 jz      short loc_1E276 ;~ 0FBC:00AB
cs=0xfbc;eip=0x0000ad; 	T(SUB(ah, ah));	// 27182 sub     ah, ah ;~ 0FBC:00AD
cs=0xfbc;eip=0x0000af; 	T(CMP(ax, 1));	// 27183 cmp     ax, 1 ;~ 0FBC:00AF
cs=0xfbc;eip=0x0000b2; 	J(JNZ(loc_1e257));	// 27184 jnz     short loc_1E257 ;~ 0FBC:00B2
cs=0xfbc;eip=0x0000b4; 	J(JMP(loc_1e2fb));	// 27185 jmp     loc_1E2FB ;~ 0FBC:00B4
loc_1e257:
	// 6031 
cs=0xfbc;eip=0x0000b7; 	T(CMP(ax, 2));	// 27189 cmp     ax, 2           ; coast ;~ 0FBC:00B7
cs=0xfbc;eip=0x0000ba; 	J(JZ(loc_1e29a));	// 27190 jz      short loc_1E29A ;~ 0FBC:00BA
cs=0xfbc;eip=0x0000bc; 	T(CMP(ax, 3));	// 27191 cmp     ax, 3 ;~ 0FBC:00BC
cs=0xfbc;eip=0x0000bf; 	J(JZ(loc_1e2a0));	// 27192 jz      short loc_1E2A0 ;~ 0FBC:00BF
cs=0xfbc;eip=0x0000c1; 	T(CMP(ax, 4));	// 27193 cmp     ax, 4 ;~ 0FBC:00C1
cs=0xfbc;eip=0x0000c4; 	J(JZ(loc_1e2a6));	// 27194 jz      short loc_1E2A6 ;~ 0FBC:00C4
cs=0xfbc;eip=0x0000c6; 	T(CMP(ax, 5));	// 27195 cmp     ax, 5 ;~ 0FBC:00C6
cs=0xfbc;eip=0x0000c9; 	J(JZ(loc_1e2ac));	// 27196 jz      short loc_1E2AC ;~ 0FBC:00C9
cs=0xfbc;eip=0x0000cb; 	T(CMP(ax, 6));	// 27197 cmp     ax, 6 ;~ 0FBC:00CB
cs=0xfbc;eip=0x0000ce; 	J(JNZ(loc_1e276));	// 27198 jnz     short loc_1E276 ;~ 0FBC:00CE
code_addhillheight:
	// 6032 
cs=0xfbc;eip=0x0000d0; 	T(MOV(ax, *(dw*)(((db*)hillheightconsts)+2)));	// 27201 mov     ax, hillHeightConsts+2 ;~ 0FBC:00D0
cs=0xfbc;eip=0x0000d3; 	X(MOV(terrainheight, ax));	// 27202 mov     terrainHeight, ax ;~ 0FBC:00D3
loc_1e276:
	// 6033 
cs=0xfbc;eip=0x0000d6; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 27206 mov     al, [bp+var_20] ;~ 0FBC:00D6
cs=0xfbc;eip=0x0000d9; 	T(CBW);	// 27207 cbw ;~ 0FBC:00D9
cs=0xfbc;eip=0x0000da; 	T(MOV(bx, ax));	// 27208 mov     bx, ax ;~ 0FBC:00DA
cs=0xfbc;eip=0x0000dc; 	T(SHL(bx, 1));	// 27209 shl     bx, 1 ;~ 0FBC:00DC
cs=0xfbc;eip=0x0000de; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 27210 mov     bx, terrainrows[bx] ;~ 0FBC:00DE
cs=0xfbc;eip=0x0000e2; 	T(MOV(al, *(raddr(ss,bp+var_1a))));	// 27211 mov     al, [bp+var_1A] ;~ 0FBC:00E2
cs=0xfbc;eip=0x0000e5; 	T(CBW);	// 27212 cbw ;~ 0FBC:00E5
cs=0xfbc;eip=0x0000e6; 	T(ADD(bx, ax));	// 27213 add     bx, ax ;~ 0FBC:00E6
cs=0xfbc;eip=0x0000e8; 	T(LES(di, td14_elem_map_main));	// 27214 les     di, td14_elem_map_main ;~ 0FBC:00E8
cs=0xfbc;eip=0x0000ec; 	T(MOV(al, *(raddr(es,bx+di))));	// 27215 mov     al, es:[bx+di] ;~ 0FBC:00EC
cs=0xfbc;eip=0x0000ef; 	X(MOV(*(raddr(ss,bp+var_8)), al));	// 27216 mov     [bp+var_8], al ;~ 0FBC:00EF
cs=0xfbc;eip=0x0000f2; 	T(OR(al, al));	// 27217 or      al, al ;~ 0FBC:00F2
cs=0xfbc;eip=0x0000f4; 	J(JNZ(loc_1e304));	// 27218 jnz     short loc_1E304 ;~ 0FBC:00F4
cs=0xfbc;eip=0x0000f6; 	J(JMP(code_bto_blank));	// 27219 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:00F6
loc_1e29a:
	// 6034 
cs=0xfbc;eip=0x0000fa; 	T(MOV(si, 0x80));	// 27224 mov     si, 80h ; 'Ä' ;~ 0FBC:00FA
cs=0xfbc;eip=0x0000fd; 	J(JMP(loc_1e2af));	// 27225 jmp     short loc_1E2AF ;~ 0FBC:00FD
loc_1e2a0:
	// 6035 
cs=0xfbc;eip=0x000100; 	T(MOV(si, 0x0FD80));	// 27230 mov     si, 0FD80h ;~ 0FBC:0100
cs=0xfbc;eip=0x000103; 	J(JMP(loc_1e2af));	// 27231 jmp     short loc_1E2AF ;~ 0FBC:0103
loc_1e2a6:
	// 6036 
cs=0xfbc;eip=0x000106; 	T(MOV(si, 0x0FE80));	// 27236 mov     si, 0FE80h ;~ 0FBC:0106
cs=0xfbc;eip=0x000109; 	J(JMP(loc_1e2af));	// 27237 jmp     short loc_1E2AF ;~ 0FBC:0109
loc_1e2ac:
	// 6037 
cs=0xfbc;eip=0x00010c; 	T(MOV(si, 0x0FF80));	// 27242 mov     si, 0FF80h ;~ 0FBC:010C
loc_1e2af:
	// 6038 
cs=0xfbc;eip=0x00010f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 27246 mov     bx, [bp+arg_0] ;~ 0FBC:010F
cs=0xfbc;eip=0x000112; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 27247 mov     ax, [bx] ;~ 0FBC:0112
cs=0xfbc;eip=0x000114; 	T(SUB(ax, elem_xcenter));	// 27248 sub     ax, elem_xCenter ;~ 0FBC:0114
cs=0xfbc;eip=0x000118; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 27249 mov     [bp+var_2C], ax ;~ 0FBC:0118
cs=0xfbc;eip=0x00011b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 27250 mov     ax, [bx+4] ;~ 0FBC:011B
cs=0xfbc;eip=0x00011e; 	T(SUB(ax, elem_zcenter));	// 27251 sub     ax, elem_zCenter ;~ 0FBC:011E
cs=0xfbc;eip=0x000122; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 27252 mov     [bp+var_28], ax ;~ 0FBC:0122
cs=0xfbc;eip=0x000125; 	X(PUSH(ax));	// 27253 push    ax ;~ 0FBC:0125
cs=0xfbc;eip=0x000126; 	X(PUSH(si));	// 27254 push    si ;~ 0FBC:0126
cs=0xfbc;eip=0x000127; 	J(CALLF(sin_fast,0));	// 27255 call    sin_fast ;~ 0FBC:0127
cs=0xfbc;eip=0x00012c; 	T(ADD(sp, 2));	// 27256 add     sp, 2 ;~ 0FBC:012C
cs=0xfbc;eip=0x00012f; 	X(PUSH(ax));	// 27257 push    ax ;~ 0FBC:012F
cs=0xfbc;eip=0x000130; 	J(CALLF(multiply_and_scale,0));	// 27258 call    multiply_and_scale ;~ 0FBC:0130
cs=0xfbc;eip=0x000135; 	T(ADD(sp, 4));	// 27259 add     sp, 4 ;~ 0FBC:0135
cs=0xfbc;eip=0x000138; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2c))));	// 27260 push    [bp+var_2C] ;~ 0FBC:0138
cs=0xfbc;eip=0x00013b; 	X(PUSH(si));	// 27261 push    si ;~ 0FBC:013B
cs=0xfbc;eip=0x00013c; 	T(MOV(di, ax));	// 27262 mov     di, ax ;~ 0FBC:013C
cs=0xfbc;eip=0x00013e; 	J(CALLF(cos_fast,0));	// 27263 call    cos_fast ;~ 0FBC:013E
cs=0xfbc;eip=0x000143; 	T(ADD(sp, 2));	// 27264 add     sp, 2 ;~ 0FBC:0143
cs=0xfbc;eip=0x000146; 	X(PUSH(ax));	// 27265 push    ax ;~ 0FBC:0146
cs=0xfbc;eip=0x000147; 	J(CALLF(multiply_and_scale,0));	// 27266 call    multiply_and_scale ;~ 0FBC:0147
cs=0xfbc;eip=0x00014c; 	T(ADD(sp, 4));	// 27267 add     sp, 4 ;~ 0FBC:014C
cs=0xfbc;eip=0x00014f; 	T(ADD(ax, di));	// 27268 add     ax, di ;~ 0FBC:014F
cs=0xfbc;eip=0x000151; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 27269 mov     [bp+var_22], ax ;~ 0FBC:0151
cs=0xfbc;eip=0x000154; 	T(OR(ax, ax));	// 27270 or      ax, ax ;~ 0FBC:0154
cs=0xfbc;eip=0x000156; 	J(JL(loc_1e2fb));	// 27271 jl      short loc_1E2FB ;~ 0FBC:0156
cs=0xfbc;eip=0x000158; 	J(JMP(loc_1e276));	// 27272 jmp     loc_1E276 ;~ 0FBC:0158
loc_1e2fb:
	// 6039 
cs=0xfbc;eip=0x00015b; 	X(MOV(current_surf_type, water));	// 27277 mov     current_surf_type, water ;~ 0FBC:015B
cs=0xfbc;eip=0x000160; 	J(JMP(loc_1e276));	// 27278 jmp     loc_1E276 ;~ 0FBC:0160
loc_1e304:
	// 6040 
cs=0xfbc;eip=0x000164; 	T(CMP(*(raddr(ss,bp+var_8)), 0x0FD));	// 27283 cmp     [bp+var_8], 0FDh ; '˝' ; filler tests ;~ 0FBC:0164
cs=0xfbc;eip=0x000168; 	J(JNC(loc_1e30d));	// 27284 jnb     short loc_1E30D ;~ 0FBC:0168
cs=0xfbc;eip=0x00016a; 	J(JMP(loc_1e40c));	// 27285 jmp     loc_1E40C ;~ 0FBC:016A
loc_1e30d:
	// 6041 
cs=0xfbc;eip=0x00016d; 	T(MOV(al, *(raddr(ss,bp+var_8))));	// 27289 mov     al, [bp+var_8] ;~ 0FBC:016D
cs=0xfbc;eip=0x000170; 	T(SUB(ah, ah));	// 27290 sub     ah, ah ;~ 0FBC:0170
cs=0xfbc;eip=0x000172; 	T(CMP(ax, 0x0FD));	// 27291 cmp     ax, 0FDh ; '˝' ;~ 0FBC:0172
cs=0xfbc;eip=0x000175; 	J(JZ(loc_1e328));	// 27292 jz      short loc_1E328 ;~ 0FBC:0175
cs=0xfbc;eip=0x000177; 	T(CMP(ax, 0x0FE));	// 27293 cmp     ax, 0FEh ; '˛' ;~ 0FBC:0177
cs=0xfbc;eip=0x00017a; 	J(JZ(loc_1e390));	// 27294 jz      short loc_1E390 ;~ 0FBC:017A
cs=0xfbc;eip=0x00017c; 	T(CMP(ax, 0x0FF));	// 27295 cmp     ax, 0FFh ;~ 0FBC:017C
cs=0xfbc;eip=0x00017f; 	J(JNZ(loc_1e324));	// 27296 jnz     short loc_1E324 ;~ 0FBC:017F
cs=0xfbc;eip=0x000181; 	J(JMP(loc_1e3cc));	// 27297 jmp     loc_1E3CC ;~ 0FBC:0181
loc_1e324:
	// 6042 
cs=0xfbc;eip=0x000184; 	J(JMP(loc_1e464));	// 27301 jmp     loc_1E464 ;~ 0FBC:0184
loc_1e328:
	// 6043 
cs=0xfbc;eip=0x000188; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 27306 mov     al, [bp+var_20] ;~ 0FBC:0188
cs=0xfbc;eip=0x00018b; 	T(CBW);	// 27307 cbw ;~ 0FBC:018B
cs=0xfbc;eip=0x00018c; 	T(MOV(di, ax));	// 27308 mov     di, ax ;~ 0FBC:018C
cs=0xfbc;eip=0x00018e; 	T(SHL(di, 1));	// 27309 shl     di, 1 ;~ 0FBC:018E
cs=0xfbc;eip=0x000190; 	T(MOV(al, *(raddr(ss,bp+var_1a))));	// 27310 mov     al, [bp+var_1A] ;~ 0FBC:0190
cs=0xfbc;eip=0x000193; 	T(CBW);	// 27311 cbw ;~ 0FBC:0193
cs=0xfbc;eip=0x000194; 	T(MOV(bx, ax));	// 27312 mov     bx, ax ;~ 0FBC:0194
cs=0xfbc;eip=0x000196; 	T(ADD(bx, *(dw*)((((db*)terrainrows)+2)+di)));	// 27313 add     bx, (terrainrows+2)[di] ;~ 0FBC:0196
cs=0xfbc;eip=0x00019a; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 27314 add     bx, word ptr td14_elem_map_main ;~ 0FBC:019A
cs=0xfbc;eip=0x00019e; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 27315 mov     es, word ptr td14_elem_map_main+2 ;~ 0FBC:019E
cs=0xfbc;eip=0x0001a2; 	T(MOV(al, *(raddr(es,bx-1))));	// 27316 mov     al, es:[bx-1] ;~ 0FBC:01A2
cs=0xfbc;eip=0x0001a6; 	X(MOV(*(raddr(ss,bp+var_8)), al));	// 27317 mov     [bp+var_8], al ;~ 0FBC:01A6
cs=0xfbc;eip=0x0001a9; 	T(SUB(ah, ah));	// 27318 sub     ah, ah ;~ 0FBC:01A9
cs=0xfbc;eip=0x0001ab; 	T(MOV(bx, ax));	// 27319 mov     bx, ax ;~ 0FBC:01AB
cs=0xfbc;eip=0x0001ad; 	T(SHL(bx, 1));	// 27320 shl     bx, 1 ;~ 0FBC:01AD
cs=0xfbc;eip=0x0001af; 	T(ADD(bx, ax));	// 27321 add     bx, ax ;~ 0FBC:01AF
cs=0xfbc;eip=0x0001b1; 	T(SHL(bx, 1));	// 27322 shl     bx, 1 ;~ 0FBC:01B1
cs=0xfbc;eip=0x0001b3; 	T(ADD(bx, ax));	// 27323 add     bx, ax ;~ 0FBC:01B3
cs=0xfbc;eip=0x0001b5; 	T(SHL(bx, 1));	// 27324 shl     bx, 1 ;~ 0FBC:01B5
cs=0xfbc;eip=0x0001b7; 	T(TEST(*((&byte_3d813)+bx), 1));	// 27325 test    byte_3D813[bx], 1 ;~ 0FBC:01B7
cs=0xfbc;eip=0x0001bc; 	J(JZ(loc_1e365));	// 27326 jz      short loc_1E365 ;~ 0FBC:01BC
cs=0xfbc;eip=0x0001be; 	T(MOV(ax, *(dw*)((((db*)terrainpos)+2)+di)));	// 27327 mov     ax, (terrainpos+2)[di] ;~ 0FBC:01BE
loc_1e362:
	// 6044 
cs=0xfbc;eip=0x0001c2; 	X(MOV(elem_zcenter, ax));	// 27330 mov     elem_zCenter, ax ;~ 0FBC:01C2
loc_1e365:
	// 6045 
cs=0xfbc;eip=0x0001c5; 	T(MOV(al, *(raddr(ss,bp+var_8))));	// 27334 mov     al, [bp+var_8] ;~ 0FBC:01C5
cs=0xfbc;eip=0x0001c8; 	T(SUB(ah, ah));	// 27335 sub     ah, ah ;~ 0FBC:01C8
cs=0xfbc;eip=0x0001ca; 	T(MOV(bx, ax));	// 27336 mov     bx, ax ;~ 0FBC:01CA
cs=0xfbc;eip=0x0001cc; 	T(SHL(bx, 1));	// 27337 shl     bx, 1 ;~ 0FBC:01CC
cs=0xfbc;eip=0x0001ce; 	T(ADD(bx, ax));	// 27338 add     bx, ax ;~ 0FBC:01CE
cs=0xfbc;eip=0x0001d0; 	T(SHL(bx, 1));	// 27339 shl     bx, 1 ;~ 0FBC:01D0
cs=0xfbc;eip=0x0001d2; 	T(ADD(bx, ax));	// 27340 add     bx, ax ;~ 0FBC:01D2
cs=0xfbc;eip=0x0001d4; 	T(SHL(bx, 1));	// 27341 shl     bx, 1 ;~ 0FBC:01D4
cs=0xfbc;eip=0x0001d6; 	T(TEST(*((&byte_3d813)+bx), 2));	// 27342 test    byte_3D813[bx], 2 ;~ 0FBC:01D6
cs=0xfbc;eip=0x0001db; 	J(JNZ(loc_1e380));	// 27343 jnz     short loc_1E380 ;~ 0FBC:01DB
cs=0xfbc;eip=0x0001dd; 	J(JMP(loc_1e464));	// 27344 jmp     loc_1E464 ;~ 0FBC:01DD
loc_1e380:
	// 6046 
cs=0xfbc;eip=0x0001e0; 	T(MOV(al, *(raddr(ss,bp+var_1a))));	// 27348 mov     al, [bp+var_1A] ;~ 0FBC:01E0
cs=0xfbc;eip=0x0001e3; 	T(CBW);	// 27349 cbw ;~ 0FBC:01E3
cs=0xfbc;eip=0x0001e4; 	T(MOV(bx, ax));	// 27350 mov     bx, ax ;~ 0FBC:01E4
cs=0xfbc;eip=0x0001e6; 	T(SHL(bx, 1));	// 27351 shl     bx, 1 ;~ 0FBC:01E6
cs=0xfbc;eip=0x0001e8; 	T(MOV(ax, *(dw*)(((db*)trackpos2)+bx)));	// 27352 mov     ax, trackpos2[bx] ;~ 0FBC:01E8
cs=0xfbc;eip=0x0001ec; 	J(JMP(loc_1e461));	// 27353 jmp     loc_1E461 ;~ 0FBC:01EC
loc_1e390:
	// 6047 
cs=0xfbc;eip=0x0001f0; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 27358 mov     al, [bp+var_20] ;~ 0FBC:01F0
cs=0xfbc;eip=0x0001f3; 	T(CBW);	// 27359 cbw ;~ 0FBC:01F3
cs=0xfbc;eip=0x0001f4; 	T(MOV(di, ax));	// 27360 mov     di, ax ;~ 0FBC:01F4
cs=0xfbc;eip=0x0001f6; 	T(SHL(di, 1));	// 27361 shl     di, 1 ;~ 0FBC:01F6
cs=0xfbc;eip=0x0001f8; 	T(MOV(al, *(raddr(ss,bp+var_1a))));	// 27362 mov     al, [bp+var_1A] ;~ 0FBC:01F8
cs=0xfbc;eip=0x0001fb; 	T(CBW);	// 27363 cbw ;~ 0FBC:01FB
cs=0xfbc;eip=0x0001fc; 	T(MOV(bx, ax));	// 27364 mov     bx, ax ;~ 0FBC:01FC
cs=0xfbc;eip=0x0001fe; 	T(ADD(bx, *(dw*)((((db*)terrainrows)+2)+di)));	// 27365 add     bx, (terrainrows+2)[di] ;~ 0FBC:01FE
cs=0xfbc;eip=0x000202; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 27366 add     bx, word ptr td14_elem_map_main ;~ 0FBC:0202
cs=0xfbc;eip=0x000206; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 27367 mov     es, word ptr td14_elem_map_main+2 ;~ 0FBC:0206
cs=0xfbc;eip=0x00020a; 	T(MOV(al, *(raddr(es,bx))));	// 27368 mov     al, es:[bx] ;~ 0FBC:020A
cs=0xfbc;eip=0x00020d; 	X(MOV(*(raddr(ss,bp+var_8)), al));	// 27369 mov     [bp+var_8], al ;~ 0FBC:020D
cs=0xfbc;eip=0x000210; 	T(SUB(ah, ah));	// 27370 sub     ah, ah ;~ 0FBC:0210
cs=0xfbc;eip=0x000212; 	T(MOV(bx, ax));	// 27371 mov     bx, ax ;~ 0FBC:0212
cs=0xfbc;eip=0x000214; 	T(SHL(bx, 1));	// 27372 shl     bx, 1 ;~ 0FBC:0214
cs=0xfbc;eip=0x000216; 	T(ADD(bx, ax));	// 27373 add     bx, ax ;~ 0FBC:0216
cs=0xfbc;eip=0x000218; 	T(SHL(bx, 1));	// 27374 shl     bx, 1 ;~ 0FBC:0218
cs=0xfbc;eip=0x00021a; 	T(ADD(bx, ax));	// 27375 add     bx, ax ;~ 0FBC:021A
cs=0xfbc;eip=0x00021c; 	T(SHL(bx, 1));	// 27376 shl     bx, 1 ;~ 0FBC:021C
cs=0xfbc;eip=0x00021e; 	T(TEST(*((&byte_3d813)+bx), 1));	// 27377 test    byte_3D813[bx], 1 ;~ 0FBC:021E
cs=0xfbc;eip=0x000223; 	J(JZ(loc_1e43d));	// 27378 jz      short loc_1E43D ;~ 0FBC:0223
cs=0xfbc;eip=0x000225; 	T(MOV(ax, *(dw*)((((db*)terrainpos)+2)+di)));	// 27379 mov     ax, (terrainpos+2)[di] ;~ 0FBC:0225
cs=0xfbc;eip=0x000229; 	J(JMP(loc_1e43a));	// 27380 jmp     short loc_1E43A ;~ 0FBC:0229
loc_1e3cc:
	// 6048 
cs=0xfbc;eip=0x00022c; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 27385 mov     al, [bp+var_20] ;~ 0FBC:022C
cs=0xfbc;eip=0x00022f; 	T(CBW);	// 27386 cbw ;~ 0FBC:022F
cs=0xfbc;eip=0x000230; 	T(MOV(di, ax));	// 27387 mov     di, ax ;~ 0FBC:0230
cs=0xfbc;eip=0x000232; 	T(SHL(di, 1));	// 27388 shl     di, 1 ;~ 0FBC:0232
cs=0xfbc;eip=0x000234; 	T(MOV(al, *(raddr(ss,bp+var_1a))));	// 27389 mov     al, [bp+var_1A] ;~ 0FBC:0234
cs=0xfbc;eip=0x000237; 	T(CBW);	// 27390 cbw ;~ 0FBC:0237
cs=0xfbc;eip=0x000238; 	T(MOV(bx, ax));	// 27391 mov     bx, ax ;~ 0FBC:0238
cs=0xfbc;eip=0x00023a; 	T(ADD(bx, *(dw*)(((db*)terrainrows)+di)));	// 27392 add     bx, terrainrows[di] ;~ 0FBC:023A
cs=0xfbc;eip=0x00023e; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 27393 add     bx, word ptr td14_elem_map_main ;~ 0FBC:023E
cs=0xfbc;eip=0x000242; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 27394 mov     es, word ptr td14_elem_map_main+2 ;~ 0FBC:0242
cs=0xfbc;eip=0x000246; 	T(MOV(al, *(raddr(es,bx-1))));	// 27395 mov     al, es:[bx-1] ;~ 0FBC:0246
cs=0xfbc;eip=0x00024a; 	X(MOV(*(raddr(ss,bp+var_8)), al));	// 27396 mov     [bp+var_8], al ;~ 0FBC:024A
cs=0xfbc;eip=0x00024d; 	T(SUB(ah, ah));	// 27397 sub     ah, ah ;~ 0FBC:024D
cs=0xfbc;eip=0x00024f; 	T(MOV(bx, ax));	// 27398 mov     bx, ax ;~ 0FBC:024F
cs=0xfbc;eip=0x000251; 	T(SHL(bx, 1));	// 27399 shl     bx, 1 ;~ 0FBC:0251
cs=0xfbc;eip=0x000253; 	T(ADD(bx, ax));	// 27400 add     bx, ax ;~ 0FBC:0253
cs=0xfbc;eip=0x000255; 	T(SHL(bx, 1));	// 27401 shl     bx, 1 ;~ 0FBC:0255
cs=0xfbc;eip=0x000257; 	T(ADD(bx, ax));	// 27402 add     bx, ax ;~ 0FBC:0257
cs=0xfbc;eip=0x000259; 	T(SHL(bx, 1));	// 27403 shl     bx, 1 ;~ 0FBC:0259
cs=0xfbc;eip=0x00025b; 	T(TEST(*((&byte_3d813)+bx), 1));	// 27404 test    byte_3D813[bx], 1 ;~ 0FBC:025B
cs=0xfbc;eip=0x000260; 	J(JNZ(loc_1e405));	// 27405 jnz     short loc_1E405 ;~ 0FBC:0260
cs=0xfbc;eip=0x000262; 	J(JMP(loc_1e365));	// 27406 jmp     loc_1E365 ;~ 0FBC:0262
loc_1e405:
	// 6049 
cs=0xfbc;eip=0x000265; 	T(MOV(ax, *(dw*)(((db*)terrainpos)+di)));	// 27410 mov     ax, terrainpos[di] ;~ 0FBC:0265
cs=0xfbc;eip=0x000269; 	J(JMP(loc_1e362));	// 27411 jmp     loc_1E362 ;~ 0FBC:0269
loc_1e40c:
	// 6050 
cs=0xfbc;eip=0x00026c; 	T(MOV(al, *(raddr(ss,bp+var_8))));	// 27415 mov     al, [bp+var_8] ;~ 0FBC:026C
cs=0xfbc;eip=0x00026f; 	T(SUB(ah, ah));	// 27416 sub     ah, ah ;~ 0FBC:026F
cs=0xfbc;eip=0x000271; 	T(MOV(bx, ax));	// 27417 mov     bx, ax ;~ 0FBC:0271
cs=0xfbc;eip=0x000273; 	T(SHL(bx, 1));	// 27418 shl     bx, 1 ;~ 0FBC:0273
cs=0xfbc;eip=0x000275; 	T(ADD(bx, ax));	// 27419 add     bx, ax ;~ 0FBC:0275
cs=0xfbc;eip=0x000277; 	T(SHL(bx, 1));	// 27420 shl     bx, 1 ;~ 0FBC:0277
cs=0xfbc;eip=0x000279; 	T(ADD(bx, ax));	// 27421 add     bx, ax ;~ 0FBC:0279
cs=0xfbc;eip=0x00027b; 	T(SHL(bx, 1));	// 27422 shl     bx, 1 ;~ 0FBC:027B
cs=0xfbc;eip=0x00027d; 	T(MOV(al, *((&byte_3d813)+bx)));	// 27423 mov     al, byte_3D813[bx] ;~ 0FBC:027D
cs=0xfbc;eip=0x000281; 	X(MOV(*(db*)(raddr(ss,bp+var_3c)), al));	// 27424 mov     byte ptr [bp+var_3C], al ;~ 0FBC:0281
cs=0xfbc;eip=0x000284; 	T(CMP(al, ah));	// 27425 cmp     al, ah ;~ 0FBC:0284
cs=0xfbc;eip=0x000286; 	J(JZ(loc_1e464));	// 27426 jz      short loc_1E464 ;~ 0FBC:0286
cs=0xfbc;eip=0x000288; 	T(TEST(*(db*)(raddr(ss,bp+var_3c)), 1));	// 27427 test    byte ptr [bp+var_3C], 1 ;~ 0FBC:0288
cs=0xfbc;eip=0x00028c; 	J(JZ(loc_1e43d));	// 27428 jz      short loc_1E43D ;~ 0FBC:028C
cs=0xfbc;eip=0x00028e; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 27429 mov     al, [bp+var_20] ;~ 0FBC:028E
cs=0xfbc;eip=0x000291; 	T(CBW);	// 27430 cbw ;~ 0FBC:0291
cs=0xfbc;eip=0x000292; 	T(MOV(bx, ax));	// 27431 mov     bx, ax ;~ 0FBC:0292
cs=0xfbc;eip=0x000294; 	T(SHL(bx, 1));	// 27432 shl     bx, 1 ;~ 0FBC:0294
cs=0xfbc;eip=0x000296; 	T(MOV(ax, *(dw*)(((db*)terrainpos)+bx)));	// 27433 mov     ax, terrainpos[bx] ;~ 0FBC:0296
loc_1e43a:
	// 6051 
cs=0xfbc;eip=0x00029a; 	X(MOV(elem_zcenter, ax));	// 27436 mov     elem_zCenter, ax ;~ 0FBC:029A
loc_1e43d:
	// 6052 
cs=0xfbc;eip=0x00029d; 	T(MOV(al, *(raddr(ss,bp+var_8))));	// 27440 mov     al, [bp+var_8] ;~ 0FBC:029D
cs=0xfbc;eip=0x0002a0; 	T(SUB(ah, ah));	// 27441 sub     ah, ah ;~ 0FBC:02A0
cs=0xfbc;eip=0x0002a2; 	T(MOV(bx, ax));	// 27442 mov     bx, ax ;~ 0FBC:02A2
cs=0xfbc;eip=0x0002a4; 	T(SHL(bx, 1));	// 27443 shl     bx, 1 ;~ 0FBC:02A4
cs=0xfbc;eip=0x0002a6; 	T(ADD(bx, ax));	// 27444 add     bx, ax ;~ 0FBC:02A6
cs=0xfbc;eip=0x0002a8; 	T(SHL(bx, 1));	// 27445 shl     bx, 1 ;~ 0FBC:02A8
cs=0xfbc;eip=0x0002aa; 	T(ADD(bx, ax));	// 27446 add     bx, ax ;~ 0FBC:02AA
cs=0xfbc;eip=0x0002ac; 	T(SHL(bx, 1));	// 27447 shl     bx, 1 ;~ 0FBC:02AC
cs=0xfbc;eip=0x0002ae; 	T(TEST(*((&byte_3d813)+bx), 2));	// 27448 test    byte_3D813[bx], 2 ;~ 0FBC:02AE
cs=0xfbc;eip=0x0002b3; 	J(JZ(loc_1e464));	// 27449 jz      short loc_1E464 ;~ 0FBC:02B3
cs=0xfbc;eip=0x0002b5; 	T(MOV(al, *(raddr(ss,bp+var_1a))));	// 27450 mov     al, [bp+var_1A] ;~ 0FBC:02B5
cs=0xfbc;eip=0x0002b8; 	T(CBW);	// 27451 cbw ;~ 0FBC:02B8
cs=0xfbc;eip=0x0002b9; 	T(MOV(bx, ax));	// 27452 mov     bx, ax ;~ 0FBC:02B9
cs=0xfbc;eip=0x0002bb; 	T(SHL(bx, 1));	// 27453 shl     bx, 1 ;~ 0FBC:02BB
cs=0xfbc;eip=0x0002bd; 	T(MOV(ax, *(dw*)((((db*)trackpos2)+2)+bx)));	// 27454 mov     ax, (trackpos2+2)[bx] ;~ 0FBC:02BD
loc_1e461:
	// 6053 
cs=0xfbc;eip=0x0002c1; 	X(MOV(elem_xcenter, ax));	// 27457 mov     elem_xCenter, ax ;~ 0FBC:02C1
loc_1e464:
	// 6054 
cs=0xfbc;eip=0x0002c4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 27461 mov     bx, [bp+arg_0] ;~ 0FBC:02C4
cs=0xfbc;eip=0x0002c7; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 27462 mov     ax, [bx] ;~ 0FBC:02C7
cs=0xfbc;eip=0x0002c9; 	T(SUB(ax, elem_xcenter));	// 27463 sub     ax, elem_xCenter ;~ 0FBC:02C9
cs=0xfbc;eip=0x0002cd; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 27464 mov     [bp+var_2C], ax ;~ 0FBC:02CD
cs=0xfbc;eip=0x0002d0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 27465 mov     ax, [bx+4] ;~ 0FBC:02D0
cs=0xfbc;eip=0x0002d3; 	T(SUB(ax, elem_zcenter));	// 27466 sub     ax, elem_zCenter ;~ 0FBC:02D3
cs=0xfbc;eip=0x0002d7; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 27467 mov     [bp+var_28], ax ;~ 0FBC:02D7
cs=0xfbc;eip=0x0002da; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 27468 mov     bx, [bp+arg_2] ;~ 0FBC:02DA
cs=0xfbc;eip=0x0002dd; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 27469 mov     ax, [bx] ;~ 0FBC:02DD
cs=0xfbc;eip=0x0002df; 	T(SUB(ax, elem_xcenter));	// 27470 sub     ax, elem_xCenter ;~ 0FBC:02DF
cs=0xfbc;eip=0x0002e3; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 27471 mov     [bp+var_18], ax ;~ 0FBC:02E3
cs=0xfbc;eip=0x0002e6; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 27472 mov     ax, [bx+4] ;~ 0FBC:02E6
cs=0xfbc;eip=0x0002e9; 	T(SUB(ax, elem_zcenter));	// 27473 sub     ax, elem_zCenter ;~ 0FBC:02E9
cs=0xfbc;eip=0x0002ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 27474 mov     [bp+var_14], ax ;~ 0FBC:02ED
cs=0xfbc;eip=0x0002f0; 	T(CMP(*(raddr(ss,bp+var_8)), 0));	// 27475 cmp     [bp+var_8], 0 ;~ 0FBC:02F0
cs=0xfbc;eip=0x0002f4; 	J(JZ(loc_1e4b6));	// 27476 jz      short loc_1E4B6 ;~ 0FBC:02F4
cs=0xfbc;eip=0x0002f6; 	T(CMP(*(raddr(ss,bp+var_34)), 7));	// 27477 cmp     [bp+var_34], 7 ;~ 0FBC:02F6
cs=0xfbc;eip=0x0002fa; 	J(JC(loc_1e4b6));	// 27478 jb      short loc_1E4B6 ;~ 0FBC:02FA
cs=0xfbc;eip=0x0002fc; 	T(CMP(*(raddr(ss,bp+var_34)), 0x0B));	// 27479 cmp     [bp+var_34], 0Bh ;~ 0FBC:02FC
cs=0xfbc;eip=0x000300; 	J(JNC(loc_1e4b6));	// 27480 jnb     short loc_1E4B6 ;~ 0FBC:0300
cs=0xfbc;eip=0x000302; 	T(MOV(al, *(raddr(ss,bp+var_8))));	// 27481 mov     al, [bp+var_8] ;~ 0FBC:0302
cs=0xfbc;eip=0x000305; 	T(SUB(ah, ah));	// 27482 sub     ah, ah ;~ 0FBC:0305
cs=0xfbc;eip=0x000307; 	X(PUSH(ax));	// 27483 push    ax ;~ 0FBC:0307
cs=0xfbc;eip=0x000308; 	T(MOV(al, *(raddr(ss,bp+var_34))));	// 27484 mov     al, [bp+var_34] ;~ 0FBC:0308
cs=0xfbc;eip=0x00030b; 	X(PUSH(ax));	// 27485 push    ax ;~ 0FBC:030B
cs=0xfbc;eip=0x00030c; 	X(PUSH(cs));	// 27486 push    cs ;~ 0FBC:030C
cs=0xfbc;eip=0x00030d; 	J(CALL(subst_hillroad_track,0));	// 27487 call    near ptr subst_hillroad_track ;~ 0FBC:030D
cs=0xfbc;eip=0x000310; 	T(ADD(sp, 4));	// 27488 add     sp, 4 ;~ 0FBC:0310
cs=0xfbc;eip=0x000313; 	X(MOV(*(raddr(ss,bp+var_8)), al));	// 27489 mov     [bp+var_8], al ;~ 0FBC:0313
loc_1e4b6:
	// 6055 
cs=0xfbc;eip=0x000316; 	T(MOV(al, *(raddr(ss,bp+var_8))));	// 27493 mov     al, [bp+var_8] ;~ 0FBC:0316
cs=0xfbc;eip=0x000319; 	T(SUB(ah, ah));	// 27494 sub     ah, ah ;~ 0FBC:0319
cs=0xfbc;eip=0x00031b; 	T(MOV(cx, ax));	// 27495 mov     cx, ax ;~ 0FBC:031B
cs=0xfbc;eip=0x00031d; 	T(SHL(ax, 1));	// 27496 shl     ax, 1 ;~ 0FBC:031D
cs=0xfbc;eip=0x00031f; 	T(ADD(ax, cx));	// 27497 add     ax, cx ;~ 0FBC:031F
cs=0xfbc;eip=0x000321; 	T(SHL(ax, 1));	// 27498 shl     ax, 1 ;~ 0FBC:0321
cs=0xfbc;eip=0x000323; 	T(ADD(ax, cx));	// 27499 add     ax, cx ;~ 0FBC:0323
cs=0xfbc;eip=0x000325; 	T(SHL(ax, 1));	// 27500 shl     ax, 1 ;~ 0FBC:0325
cs=0xfbc;eip=0x000327; 	T(ADD(ax, offset(dseg,trkobjectlist)));	// 27501 add     ax, offset trkObjectList ;~ 0FBC:0327
cs=0xfbc;eip=0x00032a; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), ax));	// 27502 mov     [bp+var_3A], ax ;~ 0FBC:032A
cs=0xfbc;eip=0x00032d; 	T(MOV(bx, ax));	// 27503 mov     bx, ax          ; loading physical model indices! ;~ 0FBC:032D
cs=0xfbc;eip=0x00032f; 	T(MOV(al, *(raddr(ds,bx+0x0C))));	// 27504 mov     al, [bx+0Ch] ;~ 0FBC:032F
cs=0xfbc;eip=0x000332; 	T(CBW);	// 27505 cbw ;~ 0FBC:0332
cs=0xfbc;eip=0x000333; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 27506 mov     [bp+var_24], ax ;~ 0FBC:0333
cs=0xfbc;eip=0x000336; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 27507 mov     ax, [bx+2] ;~ 0FBC:0336
cs=0xfbc;eip=0x000339; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 27508 mov     [bp+var_10], ax ;~ 0FBC:0339
cs=0xfbc;eip=0x00033c; 	T(OR(ax, ax));	// 27509 or      ax, ax ;~ 0FBC:033C
cs=0xfbc;eip=0x00033e; 	J(JZ(loc_1e4ef));	// 27510 jz      short loc_1E4EF ;~ 0FBC:033E
cs=0xfbc;eip=0x000340; 	T(CMP(ax, 0x100));	// 27511 cmp     ax, 100h ;~ 0FBC:0340
cs=0xfbc;eip=0x000343; 	J(JZ(loc_1e562));	// 27512 jz      short loc_1E562 ;~ 0FBC:0343
cs=0xfbc;eip=0x000345; 	T(CMP(ax, 0x200));	// 27513 cmp     ax, 200h ;~ 0FBC:0345
cs=0xfbc;eip=0x000348; 	J(JZ(loc_1e540));	// 27514 jz      short loc_1E540 ;~ 0FBC:0348
cs=0xfbc;eip=0x00034a; 	T(CMP(ax, 0x300));	// 27515 cmp     ax, 300h ;~ 0FBC:034A
cs=0xfbc;eip=0x00034d; 	J(JZ(loc_1e516));	// 27516 jz      short loc_1E516 ;~ 0FBC:034D
loc_1e4ef:
	// 6056 
cs=0xfbc;eip=0x00034f; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), 0));	// 27520 mov     [bp+var_36], 0 ;~ 0FBC:034F
cs=0xfbc;eip=0x000354; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3a))));	// 27521 mov     bx, [bp+var_3A] ;~ 0FBC:0354
cs=0xfbc;eip=0x000357; 	T(MOV(al, *(raddr(ds,bx+9))));	// 27522 mov     al, [bx+9] ;~ 0FBC:0357
cs=0xfbc;eip=0x00035a; 	T(INC(al));	// 27523 inc     al ;~ 0FBC:035A
cs=0xfbc;eip=0x00035c; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 27524 mov     [bp+var_12], al ;~ 0FBC:035C
cs=0xfbc;eip=0x00035f; 	T(CMP(al, 1));	// 27525 cmp     al, 1 ;~ 0FBC:035F
cs=0xfbc;eip=0x000361; 	J(JGE(loc_1e507));	// 27526 jge     short loc_1E507 ;~ 0FBC:0361
cs=0xfbc;eip=0x000363; 	X(MOV(*(raddr(ss,bp+var_12)), 1));	// 27527 mov     [bp+var_12], 1 ;~ 0FBC:0363
loc_1e507:
	// 6057 
cs=0xfbc;eip=0x000367; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 27530 cmp     [bp+var_2C], 0 ;~ 0FBC:0367
cs=0xfbc;eip=0x00036b; 	J(JGE(loc_1e58a));	// 27531 jge     short loc_1E58A ;~ 0FBC:036B
cs=0xfbc;eip=0x00036d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27532 mov     ax, [bp+var_2C] ;~ 0FBC:036D
cs=0xfbc;eip=0x000370; 	T(NEG(ax));	// 27533 neg     ax ;~ 0FBC:0370
cs=0xfbc;eip=0x000372; 	J(JMP(loc_1e58d));	// 27534 jmp     short loc_1E58D ;~ 0FBC:0372
loc_1e516:
	// 6058 
cs=0xfbc;eip=0x000376; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27540 mov     ax, [bp+var_2C] ;~ 0FBC:0376
cs=0xfbc;eip=0x000379; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 27541 mov     [bp+var_1E], ax ;~ 0FBC:0379
cs=0xfbc;eip=0x00037c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27542 mov     ax, [bp+var_28] ;~ 0FBC:037C
cs=0xfbc;eip=0x00037f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 27543 mov     [bp+var_2C], ax ;~ 0FBC:037F
cs=0xfbc;eip=0x000382; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 27544 mov     ax, [bp+var_1E] ;~ 0FBC:0382
cs=0xfbc;eip=0x000385; 	T(NEG(ax));	// 27545 neg     ax ;~ 0FBC:0385
cs=0xfbc;eip=0x000387; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 27546 mov     [bp+var_28], ax ;~ 0FBC:0387
cs=0xfbc;eip=0x00038a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 27547 mov     ax, [bp+var_18] ;~ 0FBC:038A
cs=0xfbc;eip=0x00038d; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 27548 mov     [bp+var_1E], ax ;~ 0FBC:038D
cs=0xfbc;eip=0x000390; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 27549 mov     ax, [bp+var_14] ;~ 0FBC:0390
cs=0xfbc;eip=0x000393; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 27550 mov     [bp+var_18], ax ;~ 0FBC:0393
cs=0xfbc;eip=0x000396; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 27551 mov     ax, [bp+var_1E] ;~ 0FBC:0396
cs=0xfbc;eip=0x000399; 	T(NEG(ax));	// 27552 neg     ax ;~ 0FBC:0399
loc_1e53b:
	// 6059 
cs=0xfbc;eip=0x00039b; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 27555 mov     [bp+var_14], ax ;~ 0FBC:039B
cs=0xfbc;eip=0x00039e; 	J(JMP(loc_1e4ef));	// 27556 jmp     short loc_1E4EF ;~ 0FBC:039E
loc_1e540:
	// 6060 
cs=0xfbc;eip=0x0003a0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27560 mov     ax, [bp+var_28] ;~ 0FBC:03A0
cs=0xfbc;eip=0x0003a3; 	T(NEG(ax));	// 27561 neg     ax ;~ 0FBC:03A3
cs=0xfbc;eip=0x0003a5; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 27562 mov     [bp+var_28], ax ;~ 0FBC:03A5
cs=0xfbc;eip=0x0003a8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27563 mov     ax, [bp+var_2C] ;~ 0FBC:03A8
cs=0xfbc;eip=0x0003ab; 	T(NEG(ax));	// 27564 neg     ax ;~ 0FBC:03AB
cs=0xfbc;eip=0x0003ad; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 27565 mov     [bp+var_2C], ax ;~ 0FBC:03AD
cs=0xfbc;eip=0x0003b0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 27566 mov     ax, [bp+var_14] ;~ 0FBC:03B0
cs=0xfbc;eip=0x0003b3; 	T(NEG(ax));	// 27567 neg     ax ;~ 0FBC:03B3
cs=0xfbc;eip=0x0003b5; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 27568 mov     [bp+var_14], ax ;~ 0FBC:03B5
cs=0xfbc;eip=0x0003b8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 27569 mov     ax, [bp+var_18] ;~ 0FBC:03B8
cs=0xfbc;eip=0x0003bb; 	T(NEG(ax));	// 27570 neg     ax ;~ 0FBC:03BB
cs=0xfbc;eip=0x0003bd; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 27571 mov     [bp+var_18], ax ;~ 0FBC:03BD
cs=0xfbc;eip=0x0003c0; 	J(JMP(loc_1e4ef));	// 27572 jmp     short loc_1E4EF ;~ 0FBC:03C0
loc_1e562:
	// 6061 
cs=0xfbc;eip=0x0003c2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27576 mov     ax, [bp+var_2C] ;~ 0FBC:03C2
cs=0xfbc;eip=0x0003c5; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 27577 mov     [bp+var_1E], ax ;~ 0FBC:03C5
cs=0xfbc;eip=0x0003c8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27578 mov     ax, [bp+var_28] ;~ 0FBC:03C8
cs=0xfbc;eip=0x0003cb; 	T(NEG(ax));	// 27579 neg     ax ;~ 0FBC:03CB
cs=0xfbc;eip=0x0003cd; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 27580 mov     [bp+var_2C], ax ;~ 0FBC:03CD
cs=0xfbc;eip=0x0003d0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 27581 mov     ax, [bp+var_1E] ;~ 0FBC:03D0
cs=0xfbc;eip=0x0003d3; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 27582 mov     [bp+var_28], ax ;~ 0FBC:03D3
cs=0xfbc;eip=0x0003d6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 27583 mov     ax, [bp+var_18] ;~ 0FBC:03D6
cs=0xfbc;eip=0x0003d9; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 27584 mov     [bp+var_1E], ax ;~ 0FBC:03D9
cs=0xfbc;eip=0x0003dc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 27585 mov     ax, [bp+var_14] ;~ 0FBC:03DC
cs=0xfbc;eip=0x0003df; 	T(NEG(ax));	// 27586 neg     ax ;~ 0FBC:03DF
cs=0xfbc;eip=0x0003e1; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 27587 mov     [bp+var_18], ax ;~ 0FBC:03E1
cs=0xfbc;eip=0x0003e4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 27588 mov     ax, [bp+var_1E] ;~ 0FBC:03E4
cs=0xfbc;eip=0x0003e7; 	J(JMP(loc_1e53b));	// 27589 jmp     short loc_1E53B ;~ 0FBC:03E7
loc_1e58a:
	// 6062 
cs=0xfbc;eip=0x0003ea; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27594 mov     ax, [bp+var_2C] ;~ 0FBC:03EA
loc_1e58d:
	// 6063 
cs=0xfbc;eip=0x0003ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_32)), ax));	// 27597 mov     [bp+var_32], ax ;~ 0FBC:03ED
cs=0xfbc;eip=0x0003f0; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0));	// 27598 cmp     [bp+var_28], 0 ;~ 0FBC:03F0
cs=0xfbc;eip=0x0003f4; 	J(JGE(loc_1e59e));	// 27599 jge     short loc_1E59E ;~ 0FBC:03F4
cs=0xfbc;eip=0x0003f6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27600 mov     ax, [bp+var_28] ;~ 0FBC:03F6
cs=0xfbc;eip=0x0003f9; 	T(NEG(ax));	// 27601 neg     ax ;~ 0FBC:03F9
cs=0xfbc;eip=0x0003fb; 	J(JMP(loc_1e5a1));	// 27602 jmp     short loc_1E5A1 ;~ 0FBC:03FB
loc_1e59e:
	// 6064 
cs=0xfbc;eip=0x0003fe; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27607 mov     ax, [bp+var_28] ;~ 0FBC:03FE
loc_1e5a1:
	// 6065 
cs=0xfbc;eip=0x000401; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 27610 mov     [bp+var_2E], ax ;~ 0FBC:0401
cs=0xfbc;eip=0x000404; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_24))));	// 27611 mov     ax, [bp+var_24] ;~ 0FBC:0404
cs=0xfbc;eip=0x000407; 	T(CMP(ax, 0x4A));	// 27612 cmp     ax, 4Ah         ; switch 75 cases ;~ 0FBC:0407
cs=0xfbc;eip=0x00040a; 	J(JBE(code_bto_root));	// 27613 jbe     short code_bto_root ;~ 0FBC:040A
cs=0xfbc;eip=0x00040c; 	J(JMP(code_bto_blank));	// 27614 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:040C
code_bto_root:
	// 6066 
cs=0xfbc;eip=0x00040f; 	T(ADD(ax, ax));	// 27618 add     ax, ax ;~ 0FBC:040F
cs=0xfbc;eip=0x000411; 	T(XCHG(ax, bx));	// 27619 xchg    ax, bx ;~ 0FBC:0411
cs=0xfbc;eip=0x000412; __disp=*(dw*)(raddr(cs,m2c::kbto_branches+bx));
	J(return __dispatch_call(__disp, _state););	// 27620 jmp     word ptr cs:bto_branches[bx] ; switch jump ;~ 0FBC:0412
code_bto_sfline:
	// 6067 
cs=0xfbc;eip=0x000418; 	T(CMP(byte_44889, 0));	// 27626 cmp     byte_44889, 0   ; jumptable 0001E5B2 case 0 ;~ 0FBC:0418
cs=0xfbc;eip=0x00041d; 	J(JNZ(code_bto_road));	// 27627 jnz     short code_bto_road ; jumptable 0001E5B2 case 1 ;~ 0FBC:041D
cs=0xfbc;eip=0x00041f; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 27628 cmp     [bp+var_2C], 0 ;~ 0FBC:041F
cs=0xfbc;eip=0x000423; 	J(JLE(code_bto_road));	// 27629 jle     short code_bto_road ; jumptable 0001E5B2 case 1 ;~ 0FBC:0423
cs=0xfbc;eip=0x000425; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x0FE84));	// 27630 cmp     [bp+var_28], 0FE84h ;~ 0FBC:0425
cs=0xfbc;eip=0x00042a; 	J(JGE(loc_1e5d4));	// 27631 jge     short loc_1E5D4 ;~ 0FBC:042A
cs=0xfbc;eip=0x00042c; 	X(MOV(planindex, 0x83));	// 27632 mov     planindex, 83h ; 'É' ;~ 0FBC:042C
cs=0xfbc;eip=0x000432; 	J(JMP(code_bto_road));	// 27633 jmp     short code_bto_road ; jumptable 0001E5B2 case 1 ;~ 0FBC:0432
loc_1e5d4:
	// 6068 
cs=0xfbc;eip=0x000434; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x0FED4));	// 27637 cmp     [bp+var_28], 0FED4h ;~ 0FBC:0434
cs=0xfbc;eip=0x000439; 	J(JGE(code_bto_road));	// 27638 jge     short code_bto_road ; jumptable 0001E5B2 case 1 ;~ 0FBC:0439
cs=0xfbc;eip=0x00043b; 	X(MOV(planindex, 0x84));	// 27639 mov     planindex, 84h ; 'Ñ' ;~ 0FBC:043B
code_bto_road:
	// 6069 
cs=0xfbc;eip=0x000441; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 27643 cmp     [bp+var_32], 78h ; 'x' ; jumptable 0001E5B2 case 1 ;~ 0FBC:0441
loc_1e5e5:
	// 6070 
cs=0xfbc;eip=0x000445; 	J(JL(code_set_pavement));	// 27647 jl      short code_set_pavement ;~ 0FBC:0445
cs=0xfbc;eip=0x000447; 	J(JMP(code_bto_blank));	// 27648 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0447
code_set_pavement:
	// 6071 
cs=0xfbc;eip=0x00044a; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 27653 mov     al, [bp+var_12] ;~ 0FBC:044A
cs=0xfbc;eip=0x00044d; 	X(MOV(current_surf_type, al));	// 27654 mov     current_surf_type, al ;~ 0FBC:044D
cs=0xfbc;eip=0x000450; 	J(JMP(code_bto_blank));	// 27655 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0450
code_bto_crossroad:
	// 6072 
cs=0xfbc;eip=0x000454; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 27661 cmp     [bp+var_32], 78h ; 'x' ; jumptable 0001E5B2 case 12 ;~ 0FBC:0454
cs=0xfbc;eip=0x000458; 	J(JL(code_set_pavement));	// 27662 jl      short code_set_pavement ;~ 0FBC:0458
cs=0xfbc;eip=0x00045a; 	T(CMP(*(dw*)(raddr(ss,bp+var_2e)), 0x78));	// 27663 cmp     [bp+var_2E], 78h ; 'x' ;~ 0FBC:045A
cs=0xfbc;eip=0x00045e; 	J(JMP(loc_1e5e5));	// 27664 jmp     short loc_1E5E5 ;~ 0FBC:045E
code_bto_chicanelr:
	// 6073 
cs=0xfbc;eip=0x000460; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27669 mov     ax, [bp+var_2C] ; jumptable 0001E5B2 case 5 ;~ 0FBC:0460
cs=0xfbc;eip=0x000463; 	T(NEG(ax));	// 27670 neg     ax ;~ 0FBC:0463
cs=0xfbc;eip=0x000465; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 27671 mov     [bp+var_2C], ax ;~ 0FBC:0465
code_bto_chicanerl:
	// 6074 
cs=0xfbc;eip=0x000468; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 27675 mov     al, [bp+var_12] ; jumptable 0001E5B2 case 4 ;~ 0FBC:0468
cs=0xfbc;eip=0x00046b; 	X(MOV(current_surf_type, al));	// 27676 mov     current_surf_type, al ;~ 0FBC:046B
cs=0xfbc;eip=0x00046e; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 27677 cmp     [bp+var_2C], 0 ;~ 0FBC:046E
cs=0xfbc;eip=0x000472; 	J(JLE(code_bto_lcorner));	// 27678 jle     short code_bto_lCorner ; jumptable 0001E5B2 case 3 ;~ 0FBC:0472
cs=0xfbc;eip=0x000474; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27679 mov     ax, [bp+var_28] ;~ 0FBC:0474
cs=0xfbc;eip=0x000477; 	T(NEG(ax));	// 27680 neg     ax ;~ 0FBC:0477
cs=0xfbc;eip=0x000479; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 27681 mov     [bp+var_28], ax ;~ 0FBC:0479
cs=0xfbc;eip=0x00047c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27682 mov     ax, [bp+var_2C] ;~ 0FBC:047C
cs=0xfbc;eip=0x00047f; 	T(NEG(ax));	// 27683 neg     ax ;~ 0FBC:047F
cs=0xfbc;eip=0x000481; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 27684 mov     [bp+var_2C], ax ;~ 0FBC:0481
code_bto_lcorner:
	// 6075 
cs=0xfbc;eip=0x000484; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27688 mov     ax, [bp+var_28] ; jumptable 0001E5B2 case 3 ;~ 0FBC:0484
cs=0xfbc;eip=0x000487; 	T(ADD(ah, 4));	// 27689 add     ah, 4 ;~ 0FBC:0487
cs=0xfbc;eip=0x00048a; 	X(PUSH(ax));	// 27690 push    ax ;~ 0FBC:048A
cs=0xfbc;eip=0x00048b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27691 mov     ax, [bp+var_2C] ;~ 0FBC:048B
cs=0xfbc;eip=0x00048e; 	T(ADD(ah, 4));	// 27692 add     ah, 4 ;~ 0FBC:048E
code_lcorner_radius:
	// 6076 
cs=0xfbc;eip=0x000491; 	X(PUSH(ax));	// 27695 push    ax ;~ 0FBC:0491
cs=0xfbc;eip=0x000492; 	J(CALLF(polarradius2d,0));	// 27696 call    polarRadius2D ;~ 0FBC:0492
cs=0xfbc;eip=0x000497; 	T(ADD(sp, 4));	// 27697 add     sp, 4 ;~ 0FBC:0497
cs=0xfbc;eip=0x00049a; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 27698 mov     [bp+var_A], ax ;~ 0FBC:049A
cs=0xfbc;eip=0x00049d; 	T(CMP(ax, 0x588));	// 27699 cmp     ax, 588h ;~ 0FBC:049D
cs=0xfbc;eip=0x0004a0; 	J(JG(loc_1e645));	// 27700 jg      short loc_1E645 ;~ 0FBC:04A0
cs=0xfbc;eip=0x0004a2; 	J(JMP(code_bto_blank));	// 27701 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:04A2
loc_1e645:
	// 6077 
cs=0xfbc;eip=0x0004a5; 	T(CMP(ax, 0x678));	// 27705 cmp     ax, 678h ;~ 0FBC:04A5
cs=0xfbc;eip=0x0004a8; 	J(JMP(loc_1e5e5));	// 27706 jmp     short loc_1E5E5 ;~ 0FBC:04A8
code_bto_ssplita:
	// 6078 
cs=0xfbc;eip=0x0004aa; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 27711 cmp     [bp+var_32], 78h ; 'x' ; jumptable 0001E5B2 case 6 ;~ 0FBC:04AA
cs=0xfbc;eip=0x0004ae; 	J(JL(code_set_pavement));	// 27712 jl      short code_set_pavement ;~ 0FBC:04AE
code_bto_scorner:
	// 6079 
cs=0xfbc;eip=0x0004b0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27716 mov     ax, [bp+var_28] ; jumptable 0001E5B2 case 2 ;~ 0FBC:04B0
cs=0xfbc;eip=0x0004b3; 	T(ADD(ah, 2));	// 27717 add     ah, 2 ;~ 0FBC:04B3
cs=0xfbc;eip=0x0004b6; 	X(PUSH(ax));	// 27718 push    ax ;~ 0FBC:04B6
cs=0xfbc;eip=0x0004b7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27719 mov     ax, [bp+var_2C] ;~ 0FBC:04B7
cs=0xfbc;eip=0x0004ba; 	T(ADD(ah, 2));	// 27720 add     ah, 2 ;~ 0FBC:04BA
code_scorner_radius:
	// 6080 
cs=0xfbc;eip=0x0004bd; 	X(PUSH(ax));	// 27723 push    ax ;~ 0FBC:04BD
cs=0xfbc;eip=0x0004be; 	J(CALLF(polarradius2d,0));	// 27724 call    polarRadius2D ;~ 0FBC:04BE
cs=0xfbc;eip=0x0004c3; 	T(ADD(sp, 4));	// 27725 add     sp, 4 ;~ 0FBC:04C3
cs=0xfbc;eip=0x0004c6; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 27726 mov     [bp+var_A], ax ;~ 0FBC:04C6
cs=0xfbc;eip=0x0004c9; 	T(CMP(ax, 0x188));	// 27727 cmp     ax, 188h ;~ 0FBC:04C9
cs=0xfbc;eip=0x0004cc; 	J(JG(loc_1e671));	// 27728 jg      short loc_1E671 ;~ 0FBC:04CC
cs=0xfbc;eip=0x0004ce; 	J(JMP(code_bto_blank));	// 27729 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:04CE
loc_1e671:
	// 6081 
cs=0xfbc;eip=0x0004d1; 	T(CMP(ax, 0x278));	// 27733 cmp     ax, 278h ;~ 0FBC:04D1
cs=0xfbc;eip=0x0004d4; 	J(JMP(loc_1e5e5));	// 27734 jmp     loc_1E5E5 ;~ 0FBC:04D4
code_bto_ssplitb:
	// 6082 
cs=0xfbc;eip=0x0004d8; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 27740 cmp     [bp+var_32], 78h ; 'x' ; jumptable 0001E5B2 case 7 ;~ 0FBC:04D8
cs=0xfbc;eip=0x0004dc; 	J(JGE(loc_1e681));	// 27741 jge     short loc_1E681 ;~ 0FBC:04DC
cs=0xfbc;eip=0x0004de; 	J(JMP(code_set_pavement));	// 27742 jmp     code_set_pavement ;~ 0FBC:04DE
loc_1e681:
	// 6083 
cs=0xfbc;eip=0x0004e1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27746 mov     ax, [bp+var_28] ;~ 0FBC:04E1
cs=0xfbc;eip=0x0004e4; 	T(ADD(ah, 2));	// 27747 add     ah, 2 ;~ 0FBC:04E4
cs=0xfbc;eip=0x0004e7; 	X(PUSH(ax));	// 27748 push    ax ;~ 0FBC:04E7
cs=0xfbc;eip=0x0004e8; 	T(MOV(ax, 0x200));	// 27749 mov     ax, 200h ;~ 0FBC:04E8
cs=0xfbc;eip=0x0004eb; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27750 sub     ax, [bp+var_2C] ;~ 0FBC:04EB
cs=0xfbc;eip=0x0004ee; 	J(JMP(code_scorner_radius));	// 27751 jmp     short code_sCorner_radius ;~ 0FBC:04EE
code_bto_lsplita:
	// 6084 
cs=0xfbc;eip=0x0004f0; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x188));	// 27756 cmp     [bp+var_2C], 188h ; jumptable 0001E5B2 case 8 ;~ 0FBC:04F0
cs=0xfbc;eip=0x0004f5; 	J(JL(code_bto_lcorner));	// 27757 jl      short code_bto_lCorner ; jumptable 0001E5B2 case 3 ;~ 0FBC:04F5
cs=0xfbc;eip=0x0004f7; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x278));	// 27758 cmp     [bp+var_2C], 278h ;~ 0FBC:04F7
cs=0xfbc;eip=0x0004fc; 	J(JG(loc_1e6a1));	// 27759 jg      short loc_1E6A1 ;~ 0FBC:04FC
cs=0xfbc;eip=0x0004fe; 	J(JMP(code_set_pavement));	// 27760 jmp     code_set_pavement ;~ 0FBC:04FE
loc_1e6a1:
	// 6085 
cs=0xfbc;eip=0x000501; 	J(JMP(code_bto_lcorner));	// 27764 jmp     short code_bto_lCorner ; jumptable 0001E5B2 case 3 ;~ 0FBC:0501
code_bto_lsplitb:
	// 6086 
cs=0xfbc;eip=0x000504; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FD88));	// 27770 cmp     [bp+var_2C], 0FD88h ; jumptable 0001E5B2 case 9 ;~ 0FBC:0504
cs=0xfbc;eip=0x000509; 	J(JL(loc_1e6b5));	// 27771 jl      short loc_1E6B5 ;~ 0FBC:0509
cs=0xfbc;eip=0x00050b; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FE78));	// 27772 cmp     [bp+var_2C], 0FE78h ;~ 0FBC:050B
cs=0xfbc;eip=0x000510; 	J(JG(loc_1e6b5));	// 27773 jg      short loc_1E6B5 ;~ 0FBC:0510
cs=0xfbc;eip=0x000512; 	J(JMP(code_set_pavement));	// 27774 jmp     code_set_pavement ;~ 0FBC:0512
loc_1e6b5:
	// 6087 
cs=0xfbc;eip=0x000515; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27779 mov     ax, [bp+var_28] ;~ 0FBC:0515
cs=0xfbc;eip=0x000518; 	T(ADD(ah, 4));	// 27780 add     ah, 4 ;~ 0FBC:0518
cs=0xfbc;eip=0x00051b; 	X(PUSH(ax));	// 27781 push    ax ;~ 0FBC:051B
cs=0xfbc;eip=0x00051c; 	T(MOV(ax, 0x400));	// 27782 mov     ax, 400h ;~ 0FBC:051C
cs=0xfbc;eip=0x00051f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27783 sub     ax, [bp+var_2C] ;~ 0FBC:051F
cs=0xfbc;eip=0x000522; 	J(JMP(code_lcorner_radius));	// 27784 jmp     code_lCorner_radius ;~ 0FBC:0522
code_bto_highentrance:
	// 6088 
cs=0xfbc;eip=0x000526; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 27790 cmp     [bp+var_2C], 0  ; jumptable 0001E5B2 case 10 ;~ 0FBC:0526
cs=0xfbc;eip=0x00052a; 	J(JGE(loc_1e6d4));	// 27791 jge     short loc_1E6D4 ;~ 0FBC:052A
cs=0xfbc;eip=0x00052c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27792 mov     ax, [bp+var_2C] ;~ 0FBC:052C
cs=0xfbc;eip=0x00052f; 	T(NEG(ax));	// 27793 neg     ax ;~ 0FBC:052F
cs=0xfbc;eip=0x000531; 	J(JMP(loc_1e6d7));	// 27794 jmp     short loc_1E6D7 ;~ 0FBC:0531
loc_1e6d4:
	// 6089 
cs=0xfbc;eip=0x000534; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27799 mov     ax, [bp+var_2C] ;~ 0FBC:0534
loc_1e6d7:
	// 6090 
cs=0xfbc;eip=0x000537; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 27802 mov     [bp+var_1C], ax ;~ 0FBC:0537
cs=0xfbc;eip=0x00053a; 	T(SUB(si, si));	// 27803 sub     si, si ;~ 0FBC:053A
cs=0xfbc;eip=0x00053c; 	J(JMP(loc_1e6df));	// 27804 jmp     short loc_1E6DF ;~ 0FBC:053C
loc_1e6de:
	// 6091 
cs=0xfbc;eip=0x00053e; 	T(INC(si));	// 27808 inc     si ;~ 0FBC:053E
loc_1e6df:
	// 6092 
cs=0xfbc;eip=0x00053f; 	T(MOV(bx, si));	// 27811 mov     bx, si ;~ 0FBC:053F
cs=0xfbc;eip=0x000541; 	T(SHL(bx, 1));	// 27812 shl     bx, 1 ;~ 0FBC:0541
cs=0xfbc;eip=0x000543; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27813 mov     ax, [bp+var_28] ;~ 0FBC:0543
cs=0xfbc;eip=0x000546; 	T(CMP(*(dw*)(((db*)&highentrzbounds1)+bx), ax));	// 27814 cmp     highEntrZBounds1[bx], ax ;~ 0FBC:0546
cs=0xfbc;eip=0x00054a; 	J(JL(loc_1e6de));	// 27815 jl      short loc_1E6DE ;~ 0FBC:054A
cs=0xfbc;eip=0x00054c; 	T(MOV(di, si));	// 27816 mov     di, si ;~ 0FBC:054C
cs=0xfbc;eip=0x00054e; 	T(SHL(di, 1));	// 27817 shl     di, 1 ;~ 0FBC:054E
cs=0xfbc;eip=0x000550; 	T(MOV(ax, *(dw*)(((db*)&highentrxinnbounds0)+di)));	// 27818 mov     ax, highEntrXInnBounds0[di] ;~ 0FBC:0550
cs=0xfbc;eip=0x000554; 	T(CMP(*(dw*)(((db*)&highentrxinnbounds1)+di), ax));	// 27819 cmp     highEntrXInnBounds1[di], ax ;~ 0FBC:0554
cs=0xfbc;eip=0x000558; 	J(JZ(loc_1e72e));	// 27820 jz      short loc_1E72E ;~ 0FBC:0558
cs=0xfbc;eip=0x00055a; 	T(MOV(di, si));	// 27821 mov     di, si ;~ 0FBC:055A
cs=0xfbc;eip=0x00055c; 	T(SHL(di, 1));	// 27822 shl     di, 1 ;~ 0FBC:055C
cs=0xfbc;eip=0x00055e; 	T(MOV(ax, *(dw*)(((db*)&highentrzbounds1)+di)));	// 27823 mov     ax, highEntrZBounds1[di] ;~ 0FBC:055E
cs=0xfbc;eip=0x000562; 	T(SUB(ax, *(dw*)(((db*)&highentrzbounds0)+di)));	// 27824 sub     ax, highEntrZBounds0[di] ;~ 0FBC:0562
cs=0xfbc;eip=0x000566; 	T(CWD);	// 27825 cwd ;~ 0FBC:0566
cs=0xfbc;eip=0x000567; 	X(PUSH(dx));	// 27826 push    dx ;~ 0FBC:0567
cs=0xfbc;eip=0x000568; 	X(PUSH(ax));	// 27827 push    ax ;~ 0FBC:0568
cs=0xfbc;eip=0x000569; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27828 mov     ax, [bp+var_28] ;~ 0FBC:0569
cs=0xfbc;eip=0x00056c; 	T(SUB(ax, *(dw*)(((db*)&highentrzbounds0)+di)));	// 27829 sub     ax, highEntrZBounds0[di] ;~ 0FBC:056C
cs=0xfbc;eip=0x000570; 	T(CWD);	// 27830 cwd ;~ 0FBC:0570
cs=0xfbc;eip=0x000571; 	X(PUSH(dx));	// 27831 push    dx ;~ 0FBC:0571
cs=0xfbc;eip=0x000572; 	X(PUSH(ax));	// 27832 push    ax ;~ 0FBC:0572
cs=0xfbc;eip=0x000573; 	T(MOV(ax, *(dw*)(((db*)&highentrxinnbounds1)+di)));	// 27833 mov     ax, highEntrXInnBounds1[di] ;~ 0FBC:0573
cs=0xfbc;eip=0x000577; 	T(SUB(ax, *(dw*)(((db*)&highentrxinnbounds0)+di)));	// 27834 sub     ax, highEntrXInnBounds0[di] ;~ 0FBC:0577
cs=0xfbc;eip=0x00057b; 	T(CWD);	// 27835 cwd ;~ 0FBC:057B
cs=0xfbc;eip=0x00057c; 	X(PUSH(dx));	// 27836 push    dx ;~ 0FBC:057C
cs=0xfbc;eip=0x00057d; 	X(PUSH(ax));	// 27837 push    ax ;~ 0FBC:057D
cs=0xfbc;eip=0x00057e; 	J(CALLF(__aflmul,0));	// 27838 call    __aFlmul ;~ 0FBC:057E
cs=0xfbc;eip=0x000583; 	X(PUSH(dx));	// 27839 push    dx ;~ 0FBC:0583
cs=0xfbc;eip=0x000584; 	X(PUSH(ax));	// 27840 push    ax ;~ 0FBC:0584
cs=0xfbc;eip=0x000585; 	J(CALLF(__afldiv,0));	// 27841 call    __aFldiv ;~ 0FBC:0585
cs=0xfbc;eip=0x00058a; 	T(ADD(ax, *(dw*)(((db*)&highentrxinnbounds0)+di)));	// 27842 add     ax, highEntrXInnBounds0[di] ;~ 0FBC:058A
loc_1e72e:
	// 6093 
cs=0xfbc;eip=0x00058e; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 27845 mov     [bp+var_1E], ax ;~ 0FBC:058E
cs=0xfbc;eip=0x000591; 	T(MOV(di, si));	// 27846 mov     di, si ;~ 0FBC:0591
cs=0xfbc;eip=0x000593; 	T(SHL(di, 1));	// 27847 shl     di, 1 ;~ 0FBC:0593
cs=0xfbc;eip=0x000595; 	T(MOV(ax, *(dw*)(((db*)&highentrxoutbounds0)+di)));	// 27848 mov     ax, highEntrXOutBounds0[di] ;~ 0FBC:0595
cs=0xfbc;eip=0x000599; 	T(CMP(*(dw*)(((db*)&highentrxoutbounds1)+di), ax));	// 27849 cmp     highEntrXOutBounds1[di], ax ;~ 0FBC:0599
cs=0xfbc;eip=0x00059d; 	J(JZ(loc_1e773));	// 27850 jz      short loc_1E773 ;~ 0FBC:059D
cs=0xfbc;eip=0x00059f; 	T(MOV(di, si));	// 27851 mov     di, si ;~ 0FBC:059F
cs=0xfbc;eip=0x0005a1; 	T(SHL(di, 1));	// 27852 shl     di, 1 ;~ 0FBC:05A1
cs=0xfbc;eip=0x0005a3; 	T(MOV(ax, *(dw*)(((db*)&highentrzbounds1)+di)));	// 27853 mov     ax, highEntrZBounds1[di] ;~ 0FBC:05A3
cs=0xfbc;eip=0x0005a7; 	T(SUB(ax, *(dw*)(((db*)&highentrzbounds0)+di)));	// 27854 sub     ax, highEntrZBounds0[di] ;~ 0FBC:05A7
cs=0xfbc;eip=0x0005ab; 	T(CWD);	// 27855 cwd ;~ 0FBC:05AB
cs=0xfbc;eip=0x0005ac; 	X(PUSH(dx));	// 27856 push    dx ;~ 0FBC:05AC
cs=0xfbc;eip=0x0005ad; 	X(PUSH(ax));	// 27857 push    ax ;~ 0FBC:05AD
cs=0xfbc;eip=0x0005ae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27858 mov     ax, [bp+var_28] ;~ 0FBC:05AE
cs=0xfbc;eip=0x0005b1; 	T(SUB(ax, *(dw*)(((db*)&highentrzbounds0)+di)));	// 27859 sub     ax, highEntrZBounds0[di] ;~ 0FBC:05B1
cs=0xfbc;eip=0x0005b5; 	T(CWD);	// 27860 cwd ;~ 0FBC:05B5
cs=0xfbc;eip=0x0005b6; 	X(PUSH(dx));	// 27861 push    dx ;~ 0FBC:05B6
cs=0xfbc;eip=0x0005b7; 	X(PUSH(ax));	// 27862 push    ax ;~ 0FBC:05B7
cs=0xfbc;eip=0x0005b8; 	T(MOV(ax, *(dw*)(((db*)&highentrxoutbounds1)+di)));	// 27863 mov     ax, highEntrXOutBounds1[di] ;~ 0FBC:05B8
cs=0xfbc;eip=0x0005bc; 	T(SUB(ax, *(dw*)(((db*)&highentrxoutbounds0)+di)));	// 27864 sub     ax, highEntrXOutBounds0[di] ;~ 0FBC:05BC
cs=0xfbc;eip=0x0005c0; 	T(CWD);	// 27865 cwd ;~ 0FBC:05C0
cs=0xfbc;eip=0x0005c1; 	X(PUSH(dx));	// 27866 push    dx ;~ 0FBC:05C1
cs=0xfbc;eip=0x0005c2; 	X(PUSH(ax));	// 27867 push    ax ;~ 0FBC:05C2
cs=0xfbc;eip=0x0005c3; 	J(CALLF(__aflmul,0));	// 27868 call    __aFlmul ;~ 0FBC:05C3
cs=0xfbc;eip=0x0005c8; 	X(PUSH(dx));	// 27869 push    dx ;~ 0FBC:05C8
cs=0xfbc;eip=0x0005c9; 	X(PUSH(ax));	// 27870 push    ax ;~ 0FBC:05C9
cs=0xfbc;eip=0x0005ca; 	J(CALLF(__afldiv,0));	// 27871 call    __aFldiv ;~ 0FBC:05CA
cs=0xfbc;eip=0x0005cf; 	T(ADD(ax, *(dw*)(((db*)&highentrxoutbounds0)+di)));	// 27872 add     ax, highEntrXOutBounds0[di] ;~ 0FBC:05CF
loc_1e773:
	// 6094 
cs=0xfbc;eip=0x0005d3; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 27875 mov     [bp+var_22], ax ;~ 0FBC:05D3
cs=0xfbc;eip=0x0005d6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 27876 mov     ax, [bp+var_1E] ;~ 0FBC:05D6
cs=0xfbc;eip=0x0005d9; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 27877 cmp     [bp+var_1C], ax ;~ 0FBC:05D9
cs=0xfbc;eip=0x0005dc; 	J(JLE(loc_1e789));	// 27878 jle     short loc_1E789 ;~ 0FBC:05DC
cs=0xfbc;eip=0x0005de; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 27879 mov     ax, [bp+var_22] ;~ 0FBC:05DE
cs=0xfbc;eip=0x0005e1; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 27880 cmp     [bp+var_1C], ax ;~ 0FBC:05E1
cs=0xfbc;eip=0x0005e4; 	J(JGE(loc_1e789));	// 27881 jge     short loc_1E789 ;~ 0FBC:05E4
cs=0xfbc;eip=0x0005e6; 	J(JMP(code_set_pavement));	// 27882 jmp     code_set_pavement ;~ 0FBC:05E6
loc_1e789:
	// 6095 
cs=0xfbc;eip=0x0005e9; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0));	// 27887 cmp     [bp+var_28], 0 ;~ 0FBC:05E9
cs=0xfbc;eip=0x0005ed; 	J(JGE(loc_1e792));	// 27888 jge     short loc_1E792 ;~ 0FBC:05ED
cs=0xfbc;eip=0x0005ef; 	J(JMP(code_bto_blank));	// 27889 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:05EF
loc_1e792:
	// 6096 
cs=0xfbc;eip=0x0005f2; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), 0x78));	// 27893 cmp     [bp+var_1C], 78h ; 'x' ;~ 0FBC:05F2
cs=0xfbc;eip=0x0005f6; 	J(JLE(loc_1e79b));	// 27894 jle     short loc_1E79B ;~ 0FBC:05F6
cs=0xfbc;eip=0x0005f8; 	J(JMP(code_bto_blank));	// 27895 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:05F8
loc_1e79b:
	// 6097 
cs=0xfbc;eip=0x0005fb; 	X(MOV(planindex, 1));	// 27899 mov     planindex, 1 ;~ 0FBC:05FB
cs=0xfbc;eip=0x000601; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x14E));	// 27900 cmp     [bp+var_28], 14Eh ;~ 0FBC:0601
cs=0xfbc;eip=0x000606; 	J(JL(loc_1e7c0));	// 27901 jl      short loc_1E7C0 ;~ 0FBC:0606
cs=0xfbc;eip=0x000608; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF88));	// 27902 cmp     [bp+var_18], 0FF88h ;~ 0FBC:0608
cs=0xfbc;eip=0x00060c; 	J(JLE(loc_1e7f9));	// 27903 jle     short loc_1E7F9 ;~ 0FBC:060C
loc_1e7ae:
	// 6098 
cs=0xfbc;eip=0x00060e; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x78));	// 27906 cmp     [bp+var_18], 78h ; 'x' ;~ 0FBC:060E
cs=0xfbc;eip=0x000612; 	J(JGE(loc_1e7b7));	// 27907 jge     short loc_1E7B7 ;~ 0FBC:0612
cs=0xfbc;eip=0x000614; 	J(JMP(code_bto_blank));	// 27908 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0614
loc_1e7b7:
	// 6099 
cs=0xfbc;eip=0x000617; 	X(MOV(wallindex, 0x0BA));	// 27912 mov     wallindex, 0BAh ; '∫' ;~ 0FBC:0617
cs=0xfbc;eip=0x00061d; 	J(JMP(code_bto_blank));	// 27913 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:061D
loc_1e7c0:
	// 6100 
cs=0xfbc;eip=0x000620; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 27917 cmp     [bp+var_18], 0 ;~ 0FBC:0620
cs=0xfbc;eip=0x000624; 	J(JL(loc_1e7d0));	// 27918 jl      short loc_1E7D0 ;~ 0FBC:0624
cs=0xfbc;eip=0x000626; 	X(MOV(wallindex, 0x0BB));	// 27919 mov     wallindex, 0BBh ; 'ª' ;~ 0FBC:0626
cs=0xfbc;eip=0x00062c; 	J(JMP(code_bto_blank));	// 27920 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:062C
loc_1e7d0:
	// 6101 
cs=0xfbc;eip=0x000630; 	X(MOV(wallindex, 0x0BD));	// 27925 mov     wallindex, 0BDh ; 'Ω' ;~ 0FBC:0630
cs=0xfbc;eip=0x000636; 	J(JMP(code_bto_blank));	// 27926 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0636
code_bto_highway:
	// 6102 
cs=0xfbc;eip=0x00063a; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x168));	// 27932 cmp     [bp+var_32], 168h ; jumptable 0001E5B2 case 11 ;~ 0FBC:063A
cs=0xfbc;eip=0x00063f; 	J(JLE(loc_1e7e4));	// 27933 jle     short loc_1E7E4 ;~ 0FBC:063F
cs=0xfbc;eip=0x000641; 	J(JMP(code_bto_blank));	// 27934 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0641
loc_1e7e4:
	// 6103 
cs=0xfbc;eip=0x000644; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 27938 cmp     [bp+var_32], 78h ; 'x' ;~ 0FBC:0644
cs=0xfbc;eip=0x000648; 	J(JLE(loc_1e7ed));	// 27939 jle     short loc_1E7ED ;~ 0FBC:0648
cs=0xfbc;eip=0x00064a; 	J(JMP(code_set_pavement));	// 27940 jmp     code_set_pavement ;~ 0FBC:064A
loc_1e7ed:
	// 6104 
cs=0xfbc;eip=0x00064d; 	X(MOV(planindex, 1));	// 27944 mov     planindex, 1 ;~ 0FBC:064D
cs=0xfbc;eip=0x000653; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF88));	// 27945 cmp     [bp+var_18], 0FF88h ;~ 0FBC:0653
cs=0xfbc;eip=0x000657; 	J(JG(loc_1e7ae));	// 27946 jg      short loc_1E7AE ;~ 0FBC:0657
loc_1e7f9:
	// 6105 
cs=0xfbc;eip=0x000659; 	X(MOV(wallindex, 0x0BC));	// 27949 mov     wallindex, 0BCh ; 'º' ;~ 0FBC:0659
cs=0xfbc;eip=0x00065f; 	J(JMP(code_bto_blank));	// 27950 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:065F
code_bto_ramp:
	// 6106 
cs=0xfbc;eip=0x000662; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0));	// 27955 cmp     [bp+var_28], 0  ; jumptable 0001E5B2 case 16 ;~ 0FBC:0662
cs=0xfbc;eip=0x000666; 	J(JLE(loc_1e810));	// 27956 jle     short loc_1E810 ;~ 0FBC:0666
cs=0xfbc;eip=0x000668; 	X(MOV(byte_4392c, 0));	// 27957 mov     byte_4392C, 0 ;~ 0FBC:0668
cs=0xfbc;eip=0x00066d; 	J(JMP(loc_1e82b));	// 27958 jmp     short loc_1E82B ;~ 0FBC:066D
loc_1e810:
	// 6107 
cs=0xfbc;eip=0x000670; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0));	// 27963 cmp     [bp+var_14], 0 ;~ 0FBC:0670
cs=0xfbc;eip=0x000674; 	J(JL(loc_1e82b));	// 27964 jl      short loc_1E82B ;~ 0FBC:0674
cs=0xfbc;eip=0x000676; 	X(MOV(wallindex, 0x66));	// 27965 mov     wallindex, 66h ; 'f' ;~ 0FBC:0676
cs=0xfbc;eip=0x00067c; 	J(JMP(loc_1e82b));	// 27966 jmp     short loc_1E82B ;~ 0FBC:067C
code_bto_solidramp:
	// 6108 
cs=0xfbc;eip=0x00067e; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x1DC));	// 27971 cmp     [bp+var_14], 1DCh ; jumptable 0001E5B2 case 17 ;~ 0FBC:067E
cs=0xfbc;eip=0x000683; 	J(JL(loc_1e82b));	// 27972 jl      short loc_1E82B ;~ 0FBC:0683
cs=0xfbc;eip=0x000685; 	X(MOV(wallindex, 0x67));	// 27973 mov     wallindex, 67h ; 'g' ;~ 0FBC:0685
loc_1e82b:
	// 6109 
cs=0xfbc;eip=0x00068b; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 27977 cmp     [bp+var_18], 0 ;~ 0FBC:068B
cs=0xfbc;eip=0x00068f; 	J(JGE(loc_1e838));	// 27978 jge     short loc_1E838 ;~ 0FBC:068F
cs=0xfbc;eip=0x000691; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 27979 mov     ax, [bp+var_18] ;~ 0FBC:0691
cs=0xfbc;eip=0x000694; 	T(NEG(ax));	// 27980 neg     ax ;~ 0FBC:0694
cs=0xfbc;eip=0x000696; 	J(JMP(loc_1e83b));	// 27981 jmp     short loc_1E83B ;~ 0FBC:0696
loc_1e838:
	// 6110 
cs=0xfbc;eip=0x000698; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 27985 mov     ax, [bp+var_18] ;~ 0FBC:0698
loc_1e83b:
	// 6111 
cs=0xfbc;eip=0x00069b; 	T(CMP(ax, 0x78));	// 27988 cmp     ax, 78h ; 'x' ;~ 0FBC:069B
cs=0xfbc;eip=0x00069e; 	J(JGE(loc_1e886));	// 27989 jge     short loc_1E886 ;~ 0FBC:069E
cs=0xfbc;eip=0x0006a0; 	X(MOV(planindex, 3));	// 27990 mov     planindex, 3 ;~ 0FBC:06A0
cs=0xfbc;eip=0x0006a6; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 27991 mov     al, [bp+var_12] ;~ 0FBC:06A6
cs=0xfbc;eip=0x0006a9; 	X(MOV(current_surf_type, al));	// 27992 mov     current_surf_type, al ;~ 0FBC:06A9
cs=0xfbc;eip=0x0006ac; 	T(CMP(wallindex, 0x0FFFF));	// 27993 cmp     wallindex, 0FFFFh ;~ 0FBC:06AC
cs=0xfbc;eip=0x0006b1; 	J(JZ(loc_1e856));	// 27994 jz      short loc_1E856 ;~ 0FBC:06B1
cs=0xfbc;eip=0x0006b3; 	J(JMP(code_bto_blank));	// 27995 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:06B3
loc_1e856:
	// 6112 
cs=0xfbc;eip=0x0006b6; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0));	// 27999 cmp     [bp+var_28], 0 ;~ 0FBC:06B6
cs=0xfbc;eip=0x0006ba; 	J(JGE(loc_1e85f));	// 28000 jge     short loc_1E85F ;~ 0FBC:06BA
cs=0xfbc;eip=0x0006bc; 	J(JMP(code_bto_blank));	// 28001 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:06BC
loc_1e85f:
	// 6113 
cs=0xfbc;eip=0x0006bf; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 28005 cmp     [bp+var_32], 78h ; 'x' ;~ 0FBC:06BF
cs=0xfbc;eip=0x0006c3; 	J(JGE(loc_1e868));	// 28006 jge     short loc_1E868 ;~ 0FBC:06C3
cs=0xfbc;eip=0x0006c5; 	J(JMP(code_bto_blank));	// 28007 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:06C5
loc_1e868:
	// 6114 
cs=0xfbc;eip=0x0006c8; 	X(MOV(wallheight, 0x2A));	// 28011 mov     wallHeight, 2Ah ; '*' ;~ 0FBC:06C8
cs=0xfbc;eip=0x0006ce; 	X(MOV(elrdwallrelated, 0x0FFF4));	// 28012 mov     elRdWallRelated, 0FFF4h ;~ 0FBC:06CE
cs=0xfbc;eip=0x0006d4; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 28013 cmp     [bp+var_2C], 0 ;~ 0FBC:06D4
cs=0xfbc;eip=0x0006d8; 	J(JGE(loc_1e87d));	// 28014 jge     short loc_1E87D ;~ 0FBC:06D8
cs=0xfbc;eip=0x0006da; 	J(JMP(loc_1e96f));	// 28015 jmp     loc_1E96F ;~ 0FBC:06DA
loc_1e87d:
	// 6115 
cs=0xfbc;eip=0x0006dd; 	X(MOV(wallindex, 0x65));	// 28020 mov     wallindex, 65h ; 'e' ;~ 0FBC:06DD
cs=0xfbc;eip=0x0006e3; 	J(JMP(code_bto_blank));	// 28021 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:06E3
loc_1e886:
	// 6116 
cs=0xfbc;eip=0x0006e6; 	T(CMP(byte_4392c, 0));	// 28025 cmp     byte_4392C, 0 ;~ 0FBC:06E6
cs=0xfbc;eip=0x0006eb; 	J(JNZ(loc_1e890));	// 28026 jnz     short loc_1E890 ;~ 0FBC:06EB
cs=0xfbc;eip=0x0006ed; 	J(JMP(code_bto_blank));	// 28027 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:06ED
loc_1e890:
	// 6117 
cs=0xfbc;eip=0x0006f0; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 28031 cmp     [bp+var_32], 78h ; 'x' ;~ 0FBC:06F0
cs=0xfbc;eip=0x0006f4; 	J(JLE(loc_1e899));	// 28032 jle     short loc_1E899 ;~ 0FBC:06F4
cs=0xfbc;eip=0x0006f6; 	J(JMP(code_bto_blank));	// 28033 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:06F6
loc_1e899:
	// 6118 
cs=0xfbc;eip=0x0006f9; 	X(MOV(planindex, 3));	// 28037 mov     planindex, 3 ;~ 0FBC:06F9
cs=0xfbc;eip=0x0006ff; 	T(CMP(wallindex, 0x0FFFF));	// 28038 cmp     wallindex, 0FFFFh ;~ 0FBC:06FF
cs=0xfbc;eip=0x000704; 	J(JZ(loc_1e8a9));	// 28039 jz      short loc_1E8A9 ;~ 0FBC:0704
cs=0xfbc;eip=0x000706; 	J(JMP(code_bto_blank));	// 28040 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0706
loc_1e8a9:
	// 6119 
cs=0xfbc;eip=0x000709; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), 0x200));	// 28044 mov     [bp+var_38], 200h ;~ 0FBC:0709
loc_1e8ae:
	// 6120 
cs=0xfbc;eip=0x00070e; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 28047 cmp     [bp+var_2C], 0 ;~ 0FBC:070E
cs=0xfbc;eip=0x000712; 	J(JMP(loc_1e96a));	// 28048 jmp     loc_1E96A ;~ 0FBC:0712
code_bto_overpass:
	// 6121 
cs=0xfbc;eip=0x000716; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 28054 mov     bx, [bp+arg_0]  ; jumptable 0001E5B2 case 22 ;~ 0FBC:0716
cs=0xfbc;eip=0x000719; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 28055 mov     ax, [bx+2] ;~ 0FBC:0719
cs=0xfbc;eip=0x00071c; 	T(SUB(ax, terrainheight));	// 28056 sub     ax, terrainHeight ;~ 0FBC:071C
cs=0xfbc;eip=0x000720; 	T(CMP(ax, 0x186));	// 28057 cmp     ax, 186h ;~ 0FBC:0720
cs=0xfbc;eip=0x000723; 	J(JLE(loc_1e8d8));	// 28058 jle     short loc_1E8D8 ;~ 0FBC:0723
loc_1e8c5:
	// 6122 
cs=0xfbc;eip=0x000725; 	X(MOV(byte_4392c, 0));	// 28061 mov     byte_4392C, 0 ;~ 0FBC:0725
code_bto_solidroad:
	// 6123 
cs=0xfbc;eip=0x00072a; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 28065 cmp     [bp+var_18], 0  ; jumptable 0001E5B2 case 20 ;~ 0FBC:072A
cs=0xfbc;eip=0x00072e; 	J(JGE(loc_1e8f8));	// 28066 jge     short loc_1E8F8 ;~ 0FBC:072E
cs=0xfbc;eip=0x000730; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 28067 mov     ax, [bp+var_18] ;~ 0FBC:0730
cs=0xfbc;eip=0x000733; 	T(NEG(ax));	// 28068 neg     ax ;~ 0FBC:0733
cs=0xfbc;eip=0x000735; 	J(JMP(loc_1e8fb));	// 28069 jmp     short loc_1E8FB ;~ 0FBC:0735
loc_1e8d8:
	// 6124 
cs=0xfbc;eip=0x000738; 	T(CMP(*(dw*)(raddr(ss,bp+var_2e)), 0x78));	// 28074 cmp     [bp+var_2E], 78h ; 'x' ;~ 0FBC:0738
loc_1e8dc:
	// 6125 
cs=0xfbc;eip=0x00073c; 	J(JLE(loc_1e8e1));	// 28077 jle     short loc_1E8E1 ;~ 0FBC:073C
cs=0xfbc;eip=0x00073e; 	J(JMP(code_bto_blank));	// 28078 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:073E
loc_1e8e1:
	// 6126 
cs=0xfbc;eip=0x000741; 	J(JMP(code_set_pavement));	// 28082 jmp     code_set_pavement ;~ 0FBC:0741
code_bto_elevroad:
	// 6127 
cs=0xfbc;eip=0x000744; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 28087 mov     bx, [bp+arg_0]  ; jumptable 0001E5B2 cases 18,19 ;~ 0FBC:0744
cs=0xfbc;eip=0x000747; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 28088 mov     ax, [bx+2] ;~ 0FBC:0747
cs=0xfbc;eip=0x00074a; 	T(SUB(ax, terrainheight));	// 28089 sub     ax, terrainHeight ;~ 0FBC:074A
cs=0xfbc;eip=0x00074e; 	T(CMP(ax, 0x186));	// 28090 cmp     ax, 186h ;~ 0FBC:074E
cs=0xfbc;eip=0x000751; 	J(JG(loc_1e8f6));	// 28091 jg      short loc_1E8F6 ;~ 0FBC:0751
cs=0xfbc;eip=0x000753; 	J(JMP(code_bto_blank));	// 28092 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0753
loc_1e8f6:
	// 6128 
cs=0xfbc;eip=0x000756; 	J(JMP(loc_1e8c5));	// 28096 jmp     short loc_1E8C5 ;~ 0FBC:0756
loc_1e8f8:
	// 6129 
cs=0xfbc;eip=0x000758; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 28100 mov     ax, [bp+var_18] ;~ 0FBC:0758
loc_1e8fb:
	// 6130 
cs=0xfbc;eip=0x00075b; 	T(CMP(ax, 0x78));	// 28103 cmp     ax, 78h ; 'x' ;~ 0FBC:075B
cs=0xfbc;eip=0x00075e; 	J(JG(loc_1e942));	// 28104 jg      short loc_1E942 ;~ 0FBC:075E
cs=0xfbc;eip=0x000760; 	X(MOV(planindex, 2));	// 28105 mov     planindex, 2 ;~ 0FBC:0760
cs=0xfbc;eip=0x000766; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 28106 mov     al, [bp+var_12] ;~ 0FBC:0766
cs=0xfbc;eip=0x000769; 	X(MOV(current_surf_type, al));	// 28107 mov     current_surf_type, al ;~ 0FBC:0769
cs=0xfbc;eip=0x00076c; 	T(CMP(byte_4392c, 0));	// 28108 cmp     byte_4392C, 0 ;~ 0FBC:076C
cs=0xfbc;eip=0x000771; 	J(JZ(loc_1e92f));	// 28109 jz      short loc_1E92F ;~ 0FBC:0771
cs=0xfbc;eip=0x000773; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x1DC));	// 28110 cmp     [bp+var_14], 1DCh ;~ 0FBC:0773
cs=0xfbc;eip=0x000778; 	J(JL(loc_1e922));	// 28111 jl      short loc_1E922 ;~ 0FBC:0778
cs=0xfbc;eip=0x00077a; 	X(MOV(wallindex, 0x67));	// 28112 mov     wallindex, 67h ; 'g' ;~ 0FBC:077A
cs=0xfbc;eip=0x000780; 	J(JMP(loc_1e92f));	// 28113 jmp     short loc_1E92F ;~ 0FBC:0780
loc_1e922:
	// 6131 
cs=0xfbc;eip=0x000782; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FE24));	// 28117 cmp     [bp+var_14], 0FE24h ;~ 0FBC:0782
cs=0xfbc;eip=0x000787; 	J(JG(loc_1e92f));	// 28118 jg      short loc_1E92F ;~ 0FBC:0787
cs=0xfbc;eip=0x000789; 	X(MOV(wallindex, 0x68));	// 28119 mov     wallindex, 68h ; 'h' ;~ 0FBC:0789
loc_1e92f:
	// 6132 
cs=0xfbc;eip=0x00078f; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 28123 cmp     [bp+var_32], 78h ; 'x' ;~ 0FBC:078F
cs=0xfbc;eip=0x000793; 	J(JGE(loc_1e938));	// 28124 jge     short loc_1E938 ;~ 0FBC:0793
cs=0xfbc;eip=0x000795; 	J(JMP(code_bto_blank));	// 28125 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0795
loc_1e938:
	// 6133 
cs=0xfbc;eip=0x000798; 	X(MOV(wallheight, 0x2A));	// 28129 mov     wallHeight, 2Ah ; '*' ;~ 0FBC:0798
cs=0xfbc;eip=0x00079e; 	J(JMP(loc_1e8ae));	// 28130 jmp     loc_1E8AE ;~ 0FBC:079E
loc_1e942:
	// 6134 
cs=0xfbc;eip=0x0007a2; 	T(CMP(byte_4392c, 0));	// 28135 cmp     byte_4392C, 0 ;~ 0FBC:07A2
cs=0xfbc;eip=0x0007a7; 	J(JNZ(loc_1e94c));	// 28136 jnz     short loc_1E94C ;~ 0FBC:07A7
cs=0xfbc;eip=0x0007a9; 	J(JMP(code_bto_blank));	// 28137 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:07A9
loc_1e94c:
	// 6135 
cs=0xfbc;eip=0x0007ac; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 28141 cmp     [bp+var_32], 78h ; 'x' ;~ 0FBC:07AC
cs=0xfbc;eip=0x0007b0; 	J(JLE(loc_1e955));	// 28142 jle     short loc_1E955 ;~ 0FBC:07B0
cs=0xfbc;eip=0x0007b2; 	J(JMP(code_bto_blank));	// 28143 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:07B2
loc_1e955:
	// 6136 
cs=0xfbc;eip=0x0007b5; 	X(MOV(planindex, 2));	// 28147 mov     planindex, 2 ;~ 0FBC:07B5
cs=0xfbc;eip=0x0007bb; 	X(MOV(wallheight, 0x2A));	// 28148 mov     wallHeight, 2Ah ; '*' ;~ 0FBC:07BB
cs=0xfbc;eip=0x0007c1; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), 0x200));	// 28149 mov     [bp+var_38], 200h ;~ 0FBC:07C1
cs=0xfbc;eip=0x0007c6; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 28150 cmp     [bp+var_18], 0 ;~ 0FBC:07C6
loc_1e96a:
	// 6137 
cs=0xfbc;eip=0x0007ca; 	J(JL(loc_1e96f));	// 28153 jl      short loc_1E96F ;~ 0FBC:07CA
cs=0xfbc;eip=0x0007cc; 	J(JMP(loc_1e87d));	// 28154 jmp     loc_1E87D ;~ 0FBC:07CC
loc_1e96f:
	// 6138 
cs=0xfbc;eip=0x0007cf; 	X(MOV(wallindex, 0x64));	// 28159 mov     wallindex, 64h ; 'd' ;~ 0FBC:07CF
cs=0xfbc;eip=0x0007d5; 	J(JMP(code_bto_blank));	// 28160 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:07D5
code_bto_elevcorner:
	// 6139 
cs=0xfbc;eip=0x0007d8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 28165 mov     bx, [bp+arg_0]  ; jumptable 0001E5B2 case 21 ;~ 0FBC:07D8
cs=0xfbc;eip=0x0007db; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 28166 mov     ax, [bx+2] ;~ 0FBC:07DB
cs=0xfbc;eip=0x0007de; 	T(SUB(ax, terrainheight));	// 28167 sub     ax, terrainHeight ;~ 0FBC:07DE
cs=0xfbc;eip=0x0007e2; 	T(CMP(ax, 0x186));	// 28168 cmp     ax, 186h ;~ 0FBC:07E2
cs=0xfbc;eip=0x0007e5; 	J(JG(loc_1e98a));	// 28169 jg      short loc_1E98A ;~ 0FBC:07E5
cs=0xfbc;eip=0x0007e7; 	J(JMP(code_bto_blank));	// 28170 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:07E7
loc_1e98a:
	// 6140 
cs=0xfbc;eip=0x0007ea; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 28174 mov     ax, [bp+var_28] ;~ 0FBC:07EA
cs=0xfbc;eip=0x0007ed; 	T(ADD(ah, 4));	// 28175 add     ah, 4 ;~ 0FBC:07ED
cs=0xfbc;eip=0x0007f0; 	X(PUSH(ax));	// 28176 push    ax ;~ 0FBC:07F0
cs=0xfbc;eip=0x0007f1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 28177 mov     ax, [bp+var_2C] ;~ 0FBC:07F1
cs=0xfbc;eip=0x0007f4; 	T(ADD(ah, 4));	// 28178 add     ah, 4 ;~ 0FBC:07F4
cs=0xfbc;eip=0x0007f7; 	X(PUSH(ax));	// 28179 push    ax ;~ 0FBC:07F7
cs=0xfbc;eip=0x0007f8; 	J(CALLF(polarradius2d,0));	// 28180 call    polarRadius2D ;~ 0FBC:07F8
cs=0xfbc;eip=0x0007fd; 	T(ADD(sp, 4));	// 28181 add     sp, 4 ;~ 0FBC:07FD
cs=0xfbc;eip=0x000800; 	T(SUB(ax, 0x600));	// 28182 sub     ax, 600h ;~ 0FBC:0800
cs=0xfbc;eip=0x000803; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 28183 mov     [bp+var_A], ax ;~ 0FBC:0803
cs=0xfbc;eip=0x000806; 	T(CMP(ax, 0x0FF6A));	// 28184 cmp     ax, 0FF6Ah ;~ 0FBC:0806
cs=0xfbc;eip=0x000809; 	J(JG(loc_1e9ae));	// 28185 jg      short loc_1E9AE ;~ 0FBC:0809
cs=0xfbc;eip=0x00080b; 	J(JMP(code_bto_blank));	// 28186 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:080B
loc_1e9ae:
	// 6141 
cs=0xfbc;eip=0x00080e; 	T(CMP(ax, 0x96));	// 28190 cmp     ax, 96h ; 'ñ' ;~ 0FBC:080E
cs=0xfbc;eip=0x000811; 	J(JL(loc_1e9b6));	// 28191 jl      short loc_1E9B6 ;~ 0FBC:0811
cs=0xfbc;eip=0x000813; 	J(JMP(code_bto_blank));	// 28192 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0813
loc_1e9b6:
	// 6142 
cs=0xfbc;eip=0x000816; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 28196 mov     al, [bp+var_12] ;~ 0FBC:0816
cs=0xfbc;eip=0x000819; 	X(MOV(current_surf_type, al));	// 28197 mov     current_surf_type, al ;~ 0FBC:0819
cs=0xfbc;eip=0x00081c; 	X(MOV(planindex, 2));	// 28198 mov     planindex, 2 ;~ 0FBC:081C
cs=0xfbc;eip=0x000822; 	X(MOV(byte_4392c, 0));	// 28199 mov     byte_4392C, 0 ;~ 0FBC:0822
cs=0xfbc;eip=0x000827; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x0FF94));	// 28200 cmp     [bp+var_A], 0FF94h ;~ 0FBC:0827
cs=0xfbc;eip=0x00082b; 	J(JL(loc_1e9d6));	// 28201 jl      short loc_1E9D6 ;~ 0FBC:082B
cs=0xfbc;eip=0x00082d; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x6C));	// 28202 cmp     [bp+var_A], 6Ch ; 'l' ;~ 0FBC:082D
cs=0xfbc;eip=0x000831; 	J(JG(loc_1e9d6));	// 28203 jg      short loc_1E9D6 ;~ 0FBC:0831
cs=0xfbc;eip=0x000833; 	J(JMP(code_bto_blank));	// 28204 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0833
loc_1e9d6:
	// 6143 
cs=0xfbc;eip=0x000836; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 28209 mov     ax, [bp+var_28] ;~ 0FBC:0836
cs=0xfbc;eip=0x000839; 	T(ADD(ah, 4));	// 28210 add     ah, 4 ;~ 0FBC:0839
cs=0xfbc;eip=0x00083c; 	X(PUSH(ax));	// 28211 push    ax ;~ 0FBC:083C
cs=0xfbc;eip=0x00083d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 28212 mov     ax, [bp+var_2C] ;~ 0FBC:083D
cs=0xfbc;eip=0x000840; 	T(ADD(ah, 4));	// 28213 add     ah, 4 ;~ 0FBC:0840
cs=0xfbc;eip=0x000843; 	X(PUSH(ax));	// 28214 push    ax ;~ 0FBC:0843
cs=0xfbc;eip=0x000844; 	J(CALLF(polarangle,0));	// 28215 call    polarAngle ;~ 0FBC:0844
cs=0xfbc;eip=0x000849; 	T(ADD(sp, 4));	// 28216 add     sp, 4 ;~ 0FBC:0849
cs=0xfbc;eip=0x00084c; 	T(SUB(ah, ah));	// 28217 sub     ah, ah ;~ 0FBC:084C
cs=0xfbc;eip=0x00084e; 	T(MOV(cx, 0x12));	// 28218 mov     cx, 12h ;~ 0FBC:084E
cs=0xfbc;eip=0x000851; 	T(IMUL1_2(cx));	// 28219 imul    cx ;~ 0FBC:0851
cs=0xfbc;eip=0x000853; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 28220 mov     [bp+var_22], ax ;~ 0FBC:0853
cs=0xfbc;eip=0x000856; 	T(MOV(cl, 8));	// 28221 mov     cl, 8 ;~ 0FBC:0856
cs=0xfbc;eip=0x000858; 	T(SAR(ax, cl));	// 28222 sar     ax, cl ;~ 0FBC:0858
cs=0xfbc;eip=0x00085a; 	T(SUB(ax, 0x11));	// 28223 sub     ax, 11h ;~ 0FBC:085A
cs=0xfbc;eip=0x00085d; 	T(NEG(ax));	// 28224 neg     ax ;~ 0FBC:085D
cs=0xfbc;eip=0x00085f; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 28225 mov     [bp+var_1E], ax ;~ 0FBC:085F
cs=0xfbc;eip=0x000862; 	X(MOV(wallheight, 0x2A));	// 28226 mov     wallHeight, 2Ah ; '*' ;~ 0FBC:0862
cs=0xfbc;eip=0x000868; 	X(MOV(elrdwallrelated, 0x0FFF4));	// 28227 mov     elRdWallRelated, 0FFF4h ;~ 0FBC:0868
cs=0xfbc;eip=0x00086e; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 28228 cmp     [bp+var_A], 0 ;~ 0FBC:086E
cs=0xfbc;eip=0x000872; 	J(JGE(loc_1ea1a));	// 28229 jge     short loc_1EA1A ;~ 0FBC:0872
cs=0xfbc;eip=0x000874; 	T(ADD(ax, 0x69));	// 28230 add     ax, 69h ; 'i' ;~ 0FBC:0874
cs=0xfbc;eip=0x000877; 	J(JMP(loc_1ea20));	// 28231 jmp     short loc_1EA20 ;~ 0FBC:0877
loc_1ea1a:
	// 6144 
cs=0xfbc;eip=0x00087a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 28236 mov     ax, [bp+var_1E] ;~ 0FBC:087A
cs=0xfbc;eip=0x00087d; 	T(ADD(ax, 0x7B));	// 28237 add     ax, 7Bh ; '{' ;~ 0FBC:087D
loc_1ea20:
	// 6145 
cs=0xfbc;eip=0x000880; 	X(MOV(wallindex, ax));	// 28241 mov     wallindex, ax ;~ 0FBC:0880
cs=0xfbc;eip=0x000883; 	J(JMP(code_bto_blank));	// 28242 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0883
code_bto_bankentrancea:
	// 6146 
cs=0xfbc;eip=0x000886; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), 0x23));	// 28247 mov     [bp+var_1C], 23h ; '#' ; jumptable 0001E5B2 case 24 ;~ 0FBC:0886
cs=0xfbc;eip=0x00088b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 28248 mov     [bp+var_1E], 0 ;~ 0FBC:088B
cs=0xfbc;eip=0x000890; 	T(MOV(si, 0x0FD60));	// 28249 mov     si, 0FD60h ;~ 0FBC:0890
cs=0xfbc;eip=0x000893; 	J(JMP(loc_1ea43));	// 28250 jmp     short loc_1EA43 ;~ 0FBC:0893
code_bto_bankentranceb:
	// 6147 
cs=0xfbc;eip=0x000896; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), 0x19));	// 28256 mov     [bp+var_1C], 19h ; jumptable 0001E5B2 case 23 ;~ 0FBC:0896
cs=0xfbc;eip=0x00089b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 1));	// 28257 mov     [bp+var_1E], 1 ;~ 0FBC:089B
cs=0xfbc;eip=0x0008a0; 	T(MOV(si, 0x0A0));	// 28258 mov     si, 0A0h ; '†' ;~ 0FBC:08A0
loc_1ea43:
	// 6148 
cs=0xfbc;eip=0x0008a3; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 28261 cmp     [bp+var_32], 78h ; 'x' ;~ 0FBC:08A3
cs=0xfbc;eip=0x0008a7; 	J(JLE(loc_1ea4c));	// 28262 jle     short loc_1EA4C ;~ 0FBC:08A7
cs=0xfbc;eip=0x0008a9; 	J(JMP(code_bto_blank));	// 28263 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:08A9
loc_1ea4c:
	// 6149 
cs=0xfbc;eip=0x0008ac; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 28267 cmp     [bp+var_1E], 0 ;~ 0FBC:08AC
cs=0xfbc;eip=0x0008b0; 	J(JNZ(loc_1ea66));	// 28268 jnz     short loc_1EA66 ;~ 0FBC:08B0
cs=0xfbc;eip=0x0008b2; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF88));	// 28269 cmp     [bp+var_18], 0FF88h ;~ 0FBC:08B2
cs=0xfbc;eip=0x0008b6; 	J(JG(loc_1ea66));	// 28270 jg      short loc_1EA66 ;~ 0FBC:08B6
cs=0xfbc;eip=0x0008b8; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), 0x200));	// 28271 mov     [bp+var_38], 200h ;~ 0FBC:08B8
cs=0xfbc;eip=0x0008bd; 	X(MOV(wallindex, 0x64));	// 28272 mov     wallindex, 64h ; 'd' ;~ 0FBC:08BD
cs=0xfbc;eip=0x0008c3; 	J(JMP(loc_1ea7d));	// 28273 jmp     short loc_1EA7D ;~ 0FBC:08C3
loc_1ea66:
	// 6150 
cs=0xfbc;eip=0x0008c6; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 28279 cmp     [bp+var_1E], 0 ;~ 0FBC:08C6
cs=0xfbc;eip=0x0008ca; 	J(JZ(loc_1ea7d));	// 28280 jz      short loc_1EA7D ;~ 0FBC:08CA
cs=0xfbc;eip=0x0008cc; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x78));	// 28281 cmp     [bp+var_18], 78h ; 'x' ;~ 0FBC:08CC
cs=0xfbc;eip=0x0008d0; 	J(JL(loc_1ea7d));	// 28282 jl      short loc_1EA7D ;~ 0FBC:08D0
cs=0xfbc;eip=0x0008d2; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), 0x200));	// 28283 mov     [bp+var_38], 200h ;~ 0FBC:08D2
cs=0xfbc;eip=0x0008d7; 	X(MOV(wallindex, 0x65));	// 28284 mov     wallindex, 65h ; 'e' ;~ 0FBC:08D7
loc_1ea7d:
	// 6151 
cs=0xfbc;eip=0x0008dd; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 28288 mov     al, [bp+var_12] ;~ 0FBC:08DD
cs=0xfbc;eip=0x0008e0; 	X(MOV(current_surf_type, al));	// 28289 mov     current_surf_type, al ;~ 0FBC:08E0
cs=0xfbc;eip=0x0008e3; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x0FEB2));	// 28290 cmp     [bp+var_28], 0FEB2h ;~ 0FBC:08E3
cs=0xfbc;eip=0x0008e8; 	J(JGE(loc_1ea90));	// 28291 jge     short loc_1EA90 ;~ 0FBC:08E8
cs=0xfbc;eip=0x0008ea; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 28292 mov     ax, [bp+var_1C] ;~ 0FBC:08EA
cs=0xfbc;eip=0x0008ed; 	J(JMP(loc_1ea9d));	// 28293 jmp     short loc_1EA9D ;~ 0FBC:08ED
loc_1ea90:
	// 6152 
cs=0xfbc;eip=0x0008f0; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x14E));	// 28298 cmp     [bp+var_28], 14Eh ;~ 0FBC:08F0
cs=0xfbc;eip=0x0008f5; 	J(JL(loc_1eaa4));	// 28299 jl      short loc_1EAA4 ;~ 0FBC:08F5
cs=0xfbc;eip=0x0008f7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 28300 mov     ax, [bp+var_1C] ;~ 0FBC:08F7
cs=0xfbc;eip=0x0008fa; 	T(ADD(ax, 9));	// 28301 add     ax, 9 ;~ 0FBC:08FA
loc_1ea9d:
	// 6153 
cs=0xfbc;eip=0x0008fd; 	X(MOV(planindex, ax));	// 28305 mov     planindex, ax ;~ 0FBC:08FD
cs=0xfbc;eip=0x000900; 	J(JMP(code_bto_blank));	// 28306 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0900
loc_1eaa4:
	// 6154 
cs=0xfbc;eip=0x000904; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x0FF58));	// 28311 cmp     [bp+var_28], 0FF58h ;~ 0FBC:0904
cs=0xfbc;eip=0x000909; 	J(JGE(loc_1eaba));	// 28312 jge     short loc_1EABA ;~ 0FBC:0909
cs=0xfbc;eip=0x00090b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 28313 mov     ax, [bp+var_1C] ;~ 0FBC:090B
cs=0xfbc;eip=0x00090e; 	T(INC(ax));	// 28314 inc     ax ;~ 0FBC:090E
cs=0xfbc;eip=0x00090f; 	X(MOV(planindex, ax));	// 28315 mov     planindex, ax ;~ 0FBC:090F
cs=0xfbc;eip=0x000912; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 28316 mov     [bp+var_1E], 0 ;~ 0FBC:0912
cs=0xfbc;eip=0x000917; 	J(JMP(loc_1eafd));	// 28317 jmp     short loc_1EAFD ;~ 0FBC:0917
loc_1eaba:
	// 6155 
cs=0xfbc;eip=0x00091a; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0));	// 28322 cmp     [bp+var_28], 0 ;~ 0FBC:091A
cs=0xfbc;eip=0x00091e; 	J(JGE(loc_1ead0));	// 28323 jge     short loc_1EAD0 ;~ 0FBC:091E
cs=0xfbc;eip=0x000920; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 28324 mov     ax, [bp+var_1C] ;~ 0FBC:0920
cs=0xfbc;eip=0x000923; 	T(ADD(ax, 3));	// 28325 add     ax, 3 ;~ 0FBC:0923
cs=0xfbc;eip=0x000926; 	X(MOV(planindex, ax));	// 28326 mov     planindex, ax ;~ 0FBC:0926
cs=0xfbc;eip=0x000929; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 1));	// 28327 mov     [bp+var_1E], 1 ;~ 0FBC:0929
cs=0xfbc;eip=0x00092e; 	J(JMP(loc_1eafd));	// 28328 jmp     short loc_1EAFD ;~ 0FBC:092E
loc_1ead0:
	// 6156 
cs=0xfbc;eip=0x000930; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x0A8));	// 28332 cmp     [bp+var_28], 0A8h ; '®' ;~ 0FBC:0930
cs=0xfbc;eip=0x000935; 	J(JGE(loc_1eae8));	// 28333 jge     short loc_1EAE8 ;~ 0FBC:0935
cs=0xfbc;eip=0x000937; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 28334 mov     ax, [bp+var_1C] ;~ 0FBC:0937
cs=0xfbc;eip=0x00093a; 	T(ADD(ax, 5));	// 28335 add     ax, 5 ;~ 0FBC:093A
cs=0xfbc;eip=0x00093d; 	X(MOV(planindex, ax));	// 28336 mov     planindex, ax ;~ 0FBC:093D
cs=0xfbc;eip=0x000940; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 2));	// 28337 mov     [bp+var_1E], 2 ;~ 0FBC:0940
cs=0xfbc;eip=0x000945; 	J(JMP(loc_1eafd));	// 28338 jmp     short loc_1EAFD ;~ 0FBC:0945
loc_1eae8:
	// 6157 
cs=0xfbc;eip=0x000948; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x14E));	// 28343 cmp     [bp+var_28], 14Eh ;~ 0FBC:0948
cs=0xfbc;eip=0x00094d; 	J(JGE(loc_1eafd));	// 28344 jge     short loc_1EAFD ;~ 0FBC:094D
cs=0xfbc;eip=0x00094f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 28345 mov     ax, [bp+var_1C] ;~ 0FBC:094F
cs=0xfbc;eip=0x000952; 	T(ADD(ax, 7));	// 28346 add     ax, 7 ;~ 0FBC:0952
cs=0xfbc;eip=0x000955; 	X(MOV(planindex, ax));	// 28347 mov     planindex, ax ;~ 0FBC:0955
cs=0xfbc;eip=0x000958; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 3));	// 28348 mov     [bp+var_1E], 3 ;~ 0FBC:0958
loc_1eafd:
	// 6158 
cs=0xfbc;eip=0x00095d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 28352 mov     ax, [bp+var_28] ;~ 0FBC:095D
cs=0xfbc;eip=0x000960; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_1e))));	// 28353 mov     bx, [bp+var_1E] ;~ 0FBC:0960
cs=0xfbc;eip=0x000963; 	T(SHL(bx, 1));	// 28354 shl     bx, 1 ;~ 0FBC:0963
cs=0xfbc;eip=0x000965; 	T(SUB(ax, *(dw*)(((db*)&bkrdentr_triang_zadjust)+bx)));	// 28355 sub     ax, bkRdEntr_triang_zAdjust[bx] ;~ 0FBC:0965
cs=0xfbc;eip=0x000969; 	X(PUSH(ax));	// 28356 push    ax ;~ 0FBC:0969
cs=0xfbc;eip=0x00096a; 	X(PUSH(si));	// 28357 push    si ;~ 0FBC:096A
cs=0xfbc;eip=0x00096b; 	J(CALLF(sin_fast,0));	// 28358 call    sin_fast ;~ 0FBC:096B
cs=0xfbc;eip=0x000970; 	T(ADD(sp, 2));	// 28359 add     sp, 2 ;~ 0FBC:0970
cs=0xfbc;eip=0x000973; 	X(PUSH(ax));	// 28360 push    ax ;~ 0FBC:0973
cs=0xfbc;eip=0x000974; 	J(CALLF(multiply_and_scale,0));	// 28361 call    multiply_and_scale ;~ 0FBC:0974
cs=0xfbc;eip=0x000979; 	T(ADD(sp, 4));	// 28362 add     sp, 4 ;~ 0FBC:0979
cs=0xfbc;eip=0x00097c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2c))));	// 28363 push    [bp+var_2C] ;~ 0FBC:097C
cs=0xfbc;eip=0x00097f; 	X(PUSH(si));	// 28364 push    si ;~ 0FBC:097F
cs=0xfbc;eip=0x000980; 	T(MOV(di, ax));	// 28365 mov     di, ax ;~ 0FBC:0980
cs=0xfbc;eip=0x000982; 	J(CALLF(cos_fast,0));	// 28366 call    cos_fast ;~ 0FBC:0982
cs=0xfbc;eip=0x000987; 	T(ADD(sp, 2));	// 28367 add     sp, 2 ;~ 0FBC:0987
cs=0xfbc;eip=0x00098a; 	X(PUSH(ax));	// 28368 push    ax ;~ 0FBC:098A
cs=0xfbc;eip=0x00098b; 	J(CALLF(multiply_and_scale,0));	// 28369 call    multiply_and_scale ;~ 0FBC:098B
cs=0xfbc;eip=0x000990; 	T(ADD(sp, 4));	// 28370 add     sp, 4 ;~ 0FBC:0990
cs=0xfbc;eip=0x000993; 	T(ADD(ax, di));	// 28371 add     ax, di ;~ 0FBC:0993
cs=0xfbc;eip=0x000995; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 28372 mov     [bp+var_22], ax ;~ 0FBC:0995
cs=0xfbc;eip=0x000998; 	T(OR(ax, ax));	// 28373 or      ax, ax ;~ 0FBC:0998
cs=0xfbc;eip=0x00099a; 	J(JG(loc_1eb3f));	// 28374 jg      short loc_1EB3F ;~ 0FBC:099A
cs=0xfbc;eip=0x00099c; 	J(JMP(code_bto_blank));	// 28375 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:099C
loc_1eb3f:
	// 6159 
cs=0xfbc;eip=0x00099f; 	X(INC(planindex));	// 28380 inc     planindex ;~ 0FBC:099F
cs=0xfbc;eip=0x0009a3; 	J(JMP(code_bto_blank));	// 28381 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:09A3
code_bto_bankroad:
	// 6160 
cs=0xfbc;eip=0x0009a6; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 28386 cmp     [bp+var_32], 78h ; 'x' ; jumptable 0001E5B2 case 25 ;~ 0FBC:09A6
cs=0xfbc;eip=0x0009aa; 	J(JLE(loc_1eb4f));	// 28387 jle     short loc_1EB4F ;~ 0FBC:09AA
cs=0xfbc;eip=0x0009ac; 	J(JMP(code_bto_blank));	// 28388 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:09AC
loc_1eb4f:
	// 6161 
cs=0xfbc;eip=0x0009af; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 28392 mov     al, [bp+var_12] ;~ 0FBC:09AF
cs=0xfbc;eip=0x0009b2; 	X(MOV(current_surf_type, al));	// 28393 mov     current_surf_type, al ;~ 0FBC:09B2
cs=0xfbc;eip=0x0009b5; 	X(MOV(planindex, 6));	// 28394 mov     planindex, 6 ;~ 0FBC:09B5
cs=0xfbc;eip=0x0009bb; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x78));	// 28395 cmp     [bp+var_18], 78h ; 'x' ;~ 0FBC:09BB
cs=0xfbc;eip=0x0009bf; 	J(JGE(loc_1eb64));	// 28396 jge     short loc_1EB64 ;~ 0FBC:09BF
cs=0xfbc;eip=0x0009c1; 	J(JMP(code_bto_blank));	// 28397 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:09C1
loc_1eb64:
	// 6162 
cs=0xfbc;eip=0x0009c4; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), 0x200));	// 28401 mov     [bp+var_38], 200h ;~ 0FBC:09C4
cs=0xfbc;eip=0x0009c9; 	J(JMP(loc_1e87d));	// 28402 jmp     loc_1E87D ;~ 0FBC:09C9
code_bto_bankcorner:
	// 6163 
cs=0xfbc;eip=0x0009cc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 28407 mov     ax, [bp+var_28] ; jumptable 0001E5B2 case 26 ;~ 0FBC:09CC
cs=0xfbc;eip=0x0009cf; 	T(ADD(ah, 4));	// 28408 add     ah, 4 ;~ 0FBC:09CF
cs=0xfbc;eip=0x0009d2; 	X(PUSH(ax));	// 28409 push    ax ;~ 0FBC:09D2
cs=0xfbc;eip=0x0009d3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 28410 mov     ax, [bp+var_2C] ;~ 0FBC:09D3
cs=0xfbc;eip=0x0009d6; 	T(ADD(ah, 4));	// 28411 add     ah, 4 ;~ 0FBC:09D6
cs=0xfbc;eip=0x0009d9; 	X(PUSH(ax));	// 28412 push    ax ;~ 0FBC:09D9
cs=0xfbc;eip=0x0009da; 	J(CALLF(polarradius2d,0));	// 28413 call    polarRadius2D ;~ 0FBC:09DA
cs=0xfbc;eip=0x0009df; 	T(ADD(sp, 4));	// 28414 add     sp, 4 ;~ 0FBC:09DF
cs=0xfbc;eip=0x0009e2; 	T(SUB(ax, 0x600));	// 28415 sub     ax, 600h ;~ 0FBC:09E2
cs=0xfbc;eip=0x0009e5; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 28416 mov     [bp+var_A], ax ;~ 0FBC:09E5
cs=0xfbc;eip=0x0009e8; 	T(CMP(ax, 0x0FF88));	// 28417 cmp     ax, 0FF88h ;~ 0FBC:09E8
cs=0xfbc;eip=0x0009eb; 	J(JG(loc_1eb90));	// 28418 jg      short loc_1EB90 ;~ 0FBC:09EB
cs=0xfbc;eip=0x0009ed; 	J(JMP(code_bto_blank));	// 28419 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:09ED
loc_1eb90:
	// 6164 
cs=0xfbc;eip=0x0009f0; 	T(CMP(ax, 0x7E));	// 28423 cmp     ax, 7Eh ; '~' ;~ 0FBC:09F0
cs=0xfbc;eip=0x0009f3; 	J(JL(loc_1eb98));	// 28424 jl      short loc_1EB98 ;~ 0FBC:09F3
cs=0xfbc;eip=0x0009f5; 	J(JMP(code_bto_blank));	// 28425 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:09F5
loc_1eb98:
	// 6165 
cs=0xfbc;eip=0x0009f8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 28429 mov     ax, [bp+var_28] ;~ 0FBC:09F8
cs=0xfbc;eip=0x0009fb; 	T(ADD(ah, 4));	// 28430 add     ah, 4 ;~ 0FBC:09FB
cs=0xfbc;eip=0x0009fe; 	X(PUSH(ax));	// 28431 push    ax ;~ 0FBC:09FE
cs=0xfbc;eip=0x0009ff; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 28432 mov     ax, [bp+var_2C] ;~ 0FBC:09FF
cs=0xfbc;eip=0x000a02; 	T(ADD(ah, 4));	// 28433 add     ah, 4 ;~ 0FBC:0A02
cs=0xfbc;eip=0x000a05; 	X(PUSH(ax));	// 28434 push    ax ;~ 0FBC:0A05
cs=0xfbc;eip=0x000a06; 	J(CALLF(polarangle,0));	// 28435 call    polarAngle ;~ 0FBC:0A06
cs=0xfbc;eip=0x000a0b; 	T(ADD(sp, 4));	// 28436 add     sp, 4 ;~ 0FBC:0A0B
cs=0xfbc;eip=0x000a0e; 	T(SUB(ah, ah));	// 28437 sub     ah, ah ;~ 0FBC:0A0E
cs=0xfbc;eip=0x000a10; 	T(MOV(cx, 0x12));	// 28438 mov     cx, 12h ;~ 0FBC:0A10
cs=0xfbc;eip=0x000a13; 	T(IMUL1_2(cx));	// 28439 imul    cx ;~ 0FBC:0A13
cs=0xfbc;eip=0x000a15; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 28440 mov     [bp+var_22], ax ;~ 0FBC:0A15
cs=0xfbc;eip=0x000a18; 	T(MOV(cl, 8));	// 28441 mov     cl, 8 ;~ 0FBC:0A18
cs=0xfbc;eip=0x000a1a; 	T(SAR(ax, cl));	// 28442 sar     ax, cl ;~ 0FBC:0A1A
cs=0xfbc;eip=0x000a1c; 	T(SUB(ax, 0x11));	// 28443 sub     ax, 11h ;~ 0FBC:0A1C
cs=0xfbc;eip=0x000a1f; 	T(NEG(ax));	// 28444 neg     ax ;~ 0FBC:0A1F
cs=0xfbc;eip=0x000a21; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 28445 mov     [bp+var_1E], ax ;~ 0FBC:0A21
cs=0xfbc;eip=0x000a24; 	T(ADD(ax, 7));	// 28446 add     ax, 7 ;~ 0FBC:0A24
cs=0xfbc;eip=0x000a27; 	X(MOV(planindex, ax));	// 28447 mov     planindex, ax ;~ 0FBC:0A27
cs=0xfbc;eip=0x000a2a; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 28448 mov     al, [bp+var_12] ;~ 0FBC:0A2A
cs=0xfbc;eip=0x000a2d; 	X(MOV(current_surf_type, al));	// 28449 mov     current_surf_type, al ;~ 0FBC:0A2D
cs=0xfbc;eip=0x000a30; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x66));	// 28450 cmp     [bp+var_A], 66h ; 'f' ;~ 0FBC:0A30
cs=0xfbc;eip=0x000a34; 	J(JG(loc_1ebd9));	// 28451 jg      short loc_1EBD9 ;~ 0FBC:0A34
cs=0xfbc;eip=0x000a36; 	J(JMP(code_bto_blank));	// 28452 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0A36
loc_1ebd9:
	// 6166 
cs=0xfbc;eip=0x000a39; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), 0x200));	// 28456 mov     [bp+var_38], 200h ;~ 0FBC:0A39
cs=0xfbc;eip=0x000a3e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 28457 mov     ax, [bp+var_1E] ;~ 0FBC:0A3E
cs=0xfbc;eip=0x000a41; 	T(ADD(ax, 0x7B));	// 28458 add     ax, 7Bh ; '{' ;~ 0FBC:0A41
cs=0xfbc;eip=0x000a44; 	X(MOV(wallindex, ax));	// 28459 mov     wallindex, ax ;~ 0FBC:0A44
loc_1ebe7:
	// 6167 
cs=0xfbc;eip=0x000a47; 	X(MOV(byte_4392c, 0));	// 28463 mov     byte_4392C, 0 ;~ 0FBC:0A47
cs=0xfbc;eip=0x000a4c; 	J(JMP(code_bto_blank));	// 28464 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0A4C
code_bto_loop:
	// 6168 
cs=0xfbc;eip=0x000a50; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0));	// 28470 cmp     [bp+var_28], 0  ; jumptable 0001E5B2 case 27 ;~ 0FBC:0A50
cs=0xfbc;eip=0x000a54; 	J(JGE(loc_1ec0a));	// 28471 jge     short loc_1EC0A ;~ 0FBC:0A54
cs=0xfbc;eip=0x000a56; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), 0x33));	// 28472 mov     [bp+var_1C], 33h ; '3' ;~ 0FBC:0A56
cs=0xfbc;eip=0x000a5b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 28473 mov     ax, [bp+var_2C] ;~ 0FBC:0A5B
cs=0xfbc;eip=0x000a5e; 	T(NEG(ax));	// 28474 neg     ax ;~ 0FBC:0A5E
cs=0xfbc;eip=0x000a60; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 28475 mov     [bp+var_6], ax ;~ 0FBC:0A60
cs=0xfbc;eip=0x000a63; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 28476 mov     ax, [bp+var_28] ;~ 0FBC:0A63
cs=0xfbc;eip=0x000a66; 	T(NEG(ax));	// 28477 neg     ax ;~ 0FBC:0A66
cs=0xfbc;eip=0x000a68; 	J(JMP(loc_1ec18));	// 28478 jmp     short loc_1EC18 ;~ 0FBC:0A68
loc_1ec0a:
	// 6169 
cs=0xfbc;eip=0x000a6a; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), 0x2D));	// 28482 mov     [bp+var_1C], 2Dh ; '-' ;~ 0FBC:0A6A
cs=0xfbc;eip=0x000a6f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 28483 mov     ax, [bp+var_2C] ;~ 0FBC:0A6F
cs=0xfbc;eip=0x000a72; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 28484 mov     [bp+var_6], ax ;~ 0FBC:0A72
cs=0xfbc;eip=0x000a75; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 28485 mov     ax, [bp+var_28] ;~ 0FBC:0A75
loc_1ec18:
	// 6170 
cs=0xfbc;eip=0x000a78; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 28488 mov     [bp+var_2], ax ;~ 0FBC:0A78
cs=0xfbc;eip=0x000a7b; 	T(MOV(ax, loopsurface_maxz));	// 28489 mov     ax, loopSurface_maxZ ;~ 0FBC:0A7B
cs=0xfbc;eip=0x000a7e; 	T(DEC(ax));	// 28490 dec     ax ;~ 0FBC:0A7E
cs=0xfbc;eip=0x000a7f; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 28491 cmp     [bp+var_2], ax ;~ 0FBC:0A7F
cs=0xfbc;eip=0x000a82; 	J(JLE(loc_1ec38));	// 28492 jle     short loc_1EC38 ;~ 0FBC:0A82
cs=0xfbc;eip=0x000a84; 	T(MOV(ax, loopsurface_maxz));	// 28493 mov     ax, loopSurface_maxZ ;~ 0FBC:0A84
cs=0xfbc;eip=0x000a87; 	T(ADD(ax, 0x64));	// 28494 add     ax, 64h ; 'd' ;~ 0FBC:0A87
cs=0xfbc;eip=0x000a8a; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 28495 cmp     [bp+var_2], ax ;~ 0FBC:0A8A
cs=0xfbc;eip=0x000a8d; 	J(JLE(loc_1ec32));	// 28496 jle     short loc_1EC32 ;~ 0FBC:0A8D
cs=0xfbc;eip=0x000a8f; 	J(JMP(code_bto_loopbase));	// 28497 jmp     code_bto_loopBase ;~ 0FBC:0A8F
loc_1ec32:
	// 6171 
cs=0xfbc;eip=0x000a92; 	T(MOV(ax, loopsurface_maxz));	// 28501 mov     ax, loopSurface_maxZ ;~ 0FBC:0A92
cs=0xfbc;eip=0x000a95; 	T(DEC(ax));	// 28502 dec     ax ;~ 0FBC:0A95
cs=0xfbc;eip=0x000a96; 	J(JMP(loc_1ec3b));	// 28503 jmp     short loc_1EC3B ;~ 0FBC:0A96
loc_1ec38:
	// 6172 
cs=0xfbc;eip=0x000a98; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 28507 mov     ax, [bp+var_2] ;~ 0FBC:0A98
loc_1ec3b:
	// 6173 
cs=0xfbc;eip=0x000a9b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 28510 mov     [bp+var_1E], ax ;~ 0FBC:0A9B
cs=0xfbc;eip=0x000a9e; 	T(SUB(si, si));	// 28511 sub     si, si ;~ 0FBC:0A9E
cs=0xfbc;eip=0x000aa0; 	J(JMP(loc_1ec43));	// 28512 jmp     short loc_1EC43 ;~ 0FBC:0AA0
loc_1ec42:
	// 6174 
cs=0xfbc;eip=0x000aa2; 	T(INC(si));	// 28516 inc     si ;~ 0FBC:0AA2
loc_1ec43:
	// 6175 
cs=0xfbc;eip=0x000aa3; 	T(MOV(bx, si));	// 28519 mov     bx, si ;~ 0FBC:0AA3
cs=0xfbc;eip=0x000aa5; 	T(SHL(bx, 1));	// 28520 shl     bx, 1 ;~ 0FBC:0AA5
cs=0xfbc;eip=0x000aa7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 28521 mov     ax, [bp+var_1E] ;~ 0FBC:0AA7
cs=0xfbc;eip=0x000aaa; 	T(CMP(*(dw*)(((db*)&loopsurface_zbounds1)+bx), ax));	// 28522 cmp     loopSurface_ZBounds1[bx], ax ;~ 0FBC:0AAA
cs=0xfbc;eip=0x000aae; 	J(JL(loc_1ec42));	// 28523 jl      short loc_1EC42 ;~ 0FBC:0AAE
cs=0xfbc;eip=0x000ab0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 28524 mov     bx, [bp+arg_0] ;~ 0FBC:0AB0
cs=0xfbc;eip=0x000ab3; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 28525 mov     ax, [bx+2] ;~ 0FBC:0AB3
cs=0xfbc;eip=0x000ab6; 	T(SUB(ax, terrainheight));	// 28526 sub     ax, terrainHeight ;~ 0FBC:0AB6
cs=0xfbc;eip=0x000aba; 	T(CMP(ax, 0x20C));	// 28527 cmp     ax, 20Ch        ; upside-down limit ;~ 0FBC:0ABA
cs=0xfbc;eip=0x000abd; 	J(JG(loc_1ec62));	// 28528 jg      short loc_1EC62 ;~ 0FBC:0ABD
cs=0xfbc;eip=0x000abf; 	J(JMP(loc_1ed04));	// 28529 jmp     loc_1ED04 ;~ 0FBC:0ABF
loc_1ec62:
	// 6176 
cs=0xfbc;eip=0x000ac2; 	T(MOV(ax, 5));	// 28533 mov     ax, 5 ;~ 0FBC:0AC2
cs=0xfbc;eip=0x000ac5; 	T(SUB(ax, si));	// 28534 sub     ax, si ;~ 0FBC:0AC5
cs=0xfbc;eip=0x000ac7; 	T(MOV(si, ax));	// 28535 mov     si, ax ;~ 0FBC:0AC7
cs=0xfbc;eip=0x000ac9; 	T(MOV(di, si));	// 28536 mov     di, si ;~ 0FBC:0AC9
cs=0xfbc;eip=0x000acb; 	T(SHL(di, 1));	// 28537 shl     di, 1 ;~ 0FBC:0ACB
cs=0xfbc;eip=0x000acd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28538 mov     ax, [bp+var_6] ;~ 0FBC:0ACD
cs=0xfbc;eip=0x000ad0; 	T(CMP(*(dw*)(((db*)&loopsurface_xbounds0)+di), ax));	// 28539 cmp     loopSurface_XBounds0[di], ax ;~ 0FBC:0AD0
cs=0xfbc;eip=0x000ad4; 	J(JLE(loc_1ec79));	// 28540 jle     short loc_1EC79 ;~ 0FBC:0AD4
cs=0xfbc;eip=0x000ad6; 	J(JMP(code_bto_blank));	// 28541 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0AD6
loc_1ec79:
	// 6177 
cs=0xfbc;eip=0x000ad9; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_xbounds1)+di)));	// 28545 mov     ax, loopSurface_XBounds1[di] ;~ 0FBC:0AD9
cs=0xfbc;eip=0x000add; 	T(ADD(ax, 0x190));	// 28546 add     ax, 190h ;~ 0FBC:0ADD
cs=0xfbc;eip=0x000ae0; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28547 cmp     ax, [bp+var_6] ;~ 0FBC:0AE0
cs=0xfbc;eip=0x000ae3; 	J(JGE(loc_1ec88));	// 28548 jge     short loc_1EC88 ;~ 0FBC:0AE3
cs=0xfbc;eip=0x000ae5; 	J(JMP(code_bto_blank));	// 28549 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0AE5
loc_1ec88:
	// 6178 
cs=0xfbc;eip=0x000ae8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28553 mov     ax, [bp+var_6] ;~ 0FBC:0AE8
cs=0xfbc;eip=0x000aeb; 	T(CMP(*(dw*)(((db*)&loopsurface_xbounds1)+di), ax));	// 28554 cmp     loopSurface_XBounds1[di], ax ;~ 0FBC:0AEB
cs=0xfbc;eip=0x000aef; 	J(JGE(loc_1ec9d));	// 28555 jge     short loc_1EC9D ;~ 0FBC:0AEF
cs=0xfbc;eip=0x000af1; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_xbounds0)+di)));	// 28556 mov     ax, loopSurface_XBounds0[di] ;~ 0FBC:0AF1
cs=0xfbc;eip=0x000af5; 	T(ADD(ax, 0x190));	// 28557 add     ax, 190h ;~ 0FBC:0AF5
cs=0xfbc;eip=0x000af8; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28558 cmp     ax, [bp+var_6] ;~ 0FBC:0AF8
cs=0xfbc;eip=0x000afb; 	J(JG(loc_1ecf3));	// 28559 jg      short loc_1ECF3 ;~ 0FBC:0AFB
loc_1ec9d:
	// 6179 
cs=0xfbc;eip=0x000afd; 	T(MOV(di, si));	// 28562 mov     di, si ;~ 0FBC:0AFD
cs=0xfbc;eip=0x000aff; 	T(SHL(di, 1));	// 28563 shl     di, 1 ;~ 0FBC:0AFF
cs=0xfbc;eip=0x000b01; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_zbounds1)+di)));	// 28564 mov     ax, loopSurface_ZBounds1[di] ;~ 0FBC:0B01
cs=0xfbc;eip=0x000b05; 	T(SUB(ax, *(dw*)(((db*)&loopsurface_zbounds0)+di)));	// 28565 sub     ax, loopSurface_ZBounds0[di] ;~ 0FBC:0B05
cs=0xfbc;eip=0x000b09; 	T(CWD);	// 28566 cwd ;~ 0FBC:0B09
cs=0xfbc;eip=0x000b0a; 	X(PUSH(dx));	// 28567 push    dx ;~ 0FBC:0B0A
cs=0xfbc;eip=0x000b0b; 	X(PUSH(ax));	// 28568 push    ax ;~ 0FBC:0B0B
cs=0xfbc;eip=0x000b0c; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_zbounds0)+di)));	// 28569 mov     ax, loopSurface_ZBounds0[di] ;~ 0FBC:0B0C
cs=0xfbc;eip=0x000b10; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 28570 sub     ax, [bp+var_1E] ;~ 0FBC:0B10
cs=0xfbc;eip=0x000b13; 	T(CWD);	// 28571 cwd ;~ 0FBC:0B13
cs=0xfbc;eip=0x000b14; 	X(PUSH(dx));	// 28572 push    dx ;~ 0FBC:0B14
cs=0xfbc;eip=0x000b15; 	X(PUSH(ax));	// 28573 push    ax ;~ 0FBC:0B15
cs=0xfbc;eip=0x000b16; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_xbounds0)+di)));	// 28574 mov     ax, loopSurface_XBounds0[di] ;~ 0FBC:0B16
cs=0xfbc;eip=0x000b1a; 	T(SUB(ax, *(dw*)(((db*)&loopsurface_xbounds1)+di)));	// 28575 sub     ax, loopSurface_XBounds1[di] ;~ 0FBC:0B1A
cs=0xfbc;eip=0x000b1e; 	T(CWD);	// 28576 cwd ;~ 0FBC:0B1E
cs=0xfbc;eip=0x000b1f; 	X(PUSH(dx));	// 28577 push    dx ;~ 0FBC:0B1F
cs=0xfbc;eip=0x000b20; 	X(PUSH(ax));	// 28578 push    ax ;~ 0FBC:0B20
cs=0xfbc;eip=0x000b21; 	J(CALLF(__aflmul,0));	// 28579 call    __aFlmul ;~ 0FBC:0B21
cs=0xfbc;eip=0x000b26; 	X(PUSH(dx));	// 28580 push    dx ;~ 0FBC:0B26
cs=0xfbc;eip=0x000b27; 	X(PUSH(ax));	// 28581 push    ax ;~ 0FBC:0B27
cs=0xfbc;eip=0x000b28; 	J(CALLF(__afldiv,0));	// 28582 call    __aFldiv ;~ 0FBC:0B28
cs=0xfbc;eip=0x000b2d; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 28583 mov     [bp+var_22], ax ;~ 0FBC:0B2D
cs=0xfbc;eip=0x000b30; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_xbounds0)+di)));	// 28584 mov     ax, loopSurface_XBounds0[di] ;~ 0FBC:0B30
cs=0xfbc;eip=0x000b34; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_22))));	// 28585 add     ax, [bp+var_22] ;~ 0FBC:0B34
cs=0xfbc;eip=0x000b37; 	X(MOV(*(dw*)(raddr(ss,bp+var_3c)), ax));	// 28586 mov     [bp+var_3C], ax ;~ 0FBC:0B37
cs=0xfbc;eip=0x000b3a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28587 mov     ax, [bp+var_6] ;~ 0FBC:0B3A
cs=0xfbc;eip=0x000b3d; 	T(CMP(*(dw*)(raddr(ss,bp+var_3c)), ax));	// 28588 cmp     [bp+var_3C], ax ;~ 0FBC:0B3D
cs=0xfbc;eip=0x000b40; 	J(JL(loc_1ece5));	// 28589 jl      short loc_1ECE5 ;~ 0FBC:0B40
cs=0xfbc;eip=0x000b42; 	J(JMP(code_bto_blank));	// 28590 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0B42
loc_1ece5:
	// 6180 
cs=0xfbc;eip=0x000b45; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3c))));	// 28594 mov     ax, [bp+var_3C] ;~ 0FBC:0B45
cs=0xfbc;eip=0x000b48; 	T(ADD(ax, 0x190));	// 28595 add     ax, 190h ;~ 0FBC:0B48
cs=0xfbc;eip=0x000b4b; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28596 cmp     ax, [bp+var_6] ;~ 0FBC:0B4B
cs=0xfbc;eip=0x000b4e; 	J(JG(loc_1ecf3));	// 28597 jg      short loc_1ECF3 ;~ 0FBC:0B4E
cs=0xfbc;eip=0x000b50; 	J(JMP(code_bto_blank));	// 28598 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0B50
loc_1ecf3:
	// 6181 
cs=0xfbc;eip=0x000b53; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 28603 mov     ax, [bp+var_1C] ;~ 0FBC:0B53
cs=0xfbc;eip=0x000b56; 	T(ADD(ax, si));	// 28604 add     ax, si ;~ 0FBC:0B56
cs=0xfbc;eip=0x000b58; 	X(MOV(planindex, ax));	// 28605 mov     planindex, ax ;~ 0FBC:0B58
cs=0xfbc;eip=0x000b5b; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 28606 mov     al, [bp+var_12] ;~ 0FBC:0B5B
cs=0xfbc;eip=0x000b5e; 	X(MOV(current_surf_type, al));	// 28607 mov     current_surf_type, al ;~ 0FBC:0B5E
cs=0xfbc;eip=0x000b61; 	J(JMP(loc_1ebe7));	// 28608 jmp     loc_1EBE7 ;~ 0FBC:0B61
loc_1ed04:
	// 6182 
cs=0xfbc;eip=0x000b64; 	T(CMP(si, 1));	// 28612 cmp     si, 1 ;~ 0FBC:0B64
cs=0xfbc;eip=0x000b67; 	J(JLE(loc_1ed1b));	// 28613 jle     short loc_1ED1B ;~ 0FBC:0B67
cs=0xfbc;eip=0x000b69; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 28614 mov     bx, [bp+arg_0] ;~ 0FBC:0B69
cs=0xfbc;eip=0x000b6c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 28615 mov     ax, [bx+2] ;~ 0FBC:0B6C
cs=0xfbc;eip=0x000b6f; 	T(SUB(ax, terrainheight));	// 28616 sub     ax, terrainHeight ;~ 0FBC:0B6F
cs=0xfbc;eip=0x000b73; 	T(CMP(ax, 0x64));	// 28617 cmp     ax, 64h ; 'd' ;~ 0FBC:0B73
cs=0xfbc;eip=0x000b76; 	J(JGE(loc_1ed1b));	// 28618 jge     short loc_1ED1B ;~ 0FBC:0B76
cs=0xfbc;eip=0x000b78; 	J(JMP(code_bto_loopbase));	// 28619 jmp     code_bto_loopBase ;~ 0FBC:0B78
loc_1ed1b:
	// 6183 
cs=0xfbc;eip=0x000b7b; 	T(MOV(di, si));	// 28624 mov     di, si ;~ 0FBC:0B7B
cs=0xfbc;eip=0x000b7d; 	T(SHL(di, 1));	// 28625 shl     di, 1 ;~ 0FBC:0B7D
cs=0xfbc;eip=0x000b7f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28626 mov     ax, [bp+var_6] ;~ 0FBC:0B7F
cs=0xfbc;eip=0x000b82; 	T(CMP(*(dw*)(((db*)&loopsurface_xbounds0)+di), ax));	// 28627 cmp     loopSurface_XBounds0[di], ax ;~ 0FBC:0B82
cs=0xfbc;eip=0x000b86; 	J(JLE(loc_1ed2b));	// 28628 jle     short loc_1ED2B ;~ 0FBC:0B86
cs=0xfbc;eip=0x000b88; 	J(JMP(code_bto_loopbase));	// 28629 jmp     code_bto_loopBase ;~ 0FBC:0B88
loc_1ed2b:
	// 6184 
cs=0xfbc;eip=0x000b8b; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_xbounds1)+di)));	// 28633 mov     ax, loopSurface_XBounds1[di] ;~ 0FBC:0B8B
cs=0xfbc;eip=0x000b8f; 	T(ADD(ax, 0x190));	// 28634 add     ax, 190h ;~ 0FBC:0B8F
cs=0xfbc;eip=0x000b92; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28635 cmp     ax, [bp+var_6] ;~ 0FBC:0B92
cs=0xfbc;eip=0x000b95; 	J(JL(code_bto_loopbase));	// 28636 jl      short code_bto_loopBase ;~ 0FBC:0B95
cs=0xfbc;eip=0x000b97; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28637 mov     ax, [bp+var_6] ;~ 0FBC:0B97
cs=0xfbc;eip=0x000b9a; 	T(CMP(*(dw*)(((db*)&loopsurface_xbounds1)+di), ax));	// 28638 cmp     loopSurface_XBounds1[di], ax ;~ 0FBC:0B9A
cs=0xfbc;eip=0x000b9e; 	J(JGE(loc_1ed4c));	// 28639 jge     short loc_1ED4C ;~ 0FBC:0B9E
cs=0xfbc;eip=0x000ba0; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_xbounds0)+di)));	// 28640 mov     ax, loopSurface_XBounds0[di] ;~ 0FBC:0BA0
cs=0xfbc;eip=0x000ba4; 	T(ADD(ax, 0x190));	// 28641 add     ax, 190h ;~ 0FBC:0BA4
cs=0xfbc;eip=0x000ba7; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28642 cmp     ax, [bp+var_6] ;~ 0FBC:0BA7
cs=0xfbc;eip=0x000baa; 	J(JG(loc_1ecf3));	// 28643 jg      short loc_1ECF3 ;~ 0FBC:0BAA
loc_1ed4c:
	// 6185 
cs=0xfbc;eip=0x000bac; 	T(MOV(di, si));	// 28646 mov     di, si ;~ 0FBC:0BAC
cs=0xfbc;eip=0x000bae; 	T(SHL(di, 1));	// 28647 shl     di, 1 ;~ 0FBC:0BAE
cs=0xfbc;eip=0x000bb0; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_xbounds0)+di)));	// 28648 mov     ax, loopSurface_XBounds0[di] ;~ 0FBC:0BB0
cs=0xfbc;eip=0x000bb4; 	T(CMP(*(dw*)(((db*)&loopsurface_xbounds1)+di), ax));	// 28649 cmp     loopSurface_XBounds1[di], ax ;~ 0FBC:0BB4
cs=0xfbc;eip=0x000bb8; 	J(JZ(code_bto_loopbase));	// 28650 jz      short code_bto_loopBase ;~ 0FBC:0BB8
cs=0xfbc;eip=0x000bba; 	T(MOV(di, si));	// 28651 mov     di, si ;~ 0FBC:0BBA
cs=0xfbc;eip=0x000bbc; 	T(SHL(di, 1));	// 28652 shl     di, 1 ;~ 0FBC:0BBC
cs=0xfbc;eip=0x000bbe; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_zbounds1)+di)));	// 28653 mov     ax, loopSurface_ZBounds1[di] ;~ 0FBC:0BBE
cs=0xfbc;eip=0x000bc2; 	T(SUB(ax, *(dw*)(((db*)&loopsurface_zbounds0)+di)));	// 28654 sub     ax, loopSurface_ZBounds0[di] ;~ 0FBC:0BC2
cs=0xfbc;eip=0x000bc6; 	T(CWD);	// 28655 cwd ;~ 0FBC:0BC6
cs=0xfbc;eip=0x000bc7; 	X(PUSH(dx));	// 28656 push    dx ;~ 0FBC:0BC7
cs=0xfbc;eip=0x000bc8; 	X(PUSH(ax));	// 28657 push    ax ;~ 0FBC:0BC8
cs=0xfbc;eip=0x000bc9; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_zbounds0)+di)));	// 28658 mov     ax, loopSurface_ZBounds0[di] ;~ 0FBC:0BC9
cs=0xfbc;eip=0x000bcd; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 28659 sub     ax, [bp+var_1E] ;~ 0FBC:0BCD
cs=0xfbc;eip=0x000bd0; 	T(CWD);	// 28660 cwd ;~ 0FBC:0BD0
cs=0xfbc;eip=0x000bd1; 	X(PUSH(dx));	// 28661 push    dx ;~ 0FBC:0BD1
cs=0xfbc;eip=0x000bd2; 	X(PUSH(ax));	// 28662 push    ax ;~ 0FBC:0BD2
cs=0xfbc;eip=0x000bd3; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_xbounds0)+di)));	// 28663 mov     ax, loopSurface_XBounds0[di] ;~ 0FBC:0BD3
cs=0xfbc;eip=0x000bd7; 	T(SUB(ax, *(dw*)(((db*)&loopsurface_xbounds1)+di)));	// 28664 sub     ax, loopSurface_XBounds1[di] ;~ 0FBC:0BD7
cs=0xfbc;eip=0x000bdb; 	T(CWD);	// 28665 cwd ;~ 0FBC:0BDB
cs=0xfbc;eip=0x000bdc; 	X(PUSH(dx));	// 28666 push    dx ;~ 0FBC:0BDC
cs=0xfbc;eip=0x000bdd; 	X(PUSH(ax));	// 28667 push    ax ;~ 0FBC:0BDD
cs=0xfbc;eip=0x000bde; 	J(CALLF(__aflmul,0));	// 28668 call    __aFlmul ;~ 0FBC:0BDE
cs=0xfbc;eip=0x000be3; 	X(PUSH(dx));	// 28669 push    dx ;~ 0FBC:0BE3
cs=0xfbc;eip=0x000be4; 	X(PUSH(ax));	// 28670 push    ax ;~ 0FBC:0BE4
cs=0xfbc;eip=0x000be5; 	J(CALLF(__afldiv,0));	// 28671 call    __aFldiv ;~ 0FBC:0BE5
cs=0xfbc;eip=0x000bea; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 28672 mov     [bp+var_22], ax ;~ 0FBC:0BEA
cs=0xfbc;eip=0x000bed; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_xbounds0)+di)));	// 28673 mov     ax, loopSurface_XBounds0[di] ;~ 0FBC:0BED
cs=0xfbc;eip=0x000bf1; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_22))));	// 28674 add     ax, [bp+var_22] ;~ 0FBC:0BF1
cs=0xfbc;eip=0x000bf4; 	X(MOV(*(dw*)(raddr(ss,bp+var_3c)), ax));	// 28675 mov     [bp+var_3C], ax ;~ 0FBC:0BF4
cs=0xfbc;eip=0x000bf7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28676 mov     ax, [bp+var_6] ;~ 0FBC:0BF7
cs=0xfbc;eip=0x000bfa; 	T(CMP(*(dw*)(raddr(ss,bp+var_3c)), ax));	// 28677 cmp     [bp+var_3C], ax ;~ 0FBC:0BFA
cs=0xfbc;eip=0x000bfd; 	J(JGE(code_bto_loopbase));	// 28678 jge     short code_bto_loopBase ;~ 0FBC:0BFD
cs=0xfbc;eip=0x000bff; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3c))));	// 28679 mov     ax, [bp+var_3C] ;~ 0FBC:0BFF
cs=0xfbc;eip=0x000c02; 	T(ADD(ax, 0x190));	// 28680 add     ax, 190h ;~ 0FBC:0C02
cs=0xfbc;eip=0x000c05; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28681 cmp     ax, [bp+var_6] ;~ 0FBC:0C05
cs=0xfbc;eip=0x000c08; 	J(JLE(code_bto_loopbase));	// 28682 jle     short code_bto_loopBase ;~ 0FBC:0C08
cs=0xfbc;eip=0x000c0a; 	J(JMP(loc_1ecf3));	// 28683 jmp     loc_1ECF3 ;~ 0FBC:0C0A
code_bto_loopbase:
	// 6186 
cs=0xfbc;eip=0x000c0d; 	T(SUB(si, si));	// 28688 sub     si, si ;~ 0FBC:0C0D
cs=0xfbc;eip=0x000c0f; 	J(JMP(loc_1edb3));	// 28689 jmp     short loc_1EDB3 ;~ 0FBC:0C0F
loc_1edb2:
	// 6187 
cs=0xfbc;eip=0x000c12; 	T(INC(si));	// 28694 inc     si ;~ 0FBC:0C12
loc_1edb3:
	// 6188 
cs=0xfbc;eip=0x000c13; 	T(MOV(bx, si));	// 28697 mov     bx, si ;~ 0FBC:0C13
cs=0xfbc;eip=0x000c15; 	T(SHL(bx, 1));	// 28698 shl     bx, 1 ;~ 0FBC:0C15
cs=0xfbc;eip=0x000c17; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 28699 mov     ax, [bp+var_2] ;~ 0FBC:0C17
cs=0xfbc;eip=0x000c1a; 	T(CMP(*(dw*)(((db*)&loopbase_zbounds1)+bx), ax));	// 28700 cmp     loopBase_ZBounds1[bx], ax ;~ 0FBC:0C1A
cs=0xfbc;eip=0x000c1e; 	J(JL(loc_1edb2));	// 28701 jl      short loc_1EDB2 ;~ 0FBC:0C1E
cs=0xfbc;eip=0x000c20; 	T(MOV(di, si));	// 28702 mov     di, si ;~ 0FBC:0C20
cs=0xfbc;eip=0x000c22; 	T(SHL(di, 1));	// 28703 shl     di, 1 ;~ 0FBC:0C22
cs=0xfbc;eip=0x000c24; 	T(MOV(ax, *(dw*)(((db*)&loopbase_zbounds1)+di)));	// 28704 mov     ax, loopBase_ZBounds1[di] ;~ 0FBC:0C24
cs=0xfbc;eip=0x000c28; 	T(SUB(ax, *(dw*)(((db*)&loopbase_zbounds0)+di)));	// 28705 sub     ax, loopBase_ZBounds0[di] ;~ 0FBC:0C28
cs=0xfbc;eip=0x000c2c; 	T(CWD);	// 28706 cwd ;~ 0FBC:0C2C
cs=0xfbc;eip=0x000c2d; 	X(PUSH(dx));	// 28707 push    dx ;~ 0FBC:0C2D
cs=0xfbc;eip=0x000c2e; 	X(PUSH(ax));	// 28708 push    ax ;~ 0FBC:0C2E
cs=0xfbc;eip=0x000c2f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 28709 mov     ax, [bp+var_2] ;~ 0FBC:0C2F
cs=0xfbc;eip=0x000c32; 	T(SUB(ax, *(dw*)(((db*)&loopbase_zbounds0)+di)));	// 28710 sub     ax, loopBase_ZBounds0[di] ;~ 0FBC:0C32
cs=0xfbc;eip=0x000c36; 	T(CWD);	// 28711 cwd ;~ 0FBC:0C36
cs=0xfbc;eip=0x000c37; 	X(PUSH(dx));	// 28712 push    dx ;~ 0FBC:0C37
cs=0xfbc;eip=0x000c38; 	X(PUSH(ax));	// 28713 push    ax ;~ 0FBC:0C38
cs=0xfbc;eip=0x000c39; 	T(MOV(ax, *(dw*)(((db*)&loopbase_innxbounds1)+di)));	// 28714 mov     ax, loopBase_InnXBounds1[di] ;~ 0FBC:0C39
cs=0xfbc;eip=0x000c3d; 	T(SUB(ax, *(dw*)(((db*)&loopbae_innxbounds0)+di)));	// 28715 sub     ax, loopBae_InnXBounds0[di] ;~ 0FBC:0C3D
cs=0xfbc;eip=0x000c41; 	T(CWD);	// 28716 cwd ;~ 0FBC:0C41
cs=0xfbc;eip=0x000c42; 	X(PUSH(dx));	// 28717 push    dx ;~ 0FBC:0C42
cs=0xfbc;eip=0x000c43; 	X(PUSH(ax));	// 28718 push    ax ;~ 0FBC:0C43
cs=0xfbc;eip=0x000c44; 	J(CALLF(__aflmul,0));	// 28719 call    __aFlmul ;~ 0FBC:0C44
cs=0xfbc;eip=0x000c49; 	X(PUSH(dx));	// 28720 push    dx ;~ 0FBC:0C49
cs=0xfbc;eip=0x000c4a; 	X(PUSH(ax));	// 28721 push    ax ;~ 0FBC:0C4A
cs=0xfbc;eip=0x000c4b; 	J(CALLF(__afldiv,0));	// 28722 call    __aFldiv ;~ 0FBC:0C4B
cs=0xfbc;eip=0x000c50; 	T(ADD(ax, *(dw*)(((db*)&loopbae_innxbounds0)+di)));	// 28723 add     ax, loopBae_InnXBounds0[di] ;~ 0FBC:0C50
cs=0xfbc;eip=0x000c54; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 28724 mov     [bp+var_1E], ax ;~ 0FBC:0C54
cs=0xfbc;eip=0x000c57; 	T(MOV(ax, *(dw*)(((db*)&loopbase_zbounds1)+di)));	// 28725 mov     ax, loopBase_ZBounds1[di] ;~ 0FBC:0C57
cs=0xfbc;eip=0x000c5b; 	T(SUB(ax, *(dw*)(((db*)&loopbase_zbounds0)+di)));	// 28726 sub     ax, loopBase_ZBounds0[di] ;~ 0FBC:0C5B
cs=0xfbc;eip=0x000c5f; 	T(CWD);	// 28727 cwd ;~ 0FBC:0C5F
cs=0xfbc;eip=0x000c60; 	X(PUSH(dx));	// 28728 push    dx ;~ 0FBC:0C60
cs=0xfbc;eip=0x000c61; 	X(PUSH(ax));	// 28729 push    ax ;~ 0FBC:0C61
cs=0xfbc;eip=0x000c62; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 28730 mov     ax, [bp+var_2] ;~ 0FBC:0C62
cs=0xfbc;eip=0x000c65; 	T(SUB(ax, *(dw*)(((db*)&loopbase_zbounds0)+di)));	// 28731 sub     ax, loopBase_ZBounds0[di] ;~ 0FBC:0C65
cs=0xfbc;eip=0x000c69; 	T(CWD);	// 28732 cwd ;~ 0FBC:0C69
cs=0xfbc;eip=0x000c6a; 	X(PUSH(dx));	// 28733 push    dx ;~ 0FBC:0C6A
cs=0xfbc;eip=0x000c6b; 	X(PUSH(ax));	// 28734 push    ax ;~ 0FBC:0C6B
cs=0xfbc;eip=0x000c6c; 	T(MOV(ax, *(dw*)(((db*)&loopbase_outxbounds1)+di)));	// 28735 mov     ax, loopBase_OutXBounds1[di] ;~ 0FBC:0C6C
cs=0xfbc;eip=0x000c70; 	T(SUB(ax, *(dw*)(((db*)&loopbase_outxbounds0)+di)));	// 28736 sub     ax, loopBase_OutXBounds0[di] ;~ 0FBC:0C70
cs=0xfbc;eip=0x000c74; 	T(CWD);	// 28737 cwd ;~ 0FBC:0C74
cs=0xfbc;eip=0x000c75; 	X(PUSH(dx));	// 28738 push    dx ;~ 0FBC:0C75
cs=0xfbc;eip=0x000c76; 	X(PUSH(ax));	// 28739 push    ax ;~ 0FBC:0C76
cs=0xfbc;eip=0x000c77; 	J(CALLF(__aflmul,0));	// 28740 call    __aFlmul ;~ 0FBC:0C77
cs=0xfbc;eip=0x000c7c; 	X(PUSH(dx));	// 28741 push    dx ;~ 0FBC:0C7C
cs=0xfbc;eip=0x000c7d; 	X(PUSH(ax));	// 28742 push    ax ;~ 0FBC:0C7D
cs=0xfbc;eip=0x000c7e; 	J(CALLF(__afldiv,0));	// 28743 call    __aFldiv ;~ 0FBC:0C7E
cs=0xfbc;eip=0x000c83; 	T(ADD(ax, *(dw*)(((db*)&loopbase_outxbounds0)+di)));	// 28744 add     ax, loopBase_OutXBounds0[di] ;~ 0FBC:0C83
cs=0xfbc;eip=0x000c87; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 28745 mov     [bp+var_22], ax ;~ 0FBC:0C87
cs=0xfbc;eip=0x000c8a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 28746 mov     ax, [bp+var_1E] ;~ 0FBC:0C8A
cs=0xfbc;eip=0x000c8d; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 28747 cmp     [bp+var_6], ax ;~ 0FBC:0C8D
cs=0xfbc;eip=0x000c90; 	J(JGE(loc_1ee35));	// 28748 jge     short loc_1EE35 ;~ 0FBC:0C90
cs=0xfbc;eip=0x000c92; 	J(JMP(code_bto_blank));	// 28749 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0C92
loc_1ee35:
	// 6189 
cs=0xfbc;eip=0x000c95; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 28753 mov     ax, [bp+var_22] ;~ 0FBC:0C95
cs=0xfbc;eip=0x000c98; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 28754 cmp     [bp+var_6], ax ;~ 0FBC:0C98
cs=0xfbc;eip=0x000c9b; 	J(JMP(loc_1e8dc));	// 28755 jmp     loc_1E8DC ;~ 0FBC:0C9B
code_bto_tunnel:
	// 6190 
cs=0xfbc;eip=0x000c9e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 28760 mov     bx, [bp+arg_0]  ; jumptable 0001E5B2 case 28 ;~ 0FBC:0C9E
cs=0xfbc;eip=0x000ca1; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 28761 mov     ax, [bx+2] ;~ 0FBC:0CA1
cs=0xfbc;eip=0x000ca4; 	T(SUB(ax, terrainheight));	// 28762 sub     ax, terrainHeight ;~ 0FBC:0CA4
cs=0xfbc;eip=0x000ca8; 	T(CMP(ax, 0x90));	// 28763 cmp     ax, 90h ; 'ê' ;~ 0FBC:0CA8
cs=0xfbc;eip=0x000cab; 	J(JGE(loc_1ee5c));	// 28764 jge     short loc_1EE5C ;~ 0FBC:0CAB
cs=0xfbc;eip=0x000cad; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 28765 mov     bx, [bp+arg_2] ;~ 0FBC:0CAD
cs=0xfbc;eip=0x000cb0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 28766 mov     ax, [bx+2] ;~ 0FBC:0CB0
cs=0xfbc;eip=0x000cb3; 	T(SUB(ax, terrainheight));	// 28767 sub     ax, terrainHeight ;~ 0FBC:0CB3
cs=0xfbc;eip=0x000cb7; 	T(CMP(ax, 0x90));	// 28768 cmp     ax, 90h ; 'ê' ;~ 0FBC:0CB7
cs=0xfbc;eip=0x000cba; 	J(JL(loc_1ee76));	// 28769 jl      short loc_1EE76 ;~ 0FBC:0CBA
loc_1ee5c:
	// 6191 
cs=0xfbc;eip=0x000cbc; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x10E));	// 28772 cmp     [bp+var_32], 10Eh ;~ 0FBC:0CBC
cs=0xfbc;eip=0x000cc1; 	J(JL(loc_1ee66));	// 28773 jl      short loc_1EE66 ;~ 0FBC:0CC1
cs=0xfbc;eip=0x000cc3; 	J(JMP(code_bto_blank));	// 28774 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0CC3
loc_1ee66:
	// 6192 
cs=0xfbc;eip=0x000cc6; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 28778 mov     al, [bp+var_12] ;~ 0FBC:0CC6
cs=0xfbc;eip=0x000cc9; 	X(MOV(current_surf_type, al));	// 28779 mov     current_surf_type, al ;~ 0FBC:0CC9
cs=0xfbc;eip=0x000ccc; 	X(MOV(planindex, 0x85));	// 28780 mov     planindex, 85h ; 'Ö' ;~ 0FBC:0CCC
cs=0xfbc;eip=0x000cd2; 	J(JMP(code_bto_blank));	// 28781 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0CD2
loc_1ee76:
	// 6193 
cs=0xfbc;eip=0x000cd6; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 28786 cmp     [bp+var_32], 78h ; 'x' ;~ 0FBC:0CD6
cs=0xfbc;eip=0x000cda; 	J(JGE(loc_1ee82));	// 28787 jge     short loc_1EE82 ;~ 0FBC:0CDA
cs=0xfbc;eip=0x000cdc; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 28788 mov     al, [bp+var_12] ;~ 0FBC:0CDC
cs=0xfbc;eip=0x000cdf; 	X(MOV(current_surf_type, al));	// 28789 mov     current_surf_type, al ;~ 0FBC:0CDF
loc_1ee82:
	// 6194 
cs=0xfbc;eip=0x000ce2; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x78));	// 28792 cmp     [bp+var_2C], 78h ; 'x' ;~ 0FBC:0CE2
cs=0xfbc;eip=0x000ce6; 	J(JL(loc_1eec6));	// 28793 jl      short loc_1EEC6 ;~ 0FBC:0CE6
cs=0xfbc;eip=0x000ce8; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x10E));	// 28794 cmp     [bp+var_2C], 10Eh ;~ 0FBC:0CE8
cs=0xfbc;eip=0x000ced; 	J(JG(loc_1eec6));	// 28795 jg      short loc_1EEC6 ;~ 0FBC:0CED
cs=0xfbc;eip=0x000cef; 	X(MOV(wallheight, 0x90));	// 28796 mov     wallHeight, 90h ; 'ê' ;~ 0FBC:0CEF
cs=0xfbc;eip=0x000cf5; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FE00));	// 28797 cmp     [bp+var_14], 0FE00h ;~ 0FBC:0CF5
cs=0xfbc;eip=0x000cfa; 	J(JLE(loc_1eee6));	// 28798 jle     short loc_1EEE6 ;~ 0FBC:0CFA
cs=0xfbc;eip=0x000cfc; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x200));	// 28799 cmp     [bp+var_14], 200h ;~ 0FBC:0CFC
cs=0xfbc;eip=0x000d01; 	J(JGE(loc_1eef7));	// 28800 jge     short loc_1EEF7 ;~ 0FBC:0D01
cs=0xfbc;eip=0x000d03; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x78));	// 28801 cmp     [bp+var_18], 78h ; 'x' ;~ 0FBC:0D03
cs=0xfbc;eip=0x000d07; 	J(JG(loc_1eeb2));	// 28802 jg      short loc_1EEB2 ;~ 0FBC:0D07
cs=0xfbc;eip=0x000d09; 	X(MOV(wallindex, 0x98));	// 28803 mov     wallindex, 98h ;~ 0FBC:0D09
cs=0xfbc;eip=0x000d0f; 	J(JMP(code_bto_blank));	// 28804 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0D0F
loc_1eeb2:
	// 6195 
cs=0xfbc;eip=0x000d12; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x10E));	// 28808 cmp     [bp+var_18], 10Eh ;~ 0FBC:0D12
cs=0xfbc;eip=0x000d17; 	J(JGE(loc_1eebc));	// 28809 jge     short loc_1EEBC ;~ 0FBC:0D17
cs=0xfbc;eip=0x000d19; 	J(JMP(code_bto_blank));	// 28810 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0D19
loc_1eebc:
	// 6196 
cs=0xfbc;eip=0x000d1c; 	X(MOV(wallindex, 0x96));	// 28814 mov     wallindex, 96h ; 'ñ' ;~ 0FBC:0D1C
cs=0xfbc;eip=0x000d22; 	J(JMP(code_bto_blank));	// 28815 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0D22
loc_1eec6:
	// 6197 
cs=0xfbc;eip=0x000d26; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FF88));	// 28821 cmp     [bp+var_2C], 0FF88h ;~ 0FBC:0D26
cs=0xfbc;eip=0x000d2a; 	J(JLE(loc_1eecf));	// 28822 jle     short loc_1EECF ;~ 0FBC:0D2A
cs=0xfbc;eip=0x000d2c; 	J(JMP(code_bto_blank));	// 28823 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0D2C
loc_1eecf:
	// 6198 
cs=0xfbc;eip=0x000d2f; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FEF2));	// 28827 cmp     [bp+var_2C], 0FEF2h ;~ 0FBC:0D2F
cs=0xfbc;eip=0x000d34; 	J(JGE(loc_1eed9));	// 28828 jge     short loc_1EED9 ;~ 0FBC:0D34
cs=0xfbc;eip=0x000d36; 	J(JMP(code_bto_blank));	// 28829 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0D36
loc_1eed9:
	// 6199 
cs=0xfbc;eip=0x000d39; 	X(MOV(wallheight, 0x90));	// 28833 mov     wallHeight, 90h ; 'ê' ;~ 0FBC:0D39
cs=0xfbc;eip=0x000d3f; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FE00));	// 28834 cmp     [bp+var_14], 0FE00h ;~ 0FBC:0D3F
cs=0xfbc;eip=0x000d44; 	J(JG(loc_1eef0));	// 28835 jg      short loc_1EEF0 ;~ 0FBC:0D44
loc_1eee6:
	// 6200 
cs=0xfbc;eip=0x000d46; 	X(MOV(wallindex, 0x9A));	// 28838 mov     wallindex, 9Ah ; 'ö' ;~ 0FBC:0D46
cs=0xfbc;eip=0x000d4c; 	J(JMP(code_bto_blank));	// 28839 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0D4C
loc_1eef0:
	// 6201 
cs=0xfbc;eip=0x000d50; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x200));	// 28844 cmp     [bp+var_14], 200h ;~ 0FBC:0D50
cs=0xfbc;eip=0x000d55; 	J(JL(loc_1ef00));	// 28845 jl      short loc_1EF00 ;~ 0FBC:0D55
loc_1eef7:
	// 6202 
cs=0xfbc;eip=0x000d57; 	X(MOV(wallindex, 0x99));	// 28848 mov     wallindex, 99h ; 'ô' ;~ 0FBC:0D57
cs=0xfbc;eip=0x000d5d; 	J(JMP(code_bto_blank));	// 28849 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0D5D
loc_1ef00:
	// 6203 
cs=0xfbc;eip=0x000d60; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF88));	// 28853 cmp     [bp+var_18], 0FF88h ;~ 0FBC:0D60
cs=0xfbc;eip=0x000d64; 	J(JL(loc_1ef10));	// 28854 jl      short loc_1EF10 ;~ 0FBC:0D64
cs=0xfbc;eip=0x000d66; 	X(MOV(wallindex, 0x97));	// 28855 mov     wallindex, 97h ; 'ó' ;~ 0FBC:0D66
cs=0xfbc;eip=0x000d6c; 	J(JMP(code_bto_blank));	// 28856 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0D6C
loc_1ef10:
	// 6204 
cs=0xfbc;eip=0x000d70; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FEF2));	// 28861 cmp     [bp+var_18], 0FEF2h ;~ 0FBC:0D70
cs=0xfbc;eip=0x000d75; 	J(JLE(loc_1ef1a));	// 28862 jle     short loc_1EF1A ;~ 0FBC:0D75
cs=0xfbc;eip=0x000d77; 	J(JMP(code_bto_blank));	// 28863 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0D77
loc_1ef1a:
	// 6205 
cs=0xfbc;eip=0x000d7a; 	X(MOV(wallindex, 0x95));	// 28867 mov     wallindex, 95h ; 'ï' ;~ 0FBC:0D7A
cs=0xfbc;eip=0x000d80; 	J(JMP(code_bto_blank));	// 28868 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0D80
code_bto_pipeentrance:
	// 6206 
cs=0xfbc;eip=0x000d84; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 28874 cmp     [bp+var_18], 0  ; jumptable 0001E5B2 case 29 ;~ 0FBC:0D84
cs=0xfbc;eip=0x000d88; 	J(JGE(loc_1ef32));	// 28875 jge     short loc_1EF32 ;~ 0FBC:0D88
cs=0xfbc;eip=0x000d8a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 28876 mov     ax, [bp+var_18] ;~ 0FBC:0D8A
cs=0xfbc;eip=0x000d8d; 	T(NEG(ax));	// 28877 neg     ax ;~ 0FBC:0D8D
cs=0xfbc;eip=0x000d8f; 	J(JMP(loc_1ef35));	// 28878 jmp     short loc_1EF35 ;~ 0FBC:0D8F
loc_1ef32:
	// 6207 
cs=0xfbc;eip=0x000d92; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 28883 mov     ax, [bp+var_18] ;~ 0FBC:0D92
loc_1ef35:
	// 6208 
cs=0xfbc;eip=0x000d95; 	T(CMP(ax, 0x73));	// 28886 cmp     ax, 73h ; 's' ;~ 0FBC:0D95
cs=0xfbc;eip=0x000d98; 	J(JL(loc_1ef60));	// 28887 jl      short loc_1EF60 ;~ 0FBC:0D98
cs=0xfbc;eip=0x000d9a; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x0A4));	// 28888 cmp     [bp+var_32], 0A4h ; '§' ;~ 0FBC:0D9A
cs=0xfbc;eip=0x000d9f; 	J(JG(loc_1ef60));	// 28889 jg      short loc_1EF60 ;~ 0FBC:0D9F
cs=0xfbc;eip=0x000da1; 	X(MOV(wallheight, 0x97));	// 28890 mov     wallHeight, 97h ; 'ó' ;~ 0FBC:0DA1
cs=0xfbc;eip=0x000da7; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 28891 cmp     [bp+var_18], 0 ;~ 0FBC:0DA7
cs=0xfbc;eip=0x000dab; 	J(JLE(loc_1ef56));	// 28892 jle     short loc_1EF56 ;~ 0FBC:0DAB
cs=0xfbc;eip=0x000dad; 	X(MOV(wallindex, 0x9F));	// 28893 mov     wallindex, 9Fh ; 'ü' ;~ 0FBC:0DAD
cs=0xfbc;eip=0x000db3; 	J(JMP(code_bto_blank));	// 28894 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0DB3
loc_1ef56:
	// 6209 
cs=0xfbc;eip=0x000db6; 	X(MOV(wallindex, 0x0A0));	// 28898 mov     wallindex, 0A0h ; '†' ;~ 0FBC:0DB6
cs=0xfbc;eip=0x000dbc; 	J(JMP(code_bto_blank));	// 28899 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0DBC
loc_1ef60:
	// 6210 
cs=0xfbc;eip=0x000dc0; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x73));	// 28905 cmp     [bp+var_32], 73h ; 's' ;~ 0FBC:0DC0
cs=0xfbc;eip=0x000dc4; 	J(JL(loc_1ef69));	// 28906 jl      short loc_1EF69 ;~ 0FBC:0DC4
cs=0xfbc;eip=0x000dc6; 	J(JMP(code_bto_blank));	// 28907 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0DC6
loc_1ef69:
	// 6211 
cs=0xfbc;eip=0x000dc9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 28911 mov     bx, [bp+arg_0] ;~ 0FBC:0DC9
cs=0xfbc;eip=0x000dcc; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 28912 mov     ax, [bx+2] ;~ 0FBC:0DCC
cs=0xfbc;eip=0x000dcf; 	T(SUB(ax, terrainheight));	// 28913 sub     ax, terrainHeight ;~ 0FBC:0DCF
cs=0xfbc;eip=0x000dd3; 	T(CMP(ax, 0x0AB));	// 28914 cmp     ax, 0ABh ; '´' ;~ 0FBC:0DD3
cs=0xfbc;eip=0x000dd6; 	J(JL(loc_1ef7b));	// 28915 jl      short loc_1EF7B ;~ 0FBC:0DD6
cs=0xfbc;eip=0x000dd8; 	J(JMP(code_bto_blank));	// 28916 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0DD8
loc_1ef7b:
	// 6212 
cs=0xfbc;eip=0x000ddb; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 28920 mov     al, [bp+var_12] ;~ 0FBC:0DDB
cs=0xfbc;eip=0x000dde; 	X(MOV(current_surf_type, al));	// 28921 mov     current_surf_type, al ;~ 0FBC:0DDE
cs=0xfbc;eip=0x000de1; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x1F));	// 28922 cmp     [bp+var_32], 1Fh ;~ 0FBC:0DE1
cs=0xfbc;eip=0x000de5; 	J(JGE(loc_1ef90));	// 28923 jge     short loc_1EF90 ;~ 0FBC:0DE5
cs=0xfbc;eip=0x000de7; 	X(MOV(planindex, 0x46));	// 28924 mov     planindex, 46h ; 'F' ;~ 0FBC:0DE7
cs=0xfbc;eip=0x000ded; 	J(JMP(code_bto_blank));	// 28925 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0DED
loc_1ef90:
	// 6213 
cs=0xfbc;eip=0x000df0; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FFAC));	// 28929 cmp     [bp+var_2C], 0FFACh ;~ 0FBC:0DF0
cs=0xfbc;eip=0x000df4; 	J(JGE(loc_1efa6));	// 28930 jge     short loc_1EFA6 ;~ 0FBC:0DF4
cs=0xfbc;eip=0x000df6; 	X(MOV(planindex, 0x49));	// 28931 mov     planindex, 49h ; 'I' ;~ 0FBC:0DF6
cs=0xfbc;eip=0x000dfc; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0x0FF9C));	// 28932 mov     [bp+var_1E], 0FF9Ch ;~ 0FBC:0DFC
cs=0xfbc;eip=0x000e01; 	T(MOV(si, 0x0FFFB));	// 28933 mov     si, 0FFFBh ;~ 0FBC:0E01
cs=0xfbc;eip=0x000e04; 	J(JMP(loc_1efe0));	// 28934 jmp     short loc_1EFE0 ;~ 0FBC:0E04
loc_1efa6:
	// 6214 
cs=0xfbc;eip=0x000e06; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 28938 cmp     [bp+var_2C], 0 ;~ 0FBC:0E06
cs=0xfbc;eip=0x000e0a; 	J(JGE(loc_1efbc));	// 28939 jge     short loc_1EFBC ;~ 0FBC:0E0A
cs=0xfbc;eip=0x000e0c; 	X(MOV(planindex, 0x47));	// 28940 mov     planindex, 47h ; 'G' ;~ 0FBC:0E0C
cs=0xfbc;eip=0x000e12; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0x0FFC7));	// 28941 mov     [bp+var_1E], 0FFC7h ;~ 0FBC:0E12
cs=0xfbc;eip=0x000e17; 	T(MOV(si, 0x0FFF8));	// 28942 mov     si, 0FFF8h ;~ 0FBC:0E17
cs=0xfbc;eip=0x000e1a; 	J(JMP(loc_1efe0));	// 28943 jmp     short loc_1EFE0 ;~ 0FBC:0E1A
loc_1efbc:
	// 6215 
cs=0xfbc;eip=0x000e1c; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x54));	// 28947 cmp     [bp+var_2C], 54h ; 'T' ;~ 0FBC:0E1C
cs=0xfbc;eip=0x000e20; 	J(JLE(loc_1efd2));	// 28948 jle     short loc_1EFD2 ;~ 0FBC:0E20
cs=0xfbc;eip=0x000e22; 	X(MOV(planindex, 0x4D));	// 28949 mov     planindex, 4Dh ; 'M' ;~ 0FBC:0E22
cs=0xfbc;eip=0x000e28; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0x64));	// 28950 mov     [bp+var_1E], 64h ; 'd' ;~ 0FBC:0E28
cs=0xfbc;eip=0x000e2d; 	T(MOV(si, 5));	// 28951 mov     si, 5 ;~ 0FBC:0E2D
cs=0xfbc;eip=0x000e30; 	J(JMP(loc_1efe0));	// 28952 jmp     short loc_1EFE0 ;~ 0FBC:0E30
loc_1efd2:
	// 6216 
cs=0xfbc;eip=0x000e32; 	X(MOV(planindex, 0x4B));	// 28956 mov     planindex, 4Bh ; 'K' ;~ 0FBC:0E32
cs=0xfbc;eip=0x000e38; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0x39));	// 28957 mov     [bp+var_1E], 39h ; '9' ;~ 0FBC:0E38
cs=0xfbc;eip=0x000e3d; 	T(MOV(si, 8));	// 28958 mov     si, 8 ;~ 0FBC:0E3D
loc_1efe0:
	// 6217 
cs=0xfbc;eip=0x000e40; 	X(PUSH(*(dw*)(raddr(ss,bp+var_28))));	// 28962 push    [bp+var_28] ;~ 0FBC:0E40
cs=0xfbc;eip=0x000e43; 	X(PUSH(si));	// 28963 push    si ;~ 0FBC:0E43
cs=0xfbc;eip=0x000e44; 	J(CALLF(sin_fast,0));	// 28964 call    sin_fast ;~ 0FBC:0E44
cs=0xfbc;eip=0x000e49; 	T(ADD(sp, 2));	// 28965 add     sp, 2 ;~ 0FBC:0E49
cs=0xfbc;eip=0x000e4c; 	X(PUSH(ax));	// 28966 push    ax ;~ 0FBC:0E4C
cs=0xfbc;eip=0x000e4d; 	J(CALLF(multiply_and_scale,0));	// 28967 call    multiply_and_scale ;~ 0FBC:0E4D
cs=0xfbc;eip=0x000e52; 	T(ADD(sp, 4));	// 28968 add     sp, 4 ;~ 0FBC:0E52
cs=0xfbc;eip=0x000e55; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_2c))));	// 28969 mov     cx, [bp+var_2C] ;~ 0FBC:0E55
cs=0xfbc;eip=0x000e58; 	T(SUB(cx, *(dw*)(raddr(ss,bp+var_1e))));	// 28970 sub     cx, [bp+var_1E] ;~ 0FBC:0E58
cs=0xfbc;eip=0x000e5b; 	X(PUSH(cx));	// 28971 push    cx ;~ 0FBC:0E5B
cs=0xfbc;eip=0x000e5c; 	X(PUSH(si));	// 28972 push    si ;~ 0FBC:0E5C
cs=0xfbc;eip=0x000e5d; 	T(MOV(di, ax));	// 28973 mov     di, ax ;~ 0FBC:0E5D
cs=0xfbc;eip=0x000e5f; 	J(CALLF(cos_fast,0));	// 28974 call    cos_fast ;~ 0FBC:0E5F
cs=0xfbc;eip=0x000e64; 	T(ADD(sp, 2));	// 28975 add     sp, 2 ;~ 0FBC:0E64
cs=0xfbc;eip=0x000e67; 	X(PUSH(ax));	// 28976 push    ax ;~ 0FBC:0E67
cs=0xfbc;eip=0x000e68; 	J(CALLF(multiply_and_scale,0));	// 28977 call    multiply_and_scale ;~ 0FBC:0E68
cs=0xfbc;eip=0x000e6d; 	T(ADD(sp, 4));	// 28978 add     sp, 4 ;~ 0FBC:0E6D
cs=0xfbc;eip=0x000e70; 	T(ADD(ax, di));	// 28979 add     ax, di ;~ 0FBC:0E70
cs=0xfbc;eip=0x000e72; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 28980 mov     [bp+var_22], ax ;~ 0FBC:0E72
cs=0xfbc;eip=0x000e75; 	T(OR(ax, ax));	// 28981 or      ax, ax ;~ 0FBC:0E75
cs=0xfbc;eip=0x000e77; 	J(JL(loc_1f01c));	// 28982 jl      short loc_1F01C ;~ 0FBC:0E77
cs=0xfbc;eip=0x000e79; 	J(JMP(code_bto_blank));	// 28983 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0E79
loc_1f01c:
	// 6218 
cs=0xfbc;eip=0x000e7c; 	J(JMP(loc_1eb3f));	// 28987 jmp     loc_1EB3F ;~ 0FBC:0E7C
code_bto_halfpipe:
	// 6219 
cs=0xfbc;eip=0x000e80; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 1));	// 28993 mov     [bp+var_22], 1  ; jumptable 0001E5B2 case 31 ;~ 0FBC:0E80
cs=0xfbc;eip=0x000e85; 	J(JMP(loc_1f02d));	// 28994 jmp     short loc_1F02D ;~ 0FBC:0E85
code_bto_pipe:
	// 6220 
cs=0xfbc;eip=0x000e88; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 0));	// 29000 mov     [bp+var_22], 0  ; jumptable 0001E5B2 case 30 ;~ 0FBC:0E88
loc_1f02d:
	// 6221 
cs=0xfbc;eip=0x000e8d; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 29003 cmp     [bp+var_18], 0 ;~ 0FBC:0E8D
cs=0xfbc;eip=0x000e91; 	J(JGE(loc_1f03a));	// 29004 jge     short loc_1F03A ;~ 0FBC:0E91
cs=0xfbc;eip=0x000e93; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 29005 mov     ax, [bp+var_18] ;~ 0FBC:0E93
cs=0xfbc;eip=0x000e96; 	T(NEG(ax));	// 29006 neg     ax ;~ 0FBC:0E96
cs=0xfbc;eip=0x000e98; 	J(JMP(loc_1f03d));	// 29007 jmp     short loc_1F03D ;~ 0FBC:0E98
loc_1f03a:
	// 6222 
cs=0xfbc;eip=0x000e9a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 29011 mov     ax, [bp+var_18] ;~ 0FBC:0E9A
loc_1f03d:
	// 6223 
cs=0xfbc;eip=0x000e9d; 	T(CMP(ax, 0x0A4));	// 29014 cmp     ax, 0A4h ; '§' ;~ 0FBC:0E9D
cs=0xfbc;eip=0x000ea0; 	J(JL(loc_1f068));	// 29015 jl      short loc_1F068 ;~ 0FBC:0EA0
cs=0xfbc;eip=0x000ea2; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x0A4));	// 29016 cmp     [bp+var_32], 0A4h ; '§' ;~ 0FBC:0EA2
cs=0xfbc;eip=0x000ea7; 	J(JG(loc_1f068));	// 29017 jg      short loc_1F068 ;~ 0FBC:0EA7
cs=0xfbc;eip=0x000ea9; 	X(MOV(wallheight, 0x97));	// 29018 mov     wallHeight, 97h ; 'ó' ;~ 0FBC:0EA9
cs=0xfbc;eip=0x000eaf; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 29019 cmp     [bp+var_18], 0 ;~ 0FBC:0EAF
cs=0xfbc;eip=0x000eb3; 	J(JLE(loc_1f05e));	// 29020 jle     short loc_1F05E ;~ 0FBC:0EB3
cs=0xfbc;eip=0x000eb5; 	X(MOV(wallindex, 0x9B));	// 29021 mov     wallindex, 9Bh ; 'õ' ;~ 0FBC:0EB5
cs=0xfbc;eip=0x000ebb; 	J(JMP(code_bto_blank));	// 29022 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0EBB
loc_1f05e:
	// 6224 
cs=0xfbc;eip=0x000ebe; 	X(MOV(wallindex, 0x9C));	// 29026 mov     wallindex, 9Ch ; 'ú' ;~ 0FBC:0EBE
cs=0xfbc;eip=0x000ec4; 	J(JMP(code_bto_blank));	// 29027 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0EC4
loc_1f068:
	// 6225 
cs=0xfbc;eip=0x000ec8; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x0A4));	// 29033 cmp     [bp+var_32], 0A4h ; '§' ;~ 0FBC:0EC8
cs=0xfbc;eip=0x000ecd; 	J(JL(loc_1f072));	// 29034 jl      short loc_1F072 ;~ 0FBC:0ECD
cs=0xfbc;eip=0x000ecf; 	J(JMP(code_bto_blank));	// 29035 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0ECF
loc_1f072:
	// 6226 
cs=0xfbc;eip=0x000ed2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 29039 mov     bx, [bp+arg_0] ;~ 0FBC:0ED2
cs=0xfbc;eip=0x000ed5; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 29040 mov     ax, [bx+2] ;~ 0FBC:0ED5
cs=0xfbc;eip=0x000ed8; 	T(SUB(ax, terrainheight));	// 29041 sub     ax, terrainHeight ;~ 0FBC:0ED8
cs=0xfbc;eip=0x000edc; 	T(CMP(ax, 0x109));	// 29042 cmp     ax, 109h ;~ 0FBC:0EDC
cs=0xfbc;eip=0x000edf; 	J(JL(loc_1f084));	// 29043 jl      short loc_1F084 ;~ 0FBC:0EDF
cs=0xfbc;eip=0x000ee1; 	J(JMP(code_bto_blank));	// 29044 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0EE1
loc_1f084:
	// 6227 
cs=0xfbc;eip=0x000ee4; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x82));	// 29048 cmp     [bp+var_32], 82h ; 'Ç' ;~ 0FBC:0EE4
cs=0xfbc;eip=0x000ee9; 	J(JGE(loc_1f091));	// 29049 jge     short loc_1F091 ;~ 0FBC:0EE9
cs=0xfbc;eip=0x000eeb; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 29050 mov     al, [bp+var_12] ;~ 0FBC:0EEB
cs=0xfbc;eip=0x000eee; 	X(MOV(current_surf_type, al));	// 29051 mov     current_surf_type, al ;~ 0FBC:0EEE
loc_1f091:
	// 6228 
cs=0xfbc;eip=0x000ef1; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 29054 mov     ax, [bx+2] ;~ 0FBC:0EF1
cs=0xfbc;eip=0x000ef4; 	T(SUB(ax, terrainheight));	// 29055 sub     ax, terrainHeight ;~ 0FBC:0EF4
cs=0xfbc;eip=0x000ef8; 	T(CMP(ax, 0x97));	// 29056 cmp     ax, 97h ; 'ó' ;~ 0FBC:0EF8
cs=0xfbc;eip=0x000efb; 	J(JLE(loc_1f0a4));	// 29057 jle     short loc_1F0A4 ;~ 0FBC:0EFB
cs=0xfbc;eip=0x000efd; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 1));	// 29058 mov     [bp+var_1E], 1 ;~ 0FBC:0EFD
cs=0xfbc;eip=0x000f02; 	J(JMP(loc_1f0a9));	// 29059 jmp     short loc_1F0A9 ;~ 0FBC:0F02
loc_1f0a4:
	// 6229 
cs=0xfbc;eip=0x000f04; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29063 mov     [bp+var_1E], 0 ;~ 0FBC:0F04
loc_1f0a9:
	// 6230 
cs=0xfbc;eip=0x000f09; 	T(CMP(*(dw*)(raddr(ss,bp+var_22)), 0));	// 29066 cmp     [bp+var_22], 0 ;~ 0FBC:0F09
cs=0xfbc;eip=0x000f0d; 	J(JZ(loc_1f0e8));	// 29067 jz      short loc_1F0E8 ;~ 0FBC:0F0D
cs=0xfbc;eip=0x000f0f; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29068 cmp     [bp+var_1E], 0 ;~ 0FBC:0F0F
cs=0xfbc;eip=0x000f13; 	J(JNZ(loc_1f0e8));	// 29069 jnz     short loc_1F0E8 ;~ 0FBC:0F13
cs=0xfbc;eip=0x000f15; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x54));	// 29070 cmp     [bp+var_32], 54h ; 'T' ;~ 0FBC:0F15
cs=0xfbc;eip=0x000f19; 	J(JG(loc_1f0e8));	// 29071 jg      short loc_1F0E8 ;~ 0FBC:0F19
cs=0xfbc;eip=0x000f1b; 	T(CMP(*(dw*)(raddr(ss,bp+var_2e)), 0x4B));	// 29072 cmp     [bp+var_2E], 4Bh ; 'K' ;~ 0FBC:0F1B
cs=0xfbc;eip=0x000f1f; 	J(JG(loc_1f0e8));	// 29073 jg      short loc_1F0E8 ;~ 0FBC:0F1F
cs=0xfbc;eip=0x000f21; 	X(MOV(planindex, 0x45));	// 29074 mov     planindex, 45h ; 'E' ;~ 0FBC:0F21
cs=0xfbc;eip=0x000f27; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FFB5));	// 29075 cmp     [bp+var_14], 0FFB5h ;~ 0FBC:0F27
cs=0xfbc;eip=0x000f2b; 	J(JG(loc_1f0d6));	// 29076 jg      short loc_1F0D6 ;~ 0FBC:0F2B
cs=0xfbc;eip=0x000f2d; 	X(MOV(wallindex, 0x9D));	// 29077 mov     wallindex, 9Dh ; 'ù' ;~ 0FBC:0F2D
cs=0xfbc;eip=0x000f33; 	J(JMP(code_bto_blank));	// 29078 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0F33
loc_1f0d6:
	// 6231 
cs=0xfbc;eip=0x000f36; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x4B));	// 29082 cmp     [bp+var_14], 4Bh ; 'K' ;~ 0FBC:0F36
cs=0xfbc;eip=0x000f3a; 	J(JGE(loc_1f0df));	// 29083 jge     short loc_1F0DF ;~ 0FBC:0F3A
cs=0xfbc;eip=0x000f3c; 	J(JMP(code_bto_blank));	// 29084 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0F3C
loc_1f0df:
	// 6232 
cs=0xfbc;eip=0x000f3f; 	X(MOV(wallindex, 0x9E));	// 29088 mov     wallindex, 9Eh ; 'û' ;~ 0FBC:0F3F
cs=0xfbc;eip=0x000f45; 	J(JMP(code_bto_blank));	// 29089 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0F45
loc_1f0e8:
	// 6233 
cs=0xfbc;eip=0x000f48; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 29094 mov     bx, [bp+arg_0] ;~ 0FBC:0F48
cs=0xfbc;eip=0x000f4b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 29095 mov     ax, [bx+2] ;~ 0FBC:0F4B
cs=0xfbc;eip=0x000f4e; 	T(SUB(ax, terrainheight));	// 29096 sub     ax, terrainHeight ;~ 0FBC:0F4E
cs=0xfbc;eip=0x000f52; 	T(CMP(ax, 0x58));	// 29097 cmp     ax, 58h ; 'X' ;~ 0FBC:0F52
cs=0xfbc;eip=0x000f55; 	J(JLE(loc_1f116));	// 29098 jle     short loc_1F116 ;~ 0FBC:0F55
cs=0xfbc;eip=0x000f57; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29099 cmp     [bp+var_1E], 0 ;~ 0FBC:0F57
cs=0xfbc;eip=0x000f5b; 	J(JNZ(loc_1f116));	// 29100 jnz     short loc_1F116 ;~ 0FBC:0F5B
cs=0xfbc;eip=0x000f5d; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 29101 cmp     [bp+var_2C], 0 ;~ 0FBC:0F5D
cs=0xfbc;eip=0x000f61; 	J(JGE(loc_1f10c));	// 29102 jge     short loc_1F10C ;~ 0FBC:0F61
cs=0xfbc;eip=0x000f63; 	X(MOV(planindex, 0x3C));	// 29103 mov     planindex, 3Ch ; '<' ;~ 0FBC:0F63
cs=0xfbc;eip=0x000f69; 	J(JMP(code_bto_blank));	// 29104 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0F69
loc_1f10c:
	// 6234 
cs=0xfbc;eip=0x000f6c; 	X(MOV(planindex, 0x42));	// 29108 mov     planindex, 42h ; 'B' ;~ 0FBC:0F6C
cs=0xfbc;eip=0x000f72; 	J(JMP(code_bto_blank));	// 29109 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0F72
loc_1f116:
	// 6235 
cs=0xfbc;eip=0x000f76; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x1F));	// 29115 cmp     [bp+var_32], 1Fh ;~ 0FBC:0F76
cs=0xfbc;eip=0x000f7a; 	J(JGE(loc_1f136));	// 29116 jge     short loc_1F136 ;~ 0FBC:0F7A
cs=0xfbc;eip=0x000f7c; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29117 cmp     [bp+var_1E], 0 ;~ 0FBC:0F7C
cs=0xfbc;eip=0x000f80; 	J(JZ(loc_1f12c));	// 29118 jz      short loc_1F12C ;~ 0FBC:0F80
cs=0xfbc;eip=0x000f82; 	X(MOV(planindex, 0x3F));	// 29119 mov     planindex, 3Fh ; '?' ;~ 0FBC:0F82
cs=0xfbc;eip=0x000f88; 	J(JMP(code_bto_blank));	// 29120 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0F88
loc_1f12c:
	// 6236 
cs=0xfbc;eip=0x000f8c; 	X(MOV(planindex, 0x39));	// 29125 mov     planindex, 39h ; '9' ;~ 0FBC:0F8C
cs=0xfbc;eip=0x000f92; 	J(JMP(code_bto_blank));	// 29126 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0F92
loc_1f136:
	// 6237 
cs=0xfbc;eip=0x000f96; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FFAC));	// 29131 cmp     [bp+var_2C], 0FFACh ;~ 0FBC:0F96
cs=0xfbc;eip=0x000f9a; 	J(JGE(loc_1f156));	// 29132 jge     short loc_1F156 ;~ 0FBC:0F9A
cs=0xfbc;eip=0x000f9c; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29133 cmp     [bp+var_1E], 0 ;~ 0FBC:0F9C
cs=0xfbc;eip=0x000fa0; 	J(JZ(loc_1f14c));	// 29134 jz      short loc_1F14C ;~ 0FBC:0FA0
cs=0xfbc;eip=0x000fa2; 	X(MOV(planindex, 0x3D));	// 29135 mov     planindex, 3Dh ; '=' ;~ 0FBC:0FA2
cs=0xfbc;eip=0x000fa8; 	J(JMP(code_bto_blank));	// 29136 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0FA8
loc_1f14c:
	// 6238 
cs=0xfbc;eip=0x000fac; 	X(MOV(planindex, 0x3B));	// 29141 mov     planindex, 3Bh ; ';' ;~ 0FBC:0FAC
cs=0xfbc;eip=0x000fb2; 	J(JMP(code_bto_blank));	// 29142 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0FB2
loc_1f156:
	// 6239 
cs=0xfbc;eip=0x000fb6; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 29147 cmp     [bp+var_2C], 0 ;~ 0FBC:0FB6
cs=0xfbc;eip=0x000fba; 	J(JGE(loc_1f176));	// 29148 jge     short loc_1F176 ;~ 0FBC:0FBA
cs=0xfbc;eip=0x000fbc; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29149 cmp     [bp+var_1E], 0 ;~ 0FBC:0FBC
cs=0xfbc;eip=0x000fc0; 	J(JZ(loc_1f16c));	// 29150 jz      short loc_1F16C ;~ 0FBC:0FC0
cs=0xfbc;eip=0x000fc2; 	X(MOV(planindex, 0x3E));	// 29151 mov     planindex, 3Eh ; '>' ;~ 0FBC:0FC2
cs=0xfbc;eip=0x000fc8; 	J(JMP(code_bto_blank));	// 29152 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0FC8
loc_1f16c:
	// 6240 
cs=0xfbc;eip=0x000fcc; 	X(MOV(planindex, 0x3A));	// 29157 mov     planindex, 3Ah ; ':' ;~ 0FBC:0FCC
cs=0xfbc;eip=0x000fd2; 	J(JMP(code_bto_blank));	// 29158 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0FD2
loc_1f176:
	// 6241 
cs=0xfbc;eip=0x000fd6; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x54));	// 29163 cmp     [bp+var_2C], 54h ; 'T' ;~ 0FBC:0FD6
cs=0xfbc;eip=0x000fda; 	J(JLE(loc_1f196));	// 29164 jle     short loc_1F196 ;~ 0FBC:0FDA
cs=0xfbc;eip=0x000fdc; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29165 cmp     [bp+var_1E], 0 ;~ 0FBC:0FDC
cs=0xfbc;eip=0x000fe0; 	J(JZ(loc_1f18c));	// 29166 jz      short loc_1F18C ;~ 0FBC:0FE0
cs=0xfbc;eip=0x000fe2; 	X(MOV(planindex, 0x41));	// 29167 mov     planindex, 41h ; 'A' ;~ 0FBC:0FE2
cs=0xfbc;eip=0x000fe8; 	J(JMP(code_bto_blank));	// 29168 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0FE8
loc_1f18c:
	// 6242 
cs=0xfbc;eip=0x000fec; 	X(MOV(planindex, 0x43));	// 29173 mov     planindex, 43h ; 'C' ;~ 0FBC:0FEC
cs=0xfbc;eip=0x000ff2; 	J(JMP(code_bto_blank));	// 29174 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0FF2
loc_1f196:
	// 6243 
cs=0xfbc;eip=0x000ff6; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29179 cmp     [bp+var_1E], 0 ;~ 0FBC:0FF6
cs=0xfbc;eip=0x000ffa; 	J(JZ(loc_1f1a6));	// 29180 jz      short loc_1F1A6 ;~ 0FBC:0FFA
cs=0xfbc;eip=0x000ffc; 	X(MOV(planindex, 0x40));	// 29181 mov     planindex, 40h ; '@' ;~ 0FBC:0FFC
cs=0xfbc;eip=0x001002; 	J(JMP(code_bto_blank));	// 29182 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1002
loc_1f1a6:
	// 6244 
cs=0xfbc;eip=0x001006; 	X(MOV(planindex, 0x44));	// 29187 mov     planindex, 44h ; 'D' ;~ 0FBC:1006
cs=0xfbc;eip=0x00100c; 	J(JMP(code_bto_blank));	// 29188 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:100C
code_bto_corklr:
	// 6245 
cs=0xfbc;eip=0x001010; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x96));	// 29194 cmp     [bp+var_32], 96h ; 'ñ' ; jumptable 0001E5B2 case 35 ;~ 0FBC:1010
cs=0xfbc;eip=0x001015; 	J(JL(loc_1f1ba));	// 29195 jl      short loc_1F1BA ;~ 0FBC:1015
cs=0xfbc;eip=0x001017; 	J(JMP(code_bto_blank));	// 29196 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1017
loc_1f1ba:
	// 6246 
cs=0xfbc;eip=0x00101a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 29200 mov     bx, [bp+arg_0] ;~ 0FBC:101A
cs=0xfbc;eip=0x00101d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 29201 mov     ax, [bx+2] ;~ 0FBC:101D
cs=0xfbc;eip=0x001020; 	T(SUB(ax, terrainheight));	// 29202 sub     ax, terrainHeight ;~ 0FBC:1020
cs=0xfbc;eip=0x001024; 	T(CMP(ax, 0x109));	// 29203 cmp     ax, 109h ;~ 0FBC:1024
cs=0xfbc;eip=0x001027; 	J(JL(loc_1f1cc));	// 29204 jl      short loc_1F1CC ;~ 0FBC:1027
cs=0xfbc;eip=0x001029; 	J(JMP(code_bto_blank));	// 29205 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1029
loc_1f1cc:
	// 6247 
cs=0xfbc;eip=0x00102c; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 29209 mov     al, [bp+var_12] ;~ 0FBC:102C
cs=0xfbc;eip=0x00102f; 	X(MOV(current_surf_type, al));	// 29210 mov     current_surf_type, al ;~ 0FBC:102F
cs=0xfbc;eip=0x001032; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 29211 mov     ax, [bx+2] ;~ 0FBC:1032
cs=0xfbc;eip=0x001035; 	T(SUB(ax, terrainheight));	// 29212 sub     ax, terrainHeight ;~ 0FBC:1035
cs=0xfbc;eip=0x001039; 	T(CMP(ax, 0x97));	// 29213 cmp     ax, 97h ; 'ó' ;~ 0FBC:1039
cs=0xfbc;eip=0x00103c; 	J(JLE(loc_1f1e6));	// 29214 jle     short loc_1F1E6 ;~ 0FBC:103C
cs=0xfbc;eip=0x00103e; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 1));	// 29215 mov     [bp+var_1E], 1 ;~ 0FBC:103E
cs=0xfbc;eip=0x001043; 	J(JMP(loc_1f1eb));	// 29216 jmp     short loc_1F1EB ;~ 0FBC:1043
loc_1f1e6:
	// 6248 
cs=0xfbc;eip=0x001046; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29221 mov     [bp+var_1E], 0 ;~ 0FBC:1046
loc_1f1eb:
	// 6249 
cs=0xfbc;eip=0x00104b; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 0));	// 29224 mov     [bp+var_22], 0 ;~ 0FBC:104B
cs=0xfbc;eip=0x001050; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 29225 mov     ax, [bx+2] ;~ 0FBC:1050
cs=0xfbc;eip=0x001053; 	T(SUB(ax, terrainheight));	// 29226 sub     ax, terrainHeight ;~ 0FBC:1053
cs=0xfbc;eip=0x001057; 	T(CMP(ax, 0x58));	// 29227 cmp     ax, 58h ; 'X' ;~ 0FBC:1057
cs=0xfbc;eip=0x00105a; 	J(JLE(loc_1f21a));	// 29228 jle     short loc_1F21A ;~ 0FBC:105A
cs=0xfbc;eip=0x00105c; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29229 cmp     [bp+var_1E], 0 ;~ 0FBC:105C
cs=0xfbc;eip=0x001060; 	J(JNZ(loc_1f21a));	// 29230 jnz     short loc_1F21A ;~ 0FBC:1060
cs=0xfbc;eip=0x001062; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 29231 cmp     [bp+var_2C], 0 ;~ 0FBC:1062
cs=0xfbc;eip=0x001066; 	J(JGE(loc_1f212));	// 29232 jge     short loc_1F212 ;~ 0FBC:1066
cs=0xfbc;eip=0x001068; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 3));	// 29233 mov     [bp+var_22], 3 ;~ 0FBC:1068
cs=0xfbc;eip=0x00106d; 	J(JMP(loc_1f295));	// 29234 jmp     loc_1F295 ;~ 0FBC:106D
loc_1f212:
	// 6250 
cs=0xfbc;eip=0x001072; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 9));	// 29240 mov     [bp+var_22], 9 ;~ 0FBC:1072
cs=0xfbc;eip=0x001077; 	J(JMP(loc_1f295));	// 29241 jmp     short loc_1F295 ;~ 0FBC:1077
loc_1f21a:
	// 6251 
cs=0xfbc;eip=0x00107a; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x1F));	// 29247 cmp     [bp+var_32], 1Fh ;~ 0FBC:107A
cs=0xfbc;eip=0x00107e; 	J(JGE(loc_1f22e));	// 29248 jge     short loc_1F22E ;~ 0FBC:107E
cs=0xfbc;eip=0x001080; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29249 cmp     [bp+var_1E], 0 ;~ 0FBC:1080
cs=0xfbc;eip=0x001084; 	J(JZ(loc_1f295));	// 29250 jz      short loc_1F295 ;~ 0FBC:1084
cs=0xfbc;eip=0x001086; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 6));	// 29251 mov     [bp+var_22], 6 ;~ 0FBC:1086
cs=0xfbc;eip=0x00108b; 	J(JMP(loc_1f295));	// 29252 jmp     short loc_1F295 ;~ 0FBC:108B
loc_1f22e:
	// 6252 
cs=0xfbc;eip=0x00108e; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FFAC));	// 29257 cmp     [bp+var_2C], 0FFACh ;~ 0FBC:108E
cs=0xfbc;eip=0x001092; 	J(JGE(loc_1f24a));	// 29258 jge     short loc_1F24A ;~ 0FBC:1092
cs=0xfbc;eip=0x001094; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29259 cmp     [bp+var_1E], 0 ;~ 0FBC:1094
cs=0xfbc;eip=0x001098; 	J(JZ(loc_1f242));	// 29260 jz      short loc_1F242 ;~ 0FBC:1098
cs=0xfbc;eip=0x00109a; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 4));	// 29261 mov     [bp+var_22], 4 ;~ 0FBC:109A
cs=0xfbc;eip=0x00109f; 	J(JMP(loc_1f295));	// 29262 jmp     short loc_1F295 ;~ 0FBC:109F
loc_1f242:
	// 6253 
cs=0xfbc;eip=0x0010a2; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 2));	// 29267 mov     [bp+var_22], 2 ;~ 0FBC:10A2
cs=0xfbc;eip=0x0010a7; 	J(JMP(loc_1f295));	// 29268 jmp     short loc_1F295 ;~ 0FBC:10A7
loc_1f24a:
	// 6254 
cs=0xfbc;eip=0x0010aa; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 29273 cmp     [bp+var_2C], 0 ;~ 0FBC:10AA
cs=0xfbc;eip=0x0010ae; 	J(JGE(loc_1f266));	// 29274 jge     short loc_1F266 ;~ 0FBC:10AE
cs=0xfbc;eip=0x0010b0; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29275 cmp     [bp+var_1E], 0 ;~ 0FBC:10B0
cs=0xfbc;eip=0x0010b4; 	J(JZ(loc_1f25e));	// 29276 jz      short loc_1F25E ;~ 0FBC:10B4
cs=0xfbc;eip=0x0010b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 5));	// 29277 mov     [bp+var_22], 5 ;~ 0FBC:10B6
cs=0xfbc;eip=0x0010bb; 	J(JMP(loc_1f295));	// 29278 jmp     short loc_1F295 ;~ 0FBC:10BB
loc_1f25e:
	// 6255 
cs=0xfbc;eip=0x0010be; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 1));	// 29283 mov     [bp+var_22], 1 ;~ 0FBC:10BE
cs=0xfbc;eip=0x0010c3; 	J(JMP(loc_1f295));	// 29284 jmp     short loc_1F295 ;~ 0FBC:10C3
loc_1f266:
	// 6256 
cs=0xfbc;eip=0x0010c6; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x54));	// 29289 cmp     [bp+var_2C], 54h ; 'T' ;~ 0FBC:10C6
cs=0xfbc;eip=0x0010ca; 	J(JLE(loc_1f282));	// 29290 jle     short loc_1F282 ;~ 0FBC:10CA
cs=0xfbc;eip=0x0010cc; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29291 cmp     [bp+var_1E], 0 ;~ 0FBC:10CC
cs=0xfbc;eip=0x0010d0; 	J(JZ(loc_1f27a));	// 29292 jz      short loc_1F27A ;~ 0FBC:10D0
cs=0xfbc;eip=0x0010d2; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 8));	// 29293 mov     [bp+var_22], 8 ;~ 0FBC:10D2
cs=0xfbc;eip=0x0010d7; 	J(JMP(loc_1f295));	// 29294 jmp     short loc_1F295 ;~ 0FBC:10D7
loc_1f27a:
	// 6257 
cs=0xfbc;eip=0x0010da; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 0x0A));	// 29299 mov     [bp+var_22], 0Ah ;~ 0FBC:10DA
cs=0xfbc;eip=0x0010df; 	J(JMP(loc_1f295));	// 29300 jmp     short loc_1F295 ;~ 0FBC:10DF
loc_1f282:
	// 6258 
cs=0xfbc;eip=0x0010e2; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29305 cmp     [bp+var_1E], 0 ;~ 0FBC:10E2
cs=0xfbc;eip=0x0010e6; 	J(JZ(loc_1f290));	// 29306 jz      short loc_1F290 ;~ 0FBC:10E6
cs=0xfbc;eip=0x0010e8; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 7));	// 29307 mov     [bp+var_22], 7 ;~ 0FBC:10E8
cs=0xfbc;eip=0x0010ed; 	J(JMP(loc_1f295));	// 29308 jmp     short loc_1F295 ;~ 0FBC:10ED
loc_1f290:
	// 6259 
cs=0xfbc;eip=0x0010f0; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 0x0B));	// 29313 mov     [bp+var_22], 0Bh ;~ 0FBC:10F0
loc_1f295:
	// 6260 
cs=0xfbc;eip=0x0010f5; 	T(CMP(*(dw*)(raddr(ss,bp+var_22)), 0));	// 29317 cmp     [bp+var_22], 0 ;~ 0FBC:10F5
cs=0xfbc;eip=0x0010f9; 	J(JZ(loc_1f2b8));	// 29318 jz      short loc_1F2B8 ;~ 0FBC:10F9
cs=0xfbc;eip=0x0010fb; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_22))));	// 29319 mov     di, [bp+var_22] ;~ 0FBC:10FB
cs=0xfbc;eip=0x0010fe; 	T(SHL(di, 1));	// 29320 shl     di, 1 ;~ 0FBC:10FE
cs=0xfbc;eip=0x001100; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 29321 mov     ax, [bp+var_28] ;~ 0FBC:1100
cs=0xfbc;eip=0x001103; 	T(CMP(*(dw*)(((db*)&corklr_negzbound)+di), ax));	// 29322 cmp     corkLR_negZBound[di], ax ;~ 0FBC:1103
cs=0xfbc;eip=0x001107; 	J(JGE(loc_1f2b8));	// 29323 jge     short loc_1F2B8 ;~ 0FBC:1107
cs=0xfbc;eip=0x001109; 	T(CMP(*(dw*)(((db*)&corklr_poszbound)+di), ax));	// 29324 cmp     corkLR_posZBound[di], ax ;~ 0FBC:1109
cs=0xfbc;eip=0x00110d; 	J(JLE(loc_1f2b8));	// 29325 jle     short loc_1F2B8 ;~ 0FBC:110D
cs=0xfbc;eip=0x00110f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 29326 mov     ax, [bp+var_22] ;~ 0FBC:110F
cs=0xfbc;eip=0x001112; 	T(ADD(ax, 0x39));	// 29327 add     ax, 39h ; '9' ;~ 0FBC:1112
cs=0xfbc;eip=0x001115; 	X(MOV(planindex, ax));	// 29328 mov     planindex, ax ;~ 0FBC:1115
loc_1f2b8:
	// 6261 
cs=0xfbc;eip=0x001118; 	T(CMP(planindex, 0));	// 29332 cmp     planindex, 0 ;~ 0FBC:1118
cs=0xfbc;eip=0x00111d; 	J(JZ(loc_1f2c2));	// 29333 jz      short loc_1F2C2 ;~ 0FBC:111D
cs=0xfbc;eip=0x00111f; 	J(JMP(code_bto_blank));	// 29334 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:111F
loc_1f2c2:
	// 6262 
cs=0xfbc;eip=0x001122; 	T(CMP(*(dw*)(raddr(ss,bp+var_2e)), 0x200));	// 29338 cmp     [bp+var_2E], 200h ;~ 0FBC:1122
cs=0xfbc;eip=0x001127; 	J(JL(loc_1f2cc));	// 29339 jl      short loc_1F2CC ;~ 0FBC:1127
cs=0xfbc;eip=0x001129; 	J(JMP(code_bto_blank));	// 29340 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1129
loc_1f2cc:
	// 6263 
cs=0xfbc;eip=0x00112c; 	X(MOV(wallindex, 0x0B9));	// 29344 mov     wallindex, 0B9h ; 'π' ;~ 0FBC:112C
cs=0xfbc;eip=0x001132; 	X(MOV(corkflag, 1));	// 29345 mov     corkFlag, 1 ;~ 0FBC:1132
cs=0xfbc;eip=0x001137; 	X(MOV(wallheight, 0x75));	// 29346 mov     wallHeight, 75h ; 'u' ;~ 0FBC:1137
cs=0xfbc;eip=0x00113d; 	J(JMP(code_bto_blank));	// 29347 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:113D
code_bto_corkudlh:
	// 6264 
cs=0xfbc;eip=0x001140; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 29352 mov     ax, [bp+var_2C] ; jumptable 0001E5B2 case 32 ;~ 0FBC:1140
cs=0xfbc;eip=0x001143; 	T(NEG(ax));	// 29353 neg     ax ;~ 0FBC:1143
cs=0xfbc;eip=0x001145; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 29354 mov     [bp+var_1E], ax ;~ 0FBC:1145
cs=0xfbc;eip=0x001148; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 0x4F));	// 29355 mov     [bp+var_22], 4Fh ; 'O' ;~ 0FBC:1148
cs=0xfbc;eip=0x00114d; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0x32));	// 29356 mov     [bp+var_C], 32h ; '2' ;~ 0FBC:114D
cs=0xfbc;eip=0x001152; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0x4B));	// 29357 mov     [bp+var_E], 4Bh ; 'K' ;~ 0FBC:1152
cs=0xfbc;eip=0x001157; 	J(JMP(loc_1f30f));	// 29358 jmp     short loc_1F30F ;~ 0FBC:1157
code_bto_corkudrh:
	// 6265 
cs=0xfbc;eip=0x00115a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 29364 mov     ax, [bp+var_2C] ; jumptable 0001E5B2 case 33 ;~ 0FBC:115A
cs=0xfbc;eip=0x00115d; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 29365 mov     [bp+var_1E], ax ;~ 0FBC:115D
cs=0xfbc;eip=0x001160; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 0x69));	// 29366 mov     [bp+var_22], 69h ; 'i' ;~ 0FBC:1160
cs=0xfbc;eip=0x001165; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0));	// 29367 mov     [bp+var_C], 0 ;~ 0FBC:1165
cs=0xfbc;eip=0x00116a; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0x19));	// 29368 mov     [bp+var_E], 19h ;~ 0FBC:116A
loc_1f30f:
	// 6266 
cs=0xfbc;eip=0x00116f; 	X(MOV(corkflag, 1));	// 29371 mov     corkFlag, 1 ;~ 0FBC:116F
cs=0xfbc;eip=0x001174; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0));	// 29372 cmp     [bp+var_28], 0 ;~ 0FBC:1174
cs=0xfbc;eip=0x001178; 	J(JGE(loc_1f350));	// 29373 jge     short loc_1F350 ;~ 0FBC:1178
cs=0xfbc;eip=0x00117a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 29374 mov     bx, [bp+arg_0] ;~ 0FBC:117A
cs=0xfbc;eip=0x00117d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 29375 mov     ax, [bx+2] ;~ 0FBC:117D
cs=0xfbc;eip=0x001180; 	T(SUB(ax, terrainheight));	// 29376 sub     ax, terrainHeight ;~ 0FBC:1180
cs=0xfbc;eip=0x001184; 	T(CMP(ax, 0x64));	// 29377 cmp     ax, 64h ; 'd' ;~ 0FBC:1184
cs=0xfbc;eip=0x001187; 	J(JGE(loc_1f350));	// 29378 jge     short loc_1F350 ;~ 0FBC:1187
cs=0xfbc;eip=0x001189; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29379 cmp     [bp+var_1E], 0 ;~ 0FBC:1189
cs=0xfbc;eip=0x00118d; 	J(JLE(loc_1f350));	// 29380 jle     short loc_1F350 ;~ 0FBC:118D
cs=0xfbc;eip=0x00118f; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0x278));	// 29381 cmp     [bp+var_1E], 278h ;~ 0FBC:118F
cs=0xfbc;eip=0x001194; 	J(JL(loc_1f339));	// 29382 jl      short loc_1F339 ;~ 0FBC:1194
cs=0xfbc;eip=0x001196; 	J(JMP(code_bto_blank));	// 29383 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1196
loc_1f339:
	// 6267 
cs=0xfbc;eip=0x001199; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0x188));	// 29387 cmp     [bp+var_1E], 188h ;~ 0FBC:1199
cs=0xfbc;eip=0x00119e; 	J(JG(loc_1f343));	// 29388 jg      short loc_1F343 ;~ 0FBC:119E
cs=0xfbc;eip=0x0011a0; 	J(JMP(code_bto_blank));	// 29389 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:11A0
loc_1f343:
	// 6268 
cs=0xfbc;eip=0x0011a3; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 29393 mov     al, [bp+var_12] ;~ 0FBC:11A3
cs=0xfbc;eip=0x0011a6; 	X(MOV(current_surf_type, al));	// 29394 mov     current_surf_type, al ;~ 0FBC:11A6
cs=0xfbc;eip=0x0011a9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 29395 mov     ax, [bp+var_22] ;~ 0FBC:11A9
cs=0xfbc;eip=0x0011ac; 	J(JMP(loc_1ea9d));	// 29396 jmp     loc_1EA9D ;~ 0FBC:11AC
loc_1f350:
	// 6269 
cs=0xfbc;eip=0x0011b0; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0));	// 29402 cmp     [bp+var_28], 0 ;~ 0FBC:11B0
cs=0xfbc;eip=0x0011b4; 	J(JLE(loc_1f3a8));	// 29403 jle     short loc_1F3A8 ;~ 0FBC:11B4
cs=0xfbc;eip=0x0011b6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 29404 mov     bx, [bp+arg_0] ;~ 0FBC:11B6
cs=0xfbc;eip=0x0011b9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 29405 mov     ax, [bx+2] ;~ 0FBC:11B9
cs=0xfbc;eip=0x0011bc; 	T(SUB(ax, terrainheight));	// 29406 sub     ax, terrainHeight ;~ 0FBC:11BC
cs=0xfbc;eip=0x0011c0; 	T(CMP(ax, 0x15E));	// 29407 cmp     ax, 15Eh ;~ 0FBC:11C0
cs=0xfbc;eip=0x0011c3; 	J(JLE(loc_1f3a8));	// 29408 jle     short loc_1F3A8 ;~ 0FBC:11C3
cs=0xfbc;eip=0x0011c5; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0x2B4));	// 29409 cmp     [bp+var_1E], 2B4h ;~ 0FBC:11C5
cs=0xfbc;eip=0x0011ca; 	J(JGE(loc_1f3a8));	// 29410 jge     short loc_1F3A8 ;~ 0FBC:11CA
cs=0xfbc;eip=0x0011cc; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0x14C));	// 29411 cmp     [bp+var_1E], 14Ch ;~ 0FBC:11CC
cs=0xfbc;eip=0x0011d1; 	J(JLE(loc_1f3a8));	// 29412 jle     short loc_1F3A8 ;~ 0FBC:11D1
cs=0xfbc;eip=0x0011d3; 	X(MOV(wallheight, 0x2A));	// 29413 mov     wallHeight, 2Ah ; '*' ;~ 0FBC:11D3
cs=0xfbc;eip=0x0011d9; 	X(MOV(elrdwallrelated, 0x0FFF4));	// 29414 mov     elRdWallRelated, 0FFF4h ;~ 0FBC:11D9
cs=0xfbc;eip=0x0011df; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0x200));	// 29415 cmp     [bp+var_1E], 200h ;~ 0FBC:11DF
cs=0xfbc;eip=0x0011e4; 	J(JLE(loc_1f38c));	// 29416 jle     short loc_1F38C ;~ 0FBC:11E4
cs=0xfbc;eip=0x0011e6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 29417 mov     ax, [bp+var_C] ;~ 0FBC:11E6
cs=0xfbc;eip=0x0011e9; 	J(JMP(loc_1f38f));	// 29418 jmp     short loc_1F38F ;~ 0FBC:11E9
loc_1f38c:
	// 6270 
cs=0xfbc;eip=0x0011ec; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 29423 mov     ax, [bp+var_E] ;~ 0FBC:11EC
loc_1f38f:
	// 6271 
cs=0xfbc;eip=0x0011ef; 	T(ADD(ax, 0x18));	// 29426 add     ax, 18h ;~ 0FBC:11EF
cs=0xfbc;eip=0x0011f2; 	X(MOV(wallindex, ax));	// 29427 mov     wallindex, ax ;~ 0FBC:11F2
cs=0xfbc;eip=0x0011f5; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 29428 mov     al, [bp+var_12] ;~ 0FBC:11F5
cs=0xfbc;eip=0x0011f8; 	X(MOV(current_surf_type, al));	// 29429 mov     current_surf_type, al ;~ 0FBC:11F8
cs=0xfbc;eip=0x0011fb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 29430 mov     ax, [bp+var_22] ;~ 0FBC:11FB
cs=0xfbc;eip=0x0011fe; 	T(ADD(ax, 0x19));	// 29431 add     ax, 19h ;~ 0FBC:11FE
cs=0xfbc;eip=0x001201; 	X(MOV(planindex, ax));	// 29432 mov     planindex, ax ;~ 0FBC:1201
cs=0xfbc;eip=0x001204; 	J(JMP(loc_1ebe7));	// 29433 jmp     loc_1EBE7 ;~ 0FBC:1204
loc_1f3a8:
	// 6272 
cs=0xfbc;eip=0x001208; 	X(PUSH(*(dw*)(raddr(ss,bp+var_28))));	// 29439 push    [bp+var_28] ;~ 0FBC:1208
cs=0xfbc;eip=0x00120b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1e))));	// 29440 push    [bp+var_1E] ;~ 0FBC:120B
cs=0xfbc;eip=0x00120e; 	J(CALLF(polarradius2d,0));	// 29441 call    polarRadius2D ;~ 0FBC:120E
cs=0xfbc;eip=0x001213; 	T(ADD(sp, 4));	// 29442 add     sp, 4 ;~ 0FBC:1213
cs=0xfbc;eip=0x001216; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 29443 mov     [bp+var_A], ax ;~ 0FBC:1216
cs=0xfbc;eip=0x001219; 	T(CMP(ax, 0x14C));	// 29444 cmp     ax, 14Ch ;~ 0FBC:1219
cs=0xfbc;eip=0x00121c; 	J(JG(loc_1f3c1));	// 29445 jg      short loc_1F3C1 ;~ 0FBC:121C
cs=0xfbc;eip=0x00121e; 	J(JMP(code_bto_blank));	// 29446 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:121E
loc_1f3c1:
	// 6273 
cs=0xfbc;eip=0x001221; 	T(CMP(ax, 0x2B4));	// 29450 cmp     ax, 2B4h ;~ 0FBC:1221
cs=0xfbc;eip=0x001224; 	J(JL(loc_1f3c9));	// 29451 jl      short loc_1F3C9 ;~ 0FBC:1224
cs=0xfbc;eip=0x001226; 	J(JMP(code_bto_blank));	// 29452 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1226
loc_1f3c9:
	// 6274 
cs=0xfbc;eip=0x001229; 	X(PUSH(*(dw*)(raddr(ss,bp+var_28))));	// 29456 push    [bp+var_28] ;~ 0FBC:1229
cs=0xfbc;eip=0x00122c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1e))));	// 29457 push    [bp+var_1E] ;~ 0FBC:122C
cs=0xfbc;eip=0x00122f; 	J(CALLF(polarangle,0));	// 29458 call    polarAngle ;~ 0FBC:122F
cs=0xfbc;eip=0x001234; 	T(ADD(sp, 4));	// 29459 add     sp, 4 ;~ 0FBC:1234
cs=0xfbc;eip=0x001237; 	T(SUB(ax, 0x100));	// 29460 sub     ax, 100h ;~ 0FBC:1237
cs=0xfbc;eip=0x00123a; 	T(NEG(ax));	// 29461 neg     ax ;~ 0FBC:123A
cs=0xfbc;eip=0x00123c; 	T(AND(ah, 3));	// 29462 and     ah, 3 ;~ 0FBC:123C
cs=0xfbc;eip=0x00123f; 	T(MOV(cx, 0x18));	// 29463 mov     cx, 18h ;~ 0FBC:123F
cs=0xfbc;eip=0x001242; 	T(IMUL1_2(cx));	// 29464 imul    cx ;~ 0FBC:1242
cs=0xfbc;eip=0x001244; 	T(MOV(si, ax));	// 29465 mov     si, ax ;~ 0FBC:1244
cs=0xfbc;eip=0x001246; 	T(MOV(cl, 0x0A));	// 29466 mov     cl, 0Ah ;~ 0FBC:1246
cs=0xfbc;eip=0x001248; 	T(SAR(si, cl));	// 29467 sar     si, cl ;~ 0FBC:1248
cs=0xfbc;eip=0x00124a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 29468 mov     ax, [bp+var_22] ;~ 0FBC:124A
cs=0xfbc;eip=0x00124d; 	T(ADD(ax, si));	// 29469 add     ax, si ;~ 0FBC:124D
cs=0xfbc;eip=0x00124f; 	T(INC(ax));	// 29470 inc     ax ;~ 0FBC:124F
cs=0xfbc;eip=0x001250; 	X(MOV(planindex, ax));	// 29471 mov     planindex, ax ;~ 0FBC:1250
cs=0xfbc;eip=0x001253; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 29472 mov     al, [bp+var_12] ;~ 0FBC:1253
cs=0xfbc;eip=0x001256; 	X(MOV(current_surf_type, al));	// 29473 mov     current_surf_type, al ;~ 0FBC:1256
cs=0xfbc;eip=0x001259; 	X(MOV(byte_4392c, 0));	// 29474 mov     byte_4392C, 0 ;~ 0FBC:1259
cs=0xfbc;eip=0x00125e; 	X(MOV(wallheight, 0x2A));	// 29475 mov     wallHeight, 2Ah ; '*' ;~ 0FBC:125E
cs=0xfbc;eip=0x001264; 	X(MOV(elrdwallrelated, 0x0FFF4));	// 29476 mov     elRdWallRelated, 0FFF4h ;~ 0FBC:1264
cs=0xfbc;eip=0x00126a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 29477 mov     ax, [bp+var_A] ;~ 0FBC:126A
cs=0xfbc;eip=0x00126d; 	T(SUB(ax, 0x200));	// 29478 sub     ax, 200h ;~ 0FBC:126D
cs=0xfbc;eip=0x001270; 	T(CMP(ax, 0x5A));	// 29479 cmp     ax, 5Ah ; 'Z' ;~ 0FBC:1270
cs=0xfbc;eip=0x001273; 	J(JLE(loc_1f41e));	// 29480 jle     short loc_1F41E ;~ 0FBC:1273
cs=0xfbc;eip=0x001275; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 29481 mov     ax, [bp+var_C] ;~ 0FBC:1275
loc_1f418:
	// 6275 
cs=0xfbc;eip=0x001278; 	T(ADD(ax, si));	// 29484 add     ax, si ;~ 0FBC:1278
cs=0xfbc;eip=0x00127a; 	J(JMP(loc_1ea20));	// 29485 jmp     loc_1EA20 ;~ 0FBC:127A
loc_1f41e:
	// 6276 
cs=0xfbc;eip=0x00127e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 29490 mov     ax, [bp+var_A] ;~ 0FBC:127E
cs=0xfbc;eip=0x001281; 	T(SUB(ax, 0x200));	// 29491 sub     ax, 200h ;~ 0FBC:1281
cs=0xfbc;eip=0x001284; 	T(CMP(ax, 0x0FFA6));	// 29492 cmp     ax, 0FFA6h ;~ 0FBC:1284
cs=0xfbc;eip=0x001287; 	J(JL(loc_1f42c));	// 29493 jl      short loc_1F42C ;~ 0FBC:1287
cs=0xfbc;eip=0x001289; 	J(JMP(code_bto_blank));	// 29494 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1289
loc_1f42c:
	// 6277 
cs=0xfbc;eip=0x00128c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 29498 mov     ax, [bp+var_E] ;~ 0FBC:128C
cs=0xfbc;eip=0x00128f; 	J(JMP(loc_1f418));	// 29499 jmp     short loc_1F418 ;~ 0FBC:128F
code_bto_slalom:
	// 6278 
cs=0xfbc;eip=0x001292; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 29505 cmp     [bp+var_32], 78h ; 'x' ; jumptable 0001E5B2 case 34 ;~ 0FBC:1292
cs=0xfbc;eip=0x001296; 	J(JGE(loc_1f43e));	// 29506 jge     short loc_1F43E ;~ 0FBC:1296
cs=0xfbc;eip=0x001298; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 29507 mov     al, [bp+var_12] ;~ 0FBC:1298
cs=0xfbc;eip=0x00129b; 	X(MOV(current_surf_type, al));	// 29508 mov     current_surf_type, al ;~ 0FBC:129B
loc_1f43e:
	// 6279 
cs=0xfbc;eip=0x00129e; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x17));	// 29511 cmp     [bp+var_2C], 17h ;~ 0FBC:129E
cs=0xfbc;eip=0x0012a2; 	J(JL(loc_1f4a0));	// 29512 jl      short loc_1F4A0 ;~ 0FBC:12A2
cs=0xfbc;eip=0x0012a4; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x61));	// 29513 cmp     [bp+var_2C], 61h ; 'a' ;~ 0FBC:12A4
cs=0xfbc;eip=0x0012a8; 	J(JG(loc_1f4a0));	// 29514 jg      short loc_1F4A0 ;~ 0FBC:12A8
cs=0xfbc;eip=0x0012aa; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x0FEF1));	// 29515 cmp     [bp+var_28], 0FEF1h ;~ 0FBC:12AA
cs=0xfbc;eip=0x0012af; 	J(JLE(loc_1f4a0));	// 29516 jle     short loc_1F4A0 ;~ 0FBC:12AF
cs=0xfbc;eip=0x0012b1; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x0FF0F));	// 29517 cmp     [bp+var_28], 0FF0Fh ;~ 0FBC:12B1
cs=0xfbc;eip=0x0012b6; 	J(JGE(loc_1f4a0));	// 29518 jge     short loc_1F4A0 ;~ 0FBC:12B6
cs=0xfbc;eip=0x0012b8; 	X(MOV(wallheight, 0x2A));	// 29519 mov     wallHeight, 2Ah ; '*' ;~ 0FBC:12B8
cs=0xfbc;eip=0x0012be; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FEF1));	// 29520 cmp     [bp+var_14], 0FEF1h ;~ 0FBC:12BE
cs=0xfbc;eip=0x0012c3; 	J(JGE(loc_1f46e));	// 29521 jge     short loc_1F46E ;~ 0FBC:12C3
cs=0xfbc;eip=0x0012c5; 	X(MOV(wallindex, 0x91));	// 29522 mov     wallindex, 91h ; 'ë' ;~ 0FBC:12C5
cs=0xfbc;eip=0x0012cb; 	J(JMP(code_bto_blank));	// 29523 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:12CB
loc_1f46e:
	// 6280 
cs=0xfbc;eip=0x0012ce; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FF0F));	// 29527 cmp     [bp+var_14], 0FF0Fh ;~ 0FBC:12CE
cs=0xfbc;eip=0x0012d3; 	J(JLE(loc_1f47e));	// 29528 jle     short loc_1F47E ;~ 0FBC:12D3
cs=0xfbc;eip=0x0012d5; 	X(MOV(wallindex, 0x92));	// 29529 mov     wallindex, 92h ; 'í' ;~ 0FBC:12D5
cs=0xfbc;eip=0x0012db; 	J(JMP(code_bto_blank));	// 29530 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:12DB
loc_1f47e:
	// 6281 
cs=0xfbc;eip=0x0012de; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x17));	// 29534 cmp     [bp+var_18], 17h ;~ 0FBC:12DE
cs=0xfbc;eip=0x0012e2; 	J(JGE(loc_1f48e));	// 29535 jge     short loc_1F48E ;~ 0FBC:12E2
cs=0xfbc;eip=0x0012e4; 	X(MOV(wallindex, 0x94));	// 29536 mov     wallindex, 94h ; 'î' ;~ 0FBC:12E4
cs=0xfbc;eip=0x0012ea; 	J(JMP(code_bto_blank));	// 29537 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:12EA
loc_1f48e:
	// 6282 
cs=0xfbc;eip=0x0012ee; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x61));	// 29542 cmp     [bp+var_18], 61h ; 'a' ;~ 0FBC:12EE
cs=0xfbc;eip=0x0012f2; 	J(JG(loc_1f497));	// 29543 jg      short loc_1F497 ;~ 0FBC:12F2
cs=0xfbc;eip=0x0012f4; 	J(JMP(code_bto_blank));	// 29544 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:12F4
loc_1f497:
	// 6283 
cs=0xfbc;eip=0x0012f7; 	X(MOV(wallindex, 0x93));	// 29548 mov     wallindex, 93h ; 'ì' ;~ 0FBC:12F7
cs=0xfbc;eip=0x0012fd; 	J(JMP(code_bto_blank));	// 29549 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:12FD
loc_1f4a0:
	// 6284 
cs=0xfbc;eip=0x001300; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FFE9));	// 29554 cmp     [bp+var_2C], 0FFE9h ;~ 0FBC:1300
cs=0xfbc;eip=0x001304; 	J(JLE(loc_1f4a9));	// 29555 jle     short loc_1F4A9 ;~ 0FBC:1304
cs=0xfbc;eip=0x001306; 	J(JMP(code_bto_blank));	// 29556 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1306
loc_1f4a9:
	// 6285 
cs=0xfbc;eip=0x001309; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FF9F));	// 29560 cmp     [bp+var_2C], 0FF9Fh ;~ 0FBC:1309
cs=0xfbc;eip=0x00130d; 	J(JGE(loc_1f4b2));	// 29561 jge     short loc_1F4B2 ;~ 0FBC:130D
cs=0xfbc;eip=0x00130f; 	J(JMP(code_bto_blank));	// 29562 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:130F
loc_1f4b2:
	// 6286 
cs=0xfbc;eip=0x001312; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x10F));	// 29566 cmp     [bp+var_28], 10Fh ;~ 0FBC:1312
cs=0xfbc;eip=0x001317; 	J(JL(loc_1f4bc));	// 29567 jl      short loc_1F4BC ;~ 0FBC:1317
cs=0xfbc;eip=0x001319; 	J(JMP(code_bto_blank));	// 29568 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1319
loc_1f4bc:
	// 6287 
cs=0xfbc;eip=0x00131c; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x0F1));	// 29572 cmp     [bp+var_28], 0F1h ; 'Ò' ;~ 0FBC:131C
cs=0xfbc;eip=0x001321; 	J(JG(loc_1f4c6));	// 29573 jg      short loc_1F4C6 ;~ 0FBC:1321
cs=0xfbc;eip=0x001323; 	J(JMP(code_bto_blank));	// 29574 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1323
loc_1f4c6:
	// 6288 
cs=0xfbc;eip=0x001326; 	X(MOV(wallheight, 0x2A));	// 29578 mov     wallHeight, 2Ah ; '*' ;~ 0FBC:1326
cs=0xfbc;eip=0x00132c; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x10F));	// 29579 cmp     [bp+var_14], 10Fh ;~ 0FBC:132C
cs=0xfbc;eip=0x001331; 	J(JLE(loc_1f4dc));	// 29580 jle     short loc_1F4DC ;~ 0FBC:1331
cs=0xfbc;eip=0x001333; 	X(MOV(wallindex, 0x8D));	// 29581 mov     wallindex, 8Dh ; 'ç' ;~ 0FBC:1333
cs=0xfbc;eip=0x001339; 	J(JMP(code_bto_blank));	// 29582 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1339
loc_1f4dc:
	// 6289 
cs=0xfbc;eip=0x00133c; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0F1));	// 29586 cmp     [bp+var_14], 0F1h ; 'Ò' ;~ 0FBC:133C
cs=0xfbc;eip=0x001341; 	J(JGE(loc_1f4ec));	// 29587 jge     short loc_1F4EC ;~ 0FBC:1341
cs=0xfbc;eip=0x001343; 	X(MOV(wallindex, 0x8E));	// 29588 mov     wallindex, 8Eh ; 'é' ;~ 0FBC:1343
cs=0xfbc;eip=0x001349; 	J(JMP(code_bto_blank));	// 29589 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1349
loc_1f4ec:
	// 6290 
cs=0xfbc;eip=0x00134c; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FFE9));	// 29593 cmp     [bp+var_18], 0FFE9h ;~ 0FBC:134C
cs=0xfbc;eip=0x001350; 	J(JLE(loc_1f4fc));	// 29594 jle     short loc_1F4FC ;~ 0FBC:1350
cs=0xfbc;eip=0x001352; 	X(MOV(wallindex, 0x8F));	// 29595 mov     wallindex, 8Fh ; 'è' ;~ 0FBC:1352
cs=0xfbc;eip=0x001358; 	J(JMP(code_bto_blank));	// 29596 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1358
loc_1f4fc:
	// 6291 
cs=0xfbc;eip=0x00135c; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF9F));	// 29601 cmp     [bp+var_18], 0FF9Fh ;~ 0FBC:135C
cs=0xfbc;eip=0x001360; 	J(JL(loc_1f505));	// 29602 jl      short loc_1F505 ;~ 0FBC:1360
cs=0xfbc;eip=0x001362; 	J(JMP(code_bto_blank));	// 29603 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1362
loc_1f505:
	// 6292 
cs=0xfbc;eip=0x001365; 	X(MOV(wallindex, 0x90));	// 29607 mov     wallindex, 90h ; 'ê' ;~ 0FBC:1365
cs=0xfbc;eip=0x00136b; 	J(JMP(code_bto_blank));	// 29608 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:136B
code_bto_barn:
	// 6293 
cs=0xfbc;eip=0x00136e; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x96));	// 29613 cmp     [bp+var_32], 96h ; 'ñ' ; jumptable 0001E5B2 case 65 ;~ 0FBC:136E
cs=0xfbc;eip=0x001373; 	J(JLE(loc_1f518));	// 29614 jle     short loc_1F518 ;~ 0FBC:1373
cs=0xfbc;eip=0x001375; 	J(JMP(code_bto_blank));	// 29615 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1375
loc_1f518:
	// 6294 
cs=0xfbc;eip=0x001378; 	T(CMP(*(dw*)(raddr(ss,bp+var_2e)), 0x96));	// 29619 cmp     [bp+var_2E], 96h ; 'ñ' ;~ 0FBC:1378
cs=0xfbc;eip=0x00137d; 	J(JLE(loc_1f522));	// 29620 jle     short loc_1F522 ;~ 0FBC:137D
cs=0xfbc;eip=0x00137f; 	J(JMP(code_bto_blank));	// 29621 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:137F
loc_1f522:
	// 6295 
cs=0xfbc;eip=0x001382; 	X(MOV(wallheight, 0x1A9));	// 29625 mov     wallHeight, 1A9h ;~ 0FBC:1382
cs=0xfbc;eip=0x001388; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FF6A));	// 29626 cmp     [bp+var_14], 0FF6Ah ;~ 0FBC:1388
cs=0xfbc;eip=0x00138d; 	J(JG(loc_1f538));	// 29627 jg      short loc_1F538 ;~ 0FBC:138D
cs=0xfbc;eip=0x00138f; 	X(MOV(wallindex, 0x0A1));	// 29628 mov     wallindex, 0A1h ; '°' ;~ 0FBC:138F
cs=0xfbc;eip=0x001395; 	J(JMP(code_bto_blank));	// 29629 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1395
loc_1f538:
	// 6296 
cs=0xfbc;eip=0x001398; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x96));	// 29633 cmp     [bp+var_14], 96h ; 'ñ' ;~ 0FBC:1398
cs=0xfbc;eip=0x00139d; 	J(JL(loc_1f548));	// 29634 jl      short loc_1F548 ;~ 0FBC:139D
cs=0xfbc;eip=0x00139f; 	X(MOV(wallindex, 0x0A2));	// 29635 mov     wallindex, 0A2h ; '¢' ;~ 0FBC:139F
cs=0xfbc;eip=0x0013a5; 	J(JMP(code_bto_blank));	// 29636 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:13A5
loc_1f548:
	// 6297 
cs=0xfbc;eip=0x0013a8; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x96));	// 29640 cmp     [bp+var_18], 96h ; 'ñ' ;~ 0FBC:13A8
cs=0xfbc;eip=0x0013ad; 	J(JL(loc_1f558));	// 29641 jl      short loc_1F558 ;~ 0FBC:13AD
cs=0xfbc;eip=0x0013af; 	X(MOV(wallindex, 0x0A3));	// 29642 mov     wallindex, 0A3h ; '£' ;~ 0FBC:13AF
cs=0xfbc;eip=0x0013b5; 	J(JMP(code_bto_blank));	// 29643 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:13B5
loc_1f558:
	// 6298 
cs=0xfbc;eip=0x0013b8; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF6A));	// 29647 cmp     [bp+var_18], 0FF6Ah ;~ 0FBC:13B8
cs=0xfbc;eip=0x0013bd; 	J(JLE(loc_1f562));	// 29648 jle     short loc_1F562 ;~ 0FBC:13BD
cs=0xfbc;eip=0x0013bf; 	J(JMP(code_bto_blank));	// 29649 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:13BF
loc_1f562:
	// 6299 
cs=0xfbc;eip=0x0013c2; 	X(MOV(wallindex, 0x0A4));	// 29653 mov     wallindex, 0A4h ; '§' ;~ 0FBC:13C2
cs=0xfbc;eip=0x0013c8; 	J(JMP(code_bto_blank));	// 29654 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:13C8
code_bto_gasstation:
	// 6300 
cs=0xfbc;eip=0x0013cc; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FF38));	// 29660 cmp     [bp+var_2C], 0FF38h ; jumptable 0001E5B2 case 66 ;~ 0FBC:13CC
cs=0xfbc;eip=0x0013d1; 	J(JGE(loc_1f576));	// 29661 jge     short loc_1F576 ;~ 0FBC:13D1
cs=0xfbc;eip=0x0013d3; 	J(JMP(code_bto_blank));	// 29662 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:13D3
loc_1f576:
	// 6301 
cs=0xfbc;eip=0x0013d6; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x104));	// 29666 cmp     [bp+var_2C], 104h ;~ 0FBC:13D6
cs=0xfbc;eip=0x0013db; 	J(JLE(loc_1f580));	// 29667 jle     short loc_1F580 ;~ 0FBC:13DB
cs=0xfbc;eip=0x0013dd; 	J(JMP(code_bto_blank));	// 29668 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:13DD
loc_1f580:
	// 6302 
cs=0xfbc;eip=0x0013e0; 	T(CMP(*(dw*)(raddr(ss,bp+var_2e)), 0x50));	// 29672 cmp     [bp+var_2E], 50h ; 'P' ;~ 0FBC:13E0
cs=0xfbc;eip=0x0013e4; 	J(JLE(loc_1f589));	// 29673 jle     short loc_1F589 ;~ 0FBC:13E4
cs=0xfbc;eip=0x0013e6; 	J(JMP(code_bto_blank));	// 29674 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:13E6
loc_1f589:
	// 6303 
cs=0xfbc;eip=0x0013e9; 	X(MOV(wallheight, 0x0E6));	// 29678 mov     wallHeight, 0E6h ; 'Ê' ;~ 0FBC:13E9
cs=0xfbc;eip=0x0013ef; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FFB0));	// 29679 cmp     [bp+var_14], 0FFB0h ;~ 0FBC:13EF
cs=0xfbc;eip=0x0013f3; 	J(JG(loc_1f59e));	// 29680 jg      short loc_1F59E ;~ 0FBC:13F3
cs=0xfbc;eip=0x0013f5; 	X(MOV(wallindex, 0x0A5));	// 29681 mov     wallindex, 0A5h ; '•' ;~ 0FBC:13F5
cs=0xfbc;eip=0x0013fb; 	J(JMP(code_bto_blank));	// 29682 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:13FB
loc_1f59e:
	// 6304 
cs=0xfbc;eip=0x0013fe; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x50));	// 29686 cmp     [bp+var_14], 50h ; 'P' ;~ 0FBC:13FE
cs=0xfbc;eip=0x001402; 	J(JL(loc_1f5ae));	// 29687 jl      short loc_1F5AE ;~ 0FBC:1402
cs=0xfbc;eip=0x001404; 	X(MOV(wallindex, 0x0A8));	// 29688 mov     wallindex, 0A8h ; '®' ;~ 0FBC:1404
cs=0xfbc;eip=0x00140a; 	J(JMP(code_bto_blank));	// 29689 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:140A
loc_1f5ae:
	// 6305 
cs=0xfbc;eip=0x00140e; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF38));	// 29694 cmp     [bp+var_18], 0FF38h ;~ 0FBC:140E
cs=0xfbc;eip=0x001413; 	J(JG(loc_1f5be));	// 29695 jg      short loc_1F5BE ;~ 0FBC:1413
cs=0xfbc;eip=0x001415; 	X(MOV(wallindex, 0x0A6));	// 29696 mov     wallindex, 0A6h ; '¶' ;~ 0FBC:1415
cs=0xfbc;eip=0x00141b; 	J(JMP(code_bto_blank));	// 29697 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:141B
loc_1f5be:
	// 6306 
cs=0xfbc;eip=0x00141e; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x104));	// 29701 cmp     [bp+var_18], 104h ;~ 0FBC:141E
cs=0xfbc;eip=0x001423; 	J(JGE(loc_1f5c8));	// 29702 jge     short loc_1F5C8 ;~ 0FBC:1423
cs=0xfbc;eip=0x001425; 	J(JMP(code_bto_blank));	// 29703 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1425
loc_1f5c8:
	// 6307 
cs=0xfbc;eip=0x001428; 	X(MOV(wallindex, 0x0A7));	// 29707 mov     wallindex, 0A7h ; 'ß' ;~ 0FBC:1428
cs=0xfbc;eip=0x00142e; 	J(JMP(code_bto_blank));	// 29708 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:142E
code_bto_joes:
	// 6308 
cs=0xfbc;eip=0x001432; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x0B4));	// 29714 cmp     [bp+var_32], 0B4h ; '¥' ; jumptable 0001E5B2 case 67 ;~ 0FBC:1432
cs=0xfbc;eip=0x001437; 	J(JLE(loc_1f5dc));	// 29715 jle     short loc_1F5DC ;~ 0FBC:1437
cs=0xfbc;eip=0x001439; 	J(JMP(code_bto_blank));	// 29716 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1439
loc_1f5dc:
	// 6309 
cs=0xfbc;eip=0x00143c; 	T(CMP(*(dw*)(raddr(ss,bp+var_2e)), 0x64));	// 29720 cmp     [bp+var_2E], 64h ; 'd' ;~ 0FBC:143C
cs=0xfbc;eip=0x001440; 	J(JLE(loc_1f5e5));	// 29721 jle     short loc_1F5E5 ;~ 0FBC:1440
cs=0xfbc;eip=0x001442; 	J(JMP(code_bto_blank));	// 29722 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1442
loc_1f5e5:
	// 6310 
cs=0xfbc;eip=0x001445; 	X(MOV(wallheight, 0x0F8));	// 29726 mov     wallHeight, 0F8h ; '¯' ;~ 0FBC:1445
cs=0xfbc;eip=0x00144b; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FF9C));	// 29727 cmp     [bp+var_14], 0FF9Ch ;~ 0FBC:144B
cs=0xfbc;eip=0x00144f; 	J(JG(loc_1f5fa));	// 29728 jg      short loc_1F5FA ;~ 0FBC:144F
cs=0xfbc;eip=0x001451; 	X(MOV(wallindex, 0x0A9));	// 29729 mov     wallindex, 0A9h ; '©' ;~ 0FBC:1451
cs=0xfbc;eip=0x001457; 	J(JMP(code_bto_blank));	// 29730 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1457
loc_1f5fa:
	// 6311 
cs=0xfbc;eip=0x00145a; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x64));	// 29734 cmp     [bp+var_14], 64h ; 'd' ;~ 0FBC:145A
cs=0xfbc;eip=0x00145e; 	J(JL(loc_1f60a));	// 29735 jl      short loc_1F60A ;~ 0FBC:145E
cs=0xfbc;eip=0x001460; 	X(MOV(wallindex, 0x0AC));	// 29736 mov     wallindex, 0ACh ; '¨' ;~ 0FBC:1460
cs=0xfbc;eip=0x001466; 	J(JMP(code_bto_blank));	// 29737 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1466
loc_1f60a:
	// 6312 
cs=0xfbc;eip=0x00146a; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF4C));	// 29742 cmp     [bp+var_18], 0FF4Ch ;~ 0FBC:146A
cs=0xfbc;eip=0x00146f; 	J(JG(loc_1f61a));	// 29743 jg      short loc_1F61A ;~ 0FBC:146F
cs=0xfbc;eip=0x001471; 	X(MOV(wallindex, 0x0AB));	// 29744 mov     wallindex, 0ABh ; '´' ;~ 0FBC:1471
cs=0xfbc;eip=0x001477; 	J(JMP(code_bto_blank));	// 29745 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1477
loc_1f61a:
	// 6313 
cs=0xfbc;eip=0x00147a; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0B4));	// 29749 cmp     [bp+var_18], 0B4h ; '¥' ;~ 0FBC:147A
cs=0xfbc;eip=0x00147f; 	J(JGE(loc_1f624));	// 29750 jge     short loc_1F624 ;~ 0FBC:147F
cs=0xfbc;eip=0x001481; 	J(JMP(code_bto_blank));	// 29751 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1481
loc_1f624:
	// 6314 
cs=0xfbc;eip=0x001484; 	X(MOV(wallindex, 0x0AA));	// 29755 mov     wallindex, 0AAh ; '™' ;~ 0FBC:1484
cs=0xfbc;eip=0x00148a; 	J(JMP(code_bto_blank));	// 29756 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:148A
code_bto_office:
	// 6315 
cs=0xfbc;eip=0x00148e; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x0C8));	// 29762 cmp     [bp+var_32], 0C8h ; '»' ; jumptable 0001E5B2 case 68 ;~ 0FBC:148E
cs=0xfbc;eip=0x001493; 	J(JLE(loc_1f638));	// 29763 jle     short loc_1F638 ;~ 0FBC:1493
cs=0xfbc;eip=0x001495; 	J(JMP(code_bto_blank));	// 29764 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1495
loc_1f638:
	// 6316 
cs=0xfbc;eip=0x001498; 	T(CMP(*(dw*)(raddr(ss,bp+var_2e)), 0x0C8));	// 29768 cmp     [bp+var_2E], 0C8h ; '»' ;~ 0FBC:1498
cs=0xfbc;eip=0x00149d; 	J(JLE(loc_1f642));	// 29769 jle     short loc_1F642 ;~ 0FBC:149D
cs=0xfbc;eip=0x00149f; 	J(JMP(code_bto_blank));	// 29770 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:149F
loc_1f642:
	// 6317 
cs=0xfbc;eip=0x0014a2; 	X(MOV(wallheight, 0x226));	// 29774 mov     wallHeight, 226h ;~ 0FBC:14A2
cs=0xfbc;eip=0x0014a8; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FF38));	// 29775 cmp     [bp+var_14], 0FF38h ;~ 0FBC:14A8
cs=0xfbc;eip=0x0014ad; 	J(JG(loc_1f658));	// 29776 jg      short loc_1F658 ;~ 0FBC:14AD
cs=0xfbc;eip=0x0014af; 	X(MOV(wallindex, 0x0AD));	// 29777 mov     wallindex, 0ADh ; '≠' ;~ 0FBC:14AF
cs=0xfbc;eip=0x0014b5; 	J(JMP(code_bto_blank));	// 29778 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:14B5
loc_1f658:
	// 6318 
cs=0xfbc;eip=0x0014b8; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0C8));	// 29782 cmp     [bp+var_14], 0C8h ; '»' ;~ 0FBC:14B8
cs=0xfbc;eip=0x0014bd; 	J(JL(loc_1f668));	// 29783 jl      short loc_1F668 ;~ 0FBC:14BD
cs=0xfbc;eip=0x0014bf; 	X(MOV(wallindex, 0x0AE));	// 29784 mov     wallindex, 0AEh ; 'Æ' ;~ 0FBC:14BF
cs=0xfbc;eip=0x0014c5; 	J(JMP(code_bto_blank));	// 29785 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:14C5
loc_1f668:
	// 6319 
cs=0xfbc;eip=0x0014c8; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF38));	// 29789 cmp     [bp+var_18], 0FF38h ;~ 0FBC:14C8
cs=0xfbc;eip=0x0014cd; 	J(JG(loc_1f678));	// 29790 jg      short loc_1F678 ;~ 0FBC:14CD
cs=0xfbc;eip=0x0014cf; 	X(MOV(wallindex, 0x0AF));	// 29791 mov     wallindex, 0AFh ; 'Ø' ;~ 0FBC:14CF
cs=0xfbc;eip=0x0014d5; 	J(JMP(code_bto_blank));	// 29792 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:14D5
loc_1f678:
	// 6320 
cs=0xfbc;eip=0x0014d8; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0C8));	// 29796 cmp     [bp+var_18], 0C8h ; '»' ;~ 0FBC:14D8
cs=0xfbc;eip=0x0014dd; 	J(JGE(loc_1f682));	// 29797 jge     short loc_1F682 ;~ 0FBC:14DD
cs=0xfbc;eip=0x0014df; 	J(JMP(code_bto_blank));	// 29798 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:14DF
loc_1f682:
	// 6321 
cs=0xfbc;eip=0x0014e2; 	X(MOV(wallindex, 0x0B0));	// 29802 mov     wallindex, 0B0h ; '∞' ;~ 0FBC:14E2
cs=0xfbc;eip=0x0014e8; 	J(JMP(code_bto_blank));	// 29803 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:14E8
code_bto_windmill:
	// 6322 
cs=0xfbc;eip=0x0014ec; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x72));	// 29809 cmp     [bp+var_32], 72h ; 'r' ; jumptable 0001E5B2 case 69 ;~ 0FBC:14EC
cs=0xfbc;eip=0x0014f0; 	J(JLE(loc_1f695));	// 29810 jle     short loc_1F695 ;~ 0FBC:14F0
cs=0xfbc;eip=0x0014f2; 	J(JMP(code_bto_blank));	// 29811 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:14F2
loc_1f695:
	// 6323 
cs=0xfbc;eip=0x0014f5; 	T(CMP(*(dw*)(raddr(ss,bp+var_2e)), 0x72));	// 29815 cmp     [bp+var_2E], 72h ; 'r' ;~ 0FBC:14F5
cs=0xfbc;eip=0x0014f9; 	J(JLE(loc_1f69e));	// 29816 jle     short loc_1F69E ;~ 0FBC:14F9
cs=0xfbc;eip=0x0014fb; 	J(JMP(code_bto_blank));	// 29817 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:14FB
loc_1f69e:
	// 6324 
cs=0xfbc;eip=0x0014fe; 	X(MOV(wallheight, 0x1EF));	// 29821 mov     wallHeight, 1EFh ;~ 0FBC:14FE
cs=0xfbc;eip=0x001504; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FF8E));	// 29822 cmp     [bp+var_14], 0FF8Eh ;~ 0FBC:1504
cs=0xfbc;eip=0x001508; 	J(JG(loc_1f6b4));	// 29823 jg      short loc_1F6B4 ;~ 0FBC:1508
cs=0xfbc;eip=0x00150a; 	X(MOV(wallindex, 0x0B4));	// 29824 mov     wallindex, 0B4h ; '¥' ;~ 0FBC:150A
cs=0xfbc;eip=0x001510; 	J(JMP(code_bto_blank));	// 29825 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1510
loc_1f6b4:
	// 6325 
cs=0xfbc;eip=0x001514; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x72));	// 29830 cmp     [bp+var_14], 72h ; 'r' ;~ 0FBC:1514
cs=0xfbc;eip=0x001518; 	J(JL(loc_1f6c4));	// 29831 jl      short loc_1F6C4 ;~ 0FBC:1518
cs=0xfbc;eip=0x00151a; 	X(MOV(wallindex, 0x0B2));	// 29832 mov     wallindex, 0B2h ; '≤' ;~ 0FBC:151A
cs=0xfbc;eip=0x001520; 	J(JMP(code_bto_blank));	// 29833 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1520
loc_1f6c4:
	// 6326 
cs=0xfbc;eip=0x001524; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF8E));	// 29838 cmp     [bp+var_18], 0FF8Eh ;~ 0FBC:1524
cs=0xfbc;eip=0x001528; 	J(JG(loc_1f6d4));	// 29839 jg      short loc_1F6D4 ;~ 0FBC:1528
cs=0xfbc;eip=0x00152a; 	X(MOV(wallindex, 0x0B1));	// 29840 mov     wallindex, 0B1h ; '±' ;~ 0FBC:152A
cs=0xfbc;eip=0x001530; 	J(JMP(code_bto_blank));	// 29841 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1530
loc_1f6d4:
	// 6327 
cs=0xfbc;eip=0x001534; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x72));	// 29846 cmp     [bp+var_18], 72h ; 'r' ;~ 0FBC:1534
cs=0xfbc;eip=0x001538; 	J(JGE(loc_1f6dd));	// 29847 jge     short loc_1F6DD ;~ 0FBC:1538
cs=0xfbc;eip=0x00153a; 	J(JMP(code_bto_blank));	// 29848 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:153A
loc_1f6dd:
	// 6328 
cs=0xfbc;eip=0x00153d; 	X(MOV(wallindex, 0x0B3));	// 29852 mov     wallindex, 0B3h ; '≥' ;~ 0FBC:153D
cs=0xfbc;eip=0x001543; 	J(JMP(code_bto_blank));	// 29853 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1543
code_bto_ship:
	// 6329 
cs=0xfbc;eip=0x001546; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FF56));	// 29858 cmp     [bp+var_2C], 0FF56h ; jumptable 0001E5B2 case 70 ;~ 0FBC:1546
cs=0xfbc;eip=0x00154b; 	J(JGE(loc_1f6f0));	// 29859 jge     short loc_1F6F0 ;~ 0FBC:154B
cs=0xfbc;eip=0x00154d; 	J(JMP(code_bto_blank));	// 29860 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:154D
loc_1f6f0:
	// 6330 
cs=0xfbc;eip=0x001550; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x104));	// 29864 cmp     [bp+var_2C], 104h ;~ 0FBC:1550
cs=0xfbc;eip=0x001555; 	J(JLE(loc_1f6fa));	// 29865 jle     short loc_1F6FA ;~ 0FBC:1555
cs=0xfbc;eip=0x001557; 	J(JMP(code_bto_blank));	// 29866 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1557
loc_1f6fa:
	// 6331 
cs=0xfbc;eip=0x00155a; 	T(CMP(*(dw*)(raddr(ss,bp+var_2e)), 0x6E));	// 29870 cmp     [bp+var_2E], 6Eh ; 'n' ;~ 0FBC:155A
cs=0xfbc;eip=0x00155e; 	J(JLE(loc_1f703));	// 29871 jle     short loc_1F703 ;~ 0FBC:155E
cs=0xfbc;eip=0x001560; 	J(JMP(code_bto_blank));	// 29872 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1560
loc_1f703:
	// 6332 
cs=0xfbc;eip=0x001563; 	X(MOV(wallheight, 0x0E6));	// 29876 mov     wallHeight, 0E6h ; 'Ê' ;~ 0FBC:1563
cs=0xfbc;eip=0x001569; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FF92));	// 29877 cmp     [bp+var_14], 0FF92h ;~ 0FBC:1569
cs=0xfbc;eip=0x00156d; 	J(JG(loc_1f71a));	// 29878 jg      short loc_1F71A ;~ 0FBC:156D
cs=0xfbc;eip=0x00156f; 	X(MOV(wallindex, 0x0B5));	// 29879 mov     wallindex, 0B5h ; 'µ' ;~ 0FBC:156F
cs=0xfbc;eip=0x001575; 	J(JMP(code_bto_blank));	// 29880 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1575
loc_1f71a:
	// 6333 
cs=0xfbc;eip=0x00157a; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x6E));	// 29886 cmp     [bp+var_14], 6Eh ; 'n' ;~ 0FBC:157A
cs=0xfbc;eip=0x00157e; 	J(JL(loc_1f72a));	// 29887 jl      short loc_1F72A ;~ 0FBC:157E
cs=0xfbc;eip=0x001580; 	X(MOV(wallindex, 0x0B8));	// 29888 mov     wallindex, 0B8h ; '∏' ;~ 0FBC:1580
cs=0xfbc;eip=0x001586; 	J(JMP(code_bto_blank));	// 29889 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1586
loc_1f72a:
	// 6334 
cs=0xfbc;eip=0x00158a; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF56));	// 29894 cmp     [bp+var_18], 0FF56h ;~ 0FBC:158A
cs=0xfbc;eip=0x00158f; 	J(JG(loc_1f73c));	// 29895 jg      short loc_1F73C ;~ 0FBC:158F
cs=0xfbc;eip=0x001591; 	X(MOV(wallindex, 0x0B7));	// 29896 mov     wallindex, 0B7h ; '∑' ;~ 0FBC:1591
cs=0xfbc;eip=0x001597; 	J(JMP(code_bto_blank));	// 29897 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1597
loc_1f73c:
	// 6335 
cs=0xfbc;eip=0x00159c; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x104));	// 29903 cmp     [bp+var_18], 104h ;~ 0FBC:159C
cs=0xfbc;eip=0x0015a1; 	J(JGE(loc_1f746));	// 29904 jge     short loc_1F746 ;~ 0FBC:15A1
cs=0xfbc;eip=0x0015a3; 	J(JMP(code_bto_blank));	// 29905 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:15A3
loc_1f746:
	// 6336 
cs=0xfbc;eip=0x0015a6; 	X(MOV(wallindex, 0x0B6));	// 29909 mov     wallindex, 0B6h ; '∂' ;~ 0FBC:15A6
cs=0xfbc;eip=0x0015ac; 	J(JMP(code_bto_blank));	// 29910 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:15AC
bto_branches:
	// 6337 
code_bto_blank:
	// 6338 
cs=0xfbc;eip=0x001646; 	T(CMP(*(raddr(ss,bp+var_34)), 7));	// 29946 cmp     [bp+var_34], 7  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1646
cs=0xfbc;eip=0x00164a; 	J(JNC(code_hillslope_parsing));	// 29947 jnb     short code_hillslope_parsing ;~ 0FBC:164A
cs=0xfbc;eip=0x00164c; 	J(JMP(loc_1f8cd));	// 29948 jmp     loc_1F8CD ;~ 0FBC:164C
code_hillslope_parsing:
	// 6339 
cs=0xfbc;eip=0x00164f; 	T(MOV(al, *(raddr(ss,bp+var_1a))));	// 29952 mov     al, [bp+var_1A] ;~ 0FBC:164F
cs=0xfbc;eip=0x001652; 	T(CBW);	// 29953 cbw ;~ 0FBC:1652
cs=0xfbc;eip=0x001653; 	T(MOV(bx, ax));	// 29954 mov     bx, ax ;~ 0FBC:1653
cs=0xfbc;eip=0x001655; 	T(SHL(bx, 1));	// 29955 shl     bx, 1 ;~ 0FBC:1655
cs=0xfbc;eip=0x001657; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 29956 mov     di, [bp+arg_0] ;~ 0FBC:1657
cs=0xfbc;eip=0x00165a; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 29957 mov     ax, [di] ;~ 0FBC:165A
cs=0xfbc;eip=0x00165c; 	T(SUB(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 29958 sub     ax, trackcenterpos2[bx] ;~ 0FBC:165C
cs=0xfbc;eip=0x001660; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 29959 mov     [bp+var_2C], ax ;~ 0FBC:1660
cs=0xfbc;eip=0x001663; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 29960 mov     al, [bp+var_20] ;~ 0FBC:1663
cs=0xfbc;eip=0x001666; 	T(CBW);	// 29961 cbw ;~ 0FBC:1666
cs=0xfbc;eip=0x001667; 	T(MOV(bx, ax));	// 29962 mov     bx, ax ;~ 0FBC:1667
cs=0xfbc;eip=0x001669; 	T(SHL(bx, 1));	// 29963 shl     bx, 1 ;~ 0FBC:1669
cs=0xfbc;eip=0x00166b; 	T(MOV(ax, *(dw*)(raddr(ds,di+4))));	// 29964 mov     ax, [di+4] ;~ 0FBC:166B
cs=0xfbc;eip=0x00166e; 	T(SUB(ax, *(dw*)(((db*)terraincenterpos)+bx)));	// 29965 sub     ax, terraincenterpos[bx] ;~ 0FBC:166E
cs=0xfbc;eip=0x001672; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 29966 mov     [bp+var_28], ax ;~ 0FBC:1672
cs=0xfbc;eip=0x001675; 	T(MOV(al, *(raddr(ss,bp+var_34))));	// 29967 mov     al, [bp+var_34] ;~ 0FBC:1675
cs=0xfbc;eip=0x001678; 	T(SUB(ah, ah));	// 29968 sub     ah, ah ;~ 0FBC:1678
cs=0xfbc;eip=0x00167a; 	T(SUB(ax, 7));	// 29969 sub     ax, 7           ; switch 12 cases ;~ 0FBC:167A
cs=0xfbc;eip=0x00167d; 	T(CMP(ax, 0x0B));	// 29970 cmp     ax, 0Bh ;~ 0FBC:167D
cs=0xfbc;eip=0x001680; 	J(JA(def_1f825));	// 29971 ja      short def_1F825 ; jumptable 0001F825 default case ;~ 0FBC:1680
cs=0xfbc;eip=0x001682; 	T(ADD(ax, ax));	// 29972 add     ax, ax ;~ 0FBC:1682
cs=0xfbc;eip=0x001684; 	T(XCHG(ax, bx));	// 29973 xchg    ax, bx ;~ 0FBC:1684
	cs=seg_offset(seg004);
cs=0xfbc;eip=0x001685; __disp=*(dw*)(((db*)&jpt_1f825)+bx);
	J(return __dispatch_call(__disp, _state););	// 29974 jmp     cs:jpt_1F825[bx] ; switch jump ;~ 0FBC:1685
loc_1f82a:
	// 6340 
cs=0xfbc;eip=0x00168a; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0));	// 29979 mov     [bp+var_10], 0  ; jumptable 0001F825 cases 7,11,15 ;~ 0FBC:168A
cs=0xfbc;eip=0x00168f; 	J(JMP(def_1f825));	// 29980 jmp     short def_1F825 ; jumptable 0001F825 default case ;~ 0FBC:168F
loc_1f832:
	// 6341 
cs=0xfbc;eip=0x001692; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0x300));	// 29986 mov     [bp+var_10], 300h ; jumptable 0001F825 cases 8,12,16 ;~ 0FBC:1692
cs=0xfbc;eip=0x001697; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 29987 mov     ax, [bp+var_2C] ;~ 0FBC:1697
cs=0xfbc;eip=0x00169a; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 29988 mov     [bp+var_1E], ax ;~ 0FBC:169A
cs=0xfbc;eip=0x00169d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 29989 mov     ax, [bp+var_28] ;~ 0FBC:169D
cs=0xfbc;eip=0x0016a0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 29990 mov     [bp+var_2C], ax ;~ 0FBC:16A0
cs=0xfbc;eip=0x0016a3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 29991 mov     ax, [bp+var_1E] ;~ 0FBC:16A3
cs=0xfbc;eip=0x0016a6; 	T(NEG(ax));	// 29992 neg     ax ;~ 0FBC:16A6
loc_1f848:
	// 6342 
cs=0xfbc;eip=0x0016a8; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 29995 mov     [bp+var_28], ax ;~ 0FBC:16A8
cs=0xfbc;eip=0x0016ab; 	J(JMP(def_1f825));	// 29996 jmp     short def_1F825 ; jumptable 0001F825 default case ;~ 0FBC:16AB
loc_1f84e:
	// 6343 
cs=0xfbc;eip=0x0016ae; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0x200));	// 30002 mov     [bp+var_10], 200h ; jumptable 0001F825 cases 9,13,17 ;~ 0FBC:16AE
cs=0xfbc;eip=0x0016b3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 30003 mov     ax, [bp+var_28] ;~ 0FBC:16B3
cs=0xfbc;eip=0x0016b6; 	T(NEG(ax));	// 30004 neg     ax ;~ 0FBC:16B6
cs=0xfbc;eip=0x0016b8; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 30005 mov     [bp+var_28], ax ;~ 0FBC:16B8
cs=0xfbc;eip=0x0016bb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 30006 mov     ax, [bp+var_2C] ;~ 0FBC:16BB
cs=0xfbc;eip=0x0016be; 	T(NEG(ax));	// 30007 neg     ax ;~ 0FBC:16BE
cs=0xfbc;eip=0x0016c0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 30008 mov     [bp+var_2C], ax ;~ 0FBC:16C0
cs=0xfbc;eip=0x0016c3; 	J(JMP(def_1f825));	// 30009 jmp     short def_1F825 ; jumptable 0001F825 default case ;~ 0FBC:16C3
loc_1f866:
	// 6344 
cs=0xfbc;eip=0x0016c6; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0x100));	// 30015 mov     [bp+var_10], 100h ; jumptable 0001F825 cases 10,14,18 ;~ 0FBC:16C6
cs=0xfbc;eip=0x0016cb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 30016 mov     ax, [bp+var_2C] ;~ 0FBC:16CB
cs=0xfbc;eip=0x0016ce; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 30017 mov     [bp+var_1E], ax ;~ 0FBC:16CE
cs=0xfbc;eip=0x0016d1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 30018 mov     ax, [bp+var_28] ;~ 0FBC:16D1
cs=0xfbc;eip=0x0016d4; 	T(NEG(ax));	// 30019 neg     ax ;~ 0FBC:16D4
cs=0xfbc;eip=0x0016d6; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 30020 mov     [bp+var_2C], ax ;~ 0FBC:16D6
cs=0xfbc;eip=0x0016d9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 30021 mov     ax, [bp+var_1E] ;~ 0FBC:16D9
cs=0xfbc;eip=0x0016dc; 	J(JMP(loc_1f848));	// 30022 jmp     short loc_1F848 ;~ 0FBC:16DC
def_1f825:
	// 6345 
cs=0xfbc;eip=0x0016f6; 	T(MOV(al, *(raddr(ss,bp+var_34))));	// 30040 mov     al, [bp+var_34] ; jumptable 0001F825 default case ;~ 0FBC:16F6
cs=0xfbc;eip=0x0016f9; 	T(SUB(ah, ah));	// 30041 sub     ah, ah ;~ 0FBC:16F9
cs=0xfbc;eip=0x0016fb; 	T(CMP(ax, 7));	// 30042 cmp     ax, 7 ;~ 0FBC:16FB
cs=0xfbc;eip=0x0016fe; 	J(JC(loc_1f8cd));	// 30043 jb      short loc_1F8CD ;~ 0FBC:16FE
cs=0xfbc;eip=0x001700; 	T(CMP(ax, 0x0A));	// 30044 cmp     ax, 0Ah ;~ 0FBC:1700
cs=0xfbc;eip=0x001703; 	J(JBE(loc_1f8c0));	// 30045 jbe     short loc_1F8C0 ;~ 0FBC:1703
cs=0xfbc;eip=0x001705; 	T(CMP(ax, 0x0B));	// 30046 cmp     ax, 0Bh ;~ 0FBC:1705
cs=0xfbc;eip=0x001708; 	J(JC(loc_1f8cd));	// 30047 jb      short loc_1F8CD ;~ 0FBC:1708
cs=0xfbc;eip=0x00170a; 	T(CMP(ax, 0x0E));	// 30048 cmp     ax, 0Eh ;~ 0FBC:170A
cs=0xfbc;eip=0x00170d; 	J(JBE(loc_1f8fc));	// 30049 jbe     short loc_1F8FC ;~ 0FBC:170D
cs=0xfbc;eip=0x00170f; 	T(CMP(ax, 0x0F));	// 30050 cmp     ax, 0Fh ;~ 0FBC:170F
cs=0xfbc;eip=0x001712; 	J(JC(loc_1f8cd));	// 30051 jb      short loc_1F8CD ;~ 0FBC:1712
cs=0xfbc;eip=0x001714; 	T(CMP(ax, 0x12));	// 30052 cmp     ax, 12h ;~ 0FBC:1714
cs=0xfbc;eip=0x001717; 	J(JA(loc_1f8bc));	// 30053 ja      short loc_1F8BC ;~ 0FBC:1717
cs=0xfbc;eip=0x001719; 	J(JMP(loc_1f940));	// 30054 jmp     loc_1F940 ;~ 0FBC:1719
loc_1f8bc:
	// 6346 
cs=0xfbc;eip=0x00171c; 	J(JMP(loc_1f8cd));	// 30058 jmp     short loc_1F8CD ;~ 0FBC:171C
loc_1f8c0:
	// 6347 
cs=0xfbc;eip=0x001720; 	T(CMP(planindex, 0));	// 30064 cmp     planindex, 0 ;~ 0FBC:1720
cs=0xfbc;eip=0x001725; 	J(JNZ(loc_1f8cd));	// 30065 jnz     short loc_1F8CD ;~ 0FBC:1725
cs=0xfbc;eip=0x001727; 	X(MOV(planindex, 3));	// 30066 mov     planindex, 3 ;~ 0FBC:1727
loc_1f8cd:
	// 6348 
cs=0xfbc;eip=0x00172d; 	T(CMP(planindex, 0));	// 30070 cmp     planindex, 0 ;~ 0FBC:172D
cs=0xfbc;eip=0x001732; 	J(JG(loc_1f8d7));	// 30071 jg      short loc_1F8D7 ;~ 0FBC:1732
cs=0xfbc;eip=0x001734; 	J(JMP(loc_1f992));	// 30072 jmp     loc_1F992 ;~ 0FBC:1734
loc_1f8d7:
	// 6349 
cs=0xfbc;eip=0x001737; 	T(MOV(cl, 2));	// 30076 mov     cl, 2 ;~ 0FBC:1737
cs=0xfbc;eip=0x001739; 	X(SHL(planindex, cl));	// 30077 shl     planindex, cl ;~ 0FBC:1739
cs=0xfbc;eip=0x00173d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 30078 mov     ax, [bp+var_10] ;~ 0FBC:173D
cs=0xfbc;eip=0x001740; 	T(CMP(ax, 0x100));	// 30079 cmp     ax, 100h ;~ 0FBC:1740
cs=0xfbc;eip=0x001743; 	J(JNZ(loc_1f8e8));	// 30080 jnz     short loc_1F8E8 ;~ 0FBC:1743
cs=0xfbc;eip=0x001745; 	J(JMP(loc_1f9cc));	// 30081 jmp     loc_1F9CC ;~ 0FBC:1745
loc_1f8e8:
	// 6350 
cs=0xfbc;eip=0x001748; 	T(CMP(ax, 0x200));	// 30085 cmp     ax, 200h ;~ 0FBC:1748
cs=0xfbc;eip=0x00174b; 	J(JNZ(loc_1f8f0));	// 30086 jnz     short loc_1F8F0 ;~ 0FBC:174B
cs=0xfbc;eip=0x00174d; 	J(JMP(loc_1f9c4));	// 30087 jmp     loc_1F9C4 ;~ 0FBC:174D
loc_1f8f0:
	// 6351 
cs=0xfbc;eip=0x001750; 	T(CMP(ax, 0x300));	// 30091 cmp     ax, 300h ;~ 0FBC:1750
cs=0xfbc;eip=0x001753; 	J(JNZ(loc_1f8f8));	// 30092 jnz     short loc_1F8F8 ;~ 0FBC:1753
cs=0xfbc;eip=0x001755; 	J(JMP(loc_1f98e));	// 30093 jmp     loc_1F98E ;~ 0FBC:1755
loc_1f8f8:
	// 6352 
cs=0xfbc;eip=0x001758; 	J(JMP(loc_1f992));	// 30097 jmp     loc_1F992 ;~ 0FBC:1758
loc_1f8fc:
	// 6353 
cs=0xfbc;eip=0x00175c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_28))));	// 30102 push    [bp+var_28] ;~ 0FBC:175C
cs=0xfbc;eip=0x00175f; 	T(MOV(ax, 0x0FF80));	// 30103 mov     ax, 0FF80h ;~ 0FBC:175F
cs=0xfbc;eip=0x001762; 	X(PUSH(ax));	// 30104 push    ax ;~ 0FBC:1762
cs=0xfbc;eip=0x001763; 	J(CALLF(sin_fast,0));	// 30105 call    sin_fast ;~ 0FBC:1763
cs=0xfbc;eip=0x001768; 	T(ADD(sp, 2));	// 30106 add     sp, 2 ;~ 0FBC:1768
cs=0xfbc;eip=0x00176b; 	X(PUSH(ax));	// 30107 push    ax ;~ 0FBC:176B
cs=0xfbc;eip=0x00176c; 	J(CALLF(multiply_and_scale,0));	// 30108 call    multiply_and_scale ;~ 0FBC:176C
cs=0xfbc;eip=0x001771; 	T(ADD(sp, 4));	// 30109 add     sp, 4 ;~ 0FBC:1771
cs=0xfbc;eip=0x001774; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2c))));	// 30110 push    [bp+var_2C] ;~ 0FBC:1774
cs=0xfbc;eip=0x001777; 	T(MOV(cx, 0x0FF80));	// 30111 mov     cx, 0FF80h ;~ 0FBC:1777
cs=0xfbc;eip=0x00177a; 	X(PUSH(cx));	// 30112 push    cx ;~ 0FBC:177A
cs=0xfbc;eip=0x00177b; 	T(MOV(di, ax));	// 30113 mov     di, ax ;~ 0FBC:177B
cs=0xfbc;eip=0x00177d; 	J(CALLF(cos_fast,0));	// 30114 call    cos_fast ;~ 0FBC:177D
cs=0xfbc;eip=0x001782; 	T(ADD(sp, 2));	// 30115 add     sp, 2 ;~ 0FBC:1782
cs=0xfbc;eip=0x001785; 	X(PUSH(ax));	// 30116 push    ax ;~ 0FBC:1785
cs=0xfbc;eip=0x001786; 	J(CALLF(multiply_and_scale,0));	// 30117 call    multiply_and_scale ;~ 0FBC:1786
cs=0xfbc;eip=0x00178b; 	T(ADD(sp, 4));	// 30118 add     sp, 4 ;~ 0FBC:178B
cs=0xfbc;eip=0x00178e; 	T(ADD(ax, di));	// 30119 add     ax, di ;~ 0FBC:178E
cs=0xfbc;eip=0x001790; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 30120 mov     [bp+var_22], ax ;~ 0FBC:1790
cs=0xfbc;eip=0x001793; 	T(OR(ax, ax));	// 30121 or      ax, ax ;~ 0FBC:1793
cs=0xfbc;eip=0x001795; 	J(JGE(loc_1f8cd));	// 30122 jge     short loc_1F8CD ;~ 0FBC:1795
cs=0xfbc;eip=0x001797; 	X(MOV(planindex, 4));	// 30123 mov     planindex, 4 ;~ 0FBC:1797
cs=0xfbc;eip=0x00179d; 	J(JMP(loc_1f8cd));	// 30124 jmp     short loc_1F8CD ;~ 0FBC:179D
loc_1f940:
	// 6354 
cs=0xfbc;eip=0x0017a0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_28))));	// 30129 push    [bp+var_28] ;~ 0FBC:17A0
cs=0xfbc;eip=0x0017a3; 	T(MOV(ax, 0x0FF80));	// 30130 mov     ax, 0FF80h ;~ 0FBC:17A3
cs=0xfbc;eip=0x0017a6; 	X(PUSH(ax));	// 30131 push    ax ;~ 0FBC:17A6
cs=0xfbc;eip=0x0017a7; 	J(CALLF(sin_fast,0));	// 30132 call    sin_fast ;~ 0FBC:17A7
cs=0xfbc;eip=0x0017ac; 	T(ADD(sp, 2));	// 30133 add     sp, 2 ;~ 0FBC:17AC
cs=0xfbc;eip=0x0017af; 	X(PUSH(ax));	// 30134 push    ax ;~ 0FBC:17AF
cs=0xfbc;eip=0x0017b0; 	J(CALLF(multiply_and_scale,0));	// 30135 call    multiply_and_scale ;~ 0FBC:17B0
cs=0xfbc;eip=0x0017b5; 	T(ADD(sp, 4));	// 30136 add     sp, 4 ;~ 0FBC:17B5
cs=0xfbc;eip=0x0017b8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2c))));	// 30137 push    [bp+var_2C] ;~ 0FBC:17B8
cs=0xfbc;eip=0x0017bb; 	T(MOV(cx, 0x0FF80));	// 30138 mov     cx, 0FF80h ;~ 0FBC:17BB
cs=0xfbc;eip=0x0017be; 	X(PUSH(cx));	// 30139 push    cx ;~ 0FBC:17BE
cs=0xfbc;eip=0x0017bf; 	T(MOV(di, ax));	// 30140 mov     di, ax ;~ 0FBC:17BF
cs=0xfbc;eip=0x0017c1; 	J(CALLF(cos_fast,0));	// 30141 call    cos_fast ;~ 0FBC:17C1
cs=0xfbc;eip=0x0017c6; 	T(ADD(sp, 2));	// 30142 add     sp, 2 ;~ 0FBC:17C6
cs=0xfbc;eip=0x0017c9; 	X(PUSH(ax));	// 30143 push    ax ;~ 0FBC:17C9
cs=0xfbc;eip=0x0017ca; 	J(CALLF(multiply_and_scale,0));	// 30144 call    multiply_and_scale ;~ 0FBC:17CA
cs=0xfbc;eip=0x0017cf; 	T(ADD(sp, 4));	// 30145 add     sp, 4 ;~ 0FBC:17CF
cs=0xfbc;eip=0x0017d2; 	T(ADD(ax, di));	// 30146 add     ax, di ;~ 0FBC:17D2
cs=0xfbc;eip=0x0017d4; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 30147 mov     [bp+var_22], ax ;~ 0FBC:17D4
cs=0xfbc;eip=0x0017d7; 	T(OR(ax, ax));	// 30148 or      ax, ax ;~ 0FBC:17D7
cs=0xfbc;eip=0x0017d9; 	J(JLE(loc_1f984));	// 30149 jle     short loc_1F984 ;~ 0FBC:17D9
cs=0xfbc;eip=0x0017db; 	X(MOV(planindex, 5));	// 30150 mov     planindex, 5 ;~ 0FBC:17DB
cs=0xfbc;eip=0x0017e1; 	J(JMP(loc_1f8cd));	// 30151 jmp     loc_1F8CD ;~ 0FBC:17E1
loc_1f984:
	// 6355 
cs=0xfbc;eip=0x0017e4; 	X(MOV(terrainheight, 0x1C2));	// 30155 mov     terrainHeight, 1C2h ;~ 0FBC:17E4
cs=0xfbc;eip=0x0017ea; 	J(JMP(loc_1f8cd));	// 30156 jmp     loc_1F8CD ;~ 0FBC:17EA
loc_1f98e:
	// 6356 
cs=0xfbc;eip=0x0017ee; 	X(INC(planindex));	// 30161 inc     planindex ;~ 0FBC:17EE
loc_1f992:
	// 6357 
cs=0xfbc;eip=0x0017f2; 	T(MOV(ax, 0x22));	// 30165 mov     ax, 22h ; '"' ;~ 0FBC:17F2
cs=0xfbc;eip=0x0017f5; 	X(IMUL1_2(planindex));	// 30166 imul    planindex ;~ 0FBC:17F5
cs=0xfbc;eip=0x0017f9; 	T(ADD(ax, planptr));	// 30167 add     ax, planptr ;~ 0FBC:17F9
cs=0xfbc;eip=0x0017fd; 	T(MOV(dx, word_454c4));	// 30168 mov     dx, word_454C4 ;~ 0FBC:17FD
cs=0xfbc;eip=0x001801; 	X(MOV(current_planptr, ax));	// 30169 mov     current_planptr, ax ;~ 0FBC:1801
cs=0xfbc;eip=0x001804; 	X(MOV(word_44d66, dx));	// 30170 mov     word_44D66, dx ;~ 0FBC:1804
cs=0xfbc;eip=0x001808; 	T(CMP(current_surf_type, 4));	// 30171 cmp     current_surf_type, 4 ;~ 0FBC:1808
cs=0xfbc;eip=0x00180d; 	J(JNZ(loc_1f9d4));	// 30172 jnz     short loc_1F9D4 ;~ 0FBC:180D
cs=0xfbc;eip=0x00180f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 30173 mov     bx, [bp+arg_0] ;~ 0FBC:180F
cs=0xfbc;eip=0x001812; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 30174 mov     ax, [bx+4] ;~ 0FBC:1812
cs=0xfbc;eip=0x001815; 	T(XOR(ax, *(dw*)(raddr(ds,bx))));	// 30175 xor     ax, [bx] ;~ 0FBC:1815
cs=0xfbc;eip=0x001817; 	T(MOV(cl, 8));	// 30176 mov     cl, 8 ;~ 0FBC:1817
cs=0xfbc;eip=0x001819; 	T(SAR(ax, cl));	// 30177 sar     ax, cl ;~ 0FBC:1819
cs=0xfbc;eip=0x00181b; 	T(AND(ax, 1));	// 30178 and     ax, 1 ;~ 0FBC:181B
cs=0xfbc;eip=0x00181e; 	X(ADD(terrainheight, ax));	// 30179 add     terrainHeight, ax ;~ 0FBC:181E
cs=0xfbc;eip=0x001822; 	J(JMP(loc_1f9d9));	// 30180 jmp     short loc_1F9D9 ;~ 0FBC:1822
loc_1f9c4:
	// 6358 
cs=0xfbc;eip=0x001824; 	X(ADD(planindex, 2));	// 30184 add     planindex, 2 ;~ 0FBC:1824
cs=0xfbc;eip=0x001829; 	J(JMP(loc_1f992));	// 30185 jmp     short loc_1F992 ;~ 0FBC:1829
loc_1f9cc:
	// 6359 
cs=0xfbc;eip=0x00182c; 	X(ADD(planindex, 3));	// 30190 add     planindex, 3 ;~ 0FBC:182C
cs=0xfbc;eip=0x001831; 	J(JMP(loc_1f992));	// 30191 jmp     short loc_1F992 ;~ 0FBC:1831
loc_1f9d4:
	// 6360 
cs=0xfbc;eip=0x001834; 	X(ADD(terrainheight, 2));	// 30196 add     terrainHeight, 2 ;~ 0FBC:1834
loc_1f9d9:
	// 6361 
cs=0xfbc;eip=0x001839; 	T(CMP(wallindex, 0));	// 30199 cmp     wallindex, 0 ;~ 0FBC:1839
cs=0xfbc;eip=0x00183e; 	J(JGE(loc_1f9e3));	// 30200 jge     short loc_1F9E3 ;~ 0FBC:183E
cs=0xfbc;eip=0x001840; 	J(JMP(loc_1fade));	// 30201 jmp     loc_1FADE ;~ 0FBC:1840
loc_1f9e3:
	// 6362 
cs=0xfbc;eip=0x001843; 	T(MOV(bx, wallindex));	// 30205 mov     bx, wallindex ;~ 0FBC:1843
cs=0xfbc;eip=0x001847; 	T(MOV(ax, bx));	// 30206 mov     ax, bx ;~ 0FBC:1847
cs=0xfbc;eip=0x001849; 	T(SHL(bx, 1));	// 30207 shl     bx, 1 ;~ 0FBC:1849
cs=0xfbc;eip=0x00184b; 	T(ADD(bx, ax));	// 30208 add     bx, ax ;~ 0FBC:184B
cs=0xfbc;eip=0x00184d; 	T(SHL(bx, 1));	// 30209 shl     bx, 1           ; *6 ;~ 0FBC:184D
cs=0xfbc;eip=0x00184f; 	T(LES(di, wallptr));	// 30210 les     di, wallptr ;~ 0FBC:184F
cs=0xfbc;eip=0x001853; 	T(MOV(ax, *(dw*)(raddr(es,bx+di))));	// 30211 mov     ax, es:[bx+di] ;~ 0FBC:1853
cs=0xfbc;eip=0x001856; 	T(NEG(ax));	// 30212 neg     ax ;~ 0FBC:1856
cs=0xfbc;eip=0x001858; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_10))));	// 30213 add     ax, [bp+var_10] ;~ 0FBC:1858
cs=0xfbc;eip=0x00185b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_38))));	// 30214 add     ax, [bp+var_38] ;~ 0FBC:185B
cs=0xfbc;eip=0x00185e; 	T(AND(ah, 3));	// 30215 and     ah, 3 ;~ 0FBC:185E
cs=0xfbc;eip=0x001861; 	X(MOV(wallorientation, ax));	// 30216 mov     wallOrientation, ax ;~ 0FBC:1861
cs=0xfbc;eip=0x001864; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 30217 mov     ax, [bp+var_10] ;~ 0FBC:1864
cs=0xfbc;eip=0x001867; 	T(OR(ax, ax));	// 30218 or      ax, ax ;~ 0FBC:1867
cs=0xfbc;eip=0x001869; 	J(JZ(loc_1fa20));	// 30219 jz      short loc_1FA20 ;~ 0FBC:1869
cs=0xfbc;eip=0x00186b; 	T(CMP(ax, 0x100));	// 30220 cmp     ax, 100h ;~ 0FBC:186B
cs=0xfbc;eip=0x00186e; 	J(JNZ(loc_1fa13));	// 30221 jnz     short loc_1FA13 ;~ 0FBC:186E
cs=0xfbc;eip=0x001870; 	J(JMP(loc_1faa6));	// 30222 jmp     loc_1FAA6 ;~ 0FBC:1870
loc_1fa13:
	// 6363 
cs=0xfbc;eip=0x001873; 	T(CMP(ax, 0x200));	// 30226 cmp     ax, 200h ;~ 0FBC:1873
cs=0xfbc;eip=0x001876; 	J(JZ(loc_1fa78));	// 30227 jz      short loc_1FA78 ;~ 0FBC:1876
cs=0xfbc;eip=0x001878; 	T(CMP(ax, 0x300));	// 30228 cmp     ax, 300h ;~ 0FBC:1878
cs=0xfbc;eip=0x00187b; 	J(JZ(loc_1fa4c));	// 30229 jz      short loc_1FA4C ;~ 0FBC:187B
cs=0xfbc;eip=0x00187d; 	J(JMP(loc_1fad0));	// 30230 jmp     loc_1FAD0 ;~ 0FBC:187D
loc_1fa20:
	// 6364 
cs=0xfbc;eip=0x001880; 	T(MOV(ax, wallindex));	// 30234 mov     ax, wallindex ;~ 0FBC:1880
cs=0xfbc;eip=0x001883; 	T(MOV(cx, ax));	// 30235 mov     cx, ax ;~ 0FBC:1883
cs=0xfbc;eip=0x001885; 	T(SHL(ax, 1));	// 30236 shl     ax, 1 ;~ 0FBC:1885
cs=0xfbc;eip=0x001887; 	T(ADD(ax, cx));	// 30237 add     ax, cx ;~ 0FBC:1887
cs=0xfbc;eip=0x001889; 	T(SHL(ax, 1));	// 30238 shl     ax, 1 ;~ 0FBC:1889
cs=0xfbc;eip=0x00188b; 	T(ADD(ax, *(dw*)(((db*)&wallptr))));	// 30239 add     ax, word ptr wallptr ;~ 0FBC:188B
cs=0xfbc;eip=0x00188f; 	T(MOV(dx, es));	// 30240 mov     dx, es ;~ 0FBC:188F
cs=0xfbc;eip=0x001891; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_40))), ax));	// 30241 mov     word ptr [bp+var_40], ax ;~ 0FBC:1891
cs=0xfbc;eip=0x001894; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_40+2))), dx));	// 30242 mov     word ptr [bp+var_40+2], dx ;~ 0FBC:1894
cs=0xfbc;eip=0x001897; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_40))));	// 30243 les     bx, [bp+var_40] ;~ 0FBC:1897
cs=0xfbc;eip=0x00189a; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 30244 mov     ax, es:[bx+2] ;~ 0FBC:189A
cs=0xfbc;eip=0x00189e; 	X(MOV(wallstartx, ax));	// 30245 mov     wallStartX, ax ;~ 0FBC:189E
cs=0xfbc;eip=0x0018a1; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 30246 mov     ax, es:[bx+4] ;~ 0FBC:18A1
loc_1fa45:
	// 6365 
cs=0xfbc;eip=0x0018a5; 	X(MOV(wallstartz, ax));	// 30250 mov     wallStartZ, ax ;~ 0FBC:18A5
cs=0xfbc;eip=0x0018a8; 	J(JMP(loc_1fad0));	// 30251 jmp     loc_1FAD0 ;~ 0FBC:18A8
loc_1fa4c:
	// 6366 
cs=0xfbc;eip=0x0018ac; 	T(MOV(ax, wallindex));	// 30256 mov     ax, wallindex ;~ 0FBC:18AC
cs=0xfbc;eip=0x0018af; 	T(MOV(cx, ax));	// 30257 mov     cx, ax ;~ 0FBC:18AF
cs=0xfbc;eip=0x0018b1; 	T(SHL(ax, 1));	// 30258 shl     ax, 1 ;~ 0FBC:18B1
cs=0xfbc;eip=0x0018b3; 	T(ADD(ax, cx));	// 30259 add     ax, cx ;~ 0FBC:18B3
cs=0xfbc;eip=0x0018b5; 	T(SHL(ax, 1));	// 30260 shl     ax, 1 ;~ 0FBC:18B5
cs=0xfbc;eip=0x0018b7; 	T(ADD(ax, *(dw*)(((db*)&wallptr))));	// 30261 add     ax, word ptr wallptr ;~ 0FBC:18B7
cs=0xfbc;eip=0x0018bb; 	T(MOV(dx, *(dw*)(((db*)&wallptr)+2)));	// 30262 mov     dx, word ptr wallptr+2 ;~ 0FBC:18BB
cs=0xfbc;eip=0x0018bf; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_40))), ax));	// 30263 mov     word ptr [bp+var_40], ax ;~ 0FBC:18BF
cs=0xfbc;eip=0x0018c2; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_40+2))), dx));	// 30264 mov     word ptr [bp+var_40+2], dx ;~ 0FBC:18C2
cs=0xfbc;eip=0x0018c5; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_40))));	// 30265 les     bx, [bp+var_40] ;~ 0FBC:18C5
cs=0xfbc;eip=0x0018c8; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 30266 mov     ax, es:[bx+4] ;~ 0FBC:18C8
cs=0xfbc;eip=0x0018cc; 	T(NEG(ax));	// 30267 neg     ax ;~ 0FBC:18CC
cs=0xfbc;eip=0x0018ce; 	X(MOV(wallstartx, ax));	// 30268 mov     wallStartX, ax ;~ 0FBC:18CE
cs=0xfbc;eip=0x0018d1; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 30269 mov     ax, es:[bx+2] ;~ 0FBC:18D1
cs=0xfbc;eip=0x0018d5; 	J(JMP(loc_1fa45));	// 30270 jmp     short loc_1FA45 ;~ 0FBC:18D5
loc_1fa78:
	// 6367 
cs=0xfbc;eip=0x0018d8; 	T(MOV(ax, wallindex));	// 30275 mov     ax, wallindex ;~ 0FBC:18D8
cs=0xfbc;eip=0x0018db; 	T(MOV(cx, ax));	// 30276 mov     cx, ax ;~ 0FBC:18DB
cs=0xfbc;eip=0x0018dd; 	T(SHL(ax, 1));	// 30277 shl     ax, 1 ;~ 0FBC:18DD
cs=0xfbc;eip=0x0018df; 	T(ADD(ax, cx));	// 30278 add     ax, cx ;~ 0FBC:18DF
cs=0xfbc;eip=0x0018e1; 	T(SHL(ax, 1));	// 30279 shl     ax, 1 ;~ 0FBC:18E1
cs=0xfbc;eip=0x0018e3; 	T(ADD(ax, *(dw*)(((db*)&wallptr))));	// 30280 add     ax, word ptr wallptr ;~ 0FBC:18E3
cs=0xfbc;eip=0x0018e7; 	T(MOV(dx, *(dw*)(((db*)&wallptr)+2)));	// 30281 mov     dx, word ptr wallptr+2 ;~ 0FBC:18E7
cs=0xfbc;eip=0x0018eb; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_40))), ax));	// 30282 mov     word ptr [bp+var_40], ax ;~ 0FBC:18EB
cs=0xfbc;eip=0x0018ee; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_40+2))), dx));	// 30283 mov     word ptr [bp+var_40+2], dx ;~ 0FBC:18EE
cs=0xfbc;eip=0x0018f1; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_40))));	// 30284 les     bx, [bp+var_40] ;~ 0FBC:18F1
cs=0xfbc;eip=0x0018f4; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 30285 mov     ax, es:[bx+2] ;~ 0FBC:18F4
cs=0xfbc;eip=0x0018f8; 	T(NEG(ax));	// 30286 neg     ax ;~ 0FBC:18F8
cs=0xfbc;eip=0x0018fa; 	X(MOV(wallstartx, ax));	// 30287 mov     wallStartX, ax ;~ 0FBC:18FA
cs=0xfbc;eip=0x0018fd; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 30288 mov     ax, es:[bx+4] ;~ 0FBC:18FD
loc_1faa1:
	// 6368 
cs=0xfbc;eip=0x001901; 	T(NEG(ax));	// 30291 neg     ax ;~ 0FBC:1901
cs=0xfbc;eip=0x001903; 	J(JMP(loc_1fa45));	// 30292 jmp     short loc_1FA45 ;~ 0FBC:1903
loc_1faa6:
	// 6369 
cs=0xfbc;eip=0x001906; 	T(MOV(ax, wallindex));	// 30297 mov     ax, wallindex ;~ 0FBC:1906
cs=0xfbc;eip=0x001909; 	T(MOV(cx, ax));	// 30298 mov     cx, ax ;~ 0FBC:1909
cs=0xfbc;eip=0x00190b; 	T(SHL(ax, 1));	// 30299 shl     ax, 1 ;~ 0FBC:190B
cs=0xfbc;eip=0x00190d; 	T(ADD(ax, cx));	// 30300 add     ax, cx ;~ 0FBC:190D
cs=0xfbc;eip=0x00190f; 	T(SHL(ax, 1));	// 30301 shl     ax, 1 ;~ 0FBC:190F
cs=0xfbc;eip=0x001911; 	T(ADD(ax, *(dw*)(((db*)&wallptr))));	// 30302 add     ax, word ptr wallptr ;~ 0FBC:1911
cs=0xfbc;eip=0x001915; 	T(MOV(dx, *(dw*)(((db*)&wallptr)+2)));	// 30303 mov     dx, word ptr wallptr+2 ;~ 0FBC:1915
cs=0xfbc;eip=0x001919; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_40))), ax));	// 30304 mov     word ptr [bp+var_40], ax ;~ 0FBC:1919
cs=0xfbc;eip=0x00191c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_40+2))), dx));	// 30305 mov     word ptr [bp+var_40+2], dx ;~ 0FBC:191C
cs=0xfbc;eip=0x00191f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_40))));	// 30306 les     bx, [bp+var_40] ;~ 0FBC:191F
cs=0xfbc;eip=0x001922; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 30307 mov     ax, es:[bx+4] ;~ 0FBC:1922
cs=0xfbc;eip=0x001926; 	X(MOV(wallstartx, ax));	// 30308 mov     wallStartX, ax ;~ 0FBC:1926
cs=0xfbc;eip=0x001929; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 30309 mov     ax, es:[bx+2] ;~ 0FBC:1929
cs=0xfbc;eip=0x00192d; 	J(JMP(loc_1faa1));	// 30310 jmp     short loc_1FAA1 ;~ 0FBC:192D
loc_1fad0:
	// 6370 
cs=0xfbc;eip=0x001930; 	T(MOV(ax, elem_xcenter));	// 30316 mov     ax, elem_xCenter ;~ 0FBC:1930
cs=0xfbc;eip=0x001933; 	X(ADD(wallstartx, ax));	// 30317 add     wallStartX, ax ;~ 0FBC:1933
cs=0xfbc;eip=0x001937; 	T(MOV(ax, elem_zcenter));	// 30318 mov     ax, elem_zCenter ;~ 0FBC:1937
cs=0xfbc;eip=0x00193a; 	X(ADD(wallstartz, ax));	// 30319 add     wallStartZ, ax ;~ 0FBC:193A
loc_1fade:
	// 6371 
cs=0xfbc;eip=0x00193e; 	X(POP(si));	// 30322 pop     si ;~ 0FBC:193E
cs=0xfbc;eip=0x00193f; 	X(POP(di));	// 30323 pop     di ;~ 0FBC:193F
cs=0xfbc;eip=0x001940; 	T(MOV(sp, bp));	// 30324 mov     sp, bp ;~ 0FBC:1940
cs=0xfbc;eip=0x001942; 	X(POP(bp));	// 30325 pop     bp ;~ 0FBC:1942
cs=0xfbc;eip=0x001943; 	J(RETF(0));	// 30326 retf ;~ 0FBC:1943

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kbto_branches: 	goto bto_branches;
        case m2c::kbuild_track_object: 	goto build_track_object;
        case m2c::kcode_addhillheight: 	goto code_addhillheight;
        case m2c::kcode_bto_bankcorner: 	goto code_bto_bankcorner;
        case m2c::kcode_bto_bankentrancea: 	goto code_bto_bankentrancea;
        case m2c::kcode_bto_bankentranceb: 	goto code_bto_bankentranceb;
        case m2c::kcode_bto_bankroad: 	goto code_bto_bankroad;
        case m2c::kcode_bto_barn: 	goto code_bto_barn;
        case m2c::kcode_bto_blank: 	goto code_bto_blank;
        case m2c::kcode_bto_chicanelr: 	goto code_bto_chicanelr;
        case m2c::kcode_bto_chicanerl: 	goto code_bto_chicanerl;
        case m2c::kcode_bto_corklr: 	goto code_bto_corklr;
        case m2c::kcode_bto_corkudlh: 	goto code_bto_corkudlh;
        case m2c::kcode_bto_corkudrh: 	goto code_bto_corkudrh;
        case m2c::kcode_bto_crossroad: 	goto code_bto_crossroad;
        case m2c::kcode_bto_elevcorner: 	goto code_bto_elevcorner;
        case m2c::kcode_bto_elevroad: 	goto code_bto_elevroad;
        case m2c::kcode_bto_gasstation: 	goto code_bto_gasstation;
        case m2c::kcode_bto_halfpipe: 	goto code_bto_halfpipe;
        case m2c::kcode_bto_highentrance: 	goto code_bto_highentrance;
        case m2c::kcode_bto_highway: 	goto code_bto_highway;
        case m2c::kcode_bto_joes: 	goto code_bto_joes;
        case m2c::kcode_bto_lcorner: 	goto code_bto_lcorner;
        case m2c::kcode_bto_loop: 	goto code_bto_loop;
        case m2c::kcode_bto_loopbase: 	goto code_bto_loopbase;
        case m2c::kcode_bto_lsplita: 	goto code_bto_lsplita;
        case m2c::kcode_bto_lsplitb: 	goto code_bto_lsplitb;
        case m2c::kcode_bto_office: 	goto code_bto_office;
        case m2c::kcode_bto_overpass: 	goto code_bto_overpass;
        case m2c::kcode_bto_pipe: 	goto code_bto_pipe;
        case m2c::kcode_bto_pipeentrance: 	goto code_bto_pipeentrance;
        case m2c::kcode_bto_ramp: 	goto code_bto_ramp;
        case m2c::kcode_bto_road: 	goto code_bto_road;
        case m2c::kcode_bto_root: 	goto code_bto_root;
        case m2c::kcode_bto_scorner: 	goto code_bto_scorner;
        case m2c::kcode_bto_sfline: 	goto code_bto_sfline;
        case m2c::kcode_bto_ship: 	goto code_bto_ship;
        case m2c::kcode_bto_slalom: 	goto code_bto_slalom;
        case m2c::kcode_bto_solidramp: 	goto code_bto_solidramp;
        case m2c::kcode_bto_solidroad: 	goto code_bto_solidroad;
        case m2c::kcode_bto_ssplita: 	goto code_bto_ssplita;
        case m2c::kcode_bto_ssplitb: 	goto code_bto_ssplitb;
        case m2c::kcode_bto_tunnel: 	goto code_bto_tunnel;
        case m2c::kcode_bto_windmill: 	goto code_bto_windmill;
        case m2c::kcode_hillslope_parsing: 	goto code_hillslope_parsing;
        case m2c::kcode_lcorner_radius: 	goto code_lcorner_radius;
        case m2c::kcode_scorner_radius: 	goto code_scorner_radius;
        case m2c::kcode_set_pavement: 	goto code_set_pavement;
        case m2c::kdef_1f825: 	goto def_1f825;
        case m2c::kloc_1e1fd: 	goto loc_1e1fd;
        case m2c::kloc_1e206: 	goto loc_1e206;
        case m2c::kloc_1e20d: 	goto loc_1e20d;
        case m2c::kloc_1e214: 	goto loc_1e214;
        case m2c::kloc_1e257: 	goto loc_1e257;
        case m2c::kloc_1e276: 	goto loc_1e276;
        case m2c::kloc_1e29a: 	goto loc_1e29a;
        case m2c::kloc_1e2a0: 	goto loc_1e2a0;
        case m2c::kloc_1e2a6: 	goto loc_1e2a6;
        case m2c::kloc_1e2ac: 	goto loc_1e2ac;
        case m2c::kloc_1e2af: 	goto loc_1e2af;
        case m2c::kloc_1e2fb: 	goto loc_1e2fb;
        case m2c::kloc_1e304: 	goto loc_1e304;
        case m2c::kloc_1e30d: 	goto loc_1e30d;
        case m2c::kloc_1e324: 	goto loc_1e324;
        case m2c::kloc_1e328: 	goto loc_1e328;
        case m2c::kloc_1e362: 	goto loc_1e362;
        case m2c::kloc_1e365: 	goto loc_1e365;
        case m2c::kloc_1e380: 	goto loc_1e380;
        case m2c::kloc_1e390: 	goto loc_1e390;
        case m2c::kloc_1e3cc: 	goto loc_1e3cc;
        case m2c::kloc_1e405: 	goto loc_1e405;
        case m2c::kloc_1e40c: 	goto loc_1e40c;
        case m2c::kloc_1e43a: 	goto loc_1e43a;
        case m2c::kloc_1e43d: 	goto loc_1e43d;
        case m2c::kloc_1e461: 	goto loc_1e461;
        case m2c::kloc_1e464: 	goto loc_1e464;
        case m2c::kloc_1e4b6: 	goto loc_1e4b6;
        case m2c::kloc_1e4ef: 	goto loc_1e4ef;
        case m2c::kloc_1e507: 	goto loc_1e507;
        case m2c::kloc_1e516: 	goto loc_1e516;
        case m2c::kloc_1e53b: 	goto loc_1e53b;
        case m2c::kloc_1e540: 	goto loc_1e540;
        case m2c::kloc_1e562: 	goto loc_1e562;
        case m2c::kloc_1e58a: 	goto loc_1e58a;
        case m2c::kloc_1e58d: 	goto loc_1e58d;
        case m2c::kloc_1e59e: 	goto loc_1e59e;
        case m2c::kloc_1e5a1: 	goto loc_1e5a1;
        case m2c::kloc_1e5d4: 	goto loc_1e5d4;
        case m2c::kloc_1e5e5: 	goto loc_1e5e5;
        case m2c::kloc_1e645: 	goto loc_1e645;
        case m2c::kloc_1e671: 	goto loc_1e671;
        case m2c::kloc_1e681: 	goto loc_1e681;
        case m2c::kloc_1e6a1: 	goto loc_1e6a1;
        case m2c::kloc_1e6b5: 	goto loc_1e6b5;
        case m2c::kloc_1e6d4: 	goto loc_1e6d4;
        case m2c::kloc_1e6d7: 	goto loc_1e6d7;
        case m2c::kloc_1e6de: 	goto loc_1e6de;
        case m2c::kloc_1e6df: 	goto loc_1e6df;
        case m2c::kloc_1e72e: 	goto loc_1e72e;
        case m2c::kloc_1e773: 	goto loc_1e773;
        case m2c::kloc_1e789: 	goto loc_1e789;
        case m2c::kloc_1e792: 	goto loc_1e792;
        case m2c::kloc_1e79b: 	goto loc_1e79b;
        case m2c::kloc_1e7ae: 	goto loc_1e7ae;
        case m2c::kloc_1e7b7: 	goto loc_1e7b7;
        case m2c::kloc_1e7c0: 	goto loc_1e7c0;
        case m2c::kloc_1e7d0: 	goto loc_1e7d0;
        case m2c::kloc_1e7e4: 	goto loc_1e7e4;
        case m2c::kloc_1e7ed: 	goto loc_1e7ed;
        case m2c::kloc_1e7f9: 	goto loc_1e7f9;
        case m2c::kloc_1e810: 	goto loc_1e810;
        case m2c::kloc_1e82b: 	goto loc_1e82b;
        case m2c::kloc_1e838: 	goto loc_1e838;
        case m2c::kloc_1e83b: 	goto loc_1e83b;
        case m2c::kloc_1e856: 	goto loc_1e856;
        case m2c::kloc_1e85f: 	goto loc_1e85f;
        case m2c::kloc_1e868: 	goto loc_1e868;
        case m2c::kloc_1e87d: 	goto loc_1e87d;
        case m2c::kloc_1e886: 	goto loc_1e886;
        case m2c::kloc_1e890: 	goto loc_1e890;
        case m2c::kloc_1e899: 	goto loc_1e899;
        case m2c::kloc_1e8a9: 	goto loc_1e8a9;
        case m2c::kloc_1e8ae: 	goto loc_1e8ae;
        case m2c::kloc_1e8c5: 	goto loc_1e8c5;
        case m2c::kloc_1e8d8: 	goto loc_1e8d8;
        case m2c::kloc_1e8dc: 	goto loc_1e8dc;
        case m2c::kloc_1e8e1: 	goto loc_1e8e1;
        case m2c::kloc_1e8f6: 	goto loc_1e8f6;
        case m2c::kloc_1e8f8: 	goto loc_1e8f8;
        case m2c::kloc_1e8fb: 	goto loc_1e8fb;
        case m2c::kloc_1e922: 	goto loc_1e922;
        case m2c::kloc_1e92f: 	goto loc_1e92f;
        case m2c::kloc_1e938: 	goto loc_1e938;
        case m2c::kloc_1e942: 	goto loc_1e942;
        case m2c::kloc_1e94c: 	goto loc_1e94c;
        case m2c::kloc_1e955: 	goto loc_1e955;
        case m2c::kloc_1e96a: 	goto loc_1e96a;
        case m2c::kloc_1e96f: 	goto loc_1e96f;
        case m2c::kloc_1e98a: 	goto loc_1e98a;
        case m2c::kloc_1e9ae: 	goto loc_1e9ae;
        case m2c::kloc_1e9b6: 	goto loc_1e9b6;
        case m2c::kloc_1e9d6: 	goto loc_1e9d6;
        case m2c::kloc_1ea1a: 	goto loc_1ea1a;
        case m2c::kloc_1ea20: 	goto loc_1ea20;
        case m2c::kloc_1ea43: 	goto loc_1ea43;
        case m2c::kloc_1ea4c: 	goto loc_1ea4c;
        case m2c::kloc_1ea66: 	goto loc_1ea66;
        case m2c::kloc_1ea7d: 	goto loc_1ea7d;
        case m2c::kloc_1ea90: 	goto loc_1ea90;
        case m2c::kloc_1ea9d: 	goto loc_1ea9d;
        case m2c::kloc_1eaa4: 	goto loc_1eaa4;
        case m2c::kloc_1eaba: 	goto loc_1eaba;
        case m2c::kloc_1ead0: 	goto loc_1ead0;
        case m2c::kloc_1eae8: 	goto loc_1eae8;
        case m2c::kloc_1eafd: 	goto loc_1eafd;
        case m2c::kloc_1eb3f: 	goto loc_1eb3f;
        case m2c::kloc_1eb4f: 	goto loc_1eb4f;
        case m2c::kloc_1eb64: 	goto loc_1eb64;
        case m2c::kloc_1eb90: 	goto loc_1eb90;
        case m2c::kloc_1eb98: 	goto loc_1eb98;
        case m2c::kloc_1ebd9: 	goto loc_1ebd9;
        case m2c::kloc_1ebe7: 	goto loc_1ebe7;
        case m2c::kloc_1ec0a: 	goto loc_1ec0a;
        case m2c::kloc_1ec18: 	goto loc_1ec18;
        case m2c::kloc_1ec32: 	goto loc_1ec32;
        case m2c::kloc_1ec38: 	goto loc_1ec38;
        case m2c::kloc_1ec3b: 	goto loc_1ec3b;
        case m2c::kloc_1ec42: 	goto loc_1ec42;
        case m2c::kloc_1ec43: 	goto loc_1ec43;
        case m2c::kloc_1ec62: 	goto loc_1ec62;
        case m2c::kloc_1ec79: 	goto loc_1ec79;
        case m2c::kloc_1ec88: 	goto loc_1ec88;
        case m2c::kloc_1ec9d: 	goto loc_1ec9d;
        case m2c::kloc_1ece5: 	goto loc_1ece5;
        case m2c::kloc_1ecf3: 	goto loc_1ecf3;
        case m2c::kloc_1ed04: 	goto loc_1ed04;
        case m2c::kloc_1ed1b: 	goto loc_1ed1b;
        case m2c::kloc_1ed2b: 	goto loc_1ed2b;
        case m2c::kloc_1ed4c: 	goto loc_1ed4c;
        case m2c::kloc_1edb2: 	goto loc_1edb2;
        case m2c::kloc_1edb3: 	goto loc_1edb3;
        case m2c::kloc_1ee35: 	goto loc_1ee35;
        case m2c::kloc_1ee5c: 	goto loc_1ee5c;
        case m2c::kloc_1ee66: 	goto loc_1ee66;
        case m2c::kloc_1ee76: 	goto loc_1ee76;
        case m2c::kloc_1ee82: 	goto loc_1ee82;
        case m2c::kloc_1eeb2: 	goto loc_1eeb2;
        case m2c::kloc_1eebc: 	goto loc_1eebc;
        case m2c::kloc_1eec6: 	goto loc_1eec6;
        case m2c::kloc_1eecf: 	goto loc_1eecf;
        case m2c::kloc_1eed9: 	goto loc_1eed9;
        case m2c::kloc_1eee6: 	goto loc_1eee6;
        case m2c::kloc_1eef0: 	goto loc_1eef0;
        case m2c::kloc_1eef7: 	goto loc_1eef7;
        case m2c::kloc_1ef00: 	goto loc_1ef00;
        case m2c::kloc_1ef10: 	goto loc_1ef10;
        case m2c::kloc_1ef1a: 	goto loc_1ef1a;
        case m2c::kloc_1ef32: 	goto loc_1ef32;
        case m2c::kloc_1ef35: 	goto loc_1ef35;
        case m2c::kloc_1ef56: 	goto loc_1ef56;
        case m2c::kloc_1ef60: 	goto loc_1ef60;
        case m2c::kloc_1ef69: 	goto loc_1ef69;
        case m2c::kloc_1ef7b: 	goto loc_1ef7b;
        case m2c::kloc_1ef90: 	goto loc_1ef90;
        case m2c::kloc_1efa6: 	goto loc_1efa6;
        case m2c::kloc_1efbc: 	goto loc_1efbc;
        case m2c::kloc_1efd2: 	goto loc_1efd2;
        case m2c::kloc_1efe0: 	goto loc_1efe0;
        case m2c::kloc_1f01c: 	goto loc_1f01c;
        case m2c::kloc_1f02d: 	goto loc_1f02d;
        case m2c::kloc_1f03a: 	goto loc_1f03a;
        case m2c::kloc_1f03d: 	goto loc_1f03d;
        case m2c::kloc_1f05e: 	goto loc_1f05e;
        case m2c::kloc_1f068: 	goto loc_1f068;
        case m2c::kloc_1f072: 	goto loc_1f072;
        case m2c::kloc_1f084: 	goto loc_1f084;
        case m2c::kloc_1f091: 	goto loc_1f091;
        case m2c::kloc_1f0a4: 	goto loc_1f0a4;
        case m2c::kloc_1f0a9: 	goto loc_1f0a9;
        case m2c::kloc_1f0d6: 	goto loc_1f0d6;
        case m2c::kloc_1f0df: 	goto loc_1f0df;
        case m2c::kloc_1f0e8: 	goto loc_1f0e8;
        case m2c::kloc_1f10c: 	goto loc_1f10c;
        case m2c::kloc_1f116: 	goto loc_1f116;
        case m2c::kloc_1f12c: 	goto loc_1f12c;
        case m2c::kloc_1f136: 	goto loc_1f136;
        case m2c::kloc_1f14c: 	goto loc_1f14c;
        case m2c::kloc_1f156: 	goto loc_1f156;
        case m2c::kloc_1f16c: 	goto loc_1f16c;
        case m2c::kloc_1f176: 	goto loc_1f176;
        case m2c::kloc_1f18c: 	goto loc_1f18c;
        case m2c::kloc_1f196: 	goto loc_1f196;
        case m2c::kloc_1f1a6: 	goto loc_1f1a6;
        case m2c::kloc_1f1ba: 	goto loc_1f1ba;
        case m2c::kloc_1f1cc: 	goto loc_1f1cc;
        case m2c::kloc_1f1e6: 	goto loc_1f1e6;
        case m2c::kloc_1f1eb: 	goto loc_1f1eb;
        case m2c::kloc_1f212: 	goto loc_1f212;
        case m2c::kloc_1f21a: 	goto loc_1f21a;
        case m2c::kloc_1f22e: 	goto loc_1f22e;
        case m2c::kloc_1f242: 	goto loc_1f242;
        case m2c::kloc_1f24a: 	goto loc_1f24a;
        case m2c::kloc_1f25e: 	goto loc_1f25e;
        case m2c::kloc_1f266: 	goto loc_1f266;
        case m2c::kloc_1f27a: 	goto loc_1f27a;
        case m2c::kloc_1f282: 	goto loc_1f282;
        case m2c::kloc_1f290: 	goto loc_1f290;
        case m2c::kloc_1f295: 	goto loc_1f295;
        case m2c::kloc_1f2b8: 	goto loc_1f2b8;
        case m2c::kloc_1f2c2: 	goto loc_1f2c2;
        case m2c::kloc_1f2cc: 	goto loc_1f2cc;
        case m2c::kloc_1f30f: 	goto loc_1f30f;
        case m2c::kloc_1f339: 	goto loc_1f339;
        case m2c::kloc_1f343: 	goto loc_1f343;
        case m2c::kloc_1f350: 	goto loc_1f350;
        case m2c::kloc_1f38c: 	goto loc_1f38c;
        case m2c::kloc_1f38f: 	goto loc_1f38f;
        case m2c::kloc_1f3a8: 	goto loc_1f3a8;
        case m2c::kloc_1f3c1: 	goto loc_1f3c1;
        case m2c::kloc_1f3c9: 	goto loc_1f3c9;
        case m2c::kloc_1f418: 	goto loc_1f418;
        case m2c::kloc_1f41e: 	goto loc_1f41e;
        case m2c::kloc_1f42c: 	goto loc_1f42c;
        case m2c::kloc_1f43e: 	goto loc_1f43e;
        case m2c::kloc_1f46e: 	goto loc_1f46e;
        case m2c::kloc_1f47e: 	goto loc_1f47e;
        case m2c::kloc_1f48e: 	goto loc_1f48e;
        case m2c::kloc_1f497: 	goto loc_1f497;
        case m2c::kloc_1f4a0: 	goto loc_1f4a0;
        case m2c::kloc_1f4a9: 	goto loc_1f4a9;
        case m2c::kloc_1f4b2: 	goto loc_1f4b2;
        case m2c::kloc_1f4bc: 	goto loc_1f4bc;
        case m2c::kloc_1f4c6: 	goto loc_1f4c6;
        case m2c::kloc_1f4dc: 	goto loc_1f4dc;
        case m2c::kloc_1f4ec: 	goto loc_1f4ec;
        case m2c::kloc_1f4fc: 	goto loc_1f4fc;
        case m2c::kloc_1f505: 	goto loc_1f505;
        case m2c::kloc_1f518: 	goto loc_1f518;
        case m2c::kloc_1f522: 	goto loc_1f522;
        case m2c::kloc_1f538: 	goto loc_1f538;
        case m2c::kloc_1f548: 	goto loc_1f548;
        case m2c::kloc_1f558: 	goto loc_1f558;
        case m2c::kloc_1f562: 	goto loc_1f562;
        case m2c::kloc_1f576: 	goto loc_1f576;
        case m2c::kloc_1f580: 	goto loc_1f580;
        case m2c::kloc_1f589: 	goto loc_1f589;
        case m2c::kloc_1f59e: 	goto loc_1f59e;
        case m2c::kloc_1f5ae: 	goto loc_1f5ae;
        case m2c::kloc_1f5be: 	goto loc_1f5be;
        case m2c::kloc_1f5c8: 	goto loc_1f5c8;
        case m2c::kloc_1f5dc: 	goto loc_1f5dc;
        case m2c::kloc_1f5e5: 	goto loc_1f5e5;
        case m2c::kloc_1f5fa: 	goto loc_1f5fa;
        case m2c::kloc_1f60a: 	goto loc_1f60a;
        case m2c::kloc_1f61a: 	goto loc_1f61a;
        case m2c::kloc_1f624: 	goto loc_1f624;
        case m2c::kloc_1f638: 	goto loc_1f638;
        case m2c::kloc_1f642: 	goto loc_1f642;
        case m2c::kloc_1f658: 	goto loc_1f658;
        case m2c::kloc_1f668: 	goto loc_1f668;
        case m2c::kloc_1f678: 	goto loc_1f678;
        case m2c::kloc_1f682: 	goto loc_1f682;
        case m2c::kloc_1f695: 	goto loc_1f695;
        case m2c::kloc_1f69e: 	goto loc_1f69e;
        case m2c::kloc_1f6b4: 	goto loc_1f6b4;
        case m2c::kloc_1f6c4: 	goto loc_1f6c4;
        case m2c::kloc_1f6d4: 	goto loc_1f6d4;
        case m2c::kloc_1f6dd: 	goto loc_1f6dd;
        case m2c::kloc_1f6f0: 	goto loc_1f6f0;
        case m2c::kloc_1f6fa: 	goto loc_1f6fa;
        case m2c::kloc_1f703: 	goto loc_1f703;
        case m2c::kloc_1f71a: 	goto loc_1f71a;
        case m2c::kloc_1f72a: 	goto loc_1f72a;
        case m2c::kloc_1f73c: 	goto loc_1f73c;
        case m2c::kloc_1f746: 	goto loc_1f746;
        case m2c::kloc_1f82a: 	goto loc_1f82a;
        case m2c::kloc_1f832: 	goto loc_1f832;
        case m2c::kloc_1f848: 	goto loc_1f848;
        case m2c::kloc_1f84e: 	goto loc_1f84e;
        case m2c::kloc_1f866: 	goto loc_1f866;
        case m2c::kloc_1f8bc: 	goto loc_1f8bc;
        case m2c::kloc_1f8c0: 	goto loc_1f8c0;
        case m2c::kloc_1f8cd: 	goto loc_1f8cd;
        case m2c::kloc_1f8d7: 	goto loc_1f8d7;
        case m2c::kloc_1f8e8: 	goto loc_1f8e8;
        case m2c::kloc_1f8f0: 	goto loc_1f8f0;
        case m2c::kloc_1f8f8: 	goto loc_1f8f8;
        case m2c::kloc_1f8fc: 	goto loc_1f8fc;
        case m2c::kloc_1f940: 	goto loc_1f940;
        case m2c::kloc_1f984: 	goto loc_1f984;
        case m2c::kloc_1f98e: 	goto loc_1f98e;
        case m2c::kloc_1f992: 	goto loc_1f992;
        case m2c::kloc_1f9c4: 	goto loc_1f9c4;
        case m2c::kloc_1f9cc: 	goto loc_1f9cc;
        case m2c::kloc_1f9d4: 	goto loc_1f9d4;
        case m2c::kloc_1f9d9: 	goto loc_1f9d9;
        case m2c::kloc_1f9e3: 	goto loc_1f9e3;
        case m2c::kloc_1fa13: 	goto loc_1fa13;
        case m2c::kloc_1fa20: 	goto loc_1fa20;
        case m2c::kloc_1fa45: 	goto loc_1fa45;
        case m2c::kloc_1fa4c: 	goto loc_1fa4c;
        case m2c::kloc_1fa78: 	goto loc_1fa78;
        case m2c::kloc_1faa1: 	goto loc_1faa1;
        case m2c::kloc_1faa6: 	goto loc_1faa6;
        case m2c::kloc_1fad0: 	goto loc_1fad0;
        case m2c::kloc_1fade: 	goto loc_1fade;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool bto_auxiliary1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    bto_auxiliary1:
    _begin:
#undef var_14
#define var_14 -0x14
	// 30336 var_14          = word ptr -14h ;~ 0FBC:1944
#undef var_10
#define var_10 -0x10
	// 30337 var_10          = byte ptr -10h ;~ 0FBC:1944
#undef var_c
#define var_c -0x0C
	// 30338 var_C           = word ptr -0Ch ;~ 0FBC:1944
#undef var_a
#define var_a -0x0A
	// 30339 var_A           = word ptr -0Ah ;~ 0FBC:1944
#undef var_8
#define var_8 -8
	// 30340 var_8           = word ptr -8 ;~ 0FBC:1944
#undef var_6
#define var_6 -6
	// 30341 var_6           = word ptr -6 ;~ 0FBC:1944
#undef var_4
#define var_4 -4
	// 30342 var_4           = word ptr -4 ;~ 0FBC:1944
#undef var_2
#define var_2 -2
	// 30343 var_2           = byte ptr -2 ;~ 0FBC:1944
#undef arg_0
#define arg_0 6
	// 30344 arg_0           = word ptr  6 ;~ 0FBC:1944
#undef arg_2
#define arg_2 8
	// 30345 arg_2           = word ptr  8 ;~ 0FBC:1944
#undef arg_4
#define arg_4 0x0A
	// 30346 arg_4           = word ptr  0Ah ;~ 0FBC:1944
cs=0xfbc;eip=0x001944; 	X(PUSH(bp));	// 30348 push    bp ;~ 0FBC:1944
cs=0xfbc;eip=0x001945; 	T(MOV(bp, sp));	// 30349 mov     bp, sp ;~ 0FBC:1945
cs=0xfbc;eip=0x001947; 	T(SUB(sp, 0x14));	// 30350 sub     sp, 14h ;~ 0FBC:1947
cs=0xfbc;eip=0x00194a; 	X(PUSH(di));	// 30351 push    di ;~ 0FBC:194A
cs=0xfbc;eip=0x00194b; 	X(PUSH(si));	// 30352 push    si ;~ 0FBC:194B
cs=0xfbc;eip=0x00194c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 30353 mov     bx, [bp+arg_2] ;~ 0FBC:194C
cs=0xfbc;eip=0x00194f; 	T(SHL(bx, 1));	// 30354 shl     bx, 1 ;~ 0FBC:194F
cs=0xfbc;eip=0x001951; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 30355 mov     bx, trackrows[bx] ;~ 0FBC:1951
cs=0xfbc;eip=0x001955; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 30356 add     bx, [bp+arg_0] ;~ 0FBC:1955
cs=0xfbc;eip=0x001958; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 30357 add     bx, word ptr td14_elem_map_main ;~ 0FBC:1958
cs=0xfbc;eip=0x00195c; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 30358 mov     es, word ptr td14_elem_map_main+2 ;~ 0FBC:195C
cs=0xfbc;eip=0x001960; 	T(MOV(al, *(raddr(es,bx))));	// 30359 mov     al, es:[bx] ;~ 0FBC:1960
cs=0xfbc;eip=0x001963; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 30360 mov     [bp+var_2], al ;~ 0FBC:1963
cs=0xfbc;eip=0x001966; 	T(OR(al, al));	// 30361 or      al, al ;~ 0FBC:1966
cs=0xfbc;eip=0x001968; 	J(JNZ(loc_1fb12));	// 30362 jnz     short loc_1FB12 ;~ 0FBC:1968
loc_1fb0a:
	// 6372 
cs=0xfbc;eip=0x00196a; 	T(SUB(ax, ax));	// 30365 sub     ax, ax ;~ 0FBC:196A
cs=0xfbc;eip=0x00196c; 	X(POP(si));	// 30366 pop     si ;~ 0FBC:196C
cs=0xfbc;eip=0x00196d; 	X(POP(di));	// 30367 pop     di ;~ 0FBC:196D
cs=0xfbc;eip=0x00196e; 	T(MOV(sp, bp));	// 30368 mov     sp, bp ;~ 0FBC:196E
cs=0xfbc;eip=0x001970; 	X(POP(bp));	// 30369 pop     bp ;~ 0FBC:1970
cs=0xfbc;eip=0x001971; 	J(RETF(0));	// 30370 retf ;~ 0FBC:1971
loc_1fb12:
	// 6373 
cs=0xfbc;eip=0x001972; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 30374 mov     bx, [bp+arg_0] ;~ 0FBC:1972
cs=0xfbc;eip=0x001975; 	T(SHL(bx, 1));	// 30375 shl     bx, 1 ;~ 0FBC:1975
cs=0xfbc;eip=0x001977; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 30376 mov     ax, trackcenterpos2[bx] ;~ 0FBC:1977
cs=0xfbc;eip=0x00197b; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 30377 mov     [bp+var_6], ax ;~ 0FBC:197B
cs=0xfbc;eip=0x00197e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 30378 mov     bx, [bp+arg_2] ;~ 0FBC:197E
cs=0xfbc;eip=0x001981; 	T(SHL(bx, 1));	// 30379 shl     bx, 1 ;~ 0FBC:1981
cs=0xfbc;eip=0x001983; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 30380 mov     ax, trackcenterpos[bx] ;~ 0FBC:1983
cs=0xfbc;eip=0x001987; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 30381 mov     [bp+var_C], ax ;~ 0FBC:1987
cs=0xfbc;eip=0x00198a; 	T(CMP(*(raddr(ss,bp+var_2)), 0x0FD));	// 30382 cmp     [bp+var_2], 0FDh ; '˝' ;~ 0FBC:198A
cs=0xfbc;eip=0x00198e; 	J(JNC(loc_1fb33));	// 30383 jnb     short loc_1FB33 ;~ 0FBC:198E
cs=0xfbc;eip=0x001990; 	J(JMP(loc_1fc34));	// 30384 jmp     loc_1FC34 ;~ 0FBC:1990
loc_1fb33:
	// 6374 
cs=0xfbc;eip=0x001993; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 30388 mov     al, [bp+var_2] ;~ 0FBC:1993
cs=0xfbc;eip=0x001996; 	T(SUB(ah, ah));	// 30389 sub     ah, ah ;~ 0FBC:1996
cs=0xfbc;eip=0x001998; 	T(CMP(ax, 0x0FD));	// 30390 cmp     ax, 0FDh ; '˝' ;~ 0FBC:1998
cs=0xfbc;eip=0x00199b; 	J(JZ(loc_1fb4e));	// 30391 jz      short loc_1FB4E ;~ 0FBC:199B
cs=0xfbc;eip=0x00199d; 	T(CMP(ax, 0x0FE));	// 30392 cmp     ax, 0FEh ; '˛' ;~ 0FBC:199D
cs=0xfbc;eip=0x0019a0; 	J(JZ(loc_1fbb4));	// 30393 jz      short loc_1FBB4 ;~ 0FBC:19A0
cs=0xfbc;eip=0x0019a2; 	T(CMP(ax, 0x0FF));	// 30394 cmp     ax, 0FFh ;~ 0FBC:19A2
cs=0xfbc;eip=0x0019a5; 	J(JNZ(loc_1fb4a));	// 30395 jnz     short loc_1FB4A ;~ 0FBC:19A5
cs=0xfbc;eip=0x0019a7; 	J(JMP(loc_1fbf2));	// 30396 jmp     loc_1FBF2 ;~ 0FBC:19A7
loc_1fb4a:
	// 6375 
cs=0xfbc;eip=0x0019aa; 	J(JMP(loc_1fc86));	// 30400 jmp     loc_1FC86 ;~ 0FBC:19AA
loc_1fb4e:
	// 6376 
cs=0xfbc;eip=0x0019ae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 30405 mov     ax, [bp+arg_2] ;~ 0FBC:19AE
cs=0xfbc;eip=0x0019b1; 	T(SHL(ax, 1));	// 30406 shl     ax, 1 ;~ 0FBC:19B1
cs=0xfbc;eip=0x0019b3; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 30407 mov     [bp+var_14], ax ;~ 0FBC:19B3
cs=0xfbc;eip=0x0019b6; 	T(MOV(bx, ax));	// 30408 mov     bx, ax ;~ 0FBC:19B6
cs=0xfbc;eip=0x0019b8; 	T(MOV(bx, *(dw*)(((db*)&word_45d3e)+bx)));	// 30409 mov     bx, word_45D3E[bx] ; is really trackrows[bx -1] ;~ 0FBC:19B8
cs=0xfbc;eip=0x0019bc; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 30410 add     bx, [bp+arg_0] ;~ 0FBC:19BC
cs=0xfbc;eip=0x0019bf; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 30411 add     bx, word ptr td14_elem_map_main ;~ 0FBC:19BF
cs=0xfbc;eip=0x0019c3; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 30412 mov     es, word ptr td14_elem_map_main+2 ;~ 0FBC:19C3
cs=0xfbc;eip=0x0019c7; 	T(MOV(al, *(raddr(es,bx-1))));	// 30413 mov     al, es:[bx-1] ;~ 0FBC:19C7
cs=0xfbc;eip=0x0019cb; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 30414 mov     [bp+var_2], al ;~ 0FBC:19CB
cs=0xfbc;eip=0x0019ce; 	T(SUB(ah, ah));	// 30415 sub     ah, ah ;~ 0FBC:19CE
cs=0xfbc;eip=0x0019d0; 	T(MOV(bx, ax));	// 30416 mov     bx, ax ;~ 0FBC:19D0
cs=0xfbc;eip=0x0019d2; 	T(SHL(bx, 1));	// 30417 shl     bx, 1 ;~ 0FBC:19D2
cs=0xfbc;eip=0x0019d4; 	T(ADD(bx, ax));	// 30418 add     bx, ax ;~ 0FBC:19D4
cs=0xfbc;eip=0x0019d6; 	T(SHL(bx, 1));	// 30419 shl     bx, 1 ;~ 0FBC:19D6
cs=0xfbc;eip=0x0019d8; 	T(ADD(bx, ax));	// 30420 add     bx, ax ;~ 0FBC:19D8
cs=0xfbc;eip=0x0019da; 	T(SHL(bx, 1));	// 30421 shl     bx, 1 ;~ 0FBC:19DA
cs=0xfbc;eip=0x0019dc; 	T(TEST(*((&byte_3d813)+bx), 1));	// 30422 test    byte_3D813[bx], 1 ;~ 0FBC:19DC
cs=0xfbc;eip=0x0019e1; 	J(JZ(loc_1fb8d));	// 30423 jz      short loc_1FB8D ;~ 0FBC:19E1
cs=0xfbc;eip=0x0019e3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30424 mov     bx, [bp+var_14] ;~ 0FBC:19E3
cs=0xfbc;eip=0x0019e6; 	T(MOV(ax, *(dw*)(((db*)&word_438ee)+bx)));	// 30425 mov     ax, word_438EE[bx] ;~ 0FBC:19E6
loc_1fb8a:
	// 6377 
cs=0xfbc;eip=0x0019ea; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 30428 mov     [bp+var_C], ax ;~ 0FBC:19EA
loc_1fb8d:
	// 6378 
cs=0xfbc;eip=0x0019ed; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 30432 mov     al, [bp+var_2] ;~ 0FBC:19ED
cs=0xfbc;eip=0x0019f0; 	T(SUB(ah, ah));	// 30433 sub     ah, ah ;~ 0FBC:19F0
cs=0xfbc;eip=0x0019f2; 	T(MOV(bx, ax));	// 30434 mov     bx, ax ;~ 0FBC:19F2
cs=0xfbc;eip=0x0019f4; 	T(SHL(bx, 1));	// 30435 shl     bx, 1 ;~ 0FBC:19F4
cs=0xfbc;eip=0x0019f6; 	T(ADD(bx, ax));	// 30436 add     bx, ax ;~ 0FBC:19F6
cs=0xfbc;eip=0x0019f8; 	T(SHL(bx, 1));	// 30437 shl     bx, 1 ;~ 0FBC:19F8
cs=0xfbc;eip=0x0019fa; 	T(ADD(bx, ax));	// 30438 add     bx, ax ;~ 0FBC:19FA
cs=0xfbc;eip=0x0019fc; 	T(SHL(bx, 1));	// 30439 shl     bx, 1 ;~ 0FBC:19FC
cs=0xfbc;eip=0x0019fe; 	T(TEST(*((&byte_3d813)+bx), 2));	// 30440 test    byte_3D813[bx], 2 ;~ 0FBC:19FE
cs=0xfbc;eip=0x001a03; 	J(JNZ(loc_1fba8));	// 30441 jnz     short loc_1FBA8 ;~ 0FBC:1A03
cs=0xfbc;eip=0x001a05; 	J(JMP(loc_1fc86));	// 30442 jmp     loc_1FC86 ;~ 0FBC:1A05
loc_1fba8:
	// 6379 
cs=0xfbc;eip=0x001a08; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 30446 mov     bx, [bp+arg_0] ;~ 0FBC:1A08
cs=0xfbc;eip=0x001a0b; 	T(SHL(bx, 1));	// 30447 shl     bx, 1 ;~ 0FBC:1A0B
cs=0xfbc;eip=0x001a0d; 	T(MOV(ax, *(dw*)(((db*)trackpos2)+bx)));	// 30448 mov     ax, trackpos2[bx] ;~ 0FBC:1A0D
cs=0xfbc;eip=0x001a11; 	J(JMP(loc_1fc83));	// 30449 jmp     loc_1FC83 ;~ 0FBC:1A11
loc_1fbb4:
	// 6380 
cs=0xfbc;eip=0x001a14; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 30453 mov     ax, [bp+arg_2] ;~ 0FBC:1A14
cs=0xfbc;eip=0x001a17; 	T(SHL(ax, 1));	// 30454 shl     ax, 1 ;~ 0FBC:1A17
cs=0xfbc;eip=0x001a19; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 30455 mov     [bp+var_14], ax ;~ 0FBC:1A19
cs=0xfbc;eip=0x001a1c; 	T(MOV(bx, ax));	// 30456 mov     bx, ax ;~ 0FBC:1A1C
cs=0xfbc;eip=0x001a1e; 	T(MOV(bx, *(dw*)(((db*)&word_45d3e)+bx)));	// 30457 mov     bx, word_45D3E[bx] ; is really trackrows[bx -1] ;~ 0FBC:1A1E
cs=0xfbc;eip=0x001a22; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 30458 add     bx, [bp+arg_0] ;~ 0FBC:1A22
cs=0xfbc;eip=0x001a25; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 30459 add     bx, word ptr td14_elem_map_main ;~ 0FBC:1A25
cs=0xfbc;eip=0x001a29; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 30460 mov     es, word ptr td14_elem_map_main+2 ;~ 0FBC:1A29
cs=0xfbc;eip=0x001a2d; 	T(MOV(al, *(raddr(es,bx))));	// 30461 mov     al, es:[bx] ;~ 0FBC:1A2D
cs=0xfbc;eip=0x001a30; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 30462 mov     [bp+var_2], al ;~ 0FBC:1A30
cs=0xfbc;eip=0x001a33; 	T(SUB(ah, ah));	// 30463 sub     ah, ah ;~ 0FBC:1A33
cs=0xfbc;eip=0x001a35; 	T(MOV(bx, ax));	// 30464 mov     bx, ax ;~ 0FBC:1A35
cs=0xfbc;eip=0x001a37; 	T(SHL(bx, 1));	// 30465 shl     bx, 1 ;~ 0FBC:1A37
cs=0xfbc;eip=0x001a39; 	T(ADD(bx, ax));	// 30466 add     bx, ax ;~ 0FBC:1A39
cs=0xfbc;eip=0x001a3b; 	T(SHL(bx, 1));	// 30467 shl     bx, 1 ;~ 0FBC:1A3B
cs=0xfbc;eip=0x001a3d; 	T(ADD(bx, ax));	// 30468 add     bx, ax ;~ 0FBC:1A3D
cs=0xfbc;eip=0x001a3f; 	T(SHL(bx, 1));	// 30469 shl     bx, 1 ;~ 0FBC:1A3F
cs=0xfbc;eip=0x001a41; 	T(TEST(*((&byte_3d813)+bx), 1));	// 30470 test    byte_3D813[bx], 1 ;~ 0FBC:1A41
cs=0xfbc;eip=0x001a46; 	J(JZ(loc_1fc62));	// 30471 jz      short loc_1FC62 ;~ 0FBC:1A46
cs=0xfbc;eip=0x001a48; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30472 mov     bx, [bp+var_14] ;~ 0FBC:1A48
cs=0xfbc;eip=0x001a4b; 	T(MOV(ax, *(dw*)(((db*)&word_438ee)+bx)));	// 30473 mov     ax, word_438EE[bx] ;~ 0FBC:1A4B
cs=0xfbc;eip=0x001a4f; 	J(JMP(loc_1fc5f));	// 30474 jmp     short loc_1FC5F ;~ 0FBC:1A4F
loc_1fbf2:
	// 6381 
cs=0xfbc;eip=0x001a52; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 30479 mov     ax, [bp+arg_2] ;~ 0FBC:1A52
cs=0xfbc;eip=0x001a55; 	T(SHL(ax, 1));	// 30480 shl     ax, 1 ;~ 0FBC:1A55
cs=0xfbc;eip=0x001a57; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 30481 mov     [bp+var_14], ax ;~ 0FBC:1A57
cs=0xfbc;eip=0x001a5a; 	T(MOV(bx, ax));	// 30482 mov     bx, ax ;~ 0FBC:1A5A
cs=0xfbc;eip=0x001a5c; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 30483 mov     bx, trackrows[bx] ;~ 0FBC:1A5C
cs=0xfbc;eip=0x001a60; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 30484 add     bx, [bp+arg_0] ;~ 0FBC:1A60
cs=0xfbc;eip=0x001a63; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 30485 add     bx, word ptr td14_elem_map_main ;~ 0FBC:1A63
cs=0xfbc;eip=0x001a67; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 30486 mov     es, word ptr td14_elem_map_main+2 ;~ 0FBC:1A67
cs=0xfbc;eip=0x001a6b; 	T(MOV(al, *(raddr(es,bx-1))));	// 30487 mov     al, es:[bx-1] ;~ 0FBC:1A6B
cs=0xfbc;eip=0x001a6f; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 30488 mov     [bp+var_2], al ;~ 0FBC:1A6F
cs=0xfbc;eip=0x001a72; 	T(SUB(ah, ah));	// 30489 sub     ah, ah ;~ 0FBC:1A72
cs=0xfbc;eip=0x001a74; 	T(MOV(bx, ax));	// 30490 mov     bx, ax ;~ 0FBC:1A74
cs=0xfbc;eip=0x001a76; 	T(SHL(bx, 1));	// 30491 shl     bx, 1 ;~ 0FBC:1A76
cs=0xfbc;eip=0x001a78; 	T(ADD(bx, ax));	// 30492 add     bx, ax ;~ 0FBC:1A78
cs=0xfbc;eip=0x001a7a; 	T(SHL(bx, 1));	// 30493 shl     bx, 1 ;~ 0FBC:1A7A
cs=0xfbc;eip=0x001a7c; 	T(ADD(bx, ax));	// 30494 add     bx, ax ;~ 0FBC:1A7C
cs=0xfbc;eip=0x001a7e; 	T(SHL(bx, 1));	// 30495 shl     bx, 1 ;~ 0FBC:1A7E
cs=0xfbc;eip=0x001a80; 	T(TEST(*((&byte_3d813)+bx), 1));	// 30496 test    byte_3D813[bx], 1 ;~ 0FBC:1A80
cs=0xfbc;eip=0x001a85; 	J(JNZ(loc_1fc2a));	// 30497 jnz     short loc_1FC2A ;~ 0FBC:1A85
cs=0xfbc;eip=0x001a87; 	J(JMP(loc_1fb8d));	// 30498 jmp     loc_1FB8D ;~ 0FBC:1A87
loc_1fc2a:
	// 6382 
cs=0xfbc;eip=0x001a8a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30502 mov     bx, [bp+var_14] ;~ 0FBC:1A8A
cs=0xfbc;eip=0x001a8d; 	T(MOV(ax, *(dw*)(((db*)&trackpos)+bx)));	// 30503 mov     ax, trackpos[bx] ;~ 0FBC:1A8D
cs=0xfbc;eip=0x001a91; 	J(JMP(loc_1fb8a));	// 30504 jmp     loc_1FB8A ;~ 0FBC:1A91
loc_1fc34:
	// 6383 
cs=0xfbc;eip=0x001a94; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 30508 mov     al, [bp+var_2] ;~ 0FBC:1A94
cs=0xfbc;eip=0x001a97; 	T(SUB(ah, ah));	// 30509 sub     ah, ah ;~ 0FBC:1A97
cs=0xfbc;eip=0x001a99; 	T(MOV(bx, ax));	// 30510 mov     bx, ax ;~ 0FBC:1A99
cs=0xfbc;eip=0x001a9b; 	T(SHL(bx, 1));	// 30511 shl     bx, 1 ;~ 0FBC:1A9B
cs=0xfbc;eip=0x001a9d; 	T(ADD(bx, ax));	// 30512 add     bx, ax ;~ 0FBC:1A9D
cs=0xfbc;eip=0x001a9f; 	T(SHL(bx, 1));	// 30513 shl     bx, 1 ;~ 0FBC:1A9F
cs=0xfbc;eip=0x001aa1; 	T(ADD(bx, ax));	// 30514 add     bx, ax ;~ 0FBC:1AA1
cs=0xfbc;eip=0x001aa3; 	T(SHL(bx, 1));	// 30515 shl     bx, 1 ;~ 0FBC:1AA3
cs=0xfbc;eip=0x001aa5; 	T(MOV(al, *((&byte_3d813)+bx)));	// 30516 mov     al, byte_3D813[bx] ;~ 0FBC:1AA5
cs=0xfbc;eip=0x001aa9; 	X(MOV(*(db*)(raddr(ss,bp+var_14)), al));	// 30517 mov     byte ptr [bp+var_14], al ;~ 0FBC:1AA9
cs=0xfbc;eip=0x001aac; 	T(CMP(al, ah));	// 30518 cmp     al, ah ;~ 0FBC:1AAC
cs=0xfbc;eip=0x001aae; 	J(JZ(loc_1fc86));	// 30519 jz      short loc_1FC86 ;~ 0FBC:1AAE
cs=0xfbc;eip=0x001ab0; 	T(TEST(*(db*)(raddr(ss,bp+var_14)), 1));	// 30520 test    byte ptr [bp+var_14], 1 ;~ 0FBC:1AB0
cs=0xfbc;eip=0x001ab4; 	J(JZ(loc_1fc62));	// 30521 jz      short loc_1FC62 ;~ 0FBC:1AB4
cs=0xfbc;eip=0x001ab6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 30522 mov     bx, [bp+arg_2] ;~ 0FBC:1AB6
cs=0xfbc;eip=0x001ab9; 	T(SHL(bx, 1));	// 30523 shl     bx, 1 ;~ 0FBC:1AB9
cs=0xfbc;eip=0x001abb; 	T(MOV(ax, *(dw*)(((db*)&trackpos)+bx)));	// 30524 mov     ax, trackpos[bx] ;~ 0FBC:1ABB
loc_1fc5f:
	// 6384 
cs=0xfbc;eip=0x001abf; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 30527 mov     [bp+var_C], ax ;~ 0FBC:1ABF
loc_1fc62:
	// 6385 
cs=0xfbc;eip=0x001ac2; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 30531 mov     al, [bp+var_2] ;~ 0FBC:1AC2
cs=0xfbc;eip=0x001ac5; 	T(SUB(ah, ah));	// 30532 sub     ah, ah ;~ 0FBC:1AC5
cs=0xfbc;eip=0x001ac7; 	T(MOV(bx, ax));	// 30533 mov     bx, ax ;~ 0FBC:1AC7
cs=0xfbc;eip=0x001ac9; 	T(SHL(bx, 1));	// 30534 shl     bx, 1 ;~ 0FBC:1AC9
cs=0xfbc;eip=0x001acb; 	T(ADD(bx, ax));	// 30535 add     bx, ax ;~ 0FBC:1ACB
cs=0xfbc;eip=0x001acd; 	T(SHL(bx, 1));	// 30536 shl     bx, 1 ;~ 0FBC:1ACD
cs=0xfbc;eip=0x001acf; 	T(ADD(bx, ax));	// 30537 add     bx, ax ;~ 0FBC:1ACF
cs=0xfbc;eip=0x001ad1; 	T(SHL(bx, 1));	// 30538 shl     bx, 1 ;~ 0FBC:1AD1
cs=0xfbc;eip=0x001ad3; 	T(TEST(*((&byte_3d813)+bx), 2));	// 30539 test    byte_3D813[bx], 2 ;~ 0FBC:1AD3
cs=0xfbc;eip=0x001ad8; 	J(JZ(loc_1fc86));	// 30540 jz      short loc_1FC86 ;~ 0FBC:1AD8
cs=0xfbc;eip=0x001ada; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 30541 mov     bx, [bp+arg_0] ;~ 0FBC:1ADA
cs=0xfbc;eip=0x001add; 	T(SHL(bx, 1));	// 30542 shl     bx, 1 ;~ 0FBC:1ADD
cs=0xfbc;eip=0x001adf; 	T(MOV(ax, *(dw*)((((db*)trackpos2)+2)+bx)));	// 30543 mov     ax, (trackpos2+2)[bx] ;~ 0FBC:1ADF
loc_1fc83:
	// 6386 
cs=0xfbc;eip=0x001ae3; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 30546 mov     [bp+var_6], ax ;~ 0FBC:1AE3
loc_1fc86:
	// 6387 
cs=0xfbc;eip=0x001ae6; 	T(SUB(di, di));	// 30550 sub     di, di ;~ 0FBC:1AE6
cs=0xfbc;eip=0x001ae8; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 30551 mov     al, [bp+var_2] ;~ 0FBC:1AE8
cs=0xfbc;eip=0x001aeb; 	T(SUB(ah, ah));	// 30552 sub     ah, ah ;~ 0FBC:1AEB
cs=0xfbc;eip=0x001aed; 	T(MOV(bx, ax));	// 30553 mov     bx, ax ;~ 0FBC:1AED
cs=0xfbc;eip=0x001aef; 	T(SHL(bx, 1));	// 30554 shl     bx, 1 ;~ 0FBC:1AEF
cs=0xfbc;eip=0x001af1; 	T(ADD(bx, ax));	// 30555 add     bx, ax ;~ 0FBC:1AF1
cs=0xfbc;eip=0x001af3; 	T(SHL(bx, 1));	// 30556 shl     bx, 1 ;~ 0FBC:1AF3
cs=0xfbc;eip=0x001af5; 	T(ADD(bx, ax));	// 30557 add     bx, ax ;~ 0FBC:1AF5
cs=0xfbc;eip=0x001af7; 	T(SHL(bx, 1));	// 30558 shl     bx, 1 ;~ 0FBC:1AF7
cs=0xfbc;eip=0x001af9; 	T(MOV(al, *((&byte_3d814)+bx)));	// 30559 mov     al, byte_3D814[bx] ;~ 0FBC:1AF9
cs=0xfbc;eip=0x001afd; 	T(CBW);	// 30560 cbw ;~ 0FBC:1AFD
cs=0xfbc;eip=0x001afe; 	T(CMP(ax, 0x20));	// 30561 cmp     ax, 20h ; ' ' ;~ 0FBC:1AFE
cs=0xfbc;eip=0x001b01; 	J(JZ(loc_1fcc2));	// 30562 jz      short loc_1FCC2 ;~ 0FBC:1B01
cs=0xfbc;eip=0x001b03; 	J(JG(loc_1fcf4));	// 30563 jg      short loc_1FCF4 ;~ 0FBC:1B03
cs=0xfbc;eip=0x001b05; 	T(CMP(ax, 0x0B));	// 30564 cmp     ax, 0Bh ;~ 0FBC:1B05
cs=0xfbc;eip=0x001b08; 	J(JZ(loc_1fce0));	// 30565 jz      short loc_1FCE0 ;~ 0FBC:1B08
cs=0xfbc;eip=0x001b0a; 	T(CMP(ax, 0x12));	// 30566 cmp     ax, 12h ;~ 0FBC:1B0A
cs=0xfbc;eip=0x001b0d; 	J(JZ(loc_1fcea));	// 30567 jz      short loc_1FCEA ;~ 0FBC:1B0D
cs=0xfbc;eip=0x001b0f; 	J(JMP(loc_1fcba));	// 30568 jmp     short loc_1FCBA ;~ 0FBC:1B0F
loc_1fcb2:
	// 6388 
cs=0xfbc;eip=0x001b12; 	T(MOV(di, 2));	// 30573 mov     di, 2 ;~ 0FBC:1B12
cs=0xfbc;eip=0x001b15; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), offset(dseg,unk_3e676)));	// 30574 mov     [bp+var_4], offset unk_3E676 ;~ 0FBC:1B15
loc_1fcba:
	// 6389 
cs=0xfbc;eip=0x001b1a; 	T(OR(di, di));	// 30578 or      di, di ;~ 0FBC:1B1A
cs=0xfbc;eip=0x001b1c; 	J(JNZ(loc_1fd14));	// 30579 jnz     short loc_1FD14 ;~ 0FBC:1B1C
cs=0xfbc;eip=0x001b1e; 	J(JMP(loc_1fb0a));	// 30580 jmp     loc_1FB0A ;~ 0FBC:1B1E
loc_1fcc2:
	// 6390 
cs=0xfbc;eip=0x001b22; 	T(MOV(di, 2));	// 30585 mov     di, 2 ;~ 0FBC:1B22
cs=0xfbc;eip=0x001b25; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), offset(dseg,unk_3e682)));	// 30586 mov     [bp+var_4], offset unk_3E682 ;~ 0FBC:1B25
cs=0xfbc;eip=0x001b2a; 	J(JMP(loc_1fcba));	// 30587 jmp     short loc_1FCBA ;~ 0FBC:1B2A
loc_1fccc:
	// 6391 
cs=0xfbc;eip=0x001b2c; 	T(MOV(di, 2));	// 30591 mov     di, 2 ;~ 0FBC:1B2C
cs=0xfbc;eip=0x001b2f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), offset(dseg,unk_3e68e)));	// 30592 mov     [bp+var_4], offset unk_3E68E ;~ 0FBC:1B2F
cs=0xfbc;eip=0x001b34; 	J(JMP(loc_1fcba));	// 30593 jmp     short loc_1FCBA ;~ 0FBC:1B34
loc_1fcd6:
	// 6392 
cs=0xfbc;eip=0x001b36; 	T(MOV(di, 4));	// 30597 mov     di, 4 ;~ 0FBC:1B36
cs=0xfbc;eip=0x001b39; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), offset(dseg,unk_3e69a)));	// 30598 mov     [bp+var_4], offset unk_3E69A ;~ 0FBC:1B39
cs=0xfbc;eip=0x001b3e; 	J(JMP(loc_1fcba));	// 30599 jmp     short loc_1FCBA ;~ 0FBC:1B3E
loc_1fce0:
	// 6393 
cs=0xfbc;eip=0x001b40; 	T(MOV(di, 1));	// 30604 mov     di, 1 ;~ 0FBC:1B40
cs=0xfbc;eip=0x001b43; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), offset(dseg,unk_3e640)));	// 30605 mov     [bp+var_4], offset unk_3E640 ;~ 0FBC:1B43
cs=0xfbc;eip=0x001b48; 	J(JMP(loc_1fcba));	// 30606 jmp     short loc_1FCBA ;~ 0FBC:1B48
loc_1fcea:
	// 6394 
cs=0xfbc;eip=0x001b4a; 	T(MOV(di, 8));	// 30610 mov     di, 8 ;~ 0FBC:1B4A
cs=0xfbc;eip=0x001b4d; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), offset(dseg,unk_3e646)));	// 30611 mov     [bp+var_4], offset unk_3E646 ;~ 0FBC:1B4D
cs=0xfbc;eip=0x001b52; 	J(JMP(loc_1fcba));	// 30612 jmp     short loc_1FCBA ;~ 0FBC:1B52
loc_1fcf4:
	// 6395 
cs=0xfbc;eip=0x001b54; 	T(CMP(ax, 0x22));	// 30616 cmp     ax, 22h ; '"' ;~ 0FBC:1B54
cs=0xfbc;eip=0x001b57; 	J(JZ(loc_1fcd6));	// 30617 jz      short loc_1FCD6 ;~ 0FBC:1B57
cs=0xfbc;eip=0x001b59; 	J(JG(loc_1fd02));	// 30618 jg      short loc_1FD02 ;~ 0FBC:1B59
cs=0xfbc;eip=0x001b5b; 	T(CMP(ax, 0x21));	// 30619 cmp     ax, 21h ; '!' ;~ 0FBC:1B5B
cs=0xfbc;eip=0x001b5e; 	J(JZ(loc_1fccc));	// 30620 jz      short loc_1FCCC ;~ 0FBC:1B5E
cs=0xfbc;eip=0x001b60; 	J(JMP(loc_1fcba));	// 30621 jmp     short loc_1FCBA ;~ 0FBC:1B60
loc_1fd02:
	// 6396 
cs=0xfbc;eip=0x001b62; 	T(CMP(ax, 0x23));	// 30625 cmp     ax, 23h ; '#' ;~ 0FBC:1B62
cs=0xfbc;eip=0x001b65; 	J(JZ(loc_1fcb2));	// 30626 jz      short loc_1FCB2 ;~ 0FBC:1B65
cs=0xfbc;eip=0x001b67; 	T(CMP(ax, 0x47));	// 30627 cmp     ax, 47h ; 'G' ;~ 0FBC:1B67
cs=0xfbc;eip=0x001b6a; 	J(JL(loc_1fcba));	// 30628 jl      short loc_1FCBA ;~ 0FBC:1B6A
cs=0xfbc;eip=0x001b6c; 	T(CMP(ax, 0x4A));	// 30629 cmp     ax, 4Ah ; 'J' ;~ 0FBC:1B6C
cs=0xfbc;eip=0x001b6f; 	J(JLE(loc_1fce0));	// 30630 jle     short loc_1FCE0 ;~ 0FBC:1B6F
cs=0xfbc;eip=0x001b71; 	J(JMP(loc_1fcba));	// 30631 jmp     short loc_1FCBA ;~ 0FBC:1B71
loc_1fd14:
	// 6397 
cs=0xfbc;eip=0x001b74; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 30636 mov     bx, [bp+arg_2] ;~ 0FBC:1B74
cs=0xfbc;eip=0x001b77; 	T(SHL(bx, 1));	// 30637 shl     bx, 1 ;~ 0FBC:1B77
cs=0xfbc;eip=0x001b79; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 30638 mov     bx, terrainrows[bx] ;~ 0FBC:1B79
cs=0xfbc;eip=0x001b7d; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 30639 add     bx, [bp+arg_0] ;~ 0FBC:1B7D
cs=0xfbc;eip=0x001b80; 	T(ADD(bx, *(dw*)(((db*)&td15_terr_map_main))));	// 30640 add     bx, word ptr td15_terr_map_main ;~ 0FBC:1B80
cs=0xfbc;eip=0x001b84; 	T(MOV(es, *(dw*)(((db*)&td15_terr_map_main)+2)));	// 30641 mov     es, word ptr td15_terr_map_main+2 ;~ 0FBC:1B84
cs=0xfbc;eip=0x001b88; 	T(MOV(al, *(raddr(es,bx))));	// 30642 mov     al, es:[bx] ;~ 0FBC:1B88
cs=0xfbc;eip=0x001b8b; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 30643 mov     [bp+var_10], al ;~ 0FBC:1B8B
cs=0xfbc;eip=0x001b8e; 	T(CMP(al, 6));	// 30644 cmp     al, 6 ;~ 0FBC:1B8E
cs=0xfbc;eip=0x001b90; 	J(JNZ(loc_1fd3a));	// 30645 jnz     short loc_1FD3A ;~ 0FBC:1B90
cs=0xfbc;eip=0x001b92; 	T(MOV(ax, *(dw*)(((db*)hillheightconsts)+2)));	// 30646 mov     ax, hillHeightConsts+2 ;~ 0FBC:1B92
cs=0xfbc;eip=0x001b95; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 30647 mov     [bp+var_A], ax ;~ 0FBC:1B95
cs=0xfbc;eip=0x001b98; 	J(JMP(loc_1fd3f));	// 30648 jmp     short loc_1FD3F ;~ 0FBC:1B98
loc_1fd3a:
	// 6398 
cs=0xfbc;eip=0x001b9a; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 30652 mov     [bp+var_A], 0 ;~ 0FBC:1B9A
loc_1fd3f:
	// 6399 
cs=0xfbc;eip=0x001b9f; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 30655 mov     al, [bp+var_2] ;~ 0FBC:1B9F
cs=0xfbc;eip=0x001ba2; 	T(SUB(ah, ah));	// 30656 sub     ah, ah ;~ 0FBC:1BA2
cs=0xfbc;eip=0x001ba4; 	T(MOV(bx, ax));	// 30657 mov     bx, ax ;~ 0FBC:1BA4
cs=0xfbc;eip=0x001ba6; 	T(SHL(bx, 1));	// 30658 shl     bx, 1 ;~ 0FBC:1BA6
cs=0xfbc;eip=0x001ba8; 	T(ADD(bx, ax));	// 30659 add     bx, ax ;~ 0FBC:1BA8
cs=0xfbc;eip=0x001baa; 	T(SHL(bx, 1));	// 30660 shl     bx, 1 ;~ 0FBC:1BAA
cs=0xfbc;eip=0x001bac; 	T(ADD(bx, ax));	// 30661 add     bx, ax ;~ 0FBC:1BAC
cs=0xfbc;eip=0x001bae; 	T(SHL(bx, 1));	// 30662 shl     bx, 1 ;~ 0FBC:1BAE
cs=0xfbc;eip=0x001bb0; 	T(MOV(ax, *(dw*)(((db*)&word_3d80a)+bx)));	// 30663 mov     ax, word_3D80A[bx] ;~ 0FBC:1BB0
cs=0xfbc;eip=0x001bb4; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 30664 mov     [bp+var_8], ax ;~ 0FBC:1BB4
cs=0xfbc;eip=0x001bb7; 	T(SUB(si, si));	// 30665 sub     si, si ;~ 0FBC:1BB7
cs=0xfbc;eip=0x001bb9; 	J(JMP(loc_1fda6));	// 30666 jmp     short loc_1FDA6 ;~ 0FBC:1BB9
loc_1fd5c:
	// 6400 
cs=0xfbc;eip=0x001bbc; 	T(MOV(ax, si));	// 30671 mov     ax, si ;~ 0FBC:1BBC
cs=0xfbc;eip=0x001bbe; 	T(MOV(cx, ax));	// 30672 mov     cx, ax ;~ 0FBC:1BBE
cs=0xfbc;eip=0x001bc0; 	T(SHL(ax, 1));	// 30673 shl     ax, 1 ;~ 0FBC:1BC0
cs=0xfbc;eip=0x001bc2; 	T(ADD(ax, cx));	// 30674 add     ax, cx ;~ 0FBC:1BC2
cs=0xfbc;eip=0x001bc4; 	T(SHL(ax, 1));	// 30675 shl     ax, 1 ;~ 0FBC:1BC4
cs=0xfbc;eip=0x001bc6; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 30676 mov     [bp+var_14], ax ;~ 0FBC:1BC6
cs=0xfbc;eip=0x001bc9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30677 mov     bx, [bp+var_4] ;~ 0FBC:1BC9
cs=0xfbc;eip=0x001bcc; 	T(ADD(bx, ax));	// 30678 add     bx, ax ;~ 0FBC:1BCC
cs=0xfbc;eip=0x001bce; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 30679 mov     ax, [bx] ;~ 0FBC:1BCE
cs=0xfbc;eip=0x001bd0; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_6))));	// 30680 add     ax, [bp+var_6] ;~ 0FBC:1BD0
cs=0xfbc;eip=0x001bd3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 30681 mov     bx, [bp+arg_4] ;~ 0FBC:1BD3
cs=0xfbc;eip=0x001bd6; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30682 add     bx, [bp+var_14] ;~ 0FBC:1BD6
cs=0xfbc;eip=0x001bd9; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 30683 mov     [bx], ax ;~ 0FBC:1BD9
cs=0xfbc;eip=0x001bdb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30684 mov     bx, [bp+var_4] ;~ 0FBC:1BDB
cs=0xfbc;eip=0x001bde; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30685 add     bx, [bp+var_14] ;~ 0FBC:1BDE
cs=0xfbc;eip=0x001be1; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 30686 mov     ax, [bx+2] ;~ 0FBC:1BE1
cs=0xfbc;eip=0x001be4; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 30687 add     ax, [bp+var_A] ;~ 0FBC:1BE4
cs=0xfbc;eip=0x001be7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 30688 mov     bx, [bp+arg_4] ;~ 0FBC:1BE7
cs=0xfbc;eip=0x001bea; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30689 add     bx, [bp+var_14] ;~ 0FBC:1BEA
cs=0xfbc;eip=0x001bed; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 30690 mov     [bx+2], ax ;~ 0FBC:1BED
cs=0xfbc;eip=0x001bf0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30691 mov     bx, [bp+var_4] ;~ 0FBC:1BF0
cs=0xfbc;eip=0x001bf3; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30692 add     bx, [bp+var_14] ;~ 0FBC:1BF3
cs=0xfbc;eip=0x001bf6; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 30693 mov     ax, [bx+4] ;~ 0FBC:1BF6
loc_1fd99:
	// 6401 
cs=0xfbc;eip=0x001bf9; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_c))));	// 30697 add     ax, [bp+var_C] ;~ 0FBC:1BF9
cs=0xfbc;eip=0x001bfc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 30698 mov     bx, [bp+arg_4] ;~ 0FBC:1BFC
cs=0xfbc;eip=0x001bff; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30699 add     bx, [bp+var_14] ;~ 0FBC:1BFF
cs=0xfbc;eip=0x001c02; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 30700 mov     [bx+4], ax ;~ 0FBC:1C02
loc_1fda5:
	// 6402 
cs=0xfbc;eip=0x001c05; 	T(INC(si));	// 30703 inc     si ;~ 0FBC:1C05
loc_1fda6:
	// 6403 
cs=0xfbc;eip=0x001c06; 	T(CMP(si, di));	// 30706 cmp     si, di ;~ 0FBC:1C06
cs=0xfbc;eip=0x001c08; 	J(JL(loc_1fdad));	// 30707 jl      short loc_1FDAD ;~ 0FBC:1C08
cs=0xfbc;eip=0x001c0a; 	J(JMP(loc_1fe8c));	// 30708 jmp     loc_1FE8C ;~ 0FBC:1C0A
loc_1fdad:
	// 6404 
cs=0xfbc;eip=0x001c0d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 30712 mov     ax, [bp+var_8] ;~ 0FBC:1C0D
cs=0xfbc;eip=0x001c10; 	T(OR(ax, ax));	// 30713 or      ax, ax ;~ 0FBC:1C10
cs=0xfbc;eip=0x001c12; 	J(JZ(loc_1fd5c));	// 30714 jz      short loc_1FD5C ;~ 0FBC:1C12
cs=0xfbc;eip=0x001c14; 	T(CMP(ax, 0x100));	// 30715 cmp     ax, 100h ;~ 0FBC:1C14
cs=0xfbc;eip=0x001c17; 	J(JNZ(loc_1fdbc));	// 30716 jnz     short loc_1FDBC ;~ 0FBC:1C17
cs=0xfbc;eip=0x001c19; 	J(JMP(loc_1fe4a));	// 30717 jmp     loc_1FE4A ;~ 0FBC:1C19
loc_1fdbc:
	// 6405 
cs=0xfbc;eip=0x001c1c; 	T(CMP(ax, 0x200));	// 30721 cmp     ax, 200h ;~ 0FBC:1C1C
cs=0xfbc;eip=0x001c1f; 	J(JZ(loc_1fe08));	// 30722 jz      short loc_1FE08 ;~ 0FBC:1C1F
cs=0xfbc;eip=0x001c21; 	T(CMP(ax, 0x300));	// 30723 cmp     ax, 300h ;~ 0FBC:1C21
cs=0xfbc;eip=0x001c24; 	J(JNZ(loc_1fda5));	// 30724 jnz     short loc_1FDA5 ;~ 0FBC:1C24
cs=0xfbc;eip=0x001c26; 	T(MOV(ax, si));	// 30725 mov     ax, si ;~ 0FBC:1C26
cs=0xfbc;eip=0x001c28; 	T(MOV(cx, ax));	// 30726 mov     cx, ax ;~ 0FBC:1C28
cs=0xfbc;eip=0x001c2a; 	T(SHL(ax, 1));	// 30727 shl     ax, 1 ;~ 0FBC:1C2A
cs=0xfbc;eip=0x001c2c; 	T(ADD(ax, cx));	// 30728 add     ax, cx ;~ 0FBC:1C2C
cs=0xfbc;eip=0x001c2e; 	T(SHL(ax, 1));	// 30729 shl     ax, 1 ;~ 0FBC:1C2E
cs=0xfbc;eip=0x001c30; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 30730 mov     [bp+var_14], ax ;~ 0FBC:1C30
cs=0xfbc;eip=0x001c33; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30731 mov     bx, [bp+var_4] ;~ 0FBC:1C33
cs=0xfbc;eip=0x001c36; 	T(ADD(bx, ax));	// 30732 add     bx, ax ;~ 0FBC:1C36
cs=0xfbc;eip=0x001c38; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 30733 mov     ax, [bx+4] ;~ 0FBC:1C38
cs=0xfbc;eip=0x001c3b; 	T(NEG(ax));	// 30734 neg     ax ;~ 0FBC:1C3B
cs=0xfbc;eip=0x001c3d; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_6))));	// 30735 add     ax, [bp+var_6] ;~ 0FBC:1C3D
cs=0xfbc;eip=0x001c40; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 30736 mov     bx, [bp+arg_4] ;~ 0FBC:1C40
cs=0xfbc;eip=0x001c43; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30737 add     bx, [bp+var_14] ;~ 0FBC:1C43
cs=0xfbc;eip=0x001c46; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 30738 mov     [bx], ax ;~ 0FBC:1C46
cs=0xfbc;eip=0x001c48; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30739 mov     bx, [bp+var_4] ;~ 0FBC:1C48
cs=0xfbc;eip=0x001c4b; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30740 add     bx, [bp+var_14] ;~ 0FBC:1C4B
cs=0xfbc;eip=0x001c4e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 30741 mov     ax, [bx+2] ;~ 0FBC:1C4E
cs=0xfbc;eip=0x001c51; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 30742 add     ax, [bp+var_A] ;~ 0FBC:1C51
cs=0xfbc;eip=0x001c54; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 30743 mov     bx, [bp+arg_4] ;~ 0FBC:1C54
cs=0xfbc;eip=0x001c57; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30744 add     bx, [bp+var_14] ;~ 0FBC:1C57
cs=0xfbc;eip=0x001c5a; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 30745 mov     [bx+2], ax ;~ 0FBC:1C5A
cs=0xfbc;eip=0x001c5d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30746 mov     bx, [bp+var_4] ;~ 0FBC:1C5D
cs=0xfbc;eip=0x001c60; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30747 add     bx, [bp+var_14] ;~ 0FBC:1C60
cs=0xfbc;eip=0x001c63; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 30748 mov     ax, [bx] ;~ 0FBC:1C63
cs=0xfbc;eip=0x001c65; 	J(JMP(loc_1fd99));	// 30749 jmp     short loc_1FD99 ;~ 0FBC:1C65
loc_1fe08:
	// 6406 
cs=0xfbc;eip=0x001c68; 	T(MOV(ax, si));	// 30754 mov     ax, si ;~ 0FBC:1C68
cs=0xfbc;eip=0x001c6a; 	T(MOV(cx, ax));	// 30755 mov     cx, ax ;~ 0FBC:1C6A
cs=0xfbc;eip=0x001c6c; 	T(SHL(ax, 1));	// 30756 shl     ax, 1 ;~ 0FBC:1C6C
cs=0xfbc;eip=0x001c6e; 	T(ADD(ax, cx));	// 30757 add     ax, cx ;~ 0FBC:1C6E
cs=0xfbc;eip=0x001c70; 	T(SHL(ax, 1));	// 30758 shl     ax, 1 ;~ 0FBC:1C70
cs=0xfbc;eip=0x001c72; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 30759 mov     [bp+var_14], ax ;~ 0FBC:1C72
cs=0xfbc;eip=0x001c75; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30760 mov     bx, [bp+var_4] ;~ 0FBC:1C75
cs=0xfbc;eip=0x001c78; 	T(ADD(bx, ax));	// 30761 add     bx, ax ;~ 0FBC:1C78
cs=0xfbc;eip=0x001c7a; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 30762 mov     ax, [bx] ;~ 0FBC:1C7A
cs=0xfbc;eip=0x001c7c; 	T(NEG(ax));	// 30763 neg     ax ;~ 0FBC:1C7C
cs=0xfbc;eip=0x001c7e; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_6))));	// 30764 add     ax, [bp+var_6] ;~ 0FBC:1C7E
cs=0xfbc;eip=0x001c81; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 30765 mov     bx, [bp+arg_4] ;~ 0FBC:1C81
cs=0xfbc;eip=0x001c84; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30766 add     bx, [bp+var_14] ;~ 0FBC:1C84
cs=0xfbc;eip=0x001c87; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 30767 mov     [bx], ax ;~ 0FBC:1C87
cs=0xfbc;eip=0x001c89; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30768 mov     bx, [bp+var_4] ;~ 0FBC:1C89
cs=0xfbc;eip=0x001c8c; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30769 add     bx, [bp+var_14] ;~ 0FBC:1C8C
cs=0xfbc;eip=0x001c8f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 30770 mov     ax, [bx+2] ;~ 0FBC:1C8F
cs=0xfbc;eip=0x001c92; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 30771 add     ax, [bp+var_A] ;~ 0FBC:1C92
cs=0xfbc;eip=0x001c95; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 30772 mov     bx, [bp+arg_4] ;~ 0FBC:1C95
cs=0xfbc;eip=0x001c98; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30773 add     bx, [bp+var_14] ;~ 0FBC:1C98
cs=0xfbc;eip=0x001c9b; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 30774 mov     [bx+2], ax ;~ 0FBC:1C9B
cs=0xfbc;eip=0x001c9e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30775 mov     bx, [bp+var_4] ;~ 0FBC:1C9E
cs=0xfbc;eip=0x001ca1; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30776 add     bx, [bp+var_14] ;~ 0FBC:1CA1
cs=0xfbc;eip=0x001ca4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 30777 mov     ax, [bx+4] ;~ 0FBC:1CA4
cs=0xfbc;eip=0x001ca7; 	J(JMP(loc_1fe87));	// 30778 jmp     short loc_1FE87 ;~ 0FBC:1CA7
loc_1fe4a:
	// 6407 
cs=0xfbc;eip=0x001caa; 	T(MOV(ax, si));	// 30783 mov     ax, si ;~ 0FBC:1CAA
cs=0xfbc;eip=0x001cac; 	T(MOV(cx, ax));	// 30784 mov     cx, ax ;~ 0FBC:1CAC
cs=0xfbc;eip=0x001cae; 	T(SHL(ax, 1));	// 30785 shl     ax, 1 ;~ 0FBC:1CAE
cs=0xfbc;eip=0x001cb0; 	T(ADD(ax, cx));	// 30786 add     ax, cx ;~ 0FBC:1CB0
cs=0xfbc;eip=0x001cb2; 	T(SHL(ax, 1));	// 30787 shl     ax, 1 ;~ 0FBC:1CB2
cs=0xfbc;eip=0x001cb4; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 30788 mov     [bp+var_14], ax ;~ 0FBC:1CB4
cs=0xfbc;eip=0x001cb7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30789 mov     bx, [bp+var_4] ;~ 0FBC:1CB7
cs=0xfbc;eip=0x001cba; 	T(ADD(bx, ax));	// 30790 add     bx, ax ;~ 0FBC:1CBA
cs=0xfbc;eip=0x001cbc; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 30791 mov     ax, [bx+4] ;~ 0FBC:1CBC
cs=0xfbc;eip=0x001cbf; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_6))));	// 30792 add     ax, [bp+var_6] ;~ 0FBC:1CBF
cs=0xfbc;eip=0x001cc2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 30793 mov     bx, [bp+arg_4] ;~ 0FBC:1CC2
cs=0xfbc;eip=0x001cc5; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30794 add     bx, [bp+var_14] ;~ 0FBC:1CC5
cs=0xfbc;eip=0x001cc8; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 30795 mov     [bx], ax ;~ 0FBC:1CC8
cs=0xfbc;eip=0x001cca; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30796 mov     bx, [bp+var_4] ;~ 0FBC:1CCA
cs=0xfbc;eip=0x001ccd; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30797 add     bx, [bp+var_14] ;~ 0FBC:1CCD
cs=0xfbc;eip=0x001cd0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 30798 mov     ax, [bx+2] ;~ 0FBC:1CD0
cs=0xfbc;eip=0x001cd3; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 30799 add     ax, [bp+var_A] ;~ 0FBC:1CD3
cs=0xfbc;eip=0x001cd6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 30800 mov     bx, [bp+arg_4] ;~ 0FBC:1CD6
cs=0xfbc;eip=0x001cd9; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30801 add     bx, [bp+var_14] ;~ 0FBC:1CD9
cs=0xfbc;eip=0x001cdc; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 30802 mov     [bx+2], ax ;~ 0FBC:1CDC
cs=0xfbc;eip=0x001cdf; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30803 mov     bx, [bp+var_4] ;~ 0FBC:1CDF
cs=0xfbc;eip=0x001ce2; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30804 add     bx, [bp+var_14] ;~ 0FBC:1CE2
cs=0xfbc;eip=0x001ce5; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 30805 mov     ax, [bx] ;~ 0FBC:1CE5
loc_1fe87:
	// 6408 
cs=0xfbc;eip=0x001ce7; 	T(NEG(ax));	// 30808 neg     ax ;~ 0FBC:1CE7
cs=0xfbc;eip=0x001ce9; 	J(JMP(loc_1fd99));	// 30809 jmp     loc_1FD99 ;~ 0FBC:1CE9
loc_1fe8c:
	// 6409 
cs=0xfbc;eip=0x001cec; 	T(MOV(ax, di));	// 30813 mov     ax, di ;~ 0FBC:1CEC
cs=0xfbc;eip=0x001cee; 	X(POP(si));	// 30814 pop     si ;~ 0FBC:1CEE
cs=0xfbc;eip=0x001cef; 	X(POP(di));	// 30815 pop     di ;~ 0FBC:1CEF
cs=0xfbc;eip=0x001cf0; 	T(MOV(sp, bp));	// 30816 mov     sp, bp ;~ 0FBC:1CF0
cs=0xfbc;eip=0x001cf2; 	X(POP(bp));	// 30817 pop     bp ;~ 0FBC:1CF2
cs=0xfbc;eip=0x001cf3; 	J(RETF(0));	// 30818 retf ;~ 0FBC:1CF3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kbto_auxiliary1: 	goto bto_auxiliary1;
        case m2c::kloc_1fb0a: 	goto loc_1fb0a;
        case m2c::kloc_1fb12: 	goto loc_1fb12;
        case m2c::kloc_1fb33: 	goto loc_1fb33;
        case m2c::kloc_1fb4a: 	goto loc_1fb4a;
        case m2c::kloc_1fb4e: 	goto loc_1fb4e;
        case m2c::kloc_1fb8a: 	goto loc_1fb8a;
        case m2c::kloc_1fb8d: 	goto loc_1fb8d;
        case m2c::kloc_1fba8: 	goto loc_1fba8;
        case m2c::kloc_1fbb4: 	goto loc_1fbb4;
        case m2c::kloc_1fbf2: 	goto loc_1fbf2;
        case m2c::kloc_1fc2a: 	goto loc_1fc2a;
        case m2c::kloc_1fc34: 	goto loc_1fc34;
        case m2c::kloc_1fc5f: 	goto loc_1fc5f;
        case m2c::kloc_1fc62: 	goto loc_1fc62;
        case m2c::kloc_1fc83: 	goto loc_1fc83;
        case m2c::kloc_1fc86: 	goto loc_1fc86;
        case m2c::kloc_1fcb2: 	goto loc_1fcb2;
        case m2c::kloc_1fcba: 	goto loc_1fcba;
        case m2c::kloc_1fcc2: 	goto loc_1fcc2;
        case m2c::kloc_1fccc: 	goto loc_1fccc;
        case m2c::kloc_1fcd6: 	goto loc_1fcd6;
        case m2c::kloc_1fce0: 	goto loc_1fce0;
        case m2c::kloc_1fcea: 	goto loc_1fcea;
        case m2c::kloc_1fcf4: 	goto loc_1fcf4;
        case m2c::kloc_1fd02: 	goto loc_1fd02;
        case m2c::kloc_1fd14: 	goto loc_1fd14;
        case m2c::kloc_1fd3a: 	goto loc_1fd3a;
        case m2c::kloc_1fd3f: 	goto loc_1fd3f;
        case m2c::kloc_1fd5c: 	goto loc_1fd5c;
        case m2c::kloc_1fd99: 	goto loc_1fd99;
        case m2c::kloc_1fda5: 	goto loc_1fda5;
        case m2c::kloc_1fda6: 	goto loc_1fda6;
        case m2c::kloc_1fdad: 	goto loc_1fdad;
        case m2c::kloc_1fdbc: 	goto loc_1fdbc;
        case m2c::kloc_1fe08: 	goto loc_1fe08;
        case m2c::kloc_1fe4a: 	goto loc_1fe4a;
        case m2c::kloc_1fe87: 	goto loc_1fe87;
        case m2c::kloc_1fe8c: 	goto loc_1fe8c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool shape3d_load_all(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    shape3d_load_all:
    _begin:
cs=0xfbc;eip=0x001cf4; 	X(PUSH(bp));	// 30828 push    bp ;~ 0FBC:1CF4
cs=0xfbc;eip=0x001cf5; 	T(MOV(bp, sp));	// 30829 mov     bp, sp ;~ 0FBC:1CF5
cs=0xfbc;eip=0x001cf7; 	T(SUB(sp, 2));	// 30830 sub     sp, 2 ;~ 0FBC:1CF7
cs=0xfbc;eip=0x001cfa; 	X(PUSH(si));	// 30831 push    si ;~ 0FBC:1CFA
cs=0xfbc;eip=0x001cfb; 	T(SUB(ax, ax));	// 30832 sub     ax, ax ;~ 0FBC:1CFB
cs=0xfbc;eip=0x001cfd; 	X(MOV(word_461c6, ax));	// 30833 mov     word_461C6, ax ;~ 0FBC:1CFD
cs=0xfbc;eip=0x001d00; 	X(MOV(game1ptr, ax));	// 30834 mov     game1ptr, ax ;~ 0FBC:1D00
cs=0xfbc;eip=0x001d03; 	X(MOV(word_463d4, ax));	// 30835 mov     word_463D4, ax ;~ 0FBC:1D03
cs=0xfbc;eip=0x001d06; 	X(MOV(game2ptr, ax));	// 30836 mov     game2ptr, ax ;~ 0FBC:1D06
cs=0xfbc;eip=0x001d09; 	J(CALLF(mmgr_get_res_ofs_diff_scaled,0));	// 30837 call    mmgr_get_res_ofs_diff_scaled ;~ 0FBC:1D09
cs=0xfbc;eip=0x001d0e; 	T(OR(dx, dx));	// 30838 or      dx, dx ;~ 0FBC:1D0E
cs=0xfbc;eip=0x001d10; 	J(JG(loc_1fec2));	// 30839 jg      short loc_1FEC2 ;~ 0FBC:1D10
cs=0xfbc;eip=0x001d12; 	J(JL(loc_1feb9));	// 30840 jl      short loc_1FEB9 ;~ 0FBC:1D12
cs=0xfbc;eip=0x001d14; 	T(CMP(ax, 0x0FDE8));	// 30841 cmp     ax, 0FDE8h ;~ 0FBC:1D14
cs=0xfbc;eip=0x001d17; 	J(JNC(loc_1fec2));	// 30842 jnb     short loc_1FEC2 ;~ 0FBC:1D17
loc_1feb9:
	// 6410 
cs=0xfbc;eip=0x001d19; 	T(MOV(ax, 1));	// 30845 mov     ax, 1 ;~ 0FBC:1D19
cs=0xfbc;eip=0x001d1c; 	X(POP(si));	// 30846 pop     si ;~ 0FBC:1D1C
cs=0xfbc;eip=0x001d1d; 	T(MOV(sp, bp));	// 30847 mov     sp, bp ;~ 0FBC:1D1D
cs=0xfbc;eip=0x001d1f; 	X(POP(bp));	// 30848 pop     bp ;~ 0FBC:1D1F
cs=0xfbc;eip=0x001d20; 	J(RETF(0));	// 30849 retf ;~ 0FBC:1D20
loc_1fec2:
	// 6411 
cs=0xfbc;eip=0x001d22; 	T(MOV(ax, offset(dseg,agame1)));	// 30855 mov     ax, offset aGame1 ; "game1" ;~ 0FBC:1D22
cs=0xfbc;eip=0x001d25; 	X(PUSH(ax));	// 30856 push    ax ;~ 0FBC:1D25
cs=0xfbc;eip=0x001d26; 	J(CALLF(file_load_3dres,0));	// 30857 call    file_load_3dres ;~ 0FBC:1D26
cs=0xfbc;eip=0x001d2b; 	T(ADD(sp, 2));	// 30858 add     sp, 2 ;~ 0FBC:1D2B
cs=0xfbc;eip=0x001d2e; 	X(MOV(game1ptr, ax));	// 30859 mov     game1ptr, ax ;~ 0FBC:1D2E
cs=0xfbc;eip=0x001d31; 	X(MOV(word_461c6, dx));	// 30860 mov     word_461C6, dx ;~ 0FBC:1D31
cs=0xfbc;eip=0x001d35; 	T(MOV(ax, offset(dseg,agame2)));	// 30861 mov     ax, offset aGame2 ; "game2" ;~ 0FBC:1D35
cs=0xfbc;eip=0x001d38; 	X(PUSH(ax));	// 30862 push    ax ;~ 0FBC:1D38
cs=0xfbc;eip=0x001d39; 	J(CALLF(file_load_3dres,0));	// 30863 call    file_load_3dres ;~ 0FBC:1D39
cs=0xfbc;eip=0x001d3e; 	T(ADD(sp, 2));	// 30864 add     sp, 2 ;~ 0FBC:1D3E
cs=0xfbc;eip=0x001d41; 	X(MOV(game2ptr, ax));	// 30865 mov     game2ptr, ax ;~ 0FBC:1D41
cs=0xfbc;eip=0x001d44; 	X(MOV(word_463d4, dx));	// 30866 mov     word_463D4, dx ;~ 0FBC:1D44
cs=0xfbc;eip=0x001d48; 	T(SUB(si, si));	// 30867 sub     si, si ;~ 0FBC:1D48
loc_1feea:
	// 6412 
cs=0xfbc;eip=0x001d4a; 	T(MOV(ax, si));	// 30870 mov     ax, si ;~ 0FBC:1D4A
cs=0xfbc;eip=0x001d4c; 	T(MOV(cx, ax));	// 30871 mov     cx, ax ;~ 0FBC:1D4C
cs=0xfbc;eip=0x001d4e; 	T(SHL(ax, 1));	// 30872 shl     ax, 1 ;~ 0FBC:1D4E
cs=0xfbc;eip=0x001d50; 	T(SHL(ax, 1));	// 30873 shl     ax, 1 ;~ 0FBC:1D50
cs=0xfbc;eip=0x001d52; 	T(ADD(ax, cx));	// 30874 add     ax, cx ;~ 0FBC:1D52
cs=0xfbc;eip=0x001d54; 	T(ADD(ax, offset(dseg,abarn)));	// 30875 add     ax, offset aBarn ; "barn" ;~ 0FBC:1D54
cs=0xfbc;eip=0x001d57; 	X(PUSH(ax));	// 30876 push    ax ;~ 0FBC:1D57
cs=0xfbc;eip=0x001d58; 	X(PUSH(word_461c6));	// 30877 push    word_461C6 ;~ 0FBC:1D58
cs=0xfbc;eip=0x001d5c; 	X(PUSH(game1ptr));	// 30878 push    game1ptr ;~ 0FBC:1D5C
cs=0xfbc;eip=0x001d60; 	J(CALLF(locate_shape_nofatal,0));	// 30879 call    locate_shape_nofatal ;~ 0FBC:1D60
cs=0xfbc;eip=0x001d65; 	T(ADD(sp, 6));	// 30880 add     sp, 6 ;~ 0FBC:1D65
cs=0xfbc;eip=0x001d68; 	X(MOV(curshapeptr, ax));	// 30881 mov     curshapeptr, ax ;~ 0FBC:1D68
cs=0xfbc;eip=0x001d6b; 	X(MOV(word_449fa, dx));	// 30882 mov     word_449FA, dx ;~ 0FBC:1D6B
cs=0xfbc;eip=0x001d6f; 	T(OR(ax, dx));	// 30883 or      ax, dx ;~ 0FBC:1D6F
cs=0xfbc;eip=0x001d71; 	J(JNZ(loc_1ff38));	// 30884 jnz     short loc_1FF38 ;~ 0FBC:1D71
cs=0xfbc;eip=0x001d73; 	T(MOV(ax, si));	// 30885 mov     ax, si ;~ 0FBC:1D73
cs=0xfbc;eip=0x001d75; 	T(MOV(cx, ax));	// 30886 mov     cx, ax ;~ 0FBC:1D75
cs=0xfbc;eip=0x001d77; 	T(SHL(ax, 1));	// 30887 shl     ax, 1 ;~ 0FBC:1D77
cs=0xfbc;eip=0x001d79; 	T(SHL(ax, 1));	// 30888 shl     ax, 1 ;~ 0FBC:1D79
cs=0xfbc;eip=0x001d7b; 	T(ADD(ax, cx));	// 30889 add     ax, cx ;~ 0FBC:1D7B
cs=0xfbc;eip=0x001d7d; 	T(ADD(ax, offset(dseg,abarn)));	// 30890 add     ax, offset aBarn ; "barn" ;~ 0FBC:1D7D
cs=0xfbc;eip=0x001d80; 	X(PUSH(ax));	// 30891 push    ax ;~ 0FBC:1D80
cs=0xfbc;eip=0x001d81; 	X(PUSH(word_463d4));	// 30892 push    word_463D4 ;~ 0FBC:1D81
cs=0xfbc;eip=0x001d85; 	X(PUSH(game2ptr));	// 30893 push    game2ptr ;~ 0FBC:1D85
cs=0xfbc;eip=0x001d89; 	J(CALLF(locate_shape_fatal,0));	// 30894 call    locate_shape_fatal ;~ 0FBC:1D89
cs=0xfbc;eip=0x001d8e; 	T(ADD(sp, 6));	// 30895 add     sp, 6 ;~ 0FBC:1D8E
cs=0xfbc;eip=0x001d91; 	X(MOV(curshapeptr, ax));	// 30896 mov     curshapeptr, ax ;~ 0FBC:1D91
cs=0xfbc;eip=0x001d94; 	X(MOV(word_449fa, dx));	// 30897 mov     word_449FA, dx ;~ 0FBC:1D94
loc_1ff38:
	// 6413 
cs=0xfbc;eip=0x001d98; 	T(MOV(ax, 0x16));	// 30900 mov     ax, 16h ;~ 0FBC:1D98
cs=0xfbc;eip=0x001d9b; 	T(IMUL1_2(si));	// 30901 imul    si ;~ 0FBC:1D9B
cs=0xfbc;eip=0x001d9d; 	T(ADD(ax, offset(dseg,game3dshapes)));	// 30902 add     ax, offset game3dshapes ;~ 0FBC:1D9D
cs=0xfbc;eip=0x001da0; 	X(PUSH(ax));	// 30903 push    ax ;~ 0FBC:1DA0
cs=0xfbc;eip=0x001da1; 	X(PUSH(word_449fa));	// 30904 push    word_449FA ;~ 0FBC:1DA1
cs=0xfbc;eip=0x001da5; 	X(PUSH(curshapeptr));	// 30905 push    curshapeptr ;~ 0FBC:1DA5
cs=0xfbc;eip=0x001da9; 	J(CALLF(shape3d_init_shape,0));	// 30906 call    shape3d_init_shape ;~ 0FBC:1DA9
cs=0xfbc;eip=0x001dae; 	T(ADD(sp, 6));	// 30907 add     sp, 6 ;~ 0FBC:1DAE
cs=0xfbc;eip=0x001db1; 	T(INC(si));	// 30908 inc     si ;~ 0FBC:1DB1
cs=0xfbc;eip=0x001db2; 	T(CMP(si, 0x74));	// 30909 cmp     si, 74h ; 't' ;~ 0FBC:1DB2
cs=0xfbc;eip=0x001db5; 	J(JL(loc_1feea));	// 30910 jl      short loc_1FEEA ;~ 0FBC:1DB5
cs=0xfbc;eip=0x001db7; 	T(SUB(ax, ax));	// 30911 sub     ax, ax ;~ 0FBC:1DB7
cs=0xfbc;eip=0x001db9; 	X(POP(si));	// 30912 pop     si ;~ 0FBC:1DB9
cs=0xfbc;eip=0x001dba; 	T(MOV(sp, bp));	// 30913 mov     sp, bp ;~ 0FBC:1DBA
cs=0xfbc;eip=0x001dbc; 	X(POP(bp));	// 30914 pop     bp ;~ 0FBC:1DBC
cs=0xfbc;eip=0x001dbd; 	J(RETF(0));	// 30915 retf ;~ 0FBC:1DBD

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1feb9: 	goto loc_1feb9;
        case m2c::kloc_1fec2: 	goto loc_1fec2;
        case m2c::kloc_1feea: 	goto loc_1feea;
        case m2c::kloc_1ff38: 	goto loc_1ff38;
        case m2c::kshape3d_load_all: 	goto shape3d_load_all;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool shape3d_free_all(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    shape3d_free_all:
    _begin:
cs=0xfbc;eip=0x001dbe; 	T(MOV(ax, game1ptr));	// 30924 mov     ax, game1ptr ;~ 0FBC:1DBE
cs=0xfbc;eip=0x001dc1; 	T(OR(ax, word_461c6));	// 30925 or      ax, word_461C6 ;~ 0FBC:1DC1
cs=0xfbc;eip=0x001dc5; 	J(JZ(loc_1ff77));	// 30926 jz      short loc_1FF77 ;~ 0FBC:1DC5
cs=0xfbc;eip=0x001dc7; 	X(PUSH(word_461c6));	// 30927 push    word_461C6 ;~ 0FBC:1DC7
cs=0xfbc;eip=0x001dcb; 	X(PUSH(game1ptr));	// 30928 push    game1ptr ;~ 0FBC:1DCB
cs=0xfbc;eip=0x001dcf; 	J(CALLF(mmgr_free,0));	// 30929 call    mmgr_free ;~ 0FBC:1DCF
cs=0xfbc;eip=0x001dd4; 	T(ADD(sp, 4));	// 30930 add     sp, 4 ;~ 0FBC:1DD4
loc_1ff77:
	// 6414 
cs=0xfbc;eip=0x001dd7; 	T(MOV(ax, game2ptr));	// 30933 mov     ax, game2ptr ;~ 0FBC:1DD7
cs=0xfbc;eip=0x001dda; 	T(OR(ax, word_463d4));	// 30934 or      ax, word_463D4 ;~ 0FBC:1DDA
cs=0xfbc;eip=0x001dde; 	J(JZ(locret_1ff90));	// 30935 jz      short locret_1FF90 ;~ 0FBC:1DDE
cs=0xfbc;eip=0x001de0; 	X(PUSH(word_463d4));	// 30936 push    word_463D4 ;~ 0FBC:1DE0
cs=0xfbc;eip=0x001de4; 	X(PUSH(game2ptr));	// 30937 push    game2ptr ;~ 0FBC:1DE4
cs=0xfbc;eip=0x001de8; 	J(CALLF(mmgr_free,0));	// 30938 call    mmgr_free ;~ 0FBC:1DE8
cs=0xfbc;eip=0x001ded; 	T(ADD(sp, 4));	// 30939 add     sp, 4 ;~ 0FBC:1DED
locret_1ff90:
	// 6415 
cs=0xfbc;eip=0x001df0; 	J(RETF(0));	// 30942 retf ;~ 0FBC:1DF0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1ff77: 	goto loc_1ff77;
        case m2c::klocret_1ff90: 	goto locret_1ff90;
        case m2c::kshape3d_free_all: 	goto shape3d_free_all;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool shape3d_load_car_shapes(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    shape3d_load_car_shapes:
    _begin:
#undef var_10
#define var_10 -0x10
	// 30955 var_10          = byte ptr -10h ;~ 0FBC:1DF2
#undef var_e
#define var_e -0x0E
	// 30956 var_E           = dword ptr -0Eh ;~ 0FBC:1DF2
#undef var_a
#define var_a -0x0A
	// 30957 var_A           = word ptr -0Ah ;~ 0FBC:1DF2
#undef var_8
#define var_8 -8
	// 30958 var_8           = word ptr -8 ;~ 0FBC:1DF2
#undef var_6
#define var_6 -6
	// 30959 var_6           = word ptr -6 ;~ 0FBC:1DF2
#undef var_4
#define var_4 -4
	// 30960 var_4           = word ptr -4 ;~ 0FBC:1DF2
#undef arg_0
#define arg_0 6
	// 30961 arg_0           = word ptr  6 ;~ 0FBC:1DF2
#undef arg_2
#define arg_2 8
	// 30962 arg_2           = word ptr  8 ;~ 0FBC:1DF2
cs=0xfbc;eip=0x001df2; 	X(PUSH(bp));	// 30964 push    bp ;~ 0FBC:1DF2
cs=0xfbc;eip=0x001df3; 	T(MOV(bp, sp));	// 30965 mov     bp, sp ;~ 0FBC:1DF3
cs=0xfbc;eip=0x001df5; 	T(SUB(sp, 0x10));	// 30966 sub     sp, 10h ;~ 0FBC:1DF5
cs=0xfbc;eip=0x001df8; 	X(PUSH(di));	// 30967 push    di ;~ 0FBC:1DF8
cs=0xfbc;eip=0x001df9; 	X(PUSH(si));	// 30968 push    si ;~ 0FBC:1DF9
cs=0xfbc;eip=0x001dfa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 30969 mov     bx, [bp+arg_0] ;~ 0FBC:1DFA
cs=0xfbc;eip=0x001dfd; 	T(MOV(al, *(raddr(ds,bx))));	// 30970 mov     al, [bx] ;~ 0FBC:1DFD
cs=0xfbc;eip=0x001dff; 	X(MOV(byte_3e70c, al));	// 30971 mov     byte_3E70C, al ;~ 0FBC:1DFF
cs=0xfbc;eip=0x001e02; 	T(MOV(al, *(raddr(ds,bx+1))));	// 30972 mov     al, [bx+1] ;~ 0FBC:1E02
cs=0xfbc;eip=0x001e05; 	X(MOV(byte_3e70d, al));	// 30973 mov     byte_3E70D, al ;~ 0FBC:1E05
cs=0xfbc;eip=0x001e08; 	T(MOV(al, *(raddr(ds,bx+2))));	// 30974 mov     al, [bx+2] ;~ 0FBC:1E08
cs=0xfbc;eip=0x001e0b; 	X(MOV(byte_3e70e, al));	// 30975 mov     byte_3E70E, al ;~ 0FBC:1E0B
cs=0xfbc;eip=0x001e0e; 	T(MOV(al, *(raddr(ds,bx+3))));	// 30976 mov     al, [bx+3] ;~ 0FBC:1E0E
cs=0xfbc;eip=0x001e11; 	X(MOV(byte_3e70f, al));	// 30977 mov     byte_3E70F, al ;~ 0FBC:1E11
cs=0xfbc;eip=0x001e14; 	T(MOV(ax, offset(dseg,astxxx)));	// 30978 mov     ax, offset aStxxx ;~ 0FBC:1E14
cs=0xfbc;eip=0x001e17; 	X(PUSH(ax));	// 30979 push    ax ;~ 0FBC:1E17
cs=0xfbc;eip=0x001e18; 	J(CALLF(file_load_3dres,0));	// 30980 call    file_load_3dres ;~ 0FBC:1E18
cs=0xfbc;eip=0x001e1d; 	T(ADD(sp, 2));	// 30981 add     sp, 2 ;~ 0FBC:1E1D
cs=0xfbc;eip=0x001e20; 	X(MOV(*(dw*)(((db*)&carresptr)), ax));	// 30982 mov     word ptr carresptr, ax ;~ 0FBC:1E20
cs=0xfbc;eip=0x001e23; 	X(MOV(*(dw*)(((db*)&carresptr)+2), dx));	// 30983 mov     word ptr carresptr+2, dx ;~ 0FBC:1E23
cs=0xfbc;eip=0x001e27; 	T(MOV(ax, offset(dseg,unk_43864)));	// 30984 mov     ax, offset unk_43864 ;~ 0FBC:1E27
cs=0xfbc;eip=0x001e2a; 	X(PUSH(ax));	// 30985 push    ax ;~ 0FBC:1E2A
cs=0xfbc;eip=0x001e2b; 	T(MOV(ax, offset(dseg,acar0)));	// 30986 mov     ax, offset aCar0 ; "car0" ;~ 0FBC:1E2B
cs=0xfbc;eip=0x001e2e; 	X(PUSH(ax));	// 30987 push    ax ;~ 0FBC:1E2E
cs=0xfbc;eip=0x001e2f; 	X(PUSH(dx));	// 30988 push    dx ;~ 0FBC:1E2F
cs=0xfbc;eip=0x001e30; 	X(PUSH(*(dw*)(((db*)&carresptr))));	// 30989 push    word ptr carresptr ;~ 0FBC:1E30
cs=0xfbc;eip=0x001e34; 	J(CALLF(locate_shape_fatal,0));	// 30990 call    locate_shape_fatal ;~ 0FBC:1E34
cs=0xfbc;eip=0x001e39; 	T(ADD(sp, 6));	// 30991 add     sp, 6 ;~ 0FBC:1E39
cs=0xfbc;eip=0x001e3c; 	X(PUSH(dx));	// 30992 push    dx ;~ 0FBC:1E3C
cs=0xfbc;eip=0x001e3d; 	X(PUSH(ax));	// 30993 push    ax ;~ 0FBC:1E3D
cs=0xfbc;eip=0x001e3e; 	J(CALLF(shape3d_init_shape,0));	// 30994 call    shape3d_init_shape ;~ 0FBC:1E3E
cs=0xfbc;eip=0x001e43; 	T(ADD(sp, 6));	// 30995 add     sp, 6 ;~ 0FBC:1E43
cs=0xfbc;eip=0x001e46; 	T(MOV(ax, offset(dseg,unk_43890)));	// 30996 mov     ax, offset unk_43890 ;~ 0FBC:1E46
cs=0xfbc;eip=0x001e49; 	X(PUSH(ax));	// 30997 push    ax ;~ 0FBC:1E49
cs=0xfbc;eip=0x001e4a; 	T(MOV(ax, offset(dseg,acar1)));	// 30998 mov     ax, offset aCar1 ; "car1" ;~ 0FBC:1E4A
cs=0xfbc;eip=0x001e4d; 	X(PUSH(ax));	// 30999 push    ax ;~ 0FBC:1E4D
cs=0xfbc;eip=0x001e4e; 	X(PUSH(*(dw*)(((db*)&carresptr)+2)));	// 31000 push    word ptr carresptr+2 ;~ 0FBC:1E4E
cs=0xfbc;eip=0x001e52; 	X(PUSH(*(dw*)(((db*)&carresptr))));	// 31001 push    word ptr carresptr ;~ 0FBC:1E52
cs=0xfbc;eip=0x001e56; 	J(CALLF(locate_shape_fatal,0));	// 31002 call    locate_shape_fatal ;~ 0FBC:1E56
cs=0xfbc;eip=0x001e5b; 	T(ADD(sp, 6));	// 31003 add     sp, 6 ;~ 0FBC:1E5B
cs=0xfbc;eip=0x001e5e; 	X(PUSH(dx));	// 31004 push    dx ;~ 0FBC:1E5E
cs=0xfbc;eip=0x001e5f; 	X(PUSH(ax));	// 31005 push    ax ;~ 0FBC:1E5F
cs=0xfbc;eip=0x001e60; 	J(CALLF(shape3d_init_shape,0));	// 31006 call    shape3d_init_shape ;~ 0FBC:1E60
cs=0xfbc;eip=0x001e65; 	T(ADD(sp, 6));	// 31007 add     sp, 6 ;~ 0FBC:1E65
cs=0xfbc;eip=0x001e68; 	T(MOV(ax, word_43892));	// 31008 mov     ax, word_43892 ;~ 0FBC:1E68
cs=0xfbc;eip=0x001e6b; 	T(MOV(dx, word_43894));	// 31009 mov     dx, word_43894 ;~ 0FBC:1E6B
cs=0xfbc;eip=0x001e6f; 	T(ADD(ax, 0x30));	// 31010 add     ax, 30h ; '0' ;~ 0FBC:1E6F
cs=0xfbc;eip=0x001e72; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e))), ax));	// 31011 mov     word ptr [bp+var_E], ax ;~ 0FBC:1E72
cs=0xfbc;eip=0x001e75; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e +2))), dx));	// 31012 mov     word ptr [bp+var_E+2], dx ;~ 0FBC:1E75
cs=0xfbc;eip=0x001e78; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31013 les     bx, [bp+var_E] ;~ 0FBC:1E78
cs=0xfbc;eip=0x001e7b; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 31014 mov     ax, es:[bx+4] ;~ 0FBC:1E7B
cs=0xfbc;eip=0x001e7f; 	X(MOV(word_42cbe, ax));	// 31015 mov     word_42CBE, ax ;~ 0FBC:1E7F
cs=0xfbc;eip=0x001e82; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 31016 mov     ax, es:[bx+12h] ;~ 0FBC:1E82
cs=0xfbc;eip=0x001e86; 	T(ADD(ax, *(dw*)(raddr(es,bx+0))));	// 31017 add     ax, es:[bx+0] ;~ 0FBC:1E86
cs=0xfbc;eip=0x001e89; 	T(SAR(ax, 1));	// 31018 sar     ax, 1 ;~ 0FBC:1E89
cs=0xfbc;eip=0x001e8b; 	X(MOV(carshapevec, ax));	// 31019 mov     carshapevec, ax ;~ 0FBC:1E8B
cs=0xfbc;eip=0x001e8e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x28))));	// 31020 mov     ax, es:[bx+28h] ;~ 0FBC:1E8E
cs=0xfbc;eip=0x001e92; 	X(MOV(word_42cc4, ax));	// 31021 mov     word_42CC4, ax ;~ 0FBC:1E92
cs=0xfbc;eip=0x001e95; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x24))));	// 31022 mov     ax, es:[bx+24h] ;~ 0FBC:1E95
cs=0xfbc;eip=0x001e99; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x36))));	// 31023 add     ax, es:[bx+36h] ;~ 0FBC:1E99
cs=0xfbc;eip=0x001e9d; 	T(SAR(ax, 1));	// 31024 sar     ax, 1 ;~ 0FBC:1E9D
cs=0xfbc;eip=0x001e9f; 	X(MOV(carshapevec2, ax));	// 31025 mov     carshapevec2, ax ;~ 0FBC:1E9F
cs=0xfbc;eip=0x001ea2; 	T(SUB(si, si));	// 31026 sub     si, si ;~ 0FBC:1EA2
loc_20044:
	// 6416 
cs=0xfbc;eip=0x001ea4; 	T(MOV(ax, si));	// 31029 mov     ax, si ;~ 0FBC:1EA4
cs=0xfbc;eip=0x001ea6; 	T(MOV(cx, ax));	// 31030 mov     cx, ax ;~ 0FBC:1EA6
cs=0xfbc;eip=0x001ea8; 	T(SHL(ax, 1));	// 31031 shl     ax, 1 ;~ 0FBC:1EA8
cs=0xfbc;eip=0x001eaa; 	T(ADD(ax, cx));	// 31032 add     ax, cx ;~ 0FBC:1EAA
cs=0xfbc;eip=0x001eac; 	T(SHL(ax, 1));	// 31033 shl     ax, 1 ;~ 0FBC:1EAC
cs=0xfbc;eip=0x001eae; 	T(MOV(di, ax));	// 31034 mov     di, ax ;~ 0FBC:1EAE
cs=0xfbc;eip=0x001eb0; 	T(MOV(ax, carshapevec));	// 31035 mov     ax, carshapevec ;~ 0FBC:1EB0
cs=0xfbc;eip=0x001eb3; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31036 les     bx, [bp+var_E] ;~ 0FBC:1EB3
cs=0xfbc;eip=0x001eb6; 	T(SUB(ax, *(dw*)(raddr(es,bx+di+0))));	// 31037 sub     ax, es:[bx+di+0] ;~ 0FBC:1EB6
cs=0xfbc;eip=0x001eb9; 	X(MOV(*(dw*)(((db*)&carshapevecs)+di), ax));	// 31038 mov     carshapevecs[di], ax ;~ 0FBC:1EB9
cs=0xfbc;eip=0x001ebd; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31039 les     bx, [bp+var_E] ;~ 0FBC:1EBD
cs=0xfbc;eip=0x001ec0; 	T(MOV(ax, word_42cbe));	// 31040 mov     ax, word_42CBE ;~ 0FBC:1EC0
cs=0xfbc;eip=0x001ec3; 	T(SUB(ax, *(dw*)(raddr(es,bx+di+4))));	// 31041 sub     ax, es:[bx+di+4] ;~ 0FBC:1EC3
cs=0xfbc;eip=0x001ec7; 	X(MOV(*(dw*)(((db*)&word_443fe)+di), ax));	// 31042 mov     word_443FE[di], ax ;~ 0FBC:1EC7
cs=0xfbc;eip=0x001ecb; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31043 les     bx, [bp+var_E] ;~ 0FBC:1ECB
cs=0xfbc;eip=0x001ece; 	T(MOV(ax, *(dw*)(raddr(es,bx+di+2))));	// 31044 mov     ax, es:[bx+di+2] ;~ 0FBC:1ECE
cs=0xfbc;eip=0x001ed2; 	X(MOV(*(dw*)(((db*)&word_443fc)+di), ax));	// 31045 mov     word_443FC[di], ax ;~ 0FBC:1ED2
cs=0xfbc;eip=0x001ed6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31046 les     bx, [bp+var_E] ;~ 0FBC:1ED6
cs=0xfbc;eip=0x001ed9; 	T(MOV(ax, carshapevec2));	// 31047 mov     ax, carshapevec2 ;~ 0FBC:1ED9
cs=0xfbc;eip=0x001edc; 	T(SUB(ax, *(dw*)(raddr(es,bx+di+0x24))));	// 31048 sub     ax, es:[bx+di+24h] ;~ 0FBC:1EDC
cs=0xfbc;eip=0x001ee0; 	X(MOV(*(dw*)(((db*)&carshapevecs2)+di), ax));	// 31049 mov     carshapevecs2[di], ax ;~ 0FBC:1EE0
cs=0xfbc;eip=0x001ee4; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31050 les     bx, [bp+var_E] ;~ 0FBC:1EE4
cs=0xfbc;eip=0x001ee7; 	T(MOV(ax, word_42cc4));	// 31051 mov     ax, word_42CC4 ;~ 0FBC:1EE7
cs=0xfbc;eip=0x001eea; 	T(SUB(ax, *(dw*)(raddr(es,bx+di+0x28))));	// 31052 sub     ax, es:[bx+di+28h] ;~ 0FBC:1EEA
cs=0xfbc;eip=0x001eee; 	X(MOV(*(dw*)(((db*)&word_44422)+di), ax));	// 31053 mov     word_44422[di], ax ;~ 0FBC:1EEE
cs=0xfbc;eip=0x001ef2; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31054 les     bx, [bp+var_E] ;~ 0FBC:1EF2
cs=0xfbc;eip=0x001ef5; 	T(MOV(ax, *(dw*)(raddr(es,bx+di+0x26))));	// 31055 mov     ax, es:[bx+di+26h] ;~ 0FBC:1EF5
cs=0xfbc;eip=0x001ef9; 	X(MOV(*(dw*)(((db*)&word_44420)+di), ax));	// 31056 mov     word_44420[di], ax ;~ 0FBC:1EF9
cs=0xfbc;eip=0x001efd; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31057 les     bx, [bp+var_E] ;~ 0FBC:1EFD
cs=0xfbc;eip=0x001f00; 	X(PUSH(si));	// 31058 push    si ;~ 0FBC:1F00
cs=0xfbc;eip=0x001f01; 	X(PUSH(di));	// 31059 push    di ;~ 0FBC:1F01
cs=0xfbc;eip=0x001f02; 	T(si = bx+di+0x48);	// 31060 lea     si, [bx+di+48h] ;~ 0FBC:1F02
cs=0xfbc;eip=0x001f05; 	T(di = offset(dseg,carshapevecs3)+di);	// 31061 lea     di, carshapevecs3[di] ;~ 0FBC:1F05
cs=0xfbc;eip=0x001f09; 	X(PUSH(ds));	// 31062 push    ds ;~ 0FBC:1F09
cs=0xfbc;eip=0x001f0a; 	X(PUSH(ds));	// 31063 push    ds ;~ 0FBC:1F0A
cs=0xfbc;eip=0x001f0b; 	X(PUSH(es));	// 31064 push    es ;~ 0FBC:1F0B
cs=0xfbc;eip=0x001f0c; 	X(POP(ds));	// 31065 pop     ds ;~ 0FBC:1F0C
cs=0xfbc;eip=0x001f0d; 	X(POP(es));	// 31066 pop     es ;~ 0FBC:1F0D
cs=0xfbc;eip=0x001f0e; 	X(MOVSW);	// 31067 movsw ;~ 0FBC:1F0E
cs=0xfbc;eip=0x001f0f; 	X(MOVSW);	// 31068 movsw ;~ 0FBC:1F0F
cs=0xfbc;eip=0x001f10; 	X(MOVSW);	// 31069 movsw ;~ 0FBC:1F10
cs=0xfbc;eip=0x001f11; 	X(POP(ds));	// 31070 pop     ds ;~ 0FBC:1F11
cs=0xfbc;eip=0x001f12; 	X(POP(di));	// 31071 pop     di ;~ 0FBC:1F12
cs=0xfbc;eip=0x001f13; 	X(POP(si));	// 31072 pop     si ;~ 0FBC:1F13
cs=0xfbc;eip=0x001f14; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31073 les     bx, [bp+var_E] ;~ 0FBC:1F14
cs=0xfbc;eip=0x001f17; 	X(PUSH(si));	// 31074 push    si ;~ 0FBC:1F17
cs=0xfbc;eip=0x001f18; 	X(PUSH(di));	// 31075 push    di ;~ 0FBC:1F18
cs=0xfbc;eip=0x001f19; 	T(si = bx+di+0x6C);	// 31076 lea     si, [bx+di+6Ch] ;~ 0FBC:1F19
cs=0xfbc;eip=0x001f1c; 	T(di = offset(dseg,carshapevecs4)+di);	// 31077 lea     di, carshapevecs4[di] ;~ 0FBC:1F1C
cs=0xfbc;eip=0x001f20; 	X(PUSH(ds));	// 31078 push    ds ;~ 0FBC:1F20
cs=0xfbc;eip=0x001f21; 	X(PUSH(ds));	// 31079 push    ds ;~ 0FBC:1F21
cs=0xfbc;eip=0x001f22; 	X(PUSH(es));	// 31080 push    es ;~ 0FBC:1F22
cs=0xfbc;eip=0x001f23; 	X(POP(ds));	// 31081 pop     ds ;~ 0FBC:1F23
cs=0xfbc;eip=0x001f24; 	X(POP(es));	// 31082 pop     es ;~ 0FBC:1F24
cs=0xfbc;eip=0x001f25; 	X(MOVSW);	// 31083 movsw ;~ 0FBC:1F25
cs=0xfbc;eip=0x001f26; 	X(MOVSW);	// 31084 movsw ;~ 0FBC:1F26
cs=0xfbc;eip=0x001f27; 	X(MOVSW);	// 31085 movsw ;~ 0FBC:1F27
cs=0xfbc;eip=0x001f28; 	X(POP(ds));	// 31086 pop     ds ;~ 0FBC:1F28
cs=0xfbc;eip=0x001f29; 	X(POP(di));	// 31087 pop     di ;~ 0FBC:1F29
cs=0xfbc;eip=0x001f2a; 	X(POP(si));	// 31088 pop     si ;~ 0FBC:1F2A
cs=0xfbc;eip=0x001f2b; 	T(INC(si));	// 31089 inc     si ;~ 0FBC:1F2B
cs=0xfbc;eip=0x001f2c; 	T(CMP(si, 6));	// 31090 cmp     si, 6 ;~ 0FBC:1F2C
cs=0xfbc;eip=0x001f2f; 	J(JGE(loc_200d4));	// 31091 jge     short loc_200D4 ;~ 0FBC:1F2F
cs=0xfbc;eip=0x001f31; 	J(JMP(loc_20044));	// 31092 jmp     loc_20044 ;~ 0FBC:1F31
loc_200d4:
	// 6417 
cs=0xfbc;eip=0x001f34; 	T(SUB(si, si));	// 31096 sub     si, si ;~ 0FBC:1F34
loc_200d6:
	// 6418 
cs=0xfbc;eip=0x001f36; 	T(MOV(bx, si));	// 31099 mov     bx, si ;~ 0FBC:1F36
cs=0xfbc;eip=0x001f38; 	T(SHL(bx, 1));	// 31100 shl     bx, 1 ;~ 0FBC:1F38
cs=0xfbc;eip=0x001f3a; 	X(MOV(*(dw*)(((db*)&word_443e8)+bx), 0));	// 31101 mov     word_443E8[bx], 0 ;~ 0FBC:1F3A
cs=0xfbc;eip=0x001f40; 	T(INC(si));	// 31102 inc     si ;~ 0FBC:1F40
cs=0xfbc;eip=0x001f41; 	T(CMP(si, 5));	// 31103 cmp     si, 5 ;~ 0FBC:1F41
cs=0xfbc;eip=0x001f44; 	J(JL(loc_200d6));	// 31104 jl      short loc_200D6 ;~ 0FBC:1F44
cs=0xfbc;eip=0x001f46; 	T(MOV(ax, offset(dseg,unk_438bc)));	// 31105 mov     ax, offset unk_438BC ;~ 0FBC:1F46
cs=0xfbc;eip=0x001f49; 	X(PUSH(ax));	// 31106 push    ax ;~ 0FBC:1F49
cs=0xfbc;eip=0x001f4a; 	T(MOV(ax, offset(dseg,acar2)));	// 31107 mov     ax, offset aCar2 ; "car2" ;~ 0FBC:1F4A
cs=0xfbc;eip=0x001f4d; 	X(PUSH(ax));	// 31108 push    ax ;~ 0FBC:1F4D
cs=0xfbc;eip=0x001f4e; 	X(PUSH(*(dw*)(((db*)&carresptr)+2)));	// 31109 push    word ptr carresptr+2 ;~ 0FBC:1F4E
cs=0xfbc;eip=0x001f52; 	X(PUSH(*(dw*)(((db*)&carresptr))));	// 31110 push    word ptr carresptr ;~ 0FBC:1F52
cs=0xfbc;eip=0x001f56; 	J(CALLF(locate_shape_fatal,0));	// 31111 call    locate_shape_fatal ;~ 0FBC:1F56
cs=0xfbc;eip=0x001f5b; 	T(ADD(sp, 6));	// 31112 add     sp, 6 ;~ 0FBC:1F5B
cs=0xfbc;eip=0x001f5e; 	X(PUSH(dx));	// 31113 push    dx ;~ 0FBC:1F5E
cs=0xfbc;eip=0x001f5f; 	X(PUSH(ax));	// 31114 push    ax ;~ 0FBC:1F5F
cs=0xfbc;eip=0x001f60; 	J(CALLF(shape3d_init_shape,0));	// 31115 call    shape3d_init_shape ;~ 0FBC:1F60
cs=0xfbc;eip=0x001f65; 	T(ADD(sp, 6));	// 31116 add     sp, 6 ;~ 0FBC:1F65
cs=0xfbc;eip=0x001f68; 	T(MOV(ax, offset(dseg,unk_437b4)));	// 31117 mov     ax, offset unk_437B4 ;~ 0FBC:1F68
cs=0xfbc;eip=0x001f6b; 	X(PUSH(ax));	// 31118 push    ax ;~ 0FBC:1F6B
cs=0xfbc;eip=0x001f6c; 	T(MOV(ax, offset(dseg,aexp0_0)));	// 31119 mov     ax, offset aExp0_0 ; "exp0" ;~ 0FBC:1F6C
cs=0xfbc;eip=0x001f6f; 	X(PUSH(ax));	// 31120 push    ax ;~ 0FBC:1F6F
cs=0xfbc;eip=0x001f70; 	X(PUSH(*(dw*)(((db*)&carresptr)+2)));	// 31121 push    word ptr carresptr+2 ;~ 0FBC:1F70
cs=0xfbc;eip=0x001f74; 	X(PUSH(*(dw*)(((db*)&carresptr))));	// 31122 push    word ptr carresptr ;~ 0FBC:1F74
cs=0xfbc;eip=0x001f78; 	J(CALLF(locate_shape_fatal,0));	// 31123 call    locate_shape_fatal ;~ 0FBC:1F78
cs=0xfbc;eip=0x001f7d; 	T(ADD(sp, 6));	// 31124 add     sp, 6 ;~ 0FBC:1F7D
cs=0xfbc;eip=0x001f80; 	X(PUSH(dx));	// 31125 push    dx ;~ 0FBC:1F80
cs=0xfbc;eip=0x001f81; 	X(PUSH(ax));	// 31126 push    ax ;~ 0FBC:1F81
cs=0xfbc;eip=0x001f82; 	J(CALLF(shape3d_init_shape,0));	// 31127 call    shape3d_init_shape ;~ 0FBC:1F82
cs=0xfbc;eip=0x001f87; 	T(ADD(sp, 6));	// 31128 add     sp, 6 ;~ 0FBC:1F87
cs=0xfbc;eip=0x001f8a; 	T(MOV(ax, offset(dseg,unk_437ca)));	// 31129 mov     ax, offset unk_437CA ;~ 0FBC:1F8A
cs=0xfbc;eip=0x001f8d; 	X(PUSH(ax));	// 31130 push    ax ;~ 0FBC:1F8D
cs=0xfbc;eip=0x001f8e; 	T(MOV(ax, offset(dseg,aexp1_0)));	// 31131 mov     ax, offset aExp1_0 ; "exp1" ;~ 0FBC:1F8E
cs=0xfbc;eip=0x001f91; 	X(PUSH(ax));	// 31132 push    ax ;~ 0FBC:1F91
cs=0xfbc;eip=0x001f92; 	X(PUSH(*(dw*)(((db*)&carresptr)+2)));	// 31133 push    word ptr carresptr+2 ;~ 0FBC:1F92
cs=0xfbc;eip=0x001f96; 	X(PUSH(*(dw*)(((db*)&carresptr))));	// 31134 push    word ptr carresptr ;~ 0FBC:1F96
cs=0xfbc;eip=0x001f9a; 	J(CALLF(locate_shape_fatal,0));	// 31135 call    locate_shape_fatal ;~ 0FBC:1F9A
cs=0xfbc;eip=0x001f9f; 	T(ADD(sp, 6));	// 31136 add     sp, 6 ;~ 0FBC:1F9F
cs=0xfbc;eip=0x001fa2; 	X(PUSH(dx));	// 31137 push    dx ;~ 0FBC:1FA2
cs=0xfbc;eip=0x001fa3; 	X(PUSH(ax));	// 31138 push    ax ;~ 0FBC:1FA3
cs=0xfbc;eip=0x001fa4; 	J(CALLF(shape3d_init_shape,0));	// 31139 call    shape3d_init_shape ;~ 0FBC:1FA4
cs=0xfbc;eip=0x001fa9; 	T(ADD(sp, 6));	// 31140 add     sp, 6 ;~ 0FBC:1FA9
cs=0xfbc;eip=0x001fac; 	T(MOV(ax, offset(dseg,unk_437e0)));	// 31141 mov     ax, offset unk_437E0 ;~ 0FBC:1FAC
cs=0xfbc;eip=0x001faf; 	X(PUSH(ax));	// 31142 push    ax ;~ 0FBC:1FAF
cs=0xfbc;eip=0x001fb0; 	T(MOV(ax, offset(dseg,aexp2_0)));	// 31143 mov     ax, offset aExp2_0 ; "exp2" ;~ 0FBC:1FB0
cs=0xfbc;eip=0x001fb3; 	X(PUSH(ax));	// 31144 push    ax ;~ 0FBC:1FB3
cs=0xfbc;eip=0x001fb4; 	X(PUSH(*(dw*)(((db*)&carresptr)+2)));	// 31145 push    word ptr carresptr+2 ;~ 0FBC:1FB4
cs=0xfbc;eip=0x001fb8; 	X(PUSH(*(dw*)(((db*)&carresptr))));	// 31146 push    word ptr carresptr ;~ 0FBC:1FB8
cs=0xfbc;eip=0x001fbc; 	J(CALLF(locate_shape_fatal,0));	// 31147 call    locate_shape_fatal ;~ 0FBC:1FBC
cs=0xfbc;eip=0x001fc1; 	T(ADD(sp, 6));	// 31148 add     sp, 6 ;~ 0FBC:1FC1
cs=0xfbc;eip=0x001fc4; 	X(PUSH(dx));	// 31149 push    dx ;~ 0FBC:1FC4
cs=0xfbc;eip=0x001fc5; 	X(PUSH(ax));	// 31150 push    ax ;~ 0FBC:1FC5
cs=0xfbc;eip=0x001fc6; 	J(CALLF(shape3d_init_shape,0));	// 31151 call    shape3d_init_shape ;~ 0FBC:1FC6
cs=0xfbc;eip=0x001fcb; 	T(ADD(sp, 6));	// 31152 add     sp, 6 ;~ 0FBC:1FCB
cs=0xfbc;eip=0x001fce; 	T(MOV(ax, offset(dseg,unk_437f6)));	// 31153 mov     ax, offset unk_437F6 ;~ 0FBC:1FCE
cs=0xfbc;eip=0x001fd1; 	X(PUSH(ax));	// 31154 push    ax ;~ 0FBC:1FD1
cs=0xfbc;eip=0x001fd2; 	T(MOV(ax, offset(dseg,aexp3_0)));	// 31155 mov     ax, offset aExp3_0 ; "exp3" ;~ 0FBC:1FD2
cs=0xfbc;eip=0x001fd5; 	X(PUSH(ax));	// 31156 push    ax ;~ 0FBC:1FD5
cs=0xfbc;eip=0x001fd6; 	X(PUSH(*(dw*)(((db*)&carresptr)+2)));	// 31157 push    word ptr carresptr+2 ;~ 0FBC:1FD6
cs=0xfbc;eip=0x001fda; 	X(PUSH(*(dw*)(((db*)&carresptr))));	// 31158 push    word ptr carresptr ;~ 0FBC:1FDA
cs=0xfbc;eip=0x001fde; 	J(CALLF(locate_shape_fatal,0));	// 31159 call    locate_shape_fatal ;~ 0FBC:1FDE
cs=0xfbc;eip=0x001fe3; 	T(ADD(sp, 6));	// 31160 add     sp, 6 ;~ 0FBC:1FE3
cs=0xfbc;eip=0x001fe6; 	X(PUSH(dx));	// 31161 push    dx ;~ 0FBC:1FE6
cs=0xfbc;eip=0x001fe7; 	X(PUSH(ax));	// 31162 push    ax ;~ 0FBC:1FE7
cs=0xfbc;eip=0x001fe8; 	J(CALLF(shape3d_init_shape,0));	// 31163 call    shape3d_init_shape ;~ 0FBC:1FE8
cs=0xfbc;eip=0x001fed; 	T(ADD(sp, 6));	// 31164 add     sp, 6 ;~ 0FBC:1FED
cs=0xfbc;eip=0x001ff0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 31165 mov     bx, [bp+arg_2] ;~ 0FBC:1FF0
cs=0xfbc;eip=0x001ff3; 	T(MOV(al, *(raddr(ds,bx))));	// 31166 mov     al, [bx] ;~ 0FBC:1FF3
cs=0xfbc;eip=0x001ff5; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 31167 mov     [bp+var_10], al ;~ 0FBC:1FF5
cs=0xfbc;eip=0x001ff8; 	T(CMP(al, 0x0FF));	// 31168 cmp     al, 0FFh ;~ 0FBC:1FF8
cs=0xfbc;eip=0x001ffa; 	J(JNZ(loc_2019f));	// 31169 jnz     short loc_2019F ;~ 0FBC:1FFA
cs=0xfbc;eip=0x001ffc; 	J(JMP(loc_2042a));	// 31170 jmp     loc_2042A ;~ 0FBC:1FFC
loc_2019f:
	// 6419 
cs=0xfbc;eip=0x001fff; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 31174 mov     bx, [bp+arg_0] ;~ 0FBC:1FFF
cs=0xfbc;eip=0x002002; 	T(CMP(*(raddr(ds,bx)), al));	// 31175 cmp     [bx], al ;~ 0FBC:2002
cs=0xfbc;eip=0x002004; 	J(JZ(loc_201a9));	// 31176 jz      short loc_201A9 ;~ 0FBC:2004
cs=0xfbc;eip=0x002006; 	J(JMP(loc_2022a));	// 31177 jmp     loc_2022A ;~ 0FBC:2006
loc_201a9:
	// 6420 
cs=0xfbc;eip=0x002009; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 31181 mov     di, [bp+arg_2] ;~ 0FBC:2009
cs=0xfbc;eip=0x00200c; 	T(MOV(al, *(raddr(ds,di+1))));	// 31182 mov     al, [di+1] ;~ 0FBC:200C
cs=0xfbc;eip=0x00200f; 	T(CMP(*(raddr(ds,bx+1)), al));	// 31183 cmp     [bx+1], al ;~ 0FBC:200F
cs=0xfbc;eip=0x002012; 	J(JNZ(loc_2022a));	// 31184 jnz     short loc_2022A ;~ 0FBC:2012
cs=0xfbc;eip=0x002014; 	T(MOV(al, *(raddr(ds,di+2))));	// 31185 mov     al, [di+2] ;~ 0FBC:2014
cs=0xfbc;eip=0x002017; 	T(CMP(*(raddr(ds,bx+2)), al));	// 31186 cmp     [bx+2], al ;~ 0FBC:2017
cs=0xfbc;eip=0x00201a; 	J(JNZ(loc_2022a));	// 31187 jnz     short loc_2022A ;~ 0FBC:201A
cs=0xfbc;eip=0x00201c; 	T(MOV(al, *(raddr(ds,di+3))));	// 31188 mov     al, [di+3] ;~ 0FBC:201C
cs=0xfbc;eip=0x00201f; 	T(CMP(*(raddr(ds,bx+3)), al));	// 31189 cmp     [bx+3], al ;~ 0FBC:201F
cs=0xfbc;eip=0x002022; 	J(JNZ(loc_2022a));	// 31190 jnz     short loc_2022A ;~ 0FBC:2022
cs=0xfbc;eip=0x002024; 	X(PUSH(*(dw*)(((db*)&carresptr)+2)));	// 31191 push    word ptr carresptr+2 ;~ 0FBC:2024
cs=0xfbc;eip=0x002028; 	X(PUSH(*(dw*)(((db*)&carresptr))));	// 31192 push    word ptr carresptr ;~ 0FBC:2028
cs=0xfbc;eip=0x00202c; 	J(CALLF(mmgr_get_chunk_size_bytes,0));	// 31193 call    mmgr_get_chunk_size_bytes ;~ 0FBC:202C
cs=0xfbc;eip=0x002031; 	T(ADD(sp, 4));	// 31194 add     sp, 4 ;~ 0FBC:2031
cs=0xfbc;eip=0x002034; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 31195 mov     [bp+var_6], ax ;~ 0FBC:2034
cs=0xfbc;eip=0x002037; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 31196 mov     [bp+var_4], dx ;~ 0FBC:2037
cs=0xfbc;eip=0x00203a; 	X(PUSH(dx));	// 31197 push    dx ;~ 0FBC:203A
cs=0xfbc;eip=0x00203b; 	X(PUSH(ax));	// 31198 push    ax ;~ 0FBC:203B
cs=0xfbc;eip=0x00203c; 	T(MOV(ax, offset(dseg,acar2_0)));	// 31199 mov     ax, offset aCar2_0 ; "car2" ;~ 0FBC:203C
cs=0xfbc;eip=0x00203f; 	X(PUSH(ax));	// 31200 push    ax ;~ 0FBC:203F
cs=0xfbc;eip=0x002040; 	J(CALLF(mmgr_alloc_resbytes,0));	// 31201 call    mmgr_alloc_resbytes ;~ 0FBC:2040
cs=0xfbc;eip=0x002045; 	T(ADD(sp, 6));	// 31202 add     sp, 6 ;~ 0FBC:2045
cs=0xfbc;eip=0x002048; 	X(MOV(*(dw*)(((db*)&car2resptr)), ax));	// 31203 mov     word ptr car2resptr, ax ;~ 0FBC:2048
cs=0xfbc;eip=0x00204b; 	X(MOV(*(dw*)(((db*)&car2resptr)+2), dx));	// 31204 mov     word ptr car2resptr+2, dx ;~ 0FBC:204B
cs=0xfbc;eip=0x00204f; 	T(SUB(ax, ax));	// 31205 sub     ax, ax ;~ 0FBC:204F
cs=0xfbc;eip=0x002051; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 31206 mov     [bp+var_8], ax ;~ 0FBC:2051
cs=0xfbc;eip=0x002054; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 31207 mov     [bp+var_A], ax ;~ 0FBC:2054
cs=0xfbc;eip=0x002057; 	J(JMP(loc_20204));	// 31208 jmp     short loc_20204 ;~ 0FBC:2057
loc_201fc:
	// 6421 
cs=0xfbc;eip=0x00205c; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 1));	// 31214 add     [bp+var_A], 1 ;~ 0FBC:205C
cs=0xfbc;eip=0x002060; 	X(ADC(*(dw*)(raddr(ss,bp+var_8)), 0));	// 31215 adc     [bp+var_8], 0 ;~ 0FBC:2060
loc_20204:
	// 6422 
cs=0xfbc;eip=0x002064; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 31218 mov     ax, [bp+var_6] ;~ 0FBC:2064
cs=0xfbc;eip=0x002067; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 31219 mov     dx, [bp+var_4] ;~ 0FBC:2067
cs=0xfbc;eip=0x00206a; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), dx));	// 31220 cmp     [bp+var_8], dx ;~ 0FBC:206A
cs=0xfbc;eip=0x00206d; 	J(JG(loc_20257));	// 31221 jg      short loc_20257 ;~ 0FBC:206D
cs=0xfbc;eip=0x00206f; 	J(JL(loc_20216));	// 31222 jl      short loc_20216 ;~ 0FBC:206F
cs=0xfbc;eip=0x002071; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), ax));	// 31223 cmp     [bp+var_A], ax ;~ 0FBC:2071
cs=0xfbc;eip=0x002074; 	J(JNC(loc_20257));	// 31224 jnb     short loc_20257 ;~ 0FBC:2074
loc_20216:
	// 6423 
cs=0xfbc;eip=0x002076; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 31227 mov     bx, [bp+var_A] ;~ 0FBC:2076
cs=0xfbc;eip=0x002079; 	T(LES(di, carresptr));	// 31228 les     di, carresptr ;~ 0FBC:2079
cs=0xfbc;eip=0x00207d; 	T(MOV(al, *(raddr(es,bx+di))));	// 31229 mov     al, es:[bx+di] ;~ 0FBC:207D
cs=0xfbc;eip=0x002080; 	T(LES(di, car2resptr));	// 31230 les     di, car2resptr ;~ 0FBC:2080
cs=0xfbc;eip=0x002084; 	X(MOV(*(raddr(es,bx+di)), al));	// 31231 mov     es:[bx+di], al ;~ 0FBC:2084
cs=0xfbc;eip=0x002087; 	J(JMP(loc_201fc));	// 31232 jmp     short loc_201FC ;~ 0FBC:2087
loc_2022a:
	// 6424 
cs=0xfbc;eip=0x00208a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 31238 mov     bx, [bp+arg_2] ;~ 0FBC:208A
cs=0xfbc;eip=0x00208d; 	T(MOV(al, *(raddr(ds,bx))));	// 31239 mov     al, [bx] ;~ 0FBC:208D
cs=0xfbc;eip=0x00208f; 	X(MOV(byte_3e70c, al));	// 31240 mov     byte_3E70C, al ;~ 0FBC:208F
cs=0xfbc;eip=0x002092; 	T(MOV(al, *(raddr(ds,bx+1))));	// 31241 mov     al, [bx+1] ;~ 0FBC:2092
cs=0xfbc;eip=0x002095; 	X(MOV(byte_3e70d, al));	// 31242 mov     byte_3E70D, al ;~ 0FBC:2095
cs=0xfbc;eip=0x002098; 	T(MOV(al, *(raddr(ds,bx+2))));	// 31243 mov     al, [bx+2] ;~ 0FBC:2098
cs=0xfbc;eip=0x00209b; 	X(MOV(byte_3e70e, al));	// 31244 mov     byte_3E70E, al ;~ 0FBC:209B
cs=0xfbc;eip=0x00209e; 	T(MOV(al, *(raddr(ds,bx+3))));	// 31245 mov     al, [bx+3] ;~ 0FBC:209E
cs=0xfbc;eip=0x0020a1; 	X(MOV(byte_3e70f, al));	// 31246 mov     byte_3E70F, al ;~ 0FBC:20A1
cs=0xfbc;eip=0x0020a4; 	T(MOV(ax, offset(dseg,astxxx)));	// 31247 mov     ax, offset aStxxx ;~ 0FBC:20A4
cs=0xfbc;eip=0x0020a7; 	X(PUSH(ax));	// 31248 push    ax ;~ 0FBC:20A7
cs=0xfbc;eip=0x0020a8; 	J(CALLF(file_load_3dres,0));	// 31249 call    file_load_3dres ;~ 0FBC:20A8
cs=0xfbc;eip=0x0020ad; 	T(ADD(sp, 2));	// 31250 add     sp, 2 ;~ 0FBC:20AD
cs=0xfbc;eip=0x0020b0; 	X(MOV(*(dw*)(((db*)&car2resptr)), ax));	// 31251 mov     word ptr car2resptr, ax ;~ 0FBC:20B0
cs=0xfbc;eip=0x0020b3; 	X(MOV(*(dw*)(((db*)&car2resptr)+2), dx));	// 31252 mov     word ptr car2resptr+2, dx ;~ 0FBC:20B3
loc_20257:
	// 6425 
cs=0xfbc;eip=0x0020b7; 	T(MOV(ax, offset(dseg,unk_4387a)));	// 31256 mov     ax, offset unk_4387A ;~ 0FBC:20B7
cs=0xfbc;eip=0x0020ba; 	X(PUSH(ax));	// 31257 push    ax ;~ 0FBC:20BA
cs=0xfbc;eip=0x0020bb; 	T(MOV(ax, offset(dseg,acar0_0)));	// 31258 mov     ax, offset aCar0_0 ; "car0" ;~ 0FBC:20BB
cs=0xfbc;eip=0x0020be; 	X(PUSH(ax));	// 31259 push    ax ;~ 0FBC:20BE
cs=0xfbc;eip=0x0020bf; 	X(PUSH(*(dw*)(((db*)&car2resptr)+2)));	// 31260 push    word ptr car2resptr+2 ;~ 0FBC:20BF
cs=0xfbc;eip=0x0020c3; 	X(PUSH(*(dw*)(((db*)&car2resptr))));	// 31261 push    word ptr car2resptr ;~ 0FBC:20C3
cs=0xfbc;eip=0x0020c7; 	J(CALLF(locate_shape_fatal,0));	// 31262 call    locate_shape_fatal ;~ 0FBC:20C7
cs=0xfbc;eip=0x0020cc; 	T(ADD(sp, 6));	// 31263 add     sp, 6 ;~ 0FBC:20CC
cs=0xfbc;eip=0x0020cf; 	X(PUSH(dx));	// 31264 push    dx ;~ 0FBC:20CF
cs=0xfbc;eip=0x0020d0; 	X(PUSH(ax));	// 31265 push    ax ;~ 0FBC:20D0
cs=0xfbc;eip=0x0020d1; 	J(CALLF(shape3d_init_shape,0));	// 31266 call    shape3d_init_shape ;~ 0FBC:20D1
cs=0xfbc;eip=0x0020d6; 	T(ADD(sp, 6));	// 31267 add     sp, 6 ;~ 0FBC:20D6
cs=0xfbc;eip=0x0020d9; 	T(MOV(ax, offset(dseg,unk_438a6)));	// 31268 mov     ax, offset unk_438A6 ;~ 0FBC:20D9
cs=0xfbc;eip=0x0020dc; 	X(PUSH(ax));	// 31269 push    ax ;~ 0FBC:20DC
cs=0xfbc;eip=0x0020dd; 	T(MOV(ax, offset(dseg,acar1_0)));	// 31270 mov     ax, offset aCar1_0 ; "car1" ;~ 0FBC:20DD
cs=0xfbc;eip=0x0020e0; 	X(PUSH(ax));	// 31271 push    ax ;~ 0FBC:20E0
cs=0xfbc;eip=0x0020e1; 	X(PUSH(*(dw*)(((db*)&car2resptr)+2)));	// 31272 push    word ptr car2resptr+2 ;~ 0FBC:20E1
cs=0xfbc;eip=0x0020e5; 	X(PUSH(*(dw*)(((db*)&car2resptr))));	// 31273 push    word ptr car2resptr ;~ 0FBC:20E5
cs=0xfbc;eip=0x0020e9; 	J(CALLF(locate_shape_fatal,0));	// 31274 call    locate_shape_fatal ;~ 0FBC:20E9
cs=0xfbc;eip=0x0020ee; 	T(ADD(sp, 6));	// 31275 add     sp, 6 ;~ 0FBC:20EE
cs=0xfbc;eip=0x0020f1; 	X(PUSH(dx));	// 31276 push    dx ;~ 0FBC:20F1
cs=0xfbc;eip=0x0020f2; 	X(PUSH(ax));	// 31277 push    ax ;~ 0FBC:20F2
cs=0xfbc;eip=0x0020f3; 	J(CALLF(shape3d_init_shape,0));	// 31278 call    shape3d_init_shape ;~ 0FBC:20F3
cs=0xfbc;eip=0x0020f8; 	T(ADD(sp, 6));	// 31279 add     sp, 6 ;~ 0FBC:20F8
cs=0xfbc;eip=0x0020fb; 	T(MOV(ax, word_438a8));	// 31280 mov     ax, word_438A8 ;~ 0FBC:20FB
cs=0xfbc;eip=0x0020fe; 	T(MOV(dx, word_438aa));	// 31281 mov     dx, word_438AA ;~ 0FBC:20FE
cs=0xfbc;eip=0x002102; 	T(ADD(ax, 0x30));	// 31282 add     ax, 30h ; '0' ;~ 0FBC:2102
cs=0xfbc;eip=0x002105; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e))), ax));	// 31283 mov     word ptr [bp+var_E], ax ;~ 0FBC:2105
cs=0xfbc;eip=0x002108; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e +2))), dx));	// 31284 mov     word ptr [bp+var_E+2], dx ;~ 0FBC:2108
cs=0xfbc;eip=0x00210b; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31285 les     bx, [bp+var_E] ;~ 0FBC:210B
cs=0xfbc;eip=0x00210e; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 31286 mov     ax, es:[bx+4] ;~ 0FBC:210E
cs=0xfbc;eip=0x002112; 	X(MOV(word_42d08, ax));	// 31287 mov     word_42D08, ax ;~ 0FBC:2112
cs=0xfbc;eip=0x002115; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 31288 mov     ax, es:[bx+12h] ;~ 0FBC:2115
cs=0xfbc;eip=0x002119; 	T(ADD(ax, *(dw*)(raddr(es,bx+0))));	// 31289 add     ax, es:[bx+0] ;~ 0FBC:2119
cs=0xfbc;eip=0x00211c; 	T(SAR(ax, 1));	// 31290 sar     ax, 1 ;~ 0FBC:211C
cs=0xfbc;eip=0x00211e; 	X(MOV(oppcarshapevec, ax));	// 31291 mov     oppcarshapevec, ax ;~ 0FBC:211E
cs=0xfbc;eip=0x002121; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x28))));	// 31292 mov     ax, es:[bx+28h] ;~ 0FBC:2121
cs=0xfbc;eip=0x002125; 	X(MOV(word_42d0e, ax));	// 31293 mov     word_42D0E, ax ;~ 0FBC:2125
cs=0xfbc;eip=0x002128; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x24))));	// 31294 mov     ax, es:[bx+24h] ;~ 0FBC:2128
cs=0xfbc;eip=0x00212c; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x36))));	// 31295 add     ax, es:[bx+36h] ;~ 0FBC:212C
cs=0xfbc;eip=0x002130; 	T(SAR(ax, 1));	// 31296 sar     ax, 1 ;~ 0FBC:2130
cs=0xfbc;eip=0x002132; 	X(MOV(oppcarshapevec2, ax));	// 31297 mov     oppcarshapevec2, ax ;~ 0FBC:2132
cs=0xfbc;eip=0x002135; 	T(SUB(si, si));	// 31298 sub     si, si ;~ 0FBC:2135
loc_202d7:
	// 6426 
cs=0xfbc;eip=0x002137; 	T(MOV(ax, si));	// 31301 mov     ax, si ;~ 0FBC:2137
cs=0xfbc;eip=0x002139; 	T(MOV(cx, ax));	// 31302 mov     cx, ax ;~ 0FBC:2139
cs=0xfbc;eip=0x00213b; 	T(SHL(ax, 1));	// 31303 shl     ax, 1 ;~ 0FBC:213B
cs=0xfbc;eip=0x00213d; 	T(ADD(ax, cx));	// 31304 add     ax, cx ;~ 0FBC:213D
cs=0xfbc;eip=0x00213f; 	T(SHL(ax, 1));	// 31305 shl     ax, 1 ;~ 0FBC:213F
cs=0xfbc;eip=0x002141; 	T(MOV(di, ax));	// 31306 mov     di, ax ;~ 0FBC:2141
cs=0xfbc;eip=0x002143; 	T(MOV(ax, oppcarshapevec));	// 31307 mov     ax, oppcarshapevec ;~ 0FBC:2143
cs=0xfbc;eip=0x002146; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31308 les     bx, [bp+var_E] ;~ 0FBC:2146
cs=0xfbc;eip=0x002149; 	T(SUB(ax, *(dw*)(raddr(es,bx+di+0))));	// 31309 sub     ax, es:[bx+di+0] ;~ 0FBC:2149
cs=0xfbc;eip=0x00214c; 	X(MOV(*(dw*)(((db*)&oppcarshapevecs)+di), ax));	// 31310 mov     oppcarshapevecs[di], ax ;~ 0FBC:214C
cs=0xfbc;eip=0x002150; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31311 les     bx, [bp+var_E] ;~ 0FBC:2150
cs=0xfbc;eip=0x002153; 	T(MOV(ax, word_42d08));	// 31312 mov     ax, word_42D08 ;~ 0FBC:2153
cs=0xfbc;eip=0x002156; 	T(SUB(ax, *(dw*)(raddr(es,bx+di+4))));	// 31313 sub     ax, es:[bx+di+4] ;~ 0FBC:2156
cs=0xfbc;eip=0x00215a; 	X(MOV(*(dw*)(((db*)&word_448f8)+di), ax));	// 31314 mov     word_448F8[di], ax ;~ 0FBC:215A
cs=0xfbc;eip=0x00215e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31315 les     bx, [bp+var_E] ;~ 0FBC:215E
cs=0xfbc;eip=0x002161; 	T(MOV(ax, *(dw*)(raddr(es,bx+di+2))));	// 31316 mov     ax, es:[bx+di+2] ;~ 0FBC:2161
cs=0xfbc;eip=0x002165; 	X(MOV(*(dw*)(((db*)&word_448f6)+di), ax));	// 31317 mov     word_448F6[di], ax ;~ 0FBC:2165
cs=0xfbc;eip=0x002169; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31318 les     bx, [bp+var_E] ;~ 0FBC:2169
cs=0xfbc;eip=0x00216c; 	T(MOV(ax, oppcarshapevec2));	// 31319 mov     ax, oppcarshapevec2 ;~ 0FBC:216C
cs=0xfbc;eip=0x00216f; 	T(SUB(ax, *(dw*)(raddr(es,bx+di+0x24))));	// 31320 sub     ax, es:[bx+di+24h] ;~ 0FBC:216F
cs=0xfbc;eip=0x002173; 	X(MOV(*(dw*)(((db*)&oppcarshapevecs2)+di), ax));	// 31321 mov     oppcarshapevecs2[di], ax ;~ 0FBC:2173
cs=0xfbc;eip=0x002177; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31322 les     bx, [bp+var_E] ;~ 0FBC:2177
cs=0xfbc;eip=0x00217a; 	T(MOV(ax, word_42d0e));	// 31323 mov     ax, word_42D0E ;~ 0FBC:217A
cs=0xfbc;eip=0x00217d; 	T(SUB(ax, *(dw*)(raddr(es,bx+di+0x28))));	// 31324 sub     ax, es:[bx+di+28h] ;~ 0FBC:217D
cs=0xfbc;eip=0x002181; 	X(MOV(*(dw*)(((db*)&word_4491c)+di), ax));	// 31325 mov     word_4491C[di], ax ;~ 0FBC:2181
cs=0xfbc;eip=0x002185; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31326 les     bx, [bp+var_E] ;~ 0FBC:2185
cs=0xfbc;eip=0x002188; 	T(MOV(ax, *(dw*)(raddr(es,bx+di+0x26))));	// 31327 mov     ax, es:[bx+di+26h] ;~ 0FBC:2188
cs=0xfbc;eip=0x00218c; 	X(MOV(*(dw*)(((db*)&word_4491a)+di), ax));	// 31328 mov     word_4491A[di], ax ;~ 0FBC:218C
cs=0xfbc;eip=0x002190; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31329 les     bx, [bp+var_E] ;~ 0FBC:2190
cs=0xfbc;eip=0x002193; 	X(PUSH(si));	// 31330 push    si ;~ 0FBC:2193
cs=0xfbc;eip=0x002194; 	X(PUSH(di));	// 31331 push    di ;~ 0FBC:2194
cs=0xfbc;eip=0x002195; 	T(si = bx+di+0x48);	// 31332 lea     si, [bx+di+48h] ;~ 0FBC:2195
cs=0xfbc;eip=0x002198; 	T(di = offset(dseg,oppcarshapevecs3)+di);	// 31333 lea     di, oppcarshapevecs3[di] ;~ 0FBC:2198
cs=0xfbc;eip=0x00219c; 	X(PUSH(ds));	// 31334 push    ds ;~ 0FBC:219C
cs=0xfbc;eip=0x00219d; 	X(PUSH(ds));	// 31335 push    ds ;~ 0FBC:219D
cs=0xfbc;eip=0x00219e; 	X(PUSH(es));	// 31336 push    es ;~ 0FBC:219E
cs=0xfbc;eip=0x00219f; 	X(POP(ds));	// 31337 pop     ds ;~ 0FBC:219F
cs=0xfbc;eip=0x0021a0; 	X(POP(es));	// 31338 pop     es ;~ 0FBC:21A0
cs=0xfbc;eip=0x0021a1; 	X(MOVSW);	// 31339 movsw ;~ 0FBC:21A1
cs=0xfbc;eip=0x0021a2; 	X(MOVSW);	// 31340 movsw ;~ 0FBC:21A2
cs=0xfbc;eip=0x0021a3; 	X(MOVSW);	// 31341 movsw ;~ 0FBC:21A3
cs=0xfbc;eip=0x0021a4; 	X(POP(ds));	// 31342 pop     ds ;~ 0FBC:21A4
cs=0xfbc;eip=0x0021a5; 	X(POP(di));	// 31343 pop     di ;~ 0FBC:21A5
cs=0xfbc;eip=0x0021a6; 	X(POP(si));	// 31344 pop     si ;~ 0FBC:21A6
cs=0xfbc;eip=0x0021a7; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31345 les     bx, [bp+var_E] ;~ 0FBC:21A7
cs=0xfbc;eip=0x0021aa; 	X(PUSH(si));	// 31346 push    si ;~ 0FBC:21AA
cs=0xfbc;eip=0x0021ab; 	X(PUSH(di));	// 31347 push    di ;~ 0FBC:21AB
cs=0xfbc;eip=0x0021ac; 	T(si = bx+di+0x6C);	// 31348 lea     si, [bx+di+6Ch] ;~ 0FBC:21AC
cs=0xfbc;eip=0x0021af; 	T(di = offset(dseg,oppcarshapevecs4)+di);	// 31349 lea     di, oppcarshapevecs4[di] ;~ 0FBC:21AF
cs=0xfbc;eip=0x0021b3; 	X(PUSH(ds));	// 31350 push    ds ;~ 0FBC:21B3
cs=0xfbc;eip=0x0021b4; 	X(PUSH(ds));	// 31351 push    ds ;~ 0FBC:21B4
cs=0xfbc;eip=0x0021b5; 	X(PUSH(es));	// 31352 push    es ;~ 0FBC:21B5
cs=0xfbc;eip=0x0021b6; 	X(POP(ds));	// 31353 pop     ds ;~ 0FBC:21B6
cs=0xfbc;eip=0x0021b7; 	X(POP(es));	// 31354 pop     es ;~ 0FBC:21B7
cs=0xfbc;eip=0x0021b8; 	X(MOVSW);	// 31355 movsw ;~ 0FBC:21B8
cs=0xfbc;eip=0x0021b9; 	X(MOVSW);	// 31356 movsw ;~ 0FBC:21B9
cs=0xfbc;eip=0x0021ba; 	X(MOVSW);	// 31357 movsw ;~ 0FBC:21BA
cs=0xfbc;eip=0x0021bb; 	X(POP(ds));	// 31358 pop     ds ;~ 0FBC:21BB
cs=0xfbc;eip=0x0021bc; 	X(POP(di));	// 31359 pop     di ;~ 0FBC:21BC
cs=0xfbc;eip=0x0021bd; 	X(POP(si));	// 31360 pop     si ;~ 0FBC:21BD
cs=0xfbc;eip=0x0021be; 	T(INC(si));	// 31361 inc     si ;~ 0FBC:21BE
cs=0xfbc;eip=0x0021bf; 	T(CMP(si, 6));	// 31362 cmp     si, 6 ;~ 0FBC:21BF
cs=0xfbc;eip=0x0021c2; 	J(JGE(loc_20367));	// 31363 jge     short loc_20367 ;~ 0FBC:21C2
cs=0xfbc;eip=0x0021c4; 	J(JMP(loc_202d7));	// 31364 jmp     loc_202D7 ;~ 0FBC:21C4
loc_20367:
	// 6427 
cs=0xfbc;eip=0x0021c7; 	T(SUB(si, si));	// 31368 sub     si, si ;~ 0FBC:21C7
loc_20369:
	// 6428 
cs=0xfbc;eip=0x0021c9; 	T(MOV(bx, si));	// 31371 mov     bx, si ;~ 0FBC:21C9
cs=0xfbc;eip=0x0021cb; 	T(SHL(bx, 1));	// 31372 shl     bx, 1 ;~ 0FBC:21CB
cs=0xfbc;eip=0x0021cd; 	X(MOV(*(dw*)(((db*)&word_4448a)+bx), 0));	// 31373 mov     word_4448A[bx], 0 ;~ 0FBC:21CD
cs=0xfbc;eip=0x0021d3; 	T(INC(si));	// 31374 inc     si ;~ 0FBC:21D3
cs=0xfbc;eip=0x0021d4; 	T(CMP(si, 5));	// 31375 cmp     si, 5 ;~ 0FBC:21D4
cs=0xfbc;eip=0x0021d7; 	J(JL(loc_20369));	// 31376 jl      short loc_20369 ;~ 0FBC:21D7
cs=0xfbc;eip=0x0021d9; 	T(MOV(ax, offset(dseg,unk_438d2)));	// 31377 mov     ax, offset unk_438D2 ;~ 0FBC:21D9
cs=0xfbc;eip=0x0021dc; 	X(PUSH(ax));	// 31378 push    ax ;~ 0FBC:21DC
cs=0xfbc;eip=0x0021dd; 	T(MOV(ax, offset(dseg,acar2_1)));	// 31379 mov     ax, offset aCar2_1 ; "car2" ;~ 0FBC:21DD
cs=0xfbc;eip=0x0021e0; 	X(PUSH(ax));	// 31380 push    ax ;~ 0FBC:21E0
cs=0xfbc;eip=0x0021e1; 	X(PUSH(*(dw*)(((db*)&car2resptr)+2)));	// 31381 push    word ptr car2resptr+2 ;~ 0FBC:21E1
cs=0xfbc;eip=0x0021e5; 	X(PUSH(*(dw*)(((db*)&car2resptr))));	// 31382 push    word ptr car2resptr ;~ 0FBC:21E5
cs=0xfbc;eip=0x0021e9; 	J(CALLF(locate_shape_fatal,0));	// 31383 call    locate_shape_fatal ;~ 0FBC:21E9
cs=0xfbc;eip=0x0021ee; 	T(ADD(sp, 6));	// 31384 add     sp, 6 ;~ 0FBC:21EE
cs=0xfbc;eip=0x0021f1; 	X(PUSH(dx));	// 31385 push    dx ;~ 0FBC:21F1
cs=0xfbc;eip=0x0021f2; 	X(PUSH(ax));	// 31386 push    ax ;~ 0FBC:21F2
cs=0xfbc;eip=0x0021f3; 	J(CALLF(shape3d_init_shape,0));	// 31387 call    shape3d_init_shape ;~ 0FBC:21F3
cs=0xfbc;eip=0x0021f8; 	T(ADD(sp, 6));	// 31388 add     sp, 6 ;~ 0FBC:21F8
cs=0xfbc;eip=0x0021fb; 	T(MOV(ax, offset(dseg,unk_4380c)));	// 31389 mov     ax, offset unk_4380C ;~ 0FBC:21FB
cs=0xfbc;eip=0x0021fe; 	X(PUSH(ax));	// 31390 push    ax ;~ 0FBC:21FE
cs=0xfbc;eip=0x0021ff; 	T(MOV(ax, offset(dseg,aexp0_1)));	// 31391 mov     ax, offset aExp0_1 ; "exp0" ;~ 0FBC:21FF
cs=0xfbc;eip=0x002202; 	X(PUSH(ax));	// 31392 push    ax ;~ 0FBC:2202
cs=0xfbc;eip=0x002203; 	X(PUSH(*(dw*)(((db*)&car2resptr)+2)));	// 31393 push    word ptr car2resptr+2 ;~ 0FBC:2203
cs=0xfbc;eip=0x002207; 	X(PUSH(*(dw*)(((db*)&car2resptr))));	// 31394 push    word ptr car2resptr ;~ 0FBC:2207
cs=0xfbc;eip=0x00220b; 	J(CALLF(locate_shape_fatal,0));	// 31395 call    locate_shape_fatal ;~ 0FBC:220B
cs=0xfbc;eip=0x002210; 	T(ADD(sp, 6));	// 31396 add     sp, 6 ;~ 0FBC:2210
cs=0xfbc;eip=0x002213; 	X(PUSH(dx));	// 31397 push    dx ;~ 0FBC:2213
cs=0xfbc;eip=0x002214; 	X(PUSH(ax));	// 31398 push    ax ;~ 0FBC:2214
cs=0xfbc;eip=0x002215; 	J(CALLF(shape3d_init_shape,0));	// 31399 call    shape3d_init_shape ;~ 0FBC:2215
cs=0xfbc;eip=0x00221a; 	T(ADD(sp, 6));	// 31400 add     sp, 6 ;~ 0FBC:221A
cs=0xfbc;eip=0x00221d; 	T(MOV(ax, offset(dseg,unk_43822)));	// 31401 mov     ax, offset unk_43822 ;~ 0FBC:221D
cs=0xfbc;eip=0x002220; 	X(PUSH(ax));	// 31402 push    ax ;~ 0FBC:2220
cs=0xfbc;eip=0x002221; 	T(MOV(ax, offset(dseg,aexp1_1)));	// 31403 mov     ax, offset aExp1_1 ; "exp1" ;~ 0FBC:2221
cs=0xfbc;eip=0x002224; 	X(PUSH(ax));	// 31404 push    ax ;~ 0FBC:2224
cs=0xfbc;eip=0x002225; 	X(PUSH(*(dw*)(((db*)&car2resptr)+2)));	// 31405 push    word ptr car2resptr+2 ;~ 0FBC:2225
cs=0xfbc;eip=0x002229; 	X(PUSH(*(dw*)(((db*)&car2resptr))));	// 31406 push    word ptr car2resptr ;~ 0FBC:2229
cs=0xfbc;eip=0x00222d; 	J(CALLF(locate_shape_fatal,0));	// 31407 call    locate_shape_fatal ;~ 0FBC:222D
cs=0xfbc;eip=0x002232; 	T(ADD(sp, 6));	// 31408 add     sp, 6 ;~ 0FBC:2232
cs=0xfbc;eip=0x002235; 	X(PUSH(dx));	// 31409 push    dx ;~ 0FBC:2235
cs=0xfbc;eip=0x002236; 	X(PUSH(ax));	// 31410 push    ax ;~ 0FBC:2236
cs=0xfbc;eip=0x002237; 	J(CALLF(shape3d_init_shape,0));	// 31411 call    shape3d_init_shape ;~ 0FBC:2237
cs=0xfbc;eip=0x00223c; 	T(ADD(sp, 6));	// 31412 add     sp, 6 ;~ 0FBC:223C
cs=0xfbc;eip=0x00223f; 	T(MOV(ax, offset(dseg,unk_43838)));	// 31413 mov     ax, offset unk_43838 ;~ 0FBC:223F
cs=0xfbc;eip=0x002242; 	X(PUSH(ax));	// 31414 push    ax ;~ 0FBC:2242
cs=0xfbc;eip=0x002243; 	T(MOV(ax, offset(dseg,aexp2_1)));	// 31415 mov     ax, offset aExp2_1 ; "exp2" ;~ 0FBC:2243
cs=0xfbc;eip=0x002246; 	X(PUSH(ax));	// 31416 push    ax ;~ 0FBC:2246
cs=0xfbc;eip=0x002247; 	X(PUSH(*(dw*)(((db*)&car2resptr)+2)));	// 31417 push    word ptr car2resptr+2 ;~ 0FBC:2247
cs=0xfbc;eip=0x00224b; 	X(PUSH(*(dw*)(((db*)&car2resptr))));	// 31418 push    word ptr car2resptr ;~ 0FBC:224B
cs=0xfbc;eip=0x00224f; 	J(CALLF(locate_shape_fatal,0));	// 31419 call    locate_shape_fatal ;~ 0FBC:224F
cs=0xfbc;eip=0x002254; 	T(ADD(sp, 6));	// 31420 add     sp, 6 ;~ 0FBC:2254
cs=0xfbc;eip=0x002257; 	X(PUSH(dx));	// 31421 push    dx ;~ 0FBC:2257
cs=0xfbc;eip=0x002258; 	X(PUSH(ax));	// 31422 push    ax ;~ 0FBC:2258
cs=0xfbc;eip=0x002259; 	J(CALLF(shape3d_init_shape,0));	// 31423 call    shape3d_init_shape ;~ 0FBC:2259
cs=0xfbc;eip=0x00225e; 	T(ADD(sp, 6));	// 31424 add     sp, 6 ;~ 0FBC:225E
cs=0xfbc;eip=0x002261; 	T(MOV(ax, offset(dseg,unk_4384e)));	// 31425 mov     ax, offset unk_4384E ;~ 0FBC:2261
cs=0xfbc;eip=0x002264; 	X(PUSH(ax));	// 31426 push    ax ;~ 0FBC:2264
cs=0xfbc;eip=0x002265; 	T(MOV(ax, offset(dseg,aexp3_1)));	// 31427 mov     ax, offset aExp3_1 ; "exp3" ;~ 0FBC:2265
cs=0xfbc;eip=0x002268; 	X(PUSH(ax));	// 31428 push    ax ;~ 0FBC:2268
cs=0xfbc;eip=0x002269; 	X(PUSH(*(dw*)(((db*)&car2resptr)+2)));	// 31429 push    word ptr car2resptr+2 ;~ 0FBC:2269
cs=0xfbc;eip=0x00226d; 	X(PUSH(*(dw*)(((db*)&car2resptr))));	// 31430 push    word ptr car2resptr ;~ 0FBC:226D
cs=0xfbc;eip=0x002271; 	J(CALLF(locate_shape_fatal,0));	// 31431 call    locate_shape_fatal ;~ 0FBC:2271
cs=0xfbc;eip=0x002276; 	T(ADD(sp, 6));	// 31432 add     sp, 6 ;~ 0FBC:2276
cs=0xfbc;eip=0x002279; 	X(PUSH(dx));	// 31433 push    dx ;~ 0FBC:2279
cs=0xfbc;eip=0x00227a; 	X(PUSH(ax));	// 31434 push    ax ;~ 0FBC:227A
cs=0xfbc;eip=0x00227b; 	J(CALLF(shape3d_init_shape,0));	// 31435 call    shape3d_init_shape ;~ 0FBC:227B
cs=0xfbc;eip=0x002280; 	T(ADD(sp, 6));	// 31436 add     sp, 6 ;~ 0FBC:2280
cs=0xfbc;eip=0x002283; 	X(POP(si));	// 31437 pop     si ;~ 0FBC:2283
cs=0xfbc;eip=0x002284; 	X(POP(di));	// 31438 pop     di ;~ 0FBC:2284
cs=0xfbc;eip=0x002285; 	T(MOV(sp, bp));	// 31439 mov     sp, bp ;~ 0FBC:2285
cs=0xfbc;eip=0x002287; 	X(POP(bp));	// 31440 pop     bp ;~ 0FBC:2287
cs=0xfbc;eip=0x002288; 	J(RETF(0));	// 31441 retf ;~ 0FBC:2288
loc_2042a:
	// 6429 
cs=0xfbc;eip=0x00228a; 	T(SUB(ax, ax));	// 31446 sub     ax, ax ;~ 0FBC:228A
cs=0xfbc;eip=0x00228c; 	X(MOV(*(dw*)(((db*)&car2resptr)+2), ax));	// 31447 mov     word ptr car2resptr+2, ax ;~ 0FBC:228C
cs=0xfbc;eip=0x00228f; 	X(MOV(*(dw*)(((db*)&car2resptr)), ax));	// 31448 mov     word ptr car2resptr, ax ;~ 0FBC:228F
cs=0xfbc;eip=0x002292; 	X(POP(si));	// 31449 pop     si ;~ 0FBC:2292
cs=0xfbc;eip=0x002293; 	X(POP(di));	// 31450 pop     di ;~ 0FBC:2293
cs=0xfbc;eip=0x002294; 	T(MOV(sp, bp));	// 31451 mov     sp, bp ;~ 0FBC:2294
cs=0xfbc;eip=0x002296; 	X(POP(bp));	// 31452 pop     bp ;~ 0FBC:2296
cs=0xfbc;eip=0x002297; 	J(RETF(0));	// 31453 retf ;~ 0FBC:2297

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_20044: 	goto loc_20044;
        case m2c::kloc_200d4: 	goto loc_200d4;
        case m2c::kloc_200d6: 	goto loc_200d6;
        case m2c::kloc_2019f: 	goto loc_2019f;
        case m2c::kloc_201a9: 	goto loc_201a9;
        case m2c::kloc_201fc: 	goto loc_201fc;
        case m2c::kloc_20204: 	goto loc_20204;
        case m2c::kloc_20216: 	goto loc_20216;
        case m2c::kloc_2022a: 	goto loc_2022a;
        case m2c::kloc_20257: 	goto loc_20257;
        case m2c::kloc_202d7: 	goto loc_202d7;
        case m2c::kloc_20367: 	goto loc_20367;
        case m2c::kloc_20369: 	goto loc_20369;
        case m2c::kloc_2042a: 	goto loc_2042a;
        case m2c::kshape3d_load_car_shapes: 	goto shape3d_load_car_shapes;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool shape3d_free_car_shapes(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    shape3d_free_car_shapes:
    _begin:
cs=0xfbc;eip=0x002298; 	T(MOV(ax, *(dw*)(((db*)&car2resptr))));	// 31462 mov     ax, word ptr car2resptr ;~ 0FBC:2298
cs=0xfbc;eip=0x00229b; 	T(OR(ax, *(dw*)(((db*)&car2resptr)+2)));	// 31463 or      ax, word ptr car2resptr+2 ;~ 0FBC:229B
cs=0xfbc;eip=0x00229f; 	J(JZ(loc_20477));	// 31464 jz      short loc_20477 ;~ 0FBC:229F
cs=0xfbc;eip=0x0022a1; 	T(MOV(ax, offset(dseg,oppcarshapevec)));	// 31465 mov     ax, offset oppcarshapevec ;~ 0FBC:22A1
cs=0xfbc;eip=0x0022a4; 	X(PUSH(ax));	// 31466 push    ax ;~ 0FBC:22A4
cs=0xfbc;eip=0x0022a5; 	T(MOV(ax, offset(dseg,oppcarshapevecs)));	// 31467 mov     ax, offset oppcarshapevecs ;~ 0FBC:22A5
cs=0xfbc;eip=0x0022a8; 	X(PUSH(ax));	// 31468 push    ax ;~ 0FBC:22A8
cs=0xfbc;eip=0x0022a9; 	T(MOV(ax, offset(dseg,word_4448a)));	// 31469 mov     ax, offset word_4448A ;~ 0FBC:22A9
cs=0xfbc;eip=0x0022ac; 	X(PUSH(ax));	// 31470 push    ax ;~ 0FBC:22AC
cs=0xfbc;eip=0x0022ad; 	T(MOV(ax, offset(dseg,unk_3e710)));	// 31471 mov     ax, offset unk_3E710 ;~ 0FBC:22AD
cs=0xfbc;eip=0x0022b0; 	X(PUSH(ax));	// 31472 push    ax ;~ 0FBC:22B0
cs=0xfbc;eip=0x0022b1; 	T(SUB(ax, ax));	// 31473 sub     ax, ax ;~ 0FBC:22B1
cs=0xfbc;eip=0x0022b3; 	X(PUSH(ax));	// 31474 push    ax ;~ 0FBC:22B3
cs=0xfbc;eip=0x0022b4; 	T(MOV(ax, word_438a8));	// 31475 mov     ax, word_438A8 ;~ 0FBC:22B4
cs=0xfbc;eip=0x0022b7; 	T(MOV(dx, word_438aa));	// 31476 mov     dx, word_438AA ;~ 0FBC:22B7
cs=0xfbc;eip=0x0022bb; 	T(ADD(ax, 0x30));	// 31477 add     ax, 30h ; '0' ;~ 0FBC:22BB
cs=0xfbc;eip=0x0022be; 	X(PUSH(dx));	// 31478 push    dx ;~ 0FBC:22BE
cs=0xfbc;eip=0x0022bf; 	X(PUSH(ax));	// 31479 push    ax ;~ 0FBC:22BF
cs=0xfbc;eip=0x0022c0; 	X(PUSH(cs));	// 31480 push    cs ;~ 0FBC:22C0
cs=0xfbc;eip=0x0022c1; 	J(CALL(sub_204ae,0));	// 31481 call    near ptr sub_204AE ;~ 0FBC:22C1
cs=0xfbc;eip=0x0022c4; 	T(ADD(sp, 0x0E));	// 31482 add     sp, 0Eh ;~ 0FBC:22C4
cs=0xfbc;eip=0x0022c7; 	X(PUSH(*(dw*)(((db*)&car2resptr)+2)));	// 31483 push    word ptr car2resptr+2 ;~ 0FBC:22C7
cs=0xfbc;eip=0x0022cb; 	X(PUSH(*(dw*)(((db*)&car2resptr))));	// 31484 push    word ptr car2resptr ;~ 0FBC:22CB
cs=0xfbc;eip=0x0022cf; 	J(CALLF(mmgr_release,0));	// 31485 call    mmgr_release ;~ 0FBC:22CF
cs=0xfbc;eip=0x0022d4; 	T(ADD(sp, 4));	// 31486 add     sp, 4 ;~ 0FBC:22D4
loc_20477:
	// 6430 
cs=0xfbc;eip=0x0022d7; 	T(MOV(ax, offset(dseg,carshapevec)));	// 31489 mov     ax, offset carshapevec ;~ 0FBC:22D7
cs=0xfbc;eip=0x0022da; 	X(PUSH(ax));	// 31490 push    ax ;~ 0FBC:22DA
cs=0xfbc;eip=0x0022db; 	T(MOV(ax, offset(dseg,carshapevecs)));	// 31491 mov     ax, offset carshapevecs ;~ 0FBC:22DB
cs=0xfbc;eip=0x0022de; 	X(PUSH(ax));	// 31492 push    ax ;~ 0FBC:22DE
cs=0xfbc;eip=0x0022df; 	T(MOV(ax, offset(dseg,word_443e8)));	// 31493 mov     ax, offset word_443E8 ;~ 0FBC:22DF
cs=0xfbc;eip=0x0022e2; 	X(PUSH(ax));	// 31494 push    ax ;~ 0FBC:22E2
cs=0xfbc;eip=0x0022e3; 	T(MOV(ax, offset(dseg,unk_3e710)));	// 31495 mov     ax, offset unk_3E710 ;~ 0FBC:22E3
cs=0xfbc;eip=0x0022e6; 	X(PUSH(ax));	// 31496 push    ax ;~ 0FBC:22E6
cs=0xfbc;eip=0x0022e7; 	T(SUB(ax, ax));	// 31497 sub     ax, ax ;~ 0FBC:22E7
cs=0xfbc;eip=0x0022e9; 	X(PUSH(ax));	// 31498 push    ax ;~ 0FBC:22E9
cs=0xfbc;eip=0x0022ea; 	T(MOV(ax, word_43892));	// 31499 mov     ax, word_43892 ;~ 0FBC:22EA
cs=0xfbc;eip=0x0022ed; 	T(MOV(dx, word_43894));	// 31500 mov     dx, word_43894 ;~ 0FBC:22ED
cs=0xfbc;eip=0x0022f1; 	T(ADD(ax, 0x30));	// 31501 add     ax, 30h ; '0' ;~ 0FBC:22F1
cs=0xfbc;eip=0x0022f4; 	X(PUSH(dx));	// 31502 push    dx ;~ 0FBC:22F4
cs=0xfbc;eip=0x0022f5; 	X(PUSH(ax));	// 31503 push    ax ;~ 0FBC:22F5
cs=0xfbc;eip=0x0022f6; 	X(PUSH(cs));	// 31504 push    cs ;~ 0FBC:22F6
cs=0xfbc;eip=0x0022f7; 	J(CALL(sub_204ae,0));	// 31505 call    near ptr sub_204AE ;~ 0FBC:22F7
cs=0xfbc;eip=0x0022fa; 	T(ADD(sp, 0x0E));	// 31506 add     sp, 0Eh ;~ 0FBC:22FA
cs=0xfbc;eip=0x0022fd; 	X(PUSH(*(dw*)(((db*)&carresptr)+2)));	// 31507 push    word ptr carresptr+2 ;~ 0FBC:22FD
cs=0xfbc;eip=0x002301; 	X(PUSH(*(dw*)(((db*)&carresptr))));	// 31508 push    word ptr carresptr ;~ 0FBC:2301
cs=0xfbc;eip=0x002305; 	J(CALLF(mmgr_free,0));	// 31509 call    mmgr_free ;~ 0FBC:2305
cs=0xfbc;eip=0x00230a; 	T(ADD(sp, 4));	// 31510 add     sp, 4 ;~ 0FBC:230A
cs=0xfbc;eip=0x00230d; 	J(RETF(0));	// 31511 retf ;~ 0FBC:230D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_20477: 	goto loc_20477;
        case m2c::kshape3d_free_car_shapes: 	goto shape3d_free_car_shapes;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_204ae(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_204ae:
    _begin:
#undef var_14
#define var_14 -0x14
	// 31522 var_14          = word ptr -14h ;~ 0FBC:230E
#undef var_12
#define var_12 -0x12
	// 31523 var_12          = word ptr -12h ;~ 0FBC:230E
#undef var_10
#define var_10 -0x10
	// 31524 var_10          = word ptr -10h ;~ 0FBC:230E
#undef var_e
#define var_e -0x0E
	// 31525 var_E           = word ptr -0Eh ;~ 0FBC:230E
#undef var_c
#define var_c -0x0C
	// 31526 var_C           = word ptr -0Ch ;~ 0FBC:230E
#undef var_8
#define var_8 -8
	// 31527 var_8           = word ptr -8 ;~ 0FBC:230E
#undef var_4
#define var_4 -4
	// 31528 var_4           = word ptr -4 ;~ 0FBC:230E
#undef var_2
#define var_2 -2
	// 31529 var_2           = word ptr -2 ;~ 0FBC:230E
#undef arg_0
#define arg_0 6
	// 31530 arg_0           = dword ptr  6 ;~ 0FBC:230E
#undef arg_4
#define arg_4 0x0A
	// 31531 arg_4           = word ptr  0Ah ;~ 0FBC:230E
#undef arg_6
#define arg_6 0x0C
	// 31532 arg_6           = word ptr  0Ch ;~ 0FBC:230E
#undef arg_8
#define arg_8 0x0E
	// 31533 arg_8           = word ptr  0Eh ;~ 0FBC:230E
#undef arg_a
#define arg_a 0x10
	// 31534 arg_A           = word ptr  10h ;~ 0FBC:230E
#undef arg_c
#define arg_c 0x12
	// 31535 arg_C           = word ptr  12h ;~ 0FBC:230E
cs=0xfbc;eip=0x00230e; 	X(PUSH(bp));	// 31537 push    bp ;~ 0FBC:230E
cs=0xfbc;eip=0x00230f; 	T(MOV(bp, sp));	// 31538 mov     bp, sp ;~ 0FBC:230F
cs=0xfbc;eip=0x002311; 	T(SUB(sp, 0x14));	// 31539 sub     sp, 14h ;~ 0FBC:2311
cs=0xfbc;eip=0x002314; 	X(PUSH(di));	// 31540 push    di ;~ 0FBC:2314
cs=0xfbc;eip=0x002315; 	X(PUSH(si));	// 31541 push    si ;~ 0FBC:2315
cs=0xfbc;eip=0x002316; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_8))));	// 31542 mov     bx, [bp+arg_8] ;~ 0FBC:2316
cs=0xfbc;eip=0x002319; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 31543 mov     ax, [bp+arg_4] ;~ 0FBC:2319
cs=0xfbc;eip=0x00231c; 	T(CMP(*(dw*)(raddr(ds,bx+8)), ax));	// 31544 cmp     [bx+8], ax ;~ 0FBC:231C
cs=0xfbc;eip=0x00231f; 	J(JNZ(loc_204c4));	// 31545 jnz     short loc_204C4 ;~ 0FBC:231F
cs=0xfbc;eip=0x002321; 	J(JMP(loc_2064c));	// 31546 jmp     loc_2064C ;~ 0FBC:2321
loc_204c4:
	// 6431 
cs=0xfbc;eip=0x002324; 	T(SAR(ax, 1));	// 31550 sar     ax, 1 ;~ 0FBC:2324
cs=0xfbc;eip=0x002326; 	X(PUSH(ax));	// 31551 push    ax ;~ 0FBC:2326
cs=0xfbc;eip=0x002327; 	J(CALLF(sin_fast,0));	// 31552 call    sin_fast ;~ 0FBC:2327
cs=0xfbc;eip=0x00232c; 	T(ADD(sp, 2));	// 31553 add     sp, 2 ;~ 0FBC:232C
cs=0xfbc;eip=0x00232f; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 31554 mov     [bp+var_C], ax ;~ 0FBC:232F
cs=0xfbc;eip=0x002332; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 31555 mov     ax, [bp+arg_4] ;~ 0FBC:2332
cs=0xfbc;eip=0x002335; 	T(SAR(ax, 1));	// 31556 sar     ax, 1 ;~ 0FBC:2335
cs=0xfbc;eip=0x002337; 	X(PUSH(ax));	// 31557 push    ax ;~ 0FBC:2337
cs=0xfbc;eip=0x002338; 	J(CALLF(cos_fast,0));	// 31558 call    cos_fast ;~ 0FBC:2338
cs=0xfbc;eip=0x00233d; 	T(ADD(sp, 2));	// 31559 add     sp, 2 ;~ 0FBC:233D
cs=0xfbc;eip=0x002340; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 31560 mov     [bp+var_2], ax ;~ 0FBC:2340
cs=0xfbc;eip=0x002343; 	T(SUB(si, si));	// 31561 sub     si, si ;~ 0FBC:2343
loc_204e5:
	// 6432 
cs=0xfbc;eip=0x002345; 	T(MOV(ax, si));	// 31564 mov     ax, si ;~ 0FBC:2345
cs=0xfbc;eip=0x002347; 	T(MOV(cx, ax));	// 31565 mov     cx, ax ;~ 0FBC:2347
cs=0xfbc;eip=0x002349; 	T(SHL(ax, 1));	// 31566 shl     ax, 1 ;~ 0FBC:2349
cs=0xfbc;eip=0x00234b; 	T(ADD(ax, cx));	// 31567 add     ax, cx ;~ 0FBC:234B
cs=0xfbc;eip=0x00234d; 	T(SHL(ax, 1));	// 31568 shl     ax, 1 ;~ 0FBC:234D
cs=0xfbc;eip=0x00234f; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 31569 mov     [bp+var_10], ax ;~ 0FBC:234F
cs=0xfbc;eip=0x002352; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 31570 push    [bp+var_2] ;~ 0FBC:2352
cs=0xfbc;eip=0x002355; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_a))));	// 31571 mov     bx, [bp+arg_A] ;~ 0FBC:2355
cs=0xfbc;eip=0x002358; 	T(MOV(ax, si));	// 31572 mov     ax, si ;~ 0FBC:2358
cs=0xfbc;eip=0x00235a; 	T(SHL(ax, 1));	// 31573 shl     ax, 1 ;~ 0FBC:235A
cs=0xfbc;eip=0x00235c; 	T(ADD(ax, cx));	// 31574 add     ax, cx ;~ 0FBC:235C
cs=0xfbc;eip=0x00235e; 	T(SHL(ax, 1));	// 31575 shl     ax, 1 ;~ 0FBC:235E
cs=0xfbc;eip=0x002360; 	T(ADD(bx, ax));	// 31576 add     bx, ax ;~ 0FBC:2360
cs=0xfbc;eip=0x002362; 	X(PUSH(*(dw*)(raddr(ds,bx+0))));	// 31577 push    word ptr [bx+0] ;~ 0FBC:2362
cs=0xfbc;eip=0x002364; 	J(CALLF(multiply_and_scale,0));	// 31578 call    multiply_and_scale ;~ 0FBC:2364
cs=0xfbc;eip=0x002369; 	T(ADD(sp, 4));	// 31579 add     sp, 4 ;~ 0FBC:2369
cs=0xfbc;eip=0x00236c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 31580 push    [bp+var_C] ;~ 0FBC:236C
cs=0xfbc;eip=0x00236f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_a))));	// 31581 mov     bx, [bp+arg_A] ;~ 0FBC:236F
cs=0xfbc;eip=0x002372; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_10))));	// 31582 add     bx, [bp+var_10] ;~ 0FBC:2372
cs=0xfbc;eip=0x002375; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 31583 push    word ptr [bx+4] ;~ 0FBC:2375
cs=0xfbc;eip=0x002378; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 31584 mov     [bp+var_14], ax ;~ 0FBC:2378
cs=0xfbc;eip=0x00237b; 	J(CALLF(multiply_and_scale,0));	// 31585 call    multiply_and_scale ;~ 0FBC:237B
cs=0xfbc;eip=0x002380; 	T(ADD(sp, 4));	// 31586 add     sp, 4 ;~ 0FBC:2380
cs=0xfbc;eip=0x002383; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_c))));	// 31587 mov     bx, [bp+arg_C] ;~ 0FBC:2383
cs=0xfbc;eip=0x002386; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0))));	// 31588 mov     cx, [bx+0] ;~ 0FBC:2386
cs=0xfbc;eip=0x002388; 	T(ADD(cx, ax));	// 31589 add     cx, ax ;~ 0FBC:2388
cs=0xfbc;eip=0x00238a; 	T(ADD(cx, *(dw*)(raddr(ss,bp+var_14))));	// 31590 add     cx, [bp+var_14] ;~ 0FBC:238A
cs=0xfbc;eip=0x00238d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 31591 les     bx, [bp+arg_0] ;~ 0FBC:238D
cs=0xfbc;eip=0x002390; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_10))));	// 31592 add     bx, [bp+var_10] ;~ 0FBC:2390
cs=0xfbc;eip=0x002393; 	X(MOV(*(dw*)(raddr(es,bx+0)), cx));	// 31593 mov     es:[bx+0], cx ;~ 0FBC:2393
cs=0xfbc;eip=0x002396; 	T(MOV(ax, si));	// 31594 mov     ax, si ;~ 0FBC:2396
cs=0xfbc;eip=0x002398; 	T(MOV(cx, ax));	// 31595 mov     cx, ax ;~ 0FBC:2398
cs=0xfbc;eip=0x00239a; 	T(SHL(ax, 1));	// 31596 shl     ax, 1 ;~ 0FBC:239A
cs=0xfbc;eip=0x00239c; 	T(ADD(ax, cx));	// 31597 add     ax, cx ;~ 0FBC:239C
cs=0xfbc;eip=0x00239e; 	T(SHL(ax, 1));	// 31598 shl     ax, 1 ;~ 0FBC:239E
cs=0xfbc;eip=0x0023a0; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 31599 mov     [bp+var_12], ax ;~ 0FBC:23A0
cs=0xfbc;eip=0x0023a3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 31600 push    [bp+var_2] ;~ 0FBC:23A3
cs=0xfbc;eip=0x0023a6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_a))));	// 31601 mov     bx, [bp+arg_A] ;~ 0FBC:23A6
cs=0xfbc;eip=0x0023a9; 	T(MOV(ax, si));	// 31602 mov     ax, si ;~ 0FBC:23A9
cs=0xfbc;eip=0x0023ab; 	T(SHL(ax, 1));	// 31603 shl     ax, 1 ;~ 0FBC:23AB
cs=0xfbc;eip=0x0023ad; 	T(ADD(ax, cx));	// 31604 add     ax, cx ;~ 0FBC:23AD
cs=0xfbc;eip=0x0023af; 	T(SHL(ax, 1));	// 31605 shl     ax, 1 ;~ 0FBC:23AF
cs=0xfbc;eip=0x0023b1; 	T(ADD(bx, ax));	// 31606 add     bx, ax ;~ 0FBC:23B1
cs=0xfbc;eip=0x0023b3; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 31607 push    word ptr [bx+4] ;~ 0FBC:23B3
cs=0xfbc;eip=0x0023b6; 	J(CALLF(multiply_and_scale,0));	// 31608 call    multiply_and_scale ;~ 0FBC:23B6
cs=0xfbc;eip=0x0023bb; 	T(ADD(sp, 4));	// 31609 add     sp, 4 ;~ 0FBC:23BB
cs=0xfbc;eip=0x0023be; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 31610 push    [bp+var_C] ;~ 0FBC:23BE
cs=0xfbc;eip=0x0023c1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_a))));	// 31611 mov     bx, [bp+arg_A] ;~ 0FBC:23C1
cs=0xfbc;eip=0x0023c4; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_12))));	// 31612 add     bx, [bp+var_12] ;~ 0FBC:23C4
cs=0xfbc;eip=0x0023c7; 	X(PUSH(*(dw*)(raddr(ds,bx+0))));	// 31613 push    word ptr [bx+0] ;~ 0FBC:23C7
cs=0xfbc;eip=0x0023c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 31614 mov     [bp+var_14], ax ;~ 0FBC:23C9
cs=0xfbc;eip=0x0023cc; 	J(CALLF(multiply_and_scale,0));	// 31615 call    multiply_and_scale ;~ 0FBC:23CC
cs=0xfbc;eip=0x0023d1; 	T(ADD(sp, 4));	// 31616 add     sp, 4 ;~ 0FBC:23D1
cs=0xfbc;eip=0x0023d4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_c))));	// 31617 mov     bx, [bp+arg_C] ;~ 0FBC:23D4
cs=0xfbc;eip=0x0023d7; 	T(MOV(cx, *(dw*)(raddr(ds,bx+4))));	// 31618 mov     cx, [bx+4] ;~ 0FBC:23D7
cs=0xfbc;eip=0x0023da; 	T(ADD(cx, ax));	// 31619 add     cx, ax ;~ 0FBC:23DA
cs=0xfbc;eip=0x0023dc; 	T(ADD(cx, *(dw*)(raddr(ss,bp+var_14))));	// 31620 add     cx, [bp+var_14] ;~ 0FBC:23DC
cs=0xfbc;eip=0x0023df; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 31621 les     bx, [bp+arg_0] ;~ 0FBC:23DF
cs=0xfbc;eip=0x0023e2; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_12))));	// 31622 add     bx, [bp+var_12] ;~ 0FBC:23E2
cs=0xfbc;eip=0x0023e5; 	X(MOV(*(dw*)(raddr(es,bx+4)), cx));	// 31623 mov     es:[bx+4], cx ;~ 0FBC:23E5
cs=0xfbc;eip=0x0023e9; 	T(INC(si));	// 31624 inc     si ;~ 0FBC:23E9
cs=0xfbc;eip=0x0023ea; 	T(CMP(si, 6));	// 31625 cmp     si, 6 ;~ 0FBC:23EA
cs=0xfbc;eip=0x0023ed; 	J(JGE(loc_20592));	// 31626 jge     short loc_20592 ;~ 0FBC:23ED
cs=0xfbc;eip=0x0023ef; 	J(JMP(loc_204e5));	// 31627 jmp     loc_204E5 ;~ 0FBC:23EF
loc_20592:
	// 6433 
cs=0xfbc;eip=0x0023f2; 	T(MOV(si, 6));	// 31631 mov     si, 6 ;~ 0FBC:23F2
loc_20595:
	// 6434 
cs=0xfbc;eip=0x0023f5; 	T(MOV(ax, si));	// 31634 mov     ax, si ;~ 0FBC:23F5
cs=0xfbc;eip=0x0023f7; 	T(MOV(cx, ax));	// 31635 mov     cx, ax ;~ 0FBC:23F7
cs=0xfbc;eip=0x0023f9; 	T(SHL(ax, 1));	// 31636 shl     ax, 1 ;~ 0FBC:23F9
cs=0xfbc;eip=0x0023fb; 	T(ADD(ax, cx));	// 31637 add     ax, cx ;~ 0FBC:23FB
cs=0xfbc;eip=0x0023fd; 	T(SHL(ax, 1));	// 31638 shl     ax, 1 ;~ 0FBC:23FD
cs=0xfbc;eip=0x0023ff; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 31639 mov     [bp+var_14], ax ;~ 0FBC:23FF
cs=0xfbc;eip=0x002402; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 31640 push    [bp+var_2] ;~ 0FBC:2402
cs=0xfbc;eip=0x002405; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_a))));	// 31641 mov     bx, [bp+arg_A] ;~ 0FBC:2405
cs=0xfbc;eip=0x002408; 	T(MOV(ax, si));	// 31642 mov     ax, si ;~ 0FBC:2408
cs=0xfbc;eip=0x00240a; 	T(SHL(ax, 1));	// 31643 shl     ax, 1 ;~ 0FBC:240A
cs=0xfbc;eip=0x00240c; 	T(ADD(ax, cx));	// 31644 add     ax, cx ;~ 0FBC:240C
cs=0xfbc;eip=0x00240e; 	T(SHL(ax, 1));	// 31645 shl     ax, 1 ;~ 0FBC:240E
cs=0xfbc;eip=0x002410; 	T(ADD(bx, ax));	// 31646 add     bx, ax ;~ 0FBC:2410
cs=0xfbc;eip=0x002412; 	X(PUSH(*(dw*)(raddr(ds,bx+0))));	// 31647 push    word ptr [bx+0] ;~ 0FBC:2412
cs=0xfbc;eip=0x002414; 	J(CALLF(multiply_and_scale,0));	// 31648 call    multiply_and_scale ;~ 0FBC:2414
cs=0xfbc;eip=0x002419; 	T(ADD(sp, 4));	// 31649 add     sp, 4 ;~ 0FBC:2419
cs=0xfbc;eip=0x00241c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 31650 push    [bp+var_C] ;~ 0FBC:241C
cs=0xfbc;eip=0x00241f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_a))));	// 31651 mov     bx, [bp+arg_A] ;~ 0FBC:241F
cs=0xfbc;eip=0x002422; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 31652 add     bx, [bp+var_14] ;~ 0FBC:2422
cs=0xfbc;eip=0x002425; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 31653 push    word ptr [bx+4] ;~ 0FBC:2425
cs=0xfbc;eip=0x002428; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 31654 mov     [bp+var_10], ax ;~ 0FBC:2428
cs=0xfbc;eip=0x00242b; 	J(CALLF(multiply_and_scale,0));	// 31655 call    multiply_and_scale ;~ 0FBC:242B
cs=0xfbc;eip=0x002430; 	T(ADD(sp, 4));	// 31656 add     sp, 4 ;~ 0FBC:2430
cs=0xfbc;eip=0x002433; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_c))));	// 31657 mov     bx, [bp+arg_C] ;~ 0FBC:2433
cs=0xfbc;eip=0x002436; 	T(MOV(cx, *(dw*)(raddr(ds,bx+6))));	// 31658 mov     cx, [bx+6] ;~ 0FBC:2436
cs=0xfbc;eip=0x002439; 	T(ADD(cx, ax));	// 31659 add     cx, ax ;~ 0FBC:2439
cs=0xfbc;eip=0x00243b; 	T(ADD(cx, *(dw*)(raddr(ss,bp+var_10))));	// 31660 add     cx, [bp+var_10] ;~ 0FBC:243B
cs=0xfbc;eip=0x00243e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 31661 les     bx, [bp+arg_0] ;~ 0FBC:243E
cs=0xfbc;eip=0x002441; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 31662 add     bx, [bp+var_14] ;~ 0FBC:2441
cs=0xfbc;eip=0x002444; 	X(MOV(*(dw*)(raddr(es,bx+0)), cx));	// 31663 mov     es:[bx+0], cx ;~ 0FBC:2444
cs=0xfbc;eip=0x002447; 	T(MOV(ax, si));	// 31664 mov     ax, si ;~ 0FBC:2447
cs=0xfbc;eip=0x002449; 	T(MOV(cx, ax));	// 31665 mov     cx, ax ;~ 0FBC:2449
cs=0xfbc;eip=0x00244b; 	T(SHL(ax, 1));	// 31666 shl     ax, 1 ;~ 0FBC:244B
cs=0xfbc;eip=0x00244d; 	T(ADD(ax, cx));	// 31667 add     ax, cx ;~ 0FBC:244D
cs=0xfbc;eip=0x00244f; 	T(SHL(ax, 1));	// 31668 shl     ax, 1 ;~ 0FBC:244F
cs=0xfbc;eip=0x002451; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 31669 mov     [bp+var_12], ax ;~ 0FBC:2451
cs=0xfbc;eip=0x002454; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 31670 push    [bp+var_2] ;~ 0FBC:2454
cs=0xfbc;eip=0x002457; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_a))));	// 31671 mov     bx, [bp+arg_A] ;~ 0FBC:2457
cs=0xfbc;eip=0x00245a; 	T(MOV(ax, si));	// 31672 mov     ax, si ;~ 0FBC:245A
cs=0xfbc;eip=0x00245c; 	T(SHL(ax, 1));	// 31673 shl     ax, 1 ;~ 0FBC:245C
cs=0xfbc;eip=0x00245e; 	T(ADD(ax, cx));	// 31674 add     ax, cx ;~ 0FBC:245E
cs=0xfbc;eip=0x002460; 	T(SHL(ax, 1));	// 31675 shl     ax, 1 ;~ 0FBC:2460
cs=0xfbc;eip=0x002462; 	T(ADD(bx, ax));	// 31676 add     bx, ax ;~ 0FBC:2462
cs=0xfbc;eip=0x002464; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 31677 push    word ptr [bx+4] ;~ 0FBC:2464
cs=0xfbc;eip=0x002467; 	J(CALLF(multiply_and_scale,0));	// 31678 call    multiply_and_scale ;~ 0FBC:2467
cs=0xfbc;eip=0x00246c; 	T(ADD(sp, 4));	// 31679 add     sp, 4 ;~ 0FBC:246C
cs=0xfbc;eip=0x00246f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 31680 push    [bp+var_C] ;~ 0FBC:246F
cs=0xfbc;eip=0x002472; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_a))));	// 31681 mov     bx, [bp+arg_A] ;~ 0FBC:2472
cs=0xfbc;eip=0x002475; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_12))));	// 31682 add     bx, [bp+var_12] ;~ 0FBC:2475
cs=0xfbc;eip=0x002478; 	X(PUSH(*(dw*)(raddr(ds,bx+0))));	// 31683 push    word ptr [bx+0] ;~ 0FBC:2478
cs=0xfbc;eip=0x00247a; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 31684 mov     [bp+var_10], ax ;~ 0FBC:247A
cs=0xfbc;eip=0x00247d; 	J(CALLF(multiply_and_scale,0));	// 31685 call    multiply_and_scale ;~ 0FBC:247D
cs=0xfbc;eip=0x002482; 	T(ADD(sp, 4));	// 31686 add     sp, 4 ;~ 0FBC:2482
cs=0xfbc;eip=0x002485; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_c))));	// 31687 mov     bx, [bp+arg_C] ;~ 0FBC:2485
cs=0xfbc;eip=0x002488; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x0A))));	// 31688 mov     cx, [bx+0Ah] ;~ 0FBC:2488
cs=0xfbc;eip=0x00248b; 	T(ADD(cx, ax));	// 31689 add     cx, ax ;~ 0FBC:248B
cs=0xfbc;eip=0x00248d; 	T(ADD(cx, *(dw*)(raddr(ss,bp+var_10))));	// 31690 add     cx, [bp+var_10] ;~ 0FBC:248D
cs=0xfbc;eip=0x002490; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 31691 les     bx, [bp+arg_0] ;~ 0FBC:2490
cs=0xfbc;eip=0x002493; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_12))));	// 31692 add     bx, [bp+var_12] ;~ 0FBC:2493
cs=0xfbc;eip=0x002496; 	X(MOV(*(dw*)(raddr(es,bx+4)), cx));	// 31693 mov     es:[bx+4], cx ;~ 0FBC:2496
cs=0xfbc;eip=0x00249a; 	T(INC(si));	// 31694 inc     si ;~ 0FBC:249A
cs=0xfbc;eip=0x00249b; 	T(CMP(si, 0x0C));	// 31695 cmp     si, 0Ch ;~ 0FBC:249B
cs=0xfbc;eip=0x00249e; 	J(JGE(loc_20643));	// 31696 jge     short loc_20643 ;~ 0FBC:249E
cs=0xfbc;eip=0x0024a0; 	J(JMP(loc_20595));	// 31697 jmp     loc_20595 ;~ 0FBC:24A0
loc_20643:
	// 6435 
cs=0xfbc;eip=0x0024a3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_8))));	// 31701 mov     bx, [bp+arg_8] ;~ 0FBC:24A3
cs=0xfbc;eip=0x0024a6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 31702 mov     ax, [bp+arg_4] ;~ 0FBC:24A6
cs=0xfbc;eip=0x0024a9; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 31703 mov     [bx+8], ax ;~ 0FBC:24A9
loc_2064c:
	// 6436 
cs=0xfbc;eip=0x0024ac; 	T(SUB(di, di));	// 31706 sub     di, di ;~ 0FBC:24AC
cs=0xfbc;eip=0x0024ae; 	J(JMP(loc_20687));	// 31707 jmp     short loc_20687 ;~ 0FBC:24AE
loc_20650:
	// 6437 
cs=0xfbc;eip=0x0024b0; 	T(MOV(ax, si));	// 31711 mov     ax, si ;~ 0FBC:24B0
cs=0xfbc;eip=0x0024b2; 	T(MOV(cx, ax));	// 31712 mov     cx, ax ;~ 0FBC:24B2
cs=0xfbc;eip=0x0024b4; 	T(SHL(ax, 1));	// 31713 shl     ax, 1 ;~ 0FBC:24B4
cs=0xfbc;eip=0x0024b6; 	T(ADD(ax, cx));	// 31714 add     ax, cx ;~ 0FBC:24B6
cs=0xfbc;eip=0x0024b8; 	T(SHL(ax, 1));	// 31715 shl     ax, 1 ;~ 0FBC:24B8
cs=0xfbc;eip=0x0024ba; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 31716 mov     [bp+var_14], ax ;~ 0FBC:24BA
cs=0xfbc;eip=0x0024bd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_a))));	// 31717 mov     bx, [bp+arg_A] ;~ 0FBC:24BD
cs=0xfbc;eip=0x0024c0; 	T(ADD(bx, ax));	// 31718 add     bx, ax ;~ 0FBC:24C0
cs=0xfbc;eip=0x0024c2; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 31719 mov     ax, [bx+2] ;~ 0FBC:24C2
cs=0xfbc;eip=0x0024c5; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_8))));	// 31720 sub     ax, [bp+var_8] ;~ 0FBC:24C5
cs=0xfbc;eip=0x0024c8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 31721 les     bx, [bp+arg_0] ;~ 0FBC:24C8
cs=0xfbc;eip=0x0024cb; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 31722 add     bx, [bp+var_14] ;~ 0FBC:24CB
cs=0xfbc;eip=0x0024ce; 	X(MOV(*(dw*)(raddr(es,bx+2)), ax));	// 31723 mov     es:[bx+2], ax ;~ 0FBC:24CE
cs=0xfbc;eip=0x0024d2; 	T(INC(si));	// 31724 inc     si ;~ 0FBC:24D2
loc_20673:
	// 6438 
cs=0xfbc;eip=0x0024d3; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), si));	// 31727 cmp     [bp+var_4], si ;~ 0FBC:24D3
cs=0xfbc;eip=0x0024d6; 	J(JG(loc_20650));	// 31728 jg      short loc_20650 ;~ 0FBC:24D6
cs=0xfbc;eip=0x0024d8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_8))));	// 31729 mov     bx, [bp+arg_8] ;~ 0FBC:24D8
cs=0xfbc;eip=0x0024db; 	T(MOV(ax, di));	// 31730 mov     ax, di ;~ 0FBC:24DB
cs=0xfbc;eip=0x0024dd; 	T(SHL(ax, 1));	// 31731 shl     ax, 1 ;~ 0FBC:24DD
cs=0xfbc;eip=0x0024df; 	T(ADD(bx, ax));	// 31732 add     bx, ax ;~ 0FBC:24DF
cs=0xfbc;eip=0x0024e1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 31733 mov     ax, [bp+var_8] ;~ 0FBC:24E1
cs=0xfbc;eip=0x0024e4; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 31734 mov     [bx], ax ;~ 0FBC:24E4
loc_20686:
	// 6439 
cs=0xfbc;eip=0x0024e6; 	T(INC(di));	// 31737 inc     di ;~ 0FBC:24E6
loc_20687:
	// 6440 
cs=0xfbc;eip=0x0024e7; 	T(CMP(di, 4));	// 31740 cmp     di, 4 ;~ 0FBC:24E7
cs=0xfbc;eip=0x0024ea; 	J(JGE(loc_206ce));	// 31741 jge     short loc_206CE ;~ 0FBC:24EA
cs=0xfbc;eip=0x0024ec; 	T(MOV(ax, di));	// 31742 mov     ax, di ;~ 0FBC:24EC
cs=0xfbc;eip=0x0024ee; 	T(SHL(ax, 1));	// 31743 shl     ax, 1 ;~ 0FBC:24EE
cs=0xfbc;eip=0x0024f0; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 31744 mov     [bp+var_14], ax ;~ 0FBC:24F0
cs=0xfbc;eip=0x0024f3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 31745 mov     bx, [bp+arg_6] ;~ 0FBC:24F3
cs=0xfbc;eip=0x0024f6; 	T(ADD(bx, ax));	// 31746 add     bx, ax ;~ 0FBC:24F6
cs=0xfbc;eip=0x0024f8; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 31747 mov     ax, [bx] ;~ 0FBC:24F8
cs=0xfbc;eip=0x0024fa; 	T(CWD);	// 31748 cwd ;~ 0FBC:24FA
cs=0xfbc;eip=0x0024fb; 	T(XOR(ax, dx));	// 31749 xor     ax, dx ;~ 0FBC:24FB
cs=0xfbc;eip=0x0024fd; 	T(SUB(ax, dx));	// 31750 sub     ax, dx ;~ 0FBC:24FD
cs=0xfbc;eip=0x0024ff; 	T(MOV(cx, 6));	// 31751 mov     cx, 6 ;~ 0FBC:24FF
cs=0xfbc;eip=0x002502; 	T(SAR(ax, cl));	// 31752 sar     ax, cl ;~ 0FBC:2502
cs=0xfbc;eip=0x002504; 	T(XOR(ax, dx));	// 31753 xor     ax, dx ;~ 0FBC:2504
cs=0xfbc;eip=0x002506; 	T(SUB(ax, dx));	// 31754 sub     ax, dx ;~ 0FBC:2506
cs=0xfbc;eip=0x002508; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 31755 mov     [bp+var_8], ax ;~ 0FBC:2508
cs=0xfbc;eip=0x00250b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_8))));	// 31756 mov     bx, [bp+arg_8] ;~ 0FBC:250B
cs=0xfbc;eip=0x00250e; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 31757 add     bx, [bp+var_14] ;~ 0FBC:250E
cs=0xfbc;eip=0x002511; 	T(CMP(*(dw*)(raddr(ds,bx)), ax));	// 31758 cmp     [bx], ax ;~ 0FBC:2511
cs=0xfbc;eip=0x002513; 	J(JZ(loc_20686));	// 31759 jz      short loc_20686 ;~ 0FBC:2513
cs=0xfbc;eip=0x002515; 	T(MOV(ax, di));	// 31760 mov     ax, di ;~ 0FBC:2515
cs=0xfbc;eip=0x002517; 	T(MOV(cx, ax));	// 31761 mov     cx, ax ;~ 0FBC:2517
cs=0xfbc;eip=0x002519; 	T(SHL(ax, 1));	// 31762 shl     ax, 1 ;~ 0FBC:2519
cs=0xfbc;eip=0x00251b; 	T(ADD(ax, cx));	// 31763 add     ax, cx ;~ 0FBC:251B
cs=0xfbc;eip=0x00251d; 	T(SHL(ax, 1));	// 31764 shl     ax, 1 ;~ 0FBC:251D
cs=0xfbc;eip=0x00251f; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 31765 mov     [bp+var_E], ax ;~ 0FBC:251F
cs=0xfbc;eip=0x002522; 	T(ADD(ax, 6));	// 31766 add     ax, 6 ;~ 0FBC:2522
cs=0xfbc;eip=0x002525; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 31767 mov     [bp+var_4], ax ;~ 0FBC:2525
cs=0xfbc;eip=0x002528; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_e))));	// 31768 mov     si, [bp+var_E] ;~ 0FBC:2528
cs=0xfbc;eip=0x00252b; 	J(JMP(loc_20673));	// 31769 jmp     short loc_20673 ;~ 0FBC:252B
loc_206ce:
	// 6441 
cs=0xfbc;eip=0x00252e; 	X(POP(si));	// 31774 pop     si ;~ 0FBC:252E
cs=0xfbc;eip=0x00252f; 	X(POP(di));	// 31775 pop     di ;~ 0FBC:252F
cs=0xfbc;eip=0x002530; 	T(MOV(sp, bp));	// 31776 mov     sp, bp ;~ 0FBC:2530
cs=0xfbc;eip=0x002532; 	X(POP(bp));	// 31777 pop     bp ;~ 0FBC:2532
cs=0xfbc;eip=0x002533; 	J(RETF(0));	// 31778 retf ;~ 0FBC:2533

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_204c4: 	goto loc_204c4;
        case m2c::kloc_204e5: 	goto loc_204e5;
        case m2c::kloc_20592: 	goto loc_20592;
        case m2c::kloc_20595: 	goto loc_20595;
        case m2c::kloc_20643: 	goto loc_20643;
        case m2c::kloc_2064c: 	goto loc_2064c;
        case m2c::kloc_20650: 	goto loc_20650;
        case m2c::kloc_20673: 	goto loc_20673;
        case m2c::kloc_20686: 	goto loc_20686;
        case m2c::kloc_20687: 	goto loc_20687;
        case m2c::kloc_206ce: 	goto loc_206ce;
        case m2c::ksub_204ae: 	goto sub_204ae;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool track_setup(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    track_setup:
    _begin:
#undef var_af0
#define var_af0 -0x0AF0
	// 31789 var_AF0         = dword ptr -0AF0h ;~ 0FBC:2534
#undef var_aec
#define var_aec -0x0AEC
	// 31790 var_AEC         = word ptr -0AECh ;~ 0FBC:2534
#undef var_aea
#define var_aea -0x0AEA
	// 31791 var_AEA         = word ptr -0AEAh ;~ 0FBC:2534
#undef var_ae8
#define var_ae8 -0x0AE8
	// 31792 var_AE8         = byte ptr -0AE8h ;~ 0FBC:2534
#undef var_ae6
#define var_ae6 -0x0AE6
	// 31793 var_AE6         = byte ptr -0AE6h ;~ 0FBC:2534
#undef var_ae4
#define var_ae4 -0x0AE4
	// 31794 var_AE4         = byte ptr -0AE4h ;~ 0FBC:2534
#undef var_ae2
#define var_ae2 -0x0AE2
	// 31795 var_AE2         = word ptr -0AE2h ;~ 0FBC:2534
#undef var_ae0
#define var_ae0 -0x0AE0
	// 31796 var_AE0         = word ptr -0AE0h ;~ 0FBC:2534
#undef var_ade
#define var_ade -0x0ADE
	// 31797 var_ADE         = word ptr -0ADEh ;~ 0FBC:2534
#undef var_adc
#define var_adc -0x0ADC
	// 31798 var_ADC         = word ptr -0ADCh ;~ 0FBC:2534
#undef var_ada
#define var_ada -0x0ADA
	// 31799 var_ADA         = word ptr -0ADAh ;~ 0FBC:2534
#undef var_ad8
#define var_ad8 -0x0AD8
	// 31800 var_AD8         = word ptr -0AD8h ;~ 0FBC:2534
#undef var_ad6
#define var_ad6 -0x0AD6
	// 31801 var_AD6         = word ptr -0AD6h ;~ 0FBC:2534
#undef var_ad4
#define var_ad4 -0x0AD4
	// 31802 var_AD4         = byte ptr -0AD4h ;~ 0FBC:2534
#undef var_74e
#define var_74e -0x74E
	// 31803 var_74E         = byte ptr -74Eh ;~ 0FBC:2534
#undef var_74c
#define var_74c -0x74C
	// 31804 var_74C         = byte ptr -74Ch ;~ 0FBC:2534
#undef var_74a
#define var_74a -0x74A
	// 31805 var_74A         = word ptr -74Ah ;~ 0FBC:2534
#undef var_748
#define var_748 -0x748
	// 31806 var_748         = word ptr -748h ;~ 0FBC:2534
#undef var_746
#define var_746 -0x746
	// 31807 var_746         = byte ptr -746h ;~ 0FBC:2534
#undef var_744
#define var_744 -0x744
	// 31808 var_744         = byte ptr -744h ;~ 0FBC:2534
#undef var_742
#define var_742 -0x742
	// 31809 var_742         = byte ptr -742h ;~ 0FBC:2534
#undef var_740
#define var_740 -0x740
	// 31810 var_740         = byte ptr -740h ;~ 0FBC:2534
#undef var_73e
#define var_73e -0x73E
	// 31811 var_73E         = byte ptr -73Eh ;~ 0FBC:2534
#undef var_73a
#define var_73a -0x73A
	// 31812 var_73A         = byte ptr -73Ah ;~ 0FBC:2534
#undef var_738
#define var_738 -0x738
	// 31813 var_738         = byte ptr -738h ;~ 0FBC:2534
#undef var_3b0
#define var_3b0 -0x3B0
	// 31814 var_3B0         = byte ptr -3B0h ;~ 0FBC:2534
#undef var_3ae
#define var_3ae -0x3AE
	// 31815 var_3AE         = word ptr -3AEh ;~ 0FBC:2534
#undef var_3ac
#define var_3ac -0x3AC
	// 31816 var_3AC         = word ptr -3ACh ;~ 0FBC:2534
#undef var_3aa
#define var_3aa -0x3AA
	// 31817 var_3AA         = byte ptr -3AAh ;~ 0FBC:2534
#undef var_3a8
#define var_3a8 -0x3A8
	// 31818 var_3A8         = byte ptr -3A8h ;~ 0FBC:2534
#undef var_3a6
#define var_3a6 -0x3A6
	// 31819 var_3A6         = byte ptr -3A6h ;~ 0FBC:2534
#undef var_3a4
#define var_3a4 -0x3A4
	// 31820 var_3A4         = byte ptr -3A4h ;~ 0FBC:2534
#undef var_3a2
#define var_3a2 -0x3A2
	// 31821 var_3A2         = word ptr -3A2h ;~ 0FBC:2534
#undef var_3a0
#define var_3a0 -0x3A0
	// 31822 var_3A0         = dword ptr -3A0h ;~ 0FBC:2534
#undef var_39c
#define var_39c -0x39C
	// 31823 var_39C         = word ptr -39Ch ;~ 0FBC:2534
#undef var_39a
#define var_39a -0x39A
	// 31824 var_39A         = byte ptr -39Ah ;~ 0FBC:2534
#undef var_398
#define var_398 -0x398
	// 31825 var_398         = byte ptr -398h ;~ 0FBC:2534
#undef var_12
#define var_12 -0x12
	// 31826 var_12          = byte ptr -12h ;~ 0FBC:2534
#undef var_10
#define var_10 -0x10
	// 31827 var_10          = byte ptr -10h ;~ 0FBC:2534
#undef var_e
#define var_e -0x0E
	// 31828 var_E           = byte ptr -0Eh ;~ 0FBC:2534
#undef var_c
#define var_c -0x0C
	// 31829 var_C           = word ptr -0Ch ;~ 0FBC:2534
#undef var_a
#define var_a -0x0A
	// 31830 var_A           = word ptr -0Ah ;~ 0FBC:2534
#undef var_8
#define var_8 -8
	// 31831 var_8           = word ptr -8 ;~ 0FBC:2534
#undef var_6
#define var_6 -6
	// 31832 var_6           = byte ptr -6 ;~ 0FBC:2534
#undef var_4
#define var_4 -4
	// 31833 var_4           = byte ptr -4 ;~ 0FBC:2534
#undef var_2
#define var_2 -2
	// 31834 var_2           = byte ptr -2 ;~ 0FBC:2534
cs=0xfbc;eip=0x002534; 	X(PUSH(bp));	// 31836 push    bp ;~ 0FBC:2534
cs=0xfbc;eip=0x002535; 	T(MOV(bp, sp));	// 31837 mov     bp, sp ;~ 0FBC:2535
cs=0xfbc;eip=0x002537; 	T(SUB(sp, 0x0AF0));	// 31838 sub     sp, 0AF0h ;~ 0FBC:2537
cs=0xfbc;eip=0x00253b; 	X(PUSH(di));	// 31839 push    di ;~ 0FBC:253B
cs=0xfbc;eip=0x00253c; 	X(PUSH(si));	// 31840 push    si ;~ 0FBC:253C
cs=0xfbc;eip=0x00253d; 	T(MOV(ax, 0x380));	// 31841 mov     ax, 380h ;~ 0FBC:253D
cs=0xfbc;eip=0x002540; 	T(CWD);	// 31842 cwd ;~ 0FBC:2540
cs=0xfbc;eip=0x002541; 	X(PUSH(dx));	// 31843 push    dx ;~ 0FBC:2541
cs=0xfbc;eip=0x002542; 	X(PUSH(ax));	// 31844 push    ax ;~ 0FBC:2542
cs=0xfbc;eip=0x002543; 	T(MOV(ax, offset(dseg,atcomp)));	// 31845 mov     ax, offset aTcomp ; "tcomp" ;~ 0FBC:2543
cs=0xfbc;eip=0x002546; 	X(PUSH(ax));	// 31846 push    ax ;~ 0FBC:2546
cs=0xfbc;eip=0x002547; 	J(CALLF(mmgr_alloc_resbytes,0));	// 31847 call    mmgr_alloc_resbytes ;~ 0FBC:2547
cs=0xfbc;eip=0x00254c; 	T(ADD(sp, 6));	// 31848 add     sp, 6 ;~ 0FBC:254C
cs=0xfbc;eip=0x00254f; 	X(MOV(*(dw*)(raddr(ss,bp+var_ae2)), ax));	// 31849 mov     [bp+var_AE2], ax ;~ 0FBC:254F
cs=0xfbc;eip=0x002553; 	X(MOV(*(dw*)(raddr(ss,bp+var_ae0)), dx));	// 31850 mov     [bp+var_AE0], dx ;~ 0FBC:2553
cs=0xfbc;eip=0x002557; 	T(OR(ax, dx));	// 31851 or      ax, dx ;~ 0FBC:2557
cs=0xfbc;eip=0x002559; 	J(JNZ(loc_20704));	// 31852 jnz     short loc_20704 ;~ 0FBC:2559
cs=0xfbc;eip=0x00255b; 	T(MOV(ax, 2));	// 31853 mov     ax, 2 ;~ 0FBC:255B
cs=0xfbc;eip=0x00255e; 	X(POP(si));	// 31854 pop     si ;~ 0FBC:255E
cs=0xfbc;eip=0x00255f; 	X(POP(di));	// 31855 pop     di ;~ 0FBC:255F
cs=0xfbc;eip=0x002560; 	T(MOV(sp, bp));	// 31856 mov     sp, bp ;~ 0FBC:2560
cs=0xfbc;eip=0x002562; 	X(POP(bp));	// 31857 pop     bp ;~ 0FBC:2562
cs=0xfbc;eip=0x002563; 	J(RETF(0));	// 31858 retf ;~ 0FBC:2563
loc_20704:
	// 6442 
cs=0xfbc;eip=0x002564; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ae2))));	// 31862 mov     ax, [bp+var_AE2] ;~ 0FBC:2564
cs=0xfbc;eip=0x002568; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_ae0))));	// 31863 mov     dx, [bp+var_AE0] ;~ 0FBC:2568
cs=0xfbc;eip=0x00256c; 	X(MOV(*(dw*)(raddr(ss,bp+var_74a)), ax));	// 31864 mov     [bp+var_74A], ax ;~ 0FBC:256C
cs=0xfbc;eip=0x002570; 	X(MOV(*(dw*)(raddr(ss,bp+var_748)), dx));	// 31865 mov     [bp+var_748], dx ;~ 0FBC:2570
cs=0xfbc;eip=0x002574; 	X(MOV(*(raddr(ss,bp+var_3a6)), 0));	// 31866 mov     [bp+var_3A6], 0 ;~ 0FBC:2574
cs=0xfbc;eip=0x002579; 	X(MOV(*(raddr(ss,bp+var_4)), 0));	// 31867 mov     [bp+var_4], 0 ;~ 0FBC:2579
cs=0xfbc;eip=0x00257d; 	X(MOV(track_pieces_counter, 0));	// 31868 mov     track_pieces_counter, 0 ;~ 0FBC:257D
cs=0xfbc;eip=0x002583; 	T(SUB(si, si));	// 31869 sub     si, si ;~ 0FBC:2583
loc_20725:
	// 6443 
cs=0xfbc;eip=0x002585; 	T(LES(bx, trackdata19));	// 31872 les     bx, trackdata19 ;~ 0FBC:2585
cs=0xfbc;eip=0x002589; 	X(MOV(*(raddr(es,bx+si)), 0x0FF));	// 31873 mov     byte ptr es:[bx+si], 0FFh ;~ 0FBC:2589
cs=0xfbc;eip=0x00258d; 	T(INC(si));	// 31874 inc     si ;~ 0FBC:258D
cs=0xfbc;eip=0x00258e; 	T(CMP(si, 0x385));	// 31875 cmp     si, 385h ;~ 0FBC:258E
cs=0xfbc;eip=0x002592; 	J(JL(loc_20725));	// 31876 jl      short loc_20725 ;~ 0FBC:2592
cs=0xfbc;eip=0x002594; 	X(MOV(*(raddr(ss,bp+var_73a)), 0));	// 31877 mov     [bp+var_73A], 0 ;~ 0FBC:2594
cs=0xfbc;eip=0x002599; 	J(JMP(loc_207a4));	// 31878 jmp     short loc_207A4 ;~ 0FBC:2599
loc_2073c:
	// 6444 
cs=0xfbc;eip=0x00259c; 	T(MOV(bl, *(raddr(ss,bp+var_74e))));	// 31884 mov     bl, [bp+var_74E] ;~ 0FBC:259C
cs=0xfbc;eip=0x0025a0; 	T(SUB(bh, bh));	// 31885 sub     bh, bh ;~ 0FBC:25A0
cs=0xfbc;eip=0x0025a2; 	T(MOV(al, *((terrconndatawtoe)+bx)));	// 31886 mov     al, terrConnDataWtoE[bx] ;~ 0FBC:25A2
cs=0xfbc;eip=0x0025a6; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 31887 mov     [bp+var_12], al ;~ 0FBC:25A6
cs=0xfbc;eip=0x0025a9; 	X(INC(*(raddr(ss,bp+var_3a4))));	// 31888 inc     [bp+var_3A4] ;~ 0FBC:25A9
loc_2074d:
	// 6445 
cs=0xfbc;eip=0x0025ad; 	T(CMP(*(raddr(ss,bp+var_3a4)), 0x1E));	// 31891 cmp     [bp+var_3A4], 1Eh ;~ 0FBC:25AD
cs=0xfbc;eip=0x0025b2; 	J(JGE(loc_207a0));	// 31892 jge     short loc_207A0 ;~ 0FBC:25B2
cs=0xfbc;eip=0x0025b4; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 31893 mov     al, [bp+var_73A] ;~ 0FBC:25B4
cs=0xfbc;eip=0x0025b8; 	T(CBW);	// 31894 cbw ;~ 0FBC:25B8
cs=0xfbc;eip=0x0025b9; 	T(MOV(bx, ax));	// 31895 mov     bx, ax ;~ 0FBC:25B9
cs=0xfbc;eip=0x0025bb; 	T(SHL(bx, 1));	// 31896 shl     bx, 1 ;~ 0FBC:25BB
cs=0xfbc;eip=0x0025bd; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 31897 mov     bx, terrainrows[bx] ;~ 0FBC:25BD
cs=0xfbc;eip=0x0025c1; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 31898 mov     al, [bp+var_3A4] ;~ 0FBC:25C1
cs=0xfbc;eip=0x0025c5; 	T(CBW);	// 31899 cbw ;~ 0FBC:25C5
cs=0xfbc;eip=0x0025c6; 	T(ADD(bx, ax));	// 31900 add     bx, ax ;~ 0FBC:25C6
cs=0xfbc;eip=0x0025c8; 	T(ADD(bx, *(dw*)(((db*)&td15_terr_map_main))));	// 31901 add     bx, word ptr td15_terr_map_main ;~ 0FBC:25C8
cs=0xfbc;eip=0x0025cc; 	T(MOV(es, *(dw*)(((db*)&td15_terr_map_main)+2)));	// 31902 mov     es, word ptr td15_terr_map_main+2 ;~ 0FBC:25CC
cs=0xfbc;eip=0x0025d0; 	T(MOV(al, *(raddr(es,bx))));	// 31903 mov     al, es:[bx] ;~ 0FBC:25D0
cs=0xfbc;eip=0x0025d3; 	X(MOV(*(raddr(ss,bp+var_74e)), al));	// 31904 mov     [bp+var_74E], al ;~ 0FBC:25D3
cs=0xfbc;eip=0x0025d7; 	T(MOV(bl, al));	// 31905 mov     bl, al ;~ 0FBC:25D7
cs=0xfbc;eip=0x0025d9; 	T(SUB(bh, bh));	// 31906 sub     bh, bh ;~ 0FBC:25D9
cs=0xfbc;eip=0x0025db; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 31907 mov     al, [bp+var_12] ;~ 0FBC:25DB
cs=0xfbc;eip=0x0025de; 	T(CMP(*((terrconndataetow)+bx), al));	// 31908 cmp     terrConnDataEtoW[bx], al ;~ 0FBC:25DE
cs=0xfbc;eip=0x0025e2; 	J(JZ(loc_2073c));	// 31909 jz      short loc_2073C ;~ 0FBC:25E2
cs=0xfbc;eip=0x0025e4; 	T(CMP(al, 0x63));	// 31910 cmp     al, 63h ; 'c' ;~ 0FBC:25E4
cs=0xfbc;eip=0x0025e6; 	J(JZ(loc_2073c));	// 31911 jz      short loc_2073C ;~ 0FBC:25E6
loc_20788:
	// 6446 
cs=0xfbc;eip=0x0025e8; 	X(MOV(*(raddr(ss,bp+var_3b0)), terr_mism));	// 31914 mov     [bp+var_3B0], terr_mism ;~ 0FBC:25E8
loc_2078d:
	// 6447 
cs=0xfbc;eip=0x0025ed; 	T(CMP(*(raddr(ss,bp+var_3a4)), 0x0FF));	// 31918 cmp     [bp+var_3A4], 0FFh ;~ 0FBC:25ED
cs=0xfbc;eip=0x0025f2; 	J(JZ(loc_20797));	// 31919 jz      short loc_20797 ;~ 0FBC:25F2
cs=0xfbc;eip=0x0025f4; 	J(JMP(loc_2177a));	// 31920 jmp     loc_2177A ;~ 0FBC:25F4
loc_20797:
	// 6448 
cs=0xfbc;eip=0x0025f7; 	X(MOV(*(raddr(ss,bp+var_3a4)), 0));	// 31924 mov     [bp+var_3A4], 0 ;~ 0FBC:25F7
cs=0xfbc;eip=0x0025fc; 	J(JMP(loc_21786));	// 31925 jmp     loc_21786 ;~ 0FBC:25FC
loc_207a0:
	// 6449 
cs=0xfbc;eip=0x002600; 	X(INC(*(raddr(ss,bp+var_73a))));	// 31930 inc     [bp+var_73A] ;~ 0FBC:2600
loc_207a4:
	// 6450 
cs=0xfbc;eip=0x002604; 	T(CMP(*(raddr(ss,bp+var_73a)), 0x1E));	// 31933 cmp     [bp+var_73A], 1Eh ;~ 0FBC:2604
cs=0xfbc;eip=0x002609; 	J(JGE(loc_207b6));	// 31934 jge     short loc_207B6 ;~ 0FBC:2609
cs=0xfbc;eip=0x00260b; 	X(MOV(*(raddr(ss,bp+var_12)), 0x63));	// 31935 mov     [bp+var_12], 63h ; 'c' ;~ 0FBC:260B
cs=0xfbc;eip=0x00260f; 	X(MOV(*(raddr(ss,bp+var_3a4)), 0));	// 31936 mov     [bp+var_3A4], 0 ;~ 0FBC:260F
cs=0xfbc;eip=0x002614; 	J(JMP(loc_2074d));	// 31937 jmp     short loc_2074D ;~ 0FBC:2614
loc_207b6:
	// 6451 
cs=0xfbc;eip=0x002616; 	X(MOV(*(raddr(ss,bp+var_3a4)), 0));	// 31941 mov     [bp+var_3A4], 0 ;~ 0FBC:2616
cs=0xfbc;eip=0x00261b; 	J(JMP(loc_20812));	// 31942 jmp     short loc_20812 ;~ 0FBC:261B
loc_207be:
	// 6452 
cs=0xfbc;eip=0x00261e; 	T(MOV(bl, *(raddr(ss,bp+var_74e))));	// 31948 mov     bl, [bp+var_74E] ;~ 0FBC:261E
cs=0xfbc;eip=0x002622; 	T(SUB(bh, bh));	// 31949 sub     bh, bh ;~ 0FBC:2622
cs=0xfbc;eip=0x002624; 	T(MOV(al, *((terrconndataston)+bx)));	// 31950 mov     al, terrConnDataStoN[bx] ;~ 0FBC:2624
cs=0xfbc;eip=0x002628; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 31951 mov     [bp+var_12], al ;~ 0FBC:2628
cs=0xfbc;eip=0x00262b; 	X(INC(*(raddr(ss,bp+var_73a))));	// 31952 inc     [bp+var_73A] ;~ 0FBC:262B
loc_207cf:
	// 6453 
cs=0xfbc;eip=0x00262f; 	T(CMP(*(raddr(ss,bp+var_73a)), 0x1E));	// 31955 cmp     [bp+var_73A], 1Eh ;~ 0FBC:262F
cs=0xfbc;eip=0x002634; 	J(JGE(loc_2080e));	// 31956 jge     short loc_2080E ;~ 0FBC:2634
cs=0xfbc;eip=0x002636; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 31957 mov     al, [bp+var_73A] ;~ 0FBC:2636
cs=0xfbc;eip=0x00263a; 	T(CBW);	// 31958 cbw ;~ 0FBC:263A
cs=0xfbc;eip=0x00263b; 	T(MOV(bx, ax));	// 31959 mov     bx, ax ;~ 0FBC:263B
cs=0xfbc;eip=0x00263d; 	T(SHL(bx, 1));	// 31960 shl     bx, 1 ;~ 0FBC:263D
cs=0xfbc;eip=0x00263f; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 31961 mov     bx, terrainrows[bx] ;~ 0FBC:263F
cs=0xfbc;eip=0x002643; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 31962 mov     al, [bp+var_3A4] ;~ 0FBC:2643
cs=0xfbc;eip=0x002647; 	T(CBW);	// 31963 cbw ;~ 0FBC:2647
cs=0xfbc;eip=0x002648; 	T(ADD(bx, ax));	// 31964 add     bx, ax ;~ 0FBC:2648
cs=0xfbc;eip=0x00264a; 	T(ADD(bx, *(dw*)(((db*)&td15_terr_map_main))));	// 31965 add     bx, word ptr td15_terr_map_main ;~ 0FBC:264A
cs=0xfbc;eip=0x00264e; 	T(MOV(es, *(dw*)(((db*)&td15_terr_map_main)+2)));	// 31966 mov     es, word ptr td15_terr_map_main+2 ;~ 0FBC:264E
cs=0xfbc;eip=0x002652; 	T(MOV(al, *(raddr(es,bx))));	// 31967 mov     al, es:[bx] ;~ 0FBC:2652
cs=0xfbc;eip=0x002655; 	X(MOV(*(raddr(ss,bp+var_74e)), al));	// 31968 mov     [bp+var_74E], al ;~ 0FBC:2655
cs=0xfbc;eip=0x002659; 	T(MOV(bl, al));	// 31969 mov     bl, al ;~ 0FBC:2659
cs=0xfbc;eip=0x00265b; 	T(SUB(bh, bh));	// 31970 sub     bh, bh ;~ 0FBC:265B
cs=0xfbc;eip=0x00265d; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 31971 mov     al, [bp+var_12] ;~ 0FBC:265D
cs=0xfbc;eip=0x002660; 	T(CMP(*((terrconndatantos)+bx), al));	// 31972 cmp     terrConnDataNtoS[bx], al ;~ 0FBC:2660
cs=0xfbc;eip=0x002664; 	J(JZ(loc_207be));	// 31973 jz      short loc_207BE ;~ 0FBC:2664
cs=0xfbc;eip=0x002666; 	T(CMP(al, 0x63));	// 31974 cmp     al, 63h ; 'c' ;~ 0FBC:2666
cs=0xfbc;eip=0x002668; 	J(JZ(loc_207be));	// 31975 jz      short loc_207BE ;~ 0FBC:2668
cs=0xfbc;eip=0x00266a; 	J(JMP(loc_20788));	// 31976 jmp     loc_20788 ;~ 0FBC:266A
loc_2080e:
	// 6454 
cs=0xfbc;eip=0x00266e; 	X(INC(*(raddr(ss,bp+var_3a4))));	// 31981 inc     [bp+var_3A4] ;~ 0FBC:266E
loc_20812:
	// 6455 
cs=0xfbc;eip=0x002672; 	T(CMP(*(raddr(ss,bp+var_3a4)), 0x1E));	// 31984 cmp     [bp+var_3A4], 1Eh ;~ 0FBC:2672
cs=0xfbc;eip=0x002677; 	J(JGE(loc_20824));	// 31985 jge     short loc_20824 ;~ 0FBC:2677
cs=0xfbc;eip=0x002679; 	X(MOV(*(raddr(ss,bp+var_12)), 0x63));	// 31986 mov     [bp+var_12], 63h ; 'c' ;~ 0FBC:2679
cs=0xfbc;eip=0x00267d; 	X(MOV(*(raddr(ss,bp+var_73a)), 0));	// 31987 mov     [bp+var_73A], 0 ;~ 0FBC:267D
cs=0xfbc;eip=0x002682; 	J(JMP(loc_207cf));	// 31988 jmp     short loc_207CF ;~ 0FBC:2682
loc_20824:
	// 6456 
cs=0xfbc;eip=0x002684; 	X(MOV(*(raddr(ss,bp+var_73a)), 0));	// 31992 mov     [bp+var_73A], 0 ;~ 0FBC:2684
cs=0xfbc;eip=0x002689; 	J(JMP(loc_20956));	// 31993 jmp     loc_20956 ;~ 0FBC:2689
loc_2082c:
	// 6457 
cs=0xfbc;eip=0x00268c; 	X(MOV(track_angle, 0));	// 31998 mov     track_angle, 0 ;~ 0FBC:268C
loc_20832:
	// 6458 
cs=0xfbc;eip=0x002692; 	T(CMP(*(raddr(ss,bp+var_3a6)), 0));	// 32002 cmp     [bp+var_3A6], 0 ;~ 0FBC:2692
cs=0xfbc;eip=0x002697; 	J(JZ(loc_2087a));	// 32003 jz      short loc_2087A ;~ 0FBC:2697
cs=0xfbc;eip=0x002699; 	X(MOV(*(raddr(ss,bp+var_3b0)), many_sf));	// 32004 mov     [bp+var_3B0], many_sf ;~ 0FBC:2699
cs=0xfbc;eip=0x00269e; 	J(JMP(loc_2078d));	// 32005 jmp     loc_2078D ;~ 0FBC:269E
loc_20842:
	// 6459 
cs=0xfbc;eip=0x0026a2; 	X(MOV(track_angle, 0x200));	// 32011 mov     track_angle, 200h ;~ 0FBC:26A2
cs=0xfbc;eip=0x0026a8; 	J(JMP(loc_20832));	// 32012 jmp     short loc_20832 ;~ 0FBC:26A8
loc_2084a:
	// 6460 
cs=0xfbc;eip=0x0026aa; 	X(MOV(track_angle, 0x100));	// 32017 mov     track_angle, 100h ;~ 0FBC:26AA
cs=0xfbc;eip=0x0026b0; 	J(JMP(loc_20832));	// 32018 jmp     short loc_20832 ;~ 0FBC:26B0
loc_20852:
	// 6461 
cs=0xfbc;eip=0x0026b2; 	X(MOV(track_angle, 0x300));	// 32023 mov     track_angle, 300h ;~ 0FBC:26B2
cs=0xfbc;eip=0x0026b8; 	J(JMP(loc_20832));	// 32024 jmp     short loc_20832 ;~ 0FBC:26B8
loc_2085a:
	// 6462 
cs=0xfbc;eip=0x0026ba; 	T(CMP(ax, 0x94));	// 32028 cmp     ax, 94h ; 'î' ;~ 0FBC:26BA
cs=0xfbc;eip=0x0026bd; 	J(JZ(loc_20842));	// 32029 jz      short loc_20842 ;~ 0FBC:26BD
cs=0xfbc;eip=0x0026bf; 	T(CMP(ax, 0x95));	// 32030 cmp     ax, 95h ; 'ï' ;~ 0FBC:26BF
cs=0xfbc;eip=0x0026c2; 	J(JZ(loc_2084a));	// 32031 jz      short loc_2084A ;~ 0FBC:26C2
cs=0xfbc;eip=0x0026c4; 	T(CMP(ax, 0x96));	// 32032 cmp     ax, 96h ; 'ñ' ;~ 0FBC:26C4
cs=0xfbc;eip=0x0026c7; 	J(JZ(loc_20852));	// 32033 jz      short loc_20852 ;~ 0FBC:26C7
cs=0xfbc;eip=0x0026c9; 	T(CMP(ax, 0x0B3));	// 32034 cmp     ax, 0B3h ; '≥' ;~ 0FBC:26C9
cs=0xfbc;eip=0x0026cc; 	J(JZ(loc_20842));	// 32035 jz      short loc_20842 ;~ 0FBC:26CC
cs=0xfbc;eip=0x0026ce; 	T(CMP(ax, 0x0B4));	// 32036 cmp     ax, 0B4h ; '¥' ;~ 0FBC:26CE
cs=0xfbc;eip=0x0026d1; 	J(JZ(loc_2084a));	// 32037 jz      short loc_2084A ;~ 0FBC:26D1
cs=0xfbc;eip=0x0026d3; 	T(CMP(ax, 0x0B5));	// 32038 cmp     ax, 0B5h ; 'µ' ;~ 0FBC:26D3
loc_20876:
	// 6463 
cs=0xfbc;eip=0x0026d6; 	J(JZ(loc_20852));	// 32041 jz      short loc_20852 ;~ 0FBC:26D6
cs=0xfbc;eip=0x0026d8; 	J(JMP(loc_208bb));	// 32042 jmp     short loc_208BB ;~ 0FBC:26D8
loc_2087a:
	// 6464 
cs=0xfbc;eip=0x0026da; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32046 mov     al, [bp+var_3A4] ;~ 0FBC:26DA
cs=0xfbc;eip=0x0026de; 	X(MOV(startcol2, al));	// 32047 mov     startcol2, al ;~ 0FBC:26DE
cs=0xfbc;eip=0x0026e1; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 32048 mov     al, [bp+var_73A] ;~ 0FBC:26E1
cs=0xfbc;eip=0x0026e5; 	X(MOV(startrow2, al));	// 32049 mov     startrow2, al ;~ 0FBC:26E5
cs=0xfbc;eip=0x0026e8; 	T(CBW);	// 32050 cbw ;~ 0FBC:26E8
cs=0xfbc;eip=0x0026e9; 	T(MOV(bx, ax));	// 32051 mov     bx, ax ;~ 0FBC:26E9
cs=0xfbc;eip=0x0026eb; 	T(SHL(bx, 1));	// 32052 shl     bx, 1 ;~ 0FBC:26EB
cs=0xfbc;eip=0x0026ed; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 32053 mov     bx, terrainrows[bx] ;~ 0FBC:26ED
cs=0xfbc;eip=0x0026f1; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32054 mov     al, [bp+var_3A4] ;~ 0FBC:26F1
cs=0xfbc;eip=0x0026f5; 	T(CBW);	// 32055 cbw ;~ 0FBC:26F5
cs=0xfbc;eip=0x0026f6; 	T(ADD(bx, ax));	// 32056 add     bx, ax ;~ 0FBC:26F6
cs=0xfbc;eip=0x0026f8; 	T(ADD(bx, *(dw*)(((db*)&td15_terr_map_main))));	// 32057 add     bx, word ptr td15_terr_map_main ;~ 0FBC:26F8
cs=0xfbc;eip=0x0026fc; 	T(MOV(es, *(dw*)(((db*)&td15_terr_map_main)+2)));	// 32058 mov     es, word ptr td15_terr_map_main+2 ;~ 0FBC:26FC
cs=0xfbc;eip=0x002700; 	T(MOV(al, *(raddr(es,bx))));	// 32059 mov     al, es:[bx] ;~ 0FBC:2700
cs=0xfbc;eip=0x002703; 	X(MOV(*(raddr(ss,bp+var_74e)), al));	// 32060 mov     [bp+var_74E], al ;~ 0FBC:2703
cs=0xfbc;eip=0x002707; 	T(CMP(al, 6));	// 32061 cmp     al, 6           ; hilltop ;~ 0FBC:2707
cs=0xfbc;eip=0x002709; 	J(JNZ(loc_208b2));	// 32062 jnz     short loc_208B2 ;~ 0FBC:2709
cs=0xfbc;eip=0x00270b; 	X(MOV(hillflag, 1));	// 32063 mov     hillFlag, 1 ;~ 0FBC:270B
cs=0xfbc;eip=0x002710; 	J(JMP(loc_208b7));	// 32064 jmp     short loc_208B7 ;~ 0FBC:2710
loc_208b2:
	// 6465 
cs=0xfbc;eip=0x002712; 	X(MOV(hillflag, 0));	// 32068 mov     hillFlag, 0 ;~ 0FBC:2712
loc_208b7:
	// 6466 
cs=0xfbc;eip=0x002717; 	X(INC(*(raddr(ss,bp+var_3a6))));	// 32071 inc     [bp+var_3A6] ;~ 0FBC:2717
loc_208bb:
	// 6467 
cs=0xfbc;eip=0x00271b; 	X(INC(*(raddr(ss,bp+var_3a4))));	// 32074 inc     [bp+var_3A4] ;~ 0FBC:271B
loc_208bf:
	// 6468 
cs=0xfbc;eip=0x00271f; 	T(CMP(*(raddr(ss,bp+var_3a4)), 0x1E));	// 32077 cmp     [bp+var_3A4], 1Eh ;~ 0FBC:271F
cs=0xfbc;eip=0x002724; 	J(JL(loc_208c9));	// 32078 jl      short loc_208C9 ;~ 0FBC:2724
cs=0xfbc;eip=0x002726; 	J(JMP(loc_20952));	// 32079 jmp     loc_20952 ;~ 0FBC:2726
loc_208c9:
	// 6469 
cs=0xfbc;eip=0x002729; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 32083 mov     al, [bp+var_73A] ;~ 0FBC:2729
cs=0xfbc;eip=0x00272d; 	T(CBW);	// 32084 cbw ;~ 0FBC:272D
cs=0xfbc;eip=0x00272e; 	T(MOV(bx, ax));	// 32085 mov     bx, ax ;~ 0FBC:272E
cs=0xfbc;eip=0x002730; 	T(SHL(bx, 1));	// 32086 shl     bx, 1 ;~ 0FBC:2730
cs=0xfbc;eip=0x002732; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 32087 mov     bx, trackrows[bx] ;~ 0FBC:2732
cs=0xfbc;eip=0x002736; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32088 mov     al, [bp+var_3A4] ;~ 0FBC:2736
cs=0xfbc;eip=0x00273a; 	T(CBW);	// 32089 cbw ;~ 0FBC:273A
cs=0xfbc;eip=0x00273b; 	T(ADD(bx, ax));	// 32090 add     bx, ax ;~ 0FBC:273B
cs=0xfbc;eip=0x00273d; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 32091 add     bx, word ptr td14_elem_map_main ;~ 0FBC:273D
cs=0xfbc;eip=0x002741; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 32092 mov     es, word ptr td14_elem_map_main+2 ;~ 0FBC:2741
cs=0xfbc;eip=0x002745; 	T(MOV(al, *(raddr(es,bx))));	// 32093 mov     al, es:[bx] ;~ 0FBC:2745
cs=0xfbc;eip=0x002748; 	X(MOV(*(raddr(ss,bp+var_e)), al));	// 32094 mov     [bp+var_E], al ;~ 0FBC:2748
cs=0xfbc;eip=0x00274b; 	T(CMP(al, 0x0FD));	// 32095 cmp     al, 0FDh ; '˝'  ; <filler ;~ 0FBC:274B
cs=0xfbc;eip=0x00274d; 	J(JC(loc_208f3));	// 32096 jb      short loc_208F3 ;~ 0FBC:274D
cs=0xfbc;eip=0x00274f; 	X(MOV(*(raddr(ss,bp+var_e)), 0));	// 32097 mov     [bp+var_E], 0 ;~ 0FBC:274F
loc_208f3:
	// 6470 
cs=0xfbc;eip=0x002753; 	T(CMP(*(raddr(ss,bp+var_e)), 0x0B6));	// 32100 cmp     [bp+var_E], 0B6h ; '∂' ;~ 0FBC:2753
cs=0xfbc;eip=0x002757; 	J(JC(loc_20919));	// 32101 jb      short loc_20919 ;~ 0FBC:2757
cs=0xfbc;eip=0x002759; 	X(MOV(*(raddr(ss,bp+var_e)), 4));	// 32102 mov     [bp+var_E], 4 ;~ 0FBC:2759
cs=0xfbc;eip=0x00275d; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 32103 mov     al, [bp+var_73A] ;~ 0FBC:275D
cs=0xfbc;eip=0x002761; 	T(CBW);	// 32104 cbw ;~ 0FBC:2761
cs=0xfbc;eip=0x002762; 	T(MOV(bx, ax));	// 32105 mov     bx, ax ;~ 0FBC:2762
cs=0xfbc;eip=0x002764; 	T(SHL(bx, 1));	// 32106 shl     bx, 1 ;~ 0FBC:2764
cs=0xfbc;eip=0x002766; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 32107 mov     bx, trackrows[bx] ;~ 0FBC:2766
cs=0xfbc;eip=0x00276a; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32108 mov     al, [bp+var_3A4] ;~ 0FBC:276A
cs=0xfbc;eip=0x00276e; 	T(CBW);	// 32109 cbw ;~ 0FBC:276E
cs=0xfbc;eip=0x00276f; 	T(ADD(bx, ax));	// 32110 add     bx, ax ;~ 0FBC:276F
cs=0xfbc;eip=0x002771; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 32111 add     bx, word ptr td14_elem_map_main ;~ 0FBC:2771
cs=0xfbc;eip=0x002775; 	X(MOV(*(raddr(es,bx)), 4));	// 32112 mov     byte ptr es:[bx], 4 ;~ 0FBC:2775
loc_20919:
	// 6471 
cs=0xfbc;eip=0x002779; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 32115 mov     al, [bp+var_E] ;~ 0FBC:2779
cs=0xfbc;eip=0x00277c; 	T(SUB(ah, ah));	// 32116 sub     ah, ah ;~ 0FBC:277C
cs=0xfbc;eip=0x00277e; 	T(CMP(ax, 0x93));	// 32117 cmp     ax, 93h ; 'ì' ;~ 0FBC:277E
cs=0xfbc;eip=0x002781; 	J(JNZ(loc_20926));	// 32118 jnz     short loc_20926 ;~ 0FBC:2781
cs=0xfbc;eip=0x002783; 	J(JMP(loc_2082c));	// 32119 jmp     loc_2082C ;~ 0FBC:2783
loc_20926:
	// 6472 
cs=0xfbc;eip=0x002786; 	J(JBE(loc_2092b));	// 32123 jbe     short loc_2092B ;~ 0FBC:2786
cs=0xfbc;eip=0x002788; 	J(JMP(loc_2085a));	// 32124 jmp     loc_2085A ;~ 0FBC:2788
loc_2092b:
	// 6473 
cs=0xfbc;eip=0x00278b; 	T(CMP(ax, 1));	// 32128 cmp     ax, 1 ;~ 0FBC:278B
cs=0xfbc;eip=0x00278e; 	J(JNZ(loc_20933));	// 32129 jnz     short loc_20933 ;~ 0FBC:278E
cs=0xfbc;eip=0x002790; 	J(JMP(loc_2082c));	// 32130 jmp     loc_2082C ;~ 0FBC:2790
loc_20933:
	// 6474 
cs=0xfbc;eip=0x002793; 	T(CMP(ax, 0x86));	// 32134 cmp     ax, 86h ; 'Ü' ;~ 0FBC:2793
cs=0xfbc;eip=0x002796; 	J(JNZ(loc_2093b));	// 32135 jnz     short loc_2093B ;~ 0FBC:2796
cs=0xfbc;eip=0x002798; 	J(JMP(loc_2082c));	// 32136 jmp     loc_2082C ;~ 0FBC:2798
loc_2093b:
	// 6475 
cs=0xfbc;eip=0x00279b; 	T(CMP(ax, 0x87));	// 32140 cmp     ax, 87h ; 'á' ;~ 0FBC:279B
cs=0xfbc;eip=0x00279e; 	J(JNZ(loc_20943));	// 32141 jnz     short loc_20943 ;~ 0FBC:279E
cs=0xfbc;eip=0x0027a0; 	J(JMP(loc_20842));	// 32142 jmp     loc_20842 ;~ 0FBC:27A0
loc_20943:
	// 6476 
cs=0xfbc;eip=0x0027a3; 	T(CMP(ax, 0x88));	// 32146 cmp     ax, 88h ; 'à' ;~ 0FBC:27A3
cs=0xfbc;eip=0x0027a6; 	J(JNZ(loc_2094b));	// 32147 jnz     short loc_2094B ;~ 0FBC:27A6
cs=0xfbc;eip=0x0027a8; 	J(JMP(loc_2084a));	// 32148 jmp     loc_2084A ;~ 0FBC:27A8
loc_2094b:
	// 6477 
cs=0xfbc;eip=0x0027ab; 	T(CMP(ax, 0x89));	// 32152 cmp     ax, 89h ; 'â' ;~ 0FBC:27AB
cs=0xfbc;eip=0x0027ae; 	J(JMP(loc_20876));	// 32153 jmp     loc_20876 ;~ 0FBC:27AE
loc_20952:
	// 6478 
cs=0xfbc;eip=0x0027b2; 	X(INC(*(raddr(ss,bp+var_73a))));	// 32158 inc     [bp+var_73A] ;~ 0FBC:27B2
loc_20956:
	// 6479 
cs=0xfbc;eip=0x0027b6; 	T(CMP(*(raddr(ss,bp+var_73a)), 0x1E));	// 32161 cmp     [bp+var_73A], 1Eh ;~ 0FBC:27B6
cs=0xfbc;eip=0x0027bb; 	J(JGE(loc_20966));	// 32162 jge     short loc_20966 ;~ 0FBC:27BB
cs=0xfbc;eip=0x0027bd; 	X(MOV(*(raddr(ss,bp+var_3a4)), 0));	// 32163 mov     [bp+var_3A4], 0 ;~ 0FBC:27BD
cs=0xfbc;eip=0x0027c2; 	J(JMP(loc_208bf));	// 32164 jmp     loc_208BF ;~ 0FBC:27C2
loc_20966:
	// 6480 
cs=0xfbc;eip=0x0027c6; 	T(CMP(*(raddr(ss,bp+var_3a6)), 0));	// 32169 cmp     [bp+var_3A6], 0 ;~ 0FBC:27C6
cs=0xfbc;eip=0x0027cb; 	J(JNZ(loc_20976));	// 32170 jnz     short loc_20976 ;~ 0FBC:27CB
cs=0xfbc;eip=0x0027cd; 	X(MOV(*(raddr(ss,bp+var_3b0)), no_sf));	// 32171 mov     [bp+var_3B0], no_sf ;~ 0FBC:27CD
cs=0xfbc;eip=0x0027d2; 	J(JMP(loc_2078d));	// 32172 jmp     loc_2078D ;~ 0FBC:27D2
loc_20976:
	// 6481 
cs=0xfbc;eip=0x0027d6; 	X(MOV(track_pieces_counter, 0));	// 32177 mov     track_pieces_counter, 0 ;~ 0FBC:27D6
cs=0xfbc;eip=0x0027dc; 	X(MOV(*(raddr(ss,bp+var_746)), 0));	// 32178 mov     [bp+var_746], 0 ;~ 0FBC:27DC
cs=0xfbc;eip=0x0027e1; 	X(MOV(byte_45635, 0));	// 32179 mov     byte_45635, 0 ;~ 0FBC:27E1
cs=0xfbc;eip=0x0027e6; 	X(MOV(byte_4616e, 0));	// 32180 mov     byte_4616E, 0 ;~ 0FBC:27E6
cs=0xfbc;eip=0x0027eb; 	X(MOV(*(raddr(ss,bp+var_3a8)), 0));	// 32181 mov     [bp+var_3A8], 0 ;~ 0FBC:27EB
cs=0xfbc;eip=0x0027f0; 	X(MOV(*(raddr(ss,bp+var_ae8)), 0));	// 32182 mov     [bp+var_AE8], 0 ;~ 0FBC:27F0
cs=0xfbc;eip=0x0027f5; 	T(SUB(si, si));	// 32183 sub     si, si ;~ 0FBC:27F5
loc_20997:
	// 6482 
cs=0xfbc;eip=0x0027f7; 	X(MOV(*(raddr(ss,bp+si+var_738)), 0));	// 32186 mov     [bp+si+var_738], 0 ;~ 0FBC:27F7
cs=0xfbc;eip=0x0027fc; 	T(MOV(ax, si));	// 32187 mov     ax, si ;~ 0FBC:27FC
cs=0xfbc;eip=0x0027fe; 	T(SHL(ax, 1));	// 32188 shl     ax, 1 ;~ 0FBC:27FE
cs=0xfbc;eip=0x002800; 	X(MOV(*(dw*)(raddr(ss,bp+var_aea)), ax));	// 32189 mov     [bp+var_AEA], ax ;~ 0FBC:2800
cs=0xfbc;eip=0x002804; 	T(MOV(bx, ax));	// 32190 mov     bx, ax ;~ 0FBC:2804
cs=0xfbc;eip=0x002806; 	T(ADD(bx, *(dw*)(((db*)&td01_track_file_cpy))));	// 32191 add     bx, word ptr td01_track_file_cpy ;~ 0FBC:2806
cs=0xfbc;eip=0x00280a; 	T(MOV(es, *(dw*)(((db*)&td01_track_file_cpy)+2)));	// 32192 mov     es, word ptr td01_track_file_cpy+2 ;~ 0FBC:280A
cs=0xfbc;eip=0x00280e; 	X(MOV(*(dw*)(raddr(es,bx)), 0x0FFFF));	// 32193 mov     word ptr es:[bx], 0FFFFh ;~ 0FBC:280E
cs=0xfbc;eip=0x002813; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_aea))));	// 32194 mov     bx, [bp+var_AEA] ;~ 0FBC:2813
cs=0xfbc;eip=0x002817; 	T(ADD(bx, *(dw*)(((db*)&td02_penalty_related))));	// 32195 add     bx, word ptr td02_penalty_related ;~ 0FBC:2817
cs=0xfbc;eip=0x00281b; 	T(MOV(es, *(dw*)(((db*)&td02_penalty_related)+2)));	// 32196 mov     es, word ptr td02_penalty_related+2 ;~ 0FBC:281B
cs=0xfbc;eip=0x00281f; 	X(MOV(*(dw*)(raddr(es,bx)), 0x0FFFF));	// 32197 mov     word ptr es:[bx], 0FFFFh ;~ 0FBC:281F
cs=0xfbc;eip=0x002824; 	T(INC(si));	// 32198 inc     si ;~ 0FBC:2824
cs=0xfbc;eip=0x002825; 	T(CMP(si, 0x385));	// 32199 cmp     si, 385h ;~ 0FBC:2825
cs=0xfbc;eip=0x002829; 	J(JL(loc_20997));	// 32200 jl      short loc_20997 ;~ 0FBC:2829
cs=0xfbc;eip=0x00282b; 	T(MOV(al, startcol2));	// 32201 mov     al, startcol2 ;~ 0FBC:282B
cs=0xfbc;eip=0x00282e; 	X(MOV(*(raddr(ss,bp+var_3a4)), al));	// 32202 mov     [bp+var_3A4], al ;~ 0FBC:282E
cs=0xfbc;eip=0x002832; 	T(MOV(al, startrow2));	// 32203 mov     al, startrow2 ;~ 0FBC:2832
cs=0xfbc;eip=0x002835; 	X(MOV(*(raddr(ss,bp+var_73a)), al));	// 32204 mov     [bp+var_73A], al ;~ 0FBC:2835
cs=0xfbc;eip=0x002839; 	T(MOV(ax, track_angle));	// 32205 mov     ax, track_angle ;~ 0FBC:2839
cs=0xfbc;eip=0x00283c; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 32206 mov     [bp+var_8], ax ;~ 0FBC:283C
cs=0xfbc;eip=0x00283f; 	X(MOV(*(raddr(ss,bp+var_12)), 0));	// 32207 mov     [bp+var_12], 0 ;~ 0FBC:283F
cs=0xfbc;eip=0x002843; 	X(MOV(*(dw*)(raddr(ss,bp+var_3ac)), 0x0FFFF));	// 32208 mov     [bp+var_3AC], 0FFFFh ;~ 0FBC:2843
def_2140f:
	// 6483 
cs=0xfbc;eip=0x002849; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 32212 mov     [bp+var_2], 0   ; jumptable 0002140F default case ;~ 0FBC:2849
cs=0xfbc;eip=0x00284d; 	T(CMP(*(raddr(ss,bp+var_3a4)), 0));	// 32213 cmp     [bp+var_3A4], 0 ;~ 0FBC:284D
cs=0xfbc;eip=0x002852; 	J(JL(loc_20a0c));	// 32214 jl      short loc_20A0C ;~ 0FBC:2852
cs=0xfbc;eip=0x002854; 	T(CMP(*(raddr(ss,bp+var_73a)), 0));	// 32215 cmp     [bp+var_73A], 0 ;~ 0FBC:2854
cs=0xfbc;eip=0x002859; 	J(JL(loc_20a0c));	// 32216 jl      short loc_20A0C ;~ 0FBC:2859
cs=0xfbc;eip=0x00285b; 	T(CMP(*(raddr(ss,bp+var_3a4)), 0x1D));	// 32217 cmp     [bp+var_3A4], 1Dh ;~ 0FBC:285B
cs=0xfbc;eip=0x002860; 	J(JG(loc_20a0c));	// 32218 jg      short loc_20A0C ;~ 0FBC:2860
cs=0xfbc;eip=0x002862; 	T(CMP(*(raddr(ss,bp+var_73a)), 0x1D));	// 32219 cmp     [bp+var_73A], 1Dh ;~ 0FBC:2862
cs=0xfbc;eip=0x002867; 	J(JG(loc_20a0c));	// 32220 jg      short loc_20A0C ;~ 0FBC:2867
cs=0xfbc;eip=0x002869; 	J(JMP(loc_20ac2));	// 32221 jmp     loc_20AC2 ;~ 0FBC:2869
loc_20a0c:
	// 6484 
cs=0xfbc;eip=0x00286c; 	T(CMP(*(raddr(ss,bp+var_746)), 0));	// 32226 cmp     [bp+var_746], 0 ;~ 0FBC:286C
cs=0xfbc;eip=0x002871; 	J(JNZ(loc_20a16));	// 32227 jnz     short loc_20A16 ;~ 0FBC:2871
cs=0xfbc;eip=0x002873; 	J(JMP(loc_20f20));	// 32228 jmp     loc_20F20 ;~ 0FBC:2873
loc_20a16:
	// 6485 
cs=0xfbc;eip=0x002876; 	X(DEC(*(raddr(ss,bp+var_746))));	// 32232 dec     [bp+var_746] ;~ 0FBC:2876
cs=0xfbc;eip=0x00287a; 	T(MOV(al, *(raddr(ss,bp+var_746))));	// 32233 mov     al, [bp+var_746] ;~ 0FBC:287A
cs=0xfbc;eip=0x00287e; 	T(SUB(ah, ah));	// 32234 sub     ah, ah ;~ 0FBC:287E
cs=0xfbc;eip=0x002880; 	T(MOV(cx, ax));	// 32235 mov     cx, ax ;~ 0FBC:2880
cs=0xfbc;eip=0x002882; 	T(SHL(ax, 1));	// 32236 shl     ax, 1 ;~ 0FBC:2882
cs=0xfbc;eip=0x002884; 	T(ADD(ax, cx));	// 32237 add     ax, cx ;~ 0FBC:2884
cs=0xfbc;eip=0x002886; 	T(SHL(ax, 1));	// 32238 shl     ax, 1 ;~ 0FBC:2886
cs=0xfbc;eip=0x002888; 	T(ADD(ax, cx));	// 32239 add     ax, cx ;~ 0FBC:2888
cs=0xfbc;eip=0x00288a; 	T(SHL(ax, 1));	// 32240 shl     ax, 1 ;~ 0FBC:288A
cs=0xfbc;eip=0x00288c; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_74a))));	// 32241 add     ax, [bp+var_74A] ;~ 0FBC:288C
cs=0xfbc;eip=0x002890; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_748))));	// 32242 mov     dx, [bp+var_748] ;~ 0FBC:2890
cs=0xfbc;eip=0x002894; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_3a0))), ax));	// 32243 mov     word ptr [bp+var_3A0], ax ;~ 0FBC:2894
cs=0xfbc;eip=0x002898; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_3a0+2))), dx));	// 32244 mov     word ptr [bp+var_3A0+2], dx ;~ 0FBC:2898
cs=0xfbc;eip=0x00289c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32245 les     bx, [bp+var_3A0] ;~ 0FBC:289C
cs=0xfbc;eip=0x0028a0; 	T(MOV(al, *(raddr(es,bx))));	// 32246 mov     al, es:[bx] ;~ 0FBC:28A0
cs=0xfbc;eip=0x0028a3; 	X(MOV(*(raddr(ss,bp+var_3a4)), al));	// 32247 mov     [bp+var_3A4], al ;~ 0FBC:28A3
cs=0xfbc;eip=0x0028a7; 	T(MOV(al, *(raddr(es,bx+1))));	// 32248 mov     al, es:[bx+1] ;~ 0FBC:28A7
cs=0xfbc;eip=0x0028ab; 	X(MOV(*(raddr(ss,bp+var_73a)), al));	// 32249 mov     [bp+var_73A], al ;~ 0FBC:28AB
cs=0xfbc;eip=0x0028af; 	T(MOV(al, *(raddr(es,bx+2))));	// 32250 mov     al, es:[bx+2] ;~ 0FBC:28AF
cs=0xfbc;eip=0x0028b3; 	X(MOV(*(raddr(ss,bp+var_e)), al));	// 32251 mov     [bp+var_E], al ;~ 0FBC:28B3
cs=0xfbc;eip=0x0028b6; 	T(MOV(al, *(raddr(es,bx+3))));	// 32252 mov     al, es:[bx+3] ;~ 0FBC:28B6
cs=0xfbc;eip=0x0028ba; 	X(MOV(*(raddr(ss,bp+var_742)), al));	// 32253 mov     [bp+var_742], al ;~ 0FBC:28BA
cs=0xfbc;eip=0x0028be; 	T(MOV(al, *(raddr(es,bx+4))));	// 32254 mov     al, es:[bx+4] ;~ 0FBC:28BE
cs=0xfbc;eip=0x0028c2; 	X(MOV(*(raddr(ss,bp+var_73e)), al));	// 32255 mov     [bp+var_73E], al ;~ 0FBC:28C2
cs=0xfbc;eip=0x0028c6; 	T(MOV(al, *(raddr(es,bx+0x0B))));	// 32256 mov     al, es:[bx+0Bh] ;~ 0FBC:28C6
cs=0xfbc;eip=0x0028ca; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 32257 mov     [bp+var_12], al ;~ 0FBC:28CA
cs=0xfbc;eip=0x0028cd; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 32258 mov     ax, es:[bx+0Ch] ;~ 0FBC:28CD
cs=0xfbc;eip=0x0028d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_3ac)), ax));	// 32259 mov     [bp+var_3AC], ax ;~ 0FBC:28D1
cs=0xfbc;eip=0x0028d5; 	T(MOV(al, *(raddr(es,bx+5))));	// 32260 mov     al, es:[bx+5] ;~ 0FBC:28D5
cs=0xfbc;eip=0x0028d9; 	X(MOV(*(raddr(ss,bp+var_3a8)), al));	// 32261 mov     [bp+var_3A8], al ;~ 0FBC:28D9
cs=0xfbc;eip=0x0028dd; 	T(MOV(al, *(raddr(es,bx+6))));	// 32262 mov     al, es:[bx+6] ;~ 0FBC:28DD
cs=0xfbc;eip=0x0028e1; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 32263 mov     [bp+var_10], al ;~ 0FBC:28E1
cs=0xfbc;eip=0x0028e4; 	T(MOV(al, *(raddr(es,bx+7))));	// 32264 mov     al, es:[bx+7] ;~ 0FBC:28E4
cs=0xfbc;eip=0x0028e8; 	X(MOV(*(raddr(ss,bp+var_39a)), al));	// 32265 mov     [bp+var_39A], al ;~ 0FBC:28E8
cs=0xfbc;eip=0x0028ec; 	T(MOV(al, *(raddr(es,bx+8))));	// 32266 mov     al, es:[bx+8] ;~ 0FBC:28EC
cs=0xfbc;eip=0x0028f0; 	X(MOV(*(raddr(ss,bp+var_ae6)), al));	// 32267 mov     [bp+var_AE6], al ;~ 0FBC:28F0
cs=0xfbc;eip=0x0028f4; 	T(MOV(al, *(raddr(es,bx+9))));	// 32268 mov     al, es:[bx+9] ;~ 0FBC:28F4
cs=0xfbc;eip=0x0028f8; 	X(MOV(*(raddr(ss,bp+var_3aa)), al));	// 32269 mov     [bp+var_3AA], al ;~ 0FBC:28F8
cs=0xfbc;eip=0x0028fc; 	T(MOV(al, *(raddr(es,bx+0x0A))));	// 32270 mov     al, es:[bx+0Ah] ;~ 0FBC:28FC
cs=0xfbc;eip=0x002900; 	X(MOV(*(raddr(ss,bp+var_740)), al));	// 32271 mov     [bp+var_740], al ;~ 0FBC:2900
cs=0xfbc;eip=0x002904; 	X(MOV(*(raddr(ss,bp+var_2)), 1));	// 32272 mov     [bp+var_2], 1 ;~ 0FBC:2904
loc_20aa8:
	// 6486 
cs=0xfbc;eip=0x002908; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 32275 cmp     [bp+var_2], 0 ;~ 0FBC:2908
cs=0xfbc;eip=0x00290c; 	J(JNZ(loc_20ab1));	// 32276 jnz     short loc_20AB1 ;~ 0FBC:290C
cs=0xfbc;eip=0x00290e; 	J(JMP(def_2140f));	// 32277 jmp     def_2140F       ; jumptable 0002140F default case ;~ 0FBC:290E
loc_20ab1:
	// 6487 
cs=0xfbc;eip=0x002911; 	T(CMP(*(raddr(ss,bp+var_4)), 1));	// 32281 cmp     [bp+var_4], 1 ;~ 0FBC:2911
cs=0xfbc;eip=0x002915; 	J(JA(loc_20aba));	// 32282 ja      short loc_20ABA ;~ 0FBC:2915
cs=0xfbc;eip=0x002917; 	J(JMP(loc_20f6a));	// 32283 jmp     loc_20F6A ;~ 0FBC:2917
loc_20aba:
	// 6488 
cs=0xfbc;eip=0x00291a; 	X(MOV(*(raddr(ss,bp+var_3b0)), long_jump));	// 32287 mov     [bp+var_3B0], long_jump ;~ 0FBC:291A
cs=0xfbc;eip=0x00291f; 	J(JMP(loc_2078d));	// 32288 jmp     loc_2078D ;~ 0FBC:291F
loc_20ac2:
	// 6489 
cs=0xfbc;eip=0x002922; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32292 mov     al, [bp+var_3A4] ;~ 0FBC:2922
cs=0xfbc;eip=0x002926; 	T(CBW);	// 32293 cbw ;~ 0FBC:2926
cs=0xfbc;eip=0x002927; 	X(MOV(*(dw*)(raddr(ss,bp+var_aea)), ax));	// 32294 mov     [bp+var_AEA], ax ;~ 0FBC:2927
cs=0xfbc;eip=0x00292b; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 32295 mov     al, [bp+var_73A] ;~ 0FBC:292B
cs=0xfbc;eip=0x00292f; 	T(CBW);	// 32296 cbw ;~ 0FBC:292F
cs=0xfbc;eip=0x002930; 	T(SHL(ax, 1));	// 32297 shl     ax, 1 ;~ 0FBC:2930
cs=0xfbc;eip=0x002932; 	X(MOV(*(dw*)(raddr(ss,bp+var_aec)), ax));	// 32298 mov     [bp+var_AEC], ax ;~ 0FBC:2932
cs=0xfbc;eip=0x002936; 	T(MOV(bx, ax));	// 32299 mov     bx, ax ;~ 0FBC:2936
cs=0xfbc;eip=0x002938; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 32300 mov     bx, trackrows[bx] ;~ 0FBC:2938
cs=0xfbc;eip=0x00293c; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_aea))));	// 32301 add     bx, [bp+var_AEA] ;~ 0FBC:293C
cs=0xfbc;eip=0x002940; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 32302 add     bx, word ptr td14_elem_map_main ;~ 0FBC:2940
cs=0xfbc;eip=0x002944; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 32303 mov     es, word ptr td14_elem_map_main+2 ;~ 0FBC:2944
cs=0xfbc;eip=0x002948; 	T(MOV(al, *(raddr(es,bx))));	// 32304 mov     al, es:[bx] ;~ 0FBC:2948
cs=0xfbc;eip=0x00294b; 	X(MOV(*(raddr(ss,bp+var_e)), al));	// 32305 mov     [bp+var_E], al ;~ 0FBC:294B
cs=0xfbc;eip=0x00294e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_aec))));	// 32306 mov     bx, [bp+var_AEC] ;~ 0FBC:294E
cs=0xfbc;eip=0x002952; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 32307 mov     bx, terrainrows[bx] ;~ 0FBC:2952
cs=0xfbc;eip=0x002956; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_aea))));	// 32308 add     bx, [bp+var_AEA] ;~ 0FBC:2956
cs=0xfbc;eip=0x00295a; 	T(ADD(bx, *(dw*)(((db*)&td15_terr_map_main))));	// 32309 add     bx, word ptr td15_terr_map_main ;~ 0FBC:295A
cs=0xfbc;eip=0x00295e; 	T(MOV(es, *(dw*)(((db*)&td15_terr_map_main)+2)));	// 32310 mov     es, word ptr td15_terr_map_main+2 ;~ 0FBC:295E
cs=0xfbc;eip=0x002962; 	T(MOV(al, *(raddr(es,bx))));	// 32311 mov     al, es:[bx] ;~ 0FBC:2962
cs=0xfbc;eip=0x002965; 	X(MOV(*(raddr(ss,bp+var_74e)), al));	// 32312 mov     [bp+var_74E], al ;~ 0FBC:2965
cs=0xfbc;eip=0x002969; 	T(CMP(*(raddr(ss,bp+var_e)), 0));	// 32313 cmp     [bp+var_E], 0 ;~ 0FBC:2969
cs=0xfbc;eip=0x00296d; 	J(JZ(loc_20b30));	// 32314 jz      short loc_20B30 ;~ 0FBC:296D
cs=0xfbc;eip=0x00296f; 	T(OR(al, al));	// 32315 or      al, al ;~ 0FBC:296F
cs=0xfbc;eip=0x002971; 	J(JZ(loc_20b30));	// 32316 jz      short loc_20B30 ;~ 0FBC:2971
cs=0xfbc;eip=0x002973; 	T(CMP(al, 7));	// 32317 cmp     al, 7 ;~ 0FBC:2973
cs=0xfbc;eip=0x002975; 	J(JC(loc_20b30));	// 32318 jb      short loc_20B30 ;~ 0FBC:2975
cs=0xfbc;eip=0x002977; 	T(CMP(al, 0x0B));	// 32319 cmp     al, 0Bh ;~ 0FBC:2977
cs=0xfbc;eip=0x002979; 	J(JNC(loc_20b30));	// 32320 jnb     short loc_20B30 ;~ 0FBC:2979
cs=0xfbc;eip=0x00297b; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 32321 mov     al, [bp+var_E] ;~ 0FBC:297B
cs=0xfbc;eip=0x00297e; 	T(SUB(ah, ah));	// 32322 sub     ah, ah ;~ 0FBC:297E
cs=0xfbc;eip=0x002980; 	X(PUSH(ax));	// 32323 push    ax ;~ 0FBC:2980
cs=0xfbc;eip=0x002981; 	T(MOV(al, *(raddr(ss,bp+var_74e))));	// 32324 mov     al, [bp+var_74E] ;~ 0FBC:2981
cs=0xfbc;eip=0x002985; 	X(PUSH(ax));	// 32325 push    ax ;~ 0FBC:2985
cs=0xfbc;eip=0x002986; 	X(PUSH(cs));	// 32326 push    cs ;~ 0FBC:2986
cs=0xfbc;eip=0x002987; 	J(CALL(subst_hillroad_track,0));	// 32327 call    near ptr subst_hillroad_track ;~ 0FBC:2987
cs=0xfbc;eip=0x00298a; 	T(ADD(sp, 4));	// 32328 add     sp, 4 ;~ 0FBC:298A
cs=0xfbc;eip=0x00298d; 	X(MOV(*(raddr(ss,bp+var_e)), al));	// 32329 mov     [bp+var_E], al ;~ 0FBC:298D
loc_20b30:
	// 6490 
cs=0xfbc;eip=0x002990; 	T(CMP(*(raddr(ss,bp+var_e)), 0x0FD));	// 32333 cmp     [bp+var_E], 0FDh ; '˝' ;~ 0FBC:2990
cs=0xfbc;eip=0x002994; 	J(JNC(loc_20b39));	// 32334 jnb     short loc_20B39 ;~ 0FBC:2994
cs=0xfbc;eip=0x002996; 	J(JMP(loc_20c12));	// 32335 jmp     loc_20C12 ;~ 0FBC:2996
loc_20b39:
	// 6491 
cs=0xfbc;eip=0x002999; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 32339 mov     al, [bp+var_E] ;~ 0FBC:2999
cs=0xfbc;eip=0x00299c; 	T(SUB(ah, ah));	// 32340 sub     ah, ah ;~ 0FBC:299C
cs=0xfbc;eip=0x00299e; 	T(CMP(ax, 0x0FD));	// 32341 cmp     ax, 0FDh ; '˝' ;~ 0FBC:299E
cs=0xfbc;eip=0x0029a1; 	J(JZ(loc_20b76));	// 32342 jz      short loc_20B76 ;~ 0FBC:29A1
cs=0xfbc;eip=0x0029a3; 	T(CMP(ax, 0x0FE));	// 32343 cmp     ax, 0FEh ; '˛' ;~ 0FBC:29A3
cs=0xfbc;eip=0x0029a6; 	J(JZ(loc_20ba2));	// 32344 jz      short loc_20BA2 ;~ 0FBC:29A6
cs=0xfbc;eip=0x0029a8; 	T(CMP(ax, 0x0FF));	// 32345 cmp     ax, 0FFh ;~ 0FBC:29A8
cs=0xfbc;eip=0x0029ab; 	J(JNZ(loc_20b50));	// 32346 jnz     short loc_20B50 ;~ 0FBC:29AB
cs=0xfbc;eip=0x0029ad; 	J(JMP(loc_20bd4));	// 32347 jmp     loc_20BD4 ;~ 0FBC:29AD
loc_20b50:
	// 6492 
cs=0xfbc;eip=0x0029b0; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 32352 mov     al, [bp+var_73A] ;~ 0FBC:29B0
cs=0xfbc;eip=0x0029b4; 	T(CBW);	// 32353 cbw ;~ 0FBC:29B4
cs=0xfbc;eip=0x0029b5; 	T(MOV(bx, ax));	// 32354 mov     bx, ax ;~ 0FBC:29B5
cs=0xfbc;eip=0x0029b7; 	T(SHL(bx, 1));	// 32355 shl     bx, 1 ;~ 0FBC:29B7
cs=0xfbc;eip=0x0029b9; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 32356 mov     bx, trackrows[bx] ;~ 0FBC:29B9
cs=0xfbc;eip=0x0029bd; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32357 mov     al, [bp+var_3A4] ;~ 0FBC:29BD
cs=0xfbc;eip=0x0029c1; 	T(CBW);	// 32358 cbw ;~ 0FBC:29C1
cs=0xfbc;eip=0x0029c2; 	T(ADD(bx, ax));	// 32359 add     bx, ax ;~ 0FBC:29C2
cs=0xfbc;eip=0x0029c4; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 32360 add     bx, word ptr td14_elem_map_main ;~ 0FBC:29C4
cs=0xfbc;eip=0x0029c8; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 32361 mov     es, word ptr td14_elem_map_main+2 ;~ 0FBC:29C8
cs=0xfbc;eip=0x0029cc; 	T(MOV(al, *(raddr(es,bx))));	// 32362 mov     al, es:[bx] ;~ 0FBC:29CC
cs=0xfbc;eip=0x0029cf; 	X(MOV(*(raddr(ss,bp+var_e)), al));	// 32363 mov     [bp+var_E], al ;~ 0FBC:29CF
cs=0xfbc;eip=0x0029d2; 	J(JMP(loc_20c2e));	// 32364 jmp     loc_20C2E ;~ 0FBC:29D2
loc_20b76:
	// 6493 
cs=0xfbc;eip=0x0029d6; 	X(DEC(*(raddr(ss,bp+var_3a4))));	// 32369 dec     [bp+var_3A4] ;~ 0FBC:29D6
cs=0xfbc;eip=0x0029da; 	X(DEC(*(raddr(ss,bp+var_73a))));	// 32370 dec     [bp+var_73A] ;~ 0FBC:29DA
cs=0xfbc;eip=0x0029de; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 32371 mov     ax, [bp+var_8] ;~ 0FBC:29DE
cs=0xfbc;eip=0x0029e1; 	T(OR(ax, ax));	// 32372 or      ax, ax ;~ 0FBC:29E1
cs=0xfbc;eip=0x0029e3; 	J(JZ(loc_20b96));	// 32373 jz      short loc_20B96 ;~ 0FBC:29E3
cs=0xfbc;eip=0x0029e5; 	T(CMP(ax, 0x100));	// 32374 cmp     ax, 100h ;~ 0FBC:29E5
cs=0xfbc;eip=0x0029e8; 	J(JZ(loc_20c02));	// 32375 jz      short loc_20C02 ;~ 0FBC:29E8
cs=0xfbc;eip=0x0029ea; 	T(CMP(ax, 0x200));	// 32376 cmp     ax, 200h ;~ 0FBC:29EA
cs=0xfbc;eip=0x0029ed; 	J(JZ(loc_20c02));	// 32377 jz      short loc_20C02 ;~ 0FBC:29ED
cs=0xfbc;eip=0x0029ef; 	T(CMP(ax, 0x300));	// 32378 cmp     ax, 300h ;~ 0FBC:29EF
cs=0xfbc;eip=0x0029f2; 	J(JZ(loc_20b9c));	// 32379 jz      short loc_20B9C ;~ 0FBC:29F2
cs=0xfbc;eip=0x0029f4; 	J(JMP(loc_20b50));	// 32380 jmp     short loc_20B50 ;~ 0FBC:29F4
loc_20b96:
	// 6494 
cs=0xfbc;eip=0x0029f6; 	X(MOV(*(raddr(ss,bp+var_6)), 0x0C));	// 32384 mov     [bp+var_6], 0Ch ;~ 0FBC:29F6
cs=0xfbc;eip=0x0029fa; 	J(JMP(loc_20b50));	// 32385 jmp     short loc_20B50 ;~ 0FBC:29FA
loc_20b9c:
	// 6495 
cs=0xfbc;eip=0x0029fc; 	X(MOV(*(raddr(ss,bp+var_6)), 9));	// 32389 mov     [bp+var_6], 9 ;~ 0FBC:29FC
cs=0xfbc;eip=0x002a00; 	J(JMP(loc_20b50));	// 32390 jmp     short loc_20B50 ;~ 0FBC:2A00
loc_20ba2:
	// 6496 
cs=0xfbc;eip=0x002a02; 	X(DEC(*(raddr(ss,bp+var_73a))));	// 32394 dec     [bp+var_73A] ;~ 0FBC:2A02
cs=0xfbc;eip=0x002a06; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 32395 mov     ax, [bp+var_8] ;~ 0FBC:2A06
cs=0xfbc;eip=0x002a09; 	T(OR(ax, ax));	// 32396 or      ax, ax ;~ 0FBC:2A09
cs=0xfbc;eip=0x002a0b; 	J(JZ(loc_20bbe));	// 32397 jz      short loc_20BBE ;~ 0FBC:2A0B
cs=0xfbc;eip=0x002a0d; 	T(CMP(ax, 0x100));	// 32398 cmp     ax, 100h ;~ 0FBC:2A0D
cs=0xfbc;eip=0x002a10; 	J(JZ(loc_20bc4));	// 32399 jz      short loc_20BC4 ;~ 0FBC:2A10
cs=0xfbc;eip=0x002a12; 	T(CMP(ax, 0x200));	// 32400 cmp     ax, 200h ;~ 0FBC:2A12
cs=0xfbc;eip=0x002a15; 	J(JZ(loc_20c02));	// 32401 jz      short loc_20C02 ;~ 0FBC:2A15
cs=0xfbc;eip=0x002a17; 	T(CMP(ax, 0x300));	// 32402 cmp     ax, 300h ;~ 0FBC:2A17
cs=0xfbc;eip=0x002a1a; 	J(JZ(loc_20bcc));	// 32403 jz      short loc_20BCC ;~ 0FBC:2A1A
cs=0xfbc;eip=0x002a1c; 	J(JMP(loc_20b50));	// 32404 jmp     short loc_20B50 ;~ 0FBC:2A1C
loc_20bbe:
	// 6497 
cs=0xfbc;eip=0x002a1e; 	X(MOV(*(raddr(ss,bp+var_6)), 0x0B));	// 32408 mov     [bp+var_6], 0Bh ;~ 0FBC:2A1E
cs=0xfbc;eip=0x002a22; 	J(JMP(loc_20b50));	// 32409 jmp     short loc_20B50 ;~ 0FBC:2A22
loc_20bc4:
	// 6498 
cs=0xfbc;eip=0x002a24; 	X(MOV(*(raddr(ss,bp+var_6)), 6));	// 32413 mov     [bp+var_6], 6 ;~ 0FBC:2A24
cs=0xfbc;eip=0x002a28; 	J(JMP(loc_20b50));	// 32414 jmp     short loc_20B50 ;~ 0FBC:2A28
loc_20bcc:
	// 6499 
cs=0xfbc;eip=0x002a2c; 	X(MOV(*(raddr(ss,bp+var_6)), 7));	// 32420 mov     [bp+var_6], 7 ;~ 0FBC:2A2C
cs=0xfbc;eip=0x002a30; 	J(JMP(loc_20b50));	// 32421 jmp     loc_20B50 ;~ 0FBC:2A30
loc_20bd4:
	// 6500 
cs=0xfbc;eip=0x002a34; 	X(DEC(*(raddr(ss,bp+var_3a4))));	// 32426 dec     [bp+var_3A4] ;~ 0FBC:2A34
cs=0xfbc;eip=0x002a38; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 32427 mov     ax, [bp+var_8] ;~ 0FBC:2A38
cs=0xfbc;eip=0x002a3b; 	T(OR(ax, ax));	// 32428 or      ax, ax ;~ 0FBC:2A3B
cs=0xfbc;eip=0x002a3d; 	J(JZ(loc_20bf2));	// 32429 jz      short loc_20BF2 ;~ 0FBC:2A3D
cs=0xfbc;eip=0x002a3f; 	T(CMP(ax, 0x100));	// 32430 cmp     ax, 100h ;~ 0FBC:2A3F
cs=0xfbc;eip=0x002a42; 	J(JZ(loc_20c02));	// 32431 jz      short loc_20C02 ;~ 0FBC:2A42
cs=0xfbc;eip=0x002a44; 	T(CMP(ax, 0x200));	// 32432 cmp     ax, 200h ;~ 0FBC:2A44
cs=0xfbc;eip=0x002a47; 	J(JZ(loc_20bfa));	// 32433 jz      short loc_20BFA ;~ 0FBC:2A47
cs=0xfbc;eip=0x002a49; 	T(CMP(ax, 0x300));	// 32434 cmp     ax, 300h ;~ 0FBC:2A49
cs=0xfbc;eip=0x002a4c; 	J(JZ(loc_20c0a));	// 32435 jz      short loc_20C0A ;~ 0FBC:2A4C
cs=0xfbc;eip=0x002a4e; 	J(JMP(loc_20b50));	// 32436 jmp     loc_20B50 ;~ 0FBC:2A4E
loc_20bf2:
	// 6501 
cs=0xfbc;eip=0x002a52; 	X(MOV(*(raddr(ss,bp+var_6)), 0x0A));	// 32441 mov     [bp+var_6], 0Ah ;~ 0FBC:2A52
cs=0xfbc;eip=0x002a56; 	J(JMP(loc_20b50));	// 32442 jmp     loc_20B50 ;~ 0FBC:2A56
loc_20bfa:
	// 6502 
cs=0xfbc;eip=0x002a5a; 	X(MOV(*(raddr(ss,bp+var_6)), 5));	// 32447 mov     [bp+var_6], 5 ;~ 0FBC:2A5A
cs=0xfbc;eip=0x002a5e; 	J(JMP(loc_20b50));	// 32448 jmp     loc_20B50 ;~ 0FBC:2A5E
loc_20c02:
	// 6503 
cs=0xfbc;eip=0x002a62; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 32454 mov     [bp+var_6], 0 ;~ 0FBC:2A62
cs=0xfbc;eip=0x002a66; 	J(JMP(loc_20b50));	// 32455 jmp     loc_20B50 ;~ 0FBC:2A66
loc_20c0a:
	// 6504 
cs=0xfbc;eip=0x002a6a; 	X(MOV(*(raddr(ss,bp+var_6)), 8));	// 32460 mov     [bp+var_6], 8 ;~ 0FBC:2A6A
cs=0xfbc;eip=0x002a6e; 	J(JMP(loc_20b50));	// 32461 jmp     loc_20B50 ;~ 0FBC:2A6E
loc_20c12:
	// 6505 
cs=0xfbc;eip=0x002a72; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 32466 mov     ax, [bp+var_8] ;~ 0FBC:2A72
cs=0xfbc;eip=0x002a75; 	T(OR(ax, ax));	// 32467 or      ax, ax ;~ 0FBC:2A75
cs=0xfbc;eip=0x002a77; 	J(JZ(loc_20c2a));	// 32468 jz      short loc_20C2A ;~ 0FBC:2A77
cs=0xfbc;eip=0x002a79; 	T(CMP(ax, 0x100));	// 32469 cmp     ax, 100h ;~ 0FBC:2A79
cs=0xfbc;eip=0x002a7c; 	J(JZ(loc_20c48));	// 32470 jz      short loc_20C48 ;~ 0FBC:2A7C
cs=0xfbc;eip=0x002a7e; 	T(CMP(ax, 0x200));	// 32471 cmp     ax, 200h ;~ 0FBC:2A7E
cs=0xfbc;eip=0x002a81; 	J(JZ(loc_20c42));	// 32472 jz      short loc_20C42 ;~ 0FBC:2A81
cs=0xfbc;eip=0x002a83; 	T(CMP(ax, 0x300));	// 32473 cmp     ax, 300h ;~ 0FBC:2A83
cs=0xfbc;eip=0x002a86; 	J(JZ(loc_20c4e));	// 32474 jz      short loc_20C4E ;~ 0FBC:2A86
cs=0xfbc;eip=0x002a88; 	J(JMP(loc_20c2e));	// 32475 jmp     short loc_20C2E ;~ 0FBC:2A88
loc_20c2a:
	// 6506 
cs=0xfbc;eip=0x002a8a; 	X(MOV(*(raddr(ss,bp+var_6)), 2));	// 32479 mov     [bp+var_6], 2 ;~ 0FBC:2A8A
loc_20c2e:
	// 6507 
cs=0xfbc;eip=0x002a8e; 	T(CMP(*(raddr(ss,bp+var_4)), 0));	// 32483 cmp     [bp+var_4], 0 ;~ 0FBC:2A8E
cs=0xfbc;eip=0x002a92; 	J(JNZ(loc_20c54));	// 32484 jnz     short loc_20C54 ;~ 0FBC:2A92
cs=0xfbc;eip=0x002a94; 	T(CMP(*(raddr(ss,bp+var_6)), 0));	// 32485 cmp     [bp+var_6], 0 ;~ 0FBC:2A94
cs=0xfbc;eip=0x002a98; 	J(JNZ(loc_20c54));	// 32486 jnz     short loc_20C54 ;~ 0FBC:2A98
cs=0xfbc;eip=0x002a9a; 	X(MOV(*(raddr(ss,bp+var_3b0)), int_err));	// 32487 mov     [bp+var_3B0], int_err ;~ 0FBC:2A9A
cs=0xfbc;eip=0x002a9f; 	J(JMP(loc_2078d));	// 32488 jmp     loc_2078D ;~ 0FBC:2A9F
loc_20c42:
	// 6508 
cs=0xfbc;eip=0x002aa2; 	X(MOV(*(raddr(ss,bp+var_6)), 1));	// 32492 mov     [bp+var_6], 1 ;~ 0FBC:2AA2
cs=0xfbc;eip=0x002aa6; 	J(JMP(loc_20c2e));	// 32493 jmp     short loc_20C2E ;~ 0FBC:2AA6
loc_20c48:
	// 6509 
cs=0xfbc;eip=0x002aa8; 	X(MOV(*(raddr(ss,bp+var_6)), 4));	// 32497 mov     [bp+var_6], 4 ;~ 0FBC:2AA8
cs=0xfbc;eip=0x002aac; 	J(JMP(loc_20c2e));	// 32498 jmp     short loc_20C2E ;~ 0FBC:2AAC
loc_20c4e:
	// 6510 
cs=0xfbc;eip=0x002aae; 	X(MOV(*(raddr(ss,bp+var_6)), 3));	// 32502 mov     [bp+var_6], 3 ;~ 0FBC:2AAE
cs=0xfbc;eip=0x002ab2; 	J(JMP(loc_20c2e));	// 32503 jmp     short loc_20C2E ;~ 0FBC:2AB2
loc_20c54:
	// 6511 
cs=0xfbc;eip=0x002ab4; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 32508 mov     [bp+var_2], 0 ;~ 0FBC:2AB4
cs=0xfbc;eip=0x002ab8; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 32509 mov     al, [bp+var_E] ;~ 0FBC:2AB8
cs=0xfbc;eip=0x002abb; 	T(SUB(ah, ah));	// 32510 sub     ah, ah ;~ 0FBC:2ABB
cs=0xfbc;eip=0x002abd; 	T(MOV(bx, ax));	// 32511 mov     bx, ax ;~ 0FBC:2ABD
cs=0xfbc;eip=0x002abf; 	T(SHL(bx, 1));	// 32512 shl     bx, 1 ;~ 0FBC:2ABF
cs=0xfbc;eip=0x002ac1; 	T(ADD(bx, ax));	// 32513 add     bx, ax ;~ 0FBC:2AC1
cs=0xfbc;eip=0x002ac3; 	T(SHL(bx, 1));	// 32514 shl     bx, 1 ;~ 0FBC:2AC3
cs=0xfbc;eip=0x002ac5; 	T(ADD(bx, ax));	// 32515 add     bx, ax ;~ 0FBC:2AC5
cs=0xfbc;eip=0x002ac7; 	T(SHL(bx, 1));	// 32516 shl     bx, 1           ; *14 ;~ 0FBC:2AC7
cs=0xfbc;eip=0x002ac9; 	T(MOV(ax, *(dw*)(((db*)&trkobjectlist)+bx)));	// 32517 mov     ax, trkObjectList[bx] ;~ 0FBC:2AC9
cs=0xfbc;eip=0x002acd; 	X(MOV(*(dw*)(raddr(ss,bp+var_39c)), ax));	// 32518 mov     [bp+var_39C], ax ;~ 0FBC:2ACD
cs=0xfbc;eip=0x002ad1; 	T(OR(ax, ax));	// 32519 or      ax, ax ;~ 0FBC:2AD1
cs=0xfbc;eip=0x002ad3; 	J(JNZ(loc_20c78));	// 32520 jnz     short loc_20C78 ;~ 0FBC:2AD3
cs=0xfbc;eip=0x002ad5; 	J(JMP(loc_20e82));	// 32521 jmp     loc_20E82 ;~ 0FBC:2AD5
loc_20c78:
	// 6512 
cs=0xfbc;eip=0x002ad8; 	T(SUB(si, si));	// 32525 sub     si, si ;~ 0FBC:2AD8
cs=0xfbc;eip=0x002ada; 	J(JMP(loc_20e3a));	// 32526 jmp     loc_20E3A ;~ 0FBC:2ADA
loc_20c7e:
	// 6513 
cs=0xfbc;eip=0x002ade; 	X(MOV(*(raddr(ss,bp+var_ae4)), 0));	// 32531 mov     [bp+var_AE4], 0 ;~ 0FBC:2ADE
cs=0xfbc;eip=0x002ae3; 	J(JMP(loc_20ca2));	// 32532 jmp     short loc_20CA2 ;~ 0FBC:2AE3
loc_20c86:
	// 6514 
cs=0xfbc;eip=0x002ae6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3ae))));	// 32537 mov     bx, [bp+var_3AE] ;~ 0FBC:2AE6
cs=0xfbc;eip=0x002aea; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 32538 mov     al, [bp+var_6] ;~ 0FBC:2AEA
cs=0xfbc;eip=0x002aed; 	T(CMP(*(raddr(ds,bx+2)), al));	// 32539 cmp     [bx+2], al ;~ 0FBC:2AED
cs=0xfbc;eip=0x002af0; 	J(JNZ(loc_20ca2));	// 32540 jnz     short loc_20CA2 ;~ 0FBC:2AF0
cs=0xfbc;eip=0x002af2; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 32541 mov     al, [bp+var_12] ;~ 0FBC:2AF2
cs=0xfbc;eip=0x002af5; 	T(CMP(*(raddr(ds,bx+4)), al));	// 32542 cmp     [bx+4], al ;~ 0FBC:2AF5
cs=0xfbc;eip=0x002af8; 	J(JZ(loc_20c9d));	// 32543 jz      short loc_20C9D ;~ 0FBC:2AF8
cs=0xfbc;eip=0x002afa; 	J(JMP(loc_20e79));	// 32544 jmp     loc_20E79 ;~ 0FBC:2AFA
loc_20c9d:
	// 6515 
cs=0xfbc;eip=0x002afd; 	X(MOV(*(raddr(ss,bp+var_ae4)), 1));	// 32548 mov     [bp+var_AE4], 1 ;~ 0FBC:2AFD
loc_20ca2:
	// 6516 
cs=0xfbc;eip=0x002b02; 	T(CMP(*(raddr(ss,bp+var_ae4)), 0));	// 32552 cmp     [bp+var_AE4], 0 ;~ 0FBC:2B02
cs=0xfbc;eip=0x002b07; 	J(JGE(loc_20cac));	// 32553 jge     short loc_20CAC ;~ 0FBC:2B07
cs=0xfbc;eip=0x002b09; 	J(JMP(loc_20d48));	// 32554 jmp     loc_20D48 ;~ 0FBC:2B09
loc_20cac:
	// 6517 
cs=0xfbc;eip=0x002b0c; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 32558 mov     al, [bp+var_73A] ;~ 0FBC:2B0C
cs=0xfbc;eip=0x002b10; 	T(CBW);	// 32559 cbw ;~ 0FBC:2B10
cs=0xfbc;eip=0x002b11; 	T(MOV(bx, ax));	// 32560 mov     bx, ax ;~ 0FBC:2B11
cs=0xfbc;eip=0x002b13; 	T(SHL(bx, 1));	// 32561 shl     bx, 1 ;~ 0FBC:2B13
cs=0xfbc;eip=0x002b15; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 32562 mov     bx, trackrows[bx] ;~ 0FBC:2B15
cs=0xfbc;eip=0x002b19; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32563 mov     al, [bp+var_3A4] ;~ 0FBC:2B19
cs=0xfbc;eip=0x002b1d; 	T(CBW);	// 32564 cbw ;~ 0FBC:2B1D
cs=0xfbc;eip=0x002b1e; 	T(ADD(bx, ax));	// 32565 add     bx, ax ;~ 0FBC:2B1E
cs=0xfbc;eip=0x002b20; 	T(ADD(bx, bp));	// 32566 add     bx, bp ;~ 0FBC:2B20
cs=0xfbc;eip=0x002b22; 	T(CMP(*(raddr(ds,bx-0x738)), 0));	// 32567 cmp     byte ptr [bx-738h], 0 ; ?? ;~ 0FBC:2B22
cs=0xfbc;eip=0x002b27; 	J(JZ(loc_20d48));	// 32568 jz      short loc_20D48 ;~ 0FBC:2B27
cs=0xfbc;eip=0x002b29; 	T(SUB(di, di));	// 32569 sub     di, di ;~ 0FBC:2B29
cs=0xfbc;eip=0x002b2b; 	J(JMP(loc_20d0e));	// 32570 jmp     short loc_20D0E ;~ 0FBC:2B2B
loc_20cce:
	// 6518 
cs=0xfbc;eip=0x002b2e; 	X(MOV(*(raddr(ss,bp+var_ae4)), 0x0FF));	// 32575 mov     [bp+var_AE4], 0FFh ;~ 0FBC:2B2E
cs=0xfbc;eip=0x002b33; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3ac))));	// 32576 mov     ax, [bp+var_3AC] ;~ 0FBC:2B33
cs=0xfbc;eip=0x002b37; 	T(SHL(ax, 1));	// 32577 shl     ax, 1 ;~ 0FBC:2B37
cs=0xfbc;eip=0x002b39; 	T(ADD(ax, *(dw*)(((db*)&td01_track_file_cpy))));	// 32578 add     ax, word ptr td01_track_file_cpy ;~ 0FBC:2B39
cs=0xfbc;eip=0x002b3d; 	T(MOV(dx, *(dw*)(((db*)&td01_track_file_cpy)+2)));	// 32579 mov     dx, word ptr td01_track_file_cpy+2 ;~ 0FBC:2B3D
cs=0xfbc;eip=0x002b41; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_af0))), ax));	// 32580 mov     word ptr [bp+var_AF0], ax ;~ 0FBC:2B41
cs=0xfbc;eip=0x002b45; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_af0+2))), dx));	// 32581 mov     word ptr [bp+var_AF0+2], dx ;~ 0FBC:2B45
cs=0xfbc;eip=0x002b49; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_af0))));	// 32582 les     bx, [bp+var_AF0] ;~ 0FBC:2B49
cs=0xfbc;eip=0x002b4d; 	T(CMP(*(dw*)(raddr(es,bx)), 0x0FFFF));	// 32583 cmp     word ptr es:[bx], 0FFFFh ;~ 0FBC:2B4D
cs=0xfbc;eip=0x002b51; 	J(JZ(loc_20d01));	// 32584 jz      short loc_20D01 ;~ 0FBC:2B51
cs=0xfbc;eip=0x002b53; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3ac))));	// 32585 mov     bx, [bp+var_3AC] ;~ 0FBC:2B53
cs=0xfbc;eip=0x002b57; 	T(SHL(bx, 1));	// 32586 shl     bx, 1 ;~ 0FBC:2B57
cs=0xfbc;eip=0x002b59; 	T(ADD(bx, *(dw*)(((db*)&td02_penalty_related))));	// 32587 add     bx, word ptr td02_penalty_related ;~ 0FBC:2B59
cs=0xfbc;eip=0x002b5d; 	T(MOV(es, *(dw*)(((db*)&td02_penalty_related)+2)));	// 32588 mov     es, word ptr td02_penalty_related+2 ;~ 0FBC:2B5D
loc_20d01:
	// 6519 
cs=0xfbc;eip=0x002b61; 	X(MOV(*(dw*)(raddr(es,bx)), di));	// 32591 mov     es:[bx], di ;~ 0FBC:2B61
cs=0xfbc;eip=0x002b64; 	T(OR(di, di));	// 32592 or      di, di ;~ 0FBC:2B64
cs=0xfbc;eip=0x002b66; 	J(JNZ(loc_20d0d));	// 32593 jnz     short loc_20D0D ;~ 0FBC:2B66
cs=0xfbc;eip=0x002b68; 	X(MOV(*(raddr(ss,bp+var_ae8)), 1));	// 32594 mov     [bp+var_AE8], 1 ;~ 0FBC:2B68
loc_20d0d:
	// 6520 
cs=0xfbc;eip=0x002b6d; 	T(INC(di));	// 32598 inc     di ;~ 0FBC:2B6D
loc_20d0e:
	// 6521 
cs=0xfbc;eip=0x002b6e; 	T(CMP(track_pieces_counter, di));	// 32601 cmp     track_pieces_counter, di ;~ 0FBC:2B6E
cs=0xfbc;eip=0x002b72; 	J(JLE(loc_20d48));	// 32602 jle     short loc_20D48 ;~ 0FBC:2B72
cs=0xfbc;eip=0x002b74; 	T(LES(bx, td21_col_from_path));	// 32603 les     bx, td21_col_from_path ;~ 0FBC:2B74
cs=0xfbc;eip=0x002b78; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32604 mov     al, [bp+var_3A4] ;~ 0FBC:2B78
cs=0xfbc;eip=0x002b7c; 	T(CMP(*(raddr(es,bx+di)), al));	// 32605 cmp     es:[bx+di], al ;~ 0FBC:2B7C
cs=0xfbc;eip=0x002b7f; 	J(JNZ(loc_20d0d));	// 32606 jnz     short loc_20D0D ;~ 0FBC:2B7F
cs=0xfbc;eip=0x002b81; 	T(LES(bx, td22_row_from_path));	// 32607 les     bx, td22_row_from_path ;~ 0FBC:2B81
cs=0xfbc;eip=0x002b85; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 32608 mov     al, [bp+var_73A] ;~ 0FBC:2B85
cs=0xfbc;eip=0x002b89; 	T(CMP(*(raddr(es,bx+di)), al));	// 32609 cmp     es:[bx+di], al ;~ 0FBC:2B89
cs=0xfbc;eip=0x002b8c; 	J(JNZ(loc_20d0d));	// 32610 jnz     short loc_20D0D ;~ 0FBC:2B8C
cs=0xfbc;eip=0x002b8e; 	T(MOV(ax, si));	// 32611 mov     ax, si ;~ 0FBC:2B8E
cs=0xfbc;eip=0x002b90; 	T(CMP(*(raddr(ss,bp+di+var_ad4)), al));	// 32612 cmp     [bp+di+var_AD4], al ;~ 0FBC:2B90
cs=0xfbc;eip=0x002b94; 	J(JNZ(loc_20d0d));	// 32613 jnz     short loc_20D0D ;~ 0FBC:2B94
cs=0xfbc;eip=0x002b96; 	T(MOV(al, *(raddr(ss,bp+var_ae4))));	// 32614 mov     al, [bp+var_AE4] ;~ 0FBC:2B96
cs=0xfbc;eip=0x002b9a; 	T(CMP(*(raddr(ss,bp+di+var_398)), al));	// 32615 cmp     [bp+di+var_398], al ;~ 0FBC:2B9A
cs=0xfbc;eip=0x002b9e; 	J(JZ(loc_20cce));	// 32616 jz      short loc_20CCE ;~ 0FBC:2B9E
cs=0xfbc;eip=0x002ba0; 	X(MOV(*(raddr(ss,bp+var_3b0)), wrong_way));	// 32617 mov     [bp+var_3B0], wrong_way ;~ 0FBC:2BA0
cs=0xfbc;eip=0x002ba5; 	J(JMP(loc_2078d));	// 32618 jmp     loc_2078D ;~ 0FBC:2BA5
loc_20d48:
	// 6522 
cs=0xfbc;eip=0x002ba8; 	T(CMP(*(raddr(ss,bp+var_ae4)), 0));	// 32623 cmp     [bp+var_AE4], 0 ;~ 0FBC:2BA8
cs=0xfbc;eip=0x002bad; 	J(JGE(loc_20d52));	// 32624 jge     short loc_20D52 ;~ 0FBC:2BAD
cs=0xfbc;eip=0x002baf; 	J(JMP(loc_20e39));	// 32625 jmp     loc_20E39 ;~ 0FBC:2BAF
loc_20d52:
	// 6523 
cs=0xfbc;eip=0x002bb2; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 32629 cmp     [bp+var_2], 0 ;~ 0FBC:2BB2
cs=0xfbc;eip=0x002bb6; 	J(JNZ(loc_20d6a));	// 32630 jnz     short loc_20D6A ;~ 0FBC:2BB6
cs=0xfbc;eip=0x002bb8; 	T(MOV(ax, si));	// 32631 mov     ax, si ;~ 0FBC:2BB8
cs=0xfbc;eip=0x002bba; 	X(MOV(*(raddr(ss,bp+var_742)), al));	// 32632 mov     [bp+var_742], al ;~ 0FBC:2BBA
cs=0xfbc;eip=0x002bbe; 	T(MOV(al, *(raddr(ss,bp+var_ae4))));	// 32633 mov     al, [bp+var_AE4] ;~ 0FBC:2BBE
cs=0xfbc;eip=0x002bc2; 	X(MOV(*(raddr(ss,bp+var_73e)), al));	// 32634 mov     [bp+var_73E], al ;~ 0FBC:2BC2
cs=0xfbc;eip=0x002bc6; 	J(JMP(loc_20e36));	// 32635 jmp     loc_20E36 ;~ 0FBC:2BC6
loc_20d6a:
	// 6524 
cs=0xfbc;eip=0x002bca; 	T(CMP(*(raddr(ss,bp+var_746)), 0x40));	// 32640 cmp     [bp+var_746], 40h ; '@' ;~ 0FBC:2BCA
cs=0xfbc;eip=0x002bcf; 	J(JNZ(loc_20d7a));	// 32641 jnz     short loc_20D7A ;~ 0FBC:2BCF
cs=0xfbc;eip=0x002bd1; 	X(MOV(*(raddr(ss,bp+var_3b0)), many_path));	// 32642 mov     [bp+var_3B0], many_path ;~ 0FBC:2BD1
cs=0xfbc;eip=0x002bd6; 	J(JMP(loc_2078d));	// 32643 jmp     loc_2078D ;~ 0FBC:2BD6
loc_20d7a:
	// 6525 
cs=0xfbc;eip=0x002bda; 	T(MOV(al, *(raddr(ss,bp+var_746))));	// 32648 mov     al, [bp+var_746] ;~ 0FBC:2BDA
cs=0xfbc;eip=0x002bde; 	T(SUB(ah, ah));	// 32649 sub     ah, ah ;~ 0FBC:2BDE
cs=0xfbc;eip=0x002be0; 	T(MOV(cx, ax));	// 32650 mov     cx, ax ;~ 0FBC:2BE0
cs=0xfbc;eip=0x002be2; 	T(SHL(ax, 1));	// 32651 shl     ax, 1 ;~ 0FBC:2BE2
cs=0xfbc;eip=0x002be4; 	T(ADD(ax, cx));	// 32652 add     ax, cx ;~ 0FBC:2BE4
cs=0xfbc;eip=0x002be6; 	T(SHL(ax, 1));	// 32653 shl     ax, 1 ;~ 0FBC:2BE6
cs=0xfbc;eip=0x002be8; 	T(ADD(ax, cx));	// 32654 add     ax, cx ;~ 0FBC:2BE8
cs=0xfbc;eip=0x002bea; 	T(SHL(ax, 1));	// 32655 shl     ax, 1 ;~ 0FBC:2BEA
cs=0xfbc;eip=0x002bec; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_74a))));	// 32656 add     ax, [bp+var_74A] ;~ 0FBC:2BEC
cs=0xfbc;eip=0x002bf0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_748))));	// 32657 mov     dx, [bp+var_748] ;~ 0FBC:2BF0
cs=0xfbc;eip=0x002bf4; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_3a0))), ax));	// 32658 mov     word ptr [bp+var_3A0], ax ;~ 0FBC:2BF4
cs=0xfbc;eip=0x002bf8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_3a0+2))), dx));	// 32659 mov     word ptr [bp+var_3A0+2], dx ;~ 0FBC:2BF8
cs=0xfbc;eip=0x002bfc; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32660 les     bx, [bp+var_3A0] ;~ 0FBC:2BFC
cs=0xfbc;eip=0x002c00; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32661 mov     al, [bp+var_3A4] ;~ 0FBC:2C00
cs=0xfbc;eip=0x002c04; 	X(MOV(*(raddr(es,bx)), al));	// 32662 mov     es:[bx], al ;~ 0FBC:2C04
cs=0xfbc;eip=0x002c07; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32663 les     bx, [bp+var_3A0] ;~ 0FBC:2C07
cs=0xfbc;eip=0x002c0b; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 32664 mov     al, [bp+var_73A] ;~ 0FBC:2C0B
cs=0xfbc;eip=0x002c0f; 	X(MOV(*(raddr(es,bx+1)), al));	// 32665 mov     es:[bx+1], al ;~ 0FBC:2C0F
cs=0xfbc;eip=0x002c13; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32666 les     bx, [bp+var_3A0] ;~ 0FBC:2C13
cs=0xfbc;eip=0x002c17; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 32667 mov     al, [bp+var_E] ;~ 0FBC:2C17
cs=0xfbc;eip=0x002c1a; 	X(MOV(*(raddr(es,bx+2)), al));	// 32668 mov     es:[bx+2], al ;~ 0FBC:2C1A
cs=0xfbc;eip=0x002c1e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32669 les     bx, [bp+var_3A0] ;~ 0FBC:2C1E
cs=0xfbc;eip=0x002c22; 	T(MOV(ax, si));	// 32670 mov     ax, si ;~ 0FBC:2C22
cs=0xfbc;eip=0x002c24; 	X(MOV(*(raddr(es,bx+3)), al));	// 32671 mov     es:[bx+3], al ;~ 0FBC:2C24
cs=0xfbc;eip=0x002c28; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32672 les     bx, [bp+var_3A0] ;~ 0FBC:2C28
cs=0xfbc;eip=0x002c2c; 	T(MOV(al, *(raddr(ss,bp+var_ae4))));	// 32673 mov     al, [bp+var_AE4] ;~ 0FBC:2C2C
cs=0xfbc;eip=0x002c30; 	X(MOV(*(raddr(es,bx+4)), al));	// 32674 mov     es:[bx+4], al ;~ 0FBC:2C30
cs=0xfbc;eip=0x002c34; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32675 les     bx, [bp+var_3A0] ;~ 0FBC:2C34
cs=0xfbc;eip=0x002c38; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 32676 mov     al, [bp+var_12] ;~ 0FBC:2C38
cs=0xfbc;eip=0x002c3b; 	X(MOV(*(raddr(es,bx+0x0B)), al));	// 32677 mov     es:[bx+0Bh], al ;~ 0FBC:2C3B
cs=0xfbc;eip=0x002c3f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32678 les     bx, [bp+var_3A0] ;~ 0FBC:2C3F
cs=0xfbc;eip=0x002c43; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3ac))));	// 32679 mov     ax, [bp+var_3AC] ;~ 0FBC:2C43
cs=0xfbc;eip=0x002c47; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), ax));	// 32680 mov     es:[bx+0Ch], ax ;~ 0FBC:2C47
cs=0xfbc;eip=0x002c4b; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32681 les     bx, [bp+var_3A0] ;~ 0FBC:2C4B
cs=0xfbc;eip=0x002c4f; 	T(MOV(al, *(raddr(ss,bp+var_3a8))));	// 32682 mov     al, [bp+var_3A8] ;~ 0FBC:2C4F
cs=0xfbc;eip=0x002c53; 	X(MOV(*(raddr(es,bx+5)), al));	// 32683 mov     es:[bx+5], al ;~ 0FBC:2C53
cs=0xfbc;eip=0x002c57; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32684 les     bx, [bp+var_3A0] ;~ 0FBC:2C57
cs=0xfbc;eip=0x002c5b; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 32685 mov     al, [bp+var_10] ;~ 0FBC:2C5B
cs=0xfbc;eip=0x002c5e; 	X(MOV(*(raddr(es,bx+6)), al));	// 32686 mov     es:[bx+6], al ;~ 0FBC:2C5E
cs=0xfbc;eip=0x002c62; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32687 les     bx, [bp+var_3A0] ;~ 0FBC:2C62
cs=0xfbc;eip=0x002c66; 	T(MOV(al, *(raddr(ss,bp+var_39a))));	// 32688 mov     al, [bp+var_39A] ;~ 0FBC:2C66
cs=0xfbc;eip=0x002c6a; 	X(MOV(*(raddr(es,bx+7)), al));	// 32689 mov     es:[bx+7], al ;~ 0FBC:2C6A
cs=0xfbc;eip=0x002c6e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32690 les     bx, [bp+var_3A0] ;~ 0FBC:2C6E
cs=0xfbc;eip=0x002c72; 	T(MOV(al, *(raddr(ss,bp+var_ae6))));	// 32691 mov     al, [bp+var_AE6] ;~ 0FBC:2C72
cs=0xfbc;eip=0x002c76; 	X(MOV(*(raddr(es,bx+8)), al));	// 32692 mov     es:[bx+8], al ;~ 0FBC:2C76
cs=0xfbc;eip=0x002c7a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32693 les     bx, [bp+var_3A0] ;~ 0FBC:2C7A
cs=0xfbc;eip=0x002c7e; 	T(MOV(al, *(raddr(ss,bp+var_3aa))));	// 32694 mov     al, [bp+var_3AA] ;~ 0FBC:2C7E
cs=0xfbc;eip=0x002c82; 	X(MOV(*(raddr(es,bx+9)), al));	// 32695 mov     es:[bx+9], al ;~ 0FBC:2C82
cs=0xfbc;eip=0x002c86; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32696 les     bx, [bp+var_3A0] ;~ 0FBC:2C86
cs=0xfbc;eip=0x002c8a; 	T(MOV(al, *(raddr(ss,bp+var_740))));	// 32697 mov     al, [bp+var_740] ;~ 0FBC:2C8A
cs=0xfbc;eip=0x002c8e; 	X(MOV(*(raddr(es,bx+0x0A)), al));	// 32698 mov     es:[bx+0Ah], al ;~ 0FBC:2C8E
cs=0xfbc;eip=0x002c92; 	X(INC(*(raddr(ss,bp+var_746))));	// 32699 inc     [bp+var_746] ;~ 0FBC:2C92
loc_20e36:
	// 6526 
cs=0xfbc;eip=0x002c96; 	X(INC(*(raddr(ss,bp+var_2))));	// 32702 inc     [bp+var_2] ;~ 0FBC:2C96
loc_20e39:
	// 6527 
cs=0xfbc;eip=0x002c99; 	T(INC(si));	// 32705 inc     si ;~ 0FBC:2C99
loc_20e3a:
	// 6528 
cs=0xfbc;eip=0x002c9a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_39c))));	// 32708 mov     bx, [bp+var_39C] ;~ 0FBC:2C9A
cs=0xfbc;eip=0x002c9e; 	T(MOV(al, *(raddr(ds,bx+0))));	// 32709 mov     al, [bx+0] ;~ 0FBC:2C9E
cs=0xfbc;eip=0x002ca0; 	T(SUB(ah, ah));	// 32710 sub     ah, ah ;~ 0FBC:2CA0
cs=0xfbc;eip=0x002ca2; 	T(CMP(ax, si));	// 32711 cmp     ax, si ;~ 0FBC:2CA2
cs=0xfbc;eip=0x002ca4; 	J(JBE(loc_20e82));	// 32712 jbe     short loc_20E82 ;~ 0FBC:2CA4
cs=0xfbc;eip=0x002ca6; 	X(MOV(*(raddr(ss,bp+var_ae4)), 0x0FF));	// 32713 mov     [bp+var_AE4], 0FFh ;~ 0FBC:2CA6
cs=0xfbc;eip=0x002cab; 	T(MOV(ax, bx));	// 32714 mov     ax, bx ;~ 0FBC:2CAB
cs=0xfbc;eip=0x002cad; 	T(MOV(cx, si));	// 32715 mov     cx, si ;~ 0FBC:2CAD
cs=0xfbc;eip=0x002caf; 	T(MOV(dx, cx));	// 32716 mov     dx, cx ;~ 0FBC:2CAF
cs=0xfbc;eip=0x002cb1; 	T(SHL(cx, 1));	// 32717 shl     cx, 1 ;~ 0FBC:2CB1
cs=0xfbc;eip=0x002cb3; 	T(ADD(cx, dx));	// 32718 add     cx, dx ;~ 0FBC:2CB3
cs=0xfbc;eip=0x002cb5; 	T(SHL(cx, 1));	// 32719 shl     cx, 1 ;~ 0FBC:2CB5
cs=0xfbc;eip=0x002cb7; 	T(ADD(cx, dx));	// 32720 add     cx, dx ;~ 0FBC:2CB7
cs=0xfbc;eip=0x002cb9; 	T(SHL(cx, 1));	// 32721 shl     cx, 1           ; cx = si*14 ;~ 0FBC:2CB9
cs=0xfbc;eip=0x002cbb; 	T(ADD(ax, cx));	// 32722 add     ax, cx ;~ 0FBC:2CBB
cs=0xfbc;eip=0x002cbd; 	X(MOV(*(dw*)(raddr(ss,bp+var_3ae)), ax));	// 32723 mov     [bp+var_3AE], ax ;~ 0FBC:2CBD
cs=0xfbc;eip=0x002cc1; 	T(MOV(bx, ax));	// 32724 mov     bx, ax ;~ 0FBC:2CC1
cs=0xfbc;eip=0x002cc3; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 32725 mov     al, [bp+var_6] ;~ 0FBC:2CC3
cs=0xfbc;eip=0x002cc6; 	T(CMP(*(raddr(ds,bx+1)), al));	// 32726 cmp     [bx+1], al ;~ 0FBC:2CC6
cs=0xfbc;eip=0x002cc9; 	J(JZ(loc_20e6e));	// 32727 jz      short loc_20E6E ;~ 0FBC:2CC9
cs=0xfbc;eip=0x002ccb; 	J(JMP(loc_20c86));	// 32728 jmp     loc_20C86 ;~ 0FBC:2CCB
loc_20e6e:
	// 6529 
cs=0xfbc;eip=0x002cce; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 32732 mov     al, [bp+var_12] ;~ 0FBC:2CCE
cs=0xfbc;eip=0x002cd1; 	T(CMP(*(raddr(ds,bx+3)), al));	// 32733 cmp     [bx+3], al ;~ 0FBC:2CD1
cs=0xfbc;eip=0x002cd4; 	J(JNZ(loc_20e79));	// 32734 jnz     short loc_20E79 ;~ 0FBC:2CD4
cs=0xfbc;eip=0x002cd6; 	J(JMP(loc_20c7e));	// 32735 jmp     loc_20C7E ;~ 0FBC:2CD6
loc_20e79:
	// 6530 
cs=0xfbc;eip=0x002cd9; 	X(MOV(*(raddr(ss,bp+var_3b0)), elem_mism));	// 32740 mov     [bp+var_3B0], elem_mism ;~ 0FBC:2CD9
cs=0xfbc;eip=0x002cde; 	J(JMP(loc_2078d));	// 32741 jmp     loc_2078D ;~ 0FBC:2CDE
loc_20e82:
	// 6531 
cs=0xfbc;eip=0x002ce2; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 32747 cmp     [bp+var_2], 0 ;~ 0FBC:2CE2
cs=0xfbc;eip=0x002ce6; 	J(JZ(loc_20e8b));	// 32748 jz      short loc_20E8B ;~ 0FBC:2CE6
cs=0xfbc;eip=0x002ce8; 	J(JMP(loc_20aa8));	// 32749 jmp     loc_20AA8 ;~ 0FBC:2CE8
loc_20e8b:
	// 6532 
cs=0xfbc;eip=0x002ceb; 	T(CMP(*(raddr(ss,bp+var_12)), 1));	// 32753 cmp     [bp+var_12], 1 ;~ 0FBC:2CEB
cs=0xfbc;eip=0x002cef; 	J(JZ(loc_20e94));	// 32754 jz      short loc_20E94 ;~ 0FBC:2CEF
cs=0xfbc;eip=0x002cf1; 	J(JMP(loc_20a0c));	// 32755 jmp     loc_20A0C ;~ 0FBC:2CF1
loc_20e94:
	// 6533 
cs=0xfbc;eip=0x002cf4; 	T(CMP(*(raddr(ss,bp+var_4)), 2));	// 32759 cmp     [bp+var_4], 2 ;~ 0FBC:2CF4
cs=0xfbc;eip=0x002cf8; 	J(JC(loc_20e9d));	// 32760 jb      short loc_20E9D ;~ 0FBC:2CF8
cs=0xfbc;eip=0x002cfa; 	J(JMP(loc_20a0c));	// 32761 jmp     loc_20A0C ;~ 0FBC:2CFA
loc_20e9d:
	// 6534 
cs=0xfbc;eip=0x002cfd; 	T(CMP(*(raddr(ss,bp+var_3a8)), 2));	// 32765 cmp     [bp+var_3A8], 2 ;~ 0FBC:2CFD
cs=0xfbc;eip=0x002d02; 	J(JNC(loc_20eac));	// 32766 jnb     short loc_20EAC ;~ 0FBC:2D02
cs=0xfbc;eip=0x002d04; 	X(MOV(*(raddr(ss,bp+var_3b0)), no_runway));	// 32767 mov     [bp+var_3B0], no_runway ;~ 0FBC:2D04
cs=0xfbc;eip=0x002d09; 	J(JMP(loc_2078d));	// 32768 jmp     loc_2078D ;~ 0FBC:2D09
loc_20eac:
	// 6535 
cs=0xfbc;eip=0x002d0c; 	X(INC(*(raddr(ss,bp+var_3a8))));	// 32772 inc     [bp+var_3A8] ;~ 0FBC:2D0C
cs=0xfbc;eip=0x002d10; 	X(INC(*(raddr(ss,bp+var_4))));	// 32773 inc     [bp+var_4] ;~ 0FBC:2D10
cs=0xfbc;eip=0x002d13; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 32774 mov     ax, [bp+var_8] ;~ 0FBC:2D13
cs=0xfbc;eip=0x002d16; 	T(OR(ax, ax));	// 32775 or      ax, ax ;~ 0FBC:2D16
cs=0xfbc;eip=0x002d18; 	J(JZ(loc_20ecc));	// 32776 jz      short loc_20ECC ;~ 0FBC:2D18
cs=0xfbc;eip=0x002d1a; 	T(CMP(ax, 0x100));	// 32777 cmp     ax, 100h ;~ 0FBC:2D1A
cs=0xfbc;eip=0x002d1d; 	J(JZ(loc_20ef6));	// 32778 jz      short loc_20EF6 ;~ 0FBC:2D1D
cs=0xfbc;eip=0x002d1f; 	T(CMP(ax, 0x200));	// 32779 cmp     ax, 200h ;~ 0FBC:2D1F
cs=0xfbc;eip=0x002d22; 	J(JZ(loc_20ee4));	// 32780 jz      short loc_20EE4 ;~ 0FBC:2D22
cs=0xfbc;eip=0x002d24; 	T(CMP(ax, 0x300));	// 32781 cmp     ax, 300h ;~ 0FBC:2D24
cs=0xfbc;eip=0x002d27; 	J(JZ(loc_20f08));	// 32782 jz      short loc_20F08 ;~ 0FBC:2D27
cs=0xfbc;eip=0x002d29; 	J(JMP(def_2140f));	// 32783 jmp     def_2140F       ; jumptable 0002140F default case ;~ 0FBC:2D29
loc_20ecc:
	// 6536 
cs=0xfbc;eip=0x002d2c; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 32787 mov     al, [bp+var_10] ;~ 0FBC:2D2C
cs=0xfbc;eip=0x002d2f; 	X(MOV(*(raddr(ss,bp+var_3a4)), al));	// 32788 mov     [bp+var_3A4], al ;~ 0FBC:2D2F
cs=0xfbc;eip=0x002d33; 	T(MOV(al, *(raddr(ss,bp+var_39a))));	// 32789 mov     al, [bp+var_39A] ;~ 0FBC:2D33
cs=0xfbc;eip=0x002d37; 	T(SUB(al, *(raddr(ss,bp+var_4))));	// 32790 sub     al, [bp+var_4] ;~ 0FBC:2D37
cs=0xfbc;eip=0x002d3a; 	T(DEC(al));	// 32791 dec     al ;~ 0FBC:2D3A
loc_20edc:
	// 6537 
cs=0xfbc;eip=0x002d3c; 	X(MOV(*(raddr(ss,bp+var_73a)), al));	// 32794 mov     [bp+var_73A], al ;~ 0FBC:2D3C
cs=0xfbc;eip=0x002d40; 	J(JMP(def_2140f));	// 32795 jmp     def_2140F       ; jumptable 0002140F default case ;~ 0FBC:2D40
loc_20ee4:
	// 6538 
cs=0xfbc;eip=0x002d44; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 32800 mov     al, [bp+var_10] ;~ 0FBC:2D44
cs=0xfbc;eip=0x002d47; 	X(MOV(*(raddr(ss,bp+var_3a4)), al));	// 32801 mov     [bp+var_3A4], al ;~ 0FBC:2D47
cs=0xfbc;eip=0x002d4b; 	T(MOV(al, *(raddr(ss,bp+var_39a))));	// 32802 mov     al, [bp+var_39A] ;~ 0FBC:2D4B
cs=0xfbc;eip=0x002d4f; 	T(ADD(al, *(raddr(ss,bp+var_4))));	// 32803 add     al, [bp+var_4] ;~ 0FBC:2D4F
cs=0xfbc;eip=0x002d52; 	T(INC(al));	// 32804 inc     al ;~ 0FBC:2D52
cs=0xfbc;eip=0x002d54; 	J(JMP(loc_20edc));	// 32805 jmp     short loc_20EDC ;~ 0FBC:2D54
loc_20ef6:
	// 6539 
cs=0xfbc;eip=0x002d56; 	T(MOV(al, *(raddr(ss,bp+var_39a))));	// 32809 mov     al, [bp+var_39A] ;~ 0FBC:2D56
cs=0xfbc;eip=0x002d5a; 	X(MOV(*(raddr(ss,bp+var_73a)), al));	// 32810 mov     [bp+var_73A], al ;~ 0FBC:2D5A
cs=0xfbc;eip=0x002d5e; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 32811 mov     al, [bp+var_10] ;~ 0FBC:2D5E
cs=0xfbc;eip=0x002d61; 	T(ADD(al, *(raddr(ss,bp+var_4))));	// 32812 add     al, [bp+var_4] ;~ 0FBC:2D61
cs=0xfbc;eip=0x002d64; 	T(INC(al));	// 32813 inc     al ;~ 0FBC:2D64
cs=0xfbc;eip=0x002d66; 	J(JMP(loc_20f18));	// 32814 jmp     short loc_20F18 ;~ 0FBC:2D66
loc_20f08:
	// 6540 
cs=0xfbc;eip=0x002d68; 	T(MOV(al, *(raddr(ss,bp+var_39a))));	// 32818 mov     al, [bp+var_39A] ;~ 0FBC:2D68
cs=0xfbc;eip=0x002d6c; 	X(MOV(*(raddr(ss,bp+var_73a)), al));	// 32819 mov     [bp+var_73A], al ;~ 0FBC:2D6C
cs=0xfbc;eip=0x002d70; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 32820 mov     al, [bp+var_10] ;~ 0FBC:2D70
cs=0xfbc;eip=0x002d73; 	T(SUB(al, *(raddr(ss,bp+var_4))));	// 32821 sub     al, [bp+var_4] ;~ 0FBC:2D73
cs=0xfbc;eip=0x002d76; 	T(DEC(al));	// 32822 dec     al ;~ 0FBC:2D76
loc_20f18:
	// 6541 
cs=0xfbc;eip=0x002d78; 	X(MOV(*(raddr(ss,bp+var_3a4)), al));	// 32825 mov     [bp+var_3A4], al ;~ 0FBC:2D78
cs=0xfbc;eip=0x002d7c; 	J(JMP(def_2140f));	// 32826 jmp     def_2140F       ; jumptable 0002140F default case ;~ 0FBC:2D7C
loc_20f20:
	// 6542 
cs=0xfbc;eip=0x002d80; 	T(CMP(*(raddr(ss,bp+var_ae8)), 0));	// 32831 cmp     [bp+var_AE8], 0 ;~ 0FBC:2D80
cs=0xfbc;eip=0x002d85; 	J(JNZ(loc_20f30));	// 32832 jnz     short loc_20F30 ;~ 0FBC:2D85
cs=0xfbc;eip=0x002d87; 	X(MOV(*(raddr(ss,bp+var_3b0)), no_path));	// 32833 mov     [bp+var_3B0], no_path ;~ 0FBC:2D87
cs=0xfbc;eip=0x002d8c; 	J(JMP(loc_2078d));	// 32834 jmp     loc_2078D ;~ 0FBC:2D8C
loc_20f30:
	// 6543 
cs=0xfbc;eip=0x002d90; 	T(MOV(al, startcol2));	// 32839 mov     al, startcol2 ;~ 0FBC:2D90
cs=0xfbc;eip=0x002d93; 	X(MOV(byte_45d90, al));	// 32840 mov     byte_45D90, al ;~ 0FBC:2D93
cs=0xfbc;eip=0x002d96; 	T(MOV(al, startrow2));	// 32841 mov     al, startrow2 ;~ 0FBC:2D96
cs=0xfbc;eip=0x002d99; 	X(MOV(byte_45e16, al));	// 32842 mov     byte_45E16, al ;~ 0FBC:2D99
cs=0xfbc;eip=0x002d9c; 	T(MOV(ax, track_pieces_counter));	// 32843 mov     ax, track_pieces_counter ;~ 0FBC:2D9C
cs=0xfbc;eip=0x002d9f; 	T(CWD);	// 32844 cwd ;~ 0FBC:2D9F
cs=0xfbc;eip=0x002da0; 	T(MOV(cx, 3));	// 32845 mov     cx, 3 ;~ 0FBC:2DA0
cs=0xfbc;eip=0x002da3; 	T(IDIV2(cx));	// 32846 idiv    cx ;~ 0FBC:2DA3
cs=0xfbc;eip=0x002da5; 	T(MOV(si, ax));	// 32847 mov     si, ax ;~ 0FBC:2DA5
cs=0xfbc;eip=0x002da7; 	T(CMP(si, 0x40));	// 32848 cmp     si, 40h ; '@' ;~ 0FBC:2DA7
cs=0xfbc;eip=0x002daa; 	J(JLE(loc_20f4f));	// 32849 jle     short loc_20F4F ;~ 0FBC:2DAA
cs=0xfbc;eip=0x002dac; 	T(MOV(si, 0x40));	// 32850 mov     si, 40h ; '@' ;~ 0FBC:2DAC
loc_20f4f:
	// 6544 
cs=0xfbc;eip=0x002daf; 	T(MOV(ax, si));	// 32853 mov     ax, si ;~ 0FBC:2DAF
cs=0xfbc;eip=0x002db1; 	X(MOV(byte_4616e, al));	// 32854 mov     byte_4616E, al ;~ 0FBC:2DB1
cs=0xfbc;eip=0x002db4; 	T(SUB(si, si));	// 32855 sub     si, si ;~ 0FBC:2DB4
loc_20f56:
	// 6545 
cs=0xfbc;eip=0x002db6; 	X(MOV(*(raddr(ss,bp+si+var_ad4)), 0));	// 32858 mov     [bp+si+var_AD4], 0 ;~ 0FBC:2DB6
cs=0xfbc;eip=0x002dbb; 	T(INC(si));	// 32859 inc     si ;~ 0FBC:2DBB
cs=0xfbc;eip=0x002dbc; 	T(CMP(si, 0x385));	// 32860 cmp     si, 385h ;~ 0FBC:2DBC
cs=0xfbc;eip=0x002dc0; 	J(JL(loc_20f56));	// 32861 jl      short loc_20F56 ;~ 0FBC:2DC0
cs=0xfbc;eip=0x002dc2; 	T(SUB(di, di));	// 32862 sub     di, di ;~ 0FBC:2DC2
cs=0xfbc;eip=0x002dc4; 	T(SUB(si, si));	// 32863 sub     si, si ;~ 0FBC:2DC4
cs=0xfbc;eip=0x002dc6; 	J(JMP(loc_21688));	// 32864 jmp     loc_21688 ;~ 0FBC:2DC6
loc_20f6a:
	// 6546 
cs=0xfbc;eip=0x002dca; 	X(MOV(*(raddr(ss,bp+var_4)), 0));	// 32869 mov     [bp+var_4], 0 ;~ 0FBC:2DCA
cs=0xfbc;eip=0x002dce; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 32870 mov     al, [bp+var_73A] ;~ 0FBC:2DCE
cs=0xfbc;eip=0x002dd2; 	T(CBW);	// 32871 cbw ;~ 0FBC:2DD2
cs=0xfbc;eip=0x002dd3; 	T(MOV(bx, ax));	// 32872 mov     bx, ax ;~ 0FBC:2DD3
cs=0xfbc;eip=0x002dd5; 	T(SHL(bx, 1));	// 32873 shl     bx, 1 ;~ 0FBC:2DD5
cs=0xfbc;eip=0x002dd7; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 32874 mov     bx, trackrows[bx] ;~ 0FBC:2DD7
cs=0xfbc;eip=0x002ddb; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32875 mov     al, [bp+var_3A4] ;~ 0FBC:2DDB
cs=0xfbc;eip=0x002ddf; 	T(CBW);	// 32876 cbw ;~ 0FBC:2DDF
cs=0xfbc;eip=0x002de0; 	T(ADD(bx, ax));	// 32877 add     bx, ax ;~ 0FBC:2DE0
cs=0xfbc;eip=0x002de2; 	T(ADD(bx, bp));	// 32878 add     bx, bp ;~ 0FBC:2DE2
cs=0xfbc;eip=0x002de4; 	X(MOV(*(raddr(ds,bx-0x738)), 1));	// 32879 mov     byte ptr [bx-738h], 1 ;~ 0FBC:2DE4
cs=0xfbc;eip=0x002de9; 	T(MOV(bx, track_pieces_counter));	// 32880 mov     bx, track_pieces_counter ;~ 0FBC:2DE9
cs=0xfbc;eip=0x002ded; 	T(ADD(bx, bp));	// 32881 add     bx, bp ;~ 0FBC:2DED
cs=0xfbc;eip=0x002def; 	T(MOV(al, *(raddr(ss,bp+var_742))));	// 32882 mov     al, [bp+var_742] ;~ 0FBC:2DEF
cs=0xfbc;eip=0x002df3; 	X(MOV(*(raddr(ds,bx-0x0AD4)), al));	// 32883 mov     [bx-0AD4h], al ;~ 0FBC:2DF3
cs=0xfbc;eip=0x002df7; 	T(MOV(bx, track_pieces_counter));	// 32884 mov     bx, track_pieces_counter ;~ 0FBC:2DF7
cs=0xfbc;eip=0x002dfb; 	T(ADD(bx, bp));	// 32885 add     bx, bp ;~ 0FBC:2DFB
cs=0xfbc;eip=0x002dfd; 	T(MOV(al, *(raddr(ss,bp+var_73e))));	// 32886 mov     al, [bp+var_73E] ;~ 0FBC:2DFD
cs=0xfbc;eip=0x002e01; 	X(MOV(*(raddr(ds,bx-0x398)), al));	// 32887 mov     [bx-398h], al ;~ 0FBC:2E01
cs=0xfbc;eip=0x002e05; 	T(CMP(*(dw*)(raddr(ss,bp+var_3ac)), 0x0FFFF));	// 32888 cmp     [bp+var_3AC], 0FFFFh ;~ 0FBC:2E05
cs=0xfbc;eip=0x002e0a; 	J(JZ(loc_20fe0));	// 32889 jz      short loc_20FE0 ;~ 0FBC:2E0A
cs=0xfbc;eip=0x002e0c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3ac))));	// 32890 mov     ax, [bp+var_3AC] ;~ 0FBC:2E0C
cs=0xfbc;eip=0x002e10; 	T(SHL(ax, 1));	// 32891 shl     ax, 1 ;~ 0FBC:2E10
cs=0xfbc;eip=0x002e12; 	T(ADD(ax, *(dw*)(((db*)&td01_track_file_cpy))));	// 32892 add     ax, word ptr td01_track_file_cpy ;~ 0FBC:2E12
cs=0xfbc;eip=0x002e16; 	T(MOV(dx, *(dw*)(((db*)&td01_track_file_cpy)+2)));	// 32893 mov     dx, word ptr td01_track_file_cpy+2 ;~ 0FBC:2E16
cs=0xfbc;eip=0x002e1a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_af0))), ax));	// 32894 mov     word ptr [bp+var_AF0], ax ;~ 0FBC:2E1A
cs=0xfbc;eip=0x002e1e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_af0+2))), dx));	// 32895 mov     word ptr [bp+var_AF0+2], dx ;~ 0FBC:2E1E
cs=0xfbc;eip=0x002e22; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_af0))));	// 32896 les     bx, [bp+var_AF0] ;~ 0FBC:2E22
cs=0xfbc;eip=0x002e26; 	T(CMP(*(dw*)(raddr(es,bx)), 0x0FFFF));	// 32897 cmp     word ptr es:[bx], 0FFFFh ;~ 0FBC:2E26
cs=0xfbc;eip=0x002e2a; 	J(JZ(loc_20fda));	// 32898 jz      short loc_20FDA ;~ 0FBC:2E2A
cs=0xfbc;eip=0x002e2c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3ac))));	// 32899 mov     bx, [bp+var_3AC] ;~ 0FBC:2E2C
cs=0xfbc;eip=0x002e30; 	T(SHL(bx, 1));	// 32900 shl     bx, 1 ;~ 0FBC:2E30
cs=0xfbc;eip=0x002e32; 	T(ADD(bx, *(dw*)(((db*)&td02_penalty_related))));	// 32901 add     bx, word ptr td02_penalty_related ;~ 0FBC:2E32
cs=0xfbc;eip=0x002e36; 	T(MOV(es, *(dw*)(((db*)&td02_penalty_related)+2)));	// 32902 mov     es, word ptr td02_penalty_related+2 ;~ 0FBC:2E36
loc_20fda:
	// 6547 
cs=0xfbc;eip=0x002e3a; 	T(MOV(ax, track_pieces_counter));	// 32905 mov     ax, track_pieces_counter ;~ 0FBC:2E3A
cs=0xfbc;eip=0x002e3d; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 32906 mov     es:[bx], ax ;~ 0FBC:2E3D
loc_20fe0:
	// 6548 
cs=0xfbc;eip=0x002e40; 	T(MOV(ax, track_pieces_counter));	// 32909 mov     ax, track_pieces_counter ;~ 0FBC:2E40
cs=0xfbc;eip=0x002e43; 	X(MOV(*(dw*)(raddr(ss,bp+var_3ac)), ax));	// 32910 mov     [bp+var_3AC], ax ;~ 0FBC:2E43
cs=0xfbc;eip=0x002e47; 	T(MOV(bx, ax));	// 32911 mov     bx, ax ;~ 0FBC:2E47
cs=0xfbc;eip=0x002e49; 	T(ADD(bx, *(dw*)(((db*)&td21_col_from_path))));	// 32912 add     bx, word ptr td21_col_from_path ;~ 0FBC:2E49
cs=0xfbc;eip=0x002e4d; 	T(MOV(es, *(dw*)(((db*)&td21_col_from_path)+2)));	// 32913 mov     es, word ptr td21_col_from_path+2 ;~ 0FBC:2E4D
cs=0xfbc;eip=0x002e51; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32914 mov     al, [bp+var_3A4] ;~ 0FBC:2E51
cs=0xfbc;eip=0x002e55; 	X(MOV(*(raddr(es,bx)), al));	// 32915 mov     es:[bx], al ;~ 0FBC:2E55
cs=0xfbc;eip=0x002e58; 	T(MOV(bx, track_pieces_counter));	// 32916 mov     bx, track_pieces_counter ;~ 0FBC:2E58
cs=0xfbc;eip=0x002e5c; 	T(ADD(bx, *(dw*)(((db*)&td22_row_from_path))));	// 32917 add     bx, word ptr td22_row_from_path ;~ 0FBC:2E5C
cs=0xfbc;eip=0x002e60; 	T(MOV(es, *(dw*)(((db*)&td22_row_from_path)+2)));	// 32918 mov     es, word ptr td22_row_from_path+2 ;~ 0FBC:2E60
cs=0xfbc;eip=0x002e64; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 32919 mov     al, [bp+var_73A] ;~ 0FBC:2E64
cs=0xfbc;eip=0x002e68; 	X(MOV(*(raddr(es,bx)), al));	// 32920 mov     es:[bx], al ;~ 0FBC:2E68
cs=0xfbc;eip=0x002e6b; 	T(MOV(bx, track_pieces_counter));	// 32921 mov     bx, track_pieces_counter ;~ 0FBC:2E6B
cs=0xfbc;eip=0x002e6f; 	T(ADD(bx, *(dw*)(((db*)&trackdata18))));	// 32922 add     bx, word ptr trackdata18 ;~ 0FBC:2E6F
cs=0xfbc;eip=0x002e73; 	T(MOV(es, *(dw*)(((db*)&trackdata18)+2)));	// 32923 mov     es, word ptr trackdata18+2 ;~ 0FBC:2E73
cs=0xfbc;eip=0x002e77; 	T(MOV(al, *(raddr(ss,bp+var_73e))));	// 32924 mov     al, [bp+var_73E] ;~ 0FBC:2E77
cs=0xfbc;eip=0x002e7b; 	T(MOV(cl, 4));	// 32925 mov     cl, 4           ; high nibble ;~ 0FBC:2E7B
cs=0xfbc;eip=0x002e7d; 	T(SHL(al, cl));	// 32926 shl     al, cl ;~ 0FBC:2E7D
cs=0xfbc;eip=0x002e7f; 	T(ADD(al, *(raddr(ss,bp+var_742))));	// 32927 add     al, [bp+var_742] ;~ 0FBC:2E7F
cs=0xfbc;eip=0x002e83; 	X(MOV(*(raddr(es,bx)), al));	// 32928 mov     es:[bx], al ;~ 0FBC:2E83
cs=0xfbc;eip=0x002e86; 	T(MOV(bx, track_pieces_counter));	// 32929 mov     bx, track_pieces_counter ;~ 0FBC:2E86
cs=0xfbc;eip=0x002e8a; 	T(ADD(bx, *(dw*)(((db*)&td17_trk_elem_ordered))));	// 32930 add     bx, word ptr td17_trk_elem_ordered ;~ 0FBC:2E8A
cs=0xfbc;eip=0x002e8e; 	T(MOV(es, *(dw*)(((db*)&td17_trk_elem_ordered)+2)));	// 32931 mov     es, word ptr td17_trk_elem_ordered+2 ;~ 0FBC:2E8E
cs=0xfbc;eip=0x002e92; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 32932 mov     al, [bp+var_E] ;~ 0FBC:2E92
cs=0xfbc;eip=0x002e95; 	X(MOV(*(raddr(es,bx)), al));	// 32933 mov     es:[bx], al ;~ 0FBC:2E95
cs=0xfbc;eip=0x002e98; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 32934 mov     al, [bp+var_E] ;~ 0FBC:2E98
cs=0xfbc;eip=0x002e9b; 	T(SUB(ah, ah));	// 32935 sub     ah, ah ;~ 0FBC:2E9B
cs=0xfbc;eip=0x002e9d; 	T(MOV(bx, ax));	// 32936 mov     bx, ax ;~ 0FBC:2E9D
cs=0xfbc;eip=0x002e9f; 	T(SHL(bx, 1));	// 32937 shl     bx, 1 ;~ 0FBC:2E9F
cs=0xfbc;eip=0x002ea1; 	T(ADD(bx, ax));	// 32938 add     bx, ax ;~ 0FBC:2EA1
cs=0xfbc;eip=0x002ea3; 	T(SHL(bx, 1));	// 32939 shl     bx, 1 ;~ 0FBC:2EA3
cs=0xfbc;eip=0x002ea5; 	T(ADD(bx, ax));	// 32940 add     bx, ax ;~ 0FBC:2EA5
cs=0xfbc;eip=0x002ea7; 	T(SHL(bx, 1));	// 32941 shl     bx, 1 ;~ 0FBC:2EA7
cs=0xfbc;eip=0x002ea9; 	T(MOV(ax, *(dw*)(((db*)&trkobjectlist)+bx)));	// 32942 mov     ax, trkObjectList[bx] ;~ 0FBC:2EA9
cs=0xfbc;eip=0x002ead; 	X(MOV(*(dw*)(raddr(ss,bp+var_39c)), ax));	// 32943 mov     [bp+var_39C], ax ;~ 0FBC:2EAD
cs=0xfbc;eip=0x002eb1; 	T(MOV(al, *(raddr(ss,bp+var_742))));	// 32944 mov     al, [bp+var_742] ;~ 0FBC:2EB1
cs=0xfbc;eip=0x002eb5; 	T(SUB(ah, ah));	// 32945 sub     ah, ah ;~ 0FBC:2EB5
cs=0xfbc;eip=0x002eb7; 	T(MOV(cx, ax));	// 32946 mov     cx, ax ;~ 0FBC:2EB7
cs=0xfbc;eip=0x002eb9; 	T(SHL(ax, 1));	// 32947 shl     ax, 1 ;~ 0FBC:2EB9
cs=0xfbc;eip=0x002ebb; 	T(ADD(ax, cx));	// 32948 add     ax, cx ;~ 0FBC:2EBB
cs=0xfbc;eip=0x002ebd; 	T(SHL(ax, 1));	// 32949 shl     ax, 1 ;~ 0FBC:2EBD
cs=0xfbc;eip=0x002ebf; 	T(ADD(ax, cx));	// 32950 add     ax, cx ;~ 0FBC:2EBF
cs=0xfbc;eip=0x002ec1; 	T(SHL(ax, 1));	// 32951 shl     ax, 1 ;~ 0FBC:2EC1
cs=0xfbc;eip=0x002ec3; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_39c))));	// 32952 add     ax, [bp+var_39C] ;~ 0FBC:2EC3
cs=0xfbc;eip=0x002ec7; 	X(MOV(*(dw*)(raddr(ss,bp+var_3ae)), ax));	// 32953 mov     [bp+var_3AE], ax ;~ 0FBC:2EC7
cs=0xfbc;eip=0x002ecb; 	T(MOV(bx, ax));	// 32954 mov     bx, ax ;~ 0FBC:2ECB
cs=0xfbc;eip=0x002ecd; 	T(MOV(al, *(raddr(ds,bx+0x0C))));	// 32955 mov     al, [bx+0Ch] ;~ 0FBC:2ECD
cs=0xfbc;eip=0x002ed0; 	X(MOV(*(raddr(ss,bp+var_74c)), al));	// 32956 mov     [bp+var_74C], al ;~ 0FBC:2ED0
cs=0xfbc;eip=0x002ed4; 	T(OR(al, al));	// 32957 or      al, al ;~ 0FBC:2ED4
cs=0xfbc;eip=0x002ed6; 	J(JNZ(loc_21080));	// 32958 jnz     short loc_21080 ;~ 0FBC:2ED6
cs=0xfbc;eip=0x002ed8; 	X(INC(*(raddr(ss,bp+var_3a8))));	// 32959 inc     [bp+var_3A8] ;~ 0FBC:2ED8
cs=0xfbc;eip=0x002edc; 	J(JMP(loc_21367));	// 32960 jmp     loc_21367 ;~ 0FBC:2EDC
loc_21080:
	// 6549 
cs=0xfbc;eip=0x002ee0; 	T(CMP(*(raddr(ss,bp+var_74c)), 0x0FF));	// 32965 cmp     [bp+var_74C], 0FFh ;~ 0FBC:2EE0
cs=0xfbc;eip=0x002ee5; 	J(JNZ(loc_2108a));	// 32966 jnz     short loc_2108A ;~ 0FBC:2EE5
cs=0xfbc;eip=0x002ee7; 	J(JMP(loc_21362));	// 32967 jmp     loc_21362 ;~ 0FBC:2EE7
loc_2108a:
	// 6550 
cs=0xfbc;eip=0x002eea; 	T(CMP(*(raddr(ss,bp+var_3a8)), 3));	// 32971 cmp     [bp+var_3A8], 3 ;~ 0FBC:2EEA
cs=0xfbc;eip=0x002eef; 	J(JA(loc_21094));	// 32972 ja      short loc_21094 ;~ 0FBC:2EEF
cs=0xfbc;eip=0x002ef1; 	J(JMP(loc_21362));	// 32973 jmp     loc_21362 ;~ 0FBC:2EF1
loc_21094:
	// 6551 
cs=0xfbc;eip=0x002ef4; 	T(CMP(byte_45635, 0x30));	// 32977 cmp     byte_45635, 30h ; '0' ;~ 0FBC:2EF4
cs=0xfbc;eip=0x002ef9; 	J(JNZ(loc_2109e));	// 32978 jnz     short loc_2109E ;~ 0FBC:2EF9
cs=0xfbc;eip=0x002efb; 	J(JMP(loc_21362));	// 32979 jmp     loc_21362 ;~ 0FBC:2EFB
loc_2109e:
	// 6552 
cs=0xfbc;eip=0x002efe; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 32983 mov     al, [bp+var_E] ;~ 0FBC:2EFE
cs=0xfbc;eip=0x002f01; 	T(SUB(ah, ah));	// 32984 sub     ah, ah ;~ 0FBC:2F01
cs=0xfbc;eip=0x002f03; 	T(MOV(bx, ax));	// 32985 mov     bx, ax ;~ 0FBC:2F03
cs=0xfbc;eip=0x002f05; 	T(SHL(bx, 1));	// 32986 shl     bx, 1 ;~ 0FBC:2F05
cs=0xfbc;eip=0x002f07; 	T(ADD(bx, ax));	// 32987 add     bx, ax ;~ 0FBC:2F07
cs=0xfbc;eip=0x002f09; 	T(SHL(bx, 1));	// 32988 shl     bx, 1 ;~ 0FBC:2F09
cs=0xfbc;eip=0x002f0b; 	T(ADD(bx, ax));	// 32989 add     bx, ax ;~ 0FBC:2F0B
cs=0xfbc;eip=0x002f0d; 	T(SHL(bx, 1));	// 32990 shl     bx, 1 ;~ 0FBC:2F0D
cs=0xfbc;eip=0x002f0f; 	T(MOV(ax, *(dw*)(((db*)&trkobjectlist)+bx)));	// 32991 mov     ax, trkObjectList[bx] ;~ 0FBC:2F0F
cs=0xfbc;eip=0x002f13; 	X(MOV(*(dw*)(raddr(ss,bp+var_39c)), ax));	// 32992 mov     [bp+var_39C], ax ;~ 0FBC:2F13
cs=0xfbc;eip=0x002f17; 	T(MOV(al, *(raddr(ss,bp+var_742))));	// 32993 mov     al, [bp+var_742] ;~ 0FBC:2F17
cs=0xfbc;eip=0x002f1b; 	T(SUB(ah, ah));	// 32994 sub     ah, ah ;~ 0FBC:2F1B
cs=0xfbc;eip=0x002f1d; 	T(MOV(cx, ax));	// 32995 mov     cx, ax ;~ 0FBC:2F1D
cs=0xfbc;eip=0x002f1f; 	T(SHL(ax, 1));	// 32996 shl     ax, 1 ;~ 0FBC:2F1F
cs=0xfbc;eip=0x002f21; 	T(ADD(ax, cx));	// 32997 add     ax, cx ;~ 0FBC:2F21
cs=0xfbc;eip=0x002f23; 	T(SHL(ax, 1));	// 32998 shl     ax, 1 ;~ 0FBC:2F23
cs=0xfbc;eip=0x002f25; 	T(ADD(ax, cx));	// 32999 add     ax, cx ;~ 0FBC:2F25
cs=0xfbc;eip=0x002f27; 	T(SHL(ax, 1));	// 33000 shl     ax, 1 ;~ 0FBC:2F27
cs=0xfbc;eip=0x002f29; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_39c))));	// 33001 add     ax, [bp+var_39C] ;~ 0FBC:2F29
cs=0xfbc;eip=0x002f2d; 	X(MOV(*(dw*)(raddr(ss,bp+var_3ae)), ax));	// 33002 mov     [bp+var_3AE], ax ;~ 0FBC:2F2D
cs=0xfbc;eip=0x002f31; 	T(MOV(bx, ax));	// 33003 mov     bx, ax ;~ 0FBC:2F31
cs=0xfbc;eip=0x002f33; 	T(MOV(al, *(raddr(ds,bx+0x0C))));	// 33004 mov     al, [bx+0Ch] ;~ 0FBC:2F33
cs=0xfbc;eip=0x002f36; 	X(MOV(*(raddr(ss,bp+var_74c)), al));	// 33005 mov     [bp+var_74C], al ;~ 0FBC:2F36
cs=0xfbc;eip=0x002f3a; 	T(MOV(al, *(raddr(ss,bp+var_ae6))));	// 33006 mov     al, [bp+var_AE6] ;~ 0FBC:2F3A
cs=0xfbc;eip=0x002f3e; 	T(SUB(ah, ah));	// 33007 sub     ah, ah ;~ 0FBC:2F3E
cs=0xfbc;eip=0x002f40; 	T(MOV(bx, ax));	// 33008 mov     bx, ax ;~ 0FBC:2F40
cs=0xfbc;eip=0x002f42; 	T(SHL(bx, 1));	// 33009 shl     bx, 1 ;~ 0FBC:2F42
cs=0xfbc;eip=0x002f44; 	T(ADD(bx, ax));	// 33010 add     bx, ax ;~ 0FBC:2F44
cs=0xfbc;eip=0x002f46; 	T(SHL(bx, 1));	// 33011 shl     bx, 1 ;~ 0FBC:2F46
cs=0xfbc;eip=0x002f48; 	T(ADD(bx, ax));	// 33012 add     bx, ax ;~ 0FBC:2F48
cs=0xfbc;eip=0x002f4a; 	T(SHL(bx, 1));	// 33013 shl     bx, 1 ;~ 0FBC:2F4A
cs=0xfbc;eip=0x002f4c; 	T(MOV(ax, *(dw*)(((db*)&trkobjectlist)+bx)));	// 33014 mov     ax, trkObjectList[bx] ;~ 0FBC:2F4C
cs=0xfbc;eip=0x002f50; 	X(MOV(*(dw*)(raddr(ss,bp+var_39c)), ax));	// 33015 mov     [bp+var_39C], ax ;~ 0FBC:2F50
cs=0xfbc;eip=0x002f54; 	T(MOV(al, *(raddr(ss,bp+var_3aa))));	// 33016 mov     al, [bp+var_3AA] ;~ 0FBC:2F54
cs=0xfbc;eip=0x002f58; 	T(SUB(ah, ah));	// 33017 sub     ah, ah ;~ 0FBC:2F58
cs=0xfbc;eip=0x002f5a; 	T(MOV(cx, ax));	// 33018 mov     cx, ax ;~ 0FBC:2F5A
cs=0xfbc;eip=0x002f5c; 	T(SHL(ax, 1));	// 33019 shl     ax, 1 ;~ 0FBC:2F5C
cs=0xfbc;eip=0x002f5e; 	T(ADD(ax, cx));	// 33020 add     ax, cx ;~ 0FBC:2F5E
cs=0xfbc;eip=0x002f60; 	T(SHL(ax, 1));	// 33021 shl     ax, 1 ;~ 0FBC:2F60
cs=0xfbc;eip=0x002f62; 	T(ADD(ax, cx));	// 33022 add     ax, cx ;~ 0FBC:2F62
cs=0xfbc;eip=0x002f64; 	T(SHL(ax, 1));	// 33023 shl     ax, 1 ;~ 0FBC:2F64
cs=0xfbc;eip=0x002f66; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_39c))));	// 33024 add     ax, [bp+var_39C] ;~ 0FBC:2F66
cs=0xfbc;eip=0x002f6a; 	X(MOV(*(dw*)(raddr(ss,bp+var_3ae)), ax));	// 33025 mov     [bp+var_3AE], ax ;~ 0FBC:2F6A
cs=0xfbc;eip=0x002f6e; 	T(CMP(*(raddr(ss,bp+var_740)), 0));	// 33026 cmp     [bp+var_740], 0 ;~ 0FBC:2F6E
cs=0xfbc;eip=0x002f73; 	J(JZ(loc_21122));	// 33027 jz      short loc_21122 ;~ 0FBC:2F73
cs=0xfbc;eip=0x002f75; 	T(MOV(bx, ax));	// 33028 mov     bx, ax ;~ 0FBC:2F75
cs=0xfbc;eip=0x002f77; 	T(CMP(*(dw*)(raddr(ds,bx+0x0A)), 0));	// 33029 cmp     word ptr [bx+0Ah], 0 ;~ 0FBC:2F77
cs=0xfbc;eip=0x002f7b; 	J(JZ(loc_21126));	// 33030 jz      short loc_21126 ;~ 0FBC:2F7B
cs=0xfbc;eip=0x002f7d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 33031 mov     ax, [bx+0Ah] ;~ 0FBC:2F7D
cs=0xfbc;eip=0x002f80; 	J(JMP(loc_21129));	// 33032 jmp     short loc_21129 ;~ 0FBC:2F80
loc_21122:
	// 6553 
cs=0xfbc;eip=0x002f82; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3ae))));	// 33036 mov     bx, [bp+var_3AE] ;~ 0FBC:2F82
loc_21126:
	// 6554 
cs=0xfbc;eip=0x002f86; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 33039 mov     ax, [bx+8] ;~ 0FBC:2F86
loc_21129:
	// 6555 
cs=0xfbc;eip=0x002f89; 	X(MOV(*(dw*)(raddr(ss,bp+var_ade)), ax));	// 33042 mov     [bp+var_ADE], ax ;~ 0FBC:2F89
cs=0xfbc;eip=0x002f8d; 	X(MOV(*(dw*)(raddr(ss,bp+var_adc)), ds));	// 33043 mov     [bp+var_ADC], ds ;~ 0FBC:2F8D
cs=0xfbc;eip=0x002f91; 	T(CMP(*(raddr(ss,bp+var_740)), 0));	// 33044 cmp     [bp+var_740], 0 ;~ 0FBC:2F91
cs=0xfbc;eip=0x002f96; 	J(JZ(loc_21156));	// 33045 jz      short loc_21156 ;~ 0FBC:2F96
cs=0xfbc;eip=0x002f98; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3ae))));	// 33046 mov     bx, [bp+var_3AE] ;~ 0FBC:2F98
cs=0xfbc;eip=0x002f9c; 	T(MOV(al, *(raddr(ds,bx+5))));	// 33047 mov     al, [bx+5] ;~ 0FBC:2F9C
cs=0xfbc;eip=0x002f9f; 	T(SUB(ah, ah));	// 33048 sub     ah, ah ;~ 0FBC:2F9F
cs=0xfbc;eip=0x002fa1; 	T(SHL(ax, 1));	// 33049 shl     ax, 1 ;~ 0FBC:2FA1
cs=0xfbc;eip=0x002fa3; 	T(MOV(cx, ax));	// 33050 mov     cx, ax ;~ 0FBC:2FA3
cs=0xfbc;eip=0x002fa5; 	T(SHL(ax, 1));	// 33051 shl     ax, 1 ;~ 0FBC:2FA5
cs=0xfbc;eip=0x002fa7; 	T(ADD(ax, cx));	// 33052 add     ax, cx ;~ 0FBC:2FA7
cs=0xfbc;eip=0x002fa9; 	T(SHL(ax, 1));	// 33053 shl     ax, 1 ;~ 0FBC:2FA9
cs=0xfbc;eip=0x002fab; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_ade))));	// 33054 add     ax, [bp+var_ADE] ;~ 0FBC:2FAB
cs=0xfbc;eip=0x002faf; 	T(MOV(dx, ds));	// 33055 mov     dx, ds ;~ 0FBC:2FAF
cs=0xfbc;eip=0x002fb1; 	T(ADD(ax, 0x0C));	// 33056 add     ax, 0Ch ;~ 0FBC:2FB1
cs=0xfbc;eip=0x002fb4; 	J(JMP(loc_21174));	// 33057 jmp     short loc_21174 ;~ 0FBC:2FB4
loc_21156:
	// 6556 
cs=0xfbc;eip=0x002fb6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3ae))));	// 33061 mov     bx, [bp+var_3AE] ;~ 0FBC:2FB6
cs=0xfbc;eip=0x002fba; 	T(MOV(al, *(raddr(ds,bx+5))));	// 33062 mov     al, [bx+5] ;~ 0FBC:2FBA
cs=0xfbc;eip=0x002fbd; 	T(SUB(ah, ah));	// 33063 sub     ah, ah ;~ 0FBC:2FBD
cs=0xfbc;eip=0x002fbf; 	T(SHL(ax, 1));	// 33064 shl     ax, 1 ;~ 0FBC:2FBF
cs=0xfbc;eip=0x002fc1; 	T(MOV(cx, ax));	// 33065 mov     cx, ax ;~ 0FBC:2FC1
cs=0xfbc;eip=0x002fc3; 	T(SHL(ax, 1));	// 33066 shl     ax, 1 ;~ 0FBC:2FC3
cs=0xfbc;eip=0x002fc5; 	T(ADD(ax, cx));	// 33067 add     ax, cx ;~ 0FBC:2FC5
cs=0xfbc;eip=0x002fc7; 	T(SHL(ax, 1));	// 33068 shl     ax, 1 ;~ 0FBC:2FC7
cs=0xfbc;eip=0x002fc9; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_ade))));	// 33069 add     ax, [bp+var_ADE] ;~ 0FBC:2FC9
cs=0xfbc;eip=0x002fcd; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_adc))));	// 33070 mov     dx, [bp+var_ADC] ;~ 0FBC:2FCD
cs=0xfbc;eip=0x002fd1; 	T(ADD(ax, 6));	// 33071 add     ax, 6 ;~ 0FBC:2FD1
loc_21174:
	// 6557 
cs=0xfbc;eip=0x002fd4; 	X(PUSH(si));	// 33074 push    si ;~ 0FBC:2FD4
cs=0xfbc;eip=0x002fd5; 	X(PUSH(di));	// 33075 push    di ;~ 0FBC:2FD5
cs=0xfbc;eip=0x002fd6; 	T(di = bp+var_ada);	// 33076 lea     di, [bp+var_ADA] ;~ 0FBC:2FD6
cs=0xfbc;eip=0x002fda; 	T(MOV(si, ax));	// 33077 mov     si, ax ;~ 0FBC:2FDA
cs=0xfbc;eip=0x002fdc; 	X(PUSH(ss));	// 33078 push    ss ;~ 0FBC:2FDC
cs=0xfbc;eip=0x002fdd; 	X(POP(es));	// 33079 pop     es ;~ 0FBC:2FDD
cs=0xfbc;eip=0x002fde; 	X(PUSH(ds));	// 33080 push    ds ;~ 0FBC:2FDE
cs=0xfbc;eip=0x002fdf; 	T(MOV(ds, dx));	// 33081 mov     ds, dx ;~ 0FBC:2FDF
cs=0xfbc;eip=0x002fe1; 	X(MOVSW);	// 33082 movsw ;~ 0FBC:2FE1
cs=0xfbc;eip=0x002fe2; 	X(MOVSW);	// 33083 movsw ;~ 0FBC:2FE2
cs=0xfbc;eip=0x002fe3; 	X(MOVSW);	// 33084 movsw ;~ 0FBC:2FE3
cs=0xfbc;eip=0x002fe4; 	X(POP(ds));	// 33085 pop     ds ;~ 0FBC:2FE4
cs=0xfbc;eip=0x002fe5; 	X(POP(di));	// 33086 pop     di ;~ 0FBC:2FE5
cs=0xfbc;eip=0x002fe6; 	X(POP(si));	// 33087 pop     si ;~ 0FBC:2FE6
cs=0xfbc;eip=0x002fe7; 	T(CMP(*(raddr(ss,bp+var_73e)), 0));	// 33088 cmp     [bp+var_73E], 0 ;~ 0FBC:2FE7
cs=0xfbc;eip=0x002fec; 	J(JZ(loc_2119c));	// 33089 jz      short loc_2119C ;~ 0FBC:2FEC
cs=0xfbc;eip=0x002fee; 	T(MOV(al, *(raddr(ss,bp+var_74c))));	// 33090 mov     al, [bp+var_74C] ;~ 0FBC:2FEE
cs=0xfbc;eip=0x002ff2; 	T(CBW);	// 33091 cbw ;~ 0FBC:2FF2
cs=0xfbc;eip=0x002ff3; 	T(MOV(bx, ax));	// 33092 mov     bx, ax ;~ 0FBC:2FF3
cs=0xfbc;eip=0x002ff5; 	T(MOV(al, *((&byte_3e724)+bx)));	// 33093 mov     al, byte_3E724[bx] ;~ 0FBC:2FF5
cs=0xfbc;eip=0x002ff9; 	J(JMP(loc_211a7));	// 33094 jmp     short loc_211A7 ;~ 0FBC:2FF9
loc_2119c:
	// 6558 
cs=0xfbc;eip=0x002ffc; 	T(MOV(al, *(raddr(ss,bp+var_74c))));	// 33099 mov     al, [bp+var_74C] ;~ 0FBC:2FFC
cs=0xfbc;eip=0x003000; 	T(CBW);	// 33100 cbw ;~ 0FBC:3000
cs=0xfbc;eip=0x003001; 	T(MOV(bx, ax));	// 33101 mov     bx, ax ;~ 0FBC:3001
cs=0xfbc;eip=0x003003; 	T(MOV(al, *((&byte_3e71e)+bx)));	// 33102 mov     al, byte_3E71E[bx] ;~ 0FBC:3003
loc_211a7:
	// 6559 
cs=0xfbc;eip=0x003007; 	X(MOV(*(raddr(ss,bp+var_74c)), al));	// 33105 mov     [bp+var_74C], al ;~ 0FBC:3007
cs=0xfbc;eip=0x00300b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3ae))));	// 33106 mov     bx, [bp+var_3AE] ;~ 0FBC:300B
cs=0xfbc;eip=0x00300f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 33107 mov     ax, [bx+6] ;~ 0FBC:300F
cs=0xfbc;eip=0x003012; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 33108 mov     [bp+var_8], ax ;~ 0FBC:3012
cs=0xfbc;eip=0x003015; 	T(CMP(ax, 0x100));	// 33109 cmp     ax, 100h ;~ 0FBC:3015
cs=0xfbc;eip=0x003018; 	J(JZ(loc_21214));	// 33110 jz      short loc_21214 ;~ 0FBC:3018
cs=0xfbc;eip=0x00301a; 	T(CMP(ax, 0x200));	// 33111 cmp     ax, 200h ;~ 0FBC:301A
cs=0xfbc;eip=0x00301d; 	J(JZ(loc_211fe));	// 33112 jz      short loc_211FE ;~ 0FBC:301D
cs=0xfbc;eip=0x00301f; 	T(CMP(ax, 0x300));	// 33113 cmp     ax, 300h ;~ 0FBC:301F
cs=0xfbc;eip=0x003022; 	J(JNZ(loc_211de));	// 33114 jnz     short loc_211DE ;~ 0FBC:3022
cs=0xfbc;eip=0x003024; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ada))));	// 33115 mov     ax, [bp+var_ADA] ;~ 0FBC:3024
cs=0xfbc;eip=0x003028; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a2)), ax));	// 33116 mov     [bp+var_3A2], ax ;~ 0FBC:3028
cs=0xfbc;eip=0x00302c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ad6))));	// 33117 mov     ax, [bp+var_AD6] ;~ 0FBC:302C
cs=0xfbc;eip=0x003030; 	T(NEG(ax));	// 33118 neg     ax ;~ 0FBC:3030
cs=0xfbc;eip=0x003032; 	X(MOV(*(dw*)(raddr(ss,bp+var_ada)), ax));	// 33119 mov     [bp+var_ADA], ax ;~ 0FBC:3032
cs=0xfbc;eip=0x003036; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3a2))));	// 33120 mov     ax, [bp+var_3A2] ;~ 0FBC:3036
loc_211da:
	// 6560 
cs=0xfbc;eip=0x00303a; 	X(MOV(*(dw*)(raddr(ss,bp+var_ad6)), ax));	// 33123 mov     [bp+var_AD6], ax ;~ 0FBC:303A
loc_211de:
	// 6561 
cs=0xfbc;eip=0x00303e; 	T(CMP(*(raddr(ss,bp+var_740)), 0));	// 33127 cmp     [bp+var_740], 0 ;~ 0FBC:303E
cs=0xfbc;eip=0x003043; 	J(JZ(loc_2122c));	// 33128 jz      short loc_2122C ;~ 0FBC:3043
cs=0xfbc;eip=0x003045; 	T(MOV(al, byte_45635));	// 33129 mov     al, byte_45635 ;~ 0FBC:3045
cs=0xfbc;eip=0x003048; 	T(CBW);	// 33130 cbw ;~ 0FBC:3048
cs=0xfbc;eip=0x003049; 	T(MOV(bx, ax));	// 33131 mov     bx, ax ;~ 0FBC:3049
cs=0xfbc;eip=0x00304b; 	T(SHL(bx, 1));	// 33132 shl     bx, 1 ;~ 0FBC:304B
cs=0xfbc;eip=0x00304d; 	T(ADD(bx, td08_direction_related));	// 33133 add     bx, td08_direction_related ;~ 0FBC:304D
cs=0xfbc;eip=0x003051; 	T(MOV(es, word_45db6));	// 33134 mov     es, word_45DB6 ;~ 0FBC:3051
cs=0xfbc;eip=0x003055; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 33135 mov     ax, [bp+var_8] ;~ 0FBC:3055
cs=0xfbc;eip=0x003058; 	T(XOR(ah, 2));	// 33136 xor     ah, 2 ;~ 0FBC:3058
cs=0xfbc;eip=0x00305b; 	J(JMP(loc_2123f));	// 33137 jmp     short loc_2123F ;~ 0FBC:305B
loc_211fe:
	// 6562 
cs=0xfbc;eip=0x00305e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ad6))));	// 33142 mov     ax, [bp+var_AD6] ;~ 0FBC:305E
cs=0xfbc;eip=0x003062; 	T(NEG(ax));	// 33143 neg     ax ;~ 0FBC:3062
cs=0xfbc;eip=0x003064; 	X(MOV(*(dw*)(raddr(ss,bp+var_ad6)), ax));	// 33144 mov     [bp+var_AD6], ax ;~ 0FBC:3064
cs=0xfbc;eip=0x003068; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ada))));	// 33145 mov     ax, [bp+var_ADA] ;~ 0FBC:3068
cs=0xfbc;eip=0x00306c; 	T(NEG(ax));	// 33146 neg     ax ;~ 0FBC:306C
cs=0xfbc;eip=0x00306e; 	X(MOV(*(dw*)(raddr(ss,bp+var_ada)), ax));	// 33147 mov     [bp+var_ADA], ax ;~ 0FBC:306E
cs=0xfbc;eip=0x003072; 	J(JMP(loc_211de));	// 33148 jmp     short loc_211DE ;~ 0FBC:3072
loc_21214:
	// 6563 
cs=0xfbc;eip=0x003074; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ada))));	// 33152 mov     ax, [bp+var_ADA] ;~ 0FBC:3074
cs=0xfbc;eip=0x003078; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a2)), ax));	// 33153 mov     [bp+var_3A2], ax ;~ 0FBC:3078
cs=0xfbc;eip=0x00307c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ad6))));	// 33154 mov     ax, [bp+var_AD6] ;~ 0FBC:307C
cs=0xfbc;eip=0x003080; 	X(MOV(*(dw*)(raddr(ss,bp+var_ada)), ax));	// 33155 mov     [bp+var_ADA], ax ;~ 0FBC:3080
cs=0xfbc;eip=0x003084; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3a2))));	// 33156 mov     ax, [bp+var_3A2] ;~ 0FBC:3084
cs=0xfbc;eip=0x003088; 	T(NEG(ax));	// 33157 neg     ax ;~ 0FBC:3088
cs=0xfbc;eip=0x00308a; 	J(JMP(loc_211da));	// 33158 jmp     short loc_211DA ;~ 0FBC:308A
loc_2122c:
	// 6564 
cs=0xfbc;eip=0x00308c; 	T(MOV(al, byte_45635));	// 33162 mov     al, byte_45635 ;~ 0FBC:308C
cs=0xfbc;eip=0x00308f; 	T(CBW);	// 33163 cbw ;~ 0FBC:308F
cs=0xfbc;eip=0x003090; 	T(MOV(bx, ax));	// 33164 mov     bx, ax ;~ 0FBC:3090
cs=0xfbc;eip=0x003092; 	T(SHL(bx, 1));	// 33165 shl     bx, 1 ;~ 0FBC:3092
cs=0xfbc;eip=0x003094; 	T(ADD(bx, td08_direction_related));	// 33166 add     bx, td08_direction_related ;~ 0FBC:3094
cs=0xfbc;eip=0x003098; 	T(MOV(es, word_45db6));	// 33167 mov     es, word_45DB6 ;~ 0FBC:3098
cs=0xfbc;eip=0x00309c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 33168 mov     ax, [bp+var_8] ;~ 0FBC:309C
loc_2123f:
	// 6565 
cs=0xfbc;eip=0x00309f; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 33171 mov     es:[bx], ax ;~ 0FBC:309F
cs=0xfbc;eip=0x0030a2; 	T(MOV(al, byte_45635));	// 33172 mov     al, byte_45635 ;~ 0FBC:30A2
cs=0xfbc;eip=0x0030a5; 	T(CBW);	// 33173 cbw ;~ 0FBC:30A5
cs=0xfbc;eip=0x0030a6; 	T(MOV(bx, ax));	// 33174 mov     bx, ax ;~ 0FBC:30A6
cs=0xfbc;eip=0x0030a8; 	T(ADD(bx, trackdata23));	// 33175 add     bx, trackdata23 ;~ 0FBC:30A8
cs=0xfbc;eip=0x0030ac; 	T(MOV(es, word_463de));	// 33176 mov     es, word_463DE ;~ 0FBC:30AC
cs=0xfbc;eip=0x0030b0; 	T(MOV(al, *(raddr(ss,bp+var_74c))));	// 33177 mov     al, [bp+var_74C] ;~ 0FBC:30B0
cs=0xfbc;eip=0x0030b4; 	X(MOV(*(raddr(es,bx)), al));	// 33178 mov     es:[bx], al ;~ 0FBC:30B4
cs=0xfbc;eip=0x0030b7; 	T(MOV(al, *(raddr(ss,bp+var_39a))));	// 33179 mov     al, [bp+var_39A] ;~ 0FBC:30B7
cs=0xfbc;eip=0x0030bb; 	T(CBW);	// 33180 cbw ;~ 0FBC:30BB
cs=0xfbc;eip=0x0030bc; 	T(MOV(bx, ax));	// 33181 mov     bx, ax ;~ 0FBC:30BC
cs=0xfbc;eip=0x0030be; 	T(SHL(bx, 1));	// 33182 shl     bx, 1 ;~ 0FBC:30BE
cs=0xfbc;eip=0x0030c0; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 33183 mov     bx, terrainrows[bx] ;~ 0FBC:30C0
cs=0xfbc;eip=0x0030c4; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 33184 mov     al, [bp+var_10] ;~ 0FBC:30C4
cs=0xfbc;eip=0x0030c7; 	T(CBW);	// 33185 cbw ;~ 0FBC:30C7
cs=0xfbc;eip=0x0030c8; 	T(ADD(bx, ax));	// 33186 add     bx, ax ;~ 0FBC:30C8
cs=0xfbc;eip=0x0030ca; 	T(ADD(bx, *(dw*)(((db*)&td15_terr_map_main))));	// 33187 add     bx, word ptr td15_terr_map_main ;~ 0FBC:30CA
cs=0xfbc;eip=0x0030ce; 	T(MOV(es, *(dw*)(((db*)&td15_terr_map_main)+2)));	// 33188 mov     es, word ptr td15_terr_map_main+2 ;~ 0FBC:30CE
cs=0xfbc;eip=0x0030d2; 	T(CMP(*(raddr(es,bx)), 6));	// 33189 cmp     byte ptr es:[bx], 6 ;~ 0FBC:30D2
cs=0xfbc;eip=0x0030d6; 	J(JNZ(loc_2127e));	// 33190 jnz     short loc_2127E ;~ 0FBC:30D6
cs=0xfbc;eip=0x0030d8; 	X(ADD(*(dw*)(raddr(ss,bp+var_ad8)), 0x1C2));	// 33191 add     [bp+var_AD8], 1C2h ;~ 0FBC:30D8
loc_2127e:
	// 6566 
cs=0xfbc;eip=0x0030de; 	T(MOV(al, byte_45635));	// 33194 mov     al, byte_45635 ;~ 0FBC:30DE
cs=0xfbc;eip=0x0030e1; 	T(CBW);	// 33195 cbw ;~ 0FBC:30E1
cs=0xfbc;eip=0x0030e2; 	T(MOV(bx, ax));	// 33196 mov     bx, ax ;~ 0FBC:30E2
cs=0xfbc;eip=0x0030e4; 	T(SHL(bx, 1));	// 33197 shl     bx, 1 ;~ 0FBC:30E4
cs=0xfbc;eip=0x0030e6; 	T(ADD(bx, ax));	// 33198 add     bx, ax ;~ 0FBC:30E6
cs=0xfbc;eip=0x0030e8; 	T(SHL(bx, 1));	// 33199 shl     bx, 1 ;~ 0FBC:30E8
cs=0xfbc;eip=0x0030ea; 	T(ADD(bx, *(dw*)(((db*)&td10_track_check_rel))));	// 33200 add     bx, word ptr td10_track_check_rel ;~ 0FBC:30EA
cs=0xfbc;eip=0x0030ee; 	T(MOV(es, *(dw*)(((db*)&td10_track_check_rel)+2)));	// 33201 mov     es, word ptr td10_track_check_rel+2 ;~ 0FBC:30EE
cs=0xfbc;eip=0x0030f2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ad8))));	// 33202 mov     ax, [bp+var_AD8] ;~ 0FBC:30F2
cs=0xfbc;eip=0x0030f6; 	X(MOV(*(dw*)(raddr(es,bx+2)), ax));	// 33203 mov     es:[bx+2], ax ;~ 0FBC:30F6
cs=0xfbc;eip=0x0030fa; 	T(MOV(al, *(raddr(ss,bp+var_ae6))));	// 33204 mov     al, [bp+var_AE6] ;~ 0FBC:30FA
cs=0xfbc;eip=0x0030fe; 	T(SUB(ah, ah));	// 33205 sub     ah, ah ;~ 0FBC:30FE
cs=0xfbc;eip=0x003100; 	T(MOV(bx, ax));	// 33206 mov     bx, ax ;~ 0FBC:3100
cs=0xfbc;eip=0x003102; 	T(SHL(bx, 1));	// 33207 shl     bx, 1 ;~ 0FBC:3102
cs=0xfbc;eip=0x003104; 	T(ADD(bx, ax));	// 33208 add     bx, ax ;~ 0FBC:3104
cs=0xfbc;eip=0x003106; 	T(SHL(bx, 1));	// 33209 shl     bx, 1 ;~ 0FBC:3106
cs=0xfbc;eip=0x003108; 	T(ADD(bx, ax));	// 33210 add     bx, ax ;~ 0FBC:3108
cs=0xfbc;eip=0x00310a; 	T(SHL(bx, 1));	// 33211 shl     bx, 1 ;~ 0FBC:310A
cs=0xfbc;eip=0x00310c; 	T(TEST(*((&byte_3d813)+bx), 1));	// 33212 test    byte_3D813[bx], 1 ;~ 0FBC:310C
cs=0xfbc;eip=0x003111; 	J(JZ(loc_212c2));	// 33213 jz      short loc_212C2 ;~ 0FBC:3111
cs=0xfbc;eip=0x003113; 	T(MOV(al, *(raddr(ss,bp+var_39a))));	// 33214 mov     al, [bp+var_39A] ;~ 0FBC:3113
cs=0xfbc;eip=0x003117; 	T(CBW);	// 33215 cbw ;~ 0FBC:3117
cs=0xfbc;eip=0x003118; 	T(MOV(bx, ax));	// 33216 mov     bx, ax ;~ 0FBC:3118
cs=0xfbc;eip=0x00311a; 	T(SHL(bx, 1));	// 33217 shl     bx, 1 ;~ 0FBC:311A
cs=0xfbc;eip=0x00311c; 	T(MOV(ax, *(dw*)(((db*)&trackpos)+bx)));	// 33218 mov     ax, trackpos[bx] ;~ 0FBC:311C
cs=0xfbc;eip=0x003120; 	J(JMP(loc_212cf));	// 33219 jmp     short loc_212CF ;~ 0FBC:3120
loc_212c2:
	// 6567 
cs=0xfbc;eip=0x003122; 	T(MOV(al, *(raddr(ss,bp+var_39a))));	// 33223 mov     al, [bp+var_39A] ;~ 0FBC:3122
cs=0xfbc;eip=0x003126; 	T(CBW);	// 33224 cbw ;~ 0FBC:3126
cs=0xfbc;eip=0x003127; 	T(MOV(bx, ax));	// 33225 mov     bx, ax ;~ 0FBC:3127
cs=0xfbc;eip=0x003129; 	T(SHL(bx, 1));	// 33226 shl     bx, 1 ;~ 0FBC:3129
cs=0xfbc;eip=0x00312b; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 33227 mov     ax, trackcenterpos[bx] ;~ 0FBC:312B
loc_212cf:
	// 6568 
cs=0xfbc;eip=0x00312f; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_ad6))));	// 33230 add     ax, [bp+var_AD6] ;~ 0FBC:312F
cs=0xfbc;eip=0x003133; 	T(MOV(cx, ax));	// 33231 mov     cx, ax ;~ 0FBC:3133
cs=0xfbc;eip=0x003135; 	T(MOV(al, byte_45635));	// 33232 mov     al, byte_45635 ;~ 0FBC:3135
cs=0xfbc;eip=0x003138; 	T(CBW);	// 33233 cbw ;~ 0FBC:3138
cs=0xfbc;eip=0x003139; 	T(MOV(bx, ax));	// 33234 mov     bx, ax ;~ 0FBC:3139
cs=0xfbc;eip=0x00313b; 	T(SHL(bx, 1));	// 33235 shl     bx, 1 ;~ 0FBC:313B
cs=0xfbc;eip=0x00313d; 	T(ADD(bx, ax));	// 33236 add     bx, ax ;~ 0FBC:313D
cs=0xfbc;eip=0x00313f; 	T(SHL(bx, 1));	// 33237 shl     bx, 1 ;~ 0FBC:313F
cs=0xfbc;eip=0x003141; 	T(ADD(bx, *(dw*)(((db*)&td10_track_check_rel))));	// 33238 add     bx, word ptr td10_track_check_rel ;~ 0FBC:3141
cs=0xfbc;eip=0x003145; 	T(MOV(es, *(dw*)(((db*)&td10_track_check_rel)+2)));	// 33239 mov     es, word ptr td10_track_check_rel+2 ;~ 0FBC:3145
cs=0xfbc;eip=0x003149; 	X(MOV(*(dw*)(raddr(es,bx+4)), cx));	// 33240 mov     es:[bx+4], cx ;~ 0FBC:3149
cs=0xfbc;eip=0x00314d; 	T(MOV(al, *(raddr(ss,bp+var_ae6))));	// 33241 mov     al, [bp+var_AE6] ;~ 0FBC:314D
cs=0xfbc;eip=0x003151; 	T(SUB(ah, ah));	// 33242 sub     ah, ah ;~ 0FBC:3151
cs=0xfbc;eip=0x003153; 	T(MOV(bx, ax));	// 33243 mov     bx, ax ;~ 0FBC:3153
cs=0xfbc;eip=0x003155; 	T(SHL(bx, 1));	// 33244 shl     bx, 1 ;~ 0FBC:3155
cs=0xfbc;eip=0x003157; 	T(ADD(bx, ax));	// 33245 add     bx, ax ;~ 0FBC:3157
cs=0xfbc;eip=0x003159; 	T(SHL(bx, 1));	// 33246 shl     bx, 1 ;~ 0FBC:3159
cs=0xfbc;eip=0x00315b; 	T(ADD(bx, ax));	// 33247 add     bx, ax ;~ 0FBC:315B
cs=0xfbc;eip=0x00315d; 	T(SHL(bx, 1));	// 33248 shl     bx, 1 ;~ 0FBC:315D
cs=0xfbc;eip=0x00315f; 	T(TEST(*((&byte_3d813)+bx), 2));	// 33249 test    byte_3D813[bx], 2 ;~ 0FBC:315F
cs=0xfbc;eip=0x003164; 	J(JZ(loc_21314));	// 33250 jz      short loc_21314 ;~ 0FBC:3164
cs=0xfbc;eip=0x003166; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 33251 mov     al, [bp+var_10] ;~ 0FBC:3166
cs=0xfbc;eip=0x003169; 	T(CBW);	// 33252 cbw ;~ 0FBC:3169
cs=0xfbc;eip=0x00316a; 	T(MOV(bx, ax));	// 33253 mov     bx, ax ;~ 0FBC:316A
cs=0xfbc;eip=0x00316c; 	T(SHL(bx, 1));	// 33254 shl     bx, 1 ;~ 0FBC:316C
cs=0xfbc;eip=0x00316e; 	T(MOV(ax, *(dw*)((((db*)trackpos2)+2)+bx)));	// 33255 mov     ax, (trackpos2+2)[bx] ;~ 0FBC:316E
cs=0xfbc;eip=0x003172; 	J(JMP(loc_21320));	// 33256 jmp     short loc_21320 ;~ 0FBC:3172
loc_21314:
	// 6569 
cs=0xfbc;eip=0x003174; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 33260 mov     al, [bp+var_10] ;~ 0FBC:3174
cs=0xfbc;eip=0x003177; 	T(CBW);	// 33261 cbw ;~ 0FBC:3177
cs=0xfbc;eip=0x003178; 	T(MOV(bx, ax));	// 33262 mov     bx, ax ;~ 0FBC:3178
cs=0xfbc;eip=0x00317a; 	T(SHL(bx, 1));	// 33263 shl     bx, 1 ;~ 0FBC:317A
cs=0xfbc;eip=0x00317c; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 33264 mov     ax, trackcenterpos2[bx] ;~ 0FBC:317C
loc_21320:
	// 6570 
cs=0xfbc;eip=0x003180; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_ada))));	// 33267 add     ax, [bp+var_ADA] ;~ 0FBC:3180
cs=0xfbc;eip=0x003184; 	T(MOV(cx, ax));	// 33268 mov     cx, ax ;~ 0FBC:3184
cs=0xfbc;eip=0x003186; 	T(MOV(al, byte_45635));	// 33269 mov     al, byte_45635 ;~ 0FBC:3186
cs=0xfbc;eip=0x003189; 	T(CBW);	// 33270 cbw ;~ 0FBC:3189
cs=0xfbc;eip=0x00318a; 	T(MOV(bx, ax));	// 33271 mov     bx, ax ;~ 0FBC:318A
cs=0xfbc;eip=0x00318c; 	T(SHL(bx, 1));	// 33272 shl     bx, 1 ;~ 0FBC:318C
cs=0xfbc;eip=0x00318e; 	T(ADD(bx, ax));	// 33273 add     bx, ax ;~ 0FBC:318E
cs=0xfbc;eip=0x003190; 	T(SHL(bx, 1));	// 33274 shl     bx, 1 ;~ 0FBC:3190
cs=0xfbc;eip=0x003192; 	T(ADD(bx, *(dw*)(((db*)&td10_track_check_rel))));	// 33275 add     bx, word ptr td10_track_check_rel ;~ 0FBC:3192
cs=0xfbc;eip=0x003196; 	T(MOV(es, *(dw*)(((db*)&td10_track_check_rel)+2)));	// 33276 mov     es, word ptr td10_track_check_rel+2 ;~ 0FBC:3196
cs=0xfbc;eip=0x00319a; 	X(MOV(*(dw*)(raddr(es,bx)), cx));	// 33277 mov     es:[bx], cx ;~ 0FBC:319A
cs=0xfbc;eip=0x00319d; 	T(MOV(al, *(raddr(ss,bp+var_39a))));	// 33278 mov     al, [bp+var_39A] ;~ 0FBC:319D
cs=0xfbc;eip=0x0031a1; 	T(CBW);	// 33279 cbw ;~ 0FBC:31A1
cs=0xfbc;eip=0x0031a2; 	T(MOV(bx, ax));	// 33280 mov     bx, ax ;~ 0FBC:31A2
cs=0xfbc;eip=0x0031a4; 	T(SHL(bx, 1));	// 33281 shl     bx, 1 ;~ 0FBC:31A4
cs=0xfbc;eip=0x0031a6; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 33282 mov     bx, trackrows[bx] ;~ 0FBC:31A6
cs=0xfbc;eip=0x0031aa; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 33283 mov     al, [bp+var_10] ;~ 0FBC:31AA
cs=0xfbc;eip=0x0031ad; 	T(CBW);	// 33284 cbw ;~ 0FBC:31AD
cs=0xfbc;eip=0x0031ae; 	T(ADD(bx, ax));	// 33285 add     bx, ax ;~ 0FBC:31AE
cs=0xfbc;eip=0x0031b0; 	T(ADD(bx, *(dw*)(((db*)&trackdata19))));	// 33286 add     bx, word ptr trackdata19 ;~ 0FBC:31B0
cs=0xfbc;eip=0x0031b4; 	T(MOV(es, *(dw*)(((db*)&trackdata19)+2)));	// 33287 mov     es, word ptr trackdata19+2 ;~ 0FBC:31B4
cs=0xfbc;eip=0x0031b8; 	T(MOV(al, byte_45635));	// 33288 mov     al, byte_45635 ;~ 0FBC:31B8
cs=0xfbc;eip=0x0031bb; 	X(MOV(*(raddr(es,bx)), al));	// 33289 mov     es:[bx], al ;~ 0FBC:31BB
cs=0xfbc;eip=0x0031be; 	X(INC(byte_45635));	// 33290 inc     byte_45635 ;~ 0FBC:31BE
loc_21362:
	// 6571 
cs=0xfbc;eip=0x0031c2; 	X(MOV(*(raddr(ss,bp+var_3a8)), 0));	// 33294 mov     [bp+var_3A8], 0 ;~ 0FBC:31C2
loc_21367:
	// 6572 
cs=0xfbc;eip=0x0031c7; 	X(INC(track_pieces_counter));	// 33297 inc     track_pieces_counter ;~ 0FBC:31C7
cs=0xfbc;eip=0x0031cb; 	T(CMP(track_pieces_counter, 0x385));	// 33298 cmp     track_pieces_counter, 385h ;~ 0FBC:31CB
cs=0xfbc;eip=0x0031d1; 	J(JNZ(loc_2137c));	// 33299 jnz     short loc_2137C ;~ 0FBC:31D1
cs=0xfbc;eip=0x0031d3; 	X(MOV(*(raddr(ss,bp+var_3b0)), many_elem));	// 33300 mov     [bp+var_3B0], many_elem ;~ 0FBC:31D3
cs=0xfbc;eip=0x0031d8; 	J(JMP(loc_2078d));	// 33301 jmp     loc_2078D ;~ 0FBC:31D8
loc_2137c:
	// 6573 
cs=0xfbc;eip=0x0031dc; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 33306 mov     al, [bp+var_E] ;~ 0FBC:31DC
cs=0xfbc;eip=0x0031df; 	T(SUB(ah, ah));	// 33307 sub     ah, ah ;~ 0FBC:31DF
cs=0xfbc;eip=0x0031e1; 	T(MOV(bx, ax));	// 33308 mov     bx, ax ;~ 0FBC:31E1
cs=0xfbc;eip=0x0031e3; 	T(SHL(bx, 1));	// 33309 shl     bx, 1 ;~ 0FBC:31E3
cs=0xfbc;eip=0x0031e5; 	T(ADD(bx, ax));	// 33310 add     bx, ax ;~ 0FBC:31E5
cs=0xfbc;eip=0x0031e7; 	T(SHL(bx, 1));	// 33311 shl     bx, 1 ;~ 0FBC:31E7
cs=0xfbc;eip=0x0031e9; 	T(ADD(bx, ax));	// 33312 add     bx, ax ;~ 0FBC:31E9
cs=0xfbc;eip=0x0031eb; 	T(SHL(bx, 1));	// 33313 shl     bx, 1 ;~ 0FBC:31EB
cs=0xfbc;eip=0x0031ed; 	T(MOV(ax, *(dw*)(((db*)&trkobjectlist)+bx)));	// 33314 mov     ax, trkObjectList[bx] ;~ 0FBC:31ED
cs=0xfbc;eip=0x0031f1; 	X(MOV(*(dw*)(raddr(ss,bp+var_39c)), ax));	// 33315 mov     [bp+var_39C], ax ;~ 0FBC:31F1
cs=0xfbc;eip=0x0031f5; 	T(MOV(al, *(raddr(ss,bp+var_742))));	// 33316 mov     al, [bp+var_742] ;~ 0FBC:31F5
cs=0xfbc;eip=0x0031f9; 	T(SUB(ah, ah));	// 33317 sub     ah, ah ;~ 0FBC:31F9
cs=0xfbc;eip=0x0031fb; 	T(MOV(cx, ax));	// 33318 mov     cx, ax ;~ 0FBC:31FB
cs=0xfbc;eip=0x0031fd; 	T(SHL(ax, 1));	// 33319 shl     ax, 1 ;~ 0FBC:31FD
cs=0xfbc;eip=0x0031ff; 	T(ADD(ax, cx));	// 33320 add     ax, cx ;~ 0FBC:31FF
cs=0xfbc;eip=0x003201; 	T(SHL(ax, 1));	// 33321 shl     ax, 1 ;~ 0FBC:3201
cs=0xfbc;eip=0x003203; 	T(ADD(ax, cx));	// 33322 add     ax, cx ;~ 0FBC:3203
cs=0xfbc;eip=0x003205; 	T(SHL(ax, 1));	// 33323 shl     ax, 1 ;~ 0FBC:3205
cs=0xfbc;eip=0x003207; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_39c))));	// 33324 add     ax, [bp+var_39C] ;~ 0FBC:3207
cs=0xfbc;eip=0x00320b; 	X(MOV(*(dw*)(raddr(ss,bp+var_3ae)), ax));	// 33325 mov     [bp+var_3AE], ax ;~ 0FBC:320B
cs=0xfbc;eip=0x00320f; 	T(CMP(*(raddr(ss,bp+var_73e)), 0));	// 33326 cmp     [bp+var_73E], 0 ;~ 0FBC:320F
cs=0xfbc;eip=0x003214; 	J(JZ(loc_213c4));	// 33327 jz      short loc_213C4 ;~ 0FBC:3214
cs=0xfbc;eip=0x003216; 	T(MOV(bx, ax));	// 33328 mov     bx, ax ;~ 0FBC:3216
cs=0xfbc;eip=0x003218; 	T(MOV(al, *(raddr(ds,bx+1))));	// 33329 mov     al, [bx+1] ;~ 0FBC:3218
cs=0xfbc;eip=0x00321b; 	X(MOV(*(raddr(ss,bp+var_744)), al));	// 33330 mov     [bp+var_744], al ;~ 0FBC:321B
cs=0xfbc;eip=0x00321f; 	T(MOV(al, *(raddr(ds,bx+3))));	// 33331 mov     al, [bx+3] ;~ 0FBC:321F
cs=0xfbc;eip=0x003222; 	J(JMP(loc_213d2));	// 33332 jmp     short loc_213D2 ;~ 0FBC:3222
loc_213c4:
	// 6574 
cs=0xfbc;eip=0x003224; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3ae))));	// 33336 mov     bx, [bp+var_3AE] ;~ 0FBC:3224
cs=0xfbc;eip=0x003228; 	T(MOV(al, *(raddr(ds,bx+2))));	// 33337 mov     al, [bx+2] ;~ 0FBC:3228
cs=0xfbc;eip=0x00322b; 	X(MOV(*(raddr(ss,bp+var_744)), al));	// 33338 mov     [bp+var_744], al ;~ 0FBC:322B
cs=0xfbc;eip=0x00322f; 	T(MOV(al, *(raddr(ds,bx+4))));	// 33339 mov     al, [bx+4] ;~ 0FBC:322F
loc_213d2:
	// 6575 
cs=0xfbc;eip=0x003232; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 33342 mov     [bp+var_12], al ;~ 0FBC:3232
cs=0xfbc;eip=0x003235; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 33343 mov     al, [bp+var_3A4] ;~ 0FBC:3235
cs=0xfbc;eip=0x003239; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 33344 mov     [bp+var_10], al ;~ 0FBC:3239
cs=0xfbc;eip=0x00323c; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 33345 mov     al, [bp+var_73A] ;~ 0FBC:323C
cs=0xfbc;eip=0x003240; 	X(MOV(*(raddr(ss,bp+var_39a)), al));	// 33346 mov     [bp+var_39A], al ;~ 0FBC:3240
cs=0xfbc;eip=0x003244; 	T(MOV(al, *(raddr(ss,bp+var_73e))));	// 33347 mov     al, [bp+var_73E] ;~ 0FBC:3244
cs=0xfbc;eip=0x003248; 	X(MOV(*(raddr(ss,bp+var_740)), al));	// 33348 mov     [bp+var_740], al ;~ 0FBC:3248
cs=0xfbc;eip=0x00324c; 	T(MOV(al, *(raddr(ss,bp+var_742))));	// 33349 mov     al, [bp+var_742] ;~ 0FBC:324C
cs=0xfbc;eip=0x003250; 	X(MOV(*(raddr(ss,bp+var_3aa)), al));	// 33350 mov     [bp+var_3AA], al ;~ 0FBC:3250
cs=0xfbc;eip=0x003254; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 33351 mov     al, [bp+var_E] ;~ 0FBC:3254
cs=0xfbc;eip=0x003257; 	X(MOV(*(raddr(ss,bp+var_ae6)), al));	// 33352 mov     [bp+var_AE6], al ;~ 0FBC:3257
cs=0xfbc;eip=0x00325b; 	T(MOV(al, *(raddr(ss,bp+var_744))));	// 33353 mov     al, [bp+var_744] ;~ 0FBC:325B
cs=0xfbc;eip=0x00325f; 	T(SUB(ah, ah));	// 33354 sub     ah, ah ;~ 0FBC:325F
cs=0xfbc;eip=0x003261; 	T(SUB(ax, 1));	// 33355 sub     ax, 1           ; switch 12 cases ;~ 0FBC:3261
cs=0xfbc;eip=0x003264; 	T(CMP(ax, 0x0B));	// 33356 cmp     ax, 0Bh ;~ 0FBC:3264
cs=0xfbc;eip=0x003267; 	J(JBE(loc_2140c));	// 33357 jbe     short loc_2140C ; filler-ish ;~ 0FBC:3267
cs=0xfbc;eip=0x003269; 	J(JMP(def_2140f));	// 33358 jmp     def_2140F       ; jumptable 0002140F default case ;~ 0FBC:3269
loc_2140c:
	// 6576 
cs=0xfbc;eip=0x00326c; 	T(ADD(ax, ax));	// 33362 add     ax, ax ;~ 0FBC:326C
cs=0xfbc;eip=0x00326e; 	T(XCHG(ax, bx));	// 33363 xchg    ax, bx ;~ 0FBC:326E
	cs=seg_offset(seg004);
cs=0xfbc;eip=0x00326f; __disp=*(dw*)(((db*)&jpt_2140f)+bx);
	J(return __dispatch_call(__disp, _state););	// 33364 jmp     cs:jpt_2140F[bx] ; switch jump ;~ 0FBC:326F
loc_21414:
	// 6577 
cs=0xfbc;eip=0x003274; 	X(DEC(*(raddr(ss,bp+var_73a))));	// 33369 dec     [bp+var_73A]    ; jumptable 0002140F case 1 ;~ 0FBC:3274
loc_21418:
	// 6578 
cs=0xfbc;eip=0x003278; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 33372 mov     [bp+var_8], 0 ;~ 0FBC:3278
cs=0xfbc;eip=0x00327d; 	J(JMP(def_2140f));	// 33373 jmp     def_2140F       ; jumptable 0002140F default case ;~ 0FBC:327D
loc_21420:
	// 6579 
cs=0xfbc;eip=0x003280; 	X(DEC(*(raddr(ss,bp+var_73a))));	// 33378 dec     [bp+var_73A]    ; jumptable 0002140F case 5 ;~ 0FBC:3280
cs=0xfbc;eip=0x003284; 	X(INC(*(raddr(ss,bp+var_3a4))));	// 33379 inc     [bp+var_3A4] ;~ 0FBC:3284
cs=0xfbc;eip=0x003288; 	J(JMP(loc_21418));	// 33380 jmp     short loc_21418 ;~ 0FBC:3288
loc_2142a:
	// 6580 
cs=0xfbc;eip=0x00328a; 	X(INC(*(raddr(ss,bp+var_73a))));	// 33385 inc     [bp+var_73A]    ; jumptable 0002140F case 6 ;~ 0FBC:328A
loc_2142e:
	// 6581 
cs=0xfbc;eip=0x00328e; 	X(DEC(*(raddr(ss,bp+var_3a4))));	// 33389 dec     [bp+var_3A4]    ; jumptable 0002140F case 4 ;~ 0FBC:328E
cs=0xfbc;eip=0x003292; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x300));	// 33390 mov     [bp+var_8], 300h ;~ 0FBC:3292
cs=0xfbc;eip=0x003297; 	J(JMP(def_2140f));	// 33391 jmp     def_2140F       ; jumptable 0002140F default case ;~ 0FBC:3297
loc_2143a:
	// 6582 
cs=0xfbc;eip=0x00329a; 	X(INC(*(raddr(ss,bp+var_3a4))));	// 33396 inc     [bp+var_3A4]    ; jumptable 0002140F case 10 ;~ 0FBC:329A
loc_2143e:
	// 6583 
cs=0xfbc;eip=0x00329e; 	X(INC(*(raddr(ss,bp+var_73a))));	// 33400 inc     [bp+var_73A]    ; jumptable 0002140F case 2 ;~ 0FBC:329E
loc_21442:
	// 6584 
cs=0xfbc;eip=0x0032a2; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x200));	// 33403 mov     [bp+var_8], 200h ;~ 0FBC:32A2
cs=0xfbc;eip=0x0032a7; 	J(JMP(def_2140f));	// 33404 jmp     def_2140F       ; jumptable 0002140F default case ;~ 0FBC:32A7
loc_2144a:
	// 6585 
cs=0xfbc;eip=0x0032aa; 	X(INC(*(raddr(ss,bp+var_3a4))));	// 33409 inc     [bp+var_3A4]    ; jumptable 0002140F case 12 ;~ 0FBC:32AA
loc_2144e:
	// 6586 
cs=0xfbc;eip=0x0032ae; 	X(ADD(*(raddr(ss,bp+var_73a)), 2));	// 33413 add     [bp+var_73A], 2 ; jumptable 0002140F case 11 ;~ 0FBC:32AE
cs=0xfbc;eip=0x0032b3; 	J(JMP(loc_21442));	// 33414 jmp     short loc_21442 ;~ 0FBC:32B3
loc_21456:
	// 6587 
cs=0xfbc;eip=0x0032b6; 	X(INC(*(raddr(ss,bp+var_3a4))));	// 33420 inc     [bp+var_3A4]    ; jumptable 0002140F case 3 ;~ 0FBC:32B6
loc_2145a:
	// 6588 
cs=0xfbc;eip=0x0032ba; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x100));	// 33424 mov     [bp+var_8], 100h ;~ 0FBC:32BA
cs=0xfbc;eip=0x0032bf; 	J(JMP(def_2140f));	// 33425 jmp     def_2140F       ; jumptable 0002140F default case ;~ 0FBC:32BF
loc_21462:
	// 6589 
cs=0xfbc;eip=0x0032c2; 	X(INC(*(raddr(ss,bp+var_3a4))));	// 33430 inc     [bp+var_3A4]    ; jumptable 0002140F case 7 ;~ 0FBC:32C2
loc_21466:
	// 6590 
cs=0xfbc;eip=0x0032c6; 	X(INC(*(raddr(ss,bp+var_73a))));	// 33433 inc     [bp+var_73A] ;~ 0FBC:32C6
cs=0xfbc;eip=0x0032ca; 	J(JMP(loc_2145a));	// 33434 jmp     short loc_2145A ;~ 0FBC:32CA
loc_2146c:
	// 6591 
cs=0xfbc;eip=0x0032cc; 	X(ADD(*(raddr(ss,bp+var_3a4)), 2));	// 33439 add     [bp+var_3A4], 2 ; jumptable 0002140F case 8 ;~ 0FBC:32CC
cs=0xfbc;eip=0x0032d1; 	J(JMP(loc_2145a));	// 33440 jmp     short loc_2145A ;~ 0FBC:32D1
loc_21474:
	// 6592 
cs=0xfbc;eip=0x0032d4; 	X(ADD(*(raddr(ss,bp+var_3a4)), 2));	// 33446 add     [bp+var_3A4], 2 ; jumptable 0002140F case 9 ;~ 0FBC:32D4
cs=0xfbc;eip=0x0032d9; 	J(JMP(loc_21466));	// 33447 jmp     short loc_21466 ;~ 0FBC:32D9
ret_fbc_32f4:
	// 6593 
cs=0xfbc;eip=0x0032f4; 	J(JMP(def_2140f));	// 33463 jmp     def_2140F       ; jumptable 0002140F default case ;~ 0FBC:32F4
loc_21498:
	// 6594 
cs=0xfbc;eip=0x0032f8; 	T(MOV(al, *(raddr(ss,bp+var_742))));	// 33469 mov     al, [bp+var_742] ;~ 0FBC:32F8
cs=0xfbc;eip=0x0032fc; 	T(SUB(ah, ah));	// 33470 sub     ah, ah ;~ 0FBC:32FC
cs=0xfbc;eip=0x0032fe; 	T(MOV(bx, ax));	// 33471 mov     bx, ax ;~ 0FBC:32FE
cs=0xfbc;eip=0x003300; 	T(SHL(bx, 1));	// 33472 shl     bx, 1 ;~ 0FBC:3300
cs=0xfbc;eip=0x003302; 	T(ADD(bx, ax));	// 33473 add     bx, ax ;~ 0FBC:3302
cs=0xfbc;eip=0x003304; 	T(SHL(bx, 1));	// 33474 shl     bx, 1 ;~ 0FBC:3304
cs=0xfbc;eip=0x003306; 	T(ADD(bx, ax));	// 33475 add     bx, ax ;~ 0FBC:3306
cs=0xfbc;eip=0x003308; 	T(SHL(bx, 1));	// 33476 shl     bx, 1 ;~ 0FBC:3308
cs=0xfbc;eip=0x00330a; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_3ae))));	// 33477 add     bx, [bp+var_3AE] ;~ 0FBC:330A
cs=0xfbc;eip=0x00330e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 33478 mov     ax, [bx+8] ;~ 0FBC:330E
loc_214b1:
	// 6595 
cs=0xfbc;eip=0x003311; 	X(MOV(*(dw*)(raddr(ss,bp+var_ade)), ax));	// 33481 mov     [bp+var_ADE], ax ;~ 0FBC:3311
cs=0xfbc;eip=0x003315; 	X(MOV(*(dw*)(raddr(ss,bp+var_adc)), ds));	// 33482 mov     [bp+var_ADC], ds ;~ 0FBC:3315
cs=0xfbc;eip=0x003319; 	T(MOV(al, *(raddr(ss,bp+var_742))));	// 33483 mov     al, [bp+var_742] ;~ 0FBC:3319
cs=0xfbc;eip=0x00331d; 	T(SUB(ah, ah));	// 33484 sub     ah, ah ;~ 0FBC:331D
cs=0xfbc;eip=0x00331f; 	T(MOV(cx, ax));	// 33485 mov     cx, ax ;~ 0FBC:331F
cs=0xfbc;eip=0x003321; 	T(SHL(ax, 1));	// 33486 shl     ax, 1 ;~ 0FBC:3321
cs=0xfbc;eip=0x003323; 	T(ADD(ax, cx));	// 33487 add     ax, cx ;~ 0FBC:3323
cs=0xfbc;eip=0x003325; 	T(SHL(ax, 1));	// 33488 shl     ax, 1 ;~ 0FBC:3325
cs=0xfbc;eip=0x003327; 	T(ADD(ax, cx));	// 33489 add     ax, cx ;~ 0FBC:3327
cs=0xfbc;eip=0x003329; 	T(SHL(ax, 1));	// 33490 shl     ax, 1 ;~ 0FBC:3329
cs=0xfbc;eip=0x00332b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_3ae))));	// 33491 add     ax, [bp+var_3AE] ;~ 0FBC:332B
cs=0xfbc;eip=0x00332f; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_af0))), ax));	// 33492 mov     word ptr [bp+var_AF0], ax ;~ 0FBC:332F
cs=0xfbc;eip=0x003333; 	T(MOV(bx, ax));	// 33493 mov     bx, ax ;~ 0FBC:3333
cs=0xfbc;eip=0x003335; 	T(MOV(al, *(raddr(ds,bx+5))));	// 33494 mov     al, [bx+5] ;~ 0FBC:3335
cs=0xfbc;eip=0x003338; 	T(SUB(ah, ah));	// 33495 sub     ah, ah ;~ 0FBC:3338
cs=0xfbc;eip=0x00333a; 	T(MOV(cx, ax));	// 33496 mov     cx, ax ;~ 0FBC:333A
cs=0xfbc;eip=0x00333c; 	T(SHL(ax, 1));	// 33497 shl     ax, 1 ;~ 0FBC:333C
cs=0xfbc;eip=0x00333e; 	T(ADD(ax, cx));	// 33498 add     ax, cx ;~ 0FBC:333E
cs=0xfbc;eip=0x003340; 	T(SHL(ax, 1));	// 33499 shl     ax, 1 ;~ 0FBC:3340
cs=0xfbc;eip=0x003342; 	T(SHL(ax, 1));	// 33500 shl     ax, 1 ;~ 0FBC:3342
cs=0xfbc;eip=0x003344; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_ade))));	// 33501 add     ax, [bp+var_ADE] ;~ 0FBC:3344
cs=0xfbc;eip=0x003348; 	T(MOV(dx, ds));	// 33502 mov     dx, ds ;~ 0FBC:3348
cs=0xfbc;eip=0x00334a; 	X(PUSH(si));	// 33503 push    si ;~ 0FBC:334A
cs=0xfbc;eip=0x00334b; 	X(PUSH(di));	// 33504 push    di ;~ 0FBC:334B
cs=0xfbc;eip=0x00334c; 	T(di = bp+var_ada);	// 33505 lea     di, [bp+var_ADA] ;~ 0FBC:334C
cs=0xfbc;eip=0x003350; 	T(MOV(si, ax));	// 33506 mov     si, ax ;~ 0FBC:3350
cs=0xfbc;eip=0x003352; 	X(PUSH(ss));	// 33507 push    ss ;~ 0FBC:3352
cs=0xfbc;eip=0x003353; 	X(POP(es));	// 33508 pop     es ;~ 0FBC:3353
cs=0xfbc;eip=0x003354; 	X(PUSH(ds));	// 33509 push    ds ;~ 0FBC:3354
cs=0xfbc;eip=0x003355; 	X(MOVSW);	// 33510 movsw ;~ 0FBC:3355
cs=0xfbc;eip=0x003356; 	X(MOVSW);	// 33511 movsw ;~ 0FBC:3356
cs=0xfbc;eip=0x003357; 	X(MOVSW);	// 33512 movsw ;~ 0FBC:3357
cs=0xfbc;eip=0x003358; 	X(POP(ds));	// 33513 pop     ds ;~ 0FBC:3358
cs=0xfbc;eip=0x003359; 	X(POP(di));	// 33514 pop     di ;~ 0FBC:3359
cs=0xfbc;eip=0x00335a; 	X(POP(si));	// 33515 pop     si ;~ 0FBC:335A
cs=0xfbc;eip=0x00335b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 33516 mov     ax, [bx+6] ;~ 0FBC:335B
cs=0xfbc;eip=0x00335e; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 33517 mov     [bp+var_8], ax ;~ 0FBC:335E
cs=0xfbc;eip=0x003361; 	T(CMP(ax, 0x100));	// 33518 cmp     ax, 100h ;~ 0FBC:3361
cs=0xfbc;eip=0x003364; 	J(JZ(loc_21576));	// 33519 jz      short loc_21576 ;~ 0FBC:3364
cs=0xfbc;eip=0x003366; 	T(CMP(ax, 0x200));	// 33520 cmp     ax, 200h ;~ 0FBC:3366
cs=0xfbc;eip=0x003369; 	J(JZ(loc_21560));	// 33521 jz      short loc_21560 ;~ 0FBC:3369
cs=0xfbc;eip=0x00336b; 	T(CMP(ax, 0x300));	// 33522 cmp     ax, 300h ;~ 0FBC:336B
cs=0xfbc;eip=0x00336e; 	J(JNZ(loc_2152a));	// 33523 jnz     short loc_2152A ;~ 0FBC:336E
cs=0xfbc;eip=0x003370; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ada))));	// 33524 mov     ax, [bp+var_ADA] ;~ 0FBC:3370
cs=0xfbc;eip=0x003374; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a2)), ax));	// 33525 mov     [bp+var_3A2], ax ;~ 0FBC:3374
cs=0xfbc;eip=0x003378; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ad6))));	// 33526 mov     ax, [bp+var_AD6] ;~ 0FBC:3378
cs=0xfbc;eip=0x00337c; 	T(NEG(ax));	// 33527 neg     ax ;~ 0FBC:337C
cs=0xfbc;eip=0x00337e; 	X(MOV(*(dw*)(raddr(ss,bp+var_ada)), ax));	// 33528 mov     [bp+var_ADA], ax ;~ 0FBC:337E
cs=0xfbc;eip=0x003382; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3a2))));	// 33529 mov     ax, [bp+var_3A2] ;~ 0FBC:3382
loc_21526:
	// 6596 
cs=0xfbc;eip=0x003386; 	X(MOV(*(dw*)(raddr(ss,bp+var_ad6)), ax));	// 33532 mov     [bp+var_AD6], ax ;~ 0FBC:3386
loc_2152a:
	// 6597 
cs=0xfbc;eip=0x00338a; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 33536 mov     al, [bp+var_73A] ;~ 0FBC:338A
cs=0xfbc;eip=0x00338e; 	T(CBW);	// 33537 cbw ;~ 0FBC:338E
cs=0xfbc;eip=0x00338f; 	T(MOV(bx, ax));	// 33538 mov     bx, ax ;~ 0FBC:338F
cs=0xfbc;eip=0x003391; 	T(SHL(bx, 1));	// 33539 shl     bx, 1 ;~ 0FBC:3391
cs=0xfbc;eip=0x003393; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 33540 mov     bx, terrainrows[bx] ;~ 0FBC:3393
cs=0xfbc;eip=0x003397; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 33541 mov     al, [bp+var_3A4] ;~ 0FBC:3397
cs=0xfbc;eip=0x00339b; 	T(CBW);	// 33542 cbw ;~ 0FBC:339B
cs=0xfbc;eip=0x00339c; 	T(ADD(bx, ax));	// 33543 add     bx, ax ;~ 0FBC:339C
cs=0xfbc;eip=0x00339e; 	T(ADD(bx, *(dw*)(((db*)&td15_terr_map_main))));	// 33544 add     bx, word ptr td15_terr_map_main ;~ 0FBC:339E
cs=0xfbc;eip=0x0033a2; 	T(MOV(es, *(dw*)(((db*)&td15_terr_map_main)+2)));	// 33545 mov     es, word ptr td15_terr_map_main+2 ;~ 0FBC:33A2
cs=0xfbc;eip=0x0033a6; 	T(CMP(*(raddr(es,bx)), 6));	// 33546 cmp     byte ptr es:[bx], 6 ;~ 0FBC:33A6
cs=0xfbc;eip=0x0033aa; 	J(JNZ(loc_2158e));	// 33547 jnz     short loc_2158E ;~ 0FBC:33AA
cs=0xfbc;eip=0x0033ac; 	T(MOV(bx, di));	// 33548 mov     bx, di ;~ 0FBC:33AC
cs=0xfbc;eip=0x0033ae; 	T(SHL(bx, 1));	// 33549 shl     bx, 1 ;~ 0FBC:33AE
cs=0xfbc;eip=0x0033b0; 	T(ADD(bx, trackdata7));	// 33550 add     bx, trackdata7 ;~ 0FBC:33B0
cs=0xfbc;eip=0x0033b4; 	T(MOV(es, word_454b6));	// 33551 mov     es, word_454B6 ;~ 0FBC:33B4
cs=0xfbc;eip=0x0033b8; 	X(MOV(*(dw*)(raddr(es,bx)), 0x1C2));	// 33552 mov     word ptr es:[bx], 1C2h ;~ 0FBC:33B8
cs=0xfbc;eip=0x0033bd; 	J(JMP(loc_2159f));	// 33553 jmp     short loc_2159F ;~ 0FBC:33BD
loc_21560:
	// 6598 
cs=0xfbc;eip=0x0033c0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ad6))));	// 33558 mov     ax, [bp+var_AD6] ;~ 0FBC:33C0
cs=0xfbc;eip=0x0033c4; 	T(NEG(ax));	// 33559 neg     ax ;~ 0FBC:33C4
cs=0xfbc;eip=0x0033c6; 	X(MOV(*(dw*)(raddr(ss,bp+var_ad6)), ax));	// 33560 mov     [bp+var_AD6], ax ;~ 0FBC:33C6
cs=0xfbc;eip=0x0033ca; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ada))));	// 33561 mov     ax, [bp+var_ADA] ;~ 0FBC:33CA
cs=0xfbc;eip=0x0033ce; 	T(NEG(ax));	// 33562 neg     ax ;~ 0FBC:33CE
cs=0xfbc;eip=0x0033d0; 	X(MOV(*(dw*)(raddr(ss,bp+var_ada)), ax));	// 33563 mov     [bp+var_ADA], ax ;~ 0FBC:33D0
cs=0xfbc;eip=0x0033d4; 	J(JMP(loc_2152a));	// 33564 jmp     short loc_2152A ;~ 0FBC:33D4
loc_21576:
	// 6599 
cs=0xfbc;eip=0x0033d6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ada))));	// 33568 mov     ax, [bp+var_ADA] ;~ 0FBC:33D6
cs=0xfbc;eip=0x0033da; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a2)), ax));	// 33569 mov     [bp+var_3A2], ax ;~ 0FBC:33DA
cs=0xfbc;eip=0x0033de; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ad6))));	// 33570 mov     ax, [bp+var_AD6] ;~ 0FBC:33DE
cs=0xfbc;eip=0x0033e2; 	X(MOV(*(dw*)(raddr(ss,bp+var_ada)), ax));	// 33571 mov     [bp+var_ADA], ax ;~ 0FBC:33E2
cs=0xfbc;eip=0x0033e6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3a2))));	// 33572 mov     ax, [bp+var_3A2] ;~ 0FBC:33E6
cs=0xfbc;eip=0x0033ea; 	T(NEG(ax));	// 33573 neg     ax ;~ 0FBC:33EA
cs=0xfbc;eip=0x0033ec; 	J(JMP(loc_21526));	// 33574 jmp     short loc_21526 ;~ 0FBC:33EC
loc_2158e:
	// 6600 
cs=0xfbc;eip=0x0033ee; 	T(MOV(bx, di));	// 33578 mov     bx, di ;~ 0FBC:33EE
cs=0xfbc;eip=0x0033f0; 	T(SHL(bx, 1));	// 33579 shl     bx, 1 ;~ 0FBC:33F0
cs=0xfbc;eip=0x0033f2; 	T(ADD(bx, trackdata7));	// 33580 add     bx, trackdata7 ;~ 0FBC:33F2
cs=0xfbc;eip=0x0033f6; 	T(MOV(es, word_454b6));	// 33581 mov     es, word_454B6 ;~ 0FBC:33F6
cs=0xfbc;eip=0x0033fa; 	X(MOV(*(dw*)(raddr(es,bx)), 0));	// 33582 mov     word ptr es:[bx], 0 ;~ 0FBC:33FA
loc_2159f:
	// 6601 
cs=0xfbc;eip=0x0033ff; 	T(MOV(ax, di));	// 33585 mov     ax, di ;~ 0FBC:33FF
cs=0xfbc;eip=0x003401; 	T(SHL(ax, 1));	// 33586 shl     ax, 1 ;~ 0FBC:3401
cs=0xfbc;eip=0x003403; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_af0))), ax));	// 33587 mov     word ptr [bp+var_AF0], ax ;~ 0FBC:3403
cs=0xfbc;eip=0x003407; 	T(MOV(bx, ax));	// 33588 mov     bx, ax ;~ 0FBC:3407
cs=0xfbc;eip=0x003409; 	T(ADD(bx, trackdata6));	// 33589 add     bx, trackdata6 ;~ 0FBC:3409
cs=0xfbc;eip=0x00340d; 	T(MOV(es, word_454d2));	// 33590 mov     es, word_454D2 ;~ 0FBC:340D
cs=0xfbc;eip=0x003411; 	X(MOV(*(dw*)(raddr(es,bx)), 0));	// 33591 mov     word ptr es:[bx], 0 ;~ 0FBC:3411
cs=0xfbc;eip=0x003416; 	T(MOV(ax, di));	// 33592 mov     ax, di ;~ 0FBC:3416
cs=0xfbc;eip=0x003418; 	T(MOV(cx, ax));	// 33593 mov     cx, ax ;~ 0FBC:3418
cs=0xfbc;eip=0x00341a; 	T(SHL(ax, 1));	// 33594 shl     ax, 1 ;~ 0FBC:341A
cs=0xfbc;eip=0x00341c; 	T(ADD(ax, cx));	// 33595 add     ax, cx ;~ 0FBC:341C
cs=0xfbc;eip=0x00341e; 	T(SHL(ax, 1));	// 33596 shl     ax, 1 ;~ 0FBC:341E
cs=0xfbc;eip=0x003420; 	X(MOV(*(dw*)(raddr(ss,bp+var_aec)), ax));	// 33597 mov     [bp+var_AEC], ax ;~ 0FBC:3420
cs=0xfbc;eip=0x003424; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_af0)))));	// 33598 mov     bx, word ptr [bp+var_AF0] ;~ 0FBC:3424
cs=0xfbc;eip=0x003428; 	T(ADD(bx, trackdata7));	// 33599 add     bx, trackdata7 ;~ 0FBC:3428
cs=0xfbc;eip=0x00342c; 	T(MOV(es, word_454b6));	// 33600 mov     es, word_454B6 ;~ 0FBC:342C
cs=0xfbc;eip=0x003430; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 33601 mov     ax, es:[bx] ;~ 0FBC:3430
cs=0xfbc;eip=0x003433; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_ad8))));	// 33602 add     ax, [bp+var_AD8] ;~ 0FBC:3433
cs=0xfbc;eip=0x003437; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_aec))));	// 33603 mov     bx, [bp+var_AEC] ;~ 0FBC:3437
cs=0xfbc;eip=0x00343b; 	T(ADD(bx, trackdata9));	// 33604 add     bx, trackdata9 ;~ 0FBC:343B
cs=0xfbc;eip=0x00343f; 	T(MOV(es, word_449de));	// 33605 mov     es, word_449DE ;~ 0FBC:343F
cs=0xfbc;eip=0x003443; 	X(MOV(*(dw*)(raddr(es,bx+2)), ax));	// 33606 mov     es:[bx+2], ax ;~ 0FBC:3443
cs=0xfbc;eip=0x003447; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 33607 mov     bx, [bp+var_C] ;~ 0FBC:3447
cs=0xfbc;eip=0x00344a; 	T(MOV(ax, bx));	// 33608 mov     ax, bx ;~ 0FBC:344A
cs=0xfbc;eip=0x00344c; 	T(SHL(bx, 1));	// 33609 shl     bx, 1 ;~ 0FBC:344C
cs=0xfbc;eip=0x00344e; 	T(ADD(bx, ax));	// 33610 add     bx, ax ;~ 0FBC:344E
cs=0xfbc;eip=0x003450; 	T(SHL(bx, 1));	// 33611 shl     bx, 1 ;~ 0FBC:3450
cs=0xfbc;eip=0x003452; 	T(ADD(bx, ax));	// 33612 add     bx, ax ;~ 0FBC:3452
cs=0xfbc;eip=0x003454; 	T(SHL(bx, 1));	// 33613 shl     bx, 1 ;~ 0FBC:3454
cs=0xfbc;eip=0x003456; 	T(TEST(*((&byte_3d813)+bx), 1));	// 33614 test    byte_3D813[bx], 1 ;~ 0FBC:3456
cs=0xfbc;eip=0x00345b; 	J(JZ(loc_21614));	// 33615 jz      short loc_21614 ;~ 0FBC:345B
cs=0xfbc;eip=0x00345d; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 33616 mov     al, [bp+var_73A] ;~ 0FBC:345D
cs=0xfbc;eip=0x003461; 	T(CBW);	// 33617 cbw ;~ 0FBC:3461
cs=0xfbc;eip=0x003462; 	T(MOV(bx, ax));	// 33618 mov     bx, ax ;~ 0FBC:3462
cs=0xfbc;eip=0x003464; 	T(SHL(bx, 1));	// 33619 shl     bx, 1 ;~ 0FBC:3464
cs=0xfbc;eip=0x003466; 	T(MOV(ax, *(dw*)(((db*)&trackpos)+bx)));	// 33620 mov     ax, trackpos[bx] ;~ 0FBC:3466
cs=0xfbc;eip=0x00346a; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_ad6))));	// 33621 add     ax, [bp+var_AD6] ;~ 0FBC:346A
cs=0xfbc;eip=0x00346e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_aec))));	// 33622 mov     bx, [bp+var_AEC] ;~ 0FBC:346E
cs=0xfbc;eip=0x003472; 	J(JMP(loc_2162f));	// 33623 jmp     short loc_2162F ;~ 0FBC:3472
loc_21614:
	// 6602 
cs=0xfbc;eip=0x003474; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 33627 mov     al, [bp+var_73A] ;~ 0FBC:3474
cs=0xfbc;eip=0x003478; 	T(CBW);	// 33628 cbw ;~ 0FBC:3478
cs=0xfbc;eip=0x003479; 	T(MOV(bx, ax));	// 33629 mov     bx, ax ;~ 0FBC:3479
cs=0xfbc;eip=0x00347b; 	T(SHL(bx, 1));	// 33630 shl     bx, 1 ;~ 0FBC:347B
cs=0xfbc;eip=0x00347d; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 33631 mov     ax, trackcenterpos[bx] ;~ 0FBC:347D
cs=0xfbc;eip=0x003481; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_ad6))));	// 33632 add     ax, [bp+var_AD6] ;~ 0FBC:3481
cs=0xfbc;eip=0x003485; 	T(MOV(bx, di));	// 33633 mov     bx, di ;~ 0FBC:3485
cs=0xfbc;eip=0x003487; 	T(MOV(cx, bx));	// 33634 mov     cx, bx ;~ 0FBC:3487
cs=0xfbc;eip=0x003489; 	T(SHL(bx, 1));	// 33635 shl     bx, 1 ;~ 0FBC:3489
cs=0xfbc;eip=0x00348b; 	T(ADD(bx, cx));	// 33636 add     bx, cx ;~ 0FBC:348B
cs=0xfbc;eip=0x00348d; 	T(SHL(bx, 1));	// 33637 shl     bx, 1 ;~ 0FBC:348D
loc_2162f:
	// 6603 
cs=0xfbc;eip=0x00348f; 	T(ADD(bx, trackdata9));	// 33640 add     bx, trackdata9 ;~ 0FBC:348F
cs=0xfbc;eip=0x003493; 	T(MOV(es, word_449de));	// 33641 mov     es, word_449DE ;~ 0FBC:3493
cs=0xfbc;eip=0x003497; 	X(MOV(*(dw*)(raddr(es,bx+4)), ax));	// 33642 mov     es:[bx+4], ax ;~ 0FBC:3497
cs=0xfbc;eip=0x00349b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 33643 mov     bx, [bp+var_C] ;~ 0FBC:349B
cs=0xfbc;eip=0x00349e; 	T(MOV(ax, bx));	// 33644 mov     ax, bx ;~ 0FBC:349E
cs=0xfbc;eip=0x0034a0; 	T(SHL(bx, 1));	// 33645 shl     bx, 1 ;~ 0FBC:34A0
cs=0xfbc;eip=0x0034a2; 	T(ADD(bx, ax));	// 33646 add     bx, ax ;~ 0FBC:34A2
cs=0xfbc;eip=0x0034a4; 	T(SHL(bx, 1));	// 33647 shl     bx, 1 ;~ 0FBC:34A4
cs=0xfbc;eip=0x0034a6; 	T(ADD(bx, ax));	// 33648 add     bx, ax ;~ 0FBC:34A6
cs=0xfbc;eip=0x0034a8; 	T(SHL(bx, 1));	// 33649 shl     bx, 1 ;~ 0FBC:34A8
cs=0xfbc;eip=0x0034aa; 	T(TEST(*((&byte_3d813)+bx), 2));	// 33650 test    byte_3D813[bx], 2 ;~ 0FBC:34AA
cs=0xfbc;eip=0x0034af; 	J(JZ(loc_21660));	// 33651 jz      short loc_21660 ;~ 0FBC:34AF
cs=0xfbc;eip=0x0034b1; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 33652 mov     al, [bp+var_3A4] ;~ 0FBC:34B1
cs=0xfbc;eip=0x0034b5; 	T(CBW);	// 33653 cbw ;~ 0FBC:34B5
cs=0xfbc;eip=0x0034b6; 	T(MOV(bx, ax));	// 33654 mov     bx, ax ;~ 0FBC:34B6
cs=0xfbc;eip=0x0034b8; 	T(SHL(bx, 1));	// 33655 shl     bx, 1 ;~ 0FBC:34B8
cs=0xfbc;eip=0x0034ba; 	T(MOV(ax, *(dw*)((((db*)trackpos2)+2)+bx)));	// 33656 mov     ax, (trackpos2+2)[bx] ;~ 0FBC:34BA
cs=0xfbc;eip=0x0034be; 	J(JMP(loc_2166d));	// 33657 jmp     short loc_2166D ;~ 0FBC:34BE
loc_21660:
	// 6604 
cs=0xfbc;eip=0x0034c0; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 33661 mov     al, [bp+var_3A4] ;~ 0FBC:34C0
cs=0xfbc;eip=0x0034c4; 	T(CBW);	// 33662 cbw ;~ 0FBC:34C4
cs=0xfbc;eip=0x0034c5; 	T(MOV(bx, ax));	// 33663 mov     bx, ax ;~ 0FBC:34C5
cs=0xfbc;eip=0x0034c7; 	T(SHL(bx, 1));	// 33664 shl     bx, 1 ;~ 0FBC:34C7
cs=0xfbc;eip=0x0034c9; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 33665 mov     ax, trackcenterpos2[bx] ;~ 0FBC:34C9
loc_2166d:
	// 6605 
cs=0xfbc;eip=0x0034cd; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_ada))));	// 33668 add     ax, [bp+var_ADA] ;~ 0FBC:34CD
cs=0xfbc;eip=0x0034d1; 	T(MOV(bx, di));	// 33669 mov     bx, di ;~ 0FBC:34D1
cs=0xfbc;eip=0x0034d3; 	T(MOV(cx, bx));	// 33670 mov     cx, bx ;~ 0FBC:34D3
cs=0xfbc;eip=0x0034d5; 	T(SHL(bx, 1));	// 33671 shl     bx, 1 ;~ 0FBC:34D5
cs=0xfbc;eip=0x0034d7; 	T(ADD(bx, cx));	// 33672 add     bx, cx ;~ 0FBC:34D7
cs=0xfbc;eip=0x0034d9; 	T(SHL(bx, 1));	// 33673 shl     bx, 1 ;~ 0FBC:34D9
cs=0xfbc;eip=0x0034db; 	T(ADD(bx, trackdata9));	// 33674 add     bx, trackdata9 ;~ 0FBC:34DB
cs=0xfbc;eip=0x0034df; 	T(MOV(es, word_449de));	// 33675 mov     es, word_449DE ;~ 0FBC:34DF
cs=0xfbc;eip=0x0034e3; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 33676 mov     es:[bx], ax ;~ 0FBC:34E3
cs=0xfbc;eip=0x0034e6; 	T(INC(di));	// 33677 inc     di ;~ 0FBC:34E6
loc_21687:
	// 6606 
cs=0xfbc;eip=0x0034e7; 	T(INC(si));	// 33680 inc     si ;~ 0FBC:34E7
loc_21688:
	// 6607 
cs=0xfbc;eip=0x0034e8; 	T(MOV(al, byte_4616e));	// 33683 mov     al, byte_4616E ;~ 0FBC:34E8
cs=0xfbc;eip=0x0034eb; 	T(CBW);	// 33684 cbw ;~ 0FBC:34EB
cs=0xfbc;eip=0x0034ec; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_af0))), ax));	// 33685 mov     word ptr [bp+var_AF0], ax ;~ 0FBC:34EC
cs=0xfbc;eip=0x0034f0; 	T(CMP(ax, si));	// 33686 cmp     ax, si ;~ 0FBC:34F0
cs=0xfbc;eip=0x0034f2; 	J(JG(loc_21697));	// 33687 jg      short loc_21697 ;~ 0FBC:34F2
cs=0xfbc;eip=0x0034f4; 	J(JMP(loc_2176e));	// 33688 jmp     loc_2176E ;~ 0FBC:34F4
loc_21697:
	// 6608 
cs=0xfbc;eip=0x0034f7; 	T(MOV(ax, track_pieces_counter));	// 33692 mov     ax, track_pieces_counter ;~ 0FBC:34F7
cs=0xfbc;eip=0x0034fa; 	T(IMUL1_2(si));	// 33693 imul    si ;~ 0FBC:34FA
cs=0xfbc;eip=0x0034fc; 	T(CWD);	// 33694 cwd ;~ 0FBC:34FC
cs=0xfbc;eip=0x0034fd; 	T(MOV(cx, *(dw*)((dw*)(raddr(ss,bp+var_af0)))));	// 33695 mov     cx, word ptr [bp+var_AF0] ;~ 0FBC:34FD
cs=0xfbc;eip=0x003501; 	T(IDIV2(cx));	// 33696 idiv    cx ;~ 0FBC:3501
cs=0xfbc;eip=0x003503; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 33697 mov     [bp+var_A], ax ;~ 0FBC:3503
cs=0xfbc;eip=0x003506; 	T(MOV(bx, ax));	// 33698 mov     bx, ax ;~ 0FBC:3506
cs=0xfbc;eip=0x003508; 	T(ADD(bx, *(dw*)(((db*)&td21_col_from_path))));	// 33699 add     bx, word ptr td21_col_from_path ;~ 0FBC:3508
cs=0xfbc;eip=0x00350c; 	T(MOV(es, *(dw*)(((db*)&td21_col_from_path)+2)));	// 33700 mov     es, word ptr td21_col_from_path+2 ;~ 0FBC:350C
cs=0xfbc;eip=0x003510; 	T(MOV(al, *(raddr(es,bx))));	// 33701 mov     al, es:[bx] ;~ 0FBC:3510
cs=0xfbc;eip=0x003513; 	X(MOV(*(raddr(ss,bp+var_3a4)), al));	// 33702 mov     [bp+var_3A4], al ;~ 0FBC:3513
cs=0xfbc;eip=0x003517; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 33703 mov     bx, [bp+var_A] ;~ 0FBC:3517
cs=0xfbc;eip=0x00351a; 	T(ADD(bx, *(dw*)(((db*)&td22_row_from_path))));	// 33704 add     bx, word ptr td22_row_from_path ;~ 0FBC:351A
cs=0xfbc;eip=0x00351e; 	T(MOV(es, *(dw*)(((db*)&td22_row_from_path)+2)));	// 33705 mov     es, word ptr td22_row_from_path+2 ;~ 0FBC:351E
cs=0xfbc;eip=0x003522; 	T(MOV(al, *(raddr(es,bx))));	// 33706 mov     al, es:[bx] ;~ 0FBC:3522
cs=0xfbc;eip=0x003525; 	X(MOV(*(raddr(ss,bp+var_73a)), al));	// 33707 mov     [bp+var_73A], al ;~ 0FBC:3525
cs=0xfbc;eip=0x003529; 	T(CBW);	// 33708 cbw ;~ 0FBC:3529
cs=0xfbc;eip=0x00352a; 	T(MOV(bx, ax));	// 33709 mov     bx, ax ;~ 0FBC:352A
cs=0xfbc;eip=0x00352c; 	T(SHL(bx, 1));	// 33710 shl     bx, 1 ;~ 0FBC:352C
cs=0xfbc;eip=0x00352e; 	T(MOV(ax, *(dw*)(((db*)terrainrows)+bx)));	// 33711 mov     ax, terrainrows[bx] ;~ 0FBC:352E
cs=0xfbc;eip=0x003532; 	T(MOV(cx, ax));	// 33712 mov     cx, ax ;~ 0FBC:3532
cs=0xfbc;eip=0x003534; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 33713 mov     al, [bp+var_3A4] ;~ 0FBC:3534
cs=0xfbc;eip=0x003538; 	T(CBW);	// 33714 cbw ;~ 0FBC:3538
cs=0xfbc;eip=0x003539; 	T(ADD(cx, ax));	// 33715 add     cx, ax ;~ 0FBC:3539
cs=0xfbc;eip=0x00353b; 	T(ADD(cx, bp));	// 33716 add     cx, bp ;~ 0FBC:353B
cs=0xfbc;eip=0x00353d; 	T(SUB(cx, 0x0AD4));	// 33717 sub     cx, 0AD4h ;~ 0FBC:353D
cs=0xfbc;eip=0x003541; 	X(MOV(*(dw*)(raddr(ss,bp+var_aec)), cx));	// 33718 mov     [bp+var_AEC], cx ;~ 0FBC:3541
cs=0xfbc;eip=0x003545; 	T(MOV(bx, cx));	// 33719 mov     bx, cx ;~ 0FBC:3545
cs=0xfbc;eip=0x003547; 	T(CMP(*(raddr(ds,bx)), 0));	// 33720 cmp     byte ptr [bx], 0 ;~ 0FBC:3547
cs=0xfbc;eip=0x00354a; 	J(JNZ(loc_21687));	// 33721 jnz     short loc_21687 ;~ 0FBC:354A
cs=0xfbc;eip=0x00354c; 	X(MOV(*(raddr(ds,bx)), 1));	// 33722 mov     byte ptr [bx], 1 ;~ 0FBC:354C
cs=0xfbc;eip=0x00354f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 33723 mov     bx, [bp+var_A] ;~ 0FBC:354F
cs=0xfbc;eip=0x003552; 	T(ADD(bx, *(dw*)(((db*)&td17_trk_elem_ordered))));	// 33724 add     bx, word ptr td17_trk_elem_ordered ;~ 0FBC:3552
cs=0xfbc;eip=0x003556; 	T(MOV(es, *(dw*)(((db*)&td17_trk_elem_ordered)+2)));	// 33725 mov     es, word ptr td17_trk_elem_ordered+2 ;~ 0FBC:3556
cs=0xfbc;eip=0x00355a; 	T(MOV(al, *(raddr(es,bx))));	// 33726 mov     al, es:[bx] ;~ 0FBC:355A
cs=0xfbc;eip=0x00355d; 	T(SUB(ah, ah));	// 33727 sub     ah, ah ;~ 0FBC:355D
cs=0xfbc;eip=0x00355f; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 33728 mov     [bp+var_C], ax ;~ 0FBC:355F
cs=0xfbc;eip=0x003562; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 33729 mov     bx, [bp+var_A] ;~ 0FBC:3562
cs=0xfbc;eip=0x003565; 	T(ADD(bx, *(dw*)(((db*)&trackdata18))));	// 33730 add     bx, word ptr trackdata18 ;~ 0FBC:3565
cs=0xfbc;eip=0x003569; 	T(MOV(es, *(dw*)(((db*)&trackdata18)+2)));	// 33731 mov     es, word ptr trackdata18+2 ;~ 0FBC:3569
cs=0xfbc;eip=0x00356d; 	T(MOV(al, *(raddr(es,bx))));	// 33732 mov     al, es:[bx] ;~ 0FBC:356D
cs=0xfbc;eip=0x003570; 	T(AND(al, 0x0F));	// 33733 and     al, 0Fh         ; mask out the high nibble ;~ 0FBC:3570
cs=0xfbc;eip=0x003572; 	X(MOV(*(raddr(ss,bp+var_742)), al));	// 33734 mov     [bp+var_742], al ;~ 0FBC:3572
cs=0xfbc;eip=0x003576; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 33735 mov     bx, [bp+var_A] ;~ 0FBC:3576
cs=0xfbc;eip=0x003579; 	T(ADD(bx, *(dw*)(((db*)&trackdata18))));	// 33736 add     bx, word ptr trackdata18 ;~ 0FBC:3579
cs=0xfbc;eip=0x00357d; 	T(MOV(al, *(raddr(es,bx))));	// 33737 mov     al, es:[bx] ;~ 0FBC:357D
cs=0xfbc;eip=0x003580; 	T(AND(al, 0x10));	// 33738 and     al, 10h         ; 5th bit (low to high) ;~ 0FBC:3580
cs=0xfbc;eip=0x003582; 	X(MOV(*(raddr(ss,bp+var_ae4)), al));	// 33739 mov     [bp+var_AE4], al ;~ 0FBC:3582
cs=0xfbc;eip=0x003586; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 33740 mov     bx, [bp+var_C] ;~ 0FBC:3586
cs=0xfbc;eip=0x003589; 	T(MOV(ax, bx));	// 33741 mov     ax, bx ;~ 0FBC:3589
cs=0xfbc;eip=0x00358b; 	T(SHL(bx, 1));	// 33742 shl     bx, 1 ;~ 0FBC:358B
cs=0xfbc;eip=0x00358d; 	T(ADD(bx, ax));	// 33743 add     bx, ax ;~ 0FBC:358D
cs=0xfbc;eip=0x00358f; 	T(SHL(bx, 1));	// 33744 shl     bx, 1 ;~ 0FBC:358F
cs=0xfbc;eip=0x003591; 	T(ADD(bx, ax));	// 33745 add     bx, ax ;~ 0FBC:3591
cs=0xfbc;eip=0x003593; 	T(SHL(bx, 1));	// 33746 shl     bx, 1 ;~ 0FBC:3593
cs=0xfbc;eip=0x003595; 	T(MOV(ax, *(dw*)(((db*)&trkobjectlist)+bx)));	// 33747 mov     ax, trkObjectList[bx] ;~ 0FBC:3595
cs=0xfbc;eip=0x003599; 	X(MOV(*(dw*)(raddr(ss,bp+var_3ae)), ax));	// 33748 mov     [bp+var_3AE], ax ;~ 0FBC:3599
cs=0xfbc;eip=0x00359d; 	T(CMP(*(raddr(ss,bp+var_ae4)), 0));	// 33749 cmp     [bp+var_AE4], 0 ;~ 0FBC:359D
cs=0xfbc;eip=0x0035a2; 	J(JNZ(loc_21747));	// 33750 jnz     short loc_21747 ;~ 0FBC:35A2
cs=0xfbc;eip=0x0035a4; 	J(JMP(loc_21498));	// 33751 jmp     loc_21498 ;~ 0FBC:35A4
loc_21747:
	// 6609 
cs=0xfbc;eip=0x0035a7; 	T(MOV(al, *(raddr(ss,bp+var_742))));	// 33755 mov     al, [bp+var_742] ;~ 0FBC:35A7
cs=0xfbc;eip=0x0035ab; 	T(SUB(ah, ah));	// 33756 sub     ah, ah ;~ 0FBC:35AB
cs=0xfbc;eip=0x0035ad; 	T(MOV(bx, ax));	// 33757 mov     bx, ax ;~ 0FBC:35AD
cs=0xfbc;eip=0x0035af; 	T(SHL(bx, 1));	// 33758 shl     bx, 1 ;~ 0FBC:35AF
cs=0xfbc;eip=0x0035b1; 	T(ADD(bx, ax));	// 33759 add     bx, ax ;~ 0FBC:35B1
cs=0xfbc;eip=0x0035b3; 	T(SHL(bx, 1));	// 33760 shl     bx, 1 ;~ 0FBC:35B3
cs=0xfbc;eip=0x0035b5; 	T(ADD(bx, ax));	// 33761 add     bx, ax ;~ 0FBC:35B5
cs=0xfbc;eip=0x0035b7; 	T(SHL(bx, 1));	// 33762 shl     bx, 1 ;~ 0FBC:35B7
cs=0xfbc;eip=0x0035b9; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_3ae))));	// 33763 add     bx, [bp+var_3AE] ;~ 0FBC:35B9
cs=0xfbc;eip=0x0035bd; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 33764 mov     ax, [bx+0Ah] ;~ 0FBC:35BD
cs=0xfbc;eip=0x0035c0; 	X(MOV(*(dw*)(raddr(ss,bp+var_aea)), ax));	// 33765 mov     [bp+var_AEA], ax ;~ 0FBC:35C0
cs=0xfbc;eip=0x0035c4; 	T(OR(ax, ax));	// 33766 or      ax, ax ;~ 0FBC:35C4
cs=0xfbc;eip=0x0035c6; 	J(JNZ(loc_2176b));	// 33767 jnz     short loc_2176B ;~ 0FBC:35C6
cs=0xfbc;eip=0x0035c8; 	J(JMP(loc_21498));	// 33768 jmp     loc_21498 ;~ 0FBC:35C8
loc_2176b:
	// 6610 
cs=0xfbc;eip=0x0035cb; 	J(JMP(loc_214b1));	// 33772 jmp     loc_214B1 ;~ 0FBC:35CB
loc_2176e:
	// 6611 
cs=0xfbc;eip=0x0035ce; 	T(MOV(ax, di));	// 33776 mov     ax, di ;~ 0FBC:35CE
cs=0xfbc;eip=0x0035d0; 	X(MOV(byte_4616e, al));	// 33777 mov     byte_4616E, al ;~ 0FBC:35D0
cs=0xfbc;eip=0x0035d3; 	X(MOV(*(raddr(ss,bp+var_3b0)), 0));	// 33778 mov     [bp+var_3B0], 0 ;~ 0FBC:35D3
cs=0xfbc;eip=0x0035d8; 	J(JMP(loc_217ae));	// 33779 jmp     short loc_217AE ;~ 0FBC:35D8
loc_2177a:
	// 6612 
cs=0xfbc;eip=0x0035da; 	T(CMP(*(raddr(ss,bp+var_3a4)), 0x1E));	// 33783 cmp     [bp+var_3A4], 1Eh ;~ 0FBC:35DA
cs=0xfbc;eip=0x0035df; 	J(JNZ(loc_21786));	// 33784 jnz     short loc_21786 ;~ 0FBC:35DF
cs=0xfbc;eip=0x0035e1; 	X(MOV(*(raddr(ss,bp+var_3a4)), 0x1D));	// 33785 mov     [bp+var_3A4], 1Dh ;~ 0FBC:35E1
loc_21786:
	// 6613 
cs=0xfbc;eip=0x0035e6; 	T(CMP(*(raddr(ss,bp+var_73a)), 0x0FF));	// 33789 cmp     [bp+var_73A], 0FFh ;~ 0FBC:35E6
cs=0xfbc;eip=0x0035eb; 	J(JNZ(loc_21794));	// 33790 jnz     short loc_21794 ;~ 0FBC:35EB
cs=0xfbc;eip=0x0035ed; 	X(MOV(*(raddr(ss,bp+var_73a)), 0));	// 33791 mov     [bp+var_73A], 0 ;~ 0FBC:35ED
cs=0xfbc;eip=0x0035f2; 	J(JMP(loc_217a0));	// 33792 jmp     short loc_217A0 ;~ 0FBC:35F2
loc_21794:
	// 6614 
cs=0xfbc;eip=0x0035f4; 	T(CMP(*(raddr(ss,bp+var_73a)), 0x1E));	// 33796 cmp     [bp+var_73A], 1Eh ;~ 0FBC:35F4
cs=0xfbc;eip=0x0035f9; 	J(JNZ(loc_217a0));	// 33797 jnz     short loc_217A0 ;~ 0FBC:35F9
cs=0xfbc;eip=0x0035fb; 	X(MOV(*(raddr(ss,bp+var_73a)), 0x1D));	// 33798 mov     [bp+var_73A], 1Dh ;~ 0FBC:35FB
loc_217a0:
	// 6615 
cs=0xfbc;eip=0x003600; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 33802 mov     al, [bp+var_3A4] ;~ 0FBC:3600
cs=0xfbc;eip=0x003604; 	X(MOV(byte_45d90, al));	// 33803 mov     byte_45D90, al ;~ 0FBC:3604
cs=0xfbc;eip=0x003607; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 33804 mov     al, [bp+var_73A] ;~ 0FBC:3607
cs=0xfbc;eip=0x00360b; 	X(MOV(byte_45e16, al));	// 33805 mov     byte_45E16, al ;~ 0FBC:360B
loc_217ae:
	// 6616 
cs=0xfbc;eip=0x00360e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_ae0))));	// 33808 push    [bp+var_AE0] ;~ 0FBC:360E
cs=0xfbc;eip=0x003612; 	X(PUSH(*(dw*)(raddr(ss,bp+var_ae2))));	// 33809 push    [bp+var_AE2] ;~ 0FBC:3612
cs=0xfbc;eip=0x003616; 	J(CALLF(mmgr_release,0));	// 33810 call    mmgr_release ;~ 0FBC:3616
cs=0xfbc;eip=0x00361b; 	T(ADD(sp, 4));	// 33811 add     sp, 4 ;~ 0FBC:361B
cs=0xfbc;eip=0x00361e; 	T(MOV(al, *(raddr(ss,bp+var_3b0))));	// 33812 mov     al, [bp+var_3B0] ;~ 0FBC:361E
cs=0xfbc;eip=0x003622; 	T(CBW);	// 33813 cbw ;~ 0FBC:3622
cs=0xfbc;eip=0x003623; 	X(POP(si));	// 33814 pop     si ;~ 0FBC:3623
cs=0xfbc;eip=0x003624; 	X(POP(di));	// 33815 pop     di ;~ 0FBC:3624
cs=0xfbc;eip=0x003625; 	T(MOV(sp, bp));	// 33816 mov     sp, bp ;~ 0FBC:3625
cs=0xfbc;eip=0x003627; 	X(POP(bp));	// 33817 pop     bp ;~ 0FBC:3627
cs=0xfbc;eip=0x003628; 	J(RETF(0));	// 33818 retf ;~ 0FBC:3628

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdef_2140f: 	goto def_2140f;
        case m2c::kloc_20704: 	goto loc_20704;
        case m2c::kloc_20725: 	goto loc_20725;
        case m2c::kloc_2073c: 	goto loc_2073c;
        case m2c::kloc_2074d: 	goto loc_2074d;
        case m2c::kloc_20788: 	goto loc_20788;
        case m2c::kloc_2078d: 	goto loc_2078d;
        case m2c::kloc_20797: 	goto loc_20797;
        case m2c::kloc_207a0: 	goto loc_207a0;
        case m2c::kloc_207a4: 	goto loc_207a4;
        case m2c::kloc_207b6: 	goto loc_207b6;
        case m2c::kloc_207be: 	goto loc_207be;
        case m2c::kloc_207cf: 	goto loc_207cf;
        case m2c::kloc_2080e: 	goto loc_2080e;
        case m2c::kloc_20812: 	goto loc_20812;
        case m2c::kloc_20824: 	goto loc_20824;
        case m2c::kloc_2082c: 	goto loc_2082c;
        case m2c::kloc_20832: 	goto loc_20832;
        case m2c::kloc_20842: 	goto loc_20842;
        case m2c::kloc_2084a: 	goto loc_2084a;
        case m2c::kloc_20852: 	goto loc_20852;
        case m2c::kloc_2085a: 	goto loc_2085a;
        case m2c::kloc_20876: 	goto loc_20876;
        case m2c::kloc_2087a: 	goto loc_2087a;
        case m2c::kloc_208b2: 	goto loc_208b2;
        case m2c::kloc_208b7: 	goto loc_208b7;
        case m2c::kloc_208bb: 	goto loc_208bb;
        case m2c::kloc_208bf: 	goto loc_208bf;
        case m2c::kloc_208c9: 	goto loc_208c9;
        case m2c::kloc_208f3: 	goto loc_208f3;
        case m2c::kloc_20919: 	goto loc_20919;
        case m2c::kloc_20926: 	goto loc_20926;
        case m2c::kloc_2092b: 	goto loc_2092b;
        case m2c::kloc_20933: 	goto loc_20933;
        case m2c::kloc_2093b: 	goto loc_2093b;
        case m2c::kloc_20943: 	goto loc_20943;
        case m2c::kloc_2094b: 	goto loc_2094b;
        case m2c::kloc_20952: 	goto loc_20952;
        case m2c::kloc_20956: 	goto loc_20956;
        case m2c::kloc_20966: 	goto loc_20966;
        case m2c::kloc_20976: 	goto loc_20976;
        case m2c::kloc_20997: 	goto loc_20997;
        case m2c::kloc_20a0c: 	goto loc_20a0c;
        case m2c::kloc_20a16: 	goto loc_20a16;
        case m2c::kloc_20aa8: 	goto loc_20aa8;
        case m2c::kloc_20ab1: 	goto loc_20ab1;
        case m2c::kloc_20aba: 	goto loc_20aba;
        case m2c::kloc_20ac2: 	goto loc_20ac2;
        case m2c::kloc_20b30: 	goto loc_20b30;
        case m2c::kloc_20b39: 	goto loc_20b39;
        case m2c::kloc_20b50: 	goto loc_20b50;
        case m2c::kloc_20b76: 	goto loc_20b76;
        case m2c::kloc_20b96: 	goto loc_20b96;
        case m2c::kloc_20b9c: 	goto loc_20b9c;
        case m2c::kloc_20ba2: 	goto loc_20ba2;
        case m2c::kloc_20bbe: 	goto loc_20bbe;
        case m2c::kloc_20bc4: 	goto loc_20bc4;
        case m2c::kloc_20bcc: 	goto loc_20bcc;
        case m2c::kloc_20bd4: 	goto loc_20bd4;
        case m2c::kloc_20bf2: 	goto loc_20bf2;
        case m2c::kloc_20bfa: 	goto loc_20bfa;
        case m2c::kloc_20c02: 	goto loc_20c02;
        case m2c::kloc_20c0a: 	goto loc_20c0a;
        case m2c::kloc_20c12: 	goto loc_20c12;
        case m2c::kloc_20c2a: 	goto loc_20c2a;
        case m2c::kloc_20c2e: 	goto loc_20c2e;
        case m2c::kloc_20c42: 	goto loc_20c42;
        case m2c::kloc_20c48: 	goto loc_20c48;
        case m2c::kloc_20c4e: 	goto loc_20c4e;
        case m2c::kloc_20c54: 	goto loc_20c54;
        case m2c::kloc_20c78: 	goto loc_20c78;
        case m2c::kloc_20c7e: 	goto loc_20c7e;
        case m2c::kloc_20c86: 	goto loc_20c86;
        case m2c::kloc_20c9d: 	goto loc_20c9d;
        case m2c::kloc_20ca2: 	goto loc_20ca2;
        case m2c::kloc_20cac: 	goto loc_20cac;
        case m2c::kloc_20cce: 	goto loc_20cce;
        case m2c::kloc_20d01: 	goto loc_20d01;
        case m2c::kloc_20d0d: 	goto loc_20d0d;
        case m2c::kloc_20d0e: 	goto loc_20d0e;
        case m2c::kloc_20d48: 	goto loc_20d48;
        case m2c::kloc_20d52: 	goto loc_20d52;
        case m2c::kloc_20d6a: 	goto loc_20d6a;
        case m2c::kloc_20d7a: 	goto loc_20d7a;
        case m2c::kloc_20e36: 	goto loc_20e36;
        case m2c::kloc_20e39: 	goto loc_20e39;
        case m2c::kloc_20e3a: 	goto loc_20e3a;
        case m2c::kloc_20e6e: 	goto loc_20e6e;
        case m2c::kloc_20e79: 	goto loc_20e79;
        case m2c::kloc_20e82: 	goto loc_20e82;
        case m2c::kloc_20e8b: 	goto loc_20e8b;
        case m2c::kloc_20e94: 	goto loc_20e94;
        case m2c::kloc_20e9d: 	goto loc_20e9d;
        case m2c::kloc_20eac: 	goto loc_20eac;
        case m2c::kloc_20ecc: 	goto loc_20ecc;
        case m2c::kloc_20edc: 	goto loc_20edc;
        case m2c::kloc_20ee4: 	goto loc_20ee4;
        case m2c::kloc_20ef6: 	goto loc_20ef6;
        case m2c::kloc_20f08: 	goto loc_20f08;
        case m2c::kloc_20f18: 	goto loc_20f18;
        case m2c::kloc_20f20: 	goto loc_20f20;
        case m2c::kloc_20f30: 	goto loc_20f30;
        case m2c::kloc_20f4f: 	goto loc_20f4f;
        case m2c::kloc_20f56: 	goto loc_20f56;
        case m2c::kloc_20f6a: 	goto loc_20f6a;
        case m2c::kloc_20fda: 	goto loc_20fda;
        case m2c::kloc_20fe0: 	goto loc_20fe0;
        case m2c::kloc_21080: 	goto loc_21080;
        case m2c::kloc_2108a: 	goto loc_2108a;
        case m2c::kloc_21094: 	goto loc_21094;
        case m2c::kloc_2109e: 	goto loc_2109e;
        case m2c::kloc_21122: 	goto loc_21122;
        case m2c::kloc_21126: 	goto loc_21126;
        case m2c::kloc_21129: 	goto loc_21129;
        case m2c::kloc_21156: 	goto loc_21156;
        case m2c::kloc_21174: 	goto loc_21174;
        case m2c::kloc_2119c: 	goto loc_2119c;
        case m2c::kloc_211a7: 	goto loc_211a7;
        case m2c::kloc_211da: 	goto loc_211da;
        case m2c::kloc_211de: 	goto loc_211de;
        case m2c::kloc_211fe: 	goto loc_211fe;
        case m2c::kloc_21214: 	goto loc_21214;
        case m2c::kloc_2122c: 	goto loc_2122c;
        case m2c::kloc_2123f: 	goto loc_2123f;
        case m2c::kloc_2127e: 	goto loc_2127e;
        case m2c::kloc_212c2: 	goto loc_212c2;
        case m2c::kloc_212cf: 	goto loc_212cf;
        case m2c::kloc_21314: 	goto loc_21314;
        case m2c::kloc_21320: 	goto loc_21320;
        case m2c::kloc_21362: 	goto loc_21362;
        case m2c::kloc_21367: 	goto loc_21367;
        case m2c::kloc_2137c: 	goto loc_2137c;
        case m2c::kloc_213c4: 	goto loc_213c4;
        case m2c::kloc_213d2: 	goto loc_213d2;
        case m2c::kloc_2140c: 	goto loc_2140c;
        case m2c::kloc_21414: 	goto loc_21414;
        case m2c::kloc_21418: 	goto loc_21418;
        case m2c::kloc_21420: 	goto loc_21420;
        case m2c::kloc_2142a: 	goto loc_2142a;
        case m2c::kloc_2142e: 	goto loc_2142e;
        case m2c::kloc_2143a: 	goto loc_2143a;
        case m2c::kloc_2143e: 	goto loc_2143e;
        case m2c::kloc_21442: 	goto loc_21442;
        case m2c::kloc_2144a: 	goto loc_2144a;
        case m2c::kloc_2144e: 	goto loc_2144e;
        case m2c::kloc_21456: 	goto loc_21456;
        case m2c::kloc_2145a: 	goto loc_2145a;
        case m2c::kloc_21462: 	goto loc_21462;
        case m2c::kloc_21466: 	goto loc_21466;
        case m2c::kloc_2146c: 	goto loc_2146c;
        case m2c::kloc_21474: 	goto loc_21474;
        case m2c::kloc_21498: 	goto loc_21498;
        case m2c::kloc_214b1: 	goto loc_214b1;
        case m2c::kloc_21526: 	goto loc_21526;
        case m2c::kloc_2152a: 	goto loc_2152a;
        case m2c::kloc_21560: 	goto loc_21560;
        case m2c::kloc_21576: 	goto loc_21576;
        case m2c::kloc_2158e: 	goto loc_2158e;
        case m2c::kloc_2159f: 	goto loc_2159f;
        case m2c::kloc_21614: 	goto loc_21614;
        case m2c::kloc_2162f: 	goto loc_2162f;
        case m2c::kloc_21660: 	goto loc_21660;
        case m2c::kloc_2166d: 	goto loc_2166d;
        case m2c::kloc_21687: 	goto loc_21687;
        case m2c::kloc_21688: 	goto loc_21688;
        case m2c::kloc_21697: 	goto loc_21697;
        case m2c::kloc_21747: 	goto loc_21747;
        case m2c::kloc_2176b: 	goto loc_2176b;
        case m2c::kloc_2176e: 	goto loc_2176e;
        case m2c::kloc_2177a: 	goto loc_2177a;
        case m2c::kloc_21786: 	goto loc_21786;
        case m2c::kloc_21794: 	goto loc_21794;
        case m2c::kloc_217a0: 	goto loc_217a0;
        case m2c::kloc_217ae: 	goto loc_217ae;
        case m2c::kret_fbc_32f4: 	goto ret_fbc_32f4;
        case m2c::ktrack_setup: 	goto track_setup;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool load_opponent_data(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    load_opponent_data:
    _begin:
#undef var_f30
#define var_f30 -0x0F30
	// 33831 var_F30         = word ptr -0F30h ;~ 0FBC:362A
#undef var_b2e
#define var_b2e -0x0B2E
	// 33832 var_B2E         = word ptr -0B2Eh ;~ 0FBC:362A
#undef var_b2c
#define var_b2c -0x0B2C
	// 33833 var_B2C         = word ptr -0B2Ch ;~ 0FBC:362A
#undef var_b2a
#define var_b2a -0x0B2A
	// 33834 var_B2A         = word ptr -0B2Ah ;~ 0FBC:362A
#undef var_b28
#define var_b28 -0x0B28
	// 33835 var_B28         = word ptr -0B28h ;~ 0FBC:362A
#undef var_b26
#define var_b26 -0x0B26
	// 33836 var_B26         = word ptr -0B26h ;~ 0FBC:362A
#undef var_b24
#define var_b24 -0x0B24
	// 33837 var_B24         = word ptr -0B24h ;~ 0FBC:362A
#undef var_414
#define var_414 -0x414
	// 33838 var_414         = word ptr -414h ;~ 0FBC:362A
#undef var_412
#define var_412 -0x412
	// 33839 var_412         = word ptr -412h ;~ 0FBC:362A
#undef var_410
#define var_410 -0x410
	// 33840 var_410         = word ptr -410h ;~ 0FBC:362A
#undef var_20e
#define var_20e -0x20E
	// 33841 var_20E         = word ptr -20Eh ;~ 0FBC:362A
#undef var_20c
#define var_20c -0x20C
	// 33842 var_20C         = word ptr -20Ch ;~ 0FBC:362A
#undef var_a
#define var_a -0x0A
	// 33843 var_A           = dword ptr -0Ah ;~ 0FBC:362A
#undef var_6
#define var_6 -6
	// 33844 var_6           = word ptr -6 ;~ 0FBC:362A
#undef var_4
#define var_4 -4
	// 33845 var_4           = word ptr -4 ;~ 0FBC:362A
#undef var_2
#define var_2 -2
	// 33846 var_2           = word ptr -2 ;~ 0FBC:362A
cs=0xfbc;eip=0x00362a; 	X(PUSH(bp));	// 33848 push    bp ;~ 0FBC:362A
cs=0xfbc;eip=0x00362b; 	T(MOV(bp, sp));	// 33849 mov     bp, sp ;~ 0FBC:362B
cs=0xfbc;eip=0x00362d; 	T(SUB(sp, 0x0F30));	// 33850 sub     sp, 0F30h ;~ 0FBC:362D
cs=0xfbc;eip=0x003631; 	X(PUSH(di));	// 33851 push    di ;~ 0FBC:3631
cs=0xfbc;eip=0x003632; 	X(PUSH(si));	// 33852 push    si ;~ 0FBC:3632
cs=0xfbc;eip=0x003633; 	T(MOV(al, byte_449aa));	// 33853 mov     al, byte_449AA ;~ 0FBC:3633
cs=0xfbc;eip=0x003636; 	T(ADD(al, 0x30));	// 33854 add     al, 30h ; '0' ;~ 0FBC:3636
cs=0xfbc;eip=0x003638; 	X(MOV(byte_3b907, al));	// 33855 mov     byte_3B907, al ;~ 0FBC:3638
cs=0xfbc;eip=0x00363b; 	T(MOV(ax, offset(dseg,unk_3b904)));	// 33856 mov     ax, offset unk_3B904 ;~ 0FBC:363B
cs=0xfbc;eip=0x00363e; 	X(PUSH(ax));	// 33857 push    ax ;~ 0FBC:363E
cs=0xfbc;eip=0x00363f; 	J(CALLF(file_load_resfile,0));	// 33858 call    file_load_resfile ;~ 0FBC:363F
cs=0xfbc;eip=0x003644; 	T(ADD(sp, 2));	// 33859 add     sp, 2 ;~ 0FBC:3644
cs=0xfbc;eip=0x003647; 	X(MOV(*(dw*)(raddr(ss,bp+var_b2e)), ax));	// 33860 mov     [bp+var_B2E], ax ;~ 0FBC:3647
cs=0xfbc;eip=0x00364b; 	X(MOV(*(dw*)(raddr(ss,bp+var_b2c)), dx));	// 33861 mov     [bp+var_B2C], dx ;~ 0FBC:364B
cs=0xfbc;eip=0x00364f; 	T(MOV(ax, offset(dseg,anam)));	// 33862 mov     ax, offset aNam ; "nam" ;~ 0FBC:364F
cs=0xfbc;eip=0x003652; 	X(PUSH(ax));	// 33863 push    ax ;~ 0FBC:3652
cs=0xfbc;eip=0x003653; 	X(PUSH(dx));	// 33864 push    dx ;~ 0FBC:3653
cs=0xfbc;eip=0x003654; 	X(PUSH(*(dw*)(raddr(ss,bp+var_b2e))));	// 33865 push    [bp+var_B2E] ;~ 0FBC:3654
cs=0xfbc;eip=0x003658; 	J(CALLF(locate_text_res,0));	// 33866 call    locate_text_res ;~ 0FBC:3658
cs=0xfbc;eip=0x00365d; 	T(ADD(sp, 6));	// 33867 add     sp, 6 ;~ 0FBC:365D
cs=0xfbc;eip=0x003660; 	X(PUSH(dx));	// 33868 push    dx ;~ 0FBC:3660
cs=0xfbc;eip=0x003661; 	X(PUSH(ax));	// 33869 push    ax ;~ 0FBC:3661
cs=0xfbc;eip=0x003662; 	T(MOV(ax, offset(dseg,unk_46464)));	// 33870 mov     ax, offset unk_46464 ;~ 0FBC:3662
cs=0xfbc;eip=0x003665; 	X(PUSH(ax));	// 33871 push    ax ;~ 0FBC:3665
cs=0xfbc;eip=0x003666; 	J(CALLF(copy_string,0));	// 33872 call    copy_string ;~ 0FBC:3666
cs=0xfbc;eip=0x00366b; 	T(ADD(sp, 6));	// 33873 add     sp, 6 ;~ 0FBC:366B
cs=0xfbc;eip=0x00366e; 	T(MOV(ax, offset(dseg,apath)));	// 33874 mov     ax, offset aPath ; "path" ;~ 0FBC:366E
cs=0xfbc;eip=0x003671; 	X(PUSH(ax));	// 33875 push    ax ;~ 0FBC:3671
cs=0xfbc;eip=0x003672; 	X(PUSH(*(dw*)(raddr(ss,bp+var_b2c))));	// 33876 push    [bp+var_B2C] ;~ 0FBC:3672
cs=0xfbc;eip=0x003676; 	X(PUSH(*(dw*)(raddr(ss,bp+var_b2e))));	// 33877 push    [bp+var_B2E] ;~ 0FBC:3676
cs=0xfbc;eip=0x00367a; 	J(CALLF(locate_shape_alt,0));	// 33878 call    locate_shape_alt ;~ 0FBC:367A
cs=0xfbc;eip=0x00367f; 	T(ADD(sp, 6));	// 33879 add     sp, 6 ;~ 0FBC:367F
cs=0xfbc;eip=0x003682; 	X(MOV(*(dw*)(raddr(ss,bp+var_414)), ax));	// 33880 mov     [bp+var_414], ax ;~ 0FBC:3682
cs=0xfbc;eip=0x003686; 	X(MOV(*(dw*)(raddr(ss,bp+var_412)), dx));	// 33881 mov     [bp+var_412], dx ;~ 0FBC:3686
cs=0xfbc;eip=0x00368a; 	T(MOV(ax, offset(dseg,asped)));	// 33882 mov     ax, offset aSped ; "sped" ;~ 0FBC:368A
cs=0xfbc;eip=0x00368d; 	X(PUSH(ax));	// 33883 push    ax ;~ 0FBC:368D
cs=0xfbc;eip=0x00368e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_b2c))));	// 33884 push    [bp+var_B2C] ;~ 0FBC:368E
cs=0xfbc;eip=0x003692; 	X(PUSH(*(dw*)(raddr(ss,bp+var_b2e))));	// 33885 push    [bp+var_B2E] ;~ 0FBC:3692
cs=0xfbc;eip=0x003696; 	J(CALLF(locate_shape_alt,0));	// 33886 call    locate_shape_alt ;~ 0FBC:3696
cs=0xfbc;eip=0x00369b; 	T(ADD(sp, 6));	// 33887 add     sp, 6 ;~ 0FBC:369B
cs=0xfbc;eip=0x00369e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 33888 mov     word ptr [bp+var_A], ax ;~ 0FBC:369E
cs=0xfbc;eip=0x0036a1; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 33889 mov     word ptr [bp+var_A+2], dx ;~ 0FBC:36A1
cs=0xfbc;eip=0x0036a4; 	T(SUB(si, si));	// 33890 sub     si, si ;~ 0FBC:36A4
loc_21846:
	// 6617 
cs=0xfbc;eip=0x0036a6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 33893 les     bx, [bp+var_A] ;~ 0FBC:36A6
cs=0xfbc;eip=0x0036a9; 	T(MOV(al, *(raddr(es,bx+si))));	// 33894 mov     al, es:[bx+si] ;~ 0FBC:36A9
cs=0xfbc;eip=0x0036ac; 	X(MOV(*((&oppnentsped)+si), al));	// 33895 mov     oppnentSped[si], al ;~ 0FBC:36AC
cs=0xfbc;eip=0x0036b0; 	T(INC(si));	// 33896 inc     si ;~ 0FBC:36B0
cs=0xfbc;eip=0x0036b1; 	T(CMP(si, 0x10));	// 33897 cmp     si, 10h ;~ 0FBC:36B1
cs=0xfbc;eip=0x0036b4; 	J(JL(loc_21846));	// 33898 jl      short loc_21846 ;~ 0FBC:36B4
cs=0xfbc;eip=0x0036b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_b26)), 0x423F));	// 33899 mov     [bp+var_B26], 423Fh ;~ 0FBC:36B6
cs=0xfbc;eip=0x0036bc; 	X(MOV(*(dw*)(raddr(ss,bp+var_b24)), 0x0F));	// 33900 mov     [bp+var_B24], 0Fh ;~ 0FBC:36BC
cs=0xfbc;eip=0x0036c2; 	X(MOV(*(dw*)(raddr(ss,bp+var_b28)), 0));	// 33901 mov     [bp+var_B28], 0 ;~ 0FBC:36C2
cs=0xfbc;eip=0x0036c8; 	T(SUB(ax, ax));	// 33902 sub     ax, ax ;~ 0FBC:36C8
cs=0xfbc;eip=0x0036ca; 	X(MOV(*(dw*)(raddr(ss,bp+var_20c)), ax));	// 33903 mov     [bp+var_20C], ax ;~ 0FBC:36CA
cs=0xfbc;eip=0x0036ce; 	X(MOV(*(dw*)(raddr(ss,bp+var_20e)), ax));	// 33904 mov     [bp+var_20E], ax ;~ 0FBC:36CE
cs=0xfbc;eip=0x0036d2; 	X(MOV(*(dw*)(raddr(ss,bp+var_b2a)), ax));	// 33905 mov     [bp+var_B2A], ax ;~ 0FBC:36D2
cs=0xfbc;eip=0x0036d6; 	T(SUB(si, si));	// 33906 sub     si, si ;~ 0FBC:36D6
loc_21878:
	// 6618 
cs=0xfbc;eip=0x0036d8; 	X(MOV(*(dw*)(raddr(ss,bp+var_410)), 0));	// 33910 mov     [bp+var_410], 0 ;~ 0FBC:36D8
cs=0xfbc;eip=0x0036de; 	T(MOV(bx, si));	// 33911 mov     bx, si ;~ 0FBC:36DE
cs=0xfbc;eip=0x0036e0; 	T(SHL(bx, 1));	// 33912 shl     bx, 1 ;~ 0FBC:36E0
cs=0xfbc;eip=0x0036e2; 	T(ADD(bx, *(dw*)(((db*)&td01_track_file_cpy))));	// 33913 add     bx, word ptr td01_track_file_cpy ;~ 0FBC:36E2
cs=0xfbc;eip=0x0036e6; 	T(MOV(es, *(dw*)(((db*)&td01_track_file_cpy)+2)));	// 33914 mov     es, word ptr td01_track_file_cpy+2 ;~ 0FBC:36E6
cs=0xfbc;eip=0x0036ea; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 33915 mov     ax, es:[bx] ;~ 0FBC:36EA
cs=0xfbc;eip=0x0036ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 33916 mov     [bp+var_4], ax ;~ 0FBC:36ED
cs=0xfbc;eip=0x0036f0; 	T(OR(ax, ax));	// 33917 or      ax, ax ;~ 0FBC:36F0
cs=0xfbc;eip=0x0036f2; 	J(JNZ(loc_218a2));	// 33918 jnz     short loc_218A2 ;~ 0FBC:36F2
cs=0xfbc;eip=0x0036f4; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 1));	// 33919 mov     [bp+var_2], 1 ;~ 0FBC:36F4
loc_21899:
	// 6619 
cs=0xfbc;eip=0x0036f9; 	X(MOV(*(dw*)(raddr(ss,bp+var_410)), 1));	// 33922 mov     [bp+var_410], 1 ;~ 0FBC:36F9
cs=0xfbc;eip=0x0036ff; 	J(JMP(loc_218da));	// 33923 jmp     short loc_218DA ;~ 0FBC:36FF
loc_218a2:
	// 6620 
cs=0xfbc;eip=0x003702; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x0FFFF));	// 33928 cmp     [bp+var_4], 0FFFFh ;~ 0FBC:3702
cs=0xfbc;eip=0x003706; 	J(JNZ(loc_218b0));	// 33929 jnz     short loc_218B0 ;~ 0FBC:3706
cs=0xfbc;eip=0x003708; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 33930 mov     [bp+var_2], 0 ;~ 0FBC:3708
cs=0xfbc;eip=0x00370d; 	J(JMP(loc_21899));	// 33931 jmp     short loc_21899 ;~ 0FBC:370D
loc_218b0:
	// 6621 
cs=0xfbc;eip=0x003710; 	T(CMP(*(dw*)(raddr(ss,bp+var_b28)), 0));	// 33936 cmp     [bp+var_B28], 0 ;~ 0FBC:3710
cs=0xfbc;eip=0x003715; 	J(JZ(loc_218da));	// 33937 jz      short loc_218DA ;~ 0FBC:3715
cs=0xfbc;eip=0x003717; 	T(SUB(di, di));	// 33938 sub     di, di ;~ 0FBC:3717
cs=0xfbc;eip=0x003719; 	J(JMP(loc_218d4));	// 33939 jmp     short loc_218D4 ;~ 0FBC:3719
loc_218bc:
	// 6622 
cs=0xfbc;eip=0x00371c; 	T(MOV(bx, di));	// 33944 mov     bx, di ;~ 0FBC:371C
cs=0xfbc;eip=0x00371e; 	T(SHL(bx, 1));	// 33945 shl     bx, 1 ;~ 0FBC:371E
cs=0xfbc;eip=0x003720; 	T(ADD(bx, bp));	// 33946 add     bx, bp ;~ 0FBC:3720
cs=0xfbc;eip=0x003722; 	T(CMP(*(dw*)(raddr(ds,bx-0x0B20)), si));	// 33947 cmp     [bx-0B20h], si ;~ 0FBC:3722
cs=0xfbc;eip=0x003726; 	J(JNZ(loc_218d3));	// 33948 jnz     short loc_218D3 ;~ 0FBC:3726
cs=0xfbc;eip=0x003728; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 33949 mov     [bp+var_2], 0 ;~ 0FBC:3728
cs=0xfbc;eip=0x00372d; 	X(MOV(*(dw*)(raddr(ss,bp+var_410)), 1));	// 33950 mov     [bp+var_410], 1 ;~ 0FBC:372D
loc_218d3:
	// 6623 
cs=0xfbc;eip=0x003733; 	T(INC(di));	// 33953 inc     di ;~ 0FBC:3733
loc_218d4:
	// 6624 
cs=0xfbc;eip=0x003734; 	T(CMP(*(dw*)(raddr(ss,bp+var_b28)), di));	// 33956 cmp     [bp+var_B28], di ;~ 0FBC:3734
cs=0xfbc;eip=0x003738; 	J(JG(loc_218bc));	// 33957 jg      short loc_218BC ;~ 0FBC:3738
loc_218da:
	// 6625 
cs=0xfbc;eip=0x00373a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b28))));	// 33961 mov     bx, [bp+var_B28] ;~ 0FBC:373A
cs=0xfbc;eip=0x00373e; 	X(INC(*(dw*)(raddr(ss,bp+var_b28))));	// 33962 inc     [bp+var_B28] ;~ 0FBC:373E
cs=0xfbc;eip=0x003742; 	T(SHL(bx, 1));	// 33963 shl     bx, 1 ;~ 0FBC:3742
cs=0xfbc;eip=0x003744; 	T(ADD(bx, bp));	// 33964 add     bx, bp ;~ 0FBC:3744
cs=0xfbc;eip=0x003746; 	X(MOV(*(dw*)(raddr(ds,bx-0x0B20)), si));	// 33965 mov     [bx-0B20h], si ;~ 0FBC:3746
cs=0xfbc;eip=0x00374a; 	T(LES(bx, td17_trk_elem_ordered));	// 33966 les     bx, td17_trk_elem_ordered ;~ 0FBC:374A
cs=0xfbc;eip=0x00374e; 	T(MOV(bl, *(raddr(es,bx+si))));	// 33967 mov     bl, es:[bx+si] ;~ 0FBC:374E
cs=0xfbc;eip=0x003751; 	T(SUB(bh, bh));	// 33968 sub     bh, bh ;~ 0FBC:3751
cs=0xfbc;eip=0x003753; 	T(ADD(bx, *(dw*)((dw*)(raddr(ss,bp+var_a)))));	// 33969 add     bx, word ptr [bp+var_A] ;~ 0FBC:3753
cs=0xfbc;eip=0x003756; 	T(MOV(es, *(dw*)((dw*)(raddr(ss,bp+var_a+2)))));	// 33970 mov     es, word ptr [bp+var_A+2] ;~ 0FBC:3756
cs=0xfbc;eip=0x003759; 	T(MOV(al, *(raddr(es,bx))));	// 33971 mov     al, es:[bx] ;~ 0FBC:3759
cs=0xfbc;eip=0x00375c; 	T(SUB(ah, ah));	// 33972 sub     ah, ah ;~ 0FBC:375C
cs=0xfbc;eip=0x00375e; 	T(INC(ax));	// 33973 inc     ax ;~ 0FBC:375E
cs=0xfbc;eip=0x00375f; 	T(SUB(dx, dx));	// 33974 sub     dx, dx ;~ 0FBC:375F
cs=0xfbc;eip=0x003761; 	X(ADD(*(dw*)(raddr(ss,bp+var_20e)), ax));	// 33975 add     [bp+var_20E], ax ;~ 0FBC:3761
cs=0xfbc;eip=0x003765; 	X(ADC(*(dw*)(raddr(ss,bp+var_20c)), dx));	// 33976 adc     [bp+var_20C], dx ;~ 0FBC:3765
cs=0xfbc;eip=0x003769; 	T(CMP(*(dw*)(raddr(ss,bp+var_410)), dx));	// 33977 cmp     [bp+var_410], dx ;~ 0FBC:3769
cs=0xfbc;eip=0x00376d; 	J(JNZ(loc_21912));	// 33978 jnz     short loc_21912 ;~ 0FBC:376D
cs=0xfbc;eip=0x00376f; 	J(JMP(loc_219fe));	// 33979 jmp     loc_219FE ;~ 0FBC:376F
loc_21912:
	// 6626 
cs=0xfbc;eip=0x003772; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), dx));	// 33983 cmp     [bp+var_2], dx ;~ 0FBC:3772
cs=0xfbc;eip=0x003775; 	J(JNZ(loc_2191a));	// 33984 jnz     short loc_2191A ;~ 0FBC:3775
cs=0xfbc;eip=0x003777; 	J(JMP(loc_219a5));	// 33985 jmp     loc_219A5 ;~ 0FBC:3777
loc_2191a:
	// 6627 
cs=0xfbc;eip=0x00377a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_b26))));	// 33989 mov     ax, [bp+var_B26] ;~ 0FBC:377A
cs=0xfbc;eip=0x00377e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_b24))));	// 33990 mov     dx, [bp+var_B24] ;~ 0FBC:377E
cs=0xfbc;eip=0x003782; 	T(CMP(*(dw*)(raddr(ss,bp+var_20c)), dx));	// 33991 cmp     [bp+var_20C], dx ;~ 0FBC:3782
cs=0xfbc;eip=0x003786; 	J(JA(loc_219a5));	// 33992 ja      short loc_219A5 ;~ 0FBC:3786
cs=0xfbc;eip=0x003788; 	J(JC(loc_21930));	// 33993 jb      short loc_21930 ;~ 0FBC:3788
cs=0xfbc;eip=0x00378a; 	T(CMP(*(dw*)(raddr(ss,bp+var_20e)), ax));	// 33994 cmp     [bp+var_20E], ax ;~ 0FBC:378A
cs=0xfbc;eip=0x00378e; 	J(JNC(loc_219a5));	// 33995 jnb     short loc_219A5 ;~ 0FBC:378E
loc_21930:
	// 6628 
cs=0xfbc;eip=0x003790; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b28))));	// 33998 mov     bx, [bp+var_B28] ;~ 0FBC:3790
cs=0xfbc;eip=0x003794; 	X(INC(*(dw*)(raddr(ss,bp+var_b28))));	// 33999 inc     [bp+var_B28] ;~ 0FBC:3794
cs=0xfbc;eip=0x003798; 	T(SHL(bx, 1));	// 34000 shl     bx, 1 ;~ 0FBC:3798
cs=0xfbc;eip=0x00379a; 	T(ADD(bx, bp));	// 34001 add     bx, bp ;~ 0FBC:379A
cs=0xfbc;eip=0x00379c; 	X(MOV(*(dw*)(raddr(ds,bx-0x0B20)), 0));	// 34002 mov     word ptr [bx-0B20h], 0 ;~ 0FBC:379C
cs=0xfbc;eip=0x0037a2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_20e))));	// 34003 mov     ax, [bp+var_20E] ;~ 0FBC:37A2
cs=0xfbc;eip=0x0037a6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_20c))));	// 34004 mov     dx, [bp+var_20C] ;~ 0FBC:37A6
cs=0xfbc;eip=0x0037aa; 	X(MOV(*(dw*)(raddr(ss,bp+var_b26)), ax));	// 34005 mov     [bp+var_B26], ax ;~ 0FBC:37AA
cs=0xfbc;eip=0x0037ae; 	X(MOV(*(dw*)(raddr(ss,bp+var_b24)), dx));	// 34006 mov     [bp+var_B24], dx ;~ 0FBC:37AE
cs=0xfbc;eip=0x0037b2; 	T(SUB(di, di));	// 34007 sub     di, di ;~ 0FBC:37B2
cs=0xfbc;eip=0x0037b4; 	J(JMP(loc_21978));	// 34008 jmp     short loc_21978 ;~ 0FBC:37B4
loc_21958:
	// 6629 
cs=0xfbc;eip=0x0037b8; 	T(MOV(ax, di));	// 34014 mov     ax, di ;~ 0FBC:37B8
cs=0xfbc;eip=0x0037ba; 	T(SHL(ax, 1));	// 34015 shl     ax, 1 ;~ 0FBC:37BA
cs=0xfbc;eip=0x0037bc; 	X(MOV(*(dw*)(raddr(ss,bp+var_f30)), ax));	// 34016 mov     [bp+var_F30], ax ;~ 0FBC:37BC
cs=0xfbc;eip=0x0037c0; 	T(MOV(bx, ax));	// 34017 mov     bx, ax ;~ 0FBC:37C0
cs=0xfbc;eip=0x0037c2; 	T(ADD(bx, bp));	// 34018 add     bx, bp ;~ 0FBC:37C2
cs=0xfbc;eip=0x0037c4; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x0B20))));	// 34019 mov     ax, [bx-0B20h] ;~ 0FBC:37C4
cs=0xfbc;eip=0x0037c8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_f30))));	// 34020 mov     bx, [bp+var_F30] ;~ 0FBC:37C8
cs=0xfbc;eip=0x0037cc; 	T(ADD(bx, *(dw*)(((db*)&trackdata3))));	// 34021 add     bx, word ptr trackdata3 ;~ 0FBC:37CC
cs=0xfbc;eip=0x0037d0; 	T(MOV(es, *(dw*)(((db*)&trackdata3)+2)));	// 34022 mov     es, word ptr trackdata3+2 ;~ 0FBC:37D0
cs=0xfbc;eip=0x0037d4; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 34023 mov     es:[bx], ax ;~ 0FBC:37D4
cs=0xfbc;eip=0x0037d7; 	T(INC(di));	// 34024 inc     di ;~ 0FBC:37D7
loc_21978:
	// 6630 
cs=0xfbc;eip=0x0037d8; 	T(CMP(*(dw*)(raddr(ss,bp+var_b28)), di));	// 34027 cmp     [bp+var_B28], di ;~ 0FBC:37D8
cs=0xfbc;eip=0x0037dc; 	J(JG(loc_21958));	// 34028 jg      short loc_21958 ;~ 0FBC:37DC
cs=0xfbc;eip=0x0037de; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b28))));	// 34029 mov     bx, [bp+var_B28] ;~ 0FBC:37DE
cs=0xfbc;eip=0x0037e2; 	T(SHL(bx, 1));	// 34030 shl     bx, 1 ;~ 0FBC:37E2
cs=0xfbc;eip=0x0037e4; 	T(ADD(bx, *(dw*)(((db*)&trackdata3))));	// 34031 add     bx, word ptr trackdata3 ;~ 0FBC:37E4
cs=0xfbc;eip=0x0037e8; 	T(MOV(es, *(dw*)(((db*)&trackdata3)+2)));	// 34032 mov     es, word ptr trackdata3+2 ;~ 0FBC:37E8
cs=0xfbc;eip=0x0037ec; 	X(MOV(*(dw*)(raddr(es,bx)), 0));	// 34033 mov     word ptr es:[bx], 0 ;~ 0FBC:37EC
cs=0xfbc;eip=0x0037f1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b28))));	// 34034 mov     bx, [bp+var_B28] ;~ 0FBC:37F1
cs=0xfbc;eip=0x0037f5; 	T(SHL(bx, 1));	// 34035 shl     bx, 1 ;~ 0FBC:37F5
cs=0xfbc;eip=0x0037f7; 	T(ADD(bx, *(dw*)(((db*)&trackdata3))));	// 34036 add     bx, word ptr trackdata3 ;~ 0FBC:37F7
cs=0xfbc;eip=0x0037fb; 	T(MOV(es, *(dw*)(((db*)&trackdata3)+2)));	// 34037 mov     es, word ptr trackdata3+2 ;~ 0FBC:37FB
cs=0xfbc;eip=0x0037ff; 	X(MOV(*(dw*)(raddr(es,bx+2)), 1));	// 34038 mov     word ptr es:[bx+2], 1 ;~ 0FBC:37FF
loc_219a5:
	// 6631 
cs=0xfbc;eip=0x003805; 	T(CMP(*(dw*)(raddr(ss,bp+var_b2a)), 0));	// 34042 cmp     [bp+var_B2A], 0 ;~ 0FBC:3805
cs=0xfbc;eip=0x00380a; 	J(JNZ(loc_219c2));	// 34043 jnz     short loc_219C2 ;~ 0FBC:380A
cs=0xfbc;eip=0x00380c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_b2c))));	// 34044 push    [bp+var_B2C] ;~ 0FBC:380C
cs=0xfbc;eip=0x003810; 	X(PUSH(*(dw*)(raddr(ss,bp+var_b2e))));	// 34045 push    [bp+var_B2E] ;~ 0FBC:3810
cs=0xfbc;eip=0x003814; 	J(CALLF(unload_resource,0));	// 34046 call    unload_resource ;~ 0FBC:3814
cs=0xfbc;eip=0x003819; 	T(ADD(sp, 4));	// 34047 add     sp, 4 ;~ 0FBC:3819
cs=0xfbc;eip=0x00381c; 	X(POP(si));	// 34048 pop     si ;~ 0FBC:381C
cs=0xfbc;eip=0x00381d; 	X(POP(di));	// 34049 pop     di ;~ 0FBC:381D
cs=0xfbc;eip=0x00381e; 	T(MOV(sp, bp));	// 34050 mov     sp, bp ;~ 0FBC:381E
cs=0xfbc;eip=0x003820; 	X(POP(bp));	// 34051 pop     bp ;~ 0FBC:3820
cs=0xfbc;eip=0x003821; 	J(RETF(0));	// 34052 retf ;~ 0FBC:3821
loc_219c2:
	// 6632 
cs=0xfbc;eip=0x003822; 	X(DEC(*(dw*)(raddr(ss,bp+var_b2a))));	// 34056 dec     [bp+var_B2A] ;~ 0FBC:3822
cs=0xfbc;eip=0x003826; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_b2a))));	// 34057 mov     ax, [bp+var_B2A] ;~ 0FBC:3826
cs=0xfbc;eip=0x00382a; 	T(SHL(ax, 1));	// 34058 shl     ax, 1 ;~ 0FBC:382A
cs=0xfbc;eip=0x00382c; 	T(ADD(ax, bp));	// 34059 add     ax, bp ;~ 0FBC:382C
cs=0xfbc;eip=0x00382e; 	X(MOV(*(dw*)(raddr(ss,bp+var_f30)), ax));	// 34060 mov     [bp+var_F30], ax ;~ 0FBC:382E
cs=0xfbc;eip=0x003832; 	T(MOV(bx, ax));	// 34061 mov     bx, ax ;~ 0FBC:3832
cs=0xfbc;eip=0x003834; 	T(MOV(si, *(dw*)(raddr(ds,bx-0x20A))));	// 34062 mov     si, [bx-20Ah] ;~ 0FBC:3834
cs=0xfbc;eip=0x003838; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x40E))));	// 34063 mov     ax, [bx-40Eh] ;~ 0FBC:3838
cs=0xfbc;eip=0x00383c; 	X(MOV(*(dw*)(raddr(ss,bp+var_b28)), ax));	// 34064 mov     [bp+var_B28], ax ;~ 0FBC:383C
cs=0xfbc;eip=0x003840; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b2a))));	// 34065 mov     bx, [bp+var_B2A] ;~ 0FBC:3840
cs=0xfbc;eip=0x003844; 	T(SHL(bx, 1));	// 34066 shl     bx, 1 ;~ 0FBC:3844
cs=0xfbc;eip=0x003846; 	T(SHL(bx, 1));	// 34067 shl     bx, 1 ;~ 0FBC:3846
cs=0xfbc;eip=0x003848; 	T(ADD(bx, bp));	// 34068 add     bx, bp ;~ 0FBC:3848
cs=0xfbc;eip=0x00384a; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x0F2E))));	// 34069 mov     ax, [bx-0F2Eh] ;~ 0FBC:384A
cs=0xfbc;eip=0x00384e; 	T(MOV(dx, *(dw*)(raddr(ds,bx-0x0F2C))));	// 34070 mov     dx, [bx-0F2Ch] ;~ 0FBC:384E
cs=0xfbc;eip=0x003852; 	X(MOV(*(dw*)(raddr(ss,bp+var_20e)), ax));	// 34071 mov     [bp+var_20E], ax ;~ 0FBC:3852
cs=0xfbc;eip=0x003856; 	X(MOV(*(dw*)(raddr(ss,bp+var_20c)), dx));	// 34072 mov     [bp+var_20C], dx ;~ 0FBC:3856
cs=0xfbc;eip=0x00385a; 	J(JMP(loc_21878));	// 34073 jmp     loc_21878 ;~ 0FBC:385A
loc_219fe:
	// 6633 
cs=0xfbc;eip=0x00385e; 	T(MOV(bx, si));	// 34078 mov     bx, si ;~ 0FBC:385E
cs=0xfbc;eip=0x003860; 	T(SHL(bx, 1));	// 34079 shl     bx, 1 ;~ 0FBC:3860
cs=0xfbc;eip=0x003862; 	T(ADD(bx, *(dw*)(((db*)&td02_penalty_related))));	// 34080 add     bx, word ptr td02_penalty_related ;~ 0FBC:3862
cs=0xfbc;eip=0x003866; 	T(MOV(es, *(dw*)(((db*)&td02_penalty_related)+2)));	// 34081 mov     es, word ptr td02_penalty_related+2 ;~ 0FBC:3866
cs=0xfbc;eip=0x00386a; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 34082 mov     ax, es:[bx] ;~ 0FBC:386A
cs=0xfbc;eip=0x00386d; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 34083 mov     [bp+var_6], ax ;~ 0FBC:386D
cs=0xfbc;eip=0x003870; 	T(CMP(ax, 0x0FFFF));	// 34084 cmp     ax, 0FFFFh ;~ 0FBC:3870
cs=0xfbc;eip=0x003873; 	J(JZ(loc_21a54));	// 34085 jz      short loc_21A54 ;~ 0FBC:3873
cs=0xfbc;eip=0x003875; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_b2a))));	// 34086 mov     ax, [bp+var_B2A] ;~ 0FBC:3875
cs=0xfbc;eip=0x003879; 	T(SHL(ax, 1));	// 34087 shl     ax, 1 ;~ 0FBC:3879
cs=0xfbc;eip=0x00387b; 	T(ADD(ax, bp));	// 34088 add     ax, bp ;~ 0FBC:387B
cs=0xfbc;eip=0x00387d; 	X(MOV(*(dw*)(raddr(ss,bp+var_f30)), ax));	// 34089 mov     [bp+var_F30], ax ;~ 0FBC:387D
cs=0xfbc;eip=0x003881; 	T(MOV(bx, ax));	// 34090 mov     bx, ax ;~ 0FBC:3881
cs=0xfbc;eip=0x003883; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 34091 mov     ax, [bp+var_6] ;~ 0FBC:3883
cs=0xfbc;eip=0x003886; 	X(MOV(*(dw*)(raddr(ds,bx-0x20A)), ax));	// 34092 mov     [bx-20Ah], ax ;~ 0FBC:3886
cs=0xfbc;eip=0x00388a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_f30))));	// 34093 mov     bx, [bp+var_F30] ;~ 0FBC:388A
cs=0xfbc;eip=0x00388e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_b28))));	// 34094 mov     ax, [bp+var_B28] ;~ 0FBC:388E
cs=0xfbc;eip=0x003892; 	X(MOV(*(dw*)(raddr(ds,bx-0x40E)), ax));	// 34095 mov     [bx-40Eh], ax ;~ 0FBC:3892
cs=0xfbc;eip=0x003896; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b2a))));	// 34096 mov     bx, [bp+var_B2A] ;~ 0FBC:3896
cs=0xfbc;eip=0x00389a; 	X(INC(*(dw*)(raddr(ss,bp+var_b2a))));	// 34097 inc     [bp+var_B2A] ;~ 0FBC:389A
cs=0xfbc;eip=0x00389e; 	T(SHL(bx, 1));	// 34098 shl     bx, 1 ;~ 0FBC:389E
cs=0xfbc;eip=0x0038a0; 	T(SHL(bx, 1));	// 34099 shl     bx, 1 ;~ 0FBC:38A0
cs=0xfbc;eip=0x0038a2; 	T(ADD(bx, bp));	// 34100 add     bx, bp ;~ 0FBC:38A2
cs=0xfbc;eip=0x0038a4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_20e))));	// 34101 mov     ax, [bp+var_20E] ;~ 0FBC:38A4
cs=0xfbc;eip=0x0038a8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_20c))));	// 34102 mov     dx, [bp+var_20C] ;~ 0FBC:38A8
cs=0xfbc;eip=0x0038ac; 	X(MOV(*(dw*)(raddr(ds,bx-0x0F2E)), ax));	// 34103 mov     [bx-0F2Eh], ax ;~ 0FBC:38AC
cs=0xfbc;eip=0x0038b0; 	X(MOV(*(dw*)(raddr(ds,bx-0x0F2C)), dx));	// 34104 mov     [bx-0F2Ch], dx ;~ 0FBC:38B0
loc_21a54:
	// 6634 
cs=0xfbc;eip=0x0038b4; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_4))));	// 34107 mov     si, [bp+var_4] ;~ 0FBC:38B4
cs=0xfbc;eip=0x0038b7; 	J(JMP(loc_21878));	// 34108 jmp     loc_21878 ;~ 0FBC:38B7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kload_opponent_data: 	goto load_opponent_data;
        case m2c::kloc_21846: 	goto loc_21846;
        case m2c::kloc_21878: 	goto loc_21878;
        case m2c::kloc_21899: 	goto loc_21899;
        case m2c::kloc_218a2: 	goto loc_218a2;
        case m2c::kloc_218b0: 	goto loc_218b0;
        case m2c::kloc_218bc: 	goto loc_218bc;
        case m2c::kloc_218d3: 	goto loc_218d3;
        case m2c::kloc_218d4: 	goto loc_218d4;
        case m2c::kloc_218da: 	goto loc_218da;
        case m2c::kloc_21912: 	goto loc_21912;
        case m2c::kloc_2191a: 	goto loc_2191a;
        case m2c::kloc_21930: 	goto loc_21930;
        case m2c::kloc_21958: 	goto loc_21958;
        case m2c::kloc_21978: 	goto loc_21978;
        case m2c::kloc_219a5: 	goto loc_219a5;
        case m2c::kloc_219c2: 	goto loc_219c2;
        case m2c::kloc_219fe: 	goto loc_219fe;
        case m2c::kloc_21a54: 	goto loc_21a54;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool subst_hillroad_track(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    subst_hillroad_track:
    _begin:
#undef arg_0
#define arg_0 6
	// 34119 arg_0           = byte ptr  6 ;~ 0FBC:38BA
#undef arg_2
#define arg_2 8
	// 34120 arg_2           = byte ptr  8 ;~ 0FBC:38BA
cs=0xfbc;eip=0x0038ba; 	X(PUSH(bp));	// 34122 push    bp ;~ 0FBC:38BA
cs=0xfbc;eip=0x0038bb; 	T(MOV(bp, sp));	// 34123 mov     bp, sp ;~ 0FBC:38BB
cs=0xfbc;eip=0x0038bd; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 34124 mov     al, [bp+arg_0] ;~ 0FBC:38BD
cs=0xfbc;eip=0x0038c0; 	T(SUB(ah, ah));	// 34125 sub     ah, ah ;~ 0FBC:38C0
cs=0xfbc;eip=0x0038c2; 	T(CMP(ax, 7));	// 34126 cmp     ax, 7 ;~ 0FBC:38C2
cs=0xfbc;eip=0x0038c5; 	J(JZ(loc_21a80));	// 34127 jz      short loc_21A80 ;~ 0FBC:38C5
cs=0xfbc;eip=0x0038c7; 	T(CMP(ax, 8));	// 34128 cmp     ax, 8 ;~ 0FBC:38C7
cs=0xfbc;eip=0x0038ca; 	J(JZ(loc_21abe));	// 34129 jz      short loc_21ABE ;~ 0FBC:38CA
cs=0xfbc;eip=0x0038cc; 	T(CMP(ax, 9));	// 34130 cmp     ax, 9 ;~ 0FBC:38CC
cs=0xfbc;eip=0x0038cf; 	J(JNZ(loc_21a74));	// 34131 jnz     short loc_21A74 ;~ 0FBC:38CF
cs=0xfbc;eip=0x0038d1; 	J(JMP(loc_21afe));	// 34132 jmp     loc_21AFE ;~ 0FBC:38D1
loc_21a74:
	// 6635 
cs=0xfbc;eip=0x0038d4; 	T(CMP(ax, 0x0A));	// 34136 cmp     ax, 0Ah ;~ 0FBC:38D4
cs=0xfbc;eip=0x0038d7; 	J(JNZ(loc_21a7c));	// 34137 jnz     short loc_21A7C ;~ 0FBC:38D7
cs=0xfbc;eip=0x0038d9; 	J(JMP(loc_21b3c));	// 34138 jmp     loc_21B3C ;~ 0FBC:38D9
loc_21a7c:
	// 6636 
cs=0xfbc;eip=0x0038dc; 	T(SUB(ax, ax));	// 34143 sub     ax, ax ;~ 0FBC:38DC
cs=0xfbc;eip=0x0038de; 	X(POP(bp));	// 34144 pop     bp ;~ 0FBC:38DE
cs=0xfbc;eip=0x0038df; 	J(RETF(0));	// 34145 retf ;~ 0FBC:38DF
loc_21a80:
	// 6637 
cs=0xfbc;eip=0x0038e0; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 34149 mov     al, [bp+arg_2] ;~ 0FBC:38E0
cs=0xfbc;eip=0x0038e3; 	T(SUB(ah, ah));	// 34150 sub     ah, ah ;~ 0FBC:38E3
cs=0xfbc;eip=0x0038e5; 	T(CMP(ax, 4));	// 34151 cmp     ax, 4 ;~ 0FBC:38E5
cs=0xfbc;eip=0x0038e8; 	J(JZ(loc_21aa6));	// 34152 jz      short loc_21AA6 ;~ 0FBC:38E8
cs=0xfbc;eip=0x0038ea; 	T(CMP(ax, 0x0E));	// 34153 cmp     ax, 0Eh ;~ 0FBC:38EA
cs=0xfbc;eip=0x0038ed; 	J(JZ(loc_21aac));	// 34154 jz      short loc_21AAC ;~ 0FBC:38ED
cs=0xfbc;eip=0x0038ef; 	T(CMP(ax, 0x18));	// 34155 cmp     ax, 18h ;~ 0FBC:38EF
cs=0xfbc;eip=0x0038f2; 	J(JZ(loc_21ab2));	// 34156 jz      short loc_21AB2 ;~ 0FBC:38F2
cs=0xfbc;eip=0x0038f4; 	T(CMP(ax, 0x27));	// 34157 cmp     ax, 27h ; ''' ;~ 0FBC:38F4
cs=0xfbc;eip=0x0038f7; 	J(JZ(loc_21ab8));	// 34158 jz      short loc_21AB8 ;~ 0FBC:38F7
cs=0xfbc;eip=0x0038f9; 	T(CMP(ax, 0x3B));	// 34159 cmp     ax, 3Bh ; ';' ;~ 0FBC:38F9
cs=0xfbc;eip=0x0038fc; 	J(JZ(loc_21ab8));	// 34160 jz      short loc_21AB8 ;~ 0FBC:38FC
cs=0xfbc;eip=0x0038fe; 	T(CMP(ax, 0x62));	// 34161 cmp     ax, 62h ; 'b' ;~ 0FBC:38FE
cs=0xfbc;eip=0x003901; 	J(JZ(loc_21ab8));	// 34162 jz      short loc_21AB8 ;~ 0FBC:3901
cs=0xfbc;eip=0x003903; 	J(JMP(loc_21a7c));	// 34163 jmp     short loc_21A7C ;~ 0FBC:3903
loc_21aa6:
	// 6638 
cs=0xfbc;eip=0x003906; 	T(MOV(ax, 0x0B6));	// 34168 mov     ax, 0B6h ; '∂' ;~ 0FBC:3906
cs=0xfbc;eip=0x003909; 	J(JMP(loc_21b77));	// 34169 jmp     loc_21B77 ;~ 0FBC:3909
loc_21aac:
	// 6639 
cs=0xfbc;eip=0x00390c; 	T(MOV(ax, 0x0BA));	// 34173 mov     ax, 0BAh ; '∫' ;~ 0FBC:390C
cs=0xfbc;eip=0x00390f; 	J(JMP(loc_21b77));	// 34174 jmp     loc_21B77 ;~ 0FBC:390F
loc_21ab2:
	// 6640 
cs=0xfbc;eip=0x003912; 	T(MOV(ax, 0x0BE));	// 34178 mov     ax, 0BEh ; 'æ' ;~ 0FBC:3912
cs=0xfbc;eip=0x003915; 	J(JMP(loc_21b77));	// 34179 jmp     loc_21B77 ;~ 0FBC:3915
loc_21ab8:
	// 6641 
cs=0xfbc;eip=0x003918; 	T(MOV(ax, 0x0C2));	// 34184 mov     ax, 0C2h ; '¬' ;~ 0FBC:3918
cs=0xfbc;eip=0x00391b; 	J(JMP(loc_21b77));	// 34185 jmp     loc_21B77 ;~ 0FBC:391B
loc_21abe:
	// 6642 
cs=0xfbc;eip=0x00391e; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 34189 mov     al, [bp+arg_2] ;~ 0FBC:391E
cs=0xfbc;eip=0x003921; 	T(SUB(ah, ah));	// 34190 sub     ah, ah ;~ 0FBC:3921
cs=0xfbc;eip=0x003923; 	T(CMP(ax, 5));	// 34191 cmp     ax, 5 ;~ 0FBC:3923
cs=0xfbc;eip=0x003926; 	J(JZ(loc_21ae4));	// 34192 jz      short loc_21AE4 ;~ 0FBC:3926
cs=0xfbc;eip=0x003928; 	T(CMP(ax, 0x0F));	// 34193 cmp     ax, 0Fh ;~ 0FBC:3928
cs=0xfbc;eip=0x00392b; 	J(JZ(loc_21aea));	// 34194 jz      short loc_21AEA ;~ 0FBC:392B
cs=0xfbc;eip=0x00392d; 	T(CMP(ax, 0x19));	// 34195 cmp     ax, 19h ;~ 0FBC:392D
cs=0xfbc;eip=0x003930; 	J(JZ(loc_21af0));	// 34196 jz      short loc_21AF0 ;~ 0FBC:3930
cs=0xfbc;eip=0x003932; 	T(CMP(ax, 0x24));	// 34197 cmp     ax, 24h ; '$' ;~ 0FBC:3932
cs=0xfbc;eip=0x003935; 	J(JZ(loc_21af8));	// 34198 jz      short loc_21AF8 ;~ 0FBC:3935
cs=0xfbc;eip=0x003937; 	T(CMP(ax, 0x38));	// 34199 cmp     ax, 38h ; '8' ;~ 0FBC:3937
cs=0xfbc;eip=0x00393a; 	J(JZ(loc_21af8));	// 34200 jz      short loc_21AF8 ;~ 0FBC:393A
cs=0xfbc;eip=0x00393c; 	T(CMP(ax, 0x5F));	// 34201 cmp     ax, 5Fh ; '_' ;~ 0FBC:393C
cs=0xfbc;eip=0x00393f; 	J(JZ(loc_21af8));	// 34202 jz      short loc_21AF8 ;~ 0FBC:393F
cs=0xfbc;eip=0x003941; 	J(JMP(loc_21a7c));	// 34203 jmp     short loc_21A7C ;~ 0FBC:3941
loc_21ae4:
	// 6643 
cs=0xfbc;eip=0x003944; 	T(MOV(ax, 0x0B7));	// 34208 mov     ax, 0B7h ; '∑' ;~ 0FBC:3944
cs=0xfbc;eip=0x003947; 	J(JMP(loc_21b77));	// 34209 jmp     loc_21B77 ;~ 0FBC:3947
loc_21aea:
	// 6644 
cs=0xfbc;eip=0x00394a; 	T(MOV(ax, 0x0BB));	// 34213 mov     ax, 0BBh ; 'ª' ;~ 0FBC:394A
cs=0xfbc;eip=0x00394d; 	J(JMP(loc_21b77));	// 34214 jmp     loc_21B77 ;~ 0FBC:394D
loc_21af0:
	// 6645 
cs=0xfbc;eip=0x003950; 	T(MOV(ax, 0x0BF));	// 34218 mov     ax, 0BFh ; 'ø' ;~ 0FBC:3950
cs=0xfbc;eip=0x003953; 	J(JMP(loc_21b77));	// 34219 jmp     loc_21B77 ;~ 0FBC:3953
loc_21af8:
	// 6646 
cs=0xfbc;eip=0x003958; 	T(MOV(ax, 0x0C3));	// 34226 mov     ax, 0C3h ; '√' ;~ 0FBC:3958
cs=0xfbc;eip=0x00395b; 	J(JMP(loc_21b77));	// 34227 jmp     short loc_21B77 ;~ 0FBC:395B
loc_21afe:
	// 6647 
cs=0xfbc;eip=0x00395e; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 34232 mov     al, [bp+arg_2] ;~ 0FBC:395E
cs=0xfbc;eip=0x003961; 	T(SUB(ah, ah));	// 34233 sub     ah, ah ;~ 0FBC:3961
cs=0xfbc;eip=0x003963; 	T(CMP(ax, 4));	// 34234 cmp     ax, 4 ;~ 0FBC:3963
cs=0xfbc;eip=0x003966; 	J(JZ(loc_21b24));	// 34235 jz      short loc_21B24 ;~ 0FBC:3966
cs=0xfbc;eip=0x003968; 	T(CMP(ax, 0x0E));	// 34236 cmp     ax, 0Eh ;~ 0FBC:3968
cs=0xfbc;eip=0x00396b; 	J(JZ(loc_21b2a));	// 34237 jz      short loc_21B2A ;~ 0FBC:396B
cs=0xfbc;eip=0x00396d; 	T(CMP(ax, 0x18));	// 34238 cmp     ax, 18h ;~ 0FBC:396D
cs=0xfbc;eip=0x003970; 	J(JZ(loc_21b30));	// 34239 jz      short loc_21B30 ;~ 0FBC:3970
cs=0xfbc;eip=0x003972; 	T(CMP(ax, 0x26));	// 34240 cmp     ax, 26h ; '&' ;~ 0FBC:3972
cs=0xfbc;eip=0x003975; 	J(JZ(loc_21b36));	// 34241 jz      short loc_21B36 ;~ 0FBC:3975
cs=0xfbc;eip=0x003977; 	T(CMP(ax, 0x3A));	// 34242 cmp     ax, 3Ah ; ':' ;~ 0FBC:3977
cs=0xfbc;eip=0x00397a; 	J(JZ(loc_21b36));	// 34243 jz      short loc_21B36 ;~ 0FBC:397A
cs=0xfbc;eip=0x00397c; 	T(CMP(ax, 0x61));	// 34244 cmp     ax, 61h ; 'a' ;~ 0FBC:397C
cs=0xfbc;eip=0x00397f; 	J(JZ(loc_21b36));	// 34245 jz      short loc_21B36 ;~ 0FBC:397F
cs=0xfbc;eip=0x003981; 	J(JMP(loc_21a7c));	// 34246 jmp     loc_21A7C ;~ 0FBC:3981
loc_21b24:
	// 6648 
cs=0xfbc;eip=0x003984; 	T(MOV(ax, 0x0B8));	// 34250 mov     ax, 0B8h ; '∏' ;~ 0FBC:3984
cs=0xfbc;eip=0x003987; 	J(JMP(loc_21b77));	// 34251 jmp     short loc_21B77 ;~ 0FBC:3987
loc_21b2a:
	// 6649 
cs=0xfbc;eip=0x00398a; 	T(MOV(ax, 0x0BC));	// 34256 mov     ax, 0BCh ; 'º' ;~ 0FBC:398A
cs=0xfbc;eip=0x00398d; 	J(JMP(loc_21b77));	// 34257 jmp     short loc_21B77 ;~ 0FBC:398D
loc_21b30:
	// 6650 
cs=0xfbc;eip=0x003990; 	T(MOV(ax, 0x0C0));	// 34262 mov     ax, 0C0h ; '¿' ;~ 0FBC:3990
cs=0xfbc;eip=0x003993; 	J(JMP(loc_21b77));	// 34263 jmp     short loc_21B77 ;~ 0FBC:3993
loc_21b36:
	// 6651 
cs=0xfbc;eip=0x003996; 	T(MOV(ax, 0x0C4));	// 34269 mov     ax, 0C4h ; 'ƒ' ;~ 0FBC:3996
cs=0xfbc;eip=0x003999; 	X(POP(bp));	// 34270 pop     bp ;~ 0FBC:3999
cs=0xfbc;eip=0x00399a; 	J(RETF(0));	// 34271 retf ;~ 0FBC:399A
loc_21b3c:
	// 6652 
cs=0xfbc;eip=0x00399c; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 34276 mov     al, [bp+arg_2] ;~ 0FBC:399C
cs=0xfbc;eip=0x00399f; 	T(SUB(ah, ah));	// 34277 sub     ah, ah ;~ 0FBC:399F
cs=0xfbc;eip=0x0039a1; 	T(CMP(ax, 5));	// 34278 cmp     ax, 5 ;~ 0FBC:39A1
cs=0xfbc;eip=0x0039a4; 	J(JZ(loc_21b62));	// 34279 jz      short loc_21B62 ;~ 0FBC:39A4
cs=0xfbc;eip=0x0039a6; 	T(CMP(ax, 0x0F));	// 34280 cmp     ax, 0Fh ;~ 0FBC:39A6
cs=0xfbc;eip=0x0039a9; 	J(JZ(loc_21b68));	// 34281 jz      short loc_21B68 ;~ 0FBC:39A9
cs=0xfbc;eip=0x0039ab; 	T(CMP(ax, 0x19));	// 34282 cmp     ax, 19h ;~ 0FBC:39AB
cs=0xfbc;eip=0x0039ae; 	J(JZ(loc_21b6e));	// 34283 jz      short loc_21B6E ;~ 0FBC:39AE
cs=0xfbc;eip=0x0039b0; 	T(CMP(ax, 0x25));	// 34284 cmp     ax, 25h ; '%' ;~ 0FBC:39B0
cs=0xfbc;eip=0x0039b3; 	J(JZ(loc_21b74));	// 34285 jz      short loc_21B74 ;~ 0FBC:39B3
cs=0xfbc;eip=0x0039b5; 	T(CMP(ax, 0x39));	// 34286 cmp     ax, 39h ; '9' ;~ 0FBC:39B5
cs=0xfbc;eip=0x0039b8; 	J(JZ(loc_21b74));	// 34287 jz      short loc_21B74 ;~ 0FBC:39B8
cs=0xfbc;eip=0x0039ba; 	T(CMP(ax, 0x60));	// 34288 cmp     ax, 60h ; '`' ;~ 0FBC:39BA
cs=0xfbc;eip=0x0039bd; 	J(JZ(loc_21b74));	// 34289 jz      short loc_21B74 ;~ 0FBC:39BD
cs=0xfbc;eip=0x0039bf; 	J(JMP(loc_21a7c));	// 34290 jmp     loc_21A7C ;~ 0FBC:39BF
loc_21b62:
	// 6653 
cs=0xfbc;eip=0x0039c2; 	T(MOV(ax, 0x0B9));	// 34294 mov     ax, 0B9h ; 'π' ;~ 0FBC:39C2
cs=0xfbc;eip=0x0039c5; 	X(POP(bp));	// 34295 pop     bp ;~ 0FBC:39C5
cs=0xfbc;eip=0x0039c6; 	J(RETF(0));	// 34296 retf ;~ 0FBC:39C6
loc_21b68:
	// 6654 
cs=0xfbc;eip=0x0039c8; 	T(MOV(ax, 0x0BD));	// 34301 mov     ax, 0BDh ; 'Ω' ;~ 0FBC:39C8
cs=0xfbc;eip=0x0039cb; 	X(POP(bp));	// 34302 pop     bp ;~ 0FBC:39CB
cs=0xfbc;eip=0x0039cc; 	J(RETF(0));	// 34303 retf ;~ 0FBC:39CC
loc_21b6e:
	// 6655 
cs=0xfbc;eip=0x0039ce; 	T(MOV(ax, 0x0C1));	// 34308 mov     ax, 0C1h ; '¡' ;~ 0FBC:39CE
cs=0xfbc;eip=0x0039d1; 	X(POP(bp));	// 34309 pop     bp ;~ 0FBC:39D1
cs=0xfbc;eip=0x0039d2; 	J(RETF(0));	// 34310 retf ;~ 0FBC:39D2
loc_21b74:
	// 6656 
cs=0xfbc;eip=0x0039d4; 	T(MOV(ax, 0x0C5));	// 34316 mov     ax, 0C5h ; '≈' ;~ 0FBC:39D4
loc_21b77:
	// 6657 
cs=0xfbc;eip=0x0039d7; 	X(POP(bp));	// 34320 pop     bp ;~ 0FBC:39D7
cs=0xfbc;eip=0x0039d8; 	J(RETF(0));	// 34321 retf ;~ 0FBC:39D8

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_21a74: 	goto loc_21a74;
        case m2c::kloc_21a7c: 	goto loc_21a7c;
        case m2c::kloc_21a80: 	goto loc_21a80;
        case m2c::kloc_21aa6: 	goto loc_21aa6;
        case m2c::kloc_21aac: 	goto loc_21aac;
        case m2c::kloc_21ab2: 	goto loc_21ab2;
        case m2c::kloc_21ab8: 	goto loc_21ab8;
        case m2c::kloc_21abe: 	goto loc_21abe;
        case m2c::kloc_21ae4: 	goto loc_21ae4;
        case m2c::kloc_21aea: 	goto loc_21aea;
        case m2c::kloc_21af0: 	goto loc_21af0;
        case m2c::kloc_21af8: 	goto loc_21af8;
        case m2c::kloc_21afe: 	goto loc_21afe;
        case m2c::kloc_21b24: 	goto loc_21b24;
        case m2c::kloc_21b2a: 	goto loc_21b2a;
        case m2c::kloc_21b30: 	goto loc_21b30;
        case m2c::kloc_21b36: 	goto loc_21b36;
        case m2c::kloc_21b3c: 	goto loc_21b3c;
        case m2c::kloc_21b62: 	goto loc_21b62;
        case m2c::kloc_21b68: 	goto loc_21b68;
        case m2c::kloc_21b6e: 	goto loc_21b6e;
        case m2c::kloc_21b74: 	goto loc_21b74;
        case m2c::kloc_21b77: 	goto loc_21b77;
        case m2c::ksubst_hillroad_track: 	goto subst_hillroad_track;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

