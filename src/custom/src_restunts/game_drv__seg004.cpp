/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group5:
    _begin:
build_track_object:
	// 27097 
#undef var_40
#define var_40 -0x40
	// 27100 var_40          = dword ptr -40h ;~ 0FBC:0000
#undef var_3c
#define var_3c -0x3C
	// 27101 var_3C          = word ptr -3Ch ;~ 0FBC:0000
#undef var_3a
#define var_3a -0x3A
	// 27102 var_3A          = word ptr -3Ah ;~ 0FBC:0000
#undef var_38
#define var_38 -0x38
	// 27103 var_38          = word ptr -38h ;~ 0FBC:0000
#undef var_36
#define var_36 -0x36
	// 27104 var_36          = word ptr -36h ;~ 0FBC:0000
#undef var_34
#define var_34 -0x34
	// 27105 var_34          = byte ptr -34h ;~ 0FBC:0000
#undef var_32
#define var_32 -0x32
	// 27106 var_32          = word ptr -32h ;~ 0FBC:0000
#undef var_2e
#define var_2e -0x2E
	// 27107 var_2E          = word ptr -2Eh ;~ 0FBC:0000
#undef var_2c
#define var_2c -0x2C
	// 27108 var_2C          = word ptr -2Ch ;~ 0FBC:0000
#undef var_28
#define var_28 -0x28
	// 27109 var_28          = word ptr -28h ;~ 0FBC:0000
#undef var_24
#define var_24 -0x24
	// 27110 var_24          = word ptr -24h ;~ 0FBC:0000
#undef var_22
#define var_22 -0x22
	// 27111 var_22          = word ptr -22h ;~ 0FBC:0000
#undef var_20
#define var_20 -0x20
	// 27112 var_20          = byte ptr -20h ;~ 0FBC:0000
#undef var_1e
#define var_1e -0x1E
	// 27113 var_1E          = word ptr -1Eh ;~ 0FBC:0000
#undef var_1c
#define var_1c -0x1C
	// 27114 var_1C          = word ptr -1Ch ;~ 0FBC:0000
#undef var_1a
#define var_1a -0x1A
	// 27115 var_1A          = byte ptr -1Ah ;~ 0FBC:0000
#undef var_18
#define var_18 -0x18
	// 27116 var_18          = word ptr -18h ;~ 0FBC:0000
#undef var_14
#define var_14 -0x14
	// 27117 var_14          = word ptr -14h ;~ 0FBC:0000
#undef var_12
#define var_12 -0x12
	// 27118 var_12          = byte ptr -12h ;~ 0FBC:0000
#undef var_10
#define var_10 -0x10
	// 27119 var_10          = word ptr -10h ;~ 0FBC:0000
#undef var_e
#define var_e -0x0E
	// 27120 var_E           = word ptr -0Eh ;~ 0FBC:0000
#undef var_c
#define var_c -0x0C
	// 27121 var_C           = word ptr -0Ch ;~ 0FBC:0000
#undef var_a
#define var_a -0x0A
	// 27122 var_A           = word ptr -0Ah ;~ 0FBC:0000
#undef var_8
#define var_8 -8
	// 27123 var_8           = byte ptr -8 ;~ 0FBC:0000
#undef var_6
#define var_6 -6
	// 27124 var_6           = word ptr -6 ;~ 0FBC:0000
#undef var_2
#define var_2 -2
	// 27125 var_2           = word ptr -2 ;~ 0FBC:0000
#undef arg_0
#define arg_0 6
	// 27126 arg_0           = word ptr  6 ;~ 0FBC:0000
#undef arg_2
#define arg_2 8
	// 27127 arg_2           = word ptr  8 ;~ 0FBC:0000
ret_fbc_0:
	// 6099 
cs=0xfbc;eip=0x000000; 	X(PUSH(bp));	// 27129 push    bp ;~ 0FBC:0000
cs=0xfbc;eip=0x000001; 	T(MOV(bp, sp));	// 27130 mov     bp, sp ;~ 0FBC:0001
cs=0xfbc;eip=0x000003; 	T(SUB(sp, 0x40));	// 27131 sub     sp, 40h ;~ 0FBC:0003
cs=0xfbc;eip=0x000006; 	X(PUSH(di));	// 27132 push    di ;~ 0FBC:0006
cs=0xfbc;eip=0x000007; 	X(PUSH(si));	// 27133 push    si ;~ 0FBC:0007
cs=0xfbc;eip=0x000008; 	X(MOV(planindex, 0));	// 27134 mov     planindex, 0 ;~ 0FBC:0008
cs=0xfbc;eip=0x00000e; 	X(MOV(wallindex, 0x0FFFF));	// 27135 mov     wallindex, 0FFFFh ;~ 0FBC:000E
cs=0xfbc;eip=0x000014; 	X(MOV(wallheight, 0x0FFF4));	// 27136 mov     wallHeight, 0FFF4h ;~ 0FBC:0014
cs=0xfbc;eip=0x00001a; 	X(MOV(elrdwallrelated, 0x0FC18));	// 27137 mov     elRdWallRelated, 0FC18h ; -1000 ;~ 0FBC:001A
cs=0xfbc;eip=0x000020; 	X(MOV(corkflag, 0));	// 27138 mov     corkFlag, 0 ;~ 0FBC:0020
cs=0xfbc;eip=0x000025; 	X(MOV(current_surf_type, grass));	// 27139 mov     current_surf_type, grass ; grass is the default surface ;~ 0FBC:0025
cs=0xfbc;eip=0x00002a; 	X(MOV(byte_4392c, 1));	// 27140 mov     byte_4392C, 1 ;~ 0FBC:002A
cs=0xfbc;eip=0x00002f; 	T(SUB(si, si));	// 27141 sub     si, si ;~ 0FBC:002F
cs=0xfbc;eip=0x000031; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), si));	// 27142 mov     [bp+var_38], si ;~ 0FBC:0031
cs=0xfbc;eip=0x000034; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), si));	// 27143 mov     [bp+var_10], si ;~ 0FBC:0034
cs=0xfbc;eip=0x000037; 	X(MOV(terrainheight, si));	// 27144 mov     terrainHeight, si ;~ 0FBC:0037
cs=0xfbc;eip=0x00003b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 27145 mov     bx, [bp+arg_0] ;~ 0FBC:003B
cs=0xfbc;eip=0x00003e; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 27146 mov     ax, [bx] ;~ 0FBC:003E
cs=0xfbc;eip=0x000040; 	T(MOV(cl, 0x0A));	// 27147 mov     cl, 0Ah ;~ 0FBC:0040
cs=0xfbc;eip=0x000042; 	T(SAR(ax, cl));	// 27148 sar     ax, cl          ; divide by 1024 ;~ 0FBC:0042
cs=0xfbc;eip=0x000044; 	X(MOV(*(raddr(ss,bp+var_1a)), al));	// 27149 mov     [bp+var_1A], al ;~ 0FBC:0044
cs=0xfbc;eip=0x000047; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 27150 mov     ax, [bx+4]      ; 2D word vector... world xz coords? ;~ 0FBC:0047
cs=0xfbc;eip=0x00004a; 	T(SAR(ax, cl));	// 27151 sar     ax, cl ;~ 0FBC:004A
cs=0xfbc;eip=0x00004c; 	X(MOV(*(raddr(ss,bp+var_20)), al));	// 27152 mov     [bp+var_20], al ;~ 0FBC:004C
cs=0xfbc;eip=0x00004f; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), 0x0FFFF));	// 27153 mov     [bp+var_24], 0FFFFh ;~ 0FBC:004F
cs=0xfbc;eip=0x000054; 	T(CMP(*(raddr(ss,bp+var_1a)), 0));	// 27154 cmp     [bp+var_1A], 0 ;~ 0FBC:0054
cs=0xfbc;eip=0x000058; 	R(JGE(loc_1e1fd));	// 27155 jge     short loc_1E1FD ;~ 0FBC:0058
cs=0xfbc;eip=0x00005a; 	R(JMP(loc_1f8cd));	// 27156 jmp     loc_1F8CD ;~ 0FBC:005A
loc_1e1fd:
	// 6100 
cs=0xfbc;eip=0x00005d; 	T(CMP(*(raddr(ss,bp+var_1a)), 0x1D));	// 27160 cmp     [bp+var_1A], 1Dh ;~ 0FBC:005D
cs=0xfbc;eip=0x000061; 	R(JLE(loc_1e206));	// 27161 jle     short loc_1E206 ;~ 0FBC:0061
cs=0xfbc;eip=0x000063; 	R(JMP(loc_1f8cd));	// 27162 jmp     loc_1F8CD ;~ 0FBC:0063
loc_1e206:
	// 6101 
cs=0xfbc;eip=0x000066; 	T(OR(al, al));	// 27166 or      al, al ;~ 0FBC:0066
cs=0xfbc;eip=0x000068; 	R(JGE(loc_1e20d));	// 27167 jge     short loc_1E20D ;~ 0FBC:0068
cs=0xfbc;eip=0x00006a; 	R(JMP(loc_1f8cd));	// 27168 jmp     loc_1F8CD ;~ 0FBC:006A
loc_1e20d:
	// 6102 
cs=0xfbc;eip=0x00006d; 	T(CMP(al, 0x1D));	// 27172 cmp     al, 1Dh ;~ 0FBC:006D
cs=0xfbc;eip=0x00006f; 	R(JLE(loc_1e214));	// 27173 jle     short loc_1E214 ;~ 0FBC:006F
cs=0xfbc;eip=0x000071; 	R(JMP(loc_1f8cd));	// 27174 jmp     loc_1F8CD ;~ 0FBC:0071
loc_1e214:
	// 6103 
cs=0xfbc;eip=0x000074; 	T(MOV(al, *(raddr(ss,bp+var_1a))));	// 27178 mov     al, [bp+var_1A] ;~ 0FBC:0074
cs=0xfbc;eip=0x000077; 	T(CBW);	// 27179 cbw ;~ 0FBC:0077
cs=0xfbc;eip=0x000078; 	T(MOV(di, ax));	// 27180 mov     di, ax ;~ 0FBC:0078
cs=0xfbc;eip=0x00007a; 	T(MOV(bx, di));	// 27181 mov     bx, di ;~ 0FBC:007A
cs=0xfbc;eip=0x00007c; 	T(SHL(bx, 1));	// 27182 shl     bx, 1 ;~ 0FBC:007C
cs=0xfbc;eip=0x00007e; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 27183 mov     ax, trackcenterpos2[bx] ;~ 0FBC:007E
cs=0xfbc;eip=0x000082; 	X(MOV(elem_xcenter, ax));	// 27184 mov     elem_xCenter, ax ;~ 0FBC:0082
cs=0xfbc;eip=0x000085; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 27185 mov     al, [bp+var_20] ;~ 0FBC:0085
cs=0xfbc;eip=0x000088; 	T(CBW);	// 27186 cbw ;~ 0FBC:0088
cs=0xfbc;eip=0x000089; 	T(SHL(ax, 1));	// 27187 shl     ax, 1 ;~ 0FBC:0089
cs=0xfbc;eip=0x00008b; 	X(MOV(*(dw*)(raddr(ss,bp+var_3c)), ax));	// 27188 mov     [bp+var_3C], ax ;~ 0FBC:008B
cs=0xfbc;eip=0x00008e; 	T(MOV(bx, ax));	// 27189 mov     bx, ax ;~ 0FBC:008E
cs=0xfbc;eip=0x000090; 	T(MOV(ax, *(dw*)(((db*)terraincenterpos)+bx)));	// 27190 mov     ax, terraincenterpos[bx] ;~ 0FBC:0090
cs=0xfbc;eip=0x000094; 	X(MOV(elem_zcenter, ax));	// 27191 mov     elem_zCenter, ax ;~ 0FBC:0094
cs=0xfbc;eip=0x000097; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 27192 mov     bx, trackrows[bx] ;~ 0FBC:0097
cs=0xfbc;eip=0x00009b; 	T(ADD(bx, *(dw*)(((db*)&td15_terr_map_main))));	// 27193 add     bx, word ptr td15_terr_map_main ;~ 0FBC:009B
cs=0xfbc;eip=0x00009f; 	T(MOV(es, *(dw*)(((db*)&td15_terr_map_main)+2)));	// 27194 mov     es, word ptr td15_terr_map_main+2 ;~ 0FBC:009F
cs=0xfbc;eip=0x0000a3; 	T(MOV(al, *(raddr(es,bx+di))));	// 27195 mov     al, es:[bx+di] ;~ 0FBC:00A3
cs=0xfbc;eip=0x0000a6; 	X(MOV(*(raddr(ss,bp+var_34)), al));	// 27196 mov     [bp+var_34], al ; terrain tile ;~ 0FBC:00A6
cs=0xfbc;eip=0x0000a9; 	T(OR(al, al));	// 27197 or      al, al ;~ 0FBC:00A9
cs=0xfbc;eip=0x0000ab; 	R(JZ(loc_1e276));	// 27198 jz      short loc_1E276 ;~ 0FBC:00AB
cs=0xfbc;eip=0x0000ad; 	T(SUB(ah, ah));	// 27199 sub     ah, ah ;~ 0FBC:00AD
cs=0xfbc;eip=0x0000af; 	T(CMP(ax, 1));	// 27200 cmp     ax, 1 ;~ 0FBC:00AF
cs=0xfbc;eip=0x0000b2; 	R(JNZ(loc_1e257));	// 27201 jnz     short loc_1E257 ;~ 0FBC:00B2
cs=0xfbc;eip=0x0000b4; 	R(JMP(loc_1e2fb));	// 27202 jmp     loc_1E2FB ;~ 0FBC:00B4
loc_1e257:
	// 6104 
cs=0xfbc;eip=0x0000b7; 	T(CMP(ax, 2));	// 27206 cmp     ax, 2           ; coast ;~ 0FBC:00B7
cs=0xfbc;eip=0x0000ba; 	R(JZ(loc_1e29a));	// 27207 jz      short loc_1E29A ;~ 0FBC:00BA
cs=0xfbc;eip=0x0000bc; 	T(CMP(ax, 3));	// 27208 cmp     ax, 3 ;~ 0FBC:00BC
cs=0xfbc;eip=0x0000bf; 	R(JZ(loc_1e2a0));	// 27209 jz      short loc_1E2A0 ;~ 0FBC:00BF
cs=0xfbc;eip=0x0000c1; 	T(CMP(ax, 4));	// 27210 cmp     ax, 4 ;~ 0FBC:00C1
cs=0xfbc;eip=0x0000c4; 	R(JZ(loc_1e2a6));	// 27211 jz      short loc_1E2A6 ;~ 0FBC:00C4
cs=0xfbc;eip=0x0000c6; 	T(CMP(ax, 5));	// 27212 cmp     ax, 5 ;~ 0FBC:00C6
cs=0xfbc;eip=0x0000c9; 	R(JZ(loc_1e2ac));	// 27213 jz      short loc_1E2AC ;~ 0FBC:00C9
cs=0xfbc;eip=0x0000cb; 	T(CMP(ax, 6));	// 27214 cmp     ax, 6 ;~ 0FBC:00CB
cs=0xfbc;eip=0x0000ce; 	R(JNZ(loc_1e276));	// 27215 jnz     short loc_1E276 ;~ 0FBC:00CE
code_addhillheight:
	// 6105 
cs=0xfbc;eip=0x0000d0; 	T(MOV(ax, *(dw*)(((db*)hillheightconsts)+2)));	// 27218 mov     ax, hillHeightConsts+2 ;~ 0FBC:00D0
cs=0xfbc;eip=0x0000d3; 	X(MOV(terrainheight, ax));	// 27219 mov     terrainHeight, ax ;~ 0FBC:00D3
loc_1e276:
	// 6106 
cs=0xfbc;eip=0x0000d6; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 27223 mov     al, [bp+var_20] ;~ 0FBC:00D6
cs=0xfbc;eip=0x0000d9; 	T(CBW);	// 27224 cbw ;~ 0FBC:00D9
cs=0xfbc;eip=0x0000da; 	T(MOV(bx, ax));	// 27225 mov     bx, ax ;~ 0FBC:00DA
cs=0xfbc;eip=0x0000dc; 	T(SHL(bx, 1));	// 27226 shl     bx, 1 ;~ 0FBC:00DC
cs=0xfbc;eip=0x0000de; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 27227 mov     bx, terrainrows[bx] ;~ 0FBC:00DE
cs=0xfbc;eip=0x0000e2; 	T(MOV(al, *(raddr(ss,bp+var_1a))));	// 27228 mov     al, [bp+var_1A] ;~ 0FBC:00E2
cs=0xfbc;eip=0x0000e5; 	T(CBW);	// 27229 cbw ;~ 0FBC:00E5
cs=0xfbc;eip=0x0000e6; 	T(ADD(bx, ax));	// 27230 add     bx, ax ;~ 0FBC:00E6
cs=0xfbc;eip=0x0000e8; 	T(LES(di, td14_elem_map_main));	// 27231 les     di, td14_elem_map_main ;~ 0FBC:00E8
cs=0xfbc;eip=0x0000ec; 	T(MOV(al, *(raddr(es,bx+di))));	// 27232 mov     al, es:[bx+di] ;~ 0FBC:00EC
cs=0xfbc;eip=0x0000ef; 	X(MOV(*(raddr(ss,bp+var_8)), al));	// 27233 mov     [bp+var_8], al ;~ 0FBC:00EF
cs=0xfbc;eip=0x0000f2; 	T(OR(al, al));	// 27234 or      al, al ;~ 0FBC:00F2
cs=0xfbc;eip=0x0000f4; 	R(JNZ(loc_1e304));	// 27235 jnz     short loc_1E304 ;~ 0FBC:00F4
cs=0xfbc;eip=0x0000f6; 	R(JMP(code_bto_blank));	// 27236 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:00F6
loc_1e29a:
	// 6107 
cs=0xfbc;eip=0x0000fa; 	T(MOV(si, 0x80));	// 27241 mov     si, 80h ; 'Ä' ;~ 0FBC:00FA
cs=0xfbc;eip=0x0000fd; 	R(JMP(loc_1e2af));	// 27242 jmp     short loc_1E2AF ;~ 0FBC:00FD
loc_1e2a0:
	// 6108 
cs=0xfbc;eip=0x000100; 	T(MOV(si, 0x0FD80));	// 27247 mov     si, 0FD80h ;~ 0FBC:0100
cs=0xfbc;eip=0x000103; 	R(JMP(loc_1e2af));	// 27248 jmp     short loc_1E2AF ;~ 0FBC:0103
loc_1e2a6:
	// 6109 
cs=0xfbc;eip=0x000106; 	T(MOV(si, 0x0FE80));	// 27253 mov     si, 0FE80h ;~ 0FBC:0106
cs=0xfbc;eip=0x000109; 	R(JMP(loc_1e2af));	// 27254 jmp     short loc_1E2AF ;~ 0FBC:0109
loc_1e2ac:
	// 6110 
cs=0xfbc;eip=0x00010c; 	T(MOV(si, 0x0FF80));	// 27259 mov     si, 0FF80h ;~ 0FBC:010C
loc_1e2af:
	// 6111 
cs=0xfbc;eip=0x00010f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 27263 mov     bx, [bp+arg_0] ;~ 0FBC:010F
cs=0xfbc;eip=0x000112; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 27264 mov     ax, [bx] ;~ 0FBC:0112
cs=0xfbc;eip=0x000114; 	T(SUB(ax, elem_xcenter));	// 27265 sub     ax, elem_xCenter ;~ 0FBC:0114
cs=0xfbc;eip=0x000118; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 27266 mov     [bp+var_2C], ax ;~ 0FBC:0118
cs=0xfbc;eip=0x00011b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 27267 mov     ax, [bx+4] ;~ 0FBC:011B
cs=0xfbc;eip=0x00011e; 	T(SUB(ax, elem_zcenter));	// 27268 sub     ax, elem_zCenter ;~ 0FBC:011E
cs=0xfbc;eip=0x000122; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 27269 mov     [bp+var_28], ax ;~ 0FBC:0122
cs=0xfbc;eip=0x000125; 	X(PUSH(ax));	// 27270 push    ax ;~ 0FBC:0125
cs=0xfbc;eip=0x000126; 	X(PUSH(si));	// 27271 push    si ;~ 0FBC:0126
cs=0xfbc;eip=0x000127; 	R(CALLF(sin_fast,0));	// 27272 call    sin_fast ;~ 0FBC:0127
cs=0xfbc;eip=0x00012c; 	T(ADD(sp, 2));	// 27273 add     sp, 2 ;~ 0FBC:012C
cs=0xfbc;eip=0x00012f; 	X(PUSH(ax));	// 27274 push    ax ;~ 0FBC:012F
cs=0xfbc;eip=0x000130; 	R(CALLF(multiply_and_scale,0));	// 27275 call    multiply_and_scale ;~ 0FBC:0130
cs=0xfbc;eip=0x000135; 	T(ADD(sp, 4));	// 27276 add     sp, 4 ;~ 0FBC:0135
cs=0xfbc;eip=0x000138; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2c))));	// 27277 push    [bp+var_2C] ;~ 0FBC:0138
cs=0xfbc;eip=0x00013b; 	X(PUSH(si));	// 27278 push    si ;~ 0FBC:013B
cs=0xfbc;eip=0x00013c; 	T(MOV(di, ax));	// 27279 mov     di, ax ;~ 0FBC:013C
cs=0xfbc;eip=0x00013e; 	R(CALLF(cos_fast,0));	// 27280 call    cos_fast ;~ 0FBC:013E
cs=0xfbc;eip=0x000143; 	T(ADD(sp, 2));	// 27281 add     sp, 2 ;~ 0FBC:0143
cs=0xfbc;eip=0x000146; 	X(PUSH(ax));	// 27282 push    ax ;~ 0FBC:0146
cs=0xfbc;eip=0x000147; 	R(CALLF(multiply_and_scale,0));	// 27283 call    multiply_and_scale ;~ 0FBC:0147
cs=0xfbc;eip=0x00014c; 	T(ADD(sp, 4));	// 27284 add     sp, 4 ;~ 0FBC:014C
cs=0xfbc;eip=0x00014f; 	T(ADD(ax, di));	// 27285 add     ax, di ;~ 0FBC:014F
cs=0xfbc;eip=0x000151; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 27286 mov     [bp+var_22], ax ;~ 0FBC:0151
cs=0xfbc;eip=0x000154; 	T(OR(ax, ax));	// 27287 or      ax, ax ;~ 0FBC:0154
cs=0xfbc;eip=0x000156; 	R(JL(loc_1e2fb));	// 27288 jl      short loc_1E2FB ;~ 0FBC:0156
cs=0xfbc;eip=0x000158; 	R(JMP(loc_1e276));	// 27289 jmp     loc_1E276 ;~ 0FBC:0158
loc_1e2fb:
	// 6112 
cs=0xfbc;eip=0x00015b; 	X(MOV(current_surf_type, water));	// 27294 mov     current_surf_type, water ;~ 0FBC:015B
cs=0xfbc;eip=0x000160; 	R(JMP(loc_1e276));	// 27295 jmp     loc_1E276 ;~ 0FBC:0160
loc_1e304:
	// 6113 
cs=0xfbc;eip=0x000164; 	T(CMP(*(raddr(ss,bp+var_8)), 0x0FD));	// 27300 cmp     [bp+var_8], 0FDh ; '˝' ; filler tests ;~ 0FBC:0164
cs=0xfbc;eip=0x000168; 	R(JNC(loc_1e30d));	// 27301 jnb     short loc_1E30D ;~ 0FBC:0168
cs=0xfbc;eip=0x00016a; 	R(JMP(loc_1e40c));	// 27302 jmp     loc_1E40C ;~ 0FBC:016A
loc_1e30d:
	// 6114 
cs=0xfbc;eip=0x00016d; 	T(MOV(al, *(raddr(ss,bp+var_8))));	// 27306 mov     al, [bp+var_8] ;~ 0FBC:016D
cs=0xfbc;eip=0x000170; 	T(SUB(ah, ah));	// 27307 sub     ah, ah ;~ 0FBC:0170
cs=0xfbc;eip=0x000172; 	T(CMP(ax, 0x0FD));	// 27308 cmp     ax, 0FDh ; '˝' ;~ 0FBC:0172
cs=0xfbc;eip=0x000175; 	R(JZ(loc_1e328));	// 27309 jz      short loc_1E328 ;~ 0FBC:0175
cs=0xfbc;eip=0x000177; 	T(CMP(ax, 0x0FE));	// 27310 cmp     ax, 0FEh ; '˛' ;~ 0FBC:0177
cs=0xfbc;eip=0x00017a; 	R(JZ(loc_1e390));	// 27311 jz      short loc_1E390 ;~ 0FBC:017A
cs=0xfbc;eip=0x00017c; 	T(CMP(ax, 0x0FF));	// 27312 cmp     ax, 0FFh ;~ 0FBC:017C
cs=0xfbc;eip=0x00017f; 	R(JNZ(loc_1e324));	// 27313 jnz     short loc_1E324 ;~ 0FBC:017F
cs=0xfbc;eip=0x000181; 	R(JMP(loc_1e3cc));	// 27314 jmp     loc_1E3CC ;~ 0FBC:0181
loc_1e324:
	// 6115 
cs=0xfbc;eip=0x000184; 	R(JMP(loc_1e464));	// 27318 jmp     loc_1E464 ;~ 0FBC:0184
loc_1e328:
	// 6116 
cs=0xfbc;eip=0x000188; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 27323 mov     al, [bp+var_20] ;~ 0FBC:0188
cs=0xfbc;eip=0x00018b; 	T(CBW);	// 27324 cbw ;~ 0FBC:018B
cs=0xfbc;eip=0x00018c; 	T(MOV(di, ax));	// 27325 mov     di, ax ;~ 0FBC:018C
cs=0xfbc;eip=0x00018e; 	T(SHL(di, 1));	// 27326 shl     di, 1 ;~ 0FBC:018E
cs=0xfbc;eip=0x000190; 	T(MOV(al, *(raddr(ss,bp+var_1a))));	// 27327 mov     al, [bp+var_1A] ;~ 0FBC:0190
cs=0xfbc;eip=0x000193; 	T(CBW);	// 27328 cbw ;~ 0FBC:0193
cs=0xfbc;eip=0x000194; 	T(MOV(bx, ax));	// 27329 mov     bx, ax ;~ 0FBC:0194
cs=0xfbc;eip=0x000196; 	T(ADD(bx, *(dw*)((((db*)terrainrows)+2)+di)));	// 27330 add     bx, (terrainrows+2)[di] ;~ 0FBC:0196
cs=0xfbc;eip=0x00019a; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 27331 add     bx, word ptr td14_elem_map_main ;~ 0FBC:019A
cs=0xfbc;eip=0x00019e; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 27332 mov     es, word ptr td14_elem_map_main+2 ;~ 0FBC:019E
cs=0xfbc;eip=0x0001a2; 	T(MOV(al, *(raddr(es,bx-1))));	// 27333 mov     al, es:[bx-1] ;~ 0FBC:01A2
cs=0xfbc;eip=0x0001a6; 	X(MOV(*(raddr(ss,bp+var_8)), al));	// 27334 mov     [bp+var_8], al ;~ 0FBC:01A6
cs=0xfbc;eip=0x0001a9; 	T(SUB(ah, ah));	// 27335 sub     ah, ah ;~ 0FBC:01A9
cs=0xfbc;eip=0x0001ab; 	T(MOV(bx, ax));	// 27336 mov     bx, ax ;~ 0FBC:01AB
cs=0xfbc;eip=0x0001ad; 	T(SHL(bx, 1));	// 27337 shl     bx, 1 ;~ 0FBC:01AD
cs=0xfbc;eip=0x0001af; 	T(ADD(bx, ax));	// 27338 add     bx, ax ;~ 0FBC:01AF
cs=0xfbc;eip=0x0001b1; 	T(SHL(bx, 1));	// 27339 shl     bx, 1 ;~ 0FBC:01B1
cs=0xfbc;eip=0x0001b3; 	T(ADD(bx, ax));	// 27340 add     bx, ax ;~ 0FBC:01B3
cs=0xfbc;eip=0x0001b5; 	T(SHL(bx, 1));	// 27341 shl     bx, 1 ;~ 0FBC:01B5
cs=0xfbc;eip=0x0001b7; 	T(TEST(*((&byte_3d813)+bx), 1));	// 27342 test    byte_3D813[bx], 1 ;~ 0FBC:01B7
cs=0xfbc;eip=0x0001bc; 	R(JZ(loc_1e365));	// 27343 jz      short loc_1E365 ;~ 0FBC:01BC
cs=0xfbc;eip=0x0001be; 	T(MOV(ax, *(dw*)((((db*)terrainpos)+2)+di)));	// 27344 mov     ax, (terrainpos+2)[di] ;~ 0FBC:01BE
loc_1e362:
	// 6117 
cs=0xfbc;eip=0x0001c2; 	X(MOV(elem_zcenter, ax));	// 27347 mov     elem_zCenter, ax ;~ 0FBC:01C2
loc_1e365:
	// 6118 
cs=0xfbc;eip=0x0001c5; 	T(MOV(al, *(raddr(ss,bp+var_8))));	// 27351 mov     al, [bp+var_8] ;~ 0FBC:01C5
cs=0xfbc;eip=0x0001c8; 	T(SUB(ah, ah));	// 27352 sub     ah, ah ;~ 0FBC:01C8
cs=0xfbc;eip=0x0001ca; 	T(MOV(bx, ax));	// 27353 mov     bx, ax ;~ 0FBC:01CA
cs=0xfbc;eip=0x0001cc; 	T(SHL(bx, 1));	// 27354 shl     bx, 1 ;~ 0FBC:01CC
cs=0xfbc;eip=0x0001ce; 	T(ADD(bx, ax));	// 27355 add     bx, ax ;~ 0FBC:01CE
cs=0xfbc;eip=0x0001d0; 	T(SHL(bx, 1));	// 27356 shl     bx, 1 ;~ 0FBC:01D0
cs=0xfbc;eip=0x0001d2; 	T(ADD(bx, ax));	// 27357 add     bx, ax ;~ 0FBC:01D2
cs=0xfbc;eip=0x0001d4; 	T(SHL(bx, 1));	// 27358 shl     bx, 1 ;~ 0FBC:01D4
cs=0xfbc;eip=0x0001d6; 	T(TEST(*((&byte_3d813)+bx), 2));	// 27359 test    byte_3D813[bx], 2 ;~ 0FBC:01D6
cs=0xfbc;eip=0x0001db; 	R(JNZ(loc_1e380));	// 27360 jnz     short loc_1E380 ;~ 0FBC:01DB
cs=0xfbc;eip=0x0001dd; 	R(JMP(loc_1e464));	// 27361 jmp     loc_1E464 ;~ 0FBC:01DD
loc_1e380:
	// 6119 
cs=0xfbc;eip=0x0001e0; 	T(MOV(al, *(raddr(ss,bp+var_1a))));	// 27365 mov     al, [bp+var_1A] ;~ 0FBC:01E0
cs=0xfbc;eip=0x0001e3; 	T(CBW);	// 27366 cbw ;~ 0FBC:01E3
cs=0xfbc;eip=0x0001e4; 	T(MOV(bx, ax));	// 27367 mov     bx, ax ;~ 0FBC:01E4
cs=0xfbc;eip=0x0001e6; 	T(SHL(bx, 1));	// 27368 shl     bx, 1 ;~ 0FBC:01E6
cs=0xfbc;eip=0x0001e8; 	T(MOV(ax, *(dw*)(((db*)trackpos2)+bx)));	// 27369 mov     ax, trackpos2[bx] ;~ 0FBC:01E8
cs=0xfbc;eip=0x0001ec; 	R(JMP(loc_1e461));	// 27370 jmp     loc_1E461 ;~ 0FBC:01EC
loc_1e390:
	// 6120 
cs=0xfbc;eip=0x0001f0; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 27375 mov     al, [bp+var_20] ;~ 0FBC:01F0
cs=0xfbc;eip=0x0001f3; 	T(CBW);	// 27376 cbw ;~ 0FBC:01F3
cs=0xfbc;eip=0x0001f4; 	T(MOV(di, ax));	// 27377 mov     di, ax ;~ 0FBC:01F4
cs=0xfbc;eip=0x0001f6; 	T(SHL(di, 1));	// 27378 shl     di, 1 ;~ 0FBC:01F6
cs=0xfbc;eip=0x0001f8; 	T(MOV(al, *(raddr(ss,bp+var_1a))));	// 27379 mov     al, [bp+var_1A] ;~ 0FBC:01F8
cs=0xfbc;eip=0x0001fb; 	T(CBW);	// 27380 cbw ;~ 0FBC:01FB
cs=0xfbc;eip=0x0001fc; 	T(MOV(bx, ax));	// 27381 mov     bx, ax ;~ 0FBC:01FC
cs=0xfbc;eip=0x0001fe; 	T(ADD(bx, *(dw*)((((db*)terrainrows)+2)+di)));	// 27382 add     bx, (terrainrows+2)[di] ;~ 0FBC:01FE
cs=0xfbc;eip=0x000202; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 27383 add     bx, word ptr td14_elem_map_main ;~ 0FBC:0202
cs=0xfbc;eip=0x000206; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 27384 mov     es, word ptr td14_elem_map_main+2 ;~ 0FBC:0206
cs=0xfbc;eip=0x00020a; 	T(MOV(al, *(raddr(es,bx))));	// 27385 mov     al, es:[bx] ;~ 0FBC:020A
cs=0xfbc;eip=0x00020d; 	X(MOV(*(raddr(ss,bp+var_8)), al));	// 27386 mov     [bp+var_8], al ;~ 0FBC:020D
cs=0xfbc;eip=0x000210; 	T(SUB(ah, ah));	// 27387 sub     ah, ah ;~ 0FBC:0210
cs=0xfbc;eip=0x000212; 	T(MOV(bx, ax));	// 27388 mov     bx, ax ;~ 0FBC:0212
cs=0xfbc;eip=0x000214; 	T(SHL(bx, 1));	// 27389 shl     bx, 1 ;~ 0FBC:0214
cs=0xfbc;eip=0x000216; 	T(ADD(bx, ax));	// 27390 add     bx, ax ;~ 0FBC:0216
cs=0xfbc;eip=0x000218; 	T(SHL(bx, 1));	// 27391 shl     bx, 1 ;~ 0FBC:0218
cs=0xfbc;eip=0x00021a; 	T(ADD(bx, ax));	// 27392 add     bx, ax ;~ 0FBC:021A
cs=0xfbc;eip=0x00021c; 	T(SHL(bx, 1));	// 27393 shl     bx, 1 ;~ 0FBC:021C
cs=0xfbc;eip=0x00021e; 	T(TEST(*((&byte_3d813)+bx), 1));	// 27394 test    byte_3D813[bx], 1 ;~ 0FBC:021E
cs=0xfbc;eip=0x000223; 	R(JZ(loc_1e43d));	// 27395 jz      short loc_1E43D ;~ 0FBC:0223
cs=0xfbc;eip=0x000225; 	T(MOV(ax, *(dw*)((((db*)terrainpos)+2)+di)));	// 27396 mov     ax, (terrainpos+2)[di] ;~ 0FBC:0225
cs=0xfbc;eip=0x000229; 	R(JMP(loc_1e43a));	// 27397 jmp     short loc_1E43A ;~ 0FBC:0229
loc_1e3cc:
	// 6121 
cs=0xfbc;eip=0x00022c; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 27402 mov     al, [bp+var_20] ;~ 0FBC:022C
cs=0xfbc;eip=0x00022f; 	T(CBW);	// 27403 cbw ;~ 0FBC:022F
cs=0xfbc;eip=0x000230; 	T(MOV(di, ax));	// 27404 mov     di, ax ;~ 0FBC:0230
cs=0xfbc;eip=0x000232; 	T(SHL(di, 1));	// 27405 shl     di, 1 ;~ 0FBC:0232
cs=0xfbc;eip=0x000234; 	T(MOV(al, *(raddr(ss,bp+var_1a))));	// 27406 mov     al, [bp+var_1A] ;~ 0FBC:0234
cs=0xfbc;eip=0x000237; 	T(CBW);	// 27407 cbw ;~ 0FBC:0237
cs=0xfbc;eip=0x000238; 	T(MOV(bx, ax));	// 27408 mov     bx, ax ;~ 0FBC:0238
cs=0xfbc;eip=0x00023a; 	T(ADD(bx, *(dw*)(((db*)terrainrows)+di)));	// 27409 add     bx, terrainrows[di] ;~ 0FBC:023A
cs=0xfbc;eip=0x00023e; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 27410 add     bx, word ptr td14_elem_map_main ;~ 0FBC:023E
cs=0xfbc;eip=0x000242; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 27411 mov     es, word ptr td14_elem_map_main+2 ;~ 0FBC:0242
cs=0xfbc;eip=0x000246; 	T(MOV(al, *(raddr(es,bx-1))));	// 27412 mov     al, es:[bx-1] ;~ 0FBC:0246
cs=0xfbc;eip=0x00024a; 	X(MOV(*(raddr(ss,bp+var_8)), al));	// 27413 mov     [bp+var_8], al ;~ 0FBC:024A
cs=0xfbc;eip=0x00024d; 	T(SUB(ah, ah));	// 27414 sub     ah, ah ;~ 0FBC:024D
cs=0xfbc;eip=0x00024f; 	T(MOV(bx, ax));	// 27415 mov     bx, ax ;~ 0FBC:024F
cs=0xfbc;eip=0x000251; 	T(SHL(bx, 1));	// 27416 shl     bx, 1 ;~ 0FBC:0251
cs=0xfbc;eip=0x000253; 	T(ADD(bx, ax));	// 27417 add     bx, ax ;~ 0FBC:0253
cs=0xfbc;eip=0x000255; 	T(SHL(bx, 1));	// 27418 shl     bx, 1 ;~ 0FBC:0255
cs=0xfbc;eip=0x000257; 	T(ADD(bx, ax));	// 27419 add     bx, ax ;~ 0FBC:0257
cs=0xfbc;eip=0x000259; 	T(SHL(bx, 1));	// 27420 shl     bx, 1 ;~ 0FBC:0259
cs=0xfbc;eip=0x00025b; 	T(TEST(*((&byte_3d813)+bx), 1));	// 27421 test    byte_3D813[bx], 1 ;~ 0FBC:025B
cs=0xfbc;eip=0x000260; 	R(JNZ(loc_1e405));	// 27422 jnz     short loc_1E405 ;~ 0FBC:0260
cs=0xfbc;eip=0x000262; 	R(JMP(loc_1e365));	// 27423 jmp     loc_1E365 ;~ 0FBC:0262
loc_1e405:
	// 6122 
cs=0xfbc;eip=0x000265; 	T(MOV(ax, *(dw*)(((db*)terrainpos)+di)));	// 27427 mov     ax, terrainpos[di] ;~ 0FBC:0265
cs=0xfbc;eip=0x000269; 	R(JMP(loc_1e362));	// 27428 jmp     loc_1E362 ;~ 0FBC:0269
loc_1e40c:
	// 6123 
cs=0xfbc;eip=0x00026c; 	T(MOV(al, *(raddr(ss,bp+var_8))));	// 27432 mov     al, [bp+var_8] ;~ 0FBC:026C
cs=0xfbc;eip=0x00026f; 	T(SUB(ah, ah));	// 27433 sub     ah, ah ;~ 0FBC:026F
cs=0xfbc;eip=0x000271; 	T(MOV(bx, ax));	// 27434 mov     bx, ax ;~ 0FBC:0271
cs=0xfbc;eip=0x000273; 	T(SHL(bx, 1));	// 27435 shl     bx, 1 ;~ 0FBC:0273
cs=0xfbc;eip=0x000275; 	T(ADD(bx, ax));	// 27436 add     bx, ax ;~ 0FBC:0275
cs=0xfbc;eip=0x000277; 	T(SHL(bx, 1));	// 27437 shl     bx, 1 ;~ 0FBC:0277
cs=0xfbc;eip=0x000279; 	T(ADD(bx, ax));	// 27438 add     bx, ax ;~ 0FBC:0279
cs=0xfbc;eip=0x00027b; 	T(SHL(bx, 1));	// 27439 shl     bx, 1 ;~ 0FBC:027B
cs=0xfbc;eip=0x00027d; 	T(MOV(al, *((&byte_3d813)+bx)));	// 27440 mov     al, byte_3D813[bx] ;~ 0FBC:027D
cs=0xfbc;eip=0x000281; 	X(MOV(*(db*)(raddr(ss,bp+var_3c)), al));	// 27441 mov     byte ptr [bp+var_3C], al ;~ 0FBC:0281
cs=0xfbc;eip=0x000284; 	T(CMP(al, ah));	// 27442 cmp     al, ah ;~ 0FBC:0284
cs=0xfbc;eip=0x000286; 	R(JZ(loc_1e464));	// 27443 jz      short loc_1E464 ;~ 0FBC:0286
cs=0xfbc;eip=0x000288; 	T(TEST(*(db*)(raddr(ss,bp+var_3c)), 1));	// 27444 test    byte ptr [bp+var_3C], 1 ;~ 0FBC:0288
cs=0xfbc;eip=0x00028c; 	R(JZ(loc_1e43d));	// 27445 jz      short loc_1E43D ;~ 0FBC:028C
cs=0xfbc;eip=0x00028e; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 27446 mov     al, [bp+var_20] ;~ 0FBC:028E
cs=0xfbc;eip=0x000291; 	T(CBW);	// 27447 cbw ;~ 0FBC:0291
cs=0xfbc;eip=0x000292; 	T(MOV(bx, ax));	// 27448 mov     bx, ax ;~ 0FBC:0292
cs=0xfbc;eip=0x000294; 	T(SHL(bx, 1));	// 27449 shl     bx, 1 ;~ 0FBC:0294
cs=0xfbc;eip=0x000296; 	T(MOV(ax, *(dw*)(((db*)terrainpos)+bx)));	// 27450 mov     ax, terrainpos[bx] ;~ 0FBC:0296
loc_1e43a:
	// 6124 
cs=0xfbc;eip=0x00029a; 	X(MOV(elem_zcenter, ax));	// 27453 mov     elem_zCenter, ax ;~ 0FBC:029A
loc_1e43d:
	// 6125 
cs=0xfbc;eip=0x00029d; 	T(MOV(al, *(raddr(ss,bp+var_8))));	// 27457 mov     al, [bp+var_8] ;~ 0FBC:029D
cs=0xfbc;eip=0x0002a0; 	T(SUB(ah, ah));	// 27458 sub     ah, ah ;~ 0FBC:02A0
cs=0xfbc;eip=0x0002a2; 	T(MOV(bx, ax));	// 27459 mov     bx, ax ;~ 0FBC:02A2
cs=0xfbc;eip=0x0002a4; 	T(SHL(bx, 1));	// 27460 shl     bx, 1 ;~ 0FBC:02A4
cs=0xfbc;eip=0x0002a6; 	T(ADD(bx, ax));	// 27461 add     bx, ax ;~ 0FBC:02A6
cs=0xfbc;eip=0x0002a8; 	T(SHL(bx, 1));	// 27462 shl     bx, 1 ;~ 0FBC:02A8
cs=0xfbc;eip=0x0002aa; 	T(ADD(bx, ax));	// 27463 add     bx, ax ;~ 0FBC:02AA
cs=0xfbc;eip=0x0002ac; 	T(SHL(bx, 1));	// 27464 shl     bx, 1 ;~ 0FBC:02AC
cs=0xfbc;eip=0x0002ae; 	T(TEST(*((&byte_3d813)+bx), 2));	// 27465 test    byte_3D813[bx], 2 ;~ 0FBC:02AE
cs=0xfbc;eip=0x0002b3; 	R(JZ(loc_1e464));	// 27466 jz      short loc_1E464 ;~ 0FBC:02B3
cs=0xfbc;eip=0x0002b5; 	T(MOV(al, *(raddr(ss,bp+var_1a))));	// 27467 mov     al, [bp+var_1A] ;~ 0FBC:02B5
cs=0xfbc;eip=0x0002b8; 	T(CBW);	// 27468 cbw ;~ 0FBC:02B8
cs=0xfbc;eip=0x0002b9; 	T(MOV(bx, ax));	// 27469 mov     bx, ax ;~ 0FBC:02B9
cs=0xfbc;eip=0x0002bb; 	T(SHL(bx, 1));	// 27470 shl     bx, 1 ;~ 0FBC:02BB
cs=0xfbc;eip=0x0002bd; 	T(MOV(ax, *(dw*)((((db*)trackpos2)+2)+bx)));	// 27471 mov     ax, (trackpos2+2)[bx] ;~ 0FBC:02BD
loc_1e461:
	// 6126 
cs=0xfbc;eip=0x0002c1; 	X(MOV(elem_xcenter, ax));	// 27474 mov     elem_xCenter, ax ;~ 0FBC:02C1
loc_1e464:
	// 6127 
cs=0xfbc;eip=0x0002c4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 27478 mov     bx, [bp+arg_0] ;~ 0FBC:02C4
cs=0xfbc;eip=0x0002c7; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 27479 mov     ax, [bx] ;~ 0FBC:02C7
cs=0xfbc;eip=0x0002c9; 	T(SUB(ax, elem_xcenter));	// 27480 sub     ax, elem_xCenter ;~ 0FBC:02C9
cs=0xfbc;eip=0x0002cd; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 27481 mov     [bp+var_2C], ax ;~ 0FBC:02CD
cs=0xfbc;eip=0x0002d0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 27482 mov     ax, [bx+4] ;~ 0FBC:02D0
cs=0xfbc;eip=0x0002d3; 	T(SUB(ax, elem_zcenter));	// 27483 sub     ax, elem_zCenter ;~ 0FBC:02D3
cs=0xfbc;eip=0x0002d7; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 27484 mov     [bp+var_28], ax ;~ 0FBC:02D7
cs=0xfbc;eip=0x0002da; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 27485 mov     bx, [bp+arg_2] ;~ 0FBC:02DA
cs=0xfbc;eip=0x0002dd; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 27486 mov     ax, [bx] ;~ 0FBC:02DD
cs=0xfbc;eip=0x0002df; 	T(SUB(ax, elem_xcenter));	// 27487 sub     ax, elem_xCenter ;~ 0FBC:02DF
cs=0xfbc;eip=0x0002e3; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 27488 mov     [bp+var_18], ax ;~ 0FBC:02E3
cs=0xfbc;eip=0x0002e6; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 27489 mov     ax, [bx+4] ;~ 0FBC:02E6
cs=0xfbc;eip=0x0002e9; 	T(SUB(ax, elem_zcenter));	// 27490 sub     ax, elem_zCenter ;~ 0FBC:02E9
cs=0xfbc;eip=0x0002ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 27491 mov     [bp+var_14], ax ;~ 0FBC:02ED
cs=0xfbc;eip=0x0002f0; 	T(CMP(*(raddr(ss,bp+var_8)), 0));	// 27492 cmp     [bp+var_8], 0 ;~ 0FBC:02F0
cs=0xfbc;eip=0x0002f4; 	R(JZ(loc_1e4b6));	// 27493 jz      short loc_1E4B6 ;~ 0FBC:02F4
cs=0xfbc;eip=0x0002f6; 	T(CMP(*(raddr(ss,bp+var_34)), 7));	// 27494 cmp     [bp+var_34], 7 ;~ 0FBC:02F6
cs=0xfbc;eip=0x0002fa; 	R(JC(loc_1e4b6));	// 27495 jb      short loc_1E4B6 ;~ 0FBC:02FA
cs=0xfbc;eip=0x0002fc; 	T(CMP(*(raddr(ss,bp+var_34)), 0x0B));	// 27496 cmp     [bp+var_34], 0Bh ;~ 0FBC:02FC
cs=0xfbc;eip=0x000300; 	R(JNC(loc_1e4b6));	// 27497 jnb     short loc_1E4B6 ;~ 0FBC:0300
cs=0xfbc;eip=0x000302; 	T(MOV(al, *(raddr(ss,bp+var_8))));	// 27498 mov     al, [bp+var_8] ;~ 0FBC:0302
cs=0xfbc;eip=0x000305; 	T(SUB(ah, ah));	// 27499 sub     ah, ah ;~ 0FBC:0305
cs=0xfbc;eip=0x000307; 	X(PUSH(ax));	// 27500 push    ax ;~ 0FBC:0307
cs=0xfbc;eip=0x000308; 	T(MOV(al, *(raddr(ss,bp+var_34))));	// 27501 mov     al, [bp+var_34] ;~ 0FBC:0308
cs=0xfbc;eip=0x00030b; 	X(PUSH(ax));	// 27502 push    ax ;~ 0FBC:030B
cs=0xfbc;eip=0x00030c; 	X(PUSH(cs));	// 27503 push    cs ;~ 0FBC:030C
cs=0xfbc;eip=0x00030d; 	R(CALL(subst_hillroad_track,0));	// 27504 call    near ptr subst_hillroad_track ;~ 0FBC:030D
cs=0xfbc;eip=0x000310; 	T(ADD(sp, 4));	// 27505 add     sp, 4 ;~ 0FBC:0310
cs=0xfbc;eip=0x000313; 	X(MOV(*(raddr(ss,bp+var_8)), al));	// 27506 mov     [bp+var_8], al ;~ 0FBC:0313
loc_1e4b6:
	// 6128 
cs=0xfbc;eip=0x000316; 	T(MOV(al, *(raddr(ss,bp+var_8))));	// 27510 mov     al, [bp+var_8] ;~ 0FBC:0316
cs=0xfbc;eip=0x000319; 	T(SUB(ah, ah));	// 27511 sub     ah, ah ;~ 0FBC:0319
cs=0xfbc;eip=0x00031b; 	T(MOV(cx, ax));	// 27512 mov     cx, ax ;~ 0FBC:031B
cs=0xfbc;eip=0x00031d; 	T(SHL(ax, 1));	// 27513 shl     ax, 1 ;~ 0FBC:031D
cs=0xfbc;eip=0x00031f; 	T(ADD(ax, cx));	// 27514 add     ax, cx ;~ 0FBC:031F
cs=0xfbc;eip=0x000321; 	T(SHL(ax, 1));	// 27515 shl     ax, 1 ;~ 0FBC:0321
cs=0xfbc;eip=0x000323; 	T(ADD(ax, cx));	// 27516 add     ax, cx ;~ 0FBC:0323
cs=0xfbc;eip=0x000325; 	T(SHL(ax, 1));	// 27517 shl     ax, 1 ;~ 0FBC:0325
cs=0xfbc;eip=0x000327; 	T(ADD(ax, offset(dseg,trkobjectlist)));	// 27518 add     ax, offset trkObjectList ;~ 0FBC:0327
cs=0xfbc;eip=0x00032a; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), ax));	// 27519 mov     [bp+var_3A], ax ;~ 0FBC:032A
cs=0xfbc;eip=0x00032d; 	T(MOV(bx, ax));	// 27520 mov     bx, ax          ; loading physical model indices! ;~ 0FBC:032D
cs=0xfbc;eip=0x00032f; 	T(MOV(al, *(raddr(ds,bx+0x0C))));	// 27521 mov     al, [bx+0Ch] ;~ 0FBC:032F
cs=0xfbc;eip=0x000332; 	T(CBW);	// 27522 cbw ;~ 0FBC:0332
cs=0xfbc;eip=0x000333; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 27523 mov     [bp+var_24], ax ;~ 0FBC:0333
cs=0xfbc;eip=0x000336; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 27524 mov     ax, [bx+2] ;~ 0FBC:0336
cs=0xfbc;eip=0x000339; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 27525 mov     [bp+var_10], ax ;~ 0FBC:0339
cs=0xfbc;eip=0x00033c; 	T(OR(ax, ax));	// 27526 or      ax, ax ;~ 0FBC:033C
cs=0xfbc;eip=0x00033e; 	R(JZ(loc_1e4ef));	// 27527 jz      short loc_1E4EF ;~ 0FBC:033E
cs=0xfbc;eip=0x000340; 	T(CMP(ax, 0x100));	// 27528 cmp     ax, 100h ;~ 0FBC:0340
cs=0xfbc;eip=0x000343; 	R(JZ(loc_1e562));	// 27529 jz      short loc_1E562 ;~ 0FBC:0343
cs=0xfbc;eip=0x000345; 	T(CMP(ax, 0x200));	// 27530 cmp     ax, 200h ;~ 0FBC:0345
cs=0xfbc;eip=0x000348; 	R(JZ(loc_1e540));	// 27531 jz      short loc_1E540 ;~ 0FBC:0348
cs=0xfbc;eip=0x00034a; 	T(CMP(ax, 0x300));	// 27532 cmp     ax, 300h ;~ 0FBC:034A
cs=0xfbc;eip=0x00034d; 	R(JZ(loc_1e516));	// 27533 jz      short loc_1E516 ;~ 0FBC:034D
loc_1e4ef:
	// 6129 
cs=0xfbc;eip=0x00034f; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), 0));	// 27537 mov     [bp+var_36], 0 ;~ 0FBC:034F
cs=0xfbc;eip=0x000354; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3a))));	// 27538 mov     bx, [bp+var_3A] ;~ 0FBC:0354
cs=0xfbc;eip=0x000357; 	T(MOV(al, *(raddr(ds,bx+9))));	// 27539 mov     al, [bx+9] ;~ 0FBC:0357
cs=0xfbc;eip=0x00035a; 	T(INC(al));	// 27540 inc     al ;~ 0FBC:035A
cs=0xfbc;eip=0x00035c; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 27541 mov     [bp+var_12], al ;~ 0FBC:035C
cs=0xfbc;eip=0x00035f; 	T(CMP(al, 1));	// 27542 cmp     al, 1 ;~ 0FBC:035F
cs=0xfbc;eip=0x000361; 	R(JGE(loc_1e507));	// 27543 jge     short loc_1E507 ;~ 0FBC:0361
cs=0xfbc;eip=0x000363; 	X(MOV(*(raddr(ss,bp+var_12)), 1));	// 27544 mov     [bp+var_12], 1 ;~ 0FBC:0363
loc_1e507:
	// 6130 
cs=0xfbc;eip=0x000367; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 27547 cmp     [bp+var_2C], 0 ;~ 0FBC:0367
cs=0xfbc;eip=0x00036b; 	R(JGE(loc_1e58a));	// 27548 jge     short loc_1E58A ;~ 0FBC:036B
cs=0xfbc;eip=0x00036d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27549 mov     ax, [bp+var_2C] ;~ 0FBC:036D
cs=0xfbc;eip=0x000370; 	T(NEG(ax));	// 27550 neg     ax ;~ 0FBC:0370
cs=0xfbc;eip=0x000372; 	R(JMP(loc_1e58d));	// 27551 jmp     short loc_1E58D ;~ 0FBC:0372
loc_1e516:
	// 6131 
cs=0xfbc;eip=0x000376; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27557 mov     ax, [bp+var_2C] ;~ 0FBC:0376
cs=0xfbc;eip=0x000379; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 27558 mov     [bp+var_1E], ax ;~ 0FBC:0379
cs=0xfbc;eip=0x00037c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27559 mov     ax, [bp+var_28] ;~ 0FBC:037C
cs=0xfbc;eip=0x00037f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 27560 mov     [bp+var_2C], ax ;~ 0FBC:037F
cs=0xfbc;eip=0x000382; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 27561 mov     ax, [bp+var_1E] ;~ 0FBC:0382
cs=0xfbc;eip=0x000385; 	T(NEG(ax));	// 27562 neg     ax ;~ 0FBC:0385
cs=0xfbc;eip=0x000387; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 27563 mov     [bp+var_28], ax ;~ 0FBC:0387
cs=0xfbc;eip=0x00038a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 27564 mov     ax, [bp+var_18] ;~ 0FBC:038A
cs=0xfbc;eip=0x00038d; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 27565 mov     [bp+var_1E], ax ;~ 0FBC:038D
cs=0xfbc;eip=0x000390; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 27566 mov     ax, [bp+var_14] ;~ 0FBC:0390
cs=0xfbc;eip=0x000393; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 27567 mov     [bp+var_18], ax ;~ 0FBC:0393
cs=0xfbc;eip=0x000396; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 27568 mov     ax, [bp+var_1E] ;~ 0FBC:0396
cs=0xfbc;eip=0x000399; 	T(NEG(ax));	// 27569 neg     ax ;~ 0FBC:0399
loc_1e53b:
	// 6132 
cs=0xfbc;eip=0x00039b; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 27572 mov     [bp+var_14], ax ;~ 0FBC:039B
cs=0xfbc;eip=0x00039e; 	R(JMP(loc_1e4ef));	// 27573 jmp     short loc_1E4EF ;~ 0FBC:039E
loc_1e540:
	// 6133 
cs=0xfbc;eip=0x0003a0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27577 mov     ax, [bp+var_28] ;~ 0FBC:03A0
cs=0xfbc;eip=0x0003a3; 	T(NEG(ax));	// 27578 neg     ax ;~ 0FBC:03A3
cs=0xfbc;eip=0x0003a5; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 27579 mov     [bp+var_28], ax ;~ 0FBC:03A5
cs=0xfbc;eip=0x0003a8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27580 mov     ax, [bp+var_2C] ;~ 0FBC:03A8
cs=0xfbc;eip=0x0003ab; 	T(NEG(ax));	// 27581 neg     ax ;~ 0FBC:03AB
cs=0xfbc;eip=0x0003ad; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 27582 mov     [bp+var_2C], ax ;~ 0FBC:03AD
cs=0xfbc;eip=0x0003b0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 27583 mov     ax, [bp+var_14] ;~ 0FBC:03B0
cs=0xfbc;eip=0x0003b3; 	T(NEG(ax));	// 27584 neg     ax ;~ 0FBC:03B3
cs=0xfbc;eip=0x0003b5; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 27585 mov     [bp+var_14], ax ;~ 0FBC:03B5
cs=0xfbc;eip=0x0003b8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 27586 mov     ax, [bp+var_18] ;~ 0FBC:03B8
cs=0xfbc;eip=0x0003bb; 	T(NEG(ax));	// 27587 neg     ax ;~ 0FBC:03BB
cs=0xfbc;eip=0x0003bd; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 27588 mov     [bp+var_18], ax ;~ 0FBC:03BD
cs=0xfbc;eip=0x0003c0; 	R(JMP(loc_1e4ef));	// 27589 jmp     short loc_1E4EF ;~ 0FBC:03C0
loc_1e562:
	// 6134 
cs=0xfbc;eip=0x0003c2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27593 mov     ax, [bp+var_2C] ;~ 0FBC:03C2
cs=0xfbc;eip=0x0003c5; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 27594 mov     [bp+var_1E], ax ;~ 0FBC:03C5
cs=0xfbc;eip=0x0003c8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27595 mov     ax, [bp+var_28] ;~ 0FBC:03C8
cs=0xfbc;eip=0x0003cb; 	T(NEG(ax));	// 27596 neg     ax ;~ 0FBC:03CB
cs=0xfbc;eip=0x0003cd; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 27597 mov     [bp+var_2C], ax ;~ 0FBC:03CD
cs=0xfbc;eip=0x0003d0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 27598 mov     ax, [bp+var_1E] ;~ 0FBC:03D0
cs=0xfbc;eip=0x0003d3; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 27599 mov     [bp+var_28], ax ;~ 0FBC:03D3
cs=0xfbc;eip=0x0003d6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 27600 mov     ax, [bp+var_18] ;~ 0FBC:03D6
cs=0xfbc;eip=0x0003d9; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 27601 mov     [bp+var_1E], ax ;~ 0FBC:03D9
cs=0xfbc;eip=0x0003dc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 27602 mov     ax, [bp+var_14] ;~ 0FBC:03DC
cs=0xfbc;eip=0x0003df; 	T(NEG(ax));	// 27603 neg     ax ;~ 0FBC:03DF
cs=0xfbc;eip=0x0003e1; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 27604 mov     [bp+var_18], ax ;~ 0FBC:03E1
cs=0xfbc;eip=0x0003e4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 27605 mov     ax, [bp+var_1E] ;~ 0FBC:03E4
cs=0xfbc;eip=0x0003e7; 	R(JMP(loc_1e53b));	// 27606 jmp     short loc_1E53B ;~ 0FBC:03E7
loc_1e58a:
	// 6135 
cs=0xfbc;eip=0x0003ea; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27611 mov     ax, [bp+var_2C] ;~ 0FBC:03EA
loc_1e58d:
	// 6136 
cs=0xfbc;eip=0x0003ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_32)), ax));	// 27614 mov     [bp+var_32], ax ;~ 0FBC:03ED
cs=0xfbc;eip=0x0003f0; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0));	// 27615 cmp     [bp+var_28], 0 ;~ 0FBC:03F0
cs=0xfbc;eip=0x0003f4; 	R(JGE(loc_1e59e));	// 27616 jge     short loc_1E59E ;~ 0FBC:03F4
cs=0xfbc;eip=0x0003f6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27617 mov     ax, [bp+var_28] ;~ 0FBC:03F6
cs=0xfbc;eip=0x0003f9; 	T(NEG(ax));	// 27618 neg     ax ;~ 0FBC:03F9
cs=0xfbc;eip=0x0003fb; 	R(JMP(loc_1e5a1));	// 27619 jmp     short loc_1E5A1 ;~ 0FBC:03FB
loc_1e59e:
	// 6137 
cs=0xfbc;eip=0x0003fe; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27624 mov     ax, [bp+var_28] ;~ 0FBC:03FE
loc_1e5a1:
	// 6138 
cs=0xfbc;eip=0x000401; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 27627 mov     [bp+var_2E], ax ;~ 0FBC:0401
cs=0xfbc;eip=0x000404; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_24))));	// 27628 mov     ax, [bp+var_24] ;~ 0FBC:0404
cs=0xfbc;eip=0x000407; 	T(CMP(ax, 0x4A));	// 27629 cmp     ax, 4Ah         ; switch 75 cases ;~ 0FBC:0407
cs=0xfbc;eip=0x00040a; 	R(JBE(code_bto_root));	// 27630 jbe     short code_bto_root ;~ 0FBC:040A
cs=0xfbc;eip=0x00040c; 	R(JMP(code_bto_blank));	// 27631 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:040C
code_bto_root:
	// 6139 
cs=0xfbc;eip=0x00040f; 	T(ADD(ax, ax));	// 27635 add     ax, ax ;~ 0FBC:040F
cs=0xfbc;eip=0x000411; 	T(XCHG(ax, bx));	// 27636 xchg    ax, bx ;~ 0FBC:0411
cs=0xfbc;eip=0x000412; __disp=*(dw*)(raddr(cs,m2c::kbto_branches+bx));
	R(JMP(__dispatch_call));	// 27637 jmp     word ptr cs:bto_branches[bx] ; switch jump ;~ 0FBC:0412
code_bto_sfline:
	// 6140 
cs=0xfbc;eip=0x000418; 	T(CMP(byte_44889, 0));	// 27643 cmp     byte_44889, 0   ; jumptable 0001E5B2 case 0 ;~ 0FBC:0418
cs=0xfbc;eip=0x00041d; 	R(JNZ(code_bto_road));	// 27644 jnz     short code_bto_road ; jumptable 0001E5B2 case 1 ;~ 0FBC:041D
cs=0xfbc;eip=0x00041f; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 27645 cmp     [bp+var_2C], 0 ;~ 0FBC:041F
cs=0xfbc;eip=0x000423; 	R(JLE(code_bto_road));	// 27646 jle     short code_bto_road ; jumptable 0001E5B2 case 1 ;~ 0FBC:0423
cs=0xfbc;eip=0x000425; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x0FE84));	// 27647 cmp     [bp+var_28], 0FE84h ;~ 0FBC:0425
cs=0xfbc;eip=0x00042a; 	R(JGE(loc_1e5d4));	// 27648 jge     short loc_1E5D4 ;~ 0FBC:042A
cs=0xfbc;eip=0x00042c; 	X(MOV(planindex, 0x83));	// 27649 mov     planindex, 83h ; 'É' ;~ 0FBC:042C
cs=0xfbc;eip=0x000432; 	R(JMP(code_bto_road));	// 27650 jmp     short code_bto_road ; jumptable 0001E5B2 case 1 ;~ 0FBC:0432
loc_1e5d4:
	// 6141 
cs=0xfbc;eip=0x000434; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x0FED4));	// 27654 cmp     [bp+var_28], 0FED4h ;~ 0FBC:0434
cs=0xfbc;eip=0x000439; 	R(JGE(code_bto_road));	// 27655 jge     short code_bto_road ; jumptable 0001E5B2 case 1 ;~ 0FBC:0439
cs=0xfbc;eip=0x00043b; 	X(MOV(planindex, 0x84));	// 27656 mov     planindex, 84h ; 'Ñ' ;~ 0FBC:043B
code_bto_road:
	// 6142 
cs=0xfbc;eip=0x000441; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 27660 cmp     [bp+var_32], 78h ; 'x' ; jumptable 0001E5B2 case 1 ;~ 0FBC:0441
loc_1e5e5:
	// 6143 
cs=0xfbc;eip=0x000445; 	R(JL(code_set_pavement));	// 27664 jl      short code_set_pavement ;~ 0FBC:0445
cs=0xfbc;eip=0x000447; 	R(JMP(code_bto_blank));	// 27665 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0447
code_set_pavement:
	// 6144 
cs=0xfbc;eip=0x00044a; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 27670 mov     al, [bp+var_12] ;~ 0FBC:044A
cs=0xfbc;eip=0x00044d; 	X(MOV(current_surf_type, al));	// 27671 mov     current_surf_type, al ;~ 0FBC:044D
cs=0xfbc;eip=0x000450; 	R(JMP(code_bto_blank));	// 27672 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0450
code_bto_crossroad:
	// 6145 
cs=0xfbc;eip=0x000454; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 27678 cmp     [bp+var_32], 78h ; 'x' ; jumptable 0001E5B2 case 12 ;~ 0FBC:0454
cs=0xfbc;eip=0x000458; 	R(JL(code_set_pavement));	// 27679 jl      short code_set_pavement ;~ 0FBC:0458
cs=0xfbc;eip=0x00045a; 	T(CMP(*(dw*)(raddr(ss,bp+var_2e)), 0x78));	// 27680 cmp     [bp+var_2E], 78h ; 'x' ;~ 0FBC:045A
cs=0xfbc;eip=0x00045e; 	R(JMP(loc_1e5e5));	// 27681 jmp     short loc_1E5E5 ;~ 0FBC:045E
code_bto_chicanelr:
	// 6146 
cs=0xfbc;eip=0x000460; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27686 mov     ax, [bp+var_2C] ; jumptable 0001E5B2 case 5 ;~ 0FBC:0460
cs=0xfbc;eip=0x000463; 	T(NEG(ax));	// 27687 neg     ax ;~ 0FBC:0463
cs=0xfbc;eip=0x000465; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 27688 mov     [bp+var_2C], ax ;~ 0FBC:0465
code_bto_chicanerl:
	// 6147 
cs=0xfbc;eip=0x000468; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 27692 mov     al, [bp+var_12] ; jumptable 0001E5B2 case 4 ;~ 0FBC:0468
cs=0xfbc;eip=0x00046b; 	X(MOV(current_surf_type, al));	// 27693 mov     current_surf_type, al ;~ 0FBC:046B
cs=0xfbc;eip=0x00046e; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 27694 cmp     [bp+var_2C], 0 ;~ 0FBC:046E
cs=0xfbc;eip=0x000472; 	R(JLE(code_bto_lcorner));	// 27695 jle     short code_bto_lCorner ; jumptable 0001E5B2 case 3 ;~ 0FBC:0472
cs=0xfbc;eip=0x000474; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27696 mov     ax, [bp+var_28] ;~ 0FBC:0474
cs=0xfbc;eip=0x000477; 	T(NEG(ax));	// 27697 neg     ax ;~ 0FBC:0477
cs=0xfbc;eip=0x000479; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 27698 mov     [bp+var_28], ax ;~ 0FBC:0479
cs=0xfbc;eip=0x00047c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27699 mov     ax, [bp+var_2C] ;~ 0FBC:047C
cs=0xfbc;eip=0x00047f; 	T(NEG(ax));	// 27700 neg     ax ;~ 0FBC:047F
cs=0xfbc;eip=0x000481; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 27701 mov     [bp+var_2C], ax ;~ 0FBC:0481
code_bto_lcorner:
	// 6148 
cs=0xfbc;eip=0x000484; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27705 mov     ax, [bp+var_28] ; jumptable 0001E5B2 case 3 ;~ 0FBC:0484
cs=0xfbc;eip=0x000487; 	T(ADD(ah, 4));	// 27706 add     ah, 4 ;~ 0FBC:0487
cs=0xfbc;eip=0x00048a; 	X(PUSH(ax));	// 27707 push    ax ;~ 0FBC:048A
cs=0xfbc;eip=0x00048b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27708 mov     ax, [bp+var_2C] ;~ 0FBC:048B
cs=0xfbc;eip=0x00048e; 	T(ADD(ah, 4));	// 27709 add     ah, 4 ;~ 0FBC:048E
code_lcorner_radius:
	// 6149 
cs=0xfbc;eip=0x000491; 	X(PUSH(ax));	// 27712 push    ax ;~ 0FBC:0491
cs=0xfbc;eip=0x000492; 	R(CALLF(polarradius2d,0));	// 27713 call    polarRadius2D ;~ 0FBC:0492
cs=0xfbc;eip=0x000497; 	T(ADD(sp, 4));	// 27714 add     sp, 4 ;~ 0FBC:0497
cs=0xfbc;eip=0x00049a; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 27715 mov     [bp+var_A], ax ;~ 0FBC:049A
cs=0xfbc;eip=0x00049d; 	T(CMP(ax, 0x588));	// 27716 cmp     ax, 588h ;~ 0FBC:049D
cs=0xfbc;eip=0x0004a0; 	R(JG(loc_1e645));	// 27717 jg      short loc_1E645 ;~ 0FBC:04A0
cs=0xfbc;eip=0x0004a2; 	R(JMP(code_bto_blank));	// 27718 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:04A2
loc_1e645:
	// 6150 
cs=0xfbc;eip=0x0004a5; 	T(CMP(ax, 0x678));	// 27722 cmp     ax, 678h ;~ 0FBC:04A5
cs=0xfbc;eip=0x0004a8; 	R(JMP(loc_1e5e5));	// 27723 jmp     short loc_1E5E5 ;~ 0FBC:04A8
code_bto_ssplita:
	// 6151 
cs=0xfbc;eip=0x0004aa; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 27728 cmp     [bp+var_32], 78h ; 'x' ; jumptable 0001E5B2 case 6 ;~ 0FBC:04AA
cs=0xfbc;eip=0x0004ae; 	R(JL(code_set_pavement));	// 27729 jl      short code_set_pavement ;~ 0FBC:04AE
code_bto_scorner:
	// 6152 
cs=0xfbc;eip=0x0004b0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27733 mov     ax, [bp+var_28] ; jumptable 0001E5B2 case 2 ;~ 0FBC:04B0
cs=0xfbc;eip=0x0004b3; 	T(ADD(ah, 2));	// 27734 add     ah, 2 ;~ 0FBC:04B3
cs=0xfbc;eip=0x0004b6; 	X(PUSH(ax));	// 27735 push    ax ;~ 0FBC:04B6
cs=0xfbc;eip=0x0004b7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27736 mov     ax, [bp+var_2C] ;~ 0FBC:04B7
cs=0xfbc;eip=0x0004ba; 	T(ADD(ah, 2));	// 27737 add     ah, 2 ;~ 0FBC:04BA
code_scorner_radius:
	// 6153 
cs=0xfbc;eip=0x0004bd; 	X(PUSH(ax));	// 27740 push    ax ;~ 0FBC:04BD
cs=0xfbc;eip=0x0004be; 	R(CALLF(polarradius2d,0));	// 27741 call    polarRadius2D ;~ 0FBC:04BE
cs=0xfbc;eip=0x0004c3; 	T(ADD(sp, 4));	// 27742 add     sp, 4 ;~ 0FBC:04C3
cs=0xfbc;eip=0x0004c6; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 27743 mov     [bp+var_A], ax ;~ 0FBC:04C6
cs=0xfbc;eip=0x0004c9; 	T(CMP(ax, 0x188));	// 27744 cmp     ax, 188h ;~ 0FBC:04C9
cs=0xfbc;eip=0x0004cc; 	R(JG(loc_1e671));	// 27745 jg      short loc_1E671 ;~ 0FBC:04CC
cs=0xfbc;eip=0x0004ce; 	R(JMP(code_bto_blank));	// 27746 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:04CE
loc_1e671:
	// 6154 
cs=0xfbc;eip=0x0004d1; 	T(CMP(ax, 0x278));	// 27750 cmp     ax, 278h ;~ 0FBC:04D1
cs=0xfbc;eip=0x0004d4; 	R(JMP(loc_1e5e5));	// 27751 jmp     loc_1E5E5 ;~ 0FBC:04D4
code_bto_ssplitb:
	// 6155 
cs=0xfbc;eip=0x0004d8; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 27757 cmp     [bp+var_32], 78h ; 'x' ; jumptable 0001E5B2 case 7 ;~ 0FBC:04D8
cs=0xfbc;eip=0x0004dc; 	R(JGE(loc_1e681));	// 27758 jge     short loc_1E681 ;~ 0FBC:04DC
cs=0xfbc;eip=0x0004de; 	R(JMP(code_set_pavement));	// 27759 jmp     code_set_pavement ;~ 0FBC:04DE
loc_1e681:
	// 6156 
cs=0xfbc;eip=0x0004e1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27763 mov     ax, [bp+var_28] ;~ 0FBC:04E1
cs=0xfbc;eip=0x0004e4; 	T(ADD(ah, 2));	// 27764 add     ah, 2 ;~ 0FBC:04E4
cs=0xfbc;eip=0x0004e7; 	X(PUSH(ax));	// 27765 push    ax ;~ 0FBC:04E7
cs=0xfbc;eip=0x0004e8; 	T(MOV(ax, 0x200));	// 27766 mov     ax, 200h ;~ 0FBC:04E8
cs=0xfbc;eip=0x0004eb; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27767 sub     ax, [bp+var_2C] ;~ 0FBC:04EB
cs=0xfbc;eip=0x0004ee; 	R(JMP(code_scorner_radius));	// 27768 jmp     short code_sCorner_radius ;~ 0FBC:04EE
code_bto_lsplita:
	// 6157 
cs=0xfbc;eip=0x0004f0; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x188));	// 27773 cmp     [bp+var_2C], 188h ; jumptable 0001E5B2 case 8 ;~ 0FBC:04F0
cs=0xfbc;eip=0x0004f5; 	R(JL(code_bto_lcorner));	// 27774 jl      short code_bto_lCorner ; jumptable 0001E5B2 case 3 ;~ 0FBC:04F5
cs=0xfbc;eip=0x0004f7; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x278));	// 27775 cmp     [bp+var_2C], 278h ;~ 0FBC:04F7
cs=0xfbc;eip=0x0004fc; 	R(JG(loc_1e6a1));	// 27776 jg      short loc_1E6A1 ;~ 0FBC:04FC
cs=0xfbc;eip=0x0004fe; 	R(JMP(code_set_pavement));	// 27777 jmp     code_set_pavement ;~ 0FBC:04FE
loc_1e6a1:
	// 6158 
cs=0xfbc;eip=0x000501; 	R(JMP(code_bto_lcorner));	// 27781 jmp     short code_bto_lCorner ; jumptable 0001E5B2 case 3 ;~ 0FBC:0501
code_bto_lsplitb:
	// 6159 
cs=0xfbc;eip=0x000504; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FD88));	// 27787 cmp     [bp+var_2C], 0FD88h ; jumptable 0001E5B2 case 9 ;~ 0FBC:0504
cs=0xfbc;eip=0x000509; 	R(JL(loc_1e6b5));	// 27788 jl      short loc_1E6B5 ;~ 0FBC:0509
cs=0xfbc;eip=0x00050b; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FE78));	// 27789 cmp     [bp+var_2C], 0FE78h ;~ 0FBC:050B
cs=0xfbc;eip=0x000510; 	R(JG(loc_1e6b5));	// 27790 jg      short loc_1E6B5 ;~ 0FBC:0510
cs=0xfbc;eip=0x000512; 	R(JMP(code_set_pavement));	// 27791 jmp     code_set_pavement ;~ 0FBC:0512
loc_1e6b5:
	// 6160 
cs=0xfbc;eip=0x000515; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27796 mov     ax, [bp+var_28] ;~ 0FBC:0515
cs=0xfbc;eip=0x000518; 	T(ADD(ah, 4));	// 27797 add     ah, 4 ;~ 0FBC:0518
cs=0xfbc;eip=0x00051b; 	X(PUSH(ax));	// 27798 push    ax ;~ 0FBC:051B
cs=0xfbc;eip=0x00051c; 	T(MOV(ax, 0x400));	// 27799 mov     ax, 400h ;~ 0FBC:051C
cs=0xfbc;eip=0x00051f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27800 sub     ax, [bp+var_2C] ;~ 0FBC:051F
cs=0xfbc;eip=0x000522; 	R(JMP(code_lcorner_radius));	// 27801 jmp     code_lCorner_radius ;~ 0FBC:0522
code_bto_highentrance:
	// 6161 
cs=0xfbc;eip=0x000526; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 27807 cmp     [bp+var_2C], 0  ; jumptable 0001E5B2 case 10 ;~ 0FBC:0526
cs=0xfbc;eip=0x00052a; 	R(JGE(loc_1e6d4));	// 27808 jge     short loc_1E6D4 ;~ 0FBC:052A
cs=0xfbc;eip=0x00052c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27809 mov     ax, [bp+var_2C] ;~ 0FBC:052C
cs=0xfbc;eip=0x00052f; 	T(NEG(ax));	// 27810 neg     ax ;~ 0FBC:052F
cs=0xfbc;eip=0x000531; 	R(JMP(loc_1e6d7));	// 27811 jmp     short loc_1E6D7 ;~ 0FBC:0531
loc_1e6d4:
	// 6162 
cs=0xfbc;eip=0x000534; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 27816 mov     ax, [bp+var_2C] ;~ 0FBC:0534
loc_1e6d7:
	// 6163 
cs=0xfbc;eip=0x000537; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 27819 mov     [bp+var_1C], ax ;~ 0FBC:0537
cs=0xfbc;eip=0x00053a; 	T(SUB(si, si));	// 27820 sub     si, si ;~ 0FBC:053A
cs=0xfbc;eip=0x00053c; 	R(JMP(loc_1e6df));	// 27821 jmp     short loc_1E6DF ;~ 0FBC:053C
loc_1e6de:
	// 6164 
cs=0xfbc;eip=0x00053e; 	T(INC(si));	// 27825 inc     si ;~ 0FBC:053E
loc_1e6df:
	// 6165 
cs=0xfbc;eip=0x00053f; 	T(MOV(bx, si));	// 27828 mov     bx, si ;~ 0FBC:053F
cs=0xfbc;eip=0x000541; 	T(SHL(bx, 1));	// 27829 shl     bx, 1 ;~ 0FBC:0541
cs=0xfbc;eip=0x000543; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27830 mov     ax, [bp+var_28] ;~ 0FBC:0543
cs=0xfbc;eip=0x000546; 	T(CMP(*(dw*)(((db*)&highentrzbounds1)+bx), ax));	// 27831 cmp     highEntrZBounds1[bx], ax ;~ 0FBC:0546
cs=0xfbc;eip=0x00054a; 	R(JL(loc_1e6de));	// 27832 jl      short loc_1E6DE ;~ 0FBC:054A
cs=0xfbc;eip=0x00054c; 	T(MOV(di, si));	// 27833 mov     di, si ;~ 0FBC:054C
cs=0xfbc;eip=0x00054e; 	T(SHL(di, 1));	// 27834 shl     di, 1 ;~ 0FBC:054E
cs=0xfbc;eip=0x000550; 	T(MOV(ax, *(dw*)(((db*)&highentrxinnbounds0)+di)));	// 27835 mov     ax, highEntrXInnBounds0[di] ;~ 0FBC:0550
cs=0xfbc;eip=0x000554; 	T(CMP(*(dw*)(((db*)&highentrxinnbounds1)+di), ax));	// 27836 cmp     highEntrXInnBounds1[di], ax ;~ 0FBC:0554
cs=0xfbc;eip=0x000558; 	R(JZ(loc_1e72e));	// 27837 jz      short loc_1E72E ;~ 0FBC:0558
cs=0xfbc;eip=0x00055a; 	T(MOV(di, si));	// 27838 mov     di, si ;~ 0FBC:055A
cs=0xfbc;eip=0x00055c; 	T(SHL(di, 1));	// 27839 shl     di, 1 ;~ 0FBC:055C
cs=0xfbc;eip=0x00055e; 	T(MOV(ax, *(dw*)(((db*)&highentrzbounds1)+di)));	// 27840 mov     ax, highEntrZBounds1[di] ;~ 0FBC:055E
cs=0xfbc;eip=0x000562; 	T(SUB(ax, *(dw*)(((db*)&highentrzbounds0)+di)));	// 27841 sub     ax, highEntrZBounds0[di] ;~ 0FBC:0562
cs=0xfbc;eip=0x000566; 	T(CWD);	// 27842 cwd ;~ 0FBC:0566
cs=0xfbc;eip=0x000567; 	X(PUSH(dx));	// 27843 push    dx ;~ 0FBC:0567
cs=0xfbc;eip=0x000568; 	X(PUSH(ax));	// 27844 push    ax ;~ 0FBC:0568
cs=0xfbc;eip=0x000569; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27845 mov     ax, [bp+var_28] ;~ 0FBC:0569
cs=0xfbc;eip=0x00056c; 	T(SUB(ax, *(dw*)(((db*)&highentrzbounds0)+di)));	// 27846 sub     ax, highEntrZBounds0[di] ;~ 0FBC:056C
cs=0xfbc;eip=0x000570; 	T(CWD);	// 27847 cwd ;~ 0FBC:0570
cs=0xfbc;eip=0x000571; 	X(PUSH(dx));	// 27848 push    dx ;~ 0FBC:0571
cs=0xfbc;eip=0x000572; 	X(PUSH(ax));	// 27849 push    ax ;~ 0FBC:0572
cs=0xfbc;eip=0x000573; 	T(MOV(ax, *(dw*)(((db*)&highentrxinnbounds1)+di)));	// 27850 mov     ax, highEntrXInnBounds1[di] ;~ 0FBC:0573
cs=0xfbc;eip=0x000577; 	T(SUB(ax, *(dw*)(((db*)&highentrxinnbounds0)+di)));	// 27851 sub     ax, highEntrXInnBounds0[di] ;~ 0FBC:0577
cs=0xfbc;eip=0x00057b; 	T(CWD);	// 27852 cwd ;~ 0FBC:057B
cs=0xfbc;eip=0x00057c; 	X(PUSH(dx));	// 27853 push    dx ;~ 0FBC:057C
cs=0xfbc;eip=0x00057d; 	X(PUSH(ax));	// 27854 push    ax ;~ 0FBC:057D
cs=0xfbc;eip=0x00057e; 	R(CALLF(__aflmul,0));	// 27855 call    __aFlmul ;~ 0FBC:057E
cs=0xfbc;eip=0x000583; 	X(PUSH(dx));	// 27856 push    dx ;~ 0FBC:0583
cs=0xfbc;eip=0x000584; 	X(PUSH(ax));	// 27857 push    ax ;~ 0FBC:0584
cs=0xfbc;eip=0x000585; 	R(CALLF(__afldiv,0));	// 27858 call    __aFldiv ;~ 0FBC:0585
cs=0xfbc;eip=0x00058a; 	T(ADD(ax, *(dw*)(((db*)&highentrxinnbounds0)+di)));	// 27859 add     ax, highEntrXInnBounds0[di] ;~ 0FBC:058A
loc_1e72e:
	// 6166 
cs=0xfbc;eip=0x00058e; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 27862 mov     [bp+var_1E], ax ;~ 0FBC:058E
cs=0xfbc;eip=0x000591; 	T(MOV(di, si));	// 27863 mov     di, si ;~ 0FBC:0591
cs=0xfbc;eip=0x000593; 	T(SHL(di, 1));	// 27864 shl     di, 1 ;~ 0FBC:0593
cs=0xfbc;eip=0x000595; 	T(MOV(ax, *(dw*)(((db*)&highentrxoutbounds0)+di)));	// 27865 mov     ax, highEntrXOutBounds0[di] ;~ 0FBC:0595
cs=0xfbc;eip=0x000599; 	T(CMP(*(dw*)(((db*)&highentrxoutbounds1)+di), ax));	// 27866 cmp     highEntrXOutBounds1[di], ax ;~ 0FBC:0599
cs=0xfbc;eip=0x00059d; 	R(JZ(loc_1e773));	// 27867 jz      short loc_1E773 ;~ 0FBC:059D
cs=0xfbc;eip=0x00059f; 	T(MOV(di, si));	// 27868 mov     di, si ;~ 0FBC:059F
cs=0xfbc;eip=0x0005a1; 	T(SHL(di, 1));	// 27869 shl     di, 1 ;~ 0FBC:05A1
cs=0xfbc;eip=0x0005a3; 	T(MOV(ax, *(dw*)(((db*)&highentrzbounds1)+di)));	// 27870 mov     ax, highEntrZBounds1[di] ;~ 0FBC:05A3
cs=0xfbc;eip=0x0005a7; 	T(SUB(ax, *(dw*)(((db*)&highentrzbounds0)+di)));	// 27871 sub     ax, highEntrZBounds0[di] ;~ 0FBC:05A7
cs=0xfbc;eip=0x0005ab; 	T(CWD);	// 27872 cwd ;~ 0FBC:05AB
cs=0xfbc;eip=0x0005ac; 	X(PUSH(dx));	// 27873 push    dx ;~ 0FBC:05AC
cs=0xfbc;eip=0x0005ad; 	X(PUSH(ax));	// 27874 push    ax ;~ 0FBC:05AD
cs=0xfbc;eip=0x0005ae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 27875 mov     ax, [bp+var_28] ;~ 0FBC:05AE
cs=0xfbc;eip=0x0005b1; 	T(SUB(ax, *(dw*)(((db*)&highentrzbounds0)+di)));	// 27876 sub     ax, highEntrZBounds0[di] ;~ 0FBC:05B1
cs=0xfbc;eip=0x0005b5; 	T(CWD);	// 27877 cwd ;~ 0FBC:05B5
cs=0xfbc;eip=0x0005b6; 	X(PUSH(dx));	// 27878 push    dx ;~ 0FBC:05B6
cs=0xfbc;eip=0x0005b7; 	X(PUSH(ax));	// 27879 push    ax ;~ 0FBC:05B7
cs=0xfbc;eip=0x0005b8; 	T(MOV(ax, *(dw*)(((db*)&highentrxoutbounds1)+di)));	// 27880 mov     ax, highEntrXOutBounds1[di] ;~ 0FBC:05B8
cs=0xfbc;eip=0x0005bc; 	T(SUB(ax, *(dw*)(((db*)&highentrxoutbounds0)+di)));	// 27881 sub     ax, highEntrXOutBounds0[di] ;~ 0FBC:05BC
cs=0xfbc;eip=0x0005c0; 	T(CWD);	// 27882 cwd ;~ 0FBC:05C0
cs=0xfbc;eip=0x0005c1; 	X(PUSH(dx));	// 27883 push    dx ;~ 0FBC:05C1
cs=0xfbc;eip=0x0005c2; 	X(PUSH(ax));	// 27884 push    ax ;~ 0FBC:05C2
cs=0xfbc;eip=0x0005c3; 	R(CALLF(__aflmul,0));	// 27885 call    __aFlmul ;~ 0FBC:05C3
cs=0xfbc;eip=0x0005c8; 	X(PUSH(dx));	// 27886 push    dx ;~ 0FBC:05C8
cs=0xfbc;eip=0x0005c9; 	X(PUSH(ax));	// 27887 push    ax ;~ 0FBC:05C9
cs=0xfbc;eip=0x0005ca; 	R(CALLF(__afldiv,0));	// 27888 call    __aFldiv ;~ 0FBC:05CA
cs=0xfbc;eip=0x0005cf; 	T(ADD(ax, *(dw*)(((db*)&highentrxoutbounds0)+di)));	// 27889 add     ax, highEntrXOutBounds0[di] ;~ 0FBC:05CF
loc_1e773:
	// 6167 
cs=0xfbc;eip=0x0005d3; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 27892 mov     [bp+var_22], ax ;~ 0FBC:05D3
cs=0xfbc;eip=0x0005d6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 27893 mov     ax, [bp+var_1E] ;~ 0FBC:05D6
cs=0xfbc;eip=0x0005d9; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 27894 cmp     [bp+var_1C], ax ;~ 0FBC:05D9
cs=0xfbc;eip=0x0005dc; 	R(JLE(loc_1e789));	// 27895 jle     short loc_1E789 ;~ 0FBC:05DC
cs=0xfbc;eip=0x0005de; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 27896 mov     ax, [bp+var_22] ;~ 0FBC:05DE
cs=0xfbc;eip=0x0005e1; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 27897 cmp     [bp+var_1C], ax ;~ 0FBC:05E1
cs=0xfbc;eip=0x0005e4; 	R(JGE(loc_1e789));	// 27898 jge     short loc_1E789 ;~ 0FBC:05E4
cs=0xfbc;eip=0x0005e6; 	R(JMP(code_set_pavement));	// 27899 jmp     code_set_pavement ;~ 0FBC:05E6
loc_1e789:
	// 6168 
cs=0xfbc;eip=0x0005e9; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0));	// 27904 cmp     [bp+var_28], 0 ;~ 0FBC:05E9
cs=0xfbc;eip=0x0005ed; 	R(JGE(loc_1e792));	// 27905 jge     short loc_1E792 ;~ 0FBC:05ED
cs=0xfbc;eip=0x0005ef; 	R(JMP(code_bto_blank));	// 27906 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:05EF
loc_1e792:
	// 6169 
cs=0xfbc;eip=0x0005f2; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), 0x78));	// 27910 cmp     [bp+var_1C], 78h ; 'x' ;~ 0FBC:05F2
cs=0xfbc;eip=0x0005f6; 	R(JLE(loc_1e79b));	// 27911 jle     short loc_1E79B ;~ 0FBC:05F6
cs=0xfbc;eip=0x0005f8; 	R(JMP(code_bto_blank));	// 27912 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:05F8
loc_1e79b:
	// 6170 
cs=0xfbc;eip=0x0005fb; 	X(MOV(planindex, 1));	// 27916 mov     planindex, 1 ;~ 0FBC:05FB
cs=0xfbc;eip=0x000601; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x14E));	// 27917 cmp     [bp+var_28], 14Eh ;~ 0FBC:0601
cs=0xfbc;eip=0x000606; 	R(JL(loc_1e7c0));	// 27918 jl      short loc_1E7C0 ;~ 0FBC:0606
cs=0xfbc;eip=0x000608; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF88));	// 27919 cmp     [bp+var_18], 0FF88h ;~ 0FBC:0608
cs=0xfbc;eip=0x00060c; 	R(JLE(loc_1e7f9));	// 27920 jle     short loc_1E7F9 ;~ 0FBC:060C
loc_1e7ae:
	// 6171 
cs=0xfbc;eip=0x00060e; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x78));	// 27923 cmp     [bp+var_18], 78h ; 'x' ;~ 0FBC:060E
cs=0xfbc;eip=0x000612; 	R(JGE(loc_1e7b7));	// 27924 jge     short loc_1E7B7 ;~ 0FBC:0612
cs=0xfbc;eip=0x000614; 	R(JMP(code_bto_blank));	// 27925 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0614
loc_1e7b7:
	// 6172 
cs=0xfbc;eip=0x000617; 	X(MOV(wallindex, 0x0BA));	// 27929 mov     wallindex, 0BAh ; '∫' ;~ 0FBC:0617
cs=0xfbc;eip=0x00061d; 	R(JMP(code_bto_blank));	// 27930 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:061D
loc_1e7c0:
	// 6173 
cs=0xfbc;eip=0x000620; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 27934 cmp     [bp+var_18], 0 ;~ 0FBC:0620
cs=0xfbc;eip=0x000624; 	R(JL(loc_1e7d0));	// 27935 jl      short loc_1E7D0 ;~ 0FBC:0624
cs=0xfbc;eip=0x000626; 	X(MOV(wallindex, 0x0BB));	// 27936 mov     wallindex, 0BBh ; 'ª' ;~ 0FBC:0626
cs=0xfbc;eip=0x00062c; 	R(JMP(code_bto_blank));	// 27937 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:062C
loc_1e7d0:
	// 6174 
cs=0xfbc;eip=0x000630; 	X(MOV(wallindex, 0x0BD));	// 27942 mov     wallindex, 0BDh ; 'Ω' ;~ 0FBC:0630
cs=0xfbc;eip=0x000636; 	R(JMP(code_bto_blank));	// 27943 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0636
code_bto_highway:
	// 6175 
cs=0xfbc;eip=0x00063a; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x168));	// 27949 cmp     [bp+var_32], 168h ; jumptable 0001E5B2 case 11 ;~ 0FBC:063A
cs=0xfbc;eip=0x00063f; 	R(JLE(loc_1e7e4));	// 27950 jle     short loc_1E7E4 ;~ 0FBC:063F
cs=0xfbc;eip=0x000641; 	R(JMP(code_bto_blank));	// 27951 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0641
loc_1e7e4:
	// 6176 
cs=0xfbc;eip=0x000644; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 27955 cmp     [bp+var_32], 78h ; 'x' ;~ 0FBC:0644
cs=0xfbc;eip=0x000648; 	R(JLE(loc_1e7ed));	// 27956 jle     short loc_1E7ED ;~ 0FBC:0648
cs=0xfbc;eip=0x00064a; 	R(JMP(code_set_pavement));	// 27957 jmp     code_set_pavement ;~ 0FBC:064A
loc_1e7ed:
	// 6177 
cs=0xfbc;eip=0x00064d; 	X(MOV(planindex, 1));	// 27961 mov     planindex, 1 ;~ 0FBC:064D
cs=0xfbc;eip=0x000653; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF88));	// 27962 cmp     [bp+var_18], 0FF88h ;~ 0FBC:0653
cs=0xfbc;eip=0x000657; 	R(JG(loc_1e7ae));	// 27963 jg      short loc_1E7AE ;~ 0FBC:0657
loc_1e7f9:
	// 6178 
cs=0xfbc;eip=0x000659; 	X(MOV(wallindex, 0x0BC));	// 27966 mov     wallindex, 0BCh ; 'º' ;~ 0FBC:0659
cs=0xfbc;eip=0x00065f; 	R(JMP(code_bto_blank));	// 27967 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:065F
code_bto_ramp:
	// 6179 
cs=0xfbc;eip=0x000662; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0));	// 27972 cmp     [bp+var_28], 0  ; jumptable 0001E5B2 case 16 ;~ 0FBC:0662
cs=0xfbc;eip=0x000666; 	R(JLE(loc_1e810));	// 27973 jle     short loc_1E810 ;~ 0FBC:0666
cs=0xfbc;eip=0x000668; 	X(MOV(byte_4392c, 0));	// 27974 mov     byte_4392C, 0 ;~ 0FBC:0668
cs=0xfbc;eip=0x00066d; 	R(JMP(loc_1e82b));	// 27975 jmp     short loc_1E82B ;~ 0FBC:066D
loc_1e810:
	// 6180 
cs=0xfbc;eip=0x000670; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0));	// 27980 cmp     [bp+var_14], 0 ;~ 0FBC:0670
cs=0xfbc;eip=0x000674; 	R(JL(loc_1e82b));	// 27981 jl      short loc_1E82B ;~ 0FBC:0674
cs=0xfbc;eip=0x000676; 	X(MOV(wallindex, 0x66));	// 27982 mov     wallindex, 66h ; 'f' ;~ 0FBC:0676
cs=0xfbc;eip=0x00067c; 	R(JMP(loc_1e82b));	// 27983 jmp     short loc_1E82B ;~ 0FBC:067C
code_bto_solidramp:
	// 6181 
cs=0xfbc;eip=0x00067e; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x1DC));	// 27988 cmp     [bp+var_14], 1DCh ; jumptable 0001E5B2 case 17 ;~ 0FBC:067E
cs=0xfbc;eip=0x000683; 	R(JL(loc_1e82b));	// 27989 jl      short loc_1E82B ;~ 0FBC:0683
cs=0xfbc;eip=0x000685; 	X(MOV(wallindex, 0x67));	// 27990 mov     wallindex, 67h ; 'g' ;~ 0FBC:0685
loc_1e82b:
	// 6182 
cs=0xfbc;eip=0x00068b; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 27994 cmp     [bp+var_18], 0 ;~ 0FBC:068B
cs=0xfbc;eip=0x00068f; 	R(JGE(loc_1e838));	// 27995 jge     short loc_1E838 ;~ 0FBC:068F
cs=0xfbc;eip=0x000691; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 27996 mov     ax, [bp+var_18] ;~ 0FBC:0691
cs=0xfbc;eip=0x000694; 	T(NEG(ax));	// 27997 neg     ax ;~ 0FBC:0694
cs=0xfbc;eip=0x000696; 	R(JMP(loc_1e83b));	// 27998 jmp     short loc_1E83B ;~ 0FBC:0696
loc_1e838:
	// 6183 
cs=0xfbc;eip=0x000698; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 28002 mov     ax, [bp+var_18] ;~ 0FBC:0698
loc_1e83b:
	// 6184 
cs=0xfbc;eip=0x00069b; 	T(CMP(ax, 0x78));	// 28005 cmp     ax, 78h ; 'x' ;~ 0FBC:069B
cs=0xfbc;eip=0x00069e; 	R(JGE(loc_1e886));	// 28006 jge     short loc_1E886 ;~ 0FBC:069E
cs=0xfbc;eip=0x0006a0; 	X(MOV(planindex, 3));	// 28007 mov     planindex, 3 ;~ 0FBC:06A0
cs=0xfbc;eip=0x0006a6; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 28008 mov     al, [bp+var_12] ;~ 0FBC:06A6
cs=0xfbc;eip=0x0006a9; 	X(MOV(current_surf_type, al));	// 28009 mov     current_surf_type, al ;~ 0FBC:06A9
cs=0xfbc;eip=0x0006ac; 	T(CMP(wallindex, 0x0FFFF));	// 28010 cmp     wallindex, 0FFFFh ;~ 0FBC:06AC
cs=0xfbc;eip=0x0006b1; 	R(JZ(loc_1e856));	// 28011 jz      short loc_1E856 ;~ 0FBC:06B1
cs=0xfbc;eip=0x0006b3; 	R(JMP(code_bto_blank));	// 28012 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:06B3
loc_1e856:
	// 6185 
cs=0xfbc;eip=0x0006b6; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0));	// 28016 cmp     [bp+var_28], 0 ;~ 0FBC:06B6
cs=0xfbc;eip=0x0006ba; 	R(JGE(loc_1e85f));	// 28017 jge     short loc_1E85F ;~ 0FBC:06BA
cs=0xfbc;eip=0x0006bc; 	R(JMP(code_bto_blank));	// 28018 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:06BC
loc_1e85f:
	// 6186 
cs=0xfbc;eip=0x0006bf; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 28022 cmp     [bp+var_32], 78h ; 'x' ;~ 0FBC:06BF
cs=0xfbc;eip=0x0006c3; 	R(JGE(loc_1e868));	// 28023 jge     short loc_1E868 ;~ 0FBC:06C3
cs=0xfbc;eip=0x0006c5; 	R(JMP(code_bto_blank));	// 28024 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:06C5
loc_1e868:
	// 6187 
cs=0xfbc;eip=0x0006c8; 	X(MOV(wallheight, 0x2A));	// 28028 mov     wallHeight, 2Ah ; '*' ;~ 0FBC:06C8
cs=0xfbc;eip=0x0006ce; 	X(MOV(elrdwallrelated, 0x0FFF4));	// 28029 mov     elRdWallRelated, 0FFF4h ;~ 0FBC:06CE
cs=0xfbc;eip=0x0006d4; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 28030 cmp     [bp+var_2C], 0 ;~ 0FBC:06D4
cs=0xfbc;eip=0x0006d8; 	R(JGE(loc_1e87d));	// 28031 jge     short loc_1E87D ;~ 0FBC:06D8
cs=0xfbc;eip=0x0006da; 	R(JMP(loc_1e96f));	// 28032 jmp     loc_1E96F ;~ 0FBC:06DA
loc_1e87d:
	// 6188 
cs=0xfbc;eip=0x0006dd; 	X(MOV(wallindex, 0x65));	// 28037 mov     wallindex, 65h ; 'e' ;~ 0FBC:06DD
cs=0xfbc;eip=0x0006e3; 	R(JMP(code_bto_blank));	// 28038 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:06E3
loc_1e886:
	// 6189 
cs=0xfbc;eip=0x0006e6; 	T(CMP(byte_4392c, 0));	// 28042 cmp     byte_4392C, 0 ;~ 0FBC:06E6
cs=0xfbc;eip=0x0006eb; 	R(JNZ(loc_1e890));	// 28043 jnz     short loc_1E890 ;~ 0FBC:06EB
cs=0xfbc;eip=0x0006ed; 	R(JMP(code_bto_blank));	// 28044 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:06ED
loc_1e890:
	// 6190 
cs=0xfbc;eip=0x0006f0; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 28048 cmp     [bp+var_32], 78h ; 'x' ;~ 0FBC:06F0
cs=0xfbc;eip=0x0006f4; 	R(JLE(loc_1e899));	// 28049 jle     short loc_1E899 ;~ 0FBC:06F4
cs=0xfbc;eip=0x0006f6; 	R(JMP(code_bto_blank));	// 28050 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:06F6
loc_1e899:
	// 6191 
cs=0xfbc;eip=0x0006f9; 	X(MOV(planindex, 3));	// 28054 mov     planindex, 3 ;~ 0FBC:06F9
cs=0xfbc;eip=0x0006ff; 	T(CMP(wallindex, 0x0FFFF));	// 28055 cmp     wallindex, 0FFFFh ;~ 0FBC:06FF
cs=0xfbc;eip=0x000704; 	R(JZ(loc_1e8a9));	// 28056 jz      short loc_1E8A9 ;~ 0FBC:0704
cs=0xfbc;eip=0x000706; 	R(JMP(code_bto_blank));	// 28057 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0706
loc_1e8a9:
	// 6192 
cs=0xfbc;eip=0x000709; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), 0x200));	// 28061 mov     [bp+var_38], 200h ;~ 0FBC:0709
loc_1e8ae:
	// 6193 
cs=0xfbc;eip=0x00070e; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 28064 cmp     [bp+var_2C], 0 ;~ 0FBC:070E
cs=0xfbc;eip=0x000712; 	R(JMP(loc_1e96a));	// 28065 jmp     loc_1E96A ;~ 0FBC:0712
code_bto_overpass:
	// 6194 
cs=0xfbc;eip=0x000716; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 28071 mov     bx, [bp+arg_0]  ; jumptable 0001E5B2 case 22 ;~ 0FBC:0716
cs=0xfbc;eip=0x000719; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 28072 mov     ax, [bx+2] ;~ 0FBC:0719
cs=0xfbc;eip=0x00071c; 	T(SUB(ax, terrainheight));	// 28073 sub     ax, terrainHeight ;~ 0FBC:071C
cs=0xfbc;eip=0x000720; 	T(CMP(ax, 0x186));	// 28074 cmp     ax, 186h ;~ 0FBC:0720
cs=0xfbc;eip=0x000723; 	R(JLE(loc_1e8d8));	// 28075 jle     short loc_1E8D8 ;~ 0FBC:0723
loc_1e8c5:
	// 6195 
cs=0xfbc;eip=0x000725; 	X(MOV(byte_4392c, 0));	// 28078 mov     byte_4392C, 0 ;~ 0FBC:0725
code_bto_solidroad:
	// 6196 
cs=0xfbc;eip=0x00072a; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 28082 cmp     [bp+var_18], 0  ; jumptable 0001E5B2 case 20 ;~ 0FBC:072A
cs=0xfbc;eip=0x00072e; 	R(JGE(loc_1e8f8));	// 28083 jge     short loc_1E8F8 ;~ 0FBC:072E
cs=0xfbc;eip=0x000730; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 28084 mov     ax, [bp+var_18] ;~ 0FBC:0730
cs=0xfbc;eip=0x000733; 	T(NEG(ax));	// 28085 neg     ax ;~ 0FBC:0733
cs=0xfbc;eip=0x000735; 	R(JMP(loc_1e8fb));	// 28086 jmp     short loc_1E8FB ;~ 0FBC:0735
loc_1e8d8:
	// 6197 
cs=0xfbc;eip=0x000738; 	T(CMP(*(dw*)(raddr(ss,bp+var_2e)), 0x78));	// 28091 cmp     [bp+var_2E], 78h ; 'x' ;~ 0FBC:0738
loc_1e8dc:
	// 6198 
cs=0xfbc;eip=0x00073c; 	R(JLE(loc_1e8e1));	// 28094 jle     short loc_1E8E1 ;~ 0FBC:073C
cs=0xfbc;eip=0x00073e; 	R(JMP(code_bto_blank));	// 28095 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:073E
loc_1e8e1:
	// 6199 
cs=0xfbc;eip=0x000741; 	R(JMP(code_set_pavement));	// 28099 jmp     code_set_pavement ;~ 0FBC:0741
code_bto_elevroad:
	// 6200 
cs=0xfbc;eip=0x000744; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 28104 mov     bx, [bp+arg_0]  ; jumptable 0001E5B2 cases 18,19 ;~ 0FBC:0744
cs=0xfbc;eip=0x000747; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 28105 mov     ax, [bx+2] ;~ 0FBC:0747
cs=0xfbc;eip=0x00074a; 	T(SUB(ax, terrainheight));	// 28106 sub     ax, terrainHeight ;~ 0FBC:074A
cs=0xfbc;eip=0x00074e; 	T(CMP(ax, 0x186));	// 28107 cmp     ax, 186h ;~ 0FBC:074E
cs=0xfbc;eip=0x000751; 	R(JG(loc_1e8f6));	// 28108 jg      short loc_1E8F6 ;~ 0FBC:0751
cs=0xfbc;eip=0x000753; 	R(JMP(code_bto_blank));	// 28109 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0753
loc_1e8f6:
	// 6201 
cs=0xfbc;eip=0x000756; 	R(JMP(loc_1e8c5));	// 28113 jmp     short loc_1E8C5 ;~ 0FBC:0756
loc_1e8f8:
	// 6202 
cs=0xfbc;eip=0x000758; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 28117 mov     ax, [bp+var_18] ;~ 0FBC:0758
loc_1e8fb:
	// 6203 
cs=0xfbc;eip=0x00075b; 	T(CMP(ax, 0x78));	// 28120 cmp     ax, 78h ; 'x' ;~ 0FBC:075B
cs=0xfbc;eip=0x00075e; 	R(JG(loc_1e942));	// 28121 jg      short loc_1E942 ;~ 0FBC:075E
cs=0xfbc;eip=0x000760; 	X(MOV(planindex, 2));	// 28122 mov     planindex, 2 ;~ 0FBC:0760
cs=0xfbc;eip=0x000766; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 28123 mov     al, [bp+var_12] ;~ 0FBC:0766
cs=0xfbc;eip=0x000769; 	X(MOV(current_surf_type, al));	// 28124 mov     current_surf_type, al ;~ 0FBC:0769
cs=0xfbc;eip=0x00076c; 	T(CMP(byte_4392c, 0));	// 28125 cmp     byte_4392C, 0 ;~ 0FBC:076C
cs=0xfbc;eip=0x000771; 	R(JZ(loc_1e92f));	// 28126 jz      short loc_1E92F ;~ 0FBC:0771
cs=0xfbc;eip=0x000773; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x1DC));	// 28127 cmp     [bp+var_14], 1DCh ;~ 0FBC:0773
cs=0xfbc;eip=0x000778; 	R(JL(loc_1e922));	// 28128 jl      short loc_1E922 ;~ 0FBC:0778
cs=0xfbc;eip=0x00077a; 	X(MOV(wallindex, 0x67));	// 28129 mov     wallindex, 67h ; 'g' ;~ 0FBC:077A
cs=0xfbc;eip=0x000780; 	R(JMP(loc_1e92f));	// 28130 jmp     short loc_1E92F ;~ 0FBC:0780
loc_1e922:
	// 6204 
cs=0xfbc;eip=0x000782; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FE24));	// 28134 cmp     [bp+var_14], 0FE24h ;~ 0FBC:0782
cs=0xfbc;eip=0x000787; 	R(JG(loc_1e92f));	// 28135 jg      short loc_1E92F ;~ 0FBC:0787
cs=0xfbc;eip=0x000789; 	X(MOV(wallindex, 0x68));	// 28136 mov     wallindex, 68h ; 'h' ;~ 0FBC:0789
loc_1e92f:
	// 6205 
cs=0xfbc;eip=0x00078f; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 28140 cmp     [bp+var_32], 78h ; 'x' ;~ 0FBC:078F
cs=0xfbc;eip=0x000793; 	R(JGE(loc_1e938));	// 28141 jge     short loc_1E938 ;~ 0FBC:0793
cs=0xfbc;eip=0x000795; 	R(JMP(code_bto_blank));	// 28142 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0795
loc_1e938:
	// 6206 
cs=0xfbc;eip=0x000798; 	X(MOV(wallheight, 0x2A));	// 28146 mov     wallHeight, 2Ah ; '*' ;~ 0FBC:0798
cs=0xfbc;eip=0x00079e; 	R(JMP(loc_1e8ae));	// 28147 jmp     loc_1E8AE ;~ 0FBC:079E
loc_1e942:
	// 6207 
cs=0xfbc;eip=0x0007a2; 	T(CMP(byte_4392c, 0));	// 28152 cmp     byte_4392C, 0 ;~ 0FBC:07A2
cs=0xfbc;eip=0x0007a7; 	R(JNZ(loc_1e94c));	// 28153 jnz     short loc_1E94C ;~ 0FBC:07A7
cs=0xfbc;eip=0x0007a9; 	R(JMP(code_bto_blank));	// 28154 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:07A9
loc_1e94c:
	// 6208 
cs=0xfbc;eip=0x0007ac; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 28158 cmp     [bp+var_32], 78h ; 'x' ;~ 0FBC:07AC
cs=0xfbc;eip=0x0007b0; 	R(JLE(loc_1e955));	// 28159 jle     short loc_1E955 ;~ 0FBC:07B0
cs=0xfbc;eip=0x0007b2; 	R(JMP(code_bto_blank));	// 28160 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:07B2
loc_1e955:
	// 6209 
cs=0xfbc;eip=0x0007b5; 	X(MOV(planindex, 2));	// 28164 mov     planindex, 2 ;~ 0FBC:07B5
cs=0xfbc;eip=0x0007bb; 	X(MOV(wallheight, 0x2A));	// 28165 mov     wallHeight, 2Ah ; '*' ;~ 0FBC:07BB
cs=0xfbc;eip=0x0007c1; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), 0x200));	// 28166 mov     [bp+var_38], 200h ;~ 0FBC:07C1
cs=0xfbc;eip=0x0007c6; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 28167 cmp     [bp+var_18], 0 ;~ 0FBC:07C6
loc_1e96a:
	// 6210 
cs=0xfbc;eip=0x0007ca; 	R(JL(loc_1e96f));	// 28170 jl      short loc_1E96F ;~ 0FBC:07CA
cs=0xfbc;eip=0x0007cc; 	R(JMP(loc_1e87d));	// 28171 jmp     loc_1E87D ;~ 0FBC:07CC
loc_1e96f:
	// 6211 
cs=0xfbc;eip=0x0007cf; 	X(MOV(wallindex, 0x64));	// 28176 mov     wallindex, 64h ; 'd' ;~ 0FBC:07CF
cs=0xfbc;eip=0x0007d5; 	R(JMP(code_bto_blank));	// 28177 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:07D5
code_bto_elevcorner:
	// 6212 
cs=0xfbc;eip=0x0007d8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 28182 mov     bx, [bp+arg_0]  ; jumptable 0001E5B2 case 21 ;~ 0FBC:07D8
cs=0xfbc;eip=0x0007db; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 28183 mov     ax, [bx+2] ;~ 0FBC:07DB
cs=0xfbc;eip=0x0007de; 	T(SUB(ax, terrainheight));	// 28184 sub     ax, terrainHeight ;~ 0FBC:07DE
cs=0xfbc;eip=0x0007e2; 	T(CMP(ax, 0x186));	// 28185 cmp     ax, 186h ;~ 0FBC:07E2
cs=0xfbc;eip=0x0007e5; 	R(JG(loc_1e98a));	// 28186 jg      short loc_1E98A ;~ 0FBC:07E5
cs=0xfbc;eip=0x0007e7; 	R(JMP(code_bto_blank));	// 28187 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:07E7
loc_1e98a:
	// 6213 
cs=0xfbc;eip=0x0007ea; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 28191 mov     ax, [bp+var_28] ;~ 0FBC:07EA
cs=0xfbc;eip=0x0007ed; 	T(ADD(ah, 4));	// 28192 add     ah, 4 ;~ 0FBC:07ED
cs=0xfbc;eip=0x0007f0; 	X(PUSH(ax));	// 28193 push    ax ;~ 0FBC:07F0
cs=0xfbc;eip=0x0007f1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 28194 mov     ax, [bp+var_2C] ;~ 0FBC:07F1
cs=0xfbc;eip=0x0007f4; 	T(ADD(ah, 4));	// 28195 add     ah, 4 ;~ 0FBC:07F4
cs=0xfbc;eip=0x0007f7; 	X(PUSH(ax));	// 28196 push    ax ;~ 0FBC:07F7
cs=0xfbc;eip=0x0007f8; 	R(CALLF(polarradius2d,0));	// 28197 call    polarRadius2D ;~ 0FBC:07F8
cs=0xfbc;eip=0x0007fd; 	T(ADD(sp, 4));	// 28198 add     sp, 4 ;~ 0FBC:07FD
cs=0xfbc;eip=0x000800; 	T(SUB(ax, 0x600));	// 28199 sub     ax, 600h ;~ 0FBC:0800
cs=0xfbc;eip=0x000803; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 28200 mov     [bp+var_A], ax ;~ 0FBC:0803
cs=0xfbc;eip=0x000806; 	T(CMP(ax, 0x0FF6A));	// 28201 cmp     ax, 0FF6Ah ;~ 0FBC:0806
cs=0xfbc;eip=0x000809; 	R(JG(loc_1e9ae));	// 28202 jg      short loc_1E9AE ;~ 0FBC:0809
cs=0xfbc;eip=0x00080b; 	R(JMP(code_bto_blank));	// 28203 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:080B
loc_1e9ae:
	// 6214 
cs=0xfbc;eip=0x00080e; 	T(CMP(ax, 0x96));	// 28207 cmp     ax, 96h ; 'ñ' ;~ 0FBC:080E
cs=0xfbc;eip=0x000811; 	R(JL(loc_1e9b6));	// 28208 jl      short loc_1E9B6 ;~ 0FBC:0811
cs=0xfbc;eip=0x000813; 	R(JMP(code_bto_blank));	// 28209 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0813
loc_1e9b6:
	// 6215 
cs=0xfbc;eip=0x000816; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 28213 mov     al, [bp+var_12] ;~ 0FBC:0816
cs=0xfbc;eip=0x000819; 	X(MOV(current_surf_type, al));	// 28214 mov     current_surf_type, al ;~ 0FBC:0819
cs=0xfbc;eip=0x00081c; 	X(MOV(planindex, 2));	// 28215 mov     planindex, 2 ;~ 0FBC:081C
cs=0xfbc;eip=0x000822; 	X(MOV(byte_4392c, 0));	// 28216 mov     byte_4392C, 0 ;~ 0FBC:0822
cs=0xfbc;eip=0x000827; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x0FF94));	// 28217 cmp     [bp+var_A], 0FF94h ;~ 0FBC:0827
cs=0xfbc;eip=0x00082b; 	R(JL(loc_1e9d6));	// 28218 jl      short loc_1E9D6 ;~ 0FBC:082B
cs=0xfbc;eip=0x00082d; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x6C));	// 28219 cmp     [bp+var_A], 6Ch ; 'l' ;~ 0FBC:082D
cs=0xfbc;eip=0x000831; 	R(JG(loc_1e9d6));	// 28220 jg      short loc_1E9D6 ;~ 0FBC:0831
cs=0xfbc;eip=0x000833; 	R(JMP(code_bto_blank));	// 28221 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0833
loc_1e9d6:
	// 6216 
cs=0xfbc;eip=0x000836; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 28226 mov     ax, [bp+var_28] ;~ 0FBC:0836
cs=0xfbc;eip=0x000839; 	T(ADD(ah, 4));	// 28227 add     ah, 4 ;~ 0FBC:0839
cs=0xfbc;eip=0x00083c; 	X(PUSH(ax));	// 28228 push    ax ;~ 0FBC:083C
cs=0xfbc;eip=0x00083d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 28229 mov     ax, [bp+var_2C] ;~ 0FBC:083D
cs=0xfbc;eip=0x000840; 	T(ADD(ah, 4));	// 28230 add     ah, 4 ;~ 0FBC:0840
cs=0xfbc;eip=0x000843; 	X(PUSH(ax));	// 28231 push    ax ;~ 0FBC:0843
cs=0xfbc;eip=0x000844; 	R(CALLF(polarangle,0));	// 28232 call    polarAngle ;~ 0FBC:0844
cs=0xfbc;eip=0x000849; 	T(ADD(sp, 4));	// 28233 add     sp, 4 ;~ 0FBC:0849
cs=0xfbc;eip=0x00084c; 	T(SUB(ah, ah));	// 28234 sub     ah, ah ;~ 0FBC:084C
cs=0xfbc;eip=0x00084e; 	T(MOV(cx, 0x12));	// 28235 mov     cx, 12h ;~ 0FBC:084E
cs=0xfbc;eip=0x000851; 	T(IMUL1_2(cx));	// 28236 imul    cx ;~ 0FBC:0851
cs=0xfbc;eip=0x000853; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 28237 mov     [bp+var_22], ax ;~ 0FBC:0853
cs=0xfbc;eip=0x000856; 	T(MOV(cl, 8));	// 28238 mov     cl, 8 ;~ 0FBC:0856
cs=0xfbc;eip=0x000858; 	T(SAR(ax, cl));	// 28239 sar     ax, cl ;~ 0FBC:0858
cs=0xfbc;eip=0x00085a; 	T(SUB(ax, 0x11));	// 28240 sub     ax, 11h ;~ 0FBC:085A
cs=0xfbc;eip=0x00085d; 	T(NEG(ax));	// 28241 neg     ax ;~ 0FBC:085D
cs=0xfbc;eip=0x00085f; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 28242 mov     [bp+var_1E], ax ;~ 0FBC:085F
cs=0xfbc;eip=0x000862; 	X(MOV(wallheight, 0x2A));	// 28243 mov     wallHeight, 2Ah ; '*' ;~ 0FBC:0862
cs=0xfbc;eip=0x000868; 	X(MOV(elrdwallrelated, 0x0FFF4));	// 28244 mov     elRdWallRelated, 0FFF4h ;~ 0FBC:0868
cs=0xfbc;eip=0x00086e; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 28245 cmp     [bp+var_A], 0 ;~ 0FBC:086E
cs=0xfbc;eip=0x000872; 	R(JGE(loc_1ea1a));	// 28246 jge     short loc_1EA1A ;~ 0FBC:0872
cs=0xfbc;eip=0x000874; 	T(ADD(ax, 0x69));	// 28247 add     ax, 69h ; 'i' ;~ 0FBC:0874
cs=0xfbc;eip=0x000877; 	R(JMP(loc_1ea20));	// 28248 jmp     short loc_1EA20 ;~ 0FBC:0877
loc_1ea1a:
	// 6217 
cs=0xfbc;eip=0x00087a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 28253 mov     ax, [bp+var_1E] ;~ 0FBC:087A
cs=0xfbc;eip=0x00087d; 	T(ADD(ax, 0x7B));	// 28254 add     ax, 7Bh ; '{' ;~ 0FBC:087D
loc_1ea20:
	// 6218 
cs=0xfbc;eip=0x000880; 	X(MOV(wallindex, ax));	// 28258 mov     wallindex, ax ;~ 0FBC:0880
cs=0xfbc;eip=0x000883; 	R(JMP(code_bto_blank));	// 28259 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0883
code_bto_bankentrancea:
	// 6219 
cs=0xfbc;eip=0x000886; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), 0x23));	// 28264 mov     [bp+var_1C], 23h ; '#' ; jumptable 0001E5B2 case 24 ;~ 0FBC:0886
cs=0xfbc;eip=0x00088b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 28265 mov     [bp+var_1E], 0 ;~ 0FBC:088B
cs=0xfbc;eip=0x000890; 	T(MOV(si, 0x0FD60));	// 28266 mov     si, 0FD60h ;~ 0FBC:0890
cs=0xfbc;eip=0x000893; 	R(JMP(loc_1ea43));	// 28267 jmp     short loc_1EA43 ;~ 0FBC:0893
code_bto_bankentranceb:
	// 6220 
cs=0xfbc;eip=0x000896; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), 0x19));	// 28273 mov     [bp+var_1C], 19h ; jumptable 0001E5B2 case 23 ;~ 0FBC:0896
cs=0xfbc;eip=0x00089b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 1));	// 28274 mov     [bp+var_1E], 1 ;~ 0FBC:089B
cs=0xfbc;eip=0x0008a0; 	T(MOV(si, 0x0A0));	// 28275 mov     si, 0A0h ; '†' ;~ 0FBC:08A0
loc_1ea43:
	// 6221 
cs=0xfbc;eip=0x0008a3; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 28278 cmp     [bp+var_32], 78h ; 'x' ;~ 0FBC:08A3
cs=0xfbc;eip=0x0008a7; 	R(JLE(loc_1ea4c));	// 28279 jle     short loc_1EA4C ;~ 0FBC:08A7
cs=0xfbc;eip=0x0008a9; 	R(JMP(code_bto_blank));	// 28280 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:08A9
loc_1ea4c:
	// 6222 
cs=0xfbc;eip=0x0008ac; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 28284 cmp     [bp+var_1E], 0 ;~ 0FBC:08AC
cs=0xfbc;eip=0x0008b0; 	R(JNZ(loc_1ea66));	// 28285 jnz     short loc_1EA66 ;~ 0FBC:08B0
cs=0xfbc;eip=0x0008b2; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF88));	// 28286 cmp     [bp+var_18], 0FF88h ;~ 0FBC:08B2
cs=0xfbc;eip=0x0008b6; 	R(JG(loc_1ea66));	// 28287 jg      short loc_1EA66 ;~ 0FBC:08B6
cs=0xfbc;eip=0x0008b8; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), 0x200));	// 28288 mov     [bp+var_38], 200h ;~ 0FBC:08B8
cs=0xfbc;eip=0x0008bd; 	X(MOV(wallindex, 0x64));	// 28289 mov     wallindex, 64h ; 'd' ;~ 0FBC:08BD
cs=0xfbc;eip=0x0008c3; 	R(JMP(loc_1ea7d));	// 28290 jmp     short loc_1EA7D ;~ 0FBC:08C3
loc_1ea66:
	// 6223 
cs=0xfbc;eip=0x0008c6; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 28296 cmp     [bp+var_1E], 0 ;~ 0FBC:08C6
cs=0xfbc;eip=0x0008ca; 	R(JZ(loc_1ea7d));	// 28297 jz      short loc_1EA7D ;~ 0FBC:08CA
cs=0xfbc;eip=0x0008cc; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x78));	// 28298 cmp     [bp+var_18], 78h ; 'x' ;~ 0FBC:08CC
cs=0xfbc;eip=0x0008d0; 	R(JL(loc_1ea7d));	// 28299 jl      short loc_1EA7D ;~ 0FBC:08D0
cs=0xfbc;eip=0x0008d2; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), 0x200));	// 28300 mov     [bp+var_38], 200h ;~ 0FBC:08D2
cs=0xfbc;eip=0x0008d7; 	X(MOV(wallindex, 0x65));	// 28301 mov     wallindex, 65h ; 'e' ;~ 0FBC:08D7
loc_1ea7d:
	// 6224 
cs=0xfbc;eip=0x0008dd; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 28305 mov     al, [bp+var_12] ;~ 0FBC:08DD
cs=0xfbc;eip=0x0008e0; 	X(MOV(current_surf_type, al));	// 28306 mov     current_surf_type, al ;~ 0FBC:08E0
cs=0xfbc;eip=0x0008e3; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x0FEB2));	// 28307 cmp     [bp+var_28], 0FEB2h ;~ 0FBC:08E3
cs=0xfbc;eip=0x0008e8; 	R(JGE(loc_1ea90));	// 28308 jge     short loc_1EA90 ;~ 0FBC:08E8
cs=0xfbc;eip=0x0008ea; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 28309 mov     ax, [bp+var_1C] ;~ 0FBC:08EA
cs=0xfbc;eip=0x0008ed; 	R(JMP(loc_1ea9d));	// 28310 jmp     short loc_1EA9D ;~ 0FBC:08ED
loc_1ea90:
	// 6225 
cs=0xfbc;eip=0x0008f0; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x14E));	// 28315 cmp     [bp+var_28], 14Eh ;~ 0FBC:08F0
cs=0xfbc;eip=0x0008f5; 	R(JL(loc_1eaa4));	// 28316 jl      short loc_1EAA4 ;~ 0FBC:08F5
cs=0xfbc;eip=0x0008f7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 28317 mov     ax, [bp+var_1C] ;~ 0FBC:08F7
cs=0xfbc;eip=0x0008fa; 	T(ADD(ax, 9));	// 28318 add     ax, 9 ;~ 0FBC:08FA
loc_1ea9d:
	// 6226 
cs=0xfbc;eip=0x0008fd; 	X(MOV(planindex, ax));	// 28322 mov     planindex, ax ;~ 0FBC:08FD
cs=0xfbc;eip=0x000900; 	R(JMP(code_bto_blank));	// 28323 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0900
loc_1eaa4:
	// 6227 
cs=0xfbc;eip=0x000904; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x0FF58));	// 28328 cmp     [bp+var_28], 0FF58h ;~ 0FBC:0904
cs=0xfbc;eip=0x000909; 	R(JGE(loc_1eaba));	// 28329 jge     short loc_1EABA ;~ 0FBC:0909
cs=0xfbc;eip=0x00090b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 28330 mov     ax, [bp+var_1C] ;~ 0FBC:090B
cs=0xfbc;eip=0x00090e; 	T(INC(ax));	// 28331 inc     ax ;~ 0FBC:090E
cs=0xfbc;eip=0x00090f; 	X(MOV(planindex, ax));	// 28332 mov     planindex, ax ;~ 0FBC:090F
cs=0xfbc;eip=0x000912; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 28333 mov     [bp+var_1E], 0 ;~ 0FBC:0912
cs=0xfbc;eip=0x000917; 	R(JMP(loc_1eafd));	// 28334 jmp     short loc_1EAFD ;~ 0FBC:0917
loc_1eaba:
	// 6228 
cs=0xfbc;eip=0x00091a; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0));	// 28339 cmp     [bp+var_28], 0 ;~ 0FBC:091A
cs=0xfbc;eip=0x00091e; 	R(JGE(loc_1ead0));	// 28340 jge     short loc_1EAD0 ;~ 0FBC:091E
cs=0xfbc;eip=0x000920; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 28341 mov     ax, [bp+var_1C] ;~ 0FBC:0920
cs=0xfbc;eip=0x000923; 	T(ADD(ax, 3));	// 28342 add     ax, 3 ;~ 0FBC:0923
cs=0xfbc;eip=0x000926; 	X(MOV(planindex, ax));	// 28343 mov     planindex, ax ;~ 0FBC:0926
cs=0xfbc;eip=0x000929; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 1));	// 28344 mov     [bp+var_1E], 1 ;~ 0FBC:0929
cs=0xfbc;eip=0x00092e; 	R(JMP(loc_1eafd));	// 28345 jmp     short loc_1EAFD ;~ 0FBC:092E
loc_1ead0:
	// 6229 
cs=0xfbc;eip=0x000930; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x0A8));	// 28349 cmp     [bp+var_28], 0A8h ; '®' ;~ 0FBC:0930
cs=0xfbc;eip=0x000935; 	R(JGE(loc_1eae8));	// 28350 jge     short loc_1EAE8 ;~ 0FBC:0935
cs=0xfbc;eip=0x000937; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 28351 mov     ax, [bp+var_1C] ;~ 0FBC:0937
cs=0xfbc;eip=0x00093a; 	T(ADD(ax, 5));	// 28352 add     ax, 5 ;~ 0FBC:093A
cs=0xfbc;eip=0x00093d; 	X(MOV(planindex, ax));	// 28353 mov     planindex, ax ;~ 0FBC:093D
cs=0xfbc;eip=0x000940; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 2));	// 28354 mov     [bp+var_1E], 2 ;~ 0FBC:0940
cs=0xfbc;eip=0x000945; 	R(JMP(loc_1eafd));	// 28355 jmp     short loc_1EAFD ;~ 0FBC:0945
loc_1eae8:
	// 6230 
cs=0xfbc;eip=0x000948; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x14E));	// 28360 cmp     [bp+var_28], 14Eh ;~ 0FBC:0948
cs=0xfbc;eip=0x00094d; 	R(JGE(loc_1eafd));	// 28361 jge     short loc_1EAFD ;~ 0FBC:094D
cs=0xfbc;eip=0x00094f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 28362 mov     ax, [bp+var_1C] ;~ 0FBC:094F
cs=0xfbc;eip=0x000952; 	T(ADD(ax, 7));	// 28363 add     ax, 7 ;~ 0FBC:0952
cs=0xfbc;eip=0x000955; 	X(MOV(planindex, ax));	// 28364 mov     planindex, ax ;~ 0FBC:0955
cs=0xfbc;eip=0x000958; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 3));	// 28365 mov     [bp+var_1E], 3 ;~ 0FBC:0958
loc_1eafd:
	// 6231 
cs=0xfbc;eip=0x00095d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 28369 mov     ax, [bp+var_28] ;~ 0FBC:095D
cs=0xfbc;eip=0x000960; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_1e))));	// 28370 mov     bx, [bp+var_1E] ;~ 0FBC:0960
cs=0xfbc;eip=0x000963; 	T(SHL(bx, 1));	// 28371 shl     bx, 1 ;~ 0FBC:0963
cs=0xfbc;eip=0x000965; 	T(SUB(ax, *(dw*)(((db*)&bkrdentr_triang_zadjust)+bx)));	// 28372 sub     ax, bkRdEntr_triang_zAdjust[bx] ;~ 0FBC:0965
cs=0xfbc;eip=0x000969; 	X(PUSH(ax));	// 28373 push    ax ;~ 0FBC:0969
cs=0xfbc;eip=0x00096a; 	X(PUSH(si));	// 28374 push    si ;~ 0FBC:096A
cs=0xfbc;eip=0x00096b; 	R(CALLF(sin_fast,0));	// 28375 call    sin_fast ;~ 0FBC:096B
cs=0xfbc;eip=0x000970; 	T(ADD(sp, 2));	// 28376 add     sp, 2 ;~ 0FBC:0970
cs=0xfbc;eip=0x000973; 	X(PUSH(ax));	// 28377 push    ax ;~ 0FBC:0973
cs=0xfbc;eip=0x000974; 	R(CALLF(multiply_and_scale,0));	// 28378 call    multiply_and_scale ;~ 0FBC:0974
cs=0xfbc;eip=0x000979; 	T(ADD(sp, 4));	// 28379 add     sp, 4 ;~ 0FBC:0979
cs=0xfbc;eip=0x00097c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2c))));	// 28380 push    [bp+var_2C] ;~ 0FBC:097C
cs=0xfbc;eip=0x00097f; 	X(PUSH(si));	// 28381 push    si ;~ 0FBC:097F
cs=0xfbc;eip=0x000980; 	T(MOV(di, ax));	// 28382 mov     di, ax ;~ 0FBC:0980
cs=0xfbc;eip=0x000982; 	R(CALLF(cos_fast,0));	// 28383 call    cos_fast ;~ 0FBC:0982
cs=0xfbc;eip=0x000987; 	T(ADD(sp, 2));	// 28384 add     sp, 2 ;~ 0FBC:0987
cs=0xfbc;eip=0x00098a; 	X(PUSH(ax));	// 28385 push    ax ;~ 0FBC:098A
cs=0xfbc;eip=0x00098b; 	R(CALLF(multiply_and_scale,0));	// 28386 call    multiply_and_scale ;~ 0FBC:098B
cs=0xfbc;eip=0x000990; 	T(ADD(sp, 4));	// 28387 add     sp, 4 ;~ 0FBC:0990
cs=0xfbc;eip=0x000993; 	T(ADD(ax, di));	// 28388 add     ax, di ;~ 0FBC:0993
cs=0xfbc;eip=0x000995; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 28389 mov     [bp+var_22], ax ;~ 0FBC:0995
cs=0xfbc;eip=0x000998; 	T(OR(ax, ax));	// 28390 or      ax, ax ;~ 0FBC:0998
cs=0xfbc;eip=0x00099a; 	R(JG(loc_1eb3f));	// 28391 jg      short loc_1EB3F ;~ 0FBC:099A
cs=0xfbc;eip=0x00099c; 	R(JMP(code_bto_blank));	// 28392 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:099C
loc_1eb3f:
	// 6232 
cs=0xfbc;eip=0x00099f; 	X(INC(planindex));	// 28397 inc     planindex ;~ 0FBC:099F
cs=0xfbc;eip=0x0009a3; 	R(JMP(code_bto_blank));	// 28398 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:09A3
code_bto_bankroad:
	// 6233 
cs=0xfbc;eip=0x0009a6; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 28403 cmp     [bp+var_32], 78h ; 'x' ; jumptable 0001E5B2 case 25 ;~ 0FBC:09A6
cs=0xfbc;eip=0x0009aa; 	R(JLE(loc_1eb4f));	// 28404 jle     short loc_1EB4F ;~ 0FBC:09AA
cs=0xfbc;eip=0x0009ac; 	R(JMP(code_bto_blank));	// 28405 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:09AC
loc_1eb4f:
	// 6234 
cs=0xfbc;eip=0x0009af; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 28409 mov     al, [bp+var_12] ;~ 0FBC:09AF
cs=0xfbc;eip=0x0009b2; 	X(MOV(current_surf_type, al));	// 28410 mov     current_surf_type, al ;~ 0FBC:09B2
cs=0xfbc;eip=0x0009b5; 	X(MOV(planindex, 6));	// 28411 mov     planindex, 6 ;~ 0FBC:09B5
cs=0xfbc;eip=0x0009bb; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x78));	// 28412 cmp     [bp+var_18], 78h ; 'x' ;~ 0FBC:09BB
cs=0xfbc;eip=0x0009bf; 	R(JGE(loc_1eb64));	// 28413 jge     short loc_1EB64 ;~ 0FBC:09BF
cs=0xfbc;eip=0x0009c1; 	R(JMP(code_bto_blank));	// 28414 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:09C1
loc_1eb64:
	// 6235 
cs=0xfbc;eip=0x0009c4; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), 0x200));	// 28418 mov     [bp+var_38], 200h ;~ 0FBC:09C4
cs=0xfbc;eip=0x0009c9; 	R(JMP(loc_1e87d));	// 28419 jmp     loc_1E87D ;~ 0FBC:09C9
code_bto_bankcorner:
	// 6236 
cs=0xfbc;eip=0x0009cc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 28424 mov     ax, [bp+var_28] ; jumptable 0001E5B2 case 26 ;~ 0FBC:09CC
cs=0xfbc;eip=0x0009cf; 	T(ADD(ah, 4));	// 28425 add     ah, 4 ;~ 0FBC:09CF
cs=0xfbc;eip=0x0009d2; 	X(PUSH(ax));	// 28426 push    ax ;~ 0FBC:09D2
cs=0xfbc;eip=0x0009d3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 28427 mov     ax, [bp+var_2C] ;~ 0FBC:09D3
cs=0xfbc;eip=0x0009d6; 	T(ADD(ah, 4));	// 28428 add     ah, 4 ;~ 0FBC:09D6
cs=0xfbc;eip=0x0009d9; 	X(PUSH(ax));	// 28429 push    ax ;~ 0FBC:09D9
cs=0xfbc;eip=0x0009da; 	R(CALLF(polarradius2d,0));	// 28430 call    polarRadius2D ;~ 0FBC:09DA
cs=0xfbc;eip=0x0009df; 	T(ADD(sp, 4));	// 28431 add     sp, 4 ;~ 0FBC:09DF
cs=0xfbc;eip=0x0009e2; 	T(SUB(ax, 0x600));	// 28432 sub     ax, 600h ;~ 0FBC:09E2
cs=0xfbc;eip=0x0009e5; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 28433 mov     [bp+var_A], ax ;~ 0FBC:09E5
cs=0xfbc;eip=0x0009e8; 	T(CMP(ax, 0x0FF88));	// 28434 cmp     ax, 0FF88h ;~ 0FBC:09E8
cs=0xfbc;eip=0x0009eb; 	R(JG(loc_1eb90));	// 28435 jg      short loc_1EB90 ;~ 0FBC:09EB
cs=0xfbc;eip=0x0009ed; 	R(JMP(code_bto_blank));	// 28436 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:09ED
loc_1eb90:
	// 6237 
cs=0xfbc;eip=0x0009f0; 	T(CMP(ax, 0x7E));	// 28440 cmp     ax, 7Eh ; '~' ;~ 0FBC:09F0
cs=0xfbc;eip=0x0009f3; 	R(JL(loc_1eb98));	// 28441 jl      short loc_1EB98 ;~ 0FBC:09F3
cs=0xfbc;eip=0x0009f5; 	R(JMP(code_bto_blank));	// 28442 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:09F5
loc_1eb98:
	// 6238 
cs=0xfbc;eip=0x0009f8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 28446 mov     ax, [bp+var_28] ;~ 0FBC:09F8
cs=0xfbc;eip=0x0009fb; 	T(ADD(ah, 4));	// 28447 add     ah, 4 ;~ 0FBC:09FB
cs=0xfbc;eip=0x0009fe; 	X(PUSH(ax));	// 28448 push    ax ;~ 0FBC:09FE
cs=0xfbc;eip=0x0009ff; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 28449 mov     ax, [bp+var_2C] ;~ 0FBC:09FF
cs=0xfbc;eip=0x000a02; 	T(ADD(ah, 4));	// 28450 add     ah, 4 ;~ 0FBC:0A02
cs=0xfbc;eip=0x000a05; 	X(PUSH(ax));	// 28451 push    ax ;~ 0FBC:0A05
cs=0xfbc;eip=0x000a06; 	R(CALLF(polarangle,0));	// 28452 call    polarAngle ;~ 0FBC:0A06
cs=0xfbc;eip=0x000a0b; 	T(ADD(sp, 4));	// 28453 add     sp, 4 ;~ 0FBC:0A0B
cs=0xfbc;eip=0x000a0e; 	T(SUB(ah, ah));	// 28454 sub     ah, ah ;~ 0FBC:0A0E
cs=0xfbc;eip=0x000a10; 	T(MOV(cx, 0x12));	// 28455 mov     cx, 12h ;~ 0FBC:0A10
cs=0xfbc;eip=0x000a13; 	T(IMUL1_2(cx));	// 28456 imul    cx ;~ 0FBC:0A13
cs=0xfbc;eip=0x000a15; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 28457 mov     [bp+var_22], ax ;~ 0FBC:0A15
cs=0xfbc;eip=0x000a18; 	T(MOV(cl, 8));	// 28458 mov     cl, 8 ;~ 0FBC:0A18
cs=0xfbc;eip=0x000a1a; 	T(SAR(ax, cl));	// 28459 sar     ax, cl ;~ 0FBC:0A1A
cs=0xfbc;eip=0x000a1c; 	T(SUB(ax, 0x11));	// 28460 sub     ax, 11h ;~ 0FBC:0A1C
cs=0xfbc;eip=0x000a1f; 	T(NEG(ax));	// 28461 neg     ax ;~ 0FBC:0A1F
cs=0xfbc;eip=0x000a21; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 28462 mov     [bp+var_1E], ax ;~ 0FBC:0A21
cs=0xfbc;eip=0x000a24; 	T(ADD(ax, 7));	// 28463 add     ax, 7 ;~ 0FBC:0A24
cs=0xfbc;eip=0x000a27; 	X(MOV(planindex, ax));	// 28464 mov     planindex, ax ;~ 0FBC:0A27
cs=0xfbc;eip=0x000a2a; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 28465 mov     al, [bp+var_12] ;~ 0FBC:0A2A
cs=0xfbc;eip=0x000a2d; 	X(MOV(current_surf_type, al));	// 28466 mov     current_surf_type, al ;~ 0FBC:0A2D
cs=0xfbc;eip=0x000a30; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x66));	// 28467 cmp     [bp+var_A], 66h ; 'f' ;~ 0FBC:0A30
cs=0xfbc;eip=0x000a34; 	R(JG(loc_1ebd9));	// 28468 jg      short loc_1EBD9 ;~ 0FBC:0A34
cs=0xfbc;eip=0x000a36; 	R(JMP(code_bto_blank));	// 28469 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0A36
loc_1ebd9:
	// 6239 
cs=0xfbc;eip=0x000a39; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), 0x200));	// 28473 mov     [bp+var_38], 200h ;~ 0FBC:0A39
cs=0xfbc;eip=0x000a3e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 28474 mov     ax, [bp+var_1E] ;~ 0FBC:0A3E
cs=0xfbc;eip=0x000a41; 	T(ADD(ax, 0x7B));	// 28475 add     ax, 7Bh ; '{' ;~ 0FBC:0A41
cs=0xfbc;eip=0x000a44; 	X(MOV(wallindex, ax));	// 28476 mov     wallindex, ax ;~ 0FBC:0A44
loc_1ebe7:
	// 6240 
cs=0xfbc;eip=0x000a47; 	X(MOV(byte_4392c, 0));	// 28480 mov     byte_4392C, 0 ;~ 0FBC:0A47
cs=0xfbc;eip=0x000a4c; 	R(JMP(code_bto_blank));	// 28481 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0A4C
code_bto_loop:
	// 6241 
cs=0xfbc;eip=0x000a50; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0));	// 28487 cmp     [bp+var_28], 0  ; jumptable 0001E5B2 case 27 ;~ 0FBC:0A50
cs=0xfbc;eip=0x000a54; 	R(JGE(loc_1ec0a));	// 28488 jge     short loc_1EC0A ;~ 0FBC:0A54
cs=0xfbc;eip=0x000a56; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), 0x33));	// 28489 mov     [bp+var_1C], 33h ; '3' ;~ 0FBC:0A56
cs=0xfbc;eip=0x000a5b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 28490 mov     ax, [bp+var_2C] ;~ 0FBC:0A5B
cs=0xfbc;eip=0x000a5e; 	T(NEG(ax));	// 28491 neg     ax ;~ 0FBC:0A5E
cs=0xfbc;eip=0x000a60; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 28492 mov     [bp+var_6], ax ;~ 0FBC:0A60
cs=0xfbc;eip=0x000a63; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 28493 mov     ax, [bp+var_28] ;~ 0FBC:0A63
cs=0xfbc;eip=0x000a66; 	T(NEG(ax));	// 28494 neg     ax ;~ 0FBC:0A66
cs=0xfbc;eip=0x000a68; 	R(JMP(loc_1ec18));	// 28495 jmp     short loc_1EC18 ;~ 0FBC:0A68
loc_1ec0a:
	// 6242 
cs=0xfbc;eip=0x000a6a; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), 0x2D));	// 28499 mov     [bp+var_1C], 2Dh ; '-' ;~ 0FBC:0A6A
cs=0xfbc;eip=0x000a6f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 28500 mov     ax, [bp+var_2C] ;~ 0FBC:0A6F
cs=0xfbc;eip=0x000a72; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 28501 mov     [bp+var_6], ax ;~ 0FBC:0A72
cs=0xfbc;eip=0x000a75; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 28502 mov     ax, [bp+var_28] ;~ 0FBC:0A75
loc_1ec18:
	// 6243 
cs=0xfbc;eip=0x000a78; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 28505 mov     [bp+var_2], ax ;~ 0FBC:0A78
cs=0xfbc;eip=0x000a7b; 	T(MOV(ax, loopsurface_maxz));	// 28506 mov     ax, loopSurface_maxZ ;~ 0FBC:0A7B
cs=0xfbc;eip=0x000a7e; 	T(DEC(ax));	// 28507 dec     ax ;~ 0FBC:0A7E
cs=0xfbc;eip=0x000a7f; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 28508 cmp     [bp+var_2], ax ;~ 0FBC:0A7F
cs=0xfbc;eip=0x000a82; 	R(JLE(loc_1ec38));	// 28509 jle     short loc_1EC38 ;~ 0FBC:0A82
cs=0xfbc;eip=0x000a84; 	T(MOV(ax, loopsurface_maxz));	// 28510 mov     ax, loopSurface_maxZ ;~ 0FBC:0A84
cs=0xfbc;eip=0x000a87; 	T(ADD(ax, 0x64));	// 28511 add     ax, 64h ; 'd' ;~ 0FBC:0A87
cs=0xfbc;eip=0x000a8a; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 28512 cmp     [bp+var_2], ax ;~ 0FBC:0A8A
cs=0xfbc;eip=0x000a8d; 	R(JLE(loc_1ec32));	// 28513 jle     short loc_1EC32 ;~ 0FBC:0A8D
cs=0xfbc;eip=0x000a8f; 	R(JMP(code_bto_loopbase));	// 28514 jmp     code_bto_loopBase ;~ 0FBC:0A8F
loc_1ec32:
	// 6244 
cs=0xfbc;eip=0x000a92; 	T(MOV(ax, loopsurface_maxz));	// 28518 mov     ax, loopSurface_maxZ ;~ 0FBC:0A92
cs=0xfbc;eip=0x000a95; 	T(DEC(ax));	// 28519 dec     ax ;~ 0FBC:0A95
cs=0xfbc;eip=0x000a96; 	R(JMP(loc_1ec3b));	// 28520 jmp     short loc_1EC3B ;~ 0FBC:0A96
loc_1ec38:
	// 6245 
cs=0xfbc;eip=0x000a98; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 28524 mov     ax, [bp+var_2] ;~ 0FBC:0A98
loc_1ec3b:
	// 6246 
cs=0xfbc;eip=0x000a9b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 28527 mov     [bp+var_1E], ax ;~ 0FBC:0A9B
cs=0xfbc;eip=0x000a9e; 	T(SUB(si, si));	// 28528 sub     si, si ;~ 0FBC:0A9E
cs=0xfbc;eip=0x000aa0; 	R(JMP(loc_1ec43));	// 28529 jmp     short loc_1EC43 ;~ 0FBC:0AA0
loc_1ec42:
	// 6247 
cs=0xfbc;eip=0x000aa2; 	T(INC(si));	// 28533 inc     si ;~ 0FBC:0AA2
loc_1ec43:
	// 6248 
cs=0xfbc;eip=0x000aa3; 	T(MOV(bx, si));	// 28536 mov     bx, si ;~ 0FBC:0AA3
cs=0xfbc;eip=0x000aa5; 	T(SHL(bx, 1));	// 28537 shl     bx, 1 ;~ 0FBC:0AA5
cs=0xfbc;eip=0x000aa7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 28538 mov     ax, [bp+var_1E] ;~ 0FBC:0AA7
cs=0xfbc;eip=0x000aaa; 	T(CMP(*(dw*)(((db*)&loopsurface_zbounds1)+bx), ax));	// 28539 cmp     loopSurface_ZBounds1[bx], ax ;~ 0FBC:0AAA
cs=0xfbc;eip=0x000aae; 	R(JL(loc_1ec42));	// 28540 jl      short loc_1EC42 ;~ 0FBC:0AAE
cs=0xfbc;eip=0x000ab0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 28541 mov     bx, [bp+arg_0] ;~ 0FBC:0AB0
cs=0xfbc;eip=0x000ab3; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 28542 mov     ax, [bx+2] ;~ 0FBC:0AB3
cs=0xfbc;eip=0x000ab6; 	T(SUB(ax, terrainheight));	// 28543 sub     ax, terrainHeight ;~ 0FBC:0AB6
cs=0xfbc;eip=0x000aba; 	T(CMP(ax, 0x20C));	// 28544 cmp     ax, 20Ch        ; upside-down limit ;~ 0FBC:0ABA
cs=0xfbc;eip=0x000abd; 	R(JG(loc_1ec62));	// 28545 jg      short loc_1EC62 ;~ 0FBC:0ABD
cs=0xfbc;eip=0x000abf; 	R(JMP(loc_1ed04));	// 28546 jmp     loc_1ED04 ;~ 0FBC:0ABF
loc_1ec62:
	// 6249 
cs=0xfbc;eip=0x000ac2; 	T(MOV(ax, 5));	// 28550 mov     ax, 5 ;~ 0FBC:0AC2
cs=0xfbc;eip=0x000ac5; 	T(SUB(ax, si));	// 28551 sub     ax, si ;~ 0FBC:0AC5
cs=0xfbc;eip=0x000ac7; 	T(MOV(si, ax));	// 28552 mov     si, ax ;~ 0FBC:0AC7
cs=0xfbc;eip=0x000ac9; 	T(MOV(di, si));	// 28553 mov     di, si ;~ 0FBC:0AC9
cs=0xfbc;eip=0x000acb; 	T(SHL(di, 1));	// 28554 shl     di, 1 ;~ 0FBC:0ACB
cs=0xfbc;eip=0x000acd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28555 mov     ax, [bp+var_6] ;~ 0FBC:0ACD
cs=0xfbc;eip=0x000ad0; 	T(CMP(*(dw*)(((db*)&loopsurface_xbounds0)+di), ax));	// 28556 cmp     loopSurface_XBounds0[di], ax ;~ 0FBC:0AD0
cs=0xfbc;eip=0x000ad4; 	R(JLE(loc_1ec79));	// 28557 jle     short loc_1EC79 ;~ 0FBC:0AD4
cs=0xfbc;eip=0x000ad6; 	R(JMP(code_bto_blank));	// 28558 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0AD6
loc_1ec79:
	// 6250 
cs=0xfbc;eip=0x000ad9; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_xbounds1)+di)));	// 28562 mov     ax, loopSurface_XBounds1[di] ;~ 0FBC:0AD9
cs=0xfbc;eip=0x000add; 	T(ADD(ax, 0x190));	// 28563 add     ax, 190h ;~ 0FBC:0ADD
cs=0xfbc;eip=0x000ae0; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28564 cmp     ax, [bp+var_6] ;~ 0FBC:0AE0
cs=0xfbc;eip=0x000ae3; 	R(JGE(loc_1ec88));	// 28565 jge     short loc_1EC88 ;~ 0FBC:0AE3
cs=0xfbc;eip=0x000ae5; 	R(JMP(code_bto_blank));	// 28566 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0AE5
loc_1ec88:
	// 6251 
cs=0xfbc;eip=0x000ae8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28570 mov     ax, [bp+var_6] ;~ 0FBC:0AE8
cs=0xfbc;eip=0x000aeb; 	T(CMP(*(dw*)(((db*)&loopsurface_xbounds1)+di), ax));	// 28571 cmp     loopSurface_XBounds1[di], ax ;~ 0FBC:0AEB
cs=0xfbc;eip=0x000aef; 	R(JGE(loc_1ec9d));	// 28572 jge     short loc_1EC9D ;~ 0FBC:0AEF
cs=0xfbc;eip=0x000af1; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_xbounds0)+di)));	// 28573 mov     ax, loopSurface_XBounds0[di] ;~ 0FBC:0AF1
cs=0xfbc;eip=0x000af5; 	T(ADD(ax, 0x190));	// 28574 add     ax, 190h ;~ 0FBC:0AF5
cs=0xfbc;eip=0x000af8; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28575 cmp     ax, [bp+var_6] ;~ 0FBC:0AF8
cs=0xfbc;eip=0x000afb; 	R(JG(loc_1ecf3));	// 28576 jg      short loc_1ECF3 ;~ 0FBC:0AFB
loc_1ec9d:
	// 6252 
cs=0xfbc;eip=0x000afd; 	T(MOV(di, si));	// 28579 mov     di, si ;~ 0FBC:0AFD
cs=0xfbc;eip=0x000aff; 	T(SHL(di, 1));	// 28580 shl     di, 1 ;~ 0FBC:0AFF
cs=0xfbc;eip=0x000b01; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_zbounds1)+di)));	// 28581 mov     ax, loopSurface_ZBounds1[di] ;~ 0FBC:0B01
cs=0xfbc;eip=0x000b05; 	T(SUB(ax, *(dw*)(((db*)&loopsurface_zbounds0)+di)));	// 28582 sub     ax, loopSurface_ZBounds0[di] ;~ 0FBC:0B05
cs=0xfbc;eip=0x000b09; 	T(CWD);	// 28583 cwd ;~ 0FBC:0B09
cs=0xfbc;eip=0x000b0a; 	X(PUSH(dx));	// 28584 push    dx ;~ 0FBC:0B0A
cs=0xfbc;eip=0x000b0b; 	X(PUSH(ax));	// 28585 push    ax ;~ 0FBC:0B0B
cs=0xfbc;eip=0x000b0c; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_zbounds0)+di)));	// 28586 mov     ax, loopSurface_ZBounds0[di] ;~ 0FBC:0B0C
cs=0xfbc;eip=0x000b10; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 28587 sub     ax, [bp+var_1E] ;~ 0FBC:0B10
cs=0xfbc;eip=0x000b13; 	T(CWD);	// 28588 cwd ;~ 0FBC:0B13
cs=0xfbc;eip=0x000b14; 	X(PUSH(dx));	// 28589 push    dx ;~ 0FBC:0B14
cs=0xfbc;eip=0x000b15; 	X(PUSH(ax));	// 28590 push    ax ;~ 0FBC:0B15
cs=0xfbc;eip=0x000b16; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_xbounds0)+di)));	// 28591 mov     ax, loopSurface_XBounds0[di] ;~ 0FBC:0B16
cs=0xfbc;eip=0x000b1a; 	T(SUB(ax, *(dw*)(((db*)&loopsurface_xbounds1)+di)));	// 28592 sub     ax, loopSurface_XBounds1[di] ;~ 0FBC:0B1A
cs=0xfbc;eip=0x000b1e; 	T(CWD);	// 28593 cwd ;~ 0FBC:0B1E
cs=0xfbc;eip=0x000b1f; 	X(PUSH(dx));	// 28594 push    dx ;~ 0FBC:0B1F
cs=0xfbc;eip=0x000b20; 	X(PUSH(ax));	// 28595 push    ax ;~ 0FBC:0B20
cs=0xfbc;eip=0x000b21; 	R(CALLF(__aflmul,0));	// 28596 call    __aFlmul ;~ 0FBC:0B21
cs=0xfbc;eip=0x000b26; 	X(PUSH(dx));	// 28597 push    dx ;~ 0FBC:0B26
cs=0xfbc;eip=0x000b27; 	X(PUSH(ax));	// 28598 push    ax ;~ 0FBC:0B27
cs=0xfbc;eip=0x000b28; 	R(CALLF(__afldiv,0));	// 28599 call    __aFldiv ;~ 0FBC:0B28
cs=0xfbc;eip=0x000b2d; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 28600 mov     [bp+var_22], ax ;~ 0FBC:0B2D
cs=0xfbc;eip=0x000b30; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_xbounds0)+di)));	// 28601 mov     ax, loopSurface_XBounds0[di] ;~ 0FBC:0B30
cs=0xfbc;eip=0x000b34; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_22))));	// 28602 add     ax, [bp+var_22] ;~ 0FBC:0B34
cs=0xfbc;eip=0x000b37; 	X(MOV(*(dw*)(raddr(ss,bp+var_3c)), ax));	// 28603 mov     [bp+var_3C], ax ;~ 0FBC:0B37
cs=0xfbc;eip=0x000b3a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28604 mov     ax, [bp+var_6] ;~ 0FBC:0B3A
cs=0xfbc;eip=0x000b3d; 	T(CMP(*(dw*)(raddr(ss,bp+var_3c)), ax));	// 28605 cmp     [bp+var_3C], ax ;~ 0FBC:0B3D
cs=0xfbc;eip=0x000b40; 	R(JL(loc_1ece5));	// 28606 jl      short loc_1ECE5 ;~ 0FBC:0B40
cs=0xfbc;eip=0x000b42; 	R(JMP(code_bto_blank));	// 28607 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0B42
loc_1ece5:
	// 6253 
cs=0xfbc;eip=0x000b45; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3c))));	// 28611 mov     ax, [bp+var_3C] ;~ 0FBC:0B45
cs=0xfbc;eip=0x000b48; 	T(ADD(ax, 0x190));	// 28612 add     ax, 190h ;~ 0FBC:0B48
cs=0xfbc;eip=0x000b4b; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28613 cmp     ax, [bp+var_6] ;~ 0FBC:0B4B
cs=0xfbc;eip=0x000b4e; 	R(JG(loc_1ecf3));	// 28614 jg      short loc_1ECF3 ;~ 0FBC:0B4E
cs=0xfbc;eip=0x000b50; 	R(JMP(code_bto_blank));	// 28615 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0B50
loc_1ecf3:
	// 6254 
cs=0xfbc;eip=0x000b53; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 28620 mov     ax, [bp+var_1C] ;~ 0FBC:0B53
cs=0xfbc;eip=0x000b56; 	T(ADD(ax, si));	// 28621 add     ax, si ;~ 0FBC:0B56
cs=0xfbc;eip=0x000b58; 	X(MOV(planindex, ax));	// 28622 mov     planindex, ax ;~ 0FBC:0B58
cs=0xfbc;eip=0x000b5b; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 28623 mov     al, [bp+var_12] ;~ 0FBC:0B5B
cs=0xfbc;eip=0x000b5e; 	X(MOV(current_surf_type, al));	// 28624 mov     current_surf_type, al ;~ 0FBC:0B5E
cs=0xfbc;eip=0x000b61; 	R(JMP(loc_1ebe7));	// 28625 jmp     loc_1EBE7 ;~ 0FBC:0B61
loc_1ed04:
	// 6255 
cs=0xfbc;eip=0x000b64; 	T(CMP(si, 1));	// 28629 cmp     si, 1 ;~ 0FBC:0B64
cs=0xfbc;eip=0x000b67; 	R(JLE(loc_1ed1b));	// 28630 jle     short loc_1ED1B ;~ 0FBC:0B67
cs=0xfbc;eip=0x000b69; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 28631 mov     bx, [bp+arg_0] ;~ 0FBC:0B69
cs=0xfbc;eip=0x000b6c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 28632 mov     ax, [bx+2] ;~ 0FBC:0B6C
cs=0xfbc;eip=0x000b6f; 	T(SUB(ax, terrainheight));	// 28633 sub     ax, terrainHeight ;~ 0FBC:0B6F
cs=0xfbc;eip=0x000b73; 	T(CMP(ax, 0x64));	// 28634 cmp     ax, 64h ; 'd' ;~ 0FBC:0B73
cs=0xfbc;eip=0x000b76; 	R(JGE(loc_1ed1b));	// 28635 jge     short loc_1ED1B ;~ 0FBC:0B76
cs=0xfbc;eip=0x000b78; 	R(JMP(code_bto_loopbase));	// 28636 jmp     code_bto_loopBase ;~ 0FBC:0B78
loc_1ed1b:
	// 6256 
cs=0xfbc;eip=0x000b7b; 	T(MOV(di, si));	// 28641 mov     di, si ;~ 0FBC:0B7B
cs=0xfbc;eip=0x000b7d; 	T(SHL(di, 1));	// 28642 shl     di, 1 ;~ 0FBC:0B7D
cs=0xfbc;eip=0x000b7f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28643 mov     ax, [bp+var_6] ;~ 0FBC:0B7F
cs=0xfbc;eip=0x000b82; 	T(CMP(*(dw*)(((db*)&loopsurface_xbounds0)+di), ax));	// 28644 cmp     loopSurface_XBounds0[di], ax ;~ 0FBC:0B82
cs=0xfbc;eip=0x000b86; 	R(JLE(loc_1ed2b));	// 28645 jle     short loc_1ED2B ;~ 0FBC:0B86
cs=0xfbc;eip=0x000b88; 	R(JMP(code_bto_loopbase));	// 28646 jmp     code_bto_loopBase ;~ 0FBC:0B88
loc_1ed2b:
	// 6257 
cs=0xfbc;eip=0x000b8b; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_xbounds1)+di)));	// 28650 mov     ax, loopSurface_XBounds1[di] ;~ 0FBC:0B8B
cs=0xfbc;eip=0x000b8f; 	T(ADD(ax, 0x190));	// 28651 add     ax, 190h ;~ 0FBC:0B8F
cs=0xfbc;eip=0x000b92; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28652 cmp     ax, [bp+var_6] ;~ 0FBC:0B92
cs=0xfbc;eip=0x000b95; 	R(JL(code_bto_loopbase));	// 28653 jl      short code_bto_loopBase ;~ 0FBC:0B95
cs=0xfbc;eip=0x000b97; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28654 mov     ax, [bp+var_6] ;~ 0FBC:0B97
cs=0xfbc;eip=0x000b9a; 	T(CMP(*(dw*)(((db*)&loopsurface_xbounds1)+di), ax));	// 28655 cmp     loopSurface_XBounds1[di], ax ;~ 0FBC:0B9A
cs=0xfbc;eip=0x000b9e; 	R(JGE(loc_1ed4c));	// 28656 jge     short loc_1ED4C ;~ 0FBC:0B9E
cs=0xfbc;eip=0x000ba0; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_xbounds0)+di)));	// 28657 mov     ax, loopSurface_XBounds0[di] ;~ 0FBC:0BA0
cs=0xfbc;eip=0x000ba4; 	T(ADD(ax, 0x190));	// 28658 add     ax, 190h ;~ 0FBC:0BA4
cs=0xfbc;eip=0x000ba7; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28659 cmp     ax, [bp+var_6] ;~ 0FBC:0BA7
cs=0xfbc;eip=0x000baa; 	R(JG(loc_1ecf3));	// 28660 jg      short loc_1ECF3 ;~ 0FBC:0BAA
loc_1ed4c:
	// 6258 
cs=0xfbc;eip=0x000bac; 	T(MOV(di, si));	// 28663 mov     di, si ;~ 0FBC:0BAC
cs=0xfbc;eip=0x000bae; 	T(SHL(di, 1));	// 28664 shl     di, 1 ;~ 0FBC:0BAE
cs=0xfbc;eip=0x000bb0; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_xbounds0)+di)));	// 28665 mov     ax, loopSurface_XBounds0[di] ;~ 0FBC:0BB0
cs=0xfbc;eip=0x000bb4; 	T(CMP(*(dw*)(((db*)&loopsurface_xbounds1)+di), ax));	// 28666 cmp     loopSurface_XBounds1[di], ax ;~ 0FBC:0BB4
cs=0xfbc;eip=0x000bb8; 	R(JZ(code_bto_loopbase));	// 28667 jz      short code_bto_loopBase ;~ 0FBC:0BB8
cs=0xfbc;eip=0x000bba; 	T(MOV(di, si));	// 28668 mov     di, si ;~ 0FBC:0BBA
cs=0xfbc;eip=0x000bbc; 	T(SHL(di, 1));	// 28669 shl     di, 1 ;~ 0FBC:0BBC
cs=0xfbc;eip=0x000bbe; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_zbounds1)+di)));	// 28670 mov     ax, loopSurface_ZBounds1[di] ;~ 0FBC:0BBE
cs=0xfbc;eip=0x000bc2; 	T(SUB(ax, *(dw*)(((db*)&loopsurface_zbounds0)+di)));	// 28671 sub     ax, loopSurface_ZBounds0[di] ;~ 0FBC:0BC2
cs=0xfbc;eip=0x000bc6; 	T(CWD);	// 28672 cwd ;~ 0FBC:0BC6
cs=0xfbc;eip=0x000bc7; 	X(PUSH(dx));	// 28673 push    dx ;~ 0FBC:0BC7
cs=0xfbc;eip=0x000bc8; 	X(PUSH(ax));	// 28674 push    ax ;~ 0FBC:0BC8
cs=0xfbc;eip=0x000bc9; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_zbounds0)+di)));	// 28675 mov     ax, loopSurface_ZBounds0[di] ;~ 0FBC:0BC9
cs=0xfbc;eip=0x000bcd; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 28676 sub     ax, [bp+var_1E] ;~ 0FBC:0BCD
cs=0xfbc;eip=0x000bd0; 	T(CWD);	// 28677 cwd ;~ 0FBC:0BD0
cs=0xfbc;eip=0x000bd1; 	X(PUSH(dx));	// 28678 push    dx ;~ 0FBC:0BD1
cs=0xfbc;eip=0x000bd2; 	X(PUSH(ax));	// 28679 push    ax ;~ 0FBC:0BD2
cs=0xfbc;eip=0x000bd3; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_xbounds0)+di)));	// 28680 mov     ax, loopSurface_XBounds0[di] ;~ 0FBC:0BD3
cs=0xfbc;eip=0x000bd7; 	T(SUB(ax, *(dw*)(((db*)&loopsurface_xbounds1)+di)));	// 28681 sub     ax, loopSurface_XBounds1[di] ;~ 0FBC:0BD7
cs=0xfbc;eip=0x000bdb; 	T(CWD);	// 28682 cwd ;~ 0FBC:0BDB
cs=0xfbc;eip=0x000bdc; 	X(PUSH(dx));	// 28683 push    dx ;~ 0FBC:0BDC
cs=0xfbc;eip=0x000bdd; 	X(PUSH(ax));	// 28684 push    ax ;~ 0FBC:0BDD
cs=0xfbc;eip=0x000bde; 	R(CALLF(__aflmul,0));	// 28685 call    __aFlmul ;~ 0FBC:0BDE
cs=0xfbc;eip=0x000be3; 	X(PUSH(dx));	// 28686 push    dx ;~ 0FBC:0BE3
cs=0xfbc;eip=0x000be4; 	X(PUSH(ax));	// 28687 push    ax ;~ 0FBC:0BE4
cs=0xfbc;eip=0x000be5; 	R(CALLF(__afldiv,0));	// 28688 call    __aFldiv ;~ 0FBC:0BE5
cs=0xfbc;eip=0x000bea; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 28689 mov     [bp+var_22], ax ;~ 0FBC:0BEA
cs=0xfbc;eip=0x000bed; 	T(MOV(ax, *(dw*)(((db*)&loopsurface_xbounds0)+di)));	// 28690 mov     ax, loopSurface_XBounds0[di] ;~ 0FBC:0BED
cs=0xfbc;eip=0x000bf1; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_22))));	// 28691 add     ax, [bp+var_22] ;~ 0FBC:0BF1
cs=0xfbc;eip=0x000bf4; 	X(MOV(*(dw*)(raddr(ss,bp+var_3c)), ax));	// 28692 mov     [bp+var_3C], ax ;~ 0FBC:0BF4
cs=0xfbc;eip=0x000bf7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28693 mov     ax, [bp+var_6] ;~ 0FBC:0BF7
cs=0xfbc;eip=0x000bfa; 	T(CMP(*(dw*)(raddr(ss,bp+var_3c)), ax));	// 28694 cmp     [bp+var_3C], ax ;~ 0FBC:0BFA
cs=0xfbc;eip=0x000bfd; 	R(JGE(code_bto_loopbase));	// 28695 jge     short code_bto_loopBase ;~ 0FBC:0BFD
cs=0xfbc;eip=0x000bff; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3c))));	// 28696 mov     ax, [bp+var_3C] ;~ 0FBC:0BFF
cs=0xfbc;eip=0x000c02; 	T(ADD(ax, 0x190));	// 28697 add     ax, 190h ;~ 0FBC:0C02
cs=0xfbc;eip=0x000c05; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_6))));	// 28698 cmp     ax, [bp+var_6] ;~ 0FBC:0C05
cs=0xfbc;eip=0x000c08; 	R(JLE(code_bto_loopbase));	// 28699 jle     short code_bto_loopBase ;~ 0FBC:0C08
cs=0xfbc;eip=0x000c0a; 	R(JMP(loc_1ecf3));	// 28700 jmp     loc_1ECF3 ;~ 0FBC:0C0A
code_bto_loopbase:
	// 6259 
cs=0xfbc;eip=0x000c0d; 	T(SUB(si, si));	// 28705 sub     si, si ;~ 0FBC:0C0D
cs=0xfbc;eip=0x000c0f; 	R(JMP(loc_1edb3));	// 28706 jmp     short loc_1EDB3 ;~ 0FBC:0C0F
loc_1edb2:
	// 6260 
cs=0xfbc;eip=0x000c12; 	T(INC(si));	// 28711 inc     si ;~ 0FBC:0C12
loc_1edb3:
	// 6261 
cs=0xfbc;eip=0x000c13; 	T(MOV(bx, si));	// 28714 mov     bx, si ;~ 0FBC:0C13
cs=0xfbc;eip=0x000c15; 	T(SHL(bx, 1));	// 28715 shl     bx, 1 ;~ 0FBC:0C15
cs=0xfbc;eip=0x000c17; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 28716 mov     ax, [bp+var_2] ;~ 0FBC:0C17
cs=0xfbc;eip=0x000c1a; 	T(CMP(*(dw*)(((db*)&loopbase_zbounds1)+bx), ax));	// 28717 cmp     loopBase_ZBounds1[bx], ax ;~ 0FBC:0C1A
cs=0xfbc;eip=0x000c1e; 	R(JL(loc_1edb2));	// 28718 jl      short loc_1EDB2 ;~ 0FBC:0C1E
cs=0xfbc;eip=0x000c20; 	T(MOV(di, si));	// 28719 mov     di, si ;~ 0FBC:0C20
cs=0xfbc;eip=0x000c22; 	T(SHL(di, 1));	// 28720 shl     di, 1 ;~ 0FBC:0C22
cs=0xfbc;eip=0x000c24; 	T(MOV(ax, *(dw*)(((db*)&loopbase_zbounds1)+di)));	// 28721 mov     ax, loopBase_ZBounds1[di] ;~ 0FBC:0C24
cs=0xfbc;eip=0x000c28; 	T(SUB(ax, *(dw*)(((db*)&loopbase_zbounds0)+di)));	// 28722 sub     ax, loopBase_ZBounds0[di] ;~ 0FBC:0C28
cs=0xfbc;eip=0x000c2c; 	T(CWD);	// 28723 cwd ;~ 0FBC:0C2C
cs=0xfbc;eip=0x000c2d; 	X(PUSH(dx));	// 28724 push    dx ;~ 0FBC:0C2D
cs=0xfbc;eip=0x000c2e; 	X(PUSH(ax));	// 28725 push    ax ;~ 0FBC:0C2E
cs=0xfbc;eip=0x000c2f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 28726 mov     ax, [bp+var_2] ;~ 0FBC:0C2F
cs=0xfbc;eip=0x000c32; 	T(SUB(ax, *(dw*)(((db*)&loopbase_zbounds0)+di)));	// 28727 sub     ax, loopBase_ZBounds0[di] ;~ 0FBC:0C32
cs=0xfbc;eip=0x000c36; 	T(CWD);	// 28728 cwd ;~ 0FBC:0C36
cs=0xfbc;eip=0x000c37; 	X(PUSH(dx));	// 28729 push    dx ;~ 0FBC:0C37
cs=0xfbc;eip=0x000c38; 	X(PUSH(ax));	// 28730 push    ax ;~ 0FBC:0C38
cs=0xfbc;eip=0x000c39; 	T(MOV(ax, *(dw*)(((db*)&loopbase_innxbounds1)+di)));	// 28731 mov     ax, loopBase_InnXBounds1[di] ;~ 0FBC:0C39
cs=0xfbc;eip=0x000c3d; 	T(SUB(ax, *(dw*)(((db*)&loopbae_innxbounds0)+di)));	// 28732 sub     ax, loopBae_InnXBounds0[di] ;~ 0FBC:0C3D
cs=0xfbc;eip=0x000c41; 	T(CWD);	// 28733 cwd ;~ 0FBC:0C41
cs=0xfbc;eip=0x000c42; 	X(PUSH(dx));	// 28734 push    dx ;~ 0FBC:0C42
cs=0xfbc;eip=0x000c43; 	X(PUSH(ax));	// 28735 push    ax ;~ 0FBC:0C43
cs=0xfbc;eip=0x000c44; 	R(CALLF(__aflmul,0));	// 28736 call    __aFlmul ;~ 0FBC:0C44
cs=0xfbc;eip=0x000c49; 	X(PUSH(dx));	// 28737 push    dx ;~ 0FBC:0C49
cs=0xfbc;eip=0x000c4a; 	X(PUSH(ax));	// 28738 push    ax ;~ 0FBC:0C4A
cs=0xfbc;eip=0x000c4b; 	R(CALLF(__afldiv,0));	// 28739 call    __aFldiv ;~ 0FBC:0C4B
cs=0xfbc;eip=0x000c50; 	T(ADD(ax, *(dw*)(((db*)&loopbae_innxbounds0)+di)));	// 28740 add     ax, loopBae_InnXBounds0[di] ;~ 0FBC:0C50
cs=0xfbc;eip=0x000c54; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 28741 mov     [bp+var_1E], ax ;~ 0FBC:0C54
cs=0xfbc;eip=0x000c57; 	T(MOV(ax, *(dw*)(((db*)&loopbase_zbounds1)+di)));	// 28742 mov     ax, loopBase_ZBounds1[di] ;~ 0FBC:0C57
cs=0xfbc;eip=0x000c5b; 	T(SUB(ax, *(dw*)(((db*)&loopbase_zbounds0)+di)));	// 28743 sub     ax, loopBase_ZBounds0[di] ;~ 0FBC:0C5B
cs=0xfbc;eip=0x000c5f; 	T(CWD);	// 28744 cwd ;~ 0FBC:0C5F
cs=0xfbc;eip=0x000c60; 	X(PUSH(dx));	// 28745 push    dx ;~ 0FBC:0C60
cs=0xfbc;eip=0x000c61; 	X(PUSH(ax));	// 28746 push    ax ;~ 0FBC:0C61
cs=0xfbc;eip=0x000c62; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 28747 mov     ax, [bp+var_2] ;~ 0FBC:0C62
cs=0xfbc;eip=0x000c65; 	T(SUB(ax, *(dw*)(((db*)&loopbase_zbounds0)+di)));	// 28748 sub     ax, loopBase_ZBounds0[di] ;~ 0FBC:0C65
cs=0xfbc;eip=0x000c69; 	T(CWD);	// 28749 cwd ;~ 0FBC:0C69
cs=0xfbc;eip=0x000c6a; 	X(PUSH(dx));	// 28750 push    dx ;~ 0FBC:0C6A
cs=0xfbc;eip=0x000c6b; 	X(PUSH(ax));	// 28751 push    ax ;~ 0FBC:0C6B
cs=0xfbc;eip=0x000c6c; 	T(MOV(ax, *(dw*)(((db*)&loopbase_outxbounds1)+di)));	// 28752 mov     ax, loopBase_OutXBounds1[di] ;~ 0FBC:0C6C
cs=0xfbc;eip=0x000c70; 	T(SUB(ax, *(dw*)(((db*)&loopbase_outxbounds0)+di)));	// 28753 sub     ax, loopBase_OutXBounds0[di] ;~ 0FBC:0C70
cs=0xfbc;eip=0x000c74; 	T(CWD);	// 28754 cwd ;~ 0FBC:0C74
cs=0xfbc;eip=0x000c75; 	X(PUSH(dx));	// 28755 push    dx ;~ 0FBC:0C75
cs=0xfbc;eip=0x000c76; 	X(PUSH(ax));	// 28756 push    ax ;~ 0FBC:0C76
cs=0xfbc;eip=0x000c77; 	R(CALLF(__aflmul,0));	// 28757 call    __aFlmul ;~ 0FBC:0C77
cs=0xfbc;eip=0x000c7c; 	X(PUSH(dx));	// 28758 push    dx ;~ 0FBC:0C7C
cs=0xfbc;eip=0x000c7d; 	X(PUSH(ax));	// 28759 push    ax ;~ 0FBC:0C7D
cs=0xfbc;eip=0x000c7e; 	R(CALLF(__afldiv,0));	// 28760 call    __aFldiv ;~ 0FBC:0C7E
cs=0xfbc;eip=0x000c83; 	T(ADD(ax, *(dw*)(((db*)&loopbase_outxbounds0)+di)));	// 28761 add     ax, loopBase_OutXBounds0[di] ;~ 0FBC:0C83
cs=0xfbc;eip=0x000c87; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 28762 mov     [bp+var_22], ax ;~ 0FBC:0C87
cs=0xfbc;eip=0x000c8a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 28763 mov     ax, [bp+var_1E] ;~ 0FBC:0C8A
cs=0xfbc;eip=0x000c8d; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 28764 cmp     [bp+var_6], ax ;~ 0FBC:0C8D
cs=0xfbc;eip=0x000c90; 	R(JGE(loc_1ee35));	// 28765 jge     short loc_1EE35 ;~ 0FBC:0C90
cs=0xfbc;eip=0x000c92; 	R(JMP(code_bto_blank));	// 28766 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0C92
loc_1ee35:
	// 6262 
cs=0xfbc;eip=0x000c95; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 28770 mov     ax, [bp+var_22] ;~ 0FBC:0C95
cs=0xfbc;eip=0x000c98; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 28771 cmp     [bp+var_6], ax ;~ 0FBC:0C98
cs=0xfbc;eip=0x000c9b; 	R(JMP(loc_1e8dc));	// 28772 jmp     loc_1E8DC ;~ 0FBC:0C9B
code_bto_tunnel:
	// 6263 
cs=0xfbc;eip=0x000c9e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 28777 mov     bx, [bp+arg_0]  ; jumptable 0001E5B2 case 28 ;~ 0FBC:0C9E
cs=0xfbc;eip=0x000ca1; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 28778 mov     ax, [bx+2] ;~ 0FBC:0CA1
cs=0xfbc;eip=0x000ca4; 	T(SUB(ax, terrainheight));	// 28779 sub     ax, terrainHeight ;~ 0FBC:0CA4
cs=0xfbc;eip=0x000ca8; 	T(CMP(ax, 0x90));	// 28780 cmp     ax, 90h ; 'ê' ;~ 0FBC:0CA8
cs=0xfbc;eip=0x000cab; 	R(JGE(loc_1ee5c));	// 28781 jge     short loc_1EE5C ;~ 0FBC:0CAB
cs=0xfbc;eip=0x000cad; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 28782 mov     bx, [bp+arg_2] ;~ 0FBC:0CAD
cs=0xfbc;eip=0x000cb0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 28783 mov     ax, [bx+2] ;~ 0FBC:0CB0
cs=0xfbc;eip=0x000cb3; 	T(SUB(ax, terrainheight));	// 28784 sub     ax, terrainHeight ;~ 0FBC:0CB3
cs=0xfbc;eip=0x000cb7; 	T(CMP(ax, 0x90));	// 28785 cmp     ax, 90h ; 'ê' ;~ 0FBC:0CB7
cs=0xfbc;eip=0x000cba; 	R(JL(loc_1ee76));	// 28786 jl      short loc_1EE76 ;~ 0FBC:0CBA
loc_1ee5c:
	// 6264 
cs=0xfbc;eip=0x000cbc; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x10E));	// 28789 cmp     [bp+var_32], 10Eh ;~ 0FBC:0CBC
cs=0xfbc;eip=0x000cc1; 	R(JL(loc_1ee66));	// 28790 jl      short loc_1EE66 ;~ 0FBC:0CC1
cs=0xfbc;eip=0x000cc3; 	R(JMP(code_bto_blank));	// 28791 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0CC3
loc_1ee66:
	// 6265 
cs=0xfbc;eip=0x000cc6; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 28795 mov     al, [bp+var_12] ;~ 0FBC:0CC6
cs=0xfbc;eip=0x000cc9; 	X(MOV(current_surf_type, al));	// 28796 mov     current_surf_type, al ;~ 0FBC:0CC9
cs=0xfbc;eip=0x000ccc; 	X(MOV(planindex, 0x85));	// 28797 mov     planindex, 85h ; 'Ö' ;~ 0FBC:0CCC
cs=0xfbc;eip=0x000cd2; 	R(JMP(code_bto_blank));	// 28798 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0CD2
loc_1ee76:
	// 6266 
cs=0xfbc;eip=0x000cd6; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 28803 cmp     [bp+var_32], 78h ; 'x' ;~ 0FBC:0CD6
cs=0xfbc;eip=0x000cda; 	R(JGE(loc_1ee82));	// 28804 jge     short loc_1EE82 ;~ 0FBC:0CDA
cs=0xfbc;eip=0x000cdc; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 28805 mov     al, [bp+var_12] ;~ 0FBC:0CDC
cs=0xfbc;eip=0x000cdf; 	X(MOV(current_surf_type, al));	// 28806 mov     current_surf_type, al ;~ 0FBC:0CDF
loc_1ee82:
	// 6267 
cs=0xfbc;eip=0x000ce2; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x78));	// 28809 cmp     [bp+var_2C], 78h ; 'x' ;~ 0FBC:0CE2
cs=0xfbc;eip=0x000ce6; 	R(JL(loc_1eec6));	// 28810 jl      short loc_1EEC6 ;~ 0FBC:0CE6
cs=0xfbc;eip=0x000ce8; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x10E));	// 28811 cmp     [bp+var_2C], 10Eh ;~ 0FBC:0CE8
cs=0xfbc;eip=0x000ced; 	R(JG(loc_1eec6));	// 28812 jg      short loc_1EEC6 ;~ 0FBC:0CED
cs=0xfbc;eip=0x000cef; 	X(MOV(wallheight, 0x90));	// 28813 mov     wallHeight, 90h ; 'ê' ;~ 0FBC:0CEF
cs=0xfbc;eip=0x000cf5; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FE00));	// 28814 cmp     [bp+var_14], 0FE00h ;~ 0FBC:0CF5
cs=0xfbc;eip=0x000cfa; 	R(JLE(loc_1eee6));	// 28815 jle     short loc_1EEE6 ;~ 0FBC:0CFA
cs=0xfbc;eip=0x000cfc; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x200));	// 28816 cmp     [bp+var_14], 200h ;~ 0FBC:0CFC
cs=0xfbc;eip=0x000d01; 	R(JGE(loc_1eef7));	// 28817 jge     short loc_1EEF7 ;~ 0FBC:0D01
cs=0xfbc;eip=0x000d03; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x78));	// 28818 cmp     [bp+var_18], 78h ; 'x' ;~ 0FBC:0D03
cs=0xfbc;eip=0x000d07; 	R(JG(loc_1eeb2));	// 28819 jg      short loc_1EEB2 ;~ 0FBC:0D07
cs=0xfbc;eip=0x000d09; 	X(MOV(wallindex, 0x98));	// 28820 mov     wallindex, 98h ;~ 0FBC:0D09
cs=0xfbc;eip=0x000d0f; 	R(JMP(code_bto_blank));	// 28821 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0D0F
loc_1eeb2:
	// 6268 
cs=0xfbc;eip=0x000d12; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x10E));	// 28825 cmp     [bp+var_18], 10Eh ;~ 0FBC:0D12
cs=0xfbc;eip=0x000d17; 	R(JGE(loc_1eebc));	// 28826 jge     short loc_1EEBC ;~ 0FBC:0D17
cs=0xfbc;eip=0x000d19; 	R(JMP(code_bto_blank));	// 28827 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0D19
loc_1eebc:
	// 6269 
cs=0xfbc;eip=0x000d1c; 	X(MOV(wallindex, 0x96));	// 28831 mov     wallindex, 96h ; 'ñ' ;~ 0FBC:0D1C
cs=0xfbc;eip=0x000d22; 	R(JMP(code_bto_blank));	// 28832 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0D22
loc_1eec6:
	// 6270 
cs=0xfbc;eip=0x000d26; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FF88));	// 28838 cmp     [bp+var_2C], 0FF88h ;~ 0FBC:0D26
cs=0xfbc;eip=0x000d2a; 	R(JLE(loc_1eecf));	// 28839 jle     short loc_1EECF ;~ 0FBC:0D2A
cs=0xfbc;eip=0x000d2c; 	R(JMP(code_bto_blank));	// 28840 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0D2C
loc_1eecf:
	// 6271 
cs=0xfbc;eip=0x000d2f; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FEF2));	// 28844 cmp     [bp+var_2C], 0FEF2h ;~ 0FBC:0D2F
cs=0xfbc;eip=0x000d34; 	R(JGE(loc_1eed9));	// 28845 jge     short loc_1EED9 ;~ 0FBC:0D34
cs=0xfbc;eip=0x000d36; 	R(JMP(code_bto_blank));	// 28846 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0D36
loc_1eed9:
	// 6272 
cs=0xfbc;eip=0x000d39; 	X(MOV(wallheight, 0x90));	// 28850 mov     wallHeight, 90h ; 'ê' ;~ 0FBC:0D39
cs=0xfbc;eip=0x000d3f; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FE00));	// 28851 cmp     [bp+var_14], 0FE00h ;~ 0FBC:0D3F
cs=0xfbc;eip=0x000d44; 	R(JG(loc_1eef0));	// 28852 jg      short loc_1EEF0 ;~ 0FBC:0D44
loc_1eee6:
	// 6273 
cs=0xfbc;eip=0x000d46; 	X(MOV(wallindex, 0x9A));	// 28855 mov     wallindex, 9Ah ; 'ö' ;~ 0FBC:0D46
cs=0xfbc;eip=0x000d4c; 	R(JMP(code_bto_blank));	// 28856 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0D4C
loc_1eef0:
	// 6274 
cs=0xfbc;eip=0x000d50; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x200));	// 28861 cmp     [bp+var_14], 200h ;~ 0FBC:0D50
cs=0xfbc;eip=0x000d55; 	R(JL(loc_1ef00));	// 28862 jl      short loc_1EF00 ;~ 0FBC:0D55
loc_1eef7:
	// 6275 
cs=0xfbc;eip=0x000d57; 	X(MOV(wallindex, 0x99));	// 28865 mov     wallindex, 99h ; 'ô' ;~ 0FBC:0D57
cs=0xfbc;eip=0x000d5d; 	R(JMP(code_bto_blank));	// 28866 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0D5D
loc_1ef00:
	// 6276 
cs=0xfbc;eip=0x000d60; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF88));	// 28870 cmp     [bp+var_18], 0FF88h ;~ 0FBC:0D60
cs=0xfbc;eip=0x000d64; 	R(JL(loc_1ef10));	// 28871 jl      short loc_1EF10 ;~ 0FBC:0D64
cs=0xfbc;eip=0x000d66; 	X(MOV(wallindex, 0x97));	// 28872 mov     wallindex, 97h ; 'ó' ;~ 0FBC:0D66
cs=0xfbc;eip=0x000d6c; 	R(JMP(code_bto_blank));	// 28873 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0D6C
loc_1ef10:
	// 6277 
cs=0xfbc;eip=0x000d70; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FEF2));	// 28878 cmp     [bp+var_18], 0FEF2h ;~ 0FBC:0D70
cs=0xfbc;eip=0x000d75; 	R(JLE(loc_1ef1a));	// 28879 jle     short loc_1EF1A ;~ 0FBC:0D75
cs=0xfbc;eip=0x000d77; 	R(JMP(code_bto_blank));	// 28880 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0D77
loc_1ef1a:
	// 6278 
cs=0xfbc;eip=0x000d7a; 	X(MOV(wallindex, 0x95));	// 28884 mov     wallindex, 95h ; 'ï' ;~ 0FBC:0D7A
cs=0xfbc;eip=0x000d80; 	R(JMP(code_bto_blank));	// 28885 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0D80
code_bto_pipeentrance:
	// 6279 
cs=0xfbc;eip=0x000d84; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 28891 cmp     [bp+var_18], 0  ; jumptable 0001E5B2 case 29 ;~ 0FBC:0D84
cs=0xfbc;eip=0x000d88; 	R(JGE(loc_1ef32));	// 28892 jge     short loc_1EF32 ;~ 0FBC:0D88
cs=0xfbc;eip=0x000d8a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 28893 mov     ax, [bp+var_18] ;~ 0FBC:0D8A
cs=0xfbc;eip=0x000d8d; 	T(NEG(ax));	// 28894 neg     ax ;~ 0FBC:0D8D
cs=0xfbc;eip=0x000d8f; 	R(JMP(loc_1ef35));	// 28895 jmp     short loc_1EF35 ;~ 0FBC:0D8F
loc_1ef32:
	// 6280 
cs=0xfbc;eip=0x000d92; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 28900 mov     ax, [bp+var_18] ;~ 0FBC:0D92
loc_1ef35:
	// 6281 
cs=0xfbc;eip=0x000d95; 	T(CMP(ax, 0x73));	// 28903 cmp     ax, 73h ; 's' ;~ 0FBC:0D95
cs=0xfbc;eip=0x000d98; 	R(JL(loc_1ef60));	// 28904 jl      short loc_1EF60 ;~ 0FBC:0D98
cs=0xfbc;eip=0x000d9a; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x0A4));	// 28905 cmp     [bp+var_32], 0A4h ; '§' ;~ 0FBC:0D9A
cs=0xfbc;eip=0x000d9f; 	R(JG(loc_1ef60));	// 28906 jg      short loc_1EF60 ;~ 0FBC:0D9F
cs=0xfbc;eip=0x000da1; 	X(MOV(wallheight, 0x97));	// 28907 mov     wallHeight, 97h ; 'ó' ;~ 0FBC:0DA1
cs=0xfbc;eip=0x000da7; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 28908 cmp     [bp+var_18], 0 ;~ 0FBC:0DA7
cs=0xfbc;eip=0x000dab; 	R(JLE(loc_1ef56));	// 28909 jle     short loc_1EF56 ;~ 0FBC:0DAB
cs=0xfbc;eip=0x000dad; 	X(MOV(wallindex, 0x9F));	// 28910 mov     wallindex, 9Fh ; 'ü' ;~ 0FBC:0DAD
cs=0xfbc;eip=0x000db3; 	R(JMP(code_bto_blank));	// 28911 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0DB3
loc_1ef56:
	// 6282 
cs=0xfbc;eip=0x000db6; 	X(MOV(wallindex, 0x0A0));	// 28915 mov     wallindex, 0A0h ; '†' ;~ 0FBC:0DB6
cs=0xfbc;eip=0x000dbc; 	R(JMP(code_bto_blank));	// 28916 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0DBC
loc_1ef60:
	// 6283 
cs=0xfbc;eip=0x000dc0; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x73));	// 28922 cmp     [bp+var_32], 73h ; 's' ;~ 0FBC:0DC0
cs=0xfbc;eip=0x000dc4; 	R(JL(loc_1ef69));	// 28923 jl      short loc_1EF69 ;~ 0FBC:0DC4
cs=0xfbc;eip=0x000dc6; 	R(JMP(code_bto_blank));	// 28924 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0DC6
loc_1ef69:
	// 6284 
cs=0xfbc;eip=0x000dc9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 28928 mov     bx, [bp+arg_0] ;~ 0FBC:0DC9
cs=0xfbc;eip=0x000dcc; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 28929 mov     ax, [bx+2] ;~ 0FBC:0DCC
cs=0xfbc;eip=0x000dcf; 	T(SUB(ax, terrainheight));	// 28930 sub     ax, terrainHeight ;~ 0FBC:0DCF
cs=0xfbc;eip=0x000dd3; 	T(CMP(ax, 0x0AB));	// 28931 cmp     ax, 0ABh ; '´' ;~ 0FBC:0DD3
cs=0xfbc;eip=0x000dd6; 	R(JL(loc_1ef7b));	// 28932 jl      short loc_1EF7B ;~ 0FBC:0DD6
cs=0xfbc;eip=0x000dd8; 	R(JMP(code_bto_blank));	// 28933 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0DD8
loc_1ef7b:
	// 6285 
cs=0xfbc;eip=0x000ddb; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 28937 mov     al, [bp+var_12] ;~ 0FBC:0DDB
cs=0xfbc;eip=0x000dde; 	X(MOV(current_surf_type, al));	// 28938 mov     current_surf_type, al ;~ 0FBC:0DDE
cs=0xfbc;eip=0x000de1; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x1F));	// 28939 cmp     [bp+var_32], 1Fh ;~ 0FBC:0DE1
cs=0xfbc;eip=0x000de5; 	R(JGE(loc_1ef90));	// 28940 jge     short loc_1EF90 ;~ 0FBC:0DE5
cs=0xfbc;eip=0x000de7; 	X(MOV(planindex, 0x46));	// 28941 mov     planindex, 46h ; 'F' ;~ 0FBC:0DE7
cs=0xfbc;eip=0x000ded; 	R(JMP(code_bto_blank));	// 28942 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0DED
loc_1ef90:
	// 6286 
cs=0xfbc;eip=0x000df0; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FFAC));	// 28946 cmp     [bp+var_2C], 0FFACh ;~ 0FBC:0DF0
cs=0xfbc;eip=0x000df4; 	R(JGE(loc_1efa6));	// 28947 jge     short loc_1EFA6 ;~ 0FBC:0DF4
cs=0xfbc;eip=0x000df6; 	X(MOV(planindex, 0x49));	// 28948 mov     planindex, 49h ; 'I' ;~ 0FBC:0DF6
cs=0xfbc;eip=0x000dfc; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0x0FF9C));	// 28949 mov     [bp+var_1E], 0FF9Ch ;~ 0FBC:0DFC
cs=0xfbc;eip=0x000e01; 	T(MOV(si, 0x0FFFB));	// 28950 mov     si, 0FFFBh ;~ 0FBC:0E01
cs=0xfbc;eip=0x000e04; 	R(JMP(loc_1efe0));	// 28951 jmp     short loc_1EFE0 ;~ 0FBC:0E04
loc_1efa6:
	// 6287 
cs=0xfbc;eip=0x000e06; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 28955 cmp     [bp+var_2C], 0 ;~ 0FBC:0E06
cs=0xfbc;eip=0x000e0a; 	R(JGE(loc_1efbc));	// 28956 jge     short loc_1EFBC ;~ 0FBC:0E0A
cs=0xfbc;eip=0x000e0c; 	X(MOV(planindex, 0x47));	// 28957 mov     planindex, 47h ; 'G' ;~ 0FBC:0E0C
cs=0xfbc;eip=0x000e12; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0x0FFC7));	// 28958 mov     [bp+var_1E], 0FFC7h ;~ 0FBC:0E12
cs=0xfbc;eip=0x000e17; 	T(MOV(si, 0x0FFF8));	// 28959 mov     si, 0FFF8h ;~ 0FBC:0E17
cs=0xfbc;eip=0x000e1a; 	R(JMP(loc_1efe0));	// 28960 jmp     short loc_1EFE0 ;~ 0FBC:0E1A
loc_1efbc:
	// 6288 
cs=0xfbc;eip=0x000e1c; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x54));	// 28964 cmp     [bp+var_2C], 54h ; 'T' ;~ 0FBC:0E1C
cs=0xfbc;eip=0x000e20; 	R(JLE(loc_1efd2));	// 28965 jle     short loc_1EFD2 ;~ 0FBC:0E20
cs=0xfbc;eip=0x000e22; 	X(MOV(planindex, 0x4D));	// 28966 mov     planindex, 4Dh ; 'M' ;~ 0FBC:0E22
cs=0xfbc;eip=0x000e28; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0x64));	// 28967 mov     [bp+var_1E], 64h ; 'd' ;~ 0FBC:0E28
cs=0xfbc;eip=0x000e2d; 	T(MOV(si, 5));	// 28968 mov     si, 5 ;~ 0FBC:0E2D
cs=0xfbc;eip=0x000e30; 	R(JMP(loc_1efe0));	// 28969 jmp     short loc_1EFE0 ;~ 0FBC:0E30
loc_1efd2:
	// 6289 
cs=0xfbc;eip=0x000e32; 	X(MOV(planindex, 0x4B));	// 28973 mov     planindex, 4Bh ; 'K' ;~ 0FBC:0E32
cs=0xfbc;eip=0x000e38; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0x39));	// 28974 mov     [bp+var_1E], 39h ; '9' ;~ 0FBC:0E38
cs=0xfbc;eip=0x000e3d; 	T(MOV(si, 8));	// 28975 mov     si, 8 ;~ 0FBC:0E3D
loc_1efe0:
	// 6290 
cs=0xfbc;eip=0x000e40; 	X(PUSH(*(dw*)(raddr(ss,bp+var_28))));	// 28979 push    [bp+var_28] ;~ 0FBC:0E40
cs=0xfbc;eip=0x000e43; 	X(PUSH(si));	// 28980 push    si ;~ 0FBC:0E43
cs=0xfbc;eip=0x000e44; 	R(CALLF(sin_fast,0));	// 28981 call    sin_fast ;~ 0FBC:0E44
cs=0xfbc;eip=0x000e49; 	T(ADD(sp, 2));	// 28982 add     sp, 2 ;~ 0FBC:0E49
cs=0xfbc;eip=0x000e4c; 	X(PUSH(ax));	// 28983 push    ax ;~ 0FBC:0E4C
cs=0xfbc;eip=0x000e4d; 	R(CALLF(multiply_and_scale,0));	// 28984 call    multiply_and_scale ;~ 0FBC:0E4D
cs=0xfbc;eip=0x000e52; 	T(ADD(sp, 4));	// 28985 add     sp, 4 ;~ 0FBC:0E52
cs=0xfbc;eip=0x000e55; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_2c))));	// 28986 mov     cx, [bp+var_2C] ;~ 0FBC:0E55
cs=0xfbc;eip=0x000e58; 	T(SUB(cx, *(dw*)(raddr(ss,bp+var_1e))));	// 28987 sub     cx, [bp+var_1E] ;~ 0FBC:0E58
cs=0xfbc;eip=0x000e5b; 	X(PUSH(cx));	// 28988 push    cx ;~ 0FBC:0E5B
cs=0xfbc;eip=0x000e5c; 	X(PUSH(si));	// 28989 push    si ;~ 0FBC:0E5C
cs=0xfbc;eip=0x000e5d; 	T(MOV(di, ax));	// 28990 mov     di, ax ;~ 0FBC:0E5D
cs=0xfbc;eip=0x000e5f; 	R(CALLF(cos_fast,0));	// 28991 call    cos_fast ;~ 0FBC:0E5F
cs=0xfbc;eip=0x000e64; 	T(ADD(sp, 2));	// 28992 add     sp, 2 ;~ 0FBC:0E64
cs=0xfbc;eip=0x000e67; 	X(PUSH(ax));	// 28993 push    ax ;~ 0FBC:0E67
cs=0xfbc;eip=0x000e68; 	R(CALLF(multiply_and_scale,0));	// 28994 call    multiply_and_scale ;~ 0FBC:0E68
cs=0xfbc;eip=0x000e6d; 	T(ADD(sp, 4));	// 28995 add     sp, 4 ;~ 0FBC:0E6D
cs=0xfbc;eip=0x000e70; 	T(ADD(ax, di));	// 28996 add     ax, di ;~ 0FBC:0E70
cs=0xfbc;eip=0x000e72; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 28997 mov     [bp+var_22], ax ;~ 0FBC:0E72
cs=0xfbc;eip=0x000e75; 	T(OR(ax, ax));	// 28998 or      ax, ax ;~ 0FBC:0E75
cs=0xfbc;eip=0x000e77; 	R(JL(loc_1f01c));	// 28999 jl      short loc_1F01C ;~ 0FBC:0E77
cs=0xfbc;eip=0x000e79; 	R(JMP(code_bto_blank));	// 29000 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0E79
loc_1f01c:
	// 6291 
cs=0xfbc;eip=0x000e7c; 	R(JMP(loc_1eb3f));	// 29004 jmp     loc_1EB3F ;~ 0FBC:0E7C
code_bto_halfpipe:
	// 6292 
cs=0xfbc;eip=0x000e80; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 1));	// 29010 mov     [bp+var_22], 1  ; jumptable 0001E5B2 case 31 ;~ 0FBC:0E80
cs=0xfbc;eip=0x000e85; 	R(JMP(loc_1f02d));	// 29011 jmp     short loc_1F02D ;~ 0FBC:0E85
code_bto_pipe:
	// 6293 
cs=0xfbc;eip=0x000e88; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 0));	// 29017 mov     [bp+var_22], 0  ; jumptable 0001E5B2 case 30 ;~ 0FBC:0E88
loc_1f02d:
	// 6294 
cs=0xfbc;eip=0x000e8d; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 29020 cmp     [bp+var_18], 0 ;~ 0FBC:0E8D
cs=0xfbc;eip=0x000e91; 	R(JGE(loc_1f03a));	// 29021 jge     short loc_1F03A ;~ 0FBC:0E91
cs=0xfbc;eip=0x000e93; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 29022 mov     ax, [bp+var_18] ;~ 0FBC:0E93
cs=0xfbc;eip=0x000e96; 	T(NEG(ax));	// 29023 neg     ax ;~ 0FBC:0E96
cs=0xfbc;eip=0x000e98; 	R(JMP(loc_1f03d));	// 29024 jmp     short loc_1F03D ;~ 0FBC:0E98
loc_1f03a:
	// 6295 
cs=0xfbc;eip=0x000e9a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 29028 mov     ax, [bp+var_18] ;~ 0FBC:0E9A
loc_1f03d:
	// 6296 
cs=0xfbc;eip=0x000e9d; 	T(CMP(ax, 0x0A4));	// 29031 cmp     ax, 0A4h ; '§' ;~ 0FBC:0E9D
cs=0xfbc;eip=0x000ea0; 	R(JL(loc_1f068));	// 29032 jl      short loc_1F068 ;~ 0FBC:0EA0
cs=0xfbc;eip=0x000ea2; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x0A4));	// 29033 cmp     [bp+var_32], 0A4h ; '§' ;~ 0FBC:0EA2
cs=0xfbc;eip=0x000ea7; 	R(JG(loc_1f068));	// 29034 jg      short loc_1F068 ;~ 0FBC:0EA7
cs=0xfbc;eip=0x000ea9; 	X(MOV(wallheight, 0x97));	// 29035 mov     wallHeight, 97h ; 'ó' ;~ 0FBC:0EA9
cs=0xfbc;eip=0x000eaf; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0));	// 29036 cmp     [bp+var_18], 0 ;~ 0FBC:0EAF
cs=0xfbc;eip=0x000eb3; 	R(JLE(loc_1f05e));	// 29037 jle     short loc_1F05E ;~ 0FBC:0EB3
cs=0xfbc;eip=0x000eb5; 	X(MOV(wallindex, 0x9B));	// 29038 mov     wallindex, 9Bh ; 'õ' ;~ 0FBC:0EB5
cs=0xfbc;eip=0x000ebb; 	R(JMP(code_bto_blank));	// 29039 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0EBB
loc_1f05e:
	// 6297 
cs=0xfbc;eip=0x000ebe; 	X(MOV(wallindex, 0x9C));	// 29043 mov     wallindex, 9Ch ; 'ú' ;~ 0FBC:0EBE
cs=0xfbc;eip=0x000ec4; 	R(JMP(code_bto_blank));	// 29044 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0EC4
loc_1f068:
	// 6298 
cs=0xfbc;eip=0x000ec8; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x0A4));	// 29050 cmp     [bp+var_32], 0A4h ; '§' ;~ 0FBC:0EC8
cs=0xfbc;eip=0x000ecd; 	R(JL(loc_1f072));	// 29051 jl      short loc_1F072 ;~ 0FBC:0ECD
cs=0xfbc;eip=0x000ecf; 	R(JMP(code_bto_blank));	// 29052 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0ECF
loc_1f072:
	// 6299 
cs=0xfbc;eip=0x000ed2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 29056 mov     bx, [bp+arg_0] ;~ 0FBC:0ED2
cs=0xfbc;eip=0x000ed5; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 29057 mov     ax, [bx+2] ;~ 0FBC:0ED5
cs=0xfbc;eip=0x000ed8; 	T(SUB(ax, terrainheight));	// 29058 sub     ax, terrainHeight ;~ 0FBC:0ED8
cs=0xfbc;eip=0x000edc; 	T(CMP(ax, 0x109));	// 29059 cmp     ax, 109h ;~ 0FBC:0EDC
cs=0xfbc;eip=0x000edf; 	R(JL(loc_1f084));	// 29060 jl      short loc_1F084 ;~ 0FBC:0EDF
cs=0xfbc;eip=0x000ee1; 	R(JMP(code_bto_blank));	// 29061 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0EE1
loc_1f084:
	// 6300 
cs=0xfbc;eip=0x000ee4; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x82));	// 29065 cmp     [bp+var_32], 82h ; 'Ç' ;~ 0FBC:0EE4
cs=0xfbc;eip=0x000ee9; 	R(JGE(loc_1f091));	// 29066 jge     short loc_1F091 ;~ 0FBC:0EE9
cs=0xfbc;eip=0x000eeb; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 29067 mov     al, [bp+var_12] ;~ 0FBC:0EEB
cs=0xfbc;eip=0x000eee; 	X(MOV(current_surf_type, al));	// 29068 mov     current_surf_type, al ;~ 0FBC:0EEE
loc_1f091:
	// 6301 
cs=0xfbc;eip=0x000ef1; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 29071 mov     ax, [bx+2] ;~ 0FBC:0EF1
cs=0xfbc;eip=0x000ef4; 	T(SUB(ax, terrainheight));	// 29072 sub     ax, terrainHeight ;~ 0FBC:0EF4
cs=0xfbc;eip=0x000ef8; 	T(CMP(ax, 0x97));	// 29073 cmp     ax, 97h ; 'ó' ;~ 0FBC:0EF8
cs=0xfbc;eip=0x000efb; 	R(JLE(loc_1f0a4));	// 29074 jle     short loc_1F0A4 ;~ 0FBC:0EFB
cs=0xfbc;eip=0x000efd; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 1));	// 29075 mov     [bp+var_1E], 1 ;~ 0FBC:0EFD
cs=0xfbc;eip=0x000f02; 	R(JMP(loc_1f0a9));	// 29076 jmp     short loc_1F0A9 ;~ 0FBC:0F02
loc_1f0a4:
	// 6302 
cs=0xfbc;eip=0x000f04; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29080 mov     [bp+var_1E], 0 ;~ 0FBC:0F04
loc_1f0a9:
	// 6303 
cs=0xfbc;eip=0x000f09; 	T(CMP(*(dw*)(raddr(ss,bp+var_22)), 0));	// 29083 cmp     [bp+var_22], 0 ;~ 0FBC:0F09
cs=0xfbc;eip=0x000f0d; 	R(JZ(loc_1f0e8));	// 29084 jz      short loc_1F0E8 ;~ 0FBC:0F0D
cs=0xfbc;eip=0x000f0f; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29085 cmp     [bp+var_1E], 0 ;~ 0FBC:0F0F
cs=0xfbc;eip=0x000f13; 	R(JNZ(loc_1f0e8));	// 29086 jnz     short loc_1F0E8 ;~ 0FBC:0F13
cs=0xfbc;eip=0x000f15; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x54));	// 29087 cmp     [bp+var_32], 54h ; 'T' ;~ 0FBC:0F15
cs=0xfbc;eip=0x000f19; 	R(JG(loc_1f0e8));	// 29088 jg      short loc_1F0E8 ;~ 0FBC:0F19
cs=0xfbc;eip=0x000f1b; 	T(CMP(*(dw*)(raddr(ss,bp+var_2e)), 0x4B));	// 29089 cmp     [bp+var_2E], 4Bh ; 'K' ;~ 0FBC:0F1B
cs=0xfbc;eip=0x000f1f; 	R(JG(loc_1f0e8));	// 29090 jg      short loc_1F0E8 ;~ 0FBC:0F1F
cs=0xfbc;eip=0x000f21; 	X(MOV(planindex, 0x45));	// 29091 mov     planindex, 45h ; 'E' ;~ 0FBC:0F21
cs=0xfbc;eip=0x000f27; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FFB5));	// 29092 cmp     [bp+var_14], 0FFB5h ;~ 0FBC:0F27
cs=0xfbc;eip=0x000f2b; 	R(JG(loc_1f0d6));	// 29093 jg      short loc_1F0D6 ;~ 0FBC:0F2B
cs=0xfbc;eip=0x000f2d; 	X(MOV(wallindex, 0x9D));	// 29094 mov     wallindex, 9Dh ; 'ù' ;~ 0FBC:0F2D
cs=0xfbc;eip=0x000f33; 	R(JMP(code_bto_blank));	// 29095 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0F33
loc_1f0d6:
	// 6304 
cs=0xfbc;eip=0x000f36; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x4B));	// 29099 cmp     [bp+var_14], 4Bh ; 'K' ;~ 0FBC:0F36
cs=0xfbc;eip=0x000f3a; 	R(JGE(loc_1f0df));	// 29100 jge     short loc_1F0DF ;~ 0FBC:0F3A
cs=0xfbc;eip=0x000f3c; 	R(JMP(code_bto_blank));	// 29101 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0F3C
loc_1f0df:
	// 6305 
cs=0xfbc;eip=0x000f3f; 	X(MOV(wallindex, 0x9E));	// 29105 mov     wallindex, 9Eh ; 'û' ;~ 0FBC:0F3F
cs=0xfbc;eip=0x000f45; 	R(JMP(code_bto_blank));	// 29106 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0F45
loc_1f0e8:
	// 6306 
cs=0xfbc;eip=0x000f48; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 29111 mov     bx, [bp+arg_0] ;~ 0FBC:0F48
cs=0xfbc;eip=0x000f4b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 29112 mov     ax, [bx+2] ;~ 0FBC:0F4B
cs=0xfbc;eip=0x000f4e; 	T(SUB(ax, terrainheight));	// 29113 sub     ax, terrainHeight ;~ 0FBC:0F4E
cs=0xfbc;eip=0x000f52; 	T(CMP(ax, 0x58));	// 29114 cmp     ax, 58h ; 'X' ;~ 0FBC:0F52
cs=0xfbc;eip=0x000f55; 	R(JLE(loc_1f116));	// 29115 jle     short loc_1F116 ;~ 0FBC:0F55
cs=0xfbc;eip=0x000f57; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29116 cmp     [bp+var_1E], 0 ;~ 0FBC:0F57
cs=0xfbc;eip=0x000f5b; 	R(JNZ(loc_1f116));	// 29117 jnz     short loc_1F116 ;~ 0FBC:0F5B
cs=0xfbc;eip=0x000f5d; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 29118 cmp     [bp+var_2C], 0 ;~ 0FBC:0F5D
cs=0xfbc;eip=0x000f61; 	R(JGE(loc_1f10c));	// 29119 jge     short loc_1F10C ;~ 0FBC:0F61
cs=0xfbc;eip=0x000f63; 	X(MOV(planindex, 0x3C));	// 29120 mov     planindex, 3Ch ; '<' ;~ 0FBC:0F63
cs=0xfbc;eip=0x000f69; 	R(JMP(code_bto_blank));	// 29121 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0F69
loc_1f10c:
	// 6307 
cs=0xfbc;eip=0x000f6c; 	X(MOV(planindex, 0x42));	// 29125 mov     planindex, 42h ; 'B' ;~ 0FBC:0F6C
cs=0xfbc;eip=0x000f72; 	R(JMP(code_bto_blank));	// 29126 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0F72
loc_1f116:
	// 6308 
cs=0xfbc;eip=0x000f76; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x1F));	// 29132 cmp     [bp+var_32], 1Fh ;~ 0FBC:0F76
cs=0xfbc;eip=0x000f7a; 	R(JGE(loc_1f136));	// 29133 jge     short loc_1F136 ;~ 0FBC:0F7A
cs=0xfbc;eip=0x000f7c; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29134 cmp     [bp+var_1E], 0 ;~ 0FBC:0F7C
cs=0xfbc;eip=0x000f80; 	R(JZ(loc_1f12c));	// 29135 jz      short loc_1F12C ;~ 0FBC:0F80
cs=0xfbc;eip=0x000f82; 	X(MOV(planindex, 0x3F));	// 29136 mov     planindex, 3Fh ; '?' ;~ 0FBC:0F82
cs=0xfbc;eip=0x000f88; 	R(JMP(code_bto_blank));	// 29137 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0F88
loc_1f12c:
	// 6309 
cs=0xfbc;eip=0x000f8c; 	X(MOV(planindex, 0x39));	// 29142 mov     planindex, 39h ; '9' ;~ 0FBC:0F8C
cs=0xfbc;eip=0x000f92; 	R(JMP(code_bto_blank));	// 29143 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0F92
loc_1f136:
	// 6310 
cs=0xfbc;eip=0x000f96; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FFAC));	// 29148 cmp     [bp+var_2C], 0FFACh ;~ 0FBC:0F96
cs=0xfbc;eip=0x000f9a; 	R(JGE(loc_1f156));	// 29149 jge     short loc_1F156 ;~ 0FBC:0F9A
cs=0xfbc;eip=0x000f9c; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29150 cmp     [bp+var_1E], 0 ;~ 0FBC:0F9C
cs=0xfbc;eip=0x000fa0; 	R(JZ(loc_1f14c));	// 29151 jz      short loc_1F14C ;~ 0FBC:0FA0
cs=0xfbc;eip=0x000fa2; 	X(MOV(planindex, 0x3D));	// 29152 mov     planindex, 3Dh ; '=' ;~ 0FBC:0FA2
cs=0xfbc;eip=0x000fa8; 	R(JMP(code_bto_blank));	// 29153 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0FA8
loc_1f14c:
	// 6311 
cs=0xfbc;eip=0x000fac; 	X(MOV(planindex, 0x3B));	// 29158 mov     planindex, 3Bh ; ';' ;~ 0FBC:0FAC
cs=0xfbc;eip=0x000fb2; 	R(JMP(code_bto_blank));	// 29159 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0FB2
loc_1f156:
	// 6312 
cs=0xfbc;eip=0x000fb6; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 29164 cmp     [bp+var_2C], 0 ;~ 0FBC:0FB6
cs=0xfbc;eip=0x000fba; 	R(JGE(loc_1f176));	// 29165 jge     short loc_1F176 ;~ 0FBC:0FBA
cs=0xfbc;eip=0x000fbc; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29166 cmp     [bp+var_1E], 0 ;~ 0FBC:0FBC
cs=0xfbc;eip=0x000fc0; 	R(JZ(loc_1f16c));	// 29167 jz      short loc_1F16C ;~ 0FBC:0FC0
cs=0xfbc;eip=0x000fc2; 	X(MOV(planindex, 0x3E));	// 29168 mov     planindex, 3Eh ; '>' ;~ 0FBC:0FC2
cs=0xfbc;eip=0x000fc8; 	R(JMP(code_bto_blank));	// 29169 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0FC8
loc_1f16c:
	// 6313 
cs=0xfbc;eip=0x000fcc; 	X(MOV(planindex, 0x3A));	// 29174 mov     planindex, 3Ah ; ':' ;~ 0FBC:0FCC
cs=0xfbc;eip=0x000fd2; 	R(JMP(code_bto_blank));	// 29175 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0FD2
loc_1f176:
	// 6314 
cs=0xfbc;eip=0x000fd6; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x54));	// 29180 cmp     [bp+var_2C], 54h ; 'T' ;~ 0FBC:0FD6
cs=0xfbc;eip=0x000fda; 	R(JLE(loc_1f196));	// 29181 jle     short loc_1F196 ;~ 0FBC:0FDA
cs=0xfbc;eip=0x000fdc; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29182 cmp     [bp+var_1E], 0 ;~ 0FBC:0FDC
cs=0xfbc;eip=0x000fe0; 	R(JZ(loc_1f18c));	// 29183 jz      short loc_1F18C ;~ 0FBC:0FE0
cs=0xfbc;eip=0x000fe2; 	X(MOV(planindex, 0x41));	// 29184 mov     planindex, 41h ; 'A' ;~ 0FBC:0FE2
cs=0xfbc;eip=0x000fe8; 	R(JMP(code_bto_blank));	// 29185 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0FE8
loc_1f18c:
	// 6315 
cs=0xfbc;eip=0x000fec; 	X(MOV(planindex, 0x43));	// 29190 mov     planindex, 43h ; 'C' ;~ 0FBC:0FEC
cs=0xfbc;eip=0x000ff2; 	R(JMP(code_bto_blank));	// 29191 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:0FF2
loc_1f196:
	// 6316 
cs=0xfbc;eip=0x000ff6; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29196 cmp     [bp+var_1E], 0 ;~ 0FBC:0FF6
cs=0xfbc;eip=0x000ffa; 	R(JZ(loc_1f1a6));	// 29197 jz      short loc_1F1A6 ;~ 0FBC:0FFA
cs=0xfbc;eip=0x000ffc; 	X(MOV(planindex, 0x40));	// 29198 mov     planindex, 40h ; '@' ;~ 0FBC:0FFC
cs=0xfbc;eip=0x001002; 	R(JMP(code_bto_blank));	// 29199 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1002
loc_1f1a6:
	// 6317 
cs=0xfbc;eip=0x001006; 	X(MOV(planindex, 0x44));	// 29204 mov     planindex, 44h ; 'D' ;~ 0FBC:1006
cs=0xfbc;eip=0x00100c; 	R(JMP(code_bto_blank));	// 29205 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:100C
code_bto_corklr:
	// 6318 
cs=0xfbc;eip=0x001010; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x96));	// 29211 cmp     [bp+var_32], 96h ; 'ñ' ; jumptable 0001E5B2 case 35 ;~ 0FBC:1010
cs=0xfbc;eip=0x001015; 	R(JL(loc_1f1ba));	// 29212 jl      short loc_1F1BA ;~ 0FBC:1015
cs=0xfbc;eip=0x001017; 	R(JMP(code_bto_blank));	// 29213 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1017
loc_1f1ba:
	// 6319 
cs=0xfbc;eip=0x00101a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 29217 mov     bx, [bp+arg_0] ;~ 0FBC:101A
cs=0xfbc;eip=0x00101d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 29218 mov     ax, [bx+2] ;~ 0FBC:101D
cs=0xfbc;eip=0x001020; 	T(SUB(ax, terrainheight));	// 29219 sub     ax, terrainHeight ;~ 0FBC:1020
cs=0xfbc;eip=0x001024; 	T(CMP(ax, 0x109));	// 29220 cmp     ax, 109h ;~ 0FBC:1024
cs=0xfbc;eip=0x001027; 	R(JL(loc_1f1cc));	// 29221 jl      short loc_1F1CC ;~ 0FBC:1027
cs=0xfbc;eip=0x001029; 	R(JMP(code_bto_blank));	// 29222 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1029
loc_1f1cc:
	// 6320 
cs=0xfbc;eip=0x00102c; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 29226 mov     al, [bp+var_12] ;~ 0FBC:102C
cs=0xfbc;eip=0x00102f; 	X(MOV(current_surf_type, al));	// 29227 mov     current_surf_type, al ;~ 0FBC:102F
cs=0xfbc;eip=0x001032; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 29228 mov     ax, [bx+2] ;~ 0FBC:1032
cs=0xfbc;eip=0x001035; 	T(SUB(ax, terrainheight));	// 29229 sub     ax, terrainHeight ;~ 0FBC:1035
cs=0xfbc;eip=0x001039; 	T(CMP(ax, 0x97));	// 29230 cmp     ax, 97h ; 'ó' ;~ 0FBC:1039
cs=0xfbc;eip=0x00103c; 	R(JLE(loc_1f1e6));	// 29231 jle     short loc_1F1E6 ;~ 0FBC:103C
cs=0xfbc;eip=0x00103e; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 1));	// 29232 mov     [bp+var_1E], 1 ;~ 0FBC:103E
cs=0xfbc;eip=0x001043; 	R(JMP(loc_1f1eb));	// 29233 jmp     short loc_1F1EB ;~ 0FBC:1043
loc_1f1e6:
	// 6321 
cs=0xfbc;eip=0x001046; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29238 mov     [bp+var_1E], 0 ;~ 0FBC:1046
loc_1f1eb:
	// 6322 
cs=0xfbc;eip=0x00104b; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 0));	// 29241 mov     [bp+var_22], 0 ;~ 0FBC:104B
cs=0xfbc;eip=0x001050; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 29242 mov     ax, [bx+2] ;~ 0FBC:1050
cs=0xfbc;eip=0x001053; 	T(SUB(ax, terrainheight));	// 29243 sub     ax, terrainHeight ;~ 0FBC:1053
cs=0xfbc;eip=0x001057; 	T(CMP(ax, 0x58));	// 29244 cmp     ax, 58h ; 'X' ;~ 0FBC:1057
cs=0xfbc;eip=0x00105a; 	R(JLE(loc_1f21a));	// 29245 jle     short loc_1F21A ;~ 0FBC:105A
cs=0xfbc;eip=0x00105c; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29246 cmp     [bp+var_1E], 0 ;~ 0FBC:105C
cs=0xfbc;eip=0x001060; 	R(JNZ(loc_1f21a));	// 29247 jnz     short loc_1F21A ;~ 0FBC:1060
cs=0xfbc;eip=0x001062; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 29248 cmp     [bp+var_2C], 0 ;~ 0FBC:1062
cs=0xfbc;eip=0x001066; 	R(JGE(loc_1f212));	// 29249 jge     short loc_1F212 ;~ 0FBC:1066
cs=0xfbc;eip=0x001068; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 3));	// 29250 mov     [bp+var_22], 3 ;~ 0FBC:1068
cs=0xfbc;eip=0x00106d; 	R(JMP(loc_1f295));	// 29251 jmp     loc_1F295 ;~ 0FBC:106D
loc_1f212:
	// 6323 
cs=0xfbc;eip=0x001072; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 9));	// 29257 mov     [bp+var_22], 9 ;~ 0FBC:1072
cs=0xfbc;eip=0x001077; 	R(JMP(loc_1f295));	// 29258 jmp     short loc_1F295 ;~ 0FBC:1077
loc_1f21a:
	// 6324 
cs=0xfbc;eip=0x00107a; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x1F));	// 29264 cmp     [bp+var_32], 1Fh ;~ 0FBC:107A
cs=0xfbc;eip=0x00107e; 	R(JGE(loc_1f22e));	// 29265 jge     short loc_1F22E ;~ 0FBC:107E
cs=0xfbc;eip=0x001080; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29266 cmp     [bp+var_1E], 0 ;~ 0FBC:1080
cs=0xfbc;eip=0x001084; 	R(JZ(loc_1f295));	// 29267 jz      short loc_1F295 ;~ 0FBC:1084
cs=0xfbc;eip=0x001086; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 6));	// 29268 mov     [bp+var_22], 6 ;~ 0FBC:1086
cs=0xfbc;eip=0x00108b; 	R(JMP(loc_1f295));	// 29269 jmp     short loc_1F295 ;~ 0FBC:108B
loc_1f22e:
	// 6325 
cs=0xfbc;eip=0x00108e; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FFAC));	// 29274 cmp     [bp+var_2C], 0FFACh ;~ 0FBC:108E
cs=0xfbc;eip=0x001092; 	R(JGE(loc_1f24a));	// 29275 jge     short loc_1F24A ;~ 0FBC:1092
cs=0xfbc;eip=0x001094; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29276 cmp     [bp+var_1E], 0 ;~ 0FBC:1094
cs=0xfbc;eip=0x001098; 	R(JZ(loc_1f242));	// 29277 jz      short loc_1F242 ;~ 0FBC:1098
cs=0xfbc;eip=0x00109a; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 4));	// 29278 mov     [bp+var_22], 4 ;~ 0FBC:109A
cs=0xfbc;eip=0x00109f; 	R(JMP(loc_1f295));	// 29279 jmp     short loc_1F295 ;~ 0FBC:109F
loc_1f242:
	// 6326 
cs=0xfbc;eip=0x0010a2; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 2));	// 29284 mov     [bp+var_22], 2 ;~ 0FBC:10A2
cs=0xfbc;eip=0x0010a7; 	R(JMP(loc_1f295));	// 29285 jmp     short loc_1F295 ;~ 0FBC:10A7
loc_1f24a:
	// 6327 
cs=0xfbc;eip=0x0010aa; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 29290 cmp     [bp+var_2C], 0 ;~ 0FBC:10AA
cs=0xfbc;eip=0x0010ae; 	R(JGE(loc_1f266));	// 29291 jge     short loc_1F266 ;~ 0FBC:10AE
cs=0xfbc;eip=0x0010b0; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29292 cmp     [bp+var_1E], 0 ;~ 0FBC:10B0
cs=0xfbc;eip=0x0010b4; 	R(JZ(loc_1f25e));	// 29293 jz      short loc_1F25E ;~ 0FBC:10B4
cs=0xfbc;eip=0x0010b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 5));	// 29294 mov     [bp+var_22], 5 ;~ 0FBC:10B6
cs=0xfbc;eip=0x0010bb; 	R(JMP(loc_1f295));	// 29295 jmp     short loc_1F295 ;~ 0FBC:10BB
loc_1f25e:
	// 6328 
cs=0xfbc;eip=0x0010be; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 1));	// 29300 mov     [bp+var_22], 1 ;~ 0FBC:10BE
cs=0xfbc;eip=0x0010c3; 	R(JMP(loc_1f295));	// 29301 jmp     short loc_1F295 ;~ 0FBC:10C3
loc_1f266:
	// 6329 
cs=0xfbc;eip=0x0010c6; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x54));	// 29306 cmp     [bp+var_2C], 54h ; 'T' ;~ 0FBC:10C6
cs=0xfbc;eip=0x0010ca; 	R(JLE(loc_1f282));	// 29307 jle     short loc_1F282 ;~ 0FBC:10CA
cs=0xfbc;eip=0x0010cc; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29308 cmp     [bp+var_1E], 0 ;~ 0FBC:10CC
cs=0xfbc;eip=0x0010d0; 	R(JZ(loc_1f27a));	// 29309 jz      short loc_1F27A ;~ 0FBC:10D0
cs=0xfbc;eip=0x0010d2; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 8));	// 29310 mov     [bp+var_22], 8 ;~ 0FBC:10D2
cs=0xfbc;eip=0x0010d7; 	R(JMP(loc_1f295));	// 29311 jmp     short loc_1F295 ;~ 0FBC:10D7
loc_1f27a:
	// 6330 
cs=0xfbc;eip=0x0010da; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 0x0A));	// 29316 mov     [bp+var_22], 0Ah ;~ 0FBC:10DA
cs=0xfbc;eip=0x0010df; 	R(JMP(loc_1f295));	// 29317 jmp     short loc_1F295 ;~ 0FBC:10DF
loc_1f282:
	// 6331 
cs=0xfbc;eip=0x0010e2; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29322 cmp     [bp+var_1E], 0 ;~ 0FBC:10E2
cs=0xfbc;eip=0x0010e6; 	R(JZ(loc_1f290));	// 29323 jz      short loc_1F290 ;~ 0FBC:10E6
cs=0xfbc;eip=0x0010e8; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 7));	// 29324 mov     [bp+var_22], 7 ;~ 0FBC:10E8
cs=0xfbc;eip=0x0010ed; 	R(JMP(loc_1f295));	// 29325 jmp     short loc_1F295 ;~ 0FBC:10ED
loc_1f290:
	// 6332 
cs=0xfbc;eip=0x0010f0; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 0x0B));	// 29330 mov     [bp+var_22], 0Bh ;~ 0FBC:10F0
loc_1f295:
	// 6333 
cs=0xfbc;eip=0x0010f5; 	T(CMP(*(dw*)(raddr(ss,bp+var_22)), 0));	// 29334 cmp     [bp+var_22], 0 ;~ 0FBC:10F5
cs=0xfbc;eip=0x0010f9; 	R(JZ(loc_1f2b8));	// 29335 jz      short loc_1F2B8 ;~ 0FBC:10F9
cs=0xfbc;eip=0x0010fb; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_22))));	// 29336 mov     di, [bp+var_22] ;~ 0FBC:10FB
cs=0xfbc;eip=0x0010fe; 	T(SHL(di, 1));	// 29337 shl     di, 1 ;~ 0FBC:10FE
cs=0xfbc;eip=0x001100; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 29338 mov     ax, [bp+var_28] ;~ 0FBC:1100
cs=0xfbc;eip=0x001103; 	T(CMP(*(dw*)(((db*)&corklr_negzbound)+di), ax));	// 29339 cmp     corkLR_negZBound[di], ax ;~ 0FBC:1103
cs=0xfbc;eip=0x001107; 	R(JGE(loc_1f2b8));	// 29340 jge     short loc_1F2B8 ;~ 0FBC:1107
cs=0xfbc;eip=0x001109; 	T(CMP(*(dw*)(((db*)&corklr_poszbound)+di), ax));	// 29341 cmp     corkLR_posZBound[di], ax ;~ 0FBC:1109
cs=0xfbc;eip=0x00110d; 	R(JLE(loc_1f2b8));	// 29342 jle     short loc_1F2B8 ;~ 0FBC:110D
cs=0xfbc;eip=0x00110f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 29343 mov     ax, [bp+var_22] ;~ 0FBC:110F
cs=0xfbc;eip=0x001112; 	T(ADD(ax, 0x39));	// 29344 add     ax, 39h ; '9' ;~ 0FBC:1112
cs=0xfbc;eip=0x001115; 	X(MOV(planindex, ax));	// 29345 mov     planindex, ax ;~ 0FBC:1115
loc_1f2b8:
	// 6334 
cs=0xfbc;eip=0x001118; 	T(CMP(planindex, 0));	// 29349 cmp     planindex, 0 ;~ 0FBC:1118
cs=0xfbc;eip=0x00111d; 	R(JZ(loc_1f2c2));	// 29350 jz      short loc_1F2C2 ;~ 0FBC:111D
cs=0xfbc;eip=0x00111f; 	R(JMP(code_bto_blank));	// 29351 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:111F
loc_1f2c2:
	// 6335 
cs=0xfbc;eip=0x001122; 	T(CMP(*(dw*)(raddr(ss,bp+var_2e)), 0x200));	// 29355 cmp     [bp+var_2E], 200h ;~ 0FBC:1122
cs=0xfbc;eip=0x001127; 	R(JL(loc_1f2cc));	// 29356 jl      short loc_1F2CC ;~ 0FBC:1127
cs=0xfbc;eip=0x001129; 	R(JMP(code_bto_blank));	// 29357 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1129
loc_1f2cc:
	// 6336 
cs=0xfbc;eip=0x00112c; 	X(MOV(wallindex, 0x0B9));	// 29361 mov     wallindex, 0B9h ; 'π' ;~ 0FBC:112C
cs=0xfbc;eip=0x001132; 	X(MOV(corkflag, 1));	// 29362 mov     corkFlag, 1 ;~ 0FBC:1132
cs=0xfbc;eip=0x001137; 	X(MOV(wallheight, 0x75));	// 29363 mov     wallHeight, 75h ; 'u' ;~ 0FBC:1137
cs=0xfbc;eip=0x00113d; 	R(JMP(code_bto_blank));	// 29364 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:113D
code_bto_corkudlh:
	// 6337 
cs=0xfbc;eip=0x001140; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 29369 mov     ax, [bp+var_2C] ; jumptable 0001E5B2 case 32 ;~ 0FBC:1140
cs=0xfbc;eip=0x001143; 	T(NEG(ax));	// 29370 neg     ax ;~ 0FBC:1143
cs=0xfbc;eip=0x001145; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 29371 mov     [bp+var_1E], ax ;~ 0FBC:1145
cs=0xfbc;eip=0x001148; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 0x4F));	// 29372 mov     [bp+var_22], 4Fh ; 'O' ;~ 0FBC:1148
cs=0xfbc;eip=0x00114d; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0x32));	// 29373 mov     [bp+var_C], 32h ; '2' ;~ 0FBC:114D
cs=0xfbc;eip=0x001152; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0x4B));	// 29374 mov     [bp+var_E], 4Bh ; 'K' ;~ 0FBC:1152
cs=0xfbc;eip=0x001157; 	R(JMP(loc_1f30f));	// 29375 jmp     short loc_1F30F ;~ 0FBC:1157
code_bto_corkudrh:
	// 6338 
cs=0xfbc;eip=0x00115a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 29381 mov     ax, [bp+var_2C] ; jumptable 0001E5B2 case 33 ;~ 0FBC:115A
cs=0xfbc;eip=0x00115d; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 29382 mov     [bp+var_1E], ax ;~ 0FBC:115D
cs=0xfbc;eip=0x001160; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 0x69));	// 29383 mov     [bp+var_22], 69h ; 'i' ;~ 0FBC:1160
cs=0xfbc;eip=0x001165; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0));	// 29384 mov     [bp+var_C], 0 ;~ 0FBC:1165
cs=0xfbc;eip=0x00116a; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0x19));	// 29385 mov     [bp+var_E], 19h ;~ 0FBC:116A
loc_1f30f:
	// 6339 
cs=0xfbc;eip=0x00116f; 	X(MOV(corkflag, 1));	// 29388 mov     corkFlag, 1 ;~ 0FBC:116F
cs=0xfbc;eip=0x001174; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0));	// 29389 cmp     [bp+var_28], 0 ;~ 0FBC:1174
cs=0xfbc;eip=0x001178; 	R(JGE(loc_1f350));	// 29390 jge     short loc_1F350 ;~ 0FBC:1178
cs=0xfbc;eip=0x00117a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 29391 mov     bx, [bp+arg_0] ;~ 0FBC:117A
cs=0xfbc;eip=0x00117d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 29392 mov     ax, [bx+2] ;~ 0FBC:117D
cs=0xfbc;eip=0x001180; 	T(SUB(ax, terrainheight));	// 29393 sub     ax, terrainHeight ;~ 0FBC:1180
cs=0xfbc;eip=0x001184; 	T(CMP(ax, 0x64));	// 29394 cmp     ax, 64h ; 'd' ;~ 0FBC:1184
cs=0xfbc;eip=0x001187; 	R(JGE(loc_1f350));	// 29395 jge     short loc_1F350 ;~ 0FBC:1187
cs=0xfbc;eip=0x001189; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 29396 cmp     [bp+var_1E], 0 ;~ 0FBC:1189
cs=0xfbc;eip=0x00118d; 	R(JLE(loc_1f350));	// 29397 jle     short loc_1F350 ;~ 0FBC:118D
cs=0xfbc;eip=0x00118f; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0x278));	// 29398 cmp     [bp+var_1E], 278h ;~ 0FBC:118F
cs=0xfbc;eip=0x001194; 	R(JL(loc_1f339));	// 29399 jl      short loc_1F339 ;~ 0FBC:1194
cs=0xfbc;eip=0x001196; 	R(JMP(code_bto_blank));	// 29400 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1196
loc_1f339:
	// 6340 
cs=0xfbc;eip=0x001199; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0x188));	// 29404 cmp     [bp+var_1E], 188h ;~ 0FBC:1199
cs=0xfbc;eip=0x00119e; 	R(JG(loc_1f343));	// 29405 jg      short loc_1F343 ;~ 0FBC:119E
cs=0xfbc;eip=0x0011a0; 	R(JMP(code_bto_blank));	// 29406 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:11A0
loc_1f343:
	// 6341 
cs=0xfbc;eip=0x0011a3; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 29410 mov     al, [bp+var_12] ;~ 0FBC:11A3
cs=0xfbc;eip=0x0011a6; 	X(MOV(current_surf_type, al));	// 29411 mov     current_surf_type, al ;~ 0FBC:11A6
cs=0xfbc;eip=0x0011a9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 29412 mov     ax, [bp+var_22] ;~ 0FBC:11A9
cs=0xfbc;eip=0x0011ac; 	R(JMP(loc_1ea9d));	// 29413 jmp     loc_1EA9D ;~ 0FBC:11AC
loc_1f350:
	// 6342 
cs=0xfbc;eip=0x0011b0; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0));	// 29419 cmp     [bp+var_28], 0 ;~ 0FBC:11B0
cs=0xfbc;eip=0x0011b4; 	R(JLE(loc_1f3a8));	// 29420 jle     short loc_1F3A8 ;~ 0FBC:11B4
cs=0xfbc;eip=0x0011b6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 29421 mov     bx, [bp+arg_0] ;~ 0FBC:11B6
cs=0xfbc;eip=0x0011b9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 29422 mov     ax, [bx+2] ;~ 0FBC:11B9
cs=0xfbc;eip=0x0011bc; 	T(SUB(ax, terrainheight));	// 29423 sub     ax, terrainHeight ;~ 0FBC:11BC
cs=0xfbc;eip=0x0011c0; 	T(CMP(ax, 0x15E));	// 29424 cmp     ax, 15Eh ;~ 0FBC:11C0
cs=0xfbc;eip=0x0011c3; 	R(JLE(loc_1f3a8));	// 29425 jle     short loc_1F3A8 ;~ 0FBC:11C3
cs=0xfbc;eip=0x0011c5; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0x2B4));	// 29426 cmp     [bp+var_1E], 2B4h ;~ 0FBC:11C5
cs=0xfbc;eip=0x0011ca; 	R(JGE(loc_1f3a8));	// 29427 jge     short loc_1F3A8 ;~ 0FBC:11CA
cs=0xfbc;eip=0x0011cc; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0x14C));	// 29428 cmp     [bp+var_1E], 14Ch ;~ 0FBC:11CC
cs=0xfbc;eip=0x0011d1; 	R(JLE(loc_1f3a8));	// 29429 jle     short loc_1F3A8 ;~ 0FBC:11D1
cs=0xfbc;eip=0x0011d3; 	X(MOV(wallheight, 0x2A));	// 29430 mov     wallHeight, 2Ah ; '*' ;~ 0FBC:11D3
cs=0xfbc;eip=0x0011d9; 	X(MOV(elrdwallrelated, 0x0FFF4));	// 29431 mov     elRdWallRelated, 0FFF4h ;~ 0FBC:11D9
cs=0xfbc;eip=0x0011df; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0x200));	// 29432 cmp     [bp+var_1E], 200h ;~ 0FBC:11DF
cs=0xfbc;eip=0x0011e4; 	R(JLE(loc_1f38c));	// 29433 jle     short loc_1F38C ;~ 0FBC:11E4
cs=0xfbc;eip=0x0011e6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 29434 mov     ax, [bp+var_C] ;~ 0FBC:11E6
cs=0xfbc;eip=0x0011e9; 	R(JMP(loc_1f38f));	// 29435 jmp     short loc_1F38F ;~ 0FBC:11E9
loc_1f38c:
	// 6343 
cs=0xfbc;eip=0x0011ec; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 29440 mov     ax, [bp+var_E] ;~ 0FBC:11EC
loc_1f38f:
	// 6344 
cs=0xfbc;eip=0x0011ef; 	T(ADD(ax, 0x18));	// 29443 add     ax, 18h ;~ 0FBC:11EF
cs=0xfbc;eip=0x0011f2; 	X(MOV(wallindex, ax));	// 29444 mov     wallindex, ax ;~ 0FBC:11F2
cs=0xfbc;eip=0x0011f5; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 29445 mov     al, [bp+var_12] ;~ 0FBC:11F5
cs=0xfbc;eip=0x0011f8; 	X(MOV(current_surf_type, al));	// 29446 mov     current_surf_type, al ;~ 0FBC:11F8
cs=0xfbc;eip=0x0011fb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 29447 mov     ax, [bp+var_22] ;~ 0FBC:11FB
cs=0xfbc;eip=0x0011fe; 	T(ADD(ax, 0x19));	// 29448 add     ax, 19h ;~ 0FBC:11FE
cs=0xfbc;eip=0x001201; 	X(MOV(planindex, ax));	// 29449 mov     planindex, ax ;~ 0FBC:1201
cs=0xfbc;eip=0x001204; 	R(JMP(loc_1ebe7));	// 29450 jmp     loc_1EBE7 ;~ 0FBC:1204
loc_1f3a8:
	// 6345 
cs=0xfbc;eip=0x001208; 	X(PUSH(*(dw*)(raddr(ss,bp+var_28))));	// 29456 push    [bp+var_28] ;~ 0FBC:1208
cs=0xfbc;eip=0x00120b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1e))));	// 29457 push    [bp+var_1E] ;~ 0FBC:120B
cs=0xfbc;eip=0x00120e; 	R(CALLF(polarradius2d,0));	// 29458 call    polarRadius2D ;~ 0FBC:120E
cs=0xfbc;eip=0x001213; 	T(ADD(sp, 4));	// 29459 add     sp, 4 ;~ 0FBC:1213
cs=0xfbc;eip=0x001216; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 29460 mov     [bp+var_A], ax ;~ 0FBC:1216
cs=0xfbc;eip=0x001219; 	T(CMP(ax, 0x14C));	// 29461 cmp     ax, 14Ch ;~ 0FBC:1219
cs=0xfbc;eip=0x00121c; 	R(JG(loc_1f3c1));	// 29462 jg      short loc_1F3C1 ;~ 0FBC:121C
cs=0xfbc;eip=0x00121e; 	R(JMP(code_bto_blank));	// 29463 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:121E
loc_1f3c1:
	// 6346 
cs=0xfbc;eip=0x001221; 	T(CMP(ax, 0x2B4));	// 29467 cmp     ax, 2B4h ;~ 0FBC:1221
cs=0xfbc;eip=0x001224; 	R(JL(loc_1f3c9));	// 29468 jl      short loc_1F3C9 ;~ 0FBC:1224
cs=0xfbc;eip=0x001226; 	R(JMP(code_bto_blank));	// 29469 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1226
loc_1f3c9:
	// 6347 
cs=0xfbc;eip=0x001229; 	X(PUSH(*(dw*)(raddr(ss,bp+var_28))));	// 29473 push    [bp+var_28] ;~ 0FBC:1229
cs=0xfbc;eip=0x00122c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1e))));	// 29474 push    [bp+var_1E] ;~ 0FBC:122C
cs=0xfbc;eip=0x00122f; 	R(CALLF(polarangle,0));	// 29475 call    polarAngle ;~ 0FBC:122F
cs=0xfbc;eip=0x001234; 	T(ADD(sp, 4));	// 29476 add     sp, 4 ;~ 0FBC:1234
cs=0xfbc;eip=0x001237; 	T(SUB(ax, 0x100));	// 29477 sub     ax, 100h ;~ 0FBC:1237
cs=0xfbc;eip=0x00123a; 	T(NEG(ax));	// 29478 neg     ax ;~ 0FBC:123A
cs=0xfbc;eip=0x00123c; 	T(AND(ah, 3));	// 29479 and     ah, 3 ;~ 0FBC:123C
cs=0xfbc;eip=0x00123f; 	T(MOV(cx, 0x18));	// 29480 mov     cx, 18h ;~ 0FBC:123F
cs=0xfbc;eip=0x001242; 	T(IMUL1_2(cx));	// 29481 imul    cx ;~ 0FBC:1242
cs=0xfbc;eip=0x001244; 	T(MOV(si, ax));	// 29482 mov     si, ax ;~ 0FBC:1244
cs=0xfbc;eip=0x001246; 	T(MOV(cl, 0x0A));	// 29483 mov     cl, 0Ah ;~ 0FBC:1246
cs=0xfbc;eip=0x001248; 	T(SAR(si, cl));	// 29484 sar     si, cl ;~ 0FBC:1248
cs=0xfbc;eip=0x00124a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 29485 mov     ax, [bp+var_22] ;~ 0FBC:124A
cs=0xfbc;eip=0x00124d; 	T(ADD(ax, si));	// 29486 add     ax, si ;~ 0FBC:124D
cs=0xfbc;eip=0x00124f; 	T(INC(ax));	// 29487 inc     ax ;~ 0FBC:124F
cs=0xfbc;eip=0x001250; 	X(MOV(planindex, ax));	// 29488 mov     planindex, ax ;~ 0FBC:1250
cs=0xfbc;eip=0x001253; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 29489 mov     al, [bp+var_12] ;~ 0FBC:1253
cs=0xfbc;eip=0x001256; 	X(MOV(current_surf_type, al));	// 29490 mov     current_surf_type, al ;~ 0FBC:1256
cs=0xfbc;eip=0x001259; 	X(MOV(byte_4392c, 0));	// 29491 mov     byte_4392C, 0 ;~ 0FBC:1259
cs=0xfbc;eip=0x00125e; 	X(MOV(wallheight, 0x2A));	// 29492 mov     wallHeight, 2Ah ; '*' ;~ 0FBC:125E
cs=0xfbc;eip=0x001264; 	X(MOV(elrdwallrelated, 0x0FFF4));	// 29493 mov     elRdWallRelated, 0FFF4h ;~ 0FBC:1264
cs=0xfbc;eip=0x00126a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 29494 mov     ax, [bp+var_A] ;~ 0FBC:126A
cs=0xfbc;eip=0x00126d; 	T(SUB(ax, 0x200));	// 29495 sub     ax, 200h ;~ 0FBC:126D
cs=0xfbc;eip=0x001270; 	T(CMP(ax, 0x5A));	// 29496 cmp     ax, 5Ah ; 'Z' ;~ 0FBC:1270
cs=0xfbc;eip=0x001273; 	R(JLE(loc_1f41e));	// 29497 jle     short loc_1F41E ;~ 0FBC:1273
cs=0xfbc;eip=0x001275; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 29498 mov     ax, [bp+var_C] ;~ 0FBC:1275
loc_1f418:
	// 6348 
cs=0xfbc;eip=0x001278; 	T(ADD(ax, si));	// 29501 add     ax, si ;~ 0FBC:1278
cs=0xfbc;eip=0x00127a; 	R(JMP(loc_1ea20));	// 29502 jmp     loc_1EA20 ;~ 0FBC:127A
loc_1f41e:
	// 6349 
cs=0xfbc;eip=0x00127e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 29507 mov     ax, [bp+var_A] ;~ 0FBC:127E
cs=0xfbc;eip=0x001281; 	T(SUB(ax, 0x200));	// 29508 sub     ax, 200h ;~ 0FBC:1281
cs=0xfbc;eip=0x001284; 	T(CMP(ax, 0x0FFA6));	// 29509 cmp     ax, 0FFA6h ;~ 0FBC:1284
cs=0xfbc;eip=0x001287; 	R(JL(loc_1f42c));	// 29510 jl      short loc_1F42C ;~ 0FBC:1287
cs=0xfbc;eip=0x001289; 	R(JMP(code_bto_blank));	// 29511 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1289
loc_1f42c:
	// 6350 
cs=0xfbc;eip=0x00128c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 29515 mov     ax, [bp+var_E] ;~ 0FBC:128C
cs=0xfbc;eip=0x00128f; 	R(JMP(loc_1f418));	// 29516 jmp     short loc_1F418 ;~ 0FBC:128F
code_bto_slalom:
	// 6351 
cs=0xfbc;eip=0x001292; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x78));	// 29522 cmp     [bp+var_32], 78h ; 'x' ; jumptable 0001E5B2 case 34 ;~ 0FBC:1292
cs=0xfbc;eip=0x001296; 	R(JGE(loc_1f43e));	// 29523 jge     short loc_1F43E ;~ 0FBC:1296
cs=0xfbc;eip=0x001298; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 29524 mov     al, [bp+var_12] ;~ 0FBC:1298
cs=0xfbc;eip=0x00129b; 	X(MOV(current_surf_type, al));	// 29525 mov     current_surf_type, al ;~ 0FBC:129B
loc_1f43e:
	// 6352 
cs=0xfbc;eip=0x00129e; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x17));	// 29528 cmp     [bp+var_2C], 17h ;~ 0FBC:129E
cs=0xfbc;eip=0x0012a2; 	R(JL(loc_1f4a0));	// 29529 jl      short loc_1F4A0 ;~ 0FBC:12A2
cs=0xfbc;eip=0x0012a4; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x61));	// 29530 cmp     [bp+var_2C], 61h ; 'a' ;~ 0FBC:12A4
cs=0xfbc;eip=0x0012a8; 	R(JG(loc_1f4a0));	// 29531 jg      short loc_1F4A0 ;~ 0FBC:12A8
cs=0xfbc;eip=0x0012aa; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x0FEF1));	// 29532 cmp     [bp+var_28], 0FEF1h ;~ 0FBC:12AA
cs=0xfbc;eip=0x0012af; 	R(JLE(loc_1f4a0));	// 29533 jle     short loc_1F4A0 ;~ 0FBC:12AF
cs=0xfbc;eip=0x0012b1; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x0FF0F));	// 29534 cmp     [bp+var_28], 0FF0Fh ;~ 0FBC:12B1
cs=0xfbc;eip=0x0012b6; 	R(JGE(loc_1f4a0));	// 29535 jge     short loc_1F4A0 ;~ 0FBC:12B6
cs=0xfbc;eip=0x0012b8; 	X(MOV(wallheight, 0x2A));	// 29536 mov     wallHeight, 2Ah ; '*' ;~ 0FBC:12B8
cs=0xfbc;eip=0x0012be; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FEF1));	// 29537 cmp     [bp+var_14], 0FEF1h ;~ 0FBC:12BE
cs=0xfbc;eip=0x0012c3; 	R(JGE(loc_1f46e));	// 29538 jge     short loc_1F46E ;~ 0FBC:12C3
cs=0xfbc;eip=0x0012c5; 	X(MOV(wallindex, 0x91));	// 29539 mov     wallindex, 91h ; 'ë' ;~ 0FBC:12C5
cs=0xfbc;eip=0x0012cb; 	R(JMP(code_bto_blank));	// 29540 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:12CB
loc_1f46e:
	// 6353 
cs=0xfbc;eip=0x0012ce; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FF0F));	// 29544 cmp     [bp+var_14], 0FF0Fh ;~ 0FBC:12CE
cs=0xfbc;eip=0x0012d3; 	R(JLE(loc_1f47e));	// 29545 jle     short loc_1F47E ;~ 0FBC:12D3
cs=0xfbc;eip=0x0012d5; 	X(MOV(wallindex, 0x92));	// 29546 mov     wallindex, 92h ; 'í' ;~ 0FBC:12D5
cs=0xfbc;eip=0x0012db; 	R(JMP(code_bto_blank));	// 29547 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:12DB
loc_1f47e:
	// 6354 
cs=0xfbc;eip=0x0012de; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x17));	// 29551 cmp     [bp+var_18], 17h ;~ 0FBC:12DE
cs=0xfbc;eip=0x0012e2; 	R(JGE(loc_1f48e));	// 29552 jge     short loc_1F48E ;~ 0FBC:12E2
cs=0xfbc;eip=0x0012e4; 	X(MOV(wallindex, 0x94));	// 29553 mov     wallindex, 94h ; 'î' ;~ 0FBC:12E4
cs=0xfbc;eip=0x0012ea; 	R(JMP(code_bto_blank));	// 29554 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:12EA
loc_1f48e:
	// 6355 
cs=0xfbc;eip=0x0012ee; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x61));	// 29559 cmp     [bp+var_18], 61h ; 'a' ;~ 0FBC:12EE
cs=0xfbc;eip=0x0012f2; 	R(JG(loc_1f497));	// 29560 jg      short loc_1F497 ;~ 0FBC:12F2
cs=0xfbc;eip=0x0012f4; 	R(JMP(code_bto_blank));	// 29561 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:12F4
loc_1f497:
	// 6356 
cs=0xfbc;eip=0x0012f7; 	X(MOV(wallindex, 0x93));	// 29565 mov     wallindex, 93h ; 'ì' ;~ 0FBC:12F7
cs=0xfbc;eip=0x0012fd; 	R(JMP(code_bto_blank));	// 29566 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:12FD
loc_1f4a0:
	// 6357 
cs=0xfbc;eip=0x001300; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FFE9));	// 29571 cmp     [bp+var_2C], 0FFE9h ;~ 0FBC:1300
cs=0xfbc;eip=0x001304; 	R(JLE(loc_1f4a9));	// 29572 jle     short loc_1F4A9 ;~ 0FBC:1304
cs=0xfbc;eip=0x001306; 	R(JMP(code_bto_blank));	// 29573 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1306
loc_1f4a9:
	// 6358 
cs=0xfbc;eip=0x001309; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FF9F));	// 29577 cmp     [bp+var_2C], 0FF9Fh ;~ 0FBC:1309
cs=0xfbc;eip=0x00130d; 	R(JGE(loc_1f4b2));	// 29578 jge     short loc_1F4B2 ;~ 0FBC:130D
cs=0xfbc;eip=0x00130f; 	R(JMP(code_bto_blank));	// 29579 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:130F
loc_1f4b2:
	// 6359 
cs=0xfbc;eip=0x001312; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x10F));	// 29583 cmp     [bp+var_28], 10Fh ;~ 0FBC:1312
cs=0xfbc;eip=0x001317; 	R(JL(loc_1f4bc));	// 29584 jl      short loc_1F4BC ;~ 0FBC:1317
cs=0xfbc;eip=0x001319; 	R(JMP(code_bto_blank));	// 29585 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1319
loc_1f4bc:
	// 6360 
cs=0xfbc;eip=0x00131c; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), 0x0F1));	// 29589 cmp     [bp+var_28], 0F1h ; 'Ò' ;~ 0FBC:131C
cs=0xfbc;eip=0x001321; 	R(JG(loc_1f4c6));	// 29590 jg      short loc_1F4C6 ;~ 0FBC:1321
cs=0xfbc;eip=0x001323; 	R(JMP(code_bto_blank));	// 29591 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1323
loc_1f4c6:
	// 6361 
cs=0xfbc;eip=0x001326; 	X(MOV(wallheight, 0x2A));	// 29595 mov     wallHeight, 2Ah ; '*' ;~ 0FBC:1326
cs=0xfbc;eip=0x00132c; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x10F));	// 29596 cmp     [bp+var_14], 10Fh ;~ 0FBC:132C
cs=0xfbc;eip=0x001331; 	R(JLE(loc_1f4dc));	// 29597 jle     short loc_1F4DC ;~ 0FBC:1331
cs=0xfbc;eip=0x001333; 	X(MOV(wallindex, 0x8D));	// 29598 mov     wallindex, 8Dh ; 'ç' ;~ 0FBC:1333
cs=0xfbc;eip=0x001339; 	R(JMP(code_bto_blank));	// 29599 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1339
loc_1f4dc:
	// 6362 
cs=0xfbc;eip=0x00133c; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0F1));	// 29603 cmp     [bp+var_14], 0F1h ; 'Ò' ;~ 0FBC:133C
cs=0xfbc;eip=0x001341; 	R(JGE(loc_1f4ec));	// 29604 jge     short loc_1F4EC ;~ 0FBC:1341
cs=0xfbc;eip=0x001343; 	X(MOV(wallindex, 0x8E));	// 29605 mov     wallindex, 8Eh ; 'é' ;~ 0FBC:1343
cs=0xfbc;eip=0x001349; 	R(JMP(code_bto_blank));	// 29606 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1349
loc_1f4ec:
	// 6363 
cs=0xfbc;eip=0x00134c; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FFE9));	// 29610 cmp     [bp+var_18], 0FFE9h ;~ 0FBC:134C
cs=0xfbc;eip=0x001350; 	R(JLE(loc_1f4fc));	// 29611 jle     short loc_1F4FC ;~ 0FBC:1350
cs=0xfbc;eip=0x001352; 	X(MOV(wallindex, 0x8F));	// 29612 mov     wallindex, 8Fh ; 'è' ;~ 0FBC:1352
cs=0xfbc;eip=0x001358; 	R(JMP(code_bto_blank));	// 29613 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1358
loc_1f4fc:
	// 6364 
cs=0xfbc;eip=0x00135c; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF9F));	// 29618 cmp     [bp+var_18], 0FF9Fh ;~ 0FBC:135C
cs=0xfbc;eip=0x001360; 	R(JL(loc_1f505));	// 29619 jl      short loc_1F505 ;~ 0FBC:1360
cs=0xfbc;eip=0x001362; 	R(JMP(code_bto_blank));	// 29620 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1362
loc_1f505:
	// 6365 
cs=0xfbc;eip=0x001365; 	X(MOV(wallindex, 0x90));	// 29624 mov     wallindex, 90h ; 'ê' ;~ 0FBC:1365
cs=0xfbc;eip=0x00136b; 	R(JMP(code_bto_blank));	// 29625 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:136B
code_bto_barn:
	// 6366 
cs=0xfbc;eip=0x00136e; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x96));	// 29630 cmp     [bp+var_32], 96h ; 'ñ' ; jumptable 0001E5B2 case 65 ;~ 0FBC:136E
cs=0xfbc;eip=0x001373; 	R(JLE(loc_1f518));	// 29631 jle     short loc_1F518 ;~ 0FBC:1373
cs=0xfbc;eip=0x001375; 	R(JMP(code_bto_blank));	// 29632 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1375
loc_1f518:
	// 6367 
cs=0xfbc;eip=0x001378; 	T(CMP(*(dw*)(raddr(ss,bp+var_2e)), 0x96));	// 29636 cmp     [bp+var_2E], 96h ; 'ñ' ;~ 0FBC:1378
cs=0xfbc;eip=0x00137d; 	R(JLE(loc_1f522));	// 29637 jle     short loc_1F522 ;~ 0FBC:137D
cs=0xfbc;eip=0x00137f; 	R(JMP(code_bto_blank));	// 29638 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:137F
loc_1f522:
	// 6368 
cs=0xfbc;eip=0x001382; 	X(MOV(wallheight, 0x1A9));	// 29642 mov     wallHeight, 1A9h ;~ 0FBC:1382
cs=0xfbc;eip=0x001388; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FF6A));	// 29643 cmp     [bp+var_14], 0FF6Ah ;~ 0FBC:1388
cs=0xfbc;eip=0x00138d; 	R(JG(loc_1f538));	// 29644 jg      short loc_1F538 ;~ 0FBC:138D
cs=0xfbc;eip=0x00138f; 	X(MOV(wallindex, 0x0A1));	// 29645 mov     wallindex, 0A1h ; '°' ;~ 0FBC:138F
cs=0xfbc;eip=0x001395; 	R(JMP(code_bto_blank));	// 29646 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1395
loc_1f538:
	// 6369 
cs=0xfbc;eip=0x001398; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x96));	// 29650 cmp     [bp+var_14], 96h ; 'ñ' ;~ 0FBC:1398
cs=0xfbc;eip=0x00139d; 	R(JL(loc_1f548));	// 29651 jl      short loc_1F548 ;~ 0FBC:139D
cs=0xfbc;eip=0x00139f; 	X(MOV(wallindex, 0x0A2));	// 29652 mov     wallindex, 0A2h ; '¢' ;~ 0FBC:139F
cs=0xfbc;eip=0x0013a5; 	R(JMP(code_bto_blank));	// 29653 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:13A5
loc_1f548:
	// 6370 
cs=0xfbc;eip=0x0013a8; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x96));	// 29657 cmp     [bp+var_18], 96h ; 'ñ' ;~ 0FBC:13A8
cs=0xfbc;eip=0x0013ad; 	R(JL(loc_1f558));	// 29658 jl      short loc_1F558 ;~ 0FBC:13AD
cs=0xfbc;eip=0x0013af; 	X(MOV(wallindex, 0x0A3));	// 29659 mov     wallindex, 0A3h ; '£' ;~ 0FBC:13AF
cs=0xfbc;eip=0x0013b5; 	R(JMP(code_bto_blank));	// 29660 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:13B5
loc_1f558:
	// 6371 
cs=0xfbc;eip=0x0013b8; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF6A));	// 29664 cmp     [bp+var_18], 0FF6Ah ;~ 0FBC:13B8
cs=0xfbc;eip=0x0013bd; 	R(JLE(loc_1f562));	// 29665 jle     short loc_1F562 ;~ 0FBC:13BD
cs=0xfbc;eip=0x0013bf; 	R(JMP(code_bto_blank));	// 29666 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:13BF
loc_1f562:
	// 6372 
cs=0xfbc;eip=0x0013c2; 	X(MOV(wallindex, 0x0A4));	// 29670 mov     wallindex, 0A4h ; '§' ;~ 0FBC:13C2
cs=0xfbc;eip=0x0013c8; 	R(JMP(code_bto_blank));	// 29671 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:13C8
code_bto_gasstation:
	// 6373 
cs=0xfbc;eip=0x0013cc; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FF38));	// 29677 cmp     [bp+var_2C], 0FF38h ; jumptable 0001E5B2 case 66 ;~ 0FBC:13CC
cs=0xfbc;eip=0x0013d1; 	R(JGE(loc_1f576));	// 29678 jge     short loc_1F576 ;~ 0FBC:13D1
cs=0xfbc;eip=0x0013d3; 	R(JMP(code_bto_blank));	// 29679 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:13D3
loc_1f576:
	// 6374 
cs=0xfbc;eip=0x0013d6; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x104));	// 29683 cmp     [bp+var_2C], 104h ;~ 0FBC:13D6
cs=0xfbc;eip=0x0013db; 	R(JLE(loc_1f580));	// 29684 jle     short loc_1F580 ;~ 0FBC:13DB
cs=0xfbc;eip=0x0013dd; 	R(JMP(code_bto_blank));	// 29685 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:13DD
loc_1f580:
	// 6375 
cs=0xfbc;eip=0x0013e0; 	T(CMP(*(dw*)(raddr(ss,bp+var_2e)), 0x50));	// 29689 cmp     [bp+var_2E], 50h ; 'P' ;~ 0FBC:13E0
cs=0xfbc;eip=0x0013e4; 	R(JLE(loc_1f589));	// 29690 jle     short loc_1F589 ;~ 0FBC:13E4
cs=0xfbc;eip=0x0013e6; 	R(JMP(code_bto_blank));	// 29691 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:13E6
loc_1f589:
	// 6376 
cs=0xfbc;eip=0x0013e9; 	X(MOV(wallheight, 0x0E6));	// 29695 mov     wallHeight, 0E6h ; 'Ê' ;~ 0FBC:13E9
cs=0xfbc;eip=0x0013ef; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FFB0));	// 29696 cmp     [bp+var_14], 0FFB0h ;~ 0FBC:13EF
cs=0xfbc;eip=0x0013f3; 	R(JG(loc_1f59e));	// 29697 jg      short loc_1F59E ;~ 0FBC:13F3
cs=0xfbc;eip=0x0013f5; 	X(MOV(wallindex, 0x0A5));	// 29698 mov     wallindex, 0A5h ; '•' ;~ 0FBC:13F5
cs=0xfbc;eip=0x0013fb; 	R(JMP(code_bto_blank));	// 29699 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:13FB
loc_1f59e:
	// 6377 
cs=0xfbc;eip=0x0013fe; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x50));	// 29703 cmp     [bp+var_14], 50h ; 'P' ;~ 0FBC:13FE
cs=0xfbc;eip=0x001402; 	R(JL(loc_1f5ae));	// 29704 jl      short loc_1F5AE ;~ 0FBC:1402
cs=0xfbc;eip=0x001404; 	X(MOV(wallindex, 0x0A8));	// 29705 mov     wallindex, 0A8h ; '®' ;~ 0FBC:1404
cs=0xfbc;eip=0x00140a; 	R(JMP(code_bto_blank));	// 29706 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:140A
loc_1f5ae:
	// 6378 
cs=0xfbc;eip=0x00140e; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF38));	// 29711 cmp     [bp+var_18], 0FF38h ;~ 0FBC:140E
cs=0xfbc;eip=0x001413; 	R(JG(loc_1f5be));	// 29712 jg      short loc_1F5BE ;~ 0FBC:1413
cs=0xfbc;eip=0x001415; 	X(MOV(wallindex, 0x0A6));	// 29713 mov     wallindex, 0A6h ; '¶' ;~ 0FBC:1415
cs=0xfbc;eip=0x00141b; 	R(JMP(code_bto_blank));	// 29714 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:141B
loc_1f5be:
	// 6379 
cs=0xfbc;eip=0x00141e; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x104));	// 29718 cmp     [bp+var_18], 104h ;~ 0FBC:141E
cs=0xfbc;eip=0x001423; 	R(JGE(loc_1f5c8));	// 29719 jge     short loc_1F5C8 ;~ 0FBC:1423
cs=0xfbc;eip=0x001425; 	R(JMP(code_bto_blank));	// 29720 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1425
loc_1f5c8:
	// 6380 
cs=0xfbc;eip=0x001428; 	X(MOV(wallindex, 0x0A7));	// 29724 mov     wallindex, 0A7h ; 'ß' ;~ 0FBC:1428
cs=0xfbc;eip=0x00142e; 	R(JMP(code_bto_blank));	// 29725 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:142E
code_bto_joes:
	// 6381 
cs=0xfbc;eip=0x001432; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x0B4));	// 29731 cmp     [bp+var_32], 0B4h ; '¥' ; jumptable 0001E5B2 case 67 ;~ 0FBC:1432
cs=0xfbc;eip=0x001437; 	R(JLE(loc_1f5dc));	// 29732 jle     short loc_1F5DC ;~ 0FBC:1437
cs=0xfbc;eip=0x001439; 	R(JMP(code_bto_blank));	// 29733 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1439
loc_1f5dc:
	// 6382 
cs=0xfbc;eip=0x00143c; 	T(CMP(*(dw*)(raddr(ss,bp+var_2e)), 0x64));	// 29737 cmp     [bp+var_2E], 64h ; 'd' ;~ 0FBC:143C
cs=0xfbc;eip=0x001440; 	R(JLE(loc_1f5e5));	// 29738 jle     short loc_1F5E5 ;~ 0FBC:1440
cs=0xfbc;eip=0x001442; 	R(JMP(code_bto_blank));	// 29739 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1442
loc_1f5e5:
	// 6383 
cs=0xfbc;eip=0x001445; 	X(MOV(wallheight, 0x0F8));	// 29743 mov     wallHeight, 0F8h ; '¯' ;~ 0FBC:1445
cs=0xfbc;eip=0x00144b; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FF9C));	// 29744 cmp     [bp+var_14], 0FF9Ch ;~ 0FBC:144B
cs=0xfbc;eip=0x00144f; 	R(JG(loc_1f5fa));	// 29745 jg      short loc_1F5FA ;~ 0FBC:144F
cs=0xfbc;eip=0x001451; 	X(MOV(wallindex, 0x0A9));	// 29746 mov     wallindex, 0A9h ; '©' ;~ 0FBC:1451
cs=0xfbc;eip=0x001457; 	R(JMP(code_bto_blank));	// 29747 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1457
loc_1f5fa:
	// 6384 
cs=0xfbc;eip=0x00145a; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x64));	// 29751 cmp     [bp+var_14], 64h ; 'd' ;~ 0FBC:145A
cs=0xfbc;eip=0x00145e; 	R(JL(loc_1f60a));	// 29752 jl      short loc_1F60A ;~ 0FBC:145E
cs=0xfbc;eip=0x001460; 	X(MOV(wallindex, 0x0AC));	// 29753 mov     wallindex, 0ACh ; '¨' ;~ 0FBC:1460
cs=0xfbc;eip=0x001466; 	R(JMP(code_bto_blank));	// 29754 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1466
loc_1f60a:
	// 6385 
cs=0xfbc;eip=0x00146a; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF4C));	// 29759 cmp     [bp+var_18], 0FF4Ch ;~ 0FBC:146A
cs=0xfbc;eip=0x00146f; 	R(JG(loc_1f61a));	// 29760 jg      short loc_1F61A ;~ 0FBC:146F
cs=0xfbc;eip=0x001471; 	X(MOV(wallindex, 0x0AB));	// 29761 mov     wallindex, 0ABh ; '´' ;~ 0FBC:1471
cs=0xfbc;eip=0x001477; 	R(JMP(code_bto_blank));	// 29762 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1477
loc_1f61a:
	// 6386 
cs=0xfbc;eip=0x00147a; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0B4));	// 29766 cmp     [bp+var_18], 0B4h ; '¥' ;~ 0FBC:147A
cs=0xfbc;eip=0x00147f; 	R(JGE(loc_1f624));	// 29767 jge     short loc_1F624 ;~ 0FBC:147F
cs=0xfbc;eip=0x001481; 	R(JMP(code_bto_blank));	// 29768 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1481
loc_1f624:
	// 6387 
cs=0xfbc;eip=0x001484; 	X(MOV(wallindex, 0x0AA));	// 29772 mov     wallindex, 0AAh ; '™' ;~ 0FBC:1484
cs=0xfbc;eip=0x00148a; 	R(JMP(code_bto_blank));	// 29773 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:148A
code_bto_office:
	// 6388 
cs=0xfbc;eip=0x00148e; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x0C8));	// 29779 cmp     [bp+var_32], 0C8h ; '»' ; jumptable 0001E5B2 case 68 ;~ 0FBC:148E
cs=0xfbc;eip=0x001493; 	R(JLE(loc_1f638));	// 29780 jle     short loc_1F638 ;~ 0FBC:1493
cs=0xfbc;eip=0x001495; 	R(JMP(code_bto_blank));	// 29781 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1495
loc_1f638:
	// 6389 
cs=0xfbc;eip=0x001498; 	T(CMP(*(dw*)(raddr(ss,bp+var_2e)), 0x0C8));	// 29785 cmp     [bp+var_2E], 0C8h ; '»' ;~ 0FBC:1498
cs=0xfbc;eip=0x00149d; 	R(JLE(loc_1f642));	// 29786 jle     short loc_1F642 ;~ 0FBC:149D
cs=0xfbc;eip=0x00149f; 	R(JMP(code_bto_blank));	// 29787 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:149F
loc_1f642:
	// 6390 
cs=0xfbc;eip=0x0014a2; 	X(MOV(wallheight, 0x226));	// 29791 mov     wallHeight, 226h ;~ 0FBC:14A2
cs=0xfbc;eip=0x0014a8; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FF38));	// 29792 cmp     [bp+var_14], 0FF38h ;~ 0FBC:14A8
cs=0xfbc;eip=0x0014ad; 	R(JG(loc_1f658));	// 29793 jg      short loc_1F658 ;~ 0FBC:14AD
cs=0xfbc;eip=0x0014af; 	X(MOV(wallindex, 0x0AD));	// 29794 mov     wallindex, 0ADh ; '≠' ;~ 0FBC:14AF
cs=0xfbc;eip=0x0014b5; 	R(JMP(code_bto_blank));	// 29795 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:14B5
loc_1f658:
	// 6391 
cs=0xfbc;eip=0x0014b8; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0C8));	// 29799 cmp     [bp+var_14], 0C8h ; '»' ;~ 0FBC:14B8
cs=0xfbc;eip=0x0014bd; 	R(JL(loc_1f668));	// 29800 jl      short loc_1F668 ;~ 0FBC:14BD
cs=0xfbc;eip=0x0014bf; 	X(MOV(wallindex, 0x0AE));	// 29801 mov     wallindex, 0AEh ; 'Æ' ;~ 0FBC:14BF
cs=0xfbc;eip=0x0014c5; 	R(JMP(code_bto_blank));	// 29802 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:14C5
loc_1f668:
	// 6392 
cs=0xfbc;eip=0x0014c8; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF38));	// 29806 cmp     [bp+var_18], 0FF38h ;~ 0FBC:14C8
cs=0xfbc;eip=0x0014cd; 	R(JG(loc_1f678));	// 29807 jg      short loc_1F678 ;~ 0FBC:14CD
cs=0xfbc;eip=0x0014cf; 	X(MOV(wallindex, 0x0AF));	// 29808 mov     wallindex, 0AFh ; 'Ø' ;~ 0FBC:14CF
cs=0xfbc;eip=0x0014d5; 	R(JMP(code_bto_blank));	// 29809 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:14D5
loc_1f678:
	// 6393 
cs=0xfbc;eip=0x0014d8; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0C8));	// 29813 cmp     [bp+var_18], 0C8h ; '»' ;~ 0FBC:14D8
cs=0xfbc;eip=0x0014dd; 	R(JGE(loc_1f682));	// 29814 jge     short loc_1F682 ;~ 0FBC:14DD
cs=0xfbc;eip=0x0014df; 	R(JMP(code_bto_blank));	// 29815 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:14DF
loc_1f682:
	// 6394 
cs=0xfbc;eip=0x0014e2; 	X(MOV(wallindex, 0x0B0));	// 29819 mov     wallindex, 0B0h ; '∞' ;~ 0FBC:14E2
cs=0xfbc;eip=0x0014e8; 	R(JMP(code_bto_blank));	// 29820 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:14E8
code_bto_windmill:
	// 6395 
cs=0xfbc;eip=0x0014ec; 	T(CMP(*(dw*)(raddr(ss,bp+var_32)), 0x72));	// 29826 cmp     [bp+var_32], 72h ; 'r' ; jumptable 0001E5B2 case 69 ;~ 0FBC:14EC
cs=0xfbc;eip=0x0014f0; 	R(JLE(loc_1f695));	// 29827 jle     short loc_1F695 ;~ 0FBC:14F0
cs=0xfbc;eip=0x0014f2; 	R(JMP(code_bto_blank));	// 29828 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:14F2
loc_1f695:
	// 6396 
cs=0xfbc;eip=0x0014f5; 	T(CMP(*(dw*)(raddr(ss,bp+var_2e)), 0x72));	// 29832 cmp     [bp+var_2E], 72h ; 'r' ;~ 0FBC:14F5
cs=0xfbc;eip=0x0014f9; 	R(JLE(loc_1f69e));	// 29833 jle     short loc_1F69E ;~ 0FBC:14F9
cs=0xfbc;eip=0x0014fb; 	R(JMP(code_bto_blank));	// 29834 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:14FB
loc_1f69e:
	// 6397 
cs=0xfbc;eip=0x0014fe; 	X(MOV(wallheight, 0x1EF));	// 29838 mov     wallHeight, 1EFh ;~ 0FBC:14FE
cs=0xfbc;eip=0x001504; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FF8E));	// 29839 cmp     [bp+var_14], 0FF8Eh ;~ 0FBC:1504
cs=0xfbc;eip=0x001508; 	R(JG(loc_1f6b4));	// 29840 jg      short loc_1F6B4 ;~ 0FBC:1508
cs=0xfbc;eip=0x00150a; 	X(MOV(wallindex, 0x0B4));	// 29841 mov     wallindex, 0B4h ; '¥' ;~ 0FBC:150A
cs=0xfbc;eip=0x001510; 	R(JMP(code_bto_blank));	// 29842 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1510
loc_1f6b4:
	// 6398 
cs=0xfbc;eip=0x001514; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x72));	// 29847 cmp     [bp+var_14], 72h ; 'r' ;~ 0FBC:1514
cs=0xfbc;eip=0x001518; 	R(JL(loc_1f6c4));	// 29848 jl      short loc_1F6C4 ;~ 0FBC:1518
cs=0xfbc;eip=0x00151a; 	X(MOV(wallindex, 0x0B2));	// 29849 mov     wallindex, 0B2h ; '≤' ;~ 0FBC:151A
cs=0xfbc;eip=0x001520; 	R(JMP(code_bto_blank));	// 29850 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1520
loc_1f6c4:
	// 6399 
cs=0xfbc;eip=0x001524; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF8E));	// 29855 cmp     [bp+var_18], 0FF8Eh ;~ 0FBC:1524
cs=0xfbc;eip=0x001528; 	R(JG(loc_1f6d4));	// 29856 jg      short loc_1F6D4 ;~ 0FBC:1528
cs=0xfbc;eip=0x00152a; 	X(MOV(wallindex, 0x0B1));	// 29857 mov     wallindex, 0B1h ; '±' ;~ 0FBC:152A
cs=0xfbc;eip=0x001530; 	R(JMP(code_bto_blank));	// 29858 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1530
loc_1f6d4:
	// 6400 
cs=0xfbc;eip=0x001534; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x72));	// 29863 cmp     [bp+var_18], 72h ; 'r' ;~ 0FBC:1534
cs=0xfbc;eip=0x001538; 	R(JGE(loc_1f6dd));	// 29864 jge     short loc_1F6DD ;~ 0FBC:1538
cs=0xfbc;eip=0x00153a; 	R(JMP(code_bto_blank));	// 29865 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:153A
loc_1f6dd:
	// 6401 
cs=0xfbc;eip=0x00153d; 	X(MOV(wallindex, 0x0B3));	// 29869 mov     wallindex, 0B3h ; '≥' ;~ 0FBC:153D
cs=0xfbc;eip=0x001543; 	R(JMP(code_bto_blank));	// 29870 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1543
code_bto_ship:
	// 6402 
cs=0xfbc;eip=0x001546; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FF56));	// 29875 cmp     [bp+var_2C], 0FF56h ; jumptable 0001E5B2 case 70 ;~ 0FBC:1546
cs=0xfbc;eip=0x00154b; 	R(JGE(loc_1f6f0));	// 29876 jge     short loc_1F6F0 ;~ 0FBC:154B
cs=0xfbc;eip=0x00154d; 	R(JMP(code_bto_blank));	// 29877 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:154D
loc_1f6f0:
	// 6403 
cs=0xfbc;eip=0x001550; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x104));	// 29881 cmp     [bp+var_2C], 104h ;~ 0FBC:1550
cs=0xfbc;eip=0x001555; 	R(JLE(loc_1f6fa));	// 29882 jle     short loc_1F6FA ;~ 0FBC:1555
cs=0xfbc;eip=0x001557; 	R(JMP(code_bto_blank));	// 29883 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1557
loc_1f6fa:
	// 6404 
cs=0xfbc;eip=0x00155a; 	T(CMP(*(dw*)(raddr(ss,bp+var_2e)), 0x6E));	// 29887 cmp     [bp+var_2E], 6Eh ; 'n' ;~ 0FBC:155A
cs=0xfbc;eip=0x00155e; 	R(JLE(loc_1f703));	// 29888 jle     short loc_1F703 ;~ 0FBC:155E
cs=0xfbc;eip=0x001560; 	R(JMP(code_bto_blank));	// 29889 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1560
loc_1f703:
	// 6405 
cs=0xfbc;eip=0x001563; 	X(MOV(wallheight, 0x0E6));	// 29893 mov     wallHeight, 0E6h ; 'Ê' ;~ 0FBC:1563
cs=0xfbc;eip=0x001569; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x0FF92));	// 29894 cmp     [bp+var_14], 0FF92h ;~ 0FBC:1569
cs=0xfbc;eip=0x00156d; 	R(JG(loc_1f71a));	// 29895 jg      short loc_1F71A ;~ 0FBC:156D
cs=0xfbc;eip=0x00156f; 	X(MOV(wallindex, 0x0B5));	// 29896 mov     wallindex, 0B5h ; 'µ' ;~ 0FBC:156F
cs=0xfbc;eip=0x001575; 	R(JMP(code_bto_blank));	// 29897 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1575
loc_1f71a:
	// 6406 
cs=0xfbc;eip=0x00157a; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), 0x6E));	// 29903 cmp     [bp+var_14], 6Eh ; 'n' ;~ 0FBC:157A
cs=0xfbc;eip=0x00157e; 	R(JL(loc_1f72a));	// 29904 jl      short loc_1F72A ;~ 0FBC:157E
cs=0xfbc;eip=0x001580; 	X(MOV(wallindex, 0x0B8));	// 29905 mov     wallindex, 0B8h ; '∏' ;~ 0FBC:1580
cs=0xfbc;eip=0x001586; 	R(JMP(code_bto_blank));	// 29906 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1586
loc_1f72a:
	// 6407 
cs=0xfbc;eip=0x00158a; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FF56));	// 29911 cmp     [bp+var_18], 0FF56h ;~ 0FBC:158A
cs=0xfbc;eip=0x00158f; 	R(JG(loc_1f73c));	// 29912 jg      short loc_1F73C ;~ 0FBC:158F
cs=0xfbc;eip=0x001591; 	X(MOV(wallindex, 0x0B7));	// 29913 mov     wallindex, 0B7h ; '∑' ;~ 0FBC:1591
cs=0xfbc;eip=0x001597; 	R(JMP(code_bto_blank));	// 29914 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1597
loc_1f73c:
	// 6408 
cs=0xfbc;eip=0x00159c; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x104));	// 29920 cmp     [bp+var_18], 104h ;~ 0FBC:159C
cs=0xfbc;eip=0x0015a1; 	R(JGE(loc_1f746));	// 29921 jge     short loc_1F746 ;~ 0FBC:15A1
cs=0xfbc;eip=0x0015a3; 	R(JMP(code_bto_blank));	// 29922 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:15A3
loc_1f746:
	// 6409 
cs=0xfbc;eip=0x0015a6; 	X(MOV(wallindex, 0x0B6));	// 29926 mov     wallindex, 0B6h ; '∂' ;~ 0FBC:15A6
cs=0xfbc;eip=0x0015ac; 	R(JMP(code_bto_blank));	// 29927 jmp     code_bto_blank  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:15AC
bto_branches:
	// 6410 
code_bto_blank:
	// 6411 
cs=0xfbc;eip=0x001646; 	T(CMP(*(raddr(ss,bp+var_34)), 7));	// 29963 cmp     [bp+var_34], 7  ; jumptable 0001E5B2 default case, cases 13-15,36-64,71-74 ;~ 0FBC:1646
cs=0xfbc;eip=0x00164a; 	R(JNC(code_hillslope_parsing));	// 29964 jnb     short code_hillslope_parsing ;~ 0FBC:164A
cs=0xfbc;eip=0x00164c; 	R(JMP(loc_1f8cd));	// 29965 jmp     loc_1F8CD ;~ 0FBC:164C
code_hillslope_parsing:
	// 6412 
cs=0xfbc;eip=0x00164f; 	T(MOV(al, *(raddr(ss,bp+var_1a))));	// 29969 mov     al, [bp+var_1A] ;~ 0FBC:164F
cs=0xfbc;eip=0x001652; 	T(CBW);	// 29970 cbw ;~ 0FBC:1652
cs=0xfbc;eip=0x001653; 	T(MOV(bx, ax));	// 29971 mov     bx, ax ;~ 0FBC:1653
cs=0xfbc;eip=0x001655; 	T(SHL(bx, 1));	// 29972 shl     bx, 1 ;~ 0FBC:1655
cs=0xfbc;eip=0x001657; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 29973 mov     di, [bp+arg_0] ;~ 0FBC:1657
cs=0xfbc;eip=0x00165a; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 29974 mov     ax, [di] ;~ 0FBC:165A
cs=0xfbc;eip=0x00165c; 	T(SUB(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 29975 sub     ax, trackcenterpos2[bx] ;~ 0FBC:165C
cs=0xfbc;eip=0x001660; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 29976 mov     [bp+var_2C], ax ;~ 0FBC:1660
cs=0xfbc;eip=0x001663; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 29977 mov     al, [bp+var_20] ;~ 0FBC:1663
cs=0xfbc;eip=0x001666; 	T(CBW);	// 29978 cbw ;~ 0FBC:1666
cs=0xfbc;eip=0x001667; 	T(MOV(bx, ax));	// 29979 mov     bx, ax ;~ 0FBC:1667
cs=0xfbc;eip=0x001669; 	T(SHL(bx, 1));	// 29980 shl     bx, 1 ;~ 0FBC:1669
cs=0xfbc;eip=0x00166b; 	T(MOV(ax, *(dw*)(raddr(ds,di+4))));	// 29981 mov     ax, [di+4] ;~ 0FBC:166B
cs=0xfbc;eip=0x00166e; 	T(SUB(ax, *(dw*)(((db*)terraincenterpos)+bx)));	// 29982 sub     ax, terraincenterpos[bx] ;~ 0FBC:166E
cs=0xfbc;eip=0x001672; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 29983 mov     [bp+var_28], ax ;~ 0FBC:1672
cs=0xfbc;eip=0x001675; 	T(MOV(al, *(raddr(ss,bp+var_34))));	// 29984 mov     al, [bp+var_34] ;~ 0FBC:1675
cs=0xfbc;eip=0x001678; 	T(SUB(ah, ah));	// 29985 sub     ah, ah ;~ 0FBC:1678
cs=0xfbc;eip=0x00167a; 	T(SUB(ax, 7));	// 29986 sub     ax, 7           ; switch 12 cases ;~ 0FBC:167A
cs=0xfbc;eip=0x00167d; 	T(CMP(ax, 0x0B));	// 29987 cmp     ax, 0Bh ;~ 0FBC:167D
cs=0xfbc;eip=0x001680; 	R(JA(def_1f825));	// 29988 ja      short def_1F825 ; jumptable 0001F825 default case ;~ 0FBC:1680
cs=0xfbc;eip=0x001682; 	T(ADD(ax, ax));	// 29989 add     ax, ax ;~ 0FBC:1682
cs=0xfbc;eip=0x001684; 	T(XCHG(ax, bx));	// 29990 xchg    ax, bx ;~ 0FBC:1684
	cs=seg_offset(seg004);
cs=0xfbc;eip=0x001685; __disp=*(dw*)(((db*)&jpt_1f825)+bx);
	R(JMP(__dispatch_call));	// 29991 jmp     cs:jpt_1F825[bx] ; switch jump ;~ 0FBC:1685
loc_1f82a:
	// 6413 
cs=0xfbc;eip=0x00168a; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0));	// 29996 mov     [bp+var_10], 0  ; jumptable 0001F825 cases 7,11,15 ;~ 0FBC:168A
cs=0xfbc;eip=0x00168f; 	R(JMP(def_1f825));	// 29997 jmp     short def_1F825 ; jumptable 0001F825 default case ;~ 0FBC:168F
loc_1f832:
	// 6414 
cs=0xfbc;eip=0x001692; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0x300));	// 30003 mov     [bp+var_10], 300h ; jumptable 0001F825 cases 8,12,16 ;~ 0FBC:1692
cs=0xfbc;eip=0x001697; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 30004 mov     ax, [bp+var_2C] ;~ 0FBC:1697
cs=0xfbc;eip=0x00169a; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 30005 mov     [bp+var_1E], ax ;~ 0FBC:169A
cs=0xfbc;eip=0x00169d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 30006 mov     ax, [bp+var_28] ;~ 0FBC:169D
cs=0xfbc;eip=0x0016a0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 30007 mov     [bp+var_2C], ax ;~ 0FBC:16A0
cs=0xfbc;eip=0x0016a3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 30008 mov     ax, [bp+var_1E] ;~ 0FBC:16A3
cs=0xfbc;eip=0x0016a6; 	T(NEG(ax));	// 30009 neg     ax ;~ 0FBC:16A6
loc_1f848:
	// 6415 
cs=0xfbc;eip=0x0016a8; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 30012 mov     [bp+var_28], ax ;~ 0FBC:16A8
cs=0xfbc;eip=0x0016ab; 	R(JMP(def_1f825));	// 30013 jmp     short def_1F825 ; jumptable 0001F825 default case ;~ 0FBC:16AB
loc_1f84e:
	// 6416 
cs=0xfbc;eip=0x0016ae; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0x200));	// 30019 mov     [bp+var_10], 200h ; jumptable 0001F825 cases 9,13,17 ;~ 0FBC:16AE
cs=0xfbc;eip=0x0016b3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 30020 mov     ax, [bp+var_28] ;~ 0FBC:16B3
cs=0xfbc;eip=0x0016b6; 	T(NEG(ax));	// 30021 neg     ax ;~ 0FBC:16B6
cs=0xfbc;eip=0x0016b8; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 30022 mov     [bp+var_28], ax ;~ 0FBC:16B8
cs=0xfbc;eip=0x0016bb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 30023 mov     ax, [bp+var_2C] ;~ 0FBC:16BB
cs=0xfbc;eip=0x0016be; 	T(NEG(ax));	// 30024 neg     ax ;~ 0FBC:16BE
cs=0xfbc;eip=0x0016c0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 30025 mov     [bp+var_2C], ax ;~ 0FBC:16C0
cs=0xfbc;eip=0x0016c3; 	R(JMP(def_1f825));	// 30026 jmp     short def_1F825 ; jumptable 0001F825 default case ;~ 0FBC:16C3
loc_1f866:
	// 6417 
cs=0xfbc;eip=0x0016c6; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0x100));	// 30032 mov     [bp+var_10], 100h ; jumptable 0001F825 cases 10,14,18 ;~ 0FBC:16C6
cs=0xfbc;eip=0x0016cb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 30033 mov     ax, [bp+var_2C] ;~ 0FBC:16CB
cs=0xfbc;eip=0x0016ce; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 30034 mov     [bp+var_1E], ax ;~ 0FBC:16CE
cs=0xfbc;eip=0x0016d1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 30035 mov     ax, [bp+var_28] ;~ 0FBC:16D1
cs=0xfbc;eip=0x0016d4; 	T(NEG(ax));	// 30036 neg     ax ;~ 0FBC:16D4
cs=0xfbc;eip=0x0016d6; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 30037 mov     [bp+var_2C], ax ;~ 0FBC:16D6
cs=0xfbc;eip=0x0016d9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 30038 mov     ax, [bp+var_1E] ;~ 0FBC:16D9
cs=0xfbc;eip=0x0016dc; 	R(JMP(loc_1f848));	// 30039 jmp     short loc_1F848 ;~ 0FBC:16DC
def_1f825:
	// 6418 
cs=0xfbc;eip=0x0016f6; 	T(MOV(al, *(raddr(ss,bp+var_34))));	// 30057 mov     al, [bp+var_34] ; jumptable 0001F825 default case ;~ 0FBC:16F6
cs=0xfbc;eip=0x0016f9; 	T(SUB(ah, ah));	// 30058 sub     ah, ah ;~ 0FBC:16F9
cs=0xfbc;eip=0x0016fb; 	T(CMP(ax, 7));	// 30059 cmp     ax, 7 ;~ 0FBC:16FB
cs=0xfbc;eip=0x0016fe; 	R(JC(loc_1f8cd));	// 30060 jb      short loc_1F8CD ;~ 0FBC:16FE
cs=0xfbc;eip=0x001700; 	T(CMP(ax, 0x0A));	// 30061 cmp     ax, 0Ah ;~ 0FBC:1700
cs=0xfbc;eip=0x001703; 	R(JBE(loc_1f8c0));	// 30062 jbe     short loc_1F8C0 ;~ 0FBC:1703
cs=0xfbc;eip=0x001705; 	T(CMP(ax, 0x0B));	// 30063 cmp     ax, 0Bh ;~ 0FBC:1705
cs=0xfbc;eip=0x001708; 	R(JC(loc_1f8cd));	// 30064 jb      short loc_1F8CD ;~ 0FBC:1708
cs=0xfbc;eip=0x00170a; 	T(CMP(ax, 0x0E));	// 30065 cmp     ax, 0Eh ;~ 0FBC:170A
cs=0xfbc;eip=0x00170d; 	R(JBE(loc_1f8fc));	// 30066 jbe     short loc_1F8FC ;~ 0FBC:170D
cs=0xfbc;eip=0x00170f; 	T(CMP(ax, 0x0F));	// 30067 cmp     ax, 0Fh ;~ 0FBC:170F
cs=0xfbc;eip=0x001712; 	R(JC(loc_1f8cd));	// 30068 jb      short loc_1F8CD ;~ 0FBC:1712
cs=0xfbc;eip=0x001714; 	T(CMP(ax, 0x12));	// 30069 cmp     ax, 12h ;~ 0FBC:1714
cs=0xfbc;eip=0x001717; 	R(JA(loc_1f8bc));	// 30070 ja      short loc_1F8BC ;~ 0FBC:1717
cs=0xfbc;eip=0x001719; 	R(JMP(loc_1f940));	// 30071 jmp     loc_1F940 ;~ 0FBC:1719
loc_1f8bc:
	// 6419 
cs=0xfbc;eip=0x00171c; 	R(JMP(loc_1f8cd));	// 30075 jmp     short loc_1F8CD ;~ 0FBC:171C
loc_1f8c0:
	// 6420 
cs=0xfbc;eip=0x001720; 	T(CMP(planindex, 0));	// 30081 cmp     planindex, 0 ;~ 0FBC:1720
cs=0xfbc;eip=0x001725; 	R(JNZ(loc_1f8cd));	// 30082 jnz     short loc_1F8CD ;~ 0FBC:1725
cs=0xfbc;eip=0x001727; 	X(MOV(planindex, 3));	// 30083 mov     planindex, 3 ;~ 0FBC:1727
loc_1f8cd:
	// 6421 
cs=0xfbc;eip=0x00172d; 	T(CMP(planindex, 0));	// 30087 cmp     planindex, 0 ;~ 0FBC:172D
cs=0xfbc;eip=0x001732; 	R(JG(loc_1f8d7));	// 30088 jg      short loc_1F8D7 ;~ 0FBC:1732
cs=0xfbc;eip=0x001734; 	R(JMP(loc_1f992));	// 30089 jmp     loc_1F992 ;~ 0FBC:1734
loc_1f8d7:
	// 6422 
cs=0xfbc;eip=0x001737; 	T(MOV(cl, 2));	// 30093 mov     cl, 2 ;~ 0FBC:1737
cs=0xfbc;eip=0x001739; 	X(SHL(planindex, cl));	// 30094 shl     planindex, cl ;~ 0FBC:1739
cs=0xfbc;eip=0x00173d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 30095 mov     ax, [bp+var_10] ;~ 0FBC:173D
cs=0xfbc;eip=0x001740; 	T(CMP(ax, 0x100));	// 30096 cmp     ax, 100h ;~ 0FBC:1740
cs=0xfbc;eip=0x001743; 	R(JNZ(loc_1f8e8));	// 30097 jnz     short loc_1F8E8 ;~ 0FBC:1743
cs=0xfbc;eip=0x001745; 	R(JMP(loc_1f9cc));	// 30098 jmp     loc_1F9CC ;~ 0FBC:1745
loc_1f8e8:
	// 6423 
cs=0xfbc;eip=0x001748; 	T(CMP(ax, 0x200));	// 30102 cmp     ax, 200h ;~ 0FBC:1748
cs=0xfbc;eip=0x00174b; 	R(JNZ(loc_1f8f0));	// 30103 jnz     short loc_1F8F0 ;~ 0FBC:174B
cs=0xfbc;eip=0x00174d; 	R(JMP(loc_1f9c4));	// 30104 jmp     loc_1F9C4 ;~ 0FBC:174D
loc_1f8f0:
	// 6424 
cs=0xfbc;eip=0x001750; 	T(CMP(ax, 0x300));	// 30108 cmp     ax, 300h ;~ 0FBC:1750
cs=0xfbc;eip=0x001753; 	R(JNZ(loc_1f8f8));	// 30109 jnz     short loc_1F8F8 ;~ 0FBC:1753
cs=0xfbc;eip=0x001755; 	R(JMP(loc_1f98e));	// 30110 jmp     loc_1F98E ;~ 0FBC:1755
loc_1f8f8:
	// 6425 
cs=0xfbc;eip=0x001758; 	R(JMP(loc_1f992));	// 30114 jmp     loc_1F992 ;~ 0FBC:1758
loc_1f8fc:
	// 6426 
cs=0xfbc;eip=0x00175c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_28))));	// 30119 push    [bp+var_28] ;~ 0FBC:175C
cs=0xfbc;eip=0x00175f; 	T(MOV(ax, 0x0FF80));	// 30120 mov     ax, 0FF80h ;~ 0FBC:175F
cs=0xfbc;eip=0x001762; 	X(PUSH(ax));	// 30121 push    ax ;~ 0FBC:1762
cs=0xfbc;eip=0x001763; 	R(CALLF(sin_fast,0));	// 30122 call    sin_fast ;~ 0FBC:1763
cs=0xfbc;eip=0x001768; 	T(ADD(sp, 2));	// 30123 add     sp, 2 ;~ 0FBC:1768
cs=0xfbc;eip=0x00176b; 	X(PUSH(ax));	// 30124 push    ax ;~ 0FBC:176B
cs=0xfbc;eip=0x00176c; 	R(CALLF(multiply_and_scale,0));	// 30125 call    multiply_and_scale ;~ 0FBC:176C
cs=0xfbc;eip=0x001771; 	T(ADD(sp, 4));	// 30126 add     sp, 4 ;~ 0FBC:1771
cs=0xfbc;eip=0x001774; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2c))));	// 30127 push    [bp+var_2C] ;~ 0FBC:1774
cs=0xfbc;eip=0x001777; 	T(MOV(cx, 0x0FF80));	// 30128 mov     cx, 0FF80h ;~ 0FBC:1777
cs=0xfbc;eip=0x00177a; 	X(PUSH(cx));	// 30129 push    cx ;~ 0FBC:177A
cs=0xfbc;eip=0x00177b; 	T(MOV(di, ax));	// 30130 mov     di, ax ;~ 0FBC:177B
cs=0xfbc;eip=0x00177d; 	R(CALLF(cos_fast,0));	// 30131 call    cos_fast ;~ 0FBC:177D
cs=0xfbc;eip=0x001782; 	T(ADD(sp, 2));	// 30132 add     sp, 2 ;~ 0FBC:1782
cs=0xfbc;eip=0x001785; 	X(PUSH(ax));	// 30133 push    ax ;~ 0FBC:1785
cs=0xfbc;eip=0x001786; 	R(CALLF(multiply_and_scale,0));	// 30134 call    multiply_and_scale ;~ 0FBC:1786
cs=0xfbc;eip=0x00178b; 	T(ADD(sp, 4));	// 30135 add     sp, 4 ;~ 0FBC:178B
cs=0xfbc;eip=0x00178e; 	T(ADD(ax, di));	// 30136 add     ax, di ;~ 0FBC:178E
cs=0xfbc;eip=0x001790; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 30137 mov     [bp+var_22], ax ;~ 0FBC:1790
cs=0xfbc;eip=0x001793; 	T(OR(ax, ax));	// 30138 or      ax, ax ;~ 0FBC:1793
cs=0xfbc;eip=0x001795; 	R(JGE(loc_1f8cd));	// 30139 jge     short loc_1F8CD ;~ 0FBC:1795
cs=0xfbc;eip=0x001797; 	X(MOV(planindex, 4));	// 30140 mov     planindex, 4 ;~ 0FBC:1797
cs=0xfbc;eip=0x00179d; 	R(JMP(loc_1f8cd));	// 30141 jmp     short loc_1F8CD ;~ 0FBC:179D
loc_1f940:
	// 6427 
cs=0xfbc;eip=0x0017a0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_28))));	// 30146 push    [bp+var_28] ;~ 0FBC:17A0
cs=0xfbc;eip=0x0017a3; 	T(MOV(ax, 0x0FF80));	// 30147 mov     ax, 0FF80h ;~ 0FBC:17A3
cs=0xfbc;eip=0x0017a6; 	X(PUSH(ax));	// 30148 push    ax ;~ 0FBC:17A6
cs=0xfbc;eip=0x0017a7; 	R(CALLF(sin_fast,0));	// 30149 call    sin_fast ;~ 0FBC:17A7
cs=0xfbc;eip=0x0017ac; 	T(ADD(sp, 2));	// 30150 add     sp, 2 ;~ 0FBC:17AC
cs=0xfbc;eip=0x0017af; 	X(PUSH(ax));	// 30151 push    ax ;~ 0FBC:17AF
cs=0xfbc;eip=0x0017b0; 	R(CALLF(multiply_and_scale,0));	// 30152 call    multiply_and_scale ;~ 0FBC:17B0
cs=0xfbc;eip=0x0017b5; 	T(ADD(sp, 4));	// 30153 add     sp, 4 ;~ 0FBC:17B5
cs=0xfbc;eip=0x0017b8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2c))));	// 30154 push    [bp+var_2C] ;~ 0FBC:17B8
cs=0xfbc;eip=0x0017bb; 	T(MOV(cx, 0x0FF80));	// 30155 mov     cx, 0FF80h ;~ 0FBC:17BB
cs=0xfbc;eip=0x0017be; 	X(PUSH(cx));	// 30156 push    cx ;~ 0FBC:17BE
cs=0xfbc;eip=0x0017bf; 	T(MOV(di, ax));	// 30157 mov     di, ax ;~ 0FBC:17BF
cs=0xfbc;eip=0x0017c1; 	R(CALLF(cos_fast,0));	// 30158 call    cos_fast ;~ 0FBC:17C1
cs=0xfbc;eip=0x0017c6; 	T(ADD(sp, 2));	// 30159 add     sp, 2 ;~ 0FBC:17C6
cs=0xfbc;eip=0x0017c9; 	X(PUSH(ax));	// 30160 push    ax ;~ 0FBC:17C9
cs=0xfbc;eip=0x0017ca; 	R(CALLF(multiply_and_scale,0));	// 30161 call    multiply_and_scale ;~ 0FBC:17CA
cs=0xfbc;eip=0x0017cf; 	T(ADD(sp, 4));	// 30162 add     sp, 4 ;~ 0FBC:17CF
cs=0xfbc;eip=0x0017d2; 	T(ADD(ax, di));	// 30163 add     ax, di ;~ 0FBC:17D2
cs=0xfbc;eip=0x0017d4; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 30164 mov     [bp+var_22], ax ;~ 0FBC:17D4
cs=0xfbc;eip=0x0017d7; 	T(OR(ax, ax));	// 30165 or      ax, ax ;~ 0FBC:17D7
cs=0xfbc;eip=0x0017d9; 	R(JLE(loc_1f984));	// 30166 jle     short loc_1F984 ;~ 0FBC:17D9
cs=0xfbc;eip=0x0017db; 	X(MOV(planindex, 5));	// 30167 mov     planindex, 5 ;~ 0FBC:17DB
cs=0xfbc;eip=0x0017e1; 	R(JMP(loc_1f8cd));	// 30168 jmp     loc_1F8CD ;~ 0FBC:17E1
loc_1f984:
	// 6428 
cs=0xfbc;eip=0x0017e4; 	X(MOV(terrainheight, 0x1C2));	// 30172 mov     terrainHeight, 1C2h ;~ 0FBC:17E4
cs=0xfbc;eip=0x0017ea; 	R(JMP(loc_1f8cd));	// 30173 jmp     loc_1F8CD ;~ 0FBC:17EA
loc_1f98e:
	// 6429 
cs=0xfbc;eip=0x0017ee; 	X(INC(planindex));	// 30178 inc     planindex ;~ 0FBC:17EE
loc_1f992:
	// 6430 
cs=0xfbc;eip=0x0017f2; 	T(MOV(ax, 0x22));	// 30182 mov     ax, 22h ; '"' ;~ 0FBC:17F2
cs=0xfbc;eip=0x0017f5; 	X(IMUL1_2(planindex));	// 30183 imul    planindex ;~ 0FBC:17F5
cs=0xfbc;eip=0x0017f9; 	T(ADD(ax, planptr));	// 30184 add     ax, planptr ;~ 0FBC:17F9
cs=0xfbc;eip=0x0017fd; 	T(MOV(dx, word_454c4));	// 30185 mov     dx, word_454C4 ;~ 0FBC:17FD
cs=0xfbc;eip=0x001801; 	X(MOV(current_planptr, ax));	// 30186 mov     current_planptr, ax ;~ 0FBC:1801
cs=0xfbc;eip=0x001804; 	X(MOV(word_44d66, dx));	// 30187 mov     word_44D66, dx ;~ 0FBC:1804
cs=0xfbc;eip=0x001808; 	T(CMP(current_surf_type, 4));	// 30188 cmp     current_surf_type, 4 ;~ 0FBC:1808
cs=0xfbc;eip=0x00180d; 	R(JNZ(loc_1f9d4));	// 30189 jnz     short loc_1F9D4 ;~ 0FBC:180D
cs=0xfbc;eip=0x00180f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 30190 mov     bx, [bp+arg_0] ;~ 0FBC:180F
cs=0xfbc;eip=0x001812; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 30191 mov     ax, [bx+4] ;~ 0FBC:1812
cs=0xfbc;eip=0x001815; 	T(XOR(ax, *(dw*)(raddr(ds,bx))));	// 30192 xor     ax, [bx] ;~ 0FBC:1815
cs=0xfbc;eip=0x001817; 	T(MOV(cl, 8));	// 30193 mov     cl, 8 ;~ 0FBC:1817
cs=0xfbc;eip=0x001819; 	T(SAR(ax, cl));	// 30194 sar     ax, cl ;~ 0FBC:1819
cs=0xfbc;eip=0x00181b; 	T(AND(ax, 1));	// 30195 and     ax, 1 ;~ 0FBC:181B
cs=0xfbc;eip=0x00181e; 	X(ADD(terrainheight, ax));	// 30196 add     terrainHeight, ax ;~ 0FBC:181E
cs=0xfbc;eip=0x001822; 	R(JMP(loc_1f9d9));	// 30197 jmp     short loc_1F9D9 ;~ 0FBC:1822
loc_1f9c4:
	// 6431 
cs=0xfbc;eip=0x001824; 	X(ADD(planindex, 2));	// 30201 add     planindex, 2 ;~ 0FBC:1824
cs=0xfbc;eip=0x001829; 	R(JMP(loc_1f992));	// 30202 jmp     short loc_1F992 ;~ 0FBC:1829
loc_1f9cc:
	// 6432 
cs=0xfbc;eip=0x00182c; 	X(ADD(planindex, 3));	// 30207 add     planindex, 3 ;~ 0FBC:182C
cs=0xfbc;eip=0x001831; 	R(JMP(loc_1f992));	// 30208 jmp     short loc_1F992 ;~ 0FBC:1831
loc_1f9d4:
	// 6433 
cs=0xfbc;eip=0x001834; 	X(ADD(terrainheight, 2));	// 30213 add     terrainHeight, 2 ;~ 0FBC:1834
loc_1f9d9:
	// 6434 
cs=0xfbc;eip=0x001839; 	T(CMP(wallindex, 0));	// 30216 cmp     wallindex, 0 ;~ 0FBC:1839
cs=0xfbc;eip=0x00183e; 	R(JGE(loc_1f9e3));	// 30217 jge     short loc_1F9E3 ;~ 0FBC:183E
cs=0xfbc;eip=0x001840; 	R(JMP(loc_1fade));	// 30218 jmp     loc_1FADE ;~ 0FBC:1840
loc_1f9e3:
	// 6435 
cs=0xfbc;eip=0x001843; 	T(MOV(bx, wallindex));	// 30222 mov     bx, wallindex ;~ 0FBC:1843
cs=0xfbc;eip=0x001847; 	T(MOV(ax, bx));	// 30223 mov     ax, bx ;~ 0FBC:1847
cs=0xfbc;eip=0x001849; 	T(SHL(bx, 1));	// 30224 shl     bx, 1 ;~ 0FBC:1849
cs=0xfbc;eip=0x00184b; 	T(ADD(bx, ax));	// 30225 add     bx, ax ;~ 0FBC:184B
cs=0xfbc;eip=0x00184d; 	T(SHL(bx, 1));	// 30226 shl     bx, 1           ; *6 ;~ 0FBC:184D
cs=0xfbc;eip=0x00184f; 	T(LES(di, wallptr));	// 30227 les     di, wallptr ;~ 0FBC:184F
cs=0xfbc;eip=0x001853; 	T(MOV(ax, *(dw*)(raddr(es,bx+di))));	// 30228 mov     ax, es:[bx+di] ;~ 0FBC:1853
cs=0xfbc;eip=0x001856; 	T(NEG(ax));	// 30229 neg     ax ;~ 0FBC:1856
cs=0xfbc;eip=0x001858; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_10))));	// 30230 add     ax, [bp+var_10] ;~ 0FBC:1858
cs=0xfbc;eip=0x00185b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_38))));	// 30231 add     ax, [bp+var_38] ;~ 0FBC:185B
cs=0xfbc;eip=0x00185e; 	T(AND(ah, 3));	// 30232 and     ah, 3 ;~ 0FBC:185E
cs=0xfbc;eip=0x001861; 	X(MOV(wallorientation, ax));	// 30233 mov     wallOrientation, ax ;~ 0FBC:1861
cs=0xfbc;eip=0x001864; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 30234 mov     ax, [bp+var_10] ;~ 0FBC:1864
cs=0xfbc;eip=0x001867; 	T(OR(ax, ax));	// 30235 or      ax, ax ;~ 0FBC:1867
cs=0xfbc;eip=0x001869; 	R(JZ(loc_1fa20));	// 30236 jz      short loc_1FA20 ;~ 0FBC:1869
cs=0xfbc;eip=0x00186b; 	T(CMP(ax, 0x100));	// 30237 cmp     ax, 100h ;~ 0FBC:186B
cs=0xfbc;eip=0x00186e; 	R(JNZ(loc_1fa13));	// 30238 jnz     short loc_1FA13 ;~ 0FBC:186E
cs=0xfbc;eip=0x001870; 	R(JMP(loc_1faa6));	// 30239 jmp     loc_1FAA6 ;~ 0FBC:1870
loc_1fa13:
	// 6436 
cs=0xfbc;eip=0x001873; 	T(CMP(ax, 0x200));	// 30243 cmp     ax, 200h ;~ 0FBC:1873
cs=0xfbc;eip=0x001876; 	R(JZ(loc_1fa78));	// 30244 jz      short loc_1FA78 ;~ 0FBC:1876
cs=0xfbc;eip=0x001878; 	T(CMP(ax, 0x300));	// 30245 cmp     ax, 300h ;~ 0FBC:1878
cs=0xfbc;eip=0x00187b; 	R(JZ(loc_1fa4c));	// 30246 jz      short loc_1FA4C ;~ 0FBC:187B
cs=0xfbc;eip=0x00187d; 	R(JMP(loc_1fad0));	// 30247 jmp     loc_1FAD0 ;~ 0FBC:187D
loc_1fa20:
	// 6437 
cs=0xfbc;eip=0x001880; 	T(MOV(ax, wallindex));	// 30251 mov     ax, wallindex ;~ 0FBC:1880
cs=0xfbc;eip=0x001883; 	T(MOV(cx, ax));	// 30252 mov     cx, ax ;~ 0FBC:1883
cs=0xfbc;eip=0x001885; 	T(SHL(ax, 1));	// 30253 shl     ax, 1 ;~ 0FBC:1885
cs=0xfbc;eip=0x001887; 	T(ADD(ax, cx));	// 30254 add     ax, cx ;~ 0FBC:1887
cs=0xfbc;eip=0x001889; 	T(SHL(ax, 1));	// 30255 shl     ax, 1 ;~ 0FBC:1889
cs=0xfbc;eip=0x00188b; 	T(ADD(ax, *(dw*)(((db*)&wallptr))));	// 30256 add     ax, word ptr wallptr ;~ 0FBC:188B
cs=0xfbc;eip=0x00188f; 	T(MOV(dx, es));	// 30257 mov     dx, es ;~ 0FBC:188F
cs=0xfbc;eip=0x001891; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_40))), ax));	// 30258 mov     word ptr [bp+var_40], ax ;~ 0FBC:1891
cs=0xfbc;eip=0x001894; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_40+2))), dx));	// 30259 mov     word ptr [bp+var_40+2], dx ;~ 0FBC:1894
cs=0xfbc;eip=0x001897; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_40))));	// 30260 les     bx, [bp+var_40] ;~ 0FBC:1897
cs=0xfbc;eip=0x00189a; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 30261 mov     ax, es:[bx+2] ;~ 0FBC:189A
cs=0xfbc;eip=0x00189e; 	X(MOV(wallstartx, ax));	// 30262 mov     wallStartX, ax ;~ 0FBC:189E
cs=0xfbc;eip=0x0018a1; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 30263 mov     ax, es:[bx+4] ;~ 0FBC:18A1
loc_1fa45:
	// 6438 
cs=0xfbc;eip=0x0018a5; 	X(MOV(wallstartz, ax));	// 30267 mov     wallStartZ, ax ;~ 0FBC:18A5
cs=0xfbc;eip=0x0018a8; 	R(JMP(loc_1fad0));	// 30268 jmp     loc_1FAD0 ;~ 0FBC:18A8
loc_1fa4c:
	// 6439 
cs=0xfbc;eip=0x0018ac; 	T(MOV(ax, wallindex));	// 30273 mov     ax, wallindex ;~ 0FBC:18AC
cs=0xfbc;eip=0x0018af; 	T(MOV(cx, ax));	// 30274 mov     cx, ax ;~ 0FBC:18AF
cs=0xfbc;eip=0x0018b1; 	T(SHL(ax, 1));	// 30275 shl     ax, 1 ;~ 0FBC:18B1
cs=0xfbc;eip=0x0018b3; 	T(ADD(ax, cx));	// 30276 add     ax, cx ;~ 0FBC:18B3
cs=0xfbc;eip=0x0018b5; 	T(SHL(ax, 1));	// 30277 shl     ax, 1 ;~ 0FBC:18B5
cs=0xfbc;eip=0x0018b7; 	T(ADD(ax, *(dw*)(((db*)&wallptr))));	// 30278 add     ax, word ptr wallptr ;~ 0FBC:18B7
cs=0xfbc;eip=0x0018bb; 	T(MOV(dx, *(dw*)(((db*)&wallptr)+2)));	// 30279 mov     dx, word ptr wallptr+2 ;~ 0FBC:18BB
cs=0xfbc;eip=0x0018bf; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_40))), ax));	// 30280 mov     word ptr [bp+var_40], ax ;~ 0FBC:18BF
cs=0xfbc;eip=0x0018c2; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_40+2))), dx));	// 30281 mov     word ptr [bp+var_40+2], dx ;~ 0FBC:18C2
cs=0xfbc;eip=0x0018c5; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_40))));	// 30282 les     bx, [bp+var_40] ;~ 0FBC:18C5
cs=0xfbc;eip=0x0018c8; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 30283 mov     ax, es:[bx+4] ;~ 0FBC:18C8
cs=0xfbc;eip=0x0018cc; 	T(NEG(ax));	// 30284 neg     ax ;~ 0FBC:18CC
cs=0xfbc;eip=0x0018ce; 	X(MOV(wallstartx, ax));	// 30285 mov     wallStartX, ax ;~ 0FBC:18CE
cs=0xfbc;eip=0x0018d1; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 30286 mov     ax, es:[bx+2] ;~ 0FBC:18D1
cs=0xfbc;eip=0x0018d5; 	R(JMP(loc_1fa45));	// 30287 jmp     short loc_1FA45 ;~ 0FBC:18D5
loc_1fa78:
	// 6440 
cs=0xfbc;eip=0x0018d8; 	T(MOV(ax, wallindex));	// 30292 mov     ax, wallindex ;~ 0FBC:18D8
cs=0xfbc;eip=0x0018db; 	T(MOV(cx, ax));	// 30293 mov     cx, ax ;~ 0FBC:18DB
cs=0xfbc;eip=0x0018dd; 	T(SHL(ax, 1));	// 30294 shl     ax, 1 ;~ 0FBC:18DD
cs=0xfbc;eip=0x0018df; 	T(ADD(ax, cx));	// 30295 add     ax, cx ;~ 0FBC:18DF
cs=0xfbc;eip=0x0018e1; 	T(SHL(ax, 1));	// 30296 shl     ax, 1 ;~ 0FBC:18E1
cs=0xfbc;eip=0x0018e3; 	T(ADD(ax, *(dw*)(((db*)&wallptr))));	// 30297 add     ax, word ptr wallptr ;~ 0FBC:18E3
cs=0xfbc;eip=0x0018e7; 	T(MOV(dx, *(dw*)(((db*)&wallptr)+2)));	// 30298 mov     dx, word ptr wallptr+2 ;~ 0FBC:18E7
cs=0xfbc;eip=0x0018eb; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_40))), ax));	// 30299 mov     word ptr [bp+var_40], ax ;~ 0FBC:18EB
cs=0xfbc;eip=0x0018ee; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_40+2))), dx));	// 30300 mov     word ptr [bp+var_40+2], dx ;~ 0FBC:18EE
cs=0xfbc;eip=0x0018f1; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_40))));	// 30301 les     bx, [bp+var_40] ;~ 0FBC:18F1
cs=0xfbc;eip=0x0018f4; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 30302 mov     ax, es:[bx+2] ;~ 0FBC:18F4
cs=0xfbc;eip=0x0018f8; 	T(NEG(ax));	// 30303 neg     ax ;~ 0FBC:18F8
cs=0xfbc;eip=0x0018fa; 	X(MOV(wallstartx, ax));	// 30304 mov     wallStartX, ax ;~ 0FBC:18FA
cs=0xfbc;eip=0x0018fd; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 30305 mov     ax, es:[bx+4] ;~ 0FBC:18FD
loc_1faa1:
	// 6441 
cs=0xfbc;eip=0x001901; 	T(NEG(ax));	// 30308 neg     ax ;~ 0FBC:1901
cs=0xfbc;eip=0x001903; 	R(JMP(loc_1fa45));	// 30309 jmp     short loc_1FA45 ;~ 0FBC:1903
loc_1faa6:
	// 6442 
cs=0xfbc;eip=0x001906; 	T(MOV(ax, wallindex));	// 30314 mov     ax, wallindex ;~ 0FBC:1906
cs=0xfbc;eip=0x001909; 	T(MOV(cx, ax));	// 30315 mov     cx, ax ;~ 0FBC:1909
cs=0xfbc;eip=0x00190b; 	T(SHL(ax, 1));	// 30316 shl     ax, 1 ;~ 0FBC:190B
cs=0xfbc;eip=0x00190d; 	T(ADD(ax, cx));	// 30317 add     ax, cx ;~ 0FBC:190D
cs=0xfbc;eip=0x00190f; 	T(SHL(ax, 1));	// 30318 shl     ax, 1 ;~ 0FBC:190F
cs=0xfbc;eip=0x001911; 	T(ADD(ax, *(dw*)(((db*)&wallptr))));	// 30319 add     ax, word ptr wallptr ;~ 0FBC:1911
cs=0xfbc;eip=0x001915; 	T(MOV(dx, *(dw*)(((db*)&wallptr)+2)));	// 30320 mov     dx, word ptr wallptr+2 ;~ 0FBC:1915
cs=0xfbc;eip=0x001919; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_40))), ax));	// 30321 mov     word ptr [bp+var_40], ax ;~ 0FBC:1919
cs=0xfbc;eip=0x00191c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_40+2))), dx));	// 30322 mov     word ptr [bp+var_40+2], dx ;~ 0FBC:191C
cs=0xfbc;eip=0x00191f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_40))));	// 30323 les     bx, [bp+var_40] ;~ 0FBC:191F
cs=0xfbc;eip=0x001922; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 30324 mov     ax, es:[bx+4] ;~ 0FBC:1922
cs=0xfbc;eip=0x001926; 	X(MOV(wallstartx, ax));	// 30325 mov     wallStartX, ax ;~ 0FBC:1926
cs=0xfbc;eip=0x001929; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 30326 mov     ax, es:[bx+2] ;~ 0FBC:1929
cs=0xfbc;eip=0x00192d; 	R(JMP(loc_1faa1));	// 30327 jmp     short loc_1FAA1 ;~ 0FBC:192D
loc_1fad0:
	// 6443 
cs=0xfbc;eip=0x001930; 	T(MOV(ax, elem_xcenter));	// 30333 mov     ax, elem_xCenter ;~ 0FBC:1930
cs=0xfbc;eip=0x001933; 	X(ADD(wallstartx, ax));	// 30334 add     wallStartX, ax ;~ 0FBC:1933
cs=0xfbc;eip=0x001937; 	T(MOV(ax, elem_zcenter));	// 30335 mov     ax, elem_zCenter ;~ 0FBC:1937
cs=0xfbc;eip=0x00193a; 	X(ADD(wallstartz, ax));	// 30336 add     wallStartZ, ax ;~ 0FBC:193A
loc_1fade:
	// 6444 
cs=0xfbc;eip=0x00193e; 	X(POP(si));	// 30339 pop     si ;~ 0FBC:193E
cs=0xfbc;eip=0x00193f; 	X(POP(di));	// 30340 pop     di ;~ 0FBC:193F
cs=0xfbc;eip=0x001940; 	T(MOV(sp, bp));	// 30341 mov     sp, bp ;~ 0FBC:1940
cs=0xfbc;eip=0x001942; 	X(POP(bp));	// 30342 pop     bp ;~ 0FBC:1942
cs=0xfbc;eip=0x001943; 	R(RETF(0));	// 30343 retf ;~ 0FBC:1943
bto_auxiliary1:
	// 30351 
#undef var_14
#define var_14 -0x14
	// 30353 var_14          = word ptr -14h ;~ 0FBC:1944
#undef var_10
#define var_10 -0x10
	// 30354 var_10          = byte ptr -10h ;~ 0FBC:1944
#undef var_c
#define var_c -0x0C
	// 30355 var_C           = word ptr -0Ch ;~ 0FBC:1944
#undef var_a
#define var_a -0x0A
	// 30356 var_A           = word ptr -0Ah ;~ 0FBC:1944
#undef var_8
#define var_8 -8
	// 30357 var_8           = word ptr -8 ;~ 0FBC:1944
#undef var_6
#define var_6 -6
	// 30358 var_6           = word ptr -6 ;~ 0FBC:1944
#undef var_4
#define var_4 -4
	// 30359 var_4           = word ptr -4 ;~ 0FBC:1944
#undef var_2
#define var_2 -2
	// 30360 var_2           = byte ptr -2 ;~ 0FBC:1944
#undef arg_0
#define arg_0 6
	// 30361 arg_0           = word ptr  6 ;~ 0FBC:1944
#undef arg_2
#define arg_2 8
	// 30362 arg_2           = word ptr  8 ;~ 0FBC:1944
#undef arg_4
#define arg_4 0x0A
	// 30363 arg_4           = word ptr  0Ah ;~ 0FBC:1944
ret_fbc_1944:
	// 6445 
cs=0xfbc;eip=0x001944; 	X(PUSH(bp));	// 30365 push    bp ;~ 0FBC:1944
cs=0xfbc;eip=0x001945; 	T(MOV(bp, sp));	// 30366 mov     bp, sp ;~ 0FBC:1945
cs=0xfbc;eip=0x001947; 	T(SUB(sp, 0x14));	// 30367 sub     sp, 14h ;~ 0FBC:1947
cs=0xfbc;eip=0x00194a; 	X(PUSH(di));	// 30368 push    di ;~ 0FBC:194A
cs=0xfbc;eip=0x00194b; 	X(PUSH(si));	// 30369 push    si ;~ 0FBC:194B
cs=0xfbc;eip=0x00194c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 30370 mov     bx, [bp+arg_2] ;~ 0FBC:194C
cs=0xfbc;eip=0x00194f; 	T(SHL(bx, 1));	// 30371 shl     bx, 1 ;~ 0FBC:194F
cs=0xfbc;eip=0x001951; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 30372 mov     bx, trackrows[bx] ;~ 0FBC:1951
cs=0xfbc;eip=0x001955; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 30373 add     bx, [bp+arg_0] ;~ 0FBC:1955
cs=0xfbc;eip=0x001958; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 30374 add     bx, word ptr td14_elem_map_main ;~ 0FBC:1958
cs=0xfbc;eip=0x00195c; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 30375 mov     es, word ptr td14_elem_map_main+2 ;~ 0FBC:195C
cs=0xfbc;eip=0x001960; 	T(MOV(al, *(raddr(es,bx))));	// 30376 mov     al, es:[bx] ;~ 0FBC:1960
cs=0xfbc;eip=0x001963; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 30377 mov     [bp+var_2], al ;~ 0FBC:1963
cs=0xfbc;eip=0x001966; 	T(OR(al, al));	// 30378 or      al, al ;~ 0FBC:1966
cs=0xfbc;eip=0x001968; 	R(JNZ(loc_1fb12));	// 30379 jnz     short loc_1FB12 ;~ 0FBC:1968
loc_1fb0a:
	// 6446 
cs=0xfbc;eip=0x00196a; 	T(SUB(ax, ax));	// 30382 sub     ax, ax ;~ 0FBC:196A
cs=0xfbc;eip=0x00196c; 	X(POP(si));	// 30383 pop     si ;~ 0FBC:196C
cs=0xfbc;eip=0x00196d; 	X(POP(di));	// 30384 pop     di ;~ 0FBC:196D
cs=0xfbc;eip=0x00196e; 	T(MOV(sp, bp));	// 30385 mov     sp, bp ;~ 0FBC:196E
cs=0xfbc;eip=0x001970; 	X(POP(bp));	// 30386 pop     bp ;~ 0FBC:1970
cs=0xfbc;eip=0x001971; 	R(RETF(0));	// 30387 retf ;~ 0FBC:1971
loc_1fb12:
	// 6447 
cs=0xfbc;eip=0x001972; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 30391 mov     bx, [bp+arg_0] ;~ 0FBC:1972
cs=0xfbc;eip=0x001975; 	T(SHL(bx, 1));	// 30392 shl     bx, 1 ;~ 0FBC:1975
cs=0xfbc;eip=0x001977; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 30393 mov     ax, trackcenterpos2[bx] ;~ 0FBC:1977
cs=0xfbc;eip=0x00197b; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 30394 mov     [bp+var_6], ax ;~ 0FBC:197B
cs=0xfbc;eip=0x00197e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 30395 mov     bx, [bp+arg_2] ;~ 0FBC:197E
cs=0xfbc;eip=0x001981; 	T(SHL(bx, 1));	// 30396 shl     bx, 1 ;~ 0FBC:1981
cs=0xfbc;eip=0x001983; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 30397 mov     ax, trackcenterpos[bx] ;~ 0FBC:1983
cs=0xfbc;eip=0x001987; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 30398 mov     [bp+var_C], ax ;~ 0FBC:1987
cs=0xfbc;eip=0x00198a; 	T(CMP(*(raddr(ss,bp+var_2)), 0x0FD));	// 30399 cmp     [bp+var_2], 0FDh ; '˝' ;~ 0FBC:198A
cs=0xfbc;eip=0x00198e; 	R(JNC(loc_1fb33));	// 30400 jnb     short loc_1FB33 ;~ 0FBC:198E
cs=0xfbc;eip=0x001990; 	R(JMP(loc_1fc34));	// 30401 jmp     loc_1FC34 ;~ 0FBC:1990
loc_1fb33:
	// 6448 
cs=0xfbc;eip=0x001993; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 30405 mov     al, [bp+var_2] ;~ 0FBC:1993
cs=0xfbc;eip=0x001996; 	T(SUB(ah, ah));	// 30406 sub     ah, ah ;~ 0FBC:1996
cs=0xfbc;eip=0x001998; 	T(CMP(ax, 0x0FD));	// 30407 cmp     ax, 0FDh ; '˝' ;~ 0FBC:1998
cs=0xfbc;eip=0x00199b; 	R(JZ(loc_1fb4e));	// 30408 jz      short loc_1FB4E ;~ 0FBC:199B
cs=0xfbc;eip=0x00199d; 	T(CMP(ax, 0x0FE));	// 30409 cmp     ax, 0FEh ; '˛' ;~ 0FBC:199D
cs=0xfbc;eip=0x0019a0; 	R(JZ(loc_1fbb4));	// 30410 jz      short loc_1FBB4 ;~ 0FBC:19A0
cs=0xfbc;eip=0x0019a2; 	T(CMP(ax, 0x0FF));	// 30411 cmp     ax, 0FFh ;~ 0FBC:19A2
cs=0xfbc;eip=0x0019a5; 	R(JNZ(loc_1fb4a));	// 30412 jnz     short loc_1FB4A ;~ 0FBC:19A5
cs=0xfbc;eip=0x0019a7; 	R(JMP(loc_1fbf2));	// 30413 jmp     loc_1FBF2 ;~ 0FBC:19A7
loc_1fb4a:
	// 6449 
cs=0xfbc;eip=0x0019aa; 	R(JMP(loc_1fc86));	// 30417 jmp     loc_1FC86 ;~ 0FBC:19AA
loc_1fb4e:
	// 6450 
cs=0xfbc;eip=0x0019ae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 30422 mov     ax, [bp+arg_2] ;~ 0FBC:19AE
cs=0xfbc;eip=0x0019b1; 	T(SHL(ax, 1));	// 30423 shl     ax, 1 ;~ 0FBC:19B1
cs=0xfbc;eip=0x0019b3; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 30424 mov     [bp+var_14], ax ;~ 0FBC:19B3
cs=0xfbc;eip=0x0019b6; 	T(MOV(bx, ax));	// 30425 mov     bx, ax ;~ 0FBC:19B6
cs=0xfbc;eip=0x0019b8; 	T(MOV(bx, *(dw*)(((db*)&word_45d3e)+bx)));	// 30426 mov     bx, word_45D3E[bx] ; is really trackrows[bx -1] ;~ 0FBC:19B8
cs=0xfbc;eip=0x0019bc; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 30427 add     bx, [bp+arg_0] ;~ 0FBC:19BC
cs=0xfbc;eip=0x0019bf; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 30428 add     bx, word ptr td14_elem_map_main ;~ 0FBC:19BF
cs=0xfbc;eip=0x0019c3; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 30429 mov     es, word ptr td14_elem_map_main+2 ;~ 0FBC:19C3
cs=0xfbc;eip=0x0019c7; 	T(MOV(al, *(raddr(es,bx-1))));	// 30430 mov     al, es:[bx-1] ;~ 0FBC:19C7
cs=0xfbc;eip=0x0019cb; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 30431 mov     [bp+var_2], al ;~ 0FBC:19CB
cs=0xfbc;eip=0x0019ce; 	T(SUB(ah, ah));	// 30432 sub     ah, ah ;~ 0FBC:19CE
cs=0xfbc;eip=0x0019d0; 	T(MOV(bx, ax));	// 30433 mov     bx, ax ;~ 0FBC:19D0
cs=0xfbc;eip=0x0019d2; 	T(SHL(bx, 1));	// 30434 shl     bx, 1 ;~ 0FBC:19D2
cs=0xfbc;eip=0x0019d4; 	T(ADD(bx, ax));	// 30435 add     bx, ax ;~ 0FBC:19D4
cs=0xfbc;eip=0x0019d6; 	T(SHL(bx, 1));	// 30436 shl     bx, 1 ;~ 0FBC:19D6
cs=0xfbc;eip=0x0019d8; 	T(ADD(bx, ax));	// 30437 add     bx, ax ;~ 0FBC:19D8
cs=0xfbc;eip=0x0019da; 	T(SHL(bx, 1));	// 30438 shl     bx, 1 ;~ 0FBC:19DA
cs=0xfbc;eip=0x0019dc; 	T(TEST(*((&byte_3d813)+bx), 1));	// 30439 test    byte_3D813[bx], 1 ;~ 0FBC:19DC
cs=0xfbc;eip=0x0019e1; 	R(JZ(loc_1fb8d));	// 30440 jz      short loc_1FB8D ;~ 0FBC:19E1
cs=0xfbc;eip=0x0019e3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30441 mov     bx, [bp+var_14] ;~ 0FBC:19E3
cs=0xfbc;eip=0x0019e6; 	T(MOV(ax, *(dw*)(((db*)&word_438ee)+bx)));	// 30442 mov     ax, word_438EE[bx] ;~ 0FBC:19E6
loc_1fb8a:
	// 6451 
cs=0xfbc;eip=0x0019ea; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 30445 mov     [bp+var_C], ax ;~ 0FBC:19EA
loc_1fb8d:
	// 6452 
cs=0xfbc;eip=0x0019ed; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 30449 mov     al, [bp+var_2] ;~ 0FBC:19ED
cs=0xfbc;eip=0x0019f0; 	T(SUB(ah, ah));	// 30450 sub     ah, ah ;~ 0FBC:19F0
cs=0xfbc;eip=0x0019f2; 	T(MOV(bx, ax));	// 30451 mov     bx, ax ;~ 0FBC:19F2
cs=0xfbc;eip=0x0019f4; 	T(SHL(bx, 1));	// 30452 shl     bx, 1 ;~ 0FBC:19F4
cs=0xfbc;eip=0x0019f6; 	T(ADD(bx, ax));	// 30453 add     bx, ax ;~ 0FBC:19F6
cs=0xfbc;eip=0x0019f8; 	T(SHL(bx, 1));	// 30454 shl     bx, 1 ;~ 0FBC:19F8
cs=0xfbc;eip=0x0019fa; 	T(ADD(bx, ax));	// 30455 add     bx, ax ;~ 0FBC:19FA
cs=0xfbc;eip=0x0019fc; 	T(SHL(bx, 1));	// 30456 shl     bx, 1 ;~ 0FBC:19FC
cs=0xfbc;eip=0x0019fe; 	T(TEST(*((&byte_3d813)+bx), 2));	// 30457 test    byte_3D813[bx], 2 ;~ 0FBC:19FE
cs=0xfbc;eip=0x001a03; 	R(JNZ(loc_1fba8));	// 30458 jnz     short loc_1FBA8 ;~ 0FBC:1A03
cs=0xfbc;eip=0x001a05; 	R(JMP(loc_1fc86));	// 30459 jmp     loc_1FC86 ;~ 0FBC:1A05
loc_1fba8:
	// 6453 
cs=0xfbc;eip=0x001a08; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 30463 mov     bx, [bp+arg_0] ;~ 0FBC:1A08
cs=0xfbc;eip=0x001a0b; 	T(SHL(bx, 1));	// 30464 shl     bx, 1 ;~ 0FBC:1A0B
cs=0xfbc;eip=0x001a0d; 	T(MOV(ax, *(dw*)(((db*)trackpos2)+bx)));	// 30465 mov     ax, trackpos2[bx] ;~ 0FBC:1A0D
cs=0xfbc;eip=0x001a11; 	R(JMP(loc_1fc83));	// 30466 jmp     loc_1FC83 ;~ 0FBC:1A11
loc_1fbb4:
	// 6454 
cs=0xfbc;eip=0x001a14; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 30470 mov     ax, [bp+arg_2] ;~ 0FBC:1A14
cs=0xfbc;eip=0x001a17; 	T(SHL(ax, 1));	// 30471 shl     ax, 1 ;~ 0FBC:1A17
cs=0xfbc;eip=0x001a19; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 30472 mov     [bp+var_14], ax ;~ 0FBC:1A19
cs=0xfbc;eip=0x001a1c; 	T(MOV(bx, ax));	// 30473 mov     bx, ax ;~ 0FBC:1A1C
cs=0xfbc;eip=0x001a1e; 	T(MOV(bx, *(dw*)(((db*)&word_45d3e)+bx)));	// 30474 mov     bx, word_45D3E[bx] ; is really trackrows[bx -1] ;~ 0FBC:1A1E
cs=0xfbc;eip=0x001a22; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 30475 add     bx, [bp+arg_0] ;~ 0FBC:1A22
cs=0xfbc;eip=0x001a25; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 30476 add     bx, word ptr td14_elem_map_main ;~ 0FBC:1A25
cs=0xfbc;eip=0x001a29; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 30477 mov     es, word ptr td14_elem_map_main+2 ;~ 0FBC:1A29
cs=0xfbc;eip=0x001a2d; 	T(MOV(al, *(raddr(es,bx))));	// 30478 mov     al, es:[bx] ;~ 0FBC:1A2D
cs=0xfbc;eip=0x001a30; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 30479 mov     [bp+var_2], al ;~ 0FBC:1A30
cs=0xfbc;eip=0x001a33; 	T(SUB(ah, ah));	// 30480 sub     ah, ah ;~ 0FBC:1A33
cs=0xfbc;eip=0x001a35; 	T(MOV(bx, ax));	// 30481 mov     bx, ax ;~ 0FBC:1A35
cs=0xfbc;eip=0x001a37; 	T(SHL(bx, 1));	// 30482 shl     bx, 1 ;~ 0FBC:1A37
cs=0xfbc;eip=0x001a39; 	T(ADD(bx, ax));	// 30483 add     bx, ax ;~ 0FBC:1A39
cs=0xfbc;eip=0x001a3b; 	T(SHL(bx, 1));	// 30484 shl     bx, 1 ;~ 0FBC:1A3B
cs=0xfbc;eip=0x001a3d; 	T(ADD(bx, ax));	// 30485 add     bx, ax ;~ 0FBC:1A3D
cs=0xfbc;eip=0x001a3f; 	T(SHL(bx, 1));	// 30486 shl     bx, 1 ;~ 0FBC:1A3F
cs=0xfbc;eip=0x001a41; 	T(TEST(*((&byte_3d813)+bx), 1));	// 30487 test    byte_3D813[bx], 1 ;~ 0FBC:1A41
cs=0xfbc;eip=0x001a46; 	R(JZ(loc_1fc62));	// 30488 jz      short loc_1FC62 ;~ 0FBC:1A46
cs=0xfbc;eip=0x001a48; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30489 mov     bx, [bp+var_14] ;~ 0FBC:1A48
cs=0xfbc;eip=0x001a4b; 	T(MOV(ax, *(dw*)(((db*)&word_438ee)+bx)));	// 30490 mov     ax, word_438EE[bx] ;~ 0FBC:1A4B
cs=0xfbc;eip=0x001a4f; 	R(JMP(loc_1fc5f));	// 30491 jmp     short loc_1FC5F ;~ 0FBC:1A4F
loc_1fbf2:
	// 6455 
cs=0xfbc;eip=0x001a52; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 30496 mov     ax, [bp+arg_2] ;~ 0FBC:1A52
cs=0xfbc;eip=0x001a55; 	T(SHL(ax, 1));	// 30497 shl     ax, 1 ;~ 0FBC:1A55
cs=0xfbc;eip=0x001a57; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 30498 mov     [bp+var_14], ax ;~ 0FBC:1A57
cs=0xfbc;eip=0x001a5a; 	T(MOV(bx, ax));	// 30499 mov     bx, ax ;~ 0FBC:1A5A
cs=0xfbc;eip=0x001a5c; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 30500 mov     bx, trackrows[bx] ;~ 0FBC:1A5C
cs=0xfbc;eip=0x001a60; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 30501 add     bx, [bp+arg_0] ;~ 0FBC:1A60
cs=0xfbc;eip=0x001a63; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 30502 add     bx, word ptr td14_elem_map_main ;~ 0FBC:1A63
cs=0xfbc;eip=0x001a67; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 30503 mov     es, word ptr td14_elem_map_main+2 ;~ 0FBC:1A67
cs=0xfbc;eip=0x001a6b; 	T(MOV(al, *(raddr(es,bx-1))));	// 30504 mov     al, es:[bx-1] ;~ 0FBC:1A6B
cs=0xfbc;eip=0x001a6f; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 30505 mov     [bp+var_2], al ;~ 0FBC:1A6F
cs=0xfbc;eip=0x001a72; 	T(SUB(ah, ah));	// 30506 sub     ah, ah ;~ 0FBC:1A72
cs=0xfbc;eip=0x001a74; 	T(MOV(bx, ax));	// 30507 mov     bx, ax ;~ 0FBC:1A74
cs=0xfbc;eip=0x001a76; 	T(SHL(bx, 1));	// 30508 shl     bx, 1 ;~ 0FBC:1A76
cs=0xfbc;eip=0x001a78; 	T(ADD(bx, ax));	// 30509 add     bx, ax ;~ 0FBC:1A78
cs=0xfbc;eip=0x001a7a; 	T(SHL(bx, 1));	// 30510 shl     bx, 1 ;~ 0FBC:1A7A
cs=0xfbc;eip=0x001a7c; 	T(ADD(bx, ax));	// 30511 add     bx, ax ;~ 0FBC:1A7C
cs=0xfbc;eip=0x001a7e; 	T(SHL(bx, 1));	// 30512 shl     bx, 1 ;~ 0FBC:1A7E
cs=0xfbc;eip=0x001a80; 	T(TEST(*((&byte_3d813)+bx), 1));	// 30513 test    byte_3D813[bx], 1 ;~ 0FBC:1A80
cs=0xfbc;eip=0x001a85; 	R(JNZ(loc_1fc2a));	// 30514 jnz     short loc_1FC2A ;~ 0FBC:1A85
cs=0xfbc;eip=0x001a87; 	R(JMP(loc_1fb8d));	// 30515 jmp     loc_1FB8D ;~ 0FBC:1A87
loc_1fc2a:
	// 6456 
cs=0xfbc;eip=0x001a8a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30519 mov     bx, [bp+var_14] ;~ 0FBC:1A8A
cs=0xfbc;eip=0x001a8d; 	T(MOV(ax, *(dw*)(((db*)&trackpos)+bx)));	// 30520 mov     ax, trackpos[bx] ;~ 0FBC:1A8D
cs=0xfbc;eip=0x001a91; 	R(JMP(loc_1fb8a));	// 30521 jmp     loc_1FB8A ;~ 0FBC:1A91
loc_1fc34:
	// 6457 
cs=0xfbc;eip=0x001a94; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 30525 mov     al, [bp+var_2] ;~ 0FBC:1A94
cs=0xfbc;eip=0x001a97; 	T(SUB(ah, ah));	// 30526 sub     ah, ah ;~ 0FBC:1A97
cs=0xfbc;eip=0x001a99; 	T(MOV(bx, ax));	// 30527 mov     bx, ax ;~ 0FBC:1A99
cs=0xfbc;eip=0x001a9b; 	T(SHL(bx, 1));	// 30528 shl     bx, 1 ;~ 0FBC:1A9B
cs=0xfbc;eip=0x001a9d; 	T(ADD(bx, ax));	// 30529 add     bx, ax ;~ 0FBC:1A9D
cs=0xfbc;eip=0x001a9f; 	T(SHL(bx, 1));	// 30530 shl     bx, 1 ;~ 0FBC:1A9F
cs=0xfbc;eip=0x001aa1; 	T(ADD(bx, ax));	// 30531 add     bx, ax ;~ 0FBC:1AA1
cs=0xfbc;eip=0x001aa3; 	T(SHL(bx, 1));	// 30532 shl     bx, 1 ;~ 0FBC:1AA3
cs=0xfbc;eip=0x001aa5; 	T(MOV(al, *((&byte_3d813)+bx)));	// 30533 mov     al, byte_3D813[bx] ;~ 0FBC:1AA5
cs=0xfbc;eip=0x001aa9; 	X(MOV(*(db*)(raddr(ss,bp+var_14)), al));	// 30534 mov     byte ptr [bp+var_14], al ;~ 0FBC:1AA9
cs=0xfbc;eip=0x001aac; 	T(CMP(al, ah));	// 30535 cmp     al, ah ;~ 0FBC:1AAC
cs=0xfbc;eip=0x001aae; 	R(JZ(loc_1fc86));	// 30536 jz      short loc_1FC86 ;~ 0FBC:1AAE
cs=0xfbc;eip=0x001ab0; 	T(TEST(*(db*)(raddr(ss,bp+var_14)), 1));	// 30537 test    byte ptr [bp+var_14], 1 ;~ 0FBC:1AB0
cs=0xfbc;eip=0x001ab4; 	R(JZ(loc_1fc62));	// 30538 jz      short loc_1FC62 ;~ 0FBC:1AB4
cs=0xfbc;eip=0x001ab6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 30539 mov     bx, [bp+arg_2] ;~ 0FBC:1AB6
cs=0xfbc;eip=0x001ab9; 	T(SHL(bx, 1));	// 30540 shl     bx, 1 ;~ 0FBC:1AB9
cs=0xfbc;eip=0x001abb; 	T(MOV(ax, *(dw*)(((db*)&trackpos)+bx)));	// 30541 mov     ax, trackpos[bx] ;~ 0FBC:1ABB
loc_1fc5f:
	// 6458 
cs=0xfbc;eip=0x001abf; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 30544 mov     [bp+var_C], ax ;~ 0FBC:1ABF
loc_1fc62:
	// 6459 
cs=0xfbc;eip=0x001ac2; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 30548 mov     al, [bp+var_2] ;~ 0FBC:1AC2
cs=0xfbc;eip=0x001ac5; 	T(SUB(ah, ah));	// 30549 sub     ah, ah ;~ 0FBC:1AC5
cs=0xfbc;eip=0x001ac7; 	T(MOV(bx, ax));	// 30550 mov     bx, ax ;~ 0FBC:1AC7
cs=0xfbc;eip=0x001ac9; 	T(SHL(bx, 1));	// 30551 shl     bx, 1 ;~ 0FBC:1AC9
cs=0xfbc;eip=0x001acb; 	T(ADD(bx, ax));	// 30552 add     bx, ax ;~ 0FBC:1ACB
cs=0xfbc;eip=0x001acd; 	T(SHL(bx, 1));	// 30553 shl     bx, 1 ;~ 0FBC:1ACD
cs=0xfbc;eip=0x001acf; 	T(ADD(bx, ax));	// 30554 add     bx, ax ;~ 0FBC:1ACF
cs=0xfbc;eip=0x001ad1; 	T(SHL(bx, 1));	// 30555 shl     bx, 1 ;~ 0FBC:1AD1
cs=0xfbc;eip=0x001ad3; 	T(TEST(*((&byte_3d813)+bx), 2));	// 30556 test    byte_3D813[bx], 2 ;~ 0FBC:1AD3
cs=0xfbc;eip=0x001ad8; 	R(JZ(loc_1fc86));	// 30557 jz      short loc_1FC86 ;~ 0FBC:1AD8
cs=0xfbc;eip=0x001ada; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 30558 mov     bx, [bp+arg_0] ;~ 0FBC:1ADA
cs=0xfbc;eip=0x001add; 	T(SHL(bx, 1));	// 30559 shl     bx, 1 ;~ 0FBC:1ADD
cs=0xfbc;eip=0x001adf; 	T(MOV(ax, *(dw*)((((db*)trackpos2)+2)+bx)));	// 30560 mov     ax, (trackpos2+2)[bx] ;~ 0FBC:1ADF
loc_1fc83:
	// 6460 
cs=0xfbc;eip=0x001ae3; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 30563 mov     [bp+var_6], ax ;~ 0FBC:1AE3
loc_1fc86:
	// 6461 
cs=0xfbc;eip=0x001ae6; 	T(SUB(di, di));	// 30567 sub     di, di ;~ 0FBC:1AE6
cs=0xfbc;eip=0x001ae8; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 30568 mov     al, [bp+var_2] ;~ 0FBC:1AE8
cs=0xfbc;eip=0x001aeb; 	T(SUB(ah, ah));	// 30569 sub     ah, ah ;~ 0FBC:1AEB
cs=0xfbc;eip=0x001aed; 	T(MOV(bx, ax));	// 30570 mov     bx, ax ;~ 0FBC:1AED
cs=0xfbc;eip=0x001aef; 	T(SHL(bx, 1));	// 30571 shl     bx, 1 ;~ 0FBC:1AEF
cs=0xfbc;eip=0x001af1; 	T(ADD(bx, ax));	// 30572 add     bx, ax ;~ 0FBC:1AF1
cs=0xfbc;eip=0x001af3; 	T(SHL(bx, 1));	// 30573 shl     bx, 1 ;~ 0FBC:1AF3
cs=0xfbc;eip=0x001af5; 	T(ADD(bx, ax));	// 30574 add     bx, ax ;~ 0FBC:1AF5
cs=0xfbc;eip=0x001af7; 	T(SHL(bx, 1));	// 30575 shl     bx, 1 ;~ 0FBC:1AF7
cs=0xfbc;eip=0x001af9; 	T(MOV(al, *((&byte_3d814)+bx)));	// 30576 mov     al, byte_3D814[bx] ;~ 0FBC:1AF9
cs=0xfbc;eip=0x001afd; 	T(CBW);	// 30577 cbw ;~ 0FBC:1AFD
cs=0xfbc;eip=0x001afe; 	T(CMP(ax, 0x20));	// 30578 cmp     ax, 20h ; ' ' ;~ 0FBC:1AFE
cs=0xfbc;eip=0x001b01; 	R(JZ(loc_1fcc2));	// 30579 jz      short loc_1FCC2 ;~ 0FBC:1B01
cs=0xfbc;eip=0x001b03; 	R(JG(loc_1fcf4));	// 30580 jg      short loc_1FCF4 ;~ 0FBC:1B03
cs=0xfbc;eip=0x001b05; 	T(CMP(ax, 0x0B));	// 30581 cmp     ax, 0Bh ;~ 0FBC:1B05
cs=0xfbc;eip=0x001b08; 	R(JZ(loc_1fce0));	// 30582 jz      short loc_1FCE0 ;~ 0FBC:1B08
cs=0xfbc;eip=0x001b0a; 	T(CMP(ax, 0x12));	// 30583 cmp     ax, 12h ;~ 0FBC:1B0A
cs=0xfbc;eip=0x001b0d; 	R(JZ(loc_1fcea));	// 30584 jz      short loc_1FCEA ;~ 0FBC:1B0D
cs=0xfbc;eip=0x001b0f; 	R(JMP(loc_1fcba));	// 30585 jmp     short loc_1FCBA ;~ 0FBC:1B0F
loc_1fcb2:
	// 6462 
cs=0xfbc;eip=0x001b12; 	T(MOV(di, 2));	// 30590 mov     di, 2 ;~ 0FBC:1B12
cs=0xfbc;eip=0x001b15; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), offset(dseg,unk_3e676)));	// 30591 mov     [bp+var_4], offset unk_3E676 ;~ 0FBC:1B15
loc_1fcba:
	// 6463 
cs=0xfbc;eip=0x001b1a; 	T(OR(di, di));	// 30595 or      di, di ;~ 0FBC:1B1A
cs=0xfbc;eip=0x001b1c; 	R(JNZ(loc_1fd14));	// 30596 jnz     short loc_1FD14 ;~ 0FBC:1B1C
cs=0xfbc;eip=0x001b1e; 	R(JMP(loc_1fb0a));	// 30597 jmp     loc_1FB0A ;~ 0FBC:1B1E
loc_1fcc2:
	// 6464 
cs=0xfbc;eip=0x001b22; 	T(MOV(di, 2));	// 30602 mov     di, 2 ;~ 0FBC:1B22
cs=0xfbc;eip=0x001b25; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), offset(dseg,unk_3e682)));	// 30603 mov     [bp+var_4], offset unk_3E682 ;~ 0FBC:1B25
cs=0xfbc;eip=0x001b2a; 	R(JMP(loc_1fcba));	// 30604 jmp     short loc_1FCBA ;~ 0FBC:1B2A
loc_1fccc:
	// 6465 
cs=0xfbc;eip=0x001b2c; 	T(MOV(di, 2));	// 30608 mov     di, 2 ;~ 0FBC:1B2C
cs=0xfbc;eip=0x001b2f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), offset(dseg,unk_3e68e)));	// 30609 mov     [bp+var_4], offset unk_3E68E ;~ 0FBC:1B2F
cs=0xfbc;eip=0x001b34; 	R(JMP(loc_1fcba));	// 30610 jmp     short loc_1FCBA ;~ 0FBC:1B34
loc_1fcd6:
	// 6466 
cs=0xfbc;eip=0x001b36; 	T(MOV(di, 4));	// 30614 mov     di, 4 ;~ 0FBC:1B36
cs=0xfbc;eip=0x001b39; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), offset(dseg,unk_3e69a)));	// 30615 mov     [bp+var_4], offset unk_3E69A ;~ 0FBC:1B39
cs=0xfbc;eip=0x001b3e; 	R(JMP(loc_1fcba));	// 30616 jmp     short loc_1FCBA ;~ 0FBC:1B3E
loc_1fce0:
	// 6467 
cs=0xfbc;eip=0x001b40; 	T(MOV(di, 1));	// 30621 mov     di, 1 ;~ 0FBC:1B40
cs=0xfbc;eip=0x001b43; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), offset(dseg,unk_3e640)));	// 30622 mov     [bp+var_4], offset unk_3E640 ;~ 0FBC:1B43
cs=0xfbc;eip=0x001b48; 	R(JMP(loc_1fcba));	// 30623 jmp     short loc_1FCBA ;~ 0FBC:1B48
loc_1fcea:
	// 6468 
cs=0xfbc;eip=0x001b4a; 	T(MOV(di, 8));	// 30627 mov     di, 8 ;~ 0FBC:1B4A
cs=0xfbc;eip=0x001b4d; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), offset(dseg,unk_3e646)));	// 30628 mov     [bp+var_4], offset unk_3E646 ;~ 0FBC:1B4D
cs=0xfbc;eip=0x001b52; 	R(JMP(loc_1fcba));	// 30629 jmp     short loc_1FCBA ;~ 0FBC:1B52
loc_1fcf4:
	// 6469 
cs=0xfbc;eip=0x001b54; 	T(CMP(ax, 0x22));	// 30633 cmp     ax, 22h ; '"' ;~ 0FBC:1B54
cs=0xfbc;eip=0x001b57; 	R(JZ(loc_1fcd6));	// 30634 jz      short loc_1FCD6 ;~ 0FBC:1B57
cs=0xfbc;eip=0x001b59; 	R(JG(loc_1fd02));	// 30635 jg      short loc_1FD02 ;~ 0FBC:1B59
cs=0xfbc;eip=0x001b5b; 	T(CMP(ax, 0x21));	// 30636 cmp     ax, 21h ; '!' ;~ 0FBC:1B5B
cs=0xfbc;eip=0x001b5e; 	R(JZ(loc_1fccc));	// 30637 jz      short loc_1FCCC ;~ 0FBC:1B5E
cs=0xfbc;eip=0x001b60; 	R(JMP(loc_1fcba));	// 30638 jmp     short loc_1FCBA ;~ 0FBC:1B60
loc_1fd02:
	// 6470 
cs=0xfbc;eip=0x001b62; 	T(CMP(ax, 0x23));	// 30642 cmp     ax, 23h ; '#' ;~ 0FBC:1B62
cs=0xfbc;eip=0x001b65; 	R(JZ(loc_1fcb2));	// 30643 jz      short loc_1FCB2 ;~ 0FBC:1B65
cs=0xfbc;eip=0x001b67; 	T(CMP(ax, 0x47));	// 30644 cmp     ax, 47h ; 'G' ;~ 0FBC:1B67
cs=0xfbc;eip=0x001b6a; 	R(JL(loc_1fcba));	// 30645 jl      short loc_1FCBA ;~ 0FBC:1B6A
cs=0xfbc;eip=0x001b6c; 	T(CMP(ax, 0x4A));	// 30646 cmp     ax, 4Ah ; 'J' ;~ 0FBC:1B6C
cs=0xfbc;eip=0x001b6f; 	R(JLE(loc_1fce0));	// 30647 jle     short loc_1FCE0 ;~ 0FBC:1B6F
cs=0xfbc;eip=0x001b71; 	R(JMP(loc_1fcba));	// 30648 jmp     short loc_1FCBA ;~ 0FBC:1B71
loc_1fd14:
	// 6471 
cs=0xfbc;eip=0x001b74; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 30653 mov     bx, [bp+arg_2] ;~ 0FBC:1B74
cs=0xfbc;eip=0x001b77; 	T(SHL(bx, 1));	// 30654 shl     bx, 1 ;~ 0FBC:1B77
cs=0xfbc;eip=0x001b79; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 30655 mov     bx, terrainrows[bx] ;~ 0FBC:1B79
cs=0xfbc;eip=0x001b7d; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 30656 add     bx, [bp+arg_0] ;~ 0FBC:1B7D
cs=0xfbc;eip=0x001b80; 	T(ADD(bx, *(dw*)(((db*)&td15_terr_map_main))));	// 30657 add     bx, word ptr td15_terr_map_main ;~ 0FBC:1B80
cs=0xfbc;eip=0x001b84; 	T(MOV(es, *(dw*)(((db*)&td15_terr_map_main)+2)));	// 30658 mov     es, word ptr td15_terr_map_main+2 ;~ 0FBC:1B84
cs=0xfbc;eip=0x001b88; 	T(MOV(al, *(raddr(es,bx))));	// 30659 mov     al, es:[bx] ;~ 0FBC:1B88
cs=0xfbc;eip=0x001b8b; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 30660 mov     [bp+var_10], al ;~ 0FBC:1B8B
cs=0xfbc;eip=0x001b8e; 	T(CMP(al, 6));	// 30661 cmp     al, 6 ;~ 0FBC:1B8E
cs=0xfbc;eip=0x001b90; 	R(JNZ(loc_1fd3a));	// 30662 jnz     short loc_1FD3A ;~ 0FBC:1B90
cs=0xfbc;eip=0x001b92; 	T(MOV(ax, *(dw*)(((db*)hillheightconsts)+2)));	// 30663 mov     ax, hillHeightConsts+2 ;~ 0FBC:1B92
cs=0xfbc;eip=0x001b95; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 30664 mov     [bp+var_A], ax ;~ 0FBC:1B95
cs=0xfbc;eip=0x001b98; 	R(JMP(loc_1fd3f));	// 30665 jmp     short loc_1FD3F ;~ 0FBC:1B98
loc_1fd3a:
	// 6472 
cs=0xfbc;eip=0x001b9a; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 30669 mov     [bp+var_A], 0 ;~ 0FBC:1B9A
loc_1fd3f:
	// 6473 
cs=0xfbc;eip=0x001b9f; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 30672 mov     al, [bp+var_2] ;~ 0FBC:1B9F
cs=0xfbc;eip=0x001ba2; 	T(SUB(ah, ah));	// 30673 sub     ah, ah ;~ 0FBC:1BA2
cs=0xfbc;eip=0x001ba4; 	T(MOV(bx, ax));	// 30674 mov     bx, ax ;~ 0FBC:1BA4
cs=0xfbc;eip=0x001ba6; 	T(SHL(bx, 1));	// 30675 shl     bx, 1 ;~ 0FBC:1BA6
cs=0xfbc;eip=0x001ba8; 	T(ADD(bx, ax));	// 30676 add     bx, ax ;~ 0FBC:1BA8
cs=0xfbc;eip=0x001baa; 	T(SHL(bx, 1));	// 30677 shl     bx, 1 ;~ 0FBC:1BAA
cs=0xfbc;eip=0x001bac; 	T(ADD(bx, ax));	// 30678 add     bx, ax ;~ 0FBC:1BAC
cs=0xfbc;eip=0x001bae; 	T(SHL(bx, 1));	// 30679 shl     bx, 1 ;~ 0FBC:1BAE
cs=0xfbc;eip=0x001bb0; 	T(MOV(ax, *(dw*)(((db*)&word_3d80a)+bx)));	// 30680 mov     ax, word_3D80A[bx] ;~ 0FBC:1BB0
cs=0xfbc;eip=0x001bb4; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 30681 mov     [bp+var_8], ax ;~ 0FBC:1BB4
cs=0xfbc;eip=0x001bb7; 	T(SUB(si, si));	// 30682 sub     si, si ;~ 0FBC:1BB7
cs=0xfbc;eip=0x001bb9; 	R(JMP(loc_1fda6));	// 30683 jmp     short loc_1FDA6 ;~ 0FBC:1BB9
loc_1fd5c:
	// 6474 
cs=0xfbc;eip=0x001bbc; 	T(MOV(ax, si));	// 30688 mov     ax, si ;~ 0FBC:1BBC
cs=0xfbc;eip=0x001bbe; 	T(MOV(cx, ax));	// 30689 mov     cx, ax ;~ 0FBC:1BBE
cs=0xfbc;eip=0x001bc0; 	T(SHL(ax, 1));	// 30690 shl     ax, 1 ;~ 0FBC:1BC0
cs=0xfbc;eip=0x001bc2; 	T(ADD(ax, cx));	// 30691 add     ax, cx ;~ 0FBC:1BC2
cs=0xfbc;eip=0x001bc4; 	T(SHL(ax, 1));	// 30692 shl     ax, 1 ;~ 0FBC:1BC4
cs=0xfbc;eip=0x001bc6; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 30693 mov     [bp+var_14], ax ;~ 0FBC:1BC6
cs=0xfbc;eip=0x001bc9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30694 mov     bx, [bp+var_4] ;~ 0FBC:1BC9
cs=0xfbc;eip=0x001bcc; 	T(ADD(bx, ax));	// 30695 add     bx, ax ;~ 0FBC:1BCC
cs=0xfbc;eip=0x001bce; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 30696 mov     ax, [bx] ;~ 0FBC:1BCE
cs=0xfbc;eip=0x001bd0; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_6))));	// 30697 add     ax, [bp+var_6] ;~ 0FBC:1BD0
cs=0xfbc;eip=0x001bd3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 30698 mov     bx, [bp+arg_4] ;~ 0FBC:1BD3
cs=0xfbc;eip=0x001bd6; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30699 add     bx, [bp+var_14] ;~ 0FBC:1BD6
cs=0xfbc;eip=0x001bd9; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 30700 mov     [bx], ax ;~ 0FBC:1BD9
cs=0xfbc;eip=0x001bdb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30701 mov     bx, [bp+var_4] ;~ 0FBC:1BDB
cs=0xfbc;eip=0x001bde; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30702 add     bx, [bp+var_14] ;~ 0FBC:1BDE
cs=0xfbc;eip=0x001be1; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 30703 mov     ax, [bx+2] ;~ 0FBC:1BE1
cs=0xfbc;eip=0x001be4; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 30704 add     ax, [bp+var_A] ;~ 0FBC:1BE4
cs=0xfbc;eip=0x001be7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 30705 mov     bx, [bp+arg_4] ;~ 0FBC:1BE7
cs=0xfbc;eip=0x001bea; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30706 add     bx, [bp+var_14] ;~ 0FBC:1BEA
cs=0xfbc;eip=0x001bed; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 30707 mov     [bx+2], ax ;~ 0FBC:1BED
cs=0xfbc;eip=0x001bf0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30708 mov     bx, [bp+var_4] ;~ 0FBC:1BF0
cs=0xfbc;eip=0x001bf3; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30709 add     bx, [bp+var_14] ;~ 0FBC:1BF3
cs=0xfbc;eip=0x001bf6; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 30710 mov     ax, [bx+4] ;~ 0FBC:1BF6
loc_1fd99:
	// 6475 
cs=0xfbc;eip=0x001bf9; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_c))));	// 30714 add     ax, [bp+var_C] ;~ 0FBC:1BF9
cs=0xfbc;eip=0x001bfc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 30715 mov     bx, [bp+arg_4] ;~ 0FBC:1BFC
cs=0xfbc;eip=0x001bff; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30716 add     bx, [bp+var_14] ;~ 0FBC:1BFF
cs=0xfbc;eip=0x001c02; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 30717 mov     [bx+4], ax ;~ 0FBC:1C02
loc_1fda5:
	// 6476 
cs=0xfbc;eip=0x001c05; 	T(INC(si));	// 30720 inc     si ;~ 0FBC:1C05
loc_1fda6:
	// 6477 
cs=0xfbc;eip=0x001c06; 	T(CMP(si, di));	// 30723 cmp     si, di ;~ 0FBC:1C06
cs=0xfbc;eip=0x001c08; 	R(JL(loc_1fdad));	// 30724 jl      short loc_1FDAD ;~ 0FBC:1C08
cs=0xfbc;eip=0x001c0a; 	R(JMP(loc_1fe8c));	// 30725 jmp     loc_1FE8C ;~ 0FBC:1C0A
loc_1fdad:
	// 6478 
cs=0xfbc;eip=0x001c0d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 30729 mov     ax, [bp+var_8] ;~ 0FBC:1C0D
cs=0xfbc;eip=0x001c10; 	T(OR(ax, ax));	// 30730 or      ax, ax ;~ 0FBC:1C10
cs=0xfbc;eip=0x001c12; 	R(JZ(loc_1fd5c));	// 30731 jz      short loc_1FD5C ;~ 0FBC:1C12
cs=0xfbc;eip=0x001c14; 	T(CMP(ax, 0x100));	// 30732 cmp     ax, 100h ;~ 0FBC:1C14
cs=0xfbc;eip=0x001c17; 	R(JNZ(loc_1fdbc));	// 30733 jnz     short loc_1FDBC ;~ 0FBC:1C17
cs=0xfbc;eip=0x001c19; 	R(JMP(loc_1fe4a));	// 30734 jmp     loc_1FE4A ;~ 0FBC:1C19
loc_1fdbc:
	// 6479 
cs=0xfbc;eip=0x001c1c; 	T(CMP(ax, 0x200));	// 30738 cmp     ax, 200h ;~ 0FBC:1C1C
cs=0xfbc;eip=0x001c1f; 	R(JZ(loc_1fe08));	// 30739 jz      short loc_1FE08 ;~ 0FBC:1C1F
cs=0xfbc;eip=0x001c21; 	T(CMP(ax, 0x300));	// 30740 cmp     ax, 300h ;~ 0FBC:1C21
cs=0xfbc;eip=0x001c24; 	R(JNZ(loc_1fda5));	// 30741 jnz     short loc_1FDA5 ;~ 0FBC:1C24
cs=0xfbc;eip=0x001c26; 	T(MOV(ax, si));	// 30742 mov     ax, si ;~ 0FBC:1C26
cs=0xfbc;eip=0x001c28; 	T(MOV(cx, ax));	// 30743 mov     cx, ax ;~ 0FBC:1C28
cs=0xfbc;eip=0x001c2a; 	T(SHL(ax, 1));	// 30744 shl     ax, 1 ;~ 0FBC:1C2A
cs=0xfbc;eip=0x001c2c; 	T(ADD(ax, cx));	// 30745 add     ax, cx ;~ 0FBC:1C2C
cs=0xfbc;eip=0x001c2e; 	T(SHL(ax, 1));	// 30746 shl     ax, 1 ;~ 0FBC:1C2E
cs=0xfbc;eip=0x001c30; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 30747 mov     [bp+var_14], ax ;~ 0FBC:1C30
cs=0xfbc;eip=0x001c33; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30748 mov     bx, [bp+var_4] ;~ 0FBC:1C33
cs=0xfbc;eip=0x001c36; 	T(ADD(bx, ax));	// 30749 add     bx, ax ;~ 0FBC:1C36
cs=0xfbc;eip=0x001c38; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 30750 mov     ax, [bx+4] ;~ 0FBC:1C38
cs=0xfbc;eip=0x001c3b; 	T(NEG(ax));	// 30751 neg     ax ;~ 0FBC:1C3B
cs=0xfbc;eip=0x001c3d; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_6))));	// 30752 add     ax, [bp+var_6] ;~ 0FBC:1C3D
cs=0xfbc;eip=0x001c40; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 30753 mov     bx, [bp+arg_4] ;~ 0FBC:1C40
cs=0xfbc;eip=0x001c43; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30754 add     bx, [bp+var_14] ;~ 0FBC:1C43
cs=0xfbc;eip=0x001c46; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 30755 mov     [bx], ax ;~ 0FBC:1C46
cs=0xfbc;eip=0x001c48; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30756 mov     bx, [bp+var_4] ;~ 0FBC:1C48
cs=0xfbc;eip=0x001c4b; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30757 add     bx, [bp+var_14] ;~ 0FBC:1C4B
cs=0xfbc;eip=0x001c4e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 30758 mov     ax, [bx+2] ;~ 0FBC:1C4E
cs=0xfbc;eip=0x001c51; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 30759 add     ax, [bp+var_A] ;~ 0FBC:1C51
cs=0xfbc;eip=0x001c54; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 30760 mov     bx, [bp+arg_4] ;~ 0FBC:1C54
cs=0xfbc;eip=0x001c57; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30761 add     bx, [bp+var_14] ;~ 0FBC:1C57
cs=0xfbc;eip=0x001c5a; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 30762 mov     [bx+2], ax ;~ 0FBC:1C5A
cs=0xfbc;eip=0x001c5d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30763 mov     bx, [bp+var_4] ;~ 0FBC:1C5D
cs=0xfbc;eip=0x001c60; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30764 add     bx, [bp+var_14] ;~ 0FBC:1C60
cs=0xfbc;eip=0x001c63; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 30765 mov     ax, [bx] ;~ 0FBC:1C63
cs=0xfbc;eip=0x001c65; 	R(JMP(loc_1fd99));	// 30766 jmp     short loc_1FD99 ;~ 0FBC:1C65
loc_1fe08:
	// 6480 
cs=0xfbc;eip=0x001c68; 	T(MOV(ax, si));	// 30771 mov     ax, si ;~ 0FBC:1C68
cs=0xfbc;eip=0x001c6a; 	T(MOV(cx, ax));	// 30772 mov     cx, ax ;~ 0FBC:1C6A
cs=0xfbc;eip=0x001c6c; 	T(SHL(ax, 1));	// 30773 shl     ax, 1 ;~ 0FBC:1C6C
cs=0xfbc;eip=0x001c6e; 	T(ADD(ax, cx));	// 30774 add     ax, cx ;~ 0FBC:1C6E
cs=0xfbc;eip=0x001c70; 	T(SHL(ax, 1));	// 30775 shl     ax, 1 ;~ 0FBC:1C70
cs=0xfbc;eip=0x001c72; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 30776 mov     [bp+var_14], ax ;~ 0FBC:1C72
cs=0xfbc;eip=0x001c75; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30777 mov     bx, [bp+var_4] ;~ 0FBC:1C75
cs=0xfbc;eip=0x001c78; 	T(ADD(bx, ax));	// 30778 add     bx, ax ;~ 0FBC:1C78
cs=0xfbc;eip=0x001c7a; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 30779 mov     ax, [bx] ;~ 0FBC:1C7A
cs=0xfbc;eip=0x001c7c; 	T(NEG(ax));	// 30780 neg     ax ;~ 0FBC:1C7C
cs=0xfbc;eip=0x001c7e; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_6))));	// 30781 add     ax, [bp+var_6] ;~ 0FBC:1C7E
cs=0xfbc;eip=0x001c81; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 30782 mov     bx, [bp+arg_4] ;~ 0FBC:1C81
cs=0xfbc;eip=0x001c84; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30783 add     bx, [bp+var_14] ;~ 0FBC:1C84
cs=0xfbc;eip=0x001c87; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 30784 mov     [bx], ax ;~ 0FBC:1C87
cs=0xfbc;eip=0x001c89; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30785 mov     bx, [bp+var_4] ;~ 0FBC:1C89
cs=0xfbc;eip=0x001c8c; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30786 add     bx, [bp+var_14] ;~ 0FBC:1C8C
cs=0xfbc;eip=0x001c8f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 30787 mov     ax, [bx+2] ;~ 0FBC:1C8F
cs=0xfbc;eip=0x001c92; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 30788 add     ax, [bp+var_A] ;~ 0FBC:1C92
cs=0xfbc;eip=0x001c95; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 30789 mov     bx, [bp+arg_4] ;~ 0FBC:1C95
cs=0xfbc;eip=0x001c98; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30790 add     bx, [bp+var_14] ;~ 0FBC:1C98
cs=0xfbc;eip=0x001c9b; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 30791 mov     [bx+2], ax ;~ 0FBC:1C9B
cs=0xfbc;eip=0x001c9e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30792 mov     bx, [bp+var_4] ;~ 0FBC:1C9E
cs=0xfbc;eip=0x001ca1; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30793 add     bx, [bp+var_14] ;~ 0FBC:1CA1
cs=0xfbc;eip=0x001ca4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 30794 mov     ax, [bx+4] ;~ 0FBC:1CA4
cs=0xfbc;eip=0x001ca7; 	R(JMP(loc_1fe87));	// 30795 jmp     short loc_1FE87 ;~ 0FBC:1CA7
loc_1fe4a:
	// 6481 
cs=0xfbc;eip=0x001caa; 	T(MOV(ax, si));	// 30800 mov     ax, si ;~ 0FBC:1CAA
cs=0xfbc;eip=0x001cac; 	T(MOV(cx, ax));	// 30801 mov     cx, ax ;~ 0FBC:1CAC
cs=0xfbc;eip=0x001cae; 	T(SHL(ax, 1));	// 30802 shl     ax, 1 ;~ 0FBC:1CAE
cs=0xfbc;eip=0x001cb0; 	T(ADD(ax, cx));	// 30803 add     ax, cx ;~ 0FBC:1CB0
cs=0xfbc;eip=0x001cb2; 	T(SHL(ax, 1));	// 30804 shl     ax, 1 ;~ 0FBC:1CB2
cs=0xfbc;eip=0x001cb4; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 30805 mov     [bp+var_14], ax ;~ 0FBC:1CB4
cs=0xfbc;eip=0x001cb7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30806 mov     bx, [bp+var_4] ;~ 0FBC:1CB7
cs=0xfbc;eip=0x001cba; 	T(ADD(bx, ax));	// 30807 add     bx, ax ;~ 0FBC:1CBA
cs=0xfbc;eip=0x001cbc; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 30808 mov     ax, [bx+4] ;~ 0FBC:1CBC
cs=0xfbc;eip=0x001cbf; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_6))));	// 30809 add     ax, [bp+var_6] ;~ 0FBC:1CBF
cs=0xfbc;eip=0x001cc2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 30810 mov     bx, [bp+arg_4] ;~ 0FBC:1CC2
cs=0xfbc;eip=0x001cc5; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30811 add     bx, [bp+var_14] ;~ 0FBC:1CC5
cs=0xfbc;eip=0x001cc8; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 30812 mov     [bx], ax ;~ 0FBC:1CC8
cs=0xfbc;eip=0x001cca; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30813 mov     bx, [bp+var_4] ;~ 0FBC:1CCA
cs=0xfbc;eip=0x001ccd; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30814 add     bx, [bp+var_14] ;~ 0FBC:1CCD
cs=0xfbc;eip=0x001cd0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 30815 mov     ax, [bx+2] ;~ 0FBC:1CD0
cs=0xfbc;eip=0x001cd3; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 30816 add     ax, [bp+var_A] ;~ 0FBC:1CD3
cs=0xfbc;eip=0x001cd6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 30817 mov     bx, [bp+arg_4] ;~ 0FBC:1CD6
cs=0xfbc;eip=0x001cd9; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30818 add     bx, [bp+var_14] ;~ 0FBC:1CD9
cs=0xfbc;eip=0x001cdc; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 30819 mov     [bx+2], ax ;~ 0FBC:1CDC
cs=0xfbc;eip=0x001cdf; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 30820 mov     bx, [bp+var_4] ;~ 0FBC:1CDF
cs=0xfbc;eip=0x001ce2; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 30821 add     bx, [bp+var_14] ;~ 0FBC:1CE2
cs=0xfbc;eip=0x001ce5; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 30822 mov     ax, [bx] ;~ 0FBC:1CE5
loc_1fe87:
	// 6482 
cs=0xfbc;eip=0x001ce7; 	T(NEG(ax));	// 30825 neg     ax ;~ 0FBC:1CE7
cs=0xfbc;eip=0x001ce9; 	R(JMP(loc_1fd99));	// 30826 jmp     loc_1FD99 ;~ 0FBC:1CE9
loc_1fe8c:
	// 6483 
cs=0xfbc;eip=0x001cec; 	T(MOV(ax, di));	// 30830 mov     ax, di ;~ 0FBC:1CEC
cs=0xfbc;eip=0x001cee; 	X(POP(si));	// 30831 pop     si ;~ 0FBC:1CEE
cs=0xfbc;eip=0x001cef; 	X(POP(di));	// 30832 pop     di ;~ 0FBC:1CEF
cs=0xfbc;eip=0x001cf0; 	T(MOV(sp, bp));	// 30833 mov     sp, bp ;~ 0FBC:1CF0
cs=0xfbc;eip=0x001cf2; 	X(POP(bp));	// 30834 pop     bp ;~ 0FBC:1CF2
cs=0xfbc;eip=0x001cf3; 	R(RETF(0));	// 30835 retf ;~ 0FBC:1CF3
shape3d_load_all:
	// 30843 
cs=0xfbc;eip=0x001cf4; 	X(PUSH(bp));	// 30845 push    bp ;~ 0FBC:1CF4
ret_fbc_1cf5:
	// 6484 
cs=0xfbc;eip=0x001cf5; 	T(MOV(bp, sp));	// 30846 mov     bp, sp ;~ 0FBC:1CF5
cs=0xfbc;eip=0x001cf7; 	T(SUB(sp, 2));	// 30847 sub     sp, 2 ;~ 0FBC:1CF7
cs=0xfbc;eip=0x001cfa; 	X(PUSH(si));	// 30848 push    si ;~ 0FBC:1CFA
cs=0xfbc;eip=0x001cfb; 	T(SUB(ax, ax));	// 30849 sub     ax, ax ;~ 0FBC:1CFB
cs=0xfbc;eip=0x001cfd; 	X(MOV(word_461c6, ax));	// 30850 mov     word_461C6, ax ;~ 0FBC:1CFD
cs=0xfbc;eip=0x001d00; 	X(MOV(game1ptr, ax));	// 30851 mov     game1ptr, ax ;~ 0FBC:1D00
cs=0xfbc;eip=0x001d03; 	X(MOV(word_463d4, ax));	// 30852 mov     word_463D4, ax ;~ 0FBC:1D03
cs=0xfbc;eip=0x001d06; 	X(MOV(game2ptr, ax));	// 30853 mov     game2ptr, ax ;~ 0FBC:1D06
cs=0xfbc;eip=0x001d09; 	R(CALLF(mmgr_get_res_ofs_diff_scaled,0));	// 30854 call    mmgr_get_res_ofs_diff_scaled ;~ 0FBC:1D09
cs=0xfbc;eip=0x001d0e; 	T(OR(dx, dx));	// 30855 or      dx, dx ;~ 0FBC:1D0E
cs=0xfbc;eip=0x001d10; 	R(JG(loc_1fec2));	// 30856 jg      short loc_1FEC2 ;~ 0FBC:1D10
cs=0xfbc;eip=0x001d12; 	R(JL(loc_1feb9));	// 30857 jl      short loc_1FEB9 ;~ 0FBC:1D12
cs=0xfbc;eip=0x001d14; 	T(CMP(ax, 0x0FDE8));	// 30858 cmp     ax, 0FDE8h ;~ 0FBC:1D14
cs=0xfbc;eip=0x001d17; 	R(JNC(loc_1fec2));	// 30859 jnb     short loc_1FEC2 ;~ 0FBC:1D17
loc_1feb9:
	// 6485 
cs=0xfbc;eip=0x001d19; 	T(MOV(ax, 1));	// 30862 mov     ax, 1 ;~ 0FBC:1D19
cs=0xfbc;eip=0x001d1c; 	X(POP(si));	// 30863 pop     si ;~ 0FBC:1D1C
cs=0xfbc;eip=0x001d1d; 	T(MOV(sp, bp));	// 30864 mov     sp, bp ;~ 0FBC:1D1D
cs=0xfbc;eip=0x001d1f; 	X(POP(bp));	// 30865 pop     bp ;~ 0FBC:1D1F
cs=0xfbc;eip=0x001d20; 	R(RETF(0));	// 30866 retf ;~ 0FBC:1D20
loc_1fec2:
	// 6486 
cs=0xfbc;eip=0x001d22; 	T(MOV(ax, offset(dseg,agame1)));	// 30872 mov     ax, offset aGame1 ; "game1" ;~ 0FBC:1D22
cs=0xfbc;eip=0x001d25; 	X(PUSH(ax));	// 30873 push    ax ;~ 0FBC:1D25
cs=0xfbc;eip=0x001d26; 	R(CALLF(file_load_3dres,0));	// 30874 call    file_load_3dres ;~ 0FBC:1D26
cs=0xfbc;eip=0x001d2b; 	T(ADD(sp, 2));	// 30875 add     sp, 2 ;~ 0FBC:1D2B
cs=0xfbc;eip=0x001d2e; 	X(MOV(game1ptr, ax));	// 30876 mov     game1ptr, ax ;~ 0FBC:1D2E
cs=0xfbc;eip=0x001d31; 	X(MOV(word_461c6, dx));	// 30877 mov     word_461C6, dx ;~ 0FBC:1D31
cs=0xfbc;eip=0x001d35; 	T(MOV(ax, offset(dseg,agame2)));	// 30878 mov     ax, offset aGame2 ; "game2" ;~ 0FBC:1D35
cs=0xfbc;eip=0x001d38; 	X(PUSH(ax));	// 30879 push    ax ;~ 0FBC:1D38
cs=0xfbc;eip=0x001d39; 	R(CALLF(file_load_3dres,0));	// 30880 call    file_load_3dres ;~ 0FBC:1D39
cs=0xfbc;eip=0x001d3e; 	T(ADD(sp, 2));	// 30881 add     sp, 2 ;~ 0FBC:1D3E
cs=0xfbc;eip=0x001d41; 	X(MOV(game2ptr, ax));	// 30882 mov     game2ptr, ax ;~ 0FBC:1D41
cs=0xfbc;eip=0x001d44; 	X(MOV(word_463d4, dx));	// 30883 mov     word_463D4, dx ;~ 0FBC:1D44
cs=0xfbc;eip=0x001d48; 	T(SUB(si, si));	// 30884 sub     si, si ;~ 0FBC:1D48
loc_1feea:
	// 6487 
cs=0xfbc;eip=0x001d4a; 	T(MOV(ax, si));	// 30887 mov     ax, si ;~ 0FBC:1D4A
cs=0xfbc;eip=0x001d4c; 	T(MOV(cx, ax));	// 30888 mov     cx, ax ;~ 0FBC:1D4C
cs=0xfbc;eip=0x001d4e; 	T(SHL(ax, 1));	// 30889 shl     ax, 1 ;~ 0FBC:1D4E
cs=0xfbc;eip=0x001d50; 	T(SHL(ax, 1));	// 30890 shl     ax, 1 ;~ 0FBC:1D50
cs=0xfbc;eip=0x001d52; 	T(ADD(ax, cx));	// 30891 add     ax, cx ;~ 0FBC:1D52
cs=0xfbc;eip=0x001d54; 	T(ADD(ax, offset(dseg,abarn)));	// 30892 add     ax, offset aBarn ; "barn" ;~ 0FBC:1D54
cs=0xfbc;eip=0x001d57; 	X(PUSH(ax));	// 30893 push    ax ;~ 0FBC:1D57
cs=0xfbc;eip=0x001d58; 	X(PUSH(word_461c6));	// 30894 push    word_461C6 ;~ 0FBC:1D58
cs=0xfbc;eip=0x001d5c; 	X(PUSH(game1ptr));	// 30895 push    game1ptr ;~ 0FBC:1D5C
cs=0xfbc;eip=0x001d60; 	R(CALLF(locate_shape_nofatal,0));	// 30896 call    locate_shape_nofatal ;~ 0FBC:1D60
cs=0xfbc;eip=0x001d65; 	T(ADD(sp, 6));	// 30897 add     sp, 6 ;~ 0FBC:1D65
cs=0xfbc;eip=0x001d68; 	X(MOV(curshapeptr, ax));	// 30898 mov     curshapeptr, ax ;~ 0FBC:1D68
cs=0xfbc;eip=0x001d6b; 	X(MOV(word_449fa, dx));	// 30899 mov     word_449FA, dx ;~ 0FBC:1D6B
cs=0xfbc;eip=0x001d6f; 	T(OR(ax, dx));	// 30900 or      ax, dx ;~ 0FBC:1D6F
cs=0xfbc;eip=0x001d71; 	R(JNZ(loc_1ff38));	// 30901 jnz     short loc_1FF38 ;~ 0FBC:1D71
cs=0xfbc;eip=0x001d73; 	T(MOV(ax, si));	// 30902 mov     ax, si ;~ 0FBC:1D73
cs=0xfbc;eip=0x001d75; 	T(MOV(cx, ax));	// 30903 mov     cx, ax ;~ 0FBC:1D75
cs=0xfbc;eip=0x001d77; 	T(SHL(ax, 1));	// 30904 shl     ax, 1 ;~ 0FBC:1D77
cs=0xfbc;eip=0x001d79; 	T(SHL(ax, 1));	// 30905 shl     ax, 1 ;~ 0FBC:1D79
cs=0xfbc;eip=0x001d7b; 	T(ADD(ax, cx));	// 30906 add     ax, cx ;~ 0FBC:1D7B
cs=0xfbc;eip=0x001d7d; 	T(ADD(ax, offset(dseg,abarn)));	// 30907 add     ax, offset aBarn ; "barn" ;~ 0FBC:1D7D
cs=0xfbc;eip=0x001d80; 	X(PUSH(ax));	// 30908 push    ax ;~ 0FBC:1D80
cs=0xfbc;eip=0x001d81; 	X(PUSH(word_463d4));	// 30909 push    word_463D4 ;~ 0FBC:1D81
cs=0xfbc;eip=0x001d85; 	X(PUSH(game2ptr));	// 30910 push    game2ptr ;~ 0FBC:1D85
cs=0xfbc;eip=0x001d89; 	R(CALLF(locate_shape_fatal,0));	// 30911 call    locate_shape_fatal ;~ 0FBC:1D89
cs=0xfbc;eip=0x001d8e; 	T(ADD(sp, 6));	// 30912 add     sp, 6 ;~ 0FBC:1D8E
cs=0xfbc;eip=0x001d91; 	X(MOV(curshapeptr, ax));	// 30913 mov     curshapeptr, ax ;~ 0FBC:1D91
cs=0xfbc;eip=0x001d94; 	X(MOV(word_449fa, dx));	// 30914 mov     word_449FA, dx ;~ 0FBC:1D94
loc_1ff38:
	// 6488 
cs=0xfbc;eip=0x001d98; 	T(MOV(ax, 0x16));	// 30917 mov     ax, 16h ;~ 0FBC:1D98
cs=0xfbc;eip=0x001d9b; 	T(IMUL1_2(si));	// 30918 imul    si ;~ 0FBC:1D9B
cs=0xfbc;eip=0x001d9d; 	T(ADD(ax, offset(dseg,game3dshapes)));	// 30919 add     ax, offset game3dshapes ;~ 0FBC:1D9D
cs=0xfbc;eip=0x001da0; 	X(PUSH(ax));	// 30920 push    ax ;~ 0FBC:1DA0
cs=0xfbc;eip=0x001da1; 	X(PUSH(word_449fa));	// 30921 push    word_449FA ;~ 0FBC:1DA1
cs=0xfbc;eip=0x001da5; 	X(PUSH(curshapeptr));	// 30922 push    curshapeptr ;~ 0FBC:1DA5
cs=0xfbc;eip=0x001da9; 	R(CALLF(shape3d_init_shape,0));	// 30923 call    shape3d_init_shape ;~ 0FBC:1DA9
cs=0xfbc;eip=0x001dae; 	T(ADD(sp, 6));	// 30924 add     sp, 6 ;~ 0FBC:1DAE
cs=0xfbc;eip=0x001db1; 	T(INC(si));	// 30925 inc     si ;~ 0FBC:1DB1
cs=0xfbc;eip=0x001db2; 	T(CMP(si, 0x74));	// 30926 cmp     si, 74h ; 't' ;~ 0FBC:1DB2
cs=0xfbc;eip=0x001db5; 	R(JL(loc_1feea));	// 30927 jl      short loc_1FEEA ;~ 0FBC:1DB5
cs=0xfbc;eip=0x001db7; 	T(SUB(ax, ax));	// 30928 sub     ax, ax ;~ 0FBC:1DB7
cs=0xfbc;eip=0x001db9; 	X(POP(si));	// 30929 pop     si ;~ 0FBC:1DB9
cs=0xfbc;eip=0x001dba; 	T(MOV(sp, bp));	// 30930 mov     sp, bp ;~ 0FBC:1DBA
cs=0xfbc;eip=0x001dbc; 	X(POP(bp));	// 30931 pop     bp ;~ 0FBC:1DBC
cs=0xfbc;eip=0x001dbd; 	R(RETF(0));	// 30932 retf ;~ 0FBC:1DBD
shape3d_free_all:
	// 30939 
cs=0xfbc;eip=0x001dbe; 	T(MOV(ax, game1ptr));	// 30941 mov     ax, game1ptr ;~ 0FBC:1DBE
ret_fbc_1dc1:
	// 6489 
cs=0xfbc;eip=0x001dc1; 	T(OR(ax, word_461c6));	// 30942 or      ax, word_461C6 ;~ 0FBC:1DC1
cs=0xfbc;eip=0x001dc5; 	R(JZ(loc_1ff77));	// 30943 jz      short loc_1FF77 ;~ 0FBC:1DC5
cs=0xfbc;eip=0x001dc7; 	X(PUSH(word_461c6));	// 30944 push    word_461C6 ;~ 0FBC:1DC7
cs=0xfbc;eip=0x001dcb; 	X(PUSH(game1ptr));	// 30945 push    game1ptr ;~ 0FBC:1DCB
cs=0xfbc;eip=0x001dcf; 	R(CALLF(mmgr_free,0));	// 30946 call    mmgr_free ;~ 0FBC:1DCF
cs=0xfbc;eip=0x001dd4; 	T(ADD(sp, 4));	// 30947 add     sp, 4 ;~ 0FBC:1DD4
loc_1ff77:
	// 6490 
cs=0xfbc;eip=0x001dd7; 	T(MOV(ax, game2ptr));	// 30950 mov     ax, game2ptr ;~ 0FBC:1DD7
cs=0xfbc;eip=0x001dda; 	T(OR(ax, word_463d4));	// 30951 or      ax, word_463D4 ;~ 0FBC:1DDA
cs=0xfbc;eip=0x001dde; 	R(JZ(locret_1ff90));	// 30952 jz      short locret_1FF90 ;~ 0FBC:1DDE
cs=0xfbc;eip=0x001de0; 	X(PUSH(word_463d4));	// 30953 push    word_463D4 ;~ 0FBC:1DE0
cs=0xfbc;eip=0x001de4; 	X(PUSH(game2ptr));	// 30954 push    game2ptr ;~ 0FBC:1DE4
cs=0xfbc;eip=0x001de8; 	R(CALLF(mmgr_free,0));	// 30955 call    mmgr_free ;~ 0FBC:1DE8
cs=0xfbc;eip=0x001ded; 	T(ADD(sp, 4));	// 30956 add     sp, 4 ;~ 0FBC:1DED
locret_1ff90:
	// 6491 
cs=0xfbc;eip=0x001df0; 	R(RETF(0));	// 30959 retf ;~ 0FBC:1DF0
shape3d_load_car_shapes:
	// 30969 
#undef var_10
#define var_10 -0x10
	// 30972 var_10          = byte ptr -10h ;~ 0FBC:1DF2
#undef var_e
#define var_e -0x0E
	// 30973 var_E           = dword ptr -0Eh ;~ 0FBC:1DF2
#undef var_a
#define var_a -0x0A
	// 30974 var_A           = word ptr -0Ah ;~ 0FBC:1DF2
#undef var_8
#define var_8 -8
	// 30975 var_8           = word ptr -8 ;~ 0FBC:1DF2
#undef var_6
#define var_6 -6
	// 30976 var_6           = word ptr -6 ;~ 0FBC:1DF2
#undef var_4
#define var_4 -4
	// 30977 var_4           = word ptr -4 ;~ 0FBC:1DF2
#undef arg_0
#define arg_0 6
	// 30978 arg_0           = word ptr  6 ;~ 0FBC:1DF2
#undef arg_2
#define arg_2 8
	// 30979 arg_2           = word ptr  8 ;~ 0FBC:1DF2
ret_fbc_1df2:
	// 6492 
cs=0xfbc;eip=0x001df2; 	X(PUSH(bp));	// 30981 push    bp ;~ 0FBC:1DF2
cs=0xfbc;eip=0x001df3; 	T(MOV(bp, sp));	// 30982 mov     bp, sp ;~ 0FBC:1DF3
cs=0xfbc;eip=0x001df5; 	T(SUB(sp, 0x10));	// 30983 sub     sp, 10h ;~ 0FBC:1DF5
cs=0xfbc;eip=0x001df8; 	X(PUSH(di));	// 30984 push    di ;~ 0FBC:1DF8
cs=0xfbc;eip=0x001df9; 	X(PUSH(si));	// 30985 push    si ;~ 0FBC:1DF9
cs=0xfbc;eip=0x001dfa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 30986 mov     bx, [bp+arg_0] ;~ 0FBC:1DFA
cs=0xfbc;eip=0x001dfd; 	T(MOV(al, *(raddr(ds,bx))));	// 30987 mov     al, [bx] ;~ 0FBC:1DFD
cs=0xfbc;eip=0x001dff; 	X(MOV(byte_3e70c, al));	// 30988 mov     byte_3E70C, al ;~ 0FBC:1DFF
cs=0xfbc;eip=0x001e02; 	T(MOV(al, *(raddr(ds,bx+1))));	// 30989 mov     al, [bx+1] ;~ 0FBC:1E02
cs=0xfbc;eip=0x001e05; 	X(MOV(byte_3e70d, al));	// 30990 mov     byte_3E70D, al ;~ 0FBC:1E05
cs=0xfbc;eip=0x001e08; 	T(MOV(al, *(raddr(ds,bx+2))));	// 30991 mov     al, [bx+2] ;~ 0FBC:1E08
cs=0xfbc;eip=0x001e0b; 	X(MOV(byte_3e70e, al));	// 30992 mov     byte_3E70E, al ;~ 0FBC:1E0B
cs=0xfbc;eip=0x001e0e; 	T(MOV(al, *(raddr(ds,bx+3))));	// 30993 mov     al, [bx+3] ;~ 0FBC:1E0E
cs=0xfbc;eip=0x001e11; 	X(MOV(byte_3e70f, al));	// 30994 mov     byte_3E70F, al ;~ 0FBC:1E11
cs=0xfbc;eip=0x001e14; 	T(MOV(ax, offset(dseg,astxxx)));	// 30995 mov     ax, offset aStxxx ;~ 0FBC:1E14
cs=0xfbc;eip=0x001e17; 	X(PUSH(ax));	// 30996 push    ax ;~ 0FBC:1E17
cs=0xfbc;eip=0x001e18; 	R(CALLF(file_load_3dres,0));	// 30997 call    file_load_3dres ;~ 0FBC:1E18
cs=0xfbc;eip=0x001e1d; 	T(ADD(sp, 2));	// 30998 add     sp, 2 ;~ 0FBC:1E1D
cs=0xfbc;eip=0x001e20; 	X(MOV(*(dw*)(((db*)&carresptr)), ax));	// 30999 mov     word ptr carresptr, ax ;~ 0FBC:1E20
cs=0xfbc;eip=0x001e23; 	X(MOV(*(dw*)(((db*)&carresptr)+2), dx));	// 31000 mov     word ptr carresptr+2, dx ;~ 0FBC:1E23
cs=0xfbc;eip=0x001e27; 	T(MOV(ax, offset(dseg,unk_43864)));	// 31001 mov     ax, offset unk_43864 ;~ 0FBC:1E27
cs=0xfbc;eip=0x001e2a; 	X(PUSH(ax));	// 31002 push    ax ;~ 0FBC:1E2A
cs=0xfbc;eip=0x001e2b; 	T(MOV(ax, offset(dseg,acar0)));	// 31003 mov     ax, offset aCar0 ; "car0" ;~ 0FBC:1E2B
cs=0xfbc;eip=0x001e2e; 	X(PUSH(ax));	// 31004 push    ax ;~ 0FBC:1E2E
cs=0xfbc;eip=0x001e2f; 	X(PUSH(dx));	// 31005 push    dx ;~ 0FBC:1E2F
cs=0xfbc;eip=0x001e30; 	X(PUSH(*(dw*)(((db*)&carresptr))));	// 31006 push    word ptr carresptr ;~ 0FBC:1E30
cs=0xfbc;eip=0x001e34; 	R(CALLF(locate_shape_fatal,0));	// 31007 call    locate_shape_fatal ;~ 0FBC:1E34
cs=0xfbc;eip=0x001e39; 	T(ADD(sp, 6));	// 31008 add     sp, 6 ;~ 0FBC:1E39
cs=0xfbc;eip=0x001e3c; 	X(PUSH(dx));	// 31009 push    dx ;~ 0FBC:1E3C
cs=0xfbc;eip=0x001e3d; 	X(PUSH(ax));	// 31010 push    ax ;~ 0FBC:1E3D
cs=0xfbc;eip=0x001e3e; 	R(CALLF(shape3d_init_shape,0));	// 31011 call    shape3d_init_shape ;~ 0FBC:1E3E
cs=0xfbc;eip=0x001e43; 	T(ADD(sp, 6));	// 31012 add     sp, 6 ;~ 0FBC:1E43
cs=0xfbc;eip=0x001e46; 	T(MOV(ax, offset(dseg,unk_43890)));	// 31013 mov     ax, offset unk_43890 ;~ 0FBC:1E46
cs=0xfbc;eip=0x001e49; 	X(PUSH(ax));	// 31014 push    ax ;~ 0FBC:1E49
cs=0xfbc;eip=0x001e4a; 	T(MOV(ax, offset(dseg,acar1)));	// 31015 mov     ax, offset aCar1 ; "car1" ;~ 0FBC:1E4A
cs=0xfbc;eip=0x001e4d; 	X(PUSH(ax));	// 31016 push    ax ;~ 0FBC:1E4D
cs=0xfbc;eip=0x001e4e; 	X(PUSH(*(dw*)(((db*)&carresptr)+2)));	// 31017 push    word ptr carresptr+2 ;~ 0FBC:1E4E
cs=0xfbc;eip=0x001e52; 	X(PUSH(*(dw*)(((db*)&carresptr))));	// 31018 push    word ptr carresptr ;~ 0FBC:1E52
cs=0xfbc;eip=0x001e56; 	R(CALLF(locate_shape_fatal,0));	// 31019 call    locate_shape_fatal ;~ 0FBC:1E56
cs=0xfbc;eip=0x001e5b; 	T(ADD(sp, 6));	// 31020 add     sp, 6 ;~ 0FBC:1E5B
cs=0xfbc;eip=0x001e5e; 	X(PUSH(dx));	// 31021 push    dx ;~ 0FBC:1E5E
cs=0xfbc;eip=0x001e5f; 	X(PUSH(ax));	// 31022 push    ax ;~ 0FBC:1E5F
cs=0xfbc;eip=0x001e60; 	R(CALLF(shape3d_init_shape,0));	// 31023 call    shape3d_init_shape ;~ 0FBC:1E60
cs=0xfbc;eip=0x001e65; 	T(ADD(sp, 6));	// 31024 add     sp, 6 ;~ 0FBC:1E65
cs=0xfbc;eip=0x001e68; 	T(MOV(ax, word_43892));	// 31025 mov     ax, word_43892 ;~ 0FBC:1E68
cs=0xfbc;eip=0x001e6b; 	T(MOV(dx, word_43894));	// 31026 mov     dx, word_43894 ;~ 0FBC:1E6B
cs=0xfbc;eip=0x001e6f; 	T(ADD(ax, 0x30));	// 31027 add     ax, 30h ; '0' ;~ 0FBC:1E6F
cs=0xfbc;eip=0x001e72; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e))), ax));	// 31028 mov     word ptr [bp+var_E], ax ;~ 0FBC:1E72
cs=0xfbc;eip=0x001e75; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e +2))), dx));	// 31029 mov     word ptr [bp+var_E+2], dx ;~ 0FBC:1E75
cs=0xfbc;eip=0x001e78; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31030 les     bx, [bp+var_E] ;~ 0FBC:1E78
cs=0xfbc;eip=0x001e7b; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 31031 mov     ax, es:[bx+4] ;~ 0FBC:1E7B
cs=0xfbc;eip=0x001e7f; 	X(MOV(word_42cbe, ax));	// 31032 mov     word_42CBE, ax ;~ 0FBC:1E7F
cs=0xfbc;eip=0x001e82; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 31033 mov     ax, es:[bx+12h] ;~ 0FBC:1E82
cs=0xfbc;eip=0x001e86; 	T(ADD(ax, *(dw*)(raddr(es,bx+0))));	// 31034 add     ax, es:[bx+0] ;~ 0FBC:1E86
cs=0xfbc;eip=0x001e89; 	T(SAR(ax, 1));	// 31035 sar     ax, 1 ;~ 0FBC:1E89
cs=0xfbc;eip=0x001e8b; 	X(MOV(carshapevec, ax));	// 31036 mov     carshapevec, ax ;~ 0FBC:1E8B
cs=0xfbc;eip=0x001e8e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x28))));	// 31037 mov     ax, es:[bx+28h] ;~ 0FBC:1E8E
cs=0xfbc;eip=0x001e92; 	X(MOV(word_42cc4, ax));	// 31038 mov     word_42CC4, ax ;~ 0FBC:1E92
cs=0xfbc;eip=0x001e95; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x24))));	// 31039 mov     ax, es:[bx+24h] ;~ 0FBC:1E95
cs=0xfbc;eip=0x001e99; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x36))));	// 31040 add     ax, es:[bx+36h] ;~ 0FBC:1E99
cs=0xfbc;eip=0x001e9d; 	T(SAR(ax, 1));	// 31041 sar     ax, 1 ;~ 0FBC:1E9D
cs=0xfbc;eip=0x001e9f; 	X(MOV(carshapevec2, ax));	// 31042 mov     carshapevec2, ax ;~ 0FBC:1E9F
cs=0xfbc;eip=0x001ea2; 	T(SUB(si, si));	// 31043 sub     si, si ;~ 0FBC:1EA2
loc_20044:
	// 6493 
cs=0xfbc;eip=0x001ea4; 	T(MOV(ax, si));	// 31046 mov     ax, si ;~ 0FBC:1EA4
cs=0xfbc;eip=0x001ea6; 	T(MOV(cx, ax));	// 31047 mov     cx, ax ;~ 0FBC:1EA6
cs=0xfbc;eip=0x001ea8; 	T(SHL(ax, 1));	// 31048 shl     ax, 1 ;~ 0FBC:1EA8
cs=0xfbc;eip=0x001eaa; 	T(ADD(ax, cx));	// 31049 add     ax, cx ;~ 0FBC:1EAA
cs=0xfbc;eip=0x001eac; 	T(SHL(ax, 1));	// 31050 shl     ax, 1 ;~ 0FBC:1EAC
cs=0xfbc;eip=0x001eae; 	T(MOV(di, ax));	// 31051 mov     di, ax ;~ 0FBC:1EAE
cs=0xfbc;eip=0x001eb0; 	T(MOV(ax, carshapevec));	// 31052 mov     ax, carshapevec ;~ 0FBC:1EB0
cs=0xfbc;eip=0x001eb3; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31053 les     bx, [bp+var_E] ;~ 0FBC:1EB3
cs=0xfbc;eip=0x001eb6; 	T(SUB(ax, *(dw*)(raddr(es,bx+di+0))));	// 31054 sub     ax, es:[bx+di+0] ;~ 0FBC:1EB6
cs=0xfbc;eip=0x001eb9; 	X(MOV(*(dw*)(((db*)&carshapevecs)+di), ax));	// 31055 mov     carshapevecs[di], ax ;~ 0FBC:1EB9
cs=0xfbc;eip=0x001ebd; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31056 les     bx, [bp+var_E] ;~ 0FBC:1EBD
cs=0xfbc;eip=0x001ec0; 	T(MOV(ax, word_42cbe));	// 31057 mov     ax, word_42CBE ;~ 0FBC:1EC0
cs=0xfbc;eip=0x001ec3; 	T(SUB(ax, *(dw*)(raddr(es,bx+di+4))));	// 31058 sub     ax, es:[bx+di+4] ;~ 0FBC:1EC3
cs=0xfbc;eip=0x001ec7; 	X(MOV(*(dw*)(((db*)&word_443fe)+di), ax));	// 31059 mov     word_443FE[di], ax ;~ 0FBC:1EC7
cs=0xfbc;eip=0x001ecb; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31060 les     bx, [bp+var_E] ;~ 0FBC:1ECB
cs=0xfbc;eip=0x001ece; 	T(MOV(ax, *(dw*)(raddr(es,bx+di+2))));	// 31061 mov     ax, es:[bx+di+2] ;~ 0FBC:1ECE
cs=0xfbc;eip=0x001ed2; 	X(MOV(*(dw*)(((db*)&word_443fc)+di), ax));	// 31062 mov     word_443FC[di], ax ;~ 0FBC:1ED2
cs=0xfbc;eip=0x001ed6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31063 les     bx, [bp+var_E] ;~ 0FBC:1ED6
cs=0xfbc;eip=0x001ed9; 	T(MOV(ax, carshapevec2));	// 31064 mov     ax, carshapevec2 ;~ 0FBC:1ED9
cs=0xfbc;eip=0x001edc; 	T(SUB(ax, *(dw*)(raddr(es,bx+di+0x24))));	// 31065 sub     ax, es:[bx+di+24h] ;~ 0FBC:1EDC
cs=0xfbc;eip=0x001ee0; 	X(MOV(*(dw*)(((db*)&carshapevecs2)+di), ax));	// 31066 mov     carshapevecs2[di], ax ;~ 0FBC:1EE0
cs=0xfbc;eip=0x001ee4; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31067 les     bx, [bp+var_E] ;~ 0FBC:1EE4
cs=0xfbc;eip=0x001ee7; 	T(MOV(ax, word_42cc4));	// 31068 mov     ax, word_42CC4 ;~ 0FBC:1EE7
cs=0xfbc;eip=0x001eea; 	T(SUB(ax, *(dw*)(raddr(es,bx+di+0x28))));	// 31069 sub     ax, es:[bx+di+28h] ;~ 0FBC:1EEA
cs=0xfbc;eip=0x001eee; 	X(MOV(*(dw*)(((db*)&word_44422)+di), ax));	// 31070 mov     word_44422[di], ax ;~ 0FBC:1EEE
cs=0xfbc;eip=0x001ef2; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31071 les     bx, [bp+var_E] ;~ 0FBC:1EF2
cs=0xfbc;eip=0x001ef5; 	T(MOV(ax, *(dw*)(raddr(es,bx+di+0x26))));	// 31072 mov     ax, es:[bx+di+26h] ;~ 0FBC:1EF5
cs=0xfbc;eip=0x001ef9; 	X(MOV(*(dw*)(((db*)&word_44420)+di), ax));	// 31073 mov     word_44420[di], ax ;~ 0FBC:1EF9
cs=0xfbc;eip=0x001efd; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31074 les     bx, [bp+var_E] ;~ 0FBC:1EFD
cs=0xfbc;eip=0x001f00; 	X(PUSH(si));	// 31075 push    si ;~ 0FBC:1F00
cs=0xfbc;eip=0x001f01; 	X(PUSH(di));	// 31076 push    di ;~ 0FBC:1F01
cs=0xfbc;eip=0x001f02; 	T(si = bx+di+0x48);	// 31077 lea     si, [bx+di+48h] ;~ 0FBC:1F02
cs=0xfbc;eip=0x001f05; 	T(di = offset(dseg,carshapevecs3)+di);	// 31078 lea     di, carshapevecs3[di] ;~ 0FBC:1F05
cs=0xfbc;eip=0x001f09; 	X(PUSH(ds));	// 31079 push    ds ;~ 0FBC:1F09
cs=0xfbc;eip=0x001f0a; 	X(PUSH(ds));	// 31080 push    ds ;~ 0FBC:1F0A
cs=0xfbc;eip=0x001f0b; 	X(PUSH(es));	// 31081 push    es ;~ 0FBC:1F0B
cs=0xfbc;eip=0x001f0c; 	X(POP(ds));	// 31082 pop     ds ;~ 0FBC:1F0C
cs=0xfbc;eip=0x001f0d; 	X(POP(es));	// 31083 pop     es ;~ 0FBC:1F0D
cs=0xfbc;eip=0x001f0e; 	X(MOVSW);	// 31084 movsw ;~ 0FBC:1F0E
cs=0xfbc;eip=0x001f0f; 	X(MOVSW);	// 31085 movsw ;~ 0FBC:1F0F
cs=0xfbc;eip=0x001f10; 	X(MOVSW);	// 31086 movsw ;~ 0FBC:1F10
cs=0xfbc;eip=0x001f11; 	X(POP(ds));	// 31087 pop     ds ;~ 0FBC:1F11
cs=0xfbc;eip=0x001f12; 	X(POP(di));	// 31088 pop     di ;~ 0FBC:1F12
cs=0xfbc;eip=0x001f13; 	X(POP(si));	// 31089 pop     si ;~ 0FBC:1F13
cs=0xfbc;eip=0x001f14; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31090 les     bx, [bp+var_E] ;~ 0FBC:1F14
cs=0xfbc;eip=0x001f17; 	X(PUSH(si));	// 31091 push    si ;~ 0FBC:1F17
cs=0xfbc;eip=0x001f18; 	X(PUSH(di));	// 31092 push    di ;~ 0FBC:1F18
cs=0xfbc;eip=0x001f19; 	T(si = bx+di+0x6C);	// 31093 lea     si, [bx+di+6Ch] ;~ 0FBC:1F19
cs=0xfbc;eip=0x001f1c; 	T(di = offset(dseg,carshapevecs4)+di);	// 31094 lea     di, carshapevecs4[di] ;~ 0FBC:1F1C
cs=0xfbc;eip=0x001f20; 	X(PUSH(ds));	// 31095 push    ds ;~ 0FBC:1F20
cs=0xfbc;eip=0x001f21; 	X(PUSH(ds));	// 31096 push    ds ;~ 0FBC:1F21
cs=0xfbc;eip=0x001f22; 	X(PUSH(es));	// 31097 push    es ;~ 0FBC:1F22
cs=0xfbc;eip=0x001f23; 	X(POP(ds));	// 31098 pop     ds ;~ 0FBC:1F23
cs=0xfbc;eip=0x001f24; 	X(POP(es));	// 31099 pop     es ;~ 0FBC:1F24
cs=0xfbc;eip=0x001f25; 	X(MOVSW);	// 31100 movsw ;~ 0FBC:1F25
cs=0xfbc;eip=0x001f26; 	X(MOVSW);	// 31101 movsw ;~ 0FBC:1F26
cs=0xfbc;eip=0x001f27; 	X(MOVSW);	// 31102 movsw ;~ 0FBC:1F27
cs=0xfbc;eip=0x001f28; 	X(POP(ds));	// 31103 pop     ds ;~ 0FBC:1F28
cs=0xfbc;eip=0x001f29; 	X(POP(di));	// 31104 pop     di ;~ 0FBC:1F29
cs=0xfbc;eip=0x001f2a; 	X(POP(si));	// 31105 pop     si ;~ 0FBC:1F2A
cs=0xfbc;eip=0x001f2b; 	T(INC(si));	// 31106 inc     si ;~ 0FBC:1F2B
cs=0xfbc;eip=0x001f2c; 	T(CMP(si, 6));	// 31107 cmp     si, 6 ;~ 0FBC:1F2C
cs=0xfbc;eip=0x001f2f; 	R(JGE(loc_200d4));	// 31108 jge     short loc_200D4 ;~ 0FBC:1F2F
cs=0xfbc;eip=0x001f31; 	R(JMP(loc_20044));	// 31109 jmp     loc_20044 ;~ 0FBC:1F31
loc_200d4:
	// 6494 
cs=0xfbc;eip=0x001f34; 	T(SUB(si, si));	// 31113 sub     si, si ;~ 0FBC:1F34
loc_200d6:
	// 6495 
cs=0xfbc;eip=0x001f36; 	T(MOV(bx, si));	// 31116 mov     bx, si ;~ 0FBC:1F36
cs=0xfbc;eip=0x001f38; 	T(SHL(bx, 1));	// 31117 shl     bx, 1 ;~ 0FBC:1F38
cs=0xfbc;eip=0x001f3a; 	X(MOV(*(dw*)(((db*)&word_443e8)+bx), 0));	// 31118 mov     word_443E8[bx], 0 ;~ 0FBC:1F3A
cs=0xfbc;eip=0x001f40; 	T(INC(si));	// 31119 inc     si ;~ 0FBC:1F40
cs=0xfbc;eip=0x001f41; 	T(CMP(si, 5));	// 31120 cmp     si, 5 ;~ 0FBC:1F41
cs=0xfbc;eip=0x001f44; 	R(JL(loc_200d6));	// 31121 jl      short loc_200D6 ;~ 0FBC:1F44
cs=0xfbc;eip=0x001f46; 	T(MOV(ax, offset(dseg,unk_438bc)));	// 31122 mov     ax, offset unk_438BC ;~ 0FBC:1F46
cs=0xfbc;eip=0x001f49; 	X(PUSH(ax));	// 31123 push    ax ;~ 0FBC:1F49
cs=0xfbc;eip=0x001f4a; 	T(MOV(ax, offset(dseg,acar2)));	// 31124 mov     ax, offset aCar2 ; "car2" ;~ 0FBC:1F4A
cs=0xfbc;eip=0x001f4d; 	X(PUSH(ax));	// 31125 push    ax ;~ 0FBC:1F4D
cs=0xfbc;eip=0x001f4e; 	X(PUSH(*(dw*)(((db*)&carresptr)+2)));	// 31126 push    word ptr carresptr+2 ;~ 0FBC:1F4E
cs=0xfbc;eip=0x001f52; 	X(PUSH(*(dw*)(((db*)&carresptr))));	// 31127 push    word ptr carresptr ;~ 0FBC:1F52
cs=0xfbc;eip=0x001f56; 	R(CALLF(locate_shape_fatal,0));	// 31128 call    locate_shape_fatal ;~ 0FBC:1F56
cs=0xfbc;eip=0x001f5b; 	T(ADD(sp, 6));	// 31129 add     sp, 6 ;~ 0FBC:1F5B
cs=0xfbc;eip=0x001f5e; 	X(PUSH(dx));	// 31130 push    dx ;~ 0FBC:1F5E
cs=0xfbc;eip=0x001f5f; 	X(PUSH(ax));	// 31131 push    ax ;~ 0FBC:1F5F
cs=0xfbc;eip=0x001f60; 	R(CALLF(shape3d_init_shape,0));	// 31132 call    shape3d_init_shape ;~ 0FBC:1F60
cs=0xfbc;eip=0x001f65; 	T(ADD(sp, 6));	// 31133 add     sp, 6 ;~ 0FBC:1F65
cs=0xfbc;eip=0x001f68; 	T(MOV(ax, offset(dseg,unk_437b4)));	// 31134 mov     ax, offset unk_437B4 ;~ 0FBC:1F68
cs=0xfbc;eip=0x001f6b; 	X(PUSH(ax));	// 31135 push    ax ;~ 0FBC:1F6B
cs=0xfbc;eip=0x001f6c; 	T(MOV(ax, offset(dseg,aexp0_0)));	// 31136 mov     ax, offset aExp0_0 ; "exp0" ;~ 0FBC:1F6C
cs=0xfbc;eip=0x001f6f; 	X(PUSH(ax));	// 31137 push    ax ;~ 0FBC:1F6F
cs=0xfbc;eip=0x001f70; 	X(PUSH(*(dw*)(((db*)&carresptr)+2)));	// 31138 push    word ptr carresptr+2 ;~ 0FBC:1F70
cs=0xfbc;eip=0x001f74; 	X(PUSH(*(dw*)(((db*)&carresptr))));	// 31139 push    word ptr carresptr ;~ 0FBC:1F74
cs=0xfbc;eip=0x001f78; 	R(CALLF(locate_shape_fatal,0));	// 31140 call    locate_shape_fatal ;~ 0FBC:1F78
cs=0xfbc;eip=0x001f7d; 	T(ADD(sp, 6));	// 31141 add     sp, 6 ;~ 0FBC:1F7D
cs=0xfbc;eip=0x001f80; 	X(PUSH(dx));	// 31142 push    dx ;~ 0FBC:1F80
cs=0xfbc;eip=0x001f81; 	X(PUSH(ax));	// 31143 push    ax ;~ 0FBC:1F81
cs=0xfbc;eip=0x001f82; 	R(CALLF(shape3d_init_shape,0));	// 31144 call    shape3d_init_shape ;~ 0FBC:1F82
cs=0xfbc;eip=0x001f87; 	T(ADD(sp, 6));	// 31145 add     sp, 6 ;~ 0FBC:1F87
cs=0xfbc;eip=0x001f8a; 	T(MOV(ax, offset(dseg,unk_437ca)));	// 31146 mov     ax, offset unk_437CA ;~ 0FBC:1F8A
cs=0xfbc;eip=0x001f8d; 	X(PUSH(ax));	// 31147 push    ax ;~ 0FBC:1F8D
cs=0xfbc;eip=0x001f8e; 	T(MOV(ax, offset(dseg,aexp1_0)));	// 31148 mov     ax, offset aExp1_0 ; "exp1" ;~ 0FBC:1F8E
cs=0xfbc;eip=0x001f91; 	X(PUSH(ax));	// 31149 push    ax ;~ 0FBC:1F91
cs=0xfbc;eip=0x001f92; 	X(PUSH(*(dw*)(((db*)&carresptr)+2)));	// 31150 push    word ptr carresptr+2 ;~ 0FBC:1F92
cs=0xfbc;eip=0x001f96; 	X(PUSH(*(dw*)(((db*)&carresptr))));	// 31151 push    word ptr carresptr ;~ 0FBC:1F96
cs=0xfbc;eip=0x001f9a; 	R(CALLF(locate_shape_fatal,0));	// 31152 call    locate_shape_fatal ;~ 0FBC:1F9A
cs=0xfbc;eip=0x001f9f; 	T(ADD(sp, 6));	// 31153 add     sp, 6 ;~ 0FBC:1F9F
cs=0xfbc;eip=0x001fa2; 	X(PUSH(dx));	// 31154 push    dx ;~ 0FBC:1FA2
cs=0xfbc;eip=0x001fa3; 	X(PUSH(ax));	// 31155 push    ax ;~ 0FBC:1FA3
cs=0xfbc;eip=0x001fa4; 	R(CALLF(shape3d_init_shape,0));	// 31156 call    shape3d_init_shape ;~ 0FBC:1FA4
cs=0xfbc;eip=0x001fa9; 	T(ADD(sp, 6));	// 31157 add     sp, 6 ;~ 0FBC:1FA9
cs=0xfbc;eip=0x001fac; 	T(MOV(ax, offset(dseg,unk_437e0)));	// 31158 mov     ax, offset unk_437E0 ;~ 0FBC:1FAC
cs=0xfbc;eip=0x001faf; 	X(PUSH(ax));	// 31159 push    ax ;~ 0FBC:1FAF
cs=0xfbc;eip=0x001fb0; 	T(MOV(ax, offset(dseg,aexp2_0)));	// 31160 mov     ax, offset aExp2_0 ; "exp2" ;~ 0FBC:1FB0
cs=0xfbc;eip=0x001fb3; 	X(PUSH(ax));	// 31161 push    ax ;~ 0FBC:1FB3
cs=0xfbc;eip=0x001fb4; 	X(PUSH(*(dw*)(((db*)&carresptr)+2)));	// 31162 push    word ptr carresptr+2 ;~ 0FBC:1FB4
cs=0xfbc;eip=0x001fb8; 	X(PUSH(*(dw*)(((db*)&carresptr))));	// 31163 push    word ptr carresptr ;~ 0FBC:1FB8
cs=0xfbc;eip=0x001fbc; 	R(CALLF(locate_shape_fatal,0));	// 31164 call    locate_shape_fatal ;~ 0FBC:1FBC
cs=0xfbc;eip=0x001fc1; 	T(ADD(sp, 6));	// 31165 add     sp, 6 ;~ 0FBC:1FC1
cs=0xfbc;eip=0x001fc4; 	X(PUSH(dx));	// 31166 push    dx ;~ 0FBC:1FC4
cs=0xfbc;eip=0x001fc5; 	X(PUSH(ax));	// 31167 push    ax ;~ 0FBC:1FC5
cs=0xfbc;eip=0x001fc6; 	R(CALLF(shape3d_init_shape,0));	// 31168 call    shape3d_init_shape ;~ 0FBC:1FC6
cs=0xfbc;eip=0x001fcb; 	T(ADD(sp, 6));	// 31169 add     sp, 6 ;~ 0FBC:1FCB
cs=0xfbc;eip=0x001fce; 	T(MOV(ax, offset(dseg,unk_437f6)));	// 31170 mov     ax, offset unk_437F6 ;~ 0FBC:1FCE
cs=0xfbc;eip=0x001fd1; 	X(PUSH(ax));	// 31171 push    ax ;~ 0FBC:1FD1
cs=0xfbc;eip=0x001fd2; 	T(MOV(ax, offset(dseg,aexp3_0)));	// 31172 mov     ax, offset aExp3_0 ; "exp3" ;~ 0FBC:1FD2
cs=0xfbc;eip=0x001fd5; 	X(PUSH(ax));	// 31173 push    ax ;~ 0FBC:1FD5
cs=0xfbc;eip=0x001fd6; 	X(PUSH(*(dw*)(((db*)&carresptr)+2)));	// 31174 push    word ptr carresptr+2 ;~ 0FBC:1FD6
cs=0xfbc;eip=0x001fda; 	X(PUSH(*(dw*)(((db*)&carresptr))));	// 31175 push    word ptr carresptr ;~ 0FBC:1FDA
cs=0xfbc;eip=0x001fde; 	R(CALLF(locate_shape_fatal,0));	// 31176 call    locate_shape_fatal ;~ 0FBC:1FDE
cs=0xfbc;eip=0x001fe3; 	T(ADD(sp, 6));	// 31177 add     sp, 6 ;~ 0FBC:1FE3
cs=0xfbc;eip=0x001fe6; 	X(PUSH(dx));	// 31178 push    dx ;~ 0FBC:1FE6
cs=0xfbc;eip=0x001fe7; 	X(PUSH(ax));	// 31179 push    ax ;~ 0FBC:1FE7
cs=0xfbc;eip=0x001fe8; 	R(CALLF(shape3d_init_shape,0));	// 31180 call    shape3d_init_shape ;~ 0FBC:1FE8
cs=0xfbc;eip=0x001fed; 	T(ADD(sp, 6));	// 31181 add     sp, 6 ;~ 0FBC:1FED
cs=0xfbc;eip=0x001ff0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 31182 mov     bx, [bp+arg_2] ;~ 0FBC:1FF0
cs=0xfbc;eip=0x001ff3; 	T(MOV(al, *(raddr(ds,bx))));	// 31183 mov     al, [bx] ;~ 0FBC:1FF3
cs=0xfbc;eip=0x001ff5; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 31184 mov     [bp+var_10], al ;~ 0FBC:1FF5
cs=0xfbc;eip=0x001ff8; 	T(CMP(al, 0x0FF));	// 31185 cmp     al, 0FFh ;~ 0FBC:1FF8
cs=0xfbc;eip=0x001ffa; 	R(JNZ(loc_2019f));	// 31186 jnz     short loc_2019F ;~ 0FBC:1FFA
cs=0xfbc;eip=0x001ffc; 	R(JMP(loc_2042a));	// 31187 jmp     loc_2042A ;~ 0FBC:1FFC
loc_2019f:
	// 6496 
cs=0xfbc;eip=0x001fff; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 31191 mov     bx, [bp+arg_0] ;~ 0FBC:1FFF
cs=0xfbc;eip=0x002002; 	T(CMP(*(raddr(ds,bx)), al));	// 31192 cmp     [bx], al ;~ 0FBC:2002
cs=0xfbc;eip=0x002004; 	R(JZ(loc_201a9));	// 31193 jz      short loc_201A9 ;~ 0FBC:2004
cs=0xfbc;eip=0x002006; 	R(JMP(loc_2022a));	// 31194 jmp     loc_2022A ;~ 0FBC:2006
loc_201a9:
	// 6497 
cs=0xfbc;eip=0x002009; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 31198 mov     di, [bp+arg_2] ;~ 0FBC:2009
cs=0xfbc;eip=0x00200c; 	T(MOV(al, *(raddr(ds,di+1))));	// 31199 mov     al, [di+1] ;~ 0FBC:200C
cs=0xfbc;eip=0x00200f; 	T(CMP(*(raddr(ds,bx+1)), al));	// 31200 cmp     [bx+1], al ;~ 0FBC:200F
cs=0xfbc;eip=0x002012; 	R(JNZ(loc_2022a));	// 31201 jnz     short loc_2022A ;~ 0FBC:2012
cs=0xfbc;eip=0x002014; 	T(MOV(al, *(raddr(ds,di+2))));	// 31202 mov     al, [di+2] ;~ 0FBC:2014
cs=0xfbc;eip=0x002017; 	T(CMP(*(raddr(ds,bx+2)), al));	// 31203 cmp     [bx+2], al ;~ 0FBC:2017
cs=0xfbc;eip=0x00201a; 	R(JNZ(loc_2022a));	// 31204 jnz     short loc_2022A ;~ 0FBC:201A
cs=0xfbc;eip=0x00201c; 	T(MOV(al, *(raddr(ds,di+3))));	// 31205 mov     al, [di+3] ;~ 0FBC:201C
cs=0xfbc;eip=0x00201f; 	T(CMP(*(raddr(ds,bx+3)), al));	// 31206 cmp     [bx+3], al ;~ 0FBC:201F
cs=0xfbc;eip=0x002022; 	R(JNZ(loc_2022a));	// 31207 jnz     short loc_2022A ;~ 0FBC:2022
cs=0xfbc;eip=0x002024; 	X(PUSH(*(dw*)(((db*)&carresptr)+2)));	// 31208 push    word ptr carresptr+2 ;~ 0FBC:2024
cs=0xfbc;eip=0x002028; 	X(PUSH(*(dw*)(((db*)&carresptr))));	// 31209 push    word ptr carresptr ;~ 0FBC:2028
cs=0xfbc;eip=0x00202c; 	R(CALLF(mmgr_get_chunk_size_bytes,0));	// 31210 call    mmgr_get_chunk_size_bytes ;~ 0FBC:202C
cs=0xfbc;eip=0x002031; 	T(ADD(sp, 4));	// 31211 add     sp, 4 ;~ 0FBC:2031
cs=0xfbc;eip=0x002034; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 31212 mov     [bp+var_6], ax ;~ 0FBC:2034
cs=0xfbc;eip=0x002037; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 31213 mov     [bp+var_4], dx ;~ 0FBC:2037
cs=0xfbc;eip=0x00203a; 	X(PUSH(dx));	// 31214 push    dx ;~ 0FBC:203A
cs=0xfbc;eip=0x00203b; 	X(PUSH(ax));	// 31215 push    ax ;~ 0FBC:203B
cs=0xfbc;eip=0x00203c; 	T(MOV(ax, offset(dseg,acar2_0)));	// 31216 mov     ax, offset aCar2_0 ; "car2" ;~ 0FBC:203C
cs=0xfbc;eip=0x00203f; 	X(PUSH(ax));	// 31217 push    ax ;~ 0FBC:203F
cs=0xfbc;eip=0x002040; 	R(CALLF(mmgr_alloc_resbytes,0));	// 31218 call    mmgr_alloc_resbytes ;~ 0FBC:2040
cs=0xfbc;eip=0x002045; 	T(ADD(sp, 6));	// 31219 add     sp, 6 ;~ 0FBC:2045
cs=0xfbc;eip=0x002048; 	X(MOV(*(dw*)(((db*)&car2resptr)), ax));	// 31220 mov     word ptr car2resptr, ax ;~ 0FBC:2048
cs=0xfbc;eip=0x00204b; 	X(MOV(*(dw*)(((db*)&car2resptr)+2), dx));	// 31221 mov     word ptr car2resptr+2, dx ;~ 0FBC:204B
cs=0xfbc;eip=0x00204f; 	T(SUB(ax, ax));	// 31222 sub     ax, ax ;~ 0FBC:204F
cs=0xfbc;eip=0x002051; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 31223 mov     [bp+var_8], ax ;~ 0FBC:2051
cs=0xfbc;eip=0x002054; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 31224 mov     [bp+var_A], ax ;~ 0FBC:2054
cs=0xfbc;eip=0x002057; 	R(JMP(loc_20204));	// 31225 jmp     short loc_20204 ;~ 0FBC:2057
loc_201fc:
	// 6498 
cs=0xfbc;eip=0x00205c; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 1));	// 31231 add     [bp+var_A], 1 ;~ 0FBC:205C
cs=0xfbc;eip=0x002060; 	X(ADC(*(dw*)(raddr(ss,bp+var_8)), 0));	// 31232 adc     [bp+var_8], 0 ;~ 0FBC:2060
loc_20204:
	// 6499 
cs=0xfbc;eip=0x002064; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 31235 mov     ax, [bp+var_6] ;~ 0FBC:2064
cs=0xfbc;eip=0x002067; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 31236 mov     dx, [bp+var_4] ;~ 0FBC:2067
cs=0xfbc;eip=0x00206a; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), dx));	// 31237 cmp     [bp+var_8], dx ;~ 0FBC:206A
cs=0xfbc;eip=0x00206d; 	R(JG(loc_20257));	// 31238 jg      short loc_20257 ;~ 0FBC:206D
cs=0xfbc;eip=0x00206f; 	R(JL(loc_20216));	// 31239 jl      short loc_20216 ;~ 0FBC:206F
cs=0xfbc;eip=0x002071; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), ax));	// 31240 cmp     [bp+var_A], ax ;~ 0FBC:2071
cs=0xfbc;eip=0x002074; 	R(JNC(loc_20257));	// 31241 jnb     short loc_20257 ;~ 0FBC:2074
loc_20216:
	// 6500 
cs=0xfbc;eip=0x002076; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 31244 mov     bx, [bp+var_A] ;~ 0FBC:2076
cs=0xfbc;eip=0x002079; 	T(LES(di, carresptr));	// 31245 les     di, carresptr ;~ 0FBC:2079
cs=0xfbc;eip=0x00207d; 	T(MOV(al, *(raddr(es,bx+di))));	// 31246 mov     al, es:[bx+di] ;~ 0FBC:207D
cs=0xfbc;eip=0x002080; 	T(LES(di, car2resptr));	// 31247 les     di, car2resptr ;~ 0FBC:2080
cs=0xfbc;eip=0x002084; 	X(MOV(*(raddr(es,bx+di)), al));	// 31248 mov     es:[bx+di], al ;~ 0FBC:2084
cs=0xfbc;eip=0x002087; 	R(JMP(loc_201fc));	// 31249 jmp     short loc_201FC ;~ 0FBC:2087
loc_2022a:
	// 6501 
cs=0xfbc;eip=0x00208a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 31255 mov     bx, [bp+arg_2] ;~ 0FBC:208A
cs=0xfbc;eip=0x00208d; 	T(MOV(al, *(raddr(ds,bx))));	// 31256 mov     al, [bx] ;~ 0FBC:208D
cs=0xfbc;eip=0x00208f; 	X(MOV(byte_3e70c, al));	// 31257 mov     byte_3E70C, al ;~ 0FBC:208F
cs=0xfbc;eip=0x002092; 	T(MOV(al, *(raddr(ds,bx+1))));	// 31258 mov     al, [bx+1] ;~ 0FBC:2092
cs=0xfbc;eip=0x002095; 	X(MOV(byte_3e70d, al));	// 31259 mov     byte_3E70D, al ;~ 0FBC:2095
cs=0xfbc;eip=0x002098; 	T(MOV(al, *(raddr(ds,bx+2))));	// 31260 mov     al, [bx+2] ;~ 0FBC:2098
cs=0xfbc;eip=0x00209b; 	X(MOV(byte_3e70e, al));	// 31261 mov     byte_3E70E, al ;~ 0FBC:209B
cs=0xfbc;eip=0x00209e; 	T(MOV(al, *(raddr(ds,bx+3))));	// 31262 mov     al, [bx+3] ;~ 0FBC:209E
cs=0xfbc;eip=0x0020a1; 	X(MOV(byte_3e70f, al));	// 31263 mov     byte_3E70F, al ;~ 0FBC:20A1
cs=0xfbc;eip=0x0020a4; 	T(MOV(ax, offset(dseg,astxxx)));	// 31264 mov     ax, offset aStxxx ;~ 0FBC:20A4
cs=0xfbc;eip=0x0020a7; 	X(PUSH(ax));	// 31265 push    ax ;~ 0FBC:20A7
cs=0xfbc;eip=0x0020a8; 	R(CALLF(file_load_3dres,0));	// 31266 call    file_load_3dres ;~ 0FBC:20A8
cs=0xfbc;eip=0x0020ad; 	T(ADD(sp, 2));	// 31267 add     sp, 2 ;~ 0FBC:20AD
cs=0xfbc;eip=0x0020b0; 	X(MOV(*(dw*)(((db*)&car2resptr)), ax));	// 31268 mov     word ptr car2resptr, ax ;~ 0FBC:20B0
cs=0xfbc;eip=0x0020b3; 	X(MOV(*(dw*)(((db*)&car2resptr)+2), dx));	// 31269 mov     word ptr car2resptr+2, dx ;~ 0FBC:20B3
loc_20257:
	// 6502 
cs=0xfbc;eip=0x0020b7; 	T(MOV(ax, offset(dseg,unk_4387a)));	// 31273 mov     ax, offset unk_4387A ;~ 0FBC:20B7
cs=0xfbc;eip=0x0020ba; 	X(PUSH(ax));	// 31274 push    ax ;~ 0FBC:20BA
cs=0xfbc;eip=0x0020bb; 	T(MOV(ax, offset(dseg,acar0_0)));	// 31275 mov     ax, offset aCar0_0 ; "car0" ;~ 0FBC:20BB
cs=0xfbc;eip=0x0020be; 	X(PUSH(ax));	// 31276 push    ax ;~ 0FBC:20BE
cs=0xfbc;eip=0x0020bf; 	X(PUSH(*(dw*)(((db*)&car2resptr)+2)));	// 31277 push    word ptr car2resptr+2 ;~ 0FBC:20BF
cs=0xfbc;eip=0x0020c3; 	X(PUSH(*(dw*)(((db*)&car2resptr))));	// 31278 push    word ptr car2resptr ;~ 0FBC:20C3
cs=0xfbc;eip=0x0020c7; 	R(CALLF(locate_shape_fatal,0));	// 31279 call    locate_shape_fatal ;~ 0FBC:20C7
cs=0xfbc;eip=0x0020cc; 	T(ADD(sp, 6));	// 31280 add     sp, 6 ;~ 0FBC:20CC
cs=0xfbc;eip=0x0020cf; 	X(PUSH(dx));	// 31281 push    dx ;~ 0FBC:20CF
cs=0xfbc;eip=0x0020d0; 	X(PUSH(ax));	// 31282 push    ax ;~ 0FBC:20D0
cs=0xfbc;eip=0x0020d1; 	R(CALLF(shape3d_init_shape,0));	// 31283 call    shape3d_init_shape ;~ 0FBC:20D1
cs=0xfbc;eip=0x0020d6; 	T(ADD(sp, 6));	// 31284 add     sp, 6 ;~ 0FBC:20D6
cs=0xfbc;eip=0x0020d9; 	T(MOV(ax, offset(dseg,unk_438a6)));	// 31285 mov     ax, offset unk_438A6 ;~ 0FBC:20D9
cs=0xfbc;eip=0x0020dc; 	X(PUSH(ax));	// 31286 push    ax ;~ 0FBC:20DC
cs=0xfbc;eip=0x0020dd; 	T(MOV(ax, offset(dseg,acar1_0)));	// 31287 mov     ax, offset aCar1_0 ; "car1" ;~ 0FBC:20DD
cs=0xfbc;eip=0x0020e0; 	X(PUSH(ax));	// 31288 push    ax ;~ 0FBC:20E0
cs=0xfbc;eip=0x0020e1; 	X(PUSH(*(dw*)(((db*)&car2resptr)+2)));	// 31289 push    word ptr car2resptr+2 ;~ 0FBC:20E1
cs=0xfbc;eip=0x0020e5; 	X(PUSH(*(dw*)(((db*)&car2resptr))));	// 31290 push    word ptr car2resptr ;~ 0FBC:20E5
cs=0xfbc;eip=0x0020e9; 	R(CALLF(locate_shape_fatal,0));	// 31291 call    locate_shape_fatal ;~ 0FBC:20E9
cs=0xfbc;eip=0x0020ee; 	T(ADD(sp, 6));	// 31292 add     sp, 6 ;~ 0FBC:20EE
cs=0xfbc;eip=0x0020f1; 	X(PUSH(dx));	// 31293 push    dx ;~ 0FBC:20F1
cs=0xfbc;eip=0x0020f2; 	X(PUSH(ax));	// 31294 push    ax ;~ 0FBC:20F2
cs=0xfbc;eip=0x0020f3; 	R(CALLF(shape3d_init_shape,0));	// 31295 call    shape3d_init_shape ;~ 0FBC:20F3
cs=0xfbc;eip=0x0020f8; 	T(ADD(sp, 6));	// 31296 add     sp, 6 ;~ 0FBC:20F8
cs=0xfbc;eip=0x0020fb; 	T(MOV(ax, word_438a8));	// 31297 mov     ax, word_438A8 ;~ 0FBC:20FB
cs=0xfbc;eip=0x0020fe; 	T(MOV(dx, word_438aa));	// 31298 mov     dx, word_438AA ;~ 0FBC:20FE
cs=0xfbc;eip=0x002102; 	T(ADD(ax, 0x30));	// 31299 add     ax, 30h ; '0' ;~ 0FBC:2102
cs=0xfbc;eip=0x002105; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e))), ax));	// 31300 mov     word ptr [bp+var_E], ax ;~ 0FBC:2105
cs=0xfbc;eip=0x002108; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e +2))), dx));	// 31301 mov     word ptr [bp+var_E+2], dx ;~ 0FBC:2108
cs=0xfbc;eip=0x00210b; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31302 les     bx, [bp+var_E] ;~ 0FBC:210B
cs=0xfbc;eip=0x00210e; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 31303 mov     ax, es:[bx+4] ;~ 0FBC:210E
cs=0xfbc;eip=0x002112; 	X(MOV(word_42d08, ax));	// 31304 mov     word_42D08, ax ;~ 0FBC:2112
cs=0xfbc;eip=0x002115; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 31305 mov     ax, es:[bx+12h] ;~ 0FBC:2115
cs=0xfbc;eip=0x002119; 	T(ADD(ax, *(dw*)(raddr(es,bx+0))));	// 31306 add     ax, es:[bx+0] ;~ 0FBC:2119
cs=0xfbc;eip=0x00211c; 	T(SAR(ax, 1));	// 31307 sar     ax, 1 ;~ 0FBC:211C
cs=0xfbc;eip=0x00211e; 	X(MOV(oppcarshapevec, ax));	// 31308 mov     oppcarshapevec, ax ;~ 0FBC:211E
cs=0xfbc;eip=0x002121; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x28))));	// 31309 mov     ax, es:[bx+28h] ;~ 0FBC:2121
cs=0xfbc;eip=0x002125; 	X(MOV(word_42d0e, ax));	// 31310 mov     word_42D0E, ax ;~ 0FBC:2125
cs=0xfbc;eip=0x002128; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x24))));	// 31311 mov     ax, es:[bx+24h] ;~ 0FBC:2128
cs=0xfbc;eip=0x00212c; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x36))));	// 31312 add     ax, es:[bx+36h] ;~ 0FBC:212C
cs=0xfbc;eip=0x002130; 	T(SAR(ax, 1));	// 31313 sar     ax, 1 ;~ 0FBC:2130
cs=0xfbc;eip=0x002132; 	X(MOV(oppcarshapevec2, ax));	// 31314 mov     oppcarshapevec2, ax ;~ 0FBC:2132
cs=0xfbc;eip=0x002135; 	T(SUB(si, si));	// 31315 sub     si, si ;~ 0FBC:2135
loc_202d7:
	// 6503 
cs=0xfbc;eip=0x002137; 	T(MOV(ax, si));	// 31318 mov     ax, si ;~ 0FBC:2137
cs=0xfbc;eip=0x002139; 	T(MOV(cx, ax));	// 31319 mov     cx, ax ;~ 0FBC:2139
cs=0xfbc;eip=0x00213b; 	T(SHL(ax, 1));	// 31320 shl     ax, 1 ;~ 0FBC:213B
cs=0xfbc;eip=0x00213d; 	T(ADD(ax, cx));	// 31321 add     ax, cx ;~ 0FBC:213D
cs=0xfbc;eip=0x00213f; 	T(SHL(ax, 1));	// 31322 shl     ax, 1 ;~ 0FBC:213F
cs=0xfbc;eip=0x002141; 	T(MOV(di, ax));	// 31323 mov     di, ax ;~ 0FBC:2141
cs=0xfbc;eip=0x002143; 	T(MOV(ax, oppcarshapevec));	// 31324 mov     ax, oppcarshapevec ;~ 0FBC:2143
cs=0xfbc;eip=0x002146; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31325 les     bx, [bp+var_E] ;~ 0FBC:2146
cs=0xfbc;eip=0x002149; 	T(SUB(ax, *(dw*)(raddr(es,bx+di+0))));	// 31326 sub     ax, es:[bx+di+0] ;~ 0FBC:2149
cs=0xfbc;eip=0x00214c; 	X(MOV(*(dw*)(((db*)&oppcarshapevecs)+di), ax));	// 31327 mov     oppcarshapevecs[di], ax ;~ 0FBC:214C
cs=0xfbc;eip=0x002150; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31328 les     bx, [bp+var_E] ;~ 0FBC:2150
cs=0xfbc;eip=0x002153; 	T(MOV(ax, word_42d08));	// 31329 mov     ax, word_42D08 ;~ 0FBC:2153
cs=0xfbc;eip=0x002156; 	T(SUB(ax, *(dw*)(raddr(es,bx+di+4))));	// 31330 sub     ax, es:[bx+di+4] ;~ 0FBC:2156
cs=0xfbc;eip=0x00215a; 	X(MOV(*(dw*)(((db*)&word_448f8)+di), ax));	// 31331 mov     word_448F8[di], ax ;~ 0FBC:215A
cs=0xfbc;eip=0x00215e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31332 les     bx, [bp+var_E] ;~ 0FBC:215E
cs=0xfbc;eip=0x002161; 	T(MOV(ax, *(dw*)(raddr(es,bx+di+2))));	// 31333 mov     ax, es:[bx+di+2] ;~ 0FBC:2161
cs=0xfbc;eip=0x002165; 	X(MOV(*(dw*)(((db*)&word_448f6)+di), ax));	// 31334 mov     word_448F6[di], ax ;~ 0FBC:2165
cs=0xfbc;eip=0x002169; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31335 les     bx, [bp+var_E] ;~ 0FBC:2169
cs=0xfbc;eip=0x00216c; 	T(MOV(ax, oppcarshapevec2));	// 31336 mov     ax, oppcarshapevec2 ;~ 0FBC:216C
cs=0xfbc;eip=0x00216f; 	T(SUB(ax, *(dw*)(raddr(es,bx+di+0x24))));	// 31337 sub     ax, es:[bx+di+24h] ;~ 0FBC:216F
cs=0xfbc;eip=0x002173; 	X(MOV(*(dw*)(((db*)&oppcarshapevecs2)+di), ax));	// 31338 mov     oppcarshapevecs2[di], ax ;~ 0FBC:2173
cs=0xfbc;eip=0x002177; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31339 les     bx, [bp+var_E] ;~ 0FBC:2177
cs=0xfbc;eip=0x00217a; 	T(MOV(ax, word_42d0e));	// 31340 mov     ax, word_42D0E ;~ 0FBC:217A
cs=0xfbc;eip=0x00217d; 	T(SUB(ax, *(dw*)(raddr(es,bx+di+0x28))));	// 31341 sub     ax, es:[bx+di+28h] ;~ 0FBC:217D
cs=0xfbc;eip=0x002181; 	X(MOV(*(dw*)(((db*)&word_4491c)+di), ax));	// 31342 mov     word_4491C[di], ax ;~ 0FBC:2181
cs=0xfbc;eip=0x002185; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31343 les     bx, [bp+var_E] ;~ 0FBC:2185
cs=0xfbc;eip=0x002188; 	T(MOV(ax, *(dw*)(raddr(es,bx+di+0x26))));	// 31344 mov     ax, es:[bx+di+26h] ;~ 0FBC:2188
cs=0xfbc;eip=0x00218c; 	X(MOV(*(dw*)(((db*)&word_4491a)+di), ax));	// 31345 mov     word_4491A[di], ax ;~ 0FBC:218C
cs=0xfbc;eip=0x002190; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31346 les     bx, [bp+var_E] ;~ 0FBC:2190
cs=0xfbc;eip=0x002193; 	X(PUSH(si));	// 31347 push    si ;~ 0FBC:2193
cs=0xfbc;eip=0x002194; 	X(PUSH(di));	// 31348 push    di ;~ 0FBC:2194
cs=0xfbc;eip=0x002195; 	T(si = bx+di+0x48);	// 31349 lea     si, [bx+di+48h] ;~ 0FBC:2195
cs=0xfbc;eip=0x002198; 	T(di = offset(dseg,oppcarshapevecs3)+di);	// 31350 lea     di, oppcarshapevecs3[di] ;~ 0FBC:2198
cs=0xfbc;eip=0x00219c; 	X(PUSH(ds));	// 31351 push    ds ;~ 0FBC:219C
cs=0xfbc;eip=0x00219d; 	X(PUSH(ds));	// 31352 push    ds ;~ 0FBC:219D
cs=0xfbc;eip=0x00219e; 	X(PUSH(es));	// 31353 push    es ;~ 0FBC:219E
cs=0xfbc;eip=0x00219f; 	X(POP(ds));	// 31354 pop     ds ;~ 0FBC:219F
cs=0xfbc;eip=0x0021a0; 	X(POP(es));	// 31355 pop     es ;~ 0FBC:21A0
cs=0xfbc;eip=0x0021a1; 	X(MOVSW);	// 31356 movsw ;~ 0FBC:21A1
cs=0xfbc;eip=0x0021a2; 	X(MOVSW);	// 31357 movsw ;~ 0FBC:21A2
cs=0xfbc;eip=0x0021a3; 	X(MOVSW);	// 31358 movsw ;~ 0FBC:21A3
cs=0xfbc;eip=0x0021a4; 	X(POP(ds));	// 31359 pop     ds ;~ 0FBC:21A4
cs=0xfbc;eip=0x0021a5; 	X(POP(di));	// 31360 pop     di ;~ 0FBC:21A5
cs=0xfbc;eip=0x0021a6; 	X(POP(si));	// 31361 pop     si ;~ 0FBC:21A6
cs=0xfbc;eip=0x0021a7; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 31362 les     bx, [bp+var_E] ;~ 0FBC:21A7
cs=0xfbc;eip=0x0021aa; 	X(PUSH(si));	// 31363 push    si ;~ 0FBC:21AA
cs=0xfbc;eip=0x0021ab; 	X(PUSH(di));	// 31364 push    di ;~ 0FBC:21AB
cs=0xfbc;eip=0x0021ac; 	T(si = bx+di+0x6C);	// 31365 lea     si, [bx+di+6Ch] ;~ 0FBC:21AC
cs=0xfbc;eip=0x0021af; 	T(di = offset(dseg,oppcarshapevecs4)+di);	// 31366 lea     di, oppcarshapevecs4[di] ;~ 0FBC:21AF
cs=0xfbc;eip=0x0021b3; 	X(PUSH(ds));	// 31367 push    ds ;~ 0FBC:21B3
cs=0xfbc;eip=0x0021b4; 	X(PUSH(ds));	// 31368 push    ds ;~ 0FBC:21B4
cs=0xfbc;eip=0x0021b5; 	X(PUSH(es));	// 31369 push    es ;~ 0FBC:21B5
cs=0xfbc;eip=0x0021b6; 	X(POP(ds));	// 31370 pop     ds ;~ 0FBC:21B6
cs=0xfbc;eip=0x0021b7; 	X(POP(es));	// 31371 pop     es ;~ 0FBC:21B7
cs=0xfbc;eip=0x0021b8; 	X(MOVSW);	// 31372 movsw ;~ 0FBC:21B8
cs=0xfbc;eip=0x0021b9; 	X(MOVSW);	// 31373 movsw ;~ 0FBC:21B9
cs=0xfbc;eip=0x0021ba; 	X(MOVSW);	// 31374 movsw ;~ 0FBC:21BA
cs=0xfbc;eip=0x0021bb; 	X(POP(ds));	// 31375 pop     ds ;~ 0FBC:21BB
cs=0xfbc;eip=0x0021bc; 	X(POP(di));	// 31376 pop     di ;~ 0FBC:21BC
cs=0xfbc;eip=0x0021bd; 	X(POP(si));	// 31377 pop     si ;~ 0FBC:21BD
cs=0xfbc;eip=0x0021be; 	T(INC(si));	// 31378 inc     si ;~ 0FBC:21BE
cs=0xfbc;eip=0x0021bf; 	T(CMP(si, 6));	// 31379 cmp     si, 6 ;~ 0FBC:21BF
cs=0xfbc;eip=0x0021c2; 	R(JGE(loc_20367));	// 31380 jge     short loc_20367 ;~ 0FBC:21C2
cs=0xfbc;eip=0x0021c4; 	R(JMP(loc_202d7));	// 31381 jmp     loc_202D7 ;~ 0FBC:21C4
loc_20367:
	// 6504 
cs=0xfbc;eip=0x0021c7; 	T(SUB(si, si));	// 31385 sub     si, si ;~ 0FBC:21C7
loc_20369:
	// 6505 
cs=0xfbc;eip=0x0021c9; 	T(MOV(bx, si));	// 31388 mov     bx, si ;~ 0FBC:21C9
cs=0xfbc;eip=0x0021cb; 	T(SHL(bx, 1));	// 31389 shl     bx, 1 ;~ 0FBC:21CB
cs=0xfbc;eip=0x0021cd; 	X(MOV(*(dw*)(((db*)&word_4448a)+bx), 0));	// 31390 mov     word_4448A[bx], 0 ;~ 0FBC:21CD
cs=0xfbc;eip=0x0021d3; 	T(INC(si));	// 31391 inc     si ;~ 0FBC:21D3
cs=0xfbc;eip=0x0021d4; 	T(CMP(si, 5));	// 31392 cmp     si, 5 ;~ 0FBC:21D4
cs=0xfbc;eip=0x0021d7; 	R(JL(loc_20369));	// 31393 jl      short loc_20369 ;~ 0FBC:21D7
cs=0xfbc;eip=0x0021d9; 	T(MOV(ax, offset(dseg,unk_438d2)));	// 31394 mov     ax, offset unk_438D2 ;~ 0FBC:21D9
cs=0xfbc;eip=0x0021dc; 	X(PUSH(ax));	// 31395 push    ax ;~ 0FBC:21DC
cs=0xfbc;eip=0x0021dd; 	T(MOV(ax, offset(dseg,acar2_1)));	// 31396 mov     ax, offset aCar2_1 ; "car2" ;~ 0FBC:21DD
cs=0xfbc;eip=0x0021e0; 	X(PUSH(ax));	// 31397 push    ax ;~ 0FBC:21E0
cs=0xfbc;eip=0x0021e1; 	X(PUSH(*(dw*)(((db*)&car2resptr)+2)));	// 31398 push    word ptr car2resptr+2 ;~ 0FBC:21E1
cs=0xfbc;eip=0x0021e5; 	X(PUSH(*(dw*)(((db*)&car2resptr))));	// 31399 push    word ptr car2resptr ;~ 0FBC:21E5
cs=0xfbc;eip=0x0021e9; 	R(CALLF(locate_shape_fatal,0));	// 31400 call    locate_shape_fatal ;~ 0FBC:21E9
cs=0xfbc;eip=0x0021ee; 	T(ADD(sp, 6));	// 31401 add     sp, 6 ;~ 0FBC:21EE
cs=0xfbc;eip=0x0021f1; 	X(PUSH(dx));	// 31402 push    dx ;~ 0FBC:21F1
cs=0xfbc;eip=0x0021f2; 	X(PUSH(ax));	// 31403 push    ax ;~ 0FBC:21F2
cs=0xfbc;eip=0x0021f3; 	R(CALLF(shape3d_init_shape,0));	// 31404 call    shape3d_init_shape ;~ 0FBC:21F3
cs=0xfbc;eip=0x0021f8; 	T(ADD(sp, 6));	// 31405 add     sp, 6 ;~ 0FBC:21F8
cs=0xfbc;eip=0x0021fb; 	T(MOV(ax, offset(dseg,unk_4380c)));	// 31406 mov     ax, offset unk_4380C ;~ 0FBC:21FB
cs=0xfbc;eip=0x0021fe; 	X(PUSH(ax));	// 31407 push    ax ;~ 0FBC:21FE
cs=0xfbc;eip=0x0021ff; 	T(MOV(ax, offset(dseg,aexp0_1)));	// 31408 mov     ax, offset aExp0_1 ; "exp0" ;~ 0FBC:21FF
cs=0xfbc;eip=0x002202; 	X(PUSH(ax));	// 31409 push    ax ;~ 0FBC:2202
cs=0xfbc;eip=0x002203; 	X(PUSH(*(dw*)(((db*)&car2resptr)+2)));	// 31410 push    word ptr car2resptr+2 ;~ 0FBC:2203
cs=0xfbc;eip=0x002207; 	X(PUSH(*(dw*)(((db*)&car2resptr))));	// 31411 push    word ptr car2resptr ;~ 0FBC:2207
cs=0xfbc;eip=0x00220b; 	R(CALLF(locate_shape_fatal,0));	// 31412 call    locate_shape_fatal ;~ 0FBC:220B
cs=0xfbc;eip=0x002210; 	T(ADD(sp, 6));	// 31413 add     sp, 6 ;~ 0FBC:2210
cs=0xfbc;eip=0x002213; 	X(PUSH(dx));	// 31414 push    dx ;~ 0FBC:2213
cs=0xfbc;eip=0x002214; 	X(PUSH(ax));	// 31415 push    ax ;~ 0FBC:2214
cs=0xfbc;eip=0x002215; 	R(CALLF(shape3d_init_shape,0));	// 31416 call    shape3d_init_shape ;~ 0FBC:2215
cs=0xfbc;eip=0x00221a; 	T(ADD(sp, 6));	// 31417 add     sp, 6 ;~ 0FBC:221A
cs=0xfbc;eip=0x00221d; 	T(MOV(ax, offset(dseg,unk_43822)));	// 31418 mov     ax, offset unk_43822 ;~ 0FBC:221D
cs=0xfbc;eip=0x002220; 	X(PUSH(ax));	// 31419 push    ax ;~ 0FBC:2220
cs=0xfbc;eip=0x002221; 	T(MOV(ax, offset(dseg,aexp1_1)));	// 31420 mov     ax, offset aExp1_1 ; "exp1" ;~ 0FBC:2221
cs=0xfbc;eip=0x002224; 	X(PUSH(ax));	// 31421 push    ax ;~ 0FBC:2224
cs=0xfbc;eip=0x002225; 	X(PUSH(*(dw*)(((db*)&car2resptr)+2)));	// 31422 push    word ptr car2resptr+2 ;~ 0FBC:2225
cs=0xfbc;eip=0x002229; 	X(PUSH(*(dw*)(((db*)&car2resptr))));	// 31423 push    word ptr car2resptr ;~ 0FBC:2229
cs=0xfbc;eip=0x00222d; 	R(CALLF(locate_shape_fatal,0));	// 31424 call    locate_shape_fatal ;~ 0FBC:222D
cs=0xfbc;eip=0x002232; 	T(ADD(sp, 6));	// 31425 add     sp, 6 ;~ 0FBC:2232
cs=0xfbc;eip=0x002235; 	X(PUSH(dx));	// 31426 push    dx ;~ 0FBC:2235
cs=0xfbc;eip=0x002236; 	X(PUSH(ax));	// 31427 push    ax ;~ 0FBC:2236
cs=0xfbc;eip=0x002237; 	R(CALLF(shape3d_init_shape,0));	// 31428 call    shape3d_init_shape ;~ 0FBC:2237
cs=0xfbc;eip=0x00223c; 	T(ADD(sp, 6));	// 31429 add     sp, 6 ;~ 0FBC:223C
cs=0xfbc;eip=0x00223f; 	T(MOV(ax, offset(dseg,unk_43838)));	// 31430 mov     ax, offset unk_43838 ;~ 0FBC:223F
cs=0xfbc;eip=0x002242; 	X(PUSH(ax));	// 31431 push    ax ;~ 0FBC:2242
cs=0xfbc;eip=0x002243; 	T(MOV(ax, offset(dseg,aexp2_1)));	// 31432 mov     ax, offset aExp2_1 ; "exp2" ;~ 0FBC:2243
cs=0xfbc;eip=0x002246; 	X(PUSH(ax));	// 31433 push    ax ;~ 0FBC:2246
cs=0xfbc;eip=0x002247; 	X(PUSH(*(dw*)(((db*)&car2resptr)+2)));	// 31434 push    word ptr car2resptr+2 ;~ 0FBC:2247
cs=0xfbc;eip=0x00224b; 	X(PUSH(*(dw*)(((db*)&car2resptr))));	// 31435 push    word ptr car2resptr ;~ 0FBC:224B
cs=0xfbc;eip=0x00224f; 	R(CALLF(locate_shape_fatal,0));	// 31436 call    locate_shape_fatal ;~ 0FBC:224F
cs=0xfbc;eip=0x002254; 	T(ADD(sp, 6));	// 31437 add     sp, 6 ;~ 0FBC:2254
cs=0xfbc;eip=0x002257; 	X(PUSH(dx));	// 31438 push    dx ;~ 0FBC:2257
cs=0xfbc;eip=0x002258; 	X(PUSH(ax));	// 31439 push    ax ;~ 0FBC:2258
cs=0xfbc;eip=0x002259; 	R(CALLF(shape3d_init_shape,0));	// 31440 call    shape3d_init_shape ;~ 0FBC:2259
cs=0xfbc;eip=0x00225e; 	T(ADD(sp, 6));	// 31441 add     sp, 6 ;~ 0FBC:225E
cs=0xfbc;eip=0x002261; 	T(MOV(ax, offset(dseg,unk_4384e)));	// 31442 mov     ax, offset unk_4384E ;~ 0FBC:2261
cs=0xfbc;eip=0x002264; 	X(PUSH(ax));	// 31443 push    ax ;~ 0FBC:2264
cs=0xfbc;eip=0x002265; 	T(MOV(ax, offset(dseg,aexp3_1)));	// 31444 mov     ax, offset aExp3_1 ; "exp3" ;~ 0FBC:2265
cs=0xfbc;eip=0x002268; 	X(PUSH(ax));	// 31445 push    ax ;~ 0FBC:2268
cs=0xfbc;eip=0x002269; 	X(PUSH(*(dw*)(((db*)&car2resptr)+2)));	// 31446 push    word ptr car2resptr+2 ;~ 0FBC:2269
cs=0xfbc;eip=0x00226d; 	X(PUSH(*(dw*)(((db*)&car2resptr))));	// 31447 push    word ptr car2resptr ;~ 0FBC:226D
cs=0xfbc;eip=0x002271; 	R(CALLF(locate_shape_fatal,0));	// 31448 call    locate_shape_fatal ;~ 0FBC:2271
cs=0xfbc;eip=0x002276; 	T(ADD(sp, 6));	// 31449 add     sp, 6 ;~ 0FBC:2276
cs=0xfbc;eip=0x002279; 	X(PUSH(dx));	// 31450 push    dx ;~ 0FBC:2279
cs=0xfbc;eip=0x00227a; 	X(PUSH(ax));	// 31451 push    ax ;~ 0FBC:227A
cs=0xfbc;eip=0x00227b; 	R(CALLF(shape3d_init_shape,0));	// 31452 call    shape3d_init_shape ;~ 0FBC:227B
cs=0xfbc;eip=0x002280; 	T(ADD(sp, 6));	// 31453 add     sp, 6 ;~ 0FBC:2280
cs=0xfbc;eip=0x002283; 	X(POP(si));	// 31454 pop     si ;~ 0FBC:2283
cs=0xfbc;eip=0x002284; 	X(POP(di));	// 31455 pop     di ;~ 0FBC:2284
cs=0xfbc;eip=0x002285; 	T(MOV(sp, bp));	// 31456 mov     sp, bp ;~ 0FBC:2285
cs=0xfbc;eip=0x002287; 	X(POP(bp));	// 31457 pop     bp ;~ 0FBC:2287
cs=0xfbc;eip=0x002288; 	R(RETF(0));	// 31458 retf ;~ 0FBC:2288
loc_2042a:
	// 6506 
cs=0xfbc;eip=0x00228a; 	T(SUB(ax, ax));	// 31463 sub     ax, ax ;~ 0FBC:228A
cs=0xfbc;eip=0x00228c; 	X(MOV(*(dw*)(((db*)&car2resptr)+2), ax));	// 31464 mov     word ptr car2resptr+2, ax ;~ 0FBC:228C
cs=0xfbc;eip=0x00228f; 	X(MOV(*(dw*)(((db*)&car2resptr)), ax));	// 31465 mov     word ptr car2resptr, ax ;~ 0FBC:228F
cs=0xfbc;eip=0x002292; 	X(POP(si));	// 31466 pop     si ;~ 0FBC:2292
cs=0xfbc;eip=0x002293; 	X(POP(di));	// 31467 pop     di ;~ 0FBC:2293
cs=0xfbc;eip=0x002294; 	T(MOV(sp, bp));	// 31468 mov     sp, bp ;~ 0FBC:2294
cs=0xfbc;eip=0x002296; 	X(POP(bp));	// 31469 pop     bp ;~ 0FBC:2296
cs=0xfbc;eip=0x002297; 	R(RETF(0));	// 31470 retf ;~ 0FBC:2297
shape3d_free_car_shapes:
	// 31477 
cs=0xfbc;eip=0x002298; 	T(MOV(ax, *(dw*)(((db*)&car2resptr))));	// 31479 mov     ax, word ptr car2resptr ;~ 0FBC:2298
ret_fbc_229b:
	// 6507 
cs=0xfbc;eip=0x00229b; 	T(OR(ax, *(dw*)(((db*)&car2resptr)+2)));	// 31480 or      ax, word ptr car2resptr+2 ;~ 0FBC:229B
cs=0xfbc;eip=0x00229f; 	R(JZ(loc_20477));	// 31481 jz      short loc_20477 ;~ 0FBC:229F
cs=0xfbc;eip=0x0022a1; 	T(MOV(ax, offset(dseg,oppcarshapevec)));	// 31482 mov     ax, offset oppcarshapevec ;~ 0FBC:22A1
cs=0xfbc;eip=0x0022a4; 	X(PUSH(ax));	// 31483 push    ax ;~ 0FBC:22A4
cs=0xfbc;eip=0x0022a5; 	T(MOV(ax, offset(dseg,oppcarshapevecs)));	// 31484 mov     ax, offset oppcarshapevecs ;~ 0FBC:22A5
cs=0xfbc;eip=0x0022a8; 	X(PUSH(ax));	// 31485 push    ax ;~ 0FBC:22A8
cs=0xfbc;eip=0x0022a9; 	T(MOV(ax, offset(dseg,word_4448a)));	// 31486 mov     ax, offset word_4448A ;~ 0FBC:22A9
cs=0xfbc;eip=0x0022ac; 	X(PUSH(ax));	// 31487 push    ax ;~ 0FBC:22AC
cs=0xfbc;eip=0x0022ad; 	T(MOV(ax, offset(dseg,unk_3e710)));	// 31488 mov     ax, offset unk_3E710 ;~ 0FBC:22AD
cs=0xfbc;eip=0x0022b0; 	X(PUSH(ax));	// 31489 push    ax ;~ 0FBC:22B0
cs=0xfbc;eip=0x0022b1; 	T(SUB(ax, ax));	// 31490 sub     ax, ax ;~ 0FBC:22B1
cs=0xfbc;eip=0x0022b3; 	X(PUSH(ax));	// 31491 push    ax ;~ 0FBC:22B3
cs=0xfbc;eip=0x0022b4; 	T(MOV(ax, word_438a8));	// 31492 mov     ax, word_438A8 ;~ 0FBC:22B4
cs=0xfbc;eip=0x0022b7; 	T(MOV(dx, word_438aa));	// 31493 mov     dx, word_438AA ;~ 0FBC:22B7
cs=0xfbc;eip=0x0022bb; 	T(ADD(ax, 0x30));	// 31494 add     ax, 30h ; '0' ;~ 0FBC:22BB
cs=0xfbc;eip=0x0022be; 	X(PUSH(dx));	// 31495 push    dx ;~ 0FBC:22BE
cs=0xfbc;eip=0x0022bf; 	X(PUSH(ax));	// 31496 push    ax ;~ 0FBC:22BF
cs=0xfbc;eip=0x0022c0; 	X(PUSH(cs));	// 31497 push    cs ;~ 0FBC:22C0
cs=0xfbc;eip=0x0022c1; 	R(CALL(sub_204ae,0));	// 31498 call    near ptr sub_204AE ;~ 0FBC:22C1
cs=0xfbc;eip=0x0022c4; 	T(ADD(sp, 0x0E));	// 31499 add     sp, 0Eh ;~ 0FBC:22C4
cs=0xfbc;eip=0x0022c7; 	X(PUSH(*(dw*)(((db*)&car2resptr)+2)));	// 31500 push    word ptr car2resptr+2 ;~ 0FBC:22C7
cs=0xfbc;eip=0x0022cb; 	X(PUSH(*(dw*)(((db*)&car2resptr))));	// 31501 push    word ptr car2resptr ;~ 0FBC:22CB
cs=0xfbc;eip=0x0022cf; 	R(CALLF(mmgr_release,0));	// 31502 call    mmgr_release ;~ 0FBC:22CF
cs=0xfbc;eip=0x0022d4; 	T(ADD(sp, 4));	// 31503 add     sp, 4 ;~ 0FBC:22D4
loc_20477:
	// 6508 
cs=0xfbc;eip=0x0022d7; 	T(MOV(ax, offset(dseg,carshapevec)));	// 31506 mov     ax, offset carshapevec ;~ 0FBC:22D7
cs=0xfbc;eip=0x0022da; 	X(PUSH(ax));	// 31507 push    ax ;~ 0FBC:22DA
cs=0xfbc;eip=0x0022db; 	T(MOV(ax, offset(dseg,carshapevecs)));	// 31508 mov     ax, offset carshapevecs ;~ 0FBC:22DB
cs=0xfbc;eip=0x0022de; 	X(PUSH(ax));	// 31509 push    ax ;~ 0FBC:22DE
cs=0xfbc;eip=0x0022df; 	T(MOV(ax, offset(dseg,word_443e8)));	// 31510 mov     ax, offset word_443E8 ;~ 0FBC:22DF
cs=0xfbc;eip=0x0022e2; 	X(PUSH(ax));	// 31511 push    ax ;~ 0FBC:22E2
cs=0xfbc;eip=0x0022e3; 	T(MOV(ax, offset(dseg,unk_3e710)));	// 31512 mov     ax, offset unk_3E710 ;~ 0FBC:22E3
cs=0xfbc;eip=0x0022e6; 	X(PUSH(ax));	// 31513 push    ax ;~ 0FBC:22E6
cs=0xfbc;eip=0x0022e7; 	T(SUB(ax, ax));	// 31514 sub     ax, ax ;~ 0FBC:22E7
cs=0xfbc;eip=0x0022e9; 	X(PUSH(ax));	// 31515 push    ax ;~ 0FBC:22E9
cs=0xfbc;eip=0x0022ea; 	T(MOV(ax, word_43892));	// 31516 mov     ax, word_43892 ;~ 0FBC:22EA
cs=0xfbc;eip=0x0022ed; 	T(MOV(dx, word_43894));	// 31517 mov     dx, word_43894 ;~ 0FBC:22ED
cs=0xfbc;eip=0x0022f1; 	T(ADD(ax, 0x30));	// 31518 add     ax, 30h ; '0' ;~ 0FBC:22F1
cs=0xfbc;eip=0x0022f4; 	X(PUSH(dx));	// 31519 push    dx ;~ 0FBC:22F4
cs=0xfbc;eip=0x0022f5; 	X(PUSH(ax));	// 31520 push    ax ;~ 0FBC:22F5
cs=0xfbc;eip=0x0022f6; 	X(PUSH(cs));	// 31521 push    cs ;~ 0FBC:22F6
cs=0xfbc;eip=0x0022f7; 	R(CALL(sub_204ae,0));	// 31522 call    near ptr sub_204AE ;~ 0FBC:22F7
cs=0xfbc;eip=0x0022fa; 	T(ADD(sp, 0x0E));	// 31523 add     sp, 0Eh ;~ 0FBC:22FA
cs=0xfbc;eip=0x0022fd; 	X(PUSH(*(dw*)(((db*)&carresptr)+2)));	// 31524 push    word ptr carresptr+2 ;~ 0FBC:22FD
cs=0xfbc;eip=0x002301; 	X(PUSH(*(dw*)(((db*)&carresptr))));	// 31525 push    word ptr carresptr ;~ 0FBC:2301
cs=0xfbc;eip=0x002305; 	R(CALLF(mmgr_free,0));	// 31526 call    mmgr_free ;~ 0FBC:2305
cs=0xfbc;eip=0x00230a; 	T(ADD(sp, 4));	// 31527 add     sp, 4 ;~ 0FBC:230A
cs=0xfbc;eip=0x00230d; 	R(RETF(0));	// 31528 retf ;~ 0FBC:230D
sub_204ae:
	// 31536 
#undef var_14
#define var_14 -0x14
	// 31539 var_14          = word ptr -14h ;~ 0FBC:230E
#undef var_12
#define var_12 -0x12
	// 31540 var_12          = word ptr -12h ;~ 0FBC:230E
#undef var_10
#define var_10 -0x10
	// 31541 var_10          = word ptr -10h ;~ 0FBC:230E
#undef var_e
#define var_e -0x0E
	// 31542 var_E           = word ptr -0Eh ;~ 0FBC:230E
#undef var_c
#define var_c -0x0C
	// 31543 var_C           = word ptr -0Ch ;~ 0FBC:230E
#undef var_8
#define var_8 -8
	// 31544 var_8           = word ptr -8 ;~ 0FBC:230E
#undef var_4
#define var_4 -4
	// 31545 var_4           = word ptr -4 ;~ 0FBC:230E
#undef var_2
#define var_2 -2
	// 31546 var_2           = word ptr -2 ;~ 0FBC:230E
#undef arg_0
#define arg_0 6
	// 31547 arg_0           = dword ptr  6 ;~ 0FBC:230E
#undef arg_4
#define arg_4 0x0A
	// 31548 arg_4           = word ptr  0Ah ;~ 0FBC:230E
#undef arg_6
#define arg_6 0x0C
	// 31549 arg_6           = word ptr  0Ch ;~ 0FBC:230E
#undef arg_8
#define arg_8 0x0E
	// 31550 arg_8           = word ptr  0Eh ;~ 0FBC:230E
#undef arg_a
#define arg_a 0x10
	// 31551 arg_A           = word ptr  10h ;~ 0FBC:230E
#undef arg_c
#define arg_c 0x12
	// 31552 arg_C           = word ptr  12h ;~ 0FBC:230E
ret_fbc_230e:
	// 6509 
cs=0xfbc;eip=0x00230e; 	X(PUSH(bp));	// 31554 push    bp ;~ 0FBC:230E
cs=0xfbc;eip=0x00230f; 	T(MOV(bp, sp));	// 31555 mov     bp, sp ;~ 0FBC:230F
cs=0xfbc;eip=0x002311; 	T(SUB(sp, 0x14));	// 31556 sub     sp, 14h ;~ 0FBC:2311
cs=0xfbc;eip=0x002314; 	X(PUSH(di));	// 31557 push    di ;~ 0FBC:2314
cs=0xfbc;eip=0x002315; 	X(PUSH(si));	// 31558 push    si ;~ 0FBC:2315
cs=0xfbc;eip=0x002316; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_8))));	// 31559 mov     bx, [bp+arg_8] ;~ 0FBC:2316
cs=0xfbc;eip=0x002319; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 31560 mov     ax, [bp+arg_4] ;~ 0FBC:2319
cs=0xfbc;eip=0x00231c; 	T(CMP(*(dw*)(raddr(ds,bx+8)), ax));	// 31561 cmp     [bx+8], ax ;~ 0FBC:231C
cs=0xfbc;eip=0x00231f; 	R(JNZ(loc_204c4));	// 31562 jnz     short loc_204C4 ;~ 0FBC:231F
cs=0xfbc;eip=0x002321; 	R(JMP(loc_2064c));	// 31563 jmp     loc_2064C ;~ 0FBC:2321
loc_204c4:
	// 6510 
cs=0xfbc;eip=0x002324; 	T(SAR(ax, 1));	// 31567 sar     ax, 1 ;~ 0FBC:2324
cs=0xfbc;eip=0x002326; 	X(PUSH(ax));	// 31568 push    ax ;~ 0FBC:2326
cs=0xfbc;eip=0x002327; 	R(CALLF(sin_fast,0));	// 31569 call    sin_fast ;~ 0FBC:2327
cs=0xfbc;eip=0x00232c; 	T(ADD(sp, 2));	// 31570 add     sp, 2 ;~ 0FBC:232C
cs=0xfbc;eip=0x00232f; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 31571 mov     [bp+var_C], ax ;~ 0FBC:232F
cs=0xfbc;eip=0x002332; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 31572 mov     ax, [bp+arg_4] ;~ 0FBC:2332
cs=0xfbc;eip=0x002335; 	T(SAR(ax, 1));	// 31573 sar     ax, 1 ;~ 0FBC:2335
cs=0xfbc;eip=0x002337; 	X(PUSH(ax));	// 31574 push    ax ;~ 0FBC:2337
cs=0xfbc;eip=0x002338; 	R(CALLF(cos_fast,0));	// 31575 call    cos_fast ;~ 0FBC:2338
cs=0xfbc;eip=0x00233d; 	T(ADD(sp, 2));	// 31576 add     sp, 2 ;~ 0FBC:233D
cs=0xfbc;eip=0x002340; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 31577 mov     [bp+var_2], ax ;~ 0FBC:2340
cs=0xfbc;eip=0x002343; 	T(SUB(si, si));	// 31578 sub     si, si ;~ 0FBC:2343
loc_204e5:
	// 6511 
cs=0xfbc;eip=0x002345; 	T(MOV(ax, si));	// 31581 mov     ax, si ;~ 0FBC:2345
cs=0xfbc;eip=0x002347; 	T(MOV(cx, ax));	// 31582 mov     cx, ax ;~ 0FBC:2347
cs=0xfbc;eip=0x002349; 	T(SHL(ax, 1));	// 31583 shl     ax, 1 ;~ 0FBC:2349
cs=0xfbc;eip=0x00234b; 	T(ADD(ax, cx));	// 31584 add     ax, cx ;~ 0FBC:234B
cs=0xfbc;eip=0x00234d; 	T(SHL(ax, 1));	// 31585 shl     ax, 1 ;~ 0FBC:234D
cs=0xfbc;eip=0x00234f; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 31586 mov     [bp+var_10], ax ;~ 0FBC:234F
cs=0xfbc;eip=0x002352; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 31587 push    [bp+var_2] ;~ 0FBC:2352
cs=0xfbc;eip=0x002355; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_a))));	// 31588 mov     bx, [bp+arg_A] ;~ 0FBC:2355
cs=0xfbc;eip=0x002358; 	T(MOV(ax, si));	// 31589 mov     ax, si ;~ 0FBC:2358
cs=0xfbc;eip=0x00235a; 	T(SHL(ax, 1));	// 31590 shl     ax, 1 ;~ 0FBC:235A
cs=0xfbc;eip=0x00235c; 	T(ADD(ax, cx));	// 31591 add     ax, cx ;~ 0FBC:235C
cs=0xfbc;eip=0x00235e; 	T(SHL(ax, 1));	// 31592 shl     ax, 1 ;~ 0FBC:235E
cs=0xfbc;eip=0x002360; 	T(ADD(bx, ax));	// 31593 add     bx, ax ;~ 0FBC:2360
cs=0xfbc;eip=0x002362; 	X(PUSH(*(dw*)(raddr(ds,bx+0))));	// 31594 push    word ptr [bx+0] ;~ 0FBC:2362
cs=0xfbc;eip=0x002364; 	R(CALLF(multiply_and_scale,0));	// 31595 call    multiply_and_scale ;~ 0FBC:2364
cs=0xfbc;eip=0x002369; 	T(ADD(sp, 4));	// 31596 add     sp, 4 ;~ 0FBC:2369
cs=0xfbc;eip=0x00236c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 31597 push    [bp+var_C] ;~ 0FBC:236C
cs=0xfbc;eip=0x00236f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_a))));	// 31598 mov     bx, [bp+arg_A] ;~ 0FBC:236F
cs=0xfbc;eip=0x002372; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_10))));	// 31599 add     bx, [bp+var_10] ;~ 0FBC:2372
cs=0xfbc;eip=0x002375; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 31600 push    word ptr [bx+4] ;~ 0FBC:2375
cs=0xfbc;eip=0x002378; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 31601 mov     [bp+var_14], ax ;~ 0FBC:2378
cs=0xfbc;eip=0x00237b; 	R(CALLF(multiply_and_scale,0));	// 31602 call    multiply_and_scale ;~ 0FBC:237B
cs=0xfbc;eip=0x002380; 	T(ADD(sp, 4));	// 31603 add     sp, 4 ;~ 0FBC:2380
cs=0xfbc;eip=0x002383; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_c))));	// 31604 mov     bx, [bp+arg_C] ;~ 0FBC:2383
cs=0xfbc;eip=0x002386; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0))));	// 31605 mov     cx, [bx+0] ;~ 0FBC:2386
cs=0xfbc;eip=0x002388; 	T(ADD(cx, ax));	// 31606 add     cx, ax ;~ 0FBC:2388
cs=0xfbc;eip=0x00238a; 	T(ADD(cx, *(dw*)(raddr(ss,bp+var_14))));	// 31607 add     cx, [bp+var_14] ;~ 0FBC:238A
cs=0xfbc;eip=0x00238d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 31608 les     bx, [bp+arg_0] ;~ 0FBC:238D
cs=0xfbc;eip=0x002390; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_10))));	// 31609 add     bx, [bp+var_10] ;~ 0FBC:2390
cs=0xfbc;eip=0x002393; 	X(MOV(*(dw*)(raddr(es,bx+0)), cx));	// 31610 mov     es:[bx+0], cx ;~ 0FBC:2393
cs=0xfbc;eip=0x002396; 	T(MOV(ax, si));	// 31611 mov     ax, si ;~ 0FBC:2396
cs=0xfbc;eip=0x002398; 	T(MOV(cx, ax));	// 31612 mov     cx, ax ;~ 0FBC:2398
cs=0xfbc;eip=0x00239a; 	T(SHL(ax, 1));	// 31613 shl     ax, 1 ;~ 0FBC:239A
cs=0xfbc;eip=0x00239c; 	T(ADD(ax, cx));	// 31614 add     ax, cx ;~ 0FBC:239C
cs=0xfbc;eip=0x00239e; 	T(SHL(ax, 1));	// 31615 shl     ax, 1 ;~ 0FBC:239E
cs=0xfbc;eip=0x0023a0; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 31616 mov     [bp+var_12], ax ;~ 0FBC:23A0
cs=0xfbc;eip=0x0023a3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 31617 push    [bp+var_2] ;~ 0FBC:23A3
cs=0xfbc;eip=0x0023a6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_a))));	// 31618 mov     bx, [bp+arg_A] ;~ 0FBC:23A6
cs=0xfbc;eip=0x0023a9; 	T(MOV(ax, si));	// 31619 mov     ax, si ;~ 0FBC:23A9
cs=0xfbc;eip=0x0023ab; 	T(SHL(ax, 1));	// 31620 shl     ax, 1 ;~ 0FBC:23AB
cs=0xfbc;eip=0x0023ad; 	T(ADD(ax, cx));	// 31621 add     ax, cx ;~ 0FBC:23AD
cs=0xfbc;eip=0x0023af; 	T(SHL(ax, 1));	// 31622 shl     ax, 1 ;~ 0FBC:23AF
cs=0xfbc;eip=0x0023b1; 	T(ADD(bx, ax));	// 31623 add     bx, ax ;~ 0FBC:23B1
cs=0xfbc;eip=0x0023b3; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 31624 push    word ptr [bx+4] ;~ 0FBC:23B3
cs=0xfbc;eip=0x0023b6; 	R(CALLF(multiply_and_scale,0));	// 31625 call    multiply_and_scale ;~ 0FBC:23B6
cs=0xfbc;eip=0x0023bb; 	T(ADD(sp, 4));	// 31626 add     sp, 4 ;~ 0FBC:23BB
cs=0xfbc;eip=0x0023be; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 31627 push    [bp+var_C] ;~ 0FBC:23BE
cs=0xfbc;eip=0x0023c1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_a))));	// 31628 mov     bx, [bp+arg_A] ;~ 0FBC:23C1
cs=0xfbc;eip=0x0023c4; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_12))));	// 31629 add     bx, [bp+var_12] ;~ 0FBC:23C4
cs=0xfbc;eip=0x0023c7; 	X(PUSH(*(dw*)(raddr(ds,bx+0))));	// 31630 push    word ptr [bx+0] ;~ 0FBC:23C7
cs=0xfbc;eip=0x0023c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 31631 mov     [bp+var_14], ax ;~ 0FBC:23C9
cs=0xfbc;eip=0x0023cc; 	R(CALLF(multiply_and_scale,0));	// 31632 call    multiply_and_scale ;~ 0FBC:23CC
cs=0xfbc;eip=0x0023d1; 	T(ADD(sp, 4));	// 31633 add     sp, 4 ;~ 0FBC:23D1
cs=0xfbc;eip=0x0023d4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_c))));	// 31634 mov     bx, [bp+arg_C] ;~ 0FBC:23D4
cs=0xfbc;eip=0x0023d7; 	T(MOV(cx, *(dw*)(raddr(ds,bx+4))));	// 31635 mov     cx, [bx+4] ;~ 0FBC:23D7
cs=0xfbc;eip=0x0023da; 	T(ADD(cx, ax));	// 31636 add     cx, ax ;~ 0FBC:23DA
cs=0xfbc;eip=0x0023dc; 	T(ADD(cx, *(dw*)(raddr(ss,bp+var_14))));	// 31637 add     cx, [bp+var_14] ;~ 0FBC:23DC
cs=0xfbc;eip=0x0023df; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 31638 les     bx, [bp+arg_0] ;~ 0FBC:23DF
cs=0xfbc;eip=0x0023e2; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_12))));	// 31639 add     bx, [bp+var_12] ;~ 0FBC:23E2
cs=0xfbc;eip=0x0023e5; 	X(MOV(*(dw*)(raddr(es,bx+4)), cx));	// 31640 mov     es:[bx+4], cx ;~ 0FBC:23E5
cs=0xfbc;eip=0x0023e9; 	T(INC(si));	// 31641 inc     si ;~ 0FBC:23E9
cs=0xfbc;eip=0x0023ea; 	T(CMP(si, 6));	// 31642 cmp     si, 6 ;~ 0FBC:23EA
cs=0xfbc;eip=0x0023ed; 	R(JGE(loc_20592));	// 31643 jge     short loc_20592 ;~ 0FBC:23ED
cs=0xfbc;eip=0x0023ef; 	R(JMP(loc_204e5));	// 31644 jmp     loc_204E5 ;~ 0FBC:23EF
loc_20592:
	// 6512 
cs=0xfbc;eip=0x0023f2; 	T(MOV(si, 6));	// 31648 mov     si, 6 ;~ 0FBC:23F2
loc_20595:
	// 6513 
cs=0xfbc;eip=0x0023f5; 	T(MOV(ax, si));	// 31651 mov     ax, si ;~ 0FBC:23F5
cs=0xfbc;eip=0x0023f7; 	T(MOV(cx, ax));	// 31652 mov     cx, ax ;~ 0FBC:23F7
cs=0xfbc;eip=0x0023f9; 	T(SHL(ax, 1));	// 31653 shl     ax, 1 ;~ 0FBC:23F9
cs=0xfbc;eip=0x0023fb; 	T(ADD(ax, cx));	// 31654 add     ax, cx ;~ 0FBC:23FB
cs=0xfbc;eip=0x0023fd; 	T(SHL(ax, 1));	// 31655 shl     ax, 1 ;~ 0FBC:23FD
cs=0xfbc;eip=0x0023ff; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 31656 mov     [bp+var_14], ax ;~ 0FBC:23FF
cs=0xfbc;eip=0x002402; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 31657 push    [bp+var_2] ;~ 0FBC:2402
cs=0xfbc;eip=0x002405; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_a))));	// 31658 mov     bx, [bp+arg_A] ;~ 0FBC:2405
cs=0xfbc;eip=0x002408; 	T(MOV(ax, si));	// 31659 mov     ax, si ;~ 0FBC:2408
cs=0xfbc;eip=0x00240a; 	T(SHL(ax, 1));	// 31660 shl     ax, 1 ;~ 0FBC:240A
cs=0xfbc;eip=0x00240c; 	T(ADD(ax, cx));	// 31661 add     ax, cx ;~ 0FBC:240C
cs=0xfbc;eip=0x00240e; 	T(SHL(ax, 1));	// 31662 shl     ax, 1 ;~ 0FBC:240E
cs=0xfbc;eip=0x002410; 	T(ADD(bx, ax));	// 31663 add     bx, ax ;~ 0FBC:2410
cs=0xfbc;eip=0x002412; 	X(PUSH(*(dw*)(raddr(ds,bx+0))));	// 31664 push    word ptr [bx+0] ;~ 0FBC:2412
cs=0xfbc;eip=0x002414; 	R(CALLF(multiply_and_scale,0));	// 31665 call    multiply_and_scale ;~ 0FBC:2414
cs=0xfbc;eip=0x002419; 	T(ADD(sp, 4));	// 31666 add     sp, 4 ;~ 0FBC:2419
cs=0xfbc;eip=0x00241c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 31667 push    [bp+var_C] ;~ 0FBC:241C
cs=0xfbc;eip=0x00241f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_a))));	// 31668 mov     bx, [bp+arg_A] ;~ 0FBC:241F
cs=0xfbc;eip=0x002422; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 31669 add     bx, [bp+var_14] ;~ 0FBC:2422
cs=0xfbc;eip=0x002425; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 31670 push    word ptr [bx+4] ;~ 0FBC:2425
cs=0xfbc;eip=0x002428; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 31671 mov     [bp+var_10], ax ;~ 0FBC:2428
cs=0xfbc;eip=0x00242b; 	R(CALLF(multiply_and_scale,0));	// 31672 call    multiply_and_scale ;~ 0FBC:242B
cs=0xfbc;eip=0x002430; 	T(ADD(sp, 4));	// 31673 add     sp, 4 ;~ 0FBC:2430
cs=0xfbc;eip=0x002433; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_c))));	// 31674 mov     bx, [bp+arg_C] ;~ 0FBC:2433
cs=0xfbc;eip=0x002436; 	T(MOV(cx, *(dw*)(raddr(ds,bx+6))));	// 31675 mov     cx, [bx+6] ;~ 0FBC:2436
cs=0xfbc;eip=0x002439; 	T(ADD(cx, ax));	// 31676 add     cx, ax ;~ 0FBC:2439
cs=0xfbc;eip=0x00243b; 	T(ADD(cx, *(dw*)(raddr(ss,bp+var_10))));	// 31677 add     cx, [bp+var_10] ;~ 0FBC:243B
cs=0xfbc;eip=0x00243e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 31678 les     bx, [bp+arg_0] ;~ 0FBC:243E
cs=0xfbc;eip=0x002441; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 31679 add     bx, [bp+var_14] ;~ 0FBC:2441
cs=0xfbc;eip=0x002444; 	X(MOV(*(dw*)(raddr(es,bx+0)), cx));	// 31680 mov     es:[bx+0], cx ;~ 0FBC:2444
cs=0xfbc;eip=0x002447; 	T(MOV(ax, si));	// 31681 mov     ax, si ;~ 0FBC:2447
cs=0xfbc;eip=0x002449; 	T(MOV(cx, ax));	// 31682 mov     cx, ax ;~ 0FBC:2449
cs=0xfbc;eip=0x00244b; 	T(SHL(ax, 1));	// 31683 shl     ax, 1 ;~ 0FBC:244B
cs=0xfbc;eip=0x00244d; 	T(ADD(ax, cx));	// 31684 add     ax, cx ;~ 0FBC:244D
cs=0xfbc;eip=0x00244f; 	T(SHL(ax, 1));	// 31685 shl     ax, 1 ;~ 0FBC:244F
cs=0xfbc;eip=0x002451; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 31686 mov     [bp+var_12], ax ;~ 0FBC:2451
cs=0xfbc;eip=0x002454; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 31687 push    [bp+var_2] ;~ 0FBC:2454
cs=0xfbc;eip=0x002457; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_a))));	// 31688 mov     bx, [bp+arg_A] ;~ 0FBC:2457
cs=0xfbc;eip=0x00245a; 	T(MOV(ax, si));	// 31689 mov     ax, si ;~ 0FBC:245A
cs=0xfbc;eip=0x00245c; 	T(SHL(ax, 1));	// 31690 shl     ax, 1 ;~ 0FBC:245C
cs=0xfbc;eip=0x00245e; 	T(ADD(ax, cx));	// 31691 add     ax, cx ;~ 0FBC:245E
cs=0xfbc;eip=0x002460; 	T(SHL(ax, 1));	// 31692 shl     ax, 1 ;~ 0FBC:2460
cs=0xfbc;eip=0x002462; 	T(ADD(bx, ax));	// 31693 add     bx, ax ;~ 0FBC:2462
cs=0xfbc;eip=0x002464; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 31694 push    word ptr [bx+4] ;~ 0FBC:2464
cs=0xfbc;eip=0x002467; 	R(CALLF(multiply_and_scale,0));	// 31695 call    multiply_and_scale ;~ 0FBC:2467
cs=0xfbc;eip=0x00246c; 	T(ADD(sp, 4));	// 31696 add     sp, 4 ;~ 0FBC:246C
cs=0xfbc;eip=0x00246f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 31697 push    [bp+var_C] ;~ 0FBC:246F
cs=0xfbc;eip=0x002472; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_a))));	// 31698 mov     bx, [bp+arg_A] ;~ 0FBC:2472
cs=0xfbc;eip=0x002475; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_12))));	// 31699 add     bx, [bp+var_12] ;~ 0FBC:2475
cs=0xfbc;eip=0x002478; 	X(PUSH(*(dw*)(raddr(ds,bx+0))));	// 31700 push    word ptr [bx+0] ;~ 0FBC:2478
cs=0xfbc;eip=0x00247a; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 31701 mov     [bp+var_10], ax ;~ 0FBC:247A
cs=0xfbc;eip=0x00247d; 	R(CALLF(multiply_and_scale,0));	// 31702 call    multiply_and_scale ;~ 0FBC:247D
cs=0xfbc;eip=0x002482; 	T(ADD(sp, 4));	// 31703 add     sp, 4 ;~ 0FBC:2482
cs=0xfbc;eip=0x002485; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_c))));	// 31704 mov     bx, [bp+arg_C] ;~ 0FBC:2485
cs=0xfbc;eip=0x002488; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x0A))));	// 31705 mov     cx, [bx+0Ah] ;~ 0FBC:2488
cs=0xfbc;eip=0x00248b; 	T(ADD(cx, ax));	// 31706 add     cx, ax ;~ 0FBC:248B
cs=0xfbc;eip=0x00248d; 	T(ADD(cx, *(dw*)(raddr(ss,bp+var_10))));	// 31707 add     cx, [bp+var_10] ;~ 0FBC:248D
cs=0xfbc;eip=0x002490; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 31708 les     bx, [bp+arg_0] ;~ 0FBC:2490
cs=0xfbc;eip=0x002493; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_12))));	// 31709 add     bx, [bp+var_12] ;~ 0FBC:2493
cs=0xfbc;eip=0x002496; 	X(MOV(*(dw*)(raddr(es,bx+4)), cx));	// 31710 mov     es:[bx+4], cx ;~ 0FBC:2496
cs=0xfbc;eip=0x00249a; 	T(INC(si));	// 31711 inc     si ;~ 0FBC:249A
cs=0xfbc;eip=0x00249b; 	T(CMP(si, 0x0C));	// 31712 cmp     si, 0Ch ;~ 0FBC:249B
cs=0xfbc;eip=0x00249e; 	R(JGE(loc_20643));	// 31713 jge     short loc_20643 ;~ 0FBC:249E
cs=0xfbc;eip=0x0024a0; 	R(JMP(loc_20595));	// 31714 jmp     loc_20595 ;~ 0FBC:24A0
loc_20643:
	// 6514 
cs=0xfbc;eip=0x0024a3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_8))));	// 31718 mov     bx, [bp+arg_8] ;~ 0FBC:24A3
cs=0xfbc;eip=0x0024a6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 31719 mov     ax, [bp+arg_4] ;~ 0FBC:24A6
cs=0xfbc;eip=0x0024a9; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 31720 mov     [bx+8], ax ;~ 0FBC:24A9
loc_2064c:
	// 6515 
cs=0xfbc;eip=0x0024ac; 	T(SUB(di, di));	// 31723 sub     di, di ;~ 0FBC:24AC
cs=0xfbc;eip=0x0024ae; 	R(JMP(loc_20687));	// 31724 jmp     short loc_20687 ;~ 0FBC:24AE
loc_20650:
	// 6516 
cs=0xfbc;eip=0x0024b0; 	T(MOV(ax, si));	// 31728 mov     ax, si ;~ 0FBC:24B0
cs=0xfbc;eip=0x0024b2; 	T(MOV(cx, ax));	// 31729 mov     cx, ax ;~ 0FBC:24B2
cs=0xfbc;eip=0x0024b4; 	T(SHL(ax, 1));	// 31730 shl     ax, 1 ;~ 0FBC:24B4
cs=0xfbc;eip=0x0024b6; 	T(ADD(ax, cx));	// 31731 add     ax, cx ;~ 0FBC:24B6
cs=0xfbc;eip=0x0024b8; 	T(SHL(ax, 1));	// 31732 shl     ax, 1 ;~ 0FBC:24B8
cs=0xfbc;eip=0x0024ba; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 31733 mov     [bp+var_14], ax ;~ 0FBC:24BA
cs=0xfbc;eip=0x0024bd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_a))));	// 31734 mov     bx, [bp+arg_A] ;~ 0FBC:24BD
cs=0xfbc;eip=0x0024c0; 	T(ADD(bx, ax));	// 31735 add     bx, ax ;~ 0FBC:24C0
cs=0xfbc;eip=0x0024c2; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 31736 mov     ax, [bx+2] ;~ 0FBC:24C2
cs=0xfbc;eip=0x0024c5; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_8))));	// 31737 sub     ax, [bp+var_8] ;~ 0FBC:24C5
cs=0xfbc;eip=0x0024c8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 31738 les     bx, [bp+arg_0] ;~ 0FBC:24C8
cs=0xfbc;eip=0x0024cb; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 31739 add     bx, [bp+var_14] ;~ 0FBC:24CB
cs=0xfbc;eip=0x0024ce; 	X(MOV(*(dw*)(raddr(es,bx+2)), ax));	// 31740 mov     es:[bx+2], ax ;~ 0FBC:24CE
cs=0xfbc;eip=0x0024d2; 	T(INC(si));	// 31741 inc     si ;~ 0FBC:24D2
loc_20673:
	// 6517 
cs=0xfbc;eip=0x0024d3; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), si));	// 31744 cmp     [bp+var_4], si ;~ 0FBC:24D3
cs=0xfbc;eip=0x0024d6; 	R(JG(loc_20650));	// 31745 jg      short loc_20650 ;~ 0FBC:24D6
cs=0xfbc;eip=0x0024d8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_8))));	// 31746 mov     bx, [bp+arg_8] ;~ 0FBC:24D8
cs=0xfbc;eip=0x0024db; 	T(MOV(ax, di));	// 31747 mov     ax, di ;~ 0FBC:24DB
cs=0xfbc;eip=0x0024dd; 	T(SHL(ax, 1));	// 31748 shl     ax, 1 ;~ 0FBC:24DD
cs=0xfbc;eip=0x0024df; 	T(ADD(bx, ax));	// 31749 add     bx, ax ;~ 0FBC:24DF
cs=0xfbc;eip=0x0024e1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 31750 mov     ax, [bp+var_8] ;~ 0FBC:24E1
cs=0xfbc;eip=0x0024e4; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 31751 mov     [bx], ax ;~ 0FBC:24E4
loc_20686:
	// 6518 
cs=0xfbc;eip=0x0024e6; 	T(INC(di));	// 31754 inc     di ;~ 0FBC:24E6
loc_20687:
	// 6519 
cs=0xfbc;eip=0x0024e7; 	T(CMP(di, 4));	// 31757 cmp     di, 4 ;~ 0FBC:24E7
cs=0xfbc;eip=0x0024ea; 	R(JGE(loc_206ce));	// 31758 jge     short loc_206CE ;~ 0FBC:24EA
cs=0xfbc;eip=0x0024ec; 	T(MOV(ax, di));	// 31759 mov     ax, di ;~ 0FBC:24EC
cs=0xfbc;eip=0x0024ee; 	T(SHL(ax, 1));	// 31760 shl     ax, 1 ;~ 0FBC:24EE
cs=0xfbc;eip=0x0024f0; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 31761 mov     [bp+var_14], ax ;~ 0FBC:24F0
cs=0xfbc;eip=0x0024f3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 31762 mov     bx, [bp+arg_6] ;~ 0FBC:24F3
cs=0xfbc;eip=0x0024f6; 	T(ADD(bx, ax));	// 31763 add     bx, ax ;~ 0FBC:24F6
cs=0xfbc;eip=0x0024f8; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 31764 mov     ax, [bx] ;~ 0FBC:24F8
cs=0xfbc;eip=0x0024fa; 	T(CWD);	// 31765 cwd ;~ 0FBC:24FA
cs=0xfbc;eip=0x0024fb; 	T(XOR(ax, dx));	// 31766 xor     ax, dx ;~ 0FBC:24FB
cs=0xfbc;eip=0x0024fd; 	T(SUB(ax, dx));	// 31767 sub     ax, dx ;~ 0FBC:24FD
cs=0xfbc;eip=0x0024ff; 	T(MOV(cx, 6));	// 31768 mov     cx, 6 ;~ 0FBC:24FF
cs=0xfbc;eip=0x002502; 	T(SAR(ax, cl));	// 31769 sar     ax, cl ;~ 0FBC:2502
cs=0xfbc;eip=0x002504; 	T(XOR(ax, dx));	// 31770 xor     ax, dx ;~ 0FBC:2504
cs=0xfbc;eip=0x002506; 	T(SUB(ax, dx));	// 31771 sub     ax, dx ;~ 0FBC:2506
cs=0xfbc;eip=0x002508; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 31772 mov     [bp+var_8], ax ;~ 0FBC:2508
cs=0xfbc;eip=0x00250b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_8))));	// 31773 mov     bx, [bp+arg_8] ;~ 0FBC:250B
cs=0xfbc;eip=0x00250e; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_14))));	// 31774 add     bx, [bp+var_14] ;~ 0FBC:250E
cs=0xfbc;eip=0x002511; 	T(CMP(*(dw*)(raddr(ds,bx)), ax));	// 31775 cmp     [bx], ax ;~ 0FBC:2511
cs=0xfbc;eip=0x002513; 	R(JZ(loc_20686));	// 31776 jz      short loc_20686 ;~ 0FBC:2513
cs=0xfbc;eip=0x002515; 	T(MOV(ax, di));	// 31777 mov     ax, di ;~ 0FBC:2515
cs=0xfbc;eip=0x002517; 	T(MOV(cx, ax));	// 31778 mov     cx, ax ;~ 0FBC:2517
cs=0xfbc;eip=0x002519; 	T(SHL(ax, 1));	// 31779 shl     ax, 1 ;~ 0FBC:2519
cs=0xfbc;eip=0x00251b; 	T(ADD(ax, cx));	// 31780 add     ax, cx ;~ 0FBC:251B
cs=0xfbc;eip=0x00251d; 	T(SHL(ax, 1));	// 31781 shl     ax, 1 ;~ 0FBC:251D
cs=0xfbc;eip=0x00251f; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 31782 mov     [bp+var_E], ax ;~ 0FBC:251F
cs=0xfbc;eip=0x002522; 	T(ADD(ax, 6));	// 31783 add     ax, 6 ;~ 0FBC:2522
cs=0xfbc;eip=0x002525; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 31784 mov     [bp+var_4], ax ;~ 0FBC:2525
cs=0xfbc;eip=0x002528; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_e))));	// 31785 mov     si, [bp+var_E] ;~ 0FBC:2528
cs=0xfbc;eip=0x00252b; 	R(JMP(loc_20673));	// 31786 jmp     short loc_20673 ;~ 0FBC:252B
loc_206ce:
	// 6520 
cs=0xfbc;eip=0x00252e; 	X(POP(si));	// 31791 pop     si ;~ 0FBC:252E
cs=0xfbc;eip=0x00252f; 	X(POP(di));	// 31792 pop     di ;~ 0FBC:252F
cs=0xfbc;eip=0x002530; 	T(MOV(sp, bp));	// 31793 mov     sp, bp ;~ 0FBC:2530
cs=0xfbc;eip=0x002532; 	X(POP(bp));	// 31794 pop     bp ;~ 0FBC:2532
cs=0xfbc;eip=0x002533; 	R(RETF(0));	// 31795 retf ;~ 0FBC:2533
track_setup:
	// 31803 
#undef var_af0
#define var_af0 -0x0AF0
	// 31806 var_AF0         = dword ptr -0AF0h ;~ 0FBC:2534
#undef var_aec
#define var_aec -0x0AEC
	// 31807 var_AEC         = word ptr -0AECh ;~ 0FBC:2534
#undef var_aea
#define var_aea -0x0AEA
	// 31808 var_AEA         = word ptr -0AEAh ;~ 0FBC:2534
#undef var_ae8
#define var_ae8 -0x0AE8
	// 31809 var_AE8         = byte ptr -0AE8h ;~ 0FBC:2534
#undef var_ae6
#define var_ae6 -0x0AE6
	// 31810 var_AE6         = byte ptr -0AE6h ;~ 0FBC:2534
#undef var_ae4
#define var_ae4 -0x0AE4
	// 31811 var_AE4         = byte ptr -0AE4h ;~ 0FBC:2534
#undef var_ae2
#define var_ae2 -0x0AE2
	// 31812 var_AE2         = word ptr -0AE2h ;~ 0FBC:2534
#undef var_ae0
#define var_ae0 -0x0AE0
	// 31813 var_AE0         = word ptr -0AE0h ;~ 0FBC:2534
#undef var_ade
#define var_ade -0x0ADE
	// 31814 var_ADE         = word ptr -0ADEh ;~ 0FBC:2534
#undef var_adc
#define var_adc -0x0ADC
	// 31815 var_ADC         = word ptr -0ADCh ;~ 0FBC:2534
#undef var_ada
#define var_ada -0x0ADA
	// 31816 var_ADA         = word ptr -0ADAh ;~ 0FBC:2534
#undef var_ad8
#define var_ad8 -0x0AD8
	// 31817 var_AD8         = word ptr -0AD8h ;~ 0FBC:2534
#undef var_ad6
#define var_ad6 -0x0AD6
	// 31818 var_AD6         = word ptr -0AD6h ;~ 0FBC:2534
#undef var_ad4
#define var_ad4 -0x0AD4
	// 31819 var_AD4         = byte ptr -0AD4h ;~ 0FBC:2534
#undef var_74e
#define var_74e -0x74E
	// 31820 var_74E         = byte ptr -74Eh ;~ 0FBC:2534
#undef var_74c
#define var_74c -0x74C
	// 31821 var_74C         = byte ptr -74Ch ;~ 0FBC:2534
#undef var_74a
#define var_74a -0x74A
	// 31822 var_74A         = word ptr -74Ah ;~ 0FBC:2534
#undef var_748
#define var_748 -0x748
	// 31823 var_748         = word ptr -748h ;~ 0FBC:2534
#undef var_746
#define var_746 -0x746
	// 31824 var_746         = byte ptr -746h ;~ 0FBC:2534
#undef var_744
#define var_744 -0x744
	// 31825 var_744         = byte ptr -744h ;~ 0FBC:2534
#undef var_742
#define var_742 -0x742
	// 31826 var_742         = byte ptr -742h ;~ 0FBC:2534
#undef var_740
#define var_740 -0x740
	// 31827 var_740         = byte ptr -740h ;~ 0FBC:2534
#undef var_73e
#define var_73e -0x73E
	// 31828 var_73E         = byte ptr -73Eh ;~ 0FBC:2534
#undef var_73a
#define var_73a -0x73A
	// 31829 var_73A         = byte ptr -73Ah ;~ 0FBC:2534
#undef var_738
#define var_738 -0x738
	// 31830 var_738         = byte ptr -738h ;~ 0FBC:2534
#undef var_3b0
#define var_3b0 -0x3B0
	// 31831 var_3B0         = byte ptr -3B0h ;~ 0FBC:2534
#undef var_3ae
#define var_3ae -0x3AE
	// 31832 var_3AE         = word ptr -3AEh ;~ 0FBC:2534
#undef var_3ac
#define var_3ac -0x3AC
	// 31833 var_3AC         = word ptr -3ACh ;~ 0FBC:2534
#undef var_3aa
#define var_3aa -0x3AA
	// 31834 var_3AA         = byte ptr -3AAh ;~ 0FBC:2534
#undef var_3a8
#define var_3a8 -0x3A8
	// 31835 var_3A8         = byte ptr -3A8h ;~ 0FBC:2534
#undef var_3a6
#define var_3a6 -0x3A6
	// 31836 var_3A6         = byte ptr -3A6h ;~ 0FBC:2534
#undef var_3a4
#define var_3a4 -0x3A4
	// 31837 var_3A4         = byte ptr -3A4h ;~ 0FBC:2534
#undef var_3a2
#define var_3a2 -0x3A2
	// 31838 var_3A2         = word ptr -3A2h ;~ 0FBC:2534
#undef var_3a0
#define var_3a0 -0x3A0
	// 31839 var_3A0         = dword ptr -3A0h ;~ 0FBC:2534
#undef var_39c
#define var_39c -0x39C
	// 31840 var_39C         = word ptr -39Ch ;~ 0FBC:2534
#undef var_39a
#define var_39a -0x39A
	// 31841 var_39A         = byte ptr -39Ah ;~ 0FBC:2534
#undef var_398
#define var_398 -0x398
	// 31842 var_398         = byte ptr -398h ;~ 0FBC:2534
#undef var_12
#define var_12 -0x12
	// 31843 var_12          = byte ptr -12h ;~ 0FBC:2534
#undef var_10
#define var_10 -0x10
	// 31844 var_10          = byte ptr -10h ;~ 0FBC:2534
#undef var_e
#define var_e -0x0E
	// 31845 var_E           = byte ptr -0Eh ;~ 0FBC:2534
#undef var_c
#define var_c -0x0C
	// 31846 var_C           = word ptr -0Ch ;~ 0FBC:2534
#undef var_a
#define var_a -0x0A
	// 31847 var_A           = word ptr -0Ah ;~ 0FBC:2534
#undef var_8
#define var_8 -8
	// 31848 var_8           = word ptr -8 ;~ 0FBC:2534
#undef var_6
#define var_6 -6
	// 31849 var_6           = byte ptr -6 ;~ 0FBC:2534
#undef var_4
#define var_4 -4
	// 31850 var_4           = byte ptr -4 ;~ 0FBC:2534
#undef var_2
#define var_2 -2
	// 31851 var_2           = byte ptr -2 ;~ 0FBC:2534
ret_fbc_2534:
	// 6521 
cs=0xfbc;eip=0x002534; 	X(PUSH(bp));	// 31853 push    bp ;~ 0FBC:2534
cs=0xfbc;eip=0x002535; 	T(MOV(bp, sp));	// 31854 mov     bp, sp ;~ 0FBC:2535
cs=0xfbc;eip=0x002537; 	T(SUB(sp, 0x0AF0));	// 31855 sub     sp, 0AF0h ;~ 0FBC:2537
cs=0xfbc;eip=0x00253b; 	X(PUSH(di));	// 31856 push    di ;~ 0FBC:253B
cs=0xfbc;eip=0x00253c; 	X(PUSH(si));	// 31857 push    si ;~ 0FBC:253C
cs=0xfbc;eip=0x00253d; 	T(MOV(ax, 0x380));	// 31858 mov     ax, 380h ;~ 0FBC:253D
cs=0xfbc;eip=0x002540; 	T(CWD);	// 31859 cwd ;~ 0FBC:2540
cs=0xfbc;eip=0x002541; 	X(PUSH(dx));	// 31860 push    dx ;~ 0FBC:2541
cs=0xfbc;eip=0x002542; 	X(PUSH(ax));	// 31861 push    ax ;~ 0FBC:2542
cs=0xfbc;eip=0x002543; 	T(MOV(ax, offset(dseg,atcomp)));	// 31862 mov     ax, offset aTcomp ; "tcomp" ;~ 0FBC:2543
cs=0xfbc;eip=0x002546; 	X(PUSH(ax));	// 31863 push    ax ;~ 0FBC:2546
cs=0xfbc;eip=0x002547; 	R(CALLF(mmgr_alloc_resbytes,0));	// 31864 call    mmgr_alloc_resbytes ;~ 0FBC:2547
cs=0xfbc;eip=0x00254c; 	T(ADD(sp, 6));	// 31865 add     sp, 6 ;~ 0FBC:254C
cs=0xfbc;eip=0x00254f; 	X(MOV(*(dw*)(raddr(ss,bp+var_ae2)), ax));	// 31866 mov     [bp+var_AE2], ax ;~ 0FBC:254F
cs=0xfbc;eip=0x002553; 	X(MOV(*(dw*)(raddr(ss,bp+var_ae0)), dx));	// 31867 mov     [bp+var_AE0], dx ;~ 0FBC:2553
cs=0xfbc;eip=0x002557; 	T(OR(ax, dx));	// 31868 or      ax, dx ;~ 0FBC:2557
cs=0xfbc;eip=0x002559; 	R(JNZ(loc_20704));	// 31869 jnz     short loc_20704 ;~ 0FBC:2559
cs=0xfbc;eip=0x00255b; 	T(MOV(ax, 2));	// 31870 mov     ax, 2 ;~ 0FBC:255B
cs=0xfbc;eip=0x00255e; 	X(POP(si));	// 31871 pop     si ;~ 0FBC:255E
cs=0xfbc;eip=0x00255f; 	X(POP(di));	// 31872 pop     di ;~ 0FBC:255F
cs=0xfbc;eip=0x002560; 	T(MOV(sp, bp));	// 31873 mov     sp, bp ;~ 0FBC:2560
cs=0xfbc;eip=0x002562; 	X(POP(bp));	// 31874 pop     bp ;~ 0FBC:2562
cs=0xfbc;eip=0x002563; 	R(RETF(0));	// 31875 retf ;~ 0FBC:2563
loc_20704:
	// 6522 
cs=0xfbc;eip=0x002564; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ae2))));	// 31879 mov     ax, [bp+var_AE2] ;~ 0FBC:2564
cs=0xfbc;eip=0x002568; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_ae0))));	// 31880 mov     dx, [bp+var_AE0] ;~ 0FBC:2568
cs=0xfbc;eip=0x00256c; 	X(MOV(*(dw*)(raddr(ss,bp+var_74a)), ax));	// 31881 mov     [bp+var_74A], ax ;~ 0FBC:256C
cs=0xfbc;eip=0x002570; 	X(MOV(*(dw*)(raddr(ss,bp+var_748)), dx));	// 31882 mov     [bp+var_748], dx ;~ 0FBC:2570
cs=0xfbc;eip=0x002574; 	X(MOV(*(raddr(ss,bp+var_3a6)), 0));	// 31883 mov     [bp+var_3A6], 0 ;~ 0FBC:2574
cs=0xfbc;eip=0x002579; 	X(MOV(*(raddr(ss,bp+var_4)), 0));	// 31884 mov     [bp+var_4], 0 ;~ 0FBC:2579
cs=0xfbc;eip=0x00257d; 	X(MOV(track_pieces_counter, 0));	// 31885 mov     track_pieces_counter, 0 ;~ 0FBC:257D
cs=0xfbc;eip=0x002583; 	T(SUB(si, si));	// 31886 sub     si, si ;~ 0FBC:2583
loc_20725:
	// 6523 
cs=0xfbc;eip=0x002585; 	T(LES(bx, trackdata19));	// 31889 les     bx, trackdata19 ;~ 0FBC:2585
cs=0xfbc;eip=0x002589; 	X(MOV(*(raddr(es,bx+si)), 0x0FF));	// 31890 mov     byte ptr es:[bx+si], 0FFh ;~ 0FBC:2589
cs=0xfbc;eip=0x00258d; 	T(INC(si));	// 31891 inc     si ;~ 0FBC:258D
cs=0xfbc;eip=0x00258e; 	T(CMP(si, 0x385));	// 31892 cmp     si, 385h ;~ 0FBC:258E
cs=0xfbc;eip=0x002592; 	R(JL(loc_20725));	// 31893 jl      short loc_20725 ;~ 0FBC:2592
cs=0xfbc;eip=0x002594; 	X(MOV(*(raddr(ss,bp+var_73a)), 0));	// 31894 mov     [bp+var_73A], 0 ;~ 0FBC:2594
cs=0xfbc;eip=0x002599; 	R(JMP(loc_207a4));	// 31895 jmp     short loc_207A4 ;~ 0FBC:2599
loc_2073c:
	// 6524 
cs=0xfbc;eip=0x00259c; 	T(MOV(bl, *(raddr(ss,bp+var_74e))));	// 31901 mov     bl, [bp+var_74E] ;~ 0FBC:259C
cs=0xfbc;eip=0x0025a0; 	T(SUB(bh, bh));	// 31902 sub     bh, bh ;~ 0FBC:25A0
cs=0xfbc;eip=0x0025a2; 	T(MOV(al, *((terrconndatawtoe)+bx)));	// 31903 mov     al, terrConnDataWtoE[bx] ;~ 0FBC:25A2
cs=0xfbc;eip=0x0025a6; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 31904 mov     [bp+var_12], al ;~ 0FBC:25A6
cs=0xfbc;eip=0x0025a9; 	X(INC(*(raddr(ss,bp+var_3a4))));	// 31905 inc     [bp+var_3A4] ;~ 0FBC:25A9
loc_2074d:
	// 6525 
cs=0xfbc;eip=0x0025ad; 	T(CMP(*(raddr(ss,bp+var_3a4)), 0x1E));	// 31908 cmp     [bp+var_3A4], 1Eh ;~ 0FBC:25AD
cs=0xfbc;eip=0x0025b2; 	R(JGE(loc_207a0));	// 31909 jge     short loc_207A0 ;~ 0FBC:25B2
cs=0xfbc;eip=0x0025b4; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 31910 mov     al, [bp+var_73A] ;~ 0FBC:25B4
cs=0xfbc;eip=0x0025b8; 	T(CBW);	// 31911 cbw ;~ 0FBC:25B8
cs=0xfbc;eip=0x0025b9; 	T(MOV(bx, ax));	// 31912 mov     bx, ax ;~ 0FBC:25B9
cs=0xfbc;eip=0x0025bb; 	T(SHL(bx, 1));	// 31913 shl     bx, 1 ;~ 0FBC:25BB
cs=0xfbc;eip=0x0025bd; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 31914 mov     bx, terrainrows[bx] ;~ 0FBC:25BD
cs=0xfbc;eip=0x0025c1; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 31915 mov     al, [bp+var_3A4] ;~ 0FBC:25C1
cs=0xfbc;eip=0x0025c5; 	T(CBW);	// 31916 cbw ;~ 0FBC:25C5
cs=0xfbc;eip=0x0025c6; 	T(ADD(bx, ax));	// 31917 add     bx, ax ;~ 0FBC:25C6
cs=0xfbc;eip=0x0025c8; 	T(ADD(bx, *(dw*)(((db*)&td15_terr_map_main))));	// 31918 add     bx, word ptr td15_terr_map_main ;~ 0FBC:25C8
cs=0xfbc;eip=0x0025cc; 	T(MOV(es, *(dw*)(((db*)&td15_terr_map_main)+2)));	// 31919 mov     es, word ptr td15_terr_map_main+2 ;~ 0FBC:25CC
cs=0xfbc;eip=0x0025d0; 	T(MOV(al, *(raddr(es,bx))));	// 31920 mov     al, es:[bx] ;~ 0FBC:25D0
cs=0xfbc;eip=0x0025d3; 	X(MOV(*(raddr(ss,bp+var_74e)), al));	// 31921 mov     [bp+var_74E], al ;~ 0FBC:25D3
cs=0xfbc;eip=0x0025d7; 	T(MOV(bl, al));	// 31922 mov     bl, al ;~ 0FBC:25D7
cs=0xfbc;eip=0x0025d9; 	T(SUB(bh, bh));	// 31923 sub     bh, bh ;~ 0FBC:25D9
cs=0xfbc;eip=0x0025db; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 31924 mov     al, [bp+var_12] ;~ 0FBC:25DB
cs=0xfbc;eip=0x0025de; 	T(CMP(*((terrconndataetow)+bx), al));	// 31925 cmp     terrConnDataEtoW[bx], al ;~ 0FBC:25DE
cs=0xfbc;eip=0x0025e2; 	R(JZ(loc_2073c));	// 31926 jz      short loc_2073C ;~ 0FBC:25E2
cs=0xfbc;eip=0x0025e4; 	T(CMP(al, 0x63));	// 31927 cmp     al, 63h ; 'c' ;~ 0FBC:25E4
cs=0xfbc;eip=0x0025e6; 	R(JZ(loc_2073c));	// 31928 jz      short loc_2073C ;~ 0FBC:25E6
loc_20788:
	// 6526 
cs=0xfbc;eip=0x0025e8; 	X(MOV(*(raddr(ss,bp+var_3b0)), terr_mism));	// 31931 mov     [bp+var_3B0], terr_mism ;~ 0FBC:25E8
loc_2078d:
	// 6527 
cs=0xfbc;eip=0x0025ed; 	T(CMP(*(raddr(ss,bp+var_3a4)), 0x0FF));	// 31935 cmp     [bp+var_3A4], 0FFh ;~ 0FBC:25ED
cs=0xfbc;eip=0x0025f2; 	R(JZ(loc_20797));	// 31936 jz      short loc_20797 ;~ 0FBC:25F2
cs=0xfbc;eip=0x0025f4; 	R(JMP(loc_2177a));	// 31937 jmp     loc_2177A ;~ 0FBC:25F4
loc_20797:
	// 6528 
cs=0xfbc;eip=0x0025f7; 	X(MOV(*(raddr(ss,bp+var_3a4)), 0));	// 31941 mov     [bp+var_3A4], 0 ;~ 0FBC:25F7
cs=0xfbc;eip=0x0025fc; 	R(JMP(loc_21786));	// 31942 jmp     loc_21786 ;~ 0FBC:25FC
loc_207a0:
	// 6529 
cs=0xfbc;eip=0x002600; 	X(INC(*(raddr(ss,bp+var_73a))));	// 31947 inc     [bp+var_73A] ;~ 0FBC:2600
loc_207a4:
	// 6530 
cs=0xfbc;eip=0x002604; 	T(CMP(*(raddr(ss,bp+var_73a)), 0x1E));	// 31950 cmp     [bp+var_73A], 1Eh ;~ 0FBC:2604
cs=0xfbc;eip=0x002609; 	R(JGE(loc_207b6));	// 31951 jge     short loc_207B6 ;~ 0FBC:2609
cs=0xfbc;eip=0x00260b; 	X(MOV(*(raddr(ss,bp+var_12)), 0x63));	// 31952 mov     [bp+var_12], 63h ; 'c' ;~ 0FBC:260B
cs=0xfbc;eip=0x00260f; 	X(MOV(*(raddr(ss,bp+var_3a4)), 0));	// 31953 mov     [bp+var_3A4], 0 ;~ 0FBC:260F
cs=0xfbc;eip=0x002614; 	R(JMP(loc_2074d));	// 31954 jmp     short loc_2074D ;~ 0FBC:2614
loc_207b6:
	// 6531 
cs=0xfbc;eip=0x002616; 	X(MOV(*(raddr(ss,bp+var_3a4)), 0));	// 31958 mov     [bp+var_3A4], 0 ;~ 0FBC:2616
cs=0xfbc;eip=0x00261b; 	R(JMP(loc_20812));	// 31959 jmp     short loc_20812 ;~ 0FBC:261B
loc_207be:
	// 6532 
cs=0xfbc;eip=0x00261e; 	T(MOV(bl, *(raddr(ss,bp+var_74e))));	// 31965 mov     bl, [bp+var_74E] ;~ 0FBC:261E
cs=0xfbc;eip=0x002622; 	T(SUB(bh, bh));	// 31966 sub     bh, bh ;~ 0FBC:2622
cs=0xfbc;eip=0x002624; 	T(MOV(al, *((terrconndataston)+bx)));	// 31967 mov     al, terrConnDataStoN[bx] ;~ 0FBC:2624
cs=0xfbc;eip=0x002628; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 31968 mov     [bp+var_12], al ;~ 0FBC:2628
cs=0xfbc;eip=0x00262b; 	X(INC(*(raddr(ss,bp+var_73a))));	// 31969 inc     [bp+var_73A] ;~ 0FBC:262B
loc_207cf:
	// 6533 
cs=0xfbc;eip=0x00262f; 	T(CMP(*(raddr(ss,bp+var_73a)), 0x1E));	// 31972 cmp     [bp+var_73A], 1Eh ;~ 0FBC:262F
cs=0xfbc;eip=0x002634; 	R(JGE(loc_2080e));	// 31973 jge     short loc_2080E ;~ 0FBC:2634
cs=0xfbc;eip=0x002636; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 31974 mov     al, [bp+var_73A] ;~ 0FBC:2636
cs=0xfbc;eip=0x00263a; 	T(CBW);	// 31975 cbw ;~ 0FBC:263A
cs=0xfbc;eip=0x00263b; 	T(MOV(bx, ax));	// 31976 mov     bx, ax ;~ 0FBC:263B
cs=0xfbc;eip=0x00263d; 	T(SHL(bx, 1));	// 31977 shl     bx, 1 ;~ 0FBC:263D
cs=0xfbc;eip=0x00263f; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 31978 mov     bx, terrainrows[bx] ;~ 0FBC:263F
cs=0xfbc;eip=0x002643; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 31979 mov     al, [bp+var_3A4] ;~ 0FBC:2643
cs=0xfbc;eip=0x002647; 	T(CBW);	// 31980 cbw ;~ 0FBC:2647
cs=0xfbc;eip=0x002648; 	T(ADD(bx, ax));	// 31981 add     bx, ax ;~ 0FBC:2648
cs=0xfbc;eip=0x00264a; 	T(ADD(bx, *(dw*)(((db*)&td15_terr_map_main))));	// 31982 add     bx, word ptr td15_terr_map_main ;~ 0FBC:264A
cs=0xfbc;eip=0x00264e; 	T(MOV(es, *(dw*)(((db*)&td15_terr_map_main)+2)));	// 31983 mov     es, word ptr td15_terr_map_main+2 ;~ 0FBC:264E
cs=0xfbc;eip=0x002652; 	T(MOV(al, *(raddr(es,bx))));	// 31984 mov     al, es:[bx] ;~ 0FBC:2652
cs=0xfbc;eip=0x002655; 	X(MOV(*(raddr(ss,bp+var_74e)), al));	// 31985 mov     [bp+var_74E], al ;~ 0FBC:2655
cs=0xfbc;eip=0x002659; 	T(MOV(bl, al));	// 31986 mov     bl, al ;~ 0FBC:2659
cs=0xfbc;eip=0x00265b; 	T(SUB(bh, bh));	// 31987 sub     bh, bh ;~ 0FBC:265B
cs=0xfbc;eip=0x00265d; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 31988 mov     al, [bp+var_12] ;~ 0FBC:265D
cs=0xfbc;eip=0x002660; 	T(CMP(*((terrconndatantos)+bx), al));	// 31989 cmp     terrConnDataNtoS[bx], al ;~ 0FBC:2660
cs=0xfbc;eip=0x002664; 	R(JZ(loc_207be));	// 31990 jz      short loc_207BE ;~ 0FBC:2664
cs=0xfbc;eip=0x002666; 	T(CMP(al, 0x63));	// 31991 cmp     al, 63h ; 'c' ;~ 0FBC:2666
cs=0xfbc;eip=0x002668; 	R(JZ(loc_207be));	// 31992 jz      short loc_207BE ;~ 0FBC:2668
cs=0xfbc;eip=0x00266a; 	R(JMP(loc_20788));	// 31993 jmp     loc_20788 ;~ 0FBC:266A
loc_2080e:
	// 6534 
cs=0xfbc;eip=0x00266e; 	X(INC(*(raddr(ss,bp+var_3a4))));	// 31998 inc     [bp+var_3A4] ;~ 0FBC:266E
loc_20812:
	// 6535 
cs=0xfbc;eip=0x002672; 	T(CMP(*(raddr(ss,bp+var_3a4)), 0x1E));	// 32001 cmp     [bp+var_3A4], 1Eh ;~ 0FBC:2672
cs=0xfbc;eip=0x002677; 	R(JGE(loc_20824));	// 32002 jge     short loc_20824 ;~ 0FBC:2677
cs=0xfbc;eip=0x002679; 	X(MOV(*(raddr(ss,bp+var_12)), 0x63));	// 32003 mov     [bp+var_12], 63h ; 'c' ;~ 0FBC:2679
cs=0xfbc;eip=0x00267d; 	X(MOV(*(raddr(ss,bp+var_73a)), 0));	// 32004 mov     [bp+var_73A], 0 ;~ 0FBC:267D
cs=0xfbc;eip=0x002682; 	R(JMP(loc_207cf));	// 32005 jmp     short loc_207CF ;~ 0FBC:2682
loc_20824:
	// 6536 
cs=0xfbc;eip=0x002684; 	X(MOV(*(raddr(ss,bp+var_73a)), 0));	// 32009 mov     [bp+var_73A], 0 ;~ 0FBC:2684
cs=0xfbc;eip=0x002689; 	R(JMP(loc_20956));	// 32010 jmp     loc_20956 ;~ 0FBC:2689
loc_2082c:
	// 6537 
cs=0xfbc;eip=0x00268c; 	X(MOV(track_angle, 0));	// 32015 mov     track_angle, 0 ;~ 0FBC:268C
loc_20832:
	// 6538 
cs=0xfbc;eip=0x002692; 	T(CMP(*(raddr(ss,bp+var_3a6)), 0));	// 32019 cmp     [bp+var_3A6], 0 ;~ 0FBC:2692
cs=0xfbc;eip=0x002697; 	R(JZ(loc_2087a));	// 32020 jz      short loc_2087A ;~ 0FBC:2697
cs=0xfbc;eip=0x002699; 	X(MOV(*(raddr(ss,bp+var_3b0)), many_sf));	// 32021 mov     [bp+var_3B0], many_sf ;~ 0FBC:2699
cs=0xfbc;eip=0x00269e; 	R(JMP(loc_2078d));	// 32022 jmp     loc_2078D ;~ 0FBC:269E
loc_20842:
	// 6539 
cs=0xfbc;eip=0x0026a2; 	X(MOV(track_angle, 0x200));	// 32028 mov     track_angle, 200h ;~ 0FBC:26A2
cs=0xfbc;eip=0x0026a8; 	R(JMP(loc_20832));	// 32029 jmp     short loc_20832 ;~ 0FBC:26A8
loc_2084a:
	// 6540 
cs=0xfbc;eip=0x0026aa; 	X(MOV(track_angle, 0x100));	// 32034 mov     track_angle, 100h ;~ 0FBC:26AA
cs=0xfbc;eip=0x0026b0; 	R(JMP(loc_20832));	// 32035 jmp     short loc_20832 ;~ 0FBC:26B0
loc_20852:
	// 6541 
cs=0xfbc;eip=0x0026b2; 	X(MOV(track_angle, 0x300));	// 32040 mov     track_angle, 300h ;~ 0FBC:26B2
cs=0xfbc;eip=0x0026b8; 	R(JMP(loc_20832));	// 32041 jmp     short loc_20832 ;~ 0FBC:26B8
loc_2085a:
	// 6542 
cs=0xfbc;eip=0x0026ba; 	T(CMP(ax, 0x94));	// 32045 cmp     ax, 94h ; 'î' ;~ 0FBC:26BA
cs=0xfbc;eip=0x0026bd; 	R(JZ(loc_20842));	// 32046 jz      short loc_20842 ;~ 0FBC:26BD
cs=0xfbc;eip=0x0026bf; 	T(CMP(ax, 0x95));	// 32047 cmp     ax, 95h ; 'ï' ;~ 0FBC:26BF
cs=0xfbc;eip=0x0026c2; 	R(JZ(loc_2084a));	// 32048 jz      short loc_2084A ;~ 0FBC:26C2
cs=0xfbc;eip=0x0026c4; 	T(CMP(ax, 0x96));	// 32049 cmp     ax, 96h ; 'ñ' ;~ 0FBC:26C4
cs=0xfbc;eip=0x0026c7; 	R(JZ(loc_20852));	// 32050 jz      short loc_20852 ;~ 0FBC:26C7
cs=0xfbc;eip=0x0026c9; 	T(CMP(ax, 0x0B3));	// 32051 cmp     ax, 0B3h ; '≥' ;~ 0FBC:26C9
cs=0xfbc;eip=0x0026cc; 	R(JZ(loc_20842));	// 32052 jz      short loc_20842 ;~ 0FBC:26CC
cs=0xfbc;eip=0x0026ce; 	T(CMP(ax, 0x0B4));	// 32053 cmp     ax, 0B4h ; '¥' ;~ 0FBC:26CE
cs=0xfbc;eip=0x0026d1; 	R(JZ(loc_2084a));	// 32054 jz      short loc_2084A ;~ 0FBC:26D1
cs=0xfbc;eip=0x0026d3; 	T(CMP(ax, 0x0B5));	// 32055 cmp     ax, 0B5h ; 'µ' ;~ 0FBC:26D3
loc_20876:
	// 6543 
cs=0xfbc;eip=0x0026d6; 	R(JZ(loc_20852));	// 32058 jz      short loc_20852 ;~ 0FBC:26D6
cs=0xfbc;eip=0x0026d8; 	R(JMP(loc_208bb));	// 32059 jmp     short loc_208BB ;~ 0FBC:26D8
loc_2087a:
	// 6544 
cs=0xfbc;eip=0x0026da; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32063 mov     al, [bp+var_3A4] ;~ 0FBC:26DA
cs=0xfbc;eip=0x0026de; 	X(MOV(startcol2, al));	// 32064 mov     startcol2, al ;~ 0FBC:26DE
cs=0xfbc;eip=0x0026e1; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 32065 mov     al, [bp+var_73A] ;~ 0FBC:26E1
cs=0xfbc;eip=0x0026e5; 	X(MOV(startrow2, al));	// 32066 mov     startrow2, al ;~ 0FBC:26E5
cs=0xfbc;eip=0x0026e8; 	T(CBW);	// 32067 cbw ;~ 0FBC:26E8
cs=0xfbc;eip=0x0026e9; 	T(MOV(bx, ax));	// 32068 mov     bx, ax ;~ 0FBC:26E9
cs=0xfbc;eip=0x0026eb; 	T(SHL(bx, 1));	// 32069 shl     bx, 1 ;~ 0FBC:26EB
cs=0xfbc;eip=0x0026ed; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 32070 mov     bx, terrainrows[bx] ;~ 0FBC:26ED
cs=0xfbc;eip=0x0026f1; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32071 mov     al, [bp+var_3A4] ;~ 0FBC:26F1
cs=0xfbc;eip=0x0026f5; 	T(CBW);	// 32072 cbw ;~ 0FBC:26F5
cs=0xfbc;eip=0x0026f6; 	T(ADD(bx, ax));	// 32073 add     bx, ax ;~ 0FBC:26F6
cs=0xfbc;eip=0x0026f8; 	T(ADD(bx, *(dw*)(((db*)&td15_terr_map_main))));	// 32074 add     bx, word ptr td15_terr_map_main ;~ 0FBC:26F8
cs=0xfbc;eip=0x0026fc; 	T(MOV(es, *(dw*)(((db*)&td15_terr_map_main)+2)));	// 32075 mov     es, word ptr td15_terr_map_main+2 ;~ 0FBC:26FC
cs=0xfbc;eip=0x002700; 	T(MOV(al, *(raddr(es,bx))));	// 32076 mov     al, es:[bx] ;~ 0FBC:2700
cs=0xfbc;eip=0x002703; 	X(MOV(*(raddr(ss,bp+var_74e)), al));	// 32077 mov     [bp+var_74E], al ;~ 0FBC:2703
cs=0xfbc;eip=0x002707; 	T(CMP(al, 6));	// 32078 cmp     al, 6           ; hilltop ;~ 0FBC:2707
cs=0xfbc;eip=0x002709; 	R(JNZ(loc_208b2));	// 32079 jnz     short loc_208B2 ;~ 0FBC:2709
cs=0xfbc;eip=0x00270b; 	X(MOV(hillflag, 1));	// 32080 mov     hillFlag, 1 ;~ 0FBC:270B
cs=0xfbc;eip=0x002710; 	R(JMP(loc_208b7));	// 32081 jmp     short loc_208B7 ;~ 0FBC:2710
loc_208b2:
	// 6545 
cs=0xfbc;eip=0x002712; 	X(MOV(hillflag, 0));	// 32085 mov     hillFlag, 0 ;~ 0FBC:2712
loc_208b7:
	// 6546 
cs=0xfbc;eip=0x002717; 	X(INC(*(raddr(ss,bp+var_3a6))));	// 32088 inc     [bp+var_3A6] ;~ 0FBC:2717
loc_208bb:
	// 6547 
cs=0xfbc;eip=0x00271b; 	X(INC(*(raddr(ss,bp+var_3a4))));	// 32091 inc     [bp+var_3A4] ;~ 0FBC:271B
loc_208bf:
	// 6548 
cs=0xfbc;eip=0x00271f; 	T(CMP(*(raddr(ss,bp+var_3a4)), 0x1E));	// 32094 cmp     [bp+var_3A4], 1Eh ;~ 0FBC:271F
cs=0xfbc;eip=0x002724; 	R(JL(loc_208c9));	// 32095 jl      short loc_208C9 ;~ 0FBC:2724
cs=0xfbc;eip=0x002726; 	R(JMP(loc_20952));	// 32096 jmp     loc_20952 ;~ 0FBC:2726
loc_208c9:
	// 6549 
cs=0xfbc;eip=0x002729; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 32100 mov     al, [bp+var_73A] ;~ 0FBC:2729
cs=0xfbc;eip=0x00272d; 	T(CBW);	// 32101 cbw ;~ 0FBC:272D
cs=0xfbc;eip=0x00272e; 	T(MOV(bx, ax));	// 32102 mov     bx, ax ;~ 0FBC:272E
cs=0xfbc;eip=0x002730; 	T(SHL(bx, 1));	// 32103 shl     bx, 1 ;~ 0FBC:2730
cs=0xfbc;eip=0x002732; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 32104 mov     bx, trackrows[bx] ;~ 0FBC:2732
cs=0xfbc;eip=0x002736; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32105 mov     al, [bp+var_3A4] ;~ 0FBC:2736
cs=0xfbc;eip=0x00273a; 	T(CBW);	// 32106 cbw ;~ 0FBC:273A
cs=0xfbc;eip=0x00273b; 	T(ADD(bx, ax));	// 32107 add     bx, ax ;~ 0FBC:273B
cs=0xfbc;eip=0x00273d; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 32108 add     bx, word ptr td14_elem_map_main ;~ 0FBC:273D
cs=0xfbc;eip=0x002741; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 32109 mov     es, word ptr td14_elem_map_main+2 ;~ 0FBC:2741
cs=0xfbc;eip=0x002745; 	T(MOV(al, *(raddr(es,bx))));	// 32110 mov     al, es:[bx] ;~ 0FBC:2745
cs=0xfbc;eip=0x002748; 	X(MOV(*(raddr(ss,bp+var_e)), al));	// 32111 mov     [bp+var_E], al ;~ 0FBC:2748
cs=0xfbc;eip=0x00274b; 	T(CMP(al, 0x0FD));	// 32112 cmp     al, 0FDh ; '˝'  ; <filler ;~ 0FBC:274B
cs=0xfbc;eip=0x00274d; 	R(JC(loc_208f3));	// 32113 jb      short loc_208F3 ;~ 0FBC:274D
cs=0xfbc;eip=0x00274f; 	X(MOV(*(raddr(ss,bp+var_e)), 0));	// 32114 mov     [bp+var_E], 0 ;~ 0FBC:274F
loc_208f3:
	// 6550 
cs=0xfbc;eip=0x002753; 	T(CMP(*(raddr(ss,bp+var_e)), 0x0B6));	// 32117 cmp     [bp+var_E], 0B6h ; '∂' ;~ 0FBC:2753
cs=0xfbc;eip=0x002757; 	R(JC(loc_20919));	// 32118 jb      short loc_20919 ;~ 0FBC:2757
cs=0xfbc;eip=0x002759; 	X(MOV(*(raddr(ss,bp+var_e)), 4));	// 32119 mov     [bp+var_E], 4 ;~ 0FBC:2759
cs=0xfbc;eip=0x00275d; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 32120 mov     al, [bp+var_73A] ;~ 0FBC:275D
cs=0xfbc;eip=0x002761; 	T(CBW);	// 32121 cbw ;~ 0FBC:2761
cs=0xfbc;eip=0x002762; 	T(MOV(bx, ax));	// 32122 mov     bx, ax ;~ 0FBC:2762
cs=0xfbc;eip=0x002764; 	T(SHL(bx, 1));	// 32123 shl     bx, 1 ;~ 0FBC:2764
cs=0xfbc;eip=0x002766; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 32124 mov     bx, trackrows[bx] ;~ 0FBC:2766
cs=0xfbc;eip=0x00276a; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32125 mov     al, [bp+var_3A4] ;~ 0FBC:276A
cs=0xfbc;eip=0x00276e; 	T(CBW);	// 32126 cbw ;~ 0FBC:276E
cs=0xfbc;eip=0x00276f; 	T(ADD(bx, ax));	// 32127 add     bx, ax ;~ 0FBC:276F
cs=0xfbc;eip=0x002771; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 32128 add     bx, word ptr td14_elem_map_main ;~ 0FBC:2771
cs=0xfbc;eip=0x002775; 	X(MOV(*(raddr(es,bx)), 4));	// 32129 mov     byte ptr es:[bx], 4 ;~ 0FBC:2775
loc_20919:
	// 6551 
cs=0xfbc;eip=0x002779; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 32132 mov     al, [bp+var_E] ;~ 0FBC:2779
cs=0xfbc;eip=0x00277c; 	T(SUB(ah, ah));	// 32133 sub     ah, ah ;~ 0FBC:277C
cs=0xfbc;eip=0x00277e; 	T(CMP(ax, 0x93));	// 32134 cmp     ax, 93h ; 'ì' ;~ 0FBC:277E
cs=0xfbc;eip=0x002781; 	R(JNZ(loc_20926));	// 32135 jnz     short loc_20926 ;~ 0FBC:2781
cs=0xfbc;eip=0x002783; 	R(JMP(loc_2082c));	// 32136 jmp     loc_2082C ;~ 0FBC:2783
loc_20926:
	// 6552 
cs=0xfbc;eip=0x002786; 	R(JBE(loc_2092b));	// 32140 jbe     short loc_2092B ;~ 0FBC:2786
cs=0xfbc;eip=0x002788; 	R(JMP(loc_2085a));	// 32141 jmp     loc_2085A ;~ 0FBC:2788
loc_2092b:
	// 6553 
cs=0xfbc;eip=0x00278b; 	T(CMP(ax, 1));	// 32145 cmp     ax, 1 ;~ 0FBC:278B
cs=0xfbc;eip=0x00278e; 	R(JNZ(loc_20933));	// 32146 jnz     short loc_20933 ;~ 0FBC:278E
cs=0xfbc;eip=0x002790; 	R(JMP(loc_2082c));	// 32147 jmp     loc_2082C ;~ 0FBC:2790
loc_20933:
	// 6554 
cs=0xfbc;eip=0x002793; 	T(CMP(ax, 0x86));	// 32151 cmp     ax, 86h ; 'Ü' ;~ 0FBC:2793
cs=0xfbc;eip=0x002796; 	R(JNZ(loc_2093b));	// 32152 jnz     short loc_2093B ;~ 0FBC:2796
cs=0xfbc;eip=0x002798; 	R(JMP(loc_2082c));	// 32153 jmp     loc_2082C ;~ 0FBC:2798
loc_2093b:
	// 6555 
cs=0xfbc;eip=0x00279b; 	T(CMP(ax, 0x87));	// 32157 cmp     ax, 87h ; 'á' ;~ 0FBC:279B
cs=0xfbc;eip=0x00279e; 	R(JNZ(loc_20943));	// 32158 jnz     short loc_20943 ;~ 0FBC:279E
cs=0xfbc;eip=0x0027a0; 	R(JMP(loc_20842));	// 32159 jmp     loc_20842 ;~ 0FBC:27A0
loc_20943:
	// 6556 
cs=0xfbc;eip=0x0027a3; 	T(CMP(ax, 0x88));	// 32163 cmp     ax, 88h ; 'à' ;~ 0FBC:27A3
cs=0xfbc;eip=0x0027a6; 	R(JNZ(loc_2094b));	// 32164 jnz     short loc_2094B ;~ 0FBC:27A6
cs=0xfbc;eip=0x0027a8; 	R(JMP(loc_2084a));	// 32165 jmp     loc_2084A ;~ 0FBC:27A8
loc_2094b:
	// 6557 
cs=0xfbc;eip=0x0027ab; 	T(CMP(ax, 0x89));	// 32169 cmp     ax, 89h ; 'â' ;~ 0FBC:27AB
cs=0xfbc;eip=0x0027ae; 	R(JMP(loc_20876));	// 32170 jmp     loc_20876 ;~ 0FBC:27AE
loc_20952:
	// 6558 
cs=0xfbc;eip=0x0027b2; 	X(INC(*(raddr(ss,bp+var_73a))));	// 32175 inc     [bp+var_73A] ;~ 0FBC:27B2
loc_20956:
	// 6559 
cs=0xfbc;eip=0x0027b6; 	T(CMP(*(raddr(ss,bp+var_73a)), 0x1E));	// 32178 cmp     [bp+var_73A], 1Eh ;~ 0FBC:27B6
cs=0xfbc;eip=0x0027bb; 	R(JGE(loc_20966));	// 32179 jge     short loc_20966 ;~ 0FBC:27BB
cs=0xfbc;eip=0x0027bd; 	X(MOV(*(raddr(ss,bp+var_3a4)), 0));	// 32180 mov     [bp+var_3A4], 0 ;~ 0FBC:27BD
cs=0xfbc;eip=0x0027c2; 	R(JMP(loc_208bf));	// 32181 jmp     loc_208BF ;~ 0FBC:27C2
loc_20966:
	// 6560 
cs=0xfbc;eip=0x0027c6; 	T(CMP(*(raddr(ss,bp+var_3a6)), 0));	// 32186 cmp     [bp+var_3A6], 0 ;~ 0FBC:27C6
cs=0xfbc;eip=0x0027cb; 	R(JNZ(loc_20976));	// 32187 jnz     short loc_20976 ;~ 0FBC:27CB
cs=0xfbc;eip=0x0027cd; 	X(MOV(*(raddr(ss,bp+var_3b0)), no_sf));	// 32188 mov     [bp+var_3B0], no_sf ;~ 0FBC:27CD
cs=0xfbc;eip=0x0027d2; 	R(JMP(loc_2078d));	// 32189 jmp     loc_2078D ;~ 0FBC:27D2
loc_20976:
	// 6561 
cs=0xfbc;eip=0x0027d6; 	X(MOV(track_pieces_counter, 0));	// 32194 mov     track_pieces_counter, 0 ;~ 0FBC:27D6
cs=0xfbc;eip=0x0027dc; 	X(MOV(*(raddr(ss,bp+var_746)), 0));	// 32195 mov     [bp+var_746], 0 ;~ 0FBC:27DC
cs=0xfbc;eip=0x0027e1; 	X(MOV(byte_45635, 0));	// 32196 mov     byte_45635, 0 ;~ 0FBC:27E1
cs=0xfbc;eip=0x0027e6; 	X(MOV(byte_4616e, 0));	// 32197 mov     byte_4616E, 0 ;~ 0FBC:27E6
cs=0xfbc;eip=0x0027eb; 	X(MOV(*(raddr(ss,bp+var_3a8)), 0));	// 32198 mov     [bp+var_3A8], 0 ;~ 0FBC:27EB
cs=0xfbc;eip=0x0027f0; 	X(MOV(*(raddr(ss,bp+var_ae8)), 0));	// 32199 mov     [bp+var_AE8], 0 ;~ 0FBC:27F0
cs=0xfbc;eip=0x0027f5; 	T(SUB(si, si));	// 32200 sub     si, si ;~ 0FBC:27F5
loc_20997:
	// 6562 
cs=0xfbc;eip=0x0027f7; 	X(MOV(*(raddr(ss,bp+si+var_738)), 0));	// 32203 mov     [bp+si+var_738], 0 ;~ 0FBC:27F7
cs=0xfbc;eip=0x0027fc; 	T(MOV(ax, si));	// 32204 mov     ax, si ;~ 0FBC:27FC
cs=0xfbc;eip=0x0027fe; 	T(SHL(ax, 1));	// 32205 shl     ax, 1 ;~ 0FBC:27FE
cs=0xfbc;eip=0x002800; 	X(MOV(*(dw*)(raddr(ss,bp+var_aea)), ax));	// 32206 mov     [bp+var_AEA], ax ;~ 0FBC:2800
cs=0xfbc;eip=0x002804; 	T(MOV(bx, ax));	// 32207 mov     bx, ax ;~ 0FBC:2804
cs=0xfbc;eip=0x002806; 	T(ADD(bx, *(dw*)(((db*)&td01_track_file_cpy))));	// 32208 add     bx, word ptr td01_track_file_cpy ;~ 0FBC:2806
cs=0xfbc;eip=0x00280a; 	T(MOV(es, *(dw*)(((db*)&td01_track_file_cpy)+2)));	// 32209 mov     es, word ptr td01_track_file_cpy+2 ;~ 0FBC:280A
cs=0xfbc;eip=0x00280e; 	X(MOV(*(dw*)(raddr(es,bx)), 0x0FFFF));	// 32210 mov     word ptr es:[bx], 0FFFFh ;~ 0FBC:280E
cs=0xfbc;eip=0x002813; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_aea))));	// 32211 mov     bx, [bp+var_AEA] ;~ 0FBC:2813
cs=0xfbc;eip=0x002817; 	T(ADD(bx, *(dw*)(((db*)&td02_penalty_related))));	// 32212 add     bx, word ptr td02_penalty_related ;~ 0FBC:2817
cs=0xfbc;eip=0x00281b; 	T(MOV(es, *(dw*)(((db*)&td02_penalty_related)+2)));	// 32213 mov     es, word ptr td02_penalty_related+2 ;~ 0FBC:281B
cs=0xfbc;eip=0x00281f; 	X(MOV(*(dw*)(raddr(es,bx)), 0x0FFFF));	// 32214 mov     word ptr es:[bx], 0FFFFh ;~ 0FBC:281F
cs=0xfbc;eip=0x002824; 	T(INC(si));	// 32215 inc     si ;~ 0FBC:2824
cs=0xfbc;eip=0x002825; 	T(CMP(si, 0x385));	// 32216 cmp     si, 385h ;~ 0FBC:2825
cs=0xfbc;eip=0x002829; 	R(JL(loc_20997));	// 32217 jl      short loc_20997 ;~ 0FBC:2829
cs=0xfbc;eip=0x00282b; 	T(MOV(al, startcol2));	// 32218 mov     al, startcol2 ;~ 0FBC:282B
cs=0xfbc;eip=0x00282e; 	X(MOV(*(raddr(ss,bp+var_3a4)), al));	// 32219 mov     [bp+var_3A4], al ;~ 0FBC:282E
cs=0xfbc;eip=0x002832; 	T(MOV(al, startrow2));	// 32220 mov     al, startrow2 ;~ 0FBC:2832
cs=0xfbc;eip=0x002835; 	X(MOV(*(raddr(ss,bp+var_73a)), al));	// 32221 mov     [bp+var_73A], al ;~ 0FBC:2835
cs=0xfbc;eip=0x002839; 	T(MOV(ax, track_angle));	// 32222 mov     ax, track_angle ;~ 0FBC:2839
cs=0xfbc;eip=0x00283c; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 32223 mov     [bp+var_8], ax ;~ 0FBC:283C
cs=0xfbc;eip=0x00283f; 	X(MOV(*(raddr(ss,bp+var_12)), 0));	// 32224 mov     [bp+var_12], 0 ;~ 0FBC:283F
cs=0xfbc;eip=0x002843; 	X(MOV(*(dw*)(raddr(ss,bp+var_3ac)), 0x0FFFF));	// 32225 mov     [bp+var_3AC], 0FFFFh ;~ 0FBC:2843
def_2140f:
	// 6563 
cs=0xfbc;eip=0x002849; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 32229 mov     [bp+var_2], 0   ; jumptable 0002140F default case ;~ 0FBC:2849
cs=0xfbc;eip=0x00284d; 	T(CMP(*(raddr(ss,bp+var_3a4)), 0));	// 32230 cmp     [bp+var_3A4], 0 ;~ 0FBC:284D
cs=0xfbc;eip=0x002852; 	R(JL(loc_20a0c));	// 32231 jl      short loc_20A0C ;~ 0FBC:2852
cs=0xfbc;eip=0x002854; 	T(CMP(*(raddr(ss,bp+var_73a)), 0));	// 32232 cmp     [bp+var_73A], 0 ;~ 0FBC:2854
cs=0xfbc;eip=0x002859; 	R(JL(loc_20a0c));	// 32233 jl      short loc_20A0C ;~ 0FBC:2859
cs=0xfbc;eip=0x00285b; 	T(CMP(*(raddr(ss,bp+var_3a4)), 0x1D));	// 32234 cmp     [bp+var_3A4], 1Dh ;~ 0FBC:285B
cs=0xfbc;eip=0x002860; 	R(JG(loc_20a0c));	// 32235 jg      short loc_20A0C ;~ 0FBC:2860
cs=0xfbc;eip=0x002862; 	T(CMP(*(raddr(ss,bp+var_73a)), 0x1D));	// 32236 cmp     [bp+var_73A], 1Dh ;~ 0FBC:2862
cs=0xfbc;eip=0x002867; 	R(JG(loc_20a0c));	// 32237 jg      short loc_20A0C ;~ 0FBC:2867
cs=0xfbc;eip=0x002869; 	R(JMP(loc_20ac2));	// 32238 jmp     loc_20AC2 ;~ 0FBC:2869
loc_20a0c:
	// 6564 
cs=0xfbc;eip=0x00286c; 	T(CMP(*(raddr(ss,bp+var_746)), 0));	// 32243 cmp     [bp+var_746], 0 ;~ 0FBC:286C
cs=0xfbc;eip=0x002871; 	R(JNZ(loc_20a16));	// 32244 jnz     short loc_20A16 ;~ 0FBC:2871
cs=0xfbc;eip=0x002873; 	R(JMP(loc_20f20));	// 32245 jmp     loc_20F20 ;~ 0FBC:2873
loc_20a16:
	// 6565 
cs=0xfbc;eip=0x002876; 	X(DEC(*(raddr(ss,bp+var_746))));	// 32249 dec     [bp+var_746] ;~ 0FBC:2876
cs=0xfbc;eip=0x00287a; 	T(MOV(al, *(raddr(ss,bp+var_746))));	// 32250 mov     al, [bp+var_746] ;~ 0FBC:287A
cs=0xfbc;eip=0x00287e; 	T(SUB(ah, ah));	// 32251 sub     ah, ah ;~ 0FBC:287E
cs=0xfbc;eip=0x002880; 	T(MOV(cx, ax));	// 32252 mov     cx, ax ;~ 0FBC:2880
cs=0xfbc;eip=0x002882; 	T(SHL(ax, 1));	// 32253 shl     ax, 1 ;~ 0FBC:2882
cs=0xfbc;eip=0x002884; 	T(ADD(ax, cx));	// 32254 add     ax, cx ;~ 0FBC:2884
cs=0xfbc;eip=0x002886; 	T(SHL(ax, 1));	// 32255 shl     ax, 1 ;~ 0FBC:2886
cs=0xfbc;eip=0x002888; 	T(ADD(ax, cx));	// 32256 add     ax, cx ;~ 0FBC:2888
cs=0xfbc;eip=0x00288a; 	T(SHL(ax, 1));	// 32257 shl     ax, 1 ;~ 0FBC:288A
cs=0xfbc;eip=0x00288c; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_74a))));	// 32258 add     ax, [bp+var_74A] ;~ 0FBC:288C
cs=0xfbc;eip=0x002890; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_748))));	// 32259 mov     dx, [bp+var_748] ;~ 0FBC:2890
cs=0xfbc;eip=0x002894; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_3a0))), ax));	// 32260 mov     word ptr [bp+var_3A0], ax ;~ 0FBC:2894
cs=0xfbc;eip=0x002898; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_3a0+2))), dx));	// 32261 mov     word ptr [bp+var_3A0+2], dx ;~ 0FBC:2898
cs=0xfbc;eip=0x00289c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32262 les     bx, [bp+var_3A0] ;~ 0FBC:289C
cs=0xfbc;eip=0x0028a0; 	T(MOV(al, *(raddr(es,bx))));	// 32263 mov     al, es:[bx] ;~ 0FBC:28A0
cs=0xfbc;eip=0x0028a3; 	X(MOV(*(raddr(ss,bp+var_3a4)), al));	// 32264 mov     [bp+var_3A4], al ;~ 0FBC:28A3
cs=0xfbc;eip=0x0028a7; 	T(MOV(al, *(raddr(es,bx+1))));	// 32265 mov     al, es:[bx+1] ;~ 0FBC:28A7
cs=0xfbc;eip=0x0028ab; 	X(MOV(*(raddr(ss,bp+var_73a)), al));	// 32266 mov     [bp+var_73A], al ;~ 0FBC:28AB
cs=0xfbc;eip=0x0028af; 	T(MOV(al, *(raddr(es,bx+2))));	// 32267 mov     al, es:[bx+2] ;~ 0FBC:28AF
cs=0xfbc;eip=0x0028b3; 	X(MOV(*(raddr(ss,bp+var_e)), al));	// 32268 mov     [bp+var_E], al ;~ 0FBC:28B3
cs=0xfbc;eip=0x0028b6; 	T(MOV(al, *(raddr(es,bx+3))));	// 32269 mov     al, es:[bx+3] ;~ 0FBC:28B6
cs=0xfbc;eip=0x0028ba; 	X(MOV(*(raddr(ss,bp+var_742)), al));	// 32270 mov     [bp+var_742], al ;~ 0FBC:28BA
cs=0xfbc;eip=0x0028be; 	T(MOV(al, *(raddr(es,bx+4))));	// 32271 mov     al, es:[bx+4] ;~ 0FBC:28BE
cs=0xfbc;eip=0x0028c2; 	X(MOV(*(raddr(ss,bp+var_73e)), al));	// 32272 mov     [bp+var_73E], al ;~ 0FBC:28C2
cs=0xfbc;eip=0x0028c6; 	T(MOV(al, *(raddr(es,bx+0x0B))));	// 32273 mov     al, es:[bx+0Bh] ;~ 0FBC:28C6
cs=0xfbc;eip=0x0028ca; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 32274 mov     [bp+var_12], al ;~ 0FBC:28CA
cs=0xfbc;eip=0x0028cd; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 32275 mov     ax, es:[bx+0Ch] ;~ 0FBC:28CD
cs=0xfbc;eip=0x0028d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_3ac)), ax));	// 32276 mov     [bp+var_3AC], ax ;~ 0FBC:28D1
cs=0xfbc;eip=0x0028d5; 	T(MOV(al, *(raddr(es,bx+5))));	// 32277 mov     al, es:[bx+5] ;~ 0FBC:28D5
cs=0xfbc;eip=0x0028d9; 	X(MOV(*(raddr(ss,bp+var_3a8)), al));	// 32278 mov     [bp+var_3A8], al ;~ 0FBC:28D9
cs=0xfbc;eip=0x0028dd; 	T(MOV(al, *(raddr(es,bx+6))));	// 32279 mov     al, es:[bx+6] ;~ 0FBC:28DD
cs=0xfbc;eip=0x0028e1; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 32280 mov     [bp+var_10], al ;~ 0FBC:28E1
cs=0xfbc;eip=0x0028e4; 	T(MOV(al, *(raddr(es,bx+7))));	// 32281 mov     al, es:[bx+7] ;~ 0FBC:28E4
cs=0xfbc;eip=0x0028e8; 	X(MOV(*(raddr(ss,bp+var_39a)), al));	// 32282 mov     [bp+var_39A], al ;~ 0FBC:28E8
cs=0xfbc;eip=0x0028ec; 	T(MOV(al, *(raddr(es,bx+8))));	// 32283 mov     al, es:[bx+8] ;~ 0FBC:28EC
cs=0xfbc;eip=0x0028f0; 	X(MOV(*(raddr(ss,bp+var_ae6)), al));	// 32284 mov     [bp+var_AE6], al ;~ 0FBC:28F0
cs=0xfbc;eip=0x0028f4; 	T(MOV(al, *(raddr(es,bx+9))));	// 32285 mov     al, es:[bx+9] ;~ 0FBC:28F4
cs=0xfbc;eip=0x0028f8; 	X(MOV(*(raddr(ss,bp+var_3aa)), al));	// 32286 mov     [bp+var_3AA], al ;~ 0FBC:28F8
cs=0xfbc;eip=0x0028fc; 	T(MOV(al, *(raddr(es,bx+0x0A))));	// 32287 mov     al, es:[bx+0Ah] ;~ 0FBC:28FC
cs=0xfbc;eip=0x002900; 	X(MOV(*(raddr(ss,bp+var_740)), al));	// 32288 mov     [bp+var_740], al ;~ 0FBC:2900
cs=0xfbc;eip=0x002904; 	X(MOV(*(raddr(ss,bp+var_2)), 1));	// 32289 mov     [bp+var_2], 1 ;~ 0FBC:2904
loc_20aa8:
	// 6566 
cs=0xfbc;eip=0x002908; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 32292 cmp     [bp+var_2], 0 ;~ 0FBC:2908
cs=0xfbc;eip=0x00290c; 	R(JNZ(loc_20ab1));	// 32293 jnz     short loc_20AB1 ;~ 0FBC:290C
cs=0xfbc;eip=0x00290e; 	R(JMP(def_2140f));	// 32294 jmp     def_2140F       ; jumptable 0002140F default case ;~ 0FBC:290E
loc_20ab1:
	// 6567 
cs=0xfbc;eip=0x002911; 	T(CMP(*(raddr(ss,bp+var_4)), 1));	// 32298 cmp     [bp+var_4], 1 ;~ 0FBC:2911
cs=0xfbc;eip=0x002915; 	R(JA(loc_20aba));	// 32299 ja      short loc_20ABA ;~ 0FBC:2915
cs=0xfbc;eip=0x002917; 	R(JMP(loc_20f6a));	// 32300 jmp     loc_20F6A ;~ 0FBC:2917
loc_20aba:
	// 6568 
cs=0xfbc;eip=0x00291a; 	X(MOV(*(raddr(ss,bp+var_3b0)), long_jump));	// 32304 mov     [bp+var_3B0], long_jump ;~ 0FBC:291A
cs=0xfbc;eip=0x00291f; 	R(JMP(loc_2078d));	// 32305 jmp     loc_2078D ;~ 0FBC:291F
loc_20ac2:
	// 6569 
cs=0xfbc;eip=0x002922; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32309 mov     al, [bp+var_3A4] ;~ 0FBC:2922
cs=0xfbc;eip=0x002926; 	T(CBW);	// 32310 cbw ;~ 0FBC:2926
cs=0xfbc;eip=0x002927; 	X(MOV(*(dw*)(raddr(ss,bp+var_aea)), ax));	// 32311 mov     [bp+var_AEA], ax ;~ 0FBC:2927
cs=0xfbc;eip=0x00292b; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 32312 mov     al, [bp+var_73A] ;~ 0FBC:292B
cs=0xfbc;eip=0x00292f; 	T(CBW);	// 32313 cbw ;~ 0FBC:292F
cs=0xfbc;eip=0x002930; 	T(SHL(ax, 1));	// 32314 shl     ax, 1 ;~ 0FBC:2930
cs=0xfbc;eip=0x002932; 	X(MOV(*(dw*)(raddr(ss,bp+var_aec)), ax));	// 32315 mov     [bp+var_AEC], ax ;~ 0FBC:2932
cs=0xfbc;eip=0x002936; 	T(MOV(bx, ax));	// 32316 mov     bx, ax ;~ 0FBC:2936
cs=0xfbc;eip=0x002938; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 32317 mov     bx, trackrows[bx] ;~ 0FBC:2938
cs=0xfbc;eip=0x00293c; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_aea))));	// 32318 add     bx, [bp+var_AEA] ;~ 0FBC:293C
cs=0xfbc;eip=0x002940; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 32319 add     bx, word ptr td14_elem_map_main ;~ 0FBC:2940
cs=0xfbc;eip=0x002944; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 32320 mov     es, word ptr td14_elem_map_main+2 ;~ 0FBC:2944
cs=0xfbc;eip=0x002948; 	T(MOV(al, *(raddr(es,bx))));	// 32321 mov     al, es:[bx] ;~ 0FBC:2948
cs=0xfbc;eip=0x00294b; 	X(MOV(*(raddr(ss,bp+var_e)), al));	// 32322 mov     [bp+var_E], al ;~ 0FBC:294B
cs=0xfbc;eip=0x00294e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_aec))));	// 32323 mov     bx, [bp+var_AEC] ;~ 0FBC:294E
cs=0xfbc;eip=0x002952; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 32324 mov     bx, terrainrows[bx] ;~ 0FBC:2952
cs=0xfbc;eip=0x002956; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_aea))));	// 32325 add     bx, [bp+var_AEA] ;~ 0FBC:2956
cs=0xfbc;eip=0x00295a; 	T(ADD(bx, *(dw*)(((db*)&td15_terr_map_main))));	// 32326 add     bx, word ptr td15_terr_map_main ;~ 0FBC:295A
cs=0xfbc;eip=0x00295e; 	T(MOV(es, *(dw*)(((db*)&td15_terr_map_main)+2)));	// 32327 mov     es, word ptr td15_terr_map_main+2 ;~ 0FBC:295E
cs=0xfbc;eip=0x002962; 	T(MOV(al, *(raddr(es,bx))));	// 32328 mov     al, es:[bx] ;~ 0FBC:2962
cs=0xfbc;eip=0x002965; 	X(MOV(*(raddr(ss,bp+var_74e)), al));	// 32329 mov     [bp+var_74E], al ;~ 0FBC:2965
cs=0xfbc;eip=0x002969; 	T(CMP(*(raddr(ss,bp+var_e)), 0));	// 32330 cmp     [bp+var_E], 0 ;~ 0FBC:2969
cs=0xfbc;eip=0x00296d; 	R(JZ(loc_20b30));	// 32331 jz      short loc_20B30 ;~ 0FBC:296D
cs=0xfbc;eip=0x00296f; 	T(OR(al, al));	// 32332 or      al, al ;~ 0FBC:296F
cs=0xfbc;eip=0x002971; 	R(JZ(loc_20b30));	// 32333 jz      short loc_20B30 ;~ 0FBC:2971
cs=0xfbc;eip=0x002973; 	T(CMP(al, 7));	// 32334 cmp     al, 7 ;~ 0FBC:2973
cs=0xfbc;eip=0x002975; 	R(JC(loc_20b30));	// 32335 jb      short loc_20B30 ;~ 0FBC:2975
cs=0xfbc;eip=0x002977; 	T(CMP(al, 0x0B));	// 32336 cmp     al, 0Bh ;~ 0FBC:2977
cs=0xfbc;eip=0x002979; 	R(JNC(loc_20b30));	// 32337 jnb     short loc_20B30 ;~ 0FBC:2979
cs=0xfbc;eip=0x00297b; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 32338 mov     al, [bp+var_E] ;~ 0FBC:297B
cs=0xfbc;eip=0x00297e; 	T(SUB(ah, ah));	// 32339 sub     ah, ah ;~ 0FBC:297E
cs=0xfbc;eip=0x002980; 	X(PUSH(ax));	// 32340 push    ax ;~ 0FBC:2980
cs=0xfbc;eip=0x002981; 	T(MOV(al, *(raddr(ss,bp+var_74e))));	// 32341 mov     al, [bp+var_74E] ;~ 0FBC:2981
cs=0xfbc;eip=0x002985; 	X(PUSH(ax));	// 32342 push    ax ;~ 0FBC:2985
cs=0xfbc;eip=0x002986; 	X(PUSH(cs));	// 32343 push    cs ;~ 0FBC:2986
cs=0xfbc;eip=0x002987; 	R(CALL(subst_hillroad_track,0));	// 32344 call    near ptr subst_hillroad_track ;~ 0FBC:2987
cs=0xfbc;eip=0x00298a; 	T(ADD(sp, 4));	// 32345 add     sp, 4 ;~ 0FBC:298A
cs=0xfbc;eip=0x00298d; 	X(MOV(*(raddr(ss,bp+var_e)), al));	// 32346 mov     [bp+var_E], al ;~ 0FBC:298D
loc_20b30:
	// 6570 
cs=0xfbc;eip=0x002990; 	T(CMP(*(raddr(ss,bp+var_e)), 0x0FD));	// 32350 cmp     [bp+var_E], 0FDh ; '˝' ;~ 0FBC:2990
cs=0xfbc;eip=0x002994; 	R(JNC(loc_20b39));	// 32351 jnb     short loc_20B39 ;~ 0FBC:2994
cs=0xfbc;eip=0x002996; 	R(JMP(loc_20c12));	// 32352 jmp     loc_20C12 ;~ 0FBC:2996
loc_20b39:
	// 6571 
cs=0xfbc;eip=0x002999; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 32356 mov     al, [bp+var_E] ;~ 0FBC:2999
cs=0xfbc;eip=0x00299c; 	T(SUB(ah, ah));	// 32357 sub     ah, ah ;~ 0FBC:299C
cs=0xfbc;eip=0x00299e; 	T(CMP(ax, 0x0FD));	// 32358 cmp     ax, 0FDh ; '˝' ;~ 0FBC:299E
cs=0xfbc;eip=0x0029a1; 	R(JZ(loc_20b76));	// 32359 jz      short loc_20B76 ;~ 0FBC:29A1
cs=0xfbc;eip=0x0029a3; 	T(CMP(ax, 0x0FE));	// 32360 cmp     ax, 0FEh ; '˛' ;~ 0FBC:29A3
cs=0xfbc;eip=0x0029a6; 	R(JZ(loc_20ba2));	// 32361 jz      short loc_20BA2 ;~ 0FBC:29A6
cs=0xfbc;eip=0x0029a8; 	T(CMP(ax, 0x0FF));	// 32362 cmp     ax, 0FFh ;~ 0FBC:29A8
cs=0xfbc;eip=0x0029ab; 	R(JNZ(loc_20b50));	// 32363 jnz     short loc_20B50 ;~ 0FBC:29AB
cs=0xfbc;eip=0x0029ad; 	R(JMP(loc_20bd4));	// 32364 jmp     loc_20BD4 ;~ 0FBC:29AD
loc_20b50:
	// 6572 
cs=0xfbc;eip=0x0029b0; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 32369 mov     al, [bp+var_73A] ;~ 0FBC:29B0
cs=0xfbc;eip=0x0029b4; 	T(CBW);	// 32370 cbw ;~ 0FBC:29B4
cs=0xfbc;eip=0x0029b5; 	T(MOV(bx, ax));	// 32371 mov     bx, ax ;~ 0FBC:29B5
cs=0xfbc;eip=0x0029b7; 	T(SHL(bx, 1));	// 32372 shl     bx, 1 ;~ 0FBC:29B7
cs=0xfbc;eip=0x0029b9; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 32373 mov     bx, trackrows[bx] ;~ 0FBC:29B9
cs=0xfbc;eip=0x0029bd; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32374 mov     al, [bp+var_3A4] ;~ 0FBC:29BD
cs=0xfbc;eip=0x0029c1; 	T(CBW);	// 32375 cbw ;~ 0FBC:29C1
cs=0xfbc;eip=0x0029c2; 	T(ADD(bx, ax));	// 32376 add     bx, ax ;~ 0FBC:29C2
cs=0xfbc;eip=0x0029c4; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 32377 add     bx, word ptr td14_elem_map_main ;~ 0FBC:29C4
cs=0xfbc;eip=0x0029c8; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 32378 mov     es, word ptr td14_elem_map_main+2 ;~ 0FBC:29C8
cs=0xfbc;eip=0x0029cc; 	T(MOV(al, *(raddr(es,bx))));	// 32379 mov     al, es:[bx] ;~ 0FBC:29CC
cs=0xfbc;eip=0x0029cf; 	X(MOV(*(raddr(ss,bp+var_e)), al));	// 32380 mov     [bp+var_E], al ;~ 0FBC:29CF
cs=0xfbc;eip=0x0029d2; 	R(JMP(loc_20c2e));	// 32381 jmp     loc_20C2E ;~ 0FBC:29D2
loc_20b76:
	// 6573 
cs=0xfbc;eip=0x0029d6; 	X(DEC(*(raddr(ss,bp+var_3a4))));	// 32386 dec     [bp+var_3A4] ;~ 0FBC:29D6
cs=0xfbc;eip=0x0029da; 	X(DEC(*(raddr(ss,bp+var_73a))));	// 32387 dec     [bp+var_73A] ;~ 0FBC:29DA
cs=0xfbc;eip=0x0029de; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 32388 mov     ax, [bp+var_8] ;~ 0FBC:29DE
cs=0xfbc;eip=0x0029e1; 	T(OR(ax, ax));	// 32389 or      ax, ax ;~ 0FBC:29E1
cs=0xfbc;eip=0x0029e3; 	R(JZ(loc_20b96));	// 32390 jz      short loc_20B96 ;~ 0FBC:29E3
cs=0xfbc;eip=0x0029e5; 	T(CMP(ax, 0x100));	// 32391 cmp     ax, 100h ;~ 0FBC:29E5
cs=0xfbc;eip=0x0029e8; 	R(JZ(loc_20c02));	// 32392 jz      short loc_20C02 ;~ 0FBC:29E8
cs=0xfbc;eip=0x0029ea; 	T(CMP(ax, 0x200));	// 32393 cmp     ax, 200h ;~ 0FBC:29EA
cs=0xfbc;eip=0x0029ed; 	R(JZ(loc_20c02));	// 32394 jz      short loc_20C02 ;~ 0FBC:29ED
cs=0xfbc;eip=0x0029ef; 	T(CMP(ax, 0x300));	// 32395 cmp     ax, 300h ;~ 0FBC:29EF
cs=0xfbc;eip=0x0029f2; 	R(JZ(loc_20b9c));	// 32396 jz      short loc_20B9C ;~ 0FBC:29F2
cs=0xfbc;eip=0x0029f4; 	R(JMP(loc_20b50));	// 32397 jmp     short loc_20B50 ;~ 0FBC:29F4
loc_20b96:
	// 6574 
cs=0xfbc;eip=0x0029f6; 	X(MOV(*(raddr(ss,bp+var_6)), 0x0C));	// 32401 mov     [bp+var_6], 0Ch ;~ 0FBC:29F6
cs=0xfbc;eip=0x0029fa; 	R(JMP(loc_20b50));	// 32402 jmp     short loc_20B50 ;~ 0FBC:29FA
loc_20b9c:
	// 6575 
cs=0xfbc;eip=0x0029fc; 	X(MOV(*(raddr(ss,bp+var_6)), 9));	// 32406 mov     [bp+var_6], 9 ;~ 0FBC:29FC
cs=0xfbc;eip=0x002a00; 	R(JMP(loc_20b50));	// 32407 jmp     short loc_20B50 ;~ 0FBC:2A00
loc_20ba2:
	// 6576 
cs=0xfbc;eip=0x002a02; 	X(DEC(*(raddr(ss,bp+var_73a))));	// 32411 dec     [bp+var_73A] ;~ 0FBC:2A02
cs=0xfbc;eip=0x002a06; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 32412 mov     ax, [bp+var_8] ;~ 0FBC:2A06
cs=0xfbc;eip=0x002a09; 	T(OR(ax, ax));	// 32413 or      ax, ax ;~ 0FBC:2A09
cs=0xfbc;eip=0x002a0b; 	R(JZ(loc_20bbe));	// 32414 jz      short loc_20BBE ;~ 0FBC:2A0B
cs=0xfbc;eip=0x002a0d; 	T(CMP(ax, 0x100));	// 32415 cmp     ax, 100h ;~ 0FBC:2A0D
cs=0xfbc;eip=0x002a10; 	R(JZ(loc_20bc4));	// 32416 jz      short loc_20BC4 ;~ 0FBC:2A10
cs=0xfbc;eip=0x002a12; 	T(CMP(ax, 0x200));	// 32417 cmp     ax, 200h ;~ 0FBC:2A12
cs=0xfbc;eip=0x002a15; 	R(JZ(loc_20c02));	// 32418 jz      short loc_20C02 ;~ 0FBC:2A15
cs=0xfbc;eip=0x002a17; 	T(CMP(ax, 0x300));	// 32419 cmp     ax, 300h ;~ 0FBC:2A17
cs=0xfbc;eip=0x002a1a; 	R(JZ(loc_20bcc));	// 32420 jz      short loc_20BCC ;~ 0FBC:2A1A
cs=0xfbc;eip=0x002a1c; 	R(JMP(loc_20b50));	// 32421 jmp     short loc_20B50 ;~ 0FBC:2A1C
loc_20bbe:
	// 6577 
cs=0xfbc;eip=0x002a1e; 	X(MOV(*(raddr(ss,bp+var_6)), 0x0B));	// 32425 mov     [bp+var_6], 0Bh ;~ 0FBC:2A1E
cs=0xfbc;eip=0x002a22; 	R(JMP(loc_20b50));	// 32426 jmp     short loc_20B50 ;~ 0FBC:2A22
loc_20bc4:
	// 6578 
cs=0xfbc;eip=0x002a24; 	X(MOV(*(raddr(ss,bp+var_6)), 6));	// 32430 mov     [bp+var_6], 6 ;~ 0FBC:2A24
cs=0xfbc;eip=0x002a28; 	R(JMP(loc_20b50));	// 32431 jmp     short loc_20B50 ;~ 0FBC:2A28
loc_20bcc:
	// 6579 
cs=0xfbc;eip=0x002a2c; 	X(MOV(*(raddr(ss,bp+var_6)), 7));	// 32437 mov     [bp+var_6], 7 ;~ 0FBC:2A2C
cs=0xfbc;eip=0x002a30; 	R(JMP(loc_20b50));	// 32438 jmp     loc_20B50 ;~ 0FBC:2A30
loc_20bd4:
	// 6580 
cs=0xfbc;eip=0x002a34; 	X(DEC(*(raddr(ss,bp+var_3a4))));	// 32443 dec     [bp+var_3A4] ;~ 0FBC:2A34
cs=0xfbc;eip=0x002a38; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 32444 mov     ax, [bp+var_8] ;~ 0FBC:2A38
cs=0xfbc;eip=0x002a3b; 	T(OR(ax, ax));	// 32445 or      ax, ax ;~ 0FBC:2A3B
cs=0xfbc;eip=0x002a3d; 	R(JZ(loc_20bf2));	// 32446 jz      short loc_20BF2 ;~ 0FBC:2A3D
cs=0xfbc;eip=0x002a3f; 	T(CMP(ax, 0x100));	// 32447 cmp     ax, 100h ;~ 0FBC:2A3F
cs=0xfbc;eip=0x002a42; 	R(JZ(loc_20c02));	// 32448 jz      short loc_20C02 ;~ 0FBC:2A42
cs=0xfbc;eip=0x002a44; 	T(CMP(ax, 0x200));	// 32449 cmp     ax, 200h ;~ 0FBC:2A44
cs=0xfbc;eip=0x002a47; 	R(JZ(loc_20bfa));	// 32450 jz      short loc_20BFA ;~ 0FBC:2A47
cs=0xfbc;eip=0x002a49; 	T(CMP(ax, 0x300));	// 32451 cmp     ax, 300h ;~ 0FBC:2A49
cs=0xfbc;eip=0x002a4c; 	R(JZ(loc_20c0a));	// 32452 jz      short loc_20C0A ;~ 0FBC:2A4C
cs=0xfbc;eip=0x002a4e; 	R(JMP(loc_20b50));	// 32453 jmp     loc_20B50 ;~ 0FBC:2A4E
loc_20bf2:
	// 6581 
cs=0xfbc;eip=0x002a52; 	X(MOV(*(raddr(ss,bp+var_6)), 0x0A));	// 32458 mov     [bp+var_6], 0Ah ;~ 0FBC:2A52
cs=0xfbc;eip=0x002a56; 	R(JMP(loc_20b50));	// 32459 jmp     loc_20B50 ;~ 0FBC:2A56
loc_20bfa:
	// 6582 
cs=0xfbc;eip=0x002a5a; 	X(MOV(*(raddr(ss,bp+var_6)), 5));	// 32464 mov     [bp+var_6], 5 ;~ 0FBC:2A5A
cs=0xfbc;eip=0x002a5e; 	R(JMP(loc_20b50));	// 32465 jmp     loc_20B50 ;~ 0FBC:2A5E
loc_20c02:
	// 6583 
cs=0xfbc;eip=0x002a62; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 32471 mov     [bp+var_6], 0 ;~ 0FBC:2A62
cs=0xfbc;eip=0x002a66; 	R(JMP(loc_20b50));	// 32472 jmp     loc_20B50 ;~ 0FBC:2A66
loc_20c0a:
	// 6584 
cs=0xfbc;eip=0x002a6a; 	X(MOV(*(raddr(ss,bp+var_6)), 8));	// 32477 mov     [bp+var_6], 8 ;~ 0FBC:2A6A
cs=0xfbc;eip=0x002a6e; 	R(JMP(loc_20b50));	// 32478 jmp     loc_20B50 ;~ 0FBC:2A6E
loc_20c12:
	// 6585 
cs=0xfbc;eip=0x002a72; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 32483 mov     ax, [bp+var_8] ;~ 0FBC:2A72
cs=0xfbc;eip=0x002a75; 	T(OR(ax, ax));	// 32484 or      ax, ax ;~ 0FBC:2A75
cs=0xfbc;eip=0x002a77; 	R(JZ(loc_20c2a));	// 32485 jz      short loc_20C2A ;~ 0FBC:2A77
cs=0xfbc;eip=0x002a79; 	T(CMP(ax, 0x100));	// 32486 cmp     ax, 100h ;~ 0FBC:2A79
cs=0xfbc;eip=0x002a7c; 	R(JZ(loc_20c48));	// 32487 jz      short loc_20C48 ;~ 0FBC:2A7C
cs=0xfbc;eip=0x002a7e; 	T(CMP(ax, 0x200));	// 32488 cmp     ax, 200h ;~ 0FBC:2A7E
cs=0xfbc;eip=0x002a81; 	R(JZ(loc_20c42));	// 32489 jz      short loc_20C42 ;~ 0FBC:2A81
cs=0xfbc;eip=0x002a83; 	T(CMP(ax, 0x300));	// 32490 cmp     ax, 300h ;~ 0FBC:2A83
cs=0xfbc;eip=0x002a86; 	R(JZ(loc_20c4e));	// 32491 jz      short loc_20C4E ;~ 0FBC:2A86
cs=0xfbc;eip=0x002a88; 	R(JMP(loc_20c2e));	// 32492 jmp     short loc_20C2E ;~ 0FBC:2A88
loc_20c2a:
	// 6586 
cs=0xfbc;eip=0x002a8a; 	X(MOV(*(raddr(ss,bp+var_6)), 2));	// 32496 mov     [bp+var_6], 2 ;~ 0FBC:2A8A
loc_20c2e:
	// 6587 
cs=0xfbc;eip=0x002a8e; 	T(CMP(*(raddr(ss,bp+var_4)), 0));	// 32500 cmp     [bp+var_4], 0 ;~ 0FBC:2A8E
cs=0xfbc;eip=0x002a92; 	R(JNZ(loc_20c54));	// 32501 jnz     short loc_20C54 ;~ 0FBC:2A92
cs=0xfbc;eip=0x002a94; 	T(CMP(*(raddr(ss,bp+var_6)), 0));	// 32502 cmp     [bp+var_6], 0 ;~ 0FBC:2A94
cs=0xfbc;eip=0x002a98; 	R(JNZ(loc_20c54));	// 32503 jnz     short loc_20C54 ;~ 0FBC:2A98
cs=0xfbc;eip=0x002a9a; 	X(MOV(*(raddr(ss,bp+var_3b0)), int_err));	// 32504 mov     [bp+var_3B0], int_err ;~ 0FBC:2A9A
cs=0xfbc;eip=0x002a9f; 	R(JMP(loc_2078d));	// 32505 jmp     loc_2078D ;~ 0FBC:2A9F
loc_20c42:
	// 6588 
cs=0xfbc;eip=0x002aa2; 	X(MOV(*(raddr(ss,bp+var_6)), 1));	// 32509 mov     [bp+var_6], 1 ;~ 0FBC:2AA2
cs=0xfbc;eip=0x002aa6; 	R(JMP(loc_20c2e));	// 32510 jmp     short loc_20C2E ;~ 0FBC:2AA6
loc_20c48:
	// 6589 
cs=0xfbc;eip=0x002aa8; 	X(MOV(*(raddr(ss,bp+var_6)), 4));	// 32514 mov     [bp+var_6], 4 ;~ 0FBC:2AA8
cs=0xfbc;eip=0x002aac; 	R(JMP(loc_20c2e));	// 32515 jmp     short loc_20C2E ;~ 0FBC:2AAC
loc_20c4e:
	// 6590 
cs=0xfbc;eip=0x002aae; 	X(MOV(*(raddr(ss,bp+var_6)), 3));	// 32519 mov     [bp+var_6], 3 ;~ 0FBC:2AAE
cs=0xfbc;eip=0x002ab2; 	R(JMP(loc_20c2e));	// 32520 jmp     short loc_20C2E ;~ 0FBC:2AB2
loc_20c54:
	// 6591 
cs=0xfbc;eip=0x002ab4; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 32525 mov     [bp+var_2], 0 ;~ 0FBC:2AB4
cs=0xfbc;eip=0x002ab8; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 32526 mov     al, [bp+var_E] ;~ 0FBC:2AB8
cs=0xfbc;eip=0x002abb; 	T(SUB(ah, ah));	// 32527 sub     ah, ah ;~ 0FBC:2ABB
cs=0xfbc;eip=0x002abd; 	T(MOV(bx, ax));	// 32528 mov     bx, ax ;~ 0FBC:2ABD
cs=0xfbc;eip=0x002abf; 	T(SHL(bx, 1));	// 32529 shl     bx, 1 ;~ 0FBC:2ABF
cs=0xfbc;eip=0x002ac1; 	T(ADD(bx, ax));	// 32530 add     bx, ax ;~ 0FBC:2AC1
cs=0xfbc;eip=0x002ac3; 	T(SHL(bx, 1));	// 32531 shl     bx, 1 ;~ 0FBC:2AC3
cs=0xfbc;eip=0x002ac5; 	T(ADD(bx, ax));	// 32532 add     bx, ax ;~ 0FBC:2AC5
cs=0xfbc;eip=0x002ac7; 	T(SHL(bx, 1));	// 32533 shl     bx, 1           ; *14 ;~ 0FBC:2AC7
cs=0xfbc;eip=0x002ac9; 	T(MOV(ax, *(dw*)(((db*)&trkobjectlist)+bx)));	// 32534 mov     ax, trkObjectList[bx] ;~ 0FBC:2AC9
cs=0xfbc;eip=0x002acd; 	X(MOV(*(dw*)(raddr(ss,bp+var_39c)), ax));	// 32535 mov     [bp+var_39C], ax ;~ 0FBC:2ACD
cs=0xfbc;eip=0x002ad1; 	T(OR(ax, ax));	// 32536 or      ax, ax ;~ 0FBC:2AD1
cs=0xfbc;eip=0x002ad3; 	R(JNZ(loc_20c78));	// 32537 jnz     short loc_20C78 ;~ 0FBC:2AD3
cs=0xfbc;eip=0x002ad5; 	R(JMP(loc_20e82));	// 32538 jmp     loc_20E82 ;~ 0FBC:2AD5
loc_20c78:
	// 6592 
cs=0xfbc;eip=0x002ad8; 	T(SUB(si, si));	// 32542 sub     si, si ;~ 0FBC:2AD8
cs=0xfbc;eip=0x002ada; 	R(JMP(loc_20e3a));	// 32543 jmp     loc_20E3A ;~ 0FBC:2ADA
loc_20c7e:
	// 6593 
cs=0xfbc;eip=0x002ade; 	X(MOV(*(raddr(ss,bp+var_ae4)), 0));	// 32548 mov     [bp+var_AE4], 0 ;~ 0FBC:2ADE
cs=0xfbc;eip=0x002ae3; 	R(JMP(loc_20ca2));	// 32549 jmp     short loc_20CA2 ;~ 0FBC:2AE3
loc_20c86:
	// 6594 
cs=0xfbc;eip=0x002ae6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3ae))));	// 32554 mov     bx, [bp+var_3AE] ;~ 0FBC:2AE6
cs=0xfbc;eip=0x002aea; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 32555 mov     al, [bp+var_6] ;~ 0FBC:2AEA
cs=0xfbc;eip=0x002aed; 	T(CMP(*(raddr(ds,bx+2)), al));	// 32556 cmp     [bx+2], al ;~ 0FBC:2AED
cs=0xfbc;eip=0x002af0; 	R(JNZ(loc_20ca2));	// 32557 jnz     short loc_20CA2 ;~ 0FBC:2AF0
cs=0xfbc;eip=0x002af2; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 32558 mov     al, [bp+var_12] ;~ 0FBC:2AF2
cs=0xfbc;eip=0x002af5; 	T(CMP(*(raddr(ds,bx+4)), al));	// 32559 cmp     [bx+4], al ;~ 0FBC:2AF5
cs=0xfbc;eip=0x002af8; 	R(JZ(loc_20c9d));	// 32560 jz      short loc_20C9D ;~ 0FBC:2AF8
cs=0xfbc;eip=0x002afa; 	R(JMP(loc_20e79));	// 32561 jmp     loc_20E79 ;~ 0FBC:2AFA
loc_20c9d:
	// 6595 
cs=0xfbc;eip=0x002afd; 	X(MOV(*(raddr(ss,bp+var_ae4)), 1));	// 32565 mov     [bp+var_AE4], 1 ;~ 0FBC:2AFD
loc_20ca2:
	// 6596 
cs=0xfbc;eip=0x002b02; 	T(CMP(*(raddr(ss,bp+var_ae4)), 0));	// 32569 cmp     [bp+var_AE4], 0 ;~ 0FBC:2B02
cs=0xfbc;eip=0x002b07; 	R(JGE(loc_20cac));	// 32570 jge     short loc_20CAC ;~ 0FBC:2B07
cs=0xfbc;eip=0x002b09; 	R(JMP(loc_20d48));	// 32571 jmp     loc_20D48 ;~ 0FBC:2B09
loc_20cac:
	// 6597 
cs=0xfbc;eip=0x002b0c; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 32575 mov     al, [bp+var_73A] ;~ 0FBC:2B0C
cs=0xfbc;eip=0x002b10; 	T(CBW);	// 32576 cbw ;~ 0FBC:2B10
cs=0xfbc;eip=0x002b11; 	T(MOV(bx, ax));	// 32577 mov     bx, ax ;~ 0FBC:2B11
cs=0xfbc;eip=0x002b13; 	T(SHL(bx, 1));	// 32578 shl     bx, 1 ;~ 0FBC:2B13
cs=0xfbc;eip=0x002b15; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 32579 mov     bx, trackrows[bx] ;~ 0FBC:2B15
cs=0xfbc;eip=0x002b19; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32580 mov     al, [bp+var_3A4] ;~ 0FBC:2B19
cs=0xfbc;eip=0x002b1d; 	T(CBW);	// 32581 cbw ;~ 0FBC:2B1D
cs=0xfbc;eip=0x002b1e; 	T(ADD(bx, ax));	// 32582 add     bx, ax ;~ 0FBC:2B1E
cs=0xfbc;eip=0x002b20; 	T(ADD(bx, bp));	// 32583 add     bx, bp ;~ 0FBC:2B20
cs=0xfbc;eip=0x002b22; 	T(CMP(*(raddr(ds,bx-0x738)), 0));	// 32584 cmp     byte ptr [bx-738h], 0 ; ?? ;~ 0FBC:2B22
cs=0xfbc;eip=0x002b27; 	R(JZ(loc_20d48));	// 32585 jz      short loc_20D48 ;~ 0FBC:2B27
cs=0xfbc;eip=0x002b29; 	T(SUB(di, di));	// 32586 sub     di, di ;~ 0FBC:2B29
cs=0xfbc;eip=0x002b2b; 	R(JMP(loc_20d0e));	// 32587 jmp     short loc_20D0E ;~ 0FBC:2B2B
loc_20cce:
	// 6598 
cs=0xfbc;eip=0x002b2e; 	X(MOV(*(raddr(ss,bp+var_ae4)), 0x0FF));	// 32592 mov     [bp+var_AE4], 0FFh ;~ 0FBC:2B2E
cs=0xfbc;eip=0x002b33; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3ac))));	// 32593 mov     ax, [bp+var_3AC] ;~ 0FBC:2B33
cs=0xfbc;eip=0x002b37; 	T(SHL(ax, 1));	// 32594 shl     ax, 1 ;~ 0FBC:2B37
cs=0xfbc;eip=0x002b39; 	T(ADD(ax, *(dw*)(((db*)&td01_track_file_cpy))));	// 32595 add     ax, word ptr td01_track_file_cpy ;~ 0FBC:2B39
cs=0xfbc;eip=0x002b3d; 	T(MOV(dx, *(dw*)(((db*)&td01_track_file_cpy)+2)));	// 32596 mov     dx, word ptr td01_track_file_cpy+2 ;~ 0FBC:2B3D
cs=0xfbc;eip=0x002b41; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_af0))), ax));	// 32597 mov     word ptr [bp+var_AF0], ax ;~ 0FBC:2B41
cs=0xfbc;eip=0x002b45; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_af0+2))), dx));	// 32598 mov     word ptr [bp+var_AF0+2], dx ;~ 0FBC:2B45
cs=0xfbc;eip=0x002b49; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_af0))));	// 32599 les     bx, [bp+var_AF0] ;~ 0FBC:2B49
cs=0xfbc;eip=0x002b4d; 	T(CMP(*(dw*)(raddr(es,bx)), 0x0FFFF));	// 32600 cmp     word ptr es:[bx], 0FFFFh ;~ 0FBC:2B4D
cs=0xfbc;eip=0x002b51; 	R(JZ(loc_20d01));	// 32601 jz      short loc_20D01 ;~ 0FBC:2B51
cs=0xfbc;eip=0x002b53; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3ac))));	// 32602 mov     bx, [bp+var_3AC] ;~ 0FBC:2B53
cs=0xfbc;eip=0x002b57; 	T(SHL(bx, 1));	// 32603 shl     bx, 1 ;~ 0FBC:2B57
cs=0xfbc;eip=0x002b59; 	T(ADD(bx, *(dw*)(((db*)&td02_penalty_related))));	// 32604 add     bx, word ptr td02_penalty_related ;~ 0FBC:2B59
cs=0xfbc;eip=0x002b5d; 	T(MOV(es, *(dw*)(((db*)&td02_penalty_related)+2)));	// 32605 mov     es, word ptr td02_penalty_related+2 ;~ 0FBC:2B5D
loc_20d01:
	// 6599 
cs=0xfbc;eip=0x002b61; 	X(MOV(*(dw*)(raddr(es,bx)), di));	// 32608 mov     es:[bx], di ;~ 0FBC:2B61
cs=0xfbc;eip=0x002b64; 	T(OR(di, di));	// 32609 or      di, di ;~ 0FBC:2B64
cs=0xfbc;eip=0x002b66; 	R(JNZ(loc_20d0d));	// 32610 jnz     short loc_20D0D ;~ 0FBC:2B66
cs=0xfbc;eip=0x002b68; 	X(MOV(*(raddr(ss,bp+var_ae8)), 1));	// 32611 mov     [bp+var_AE8], 1 ;~ 0FBC:2B68
loc_20d0d:
	// 6600 
cs=0xfbc;eip=0x002b6d; 	T(INC(di));	// 32615 inc     di ;~ 0FBC:2B6D
loc_20d0e:
	// 6601 
cs=0xfbc;eip=0x002b6e; 	T(CMP(track_pieces_counter, di));	// 32618 cmp     track_pieces_counter, di ;~ 0FBC:2B6E
cs=0xfbc;eip=0x002b72; 	R(JLE(loc_20d48));	// 32619 jle     short loc_20D48 ;~ 0FBC:2B72
cs=0xfbc;eip=0x002b74; 	T(LES(bx, td21_col_from_path));	// 32620 les     bx, td21_col_from_path ;~ 0FBC:2B74
cs=0xfbc;eip=0x002b78; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32621 mov     al, [bp+var_3A4] ;~ 0FBC:2B78
cs=0xfbc;eip=0x002b7c; 	T(CMP(*(raddr(es,bx+di)), al));	// 32622 cmp     es:[bx+di], al ;~ 0FBC:2B7C
cs=0xfbc;eip=0x002b7f; 	R(JNZ(loc_20d0d));	// 32623 jnz     short loc_20D0D ;~ 0FBC:2B7F
cs=0xfbc;eip=0x002b81; 	T(LES(bx, td22_row_from_path));	// 32624 les     bx, td22_row_from_path ;~ 0FBC:2B81
cs=0xfbc;eip=0x002b85; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 32625 mov     al, [bp+var_73A] ;~ 0FBC:2B85
cs=0xfbc;eip=0x002b89; 	T(CMP(*(raddr(es,bx+di)), al));	// 32626 cmp     es:[bx+di], al ;~ 0FBC:2B89
cs=0xfbc;eip=0x002b8c; 	R(JNZ(loc_20d0d));	// 32627 jnz     short loc_20D0D ;~ 0FBC:2B8C
cs=0xfbc;eip=0x002b8e; 	T(MOV(ax, si));	// 32628 mov     ax, si ;~ 0FBC:2B8E
cs=0xfbc;eip=0x002b90; 	T(CMP(*(raddr(ss,bp+di+var_ad4)), al));	// 32629 cmp     [bp+di+var_AD4], al ;~ 0FBC:2B90
cs=0xfbc;eip=0x002b94; 	R(JNZ(loc_20d0d));	// 32630 jnz     short loc_20D0D ;~ 0FBC:2B94
cs=0xfbc;eip=0x002b96; 	T(MOV(al, *(raddr(ss,bp+var_ae4))));	// 32631 mov     al, [bp+var_AE4] ;~ 0FBC:2B96
cs=0xfbc;eip=0x002b9a; 	T(CMP(*(raddr(ss,bp+di+var_398)), al));	// 32632 cmp     [bp+di+var_398], al ;~ 0FBC:2B9A
cs=0xfbc;eip=0x002b9e; 	R(JZ(loc_20cce));	// 32633 jz      short loc_20CCE ;~ 0FBC:2B9E
cs=0xfbc;eip=0x002ba0; 	X(MOV(*(raddr(ss,bp+var_3b0)), wrong_way));	// 32634 mov     [bp+var_3B0], wrong_way ;~ 0FBC:2BA0
cs=0xfbc;eip=0x002ba5; 	R(JMP(loc_2078d));	// 32635 jmp     loc_2078D ;~ 0FBC:2BA5
loc_20d48:
	// 6602 
cs=0xfbc;eip=0x002ba8; 	T(CMP(*(raddr(ss,bp+var_ae4)), 0));	// 32640 cmp     [bp+var_AE4], 0 ;~ 0FBC:2BA8
cs=0xfbc;eip=0x002bad; 	R(JGE(loc_20d52));	// 32641 jge     short loc_20D52 ;~ 0FBC:2BAD
cs=0xfbc;eip=0x002baf; 	R(JMP(loc_20e39));	// 32642 jmp     loc_20E39 ;~ 0FBC:2BAF
loc_20d52:
	// 6603 
cs=0xfbc;eip=0x002bb2; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 32646 cmp     [bp+var_2], 0 ;~ 0FBC:2BB2
cs=0xfbc;eip=0x002bb6; 	R(JNZ(loc_20d6a));	// 32647 jnz     short loc_20D6A ;~ 0FBC:2BB6
cs=0xfbc;eip=0x002bb8; 	T(MOV(ax, si));	// 32648 mov     ax, si ;~ 0FBC:2BB8
cs=0xfbc;eip=0x002bba; 	X(MOV(*(raddr(ss,bp+var_742)), al));	// 32649 mov     [bp+var_742], al ;~ 0FBC:2BBA
cs=0xfbc;eip=0x002bbe; 	T(MOV(al, *(raddr(ss,bp+var_ae4))));	// 32650 mov     al, [bp+var_AE4] ;~ 0FBC:2BBE
cs=0xfbc;eip=0x002bc2; 	X(MOV(*(raddr(ss,bp+var_73e)), al));	// 32651 mov     [bp+var_73E], al ;~ 0FBC:2BC2
cs=0xfbc;eip=0x002bc6; 	R(JMP(loc_20e36));	// 32652 jmp     loc_20E36 ;~ 0FBC:2BC6
loc_20d6a:
	// 6604 
cs=0xfbc;eip=0x002bca; 	T(CMP(*(raddr(ss,bp+var_746)), 0x40));	// 32657 cmp     [bp+var_746], 40h ; '@' ;~ 0FBC:2BCA
cs=0xfbc;eip=0x002bcf; 	R(JNZ(loc_20d7a));	// 32658 jnz     short loc_20D7A ;~ 0FBC:2BCF
cs=0xfbc;eip=0x002bd1; 	X(MOV(*(raddr(ss,bp+var_3b0)), many_path));	// 32659 mov     [bp+var_3B0], many_path ;~ 0FBC:2BD1
cs=0xfbc;eip=0x002bd6; 	R(JMP(loc_2078d));	// 32660 jmp     loc_2078D ;~ 0FBC:2BD6
loc_20d7a:
	// 6605 
cs=0xfbc;eip=0x002bda; 	T(MOV(al, *(raddr(ss,bp+var_746))));	// 32665 mov     al, [bp+var_746] ;~ 0FBC:2BDA
cs=0xfbc;eip=0x002bde; 	T(SUB(ah, ah));	// 32666 sub     ah, ah ;~ 0FBC:2BDE
cs=0xfbc;eip=0x002be0; 	T(MOV(cx, ax));	// 32667 mov     cx, ax ;~ 0FBC:2BE0
cs=0xfbc;eip=0x002be2; 	T(SHL(ax, 1));	// 32668 shl     ax, 1 ;~ 0FBC:2BE2
cs=0xfbc;eip=0x002be4; 	T(ADD(ax, cx));	// 32669 add     ax, cx ;~ 0FBC:2BE4
cs=0xfbc;eip=0x002be6; 	T(SHL(ax, 1));	// 32670 shl     ax, 1 ;~ 0FBC:2BE6
cs=0xfbc;eip=0x002be8; 	T(ADD(ax, cx));	// 32671 add     ax, cx ;~ 0FBC:2BE8
cs=0xfbc;eip=0x002bea; 	T(SHL(ax, 1));	// 32672 shl     ax, 1 ;~ 0FBC:2BEA
cs=0xfbc;eip=0x002bec; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_74a))));	// 32673 add     ax, [bp+var_74A] ;~ 0FBC:2BEC
cs=0xfbc;eip=0x002bf0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_748))));	// 32674 mov     dx, [bp+var_748] ;~ 0FBC:2BF0
cs=0xfbc;eip=0x002bf4; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_3a0))), ax));	// 32675 mov     word ptr [bp+var_3A0], ax ;~ 0FBC:2BF4
cs=0xfbc;eip=0x002bf8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_3a0+2))), dx));	// 32676 mov     word ptr [bp+var_3A0+2], dx ;~ 0FBC:2BF8
cs=0xfbc;eip=0x002bfc; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32677 les     bx, [bp+var_3A0] ;~ 0FBC:2BFC
cs=0xfbc;eip=0x002c00; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32678 mov     al, [bp+var_3A4] ;~ 0FBC:2C00
cs=0xfbc;eip=0x002c04; 	X(MOV(*(raddr(es,bx)), al));	// 32679 mov     es:[bx], al ;~ 0FBC:2C04
cs=0xfbc;eip=0x002c07; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32680 les     bx, [bp+var_3A0] ;~ 0FBC:2C07
cs=0xfbc;eip=0x002c0b; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 32681 mov     al, [bp+var_73A] ;~ 0FBC:2C0B
cs=0xfbc;eip=0x002c0f; 	X(MOV(*(raddr(es,bx+1)), al));	// 32682 mov     es:[bx+1], al ;~ 0FBC:2C0F
cs=0xfbc;eip=0x002c13; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32683 les     bx, [bp+var_3A0] ;~ 0FBC:2C13
cs=0xfbc;eip=0x002c17; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 32684 mov     al, [bp+var_E] ;~ 0FBC:2C17
cs=0xfbc;eip=0x002c1a; 	X(MOV(*(raddr(es,bx+2)), al));	// 32685 mov     es:[bx+2], al ;~ 0FBC:2C1A
cs=0xfbc;eip=0x002c1e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32686 les     bx, [bp+var_3A0] ;~ 0FBC:2C1E
cs=0xfbc;eip=0x002c22; 	T(MOV(ax, si));	// 32687 mov     ax, si ;~ 0FBC:2C22
cs=0xfbc;eip=0x002c24; 	X(MOV(*(raddr(es,bx+3)), al));	// 32688 mov     es:[bx+3], al ;~ 0FBC:2C24
cs=0xfbc;eip=0x002c28; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32689 les     bx, [bp+var_3A0] ;~ 0FBC:2C28
cs=0xfbc;eip=0x002c2c; 	T(MOV(al, *(raddr(ss,bp+var_ae4))));	// 32690 mov     al, [bp+var_AE4] ;~ 0FBC:2C2C
cs=0xfbc;eip=0x002c30; 	X(MOV(*(raddr(es,bx+4)), al));	// 32691 mov     es:[bx+4], al ;~ 0FBC:2C30
cs=0xfbc;eip=0x002c34; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32692 les     bx, [bp+var_3A0] ;~ 0FBC:2C34
cs=0xfbc;eip=0x002c38; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 32693 mov     al, [bp+var_12] ;~ 0FBC:2C38
cs=0xfbc;eip=0x002c3b; 	X(MOV(*(raddr(es,bx+0x0B)), al));	// 32694 mov     es:[bx+0Bh], al ;~ 0FBC:2C3B
cs=0xfbc;eip=0x002c3f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32695 les     bx, [bp+var_3A0] ;~ 0FBC:2C3F
cs=0xfbc;eip=0x002c43; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3ac))));	// 32696 mov     ax, [bp+var_3AC] ;~ 0FBC:2C43
cs=0xfbc;eip=0x002c47; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), ax));	// 32697 mov     es:[bx+0Ch], ax ;~ 0FBC:2C47
cs=0xfbc;eip=0x002c4b; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32698 les     bx, [bp+var_3A0] ;~ 0FBC:2C4B
cs=0xfbc;eip=0x002c4f; 	T(MOV(al, *(raddr(ss,bp+var_3a8))));	// 32699 mov     al, [bp+var_3A8] ;~ 0FBC:2C4F
cs=0xfbc;eip=0x002c53; 	X(MOV(*(raddr(es,bx+5)), al));	// 32700 mov     es:[bx+5], al ;~ 0FBC:2C53
cs=0xfbc;eip=0x002c57; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32701 les     bx, [bp+var_3A0] ;~ 0FBC:2C57
cs=0xfbc;eip=0x002c5b; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 32702 mov     al, [bp+var_10] ;~ 0FBC:2C5B
cs=0xfbc;eip=0x002c5e; 	X(MOV(*(raddr(es,bx+6)), al));	// 32703 mov     es:[bx+6], al ;~ 0FBC:2C5E
cs=0xfbc;eip=0x002c62; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32704 les     bx, [bp+var_3A0] ;~ 0FBC:2C62
cs=0xfbc;eip=0x002c66; 	T(MOV(al, *(raddr(ss,bp+var_39a))));	// 32705 mov     al, [bp+var_39A] ;~ 0FBC:2C66
cs=0xfbc;eip=0x002c6a; 	X(MOV(*(raddr(es,bx+7)), al));	// 32706 mov     es:[bx+7], al ;~ 0FBC:2C6A
cs=0xfbc;eip=0x002c6e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32707 les     bx, [bp+var_3A0] ;~ 0FBC:2C6E
cs=0xfbc;eip=0x002c72; 	T(MOV(al, *(raddr(ss,bp+var_ae6))));	// 32708 mov     al, [bp+var_AE6] ;~ 0FBC:2C72
cs=0xfbc;eip=0x002c76; 	X(MOV(*(raddr(es,bx+8)), al));	// 32709 mov     es:[bx+8], al ;~ 0FBC:2C76
cs=0xfbc;eip=0x002c7a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32710 les     bx, [bp+var_3A0] ;~ 0FBC:2C7A
cs=0xfbc;eip=0x002c7e; 	T(MOV(al, *(raddr(ss,bp+var_3aa))));	// 32711 mov     al, [bp+var_3AA] ;~ 0FBC:2C7E
cs=0xfbc;eip=0x002c82; 	X(MOV(*(raddr(es,bx+9)), al));	// 32712 mov     es:[bx+9], al ;~ 0FBC:2C82
cs=0xfbc;eip=0x002c86; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3a0))));	// 32713 les     bx, [bp+var_3A0] ;~ 0FBC:2C86
cs=0xfbc;eip=0x002c8a; 	T(MOV(al, *(raddr(ss,bp+var_740))));	// 32714 mov     al, [bp+var_740] ;~ 0FBC:2C8A
cs=0xfbc;eip=0x002c8e; 	X(MOV(*(raddr(es,bx+0x0A)), al));	// 32715 mov     es:[bx+0Ah], al ;~ 0FBC:2C8E
cs=0xfbc;eip=0x002c92; 	X(INC(*(raddr(ss,bp+var_746))));	// 32716 inc     [bp+var_746] ;~ 0FBC:2C92
loc_20e36:
	// 6606 
cs=0xfbc;eip=0x002c96; 	X(INC(*(raddr(ss,bp+var_2))));	// 32719 inc     [bp+var_2] ;~ 0FBC:2C96
loc_20e39:
	// 6607 
cs=0xfbc;eip=0x002c99; 	T(INC(si));	// 32722 inc     si ;~ 0FBC:2C99
loc_20e3a:
	// 6608 
cs=0xfbc;eip=0x002c9a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_39c))));	// 32725 mov     bx, [bp+var_39C] ;~ 0FBC:2C9A
cs=0xfbc;eip=0x002c9e; 	T(MOV(al, *(raddr(ds,bx+0))));	// 32726 mov     al, [bx+0] ;~ 0FBC:2C9E
cs=0xfbc;eip=0x002ca0; 	T(SUB(ah, ah));	// 32727 sub     ah, ah ;~ 0FBC:2CA0
cs=0xfbc;eip=0x002ca2; 	T(CMP(ax, si));	// 32728 cmp     ax, si ;~ 0FBC:2CA2
cs=0xfbc;eip=0x002ca4; 	R(JBE(loc_20e82));	// 32729 jbe     short loc_20E82 ;~ 0FBC:2CA4
cs=0xfbc;eip=0x002ca6; 	X(MOV(*(raddr(ss,bp+var_ae4)), 0x0FF));	// 32730 mov     [bp+var_AE4], 0FFh ;~ 0FBC:2CA6
cs=0xfbc;eip=0x002cab; 	T(MOV(ax, bx));	// 32731 mov     ax, bx ;~ 0FBC:2CAB
cs=0xfbc;eip=0x002cad; 	T(MOV(cx, si));	// 32732 mov     cx, si ;~ 0FBC:2CAD
cs=0xfbc;eip=0x002caf; 	T(MOV(dx, cx));	// 32733 mov     dx, cx ;~ 0FBC:2CAF
cs=0xfbc;eip=0x002cb1; 	T(SHL(cx, 1));	// 32734 shl     cx, 1 ;~ 0FBC:2CB1
cs=0xfbc;eip=0x002cb3; 	T(ADD(cx, dx));	// 32735 add     cx, dx ;~ 0FBC:2CB3
cs=0xfbc;eip=0x002cb5; 	T(SHL(cx, 1));	// 32736 shl     cx, 1 ;~ 0FBC:2CB5
cs=0xfbc;eip=0x002cb7; 	T(ADD(cx, dx));	// 32737 add     cx, dx ;~ 0FBC:2CB7
cs=0xfbc;eip=0x002cb9; 	T(SHL(cx, 1));	// 32738 shl     cx, 1           ; cx = si*14 ;~ 0FBC:2CB9
cs=0xfbc;eip=0x002cbb; 	T(ADD(ax, cx));	// 32739 add     ax, cx ;~ 0FBC:2CBB
cs=0xfbc;eip=0x002cbd; 	X(MOV(*(dw*)(raddr(ss,bp+var_3ae)), ax));	// 32740 mov     [bp+var_3AE], ax ;~ 0FBC:2CBD
cs=0xfbc;eip=0x002cc1; 	T(MOV(bx, ax));	// 32741 mov     bx, ax ;~ 0FBC:2CC1
cs=0xfbc;eip=0x002cc3; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 32742 mov     al, [bp+var_6] ;~ 0FBC:2CC3
cs=0xfbc;eip=0x002cc6; 	T(CMP(*(raddr(ds,bx+1)), al));	// 32743 cmp     [bx+1], al ;~ 0FBC:2CC6
cs=0xfbc;eip=0x002cc9; 	R(JZ(loc_20e6e));	// 32744 jz      short loc_20E6E ;~ 0FBC:2CC9
cs=0xfbc;eip=0x002ccb; 	R(JMP(loc_20c86));	// 32745 jmp     loc_20C86 ;~ 0FBC:2CCB
loc_20e6e:
	// 6609 
cs=0xfbc;eip=0x002cce; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 32749 mov     al, [bp+var_12] ;~ 0FBC:2CCE
cs=0xfbc;eip=0x002cd1; 	T(CMP(*(raddr(ds,bx+3)), al));	// 32750 cmp     [bx+3], al ;~ 0FBC:2CD1
cs=0xfbc;eip=0x002cd4; 	R(JNZ(loc_20e79));	// 32751 jnz     short loc_20E79 ;~ 0FBC:2CD4
cs=0xfbc;eip=0x002cd6; 	R(JMP(loc_20c7e));	// 32752 jmp     loc_20C7E ;~ 0FBC:2CD6
loc_20e79:
	// 6610 
cs=0xfbc;eip=0x002cd9; 	X(MOV(*(raddr(ss,bp+var_3b0)), elem_mism));	// 32757 mov     [bp+var_3B0], elem_mism ;~ 0FBC:2CD9
cs=0xfbc;eip=0x002cde; 	R(JMP(loc_2078d));	// 32758 jmp     loc_2078D ;~ 0FBC:2CDE
loc_20e82:
	// 6611 
cs=0xfbc;eip=0x002ce2; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 32764 cmp     [bp+var_2], 0 ;~ 0FBC:2CE2
cs=0xfbc;eip=0x002ce6; 	R(JZ(loc_20e8b));	// 32765 jz      short loc_20E8B ;~ 0FBC:2CE6
cs=0xfbc;eip=0x002ce8; 	R(JMP(loc_20aa8));	// 32766 jmp     loc_20AA8 ;~ 0FBC:2CE8
loc_20e8b:
	// 6612 
cs=0xfbc;eip=0x002ceb; 	T(CMP(*(raddr(ss,bp+var_12)), 1));	// 32770 cmp     [bp+var_12], 1 ;~ 0FBC:2CEB
cs=0xfbc;eip=0x002cef; 	R(JZ(loc_20e94));	// 32771 jz      short loc_20E94 ;~ 0FBC:2CEF
cs=0xfbc;eip=0x002cf1; 	R(JMP(loc_20a0c));	// 32772 jmp     loc_20A0C ;~ 0FBC:2CF1
loc_20e94:
	// 6613 
cs=0xfbc;eip=0x002cf4; 	T(CMP(*(raddr(ss,bp+var_4)), 2));	// 32776 cmp     [bp+var_4], 2 ;~ 0FBC:2CF4
cs=0xfbc;eip=0x002cf8; 	R(JC(loc_20e9d));	// 32777 jb      short loc_20E9D ;~ 0FBC:2CF8
cs=0xfbc;eip=0x002cfa; 	R(JMP(loc_20a0c));	// 32778 jmp     loc_20A0C ;~ 0FBC:2CFA
loc_20e9d:
	// 6614 
cs=0xfbc;eip=0x002cfd; 	T(CMP(*(raddr(ss,bp+var_3a8)), 2));	// 32782 cmp     [bp+var_3A8], 2 ;~ 0FBC:2CFD
cs=0xfbc;eip=0x002d02; 	R(JNC(loc_20eac));	// 32783 jnb     short loc_20EAC ;~ 0FBC:2D02
cs=0xfbc;eip=0x002d04; 	X(MOV(*(raddr(ss,bp+var_3b0)), no_runway));	// 32784 mov     [bp+var_3B0], no_runway ;~ 0FBC:2D04
cs=0xfbc;eip=0x002d09; 	R(JMP(loc_2078d));	// 32785 jmp     loc_2078D ;~ 0FBC:2D09
loc_20eac:
	// 6615 
cs=0xfbc;eip=0x002d0c; 	X(INC(*(raddr(ss,bp+var_3a8))));	// 32789 inc     [bp+var_3A8] ;~ 0FBC:2D0C
cs=0xfbc;eip=0x002d10; 	X(INC(*(raddr(ss,bp+var_4))));	// 32790 inc     [bp+var_4] ;~ 0FBC:2D10
cs=0xfbc;eip=0x002d13; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 32791 mov     ax, [bp+var_8] ;~ 0FBC:2D13
cs=0xfbc;eip=0x002d16; 	T(OR(ax, ax));	// 32792 or      ax, ax ;~ 0FBC:2D16
cs=0xfbc;eip=0x002d18; 	R(JZ(loc_20ecc));	// 32793 jz      short loc_20ECC ;~ 0FBC:2D18
cs=0xfbc;eip=0x002d1a; 	T(CMP(ax, 0x100));	// 32794 cmp     ax, 100h ;~ 0FBC:2D1A
cs=0xfbc;eip=0x002d1d; 	R(JZ(loc_20ef6));	// 32795 jz      short loc_20EF6 ;~ 0FBC:2D1D
cs=0xfbc;eip=0x002d1f; 	T(CMP(ax, 0x200));	// 32796 cmp     ax, 200h ;~ 0FBC:2D1F
cs=0xfbc;eip=0x002d22; 	R(JZ(loc_20ee4));	// 32797 jz      short loc_20EE4 ;~ 0FBC:2D22
cs=0xfbc;eip=0x002d24; 	T(CMP(ax, 0x300));	// 32798 cmp     ax, 300h ;~ 0FBC:2D24
cs=0xfbc;eip=0x002d27; 	R(JZ(loc_20f08));	// 32799 jz      short loc_20F08 ;~ 0FBC:2D27
cs=0xfbc;eip=0x002d29; 	R(JMP(def_2140f));	// 32800 jmp     def_2140F       ; jumptable 0002140F default case ;~ 0FBC:2D29
loc_20ecc:
	// 6616 
cs=0xfbc;eip=0x002d2c; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 32804 mov     al, [bp+var_10] ;~ 0FBC:2D2C
cs=0xfbc;eip=0x002d2f; 	X(MOV(*(raddr(ss,bp+var_3a4)), al));	// 32805 mov     [bp+var_3A4], al ;~ 0FBC:2D2F
cs=0xfbc;eip=0x002d33; 	T(MOV(al, *(raddr(ss,bp+var_39a))));	// 32806 mov     al, [bp+var_39A] ;~ 0FBC:2D33
cs=0xfbc;eip=0x002d37; 	T(SUB(al, *(raddr(ss,bp+var_4))));	// 32807 sub     al, [bp+var_4] ;~ 0FBC:2D37
cs=0xfbc;eip=0x002d3a; 	T(DEC(al));	// 32808 dec     al ;~ 0FBC:2D3A
loc_20edc:
	// 6617 
cs=0xfbc;eip=0x002d3c; 	X(MOV(*(raddr(ss,bp+var_73a)), al));	// 32811 mov     [bp+var_73A], al ;~ 0FBC:2D3C
cs=0xfbc;eip=0x002d40; 	R(JMP(def_2140f));	// 32812 jmp     def_2140F       ; jumptable 0002140F default case ;~ 0FBC:2D40
loc_20ee4:
	// 6618 
cs=0xfbc;eip=0x002d44; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 32817 mov     al, [bp+var_10] ;~ 0FBC:2D44
cs=0xfbc;eip=0x002d47; 	X(MOV(*(raddr(ss,bp+var_3a4)), al));	// 32818 mov     [bp+var_3A4], al ;~ 0FBC:2D47
cs=0xfbc;eip=0x002d4b; 	T(MOV(al, *(raddr(ss,bp+var_39a))));	// 32819 mov     al, [bp+var_39A] ;~ 0FBC:2D4B
cs=0xfbc;eip=0x002d4f; 	T(ADD(al, *(raddr(ss,bp+var_4))));	// 32820 add     al, [bp+var_4] ;~ 0FBC:2D4F
cs=0xfbc;eip=0x002d52; 	T(INC(al));	// 32821 inc     al ;~ 0FBC:2D52
cs=0xfbc;eip=0x002d54; 	R(JMP(loc_20edc));	// 32822 jmp     short loc_20EDC ;~ 0FBC:2D54
loc_20ef6:
	// 6619 
cs=0xfbc;eip=0x002d56; 	T(MOV(al, *(raddr(ss,bp+var_39a))));	// 32826 mov     al, [bp+var_39A] ;~ 0FBC:2D56
cs=0xfbc;eip=0x002d5a; 	X(MOV(*(raddr(ss,bp+var_73a)), al));	// 32827 mov     [bp+var_73A], al ;~ 0FBC:2D5A
cs=0xfbc;eip=0x002d5e; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 32828 mov     al, [bp+var_10] ;~ 0FBC:2D5E
cs=0xfbc;eip=0x002d61; 	T(ADD(al, *(raddr(ss,bp+var_4))));	// 32829 add     al, [bp+var_4] ;~ 0FBC:2D61
cs=0xfbc;eip=0x002d64; 	T(INC(al));	// 32830 inc     al ;~ 0FBC:2D64
cs=0xfbc;eip=0x002d66; 	R(JMP(loc_20f18));	// 32831 jmp     short loc_20F18 ;~ 0FBC:2D66
loc_20f08:
	// 6620 
cs=0xfbc;eip=0x002d68; 	T(MOV(al, *(raddr(ss,bp+var_39a))));	// 32835 mov     al, [bp+var_39A] ;~ 0FBC:2D68
cs=0xfbc;eip=0x002d6c; 	X(MOV(*(raddr(ss,bp+var_73a)), al));	// 32836 mov     [bp+var_73A], al ;~ 0FBC:2D6C
cs=0xfbc;eip=0x002d70; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 32837 mov     al, [bp+var_10] ;~ 0FBC:2D70
cs=0xfbc;eip=0x002d73; 	T(SUB(al, *(raddr(ss,bp+var_4))));	// 32838 sub     al, [bp+var_4] ;~ 0FBC:2D73
cs=0xfbc;eip=0x002d76; 	T(DEC(al));	// 32839 dec     al ;~ 0FBC:2D76
loc_20f18:
	// 6621 
cs=0xfbc;eip=0x002d78; 	X(MOV(*(raddr(ss,bp+var_3a4)), al));	// 32842 mov     [bp+var_3A4], al ;~ 0FBC:2D78
cs=0xfbc;eip=0x002d7c; 	R(JMP(def_2140f));	// 32843 jmp     def_2140F       ; jumptable 0002140F default case ;~ 0FBC:2D7C
loc_20f20:
	// 6622 
cs=0xfbc;eip=0x002d80; 	T(CMP(*(raddr(ss,bp+var_ae8)), 0));	// 32848 cmp     [bp+var_AE8], 0 ;~ 0FBC:2D80
cs=0xfbc;eip=0x002d85; 	R(JNZ(loc_20f30));	// 32849 jnz     short loc_20F30 ;~ 0FBC:2D85
cs=0xfbc;eip=0x002d87; 	X(MOV(*(raddr(ss,bp+var_3b0)), no_path));	// 32850 mov     [bp+var_3B0], no_path ;~ 0FBC:2D87
cs=0xfbc;eip=0x002d8c; 	R(JMP(loc_2078d));	// 32851 jmp     loc_2078D ;~ 0FBC:2D8C
loc_20f30:
	// 6623 
cs=0xfbc;eip=0x002d90; 	T(MOV(al, startcol2));	// 32856 mov     al, startcol2 ;~ 0FBC:2D90
cs=0xfbc;eip=0x002d93; 	X(MOV(byte_45d90, al));	// 32857 mov     byte_45D90, al ;~ 0FBC:2D93
cs=0xfbc;eip=0x002d96; 	T(MOV(al, startrow2));	// 32858 mov     al, startrow2 ;~ 0FBC:2D96
cs=0xfbc;eip=0x002d99; 	X(MOV(byte_45e16, al));	// 32859 mov     byte_45E16, al ;~ 0FBC:2D99
cs=0xfbc;eip=0x002d9c; 	T(MOV(ax, track_pieces_counter));	// 32860 mov     ax, track_pieces_counter ;~ 0FBC:2D9C
cs=0xfbc;eip=0x002d9f; 	T(CWD);	// 32861 cwd ;~ 0FBC:2D9F
cs=0xfbc;eip=0x002da0; 	T(MOV(cx, 3));	// 32862 mov     cx, 3 ;~ 0FBC:2DA0
cs=0xfbc;eip=0x002da3; 	T(IDIV2(cx));	// 32863 idiv    cx ;~ 0FBC:2DA3
cs=0xfbc;eip=0x002da5; 	T(MOV(si, ax));	// 32864 mov     si, ax ;~ 0FBC:2DA5
cs=0xfbc;eip=0x002da7; 	T(CMP(si, 0x40));	// 32865 cmp     si, 40h ; '@' ;~ 0FBC:2DA7
cs=0xfbc;eip=0x002daa; 	R(JLE(loc_20f4f));	// 32866 jle     short loc_20F4F ;~ 0FBC:2DAA
cs=0xfbc;eip=0x002dac; 	T(MOV(si, 0x40));	// 32867 mov     si, 40h ; '@' ;~ 0FBC:2DAC
loc_20f4f:
	// 6624 
cs=0xfbc;eip=0x002daf; 	T(MOV(ax, si));	// 32870 mov     ax, si ;~ 0FBC:2DAF
cs=0xfbc;eip=0x002db1; 	X(MOV(byte_4616e, al));	// 32871 mov     byte_4616E, al ;~ 0FBC:2DB1
cs=0xfbc;eip=0x002db4; 	T(SUB(si, si));	// 32872 sub     si, si ;~ 0FBC:2DB4
loc_20f56:
	// 6625 
cs=0xfbc;eip=0x002db6; 	X(MOV(*(raddr(ss,bp+si+var_ad4)), 0));	// 32875 mov     [bp+si+var_AD4], 0 ;~ 0FBC:2DB6
cs=0xfbc;eip=0x002dbb; 	T(INC(si));	// 32876 inc     si ;~ 0FBC:2DBB
cs=0xfbc;eip=0x002dbc; 	T(CMP(si, 0x385));	// 32877 cmp     si, 385h ;~ 0FBC:2DBC
cs=0xfbc;eip=0x002dc0; 	R(JL(loc_20f56));	// 32878 jl      short loc_20F56 ;~ 0FBC:2DC0
cs=0xfbc;eip=0x002dc2; 	T(SUB(di, di));	// 32879 sub     di, di ;~ 0FBC:2DC2
cs=0xfbc;eip=0x002dc4; 	T(SUB(si, si));	// 32880 sub     si, si ;~ 0FBC:2DC4
cs=0xfbc;eip=0x002dc6; 	R(JMP(loc_21688));	// 32881 jmp     loc_21688 ;~ 0FBC:2DC6
loc_20f6a:
	// 6626 
cs=0xfbc;eip=0x002dca; 	X(MOV(*(raddr(ss,bp+var_4)), 0));	// 32886 mov     [bp+var_4], 0 ;~ 0FBC:2DCA
cs=0xfbc;eip=0x002dce; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 32887 mov     al, [bp+var_73A] ;~ 0FBC:2DCE
cs=0xfbc;eip=0x002dd2; 	T(CBW);	// 32888 cbw ;~ 0FBC:2DD2
cs=0xfbc;eip=0x002dd3; 	T(MOV(bx, ax));	// 32889 mov     bx, ax ;~ 0FBC:2DD3
cs=0xfbc;eip=0x002dd5; 	T(SHL(bx, 1));	// 32890 shl     bx, 1 ;~ 0FBC:2DD5
cs=0xfbc;eip=0x002dd7; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 32891 mov     bx, trackrows[bx] ;~ 0FBC:2DD7
cs=0xfbc;eip=0x002ddb; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32892 mov     al, [bp+var_3A4] ;~ 0FBC:2DDB
cs=0xfbc;eip=0x002ddf; 	T(CBW);	// 32893 cbw ;~ 0FBC:2DDF
cs=0xfbc;eip=0x002de0; 	T(ADD(bx, ax));	// 32894 add     bx, ax ;~ 0FBC:2DE0
cs=0xfbc;eip=0x002de2; 	T(ADD(bx, bp));	// 32895 add     bx, bp ;~ 0FBC:2DE2
cs=0xfbc;eip=0x002de4; 	X(MOV(*(raddr(ds,bx-0x738)), 1));	// 32896 mov     byte ptr [bx-738h], 1 ;~ 0FBC:2DE4
cs=0xfbc;eip=0x002de9; 	T(MOV(bx, track_pieces_counter));	// 32897 mov     bx, track_pieces_counter ;~ 0FBC:2DE9
cs=0xfbc;eip=0x002ded; 	T(ADD(bx, bp));	// 32898 add     bx, bp ;~ 0FBC:2DED
cs=0xfbc;eip=0x002def; 	T(MOV(al, *(raddr(ss,bp+var_742))));	// 32899 mov     al, [bp+var_742] ;~ 0FBC:2DEF
cs=0xfbc;eip=0x002df3; 	X(MOV(*(raddr(ds,bx-0x0AD4)), al));	// 32900 mov     [bx-0AD4h], al ;~ 0FBC:2DF3
cs=0xfbc;eip=0x002df7; 	T(MOV(bx, track_pieces_counter));	// 32901 mov     bx, track_pieces_counter ;~ 0FBC:2DF7
cs=0xfbc;eip=0x002dfb; 	T(ADD(bx, bp));	// 32902 add     bx, bp ;~ 0FBC:2DFB
cs=0xfbc;eip=0x002dfd; 	T(MOV(al, *(raddr(ss,bp+var_73e))));	// 32903 mov     al, [bp+var_73E] ;~ 0FBC:2DFD
cs=0xfbc;eip=0x002e01; 	X(MOV(*(raddr(ds,bx-0x398)), al));	// 32904 mov     [bx-398h], al ;~ 0FBC:2E01
cs=0xfbc;eip=0x002e05; 	T(CMP(*(dw*)(raddr(ss,bp+var_3ac)), 0x0FFFF));	// 32905 cmp     [bp+var_3AC], 0FFFFh ;~ 0FBC:2E05
cs=0xfbc;eip=0x002e0a; 	R(JZ(loc_20fe0));	// 32906 jz      short loc_20FE0 ;~ 0FBC:2E0A
cs=0xfbc;eip=0x002e0c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3ac))));	// 32907 mov     ax, [bp+var_3AC] ;~ 0FBC:2E0C
cs=0xfbc;eip=0x002e10; 	T(SHL(ax, 1));	// 32908 shl     ax, 1 ;~ 0FBC:2E10
cs=0xfbc;eip=0x002e12; 	T(ADD(ax, *(dw*)(((db*)&td01_track_file_cpy))));	// 32909 add     ax, word ptr td01_track_file_cpy ;~ 0FBC:2E12
cs=0xfbc;eip=0x002e16; 	T(MOV(dx, *(dw*)(((db*)&td01_track_file_cpy)+2)));	// 32910 mov     dx, word ptr td01_track_file_cpy+2 ;~ 0FBC:2E16
cs=0xfbc;eip=0x002e1a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_af0))), ax));	// 32911 mov     word ptr [bp+var_AF0], ax ;~ 0FBC:2E1A
cs=0xfbc;eip=0x002e1e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_af0+2))), dx));	// 32912 mov     word ptr [bp+var_AF0+2], dx ;~ 0FBC:2E1E
cs=0xfbc;eip=0x002e22; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_af0))));	// 32913 les     bx, [bp+var_AF0] ;~ 0FBC:2E22
cs=0xfbc;eip=0x002e26; 	T(CMP(*(dw*)(raddr(es,bx)), 0x0FFFF));	// 32914 cmp     word ptr es:[bx], 0FFFFh ;~ 0FBC:2E26
cs=0xfbc;eip=0x002e2a; 	R(JZ(loc_20fda));	// 32915 jz      short loc_20FDA ;~ 0FBC:2E2A
cs=0xfbc;eip=0x002e2c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3ac))));	// 32916 mov     bx, [bp+var_3AC] ;~ 0FBC:2E2C
cs=0xfbc;eip=0x002e30; 	T(SHL(bx, 1));	// 32917 shl     bx, 1 ;~ 0FBC:2E30
cs=0xfbc;eip=0x002e32; 	T(ADD(bx, *(dw*)(((db*)&td02_penalty_related))));	// 32918 add     bx, word ptr td02_penalty_related ;~ 0FBC:2E32
cs=0xfbc;eip=0x002e36; 	T(MOV(es, *(dw*)(((db*)&td02_penalty_related)+2)));	// 32919 mov     es, word ptr td02_penalty_related+2 ;~ 0FBC:2E36
loc_20fda:
	// 6627 
cs=0xfbc;eip=0x002e3a; 	T(MOV(ax, track_pieces_counter));	// 32922 mov     ax, track_pieces_counter ;~ 0FBC:2E3A
cs=0xfbc;eip=0x002e3d; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 32923 mov     es:[bx], ax ;~ 0FBC:2E3D
loc_20fe0:
	// 6628 
cs=0xfbc;eip=0x002e40; 	T(MOV(ax, track_pieces_counter));	// 32926 mov     ax, track_pieces_counter ;~ 0FBC:2E40
cs=0xfbc;eip=0x002e43; 	X(MOV(*(dw*)(raddr(ss,bp+var_3ac)), ax));	// 32927 mov     [bp+var_3AC], ax ;~ 0FBC:2E43
cs=0xfbc;eip=0x002e47; 	T(MOV(bx, ax));	// 32928 mov     bx, ax ;~ 0FBC:2E47
cs=0xfbc;eip=0x002e49; 	T(ADD(bx, *(dw*)(((db*)&td21_col_from_path))));	// 32929 add     bx, word ptr td21_col_from_path ;~ 0FBC:2E49
cs=0xfbc;eip=0x002e4d; 	T(MOV(es, *(dw*)(((db*)&td21_col_from_path)+2)));	// 32930 mov     es, word ptr td21_col_from_path+2 ;~ 0FBC:2E4D
cs=0xfbc;eip=0x002e51; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 32931 mov     al, [bp+var_3A4] ;~ 0FBC:2E51
cs=0xfbc;eip=0x002e55; 	X(MOV(*(raddr(es,bx)), al));	// 32932 mov     es:[bx], al ;~ 0FBC:2E55
cs=0xfbc;eip=0x002e58; 	T(MOV(bx, track_pieces_counter));	// 32933 mov     bx, track_pieces_counter ;~ 0FBC:2E58
cs=0xfbc;eip=0x002e5c; 	T(ADD(bx, *(dw*)(((db*)&td22_row_from_path))));	// 32934 add     bx, word ptr td22_row_from_path ;~ 0FBC:2E5C
cs=0xfbc;eip=0x002e60; 	T(MOV(es, *(dw*)(((db*)&td22_row_from_path)+2)));	// 32935 mov     es, word ptr td22_row_from_path+2 ;~ 0FBC:2E60
cs=0xfbc;eip=0x002e64; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 32936 mov     al, [bp+var_73A] ;~ 0FBC:2E64
cs=0xfbc;eip=0x002e68; 	X(MOV(*(raddr(es,bx)), al));	// 32937 mov     es:[bx], al ;~ 0FBC:2E68
cs=0xfbc;eip=0x002e6b; 	T(MOV(bx, track_pieces_counter));	// 32938 mov     bx, track_pieces_counter ;~ 0FBC:2E6B
cs=0xfbc;eip=0x002e6f; 	T(ADD(bx, *(dw*)(((db*)&trackdata18))));	// 32939 add     bx, word ptr trackdata18 ;~ 0FBC:2E6F
cs=0xfbc;eip=0x002e73; 	T(MOV(es, *(dw*)(((db*)&trackdata18)+2)));	// 32940 mov     es, word ptr trackdata18+2 ;~ 0FBC:2E73
cs=0xfbc;eip=0x002e77; 	T(MOV(al, *(raddr(ss,bp+var_73e))));	// 32941 mov     al, [bp+var_73E] ;~ 0FBC:2E77
cs=0xfbc;eip=0x002e7b; 	T(MOV(cl, 4));	// 32942 mov     cl, 4           ; high nibble ;~ 0FBC:2E7B
cs=0xfbc;eip=0x002e7d; 	T(SHL(al, cl));	// 32943 shl     al, cl ;~ 0FBC:2E7D
cs=0xfbc;eip=0x002e7f; 	T(ADD(al, *(raddr(ss,bp+var_742))));	// 32944 add     al, [bp+var_742] ;~ 0FBC:2E7F
cs=0xfbc;eip=0x002e83; 	X(MOV(*(raddr(es,bx)), al));	// 32945 mov     es:[bx], al ;~ 0FBC:2E83
cs=0xfbc;eip=0x002e86; 	T(MOV(bx, track_pieces_counter));	// 32946 mov     bx, track_pieces_counter ;~ 0FBC:2E86
cs=0xfbc;eip=0x002e8a; 	T(ADD(bx, *(dw*)(((db*)&td17_trk_elem_ordered))));	// 32947 add     bx, word ptr td17_trk_elem_ordered ;~ 0FBC:2E8A
cs=0xfbc;eip=0x002e8e; 	T(MOV(es, *(dw*)(((db*)&td17_trk_elem_ordered)+2)));	// 32948 mov     es, word ptr td17_trk_elem_ordered+2 ;~ 0FBC:2E8E
cs=0xfbc;eip=0x002e92; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 32949 mov     al, [bp+var_E] ;~ 0FBC:2E92
cs=0xfbc;eip=0x002e95; 	X(MOV(*(raddr(es,bx)), al));	// 32950 mov     es:[bx], al ;~ 0FBC:2E95
cs=0xfbc;eip=0x002e98; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 32951 mov     al, [bp+var_E] ;~ 0FBC:2E98
cs=0xfbc;eip=0x002e9b; 	T(SUB(ah, ah));	// 32952 sub     ah, ah ;~ 0FBC:2E9B
cs=0xfbc;eip=0x002e9d; 	T(MOV(bx, ax));	// 32953 mov     bx, ax ;~ 0FBC:2E9D
cs=0xfbc;eip=0x002e9f; 	T(SHL(bx, 1));	// 32954 shl     bx, 1 ;~ 0FBC:2E9F
cs=0xfbc;eip=0x002ea1; 	T(ADD(bx, ax));	// 32955 add     bx, ax ;~ 0FBC:2EA1
cs=0xfbc;eip=0x002ea3; 	T(SHL(bx, 1));	// 32956 shl     bx, 1 ;~ 0FBC:2EA3
cs=0xfbc;eip=0x002ea5; 	T(ADD(bx, ax));	// 32957 add     bx, ax ;~ 0FBC:2EA5
cs=0xfbc;eip=0x002ea7; 	T(SHL(bx, 1));	// 32958 shl     bx, 1 ;~ 0FBC:2EA7
cs=0xfbc;eip=0x002ea9; 	T(MOV(ax, *(dw*)(((db*)&trkobjectlist)+bx)));	// 32959 mov     ax, trkObjectList[bx] ;~ 0FBC:2EA9
cs=0xfbc;eip=0x002ead; 	X(MOV(*(dw*)(raddr(ss,bp+var_39c)), ax));	// 32960 mov     [bp+var_39C], ax ;~ 0FBC:2EAD
cs=0xfbc;eip=0x002eb1; 	T(MOV(al, *(raddr(ss,bp+var_742))));	// 32961 mov     al, [bp+var_742] ;~ 0FBC:2EB1
cs=0xfbc;eip=0x002eb5; 	T(SUB(ah, ah));	// 32962 sub     ah, ah ;~ 0FBC:2EB5
cs=0xfbc;eip=0x002eb7; 	T(MOV(cx, ax));	// 32963 mov     cx, ax ;~ 0FBC:2EB7
cs=0xfbc;eip=0x002eb9; 	T(SHL(ax, 1));	// 32964 shl     ax, 1 ;~ 0FBC:2EB9
cs=0xfbc;eip=0x002ebb; 	T(ADD(ax, cx));	// 32965 add     ax, cx ;~ 0FBC:2EBB
cs=0xfbc;eip=0x002ebd; 	T(SHL(ax, 1));	// 32966 shl     ax, 1 ;~ 0FBC:2EBD
cs=0xfbc;eip=0x002ebf; 	T(ADD(ax, cx));	// 32967 add     ax, cx ;~ 0FBC:2EBF
cs=0xfbc;eip=0x002ec1; 	T(SHL(ax, 1));	// 32968 shl     ax, 1 ;~ 0FBC:2EC1
cs=0xfbc;eip=0x002ec3; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_39c))));	// 32969 add     ax, [bp+var_39C] ;~ 0FBC:2EC3
cs=0xfbc;eip=0x002ec7; 	X(MOV(*(dw*)(raddr(ss,bp+var_3ae)), ax));	// 32970 mov     [bp+var_3AE], ax ;~ 0FBC:2EC7
cs=0xfbc;eip=0x002ecb; 	T(MOV(bx, ax));	// 32971 mov     bx, ax ;~ 0FBC:2ECB
cs=0xfbc;eip=0x002ecd; 	T(MOV(al, *(raddr(ds,bx+0x0C))));	// 32972 mov     al, [bx+0Ch] ;~ 0FBC:2ECD
cs=0xfbc;eip=0x002ed0; 	X(MOV(*(raddr(ss,bp+var_74c)), al));	// 32973 mov     [bp+var_74C], al ;~ 0FBC:2ED0
cs=0xfbc;eip=0x002ed4; 	T(OR(al, al));	// 32974 or      al, al ;~ 0FBC:2ED4
cs=0xfbc;eip=0x002ed6; 	R(JNZ(loc_21080));	// 32975 jnz     short loc_21080 ;~ 0FBC:2ED6
cs=0xfbc;eip=0x002ed8; 	X(INC(*(raddr(ss,bp+var_3a8))));	// 32976 inc     [bp+var_3A8] ;~ 0FBC:2ED8
cs=0xfbc;eip=0x002edc; 	R(JMP(loc_21367));	// 32977 jmp     loc_21367 ;~ 0FBC:2EDC
loc_21080:
	// 6629 
cs=0xfbc;eip=0x002ee0; 	T(CMP(*(raddr(ss,bp+var_74c)), 0x0FF));	// 32982 cmp     [bp+var_74C], 0FFh ;~ 0FBC:2EE0
cs=0xfbc;eip=0x002ee5; 	R(JNZ(loc_2108a));	// 32983 jnz     short loc_2108A ;~ 0FBC:2EE5
cs=0xfbc;eip=0x002ee7; 	R(JMP(loc_21362));	// 32984 jmp     loc_21362 ;~ 0FBC:2EE7
loc_2108a:
	// 6630 
cs=0xfbc;eip=0x002eea; 	T(CMP(*(raddr(ss,bp+var_3a8)), 3));	// 32988 cmp     [bp+var_3A8], 3 ;~ 0FBC:2EEA
cs=0xfbc;eip=0x002eef; 	R(JA(loc_21094));	// 32989 ja      short loc_21094 ;~ 0FBC:2EEF
cs=0xfbc;eip=0x002ef1; 	R(JMP(loc_21362));	// 32990 jmp     loc_21362 ;~ 0FBC:2EF1
loc_21094:
	// 6631 
cs=0xfbc;eip=0x002ef4; 	T(CMP(byte_45635, 0x30));	// 32994 cmp     byte_45635, 30h ; '0' ;~ 0FBC:2EF4
cs=0xfbc;eip=0x002ef9; 	R(JNZ(loc_2109e));	// 32995 jnz     short loc_2109E ;~ 0FBC:2EF9
cs=0xfbc;eip=0x002efb; 	R(JMP(loc_21362));	// 32996 jmp     loc_21362 ;~ 0FBC:2EFB
loc_2109e:
	// 6632 
cs=0xfbc;eip=0x002efe; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 33000 mov     al, [bp+var_E] ;~ 0FBC:2EFE
cs=0xfbc;eip=0x002f01; 	T(SUB(ah, ah));	// 33001 sub     ah, ah ;~ 0FBC:2F01
cs=0xfbc;eip=0x002f03; 	T(MOV(bx, ax));	// 33002 mov     bx, ax ;~ 0FBC:2F03
cs=0xfbc;eip=0x002f05; 	T(SHL(bx, 1));	// 33003 shl     bx, 1 ;~ 0FBC:2F05
cs=0xfbc;eip=0x002f07; 	T(ADD(bx, ax));	// 33004 add     bx, ax ;~ 0FBC:2F07
cs=0xfbc;eip=0x002f09; 	T(SHL(bx, 1));	// 33005 shl     bx, 1 ;~ 0FBC:2F09
cs=0xfbc;eip=0x002f0b; 	T(ADD(bx, ax));	// 33006 add     bx, ax ;~ 0FBC:2F0B
cs=0xfbc;eip=0x002f0d; 	T(SHL(bx, 1));	// 33007 shl     bx, 1 ;~ 0FBC:2F0D
cs=0xfbc;eip=0x002f0f; 	T(MOV(ax, *(dw*)(((db*)&trkobjectlist)+bx)));	// 33008 mov     ax, trkObjectList[bx] ;~ 0FBC:2F0F
cs=0xfbc;eip=0x002f13; 	X(MOV(*(dw*)(raddr(ss,bp+var_39c)), ax));	// 33009 mov     [bp+var_39C], ax ;~ 0FBC:2F13
cs=0xfbc;eip=0x002f17; 	T(MOV(al, *(raddr(ss,bp+var_742))));	// 33010 mov     al, [bp+var_742] ;~ 0FBC:2F17
cs=0xfbc;eip=0x002f1b; 	T(SUB(ah, ah));	// 33011 sub     ah, ah ;~ 0FBC:2F1B
cs=0xfbc;eip=0x002f1d; 	T(MOV(cx, ax));	// 33012 mov     cx, ax ;~ 0FBC:2F1D
cs=0xfbc;eip=0x002f1f; 	T(SHL(ax, 1));	// 33013 shl     ax, 1 ;~ 0FBC:2F1F
cs=0xfbc;eip=0x002f21; 	T(ADD(ax, cx));	// 33014 add     ax, cx ;~ 0FBC:2F21
cs=0xfbc;eip=0x002f23; 	T(SHL(ax, 1));	// 33015 shl     ax, 1 ;~ 0FBC:2F23
cs=0xfbc;eip=0x002f25; 	T(ADD(ax, cx));	// 33016 add     ax, cx ;~ 0FBC:2F25
cs=0xfbc;eip=0x002f27; 	T(SHL(ax, 1));	// 33017 shl     ax, 1 ;~ 0FBC:2F27
cs=0xfbc;eip=0x002f29; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_39c))));	// 33018 add     ax, [bp+var_39C] ;~ 0FBC:2F29
cs=0xfbc;eip=0x002f2d; 	X(MOV(*(dw*)(raddr(ss,bp+var_3ae)), ax));	// 33019 mov     [bp+var_3AE], ax ;~ 0FBC:2F2D
cs=0xfbc;eip=0x002f31; 	T(MOV(bx, ax));	// 33020 mov     bx, ax ;~ 0FBC:2F31
cs=0xfbc;eip=0x002f33; 	T(MOV(al, *(raddr(ds,bx+0x0C))));	// 33021 mov     al, [bx+0Ch] ;~ 0FBC:2F33
cs=0xfbc;eip=0x002f36; 	X(MOV(*(raddr(ss,bp+var_74c)), al));	// 33022 mov     [bp+var_74C], al ;~ 0FBC:2F36
cs=0xfbc;eip=0x002f3a; 	T(MOV(al, *(raddr(ss,bp+var_ae6))));	// 33023 mov     al, [bp+var_AE6] ;~ 0FBC:2F3A
cs=0xfbc;eip=0x002f3e; 	T(SUB(ah, ah));	// 33024 sub     ah, ah ;~ 0FBC:2F3E
cs=0xfbc;eip=0x002f40; 	T(MOV(bx, ax));	// 33025 mov     bx, ax ;~ 0FBC:2F40
cs=0xfbc;eip=0x002f42; 	T(SHL(bx, 1));	// 33026 shl     bx, 1 ;~ 0FBC:2F42
cs=0xfbc;eip=0x002f44; 	T(ADD(bx, ax));	// 33027 add     bx, ax ;~ 0FBC:2F44
cs=0xfbc;eip=0x002f46; 	T(SHL(bx, 1));	// 33028 shl     bx, 1 ;~ 0FBC:2F46
cs=0xfbc;eip=0x002f48; 	T(ADD(bx, ax));	// 33029 add     bx, ax ;~ 0FBC:2F48
cs=0xfbc;eip=0x002f4a; 	T(SHL(bx, 1));	// 33030 shl     bx, 1 ;~ 0FBC:2F4A
cs=0xfbc;eip=0x002f4c; 	T(MOV(ax, *(dw*)(((db*)&trkobjectlist)+bx)));	// 33031 mov     ax, trkObjectList[bx] ;~ 0FBC:2F4C
cs=0xfbc;eip=0x002f50; 	X(MOV(*(dw*)(raddr(ss,bp+var_39c)), ax));	// 33032 mov     [bp+var_39C], ax ;~ 0FBC:2F50
cs=0xfbc;eip=0x002f54; 	T(MOV(al, *(raddr(ss,bp+var_3aa))));	// 33033 mov     al, [bp+var_3AA] ;~ 0FBC:2F54
cs=0xfbc;eip=0x002f58; 	T(SUB(ah, ah));	// 33034 sub     ah, ah ;~ 0FBC:2F58
cs=0xfbc;eip=0x002f5a; 	T(MOV(cx, ax));	// 33035 mov     cx, ax ;~ 0FBC:2F5A
cs=0xfbc;eip=0x002f5c; 	T(SHL(ax, 1));	// 33036 shl     ax, 1 ;~ 0FBC:2F5C
cs=0xfbc;eip=0x002f5e; 	T(ADD(ax, cx));	// 33037 add     ax, cx ;~ 0FBC:2F5E
cs=0xfbc;eip=0x002f60; 	T(SHL(ax, 1));	// 33038 shl     ax, 1 ;~ 0FBC:2F60
cs=0xfbc;eip=0x002f62; 	T(ADD(ax, cx));	// 33039 add     ax, cx ;~ 0FBC:2F62
cs=0xfbc;eip=0x002f64; 	T(SHL(ax, 1));	// 33040 shl     ax, 1 ;~ 0FBC:2F64
cs=0xfbc;eip=0x002f66; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_39c))));	// 33041 add     ax, [bp+var_39C] ;~ 0FBC:2F66
cs=0xfbc;eip=0x002f6a; 	X(MOV(*(dw*)(raddr(ss,bp+var_3ae)), ax));	// 33042 mov     [bp+var_3AE], ax ;~ 0FBC:2F6A
cs=0xfbc;eip=0x002f6e; 	T(CMP(*(raddr(ss,bp+var_740)), 0));	// 33043 cmp     [bp+var_740], 0 ;~ 0FBC:2F6E
cs=0xfbc;eip=0x002f73; 	R(JZ(loc_21122));	// 33044 jz      short loc_21122 ;~ 0FBC:2F73
cs=0xfbc;eip=0x002f75; 	T(MOV(bx, ax));	// 33045 mov     bx, ax ;~ 0FBC:2F75
cs=0xfbc;eip=0x002f77; 	T(CMP(*(dw*)(raddr(ds,bx+0x0A)), 0));	// 33046 cmp     word ptr [bx+0Ah], 0 ;~ 0FBC:2F77
cs=0xfbc;eip=0x002f7b; 	R(JZ(loc_21126));	// 33047 jz      short loc_21126 ;~ 0FBC:2F7B
cs=0xfbc;eip=0x002f7d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 33048 mov     ax, [bx+0Ah] ;~ 0FBC:2F7D
cs=0xfbc;eip=0x002f80; 	R(JMP(loc_21129));	// 33049 jmp     short loc_21129 ;~ 0FBC:2F80
loc_21122:
	// 6633 
cs=0xfbc;eip=0x002f82; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3ae))));	// 33053 mov     bx, [bp+var_3AE] ;~ 0FBC:2F82
loc_21126:
	// 6634 
cs=0xfbc;eip=0x002f86; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 33056 mov     ax, [bx+8] ;~ 0FBC:2F86
loc_21129:
	// 6635 
cs=0xfbc;eip=0x002f89; 	X(MOV(*(dw*)(raddr(ss,bp+var_ade)), ax));	// 33059 mov     [bp+var_ADE], ax ;~ 0FBC:2F89
cs=0xfbc;eip=0x002f8d; 	X(MOV(*(dw*)(raddr(ss,bp+var_adc)), ds));	// 33060 mov     [bp+var_ADC], ds ;~ 0FBC:2F8D
cs=0xfbc;eip=0x002f91; 	T(CMP(*(raddr(ss,bp+var_740)), 0));	// 33061 cmp     [bp+var_740], 0 ;~ 0FBC:2F91
cs=0xfbc;eip=0x002f96; 	R(JZ(loc_21156));	// 33062 jz      short loc_21156 ;~ 0FBC:2F96
cs=0xfbc;eip=0x002f98; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3ae))));	// 33063 mov     bx, [bp+var_3AE] ;~ 0FBC:2F98
cs=0xfbc;eip=0x002f9c; 	T(MOV(al, *(raddr(ds,bx+5))));	// 33064 mov     al, [bx+5] ;~ 0FBC:2F9C
cs=0xfbc;eip=0x002f9f; 	T(SUB(ah, ah));	// 33065 sub     ah, ah ;~ 0FBC:2F9F
cs=0xfbc;eip=0x002fa1; 	T(SHL(ax, 1));	// 33066 shl     ax, 1 ;~ 0FBC:2FA1
cs=0xfbc;eip=0x002fa3; 	T(MOV(cx, ax));	// 33067 mov     cx, ax ;~ 0FBC:2FA3
cs=0xfbc;eip=0x002fa5; 	T(SHL(ax, 1));	// 33068 shl     ax, 1 ;~ 0FBC:2FA5
cs=0xfbc;eip=0x002fa7; 	T(ADD(ax, cx));	// 33069 add     ax, cx ;~ 0FBC:2FA7
cs=0xfbc;eip=0x002fa9; 	T(SHL(ax, 1));	// 33070 shl     ax, 1 ;~ 0FBC:2FA9
cs=0xfbc;eip=0x002fab; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_ade))));	// 33071 add     ax, [bp+var_ADE] ;~ 0FBC:2FAB
cs=0xfbc;eip=0x002faf; 	T(MOV(dx, ds));	// 33072 mov     dx, ds ;~ 0FBC:2FAF
cs=0xfbc;eip=0x002fb1; 	T(ADD(ax, 0x0C));	// 33073 add     ax, 0Ch ;~ 0FBC:2FB1
cs=0xfbc;eip=0x002fb4; 	R(JMP(loc_21174));	// 33074 jmp     short loc_21174 ;~ 0FBC:2FB4
loc_21156:
	// 6636 
cs=0xfbc;eip=0x002fb6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3ae))));	// 33078 mov     bx, [bp+var_3AE] ;~ 0FBC:2FB6
cs=0xfbc;eip=0x002fba; 	T(MOV(al, *(raddr(ds,bx+5))));	// 33079 mov     al, [bx+5] ;~ 0FBC:2FBA
cs=0xfbc;eip=0x002fbd; 	T(SUB(ah, ah));	// 33080 sub     ah, ah ;~ 0FBC:2FBD
cs=0xfbc;eip=0x002fbf; 	T(SHL(ax, 1));	// 33081 shl     ax, 1 ;~ 0FBC:2FBF
cs=0xfbc;eip=0x002fc1; 	T(MOV(cx, ax));	// 33082 mov     cx, ax ;~ 0FBC:2FC1
cs=0xfbc;eip=0x002fc3; 	T(SHL(ax, 1));	// 33083 shl     ax, 1 ;~ 0FBC:2FC3
cs=0xfbc;eip=0x002fc5; 	T(ADD(ax, cx));	// 33084 add     ax, cx ;~ 0FBC:2FC5
cs=0xfbc;eip=0x002fc7; 	T(SHL(ax, 1));	// 33085 shl     ax, 1 ;~ 0FBC:2FC7
cs=0xfbc;eip=0x002fc9; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_ade))));	// 33086 add     ax, [bp+var_ADE] ;~ 0FBC:2FC9
cs=0xfbc;eip=0x002fcd; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_adc))));	// 33087 mov     dx, [bp+var_ADC] ;~ 0FBC:2FCD
cs=0xfbc;eip=0x002fd1; 	T(ADD(ax, 6));	// 33088 add     ax, 6 ;~ 0FBC:2FD1
loc_21174:
	// 6637 
cs=0xfbc;eip=0x002fd4; 	X(PUSH(si));	// 33091 push    si ;~ 0FBC:2FD4
cs=0xfbc;eip=0x002fd5; 	X(PUSH(di));	// 33092 push    di ;~ 0FBC:2FD5
cs=0xfbc;eip=0x002fd6; 	T(di = bp+var_ada);	// 33093 lea     di, [bp+var_ADA] ;~ 0FBC:2FD6
cs=0xfbc;eip=0x002fda; 	T(MOV(si, ax));	// 33094 mov     si, ax ;~ 0FBC:2FDA
cs=0xfbc;eip=0x002fdc; 	X(PUSH(ss));	// 33095 push    ss ;~ 0FBC:2FDC
cs=0xfbc;eip=0x002fdd; 	X(POP(es));	// 33096 pop     es ;~ 0FBC:2FDD
cs=0xfbc;eip=0x002fde; 	X(PUSH(ds));	// 33097 push    ds ;~ 0FBC:2FDE
cs=0xfbc;eip=0x002fdf; 	T(MOV(ds, dx));	// 33098 mov     ds, dx ;~ 0FBC:2FDF
cs=0xfbc;eip=0x002fe1; 	X(MOVSW);	// 33099 movsw ;~ 0FBC:2FE1
cs=0xfbc;eip=0x002fe2; 	X(MOVSW);	// 33100 movsw ;~ 0FBC:2FE2
cs=0xfbc;eip=0x002fe3; 	X(MOVSW);	// 33101 movsw ;~ 0FBC:2FE3
cs=0xfbc;eip=0x002fe4; 	X(POP(ds));	// 33102 pop     ds ;~ 0FBC:2FE4
cs=0xfbc;eip=0x002fe5; 	X(POP(di));	// 33103 pop     di ;~ 0FBC:2FE5
cs=0xfbc;eip=0x002fe6; 	X(POP(si));	// 33104 pop     si ;~ 0FBC:2FE6
cs=0xfbc;eip=0x002fe7; 	T(CMP(*(raddr(ss,bp+var_73e)), 0));	// 33105 cmp     [bp+var_73E], 0 ;~ 0FBC:2FE7
cs=0xfbc;eip=0x002fec; 	R(JZ(loc_2119c));	// 33106 jz      short loc_2119C ;~ 0FBC:2FEC
cs=0xfbc;eip=0x002fee; 	T(MOV(al, *(raddr(ss,bp+var_74c))));	// 33107 mov     al, [bp+var_74C] ;~ 0FBC:2FEE
cs=0xfbc;eip=0x002ff2; 	T(CBW);	// 33108 cbw ;~ 0FBC:2FF2
cs=0xfbc;eip=0x002ff3; 	T(MOV(bx, ax));	// 33109 mov     bx, ax ;~ 0FBC:2FF3
cs=0xfbc;eip=0x002ff5; 	T(MOV(al, *((&byte_3e724)+bx)));	// 33110 mov     al, byte_3E724[bx] ;~ 0FBC:2FF5
cs=0xfbc;eip=0x002ff9; 	R(JMP(loc_211a7));	// 33111 jmp     short loc_211A7 ;~ 0FBC:2FF9
loc_2119c:
	// 6638 
cs=0xfbc;eip=0x002ffc; 	T(MOV(al, *(raddr(ss,bp+var_74c))));	// 33116 mov     al, [bp+var_74C] ;~ 0FBC:2FFC
cs=0xfbc;eip=0x003000; 	T(CBW);	// 33117 cbw ;~ 0FBC:3000
cs=0xfbc;eip=0x003001; 	T(MOV(bx, ax));	// 33118 mov     bx, ax ;~ 0FBC:3001
cs=0xfbc;eip=0x003003; 	T(MOV(al, *((&byte_3e71e)+bx)));	// 33119 mov     al, byte_3E71E[bx] ;~ 0FBC:3003
loc_211a7:
	// 6639 
cs=0xfbc;eip=0x003007; 	X(MOV(*(raddr(ss,bp+var_74c)), al));	// 33122 mov     [bp+var_74C], al ;~ 0FBC:3007
cs=0xfbc;eip=0x00300b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3ae))));	// 33123 mov     bx, [bp+var_3AE] ;~ 0FBC:300B
cs=0xfbc;eip=0x00300f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 33124 mov     ax, [bx+6] ;~ 0FBC:300F
cs=0xfbc;eip=0x003012; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 33125 mov     [bp+var_8], ax ;~ 0FBC:3012
cs=0xfbc;eip=0x003015; 	T(CMP(ax, 0x100));	// 33126 cmp     ax, 100h ;~ 0FBC:3015
cs=0xfbc;eip=0x003018; 	R(JZ(loc_21214));	// 33127 jz      short loc_21214 ;~ 0FBC:3018
cs=0xfbc;eip=0x00301a; 	T(CMP(ax, 0x200));	// 33128 cmp     ax, 200h ;~ 0FBC:301A
cs=0xfbc;eip=0x00301d; 	R(JZ(loc_211fe));	// 33129 jz      short loc_211FE ;~ 0FBC:301D
cs=0xfbc;eip=0x00301f; 	T(CMP(ax, 0x300));	// 33130 cmp     ax, 300h ;~ 0FBC:301F
cs=0xfbc;eip=0x003022; 	R(JNZ(loc_211de));	// 33131 jnz     short loc_211DE ;~ 0FBC:3022
cs=0xfbc;eip=0x003024; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ada))));	// 33132 mov     ax, [bp+var_ADA] ;~ 0FBC:3024
cs=0xfbc;eip=0x003028; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a2)), ax));	// 33133 mov     [bp+var_3A2], ax ;~ 0FBC:3028
cs=0xfbc;eip=0x00302c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ad6))));	// 33134 mov     ax, [bp+var_AD6] ;~ 0FBC:302C
cs=0xfbc;eip=0x003030; 	T(NEG(ax));	// 33135 neg     ax ;~ 0FBC:3030
cs=0xfbc;eip=0x003032; 	X(MOV(*(dw*)(raddr(ss,bp+var_ada)), ax));	// 33136 mov     [bp+var_ADA], ax ;~ 0FBC:3032
cs=0xfbc;eip=0x003036; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3a2))));	// 33137 mov     ax, [bp+var_3A2] ;~ 0FBC:3036
loc_211da:
	// 6640 
cs=0xfbc;eip=0x00303a; 	X(MOV(*(dw*)(raddr(ss,bp+var_ad6)), ax));	// 33140 mov     [bp+var_AD6], ax ;~ 0FBC:303A
loc_211de:
	// 6641 
cs=0xfbc;eip=0x00303e; 	T(CMP(*(raddr(ss,bp+var_740)), 0));	// 33144 cmp     [bp+var_740], 0 ;~ 0FBC:303E
cs=0xfbc;eip=0x003043; 	R(JZ(loc_2122c));	// 33145 jz      short loc_2122C ;~ 0FBC:3043
cs=0xfbc;eip=0x003045; 	T(MOV(al, byte_45635));	// 33146 mov     al, byte_45635 ;~ 0FBC:3045
cs=0xfbc;eip=0x003048; 	T(CBW);	// 33147 cbw ;~ 0FBC:3048
cs=0xfbc;eip=0x003049; 	T(MOV(bx, ax));	// 33148 mov     bx, ax ;~ 0FBC:3049
cs=0xfbc;eip=0x00304b; 	T(SHL(bx, 1));	// 33149 shl     bx, 1 ;~ 0FBC:304B
cs=0xfbc;eip=0x00304d; 	T(ADD(bx, td08_direction_related));	// 33150 add     bx, td08_direction_related ;~ 0FBC:304D
cs=0xfbc;eip=0x003051; 	T(MOV(es, word_45db6));	// 33151 mov     es, word_45DB6 ;~ 0FBC:3051
cs=0xfbc;eip=0x003055; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 33152 mov     ax, [bp+var_8] ;~ 0FBC:3055
cs=0xfbc;eip=0x003058; 	T(XOR(ah, 2));	// 33153 xor     ah, 2 ;~ 0FBC:3058
cs=0xfbc;eip=0x00305b; 	R(JMP(loc_2123f));	// 33154 jmp     short loc_2123F ;~ 0FBC:305B
loc_211fe:
	// 6642 
cs=0xfbc;eip=0x00305e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ad6))));	// 33159 mov     ax, [bp+var_AD6] ;~ 0FBC:305E
cs=0xfbc;eip=0x003062; 	T(NEG(ax));	// 33160 neg     ax ;~ 0FBC:3062
cs=0xfbc;eip=0x003064; 	X(MOV(*(dw*)(raddr(ss,bp+var_ad6)), ax));	// 33161 mov     [bp+var_AD6], ax ;~ 0FBC:3064
cs=0xfbc;eip=0x003068; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ada))));	// 33162 mov     ax, [bp+var_ADA] ;~ 0FBC:3068
cs=0xfbc;eip=0x00306c; 	T(NEG(ax));	// 33163 neg     ax ;~ 0FBC:306C
cs=0xfbc;eip=0x00306e; 	X(MOV(*(dw*)(raddr(ss,bp+var_ada)), ax));	// 33164 mov     [bp+var_ADA], ax ;~ 0FBC:306E
cs=0xfbc;eip=0x003072; 	R(JMP(loc_211de));	// 33165 jmp     short loc_211DE ;~ 0FBC:3072
loc_21214:
	// 6643 
cs=0xfbc;eip=0x003074; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ada))));	// 33169 mov     ax, [bp+var_ADA] ;~ 0FBC:3074
cs=0xfbc;eip=0x003078; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a2)), ax));	// 33170 mov     [bp+var_3A2], ax ;~ 0FBC:3078
cs=0xfbc;eip=0x00307c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ad6))));	// 33171 mov     ax, [bp+var_AD6] ;~ 0FBC:307C
cs=0xfbc;eip=0x003080; 	X(MOV(*(dw*)(raddr(ss,bp+var_ada)), ax));	// 33172 mov     [bp+var_ADA], ax ;~ 0FBC:3080
cs=0xfbc;eip=0x003084; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3a2))));	// 33173 mov     ax, [bp+var_3A2] ;~ 0FBC:3084
cs=0xfbc;eip=0x003088; 	T(NEG(ax));	// 33174 neg     ax ;~ 0FBC:3088
cs=0xfbc;eip=0x00308a; 	R(JMP(loc_211da));	// 33175 jmp     short loc_211DA ;~ 0FBC:308A
loc_2122c:
	// 6644 
cs=0xfbc;eip=0x00308c; 	T(MOV(al, byte_45635));	// 33179 mov     al, byte_45635 ;~ 0FBC:308C
cs=0xfbc;eip=0x00308f; 	T(CBW);	// 33180 cbw ;~ 0FBC:308F
cs=0xfbc;eip=0x003090; 	T(MOV(bx, ax));	// 33181 mov     bx, ax ;~ 0FBC:3090
cs=0xfbc;eip=0x003092; 	T(SHL(bx, 1));	// 33182 shl     bx, 1 ;~ 0FBC:3092
cs=0xfbc;eip=0x003094; 	T(ADD(bx, td08_direction_related));	// 33183 add     bx, td08_direction_related ;~ 0FBC:3094
cs=0xfbc;eip=0x003098; 	T(MOV(es, word_45db6));	// 33184 mov     es, word_45DB6 ;~ 0FBC:3098
cs=0xfbc;eip=0x00309c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 33185 mov     ax, [bp+var_8] ;~ 0FBC:309C
loc_2123f:
	// 6645 
cs=0xfbc;eip=0x00309f; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 33188 mov     es:[bx], ax ;~ 0FBC:309F
cs=0xfbc;eip=0x0030a2; 	T(MOV(al, byte_45635));	// 33189 mov     al, byte_45635 ;~ 0FBC:30A2
cs=0xfbc;eip=0x0030a5; 	T(CBW);	// 33190 cbw ;~ 0FBC:30A5
cs=0xfbc;eip=0x0030a6; 	T(MOV(bx, ax));	// 33191 mov     bx, ax ;~ 0FBC:30A6
cs=0xfbc;eip=0x0030a8; 	T(ADD(bx, trackdata23));	// 33192 add     bx, trackdata23 ;~ 0FBC:30A8
cs=0xfbc;eip=0x0030ac; 	T(MOV(es, word_463de));	// 33193 mov     es, word_463DE ;~ 0FBC:30AC
cs=0xfbc;eip=0x0030b0; 	T(MOV(al, *(raddr(ss,bp+var_74c))));	// 33194 mov     al, [bp+var_74C] ;~ 0FBC:30B0
cs=0xfbc;eip=0x0030b4; 	X(MOV(*(raddr(es,bx)), al));	// 33195 mov     es:[bx], al ;~ 0FBC:30B4
cs=0xfbc;eip=0x0030b7; 	T(MOV(al, *(raddr(ss,bp+var_39a))));	// 33196 mov     al, [bp+var_39A] ;~ 0FBC:30B7
cs=0xfbc;eip=0x0030bb; 	T(CBW);	// 33197 cbw ;~ 0FBC:30BB
cs=0xfbc;eip=0x0030bc; 	T(MOV(bx, ax));	// 33198 mov     bx, ax ;~ 0FBC:30BC
cs=0xfbc;eip=0x0030be; 	T(SHL(bx, 1));	// 33199 shl     bx, 1 ;~ 0FBC:30BE
cs=0xfbc;eip=0x0030c0; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 33200 mov     bx, terrainrows[bx] ;~ 0FBC:30C0
cs=0xfbc;eip=0x0030c4; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 33201 mov     al, [bp+var_10] ;~ 0FBC:30C4
cs=0xfbc;eip=0x0030c7; 	T(CBW);	// 33202 cbw ;~ 0FBC:30C7
cs=0xfbc;eip=0x0030c8; 	T(ADD(bx, ax));	// 33203 add     bx, ax ;~ 0FBC:30C8
cs=0xfbc;eip=0x0030ca; 	T(ADD(bx, *(dw*)(((db*)&td15_terr_map_main))));	// 33204 add     bx, word ptr td15_terr_map_main ;~ 0FBC:30CA
cs=0xfbc;eip=0x0030ce; 	T(MOV(es, *(dw*)(((db*)&td15_terr_map_main)+2)));	// 33205 mov     es, word ptr td15_terr_map_main+2 ;~ 0FBC:30CE
cs=0xfbc;eip=0x0030d2; 	T(CMP(*(raddr(es,bx)), 6));	// 33206 cmp     byte ptr es:[bx], 6 ;~ 0FBC:30D2
cs=0xfbc;eip=0x0030d6; 	R(JNZ(loc_2127e));	// 33207 jnz     short loc_2127E ;~ 0FBC:30D6
cs=0xfbc;eip=0x0030d8; 	X(ADD(*(dw*)(raddr(ss,bp+var_ad8)), 0x1C2));	// 33208 add     [bp+var_AD8], 1C2h ;~ 0FBC:30D8
loc_2127e:
	// 6646 
cs=0xfbc;eip=0x0030de; 	T(MOV(al, byte_45635));	// 33211 mov     al, byte_45635 ;~ 0FBC:30DE
cs=0xfbc;eip=0x0030e1; 	T(CBW);	// 33212 cbw ;~ 0FBC:30E1
cs=0xfbc;eip=0x0030e2; 	T(MOV(bx, ax));	// 33213 mov     bx, ax ;~ 0FBC:30E2
cs=0xfbc;eip=0x0030e4; 	T(SHL(bx, 1));	// 33214 shl     bx, 1 ;~ 0FBC:30E4
cs=0xfbc;eip=0x0030e6; 	T(ADD(bx, ax));	// 33215 add     bx, ax ;~ 0FBC:30E6
cs=0xfbc;eip=0x0030e8; 	T(SHL(bx, 1));	// 33216 shl     bx, 1 ;~ 0FBC:30E8
cs=0xfbc;eip=0x0030ea; 	T(ADD(bx, *(dw*)(((db*)&td10_track_check_rel))));	// 33217 add     bx, word ptr td10_track_check_rel ;~ 0FBC:30EA
cs=0xfbc;eip=0x0030ee; 	T(MOV(es, *(dw*)(((db*)&td10_track_check_rel)+2)));	// 33218 mov     es, word ptr td10_track_check_rel+2 ;~ 0FBC:30EE
cs=0xfbc;eip=0x0030f2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ad8))));	// 33219 mov     ax, [bp+var_AD8] ;~ 0FBC:30F2
cs=0xfbc;eip=0x0030f6; 	X(MOV(*(dw*)(raddr(es,bx+2)), ax));	// 33220 mov     es:[bx+2], ax ;~ 0FBC:30F6
cs=0xfbc;eip=0x0030fa; 	T(MOV(al, *(raddr(ss,bp+var_ae6))));	// 33221 mov     al, [bp+var_AE6] ;~ 0FBC:30FA
cs=0xfbc;eip=0x0030fe; 	T(SUB(ah, ah));	// 33222 sub     ah, ah ;~ 0FBC:30FE
cs=0xfbc;eip=0x003100; 	T(MOV(bx, ax));	// 33223 mov     bx, ax ;~ 0FBC:3100
cs=0xfbc;eip=0x003102; 	T(SHL(bx, 1));	// 33224 shl     bx, 1 ;~ 0FBC:3102
cs=0xfbc;eip=0x003104; 	T(ADD(bx, ax));	// 33225 add     bx, ax ;~ 0FBC:3104
cs=0xfbc;eip=0x003106; 	T(SHL(bx, 1));	// 33226 shl     bx, 1 ;~ 0FBC:3106
cs=0xfbc;eip=0x003108; 	T(ADD(bx, ax));	// 33227 add     bx, ax ;~ 0FBC:3108
cs=0xfbc;eip=0x00310a; 	T(SHL(bx, 1));	// 33228 shl     bx, 1 ;~ 0FBC:310A
cs=0xfbc;eip=0x00310c; 	T(TEST(*((&byte_3d813)+bx), 1));	// 33229 test    byte_3D813[bx], 1 ;~ 0FBC:310C
cs=0xfbc;eip=0x003111; 	R(JZ(loc_212c2));	// 33230 jz      short loc_212C2 ;~ 0FBC:3111
cs=0xfbc;eip=0x003113; 	T(MOV(al, *(raddr(ss,bp+var_39a))));	// 33231 mov     al, [bp+var_39A] ;~ 0FBC:3113
cs=0xfbc;eip=0x003117; 	T(CBW);	// 33232 cbw ;~ 0FBC:3117
cs=0xfbc;eip=0x003118; 	T(MOV(bx, ax));	// 33233 mov     bx, ax ;~ 0FBC:3118
cs=0xfbc;eip=0x00311a; 	T(SHL(bx, 1));	// 33234 shl     bx, 1 ;~ 0FBC:311A
cs=0xfbc;eip=0x00311c; 	T(MOV(ax, *(dw*)(((db*)&trackpos)+bx)));	// 33235 mov     ax, trackpos[bx] ;~ 0FBC:311C
cs=0xfbc;eip=0x003120; 	R(JMP(loc_212cf));	// 33236 jmp     short loc_212CF ;~ 0FBC:3120
loc_212c2:
	// 6647 
cs=0xfbc;eip=0x003122; 	T(MOV(al, *(raddr(ss,bp+var_39a))));	// 33240 mov     al, [bp+var_39A] ;~ 0FBC:3122
cs=0xfbc;eip=0x003126; 	T(CBW);	// 33241 cbw ;~ 0FBC:3126
cs=0xfbc;eip=0x003127; 	T(MOV(bx, ax));	// 33242 mov     bx, ax ;~ 0FBC:3127
cs=0xfbc;eip=0x003129; 	T(SHL(bx, 1));	// 33243 shl     bx, 1 ;~ 0FBC:3129
cs=0xfbc;eip=0x00312b; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 33244 mov     ax, trackcenterpos[bx] ;~ 0FBC:312B
loc_212cf:
	// 6648 
cs=0xfbc;eip=0x00312f; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_ad6))));	// 33247 add     ax, [bp+var_AD6] ;~ 0FBC:312F
cs=0xfbc;eip=0x003133; 	T(MOV(cx, ax));	// 33248 mov     cx, ax ;~ 0FBC:3133
cs=0xfbc;eip=0x003135; 	T(MOV(al, byte_45635));	// 33249 mov     al, byte_45635 ;~ 0FBC:3135
cs=0xfbc;eip=0x003138; 	T(CBW);	// 33250 cbw ;~ 0FBC:3138
cs=0xfbc;eip=0x003139; 	T(MOV(bx, ax));	// 33251 mov     bx, ax ;~ 0FBC:3139
cs=0xfbc;eip=0x00313b; 	T(SHL(bx, 1));	// 33252 shl     bx, 1 ;~ 0FBC:313B
cs=0xfbc;eip=0x00313d; 	T(ADD(bx, ax));	// 33253 add     bx, ax ;~ 0FBC:313D
cs=0xfbc;eip=0x00313f; 	T(SHL(bx, 1));	// 33254 shl     bx, 1 ;~ 0FBC:313F
cs=0xfbc;eip=0x003141; 	T(ADD(bx, *(dw*)(((db*)&td10_track_check_rel))));	// 33255 add     bx, word ptr td10_track_check_rel ;~ 0FBC:3141
cs=0xfbc;eip=0x003145; 	T(MOV(es, *(dw*)(((db*)&td10_track_check_rel)+2)));	// 33256 mov     es, word ptr td10_track_check_rel+2 ;~ 0FBC:3145
cs=0xfbc;eip=0x003149; 	X(MOV(*(dw*)(raddr(es,bx+4)), cx));	// 33257 mov     es:[bx+4], cx ;~ 0FBC:3149
cs=0xfbc;eip=0x00314d; 	T(MOV(al, *(raddr(ss,bp+var_ae6))));	// 33258 mov     al, [bp+var_AE6] ;~ 0FBC:314D
cs=0xfbc;eip=0x003151; 	T(SUB(ah, ah));	// 33259 sub     ah, ah ;~ 0FBC:3151
cs=0xfbc;eip=0x003153; 	T(MOV(bx, ax));	// 33260 mov     bx, ax ;~ 0FBC:3153
cs=0xfbc;eip=0x003155; 	T(SHL(bx, 1));	// 33261 shl     bx, 1 ;~ 0FBC:3155
cs=0xfbc;eip=0x003157; 	T(ADD(bx, ax));	// 33262 add     bx, ax ;~ 0FBC:3157
cs=0xfbc;eip=0x003159; 	T(SHL(bx, 1));	// 33263 shl     bx, 1 ;~ 0FBC:3159
cs=0xfbc;eip=0x00315b; 	T(ADD(bx, ax));	// 33264 add     bx, ax ;~ 0FBC:315B
cs=0xfbc;eip=0x00315d; 	T(SHL(bx, 1));	// 33265 shl     bx, 1 ;~ 0FBC:315D
cs=0xfbc;eip=0x00315f; 	T(TEST(*((&byte_3d813)+bx), 2));	// 33266 test    byte_3D813[bx], 2 ;~ 0FBC:315F
cs=0xfbc;eip=0x003164; 	R(JZ(loc_21314));	// 33267 jz      short loc_21314 ;~ 0FBC:3164
cs=0xfbc;eip=0x003166; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 33268 mov     al, [bp+var_10] ;~ 0FBC:3166
cs=0xfbc;eip=0x003169; 	T(CBW);	// 33269 cbw ;~ 0FBC:3169
cs=0xfbc;eip=0x00316a; 	T(MOV(bx, ax));	// 33270 mov     bx, ax ;~ 0FBC:316A
cs=0xfbc;eip=0x00316c; 	T(SHL(bx, 1));	// 33271 shl     bx, 1 ;~ 0FBC:316C
cs=0xfbc;eip=0x00316e; 	T(MOV(ax, *(dw*)((((db*)trackpos2)+2)+bx)));	// 33272 mov     ax, (trackpos2+2)[bx] ;~ 0FBC:316E
cs=0xfbc;eip=0x003172; 	R(JMP(loc_21320));	// 33273 jmp     short loc_21320 ;~ 0FBC:3172
loc_21314:
	// 6649 
cs=0xfbc;eip=0x003174; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 33277 mov     al, [bp+var_10] ;~ 0FBC:3174
cs=0xfbc;eip=0x003177; 	T(CBW);	// 33278 cbw ;~ 0FBC:3177
cs=0xfbc;eip=0x003178; 	T(MOV(bx, ax));	// 33279 mov     bx, ax ;~ 0FBC:3178
cs=0xfbc;eip=0x00317a; 	T(SHL(bx, 1));	// 33280 shl     bx, 1 ;~ 0FBC:317A
cs=0xfbc;eip=0x00317c; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 33281 mov     ax, trackcenterpos2[bx] ;~ 0FBC:317C
loc_21320:
	// 6650 
cs=0xfbc;eip=0x003180; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_ada))));	// 33284 add     ax, [bp+var_ADA] ;~ 0FBC:3180
cs=0xfbc;eip=0x003184; 	T(MOV(cx, ax));	// 33285 mov     cx, ax ;~ 0FBC:3184
cs=0xfbc;eip=0x003186; 	T(MOV(al, byte_45635));	// 33286 mov     al, byte_45635 ;~ 0FBC:3186
cs=0xfbc;eip=0x003189; 	T(CBW);	// 33287 cbw ;~ 0FBC:3189
cs=0xfbc;eip=0x00318a; 	T(MOV(bx, ax));	// 33288 mov     bx, ax ;~ 0FBC:318A
cs=0xfbc;eip=0x00318c; 	T(SHL(bx, 1));	// 33289 shl     bx, 1 ;~ 0FBC:318C
cs=0xfbc;eip=0x00318e; 	T(ADD(bx, ax));	// 33290 add     bx, ax ;~ 0FBC:318E
cs=0xfbc;eip=0x003190; 	T(SHL(bx, 1));	// 33291 shl     bx, 1 ;~ 0FBC:3190
cs=0xfbc;eip=0x003192; 	T(ADD(bx, *(dw*)(((db*)&td10_track_check_rel))));	// 33292 add     bx, word ptr td10_track_check_rel ;~ 0FBC:3192
cs=0xfbc;eip=0x003196; 	T(MOV(es, *(dw*)(((db*)&td10_track_check_rel)+2)));	// 33293 mov     es, word ptr td10_track_check_rel+2 ;~ 0FBC:3196
cs=0xfbc;eip=0x00319a; 	X(MOV(*(dw*)(raddr(es,bx)), cx));	// 33294 mov     es:[bx], cx ;~ 0FBC:319A
cs=0xfbc;eip=0x00319d; 	T(MOV(al, *(raddr(ss,bp+var_39a))));	// 33295 mov     al, [bp+var_39A] ;~ 0FBC:319D
cs=0xfbc;eip=0x0031a1; 	T(CBW);	// 33296 cbw ;~ 0FBC:31A1
cs=0xfbc;eip=0x0031a2; 	T(MOV(bx, ax));	// 33297 mov     bx, ax ;~ 0FBC:31A2
cs=0xfbc;eip=0x0031a4; 	T(SHL(bx, 1));	// 33298 shl     bx, 1 ;~ 0FBC:31A4
cs=0xfbc;eip=0x0031a6; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 33299 mov     bx, trackrows[bx] ;~ 0FBC:31A6
cs=0xfbc;eip=0x0031aa; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 33300 mov     al, [bp+var_10] ;~ 0FBC:31AA
cs=0xfbc;eip=0x0031ad; 	T(CBW);	// 33301 cbw ;~ 0FBC:31AD
cs=0xfbc;eip=0x0031ae; 	T(ADD(bx, ax));	// 33302 add     bx, ax ;~ 0FBC:31AE
cs=0xfbc;eip=0x0031b0; 	T(ADD(bx, *(dw*)(((db*)&trackdata19))));	// 33303 add     bx, word ptr trackdata19 ;~ 0FBC:31B0
cs=0xfbc;eip=0x0031b4; 	T(MOV(es, *(dw*)(((db*)&trackdata19)+2)));	// 33304 mov     es, word ptr trackdata19+2 ;~ 0FBC:31B4
cs=0xfbc;eip=0x0031b8; 	T(MOV(al, byte_45635));	// 33305 mov     al, byte_45635 ;~ 0FBC:31B8
cs=0xfbc;eip=0x0031bb; 	X(MOV(*(raddr(es,bx)), al));	// 33306 mov     es:[bx], al ;~ 0FBC:31BB
cs=0xfbc;eip=0x0031be; 	X(INC(byte_45635));	// 33307 inc     byte_45635 ;~ 0FBC:31BE
loc_21362:
	// 6651 
cs=0xfbc;eip=0x0031c2; 	X(MOV(*(raddr(ss,bp+var_3a8)), 0));	// 33311 mov     [bp+var_3A8], 0 ;~ 0FBC:31C2
loc_21367:
	// 6652 
cs=0xfbc;eip=0x0031c7; 	X(INC(track_pieces_counter));	// 33314 inc     track_pieces_counter ;~ 0FBC:31C7
cs=0xfbc;eip=0x0031cb; 	T(CMP(track_pieces_counter, 0x385));	// 33315 cmp     track_pieces_counter, 385h ;~ 0FBC:31CB
cs=0xfbc;eip=0x0031d1; 	R(JNZ(loc_2137c));	// 33316 jnz     short loc_2137C ;~ 0FBC:31D1
cs=0xfbc;eip=0x0031d3; 	X(MOV(*(raddr(ss,bp+var_3b0)), many_elem));	// 33317 mov     [bp+var_3B0], many_elem ;~ 0FBC:31D3
cs=0xfbc;eip=0x0031d8; 	R(JMP(loc_2078d));	// 33318 jmp     loc_2078D ;~ 0FBC:31D8
loc_2137c:
	// 6653 
cs=0xfbc;eip=0x0031dc; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 33323 mov     al, [bp+var_E] ;~ 0FBC:31DC
cs=0xfbc;eip=0x0031df; 	T(SUB(ah, ah));	// 33324 sub     ah, ah ;~ 0FBC:31DF
cs=0xfbc;eip=0x0031e1; 	T(MOV(bx, ax));	// 33325 mov     bx, ax ;~ 0FBC:31E1
cs=0xfbc;eip=0x0031e3; 	T(SHL(bx, 1));	// 33326 shl     bx, 1 ;~ 0FBC:31E3
cs=0xfbc;eip=0x0031e5; 	T(ADD(bx, ax));	// 33327 add     bx, ax ;~ 0FBC:31E5
cs=0xfbc;eip=0x0031e7; 	T(SHL(bx, 1));	// 33328 shl     bx, 1 ;~ 0FBC:31E7
cs=0xfbc;eip=0x0031e9; 	T(ADD(bx, ax));	// 33329 add     bx, ax ;~ 0FBC:31E9
cs=0xfbc;eip=0x0031eb; 	T(SHL(bx, 1));	// 33330 shl     bx, 1 ;~ 0FBC:31EB
cs=0xfbc;eip=0x0031ed; 	T(MOV(ax, *(dw*)(((db*)&trkobjectlist)+bx)));	// 33331 mov     ax, trkObjectList[bx] ;~ 0FBC:31ED
cs=0xfbc;eip=0x0031f1; 	X(MOV(*(dw*)(raddr(ss,bp+var_39c)), ax));	// 33332 mov     [bp+var_39C], ax ;~ 0FBC:31F1
cs=0xfbc;eip=0x0031f5; 	T(MOV(al, *(raddr(ss,bp+var_742))));	// 33333 mov     al, [bp+var_742] ;~ 0FBC:31F5
cs=0xfbc;eip=0x0031f9; 	T(SUB(ah, ah));	// 33334 sub     ah, ah ;~ 0FBC:31F9
cs=0xfbc;eip=0x0031fb; 	T(MOV(cx, ax));	// 33335 mov     cx, ax ;~ 0FBC:31FB
cs=0xfbc;eip=0x0031fd; 	T(SHL(ax, 1));	// 33336 shl     ax, 1 ;~ 0FBC:31FD
cs=0xfbc;eip=0x0031ff; 	T(ADD(ax, cx));	// 33337 add     ax, cx ;~ 0FBC:31FF
cs=0xfbc;eip=0x003201; 	T(SHL(ax, 1));	// 33338 shl     ax, 1 ;~ 0FBC:3201
cs=0xfbc;eip=0x003203; 	T(ADD(ax, cx));	// 33339 add     ax, cx ;~ 0FBC:3203
cs=0xfbc;eip=0x003205; 	T(SHL(ax, 1));	// 33340 shl     ax, 1 ;~ 0FBC:3205
cs=0xfbc;eip=0x003207; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_39c))));	// 33341 add     ax, [bp+var_39C] ;~ 0FBC:3207
cs=0xfbc;eip=0x00320b; 	X(MOV(*(dw*)(raddr(ss,bp+var_3ae)), ax));	// 33342 mov     [bp+var_3AE], ax ;~ 0FBC:320B
cs=0xfbc;eip=0x00320f; 	T(CMP(*(raddr(ss,bp+var_73e)), 0));	// 33343 cmp     [bp+var_73E], 0 ;~ 0FBC:320F
cs=0xfbc;eip=0x003214; 	R(JZ(loc_213c4));	// 33344 jz      short loc_213C4 ;~ 0FBC:3214
cs=0xfbc;eip=0x003216; 	T(MOV(bx, ax));	// 33345 mov     bx, ax ;~ 0FBC:3216
cs=0xfbc;eip=0x003218; 	T(MOV(al, *(raddr(ds,bx+1))));	// 33346 mov     al, [bx+1] ;~ 0FBC:3218
cs=0xfbc;eip=0x00321b; 	X(MOV(*(raddr(ss,bp+var_744)), al));	// 33347 mov     [bp+var_744], al ;~ 0FBC:321B
cs=0xfbc;eip=0x00321f; 	T(MOV(al, *(raddr(ds,bx+3))));	// 33348 mov     al, [bx+3] ;~ 0FBC:321F
cs=0xfbc;eip=0x003222; 	R(JMP(loc_213d2));	// 33349 jmp     short loc_213D2 ;~ 0FBC:3222
loc_213c4:
	// 6654 
cs=0xfbc;eip=0x003224; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3ae))));	// 33353 mov     bx, [bp+var_3AE] ;~ 0FBC:3224
cs=0xfbc;eip=0x003228; 	T(MOV(al, *(raddr(ds,bx+2))));	// 33354 mov     al, [bx+2] ;~ 0FBC:3228
cs=0xfbc;eip=0x00322b; 	X(MOV(*(raddr(ss,bp+var_744)), al));	// 33355 mov     [bp+var_744], al ;~ 0FBC:322B
cs=0xfbc;eip=0x00322f; 	T(MOV(al, *(raddr(ds,bx+4))));	// 33356 mov     al, [bx+4] ;~ 0FBC:322F
loc_213d2:
	// 6655 
cs=0xfbc;eip=0x003232; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 33359 mov     [bp+var_12], al ;~ 0FBC:3232
cs=0xfbc;eip=0x003235; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 33360 mov     al, [bp+var_3A4] ;~ 0FBC:3235
cs=0xfbc;eip=0x003239; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 33361 mov     [bp+var_10], al ;~ 0FBC:3239
cs=0xfbc;eip=0x00323c; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 33362 mov     al, [bp+var_73A] ;~ 0FBC:323C
cs=0xfbc;eip=0x003240; 	X(MOV(*(raddr(ss,bp+var_39a)), al));	// 33363 mov     [bp+var_39A], al ;~ 0FBC:3240
cs=0xfbc;eip=0x003244; 	T(MOV(al, *(raddr(ss,bp+var_73e))));	// 33364 mov     al, [bp+var_73E] ;~ 0FBC:3244
cs=0xfbc;eip=0x003248; 	X(MOV(*(raddr(ss,bp+var_740)), al));	// 33365 mov     [bp+var_740], al ;~ 0FBC:3248
cs=0xfbc;eip=0x00324c; 	T(MOV(al, *(raddr(ss,bp+var_742))));	// 33366 mov     al, [bp+var_742] ;~ 0FBC:324C
cs=0xfbc;eip=0x003250; 	X(MOV(*(raddr(ss,bp+var_3aa)), al));	// 33367 mov     [bp+var_3AA], al ;~ 0FBC:3250
cs=0xfbc;eip=0x003254; 	T(MOV(al, *(raddr(ss,bp+var_e))));	// 33368 mov     al, [bp+var_E] ;~ 0FBC:3254
cs=0xfbc;eip=0x003257; 	X(MOV(*(raddr(ss,bp+var_ae6)), al));	// 33369 mov     [bp+var_AE6], al ;~ 0FBC:3257
cs=0xfbc;eip=0x00325b; 	T(MOV(al, *(raddr(ss,bp+var_744))));	// 33370 mov     al, [bp+var_744] ;~ 0FBC:325B
cs=0xfbc;eip=0x00325f; 	T(SUB(ah, ah));	// 33371 sub     ah, ah ;~ 0FBC:325F
cs=0xfbc;eip=0x003261; 	T(SUB(ax, 1));	// 33372 sub     ax, 1           ; switch 12 cases ;~ 0FBC:3261
cs=0xfbc;eip=0x003264; 	T(CMP(ax, 0x0B));	// 33373 cmp     ax, 0Bh ;~ 0FBC:3264
cs=0xfbc;eip=0x003267; 	R(JBE(loc_2140c));	// 33374 jbe     short loc_2140C ; filler-ish ;~ 0FBC:3267
cs=0xfbc;eip=0x003269; 	R(JMP(def_2140f));	// 33375 jmp     def_2140F       ; jumptable 0002140F default case ;~ 0FBC:3269
loc_2140c:
	// 6656 
cs=0xfbc;eip=0x00326c; 	T(ADD(ax, ax));	// 33379 add     ax, ax ;~ 0FBC:326C
cs=0xfbc;eip=0x00326e; 	T(XCHG(ax, bx));	// 33380 xchg    ax, bx ;~ 0FBC:326E
	cs=seg_offset(seg004);
cs=0xfbc;eip=0x00326f; __disp=*(dw*)(((db*)&jpt_2140f)+bx);
	R(JMP(__dispatch_call));	// 33381 jmp     cs:jpt_2140F[bx] ; switch jump ;~ 0FBC:326F
loc_21414:
	// 6657 
cs=0xfbc;eip=0x003274; 	X(DEC(*(raddr(ss,bp+var_73a))));	// 33386 dec     [bp+var_73A]    ; jumptable 0002140F case 1 ;~ 0FBC:3274
loc_21418:
	// 6658 
cs=0xfbc;eip=0x003278; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 33389 mov     [bp+var_8], 0 ;~ 0FBC:3278
cs=0xfbc;eip=0x00327d; 	R(JMP(def_2140f));	// 33390 jmp     def_2140F       ; jumptable 0002140F default case ;~ 0FBC:327D
loc_21420:
	// 6659 
cs=0xfbc;eip=0x003280; 	X(DEC(*(raddr(ss,bp+var_73a))));	// 33395 dec     [bp+var_73A]    ; jumptable 0002140F case 5 ;~ 0FBC:3280
cs=0xfbc;eip=0x003284; 	X(INC(*(raddr(ss,bp+var_3a4))));	// 33396 inc     [bp+var_3A4] ;~ 0FBC:3284
cs=0xfbc;eip=0x003288; 	R(JMP(loc_21418));	// 33397 jmp     short loc_21418 ;~ 0FBC:3288
loc_2142a:
	// 6660 
cs=0xfbc;eip=0x00328a; 	X(INC(*(raddr(ss,bp+var_73a))));	// 33402 inc     [bp+var_73A]    ; jumptable 0002140F case 6 ;~ 0FBC:328A
loc_2142e:
	// 6661 
cs=0xfbc;eip=0x00328e; 	X(DEC(*(raddr(ss,bp+var_3a4))));	// 33406 dec     [bp+var_3A4]    ; jumptable 0002140F case 4 ;~ 0FBC:328E
cs=0xfbc;eip=0x003292; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x300));	// 33407 mov     [bp+var_8], 300h ;~ 0FBC:3292
cs=0xfbc;eip=0x003297; 	R(JMP(def_2140f));	// 33408 jmp     def_2140F       ; jumptable 0002140F default case ;~ 0FBC:3297
loc_2143a:
	// 6662 
cs=0xfbc;eip=0x00329a; 	X(INC(*(raddr(ss,bp+var_3a4))));	// 33413 inc     [bp+var_3A4]    ; jumptable 0002140F case 10 ;~ 0FBC:329A
loc_2143e:
	// 6663 
cs=0xfbc;eip=0x00329e; 	X(INC(*(raddr(ss,bp+var_73a))));	// 33417 inc     [bp+var_73A]    ; jumptable 0002140F case 2 ;~ 0FBC:329E
loc_21442:
	// 6664 
cs=0xfbc;eip=0x0032a2; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x200));	// 33420 mov     [bp+var_8], 200h ;~ 0FBC:32A2
cs=0xfbc;eip=0x0032a7; 	R(JMP(def_2140f));	// 33421 jmp     def_2140F       ; jumptable 0002140F default case ;~ 0FBC:32A7
loc_2144a:
	// 6665 
cs=0xfbc;eip=0x0032aa; 	X(INC(*(raddr(ss,bp+var_3a4))));	// 33426 inc     [bp+var_3A4]    ; jumptable 0002140F case 12 ;~ 0FBC:32AA
loc_2144e:
	// 6666 
cs=0xfbc;eip=0x0032ae; 	X(ADD(*(raddr(ss,bp+var_73a)), 2));	// 33430 add     [bp+var_73A], 2 ; jumptable 0002140F case 11 ;~ 0FBC:32AE
cs=0xfbc;eip=0x0032b3; 	R(JMP(loc_21442));	// 33431 jmp     short loc_21442 ;~ 0FBC:32B3
loc_21456:
	// 6667 
cs=0xfbc;eip=0x0032b6; 	X(INC(*(raddr(ss,bp+var_3a4))));	// 33437 inc     [bp+var_3A4]    ; jumptable 0002140F case 3 ;~ 0FBC:32B6
loc_2145a:
	// 6668 
cs=0xfbc;eip=0x0032ba; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x100));	// 33441 mov     [bp+var_8], 100h ;~ 0FBC:32BA
cs=0xfbc;eip=0x0032bf; 	R(JMP(def_2140f));	// 33442 jmp     def_2140F       ; jumptable 0002140F default case ;~ 0FBC:32BF
loc_21462:
	// 6669 
cs=0xfbc;eip=0x0032c2; 	X(INC(*(raddr(ss,bp+var_3a4))));	// 33447 inc     [bp+var_3A4]    ; jumptable 0002140F case 7 ;~ 0FBC:32C2
loc_21466:
	// 6670 
cs=0xfbc;eip=0x0032c6; 	X(INC(*(raddr(ss,bp+var_73a))));	// 33450 inc     [bp+var_73A] ;~ 0FBC:32C6
cs=0xfbc;eip=0x0032ca; 	R(JMP(loc_2145a));	// 33451 jmp     short loc_2145A ;~ 0FBC:32CA
loc_2146c:
	// 6671 
cs=0xfbc;eip=0x0032cc; 	X(ADD(*(raddr(ss,bp+var_3a4)), 2));	// 33456 add     [bp+var_3A4], 2 ; jumptable 0002140F case 8 ;~ 0FBC:32CC
cs=0xfbc;eip=0x0032d1; 	R(JMP(loc_2145a));	// 33457 jmp     short loc_2145A ;~ 0FBC:32D1
loc_21474:
	// 6672 
cs=0xfbc;eip=0x0032d4; 	X(ADD(*(raddr(ss,bp+var_3a4)), 2));	// 33463 add     [bp+var_3A4], 2 ; jumptable 0002140F case 9 ;~ 0FBC:32D4
cs=0xfbc;eip=0x0032d9; 	R(JMP(loc_21466));	// 33464 jmp     short loc_21466 ;~ 0FBC:32D9
ret_fbc_32f4:
	// 6673 
cs=0xfbc;eip=0x0032f4; 	R(JMP(def_2140f));	// 33480 jmp     def_2140F       ; jumptable 0002140F default case ;~ 0FBC:32F4
loc_21498:
	// 6674 
cs=0xfbc;eip=0x0032f8; 	T(MOV(al, *(raddr(ss,bp+var_742))));	// 33486 mov     al, [bp+var_742] ;~ 0FBC:32F8
cs=0xfbc;eip=0x0032fc; 	T(SUB(ah, ah));	// 33487 sub     ah, ah ;~ 0FBC:32FC
cs=0xfbc;eip=0x0032fe; 	T(MOV(bx, ax));	// 33488 mov     bx, ax ;~ 0FBC:32FE
cs=0xfbc;eip=0x003300; 	T(SHL(bx, 1));	// 33489 shl     bx, 1 ;~ 0FBC:3300
cs=0xfbc;eip=0x003302; 	T(ADD(bx, ax));	// 33490 add     bx, ax ;~ 0FBC:3302
cs=0xfbc;eip=0x003304; 	T(SHL(bx, 1));	// 33491 shl     bx, 1 ;~ 0FBC:3304
cs=0xfbc;eip=0x003306; 	T(ADD(bx, ax));	// 33492 add     bx, ax ;~ 0FBC:3306
cs=0xfbc;eip=0x003308; 	T(SHL(bx, 1));	// 33493 shl     bx, 1 ;~ 0FBC:3308
cs=0xfbc;eip=0x00330a; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_3ae))));	// 33494 add     bx, [bp+var_3AE] ;~ 0FBC:330A
cs=0xfbc;eip=0x00330e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 33495 mov     ax, [bx+8] ;~ 0FBC:330E
loc_214b1:
	// 6675 
cs=0xfbc;eip=0x003311; 	X(MOV(*(dw*)(raddr(ss,bp+var_ade)), ax));	// 33498 mov     [bp+var_ADE], ax ;~ 0FBC:3311
cs=0xfbc;eip=0x003315; 	X(MOV(*(dw*)(raddr(ss,bp+var_adc)), ds));	// 33499 mov     [bp+var_ADC], ds ;~ 0FBC:3315
cs=0xfbc;eip=0x003319; 	T(MOV(al, *(raddr(ss,bp+var_742))));	// 33500 mov     al, [bp+var_742] ;~ 0FBC:3319
cs=0xfbc;eip=0x00331d; 	T(SUB(ah, ah));	// 33501 sub     ah, ah ;~ 0FBC:331D
cs=0xfbc;eip=0x00331f; 	T(MOV(cx, ax));	// 33502 mov     cx, ax ;~ 0FBC:331F
cs=0xfbc;eip=0x003321; 	T(SHL(ax, 1));	// 33503 shl     ax, 1 ;~ 0FBC:3321
cs=0xfbc;eip=0x003323; 	T(ADD(ax, cx));	// 33504 add     ax, cx ;~ 0FBC:3323
cs=0xfbc;eip=0x003325; 	T(SHL(ax, 1));	// 33505 shl     ax, 1 ;~ 0FBC:3325
cs=0xfbc;eip=0x003327; 	T(ADD(ax, cx));	// 33506 add     ax, cx ;~ 0FBC:3327
cs=0xfbc;eip=0x003329; 	T(SHL(ax, 1));	// 33507 shl     ax, 1 ;~ 0FBC:3329
cs=0xfbc;eip=0x00332b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_3ae))));	// 33508 add     ax, [bp+var_3AE] ;~ 0FBC:332B
cs=0xfbc;eip=0x00332f; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_af0))), ax));	// 33509 mov     word ptr [bp+var_AF0], ax ;~ 0FBC:332F
cs=0xfbc;eip=0x003333; 	T(MOV(bx, ax));	// 33510 mov     bx, ax ;~ 0FBC:3333
cs=0xfbc;eip=0x003335; 	T(MOV(al, *(raddr(ds,bx+5))));	// 33511 mov     al, [bx+5] ;~ 0FBC:3335
cs=0xfbc;eip=0x003338; 	T(SUB(ah, ah));	// 33512 sub     ah, ah ;~ 0FBC:3338
cs=0xfbc;eip=0x00333a; 	T(MOV(cx, ax));	// 33513 mov     cx, ax ;~ 0FBC:333A
cs=0xfbc;eip=0x00333c; 	T(SHL(ax, 1));	// 33514 shl     ax, 1 ;~ 0FBC:333C
cs=0xfbc;eip=0x00333e; 	T(ADD(ax, cx));	// 33515 add     ax, cx ;~ 0FBC:333E
cs=0xfbc;eip=0x003340; 	T(SHL(ax, 1));	// 33516 shl     ax, 1 ;~ 0FBC:3340
cs=0xfbc;eip=0x003342; 	T(SHL(ax, 1));	// 33517 shl     ax, 1 ;~ 0FBC:3342
cs=0xfbc;eip=0x003344; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_ade))));	// 33518 add     ax, [bp+var_ADE] ;~ 0FBC:3344
cs=0xfbc;eip=0x003348; 	T(MOV(dx, ds));	// 33519 mov     dx, ds ;~ 0FBC:3348
cs=0xfbc;eip=0x00334a; 	X(PUSH(si));	// 33520 push    si ;~ 0FBC:334A
cs=0xfbc;eip=0x00334b; 	X(PUSH(di));	// 33521 push    di ;~ 0FBC:334B
cs=0xfbc;eip=0x00334c; 	T(di = bp+var_ada);	// 33522 lea     di, [bp+var_ADA] ;~ 0FBC:334C
cs=0xfbc;eip=0x003350; 	T(MOV(si, ax));	// 33523 mov     si, ax ;~ 0FBC:3350
cs=0xfbc;eip=0x003352; 	X(PUSH(ss));	// 33524 push    ss ;~ 0FBC:3352
cs=0xfbc;eip=0x003353; 	X(POP(es));	// 33525 pop     es ;~ 0FBC:3353
cs=0xfbc;eip=0x003354; 	X(PUSH(ds));	// 33526 push    ds ;~ 0FBC:3354
cs=0xfbc;eip=0x003355; 	X(MOVSW);	// 33527 movsw ;~ 0FBC:3355
cs=0xfbc;eip=0x003356; 	X(MOVSW);	// 33528 movsw ;~ 0FBC:3356
cs=0xfbc;eip=0x003357; 	X(MOVSW);	// 33529 movsw ;~ 0FBC:3357
cs=0xfbc;eip=0x003358; 	X(POP(ds));	// 33530 pop     ds ;~ 0FBC:3358
cs=0xfbc;eip=0x003359; 	X(POP(di));	// 33531 pop     di ;~ 0FBC:3359
cs=0xfbc;eip=0x00335a; 	X(POP(si));	// 33532 pop     si ;~ 0FBC:335A
cs=0xfbc;eip=0x00335b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 33533 mov     ax, [bx+6] ;~ 0FBC:335B
cs=0xfbc;eip=0x00335e; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 33534 mov     [bp+var_8], ax ;~ 0FBC:335E
cs=0xfbc;eip=0x003361; 	T(CMP(ax, 0x100));	// 33535 cmp     ax, 100h ;~ 0FBC:3361
cs=0xfbc;eip=0x003364; 	R(JZ(loc_21576));	// 33536 jz      short loc_21576 ;~ 0FBC:3364
cs=0xfbc;eip=0x003366; 	T(CMP(ax, 0x200));	// 33537 cmp     ax, 200h ;~ 0FBC:3366
cs=0xfbc;eip=0x003369; 	R(JZ(loc_21560));	// 33538 jz      short loc_21560 ;~ 0FBC:3369
cs=0xfbc;eip=0x00336b; 	T(CMP(ax, 0x300));	// 33539 cmp     ax, 300h ;~ 0FBC:336B
cs=0xfbc;eip=0x00336e; 	R(JNZ(loc_2152a));	// 33540 jnz     short loc_2152A ;~ 0FBC:336E
cs=0xfbc;eip=0x003370; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ada))));	// 33541 mov     ax, [bp+var_ADA] ;~ 0FBC:3370
cs=0xfbc;eip=0x003374; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a2)), ax));	// 33542 mov     [bp+var_3A2], ax ;~ 0FBC:3374
cs=0xfbc;eip=0x003378; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ad6))));	// 33543 mov     ax, [bp+var_AD6] ;~ 0FBC:3378
cs=0xfbc;eip=0x00337c; 	T(NEG(ax));	// 33544 neg     ax ;~ 0FBC:337C
cs=0xfbc;eip=0x00337e; 	X(MOV(*(dw*)(raddr(ss,bp+var_ada)), ax));	// 33545 mov     [bp+var_ADA], ax ;~ 0FBC:337E
cs=0xfbc;eip=0x003382; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3a2))));	// 33546 mov     ax, [bp+var_3A2] ;~ 0FBC:3382
loc_21526:
	// 6676 
cs=0xfbc;eip=0x003386; 	X(MOV(*(dw*)(raddr(ss,bp+var_ad6)), ax));	// 33549 mov     [bp+var_AD6], ax ;~ 0FBC:3386
loc_2152a:
	// 6677 
cs=0xfbc;eip=0x00338a; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 33553 mov     al, [bp+var_73A] ;~ 0FBC:338A
cs=0xfbc;eip=0x00338e; 	T(CBW);	// 33554 cbw ;~ 0FBC:338E
cs=0xfbc;eip=0x00338f; 	T(MOV(bx, ax));	// 33555 mov     bx, ax ;~ 0FBC:338F
cs=0xfbc;eip=0x003391; 	T(SHL(bx, 1));	// 33556 shl     bx, 1 ;~ 0FBC:3391
cs=0xfbc;eip=0x003393; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 33557 mov     bx, terrainrows[bx] ;~ 0FBC:3393
cs=0xfbc;eip=0x003397; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 33558 mov     al, [bp+var_3A4] ;~ 0FBC:3397
cs=0xfbc;eip=0x00339b; 	T(CBW);	// 33559 cbw ;~ 0FBC:339B
cs=0xfbc;eip=0x00339c; 	T(ADD(bx, ax));	// 33560 add     bx, ax ;~ 0FBC:339C
cs=0xfbc;eip=0x00339e; 	T(ADD(bx, *(dw*)(((db*)&td15_terr_map_main))));	// 33561 add     bx, word ptr td15_terr_map_main ;~ 0FBC:339E
cs=0xfbc;eip=0x0033a2; 	T(MOV(es, *(dw*)(((db*)&td15_terr_map_main)+2)));	// 33562 mov     es, word ptr td15_terr_map_main+2 ;~ 0FBC:33A2
cs=0xfbc;eip=0x0033a6; 	T(CMP(*(raddr(es,bx)), 6));	// 33563 cmp     byte ptr es:[bx], 6 ;~ 0FBC:33A6
cs=0xfbc;eip=0x0033aa; 	R(JNZ(loc_2158e));	// 33564 jnz     short loc_2158E ;~ 0FBC:33AA
cs=0xfbc;eip=0x0033ac; 	T(MOV(bx, di));	// 33565 mov     bx, di ;~ 0FBC:33AC
cs=0xfbc;eip=0x0033ae; 	T(SHL(bx, 1));	// 33566 shl     bx, 1 ;~ 0FBC:33AE
cs=0xfbc;eip=0x0033b0; 	T(ADD(bx, trackdata7));	// 33567 add     bx, trackdata7 ;~ 0FBC:33B0
cs=0xfbc;eip=0x0033b4; 	T(MOV(es, word_454b6));	// 33568 mov     es, word_454B6 ;~ 0FBC:33B4
cs=0xfbc;eip=0x0033b8; 	X(MOV(*(dw*)(raddr(es,bx)), 0x1C2));	// 33569 mov     word ptr es:[bx], 1C2h ;~ 0FBC:33B8
cs=0xfbc;eip=0x0033bd; 	R(JMP(loc_2159f));	// 33570 jmp     short loc_2159F ;~ 0FBC:33BD
loc_21560:
	// 6678 
cs=0xfbc;eip=0x0033c0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ad6))));	// 33575 mov     ax, [bp+var_AD6] ;~ 0FBC:33C0
cs=0xfbc;eip=0x0033c4; 	T(NEG(ax));	// 33576 neg     ax ;~ 0FBC:33C4
cs=0xfbc;eip=0x0033c6; 	X(MOV(*(dw*)(raddr(ss,bp+var_ad6)), ax));	// 33577 mov     [bp+var_AD6], ax ;~ 0FBC:33C6
cs=0xfbc;eip=0x0033ca; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ada))));	// 33578 mov     ax, [bp+var_ADA] ;~ 0FBC:33CA
cs=0xfbc;eip=0x0033ce; 	T(NEG(ax));	// 33579 neg     ax ;~ 0FBC:33CE
cs=0xfbc;eip=0x0033d0; 	X(MOV(*(dw*)(raddr(ss,bp+var_ada)), ax));	// 33580 mov     [bp+var_ADA], ax ;~ 0FBC:33D0
cs=0xfbc;eip=0x0033d4; 	R(JMP(loc_2152a));	// 33581 jmp     short loc_2152A ;~ 0FBC:33D4
loc_21576:
	// 6679 
cs=0xfbc;eip=0x0033d6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ada))));	// 33585 mov     ax, [bp+var_ADA] ;~ 0FBC:33D6
cs=0xfbc;eip=0x0033da; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a2)), ax));	// 33586 mov     [bp+var_3A2], ax ;~ 0FBC:33DA
cs=0xfbc;eip=0x0033de; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ad6))));	// 33587 mov     ax, [bp+var_AD6] ;~ 0FBC:33DE
cs=0xfbc;eip=0x0033e2; 	X(MOV(*(dw*)(raddr(ss,bp+var_ada)), ax));	// 33588 mov     [bp+var_ADA], ax ;~ 0FBC:33E2
cs=0xfbc;eip=0x0033e6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3a2))));	// 33589 mov     ax, [bp+var_3A2] ;~ 0FBC:33E6
cs=0xfbc;eip=0x0033ea; 	T(NEG(ax));	// 33590 neg     ax ;~ 0FBC:33EA
cs=0xfbc;eip=0x0033ec; 	R(JMP(loc_21526));	// 33591 jmp     short loc_21526 ;~ 0FBC:33EC
loc_2158e:
	// 6680 
cs=0xfbc;eip=0x0033ee; 	T(MOV(bx, di));	// 33595 mov     bx, di ;~ 0FBC:33EE
cs=0xfbc;eip=0x0033f0; 	T(SHL(bx, 1));	// 33596 shl     bx, 1 ;~ 0FBC:33F0
cs=0xfbc;eip=0x0033f2; 	T(ADD(bx, trackdata7));	// 33597 add     bx, trackdata7 ;~ 0FBC:33F2
cs=0xfbc;eip=0x0033f6; 	T(MOV(es, word_454b6));	// 33598 mov     es, word_454B6 ;~ 0FBC:33F6
cs=0xfbc;eip=0x0033fa; 	X(MOV(*(dw*)(raddr(es,bx)), 0));	// 33599 mov     word ptr es:[bx], 0 ;~ 0FBC:33FA
loc_2159f:
	// 6681 
cs=0xfbc;eip=0x0033ff; 	T(MOV(ax, di));	// 33602 mov     ax, di ;~ 0FBC:33FF
cs=0xfbc;eip=0x003401; 	T(SHL(ax, 1));	// 33603 shl     ax, 1 ;~ 0FBC:3401
cs=0xfbc;eip=0x003403; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_af0))), ax));	// 33604 mov     word ptr [bp+var_AF0], ax ;~ 0FBC:3403
cs=0xfbc;eip=0x003407; 	T(MOV(bx, ax));	// 33605 mov     bx, ax ;~ 0FBC:3407
cs=0xfbc;eip=0x003409; 	T(ADD(bx, trackdata6));	// 33606 add     bx, trackdata6 ;~ 0FBC:3409
cs=0xfbc;eip=0x00340d; 	T(MOV(es, word_454d2));	// 33607 mov     es, word_454D2 ;~ 0FBC:340D
cs=0xfbc;eip=0x003411; 	X(MOV(*(dw*)(raddr(es,bx)), 0));	// 33608 mov     word ptr es:[bx], 0 ;~ 0FBC:3411
cs=0xfbc;eip=0x003416; 	T(MOV(ax, di));	// 33609 mov     ax, di ;~ 0FBC:3416
cs=0xfbc;eip=0x003418; 	T(MOV(cx, ax));	// 33610 mov     cx, ax ;~ 0FBC:3418
cs=0xfbc;eip=0x00341a; 	T(SHL(ax, 1));	// 33611 shl     ax, 1 ;~ 0FBC:341A
cs=0xfbc;eip=0x00341c; 	T(ADD(ax, cx));	// 33612 add     ax, cx ;~ 0FBC:341C
cs=0xfbc;eip=0x00341e; 	T(SHL(ax, 1));	// 33613 shl     ax, 1 ;~ 0FBC:341E
cs=0xfbc;eip=0x003420; 	X(MOV(*(dw*)(raddr(ss,bp+var_aec)), ax));	// 33614 mov     [bp+var_AEC], ax ;~ 0FBC:3420
cs=0xfbc;eip=0x003424; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_af0)))));	// 33615 mov     bx, word ptr [bp+var_AF0] ;~ 0FBC:3424
cs=0xfbc;eip=0x003428; 	T(ADD(bx, trackdata7));	// 33616 add     bx, trackdata7 ;~ 0FBC:3428
cs=0xfbc;eip=0x00342c; 	T(MOV(es, word_454b6));	// 33617 mov     es, word_454B6 ;~ 0FBC:342C
cs=0xfbc;eip=0x003430; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 33618 mov     ax, es:[bx] ;~ 0FBC:3430
cs=0xfbc;eip=0x003433; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_ad8))));	// 33619 add     ax, [bp+var_AD8] ;~ 0FBC:3433
cs=0xfbc;eip=0x003437; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_aec))));	// 33620 mov     bx, [bp+var_AEC] ;~ 0FBC:3437
cs=0xfbc;eip=0x00343b; 	T(ADD(bx, trackdata9));	// 33621 add     bx, trackdata9 ;~ 0FBC:343B
cs=0xfbc;eip=0x00343f; 	T(MOV(es, word_449de));	// 33622 mov     es, word_449DE ;~ 0FBC:343F
cs=0xfbc;eip=0x003443; 	X(MOV(*(dw*)(raddr(es,bx+2)), ax));	// 33623 mov     es:[bx+2], ax ;~ 0FBC:3443
cs=0xfbc;eip=0x003447; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 33624 mov     bx, [bp+var_C] ;~ 0FBC:3447
cs=0xfbc;eip=0x00344a; 	T(MOV(ax, bx));	// 33625 mov     ax, bx ;~ 0FBC:344A
cs=0xfbc;eip=0x00344c; 	T(SHL(bx, 1));	// 33626 shl     bx, 1 ;~ 0FBC:344C
cs=0xfbc;eip=0x00344e; 	T(ADD(bx, ax));	// 33627 add     bx, ax ;~ 0FBC:344E
cs=0xfbc;eip=0x003450; 	T(SHL(bx, 1));	// 33628 shl     bx, 1 ;~ 0FBC:3450
cs=0xfbc;eip=0x003452; 	T(ADD(bx, ax));	// 33629 add     bx, ax ;~ 0FBC:3452
cs=0xfbc;eip=0x003454; 	T(SHL(bx, 1));	// 33630 shl     bx, 1 ;~ 0FBC:3454
cs=0xfbc;eip=0x003456; 	T(TEST(*((&byte_3d813)+bx), 1));	// 33631 test    byte_3D813[bx], 1 ;~ 0FBC:3456
cs=0xfbc;eip=0x00345b; 	R(JZ(loc_21614));	// 33632 jz      short loc_21614 ;~ 0FBC:345B
cs=0xfbc;eip=0x00345d; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 33633 mov     al, [bp+var_73A] ;~ 0FBC:345D
cs=0xfbc;eip=0x003461; 	T(CBW);	// 33634 cbw ;~ 0FBC:3461
cs=0xfbc;eip=0x003462; 	T(MOV(bx, ax));	// 33635 mov     bx, ax ;~ 0FBC:3462
cs=0xfbc;eip=0x003464; 	T(SHL(bx, 1));	// 33636 shl     bx, 1 ;~ 0FBC:3464
cs=0xfbc;eip=0x003466; 	T(MOV(ax, *(dw*)(((db*)&trackpos)+bx)));	// 33637 mov     ax, trackpos[bx] ;~ 0FBC:3466
cs=0xfbc;eip=0x00346a; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_ad6))));	// 33638 add     ax, [bp+var_AD6] ;~ 0FBC:346A
cs=0xfbc;eip=0x00346e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_aec))));	// 33639 mov     bx, [bp+var_AEC] ;~ 0FBC:346E
cs=0xfbc;eip=0x003472; 	R(JMP(loc_2162f));	// 33640 jmp     short loc_2162F ;~ 0FBC:3472
loc_21614:
	// 6682 
cs=0xfbc;eip=0x003474; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 33644 mov     al, [bp+var_73A] ;~ 0FBC:3474
cs=0xfbc;eip=0x003478; 	T(CBW);	// 33645 cbw ;~ 0FBC:3478
cs=0xfbc;eip=0x003479; 	T(MOV(bx, ax));	// 33646 mov     bx, ax ;~ 0FBC:3479
cs=0xfbc;eip=0x00347b; 	T(SHL(bx, 1));	// 33647 shl     bx, 1 ;~ 0FBC:347B
cs=0xfbc;eip=0x00347d; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 33648 mov     ax, trackcenterpos[bx] ;~ 0FBC:347D
cs=0xfbc;eip=0x003481; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_ad6))));	// 33649 add     ax, [bp+var_AD6] ;~ 0FBC:3481
cs=0xfbc;eip=0x003485; 	T(MOV(bx, di));	// 33650 mov     bx, di ;~ 0FBC:3485
cs=0xfbc;eip=0x003487; 	T(MOV(cx, bx));	// 33651 mov     cx, bx ;~ 0FBC:3487
cs=0xfbc;eip=0x003489; 	T(SHL(bx, 1));	// 33652 shl     bx, 1 ;~ 0FBC:3489
cs=0xfbc;eip=0x00348b; 	T(ADD(bx, cx));	// 33653 add     bx, cx ;~ 0FBC:348B
cs=0xfbc;eip=0x00348d; 	T(SHL(bx, 1));	// 33654 shl     bx, 1 ;~ 0FBC:348D
loc_2162f:
	// 6683 
cs=0xfbc;eip=0x00348f; 	T(ADD(bx, trackdata9));	// 33657 add     bx, trackdata9 ;~ 0FBC:348F
cs=0xfbc;eip=0x003493; 	T(MOV(es, word_449de));	// 33658 mov     es, word_449DE ;~ 0FBC:3493
cs=0xfbc;eip=0x003497; 	X(MOV(*(dw*)(raddr(es,bx+4)), ax));	// 33659 mov     es:[bx+4], ax ;~ 0FBC:3497
cs=0xfbc;eip=0x00349b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 33660 mov     bx, [bp+var_C] ;~ 0FBC:349B
cs=0xfbc;eip=0x00349e; 	T(MOV(ax, bx));	// 33661 mov     ax, bx ;~ 0FBC:349E
cs=0xfbc;eip=0x0034a0; 	T(SHL(bx, 1));	// 33662 shl     bx, 1 ;~ 0FBC:34A0
cs=0xfbc;eip=0x0034a2; 	T(ADD(bx, ax));	// 33663 add     bx, ax ;~ 0FBC:34A2
cs=0xfbc;eip=0x0034a4; 	T(SHL(bx, 1));	// 33664 shl     bx, 1 ;~ 0FBC:34A4
cs=0xfbc;eip=0x0034a6; 	T(ADD(bx, ax));	// 33665 add     bx, ax ;~ 0FBC:34A6
cs=0xfbc;eip=0x0034a8; 	T(SHL(bx, 1));	// 33666 shl     bx, 1 ;~ 0FBC:34A8
cs=0xfbc;eip=0x0034aa; 	T(TEST(*((&byte_3d813)+bx), 2));	// 33667 test    byte_3D813[bx], 2 ;~ 0FBC:34AA
cs=0xfbc;eip=0x0034af; 	R(JZ(loc_21660));	// 33668 jz      short loc_21660 ;~ 0FBC:34AF
cs=0xfbc;eip=0x0034b1; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 33669 mov     al, [bp+var_3A4] ;~ 0FBC:34B1
cs=0xfbc;eip=0x0034b5; 	T(CBW);	// 33670 cbw ;~ 0FBC:34B5
cs=0xfbc;eip=0x0034b6; 	T(MOV(bx, ax));	// 33671 mov     bx, ax ;~ 0FBC:34B6
cs=0xfbc;eip=0x0034b8; 	T(SHL(bx, 1));	// 33672 shl     bx, 1 ;~ 0FBC:34B8
cs=0xfbc;eip=0x0034ba; 	T(MOV(ax, *(dw*)((((db*)trackpos2)+2)+bx)));	// 33673 mov     ax, (trackpos2+2)[bx] ;~ 0FBC:34BA
cs=0xfbc;eip=0x0034be; 	R(JMP(loc_2166d));	// 33674 jmp     short loc_2166D ;~ 0FBC:34BE
loc_21660:
	// 6684 
cs=0xfbc;eip=0x0034c0; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 33678 mov     al, [bp+var_3A4] ;~ 0FBC:34C0
cs=0xfbc;eip=0x0034c4; 	T(CBW);	// 33679 cbw ;~ 0FBC:34C4
cs=0xfbc;eip=0x0034c5; 	T(MOV(bx, ax));	// 33680 mov     bx, ax ;~ 0FBC:34C5
cs=0xfbc;eip=0x0034c7; 	T(SHL(bx, 1));	// 33681 shl     bx, 1 ;~ 0FBC:34C7
cs=0xfbc;eip=0x0034c9; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 33682 mov     ax, trackcenterpos2[bx] ;~ 0FBC:34C9
loc_2166d:
	// 6685 
cs=0xfbc;eip=0x0034cd; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_ada))));	// 33685 add     ax, [bp+var_ADA] ;~ 0FBC:34CD
cs=0xfbc;eip=0x0034d1; 	T(MOV(bx, di));	// 33686 mov     bx, di ;~ 0FBC:34D1
cs=0xfbc;eip=0x0034d3; 	T(MOV(cx, bx));	// 33687 mov     cx, bx ;~ 0FBC:34D3
cs=0xfbc;eip=0x0034d5; 	T(SHL(bx, 1));	// 33688 shl     bx, 1 ;~ 0FBC:34D5
cs=0xfbc;eip=0x0034d7; 	T(ADD(bx, cx));	// 33689 add     bx, cx ;~ 0FBC:34D7
cs=0xfbc;eip=0x0034d9; 	T(SHL(bx, 1));	// 33690 shl     bx, 1 ;~ 0FBC:34D9
cs=0xfbc;eip=0x0034db; 	T(ADD(bx, trackdata9));	// 33691 add     bx, trackdata9 ;~ 0FBC:34DB
cs=0xfbc;eip=0x0034df; 	T(MOV(es, word_449de));	// 33692 mov     es, word_449DE ;~ 0FBC:34DF
cs=0xfbc;eip=0x0034e3; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 33693 mov     es:[bx], ax ;~ 0FBC:34E3
cs=0xfbc;eip=0x0034e6; 	T(INC(di));	// 33694 inc     di ;~ 0FBC:34E6
loc_21687:
	// 6686 
cs=0xfbc;eip=0x0034e7; 	T(INC(si));	// 33697 inc     si ;~ 0FBC:34E7
loc_21688:
	// 6687 
cs=0xfbc;eip=0x0034e8; 	T(MOV(al, byte_4616e));	// 33700 mov     al, byte_4616E ;~ 0FBC:34E8
cs=0xfbc;eip=0x0034eb; 	T(CBW);	// 33701 cbw ;~ 0FBC:34EB
cs=0xfbc;eip=0x0034ec; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_af0))), ax));	// 33702 mov     word ptr [bp+var_AF0], ax ;~ 0FBC:34EC
cs=0xfbc;eip=0x0034f0; 	T(CMP(ax, si));	// 33703 cmp     ax, si ;~ 0FBC:34F0
cs=0xfbc;eip=0x0034f2; 	R(JG(loc_21697));	// 33704 jg      short loc_21697 ;~ 0FBC:34F2
cs=0xfbc;eip=0x0034f4; 	R(JMP(loc_2176e));	// 33705 jmp     loc_2176E ;~ 0FBC:34F4
loc_21697:
	// 6688 
cs=0xfbc;eip=0x0034f7; 	T(MOV(ax, track_pieces_counter));	// 33709 mov     ax, track_pieces_counter ;~ 0FBC:34F7
cs=0xfbc;eip=0x0034fa; 	T(IMUL1_2(si));	// 33710 imul    si ;~ 0FBC:34FA
cs=0xfbc;eip=0x0034fc; 	T(CWD);	// 33711 cwd ;~ 0FBC:34FC
cs=0xfbc;eip=0x0034fd; 	T(MOV(cx, *(dw*)((dw*)(raddr(ss,bp+var_af0)))));	// 33712 mov     cx, word ptr [bp+var_AF0] ;~ 0FBC:34FD
cs=0xfbc;eip=0x003501; 	T(IDIV2(cx));	// 33713 idiv    cx ;~ 0FBC:3501
cs=0xfbc;eip=0x003503; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 33714 mov     [bp+var_A], ax ;~ 0FBC:3503
cs=0xfbc;eip=0x003506; 	T(MOV(bx, ax));	// 33715 mov     bx, ax ;~ 0FBC:3506
cs=0xfbc;eip=0x003508; 	T(ADD(bx, *(dw*)(((db*)&td21_col_from_path))));	// 33716 add     bx, word ptr td21_col_from_path ;~ 0FBC:3508
cs=0xfbc;eip=0x00350c; 	T(MOV(es, *(dw*)(((db*)&td21_col_from_path)+2)));	// 33717 mov     es, word ptr td21_col_from_path+2 ;~ 0FBC:350C
cs=0xfbc;eip=0x003510; 	T(MOV(al, *(raddr(es,bx))));	// 33718 mov     al, es:[bx] ;~ 0FBC:3510
cs=0xfbc;eip=0x003513; 	X(MOV(*(raddr(ss,bp+var_3a4)), al));	// 33719 mov     [bp+var_3A4], al ;~ 0FBC:3513
cs=0xfbc;eip=0x003517; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 33720 mov     bx, [bp+var_A] ;~ 0FBC:3517
cs=0xfbc;eip=0x00351a; 	T(ADD(bx, *(dw*)(((db*)&td22_row_from_path))));	// 33721 add     bx, word ptr td22_row_from_path ;~ 0FBC:351A
cs=0xfbc;eip=0x00351e; 	T(MOV(es, *(dw*)(((db*)&td22_row_from_path)+2)));	// 33722 mov     es, word ptr td22_row_from_path+2 ;~ 0FBC:351E
cs=0xfbc;eip=0x003522; 	T(MOV(al, *(raddr(es,bx))));	// 33723 mov     al, es:[bx] ;~ 0FBC:3522
cs=0xfbc;eip=0x003525; 	X(MOV(*(raddr(ss,bp+var_73a)), al));	// 33724 mov     [bp+var_73A], al ;~ 0FBC:3525
cs=0xfbc;eip=0x003529; 	T(CBW);	// 33725 cbw ;~ 0FBC:3529
cs=0xfbc;eip=0x00352a; 	T(MOV(bx, ax));	// 33726 mov     bx, ax ;~ 0FBC:352A
cs=0xfbc;eip=0x00352c; 	T(SHL(bx, 1));	// 33727 shl     bx, 1 ;~ 0FBC:352C
cs=0xfbc;eip=0x00352e; 	T(MOV(ax, *(dw*)(((db*)terrainrows)+bx)));	// 33728 mov     ax, terrainrows[bx] ;~ 0FBC:352E
cs=0xfbc;eip=0x003532; 	T(MOV(cx, ax));	// 33729 mov     cx, ax ;~ 0FBC:3532
cs=0xfbc;eip=0x003534; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 33730 mov     al, [bp+var_3A4] ;~ 0FBC:3534
cs=0xfbc;eip=0x003538; 	T(CBW);	// 33731 cbw ;~ 0FBC:3538
cs=0xfbc;eip=0x003539; 	T(ADD(cx, ax));	// 33732 add     cx, ax ;~ 0FBC:3539
cs=0xfbc;eip=0x00353b; 	T(ADD(cx, bp));	// 33733 add     cx, bp ;~ 0FBC:353B
cs=0xfbc;eip=0x00353d; 	T(SUB(cx, 0x0AD4));	// 33734 sub     cx, 0AD4h ;~ 0FBC:353D
cs=0xfbc;eip=0x003541; 	X(MOV(*(dw*)(raddr(ss,bp+var_aec)), cx));	// 33735 mov     [bp+var_AEC], cx ;~ 0FBC:3541
cs=0xfbc;eip=0x003545; 	T(MOV(bx, cx));	// 33736 mov     bx, cx ;~ 0FBC:3545
cs=0xfbc;eip=0x003547; 	T(CMP(*(raddr(ds,bx)), 0));	// 33737 cmp     byte ptr [bx], 0 ;~ 0FBC:3547
cs=0xfbc;eip=0x00354a; 	R(JNZ(loc_21687));	// 33738 jnz     short loc_21687 ;~ 0FBC:354A
cs=0xfbc;eip=0x00354c; 	X(MOV(*(raddr(ds,bx)), 1));	// 33739 mov     byte ptr [bx], 1 ;~ 0FBC:354C
cs=0xfbc;eip=0x00354f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 33740 mov     bx, [bp+var_A] ;~ 0FBC:354F
cs=0xfbc;eip=0x003552; 	T(ADD(bx, *(dw*)(((db*)&td17_trk_elem_ordered))));	// 33741 add     bx, word ptr td17_trk_elem_ordered ;~ 0FBC:3552
cs=0xfbc;eip=0x003556; 	T(MOV(es, *(dw*)(((db*)&td17_trk_elem_ordered)+2)));	// 33742 mov     es, word ptr td17_trk_elem_ordered+2 ;~ 0FBC:3556
cs=0xfbc;eip=0x00355a; 	T(MOV(al, *(raddr(es,bx))));	// 33743 mov     al, es:[bx] ;~ 0FBC:355A
cs=0xfbc;eip=0x00355d; 	T(SUB(ah, ah));	// 33744 sub     ah, ah ;~ 0FBC:355D
cs=0xfbc;eip=0x00355f; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 33745 mov     [bp+var_C], ax ;~ 0FBC:355F
cs=0xfbc;eip=0x003562; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 33746 mov     bx, [bp+var_A] ;~ 0FBC:3562
cs=0xfbc;eip=0x003565; 	T(ADD(bx, *(dw*)(((db*)&trackdata18))));	// 33747 add     bx, word ptr trackdata18 ;~ 0FBC:3565
cs=0xfbc;eip=0x003569; 	T(MOV(es, *(dw*)(((db*)&trackdata18)+2)));	// 33748 mov     es, word ptr trackdata18+2 ;~ 0FBC:3569
cs=0xfbc;eip=0x00356d; 	T(MOV(al, *(raddr(es,bx))));	// 33749 mov     al, es:[bx] ;~ 0FBC:356D
cs=0xfbc;eip=0x003570; 	T(AND(al, 0x0F));	// 33750 and     al, 0Fh         ; mask out the high nibble ;~ 0FBC:3570
cs=0xfbc;eip=0x003572; 	X(MOV(*(raddr(ss,bp+var_742)), al));	// 33751 mov     [bp+var_742], al ;~ 0FBC:3572
cs=0xfbc;eip=0x003576; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 33752 mov     bx, [bp+var_A] ;~ 0FBC:3576
cs=0xfbc;eip=0x003579; 	T(ADD(bx, *(dw*)(((db*)&trackdata18))));	// 33753 add     bx, word ptr trackdata18 ;~ 0FBC:3579
cs=0xfbc;eip=0x00357d; 	T(MOV(al, *(raddr(es,bx))));	// 33754 mov     al, es:[bx] ;~ 0FBC:357D
cs=0xfbc;eip=0x003580; 	T(AND(al, 0x10));	// 33755 and     al, 10h         ; 5th bit (low to high) ;~ 0FBC:3580
cs=0xfbc;eip=0x003582; 	X(MOV(*(raddr(ss,bp+var_ae4)), al));	// 33756 mov     [bp+var_AE4], al ;~ 0FBC:3582
cs=0xfbc;eip=0x003586; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 33757 mov     bx, [bp+var_C] ;~ 0FBC:3586
cs=0xfbc;eip=0x003589; 	T(MOV(ax, bx));	// 33758 mov     ax, bx ;~ 0FBC:3589
cs=0xfbc;eip=0x00358b; 	T(SHL(bx, 1));	// 33759 shl     bx, 1 ;~ 0FBC:358B
cs=0xfbc;eip=0x00358d; 	T(ADD(bx, ax));	// 33760 add     bx, ax ;~ 0FBC:358D
cs=0xfbc;eip=0x00358f; 	T(SHL(bx, 1));	// 33761 shl     bx, 1 ;~ 0FBC:358F
cs=0xfbc;eip=0x003591; 	T(ADD(bx, ax));	// 33762 add     bx, ax ;~ 0FBC:3591
cs=0xfbc;eip=0x003593; 	T(SHL(bx, 1));	// 33763 shl     bx, 1 ;~ 0FBC:3593
cs=0xfbc;eip=0x003595; 	T(MOV(ax, *(dw*)(((db*)&trkobjectlist)+bx)));	// 33764 mov     ax, trkObjectList[bx] ;~ 0FBC:3595
cs=0xfbc;eip=0x003599; 	X(MOV(*(dw*)(raddr(ss,bp+var_3ae)), ax));	// 33765 mov     [bp+var_3AE], ax ;~ 0FBC:3599
cs=0xfbc;eip=0x00359d; 	T(CMP(*(raddr(ss,bp+var_ae4)), 0));	// 33766 cmp     [bp+var_AE4], 0 ;~ 0FBC:359D
cs=0xfbc;eip=0x0035a2; 	R(JNZ(loc_21747));	// 33767 jnz     short loc_21747 ;~ 0FBC:35A2
cs=0xfbc;eip=0x0035a4; 	R(JMP(loc_21498));	// 33768 jmp     loc_21498 ;~ 0FBC:35A4
loc_21747:
	// 6689 
cs=0xfbc;eip=0x0035a7; 	T(MOV(al, *(raddr(ss,bp+var_742))));	// 33772 mov     al, [bp+var_742] ;~ 0FBC:35A7
cs=0xfbc;eip=0x0035ab; 	T(SUB(ah, ah));	// 33773 sub     ah, ah ;~ 0FBC:35AB
cs=0xfbc;eip=0x0035ad; 	T(MOV(bx, ax));	// 33774 mov     bx, ax ;~ 0FBC:35AD
cs=0xfbc;eip=0x0035af; 	T(SHL(bx, 1));	// 33775 shl     bx, 1 ;~ 0FBC:35AF
cs=0xfbc;eip=0x0035b1; 	T(ADD(bx, ax));	// 33776 add     bx, ax ;~ 0FBC:35B1
cs=0xfbc;eip=0x0035b3; 	T(SHL(bx, 1));	// 33777 shl     bx, 1 ;~ 0FBC:35B3
cs=0xfbc;eip=0x0035b5; 	T(ADD(bx, ax));	// 33778 add     bx, ax ;~ 0FBC:35B5
cs=0xfbc;eip=0x0035b7; 	T(SHL(bx, 1));	// 33779 shl     bx, 1 ;~ 0FBC:35B7
cs=0xfbc;eip=0x0035b9; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_3ae))));	// 33780 add     bx, [bp+var_3AE] ;~ 0FBC:35B9
cs=0xfbc;eip=0x0035bd; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 33781 mov     ax, [bx+0Ah] ;~ 0FBC:35BD
cs=0xfbc;eip=0x0035c0; 	X(MOV(*(dw*)(raddr(ss,bp+var_aea)), ax));	// 33782 mov     [bp+var_AEA], ax ;~ 0FBC:35C0
cs=0xfbc;eip=0x0035c4; 	T(OR(ax, ax));	// 33783 or      ax, ax ;~ 0FBC:35C4
cs=0xfbc;eip=0x0035c6; 	R(JNZ(loc_2176b));	// 33784 jnz     short loc_2176B ;~ 0FBC:35C6
cs=0xfbc;eip=0x0035c8; 	R(JMP(loc_21498));	// 33785 jmp     loc_21498 ;~ 0FBC:35C8
loc_2176b:
	// 6690 
cs=0xfbc;eip=0x0035cb; 	R(JMP(loc_214b1));	// 33789 jmp     loc_214B1 ;~ 0FBC:35CB
loc_2176e:
	// 6691 
cs=0xfbc;eip=0x0035ce; 	T(MOV(ax, di));	// 33793 mov     ax, di ;~ 0FBC:35CE
cs=0xfbc;eip=0x0035d0; 	X(MOV(byte_4616e, al));	// 33794 mov     byte_4616E, al ;~ 0FBC:35D0
cs=0xfbc;eip=0x0035d3; 	X(MOV(*(raddr(ss,bp+var_3b0)), 0));	// 33795 mov     [bp+var_3B0], 0 ;~ 0FBC:35D3
cs=0xfbc;eip=0x0035d8; 	R(JMP(loc_217ae));	// 33796 jmp     short loc_217AE ;~ 0FBC:35D8
loc_2177a:
	// 6692 
cs=0xfbc;eip=0x0035da; 	T(CMP(*(raddr(ss,bp+var_3a4)), 0x1E));	// 33800 cmp     [bp+var_3A4], 1Eh ;~ 0FBC:35DA
cs=0xfbc;eip=0x0035df; 	R(JNZ(loc_21786));	// 33801 jnz     short loc_21786 ;~ 0FBC:35DF
cs=0xfbc;eip=0x0035e1; 	X(MOV(*(raddr(ss,bp+var_3a4)), 0x1D));	// 33802 mov     [bp+var_3A4], 1Dh ;~ 0FBC:35E1
loc_21786:
	// 6693 
cs=0xfbc;eip=0x0035e6; 	T(CMP(*(raddr(ss,bp+var_73a)), 0x0FF));	// 33806 cmp     [bp+var_73A], 0FFh ;~ 0FBC:35E6
cs=0xfbc;eip=0x0035eb; 	R(JNZ(loc_21794));	// 33807 jnz     short loc_21794 ;~ 0FBC:35EB
cs=0xfbc;eip=0x0035ed; 	X(MOV(*(raddr(ss,bp+var_73a)), 0));	// 33808 mov     [bp+var_73A], 0 ;~ 0FBC:35ED
cs=0xfbc;eip=0x0035f2; 	R(JMP(loc_217a0));	// 33809 jmp     short loc_217A0 ;~ 0FBC:35F2
loc_21794:
	// 6694 
cs=0xfbc;eip=0x0035f4; 	T(CMP(*(raddr(ss,bp+var_73a)), 0x1E));	// 33813 cmp     [bp+var_73A], 1Eh ;~ 0FBC:35F4
cs=0xfbc;eip=0x0035f9; 	R(JNZ(loc_217a0));	// 33814 jnz     short loc_217A0 ;~ 0FBC:35F9
cs=0xfbc;eip=0x0035fb; 	X(MOV(*(raddr(ss,bp+var_73a)), 0x1D));	// 33815 mov     [bp+var_73A], 1Dh ;~ 0FBC:35FB
loc_217a0:
	// 6695 
cs=0xfbc;eip=0x003600; 	T(MOV(al, *(raddr(ss,bp+var_3a4))));	// 33819 mov     al, [bp+var_3A4] ;~ 0FBC:3600
cs=0xfbc;eip=0x003604; 	X(MOV(byte_45d90, al));	// 33820 mov     byte_45D90, al ;~ 0FBC:3604
cs=0xfbc;eip=0x003607; 	T(MOV(al, *(raddr(ss,bp+var_73a))));	// 33821 mov     al, [bp+var_73A] ;~ 0FBC:3607
cs=0xfbc;eip=0x00360b; 	X(MOV(byte_45e16, al));	// 33822 mov     byte_45E16, al ;~ 0FBC:360B
loc_217ae:
	// 6696 
cs=0xfbc;eip=0x00360e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_ae0))));	// 33825 push    [bp+var_AE0] ;~ 0FBC:360E
cs=0xfbc;eip=0x003612; 	X(PUSH(*(dw*)(raddr(ss,bp+var_ae2))));	// 33826 push    [bp+var_AE2] ;~ 0FBC:3612
cs=0xfbc;eip=0x003616; 	R(CALLF(mmgr_release,0));	// 33827 call    mmgr_release ;~ 0FBC:3616
cs=0xfbc;eip=0x00361b; 	T(ADD(sp, 4));	// 33828 add     sp, 4 ;~ 0FBC:361B
cs=0xfbc;eip=0x00361e; 	T(MOV(al, *(raddr(ss,bp+var_3b0))));	// 33829 mov     al, [bp+var_3B0] ;~ 0FBC:361E
cs=0xfbc;eip=0x003622; 	T(CBW);	// 33830 cbw ;~ 0FBC:3622
cs=0xfbc;eip=0x003623; 	X(POP(si));	// 33831 pop     si ;~ 0FBC:3623
cs=0xfbc;eip=0x003624; 	X(POP(di));	// 33832 pop     di ;~ 0FBC:3624
cs=0xfbc;eip=0x003625; 	T(MOV(sp, bp));	// 33833 mov     sp, bp ;~ 0FBC:3625
cs=0xfbc;eip=0x003627; 	X(POP(bp));	// 33834 pop     bp ;~ 0FBC:3627
cs=0xfbc;eip=0x003628; 	R(RETF(0));	// 33835 retf ;~ 0FBC:3628
load_opponent_data:
	// 33845 
#undef var_f30
#define var_f30 -0x0F30
	// 33848 var_F30         = word ptr -0F30h ;~ 0FBC:362A
#undef var_b2e
#define var_b2e -0x0B2E
	// 33849 var_B2E         = word ptr -0B2Eh ;~ 0FBC:362A
#undef var_b2c
#define var_b2c -0x0B2C
	// 33850 var_B2C         = word ptr -0B2Ch ;~ 0FBC:362A
#undef var_b2a
#define var_b2a -0x0B2A
	// 33851 var_B2A         = word ptr -0B2Ah ;~ 0FBC:362A
#undef var_b28
#define var_b28 -0x0B28
	// 33852 var_B28         = word ptr -0B28h ;~ 0FBC:362A
#undef var_b26
#define var_b26 -0x0B26
	// 33853 var_B26         = word ptr -0B26h ;~ 0FBC:362A
#undef var_b24
#define var_b24 -0x0B24
	// 33854 var_B24         = word ptr -0B24h ;~ 0FBC:362A
#undef var_414
#define var_414 -0x414
	// 33855 var_414         = word ptr -414h ;~ 0FBC:362A
#undef var_412
#define var_412 -0x412
	// 33856 var_412         = word ptr -412h ;~ 0FBC:362A
#undef var_410
#define var_410 -0x410
	// 33857 var_410         = word ptr -410h ;~ 0FBC:362A
#undef var_20e
#define var_20e -0x20E
	// 33858 var_20E         = word ptr -20Eh ;~ 0FBC:362A
#undef var_20c
#define var_20c -0x20C
	// 33859 var_20C         = word ptr -20Ch ;~ 0FBC:362A
#undef var_a
#define var_a -0x0A
	// 33860 var_A           = dword ptr -0Ah ;~ 0FBC:362A
#undef var_6
#define var_6 -6
	// 33861 var_6           = word ptr -6 ;~ 0FBC:362A
#undef var_4
#define var_4 -4
	// 33862 var_4           = word ptr -4 ;~ 0FBC:362A
#undef var_2
#define var_2 -2
	// 33863 var_2           = word ptr -2 ;~ 0FBC:362A
ret_fbc_362a:
	// 6697 
cs=0xfbc;eip=0x00362a; 	X(PUSH(bp));	// 33865 push    bp ;~ 0FBC:362A
cs=0xfbc;eip=0x00362b; 	T(MOV(bp, sp));	// 33866 mov     bp, sp ;~ 0FBC:362B
cs=0xfbc;eip=0x00362d; 	T(SUB(sp, 0x0F30));	// 33867 sub     sp, 0F30h ;~ 0FBC:362D
cs=0xfbc;eip=0x003631; 	X(PUSH(di));	// 33868 push    di ;~ 0FBC:3631
cs=0xfbc;eip=0x003632; 	X(PUSH(si));	// 33869 push    si ;~ 0FBC:3632
cs=0xfbc;eip=0x003633; 	T(MOV(al, byte_449aa));	// 33870 mov     al, byte_449AA ;~ 0FBC:3633
cs=0xfbc;eip=0x003636; 	T(ADD(al, 0x30));	// 33871 add     al, 30h ; '0' ;~ 0FBC:3636
cs=0xfbc;eip=0x003638; 	X(MOV(byte_3b907, al));	// 33872 mov     byte_3B907, al ;~ 0FBC:3638
cs=0xfbc;eip=0x00363b; 	T(MOV(ax, offset(dseg,unk_3b904)));	// 33873 mov     ax, offset unk_3B904 ;~ 0FBC:363B
cs=0xfbc;eip=0x00363e; 	X(PUSH(ax));	// 33874 push    ax ;~ 0FBC:363E
cs=0xfbc;eip=0x00363f; 	R(CALLF(file_load_resfile,0));	// 33875 call    file_load_resfile ;~ 0FBC:363F
cs=0xfbc;eip=0x003644; 	T(ADD(sp, 2));	// 33876 add     sp, 2 ;~ 0FBC:3644
cs=0xfbc;eip=0x003647; 	X(MOV(*(dw*)(raddr(ss,bp+var_b2e)), ax));	// 33877 mov     [bp+var_B2E], ax ;~ 0FBC:3647
cs=0xfbc;eip=0x00364b; 	X(MOV(*(dw*)(raddr(ss,bp+var_b2c)), dx));	// 33878 mov     [bp+var_B2C], dx ;~ 0FBC:364B
cs=0xfbc;eip=0x00364f; 	T(MOV(ax, offset(dseg,anam)));	// 33879 mov     ax, offset aNam ; "nam" ;~ 0FBC:364F
cs=0xfbc;eip=0x003652; 	X(PUSH(ax));	// 33880 push    ax ;~ 0FBC:3652
cs=0xfbc;eip=0x003653; 	X(PUSH(dx));	// 33881 push    dx ;~ 0FBC:3653
cs=0xfbc;eip=0x003654; 	X(PUSH(*(dw*)(raddr(ss,bp+var_b2e))));	// 33882 push    [bp+var_B2E] ;~ 0FBC:3654
cs=0xfbc;eip=0x003658; 	R(CALLF(locate_text_res,0));	// 33883 call    locate_text_res ;~ 0FBC:3658
cs=0xfbc;eip=0x00365d; 	T(ADD(sp, 6));	// 33884 add     sp, 6 ;~ 0FBC:365D
cs=0xfbc;eip=0x003660; 	X(PUSH(dx));	// 33885 push    dx ;~ 0FBC:3660
cs=0xfbc;eip=0x003661; 	X(PUSH(ax));	// 33886 push    ax ;~ 0FBC:3661
cs=0xfbc;eip=0x003662; 	T(MOV(ax, offset(dseg,unk_46464)));	// 33887 mov     ax, offset unk_46464 ;~ 0FBC:3662
cs=0xfbc;eip=0x003665; 	X(PUSH(ax));	// 33888 push    ax ;~ 0FBC:3665
cs=0xfbc;eip=0x003666; 	R(CALLF(copy_string,0));	// 33889 call    copy_string ;~ 0FBC:3666
cs=0xfbc;eip=0x00366b; 	T(ADD(sp, 6));	// 33890 add     sp, 6 ;~ 0FBC:366B
cs=0xfbc;eip=0x00366e; 	T(MOV(ax, offset(dseg,apath)));	// 33891 mov     ax, offset aPath ; "path" ;~ 0FBC:366E
cs=0xfbc;eip=0x003671; 	X(PUSH(ax));	// 33892 push    ax ;~ 0FBC:3671
cs=0xfbc;eip=0x003672; 	X(PUSH(*(dw*)(raddr(ss,bp+var_b2c))));	// 33893 push    [bp+var_B2C] ;~ 0FBC:3672
cs=0xfbc;eip=0x003676; 	X(PUSH(*(dw*)(raddr(ss,bp+var_b2e))));	// 33894 push    [bp+var_B2E] ;~ 0FBC:3676
cs=0xfbc;eip=0x00367a; 	R(CALLF(locate_shape_alt,0));	// 33895 call    locate_shape_alt ;~ 0FBC:367A
cs=0xfbc;eip=0x00367f; 	T(ADD(sp, 6));	// 33896 add     sp, 6 ;~ 0FBC:367F
cs=0xfbc;eip=0x003682; 	X(MOV(*(dw*)(raddr(ss,bp+var_414)), ax));	// 33897 mov     [bp+var_414], ax ;~ 0FBC:3682
cs=0xfbc;eip=0x003686; 	X(MOV(*(dw*)(raddr(ss,bp+var_412)), dx));	// 33898 mov     [bp+var_412], dx ;~ 0FBC:3686
cs=0xfbc;eip=0x00368a; 	T(MOV(ax, offset(dseg,asped)));	// 33899 mov     ax, offset aSped ; "sped" ;~ 0FBC:368A
cs=0xfbc;eip=0x00368d; 	X(PUSH(ax));	// 33900 push    ax ;~ 0FBC:368D
cs=0xfbc;eip=0x00368e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_b2c))));	// 33901 push    [bp+var_B2C] ;~ 0FBC:368E
cs=0xfbc;eip=0x003692; 	X(PUSH(*(dw*)(raddr(ss,bp+var_b2e))));	// 33902 push    [bp+var_B2E] ;~ 0FBC:3692
cs=0xfbc;eip=0x003696; 	R(CALLF(locate_shape_alt,0));	// 33903 call    locate_shape_alt ;~ 0FBC:3696
cs=0xfbc;eip=0x00369b; 	T(ADD(sp, 6));	// 33904 add     sp, 6 ;~ 0FBC:369B
cs=0xfbc;eip=0x00369e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 33905 mov     word ptr [bp+var_A], ax ;~ 0FBC:369E
cs=0xfbc;eip=0x0036a1; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 33906 mov     word ptr [bp+var_A+2], dx ;~ 0FBC:36A1
cs=0xfbc;eip=0x0036a4; 	T(SUB(si, si));	// 33907 sub     si, si ;~ 0FBC:36A4
loc_21846:
	// 6698 
cs=0xfbc;eip=0x0036a6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 33910 les     bx, [bp+var_A] ;~ 0FBC:36A6
cs=0xfbc;eip=0x0036a9; 	T(MOV(al, *(raddr(es,bx+si))));	// 33911 mov     al, es:[bx+si] ;~ 0FBC:36A9
cs=0xfbc;eip=0x0036ac; 	X(MOV(*((&oppnentsped)+si), al));	// 33912 mov     oppnentSped[si], al ;~ 0FBC:36AC
cs=0xfbc;eip=0x0036b0; 	T(INC(si));	// 33913 inc     si ;~ 0FBC:36B0
cs=0xfbc;eip=0x0036b1; 	T(CMP(si, 0x10));	// 33914 cmp     si, 10h ;~ 0FBC:36B1
cs=0xfbc;eip=0x0036b4; 	R(JL(loc_21846));	// 33915 jl      short loc_21846 ;~ 0FBC:36B4
cs=0xfbc;eip=0x0036b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_b26)), 0x423F));	// 33916 mov     [bp+var_B26], 423Fh ;~ 0FBC:36B6
cs=0xfbc;eip=0x0036bc; 	X(MOV(*(dw*)(raddr(ss,bp+var_b24)), 0x0F));	// 33917 mov     [bp+var_B24], 0Fh ;~ 0FBC:36BC
cs=0xfbc;eip=0x0036c2; 	X(MOV(*(dw*)(raddr(ss,bp+var_b28)), 0));	// 33918 mov     [bp+var_B28], 0 ;~ 0FBC:36C2
cs=0xfbc;eip=0x0036c8; 	T(SUB(ax, ax));	// 33919 sub     ax, ax ;~ 0FBC:36C8
cs=0xfbc;eip=0x0036ca; 	X(MOV(*(dw*)(raddr(ss,bp+var_20c)), ax));	// 33920 mov     [bp+var_20C], ax ;~ 0FBC:36CA
cs=0xfbc;eip=0x0036ce; 	X(MOV(*(dw*)(raddr(ss,bp+var_20e)), ax));	// 33921 mov     [bp+var_20E], ax ;~ 0FBC:36CE
cs=0xfbc;eip=0x0036d2; 	X(MOV(*(dw*)(raddr(ss,bp+var_b2a)), ax));	// 33922 mov     [bp+var_B2A], ax ;~ 0FBC:36D2
cs=0xfbc;eip=0x0036d6; 	T(SUB(si, si));	// 33923 sub     si, si ;~ 0FBC:36D6
loc_21878:
	// 6699 
cs=0xfbc;eip=0x0036d8; 	X(MOV(*(dw*)(raddr(ss,bp+var_410)), 0));	// 33927 mov     [bp+var_410], 0 ;~ 0FBC:36D8
cs=0xfbc;eip=0x0036de; 	T(MOV(bx, si));	// 33928 mov     bx, si ;~ 0FBC:36DE
cs=0xfbc;eip=0x0036e0; 	T(SHL(bx, 1));	// 33929 shl     bx, 1 ;~ 0FBC:36E0
cs=0xfbc;eip=0x0036e2; 	T(ADD(bx, *(dw*)(((db*)&td01_track_file_cpy))));	// 33930 add     bx, word ptr td01_track_file_cpy ;~ 0FBC:36E2
cs=0xfbc;eip=0x0036e6; 	T(MOV(es, *(dw*)(((db*)&td01_track_file_cpy)+2)));	// 33931 mov     es, word ptr td01_track_file_cpy+2 ;~ 0FBC:36E6
cs=0xfbc;eip=0x0036ea; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 33932 mov     ax, es:[bx] ;~ 0FBC:36EA
cs=0xfbc;eip=0x0036ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 33933 mov     [bp+var_4], ax ;~ 0FBC:36ED
cs=0xfbc;eip=0x0036f0; 	T(OR(ax, ax));	// 33934 or      ax, ax ;~ 0FBC:36F0
cs=0xfbc;eip=0x0036f2; 	R(JNZ(loc_218a2));	// 33935 jnz     short loc_218A2 ;~ 0FBC:36F2
cs=0xfbc;eip=0x0036f4; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 1));	// 33936 mov     [bp+var_2], 1 ;~ 0FBC:36F4
loc_21899:
	// 6700 
cs=0xfbc;eip=0x0036f9; 	X(MOV(*(dw*)(raddr(ss,bp+var_410)), 1));	// 33939 mov     [bp+var_410], 1 ;~ 0FBC:36F9
cs=0xfbc;eip=0x0036ff; 	R(JMP(loc_218da));	// 33940 jmp     short loc_218DA ;~ 0FBC:36FF
loc_218a2:
	// 6701 
cs=0xfbc;eip=0x003702; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x0FFFF));	// 33945 cmp     [bp+var_4], 0FFFFh ;~ 0FBC:3702
cs=0xfbc;eip=0x003706; 	R(JNZ(loc_218b0));	// 33946 jnz     short loc_218B0 ;~ 0FBC:3706
cs=0xfbc;eip=0x003708; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 33947 mov     [bp+var_2], 0 ;~ 0FBC:3708
cs=0xfbc;eip=0x00370d; 	R(JMP(loc_21899));	// 33948 jmp     short loc_21899 ;~ 0FBC:370D
loc_218b0:
	// 6702 
cs=0xfbc;eip=0x003710; 	T(CMP(*(dw*)(raddr(ss,bp+var_b28)), 0));	// 33953 cmp     [bp+var_B28], 0 ;~ 0FBC:3710
cs=0xfbc;eip=0x003715; 	R(JZ(loc_218da));	// 33954 jz      short loc_218DA ;~ 0FBC:3715
cs=0xfbc;eip=0x003717; 	T(SUB(di, di));	// 33955 sub     di, di ;~ 0FBC:3717
cs=0xfbc;eip=0x003719; 	R(JMP(loc_218d4));	// 33956 jmp     short loc_218D4 ;~ 0FBC:3719
loc_218bc:
	// 6703 
cs=0xfbc;eip=0x00371c; 	T(MOV(bx, di));	// 33961 mov     bx, di ;~ 0FBC:371C
cs=0xfbc;eip=0x00371e; 	T(SHL(bx, 1));	// 33962 shl     bx, 1 ;~ 0FBC:371E
cs=0xfbc;eip=0x003720; 	T(ADD(bx, bp));	// 33963 add     bx, bp ;~ 0FBC:3720
cs=0xfbc;eip=0x003722; 	T(CMP(*(dw*)(raddr(ds,bx-0x0B20)), si));	// 33964 cmp     [bx-0B20h], si ;~ 0FBC:3722
cs=0xfbc;eip=0x003726; 	R(JNZ(loc_218d3));	// 33965 jnz     short loc_218D3 ;~ 0FBC:3726
cs=0xfbc;eip=0x003728; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 33966 mov     [bp+var_2], 0 ;~ 0FBC:3728
cs=0xfbc;eip=0x00372d; 	X(MOV(*(dw*)(raddr(ss,bp+var_410)), 1));	// 33967 mov     [bp+var_410], 1 ;~ 0FBC:372D
loc_218d3:
	// 6704 
cs=0xfbc;eip=0x003733; 	T(INC(di));	// 33970 inc     di ;~ 0FBC:3733
loc_218d4:
	// 6705 
cs=0xfbc;eip=0x003734; 	T(CMP(*(dw*)(raddr(ss,bp+var_b28)), di));	// 33973 cmp     [bp+var_B28], di ;~ 0FBC:3734
cs=0xfbc;eip=0x003738; 	R(JG(loc_218bc));	// 33974 jg      short loc_218BC ;~ 0FBC:3738
loc_218da:
	// 6706 
cs=0xfbc;eip=0x00373a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b28))));	// 33978 mov     bx, [bp+var_B28] ;~ 0FBC:373A
cs=0xfbc;eip=0x00373e; 	X(INC(*(dw*)(raddr(ss,bp+var_b28))));	// 33979 inc     [bp+var_B28] ;~ 0FBC:373E
cs=0xfbc;eip=0x003742; 	T(SHL(bx, 1));	// 33980 shl     bx, 1 ;~ 0FBC:3742
cs=0xfbc;eip=0x003744; 	T(ADD(bx, bp));	// 33981 add     bx, bp ;~ 0FBC:3744
cs=0xfbc;eip=0x003746; 	X(MOV(*(dw*)(raddr(ds,bx-0x0B20)), si));	// 33982 mov     [bx-0B20h], si ;~ 0FBC:3746
cs=0xfbc;eip=0x00374a; 	T(LES(bx, td17_trk_elem_ordered));	// 33983 les     bx, td17_trk_elem_ordered ;~ 0FBC:374A
cs=0xfbc;eip=0x00374e; 	T(MOV(bl, *(raddr(es,bx+si))));	// 33984 mov     bl, es:[bx+si] ;~ 0FBC:374E
cs=0xfbc;eip=0x003751; 	T(SUB(bh, bh));	// 33985 sub     bh, bh ;~ 0FBC:3751
cs=0xfbc;eip=0x003753; 	T(ADD(bx, *(dw*)((dw*)(raddr(ss,bp+var_a)))));	// 33986 add     bx, word ptr [bp+var_A] ;~ 0FBC:3753
cs=0xfbc;eip=0x003756; 	T(MOV(es, *(dw*)((dw*)(raddr(ss,bp+var_a+2)))));	// 33987 mov     es, word ptr [bp+var_A+2] ;~ 0FBC:3756
cs=0xfbc;eip=0x003759; 	T(MOV(al, *(raddr(es,bx))));	// 33988 mov     al, es:[bx] ;~ 0FBC:3759
cs=0xfbc;eip=0x00375c; 	T(SUB(ah, ah));	// 33989 sub     ah, ah ;~ 0FBC:375C
cs=0xfbc;eip=0x00375e; 	T(INC(ax));	// 33990 inc     ax ;~ 0FBC:375E
cs=0xfbc;eip=0x00375f; 	T(SUB(dx, dx));	// 33991 sub     dx, dx ;~ 0FBC:375F
cs=0xfbc;eip=0x003761; 	X(ADD(*(dw*)(raddr(ss,bp+var_20e)), ax));	// 33992 add     [bp+var_20E], ax ;~ 0FBC:3761
cs=0xfbc;eip=0x003765; 	X(ADC(*(dw*)(raddr(ss,bp+var_20c)), dx));	// 33993 adc     [bp+var_20C], dx ;~ 0FBC:3765
cs=0xfbc;eip=0x003769; 	T(CMP(*(dw*)(raddr(ss,bp+var_410)), dx));	// 33994 cmp     [bp+var_410], dx ;~ 0FBC:3769
cs=0xfbc;eip=0x00376d; 	R(JNZ(loc_21912));	// 33995 jnz     short loc_21912 ;~ 0FBC:376D
cs=0xfbc;eip=0x00376f; 	R(JMP(loc_219fe));	// 33996 jmp     loc_219FE ;~ 0FBC:376F
loc_21912:
	// 6707 
cs=0xfbc;eip=0x003772; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), dx));	// 34000 cmp     [bp+var_2], dx ;~ 0FBC:3772
cs=0xfbc;eip=0x003775; 	R(JNZ(loc_2191a));	// 34001 jnz     short loc_2191A ;~ 0FBC:3775
cs=0xfbc;eip=0x003777; 	R(JMP(loc_219a5));	// 34002 jmp     loc_219A5 ;~ 0FBC:3777
loc_2191a:
	// 6708 
cs=0xfbc;eip=0x00377a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_b26))));	// 34006 mov     ax, [bp+var_B26] ;~ 0FBC:377A
cs=0xfbc;eip=0x00377e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_b24))));	// 34007 mov     dx, [bp+var_B24] ;~ 0FBC:377E
cs=0xfbc;eip=0x003782; 	T(CMP(*(dw*)(raddr(ss,bp+var_20c)), dx));	// 34008 cmp     [bp+var_20C], dx ;~ 0FBC:3782
cs=0xfbc;eip=0x003786; 	R(JA(loc_219a5));	// 34009 ja      short loc_219A5 ;~ 0FBC:3786
cs=0xfbc;eip=0x003788; 	R(JC(loc_21930));	// 34010 jb      short loc_21930 ;~ 0FBC:3788
cs=0xfbc;eip=0x00378a; 	T(CMP(*(dw*)(raddr(ss,bp+var_20e)), ax));	// 34011 cmp     [bp+var_20E], ax ;~ 0FBC:378A
cs=0xfbc;eip=0x00378e; 	R(JNC(loc_219a5));	// 34012 jnb     short loc_219A5 ;~ 0FBC:378E
loc_21930:
	// 6709 
cs=0xfbc;eip=0x003790; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b28))));	// 34015 mov     bx, [bp+var_B28] ;~ 0FBC:3790
cs=0xfbc;eip=0x003794; 	X(INC(*(dw*)(raddr(ss,bp+var_b28))));	// 34016 inc     [bp+var_B28] ;~ 0FBC:3794
cs=0xfbc;eip=0x003798; 	T(SHL(bx, 1));	// 34017 shl     bx, 1 ;~ 0FBC:3798
cs=0xfbc;eip=0x00379a; 	T(ADD(bx, bp));	// 34018 add     bx, bp ;~ 0FBC:379A
cs=0xfbc;eip=0x00379c; 	X(MOV(*(dw*)(raddr(ds,bx-0x0B20)), 0));	// 34019 mov     word ptr [bx-0B20h], 0 ;~ 0FBC:379C
cs=0xfbc;eip=0x0037a2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_20e))));	// 34020 mov     ax, [bp+var_20E] ;~ 0FBC:37A2
cs=0xfbc;eip=0x0037a6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_20c))));	// 34021 mov     dx, [bp+var_20C] ;~ 0FBC:37A6
cs=0xfbc;eip=0x0037aa; 	X(MOV(*(dw*)(raddr(ss,bp+var_b26)), ax));	// 34022 mov     [bp+var_B26], ax ;~ 0FBC:37AA
cs=0xfbc;eip=0x0037ae; 	X(MOV(*(dw*)(raddr(ss,bp+var_b24)), dx));	// 34023 mov     [bp+var_B24], dx ;~ 0FBC:37AE
cs=0xfbc;eip=0x0037b2; 	T(SUB(di, di));	// 34024 sub     di, di ;~ 0FBC:37B2
cs=0xfbc;eip=0x0037b4; 	R(JMP(loc_21978));	// 34025 jmp     short loc_21978 ;~ 0FBC:37B4
loc_21958:
	// 6710 
cs=0xfbc;eip=0x0037b8; 	T(MOV(ax, di));	// 34031 mov     ax, di ;~ 0FBC:37B8
cs=0xfbc;eip=0x0037ba; 	T(SHL(ax, 1));	// 34032 shl     ax, 1 ;~ 0FBC:37BA
cs=0xfbc;eip=0x0037bc; 	X(MOV(*(dw*)(raddr(ss,bp+var_f30)), ax));	// 34033 mov     [bp+var_F30], ax ;~ 0FBC:37BC
cs=0xfbc;eip=0x0037c0; 	T(MOV(bx, ax));	// 34034 mov     bx, ax ;~ 0FBC:37C0
cs=0xfbc;eip=0x0037c2; 	T(ADD(bx, bp));	// 34035 add     bx, bp ;~ 0FBC:37C2
cs=0xfbc;eip=0x0037c4; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x0B20))));	// 34036 mov     ax, [bx-0B20h] ;~ 0FBC:37C4
cs=0xfbc;eip=0x0037c8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_f30))));	// 34037 mov     bx, [bp+var_F30] ;~ 0FBC:37C8
cs=0xfbc;eip=0x0037cc; 	T(ADD(bx, *(dw*)(((db*)&trackdata3))));	// 34038 add     bx, word ptr trackdata3 ;~ 0FBC:37CC
cs=0xfbc;eip=0x0037d0; 	T(MOV(es, *(dw*)(((db*)&trackdata3)+2)));	// 34039 mov     es, word ptr trackdata3+2 ;~ 0FBC:37D0
cs=0xfbc;eip=0x0037d4; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 34040 mov     es:[bx], ax ;~ 0FBC:37D4
cs=0xfbc;eip=0x0037d7; 	T(INC(di));	// 34041 inc     di ;~ 0FBC:37D7
loc_21978:
	// 6711 
cs=0xfbc;eip=0x0037d8; 	T(CMP(*(dw*)(raddr(ss,bp+var_b28)), di));	// 34044 cmp     [bp+var_B28], di ;~ 0FBC:37D8
cs=0xfbc;eip=0x0037dc; 	R(JG(loc_21958));	// 34045 jg      short loc_21958 ;~ 0FBC:37DC
cs=0xfbc;eip=0x0037de; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b28))));	// 34046 mov     bx, [bp+var_B28] ;~ 0FBC:37DE
cs=0xfbc;eip=0x0037e2; 	T(SHL(bx, 1));	// 34047 shl     bx, 1 ;~ 0FBC:37E2
cs=0xfbc;eip=0x0037e4; 	T(ADD(bx, *(dw*)(((db*)&trackdata3))));	// 34048 add     bx, word ptr trackdata3 ;~ 0FBC:37E4
cs=0xfbc;eip=0x0037e8; 	T(MOV(es, *(dw*)(((db*)&trackdata3)+2)));	// 34049 mov     es, word ptr trackdata3+2 ;~ 0FBC:37E8
cs=0xfbc;eip=0x0037ec; 	X(MOV(*(dw*)(raddr(es,bx)), 0));	// 34050 mov     word ptr es:[bx], 0 ;~ 0FBC:37EC
cs=0xfbc;eip=0x0037f1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b28))));	// 34051 mov     bx, [bp+var_B28] ;~ 0FBC:37F1
cs=0xfbc;eip=0x0037f5; 	T(SHL(bx, 1));	// 34052 shl     bx, 1 ;~ 0FBC:37F5
cs=0xfbc;eip=0x0037f7; 	T(ADD(bx, *(dw*)(((db*)&trackdata3))));	// 34053 add     bx, word ptr trackdata3 ;~ 0FBC:37F7
cs=0xfbc;eip=0x0037fb; 	T(MOV(es, *(dw*)(((db*)&trackdata3)+2)));	// 34054 mov     es, word ptr trackdata3+2 ;~ 0FBC:37FB
cs=0xfbc;eip=0x0037ff; 	X(MOV(*(dw*)(raddr(es,bx+2)), 1));	// 34055 mov     word ptr es:[bx+2], 1 ;~ 0FBC:37FF
loc_219a5:
	// 6712 
cs=0xfbc;eip=0x003805; 	T(CMP(*(dw*)(raddr(ss,bp+var_b2a)), 0));	// 34059 cmp     [bp+var_B2A], 0 ;~ 0FBC:3805
cs=0xfbc;eip=0x00380a; 	R(JNZ(loc_219c2));	// 34060 jnz     short loc_219C2 ;~ 0FBC:380A
cs=0xfbc;eip=0x00380c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_b2c))));	// 34061 push    [bp+var_B2C] ;~ 0FBC:380C
cs=0xfbc;eip=0x003810; 	X(PUSH(*(dw*)(raddr(ss,bp+var_b2e))));	// 34062 push    [bp+var_B2E] ;~ 0FBC:3810
cs=0xfbc;eip=0x003814; 	R(CALLF(unload_resource,0));	// 34063 call    unload_resource ;~ 0FBC:3814
cs=0xfbc;eip=0x003819; 	T(ADD(sp, 4));	// 34064 add     sp, 4 ;~ 0FBC:3819
cs=0xfbc;eip=0x00381c; 	X(POP(si));	// 34065 pop     si ;~ 0FBC:381C
cs=0xfbc;eip=0x00381d; 	X(POP(di));	// 34066 pop     di ;~ 0FBC:381D
cs=0xfbc;eip=0x00381e; 	T(MOV(sp, bp));	// 34067 mov     sp, bp ;~ 0FBC:381E
cs=0xfbc;eip=0x003820; 	X(POP(bp));	// 34068 pop     bp ;~ 0FBC:3820
cs=0xfbc;eip=0x003821; 	R(RETF(0));	// 34069 retf ;~ 0FBC:3821
loc_219c2:
	// 6713 
cs=0xfbc;eip=0x003822; 	X(DEC(*(dw*)(raddr(ss,bp+var_b2a))));	// 34073 dec     [bp+var_B2A] ;~ 0FBC:3822
cs=0xfbc;eip=0x003826; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_b2a))));	// 34074 mov     ax, [bp+var_B2A] ;~ 0FBC:3826
cs=0xfbc;eip=0x00382a; 	T(SHL(ax, 1));	// 34075 shl     ax, 1 ;~ 0FBC:382A
cs=0xfbc;eip=0x00382c; 	T(ADD(ax, bp));	// 34076 add     ax, bp ;~ 0FBC:382C
cs=0xfbc;eip=0x00382e; 	X(MOV(*(dw*)(raddr(ss,bp+var_f30)), ax));	// 34077 mov     [bp+var_F30], ax ;~ 0FBC:382E
cs=0xfbc;eip=0x003832; 	T(MOV(bx, ax));	// 34078 mov     bx, ax ;~ 0FBC:3832
cs=0xfbc;eip=0x003834; 	T(MOV(si, *(dw*)(raddr(ds,bx-0x20A))));	// 34079 mov     si, [bx-20Ah] ;~ 0FBC:3834
cs=0xfbc;eip=0x003838; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x40E))));	// 34080 mov     ax, [bx-40Eh] ;~ 0FBC:3838
cs=0xfbc;eip=0x00383c; 	X(MOV(*(dw*)(raddr(ss,bp+var_b28)), ax));	// 34081 mov     [bp+var_B28], ax ;~ 0FBC:383C
cs=0xfbc;eip=0x003840; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b2a))));	// 34082 mov     bx, [bp+var_B2A] ;~ 0FBC:3840
cs=0xfbc;eip=0x003844; 	T(SHL(bx, 1));	// 34083 shl     bx, 1 ;~ 0FBC:3844
cs=0xfbc;eip=0x003846; 	T(SHL(bx, 1));	// 34084 shl     bx, 1 ;~ 0FBC:3846
cs=0xfbc;eip=0x003848; 	T(ADD(bx, bp));	// 34085 add     bx, bp ;~ 0FBC:3848
cs=0xfbc;eip=0x00384a; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x0F2E))));	// 34086 mov     ax, [bx-0F2Eh] ;~ 0FBC:384A
cs=0xfbc;eip=0x00384e; 	T(MOV(dx, *(dw*)(raddr(ds,bx-0x0F2C))));	// 34087 mov     dx, [bx-0F2Ch] ;~ 0FBC:384E
cs=0xfbc;eip=0x003852; 	X(MOV(*(dw*)(raddr(ss,bp+var_20e)), ax));	// 34088 mov     [bp+var_20E], ax ;~ 0FBC:3852
cs=0xfbc;eip=0x003856; 	X(MOV(*(dw*)(raddr(ss,bp+var_20c)), dx));	// 34089 mov     [bp+var_20C], dx ;~ 0FBC:3856
cs=0xfbc;eip=0x00385a; 	R(JMP(loc_21878));	// 34090 jmp     loc_21878 ;~ 0FBC:385A
loc_219fe:
	// 6714 
cs=0xfbc;eip=0x00385e; 	T(MOV(bx, si));	// 34095 mov     bx, si ;~ 0FBC:385E
cs=0xfbc;eip=0x003860; 	T(SHL(bx, 1));	// 34096 shl     bx, 1 ;~ 0FBC:3860
cs=0xfbc;eip=0x003862; 	T(ADD(bx, *(dw*)(((db*)&td02_penalty_related))));	// 34097 add     bx, word ptr td02_penalty_related ;~ 0FBC:3862
cs=0xfbc;eip=0x003866; 	T(MOV(es, *(dw*)(((db*)&td02_penalty_related)+2)));	// 34098 mov     es, word ptr td02_penalty_related+2 ;~ 0FBC:3866
cs=0xfbc;eip=0x00386a; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 34099 mov     ax, es:[bx] ;~ 0FBC:386A
cs=0xfbc;eip=0x00386d; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 34100 mov     [bp+var_6], ax ;~ 0FBC:386D
cs=0xfbc;eip=0x003870; 	T(CMP(ax, 0x0FFFF));	// 34101 cmp     ax, 0FFFFh ;~ 0FBC:3870
cs=0xfbc;eip=0x003873; 	R(JZ(loc_21a54));	// 34102 jz      short loc_21A54 ;~ 0FBC:3873
cs=0xfbc;eip=0x003875; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_b2a))));	// 34103 mov     ax, [bp+var_B2A] ;~ 0FBC:3875
cs=0xfbc;eip=0x003879; 	T(SHL(ax, 1));	// 34104 shl     ax, 1 ;~ 0FBC:3879
cs=0xfbc;eip=0x00387b; 	T(ADD(ax, bp));	// 34105 add     ax, bp ;~ 0FBC:387B
cs=0xfbc;eip=0x00387d; 	X(MOV(*(dw*)(raddr(ss,bp+var_f30)), ax));	// 34106 mov     [bp+var_F30], ax ;~ 0FBC:387D
cs=0xfbc;eip=0x003881; 	T(MOV(bx, ax));	// 34107 mov     bx, ax ;~ 0FBC:3881
cs=0xfbc;eip=0x003883; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 34108 mov     ax, [bp+var_6] ;~ 0FBC:3883
cs=0xfbc;eip=0x003886; 	X(MOV(*(dw*)(raddr(ds,bx-0x20A)), ax));	// 34109 mov     [bx-20Ah], ax ;~ 0FBC:3886
cs=0xfbc;eip=0x00388a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_f30))));	// 34110 mov     bx, [bp+var_F30] ;~ 0FBC:388A
cs=0xfbc;eip=0x00388e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_b28))));	// 34111 mov     ax, [bp+var_B28] ;~ 0FBC:388E
cs=0xfbc;eip=0x003892; 	X(MOV(*(dw*)(raddr(ds,bx-0x40E)), ax));	// 34112 mov     [bx-40Eh], ax ;~ 0FBC:3892
cs=0xfbc;eip=0x003896; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b2a))));	// 34113 mov     bx, [bp+var_B2A] ;~ 0FBC:3896
cs=0xfbc;eip=0x00389a; 	X(INC(*(dw*)(raddr(ss,bp+var_b2a))));	// 34114 inc     [bp+var_B2A] ;~ 0FBC:389A
cs=0xfbc;eip=0x00389e; 	T(SHL(bx, 1));	// 34115 shl     bx, 1 ;~ 0FBC:389E
cs=0xfbc;eip=0x0038a0; 	T(SHL(bx, 1));	// 34116 shl     bx, 1 ;~ 0FBC:38A0
cs=0xfbc;eip=0x0038a2; 	T(ADD(bx, bp));	// 34117 add     bx, bp ;~ 0FBC:38A2
cs=0xfbc;eip=0x0038a4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_20e))));	// 34118 mov     ax, [bp+var_20E] ;~ 0FBC:38A4
cs=0xfbc;eip=0x0038a8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_20c))));	// 34119 mov     dx, [bp+var_20C] ;~ 0FBC:38A8
cs=0xfbc;eip=0x0038ac; 	X(MOV(*(dw*)(raddr(ds,bx-0x0F2E)), ax));	// 34120 mov     [bx-0F2Eh], ax ;~ 0FBC:38AC
cs=0xfbc;eip=0x0038b0; 	X(MOV(*(dw*)(raddr(ds,bx-0x0F2C)), dx));	// 34121 mov     [bx-0F2Ch], dx ;~ 0FBC:38B0
loc_21a54:
	// 6715 
cs=0xfbc;eip=0x0038b4; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_4))));	// 34124 mov     si, [bp+var_4] ;~ 0FBC:38B4
cs=0xfbc;eip=0x0038b7; 	R(JMP(loc_21878));	// 34125 jmp     loc_21878 ;~ 0FBC:38B7
subst_hillroad_track:
	// 34133 
#undef arg_0
#define arg_0 6
	// 34136 arg_0           = byte ptr  6 ;~ 0FBC:38BA
#undef arg_2
#define arg_2 8
	// 34137 arg_2           = byte ptr  8 ;~ 0FBC:38BA
ret_fbc_38ba:
	// 6716 
cs=0xfbc;eip=0x0038ba; 	X(PUSH(bp));	// 34139 push    bp ;~ 0FBC:38BA
cs=0xfbc;eip=0x0038bb; 	T(MOV(bp, sp));	// 34140 mov     bp, sp ;~ 0FBC:38BB
cs=0xfbc;eip=0x0038bd; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 34141 mov     al, [bp+arg_0] ;~ 0FBC:38BD
cs=0xfbc;eip=0x0038c0; 	T(SUB(ah, ah));	// 34142 sub     ah, ah ;~ 0FBC:38C0
cs=0xfbc;eip=0x0038c2; 	T(CMP(ax, 7));	// 34143 cmp     ax, 7 ;~ 0FBC:38C2
cs=0xfbc;eip=0x0038c5; 	R(JZ(loc_21a80));	// 34144 jz      short loc_21A80 ;~ 0FBC:38C5
cs=0xfbc;eip=0x0038c7; 	T(CMP(ax, 8));	// 34145 cmp     ax, 8 ;~ 0FBC:38C7
cs=0xfbc;eip=0x0038ca; 	R(JZ(loc_21abe));	// 34146 jz      short loc_21ABE ;~ 0FBC:38CA
cs=0xfbc;eip=0x0038cc; 	T(CMP(ax, 9));	// 34147 cmp     ax, 9 ;~ 0FBC:38CC
cs=0xfbc;eip=0x0038cf; 	R(JNZ(loc_21a74));	// 34148 jnz     short loc_21A74 ;~ 0FBC:38CF
cs=0xfbc;eip=0x0038d1; 	R(JMP(loc_21afe));	// 34149 jmp     loc_21AFE ;~ 0FBC:38D1
loc_21a74:
	// 6717 
cs=0xfbc;eip=0x0038d4; 	T(CMP(ax, 0x0A));	// 34153 cmp     ax, 0Ah ;~ 0FBC:38D4
cs=0xfbc;eip=0x0038d7; 	R(JNZ(loc_21a7c));	// 34154 jnz     short loc_21A7C ;~ 0FBC:38D7
cs=0xfbc;eip=0x0038d9; 	R(JMP(loc_21b3c));	// 34155 jmp     loc_21B3C ;~ 0FBC:38D9
loc_21a7c:
	// 6718 
cs=0xfbc;eip=0x0038dc; 	T(SUB(ax, ax));	// 34160 sub     ax, ax ;~ 0FBC:38DC
cs=0xfbc;eip=0x0038de; 	X(POP(bp));	// 34161 pop     bp ;~ 0FBC:38DE
cs=0xfbc;eip=0x0038df; 	R(RETF(0));	// 34162 retf ;~ 0FBC:38DF
loc_21a80:
	// 6719 
cs=0xfbc;eip=0x0038e0; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 34166 mov     al, [bp+arg_2] ;~ 0FBC:38E0
cs=0xfbc;eip=0x0038e3; 	T(SUB(ah, ah));	// 34167 sub     ah, ah ;~ 0FBC:38E3
cs=0xfbc;eip=0x0038e5; 	T(CMP(ax, 4));	// 34168 cmp     ax, 4 ;~ 0FBC:38E5
cs=0xfbc;eip=0x0038e8; 	R(JZ(loc_21aa6));	// 34169 jz      short loc_21AA6 ;~ 0FBC:38E8
cs=0xfbc;eip=0x0038ea; 	T(CMP(ax, 0x0E));	// 34170 cmp     ax, 0Eh ;~ 0FBC:38EA
cs=0xfbc;eip=0x0038ed; 	R(JZ(loc_21aac));	// 34171 jz      short loc_21AAC ;~ 0FBC:38ED
cs=0xfbc;eip=0x0038ef; 	T(CMP(ax, 0x18));	// 34172 cmp     ax, 18h ;~ 0FBC:38EF
cs=0xfbc;eip=0x0038f2; 	R(JZ(loc_21ab2));	// 34173 jz      short loc_21AB2 ;~ 0FBC:38F2
cs=0xfbc;eip=0x0038f4; 	T(CMP(ax, 0x27));	// 34174 cmp     ax, 27h ; ''' ;~ 0FBC:38F4
cs=0xfbc;eip=0x0038f7; 	R(JZ(loc_21ab8));	// 34175 jz      short loc_21AB8 ;~ 0FBC:38F7
cs=0xfbc;eip=0x0038f9; 	T(CMP(ax, 0x3B));	// 34176 cmp     ax, 3Bh ; ';' ;~ 0FBC:38F9
cs=0xfbc;eip=0x0038fc; 	R(JZ(loc_21ab8));	// 34177 jz      short loc_21AB8 ;~ 0FBC:38FC
cs=0xfbc;eip=0x0038fe; 	T(CMP(ax, 0x62));	// 34178 cmp     ax, 62h ; 'b' ;~ 0FBC:38FE
cs=0xfbc;eip=0x003901; 	R(JZ(loc_21ab8));	// 34179 jz      short loc_21AB8 ;~ 0FBC:3901
cs=0xfbc;eip=0x003903; 	R(JMP(loc_21a7c));	// 34180 jmp     short loc_21A7C ;~ 0FBC:3903
loc_21aa6:
	// 6720 
cs=0xfbc;eip=0x003906; 	T(MOV(ax, 0x0B6));	// 34185 mov     ax, 0B6h ; '∂' ;~ 0FBC:3906
cs=0xfbc;eip=0x003909; 	R(JMP(loc_21b77));	// 34186 jmp     loc_21B77 ;~ 0FBC:3909
loc_21aac:
	// 6721 
cs=0xfbc;eip=0x00390c; 	T(MOV(ax, 0x0BA));	// 34190 mov     ax, 0BAh ; '∫' ;~ 0FBC:390C
cs=0xfbc;eip=0x00390f; 	R(JMP(loc_21b77));	// 34191 jmp     loc_21B77 ;~ 0FBC:390F
loc_21ab2:
	// 6722 
cs=0xfbc;eip=0x003912; 	T(MOV(ax, 0x0BE));	// 34195 mov     ax, 0BEh ; 'æ' ;~ 0FBC:3912
cs=0xfbc;eip=0x003915; 	R(JMP(loc_21b77));	// 34196 jmp     loc_21B77 ;~ 0FBC:3915
loc_21ab8:
	// 6723 
cs=0xfbc;eip=0x003918; 	T(MOV(ax, 0x0C2));	// 34201 mov     ax, 0C2h ; '¬' ;~ 0FBC:3918
cs=0xfbc;eip=0x00391b; 	R(JMP(loc_21b77));	// 34202 jmp     loc_21B77 ;~ 0FBC:391B
loc_21abe:
	// 6724 
cs=0xfbc;eip=0x00391e; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 34206 mov     al, [bp+arg_2] ;~ 0FBC:391E
cs=0xfbc;eip=0x003921; 	T(SUB(ah, ah));	// 34207 sub     ah, ah ;~ 0FBC:3921
cs=0xfbc;eip=0x003923; 	T(CMP(ax, 5));	// 34208 cmp     ax, 5 ;~ 0FBC:3923
cs=0xfbc;eip=0x003926; 	R(JZ(loc_21ae4));	// 34209 jz      short loc_21AE4 ;~ 0FBC:3926
cs=0xfbc;eip=0x003928; 	T(CMP(ax, 0x0F));	// 34210 cmp     ax, 0Fh ;~ 0FBC:3928
cs=0xfbc;eip=0x00392b; 	R(JZ(loc_21aea));	// 34211 jz      short loc_21AEA ;~ 0FBC:392B
cs=0xfbc;eip=0x00392d; 	T(CMP(ax, 0x19));	// 34212 cmp     ax, 19h ;~ 0FBC:392D
cs=0xfbc;eip=0x003930; 	R(JZ(loc_21af0));	// 34213 jz      short loc_21AF0 ;~ 0FBC:3930
cs=0xfbc;eip=0x003932; 	T(CMP(ax, 0x24));	// 34214 cmp     ax, 24h ; '$' ;~ 0FBC:3932
cs=0xfbc;eip=0x003935; 	R(JZ(loc_21af8));	// 34215 jz      short loc_21AF8 ;~ 0FBC:3935
cs=0xfbc;eip=0x003937; 	T(CMP(ax, 0x38));	// 34216 cmp     ax, 38h ; '8' ;~ 0FBC:3937
cs=0xfbc;eip=0x00393a; 	R(JZ(loc_21af8));	// 34217 jz      short loc_21AF8 ;~ 0FBC:393A
cs=0xfbc;eip=0x00393c; 	T(CMP(ax, 0x5F));	// 34218 cmp     ax, 5Fh ; '_' ;~ 0FBC:393C
cs=0xfbc;eip=0x00393f; 	R(JZ(loc_21af8));	// 34219 jz      short loc_21AF8 ;~ 0FBC:393F
cs=0xfbc;eip=0x003941; 	R(JMP(loc_21a7c));	// 34220 jmp     short loc_21A7C ;~ 0FBC:3941
loc_21ae4:
	// 6725 
cs=0xfbc;eip=0x003944; 	T(MOV(ax, 0x0B7));	// 34225 mov     ax, 0B7h ; '∑' ;~ 0FBC:3944
cs=0xfbc;eip=0x003947; 	R(JMP(loc_21b77));	// 34226 jmp     loc_21B77 ;~ 0FBC:3947
loc_21aea:
	// 6726 
cs=0xfbc;eip=0x00394a; 	T(MOV(ax, 0x0BB));	// 34230 mov     ax, 0BBh ; 'ª' ;~ 0FBC:394A
cs=0xfbc;eip=0x00394d; 	R(JMP(loc_21b77));	// 34231 jmp     loc_21B77 ;~ 0FBC:394D
loc_21af0:
	// 6727 
cs=0xfbc;eip=0x003950; 	T(MOV(ax, 0x0BF));	// 34235 mov     ax, 0BFh ; 'ø' ;~ 0FBC:3950
cs=0xfbc;eip=0x003953; 	R(JMP(loc_21b77));	// 34236 jmp     loc_21B77 ;~ 0FBC:3953
loc_21af8:
	// 6728 
cs=0xfbc;eip=0x003958; 	T(MOV(ax, 0x0C3));	// 34243 mov     ax, 0C3h ; '√' ;~ 0FBC:3958
cs=0xfbc;eip=0x00395b; 	R(JMP(loc_21b77));	// 34244 jmp     short loc_21B77 ;~ 0FBC:395B
loc_21afe:
	// 6729 
cs=0xfbc;eip=0x00395e; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 34249 mov     al, [bp+arg_2] ;~ 0FBC:395E
cs=0xfbc;eip=0x003961; 	T(SUB(ah, ah));	// 34250 sub     ah, ah ;~ 0FBC:3961
cs=0xfbc;eip=0x003963; 	T(CMP(ax, 4));	// 34251 cmp     ax, 4 ;~ 0FBC:3963
cs=0xfbc;eip=0x003966; 	R(JZ(loc_21b24));	// 34252 jz      short loc_21B24 ;~ 0FBC:3966
cs=0xfbc;eip=0x003968; 	T(CMP(ax, 0x0E));	// 34253 cmp     ax, 0Eh ;~ 0FBC:3968
cs=0xfbc;eip=0x00396b; 	R(JZ(loc_21b2a));	// 34254 jz      short loc_21B2A ;~ 0FBC:396B
cs=0xfbc;eip=0x00396d; 	T(CMP(ax, 0x18));	// 34255 cmp     ax, 18h ;~ 0FBC:396D
cs=0xfbc;eip=0x003970; 	R(JZ(loc_21b30));	// 34256 jz      short loc_21B30 ;~ 0FBC:3970
cs=0xfbc;eip=0x003972; 	T(CMP(ax, 0x26));	// 34257 cmp     ax, 26h ; '&' ;~ 0FBC:3972
cs=0xfbc;eip=0x003975; 	R(JZ(loc_21b36));	// 34258 jz      short loc_21B36 ;~ 0FBC:3975
cs=0xfbc;eip=0x003977; 	T(CMP(ax, 0x3A));	// 34259 cmp     ax, 3Ah ; ':' ;~ 0FBC:3977
cs=0xfbc;eip=0x00397a; 	R(JZ(loc_21b36));	// 34260 jz      short loc_21B36 ;~ 0FBC:397A
cs=0xfbc;eip=0x00397c; 	T(CMP(ax, 0x61));	// 34261 cmp     ax, 61h ; 'a' ;~ 0FBC:397C
cs=0xfbc;eip=0x00397f; 	R(JZ(loc_21b36));	// 34262 jz      short loc_21B36 ;~ 0FBC:397F
cs=0xfbc;eip=0x003981; 	R(JMP(loc_21a7c));	// 34263 jmp     loc_21A7C ;~ 0FBC:3981
loc_21b24:
	// 6730 
cs=0xfbc;eip=0x003984; 	T(MOV(ax, 0x0B8));	// 34267 mov     ax, 0B8h ; '∏' ;~ 0FBC:3984
cs=0xfbc;eip=0x003987; 	R(JMP(loc_21b77));	// 34268 jmp     short loc_21B77 ;~ 0FBC:3987
loc_21b2a:
	// 6731 
cs=0xfbc;eip=0x00398a; 	T(MOV(ax, 0x0BC));	// 34273 mov     ax, 0BCh ; 'º' ;~ 0FBC:398A
cs=0xfbc;eip=0x00398d; 	R(JMP(loc_21b77));	// 34274 jmp     short loc_21B77 ;~ 0FBC:398D
loc_21b30:
	// 6732 
cs=0xfbc;eip=0x003990; 	T(MOV(ax, 0x0C0));	// 34279 mov     ax, 0C0h ; '¿' ;~ 0FBC:3990
cs=0xfbc;eip=0x003993; 	R(JMP(loc_21b77));	// 34280 jmp     short loc_21B77 ;~ 0FBC:3993
loc_21b36:
	// 6733 
cs=0xfbc;eip=0x003996; 	T(MOV(ax, 0x0C4));	// 34286 mov     ax, 0C4h ; 'ƒ' ;~ 0FBC:3996
cs=0xfbc;eip=0x003999; 	X(POP(bp));	// 34287 pop     bp ;~ 0FBC:3999
cs=0xfbc;eip=0x00399a; 	R(RETF(0));	// 34288 retf ;~ 0FBC:399A
loc_21b3c:
	// 6734 
cs=0xfbc;eip=0x00399c; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 34293 mov     al, [bp+arg_2] ;~ 0FBC:399C
cs=0xfbc;eip=0x00399f; 	T(SUB(ah, ah));	// 34294 sub     ah, ah ;~ 0FBC:399F
cs=0xfbc;eip=0x0039a1; 	T(CMP(ax, 5));	// 34295 cmp     ax, 5 ;~ 0FBC:39A1
cs=0xfbc;eip=0x0039a4; 	R(JZ(loc_21b62));	// 34296 jz      short loc_21B62 ;~ 0FBC:39A4
cs=0xfbc;eip=0x0039a6; 	T(CMP(ax, 0x0F));	// 34297 cmp     ax, 0Fh ;~ 0FBC:39A6
cs=0xfbc;eip=0x0039a9; 	R(JZ(loc_21b68));	// 34298 jz      short loc_21B68 ;~ 0FBC:39A9
cs=0xfbc;eip=0x0039ab; 	T(CMP(ax, 0x19));	// 34299 cmp     ax, 19h ;~ 0FBC:39AB
cs=0xfbc;eip=0x0039ae; 	R(JZ(loc_21b6e));	// 34300 jz      short loc_21B6E ;~ 0FBC:39AE
cs=0xfbc;eip=0x0039b0; 	T(CMP(ax, 0x25));	// 34301 cmp     ax, 25h ; '%' ;~ 0FBC:39B0
cs=0xfbc;eip=0x0039b3; 	R(JZ(loc_21b74));	// 34302 jz      short loc_21B74 ;~ 0FBC:39B3
cs=0xfbc;eip=0x0039b5; 	T(CMP(ax, 0x39));	// 34303 cmp     ax, 39h ; '9' ;~ 0FBC:39B5
cs=0xfbc;eip=0x0039b8; 	R(JZ(loc_21b74));	// 34304 jz      short loc_21B74 ;~ 0FBC:39B8
cs=0xfbc;eip=0x0039ba; 	T(CMP(ax, 0x60));	// 34305 cmp     ax, 60h ; '`' ;~ 0FBC:39BA
cs=0xfbc;eip=0x0039bd; 	R(JZ(loc_21b74));	// 34306 jz      short loc_21B74 ;~ 0FBC:39BD
cs=0xfbc;eip=0x0039bf; 	R(JMP(loc_21a7c));	// 34307 jmp     loc_21A7C ;~ 0FBC:39BF
loc_21b62:
	// 6735 
cs=0xfbc;eip=0x0039c2; 	T(MOV(ax, 0x0B9));	// 34311 mov     ax, 0B9h ; 'π' ;~ 0FBC:39C2
cs=0xfbc;eip=0x0039c5; 	X(POP(bp));	// 34312 pop     bp ;~ 0FBC:39C5
cs=0xfbc;eip=0x0039c6; 	R(RETF(0));	// 34313 retf ;~ 0FBC:39C6
loc_21b68:
	// 6736 
cs=0xfbc;eip=0x0039c8; 	T(MOV(ax, 0x0BD));	// 34318 mov     ax, 0BDh ; 'Ω' ;~ 0FBC:39C8
cs=0xfbc;eip=0x0039cb; 	X(POP(bp));	// 34319 pop     bp ;~ 0FBC:39CB
cs=0xfbc;eip=0x0039cc; 	R(RETF(0));	// 34320 retf ;~ 0FBC:39CC
loc_21b6e:
	// 6737 
cs=0xfbc;eip=0x0039ce; 	T(MOV(ax, 0x0C1));	// 34325 mov     ax, 0C1h ; '¡' ;~ 0FBC:39CE
cs=0xfbc;eip=0x0039d1; 	X(POP(bp));	// 34326 pop     bp ;~ 0FBC:39D1
cs=0xfbc;eip=0x0039d2; 	R(RETF(0));	// 34327 retf ;~ 0FBC:39D2
loc_21b74:
	// 6738 
cs=0xfbc;eip=0x0039d4; 	T(MOV(ax, 0x0C5));	// 34333 mov     ax, 0C5h ; '≈' ;~ 0FBC:39D4
loc_21b77:
	// 6739 
cs=0xfbc;eip=0x0039d7; 	X(POP(bp));	// 34337 pop     bp ;~ 0FBC:39D7
cs=0xfbc;eip=0x0039d8; 	R(RETF(0));	// 34338 retf ;~ 0FBC:39D8

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kbto_auxiliary1: 	goto bto_auxiliary1;
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
        case m2c::kdef_2140f: 	goto def_2140f;
        case m2c::kload_opponent_data: 	goto load_opponent_data;
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
        case m2c::kloc_1feb9: 	goto loc_1feb9;
        case m2c::kloc_1fec2: 	goto loc_1fec2;
        case m2c::kloc_1feea: 	goto loc_1feea;
        case m2c::kloc_1ff38: 	goto loc_1ff38;
        case m2c::kloc_1ff77: 	goto loc_1ff77;
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
        case m2c::kloc_20477: 	goto loc_20477;
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
        case m2c::klocret_1ff90: 	goto locret_1ff90;
        case m2c::kret_fbc_1cf5: 	goto ret_fbc_1cf5;
        case m2c::kret_fbc_1dc1: 	goto ret_fbc_1dc1;
        case m2c::kret_fbc_1df2: 	goto ret_fbc_1df2;
        case m2c::kret_fbc_229b: 	goto ret_fbc_229b;
        case m2c::kret_fbc_230e: 	goto ret_fbc_230e;
        case m2c::kret_fbc_32f4: 	goto ret_fbc_32f4;
        case m2c::kret_fbc_38ba: 	goto ret_fbc_38ba;
        case m2c::kshape3d_free_all: 	goto shape3d_free_all;
        case m2c::kshape3d_free_car_shapes: 	goto shape3d_free_car_shapes;
        case m2c::kshape3d_load_all: 	goto shape3d_load_all;
        case m2c::ktrack_setup: 	goto track_setup;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

