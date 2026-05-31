/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool sub_19f14(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_19f14:
    _begin:
#undef var_2
#define var_2 -2
	// 19023 var_2           = word ptr -2 ;~ 0B93:0004
#undef arg_0
#define arg_0 6
	// 19024 arg_0           = word ptr  6 ;~ 0B93:0004
cs=0xb93;eip=0x000004; 	X(PUSH(bp));	// 19026 push    bp ;~ 0B93:0004
cs=0xb93;eip=0x000005; 	T(MOV(bp, sp));	// 19027 mov     bp, sp ;~ 0B93:0005
cs=0xb93;eip=0x000007; 	T(SUB(sp, 4));	// 19028 sub     sp, 4 ;~ 0B93:0007
cs=0xb93;eip=0x00000a; 	X(PUSH(di));	// 19029 push    di ;~ 0B93:000A
cs=0xb93;eip=0x00000b; 	X(PUSH(si));	// 19030 push    si ;~ 0B93:000B
cs=0xb93;eip=0x00000c; 	T(CMP(video_flag5_is0, 0));	// 19031 cmp     video_flag5_is0, 0 ;~ 0B93:000C
cs=0xb93;eip=0x000011; 	J(JZ(loc_19f26));	// 19032 jz      short loc_19F26 ;~ 0B93:0011
cs=0xb93;eip=0x000013; 	J(JMP(loc_1a090));	// 19033 jmp     loc_1A090 ;~ 0B93:0013
loc_19f26:
	// 5483 
cs=0xb93;eip=0x000016; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 19037 call    sprite_copy_2_to_1_2 ;~ 0B93:0016
cs=0xb93;eip=0x00001b; 	T(CMP(byte_454a4, 0));	// 19038 cmp     byte_454A4, 0 ;~ 0B93:001B
cs=0xb93;eip=0x000020; 	J(JZ(loc_19f35));	// 19039 jz      short loc_19F35 ;~ 0B93:0020
cs=0xb93;eip=0x000022; 	J(JMP(loc_1a046));	// 19040 jmp     loc_1A046 ;~ 0B93:0022
loc_19f35:
	// 5484 
cs=0xb93;eip=0x000025; 	T(CMP(timertestflag_copy, 0));	// 19044 cmp     timertestflag_copy, 0 ;~ 0B93:0025
cs=0xb93;eip=0x00002a; 	J(JNZ(loc_19f3f));	// 19045 jnz     short loc_19F3F ;~ 0B93:002A
cs=0xb93;eip=0x00002c; 	J(JMP(loc_1a030));	// 19046 jmp     loc_1A030 ;~ 0B93:002C
loc_19f3f:
	// 5485 
cs=0xb93;eip=0x00002f; 	T(SUB(si, si));	// 19050 sub     si, si ;~ 0B93:002F
loc_19f41:
	// 5486 
cs=0xb93;eip=0x000031; 	X(MOV(*((rect_array_unk_indices)+si), 3));	// 19053 mov     rect_array_unk_indices[si], 3 ;~ 0B93:0031
cs=0xb93;eip=0x000036; 	T(INC(si));	// 19054 inc     si ;~ 0B93:0036
cs=0xb93;eip=0x000037; 	T(CMP(si, 0x0F));	// 19055 cmp     si, 0Fh ;~ 0B93:0037
cs=0xb93;eip=0x00003a; 	J(JL(loc_19f41));	// 19056 jl      short loc_19F41 ;~ 0B93:003A
cs=0xb93;eip=0x00003c; 	T(CMP(timertestflag2, 4));	// 19057 cmp     timertestflag2, 4 ;~ 0B93:003C
cs=0xb93;eip=0x000041; 	J(JNZ(loc_19f59));	// 19058 jnz     short loc_19F59 ;~ 0B93:0041
cs=0xb93;eip=0x000043; 	T(MOV(ax, word_463d6));	// 19059 mov     ax, word_463D6 ;~ 0B93:0043
cs=0xb93;eip=0x000046; 	X(MOV(word_449fe, ax));	// 19060 mov     word_449FE, ax ;~ 0B93:0046
loc_19f59:
	// 5487 
cs=0xb93;eip=0x000049; 	T(MOV(ax, word_463d6));	// 19063 mov     ax, word_463D6 ;~ 0B93:0049
cs=0xb93;eip=0x00004c; 	T(CMP(word_449fe, ax));	// 19064 cmp     word_449FE, ax ;~ 0B93:004C
cs=0xb93;eip=0x000050; 	J(JNZ(loc_19f8b));	// 19065 jnz     short loc_19F8B ;~ 0B93:0050
cs=0xb93;eip=0x000052; 	T(MOV(ax, word_45982));	// 19066 mov     ax, word_45982 ;~ 0B93:0052
cs=0xb93;eip=0x000055; 	T(CMP(word_45574, ax));	// 19067 cmp     word_45574, ax ;~ 0B93:0055
cs=0xb93;eip=0x000059; 	J(JNZ(loc_19f8b));	// 19068 jnz     short loc_19F8B ;~ 0B93:0059
cs=0xb93;eip=0x00005b; 	T(MOV(ax, word_45984));	// 19069 mov     ax, word_45984 ;~ 0B93:005B
cs=0xb93;eip=0x00005e; 	T(CMP(word_45576, ax));	// 19070 cmp     word_45576, ax ;~ 0B93:005E
cs=0xb93;eip=0x000062; 	J(JNZ(loc_19f8b));	// 19071 jnz     short loc_19F8B ;~ 0B93:0062
cs=0xb93;eip=0x000064; 	T(MOV(ax, word_45986));	// 19072 mov     ax, word_45986 ;~ 0B93:0064
cs=0xb93;eip=0x000067; 	T(CMP(word_45578, ax));	// 19073 cmp     word_45578, ax ;~ 0B93:0067
cs=0xb93;eip=0x00006b; 	J(JNZ(loc_19f8b));	// 19074 jnz     short loc_19F8B ;~ 0B93:006B
cs=0xb93;eip=0x00006d; 	T(MOV(ax, word_45988));	// 19075 mov     ax, word_45988 ;~ 0B93:006D
cs=0xb93;eip=0x000070; 	T(CMP(word_4557a, ax));	// 19076 cmp     word_4557A, ax ;~ 0B93:0070
cs=0xb93;eip=0x000074; 	J(JNZ(loc_19f8b));	// 19077 jnz     short loc_19F8B ;~ 0B93:0074
cs=0xb93;eip=0x000076; 	X(MOV(*((rect_array_unk_indices)+5), 0));	// 19078 mov     rect_array_unk_indices+5, 0 ;~ 0B93:0076
loc_19f8b:
	// 5488 
cs=0xb93;eip=0x00007b; 	X(MOV(rect_array_unk3_length, 0));	// 19082 mov     rect_array_unk3_length, 0 ;~ 0B93:007B
cs=0xb93;eip=0x000080; 	T(MOV(ax, offset(dseg,rect_array_unk3)));	// 19083 mov     ax, offset rect_array_unk3 ;~ 0B93:0080
cs=0xb93;eip=0x000083; 	X(PUSH(ax));	// 19084 push    ax ;~ 0B93:0083
cs=0xb93;eip=0x000084; 	T(MOV(ax, offset(dseg,rect_array_unk3_length)));	// 19085 mov     ax, offset rect_array_unk3_length ;~ 0B93:0084
cs=0xb93;eip=0x000087; 	X(PUSH(ax));	// 19086 push    ax ;~ 0B93:0087
cs=0xb93;eip=0x000088; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 19087 push    [bp+arg_0] ;~ 0B93:0088
cs=0xb93;eip=0x00008b; 	T(MOV(ax, offset(dseg,rect_array_unk2)));	// 19088 mov     ax, offset rect_array_unk2 ;~ 0B93:008B
cs=0xb93;eip=0x00008e; 	X(PUSH(ax));	// 19089 push    ax ;~ 0B93:008E
cs=0xb93;eip=0x00008f; 	T(MOV(ax, offset(dseg,rect_array_unk)));	// 19090 mov     ax, offset rect_array_unk ;~ 0B93:008F
cs=0xb93;eip=0x000092; 	X(PUSH(ax));	// 19091 push    ax ;~ 0B93:0092
cs=0xb93;eip=0x000093; 	T(MOV(ax, offset(dseg,rect_array_unk_indices)));	// 19092 mov     ax, offset rect_array_unk_indices ;~ 0B93:0093
cs=0xb93;eip=0x000096; 	X(PUSH(ax));	// 19093 push    ax ;~ 0B93:0096
cs=0xb93;eip=0x000097; 	T(MOV(ax, 0x0F));	// 19094 mov     ax, 0Fh         ; number of rects in the array ;~ 0B93:0097
cs=0xb93;eip=0x00009a; 	X(PUSH(ax));	// 19095 push    ax ;~ 0B93:009A
cs=0xb93;eip=0x00009b; 	J(CALLF(rectlist_add_rects,0));	// 19096 call    rectlist_add_rects ;~ 0B93:009B
cs=0xb93;eip=0x0000a0; 	T(ADD(sp, 0x0E));	// 19097 add     sp, 0Eh ;~ 0B93:00A0
cs=0xb93;eip=0x0000a3; 	T(CMP(rect_array_unk3_length, 0));	// 19098 cmp     rect_array_unk3_length, 0 ;~ 0B93:00A3
cs=0xb93;eip=0x0000a8; 	J(JZ(loc_1a01e));	// 19099 jz      short loc_1A01E ;~ 0B93:00A8
cs=0xb93;eip=0x0000aa; 	T(MOV(ax, offset(dseg,rect_array_unk3_indices)));	// 19100 mov     ax, offset rect_array_unk3_indices ;~ 0B93:00AA
cs=0xb93;eip=0x0000ad; 	X(PUSH(ax));	// 19101 push    ax ;~ 0B93:00AD
cs=0xb93;eip=0x0000ae; 	T(MOV(ax, offset(dseg,rect_array_unk3)));	// 19102 mov     ax, offset rect_array_unk3 ;~ 0B93:00AE
cs=0xb93;eip=0x0000b1; 	X(PUSH(ax));	// 19103 push    ax ;~ 0B93:00B1
cs=0xb93;eip=0x0000b2; 	T(MOV(al, rect_array_unk3_length));	// 19104 mov     al, rect_array_unk3_length ;~ 0B93:00B2
cs=0xb93;eip=0x0000b5; 	T(CBW);	// 19105 cbw ;~ 0B93:00B5
cs=0xb93;eip=0x0000b6; 	X(PUSH(ax));	// 19106 push    ax ;~ 0B93:00B6
cs=0xb93;eip=0x0000b7; 	J(CALLF(rect_array_sort_by_top,0));	// 19107 call    rect_array_sort_by_top ;~ 0B93:00B7
cs=0xb93;eip=0x0000bc; 	T(ADD(sp, 6));	// 19108 add     sp, 6 ;~ 0B93:00BC
cs=0xb93;eip=0x0000bf; 	J(CALLF(mouse_draw_opaque_check,0));	// 19109 call    mouse_draw_opaque_check ;~ 0B93:00BF
cs=0xb93;eip=0x0000c4; 	T(SUB(si, si));	// 19110 sub     si, si ;~ 0B93:00C4
cs=0xb93;eip=0x0000c6; 	J(JMP(loc_1a013));	// 19111 jmp     short loc_1A013 ;~ 0B93:00C6
loc_19fd8:
	// 5489 
cs=0xb93;eip=0x0000c8; 	T(MOV(bx, si));	// 19115 mov     bx, si ;~ 0B93:00C8
cs=0xb93;eip=0x0000ca; 	T(SHL(bx, 1));	// 19116 shl     bx, 1 ;~ 0B93:00CA
cs=0xb93;eip=0x0000cc; 	T(MOV(ax, *(dw*)(((db*)rect_array_unk3_indices)+bx)));	// 19117 mov     ax, rect_array_unk3_indices[bx] ;~ 0B93:00CC
cs=0xb93;eip=0x0000d0; 	T(MOV(cl, 3));	// 19118 mov     cl, 3 ;~ 0B93:00D0
cs=0xb93;eip=0x0000d2; 	T(SHL(ax, cl));	// 19119 shl     ax, cl ;~ 0B93:00D2
cs=0xb93;eip=0x0000d4; 	T(ADD(ax, offset(dseg,rect_array_unk3)));	// 19120 add     ax, offset rect_array_unk3 ;~ 0B93:00D4
cs=0xb93;eip=0x0000d7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 19121 mov     [bp+var_2], ax ;~ 0B93:00D7
cs=0xb93;eip=0x0000da; 	T(MOV(bx, ax));	// 19122 mov     bx, ax ;~ 0B93:00DA
cs=0xb93;eip=0x0000dc; 	X(PUSH(*(dw*)(raddr(ds,bx+6))));	// 19123 push    word ptr [bx+6] ;~ 0B93:00DC
cs=0xb93;eip=0x0000df; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 19124 push    word ptr [bx+4] ;~ 0B93:00DF
cs=0xb93;eip=0x0000e2; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 19125 push    word ptr [bx+2] ;~ 0B93:00E2
cs=0xb93;eip=0x0000e5; 	X(PUSH(*(dw*)(raddr(ds,bx+0))));	// 19126 push    word ptr [bx+0] ;~ 0B93:00E5
cs=0xb93;eip=0x0000e7; 	J(CALLF(sprite_set_1_size,0));	// 19127 call    sprite_set_1_size ;~ 0B93:00E7
cs=0xb93;eip=0x0000ec; 	T(ADD(sp, 8));	// 19128 add     sp, 8 ;~ 0B93:00EC
cs=0xb93;eip=0x0000ef; 	T(LES(bx, wndsprite));	// 19129 les     bx, wndsprite ;~ 0B93:00EF
cs=0xb93;eip=0x0000f3; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 19130 push    word ptr es:[bx+2] ;~ 0B93:00F3
cs=0xb93;eip=0x0000f7; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 19131 push    word ptr es:[bx] ;~ 0B93:00F7
cs=0xb93;eip=0x0000fa; 	J(CALLF(sprite_putimage,0));	// 19132 call    sprite_putimage ;~ 0B93:00FA
cs=0xb93;eip=0x0000ff; 	T(ADD(sp, 4));	// 19133 add     sp, 4 ;~ 0B93:00FF
cs=0xb93;eip=0x000102; 	T(INC(si));	// 19134 inc     si ;~ 0B93:0102
loc_1a013:
	// 5490 
cs=0xb93;eip=0x000103; 	T(MOV(al, rect_array_unk3_length));	// 19137 mov     al, rect_array_unk3_length ;~ 0B93:0103
cs=0xb93;eip=0x000106; 	T(CBW);	// 19138 cbw ;~ 0B93:0106
cs=0xb93;eip=0x000107; 	T(CMP(ax, si));	// 19139 cmp     ax, si ;~ 0B93:0107
cs=0xb93;eip=0x000109; 	J(JG(loc_19fd8));	// 19140 jg      short loc_19FD8 ;~ 0B93:0109
cs=0xb93;eip=0x00010b; 	J(JMP(loc_1a05e));	// 19141 jmp     short loc_1A05E ;~ 0B93:010B
loc_1a01e:
	// 5491 
cs=0xb93;eip=0x00010e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 19146 mov     bx, [bp+arg_0] ;~ 0B93:010E
cs=0xb93;eip=0x000111; 	X(PUSH(*(dw*)(raddr(ds,bx+6))));	// 19147 push    word ptr [bx+6] ;~ 0B93:0111
cs=0xb93;eip=0x000114; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 19148 push    word ptr [bx+4] ;~ 0B93:0114
cs=0xb93;eip=0x000117; 	T(MOV(ax, 0x140));	// 19149 mov     ax, 140h ;~ 0B93:0117
cs=0xb93;eip=0x00011a; 	X(PUSH(ax));	// 19150 push    ax ;~ 0B93:011A
cs=0xb93;eip=0x00011b; 	T(SUB(ax, ax));	// 19151 sub     ax, ax ;~ 0B93:011B
cs=0xb93;eip=0x00011d; 	X(PUSH(ax));	// 19152 push    ax ;~ 0B93:011D
cs=0xb93;eip=0x00011e; 	J(JMP(loc_1a03e));	// 19153 jmp     short loc_1A03E ;~ 0B93:011E
loc_1a030:
	// 5492 
cs=0xb93;eip=0x000120; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 19157 mov     bx, [bp+arg_0] ;~ 0B93:0120
cs=0xb93;eip=0x000123; 	X(PUSH(*(dw*)(raddr(ds,bx+6))));	// 19158 push    word ptr [bx+6] ;~ 0B93:0123
cs=0xb93;eip=0x000126; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 19159 push    word ptr [bx+4] ;~ 0B93:0126
cs=0xb93;eip=0x000129; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 19160 push    word ptr [bx+2] ;~ 0B93:0129
cs=0xb93;eip=0x00012c; 	X(PUSH(*(dw*)(raddr(ds,bx+0))));	// 19161 push    word ptr [bx+0] ;~ 0B93:012C
loc_1a03e:
	// 5493 
cs=0xb93;eip=0x00012e; 	J(CALLF(sprite_set_1_size,0));	// 19164 call    sprite_set_1_size ;~ 0B93:012E
cs=0xb93;eip=0x000133; 	T(ADD(sp, 8));	// 19165 add     sp, 8 ;~ 0B93:0133
loc_1a046:
	// 5494 
cs=0xb93;eip=0x000136; 	J(CALLF(mouse_draw_opaque_check,0));	// 19168 call    mouse_draw_opaque_check ;~ 0B93:0136
cs=0xb93;eip=0x00013b; 	T(LES(bx, wndsprite));	// 19169 les     bx, wndsprite ;~ 0B93:013B
cs=0xb93;eip=0x00013f; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 19170 push    word ptr es:[bx+2] ;~ 0B93:013F
cs=0xb93;eip=0x000143; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 19171 push    word ptr es:[bx] ;~ 0B93:0143
cs=0xb93;eip=0x000146; 	J(CALLF(sprite_putimage,0));	// 19172 call    sprite_putimage ;~ 0B93:0146
cs=0xb93;eip=0x00014b; 	T(ADD(sp, 4));	// 19173 add     sp, 4 ;~ 0B93:014B
loc_1a05e:
	// 5495 
cs=0xb93;eip=0x00014e; 	J(CALLF(mouse_draw_transparent_check,0));	// 19176 call    mouse_draw_transparent_check ;~ 0B93:014E
cs=0xb93;eip=0x000153; 	T(CMP(timertestflag_copy, 0));	// 19177 cmp     timertestflag_copy, 0 ;~ 0B93:0153
cs=0xb93;eip=0x000158; 	J(JZ(loc_1a090));	// 19178 jz      short loc_1A090 ;~ 0B93:0158
cs=0xb93;eip=0x00015a; 	T(MOV(ax, word_463d6));	// 19179 mov     ax, word_463D6 ;~ 0B93:015A
cs=0xb93;eip=0x00015d; 	X(MOV(word_449fe, ax));	// 19180 mov     word_449FE, ax ;~ 0B93:015D
cs=0xb93;eip=0x000160; 	T(SUB(si, si));	// 19181 sub     si, si ;~ 0B93:0160
loc_1a072:
	// 5496 
cs=0xb93;eip=0x000162; 	T(MOV(di, si));	// 19184 mov     di, si ;~ 0B93:0162
cs=0xb93;eip=0x000164; 	T(MOV(cl, 3));	// 19185 mov     cl, 3 ;~ 0B93:0164
cs=0xb93;eip=0x000166; 	T(SHL(di, cl));	// 19186 shl     di, cl ;~ 0B93:0166
cs=0xb93;eip=0x000168; 	X(PUSH(si));	// 19187 push    si ;~ 0B93:0168
cs=0xb93;eip=0x000169; 	X(PUSH(di));	// 19188 push    di ;~ 0B93:0169
cs=0xb93;eip=0x00016a; 	T(si = offset(dseg,rect_array_unk)+di);	// 19189 lea     si, rect_array_unk[di] ;~ 0B93:016A
cs=0xb93;eip=0x00016e; 	T(di = offset(dseg,rect_array_unk2)+di);	// 19190 lea     di, rect_array_unk2[di] ;~ 0B93:016E
cs=0xb93;eip=0x000172; 	X(PUSH(ds));	// 19191 push    ds ;~ 0B93:0172
cs=0xb93;eip=0x000173; 	X(POP(es));	// 19192 pop     es ;~ 0B93:0173
cs=0xb93;eip=0x000174; 	X(MOVSW);	// 19194 movsw ;~ 0B93:0174
cs=0xb93;eip=0x000175; 	X(MOVSW);	// 19195 movsw ;~ 0B93:0175
cs=0xb93;eip=0x000176; 	X(MOVSW);	// 19196 movsw ;~ 0B93:0176
cs=0xb93;eip=0x000177; 	X(MOVSW);	// 19197 movsw ;~ 0B93:0177
cs=0xb93;eip=0x000178; 	X(POP(di));	// 19198 pop     di ;~ 0B93:0178
cs=0xb93;eip=0x000179; 	X(POP(si));	// 19199 pop     si ;~ 0B93:0179
cs=0xb93;eip=0x00017a; 	T(INC(si));	// 19200 inc     si ;~ 0B93:017A
cs=0xb93;eip=0x00017b; 	T(CMP(si, 0x0F));	// 19201 cmp     si, 0Fh ;~ 0B93:017B
cs=0xb93;eip=0x00017e; 	J(JL(loc_1a072));	// 19202 jl      short loc_1A072 ;~ 0B93:017E
loc_1a090:
	// 5497 
cs=0xb93;eip=0x000180; 	X(POP(si));	// 19206 pop     si ;~ 0B93:0180
cs=0xb93;eip=0x000181; 	X(POP(di));	// 19207 pop     di ;~ 0B93:0181
cs=0xb93;eip=0x000182; 	T(MOV(sp, bp));	// 19208 mov     sp, bp ;~ 0B93:0182
cs=0xb93;eip=0x000184; 	X(POP(bp));	// 19209 pop     bp ;~ 0B93:0184
cs=0xb93;eip=0x000185; 	J(RETF(0));	// 19210 retf ;~ 0B93:0185

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_19f26: 	goto loc_19f26;
        case m2c::kloc_19f35: 	goto loc_19f35;
        case m2c::kloc_19f3f: 	goto loc_19f3f;
        case m2c::kloc_19f41: 	goto loc_19f41;
        case m2c::kloc_19f59: 	goto loc_19f59;
        case m2c::kloc_19f8b: 	goto loc_19f8b;
        case m2c::kloc_19fd8: 	goto loc_19fd8;
        case m2c::kloc_1a013: 	goto loc_1a013;
        case m2c::kloc_1a01e: 	goto loc_1a01e;
        case m2c::kloc_1a030: 	goto loc_1a030;
        case m2c::kloc_1a03e: 	goto loc_1a03e;
        case m2c::kloc_1a046: 	goto loc_1a046;
        case m2c::kloc_1a05e: 	goto loc_1a05e;
        case m2c::kloc_1a072: 	goto loc_1a072;
        case m2c::kloc_1a090: 	goto loc_1a090;
        case m2c::ksub_19f14: 	goto sub_19f14;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool init_rect_arrays(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    init_rect_arrays:
    _begin:
cs=0xb93;eip=0x000186; 	X(PUSH(bp));	// 19220 push    bp ;~ 0B93:0186
cs=0xb93;eip=0x000187; 	T(MOV(bp, sp));	// 19221 mov     bp, sp ;~ 0B93:0187
cs=0xb93;eip=0x000189; 	T(SUB(sp, 2));	// 19222 sub     sp, 2 ;~ 0B93:0189
cs=0xb93;eip=0x00018c; 	X(PUSH(di));	// 19223 push    di ;~ 0B93:018C
cs=0xb93;eip=0x00018d; 	X(PUSH(si));	// 19224 push    si ;~ 0B93:018D
cs=0xb93;eip=0x00018e; 	T(CMP(timertestflag_copy, 0));	// 19225 cmp     timertestflag_copy, 0 ;~ 0B93:018E
cs=0xb93;eip=0x000193; 	J(JZ(loc_1a0ee));	// 19226 jz      short loc_1A0EE ;~ 0B93:0193
cs=0xb93;eip=0x000195; 	X(PUSH(si));	// 19227 push    si ;~ 0B93:0195
cs=0xb93;eip=0x000196; 	T(MOV(di, offset(dseg,rect_array_unk)));	// 19228 mov     di, offset rect_array_unk ;~ 0B93:0196
cs=0xb93;eip=0x000199; 	T(MOV(si, offset(dseg,rect_unk5)));	// 19229 mov     si, offset rect_unk5 ;~ 0B93:0199
cs=0xb93;eip=0x00019c; 	X(PUSH(ds));	// 19230 push    ds ;~ 0B93:019C
cs=0xb93;eip=0x00019d; 	X(POP(es));	// 19231 pop     es ;~ 0B93:019D
cs=0xb93;eip=0x00019e; 	X(MOVSW);	// 19232 movsw ;~ 0B93:019E
cs=0xb93;eip=0x00019f; 	X(MOVSW);	// 19233 movsw ;~ 0B93:019F
cs=0xb93;eip=0x0001a0; 	X(MOVSW);	// 19234 movsw ;~ 0B93:01A0
cs=0xb93;eip=0x0001a1; 	X(MOVSW);	// 19235 movsw ;~ 0B93:01A1
cs=0xb93;eip=0x0001a2; 	X(POP(si));	// 19236 pop     si ;~ 0B93:01A2
cs=0xb93;eip=0x0001a3; 	X(PUSH(si));	// 19237 push    si ;~ 0B93:01A3
cs=0xb93;eip=0x0001a4; 	T(MOV(di, offset(dseg,rect_array_unk2)));	// 19238 mov     di, offset rect_array_unk2 ;~ 0B93:01A4
cs=0xb93;eip=0x0001a7; 	T(MOV(si, offset(dseg,rect_unk5)));	// 19239 mov     si, offset rect_unk5 ;~ 0B93:01A7
cs=0xb93;eip=0x0001aa; 	X(MOVSW);	// 19240 movsw ;~ 0B93:01AA
cs=0xb93;eip=0x0001ab; 	X(MOVSW);	// 19241 movsw ;~ 0B93:01AB
cs=0xb93;eip=0x0001ac; 	X(MOVSW);	// 19242 movsw ;~ 0B93:01AC
cs=0xb93;eip=0x0001ad; 	X(MOVSW);	// 19243 movsw ;~ 0B93:01AD
cs=0xb93;eip=0x0001ae; 	X(POP(si));	// 19244 pop     si ;~ 0B93:01AE
cs=0xb93;eip=0x0001af; 	T(MOV(si, 1));	// 19245 mov     si, 1 ;~ 0B93:01AF
loc_1a0c2:
	// 5498 
cs=0xb93;eip=0x0001b2; 	T(MOV(di, si));	// 19248 mov     di, si ;~ 0B93:01B2
cs=0xb93;eip=0x0001b4; 	T(MOV(cl, 3));	// 19249 mov     cl, 3 ;~ 0B93:01B4
cs=0xb93;eip=0x0001b6; 	T(SHL(di, cl));	// 19250 shl     di, cl ;~ 0B93:01B6
cs=0xb93;eip=0x0001b8; 	X(PUSH(si));	// 19251 push    si ;~ 0B93:01B8
cs=0xb93;eip=0x0001b9; 	X(PUSH(di));	// 19252 push    di ;~ 0B93:01B9
cs=0xb93;eip=0x0001ba; 	T(di = offset(dseg,rect_array_unk)+di);	// 19253 lea     di, rect_array_unk[di] ;~ 0B93:01BA
cs=0xb93;eip=0x0001be; 	T(MOV(si, offset(dseg,cliprect_unk)));	// 19254 mov     si, offset cliprect_unk ;~ 0B93:01BE
cs=0xb93;eip=0x0001c1; 	X(PUSH(ds));	// 19255 push    ds ;~ 0B93:01C1
cs=0xb93;eip=0x0001c2; 	X(POP(es));	// 19256 pop     es ;~ 0B93:01C2
cs=0xb93;eip=0x0001c3; 	X(MOVSW);	// 19257 movsw ;~ 0B93:01C3
cs=0xb93;eip=0x0001c4; 	X(MOVSW);	// 19258 movsw ;~ 0B93:01C4
cs=0xb93;eip=0x0001c5; 	X(MOVSW);	// 19259 movsw ;~ 0B93:01C5
cs=0xb93;eip=0x0001c6; 	X(MOVSW);	// 19260 movsw ;~ 0B93:01C6
cs=0xb93;eip=0x0001c7; 	X(POP(di));	// 19261 pop     di ;~ 0B93:01C7
cs=0xb93;eip=0x0001c8; 	X(POP(si));	// 19262 pop     si ;~ 0B93:01C8
cs=0xb93;eip=0x0001c9; 	X(PUSH(si));	// 19263 push    si ;~ 0B93:01C9
cs=0xb93;eip=0x0001ca; 	X(PUSH(di));	// 19264 push    di ;~ 0B93:01CA
cs=0xb93;eip=0x0001cb; 	T(di = offset(dseg,rect_array_unk2)+di);	// 19265 lea     di, rect_array_unk2[di] ;~ 0B93:01CB
cs=0xb93;eip=0x0001cf; 	T(MOV(si, offset(dseg,cliprect_unk)));	// 19266 mov     si, offset cliprect_unk ;~ 0B93:01CF
cs=0xb93;eip=0x0001d2; 	X(MOVSW);	// 19267 movsw ;~ 0B93:01D2
cs=0xb93;eip=0x0001d3; 	X(MOVSW);	// 19268 movsw ;~ 0B93:01D3
cs=0xb93;eip=0x0001d4; 	X(MOVSW);	// 19269 movsw ;~ 0B93:01D4
cs=0xb93;eip=0x0001d5; 	X(MOVSW);	// 19270 movsw ;~ 0B93:01D5
cs=0xb93;eip=0x0001d6; 	X(POP(di));	// 19271 pop     di ;~ 0B93:01D6
cs=0xb93;eip=0x0001d7; 	X(POP(si));	// 19272 pop     si ;~ 0B93:01D7
cs=0xb93;eip=0x0001d8; 	T(INC(si));	// 19273 inc     si ;~ 0B93:01D8
cs=0xb93;eip=0x0001d9; 	T(CMP(si, 0x0F));	// 19274 cmp     si, 0Fh         ; there are 15 rects in the array ;~ 0B93:01D9
cs=0xb93;eip=0x0001dc; 	J(JL(loc_1a0c2));	// 19275 jl      short loc_1A0C2 ;~ 0B93:01DC
loc_1a0ee:
	// 5499 
cs=0xb93;eip=0x0001de; 	X(POP(si));	// 19278 pop     si ;~ 0B93:01DE
cs=0xb93;eip=0x0001df; 	X(POP(di));	// 19279 pop     di ;~ 0B93:01DF
cs=0xb93;eip=0x0001e0; 	T(MOV(sp, bp));	// 19280 mov     sp, bp ;~ 0B93:01E0
cs=0xb93;eip=0x0001e2; 	X(POP(bp));	// 19281 pop     bp ;~ 0B93:01E2
cs=0xb93;eip=0x0001e3; 	J(RETF(0));	// 19282 retf ;~ 0B93:01E3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kinit_rect_arrays: 	goto init_rect_arrays;
        case m2c::kloc_1a0c2: 	goto loc_1a0c2;
        case m2c::kloc_1a0ee: 	goto loc_1a0ee;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool update_frame(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    update_frame:
    _begin:
#undef var_154
#define var_154 -0x154
	// 19292 var_154         = dword ptr -154h ;~ 0B93:01E4
#undef var_150
#define var_150 -0x150
	// 19293 var_150         = word ptr -150h ;~ 0B93:01E4
#undef var_14e
#define var_14e -0x14E
	// 19294 var_14E         = word ptr -14Eh ;~ 0B93:01E4
#undef var_14c
#define var_14c -0x14C
	// 19295 var_14C         = byte ptr -14Ch ;~ 0B93:01E4
#undef var_134
#define var_134 -0x134
	// 19296 var_134         = byte ptr -134h ;~ 0B93:01E4
#undef var_132
#define var_132 -0x132
	// 19297 var_132         = word ptr -132h ;~ 0B93:01E4
#undef var_130
#define var_130 -0x130
	// 19298 var_130         = byte ptr -130h ;~ 0B93:01E4
#undef var_12e
#define var_12e -0x12E
	// 19299 var_12E         = word ptr -12Eh ;~ 0B93:01E4
#undef var_12c
#define var_12c -0x12C
	// 19300 var_12C         = byte ptr -12Ch ;~ 0B93:01E4
#undef var_12a
#define var_12a -0x12A
	// 19301 var_12A         = word ptr -12Ah ;~ 0B93:01E4
#undef var_128
#define var_128 -0x128
	// 19302 var_128         = word ptr -128h ;~ 0B93:01E4
#undef var_126
#define var_126 -0x126
	// 19303 var_126         = word ptr -126h ;~ 0B93:01E4
#undef var_124
#define var_124 -0x124
	// 19304 var_124         = word ptr -124h ;~ 0B93:01E4
#undef var_122
#define var_122 -0x122
	// 19305 var_122         = byte ptr -122h ;~ 0B93:01E4
#undef var_120
#define var_120 -0x120
	// 19306 var_120         = byte ptr -120h ;~ 0B93:01E4
#undef var_10e
#define var_10e -0x10E
	// 19307 var_10E         = word ptr -10Eh ;~ 0B93:01E4
#undef terr_map_value
#define terr_map_value -0x10C
	// 19308 terr_map_value  = byte ptr -10Ch ;~ 0B93:01E4
#undef var_10a
#define var_10a -0x10A
	// 19309 var_10A         = byte ptr -10Ah ;~ 0B93:01E4
#undef var_108
#define var_108 -0x108
	// 19310 var_108         = dword ptr -108h ;~ 0B93:01E4
#undef var_104
#define var_104 -0x104
	// 19311 var_104         = word ptr -104h ;~ 0B93:01E4
#undef var_102
#define var_102 -0x102
	// 19312 var_102         = byte ptr -102h ;~ 0B93:01E4
#undef var_100
#define var_100 -0x100
	// 19313 var_100         = byte ptr -100h ;~ 0B93:01E4
#undef var_fe
#define var_fe -0x0FE
	// 19314 var_FE          = word ptr -0FEh ;~ 0B93:01E4
#undef var_fc
#define var_fc -0x0FC
	// 19315 var_FC          = byte ptr -0FCh ;~ 0B93:01E4
#undef var_fa
#define var_fa -0x0FA
	// 19316 var_FA          = word ptr -0FAh ;~ 0B93:01E4
#undef var_f6
#define var_f6 -0x0F6
	// 19317 var_F6          = byte ptr -0F6h ;~ 0B93:01E4
#undef var_f4
#define var_f4 -0x0F4
	// 19318 var_F4          = word ptr -0F4h ;~ 0B93:01E4
#undef var_f2
#define var_f2 -0x0F2
	// 19319 var_F2          = word ptr -0F2h ;~ 0B93:01E4
#undef var_f0
#define var_f0 -0x0F0
	// 19320 var_F0          = word ptr -0F0h ;~ 0B93:01E4
#undef var_ee
#define var_ee -0x0EE
	// 19321 var_EE          = word ptr -0EEh ;~ 0B93:01E4
#undef var_ec
#define var_ec -0x0EC
	// 19322 var_EC          = word ptr -0ECh ;~ 0B93:01E4
#undef var_ea
#define var_ea -0x0EA
	// 19323 var_EA          = word ptr -0EAh ;~ 0B93:01E4
#undef var_e8
#define var_e8 -0x0E8
	// 19324 var_E8          = word ptr -0E8h ;~ 0B93:01E4
#undef var_e4
#define var_e4 -0x0E4
	// 19325 var_E4          = byte ptr -0E4h ;~ 0B93:01E4
#undef var_e2
#define var_e2 -0x0E2
	// 19326 var_E2          = byte ptr -0E2h ;~ 0B93:01E4
#undef var_e0
#define var_e0 -0x0E0
	// 19327 var_E0          = word ptr -0E0h ;~ 0B93:01E4
#undef var_de
#define var_de -0x0DE
	// 19328 var_DE          = word ptr -0DEh ;~ 0B93:01E4
#undef var_dc
#define var_dc -0x0DC
	// 19329 var_DC          = byte ptr -0DCh ;~ 0B93:01E4
#undef var_db
#define var_db -0x0DB
	// 19330 var_DB          = byte ptr -0DBh ;~ 0B93:01E4
#undef var_da
#define var_da -0x0DA
	// 19331 var_DA          = word ptr -0DAh ;~ 0B93:01E4
#undef var_d8
#define var_d8 -0x0D8
	// 19332 var_D8          = byte ptr -0D8h ;~ 0B93:01E4
#undef var_d6
#define var_d6 -0x0D6
	// 19333 var_D6          = word ptr -0D6h ;~ 0B93:01E4
#undef var_d4
#define var_d4 -0x0D4
	// 19334 var_D4          = byte ptr -0D4h ;~ 0B93:01E4
#undef var_bc
#define var_bc -0x0BC
	// 19335 var_BC          = byte ptr -0BCh ;~ 0B93:01E4
#undef var_a4
#define var_a4 -0x0A4
	// 19336 var_A4          = word ptr -0A4h ;~ 0B93:01E4
#undef var_a2
#define var_a2 -0x0A2
	// 19337 var_A2          = word ptr -0A2h ;~ 0B93:01E4
#undef var_a0
#define var_a0 -0x0A0
	// 19338 var_A0          = byte ptr -0A0h ;~ 0B93:01E4
#undef var_8e
#define var_8e -0x8E
	// 19339 var_8E          = byte ptr -8Eh ;~ 0B93:01E4
#undef var_86
#define var_86 -0x86
	// 19340 var_86          = byte ptr -86h ;~ 0B93:01E4
#undef var_6e
#define var_6e -0x6E
	// 19341 var_6E          = byte ptr -6Eh ;~ 0B93:01E4
#undef var_6c
#define var_6c -0x6C
	// 19342 var_6C          = word ptr -6Ch ;~ 0B93:01E4
#undef var_6a
#define var_6a -0x6A
	// 19343 var_6A          = byte ptr -6Ah ;~ 0B93:01E4
#undef elem_map_value
#define elem_map_value -0x62
	// 19344 elem_map_value  = byte ptr -62h ;~ 0B93:01E4
#undef var_60
#define var_60 -0x60
	// 19345 var_60          = byte ptr -60h ;~ 0B93:01E4
#undef var_5e
#define var_5e -0x5E
	// 19346 var_5E          = word ptr -5Eh ;~ 0B93:01E4
#undef var_5c
#define var_5c -0x5C
	// 19347 var_5C          = word ptr -5Ch ;~ 0B93:01E4
#undef var_5a
#define var_5a -0x5A
	// 19348 var_5A          = word ptr -5Ah ;~ 0B93:01E4
#undef var_58
#define var_58 -0x58
	// 19349 var_58          = word ptr -58h ;~ 0B93:01E4
#undef var_56
#define var_56 -0x56
	// 19350 var_56          = word ptr -56h ;~ 0B93:01E4
#undef var_54
#define var_54 -0x54
	// 19351 var_54          = word ptr -54h ;~ 0B93:01E4
#undef var_52
#define var_52 -0x52
	// 19352 var_52          = word ptr -52h ;~ 0B93:01E4
#undef var_50
#define var_50 -0x50
	// 19353 var_50          = word ptr -50h ;~ 0B93:01E4
#undef var_4e
#define var_4e -0x4E
	// 19354 var_4E          = byte ptr -4Eh ;~ 0B93:01E4
#undef var_4c
#define var_4c -0x4C
	// 19355 var_4C          = byte ptr -4Ch ;~ 0B93:01E4
#undef var_4a
#define var_4a -0x4A
	// 19356 var_4A          = byte ptr -4Ah ;~ 0B93:01E4
#undef var_48
#define var_48 -0x48
	// 19357 var_48          = word ptr -48h ;~ 0B93:01E4
#undef var_46
#define var_46 -0x46
	// 19358 var_46          = word ptr -46h ;~ 0B93:01E4
#undef var_44
#define var_44 -0x44
	// 19359 var_44          = word ptr -44h ;~ 0B93:01E4
#undef var_42
#define var_42 -0x42
	// 19360 var_42          = word ptr -42h ;~ 0B93:01E4
#undef var_40
#define var_40 -0x40
	// 19361 var_40          = word ptr -40h ;~ 0B93:01E4
#undef var_3e
#define var_3e -0x3E
	// 19362 var_3E          = word ptr -3Eh ;~ 0B93:01E4
#undef var_3c
#define var_3c -0x3C
	// 19363 var_3C          = byte ptr -3Ch ;~ 0B93:01E4
#undef var_3a
#define var_3a -0x3A
	// 19364 var_3A          = word ptr -3Ah ;~ 0B93:01E4
#undef var_38
#define var_38 -0x38
	// 19365 var_38          = word ptr -38h ;~ 0B93:01E4
#undef var_36
#define var_36 -0x36
	// 19366 var_36          = word ptr -36h ;~ 0B93:01E4
#undef var_34
#define var_34 -0x34
	// 19367 var_34          = word ptr -34h ;~ 0B93:01E4
#undef var_32
#define var_32 -0x32
	// 19368 var_32          = byte ptr -32h ;~ 0B93:01E4
#undef var_1a
#define var_1a -0x1A
	// 19369 var_1A          = byte ptr -1Ah ;~ 0B93:01E4
#undef var_2
#define var_2 -2
	// 19370 var_2           = word ptr -2 ;~ 0B93:01E4
#undef arg_0
#define arg_0 6
	// 19371 arg_0           = byte ptr  6 ;~ 0B93:01E4
#undef arg_2
#define arg_2 8
	// 19372 arg_2           = word ptr  8 ;~ 0B93:01E4
cs=0xb93;eip=0x0001e4; 	X(PUSH(bp));	// 19374 push    bp ;~ 0B93:01E4
cs=0xb93;eip=0x0001e5; 	T(MOV(bp, sp));	// 19375 mov     bp, sp ;~ 0B93:01E5
cs=0xb93;eip=0x0001e7; 	T(SUB(sp, 0x154));	// 19376 sub     sp, 154h ;~ 0B93:01E7
cs=0xb93;eip=0x0001eb; 	X(PUSH(di));	// 19377 push    di ;~ 0B93:01EB
cs=0xb93;eip=0x0001ec; 	X(PUSH(si));	// 19378 push    si ;~ 0B93:01EC
cs=0xb93;eip=0x0001ed; 	X(MOV(*(raddr(ss,bp+var_dc)), 0));	// 19379 mov     [bp+var_DC], 0 ;~ 0B93:01ED
cs=0xb93;eip=0x0001f2; 	X(MOV(*(raddr(ss,bp+var_db)), 0));	// 19380 mov     [bp+var_DB], 0 ;~ 0B93:01F2
cs=0xb93;eip=0x0001f7; 	T(CMP(video_flag5_is0, 0));	// 19381 cmp     video_flag5_is0, 0 ;~ 0B93:01F7
cs=0xb93;eip=0x0001fc; 	J(JZ(loc_1a122));	// 19382 jz      short loc_1A122 ;~ 0B93:01FC
cs=0xb93;eip=0x0001fe; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 19383 cmp     [bp+arg_0], 0 ;~ 0B93:01FE
cs=0xb93;eip=0x000202; 	J(JZ(loc_1a122));	// 19384 jz      short loc_1A122 ;~ 0B93:0202
cs=0xb93;eip=0x000204; 	X(MOV(rectptr_unk2, offset(dseg,rect_array_unk)));	// 19385 mov     rectptr_unk2, offset rect_array_unk ;~ 0B93:0204
cs=0xb93;eip=0x00020a; 	X(MOV(rectptr_unk, offset(dseg,rect_array_unk2)));	// 19386 mov     rectptr_unk, offset rect_array_unk2 ;~ 0B93:020A
cs=0xb93;eip=0x000210; 	J(JMP(loc_1a12e));	// 19387 jmp     short loc_1A12E ;~ 0B93:0210
loc_1a122:
	// 5500 
cs=0xb93;eip=0x000212; 	X(MOV(rectptr_unk, offset(dseg,rect_array_unk)));	// 19392 mov     rectptr_unk, offset rect_array_unk ;~ 0B93:0212
cs=0xb93;eip=0x000218; 	X(MOV(rectptr_unk2, offset(dseg,rect_array_unk2)));	// 19393 mov     rectptr_unk2, offset rect_array_unk2 ;~ 0B93:0218
loc_1a12e:
	// 5501 
cs=0xb93;eip=0x00021e; 	T(CMP(timertestflag_copy, 0));	// 19396 cmp     timertestflag_copy, 0 ;~ 0B93:021E
cs=0xb93;eip=0x000223; 	J(JZ(loc_1a162));	// 19397 jz      short loc_1A162 ;~ 0B93:0223
cs=0xb93;eip=0x000225; 	X(MOV(*(raddr(ss,bp+var_122)), 8));	// 19398 mov     [bp+var_122], 8 ;~ 0B93:0225
cs=0xb93;eip=0x00022a; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), offset(dseg,rect_unk)));	// 19399 mov     [bp+var_3E], offset rect_unk ;~ 0B93:022A
cs=0xb93;eip=0x00022f; 	T(SUB(si, si));	// 19400 sub     si, si ;~ 0B93:022F
cs=0xb93;eip=0x000231; 	J(JMP(loc_1a145));	// 19401 jmp     short loc_1A145 ;~ 0B93:0231
loc_1a144:
	// 5502 
cs=0xb93;eip=0x000234; 	T(INC(si));	// 19406 inc     si ;~ 0B93:0234
loc_1a145:
	// 5503 
cs=0xb93;eip=0x000235; 	T(CMP(si, 0x0F));	// 19409 cmp     si, 0Fh ;~ 0B93:0235
cs=0xb93;eip=0x000238; 	J(JGE(loc_1a167));	// 19410 jge     short loc_1A167 ;~ 0B93:0238
cs=0xb93;eip=0x00023a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3e))));	// 19411 mov     ax, [bp+var_3E] ;~ 0B93:023A
cs=0xb93;eip=0x00023d; 	X(ADD(*(dw*)(raddr(ss,bp+var_3e)), 8));	// 19412 add     [bp+var_3E], 8 ;~ 0B93:023D
cs=0xb93;eip=0x000241; 	X(PUSH(si));	// 19413 push    si ;~ 0B93:0241
cs=0xb93;eip=0x000242; 	X(PUSH(di));	// 19414 push    di ;~ 0B93:0242
cs=0xb93;eip=0x000243; 	T(MOV(di, ax));	// 19415 mov     di, ax ;~ 0B93:0243
cs=0xb93;eip=0x000245; 	T(MOV(si, offset(dseg,cliprect_unk)));	// 19416 mov     si, offset cliprect_unk ;~ 0B93:0245
cs=0xb93;eip=0x000248; 	X(PUSH(ds));	// 19417 push    ds ;~ 0B93:0248
cs=0xb93;eip=0x000249; 	X(POP(es));	// 19418 pop     es ;~ 0B93:0249
cs=0xb93;eip=0x00024a; 	X(MOVSW);	// 19419 movsw ;~ 0B93:024A
cs=0xb93;eip=0x00024b; 	X(MOVSW);	// 19420 movsw ;~ 0B93:024B
cs=0xb93;eip=0x00024c; 	X(MOVSW);	// 19421 movsw ;~ 0B93:024C
cs=0xb93;eip=0x00024d; 	X(MOVSW);	// 19422 movsw ;~ 0B93:024D
cs=0xb93;eip=0x00024e; 	X(POP(di));	// 19423 pop     di ;~ 0B93:024E
cs=0xb93;eip=0x00024f; 	X(POP(si));	// 19424 pop     si ;~ 0B93:024F
cs=0xb93;eip=0x000250; 	J(JMP(loc_1a144));	// 19425 jmp     short loc_1A144 ;~ 0B93:0250
loc_1a162:
	// 5504 
cs=0xb93;eip=0x000252; 	X(MOV(*(raddr(ss,bp+var_122)), 0));	// 19429 mov     [bp+var_122], 0 ;~ 0B93:0252
loc_1a167:
	// 5505 
cs=0xb93;eip=0x000257; 	T(CMP(followopponentflag, 0));	// 19432 cmp     followOpponentFlag, 0 ;~ 0B93:0257
cs=0xb93;eip=0x00025c; 	J(JNZ(loc_1a1be));	// 19433 jnz     short loc_1A1BE ;~ 0B93:025C
cs=0xb93;eip=0x00025e; 	T(MOV(ax, word_445e6));	// 19434 mov     ax, word_445E6 ;~ 0B93:025E
cs=0xb93;eip=0x000261; 	T(MOV(dx, word_445e8));	// 19435 mov     dx, word_445E8 ;~ 0B93:0261
cs=0xb93;eip=0x000265; 	T(MOV(cl, 6));	// 19436 mov     cl, 6 ;~ 0B93:0265
loc_1a177:
	// 5506 
cs=0xb93;eip=0x000267; 	T(SAR(dx, 1));	// 19439 sar     dx, 1 ;~ 0B93:0267
cs=0xb93;eip=0x000269; 	T(RCR(ax, 1));	// 19440 rcr     ax, 1 ;~ 0B93:0269
cs=0xb93;eip=0x00026b; 	T(DEC(cl));	// 19441 dec     cl ;~ 0B93:026B
cs=0xb93;eip=0x00026d; 	J(JNZ(loc_1a177));	// 19442 jnz     short loc_1A177 ;~ 0B93:026D
cs=0xb93;eip=0x00026f; 	X(MOV(*(dw*)(raddr(ss,bp+var_ec)), ax));	// 19443 mov     [bp+var_EC], ax ;~ 0B93:026F
cs=0xb93;eip=0x000273; 	T(MOV(ax, word_445ea));	// 19444 mov     ax, word_445EA ;~ 0B93:0273
cs=0xb93;eip=0x000276; 	T(MOV(dx, word_445ec));	// 19445 mov     dx, word_445EC ;~ 0B93:0276
cs=0xb93;eip=0x00027a; 	T(MOV(cl, 6));	// 19446 mov     cl, 6 ;~ 0B93:027A
loc_1a18c:
	// 5507 
cs=0xb93;eip=0x00027c; 	T(SAR(dx, 1));	// 19449 sar     dx, 1 ;~ 0B93:027C
cs=0xb93;eip=0x00027e; 	T(RCR(ax, 1));	// 19450 rcr     ax, 1 ;~ 0B93:027E
cs=0xb93;eip=0x000280; 	T(DEC(cl));	// 19451 dec     cl ;~ 0B93:0280
cs=0xb93;eip=0x000282; 	J(JNZ(loc_1a18c));	// 19452 jnz     short loc_1A18C ;~ 0B93:0282
cs=0xb93;eip=0x000284; 	X(MOV(*(dw*)(raddr(ss,bp+var_ea)), ax));	// 19453 mov     [bp+var_EA], ax ;~ 0B93:0284
cs=0xb93;eip=0x000288; 	T(MOV(ax, word_445ee));	// 19454 mov     ax, word_445EE ;~ 0B93:0288
cs=0xb93;eip=0x00028b; 	T(MOV(dx, word_445f0));	// 19455 mov     dx, word_445F0 ;~ 0B93:028B
cs=0xb93;eip=0x00028f; 	T(MOV(cl, 6));	// 19456 mov     cl, 6 ;~ 0B93:028F
loc_1a1a1:
	// 5508 
cs=0xb93;eip=0x000291; 	T(SAR(dx, 1));	// 19459 sar     dx, 1 ;~ 0B93:0291
cs=0xb93;eip=0x000293; 	T(RCR(ax, 1));	// 19460 rcr     ax, 1 ;~ 0B93:0293
cs=0xb93;eip=0x000295; 	T(DEC(cl));	// 19461 dec     cl ;~ 0B93:0295
cs=0xb93;eip=0x000297; 	J(JNZ(loc_1a1a1));	// 19462 jnz     short loc_1A1A1 ;~ 0B93:0297
cs=0xb93;eip=0x000299; 	X(MOV(*(dw*)(raddr(ss,bp+var_e8)), ax));	// 19463 mov     [bp+var_E8], ax ;~ 0B93:0299
cs=0xb93;eip=0x00029d; 	T(MOV(ax, word_44600));	// 19464 mov     ax, word_44600 ;~ 0B93:029D
cs=0xb93;eip=0x0002a0; 	X(MOV(*(dw*)(raddr(ss,bp+var_46)), ax));	// 19465 mov     [bp+var_46], ax ;~ 0B93:02A0
cs=0xb93;eip=0x0002a3; 	T(MOV(ax, word_44602));	// 19466 mov     ax, word_44602 ;~ 0B93:02A3
cs=0xb93;eip=0x0002a6; 	X(MOV(*(dw*)(raddr(ss,bp+var_5a)), ax));	// 19467 mov     [bp+var_5A], ax ;~ 0B93:02A6
cs=0xb93;eip=0x0002a9; 	T(MOV(ax, word_445fe));	// 19468 mov     ax, word_445FE ;~ 0B93:02A9
cs=0xb93;eip=0x0002ac; 	J(JMP(loc_1a20c));	// 19469 jmp     short loc_1A20C ;~ 0B93:02AC
loc_1a1be:
	// 5509 
cs=0xb93;eip=0x0002ae; 	T(MOV(ax, word_446b6));	// 19473 mov     ax, word_446B6 ;~ 0B93:02AE
cs=0xb93;eip=0x0002b1; 	T(MOV(dx, word_446b8));	// 19474 mov     dx, word_446B8 ;~ 0B93:02B1
cs=0xb93;eip=0x0002b5; 	T(MOV(cl, 6));	// 19475 mov     cl, 6 ;~ 0B93:02B5
loc_1a1c7:
	// 5510 
cs=0xb93;eip=0x0002b7; 	T(SAR(dx, 1));	// 19478 sar     dx, 1 ;~ 0B93:02B7
cs=0xb93;eip=0x0002b9; 	T(RCR(ax, 1));	// 19479 rcr     ax, 1 ;~ 0B93:02B9
cs=0xb93;eip=0x0002bb; 	T(DEC(cl));	// 19480 dec     cl ;~ 0B93:02BB
cs=0xb93;eip=0x0002bd; 	J(JNZ(loc_1a1c7));	// 19481 jnz     short loc_1A1C7 ;~ 0B93:02BD
cs=0xb93;eip=0x0002bf; 	X(MOV(*(dw*)(raddr(ss,bp+var_ec)), ax));	// 19482 mov     [bp+var_EC], ax ;~ 0B93:02BF
cs=0xb93;eip=0x0002c3; 	T(MOV(ax, word_446ba));	// 19483 mov     ax, word_446BA ;~ 0B93:02C3
cs=0xb93;eip=0x0002c6; 	T(MOV(dx, word_446bc));	// 19484 mov     dx, word_446BC ;~ 0B93:02C6
cs=0xb93;eip=0x0002ca; 	T(MOV(cl, 6));	// 19485 mov     cl, 6 ;~ 0B93:02CA
loc_1a1dc:
	// 5511 
cs=0xb93;eip=0x0002cc; 	T(SAR(dx, 1));	// 19488 sar     dx, 1 ;~ 0B93:02CC
cs=0xb93;eip=0x0002ce; 	T(RCR(ax, 1));	// 19489 rcr     ax, 1 ;~ 0B93:02CE
cs=0xb93;eip=0x0002d0; 	T(DEC(cl));	// 19490 dec     cl ;~ 0B93:02D0
cs=0xb93;eip=0x0002d2; 	J(JNZ(loc_1a1dc));	// 19491 jnz     short loc_1A1DC ;~ 0B93:02D2
cs=0xb93;eip=0x0002d4; 	X(MOV(*(dw*)(raddr(ss,bp+var_ea)), ax));	// 19492 mov     [bp+var_EA], ax ;~ 0B93:02D4
cs=0xb93;eip=0x0002d8; 	T(MOV(ax, word_446be));	// 19493 mov     ax, word_446BE ;~ 0B93:02D8
cs=0xb93;eip=0x0002db; 	T(MOV(dx, word_446c0));	// 19494 mov     dx, word_446C0 ;~ 0B93:02DB
cs=0xb93;eip=0x0002df; 	T(MOV(cl, 6));	// 19495 mov     cl, 6 ;~ 0B93:02DF
loc_1a1f1:
	// 5512 
cs=0xb93;eip=0x0002e1; 	T(SAR(dx, 1));	// 19498 sar     dx, 1 ;~ 0B93:02E1
cs=0xb93;eip=0x0002e3; 	T(RCR(ax, 1));	// 19499 rcr     ax, 1 ;~ 0B93:02E3
cs=0xb93;eip=0x0002e5; 	T(DEC(cl));	// 19500 dec     cl ;~ 0B93:02E5
cs=0xb93;eip=0x0002e7; 	J(JNZ(loc_1a1f1));	// 19501 jnz     short loc_1A1F1 ;~ 0B93:02E7
cs=0xb93;eip=0x0002e9; 	X(MOV(*(dw*)(raddr(ss,bp+var_e8)), ax));	// 19502 mov     [bp+var_E8], ax ;~ 0B93:02E9
cs=0xb93;eip=0x0002ed; 	T(MOV(ax, word_446d0));	// 19503 mov     ax, word_446D0 ;~ 0B93:02ED
cs=0xb93;eip=0x0002f0; 	X(MOV(*(dw*)(raddr(ss,bp+var_46)), ax));	// 19504 mov     [bp+var_46], ax ;~ 0B93:02F0
cs=0xb93;eip=0x0002f3; 	T(MOV(ax, word_446d2));	// 19505 mov     ax, word_446D2 ;~ 0B93:02F3
cs=0xb93;eip=0x0002f6; 	X(MOV(*(dw*)(raddr(ss,bp+var_5a)), ax));	// 19506 mov     [bp+var_5A], ax ;~ 0B93:02F6
cs=0xb93;eip=0x0002f9; 	T(MOV(ax, word_446ce));	// 19507 mov     ax, word_446CE ;~ 0B93:02F9
loc_1a20c:
	// 5513 
cs=0xb93;eip=0x0002fc; 	X(MOV(*(dw*)(raddr(ss,bp+var_f4)), ax));	// 19510 mov     [bp+var_F4], ax ;~ 0B93:02FC
cs=0xb93;eip=0x000300; 	X(MOV(*(dw*)(raddr(ss,bp+var_5c)), 0x0FFFF));	// 19511 mov     [bp+var_5C], 0FFFFh ;~ 0B93:0300
cs=0xb93;eip=0x000305; 	X(MOV(*(dw*)(raddr(ss,bp+var_e0)), 0));	// 19512 mov     [bp+var_E0], 0 ;~ 0B93:0305
cs=0xb93;eip=0x00030b; 	T(MOV(al, cameramode));	// 19513 mov     al, cameramode ;~ 0B93:030B
cs=0xb93;eip=0x00030e; 	T(CBW);	// 19514 cbw ;~ 0B93:030E
cs=0xb93;eip=0x00030f; 	T(OR(ax, ax));	// 19515 or      ax, ax ;~ 0B93:030F
cs=0xb93;eip=0x000311; 	J(JNZ(loc_1a226));	// 19516 jnz     short loc_1A226 ;~ 0B93:0311
cs=0xb93;eip=0x000313; 	J(JMP(loc_1a434));	// 19517 jmp     loc_1A434 ;~ 0B93:0313
loc_1a226:
	// 5514 
cs=0xb93;eip=0x000316; 	T(CMP(ax, 1));	// 19521 cmp     ax, 1 ;~ 0B93:0316
cs=0xb93;eip=0x000319; 	J(JNZ(loc_1a22e));	// 19522 jnz     short loc_1A22E ;~ 0B93:0319
cs=0xb93;eip=0x00031b; 	J(JMP(loc_1a40a));	// 19523 jmp     loc_1A40A ;~ 0B93:031B
loc_1a22e:
	// 5515 
cs=0xb93;eip=0x00031e; 	T(CMP(ax, 2));	// 19527 cmp     ax, 2 ;~ 0B93:031E
cs=0xb93;eip=0x000321; 	J(JZ(loc_1a23e));	// 19528 jz      short loc_1A23E ;~ 0B93:0321
cs=0xb93;eip=0x000323; 	T(CMP(ax, 3));	// 19529 cmp     ax, 3 ;~ 0B93:0323
cs=0xb93;eip=0x000326; 	J(JNZ(loc_1a23b));	// 19530 jnz     short loc_1A23B ;~ 0B93:0326
cs=0xb93;eip=0x000328; 	J(JMP(loc_1a48e));	// 19531 jmp     loc_1A48E ;~ 0B93:0328
loc_1a23b:
	// 5516 
cs=0xb93;eip=0x00032b; 	J(JMP(loc_1a303));	// 19535 jmp     loc_1A303 ;~ 0B93:032B
loc_1a23e:
	// 5517 
cs=0xb93;eip=0x00032e; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), 0));	// 19539 mov     [bp+var_F2], 0 ;~ 0B93:032E
cs=0xb93;eip=0x000334; 	X(MOV(*(dw*)(raddr(ss,bp+var_f0)), 0));	// 19540 mov     [bp+var_F0], 0 ;~ 0B93:0334
cs=0xb93;eip=0x00033a; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), 0x4000));	// 19541 mov     [bp+var_EE], 4000h ;~ 0B93:033A
cs=0xb93;eip=0x000340; 	T(SUB(ax, ax));	// 19542 sub     ax, ax ;~ 0B93:0340
cs=0xb93;eip=0x000342; 	X(PUSH(ax));	// 19543 push    ax ;~ 0B93:0342
cs=0xb93;eip=0x000343; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f4))));	// 19544 mov     ax, [bp+var_F4] ;~ 0B93:0343
cs=0xb93;eip=0x000347; 	T(NEG(ax));	// 19545 neg     ax ;~ 0B93:0347
cs=0xb93;eip=0x000349; 	X(PUSH(ax));	// 19546 push    ax ;~ 0B93:0349
cs=0xb93;eip=0x00034a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_46))));	// 19547 mov     ax, [bp+var_46] ;~ 0B93:034A
cs=0xb93;eip=0x00034d; 	T(NEG(ax));	// 19548 neg     ax ;~ 0B93:034D
cs=0xb93;eip=0x00034f; 	X(PUSH(ax));	// 19549 push    ax ;~ 0B93:034F
cs=0xb93;eip=0x000350; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_5a))));	// 19550 mov     ax, [bp+var_5A] ;~ 0B93:0350
cs=0xb93;eip=0x000353; 	T(NEG(ax));	// 19551 neg     ax ;~ 0B93:0353
cs=0xb93;eip=0x000355; 	X(PUSH(ax));	// 19552 push    ax ;~ 0B93:0355
cs=0xb93;eip=0x000356; 	J(CALLF(mat_rot_zxy,0));	// 19553 call    mat_rot_zxy ;~ 0B93:0356
cs=0xb93;eip=0x00035b; 	T(ADD(sp, 8));	// 19554 add     sp, 8 ;~ 0B93:035B
cs=0xb93;eip=0x00035e; 	X(MOV(*(dw*)(raddr(ss,bp+var_d6)), ax));	// 19555 mov     [bp+var_D6], ax ;~ 0B93:035E
cs=0xb93;eip=0x000362; 	T(ax = bp+var_128);	// 19556 lea     ax, [bp+var_128] ;~ 0B93:0362
cs=0xb93;eip=0x000366; 	X(PUSH(ax));	// 19557 push    ax ;~ 0B93:0366
cs=0xb93;eip=0x000367; 	X(PUSH(*(dw*)(raddr(ss,bp+var_d6))));	// 19558 push    [bp+var_D6] ;~ 0B93:0367
cs=0xb93;eip=0x00036b; 	T(ax = bp+var_f2);	// 19559 lea     ax, [bp+var_F2] ;~ 0B93:036B
cs=0xb93;eip=0x00036f; 	X(PUSH(ax));	// 19560 push    ax ;~ 0B93:036F
cs=0xb93;eip=0x000370; 	J(CALLF(mat_mul_vector,0));	// 19561 call    mat_mul_vector ;~ 0B93:0370
cs=0xb93;eip=0x000375; 	T(ADD(sp, 6));	// 19562 add     sp, 6 ;~ 0B93:0375
cs=0xb93;eip=0x000378; 	X(PUSH(*(dw*)(raddr(ss,bp+var_124))));	// 19563 push    [bp+var_124] ;~ 0B93:0378
cs=0xb93;eip=0x00037c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_128))));	// 19564 push    [bp+var_128] ;~ 0B93:037C
cs=0xb93;eip=0x000380; 	J(CALLF(polarangle,0));	// 19565 call    polarAngle ;~ 0B93:0380
cs=0xb93;eip=0x000385; 	T(ADD(sp, 4));	// 19566 add     sp, 4 ;~ 0B93:0385
cs=0xb93;eip=0x000388; 	T(MOV(si, ax));	// 19567 mov     si, ax ;~ 0B93:0388
cs=0xb93;eip=0x00038a; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), 0));	// 19568 mov     [bp+var_F2], 0 ;~ 0B93:038A
cs=0xb93;eip=0x000390; 	X(MOV(*(dw*)(raddr(ss,bp+var_f0)), 0));	// 19569 mov     [bp+var_F0], 0 ;~ 0B93:0390
cs=0xb93;eip=0x000396; 	T(MOV(ax, word_3b8ec));	// 19570 mov     ax, word_3B8EC ;~ 0B93:0396
cs=0xb93;eip=0x000399; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), ax));	// 19571 mov     [bp+var_EE], ax ;~ 0B93:0399
cs=0xb93;eip=0x00039d; 	T(SUB(ax, ax));	// 19572 sub     ax, ax ;~ 0B93:039D
cs=0xb93;eip=0x00039f; 	X(PUSH(ax));	// 19573 push    ax ;~ 0B93:039F
cs=0xb93;eip=0x0003a0; 	T(MOV(ax, si));	// 19574 mov     ax, si ;~ 0B93:03A0
cs=0xb93;eip=0x0003a2; 	T(SUB(ax, word_3b8ee));	// 19575 sub     ax, word_3B8EE ;~ 0B93:03A2
cs=0xb93;eip=0x0003a6; 	X(PUSH(ax));	// 19576 push    ax ;~ 0B93:03A6
cs=0xb93;eip=0x0003a7; 	T(MOV(ax, word_3b8f0));	// 19577 mov     ax, word_3B8F0 ;~ 0B93:03A7
cs=0xb93;eip=0x0003aa; 	T(NEG(ax));	// 19578 neg     ax ;~ 0B93:03AA
cs=0xb93;eip=0x0003ac; 	X(PUSH(ax));	// 19579 push    ax ;~ 0B93:03AC
cs=0xb93;eip=0x0003ad; 	T(SUB(ax, ax));	// 19580 sub     ax, ax ;~ 0B93:03AD
cs=0xb93;eip=0x0003af; 	X(PUSH(ax));	// 19581 push    ax ;~ 0B93:03AF
cs=0xb93;eip=0x0003b0; 	J(CALLF(mat_rot_zxy,0));	// 19582 call    mat_rot_zxy ;~ 0B93:03B0
cs=0xb93;eip=0x0003b5; 	T(ADD(sp, 8));	// 19583 add     sp, 8 ;~ 0B93:03B5
cs=0xb93;eip=0x0003b8; 	X(MOV(*(dw*)(raddr(ss,bp+var_d6)), ax));	// 19584 mov     [bp+var_D6], ax ;~ 0B93:03B8
loc_1a2cc:
	// 5518 
cs=0xb93;eip=0x0003bc; 	T(ax = bp+var_128);	// 19587 lea     ax, [bp+var_128] ;~ 0B93:03BC
cs=0xb93;eip=0x0003c0; 	X(PUSH(ax));	// 19588 push    ax ;~ 0B93:03C0
cs=0xb93;eip=0x0003c1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_d6))));	// 19589 push    [bp+var_D6] ;~ 0B93:03C1
cs=0xb93;eip=0x0003c5; 	T(ax = bp+var_f2);	// 19590 lea     ax, [bp+var_F2] ;~ 0B93:03C5
cs=0xb93;eip=0x0003c9; 	X(PUSH(ax));	// 19591 push    ax ;~ 0B93:03C9
cs=0xb93;eip=0x0003ca; 	J(CALLF(mat_mul_vector,0));	// 19592 call    mat_mul_vector ;~ 0B93:03CA
cs=0xb93;eip=0x0003cf; 	T(ADD(sp, 6));	// 19593 add     sp, 6 ;~ 0B93:03CF
cs=0xb93;eip=0x0003d2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ec))));	// 19594 mov     ax, [bp+var_EC] ;~ 0B93:03D2
cs=0xb93;eip=0x0003d6; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_128))));	// 19595 add     ax, [bp+var_128] ;~ 0B93:03D6
cs=0xb93;eip=0x0003da; 	X(MOV(*(dw*)(raddr(ss,bp+var_58)), ax));	// 19596 mov     [bp+var_58], ax ;~ 0B93:03DA
cs=0xb93;eip=0x0003dd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ea))));	// 19597 mov     ax, [bp+var_EA] ;~ 0B93:03DD
cs=0xb93;eip=0x0003e1; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_126))));	// 19598 add     ax, [bp+var_126] ;~ 0B93:03E1
cs=0xb93;eip=0x0003e5; 	X(MOV(*(dw*)(raddr(ss,bp+var_56)), ax));	// 19599 mov     [bp+var_56], ax ;~ 0B93:03E5
cs=0xb93;eip=0x0003e8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e8))));	// 19600 mov     ax, [bp+var_E8] ;~ 0B93:03E8
cs=0xb93;eip=0x0003ec; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_124))));	// 19601 add     ax, [bp+var_124] ;~ 0B93:03EC
loc_1a300:
	// 5519 
cs=0xb93;eip=0x0003f0; 	X(MOV(*(dw*)(raddr(ss,bp+var_54)), ax));	// 19604 mov     [bp+var_54], ax ;~ 0B93:03F0
loc_1a303:
	// 5520 
cs=0xb93;eip=0x0003f3; 	T(CMP(*(dw*)(raddr(ss,bp+var_5c)), 0x0FFFF));	// 19608 cmp     [bp+var_5C], 0FFFFh ;~ 0B93:03F3
cs=0xb93;eip=0x0003f7; 	J(JZ(loc_1a30c));	// 19609 jz      short loc_1A30C ;~ 0B93:03F7
cs=0xb93;eip=0x0003f9; 	J(JMP(loc_1a3e9));	// 19610 jmp     loc_1A3E9 ;~ 0B93:03F9
loc_1a30c:
	// 5521 
cs=0xb93;eip=0x0003fc; 	T(ax = bp+var_58);	// 19614 lea     ax, [bp+var_58] ;~ 0B93:03FC
cs=0xb93;eip=0x0003ff; 	X(PUSH(ax));	// 19615 push    ax ;~ 0B93:03FF
cs=0xb93;eip=0x000400; 	T(ax = bp+var_58);	// 19616 lea     ax, [bp+var_58] ;~ 0B93:0400
cs=0xb93;eip=0x000403; 	X(PUSH(ax));	// 19617 push    ax ;~ 0B93:0403
cs=0xb93;eip=0x000404; 	J(CALLF(build_track_object,0));	// 19618 call    build_track_object ;~ 0B93:0404
cs=0xb93;eip=0x000409; 	T(ADD(sp, 4));	// 19619 add     sp, 4 ;~ 0B93:0409
cs=0xb93;eip=0x00040c; 	T(MOV(ax, terrainheight));	// 19620 mov     ax, terrainHeight ;~ 0B93:040C
cs=0xb93;eip=0x00040f; 	T(CMP(*(dw*)(raddr(ss,bp+var_56)), ax));	// 19621 cmp     [bp+var_56], ax ;~ 0B93:040F
cs=0xb93;eip=0x000412; 	J(JGE(loc_1a327));	// 19622 jge     short loc_1A327 ;~ 0B93:0412
cs=0xb93;eip=0x000414; 	X(MOV(*(dw*)(raddr(ss,bp+var_56)), ax));	// 19623 mov     [bp+var_56], ax ;~ 0B93:0414
loc_1a327:
	// 5522 
cs=0xb93;eip=0x000417; 	T(CMP(byte_4392c, 0));	// 19626 cmp     byte_4392C, 0 ;~ 0B93:0417
cs=0xb93;eip=0x00041c; 	J(JZ(loc_1a393));	// 19627 jz      short loc_1A393 ;~ 0B93:041C
cs=0xb93;eip=0x00041e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_54))));	// 19628 push    [bp+var_54] ;~ 0B93:041E
cs=0xb93;eip=0x000421; 	X(PUSH(*(dw*)(raddr(ss,bp+var_56))));	// 19629 push    [bp+var_56] ;~ 0B93:0421
cs=0xb93;eip=0x000424; 	X(PUSH(*(dw*)(raddr(ss,bp+var_58))));	// 19630 push    [bp+var_58] ;~ 0B93:0424
cs=0xb93;eip=0x000427; 	X(PUSH(planindex));	// 19631 push    planindex ;~ 0B93:0427
cs=0xb93;eip=0x00042b; 	J(CALLF(plane_origin_op,0));	// 19632 call    plane_origin_op ;~ 0B93:042B
cs=0xb93;eip=0x000430; 	T(ADD(sp, 8));	// 19633 add     sp, 8 ;~ 0B93:0430
cs=0xb93;eip=0x000433; 	T(MOV(si, ax));	// 19634 mov     si, ax ;~ 0B93:0433
cs=0xb93;eip=0x000435; 	T(CMP(si, 0x0C));	// 19635 cmp     si, 0Ch ;~ 0B93:0435
cs=0xb93;eip=0x000438; 	J(JGE(loc_1a393));	// 19636 jge     short loc_1A393 ;~ 0B93:0438
cs=0xb93;eip=0x00043a; 	X(MOV(vec_unk2, 0));	// 19637 mov     vec_unk2, 0 ;~ 0B93:043A
cs=0xb93;eip=0x000440; 	T(MOV(ax, 0x0C));	// 19638 mov     ax, 0Ch ;~ 0B93:0440
cs=0xb93;eip=0x000443; 	T(SUB(ax, si));	// 19639 sub     ax, si ;~ 0B93:0443
cs=0xb93;eip=0x000445; 	X(MOV(word_44f38, ax));	// 19640 mov     word_44F38, ax ;~ 0B93:0445
cs=0xb93;eip=0x000448; 	X(MOV(word_44f3a, 0));	// 19641 mov     word_44F3A, 0 ;~ 0B93:0448
cs=0xb93;eip=0x00044e; 	T(MOV(ax, planindex));	// 19642 mov     ax, planindex ;~ 0B93:044E
cs=0xb93;eip=0x000451; 	X(MOV(planindex_copy, ax));	// 19643 mov     planindex_copy, ax ;~ 0B93:0451
cs=0xb93;eip=0x000454; 	X(MOV(pstate_f36mminf40sar2, 0));	// 19644 mov     pState_f36Mminf40sar2, 0 ;~ 0B93:0454
cs=0xb93;eip=0x00045a; 	X(MOV(pstate_minusrotate_x_2, 0));	// 19645 mov     pState_minusRotate_x_2, 0 ;~ 0B93:045A
cs=0xb93;eip=0x000460; 	X(MOV(pstate_minusrotate_z_2, 0));	// 19646 mov     pState_minusRotate_z_2, 0 ;~ 0B93:0460
cs=0xb93;eip=0x000466; 	X(MOV(pstate_minusrotate_y_2, 0));	// 19647 mov     pState_minusRotate_y_2, 0 ;~ 0B93:0466
cs=0xb93;eip=0x00046c; 	J(CALLF(plane_rotate_op,0));	// 19648 call    plane_rotate_op ;~ 0B93:046C
cs=0xb93;eip=0x000471; 	T(MOV(ax, vec_planerotopresult));	// 19649 mov     ax, vec_planerotopresult ;~ 0B93:0471
cs=0xb93;eip=0x000474; 	X(ADD(*(dw*)(raddr(ss,bp+var_58)), ax));	// 19650 add     [bp+var_58], ax ;~ 0B93:0474
cs=0xb93;eip=0x000477; 	T(MOV(ax, word_44f3e));	// 19651 mov     ax, word_44F3E ;~ 0B93:0477
cs=0xb93;eip=0x00047a; 	X(ADD(*(dw*)(raddr(ss,bp+var_56)), ax));	// 19652 add     [bp+var_56], ax ;~ 0B93:047A
cs=0xb93;eip=0x00047d; 	T(MOV(ax, word_44f40));	// 19653 mov     ax, word_44F40 ;~ 0B93:047D
cs=0xb93;eip=0x000480; 	X(ADD(*(dw*)(raddr(ss,bp+var_54)), ax));	// 19654 add     [bp+var_54], ax ;~ 0B93:0480
loc_1a393:
	// 5523 
cs=0xb93;eip=0x000483; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e8))));	// 19658 mov     ax, [bp+var_E8] ;~ 0B93:0483
cs=0xb93;eip=0x000487; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_54))));	// 19659 sub     ax, [bp+var_54] ;~ 0B93:0487
cs=0xb93;eip=0x00048a; 	X(PUSH(ax));	// 19660 push    ax ;~ 0B93:048A
cs=0xb93;eip=0x00048b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ec))));	// 19661 mov     ax, [bp+var_EC] ;~ 0B93:048B
cs=0xb93;eip=0x00048f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_58))));	// 19662 sub     ax, [bp+var_58] ;~ 0B93:048F
cs=0xb93;eip=0x000492; 	X(PUSH(ax));	// 19663 push    ax ;~ 0B93:0492
cs=0xb93;eip=0x000493; 	J(CALLF(polarangle,0));	// 19664 call    polarAngle ;~ 0B93:0493
cs=0xb93;eip=0x000498; 	T(ADD(sp, 4));	// 19665 add     sp, 4 ;~ 0B93:0498
cs=0xb93;eip=0x00049b; 	T(NEG(ax));	// 19666 neg     ax ;~ 0B93:049B
cs=0xb93;eip=0x00049d; 	T(AND(ah, 3));	// 19667 and     ah, 3 ;~ 0B93:049D
cs=0xb93;eip=0x0004a0; 	X(MOV(*(dw*)(raddr(ss,bp+var_5c)), ax));	// 19668 mov     [bp+var_5C], ax ;~ 0B93:04A0
cs=0xb93;eip=0x0004a3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e8))));	// 19669 mov     ax, [bp+var_E8] ;~ 0B93:04A3
cs=0xb93;eip=0x0004a7; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_54))));	// 19670 sub     ax, [bp+var_54] ;~ 0B93:04A7
cs=0xb93;eip=0x0004aa; 	X(PUSH(ax));	// 19671 push    ax ;~ 0B93:04AA
cs=0xb93;eip=0x0004ab; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ec))));	// 19672 mov     ax, [bp+var_EC] ;~ 0B93:04AB
cs=0xb93;eip=0x0004af; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_58))));	// 19673 sub     ax, [bp+var_58] ;~ 0B93:04AF
cs=0xb93;eip=0x0004b2; 	X(PUSH(ax));	// 19674 push    ax ;~ 0B93:04B2
cs=0xb93;eip=0x0004b3; 	J(CALLF(polarradius2d,0));	// 19675 call    polarRadius2D ;~ 0B93:04B3
cs=0xb93;eip=0x0004b8; 	T(ADD(sp, 4));	// 19676 add     sp, 4 ;~ 0B93:04B8
cs=0xb93;eip=0x0004bb; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), ax));	// 19677 mov     [bp+var_38], ax ;~ 0B93:04BB
cs=0xb93;eip=0x0004be; 	X(PUSH(ax));	// 19678 push    ax ;~ 0B93:04BE
cs=0xb93;eip=0x0004bf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_ea))));	// 19679 mov     ax, [bp+var_EA] ;~ 0B93:04BF
cs=0xb93;eip=0x0004c3; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_56))));	// 19680 sub     ax, [bp+var_56] ;~ 0B93:04C3
cs=0xb93;eip=0x0004c6; 	T(ADD(ax, 0x32));	// 19681 add     ax, 32h ; '2' ;~ 0B93:04C6
cs=0xb93;eip=0x0004c9; 	X(PUSH(ax));	// 19682 push    ax ;~ 0B93:04C9
cs=0xb93;eip=0x0004ca; 	J(CALLF(polarangle,0));	// 19683 call    polarAngle ;~ 0B93:04CA
cs=0xb93;eip=0x0004cf; 	T(ADD(sp, 4));	// 19684 add     sp, 4 ;~ 0B93:04CF
cs=0xb93;eip=0x0004d2; 	T(AND(ah, 3));	// 19685 and     ah, 3 ;~ 0B93:04D2
cs=0xb93;eip=0x0004d5; 	X(MOV(*(dw*)(raddr(ss,bp+var_fa)), ax));	// 19686 mov     [bp+var_FA], ax ;~ 0B93:04D5
loc_1a3e9:
	// 5524 
cs=0xb93;eip=0x0004d9; 	T(CMP(*(dw*)(raddr(ss,bp+var_e0)), 1));	// 19689 cmp     [bp+var_E0], 1 ;~ 0B93:04D9
cs=0xb93;eip=0x0004de; 	J(JG(loc_1a3f3));	// 19690 jg      short loc_1A3F3 ;~ 0B93:04DE
cs=0xb93;eip=0x0004e0; 	J(JMP(loc_1a4d0));	// 19691 jmp     loc_1A4D0 ;~ 0B93:04E0
loc_1a3f3:
	// 5525 
cs=0xb93;eip=0x0004e3; 	T(CMP(*(dw*)(raddr(ss,bp+var_e0)), 0x3FF));	// 19695 cmp     [bp+var_E0], 3FFh ;~ 0B93:04E3
cs=0xb93;eip=0x0004e9; 	J(JL(loc_1a3fe));	// 19696 jl      short loc_1A3FE ;~ 0B93:04E9
cs=0xb93;eip=0x0004eb; 	J(JMP(loc_1a4d0));	// 19697 jmp     loc_1A4D0 ;~ 0B93:04EB
loc_1a3fe:
	// 5526 
cs=0xb93;eip=0x0004ee; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e0))));	// 19701 mov     ax, [bp+var_E0] ;~ 0B93:04EE
cs=0xb93;eip=0x0004f2; 	X(MOV(*(dw*)(raddr(ss,bp+var_fe)), ax));	// 19702 mov     [bp+var_FE], ax ;~ 0B93:04F2
cs=0xb93;eip=0x0004f6; 	J(JMP(loc_1a4d6));	// 19703 jmp     loc_1A4D6 ;~ 0B93:04F6
loc_1a40a:
	// 5527 
cs=0xb93;eip=0x0004fa; 	T(MOV(al, followopponentflag));	// 19708 mov     al, followOpponentFlag ;~ 0B93:04FA
cs=0xb93;eip=0x0004fd; 	T(CBW);	// 19709 cbw ;~ 0B93:04FD
cs=0xb93;eip=0x0004fe; 	T(MOV(cx, ax));	// 19710 mov     cx, ax ;~ 0B93:04FE
cs=0xb93;eip=0x000500; 	T(SHL(ax, 1));	// 19711 shl     ax, 1 ;~ 0B93:0500
cs=0xb93;eip=0x000502; 	T(ADD(ax, cx));	// 19712 add     ax, cx ;~ 0B93:0502
cs=0xb93;eip=0x000504; 	T(SHL(ax, 1));	// 19713 shl     ax, 1 ;~ 0B93:0504
cs=0xb93;eip=0x000506; 	X(MOV(*(dw*)(raddr(ss,bp+var_150)), ax));	// 19714 mov     [bp+var_150], ax ;~ 0B93:0506
cs=0xb93;eip=0x00050a; 	T(MOV(bx, ax));	// 19715 mov     bx, ax ;~ 0B93:050A
cs=0xb93;eip=0x00050c; 	T(MOV(ax, *(dw*)(((db*)&word_445b4)+bx)));	// 19716 mov     ax, word_445B4[bx] ;~ 0B93:050C
cs=0xb93;eip=0x000510; 	X(MOV(*(dw*)(raddr(ss,bp+var_58)), ax));	// 19717 mov     [bp+var_58], ax ;~ 0B93:0510
cs=0xb93;eip=0x000513; 	T(MOV(ax, *(dw*)(((db*)&word_445b8)+bx)));	// 19718 mov     ax, word_445B8[bx] ;~ 0B93:0513
cs=0xb93;eip=0x000517; 	X(MOV(*(dw*)(raddr(ss,bp+var_54)), ax));	// 19719 mov     [bp+var_54], ax ;~ 0B93:0517
cs=0xb93;eip=0x00051a; 	T(MOV(ax, *(dw*)(((db*)&word_445b6)+bx)));	// 19720 mov     ax, word_445B6[bx] ;~ 0B93:051A
cs=0xb93;eip=0x00051e; 	X(MOV(*(dw*)(raddr(ss,bp+var_56)), ax));	// 19721 mov     [bp+var_56], ax ;~ 0B93:051E
cs=0xb93;eip=0x000521; 	J(JMP(loc_1a303));	// 19722 jmp     loc_1A303 ;~ 0B93:0521
loc_1a434:
	// 5528 
cs=0xb93;eip=0x000524; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f4))));	// 19726 mov     ax, [bp+var_F4] ;~ 0B93:0524
cs=0xb93;eip=0x000528; 	T(AND(ah, 3));	// 19727 and     ah, 3 ;~ 0B93:0528
cs=0xb93;eip=0x00052b; 	X(MOV(*(dw*)(raddr(ss,bp+var_5c)), ax));	// 19728 mov     [bp+var_5C], ax ;~ 0B93:052B
cs=0xb93;eip=0x00052e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_46))));	// 19729 mov     ax, [bp+var_46] ;~ 0B93:052E
cs=0xb93;eip=0x000531; 	T(AND(ah, 3));	// 19730 and     ah, 3 ;~ 0B93:0531
cs=0xb93;eip=0x000534; 	X(MOV(*(dw*)(raddr(ss,bp+var_fa)), ax));	// 19731 mov     [bp+var_FA], ax ;~ 0B93:0534
cs=0xb93;eip=0x000538; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_5a))));	// 19732 mov     ax, [bp+var_5A] ;~ 0B93:0538
cs=0xb93;eip=0x00053b; 	T(AND(ah, 3));	// 19733 and     ah, 3 ;~ 0B93:053B
cs=0xb93;eip=0x00053e; 	X(MOV(*(dw*)(raddr(ss,bp+var_e0)), ax));	// 19734 mov     [bp+var_E0], ax ;~ 0B93:053E
cs=0xb93;eip=0x000542; 	T(SUB(ax, ax));	// 19735 sub     ax, ax ;~ 0B93:0542
cs=0xb93;eip=0x000544; 	X(PUSH(ax));	// 19736 push    ax ;~ 0B93:0544
cs=0xb93;eip=0x000545; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f4))));	// 19737 mov     ax, [bp+var_F4] ;~ 0B93:0545
cs=0xb93;eip=0x000549; 	T(NEG(ax));	// 19738 neg     ax ;~ 0B93:0549
cs=0xb93;eip=0x00054b; 	X(PUSH(ax));	// 19739 push    ax ;~ 0B93:054B
cs=0xb93;eip=0x00054c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_46))));	// 19740 mov     ax, [bp+var_46] ;~ 0B93:054C
cs=0xb93;eip=0x00054f; 	T(NEG(ax));	// 19741 neg     ax ;~ 0B93:054F
cs=0xb93;eip=0x000551; 	X(PUSH(ax));	// 19742 push    ax ;~ 0B93:0551
cs=0xb93;eip=0x000552; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_5a))));	// 19743 mov     ax, [bp+var_5A] ;~ 0B93:0552
cs=0xb93;eip=0x000555; 	T(NEG(ax));	// 19744 neg     ax ;~ 0B93:0555
cs=0xb93;eip=0x000557; 	X(PUSH(ax));	// 19745 push    ax ;~ 0B93:0557
cs=0xb93;eip=0x000558; 	J(CALLF(mat_rot_zxy,0));	// 19746 call    mat_rot_zxy ;~ 0B93:0558
cs=0xb93;eip=0x00055d; 	T(ADD(sp, 8));	// 19747 add     sp, 8 ;~ 0B93:055D
cs=0xb93;eip=0x000560; 	X(MOV(*(dw*)(raddr(ss,bp+var_d6)), ax));	// 19748 mov     [bp+var_D6], ax ;~ 0B93:0560
cs=0xb93;eip=0x000564; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), 0));	// 19749 mov     [bp+var_F2], 0 ;~ 0B93:0564
cs=0xb93;eip=0x00056a; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), 0));	// 19750 mov     [bp+var_EE], 0 ;~ 0B93:056A
cs=0xb93;eip=0x000570; 	T(MOV(ax, word_45f2a));	// 19751 mov     ax, word_45F2A ;~ 0B93:0570
cs=0xb93;eip=0x000573; 	T(SUB(ax, 6));	// 19752 sub     ax, 6 ;~ 0B93:0573
cs=0xb93;eip=0x000576; 	X(MOV(*(dw*)(raddr(ss,bp+var_f0)), ax));	// 19753 mov     [bp+var_F0], ax ;~ 0B93:0576
cs=0xb93;eip=0x00057a; 	J(JMP(loc_1a2cc));	// 19754 jmp     loc_1A2CC ;~ 0B93:057A
loc_1a48e:
	// 5529 
cs=0xb93;eip=0x00057e; 	T(MOV(al, followopponentflag));	// 19759 mov     al, followOpponentFlag ;~ 0B93:057E
cs=0xb93;eip=0x000581; 	T(CBW);	// 19760 cbw ;~ 0B93:0581
cs=0xb93;eip=0x000582; 	T(MOV(bx, ax));	// 19761 mov     bx, ax ;~ 0B93:0582
cs=0xb93;eip=0x000584; 	T(MOV(al, *((&byte_4488b)+bx)));	// 19762 mov     al, byte_4488B[bx] ;~ 0B93:0584
cs=0xb93;eip=0x000588; 	T(CBW);	// 19763 cbw ;~ 0B93:0588
cs=0xb93;eip=0x000589; 	T(MOV(cx, ax));	// 19764 mov     cx, ax ;~ 0B93:0589
cs=0xb93;eip=0x00058b; 	T(SHL(ax, 1));	// 19765 shl     ax, 1 ;~ 0B93:058B
cs=0xb93;eip=0x00058d; 	T(ADD(ax, cx));	// 19766 add     ax, cx ;~ 0B93:058D
cs=0xb93;eip=0x00058f; 	T(SHL(ax, 1));	// 19767 shl     ax, 1 ;~ 0B93:058F
cs=0xb93;eip=0x000591; 	T(ADD(ax, trackdata9));	// 19768 add     ax, trackdata9 ;~ 0B93:0591
cs=0xb93;eip=0x000595; 	T(MOV(dx, word_449de));	// 19769 mov     dx, word_449DE ;~ 0B93:0595
cs=0xb93;eip=0x000599; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_154))), ax));	// 19770 mov     word ptr [bp+var_154], ax ;~ 0B93:0599
cs=0xb93;eip=0x00059d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_154+2))), dx));	// 19771 mov     word ptr [bp+var_154+2], dx ;~ 0B93:059D
cs=0xb93;eip=0x0005a1; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_154))));	// 19772 les     bx, [bp+var_154] ;~ 0B93:05A1
cs=0xb93;eip=0x0005a5; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 19774 mov     ax, es:[bx] ;~ 0B93:05A5
cs=0xb93;eip=0x0005a8; 	X(MOV(*(dw*)(raddr(ss,bp+var_58)), ax));	// 19775 mov     [bp+var_58], ax ;~ 0B93:05A8
cs=0xb93;eip=0x0005ab; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 19776 mov     ax, es:[bx+2] ;~ 0B93:05AB
cs=0xb93;eip=0x0005af; 	T(ADD(ax, word_44d20));	// 19777 add     ax, word_44D20 ;~ 0B93:05AF
cs=0xb93;eip=0x0005b3; 	T(ADD(ax, 0x5A));	// 19778 add     ax, 5Ah ; 'Z' ;~ 0B93:05B3
cs=0xb93;eip=0x0005b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_56)), ax));	// 19779 mov     [bp+var_56], ax ;~ 0B93:05B6
cs=0xb93;eip=0x0005b9; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 19780 mov     ax, es:[bx+4] ;~ 0B93:05B9
cs=0xb93;eip=0x0005bd; 	J(JMP(loc_1a300));	// 19781 jmp     loc_1A300 ;~ 0B93:05BD
loc_1a4d0:
	// 5530 
cs=0xb93;eip=0x0005c0; 	X(MOV(*(dw*)(raddr(ss,bp+var_fe)), 0));	// 19786 mov     [bp+var_FE], 0 ;~ 0B93:05C0
loc_1a4d6:
	// 5531 
cs=0xb93;eip=0x0005c6; 	T(CMP(word_445d4, 0));	// 19789 cmp     word_445D4, 0 ;~ 0B93:05C6
cs=0xb93;eip=0x0005cb; 	J(JNZ(loc_1a4e4));	// 19790 jnz     short loc_1A4E4 ;~ 0B93:05CB
cs=0xb93;eip=0x0005cd; 	T(MOV(bx, word_46468));	// 19791 mov     bx, word_46468 ;~ 0B93:05CD
cs=0xb93;eip=0x0005d1; 	J(JMP(loc_1a4e8));	// 19792 jmp     short loc_1A4E8 ;~ 0B93:05D1
loc_1a4e4:
	// 5532 
cs=0xb93;eip=0x0005d4; 	T(MOV(bx, word_445d4));	// 19797 mov     bx, word_445D4 ;~ 0B93:05D4
loc_1a4e8:
	// 5533 
cs=0xb93;eip=0x0005d8; 	T(AND(bx, 0x0F));	// 19800 and     bx, 0Fh ;~ 0B93:05D8
cs=0xb93;eip=0x0005db; 	T(MOV(al, *((&byte_3c0c6)+bx)));	// 19801 mov     al, byte_3C0C6[bx] ;~ 0B93:05DB
cs=0xb93;eip=0x0005df; 	X(MOV(*(raddr(ss,bp+var_e4)), al));	// 19802 mov     [bp+var_E4], al ;~ 0B93:05DF
cs=0xb93;eip=0x0005e3; 	T(SUB(ax, ax));	// 19803 sub     ax, ax ;~ 0B93:05E3
cs=0xb93;eip=0x0005e5; 	X(PUSH(ax));	// 19804 push    ax ;~ 0B93:05E5
cs=0xb93;eip=0x0005e6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 19805 push    [bp+arg_2] ;~ 0B93:05E6
cs=0xb93;eip=0x0005e9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_5c))));	// 19806 push    [bp+var_5C] ;~ 0B93:05E9
cs=0xb93;eip=0x0005ec; 	X(PUSH(*(dw*)(raddr(ss,bp+var_fa))));	// 19807 push    [bp+var_FA] ;~ 0B93:05EC
cs=0xb93;eip=0x0005f0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_fe))));	// 19808 push    [bp+var_FE] ;~ 0B93:05F0
cs=0xb93;eip=0x0005f4; 	J(CALLF(select_cliprect_rotate,0));	// 19809 call    select_cliprect_rotate ;~ 0B93:05F4
cs=0xb93;eip=0x0005f9; 	T(ADD(sp, 0x0A));	// 19810 add     sp, 0Ah ;~ 0B93:05F9
cs=0xb93;eip=0x0005fc; 	X(MOV(*(dw*)(raddr(ss,bp+var_52)), ax));	// 19811 mov     [bp+var_52], ax ;~ 0B93:05FC
cs=0xb93;eip=0x0005ff; 	T(AND(ah, 3));	// 19812 and     ah, 3 ;~ 0B93:05FF
cs=0xb93;eip=0x000602; 	T(MOV(cl, 7));	// 19813 mov     cl, 7 ;~ 0B93:0602
cs=0xb93;eip=0x000604; 	T(SHR(ax, cl));	// 19814 shr     ax, cl ;~ 0B93:0604
cs=0xb93;eip=0x000606; 	T(MOV(si, ax));	// 19815 mov     si, ax ;~ 0B93:0606
cs=0xb93;eip=0x000608; 	T(MOV(bx, si));	// 19816 mov     bx, si ;~ 0B93:0608
cs=0xb93;eip=0x00060a; 	T(SHL(bx, 1));	// 19817 shl     bx, 1 ;~ 0B93:060A
cs=0xb93;eip=0x00060c; 	T(MOV(ax, *(dw*)(((db*)&off_3c084)+bx)));	// 19818 mov     ax, off_3C084[bx] ;~ 0B93:060C
cs=0xb93;eip=0x000610; 	X(MOV(*(dw*)(raddr(ss,bp+var_50)), ax));	// 19819 mov     [bp+var_50], ax ;~ 0B93:0610
cs=0xb93;eip=0x000613; 	T(MOV(ax, 1));	// 19820 mov     ax, 1 ;~ 0B93:0613
cs=0xb93;eip=0x000616; 	X(PUSH(ax));	// 19821 push    ax ;~ 0B93:0616
cs=0xb93;eip=0x000617; 	T(SUB(ax, ax));	// 19822 sub     ax, ax ;~ 0B93:0617
cs=0xb93;eip=0x000619; 	X(PUSH(ax));	// 19823 push    ax ;~ 0B93:0619
cs=0xb93;eip=0x00061a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_fa))));	// 19824 push    [bp+var_FA] ;~ 0B93:061A
cs=0xb93;eip=0x00061e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_fe))));	// 19825 push    [bp+var_FE] ;~ 0B93:061E
cs=0xb93;eip=0x000622; 	J(CALLF(mat_rot_zxy,0));	// 19826 call    mat_rot_zxy ;~ 0B93:0622
cs=0xb93;eip=0x000627; 	T(ADD(sp, 8));	// 19827 add     sp, 8 ;~ 0B93:0627
cs=0xb93;eip=0x00062a; 	X(PUSH(si));	// 19828 push    si ;~ 0B93:062A
cs=0xb93;eip=0x00062b; 	X(PUSH(di));	// 19829 push    di ;~ 0B93:062B
cs=0xb93;eip=0x00062c; 	T(di = bp+var_120);	// 19830 lea     di, [bp+var_120] ;~ 0B93:062C
cs=0xb93;eip=0x000630; 	T(MOV(si, ax));	// 19831 mov     si, ax ;~ 0B93:0630
cs=0xb93;eip=0x000632; 	X(PUSH(ss));	// 19832 push    ss ;~ 0B93:0632
cs=0xb93;eip=0x000633; 	X(POP(es));	// 19833 pop     es ;~ 0B93:0633
cs=0xb93;eip=0x000634; 	T(MOV(cx, 9));	// 19834 mov     cx, 9 ;~ 0B93:0634
	// 19835 repne movsw ;~ 0B93:0637
cs=0xb93;eip=0x000637; 	X(	REPNE MOVSW);	// 19835 repne movsw ;~ 0B93:0637
cs=0xb93;eip=0x000639; 	X(POP(di));	// 19836 pop     di ;~ 0B93:0639
cs=0xb93;eip=0x00063a; 	X(POP(si));	// 19837 pop     si ;~ 0B93:063A
cs=0xb93;eip=0x00063b; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), 0));	// 19838 mov     [bp+var_F2], 0 ;~ 0B93:063B
cs=0xb93;eip=0x000641; 	X(MOV(*(dw*)(raddr(ss,bp+var_f0)), 0));	// 19839 mov     [bp+var_F0], 0 ;~ 0B93:0641
cs=0xb93;eip=0x000647; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), 0x3E8));	// 19840 mov     [bp+var_EE], 3E8h ;~ 0B93:0647
cs=0xb93;eip=0x00064d; 	T(ax = bp+var_44);	// 19841 lea     ax, [bp+var_44] ;~ 0B93:064D
cs=0xb93;eip=0x000650; 	X(PUSH(ax));	// 19842 push    ax ;~ 0B93:0650
cs=0xb93;eip=0x000651; 	T(ax = bp+var_120);	// 19843 lea     ax, [bp+var_120] ;~ 0B93:0651
cs=0xb93;eip=0x000655; 	X(PUSH(ax));	// 19844 push    ax ;~ 0B93:0655
cs=0xb93;eip=0x000656; 	T(ax = bp+var_f2);	// 19845 lea     ax, [bp+var_F2] ;~ 0B93:0656
cs=0xb93;eip=0x00065a; 	X(PUSH(ax));	// 19846 push    ax ;~ 0B93:065A
cs=0xb93;eip=0x00065b; 	J(CALLF(mat_mul_vector,0));	// 19847 call    mat_mul_vector ;~ 0B93:065B
cs=0xb93;eip=0x000660; 	T(ADD(sp, 6));	// 19848 add     sp, 6 ;~ 0B93:0660
cs=0xb93;eip=0x000663; 	T(CMP(*(dw*)(raddr(ss,bp+var_40)), 0));	// 19849 cmp     [bp+var_40], 0 ;~ 0B93:0663
cs=0xb93;eip=0x000667; 	J(JLE(loc_1a580));	// 19850 jle     short loc_1A580 ;~ 0B93:0667
cs=0xb93;eip=0x000669; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 1));	// 19851 mov     [bp+var_2], 1 ;~ 0B93:0669
cs=0xb93;eip=0x00066e; 	J(JMP(loc_1a585));	// 19852 jmp     short loc_1A585 ;~ 0B93:066E
loc_1a580:
	// 5534 
cs=0xb93;eip=0x000670; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0FFFF));	// 19856 mov     [bp+var_2], 0FFFFh ;~ 0B93:0670
loc_1a585:
	// 5535 
cs=0xb93;eip=0x000675; 	T(CMP(timertestflag2, 0));	// 19859 cmp     timertestflag2, 0 ;~ 0B93:0675
cs=0xb93;eip=0x00067a; 	J(JZ(loc_1a58f));	// 19860 jz      short loc_1A58F ;~ 0B93:067A
cs=0xb93;eip=0x00067c; 	J(JMP(loc_1a66d));	// 19861 jmp     loc_1A66D ;~ 0B93:067C
loc_1a58f:
	// 5536 
cs=0xb93;eip=0x00067f; 	X(MOV(word_42a42, offset(dseg,rect_unk9)));	// 19865 mov     word_42A42, offset rect_unk9 ;~ 0B93:067F
cs=0xb93;eip=0x000685; 	T(MOV(al, *(raddr(ss,bp+var_122))));	// 19866 mov     al, [bp+var_122] ;~ 0B93:0685
cs=0xb93;eip=0x000689; 	T(OR(al, 7));	// 19867 or      al, 7 ;~ 0B93:0689
cs=0xb93;eip=0x00068b; 	X(MOV(byte_42a4c, al));	// 19868 mov     byte_42A4C, al ;~ 0B93:068B
cs=0xb93;eip=0x00068e; 	X(MOV(word_42a44, 0));	// 19869 mov     word_42A44, 0 ;~ 0B93:068E
cs=0xb93;eip=0x000694; 	X(MOV(word_42a46, 0));	// 19870 mov     word_42A46, 0 ;~ 0B93:0694
cs=0xb93;eip=0x00069a; 	X(MOV(word_42a4a, 0x400));	// 19871 mov     word_42A4A, 400h ;~ 0B93:069A
cs=0xb93;eip=0x0006a0; 	X(MOV(byte_42a4d, 0));	// 19872 mov     byte_42A4D, 0 ;~ 0B93:06A0
cs=0xb93;eip=0x0006a5; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), 0));	// 19873 mov     [bp+var_36], 0 ;~ 0B93:06A5
loc_1a5ba:
	// 5537 
cs=0xb93;eip=0x0006aa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_36))));	// 19876 mov     bx, [bp+var_36] ;~ 0B93:06AA
cs=0xb93;eip=0x0006ad; 	T(SHL(bx, 1));	// 19877 shl     bx, 1 ;~ 0B93:06AD
cs=0xb93;eip=0x0006af; 	T(MOV(si, *(dw*)(((db*)&word_3be34)+bx)));	// 19878 mov     si, word_3BE34[bx] ;~ 0B93:06AF
cs=0xb93;eip=0x0006b3; 	T(ADD(si, *(dw*)(raddr(ss,bp+var_5c))));	// 19879 add     si, [bp+var_5C] ;~ 0B93:06B3
cs=0xb93;eip=0x0006b6; 	T(ADD(si, run_game_random));	// 19880 add     si, run_game_random ;~ 0B93:06B6
cs=0xb93;eip=0x0006ba; 	T(AND(si, 0x3FF));	// 19881 and     si, 3FFh ;~ 0B93:06BA
cs=0xb93;eip=0x0006be; 	T(CMP(si, 0x87));	// 19882 cmp     si, 87h ; '‡' ;~ 0B93:06BE
cs=0xb93;eip=0x0006c2; 	J(JL(loc_1a5dd));	// 19883 jl      short loc_1A5DD ;~ 0B93:06C2
cs=0xb93;eip=0x0006c4; 	T(CMP(si, 0x379));	// 19884 cmp     si, 379h ;~ 0B93:06C4
cs=0xb93;eip=0x0006c8; 	J(JG(loc_1a5dd));	// 19885 jg      short loc_1A5DD ;~ 0B93:06C8
cs=0xb93;eip=0x0006ca; 	J(JMP(loc_1a661));	// 19886 jmp     loc_1A661 ;~ 0B93:06CA
loc_1a5dd:
	// 5538 
cs=0xb93;eip=0x0006cd; 	X(PUSH(si));	// 19891 push    si ;~ 0B93:06CD
cs=0xb93;eip=0x0006ce; 	T(ax = bp+var_a0);	// 19892 lea     ax, [bp+var_A0] ;~ 0B93:06CE
cs=0xb93;eip=0x0006d2; 	X(PUSH(ax));	// 19893 push    ax ;~ 0B93:06D2
cs=0xb93;eip=0x0006d3; 	J(CALLF(mat_rot_y,0));	// 19894 call    mat_rot_y ;~ 0B93:06D3
cs=0xb93;eip=0x0006d8; 	T(ADD(sp, 4));	// 19895 add     sp, 4 ;~ 0B93:06D8
cs=0xb93;eip=0x0006db; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), 0));	// 19896 mov     [bp+var_F2], 0 ;~ 0B93:06DB
cs=0xb93;eip=0x0006e1; 	T(MOV(ax, 0x0AE6));	// 19897 mov     ax, 0AE6h ;~ 0B93:06E1
cs=0xb93;eip=0x0006e4; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_56))));	// 19898 sub     ax, [bp+var_56] ;~ 0B93:06E4
cs=0xb93;eip=0x0006e7; 	X(MOV(*(dw*)(raddr(ss,bp+var_f0)), ax));	// 19899 mov     [bp+var_F0], ax ;~ 0B93:06E7
cs=0xb93;eip=0x0006eb; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), 0x3A98));	// 19900 mov     [bp+var_EE], 3A98h ; 15000 ;~ 0B93:06EB
cs=0xb93;eip=0x0006f1; 	T(ax = bp+var_128);	// 19901 lea     ax, [bp+var_128] ;~ 0B93:06F1
cs=0xb93;eip=0x0006f5; 	X(PUSH(ax));	// 19902 push    ax ;~ 0B93:06F5
cs=0xb93;eip=0x0006f6; 	T(ax = bp+var_a0);	// 19903 lea     ax, [bp+var_A0] ;~ 0B93:06F6
cs=0xb93;eip=0x0006fa; 	X(PUSH(ax));	// 19904 push    ax ;~ 0B93:06FA
cs=0xb93;eip=0x0006fb; 	T(ax = bp+var_f2);	// 19905 lea     ax, [bp+var_F2] ;~ 0B93:06FB
cs=0xb93;eip=0x0006ff; 	X(PUSH(ax));	// 19906 push    ax ;~ 0B93:06FF
cs=0xb93;eip=0x000700; 	J(CALLF(mat_mul_vector,0));	// 19907 call    mat_mul_vector ;~ 0B93:0700
cs=0xb93;eip=0x000705; 	T(ADD(sp, 6));	// 19908 add     sp, 6 ;~ 0B93:0705
cs=0xb93;eip=0x000708; 	X(MOV(*(dw*)(raddr(ss,bp+var_124)), 0x3A98));	// 19909 mov     [bp+var_124], 3A98h ; 15000 ;~ 0B93:0708
cs=0xb93;eip=0x00070e; 	T(MOV(ax, offset(dseg,currenttransshape)));	// 19910 mov     ax, offset currenttransshape ;~ 0B93:070E
cs=0xb93;eip=0x000711; 	X(PUSH(ax));	// 19911 push    ax ;~ 0B93:0711
cs=0xb93;eip=0x000712; 	T(ax = bp+var_120);	// 19912 lea     ax, [bp+var_120] ;~ 0B93:0712
cs=0xb93;eip=0x000716; 	X(PUSH(ax));	// 19913 push    ax ;~ 0B93:0716
cs=0xb93;eip=0x000717; 	T(ax = bp+var_128);	// 19914 lea     ax, [bp+var_128] ;~ 0B93:0717
cs=0xb93;eip=0x00071b; 	X(PUSH(ax));	// 19915 push    ax ;~ 0B93:071B
cs=0xb93;eip=0x00071c; 	J(CALLF(mat_mul_vector,0));	// 19916 call    mat_mul_vector ;~ 0B93:071C
cs=0xb93;eip=0x000721; 	T(ADD(sp, 6));	// 19917 add     sp, 6 ;~ 0B93:0721
cs=0xb93;eip=0x000724; 	T(CMP(word_42a3e, 0x0C8));	// 19918 cmp     word_42A3E, 0C8h ; 'È' ;~ 0B93:0724
cs=0xb93;eip=0x00072a; 	J(JLE(loc_1a661));	// 19919 jle     short loc_1A661 ;~ 0B93:072A
cs=0xb93;eip=0x00072c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_36))));	// 19920 mov     bx, [bp+var_36] ;~ 0B93:072C
cs=0xb93;eip=0x00072f; 	T(SHL(bx, 1));	// 19921 shl     bx, 1 ;~ 0B93:072F
cs=0xb93;eip=0x000731; 	T(MOV(ax, *(dw*)(((db*)&off_3be44)+bx)));	// 19922 mov     ax, off_3BE44[bx] ;~ 0B93:0731
cs=0xb93;eip=0x000735; 	X(MOV(word_42a40, ax));	// 19923 mov     word_42A40, ax ;~ 0B93:0735
cs=0xb93;eip=0x000738; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_5c))));	// 19924 mov     ax, [bp+var_5C] ;~ 0B93:0738
cs=0xb93;eip=0x00073b; 	T(NEG(ax));	// 19925 neg     ax ;~ 0B93:073B
cs=0xb93;eip=0x00073d; 	X(MOV(word_42a48, ax));	// 19926 mov     word_42A48, ax ;~ 0B93:073D
cs=0xb93;eip=0x000740; 	T(MOV(ax, offset(dseg,currenttransshape)));	// 19927 mov     ax, offset currenttransshape ;~ 0B93:0740
cs=0xb93;eip=0x000743; 	X(PUSH(ax));	// 19928 push    ax ;~ 0B93:0743
cs=0xb93;eip=0x000744; 	J(CALLF(transformed_shape_op,0));	// 19929 call    transformed_shape_op ;~ 0B93:0744
cs=0xb93;eip=0x000749; 	T(ADD(sp, 2));	// 19930 add     sp, 2 ;~ 0B93:0749
cs=0xb93;eip=0x00074c; 	T(CBW);	// 19931 cbw ;~ 0B93:074C
cs=0xb93;eip=0x00074d; 	X(MOV(*(dw*)(raddr(ss,bp+var_14e)), ax));	// 19932 mov     [bp+var_14E], ax ;~ 0B93:074D
loc_1a661:
	// 5539 
cs=0xb93;eip=0x000751; 	X(INC(*(dw*)(raddr(ss,bp+var_36))));	// 19936 inc     [bp+var_36] ;~ 0B93:0751
cs=0xb93;eip=0x000754; 	T(CMP(*(dw*)(raddr(ss,bp+var_36)), 8));	// 19937 cmp     [bp+var_36], 8 ;~ 0B93:0754
cs=0xb93;eip=0x000758; 	J(JGE(loc_1a66d));	// 19938 jge     short loc_1A66D ;~ 0B93:0758
cs=0xb93;eip=0x00075a; 	J(JMP(loc_1a5ba));	// 19939 jmp     loc_1A5BA ;~ 0B93:075A
loc_1a66d:
	// 5540 
cs=0xb93;eip=0x00075d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_58))));	// 19944 mov     ax, [bp+var_58] ;~ 0B93:075D
cs=0xb93;eip=0x000760; 	T(MOV(cl, 0x0A));	// 19945 mov     cl, 0Ah ;~ 0B93:0760
cs=0xb93;eip=0x000762; 	T(SAR(ax, cl));	// 19946 sar     ax, cl ;~ 0B93:0762
cs=0xb93;eip=0x000764; 	X(MOV(*(raddr(ss,bp+var_10a)), al));	// 19947 mov     [bp+var_10A], al ;~ 0B93:0764
cs=0xb93;eip=0x000768; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_54))));	// 19948 mov     ax, [bp+var_54] ;~ 0B93:0768
cs=0xb93;eip=0x00076b; 	T(SAR(ax, cl));	// 19949 sar     ax, cl ;~ 0B93:076B
cs=0xb93;eip=0x00076d; 	T(SUB(al, 0x1D));	// 19950 sub     al, 1Dh ;~ 0B93:076D
cs=0xb93;eip=0x00076f; 	T(NEG(al));	// 19951 neg     al ;~ 0B93:076F
cs=0xb93;eip=0x000771; 	X(MOV(*(raddr(ss,bp+var_134)), al));	// 19952 mov     [bp+var_134], al ;~ 0B93:0771
cs=0xb93;eip=0x000775; 	T(CMP(timertestflag2, 0));	// 19953 cmp     timertestflag2, 0 ;~ 0B93:0775
cs=0xb93;eip=0x00077a; 	J(JZ(loc_1a69d));	// 19954 jz      short loc_1A69D ;~ 0B93:077A
cs=0xb93;eip=0x00077c; 	T(MOV(al, *(db*)(((db*)&word_445e8))));	// 19955 mov     al, byte ptr word_445E8 ;~ 0B93:077C
cs=0xb93;eip=0x00077f; 	X(MOV(*(raddr(ss,bp+var_d8)), al));	// 19956 mov     [bp+var_D8], al ;~ 0B93:077F
cs=0xb93;eip=0x000783; 	T(MOV(al, 0x1D));	// 19957 mov     al, 1Dh ;~ 0B93:0783
cs=0xb93;eip=0x000785; 	T(SUB(al, *(db*)(((db*)&word_445f0))));	// 19958 sub     al, byte ptr word_445F0 ;~ 0B93:0785
cs=0xb93;eip=0x000789; 	X(MOV(*(raddr(ss,bp+var_e2)), al));	// 19959 mov     [bp+var_E2], al ;~ 0B93:0789
loc_1a69d:
	// 5541 
cs=0xb93;eip=0x00078d; 	T(SUB(si, si));	// 19962 sub     si, si ;~ 0B93:078D
loc_1a69f:
	// 5542 
cs=0xb93;eip=0x00078f; 	X(MOV(*(raddr(ss,bp+si+var_32)), 0));	// 19965 mov     [bp+si+var_32], 0 ;~ 0B93:078F
cs=0xb93;eip=0x000793; 	T(INC(si));	// 19966 inc     si ;~ 0B93:0793
cs=0xb93;eip=0x000794; 	T(CMP(si, 0x17));	// 19967 cmp     si, 17h ;~ 0B93:0794
cs=0xb93;eip=0x000797; 	J(JL(loc_1a69f));	// 19968 jl      short loc_1A69F ;~ 0B93:0797
cs=0xb93;eip=0x000799; 	T(MOV(bl, timertestflag2));	// 19969 mov     bl, timertestflag2 ;~ 0B93:0799
cs=0xb93;eip=0x00079d; 	T(SUB(bh, bh));	// 19970 sub     bh, bh ;~ 0B93:079D
cs=0xb93;eip=0x00079f; 	T(MOV(al, *((&byte_3c09c)+bx)));	// 19971 mov     al, byte_3C09C[bx] ;~ 0B93:079F
cs=0xb93;eip=0x0007a3; 	X(MOV(*(raddr(ss,bp+var_130)), al));	// 19972 mov     [bp+var_130], al ;~ 0B93:07A3
cs=0xb93;eip=0x0007a7; 	T(MOV(si, 0x16));	// 19973 mov     si, 16h ;~ 0B93:07A7
cs=0xb93;eip=0x0007aa; 	J(JMP(loc_1a6ff));	// 19974 jmp     short loc_1A6FF ;~ 0B93:07AA
loc_1a6bc:
	// 5543 
cs=0xb93;eip=0x0007ac; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_50))));	// 19978 mov     ax, [bp+var_50] ;~ 0B93:07AC
cs=0xb93;eip=0x0007af; 	T(MOV(cx, si));	// 19979 mov     cx, si ;~ 0B93:07AF
cs=0xb93;eip=0x0007b1; 	T(MOV(dx, cx));	// 19980 mov     dx, cx ;~ 0B93:07B1
cs=0xb93;eip=0x0007b3; 	T(SHL(cx, 1));	// 19981 shl     cx, 1 ;~ 0B93:07B3
cs=0xb93;eip=0x0007b5; 	T(ADD(cx, dx));	// 19982 add     cx, dx ;~ 0B93:07B5
cs=0xb93;eip=0x0007b7; 	T(ADD(ax, cx));	// 19983 add     ax, cx ;~ 0B93:07B7
cs=0xb93;eip=0x0007b9; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_154))), ax));	// 19984 mov     word ptr [bp+var_154], ax ;~ 0B93:07B9
cs=0xb93;eip=0x0007bd; 	T(MOV(bx, ax));	// 19985 mov     bx, ax ;~ 0B93:07BD
cs=0xb93;eip=0x0007bf; 	T(MOV(al, *(raddr(ds,bx))));	// 19986 mov     al, [bx] ;~ 0B93:07BF
cs=0xb93;eip=0x0007c1; 	T(ADD(al, *(raddr(ss,bp+var_10a))));	// 19987 add     al, [bp+var_10A] ;~ 0B93:07C1
cs=0xb93;eip=0x0007c5; 	X(MOV(*(raddr(ss,bp+var_f6)), al));	// 19988 mov     [bp+var_F6], al ;~ 0B93:07C5
cs=0xb93;eip=0x0007c9; 	T(MOV(al, *(raddr(ds,bx+1))));	// 19989 mov     al, [bx+1] ;~ 0B93:07C9
cs=0xb93;eip=0x0007cc; 	T(ADD(al, *(raddr(ss,bp+var_134))));	// 19990 add     al, [bp+var_134] ;~ 0B93:07CC
cs=0xb93;eip=0x0007d0; 	X(MOV(*(raddr(ss,bp+var_102)), al));	// 19991 mov     [bp+var_102], al ;~ 0B93:07D0
cs=0xb93;eip=0x0007d4; 	T(CMP(*(raddr(ss,bp+var_f6)), 0));	// 19992 cmp     [bp+var_F6], 0 ;~ 0B93:07D4
cs=0xb93;eip=0x0007d9; 	J(JL(loc_1a6fa));	// 19993 jl      short loc_1A6FA ;~ 0B93:07D9
cs=0xb93;eip=0x0007db; 	T(CMP(*(raddr(ss,bp+var_f6)), 0x1D));	// 19994 cmp     [bp+var_F6], 1Dh ;~ 0B93:07DB
cs=0xb93;eip=0x0007e0; 	J(JG(loc_1a6fa));	// 19995 jg      short loc_1A6FA ;~ 0B93:07E0
cs=0xb93;eip=0x0007e2; 	T(OR(al, al));	// 19996 or      al, al ;~ 0B93:07E2
cs=0xb93;eip=0x0007e4; 	J(JL(loc_1a6fa));	// 19997 jl      short loc_1A6FA ;~ 0B93:07E4
cs=0xb93;eip=0x0007e6; 	T(CMP(al, 0x1D));	// 19998 cmp     al, 1Dh ;~ 0B93:07E6
cs=0xb93;eip=0x0007e8; 	J(JLE(loc_1a724));	// 19999 jle     short loc_1A724 ;~ 0B93:07E8
loc_1a6fa:
	// 5544 
cs=0xb93;eip=0x0007ea; 	X(MOV(*(raddr(ss,bp+si+var_32)), 2));	// 20003 mov     [bp+si+var_32], 2 ;~ 0B93:07EA
loc_1a6fe:
	// 5545 
cs=0xb93;eip=0x0007ee; 	T(DEC(si));	// 20007 dec     si ;~ 0B93:07EE
loc_1a6ff:
	// 5546 
cs=0xb93;eip=0x0007ef; 	T(OR(si, si));	// 20010 or      si, si ;~ 0B93:07EF
cs=0xb93;eip=0x0007f1; 	J(JGE(loc_1a706));	// 20011 jge     short loc_1A706 ;~ 0B93:07F1
cs=0xb93;eip=0x0007f3; 	J(JMP(loc_1a9c8));	// 20012 jmp     loc_1A9C8 ;~ 0B93:07F3
loc_1a706:
	// 5547 
cs=0xb93;eip=0x0007f6; 	T(CMP(*(raddr(ss,bp+si+var_32)), 0));	// 20016 cmp     [bp+si+var_32], 0 ;~ 0B93:07F6
cs=0xb93;eip=0x0007fa; 	J(JNZ(loc_1a6fe));	// 20017 jnz     short loc_1A6FE ;~ 0B93:07FA
cs=0xb93;eip=0x0007fc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_50))));	// 20018 mov     bx, [bp+var_50] ;~ 0B93:07FC
cs=0xb93;eip=0x0007ff; 	T(MOV(ax, si));	// 20019 mov     ax, si ;~ 0B93:07FF
cs=0xb93;eip=0x000801; 	T(MOV(cx, ax));	// 20020 mov     cx, ax ;~ 0B93:0801
cs=0xb93;eip=0x000803; 	T(SHL(ax, 1));	// 20021 shl     ax, 1 ;~ 0B93:0803
cs=0xb93;eip=0x000805; 	T(ADD(ax, cx));	// 20022 add     ax, cx ;~ 0B93:0805
cs=0xb93;eip=0x000807; 	T(ADD(bx, ax));	// 20023 add     bx, ax ;~ 0B93:0807
cs=0xb93;eip=0x000809; 	T(MOV(al, *(raddr(ss,bp+var_130))));	// 20024 mov     al, [bp+var_130] ;~ 0B93:0809
cs=0xb93;eip=0x00080d; 	T(CMP(*(raddr(ds,bx+2)), al));	// 20025 cmp     [bx+2], al ;~ 0B93:080D
cs=0xb93;eip=0x000810; 	J(JLE(loc_1a6bc));	// 20026 jle     short loc_1A6BC ;~ 0B93:0810
cs=0xb93;eip=0x000812; 	J(JMP(loc_1a6fa));	// 20027 jmp     short loc_1A6FA ;~ 0B93:0812
loc_1a724:
	// 5548 
cs=0xb93;eip=0x000814; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 20031 mov     al, [bp+var_F6] ;~ 0B93:0814
cs=0xb93;eip=0x000818; 	T(CBW);	// 20032 cbw ;~ 0B93:0818
cs=0xb93;eip=0x000819; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_154))), ax));	// 20033 mov     word ptr [bp+var_154], ax ;~ 0B93:0819
cs=0xb93;eip=0x00081d; 	T(MOV(al, *(raddr(ss,bp+var_102))));	// 20034 mov     al, [bp+var_102] ;~ 0B93:081D
cs=0xb93;eip=0x000821; 	T(CBW);	// 20035 cbw ;~ 0B93:0821
cs=0xb93;eip=0x000822; 	T(SHL(ax, 1));	// 20036 shl     ax, 1 ;~ 0B93:0822
cs=0xb93;eip=0x000824; 	X(MOV(*(dw*)(raddr(ss,bp+var_150)), ax));	// 20037 mov     [bp+var_150], ax ;~ 0B93:0824
cs=0xb93;eip=0x000828; 	T(MOV(bx, ax));	// 20038 mov     bx, ax ;~ 0B93:0828
cs=0xb93;eip=0x00082a; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 20039 mov     bx, trackrows[bx] ;~ 0B93:082A
cs=0xb93;eip=0x00082e; 	T(ADD(bx, *(dw*)((dw*)(raddr(ss,bp+var_154)))));	// 20040 add     bx, word ptr [bp+var_154] ;~ 0B93:082E
cs=0xb93;eip=0x000832; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 20041 add     bx, word ptr td14_elem_map_main ;~ 0B93:0832
cs=0xb93;eip=0x000836; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 20042 mov     es, word ptr td14_elem_map_main+2 ;~ 0B93:0836
cs=0xb93;eip=0x00083a; 	T(MOV(al, *(raddr(es,bx))));	// 20043 mov     al, es:[bx] ;~ 0B93:083A
cs=0xb93;eip=0x00083d; 	X(MOV(*(raddr(ss,bp+elem_map_value)), al));	// 20044 mov     [bp+elem_map_value], al ;~ 0B93:083D
cs=0xb93;eip=0x000840; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_150))));	// 20045 mov     bx, [bp+var_150] ;~ 0B93:0840
cs=0xb93;eip=0x000844; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 20046 mov     bx, terrainrows[bx] ;~ 0B93:0844
cs=0xb93;eip=0x000848; 	T(ADD(bx, *(dw*)((dw*)(raddr(ss,bp+var_154)))));	// 20047 add     bx, word ptr [bp+var_154] ;~ 0B93:0848
cs=0xb93;eip=0x00084c; 	T(ADD(bx, *(dw*)(((db*)&td15_terr_map_main))));	// 20048 add     bx, word ptr td15_terr_map_main ;~ 0B93:084C
cs=0xb93;eip=0x000850; 	T(MOV(es, *(dw*)(((db*)&td15_terr_map_main)+2)));	// 20049 mov     es, word ptr td15_terr_map_main+2 ;~ 0B93:0850
cs=0xb93;eip=0x000854; 	T(MOV(al, *(raddr(es,bx))));	// 20050 mov     al, es:[bx] ;~ 0B93:0854
cs=0xb93;eip=0x000857; 	X(MOV(*(raddr(ss,bp+terr_map_value)), al));	// 20051 mov     [bp+terr_map_value], al ;~ 0B93:0857
cs=0xb93;eip=0x00085b; 	T(CMP(*(raddr(ss,bp+elem_map_value)), 0));	// 20052 cmp     [bp+elem_map_value], 0 ;~ 0B93:085B
cs=0xb93;eip=0x00085f; 	J(JNZ(loc_1a774));	// 20053 jnz     short loc_1A774 ;~ 0B93:085F
cs=0xb93;eip=0x000861; 	J(JMP(loc_1a7ff));	// 20054 jmp     loc_1A7FF ;~ 0B93:0861
loc_1a774:
	// 5549 
cs=0xb93;eip=0x000864; 	T(CMP(al, 7));	// 20058 cmp     al, 7 ;~ 0B93:0864
cs=0xb93;eip=0x000866; 	J(JC(loc_1a797));	// 20059 jb      short loc_1A797 ;~ 0B93:0866
cs=0xb93;eip=0x000868; 	T(CMP(al, 0x0B));	// 20060 cmp     al, 0Bh ;~ 0B93:0868
cs=0xb93;eip=0x00086a; 	J(JNC(loc_1a797));	// 20061 jnb     short loc_1A797 ;~ 0B93:086A
cs=0xb93;eip=0x00086c; 	T(MOV(al, *(raddr(ss,bp+elem_map_value))));	// 20062 mov     al, [bp+elem_map_value] ;~ 0B93:086C
cs=0xb93;eip=0x00086f; 	T(SUB(ah, ah));	// 20063 sub     ah, ah ;~ 0B93:086F
cs=0xb93;eip=0x000871; 	X(PUSH(ax));	// 20064 push    ax ;~ 0B93:0871
cs=0xb93;eip=0x000872; 	T(MOV(al, *(raddr(ss,bp+terr_map_value))));	// 20065 mov     al, [bp+terr_map_value] ;~ 0B93:0872
cs=0xb93;eip=0x000876; 	X(PUSH(ax));	// 20066 push    ax ;~ 0B93:0876
cs=0xb93;eip=0x000877; 	J(CALLF(subst_hillroad_track,0));	// 20067 call    subst_hillroad_track ;~ 0B93:0877
cs=0xb93;eip=0x00087c; 	T(ADD(sp, 4));	// 20068 add     sp, 4 ;~ 0B93:087C
cs=0xb93;eip=0x00087f; 	X(MOV(*(raddr(ss,bp+elem_map_value)), al));	// 20069 mov     [bp+elem_map_value], al ;~ 0B93:087F
cs=0xb93;eip=0x000882; 	X(MOV(*(raddr(ss,bp+terr_map_value)), 0));	// 20070 mov     [bp+terr_map_value], 0 ;~ 0B93:0882
loc_1a797:
	// 5550 
cs=0xb93;eip=0x000887; 	T(MOV(al, *(raddr(ss,bp+elem_map_value))));	// 20074 mov     al, [bp+elem_map_value] ;~ 0B93:0887
cs=0xb93;eip=0x00088a; 	T(SUB(ah, ah));	// 20075 sub     ah, ah ;~ 0B93:088A
cs=0xb93;eip=0x00088c; 	T(CMP(ax, 0x0FD));	// 20076 cmp     ax, 0FDh ; 'ı' ;~ 0B93:088C
cs=0xb93;eip=0x00088f; 	J(JZ(loc_1a7b0));	// 20077 jz      short loc_1A7B0 ;~ 0B93:088F
cs=0xb93;eip=0x000891; 	T(CMP(ax, 0x0FE));	// 20078 cmp     ax, 0FEh ; 'ş' ;~ 0B93:0891
cs=0xb93;eip=0x000894; 	J(JZ(loc_1a7b4));	// 20079 jz      short loc_1A7B4 ;~ 0B93:0894
cs=0xb93;eip=0x000896; 	T(CMP(ax, 0x0FF));	// 20080 cmp     ax, 0FFh ;~ 0B93:0896
cs=0xb93;eip=0x000899; 	J(JNZ(loc_1a7ae));	// 20081 jnz     short loc_1A7AE ;~ 0B93:0899
cs=0xb93;eip=0x00089b; 	J(JMP(loc_1a8ca));	// 20082 jmp     loc_1A8CA ;~ 0B93:089B
loc_1a7ae:
	// 5551 
cs=0xb93;eip=0x00089e; 	J(JMP(loc_1a7ff));	// 20086 jmp     short loc_1A7FF ;~ 0B93:089E
loc_1a7b0:
	// 5552 
cs=0xb93;eip=0x0008a0; 	X(DEC(*(raddr(ss,bp+var_f6))));	// 20090 dec     [bp+var_F6] ;~ 0B93:08A0
loc_1a7b4:
	// 5553 
cs=0xb93;eip=0x0008a4; 	X(DEC(*(raddr(ss,bp+var_102))));	// 20093 dec     [bp+var_102] ;~ 0B93:08A4
loc_1a7b8:
	// 5554 
cs=0xb93;eip=0x0008a8; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 20096 mov     al, [bp+var_F6] ;~ 0B93:08A8
cs=0xb93;eip=0x0008ac; 	T(CBW);	// 20097 cbw ;~ 0B93:08AC
cs=0xb93;eip=0x0008ad; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_154))), ax));	// 20098 mov     word ptr [bp+var_154], ax ;~ 0B93:08AD
cs=0xb93;eip=0x0008b1; 	T(MOV(al, *(raddr(ss,bp+var_102))));	// 20099 mov     al, [bp+var_102] ;~ 0B93:08B1
cs=0xb93;eip=0x0008b5; 	T(CBW);	// 20100 cbw ;~ 0B93:08B5
cs=0xb93;eip=0x0008b6; 	T(SHL(ax, 1));	// 20101 shl     ax, 1 ;~ 0B93:08B6
cs=0xb93;eip=0x0008b8; 	X(MOV(*(dw*)(raddr(ss,bp+var_150)), ax));	// 20102 mov     [bp+var_150], ax ;~ 0B93:08B8
cs=0xb93;eip=0x0008bc; 	T(MOV(bx, ax));	// 20103 mov     bx, ax ;~ 0B93:08BC
cs=0xb93;eip=0x0008be; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 20104 mov     bx, trackrows[bx] ;~ 0B93:08BE
cs=0xb93;eip=0x0008c2; 	T(ADD(bx, *(dw*)((dw*)(raddr(ss,bp+var_154)))));	// 20105 add     bx, word ptr [bp+var_154] ;~ 0B93:08C2
cs=0xb93;eip=0x0008c6; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 20106 add     bx, word ptr td14_elem_map_main ;~ 0B93:08C6
cs=0xb93;eip=0x0008ca; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 20107 mov     es, word ptr td14_elem_map_main+2 ;~ 0B93:08CA
cs=0xb93;eip=0x0008ce; 	T(MOV(al, *(raddr(es,bx))));	// 20108 mov     al, es:[bx] ;~ 0B93:08CE
cs=0xb93;eip=0x0008d1; 	X(MOV(*(raddr(ss,bp+elem_map_value)), al));	// 20109 mov     [bp+elem_map_value], al ;~ 0B93:08D1
cs=0xb93;eip=0x0008d4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_150))));	// 20110 mov     bx, [bp+var_150] ;~ 0B93:08D4
cs=0xb93;eip=0x0008d8; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 20111 mov     bx, terrainrows[bx] ;~ 0B93:08D8
cs=0xb93;eip=0x0008dc; 	T(ADD(bx, *(dw*)((dw*)(raddr(ss,bp+var_154)))));	// 20112 add     bx, word ptr [bp+var_154] ;~ 0B93:08DC
cs=0xb93;eip=0x0008e0; 	T(ADD(bx, *(dw*)(((db*)&td15_terr_map_main))));	// 20113 add     bx, word ptr td15_terr_map_main ;~ 0B93:08E0
cs=0xb93;eip=0x0008e4; 	T(MOV(es, *(dw*)(((db*)&td15_terr_map_main)+2)));	// 20114 mov     es, word ptr td15_terr_map_main+2 ;~ 0B93:08E4
cs=0xb93;eip=0x0008e8; 	T(MOV(al, *(raddr(es,bx))));	// 20115 mov     al, es:[bx] ;~ 0B93:08E8
cs=0xb93;eip=0x0008eb; 	X(MOV(*(raddr(ss,bp+terr_map_value)), al));	// 20116 mov     [bp+terr_map_value], al ;~ 0B93:08EB
loc_1a7ff:
	// 5555 
cs=0xb93;eip=0x0008ef; 	T(MOV(al, *(raddr(ss,bp+terr_map_value))));	// 20120 mov     al, [bp+terr_map_value] ;~ 0B93:08EF
cs=0xb93;eip=0x0008f3; 	X(MOV(*(raddr(ss,bp+si+var_1a)), al));	// 20121 mov     [bp+si+var_1A], al ;~ 0B93:08F3
cs=0xb93;eip=0x0008f6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_50))));	// 20122 mov     bx, [bp+var_50] ;~ 0B93:08F6
cs=0xb93;eip=0x0008f9; 	T(MOV(ax, si));	// 20123 mov     ax, si ;~ 0B93:08F9
cs=0xb93;eip=0x0008fb; 	T(MOV(cx, ax));	// 20124 mov     cx, ax ;~ 0B93:08FB
cs=0xb93;eip=0x0008fd; 	T(SHL(ax, 1));	// 20125 shl     ax, 1 ;~ 0B93:08FD
cs=0xb93;eip=0x0008ff; 	T(ADD(ax, cx));	// 20126 add     ax, cx ;~ 0B93:08FF
cs=0xb93;eip=0x000901; 	T(ADD(bx, ax));	// 20127 add     bx, ax ;~ 0B93:0901
cs=0xb93;eip=0x000903; 	T(MOV(al, *(raddr(ds,bx+2))));	// 20128 mov     al, [bx+2] ;~ 0B93:0903
cs=0xb93;eip=0x000906; 	X(MOV(*(raddr(ss,bp+si+var_bc)), al));	// 20129 mov     [bp+si+var_BC], al ;~ 0B93:0906
cs=0xb93;eip=0x00090a; 	T(CMP(*(raddr(ss,bp+elem_map_value)), 0));	// 20130 cmp     [bp+elem_map_value], 0 ;~ 0B93:090A
cs=0xb93;eip=0x00090e; 	J(JZ(loc_1a857));	// 20131 jz      short loc_1A857 ;~ 0B93:090E
cs=0xb93;eip=0x000910; 	T(CMP(timertestflag2, 0));	// 20132 cmp     timertestflag2, 0 ;~ 0B93:0910
cs=0xb93;eip=0x000915; 	J(JZ(loc_1a857));	// 20133 jz      short loc_1A857 ;~ 0B93:0915
cs=0xb93;eip=0x000917; 	T(MOV(al, *(raddr(ss,bp+elem_map_value))));	// 20134 mov     al, [bp+elem_map_value] ;~ 0B93:0917
cs=0xb93;eip=0x00091a; 	T(SUB(ah, ah));	// 20135 sub     ah, ah ;~ 0B93:091A
cs=0xb93;eip=0x00091c; 	T(MOV(bx, ax));	// 20136 mov     bx, ax ;~ 0B93:091C
cs=0xb93;eip=0x00091e; 	T(SHL(bx, 1));	// 20137 shl     bx, 1 ;~ 0B93:091E
cs=0xb93;eip=0x000920; 	T(ADD(bx, ax));	// 20138 add     bx, ax ;~ 0B93:0920
cs=0xb93;eip=0x000922; 	T(SHL(bx, 1));	// 20139 shl     bx, 1 ;~ 0B93:0922
cs=0xb93;eip=0x000924; 	T(ADD(bx, ax));	// 20140 add     bx, ax ;~ 0B93:0924
cs=0xb93;eip=0x000926; 	T(SHL(bx, 1));	// 20141 shl     bx, 1 ;~ 0B93:0926
cs=0xb93;eip=0x000928; 	T(CMP(*((&byte_3d814)+bx), 0x40));	// 20142 cmp     byte_3D814[bx], 40h ; '@' ;~ 0B93:0928
cs=0xb93;eip=0x00092d; 	J(JL(loc_1a857));	// 20143 jl      short loc_1A857 ;~ 0B93:092D
cs=0xb93;eip=0x00092f; 	T(MOV(al, *(raddr(ss,bp+var_d8))));	// 20144 mov     al, [bp+var_D8] ;~ 0B93:092F
cs=0xb93;eip=0x000933; 	T(CMP(*(raddr(ss,bp+var_f6)), al));	// 20145 cmp     [bp+var_F6], al ;~ 0B93:0933
cs=0xb93;eip=0x000937; 	J(JNZ(loc_1a853));	// 20146 jnz     short loc_1A853 ;~ 0B93:0937
cs=0xb93;eip=0x000939; 	T(MOV(al, *(raddr(ss,bp+var_e2))));	// 20147 mov     al, [bp+var_E2] ;~ 0B93:0939
cs=0xb93;eip=0x00093d; 	T(CMP(*(raddr(ss,bp+var_102)), al));	// 20148 cmp     [bp+var_102], al ;~ 0B93:093D
cs=0xb93;eip=0x000941; 	J(JZ(loc_1a857));	// 20149 jz      short loc_1A857 ;~ 0B93:0941
loc_1a853:
	// 5556 
cs=0xb93;eip=0x000943; 	X(MOV(*(raddr(ss,bp+elem_map_value)), 0));	// 20152 mov     [bp+elem_map_value], 0 ;~ 0B93:0943
loc_1a857:
	// 5557 
cs=0xb93;eip=0x000947; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 20156 mov     al, [bp+var_F6] ;~ 0B93:0947
cs=0xb93;eip=0x00094b; 	X(MOV(*(raddr(ss,bp+si+var_86)), al));	// 20157 mov     [bp+si+var_86], al ;~ 0B93:094B
cs=0xb93;eip=0x00094f; 	T(MOV(al, *(raddr(ss,bp+var_102))));	// 20158 mov     al, [bp+var_102] ;~ 0B93:094F
cs=0xb93;eip=0x000953; 	X(MOV(*(raddr(ss,bp+si+var_d4)), al));	// 20159 mov     [bp+si+var_D4], al ;~ 0B93:0953
cs=0xb93;eip=0x000957; 	T(MOV(al, *(raddr(ss,bp+elem_map_value))));	// 20160 mov     al, [bp+elem_map_value] ;~ 0B93:0957
cs=0xb93;eip=0x00095a; 	X(MOV(*(raddr(ss,bp+si+var_14c)), al));	// 20161 mov     [bp+si+var_14C], al ;~ 0B93:095A
cs=0xb93;eip=0x00095e; 	T(CMP(*(raddr(ss,bp+elem_map_value)), 0));	// 20162 cmp     [bp+elem_map_value], 0 ;~ 0B93:095E
cs=0xb93;eip=0x000962; 	J(JNZ(loc_1a877));	// 20163 jnz     short loc_1A877 ;~ 0B93:0962
cs=0xb93;eip=0x000964; 	J(JMP(loc_1a6fe));	// 20164 jmp     loc_1A6FE ;~ 0B93:0964
loc_1a877:
	// 5558 
cs=0xb93;eip=0x000967; 	T(MOV(al, *(raddr(ss,bp+elem_map_value))));	// 20168 mov     al, [bp+elem_map_value] ;~ 0B93:0967
cs=0xb93;eip=0x00096a; 	T(SUB(ah, ah));	// 20169 sub     ah, ah ;~ 0B93:096A
cs=0xb93;eip=0x00096c; 	T(MOV(bx, ax));	// 20170 mov     bx, ax ;~ 0B93:096C
cs=0xb93;eip=0x00096e; 	T(SHL(bx, 1));	// 20171 shl     bx, 1 ;~ 0B93:096E
cs=0xb93;eip=0x000970; 	T(ADD(bx, ax));	// 20172 add     bx, ax ;~ 0B93:0970
cs=0xb93;eip=0x000972; 	T(SHL(bx, 1));	// 20173 shl     bx, 1 ;~ 0B93:0972
cs=0xb93;eip=0x000974; 	T(ADD(bx, ax));	// 20174 add     bx, ax ;~ 0B93:0974
cs=0xb93;eip=0x000976; 	T(SHL(bx, 1));	// 20175 shl     bx, 1 ;~ 0B93:0976
cs=0xb93;eip=0x000978; 	T(MOV(al, *((&byte_3d813)+bx)));	// 20176 mov     al, byte_3D813[bx] ;~ 0B93:0978
cs=0xb93;eip=0x00097c; 	T(CBW);	// 20177 cbw ;~ 0B93:097C
cs=0xb93;eip=0x00097d; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), ax));	// 20178 mov     [bp+var_DE], ax ;~ 0B93:097D
cs=0xb93;eip=0x000981; 	T(OR(ax, ax));	// 20179 or      ax, ax ;~ 0B93:0981
cs=0xb93;eip=0x000983; 	J(JNZ(loc_1a898));	// 20180 jnz     short loc_1A898 ;~ 0B93:0983
cs=0xb93;eip=0x000985; 	J(JMP(loc_1a6fe));	// 20181 jmp     loc_1A6FE ;~ 0B93:0985
loc_1a898:
	// 5559 
cs=0xb93;eip=0x000988; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 20185 mov     al, [bp+var_F6] ;~ 0B93:0988
cs=0xb93;eip=0x00098c; 	T(SUB(al, *(raddr(ss,bp+var_10a))));	// 20186 sub     al, [bp+var_10A] ;~ 0B93:098C
cs=0xb93;eip=0x000990; 	X(MOV(*(raddr(ss,bp+var_100)), al));	// 20187 mov     [bp+var_100], al ;~ 0B93:0990
cs=0xb93;eip=0x000994; 	T(MOV(al, *(raddr(ss,bp+var_102))));	// 20188 mov     al, [bp+var_102] ;~ 0B93:0994
cs=0xb93;eip=0x000998; 	T(SUB(al, *(raddr(ss,bp+var_134))));	// 20189 sub     al, [bp+var_134] ;~ 0B93:0998
cs=0xb93;eip=0x00099c; 	X(MOV(*(raddr(ss,bp+var_12c)), al));	// 20190 mov     [bp+var_12C], al ;~ 0B93:099C
cs=0xb93;eip=0x0009a0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_de))));	// 20191 mov     ax, [bp+var_DE] ;~ 0B93:09A0
cs=0xb93;eip=0x0009a4; 	T(CMP(ax, 1));	// 20192 cmp     ax, 1 ;~ 0B93:09A4
cs=0xb93;eip=0x0009a7; 	J(JZ(loc_1a8d2));	// 20193 jz      short loc_1A8D2 ;~ 0B93:09A7
cs=0xb93;eip=0x0009a9; 	T(CMP(ax, 2));	// 20194 cmp     ax, 2 ;~ 0B93:09A9
cs=0xb93;eip=0x0009ac; 	J(JZ(loc_1a914));	// 20195 jz      short loc_1A914 ;~ 0B93:09AC
cs=0xb93;eip=0x0009ae; 	T(CMP(ax, 3));	// 20196 cmp     ax, 3 ;~ 0B93:09AE
cs=0xb93;eip=0x0009b1; 	J(JNZ(loc_1a8c6));	// 20197 jnz     short loc_1A8C6 ;~ 0B93:09B1
cs=0xb93;eip=0x0009b3; 	J(JMP(loc_1a960));	// 20198 jmp     loc_1A960 ;~ 0B93:09B3
loc_1a8c6:
	// 5560 
cs=0xb93;eip=0x0009b6; 	J(JMP(loc_1a6fe));	// 20202 jmp     loc_1A6FE ;~ 0B93:09B6
loc_1a8ca:
	// 5561 
cs=0xb93;eip=0x0009ba; 	X(DEC(*(raddr(ss,bp+var_f6))));	// 20207 dec     [bp+var_F6] ;~ 0B93:09BA
cs=0xb93;eip=0x0009be; 	J(JMP(loc_1a7b8));	// 20208 jmp     loc_1A7B8 ;~ 0B93:09BE
loc_1a8d2:
	// 5562 
cs=0xb93;eip=0x0009c2; 	T(SUB(di, di));	// 20213 sub     di, di ;~ 0B93:09C2
cs=0xb93;eip=0x0009c4; 	J(JMP(loc_1a8d7));	// 20214 jmp     short loc_1A8D7 ;~ 0B93:09C4
loc_1a8d6:
	// 5563 
cs=0xb93;eip=0x0009c6; 	T(INC(di));	// 20219 inc     di ;~ 0B93:09C6
loc_1a8d7:
	// 5564 
cs=0xb93;eip=0x0009c7; 	T(CMP(di, si));	// 20222 cmp     di, si ;~ 0B93:09C7
cs=0xb93;eip=0x0009c9; 	J(JL(loc_1a8de));	// 20223 jl      short loc_1A8DE ;~ 0B93:09C9
cs=0xb93;eip=0x0009cb; 	J(JMP(loc_1a6fe));	// 20224 jmp     loc_1A6FE ;~ 0B93:09CB
loc_1a8de:
	// 5565 
cs=0xb93;eip=0x0009ce; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_50))));	// 20228 mov     ax, [bp+var_50] ;~ 0B93:09CE
cs=0xb93;eip=0x0009d1; 	T(MOV(cx, di));	// 20229 mov     cx, di ;~ 0B93:09D1
cs=0xb93;eip=0x0009d3; 	T(MOV(dx, cx));	// 20230 mov     dx, cx ;~ 0B93:09D3
cs=0xb93;eip=0x0009d5; 	T(SHL(cx, 1));	// 20231 shl     cx, 1 ;~ 0B93:09D5
cs=0xb93;eip=0x0009d7; 	T(ADD(cx, dx));	// 20232 add     cx, dx ;~ 0B93:09D7
cs=0xb93;eip=0x0009d9; 	T(ADD(ax, cx));	// 20233 add     ax, cx ;~ 0B93:09D9
cs=0xb93;eip=0x0009db; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_154))), ax));	// 20234 mov     word ptr [bp+var_154], ax ;~ 0B93:09DB
cs=0xb93;eip=0x0009df; 	T(MOV(bx, ax));	// 20235 mov     bx, ax ;~ 0B93:09DF
cs=0xb93;eip=0x0009e1; 	T(MOV(al, *(raddr(ss,bp+var_100))));	// 20236 mov     al, [bp+var_100] ;~ 0B93:09E1
cs=0xb93;eip=0x0009e5; 	T(CMP(*(raddr(ds,bx)), al));	// 20237 cmp     [bx], al ;~ 0B93:09E5
cs=0xb93;eip=0x0009e7; 	J(JNZ(loc_1a8d6));	// 20238 jnz     short loc_1A8D6 ;~ 0B93:09E7
cs=0xb93;eip=0x0009e9; 	T(MOV(al, *(raddr(ss,bp+var_12c))));	// 20239 mov     al, [bp+var_12C] ;~ 0B93:09E9
cs=0xb93;eip=0x0009ed; 	T(CMP(*(raddr(ds,bx+1)), al));	// 20240 cmp     [bx+1], al ;~ 0B93:09ED
cs=0xb93;eip=0x0009f0; 	J(JZ(loc_1a90e));	// 20241 jz      short loc_1A90E ;~ 0B93:09F0
cs=0xb93;eip=0x0009f2; 	T(CBW);	// 20242 cbw ;~ 0B93:09F2
cs=0xb93;eip=0x0009f3; 	T(INC(ax));	// 20243 inc     ax ;~ 0B93:09F3
cs=0xb93;eip=0x0009f4; 	T(MOV(cx, ax));	// 20244 mov     cx, ax ;~ 0B93:09F4
cs=0xb93;eip=0x0009f6; 	T(MOV(al, *(raddr(ds,bx+1))));	// 20245 mov     al, [bx+1] ;~ 0B93:09F6
cs=0xb93;eip=0x0009f9; 	T(CBW);	// 20246 cbw ;~ 0B93:09F9
cs=0xb93;eip=0x0009fa; 	T(CMP(ax, cx));	// 20247 cmp     ax, cx ;~ 0B93:09FA
cs=0xb93;eip=0x0009fc; 	J(JNZ(loc_1a8d6));	// 20248 jnz     short loc_1A8D6 ;~ 0B93:09FC
loc_1a90e:
	// 5566 
cs=0xb93;eip=0x0009fe; 	X(MOV(*(raddr(ss,bp+di+var_32)), 1));	// 20251 mov     [bp+di+var_32], 1 ;~ 0B93:09FE
cs=0xb93;eip=0x000a02; 	J(JMP(loc_1a8d6));	// 20252 jmp     short loc_1A8D6 ;~ 0B93:0A02
loc_1a914:
	// 5567 
cs=0xb93;eip=0x000a04; 	T(SUB(di, di));	// 20256 sub     di, di ;~ 0B93:0A04
cs=0xb93;eip=0x000a06; 	J(JMP(loc_1a919));	// 20257 jmp     short loc_1A919 ;~ 0B93:0A06
loc_1a918:
	// 5568 
cs=0xb93;eip=0x000a08; 	T(INC(di));	// 20262 inc     di ;~ 0B93:0A08
loc_1a919:
	// 5569 
cs=0xb93;eip=0x000a09; 	T(CMP(di, si));	// 20265 cmp     di, si ;~ 0B93:0A09
cs=0xb93;eip=0x000a0b; 	J(JL(loc_1a920));	// 20266 jl      short loc_1A920 ;~ 0B93:0A0B
cs=0xb93;eip=0x000a0d; 	J(JMP(loc_1a6fe));	// 20267 jmp     loc_1A6FE ;~ 0B93:0A0D
loc_1a920:
	// 5570 
cs=0xb93;eip=0x000a10; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_50))));	// 20271 mov     ax, [bp+var_50] ;~ 0B93:0A10
cs=0xb93;eip=0x000a13; 	T(MOV(cx, di));	// 20272 mov     cx, di ;~ 0B93:0A13
cs=0xb93;eip=0x000a15; 	T(MOV(dx, cx));	// 20273 mov     dx, cx ;~ 0B93:0A15
cs=0xb93;eip=0x000a17; 	T(SHL(cx, 1));	// 20274 shl     cx, 1 ;~ 0B93:0A17
cs=0xb93;eip=0x000a19; 	T(ADD(cx, dx));	// 20275 add     cx, dx ;~ 0B93:0A19
cs=0xb93;eip=0x000a1b; 	T(ADD(ax, cx));	// 20276 add     ax, cx ;~ 0B93:0A1B
cs=0xb93;eip=0x000a1d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_154))), ax));	// 20277 mov     word ptr [bp+var_154], ax ;~ 0B93:0A1D
cs=0xb93;eip=0x000a21; 	T(MOV(bx, ax));	// 20278 mov     bx, ax ;~ 0B93:0A21
cs=0xb93;eip=0x000a23; 	T(MOV(al, *(raddr(ss,bp+var_12c))));	// 20279 mov     al, [bp+var_12C] ;~ 0B93:0A23
cs=0xb93;eip=0x000a27; 	T(CMP(*(raddr(ds,bx+1)), al));	// 20280 cmp     [bx+1], al ;~ 0B93:0A27
cs=0xb93;eip=0x000a2a; 	J(JNZ(loc_1a918));	// 20281 jnz     short loc_1A918 ;~ 0B93:0A2A
cs=0xb93;eip=0x000a2c; 	T(MOV(al, *(raddr(ds,bx))));	// 20282 mov     al, [bx] ;~ 0B93:0A2C
cs=0xb93;eip=0x000a2e; 	X(MOV(*(db*)(raddr(ss,bp+var_150)), al));	// 20283 mov     byte ptr [bp+var_150], al ;~ 0B93:0A2E
cs=0xb93;eip=0x000a32; 	T(MOV(al, *(raddr(ss,bp+var_100))));	// 20284 mov     al, [bp+var_100] ;~ 0B93:0A32
cs=0xb93;eip=0x000a36; 	T(CMP(*(db*)(raddr(ss,bp+var_150)), al));	// 20285 cmp     byte ptr [bp+var_150], al ;~ 0B93:0A36
cs=0xb93;eip=0x000a3a; 	J(JZ(loc_1a959));	// 20286 jz      short loc_1A959 ;~ 0B93:0A3A
cs=0xb93;eip=0x000a3c; 	T(CBW);	// 20287 cbw ;~ 0B93:0A3C
cs=0xb93;eip=0x000a3d; 	T(INC(ax));	// 20288 inc     ax ;~ 0B93:0A3D
cs=0xb93;eip=0x000a3e; 	T(MOV(cx, ax));	// 20289 mov     cx, ax ;~ 0B93:0A3E
cs=0xb93;eip=0x000a40; 	T(MOV(al, *(db*)(raddr(ss,bp+var_150))));	// 20290 mov     al, byte ptr [bp+var_150] ;~ 0B93:0A40
cs=0xb93;eip=0x000a44; 	T(CBW);	// 20291 cbw ;~ 0B93:0A44
cs=0xb93;eip=0x000a45; 	T(CMP(cx, ax));	// 20292 cmp     cx, ax ;~ 0B93:0A45
cs=0xb93;eip=0x000a47; 	J(JNZ(loc_1a918));	// 20293 jnz     short loc_1A918 ;~ 0B93:0A47
loc_1a959:
	// 5571 
cs=0xb93;eip=0x000a49; 	X(MOV(*(raddr(ss,bp+di+var_32)), 1));	// 20296 mov     [bp+di+var_32], 1 ;~ 0B93:0A49
cs=0xb93;eip=0x000a4d; 	J(JMP(loc_1a918));	// 20297 jmp     short loc_1A918 ;~ 0B93:0A4D
loc_1a960:
	// 5572 
cs=0xb93;eip=0x000a50; 	T(SUB(di, di));	// 20302 sub     di, di ;~ 0B93:0A50
cs=0xb93;eip=0x000a52; 	J(JMP(loc_1a965));	// 20303 jmp     short loc_1A965 ;~ 0B93:0A52
loc_1a964:
	// 5573 
cs=0xb93;eip=0x000a54; 	T(INC(di));	// 20308 inc     di ;~ 0B93:0A54
loc_1a965:
	// 5574 
cs=0xb93;eip=0x000a55; 	T(CMP(di, si));	// 20311 cmp     di, si ;~ 0B93:0A55
cs=0xb93;eip=0x000a57; 	J(JL(loc_1a96c));	// 20312 jl      short loc_1A96C ;~ 0B93:0A57
cs=0xb93;eip=0x000a59; 	J(JMP(loc_1a6fe));	// 20313 jmp     loc_1A6FE ;~ 0B93:0A59
loc_1a96c:
	// 5575 
cs=0xb93;eip=0x000a5c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_50))));	// 20317 mov     bx, [bp+var_50] ;~ 0B93:0A5C
cs=0xb93;eip=0x000a5f; 	T(MOV(ax, di));	// 20318 mov     ax, di ;~ 0B93:0A5F
cs=0xb93;eip=0x000a61; 	T(MOV(cx, ax));	// 20319 mov     cx, ax ;~ 0B93:0A61
cs=0xb93;eip=0x000a63; 	T(SHL(ax, 1));	// 20320 shl     ax, 1 ;~ 0B93:0A63
cs=0xb93;eip=0x000a65; 	T(ADD(ax, cx));	// 20321 add     ax, cx ;~ 0B93:0A65
cs=0xb93;eip=0x000a67; 	T(ADD(bx, ax));	// 20322 add     bx, ax ;~ 0B93:0A67
cs=0xb93;eip=0x000a69; 	T(MOV(al, *(raddr(ds,bx))));	// 20323 mov     al, [bx] ;~ 0B93:0A69
cs=0xb93;eip=0x000a6b; 	X(MOV(*(db*)(raddr(ss,bp+var_154)), al));	// 20324 mov     byte ptr [bp+var_154], al ;~ 0B93:0A6B
cs=0xb93;eip=0x000a6f; 	T(MOV(al, *(raddr(ss,bp+var_100))));	// 20325 mov     al, [bp+var_100] ;~ 0B93:0A6F
cs=0xb93;eip=0x000a73; 	T(CMP(*(db*)(raddr(ss,bp+var_154)), al));	// 20326 cmp     byte ptr [bp+var_154], al ;~ 0B93:0A73
cs=0xb93;eip=0x000a77; 	J(JZ(loc_1a996));	// 20327 jz      short loc_1A996 ;~ 0B93:0A77
cs=0xb93;eip=0x000a79; 	T(CBW);	// 20328 cbw ;~ 0B93:0A79
cs=0xb93;eip=0x000a7a; 	T(INC(ax));	// 20329 inc     ax ;~ 0B93:0A7A
cs=0xb93;eip=0x000a7b; 	T(MOV(cx, ax));	// 20330 mov     cx, ax ;~ 0B93:0A7B
cs=0xb93;eip=0x000a7d; 	T(MOV(al, *(db*)(raddr(ss,bp+var_154))));	// 20331 mov     al, byte ptr [bp+var_154] ;~ 0B93:0A7D
cs=0xb93;eip=0x000a81; 	T(CBW);	// 20332 cbw ;~ 0B93:0A81
cs=0xb93;eip=0x000a82; 	T(CMP(cx, ax));	// 20333 cmp     cx, ax ;~ 0B93:0A82
cs=0xb93;eip=0x000a84; 	J(JNZ(loc_1a964));	// 20334 jnz     short loc_1A964 ;~ 0B93:0A84
loc_1a996:
	// 5576 
cs=0xb93;eip=0x000a86; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_50))));	// 20337 mov     bx, [bp+var_50] ;~ 0B93:0A86
cs=0xb93;eip=0x000a89; 	T(MOV(ax, di));	// 20338 mov     ax, di ;~ 0B93:0A89
cs=0xb93;eip=0x000a8b; 	T(MOV(cx, ax));	// 20339 mov     cx, ax ;~ 0B93:0A8B
cs=0xb93;eip=0x000a8d; 	T(SHL(ax, 1));	// 20340 shl     ax, 1 ;~ 0B93:0A8D
cs=0xb93;eip=0x000a8f; 	T(ADD(ax, cx));	// 20341 add     ax, cx ;~ 0B93:0A8F
cs=0xb93;eip=0x000a91; 	T(ADD(bx, ax));	// 20342 add     bx, ax ;~ 0B93:0A91
cs=0xb93;eip=0x000a93; 	T(MOV(al, *(raddr(ds,bx+1))));	// 20343 mov     al, [bx+1] ;~ 0B93:0A93
cs=0xb93;eip=0x000a96; 	X(MOV(*(db*)(raddr(ss,bp+var_154)), al));	// 20344 mov     byte ptr [bp+var_154], al ;~ 0B93:0A96
cs=0xb93;eip=0x000a9a; 	T(MOV(al, *(raddr(ss,bp+var_12c))));	// 20345 mov     al, [bp+var_12C] ;~ 0B93:0A9A
cs=0xb93;eip=0x000a9e; 	T(CMP(*(db*)(raddr(ss,bp+var_154)), al));	// 20346 cmp     byte ptr [bp+var_154], al ;~ 0B93:0A9E
cs=0xb93;eip=0x000aa2; 	J(JZ(loc_1a9c1));	// 20347 jz      short loc_1A9C1 ;~ 0B93:0AA2
cs=0xb93;eip=0x000aa4; 	T(CBW);	// 20348 cbw ;~ 0B93:0AA4
cs=0xb93;eip=0x000aa5; 	T(INC(ax));	// 20349 inc     ax ;~ 0B93:0AA5
cs=0xb93;eip=0x000aa6; 	T(MOV(cx, ax));	// 20350 mov     cx, ax ;~ 0B93:0AA6
cs=0xb93;eip=0x000aa8; 	T(MOV(al, *(db*)(raddr(ss,bp+var_154))));	// 20351 mov     al, byte ptr [bp+var_154] ;~ 0B93:0AA8
cs=0xb93;eip=0x000aac; 	T(CBW);	// 20352 cbw ;~ 0B93:0AAC
cs=0xb93;eip=0x000aad; 	T(CMP(cx, ax));	// 20353 cmp     cx, ax ;~ 0B93:0AAD
cs=0xb93;eip=0x000aaf; 	J(JNZ(loc_1a964));	// 20354 jnz     short loc_1A964 ;~ 0B93:0AAF
loc_1a9c1:
	// 5577 
cs=0xb93;eip=0x000ab1; 	X(MOV(*(raddr(ss,bp+di+var_32)), 1));	// 20357 mov     [bp+di+var_32], 1 ;~ 0B93:0AB1
cs=0xb93;eip=0x000ab5; 	J(JMP(loc_1a964));	// 20358 jmp     short loc_1A964 ;~ 0B93:0AB5
loc_1a9c8:
	// 5578 
cs=0xb93;eip=0x000ab8; 	X(MOV(*(raddr(ss,bp+var_3c)), 0x0FF));	// 20363 mov     [bp+var_3C], 0FFh ;~ 0B93:0AB8
cs=0xb93;eip=0x000abc; 	X(MOV(*(dw*)(raddr(ss,bp+var_6c)), 0));	// 20364 mov     [bp+var_6C], 0 ;~ 0B93:0ABC
cs=0xb93;eip=0x000ac1; 	T(CMP(cameramode, 0));	// 20365 cmp     cameramode, 0 ;~ 0B93:0AC1
cs=0xb93;eip=0x000ac6; 	J(JNZ(loc_1a9e2));	// 20366 jnz     short loc_1A9E2 ;~ 0B93:0AC6
cs=0xb93;eip=0x000ac8; 	T(CMP(followopponentflag, 0));	// 20367 cmp     followOpponentFlag, 0 ;~ 0B93:0AC8
cs=0xb93;eip=0x000acd; 	J(JNZ(loc_1a9e2));	// 20368 jnz     short loc_1A9E2 ;~ 0B93:0ACD
cs=0xb93;eip=0x000acf; 	J(JMP(loc_1ab65));	// 20369 jmp     loc_1AB65 ;~ 0B93:0ACF
loc_1a9e2:
	// 5579 
cs=0xb93;eip=0x000ad2; 	T(CMP(byte_446af, 2));	// 20374 cmp     byte_446AF, 2 ;~ 0B93:0AD2
cs=0xb93;eip=0x000ad7; 	J(JNZ(loc_1a9ec));	// 20375 jnz     short loc_1A9EC ;~ 0B93:0AD7
cs=0xb93;eip=0x000ad9; 	J(JMP(loc_1ab65));	// 20376 jmp     loc_1AB65 ;~ 0B93:0AD9
loc_1a9ec:
	// 5580 
cs=0xb93;eip=0x000adc; 	T(SUB(ax, ax));	// 20380 sub     ax, ax ;~ 0B93:0ADC
cs=0xb93;eip=0x000ade; 	X(PUSH(ax));	// 20381 push    ax ;~ 0B93:0ADE
cs=0xb93;eip=0x000adf; 	T(MOV(ax, word_445fe));	// 20382 mov     ax, word_445FE ;~ 0B93:0ADF
cs=0xb93;eip=0x000ae2; 	T(NEG(ax));	// 20383 neg     ax ;~ 0B93:0AE2
cs=0xb93;eip=0x000ae4; 	X(PUSH(ax));	// 20384 push    ax ;~ 0B93:0AE4
cs=0xb93;eip=0x000ae5; 	T(MOV(ax, word_44600));	// 20385 mov     ax, word_44600 ;~ 0B93:0AE5
cs=0xb93;eip=0x000ae8; 	T(NEG(ax));	// 20386 neg     ax ;~ 0B93:0AE8
cs=0xb93;eip=0x000aea; 	X(PUSH(ax));	// 20387 push    ax ;~ 0B93:0AEA
cs=0xb93;eip=0x000aeb; 	T(MOV(ax, word_44602));	// 20388 mov     ax, word_44602 ;~ 0B93:0AEB
cs=0xb93;eip=0x000aee; 	T(NEG(ax));	// 20389 neg     ax ;~ 0B93:0AEE
cs=0xb93;eip=0x000af0; 	X(PUSH(ax));	// 20390 push    ax ;~ 0B93:0AF0
cs=0xb93;eip=0x000af1; 	J(CALLF(mat_rot_zxy,0));	// 20391 call    mat_rot_zxy ;~ 0B93:0AF1
cs=0xb93;eip=0x000af6; 	T(ADD(sp, 8));	// 20392 add     sp, 8 ;~ 0B93:0AF6
cs=0xb93;eip=0x000af9; 	X(MOV(*(dw*)(raddr(ss,bp+var_d6)), ax));	// 20393 mov     [bp+var_D6], ax ;~ 0B93:0AF9
cs=0xb93;eip=0x000afd; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), 0x0FFFF));	// 20394 mov     [bp+var_DE], 0FFFFh ;~ 0B93:0AFD
cs=0xb93;eip=0x000b03; 	T(MOV(di, 0x0FFFF));	// 20395 mov     di, 0FFFFh ;~ 0B93:0B03
cs=0xb93;eip=0x000b06; 	X(MOV(*(dw*)(raddr(ss,bp+var_a2)), 0));	// 20396 mov     [bp+var_A2], 0 ;~ 0B93:0B06
cs=0xb93;eip=0x000b0c; 	J(JMP(loc_1aa8c));	// 20397 jmp     short loc_1AA8C ;~ 0B93:0B0C
loc_1aa1e:
	// 5581 
cs=0xb93;eip=0x000b0e; 	T(DEC(si));	// 20402 dec     si ;~ 0B93:0B0E
loc_1aa1f:
	// 5582 
cs=0xb93;eip=0x000b0f; 	T(CMP(*(dw*)(raddr(ss,bp+var_de)), si));	// 20405 cmp     [bp+var_DE], si ;~ 0B93:0B0F
cs=0xb93;eip=0x000b13; 	J(JGE(loc_1aa88));	// 20406 jge     short loc_1AA88 ;~ 0B93:0B13
cs=0xb93;eip=0x000b15; 	T(CMP(*(raddr(ss,bp+si+var_32)), 2));	// 20407 cmp     [bp+si+var_32], 2 ;~ 0B93:0B15
cs=0xb93;eip=0x000b19; 	J(JZ(loc_1aa1e));	// 20408 jz      short loc_1AA1E ;~ 0B93:0B19
cs=0xb93;eip=0x000b1b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_50))));	// 20409 mov     ax, [bp+var_50] ;~ 0B93:0B1B
cs=0xb93;eip=0x000b1e; 	T(MOV(cx, si));	// 20410 mov     cx, si ;~ 0B93:0B1E
cs=0xb93;eip=0x000b20; 	T(MOV(dx, cx));	// 20411 mov     dx, cx ;~ 0B93:0B20
cs=0xb93;eip=0x000b22; 	T(SHL(cx, 1));	// 20412 shl     cx, 1 ;~ 0B93:0B22
cs=0xb93;eip=0x000b24; 	T(ADD(cx, dx));	// 20413 add     cx, dx ;~ 0B93:0B24
cs=0xb93;eip=0x000b26; 	T(ADD(ax, cx));	// 20414 add     ax, cx ;~ 0B93:0B26
cs=0xb93;eip=0x000b28; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_154))), ax));	// 20415 mov     word ptr [bp+var_154], ax ;~ 0B93:0B28
cs=0xb93;eip=0x000b2c; 	T(MOV(al, *(raddr(ss,bp+var_10a))));	// 20416 mov     al, [bp+var_10A] ;~ 0B93:0B2C
cs=0xb93;eip=0x000b30; 	T(CBW);	// 20417 cbw ;~ 0B93:0B30
cs=0xb93;eip=0x000b31; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_154)))));	// 20418 mov     bx, word ptr [bp+var_154] ;~ 0B93:0B31
cs=0xb93;eip=0x000b35; 	T(MOV(cx, ax));	// 20419 mov     cx, ax ;~ 0B93:0B35
cs=0xb93;eip=0x000b37; 	T(MOV(al, *(raddr(ds,bx))));	// 20420 mov     al, [bx] ;~ 0B93:0B37
cs=0xb93;eip=0x000b39; 	T(CBW);	// 20421 cbw ;~ 0B93:0B39
cs=0xb93;eip=0x000b3a; 	T(ADD(ax, cx));	// 20422 add     ax, cx ;~ 0B93:0B3A
cs=0xb93;eip=0x000b3c; 	T(MOV(cx, ax));	// 20423 mov     cx, ax ;~ 0B93:0B3C
cs=0xb93;eip=0x000b3e; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 20424 mov     al, [bp+var_F6] ;~ 0B93:0B3E
cs=0xb93;eip=0x000b42; 	T(CBW);	// 20425 cbw ;~ 0B93:0B42
cs=0xb93;eip=0x000b43; 	T(CMP(cx, ax));	// 20426 cmp     cx, ax ;~ 0B93:0B43
cs=0xb93;eip=0x000b45; 	J(JNZ(loc_1aa1e));	// 20427 jnz     short loc_1AA1E ;~ 0B93:0B45
cs=0xb93;eip=0x000b47; 	T(MOV(al, *(raddr(ss,bp+var_134))));	// 20428 mov     al, [bp+var_134] ;~ 0B93:0B47
cs=0xb93;eip=0x000b4b; 	T(CBW);	// 20429 cbw ;~ 0B93:0B4B
cs=0xb93;eip=0x000b4c; 	T(MOV(cx, ax));	// 20430 mov     cx, ax ;~ 0B93:0B4C
cs=0xb93;eip=0x000b4e; 	T(MOV(al, *(raddr(ds,bx+1))));	// 20431 mov     al, [bx+1] ;~ 0B93:0B4E
cs=0xb93;eip=0x000b51; 	T(CBW);	// 20432 cbw ;~ 0B93:0B51
cs=0xb93;eip=0x000b52; 	T(ADD(ax, cx));	// 20433 add     ax, cx ;~ 0B93:0B52
cs=0xb93;eip=0x000b54; 	T(MOV(cx, ax));	// 20434 mov     cx, ax ;~ 0B93:0B54
cs=0xb93;eip=0x000b56; 	T(MOV(al, *(raddr(ss,bp+var_102))));	// 20435 mov     al, [bp+var_102] ;~ 0B93:0B56
cs=0xb93;eip=0x000b5a; 	T(CBW);	// 20436 cbw ;~ 0B93:0B5A
cs=0xb93;eip=0x000b5b; 	T(CMP(cx, ax));	// 20437 cmp     cx, ax ;~ 0B93:0B5B
cs=0xb93;eip=0x000b5d; 	J(JNZ(loc_1aa1e));	// 20438 jnz     short loc_1AA1E ;~ 0B93:0B5D
cs=0xb93;eip=0x000b5f; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 20439 mov     al, [bp+var_F6] ;~ 0B93:0B5F
cs=0xb93;eip=0x000b63; 	X(MOV(*(raddr(ss,bp+var_3c)), al));	// 20440 mov     [bp+var_3C], al ;~ 0B93:0B63
cs=0xb93;eip=0x000b66; 	T(MOV(al, *(raddr(ss,bp+var_102))));	// 20441 mov     al, [bp+var_102] ;~ 0B93:0B66
cs=0xb93;eip=0x000b6a; 	X(MOV(*(raddr(ss,bp+var_60)), al));	// 20442 mov     [bp+var_60], al ;~ 0B93:0B6A
cs=0xb93;eip=0x000b6d; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), si));	// 20443 mov     [bp+var_DE], si ;~ 0B93:0B6D
cs=0xb93;eip=0x000b71; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_a2))));	// 20444 mov     di, [bp+var_A2] ;~ 0B93:0B71
cs=0xb93;eip=0x000b75; 	J(JMP(loc_1aa1e));	// 20445 jmp     short loc_1AA1E ;~ 0B93:0B75
loc_1aa88:
	// 5583 
cs=0xb93;eip=0x000b78; 	X(INC(*(dw*)(raddr(ss,bp+var_a2))));	// 20450 inc     [bp+var_A2] ;~ 0B93:0B78
loc_1aa8c:
	// 5584 
cs=0xb93;eip=0x000b7c; 	T(CMP(*(dw*)(raddr(ss,bp+var_a2)), 4));	// 20453 cmp     [bp+var_A2], 4 ;~ 0B93:0B7C
cs=0xb93;eip=0x000b81; 	J(JGE(loc_1aaf4));	// 20454 jge     short loc_1AAF4 ;~ 0B93:0B81
cs=0xb93;eip=0x000b83; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a2))));	// 20455 mov     bx, [bp+var_A2] ;~ 0B93:0B83
cs=0xb93;eip=0x000b87; 	T(MOV(ax, bx));	// 20456 mov     ax, bx ;~ 0B93:0B87
cs=0xb93;eip=0x000b89; 	T(SHL(bx, 1));	// 20457 shl     bx, 1 ;~ 0B93:0B89
cs=0xb93;eip=0x000b8b; 	T(ADD(bx, ax));	// 20458 add     bx, ax ;~ 0B93:0B8B
cs=0xb93;eip=0x000b8d; 	T(SHL(bx, 1));	// 20459 shl     bx, 1 ;~ 0B93:0B8D
cs=0xb93;eip=0x000b8f; 	X(PUSH(si));	// 20460 push    si ;~ 0B93:0B8F
cs=0xb93;eip=0x000b90; 	X(PUSH(di));	// 20461 push    di ;~ 0B93:0B90
cs=0xb93;eip=0x000b91; 	T(di = bp+var_f2);	// 20462 lea     di, [bp+var_F2] ;~ 0B93:0B91
cs=0xb93;eip=0x000b95; 	T(si = offset(dseg,unk_45f2c)+bx);	// 20463 lea     si, unk_45F2C[bx] ;~ 0B93:0B95
cs=0xb93;eip=0x000b99; 	X(PUSH(ss));	// 20464 push    ss ;~ 0B93:0B99
cs=0xb93;eip=0x000b9a; 	X(POP(es));	// 20465 pop     es ;~ 0B93:0B9A
cs=0xb93;eip=0x000b9b; 	X(MOVSW);	// 20466 movsw ;~ 0B93:0B9B
cs=0xb93;eip=0x000b9c; 	X(MOVSW);	// 20467 movsw ;~ 0B93:0B9C
cs=0xb93;eip=0x000b9d; 	X(MOVSW);	// 20468 movsw ;~ 0B93:0B9D
cs=0xb93;eip=0x000b9e; 	X(POP(di));	// 20469 pop     di ;~ 0B93:0B9E
cs=0xb93;eip=0x000b9f; 	X(POP(si));	// 20470 pop     si ;~ 0B93:0B9F
cs=0xb93;eip=0x000ba0; 	T(ax = bp+var_44);	// 20471 lea     ax, [bp+var_44] ;~ 0B93:0BA0
cs=0xb93;eip=0x000ba3; 	X(PUSH(ax));	// 20472 push    ax ;~ 0B93:0BA3
cs=0xb93;eip=0x000ba4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_d6))));	// 20473 push    [bp+var_D6] ;~ 0B93:0BA4
cs=0xb93;eip=0x000ba8; 	T(ax = bp+var_f2);	// 20474 lea     ax, [bp+var_F2] ;~ 0B93:0BA8
cs=0xb93;eip=0x000bac; 	X(PUSH(ax));	// 20475 push    ax ;~ 0B93:0BAC
cs=0xb93;eip=0x000bad; 	J(CALLF(mat_mul_vector,0));	// 20476 call    mat_mul_vector  ; rotating car wheels, maybe? ;~ 0B93:0BAD
cs=0xb93;eip=0x000bb2; 	T(ADD(sp, 6));	// 20477 add     sp, 6 ;~ 0B93:0BB2
cs=0xb93;eip=0x000bb5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_44))));	// 20478 mov     ax, [bp+var_44] ;~ 0B93:0BB5
cs=0xb93;eip=0x000bb8; 	T(CWD);	// 20479 cwd ;~ 0B93:0BB8
cs=0xb93;eip=0x000bb9; 	T(ADD(ax, word_445e6));	// 20480 add     ax, word_445E6 ;~ 0B93:0BB9
cs=0xb93;eip=0x000bbd; 	T(ADC(dx, word_445e8));	// 20481 adc     dx, word_445E8 ;~ 0B93:0BBD
cs=0xb93;eip=0x000bc1; 	T(MOV(ax, dx));	// 20482 mov     ax, dx ;~ 0B93:0BC1
cs=0xb93;eip=0x000bc3; 	X(MOV(*(raddr(ss,bp+var_f6)), al));	// 20483 mov     [bp+var_F6], al ;~ 0B93:0BC3
cs=0xb93;eip=0x000bc7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_40))));	// 20484 mov     ax, [bp+var_40] ;~ 0B93:0BC7
cs=0xb93;eip=0x000bca; 	T(CWD);	// 20485 cwd ;~ 0B93:0BCA
cs=0xb93;eip=0x000bcb; 	T(ADD(ax, word_445ee));	// 20486 add     ax, word_445EE ;~ 0B93:0BCB
cs=0xb93;eip=0x000bcf; 	T(ADC(dx, word_445f0));	// 20487 adc     dx, word_445F0 ;~ 0B93:0BCF
cs=0xb93;eip=0x000bd3; 	T(MOV(ax, dx));	// 20488 mov     ax, dx ;~ 0B93:0BD3
cs=0xb93;eip=0x000bd5; 	T(SUB(al, 0x1D));	// 20489 sub     al, 1Dh ;~ 0B93:0BD5
cs=0xb93;eip=0x000bd7; 	T(NEG(al));	// 20490 neg     al ;~ 0B93:0BD7
cs=0xb93;eip=0x000bd9; 	X(MOV(*(raddr(ss,bp+var_102)), al));	// 20491 mov     [bp+var_102], al ;~ 0B93:0BD9
cs=0xb93;eip=0x000bdd; 	T(MOV(si, 0x16));	// 20492 mov     si, 16h ;~ 0B93:0BDD
cs=0xb93;eip=0x000be0; 	J(JMP(loc_1aa1f));	// 20493 jmp     loc_1AA1F ;~ 0B93:0BE0
loc_1aaf4:
	// 5585 
cs=0xb93;eip=0x000be4; 	T(CMP(di, 0x0FFFF));	// 20498 cmp     di, 0FFFFh ;~ 0B93:0BE4
cs=0xb93;eip=0x000be7; 	J(JZ(loc_1ab65));	// 20499 jz      short loc_1AB65 ;~ 0B93:0BE7
cs=0xb93;eip=0x000be9; 	T(CMP(byte_446a8, 4));	// 20500 cmp     byte_446A8, 4 ;~ 0B93:0BE9
cs=0xb93;eip=0x000bee; 	J(JNZ(loc_1ab15));	// 20501 jnz     short loc_1AB15 ;~ 0B93:0BEE
cs=0xb93;eip=0x000bf0; 	T(CMP(byte_446a9, 4));	// 20502 cmp     byte_446A9, 4 ;~ 0B93:0BF0
cs=0xb93;eip=0x000bf5; 	J(JNZ(loc_1ab15));	// 20503 jnz     short loc_1AB15 ;~ 0B93:0BF5
cs=0xb93;eip=0x000bf7; 	T(CMP(byte_446aa, 4));	// 20504 cmp     byte_446AA, 4 ;~ 0B93:0BF7
cs=0xb93;eip=0x000bfc; 	J(JNZ(loc_1ab15));	// 20505 jnz     short loc_1AB15 ;~ 0B93:0BFC
cs=0xb93;eip=0x000bfe; 	T(CMP(byte_446ab, 4));	// 20506 cmp     byte_446AB, 4 ;~ 0B93:0BFE
cs=0xb93;eip=0x000c03; 	J(JZ(loc_1ab65));	// 20507 jz      short loc_1AB65 ;~ 0B93:0C03
loc_1ab15:
	// 5586 
cs=0xb93;eip=0x000c05; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), 0));	// 20511 mov     [bp+var_F2], 0 ;~ 0B93:0C05
cs=0xb93;eip=0x000c0b; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), 0));	// 20512 mov     [bp+var_EE], 0 ;~ 0B93:0C0B
cs=0xb93;eip=0x000c11; 	X(MOV(*(dw*)(raddr(ss,bp+var_f0)), 0x7530));	// 20513 mov     [bp+var_F0], 7530h ;~ 0B93:0C11
cs=0xb93;eip=0x000c17; 	T(ax = bp+var_44);	// 20514 lea     ax, [bp+var_44] ;~ 0B93:0C17
cs=0xb93;eip=0x000c1a; 	X(PUSH(ax));	// 20515 push    ax ;~ 0B93:0C1A
cs=0xb93;eip=0x000c1b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_d6))));	// 20516 push    [bp+var_D6] ;~ 0B93:0C1B
cs=0xb93;eip=0x000c1f; 	T(ax = bp+var_f2);	// 20517 lea     ax, [bp+var_F2] ;~ 0B93:0C1F
cs=0xb93;eip=0x000c23; 	X(PUSH(ax));	// 20518 push    ax ;~ 0B93:0C23
cs=0xb93;eip=0x000c24; 	J(CALLF(mat_mul_vector,0));	// 20519 call    mat_mul_vector ;~ 0B93:0C24
cs=0xb93;eip=0x000c29; 	T(ADD(sp, 6));	// 20520 add     sp, 6 ;~ 0B93:0C29
cs=0xb93;eip=0x000c2c; 	T(ax = bp+var_f2);	// 20521 lea     ax, [bp+var_F2] ;~ 0B93:0C2C
cs=0xb93;eip=0x000c30; 	X(PUSH(ax));	// 20522 push    ax ;~ 0B93:0C30
cs=0xb93;eip=0x000c31; 	T(MOV(ax, offset(dseg,mat_temp)));	// 20523 mov     ax, offset mat_temp ;~ 0B93:0C31
cs=0xb93;eip=0x000c34; 	X(PUSH(ax));	// 20524 push    ax ;~ 0B93:0C34
cs=0xb93;eip=0x000c35; 	T(ax = bp+var_44);	// 20525 lea     ax, [bp+var_44] ;~ 0B93:0C35
cs=0xb93;eip=0x000c38; 	X(PUSH(ax));	// 20526 push    ax ;~ 0B93:0C38
cs=0xb93;eip=0x000c39; 	J(CALLF(mat_mul_vector,0));	// 20527 call    mat_mul_vector ;~ 0B93:0C39
cs=0xb93;eip=0x000c3e; 	T(ADD(sp, 6));	// 20528 add     sp, 6 ;~ 0B93:0C3E
cs=0xb93;eip=0x000c41; 	T(CMP(*(dw*)(raddr(ss,bp+var_ee)), 0));	// 20529 cmp     [bp+var_EE], 0 ;~ 0B93:0C41
cs=0xb93;eip=0x000c46; 	J(JG(loc_1ab60));	// 20530 jg      short loc_1AB60 ;~ 0B93:0C46
cs=0xb93;eip=0x000c48; 	X(MOV(*(dw*)(raddr(ss,bp+var_6c)), 0x0F800));	// 20531 mov     [bp+var_6C], 0F800h ;~ 0B93:0C48
cs=0xb93;eip=0x000c4d; 	J(JMP(loc_1ab65));	// 20532 jmp     short loc_1AB65 ;~ 0B93:0C4D
loc_1ab60:
	// 5587 
cs=0xb93;eip=0x000c50; 	X(MOV(*(dw*)(raddr(ss,bp+var_6c)), 0x800));	// 20537 mov     [bp+var_6C], 800h ;~ 0B93:0C50
loc_1ab65:
	// 5588 
cs=0xb93;eip=0x000c55; 	X(MOV(*(raddr(ss,bp+var_4a)), 0x0FF));	// 20541 mov     [bp+var_4A], 0FFh ;~ 0B93:0C55
cs=0xb93;eip=0x000c59; 	X(MOV(*(dw*)(raddr(ss,bp+var_a4)), 0));	// 20542 mov     [bp+var_A4], 0 ;~ 0B93:0C59
cs=0xb93;eip=0x000c5f; 	T(CMP(byte_449aa, 0));	// 20543 cmp     byte_449AA, 0 ;~ 0B93:0C5F
cs=0xb93;eip=0x000c64; 	J(JNZ(loc_1ab79));	// 20544 jnz     short loc_1AB79 ;~ 0B93:0C64
cs=0xb93;eip=0x000c66; 	J(JMP(loc_1ad0e));	// 20545 jmp     loc_1AD0E ;~ 0B93:0C66
loc_1ab79:
	// 5589 
cs=0xb93;eip=0x000c69; 	T(CMP(cameramode, 0));	// 20549 cmp     cameramode, 0 ;~ 0B93:0C69
cs=0xb93;eip=0x000c6e; 	J(JNZ(loc_1ab8a));	// 20550 jnz     short loc_1AB8A ;~ 0B93:0C6E
cs=0xb93;eip=0x000c70; 	T(CMP(followopponentflag, 0));	// 20551 cmp     followOpponentFlag, 0 ;~ 0B93:0C70
cs=0xb93;eip=0x000c75; 	J(JZ(loc_1ab8a));	// 20552 jz      short loc_1AB8A ;~ 0B93:0C75
cs=0xb93;eip=0x000c77; 	J(JMP(loc_1ad0e));	// 20553 jmp     loc_1AD0E ;~ 0B93:0C77
loc_1ab8a:
	// 5590 
cs=0xb93;eip=0x000c7a; 	T(CMP(byte_4477f, 2));	// 20558 cmp     byte_4477F, 2 ;~ 0B93:0C7A
cs=0xb93;eip=0x000c7f; 	J(JNZ(loc_1ab94));	// 20559 jnz     short loc_1AB94 ;~ 0B93:0C7F
cs=0xb93;eip=0x000c81; 	J(JMP(loc_1ad0e));	// 20560 jmp     loc_1AD0E ;~ 0B93:0C81
loc_1ab94:
	// 5591 
cs=0xb93;eip=0x000c84; 	T(SUB(ax, ax));	// 20564 sub     ax, ax ;~ 0B93:0C84
cs=0xb93;eip=0x000c86; 	X(PUSH(ax));	// 20565 push    ax ;~ 0B93:0C86
cs=0xb93;eip=0x000c87; 	T(MOV(ax, word_446ce));	// 20566 mov     ax, word_446CE ;~ 0B93:0C87
cs=0xb93;eip=0x000c8a; 	T(NEG(ax));	// 20567 neg     ax ;~ 0B93:0C8A
cs=0xb93;eip=0x000c8c; 	X(PUSH(ax));	// 20568 push    ax ;~ 0B93:0C8C
cs=0xb93;eip=0x000c8d; 	T(MOV(ax, word_446d0));	// 20569 mov     ax, word_446D0 ;~ 0B93:0C8D
cs=0xb93;eip=0x000c90; 	T(NEG(ax));	// 20570 neg     ax ;~ 0B93:0C90
cs=0xb93;eip=0x000c92; 	X(PUSH(ax));	// 20571 push    ax ;~ 0B93:0C92
cs=0xb93;eip=0x000c93; 	T(MOV(ax, word_446d2));	// 20572 mov     ax, word_446D2 ;~ 0B93:0C93
cs=0xb93;eip=0x000c96; 	T(NEG(ax));	// 20573 neg     ax ;~ 0B93:0C96
cs=0xb93;eip=0x000c98; 	X(PUSH(ax));	// 20574 push    ax ;~ 0B93:0C98
cs=0xb93;eip=0x000c99; 	J(CALLF(mat_rot_zxy,0));	// 20575 call    mat_rot_zxy ;~ 0B93:0C99
cs=0xb93;eip=0x000c9e; 	T(ADD(sp, 8));	// 20576 add     sp, 8 ;~ 0B93:0C9E
cs=0xb93;eip=0x000ca1; 	X(MOV(*(dw*)(raddr(ss,bp+var_d6)), ax));	// 20577 mov     [bp+var_D6], ax ;~ 0B93:0CA1
cs=0xb93;eip=0x000ca5; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), 0x0FFFF));	// 20578 mov     [bp+var_DE], 0FFFFh ;~ 0B93:0CA5
cs=0xb93;eip=0x000cab; 	T(MOV(di, 0x0FFFF));	// 20579 mov     di, 0FFFFh ;~ 0B93:0CAB
cs=0xb93;eip=0x000cae; 	X(MOV(*(dw*)(raddr(ss,bp+var_a2)), 0));	// 20580 mov     [bp+var_A2], 0 ;~ 0B93:0CAE
cs=0xb93;eip=0x000cb4; 	J(JMP(loc_1ac34));	// 20581 jmp     short loc_1AC34 ;~ 0B93:0CB4
loc_1abc6:
	// 5592 
cs=0xb93;eip=0x000cb6; 	T(DEC(si));	// 20586 dec     si ;~ 0B93:0CB6
loc_1abc7:
	// 5593 
cs=0xb93;eip=0x000cb7; 	T(CMP(*(dw*)(raddr(ss,bp+var_de)), si));	// 20589 cmp     [bp+var_DE], si ;~ 0B93:0CB7
cs=0xb93;eip=0x000cbb; 	J(JGE(loc_1ac30));	// 20590 jge     short loc_1AC30 ;~ 0B93:0CBB
cs=0xb93;eip=0x000cbd; 	T(CMP(*(raddr(ss,bp+si+var_32)), 2));	// 20591 cmp     [bp+si+var_32], 2 ;~ 0B93:0CBD
cs=0xb93;eip=0x000cc1; 	J(JZ(loc_1abc6));	// 20592 jz      short loc_1ABC6 ;~ 0B93:0CC1
cs=0xb93;eip=0x000cc3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_50))));	// 20593 mov     ax, [bp+var_50] ;~ 0B93:0CC3
cs=0xb93;eip=0x000cc6; 	T(MOV(cx, si));	// 20594 mov     cx, si ;~ 0B93:0CC6
cs=0xb93;eip=0x000cc8; 	T(MOV(dx, cx));	// 20595 mov     dx, cx ;~ 0B93:0CC8
cs=0xb93;eip=0x000cca; 	T(SHL(cx, 1));	// 20596 shl     cx, 1 ;~ 0B93:0CCA
cs=0xb93;eip=0x000ccc; 	T(ADD(cx, dx));	// 20597 add     cx, dx ;~ 0B93:0CCC
cs=0xb93;eip=0x000cce; 	T(ADD(ax, cx));	// 20598 add     ax, cx ;~ 0B93:0CCE
cs=0xb93;eip=0x000cd0; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_154))), ax));	// 20599 mov     word ptr [bp+var_154], ax ;~ 0B93:0CD0
cs=0xb93;eip=0x000cd4; 	T(MOV(al, *(raddr(ss,bp+var_10a))));	// 20600 mov     al, [bp+var_10A] ;~ 0B93:0CD4
cs=0xb93;eip=0x000cd8; 	T(CBW);	// 20601 cbw ;~ 0B93:0CD8
cs=0xb93;eip=0x000cd9; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_154)))));	// 20602 mov     bx, word ptr [bp+var_154] ;~ 0B93:0CD9
cs=0xb93;eip=0x000cdd; 	T(MOV(cx, ax));	// 20603 mov     cx, ax ;~ 0B93:0CDD
cs=0xb93;eip=0x000cdf; 	T(MOV(al, *(raddr(ds,bx))));	// 20604 mov     al, [bx] ;~ 0B93:0CDF
cs=0xb93;eip=0x000ce1; 	T(CBW);	// 20605 cbw ;~ 0B93:0CE1
cs=0xb93;eip=0x000ce2; 	T(ADD(ax, cx));	// 20606 add     ax, cx ;~ 0B93:0CE2
cs=0xb93;eip=0x000ce4; 	T(MOV(cx, ax));	// 20607 mov     cx, ax ;~ 0B93:0CE4
cs=0xb93;eip=0x000ce6; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 20608 mov     al, [bp+var_F6] ;~ 0B93:0CE6
cs=0xb93;eip=0x000cea; 	T(CBW);	// 20609 cbw ;~ 0B93:0CEA
cs=0xb93;eip=0x000ceb; 	T(CMP(cx, ax));	// 20610 cmp     cx, ax ;~ 0B93:0CEB
cs=0xb93;eip=0x000ced; 	J(JNZ(loc_1abc6));	// 20611 jnz     short loc_1ABC6 ;~ 0B93:0CED
cs=0xb93;eip=0x000cef; 	T(MOV(al, *(raddr(ss,bp+var_134))));	// 20612 mov     al, [bp+var_134] ;~ 0B93:0CEF
cs=0xb93;eip=0x000cf3; 	T(CBW);	// 20613 cbw ;~ 0B93:0CF3
cs=0xb93;eip=0x000cf4; 	T(MOV(cx, ax));	// 20614 mov     cx, ax ;~ 0B93:0CF4
cs=0xb93;eip=0x000cf6; 	T(MOV(al, *(raddr(ds,bx+1))));	// 20615 mov     al, [bx+1] ;~ 0B93:0CF6
cs=0xb93;eip=0x000cf9; 	T(CBW);	// 20616 cbw ;~ 0B93:0CF9
cs=0xb93;eip=0x000cfa; 	T(ADD(ax, cx));	// 20617 add     ax, cx ;~ 0B93:0CFA
cs=0xb93;eip=0x000cfc; 	T(MOV(cx, ax));	// 20618 mov     cx, ax ;~ 0B93:0CFC
cs=0xb93;eip=0x000cfe; 	T(MOV(al, *(raddr(ss,bp+var_102))));	// 20619 mov     al, [bp+var_102] ;~ 0B93:0CFE
cs=0xb93;eip=0x000d02; 	T(CBW);	// 20620 cbw ;~ 0B93:0D02
cs=0xb93;eip=0x000d03; 	T(CMP(cx, ax));	// 20621 cmp     cx, ax ;~ 0B93:0D03
cs=0xb93;eip=0x000d05; 	J(JNZ(loc_1abc6));	// 20622 jnz     short loc_1ABC6 ;~ 0B93:0D05
cs=0xb93;eip=0x000d07; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 20623 mov     al, [bp+var_F6] ;~ 0B93:0D07
cs=0xb93;eip=0x000d0b; 	X(MOV(*(raddr(ss,bp+var_4a)), al));	// 20624 mov     [bp+var_4A], al ;~ 0B93:0D0B
cs=0xb93;eip=0x000d0e; 	T(MOV(al, *(raddr(ss,bp+var_102))));	// 20625 mov     al, [bp+var_102] ;~ 0B93:0D0E
cs=0xb93;eip=0x000d12; 	X(MOV(*(raddr(ss,bp+var_6e)), al));	// 20626 mov     [bp+var_6E], al ;~ 0B93:0D12
cs=0xb93;eip=0x000d15; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), si));	// 20627 mov     [bp+var_DE], si ;~ 0B93:0D15
cs=0xb93;eip=0x000d19; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_a2))));	// 20628 mov     di, [bp+var_A2] ;~ 0B93:0D19
cs=0xb93;eip=0x000d1d; 	J(JMP(loc_1abc6));	// 20629 jmp     short loc_1ABC6 ;~ 0B93:0D1D
loc_1ac30:
	// 5594 
cs=0xb93;eip=0x000d20; 	X(INC(*(dw*)(raddr(ss,bp+var_a2))));	// 20634 inc     [bp+var_A2] ;~ 0B93:0D20
loc_1ac34:
	// 5595 
cs=0xb93;eip=0x000d24; 	T(CMP(*(dw*)(raddr(ss,bp+var_a2)), 4));	// 20637 cmp     [bp+var_A2], 4 ;~ 0B93:0D24
cs=0xb93;eip=0x000d29; 	J(JGE(loc_1ac9c));	// 20638 jge     short loc_1AC9C ;~ 0B93:0D29
cs=0xb93;eip=0x000d2b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a2))));	// 20639 mov     bx, [bp+var_A2] ;~ 0B93:0D2B
cs=0xb93;eip=0x000d2f; 	T(MOV(ax, bx));	// 20640 mov     ax, bx ;~ 0B93:0D2F
cs=0xb93;eip=0x000d31; 	T(SHL(bx, 1));	// 20641 shl     bx, 1 ;~ 0B93:0D31
cs=0xb93;eip=0x000d33; 	T(ADD(bx, ax));	// 20642 add     bx, ax ;~ 0B93:0D33
cs=0xb93;eip=0x000d35; 	T(SHL(bx, 1));	// 20643 shl     bx, 1 ;~ 0B93:0D35
cs=0xb93;eip=0x000d37; 	X(PUSH(si));	// 20644 push    si ;~ 0B93:0D37
cs=0xb93;eip=0x000d38; 	X(PUSH(di));	// 20645 push    di ;~ 0B93:0D38
cs=0xb93;eip=0x000d39; 	T(di = bp+var_f2);	// 20646 lea     di, [bp+var_F2] ;~ 0B93:0D39
cs=0xb93;eip=0x000d3d; 	T(si = offset(dseg,unk_45712)+bx);	// 20647 lea     si, unk_45712[bx] ;~ 0B93:0D3D
cs=0xb93;eip=0x000d41; 	X(PUSH(ss));	// 20648 push    ss ;~ 0B93:0D41
cs=0xb93;eip=0x000d42; 	X(POP(es));	// 20649 pop     es ;~ 0B93:0D42
cs=0xb93;eip=0x000d43; 	X(MOVSW);	// 20650 movsw ;~ 0B93:0D43
cs=0xb93;eip=0x000d44; 	X(MOVSW);	// 20651 movsw ;~ 0B93:0D44
cs=0xb93;eip=0x000d45; 	X(MOVSW);	// 20652 movsw ;~ 0B93:0D45
cs=0xb93;eip=0x000d46; 	X(POP(di));	// 20653 pop     di ;~ 0B93:0D46
cs=0xb93;eip=0x000d47; 	X(POP(si));	// 20654 pop     si ;~ 0B93:0D47
cs=0xb93;eip=0x000d48; 	T(ax = bp+var_44);	// 20655 lea     ax, [bp+var_44] ;~ 0B93:0D48
cs=0xb93;eip=0x000d4b; 	X(PUSH(ax));	// 20656 push    ax ;~ 0B93:0D4B
cs=0xb93;eip=0x000d4c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_d6))));	// 20657 push    [bp+var_D6] ;~ 0B93:0D4C
cs=0xb93;eip=0x000d50; 	T(ax = bp+var_f2);	// 20658 lea     ax, [bp+var_F2] ;~ 0B93:0D50
cs=0xb93;eip=0x000d54; 	X(PUSH(ax));	// 20659 push    ax ;~ 0B93:0D54
cs=0xb93;eip=0x000d55; 	J(CALLF(mat_mul_vector,0));	// 20660 call    mat_mul_vector ;~ 0B93:0D55
cs=0xb93;eip=0x000d5a; 	T(ADD(sp, 6));	// 20661 add     sp, 6 ;~ 0B93:0D5A
cs=0xb93;eip=0x000d5d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_44))));	// 20662 mov     ax, [bp+var_44] ;~ 0B93:0D5D
cs=0xb93;eip=0x000d60; 	T(CWD);	// 20663 cwd ;~ 0B93:0D60
cs=0xb93;eip=0x000d61; 	T(ADD(ax, word_446b6));	// 20664 add     ax, word_446B6 ;~ 0B93:0D61
cs=0xb93;eip=0x000d65; 	T(ADC(dx, word_446b8));	// 20665 adc     dx, word_446B8 ;~ 0B93:0D65
cs=0xb93;eip=0x000d69; 	T(MOV(ax, dx));	// 20666 mov     ax, dx ;~ 0B93:0D69
cs=0xb93;eip=0x000d6b; 	X(MOV(*(raddr(ss,bp+var_f6)), al));	// 20667 mov     [bp+var_F6], al ;~ 0B93:0D6B
cs=0xb93;eip=0x000d6f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_40))));	// 20668 mov     ax, [bp+var_40] ;~ 0B93:0D6F
cs=0xb93;eip=0x000d72; 	T(CWD);	// 20669 cwd ;~ 0B93:0D72
cs=0xb93;eip=0x000d73; 	T(ADD(ax, word_446be));	// 20670 add     ax, word_446BE ;~ 0B93:0D73
cs=0xb93;eip=0x000d77; 	T(ADC(dx, word_446c0));	// 20671 adc     dx, word_446C0 ;~ 0B93:0D77
cs=0xb93;eip=0x000d7b; 	T(MOV(ax, dx));	// 20672 mov     ax, dx ;~ 0B93:0D7B
cs=0xb93;eip=0x000d7d; 	T(SUB(al, 0x1D));	// 20673 sub     al, 1Dh ;~ 0B93:0D7D
cs=0xb93;eip=0x000d7f; 	T(NEG(al));	// 20674 neg     al ;~ 0B93:0D7F
cs=0xb93;eip=0x000d81; 	X(MOV(*(raddr(ss,bp+var_102)), al));	// 20675 mov     [bp+var_102], al ;~ 0B93:0D81
cs=0xb93;eip=0x000d85; 	T(MOV(si, 0x16));	// 20676 mov     si, 16h ;~ 0B93:0D85
cs=0xb93;eip=0x000d88; 	J(JMP(loc_1abc7));	// 20677 jmp     loc_1ABC7 ;~ 0B93:0D88
loc_1ac9c:
	// 5596 
cs=0xb93;eip=0x000d8c; 	T(CMP(di, 0x0FFFF));	// 20682 cmp     di, 0FFFFh ;~ 0B93:0D8C
cs=0xb93;eip=0x000d8f; 	J(JZ(loc_1ad0e));	// 20683 jz      short loc_1AD0E ;~ 0B93:0D8F
cs=0xb93;eip=0x000d91; 	T(CMP(byte_44778, 4));	// 20684 cmp     byte_44778, 4 ;~ 0B93:0D91
cs=0xb93;eip=0x000d96; 	J(JNZ(loc_1acbd));	// 20685 jnz     short loc_1ACBD ;~ 0B93:0D96
cs=0xb93;eip=0x000d98; 	T(CMP(byte_44779, 4));	// 20686 cmp     byte_44779, 4 ;~ 0B93:0D98
cs=0xb93;eip=0x000d9d; 	J(JNZ(loc_1acbd));	// 20687 jnz     short loc_1ACBD ;~ 0B93:0D9D
cs=0xb93;eip=0x000d9f; 	T(CMP(byte_4477a, 4));	// 20688 cmp     byte_4477A, 4 ;~ 0B93:0D9F
cs=0xb93;eip=0x000da4; 	J(JNZ(loc_1acbd));	// 20689 jnz     short loc_1ACBD ;~ 0B93:0DA4
cs=0xb93;eip=0x000da6; 	T(CMP(byte_4477b, 4));	// 20690 cmp     byte_4477B, 4 ;~ 0B93:0DA6
cs=0xb93;eip=0x000dab; 	J(JZ(loc_1ad0e));	// 20691 jz      short loc_1AD0E ;~ 0B93:0DAB
loc_1acbd:
	// 5597 
cs=0xb93;eip=0x000dad; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), 0));	// 20695 mov     [bp+var_F2], 0 ;~ 0B93:0DAD
cs=0xb93;eip=0x000db3; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), 0));	// 20696 mov     [bp+var_EE], 0 ;~ 0B93:0DB3
cs=0xb93;eip=0x000db9; 	X(MOV(*(dw*)(raddr(ss,bp+var_f0)), 0x7530));	// 20697 mov     [bp+var_F0], 7530h ;~ 0B93:0DB9
cs=0xb93;eip=0x000dbf; 	T(ax = bp+var_44);	// 20698 lea     ax, [bp+var_44] ;~ 0B93:0DBF
cs=0xb93;eip=0x000dc2; 	X(PUSH(ax));	// 20699 push    ax ;~ 0B93:0DC2
cs=0xb93;eip=0x000dc3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_d6))));	// 20700 push    [bp+var_D6] ;~ 0B93:0DC3
cs=0xb93;eip=0x000dc7; 	T(ax = bp+var_f2);	// 20701 lea     ax, [bp+var_F2] ;~ 0B93:0DC7
cs=0xb93;eip=0x000dcb; 	X(PUSH(ax));	// 20702 push    ax ;~ 0B93:0DCB
cs=0xb93;eip=0x000dcc; 	J(CALLF(mat_mul_vector,0));	// 20703 call    mat_mul_vector ;~ 0B93:0DCC
cs=0xb93;eip=0x000dd1; 	T(ADD(sp, 6));	// 20704 add     sp, 6 ;~ 0B93:0DD1
cs=0xb93;eip=0x000dd4; 	T(ax = bp+var_f2);	// 20705 lea     ax, [bp+var_F2] ;~ 0B93:0DD4
cs=0xb93;eip=0x000dd8; 	X(PUSH(ax));	// 20706 push    ax ;~ 0B93:0DD8
cs=0xb93;eip=0x000dd9; 	T(MOV(ax, offset(dseg,mat_temp)));	// 20707 mov     ax, offset mat_temp ;~ 0B93:0DD9
cs=0xb93;eip=0x000ddc; 	X(PUSH(ax));	// 20708 push    ax ;~ 0B93:0DDC
cs=0xb93;eip=0x000ddd; 	T(ax = bp+var_44);	// 20709 lea     ax, [bp+var_44] ;~ 0B93:0DDD
cs=0xb93;eip=0x000de0; 	X(PUSH(ax));	// 20710 push    ax ;~ 0B93:0DE0
cs=0xb93;eip=0x000de1; 	J(CALLF(mat_mul_vector,0));	// 20711 call    mat_mul_vector ;~ 0B93:0DE1
cs=0xb93;eip=0x000de6; 	T(ADD(sp, 6));	// 20712 add     sp, 6 ;~ 0B93:0DE6
cs=0xb93;eip=0x000de9; 	T(CMP(*(dw*)(raddr(ss,bp+var_ee)), 0));	// 20713 cmp     [bp+var_EE], 0 ;~ 0B93:0DE9
cs=0xb93;eip=0x000dee; 	J(JG(loc_1ad08));	// 20714 jg      short loc_1AD08 ;~ 0B93:0DEE
cs=0xb93;eip=0x000df0; 	X(MOV(*(dw*)(raddr(ss,bp+var_a4)), 0x0F800));	// 20715 mov     [bp+var_A4], 0F800h ;~ 0B93:0DF0
cs=0xb93;eip=0x000df6; 	J(JMP(loc_1ad0e));	// 20716 jmp     short loc_1AD0E ;~ 0B93:0DF6
loc_1ad08:
	// 5598 
cs=0xb93;eip=0x000df8; 	X(MOV(*(dw*)(raddr(ss,bp+var_a4)), 0x800));	// 20720 mov     [bp+var_A4], 800h ;~ 0B93:0DF8
loc_1ad0e:
	// 5599 
cs=0xb93;eip=0x000dfe; 	X(MOV(*(raddr(ss,bp+var_4e)), 0));	// 20724 mov     [bp+var_4E], 0 ;~ 0B93:0DFE
cs=0xb93;eip=0x000e02; 	T(SUB(si, si));	// 20725 sub     si, si ;~ 0B93:0E02
cs=0xb93;eip=0x000e04; 	J(JMP(loc_1bf6d));	// 20726 jmp     loc_1BF6D ;~ 0B93:0E04
loc_1ad18:
	// 5600 
cs=0xb93;eip=0x000e08; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), 1));	// 20731 mov     [bp+var_36], 1 ;~ 0B93:0E08
cs=0xb93;eip=0x000e0d; 	X(MOV(*(dw*)(raddr(ss,bp+var_10e)), offset(dseg,asc_3c0e7)+7));	// 20732 mov     [bp+var_10E], (offset asc_3C0E7+7) ; "" ;~ 0B93:0E0D
cs=0xb93;eip=0x000e13; 	J(JMP(loc_1ad55));	// 20733 jmp     short loc_1AD55 ;~ 0B93:0E13
loc_1ad26:
	// 5601 
cs=0xb93;eip=0x000e16; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), 2));	// 20738 mov     [bp+var_36], 2 ;~ 0B93:0E16
cs=0xb93;eip=0x000e1b; 	X(MOV(*(dw*)(raddr(ss,bp+var_10e)), offset(dseg,unk_3c0f0)));	// 20739 mov     [bp+var_10E], offset unk_3C0F0 ;~ 0B93:0E1B
cs=0xb93;eip=0x000e21; 	J(JMP(loc_1ad55));	// 20740 jmp     short loc_1AD55 ;~ 0B93:0E21
loc_1ad34:
	// 5602 
cs=0xb93;eip=0x000e24; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), 3));	// 20745 mov     [bp+var_36], 3 ;~ 0B93:0E24
cs=0xb93;eip=0x000e29; 	J(JMP(loc_1ad4f));	// 20746 jmp     short loc_1AD4F ;~ 0B93:0E29
loc_1ad3c:
	// 5603 
cs=0xb93;eip=0x000e2c; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), 4));	// 20751 mov     [bp+var_36], 4 ;~ 0B93:0E2C
cs=0xb93;eip=0x000e31; 	X(MOV(*(dw*)(raddr(ss,bp+var_10e)), offset(dseg,unk_3c0f8)));	// 20752 mov     [bp+var_10E], offset unk_3C0F8 ;~ 0B93:0E31
cs=0xb93;eip=0x000e37; 	J(JMP(loc_1ad55));	// 20753 jmp     short loc_1AD55 ;~ 0B93:0E37
loc_1ad4a:
	// 5604 
cs=0xb93;eip=0x000e3a; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), 1));	// 20758 mov     [bp+var_36], 1 ;~ 0B93:0E3A
loc_1ad4f:
	// 5605 
cs=0xb93;eip=0x000e3f; 	X(MOV(*(dw*)(raddr(ss,bp+var_10e)), offset(dseg,unk_3c0f4)));	// 20761 mov     [bp+var_10E], offset unk_3C0F4 ;~ 0B93:0E3F
loc_1ad55:
	// 5606 
cs=0xb93;eip=0x000e45; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), 0));	// 20765 mov     [bp+var_DE], 0 ;~ 0B93:0E45
cs=0xb93;eip=0x000e4b; 	J(JMP(loc_1ae7a));	// 20766 jmp     loc_1AE7A ;~ 0B93:0E4B
loc_1ad5e:
	// 5607 
cs=0xb93;eip=0x000e4e; 	T(MOV(al, *(raddr(ss,bp+var_100))));	// 20771 mov     al, [bp+var_100] ;~ 0B93:0E4E
cs=0xb93;eip=0x000e52; 	T(CBW);	// 20772 cbw ;~ 0B93:0E52
cs=0xb93;eip=0x000e53; 	T(OR(ax, ax));	// 20773 or      ax, ax ;~ 0B93:0E53
cs=0xb93;eip=0x000e55; 	J(JZ(loc_1ad80));	// 20774 jz      short loc_1AD80 ;~ 0B93:0E55
cs=0xb93;eip=0x000e57; 	T(CMP(ax, 0x1D));	// 20775 cmp     ax, 1Dh ;~ 0B93:0E57
cs=0xb93;eip=0x000e5a; 	J(JZ(loc_1adcc));	// 20776 jz      short loc_1ADCC ;~ 0B93:0E5A
cs=0xb93;eip=0x000e5c; 	T(MOV(al, *(raddr(ss,bp+var_12c))));	// 20777 mov     al, [bp+var_12C] ;~ 0B93:0E5C
cs=0xb93;eip=0x000e60; 	T(CBW);	// 20778 cbw ;~ 0B93:0E60
cs=0xb93;eip=0x000e61; 	T(OR(ax, ax));	// 20779 or      ax, ax ;~ 0B93:0E61
cs=0xb93;eip=0x000e63; 	J(JZ(loc_1adec));	// 20780 jz      short loc_1ADEC ;~ 0B93:0E63
cs=0xb93;eip=0x000e65; 	T(CMP(ax, 0x1D));	// 20781 cmp     ax, 1Dh ;~ 0B93:0E65
cs=0xb93;eip=0x000e68; 	J(JZ(loc_1adf0));	// 20782 jz      short loc_1ADF0 ;~ 0B93:0E68
cs=0xb93;eip=0x000e6a; 	T(MOV(di, 0x0FFFF));	// 20783 mov     di, 0FFFFh ;~ 0B93:0E6A
cs=0xb93;eip=0x000e6d; 	J(JMP(loc_1ad97));	// 20784 jmp     short loc_1AD97 ;~ 0B93:0E6D
loc_1ad80:
	// 5608 
cs=0xb93;eip=0x000e70; 	T(MOV(al, *(raddr(ss,bp+var_12c))));	// 20789 mov     al, [bp+var_12C] ;~ 0B93:0E70
cs=0xb93;eip=0x000e74; 	T(CBW);	// 20790 cbw ;~ 0B93:0E74
cs=0xb93;eip=0x000e75; 	T(OR(ax, ax));	// 20791 or      ax, ax ;~ 0B93:0E75
cs=0xb93;eip=0x000e77; 	J(JZ(loc_1ad94));	// 20792 jz      short loc_1AD94 ;~ 0B93:0E77
cs=0xb93;eip=0x000e79; 	T(CMP(ax, 0x1D));	// 20793 cmp     ax, 1Dh ;~ 0B93:0E79
cs=0xb93;eip=0x000e7c; 	J(JZ(loc_1adc6));	// 20794 jz      short loc_1ADC6 ;~ 0B93:0E7C
cs=0xb93;eip=0x000e7e; 	T(MOV(di, 6));	// 20795 mov     di, 6 ;~ 0B93:0E7E
cs=0xb93;eip=0x000e81; 	J(JMP(loc_1ad97));	// 20796 jmp     short loc_1AD97 ;~ 0B93:0E81
loc_1ad94:
	// 5609 
cs=0xb93;eip=0x000e84; 	T(MOV(di, 7));	// 20801 mov     di, 7 ;~ 0B93:0E84
loc_1ad97:
	// 5610 
cs=0xb93;eip=0x000e87; 	T(CMP(di, 0x0FFFF));	// 20805 cmp     di, 0FFFFh ;~ 0B93:0E87
cs=0xb93;eip=0x000e8a; 	J(JNZ(loc_1ad9f));	// 20806 jnz     short loc_1AD9F ;~ 0B93:0E8A
cs=0xb93;eip=0x000e8c; 	J(JMP(loc_1ae76));	// 20807 jmp     loc_1AE76 ;~ 0B93:0E8C
loc_1ad9f:
	// 5611 
cs=0xb93;eip=0x000e8f; 	T(MOV(al, *((&fence_trkobjcodes)+di)));	// 20811 mov     al, fence_TrkObjCodes[di] ; indices to corner shapes? ;~ 0B93:0E8F
cs=0xb93;eip=0x000e93; 	T(SUB(ah, ah));	// 20818 sub     ah, ah ;~ 0B93:0E93
cs=0xb93;eip=0x000e95; 	T(MOV(cx, ax));	// 20819 mov     cx, ax ;~ 0B93:0E95
cs=0xb93;eip=0x000e97; 	T(SHL(ax, 1));	// 20820 shl     ax, 1 ;~ 0B93:0E97
cs=0xb93;eip=0x000e99; 	T(ADD(ax, cx));	// 20821 add     ax, cx ;~ 0B93:0E99
cs=0xb93;eip=0x000e9b; 	T(SHL(ax, 1));	// 20822 shl     ax, 1 ;~ 0B93:0E9B
cs=0xb93;eip=0x000e9d; 	T(ADD(ax, cx));	// 20823 add     ax, cx ;~ 0B93:0E9D
cs=0xb93;eip=0x000e9f; 	T(SHL(ax, 1));	// 20824 shl     ax, 1 ;~ 0B93:0E9F
cs=0xb93;eip=0x000ea1; 	T(ADD(ax, offset(dseg,trkobjectlist)));	// 20825 add     ax, offset trkObjectList ;~ 0B93:0EA1
cs=0xb93;eip=0x000ea4; 	X(MOV(*(dw*)(raddr(ss,bp+var_34)), ax));	// 20826 mov     [bp+var_34], ax ;~ 0B93:0EA4
cs=0xb93;eip=0x000ea7; 	T(CMP(*(raddr(ss,bp+var_fc)), 0));	// 20827 cmp     [bp+var_FC], 0 ;~ 0B93:0EA7
cs=0xb93;eip=0x000eac; 	J(JNZ(loc_1adf6));	// 20828 jnz     short loc_1ADF6 ;~ 0B93:0EAC
cs=0xb93;eip=0x000eae; 	T(MOV(bx, ax));	// 20829 mov     bx, ax ;~ 0B93:0EAE
cs=0xb93;eip=0x000eb0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 20830 mov     ax, [bx+4] ;~ 0B93:0EB0
cs=0xb93;eip=0x000eb3; 	J(JMP(loc_1adfc));	// 20831 jmp     short loc_1ADFC ;~ 0B93:0EB3
loc_1adc6:
	// 5612 
cs=0xb93;eip=0x000eb6; 	T(MOV(di, 5));	// 20836 mov     di, 5 ;~ 0B93:0EB6
cs=0xb93;eip=0x000eb9; 	J(JMP(loc_1ad97));	// 20837 jmp     short loc_1AD97 ;~ 0B93:0EB9
loc_1adcc:
	// 5613 
cs=0xb93;eip=0x000ebc; 	T(MOV(al, *(raddr(ss,bp+var_12c))));	// 20842 mov     al, [bp+var_12C] ;~ 0B93:0EBC
cs=0xb93;eip=0x000ec0; 	T(CBW);	// 20843 cbw ;~ 0B93:0EC0
cs=0xb93;eip=0x000ec1; 	T(OR(ax, ax));	// 20844 or      ax, ax ;~ 0B93:0EC1
cs=0xb93;eip=0x000ec3; 	J(JZ(loc_1ade0));	// 20845 jz      short loc_1ADE0 ;~ 0B93:0EC3
cs=0xb93;eip=0x000ec5; 	T(CMP(ax, 0x1D));	// 20846 cmp     ax, 1Dh ;~ 0B93:0EC5
cs=0xb93;eip=0x000ec8; 	J(JZ(loc_1ade6));	// 20847 jz      short loc_1ADE6 ;~ 0B93:0EC8
cs=0xb93;eip=0x000eca; 	T(MOV(di, 2));	// 20848 mov     di, 2 ;~ 0B93:0ECA
cs=0xb93;eip=0x000ecd; 	J(JMP(loc_1ad97));	// 20849 jmp     short loc_1AD97 ;~ 0B93:0ECD
loc_1ade0:
	// 5614 
cs=0xb93;eip=0x000ed0; 	T(MOV(di, 1));	// 20854 mov     di, 1 ;~ 0B93:0ED0
cs=0xb93;eip=0x000ed3; 	J(JMP(loc_1ad97));	// 20855 jmp     short loc_1AD97 ;~ 0B93:0ED3
loc_1ade6:
	// 5615 
cs=0xb93;eip=0x000ed6; 	T(MOV(di, 3));	// 20860 mov     di, 3 ;~ 0B93:0ED6
cs=0xb93;eip=0x000ed9; 	J(JMP(loc_1ad97));	// 20861 jmp     short loc_1AD97 ;~ 0B93:0ED9
loc_1adec:
	// 5616 
cs=0xb93;eip=0x000edc; 	T(SUB(di, di));	// 20866 sub     di, di ;~ 0B93:0EDC
cs=0xb93;eip=0x000ede; 	J(JMP(loc_1ad97));	// 20867 jmp     short loc_1AD97 ;~ 0B93:0EDE
loc_1adf0:
	// 5617 
cs=0xb93;eip=0x000ee0; 	T(MOV(di, 4));	// 20871 mov     di, 4 ;~ 0B93:0EE0
cs=0xb93;eip=0x000ee3; 	J(JMP(loc_1ad97));	// 20872 jmp     short loc_1AD97 ;~ 0B93:0EE3
loc_1adf6:
	// 5618 
cs=0xb93;eip=0x000ee6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_34))));	// 20877 mov     bx, [bp+var_34] ;~ 0B93:0EE6
cs=0xb93;eip=0x000ee9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 20878 mov     ax, [bx+6] ;~ 0B93:0EE9
loc_1adfc:
	// 5619 
cs=0xb93;eip=0x000eec; 	X(MOV(word_42a40, ax));	// 20881 mov     word_42A40, ax ;~ 0B93:0EEC
cs=0xb93;eip=0x000eef; 	T(MOV(al, *(raddr(ss,bp+var_100))));	// 20882 mov     al, [bp+var_100] ;~ 0B93:0EEF
cs=0xb93;eip=0x000ef3; 	T(CBW);	// 20883 cbw ;~ 0B93:0EF3
cs=0xb93;eip=0x000ef4; 	T(MOV(bx, ax));	// 20884 mov     bx, ax ;~ 0B93:0EF4
cs=0xb93;eip=0x000ef6; 	T(SHL(bx, 1));	// 20885 shl     bx, 1 ;~ 0B93:0EF6
cs=0xb93;eip=0x000ef8; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 20886 mov     ax, trackcenterpos2[bx] ;~ 0B93:0EF8
cs=0xb93;eip=0x000efc; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_58))));	// 20887 sub     ax, [bp+var_58] ;~ 0B93:0EFC
cs=0xb93;eip=0x000eff; 	X(MOV(currenttransshape, ax));	// 20888 mov     currenttransshape, ax ;~ 0B93:0EFF
cs=0xb93;eip=0x000f02; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_56))));	// 20889 mov     ax, [bp+var_56] ;~ 0B93:0F02
cs=0xb93;eip=0x000f05; 	T(NEG(ax));	// 20890 neg     ax ;~ 0B93:0F05
cs=0xb93;eip=0x000f07; 	X(MOV(word_42a3c, ax));	// 20891 mov     word_42A3C, ax ;~ 0B93:0F07
cs=0xb93;eip=0x000f0a; 	T(MOV(al, *(raddr(ss,bp+var_12c))));	// 20892 mov     al, [bp+var_12C] ;~ 0B93:0F0A
cs=0xb93;eip=0x000f0e; 	T(CBW);	// 20893 cbw ;~ 0B93:0F0E
cs=0xb93;eip=0x000f0f; 	T(MOV(bx, ax));	// 20894 mov     bx, ax ;~ 0B93:0F0F
cs=0xb93;eip=0x000f11; 	T(SHL(bx, 1));	// 20895 shl     bx, 1 ;~ 0B93:0F11
cs=0xb93;eip=0x000f13; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 20896 mov     ax, trackcenterpos[bx] ;~ 0B93:0F13
cs=0xb93;eip=0x000f17; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_54))));	// 20897 sub     ax, [bp+var_54] ;~ 0B93:0F17
cs=0xb93;eip=0x000f1a; 	X(MOV(word_42a3e, ax));	// 20898 mov     word_42A3E, ax ;~ 0B93:0F1A
cs=0xb93;eip=0x000f1d; 	X(MOV(word_42a42, offset(dseg,rect_unk2)));	// 20899 mov     word_42A42, offset rect_unk2 ;~ 0B93:0F1D
cs=0xb93;eip=0x000f23; 	T(MOV(al, *(raddr(ss,bp+var_122))));	// 20900 mov     al, [bp+var_122] ;~ 0B93:0F23
cs=0xb93;eip=0x000f27; 	T(OR(al, 5));	// 20901 or      al, 5 ;~ 0B93:0F27
cs=0xb93;eip=0x000f29; 	X(MOV(byte_42a4c, al));	// 20902 mov     byte_42A4C, al ;~ 0B93:0F29
cs=0xb93;eip=0x000f2c; 	X(MOV(word_42a44, 0));	// 20903 mov     word_42A44, 0 ;~ 0B93:0F2C
cs=0xb93;eip=0x000f32; 	X(MOV(word_42a46, 0));	// 20904 mov     word_42A46, 0 ;~ 0B93:0F32
cs=0xb93;eip=0x000f38; 	T(MOV(bx, di));	// 20905 mov     bx, di ;~ 0B93:0F38
cs=0xb93;eip=0x000f3a; 	T(SHL(bx, 1));	// 20906 shl     bx, 1 ;~ 0B93:0F3A
cs=0xb93;eip=0x000f3c; 	T(MOV(ax, *(dw*)(((db*)&word_3c0d6)+bx)));	// 20907 mov     ax, word_3C0D6[bx] ;~ 0B93:0F3C
cs=0xb93;eip=0x000f40; 	X(MOV(word_42a48, ax));	// 20908 mov     word_42A48, ax ;~ 0B93:0F40
cs=0xb93;eip=0x000f43; 	X(MOV(word_42a4a, 0x400));	// 20909 mov     word_42A4A, 400h ;~ 0B93:0F43
cs=0xb93;eip=0x000f49; 	X(MOV(byte_42a4d, 0));	// 20910 mov     byte_42A4D, 0 ;~ 0B93:0F49
cs=0xb93;eip=0x000f4e; 	T(MOV(ax, offset(dseg,currenttransshape)));	// 20911 mov     ax, offset currenttransshape ;~ 0B93:0F4E
cs=0xb93;eip=0x000f51; 	X(PUSH(ax));	// 20912 push    ax ;~ 0B93:0F51
cs=0xb93;eip=0x000f52; 	J(CALLF(transformed_shape_op,0));	// 20913 call    transformed_shape_op ;~ 0B93:0F52
cs=0xb93;eip=0x000f57; 	T(ADD(sp, 2));	// 20914 add     sp, 2 ;~ 0B93:0F57
cs=0xb93;eip=0x000f5a; 	T(CBW);	// 20915 cbw ;~ 0B93:0F5A
cs=0xb93;eip=0x000f5b; 	X(MOV(*(dw*)(raddr(ss,bp+var_14e)), ax));	// 20916 mov     [bp+var_14E], ax ;~ 0B93:0F5B
cs=0xb93;eip=0x000f5f; 	T(OR(ax, ax));	// 20917 or      ax, ax ;~ 0B93:0F5F
cs=0xb93;eip=0x000f61; 	J(JLE(loc_1ae76));	// 20918 jle     short loc_1AE76 ;~ 0B93:0F61
cs=0xb93;eip=0x000f63; 	J(JMP(loc_1b03c));	// 20919 jmp     loc_1B03C ;~ 0B93:0F63
loc_1ae76:
	// 5620 
cs=0xb93;eip=0x000f66; 	X(INC(*(dw*)(raddr(ss,bp+var_de))));	// 20924 inc     [bp+var_DE] ;~ 0B93:0F66
loc_1ae7a:
	// 5621 
cs=0xb93;eip=0x000f6a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_36))));	// 20927 mov     ax, [bp+var_36] ;~ 0B93:0F6A
cs=0xb93;eip=0x000f6d; 	T(CMP(*(dw*)(raddr(ss,bp+var_de)), ax));	// 20928 cmp     [bp+var_DE], ax ;~ 0B93:0F6D
cs=0xb93;eip=0x000f71; 	J(JGE(loc_1aecc));	// 20929 jge     short loc_1AECC ;~ 0B93:0F71
cs=0xb93;eip=0x000f73; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_de))));	// 20930 mov     ax, [bp+var_DE] ;~ 0B93:0F73
cs=0xb93;eip=0x000f77; 	T(SHL(ax, 1));	// 20931 shl     ax, 1 ;~ 0B93:0F77
cs=0xb93;eip=0x000f79; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_10e))));	// 20932 add     ax, [bp+var_10E] ;~ 0B93:0F79
cs=0xb93;eip=0x000f7d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_154))), ax));	// 20933 mov     word ptr [bp+var_154], ax ;~ 0B93:0F7D
cs=0xb93;eip=0x000f81; 	T(MOV(bx, ax));	// 20934 mov     bx, ax ;~ 0B93:0F81
cs=0xb93;eip=0x000f83; 	T(MOV(al, *(raddr(ds,bx))));	// 20935 mov     al, [bx] ;~ 0B93:0F83
cs=0xb93;eip=0x000f85; 	T(ADD(al, *(raddr(ss,bp+var_f6))));	// 20936 add     al, [bp+var_F6] ;~ 0B93:0F85
cs=0xb93;eip=0x000f89; 	X(MOV(*(raddr(ss,bp+var_100)), al));	// 20937 mov     [bp+var_100], al ;~ 0B93:0F89
cs=0xb93;eip=0x000f8d; 	T(MOV(al, *(raddr(ds,bx+1))));	// 20938 mov     al, [bx+1] ;~ 0B93:0F8D
cs=0xb93;eip=0x000f90; 	T(ADD(al, *(raddr(ss,bp+var_102))));	// 20939 add     al, [bp+var_102] ;~ 0B93:0F90
cs=0xb93;eip=0x000f94; 	X(MOV(*(raddr(ss,bp+var_12c)), al));	// 20940 mov     [bp+var_12C], al ;~ 0B93:0F94
cs=0xb93;eip=0x000f98; 	T(CMP(timertestflag2, 0));	// 20941 cmp     timertestflag2, 0 ;~ 0B93:0F98
cs=0xb93;eip=0x000f9d; 	J(JNZ(loc_1aeb2));	// 20942 jnz     short loc_1AEB2 ;~ 0B93:0F9D
cs=0xb93;eip=0x000f9f; 	J(JMP(loc_1ad5e));	// 20943 jmp     loc_1AD5E ;~ 0B93:0F9F
loc_1aeb2:
	// 5622 
cs=0xb93;eip=0x000fa2; 	T(MOV(al, *(raddr(ss,bp+var_d8))));	// 20947 mov     al, [bp+var_D8] ;~ 0B93:0FA2
cs=0xb93;eip=0x000fa6; 	T(CMP(*(raddr(ss,bp+var_100)), al));	// 20948 cmp     [bp+var_100], al ;~ 0B93:0FA6
cs=0xb93;eip=0x000faa; 	J(JNZ(loc_1ae76));	// 20949 jnz     short loc_1AE76 ;~ 0B93:0FAA
cs=0xb93;eip=0x000fac; 	T(MOV(al, *(raddr(ss,bp+var_e2))));	// 20950 mov     al, [bp+var_E2] ;~ 0B93:0FAC
cs=0xb93;eip=0x000fb0; 	T(CMP(*(raddr(ss,bp+var_12c)), al));	// 20951 cmp     [bp+var_12C], al ;~ 0B93:0FB0
cs=0xb93;eip=0x000fb4; 	J(JNZ(loc_1aec9));	// 20952 jnz     short loc_1AEC9 ;~ 0B93:0FB4
cs=0xb93;eip=0x000fb6; 	J(JMP(loc_1ad5e));	// 20953 jmp     loc_1AD5E ;~ 0B93:0FB6
loc_1aec9:
	// 5623 
cs=0xb93;eip=0x000fb9; 	J(JMP(loc_1ae76));	// 20957 jmp     short loc_1AE76 ;~ 0B93:0FB9
loc_1aecc:
	// 5624 
cs=0xb93;eip=0x000fbc; 	T(CMP(*(raddr(ss,bp+terr_map_value)), 6));	// 20962 cmp     [bp+terr_map_value], 6 ;~ 0B93:0FBC
cs=0xb93;eip=0x000fc1; 	J(JNZ(loc_1af50));	// 20963 jnz     short loc_1AF50 ;~ 0B93:0FC1
cs=0xb93;eip=0x000fc3; 	T(MOV(ax, *(dw*)(((db*)hillheightconsts)+2)));	// 20964 mov     ax, hillHeightConsts+2 ;~ 0B93:0FC3
cs=0xb93;eip=0x000fc6; 	X(MOV(*(dw*)(raddr(ss,bp+var_48)), ax));	// 20965 mov     [bp+var_48], ax ;~ 0B93:0FC6
cs=0xb93;eip=0x000fc9; 	T(CMP(*(raddr(ss,bp+elem_map_value)), 0));	// 20966 cmp     [bp+elem_map_value], 0 ;~ 0B93:0FC9
cs=0xb93;eip=0x000fcd; 	J(JZ(loc_1aee4));	// 20967 jz      short loc_1AEE4 ;~ 0B93:0FCD
loc_1aedf:
	// 5625 
cs=0xb93;eip=0x000fcf; 	X(MOV(*(raddr(ss,bp+terr_map_value)), 0));	// 20970 mov     [bp+terr_map_value], 0 ;~ 0B93:0FCF
loc_1aee4:
	// 5626 
cs=0xb93;eip=0x000fd4; 	T(CMP(*(raddr(ss,bp+terr_map_value)), 0));	// 20974 cmp     [bp+terr_map_value], 0 ;~ 0B93:0FD4
cs=0xb93;eip=0x000fd9; 	J(JNZ(loc_1aeee));	// 20975 jnz     short loc_1AEEE ;~ 0B93:0FD9
cs=0xb93;eip=0x000fdb; 	J(JMP(loc_1b11c));	// 20976 jmp     loc_1B11C ;~ 0B93:0FDB
loc_1aeee:
	// 5627 
cs=0xb93;eip=0x000fde; 	T(MOV(al, *(raddr(ss,bp+terr_map_value))));	// 20980 mov     al, [bp+terr_map_value] ;~ 0B93:0FDE
cs=0xb93;eip=0x000fe2; 	T(SUB(ah, ah));	// 20981 sub     ah, ah ;~ 0B93:0FE2
cs=0xb93;eip=0x000fe4; 	T(MOV(cx, ax));	// 20982 mov     cx, ax ;~ 0B93:0FE4
cs=0xb93;eip=0x000fe6; 	T(SHL(ax, 1));	// 20983 shl     ax, 1 ;~ 0B93:0FE6
cs=0xb93;eip=0x000fe8; 	T(ADD(ax, cx));	// 20984 add     ax, cx ;~ 0B93:0FE8
cs=0xb93;eip=0x000fea; 	T(SHL(ax, 1));	// 20985 shl     ax, 1 ;~ 0B93:0FEA
cs=0xb93;eip=0x000fec; 	T(ADD(ax, cx));	// 20986 add     ax, cx ;~ 0B93:0FEC
cs=0xb93;eip=0x000fee; 	T(SHL(ax, 1));	// 20987 shl     ax, 1 ;~ 0B93:0FEE
cs=0xb93;eip=0x000ff0; 	T(ADD(ax, offset(dseg,sceneshapes2)));	// 20988 add     ax, offset sceneshapes2 ;~ 0B93:0FF0
cs=0xb93;eip=0x000ff3; 	X(MOV(*(dw*)(raddr(ss,bp+var_12e)), ax));	// 20989 mov     [bp+var_12E], ax ;~ 0B93:0FF3
cs=0xb93;eip=0x000ff7; 	T(MOV(bx, ax));	// 20990 mov     bx, ax ;~ 0B93:0FF7
cs=0xb93;eip=0x000ff9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 20991 mov     ax, [bx+4] ;~ 0B93:0FF9
cs=0xb93;eip=0x000ffc; 	X(MOV(word_42a40, ax));	// 20992 mov     word_42A40, ax ;~ 0B93:0FFC
cs=0xb93;eip=0x000fff; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 20993 mov     al, [bp+var_F6] ;~ 0B93:0FFF
cs=0xb93;eip=0x001003; 	T(CBW);	// 20994 cbw ;~ 0B93:1003
cs=0xb93;eip=0x001004; 	T(MOV(bx, ax));	// 20995 mov     bx, ax ;~ 0B93:1004
cs=0xb93;eip=0x001006; 	T(SHL(bx, 1));	// 20996 shl     bx, 1 ;~ 0B93:1006
cs=0xb93;eip=0x001008; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 20997 mov     ax, trackcenterpos2[bx] ;~ 0B93:1008
cs=0xb93;eip=0x00100c; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_58))));	// 20998 sub     ax, [bp+var_58] ;~ 0B93:100C
cs=0xb93;eip=0x00100f; 	X(MOV(currenttransshape, ax));	// 20999 mov     currenttransshape, ax ;~ 0B93:100F
cs=0xb93;eip=0x001012; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_48))));	// 21000 mov     ax, [bp+var_48] ;~ 0B93:1012
cs=0xb93;eip=0x001015; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_56))));	// 21001 sub     ax, [bp+var_56] ;~ 0B93:1015
cs=0xb93;eip=0x001018; 	X(MOV(word_42a3c, ax));	// 21002 mov     word_42A3C, ax ;~ 0B93:1018
cs=0xb93;eip=0x00101b; 	T(MOV(al, *(raddr(ss,bp+var_102))));	// 21003 mov     al, [bp+var_102] ;~ 0B93:101B
cs=0xb93;eip=0x00101f; 	T(CBW);	// 21004 cbw ;~ 0B93:101F
cs=0xb93;eip=0x001020; 	T(MOV(bx, ax));	// 21005 mov     bx, ax ;~ 0B93:1020
cs=0xb93;eip=0x001022; 	T(SHL(bx, 1));	// 21006 shl     bx, 1 ;~ 0B93:1022
cs=0xb93;eip=0x001024; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 21007 mov     ax, trackcenterpos[bx] ;~ 0B93:1024
cs=0xb93;eip=0x001028; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_54))));	// 21008 sub     ax, [bp+var_54] ;~ 0B93:1028
cs=0xb93;eip=0x00102b; 	X(MOV(word_42a3e, ax));	// 21009 mov     word_42A3E, ax ;~ 0B93:102B
cs=0xb93;eip=0x00102e; 	T(CMP(*(dw*)(raddr(ss,bp+var_48)), 0));	// 21010 cmp     [bp+var_48], 0 ;~ 0B93:102E
cs=0xb93;eip=0x001032; 	J(JZ(loc_1af47));	// 21011 jz      short loc_1AF47 ;~ 0B93:1032
cs=0xb93;eip=0x001034; 	J(JMP(loc_1b0d4));	// 21012 jmp     loc_1B0D4 ;~ 0B93:1034
loc_1af47:
	// 5628 
cs=0xb93;eip=0x001037; 	X(MOV(word_42a42, offset(dseg,rect_unk2)));	// 21016 mov     word_42A42, offset rect_unk2 ;~ 0B93:1037
cs=0xb93;eip=0x00103d; 	J(JMP(loc_1b0da));	// 21017 jmp     loc_1B0DA ;~ 0B93:103D
loc_1af50:
	// 5629 
cs=0xb93;eip=0x001040; 	X(MOV(*(dw*)(raddr(ss,bp+var_48)), 0));	// 21021 mov     [bp+var_48], 0 ;~ 0B93:1040
cs=0xb93;eip=0x001045; 	T(MOV(al, *(raddr(ss,bp+elem_map_value))));	// 21022 mov     al, [bp+elem_map_value] ;~ 0B93:1045
cs=0xb93;eip=0x001048; 	T(SUB(ah, ah));	// 21023 sub     ah, ah ;~ 0B93:1048
cs=0xb93;eip=0x00104a; 	T(CMP(ax, 0x69));	// 21024 cmp     ax, 69h ; 'i' ;~ 0B93:104A
cs=0xb93;eip=0x00104d; 	J(JC(loc_1aee4));	// 21025 jb      short loc_1AEE4 ;~ 0B93:104D
cs=0xb93;eip=0x00104f; 	T(CMP(ax, 0x6C));	// 21026 cmp     ax, 6Ch ; 'l' ;~ 0B93:104F
cs=0xb93;eip=0x001052; 	J(JBE(loc_1af67));	// 21027 jbe     short loc_1AF67 ;~ 0B93:1052
cs=0xb93;eip=0x001054; 	J(JMP(loc_1aee4));	// 21028 jmp     loc_1AEE4 ;~ 0B93:1054
loc_1af67:
	// 5630 
cs=0xb93;eip=0x001057; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), 0));	// 21032 mov     [bp+var_DE], 0 ;~ 0B93:1057
cs=0xb93;eip=0x00105d; 	J(JMP(loc_1b0ac));	// 21033 jmp     loc_1B0AC ;~ 0B93:105D
loc_1af70:
	// 5631 
cs=0xb93;eip=0x001060; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 21037 mov     al, [bp+var_F6] ;~ 0B93:1060
loc_1af74:
	// 5632 
cs=0xb93;eip=0x001064; 	X(MOV(*(raddr(ss,bp+var_100)), al));	// 21040 mov     [bp+var_100], al ;~ 0B93:1064
cs=0xb93;eip=0x001068; 	T(MOV(al, *(raddr(ss,bp+var_102))));	// 21041 mov     al, [bp+var_102] ;~ 0B93:1068
loc_1af7c:
	// 5633 
cs=0xb93;eip=0x00106c; 	X(MOV(*(raddr(ss,bp+var_12c)), al));	// 21044 mov     [bp+var_12C], al ;~ 0B93:106C
loc_1af80:
	// 5634 
cs=0xb93;eip=0x001070; 	T(MOV(al, *(raddr(ss,bp+var_100))));	// 21047 mov     al, [bp+var_100] ;~ 0B93:1070
cs=0xb93;eip=0x001074; 	T(CBW);	// 21048 cbw ;~ 0B93:1074
cs=0xb93;eip=0x001075; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_154))), ax));	// 21049 mov     word ptr [bp+var_154], ax ;~ 0B93:1075
cs=0xb93;eip=0x001079; 	T(MOV(al, *(raddr(ss,bp+var_12c))));	// 21050 mov     al, [bp+var_12C] ;~ 0B93:1079
cs=0xb93;eip=0x00107d; 	T(CBW);	// 21051 cbw ;~ 0B93:107D
cs=0xb93;eip=0x00107e; 	T(SHL(ax, 1));	// 21052 shl     ax, 1 ;~ 0B93:107E
cs=0xb93;eip=0x001080; 	X(MOV(*(dw*)(raddr(ss,bp+var_150)), ax));	// 21053 mov     [bp+var_150], ax ;~ 0B93:1080
cs=0xb93;eip=0x001084; 	T(MOV(bx, ax));	// 21054 mov     bx, ax ;~ 0B93:1084
cs=0xb93;eip=0x001086; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 21055 mov     bx, terrainrows[bx] ;~ 0B93:1086
cs=0xb93;eip=0x00108a; 	T(ADD(bx, *(dw*)((dw*)(raddr(ss,bp+var_154)))));	// 21056 add     bx, word ptr [bp+var_154] ;~ 0B93:108A
cs=0xb93;eip=0x00108e; 	T(ADD(bx, *(dw*)(((db*)&td15_terr_map_main))));	// 21057 add     bx, word ptr td15_terr_map_main ;~ 0B93:108E
cs=0xb93;eip=0x001092; 	T(MOV(es, *(dw*)(((db*)&td15_terr_map_main)+2)));	// 21058 mov     es, word ptr td15_terr_map_main+2 ;~ 0B93:1092
cs=0xb93;eip=0x001096; 	T(MOV(al, *(raddr(es,bx))));	// 21059 mov     al, es:[bx] ;~ 0B93:1096
cs=0xb93;eip=0x001099; 	X(MOV(*(raddr(ss,bp+terr_map_value)), al));	// 21060 mov     [bp+terr_map_value], al ;~ 0B93:1099
cs=0xb93;eip=0x00109d; 	T(OR(al, al));	// 21061 or      al, al ;~ 0B93:109D
cs=0xb93;eip=0x00109f; 	J(JNZ(loc_1afb4));	// 21062 jnz     short loc_1AFB4 ;~ 0B93:109F
cs=0xb93;eip=0x0010a1; 	J(JMP(loc_1b0a8));	// 21063 jmp     loc_1B0A8 ;~ 0B93:10A1
loc_1afb4:
	// 5635 
cs=0xb93;eip=0x0010a4; 	T(SUB(ah, ah));	// 21067 sub     ah, ah ;~ 0B93:10A4
cs=0xb93;eip=0x0010a6; 	T(MOV(cx, ax));	// 21068 mov     cx, ax ;~ 0B93:10A6
cs=0xb93;eip=0x0010a8; 	T(SHL(ax, 1));	// 21069 shl     ax, 1 ;~ 0B93:10A8
cs=0xb93;eip=0x0010aa; 	T(ADD(ax, cx));	// 21070 add     ax, cx ;~ 0B93:10AA
cs=0xb93;eip=0x0010ac; 	T(SHL(ax, 1));	// 21071 shl     ax, 1 ;~ 0B93:10AC
cs=0xb93;eip=0x0010ae; 	T(ADD(ax, cx));	// 21072 add     ax, cx ;~ 0B93:10AE
cs=0xb93;eip=0x0010b0; 	T(SHL(ax, 1));	// 21073 shl     ax, 1 ;~ 0B93:10B0
cs=0xb93;eip=0x0010b2; 	T(ADD(ax, offset(dseg,sceneshapes2)));	// 21074 add     ax, offset sceneshapes2 ;~ 0B93:10B2
cs=0xb93;eip=0x0010b5; 	X(MOV(*(dw*)(raddr(ss,bp+var_12e)), ax));	// 21075 mov     [bp+var_12E], ax ;~ 0B93:10B5
cs=0xb93;eip=0x0010b9; 	T(MOV(bx, ax));	// 21076 mov     bx, ax ;~ 0B93:10B9
cs=0xb93;eip=0x0010bb; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 21077 mov     ax, [bx+4] ;~ 0B93:10BB
cs=0xb93;eip=0x0010be; 	X(MOV(word_42a40, ax));	// 21078 mov     word_42A40, ax ;~ 0B93:10BE
cs=0xb93;eip=0x0010c1; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_154)))));	// 21079 mov     bx, word ptr [bp+var_154] ;~ 0B93:10C1
cs=0xb93;eip=0x0010c5; 	T(SHL(bx, 1));	// 21080 shl     bx, 1 ;~ 0B93:10C5
cs=0xb93;eip=0x0010c7; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 21081 mov     ax, trackcenterpos2[bx] ;~ 0B93:10C7
cs=0xb93;eip=0x0010cb; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_58))));	// 21082 sub     ax, [bp+var_58] ;~ 0B93:10CB
cs=0xb93;eip=0x0010ce; 	X(MOV(currenttransshape, ax));	// 21083 mov     currenttransshape, ax ;~ 0B93:10CE
cs=0xb93;eip=0x0010d1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_56))));	// 21084 mov     ax, [bp+var_56] ;~ 0B93:10D1
cs=0xb93;eip=0x0010d4; 	T(NEG(ax));	// 21085 neg     ax ;~ 0B93:10D4
cs=0xb93;eip=0x0010d6; 	X(MOV(word_42a3c, ax));	// 21086 mov     word_42A3C, ax ;~ 0B93:10D6
cs=0xb93;eip=0x0010d9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_150))));	// 21087 mov     bx, [bp+var_150] ;~ 0B93:10D9
cs=0xb93;eip=0x0010dd; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 21088 mov     ax, trackcenterpos[bx] ;~ 0B93:10DD
cs=0xb93;eip=0x0010e1; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_54))));	// 21089 sub     ax, [bp+var_54] ;~ 0B93:10E1
cs=0xb93;eip=0x0010e4; 	X(MOV(word_42a3e, ax));	// 21090 mov     word_42A3E, ax ;~ 0B93:10E4
cs=0xb93;eip=0x0010e7; 	X(MOV(word_42a42, offset(dseg,rect_unk2)));	// 21091 mov     word_42A42, offset rect_unk2 ;~ 0B93:10E7
cs=0xb93;eip=0x0010ed; 	T(MOV(al, *(raddr(ss,bp+var_122))));	// 21092 mov     al, [bp+var_122] ;~ 0B93:10ED
cs=0xb93;eip=0x0010f1; 	T(OR(al, 5));	// 21093 or      al, 5 ;~ 0B93:10F1
cs=0xb93;eip=0x0010f3; 	X(MOV(byte_42a4c, al));	// 21094 mov     byte_42A4C, al ;~ 0B93:10F3
cs=0xb93;eip=0x0010f6; 	X(MOV(word_42a44, 0));	// 21095 mov     word_42A44, 0 ;~ 0B93:10F6
cs=0xb93;eip=0x0010fc; 	X(MOV(word_42a46, 0));	// 21096 mov     word_42A46, 0 ;~ 0B93:10FC
cs=0xb93;eip=0x001102; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12e))));	// 21097 mov     bx, [bp+var_12E] ;~ 0B93:1102
cs=0xb93;eip=0x001106; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 21098 mov     ax, [bx+2] ;~ 0B93:1106
cs=0xb93;eip=0x001109; 	X(MOV(word_42a48, ax));	// 21099 mov     word_42A48, ax ;~ 0B93:1109
cs=0xb93;eip=0x00110c; 	X(MOV(word_42a4a, 0x400));	// 21100 mov     word_42A4A, 400h ;~ 0B93:110C
cs=0xb93;eip=0x001112; 	X(MOV(byte_42a4d, 0));	// 21101 mov     byte_42A4D, 0 ;~ 0B93:1112
cs=0xb93;eip=0x001117; 	T(MOV(ax, offset(dseg,currenttransshape)));	// 21102 mov     ax, offset currenttransshape ;~ 0B93:1117
cs=0xb93;eip=0x00111a; 	X(PUSH(ax));	// 21103 push    ax ;~ 0B93:111A
cs=0xb93;eip=0x00111b; 	J(CALLF(transformed_shape_op,0));	// 21104 call    transformed_shape_op ;~ 0B93:111B
cs=0xb93;eip=0x001120; 	T(ADD(sp, 2));	// 21105 add     sp, 2 ;~ 0B93:1120
cs=0xb93;eip=0x001123; 	T(CBW);	// 21106 cbw ;~ 0B93:1123
cs=0xb93;eip=0x001124; 	X(MOV(*(dw*)(raddr(ss,bp+var_14e)), ax));	// 21107 mov     [bp+var_14E], ax ;~ 0B93:1124
cs=0xb93;eip=0x001128; 	T(OR(ax, ax));	// 21108 or      ax, ax ;~ 0B93:1128
cs=0xb93;eip=0x00112a; 	J(JLE(loc_1b0a8));	// 21109 jle     short loc_1B0A8 ;~ 0B93:112A
loc_1b03c:
	// 5636 
cs=0xb93;eip=0x00112c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_56))));	// 21113 push    [bp+var_56] ;~ 0B93:112C
cs=0xb93;eip=0x00112f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_5c))));	// 21114 push    [bp+var_5C] ;~ 0B93:112F
cs=0xb93;eip=0x001132; 	X(PUSH(*(dw*)(raddr(ss,bp+var_fe))));	// 21115 push    [bp+var_FE] ;~ 0B93:1132
cs=0xb93;eip=0x001136; 	T(ax = bp+var_120);	// 21116 lea     ax, [bp+var_120] ;~ 0B93:1136
cs=0xb93;eip=0x00113a; 	X(PUSH(ax));	// 21117 push    ax ;~ 0B93:113A
cs=0xb93;eip=0x00113b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 21118 push    [bp+var_2] ;~ 0B93:113B
cs=0xb93;eip=0x00113e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 21119 push    [bp+arg_2] ;~ 0B93:113E
cs=0xb93;eip=0x001141; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 21120 mov     al, [bp+arg_0] ;~ 0B93:1141
cs=0xb93;eip=0x001144; 	T(CBW);	// 21121 cbw ;~ 0B93:1144
cs=0xb93;eip=0x001145; 	X(PUSH(ax));	// 21122 push    ax ;~ 0B93:1145
cs=0xb93;eip=0x001146; 	X(PUSH(cs));	// 21123 push    cs ;~ 0B93:1146
cs=0xb93;eip=0x001147; 	J(CALL(skybox_op,0));	// 21124 call    near ptr skybox_op ;~ 0B93:1147
cs=0xb93;eip=0x00114a; 	T(ADD(sp, 0x0E));	// 21125 add     sp, 0Eh ;~ 0B93:114A
cs=0xb93;eip=0x00114d; 	X(MOV(*(dw*)(raddr(ss,bp+var_132)), ax));	// 21126 mov     [bp+var_132], ax ;~ 0B93:114D
cs=0xb93;eip=0x001151; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 21127 mov     bx, [bp+arg_2] ;~ 0B93:1151
cs=0xb93;eip=0x001154; 	X(PUSH(*(dw*)(raddr(ds,bx+6))));	// 21128 push    word ptr [bx+6] ;~ 0B93:1154
cs=0xb93;eip=0x001157; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 21129 push    word ptr [bx+4] ;~ 0B93:1157
cs=0xb93;eip=0x00115a; 	T(MOV(ax, 0x140));	// 21130 mov     ax, 140h ;~ 0B93:115A
cs=0xb93;eip=0x00115d; 	X(PUSH(ax));	// 21131 push    ax ;~ 0B93:115D
cs=0xb93;eip=0x00115e; 	T(SUB(ax, ax));	// 21132 sub     ax, ax ;~ 0B93:115E
cs=0xb93;eip=0x001160; 	X(PUSH(ax));	// 21133 push    ax ;~ 0B93:1160
cs=0xb93;eip=0x001161; 	J(CALLF(sprite_set_1_size,0));	// 21134 call    sprite_set_1_size ;~ 0B93:1161
cs=0xb93;eip=0x001166; 	T(ADD(sp, 8));	// 21135 add     sp, 8 ;~ 0B93:1166
cs=0xb93;eip=0x001169; 	J(CALLF(get_a_poly_info,0));	// 21136 call    get_a_poly_info ;~ 0B93:1169
cs=0xb93;eip=0x00116e; 	T(SUB(si, si));	// 21137 sub     si, si ;~ 0B93:116E
cs=0xb93;eip=0x001170; 	J(JMP(loc_1c0c2));	// 21138 jmp     loc_1C0C2 ;~ 0B93:1170
loc_1b084:
	// 5637 
cs=0xb93;eip=0x001174; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 21143 mov     al, [bp+var_F6] ;~ 0B93:1174
cs=0xb93;eip=0x001178; 	T(INC(al));	// 21144 inc     al ;~ 0B93:1178
cs=0xb93;eip=0x00117a; 	J(JMP(loc_1af74));	// 21145 jmp     loc_1AF74 ;~ 0B93:117A
loc_1b08e:
	// 5638 
cs=0xb93;eip=0x00117e; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 21150 mov     al, [bp+var_F6] ;~ 0B93:117E
loc_1b092:
	// 5639 
cs=0xb93;eip=0x001182; 	X(MOV(*(raddr(ss,bp+var_100)), al));	// 21153 mov     [bp+var_100], al ;~ 0B93:1182
cs=0xb93;eip=0x001186; 	T(MOV(al, *(raddr(ss,bp+var_102))));	// 21154 mov     al, [bp+var_102] ;~ 0B93:1186
cs=0xb93;eip=0x00118a; 	T(INC(al));	// 21155 inc     al ;~ 0B93:118A
cs=0xb93;eip=0x00118c; 	J(JMP(loc_1af7c));	// 21156 jmp     loc_1AF7C ;~ 0B93:118C
loc_1b0a0:
	// 5640 
cs=0xb93;eip=0x001190; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 21161 mov     al, [bp+var_F6] ;~ 0B93:1190
cs=0xb93;eip=0x001194; 	T(INC(al));	// 21162 inc     al ;~ 0B93:1194
cs=0xb93;eip=0x001196; 	J(JMP(loc_1b092));	// 21163 jmp     short loc_1B092 ;~ 0B93:1196
loc_1b0a8:
	// 5641 
cs=0xb93;eip=0x001198; 	X(INC(*(dw*)(raddr(ss,bp+var_de))));	// 21168 inc     [bp+var_DE] ;~ 0B93:1198
loc_1b0ac:
	// 5642 
cs=0xb93;eip=0x00119c; 	T(CMP(*(dw*)(raddr(ss,bp+var_de)), 4));	// 21171 cmp     [bp+var_DE], 4 ;~ 0B93:119C
cs=0xb93;eip=0x0011a1; 	J(JL(loc_1b0b6));	// 21172 jl      short loc_1B0B6 ;~ 0B93:11A1
cs=0xb93;eip=0x0011a3; 	J(JMP(loc_1aedf));	// 21173 jmp     loc_1AEDF ;~ 0B93:11A3
loc_1b0b6:
	// 5643 
cs=0xb93;eip=0x0011a6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_de))));	// 21177 mov     ax, [bp+var_DE] ;~ 0B93:11A6
cs=0xb93;eip=0x0011aa; 	T(OR(ax, ax));	// 21178 or      ax, ax ;~ 0B93:11AA
cs=0xb93;eip=0x0011ac; 	J(JNZ(loc_1b0c1));	// 21179 jnz     short loc_1B0C1 ;~ 0B93:11AC
cs=0xb93;eip=0x0011ae; 	J(JMP(loc_1af70));	// 21180 jmp     loc_1AF70 ;~ 0B93:11AE
loc_1b0c1:
	// 5644 
cs=0xb93;eip=0x0011b1; 	T(CMP(ax, 1));	// 21184 cmp     ax, 1 ;~ 0B93:11B1
cs=0xb93;eip=0x0011b4; 	J(JZ(loc_1b084));	// 21185 jz      short loc_1B084 ;~ 0B93:11B4
cs=0xb93;eip=0x0011b6; 	T(CMP(ax, 2));	// 21186 cmp     ax, 2 ;~ 0B93:11B6
cs=0xb93;eip=0x0011b9; 	J(JZ(loc_1b08e));	// 21187 jz      short loc_1B08E ;~ 0B93:11B9
cs=0xb93;eip=0x0011bb; 	T(CMP(ax, 3));	// 21188 cmp     ax, 3 ;~ 0B93:11BB
cs=0xb93;eip=0x0011be; 	J(JZ(loc_1b0a0));	// 21189 jz      short loc_1B0A0 ;~ 0B93:11BE
cs=0xb93;eip=0x0011c0; 	J(JMP(loc_1af80));	// 21190 jmp     loc_1AF80 ;~ 0B93:11C0
loc_1b0d4:
	// 5645 
cs=0xb93;eip=0x0011c4; 	X(MOV(word_42a42, offset(dseg,rect_unk6)));	// 21195 mov     word_42A42, offset rect_unk6 ;~ 0B93:11C4
loc_1b0da:
	// 5646 
cs=0xb93;eip=0x0011ca; 	T(MOV(al, *(raddr(ss,bp+var_122))));	// 21198 mov     al, [bp+var_122] ;~ 0B93:11CA
cs=0xb93;eip=0x0011ce; 	T(OR(al, 5));	// 21199 or      al, 5 ;~ 0B93:11CE
cs=0xb93;eip=0x0011d0; 	X(MOV(byte_42a4c, al));	// 21200 mov     byte_42A4C, al ;~ 0B93:11D0
cs=0xb93;eip=0x0011d3; 	X(MOV(word_42a44, 0));	// 21201 mov     word_42A44, 0 ;~ 0B93:11D3
cs=0xb93;eip=0x0011d9; 	X(MOV(word_42a46, 0));	// 21202 mov     word_42A46, 0 ;~ 0B93:11D9
cs=0xb93;eip=0x0011df; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12e))));	// 21203 mov     bx, [bp+var_12E] ;~ 0B93:11DF
cs=0xb93;eip=0x0011e3; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 21204 mov     ax, [bx+2] ;~ 0B93:11E3
cs=0xb93;eip=0x0011e6; 	X(MOV(word_42a48, ax));	// 21205 mov     word_42A48, ax ;~ 0B93:11E6
cs=0xb93;eip=0x0011e9; 	X(MOV(word_42a4a, 0x400));	// 21206 mov     word_42A4A, 400h ;~ 0B93:11E9
cs=0xb93;eip=0x0011ef; 	X(MOV(byte_42a4d, 0));	// 21207 mov     byte_42A4D, 0 ;~ 0B93:11EF
cs=0xb93;eip=0x0011f4; 	T(MOV(ax, offset(dseg,currenttransshape)));	// 21208 mov     ax, offset currenttransshape ;~ 0B93:11F4
cs=0xb93;eip=0x0011f7; 	X(PUSH(ax));	// 21209 push    ax ;~ 0B93:11F7
cs=0xb93;eip=0x0011f8; 	J(CALLF(transformed_shape_op,0));	// 21210 call    transformed_shape_op ;~ 0B93:11F8
cs=0xb93;eip=0x0011fd; 	T(ADD(sp, 2));	// 21211 add     sp, 2 ;~ 0B93:11FD
cs=0xb93;eip=0x001200; 	T(CBW);	// 21212 cbw ;~ 0B93:1200
cs=0xb93;eip=0x001201; 	X(MOV(*(dw*)(raddr(ss,bp+var_14e)), ax));	// 21213 mov     [bp+var_14E], ax ;~ 0B93:1201
cs=0xb93;eip=0x001205; 	T(OR(ax, ax));	// 21214 or      ax, ax ;~ 0B93:1205
cs=0xb93;eip=0x001207; 	J(JLE(loc_1b11c));	// 21215 jle     short loc_1B11C ;~ 0B93:1207
cs=0xb93;eip=0x001209; 	J(JMP(loc_1b03c));	// 21216 jmp     loc_1B03C ;~ 0B93:1209
loc_1b11c:
	// 5647 
cs=0xb93;eip=0x00120c; 	X(MOV(transformedshape_counter, 0));	// 21221 mov     transformedshape_counter, 0 ;~ 0B93:120C
cs=0xb93;eip=0x001211; 	X(MOV(curtransshape_ptr, offset(dseg,currenttransshape)));	// 21222 mov     curtransshape_ptr, offset currenttransshape ;~ 0B93:1211
cs=0xb93;eip=0x001217; 	T(CMP(*(raddr(ss,bp+elem_map_value)), 0));	// 21223 cmp     [bp+elem_map_value], 0 ;~ 0B93:1217
cs=0xb93;eip=0x00121b; 	J(JNZ(loc_1b130));	// 21224 jnz     short loc_1B130 ;~ 0B93:121B
cs=0xb93;eip=0x00121d; 	J(JMP(loc_1b71e));	// 21225 jmp     loc_1B71E ;~ 0B93:121D
loc_1b130:
	// 5648 
cs=0xb93;eip=0x001220; 	T(MOV(al, *(raddr(ss,bp+elem_map_value))));	// 21229 mov     al, [bp+elem_map_value] ;~ 0B93:1220
cs=0xb93;eip=0x001223; 	T(SUB(ah, ah));	// 21230 sub     ah, ah ;~ 0B93:1223
cs=0xb93;eip=0x001225; 	T(MOV(cx, ax));	// 21231 mov     cx, ax ;~ 0B93:1225
cs=0xb93;eip=0x001227; 	T(SHL(ax, 1));	// 21232 shl     ax, 1 ;~ 0B93:1227
cs=0xb93;eip=0x001229; 	T(ADD(ax, cx));	// 21233 add     ax, cx ;~ 0B93:1229
cs=0xb93;eip=0x00122b; 	T(SHL(ax, 1));	// 21234 shl     ax, 1 ;~ 0B93:122B
cs=0xb93;eip=0x00122d; 	T(ADD(ax, cx));	// 21235 add     ax, cx ;~ 0B93:122D
cs=0xb93;eip=0x00122f; 	T(SHL(ax, 1));	// 21236 shl     ax, 1 ;~ 0B93:122F
cs=0xb93;eip=0x001231; 	T(ADD(ax, offset(dseg,trkobjectlist)));	// 21237 add     ax, offset trkObjectList ;~ 0B93:1231
cs=0xb93;eip=0x001234; 	X(MOV(*(dw*)(raddr(ss,bp+var_12e)), ax));	// 21238 mov     [bp+var_12E], ax ;~ 0B93:1234
cs=0xb93;eip=0x001238; 	T(MOV(bx, ax));	// 21239 mov     bx, ax ;~ 0B93:1238
cs=0xb93;eip=0x00123a; 	T(TEST(*(raddr(ds,bx+0x0B)), 1));	// 21240 test    byte ptr [bx+0Bh], 1 ;~ 0B93:123A
cs=0xb93;eip=0x00123e; 	J(JZ(loc_1b168));	// 21241 jz      short loc_1B168 ;~ 0B93:123E
cs=0xb93;eip=0x001240; 	T(MOV(al, *(raddr(ss,bp+var_102))));	// 21242 mov     al, [bp+var_102] ;~ 0B93:1240
cs=0xb93;eip=0x001244; 	T(CBW);	// 21243 cbw ;~ 0B93:1244
cs=0xb93;eip=0x001245; 	T(MOV(bx, ax));	// 21244 mov     bx, ax ;~ 0B93:1245
cs=0xb93;eip=0x001247; 	T(SHL(bx, 1));	// 21245 shl     bx, 1 ;~ 0B93:1247
cs=0xb93;eip=0x001249; 	T(MOV(ax, *(dw*)(((db*)&trackpos)+bx)));	// 21246 mov     ax, trackpos[bx] ;~ 0B93:1249
cs=0xb93;eip=0x00124d; 	X(MOV(*(dw*)(raddr(ss,bp+var_5e)), ax));	// 21247 mov     [bp+var_5E], ax ;~ 0B93:124D
cs=0xb93;eip=0x001250; 	T(MOV(al, *(raddr(ss,bp+var_102))));	// 21248 mov     al, [bp+var_102] ;~ 0B93:1250
cs=0xb93;eip=0x001254; 	T(INC(al));	// 21249 inc     al ;~ 0B93:1254
cs=0xb93;eip=0x001256; 	J(JMP(loc_1b17c));	// 21250 jmp     short loc_1B17C ;~ 0B93:1256
loc_1b168:
	// 5649 
cs=0xb93;eip=0x001258; 	T(MOV(al, *(raddr(ss,bp+var_102))));	// 21254 mov     al, [bp+var_102] ;~ 0B93:1258
cs=0xb93;eip=0x00125c; 	T(CBW);	// 21255 cbw ;~ 0B93:125C
cs=0xb93;eip=0x00125d; 	T(MOV(bx, ax));	// 21256 mov     bx, ax ;~ 0B93:125D
cs=0xb93;eip=0x00125f; 	T(SHL(bx, 1));	// 21257 shl     bx, 1 ;~ 0B93:125F
cs=0xb93;eip=0x001261; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 21258 mov     ax, trackcenterpos[bx] ;~ 0B93:1261
cs=0xb93;eip=0x001265; 	X(MOV(*(dw*)(raddr(ss,bp+var_5e)), ax));	// 21259 mov     [bp+var_5E], ax ;~ 0B93:1265
cs=0xb93;eip=0x001268; 	T(MOV(al, *(raddr(ss,bp+var_102))));	// 21260 mov     al, [bp+var_102] ;~ 0B93:1268
loc_1b17c:
	// 5650 
cs=0xb93;eip=0x00126c; 	X(MOV(*(raddr(ss,bp+var_12c)), al));	// 21263 mov     [bp+var_12C], al ;~ 0B93:126C
cs=0xb93;eip=0x001270; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12e))));	// 21264 mov     bx, [bp+var_12E] ;~ 0B93:1270
cs=0xb93;eip=0x001274; 	T(TEST(*(raddr(ds,bx+0x0B)), 2));	// 21265 test    byte ptr [bx+0Bh], 2 ;~ 0B93:1274
cs=0xb93;eip=0x001278; 	J(JZ(loc_1b1a2));	// 21266 jz      short loc_1B1A2 ;~ 0B93:1278
cs=0xb93;eip=0x00127a; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 21267 mov     al, [bp+var_F6] ;~ 0B93:127A
cs=0xb93;eip=0x00127e; 	T(CBW);	// 21268 cbw ;~ 0B93:127E
cs=0xb93;eip=0x00127f; 	T(MOV(bx, ax));	// 21269 mov     bx, ax ;~ 0B93:127F
cs=0xb93;eip=0x001281; 	T(SHL(bx, 1));	// 21270 shl     bx, 1 ;~ 0B93:1281
cs=0xb93;eip=0x001283; 	T(MOV(ax, *(dw*)((((db*)trackpos2)+2)+bx)));	// 21271 mov     ax, (trackpos2+2)[bx] ;~ 0B93:1283
cs=0xb93;eip=0x001287; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), ax));	// 21272 mov     [bp+var_3A], ax ;~ 0B93:1287
cs=0xb93;eip=0x00128a; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 21273 mov     al, [bp+var_F6] ;~ 0B93:128A
cs=0xb93;eip=0x00128e; 	T(INC(al));	// 21274 inc     al ;~ 0B93:128E
cs=0xb93;eip=0x001290; 	J(JMP(loc_1b1b6));	// 21275 jmp     short loc_1B1B6 ;~ 0B93:1290
loc_1b1a2:
	// 5651 
cs=0xb93;eip=0x001292; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 21279 mov     al, [bp+var_F6] ;~ 0B93:1292
cs=0xb93;eip=0x001296; 	T(CBW);	// 21280 cbw ;~ 0B93:1296
cs=0xb93;eip=0x001297; 	T(MOV(bx, ax));	// 21281 mov     bx, ax ;~ 0B93:1297
cs=0xb93;eip=0x001299; 	T(SHL(bx, 1));	// 21282 shl     bx, 1 ;~ 0B93:1299
cs=0xb93;eip=0x00129b; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 21283 mov     ax, trackcenterpos2[bx] ;~ 0B93:129B
cs=0xb93;eip=0x00129f; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), ax));	// 21284 mov     [bp+var_3A], ax ;~ 0B93:129F
cs=0xb93;eip=0x0012a2; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 21285 mov     al, [bp+var_F6] ;~ 0B93:12A2
loc_1b1b6:
	// 5652 
cs=0xb93;eip=0x0012a6; 	X(MOV(*(raddr(ss,bp+var_100)), al));	// 21288 mov     [bp+var_100], al ;~ 0B93:12A6
cs=0xb93;eip=0x0012aa; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3a))));	// 21289 mov     ax, [bp+var_3A] ;~ 0B93:12AA
cs=0xb93;eip=0x0012ad; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_58))));	// 21290 sub     ax, [bp+var_58] ;~ 0B93:12AD
cs=0xb93;eip=0x0012b0; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 21291 mov     [bp+var_44], ax ;~ 0B93:12B0
cs=0xb93;eip=0x0012b3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_48))));	// 21292 mov     ax, [bp+var_48] ;~ 0B93:12B3
cs=0xb93;eip=0x0012b6; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_56))));	// 21293 sub     ax, [bp+var_56] ;~ 0B93:12B6
cs=0xb93;eip=0x0012b9; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), ax));	// 21294 mov     [bp+var_42], ax ;~ 0B93:12B9
cs=0xb93;eip=0x0012bc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_5e))));	// 21295 mov     ax, [bp+var_5E] ;~ 0B93:12BC
cs=0xb93;eip=0x0012bf; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_54))));	// 21296 sub     ax, [bp+var_54] ;~ 0B93:12BF
cs=0xb93;eip=0x0012c2; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 21297 mov     [bp+var_40], ax ;~ 0B93:12C2
cs=0xb93;eip=0x0012c5; 	T(CMP(*(dw*)(raddr(ss,bp+var_48)), 0));	// 21298 cmp     [bp+var_48], 0 ;~ 0B93:12C5
cs=0xb93;eip=0x0012c9; 	J(JNZ(loc_1b1de));	// 21299 jnz     short loc_1B1DE ;~ 0B93:12C9
cs=0xb93;eip=0x0012cb; 	J(JMP(loc_1b2ae));	// 21300 jmp     loc_1B2AE ;~ 0B93:12CB
loc_1b1de:
	// 5653 
cs=0xb93;eip=0x0012ce; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12e))));	// 21304 mov     bx, [bp+var_12E] ;~ 0B93:12CE
cs=0xb93;eip=0x0012d2; 	T(MOV(al, *(raddr(ds,bx+0x0B))));	// 21305 mov     al, [bx+0Bh] ;~ 0B93:12D2
cs=0xb93;eip=0x0012d5; 	T(CBW);	// 21306 cbw ;~ 0B93:12D5
cs=0xb93;eip=0x0012d6; 	T(OR(ax, ax));	// 21307 or      ax, ax ;~ 0B93:12D6
cs=0xb93;eip=0x0012d8; 	J(JZ(loc_1b1fc));	// 21308 jz      short loc_1B1FC ;~ 0B93:12D8
cs=0xb93;eip=0x0012da; 	T(CMP(ax, 1));	// 21309 cmp     ax, 1 ;~ 0B93:12DA
cs=0xb93;eip=0x0012dd; 	J(JZ(loc_1b20e));	// 21310 jz      short loc_1B20E ;~ 0B93:12DD
cs=0xb93;eip=0x0012df; 	T(CMP(ax, 2));	// 21311 cmp     ax, 2 ;~ 0B93:12DF
cs=0xb93;eip=0x0012e2; 	J(JZ(loc_1b21a));	// 21312 jz      short loc_1B21A ;~ 0B93:12E2
cs=0xb93;eip=0x0012e4; 	T(CMP(ax, 3));	// 21313 cmp     ax, 3 ;~ 0B93:12E4
cs=0xb93;eip=0x0012e7; 	J(JZ(loc_1b226));	// 21314 jz      short loc_1B226 ;~ 0B93:12E7
cs=0xb93;eip=0x0012e9; 	J(JMP(loc_1b205));	// 21315 jmp     short loc_1B205 ;~ 0B93:12E9
loc_1b1fc:
	// 5654 
cs=0xb93;eip=0x0012ec; 	T(MOV(di, 1));	// 21320 mov     di, 1 ;~ 0B93:12EC
cs=0xb93;eip=0x0012ef; 	X(MOV(*(dw*)(raddr(ss,bp+var_da)), offset(dseg,unk_3c0a2)));	// 21321 mov     [bp+var_DA], offset unk_3C0A2 ;~ 0B93:12EF
loc_1b205:
	// 5655 
cs=0xb93;eip=0x0012f5; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), 0));	// 21325 mov     [bp+var_DE], 0 ;~ 0B93:12F5
cs=0xb93;eip=0x0012fb; 	J(JMP(loc_1b236));	// 21326 jmp     short loc_1B236 ;~ 0B93:12FB
loc_1b20e:
	// 5656 
cs=0xb93;eip=0x0012fe; 	T(MOV(di, 2));	// 21331 mov     di, 2 ;~ 0B93:12FE
cs=0xb93;eip=0x001301; 	X(MOV(*(dw*)(raddr(ss,bp+var_da)), offset(dseg,unk_3c0a6)));	// 21332 mov     [bp+var_DA], offset unk_3C0A6 ;~ 0B93:1301
cs=0xb93;eip=0x001307; 	J(JMP(loc_1b205));	// 21333 jmp     short loc_1B205 ;~ 0B93:1307
loc_1b21a:
	// 5657 
cs=0xb93;eip=0x00130a; 	T(MOV(di, 2));	// 21338 mov     di, 2 ;~ 0B93:130A
cs=0xb93;eip=0x00130d; 	X(MOV(*(dw*)(raddr(ss,bp+var_da)), offset(dseg,unk_3c0ae)));	// 21339 mov     [bp+var_DA], offset unk_3C0AE ;~ 0B93:130D
cs=0xb93;eip=0x001313; 	J(JMP(loc_1b205));	// 21340 jmp     short loc_1B205 ;~ 0B93:1313
loc_1b226:
	// 5658 
cs=0xb93;eip=0x001316; 	T(MOV(di, 4));	// 21345 mov     di, 4 ;~ 0B93:1316
cs=0xb93;eip=0x001319; 	X(MOV(*(dw*)(raddr(ss,bp+var_da)), offset(dseg,unk_3c0b6)));	// 21346 mov     [bp+var_DA], offset unk_3C0B6 ;~ 0B93:1319
cs=0xb93;eip=0x00131f; 	J(JMP(loc_1b205));	// 21347 jmp     short loc_1B205 ;~ 0B93:131F
loc_1b232:
	// 5659 
cs=0xb93;eip=0x001322; 	X(INC(*(dw*)(raddr(ss,bp+var_de))));	// 21352 inc     [bp+var_DE] ;~ 0B93:1322
loc_1b236:
	// 5660 
cs=0xb93;eip=0x001326; 	T(CMP(*(dw*)(raddr(ss,bp+var_de)), di));	// 21355 cmp     [bp+var_DE], di ;~ 0B93:1326
cs=0xb93;eip=0x00132a; 	J(JGE(loc_1b2ae));	// 21356 jge     short loc_1B2AE ;~ 0B93:132A
cs=0xb93;eip=0x00132c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_da))));	// 21357 mov     bx, [bp+var_DA] ;~ 0B93:132C
cs=0xb93;eip=0x001330; 	X(ADD(*(dw*)(raddr(ss,bp+var_da)), 2));	// 21358 add     [bp+var_DA], 2 ;~ 0B93:1330
cs=0xb93;eip=0x001335; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 21359 mov     ax, [bx] ;~ 0B93:1335
cs=0xb93;eip=0x001337; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_44))));	// 21360 add     ax, [bp+var_44] ;~ 0B93:1337
cs=0xb93;eip=0x00133a; 	X(MOV(currenttransshape, ax));	// 21361 mov     currenttransshape, ax ;~ 0B93:133A
cs=0xb93;eip=0x00133d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_42))));	// 21362 mov     ax, [bp+var_42] ;~ 0B93:133D
cs=0xb93;eip=0x001340; 	X(MOV(word_42a3c, ax));	// 21363 mov     word_42A3C, ax ;~ 0B93:1340
cs=0xb93;eip=0x001343; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_da))));	// 21364 mov     bx, [bp+var_DA] ;~ 0B93:1343
cs=0xb93;eip=0x001347; 	X(ADD(*(dw*)(raddr(ss,bp+var_da)), 2));	// 21365 add     [bp+var_DA], 2 ;~ 0B93:1347
cs=0xb93;eip=0x00134c; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 21366 mov     ax, [bx] ;~ 0B93:134C
cs=0xb93;eip=0x00134e; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_40))));	// 21367 add     ax, [bp+var_40] ;~ 0B93:134E
cs=0xb93;eip=0x001351; 	X(MOV(word_42a3e, ax));	// 21368 mov     word_42A3E, ax ;~ 0B93:1351
cs=0xb93;eip=0x001354; 	X(MOV(word_42a40, offset(dseg,unk_4316e)));	// 21369 mov     word_42A40, offset unk_4316E ;~ 0B93:1354
cs=0xb93;eip=0x00135a; 	X(MOV(word_42a42, offset(dseg,rect_unk6)));	// 21370 mov     word_42A42, offset rect_unk6 ;~ 0B93:135A
cs=0xb93;eip=0x001360; 	T(MOV(al, *(raddr(ss,bp+var_122))));	// 21371 mov     al, [bp+var_122] ;~ 0B93:1360
cs=0xb93;eip=0x001364; 	T(OR(al, 5));	// 21372 or      al, 5 ;~ 0B93:1364
cs=0xb93;eip=0x001366; 	X(MOV(byte_42a4c, al));	// 21373 mov     byte_42A4C, al ;~ 0B93:1366
cs=0xb93;eip=0x001369; 	X(MOV(word_42a44, 0));	// 21374 mov     word_42A44, 0 ;~ 0B93:1369
cs=0xb93;eip=0x00136f; 	X(MOV(word_42a46, 0));	// 21375 mov     word_42A46, 0 ;~ 0B93:136F
cs=0xb93;eip=0x001375; 	X(MOV(word_42a48, 0));	// 21376 mov     word_42A48, 0 ;~ 0B93:1375
cs=0xb93;eip=0x00137b; 	X(MOV(word_42a4a, 0x800));	// 21377 mov     word_42A4A, 800h ;~ 0B93:137B
cs=0xb93;eip=0x001381; 	X(MOV(byte_42a4d, 0));	// 21378 mov     byte_42A4D, 0 ;~ 0B93:1381
cs=0xb93;eip=0x001386; 	T(MOV(ax, offset(dseg,currenttransshape)));	// 21379 mov     ax, offset currenttransshape ;~ 0B93:1386
cs=0xb93;eip=0x001389; 	X(PUSH(ax));	// 21380 push    ax ;~ 0B93:1389
cs=0xb93;eip=0x00138a; 	J(CALLF(transformed_shape_op,0));	// 21381 call    transformed_shape_op ;~ 0B93:138A
cs=0xb93;eip=0x00138f; 	T(ADD(sp, 2));	// 21382 add     sp, 2 ;~ 0B93:138F
cs=0xb93;eip=0x001392; 	T(CBW);	// 21383 cbw ;~ 0B93:1392
cs=0xb93;eip=0x001393; 	X(MOV(*(dw*)(raddr(ss,bp+var_14e)), ax));	// 21384 mov     [bp+var_14E], ax ;~ 0B93:1393
cs=0xb93;eip=0x001397; 	T(OR(ax, ax));	// 21385 or      ax, ax ;~ 0B93:1397
cs=0xb93;eip=0x001399; 	J(JLE(loc_1b232));	// 21386 jle     short loc_1B232 ;~ 0B93:1399
cs=0xb93;eip=0x00139b; 	J(JMP(loc_1b03c));	// 21387 jmp     loc_1B03C ;~ 0B93:139B
loc_1b2ae:
	// 5661 
cs=0xb93;eip=0x00139e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12e))));	// 21392 mov     bx, [bp+var_12E] ;~ 0B93:139E
cs=0xb93;eip=0x0013a2; 	T(CMP(*(raddr(ds,bx+8)), 0));	// 21393 cmp     byte ptr [bx+8], 0 ;~ 0B93:13A2
cs=0xb93;eip=0x0013a6; 	J(JNZ(loc_1b2bb));	// 21394 jnz     short loc_1B2BB ;~ 0B93:13A6
cs=0xb93;eip=0x0013a8; 	J(JMP(loc_1b374));	// 21395 jmp     loc_1B374 ;~ 0B93:13A8
loc_1b2bb:
	// 5662 
cs=0xb93;eip=0x0013ab; 	T(MOV(al, *(raddr(ds,bx+8))));	// 21399 mov     al, [bx+8] ;~ 0B93:13AB
cs=0xb93;eip=0x0013ae; 	T(SUB(ah, ah));	// 21400 sub     ah, ah ;~ 0B93:13AE
cs=0xb93;eip=0x0013b0; 	T(MOV(cx, ax));	// 21401 mov     cx, ax ;~ 0B93:13B0
cs=0xb93;eip=0x0013b2; 	T(SHL(ax, 1));	// 21402 shl     ax, 1 ;~ 0B93:13B2
cs=0xb93;eip=0x0013b4; 	T(ADD(ax, cx));	// 21403 add     ax, cx ;~ 0B93:13B4
cs=0xb93;eip=0x0013b6; 	T(SHL(ax, 1));	// 21404 shl     ax, 1 ;~ 0B93:13B6
cs=0xb93;eip=0x0013b8; 	T(ADD(ax, cx));	// 21405 add     ax, cx ;~ 0B93:13B8
cs=0xb93;eip=0x0013ba; 	T(SHL(ax, 1));	// 21406 shl     ax, 1 ;~ 0B93:13BA
cs=0xb93;eip=0x0013bc; 	T(ADD(ax, offset(dseg,trkobjectlist)));	// 21407 add     ax, offset trkObjectList ;~ 0B93:13BC
cs=0xb93;eip=0x0013bf; 	X(MOV(*(dw*)(raddr(ss,bp+var_34)), ax));	// 21408 mov     [bp+var_34], ax ;~ 0B93:13BF
cs=0xb93;eip=0x0013c2; 	T(CMP(*(raddr(ss,bp+var_fc)), 0));	// 21409 cmp     [bp+var_FC], 0 ;~ 0B93:13C2
cs=0xb93;eip=0x0013c7; 	J(JZ(loc_1b2e0));	// 21410 jz      short loc_1B2E0 ;~ 0B93:13C7
cs=0xb93;eip=0x0013c9; 	T(MOV(bx, ax));	// 21411 mov     bx, ax ;~ 0B93:13C9
cs=0xb93;eip=0x0013cb; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 21412 mov     ax, [bx+6] ;~ 0B93:13CB
cs=0xb93;eip=0x0013ce; 	J(JMP(loc_1b2e6));	// 21413 jmp     short loc_1B2E6 ;~ 0B93:13CE
loc_1b2e0:
	// 5663 
cs=0xb93;eip=0x0013d0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_34))));	// 21417 mov     bx, [bp+var_34] ;~ 0B93:13D0
cs=0xb93;eip=0x0013d3; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 21418 mov     ax, [bx+4] ;~ 0B93:13D3
loc_1b2e6:
	// 5664 
cs=0xb93;eip=0x0013d6; 	X(MOV(word_42a54, ax));	// 21421 mov     word_42A54, ax ;~ 0B93:13D6
cs=0xb93;eip=0x0013d9; 	T(OR(ax, ax));	// 21422 or      ax, ax ;~ 0B93:13D9
cs=0xb93;eip=0x0013db; 	J(JNZ(loc_1b2f0));	// 21423 jnz     short loc_1B2F0 ;~ 0B93:13DB
cs=0xb93;eip=0x0013dd; 	J(JMP(loc_1b374));	// 21424 jmp     loc_1B374 ;~ 0B93:13DD
loc_1b2f0:
	// 5665 
cs=0xb93;eip=0x0013e0; 	X(PUSH(si));	// 21428 push    si ;~ 0B93:13E0
cs=0xb93;eip=0x0013e1; 	X(PUSH(di));	// 21429 push    di ;~ 0B93:13E1
cs=0xb93;eip=0x0013e2; 	T(MOV(di, offset(dseg,unk_42a4e)));	// 21430 mov     di, offset unk_42A4E ;~ 0B93:13E2
cs=0xb93;eip=0x0013e5; 	T(si = bp+var_44);	// 21431 lea     si, [bp+var_44] ;~ 0B93:13E5
cs=0xb93;eip=0x0013e8; 	X(PUSH(ds));	// 21432 push    ds ;~ 0B93:13E8
cs=0xb93;eip=0x0013e9; 	X(POP(es));	// 21433 pop     es ;~ 0B93:13E9
cs=0xb93;eip=0x0013ea; 	X(MOVSW);	// 21435 movsw ;~ 0B93:13EA
cs=0xb93;eip=0x0013eb; 	X(MOVSW);	// 21436 movsw ;~ 0B93:13EB
cs=0xb93;eip=0x0013ec; 	X(MOVSW);	// 21437 movsw ;~ 0B93:13EC
cs=0xb93;eip=0x0013ed; 	X(POP(di));	// 21438 pop     di ;~ 0B93:13ED
cs=0xb93;eip=0x0013ee; 	X(POP(si));	// 21439 pop     si ;~ 0B93:13EE
cs=0xb93;eip=0x0013ef; 	X(MOV(word_42a58, 0));	// 21440 mov     word_42A58, 0 ;~ 0B93:13EF
cs=0xb93;eip=0x0013f5; 	X(MOV(word_42a5a, 0));	// 21441 mov     word_42A5A, 0 ;~ 0B93:13F5
cs=0xb93;eip=0x0013fb; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 21442 mov     ax, [bx+2] ;~ 0B93:13FB
cs=0xb93;eip=0x0013fe; 	X(MOV(word_42a5c, ax));	// 21443 mov     word_42A5C, ax ;~ 0B93:13FE
cs=0xb93;eip=0x001401; 	T(CMP(*(raddr(ds,bx+0x0B)), 0));	// 21444 cmp     byte ptr [bx+0Bh], 0 ;~ 0B93:1401
cs=0xb93;eip=0x001405; 	J(JZ(loc_1b320));	// 21445 jz      short loc_1B320 ;~ 0B93:1405
cs=0xb93;eip=0x001407; 	X(MOV(word_42a5e, 0x400));	// 21446 mov     word_42A5E, 400h ;~ 0B93:1407
cs=0xb93;eip=0x00140d; 	J(JMP(loc_1b326));	// 21447 jmp     short loc_1B326 ;~ 0B93:140D
loc_1b320:
	// 5666 
cs=0xb93;eip=0x001410; 	X(MOV(word_42a5e, 0x800));	// 21452 mov     word_42A5E, 800h ;~ 0B93:1410
loc_1b326:
	// 5667 
cs=0xb93;eip=0x001416; 	T(CMP(*(raddr(ds,bx+9)), 0));	// 21455 cmp     byte ptr [bx+9], 0 ;~ 0B93:1416
cs=0xb93;eip=0x00141a; 	J(JL(loc_1b332));	// 21456 jl      short loc_1B332 ;~ 0B93:141A
cs=0xb93;eip=0x00141c; 	T(MOV(al, *(raddr(ds,bx+9))));	// 21457 mov     al, [bx+9] ;~ 0B93:141C
cs=0xb93;eip=0x00141f; 	J(JMP(loc_1b336));	// 21458 jmp     short loc_1B336 ;~ 0B93:141F
loc_1b332:
	// 5668 
cs=0xb93;eip=0x001422; 	T(MOV(al, *(raddr(ss,bp+var_e4))));	// 21463 mov     al, [bp+var_E4] ;~ 0B93:1422
loc_1b336:
	// 5669 
cs=0xb93;eip=0x001426; 	X(MOV(byte_42a61, al));	// 21466 mov     byte_42A61, al ;~ 0B93:1426
cs=0xb93;eip=0x001429; 	T(MOV(al, *(raddr(ds,bx+0x0A))));	// 21467 mov     al, [bx+0Ah] ;~ 0B93:1429
cs=0xb93;eip=0x00142c; 	T(OR(al, *(raddr(ss,bp+var_122))));	// 21468 or      al, [bp+var_122] ;~ 0B93:142C
cs=0xb93;eip=0x001430; 	T(OR(al, 4));	// 21469 or      al, 4 ;~ 0B93:1430
cs=0xb93;eip=0x001432; 	X(MOV(byte_42a60, al));	// 21470 mov     byte_42A60, al ;~ 0B93:1432
cs=0xb93;eip=0x001435; 	T(TEST(byte_42a60, 1));	// 21471 test    byte_42A60, 1 ;~ 0B93:1435
cs=0xb93;eip=0x00143a; 	J(JZ(loc_1b36a));	// 21472 jz      short loc_1B36A ;~ 0B93:143A
cs=0xb93;eip=0x00143c; 	X(MOV(word_42a56, offset(dseg,rect_unk2)));	// 21473 mov     word_42A56, offset rect_unk2 ;~ 0B93:143C
cs=0xb93;eip=0x001442; 	T(MOV(ax, offset(dseg,unk_42a4e)));	// 21474 mov     ax, offset unk_42A4E ;~ 0B93:1442
cs=0xb93;eip=0x001445; 	X(PUSH(ax));	// 21475 push    ax ;~ 0B93:1445
cs=0xb93;eip=0x001446; 	J(CALLF(transformed_shape_op,0));	// 21476 call    transformed_shape_op ;~ 0B93:1446
cs=0xb93;eip=0x00144b; 	T(ADD(sp, 2));	// 21477 add     sp, 2 ;~ 0B93:144B
cs=0xb93;eip=0x00144e; 	T(CBW);	// 21478 cbw ;~ 0B93:144E
cs=0xb93;eip=0x00144f; 	X(MOV(*(dw*)(raddr(ss,bp+var_14e)), ax));	// 21479 mov     [bp+var_14E], ax ;~ 0B93:144F
cs=0xb93;eip=0x001453; 	T(OR(ax, ax));	// 21480 or      ax, ax ;~ 0B93:1453
cs=0xb93;eip=0x001455; 	J(JLE(loc_1b374));	// 21481 jle     short loc_1B374 ;~ 0B93:1455
cs=0xb93;eip=0x001457; 	J(JMP(loc_1b03c));	// 21482 jmp     loc_1B03C ;~ 0B93:1457
loc_1b36a:
	// 5670 
cs=0xb93;eip=0x00145a; 	X(MOV(word_42a56, offset(dseg,rect_unk6)));	// 21486 mov     word_42A56, offset rect_unk6 ;~ 0B93:145A
cs=0xb93;eip=0x001460; 	X(MOV(*(raddr(ss,bp+var_4e)), 1));	// 21487 mov     [bp+var_4E], 1 ;~ 0B93:1460
loc_1b374:
	// 5671 
cs=0xb93;eip=0x001464; 	T(CMP(*(raddr(ss,bp+var_fc)), 0));	// 21491 cmp     [bp+var_FC], 0 ;~ 0B93:1464
cs=0xb93;eip=0x001469; 	J(JZ(loc_1b384));	// 21492 jz      short loc_1B384 ;~ 0B93:1469
cs=0xb93;eip=0x00146b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12e))));	// 21493 mov     bx, [bp+var_12E] ;~ 0B93:146B
cs=0xb93;eip=0x00146f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 21494 mov     ax, [bx+6] ;~ 0B93:146F
cs=0xb93;eip=0x001472; 	J(JMP(loc_1b38b));	// 21495 jmp     short loc_1B38B ;~ 0B93:1472
loc_1b384:
	// 5672 
cs=0xb93;eip=0x001474; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12e))));	// 21499 mov     bx, [bp+var_12E] ;~ 0B93:1474
cs=0xb93;eip=0x001478; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 21500 mov     ax, [bx+4] ;~ 0B93:1478
loc_1b38b:
	// 5673 
cs=0xb93;eip=0x00147b; 	X(MOV(word_42a40, ax));	// 21503 mov     word_42A40, ax ;~ 0B93:147B
cs=0xb93;eip=0x00147e; 	X(PUSH(si));	// 21504 push    si ;~ 0B93:147E
cs=0xb93;eip=0x00147f; 	X(PUSH(di));	// 21505 push    di ;~ 0B93:147F
cs=0xb93;eip=0x001480; 	T(MOV(di, offset(dseg,currenttransshape)));	// 21506 mov     di, offset currenttransshape ;~ 0B93:1480
cs=0xb93;eip=0x001483; 	T(si = bp+var_44);	// 21507 lea     si, [bp+var_44] ;~ 0B93:1483
cs=0xb93;eip=0x001486; 	X(PUSH(ds));	// 21508 push    ds ;~ 0B93:1486
cs=0xb93;eip=0x001487; 	X(POP(es));	// 21509 pop     es ;~ 0B93:1487
cs=0xb93;eip=0x001488; 	X(MOVSW);	// 21510 movsw ;~ 0B93:1488
cs=0xb93;eip=0x001489; 	X(MOVSW);	// 21511 movsw ;~ 0B93:1489
cs=0xb93;eip=0x00148a; 	X(MOVSW);	// 21512 movsw ;~ 0B93:148A
cs=0xb93;eip=0x00148b; 	X(POP(di));	// 21513 pop     di ;~ 0B93:148B
cs=0xb93;eip=0x00148c; 	X(POP(si));	// 21514 pop     si ;~ 0B93:148C
cs=0xb93;eip=0x00148d; 	X(MOV(word_42a44, 0));	// 21515 mov     word_42A44, 0 ;~ 0B93:148D
cs=0xb93;eip=0x001493; 	X(MOV(word_42a46, 0));	// 21516 mov     word_42A46, 0 ;~ 0B93:1493
cs=0xb93;eip=0x001499; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 21517 mov     ax, [bx+2] ;~ 0B93:1499
cs=0xb93;eip=0x00149c; 	X(MOV(word_42a48, ax));	// 21518 mov     word_42A48, ax ;~ 0B93:149C
cs=0xb93;eip=0x00149f; 	T(CMP(*(raddr(ds,bx+0x0B)), 0));	// 21519 cmp     byte ptr [bx+0Bh], 0 ;~ 0B93:149F
cs=0xb93;eip=0x0014a3; 	J(JZ(loc_1b3be));	// 21520 jz      short loc_1B3BE ;~ 0B93:14A3
cs=0xb93;eip=0x0014a5; 	X(MOV(word_42a4a, 0x400));	// 21521 mov     word_42A4A, 400h ;~ 0B93:14A5
cs=0xb93;eip=0x0014ab; 	J(JMP(loc_1b3c4));	// 21522 jmp     short loc_1B3C4 ;~ 0B93:14AB
loc_1b3be:
	// 5674 
cs=0xb93;eip=0x0014ae; 	X(MOV(word_42a4a, 0x800));	// 21527 mov     word_42A4A, 800h ;~ 0B93:14AE
loc_1b3c4:
	// 5675 
cs=0xb93;eip=0x0014b4; 	T(MOV(al, *(raddr(ds,bx+0x0A))));	// 21530 mov     al, [bx+0Ah] ;~ 0B93:14B4
cs=0xb93;eip=0x0014b7; 	T(OR(al, *(raddr(ss,bp+var_122))));	// 21531 or      al, [bp+var_122] ;~ 0B93:14B7
cs=0xb93;eip=0x0014bb; 	T(OR(al, 4));	// 21532 or      al, 4 ;~ 0B93:14BB
cs=0xb93;eip=0x0014bd; 	X(MOV(byte_42a4c, al));	// 21533 mov     byte_42A4C, al ;~ 0B93:14BD
cs=0xb93;eip=0x0014c0; 	T(CMP(*(raddr(ds,bx+9)), 0));	// 21534 cmp     byte ptr [bx+9], 0 ;~ 0B93:14C0
cs=0xb93;eip=0x0014c4; 	J(JL(loc_1b3dc));	// 21535 jl      short loc_1B3DC ;~ 0B93:14C4
cs=0xb93;eip=0x0014c6; 	T(MOV(al, *(raddr(ds,bx+9))));	// 21536 mov     al, [bx+9] ;~ 0B93:14C6
cs=0xb93;eip=0x0014c9; 	J(JMP(loc_1b3e0));	// 21537 jmp     short loc_1B3E0 ;~ 0B93:14C9
loc_1b3dc:
	// 5676 
cs=0xb93;eip=0x0014cc; 	T(MOV(al, *(raddr(ss,bp+var_e4))));	// 21542 mov     al, [bp+var_E4] ;~ 0B93:14CC
loc_1b3e0:
	// 5677 
cs=0xb93;eip=0x0014d0; 	X(MOV(byte_42a4d, al));	// 21545 mov     byte_42A4D, al ;~ 0B93:14D0
cs=0xb93;eip=0x0014d3; 	T(TEST(*(raddr(ds,bx+0x0A)), 1));	// 21546 test    byte ptr [bx+0Ah], 1 ;~ 0B93:14D3
cs=0xb93;eip=0x0014d7; 	J(JZ(loc_1b408));	// 21547 jz      short loc_1B408 ;~ 0B93:14D7
cs=0xb93;eip=0x0014d9; 	X(MOV(word_42a42, offset(dseg,rect_unk2)));	// 21548 mov     word_42A42, offset rect_unk2 ;~ 0B93:14D9
cs=0xb93;eip=0x0014df; 	T(MOV(ax, offset(dseg,currenttransshape)));	// 21549 mov     ax, offset currenttransshape ;~ 0B93:14DF
cs=0xb93;eip=0x0014e2; 	X(PUSH(ax));	// 21550 push    ax ;~ 0B93:14E2
cs=0xb93;eip=0x0014e3; 	J(CALLF(transformed_shape_op,0));	// 21551 call    transformed_shape_op ;~ 0B93:14E3
cs=0xb93;eip=0x0014e8; 	T(ADD(sp, 2));	// 21552 add     sp, 2 ;~ 0B93:14E8
cs=0xb93;eip=0x0014eb; 	T(CBW);	// 21553 cbw ;~ 0B93:14EB
cs=0xb93;eip=0x0014ec; 	X(MOV(*(dw*)(raddr(ss,bp+var_14e)), ax));	// 21554 mov     [bp+var_14E], ax ;~ 0B93:14EC
cs=0xb93;eip=0x0014f0; 	T(OR(ax, ax));	// 21555 or      ax, ax ;~ 0B93:14F0
cs=0xb93;eip=0x0014f2; 	J(JLE(loc_1b46a));	// 21556 jle     short loc_1B46A ;~ 0B93:14F2
cs=0xb93;eip=0x0014f4; 	J(JMP(loc_1b03c));	// 21557 jmp     loc_1B03C ;~ 0B93:14F4
loc_1b408:
	// 5678 
cs=0xb93;eip=0x0014f8; 	X(MOV(word_42a42, offset(dseg,rect_unk6)));	// 21562 mov     word_42A42, offset rect_unk6 ;~ 0B93:14F8
cs=0xb93;eip=0x0014fe; 	T(SUB(ax, ax));	// 21563 sub     ax, ax ;~ 0B93:14FE
cs=0xb93;eip=0x001500; 	X(PUSH(ax));	// 21564 push    ax ;~ 0B93:1500
cs=0xb93;eip=0x001501; 	X(PUSH(ax));	// 21565 push    ax ;~ 0B93:1501
cs=0xb93;eip=0x001502; 	X(PUSH(cs));	// 21566 push    cs ;~ 0B93:1502
cs=0xb93;eip=0x001503; 	J(CALL(transformed_shape_add_for_sort,0));	// 21567 call    near ptr transformed_shape_add_for_sort ;~ 0B93:1503
cs=0xb93;eip=0x001506; 	T(ADD(sp, 4));	// 21568 add     sp, 4 ;~ 0B93:1506
cs=0xb93;eip=0x001509; 	T(CMP(*(raddr(ss,bp+var_4e)), 0));	// 21569 cmp     [bp+var_4E], 0 ;~ 0B93:1509
cs=0xb93;eip=0x00150d; 	J(JZ(loc_1b449));	// 21570 jz      short loc_1B449 ;~ 0B93:150D
cs=0xb93;eip=0x00150f; 	X(MOV(*(raddr(ss,bp+var_4e)), 0));	// 21571 mov     [bp+var_4E], 0 ;~ 0B93:150F
cs=0xb93;eip=0x001513; 	T(SUB(ax, ax));	// 21572 sub     ax, ax ;~ 0B93:1513
cs=0xb93;eip=0x001515; 	X(PUSH(ax));	// 21573 push    ax ;~ 0B93:1515
cs=0xb93;eip=0x001516; 	T(MOV(ax, 0x0F800));	// 21574 mov     ax, 0F800h ;~ 0B93:1516
cs=0xb93;eip=0x001519; 	X(PUSH(ax));	// 21575 push    ax ;~ 0B93:1519
cs=0xb93;eip=0x00151a; 	X(PUSH(cs));	// 21576 push    cs ;~ 0B93:151A
cs=0xb93;eip=0x00151b; 	J(CALL(transformed_shape_add_for_sort,0));	// 21577 call    near ptr transformed_shape_add_for_sort ;~ 0B93:151B
cs=0xb93;eip=0x00151e; 	T(ADD(sp, 4));	// 21578 add     sp, 4 ;~ 0B93:151E
cs=0xb93;eip=0x001521; 	T(CMP(*(dw*)(raddr(ss,bp+var_6c)), 0));	// 21579 cmp     [bp+var_6C], 0 ;~ 0B93:1521
cs=0xb93;eip=0x001525; 	J(JZ(loc_1b43c));	// 21580 jz      short loc_1B43C ;~ 0B93:1525
cs=0xb93;eip=0x001527; 	X(MOV(*(dw*)(raddr(ss,bp+var_6c)), 0x0FC00));	// 21581 mov     [bp+var_6C], 0FC00h ;~ 0B93:1527
loc_1b43c:
	// 5679 
cs=0xb93;eip=0x00152c; 	T(CMP(*(dw*)(raddr(ss,bp+var_a4)), 0));	// 21584 cmp     [bp+var_A4], 0 ;~ 0B93:152C
cs=0xb93;eip=0x001531; 	J(JZ(loc_1b449));	// 21585 jz      short loc_1B449 ;~ 0B93:1531
cs=0xb93;eip=0x001533; 	X(SUB(*(dw*)(raddr(ss,bp+var_a4)), 0x400));	// 21586 sub     [bp+var_A4], 400h ;~ 0B93:1533
loc_1b449:
	// 5680 
cs=0xb93;eip=0x001539; 	T(MOV(al, startcol2));	// 21590 mov     al, startcol2 ;~ 0B93:1539
cs=0xb93;eip=0x00153c; 	T(CMP(*(raddr(ss,bp+var_f6)), al));	// 21591 cmp     [bp+var_F6], al ;~ 0B93:153C
cs=0xb93;eip=0x001540; 	J(JNZ(loc_1b464));	// 21592 jnz     short loc_1B464 ;~ 0B93:1540
cs=0xb93;eip=0x001542; 	T(MOV(al, startrow2));	// 21593 mov     al, startrow2 ;~ 0B93:1542
cs=0xb93;eip=0x001545; 	T(CMP(*(raddr(ss,bp+var_102)), al));	// 21594 cmp     [bp+var_102], al ;~ 0B93:1545
cs=0xb93;eip=0x001549; 	J(JNZ(loc_1b464));	// 21595 jnz     short loc_1B464 ;~ 0B93:1549
cs=0xb93;eip=0x00154b; 	X(MOV(*(dw*)(raddr(ss,bp+var_12a)), 0));	// 21596 mov     [bp+var_12A], 0 ;~ 0B93:154B
cs=0xb93;eip=0x001551; 	J(JMP(loc_1b46a));	// 21597 jmp     short loc_1B46A ;~ 0B93:1551
loc_1b464:
	// 5681 
cs=0xb93;eip=0x001554; 	X(MOV(*(dw*)(raddr(ss,bp+var_12a)), 0x0FFFF));	// 21603 mov     [bp+var_12A], 0FFFFh ;~ 0B93:1554
loc_1b46a:
	// 5682 
cs=0xb93;eip=0x00155a; 	T(MOV(al, *(raddr(ss,bp+var_102))));	// 21607 mov     al, [bp+var_102] ;~ 0B93:155A
cs=0xb93;eip=0x00155e; 	T(CBW);	// 21608 cbw ;~ 0B93:155E
cs=0xb93;eip=0x00155f; 	T(MOV(bx, ax));	// 21609 mov     bx, ax ;~ 0B93:155F
cs=0xb93;eip=0x001561; 	T(SHL(bx, 1));	// 21610 shl     bx, 1 ;~ 0B93:1561
cs=0xb93;eip=0x001563; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 21611 mov     bx, trackrows[bx] ;~ 0B93:1563
cs=0xb93;eip=0x001567; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 21612 mov     al, [bp+var_F6] ;~ 0B93:1567
cs=0xb93;eip=0x00156b; 	T(CBW);	// 21613 cbw ;~ 0B93:156B
cs=0xb93;eip=0x00156c; 	T(ADD(bx, ax));	// 21614 add     bx, ax ;~ 0B93:156C
cs=0xb93;eip=0x00156e; 	T(ADD(bx, *(dw*)(((db*)&trackdata19))));	// 21615 add     bx, word ptr trackdata19 ;~ 0B93:156E
cs=0xb93;eip=0x001572; 	T(MOV(es, *(dw*)(((db*)&trackdata19)+2)));	// 21616 mov     es, word ptr trackdata19+2 ;~ 0B93:1572
cs=0xb93;eip=0x001576; 	T(MOV(al, *(raddr(es,bx))));	// 21618 mov     al, es:[bx] ;~ 0B93:1576
cs=0xb93;eip=0x001579; 	X(MOV(*(raddr(ss,bp+var_4c)), al));	// 21619 mov     [bp+var_4C], al ;~ 0B93:1579
cs=0xb93;eip=0x00157c; 	T(CMP(al, 0x0FF));	// 21620 cmp     al, 0FFh ;~ 0B93:157C
cs=0xb93;eip=0x00157e; 	J(JNZ(loc_1b493));	// 21621 jnz     short loc_1B493 ;~ 0B93:157E
cs=0xb93;eip=0x001580; 	J(JMP(loc_1b72e));	// 21622 jmp     loc_1B72E ;~ 0B93:1580
loc_1b493:
	// 5683 
cs=0xb93;eip=0x001583; 	T(CBW);	// 21626 cbw ;~ 0B93:1583
cs=0xb93;eip=0x001584; 	T(MOV(bx, ax));	// 21627 mov     bx, ax ;~ 0B93:1584
cs=0xb93;eip=0x001586; 	T(CMP(*((&byte_4488e)+bx), 0));	// 21628 cmp     byte_4488E[bx], 0 ;~ 0B93:1586
cs=0xb93;eip=0x00158b; 	J(JNZ(loc_1b4a0));	// 21629 jnz     short loc_1B4A0 ;~ 0B93:158B
cs=0xb93;eip=0x00158d; 	J(JMP(loc_1b626));	// 21630 jmp     loc_1B626 ;~ 0B93:158D
loc_1b4a0:
	// 5684 
cs=0xb93;eip=0x001590; 	T(CMP(byte_448be, 0));	// 21634 cmp     byte_448BE, 0 ;~ 0B93:1590
cs=0xb93;eip=0x001595; 	J(JNZ(loc_1b4aa));	// 21635 jnz     short loc_1B4AA ;~ 0B93:1595
cs=0xb93;eip=0x001597; 	J(JMP(loc_1b72e));	// 21636 jmp     loc_1B72E ;~ 0B93:1597
loc_1b4aa:
	// 5685 
cs=0xb93;eip=0x00159a; 	T(SUB(di, di));	// 21640 sub     di, di ;~ 0B93:159A
loc_1b4ac:
	// 5686 
cs=0xb93;eip=0x00159c; 	T(MOV(ax, di));	// 21643 mov     ax, di ;~ 0B93:159C
cs=0xb93;eip=0x00159e; 	T(SHL(ax, 1));	// 21644 shl     ax, 1 ;~ 0B93:159E
cs=0xb93;eip=0x0015a0; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_154))), ax));	// 21645 mov     word ptr [bp+var_154], ax ;~ 0B93:15A0
cs=0xb93;eip=0x0015a4; 	T(MOV(bx, ax));	// 21646 mov     bx, ax ;~ 0B93:15A4
cs=0xb93;eip=0x0015a6; 	T(CMP(*(dw*)(((db*)&word_44822)+bx), 0));	// 21647 cmp     word_44822[bx], 0 ;~ 0B93:15A6
cs=0xb93;eip=0x0015ab; 	J(JNZ(loc_1b4c0));	// 21648 jnz     short loc_1B4C0 ;~ 0B93:15AB
cs=0xb93;eip=0x0015ad; 	J(JMP(loc_1b61a));	// 21649 jmp     loc_1B61A ;~ 0B93:15AD
loc_1b4c0:
	// 5687 
cs=0xb93;eip=0x0015b0; 	T(MOV(al, *(raddr(ss,bp+var_4c))));	// 21653 mov     al, [bp+var_4C] ;~ 0B93:15B0
cs=0xb93;eip=0x0015b3; 	T(CBW);	// 21654 cbw ;~ 0B93:15B3
cs=0xb93;eip=0x0015b4; 	T(ADD(ax, 2));	// 21655 add     ax, 2 ;~ 0B93:15B4
cs=0xb93;eip=0x0015b7; 	T(MOV(cl, *((&byte_448d7)+di)));	// 21656 mov     cl, byte_448D7[di] ;~ 0B93:15B7
cs=0xb93;eip=0x0015bb; 	T(SUB(ch, ch));	// 21657 sub     ch, ch ;~ 0B93:15BB
cs=0xb93;eip=0x0015bd; 	T(CMP(ax, cx));	// 21658 cmp     ax, cx ;~ 0B93:15BD
cs=0xb93;eip=0x0015bf; 	J(JZ(loc_1b4d4));	// 21659 jz      short loc_1B4D4 ;~ 0B93:15BF
cs=0xb93;eip=0x0015c1; 	J(JMP(loc_1b61a));	// 21660 jmp     loc_1B61A ;~ 0B93:15C1
loc_1b4d4:
	// 5688 
cs=0xb93;eip=0x0015c4; 	T(MOV(al, *((&byte_448bf)+di)));	// 21664 mov     al, byte_448BF[di] ;~ 0B93:15C4
cs=0xb93;eip=0x0015c8; 	T(SUB(ah, ah));	// 21665 sub     ah, ah ;~ 0B93:15C8
cs=0xb93;eip=0x0015ca; 	T(MOV(cx, ax));	// 21666 mov     cx, ax ;~ 0B93:15CA
cs=0xb93;eip=0x0015cc; 	T(SHL(ax, 1));	// 21667 shl     ax, 1 ;~ 0B93:15CC
cs=0xb93;eip=0x0015ce; 	T(ADD(ax, cx));	// 21668 add     ax, cx ;~ 0B93:15CE
cs=0xb93;eip=0x0015d0; 	T(SHL(ax, 1));	// 21669 shl     ax, 1 ;~ 0B93:15D0
cs=0xb93;eip=0x0015d2; 	T(ADD(ax, cx));	// 21670 add     ax, cx ;~ 0B93:15D2
cs=0xb93;eip=0x0015d4; 	T(SHL(ax, 1));	// 21671 shl     ax, 1 ;~ 0B93:15D4
cs=0xb93;eip=0x0015d6; 	T(ADD(ax, offset(dseg,sceneshapes3)));	// 21672 add     ax, offset sceneshapes3 ;~ 0B93:15D6
cs=0xb93;eip=0x0015d9; 	X(MOV(*(dw*)(raddr(ss,bp+var_12e)), ax));	// 21673 mov     [bp+var_12E], ax ;~ 0B93:15D9
cs=0xb93;eip=0x0015dd; 	T(MOV(ax, di));	// 21674 mov     ax, di ;~ 0B93:15DD
cs=0xb93;eip=0x0015df; 	T(SHL(ax, 1));	// 21675 shl     ax, 1 ;~ 0B93:15DF
cs=0xb93;eip=0x0015e1; 	T(SHL(ax, 1));	// 21676 shl     ax, 1 ;~ 0B93:15E1
cs=0xb93;eip=0x0015e3; 	X(MOV(*(dw*)(raddr(ss,bp+var_150)), ax));	// 21677 mov     [bp+var_150], ax ;~ 0B93:15E3
cs=0xb93;eip=0x0015e7; 	T(MOV(bx, ax));	// 21678 mov     bx, ax ;~ 0B93:15E7
cs=0xb93;eip=0x0015e9; 	T(MOV(ax, *(dw*)(((db*)&state)+bx)));	// 21679 mov     ax, state[bx] ;~ 0B93:15E9
cs=0xb93;eip=0x0015ed; 	T(MOV(dx, *(dw*)(((db*)&word_44496)+bx)));	// 21680 mov     dx, word_44496[bx] ;~ 0B93:15ED
cs=0xb93;eip=0x0015f1; 	T(MOV(cl, 6));	// 21681 mov     cl, 6 ;~ 0B93:15F1
loc_1b503:
	// 5689 
cs=0xb93;eip=0x0015f3; 	T(SAR(dx, 1));	// 21684 sar     dx, 1 ;~ 0B93:15F3
cs=0xb93;eip=0x0015f5; 	T(RCR(ax, 1));	// 21685 rcr     ax, 1 ;~ 0B93:15F5
cs=0xb93;eip=0x0015f7; 	T(DEC(cl));	// 21686 dec     cl ;~ 0B93:15F7
cs=0xb93;eip=0x0015f9; 	J(JNZ(loc_1b503));	// 21687 jnz     short loc_1B503 ;~ 0B93:15F9
cs=0xb93;eip=0x0015fb; 	T(MOV(cx, ax));	// 21688 mov     cx, ax ;~ 0B93:15FB
cs=0xb93;eip=0x0015fd; 	T(MOV(al, *(raddr(ss,bp+var_4c))));	// 21689 mov     al, [bp+var_4C] ;~ 0B93:15FD
cs=0xb93;eip=0x001600; 	T(CBW);	// 21690 cbw ;~ 0B93:1600
cs=0xb93;eip=0x001601; 	T(MOV(bx, ax));	// 21691 mov     bx, ax ;~ 0B93:1601
cs=0xb93;eip=0x001603; 	T(SHL(bx, 1));	// 21692 shl     bx, 1 ;~ 0B93:1603
cs=0xb93;eip=0x001605; 	T(ADD(bx, ax));	// 21693 add     bx, ax ;~ 0B93:1605
cs=0xb93;eip=0x001607; 	T(SHL(bx, 1));	// 21694 shl     bx, 1 ;~ 0B93:1607
cs=0xb93;eip=0x001609; 	T(ADD(bx, *(dw*)(((db*)&td10_track_check_rel))));	// 21695 add     bx, word ptr td10_track_check_rel ;~ 0B93:1609
cs=0xb93;eip=0x00160d; 	T(MOV(es, *(dw*)(((db*)&td10_track_check_rel)+2)));	// 21696 mov     es, word ptr td10_track_check_rel+2 ;~ 0B93:160D
cs=0xb93;eip=0x001611; 	T(ADD(cx, *(dw*)(raddr(es,bx))));	// 21697 add     cx, es:[bx] ;~ 0B93:1611
cs=0xb93;eip=0x001614; 	T(SUB(cx, *(dw*)(raddr(ss,bp+var_58))));	// 21698 sub     cx, [bp+var_58] ;~ 0B93:1614
cs=0xb93;eip=0x001617; 	T(MOV(bx, curtransshape_ptr));	// 21699 mov     bx, curtransshape_ptr ;~ 0B93:1617
cs=0xb93;eip=0x00161b; 	X(MOV(*(dw*)(raddr(ds,bx+0)), cx));	// 21700 mov     [bx+0], cx ;~ 0B93:161B
cs=0xb93;eip=0x00161d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_150))));	// 21701 mov     bx, [bp+var_150] ;~ 0B93:161D
cs=0xb93;eip=0x001621; 	T(MOV(ax, *(dw*)(((db*)&word_444f4)+bx)));	// 21702 mov     ax, word_444F4[bx] ;~ 0B93:1621
cs=0xb93;eip=0x001625; 	T(MOV(dx, *(dw*)(((db*)&word_444f6)+bx)));	// 21703 mov     dx, word_444F6[bx] ;~ 0B93:1625
cs=0xb93;eip=0x001629; 	T(MOV(cl, 6));	// 21704 mov     cl, 6 ;~ 0B93:1629
loc_1b53b:
	// 5690 
cs=0xb93;eip=0x00162b; 	T(SAR(dx, 1));	// 21707 sar     dx, 1 ;~ 0B93:162B
cs=0xb93;eip=0x00162d; 	T(RCR(ax, 1));	// 21708 rcr     ax, 1 ;~ 0B93:162D
cs=0xb93;eip=0x00162f; 	T(DEC(cl));	// 21709 dec     cl ;~ 0B93:162F
cs=0xb93;eip=0x001631; 	J(JNZ(loc_1b53b));	// 21710 jnz     short loc_1B53B ;~ 0B93:1631
cs=0xb93;eip=0x001633; 	T(MOV(cx, ax));	// 21711 mov     cx, ax ;~ 0B93:1633
cs=0xb93;eip=0x001635; 	T(MOV(al, *(raddr(ss,bp+var_4c))));	// 21712 mov     al, [bp+var_4C] ;~ 0B93:1635
cs=0xb93;eip=0x001638; 	T(CBW);	// 21713 cbw ;~ 0B93:1638
cs=0xb93;eip=0x001639; 	T(MOV(bx, ax));	// 21714 mov     bx, ax ;~ 0B93:1639
cs=0xb93;eip=0x00163b; 	T(SHL(bx, 1));	// 21715 shl     bx, 1 ;~ 0B93:163B
cs=0xb93;eip=0x00163d; 	T(ADD(bx, ax));	// 21716 add     bx, ax ;~ 0B93:163D
cs=0xb93;eip=0x00163f; 	T(SHL(bx, 1));	// 21717 shl     bx, 1 ;~ 0B93:163F
cs=0xb93;eip=0x001641; 	T(ADD(bx, *(dw*)(((db*)&td10_track_check_rel))));	// 21718 add     bx, word ptr td10_track_check_rel ;~ 0B93:1641
cs=0xb93;eip=0x001645; 	T(MOV(es, *(dw*)(((db*)&td10_track_check_rel)+2)));	// 21719 mov     es, word ptr td10_track_check_rel+2 ;~ 0B93:1645
cs=0xb93;eip=0x001649; 	T(ADD(cx, *(dw*)(raddr(es,bx+2))));	// 21720 add     cx, es:[bx+2] ;~ 0B93:1649
cs=0xb93;eip=0x00164d; 	T(SUB(cx, *(dw*)(raddr(ss,bp+var_56))));	// 21721 sub     cx, [bp+var_56] ;~ 0B93:164D
cs=0xb93;eip=0x001650; 	T(MOV(bx, curtransshape_ptr));	// 21722 mov     bx, curtransshape_ptr ;~ 0B93:1650
cs=0xb93;eip=0x001654; 	X(MOV(*(dw*)(raddr(ds,bx+2)), cx));	// 21723 mov     [bx+2], cx ;~ 0B93:1654
cs=0xb93;eip=0x001657; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_150))));	// 21724 mov     bx, [bp+var_150] ;~ 0B93:1657
cs=0xb93;eip=0x00165b; 	T(MOV(ax, *(dw*)(((db*)&word_44554)+bx)));	// 21725 mov     ax, word_44554[bx] ;~ 0B93:165B
cs=0xb93;eip=0x00165f; 	T(MOV(dx, *(dw*)(((db*)&word_44556)+bx)));	// 21726 mov     dx, word_44556[bx] ;~ 0B93:165F
cs=0xb93;eip=0x001663; 	T(MOV(cl, 6));	// 21727 mov     cl, 6 ;~ 0B93:1663
loc_1b575:
	// 5691 
cs=0xb93;eip=0x001665; 	T(SAR(dx, 1));	// 21730 sar     dx, 1 ;~ 0B93:1665
cs=0xb93;eip=0x001667; 	T(RCR(ax, 1));	// 21731 rcr     ax, 1 ;~ 0B93:1667
cs=0xb93;eip=0x001669; 	T(DEC(cl));	// 21732 dec     cl ;~ 0B93:1669
cs=0xb93;eip=0x00166b; 	J(JNZ(loc_1b575));	// 21733 jnz     short loc_1B575 ;~ 0B93:166B
cs=0xb93;eip=0x00166d; 	T(MOV(cx, ax));	// 21734 mov     cx, ax ;~ 0B93:166D
cs=0xb93;eip=0x00166f; 	T(MOV(al, *(raddr(ss,bp+var_4c))));	// 21735 mov     al, [bp+var_4C] ;~ 0B93:166F
cs=0xb93;eip=0x001672; 	T(CBW);	// 21736 cbw ;~ 0B93:1672
cs=0xb93;eip=0x001673; 	T(MOV(bx, ax));	// 21737 mov     bx, ax ;~ 0B93:1673
cs=0xb93;eip=0x001675; 	T(SHL(bx, 1));	// 21738 shl     bx, 1 ;~ 0B93:1675
cs=0xb93;eip=0x001677; 	T(ADD(bx, ax));	// 21739 add     bx, ax ;~ 0B93:1677
cs=0xb93;eip=0x001679; 	T(SHL(bx, 1));	// 21740 shl     bx, 1 ;~ 0B93:1679
cs=0xb93;eip=0x00167b; 	T(ADD(bx, *(dw*)(((db*)&td10_track_check_rel))));	// 21741 add     bx, word ptr td10_track_check_rel ;~ 0B93:167B
cs=0xb93;eip=0x00167f; 	T(MOV(es, *(dw*)(((db*)&td10_track_check_rel)+2)));	// 21742 mov     es, word ptr td10_track_check_rel+2 ;~ 0B93:167F
cs=0xb93;eip=0x001683; 	T(ADD(cx, *(dw*)(raddr(es,bx+4))));	// 21743 add     cx, es:[bx+4] ;~ 0B93:1683
cs=0xb93;eip=0x001687; 	T(SUB(cx, *(dw*)(raddr(ss,bp+var_54))));	// 21744 sub     cx, [bp+var_54] ;~ 0B93:1687
cs=0xb93;eip=0x00168a; 	T(MOV(bx, curtransshape_ptr));	// 21745 mov     bx, curtransshape_ptr ;~ 0B93:168A
cs=0xb93;eip=0x00168e; 	X(MOV(*(dw*)(raddr(ds,bx+4)), cx));	// 21746 mov     [bx+4], cx ;~ 0B93:168E
cs=0xb93;eip=0x001691; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12e))));	// 21747 mov     bx, [bp+var_12E] ;~ 0B93:1691
cs=0xb93;eip=0x001695; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 21748 mov     ax, [bx+4] ;~ 0B93:1695
cs=0xb93;eip=0x001698; 	T(MOV(bx, curtransshape_ptr));	// 21749 mov     bx, curtransshape_ptr ;~ 0B93:1698
cs=0xb93;eip=0x00169c; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 21750 mov     [bx+6], ax ;~ 0B93:169C
cs=0xb93;eip=0x00169f; 	T(MOV(bx, curtransshape_ptr));	// 21751 mov     bx, curtransshape_ptr ;~ 0B93:169F
cs=0xb93;eip=0x0016a3; 	X(MOV(*(dw*)(raddr(ds,bx+8)), offset(dseg,rect_unk6)));	// 21752 mov     word ptr [bx+8], offset rect_unk6 ;~ 0B93:16A3
cs=0xb93;eip=0x0016a8; 	T(MOV(bx, curtransshape_ptr));	// 21753 mov     bx, curtransshape_ptr ;~ 0B93:16A8
cs=0xb93;eip=0x0016ac; 	T(MOV(al, *(raddr(ss,bp+var_122))));	// 21754 mov     al, [bp+var_122] ;~ 0B93:16AC
cs=0xb93;eip=0x0016b0; 	T(OR(al, 5));	// 21755 or      al, 5 ;~ 0B93:16B0
cs=0xb93;eip=0x0016b2; 	X(MOV(*(raddr(ds,bx+0x12)), al));	// 21756 mov     [bx+12h], al ;~ 0B93:16B2
cs=0xb93;eip=0x0016b5; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_154)))));	// 21757 mov     bx, word ptr [bp+var_154] ;~ 0B93:16B5
cs=0xb93;eip=0x0016b9; 	T(MOV(ax, *(dw*)(((db*)&word_44792)+bx)));	// 21758 mov     ax, word_44792[bx] ;~ 0B93:16B9
cs=0xb93;eip=0x0016bd; 	T(NEG(ax));	// 21759 neg     ax ;~ 0B93:16BD
cs=0xb93;eip=0x0016bf; 	T(MOV(bx, curtransshape_ptr));	// 21760 mov     bx, curtransshape_ptr ;~ 0B93:16BF
cs=0xb93;eip=0x0016c3; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), ax));	// 21761 mov     [bx+0Ah], ax ;~ 0B93:16C3
cs=0xb93;eip=0x0016c6; 	T(MOV(ax, di));	// 21762 mov     ax, di ;~ 0B93:16C6
cs=0xb93;eip=0x0016c8; 	T(SHL(ax, 1));	// 21763 shl     ax, 1 ;~ 0B93:16C8
cs=0xb93;eip=0x0016ca; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_154))), ax));	// 21764 mov     word ptr [bp+var_154], ax ;~ 0B93:16CA
cs=0xb93;eip=0x0016ce; 	T(MOV(bx, ax));	// 21765 mov     bx, ax ;~ 0B93:16CE
cs=0xb93;eip=0x0016d0; 	T(MOV(ax, *(dw*)(((db*)&word_447c2)+bx)));	// 21766 mov     ax, word_447C2[bx] ;~ 0B93:16D0
cs=0xb93;eip=0x0016d4; 	T(NEG(ax));	// 21767 neg     ax ;~ 0B93:16D4
cs=0xb93;eip=0x0016d6; 	T(MOV(bx, curtransshape_ptr));	// 21768 mov     bx, curtransshape_ptr ;~ 0B93:16D6
cs=0xb93;eip=0x0016da; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 21769 mov     [bx+0Ch], ax ;~ 0B93:16DA
cs=0xb93;eip=0x0016dd; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_154)))));	// 21770 mov     bx, word ptr [bp+var_154] ;~ 0B93:16DD
cs=0xb93;eip=0x0016e1; 	T(MOV(ax, *(dw*)(((db*)&word_447f2)+bx)));	// 21771 mov     ax, word_447F2[bx] ;~ 0B93:16E1
cs=0xb93;eip=0x0016e5; 	T(NEG(ax));	// 21772 neg     ax ;~ 0B93:16E5
cs=0xb93;eip=0x0016e7; 	T(MOV(bx, curtransshape_ptr));	// 21773 mov     bx, curtransshape_ptr ;~ 0B93:16E7
cs=0xb93;eip=0x0016eb; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), ax));	// 21774 mov     [bx+0Eh], ax ;~ 0B93:16EB
cs=0xb93;eip=0x0016ee; 	T(MOV(bx, curtransshape_ptr));	// 21775 mov     bx, curtransshape_ptr ;~ 0B93:16EE
cs=0xb93;eip=0x0016f2; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), 0x400));	// 21776 mov     word ptr [bx+10h], 400h ;~ 0B93:16F2
cs=0xb93;eip=0x0016f7; 	T(MOV(bx, curtransshape_ptr));	// 21777 mov     bx, curtransshape_ptr ;~ 0B93:16F7
cs=0xb93;eip=0x0016fb; 	X(MOV(*(raddr(ds,bx+0x13)), 0));	// 21778 mov     byte ptr [bx+13h], 0 ;~ 0B93:16FB
cs=0xb93;eip=0x0016ff; 	T(SUB(ax, ax));	// 21779 sub     ax, ax ;~ 0B93:16FF
cs=0xb93;eip=0x001701; 	X(PUSH(ax));	// 21780 push    ax ;~ 0B93:1701
cs=0xb93;eip=0x001702; 	X(PUSH(ax));	// 21781 push    ax ;~ 0B93:1702
cs=0xb93;eip=0x001703; 	X(PUSH(cs));	// 21782 push    cs ;~ 0B93:1703
cs=0xb93;eip=0x001704; 	J(CALL(transformed_shape_add_for_sort,0));	// 21783 call    near ptr transformed_shape_add_for_sort ;~ 0B93:1704
cs=0xb93;eip=0x001707; 	T(ADD(sp, 4));	// 21784 add     sp, 4 ;~ 0B93:1707
loc_1b61a:
	// 5692 
cs=0xb93;eip=0x00170a; 	T(INC(di));	// 21788 inc     di ;~ 0B93:170A
cs=0xb93;eip=0x00170b; 	T(CMP(di, 0x18));	// 21789 cmp     di, 18h ;~ 0B93:170B
cs=0xb93;eip=0x00170e; 	J(JGE(loc_1b623));	// 21790 jge     short loc_1B623 ;~ 0B93:170E
cs=0xb93;eip=0x001710; 	J(JMP(loc_1b4ac));	// 21791 jmp     loc_1B4AC ;~ 0B93:1710
loc_1b623:
	// 5693 
cs=0xb93;eip=0x001713; 	J(JMP(loc_1b72e));	// 21795 jmp     loc_1B72E ;~ 0B93:1713
loc_1b626:
	// 5694 
cs=0xb93;eip=0x001716; 	T(MOV(al, *(raddr(ss,bp+var_4c))));	// 21799 mov     al, [bp+var_4C] ;~ 0B93:1716
cs=0xb93;eip=0x001719; 	T(CBW);	// 21800 cbw ;~ 0B93:1719
cs=0xb93;eip=0x00171a; 	T(MOV(bx, ax));	// 21801 mov     bx, ax ;~ 0B93:171A
cs=0xb93;eip=0x00171c; 	T(ADD(bx, trackdata23));	// 21802 add     bx, trackdata23 ;~ 0B93:171C
cs=0xb93;eip=0x001720; 	T(MOV(es, word_463de));	// 21803 mov     es, word_463DE ;~ 0B93:1720
cs=0xb93;eip=0x001724; 	T(MOV(al, *(raddr(es,bx))));	// 21804 mov     al, es:[bx] ;~ 0B93:1724
cs=0xb93;eip=0x001727; 	T(SUB(ah, ah));	// 21805 sub     ah, ah ;~ 0B93:1727
cs=0xb93;eip=0x001729; 	T(MOV(cx, ax));	// 21806 mov     cx, ax ;~ 0B93:1729
cs=0xb93;eip=0x00172b; 	T(SHL(ax, 1));	// 21807 shl     ax, 1 ;~ 0B93:172B
cs=0xb93;eip=0x00172d; 	T(ADD(ax, cx));	// 21808 add     ax, cx ;~ 0B93:172D
cs=0xb93;eip=0x00172f; 	T(SHL(ax, 1));	// 21809 shl     ax, 1 ;~ 0B93:172F
cs=0xb93;eip=0x001731; 	T(ADD(ax, cx));	// 21810 add     ax, cx ;~ 0B93:1731
cs=0xb93;eip=0x001733; 	T(SHL(ax, 1));	// 21811 shl     ax, 1 ;~ 0B93:1733
cs=0xb93;eip=0x001735; 	T(ADD(ax, offset(dseg,unk_3e3a0)));	// 21812 add     ax, offset unk_3E3A0 ;~ 0B93:1735
cs=0xb93;eip=0x001738; 	X(MOV(*(dw*)(raddr(ss,bp+var_12e)), ax));	// 21813 mov     [bp+var_12E], ax ;~ 0B93:1738
cs=0xb93;eip=0x00173c; 	T(MOV(al, *(raddr(ss,bp+var_4c))));	// 21814 mov     al, [bp+var_4C] ;~ 0B93:173C
cs=0xb93;eip=0x00173f; 	T(CBW);	// 21815 cbw ;~ 0B93:173F
cs=0xb93;eip=0x001740; 	T(MOV(bx, ax));	// 21816 mov     bx, ax ;~ 0B93:1740
cs=0xb93;eip=0x001742; 	T(SHL(bx, 1));	// 21817 shl     bx, 1 ;~ 0B93:1742
cs=0xb93;eip=0x001744; 	T(ADD(bx, ax));	// 21818 add     bx, ax ;~ 0B93:1744
cs=0xb93;eip=0x001746; 	T(SHL(bx, 1));	// 21819 shl     bx, 1 ;~ 0B93:1746
cs=0xb93;eip=0x001748; 	T(ADD(bx, *(dw*)(((db*)&td10_track_check_rel))));	// 21820 add     bx, word ptr td10_track_check_rel ;~ 0B93:1748
cs=0xb93;eip=0x00174c; 	T(MOV(es, *(dw*)(((db*)&td10_track_check_rel)+2)));	// 21821 mov     es, word ptr td10_track_check_rel+2 ;~ 0B93:174C
cs=0xb93;eip=0x001750; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 21822 mov     ax, es:[bx] ;~ 0B93:1750
cs=0xb93;eip=0x001753; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_58))));	// 21823 sub     ax, [bp+var_58] ;~ 0B93:1753
cs=0xb93;eip=0x001756; 	T(MOV(bx, curtransshape_ptr));	// 21824 mov     bx, curtransshape_ptr ;~ 0B93:1756
cs=0xb93;eip=0x00175a; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 21825 mov     [bx+0], ax ;~ 0B93:175A
cs=0xb93;eip=0x00175c; 	T(MOV(al, *(raddr(ss,bp+var_4c))));	// 21826 mov     al, [bp+var_4C] ;~ 0B93:175C
cs=0xb93;eip=0x00175f; 	T(CBW);	// 21827 cbw ;~ 0B93:175F
cs=0xb93;eip=0x001760; 	T(MOV(bx, ax));	// 21828 mov     bx, ax ;~ 0B93:1760
cs=0xb93;eip=0x001762; 	T(SHL(bx, 1));	// 21829 shl     bx, 1 ;~ 0B93:1762
cs=0xb93;eip=0x001764; 	T(ADD(bx, ax));	// 21830 add     bx, ax ;~ 0B93:1764
cs=0xb93;eip=0x001766; 	T(SHL(bx, 1));	// 21831 shl     bx, 1 ;~ 0B93:1766
cs=0xb93;eip=0x001768; 	T(ADD(bx, *(dw*)(((db*)&td10_track_check_rel))));	// 21832 add     bx, word ptr td10_track_check_rel ;~ 0B93:1768
cs=0xb93;eip=0x00176c; 	T(MOV(es, *(dw*)(((db*)&td10_track_check_rel)+2)));	// 21833 mov     es, word ptr td10_track_check_rel+2 ;~ 0B93:176C
cs=0xb93;eip=0x001770; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 21834 mov     ax, es:[bx+2] ;~ 0B93:1770
cs=0xb93;eip=0x001774; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_56))));	// 21835 sub     ax, [bp+var_56] ;~ 0B93:1774
cs=0xb93;eip=0x001777; 	T(MOV(bx, curtransshape_ptr));	// 21836 mov     bx, curtransshape_ptr ;~ 0B93:1777
cs=0xb93;eip=0x00177b; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 21837 mov     [bx+2], ax ;~ 0B93:177B
cs=0xb93;eip=0x00177e; 	T(MOV(al, *(raddr(ss,bp+var_4c))));	// 21838 mov     al, [bp+var_4C] ;~ 0B93:177E
cs=0xb93;eip=0x001781; 	T(CBW);	// 21839 cbw ;~ 0B93:1781
cs=0xb93;eip=0x001782; 	T(MOV(bx, ax));	// 21840 mov     bx, ax ;~ 0B93:1782
cs=0xb93;eip=0x001784; 	T(SHL(bx, 1));	// 21841 shl     bx, 1 ;~ 0B93:1784
cs=0xb93;eip=0x001786; 	T(ADD(bx, ax));	// 21842 add     bx, ax ;~ 0B93:1786
cs=0xb93;eip=0x001788; 	T(SHL(bx, 1));	// 21843 shl     bx, 1 ;~ 0B93:1788
cs=0xb93;eip=0x00178a; 	T(ADD(bx, *(dw*)(((db*)&td10_track_check_rel))));	// 21844 add     bx, word ptr td10_track_check_rel ;~ 0B93:178A
cs=0xb93;eip=0x00178e; 	T(MOV(es, *(dw*)(((db*)&td10_track_check_rel)+2)));	// 21845 mov     es, word ptr td10_track_check_rel+2 ;~ 0B93:178E
cs=0xb93;eip=0x001792; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 21846 mov     ax, es:[bx+4] ;~ 0B93:1792
cs=0xb93;eip=0x001796; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_54))));	// 21847 sub     ax, [bp+var_54] ;~ 0B93:1796
cs=0xb93;eip=0x001799; 	T(MOV(bx, curtransshape_ptr));	// 21848 mov     bx, curtransshape_ptr ;~ 0B93:1799
cs=0xb93;eip=0x00179d; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 21849 mov     [bx+4], ax ;~ 0B93:179D
cs=0xb93;eip=0x0017a0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12e))));	// 21850 mov     bx, [bp+var_12E] ;~ 0B93:17A0
cs=0xb93;eip=0x0017a4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 21851 mov     ax, [bx+4] ;~ 0B93:17A4
cs=0xb93;eip=0x0017a7; 	T(MOV(bx, curtransshape_ptr));	// 21852 mov     bx, curtransshape_ptr ;~ 0B93:17A7
cs=0xb93;eip=0x0017ab; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 21853 mov     [bx+6], ax ;~ 0B93:17AB
cs=0xb93;eip=0x0017ae; 	T(MOV(bx, curtransshape_ptr));	// 21854 mov     bx, curtransshape_ptr ;~ 0B93:17AE
cs=0xb93;eip=0x0017b2; 	X(MOV(*(dw*)(raddr(ds,bx+8)), offset(dseg,rect_unk6)));	// 21855 mov     word ptr [bx+8], offset rect_unk6 ;~ 0B93:17B2
cs=0xb93;eip=0x0017b7; 	T(MOV(bx, curtransshape_ptr));	// 21856 mov     bx, curtransshape_ptr ;~ 0B93:17B7
cs=0xb93;eip=0x0017bb; 	T(MOV(al, *(raddr(ss,bp+var_122))));	// 21857 mov     al, [bp+var_122] ;~ 0B93:17BB
cs=0xb93;eip=0x0017bf; 	T(OR(al, 4));	// 21858 or      al, 4 ;~ 0B93:17BF
cs=0xb93;eip=0x0017c1; 	X(MOV(*(raddr(ds,bx+0x12)), al));	// 21859 mov     [bx+12h], al ;~ 0B93:17C1
cs=0xb93;eip=0x0017c4; 	T(MOV(bx, curtransshape_ptr));	// 21860 mov     bx, curtransshape_ptr ;~ 0B93:17C4
cs=0xb93;eip=0x0017c8; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), 0));	// 21861 mov     word ptr [bx+0Ah], 0 ;~ 0B93:17C8
cs=0xb93;eip=0x0017cd; 	T(MOV(bx, curtransshape_ptr));	// 21862 mov     bx, curtransshape_ptr ;~ 0B93:17CD
cs=0xb93;eip=0x0017d1; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), 0));	// 21863 mov     word ptr [bx+0Ch], 0 ;~ 0B93:17D1
cs=0xb93;eip=0x0017d6; 	T(MOV(al, *(raddr(ss,bp+var_4c))));	// 21864 mov     al, [bp+var_4C] ;~ 0B93:17D6
cs=0xb93;eip=0x0017d9; 	T(CBW);	// 21865 cbw ;~ 0B93:17D9
cs=0xb93;eip=0x0017da; 	T(MOV(bx, ax));	// 21866 mov     bx, ax ;~ 0B93:17DA
cs=0xb93;eip=0x0017dc; 	T(SHL(bx, 1));	// 21867 shl     bx, 1 ;~ 0B93:17DC
cs=0xb93;eip=0x0017de; 	T(ADD(bx, td08_direction_related));	// 21868 add     bx, td08_direction_related ;~ 0B93:17DE
cs=0xb93;eip=0x0017e2; 	T(MOV(es, word_45db6));	// 21869 mov     es, word_45DB6 ;~ 0B93:17E2
cs=0xb93;eip=0x0017e6; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 21870 mov     ax, es:[bx] ;~ 0B93:17E6
cs=0xb93;eip=0x0017e9; 	T(MOV(bx, curtransshape_ptr));	// 21871 mov     bx, curtransshape_ptr ;~ 0B93:17E9
cs=0xb93;eip=0x0017ed; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), ax));	// 21872 mov     [bx+0Eh], ax ;~ 0B93:17ED
cs=0xb93;eip=0x0017f0; 	T(MOV(bx, curtransshape_ptr));	// 21873 mov     bx, curtransshape_ptr ;~ 0B93:17F0
cs=0xb93;eip=0x0017f4; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), 0x64));	// 21874 mov     word ptr [bx+10h], 64h ; 'd' ;~ 0B93:17F4
cs=0xb93;eip=0x0017f9; 	T(MOV(bx, curtransshape_ptr));	// 21875 mov     bx, curtransshape_ptr ;~ 0B93:17F9
cs=0xb93;eip=0x0017fd; 	X(MOV(*(raddr(ds,bx+0x13)), 0));	// 21876 mov     byte ptr [bx+13h], 0 ;~ 0B93:17FD
cs=0xb93;eip=0x001801; 	T(SUB(ax, ax));	// 21877 sub     ax, ax ;~ 0B93:1801
cs=0xb93;eip=0x001803; 	X(PUSH(ax));	// 21878 push    ax ;~ 0B93:1803
cs=0xb93;eip=0x001804; 	X(PUSH(ax));	// 21879 push    ax ;~ 0B93:1804
cs=0xb93;eip=0x001805; 	X(PUSH(cs));	// 21880 push    cs ;~ 0B93:1805
cs=0xb93;eip=0x001806; 	J(CALL(transformed_shape_add_for_sort,0));	// 21881 call    near ptr transformed_shape_add_for_sort ;~ 0B93:1806
cs=0xb93;eip=0x001809; 	T(ADD(sp, 4));	// 21882 add     sp, 4 ;~ 0B93:1809
cs=0xb93;eip=0x00180c; 	J(JMP(loc_1b72e));	// 21883 jmp     short loc_1B72E ;~ 0B93:180C
loc_1b71e:
	// 5695 
cs=0xb93;eip=0x00180e; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 21887 mov     al, [bp+var_F6] ;~ 0B93:180E
cs=0xb93;eip=0x001812; 	X(MOV(*(raddr(ss,bp+var_100)), al));	// 21888 mov     [bp+var_100], al ;~ 0B93:1812
cs=0xb93;eip=0x001816; 	T(MOV(al, *(raddr(ss,bp+var_102))));	// 21889 mov     al, [bp+var_102] ;~ 0B93:1816
cs=0xb93;eip=0x00181a; 	X(MOV(*(raddr(ss,bp+var_12c)), al));	// 21890 mov     [bp+var_12C], al ;~ 0B93:181A
loc_1b72e:
	// 5696 
cs=0xb93;eip=0x00181e; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 21894 mov     al, [bp+var_F6] ;~ 0B93:181E
cs=0xb93;eip=0x001822; 	T(CMP(*(raddr(ss,bp+var_3c)), al));	// 21895 cmp     [bp+var_3C], al ;~ 0B93:1822
cs=0xb93;eip=0x001825; 	J(JZ(loc_1b743));	// 21896 jz      short loc_1B743 ;~ 0B93:1825
cs=0xb93;eip=0x001827; 	T(MOV(al, *(raddr(ss,bp+var_100))));	// 21897 mov     al, [bp+var_100] ;~ 0B93:1827
cs=0xb93;eip=0x00182b; 	T(CMP(*(raddr(ss,bp+var_3c)), al));	// 21898 cmp     [bp+var_3C], al ;~ 0B93:182B
cs=0xb93;eip=0x00182e; 	J(JZ(loc_1b743));	// 21899 jz      short loc_1B743 ;~ 0B93:182E
cs=0xb93;eip=0x001830; 	J(JMP(loc_1b9da));	// 21900 jmp     loc_1B9DA ;~ 0B93:1830
loc_1b743:
	// 5697 
cs=0xb93;eip=0x001833; 	T(MOV(al, *(raddr(ss,bp+var_102))));	// 21905 mov     al, [bp+var_102] ;~ 0B93:1833
cs=0xb93;eip=0x001837; 	T(CMP(*(raddr(ss,bp+var_60)), al));	// 21906 cmp     [bp+var_60], al ;~ 0B93:1837
cs=0xb93;eip=0x00183a; 	J(JZ(loc_1b758));	// 21907 jz      short loc_1B758 ;~ 0B93:183A
cs=0xb93;eip=0x00183c; 	T(MOV(al, *(raddr(ss,bp+var_12c))));	// 21908 mov     al, [bp+var_12C] ;~ 0B93:183C
cs=0xb93;eip=0x001840; 	T(CMP(*(raddr(ss,bp+var_60)), al));	// 21909 cmp     [bp+var_60], al ;~ 0B93:1840
cs=0xb93;eip=0x001843; 	J(JZ(loc_1b758));	// 21910 jz      short loc_1B758 ;~ 0B93:1843
cs=0xb93;eip=0x001845; 	J(JMP(loc_1b9da));	// 21911 jmp     loc_1B9DA ;~ 0B93:1845
loc_1b758:
	// 5698 
cs=0xb93;eip=0x001848; 	T(CMP(byte_448be, 0));	// 21916 cmp     byte_448BE, 0 ;~ 0B93:1848
cs=0xb93;eip=0x00184d; 	J(JNZ(loc_1b762));	// 21917 jnz     short loc_1B762 ;~ 0B93:184D
cs=0xb93;eip=0x00184f; 	J(JMP(loc_1b89f));	// 21918 jmp     loc_1B89F ;~ 0B93:184F
loc_1b762:
	// 5699 
cs=0xb93;eip=0x001852; 	T(SUB(di, di));	// 21922 sub     di, di ;~ 0B93:1852
loc_1b764:
	// 5700 
cs=0xb93;eip=0x001854; 	T(MOV(ax, di));	// 21925 mov     ax, di ;~ 0B93:1854
cs=0xb93;eip=0x001856; 	T(SHL(ax, 1));	// 21926 shl     ax, 1 ;~ 0B93:1856
cs=0xb93;eip=0x001858; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_154))), ax));	// 21927 mov     word ptr [bp+var_154], ax ;~ 0B93:1858
cs=0xb93;eip=0x00185c; 	T(MOV(bx, ax));	// 21928 mov     bx, ax ;~ 0B93:185C
cs=0xb93;eip=0x00185e; 	T(CMP(*(dw*)(((db*)&word_44822)+bx), 0));	// 21929 cmp     word_44822[bx], 0 ;~ 0B93:185E
cs=0xb93;eip=0x001863; 	J(JNZ(loc_1b778));	// 21930 jnz     short loc_1B778 ;~ 0B93:1863
cs=0xb93;eip=0x001865; 	J(JMP(loc_1b896));	// 21931 jmp     loc_1B896 ;~ 0B93:1865
loc_1b778:
	// 5701 
cs=0xb93;eip=0x001868; 	T(CMP(*((&byte_448d7)+di), 0));	// 21935 cmp     byte_448D7[di], 0 ;~ 0B93:1868
cs=0xb93;eip=0x00186d; 	J(JZ(loc_1b782));	// 21936 jz      short loc_1B782 ;~ 0B93:186D
cs=0xb93;eip=0x00186f; 	J(JMP(loc_1b896));	// 21937 jmp     loc_1B896 ;~ 0B93:186F
loc_1b782:
	// 5702 
cs=0xb93;eip=0x001872; 	T(MOV(al, *((&byte_448bf)+di)));	// 21941 mov     al, byte_448BF[di] ;~ 0B93:1872
cs=0xb93;eip=0x001876; 	T(SUB(ah, ah));	// 21942 sub     ah, ah ;~ 0B93:1876
cs=0xb93;eip=0x001878; 	T(MOV(cx, ax));	// 21943 mov     cx, ax ;~ 0B93:1878
cs=0xb93;eip=0x00187a; 	T(SHL(ax, 1));	// 21944 shl     ax, 1 ;~ 0B93:187A
cs=0xb93;eip=0x00187c; 	T(ADD(ax, cx));	// 21945 add     ax, cx ;~ 0B93:187C
cs=0xb93;eip=0x00187e; 	T(SHL(ax, 1));	// 21946 shl     ax, 1 ;~ 0B93:187E
cs=0xb93;eip=0x001880; 	T(ADD(ax, cx));	// 21947 add     ax, cx ;~ 0B93:1880
cs=0xb93;eip=0x001882; 	T(SHL(ax, 1));	// 21948 shl     ax, 1 ;~ 0B93:1882
cs=0xb93;eip=0x001884; 	T(ADD(ax, offset(dseg,sceneshapes3)));	// 21949 add     ax, offset sceneshapes3 ;~ 0B93:1884
cs=0xb93;eip=0x001887; 	X(MOV(*(dw*)(raddr(ss,bp+var_12e)), ax));	// 21950 mov     [bp+var_12E], ax ;~ 0B93:1887
cs=0xb93;eip=0x00188b; 	T(MOV(ax, di));	// 21951 mov     ax, di ;~ 0B93:188B
cs=0xb93;eip=0x00188d; 	T(SHL(ax, 1));	// 21952 shl     ax, 1 ;~ 0B93:188D
cs=0xb93;eip=0x00188f; 	T(SHL(ax, 1));	// 21953 shl     ax, 1 ;~ 0B93:188F
cs=0xb93;eip=0x001891; 	X(MOV(*(dw*)(raddr(ss,bp+var_150)), ax));	// 21954 mov     [bp+var_150], ax ;~ 0B93:1891
cs=0xb93;eip=0x001895; 	T(MOV(bx, ax));	// 21955 mov     bx, ax ;~ 0B93:1895
cs=0xb93;eip=0x001897; 	T(MOV(ax, *(dw*)(((db*)&state)+bx)));	// 21956 mov     ax, state[bx] ;~ 0B93:1897
cs=0xb93;eip=0x00189b; 	T(MOV(dx, *(dw*)(((db*)&word_44496)+bx)));	// 21957 mov     dx, word_44496[bx] ;~ 0B93:189B
cs=0xb93;eip=0x00189f; 	T(ADD(ax, word_445e6));	// 21958 add     ax, word_445E6 ;~ 0B93:189F
cs=0xb93;eip=0x0018a3; 	T(ADC(dx, word_445e8));	// 21959 adc     dx, word_445E8 ;~ 0B93:18A3
cs=0xb93;eip=0x0018a7; 	T(MOV(cl, 6));	// 21960 mov     cl, 6 ;~ 0B93:18A7
loc_1b7b9:
	// 5703 
cs=0xb93;eip=0x0018a9; 	T(SAR(dx, 1));	// 21963 sar     dx, 1 ;~ 0B93:18A9
cs=0xb93;eip=0x0018ab; 	T(RCR(ax, 1));	// 21964 rcr     ax, 1 ;~ 0B93:18AB
cs=0xb93;eip=0x0018ad; 	T(DEC(cl));	// 21965 dec     cl ;~ 0B93:18AD
cs=0xb93;eip=0x0018af; 	J(JNZ(loc_1b7b9));	// 21966 jnz     short loc_1B7B9 ;~ 0B93:18AF
cs=0xb93;eip=0x0018b1; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_58))));	// 21967 sub     ax, [bp+var_58] ;~ 0B93:18B1
cs=0xb93;eip=0x0018b4; 	T(MOV(bx, curtransshape_ptr));	// 21968 mov     bx, curtransshape_ptr ;~ 0B93:18B4
cs=0xb93;eip=0x0018b8; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 21969 mov     [bx+0], ax ;~ 0B93:18B8
cs=0xb93;eip=0x0018ba; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_150))));	// 21970 mov     bx, [bp+var_150] ;~ 0B93:18BA
cs=0xb93;eip=0x0018be; 	T(MOV(ax, *(dw*)(((db*)&word_444f4)+bx)));	// 21971 mov     ax, word_444F4[bx] ;~ 0B93:18BE
cs=0xb93;eip=0x0018c2; 	T(MOV(dx, *(dw*)(((db*)&word_444f6)+bx)));	// 21972 mov     dx, word_444F6[bx] ;~ 0B93:18C2
cs=0xb93;eip=0x0018c6; 	T(ADD(ax, word_445ea));	// 21973 add     ax, word_445EA ;~ 0B93:18C6
cs=0xb93;eip=0x0018ca; 	T(ADC(dx, word_445ec));	// 21974 adc     dx, word_445EC ;~ 0B93:18CA
cs=0xb93;eip=0x0018ce; 	T(MOV(cl, 6));	// 21975 mov     cl, 6 ;~ 0B93:18CE
loc_1b7e0:
	// 5704 
cs=0xb93;eip=0x0018d0; 	T(SAR(dx, 1));	// 21978 sar     dx, 1 ;~ 0B93:18D0
cs=0xb93;eip=0x0018d2; 	T(RCR(ax, 1));	// 21979 rcr     ax, 1 ;~ 0B93:18D2
cs=0xb93;eip=0x0018d4; 	T(DEC(cl));	// 21980 dec     cl ;~ 0B93:18D4
cs=0xb93;eip=0x0018d6; 	J(JNZ(loc_1b7e0));	// 21981 jnz     short loc_1B7E0 ;~ 0B93:18D6
cs=0xb93;eip=0x0018d8; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_56))));	// 21982 sub     ax, [bp+var_56] ;~ 0B93:18D8
cs=0xb93;eip=0x0018db; 	T(MOV(bx, curtransshape_ptr));	// 21983 mov     bx, curtransshape_ptr ;~ 0B93:18DB
cs=0xb93;eip=0x0018df; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 21984 mov     [bx+2], ax ;~ 0B93:18DF
cs=0xb93;eip=0x0018e2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_150))));	// 21985 mov     bx, [bp+var_150] ;~ 0B93:18E2
cs=0xb93;eip=0x0018e6; 	T(MOV(ax, *(dw*)(((db*)&word_44554)+bx)));	// 21986 mov     ax, word_44554[bx] ;~ 0B93:18E6
cs=0xb93;eip=0x0018ea; 	T(MOV(dx, *(dw*)(((db*)&word_44556)+bx)));	// 21987 mov     dx, word_44556[bx] ;~ 0B93:18EA
cs=0xb93;eip=0x0018ee; 	T(ADD(ax, word_445ee));	// 21988 add     ax, word_445EE ;~ 0B93:18EE
cs=0xb93;eip=0x0018f2; 	T(ADC(dx, word_445f0));	// 21989 adc     dx, word_445F0 ;~ 0B93:18F2
cs=0xb93;eip=0x0018f6; 	T(MOV(cl, 6));	// 21990 mov     cl, 6 ;~ 0B93:18F6
loc_1b808:
	// 5705 
cs=0xb93;eip=0x0018f8; 	T(SAR(dx, 1));	// 21993 sar     dx, 1 ;~ 0B93:18F8
cs=0xb93;eip=0x0018fa; 	T(RCR(ax, 1));	// 21994 rcr     ax, 1 ;~ 0B93:18FA
cs=0xb93;eip=0x0018fc; 	T(DEC(cl));	// 21995 dec     cl ;~ 0B93:18FC
cs=0xb93;eip=0x0018fe; 	J(JNZ(loc_1b808));	// 21996 jnz     short loc_1B808 ;~ 0B93:18FE
cs=0xb93;eip=0x001900; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_54))));	// 21997 sub     ax, [bp+var_54] ;~ 0B93:1900
cs=0xb93;eip=0x001903; 	T(MOV(bx, curtransshape_ptr));	// 21998 mov     bx, curtransshape_ptr ;~ 0B93:1903
cs=0xb93;eip=0x001907; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 21999 mov     [bx+4], ax ;~ 0B93:1907
cs=0xb93;eip=0x00190a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12e))));	// 22000 mov     bx, [bp+var_12E] ;~ 0B93:190A
cs=0xb93;eip=0x00190e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 22001 mov     ax, [bx+4] ;~ 0B93:190E
cs=0xb93;eip=0x001911; 	T(MOV(bx, curtransshape_ptr));	// 22002 mov     bx, curtransshape_ptr ;~ 0B93:1911
cs=0xb93;eip=0x001915; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 22003 mov     [bx+6], ax ;~ 0B93:1915
cs=0xb93;eip=0x001918; 	T(MOV(bx, curtransshape_ptr));	// 22004 mov     bx, curtransshape_ptr ;~ 0B93:1918
cs=0xb93;eip=0x00191c; 	X(MOV(*(dw*)(raddr(ds,bx+8)), offset(dseg,rect_unk6)));	// 22005 mov     word ptr [bx+8], offset rect_unk6 ;~ 0B93:191C
cs=0xb93;eip=0x001921; 	T(MOV(bx, curtransshape_ptr));	// 22006 mov     bx, curtransshape_ptr ;~ 0B93:1921
cs=0xb93;eip=0x001925; 	T(MOV(al, *(raddr(ss,bp+var_122))));	// 22007 mov     al, [bp+var_122] ;~ 0B93:1925
cs=0xb93;eip=0x001929; 	T(OR(al, 5));	// 22008 or      al, 5 ;~ 0B93:1929
cs=0xb93;eip=0x00192b; 	X(MOV(*(raddr(ds,bx+0x12)), al));	// 22009 mov     [bx+12h], al ;~ 0B93:192B
cs=0xb93;eip=0x00192e; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_154)))));	// 22010 mov     bx, word ptr [bp+var_154] ;~ 0B93:192E
cs=0xb93;eip=0x001932; 	T(MOV(ax, *(dw*)(((db*)&word_44792)+bx)));	// 22011 mov     ax, word_44792[bx] ;~ 0B93:1932
cs=0xb93;eip=0x001936; 	T(NEG(ax));	// 22012 neg     ax ;~ 0B93:1936
cs=0xb93;eip=0x001938; 	T(MOV(bx, curtransshape_ptr));	// 22013 mov     bx, curtransshape_ptr ;~ 0B93:1938
cs=0xb93;eip=0x00193c; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), ax));	// 22014 mov     [bx+0Ah], ax ;~ 0B93:193C
cs=0xb93;eip=0x00193f; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_154)))));	// 22015 mov     bx, word ptr [bp+var_154] ;~ 0B93:193F
cs=0xb93;eip=0x001943; 	T(MOV(ax, *(dw*)(((db*)&word_447c2)+bx)));	// 22016 mov     ax, word_447C2[bx] ;~ 0B93:1943
cs=0xb93;eip=0x001947; 	T(NEG(ax));	// 22017 neg     ax ;~ 0B93:1947
cs=0xb93;eip=0x001949; 	T(MOV(bx, curtransshape_ptr));	// 22018 mov     bx, curtransshape_ptr ;~ 0B93:1949
cs=0xb93;eip=0x00194d; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 22019 mov     [bx+0Ch], ax ;~ 0B93:194D
cs=0xb93;eip=0x001950; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_154)))));	// 22020 mov     bx, word ptr [bp+var_154] ;~ 0B93:1950
cs=0xb93;eip=0x001954; 	T(MOV(ax, *(dw*)(((db*)&word_447f2)+bx)));	// 22021 mov     ax, word_447F2[bx] ;~ 0B93:1954
cs=0xb93;eip=0x001958; 	T(NEG(ax));	// 22022 neg     ax ;~ 0B93:1958
cs=0xb93;eip=0x00195a; 	T(MOV(bx, curtransshape_ptr));	// 22023 mov     bx, curtransshape_ptr ;~ 0B93:195A
cs=0xb93;eip=0x00195e; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), ax));	// 22024 mov     [bx+0Eh], ax ;~ 0B93:195E
cs=0xb93;eip=0x001961; 	T(MOV(bx, curtransshape_ptr));	// 22025 mov     bx, curtransshape_ptr ;~ 0B93:1961
cs=0xb93;eip=0x001965; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), 0x400));	// 22026 mov     word ptr [bx+10h], 400h ;~ 0B93:1965
cs=0xb93;eip=0x00196a; 	T(MOV(bx, curtransshape_ptr));	// 22027 mov     bx, curtransshape_ptr ;~ 0B93:196A
cs=0xb93;eip=0x00196e; 	T(MOV(al, byte_449a8));	// 22028 mov     al, byte_449A8 ;~ 0B93:196E
cs=0xb93;eip=0x001971; 	X(MOV(*(raddr(ds,bx+0x13)), al));	// 22029 mov     [bx+13h], al ;~ 0B93:1971
cs=0xb93;eip=0x001974; 	T(SUB(ax, ax));	// 22030 sub     ax, ax ;~ 0B93:1974
cs=0xb93;eip=0x001976; 	X(PUSH(ax));	// 22031 push    ax ;~ 0B93:1976
cs=0xb93;eip=0x001977; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6c))));	// 22032 mov     ax, [bp+var_6C] ;~ 0B93:1977
cs=0xb93;eip=0x00197a; 	T(AND(ax, *(dw*)(raddr(ss,bp+var_12a))));	// 22033 and     ax, [bp+var_12A] ;~ 0B93:197A
cs=0xb93;eip=0x00197e; 	X(PUSH(ax));	// 22034 push    ax ;~ 0B93:197E
cs=0xb93;eip=0x00197f; 	X(PUSH(cs));	// 22035 push    cs ;~ 0B93:197F
cs=0xb93;eip=0x001980; 	J(CALL(transformed_shape_add_for_sort,0));	// 22036 call    near ptr transformed_shape_add_for_sort ;~ 0B93:1980
cs=0xb93;eip=0x001983; 	T(ADD(sp, 4));	// 22037 add     sp, 4 ;~ 0B93:1983
loc_1b896:
	// 5706 
cs=0xb93;eip=0x001986; 	T(INC(di));	// 22041 inc     di ;~ 0B93:1986
cs=0xb93;eip=0x001987; 	T(CMP(di, 0x18));	// 22042 cmp     di, 18h ;~ 0B93:1987
cs=0xb93;eip=0x00198a; 	J(JGE(loc_1b89f));	// 22043 jge     short loc_1B89F ;~ 0B93:198A
cs=0xb93;eip=0x00198c; 	J(JMP(loc_1b764));	// 22044 jmp     loc_1B764 ;~ 0B93:198C
loc_1b89f:
	// 5707 
cs=0xb93;eip=0x00198f; 	X(MOV(*(dw*)(raddr(ss,bp+var_12e)), offset(dseg,unk_3d824)));	// 22049 mov     [bp+var_12E], offset unk_3D824 ;~ 0B93:198F
cs=0xb93;eip=0x001995; 	T(MOV(bx, curtransshape_ptr));	// 22050 mov     bx, curtransshape_ptr ;~ 0B93:1995
cs=0xb93;eip=0x001999; 	T(MOV(ax, word_445e6));	// 22051 mov     ax, word_445E6 ;~ 0B93:1999
cs=0xb93;eip=0x00199c; 	T(MOV(dx, word_445e8));	// 22052 mov     dx, word_445E8 ;~ 0B93:199C
cs=0xb93;eip=0x0019a0; 	T(MOV(cl, 6));	// 22053 mov     cl, 6 ;~ 0B93:19A0
loc_1b8b2:
	// 5708 
cs=0xb93;eip=0x0019a2; 	T(SAR(dx, 1));	// 22056 sar     dx, 1 ;~ 0B93:19A2
cs=0xb93;eip=0x0019a4; 	T(RCR(ax, 1));	// 22057 rcr     ax, 1 ;~ 0B93:19A4
cs=0xb93;eip=0x0019a6; 	T(DEC(cl));	// 22058 dec     cl ;~ 0B93:19A6
cs=0xb93;eip=0x0019a8; 	J(JNZ(loc_1b8b2));	// 22059 jnz     short loc_1B8B2 ;~ 0B93:19A8
cs=0xb93;eip=0x0019aa; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_58))));	// 22060 sub     ax, [bp+var_58] ;~ 0B93:19AA
cs=0xb93;eip=0x0019ad; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 22061 mov     [bx+0], ax ;~ 0B93:19AD
cs=0xb93;eip=0x0019af; 	T(MOV(bx, curtransshape_ptr));	// 22062 mov     bx, curtransshape_ptr ;~ 0B93:19AF
cs=0xb93;eip=0x0019b3; 	T(MOV(ax, word_445ea));	// 22063 mov     ax, word_445EA ;~ 0B93:19B3
cs=0xb93;eip=0x0019b6; 	T(MOV(dx, word_445ec));	// 22064 mov     dx, word_445EC ;~ 0B93:19B6
cs=0xb93;eip=0x0019ba; 	T(MOV(cl, 6));	// 22065 mov     cl, 6 ;~ 0B93:19BA
loc_1b8cc:
	// 5709 
cs=0xb93;eip=0x0019bc; 	T(SAR(dx, 1));	// 22068 sar     dx, 1 ;~ 0B93:19BC
cs=0xb93;eip=0x0019be; 	T(RCR(ax, 1));	// 22069 rcr     ax, 1 ;~ 0B93:19BE
cs=0xb93;eip=0x0019c0; 	T(DEC(cl));	// 22070 dec     cl ;~ 0B93:19C0
cs=0xb93;eip=0x0019c2; 	J(JNZ(loc_1b8cc));	// 22071 jnz     short loc_1B8CC ;~ 0B93:19C2
cs=0xb93;eip=0x0019c4; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_56))));	// 22072 sub     ax, [bp+var_56] ;~ 0B93:19C4
cs=0xb93;eip=0x0019c7; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 22073 mov     [bx+2], ax ;~ 0B93:19C7
cs=0xb93;eip=0x0019ca; 	T(MOV(bx, curtransshape_ptr));	// 22074 mov     bx, curtransshape_ptr ;~ 0B93:19CA
cs=0xb93;eip=0x0019ce; 	T(MOV(ax, word_445ee));	// 22075 mov     ax, word_445EE ;~ 0B93:19CE
cs=0xb93;eip=0x0019d1; 	T(MOV(dx, word_445f0));	// 22076 mov     dx, word_445F0 ;~ 0B93:19D1
cs=0xb93;eip=0x0019d5; 	T(MOV(cl, 6));	// 22077 mov     cl, 6 ;~ 0B93:19D5
loc_1b8e7:
	// 5710 
cs=0xb93;eip=0x0019d7; 	T(SAR(dx, 1));	// 22080 sar     dx, 1 ;~ 0B93:19D7
cs=0xb93;eip=0x0019d9; 	T(RCR(ax, 1));	// 22081 rcr     ax, 1 ;~ 0B93:19D9
cs=0xb93;eip=0x0019db; 	T(DEC(cl));	// 22082 dec     cl ;~ 0B93:19DB
cs=0xb93;eip=0x0019dd; 	J(JNZ(loc_1b8e7));	// 22083 jnz     short loc_1B8E7 ;~ 0B93:19DD
cs=0xb93;eip=0x0019df; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_54))));	// 22084 sub     ax, [bp+var_54] ;~ 0B93:19DF
cs=0xb93;eip=0x0019e2; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 22085 mov     [bx+4], ax ;~ 0B93:19E2
cs=0xb93;eip=0x0019e5; 	T(CMP(*(raddr(ss,bp+var_fc)), 0));	// 22086 cmp     [bp+var_FC], 0 ;~ 0B93:19E5
cs=0xb93;eip=0x0019ea; 	J(JNZ(loc_1b903));	// 22087 jnz     short loc_1B903 ;~ 0B93:19EA
cs=0xb93;eip=0x0019ec; 	T(CMP(timertestflag2, 2));	// 22088 cmp     timertestflag2, 2 ;~ 0B93:19EC
cs=0xb93;eip=0x0019f1; 	J(JBE(loc_1b914));	// 22089 jbe     short loc_1B914 ;~ 0B93:19F1
loc_1b903:
	// 5711 
cs=0xb93;eip=0x0019f3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12e))));	// 22092 mov     bx, [bp+var_12E] ;~ 0B93:19F3
cs=0xb93;eip=0x0019f7; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 22093 mov     ax, [bx+6] ;~ 0B93:19F7
cs=0xb93;eip=0x0019fa; 	T(MOV(bx, curtransshape_ptr));	// 22094 mov     bx, curtransshape_ptr ;~ 0B93:19FA
cs=0xb93;eip=0x0019fe; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 22095 mov     [bx+6], ax ;~ 0B93:19FE
cs=0xb93;eip=0x001a01; 	J(JMP(loc_1b94a));	// 22096 jmp     short loc_1B94A ;~ 0B93:1A01
loc_1b914:
	// 5712 
cs=0xb93;eip=0x001a04; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12e))));	// 22101 mov     bx, [bp+var_12E] ;~ 0B93:1A04
cs=0xb93;eip=0x001a08; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 22102 mov     ax, [bx+4] ;~ 0B93:1A08
cs=0xb93;eip=0x001a0b; 	T(MOV(bx, curtransshape_ptr));	// 22103 mov     bx, curtransshape_ptr ;~ 0B93:1A0B
cs=0xb93;eip=0x001a0f; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 22104 mov     [bx+6], ax ;~ 0B93:1A0F
cs=0xb93;eip=0x001a12; 	T(MOV(ax, offset(dseg,carshapevec)));	// 22105 mov     ax, offset carshapevec ;~ 0B93:1A12
cs=0xb93;eip=0x001a15; 	X(PUSH(ax));	// 22106 push    ax ;~ 0B93:1A15
cs=0xb93;eip=0x001a16; 	T(MOV(ax, offset(dseg,carshapevecs)));	// 22107 mov     ax, offset carshapevecs ;~ 0B93:1A16
cs=0xb93;eip=0x001a19; 	X(PUSH(ax));	// 22108 push    ax ;~ 0B93:1A19
cs=0xb93;eip=0x001a1a; 	T(MOV(ax, offset(dseg,word_443e8)));	// 22109 mov     ax, offset word_443E8 ;~ 0B93:1A1A
cs=0xb93;eip=0x001a1d; 	X(PUSH(ax));	// 22110 push    ax ;~ 0B93:1A1D
cs=0xb93;eip=0x001a1e; 	T(MOV(ax, offset(dseg,unk_4463a)));	// 22111 mov     ax, offset unk_4463A ;~ 0B93:1A1E
cs=0xb93;eip=0x001a21; 	X(PUSH(ax));	// 22112 push    ax ;~ 0B93:1A21
cs=0xb93;eip=0x001a22; 	X(PUSH(word_44606));	// 22113 push    word_44606 ;~ 0B93:1A22
cs=0xb93;eip=0x001a26; 	T(MOV(ax, word_43892));	// 22114 mov     ax, word_43892 ;~ 0B93:1A26
cs=0xb93;eip=0x001a29; 	T(MOV(dx, word_43894));	// 22115 mov     dx, word_43894 ;~ 0B93:1A29
cs=0xb93;eip=0x001a2d; 	T(ADD(ax, 0x30));	// 22116 add     ax, 30h ; '0' ;~ 0B93:1A2D
cs=0xb93;eip=0x001a30; 	X(PUSH(dx));	// 22117 push    dx ;~ 0B93:1A30
cs=0xb93;eip=0x001a31; 	X(PUSH(ax));	// 22118 push    ax ;~ 0B93:1A31
cs=0xb93;eip=0x001a32; 	J(CALLF(sub_204ae,0));	// 22119 call    sub_204AE ;~ 0B93:1A32
cs=0xb93;eip=0x001a37; 	T(ADD(sp, 0x0E));	// 22120 add     sp, 0Eh ;~ 0B93:1A37
loc_1b94a:
	// 5713 
cs=0xb93;eip=0x001a3a; 	T(CMP(timertestflag_copy, 0));	// 22123 cmp     timertestflag_copy, 0 ;~ 0B93:1A3A
cs=0xb93;eip=0x001a3f; 	J(JZ(loc_1b964));	// 22124 jz      short loc_1B964 ;~ 0B93:1A3F
cs=0xb93;eip=0x001a41; 	T(MOV(bx, curtransshape_ptr));	// 22125 mov     bx, curtransshape_ptr ;~ 0B93:1A41
cs=0xb93;eip=0x001a45; 	X(MOV(*(dw*)(raddr(ds,bx+8)), offset(dseg,rect_unk12)));	// 22126 mov     word ptr [bx+8], offset rect_unk12 ;~ 0B93:1A45
loc_1b95a:
	// 5714 
cs=0xb93;eip=0x001a4a; 	T(MOV(bx, curtransshape_ptr));	// 22129 mov     bx, curtransshape_ptr ;~ 0B93:1A4A
cs=0xb93;eip=0x001a4e; 	X(MOV(*(raddr(ds,bx+0x12)), 0x0C));	// 22130 mov     byte ptr [bx+12h], 0Ch ;~ 0B93:1A4E
cs=0xb93;eip=0x001a52; 	J(JMP(loc_1b990));	// 22131 jmp     short loc_1B990 ;~ 0B93:1A52
loc_1b964:
	// 5715 
cs=0xb93;eip=0x001a54; 	T(CMP(byte_446af, 1));	// 22135 cmp     byte_446AF, 1 ;~ 0B93:1A54
cs=0xb93;eip=0x001a59; 	J(JNZ(loc_1b988));	// 22136 jnz     short loc_1B988 ;~ 0B93:1A59
cs=0xb93;eip=0x001a5b; 	X(PUSH(si));	// 22137 push    si ;~ 0B93:1A5B
cs=0xb93;eip=0x001a5c; 	X(PUSH(di));	// 22138 push    di ;~ 0B93:1A5C
cs=0xb93;eip=0x001a5d; 	T(di = bp+var_6a);	// 22139 lea     di, [bp+var_6A] ;~ 0B93:1A5D
cs=0xb93;eip=0x001a60; 	T(MOV(si, offset(dseg,cliprect_unk)));	// 22140 mov     si, offset cliprect_unk ;~ 0B93:1A60
cs=0xb93;eip=0x001a63; 	X(PUSH(ss));	// 22141 push    ss ;~ 0B93:1A63
cs=0xb93;eip=0x001a64; 	X(POP(es));	// 22142 pop     es ;~ 0B93:1A64
cs=0xb93;eip=0x001a65; 	X(MOVSW);	// 22143 movsw ;~ 0B93:1A65
cs=0xb93;eip=0x001a66; 	X(MOVSW);	// 22144 movsw ;~ 0B93:1A66
cs=0xb93;eip=0x001a67; 	X(MOVSW);	// 22145 movsw ;~ 0B93:1A67
cs=0xb93;eip=0x001a68; 	X(MOVSW);	// 22146 movsw ;~ 0B93:1A68
cs=0xb93;eip=0x001a69; 	X(POP(di));	// 22147 pop     di ;~ 0B93:1A69
cs=0xb93;eip=0x001a6a; 	X(POP(si));	// 22148 pop     si ;~ 0B93:1A6A
cs=0xb93;eip=0x001a6b; 	T(MOV(bx, curtransshape_ptr));	// 22149 mov     bx, curtransshape_ptr ;~ 0B93:1A6B
cs=0xb93;eip=0x001a6f; 	T(ax = bp+var_6a);	// 22150 lea     ax, [bp+var_6A] ;~ 0B93:1A6F
cs=0xb93;eip=0x001a72; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 22151 mov     [bx+8], ax ;~ 0B93:1A72
cs=0xb93;eip=0x001a75; 	J(JMP(loc_1b95a));	// 22152 jmp     short loc_1B95A ;~ 0B93:1A75
loc_1b988:
	// 5716 
cs=0xb93;eip=0x001a78; 	T(MOV(bx, curtransshape_ptr));	// 22157 mov     bx, curtransshape_ptr ;~ 0B93:1A78
cs=0xb93;eip=0x001a7c; 	X(MOV(*(raddr(ds,bx+0x12)), 4));	// 22158 mov     byte ptr [bx+12h], 4 ;~ 0B93:1A7C
loc_1b990:
	// 5717 
cs=0xb93;eip=0x001a80; 	T(MOV(bx, curtransshape_ptr));	// 22161 mov     bx, curtransshape_ptr ;~ 0B93:1A80
cs=0xb93;eip=0x001a84; 	T(MOV(ax, word_44602));	// 22162 mov     ax, word_44602 ;~ 0B93:1A84
cs=0xb93;eip=0x001a87; 	T(NEG(ax));	// 22163 neg     ax ;~ 0B93:1A87
cs=0xb93;eip=0x001a89; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), ax));	// 22164 mov     [bx+0Ah], ax ;~ 0B93:1A89
cs=0xb93;eip=0x001a8c; 	T(MOV(bx, curtransshape_ptr));	// 22165 mov     bx, curtransshape_ptr ;~ 0B93:1A8C
cs=0xb93;eip=0x001a90; 	T(MOV(ax, word_44600));	// 22166 mov     ax, word_44600 ;~ 0B93:1A90
cs=0xb93;eip=0x001a93; 	T(NEG(ax));	// 22167 neg     ax ;~ 0B93:1A93
cs=0xb93;eip=0x001a95; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 22168 mov     [bx+0Ch], ax ;~ 0B93:1A95
cs=0xb93;eip=0x001a98; 	T(MOV(bx, curtransshape_ptr));	// 22169 mov     bx, curtransshape_ptr ;~ 0B93:1A98
cs=0xb93;eip=0x001a9c; 	T(MOV(ax, word_445fe));	// 22170 mov     ax, word_445FE ;~ 0B93:1A9C
cs=0xb93;eip=0x001a9f; 	T(NEG(ax));	// 22171 neg     ax ;~ 0B93:1A9F
cs=0xb93;eip=0x001aa1; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), ax));	// 22172 mov     [bx+0Eh], ax ;~ 0B93:1AA1
cs=0xb93;eip=0x001aa4; 	T(MOV(bx, curtransshape_ptr));	// 22173 mov     bx, curtransshape_ptr ;~ 0B93:1AA4
cs=0xb93;eip=0x001aa8; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), 0x12C));	// 22174 mov     word ptr [bx+10h], 12Ch ;~ 0B93:1AA8
cs=0xb93;eip=0x001aad; 	T(MOV(bx, curtransshape_ptr));	// 22175 mov     bx, curtransshape_ptr ;~ 0B93:1AAD
cs=0xb93;eip=0x001ab1; 	T(MOV(al, byte_449a8));	// 22176 mov     al, byte_449A8 ;~ 0B93:1AB1
cs=0xb93;eip=0x001ab4; 	X(MOV(*(raddr(ds,bx+0x13)), al));	// 22177 mov     [bx+13h], al ;~ 0B93:1AB4
cs=0xb93;eip=0x001ab7; 	T(MOV(ax, 2));	// 22178 mov     ax, 2 ;~ 0B93:1AB7
cs=0xb93;eip=0x001aba; 	X(PUSH(ax));	// 22179 push    ax ;~ 0B93:1ABA
cs=0xb93;eip=0x001abb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6c))));	// 22180 mov     ax, [bp+var_6C] ;~ 0B93:1ABB
cs=0xb93;eip=0x001abe; 	T(AND(ax, *(dw*)(raddr(ss,bp+var_12a))));	// 22181 and     ax, [bp+var_12A] ;~ 0B93:1ABE
cs=0xb93;eip=0x001ac2; 	X(PUSH(ax));	// 22182 push    ax ;~ 0B93:1AC2
cs=0xb93;eip=0x001ac3; 	X(PUSH(cs));	// 22183 push    cs ;~ 0B93:1AC3
cs=0xb93;eip=0x001ac4; 	J(CALL(transformed_shape_add_for_sort,0));	// 22184 call    near ptr transformed_shape_add_for_sort ;~ 0B93:1AC4
cs=0xb93;eip=0x001ac7; 	T(ADD(sp, 4));	// 22185 add     sp, 4 ;~ 0B93:1AC7
loc_1b9da:
	// 5718 
cs=0xb93;eip=0x001aca; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 22189 mov     al, [bp+var_F6] ;~ 0B93:1ACA
cs=0xb93;eip=0x001ace; 	T(CMP(*(raddr(ss,bp+var_4a)), al));	// 22190 cmp     [bp+var_4A], al ;~ 0B93:1ACE
cs=0xb93;eip=0x001ad1; 	J(JZ(loc_1b9ef));	// 22191 jz      short loc_1B9EF ;~ 0B93:1AD1
cs=0xb93;eip=0x001ad3; 	T(MOV(al, *(raddr(ss,bp+var_100))));	// 22192 mov     al, [bp+var_100] ;~ 0B93:1AD3
cs=0xb93;eip=0x001ad7; 	T(CMP(*(raddr(ss,bp+var_4a)), al));	// 22193 cmp     [bp+var_4A], al ;~ 0B93:1AD7
cs=0xb93;eip=0x001ada; 	J(JZ(loc_1b9ef));	// 22194 jz      short loc_1B9EF ;~ 0B93:1ADA
cs=0xb93;eip=0x001adc; 	J(JMP(loc_1bc89));	// 22195 jmp     loc_1BC89 ;~ 0B93:1ADC
loc_1b9ef:
	// 5719 
cs=0xb93;eip=0x001adf; 	T(MOV(al, *(raddr(ss,bp+var_102))));	// 22200 mov     al, [bp+var_102] ;~ 0B93:1ADF
cs=0xb93;eip=0x001ae3; 	T(CMP(*(raddr(ss,bp+var_6e)), al));	// 22201 cmp     [bp+var_6E], al ;~ 0B93:1AE3
cs=0xb93;eip=0x001ae6; 	J(JZ(loc_1ba04));	// 22202 jz      short loc_1BA04 ;~ 0B93:1AE6
cs=0xb93;eip=0x001ae8; 	T(MOV(al, *(raddr(ss,bp+var_12c))));	// 22203 mov     al, [bp+var_12C] ;~ 0B93:1AE8
cs=0xb93;eip=0x001aec; 	T(CMP(*(raddr(ss,bp+var_6e)), al));	// 22204 cmp     [bp+var_6E], al ;~ 0B93:1AEC
cs=0xb93;eip=0x001aef; 	J(JZ(loc_1ba04));	// 22205 jz      short loc_1BA04 ;~ 0B93:1AEF
cs=0xb93;eip=0x001af1; 	J(JMP(loc_1bc89));	// 22206 jmp     loc_1BC89 ;~ 0B93:1AF1
loc_1ba04:
	// 5720 
cs=0xb93;eip=0x001af4; 	T(CMP(byte_448be, 0));	// 22211 cmp     byte_448BE, 0 ;~ 0B93:1AF4
cs=0xb93;eip=0x001af9; 	J(JNZ(loc_1ba0e));	// 22212 jnz     short loc_1BA0E ;~ 0B93:1AF9
cs=0xb93;eip=0x001afb; 	J(JMP(loc_1bb4c));	// 22213 jmp     loc_1BB4C ;~ 0B93:1AFB
loc_1ba0e:
	// 5721 
cs=0xb93;eip=0x001afe; 	T(SUB(di, di));	// 22217 sub     di, di ;~ 0B93:1AFE
loc_1ba10:
	// 5722 
cs=0xb93;eip=0x001b00; 	T(MOV(ax, di));	// 22220 mov     ax, di ;~ 0B93:1B00
cs=0xb93;eip=0x001b02; 	T(SHL(ax, 1));	// 22221 shl     ax, 1 ;~ 0B93:1B02
cs=0xb93;eip=0x001b04; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_154))), ax));	// 22222 mov     word ptr [bp+var_154], ax ;~ 0B93:1B04
cs=0xb93;eip=0x001b08; 	T(MOV(bx, ax));	// 22223 mov     bx, ax ;~ 0B93:1B08
cs=0xb93;eip=0x001b0a; 	T(CMP(*(dw*)(((db*)&word_44822)+bx), 0));	// 22224 cmp     word_44822[bx], 0 ;~ 0B93:1B0A
cs=0xb93;eip=0x001b0f; 	J(JNZ(loc_1ba24));	// 22225 jnz     short loc_1BA24 ;~ 0B93:1B0F
cs=0xb93;eip=0x001b11; 	J(JMP(loc_1bb43));	// 22226 jmp     loc_1BB43 ;~ 0B93:1B11
loc_1ba24:
	// 5723 
cs=0xb93;eip=0x001b14; 	T(CMP(*((&byte_448d7)+di), 1));	// 22230 cmp     byte_448D7[di], 1 ;~ 0B93:1B14
cs=0xb93;eip=0x001b19; 	J(JZ(loc_1ba2e));	// 22231 jz      short loc_1BA2E ;~ 0B93:1B19
cs=0xb93;eip=0x001b1b; 	J(JMP(loc_1bb43));	// 22232 jmp     loc_1BB43 ;~ 0B93:1B1B
loc_1ba2e:
	// 5724 
cs=0xb93;eip=0x001b1e; 	T(MOV(al, *((&byte_448bf)+di)));	// 22236 mov     al, byte_448BF[di] ;~ 0B93:1B1E
cs=0xb93;eip=0x001b22; 	T(SUB(ah, ah));	// 22237 sub     ah, ah ;~ 0B93:1B22
cs=0xb93;eip=0x001b24; 	T(MOV(cx, ax));	// 22238 mov     cx, ax ;~ 0B93:1B24
cs=0xb93;eip=0x001b26; 	T(SHL(ax, 1));	// 22239 shl     ax, 1 ;~ 0B93:1B26
cs=0xb93;eip=0x001b28; 	T(ADD(ax, cx));	// 22240 add     ax, cx ;~ 0B93:1B28
cs=0xb93;eip=0x001b2a; 	T(SHL(ax, 1));	// 22241 shl     ax, 1 ;~ 0B93:1B2A
cs=0xb93;eip=0x001b2c; 	T(ADD(ax, cx));	// 22242 add     ax, cx ;~ 0B93:1B2C
cs=0xb93;eip=0x001b2e; 	T(SHL(ax, 1));	// 22243 shl     ax, 1 ;~ 0B93:1B2E
cs=0xb93;eip=0x001b30; 	T(ADD(ax, offset(dseg,sceneshapes3)));	// 22244 add     ax, offset sceneshapes3 ;~ 0B93:1B30
cs=0xb93;eip=0x001b33; 	X(MOV(*(dw*)(raddr(ss,bp+var_12e)), ax));	// 22245 mov     [bp+var_12E], ax ;~ 0B93:1B33
cs=0xb93;eip=0x001b37; 	T(MOV(ax, di));	// 22246 mov     ax, di ;~ 0B93:1B37
cs=0xb93;eip=0x001b39; 	T(SHL(ax, 1));	// 22247 shl     ax, 1 ;~ 0B93:1B39
cs=0xb93;eip=0x001b3b; 	T(SHL(ax, 1));	// 22248 shl     ax, 1 ;~ 0B93:1B3B
cs=0xb93;eip=0x001b3d; 	X(MOV(*(dw*)(raddr(ss,bp+var_150)), ax));	// 22249 mov     [bp+var_150], ax ;~ 0B93:1B3D
cs=0xb93;eip=0x001b41; 	T(MOV(bx, ax));	// 22250 mov     bx, ax ;~ 0B93:1B41
cs=0xb93;eip=0x001b43; 	T(MOV(ax, *(dw*)(((db*)&state)+bx)));	// 22251 mov     ax, state[bx] ;~ 0B93:1B43
cs=0xb93;eip=0x001b47; 	T(MOV(dx, *(dw*)(((db*)&word_44496)+bx)));	// 22252 mov     dx, word_44496[bx] ;~ 0B93:1B47
cs=0xb93;eip=0x001b4b; 	T(ADD(ax, word_446b6));	// 22253 add     ax, word_446B6 ;~ 0B93:1B4B
cs=0xb93;eip=0x001b4f; 	T(ADC(dx, word_446b8));	// 22254 adc     dx, word_446B8 ;~ 0B93:1B4F
cs=0xb93;eip=0x001b53; 	T(MOV(cl, 6));	// 22255 mov     cl, 6 ;~ 0B93:1B53
loc_1ba65:
	// 5725 
cs=0xb93;eip=0x001b55; 	T(SAR(dx, 1));	// 22258 sar     dx, 1 ;~ 0B93:1B55
cs=0xb93;eip=0x001b57; 	T(RCR(ax, 1));	// 22259 rcr     ax, 1 ;~ 0B93:1B57
cs=0xb93;eip=0x001b59; 	T(DEC(cl));	// 22260 dec     cl ;~ 0B93:1B59
cs=0xb93;eip=0x001b5b; 	J(JNZ(loc_1ba65));	// 22261 jnz     short loc_1BA65 ;~ 0B93:1B5B
cs=0xb93;eip=0x001b5d; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_58))));	// 22262 sub     ax, [bp+var_58] ;~ 0B93:1B5D
cs=0xb93;eip=0x001b60; 	T(MOV(bx, curtransshape_ptr));	// 22263 mov     bx, curtransshape_ptr ;~ 0B93:1B60
cs=0xb93;eip=0x001b64; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 22264 mov     [bx+0], ax ;~ 0B93:1B64
cs=0xb93;eip=0x001b66; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_150))));	// 22265 mov     bx, [bp+var_150] ;~ 0B93:1B66
cs=0xb93;eip=0x001b6a; 	T(MOV(ax, *(dw*)(((db*)&word_444f4)+bx)));	// 22266 mov     ax, word_444F4[bx] ;~ 0B93:1B6A
cs=0xb93;eip=0x001b6e; 	T(MOV(dx, *(dw*)(((db*)&word_444f6)+bx)));	// 22267 mov     dx, word_444F6[bx] ;~ 0B93:1B6E
cs=0xb93;eip=0x001b72; 	T(ADD(ax, word_446ba));	// 22268 add     ax, word_446BA ;~ 0B93:1B72
cs=0xb93;eip=0x001b76; 	T(ADC(dx, word_446bc));	// 22269 adc     dx, word_446BC ;~ 0B93:1B76
cs=0xb93;eip=0x001b7a; 	T(MOV(cl, 6));	// 22270 mov     cl, 6 ;~ 0B93:1B7A
loc_1ba8c:
	// 5726 
cs=0xb93;eip=0x001b7c; 	T(SAR(dx, 1));	// 22273 sar     dx, 1 ;~ 0B93:1B7C
cs=0xb93;eip=0x001b7e; 	T(RCR(ax, 1));	// 22274 rcr     ax, 1 ;~ 0B93:1B7E
cs=0xb93;eip=0x001b80; 	T(DEC(cl));	// 22275 dec     cl ;~ 0B93:1B80
cs=0xb93;eip=0x001b82; 	J(JNZ(loc_1ba8c));	// 22276 jnz     short loc_1BA8C ;~ 0B93:1B82
cs=0xb93;eip=0x001b84; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_56))));	// 22277 sub     ax, [bp+var_56] ;~ 0B93:1B84
cs=0xb93;eip=0x001b87; 	T(MOV(bx, curtransshape_ptr));	// 22278 mov     bx, curtransshape_ptr ;~ 0B93:1B87
cs=0xb93;eip=0x001b8b; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 22279 mov     [bx+2], ax ;~ 0B93:1B8B
cs=0xb93;eip=0x001b8e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_150))));	// 22280 mov     bx, [bp+var_150] ;~ 0B93:1B8E
cs=0xb93;eip=0x001b92; 	T(MOV(ax, *(dw*)(((db*)&word_44554)+bx)));	// 22281 mov     ax, word_44554[bx] ;~ 0B93:1B92
cs=0xb93;eip=0x001b96; 	T(MOV(dx, *(dw*)(((db*)&word_44556)+bx)));	// 22282 mov     dx, word_44556[bx] ;~ 0B93:1B96
cs=0xb93;eip=0x001b9a; 	T(ADD(ax, word_446be));	// 22283 add     ax, word_446BE ;~ 0B93:1B9A
cs=0xb93;eip=0x001b9e; 	T(ADC(dx, word_446c0));	// 22284 adc     dx, word_446C0 ;~ 0B93:1B9E
cs=0xb93;eip=0x001ba2; 	T(MOV(cl, 6));	// 22285 mov     cl, 6 ;~ 0B93:1BA2
loc_1bab4:
	// 5727 
cs=0xb93;eip=0x001ba4; 	T(SAR(dx, 1));	// 22288 sar     dx, 1 ;~ 0B93:1BA4
cs=0xb93;eip=0x001ba6; 	T(RCR(ax, 1));	// 22289 rcr     ax, 1 ;~ 0B93:1BA6
cs=0xb93;eip=0x001ba8; 	T(DEC(cl));	// 22290 dec     cl ;~ 0B93:1BA8
cs=0xb93;eip=0x001baa; 	J(JNZ(loc_1bab4));	// 22291 jnz     short loc_1BAB4 ;~ 0B93:1BAA
cs=0xb93;eip=0x001bac; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_54))));	// 22292 sub     ax, [bp+var_54] ;~ 0B93:1BAC
cs=0xb93;eip=0x001baf; 	T(MOV(bx, curtransshape_ptr));	// 22293 mov     bx, curtransshape_ptr ;~ 0B93:1BAF
cs=0xb93;eip=0x001bb3; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 22294 mov     [bx+4], ax ;~ 0B93:1BB3
cs=0xb93;eip=0x001bb6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12e))));	// 22295 mov     bx, [bp+var_12E] ;~ 0B93:1BB6
cs=0xb93;eip=0x001bba; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 22296 mov     ax, [bx+4] ;~ 0B93:1BBA
cs=0xb93;eip=0x001bbd; 	T(MOV(bx, curtransshape_ptr));	// 22297 mov     bx, curtransshape_ptr ;~ 0B93:1BBD
cs=0xb93;eip=0x001bc1; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 22298 mov     [bx+6], ax ;~ 0B93:1BC1
cs=0xb93;eip=0x001bc4; 	T(MOV(bx, curtransshape_ptr));	// 22299 mov     bx, curtransshape_ptr ;~ 0B93:1BC4
cs=0xb93;eip=0x001bc8; 	X(MOV(*(dw*)(raddr(ds,bx+8)), offset(dseg,rect_unk6)));	// 22300 mov     word ptr [bx+8], offset rect_unk6 ;~ 0B93:1BC8
cs=0xb93;eip=0x001bcd; 	T(MOV(bx, curtransshape_ptr));	// 22301 mov     bx, curtransshape_ptr ;~ 0B93:1BCD
cs=0xb93;eip=0x001bd1; 	T(MOV(al, *(raddr(ss,bp+var_122))));	// 22302 mov     al, [bp+var_122] ;~ 0B93:1BD1
cs=0xb93;eip=0x001bd5; 	T(OR(al, 5));	// 22303 or      al, 5 ;~ 0B93:1BD5
cs=0xb93;eip=0x001bd7; 	X(MOV(*(raddr(ds,bx+0x12)), al));	// 22304 mov     [bx+12h], al ;~ 0B93:1BD7
cs=0xb93;eip=0x001bda; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_154)))));	// 22305 mov     bx, word ptr [bp+var_154] ;~ 0B93:1BDA
cs=0xb93;eip=0x001bde; 	T(MOV(ax, *(dw*)(((db*)&word_44792)+bx)));	// 22306 mov     ax, word_44792[bx] ;~ 0B93:1BDE
cs=0xb93;eip=0x001be2; 	T(NEG(ax));	// 22307 neg     ax ;~ 0B93:1BE2
cs=0xb93;eip=0x001be4; 	T(MOV(bx, curtransshape_ptr));	// 22308 mov     bx, curtransshape_ptr ;~ 0B93:1BE4
cs=0xb93;eip=0x001be8; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), ax));	// 22309 mov     [bx+0Ah], ax ;~ 0B93:1BE8
cs=0xb93;eip=0x001beb; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_154)))));	// 22310 mov     bx, word ptr [bp+var_154] ;~ 0B93:1BEB
cs=0xb93;eip=0x001bef; 	T(MOV(ax, *(dw*)(((db*)&word_447c2)+bx)));	// 22311 mov     ax, word_447C2[bx] ;~ 0B93:1BEF
cs=0xb93;eip=0x001bf3; 	T(NEG(ax));	// 22312 neg     ax ;~ 0B93:1BF3
cs=0xb93;eip=0x001bf5; 	T(MOV(bx, curtransshape_ptr));	// 22313 mov     bx, curtransshape_ptr ;~ 0B93:1BF5
cs=0xb93;eip=0x001bf9; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 22314 mov     [bx+0Ch], ax ;~ 0B93:1BF9
cs=0xb93;eip=0x001bfc; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_154)))));	// 22315 mov     bx, word ptr [bp+var_154] ;~ 0B93:1BFC
cs=0xb93;eip=0x001c00; 	T(MOV(ax, *(dw*)(((db*)&word_447f2)+bx)));	// 22316 mov     ax, word_447F2[bx] ;~ 0B93:1C00
cs=0xb93;eip=0x001c04; 	T(NEG(ax));	// 22317 neg     ax ;~ 0B93:1C04
cs=0xb93;eip=0x001c06; 	T(MOV(bx, curtransshape_ptr));	// 22318 mov     bx, curtransshape_ptr ;~ 0B93:1C06
cs=0xb93;eip=0x001c0a; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), ax));	// 22319 mov     [bx+0Eh], ax ;~ 0B93:1C0A
cs=0xb93;eip=0x001c0d; 	T(MOV(bx, curtransshape_ptr));	// 22320 mov     bx, curtransshape_ptr ;~ 0B93:1C0D
cs=0xb93;eip=0x001c11; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), 0x400));	// 22321 mov     word ptr [bx+10h], 400h ;~ 0B93:1C11
cs=0xb93;eip=0x001c16; 	T(MOV(bx, curtransshape_ptr));	// 22322 mov     bx, curtransshape_ptr ;~ 0B93:1C16
cs=0xb93;eip=0x001c1a; 	T(MOV(al, byte_449af));	// 22323 mov     al, byte_449AF ;~ 0B93:1C1A
cs=0xb93;eip=0x001c1d; 	X(MOV(*(raddr(ds,bx+0x13)), al));	// 22324 mov     [bx+13h], al ;~ 0B93:1C1D
cs=0xb93;eip=0x001c20; 	T(SUB(ax, ax));	// 22325 sub     ax, ax ;~ 0B93:1C20
cs=0xb93;eip=0x001c22; 	X(PUSH(ax));	// 22326 push    ax ;~ 0B93:1C22
cs=0xb93;eip=0x001c23; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a4))));	// 22327 mov     ax, [bp+var_A4] ;~ 0B93:1C23
cs=0xb93;eip=0x001c27; 	T(AND(ax, *(dw*)(raddr(ss,bp+var_12a))));	// 22328 and     ax, [bp+var_12A] ;~ 0B93:1C27
cs=0xb93;eip=0x001c2b; 	X(PUSH(ax));	// 22329 push    ax ;~ 0B93:1C2B
cs=0xb93;eip=0x001c2c; 	X(PUSH(cs));	// 22330 push    cs ;~ 0B93:1C2C
cs=0xb93;eip=0x001c2d; 	J(CALL(transformed_shape_add_for_sort,0));	// 22331 call    near ptr transformed_shape_add_for_sort ;~ 0B93:1C2D
cs=0xb93;eip=0x001c30; 	T(ADD(sp, 4));	// 22332 add     sp, 4 ;~ 0B93:1C30
loc_1bb43:
	// 5728 
cs=0xb93;eip=0x001c33; 	T(INC(di));	// 22336 inc     di ;~ 0B93:1C33
cs=0xb93;eip=0x001c34; 	T(CMP(di, 0x18));	// 22337 cmp     di, 18h ;~ 0B93:1C34
cs=0xb93;eip=0x001c37; 	J(JGE(loc_1bb4c));	// 22338 jge     short loc_1BB4C ;~ 0B93:1C37
cs=0xb93;eip=0x001c39; 	J(JMP(loc_1ba10));	// 22339 jmp     loc_1BA10 ;~ 0B93:1C39
loc_1bb4c:
	// 5729 
cs=0xb93;eip=0x001c3c; 	X(MOV(*(dw*)(raddr(ss,bp+var_12e)), offset(dseg,unk_3d832)));	// 22344 mov     [bp+var_12E], offset unk_3D832 ;~ 0B93:1C3C
cs=0xb93;eip=0x001c42; 	T(MOV(bx, curtransshape_ptr));	// 22345 mov     bx, curtransshape_ptr ;~ 0B93:1C42
cs=0xb93;eip=0x001c46; 	T(MOV(ax, word_446b6));	// 22346 mov     ax, word_446B6 ;~ 0B93:1C46
cs=0xb93;eip=0x001c49; 	T(MOV(dx, word_446b8));	// 22347 mov     dx, word_446B8 ;~ 0B93:1C49
cs=0xb93;eip=0x001c4d; 	T(MOV(cl, 6));	// 22348 mov     cl, 6 ;~ 0B93:1C4D
loc_1bb5f:
	// 5730 
cs=0xb93;eip=0x001c4f; 	T(SAR(dx, 1));	// 22351 sar     dx, 1 ;~ 0B93:1C4F
cs=0xb93;eip=0x001c51; 	T(RCR(ax, 1));	// 22352 rcr     ax, 1 ;~ 0B93:1C51
cs=0xb93;eip=0x001c53; 	T(DEC(cl));	// 22353 dec     cl ;~ 0B93:1C53
cs=0xb93;eip=0x001c55; 	J(JNZ(loc_1bb5f));	// 22354 jnz     short loc_1BB5F ;~ 0B93:1C55
cs=0xb93;eip=0x001c57; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_58))));	// 22355 sub     ax, [bp+var_58] ;~ 0B93:1C57
cs=0xb93;eip=0x001c5a; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 22356 mov     [bx+0], ax ;~ 0B93:1C5A
cs=0xb93;eip=0x001c5c; 	T(MOV(bx, curtransshape_ptr));	// 22357 mov     bx, curtransshape_ptr ;~ 0B93:1C5C
cs=0xb93;eip=0x001c60; 	T(MOV(ax, word_446ba));	// 22358 mov     ax, word_446BA ;~ 0B93:1C60
cs=0xb93;eip=0x001c63; 	T(MOV(dx, word_446bc));	// 22359 mov     dx, word_446BC ;~ 0B93:1C63
cs=0xb93;eip=0x001c67; 	T(MOV(cl, 6));	// 22360 mov     cl, 6 ;~ 0B93:1C67
loc_1bb79:
	// 5731 
cs=0xb93;eip=0x001c69; 	T(SAR(dx, 1));	// 22363 sar     dx, 1 ;~ 0B93:1C69
cs=0xb93;eip=0x001c6b; 	T(RCR(ax, 1));	// 22364 rcr     ax, 1 ;~ 0B93:1C6B
cs=0xb93;eip=0x001c6d; 	T(DEC(cl));	// 22365 dec     cl ;~ 0B93:1C6D
cs=0xb93;eip=0x001c6f; 	J(JNZ(loc_1bb79));	// 22366 jnz     short loc_1BB79 ;~ 0B93:1C6F
cs=0xb93;eip=0x001c71; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_56))));	// 22367 sub     ax, [bp+var_56] ;~ 0B93:1C71
cs=0xb93;eip=0x001c74; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 22368 mov     [bx+2], ax ;~ 0B93:1C74
cs=0xb93;eip=0x001c77; 	T(MOV(bx, curtransshape_ptr));	// 22369 mov     bx, curtransshape_ptr ;~ 0B93:1C77
cs=0xb93;eip=0x001c7b; 	T(MOV(ax, word_446be));	// 22370 mov     ax, word_446BE ;~ 0B93:1C7B
cs=0xb93;eip=0x001c7e; 	T(MOV(dx, word_446c0));	// 22371 mov     dx, word_446C0 ;~ 0B93:1C7E
cs=0xb93;eip=0x001c82; 	T(MOV(cl, 6));	// 22372 mov     cl, 6 ;~ 0B93:1C82
loc_1bb94:
	// 5732 
cs=0xb93;eip=0x001c84; 	T(SAR(dx, 1));	// 22375 sar     dx, 1 ;~ 0B93:1C84
cs=0xb93;eip=0x001c86; 	T(RCR(ax, 1));	// 22376 rcr     ax, 1 ;~ 0B93:1C86
cs=0xb93;eip=0x001c88; 	T(DEC(cl));	// 22377 dec     cl ;~ 0B93:1C88
cs=0xb93;eip=0x001c8a; 	J(JNZ(loc_1bb94));	// 22378 jnz     short loc_1BB94 ;~ 0B93:1C8A
cs=0xb93;eip=0x001c8c; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_54))));	// 22379 sub     ax, [bp+var_54] ;~ 0B93:1C8C
cs=0xb93;eip=0x001c8f; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 22380 mov     [bx+4], ax ;~ 0B93:1C8F
cs=0xb93;eip=0x001c92; 	T(CMP(*(raddr(ss,bp+var_fc)), 0));	// 22381 cmp     [bp+var_FC], 0 ;~ 0B93:1C92
cs=0xb93;eip=0x001c97; 	J(JNZ(loc_1bbb0));	// 22382 jnz     short loc_1BBB0 ;~ 0B93:1C97
cs=0xb93;eip=0x001c99; 	T(CMP(timertestflag2, 2));	// 22383 cmp     timertestflag2, 2 ;~ 0B93:1C99
cs=0xb93;eip=0x001c9e; 	J(JBE(loc_1bbc0));	// 22384 jbe     short loc_1BBC0 ;~ 0B93:1C9E
loc_1bbb0:
	// 5733 
cs=0xb93;eip=0x001ca0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12e))));	// 22387 mov     bx, [bp+var_12E] ;~ 0B93:1CA0
cs=0xb93;eip=0x001ca4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 22388 mov     ax, [bx+6] ;~ 0B93:1CA4
cs=0xb93;eip=0x001ca7; 	T(MOV(bx, curtransshape_ptr));	// 22389 mov     bx, curtransshape_ptr ;~ 0B93:1CA7
cs=0xb93;eip=0x001cab; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 22390 mov     [bx+6], ax ;~ 0B93:1CAB
cs=0xb93;eip=0x001cae; 	J(JMP(loc_1bbf6));	// 22391 jmp     short loc_1BBF6 ;~ 0B93:1CAE
loc_1bbc0:
	// 5734 
cs=0xb93;eip=0x001cb0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12e))));	// 22395 mov     bx, [bp+var_12E] ;~ 0B93:1CB0
cs=0xb93;eip=0x001cb4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 22396 mov     ax, [bx+4] ;~ 0B93:1CB4
cs=0xb93;eip=0x001cb7; 	T(MOV(bx, curtransshape_ptr));	// 22397 mov     bx, curtransshape_ptr ;~ 0B93:1CB7
cs=0xb93;eip=0x001cbb; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 22398 mov     [bx+6], ax ;~ 0B93:1CBB
cs=0xb93;eip=0x001cbe; 	T(MOV(ax, offset(dseg,oppcarshapevec)));	// 22399 mov     ax, offset oppcarshapevec ;~ 0B93:1CBE
cs=0xb93;eip=0x001cc1; 	X(PUSH(ax));	// 22400 push    ax ;~ 0B93:1CC1
cs=0xb93;eip=0x001cc2; 	T(MOV(ax, offset(dseg,oppcarshapevecs)));	// 22401 mov     ax, offset oppcarshapevecs ;~ 0B93:1CC2
cs=0xb93;eip=0x001cc5; 	X(PUSH(ax));	// 22402 push    ax ;~ 0B93:1CC5
cs=0xb93;eip=0x001cc6; 	T(MOV(ax, offset(dseg,word_4448a)));	// 22403 mov     ax, offset word_4448A ;~ 0B93:1CC6
cs=0xb93;eip=0x001cc9; 	X(PUSH(ax));	// 22404 push    ax ;~ 0B93:1CC9
cs=0xb93;eip=0x001cca; 	T(MOV(ax, offset(dseg,unk_4470a)));	// 22405 mov     ax, offset unk_4470A ;~ 0B93:1CCA
cs=0xb93;eip=0x001ccd; 	X(PUSH(ax));	// 22406 push    ax ;~ 0B93:1CCD
cs=0xb93;eip=0x001cce; 	X(PUSH(word_446d6));	// 22407 push    word_446D6 ;~ 0B93:1CCE
cs=0xb93;eip=0x001cd2; 	T(MOV(ax, word_438a8));	// 22408 mov     ax, word_438A8 ;~ 0B93:1CD2
cs=0xb93;eip=0x001cd5; 	T(MOV(dx, word_438aa));	// 22409 mov     dx, word_438AA ;~ 0B93:1CD5
cs=0xb93;eip=0x001cd9; 	T(ADD(ax, 0x30));	// 22410 add     ax, 30h ; '0' ;~ 0B93:1CD9
cs=0xb93;eip=0x001cdc; 	X(PUSH(dx));	// 22411 push    dx ;~ 0B93:1CDC
cs=0xb93;eip=0x001cdd; 	X(PUSH(ax));	// 22412 push    ax ;~ 0B93:1CDD
cs=0xb93;eip=0x001cde; 	J(CALLF(sub_204ae,0));	// 22413 call    sub_204AE ;~ 0B93:1CDE
cs=0xb93;eip=0x001ce3; 	T(ADD(sp, 0x0E));	// 22414 add     sp, 0Eh ;~ 0B93:1CE3
loc_1bbf6:
	// 5735 
cs=0xb93;eip=0x001ce6; 	T(CMP(timertestflag_copy, 0));	// 22417 cmp     timertestflag_copy, 0 ;~ 0B93:1CE6
cs=0xb93;eip=0x001ceb; 	J(JZ(loc_1bc10));	// 22418 jz      short loc_1BC10 ;~ 0B93:1CEB
cs=0xb93;eip=0x001ced; 	T(MOV(bx, curtransshape_ptr));	// 22419 mov     bx, curtransshape_ptr ;~ 0B93:1CED
cs=0xb93;eip=0x001cf1; 	X(MOV(*(dw*)(raddr(ds,bx+8)), offset(dseg,rect_unk15)));	// 22420 mov     word ptr [bx+8], offset rect_unk15 ;~ 0B93:1CF1
loc_1bc06:
	// 5736 
cs=0xb93;eip=0x001cf6; 	T(MOV(bx, curtransshape_ptr));	// 22423 mov     bx, curtransshape_ptr ;~ 0B93:1CF6
cs=0xb93;eip=0x001cfa; 	X(MOV(*(raddr(ds,bx+0x12)), 0x0C));	// 22424 mov     byte ptr [bx+12h], 0Ch ;~ 0B93:1CFA
cs=0xb93;eip=0x001cfe; 	J(JMP(loc_1bc3e));	// 22425 jmp     short loc_1BC3E ;~ 0B93:1CFE
loc_1bc10:
	// 5737 
cs=0xb93;eip=0x001d00; 	T(CMP(byte_4477f, 1));	// 22429 cmp     byte_4477F, 1 ;~ 0B93:1D00
cs=0xb93;eip=0x001d05; 	J(JNZ(loc_1bc36));	// 22430 jnz     short loc_1BC36 ;~ 0B93:1D05
cs=0xb93;eip=0x001d07; 	X(PUSH(si));	// 22431 push    si ;~ 0B93:1D07
cs=0xb93;eip=0x001d08; 	X(PUSH(di));	// 22432 push    di ;~ 0B93:1D08
cs=0xb93;eip=0x001d09; 	T(di = bp+var_8e);	// 22433 lea     di, [bp+var_8E] ;~ 0B93:1D09
cs=0xb93;eip=0x001d0d; 	T(MOV(si, offset(dseg,cliprect_unk)));	// 22434 mov     si, offset cliprect_unk ;~ 0B93:1D0D
cs=0xb93;eip=0x001d10; 	X(PUSH(ss));	// 22435 push    ss ;~ 0B93:1D10
cs=0xb93;eip=0x001d11; 	X(POP(es));	// 22436 pop     es ;~ 0B93:1D11
cs=0xb93;eip=0x001d12; 	X(MOVSW);	// 22437 movsw ;~ 0B93:1D12
cs=0xb93;eip=0x001d13; 	X(MOVSW);	// 22438 movsw ;~ 0B93:1D13
cs=0xb93;eip=0x001d14; 	X(MOVSW);	// 22439 movsw ;~ 0B93:1D14
cs=0xb93;eip=0x001d15; 	X(MOVSW);	// 22440 movsw ;~ 0B93:1D15
cs=0xb93;eip=0x001d16; 	X(POP(di));	// 22441 pop     di ;~ 0B93:1D16
cs=0xb93;eip=0x001d17; 	X(POP(si));	// 22442 pop     si ;~ 0B93:1D17
cs=0xb93;eip=0x001d18; 	T(MOV(bx, curtransshape_ptr));	// 22443 mov     bx, curtransshape_ptr ;~ 0B93:1D18
cs=0xb93;eip=0x001d1c; 	T(ax = bp+var_8e);	// 22444 lea     ax, [bp+var_8E] ;~ 0B93:1D1C
cs=0xb93;eip=0x001d20; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 22445 mov     [bx+8], ax ;~ 0B93:1D20
cs=0xb93;eip=0x001d23; 	J(JMP(loc_1bc06));	// 22446 jmp     short loc_1BC06 ;~ 0B93:1D23
loc_1bc36:
	// 5738 
cs=0xb93;eip=0x001d26; 	T(MOV(bx, curtransshape_ptr));	// 22451 mov     bx, curtransshape_ptr ;~ 0B93:1D26
cs=0xb93;eip=0x001d2a; 	X(MOV(*(raddr(ds,bx+0x12)), 4));	// 22452 mov     byte ptr [bx+12h], 4 ;~ 0B93:1D2A
loc_1bc3e:
	// 5739 
cs=0xb93;eip=0x001d2e; 	T(MOV(bx, curtransshape_ptr));	// 22455 mov     bx, curtransshape_ptr ;~ 0B93:1D2E
cs=0xb93;eip=0x001d32; 	T(MOV(ax, word_446d2));	// 22456 mov     ax, word_446D2 ;~ 0B93:1D32
cs=0xb93;eip=0x001d35; 	T(NEG(ax));	// 22457 neg     ax ;~ 0B93:1D35
cs=0xb93;eip=0x001d37; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), ax));	// 22458 mov     [bx+0Ah], ax ;~ 0B93:1D37
cs=0xb93;eip=0x001d3a; 	T(MOV(bx, curtransshape_ptr));	// 22459 mov     bx, curtransshape_ptr ;~ 0B93:1D3A
cs=0xb93;eip=0x001d3e; 	T(MOV(ax, word_446d0));	// 22460 mov     ax, word_446D0 ;~ 0B93:1D3E
cs=0xb93;eip=0x001d41; 	T(NEG(ax));	// 22461 neg     ax ;~ 0B93:1D41
cs=0xb93;eip=0x001d43; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 22462 mov     [bx+0Ch], ax ;~ 0B93:1D43
cs=0xb93;eip=0x001d46; 	T(MOV(bx, curtransshape_ptr));	// 22463 mov     bx, curtransshape_ptr ;~ 0B93:1D46
cs=0xb93;eip=0x001d4a; 	T(MOV(ax, word_446ce));	// 22464 mov     ax, word_446CE ;~ 0B93:1D4A
cs=0xb93;eip=0x001d4d; 	T(NEG(ax));	// 22465 neg     ax ;~ 0B93:1D4D
cs=0xb93;eip=0x001d4f; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), ax));	// 22466 mov     [bx+0Eh], ax ;~ 0B93:1D4F
cs=0xb93;eip=0x001d52; 	T(MOV(bx, curtransshape_ptr));	// 22467 mov     bx, curtransshape_ptr ;~ 0B93:1D52
cs=0xb93;eip=0x001d56; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), 0x12C));	// 22468 mov     word ptr [bx+10h], 12Ch ;~ 0B93:1D56
cs=0xb93;eip=0x001d5b; 	T(MOV(bx, curtransshape_ptr));	// 22469 mov     bx, curtransshape_ptr ;~ 0B93:1D5B
cs=0xb93;eip=0x001d5f; 	T(MOV(al, byte_449af));	// 22470 mov     al, byte_449AF ;~ 0B93:1D5F
cs=0xb93;eip=0x001d62; 	X(MOV(*(raddr(ds,bx+0x13)), al));	// 22471 mov     [bx+13h], al ;~ 0B93:1D62
cs=0xb93;eip=0x001d65; 	T(MOV(ax, 3));	// 22472 mov     ax, 3 ;~ 0B93:1D65
cs=0xb93;eip=0x001d68; 	X(PUSH(ax));	// 22473 push    ax ;~ 0B93:1D68
cs=0xb93;eip=0x001d69; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a4))));	// 22474 mov     ax, [bp+var_A4] ;~ 0B93:1D69
cs=0xb93;eip=0x001d6d; 	T(AND(ax, *(dw*)(raddr(ss,bp+var_12a))));	// 22475 and     ax, [bp+var_12A] ;~ 0B93:1D6D
cs=0xb93;eip=0x001d71; 	X(PUSH(ax));	// 22476 push    ax ;~ 0B93:1D71
cs=0xb93;eip=0x001d72; 	X(PUSH(cs));	// 22477 push    cs ;~ 0B93:1D72
cs=0xb93;eip=0x001d73; 	J(CALL(transformed_shape_add_for_sort,0));	// 22478 call    near ptr transformed_shape_add_for_sort ;~ 0B93:1D73
cs=0xb93;eip=0x001d76; 	T(ADD(sp, 4));	// 22479 add     sp, 4 ;~ 0B93:1D76
loc_1bc89:
	// 5740 
cs=0xb93;eip=0x001d79; 	T(CMP(byte_44889, 0));	// 22483 cmp     byte_44889, 0 ;~ 0B93:1D79
cs=0xb93;eip=0x001d7e; 	J(JZ(loc_1bc93));	// 22484 jz      short loc_1BC93 ;~ 0B93:1D7E
cs=0xb93;eip=0x001d80; 	J(JMP(loc_1beaa));	// 22485 jmp     loc_1BEAA ;~ 0B93:1D80
loc_1bc93:
	// 5741 
cs=0xb93;eip=0x001d83; 	T(MOV(al, startcol2));	// 22489 mov     al, startcol2 ;~ 0B93:1D83
cs=0xb93;eip=0x001d86; 	T(CMP(*(raddr(ss,bp+var_f6)), al));	// 22490 cmp     [bp+var_F6], al ;~ 0B93:1D86
cs=0xb93;eip=0x001d8a; 	J(JZ(loc_1bca5));	// 22491 jz      short loc_1BCA5 ;~ 0B93:1D8A
cs=0xb93;eip=0x001d8c; 	T(CMP(*(raddr(ss,bp+var_100)), al));	// 22492 cmp     [bp+var_100], al ;~ 0B93:1D8C
cs=0xb93;eip=0x001d90; 	J(JZ(loc_1bca5));	// 22493 jz      short loc_1BCA5 ;~ 0B93:1D90
cs=0xb93;eip=0x001d92; 	J(JMP(loc_1beaa));	// 22494 jmp     loc_1BEAA ;~ 0B93:1D92
loc_1bca5:
	// 5742 
cs=0xb93;eip=0x001d95; 	T(MOV(al, startrow2));	// 22499 mov     al, startrow2 ;~ 0B93:1D95
cs=0xb93;eip=0x001d98; 	T(CMP(*(raddr(ss,bp+var_102)), al));	// 22500 cmp     [bp+var_102], al ;~ 0B93:1D98
cs=0xb93;eip=0x001d9c; 	J(JZ(loc_1bcb7));	// 22501 jz      short loc_1BCB7 ;~ 0B93:1D9C
cs=0xb93;eip=0x001d9e; 	T(CMP(*(raddr(ss,bp+var_12c)), al));	// 22502 cmp     [bp+var_12C], al ;~ 0B93:1D9E
cs=0xb93;eip=0x001da2; 	J(JZ(loc_1bcb7));	// 22503 jz      short loc_1BCB7 ;~ 0B93:1DA2
cs=0xb93;eip=0x001da4; 	J(JMP(loc_1beaa));	// 22504 jmp     loc_1BEAA ;~ 0B93:1DA4
loc_1bcb7:
	// 5743 
cs=0xb93;eip=0x001da7; 	T(MOV(ax, 0x24));	// 22509 mov     ax, 24h ; '$' ;~ 0B93:1DA7
cs=0xb93;eip=0x001daa; 	X(PUSH(ax));	// 22510 push    ax ;~ 0B93:1DAA
cs=0xb93;eip=0x001dab; 	X(PUSH(word_44dca));	// 22511 push    word_44DCA ;~ 0B93:1DAB
cs=0xb93;eip=0x001daf; 	J(CALLF(cos_fast,0));	// 22512 call    cos_fast ;~ 0B93:1DAF
cs=0xb93;eip=0x001db4; 	T(ADD(sp, 2));	// 22513 add     sp, 2 ;~ 0B93:1DB4
cs=0xb93;eip=0x001db7; 	X(PUSH(ax));	// 22514 push    ax ;~ 0B93:1DB7
cs=0xb93;eip=0x001db8; 	J(CALLF(multiply_and_scale,0));	// 22515 call    multiply_and_scale ;~ 0B93:1DB8
cs=0xb93;eip=0x001dbd; 	T(ADD(sp, 4));	// 22516 add     sp, 4 ;~ 0B93:1DBD
cs=0xb93;eip=0x001dc0; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), ax));	// 22517 mov     [bp+var_DE], ax ;~ 0B93:1DC0
cs=0xb93;eip=0x001dc4; 	T(MOV(ax, 0x24));	// 22518 mov     ax, 24h ; '$' ;~ 0B93:1DC4
cs=0xb93;eip=0x001dc7; 	X(PUSH(ax));	// 22519 push    ax ;~ 0B93:1DC7
cs=0xb93;eip=0x001dc8; 	X(PUSH(word_44dca));	// 22520 push    word_44DCA ;~ 0B93:1DC8
cs=0xb93;eip=0x001dcc; 	J(CALLF(sin_fast,0));	// 22521 call    sin_fast ;~ 0B93:1DCC
cs=0xb93;eip=0x001dd1; 	T(ADD(sp, 2));	// 22522 add     sp, 2 ;~ 0B93:1DD1
cs=0xb93;eip=0x001dd4; 	X(PUSH(ax));	// 22523 push    ax ;~ 0B93:1DD4
cs=0xb93;eip=0x001dd5; 	J(CALLF(multiply_and_scale,0));	// 22524 call    multiply_and_scale ;~ 0B93:1DD5
cs=0xb93;eip=0x001dda; 	T(ADD(sp, 4));	// 22525 add     sp, 4 ;~ 0B93:1DDA
cs=0xb93;eip=0x001ddd; 	T(ADD(ax, 0x38));	// 22526 add     ax, 38h ; '8' ;~ 0B93:1DDD
cs=0xb93;eip=0x001de0; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), ax));	// 22527 mov     [bp+var_36], ax ;~ 0B93:1DE0
cs=0xb93;eip=0x001de3; 	T(MOV(ax, word_43748));	// 22528 mov     ax, word_43748 ;~ 0B93:1DE3
cs=0xb93;eip=0x001de6; 	T(MOV(dx, word_4374a));	// 22529 mov     dx, word_4374A ;~ 0B93:1DE6
cs=0xb93;eip=0x001dea; 	T(ADD(ax, 0x30));	// 22530 add     ax, 30h ; '0' ;~ 0B93:1DEA
cs=0xb93;eip=0x001ded; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_108))), ax));	// 22531 mov     word ptr [bp+var_108], ax ;~ 0B93:1DED
cs=0xb93;eip=0x001df1; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_108+2))), dx));	// 22532 mov     word ptr [bp+var_108+2], dx ;~ 0B93:1DF1
cs=0xb93;eip=0x001df5; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_108))));	// 22533 les     bx, [bp+var_108] ;~ 0B93:1DF5
cs=0xb93;eip=0x001df9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_de))));	// 22534 mov     ax, [bp+var_DE] ;~ 0B93:1DF9
cs=0xb93;eip=0x001dfd; 	T(SUB(ax, 0x24));	// 22535 sub     ax, 24h ; '$' ;~ 0B93:1DFD
cs=0xb93;eip=0x001e00; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 22536 mov     es:[bx], ax ;~ 0B93:1E00
cs=0xb93;eip=0x001e03; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_108))));	// 22537 les     bx, [bp+var_108] ;~ 0B93:1E03
cs=0xb93;eip=0x001e07; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_de))));	// 22538 mov     ax, [bp+var_DE] ;~ 0B93:1E07
cs=0xb93;eip=0x001e0b; 	T(SUB(ax, 0x24));	// 22539 sub     ax, 24h ; '$' ;~ 0B93:1E0B
cs=0xb93;eip=0x001e0e; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 22540 mov     es:[bx+6], ax ;~ 0B93:1E0E
cs=0xb93;eip=0x001e12; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_108))));	// 22541 les     bx, [bp+var_108] ;~ 0B93:1E12
cs=0xb93;eip=0x001e16; 	T(MOV(ax, 0x24));	// 22542 mov     ax, 24h ; '$' ;~ 0B93:1E16
cs=0xb93;eip=0x001e19; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_de))));	// 22543 sub     ax, [bp+var_DE] ;~ 0B93:1E19
cs=0xb93;eip=0x001e1d; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), ax));	// 22544 mov     es:[bx+0Ch], ax ;~ 0B93:1E1D
cs=0xb93;eip=0x001e21; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_108))));	// 22545 les     bx, [bp+var_108] ;~ 0B93:1E21
cs=0xb93;eip=0x001e25; 	T(MOV(ax, 0x24));	// 22546 mov     ax, 24h ; '$' ;~ 0B93:1E25
cs=0xb93;eip=0x001e28; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_de))));	// 22547 sub     ax, [bp+var_DE] ;~ 0B93:1E28
cs=0xb93;eip=0x001e2c; 	X(MOV(*(dw*)(raddr(es,bx+0x12)), ax));	// 22548 mov     es:[bx+12h], ax ;~ 0B93:1E2C
cs=0xb93;eip=0x001e30; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_108))));	// 22549 les     bx, [bp+var_108] ;~ 0B93:1E30
cs=0xb93;eip=0x001e34; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_36))));	// 22550 mov     ax, [bp+var_36] ;~ 0B93:1E34
cs=0xb93;eip=0x001e37; 	X(MOV(*(dw*)(raddr(es,bx+4)), ax));	// 22551 mov     es:[bx+4], ax ;~ 0B93:1E37
cs=0xb93;eip=0x001e3b; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_108))));	// 22552 les     bx, [bp+var_108] ;~ 0B93:1E3B
cs=0xb93;eip=0x001e3f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_36))));	// 22553 mov     ax, [bp+var_36] ;~ 0B93:1E3F
cs=0xb93;eip=0x001e42; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 22554 mov     es:[bx+0Ah], ax ;~ 0B93:1E42
cs=0xb93;eip=0x001e46; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_108))));	// 22555 les     bx, [bp+var_108] ;~ 0B93:1E46
cs=0xb93;eip=0x001e4a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_36))));	// 22556 mov     ax, [bp+var_36] ;~ 0B93:1E4A
cs=0xb93;eip=0x001e4d; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), ax));	// 22557 mov     es:[bx+10h], ax ;~ 0B93:1E4D
cs=0xb93;eip=0x001e51; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_108))));	// 22558 les     bx, [bp+var_108] ;~ 0B93:1E51
cs=0xb93;eip=0x001e55; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_36))));	// 22559 mov     ax, [bp+var_36] ;~ 0B93:1E55
cs=0xb93;eip=0x001e58; 	X(MOV(*(dw*)(raddr(es,bx+0x16)), ax));	// 22560 mov     es:[bx+16h], ax ;~ 0B93:1E58
cs=0xb93;eip=0x001e5c; 	T(MOV(ax, 0x24));	// 22561 mov     ax, 24h ; '$' ;~ 0B93:1E5C
cs=0xb93;eip=0x001e5f; 	X(PUSH(ax));	// 22562 push    ax ;~ 0B93:1E5F
cs=0xb93;eip=0x001e60; 	T(MOV(ax, track_angle));	// 22563 mov     ax, track_angle ;~ 0B93:1E60
cs=0xb93;eip=0x001e63; 	T(ADD(ah, 1));	// 22564 add     ah, 1 ;~ 0B93:1E63
cs=0xb93;eip=0x001e66; 	X(PUSH(ax));	// 22565 push    ax ;~ 0B93:1E66
cs=0xb93;eip=0x001e67; 	J(CALLF(sin_fast,0));	// 22566 call    sin_fast ;~ 0B93:1E67
cs=0xb93;eip=0x001e6c; 	T(ADD(sp, 2));	// 22567 add     sp, 2 ;~ 0B93:1E6C
cs=0xb93;eip=0x001e6f; 	X(PUSH(ax));	// 22568 push    ax ;~ 0B93:1E6F
cs=0xb93;eip=0x001e70; 	J(CALLF(multiply_and_scale,0));	// 22569 call    multiply_and_scale ;~ 0B93:1E70
cs=0xb93;eip=0x001e75; 	T(ADD(sp, 4));	// 22570 add     sp, 4 ;~ 0B93:1E75
cs=0xb93;eip=0x001e78; 	T(MOV(cx, 0x1B6));	// 22571 mov     cx, 1B6h ;~ 0B93:1E78
cs=0xb93;eip=0x001e7b; 	X(PUSH(cx));	// 22572 push    cx ;~ 0B93:1E7B
cs=0xb93;eip=0x001e7c; 	T(MOV(cx, track_angle));	// 22573 mov     cx, track_angle ;~ 0B93:1E7C
cs=0xb93;eip=0x001e80; 	T(ADD(ch, 2));	// 22574 add     ch, 2 ;~ 0B93:1E80
cs=0xb93;eip=0x001e83; 	X(PUSH(cx));	// 22575 push    cx ;~ 0B93:1E83
cs=0xb93;eip=0x001e84; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_154))), ax));	// 22576 mov     word ptr [bp+var_154], ax ;~ 0B93:1E84
cs=0xb93;eip=0x001e88; 	J(CALLF(sin_fast,0));	// 22577 call    sin_fast ;~ 0B93:1E88
cs=0xb93;eip=0x001e8d; 	T(ADD(sp, 2));	// 22578 add     sp, 2 ;~ 0B93:1E8D
cs=0xb93;eip=0x001e90; 	X(PUSH(ax));	// 22579 push    ax ;~ 0B93:1E90
cs=0xb93;eip=0x001e91; 	J(CALLF(multiply_and_scale,0));	// 22580 call    multiply_and_scale ;~ 0B93:1E91
cs=0xb93;eip=0x001e96; 	T(ADD(sp, 4));	// 22581 add     sp, 4 ;~ 0B93:1E96
cs=0xb93;eip=0x001e99; 	T(MOV(cx, ax));	// 22582 mov     cx, ax ;~ 0B93:1E99
cs=0xb93;eip=0x001e9b; 	T(MOV(al, startcol2));	// 22583 mov     al, startcol2 ;~ 0B93:1E9B
cs=0xb93;eip=0x001e9e; 	T(CBW);	// 22584 cbw ;~ 0B93:1E9E
cs=0xb93;eip=0x001e9f; 	T(MOV(bx, ax));	// 22585 mov     bx, ax ;~ 0B93:1E9F
cs=0xb93;eip=0x001ea1; 	T(SHL(bx, 1));	// 22586 shl     bx, 1 ;~ 0B93:1EA1
cs=0xb93;eip=0x001ea3; 	T(ADD(cx, *(dw*)(((db*)trackcenterpos2)+bx)));	// 22587 add     cx, trackcenterpos2[bx] ;~ 0B93:1EA3
cs=0xb93;eip=0x001ea7; 	T(ADD(cx, *(dw*)((dw*)(raddr(ss,bp+var_154)))));	// 22588 add     cx, word ptr [bp+var_154] ;~ 0B93:1EA7
cs=0xb93;eip=0x001eab; 	T(SUB(cx, *(dw*)(raddr(ss,bp+var_58))));	// 22589 sub     cx, [bp+var_58] ;~ 0B93:1EAB
cs=0xb93;eip=0x001eae; 	T(MOV(bx, curtransshape_ptr));	// 22590 mov     bx, curtransshape_ptr ;~ 0B93:1EAE
cs=0xb93;eip=0x001eb2; 	X(MOV(*(dw*)(raddr(ds,bx+0)), cx));	// 22591 mov     [bx+0], cx ;~ 0B93:1EB2
cs=0xb93;eip=0x001eb4; 	T(MOV(al, hillflag));	// 22592 mov     al, hillFlag ;~ 0B93:1EB4
cs=0xb93;eip=0x001eb7; 	T(CBW);	// 22593 cbw ;~ 0B93:1EB7
cs=0xb93;eip=0x001eb8; 	T(MOV(bx, ax));	// 22594 mov     bx, ax ;~ 0B93:1EB8
cs=0xb93;eip=0x001eba; 	T(SHL(bx, 1));	// 22595 shl     bx, 1 ;~ 0B93:1EBA
cs=0xb93;eip=0x001ebc; 	T(MOV(ax, *(dw*)(((db*)hillheightconsts)+bx)));	// 22596 mov     ax, hillHeightConsts[bx] ;~ 0B93:1EBC
cs=0xb93;eip=0x001ec0; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_56))));	// 22597 sub     ax, [bp+var_56] ;~ 0B93:1EC0
cs=0xb93;eip=0x001ec3; 	T(MOV(bx, curtransshape_ptr));	// 22598 mov     bx, curtransshape_ptr ;~ 0B93:1EC3
cs=0xb93;eip=0x001ec7; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 22599 mov     [bx+2], ax ;~ 0B93:1EC7
cs=0xb93;eip=0x001eca; 	T(MOV(ax, 0x24));	// 22600 mov     ax, 24h ; '$' ;~ 0B93:1ECA
cs=0xb93;eip=0x001ecd; 	X(PUSH(ax));	// 22601 push    ax ;~ 0B93:1ECD
cs=0xb93;eip=0x001ece; 	T(MOV(ax, track_angle));	// 22602 mov     ax, track_angle ;~ 0B93:1ECE
cs=0xb93;eip=0x001ed1; 	T(ADD(ah, 1));	// 22603 add     ah, 1 ;~ 0B93:1ED1
cs=0xb93;eip=0x001ed4; 	X(PUSH(ax));	// 22604 push    ax ;~ 0B93:1ED4
cs=0xb93;eip=0x001ed5; 	J(CALLF(cos_fast,0));	// 22605 call    cos_fast ;~ 0B93:1ED5
cs=0xb93;eip=0x001eda; 	T(ADD(sp, 2));	// 22606 add     sp, 2 ;~ 0B93:1EDA
cs=0xb93;eip=0x001edd; 	X(PUSH(ax));	// 22607 push    ax ;~ 0B93:1EDD
cs=0xb93;eip=0x001ede; 	J(CALLF(multiply_and_scale,0));	// 22608 call    multiply_and_scale ;~ 0B93:1EDE
cs=0xb93;eip=0x001ee3; 	T(ADD(sp, 4));	// 22609 add     sp, 4 ;~ 0B93:1EE3
cs=0xb93;eip=0x001ee6; 	T(MOV(cx, 0x1B6));	// 22610 mov     cx, 1B6h ;~ 0B93:1EE6
cs=0xb93;eip=0x001ee9; 	X(PUSH(cx));	// 22611 push    cx ;~ 0B93:1EE9
cs=0xb93;eip=0x001eea; 	T(MOV(cx, track_angle));	// 22612 mov     cx, track_angle ;~ 0B93:1EEA
cs=0xb93;eip=0x001eee; 	T(ADD(ch, 2));	// 22613 add     ch, 2 ;~ 0B93:1EEE
cs=0xb93;eip=0x001ef1; 	X(PUSH(cx));	// 22614 push    cx ;~ 0B93:1EF1
cs=0xb93;eip=0x001ef2; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_154))), ax));	// 22615 mov     word ptr [bp+var_154], ax ;~ 0B93:1EF2
cs=0xb93;eip=0x001ef6; 	J(CALLF(cos_fast,0));	// 22616 call    cos_fast ;~ 0B93:1EF6
cs=0xb93;eip=0x001efb; 	T(ADD(sp, 2));	// 22617 add     sp, 2 ;~ 0B93:1EFB
cs=0xb93;eip=0x001efe; 	X(PUSH(ax));	// 22618 push    ax ;~ 0B93:1EFE
cs=0xb93;eip=0x001eff; 	J(CALLF(multiply_and_scale,0));	// 22619 call    multiply_and_scale ;~ 0B93:1EFF
cs=0xb93;eip=0x001f04; 	T(ADD(sp, 4));	// 22620 add     sp, 4 ;~ 0B93:1F04
cs=0xb93;eip=0x001f07; 	T(MOV(cx, ax));	// 22621 mov     cx, ax ;~ 0B93:1F07
cs=0xb93;eip=0x001f09; 	T(MOV(al, startrow2));	// 22622 mov     al, startrow2 ;~ 0B93:1F09
cs=0xb93;eip=0x001f0c; 	T(CBW);	// 22623 cbw ;~ 0B93:1F0C
cs=0xb93;eip=0x001f0d; 	T(MOV(bx, ax));	// 22624 mov     bx, ax ;~ 0B93:1F0D
cs=0xb93;eip=0x001f0f; 	T(SHL(bx, 1));	// 22625 shl     bx, 1 ;~ 0B93:1F0F
cs=0xb93;eip=0x001f11; 	T(ADD(cx, *(dw*)(((db*)trackcenterpos)+bx)));	// 22626 add     cx, trackcenterpos[bx] ;~ 0B93:1F11
cs=0xb93;eip=0x001f15; 	T(ADD(cx, *(dw*)((dw*)(raddr(ss,bp+var_154)))));	// 22627 add     cx, word ptr [bp+var_154] ;~ 0B93:1F15
cs=0xb93;eip=0x001f19; 	T(SUB(cx, *(dw*)(raddr(ss,bp+var_54))));	// 22628 sub     cx, [bp+var_54] ;~ 0B93:1F19
cs=0xb93;eip=0x001f1c; 	T(MOV(bx, curtransshape_ptr));	// 22629 mov     bx, curtransshape_ptr ;~ 0B93:1F1C
cs=0xb93;eip=0x001f20; 	X(MOV(*(dw*)(raddr(ds,bx+4)), cx));	// 22630 mov     [bx+4], cx ;~ 0B93:1F20
cs=0xb93;eip=0x001f23; 	T(MOV(bx, curtransshape_ptr));	// 22631 mov     bx, curtransshape_ptr ;~ 0B93:1F23
cs=0xb93;eip=0x001f27; 	X(MOV(*(dw*)(raddr(ds,bx+6)), offset(dseg,unk_43746)));	// 22632 mov     word ptr [bx+6], offset unk_43746 ;~ 0B93:1F27
cs=0xb93;eip=0x001f2c; 	T(MOV(bx, curtransshape_ptr));	// 22633 mov     bx, curtransshape_ptr ;~ 0B93:1F2C
cs=0xb93;eip=0x001f30; 	X(MOV(*(dw*)(raddr(ds,bx+8)), offset(dseg,rect_unk6)));	// 22634 mov     word ptr [bx+8], offset rect_unk6 ;~ 0B93:1F30
cs=0xb93;eip=0x001f35; 	T(MOV(bx, curtransshape_ptr));	// 22635 mov     bx, curtransshape_ptr ;~ 0B93:1F35
cs=0xb93;eip=0x001f39; 	T(MOV(al, *(raddr(ss,bp+var_122))));	// 22636 mov     al, [bp+var_122] ;~ 0B93:1F39
cs=0xb93;eip=0x001f3d; 	T(OR(al, 4));	// 22637 or      al, 4 ;~ 0B93:1F3D
cs=0xb93;eip=0x001f3f; 	X(MOV(*(raddr(ds,bx+0x12)), al));	// 22638 mov     [bx+12h], al ;~ 0B93:1F3F
cs=0xb93;eip=0x001f42; 	T(MOV(bx, curtransshape_ptr));	// 22639 mov     bx, curtransshape_ptr ;~ 0B93:1F42
cs=0xb93;eip=0x001f46; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), 0));	// 22640 mov     word ptr [bx+0Ah], 0 ;~ 0B93:1F46
cs=0xb93;eip=0x001f4b; 	T(MOV(bx, curtransshape_ptr));	// 22641 mov     bx, curtransshape_ptr ;~ 0B93:1F4B
cs=0xb93;eip=0x001f4f; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), 0));	// 22642 mov     word ptr [bx+0Ch], 0 ;~ 0B93:1F4F
cs=0xb93;eip=0x001f54; 	T(MOV(bx, curtransshape_ptr));	// 22643 mov     bx, curtransshape_ptr ;~ 0B93:1F54
cs=0xb93;eip=0x001f58; 	T(MOV(ax, track_angle));	// 22644 mov     ax, track_angle ;~ 0B93:1F58
cs=0xb93;eip=0x001f5b; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), ax));	// 22645 mov     [bx+0Eh], ax ;~ 0B93:1F5B
cs=0xb93;eip=0x001f5e; 	T(MOV(bx, curtransshape_ptr));	// 22646 mov     bx, curtransshape_ptr ;~ 0B93:1F5E
cs=0xb93;eip=0x001f62; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), 0x400));	// 22647 mov     word ptr [bx+10h], 400h ;~ 0B93:1F62
cs=0xb93;eip=0x001f67; 	T(MOV(ax, word_44dca));	// 22648 mov     ax, word_44DCA ;~ 0B93:1F67
cs=0xb93;eip=0x001f6a; 	T(MOV(cl, 6));	// 22649 mov     cl, 6 ;~ 0B93:1F6A
cs=0xb93;eip=0x001f6c; 	T(SAR(ax, cl));	// 22650 sar     ax, cl ;~ 0B93:1F6C
cs=0xb93;eip=0x001f6e; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), ax));	// 22651 mov     [bp+var_DE], ax ;~ 0B93:1F6E
cs=0xb93;eip=0x001f72; 	T(CMP(ax, 3));	// 22652 cmp     ax, 3 ;~ 0B93:1F72
cs=0xb93;eip=0x001f75; 	J(JLE(loc_1be8d));	// 22653 jle     short loc_1BE8D ;~ 0B93:1F75
cs=0xb93;eip=0x001f77; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), 3));	// 22654 mov     [bp+var_DE], 3 ;~ 0B93:1F77
loc_1be8d:
	// 5744 
cs=0xb93;eip=0x001f7d; 	T(MOV(bx, curtransshape_ptr));	// 22657 mov     bx, curtransshape_ptr ;~ 0B93:1F7D
cs=0xb93;eip=0x001f81; 	T(MOV(al, *(db*)(raddr(ss,bp+var_de))));	// 22658 mov     al, byte ptr [bp+var_DE] ;~ 0B93:1F81
cs=0xb93;eip=0x001f85; 	X(MOV(*(raddr(ds,bx+0x13)), al));	// 22659 mov     [bx+13h], al ;~ 0B93:1F85
cs=0xb93;eip=0x001f88; 	T(SUB(ax, ax));	// 22660 sub     ax, ax ;~ 0B93:1F88
cs=0xb93;eip=0x001f8a; 	X(PUSH(ax));	// 22661 push    ax ;~ 0B93:1F8A
cs=0xb93;eip=0x001f8b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12a))));	// 22662 mov     ax, [bp+var_12A] ;~ 0B93:1F8B
cs=0xb93;eip=0x001f8f; 	T(AND(ax, 0x0F800));	// 22663 and     ax, 0F800h ;~ 0B93:1F8F
cs=0xb93;eip=0x001f92; 	X(PUSH(ax));	// 22664 push    ax ;~ 0B93:1F92
cs=0xb93;eip=0x001f93; 	X(PUSH(cs));	// 22665 push    cs ;~ 0B93:1F93
cs=0xb93;eip=0x001f94; 	J(CALL(transformed_shape_add_for_sort,0));	// 22666 call    near ptr transformed_shape_add_for_sort ;~ 0B93:1F94
cs=0xb93;eip=0x001f97; 	T(ADD(sp, 4));	// 22667 add     sp, 4 ;~ 0B93:1F97
loc_1beaa:
	// 5745 
cs=0xb93;eip=0x001f9a; 	T(CMP(transformedshape_counter, 0));	// 22671 cmp     transformedshape_counter, 0 ;~ 0B93:1F9A
cs=0xb93;eip=0x001f9f; 	J(JNZ(loc_1beb4));	// 22672 jnz     short loc_1BEB4 ;~ 0B93:1F9F
cs=0xb93;eip=0x001fa1; 	J(JMP(loc_1bf6c));	// 22673 jmp     loc_1BF6C ;~ 0B93:1FA1
loc_1beb4:
	// 5746 
cs=0xb93;eip=0x001fa4; 	T(CMP(transformedshape_counter, 1));	// 22677 cmp     transformedshape_counter, 1 ;~ 0B93:1FA4
cs=0xb93;eip=0x001fa9; 	J(JLE(loc_1bed0));	// 22678 jle     short loc_1BED0 ;~ 0B93:1FA9
cs=0xb93;eip=0x001fab; 	T(MOV(ax, offset(dseg,transformedshape_indices)));	// 22679 mov     ax, offset transformedshape_indices ;~ 0B93:1FAB
cs=0xb93;eip=0x001fae; 	X(PUSH(ax));	// 22680 push    ax ;~ 0B93:1FAE
cs=0xb93;eip=0x001faf; 	T(MOV(ax, offset(dseg,transformedshape_zarray)));	// 22681 mov     ax, offset transformedshape_zarray ;~ 0B93:1FAF
cs=0xb93;eip=0x001fb2; 	X(PUSH(ax));	// 22682 push    ax ;~ 0B93:1FB2
cs=0xb93;eip=0x001fb3; 	T(MOV(al, transformedshape_counter));	// 22683 mov     al, transformedshape_counter ;~ 0B93:1FB3
cs=0xb93;eip=0x001fb6; 	T(CBW);	// 22684 cbw ;~ 0B93:1FB6
cs=0xb93;eip=0x001fb7; 	X(PUSH(ax));	// 22685 push    ax ;~ 0B93:1FB7
cs=0xb93;eip=0x001fb8; 	J(CALLF(heapsort_by_order,0));	// 22686 call    heapsort_by_order ;~ 0B93:1FB8
cs=0xb93;eip=0x001fbd; 	T(ADD(sp, 6));	// 22687 add     sp, 6 ;~ 0B93:1FBD
loc_1bed0:
	// 5747 
cs=0xb93;eip=0x001fc0; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), 0));	// 22690 mov     [bp+var_DE], 0 ;~ 0B93:1FC0
cs=0xb93;eip=0x001fc6; 	J(JMP(loc_1bf38));	// 22691 jmp     short loc_1BF38 ;~ 0B93:1FC6
loc_1bed8:
	// 5748 
cs=0xb93;eip=0x001fc8; 	T(CMP(byte_446a2, 0));	// 22695 cmp     byte_446A2, 0 ;~ 0B93:1FC8
cs=0xb93;eip=0x001fcd; 	J(JNZ(loc_1bf09));	// 22696 jnz     short loc_1BF09 ;~ 0B93:1FCD
loc_1bedf:
	// 5749 
cs=0xb93;eip=0x001fcf; 	X(MOV(backlights_paint_override, 0x2E));	// 22699 mov     backlights_paint_override, 2Eh ; '.' ;~ 0B93:1FCF
loc_1bee4:
	// 5750 
cs=0xb93;eip=0x001fd4; 	T(MOV(ax, 0x14));	// 22703 mov     ax, 14h ;~ 0B93:1FD4
cs=0xb93;eip=0x001fd7; 	T(IMUL1_2(di));	// 22704 imul    di ;~ 0B93:1FD7
cs=0xb93;eip=0x001fd9; 	T(ADD(ax, offset(dseg,currenttransshape)));	// 22705 add     ax, offset currenttransshape ;~ 0B93:1FD9
cs=0xb93;eip=0x001fdc; 	X(PUSH(ax));	// 22706 push    ax ;~ 0B93:1FDC
cs=0xb93;eip=0x001fdd; 	J(CALLF(transformed_shape_op,0));	// 22707 call    transformed_shape_op ;~ 0B93:1FDD
cs=0xb93;eip=0x001fe2; 	T(ADD(sp, 2));	// 22708 add     sp, 2 ;~ 0B93:1FE2
cs=0xb93;eip=0x001fe5; 	T(CBW);	// 22709 cbw ;~ 0B93:1FE5
cs=0xb93;eip=0x001fe6; 	X(MOV(*(dw*)(raddr(ss,bp+var_14e)), ax));	// 22710 mov     [bp+var_14E], ax ;~ 0B93:1FE6
cs=0xb93;eip=0x001fea; 	T(OR(ax, ax));	// 22711 or      ax, ax ;~ 0B93:1FEA
cs=0xb93;eip=0x001fec; 	J(JLE(loc_1bf10));	// 22712 jle     short loc_1BF10 ;~ 0B93:1FEC
cs=0xb93;eip=0x001fee; 	J(JMP(loc_1b03c));	// 22713 jmp     loc_1B03C ;~ 0B93:1FEE
loc_1bf02:
	// 5751 
cs=0xb93;eip=0x001ff2; 	T(CMP(byte_44772, 0));	// 22718 cmp     byte_44772, 0 ;~ 0B93:1FF2
cs=0xb93;eip=0x001ff7; 	J(JZ(loc_1bedf));	// 22719 jz      short loc_1BEDF ;~ 0B93:1FF7
loc_1bf09:
	// 5752 
cs=0xb93;eip=0x001ff9; 	X(MOV(backlights_paint_override, 0x2F));	// 22722 mov     backlights_paint_override, 2Fh ; '/' ;~ 0B93:1FF9
cs=0xb93;eip=0x001ffe; 	J(JMP(loc_1bee4));	// 22723 jmp     short loc_1BEE4 ;~ 0B93:1FFE
loc_1bf10:
	// 5753 
cs=0xb93;eip=0x002000; 	T(CMP(*(dw*)(raddr(ss,bp+var_14e)), 0));	// 22727 cmp     [bp+var_14E], 0 ;~ 0B93:2000
cs=0xb93;eip=0x002005; 	J(JNZ(loc_1bf34));	// 22728 jnz     short loc_1BF34 ;~ 0B93:2005
cs=0xb93;eip=0x002007; 	T(MOV(al, *((&transformedshape_arg2array)+di)));	// 22729 mov     al, transformedshape_arg2array[di] ;~ 0B93:2007
cs=0xb93;eip=0x00200b; 	T(CBW);	// 22730 cbw ;~ 0B93:200B
cs=0xb93;eip=0x00200c; 	T(CMP(ax, 2));	// 22731 cmp     ax, 2 ;~ 0B93:200C
cs=0xb93;eip=0x00200f; 	J(JZ(loc_1bf28));	// 22732 jz      short loc_1BF28 ;~ 0B93:200F
cs=0xb93;eip=0x002011; 	T(CMP(ax, 3));	// 22733 cmp     ax, 3 ;~ 0B93:2011
cs=0xb93;eip=0x002014; 	J(JZ(loc_1bf5e));	// 22734 jz      short loc_1BF5E ;~ 0B93:2014
cs=0xb93;eip=0x002016; 	J(JMP(loc_1bf34));	// 22735 jmp     short loc_1BF34 ;~ 0B93:2016
loc_1bf28:
	// 5754 
cs=0xb93;eip=0x002018; 	T(CMP(byte_446af, 1));	// 22739 cmp     byte_446AF, 1 ;~ 0B93:2018
cs=0xb93;eip=0x00201d; 	J(JNZ(loc_1bf34));	// 22740 jnz     short loc_1BF34 ;~ 0B93:201D
cs=0xb93;eip=0x00201f; 	X(MOV(*(raddr(ss,bp+var_dc)), 1));	// 22741 mov     [bp+var_DC], 1 ;~ 0B93:201F
loc_1bf34:
	// 5755 
cs=0xb93;eip=0x002024; 	X(INC(*(dw*)(raddr(ss,bp+var_de))));	// 22745 inc     [bp+var_DE] ;~ 0B93:2024
loc_1bf38:
	// 5756 
cs=0xb93;eip=0x002028; 	T(MOV(al, transformedshape_counter));	// 22748 mov     al, transformedshape_counter ;~ 0B93:2028
cs=0xb93;eip=0x00202b; 	T(CBW);	// 22749 cbw ;~ 0B93:202B
cs=0xb93;eip=0x00202c; 	T(CMP(*(dw*)(raddr(ss,bp+var_de)), ax));	// 22750 cmp     [bp+var_DE], ax ;~ 0B93:202C
cs=0xb93;eip=0x002030; 	J(JGE(loc_1bf6c));	// 22751 jge     short loc_1BF6C ;~ 0B93:2030
cs=0xb93;eip=0x002032; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_de))));	// 22752 mov     bx, [bp+var_DE] ;~ 0B93:2032
cs=0xb93;eip=0x002036; 	T(SHL(bx, 1));	// 22753 shl     bx, 1 ;~ 0B93:2036
cs=0xb93;eip=0x002038; 	T(MOV(di, *(dw*)(((db*)&transformedshape_indices)+bx)));	// 22754 mov     di, transformedshape_indices[bx] ;~ 0B93:2038
cs=0xb93;eip=0x00203c; 	T(MOV(al, *((&transformedshape_arg2array)+di)));	// 22755 mov     al, transformedshape_arg2array[di] ;~ 0B93:203C
cs=0xb93;eip=0x002040; 	T(CBW);	// 22756 cbw ;~ 0B93:2040
cs=0xb93;eip=0x002041; 	T(CMP(ax, 2));	// 22757 cmp     ax, 2 ;~ 0B93:2041
cs=0xb93;eip=0x002044; 	J(JZ(loc_1bed8));	// 22758 jz      short loc_1BED8 ;~ 0B93:2044
cs=0xb93;eip=0x002046; 	T(CMP(ax, 3));	// 22759 cmp     ax, 3 ;~ 0B93:2046
cs=0xb93;eip=0x002049; 	J(JZ(loc_1bf02));	// 22760 jz      short loc_1BF02 ;~ 0B93:2049
cs=0xb93;eip=0x00204b; 	J(JMP(loc_1bee4));	// 22761 jmp     short loc_1BEE4 ;~ 0B93:204B
loc_1bf5e:
	// 5757 
cs=0xb93;eip=0x00204e; 	T(CMP(byte_4477f, 1));	// 22766 cmp     byte_4477F, 1 ;~ 0B93:204E
cs=0xb93;eip=0x002053; 	J(JNZ(loc_1bf34));	// 22767 jnz     short loc_1BF34 ;~ 0B93:2053
cs=0xb93;eip=0x002055; 	X(MOV(*(raddr(ss,bp+var_db)), 1));	// 22768 mov     [bp+var_DB], 1 ;~ 0B93:2055
cs=0xb93;eip=0x00205a; 	J(JMP(loc_1bf34));	// 22769 jmp     short loc_1BF34 ;~ 0B93:205A
loc_1bf6c:
	// 5758 
cs=0xb93;eip=0x00205c; 	T(INC(si));	// 22774 inc     si ;~ 0B93:205C
loc_1bf6d:
	// 5759 
cs=0xb93;eip=0x00205d; 	T(CMP(si, 0x17));	// 22777 cmp     si, 17h ;~ 0B93:205D
cs=0xb93;eip=0x002060; 	J(JL(loc_1bf75));	// 22778 jl      short loc_1BF75 ;~ 0B93:2060
cs=0xb93;eip=0x002062; 	J(JMP(loc_1b03c));	// 22779 jmp     loc_1B03C ;~ 0B93:2062
loc_1bf75:
	// 5760 
cs=0xb93;eip=0x002065; 	T(CMP(*(raddr(ss,bp+si+var_32)), 0));	// 22783 cmp     [bp+si+var_32], 0 ;~ 0B93:2065
cs=0xb93;eip=0x002069; 	J(JNZ(loc_1bf6c));	// 22784 jnz     short loc_1BF6C ;~ 0B93:2069
cs=0xb93;eip=0x00206b; 	T(MOV(al, *(raddr(ss,bp+si+var_86))));	// 22785 mov     al, [bp+si+var_86] ;~ 0B93:206B
cs=0xb93;eip=0x00206f; 	X(MOV(*(raddr(ss,bp+var_f6)), al));	// 22786 mov     [bp+var_F6], al ;~ 0B93:206F
cs=0xb93;eip=0x002073; 	T(MOV(al, *(raddr(ss,bp+si+var_d4))));	// 22787 mov     al, [bp+si+var_D4] ;~ 0B93:2073
cs=0xb93;eip=0x002077; 	X(MOV(*(raddr(ss,bp+var_102)), al));	// 22788 mov     [bp+var_102], al ;~ 0B93:2077
cs=0xb93;eip=0x00207b; 	T(MOV(al, *(raddr(ss,bp+si+var_14c))));	// 22789 mov     al, [bp+si+var_14C] ;~ 0B93:207B
cs=0xb93;eip=0x00207f; 	X(MOV(*(raddr(ss,bp+elem_map_value)), al));	// 22790 mov     [bp+elem_map_value], al ;~ 0B93:207F
cs=0xb93;eip=0x002082; 	T(MOV(al, *(raddr(ss,bp+si+var_1a))));	// 22791 mov     al, [bp+si+var_1A] ;~ 0B93:2082
cs=0xb93;eip=0x002085; 	X(MOV(*(raddr(ss,bp+terr_map_value)), al));	// 22792 mov     [bp+terr_map_value], al ;~ 0B93:2085
cs=0xb93;eip=0x002089; 	T(MOV(al, *(raddr(ss,bp+si+var_bc))));	// 22793 mov     al, [bp+si+var_BC] ;~ 0B93:2089
cs=0xb93;eip=0x00208d; 	X(MOV(*(raddr(ss,bp+var_fc)), al));	// 22794 mov     [bp+var_FC], al ;~ 0B93:208D
cs=0xb93;eip=0x002091; 	X(MOV(*(dw*)(raddr(ss,bp+var_12a)), 0));	// 22795 mov     [bp+var_12A], 0 ;~ 0B93:2091
cs=0xb93;eip=0x002097; 	T(CMP(*(raddr(ss,bp+elem_map_value)), 0));	// 22796 cmp     [bp+elem_map_value], 0 ;~ 0B93:2097
cs=0xb93;eip=0x00209b; 	J(JNZ(loc_1bfb0));	// 22797 jnz     short loc_1BFB0 ;~ 0B93:209B
cs=0xb93;eip=0x00209d; 	J(JMP(loc_1ad4a));	// 22798 jmp     loc_1AD4A ;~ 0B93:209D
loc_1bfb0:
	// 5761 
cs=0xb93;eip=0x0020a0; 	T(MOV(al, *(raddr(ss,bp+elem_map_value))));	// 22802 mov     al, [bp+elem_map_value] ;~ 0B93:20A0
cs=0xb93;eip=0x0020a3; 	T(SUB(ah, ah));	// 22803 sub     ah, ah ;~ 0B93:20A3
cs=0xb93;eip=0x0020a5; 	T(MOV(cx, ax));	// 22804 mov     cx, ax ;~ 0B93:20A5
cs=0xb93;eip=0x0020a7; 	T(SHL(ax, 1));	// 22805 shl     ax, 1 ;~ 0B93:20A7
cs=0xb93;eip=0x0020a9; 	T(ADD(ax, cx));	// 22806 add     ax, cx ;~ 0B93:20A9
cs=0xb93;eip=0x0020ab; 	T(SHL(ax, 1));	// 22807 shl     ax, 1 ;~ 0B93:20AB
cs=0xb93;eip=0x0020ad; 	T(ADD(ax, cx));	// 22808 add     ax, cx ;~ 0B93:20AD
cs=0xb93;eip=0x0020af; 	T(SHL(ax, 1));	// 22809 shl     ax, 1 ;~ 0B93:20AF
cs=0xb93;eip=0x0020b1; 	T(ADD(ax, offset(dseg,trkobjectlist)));	// 22810 add     ax, offset trkObjectList ;~ 0B93:20B1
cs=0xb93;eip=0x0020b4; 	X(MOV(*(dw*)(raddr(ss,bp+var_12e)), ax));	// 22811 mov     [bp+var_12E], ax ;~ 0B93:20B4
cs=0xb93;eip=0x0020b8; 	T(MOV(bx, ax));	// 22812 mov     bx, ax ;~ 0B93:20B8
cs=0xb93;eip=0x0020ba; 	T(MOV(al, *(raddr(ds,bx+0x0B))));	// 22813 mov     al, [bx+0Bh] ;~ 0B93:20BA
cs=0xb93;eip=0x0020bd; 	T(CBW);	// 22814 cbw ;~ 0B93:20BD
cs=0xb93;eip=0x0020be; 	T(OR(ax, ax));	// 22815 or      ax, ax ;~ 0B93:20BE
cs=0xb93;eip=0x0020c0; 	J(JNZ(loc_1bfd5));	// 22816 jnz     short loc_1BFD5 ;~ 0B93:20C0
cs=0xb93;eip=0x0020c2; 	J(JMP(loc_1ad18));	// 22817 jmp     loc_1AD18 ;~ 0B93:20C2
loc_1bfd5:
	// 5762 
cs=0xb93;eip=0x0020c5; 	T(CMP(ax, 1));	// 22821 cmp     ax, 1 ;~ 0B93:20C5
cs=0xb93;eip=0x0020c8; 	J(JNZ(loc_1bfdd));	// 22822 jnz     short loc_1BFDD ;~ 0B93:20C8
cs=0xb93;eip=0x0020ca; 	J(JMP(loc_1ad26));	// 22823 jmp     loc_1AD26 ;~ 0B93:20CA
loc_1bfdd:
	// 5763 
cs=0xb93;eip=0x0020cd; 	T(CMP(ax, 2));	// 22827 cmp     ax, 2 ;~ 0B93:20CD
cs=0xb93;eip=0x0020d0; 	J(JNZ(loc_1bfe5));	// 22828 jnz     short loc_1BFE5 ;~ 0B93:20D0
cs=0xb93;eip=0x0020d2; 	J(JMP(loc_1ad34));	// 22829 jmp     loc_1AD34 ;~ 0B93:20D2
loc_1bfe5:
	// 5764 
cs=0xb93;eip=0x0020d5; 	T(CMP(ax, 3));	// 22833 cmp     ax, 3 ;~ 0B93:20D5
cs=0xb93;eip=0x0020d8; 	J(JNZ(loc_1bfed));	// 22834 jnz     short loc_1BFED ;~ 0B93:20D8
cs=0xb93;eip=0x0020da; 	J(JMP(loc_1ad3c));	// 22835 jmp     loc_1AD3C ;~ 0B93:20DA
loc_1bfed:
	// 5765 
cs=0xb93;eip=0x0020dd; 	J(JMP(loc_1ad55));	// 22839 jmp     loc_1AD55 ;~ 0B93:20DD
loc_1bff0:
	// 5766 
cs=0xb93;eip=0x0020e0; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), offset(dseg,rect_unk15)));	// 22843 mov     [bp+var_3E], offset rect_unk15 ;~ 0B93:20E0
cs=0xb93;eip=0x0020e5; 	J(JMP(loc_1c009));	// 22844 jmp     short loc_1C009 ;~ 0B93:20E5
loc_1bff8:
	// 5767 
cs=0xb93;eip=0x0020e8; 	T(OR(si, si));	// 22849 or      si, si ;~ 0B93:20E8
cs=0xb93;eip=0x0020ea; 	J(JNZ(loc_1c002));	// 22850 jnz     short loc_1C002 ;~ 0B93:20EA
cs=0xb93;eip=0x0020ec; 	T(ax = bp+var_6a);	// 22851 lea     ax, [bp+var_6A] ;~ 0B93:20EC
cs=0xb93;eip=0x0020ef; 	J(JMP(loc_1c006));	// 22852 jmp     short loc_1C006 ;~ 0B93:20EF
loc_1c002:
	// 5768 
cs=0xb93;eip=0x0020f2; 	T(ax = bp+var_8e);	// 22857 lea     ax, [bp+var_8E] ;~ 0B93:20F2
loc_1c006:
	// 5769 
cs=0xb93;eip=0x0020f6; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), ax));	// 22860 mov     [bp+var_3E], ax ;~ 0B93:20F6
loc_1c009:
	// 5770 
cs=0xb93;eip=0x0020f9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 22864 push    [bp+arg_2] ;~ 0B93:20F9
cs=0xb93;eip=0x0020fc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3e))));	// 22865 push    [bp+var_3E] ;~ 0B93:20FC
cs=0xb93;eip=0x0020ff; 	J(CALLF(rect_intersect,0));	// 22866 call    rect_intersect ;~ 0B93:20FF
cs=0xb93;eip=0x002104; 	T(ADD(sp, 4));	// 22867 add     sp, 4 ;~ 0B93:2104
cs=0xb93;eip=0x002107; 	T(OR(al, al));	// 22868 or      al, al ;~ 0B93:2107
cs=0xb93;eip=0x002109; 	J(JZ(loc_1c01e));	// 22869 jz      short loc_1C01E ;~ 0B93:2109
cs=0xb93;eip=0x00210b; 	J(JMP(loc_1c0c1));	// 22870 jmp     loc_1C0C1 ;~ 0B93:210B
loc_1c01e:
	// 5771 
cs=0xb93;eip=0x00210e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3e))));	// 22874 mov     bx, [bp+var_3E] ;~ 0B93:210E
cs=0xb93;eip=0x002111; 	X(PUSH(*(dw*)(raddr(ds,bx+6))));	// 22875 push    word ptr [bx+6] ;~ 0B93:2111
cs=0xb93;eip=0x002114; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 22876 push    word ptr [bx+4] ;~ 0B93:2114
cs=0xb93;eip=0x002117; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 22877 push    word ptr [bx+2] ;~ 0B93:2117
cs=0xb93;eip=0x00211a; 	X(PUSH(*(dw*)(raddr(ds,bx+0))));	// 22878 push    word ptr [bx+0] ;~ 0B93:211A
cs=0xb93;eip=0x00211c; 	J(CALLF(sprite_set_1_size,0));	// 22879 call    sprite_set_1_size ;~ 0B93:211C
cs=0xb93;eip=0x002121; 	T(ADD(sp, 8));	// 22880 add     sp, 8 ;~ 0B93:2121
cs=0xb93;eip=0x002124; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3e))));	// 22881 mov     bx, [bp+var_3E] ;~ 0B93:2124
cs=0xb93;eip=0x002127; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 22882 mov     ax, [bx+2] ;~ 0B93:2127
cs=0xb93;eip=0x00212a; 	T(ADD(ax, *(dw*)(raddr(ds,bx+0))));	// 22883 add     ax, [bx+0] ;~ 0B93:212A
cs=0xb93;eip=0x00212c; 	T(SAR(ax, 1));	// 22884 sar     ax, 1 ;~ 0B93:212C
cs=0xb93;eip=0x00212e; 	X(MOV(*(dw*)(raddr(ss,bp+var_f2)), ax));	// 22885 mov     [bp+var_F2], ax ;~ 0B93:212E
cs=0xb93;eip=0x002132; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 22886 mov     ax, [bx+4] ;~ 0B93:2132
cs=0xb93;eip=0x002135; 	T(ADD(ax, *(dw*)(raddr(ds,bx+6))));	// 22887 add     ax, [bx+6] ;~ 0B93:2135
cs=0xb93;eip=0x002138; 	T(SAR(ax, 1));	// 22888 sar     ax, 1 ;~ 0B93:2138
cs=0xb93;eip=0x00213a; 	X(MOV(*(dw*)(raddr(ss,bp+var_f0)), ax));	// 22889 mov     [bp+var_F0], ax ;~ 0B93:213A
cs=0xb93;eip=0x00213e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 22890 mov     ax, [bx+2] ;~ 0B93:213E
cs=0xb93;eip=0x002141; 	T(SUB(ax, *(dw*)(raddr(ds,bx+0))));	// 22891 sub     ax, [bx+0] ;~ 0B93:2141
cs=0xb93;eip=0x002143; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), ax));	// 22892 mov     [bp+var_DE], ax ;~ 0B93:2143
cs=0xb93;eip=0x002147; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 22893 mov     ax, [bx+6] ;~ 0B93:2147
cs=0xb93;eip=0x00214a; 	T(SUB(ax, *(dw*)(raddr(ds,bx+4))));	// 22894 sub     ax, [bx+4] ;~ 0B93:214A
cs=0xb93;eip=0x00214d; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), ax));	// 22895 mov     [bp+var_36], ax ;~ 0B93:214D
cs=0xb93;eip=0x002150; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_de))));	// 22896 mov     ax, [bp+var_DE] ;~ 0B93:2150
cs=0xb93;eip=0x002154; 	T(CMP(*(dw*)(raddr(ss,bp+var_36)), ax));	// 22897 cmp     [bp+var_36], ax ;~ 0B93:2154
cs=0xb93;eip=0x002157; 	J(JLE(loc_1c070));	// 22898 jle     short loc_1C070 ;~ 0B93:2157
cs=0xb93;eip=0x002159; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_36))));	// 22899 mov     ax, [bp+var_36] ;~ 0B93:2159
cs=0xb93;eip=0x00215c; 	X(MOV(*(dw*)(raddr(ss,bp+var_de)), ax));	// 22900 mov     [bp+var_DE], ax ;~ 0B93:215C
loc_1c070:
	// 5772 
cs=0xb93;eip=0x002160; 	T(MOV(ax, word_445d4));	// 22903 mov     ax, word_445D4 ;~ 0B93:2160
cs=0xb93;eip=0x002163; 	T(SHR(ax, 1));	// 22904 shr     ax, 1 ;~ 0B93:2163
cs=0xb93;eip=0x002165; 	T(SHR(ax, 1));	// 22905 shr     ax, 1 ;~ 0B93:2165
cs=0xb93;eip=0x002167; 	T(SUB(dx, dx));	// 22906 sub     dx, dx ;~ 0B93:2167
cs=0xb93;eip=0x002169; 	T(MOV(cx, 3));	// 22907 mov     cx, 3 ;~ 0B93:2169
cs=0xb93;eip=0x00216c; 	T(DIV2(cx));	// 22908 div     cx ;~ 0B93:216C
cs=0xb93;eip=0x00216e; 	T(MOV(di, dx));	// 22909 mov     di, dx ;~ 0B93:216E
cs=0xb93;eip=0x002170; 	T(MOV(bx, di));	// 22910 mov     bx, di ;~ 0B93:2170
cs=0xb93;eip=0x002172; 	T(SHL(bx, 1));	// 22911 shl     bx, 1 ;~ 0B93:2172
cs=0xb93;eip=0x002174; 	T(MOV(ax, *(dw*)(((db*)&sdgame2_widths)+bx)));	// 22912 mov     ax, sdgame2_widths[bx] ; lookup width of explotion shape ;~ 0B93:2174
cs=0xb93;eip=0x002178; 	T(CWD);	// 22913 cwd ;~ 0B93:2178
cs=0xb93;eip=0x002179; 	X(PUSH(dx));	// 22914 push    dx ;~ 0B93:2179
cs=0xb93;eip=0x00217a; 	X(PUSH(ax));	// 22915 push    ax ;~ 0B93:217A
cs=0xb93;eip=0x00217b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_de))));	// 22916 mov     ax, [bp+var_DE] ;~ 0B93:217B
cs=0xb93;eip=0x00217f; 	T(CWD);	// 22917 cwd ;~ 0B93:217F
cs=0xb93;eip=0x002180; 	T(MOV(dh, dl));	// 22918 mov     dh, dl ;~ 0B93:2180
cs=0xb93;eip=0x002182; 	T(MOV(dl, ah));	// 22919 mov     dl, ah ;~ 0B93:2182
cs=0xb93;eip=0x002184; 	T(MOV(ah, al));	// 22920 mov     ah, al ;~ 0B93:2184
cs=0xb93;eip=0x002186; 	T(SUB(al, al));	// 22921 sub     al, al ;~ 0B93:2186
cs=0xb93;eip=0x002188; 	X(PUSH(dx));	// 22922 push    dx ;~ 0B93:2188
cs=0xb93;eip=0x002189; 	X(PUSH(ax));	// 22923 push    ax ;~ 0B93:2189
cs=0xb93;eip=0x00218a; 	J(CALLF(__afldiv,0));	// 22924 call    __aFldiv ;~ 0B93:218A
cs=0xb93;eip=0x00218f; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), ax));	// 22925 mov     [bp+var_36], ax ;~ 0B93:218F
cs=0xb93;eip=0x002192; 	X(PUSH(*(dw*)(raddr(ss,bp+var_f0))));	// 22926 push    [bp+var_F0] ;~ 0B93:2192
cs=0xb93;eip=0x002196; 	X(PUSH(*(dw*)(raddr(ss,bp+var_f2))));	// 22927 push    [bp+var_F2] ;~ 0B93:2196
cs=0xb93;eip=0x00219a; 	T(MOV(bx, di));	// 22928 mov     bx, di ;~ 0B93:219A
cs=0xb93;eip=0x00219c; 	T(SHL(bx, 1));	// 22929 shl     bx, 1 ;~ 0B93:219C
cs=0xb93;eip=0x00219e; 	T(SHL(bx, 1));	// 22930 shl     bx, 1 ;~ 0B93:219E
cs=0xb93;eip=0x0021a0; 	X(PUSH(*(dw*)((((db*)&sdgame2shapes)+2)+bx)));	// 22931 push    word ptr (sdgame2shapes+2)[bx] ;~ 0B93:21A0
cs=0xb93;eip=0x0021a4; 	X(PUSH(*(dw*)(((db*)&sdgame2shapes)+bx)));	// 22932 push    word ptr sdgame2shapes[bx] ; loops up one of the three explotion anim shapes ;~ 0B93:21A4
cs=0xb93;eip=0x0021a8; 	X(PUSH(ax));	// 22933 push    ax ;~ 0B93:21A8
cs=0xb93;eip=0x0021a9; 	J(CALLF(shape_op_explosion,0));	// 22934 call    shape_op_explosion ;~ 0B93:21A9
cs=0xb93;eip=0x0021ae; 	T(ADD(sp, 0x0A));	// 22935 add     sp, 0Ah ;~ 0B93:21AE
loc_1c0c1:
	// 5773 
cs=0xb93;eip=0x0021b1; 	T(INC(si));	// 22939 inc     si ;~ 0B93:21B1
loc_1c0c2:
	// 5774 
cs=0xb93;eip=0x0021b2; 	T(CMP(si, 2));	// 22942 cmp     si, 2 ;~ 0B93:21B2
cs=0xb93;eip=0x0021b5; 	J(JGE(loc_1c0e8));	// 22943 jge     short loc_1C0E8 ;~ 0B93:21B5
cs=0xb93;eip=0x0021b7; 	T(CMP(*(raddr(ss,bp+si+var_dc)), 0));	// 22944 cmp     [bp+si+var_DC], 0 ;~ 0B93:21B7
cs=0xb93;eip=0x0021bc; 	J(JZ(loc_1c0c1));	// 22945 jz      short loc_1C0C1 ;~ 0B93:21BC
cs=0xb93;eip=0x0021be; 	T(CMP(timertestflag_copy, 0));	// 22946 cmp     timertestflag_copy, 0 ;~ 0B93:21BE
cs=0xb93;eip=0x0021c3; 	J(JNZ(loc_1c0d8));	// 22947 jnz     short loc_1C0D8 ;~ 0B93:21C3
cs=0xb93;eip=0x0021c5; 	J(JMP(loc_1bff8));	// 22948 jmp     loc_1BFF8 ;~ 0B93:21C5
loc_1c0d8:
	// 5775 
cs=0xb93;eip=0x0021c8; 	T(OR(si, si));	// 22952 or      si, si ;~ 0B93:21C8
cs=0xb93;eip=0x0021ca; 	J(JZ(loc_1c0df));	// 22953 jz      short loc_1C0DF ;~ 0B93:21CA
cs=0xb93;eip=0x0021cc; 	J(JMP(loc_1bff0));	// 22954 jmp     loc_1BFF0 ;~ 0B93:21CC
loc_1c0df:
	// 5776 
cs=0xb93;eip=0x0021cf; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), offset(dseg,rect_unk12)));	// 22958 mov     [bp+var_3E], offset rect_unk12 ;~ 0B93:21CF
cs=0xb93;eip=0x0021d4; 	J(JMP(loc_1c009));	// 22959 jmp     loc_1C009 ;~ 0B93:21D4
loc_1c0e8:
	// 5777 
cs=0xb93;eip=0x0021d8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 22964 mov     bx, [bp+arg_2] ;~ 0B93:21D8
cs=0xb93;eip=0x0021db; 	X(PUSH(*(dw*)(raddr(ds,bx+6))));	// 22965 push    word ptr [bx+6] ;~ 0B93:21DB
cs=0xb93;eip=0x0021de; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 22966 push    word ptr [bx+4] ;~ 0B93:21DE
cs=0xb93;eip=0x0021e1; 	T(MOV(ax, 0x140));	// 22967 mov     ax, 140h ;~ 0B93:21E1
cs=0xb93;eip=0x0021e4; 	X(PUSH(ax));	// 22968 push    ax ;~ 0B93:21E4
cs=0xb93;eip=0x0021e5; 	T(SUB(ax, ax));	// 22969 sub     ax, ax ;~ 0B93:21E5
cs=0xb93;eip=0x0021e7; 	X(PUSH(ax));	// 22970 push    ax ;~ 0B93:21E7
cs=0xb93;eip=0x0021e8; 	J(CALLF(sprite_set_1_size,0));	// 22971 call    sprite_set_1_size ;~ 0B93:21E8
cs=0xb93;eip=0x0021ed; 	T(ADD(sp, 8));	// 22972 add     sp, 8 ;~ 0B93:21ED
cs=0xb93;eip=0x0021f0; 	T(CMP(cameramode, 0));	// 22973 cmp     cameramode, 0 ;~ 0B93:21F0
cs=0xb93;eip=0x0021f5; 	J(JZ(loc_1c10a));	// 22974 jz      short loc_1C10A ;~ 0B93:21F5
cs=0xb93;eip=0x0021f7; 	J(JMP(loc_1c1c6));	// 22975 jmp     loc_1C1C6 ;~ 0B93:21F7
loc_1c10a:
	// 5778 
cs=0xb93;eip=0x0021fa; 	T(CMP(followopponentflag, 0));	// 22979 cmp     followOpponentFlag, 0 ;~ 0B93:21FA
cs=0xb93;eip=0x0021ff; 	J(JZ(loc_1c11e));	// 22980 jz      short loc_1C11E ;~ 0B93:21FF
cs=0xb93;eip=0x002201; 	X(MOV(*(dw*)(raddr(ss,bp+var_104)), offset(dseg,word_446b6)));	// 22981 mov     [bp+var_104], offset word_446B6 ;~ 0B93:2201
cs=0xb93;eip=0x002207; 	T(MOV(si, word_445dc));	// 22982 mov     si, word_445DC ;~ 0B93:2207
cs=0xb93;eip=0x00220b; 	J(JMP(loc_1c128));	// 22983 jmp     short loc_1C128 ;~ 0B93:220B
loc_1c11e:
	// 5779 
cs=0xb93;eip=0x00220e; 	X(MOV(*(dw*)(raddr(ss,bp+var_104)), offset(dseg,word_445e6)));	// 22988 mov     [bp+var_104], offset word_445E6 ;~ 0B93:220E
cs=0xb93;eip=0x002214; 	T(MOV(si, word_445da));	// 22989 mov     si, word_445DA ;~ 0B93:2214
loc_1c128:
	// 5780 
cs=0xb93;eip=0x002218; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_104))));	// 22992 mov     bx, [bp+var_104] ;~ 0B93:2218
cs=0xb93;eip=0x00221c; 	T(CMP(*(raddr(ds,bx+0x0C9)), 1));	// 22993 cmp     byte ptr [bx+0C9h], 1 ;~ 0B93:221C
cs=0xb93;eip=0x002221; 	J(JNZ(loc_1c17c));	// 22994 jnz     short loc_1C17C ;~ 0B93:2221
cs=0xb93;eip=0x002223; 	T(CMP(timertestflag_copy, 0));	// 22995 cmp     timertestflag_copy, 0 ;~ 0B93:2223
cs=0xb93;eip=0x002228; 	J(JZ(loc_1c162));	// 22996 jz      short loc_1C162 ;~ 0B93:2228
cs=0xb93;eip=0x00222a; 	T(MOV(ax, offset(dseg,rect_unk)));	// 22997 mov     ax, offset rect_unk ;~ 0B93:222A
cs=0xb93;eip=0x00222d; 	X(PUSH(ax));	// 22998 push    ax ;~ 0B93:222D
cs=0xb93;eip=0x00222e; 	X(PUSH(ax));	// 22999 push    ax ;~ 0B93:222E
cs=0xb93;eip=0x00222f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 23000 mov     bx, [bp+arg_2] ;~ 0B93:222F
cs=0xb93;eip=0x002232; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 23001 mov     ax, [bx+6] ;~ 0B93:2232
cs=0xb93;eip=0x002235; 	T(SUB(ax, *(dw*)(raddr(ds,bx+4))));	// 23002 sub     ax, [bx+4] ;~ 0B93:2235
cs=0xb93;eip=0x002238; 	X(PUSH(ax));	// 23003 push    ax ;~ 0B93:2238
cs=0xb93;eip=0x002239; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 23004 push    word ptr [bx+4] ;~ 0B93:2239
cs=0xb93;eip=0x00223c; 	T(MOV(ax, word_445d4));	// 23005 mov     ax, word_445D4 ;~ 0B93:223C
cs=0xb93;eip=0x00223f; 	T(SUB(ax, si));	// 23006 sub     ax, si ;~ 0B93:223F
cs=0xb93;eip=0x002241; 	X(PUSH(ax));	// 23007 push    ax ;~ 0B93:2241
cs=0xb93;eip=0x002242; 	X(PUSH(cs));	// 23008 push    cs ;~ 0B93:2242
cs=0xb93;eip=0x002243; 	J(CALL(init_crak,0));	// 23009 call    near ptr init_crak ;~ 0B93:2243
loc_1c156:
	// 5781 
cs=0xb93;eip=0x002246; 	T(ADD(sp, 6));	// 23012 add     sp, 6 ;~ 0B93:2246
cs=0xb93;eip=0x002249; 	X(PUSH(ax));	// 23013 push    ax ;~ 0B93:2249
cs=0xb93;eip=0x00224a; 	J(CALLF(rect_union,0));	// 23014 call    rect_union ;~ 0B93:224A
cs=0xb93;eip=0x00224f; 	J(JMP(loc_1c1c3));	// 23015 jmp     short loc_1C1C3 ;~ 0B93:224F
loc_1c162:
	// 5782 
cs=0xb93;eip=0x002252; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 23020 mov     bx, [bp+arg_2] ;~ 0B93:2252
cs=0xb93;eip=0x002255; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 23021 mov     ax, [bx+6] ;~ 0B93:2255
cs=0xb93;eip=0x002258; 	T(SUB(ax, *(dw*)(raddr(ds,bx+4))));	// 23022 sub     ax, [bx+4] ;~ 0B93:2258
cs=0xb93;eip=0x00225b; 	X(PUSH(ax));	// 23023 push    ax ;~ 0B93:225B
cs=0xb93;eip=0x00225c; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 23024 push    word ptr [bx+4] ;~ 0B93:225C
cs=0xb93;eip=0x00225f; 	T(MOV(ax, word_445d4));	// 23025 mov     ax, word_445D4 ;~ 0B93:225F
cs=0xb93;eip=0x002262; 	T(SUB(ax, si));	// 23026 sub     ax, si ;~ 0B93:2262
cs=0xb93;eip=0x002264; 	X(PUSH(ax));	// 23027 push    ax ;~ 0B93:2264
cs=0xb93;eip=0x002265; 	X(PUSH(cs));	// 23028 push    cs ;~ 0B93:2265
cs=0xb93;eip=0x002266; 	J(CALL(init_crak,0));	// 23029 call    near ptr init_crak ;~ 0B93:2266
cs=0xb93;eip=0x002269; 	J(JMP(loc_1c1c3));	// 23030 jmp     short loc_1C1C3 ;~ 0B93:2269
loc_1c17c:
	// 5783 
cs=0xb93;eip=0x00226c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_104))));	// 23035 mov     bx, [bp+var_104] ;~ 0B93:226C
cs=0xb93;eip=0x002270; 	T(CMP(*(raddr(ds,bx+0x0C9)), 2));	// 23036 cmp     byte ptr [bx+0C9h], 2 ;~ 0B93:2270
cs=0xb93;eip=0x002275; 	J(JNZ(loc_1c1c6));	// 23037 jnz     short loc_1C1C6 ;~ 0B93:2275
cs=0xb93;eip=0x002277; 	T(CMP(timertestflag_copy, 0));	// 23038 cmp     timertestflag_copy, 0 ;~ 0B93:2277
cs=0xb93;eip=0x00227c; 	J(JZ(loc_1c1ac));	// 23039 jz      short loc_1C1AC ;~ 0B93:227C
cs=0xb93;eip=0x00227e; 	T(MOV(ax, offset(dseg,rect_unk)));	// 23040 mov     ax, offset rect_unk ;~ 0B93:227E
cs=0xb93;eip=0x002281; 	X(PUSH(ax));	// 23041 push    ax ;~ 0B93:2281
cs=0xb93;eip=0x002282; 	X(PUSH(ax));	// 23042 push    ax ;~ 0B93:2282
cs=0xb93;eip=0x002283; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 23043 mov     bx, [bp+arg_2] ;~ 0B93:2283
cs=0xb93;eip=0x002286; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 23044 mov     ax, [bx+6] ;~ 0B93:2286
cs=0xb93;eip=0x002289; 	T(SUB(ax, *(dw*)(raddr(ds,bx+4))));	// 23045 sub     ax, [bx+4] ;~ 0B93:2289
cs=0xb93;eip=0x00228c; 	X(PUSH(ax));	// 23046 push    ax ;~ 0B93:228C
cs=0xb93;eip=0x00228d; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 23047 push    word ptr [bx+4] ;~ 0B93:228D
cs=0xb93;eip=0x002290; 	T(MOV(ax, word_445d4));	// 23048 mov     ax, word_445D4 ;~ 0B93:2290
cs=0xb93;eip=0x002293; 	T(SUB(ax, si));	// 23049 sub     ax, si ;~ 0B93:2293
cs=0xb93;eip=0x002295; 	X(PUSH(ax));	// 23050 push    ax ;~ 0B93:2295
cs=0xb93;eip=0x002296; 	X(PUSH(cs));	// 23051 push    cs ;~ 0B93:2296
cs=0xb93;eip=0x002297; 	J(CALL(do_sinking,0));	// 23052 call    near ptr do_sinking ;~ 0B93:2297
cs=0xb93;eip=0x00229a; 	J(JMP(loc_1c156));	// 23053 jmp     short loc_1C156 ;~ 0B93:229A
loc_1c1ac:
	// 5784 
cs=0xb93;eip=0x00229c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 23057 mov     bx, [bp+arg_2] ;~ 0B93:229C
cs=0xb93;eip=0x00229f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 23058 mov     ax, [bx+6] ;~ 0B93:229F
cs=0xb93;eip=0x0022a2; 	T(SUB(ax, *(dw*)(raddr(ds,bx+4))));	// 23059 sub     ax, [bx+4] ;~ 0B93:22A2
cs=0xb93;eip=0x0022a5; 	X(PUSH(ax));	// 23060 push    ax ;~ 0B93:22A5
cs=0xb93;eip=0x0022a6; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 23061 push    word ptr [bx+4] ;~ 0B93:22A6
cs=0xb93;eip=0x0022a9; 	T(MOV(ax, word_445d4));	// 23062 mov     ax, word_445D4 ;~ 0B93:22A9
cs=0xb93;eip=0x0022ac; 	T(SUB(ax, si));	// 23063 sub     ax, si ;~ 0B93:22AC
cs=0xb93;eip=0x0022ae; 	X(PUSH(ax));	// 23064 push    ax ;~ 0B93:22AE
cs=0xb93;eip=0x0022af; 	X(PUSH(cs));	// 23065 push    cs ;~ 0B93:22AF
cs=0xb93;eip=0x0022b0; 	J(CALL(do_sinking,0));	// 23066 call    near ptr do_sinking ;~ 0B93:22B0
loc_1c1c3:
	// 5785 
cs=0xb93;eip=0x0022b3; 	T(ADD(sp, 6));	// 23070 add     sp, 6 ;~ 0B93:22B3
loc_1c1c6:
	// 5786 
cs=0xb93;eip=0x0022b6; 	T(CMP(game_replay_mode, 0));	// 23074 cmp     game_replay_mode, 0 ;~ 0B93:22B6
cs=0xb93;eip=0x0022bb; 	J(JZ(loc_1c1d0));	// 23075 jz      short loc_1C1D0 ;~ 0B93:22BB
cs=0xb93;eip=0x0022bd; 	J(JMP(loc_1c25b));	// 23076 jmp     loc_1C25B ;~ 0B93:22BD
loc_1c1d0:
	// 5787 
cs=0xb93;eip=0x0022c0; 	T(CMP(byte_44889, 0));	// 23080 cmp     byte_44889, 0 ;~ 0B93:22C0
cs=0xb93;eip=0x0022c5; 	J(JNZ(loc_1c1da));	// 23081 jnz     short loc_1C1DA ;~ 0B93:22C5
cs=0xb93;eip=0x0022c7; 	J(JMP(loc_1c25b));	// 23082 jmp     loc_1C25B ;~ 0B93:22C7
loc_1c1da:
	// 5788 
cs=0xb93;eip=0x0022ca; 	T(SUB(ax, ax));	// 23086 sub     ax, ax ;~ 0B93:22CA
cs=0xb93;eip=0x0022cc; 	X(PUSH(ax));	// 23087 push    ax              ; int ;~ 0B93:22CC
cs=0xb93;eip=0x0022cd; 	T(MOV(ax, elapsed_time1));	// 23088 mov     ax, elapsed_time1 ;~ 0B93:22CD
cs=0xb93;eip=0x0022d0; 	T(ADD(ax, elapsed_time2));	// 23089 add     ax, elapsed_time2 ;~ 0B93:22D0
cs=0xb93;eip=0x0022d4; 	X(PUSH(ax));	// 23090 push    ax ;~ 0B93:22D4
cs=0xb93;eip=0x0022d5; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 23091 mov     ax, offset resID_byte1 ;~ 0B93:22D5
cs=0xb93;eip=0x0022d8; 	X(PUSH(ax));	// 23092 push    ax              ; char * ;~ 0B93:22D8
cs=0xb93;eip=0x0022d9; 	J(CALLF(format_frame_as_string,0));	// 23093 call    format_frame_as_string ; prints elapsed time (unless in pause/replay, or some unknown state) ;~ 0B93:22D9
cs=0xb93;eip=0x0022de; 	T(ADD(sp, 6));	// 23094 add     sp, 6 ;~ 0B93:22DE
cs=0xb93;eip=0x0022e1; 	X(PUSH(word_459f6));	// 23095 push    word_459F6 ;~ 0B93:22E1
cs=0xb93;eip=0x0022e5; 	X(PUSH(fontledresptr));	// 23096 push    fontledresptr ;~ 0B93:22E5
cs=0xb93;eip=0x0022e9; 	J(CALLF(font_set_fontdef2,0));	// 23097 call    font_set_fontdef2 ;~ 0B93:22E9
cs=0xb93;eip=0x0022ee; 	T(ADD(sp, 4));	// 23098 add     sp, 4 ;~ 0B93:22EE
cs=0xb93;eip=0x0022f1; 	T(CMP(timertestflag_copy, 0));	// 23099 cmp     timertestflag_copy, 0 ;~ 0B93:22F1
cs=0xb93;eip=0x0022f6; 	J(JZ(loc_1c238));	// 23100 jz      short loc_1C238 ;~ 0B93:22F6
cs=0xb93;eip=0x0022f8; 	T(MOV(ax, offset(dseg,rect_unk11)));	// 23101 mov     ax, offset rect_unk11 ;~ 0B93:22F8
cs=0xb93;eip=0x0022fb; 	X(PUSH(ax));	// 23102 push    ax ;~ 0B93:22FB
cs=0xb93;eip=0x0022fc; 	X(PUSH(ax));	// 23103 push    ax ;~ 0B93:22FC
cs=0xb93;eip=0x0022fd; 	T(SUB(ax, ax));	// 23104 sub     ax, ax ;~ 0B93:22FD
cs=0xb93;eip=0x0022ff; 	X(PUSH(ax));	// 23105 push    ax ;~ 0B93:22FF
cs=0xb93;eip=0x002300; 	X(PUSH(dialog_fnt_colour));	// 23106 push    dialog_fnt_colour ;~ 0B93:2300
cs=0xb93;eip=0x002304; 	T(MOV(ax, roofbmpheight));	// 23107 mov     ax, roofbmpheight ;~ 0B93:2304
cs=0xb93;eip=0x002307; 	T(ADD(ax, 2));	// 23108 add     ax, 2 ;~ 0B93:2307
cs=0xb93;eip=0x00230a; 	X(PUSH(ax));	// 23109 push    ax ;~ 0B93:230A
cs=0xb93;eip=0x00230b; 	T(MOV(ax, 0x8C));	// 23110 mov     ax, 8Ch ; 'Œ' ;~ 0B93:230B
cs=0xb93;eip=0x00230e; 	X(PUSH(ax));	// 23111 push    ax ;~ 0B93:230E
cs=0xb93;eip=0x00230f; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 23112 mov     ax, offset resID_byte1 ;~ 0B93:230F
cs=0xb93;eip=0x002312; 	X(PUSH(ax));	// 23113 push    ax ;~ 0B93:2312
cs=0xb93;eip=0x002313; 	J(CALLF(intro_draw_text,0));	// 23114 call    intro_draw_text ;~ 0B93:2313
cs=0xb93;eip=0x002318; 	T(ADD(sp, 0x0A));	// 23115 add     sp, 0Ah ;~ 0B93:2318
cs=0xb93;eip=0x00231b; 	X(PUSH(ax));	// 23116 push    ax ;~ 0B93:231B
cs=0xb93;eip=0x00231c; 	J(CALLF(rect_union,0));	// 23117 call    rect_union ;~ 0B93:231C
cs=0xb93;eip=0x002321; 	T(ADD(sp, 6));	// 23118 add     sp, 6 ;~ 0B93:2321
cs=0xb93;eip=0x002324; 	J(JMP(loc_1c256));	// 23119 jmp     short loc_1C256 ;~ 0B93:2324
loc_1c238:
	// 5789 
cs=0xb93;eip=0x002328; 	T(SUB(ax, ax));	// 23125 sub     ax, ax ;~ 0B93:2328
cs=0xb93;eip=0x00232a; 	X(PUSH(ax));	// 23126 push    ax ;~ 0B93:232A
cs=0xb93;eip=0x00232b; 	X(PUSH(dialog_fnt_colour));	// 23127 push    dialog_fnt_colour ;~ 0B93:232B
cs=0xb93;eip=0x00232f; 	T(MOV(ax, roofbmpheight));	// 23128 mov     ax, roofbmpheight ;~ 0B93:232F
cs=0xb93;eip=0x002332; 	T(ADD(ax, 2));	// 23129 add     ax, 2 ;~ 0B93:2332
cs=0xb93;eip=0x002335; 	X(PUSH(ax));	// 23130 push    ax ;~ 0B93:2335
cs=0xb93;eip=0x002336; 	T(MOV(ax, 0x8C));	// 23131 mov     ax, 8Ch ; 'Œ' ;~ 0B93:2336
cs=0xb93;eip=0x002339; 	X(PUSH(ax));	// 23132 push    ax ;~ 0B93:2339
cs=0xb93;eip=0x00233a; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 23133 mov     ax, offset resID_byte1 ;~ 0B93:233A
cs=0xb93;eip=0x00233d; 	X(PUSH(ax));	// 23134 push    ax ;~ 0B93:233D
cs=0xb93;eip=0x00233e; 	J(CALLF(intro_draw_text,0));	// 23135 call    intro_draw_text ;~ 0B93:233E
cs=0xb93;eip=0x002343; 	T(ADD(sp, 0x0A));	// 23136 add     sp, 0Ah ;~ 0B93:2343
loc_1c256:
	// 5790 
cs=0xb93;eip=0x002346; 	J(CALLF(font_set_fontdef,0));	// 23139 call    font_set_fontdef ;~ 0B93:2346
loc_1c25b:
	// 5791 
cs=0xb93;eip=0x00234b; 	T(CMP(timertestflag_copy, 0));	// 23143 cmp     timertestflag_copy, 0 ;~ 0B93:234B
cs=0xb93;eip=0x002350; 	J(JNZ(loc_1c265));	// 23144 jnz     short loc_1C265 ;~ 0B93:2350
cs=0xb93;eip=0x002352; 	J(JMP(loc_1c2f8));	// 23145 jmp     loc_1C2F8 ;~ 0B93:2352
loc_1c265:
	// 5792 
cs=0xb93;eip=0x002355; 	T(MOV(ax, offset(dseg,rect_unk)));	// 23149 mov     ax, offset rect_unk ;~ 0B93:2355
cs=0xb93;eip=0x002358; 	X(PUSH(ax));	// 23150 push    ax ;~ 0B93:2358
cs=0xb93;eip=0x002359; 	X(PUSH(ax));	// 23151 push    ax ;~ 0B93:2359
cs=0xb93;eip=0x00235a; 	X(PUSH(cs));	// 23152 push    cs ;~ 0B93:235A
cs=0xb93;eip=0x00235b; 	J(CALL(draw_ingame_text,0));	// 23153 call    near ptr draw_ingame_text ;~ 0B93:235B
cs=0xb93;eip=0x00235e; 	X(PUSH(ax));	// 23154 push    ax ;~ 0B93:235E
cs=0xb93;eip=0x00235f; 	J(CALLF(rect_union,0));	// 23155 call    rect_union ;~ 0B93:235F
cs=0xb93;eip=0x002364; 	T(ADD(sp, 6));	// 23156 add     sp, 6 ;~ 0B93:2364
cs=0xb93;eip=0x002367; 	T(CMP(*(dw*)(raddr(ss,bp+var_132)), 0));	// 23157 cmp     [bp+var_132], 0 ;~ 0B93:2367
cs=0xb93;eip=0x00236c; 	J(JZ(loc_1c2ae));	// 23158 jz      short loc_1C2AE ;~ 0B93:236C
cs=0xb93;eip=0x00236e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 23159 mov     ax, [bp+arg_2] ;~ 0B93:236E
cs=0xb93;eip=0x002371; 	X(PUSH(si));	// 23160 push    si ;~ 0B93:2371
cs=0xb93;eip=0x002372; 	X(PUSH(di));	// 23161 push    di ;~ 0B93:2372
cs=0xb93;eip=0x002373; 	T(MOV(di, offset(dseg,rect_unk)));	// 23162 mov     di, offset rect_unk ;~ 0B93:2373
cs=0xb93;eip=0x002376; 	T(MOV(si, ax));	// 23163 mov     si, ax ;~ 0B93:2376
cs=0xb93;eip=0x002378; 	X(PUSH(ds));	// 23164 push    ds ;~ 0B93:2378
cs=0xb93;eip=0x002379; 	X(POP(es));	// 23165 pop     es ;~ 0B93:2379
cs=0xb93;eip=0x00237a; 	X(MOVSW);	// 23167 movsw ;~ 0B93:237A
cs=0xb93;eip=0x00237b; 	X(MOVSW);	// 23168 movsw ;~ 0B93:237B
cs=0xb93;eip=0x00237c; 	X(MOVSW);	// 23169 movsw ;~ 0B93:237C
cs=0xb93;eip=0x00237d; 	X(MOVSW);	// 23170 movsw ;~ 0B93:237D
cs=0xb93;eip=0x00237e; 	X(POP(di));	// 23171 pop     di ;~ 0B93:237E
cs=0xb93;eip=0x00237f; 	X(POP(si));	// 23172 pop     si ;~ 0B93:237F
cs=0xb93;eip=0x002380; 	T(MOV(si, 1));	// 23173 mov     si, 1 ;~ 0B93:2380
loc_1c293:
	// 5793 
cs=0xb93;eip=0x002383; 	T(MOV(bx, si));	// 23176 mov     bx, si ;~ 0B93:2383
cs=0xb93;eip=0x002385; 	T(MOV(cl, 3));	// 23177 mov     cl, 3 ;~ 0B93:2385
cs=0xb93;eip=0x002387; 	T(SHL(bx, cl));	// 23178 shl     bx, cl ;~ 0B93:2387
cs=0xb93;eip=0x002389; 	X(PUSH(si));	// 23179 push    si ;~ 0B93:2389
cs=0xb93;eip=0x00238a; 	X(PUSH(di));	// 23180 push    di ;~ 0B93:238A
cs=0xb93;eip=0x00238b; 	T(di = offset(dseg,rect_unk)+bx);	// 23181 lea     di, rect_unk[bx] ;~ 0B93:238B
cs=0xb93;eip=0x00238f; 	T(MOV(si, offset(dseg,cliprect_unk)));	// 23182 mov     si, offset cliprect_unk ;~ 0B93:238F
cs=0xb93;eip=0x002392; 	X(MOVSW);	// 23183 movsw ;~ 0B93:2392
cs=0xb93;eip=0x002393; 	X(MOVSW);	// 23184 movsw ;~ 0B93:2393
cs=0xb93;eip=0x002394; 	X(MOVSW);	// 23185 movsw ;~ 0B93:2394
cs=0xb93;eip=0x002395; 	X(MOVSW);	// 23186 movsw ;~ 0B93:2395
cs=0xb93;eip=0x002396; 	X(POP(di));	// 23187 pop     di ;~ 0B93:2396
cs=0xb93;eip=0x002397; 	X(POP(si));	// 23188 pop     si ;~ 0B93:2397
cs=0xb93;eip=0x002398; 	T(INC(si));	// 23189 inc     si ;~ 0B93:2398
cs=0xb93;eip=0x002399; 	T(CMP(si, 0x0F));	// 23190 cmp     si, 0Fh ;~ 0B93:2399
cs=0xb93;eip=0x00239c; 	J(JL(loc_1c293));	// 23191 jl      short loc_1C293 ;~ 0B93:239C
loc_1c2ae:
	// 5794 
cs=0xb93;eip=0x00239e; 	T(SUB(si, si));	// 23194 sub     si, si ;~ 0B93:239E
loc_1c2b0:
	// 5795 
cs=0xb93;eip=0x0023a0; 	T(MOV(ax, si));	// 23197 mov     ax, si ;~ 0B93:23A0
cs=0xb93;eip=0x0023a2; 	T(MOV(cl, 3));	// 23198 mov     cl, 3 ;~ 0B93:23A2
cs=0xb93;eip=0x0023a4; 	T(SHL(ax, cl));	// 23199 shl     ax, cl ;~ 0B93:23A4
cs=0xb93;eip=0x0023a6; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_154))), ax));	// 23200 mov     word ptr [bp+var_154], ax ;~ 0B93:23A6
cs=0xb93;eip=0x0023aa; 	T(MOV(bx, ax));	// 23201 mov     bx, ax ;~ 0B93:23AA
cs=0xb93;eip=0x0023ac; 	T(ax = offset(dseg,rect_unk)+bx);	// 23202 lea     ax, rect_unk[bx] ;~ 0B93:23AC
cs=0xb93;eip=0x0023b0; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_154)))));	// 23203 mov     bx, word ptr [bp+var_154] ;~ 0B93:23B0
cs=0xb93;eip=0x0023b4; 	T(ADD(bx, rectptr_unk));	// 23204 add     bx, rectptr_unk ;~ 0B93:23B4
cs=0xb93;eip=0x0023b8; 	X(PUSH(si));	// 23205 push    si ;~ 0B93:23B8
cs=0xb93;eip=0x0023b9; 	X(PUSH(di));	// 23206 push    di ;~ 0B93:23B9
cs=0xb93;eip=0x0023ba; 	T(MOV(di, bx));	// 23207 mov     di, bx ;~ 0B93:23BA
cs=0xb93;eip=0x0023bc; 	T(MOV(si, ax));	// 23208 mov     si, ax ;~ 0B93:23BC
cs=0xb93;eip=0x0023be; 	X(PUSH(ds));	// 23209 push    ds ;~ 0B93:23BE
cs=0xb93;eip=0x0023bf; 	X(POP(es));	// 23210 pop     es ;~ 0B93:23BF
cs=0xb93;eip=0x0023c0; 	X(MOVSW);	// 23211 movsw ;~ 0B93:23C0
cs=0xb93;eip=0x0023c1; 	X(MOVSW);	// 23212 movsw ;~ 0B93:23C1
cs=0xb93;eip=0x0023c2; 	X(MOVSW);	// 23213 movsw ;~ 0B93:23C2
cs=0xb93;eip=0x0023c3; 	X(MOVSW);	// 23214 movsw ;~ 0B93:23C3
cs=0xb93;eip=0x0023c4; 	X(POP(di));	// 23215 pop     di ;~ 0B93:23C4
cs=0xb93;eip=0x0023c5; 	X(POP(si));	// 23216 pop     si ;~ 0B93:23C5
cs=0xb93;eip=0x0023c6; 	T(INC(si));	// 23217 inc     si ;~ 0B93:23C6
cs=0xb93;eip=0x0023c7; 	T(CMP(si, 0x0F));	// 23218 cmp     si, 0Fh ;~ 0B93:23C7
cs=0xb93;eip=0x0023ca; 	J(JL(loc_1c2b0));	// 23219 jl      short loc_1C2B0 ;~ 0B93:23CA
cs=0xb93;eip=0x0023cc; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 23220 mov     al, [bp+arg_0] ;~ 0B93:23CC
cs=0xb93;eip=0x0023cf; 	T(CBW);	// 23221 cbw ;~ 0B93:23CF
cs=0xb93;eip=0x0023d0; 	T(MOV(bx, ax));	// 23222 mov     bx, ax ;~ 0B93:23D0
cs=0xb93;eip=0x0023d2; 	T(SHL(bx, 1));	// 23223 shl     bx, 1 ;~ 0B93:23D2
cs=0xb93;eip=0x0023d4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_5c))));	// 23224 mov     ax, [bp+var_5C] ;~ 0B93:23D4
cs=0xb93;eip=0x0023d7; 	X(MOV(*(dw*)(((db*)&word_449fc)+bx), ax));	// 23225 mov     word_449FC[bx], ax ;~ 0B93:23D7
cs=0xb93;eip=0x0023db; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_5c))));	// 23226 mov     ax, [bp+var_5C] ;~ 0B93:23DB
cs=0xb93;eip=0x0023de; 	X(MOV(word_463d6, ax));	// 23227 mov     word_463D6, ax ;~ 0B93:23DE
cs=0xb93;eip=0x0023e1; 	X(POP(si));	// 23228 pop     si ;~ 0B93:23E1
cs=0xb93;eip=0x0023e2; 	X(POP(di));	// 23229 pop     di ;~ 0B93:23E2
cs=0xb93;eip=0x0023e3; 	T(MOV(sp, bp));	// 23230 mov     sp, bp ;~ 0B93:23E3
cs=0xb93;eip=0x0023e5; 	X(POP(bp));	// 23231 pop     bp ;~ 0B93:23E5
cs=0xb93;eip=0x0023e6; 	J(RETF(0));	// 23232 retf ;~ 0B93:23E6
loc_1c2f8:
	// 5796 
cs=0xb93;eip=0x0023e8; 	X(PUSH(cs));	// 23237 push    cs ;~ 0B93:23E8
cs=0xb93;eip=0x0023e9; 	J(CALL(draw_ingame_text,0));	// 23238 call    near ptr draw_ingame_text ;~ 0B93:23E9
cs=0xb93;eip=0x0023ec; 	X(POP(si));	// 23239 pop     si ;~ 0B93:23EC
cs=0xb93;eip=0x0023ed; 	X(POP(di));	// 23240 pop     di ;~ 0B93:23ED
cs=0xb93;eip=0x0023ee; 	T(MOV(sp, bp));	// 23241 mov     sp, bp ;~ 0B93:23EE
cs=0xb93;eip=0x0023f0; 	X(POP(bp));	// 23242 pop     bp ;~ 0B93:23F0
cs=0xb93;eip=0x0023f1; 	J(RETF(0));	// 23243 retf ;~ 0B93:23F1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1a122: 	goto loc_1a122;
        case m2c::kloc_1a12e: 	goto loc_1a12e;
        case m2c::kloc_1a144: 	goto loc_1a144;
        case m2c::kloc_1a145: 	goto loc_1a145;
        case m2c::kloc_1a162: 	goto loc_1a162;
        case m2c::kloc_1a167: 	goto loc_1a167;
        case m2c::kloc_1a177: 	goto loc_1a177;
        case m2c::kloc_1a18c: 	goto loc_1a18c;
        case m2c::kloc_1a1a1: 	goto loc_1a1a1;
        case m2c::kloc_1a1be: 	goto loc_1a1be;
        case m2c::kloc_1a1c7: 	goto loc_1a1c7;
        case m2c::kloc_1a1dc: 	goto loc_1a1dc;
        case m2c::kloc_1a1f1: 	goto loc_1a1f1;
        case m2c::kloc_1a20c: 	goto loc_1a20c;
        case m2c::kloc_1a226: 	goto loc_1a226;
        case m2c::kloc_1a22e: 	goto loc_1a22e;
        case m2c::kloc_1a23b: 	goto loc_1a23b;
        case m2c::kloc_1a23e: 	goto loc_1a23e;
        case m2c::kloc_1a2cc: 	goto loc_1a2cc;
        case m2c::kloc_1a300: 	goto loc_1a300;
        case m2c::kloc_1a303: 	goto loc_1a303;
        case m2c::kloc_1a30c: 	goto loc_1a30c;
        case m2c::kloc_1a327: 	goto loc_1a327;
        case m2c::kloc_1a393: 	goto loc_1a393;
        case m2c::kloc_1a3e9: 	goto loc_1a3e9;
        case m2c::kloc_1a3f3: 	goto loc_1a3f3;
        case m2c::kloc_1a3fe: 	goto loc_1a3fe;
        case m2c::kloc_1a40a: 	goto loc_1a40a;
        case m2c::kloc_1a434: 	goto loc_1a434;
        case m2c::kloc_1a48e: 	goto loc_1a48e;
        case m2c::kloc_1a4d0: 	goto loc_1a4d0;
        case m2c::kloc_1a4d6: 	goto loc_1a4d6;
        case m2c::kloc_1a4e4: 	goto loc_1a4e4;
        case m2c::kloc_1a4e8: 	goto loc_1a4e8;
        case m2c::kloc_1a580: 	goto loc_1a580;
        case m2c::kloc_1a585: 	goto loc_1a585;
        case m2c::kloc_1a58f: 	goto loc_1a58f;
        case m2c::kloc_1a5ba: 	goto loc_1a5ba;
        case m2c::kloc_1a5dd: 	goto loc_1a5dd;
        case m2c::kloc_1a661: 	goto loc_1a661;
        case m2c::kloc_1a66d: 	goto loc_1a66d;
        case m2c::kloc_1a69d: 	goto loc_1a69d;
        case m2c::kloc_1a69f: 	goto loc_1a69f;
        case m2c::kloc_1a6bc: 	goto loc_1a6bc;
        case m2c::kloc_1a6fa: 	goto loc_1a6fa;
        case m2c::kloc_1a6fe: 	goto loc_1a6fe;
        case m2c::kloc_1a6ff: 	goto loc_1a6ff;
        case m2c::kloc_1a706: 	goto loc_1a706;
        case m2c::kloc_1a724: 	goto loc_1a724;
        case m2c::kloc_1a774: 	goto loc_1a774;
        case m2c::kloc_1a797: 	goto loc_1a797;
        case m2c::kloc_1a7ae: 	goto loc_1a7ae;
        case m2c::kloc_1a7b0: 	goto loc_1a7b0;
        case m2c::kloc_1a7b4: 	goto loc_1a7b4;
        case m2c::kloc_1a7b8: 	goto loc_1a7b8;
        case m2c::kloc_1a7ff: 	goto loc_1a7ff;
        case m2c::kloc_1a853: 	goto loc_1a853;
        case m2c::kloc_1a857: 	goto loc_1a857;
        case m2c::kloc_1a877: 	goto loc_1a877;
        case m2c::kloc_1a898: 	goto loc_1a898;
        case m2c::kloc_1a8c6: 	goto loc_1a8c6;
        case m2c::kloc_1a8ca: 	goto loc_1a8ca;
        case m2c::kloc_1a8d2: 	goto loc_1a8d2;
        case m2c::kloc_1a8d6: 	goto loc_1a8d6;
        case m2c::kloc_1a8d7: 	goto loc_1a8d7;
        case m2c::kloc_1a8de: 	goto loc_1a8de;
        case m2c::kloc_1a90e: 	goto loc_1a90e;
        case m2c::kloc_1a914: 	goto loc_1a914;
        case m2c::kloc_1a918: 	goto loc_1a918;
        case m2c::kloc_1a919: 	goto loc_1a919;
        case m2c::kloc_1a920: 	goto loc_1a920;
        case m2c::kloc_1a959: 	goto loc_1a959;
        case m2c::kloc_1a960: 	goto loc_1a960;
        case m2c::kloc_1a964: 	goto loc_1a964;
        case m2c::kloc_1a965: 	goto loc_1a965;
        case m2c::kloc_1a96c: 	goto loc_1a96c;
        case m2c::kloc_1a996: 	goto loc_1a996;
        case m2c::kloc_1a9c1: 	goto loc_1a9c1;
        case m2c::kloc_1a9c8: 	goto loc_1a9c8;
        case m2c::kloc_1a9e2: 	goto loc_1a9e2;
        case m2c::kloc_1a9ec: 	goto loc_1a9ec;
        case m2c::kloc_1aa1e: 	goto loc_1aa1e;
        case m2c::kloc_1aa1f: 	goto loc_1aa1f;
        case m2c::kloc_1aa88: 	goto loc_1aa88;
        case m2c::kloc_1aa8c: 	goto loc_1aa8c;
        case m2c::kloc_1aaf4: 	goto loc_1aaf4;
        case m2c::kloc_1ab15: 	goto loc_1ab15;
        case m2c::kloc_1ab60: 	goto loc_1ab60;
        case m2c::kloc_1ab65: 	goto loc_1ab65;
        case m2c::kloc_1ab79: 	goto loc_1ab79;
        case m2c::kloc_1ab8a: 	goto loc_1ab8a;
        case m2c::kloc_1ab94: 	goto loc_1ab94;
        case m2c::kloc_1abc6: 	goto loc_1abc6;
        case m2c::kloc_1abc7: 	goto loc_1abc7;
        case m2c::kloc_1ac30: 	goto loc_1ac30;
        case m2c::kloc_1ac34: 	goto loc_1ac34;
        case m2c::kloc_1ac9c: 	goto loc_1ac9c;
        case m2c::kloc_1acbd: 	goto loc_1acbd;
        case m2c::kloc_1ad08: 	goto loc_1ad08;
        case m2c::kloc_1ad0e: 	goto loc_1ad0e;
        case m2c::kloc_1ad18: 	goto loc_1ad18;
        case m2c::kloc_1ad26: 	goto loc_1ad26;
        case m2c::kloc_1ad34: 	goto loc_1ad34;
        case m2c::kloc_1ad3c: 	goto loc_1ad3c;
        case m2c::kloc_1ad4a: 	goto loc_1ad4a;
        case m2c::kloc_1ad4f: 	goto loc_1ad4f;
        case m2c::kloc_1ad55: 	goto loc_1ad55;
        case m2c::kloc_1ad5e: 	goto loc_1ad5e;
        case m2c::kloc_1ad80: 	goto loc_1ad80;
        case m2c::kloc_1ad94: 	goto loc_1ad94;
        case m2c::kloc_1ad97: 	goto loc_1ad97;
        case m2c::kloc_1ad9f: 	goto loc_1ad9f;
        case m2c::kloc_1adc6: 	goto loc_1adc6;
        case m2c::kloc_1adcc: 	goto loc_1adcc;
        case m2c::kloc_1ade0: 	goto loc_1ade0;
        case m2c::kloc_1ade6: 	goto loc_1ade6;
        case m2c::kloc_1adec: 	goto loc_1adec;
        case m2c::kloc_1adf0: 	goto loc_1adf0;
        case m2c::kloc_1adf6: 	goto loc_1adf6;
        case m2c::kloc_1adfc: 	goto loc_1adfc;
        case m2c::kloc_1ae76: 	goto loc_1ae76;
        case m2c::kloc_1ae7a: 	goto loc_1ae7a;
        case m2c::kloc_1aeb2: 	goto loc_1aeb2;
        case m2c::kloc_1aec9: 	goto loc_1aec9;
        case m2c::kloc_1aecc: 	goto loc_1aecc;
        case m2c::kloc_1aedf: 	goto loc_1aedf;
        case m2c::kloc_1aee4: 	goto loc_1aee4;
        case m2c::kloc_1aeee: 	goto loc_1aeee;
        case m2c::kloc_1af47: 	goto loc_1af47;
        case m2c::kloc_1af50: 	goto loc_1af50;
        case m2c::kloc_1af67: 	goto loc_1af67;
        case m2c::kloc_1af70: 	goto loc_1af70;
        case m2c::kloc_1af74: 	goto loc_1af74;
        case m2c::kloc_1af7c: 	goto loc_1af7c;
        case m2c::kloc_1af80: 	goto loc_1af80;
        case m2c::kloc_1afb4: 	goto loc_1afb4;
        case m2c::kloc_1b03c: 	goto loc_1b03c;
        case m2c::kloc_1b084: 	goto loc_1b084;
        case m2c::kloc_1b08e: 	goto loc_1b08e;
        case m2c::kloc_1b092: 	goto loc_1b092;
        case m2c::kloc_1b0a0: 	goto loc_1b0a0;
        case m2c::kloc_1b0a8: 	goto loc_1b0a8;
        case m2c::kloc_1b0ac: 	goto loc_1b0ac;
        case m2c::kloc_1b0b6: 	goto loc_1b0b6;
        case m2c::kloc_1b0c1: 	goto loc_1b0c1;
        case m2c::kloc_1b0d4: 	goto loc_1b0d4;
        case m2c::kloc_1b0da: 	goto loc_1b0da;
        case m2c::kloc_1b11c: 	goto loc_1b11c;
        case m2c::kloc_1b130: 	goto loc_1b130;
        case m2c::kloc_1b168: 	goto loc_1b168;
        case m2c::kloc_1b17c: 	goto loc_1b17c;
        case m2c::kloc_1b1a2: 	goto loc_1b1a2;
        case m2c::kloc_1b1b6: 	goto loc_1b1b6;
        case m2c::kloc_1b1de: 	goto loc_1b1de;
        case m2c::kloc_1b1fc: 	goto loc_1b1fc;
        case m2c::kloc_1b205: 	goto loc_1b205;
        case m2c::kloc_1b20e: 	goto loc_1b20e;
        case m2c::kloc_1b21a: 	goto loc_1b21a;
        case m2c::kloc_1b226: 	goto loc_1b226;
        case m2c::kloc_1b232: 	goto loc_1b232;
        case m2c::kloc_1b236: 	goto loc_1b236;
        case m2c::kloc_1b2ae: 	goto loc_1b2ae;
        case m2c::kloc_1b2bb: 	goto loc_1b2bb;
        case m2c::kloc_1b2e0: 	goto loc_1b2e0;
        case m2c::kloc_1b2e6: 	goto loc_1b2e6;
        case m2c::kloc_1b2f0: 	goto loc_1b2f0;
        case m2c::kloc_1b320: 	goto loc_1b320;
        case m2c::kloc_1b326: 	goto loc_1b326;
        case m2c::kloc_1b332: 	goto loc_1b332;
        case m2c::kloc_1b336: 	goto loc_1b336;
        case m2c::kloc_1b36a: 	goto loc_1b36a;
        case m2c::kloc_1b374: 	goto loc_1b374;
        case m2c::kloc_1b384: 	goto loc_1b384;
        case m2c::kloc_1b38b: 	goto loc_1b38b;
        case m2c::kloc_1b3be: 	goto loc_1b3be;
        case m2c::kloc_1b3c4: 	goto loc_1b3c4;
        case m2c::kloc_1b3dc: 	goto loc_1b3dc;
        case m2c::kloc_1b3e0: 	goto loc_1b3e0;
        case m2c::kloc_1b408: 	goto loc_1b408;
        case m2c::kloc_1b43c: 	goto loc_1b43c;
        case m2c::kloc_1b449: 	goto loc_1b449;
        case m2c::kloc_1b464: 	goto loc_1b464;
        case m2c::kloc_1b46a: 	goto loc_1b46a;
        case m2c::kloc_1b493: 	goto loc_1b493;
        case m2c::kloc_1b4a0: 	goto loc_1b4a0;
        case m2c::kloc_1b4aa: 	goto loc_1b4aa;
        case m2c::kloc_1b4ac: 	goto loc_1b4ac;
        case m2c::kloc_1b4c0: 	goto loc_1b4c0;
        case m2c::kloc_1b4d4: 	goto loc_1b4d4;
        case m2c::kloc_1b503: 	goto loc_1b503;
        case m2c::kloc_1b53b: 	goto loc_1b53b;
        case m2c::kloc_1b575: 	goto loc_1b575;
        case m2c::kloc_1b61a: 	goto loc_1b61a;
        case m2c::kloc_1b623: 	goto loc_1b623;
        case m2c::kloc_1b626: 	goto loc_1b626;
        case m2c::kloc_1b71e: 	goto loc_1b71e;
        case m2c::kloc_1b72e: 	goto loc_1b72e;
        case m2c::kloc_1b743: 	goto loc_1b743;
        case m2c::kloc_1b758: 	goto loc_1b758;
        case m2c::kloc_1b762: 	goto loc_1b762;
        case m2c::kloc_1b764: 	goto loc_1b764;
        case m2c::kloc_1b778: 	goto loc_1b778;
        case m2c::kloc_1b782: 	goto loc_1b782;
        case m2c::kloc_1b7b9: 	goto loc_1b7b9;
        case m2c::kloc_1b7e0: 	goto loc_1b7e0;
        case m2c::kloc_1b808: 	goto loc_1b808;
        case m2c::kloc_1b896: 	goto loc_1b896;
        case m2c::kloc_1b89f: 	goto loc_1b89f;
        case m2c::kloc_1b8b2: 	goto loc_1b8b2;
        case m2c::kloc_1b8cc: 	goto loc_1b8cc;
        case m2c::kloc_1b8e7: 	goto loc_1b8e7;
        case m2c::kloc_1b903: 	goto loc_1b903;
        case m2c::kloc_1b914: 	goto loc_1b914;
        case m2c::kloc_1b94a: 	goto loc_1b94a;
        case m2c::kloc_1b95a: 	goto loc_1b95a;
        case m2c::kloc_1b964: 	goto loc_1b964;
        case m2c::kloc_1b988: 	goto loc_1b988;
        case m2c::kloc_1b990: 	goto loc_1b990;
        case m2c::kloc_1b9da: 	goto loc_1b9da;
        case m2c::kloc_1b9ef: 	goto loc_1b9ef;
        case m2c::kloc_1ba04: 	goto loc_1ba04;
        case m2c::kloc_1ba0e: 	goto loc_1ba0e;
        case m2c::kloc_1ba10: 	goto loc_1ba10;
        case m2c::kloc_1ba24: 	goto loc_1ba24;
        case m2c::kloc_1ba2e: 	goto loc_1ba2e;
        case m2c::kloc_1ba65: 	goto loc_1ba65;
        case m2c::kloc_1ba8c: 	goto loc_1ba8c;
        case m2c::kloc_1bab4: 	goto loc_1bab4;
        case m2c::kloc_1bb43: 	goto loc_1bb43;
        case m2c::kloc_1bb4c: 	goto loc_1bb4c;
        case m2c::kloc_1bb5f: 	goto loc_1bb5f;
        case m2c::kloc_1bb79: 	goto loc_1bb79;
        case m2c::kloc_1bb94: 	goto loc_1bb94;
        case m2c::kloc_1bbb0: 	goto loc_1bbb0;
        case m2c::kloc_1bbc0: 	goto loc_1bbc0;
        case m2c::kloc_1bbf6: 	goto loc_1bbf6;
        case m2c::kloc_1bc06: 	goto loc_1bc06;
        case m2c::kloc_1bc10: 	goto loc_1bc10;
        case m2c::kloc_1bc36: 	goto loc_1bc36;
        case m2c::kloc_1bc3e: 	goto loc_1bc3e;
        case m2c::kloc_1bc89: 	goto loc_1bc89;
        case m2c::kloc_1bc93: 	goto loc_1bc93;
        case m2c::kloc_1bca5: 	goto loc_1bca5;
        case m2c::kloc_1bcb7: 	goto loc_1bcb7;
        case m2c::kloc_1be8d: 	goto loc_1be8d;
        case m2c::kloc_1beaa: 	goto loc_1beaa;
        case m2c::kloc_1beb4: 	goto loc_1beb4;
        case m2c::kloc_1bed0: 	goto loc_1bed0;
        case m2c::kloc_1bed8: 	goto loc_1bed8;
        case m2c::kloc_1bedf: 	goto loc_1bedf;
        case m2c::kloc_1bee4: 	goto loc_1bee4;
        case m2c::kloc_1bf02: 	goto loc_1bf02;
        case m2c::kloc_1bf09: 	goto loc_1bf09;
        case m2c::kloc_1bf10: 	goto loc_1bf10;
        case m2c::kloc_1bf28: 	goto loc_1bf28;
        case m2c::kloc_1bf34: 	goto loc_1bf34;
        case m2c::kloc_1bf38: 	goto loc_1bf38;
        case m2c::kloc_1bf5e: 	goto loc_1bf5e;
        case m2c::kloc_1bf6c: 	goto loc_1bf6c;
        case m2c::kloc_1bf6d: 	goto loc_1bf6d;
        case m2c::kloc_1bf75: 	goto loc_1bf75;
        case m2c::kloc_1bfb0: 	goto loc_1bfb0;
        case m2c::kloc_1bfd5: 	goto loc_1bfd5;
        case m2c::kloc_1bfdd: 	goto loc_1bfdd;
        case m2c::kloc_1bfe5: 	goto loc_1bfe5;
        case m2c::kloc_1bfed: 	goto loc_1bfed;
        case m2c::kloc_1bff0: 	goto loc_1bff0;
        case m2c::kloc_1bff8: 	goto loc_1bff8;
        case m2c::kloc_1c002: 	goto loc_1c002;
        case m2c::kloc_1c006: 	goto loc_1c006;
        case m2c::kloc_1c009: 	goto loc_1c009;
        case m2c::kloc_1c01e: 	goto loc_1c01e;
        case m2c::kloc_1c070: 	goto loc_1c070;
        case m2c::kloc_1c0c1: 	goto loc_1c0c1;
        case m2c::kloc_1c0c2: 	goto loc_1c0c2;
        case m2c::kloc_1c0d8: 	goto loc_1c0d8;
        case m2c::kloc_1c0df: 	goto loc_1c0df;
        case m2c::kloc_1c0e8: 	goto loc_1c0e8;
        case m2c::kloc_1c10a: 	goto loc_1c10a;
        case m2c::kloc_1c11e: 	goto loc_1c11e;
        case m2c::kloc_1c128: 	goto loc_1c128;
        case m2c::kloc_1c156: 	goto loc_1c156;
        case m2c::kloc_1c162: 	goto loc_1c162;
        case m2c::kloc_1c17c: 	goto loc_1c17c;
        case m2c::kloc_1c1ac: 	goto loc_1c1ac;
        case m2c::kloc_1c1c3: 	goto loc_1c1c3;
        case m2c::kloc_1c1c6: 	goto loc_1c1c6;
        case m2c::kloc_1c1d0: 	goto loc_1c1d0;
        case m2c::kloc_1c1da: 	goto loc_1c1da;
        case m2c::kloc_1c238: 	goto loc_1c238;
        case m2c::kloc_1c256: 	goto loc_1c256;
        case m2c::kloc_1c25b: 	goto loc_1c25b;
        case m2c::kloc_1c265: 	goto loc_1c265;
        case m2c::kloc_1c293: 	goto loc_1c293;
        case m2c::kloc_1c2ae: 	goto loc_1c2ae;
        case m2c::kloc_1c2b0: 	goto loc_1c2b0;
        case m2c::kloc_1c2f8: 	goto loc_1c2f8;
        case m2c::kupdate_frame: 	goto update_frame;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool skybox_op_helper2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    skybox_op_helper2:
    _begin:
#undef arg_0
#define arg_0 6
	// 23254 arg_0           = word ptr  6 ;~ 0B93:23F2
#undef arg_2
#define arg_2 8
	// 23255 arg_2           = word ptr  8 ;~ 0B93:23F2
#undef arg_4
#define arg_4 0x0A
	// 23256 arg_4           = word ptr  0Ah ;~ 0B93:23F2
cs=0xb93;eip=0x0023f2; 	X(PUSH(bp));	// 23258 push    bp ;~ 0B93:23F2
cs=0xb93;eip=0x0023f3; 	T(MOV(bp, sp));	// 23259 mov     bp, sp ;~ 0B93:23F3
cs=0xb93;eip=0x0023f5; 	T(SUB(sp, 4));	// 23260 sub     sp, 4 ;~ 0B93:23F5
cs=0xb93;eip=0x0023f8; 	X(PUSH(di));	// 23261 push    di ;~ 0B93:23F8
cs=0xb93;eip=0x0023f9; 	X(PUSH(si));	// 23262 push    si ;~ 0B93:23F9
cs=0xb93;eip=0x0023fa; 	T(CMP(timertestflag2, 4));	// 23263 cmp     timertestflag2, 4 ;~ 0B93:23FA
cs=0xb93;eip=0x0023ff; 	J(JZ(loc_1c320));	// 23264 jz      short loc_1C320 ;~ 0B93:23FF
cs=0xb93;eip=0x002401; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 23265 mov     si, [bp+arg_4] ;~ 0B93:2401
cs=0xb93;eip=0x002404; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 23266 mov     bx, [bp+arg_0] ;~ 0B93:2404
cs=0xb93;eip=0x002407; 	T(SUB(si, *(dw*)(raddr(ds,bx+4))));	// 23267 sub     si, [bx+4] ;~ 0B93:2407
cs=0xb93;eip=0x00240a; 	T(SUB(si, skybox_current));	// 23268 sub     si, skybox_current ;~ 0B93:240A
cs=0xb93;eip=0x00240e; 	J(JMP(loc_1c329));	// 23269 jmp     short loc_1C329 ;~ 0B93:240E
loc_1c320:
	// 5797 
cs=0xb93;eip=0x002410; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 23273 mov     si, [bp+arg_4] ;~ 0B93:2410
cs=0xb93;eip=0x002413; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 23274 mov     bx, [bp+arg_0] ;~ 0B93:2413
cs=0xb93;eip=0x002416; 	T(SUB(si, *(dw*)(raddr(ds,bx+4))));	// 23275 sub     si, [bx+4] ;~ 0B93:2416
loc_1c329:
	// 5798 
cs=0xb93;eip=0x002419; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 23278 mov     ax, [bx+6] ;~ 0B93:2419
cs=0xb93;eip=0x00241c; 	T(SUB(ax, *(dw*)(raddr(ds,bx+4))));	// 23279 sub     ax, [bx+4] ;~ 0B93:241C
cs=0xb93;eip=0x00241f; 	T(CMP(ax, si));	// 23280 cmp     ax, si ;~ 0B93:241F
cs=0xb93;eip=0x002421; 	J(JGE(loc_1c339));	// 23281 jge     short loc_1C339 ;~ 0B93:2421
cs=0xb93;eip=0x002423; 	T(MOV(si, *(dw*)(raddr(ds,bx+6))));	// 23282 mov     si, [bx+6] ;~ 0B93:2423
cs=0xb93;eip=0x002426; 	T(SUB(si, *(dw*)(raddr(ds,bx+4))));	// 23283 sub     si, [bx+4] ;~ 0B93:2426
loc_1c339:
	// 5799 
cs=0xb93;eip=0x002429; 	T(OR(si, si));	// 23286 or      si, si ;~ 0B93:2429
cs=0xb93;eip=0x00242b; 	J(JLE(loc_1c35f));	// 23287 jle     short loc_1C35F ;~ 0B93:242B
cs=0xb93;eip=0x00242d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 23288 mov     ax, [bx+4] ;~ 0B93:242D
cs=0xb93;eip=0x002430; 	T(ADD(ax, si));	// 23289 add     ax, si ;~ 0B93:2430
cs=0xb93;eip=0x002432; 	X(PUSH(ax));	// 23290 push    ax ;~ 0B93:2432
cs=0xb93;eip=0x002433; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 23291 push    word ptr [bx+4] ;~ 0B93:2433
cs=0xb93;eip=0x002436; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 23292 push    word ptr [bx+2] ;~ 0B93:2436
cs=0xb93;eip=0x002439; 	X(PUSH(*(dw*)(raddr(ds,bx+0))));	// 23293 push    word ptr [bx+0] ;~ 0B93:2439
cs=0xb93;eip=0x00243b; 	J(CALLF(sprite_set_1_size,0));	// 23294 call    sprite_set_1_size ;~ 0B93:243B
cs=0xb93;eip=0x002440; 	T(ADD(sp, 8));	// 23295 add     sp, 8 ;~ 0B93:2440
cs=0xb93;eip=0x002443; 	X(PUSH(skybox_sky_color));	// 23296 push    skybox_sky_color ;~ 0B93:2443
cs=0xb93;eip=0x002447; 	J(CALLF(sprite_clear_1_color,0));	// 23297 call    sprite_clear_1_color ;~ 0B93:2447
cs=0xb93;eip=0x00244c; 	T(ADD(sp, 2));	// 23298 add     sp, 2 ;~ 0B93:244C
loc_1c35f:
	// 5800 
cs=0xb93;eip=0x00244f; 	T(CMP(timertestflag2, 4));	// 23301 cmp     timertestflag2, 4 ;~ 0B93:244F
cs=0xb93;eip=0x002454; 	J(JNZ(loc_1c369));	// 23302 jnz     short loc_1C369 ;~ 0B93:2454
cs=0xb93;eip=0x002456; 	J(JMP(loc_1c432));	// 23303 jmp     loc_1C432 ;~ 0B93:2456
loc_1c369:
	// 5801 
cs=0xb93;eip=0x002459; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 23307 mov     si, [bp+arg_2] ;~ 0B93:2459
cs=0xb93;eip=0x00245c; 	T(ADD(si, 0x200));	// 23308 add     si, 200h ;~ 0B93:245C
cs=0xb93;eip=0x002460; 	T(AND(si, 0x3FF));	// 23309 and     si, 3FFh ;~ 0B93:2460
cs=0xb93;eip=0x002464; 	T(SUB(si, 0x400));	// 23310 sub     si, 400h ;~ 0B93:2464
cs=0xb93;eip=0x002468; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 23311 mov     bx, [bp+arg_0] ;~ 0B93:2468
cs=0xb93;eip=0x00246b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 23312 mov     ax, [bp+arg_4] ;~ 0B93:246B
cs=0xb93;eip=0x00246e; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 23313 cmp     [bx+4], ax ;~ 0B93:246E
cs=0xb93;eip=0x002471; 	J(JL(loc_1c386));	// 23314 jl      short loc_1C386 ;~ 0B93:2471
cs=0xb93;eip=0x002473; 	J(JMP(loc_1c432));	// 23315 jmp     loc_1C432 ;~ 0B93:2473
loc_1c386:
	// 5802 
cs=0xb93;eip=0x002476; 	T(SUB(ax, word_454ce));	// 23319 sub     ax, word_454CE ;~ 0B93:2476
cs=0xb93;eip=0x00247a; 	T(CMP(ax, *(dw*)(raddr(ds,bx+6))));	// 23320 cmp     ax, [bx+6] ;~ 0B93:247A
cs=0xb93;eip=0x00247d; 	J(JLE(loc_1c392));	// 23321 jle     short loc_1C392 ;~ 0B93:247D
cs=0xb93;eip=0x00247f; 	J(JMP(loc_1c432));	// 23322 jmp     loc_1C432 ;~ 0B93:247F
loc_1c392:
	// 5803 
cs=0xb93;eip=0x002482; 	X(PUSH(*(dw*)(raddr(ds,bx+6))));	// 23326 push    word ptr [bx+6] ;~ 0B93:2482
cs=0xb93;eip=0x002485; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 23327 push    word ptr [bx+4] ;~ 0B93:2485
cs=0xb93;eip=0x002488; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 23328 push    word ptr [bx+2] ;~ 0B93:2488
cs=0xb93;eip=0x00248b; 	X(PUSH(*(dw*)(raddr(ds,bx+0))));	// 23329 push    word ptr [bx+0] ;~ 0B93:248B
cs=0xb93;eip=0x00248d; 	J(CALLF(sprite_set_1_size,0));	// 23330 call    sprite_set_1_size ;~ 0B93:248D
cs=0xb93;eip=0x002492; 	T(ADD(sp, 8));	// 23331 add     sp, 8 ;~ 0B93:2492
cs=0xb93;eip=0x002495; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 23332 mov     ax, [bp+arg_4] ;~ 0B93:2495
cs=0xb93;eip=0x002498; 	T(SUB(ax, skybox_ptr1));	// 23333 sub     ax, skybox_ptr1 ;~ 0B93:2498
cs=0xb93;eip=0x00249c; 	X(PUSH(ax));	// 23334 push    ax ;~ 0B93:249C
cs=0xb93;eip=0x00249d; 	X(PUSH(si));	// 23335 push    si ;~ 0B93:249D
cs=0xb93;eip=0x00249e; 	X(PUSH(*(dw*)(((db*)skyboxes)+2)));	// 23336 push    word ptr skyboxes+2 ;~ 0B93:249E
cs=0xb93;eip=0x0024a2; 	X(PUSH(*(dw*)(((db*)skyboxes))));	// 23337 push    word ptr skyboxes ;~ 0B93:24A2
cs=0xb93;eip=0x0024a6; 	J(CALLF(sprite_putimage_and_alt,0));	// 23338 call    sprite_putimage_and_alt ;~ 0B93:24A6
cs=0xb93;eip=0x0024ab; 	T(ADD(sp, 8));	// 23339 add     sp, 8 ;~ 0B93:24AB
cs=0xb93;eip=0x0024ae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 23340 mov     ax, [bp+arg_4] ;~ 0B93:24AE
cs=0xb93;eip=0x0024b1; 	T(SUB(ax, skybox_ptr2));	// 23341 sub     ax, skybox_ptr2 ;~ 0B93:24B1
cs=0xb93;eip=0x0024b5; 	X(PUSH(ax));	// 23342 push    ax ;~ 0B93:24B5
cs=0xb93;eip=0x0024b6; 	T(ax = si+0x140);	// 23343 lea     ax, [si+140h] ;~ 0B93:24B6
cs=0xb93;eip=0x0024ba; 	X(PUSH(ax));	// 23344 push    ax ;~ 0B93:24BA
cs=0xb93;eip=0x0024bb; 	X(PUSH(*(dw*)(((db*)skyboxes)+6)));	// 23345 push    word ptr skyboxes+6 ;~ 0B93:24BB
cs=0xb93;eip=0x0024bf; 	X(PUSH(*(dw*)(((db*)skyboxes)+4)));	// 23346 push    word ptr skyboxes+4 ;~ 0B93:24BF
cs=0xb93;eip=0x0024c3; 	J(CALLF(sprite_putimage_and_alt,0));	// 23347 call    sprite_putimage_and_alt ;~ 0B93:24C3
cs=0xb93;eip=0x0024c8; 	T(ADD(sp, 8));	// 23348 add     sp, 8 ;~ 0B93:24C8
cs=0xb93;eip=0x0024cb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 23349 mov     ax, [bp+arg_4] ;~ 0B93:24CB
cs=0xb93;eip=0x0024ce; 	T(SUB(ax, skybox_ptr3));	// 23350 sub     ax, skybox_ptr3 ;~ 0B93:24CE
cs=0xb93;eip=0x0024d2; 	X(PUSH(ax));	// 23351 push    ax ;~ 0B93:24D2
cs=0xb93;eip=0x0024d3; 	T(ax = si+0x200);	// 23352 lea     ax, [si+200h] ;~ 0B93:24D3
cs=0xb93;eip=0x0024d7; 	X(PUSH(ax));	// 23353 push    ax ;~ 0B93:24D7
cs=0xb93;eip=0x0024d8; 	X(PUSH(*(dw*)(((db*)skyboxes)+0x0A)));	// 23354 push    word ptr skyboxes+0Ah ;~ 0B93:24D8
cs=0xb93;eip=0x0024dc; 	X(PUSH(*(dw*)(((db*)skyboxes)+8)));	// 23355 push    word ptr skyboxes+8 ;~ 0B93:24DC
cs=0xb93;eip=0x0024e0; 	J(CALLF(sprite_putimage_and_alt,0));	// 23356 call    sprite_putimage_and_alt ;~ 0B93:24E0
cs=0xb93;eip=0x0024e5; 	T(ADD(sp, 8));	// 23357 add     sp, 8 ;~ 0B93:24E5
cs=0xb93;eip=0x0024e8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 23358 mov     ax, [bp+arg_4] ;~ 0B93:24E8
cs=0xb93;eip=0x0024eb; 	T(SUB(ax, skybox_ptr4));	// 23359 sub     ax, skybox_ptr4 ;~ 0B93:24EB
cs=0xb93;eip=0x0024ef; 	X(PUSH(ax));	// 23360 push    ax ;~ 0B93:24EF
cs=0xb93;eip=0x0024f0; 	T(ax = si+0x340);	// 23361 lea     ax, [si+340h] ;~ 0B93:24F0
cs=0xb93;eip=0x0024f4; 	X(PUSH(ax));	// 23362 push    ax ;~ 0B93:24F4
cs=0xb93;eip=0x0024f5; 	X(PUSH(*(dw*)(((db*)skyboxes)+0x0E)));	// 23363 push    word ptr skyboxes+0Eh ;~ 0B93:24F5
cs=0xb93;eip=0x0024f9; 	X(PUSH(*(dw*)(((db*)skyboxes)+0x0C)));	// 23364 push    word ptr skyboxes+0Ch ;~ 0B93:24F9
cs=0xb93;eip=0x0024fd; 	J(CALLF(sprite_putimage_and_alt,0));	// 23365 call    sprite_putimage_and_alt ;~ 0B93:24FD
cs=0xb93;eip=0x002502; 	T(ADD(sp, 8));	// 23366 add     sp, 8 ;~ 0B93:2502
cs=0xb93;eip=0x002505; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 23367 mov     ax, [bp+arg_4] ;~ 0B93:2505
cs=0xb93;eip=0x002508; 	T(SUB(ax, skybox_ptr1));	// 23368 sub     ax, skybox_ptr1 ;~ 0B93:2508
cs=0xb93;eip=0x00250c; 	X(PUSH(ax));	// 23369 push    ax ;~ 0B93:250C
cs=0xb93;eip=0x00250d; 	T(ax = si+0x400);	// 23370 lea     ax, [si+400h] ;~ 0B93:250D
cs=0xb93;eip=0x002511; 	X(PUSH(ax));	// 23371 push    ax ;~ 0B93:2511
cs=0xb93;eip=0x002512; 	X(PUSH(*(dw*)(((db*)skyboxes)+2)));	// 23372 push    word ptr skyboxes+2 ;~ 0B93:2512
cs=0xb93;eip=0x002516; 	X(PUSH(*(dw*)(((db*)skyboxes))));	// 23373 push    word ptr skyboxes ;~ 0B93:2516
cs=0xb93;eip=0x00251a; 	J(CALLF(sprite_putimage_and_alt,0));	// 23374 call    sprite_putimage_and_alt ;~ 0B93:251A
cs=0xb93;eip=0x00251f; 	T(ADD(sp, 8));	// 23375 add     sp, 8 ;~ 0B93:251F
loc_1c432:
	// 5804 
cs=0xb93;eip=0x002522; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 23379 mov     bx, [bp+arg_0] ;~ 0B93:2522
cs=0xb93;eip=0x002525; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 23380 mov     ax, [bp+arg_4] ;~ 0B93:2525
cs=0xb93;eip=0x002528; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 23381 cmp     [bx+4], ax ;~ 0B93:2528
cs=0xb93;eip=0x00252b; 	J(JLE(loc_1c442));	// 23382 jle     short loc_1C442 ;~ 0B93:252B
cs=0xb93;eip=0x00252d; 	T(MOV(di, *(dw*)(raddr(ds,bx+4))));	// 23383 mov     di, [bx+4] ;~ 0B93:252D
cs=0xb93;eip=0x002530; 	J(JMP(loc_1c445));	// 23384 jmp     short loc_1C445 ;~ 0B93:2530
loc_1c442:
	// 5805 
cs=0xb93;eip=0x002532; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 23388 mov     di, [bp+arg_4] ;~ 0B93:2532
loc_1c445:
	// 5806 
cs=0xb93;eip=0x002535; 	T(MOV(si, *(dw*)(raddr(ds,bx+6))));	// 23391 mov     si, [bx+6] ;~ 0B93:2535
cs=0xb93;eip=0x002538; 	T(SUB(si, di));	// 23392 sub     si, di ;~ 0B93:2538
cs=0xb93;eip=0x00253a; 	T(OR(si, si));	// 23393 or      si, si ;~ 0B93:253A
cs=0xb93;eip=0x00253c; 	J(JLE(loc_1c46d));	// 23394 jle     short loc_1C46D ;~ 0B93:253C
cs=0xb93;eip=0x00253e; 	T(MOV(ax, di));	// 23395 mov     ax, di ;~ 0B93:253E
cs=0xb93;eip=0x002540; 	T(ADD(ax, si));	// 23396 add     ax, si ;~ 0B93:2540
cs=0xb93;eip=0x002542; 	X(PUSH(ax));	// 23397 push    ax ;~ 0B93:2542
cs=0xb93;eip=0x002543; 	X(PUSH(di));	// 23398 push    di ;~ 0B93:2543
cs=0xb93;eip=0x002544; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 23399 push    word ptr [bx+2] ;~ 0B93:2544
cs=0xb93;eip=0x002547; 	X(PUSH(*(dw*)(raddr(ds,bx+0))));	// 23400 push    word ptr [bx+0] ;~ 0B93:2547
cs=0xb93;eip=0x002549; 	J(CALLF(sprite_set_1_size,0));	// 23401 call    sprite_set_1_size ;~ 0B93:2549
cs=0xb93;eip=0x00254e; 	T(ADD(sp, 8));	// 23402 add     sp, 8 ;~ 0B93:254E
cs=0xb93;eip=0x002551; 	X(PUSH(skybox_grd_color));	// 23403 push    skybox_grd_color ;~ 0B93:2551
cs=0xb93;eip=0x002555; 	J(CALLF(sprite_clear_1_color,0));	// 23404 call    sprite_clear_1_color ;~ 0B93:2555
cs=0xb93;eip=0x00255a; 	T(ADD(sp, 2));	// 23405 add     sp, 2 ;~ 0B93:255A
loc_1c46d:
	// 5807 
cs=0xb93;eip=0x00255d; 	X(POP(si));	// 23408 pop     si ;~ 0B93:255D
cs=0xb93;eip=0x00255e; 	X(POP(di));	// 23409 pop     di ;~ 0B93:255E
cs=0xb93;eip=0x00255f; 	T(MOV(sp, bp));	// 23410 mov     sp, bp ;~ 0B93:255F
cs=0xb93;eip=0x002561; 	X(POP(bp));	// 23411 pop     bp ;~ 0B93:2561
cs=0xb93;eip=0x002562; 	J(RETF(0));	// 23412 retf ;~ 0B93:2562

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c320: 	goto loc_1c320;
        case m2c::kloc_1c329: 	goto loc_1c329;
        case m2c::kloc_1c339: 	goto loc_1c339;
        case m2c::kloc_1c35f: 	goto loc_1c35f;
        case m2c::kloc_1c369: 	goto loc_1c369;
        case m2c::kloc_1c386: 	goto loc_1c386;
        case m2c::kloc_1c392: 	goto loc_1c392;
        case m2c::kloc_1c432: 	goto loc_1c432;
        case m2c::kloc_1c442: 	goto loc_1c442;
        case m2c::kloc_1c445: 	goto loc_1c445;
        case m2c::kloc_1c46d: 	goto loc_1c46d;
        case m2c::kskybox_op_helper2: 	goto skybox_op_helper2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool skybox_op(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    skybox_op:
    _begin:
#undef var_78
#define var_78 -0x78
	// 23424 var_78          = byte ptr -78h ;~ 0B93:2564
#undef var_76
#define var_76 -0x76
	// 23425 var_76          = word ptr -76h ;~ 0B93:2564
#undef var_72
#define var_72 -0x72
	// 23426 var_72          = word ptr -72h ;~ 0B93:2564
#undef var_6e
#define var_6e -0x6E
	// 23427 var_6E          = word ptr -6Eh ;~ 0B93:2564
#undef var_5c
#define var_5c -0x5C
	// 23428 var_5C          = word ptr -5Ch ;~ 0B93:2564
#undef var_5a
#define var_5a -0x5A
	// 23429 var_5A          = word ptr -5Ah ;~ 0B93:2564
#undef var_58
#define var_58 -0x58
	// 23430 var_58          = word ptr -58h ;~ 0B93:2564
#undef var_56
#define var_56 -0x56
	// 23431 var_56          = word ptr -56h ;~ 0B93:2564
#undef var_54
#define var_54 -0x54
	// 23432 var_54          = word ptr -54h ;~ 0B93:2564
#undef var_50
#define var_50 -0x50
	// 23433 var_50          = word ptr -50h ;~ 0B93:2564
#undef var_4e
#define var_4e -0x4E
	// 23434 var_4E          = word ptr -4Eh ;~ 0B93:2564
#undef var_4c
#define var_4c -0x4C
	// 23435 var_4C          = word ptr -4Ch ;~ 0B93:2564
#undef var_4a
#define var_4a -0x4A
	// 23436 var_4A          = word ptr -4Ah ;~ 0B93:2564
#undef var_48
#define var_48 -0x48
	// 23437 var_48          = word ptr -48h ;~ 0B93:2564
#undef var_46
#define var_46 -0x46
	// 23438 var_46          = word ptr -46h ;~ 0B93:2564
#undef var_44
#define var_44 -0x44
	// 23439 var_44          = word ptr -44h ;~ 0B93:2564
#undef var_42
#define var_42 -0x42
	// 23440 var_42          = word ptr -42h ;~ 0B93:2564
#undef var_40
#define var_40 -0x40
	// 23441 var_40          = word ptr -40h ;~ 0B93:2564
#undef var_3e
#define var_3e -0x3E
	// 23442 var_3E          = word ptr -3Eh ;~ 0B93:2564
#undef var_3c
#define var_3c -0x3C
	// 23443 var_3C          = word ptr -3Ch ;~ 0B93:2564
#undef var_3a
#define var_3a -0x3A
	// 23444 var_3A          = word ptr -3Ah ;~ 0B93:2564
#undef var_38
#define var_38 -0x38
	// 23445 var_38          = word ptr -38h ;~ 0B93:2564
#undef var_34
#define var_34 -0x34
	// 23446 var_34          = word ptr -34h ;~ 0B93:2564
#undef var_32
#define var_32 -0x32
	// 23447 var_32          = word ptr -32h ;~ 0B93:2564
#undef var_30
#define var_30 -0x30
	// 23448 var_30          = word ptr -30h ;~ 0B93:2564
#undef var_2e
#define var_2e -0x2E
	// 23449 var_2E          = word ptr -2Eh ;~ 0B93:2564
#undef var_2c
#define var_2c -0x2C
	// 23450 var_2C          = word ptr -2Ch ;~ 0B93:2564
#undef var_2a
#define var_2a -0x2A
	// 23451 var_2A          = word ptr -2Ah ;~ 0B93:2564
#undef var_28
#define var_28 -0x28
	// 23452 var_28          = word ptr -28h ;~ 0B93:2564
#undef var_26
#define var_26 -0x26
	// 23453 var_26          = word ptr -26h ;~ 0B93:2564
#undef var_24
#define var_24 -0x24
	// 23454 var_24          = byte ptr -24h ;~ 0B93:2564
#undef var_20
#define var_20 -0x20
	// 23455 var_20          = word ptr -20h ;~ 0B93:2564
#undef var_1e
#define var_1e -0x1E
	// 23456 var_1E          = byte ptr -1Eh ;~ 0B93:2564
#undef var_1a
#define var_1a -0x1A
	// 23457 var_1A          = word ptr -1Ah ;~ 0B93:2564
#undef arg_0
#define arg_0 6
	// 23458 arg_0           = word ptr  6 ;~ 0B93:2564
#undef arg_2
#define arg_2 8
	// 23459 arg_2           = word ptr  8 ;~ 0B93:2564
#undef arg_4
#define arg_4 0x0A
	// 23460 arg_4           = word ptr  0Ah ;~ 0B93:2564
#undef arg_6
#define arg_6 0x0C
	// 23461 arg_6           = word ptr  0Ch ;~ 0B93:2564
#undef arg_8
#define arg_8 0x0E
	// 23462 arg_8           = word ptr  0Eh ;~ 0B93:2564
#undef arg_a
#define arg_a 0x10
	// 23463 arg_A           = word ptr  10h ;~ 0B93:2564
#undef arg_c
#define arg_c 0x12
	// 23464 arg_C           = word ptr  12h ;~ 0B93:2564
cs=0xb93;eip=0x002564; 	X(PUSH(bp));	// 23466 push    bp ;~ 0B93:2564
cs=0xb93;eip=0x002565; 	T(MOV(bp, sp));	// 23467 mov     bp, sp ;~ 0B93:2565
cs=0xb93;eip=0x002567; 	T(SUB(sp, 0x78));	// 23468 sub     sp, 78h ;~ 0B93:2567
cs=0xb93;eip=0x00256a; 	X(PUSH(di));	// 23469 push    di ;~ 0B93:256A
cs=0xb93;eip=0x00256b; 	X(PUSH(si));	// 23470 push    si ;~ 0B93:256B
cs=0xb93;eip=0x00256c; 	X(MOV(rect_array_unk3_length, 0));	// 23471 mov     rect_array_unk3_length, 0 ;~ 0B93:256C
cs=0xb93;eip=0x002571; 	X(MOV(*(dw*)(raddr(ss,bp+var_5c)), 0));	// 23472 mov     [bp+var_5C], 0 ;~ 0B93:2571
cs=0xb93;eip=0x002576; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 23473 mov     bx, [bp+arg_2] ;~ 0B93:2576
cs=0xb93;eip=0x002579; 	X(PUSH(*(dw*)(raddr(ds,bx+6))));	// 23474 push    word ptr [bx+6] ;~ 0B93:2579
cs=0xb93;eip=0x00257c; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 23475 push    word ptr [bx+4] ;~ 0B93:257C
cs=0xb93;eip=0x00257f; 	T(MOV(ax, 0x140));	// 23476 mov     ax, 140h ;~ 0B93:257F
cs=0xb93;eip=0x002582; 	X(PUSH(ax));	// 23477 push    ax ;~ 0B93:2582
cs=0xb93;eip=0x002583; 	T(SUB(ax, ax));	// 23478 sub     ax, ax ;~ 0B93:2583
cs=0xb93;eip=0x002585; 	X(PUSH(ax));	// 23479 push    ax ;~ 0B93:2585
cs=0xb93;eip=0x002586; 	J(CALLF(sprite_set_1_size,0));	// 23480 call    sprite_set_1_size ;~ 0B93:2586
cs=0xb93;eip=0x00258b; 	T(ADD(sp, 8));	// 23481 add     sp, 8 ;~ 0B93:258B
cs=0xb93;eip=0x00258e; 	T(CMP(*(dw*)(raddr(ss,bp+arg_8)), 0));	// 23482 cmp     [bp+arg_8], 0 ;~ 0B93:258E
cs=0xb93;eip=0x002592; 	J(JNZ(loc_1c4a7));	// 23483 jnz     short loc_1C4A7 ;~ 0B93:2592
cs=0xb93;eip=0x002594; 	J(JMP(loc_1c958));	// 23484 jmp     loc_1C958 ;~ 0B93:2594
loc_1c4a7:
	// 5808 
cs=0xb93;eip=0x002597; 	T(MOV(ax, 0x4650));	// 23488 mov     ax, 4650h ;~ 0B93:2597
cs=0xb93;eip=0x00259a; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_4))));	// 23489 imul    [bp+arg_4] ;~ 0B93:259A
cs=0xb93;eip=0x00259d; 	X(MOV(*(dw*)(raddr(ss,bp+var_58)), ax));	// 23490 mov     [bp+var_58], ax ;~ 0B93:259D
cs=0xb93;eip=0x0025a0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_c))));	// 23491 mov     ax, [bp+arg_C] ;~ 0B93:25A0
cs=0xb93;eip=0x0025a3; 	T(NEG(ax));	// 23492 neg     ax ;~ 0B93:25A3
cs=0xb93;eip=0x0025a5; 	X(MOV(*(dw*)(raddr(ss,bp+var_56)), ax));	// 23493 mov     [bp+var_56], ax ;~ 0B93:25A5
cs=0xb93;eip=0x0025a8; 	T(MOV(ax, 0x3A98));	// 23494 mov     ax, 3A98h ;~ 0B93:25A8
cs=0xb93;eip=0x0025ab; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_4))));	// 23495 imul    [bp+arg_4] ;~ 0B93:25AB
cs=0xb93;eip=0x0025ae; 	X(MOV(*(dw*)(raddr(ss,bp+var_54)), ax));	// 23496 mov     [bp+var_54], ax ;~ 0B93:25AE
cs=0xb93;eip=0x0025b1; 	T(ax = bp+var_24);	// 23497 lea     ax, [bp+var_24] ;~ 0B93:25B1
cs=0xb93;eip=0x0025b4; 	X(PUSH(ax));	// 23498 push    ax ;~ 0B93:25B4
cs=0xb93;eip=0x0025b5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 23499 push    [bp+arg_6] ;~ 0B93:25B5
cs=0xb93;eip=0x0025b8; 	T(ax = bp+var_58);	// 23500 lea     ax, [bp+var_58] ;~ 0B93:25B8
cs=0xb93;eip=0x0025bb; 	X(PUSH(ax));	// 23501 push    ax ;~ 0B93:25BB
cs=0xb93;eip=0x0025bc; 	J(CALLF(mat_mul_vector,0));	// 23502 call    mat_mul_vector ;~ 0B93:25BC
cs=0xb93;eip=0x0025c1; 	T(ADD(sp, 6));	// 23503 add     sp, 6 ;~ 0B93:25C1
cs=0xb93;eip=0x0025c4; 	T(MOV(ax, 0x0B9B0));	// 23504 mov     ax, 0B9B0h ;~ 0B93:25C4
cs=0xb93;eip=0x0025c7; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_4))));	// 23505 imul    [bp+arg_4] ;~ 0B93:25C7
cs=0xb93;eip=0x0025ca; 	X(MOV(*(dw*)(raddr(ss,bp+var_58)), ax));	// 23506 mov     [bp+var_58], ax ;~ 0B93:25CA
cs=0xb93;eip=0x0025cd; 	T(ax = bp+var_1e);	// 23507 lea     ax, [bp+var_1E] ;~ 0B93:25CD
cs=0xb93;eip=0x0025d0; 	X(PUSH(ax));	// 23508 push    ax ;~ 0B93:25D0
cs=0xb93;eip=0x0025d1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 23509 push    [bp+arg_6] ;~ 0B93:25D1
cs=0xb93;eip=0x0025d4; 	T(ax = bp+var_58);	// 23510 lea     ax, [bp+var_58] ;~ 0B93:25D4
cs=0xb93;eip=0x0025d7; 	X(PUSH(ax));	// 23511 push    ax ;~ 0B93:25D7
cs=0xb93;eip=0x0025d8; 	J(CALLF(mat_mul_vector,0));	// 23512 call    mat_mul_vector ;~ 0B93:25D8
cs=0xb93;eip=0x0025dd; 	T(ADD(sp, 6));	// 23513 add     sp, 6 ;~ 0B93:25DD
cs=0xb93;eip=0x0025e0; 	T(CMP(*(dw*)(raddr(ss,bp+var_20)), 0));	// 23514 cmp     [bp+var_20], 0 ;~ 0B93:25E0
cs=0xb93;eip=0x0025e4; 	J(JL(loc_1c4fc));	// 23515 jl      short loc_1C4FC ;~ 0B93:25E4
cs=0xb93;eip=0x0025e6; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), 0));	// 23516 cmp     [bp+var_1A], 0 ;~ 0B93:25E6
cs=0xb93;eip=0x0025ea; 	J(JGE(loc_1c51c));	// 23517 jge     short loc_1C51C ;~ 0B93:25EA
loc_1c4fc:
	// 5809 
cs=0xb93;eip=0x0025ec; 	T(MOV(di, skybox_sky_color));	// 23521 mov     di, skybox_sky_color ;~ 0B93:25EC
loc_1c500:
	// 5810 
cs=0xb93;eip=0x0025f0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 23524 mov     bx, [bp+arg_2] ;~ 0B93:25F0
cs=0xb93;eip=0x0025f3; 	X(PUSH(*(dw*)(raddr(ds,bx+6))));	// 23525 push    word ptr [bx+6] ;~ 0B93:25F3
cs=0xb93;eip=0x0025f6; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 23526 push    word ptr [bx+4] ;~ 0B93:25F6
cs=0xb93;eip=0x0025f9; 	T(MOV(ax, 0x140));	// 23527 mov     ax, 140h ;~ 0B93:25F9
cs=0xb93;eip=0x0025fc; 	X(PUSH(ax));	// 23528 push    ax ;~ 0B93:25FC
cs=0xb93;eip=0x0025fd; 	T(SUB(ax, ax));	// 23529 sub     ax, ax ;~ 0B93:25FD
cs=0xb93;eip=0x0025ff; 	X(PUSH(ax));	// 23530 push    ax ;~ 0B93:25FF
cs=0xb93;eip=0x002600; 	J(CALLF(sprite_set_1_size,0));	// 23531 call    sprite_set_1_size ;~ 0B93:2600
cs=0xb93;eip=0x002605; 	T(ADD(sp, 8));	// 23532 add     sp, 8 ;~ 0B93:2605
cs=0xb93;eip=0x002608; 	X(PUSH(di));	// 23533 push    di ;~ 0B93:2608
cs=0xb93;eip=0x002609; 	J(JMP(loc_1cb6a));	// 23534 jmp     loc_1CB6A ;~ 0B93:2609
loc_1c51c:
	// 5811 
cs=0xb93;eip=0x00260c; 	T(ax = bp+var_4e);	// 23538 lea     ax, [bp+var_4E] ;~ 0B93:260C
cs=0xb93;eip=0x00260f; 	X(PUSH(ax));	// 23539 push    ax ;~ 0B93:260F
cs=0xb93;eip=0x002610; 	T(ax = bp+var_24);	// 23540 lea     ax, [bp+var_24] ;~ 0B93:2610
cs=0xb93;eip=0x002613; 	X(PUSH(ax));	// 23541 push    ax ;~ 0B93:2613
cs=0xb93;eip=0x002614; 	J(CALLF(vector_to_point,0));	// 23542 call    vector_to_point ;~ 0B93:2614
cs=0xb93;eip=0x002619; 	T(ADD(sp, 4));	// 23543 add     sp, 4 ;~ 0B93:2619
cs=0xb93;eip=0x00261c; 	T(ax = bp+var_4a);	// 23544 lea     ax, [bp+var_4A] ;~ 0B93:261C
cs=0xb93;eip=0x00261f; 	X(PUSH(ax));	// 23545 push    ax ;~ 0B93:261F
cs=0xb93;eip=0x002620; 	T(ax = bp+var_1e);	// 23546 lea     ax, [bp+var_1E] ;~ 0B93:2620
cs=0xb93;eip=0x002623; 	X(PUSH(ax));	// 23547 push    ax ;~ 0B93:2623
cs=0xb93;eip=0x002624; 	J(CALLF(vector_to_point,0));	// 23548 call    vector_to_point ;~ 0B93:2624
cs=0xb93;eip=0x002629; 	T(ADD(sp, 4));	// 23549 add     sp, 4 ;~ 0B93:2629
cs=0xb93;eip=0x00262c; 	T(CMP(*(dw*)(raddr(ss,bp+var_4e)), 0x140));	// 23550 cmp     [bp+var_4E], 140h ;~ 0B93:262C
cs=0xb93;eip=0x002631; 	J(JLE(loc_1c558));	// 23551 jle     short loc_1C558 ;~ 0B93:2631
cs=0xb93;eip=0x002633; 	T(CMP(*(dw*)(raddr(ss,bp+var_4a)), 0x140));	// 23552 cmp     [bp+var_4A], 140h ;~ 0B93:2633
cs=0xb93;eip=0x002638; 	J(JLE(loc_1c558));	// 23553 jle     short loc_1C558 ;~ 0B93:2638
cs=0xb93;eip=0x00263a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_48))));	// 23554 mov     ax, [bp+var_48] ;~ 0B93:263A
cs=0xb93;eip=0x00263d; 	T(CMP(*(dw*)(raddr(ss,bp+var_4c)), ax));	// 23555 cmp     [bp+var_4C], ax ;~ 0B93:263D
cs=0xb93;eip=0x002640; 	J(JL(loc_1c4fc));	// 23556 jl      short loc_1C4FC ;~ 0B93:2640
loc_1c552:
	// 5812 
cs=0xb93;eip=0x002642; 	T(MOV(di, skybox_grd_color));	// 23560 mov     di, skybox_grd_color ;~ 0B93:2642
cs=0xb93;eip=0x002646; 	J(JMP(loc_1c500));	// 23561 jmp     short loc_1C500 ;~ 0B93:2646
loc_1c558:
	// 5813 
cs=0xb93;eip=0x002648; 	T(CMP(*(dw*)(raddr(ss,bp+var_4e)), 0));	// 23566 cmp     [bp+var_4E], 0 ;~ 0B93:2648
cs=0xb93;eip=0x00264c; 	J(JGE(loc_1c56e));	// 23567 jge     short loc_1C56E ;~ 0B93:264C
cs=0xb93;eip=0x00264e; 	T(CMP(*(dw*)(raddr(ss,bp+var_4a)), 0));	// 23568 cmp     [bp+var_4A], 0 ;~ 0B93:264E
cs=0xb93;eip=0x002652; 	J(JGE(loc_1c56e));	// 23569 jge     short loc_1C56E ;~ 0B93:2652
cs=0xb93;eip=0x002654; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_48))));	// 23570 mov     ax, [bp+var_48] ;~ 0B93:2654
cs=0xb93;eip=0x002657; 	T(CMP(*(dw*)(raddr(ss,bp+var_4c)), ax));	// 23571 cmp     [bp+var_4C], ax ;~ 0B93:2657
loc_1c56a:
	// 5814 
cs=0xb93;eip=0x00265a; 	J(JLE(loc_1c552));	// 23574 jle     short loc_1C552 ;~ 0B93:265A
cs=0xb93;eip=0x00265c; 	J(JMP(loc_1c4fc));	// 23575 jmp     short loc_1C4FC ;~ 0B93:265C
loc_1c56e:
	// 5815 
cs=0xb93;eip=0x00265e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 23580 mov     bx, [bp+arg_2] ;~ 0B93:265E
cs=0xb93;eip=0x002661; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4c))));	// 23581 mov     ax, [bp+var_4C] ;~ 0B93:2661
cs=0xb93;eip=0x002664; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 23582 cmp     [bx+6], ax ;~ 0B93:2664
cs=0xb93;eip=0x002667; 	J(JGE(loc_1c58a));	// 23583 jge     short loc_1C58A ;~ 0B93:2667
cs=0xb93;eip=0x002669; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_48))));	// 23584 mov     ax, [bp+var_48] ;~ 0B93:2669
cs=0xb93;eip=0x00266c; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 23585 cmp     [bx+6], ax ;~ 0B93:266C
cs=0xb93;eip=0x00266f; 	J(JGE(loc_1c58a));	// 23586 jge     short loc_1C58A ;~ 0B93:266F
cs=0xb93;eip=0x002671; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4a))));	// 23587 mov     ax, [bp+var_4A] ;~ 0B93:2671
cs=0xb93;eip=0x002674; 	T(CMP(*(dw*)(raddr(ss,bp+var_4e)), ax));	// 23588 cmp     [bp+var_4E], ax ;~ 0B93:2674
cs=0xb93;eip=0x002677; 	J(JMP(loc_1c56a));	// 23589 jmp     short loc_1C56A ;~ 0B93:2677
loc_1c58a:
	// 5816 
cs=0xb93;eip=0x00267a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4c))));	// 23595 mov     ax, [bp+var_4C] ;~ 0B93:267A
cs=0xb93;eip=0x00267d; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 23596 cmp     [bx+4], ax ;~ 0B93:267D
cs=0xb93;eip=0x002680; 	J(JLE(loc_1c5a6));	// 23597 jle     short loc_1C5A6 ;~ 0B93:2680
cs=0xb93;eip=0x002682; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_48))));	// 23598 mov     ax, [bp+var_48] ;~ 0B93:2682
cs=0xb93;eip=0x002685; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 23599 cmp     [bx+4], ax ;~ 0B93:2685
cs=0xb93;eip=0x002688; 	J(JLE(loc_1c5a6));	// 23600 jle     short loc_1C5A6 ;~ 0B93:2688
cs=0xb93;eip=0x00268a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4a))));	// 23601 mov     ax, [bp+var_4A] ;~ 0B93:268A
cs=0xb93;eip=0x00268d; 	T(CMP(*(dw*)(raddr(ss,bp+var_4e)), ax));	// 23602 cmp     [bp+var_4E], ax ;~ 0B93:268D
cs=0xb93;eip=0x002690; 	J(JGE(loc_1c552));	// 23603 jge     short loc_1C552 ;~ 0B93:2690
cs=0xb93;eip=0x002692; 	J(JMP(loc_1c4fc));	// 23604 jmp     loc_1C4FC ;~ 0B93:2692
loc_1c5a6:
	// 5817 
cs=0xb93;eip=0x002696; 	X(MOV(*(dw*)(raddr(ss,bp+var_5a)), 0));	// 23610 mov     [bp+var_5A], 0 ;~ 0B93:2696
cs=0xb93;eip=0x00269b; 	T(CMP(timertestflag2, 4));	// 23611 cmp     timertestflag2, 4 ;~ 0B93:269B
cs=0xb93;eip=0x0026a0; 	J(JZ(loc_1c61d));	// 23612 jz      short loc_1C61D ;~ 0B93:26A0
cs=0xb93;eip=0x0026a2; 	T(CMP(*(dw*)(raddr(ss,bp+var_4a)), 0));	// 23613 cmp     [bp+var_4A], 0 ;~ 0B93:26A2
cs=0xb93;eip=0x0026a6; 	J(JGE(loc_1c61d));	// 23614 jge     short loc_1C61D ;~ 0B93:26A6
cs=0xb93;eip=0x0026a8; 	T(CMP(*(dw*)(raddr(ss,bp+var_4e)), 0x140));	// 23615 cmp     [bp+var_4E], 140h ;~ 0B93:26A8
cs=0xb93;eip=0x0026ad; 	J(JLE(loc_1c61d));	// 23616 jle     short loc_1C61D ;~ 0B93:26AD
cs=0xb93;eip=0x0026af; 	T(ax = bp+var_78);	// 23617 lea     ax, [bp+var_78] ;~ 0B93:26AF
cs=0xb93;eip=0x0026b2; 	X(PUSH(ax));	// 23618 push    ax ;~ 0B93:26B2
cs=0xb93;eip=0x0026b3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 23619 push    [bp+var_4C] ;~ 0B93:26B3
cs=0xb93;eip=0x0026b6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 23620 push    [bp+var_4E] ;~ 0B93:26B6
cs=0xb93;eip=0x0026b9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_48))));	// 23621 push    [bp+var_48] ;~ 0B93:26B9
cs=0xb93;eip=0x0026bc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4a))));	// 23622 push    [bp+var_4A] ;~ 0B93:26BC
cs=0xb93;eip=0x0026bf; 	J(CALLF(draw_line_related,0));	// 23623 call    draw_line_related ;~ 0B93:26BF
cs=0xb93;eip=0x0026c4; 	T(ADD(sp, 0x0A));	// 23624 add     sp, 0Ah ;~ 0B93:26C4
cs=0xb93;eip=0x0026c7; 	T(OR(ax, ax));	// 23625 or      ax, ax ;~ 0B93:26C7
cs=0xb93;eip=0x0026c9; 	J(JNZ(loc_1c61d));	// 23626 jnz     short loc_1C61D ;~ 0B93:26C9
cs=0xb93;eip=0x0026cb; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_72))));	// 23627 mov     di, [bp+var_72] ;~ 0B93:26CB
cs=0xb93;eip=0x0026ce; 	T(SUB(di, *(dw*)(raddr(ss,bp+var_6e))));	// 23628 sub     di, [bp+var_6E] ;~ 0B93:26CE
cs=0xb93;eip=0x0026d1; 	J(JNS(loc_1c5ea));	// 23629 jns     short loc_1C5EA ;~ 0B93:26D1
cs=0xb93;eip=0x0026d3; 	T(MOV(ax, di));	// 23630 mov     ax, di ;~ 0B93:26D3
cs=0xb93;eip=0x0026d5; 	T(NEG(ax));	// 23631 neg     ax ;~ 0B93:26D5
cs=0xb93;eip=0x0026d7; 	J(JMP(loc_1c5ec));	// 23632 jmp     short loc_1C5EC ;~ 0B93:26D7
loc_1c5ea:
	// 5818 
cs=0xb93;eip=0x0026da; 	T(MOV(ax, di));	// 23637 mov     ax, di ;~ 0B93:26DA
loc_1c5ec:
	// 5819 
cs=0xb93;eip=0x0026dc; 	T(CMP(ax, 0x60));	// 23640 cmp     ax, 60h ; '`' ;~ 0B93:26DC
cs=0xb93;eip=0x0026df; 	J(JGE(loc_1c61d));	// 23641 jge     short loc_1C61D ;~ 0B93:26DF
cs=0xb93;eip=0x0026e1; 	T(CMP(*(dw*)(raddr(ss,bp+var_76)), 0));	// 23642 cmp     [bp+var_76], 0 ;~ 0B93:26E1
cs=0xb93;eip=0x0026e5; 	J(JNZ(loc_1c602));	// 23643 jnz     short loc_1C602 ;~ 0B93:26E5
cs=0xb93;eip=0x0026e7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_72))));	// 23644 mov     ax, [bp+var_72] ;~ 0B93:26E7
cs=0xb93;eip=0x0026ea; 	X(MOV(*(dw*)(raddr(ss,bp+var_32)), ax));	// 23645 mov     [bp+var_32], ax ;~ 0B93:26EA
cs=0xb93;eip=0x0026ed; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6e))));	// 23646 mov     ax, [bp+var_6E] ;~ 0B93:26ED
cs=0xb93;eip=0x0026f0; 	J(JMP(loc_1c612));	// 23647 jmp     short loc_1C612 ;~ 0B93:26F0
loc_1c602:
	// 5820 
cs=0xb93;eip=0x0026f2; 	T(CMP(*(dw*)(raddr(ss,bp+var_76)), 0x13F));	// 23651 cmp     [bp+var_76], 13Fh ;~ 0B93:26F2
cs=0xb93;eip=0x0026f7; 	J(JNZ(loc_1c61d));	// 23652 jnz     short loc_1C61D ;~ 0B93:26F7
cs=0xb93;eip=0x0026f9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6e))));	// 23653 mov     ax, [bp+var_6E] ;~ 0B93:26F9
cs=0xb93;eip=0x0026fc; 	X(MOV(*(dw*)(raddr(ss,bp+var_32)), ax));	// 23654 mov     [bp+var_32], ax ;~ 0B93:26FC
cs=0xb93;eip=0x0026ff; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_72))));	// 23655 mov     ax, [bp+var_72] ;~ 0B93:26FF
loc_1c612:
	// 5821 
cs=0xb93;eip=0x002702; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_32))));	// 23658 sub     ax, [bp+var_32] ;~ 0B93:2702
cs=0xb93;eip=0x002705; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), ax));	// 23659 mov     [bp+var_26], ax ;~ 0B93:2705
cs=0xb93;eip=0x002708; 	X(MOV(*(dw*)(raddr(ss,bp+var_5a)), 1));	// 23660 mov     [bp+var_5A], 1 ;~ 0B93:2708
loc_1c61d:
	// 5822 
cs=0xb93;eip=0x00270d; 	T(CMP(*(dw*)(raddr(ss,bp+var_5a)), 0));	// 23664 cmp     [bp+var_5A], 0 ;~ 0B93:270D
cs=0xb93;eip=0x002711; 	J(JNZ(loc_1c626));	// 23665 jnz     short loc_1C626 ;~ 0B93:2711
cs=0xb93;eip=0x002713; 	J(JMP(loc_1c852));	// 23666 jmp     loc_1C852 ;~ 0B93:2713
loc_1c626:
	// 5823 
cs=0xb93;eip=0x002716; 	T(CMP(timertestflag_copy, 0));	// 23670 cmp     timertestflag_copy, 0 ;~ 0B93:2716
cs=0xb93;eip=0x00271b; 	J(JNZ(loc_1c630));	// 23671 jnz     short loc_1C630 ;~ 0B93:271B
cs=0xb93;eip=0x00271d; 	J(JMP(loc_1c7b6));	// 23672 jmp     loc_1C7B6 ;~ 0B93:271D
loc_1c630:
	// 5824 
cs=0xb93;eip=0x002720; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), 0));	// 23676 mov     [bp+var_30], 0 ;~ 0B93:2720
cs=0xb93;eip=0x002725; 	X(MOV(rect_skybox, 0));	// 23677 mov     rect_skybox, 0 ;~ 0B93:2725
cs=0xb93;eip=0x00272b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), 0x140));	// 23678 mov     [bp+var_2E], 140h ;~ 0B93:272B
cs=0xb93;eip=0x002730; 	X(MOV(word_44a2e, 0x140));	// 23679 mov     word_44A2E, 140h ;~ 0B93:2730
cs=0xb93;eip=0x002736; 	T(CMP(byte_454a4, 0));	// 23680 cmp     byte_454A4, 0 ;~ 0B93:2736
cs=0xb93;eip=0x00273b; 	J(JZ(loc_1c660));	// 23681 jz      short loc_1C660 ;~ 0B93:273B
cs=0xb93;eip=0x00273d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 23682 mov     bx, [bp+arg_2] ;~ 0B93:273D
cs=0xb93;eip=0x002740; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 23683 mov     ax, [bx+4] ;~ 0B93:2740
cs=0xb93;eip=0x002743; 	X(MOV(word_44a30, ax));	// 23684 mov     word_44A30, ax ;~ 0B93:2743
cs=0xb93;eip=0x002746; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 23685 mov     ax, [bx+6] ;~ 0B93:2746
cs=0xb93;eip=0x002749; 	X(MOV(word_44a32, ax));	// 23686 mov     word_44A32, ax ;~ 0B93:2749
cs=0xb93;eip=0x00274c; 	J(JMP(loc_1c7aa));	// 23687 jmp     loc_1C7AA ;~ 0B93:274C
loc_1c660:
	// 5825 
cs=0xb93;eip=0x002750; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_32))));	// 23692 mov     ax, [bp+var_32] ;~ 0B93:2750
cs=0xb93;eip=0x002753; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_26))));	// 23693 add     ax, [bp+var_26] ;~ 0B93:2753
cs=0xb93;eip=0x002756; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_32))));	// 23694 cmp     ax, [bp+var_32] ;~ 0B93:2756
cs=0xb93;eip=0x002759; 	J(JLE(loc_1c66e));	// 23695 jle     short loc_1C66E ;~ 0B93:2759
cs=0xb93;eip=0x00275b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_32))));	// 23696 mov     ax, [bp+var_32] ;~ 0B93:275B
loc_1c66e:
	// 5826 
cs=0xb93;eip=0x00275e; 	T(SUB(ax, word_454ce));	// 23699 sub     ax, word_454CE ;~ 0B93:275E
cs=0xb93;eip=0x002762; 	X(MOV(word_44a30, ax));	// 23700 mov     word_44A30, ax ;~ 0B93:2762
cs=0xb93;eip=0x002765; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 23701 mov     bx, [bp+arg_2] ;~ 0B93:2765
cs=0xb93;eip=0x002768; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 23702 cmp     [bx+4], ax ;~ 0B93:2768
cs=0xb93;eip=0x00276b; 	J(JLE(loc_1c683));	// 23703 jle     short loc_1C683 ;~ 0B93:276B
cs=0xb93;eip=0x00276d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 23704 mov     ax, [bx+4] ;~ 0B93:276D
cs=0xb93;eip=0x002770; 	X(MOV(word_44a30, ax));	// 23705 mov     word_44A30, ax ;~ 0B93:2770
loc_1c683:
	// 5827 
cs=0xb93;eip=0x002773; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_32))));	// 23708 mov     ax, [bp+var_32] ;~ 0B93:2773
cs=0xb93;eip=0x002776; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_26))));	// 23709 add     ax, [bp+var_26] ;~ 0B93:2776
cs=0xb93;eip=0x002779; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_32))));	// 23710 cmp     ax, [bp+var_32] ;~ 0B93:2779
cs=0xb93;eip=0x00277c; 	J(JGE(loc_1c691));	// 23711 jge     short loc_1C691 ;~ 0B93:277C
cs=0xb93;eip=0x00277e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_32))));	// 23712 mov     ax, [bp+var_32] ;~ 0B93:277E
loc_1c691:
	// 5828 
cs=0xb93;eip=0x002781; 	X(MOV(word_44a32, ax));	// 23715 mov     word_44A32, ax ;~ 0B93:2781
cs=0xb93;eip=0x002784; 	T(SUB(si, si));	// 23716 sub     si, si ;~ 0B93:2784
loc_1c696:
	// 5829 
cs=0xb93;eip=0x002786; 	X(MOV(*((rect_array_unk_indices)+si), 1));	// 23719 mov     rect_array_unk_indices[si], 1 ;~ 0B93:2786
cs=0xb93;eip=0x00278b; 	T(INC(si));	// 23720 inc     si ;~ 0B93:278B
cs=0xb93;eip=0x00278c; 	T(CMP(si, 0x0F));	// 23721 cmp     si, 0Fh ;~ 0B93:278C
cs=0xb93;eip=0x00278f; 	J(JL(loc_1c696));	// 23722 jl      short loc_1C696 ;~ 0B93:278F
cs=0xb93;eip=0x002791; 	X(MOV(*((rect_array_unk_indices)+5), 3));	// 23723 mov     rect_array_unk_indices+5, 3 ;~ 0B93:2791
cs=0xb93;eip=0x002796; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 23724 mov     [bp+var_2C], 0 ;~ 0B93:2796
cs=0xb93;eip=0x00279b; 	T(MOV(ax, word_44a30));	// 23725 mov     ax, word_44A30 ;~ 0B93:279B
cs=0xb93;eip=0x00279e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 23726 mov     [bp+var_2A], ax ;~ 0B93:279E
cs=0xb93;eip=0x0027a1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 23727 push    [bp+arg_2] ;~ 0B93:27A1
cs=0xb93;eip=0x0027a4; 	T(ax = bp+var_30);	// 23728 lea     ax, [bp+var_30] ;~ 0B93:27A4
cs=0xb93;eip=0x0027a7; 	X(PUSH(ax));	// 23729 push    ax ;~ 0B93:27A7
cs=0xb93;eip=0x0027a8; 	J(CALLF(rect_intersect,0));	// 23730 call    rect_intersect ;~ 0B93:27A8
cs=0xb93;eip=0x0027ad; 	T(ADD(sp, 4));	// 23731 add     sp, 4 ;~ 0B93:27AD
cs=0xb93;eip=0x0027b0; 	T(OR(al, al));	// 23732 or      al, al ;~ 0B93:27B0
cs=0xb93;eip=0x0027b2; 	J(JNZ(loc_1c728));	// 23733 jnz     short loc_1C728 ;~ 0B93:27B2
cs=0xb93;eip=0x0027b4; 	X(MOV(rect_array_unk3_length, 0));	// 23734 mov     rect_array_unk3_length, 0 ;~ 0B93:27B4
cs=0xb93;eip=0x0027b9; 	T(MOV(ax, offset(dseg,rect_array_unk3)));	// 23735 mov     ax, offset rect_array_unk3 ;~ 0B93:27B9
cs=0xb93;eip=0x0027bc; 	X(PUSH(ax));	// 23736 push    ax ;~ 0B93:27BC
cs=0xb93;eip=0x0027bd; 	T(MOV(ax, offset(dseg,rect_array_unk3_length)));	// 23737 mov     ax, offset rect_array_unk3_length ;~ 0B93:27BD
cs=0xb93;eip=0x0027c0; 	X(PUSH(ax));	// 23738 push    ax ;~ 0B93:27C0
cs=0xb93;eip=0x0027c1; 	T(ax = bp+var_30);	// 23739 lea     ax, [bp+var_30] ;~ 0B93:27C1
cs=0xb93;eip=0x0027c4; 	X(PUSH(ax));	// 23740 push    ax ;~ 0B93:27C4
cs=0xb93;eip=0x0027c5; 	T(MOV(ax, offset(dseg,rect_unk)));	// 23741 mov     ax, offset rect_unk ;~ 0B93:27C5
cs=0xb93;eip=0x0027c8; 	X(PUSH(ax));	// 23742 push    ax ;~ 0B93:27C8
cs=0xb93;eip=0x0027c9; 	X(PUSH(rectptr_unk));	// 23743 push    rectptr_unk ;~ 0B93:27C9
cs=0xb93;eip=0x0027cd; 	T(MOV(ax, offset(dseg,rect_array_unk_indices)));	// 23744 mov     ax, offset rect_array_unk_indices ;~ 0B93:27CD
cs=0xb93;eip=0x0027d0; 	X(PUSH(ax));	// 23745 push    ax ;~ 0B93:27D0
cs=0xb93;eip=0x0027d1; 	T(MOV(ax, 0x0F));	// 23746 mov     ax, 0Fh         ; number of rects ;~ 0B93:27D1
cs=0xb93;eip=0x0027d4; 	X(PUSH(ax));	// 23747 push    ax ;~ 0B93:27D4
cs=0xb93;eip=0x0027d5; 	J(CALLF(rectlist_add_rects,0));	// 23748 call    rectlist_add_rects ;~ 0B93:27D5
cs=0xb93;eip=0x0027da; 	T(ADD(sp, 0x0E));	// 23749 add     sp, 0Eh ;~ 0B93:27DA
cs=0xb93;eip=0x0027dd; 	T(SUB(di, di));	// 23750 sub     di, di ;~ 0B93:27DD
cs=0xb93;eip=0x0027df; 	J(JMP(loc_1c720));	// 23751 jmp     short loc_1C720 ;~ 0B93:27DF
loc_1c6f2:
	// 5830 
cs=0xb93;eip=0x0027e2; 	T(MOV(ax, di));	// 23756 mov     ax, di ;~ 0B93:27E2
cs=0xb93;eip=0x0027e4; 	T(MOV(cl, 3));	// 23757 mov     cl, 3 ;~ 0B93:27E4
cs=0xb93;eip=0x0027e6; 	T(SHL(ax, cl));	// 23758 shl     ax, cl ;~ 0B93:27E6
cs=0xb93;eip=0x0027e8; 	T(ADD(ax, offset(dseg,rect_array_unk3)));	// 23759 add     ax, offset rect_array_unk3 ;~ 0B93:27E8
cs=0xb93;eip=0x0027eb; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 23760 mov     [bp+var_28], ax ;~ 0B93:27EB
cs=0xb93;eip=0x0027ee; 	T(MOV(bx, ax));	// 23761 mov     bx, ax ;~ 0B93:27EE
cs=0xb93;eip=0x0027f0; 	X(PUSH(*(dw*)(raddr(ds,bx+6))));	// 23762 push    word ptr [bx+6] ;~ 0B93:27F0
cs=0xb93;eip=0x0027f3; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 23763 push    word ptr [bx+4] ;~ 0B93:27F3
cs=0xb93;eip=0x0027f6; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 23764 push    word ptr [bx+2] ;~ 0B93:27F6
cs=0xb93;eip=0x0027f9; 	X(PUSH(*(dw*)(raddr(ds,bx+0))));	// 23765 push    word ptr [bx+0] ;~ 0B93:27F9
cs=0xb93;eip=0x0027fb; 	J(CALLF(sprite_set_1_size,0));	// 23766 call    sprite_set_1_size ;~ 0B93:27FB
cs=0xb93;eip=0x002800; 	T(ADD(sp, 8));	// 23767 add     sp, 8 ;~ 0B93:2800
cs=0xb93;eip=0x002803; 	X(PUSH(skybox_sky_color));	// 23768 push    skybox_sky_color ;~ 0B93:2803
cs=0xb93;eip=0x002807; 	J(CALLF(sprite_clear_1_color,0));	// 23769 call    sprite_clear_1_color ;~ 0B93:2807
cs=0xb93;eip=0x00280c; 	T(ADD(sp, 2));	// 23770 add     sp, 2 ;~ 0B93:280C
cs=0xb93;eip=0x00280f; 	T(INC(di));	// 23771 inc     di ;~ 0B93:280F
loc_1c720:
	// 5831 
cs=0xb93;eip=0x002810; 	T(MOV(al, rect_array_unk3_length));	// 23774 mov     al, rect_array_unk3_length ;~ 0B93:2810
cs=0xb93;eip=0x002813; 	T(CBW);	// 23775 cbw ;~ 0B93:2813
cs=0xb93;eip=0x002814; 	T(CMP(ax, di));	// 23776 cmp     ax, di ;~ 0B93:2814
cs=0xb93;eip=0x002816; 	J(JG(loc_1c6f2));	// 23777 jg      short loc_1C6F2 ;~ 0B93:2816
loc_1c728:
	// 5832 
cs=0xb93;eip=0x002818; 	T(MOV(ax, word_44a32));	// 23780 mov     ax, word_44A32 ;~ 0B93:2818
cs=0xb93;eip=0x00281b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 23781 mov     [bp+var_2C], ax ;~ 0B93:281B
cs=0xb93;eip=0x00281e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), 0x0C8));	// 23782 mov     [bp+var_2A], 0C8h ; 'È' ;~ 0B93:281E
cs=0xb93;eip=0x002823; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 23783 push    [bp+arg_2] ;~ 0B93:2823
cs=0xb93;eip=0x002826; 	T(ax = bp+var_30);	// 23784 lea     ax, [bp+var_30] ;~ 0B93:2826
cs=0xb93;eip=0x002829; 	X(PUSH(ax));	// 23785 push    ax ;~ 0B93:2829
cs=0xb93;eip=0x00282a; 	J(CALLF(rect_intersect,0));	// 23786 call    rect_intersect ;~ 0B93:282A
cs=0xb93;eip=0x00282f; 	T(ADD(sp, 4));	// 23787 add     sp, 4 ;~ 0B93:282F
cs=0xb93;eip=0x002832; 	T(OR(al, al));	// 23788 or      al, al ;~ 0B93:2832
cs=0xb93;eip=0x002834; 	J(JNZ(loc_1c7aa));	// 23789 jnz     short loc_1C7AA ;~ 0B93:2834
cs=0xb93;eip=0x002836; 	X(MOV(rect_array_unk3_length, 0));	// 23790 mov     rect_array_unk3_length, 0 ;~ 0B93:2836
cs=0xb93;eip=0x00283b; 	T(MOV(ax, offset(dseg,rect_array_unk3)));	// 23791 mov     ax, offset rect_array_unk3 ;~ 0B93:283B
cs=0xb93;eip=0x00283e; 	X(PUSH(ax));	// 23792 push    ax ;~ 0B93:283E
cs=0xb93;eip=0x00283f; 	T(MOV(ax, offset(dseg,rect_array_unk3_length)));	// 23793 mov     ax, offset rect_array_unk3_length ;~ 0B93:283F
cs=0xb93;eip=0x002842; 	X(PUSH(ax));	// 23794 push    ax ;~ 0B93:2842
cs=0xb93;eip=0x002843; 	T(ax = bp+var_30);	// 23795 lea     ax, [bp+var_30] ;~ 0B93:2843
cs=0xb93;eip=0x002846; 	X(PUSH(ax));	// 23796 push    ax ;~ 0B93:2846
cs=0xb93;eip=0x002847; 	T(MOV(ax, offset(dseg,rect_unk)));	// 23797 mov     ax, offset rect_unk ;~ 0B93:2847
cs=0xb93;eip=0x00284a; 	X(PUSH(ax));	// 23798 push    ax ;~ 0B93:284A
cs=0xb93;eip=0x00284b; 	X(PUSH(rectptr_unk));	// 23799 push    rectptr_unk ;~ 0B93:284B
cs=0xb93;eip=0x00284f; 	T(MOV(ax, offset(dseg,rect_array_unk_indices)));	// 23800 mov     ax, offset rect_array_unk_indices ;~ 0B93:284F
cs=0xb93;eip=0x002852; 	X(PUSH(ax));	// 23801 push    ax ;~ 0B93:2852
cs=0xb93;eip=0x002853; 	T(MOV(ax, 0x0F));	// 23802 mov     ax, 0Fh         ; number of rects ;~ 0B93:2853
cs=0xb93;eip=0x002856; 	X(PUSH(ax));	// 23803 push    ax ;~ 0B93:2856
cs=0xb93;eip=0x002857; 	J(CALLF(rectlist_add_rects,0));	// 23804 call    rectlist_add_rects ;~ 0B93:2857
cs=0xb93;eip=0x00285c; 	T(ADD(sp, 0x0E));	// 23805 add     sp, 0Eh ;~ 0B93:285C
cs=0xb93;eip=0x00285f; 	T(SUB(di, di));	// 23806 sub     di, di ;~ 0B93:285F
cs=0xb93;eip=0x002861; 	J(JMP(loc_1c7a2));	// 23807 jmp     short loc_1C7A2 ;~ 0B93:2861
loc_1c774:
	// 5833 
cs=0xb93;eip=0x002864; 	T(MOV(ax, di));	// 23812 mov     ax, di ;~ 0B93:2864
cs=0xb93;eip=0x002866; 	T(MOV(cl, 3));	// 23813 mov     cl, 3 ;~ 0B93:2866
cs=0xb93;eip=0x002868; 	T(SHL(ax, cl));	// 23814 shl     ax, cl ;~ 0B93:2868
cs=0xb93;eip=0x00286a; 	T(ADD(ax, offset(dseg,rect_array_unk3)));	// 23815 add     ax, offset rect_array_unk3 ;~ 0B93:286A
cs=0xb93;eip=0x00286d; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 23816 mov     [bp+var_28], ax ;~ 0B93:286D
cs=0xb93;eip=0x002870; 	T(MOV(bx, ax));	// 23817 mov     bx, ax ;~ 0B93:2870
cs=0xb93;eip=0x002872; 	X(PUSH(*(dw*)(raddr(ds,bx+6))));	// 23818 push    word ptr [bx+6] ;~ 0B93:2872
cs=0xb93;eip=0x002875; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 23819 push    word ptr [bx+4] ;~ 0B93:2875
cs=0xb93;eip=0x002878; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 23820 push    word ptr [bx+2] ;~ 0B93:2878
cs=0xb93;eip=0x00287b; 	X(PUSH(*(dw*)(raddr(ds,bx+0))));	// 23821 push    word ptr [bx+0] ;~ 0B93:287B
cs=0xb93;eip=0x00287d; 	J(CALLF(sprite_set_1_size,0));	// 23822 call    sprite_set_1_size ;~ 0B93:287D
cs=0xb93;eip=0x002882; 	T(ADD(sp, 8));	// 23823 add     sp, 8 ;~ 0B93:2882
cs=0xb93;eip=0x002885; 	X(PUSH(skybox_grd_color));	// 23824 push    skybox_grd_color ;~ 0B93:2885
cs=0xb93;eip=0x002889; 	J(CALLF(sprite_clear_1_color,0));	// 23825 call    sprite_clear_1_color ;~ 0B93:2889
cs=0xb93;eip=0x00288e; 	T(ADD(sp, 2));	// 23826 add     sp, 2 ;~ 0B93:288E
cs=0xb93;eip=0x002891; 	T(INC(di));	// 23827 inc     di ;~ 0B93:2891
loc_1c7a2:
	// 5834 
cs=0xb93;eip=0x002892; 	T(MOV(al, rect_array_unk3_length));	// 23830 mov     al, rect_array_unk3_length ;~ 0B93:2892
cs=0xb93;eip=0x002895; 	T(CBW);	// 23831 cbw ;~ 0B93:2895
cs=0xb93;eip=0x002896; 	T(CMP(ax, di));	// 23832 cmp     ax, di ;~ 0B93:2896
cs=0xb93;eip=0x002898; 	J(JG(loc_1c774));	// 23833 jg      short loc_1C774 ;~ 0B93:2898
loc_1c7aa:
	// 5835 
cs=0xb93;eip=0x00289a; 	T(MOV(ax, word_44a30));	// 23837 mov     ax, word_44A30 ;~ 0B93:289A
cs=0xb93;eip=0x00289d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 23838 mov     [bp+var_2C], ax ;~ 0B93:289D
cs=0xb93;eip=0x0028a0; 	T(MOV(ax, word_44a32));	// 23839 mov     ax, word_44A32 ;~ 0B93:28A0
cs=0xb93;eip=0x0028a3; 	J(JMP(loc_1c7c2));	// 23840 jmp     short loc_1C7C2 ;~ 0B93:28A3
loc_1c7b6:
	// 5836 
cs=0xb93;eip=0x0028a6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 23845 mov     bx, [bp+arg_2] ;~ 0B93:28A6
cs=0xb93;eip=0x0028a9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 23846 mov     ax, [bx+4] ;~ 0B93:28A9
cs=0xb93;eip=0x0028ac; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 23847 mov     [bp+var_2C], ax ;~ 0B93:28AC
cs=0xb93;eip=0x0028af; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 23848 mov     ax, [bx+6] ;~ 0B93:28AF
loc_1c7c2:
	// 5837 
cs=0xb93;eip=0x0028b2; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 23851 mov     [bp+var_2A], ax ;~ 0B93:28B2
cs=0xb93;eip=0x0028b5; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), 0));	// 23852 mov     [bp+var_30], 0 ;~ 0B93:28B5
cs=0xb93;eip=0x0028ba; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), 0x140));	// 23853 mov     [bp+var_2E], 140h ;~ 0B93:28BA
cs=0xb93;eip=0x0028bf; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 23854 push    [bp+arg_2] ;~ 0B93:28BF
cs=0xb93;eip=0x0028c2; 	T(ax = bp+var_30);	// 23855 lea     ax, [bp+var_30] ;~ 0B93:28C2
cs=0xb93;eip=0x0028c5; 	X(PUSH(ax));	// 23856 push    ax ;~ 0B93:28C5
cs=0xb93;eip=0x0028c6; 	J(CALLF(rect_intersect,0));	// 23857 call    rect_intersect ;~ 0B93:28C6
cs=0xb93;eip=0x0028cb; 	T(ADD(sp, 4));	// 23858 add     sp, 4 ;~ 0B93:28CB
cs=0xb93;eip=0x0028ce; 	T(OR(al, al));	// 23859 or      al, al ;~ 0B93:28CE
cs=0xb93;eip=0x0028d0; 	J(JZ(loc_1c7e5));	// 23860 jz      short loc_1C7E5 ;~ 0B93:28D0
cs=0xb93;eip=0x0028d2; 	J(JMP(loc_1cb77));	// 23861 jmp     loc_1CB77 ;~ 0B93:28D2
loc_1c7e5:
	// 5838 
cs=0xb93;eip=0x0028d5; 	X(MOV(*(dw*)(raddr(ss,bp+var_34)), 0));	// 23865 mov     [bp+var_34], 0 ;~ 0B93:28D5
cs=0xb93;eip=0x0028da; 	T(CMP(*(dw*)(raddr(ss,bp+var_26)), 0));	// 23866 cmp     [bp+var_26], 0 ;~ 0B93:28DA
cs=0xb93;eip=0x0028de; 	J(JGE(loc_1c7f8));	// 23867 jge     short loc_1C7F8 ;~ 0B93:28DE
cs=0xb93;eip=0x0028e0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_26))));	// 23868 mov     ax, [bp+var_26] ;~ 0B93:28E0
cs=0xb93;eip=0x0028e3; 	T(NEG(ax));	// 23869 neg     ax ;~ 0B93:28E3
cs=0xb93;eip=0x0028e5; 	J(JMP(loc_1c7fb));	// 23870 jmp     short loc_1C7FB ;~ 0B93:28E5
loc_1c7f8:
	// 5839 
cs=0xb93;eip=0x0028e8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_26))));	// 23875 mov     ax, [bp+var_26] ;~ 0B93:28E8
loc_1c7fb:
	// 5840 
cs=0xb93;eip=0x0028eb; 	T(MOV(di, ax));	// 23878 mov     di, ax ;~ 0B93:28EB
cs=0xb93;eip=0x0028ed; 	T(INC(di));	// 23879 inc     di ;~ 0B93:28ED
cs=0xb93;eip=0x0028ee; 	T(CMP(di, 0x20));	// 23880 cmp     di, 20h ; ' ' ;~ 0B93:28EE
cs=0xb93;eip=0x0028f1; 	J(JLE(loc_1c806));	// 23881 jle     short loc_1C806 ;~ 0B93:28F1
cs=0xb93;eip=0x0028f3; 	T(MOV(di, 0x20));	// 23882 mov     di, 20h ; ' ' ;~ 0B93:28F3
loc_1c806:
	// 5841 
cs=0xb93;eip=0x0028f6; 	T(SUB(si, si));	// 23885 sub     si, si ;~ 0B93:28F6
cs=0xb93;eip=0x0028f8; 	J(JMP(loc_1c84b));	// 23886 jmp     short loc_1C84B ;~ 0B93:28F8
loc_1c80a:
	// 5842 
cs=0xb93;eip=0x0028fa; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_34))));	// 23890 mov     ax, [bp+var_34] ;~ 0B93:28FA
cs=0xb93;eip=0x0028fd; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 23891 mov     [bp+var_30], ax ;~ 0B93:28FD
cs=0xb93;eip=0x002900; 	T(MOV(ax, 0x140));	// 23892 mov     ax, 140h ;~ 0B93:2900
cs=0xb93;eip=0x002903; 	T(IMUL1_2(si));	// 23893 imul    si ;~ 0B93:2903
cs=0xb93;eip=0x002905; 	T(ADD(ax, 0x140));	// 23894 add     ax, 140h ;~ 0B93:2905
cs=0xb93;eip=0x002908; 	T(CWD);	// 23895 cwd ;~ 0B93:2908
cs=0xb93;eip=0x002909; 	T(IDIV2(di));	// 23896 idiv    di ;~ 0B93:2909
cs=0xb93;eip=0x00290b; 	T(AND(ax, video_flag3_isffff));	// 23897 and     ax, video_flag3_isFFFF ;~ 0B93:290B
cs=0xb93;eip=0x00290f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 23898 mov     [bp+var_2E], ax ;~ 0B93:290F
cs=0xb93;eip=0x002912; 	T(CMP(*(dw*)(raddr(ss,bp+var_30)), ax));	// 23899 cmp     [bp+var_30], ax ;~ 0B93:2912
cs=0xb93;eip=0x002915; 	J(JZ(loc_1c84a));	// 23900 jz      short loc_1C84A ;~ 0B93:2915
cs=0xb93;eip=0x002917; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_26))));	// 23901 mov     ax, [bp+var_26] ;~ 0B93:2917
cs=0xb93;eip=0x00291a; 	T(IMUL1_2(si));	// 23902 imul    si ;~ 0B93:291A
cs=0xb93;eip=0x00291c; 	T(CWD);	// 23903 cwd ;~ 0B93:291C
cs=0xb93;eip=0x00291d; 	T(IDIV2(di));	// 23904 idiv    di ;~ 0B93:291D
cs=0xb93;eip=0x00291f; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_32))));	// 23905 add     ax, [bp+var_32] ;~ 0B93:291F
cs=0xb93;eip=0x002922; 	X(MOV(*(dw*)(raddr(ss,bp+var_50)), ax));	// 23906 mov     [bp+var_50], ax ;~ 0B93:2922
cs=0xb93;eip=0x002925; 	X(PUSH(ax));	// 23907 push    ax ;~ 0B93:2925
cs=0xb93;eip=0x002926; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 23908 push    [bp+arg_A] ;~ 0B93:2926
cs=0xb93;eip=0x002929; 	T(ax = bp+var_30);	// 23909 lea     ax, [bp+var_30] ;~ 0B93:2929
cs=0xb93;eip=0x00292c; 	X(PUSH(ax));	// 23910 push    ax ;~ 0B93:292C
cs=0xb93;eip=0x00292d; 	X(PUSH(cs));	// 23911 push    cs ;~ 0B93:292D
cs=0xb93;eip=0x00292e; 	J(CALL(skybox_op_helper2,0));	// 23912 call    near ptr skybox_op_helper2 ;~ 0B93:292E
cs=0xb93;eip=0x002931; 	T(ADD(sp, 6));	// 23913 add     sp, 6 ;~ 0B93:2931
cs=0xb93;eip=0x002934; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2e))));	// 23914 mov     ax, [bp+var_2E] ;~ 0B93:2934
cs=0xb93;eip=0x002937; 	X(MOV(*(dw*)(raddr(ss,bp+var_34)), ax));	// 23915 mov     [bp+var_34], ax ;~ 0B93:2937
loc_1c84a:
	// 5843 
cs=0xb93;eip=0x00293a; 	T(INC(si));	// 23918 inc     si ;~ 0B93:293A
loc_1c84b:
	// 5844 
cs=0xb93;eip=0x00293b; 	T(CMP(si, di));	// 23921 cmp     si, di ;~ 0B93:293B
cs=0xb93;eip=0x00293d; 	J(JL(loc_1c80a));	// 23922 jl      short loc_1C80A ;~ 0B93:293D
cs=0xb93;eip=0x00293f; 	J(JMP(loc_1cb77));	// 23923 jmp     loc_1CB77 ;~ 0B93:293F
loc_1c852:
	// 5845 
cs=0xb93;eip=0x002942; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4c))));	// 23927 mov     ax, [bp+var_4C] ;~ 0B93:2942
cs=0xb93;eip=0x002945; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_48))));	// 23928 sub     ax, [bp+var_48] ;~ 0B93:2945
cs=0xb93;eip=0x002948; 	X(PUSH(ax));	// 23929 push    ax ;~ 0B93:2948
cs=0xb93;eip=0x002949; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4e))));	// 23930 mov     ax, [bp+var_4E] ;~ 0B93:2949
cs=0xb93;eip=0x00294c; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4a))));	// 23931 sub     ax, [bp+var_4A] ;~ 0B93:294C
cs=0xb93;eip=0x00294f; 	X(PUSH(ax));	// 23932 push    ax ;~ 0B93:294F
cs=0xb93;eip=0x002950; 	J(CALLF(polarangle,0));	// 23933 call    polarAngle ;~ 0B93:2950
cs=0xb93;eip=0x002955; 	T(ADD(sp, 4));	// 23934 add     sp, 4 ;~ 0B93:2955
cs=0xb93;eip=0x002958; 	T(MOV(si, ax));	// 23935 mov     si, ax ;~ 0B93:2958
cs=0xb93;eip=0x00295a; 	T(AND(si, 0x3FF));	// 23936 and     si, 3FFh ;~ 0B93:295A
cs=0xb93;eip=0x00295e; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), 2));	// 23937 mov     [bp+var_26], 2 ;~ 0B93:295E
cs=0xb93;eip=0x002963; 	J(JMP(loc_1c8f0));	// 23938 jmp     short loc_1C8F0 ;~ 0B93:2963
loc_1c876:
	// 5846 
cs=0xb93;eip=0x002966; 	T(MOV(di, 1));	// 23943 mov     di, 1 ;~ 0B93:2966
loc_1c879:
	// 5847 
cs=0xb93;eip=0x002969; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_26))));	// 23946 mov     bx, [bp+var_26] ;~ 0B93:2969
cs=0xb93;eip=0x00296c; 	T(SHL(bx, 1));	// 23947 shl     bx, 1 ;~ 0B93:296C
cs=0xb93;eip=0x00296e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x98C))));	// 23948 mov     ax, [bx+98Ch] ;~ 0B93:296E
cs=0xb93;eip=0x002972; 	T(ADD(ax, si));	// 23949 add     ax, si ;~ 0B93:2972
cs=0xb93;eip=0x002974; 	X(PUSH(ax));	// 23950 push    ax ;~ 0B93:2974
cs=0xb93;eip=0x002975; 	J(CALLF(sin_fast,0));	// 23951 call    sin_fast ;~ 0B93:2975
cs=0xb93;eip=0x00297a; 	T(ADD(sp, 2));	// 23952 add     sp, 2 ;~ 0B93:297A
cs=0xb93;eip=0x00297d; 	X(PUSH(ax));	// 23953 push    ax ;~ 0B93:297D
cs=0xb93;eip=0x00297e; 	T(MOV(ax, 0x3E80));	// 23954 mov     ax, 3E80h ;~ 0B93:297E
cs=0xb93;eip=0x002981; 	X(PUSH(ax));	// 23955 push    ax ;~ 0B93:2981
cs=0xb93;eip=0x002982; 	J(CALLF(multiply_and_scale,0));	// 23956 call    multiply_and_scale ;~ 0B93:2982
cs=0xb93;eip=0x002987; 	T(ADD(sp, 4));	// 23957 add     sp, 4 ;~ 0B93:2987
cs=0xb93;eip=0x00298a; 	T(MOV(bx, di));	// 23958 mov     bx, di ;~ 0B93:298A
cs=0xb93;eip=0x00298c; 	T(SHL(bx, 1));	// 23959 shl     bx, 1 ;~ 0B93:298C
cs=0xb93;eip=0x00298e; 	T(SHL(bx, 1));	// 23960 shl     bx, 1 ;~ 0B93:298E
cs=0xb93;eip=0x002990; 	T(ADD(bx, bp));	// 23961 add     bx, bp ;~ 0B93:2990
cs=0xb93;eip=0x002992; 	T(MOV(cx, *(dw*)(raddr(ds,bx-0x4E))));	// 23962 mov     cx, [bx-4Eh] ;~ 0B93:2992
cs=0xb93;eip=0x002995; 	T(ADD(cx, ax));	// 23963 add     cx, ax ;~ 0B93:2995
cs=0xb93;eip=0x002997; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_26))));	// 23964 mov     bx, [bp+var_26] ;~ 0B93:2997
cs=0xb93;eip=0x00299a; 	T(SHL(bx, 1));	// 23965 shl     bx, 1 ;~ 0B93:299A
cs=0xb93;eip=0x00299c; 	T(SHL(bx, 1));	// 23966 shl     bx, 1 ;~ 0B93:299C
cs=0xb93;eip=0x00299e; 	T(ADD(bx, bp));	// 23967 add     bx, bp ;~ 0B93:299E
cs=0xb93;eip=0x0029a0; 	X(MOV(*(dw*)(raddr(ds,bx-0x4E)), cx));	// 23968 mov     [bx-4Eh], cx ;~ 0B93:29A0
cs=0xb93;eip=0x0029a3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_26))));	// 23969 mov     bx, [bp+var_26] ;~ 0B93:29A3
cs=0xb93;eip=0x0029a6; 	T(SHL(bx, 1));	// 23970 shl     bx, 1 ;~ 0B93:29A6
cs=0xb93;eip=0x0029a8; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x98C))));	// 23971 mov     ax, [bx+98Ch] ;~ 0B93:29A8
cs=0xb93;eip=0x0029ac; 	T(ADD(ax, si));	// 23972 add     ax, si ;~ 0B93:29AC
cs=0xb93;eip=0x0029ae; 	X(PUSH(ax));	// 23973 push    ax ;~ 0B93:29AE
cs=0xb93;eip=0x0029af; 	J(CALLF(cos_fast,0));	// 23974 call    cos_fast ;~ 0B93:29AF
cs=0xb93;eip=0x0029b4; 	T(ADD(sp, 2));	// 23975 add     sp, 2 ;~ 0B93:29B4
cs=0xb93;eip=0x0029b7; 	X(PUSH(ax));	// 23976 push    ax ;~ 0B93:29B7
cs=0xb93;eip=0x0029b8; 	T(MOV(ax, 0x3E80));	// 23977 mov     ax, 3E80h ;~ 0B93:29B8
cs=0xb93;eip=0x0029bb; 	X(PUSH(ax));	// 23978 push    ax ;~ 0B93:29BB
cs=0xb93;eip=0x0029bc; 	J(CALLF(multiply_and_scale,0));	// 23979 call    multiply_and_scale ;~ 0B93:29BC
cs=0xb93;eip=0x0029c1; 	T(ADD(sp, 4));	// 23980 add     sp, 4 ;~ 0B93:29C1
cs=0xb93;eip=0x0029c4; 	T(MOV(bx, di));	// 23981 mov     bx, di ;~ 0B93:29C4
cs=0xb93;eip=0x0029c6; 	T(SHL(bx, 1));	// 23982 shl     bx, 1 ;~ 0B93:29C6
cs=0xb93;eip=0x0029c8; 	T(SHL(bx, 1));	// 23983 shl     bx, 1 ;~ 0B93:29C8
cs=0xb93;eip=0x0029ca; 	T(ADD(bx, bp));	// 23984 add     bx, bp ;~ 0B93:29CA
cs=0xb93;eip=0x0029cc; 	T(MOV(cx, *(dw*)(raddr(ds,bx-0x4C))));	// 23985 mov     cx, [bx-4Ch] ;~ 0B93:29CC
cs=0xb93;eip=0x0029cf; 	T(ADD(cx, ax));	// 23986 add     cx, ax ;~ 0B93:29CF
cs=0xb93;eip=0x0029d1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_26))));	// 23987 mov     bx, [bp+var_26] ;~ 0B93:29D1
cs=0xb93;eip=0x0029d4; 	T(SHL(bx, 1));	// 23988 shl     bx, 1 ;~ 0B93:29D4
cs=0xb93;eip=0x0029d6; 	T(SHL(bx, 1));	// 23989 shl     bx, 1 ;~ 0B93:29D6
cs=0xb93;eip=0x0029d8; 	T(ADD(bx, bp));	// 23990 add     bx, bp ;~ 0B93:29D8
cs=0xb93;eip=0x0029da; 	X(MOV(*(dw*)(raddr(ds,bx-0x4C)), cx));	// 23991 mov     [bx-4Ch], cx ;~ 0B93:29DA
cs=0xb93;eip=0x0029dd; 	X(INC(*(dw*)(raddr(ss,bp+var_26))));	// 23992 inc     [bp+var_26] ;~ 0B93:29DD
loc_1c8f0:
	// 5848 
cs=0xb93;eip=0x0029e0; 	T(CMP(*(dw*)(raddr(ss,bp+var_26)), 6));	// 23995 cmp     [bp+var_26], 6 ;~ 0B93:29E0
cs=0xb93;eip=0x0029e4; 	J(JGE(loc_1c904));	// 23996 jge     short loc_1C904 ;~ 0B93:29E4
cs=0xb93;eip=0x0029e6; 	T(CMP(*(dw*)(raddr(ss,bp+var_26)), 4));	// 23997 cmp     [bp+var_26], 4 ;~ 0B93:29E6
cs=0xb93;eip=0x0029ea; 	J(JL(loc_1c8ff));	// 23998 jl      short loc_1C8FF ;~ 0B93:29EA
cs=0xb93;eip=0x0029ec; 	J(JMP(loc_1c876));	// 23999 jmp     loc_1C876 ;~ 0B93:29EC
loc_1c8ff:
	// 5849 
cs=0xb93;eip=0x0029ef; 	T(SUB(di, di));	// 24003 sub     di, di ;~ 0B93:29EF
cs=0xb93;eip=0x0029f1; 	J(JMP(loc_1c879));	// 24004 jmp     loc_1C879 ;~ 0B93:29F1
loc_1c904:
	// 5850 
cs=0xb93;eip=0x0029f4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_44))));	// 24008 push    [bp+var_44] ;~ 0B93:29F4
cs=0xb93;eip=0x0029f7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_46))));	// 24009 push    [bp+var_46] ;~ 0B93:29F7
cs=0xb93;eip=0x0029fa; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40))));	// 24010 push    [bp+var_40] ;~ 0B93:29FA
cs=0xb93;eip=0x0029fd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_42))));	// 24011 push    [bp+var_42] ;~ 0B93:29FD
cs=0xb93;eip=0x002a00; 	X(PUSH(*(dw*)(raddr(ss,bp+var_48))));	// 24012 push    [bp+var_48] ;~ 0B93:2A00
cs=0xb93;eip=0x002a03; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4a))));	// 24013 push    [bp+var_4A] ;~ 0B93:2A03
cs=0xb93;eip=0x002a06; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 24014 push    [bp+var_4C] ;~ 0B93:2A06
cs=0xb93;eip=0x002a09; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 24015 push    [bp+var_4E] ;~ 0B93:2A09
cs=0xb93;eip=0x002a0c; 	T(MOV(ax, 4));	// 24016 mov     ax, 4 ;~ 0B93:2A0C
cs=0xb93;eip=0x002a0f; 	X(PUSH(ax));	// 24017 push    ax ;~ 0B93:2A0F
cs=0xb93;eip=0x002a10; 	X(PUSH(skybox_sky_color));	// 24018 push    skybox_sky_color ;~ 0B93:2A10
cs=0xb93;eip=0x002a14; 	J(CALLF(skybox_op_helper,0));	// 24019 call    skybox_op_helper ;~ 0B93:2A14
cs=0xb93;eip=0x002a19; 	T(ADD(sp, 0x14));	// 24020 add     sp, 14h ;~ 0B93:2A19
cs=0xb93;eip=0x002a1c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 24021 push    [bp+var_38] ;~ 0B93:2A1C
cs=0xb93;eip=0x002a1f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 24022 push    [bp+var_3A] ;~ 0B93:2A1F
cs=0xb93;eip=0x002a22; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3c))));	// 24023 push    [bp+var_3C] ;~ 0B93:2A22
cs=0xb93;eip=0x002a25; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3e))));	// 24024 push    [bp+var_3E] ;~ 0B93:2A25
cs=0xb93;eip=0x002a28; 	X(PUSH(*(dw*)(raddr(ss,bp+var_48))));	// 24025 push    [bp+var_48] ;~ 0B93:2A28
cs=0xb93;eip=0x002a2b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4a))));	// 24026 push    [bp+var_4A] ;~ 0B93:2A2B
cs=0xb93;eip=0x002a2e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 24027 push    [bp+var_4C] ;~ 0B93:2A2E
cs=0xb93;eip=0x002a31; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 24028 push    [bp+var_4E] ;~ 0B93:2A31
cs=0xb93;eip=0x002a34; 	T(MOV(ax, 4));	// 24029 mov     ax, 4 ;~ 0B93:2A34
cs=0xb93;eip=0x002a37; 	X(PUSH(ax));	// 24030 push    ax ;~ 0B93:2A37
cs=0xb93;eip=0x002a38; 	X(PUSH(skybox_grd_color));	// 24031 push    skybox_grd_color ;~ 0B93:2A38
cs=0xb93;eip=0x002a3c; 	J(CALLF(skybox_op_helper,0));	// 24032 call    skybox_op_helper ;~ 0B93:2A3C
cs=0xb93;eip=0x002a41; 	T(ADD(sp, 0x14));	// 24033 add     sp, 14h ;~ 0B93:2A41
cs=0xb93;eip=0x002a44; 	J(JMP(loc_1cb72));	// 24034 jmp     loc_1CB72 ;~ 0B93:2A44
loc_1c958:
	// 5851 
cs=0xb93;eip=0x002a48; 	X(MOV(*(dw*)(raddr(ss,bp+var_58)), 0));	// 24039 mov     [bp+var_58], 0 ;~ 0B93:2A48
cs=0xb93;eip=0x002a4d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_c))));	// 24040 mov     ax, [bp+arg_C] ;~ 0B93:2A4D
cs=0xb93;eip=0x002a50; 	T(NEG(ax));	// 24041 neg     ax ;~ 0B93:2A50
cs=0xb93;eip=0x002a52; 	X(MOV(*(dw*)(raddr(ss,bp+var_56)), ax));	// 24042 mov     [bp+var_56], ax ;~ 0B93:2A52
cs=0xb93;eip=0x002a55; 	T(MOV(ax, 0x3A98));	// 24043 mov     ax, 3A98h ;~ 0B93:2A55
cs=0xb93;eip=0x002a58; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_4))));	// 24044 imul    [bp+arg_4] ;~ 0B93:2A58
cs=0xb93;eip=0x002a5b; 	X(MOV(*(dw*)(raddr(ss,bp+var_54)), ax));	// 24045 mov     [bp+var_54], ax ;~ 0B93:2A5B
cs=0xb93;eip=0x002a5e; 	T(ax = bp+var_24);	// 24046 lea     ax, [bp+var_24] ;~ 0B93:2A5E
cs=0xb93;eip=0x002a61; 	X(PUSH(ax));	// 24047 push    ax ;~ 0B93:2A61
cs=0xb93;eip=0x002a62; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 24048 push    [bp+arg_6] ;~ 0B93:2A62
cs=0xb93;eip=0x002a65; 	T(ax = bp+var_58);	// 24049 lea     ax, [bp+var_58] ;~ 0B93:2A65
cs=0xb93;eip=0x002a68; 	X(PUSH(ax));	// 24050 push    ax ;~ 0B93:2A68
cs=0xb93;eip=0x002a69; 	J(CALLF(mat_mul_vector,0));	// 24051 call    mat_mul_vector ;~ 0B93:2A69
cs=0xb93;eip=0x002a6e; 	T(ADD(sp, 6));	// 24052 add     sp, 6 ;~ 0B93:2A6E
cs=0xb93;eip=0x002a71; 	T(CMP(*(dw*)(raddr(ss,bp+var_20)), 0));	// 24053 cmp     [bp+var_20], 0 ;~ 0B93:2A71
cs=0xb93;eip=0x002a75; 	J(JGE(loc_1c9c0));	// 24054 jge     short loc_1C9C0 ;~ 0B93:2A75
cs=0xb93;eip=0x002a77; 	X(PUSH(skybox_sky_color));	// 24055 push    skybox_sky_color ;~ 0B93:2A77
cs=0xb93;eip=0x002a7b; 	J(CALLF(sprite_clear_1_color,0));	// 24056 call    sprite_clear_1_color ;~ 0B93:2A7B
cs=0xb93;eip=0x002a80; 	T(ADD(sp, 2));	// 24057 add     sp, 2 ;~ 0B93:2A80
cs=0xb93;eip=0x002a83; 	T(CMP(timertestflag_copy, 0));	// 24058 cmp     timertestflag_copy, 0 ;~ 0B93:2A83
cs=0xb93;eip=0x002a88; 	J(JNZ(loc_1c99d));	// 24059 jnz     short loc_1C99D ;~ 0B93:2A88
cs=0xb93;eip=0x002a8a; 	J(JMP(loc_1cb77));	// 24060 jmp     loc_1CB77 ;~ 0B93:2A8A
loc_1c99d:
	// 5852 
cs=0xb93;eip=0x002a8d; 	X(MOV(*(dw*)(raddr(ss,bp+var_5c)), 1));	// 24064 mov     [bp+var_5C], 1 ;~ 0B93:2A8D
cs=0xb93;eip=0x002a92; 	X(MOV(rect_skybox, 0));	// 24065 mov     rect_skybox, 0 ;~ 0B93:2A92
cs=0xb93;eip=0x002a98; 	X(MOV(word_44a2e, 0x140));	// 24066 mov     word_44A2E, 140h ;~ 0B93:2A98
cs=0xb93;eip=0x002a9e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 24067 mov     bx, [bp+arg_2] ;~ 0B93:2A9E
cs=0xb93;eip=0x002aa1; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 24068 mov     ax, [bx+4] ;~ 0B93:2AA1
cs=0xb93;eip=0x002aa4; 	X(MOV(word_44a30, ax));	// 24069 mov     word_44A30, ax ;~ 0B93:2AA4
cs=0xb93;eip=0x002aa7; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 24070 mov     ax, [bx+6] ;~ 0B93:2AA7
cs=0xb93;eip=0x002aaa; 	X(MOV(word_44a32, ax));	// 24071 mov     word_44A32, ax ;~ 0B93:2AAA
cs=0xb93;eip=0x002aad; 	J(JMP(loc_1cb77));	// 24072 jmp     loc_1CB77 ;~ 0B93:2AAD
loc_1c9c0:
	// 5853 
cs=0xb93;eip=0x002ab0; 	T(ax = bp+var_4e);	// 24076 lea     ax, [bp+var_4E] ;~ 0B93:2AB0
cs=0xb93;eip=0x002ab3; 	X(PUSH(ax));	// 24077 push    ax ;~ 0B93:2AB3
cs=0xb93;eip=0x002ab4; 	T(ax = bp+var_24);	// 24078 lea     ax, [bp+var_24] ;~ 0B93:2AB4
cs=0xb93;eip=0x002ab7; 	X(PUSH(ax));	// 24079 push    ax ;~ 0B93:2AB7
cs=0xb93;eip=0x002ab8; 	J(CALLF(vector_to_point,0));	// 24080 call    vector_to_point ;~ 0B93:2AB8
cs=0xb93;eip=0x002abd; 	T(ADD(sp, 4));	// 24081 add     sp, 4 ;~ 0B93:2ABD
cs=0xb93;eip=0x002ac0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4c))));	// 24082 mov     ax, [bp+var_4C] ;~ 0B93:2AC0
cs=0xb93;eip=0x002ac3; 	X(MOV(*(dw*)(raddr(ss,bp+var_50)), ax));	// 24083 mov     [bp+var_50], ax ;~ 0B93:2AC3
cs=0xb93;eip=0x002ac6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 24084 mov     bx, [bp+arg_2] ;~ 0B93:2AC6
cs=0xb93;eip=0x002ac9; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 24085 cmp     [bx+4], ax ;~ 0B93:2AC9
cs=0xb93;eip=0x002acc; 	J(JLE(loc_1c9e4));	// 24086 jle     short loc_1C9E4 ;~ 0B93:2ACC
cs=0xb93;eip=0x002ace; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 24087 mov     ax, [bx+4] ;~ 0B93:2ACE
cs=0xb93;eip=0x002ad1; 	X(MOV(*(dw*)(raddr(ss,bp+var_50)), ax));	// 24088 mov     [bp+var_50], ax ;~ 0B93:2AD1
loc_1c9e4:
	// 5854 
cs=0xb93;eip=0x002ad4; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 1));	// 24091 cmp     [bp+arg_4], 1 ;~ 0B93:2AD4
cs=0xb93;eip=0x002ad8; 	J(JZ(loc_1c9ed));	// 24092 jz      short loc_1C9ED ;~ 0B93:2AD8
cs=0xb93;eip=0x002ada; 	J(JMP(loc_1cb00));	// 24093 jmp     loc_1CB00 ;~ 0B93:2ADA
loc_1c9ed:
	// 5855 
cs=0xb93;eip=0x002add; 	T(CMP(timertestflag_copy, 0));	// 24097 cmp     timertestflag_copy, 0 ;~ 0B93:2ADD
cs=0xb93;eip=0x002ae2; 	J(JZ(loc_1ca25));	// 24098 jz      short loc_1CA25 ;~ 0B93:2AE2
cs=0xb93;eip=0x002ae4; 	T(CMP(timertestflag2, 4));	// 24099 cmp     timertestflag2, 4 ;~ 0B93:2AE4
cs=0xb93;eip=0x002ae9; 	J(JNZ(loc_1ca02));	// 24100 jnz     short loc_1CA02 ;~ 0B93:2AE9
cs=0xb93;eip=0x002aeb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_50))));	// 24101 mov     ax, [bp+var_50] ;~ 0B93:2AEB
cs=0xb93;eip=0x002aee; 	T(DEC(ax));	// 24102 dec     ax ;~ 0B93:2AEE
cs=0xb93;eip=0x002aef; 	J(JMP(loc_1ca09));	// 24103 jmp     short loc_1CA09 ;~ 0B93:2AEF
loc_1ca02:
	// 5856 
cs=0xb93;eip=0x002af2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_50))));	// 24108 mov     ax, [bp+var_50] ;~ 0B93:2AF2
cs=0xb93;eip=0x002af5; 	T(SUB(ax, word_454ce));	// 24109 sub     ax, word_454CE ;~ 0B93:2AF5
loc_1ca09:
	// 5857 
cs=0xb93;eip=0x002af9; 	X(MOV(word_44a30, ax));	// 24112 mov     word_44A30, ax ;~ 0B93:2AF9
cs=0xb93;eip=0x002afc; 	X(MOV(rect_skybox, 0));	// 24113 mov     rect_skybox, 0 ;~ 0B93:2AFC
cs=0xb93;eip=0x002b02; 	X(MOV(word_44a2e, 0x140));	// 24114 mov     word_44A2E, 140h ;~ 0B93:2B02
cs=0xb93;eip=0x002b08; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_50))));	// 24115 mov     ax, [bp+var_50] ;~ 0B93:2B08
cs=0xb93;eip=0x002b0b; 	X(MOV(word_44a32, ax));	// 24116 mov     word_44A32, ax ;~ 0B93:2B0B
cs=0xb93;eip=0x002b0e; 	T(CMP(byte_454a4, 0));	// 24117 cmp     byte_454A4, 0 ;~ 0B93:2B0E
cs=0xb93;eip=0x002b13; 	J(JZ(loc_1ca52));	// 24118 jz      short loc_1CA52 ;~ 0B93:2B13
loc_1ca25:
	// 5858 
cs=0xb93;eip=0x002b15; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), 0));	// 24121 mov     [bp+var_30], 0 ;~ 0B93:2B15
cs=0xb93;eip=0x002b1a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), 0x140));	// 24122 mov     [bp+var_2E], 140h ;~ 0B93:2B1A
cs=0xb93;eip=0x002b1f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 24123 mov     bx, [bp+arg_2] ;~ 0B93:2B1F
cs=0xb93;eip=0x002b22; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 24124 mov     ax, [bx+4] ;~ 0B93:2B22
cs=0xb93;eip=0x002b25; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 24125 mov     [bp+var_2C], ax ;~ 0B93:2B25
cs=0xb93;eip=0x002b28; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 24126 mov     ax, [bx+6] ;~ 0B93:2B28
cs=0xb93;eip=0x002b2b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 24127 mov     [bp+var_2A], ax ;~ 0B93:2B2B
cs=0xb93;eip=0x002b2e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_50))));	// 24128 push    [bp+var_50] ;~ 0B93:2B2E
cs=0xb93;eip=0x002b31; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 24129 push    [bp+arg_A] ;~ 0B93:2B31
cs=0xb93;eip=0x002b34; 	T(ax = bp+var_30);	// 24130 lea     ax, [bp+var_30] ;~ 0B93:2B34
cs=0xb93;eip=0x002b37; 	X(PUSH(ax));	// 24131 push    ax ;~ 0B93:2B37
cs=0xb93;eip=0x002b38; 	X(PUSH(cs));	// 24132 push    cs ;~ 0B93:2B38
cs=0xb93;eip=0x002b39; 	J(CALL(skybox_op_helper2,0));	// 24133 call    near ptr skybox_op_helper2 ;~ 0B93:2B39
cs=0xb93;eip=0x002b3c; 	T(ADD(sp, 6));	// 24134 add     sp, 6 ;~ 0B93:2B3C
cs=0xb93;eip=0x002b3f; 	J(JMP(loc_1cb77));	// 24135 jmp     loc_1CB77 ;~ 0B93:2B3F
loc_1ca52:
	// 5859 
cs=0xb93;eip=0x002b42; 	T(SUB(si, si));	// 24139 sub     si, si ;~ 0B93:2B42
loc_1ca54:
	// 5860 
cs=0xb93;eip=0x002b44; 	X(MOV(*((rect_array_unk_indices)+si), 1));	// 24142 mov     rect_array_unk_indices[si], 1 ;~ 0B93:2B44
cs=0xb93;eip=0x002b49; 	T(INC(si));	// 24143 inc     si ;~ 0B93:2B49
cs=0xb93;eip=0x002b4a; 	T(CMP(si, 0x0F));	// 24144 cmp     si, 0Fh ;~ 0B93:2B4A
cs=0xb93;eip=0x002b4d; 	J(JL(loc_1ca54));	// 24145 jl      short loc_1CA54 ;~ 0B93:2B4D
cs=0xb93;eip=0x002b4f; 	T(CMP(timertestflag2, 4));	// 24146 cmp     timertestflag2, 4 ;~ 0B93:2B4F
cs=0xb93;eip=0x002b54; 	J(JNZ(loc_1ca72));	// 24147 jnz     short loc_1CA72 ;~ 0B93:2B54
cs=0xb93;eip=0x002b56; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 24148 mov     bx, [bp+arg_0] ;~ 0B93:2B56
cs=0xb93;eip=0x002b59; 	T(SHL(bx, 1));	// 24149 shl     bx, 1 ;~ 0B93:2B59
cs=0xb93;eip=0x002b5b; 	T(MOV(ax, word_463d6));	// 24150 mov     ax, word_463D6 ;~ 0B93:2B5B
cs=0xb93;eip=0x002b5e; 	X(MOV(*(dw*)(((db*)&word_449fc)+bx), ax));	// 24151 mov     word_449FC[bx], ax ;~ 0B93:2B5E
loc_1ca72:
	// 5861 
cs=0xb93;eip=0x002b62; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 24154 mov     bx, [bp+arg_0] ;~ 0B93:2B62
cs=0xb93;eip=0x002b65; 	T(SHL(bx, 1));	// 24155 shl     bx, 1 ;~ 0B93:2B65
cs=0xb93;eip=0x002b67; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 24156 mov     ax, [bp+arg_A] ;~ 0B93:2B67
cs=0xb93;eip=0x002b6a; 	T(CMP(*(dw*)(((db*)&word_449fc)+bx), ax));	// 24157 cmp     word_449FC[bx], ax ;~ 0B93:2B6A
cs=0xb93;eip=0x002b6e; 	J(JNZ(loc_1caac));	// 24158 jnz     short loc_1CAAC ;~ 0B93:2B6E
cs=0xb93;eip=0x002b70; 	T(MOV(bx, rectptr_unk));	// 24159 mov     bx, rectptr_unk ;~ 0B93:2B70
cs=0xb93;eip=0x002b74; 	T(MOV(ax, rect_skybox));	// 24160 mov     ax, rect_skybox ;~ 0B93:2B74
cs=0xb93;eip=0x002b77; 	T(CMP(*(dw*)(raddr(ds,bx+0x28)), ax));	// 24161 cmp     [bx+28h], ax ;~ 0B93:2B77
cs=0xb93;eip=0x002b7a; 	J(JNZ(loc_1caac));	// 24162 jnz     short loc_1CAAC ;~ 0B93:2B7A
cs=0xb93;eip=0x002b7c; 	T(MOV(ax, word_44a2e));	// 24163 mov     ax, word_44A2E ;~ 0B93:2B7C
cs=0xb93;eip=0x002b7f; 	T(CMP(*(dw*)(raddr(ds,bx+0x2A)), ax));	// 24164 cmp     [bx+2Ah], ax ;~ 0B93:2B7F
cs=0xb93;eip=0x002b82; 	J(JNZ(loc_1caac));	// 24165 jnz     short loc_1CAAC ;~ 0B93:2B82
cs=0xb93;eip=0x002b84; 	T(MOV(ax, word_44a30));	// 24166 mov     ax, word_44A30 ;~ 0B93:2B84
cs=0xb93;eip=0x002b87; 	T(CMP(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 24167 cmp     [bx+2Ch], ax ;~ 0B93:2B87
cs=0xb93;eip=0x002b8a; 	J(JNZ(loc_1caac));	// 24168 jnz     short loc_1CAAC ;~ 0B93:2B8A
cs=0xb93;eip=0x002b8c; 	T(MOV(ax, word_44a32));	// 24169 mov     ax, word_44A32 ;~ 0B93:2B8C
cs=0xb93;eip=0x002b8f; 	T(CMP(*(dw*)(raddr(ds,bx+0x2E)), ax));	// 24170 cmp     [bx+2Eh], ax ;~ 0B93:2B8F
cs=0xb93;eip=0x002b92; 	J(JNZ(loc_1caac));	// 24171 jnz     short loc_1CAAC ;~ 0B93:2B92
cs=0xb93;eip=0x002b94; 	X(MOV(*((rect_array_unk_indices)+5), 0));	// 24172 mov     rect_array_unk_indices+5, 0 ;~ 0B93:2B94
cs=0xb93;eip=0x002b99; 	J(JMP(loc_1cab1));	// 24173 jmp     short loc_1CAB1 ;~ 0B93:2B99
loc_1caac:
	// 5862 
cs=0xb93;eip=0x002b9c; 	X(MOV(*((rect_array_unk_indices)+5), 3));	// 24179 mov     rect_array_unk_indices+5, 3 ;~ 0B93:2B9C
loc_1cab1:
	// 5863 
cs=0xb93;eip=0x002ba1; 	X(MOV(rect_array_unk3_length, 0));	// 24182 mov     rect_array_unk3_length, 0 ;~ 0B93:2BA1
cs=0xb93;eip=0x002ba6; 	T(MOV(ax, offset(dseg,rect_array_unk3)));	// 24183 mov     ax, offset rect_array_unk3 ;~ 0B93:2BA6
cs=0xb93;eip=0x002ba9; 	X(PUSH(ax));	// 24184 push    ax ;~ 0B93:2BA9
cs=0xb93;eip=0x002baa; 	T(MOV(ax, offset(dseg,rect_array_unk3_length)));	// 24185 mov     ax, offset rect_array_unk3_length ;~ 0B93:2BAA
cs=0xb93;eip=0x002bad; 	X(PUSH(ax));	// 24186 push    ax ;~ 0B93:2BAD
cs=0xb93;eip=0x002bae; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 24187 push    [bp+arg_2] ;~ 0B93:2BAE
cs=0xb93;eip=0x002bb1; 	T(MOV(ax, offset(dseg,rect_unk)));	// 24188 mov     ax, offset rect_unk ;~ 0B93:2BB1
cs=0xb93;eip=0x002bb4; 	X(PUSH(ax));	// 24189 push    ax ;~ 0B93:2BB4
cs=0xb93;eip=0x002bb5; 	X(PUSH(rectptr_unk));	// 24190 push    rectptr_unk ;~ 0B93:2BB5
cs=0xb93;eip=0x002bb9; 	T(MOV(ax, offset(dseg,rect_array_unk_indices)));	// 24191 mov     ax, offset rect_array_unk_indices ;~ 0B93:2BB9
cs=0xb93;eip=0x002bbc; 	X(PUSH(ax));	// 24192 push    ax ;~ 0B93:2BBC
cs=0xb93;eip=0x002bbd; 	T(MOV(ax, 0x0F));	// 24193 mov     ax, 0Fh         ; number of rects ;~ 0B93:2BBD
cs=0xb93;eip=0x002bc0; 	X(PUSH(ax));	// 24194 push    ax ;~ 0B93:2BC0
cs=0xb93;eip=0x002bc1; 	J(CALLF(rectlist_add_rects,0));	// 24195 call    rectlist_add_rects ;~ 0B93:2BC1
cs=0xb93;eip=0x002bc6; 	T(ADD(sp, 0x0E));	// 24196 add     sp, 0Eh ;~ 0B93:2BC6
cs=0xb93;eip=0x002bc9; 	T(SUB(di, di));	// 24197 sub     di, di ;~ 0B93:2BC9
cs=0xb93;eip=0x002bcb; 	J(JMP(loc_1caf6));	// 24198 jmp     short loc_1CAF6 ;~ 0B93:2BCB
loc_1cade:
	// 5864 
cs=0xb93;eip=0x002bce; 	X(PUSH(*(dw*)(raddr(ss,bp+var_50))));	// 24203 push    [bp+var_50] ;~ 0B93:2BCE
cs=0xb93;eip=0x002bd1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 24204 push    [bp+arg_A] ;~ 0B93:2BD1
cs=0xb93;eip=0x002bd4; 	T(MOV(ax, di));	// 24205 mov     ax, di ;~ 0B93:2BD4
cs=0xb93;eip=0x002bd6; 	T(MOV(cl, 3));	// 24206 mov     cl, 3 ;~ 0B93:2BD6
cs=0xb93;eip=0x002bd8; 	T(SHL(ax, cl));	// 24207 shl     ax, cl ;~ 0B93:2BD8
cs=0xb93;eip=0x002bda; 	T(ADD(ax, offset(dseg,rect_array_unk3)));	// 24208 add     ax, offset rect_array_unk3 ;~ 0B93:2BDA
cs=0xb93;eip=0x002bdd; 	X(PUSH(ax));	// 24209 push    ax ;~ 0B93:2BDD
cs=0xb93;eip=0x002bde; 	X(PUSH(cs));	// 24210 push    cs ;~ 0B93:2BDE
cs=0xb93;eip=0x002bdf; 	J(CALL(skybox_op_helper2,0));	// 24211 call    near ptr skybox_op_helper2 ;~ 0B93:2BDF
cs=0xb93;eip=0x002be2; 	T(ADD(sp, 6));	// 24212 add     sp, 6 ;~ 0B93:2BE2
cs=0xb93;eip=0x002be5; 	T(INC(di));	// 24213 inc     di ;~ 0B93:2BE5
loc_1caf6:
	// 5865 
cs=0xb93;eip=0x002be6; 	T(MOV(al, rect_array_unk3_length));	// 24216 mov     al, rect_array_unk3_length ;~ 0B93:2BE6
cs=0xb93;eip=0x002be9; 	T(CBW);	// 24217 cbw ;~ 0B93:2BE9
cs=0xb93;eip=0x002bea; 	T(CMP(ax, di));	// 24218 cmp     ax, di ;~ 0B93:2BEA
cs=0xb93;eip=0x002bec; 	J(JG(loc_1cade));	// 24219 jg      short loc_1CADE ;~ 0B93:2BEC
cs=0xb93;eip=0x002bee; 	J(JMP(loc_1cb77));	// 24220 jmp     short loc_1CB77 ;~ 0B93:2BEE
loc_1cb00:
	// 5866 
cs=0xb93;eip=0x002bf0; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_50))));	// 24224 mov     si, [bp+var_50] ;~ 0B93:2BF0
cs=0xb93;eip=0x002bf3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 24225 mov     bx, [bp+arg_2] ;~ 0B93:2BF3
cs=0xb93;eip=0x002bf6; 	T(SUB(si, *(dw*)(raddr(ds,bx+4))));	// 24226 sub     si, [bx+4] ;~ 0B93:2BF6
cs=0xb93;eip=0x002bf9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 24227 mov     ax, [bx+6] ;~ 0B93:2BF9
cs=0xb93;eip=0x002bfc; 	T(SUB(ax, *(dw*)(raddr(ds,bx+4))));	// 24228 sub     ax, [bx+4] ;~ 0B93:2BFC
cs=0xb93;eip=0x002bff; 	T(CMP(ax, si));	// 24229 cmp     ax, si ;~ 0B93:2BFF
cs=0xb93;eip=0x002c01; 	J(JGE(loc_1cb19));	// 24230 jge     short loc_1CB19 ;~ 0B93:2C01
cs=0xb93;eip=0x002c03; 	T(MOV(si, *(dw*)(raddr(ds,bx+6))));	// 24231 mov     si, [bx+6] ;~ 0B93:2C03
cs=0xb93;eip=0x002c06; 	T(SUB(si, *(dw*)(raddr(ds,bx+4))));	// 24232 sub     si, [bx+4] ;~ 0B93:2C06
loc_1cb19:
	// 5867 
cs=0xb93;eip=0x002c09; 	T(OR(si, si));	// 24235 or      si, si ;~ 0B93:2C09
cs=0xb93;eip=0x002c0b; 	J(JLE(loc_1cb41));	// 24236 jle     short loc_1CB41 ;~ 0B93:2C0B
cs=0xb93;eip=0x002c0d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 24237 mov     ax, [bx+4] ;~ 0B93:2C0D
cs=0xb93;eip=0x002c10; 	T(ADD(ax, si));	// 24238 add     ax, si ;~ 0B93:2C10
cs=0xb93;eip=0x002c12; 	X(PUSH(ax));	// 24239 push    ax ;~ 0B93:2C12
cs=0xb93;eip=0x002c13; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 24240 push    word ptr [bx+4] ;~ 0B93:2C13
cs=0xb93;eip=0x002c16; 	T(MOV(ax, 0x140));	// 24241 mov     ax, 140h ;~ 0B93:2C16
cs=0xb93;eip=0x002c19; 	X(PUSH(ax));	// 24242 push    ax ;~ 0B93:2C19
cs=0xb93;eip=0x002c1a; 	T(SUB(ax, ax));	// 24243 sub     ax, ax ;~ 0B93:2C1A
cs=0xb93;eip=0x002c1c; 	X(PUSH(ax));	// 24244 push    ax ;~ 0B93:2C1C
cs=0xb93;eip=0x002c1d; 	J(CALLF(sprite_set_1_size,0));	// 24245 call    sprite_set_1_size ;~ 0B93:2C1D
cs=0xb93;eip=0x002c22; 	T(ADD(sp, 8));	// 24246 add     sp, 8 ;~ 0B93:2C22
cs=0xb93;eip=0x002c25; 	X(PUSH(skybox_grd_color));	// 24247 push    skybox_grd_color ;~ 0B93:2C25
cs=0xb93;eip=0x002c29; 	J(CALLF(sprite_clear_1_color,0));	// 24248 call    sprite_clear_1_color ;~ 0B93:2C29
cs=0xb93;eip=0x002c2e; 	T(ADD(sp, 2));	// 24249 add     sp, 2 ;~ 0B93:2C2E
loc_1cb41:
	// 5868 
cs=0xb93;eip=0x002c31; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 24252 mov     bx, [bp+arg_2] ;~ 0B93:2C31
cs=0xb93;eip=0x002c34; 	T(MOV(si, *(dw*)(raddr(ds,bx+6))));	// 24253 mov     si, [bx+6] ;~ 0B93:2C34
cs=0xb93;eip=0x002c37; 	T(SUB(si, *(dw*)(raddr(ss,bp+var_50))));	// 24254 sub     si, [bp+var_50] ;~ 0B93:2C37
cs=0xb93;eip=0x002c3a; 	T(OR(si, si));	// 24255 or      si, si ;~ 0B93:2C3A
cs=0xb93;eip=0x002c3c; 	J(JLE(loc_1cb72));	// 24256 jle     short loc_1CB72 ;~ 0B93:2C3C
cs=0xb93;eip=0x002c3e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_50))));	// 24257 mov     ax, [bp+var_50] ;~ 0B93:2C3E
cs=0xb93;eip=0x002c41; 	T(ADD(ax, si));	// 24258 add     ax, si ;~ 0B93:2C41
cs=0xb93;eip=0x002c43; 	X(PUSH(ax));	// 24259 push    ax ;~ 0B93:2C43
cs=0xb93;eip=0x002c44; 	X(PUSH(*(dw*)(raddr(ss,bp+var_50))));	// 24260 push    [bp+var_50] ;~ 0B93:2C44
cs=0xb93;eip=0x002c47; 	T(MOV(ax, 0x140));	// 24261 mov     ax, 140h ;~ 0B93:2C47
cs=0xb93;eip=0x002c4a; 	X(PUSH(ax));	// 24262 push    ax ;~ 0B93:2C4A
cs=0xb93;eip=0x002c4b; 	T(SUB(ax, ax));	// 24263 sub     ax, ax ;~ 0B93:2C4B
cs=0xb93;eip=0x002c4d; 	X(PUSH(ax));	// 24264 push    ax ;~ 0B93:2C4D
cs=0xb93;eip=0x002c4e; 	J(CALLF(sprite_set_1_size,0));	// 24265 call    sprite_set_1_size ;~ 0B93:2C4E
cs=0xb93;eip=0x002c53; 	T(ADD(sp, 8));	// 24266 add     sp, 8 ;~ 0B93:2C53
cs=0xb93;eip=0x002c56; 	X(PUSH(skybox_sky_color));	// 24267 push    skybox_sky_color ;~ 0B93:2C56
loc_1cb6a:
	// 5869 
cs=0xb93;eip=0x002c5a; 	J(CALLF(sprite_clear_1_color,0));	// 24270 call    sprite_clear_1_color ;~ 0B93:2C5A
cs=0xb93;eip=0x002c5f; 	T(ADD(sp, 2));	// 24271 add     sp, 2 ;~ 0B93:2C5F
loc_1cb72:
	// 5870 
cs=0xb93;eip=0x002c62; 	X(MOV(*(dw*)(raddr(ss,bp+var_5c)), 1));	// 24275 mov     [bp+var_5C], 1 ;~ 0B93:2C62
loc_1cb77:
	// 5871 
cs=0xb93;eip=0x002c67; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_5c))));	// 24279 mov     ax, [bp+var_5C] ;~ 0B93:2C67
cs=0xb93;eip=0x002c6a; 	X(POP(si));	// 24280 pop     si ;~ 0B93:2C6A
cs=0xb93;eip=0x002c6b; 	X(POP(di));	// 24281 pop     di ;~ 0B93:2C6B
cs=0xb93;eip=0x002c6c; 	T(MOV(sp, bp));	// 24282 mov     sp, bp ;~ 0B93:2C6C
cs=0xb93;eip=0x002c6e; 	X(POP(bp));	// 24283 pop     bp ;~ 0B93:2C6E
cs=0xb93;eip=0x002c6f; 	J(RETF(0));	// 24284 retf ;~ 0B93:2C6F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c4a7: 	goto loc_1c4a7;
        case m2c::kloc_1c4fc: 	goto loc_1c4fc;
        case m2c::kloc_1c500: 	goto loc_1c500;
        case m2c::kloc_1c51c: 	goto loc_1c51c;
        case m2c::kloc_1c552: 	goto loc_1c552;
        case m2c::kloc_1c558: 	goto loc_1c558;
        case m2c::kloc_1c56a: 	goto loc_1c56a;
        case m2c::kloc_1c56e: 	goto loc_1c56e;
        case m2c::kloc_1c58a: 	goto loc_1c58a;
        case m2c::kloc_1c5a6: 	goto loc_1c5a6;
        case m2c::kloc_1c5ea: 	goto loc_1c5ea;
        case m2c::kloc_1c5ec: 	goto loc_1c5ec;
        case m2c::kloc_1c602: 	goto loc_1c602;
        case m2c::kloc_1c612: 	goto loc_1c612;
        case m2c::kloc_1c61d: 	goto loc_1c61d;
        case m2c::kloc_1c626: 	goto loc_1c626;
        case m2c::kloc_1c630: 	goto loc_1c630;
        case m2c::kloc_1c660: 	goto loc_1c660;
        case m2c::kloc_1c66e: 	goto loc_1c66e;
        case m2c::kloc_1c683: 	goto loc_1c683;
        case m2c::kloc_1c691: 	goto loc_1c691;
        case m2c::kloc_1c696: 	goto loc_1c696;
        case m2c::kloc_1c6f2: 	goto loc_1c6f2;
        case m2c::kloc_1c720: 	goto loc_1c720;
        case m2c::kloc_1c728: 	goto loc_1c728;
        case m2c::kloc_1c774: 	goto loc_1c774;
        case m2c::kloc_1c7a2: 	goto loc_1c7a2;
        case m2c::kloc_1c7aa: 	goto loc_1c7aa;
        case m2c::kloc_1c7b6: 	goto loc_1c7b6;
        case m2c::kloc_1c7c2: 	goto loc_1c7c2;
        case m2c::kloc_1c7e5: 	goto loc_1c7e5;
        case m2c::kloc_1c7f8: 	goto loc_1c7f8;
        case m2c::kloc_1c7fb: 	goto loc_1c7fb;
        case m2c::kloc_1c806: 	goto loc_1c806;
        case m2c::kloc_1c80a: 	goto loc_1c80a;
        case m2c::kloc_1c84a: 	goto loc_1c84a;
        case m2c::kloc_1c84b: 	goto loc_1c84b;
        case m2c::kloc_1c852: 	goto loc_1c852;
        case m2c::kloc_1c876: 	goto loc_1c876;
        case m2c::kloc_1c879: 	goto loc_1c879;
        case m2c::kloc_1c8f0: 	goto loc_1c8f0;
        case m2c::kloc_1c8ff: 	goto loc_1c8ff;
        case m2c::kloc_1c904: 	goto loc_1c904;
        case m2c::kloc_1c958: 	goto loc_1c958;
        case m2c::kloc_1c99d: 	goto loc_1c99d;
        case m2c::kloc_1c9c0: 	goto loc_1c9c0;
        case m2c::kloc_1c9e4: 	goto loc_1c9e4;
        case m2c::kloc_1c9ed: 	goto loc_1c9ed;
        case m2c::kloc_1ca02: 	goto loc_1ca02;
        case m2c::kloc_1ca09: 	goto loc_1ca09;
        case m2c::kloc_1ca25: 	goto loc_1ca25;
        case m2c::kloc_1ca52: 	goto loc_1ca52;
        case m2c::kloc_1ca54: 	goto loc_1ca54;
        case m2c::kloc_1ca72: 	goto loc_1ca72;
        case m2c::kloc_1caac: 	goto loc_1caac;
        case m2c::kloc_1cab1: 	goto loc_1cab1;
        case m2c::kloc_1cade: 	goto loc_1cade;
        case m2c::kloc_1caf6: 	goto loc_1caf6;
        case m2c::kloc_1cb00: 	goto loc_1cb00;
        case m2c::kloc_1cb19: 	goto loc_1cb19;
        case m2c::kloc_1cb41: 	goto loc_1cb41;
        case m2c::kloc_1cb6a: 	goto loc_1cb6a;
        case m2c::kloc_1cb72: 	goto loc_1cb72;
        case m2c::kloc_1cb77: 	goto loc_1cb77;
        case m2c::kskybox_op: 	goto skybox_op;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool transformed_shape_add_for_sort(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    transformed_shape_add_for_sort:
    _begin:
#undef transformedpos
#define transformedpos -0x0C
	// 24295 transformedpos  = byte ptr -0Ch ;~ 0B93:2C70
#undef var_8
#define var_8 -8
	// 24296 var_8           = word ptr -8 ;~ 0B93:2C70
#undef shapepos
#define shapepos -6
	// 24297 shapepos        = byte ptr -6 ;~ 0B93:2C70
#undef arg_0
#define arg_0 6
	// 24298 arg_0           = word ptr  6 ;~ 0B93:2C70
#undef arg_2
#define arg_2 8
	// 24299 arg_2           = byte ptr  8 ;~ 0B93:2C70
cs=0xb93;eip=0x002c70; 	X(PUSH(bp));	// 24301 push    bp ;~ 0B93:2C70
cs=0xb93;eip=0x002c71; 	T(MOV(bp, sp));	// 24302 mov     bp, sp ;~ 0B93:2C71
cs=0xb93;eip=0x002c73; 	T(SUB(sp, 0x0C));	// 24303 sub     sp, 0Ch ;~ 0B93:2C73
cs=0xb93;eip=0x002c76; 	X(PUSH(di));	// 24304 push    di ;~ 0B93:2C76
cs=0xb93;eip=0x002c77; 	X(PUSH(si));	// 24305 push    si ;~ 0B93:2C77
cs=0xb93;eip=0x002c78; 	T(MOV(ax, curtransshape_ptr));	// 24306 mov     ax, curtransshape_ptr ;~ 0B93:2C78
cs=0xb93;eip=0x002c7b; 	X(PUSH(si));	// 24307 push    si ;~ 0B93:2C7B
cs=0xb93;eip=0x002c7c; 	X(PUSH(di));	// 24308 push    di ;~ 0B93:2C7C
cs=0xb93;eip=0x002c7d; 	T(di = bp+shapepos);	// 24309 lea     di, [bp+shapepos] ;~ 0B93:2C7D
cs=0xb93;eip=0x002c80; 	T(MOV(si, ax));	// 24310 mov     si, ax          ; ax = offset to the first member of curtransshape_ptr, the pos vector ;~ 0B93:2C80
cs=0xb93;eip=0x002c82; 	X(PUSH(ss));	// 24311 push    ss ;~ 0B93:2C82
cs=0xb93;eip=0x002c83; 	X(POP(es));	// 24312 pop     es ;~ 0B93:2C83
cs=0xb93;eip=0x002c84; 	X(MOVSW);	// 24314 movsw ;~ 0B93:2C84
cs=0xb93;eip=0x002c85; 	X(MOVSW);	// 24315 movsw ;~ 0B93:2C85
cs=0xb93;eip=0x002c86; 	X(MOVSW);	// 24316 movsw ;~ 0B93:2C86
cs=0xb93;eip=0x002c87; 	X(POP(di));	// 24317 pop     di ;~ 0B93:2C87
cs=0xb93;eip=0x002c88; 	X(POP(si));	// 24318 pop     si ;~ 0B93:2C88
cs=0xb93;eip=0x002c89; 	T(ax = bp+transformedpos);	// 24319 lea     ax, [bp+transformedpos] ;~ 0B93:2C89
cs=0xb93;eip=0x002c8c; 	X(PUSH(ax));	// 24320 push    ax ;~ 0B93:2C8C
cs=0xb93;eip=0x002c8d; 	T(MOV(ax, offset(dseg,mat_temp)));	// 24321 mov     ax, offset mat_temp ;~ 0B93:2C8D
cs=0xb93;eip=0x002c90; 	X(PUSH(ax));	// 24322 push    ax ;~ 0B93:2C90
cs=0xb93;eip=0x002c91; 	T(ax = bp+shapepos);	// 24323 lea     ax, [bp+shapepos] ;~ 0B93:2C91
cs=0xb93;eip=0x002c94; 	X(PUSH(ax));	// 24324 push    ax ;~ 0B93:2C94
cs=0xb93;eip=0x002c95; 	J(CALLF(mat_mul_vector,0));	// 24325 call    mat_mul_vector ;~ 0B93:2C95
cs=0xb93;eip=0x002c9a; 	T(ADD(sp, 6));	// 24326 add     sp, 6 ;~ 0B93:2C9A
cs=0xb93;eip=0x002c9d; 	T(MOV(al, transformedshape_counter));	// 24327 mov     al, transformedshape_counter ;~ 0B93:2C9D
cs=0xb93;eip=0x002ca0; 	T(CBW);	// 24328 cbw ;~ 0B93:2CA0
cs=0xb93;eip=0x002ca1; 	T(MOV(si, ax));	// 24329 mov     si, ax ;~ 0B93:2CA1
cs=0xb93;eip=0x002ca3; 	T(MOV(di, si));	// 24330 mov     di, si ;~ 0B93:2CA3
cs=0xb93;eip=0x002ca5; 	T(SHL(di, 1));	// 24331 shl     di, 1 ;~ 0B93:2CA5
cs=0xb93;eip=0x002ca7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 24332 mov     ax, [bp+var_8] ;~ 0B93:2CA7
cs=0xb93;eip=0x002caa; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 24333 add     ax, [bp+arg_0] ;~ 0B93:2CAA
cs=0xb93;eip=0x002cad; 	X(MOV(*(dw*)(((db*)&transformedshape_zarray)+di), ax));	// 24334 mov     transformedshape_zarray[di], ax ;~ 0B93:2CAD
cs=0xb93;eip=0x002cb1; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 24335 mov     al, [bp+arg_2] ;~ 0B93:2CB1
cs=0xb93;eip=0x002cb4; 	X(MOV(*((&transformedshape_arg2array)+si), al));	// 24336 mov     transformedshape_arg2array[si], al ;~ 0B93:2CB4
cs=0xb93;eip=0x002cb8; 	X(MOV(*(dw*)(((db*)&transformedshape_indices)+di), si));	// 24337 mov     transformedshape_indices[di], si ;~ 0B93:2CB8
cs=0xb93;eip=0x002cbc; 	X(INC(transformedshape_counter));	// 24338 inc     transformedshape_counter ;~ 0B93:2CBC
cs=0xb93;eip=0x002cc0; 	X(ADD(curtransshape_ptr, 0x14));	// 24339 add     curtransshape_ptr, 14h ;~ 0B93:2CC0
cs=0xb93;eip=0x002cc5; 	X(POP(si));	// 24340 pop     si ;~ 0B93:2CC5
cs=0xb93;eip=0x002cc6; 	X(POP(di));	// 24341 pop     di ;~ 0B93:2CC6
cs=0xb93;eip=0x002cc7; 	T(MOV(sp, bp));	// 24342 mov     sp, bp ;~ 0B93:2CC7
cs=0xb93;eip=0x002cc9; 	X(POP(bp));	// 24343 pop     bp ;~ 0B93:2CC9
cs=0xb93;eip=0x002cca; 	J(RETF(0));	// 24344 retf ;~ 0B93:2CCA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ktransformed_shape_add_for_sort: 	goto transformed_shape_add_for_sort;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool draw_track_preview(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    draw_track_preview:
    _begin:
#undef var_42
#define var_42 -0x42
	// 24356 var_42          = word ptr -42h ;~ 0B93:2CCC
#undef var_40
#define var_40 -0x40
	// 24357 var_40          = word ptr -40h ;~ 0B93:2CCC
#undef var_3e
#define var_3e -0x3E
	// 24358 var_3E          = word ptr -3Eh ;~ 0B93:2CCC
#undef var_3c
#define var_3c -0x3C
	// 24359 var_3C          = byte ptr -3Ch ;~ 0B93:2CCC
#undef var_3a
#define var_3a -0x3A
	// 24360 var_3A          = byte ptr -3Ah ;~ 0B93:2CCC
#undef var_38
#define var_38 -0x38
	// 24361 var_38          = byte ptr -38h ;~ 0B93:2CCC
#undef var_36
#define var_36 -0x36
	// 24362 var_36          = byte ptr -36h ;~ 0B93:2CCC
#undef var_34
#define var_34 -0x34
	// 24363 var_34          = word ptr -34h ;~ 0B93:2CCC
#undef var_32
#define var_32 -0x32
	// 24364 var_32          = byte ptr -32h ;~ 0B93:2CCC
#undef var_30
#define var_30 -0x30
	// 24365 var_30          = word ptr -30h ;~ 0B93:2CCC
#undef var_2e
#define var_2e -0x2E
	// 24366 var_2E          = byte ptr -2Eh ;~ 0B93:2CCC
#undef var_2c
#define var_2c -0x2C
	// 24367 var_2C          = word ptr -2Ch ;~ 0B93:2CCC
#undef var_2a
#define var_2a -0x2A
	// 24368 var_2A          = word ptr -2Ah ;~ 0B93:2CCC
#undef var_28
#define var_28 -0x28
	// 24369 var_28          = word ptr -28h ;~ 0B93:2CCC
#undef var_26
#define var_26 -0x26
	// 24370 var_26          = word ptr -26h ;~ 0B93:2CCC
#undef var_24
#define var_24 -0x24
	// 24371 var_24          = word ptr -24h ;~ 0B93:2CCC
#undef var_22
#define var_22 -0x22
	// 24372 var_22          = word ptr -22h ;~ 0B93:2CCC
#undef var_20
#define var_20 -0x20
	// 24373 var_20          = word ptr -20h ;~ 0B93:2CCC
#undef var_1c
#define var_1c -0x1C
	// 24374 var_1C          = word ptr -1Ch ;~ 0B93:2CCC
#undef var_1a
#define var_1a -0x1A
	// 24375 var_1A          = word ptr -1Ah ;~ 0B93:2CCC
#undef var_18
#define var_18 -0x18
	// 24376 var_18          = word ptr -18h ;~ 0B93:2CCC
#undef var_16
#define var_16 -0x16
	// 24377 var_16          = word ptr -16h ;~ 0B93:2CCC
#undef var_14
#define var_14 -0x14
	// 24378 var_14          = byte ptr -14h ;~ 0B93:2CCC
#undef var_13
#define var_13 -0x13
	// 24379 var_13          = byte ptr -13h ;~ 0B93:2CCC
#undef var_12
#define var_12 -0x12
	// 24380 var_12          = word ptr -12h ;~ 0B93:2CCC
#undef var_10
#define var_10 -0x10
	// 24381 var_10          = byte ptr -10h ;~ 0B93:2CCC
#undef var_c
#define var_c -0x0C
	// 24382 var_C           = word ptr -0Ch ;~ 0B93:2CCC
#undef var_a
#define var_a -0x0A
	// 24383 var_A           = word ptr -0Ah ;~ 0B93:2CCC
#undef var_8
#define var_8 -8
	// 24384 var_8           = word ptr -8 ;~ 0B93:2CCC
#undef var_4
#define var_4 -4
	// 24385 var_4           = word ptr -4 ;~ 0B93:2CCC
#undef var_2
#define var_2 -2
	// 24386 var_2           = word ptr -2 ;~ 0B93:2CCC
cs=0xb93;eip=0x002ccc; 	X(PUSH(bp));	// 24388 push    bp ;~ 0B93:2CCC
cs=0xb93;eip=0x002ccd; 	T(MOV(bp, sp));	// 24389 mov     bp, sp ;~ 0B93:2CCD
cs=0xb93;eip=0x002ccf; 	T(SUB(sp, 0x42));	// 24390 sub     sp, 42h ;~ 0B93:2CCF
cs=0xb93;eip=0x002cd2; 	X(PUSH(di));	// 24391 push    di ;~ 0B93:2CD2
cs=0xb93;eip=0x002cd3; 	X(PUSH(si));	// 24392 push    si ;~ 0B93:2CD3
cs=0xb93;eip=0x002cd4; 	T(MOV(ax, word_3c112));	// 24393 mov     ax, word_3C112 ;~ 0B93:2CD4
cs=0xb93;eip=0x002cd7; 	T(SUB(ax, word_3c10c));	// 24394 sub     ax, word_3C10C ;~ 0B93:2CD7
cs=0xb93;eip=0x002cdb; 	X(PUSH(ax));	// 24395 push    ax ;~ 0B93:2CDB
cs=0xb93;eip=0x002cdc; 	T(MOV(ax, word_3c10e));	// 24396 mov     ax, word_3C10E ;~ 0B93:2CDC
cs=0xb93;eip=0x002cdf; 	T(SUB(ax, word_3c108));	// 24397 sub     ax, word_3C108 ;~ 0B93:2CDF
cs=0xb93;eip=0x002ce3; 	X(PUSH(ax));	// 24398 push    ax ;~ 0B93:2CE3
cs=0xb93;eip=0x002ce4; 	J(CALLF(polarradius2d,0));	// 24399 call    polarRadius2D ;~ 0B93:2CE4
cs=0xb93;eip=0x002ce9; 	T(ADD(sp, 4));	// 24400 add     sp, 4 ;~ 0B93:2CE9
cs=0xb93;eip=0x002cec; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 24401 mov     [bp+var_4], ax ;~ 0B93:2CEC
cs=0xb93;eip=0x002cef; 	X(PUSH(ax));	// 24402 push    ax ;~ 0B93:2CEF
cs=0xb93;eip=0x002cf0; 	T(MOV(ax, word_3c110));	// 24403 mov     ax, word_3C110 ;~ 0B93:2CF0
cs=0xb93;eip=0x002cf3; 	T(SUB(ax, word_3c10a));	// 24404 sub     ax, word_3C10A ;~ 0B93:2CF3
cs=0xb93;eip=0x002cf7; 	X(PUSH(ax));	// 24405 push    ax ;~ 0B93:2CF7
cs=0xb93;eip=0x002cf8; 	J(CALLF(polarangle,0));	// 24406 call    polarAngle ;~ 0B93:2CF8
cs=0xb93;eip=0x002cfd; 	T(ADD(sp, 4));	// 24407 add     sp, 4 ;~ 0B93:2CFD
cs=0xb93;eip=0x002d00; 	X(MOV(*(dw*)(raddr(ss,bp+var_34)), ax));	// 24408 mov     [bp+var_34], ax ;~ 0B93:2D00
cs=0xb93;eip=0x002d03; 	T(MOV(ax, 1));	// 24409 mov     ax, 1 ;~ 0B93:2D03
cs=0xb93;eip=0x002d06; 	X(PUSH(ax));	// 24410 push    ax ;~ 0B93:2D06
cs=0xb93;eip=0x002d07; 	T(SUB(ax, ax));	// 24411 sub     ax, ax ;~ 0B93:2D07
cs=0xb93;eip=0x002d09; 	X(PUSH(ax));	// 24412 push    ax ;~ 0B93:2D09
cs=0xb93;eip=0x002d0a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_34))));	// 24413 push    [bp+var_34] ;~ 0B93:2D0A
cs=0xb93;eip=0x002d0d; 	X(PUSH(ax));	// 24414 push    ax ;~ 0B93:2D0D
cs=0xb93;eip=0x002d0e; 	J(CALLF(mat_rot_zxy,0));	// 24415 call    mat_rot_zxy ;~ 0B93:2D0E
cs=0xb93;eip=0x002d13; 	T(ADD(sp, 8));	// 24416 add     sp, 8 ;~ 0B93:2D13
cs=0xb93;eip=0x002d16; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 24417 mov     [bp+var_28], ax ;~ 0B93:2D16
cs=0xb93;eip=0x002d19; 	T(ax = bp+var_c);	// 24418 lea     ax, [bp+var_C] ;~ 0B93:2D19
cs=0xb93;eip=0x002d1c; 	X(PUSH(ax));	// 24419 push    ax ;~ 0B93:2D1C
cs=0xb93;eip=0x002d1d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_28))));	// 24420 push    [bp+var_28] ;~ 0B93:2D1D
cs=0xb93;eip=0x002d20; 	T(MOV(ax, offset(dseg,unk_3c114)));	// 24421 mov     ax, offset unk_3C114 ;~ 0B93:2D20
cs=0xb93;eip=0x002d23; 	X(PUSH(ax));	// 24422 push    ax ;~ 0B93:2D23
cs=0xb93;eip=0x002d24; 	J(CALLF(mat_mul_vector,0));	// 24423 call    mat_mul_vector ;~ 0B93:2D24
cs=0xb93;eip=0x002d29; 	T(ADD(sp, 6));	// 24424 add     sp, 6 ;~ 0B93:2D29
cs=0xb93;eip=0x002d2c; 	T(ax = bp+var_2e);	// 24425 lea     ax, [bp+var_2E] ;~ 0B93:2D2C
cs=0xb93;eip=0x002d2f; 	X(PUSH(ax));	// 24426 push    ax ;~ 0B93:2D2F
cs=0xb93;eip=0x002d30; 	T(ax = bp+var_c);	// 24427 lea     ax, [bp+var_C] ;~ 0B93:2D30
cs=0xb93;eip=0x002d33; 	X(PUSH(ax));	// 24428 push    ax ;~ 0B93:2D33
cs=0xb93;eip=0x002d34; 	J(CALLF(vector_to_point,0));	// 24429 call    vector_to_point ;~ 0B93:2D34
cs=0xb93;eip=0x002d39; 	T(ADD(sp, 4));	// 24430 add     sp, 4 ;~ 0B93:2D39
cs=0xb93;eip=0x002d3c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 24431 mov     ax, [bp+var_2C] ;~ 0B93:2D3C
cs=0xb93;eip=0x002d3f; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 24432 mov     [bp+var_30], ax ;~ 0B93:2D3F
cs=0xb93;eip=0x002d42; 	T(OR(ax, ax));	// 24433 or      ax, ax ;~ 0B93:2D42
cs=0xb93;eip=0x002d44; 	J(JGE(loc_1cc5b));	// 24434 jge     short loc_1CC5B ;~ 0B93:2D44
cs=0xb93;eip=0x002d46; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), 0));	// 24435 mov     [bp+var_30], 0 ;~ 0B93:2D46
loc_1cc5b:
	// 5872 
cs=0xb93;eip=0x002d4b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_30))));	// 24438 mov     ax, [bp+var_30] ;~ 0B93:2D4B
cs=0xb93;eip=0x002d4e; 	T(SUB(ax, skybox_current));	// 24439 sub     ax, skybox_current ;~ 0B93:2D4E
cs=0xb93;eip=0x002d52; 	X(PUSH(ax));	// 24440 push    ax ;~ 0B93:2D52
cs=0xb93;eip=0x002d53; 	T(SUB(ax, ax));	// 24441 sub     ax, ax ;~ 0B93:2D53
cs=0xb93;eip=0x002d55; 	X(PUSH(ax));	// 24442 push    ax ;~ 0B93:2D55
cs=0xb93;eip=0x002d56; 	T(MOV(ax, 0x140));	// 24443 mov     ax, 140h ;~ 0B93:2D56
cs=0xb93;eip=0x002d59; 	X(PUSH(ax));	// 24444 push    ax ;~ 0B93:2D59
cs=0xb93;eip=0x002d5a; 	T(SUB(ax, ax));	// 24445 sub     ax, ax ;~ 0B93:2D5A
cs=0xb93;eip=0x002d5c; 	X(PUSH(ax));	// 24446 push    ax ;~ 0B93:2D5C
cs=0xb93;eip=0x002d5d; 	J(CALLF(sprite_set_1_size,0));	// 24447 call    sprite_set_1_size ;~ 0B93:2D5D
cs=0xb93;eip=0x002d62; 	T(ADD(sp, 8));	// 24448 add     sp, 8 ;~ 0B93:2D62
cs=0xb93;eip=0x002d65; 	X(PUSH(skybox_sky_color));	// 24449 push    skybox_sky_color ;~ 0B93:2D65
cs=0xb93;eip=0x002d69; 	J(CALLF(sprite_clear_1_color,0));	// 24450 call    sprite_clear_1_color ;~ 0B93:2D69
cs=0xb93;eip=0x002d6e; 	T(ADD(sp, 2));	// 24451 add     sp, 2 ;~ 0B93:2D6E
cs=0xb93;eip=0x002d71; 	T(MOV(ax, 0x64));	// 24452 mov     ax, 64h ; 'd' ;~ 0B93:2D71
cs=0xb93;eip=0x002d74; 	X(PUSH(ax));	// 24453 push    ax ;~ 0B93:2D74
cs=0xb93;eip=0x002d75; 	T(SUB(ax, ax));	// 24454 sub     ax, ax ;~ 0B93:2D75
cs=0xb93;eip=0x002d77; 	X(PUSH(ax));	// 24455 push    ax ;~ 0B93:2D77
cs=0xb93;eip=0x002d78; 	T(MOV(ax, 0x140));	// 24456 mov     ax, 140h ;~ 0B93:2D78
cs=0xb93;eip=0x002d7b; 	X(PUSH(ax));	// 24457 push    ax ;~ 0B93:2D7B
cs=0xb93;eip=0x002d7c; 	T(SUB(ax, ax));	// 24458 sub     ax, ax ;~ 0B93:2D7C
cs=0xb93;eip=0x002d7e; 	X(PUSH(ax));	// 24459 push    ax ;~ 0B93:2D7E
cs=0xb93;eip=0x002d7f; 	J(CALLF(sprite_set_1_size,0));	// 24460 call    sprite_set_1_size ;~ 0B93:2D7F
cs=0xb93;eip=0x002d84; 	T(ADD(sp, 8));	// 24461 add     sp, 8 ;~ 0B93:2D84
cs=0xb93;eip=0x002d87; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_30))));	// 24462 mov     ax, [bp+var_30] ;~ 0B93:2D87
cs=0xb93;eip=0x002d8a; 	T(SUB(ax, skybox_ptr3));	// 24463 sub     ax, skybox_ptr3 ;~ 0B93:2D8A
cs=0xb93;eip=0x002d8e; 	X(PUSH(ax));	// 24464 push    ax ;~ 0B93:2D8E
cs=0xb93;eip=0x002d8f; 	T(SUB(ax, ax));	// 24465 sub     ax, ax ;~ 0B93:2D8F
cs=0xb93;eip=0x002d91; 	X(PUSH(ax));	// 24466 push    ax ;~ 0B93:2D91
cs=0xb93;eip=0x002d92; 	X(PUSH(*(dw*)(((db*)skyboxes)+0x0A)));	// 24467 push    word ptr skyboxes+0Ah ;~ 0B93:2D92
cs=0xb93;eip=0x002d96; 	X(PUSH(*(dw*)(((db*)skyboxes)+8)));	// 24468 push    word ptr skyboxes+8 ;~ 0B93:2D96
cs=0xb93;eip=0x002d9a; 	J(CALLF(sprite_putimage_and_alt,0));	// 24469 call    sprite_putimage_and_alt ;~ 0B93:2D9A
cs=0xb93;eip=0x002d9f; 	T(ADD(sp, 8));	// 24470 add     sp, 8 ;~ 0B93:2D9F
cs=0xb93;eip=0x002da2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_30))));	// 24471 mov     ax, [bp+var_30] ;~ 0B93:2DA2
cs=0xb93;eip=0x002da5; 	T(SUB(ax, skybox_ptr4));	// 24472 sub     ax, skybox_ptr4 ;~ 0B93:2DA5
cs=0xb93;eip=0x002da9; 	X(PUSH(ax));	// 24473 push    ax ;~ 0B93:2DA9
cs=0xb93;eip=0x002daa; 	T(MOV(ax, 0x140));	// 24474 mov     ax, 140h ;~ 0B93:2DAA
cs=0xb93;eip=0x002dad; 	X(PUSH(ax));	// 24475 push    ax ;~ 0B93:2DAD
cs=0xb93;eip=0x002dae; 	X(PUSH(*(dw*)(((db*)skyboxes)+0x0E)));	// 24476 push    word ptr skyboxes+0Eh ;~ 0B93:2DAE
cs=0xb93;eip=0x002db2; 	X(PUSH(*(dw*)(((db*)skyboxes)+0x0C)));	// 24477 push    word ptr skyboxes+0Ch ;~ 0B93:2DB2
cs=0xb93;eip=0x002db6; 	J(CALLF(sprite_putimage_and_alt,0));	// 24478 call    sprite_putimage_and_alt ;~ 0B93:2DB6
cs=0xb93;eip=0x002dbb; 	T(ADD(sp, 8));	// 24479 add     sp, 8 ;~ 0B93:2DBB
cs=0xb93;eip=0x002dbe; 	T(MOV(ax, 0x0C8));	// 24480 mov     ax, 0C8h ; 'È' ;~ 0B93:2DBE
cs=0xb93;eip=0x002dc1; 	X(PUSH(ax));	// 24481 push    ax ;~ 0B93:2DC1
cs=0xb93;eip=0x002dc2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30))));	// 24482 push    [bp+var_30] ;~ 0B93:2DC2
cs=0xb93;eip=0x002dc5; 	T(MOV(ax, 0x140));	// 24483 mov     ax, 140h ;~ 0B93:2DC5
cs=0xb93;eip=0x002dc8; 	X(PUSH(ax));	// 24484 push    ax ;~ 0B93:2DC8
cs=0xb93;eip=0x002dc9; 	T(SUB(ax, ax));	// 24485 sub     ax, ax ;~ 0B93:2DC9
cs=0xb93;eip=0x002dcb; 	X(PUSH(ax));	// 24486 push    ax ;~ 0B93:2DCB
cs=0xb93;eip=0x002dcc; 	J(CALLF(sprite_set_1_size,0));	// 24487 call    sprite_set_1_size ;~ 0B93:2DCC
cs=0xb93;eip=0x002dd1; 	T(ADD(sp, 8));	// 24488 add     sp, 8 ;~ 0B93:2DD1
cs=0xb93;eip=0x002dd4; 	X(PUSH(skybox_grd_color));	// 24489 push    skybox_grd_color ;~ 0B93:2DD4
cs=0xb93;eip=0x002dd8; 	J(CALLF(sprite_clear_1_color,0));	// 24490 call    sprite_clear_1_color ;~ 0B93:2DD8
cs=0xb93;eip=0x002ddd; 	T(ADD(sp, 2));	// 24491 add     sp, 2 ;~ 0B93:2DDD
cs=0xb93;eip=0x002de0; 	T(MOV(ax, 0x0C8));	// 24492 mov     ax, 0C8h ; 'È' ;~ 0B93:2DE0
cs=0xb93;eip=0x002de3; 	X(PUSH(ax));	// 24493 push    ax ;~ 0B93:2DE3
cs=0xb93;eip=0x002de4; 	T(SUB(ax, ax));	// 24494 sub     ax, ax ;~ 0B93:2DE4
cs=0xb93;eip=0x002de6; 	X(PUSH(ax));	// 24495 push    ax ;~ 0B93:2DE6
cs=0xb93;eip=0x002de7; 	T(MOV(ax, 0x140));	// 24496 mov     ax, 140h ;~ 0B93:2DE7
cs=0xb93;eip=0x002dea; 	X(PUSH(ax));	// 24497 push    ax ;~ 0B93:2DEA
cs=0xb93;eip=0x002deb; 	T(SUB(ax, ax));	// 24498 sub     ax, ax ;~ 0B93:2DEB
cs=0xb93;eip=0x002ded; 	X(PUSH(ax));	// 24499 push    ax ;~ 0B93:2DED
cs=0xb93;eip=0x002dee; 	J(CALLF(sprite_set_1_size,0));	// 24500 call    sprite_set_1_size ;~ 0B93:2DEE
cs=0xb93;eip=0x002df3; 	T(ADD(sp, 8));	// 24501 add     sp, 8 ;~ 0B93:2DF3
cs=0xb93;eip=0x002df6; 	T(MOV(ax, 1));	// 24502 mov     ax, 1 ;~ 0B93:2DF6
cs=0xb93;eip=0x002df9; 	X(PUSH(ax));	// 24503 push    ax ;~ 0B93:2DF9
cs=0xb93;eip=0x002dfa; 	T(MOV(ax, offset(dseg,trackpreview_cliprect)));	// 24504 mov     ax, offset trackpreview_cliprect ;~ 0B93:2DFA
cs=0xb93;eip=0x002dfd; 	X(PUSH(ax));	// 24505 push    ax ;~ 0B93:2DFD
cs=0xb93;eip=0x002dfe; 	T(SUB(ax, ax));	// 24506 sub     ax, ax ;~ 0B93:2DFE
cs=0xb93;eip=0x002e00; 	X(PUSH(ax));	// 24507 push    ax ;~ 0B93:2E00
cs=0xb93;eip=0x002e01; 	X(PUSH(*(dw*)(raddr(ss,bp+var_34))));	// 24508 push    [bp+var_34] ;~ 0B93:2E01
cs=0xb93;eip=0x002e04; 	X(PUSH(ax));	// 24509 push    ax ;~ 0B93:2E04
cs=0xb93;eip=0x002e05; 	J(CALLF(select_cliprect_rotate,0));	// 24510 call    select_cliprect_rotate ;~ 0B93:2E05
cs=0xb93;eip=0x002e0a; 	T(ADD(sp, 0x0A));	// 24511 add     sp, 0Ah ;~ 0B93:2E0A
cs=0xb93;eip=0x002e0d; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), 0));	// 24512 mov     [bp+var_1C], 0 ;~ 0B93:2E0D
cs=0xb93;eip=0x002e12; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), 0));	// 24513 mov     [bp+var_1A], 0 ;~ 0B93:2E12
cs=0xb93;eip=0x002e17; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0x400));	// 24514 mov     [bp+var_16], 400h ;~ 0B93:2E17
cs=0xb93;eip=0x002e1c; 	X(MOV(*(raddr(ss,bp+var_38)), 0));	// 24515 mov     [bp+var_38], 0 ;~ 0B93:2E1C
cs=0xb93;eip=0x002e20; 	J(JMP(loc_1d11b));	// 24516 jmp     loc_1D11B ;~ 0B93:2E20
loc_1cd34:
	// 5873 
cs=0xb93;eip=0x002e24; 	X(MOV(*(raddr(ss,bp+var_3a)), 0));	// 24521 mov     [bp+var_3A], 0 ;~ 0B93:2E24
cs=0xb93;eip=0x002e28; 	X(MOV(*(raddr(ss,bp+var_10)), 0));	// 24522 mov     [bp+var_10], 0 ;~ 0B93:2E28
loc_1cd3c:
	// 5874 
cs=0xb93;eip=0x002e2c; 	T(CMP(*(raddr(ss,bp+var_3a)), 6));	// 24526 cmp     [bp+var_3A], 6 ;~ 0B93:2E2C
cs=0xb93;eip=0x002e30; 	J(JZ(loc_1cd45));	// 24527 jz      short loc_1CD45 ;~ 0B93:2E30
cs=0xb93;eip=0x002e32; 	J(JMP(loc_1ce04));	// 24528 jmp     loc_1CE04 ;~ 0B93:2E32
loc_1cd45:
	// 5875 
cs=0xb93;eip=0x002e35; 	T(MOV(di, *(dw*)(((db*)hillheightconsts)+2)));	// 24532 mov     di, hillHeightConsts+2 ;~ 0B93:2E35
cs=0xb93;eip=0x002e39; 	T(CMP(*(raddr(ss,bp+var_10)), 0));	// 24533 cmp     [bp+var_10], 0 ;~ 0B93:2E39
cs=0xb93;eip=0x002e3d; 	J(JZ(loc_1cd53));	// 24534 jz      short loc_1CD53 ;~ 0B93:2E3D
loc_1cd4f:
	// 5876 
cs=0xb93;eip=0x002e3f; 	X(MOV(*(raddr(ss,bp+var_3a)), 0));	// 24537 mov     [bp+var_3A], 0 ;~ 0B93:2E3F
loc_1cd53:
	// 5877 
cs=0xb93;eip=0x002e43; 	T(CMP(*(raddr(ss,bp+var_3a)), 0));	// 24541 cmp     [bp+var_3A], 0 ;~ 0B93:2E43
cs=0xb93;eip=0x002e47; 	J(JZ(loc_1cdca));	// 24542 jz      short loc_1CDCA ;~ 0B93:2E47
cs=0xb93;eip=0x002e49; 	T(MOV(al, *(raddr(ss,bp+var_3a))));	// 24543 mov     al, [bp+var_3A] ;~ 0B93:2E49
cs=0xb93;eip=0x002e4c; 	T(SUB(ah, ah));	// 24544 sub     ah, ah ;~ 0B93:2E4C
cs=0xb93;eip=0x002e4e; 	T(MOV(cx, ax));	// 24545 mov     cx, ax ;~ 0B93:2E4E
cs=0xb93;eip=0x002e50; 	T(SHL(ax, 1));	// 24546 shl     ax, 1 ;~ 0B93:2E50
cs=0xb93;eip=0x002e52; 	T(ADD(ax, cx));	// 24547 add     ax, cx ;~ 0B93:2E52
cs=0xb93;eip=0x002e54; 	T(SHL(ax, 1));	// 24548 shl     ax, 1 ;~ 0B93:2E54
cs=0xb93;eip=0x002e56; 	T(ADD(ax, cx));	// 24549 add     ax, cx ;~ 0B93:2E56
cs=0xb93;eip=0x002e58; 	T(SHL(ax, 1));	// 24550 shl     ax, 1 ;~ 0B93:2E58
cs=0xb93;eip=0x002e5a; 	T(ADD(ax, offset(dseg,sceneshapes2)));	// 24551 add     ax, offset sceneshapes2 ;~ 0B93:2E5A
cs=0xb93;eip=0x002e5d; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), ax));	// 24552 mov     [bp+var_3E], ax ;~ 0B93:2E5D
cs=0xb93;eip=0x002e60; 	T(MOV(bx, ax));	// 24553 mov     bx, ax ;~ 0B93:2E60
cs=0xb93;eip=0x002e62; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 24554 mov     ax, [bx+6] ;~ 0B93:2E62
cs=0xb93;eip=0x002e65; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 24555 mov     [bp+var_20], ax ;~ 0B93:2E65
cs=0xb93;eip=0x002e68; 	T(MOV(al, *(raddr(ss,bp+var_32))));	// 24556 mov     al, [bp+var_32] ;~ 0B93:2E68
cs=0xb93;eip=0x002e6b; 	T(CBW);	// 24557 cbw ;~ 0B93:2E6B
cs=0xb93;eip=0x002e6c; 	T(MOV(bx, ax));	// 24558 mov     bx, ax ;~ 0B93:2E6C
cs=0xb93;eip=0x002e6e; 	T(SHL(bx, 1));	// 24559 shl     bx, 1 ;~ 0B93:2E6E
cs=0xb93;eip=0x002e70; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 24560 mov     ax, trackcenterpos2[bx] ;~ 0B93:2E70
cs=0xb93;eip=0x002e74; 	T(SUB(ax, word_3c108));	// 24561 sub     ax, word_3C108 ;~ 0B93:2E74
cs=0xb93;eip=0x002e78; 	T(SAR(ax, 1));	// 24562 sar     ax, 1 ;~ 0B93:2E78
cs=0xb93;eip=0x002e7a; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), ax));	// 24563 mov     [bp+var_26], ax ;~ 0B93:2E7A
cs=0xb93;eip=0x002e7d; 	T(MOV(ax, di));	// 24564 mov     ax, di ;~ 0B93:2E7D
cs=0xb93;eip=0x002e7f; 	T(SUB(ax, word_3c10a));	// 24565 sub     ax, word_3C10A ;~ 0B93:2E7F
cs=0xb93;eip=0x002e83; 	T(SAR(ax, 1));	// 24566 sar     ax, 1 ;~ 0B93:2E83
cs=0xb93;eip=0x002e85; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 24567 mov     [bp+var_24], ax ;~ 0B93:2E85
cs=0xb93;eip=0x002e88; 	T(MOV(al, *(raddr(ss,bp+var_38))));	// 24568 mov     al, [bp+var_38] ;~ 0B93:2E88
cs=0xb93;eip=0x002e8b; 	T(CBW);	// 24569 cbw ;~ 0B93:2E8B
cs=0xb93;eip=0x002e8c; 	T(MOV(bx, ax));	// 24570 mov     bx, ax ;~ 0B93:2E8C
cs=0xb93;eip=0x002e8e; 	T(SHL(bx, 1));	// 24571 shl     bx, 1 ;~ 0B93:2E8E
cs=0xb93;eip=0x002e90; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 24572 mov     ax, trackcenterpos[bx] ;~ 0B93:2E90
cs=0xb93;eip=0x002e94; 	T(SUB(ax, word_3c10c));	// 24573 sub     ax, word_3C10C ;~ 0B93:2E94
cs=0xb93;eip=0x002e98; 	T(SAR(ax, 1));	// 24574 sar     ax, 1 ;~ 0B93:2E98
cs=0xb93;eip=0x002e9a; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 24575 mov     [bp+var_22], ax ;~ 0B93:2E9A
cs=0xb93;eip=0x002e9d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3e))));	// 24576 mov     bx, [bp+var_3E] ;~ 0B93:2E9D
cs=0xb93;eip=0x002ea0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 24577 mov     ax, [bx+2] ;~ 0B93:2EA0
cs=0xb93;eip=0x002ea3; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 24578 mov     [bp+var_18], ax ;~ 0B93:2EA3
cs=0xb93;eip=0x002ea6; 	X(MOV(*(raddr(ss,bp+var_14)), 5));	// 24579 mov     [bp+var_14], 5 ;~ 0B93:2EA6
cs=0xb93;eip=0x002eaa; 	X(MOV(*(raddr(ss,bp+var_13)), 0));	// 24580 mov     [bp+var_13], 0 ;~ 0B93:2EAA
cs=0xb93;eip=0x002eae; 	T(ax = bp+var_26);	// 24581 lea     ax, [bp+var_26] ;~ 0B93:2EAE
cs=0xb93;eip=0x002eb1; 	X(PUSH(ax));	// 24582 push    ax ;~ 0B93:2EB1
cs=0xb93;eip=0x002eb2; 	J(CALLF(transformed_shape_op,0));	// 24583 call    transformed_shape_op ;~ 0B93:2EB2
cs=0xb93;eip=0x002eb7; 	T(ADD(sp, 2));	// 24584 add     sp, 2 ;~ 0B93:2EB7
loc_1cdca:
	// 5878 
cs=0xb93;eip=0x002eba; 	T(CMP(*(raddr(ss,bp+var_10)), 0));	// 24587 cmp     [bp+var_10], 0 ;~ 0B93:2EBA
cs=0xb93;eip=0x002ebe; 	J(JNZ(loc_1cdd3));	// 24588 jnz     short loc_1CDD3 ;~ 0B93:2EBE
cs=0xb93;eip=0x002ec0; 	J(JMP(loc_1d086));	// 24589 jmp     loc_1D086 ;~ 0B93:2EC0
loc_1cdd3:
	// 5879 
cs=0xb93;eip=0x002ec3; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 24593 mov     al, [bp+var_10] ;~ 0B93:2EC3
cs=0xb93;eip=0x002ec6; 	T(SUB(ah, ah));	// 24594 sub     ah, ah ;~ 0B93:2EC6
cs=0xb93;eip=0x002ec8; 	T(MOV(cx, ax));	// 24595 mov     cx, ax ;~ 0B93:2EC8
cs=0xb93;eip=0x002eca; 	T(SHL(ax, 1));	// 24596 shl     ax, 1 ;~ 0B93:2ECA
cs=0xb93;eip=0x002ecc; 	T(ADD(ax, cx));	// 24597 add     ax, cx ;~ 0B93:2ECC
cs=0xb93;eip=0x002ece; 	T(SHL(ax, 1));	// 24598 shl     ax, 1 ;~ 0B93:2ECE
cs=0xb93;eip=0x002ed0; 	T(ADD(ax, cx));	// 24599 add     ax, cx ;~ 0B93:2ED0
cs=0xb93;eip=0x002ed2; 	T(SHL(ax, 1));	// 24600 shl     ax, 1 ;~ 0B93:2ED2
cs=0xb93;eip=0x002ed4; 	T(ADD(ax, offset(dseg,trkobjectlist)));	// 24601 add     ax, offset trkObjectList ;~ 0B93:2ED4
cs=0xb93;eip=0x002ed7; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), ax));	// 24602 mov     [bp+var_3E], ax ;~ 0B93:2ED7
cs=0xb93;eip=0x002eda; 	T(MOV(bx, ax));	// 24603 mov     bx, ax ;~ 0B93:2EDA
cs=0xb93;eip=0x002edc; 	T(TEST(*(raddr(ds,bx+0x0B)), 1));	// 24604 test    byte ptr [bx+0Bh], 1 ;~ 0B93:2EDC
cs=0xb93;eip=0x002ee0; 	J(JNZ(loc_1cdf5));	// 24605 jnz     short loc_1CDF5 ;~ 0B93:2EE0
cs=0xb93;eip=0x002ee2; 	J(JMP(loc_1cf14));	// 24606 jmp     loc_1CF14 ;~ 0B93:2EE2
loc_1cdf5:
	// 5880 
cs=0xb93;eip=0x002ee5; 	T(MOV(al, *(raddr(ss,bp+var_38))));	// 24610 mov     al, [bp+var_38] ;~ 0B93:2EE5
cs=0xb93;eip=0x002ee8; 	T(CBW);	// 24611 cbw ;~ 0B93:2EE8
cs=0xb93;eip=0x002ee9; 	T(MOV(bx, ax));	// 24612 mov     bx, ax ;~ 0B93:2EE9
cs=0xb93;eip=0x002eeb; 	T(SHL(bx, 1));	// 24613 shl     bx, 1 ;~ 0B93:2EEB
cs=0xb93;eip=0x002eed; 	T(MOV(ax, *(dw*)(((db*)&trackpos)+bx)));	// 24614 mov     ax, trackpos[bx] ;~ 0B93:2EED
cs=0xb93;eip=0x002ef1; 	J(JMP(loc_1cf20));	// 24615 jmp     loc_1CF20 ;~ 0B93:2EF1
loc_1ce04:
	// 5881 
cs=0xb93;eip=0x002ef4; 	T(SUB(di, di));	// 24619 sub     di, di ;~ 0B93:2EF4
cs=0xb93;eip=0x002ef6; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 24620 mov     al, [bp+var_10] ;~ 0B93:2EF6
cs=0xb93;eip=0x002ef9; 	T(SUB(ah, ah));	// 24621 sub     ah, ah ;~ 0B93:2EF9
cs=0xb93;eip=0x002efb; 	T(CMP(ax, 0x69));	// 24622 cmp     ax, 69h ; 'i' ;~ 0B93:2EFB
cs=0xb93;eip=0x002efe; 	J(JNC(loc_1ce13));	// 24623 jnb     short loc_1CE13 ;~ 0B93:2EFE
cs=0xb93;eip=0x002f00; 	J(JMP(loc_1cd53));	// 24624 jmp     loc_1CD53 ;~ 0B93:2F00
loc_1ce13:
	// 5882 
cs=0xb93;eip=0x002f03; 	T(CMP(ax, 0x6C));	// 24628 cmp     ax, 6Ch ; 'l' ;~ 0B93:2F03
cs=0xb93;eip=0x002f06; 	J(JBE(loc_1ce1b));	// 24629 jbe     short loc_1CE1B ;~ 0B93:2F06
cs=0xb93;eip=0x002f08; 	J(JMP(loc_1cd53));	// 24630 jmp     loc_1CD53 ;~ 0B93:2F08
loc_1ce1b:
	// 5883 
cs=0xb93;eip=0x002f0b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), di));	// 24634 mov     [bp+var_2A], di ;~ 0B93:2F0B
cs=0xb93;eip=0x002f0e; 	J(JMP(loc_1ced0));	// 24635 jmp     loc_1CED0 ;~ 0B93:2F0E
loc_1ce22:
	// 5884 
cs=0xb93;eip=0x002f12; 	T(MOV(al, *(raddr(ss,bp+var_32))));	// 24640 mov     al, [bp+var_32] ;~ 0B93:2F12
loc_1ce25:
	// 5885 
cs=0xb93;eip=0x002f15; 	X(MOV(*(raddr(ss,bp+var_36)), al));	// 24643 mov     [bp+var_36], al ;~ 0B93:2F15
cs=0xb93;eip=0x002f18; 	T(MOV(al, *(raddr(ss,bp+var_38))));	// 24644 mov     al, [bp+var_38] ;~ 0B93:2F18
loc_1ce2b:
	// 5886 
cs=0xb93;eip=0x002f1b; 	X(MOV(*(raddr(ss,bp+var_3c)), al));	// 24647 mov     [bp+var_3C], al ;~ 0B93:2F1B
loc_1ce2e:
	// 5887 
cs=0xb93;eip=0x002f1e; 	T(MOV(al, *(raddr(ss,bp+var_36))));	// 24650 mov     al, [bp+var_36] ;~ 0B93:2F1E
cs=0xb93;eip=0x002f21; 	T(CBW);	// 24651 cbw ;~ 0B93:2F21
cs=0xb93;eip=0x002f22; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), ax));	// 24652 mov     [bp+var_42], ax ;~ 0B93:2F22
cs=0xb93;eip=0x002f25; 	T(MOV(al, *(raddr(ss,bp+var_3c))));	// 24653 mov     al, [bp+var_3C] ;~ 0B93:2F25
cs=0xb93;eip=0x002f28; 	T(CBW);	// 24654 cbw ;~ 0B93:2F28
cs=0xb93;eip=0x002f29; 	T(SHL(ax, 1));	// 24655 shl     ax, 1 ;~ 0B93:2F29
cs=0xb93;eip=0x002f2b; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 24656 mov     [bp+var_40], ax ;~ 0B93:2F2B
cs=0xb93;eip=0x002f2e; 	T(MOV(bx, ax));	// 24657 mov     bx, ax ;~ 0B93:2F2E
cs=0xb93;eip=0x002f30; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 24658 mov     bx, terrainrows[bx] ;~ 0B93:2F30
cs=0xb93;eip=0x002f34; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_42))));	// 24659 add     bx, [bp+var_42] ;~ 0B93:2F34
cs=0xb93;eip=0x002f37; 	T(ADD(bx, *(dw*)(((db*)&td15_terr_map_main))));	// 24660 add     bx, word ptr td15_terr_map_main ;~ 0B93:2F37
cs=0xb93;eip=0x002f3b; 	T(MOV(es, *(dw*)(((db*)&td15_terr_map_main)+2)));	// 24661 mov     es, word ptr td15_terr_map_main+2 ;~ 0B93:2F3B
cs=0xb93;eip=0x002f3f; 	T(MOV(al, *(raddr(es,bx))));	// 24662 mov     al, es:[bx] ;~ 0B93:2F3F
cs=0xb93;eip=0x002f42; 	X(MOV(*(raddr(ss,bp+var_3a)), al));	// 24663 mov     [bp+var_3A], al ;~ 0B93:2F42
cs=0xb93;eip=0x002f45; 	T(OR(al, al));	// 24664 or      al, al ;~ 0B93:2F45
cs=0xb93;eip=0x002f47; 	J(JZ(loc_1cecd));	// 24665 jz      short loc_1CECD ;~ 0B93:2F47
cs=0xb93;eip=0x002f49; 	T(SUB(ah, ah));	// 24666 sub     ah, ah ;~ 0B93:2F49
cs=0xb93;eip=0x002f4b; 	T(MOV(cx, ax));	// 24667 mov     cx, ax ;~ 0B93:2F4B
cs=0xb93;eip=0x002f4d; 	T(SHL(ax, 1));	// 24668 shl     ax, 1 ;~ 0B93:2F4D
cs=0xb93;eip=0x002f4f; 	T(ADD(ax, cx));	// 24669 add     ax, cx ;~ 0B93:2F4F
cs=0xb93;eip=0x002f51; 	T(SHL(ax, 1));	// 24670 shl     ax, 1 ;~ 0B93:2F51
cs=0xb93;eip=0x002f53; 	T(ADD(ax, cx));	// 24671 add     ax, cx ;~ 0B93:2F53
cs=0xb93;eip=0x002f55; 	T(SHL(ax, 1));	// 24672 shl     ax, 1 ;~ 0B93:2F55
cs=0xb93;eip=0x002f57; 	T(ADD(ax, offset(dseg,sceneshapes2)));	// 24673 add     ax, offset sceneshapes2 ;~ 0B93:2F57
cs=0xb93;eip=0x002f5a; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), ax));	// 24674 mov     [bp+var_3E], ax ;~ 0B93:2F5A
cs=0xb93;eip=0x002f5d; 	T(MOV(bx, ax));	// 24675 mov     bx, ax ;~ 0B93:2F5D
cs=0xb93;eip=0x002f5f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 24676 mov     ax, [bx+4] ;~ 0B93:2F5F
cs=0xb93;eip=0x002f62; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 24677 mov     [bp+var_20], ax ;~ 0B93:2F62
cs=0xb93;eip=0x002f65; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_42))));	// 24678 mov     bx, [bp+var_42] ;~ 0B93:2F65
cs=0xb93;eip=0x002f68; 	T(SHL(bx, 1));	// 24679 shl     bx, 1 ;~ 0B93:2F68
cs=0xb93;eip=0x002f6a; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos2)+bx)));	// 24680 mov     ax, trackcenterpos2[bx] ;~ 0B93:2F6A
cs=0xb93;eip=0x002f6e; 	T(SUB(ax, word_3c108));	// 24681 sub     ax, word_3C108 ;~ 0B93:2F6E
cs=0xb93;eip=0x002f72; 	T(SAR(ax, 1));	// 24682 sar     ax, 1 ;~ 0B93:2F72
cs=0xb93;eip=0x002f74; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), ax));	// 24683 mov     [bp+var_26], ax ;~ 0B93:2F74
cs=0xb93;eip=0x002f77; 	T(MOV(ax, word_3c10a));	// 24684 mov     ax, word_3C10A ;~ 0B93:2F77
cs=0xb93;eip=0x002f7a; 	T(NEG(ax));	// 24685 neg     ax ;~ 0B93:2F7A
cs=0xb93;eip=0x002f7c; 	T(SAR(ax, 1));	// 24686 sar     ax, 1 ;~ 0B93:2F7C
cs=0xb93;eip=0x002f7e; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 24687 mov     [bp+var_24], ax ;~ 0B93:2F7E
cs=0xb93;eip=0x002f81; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_40))));	// 24688 mov     bx, [bp+var_40] ;~ 0B93:2F81
cs=0xb93;eip=0x002f84; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 24689 mov     ax, trackcenterpos[bx] ;~ 0B93:2F84
cs=0xb93;eip=0x002f88; 	T(SUB(ax, word_3c10c));	// 24690 sub     ax, word_3C10C ;~ 0B93:2F88
cs=0xb93;eip=0x002f8c; 	T(SAR(ax, 1));	// 24691 sar     ax, 1 ;~ 0B93:2F8C
cs=0xb93;eip=0x002f8e; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 24692 mov     [bp+var_22], ax ;~ 0B93:2F8E
cs=0xb93;eip=0x002f91; 	X(MOV(*(raddr(ss,bp+var_14)), 5));	// 24693 mov     [bp+var_14], 5 ;~ 0B93:2F91
cs=0xb93;eip=0x002f95; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), 0));	// 24694 mov     [bp+var_1C], 0 ;~ 0B93:2F95
cs=0xb93;eip=0x002f9a; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), 0));	// 24695 mov     [bp+var_1A], 0 ;~ 0B93:2F9A
cs=0xb93;eip=0x002f9f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3e))));	// 24696 mov     bx, [bp+var_3E] ;~ 0B93:2F9F
cs=0xb93;eip=0x002fa2; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 24697 mov     ax, [bx+2] ;~ 0B93:2FA2
cs=0xb93;eip=0x002fa5; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 24698 mov     [bp+var_18], ax ;~ 0B93:2FA5
cs=0xb93;eip=0x002fa8; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0x400));	// 24699 mov     [bp+var_16], 400h ;~ 0B93:2FA8
cs=0xb93;eip=0x002fad; 	X(MOV(*(raddr(ss,bp+var_13)), 0));	// 24700 mov     [bp+var_13], 0 ;~ 0B93:2FAD
cs=0xb93;eip=0x002fb1; 	T(ax = bp+var_26);	// 24701 lea     ax, [bp+var_26] ;~ 0B93:2FB1
cs=0xb93;eip=0x002fb4; 	X(PUSH(ax));	// 24702 push    ax ;~ 0B93:2FB4
cs=0xb93;eip=0x002fb5; 	J(CALLF(transformed_shape_op,0));	// 24703 call    transformed_shape_op ;~ 0B93:2FB5
cs=0xb93;eip=0x002fba; 	T(ADD(sp, 2));	// 24704 add     sp, 2 ;~ 0B93:2FBA
loc_1cecd:
	// 5888 
cs=0xb93;eip=0x002fbd; 	X(INC(*(dw*)(raddr(ss,bp+var_2a))));	// 24707 inc     [bp+var_2A] ;~ 0B93:2FBD
loc_1ced0:
	// 5889 
cs=0xb93;eip=0x002fc0; 	T(CMP(*(dw*)(raddr(ss,bp+var_2a)), 4));	// 24710 cmp     [bp+var_2A], 4 ;~ 0B93:2FC0
cs=0xb93;eip=0x002fc4; 	J(JL(loc_1ced9));	// 24711 jl      short loc_1CED9 ;~ 0B93:2FC4
cs=0xb93;eip=0x002fc6; 	J(JMP(loc_1cd4f));	// 24712 jmp     loc_1CD4F ;~ 0B93:2FC6
loc_1ced9:
	// 5890 
cs=0xb93;eip=0x002fc9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2a))));	// 24716 mov     ax, [bp+var_2A] ;~ 0B93:2FC9
cs=0xb93;eip=0x002fcc; 	T(OR(ax, ax));	// 24717 or      ax, ax ;~ 0B93:2FCC
cs=0xb93;eip=0x002fce; 	J(JNZ(loc_1cee3));	// 24718 jnz     short loc_1CEE3 ;~ 0B93:2FCE
cs=0xb93;eip=0x002fd0; 	J(JMP(loc_1ce22));	// 24719 jmp     loc_1CE22 ;~ 0B93:2FD0
loc_1cee3:
	// 5891 
cs=0xb93;eip=0x002fd3; 	T(CMP(ax, 1));	// 24723 cmp     ax, 1 ;~ 0B93:2FD3
cs=0xb93;eip=0x002fd6; 	J(JZ(loc_1cef6));	// 24724 jz      short loc_1CEF6 ;~ 0B93:2FD6
cs=0xb93;eip=0x002fd8; 	T(CMP(ax, 2));	// 24725 cmp     ax, 2 ;~ 0B93:2FD8
cs=0xb93;eip=0x002fdb; 	J(JZ(loc_1cefe));	// 24726 jz      short loc_1CEFE ;~ 0B93:2FDB
cs=0xb93;eip=0x002fdd; 	T(CMP(ax, 3));	// 24727 cmp     ax, 3 ;~ 0B93:2FDD
cs=0xb93;eip=0x002fe0; 	J(JZ(loc_1cf0c));	// 24728 jz      short loc_1CF0C ;~ 0B93:2FE0
cs=0xb93;eip=0x002fe2; 	J(JMP(loc_1ce2e));	// 24729 jmp     loc_1CE2E ;~ 0B93:2FE2
loc_1cef6:
	// 5892 
cs=0xb93;eip=0x002fe6; 	T(MOV(al, *(raddr(ss,bp+var_32))));	// 24734 mov     al, [bp+var_32] ;~ 0B93:2FE6
cs=0xb93;eip=0x002fe9; 	T(INC(al));	// 24735 inc     al ;~ 0B93:2FE9
cs=0xb93;eip=0x002feb; 	J(JMP(loc_1ce25));	// 24736 jmp     loc_1CE25 ;~ 0B93:2FEB
loc_1cefe:
	// 5893 
cs=0xb93;eip=0x002fee; 	T(MOV(al, *(raddr(ss,bp+var_32))));	// 24740 mov     al, [bp+var_32] ;~ 0B93:2FEE
loc_1cf01:
	// 5894 
cs=0xb93;eip=0x002ff1; 	X(MOV(*(raddr(ss,bp+var_36)), al));	// 24743 mov     [bp+var_36], al ;~ 0B93:2FF1
cs=0xb93;eip=0x002ff4; 	T(MOV(al, *(raddr(ss,bp+var_38))));	// 24744 mov     al, [bp+var_38] ;~ 0B93:2FF4
cs=0xb93;eip=0x002ff7; 	T(INC(al));	// 24745 inc     al ;~ 0B93:2FF7
cs=0xb93;eip=0x002ff9; 	J(JMP(loc_1ce2b));	// 24746 jmp     loc_1CE2B ;~ 0B93:2FF9
loc_1cf0c:
	// 5895 
cs=0xb93;eip=0x002ffc; 	T(MOV(al, *(raddr(ss,bp+var_32))));	// 24750 mov     al, [bp+var_32] ;~ 0B93:2FFC
cs=0xb93;eip=0x002fff; 	T(INC(al));	// 24751 inc     al ;~ 0B93:2FFF
cs=0xb93;eip=0x003001; 	J(JMP(loc_1cf01));	// 24752 jmp     short loc_1CF01 ;~ 0B93:3001
loc_1cf14:
	// 5896 
cs=0xb93;eip=0x003004; 	T(MOV(al, *(raddr(ss,bp+var_38))));	// 24757 mov     al, [bp+var_38] ;~ 0B93:3004
cs=0xb93;eip=0x003007; 	T(CBW);	// 24758 cbw ;~ 0B93:3007
cs=0xb93;eip=0x003008; 	T(MOV(bx, ax));	// 24759 mov     bx, ax ;~ 0B93:3008
cs=0xb93;eip=0x00300a; 	T(SHL(bx, 1));	// 24760 shl     bx, 1 ;~ 0B93:300A
cs=0xb93;eip=0x00300c; 	T(MOV(ax, *(dw*)(((db*)trackcenterpos)+bx)));	// 24761 mov     ax, trackcenterpos[bx] ;~ 0B93:300C
loc_1cf20:
	// 5897 
cs=0xb93;eip=0x003010; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 24764 mov     [bp+var_12], ax ;~ 0B93:3010
cs=0xb93;eip=0x003013; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3e))));	// 24765 mov     bx, [bp+var_3E] ;~ 0B93:3013
cs=0xb93;eip=0x003016; 	T(TEST(*(raddr(ds,bx+0x0B)), 2));	// 24766 test    byte ptr [bx+0Bh], 2 ;~ 0B93:3016
cs=0xb93;eip=0x00301a; 	J(JZ(loc_1cf3a));	// 24767 jz      short loc_1CF3A ;~ 0B93:301A
cs=0xb93;eip=0x00301c; 	T(MOV(al, *(raddr(ss,bp+var_32))));	// 24768 mov     al, [bp+var_32] ;~ 0B93:301C
cs=0xb93;eip=0x00301f; 	T(CBW);	// 24769 cbw ;~ 0B93:301F
cs=0xb93;eip=0x003020; 	T(MOV(bx, ax));	// 24770 mov     bx, ax ;~ 0B93:3020
cs=0xb93;eip=0x003022; 	T(SHL(bx, 1));	// 24771 shl     bx, 1 ;~ 0B93:3022
cs=0xb93;eip=0x003024; 	T(MOV(si, *(dw*)((((db*)trackpos2)+2)+bx)));	// 24772 mov     si, (trackpos2+2)[bx] ;~ 0B93:3024
cs=0xb93;eip=0x003028; 	J(JMP(loc_1cf46));	// 24773 jmp     short loc_1CF46 ;~ 0B93:3028
loc_1cf3a:
	// 5898 
cs=0xb93;eip=0x00302a; 	T(MOV(al, *(raddr(ss,bp+var_32))));	// 24777 mov     al, [bp+var_32] ;~ 0B93:302A
cs=0xb93;eip=0x00302d; 	T(CBW);	// 24778 cbw ;~ 0B93:302D
cs=0xb93;eip=0x00302e; 	T(MOV(bx, ax));	// 24779 mov     bx, ax ;~ 0B93:302E
cs=0xb93;eip=0x003030; 	T(SHL(bx, 1));	// 24780 shl     bx, 1 ;~ 0B93:3030
cs=0xb93;eip=0x003032; 	T(MOV(si, *(dw*)(((db*)trackcenterpos2)+bx)));	// 24781 mov     si, trackcenterpos2[bx] ;~ 0B93:3032
loc_1cf46:
	// 5899 
cs=0xb93;eip=0x003036; 	T(MOV(ax, si));	// 24784 mov     ax, si ;~ 0B93:3036
cs=0xb93;eip=0x003038; 	T(SUB(ax, word_3c108));	// 24785 sub     ax, word_3C108 ;~ 0B93:3038
cs=0xb93;eip=0x00303c; 	T(SAR(ax, 1));	// 24786 sar     ax, 1 ;~ 0B93:303C
cs=0xb93;eip=0x00303e; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 24787 mov     [bp+var_C], ax ;~ 0B93:303E
cs=0xb93;eip=0x003041; 	T(MOV(ax, di));	// 24788 mov     ax, di ;~ 0B93:3041
cs=0xb93;eip=0x003043; 	T(SUB(ax, word_3c10a));	// 24789 sub     ax, word_3C10A ;~ 0B93:3043
cs=0xb93;eip=0x003047; 	T(SAR(ax, 1));	// 24790 sar     ax, 1 ;~ 0B93:3047
cs=0xb93;eip=0x003049; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 24791 mov     [bp+var_A], ax ;~ 0B93:3049
cs=0xb93;eip=0x00304c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 24792 mov     ax, [bp+var_12] ;~ 0B93:304C
cs=0xb93;eip=0x00304f; 	T(SUB(ax, word_3c10c));	// 24793 sub     ax, word_3C10C ;~ 0B93:304F
cs=0xb93;eip=0x003053; 	T(SAR(ax, 1));	// 24794 sar     ax, 1 ;~ 0B93:3053
cs=0xb93;eip=0x003055; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 24795 mov     [bp+var_8], ax ;~ 0B93:3055
cs=0xb93;eip=0x003058; 	T(OR(di, di));	// 24796 or      di, di ;~ 0B93:3058
cs=0xb93;eip=0x00305a; 	J(JZ(loc_1cfbf));	// 24797 jz      short loc_1CFBF ;~ 0B93:305A
cs=0xb93;eip=0x00305c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3e))));	// 24798 mov     bx, [bp+var_3E] ;~ 0B93:305C
cs=0xb93;eip=0x00305f; 	T(MOV(al, *(raddr(ds,bx+0x0B))));	// 24799 mov     al, [bx+0Bh] ;~ 0B93:305F
cs=0xb93;eip=0x003062; 	T(CBW);	// 24800 cbw ;~ 0B93:3062
cs=0xb93;eip=0x003063; 	T(OR(ax, ax));	// 24801 or      ax, ax ;~ 0B93:3063
cs=0xb93;eip=0x003065; 	J(JZ(loc_1cf92));	// 24802 jz      short loc_1CF92 ;~ 0B93:3065
cs=0xb93;eip=0x003067; 	T(CMP(ax, 1));	// 24803 cmp     ax, 1 ;~ 0B93:3067
cs=0xb93;eip=0x00306a; 	J(JNZ(loc_1cf7f));	// 24804 jnz     short loc_1CF7F ;~ 0B93:306A
cs=0xb93;eip=0x00306c; 	J(JMP(loc_1d01a));	// 24805 jmp     loc_1D01A ;~ 0B93:306C
loc_1cf7f:
	// 5900 
cs=0xb93;eip=0x00306f; 	T(CMP(ax, 2));	// 24809 cmp     ax, 2 ;~ 0B93:306F
cs=0xb93;eip=0x003072; 	J(JNZ(loc_1cf87));	// 24810 jnz     short loc_1CF87 ;~ 0B93:3072
cs=0xb93;eip=0x003074; 	J(JMP(loc_1d022));	// 24811 jmp     loc_1D022 ;~ 0B93:3074
loc_1cf87:
	// 5901 
cs=0xb93;eip=0x003077; 	T(CMP(ax, 3));	// 24815 cmp     ax, 3 ;~ 0B93:3077
cs=0xb93;eip=0x00307a; 	J(JNZ(loc_1cf8f));	// 24816 jnz     short loc_1CF8F ;~ 0B93:307A
cs=0xb93;eip=0x00307c; 	J(JMP(loc_1d02a));	// 24817 jmp     loc_1D02A ;~ 0B93:307C
loc_1cf8f:
	// 5902 
cs=0xb93;eip=0x00307f; 	J(JMP(loc_1cf97));	// 24821 jmp     short loc_1CF97 ;~ 0B93:307F
loc_1cf92:
	// 5903 
cs=0xb93;eip=0x003082; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), offset(dseg,unk_4316e)));	// 24826 mov     [bp+var_20], offset unk_4316E ;~ 0B93:3082
loc_1cf97:
	// 5904 
cs=0xb93;eip=0x003087; 	X(PUSH(si));	// 24830 push    si ;~ 0B93:3087
cs=0xb93;eip=0x003088; 	X(PUSH(di));	// 24831 push    di ;~ 0B93:3088
cs=0xb93;eip=0x003089; 	T(di = bp+var_26);	// 24832 lea     di, [bp+var_26] ;~ 0B93:3089
cs=0xb93;eip=0x00308c; 	T(si = bp+var_c);	// 24833 lea     si, [bp+var_C] ;~ 0B93:308C
cs=0xb93;eip=0x00308f; 	X(PUSH(ss));	// 24834 push    ss ;~ 0B93:308F
cs=0xb93;eip=0x003090; 	X(POP(es));	// 24835 pop     es ;~ 0B93:3090
cs=0xb93;eip=0x003091; 	X(MOVSW);	// 24836 movsw ;~ 0B93:3091
cs=0xb93;eip=0x003092; 	X(MOVSW);	// 24837 movsw ;~ 0B93:3092
cs=0xb93;eip=0x003093; 	X(MOVSW);	// 24838 movsw ;~ 0B93:3093
cs=0xb93;eip=0x003094; 	X(POP(di));	// 24839 pop     di ;~ 0B93:3094
cs=0xb93;eip=0x003095; 	X(POP(si));	// 24840 pop     si ;~ 0B93:3095
cs=0xb93;eip=0x003096; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), 0));	// 24841 mov     [bp+var_18], 0 ;~ 0B93:3096
cs=0xb93;eip=0x00309b; 	X(MOV(*(raddr(ss,bp+var_14)), 5));	// 24842 mov     [bp+var_14], 5 ;~ 0B93:309B
cs=0xb93;eip=0x00309f; 	X(MOV(*(raddr(ss,bp+var_13)), 0));	// 24843 mov     [bp+var_13], 0 ;~ 0B93:309F
cs=0xb93;eip=0x0030a3; 	T(ax = bp+var_26);	// 24844 lea     ax, [bp+var_26] ;~ 0B93:30A3
cs=0xb93;eip=0x0030a6; 	X(PUSH(ax));	// 24845 push    ax ;~ 0B93:30A6
cs=0xb93;eip=0x0030a7; 	J(CALLF(transformed_shape_op,0));	// 24846 call    transformed_shape_op ;~ 0B93:30A7
cs=0xb93;eip=0x0030ac; 	T(ADD(sp, 2));	// 24847 add     sp, 2 ;~ 0B93:30AC
loc_1cfbf:
	// 5905 
cs=0xb93;eip=0x0030af; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3e))));	// 24850 mov     bx, [bp+var_3E] ;~ 0B93:30AF
cs=0xb93;eip=0x0030b2; 	T(CMP(*(raddr(ds,bx+8)), 0));	// 24851 cmp     byte ptr [bx+8], 0 ;~ 0B93:30B2
cs=0xb93;eip=0x0030b6; 	J(JZ(loc_1d042));	// 24852 jz      short loc_1D042 ;~ 0B93:30B6
cs=0xb93;eip=0x0030b8; 	T(MOV(al, *(raddr(ds,bx+8))));	// 24853 mov     al, [bx+8] ;~ 0B93:30B8
cs=0xb93;eip=0x0030bb; 	T(SUB(ah, ah));	// 24854 sub     ah, ah ;~ 0B93:30BB
cs=0xb93;eip=0x0030bd; 	T(MOV(cx, ax));	// 24855 mov     cx, ax ;~ 0B93:30BD
cs=0xb93;eip=0x0030bf; 	T(SHL(ax, 1));	// 24856 shl     ax, 1 ;~ 0B93:30BF
cs=0xb93;eip=0x0030c1; 	T(ADD(ax, cx));	// 24857 add     ax, cx ;~ 0B93:30C1
cs=0xb93;eip=0x0030c3; 	T(SHL(ax, 1));	// 24858 shl     ax, 1 ;~ 0B93:30C3
cs=0xb93;eip=0x0030c5; 	T(ADD(ax, cx));	// 24859 add     ax, cx ;~ 0B93:30C5
cs=0xb93;eip=0x0030c7; 	T(SHL(ax, 1));	// 24860 shl     ax, 1 ;~ 0B93:30C7
cs=0xb93;eip=0x0030c9; 	T(ADD(ax, offset(dseg,trkobjectlist)));	// 24861 add     ax, offset trkObjectList ;~ 0B93:30C9
cs=0xb93;eip=0x0030cc; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 24862 mov     [bp+var_2], ax ;~ 0B93:30CC
cs=0xb93;eip=0x0030cf; 	T(MOV(bx, ax));	// 24863 mov     bx, ax ;~ 0B93:30CF
cs=0xb93;eip=0x0030d1; 	T(CMP(*(dw*)(raddr(ds,bx+6)), 0));	// 24864 cmp     word ptr [bx+6], 0 ;~ 0B93:30D1
cs=0xb93;eip=0x0030d5; 	J(JZ(loc_1d042));	// 24865 jz      short loc_1D042 ;~ 0B93:30D5
cs=0xb93;eip=0x0030d7; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 24866 mov     ax, [bx+6] ;~ 0B93:30D7
cs=0xb93;eip=0x0030da; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 24867 mov     [bp+var_20], ax ;~ 0B93:30DA
cs=0xb93;eip=0x0030dd; 	X(PUSH(si));	// 24868 push    si ;~ 0B93:30DD
cs=0xb93;eip=0x0030de; 	X(PUSH(di));	// 24869 push    di ;~ 0B93:30DE
cs=0xb93;eip=0x0030df; 	T(di = bp+var_26);	// 24870 lea     di, [bp+var_26] ;~ 0B93:30DF
cs=0xb93;eip=0x0030e2; 	T(si = bp+var_c);	// 24871 lea     si, [bp+var_C] ;~ 0B93:30E2
cs=0xb93;eip=0x0030e5; 	X(PUSH(ss));	// 24872 push    ss ;~ 0B93:30E5
cs=0xb93;eip=0x0030e6; 	X(POP(es));	// 24873 pop     es ;~ 0B93:30E6
cs=0xb93;eip=0x0030e7; 	X(MOVSW);	// 24874 movsw ;~ 0B93:30E7
cs=0xb93;eip=0x0030e8; 	X(MOVSW);	// 24875 movsw ;~ 0B93:30E8
cs=0xb93;eip=0x0030e9; 	X(MOVSW);	// 24876 movsw ;~ 0B93:30E9
cs=0xb93;eip=0x0030ea; 	X(POP(di));	// 24877 pop     di ;~ 0B93:30EA
cs=0xb93;eip=0x0030eb; 	X(POP(si));	// 24878 pop     si ;~ 0B93:30EB
cs=0xb93;eip=0x0030ec; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3e))));	// 24879 mov     bx, [bp+var_3E] ;~ 0B93:30EC
cs=0xb93;eip=0x0030ef; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 24880 mov     ax, [bx+2] ;~ 0B93:30EF
cs=0xb93;eip=0x0030f2; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 24881 mov     [bp+var_18], ax ;~ 0B93:30F2
cs=0xb93;eip=0x0030f5; 	X(MOV(*(raddr(ss,bp+var_14)), 5));	// 24882 mov     [bp+var_14], 5 ;~ 0B93:30F5
cs=0xb93;eip=0x0030f9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 24883 mov     bx, [bp+var_2] ;~ 0B93:30F9
cs=0xb93;eip=0x0030fc; 	T(CMP(*(raddr(ds,bx+9)), 0));	// 24884 cmp     byte ptr [bx+9], 0 ;~ 0B93:30FC
cs=0xb93;eip=0x003100; 	J(JL(loc_1d032));	// 24885 jl      short loc_1D032 ;~ 0B93:3100
cs=0xb93;eip=0x003102; 	T(MOV(al, *(raddr(ds,bx+9))));	// 24886 mov     al, [bx+9] ;~ 0B93:3102
cs=0xb93;eip=0x003105; 	X(MOV(*(raddr(ss,bp+var_13)), al));	// 24887 mov     [bp+var_13], al ;~ 0B93:3105
cs=0xb93;eip=0x003108; 	J(JMP(loc_1d036));	// 24888 jmp     short loc_1D036 ;~ 0B93:3108
loc_1d01a:
	// 5906 
cs=0xb93;eip=0x00310a; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), offset(dseg,unk_4358e)));	// 24892 mov     [bp+var_20], offset unk_4358E ;~ 0B93:310A
cs=0xb93;eip=0x00310f; 	J(JMP(loc_1cf97));	// 24893 jmp     loc_1CF97 ;~ 0B93:310F
loc_1d022:
	// 5907 
cs=0xb93;eip=0x003112; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), offset(dseg,unk_435a4)));	// 24897 mov     [bp+var_20], offset unk_435A4 ;~ 0B93:3112
cs=0xb93;eip=0x003117; 	J(JMP(loc_1cf97));	// 24898 jmp     loc_1CF97 ;~ 0B93:3117
loc_1d02a:
	// 5908 
cs=0xb93;eip=0x00311a; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), offset(dseg,unk_435ba)));	// 24902 mov     [bp+var_20], offset unk_435BA ;~ 0B93:311A
cs=0xb93;eip=0x00311f; 	J(JMP(loc_1cf97));	// 24903 jmp     loc_1CF97 ;~ 0B93:311F
loc_1d032:
	// 5909 
cs=0xb93;eip=0x003122; 	X(MOV(*(raddr(ss,bp+var_13)), 0));	// 24907 mov     [bp+var_13], 0 ;~ 0B93:3122
loc_1d036:
	// 5910 
cs=0xb93;eip=0x003126; 	T(ax = bp+var_26);	// 24910 lea     ax, [bp+var_26] ;~ 0B93:3126
cs=0xb93;eip=0x003129; 	X(PUSH(ax));	// 24911 push    ax ;~ 0B93:3129
cs=0xb93;eip=0x00312a; 	J(CALLF(transformed_shape_op,0));	// 24912 call    transformed_shape_op ;~ 0B93:312A
cs=0xb93;eip=0x00312f; 	T(ADD(sp, 2));	// 24913 add     sp, 2 ;~ 0B93:312F
loc_1d042:
	// 5911 
cs=0xb93;eip=0x003132; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3e))));	// 24917 mov     bx, [bp+var_3E] ;~ 0B93:3132
cs=0xb93;eip=0x003135; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 24918 mov     ax, [bx+6] ;~ 0B93:3135
cs=0xb93;eip=0x003138; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 24919 mov     [bp+var_20], ax ;~ 0B93:3138
cs=0xb93;eip=0x00313b; 	X(PUSH(si));	// 24920 push    si ;~ 0B93:313B
cs=0xb93;eip=0x00313c; 	X(PUSH(di));	// 24921 push    di ;~ 0B93:313C
cs=0xb93;eip=0x00313d; 	T(di = bp+var_26);	// 24922 lea     di, [bp+var_26] ;~ 0B93:313D
cs=0xb93;eip=0x003140; 	T(si = bp+var_c);	// 24923 lea     si, [bp+var_C] ;~ 0B93:3140
cs=0xb93;eip=0x003143; 	X(PUSH(ss));	// 24924 push    ss ;~ 0B93:3143
cs=0xb93;eip=0x003144; 	X(POP(es));	// 24925 pop     es ;~ 0B93:3144
cs=0xb93;eip=0x003145; 	X(MOVSW);	// 24926 movsw ;~ 0B93:3145
cs=0xb93;eip=0x003146; 	X(MOVSW);	// 24927 movsw ;~ 0B93:3146
cs=0xb93;eip=0x003147; 	X(MOVSW);	// 24928 movsw ;~ 0B93:3147
cs=0xb93;eip=0x003148; 	X(POP(di));	// 24929 pop     di ;~ 0B93:3148
cs=0xb93;eip=0x003149; 	X(POP(si));	// 24930 pop     si ;~ 0B93:3149
cs=0xb93;eip=0x00314a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 24931 mov     ax, [bx+2] ;~ 0B93:314A
cs=0xb93;eip=0x00314d; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 24932 mov     [bp+var_18], ax ;~ 0B93:314D
cs=0xb93;eip=0x003150; 	T(MOV(al, *(raddr(ds,bx+0x0A))));	// 24933 mov     al, [bx+0Ah] ;~ 0B93:3150
cs=0xb93;eip=0x003153; 	T(OR(al, 4));	// 24934 or      al, 4 ;~ 0B93:3153
cs=0xb93;eip=0x003155; 	X(MOV(*(raddr(ss,bp+var_14)), al));	// 24935 mov     [bp+var_14], al ;~ 0B93:3155
cs=0xb93;eip=0x003158; 	T(CMP(*(raddr(ds,bx+9)), 0));	// 24936 cmp     byte ptr [bx+9], 0 ;~ 0B93:3158
cs=0xb93;eip=0x00315c; 	J(JL(loc_1d076));	// 24937 jl      short loc_1D076 ;~ 0B93:315C
cs=0xb93;eip=0x00315e; 	T(MOV(al, *(raddr(ds,bx+9))));	// 24938 mov     al, [bx+9] ;~ 0B93:315E
cs=0xb93;eip=0x003161; 	X(MOV(*(raddr(ss,bp+var_13)), al));	// 24939 mov     [bp+var_13], al ;~ 0B93:3161
cs=0xb93;eip=0x003164; 	J(JMP(loc_1d07a));	// 24940 jmp     short loc_1D07A ;~ 0B93:3164
loc_1d076:
	// 5912 
cs=0xb93;eip=0x003166; 	X(MOV(*(raddr(ss,bp+var_13)), 0));	// 24944 mov     [bp+var_13], 0 ;~ 0B93:3166
loc_1d07a:
	// 5913 
cs=0xb93;eip=0x00316a; 	T(ax = bp+var_26);	// 24947 lea     ax, [bp+var_26] ;~ 0B93:316A
cs=0xb93;eip=0x00316d; 	X(PUSH(ax));	// 24948 push    ax ;~ 0B93:316D
cs=0xb93;eip=0x00316e; 	J(CALLF(transformed_shape_op,0));	// 24949 call    transformed_shape_op ;~ 0B93:316E
cs=0xb93;eip=0x003173; 	T(ADD(sp, 2));	// 24950 add     sp, 2 ;~ 0B93:3173
loc_1d086:
	// 5914 
cs=0xb93;eip=0x003176; 	J(CALLF(get_a_poly_info,0));	// 24953 call    get_a_poly_info ;~ 0B93:3176
cs=0xb93;eip=0x00317b; 	X(INC(*(raddr(ss,bp+var_32))));	// 24954 inc     [bp+var_32] ;~ 0B93:317B
loc_1d08e:
	// 5915 
cs=0xb93;eip=0x00317e; 	T(CMP(*(raddr(ss,bp+var_32)), 0x1E));	// 24957 cmp     [bp+var_32], 1Eh ;~ 0B93:317E
cs=0xb93;eip=0x003182; 	J(JL(loc_1d097));	// 24958 jl      short loc_1D097 ;~ 0B93:3182
cs=0xb93;eip=0x003184; 	J(JMP(loc_1d118));	// 24959 jmp     loc_1D118 ;~ 0B93:3184
loc_1d097:
	// 5916 
cs=0xb93;eip=0x003187; 	T(MOV(al, *(raddr(ss,bp+var_32))));	// 24963 mov     al, [bp+var_32] ;~ 0B93:3187
cs=0xb93;eip=0x00318a; 	T(CBW);	// 24964 cbw ;~ 0B93:318A
cs=0xb93;eip=0x00318b; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 24965 mov     [bp+var_40], ax ;~ 0B93:318B
cs=0xb93;eip=0x00318e; 	T(MOV(al, *(raddr(ss,bp+var_38))));	// 24966 mov     al, [bp+var_38] ;~ 0B93:318E
cs=0xb93;eip=0x003191; 	T(CBW);	// 24967 cbw ;~ 0B93:3191
cs=0xb93;eip=0x003192; 	T(SHL(ax, 1));	// 24968 shl     ax, 1 ;~ 0B93:3192
cs=0xb93;eip=0x003194; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), ax));	// 24969 mov     [bp+var_42], ax ;~ 0B93:3194
cs=0xb93;eip=0x003197; 	T(MOV(bx, ax));	// 24970 mov     bx, ax ;~ 0B93:3197
cs=0xb93;eip=0x003199; 	T(MOV(bx, *(dw*)(((db*)trackrows)+bx)));	// 24971 mov     bx, trackrows[bx] ;~ 0B93:3199
cs=0xb93;eip=0x00319d; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_40))));	// 24972 add     bx, [bp+var_40] ;~ 0B93:319D
cs=0xb93;eip=0x0031a0; 	T(ADD(bx, *(dw*)(((db*)&td14_elem_map_main))));	// 24973 add     bx, word ptr td14_elem_map_main ;~ 0B93:31A0
cs=0xb93;eip=0x0031a4; 	T(MOV(es, *(dw*)(((db*)&td14_elem_map_main)+2)));	// 24974 mov     es, word ptr td14_elem_map_main+2 ;~ 0B93:31A4
cs=0xb93;eip=0x0031a8; 	T(MOV(al, *(raddr(es,bx))));	// 24975 mov     al, es:[bx] ;~ 0B93:31A8
cs=0xb93;eip=0x0031ab; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 24976 mov     [bp+var_10], al ;~ 0B93:31AB
cs=0xb93;eip=0x0031ae; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_42))));	// 24977 mov     bx, [bp+var_42] ;~ 0B93:31AE
cs=0xb93;eip=0x0031b1; 	T(MOV(bx, *(dw*)(((db*)terrainrows)+bx)));	// 24978 mov     bx, terrainrows[bx] ;~ 0B93:31B1
cs=0xb93;eip=0x0031b5; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_40))));	// 24979 add     bx, [bp+var_40] ;~ 0B93:31B5
cs=0xb93;eip=0x0031b8; 	T(ADD(bx, *(dw*)(((db*)&td15_terr_map_main))));	// 24980 add     bx, word ptr td15_terr_map_main ;~ 0B93:31B8
cs=0xb93;eip=0x0031bc; 	T(MOV(es, *(dw*)(((db*)&td15_terr_map_main)+2)));	// 24981 mov     es, word ptr td15_terr_map_main+2 ;~ 0B93:31BC
cs=0xb93;eip=0x0031c0; 	T(MOV(al, *(raddr(es,bx))));	// 24982 mov     al, es:[bx] ;~ 0B93:31C0
cs=0xb93;eip=0x0031c3; 	X(MOV(*(raddr(ss,bp+var_3a)), al));	// 24983 mov     [bp+var_3A], al ;~ 0B93:31C3
cs=0xb93;eip=0x0031c6; 	T(CMP(*(raddr(ss,bp+var_10)), 0));	// 24984 cmp     [bp+var_10], 0 ;~ 0B93:31C6
cs=0xb93;eip=0x0031ca; 	J(JNZ(loc_1d0df));	// 24985 jnz     short loc_1D0DF ;~ 0B93:31CA
cs=0xb93;eip=0x0031cc; 	J(JMP(loc_1cd3c));	// 24986 jmp     loc_1CD3C ;~ 0B93:31CC
loc_1d0df:
	// 5917 
cs=0xb93;eip=0x0031cf; 	T(CMP(al, 7));	// 24990 cmp     al, 7 ;~ 0B93:31CF
cs=0xb93;eip=0x0031d1; 	J(JC(loc_1d100));	// 24991 jb      short loc_1D100 ;~ 0B93:31D1
cs=0xb93;eip=0x0031d3; 	T(CMP(al, 0x0B));	// 24992 cmp     al, 0Bh ;~ 0B93:31D3
cs=0xb93;eip=0x0031d5; 	J(JNC(loc_1d100));	// 24993 jnb     short loc_1D100 ;~ 0B93:31D5
cs=0xb93;eip=0x0031d7; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 24994 mov     al, [bp+var_10] ;~ 0B93:31D7
cs=0xb93;eip=0x0031da; 	T(SUB(ah, ah));	// 24995 sub     ah, ah ;~ 0B93:31DA
cs=0xb93;eip=0x0031dc; 	X(PUSH(ax));	// 24996 push    ax ;~ 0B93:31DC
cs=0xb93;eip=0x0031dd; 	T(MOV(al, *(raddr(ss,bp+var_3a))));	// 24997 mov     al, [bp+var_3A] ;~ 0B93:31DD
cs=0xb93;eip=0x0031e0; 	X(PUSH(ax));	// 24998 push    ax ;~ 0B93:31E0
cs=0xb93;eip=0x0031e1; 	J(CALLF(subst_hillroad_track,0));	// 24999 call    subst_hillroad_track ;~ 0B93:31E1
cs=0xb93;eip=0x0031e6; 	T(ADD(sp, 4));	// 25000 add     sp, 4 ;~ 0B93:31E6
cs=0xb93;eip=0x0031e9; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 25001 mov     [bp+var_10], al ;~ 0B93:31E9
cs=0xb93;eip=0x0031ec; 	X(MOV(*(raddr(ss,bp+var_3a)), 0));	// 25002 mov     [bp+var_3A], 0 ;~ 0B93:31EC
loc_1d100:
	// 5918 
cs=0xb93;eip=0x0031f0; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 25006 mov     al, [bp+var_10] ;~ 0B93:31F0
cs=0xb93;eip=0x0031f3; 	T(SUB(ah, ah));	// 25007 sub     ah, ah ;~ 0B93:31F3
cs=0xb93;eip=0x0031f5; 	T(CMP(ax, 0x0FD));	// 25008 cmp     ax, 0FDh ; 'ı' ;~ 0B93:31F5
cs=0xb93;eip=0x0031f8; 	J(JNC(loc_1d10d));	// 25009 jnb     short loc_1D10D ;~ 0B93:31F8
cs=0xb93;eip=0x0031fa; 	J(JMP(loc_1cd3c));	// 25010 jmp     loc_1CD3C ;~ 0B93:31FA
loc_1d10d:
	// 5919 
cs=0xb93;eip=0x0031fd; 	T(CMP(ax, 0x0FF));	// 25014 cmp     ax, 0FFh ;~ 0B93:31FD
cs=0xb93;eip=0x003200; 	J(JA(loc_1d115));	// 25015 ja      short loc_1D115 ;~ 0B93:3200
cs=0xb93;eip=0x003202; 	J(JMP(loc_1cd34));	// 25016 jmp     loc_1CD34 ;~ 0B93:3202
loc_1d115:
	// 5920 
cs=0xb93;eip=0x003205; 	J(JMP(loc_1cd3c));	// 25020 jmp     loc_1CD3C ;~ 0B93:3205
loc_1d118:
	// 5921 
cs=0xb93;eip=0x003208; 	X(INC(*(raddr(ss,bp+var_38))));	// 25024 inc     [bp+var_38] ;~ 0B93:3208
loc_1d11b:
	// 5922 
cs=0xb93;eip=0x00320b; 	T(CMP(*(raddr(ss,bp+var_38)), 0x1E));	// 25027 cmp     [bp+var_38], 1Eh ;~ 0B93:320B
cs=0xb93;eip=0x00320f; 	J(JGE(loc_1d128));	// 25028 jge     short loc_1D128 ;~ 0B93:320F
cs=0xb93;eip=0x003211; 	X(MOV(*(raddr(ss,bp+var_32)), 0));	// 25029 mov     [bp+var_32], 0 ;~ 0B93:3211
cs=0xb93;eip=0x003215; 	J(JMP(loc_1d08e));	// 25030 jmp     loc_1D08E ;~ 0B93:3215
loc_1d128:
	// 5923 
cs=0xb93;eip=0x003218; 	X(POP(si));	// 25034 pop     si ;~ 0B93:3218
cs=0xb93;eip=0x003219; 	X(POP(di));	// 25035 pop     di ;~ 0B93:3219
cs=0xb93;eip=0x00321a; 	T(MOV(sp, bp));	// 25036 mov     sp, bp ;~ 0B93:321A
cs=0xb93;eip=0x00321c; 	X(POP(bp));	// 25037 pop     bp ;~ 0B93:321C
cs=0xb93;eip=0x00321d; 	J(RETF(0));	// 25038 retf ;~ 0B93:321D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdraw_track_preview: 	goto draw_track_preview;
        case m2c::kloc_1cc5b: 	goto loc_1cc5b;
        case m2c::kloc_1cd34: 	goto loc_1cd34;
        case m2c::kloc_1cd3c: 	goto loc_1cd3c;
        case m2c::kloc_1cd45: 	goto loc_1cd45;
        case m2c::kloc_1cd4f: 	goto loc_1cd4f;
        case m2c::kloc_1cd53: 	goto loc_1cd53;
        case m2c::kloc_1cdca: 	goto loc_1cdca;
        case m2c::kloc_1cdd3: 	goto loc_1cdd3;
        case m2c::kloc_1cdf5: 	goto loc_1cdf5;
        case m2c::kloc_1ce04: 	goto loc_1ce04;
        case m2c::kloc_1ce13: 	goto loc_1ce13;
        case m2c::kloc_1ce1b: 	goto loc_1ce1b;
        case m2c::kloc_1ce22: 	goto loc_1ce22;
        case m2c::kloc_1ce25: 	goto loc_1ce25;
        case m2c::kloc_1ce2b: 	goto loc_1ce2b;
        case m2c::kloc_1ce2e: 	goto loc_1ce2e;
        case m2c::kloc_1cecd: 	goto loc_1cecd;
        case m2c::kloc_1ced0: 	goto loc_1ced0;
        case m2c::kloc_1ced9: 	goto loc_1ced9;
        case m2c::kloc_1cee3: 	goto loc_1cee3;
        case m2c::kloc_1cef6: 	goto loc_1cef6;
        case m2c::kloc_1cefe: 	goto loc_1cefe;
        case m2c::kloc_1cf01: 	goto loc_1cf01;
        case m2c::kloc_1cf0c: 	goto loc_1cf0c;
        case m2c::kloc_1cf14: 	goto loc_1cf14;
        case m2c::kloc_1cf20: 	goto loc_1cf20;
        case m2c::kloc_1cf3a: 	goto loc_1cf3a;
        case m2c::kloc_1cf46: 	goto loc_1cf46;
        case m2c::kloc_1cf7f: 	goto loc_1cf7f;
        case m2c::kloc_1cf87: 	goto loc_1cf87;
        case m2c::kloc_1cf8f: 	goto loc_1cf8f;
        case m2c::kloc_1cf92: 	goto loc_1cf92;
        case m2c::kloc_1cf97: 	goto loc_1cf97;
        case m2c::kloc_1cfbf: 	goto loc_1cfbf;
        case m2c::kloc_1d01a: 	goto loc_1d01a;
        case m2c::kloc_1d022: 	goto loc_1d022;
        case m2c::kloc_1d02a: 	goto loc_1d02a;
        case m2c::kloc_1d032: 	goto loc_1d032;
        case m2c::kloc_1d036: 	goto loc_1d036;
        case m2c::kloc_1d042: 	goto loc_1d042;
        case m2c::kloc_1d076: 	goto loc_1d076;
        case m2c::kloc_1d07a: 	goto loc_1d07a;
        case m2c::kloc_1d086: 	goto loc_1d086;
        case m2c::kloc_1d08e: 	goto loc_1d08e;
        case m2c::kloc_1d097: 	goto loc_1d097;
        case m2c::kloc_1d0df: 	goto loc_1d0df;
        case m2c::kloc_1d100: 	goto loc_1d100;
        case m2c::kloc_1d10d: 	goto loc_1d10d;
        case m2c::kloc_1d115: 	goto loc_1d115;
        case m2c::kloc_1d118: 	goto loc_1d118;
        case m2c::kloc_1d11b: 	goto loc_1d11b;
        case m2c::kloc_1d128: 	goto loc_1d128;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool draw_ingame_text(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    draw_ingame_text:
    _begin:
cs=0xb93;eip=0x00321e; 	X(PUSH(bp));	// 25048 push    bp ;~ 0B93:321E
cs=0xb93;eip=0x00321f; 	T(MOV(bp, sp));	// 25049 mov     bp, sp ;~ 0B93:321F
cs=0xb93;eip=0x003221; 	T(SUB(sp, 2));	// 25050 sub     sp, 2 ;~ 0B93:3221
cs=0xb93;eip=0x003224; 	X(PUSH(di));	// 25051 push    di ;~ 0B93:3224
cs=0xb93;eip=0x003225; 	X(PUSH(si));	// 25052 push    si              ; __int16 ;~ 0B93:3225
cs=0xb93;eip=0x003226; 	X(PUSH(si));	// 25053 push    si ;~ 0B93:3226
cs=0xb93;eip=0x003227; 	T(MOV(di, offset(dseg,rect_ingame_text)));	// 25054 mov     di, offset rect_ingame_text ;~ 0B93:3227
cs=0xb93;eip=0x00322a; 	T(MOV(si, offset(dseg,cliprect_unk)));	// 25055 mov     si, offset cliprect_unk ;~ 0B93:322A
cs=0xb93;eip=0x00322d; 	X(PUSH(ds));	// 25056 push    ds ;~ 0B93:322D
cs=0xb93;eip=0x00322e; 	X(POP(es));	// 25057 pop     es ;~ 0B93:322E
cs=0xb93;eip=0x00322f; 	X(MOVSW);	// 25059 movsw ;~ 0B93:322F
cs=0xb93;eip=0x003230; 	X(MOVSW);	// 25060 movsw ;~ 0B93:3230
cs=0xb93;eip=0x003231; 	X(MOVSW);	// 25061 movsw ;~ 0B93:3231
cs=0xb93;eip=0x003232; 	X(MOVSW);	// 25062 movsw ;~ 0B93:3232
cs=0xb93;eip=0x003233; 	X(POP(si));	// 25063 pop     si ;~ 0B93:3233
cs=0xb93;eip=0x003234; 	T(CMP(idle_expired, 0));	// 25064 cmp     idle_expired, 0 ;~ 0B93:3234
cs=0xb93;eip=0x003239; 	J(JNZ(loc_1d14e));	// 25065 jnz     short loc_1D14E ;~ 0B93:3239
cs=0xb93;eip=0x00323b; 	J(JMP(loc_1d1e6));	// 25066 jmp     loc_1D1E6 ;~ 0B93:323B
loc_1d14e:
	// 5924 
cs=0xb93;eip=0x00323e; 	T(MOV(ax, offset(dseg,adm1)));	// 25070 mov     ax, offset aDm1 ; "Professional Driver" ;~ 0B93:323E
cs=0xb93;eip=0x003241; 	X(PUSH(ax));	// 25071 push    ax ;~ 0B93:3241
cs=0xb93;eip=0x003242; 	X(PUSH(word_449a2));	// 25072 push    word_449A2 ;~ 0B93:3242
cs=0xb93;eip=0x003246; 	X(PUSH(gameresptr));	// 25073 push    gameresptr ;~ 0B93:3246
cs=0xb93;eip=0x00324a; 	J(CALLF(locate_text_res,0));	// 25074 call    locate_text_res ;~ 0B93:324A
cs=0xb93;eip=0x00324f; 	T(ADD(sp, 6));	// 25075 add     sp, 6 ;~ 0B93:324F
cs=0xb93;eip=0x003252; 	X(PUSH(dx));	// 25076 push    dx ;~ 0B93:3252
cs=0xb93;eip=0x003253; 	X(PUSH(ax));	// 25077 push    ax ;~ 0B93:3253
cs=0xb93;eip=0x003254; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 25078 mov     ax, offset resID_byte1 ;~ 0B93:3254
cs=0xb93;eip=0x003257; 	X(PUSH(ax));	// 25079 push    ax ;~ 0B93:3257
cs=0xb93;eip=0x003258; 	J(CALLF(copy_string,0));	// 25080 call    copy_string ;~ 0B93:3258
cs=0xb93;eip=0x00325d; 	T(ADD(sp, 6));	// 25081 add     sp, 6 ;~ 0B93:325D
cs=0xb93;eip=0x003260; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25082 mov     ax, offset rect_ingame_text ;~ 0B93:3260
cs=0xb93;eip=0x003263; 	X(PUSH(ax));	// 25083 push    ax ;~ 0B93:3263
cs=0xb93;eip=0x003264; 	T(SUB(ax, ax));	// 25084 sub     ax, ax ;~ 0B93:3264
cs=0xb93;eip=0x003266; 	X(PUSH(ax));	// 25085 push    ax ;~ 0B93:3266
cs=0xb93;eip=0x003267; 	X(PUSH(dialog_fnt_colour));	// 25086 push    dialog_fnt_colour ;~ 0B93:3267
cs=0xb93;eip=0x00326b; 	T(MOV(ax, 0x0AA));	// 25087 mov     ax, 0AAh ; 'ª' ;~ 0B93:326B
cs=0xb93;eip=0x00326e; 	X(PUSH(ax));	// 25088 push    ax ;~ 0B93:326E
cs=0xb93;eip=0x00326f; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 25089 mov     ax, offset resID_byte1 ;~ 0B93:326F
cs=0xb93;eip=0x003272; 	X(PUSH(ax));	// 25090 push    ax ;~ 0B93:3272
cs=0xb93;eip=0x003273; 	J(CALLF(font_op2_alt,0));	// 25091 call    font_op2_alt ;~ 0B93:3273
cs=0xb93;eip=0x003278; 	T(ADD(sp, 2));	// 25092 add     sp, 2 ;~ 0B93:3278
cs=0xb93;eip=0x00327b; 	X(PUSH(ax));	// 25093 push    ax ;~ 0B93:327B
cs=0xb93;eip=0x00327c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 25094 mov     ax, offset resID_byte1 ;~ 0B93:327C
cs=0xb93;eip=0x00327f; 	X(PUSH(ax));	// 25095 push    ax ;~ 0B93:327F
cs=0xb93;eip=0x003280; 	J(CALLF(intro_draw_text,0));	// 25096 call    intro_draw_text ;~ 0B93:3280
cs=0xb93;eip=0x003285; 	T(ADD(sp, 0x0A));	// 25097 add     sp, 0Ah ;~ 0B93:3285
cs=0xb93;eip=0x003288; 	X(PUSH(ax));	// 25098 push    ax ;~ 0B93:3288
cs=0xb93;eip=0x003289; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25099 mov     ax, offset rect_ingame_text ;~ 0B93:3289
cs=0xb93;eip=0x00328c; 	X(PUSH(ax));	// 25100 push    ax ;~ 0B93:328C
cs=0xb93;eip=0x00328d; 	J(CALLF(rect_union,0));	// 25101 call    rect_union ;~ 0B93:328D
cs=0xb93;eip=0x003292; 	T(ADD(sp, 6));	// 25102 add     sp, 6 ;~ 0B93:3292
cs=0xb93;eip=0x003295; 	T(MOV(ax, offset(dseg,adm2)));	// 25103 mov     ax, offset aDm2 ; on Closed Circuit ;~ 0B93:3295
cs=0xb93;eip=0x003298; 	X(PUSH(ax));	// 25104 push    ax ;~ 0B93:3298
cs=0xb93;eip=0x003299; 	X(PUSH(word_449a2));	// 25105 push    word_449A2 ;~ 0B93:3299
cs=0xb93;eip=0x00329d; 	X(PUSH(gameresptr));	// 25106 push    gameresptr ;~ 0B93:329D
cs=0xb93;eip=0x0032a1; 	J(CALLF(locate_text_res,0));	// 25107 call    locate_text_res ;~ 0B93:32A1
cs=0xb93;eip=0x0032a6; 	T(ADD(sp, 6));	// 25108 add     sp, 6 ;~ 0B93:32A6
cs=0xb93;eip=0x0032a9; 	X(PUSH(dx));	// 25109 push    dx ;~ 0B93:32A9
cs=0xb93;eip=0x0032aa; 	X(PUSH(ax));	// 25110 push    ax ;~ 0B93:32AA
cs=0xb93;eip=0x0032ab; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 25111 mov     ax, offset resID_byte1 ;~ 0B93:32AB
cs=0xb93;eip=0x0032ae; 	X(PUSH(ax));	// 25112 push    ax ;~ 0B93:32AE
cs=0xb93;eip=0x0032af; 	J(CALLF(copy_string,0));	// 25113 call    copy_string ;~ 0B93:32AF
cs=0xb93;eip=0x0032b4; 	T(ADD(sp, 6));	// 25114 add     sp, 6 ;~ 0B93:32B4
cs=0xb93;eip=0x0032b7; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25115 mov     ax, offset rect_ingame_text ;~ 0B93:32B7
cs=0xb93;eip=0x0032ba; 	X(PUSH(ax));	// 25116 push    ax ;~ 0B93:32BA
cs=0xb93;eip=0x0032bb; 	T(SUB(ax, ax));	// 25117 sub     ax, ax ;~ 0B93:32BB
cs=0xb93;eip=0x0032bd; 	X(PUSH(ax));	// 25118 push    ax ;~ 0B93:32BD
cs=0xb93;eip=0x0032be; 	X(PUSH(dialog_fnt_colour));	// 25119 push    dialog_fnt_colour ;~ 0B93:32BE
cs=0xb93;eip=0x0032c2; 	T(MOV(ax, 0x0B6));	// 25120 mov     ax, 0B6h ; '¶' ;~ 0B93:32C2
loc_1d1d5:
	// 5925 
cs=0xb93;eip=0x0032c5; 	X(PUSH(ax));	// 25124 push    ax ;~ 0B93:32C5
cs=0xb93;eip=0x0032c6; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 25125 mov     ax, offset resID_byte1 ;~ 0B93:32C6
cs=0xb93;eip=0x0032c9; 	X(PUSH(ax));	// 25126 push    ax ;~ 0B93:32C9
cs=0xb93;eip=0x0032ca; 	J(CALLF(font_op2_alt,0));	// 25127 call    font_op2_alt ;~ 0B93:32CA
cs=0xb93;eip=0x0032cf; 	T(ADD(sp, 2));	// 25128 add     sp, 2 ;~ 0B93:32CF
cs=0xb93;eip=0x0032d2; 	J(JMP(loc_1d511));	// 25129 jmp     loc_1D511 ;~ 0B93:32D2
loc_1d1e6:
	// 5926 
cs=0xb93;eip=0x0032d6; 	T(CMP(game_replay_mode, 0));	// 25134 cmp     game_replay_mode, 0 ;~ 0B93:32D6
cs=0xb93;eip=0x0032db; 	J(JZ(loc_1d1f0));	// 25135 jz      short loc_1D1F0 ;~ 0B93:32DB
cs=0xb93;eip=0x0032dd; 	J(JMP(loc_1d4b0));	// 25136 jmp     loc_1D4B0 ;~ 0B93:32DD
loc_1d1f0:
	// 5927 
cs=0xb93;eip=0x0032e0; 	T(CMP(byte_44889, 0));	// 25140 cmp     byte_44889, 0 ;~ 0B93:32E0
cs=0xb93;eip=0x0032e5; 	J(JNZ(loc_1d22a));	// 25141 jnz     short loc_1D22A ;~ 0B93:32E5
cs=0xb93;eip=0x0032e7; 	T(MOV(ax, offset(dseg,apre_0)));	// 25142 mov     ax, offset aPre_0 ; Fasten Your Seatbelt ;~ 0B93:32E7
cs=0xb93;eip=0x0032ea; 	X(PUSH(ax));	// 25143 push    ax ;~ 0B93:32EA
cs=0xb93;eip=0x0032eb; 	X(PUSH(word_449a2));	// 25144 push    word_449A2 ;~ 0B93:32EB
cs=0xb93;eip=0x0032ef; 	X(PUSH(gameresptr));	// 25145 push    gameresptr ;~ 0B93:32EF
cs=0xb93;eip=0x0032f3; 	J(CALLF(locate_text_res,0));	// 25146 call    locate_text_res ;~ 0B93:32F3
cs=0xb93;eip=0x0032f8; 	T(ADD(sp, 6));	// 25147 add     sp, 6 ;~ 0B93:32F8
cs=0xb93;eip=0x0032fb; 	X(PUSH(dx));	// 25148 push    dx ;~ 0B93:32FB
cs=0xb93;eip=0x0032fc; 	X(PUSH(ax));	// 25149 push    ax ;~ 0B93:32FC
cs=0xb93;eip=0x0032fd; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 25150 mov     ax, offset resID_byte1 ;~ 0B93:32FD
cs=0xb93;eip=0x003300; 	X(PUSH(ax));	// 25151 push    ax ;~ 0B93:3300
cs=0xb93;eip=0x003301; 	J(CALLF(copy_string,0));	// 25152 call    copy_string ;~ 0B93:3301
cs=0xb93;eip=0x003306; 	T(ADD(sp, 6));	// 25153 add     sp, 6 ;~ 0B93:3306
cs=0xb93;eip=0x003309; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25154 mov     ax, offset rect_ingame_text ;~ 0B93:3309
cs=0xb93;eip=0x00330c; 	X(PUSH(ax));	// 25155 push    ax ;~ 0B93:330C
cs=0xb93;eip=0x00330d; 	T(SUB(ax, ax));	// 25156 sub     ax, ax ;~ 0B93:330D
cs=0xb93;eip=0x00330f; 	X(PUSH(ax));	// 25157 push    ax ;~ 0B93:330F
cs=0xb93;eip=0x003310; 	X(PUSH(dialog_fnt_colour));	// 25158 push    dialog_fnt_colour ;~ 0B93:3310
cs=0xb93;eip=0x003314; 	T(MOV(ax, 0x5A));	// 25159 mov     ax, 5Ah ; 'Z' ;~ 0B93:3314
cs=0xb93;eip=0x003317; 	J(JMP(loc_1d1d5));	// 25160 jmp     short loc_1D1D5 ;~ 0B93:3317
loc_1d22a:
	// 5928 
cs=0xb93;eip=0x00331a; 	T(CMP(passed_security, 0));	// 25165 cmp     passed_security, 0 ;~ 0B93:331A
cs=0xb93;eip=0x00331f; 	J(JZ(loc_1d234));	// 25166 jz      short loc_1D234 ;~ 0B93:331F
cs=0xb93;eip=0x003321; 	J(JMP(loc_1d2be));	// 25167 jmp     loc_1D2BE ;~ 0B93:3321
loc_1d234:
	// 5929 
cs=0xb93;eip=0x003324; 	T(MOV(ax, offset(dseg,ase1)));	// 25171 mov     ax, offset aSe1 ; You forgot to disable the ;~ 0B93:3324
cs=0xb93;eip=0x003327; 	X(PUSH(ax));	// 25172 push    ax ;~ 0B93:3327
cs=0xb93;eip=0x003328; 	X(PUSH(word_449a2));	// 25173 push    word_449A2 ;~ 0B93:3328
cs=0xb93;eip=0x00332c; 	X(PUSH(gameresptr));	// 25174 push    gameresptr ;~ 0B93:332C
cs=0xb93;eip=0x003330; 	J(CALLF(locate_text_res,0));	// 25175 call    locate_text_res ;~ 0B93:3330
cs=0xb93;eip=0x003335; 	T(ADD(sp, 6));	// 25176 add     sp, 6 ;~ 0B93:3335
cs=0xb93;eip=0x003338; 	X(PUSH(dx));	// 25177 push    dx ;~ 0B93:3338
cs=0xb93;eip=0x003339; 	X(PUSH(ax));	// 25178 push    ax ;~ 0B93:3339
cs=0xb93;eip=0x00333a; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 25179 mov     ax, offset resID_byte1 ;~ 0B93:333A
cs=0xb93;eip=0x00333d; 	X(PUSH(ax));	// 25180 push    ax ;~ 0B93:333D
cs=0xb93;eip=0x00333e; 	J(CALLF(copy_string,0));	// 25181 call    copy_string ;~ 0B93:333E
cs=0xb93;eip=0x003343; 	T(ADD(sp, 6));	// 25182 add     sp, 6 ;~ 0B93:3343
cs=0xb93;eip=0x003346; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25183 mov     ax, offset rect_ingame_text ;~ 0B93:3346
cs=0xb93;eip=0x003349; 	X(PUSH(ax));	// 25184 push    ax ;~ 0B93:3349
cs=0xb93;eip=0x00334a; 	T(SUB(ax, ax));	// 25185 sub     ax, ax ;~ 0B93:334A
cs=0xb93;eip=0x00334c; 	X(PUSH(ax));	// 25186 push    ax ;~ 0B93:334C
cs=0xb93;eip=0x00334d; 	X(PUSH(dialog_fnt_colour));	// 25187 push    dialog_fnt_colour ;~ 0B93:334D
cs=0xb93;eip=0x003351; 	T(MOV(ax, 0x5D));	// 25188 mov     ax, 5Dh ; ']' ;~ 0B93:3351
cs=0xb93;eip=0x003354; 	X(PUSH(ax));	// 25189 push    ax ;~ 0B93:3354
cs=0xb93;eip=0x003355; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 25190 mov     ax, offset resID_byte1 ;~ 0B93:3355
cs=0xb93;eip=0x003358; 	X(PUSH(ax));	// 25191 push    ax ;~ 0B93:3358
cs=0xb93;eip=0x003359; 	J(CALLF(font_op2_alt,0));	// 25192 call    font_op2_alt ;~ 0B93:3359
cs=0xb93;eip=0x00335e; 	T(ADD(sp, 2));	// 25193 add     sp, 2 ;~ 0B93:335E
cs=0xb93;eip=0x003361; 	X(PUSH(ax));	// 25194 push    ax ;~ 0B93:3361
cs=0xb93;eip=0x003362; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 25195 mov     ax, offset resID_byte1 ;~ 0B93:3362
cs=0xb93;eip=0x003365; 	X(PUSH(ax));	// 25196 push    ax ;~ 0B93:3365
cs=0xb93;eip=0x003366; 	J(CALLF(intro_draw_text,0));	// 25197 call    intro_draw_text ;~ 0B93:3366
cs=0xb93;eip=0x00336b; 	T(ADD(sp, 0x0A));	// 25198 add     sp, 0Ah ;~ 0B93:336B
cs=0xb93;eip=0x00336e; 	X(PUSH(ax));	// 25199 push    ax ;~ 0B93:336E
cs=0xb93;eip=0x00336f; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25200 mov     ax, offset rect_ingame_text ;~ 0B93:336F
cs=0xb93;eip=0x003372; 	X(PUSH(ax));	// 25201 push    ax ;~ 0B93:3372
cs=0xb93;eip=0x003373; 	J(CALLF(rect_union,0));	// 25202 call    rect_union ;~ 0B93:3373
cs=0xb93;eip=0x003378; 	T(ADD(sp, 6));	// 25203 add     sp, 6 ;~ 0B93:3378
cs=0xb93;eip=0x00337b; 	T(MOV(ax, offset(dseg,ase2)));	// 25204 mov     ax, offset aSe2 ; "Car's security system first" ;~ 0B93:337B
cs=0xb93;eip=0x00337e; 	X(PUSH(ax));	// 25205 push    ax ;~ 0B93:337E
cs=0xb93;eip=0x00337f; 	X(PUSH(word_449a2));	// 25206 push    word_449A2 ;~ 0B93:337F
cs=0xb93;eip=0x003383; 	X(PUSH(gameresptr));	// 25207 push    gameresptr ;~ 0B93:3383
cs=0xb93;eip=0x003387; 	J(CALLF(locate_text_res,0));	// 25208 call    locate_text_res ;~ 0B93:3387
cs=0xb93;eip=0x00338c; 	T(ADD(sp, 6));	// 25209 add     sp, 6 ;~ 0B93:338C
cs=0xb93;eip=0x00338f; 	X(PUSH(dx));	// 25210 push    dx ;~ 0B93:338F
cs=0xb93;eip=0x003390; 	X(PUSH(ax));	// 25211 push    ax ;~ 0B93:3390
cs=0xb93;eip=0x003391; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 25212 mov     ax, offset resID_byte1 ;~ 0B93:3391
cs=0xb93;eip=0x003394; 	X(PUSH(ax));	// 25213 push    ax ;~ 0B93:3394
cs=0xb93;eip=0x003395; 	J(CALLF(copy_string,0));	// 25214 call    copy_string ;~ 0B93:3395
cs=0xb93;eip=0x00339a; 	T(ADD(sp, 6));	// 25215 add     sp, 6 ;~ 0B93:339A
cs=0xb93;eip=0x00339d; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25216 mov     ax, offset rect_ingame_text ;~ 0B93:339D
cs=0xb93;eip=0x0033a0; 	X(PUSH(ax));	// 25217 push    ax ;~ 0B93:33A0
cs=0xb93;eip=0x0033a1; 	T(SUB(ax, ax));	// 25218 sub     ax, ax ;~ 0B93:33A1
cs=0xb93;eip=0x0033a3; 	X(PUSH(ax));	// 25219 push    ax ;~ 0B93:33A3
cs=0xb93;eip=0x0033a4; 	X(PUSH(dialog_fnt_colour));	// 25220 push    dialog_fnt_colour ;~ 0B93:33A4
cs=0xb93;eip=0x0033a8; 	T(MOV(ax, 0x69));	// 25221 mov     ax, 69h ; 'i' ;~ 0B93:33A8
cs=0xb93;eip=0x0033ab; 	J(JMP(loc_1d1d5));	// 25222 jmp     loc_1D1D5 ;~ 0B93:33AB
loc_1d2be:
	// 5930 
cs=0xb93;eip=0x0033ae; 	T(CMP(followopponentflag, 0));	// 25226 cmp     followOpponentFlag, 0 ;~ 0B93:33AE
cs=0xb93;eip=0x0033b3; 	J(JZ(loc_1d2c8));	// 25227 jz      short loc_1D2C8 ;~ 0B93:33B3
cs=0xb93;eip=0x0033b5; 	J(JMP(loc_1d52b));	// 25228 jmp     loc_1D52B ;~ 0B93:33B5
loc_1d2c8:
	// 5931 
cs=0xb93;eip=0x0033b8; 	T(CMP(cameramode, 0));	// 25232 cmp     cameramode, 0 ;~ 0B93:33B8
cs=0xb93;eip=0x0033bd; 	J(JZ(loc_1d2d2));	// 25233 jz      short loc_1D2D2 ;~ 0B93:33BD
cs=0xb93;eip=0x0033bf; 	J(JMP(loc_1d52b));	// 25234 jmp     loc_1D52B ;~ 0B93:33BF
loc_1d2d2:
	// 5932 
cs=0xb93;eip=0x0033c2; 	T(CMP(byte_446af, 0));	// 25238 cmp     byte_446AF, 0 ;~ 0B93:33C2
cs=0xb93;eip=0x0033c7; 	J(JZ(loc_1d2dc));	// 25239 jz      short loc_1D2DC ;~ 0B93:33C7
cs=0xb93;eip=0x0033c9; 	J(JMP(loc_1d52b));	// 25240 jmp     loc_1D52B ;~ 0B93:33C9
loc_1d2dc:
	// 5933 
cs=0xb93;eip=0x0033cc; 	T(MOV(al, byte_448f1));	// 25244 mov     al, byte_448F1 ;~ 0B93:33CC
cs=0xb93;eip=0x0033cf; 	T(CBW);	// 25245 cbw ;~ 0B93:33CF
cs=0xb93;eip=0x0033d0; 	T(CMP(ax, 1));	// 25246 cmp     ax, 1 ;~ 0B93:33D0
cs=0xb93;eip=0x0033d3; 	J(JZ(loc_1d2f2));	// 25247 jz      short loc_1D2F2 ;~ 0B93:33D3
cs=0xb93;eip=0x0033d5; 	T(CMP(ax, 2));	// 25248 cmp     ax, 2 ;~ 0B93:33D5
cs=0xb93;eip=0x0033d8; 	J(JZ(loc_1d338));	// 25249 jz      short loc_1D338 ;~ 0B93:33D8
cs=0xb93;eip=0x0033da; 	T(CMP(ax, 3));	// 25250 cmp     ax, 3 ;~ 0B93:33DA
cs=0xb93;eip=0x0033dd; 	J(JZ(loc_1d34a));	// 25251 jz      short loc_1D34A ;~ 0B93:33DD
cs=0xb93;eip=0x0033df; 	J(JMP(loc_1d31e));	// 25252 jmp     short loc_1D31E ;~ 0B93:33DF
loc_1d2f2:
	// 5934 
cs=0xb93;eip=0x0033e2; 	T(MOV(ax, 0x5D));	// 25257 mov     ax, 5Dh ; ']' ;~ 0B93:33E2
cs=0xb93;eip=0x0033e5; 	X(PUSH(ax));	// 25258 push    ax ;~ 0B93:33E5
cs=0xb93;eip=0x0033e6; 	T(MOV(ax, 0x94));	// 25259 mov     ax, 94h ; '”' ;~ 0B93:33E6
cs=0xb93;eip=0x0033e9; 	X(PUSH(ax));	// 25260 push    ax              ; __int16 ;~ 0B93:33E9
cs=0xb93;eip=0x0033ea; 	X(PUSH(word_45dca));	// 25261 push    word_45DCA      ; left arrow shape ;~ 0B93:33EA
cs=0xb93;eip=0x0033ee; 	X(PUSH(shapeptr_));	// 25262 push    shapeptr_       ; left arrow shape ;~ 0B93:33EE
loc_1d302:
	// 5935 
cs=0xb93;eip=0x0033f2; 	J(CALLF(sprite_putimage_transparent,0));	// 25265 call    sprite_putimage_transparent ;~ 0B93:33F2
cs=0xb93;eip=0x0033f7; 	T(ADD(sp, 8));	// 25266 add     sp, 8 ;~ 0B93:33F7
cs=0xb93;eip=0x0033fa; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25267 mov     ax, offset rect_ingame_text ;~ 0B93:33FA
cs=0xb93;eip=0x0033fd; 	X(PUSH(ax));	// 25268 push    ax ;~ 0B93:33FD
cs=0xb93;eip=0x0033fe; 	T(MOV(ax, offset(dseg,rect_ingame_text2)));	// 25269 mov     ax, offset rect_ingame_text2 ;~ 0B93:33FE
loc_1d311:
	// 5936 
cs=0xb93;eip=0x003401; 	X(PUSH(ax));	// 25272 push    ax ;~ 0B93:3401
cs=0xb93;eip=0x003402; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25273 mov     ax, offset rect_ingame_text ;~ 0B93:3402
cs=0xb93;eip=0x003405; 	X(PUSH(ax));	// 25274 push    ax ;~ 0B93:3405
cs=0xb93;eip=0x003406; 	J(CALLF(rect_union,0));	// 25275 call    rect_union ;~ 0B93:3406
cs=0xb93;eip=0x00340b; 	T(ADD(sp, 6));	// 25276 add     sp, 6 ;~ 0B93:340B
loc_1d31e:
	// 5937 
cs=0xb93;eip=0x00340e; 	X(MOV(resid_byte1, 0));	// 25279 mov     resID_byte1, 0 ;~ 0B93:340E
cs=0xb93;eip=0x003413; 	T(MOV(al, byte_448f2));	// 25280 mov     al, byte_448F2 ;~ 0B93:3413
cs=0xb93;eip=0x003416; 	T(CBW);	// 25281 cbw ;~ 0B93:3416
cs=0xb93;eip=0x003417; 	T(CMP(ax, 1));	// 25282 cmp     ax, 1 ;~ 0B93:3417
cs=0xb93;eip=0x00341a; 	J(JZ(loc_1d398));	// 25283 jz      short loc_1D398 ;~ 0B93:341A
cs=0xb93;eip=0x00341c; 	T(CMP(ax, 2));	// 25284 cmp     ax, 2 ;~ 0B93:341C
cs=0xb93;eip=0x00341f; 	J(JNZ(loc_1d334));	// 25285 jnz     short loc_1D334 ;~ 0B93:341F
cs=0xb93;eip=0x003421; 	J(JMP(loc_1d47e));	// 25286 jmp     loc_1D47E ;~ 0B93:3421
loc_1d334:
	// 5938 
cs=0xb93;eip=0x003424; 	J(JMP(loc_1d3e6));	// 25290 jmp     loc_1D3E6 ;~ 0B93:3424
loc_1d338:
	// 5939 
cs=0xb93;eip=0x003428; 	T(MOV(ax, 0x5D));	// 25295 mov     ax, 5Dh ; ']' ;~ 0B93:3428
cs=0xb93;eip=0x00342b; 	X(PUSH(ax));	// 25296 push    ax ;~ 0B93:342B
cs=0xb93;eip=0x00342c; 	T(MOV(ax, 0x94));	// 25297 mov     ax, 94h ; '”' ;~ 0B93:342C
cs=0xb93;eip=0x00342f; 	X(PUSH(ax));	// 25298 push    ax ;~ 0B93:342F
cs=0xb93;eip=0x003430; 	X(PUSH(word_45dce));	// 25299 push    word_45DCE      ; right arrow shape ;~ 0B93:3430
cs=0xb93;eip=0x003434; 	X(PUSH(word_45dcc));	// 25300 push    word_45DCC      ; right arrow shape ;~ 0B93:3434
cs=0xb93;eip=0x003438; 	J(JMP(loc_1d302));	// 25301 jmp     short loc_1D302 ;~ 0B93:3438
loc_1d34a:
	// 5940 
cs=0xb93;eip=0x00343a; 	T(MOV(ax, offset(dseg,awww)));	// 25305 mov     ax, offset aWww ; "Wrong Way" ;~ 0B93:343A
cs=0xb93;eip=0x00343d; 	X(PUSH(ax));	// 25306 push    ax ;~ 0B93:343D
cs=0xb93;eip=0x00343e; 	X(PUSH(word_449a2));	// 25307 push    word_449A2 ;~ 0B93:343E
cs=0xb93;eip=0x003442; 	X(PUSH(gameresptr));	// 25308 push    gameresptr ;~ 0B93:3442
cs=0xb93;eip=0x003446; 	J(CALLF(locate_text_res,0));	// 25309 call    locate_text_res ;~ 0B93:3446
cs=0xb93;eip=0x00344b; 	T(ADD(sp, 6));	// 25310 add     sp, 6 ;~ 0B93:344B
cs=0xb93;eip=0x00344e; 	X(PUSH(dx));	// 25311 push    dx ;~ 0B93:344E
cs=0xb93;eip=0x00344f; 	X(PUSH(ax));	// 25312 push    ax ;~ 0B93:344F
cs=0xb93;eip=0x003450; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 25313 mov     ax, offset resID_byte1 ;~ 0B93:3450
cs=0xb93;eip=0x003453; 	X(PUSH(ax));	// 25314 push    ax ;~ 0B93:3453
cs=0xb93;eip=0x003454; 	J(CALLF(copy_string,0));	// 25315 call    copy_string ;~ 0B93:3454
cs=0xb93;eip=0x003459; 	T(ADD(sp, 6));	// 25316 add     sp, 6 ;~ 0B93:3459
cs=0xb93;eip=0x00345c; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25317 mov     ax, offset rect_ingame_text ;~ 0B93:345C
cs=0xb93;eip=0x00345f; 	X(PUSH(ax));	// 25318 push    ax ;~ 0B93:345F
cs=0xb93;eip=0x003460; 	T(SUB(ax, ax));	// 25319 sub     ax, ax ;~ 0B93:3460
cs=0xb93;eip=0x003462; 	X(PUSH(ax));	// 25320 push    ax ;~ 0B93:3462
cs=0xb93;eip=0x003463; 	X(PUSH(dialog_fnt_colour));	// 25321 push    dialog_fnt_colour ;~ 0B93:3463
cs=0xb93;eip=0x003467; 	T(MOV(ax, 0x5D));	// 25322 mov     ax, 5Dh ; ']' ;~ 0B93:3467
cs=0xb93;eip=0x00346a; 	X(PUSH(ax));	// 25323 push    ax ;~ 0B93:346A
cs=0xb93;eip=0x00346b; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 25324 mov     ax, offset resID_byte1 ;~ 0B93:346B
cs=0xb93;eip=0x00346e; 	X(PUSH(ax));	// 25325 push    ax ;~ 0B93:346E
cs=0xb93;eip=0x00346f; 	J(CALLF(font_op2_alt,0));	// 25326 call    font_op2_alt ;~ 0B93:346F
cs=0xb93;eip=0x003474; 	T(ADD(sp, 2));	// 25327 add     sp, 2 ;~ 0B93:3474
cs=0xb93;eip=0x003477; 	X(PUSH(ax));	// 25328 push    ax ;~ 0B93:3477
cs=0xb93;eip=0x003478; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 25329 mov     ax, offset resID_byte1 ;~ 0B93:3478
cs=0xb93;eip=0x00347b; 	X(PUSH(ax));	// 25330 push    ax ;~ 0B93:347B
cs=0xb93;eip=0x00347c; 	J(CALLF(intro_draw_text,0));	// 25331 call    intro_draw_text ;~ 0B93:347C
cs=0xb93;eip=0x003481; 	T(ADD(sp, 0x0A));	// 25332 add     sp, 0Ah ;~ 0B93:3481
cs=0xb93;eip=0x003484; 	J(JMP(loc_1d311));	// 25333 jmp     loc_1D311 ;~ 0B93:3484
loc_1d398:
	// 5941 
cs=0xb93;eip=0x003488; 	T(MOV(ax, 0x71));	// 25338 mov     ax, 71h ; 'q' ;~ 0B93:3488
cs=0xb93;eip=0x00348b; 	X(PUSH(ax));	// 25339 push    ax ;~ 0B93:348B
cs=0xb93;eip=0x00348c; 	T(MOV(ax, 0x44));	// 25340 mov     ax, 44h ; 'D' ;~ 0B93:348C
cs=0xb93;eip=0x00348f; 	X(PUSH(ax));	// 25341 push    ax              ; __int16 ;~ 0B93:348F
cs=0xb93;eip=0x003490; 	X(PUSH(word_45dca));	// 25342 push    word_45DCA      ; left arrow shape ;~ 0B93:3490
cs=0xb93;eip=0x003494; 	X(PUSH(shapeptr_));	// 25343 push    shapeptr_       ; left arrow shape ;~ 0B93:3494
cs=0xb93;eip=0x003498; 	J(CALLF(sprite_putimage_transparent,0));	// 25344 call    sprite_putimage_transparent ;~ 0B93:3498
cs=0xb93;eip=0x00349d; 	T(ADD(sp, 8));	// 25345 add     sp, 8 ;~ 0B93:349D
cs=0xb93;eip=0x0034a0; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25346 mov     ax, offset rect_ingame_text ;~ 0B93:34A0
cs=0xb93;eip=0x0034a3; 	X(PUSH(ax));	// 25347 push    ax ;~ 0B93:34A3
cs=0xb93;eip=0x0034a4; 	T(MOV(ax, offset(dseg,rect_ingame_text3)));	// 25348 mov     ax, offset rect_ingame_text3 ;~ 0B93:34A4
cs=0xb93;eip=0x0034a7; 	X(PUSH(ax));	// 25349 push    ax ;~ 0B93:34A7
cs=0xb93;eip=0x0034a8; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25350 mov     ax, offset rect_ingame_text ;~ 0B93:34A8
cs=0xb93;eip=0x0034ab; 	X(PUSH(ax));	// 25351 push    ax ;~ 0B93:34AB
cs=0xb93;eip=0x0034ac; 	J(CALLF(rect_union,0));	// 25352 call    rect_union ;~ 0B93:34AC
cs=0xb93;eip=0x0034b1; 	T(ADD(sp, 6));	// 25353 add     sp, 6 ;~ 0B93:34B1
cs=0xb93;eip=0x0034b4; 	T(MOV(ax, offset(dseg,aopp)));	// 25354 mov     ax, offset aOpp ; "Opponent Near" ;~ 0B93:34B4
loc_1d3c7:
	// 5942 
cs=0xb93;eip=0x0034b7; 	X(PUSH(ax));	// 25357 push    ax ;~ 0B93:34B7
cs=0xb93;eip=0x0034b8; 	X(PUSH(word_449a2));	// 25358 push    word_449A2 ;~ 0B93:34B8
cs=0xb93;eip=0x0034bc; 	X(PUSH(gameresptr));	// 25359 push    gameresptr ;~ 0B93:34BC
cs=0xb93;eip=0x0034c0; 	J(CALLF(locate_text_res,0));	// 25360 call    locate_text_res ;~ 0B93:34C0
cs=0xb93;eip=0x0034c5; 	T(ADD(sp, 6));	// 25361 add     sp, 6 ;~ 0B93:34C5
cs=0xb93;eip=0x0034c8; 	X(PUSH(dx));	// 25362 push    dx ;~ 0B93:34C8
cs=0xb93;eip=0x0034c9; 	X(PUSH(ax));	// 25363 push    ax ;~ 0B93:34C9
cs=0xb93;eip=0x0034ca; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 25364 mov     ax, offset resID_byte1 ;~ 0B93:34CA
cs=0xb93;eip=0x0034cd; 	X(PUSH(ax));	// 25365 push    ax ;~ 0B93:34CD
cs=0xb93;eip=0x0034ce; 	J(CALLF(copy_string,0));	// 25366 call    copy_string ;~ 0B93:34CE
cs=0xb93;eip=0x0034d3; 	T(ADD(sp, 6));	// 25367 add     sp, 6 ;~ 0B93:34D3
loc_1d3e6:
	// 5943 
cs=0xb93;eip=0x0034d6; 	T(CMP(resid_byte1, 0));	// 25370 cmp     resID_byte1, 0 ;~ 0B93:34D6
cs=0xb93;eip=0x0034db; 	J(JZ(loc_1d422));	// 25371 jz      short loc_1D422 ;~ 0B93:34DB
cs=0xb93;eip=0x0034dd; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25372 mov     ax, offset rect_ingame_text ;~ 0B93:34DD
cs=0xb93;eip=0x0034e0; 	X(PUSH(ax));	// 25373 push    ax ;~ 0B93:34E0
cs=0xb93;eip=0x0034e1; 	T(SUB(ax, ax));	// 25374 sub     ax, ax ;~ 0B93:34E1
cs=0xb93;eip=0x0034e3; 	X(PUSH(ax));	// 25375 push    ax ;~ 0B93:34E3
cs=0xb93;eip=0x0034e4; 	X(PUSH(dialog_fnt_colour));	// 25376 push    dialog_fnt_colour ;~ 0B93:34E4
cs=0xb93;eip=0x0034e8; 	T(MOV(ax, 0x74));	// 25377 mov     ax, 74h ; 't' ;~ 0B93:34E8
cs=0xb93;eip=0x0034eb; 	X(PUSH(ax));	// 25378 push    ax ;~ 0B93:34EB
cs=0xb93;eip=0x0034ec; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 25379 mov     ax, offset resID_byte1 ;~ 0B93:34EC
cs=0xb93;eip=0x0034ef; 	X(PUSH(ax));	// 25380 push    ax ;~ 0B93:34EF
cs=0xb93;eip=0x0034f0; 	J(CALLF(font_op2_alt,0));	// 25381 call    font_op2_alt ;~ 0B93:34F0
cs=0xb93;eip=0x0034f5; 	T(ADD(sp, 2));	// 25382 add     sp, 2 ;~ 0B93:34F5
cs=0xb93;eip=0x0034f8; 	X(PUSH(ax));	// 25383 push    ax ;~ 0B93:34F8
cs=0xb93;eip=0x0034f9; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 25384 mov     ax, offset resID_byte1 ;~ 0B93:34F9
cs=0xb93;eip=0x0034fc; 	X(PUSH(ax));	// 25385 push    ax ;~ 0B93:34FC
cs=0xb93;eip=0x0034fd; 	J(CALLF(intro_draw_text,0));	// 25386 call    intro_draw_text ;~ 0B93:34FD
cs=0xb93;eip=0x003502; 	T(ADD(sp, 0x0A));	// 25387 add     sp, 0Ah ;~ 0B93:3502
cs=0xb93;eip=0x003505; 	X(PUSH(ax));	// 25388 push    ax ;~ 0B93:3505
cs=0xb93;eip=0x003506; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25389 mov     ax, offset rect_ingame_text ;~ 0B93:3506
cs=0xb93;eip=0x003509; 	X(PUSH(ax));	// 25390 push    ax ;~ 0B93:3509
cs=0xb93;eip=0x00350a; 	J(CALLF(rect_union,0));	// 25391 call    rect_union ;~ 0B93:350A
cs=0xb93;eip=0x00350f; 	T(ADD(sp, 6));	// 25392 add     sp, 6 ;~ 0B93:350F
loc_1d422:
	// 5944 
cs=0xb93;eip=0x003512; 	T(CMP(show_penalty_counter, 0));	// 25395 cmp     show_penalty_counter, 0 ;~ 0B93:3512
cs=0xb93;eip=0x003517; 	J(JNZ(loc_1d42c));	// 25396 jnz     short loc_1D42C ;~ 0B93:3517
cs=0xb93;eip=0x003519; 	J(JMP(loc_1d52b));	// 25397 jmp     loc_1D52B ;~ 0B93:3519
loc_1d42c:
	// 5945 
cs=0xb93;eip=0x00351c; 	T(MOV(ax, offset(dseg,apen)));	// 25401 mov     ax, offset aPen ; "pen" ;~ 0B93:351C
cs=0xb93;eip=0x00351f; 	X(PUSH(ax));	// 25402 push    ax ;~ 0B93:351F
cs=0xb93;eip=0x003520; 	X(PUSH(word_449a2));	// 25403 push    word_449A2 ;~ 0B93:3520
cs=0xb93;eip=0x003524; 	X(PUSH(gameresptr));	// 25404 push    gameresptr ;~ 0B93:3524
cs=0xb93;eip=0x003528; 	J(CALLF(locate_text_res,0));	// 25405 call    locate_text_res ;~ 0B93:3528
cs=0xb93;eip=0x00352d; 	T(ADD(sp, 6));	// 25406 add     sp, 6 ;~ 0B93:352D
cs=0xb93;eip=0x003530; 	X(PUSH(dx));	// 25407 push    dx ;~ 0B93:3530
cs=0xb93;eip=0x003531; 	X(PUSH(ax));	// 25408 push    ax ;~ 0B93:3531
cs=0xb93;eip=0x003532; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 25409 mov     ax, offset resID_byte1 ;~ 0B93:3532
cs=0xb93;eip=0x003535; 	X(PUSH(ax));	// 25410 push    ax ;~ 0B93:3535
cs=0xb93;eip=0x003536; 	J(CALLF(copy_string,0));	// 25411 call    copy_string ;~ 0B93:3536
cs=0xb93;eip=0x00353b; 	T(ADD(sp, 6));	// 25412 add     sp, 6 ;~ 0B93:353B
cs=0xb93;eip=0x00353e; 	T(SUB(ax, ax));	// 25413 sub     ax, ax ;~ 0B93:353E
cs=0xb93;eip=0x003540; 	X(PUSH(ax));	// 25414 push    ax              ; int ;~ 0B93:3540
cs=0xb93;eip=0x003541; 	X(PUSH(penalty_time));	// 25415 push    penalty_time ;~ 0B93:3541
cs=0xb93;eip=0x003545; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 25416 mov     ax, offset resID_byte1 ;~ 0B93:3545
cs=0xb93;eip=0x003548; 	X(PUSH(ax));	// 25417 push    ax              ; char * ;~ 0B93:3548
cs=0xb93;eip=0x003549; 	J(CALLF(_strlen,0));	// 25418 call    _strlen ;~ 0B93:3549
cs=0xb93;eip=0x00354e; 	T(ADD(sp, 2));	// 25419 add     sp, 2 ;~ 0B93:354E
cs=0xb93;eip=0x003551; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 25420 add     ax, offset resID_byte1 ;~ 0B93:3551
cs=0xb93;eip=0x003554; 	X(PUSH(ax));	// 25421 push    ax              ; char * ;~ 0B93:3554
cs=0xb93;eip=0x003555; 	J(CALLF(format_frame_as_string,0));	// 25422 call    format_frame_as_string ;~ 0B93:3555
cs=0xb93;eip=0x00355a; 	T(ADD(sp, 6));	// 25423 add     sp, 6 ;~ 0B93:355A
cs=0xb93;eip=0x00355d; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25424 mov     ax, offset rect_ingame_text ;~ 0B93:355D
cs=0xb93;eip=0x003560; 	X(PUSH(ax));	// 25425 push    ax ;~ 0B93:3560
cs=0xb93;eip=0x003561; 	T(SUB(ax, ax));	// 25426 sub     ax, ax ;~ 0B93:3561
cs=0xb93;eip=0x003563; 	X(PUSH(ax));	// 25427 push    ax ;~ 0B93:3563
cs=0xb93;eip=0x003564; 	X(PUSH(dialog_fnt_colour));	// 25428 push    dialog_fnt_colour ;~ 0B93:3564
cs=0xb93;eip=0x003568; 	T(MOV(ax, 0x66));	// 25429 mov     ax, 66h ; 'f' ;~ 0B93:3568
cs=0xb93;eip=0x00356b; 	J(JMP(loc_1d1d5));	// 25430 jmp     loc_1D1D5 ;~ 0B93:356B
loc_1d47e:
	// 5946 
cs=0xb93;eip=0x00356e; 	T(MOV(ax, 0x71));	// 25434 mov     ax, 71h ; 'q' ;~ 0B93:356E
cs=0xb93;eip=0x003571; 	X(PUSH(ax));	// 25435 push    ax ;~ 0B93:3571
cs=0xb93;eip=0x003572; 	T(MOV(ax, 0x0E4));	// 25436 mov     ax, 0E4h ; 'ä' ;~ 0B93:3572
cs=0xb93;eip=0x003575; 	X(PUSH(ax));	// 25437 push    ax              ; __int16 ;~ 0B93:3575
cs=0xb93;eip=0x003576; 	X(PUSH(word_45dce));	// 25438 push    word_45DCE      ; right arrow shape ;~ 0B93:3576
cs=0xb93;eip=0x00357a; 	X(PUSH(word_45dcc));	// 25439 push    word_45DCC      ; right arrow shape ;~ 0B93:357A
cs=0xb93;eip=0x00357e; 	J(CALLF(sprite_putimage_transparent,0));	// 25440 call    sprite_putimage_transparent ;~ 0B93:357E
cs=0xb93;eip=0x003583; 	T(ADD(sp, 8));	// 25441 add     sp, 8 ;~ 0B93:3583
cs=0xb93;eip=0x003586; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25442 mov     ax, offset rect_ingame_text ;~ 0B93:3586
cs=0xb93;eip=0x003589; 	X(PUSH(ax));	// 25443 push    ax ;~ 0B93:3589
cs=0xb93;eip=0x00358a; 	T(MOV(ax, offset(dseg,rect_ingame_text4)));	// 25444 mov     ax, offset rect_ingame_text4 ;~ 0B93:358A
cs=0xb93;eip=0x00358d; 	X(PUSH(ax));	// 25445 push    ax ;~ 0B93:358D
cs=0xb93;eip=0x00358e; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25446 mov     ax, offset rect_ingame_text ;~ 0B93:358E
cs=0xb93;eip=0x003591; 	X(PUSH(ax));	// 25447 push    ax ;~ 0B93:3591
cs=0xb93;eip=0x003592; 	J(CALLF(rect_union,0));	// 25448 call    rect_union ;~ 0B93:3592
cs=0xb93;eip=0x003597; 	T(ADD(sp, 6));	// 25449 add     sp, 6 ;~ 0B93:3597
cs=0xb93;eip=0x00359a; 	T(MOV(ax, offset(dseg,aopp_0)));	// 25450 mov     ax, offset aOpp_0 ; "opp" ;~ 0B93:359A
cs=0xb93;eip=0x00359d; 	J(JMP(loc_1d3c7));	// 25451 jmp     loc_1D3C7 ;~ 0B93:359D
loc_1d4b0:
	// 5947 
cs=0xb93;eip=0x0035a0; 	T(CMP(game_replay_mode, 2));	// 25455 cmp     game_replay_mode, 2 ;~ 0B93:35A0
cs=0xb93;eip=0x0035a5; 	J(JNZ(loc_1d52b));	// 25456 jnz     short loc_1D52B ;~ 0B93:35A5
cs=0xb93;eip=0x0035a7; 	T(MOV(ax, word_445d4));	// 25457 mov     ax, word_445D4 ;~ 0B93:35A7
cs=0xb93;eip=0x0035aa; 	T(SUB(dx, dx));	// 25458 sub     dx, dx ;~ 0B93:35AA
cs=0xb93;eip=0x0035ac; 	X(DIV2(framespersec));	// 25459 div     framespersec ;~ 0B93:35AC
cs=0xb93;eip=0x0035b0; 	T(MOV(si, dx));	// 25460 mov     si, dx ;~ 0B93:35B0
cs=0xb93;eip=0x0035b2; 	T(MOV(ax, framespersec));	// 25461 mov     ax, framespersec ;~ 0B93:35B2
cs=0xb93;eip=0x0035b5; 	T(SAR(ax, 1));	// 25462 sar     ax, 1 ;~ 0B93:35B5
cs=0xb93;eip=0x0035b7; 	T(CMP(ax, si));	// 25463 cmp     ax, si ;~ 0B93:35B7
cs=0xb93;eip=0x0035b9; 	J(JLE(loc_1d52b));	// 25464 jle     short loc_1D52B ;~ 0B93:35B9
cs=0xb93;eip=0x0035bb; 	T(MOV(ax, offset(dseg,arpl_0)));	// 25465 mov     ax, offset aRpl_0 ; "rpl" ;~ 0B93:35BB
cs=0xb93;eip=0x0035be; 	X(PUSH(ax));	// 25466 push    ax ;~ 0B93:35BE
cs=0xb93;eip=0x0035bf; 	X(PUSH(word_449a2));	// 25467 push    word_449A2 ;~ 0B93:35BF
cs=0xb93;eip=0x0035c3; 	X(PUSH(gameresptr));	// 25468 push    gameresptr ;~ 0B93:35C3
cs=0xb93;eip=0x0035c7; 	J(CALLF(locate_text_res,0));	// 25469 call    locate_text_res ;~ 0B93:35C7
cs=0xb93;eip=0x0035cc; 	T(ADD(sp, 6));	// 25470 add     sp, 6 ;~ 0B93:35CC
cs=0xb93;eip=0x0035cf; 	X(PUSH(dx));	// 25471 push    dx ;~ 0B93:35CF
cs=0xb93;eip=0x0035d0; 	X(PUSH(ax));	// 25472 push    ax ;~ 0B93:35D0
cs=0xb93;eip=0x0035d1; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 25473 mov     ax, offset resID_byte1 ;~ 0B93:35D1
cs=0xb93;eip=0x0035d4; 	X(PUSH(ax));	// 25474 push    ax ;~ 0B93:35D4
cs=0xb93;eip=0x0035d5; 	J(CALLF(copy_string,0));	// 25475 call    copy_string ;~ 0B93:35D5
cs=0xb93;eip=0x0035da; 	T(ADD(sp, 6));	// 25476 add     sp, 6 ;~ 0B93:35DA
cs=0xb93;eip=0x0035dd; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25477 mov     ax, offset rect_ingame_text ;~ 0B93:35DD
cs=0xb93;eip=0x0035e0; 	X(PUSH(ax));	// 25478 push    ax ;~ 0B93:35E0
cs=0xb93;eip=0x0035e1; 	T(SUB(ax, ax));	// 25479 sub     ax, ax ;~ 0B93:35E1
cs=0xb93;eip=0x0035e3; 	X(PUSH(ax));	// 25480 push    ax ;~ 0B93:35E3
cs=0xb93;eip=0x0035e4; 	X(PUSH(dialog_fnt_colour));	// 25481 push    dialog_fnt_colour ;~ 0B93:35E4
cs=0xb93;eip=0x0035e8; 	T(MOV(ax, 0x0F));	// 25482 mov     ax, 0Fh ;~ 0B93:35E8
cs=0xb93;eip=0x0035eb; 	X(PUSH(ax));	// 25483 push    ax ;~ 0B93:35EB
cs=0xb93;eip=0x0035ec; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 25484 mov     ax, offset resID_byte1 ;~ 0B93:35EC
cs=0xb93;eip=0x0035ef; 	X(PUSH(ax));	// 25485 push    ax              ; char * ;~ 0B93:35EF
cs=0xb93;eip=0x0035f0; 	J(CALLF(_strlen,0));	// 25486 call    _strlen ;~ 0B93:35F0
cs=0xb93;eip=0x0035f5; 	T(ADD(sp, 2));	// 25487 add     sp, 2 ;~ 0B93:35F5
cs=0xb93;eip=0x0035f8; 	T(MOV(cl, 3));	// 25488 mov     cl, 3 ;~ 0B93:35F8
cs=0xb93;eip=0x0035fa; 	T(SHL(ax, cl));	// 25489 shl     ax, cl ;~ 0B93:35FA
cs=0xb93;eip=0x0035fc; 	T(SUB(ax, 0x138));	// 25490 sub     ax, 138h ;~ 0B93:35FC
cs=0xb93;eip=0x0035ff; 	T(NEG(ax));	// 25491 neg     ax ;~ 0B93:35FF
loc_1d511:
	// 5948 
cs=0xb93;eip=0x003601; 	X(PUSH(ax));	// 25494 push    ax ;~ 0B93:3601
cs=0xb93;eip=0x003602; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 25495 mov     ax, offset resID_byte1 ;~ 0B93:3602
cs=0xb93;eip=0x003605; 	X(PUSH(ax));	// 25496 push    ax ;~ 0B93:3605
cs=0xb93;eip=0x003606; 	J(CALLF(intro_draw_text,0));	// 25497 call    intro_draw_text ;~ 0B93:3606
cs=0xb93;eip=0x00360b; 	T(ADD(sp, 0x0A));	// 25498 add     sp, 0Ah ;~ 0B93:360B
cs=0xb93;eip=0x00360e; 	X(PUSH(ax));	// 25499 push    ax ;~ 0B93:360E
cs=0xb93;eip=0x00360f; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25500 mov     ax, offset rect_ingame_text ;~ 0B93:360F
cs=0xb93;eip=0x003612; 	X(PUSH(ax));	// 25501 push    ax ;~ 0B93:3612
cs=0xb93;eip=0x003613; 	J(CALLF(rect_union,0));	// 25502 call    rect_union ;~ 0B93:3613
cs=0xb93;eip=0x003618; 	T(ADD(sp, 6));	// 25503 add     sp, 6 ;~ 0B93:3618
loc_1d52b:
	// 5949 
cs=0xb93;eip=0x00361b; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25507 mov     ax, offset rect_ingame_text ;~ 0B93:361B
cs=0xb93;eip=0x00361e; 	X(POP(si));	// 25508 pop     si ;~ 0B93:361E
cs=0xb93;eip=0x00361f; 	X(POP(di));	// 25509 pop     di ;~ 0B93:361F
cs=0xb93;eip=0x003620; 	T(MOV(sp, bp));	// 25510 mov     sp, bp ;~ 0B93:3620
cs=0xb93;eip=0x003622; 	X(POP(bp));	// 25511 pop     bp ;~ 0B93:3622
cs=0xb93;eip=0x003623; 	J(RETF(0));	// 25512 retf ;~ 0B93:3623

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdraw_ingame_text: 	goto draw_ingame_text;
        case m2c::kloc_1d14e: 	goto loc_1d14e;
        case m2c::kloc_1d1d5: 	goto loc_1d1d5;
        case m2c::kloc_1d1e6: 	goto loc_1d1e6;
        case m2c::kloc_1d1f0: 	goto loc_1d1f0;
        case m2c::kloc_1d22a: 	goto loc_1d22a;
        case m2c::kloc_1d234: 	goto loc_1d234;
        case m2c::kloc_1d2be: 	goto loc_1d2be;
        case m2c::kloc_1d2c8: 	goto loc_1d2c8;
        case m2c::kloc_1d2d2: 	goto loc_1d2d2;
        case m2c::kloc_1d2dc: 	goto loc_1d2dc;
        case m2c::kloc_1d2f2: 	goto loc_1d2f2;
        case m2c::kloc_1d302: 	goto loc_1d302;
        case m2c::kloc_1d311: 	goto loc_1d311;
        case m2c::kloc_1d31e: 	goto loc_1d31e;
        case m2c::kloc_1d334: 	goto loc_1d334;
        case m2c::kloc_1d338: 	goto loc_1d338;
        case m2c::kloc_1d34a: 	goto loc_1d34a;
        case m2c::kloc_1d398: 	goto loc_1d398;
        case m2c::kloc_1d3c7: 	goto loc_1d3c7;
        case m2c::kloc_1d3e6: 	goto loc_1d3e6;
        case m2c::kloc_1d422: 	goto loc_1d422;
        case m2c::kloc_1d42c: 	goto loc_1d42c;
        case m2c::kloc_1d47e: 	goto loc_1d47e;
        case m2c::kloc_1d4b0: 	goto loc_1d4b0;
        case m2c::kloc_1d511: 	goto loc_1d511;
        case m2c::kloc_1d52b: 	goto loc_1d52b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool do_sinking(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    do_sinking:
    _begin:
#undef arg_0
#define arg_0 6
	// 25523 arg_0           = word ptr  6 ;~ 0B93:3624
#undef arg_2
#define arg_2 8
	// 25524 arg_2           = word ptr  8 ;~ 0B93:3624
#undef arg_4
#define arg_4 0x0A
	// 25525 arg_4           = word ptr  0Ah ;~ 0B93:3624
cs=0xb93;eip=0x003624; 	X(PUSH(bp));	// 25527 push    bp ;~ 0B93:3624
cs=0xb93;eip=0x003625; 	T(MOV(bp, sp));	// 25528 mov     bp, sp ;~ 0B93:3625
cs=0xb93;eip=0x003627; 	T(SUB(sp, 2));	// 25529 sub     sp, 2 ;~ 0B93:3627
cs=0xb93;eip=0x00362a; 	X(PUSH(di));	// 25530 push    di ;~ 0B93:362A
cs=0xb93;eip=0x00362b; 	X(PUSH(si));	// 25531 push    si ;~ 0B93:362B
cs=0xb93;eip=0x00362c; 	T(MOV(di, framespersec));	// 25532 mov     di, framespersec ;~ 0B93:362C
cs=0xb93;eip=0x003630; 	T(MOV(cl, 2));	// 25533 mov     cl, 2 ;~ 0B93:3630
cs=0xb93;eip=0x003632; 	T(SHL(di, cl));	// 25534 shl     di, cl ;~ 0B93:3632
cs=0xb93;eip=0x003634; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), di));	// 25535 cmp     [bp+arg_0], di ;~ 0B93:3634
cs=0xb93;eip=0x003637; 	J(JLE(loc_1d54c));	// 25536 jle     short loc_1D54C ;~ 0B93:3637
cs=0xb93;eip=0x003639; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), di));	// 25537 mov     [bp+arg_0], di ;~ 0B93:3639
loc_1d54c:
	// 5950 
cs=0xb93;eip=0x00363c; 	T(MOV(ax, framespersec));	// 25540 mov     ax, framespersec ;~ 0B93:363C
cs=0xb93;eip=0x00363f; 	T(SHL(ax, 1));	// 25541 shl     ax, 1 ;~ 0B93:363F
cs=0xb93;eip=0x003641; 	T(SHL(ax, 1));	// 25542 shl     ax, 1 ;~ 0B93:3641
cs=0xb93;eip=0x003643; 	T(CWD);	// 25543 cwd ;~ 0B93:3643
cs=0xb93;eip=0x003644; 	X(PUSH(dx));	// 25544 push    dx ;~ 0B93:3644
cs=0xb93;eip=0x003645; 	X(PUSH(ax));	// 25545 push    ax ;~ 0B93:3645
cs=0xb93;eip=0x003646; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 25546 mov     ax, [bp+arg_0] ;~ 0B93:3646
cs=0xb93;eip=0x003649; 	T(CWD);	// 25547 cwd ;~ 0B93:3649
cs=0xb93;eip=0x00364a; 	X(PUSH(dx));	// 25548 push    dx ;~ 0B93:364A
cs=0xb93;eip=0x00364b; 	X(PUSH(ax));	// 25549 push    ax ;~ 0B93:364B
cs=0xb93;eip=0x00364c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 25550 mov     ax, [bp+arg_4] ;~ 0B93:364C
cs=0xb93;eip=0x00364f; 	T(CWD);	// 25551 cwd ;~ 0B93:364F
cs=0xb93;eip=0x003650; 	X(PUSH(dx));	// 25552 push    dx ;~ 0B93:3650
cs=0xb93;eip=0x003651; 	X(PUSH(ax));	// 25553 push    ax ;~ 0B93:3651
cs=0xb93;eip=0x003652; 	J(CALLF(__aflmul,0));	// 25554 call    __aFlmul ;~ 0B93:3652
cs=0xb93;eip=0x003657; 	X(PUSH(dx));	// 25555 push    dx ;~ 0B93:3657
cs=0xb93;eip=0x003658; 	X(PUSH(ax));	// 25556 push    ax ;~ 0B93:3658
cs=0xb93;eip=0x003659; 	J(CALLF(__afldiv,0));	// 25557 call    __aFldiv ;~ 0B93:3659
cs=0xb93;eip=0x00365e; 	T(MOV(si, ax));	// 25558 mov     si, ax ;~ 0B93:365E
cs=0xb93;eip=0x003660; 	X(MOV(rect_ingame_text, 0));	// 25559 mov     rect_ingame_text, 0 ;~ 0B93:3660
cs=0xb93;eip=0x003666; 	X(MOV(word_46180, 0x140));	// 25560 mov     word_46180, 140h ;~ 0B93:3666
cs=0xb93;eip=0x00366c; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 25561 mov     di, [bp+arg_2] ;~ 0B93:366C
cs=0xb93;eip=0x00366f; 	T(ADD(di, *(dw*)(raddr(ss,bp+arg_4))));	// 25562 add     di, [bp+arg_4] ;~ 0B93:366F
cs=0xb93;eip=0x003672; 	T(MOV(ax, di));	// 25563 mov     ax, di ;~ 0B93:3672
cs=0xb93;eip=0x003674; 	T(SUB(ax, si));	// 25564 sub     ax, si ;~ 0B93:3674
cs=0xb93;eip=0x003676; 	X(MOV(word_46182, ax));	// 25565 mov     word_46182, ax ;~ 0B93:3676
cs=0xb93;eip=0x003679; 	X(MOV(word_46184, di));	// 25566 mov     word_46184, di ;~ 0B93:3679
cs=0xb93;eip=0x00367d; 	X(PUSH(di));	// 25567 push    di ;~ 0B93:367D
cs=0xb93;eip=0x00367e; 	X(PUSH(ax));	// 25568 push    ax ;~ 0B93:367E
cs=0xb93;eip=0x00367f; 	T(MOV(ax, 0x140));	// 25569 mov     ax, 140h ;~ 0B93:367F
cs=0xb93;eip=0x003682; 	X(PUSH(ax));	// 25570 push    ax ;~ 0B93:3682
cs=0xb93;eip=0x003683; 	T(SUB(ax, ax));	// 25571 sub     ax, ax ;~ 0B93:3683
cs=0xb93;eip=0x003685; 	X(PUSH(ax));	// 25572 push    ax ;~ 0B93:3685
cs=0xb93;eip=0x003686; 	J(CALLF(sprite_set_1_size,0));	// 25573 call    sprite_set_1_size ;~ 0B93:3686
cs=0xb93;eip=0x00368b; 	T(ADD(sp, 8));	// 25574 add     sp, 8 ;~ 0B93:368B
cs=0xb93;eip=0x00368e; 	X(PUSH(skybox_wat_color));	// 25575 push    skybox_wat_color ;~ 0B93:368E
cs=0xb93;eip=0x003692; 	J(CALLF(sprite_clear_1_color,0));	// 25576 call    sprite_clear_1_color ;~ 0B93:3692
cs=0xb93;eip=0x003697; 	T(ADD(sp, 2));	// 25577 add     sp, 2 ;~ 0B93:3697
cs=0xb93;eip=0x00369a; 	T(MOV(ax, 0x0AA0E));	// 25578 mov     ax, 0AA0Eh ;~ 0B93:369A
cs=0xb93;eip=0x00369d; 	X(POP(si));	// 25579 pop     si ;~ 0B93:369D
cs=0xb93;eip=0x00369e; 	X(POP(di));	// 25580 pop     di ;~ 0B93:369E
cs=0xb93;eip=0x00369f; 	T(MOV(sp, bp));	// 25581 mov     sp, bp ;~ 0B93:369F
cs=0xb93;eip=0x0036a1; 	X(POP(bp));	// 25582 pop     bp ;~ 0B93:36A1
cs=0xb93;eip=0x0036a2; 	J(RETF(0));	// 25583 retf ;~ 0B93:36A2

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdo_sinking: 	goto do_sinking;
        case m2c::kloc_1d54c: 	goto loc_1d54c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool init_crak(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    init_crak:
    _begin:
#undef var_1a
#define var_1a -0x1A
	// 25596 var_1A          = word ptr -1Ah ;~ 0B93:36A4
#undef var_18
#define var_18 -0x18
	// 25597 var_18          = word ptr -18h ;~ 0B93:36A4
#undef var_14
#define var_14 -0x14
	// 25598 var_14          = word ptr -14h ;~ 0B93:36A4
#undef var_12
#define var_12 -0x12
	// 25599 var_12          = word ptr -12h ;~ 0B93:36A4
#undef var_10
#define var_10 -0x10
	// 25600 var_10          = word ptr -10h ;~ 0B93:36A4
#undef var_e
#define var_e -0x0E
	// 25601 var_E           = word ptr -0Eh ;~ 0B93:36A4
#undef var_c
#define var_c -0x0C
	// 25602 var_C           = word ptr -0Ch ;~ 0B93:36A4
#undef var_a
#define var_a -0x0A
	// 25603 var_A           = word ptr -0Ah ;~ 0B93:36A4
#undef var_8
#define var_8 -8
	// 25604 var_8           = dword ptr -8 ;~ 0B93:36A4
#undef var_4
#define var_4 -4
	// 25605 var_4           = dword ptr -4 ;~ 0B93:36A4
#undef arg_0
#define arg_0 6
	// 25606 arg_0           = word ptr  6 ;~ 0B93:36A4
#undef arg_2
#define arg_2 8
	// 25607 arg_2           = word ptr  8 ;~ 0B93:36A4
#undef arg_4
#define arg_4 0x0A
	// 25608 arg_4           = word ptr  0Ah ;~ 0B93:36A4
cs=0xb93;eip=0x0036a4; 	X(PUSH(bp));	// 25610 push    bp ;~ 0B93:36A4
cs=0xb93;eip=0x0036a5; 	T(MOV(bp, sp));	// 25611 mov     bp, sp ;~ 0B93:36A5
cs=0xb93;eip=0x0036a7; 	T(SUB(sp, 0x1A));	// 25612 sub     sp, 1Ah ;~ 0B93:36A7
cs=0xb93;eip=0x0036aa; 	X(PUSH(di));	// 25613 push    di ;~ 0B93:36AA
cs=0xb93;eip=0x0036ab; 	X(PUSH(si));	// 25614 push    si ;~ 0B93:36AB
cs=0xb93;eip=0x0036ac; 	T(MOV(ax, offset(dseg,acrak)));	// 25615 mov     ax, offset aCrak ; "crak" ;~ 0B93:36AC
cs=0xb93;eip=0x0036af; 	X(PUSH(ax));	// 25616 push    ax ;~ 0B93:36AF
cs=0xb93;eip=0x0036b0; 	X(PUSH(word_449a2));	// 25617 push    word_449A2 ;~ 0B93:36B0
cs=0xb93;eip=0x0036b4; 	X(PUSH(gameresptr));	// 25618 push    gameresptr ;~ 0B93:36B4
cs=0xb93;eip=0x0036b8; 	J(CALLF(locate_shape_alt,0));	// 25619 call    locate_shape_alt ;~ 0B93:36B8
cs=0xb93;eip=0x0036bd; 	T(ADD(sp, 6));	// 25620 add     sp, 6 ;~ 0B93:36BD
cs=0xb93;eip=0x0036c0; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 25621 mov     word ptr [bp+var_8], ax ;~ 0B93:36C0
cs=0xb93;eip=0x0036c3; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 25622 mov     word ptr [bp+var_8+2], dx ;~ 0B93:36C3
cs=0xb93;eip=0x0036c6; 	T(MOV(ax, offset(dseg,acinf)));	// 25623 mov     ax, offset aCinf ; "cinf" ;~ 0B93:36C6
cs=0xb93;eip=0x0036c9; 	X(PUSH(ax));	// 25624 push    ax ;~ 0B93:36C9
cs=0xb93;eip=0x0036ca; 	X(PUSH(word_449a2));	// 25625 push    word_449A2 ;~ 0B93:36CA
cs=0xb93;eip=0x0036ce; 	X(PUSH(gameresptr));	// 25626 push    gameresptr ;~ 0B93:36CE
cs=0xb93;eip=0x0036d2; 	J(CALLF(locate_shape_alt,0));	// 25627 call    locate_shape_alt ;~ 0B93:36D2
cs=0xb93;eip=0x0036d7; 	T(ADD(sp, 6));	// 25628 add     sp, 6 ;~ 0B93:36D7
cs=0xb93;eip=0x0036da; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 25629 mov     word ptr [bp+var_4], ax ;~ 0B93:36DA
cs=0xb93;eip=0x0036dd; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 25630 mov     word ptr [bp+var_4+2], dx ;~ 0B93:36DD
cs=0xb93;eip=0x0036e0; 	T(MOV(ax, framespersec));	// 25631 mov     ax, framespersec ;~ 0B93:36E0
cs=0xb93;eip=0x0036e3; 	T(CWD);	// 25632 cwd ;~ 0B93:36E3
cs=0xb93;eip=0x0036e4; 	T(MOV(cx, 7));	// 25633 mov     cx, 7 ;~ 0B93:36E4
cs=0xb93;eip=0x0036e7; 	T(IDIV2(cx));	// 25634 idiv    cx ;~ 0B93:36E7
cs=0xb93;eip=0x0036e9; 	T(MOV(cx, ax));	// 25635 mov     cx, ax ;~ 0B93:36E9
cs=0xb93;eip=0x0036eb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 25636 mov     ax, [bp+arg_0] ;~ 0B93:36EB
cs=0xb93;eip=0x0036ee; 	T(CWD);	// 25637 cwd ;~ 0B93:36EE
cs=0xb93;eip=0x0036ef; 	T(IDIV2(cx));	// 25638 idiv    cx ;~ 0B93:36EF
cs=0xb93;eip=0x0036f1; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 25639 mov     [bp+var_1A], ax ; var_1A = ax = (framespersec / 7) / framecount ;~ 0B93:36F1
cs=0xb93;eip=0x0036f4; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 25640 les     bx, [bp+var_4] ;~ 0B93:36F4
cs=0xb93;eip=0x0036f7; 	T(MOV(di, *(dw*)(raddr(es,bx))));	// 25642 mov     di, es:[bx] ;~ 0B93:36F7
cs=0xb93;eip=0x0036fa; 	T(CMP(ax, di));	// 25643 cmp     ax, di ;~ 0B93:36FA
cs=0xb93;eip=0x0036fc; 	J(JL(loc_1d614));	// 25644 jl      short loc_1D614 ;~ 0B93:36FC
cs=0xb93;eip=0x0036fe; 	T(ax = di-1);	// 25645 lea     ax, [di-1] ;~ 0B93:36FE
cs=0xb93;eip=0x003701; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 25646 mov     [bp+var_1A], ax ;~ 0B93:3701
loc_1d614:
	// 5951 
cs=0xb93;eip=0x003704; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_1a))));	// 25649 mov     di, [bp+var_1A] ;~ 0B93:3704
cs=0xb93;eip=0x003707; 	T(SHL(di, 1));	// 25650 shl     di, 1 ;~ 0B93:3707
cs=0xb93;eip=0x003709; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 25651 les     bx, [bp+var_4] ;~ 0B93:3709
cs=0xb93;eip=0x00370c; 	T(MOV(ax, *(dw*)(raddr(es,bx+di+2))));	// 25652 mov     ax, es:[bx+di+2] ;~ 0B93:370C
cs=0xb93;eip=0x003710; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 25653 mov     [bp+var_18], ax ;~ 0B93:3710
cs=0xb93;eip=0x003713; 	X(PUSH(si));	// 25654 push    si ;~ 0B93:3713
cs=0xb93;eip=0x003714; 	T(MOV(di, offset(dseg,rect_ingame_text)));	// 25655 mov     di, offset rect_ingame_text ;~ 0B93:3714
cs=0xb93;eip=0x003717; 	T(MOV(si, offset(dseg,cliprect_unk)));	// 25656 mov     si, offset cliprect_unk ;~ 0B93:3717
cs=0xb93;eip=0x00371a; 	X(PUSH(ds));	// 25657 push    ds ;~ 0B93:371A
cs=0xb93;eip=0x00371b; 	X(POP(es));	// 25658 pop     es ;~ 0B93:371B
cs=0xb93;eip=0x00371c; 	X(MOVSW);	// 25660 movsw ;~ 0B93:371C
cs=0xb93;eip=0x00371d; 	X(MOVSW);	// 25661 movsw ;~ 0B93:371D
cs=0xb93;eip=0x00371e; 	X(MOVSW);	// 25662 movsw ;~ 0B93:371E
cs=0xb93;eip=0x00371f; 	X(MOVSW);	// 25663 movsw ;~ 0B93:371F
cs=0xb93;eip=0x003720; 	X(POP(si));	// 25664 pop     si ;~ 0B93:3720
cs=0xb93;eip=0x003721; 	T(SUB(si, si));	// 25665 sub     si, si ;~ 0B93:3721
cs=0xb93;eip=0x003723; 	J(JMP(loc_1d790));	// 25666 jmp     loc_1D790 ;~ 0B93:3723
loc_1d636:
	// 5952 
cs=0xb93;eip=0x003726; 	T(MOV(di, si));	// 25670 mov     di, si ;~ 0B93:3726
cs=0xb93;eip=0x003728; 	T(MOV(cl, 3));	// 25671 mov     cl, 3 ;~ 0B93:3728
cs=0xb93;eip=0x00372a; 	T(SHL(di, cl));	// 25672 shl     di, cl ;~ 0B93:372A
cs=0xb93;eip=0x00372c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 25673 les     bx, [bp+var_8] ;~ 0B93:372C
cs=0xb93;eip=0x00372f; 	T(MOV(ax, *(dw*)(raddr(es,bx+di))));	// 25675 mov     ax, es:[bx+di] ;~ 0B93:372F
cs=0xb93;eip=0x003732; 	T(MOV(dx, *(dw*)(raddr(es,bx+di+2))));	// 25676 mov     dx, es:[bx+di+2] ;~ 0B93:3732
cs=0xb93;eip=0x003736; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 25677 mov     [bp+var_10], ax ;~ 0B93:3736
cs=0xb93;eip=0x003739; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), dx));	// 25678 mov     [bp+var_E], dx ;~ 0B93:3739
cs=0xb93;eip=0x00373c; 	T(MOV(bx, si));	// 25679 mov     bx, si ;~ 0B93:373C
cs=0xb93;eip=0x00373e; 	T(SHL(bx, cl));	// 25680 shl     bx, cl ;~ 0B93:373E
cs=0xb93;eip=0x003740; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 25681 mov     di, word ptr [bp+var_8] ;~ 0B93:3740
cs=0xb93;eip=0x003743; 	T(MOV(ax, *(dw*)(raddr(es,bx+di+4))));	// 25682 mov     ax, es:[bx+di+4] ;~ 0B93:3743
cs=0xb93;eip=0x003747; 	T(MOV(dx, *(dw*)(raddr(es,bx+di+6))));	// 25683 mov     dx, es:[bx+di+6] ;~ 0B93:3747
cs=0xb93;eip=0x00374b; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 25684 mov     [bp+var_14], ax ;~ 0B93:374B
cs=0xb93;eip=0x00374e; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), dx));	// 25685 mov     [bp+var_12], dx ;~ 0B93:374E
cs=0xb93;eip=0x003751; 	T(MOV(ax, 0x0C8));	// 25686 mov     ax, 0C8h ; 'È' ;~ 0B93:3751
cs=0xb93;eip=0x003754; 	T(CWD);	// 25687 cwd ;~ 0B93:3754
cs=0xb93;eip=0x003755; 	X(PUSH(dx));	// 25688 push    dx ;~ 0B93:3755
cs=0xb93;eip=0x003756; 	X(PUSH(ax));	// 25689 push    ax ;~ 0B93:3756
cs=0xb93;eip=0x003757; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 25690 mov     ax, [bp+arg_4] ;~ 0B93:3757
cs=0xb93;eip=0x00375a; 	T(CWD);	// 25691 cwd ;~ 0B93:375A
cs=0xb93;eip=0x00375b; 	X(PUSH(dx));	// 25692 push    dx ;~ 0B93:375B
cs=0xb93;eip=0x00375c; 	X(PUSH(ax));	// 25693 push    ax ;~ 0B93:375C
cs=0xb93;eip=0x00375d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 25694 mov     ax, [bp+var_E] ;~ 0B93:375D
cs=0xb93;eip=0x003760; 	T(CWD);	// 25695 cwd ;~ 0B93:3760
cs=0xb93;eip=0x003761; 	X(PUSH(dx));	// 25696 push    dx ;~ 0B93:3761
cs=0xb93;eip=0x003762; 	X(PUSH(ax));	// 25697 push    ax ;~ 0B93:3762
cs=0xb93;eip=0x003763; 	J(CALLF(__aflmul,0));	// 25698 call    __aFlmul ;~ 0B93:3763
cs=0xb93;eip=0x003768; 	X(PUSH(dx));	// 25699 push    dx ;~ 0B93:3768
cs=0xb93;eip=0x003769; 	X(PUSH(ax));	// 25700 push    ax ;~ 0B93:3769
cs=0xb93;eip=0x00376a; 	J(CALLF(__afldiv,0));	// 25701 call    __aFldiv ;~ 0B93:376A
cs=0xb93;eip=0x00376f; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 25702 mov     [bp+var_E], ax ;~ 0B93:376F
cs=0xb93;eip=0x003772; 	T(MOV(ax, 0x0C8));	// 25703 mov     ax, 0C8h ; 'È' ;~ 0B93:3772
cs=0xb93;eip=0x003775; 	T(CWD);	// 25704 cwd ;~ 0B93:3775
cs=0xb93;eip=0x003776; 	X(PUSH(dx));	// 25705 push    dx ;~ 0B93:3776
cs=0xb93;eip=0x003777; 	X(PUSH(ax));	// 25706 push    ax ;~ 0B93:3777
cs=0xb93;eip=0x003778; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 25707 mov     ax, [bp+arg_4] ;~ 0B93:3778
cs=0xb93;eip=0x00377b; 	T(CWD);	// 25708 cwd ;~ 0B93:377B
cs=0xb93;eip=0x00377c; 	X(PUSH(dx));	// 25709 push    dx ;~ 0B93:377C
cs=0xb93;eip=0x00377d; 	X(PUSH(ax));	// 25710 push    ax ;~ 0B93:377D
cs=0xb93;eip=0x00377e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 25711 mov     ax, [bp+var_12] ;~ 0B93:377E
cs=0xb93;eip=0x003781; 	T(CWD);	// 25712 cwd ;~ 0B93:3781
cs=0xb93;eip=0x003782; 	X(PUSH(dx));	// 25713 push    dx ;~ 0B93:3782
cs=0xb93;eip=0x003783; 	X(PUSH(ax));	// 25714 push    ax ;~ 0B93:3783
cs=0xb93;eip=0x003784; 	J(CALLF(__aflmul,0));	// 25715 call    __aFlmul ;~ 0B93:3784
cs=0xb93;eip=0x003789; 	X(PUSH(dx));	// 25716 push    dx ;~ 0B93:3789
cs=0xb93;eip=0x00378a; 	X(PUSH(ax));	// 25717 push    ax ;~ 0B93:378A
cs=0xb93;eip=0x00378b; 	J(CALLF(__afldiv,0));	// 25718 call    __aFldiv ;~ 0B93:378B
cs=0xb93;eip=0x003790; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 25719 mov     [bp+var_12], ax ;~ 0B93:3790
cs=0xb93;eip=0x003793; 	T(SUB(ax, ax));	// 25720 sub     ax, ax ;~ 0B93:3793
cs=0xb93;eip=0x003795; 	X(PUSH(ax));	// 25721 push    ax ;~ 0B93:3795
cs=0xb93;eip=0x003796; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 25722 mov     ax, [bp+var_12] ;~ 0B93:3796
cs=0xb93;eip=0x003799; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 25723 add     ax, [bp+arg_2] ;~ 0B93:3799
cs=0xb93;eip=0x00379c; 	T(DEC(ax));	// 25724 dec     ax ;~ 0B93:379C
cs=0xb93;eip=0x00379d; 	X(PUSH(ax));	// 25725 push    ax ;~ 0B93:379D
cs=0xb93;eip=0x00379e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 25726 push    [bp+var_14] ;~ 0B93:379E
cs=0xb93;eip=0x0037a1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 25727 mov     ax, [bp+var_E] ;~ 0B93:37A1
cs=0xb93;eip=0x0037a4; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 25728 add     ax, [bp+arg_2] ;~ 0B93:37A4
cs=0xb93;eip=0x0037a7; 	T(DEC(ax));	// 25729 dec     ax ;~ 0B93:37A7
cs=0xb93;eip=0x0037a8; 	X(PUSH(ax));	// 25730 push    ax ;~ 0B93:37A8
cs=0xb93;eip=0x0037a9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10))));	// 25731 push    [bp+var_10] ;~ 0B93:37A9
cs=0xb93;eip=0x0037ac; 	J(CALLF(prerender_line,0));	// 25732 call    preRender_line ;~ 0B93:37AC
cs=0xb93;eip=0x0037b1; 	T(ADD(sp, 0x0A));	// 25733 add     sp, 0Ah ;~ 0B93:37B1
cs=0xb93;eip=0x0037b4; 	T(SUB(ax, ax));	// 25734 sub     ax, ax ;~ 0B93:37B4
cs=0xb93;eip=0x0037b6; 	X(PUSH(ax));	// 25735 push    ax ;~ 0B93:37B6
cs=0xb93;eip=0x0037b7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 25736 mov     ax, [bp+var_12] ;~ 0B93:37B7
cs=0xb93;eip=0x0037ba; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 25737 add     ax, [bp+arg_2] ;~ 0B93:37BA
cs=0xb93;eip=0x0037bd; 	T(INC(ax));	// 25738 inc     ax ;~ 0B93:37BD
cs=0xb93;eip=0x0037be; 	X(PUSH(ax));	// 25739 push    ax ;~ 0B93:37BE
cs=0xb93;eip=0x0037bf; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 25740 push    [bp+var_14] ;~ 0B93:37BF
cs=0xb93;eip=0x0037c2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 25741 mov     ax, [bp+var_E] ;~ 0B93:37C2
cs=0xb93;eip=0x0037c5; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 25742 add     ax, [bp+arg_2] ;~ 0B93:37C5
cs=0xb93;eip=0x0037c8; 	T(INC(ax));	// 25743 inc     ax ;~ 0B93:37C8
cs=0xb93;eip=0x0037c9; 	X(PUSH(ax));	// 25744 push    ax ;~ 0B93:37C9
cs=0xb93;eip=0x0037ca; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10))));	// 25745 push    [bp+var_10] ;~ 0B93:37CA
cs=0xb93;eip=0x0037cd; 	J(CALLF(prerender_line,0));	// 25746 call    preRender_line ;~ 0B93:37CD
cs=0xb93;eip=0x0037d2; 	T(ADD(sp, 0x0A));	// 25747 add     sp, 0Ah ;~ 0B93:37D2
cs=0xb93;eip=0x0037d5; 	X(PUSH(dialog_fnt_colour));	// 25748 push    dialog_fnt_colour ;~ 0B93:37D5
cs=0xb93;eip=0x0037d9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 25749 mov     ax, [bp+var_12] ;~ 0B93:37D9
cs=0xb93;eip=0x0037dc; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 25750 add     ax, [bp+arg_2] ;~ 0B93:37DC
cs=0xb93;eip=0x0037df; 	X(PUSH(ax));	// 25751 push    ax ;~ 0B93:37DF
cs=0xb93;eip=0x0037e0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 25752 push    [bp+var_14] ;~ 0B93:37E0
cs=0xb93;eip=0x0037e3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 25753 mov     ax, [bp+var_E] ;~ 0B93:37E3
cs=0xb93;eip=0x0037e6; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 25754 add     ax, [bp+arg_2] ;~ 0B93:37E6
cs=0xb93;eip=0x0037e9; 	X(PUSH(ax));	// 25755 push    ax ;~ 0B93:37E9
cs=0xb93;eip=0x0037ea; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10))));	// 25756 push    [bp+var_10] ;~ 0B93:37EA
cs=0xb93;eip=0x0037ed; 	J(CALLF(prerender_line,0));	// 25757 call    preRender_line ;~ 0B93:37ED
cs=0xb93;eip=0x0037f2; 	T(ADD(sp, 0x0A));	// 25758 add     sp, 0Ah ;~ 0B93:37F2
cs=0xb93;eip=0x0037f5; 	T(CMP(timertestflag_copy, 0));	// 25759 cmp     timertestflag_copy, 0 ;~ 0B93:37F5
cs=0xb93;eip=0x0037fa; 	J(JNZ(loc_1d70f));	// 25760 jnz     short loc_1D70F ;~ 0B93:37FA
cs=0xb93;eip=0x0037fc; 	J(JMP(loc_1d78f));	// 25761 jmp     loc_1D78F ;~ 0B93:37FC
loc_1d70f:
	// 5953 
cs=0xb93;eip=0x0037ff; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 25765 mov     ax, [bp+var_10] ;~ 0B93:37FF
cs=0xb93;eip=0x003802; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 25766 mov     [bp+var_C], ax ;~ 0B93:3802
cs=0xb93;eip=0x003805; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 25767 mov     ax, [bp+var_E] ;~ 0B93:3805
cs=0xb93;eip=0x003808; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 25768 add     ax, [bp+arg_2] ;~ 0B93:3808
cs=0xb93;eip=0x00380b; 	T(DEC(ax));	// 25769 dec     ax ;~ 0B93:380B
cs=0xb93;eip=0x00380c; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 25770 mov     [bp+var_A], ax ;~ 0B93:380C
cs=0xb93;eip=0x00380f; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25771 mov     ax, offset rect_ingame_text ;~ 0B93:380F
cs=0xb93;eip=0x003812; 	X(PUSH(ax));	// 25772 push    ax ;~ 0B93:3812
cs=0xb93;eip=0x003813; 	T(ax = bp+var_c);	// 25773 lea     ax, [bp+var_C] ;~ 0B93:3813
cs=0xb93;eip=0x003816; 	X(PUSH(ax));	// 25774 push    ax ;~ 0B93:3816
cs=0xb93;eip=0x003817; 	J(CALLF(rect_adjust_from_point,0));	// 25775 call    rect_adjust_from_point ;~ 0B93:3817
cs=0xb93;eip=0x00381c; 	T(ADD(sp, 4));	// 25776 add     sp, 4 ;~ 0B93:381C
cs=0xb93;eip=0x00381f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 25777 mov     ax, [bp+var_14] ;~ 0B93:381F
cs=0xb93;eip=0x003822; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 25778 mov     [bp+var_C], ax ;~ 0B93:3822
cs=0xb93;eip=0x003825; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 25779 mov     ax, [bp+var_12] ;~ 0B93:3825
cs=0xb93;eip=0x003828; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 25780 add     ax, [bp+arg_2] ;~ 0B93:3828
cs=0xb93;eip=0x00382b; 	T(INC(ax));	// 25781 inc     ax ;~ 0B93:382B
cs=0xb93;eip=0x00382c; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 25782 mov     [bp+var_A], ax ;~ 0B93:382C
cs=0xb93;eip=0x00382f; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25783 mov     ax, offset rect_ingame_text ;~ 0B93:382F
cs=0xb93;eip=0x003832; 	X(PUSH(ax));	// 25784 push    ax ;~ 0B93:3832
cs=0xb93;eip=0x003833; 	T(ax = bp+var_c);	// 25785 lea     ax, [bp+var_C] ;~ 0B93:3833
cs=0xb93;eip=0x003836; 	X(PUSH(ax));	// 25786 push    ax ;~ 0B93:3836
cs=0xb93;eip=0x003837; 	J(CALLF(rect_adjust_from_point,0));	// 25787 call    rect_adjust_from_point ;~ 0B93:3837
cs=0xb93;eip=0x00383c; 	T(ADD(sp, 4));	// 25788 add     sp, 4 ;~ 0B93:383C
cs=0xb93;eip=0x00383f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 25789 mov     ax, [bp+var_10] ;~ 0B93:383F
cs=0xb93;eip=0x003842; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 25790 mov     [bp+var_C], ax ;~ 0B93:3842
cs=0xb93;eip=0x003845; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 25791 mov     ax, [bp+var_E] ;~ 0B93:3845
cs=0xb93;eip=0x003848; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 25792 add     ax, [bp+arg_2] ;~ 0B93:3848
cs=0xb93;eip=0x00384b; 	T(INC(ax));	// 25793 inc     ax ;~ 0B93:384B
cs=0xb93;eip=0x00384c; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 25794 mov     [bp+var_A], ax ;~ 0B93:384C
cs=0xb93;eip=0x00384f; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25795 mov     ax, offset rect_ingame_text ;~ 0B93:384F
cs=0xb93;eip=0x003852; 	X(PUSH(ax));	// 25796 push    ax ;~ 0B93:3852
cs=0xb93;eip=0x003853; 	T(ax = bp+var_c);	// 25797 lea     ax, [bp+var_C] ;~ 0B93:3853
cs=0xb93;eip=0x003856; 	X(PUSH(ax));	// 25798 push    ax ;~ 0B93:3856
cs=0xb93;eip=0x003857; 	J(CALLF(rect_adjust_from_point,0));	// 25799 call    rect_adjust_from_point ;~ 0B93:3857
cs=0xb93;eip=0x00385c; 	T(ADD(sp, 4));	// 25800 add     sp, 4 ;~ 0B93:385C
cs=0xb93;eip=0x00385f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 25801 mov     ax, [bp+var_14] ;~ 0B93:385F
cs=0xb93;eip=0x003862; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 25802 mov     [bp+var_C], ax ;~ 0B93:3862
cs=0xb93;eip=0x003865; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 25803 mov     ax, [bp+var_12] ;~ 0B93:3865
cs=0xb93;eip=0x003868; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 25804 add     ax, [bp+arg_2] ;~ 0B93:3868
cs=0xb93;eip=0x00386b; 	T(DEC(ax));	// 25805 dec     ax ;~ 0B93:386B
cs=0xb93;eip=0x00386c; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 25806 mov     [bp+var_A], ax ;~ 0B93:386C
cs=0xb93;eip=0x00386f; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25807 mov     ax, offset rect_ingame_text ;~ 0B93:386F
cs=0xb93;eip=0x003872; 	X(PUSH(ax));	// 25808 push    ax ;~ 0B93:3872
cs=0xb93;eip=0x003873; 	T(ax = bp+var_c);	// 25809 lea     ax, [bp+var_C] ;~ 0B93:3873
cs=0xb93;eip=0x003876; 	X(PUSH(ax));	// 25810 push    ax ;~ 0B93:3876
cs=0xb93;eip=0x003877; 	J(CALLF(rect_adjust_from_point,0));	// 25811 call    rect_adjust_from_point ;~ 0B93:3877
cs=0xb93;eip=0x00387c; 	T(ADD(sp, 4));	// 25812 add     sp, 4 ;~ 0B93:387C
loc_1d78f:
	// 5954 
cs=0xb93;eip=0x00387f; 	T(INC(si));	// 25815 inc     si ;~ 0B93:387F
loc_1d790:
	// 5955 
cs=0xb93;eip=0x003880; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), si));	// 25818 cmp     [bp+var_18], si ;~ 0B93:3880
cs=0xb93;eip=0x003883; 	J(JLE(loc_1d798));	// 25819 jle     short loc_1D798 ;~ 0B93:3883
cs=0xb93;eip=0x003885; 	J(JMP(loc_1d636));	// 25820 jmp     loc_1D636 ;~ 0B93:3885
loc_1d798:
	// 5956 
cs=0xb93;eip=0x003888; 	T(MOV(ax, offset(dseg,rect_ingame_text)));	// 25824 mov     ax, offset rect_ingame_text ;~ 0B93:3888
cs=0xb93;eip=0x00388b; 	X(POP(si));	// 25825 pop     si ;~ 0B93:388B
cs=0xb93;eip=0x00388c; 	X(POP(di));	// 25826 pop     di ;~ 0B93:388C
cs=0xb93;eip=0x00388d; 	T(MOV(sp, bp));	// 25827 mov     sp, bp ;~ 0B93:388D
cs=0xb93;eip=0x00388f; 	X(POP(bp));	// 25828 pop     bp ;~ 0B93:388F
cs=0xb93;eip=0x003890; 	J(RETF(0));	// 25829 retf ;~ 0B93:3890

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kinit_crak: 	goto init_crak;
        case m2c::kloc_1d614: 	goto loc_1d614;
        case m2c::kloc_1d636: 	goto loc_1d636;
        case m2c::kloc_1d70f: 	goto loc_1d70f;
        case m2c::kloc_1d78f: 	goto loc_1d78f;
        case m2c::kloc_1d790: 	goto loc_1d790;
        case m2c::kloc_1d798: 	goto loc_1d798;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool load_skybox(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    load_skybox:
    _begin:
#undef var_4
#define var_4 -4
	// 25842 var_4           = word ptr -4 ;~ 0B93:3892
#undef arg_0
#define arg_0 6
	// 25843 arg_0           = byte ptr  6 ;~ 0B93:3892
cs=0xb93;eip=0x003892; 	X(PUSH(bp));	// 25845 push    bp ;~ 0B93:3892
cs=0xb93;eip=0x003893; 	T(MOV(bp, sp));	// 25846 mov     bp, sp ;~ 0B93:3893
cs=0xb93;eip=0x003895; 	T(SUB(sp, 4));	// 25847 sub     sp, 4 ;~ 0B93:3895
cs=0xb93;eip=0x003898; 	X(PUSH(si));	// 25848 push    si ;~ 0B93:3898
cs=0xb93;eip=0x003899; 	T(TEST(*(raddr(ss,bp+arg_0)), 8));	// 25849 test    [bp+arg_0], 8 ;~ 0B93:3899
cs=0xb93;eip=0x00389d; 	J(JZ(loc_1d7b6));	// 25850 jz      short loc_1D7B6 ;~ 0B93:389D
cs=0xb93;eip=0x00389f; 	X(AND(*(raddr(ss,bp+arg_0)), 7));	// 25851 and     [bp+arg_0], 7 ;~ 0B93:389F
cs=0xb93;eip=0x0038a3; 	J(JMP(loc_1d88e));	// 25852 jmp     loc_1D88E ;~ 0B93:38A3
loc_1d7b6:
	// 5957 
cs=0xb93;eip=0x0038a6; 	T(CMP(byte_3b8f6, 0));	// 25856 cmp     byte_3B8F6, 0 ;~ 0B93:38A6
cs=0xb93;eip=0x0038ab; 	J(JZ(loc_1d7c8));	// 25857 jz      short loc_1D7C8 ;~ 0B93:38AB
cs=0xb93;eip=0x0038ad; 	T(MOV(al, byte_46167));	// 25858 mov     al, byte_46167 ;~ 0B93:38AD
cs=0xb93;eip=0x0038b0; 	T(CMP(*(raddr(ss,bp+arg_0)), al));	// 25859 cmp     [bp+arg_0], al ;~ 0B93:38B0
cs=0xb93;eip=0x0038b3; 	J(JNZ(loc_1d7c8));	// 25860 jnz     short loc_1D7C8 ;~ 0B93:38B3
cs=0xb93;eip=0x0038b5; 	J(JMP(loc_1d8af));	// 25861 jmp     loc_1D8AF ;~ 0B93:38B5
loc_1d7c8:
	// 5958 
cs=0xb93;eip=0x0038b8; 	X(PUSH(cs));	// 25866 push    cs ;~ 0B93:38B8
cs=0xb93;eip=0x0038b9; 	J(CALL(unload_skybox,0));	// 25867 call    near ptr unload_skybox ;~ 0B93:38B9
cs=0xb93;eip=0x0038bc; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 25868 mov     al, [bp+arg_0] ;~ 0B93:38BC
cs=0xb93;eip=0x0038bf; 	X(MOV(byte_46167, al));	// 25869 mov     byte_46167, al ;~ 0B93:38BF
cs=0xb93;eip=0x0038c2; 	X(MOV(byte_3b8f6, 1));	// 25870 mov     byte_3B8F6, 1 ;~ 0B93:38C2
cs=0xb93;eip=0x0038c7; 	T(CBW);	// 25871 cbw ;~ 0B93:38C7
cs=0xb93;eip=0x0038c8; 	T(MOV(cx, ax));	// 25872 mov     cx, ax ;~ 0B93:38C8
cs=0xb93;eip=0x0038ca; 	T(SHL(ax, 1));	// 25873 shl     ax, 1 ;~ 0B93:38CA
cs=0xb93;eip=0x0038cc; 	T(SHL(ax, 1));	// 25874 shl     ax, 1 ;~ 0B93:38CC
cs=0xb93;eip=0x0038ce; 	T(SHL(ax, 1));	// 25875 shl     ax, 1 ;~ 0B93:38CE
cs=0xb93;eip=0x0038d0; 	T(ADD(ax, cx));	// 25876 add     ax, cx ;~ 0B93:38D0
cs=0xb93;eip=0x0038d2; 	T(ADD(ax, offset(dseg,adesert)));	// 25877 add     ax, offset aDesert ; "desert" ;~ 0B93:38D2
cs=0xb93;eip=0x0038d5; 	X(PUSH(ax));	// 25878 push    ax ;~ 0B93:38D5
cs=0xb93;eip=0x0038d6; 	J(CALLF(file_load_shape2d_fatal_thunk,0));	// 25879 call    file_load_shape2d_fatal_thunk ;~ 0B93:38D6
cs=0xb93;eip=0x0038db; 	T(ADD(sp, 2));	// 25880 add     sp, 2 ;~ 0B93:38DB
cs=0xb93;eip=0x0038de; 	X(MOV(skybox_res_ofs, ax));	// 25881 mov     skybox_res_ofs, ax ;~ 0B93:38DE
cs=0xb93;eip=0x0038e1; 	X(MOV(skybox_res_seg, dx));	// 25882 mov     skybox_res_seg, dx ;~ 0B93:38E1
cs=0xb93;eip=0x0038e5; 	T(MOV(ax, offset(dseg,skyboxes)));	// 25883 mov     ax, offset skyboxes ;~ 0B93:38E5
cs=0xb93;eip=0x0038e8; 	X(PUSH(ax));	// 25884 push    ax ;~ 0B93:38E8
cs=0xb93;eip=0x0038e9; 	T(MOV(ax, offset(dseg,ascensce2sce3sce4)));	// 25885 mov     ax, offset aScensce2sce3sce4 ; "scensce2sce3sce4" ;~ 0B93:38E9
cs=0xb93;eip=0x0038ec; 	X(PUSH(ax));	// 25886 push    ax ;~ 0B93:38EC
cs=0xb93;eip=0x0038ed; 	X(PUSH(dx));	// 25887 push    dx ;~ 0B93:38ED
cs=0xb93;eip=0x0038ee; 	X(PUSH(skybox_res_ofs));	// 25888 push    skybox_res_ofs ;~ 0B93:38EE
cs=0xb93;eip=0x0038f2; 	J(CALLF(locate_many_resources,0));	// 25889 call    locate_many_resources ;~ 0B93:38F2
cs=0xb93;eip=0x0038f7; 	T(ADD(sp, 8));	// 25890 add     sp, 8 ;~ 0B93:38F7
cs=0xb93;eip=0x0038fa; 	T(LES(bx, *(skyboxes)));	// 25891 les     bx, skyboxes ;~ 0B93:38FA
cs=0xb93;eip=0x0038fe; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 25892 mov     ax, es:[bx+2] ;~ 0B93:38FE
cs=0xb93;eip=0x003902; 	X(MOV(skybox_ptr1, ax));	// 25893 mov     skybox_ptr1, ax ;~ 0B93:3902
cs=0xb93;eip=0x003905; 	T(LES(bx, *(dd*)(((db*)skyboxes)+4)));	// 25894 les     bx, skyboxes+4 ;~ 0B93:3905
cs=0xb93;eip=0x003909; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 25895 mov     ax, es:[bx+2] ;~ 0B93:3909
cs=0xb93;eip=0x00390d; 	X(MOV(skybox_ptr2, ax));	// 25896 mov     skybox_ptr2, ax ;~ 0B93:390D
cs=0xb93;eip=0x003910; 	T(LES(bx, *(dd*)(((db*)skyboxes)+8)));	// 25897 les     bx, skyboxes+8 ;~ 0B93:3910
cs=0xb93;eip=0x003914; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 25898 mov     ax, es:[bx+2] ;~ 0B93:3914
cs=0xb93;eip=0x003918; 	X(MOV(skybox_ptr3, ax));	// 25899 mov     skybox_ptr3, ax ;~ 0B93:3918
cs=0xb93;eip=0x00391b; 	T(LES(bx, *(dd*)(((db*)skyboxes)+0x0C)));	// 25900 les     bx, skyboxes+0Ch ;~ 0B93:391B
cs=0xb93;eip=0x00391f; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 25901 mov     ax, es:[bx+2] ;~ 0B93:391F
cs=0xb93;eip=0x003923; 	X(MOV(skybox_ptr4, ax));	// 25902 mov     skybox_ptr4, ax ;~ 0B93:3923
cs=0xb93;eip=0x003926; 	T(MOV(si, skybox_ptr1));	// 25903 mov     si, skybox_ptr1 ;~ 0B93:3926
cs=0xb93;eip=0x00392a; 	T(MOV(ax, si));	// 25904 mov     ax, si ;~ 0B93:392A
cs=0xb93;eip=0x00392c; 	T(CMP(ax, skybox_ptr2));	// 25905 cmp     ax, skybox_ptr2 ;~ 0B93:392C
cs=0xb93;eip=0x003930; 	J(JBE(loc_1d846));	// 25906 jbe     short loc_1D846 ;~ 0B93:3930
cs=0xb93;eip=0x003932; 	T(MOV(si, skybox_ptr2));	// 25907 mov     si, skybox_ptr2 ;~ 0B93:3932
loc_1d846:
	// 5959 
cs=0xb93;eip=0x003936; 	T(MOV(ax, si));	// 25910 mov     ax, si ;~ 0B93:3936
cs=0xb93;eip=0x003938; 	T(CMP(ax, skybox_ptr3));	// 25911 cmp     ax, skybox_ptr3 ;~ 0B93:3938
cs=0xb93;eip=0x00393c; 	J(JBE(loc_1d852));	// 25912 jbe     short loc_1D852 ;~ 0B93:393C
cs=0xb93;eip=0x00393e; 	T(MOV(si, skybox_ptr3));	// 25913 mov     si, skybox_ptr3 ;~ 0B93:393E
loc_1d852:
	// 5960 
cs=0xb93;eip=0x003942; 	T(MOV(ax, si));	// 25916 mov     ax, si ;~ 0B93:3942
cs=0xb93;eip=0x003944; 	T(CMP(ax, skybox_ptr4));	// 25917 cmp     ax, skybox_ptr4 ;~ 0B93:3944
cs=0xb93;eip=0x003948; 	J(JBE(loc_1d85e));	// 25918 jbe     short loc_1D85E ;~ 0B93:3948
cs=0xb93;eip=0x00394a; 	T(MOV(si, skybox_ptr4));	// 25919 mov     si, skybox_ptr4 ;~ 0B93:394A
loc_1d85e:
	// 5961 
cs=0xb93;eip=0x00394e; 	X(MOV(skybox_current, si));	// 25922 mov     skybox_current, si ;~ 0B93:394E
cs=0xb93;eip=0x003952; 	T(MOV(si, skybox_ptr1));	// 25923 mov     si, skybox_ptr1 ;~ 0B93:3952
cs=0xb93;eip=0x003956; 	T(MOV(ax, si));	// 25924 mov     ax, si ;~ 0B93:3956
cs=0xb93;eip=0x003958; 	T(CMP(ax, skybox_ptr2));	// 25925 cmp     ax, skybox_ptr2 ;~ 0B93:3958
cs=0xb93;eip=0x00395c; 	J(JNC(loc_1d872));	// 25926 jnb     short loc_1D872 ;~ 0B93:395C
cs=0xb93;eip=0x00395e; 	T(MOV(si, skybox_ptr2));	// 25927 mov     si, skybox_ptr2 ;~ 0B93:395E
loc_1d872:
	// 5962 
cs=0xb93;eip=0x003962; 	T(MOV(ax, si));	// 25930 mov     ax, si ;~ 0B93:3962
cs=0xb93;eip=0x003964; 	T(CMP(ax, skybox_ptr3));	// 25931 cmp     ax, skybox_ptr3 ;~ 0B93:3964
cs=0xb93;eip=0x003968; 	J(JNC(loc_1d87e));	// 25932 jnb     short loc_1D87E ;~ 0B93:3968
cs=0xb93;eip=0x00396a; 	T(MOV(si, skybox_ptr3));	// 25933 mov     si, skybox_ptr3 ;~ 0B93:396A
loc_1d87e:
	// 5963 
cs=0xb93;eip=0x00396e; 	T(MOV(ax, si));	// 25936 mov     ax, si ;~ 0B93:396E
cs=0xb93;eip=0x003970; 	T(CMP(ax, skybox_ptr4));	// 25937 cmp     ax, skybox_ptr4 ;~ 0B93:3970
cs=0xb93;eip=0x003974; 	J(JNC(loc_1d88a));	// 25938 jnb     short loc_1D88A ;~ 0B93:3974
cs=0xb93;eip=0x003976; 	T(MOV(si, skybox_ptr4));	// 25939 mov     si, skybox_ptr4 ;~ 0B93:3976
loc_1d88a:
	// 5964 
cs=0xb93;eip=0x00397a; 	X(MOV(word_454ce, si));	// 25942 mov     word_454CE, si ;~ 0B93:397A
loc_1d88e:
	// 5965 
cs=0xb93;eip=0x00397e; 	T(MOV(ax, material_clrlist_ptr));	// 25945 mov     ax, material_clrlist_ptr ;~ 0B93:397E
cs=0xb93;eip=0x003981; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 25946 mov     [bp+var_4], ax ;~ 0B93:3981
cs=0xb93;eip=0x003984; 	T(MOV(bx, ax));	// 25947 mov     bx, ax ;~ 0B93:3984
cs=0xb93;eip=0x003986; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 25948 mov     ax, [bx+22h] ;~ 0B93:3986
cs=0xb93;eip=0x003989; 	X(MOV(skybox_sky_color, ax));	// 25949 mov     skybox_sky_color, ax ;~ 0B93:3989
cs=0xb93;eip=0x00398c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 25950 mov     ax, [bx+20h] ;~ 0B93:398C
cs=0xb93;eip=0x00398f; 	X(MOV(skybox_grd_color, ax));	// 25951 mov     skybox_grd_color, ax ;~ 0B93:398F
cs=0xb93;eip=0x003992; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C8))));	// 25952 mov     ax, [bx+0C8h] ;~ 0B93:3992
cs=0xb93;eip=0x003996; 	X(MOV(skybox_wat_color, ax));	// 25953 mov     skybox_wat_color, ax ;~ 0B93:3996
cs=0xb93;eip=0x003999; 	T(MOV(ax, dialog_fnt_colour));	// 25954 mov     ax, dialog_fnt_colour ;~ 0B93:3999
cs=0xb93;eip=0x00399c; 	X(MOV(meter_needle_color, ax));	// 25955 mov     meter_needle_color, ax ;~ 0B93:399C
loc_1d8af:
	// 5966 
cs=0xb93;eip=0x00399f; 	X(POP(si));	// 25958 pop     si ;~ 0B93:399F
cs=0xb93;eip=0x0039a0; 	T(MOV(sp, bp));	// 25959 mov     sp, bp ;~ 0B93:39A0
cs=0xb93;eip=0x0039a2; 	X(POP(bp));	// 25960 pop     bp ;~ 0B93:39A2
cs=0xb93;eip=0x0039a3; 	J(RETF(0));	// 25961 retf ;~ 0B93:39A3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kload_skybox: 	goto load_skybox;
        case m2c::kloc_1d7b6: 	goto loc_1d7b6;
        case m2c::kloc_1d7c8: 	goto loc_1d7c8;
        case m2c::kloc_1d846: 	goto loc_1d846;
        case m2c::kloc_1d852: 	goto loc_1d852;
        case m2c::kloc_1d85e: 	goto loc_1d85e;
        case m2c::kloc_1d872: 	goto loc_1d872;
        case m2c::kloc_1d87e: 	goto loc_1d87e;
        case m2c::kloc_1d88a: 	goto loc_1d88a;
        case m2c::kloc_1d88e: 	goto loc_1d88e;
        case m2c::kloc_1d8af: 	goto loc_1d8af;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool unload_skybox(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    unload_skybox:
    _begin:
cs=0xb93;eip=0x0039a4; 	T(CMP(byte_3b8f6, 0));	// 25970 cmp     byte_3B8F6, 0 ;~ 0B93:39A4
cs=0xb93;eip=0x0039a9; 	J(JZ(loc_1d8cb));	// 25971 jz      short loc_1D8CB ;~ 0B93:39A9
cs=0xb93;eip=0x0039ab; 	X(PUSH(skybox_res_seg));	// 25972 push    skybox_res_seg ;~ 0B93:39AB
cs=0xb93;eip=0x0039af; 	X(PUSH(skybox_res_ofs));	// 25973 push    skybox_res_ofs ;~ 0B93:39AF
cs=0xb93;eip=0x0039b3; 	J(CALLF(mmgr_free,0));	// 25974 call    mmgr_free ;~ 0B93:39B3
cs=0xb93;eip=0x0039b8; 	T(ADD(sp, 4));	// 25975 add     sp, 4 ;~ 0B93:39B8
loc_1d8cb:
	// 5967 
cs=0xb93;eip=0x0039bb; 	X(MOV(byte_3b8f6, 0));	// 25978 mov     byte_3B8F6, 0 ;~ 0B93:39BB
cs=0xb93;eip=0x0039c0; 	J(RETF(0));	// 25979 retf ;~ 0B93:39C0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1d8cb: 	goto loc_1d8cb;
        case m2c::kunload_skybox: 	goto unload_skybox;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool load_sdgame2_shapes(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    load_sdgame2_shapes:
    _begin:
cs=0xb93;eip=0x0039c2; 	X(PUSH(bp));	// 25990 push    bp ;~ 0B93:39C2
cs=0xb93;eip=0x0039c3; 	T(MOV(bp, sp));	// 25991 mov     bp, sp ;~ 0B93:39C3
cs=0xb93;eip=0x0039c5; 	T(SUB(sp, 2));	// 25992 sub     sp, 2 ;~ 0B93:39C5
cs=0xb93;eip=0x0039c8; 	X(PUSH(di));	// 25993 push    di ;~ 0B93:39C8
cs=0xb93;eip=0x0039c9; 	X(PUSH(si));	// 25994 push    si              ; char * ;~ 0B93:39C9
cs=0xb93;eip=0x0039ca; 	T(MOV(ax, offset(dseg,asdgame2)));	// 25995 mov     ax, offset aSdgame2 ; "sdgame2" ;~ 0B93:39CA
cs=0xb93;eip=0x0039cd; 	X(PUSH(ax));	// 25996 push    ax              ; char * ;~ 0B93:39CD
cs=0xb93;eip=0x0039ce; 	T(MOV(ax, 8));	// 25997 mov     ax, 8 ;~ 0B93:39CE
cs=0xb93;eip=0x0039d1; 	X(PUSH(ax));	// 25998 push    ax              ; int ;~ 0B93:39D1
cs=0xb93;eip=0x0039d2; 	J(CALLF(file_load_resource,0));	// 25999 call    file_load_resource ;~ 0B93:39D2
cs=0xb93;eip=0x0039d7; 	T(ADD(sp, 4));	// 26000 add     sp, 4 ;~ 0B93:39D7
cs=0xb93;eip=0x0039da; 	X(MOV(sdgame2ptr, ax));	// 26001 mov     sdgame2ptr, ax ;~ 0B93:39DA
cs=0xb93;eip=0x0039dd; 	X(MOV(word_463da, dx));	// 26002 mov     word_463DA, dx ;~ 0B93:39DD
cs=0xb93;eip=0x0039e1; 	T(MOV(ax, offset(dseg,sdgame2shapes)));	// 26003 mov     ax, offset sdgame2shapes ;~ 0B93:39E1
cs=0xb93;eip=0x0039e4; 	X(PUSH(ax));	// 26004 push    ax ;~ 0B93:39E4
cs=0xb93;eip=0x0039e5; 	T(MOV(ax, offset(dseg,aex01ex02ex03leftrigh)));	// 26005 mov     ax, offset aEx01ex02ex03leftrigh ; "ex01ex02ex03leftrigh" ;~ 0B93:39E5
cs=0xb93;eip=0x0039e8; 	X(PUSH(ax));	// 26006 push    ax ;~ 0B93:39E8
cs=0xb93;eip=0x0039e9; 	X(PUSH(dx));	// 26007 push    dx ;~ 0B93:39E9
cs=0xb93;eip=0x0039ea; 	X(PUSH(sdgame2ptr));	// 26008 push    sdgame2ptr ;~ 0B93:39EA
cs=0xb93;eip=0x0039ee; 	J(CALLF(locate_many_resources,0));	// 26009 call    locate_many_resources ;~ 0B93:39EE
cs=0xb93;eip=0x0039f3; 	T(ADD(sp, 8));	// 26010 add     sp, 8 ;~ 0B93:39F3
cs=0xb93;eip=0x0039f6; 	T(SUB(si, si));	// 26011 sub     si, si ;~ 0B93:39F6
loc_1d908:
	// 5968 
cs=0xb93;eip=0x0039f8; 	T(MOV(bx, si));	// 26014 mov     bx, si ;~ 0B93:39F8
cs=0xb93;eip=0x0039fa; 	T(SHL(bx, 1));	// 26015 shl     bx, 1 ;~ 0B93:39FA
cs=0xb93;eip=0x0039fc; 	T(MOV(di, si));	// 26016 mov     di, si ;~ 0B93:39FC
cs=0xb93;eip=0x0039fe; 	T(SHL(di, 1));	// 26017 shl     di, 1 ;~ 0B93:39FE
cs=0xb93;eip=0x003a00; 	T(SHL(di, 1));	// 26018 shl     di, 1 ;~ 0B93:3A00
cs=0xb93;eip=0x003a02; 	T(LES(di, *(dd*)(((db*)&sdgame2shapes)+di)));	// 26019 les     di, sdgame2shapes[di] ;~ 0B93:3A02
cs=0xb93;eip=0x003a06; 	T(MOV(ax, *(dw*)(raddr(es,di+0))));	// 26020 mov     ax, es:[di+0] ;~ 0B93:3A06
cs=0xb93;eip=0x003a09; 	X(MOV(*(dw*)(((db*)&sdgame2_widths)+bx), ax));	// 26021 mov     sdgame2_widths[bx], ax ;~ 0B93:3A09
cs=0xb93;eip=0x003a0d; 	T(INC(si));	// 26022 inc     si ;~ 0B93:3A0D
cs=0xb93;eip=0x003a0e; 	T(CMP(si, 3));	// 26023 cmp     si, 3 ;~ 0B93:3A0E
cs=0xb93;eip=0x003a11; 	J(JL(loc_1d908));	// 26024 jl      short loc_1D908 ;~ 0B93:3A11
cs=0xb93;eip=0x003a13; 	X(POP(si));	// 26025 pop     si ;~ 0B93:3A13
cs=0xb93;eip=0x003a14; 	X(POP(di));	// 26026 pop     di ;~ 0B93:3A14
cs=0xb93;eip=0x003a15; 	T(MOV(sp, bp));	// 26027 mov     sp, bp ;~ 0B93:3A15
cs=0xb93;eip=0x003a17; 	X(POP(bp));	// 26028 pop     bp ;~ 0B93:3A17
cs=0xb93;eip=0x003a18; 	J(RETF(0));	// 26029 retf ;~ 0B93:3A18

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kload_sdgame2_shapes: 	goto load_sdgame2_shapes;
        case m2c::kloc_1d908: 	goto loc_1d908;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool free_sdgame2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    free_sdgame2:
    _begin:
cs=0xb93;eip=0x003a1a; 	X(PUSH(word_463da));	// 26039 push    word_463DA ;~ 0B93:3A1A
cs=0xb93;eip=0x003a1e; 	X(PUSH(sdgame2ptr));	// 26040 push    sdgame2ptr ;~ 0B93:3A1E
cs=0xb93;eip=0x003a22; 	J(CALLF(mmgr_free,0));	// 26041 call    mmgr_free ;~ 0B93:3A22
cs=0xb93;eip=0x003a27; 	T(ADD(sp, 4));	// 26042 add     sp, 4 ;~ 0B93:3A27
cs=0xb93;eip=0x003a2a; 	J(RETF(0));	// 26043 retf ;~ 0B93:3A2A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfree_sdgame2: 	goto free_sdgame2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool setup_intro(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    setup_intro:
    _begin:
#undef var_5d4
#define var_5d4 -0x5D4
	// 26055 var_5D4         = word ptr -5D4h ;~ 0B93:3A2C
#undef var_5d2
#define var_5d2 -0x5D2
	// 26056 var_5D2         = word ptr -5D2h ;~ 0B93:3A2C
#undef var_5d0
#define var_5d0 -0x5D0
	// 26057 var_5D0         = byte ptr -5D0h ;~ 0B93:3A2C
#undef var_440
#define var_440 -0x440
	// 26058 var_440         = word ptr -440h ;~ 0B93:3A2C
#undef var_43e
#define var_43e -0x43E
	// 26059 var_43E         = byte ptr -43Eh ;~ 0B93:3A2C
#undef var_2ae
#define var_2ae -0x2AE
	// 26060 var_2AE         = word ptr -2AEh ;~ 0B93:3A2C
#undef var_2ac
#define var_2ac -0x2AC
	// 26061 var_2AC         = word ptr -2ACh ;~ 0B93:3A2C
#undef var_2aa
#define var_2aa -0x2AA
	// 26062 var_2AA         = word ptr -2AAh ;~ 0B93:3A2C
#undef var_2a8
#define var_2a8 -0x2A8
	// 26063 var_2A8         = word ptr -2A8h ;~ 0B93:3A2C
#undef var_2a6
#define var_2a6 -0x2A6
	// 26064 var_2A6         = word ptr -2A6h ;~ 0B93:3A2C
#undef var_2a4
#define var_2a4 -0x2A4
	// 26065 var_2A4         = word ptr -2A4h ;~ 0B93:3A2C
#undef var_2a2
#define var_2a2 -0x2A2
	// 26066 var_2A2         = byte ptr -2A2h ;~ 0B93:3A2C
#undef var_2a0
#define var_2a0 -0x2A0
	// 26067 var_2A0         = word ptr -2A0h ;~ 0B93:3A2C
#undef var_29e
#define var_29e -0x29E
	// 26068 var_29E         = word ptr -29Eh ;~ 0B93:3A2C
#undef var_29c
#define var_29c -0x29C
	// 26069 var_29C         = word ptr -29Ch ;~ 0B93:3A2C
#undef var_29a
#define var_29a -0x29A
	// 26070 var_29A         = word ptr -29Ah ;~ 0B93:3A2C
#undef var_298
#define var_298 -0x298
	// 26071 var_298         = word ptr -298h ;~ 0B93:3A2C
#undef var_296
#define var_296 -0x296
	// 26072 var_296         = word ptr -296h ;~ 0B93:3A2C
#undef var_42
#define var_42 -0x42
	// 26073 var_42          = word ptr -42h ;~ 0B93:3A2C
#undef var_40
#define var_40 -0x40
	// 26074 var_40          = word ptr -40h ;~ 0B93:3A2C
#undef var_3e
#define var_3e -0x3E
	// 26075 var_3E          = word ptr -3Eh ;~ 0B93:3A2C
#undef var_3c
#define var_3c -0x3C
	// 26076 var_3C          = word ptr -3Ch ;~ 0B93:3A2C
#undef var_3a
#define var_3a -0x3A
	// 26077 var_3A          = word ptr -3Ah ;~ 0B93:3A2C
#undef var_38
#define var_38 -0x38
	// 26078 var_38          = byte ptr -38h ;~ 0B93:3A2C
#undef var_36
#define var_36 -0x36
	// 26079 var_36          = word ptr -36h ;~ 0B93:3A2C
#undef var_34
#define var_34 -0x34
	// 26080 var_34          = byte ptr -34h ;~ 0B93:3A2C
#undef var_2c
#define var_2c -0x2C
	// 26081 var_2C          = word ptr -2Ch ;~ 0B93:3A2C
#undef var_2a
#define var_2a -0x2A
	// 26082 var_2A          = word ptr -2Ah ;~ 0B93:3A2C
#undef var_28
#define var_28 -0x28
	// 26083 var_28          = word ptr -28h ;~ 0B93:3A2C
#undef var_26
#define var_26 -0x26
	// 26084 var_26          = word ptr -26h ;~ 0B93:3A2C
#undef var_24
#define var_24 -0x24
	// 26085 var_24          = word ptr -24h ;~ 0B93:3A2C
#undef var_22
#define var_22 -0x22
	// 26086 var_22          = word ptr -22h ;~ 0B93:3A2C
#undef var_20
#define var_20 -0x20
	// 26087 var_20          = word ptr -20h ;~ 0B93:3A2C
#undef var_1e
#define var_1e -0x1E
	// 26088 var_1E          = word ptr -1Eh ;~ 0B93:3A2C
#undef var_1c
#define var_1c -0x1C
	// 26089 var_1C          = word ptr -1Ch ;~ 0B93:3A2C
#undef var_1a
#define var_1a -0x1A
	// 26090 var_1A          = word ptr -1Ah ;~ 0B93:3A2C
#undef var_18
#define var_18 -0x18
	// 26091 var_18          = word ptr -18h ;~ 0B93:3A2C
#undef var_16
#define var_16 -0x16
	// 26092 var_16          = byte ptr -16h ;~ 0B93:3A2C
#undef var_e
#define var_e -0x0E
	// 26093 var_E           = word ptr -0Eh ;~ 0B93:3A2C
#undef var_c
#define var_c -0x0C
	// 26094 var_C           = word ptr -0Ch ;~ 0B93:3A2C
#undef var_a
#define var_a -0x0A
	// 26095 var_A           = word ptr -0Ah ;~ 0B93:3A2C
#undef var_8
#define var_8 -8
	// 26096 var_8           = word ptr -8 ;~ 0B93:3A2C
#undef var_6
#define var_6 -6
	// 26097 var_6           = word ptr -6 ;~ 0B93:3A2C
#undef var_4
#define var_4 -4
	// 26098 var_4           = word ptr -4 ;~ 0B93:3A2C
#undef var_2
#define var_2 -2
	// 26099 var_2           = word ptr -2 ;~ 0B93:3A2C
cs=0xb93;eip=0x003a2c; 	X(PUSH(bp));	// 26101 push    bp ;~ 0B93:3A2C
cs=0xb93;eip=0x003a2d; 	T(MOV(bp, sp));	// 26102 mov     bp, sp ;~ 0B93:3A2D
cs=0xb93;eip=0x003a2f; 	T(SUB(sp, 0x5D4));	// 26103 sub     sp, 5D4h ;~ 0B93:3A2F
cs=0xb93;eip=0x003a33; 	X(PUSH(di));	// 26104 push    di ;~ 0B93:3A33
cs=0xb93;eip=0x003a34; 	X(PUSH(si));	// 26105 push    si ;~ 0B93:3A34
cs=0xb93;eip=0x003a35; 	X(MOV(*(raddr(ss,bp+var_38)), 0));	// 26106 mov     [bp+var_38], 0 ;~ 0B93:3A35
cs=0xb93;eip=0x003a39; 	T(MOV(ax, offset(dseg,atitle)));	// 26107 mov     ax, offset aTitle ; "title" ;~ 0B93:3A39
cs=0xb93;eip=0x003a3c; 	X(PUSH(ax));	// 26108 push    ax ;~ 0B93:3A3C
cs=0xb93;eip=0x003a3d; 	J(CALLF(file_load_3dres,0));	// 26109 call    file_load_3dres ;~ 0B93:3A3D
cs=0xb93;eip=0x003a42; 	T(ADD(sp, 2));	// 26110 add     sp, 2 ;~ 0B93:3A42
cs=0xb93;eip=0x003a45; 	X(MOV(*(dw*)(raddr(ss,bp+var_2ae)), ax));	// 26111 mov     [bp+var_2AE], ax ;~ 0B93:3A45
cs=0xb93;eip=0x003a49; 	X(MOV(*(dw*)(raddr(ss,bp+var_2ac)), dx));	// 26112 mov     [bp+var_2AC], dx ;~ 0B93:3A49
cs=0xb93;eip=0x003a4d; 	T(ax = bp+var_22);	// 26113 lea     ax, [bp+var_22] ;~ 0B93:3A4D
cs=0xb93;eip=0x003a50; 	X(PUSH(ax));	// 26114 push    ax ;~ 0B93:3A50
cs=0xb93;eip=0x003a51; 	T(MOV(ax, offset(dseg,alogolog2brav)));	// 26115 mov     ax, offset aLogolog2brav ; "logolog2brav" ;~ 0B93:3A51
cs=0xb93;eip=0x003a54; 	X(PUSH(ax));	// 26116 push    ax ;~ 0B93:3A54
cs=0xb93;eip=0x003a55; 	X(PUSH(dx));	// 26117 push    dx ;~ 0B93:3A55
cs=0xb93;eip=0x003a56; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2ae))));	// 26118 push    [bp+var_2AE] ;~ 0B93:3A56
cs=0xb93;eip=0x003a5a; 	J(CALLF(locate_many_resources,0));	// 26119 call    locate_many_resources ;~ 0B93:3A5A
cs=0xb93;eip=0x003a5f; 	T(ADD(sp, 8));	// 26120 add     sp, 8 ;~ 0B93:3A5F
cs=0xb93;eip=0x003a62; 	T(MOV(ax, offset(dseg,logoshape)));	// 26121 mov     ax, offset logoshape ;~ 0B93:3A62
cs=0xb93;eip=0x003a65; 	X(PUSH(ax));	// 26122 push    ax ;~ 0B93:3A65
cs=0xb93;eip=0x003a66; 	X(PUSH(*(dw*)(raddr(ss,bp+var_20))));	// 26123 push    [bp+var_20] ;~ 0B93:3A66
cs=0xb93;eip=0x003a69; 	X(PUSH(*(dw*)(raddr(ss,bp+var_22))));	// 26124 push    [bp+var_22] ;~ 0B93:3A69
cs=0xb93;eip=0x003a6c; 	J(CALLF(shape3d_init_shape,0));	// 26125 call    shape3d_init_shape ;~ 0B93:3A6C
cs=0xb93;eip=0x003a71; 	T(ADD(sp, 6));	// 26126 add     sp, 6 ;~ 0B93:3A71
cs=0xb93;eip=0x003a74; 	T(MOV(ax, offset(dseg,logo2shape)));	// 26127 mov     ax, offset logo2shape ;~ 0B93:3A74
cs=0xb93;eip=0x003a77; 	X(PUSH(ax));	// 26128 push    ax ;~ 0B93:3A77
cs=0xb93;eip=0x003a78; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 26129 push    [bp+var_1C] ;~ 0B93:3A78
cs=0xb93;eip=0x003a7b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1e))));	// 26130 push    [bp+var_1E] ;~ 0B93:3A7B
cs=0xb93;eip=0x003a7e; 	J(CALLF(shape3d_init_shape,0));	// 26131 call    shape3d_init_shape ;~ 0B93:3A7E
cs=0xb93;eip=0x003a83; 	T(ADD(sp, 6));	// 26132 add     sp, 6 ;~ 0B93:3A83
cs=0xb93;eip=0x003a86; 	T(MOV(ax, offset(dseg,bravshape)));	// 26133 mov     ax, offset bravshape ;~ 0B93:3A86
cs=0xb93;eip=0x003a89; 	X(PUSH(ax));	// 26134 push    ax ;~ 0B93:3A89
cs=0xb93;eip=0x003a8a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 26135 push    [bp+var_18] ;~ 0B93:3A8A
cs=0xb93;eip=0x003a8d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 26136 push    [bp+var_1A] ;~ 0B93:3A8D
cs=0xb93;eip=0x003a90; 	J(CALLF(shape3d_init_shape,0));	// 26137 call    shape3d_init_shape ;~ 0B93:3A90
cs=0xb93;eip=0x003a95; 	T(ADD(sp, 6));	// 26138 add     sp, 6 ;~ 0B93:3A95
cs=0xb93;eip=0x003a98; 	T(CMP(video_flag5_is0, 0));	// 26139 cmp     video_flag5_is0, 0 ;~ 0B93:3A98
cs=0xb93;eip=0x003a9d; 	J(JNZ(loc_1d9ca));	// 26140 jnz     short loc_1D9CA ;~ 0B93:3A9D
cs=0xb93;eip=0x003a9f; 	T(MOV(ax, 0x0F));	// 26141 mov     ax, 0Fh ;~ 0B93:3A9F
cs=0xb93;eip=0x003aa2; 	X(PUSH(ax));	// 26142 push    ax ;~ 0B93:3AA2
cs=0xb93;eip=0x003aa3; 	T(MOV(ax, 0x0C8));	// 26143 mov     ax, 0C8h ;~ 0B93:3AA3
cs=0xb93;eip=0x003aa6; 	X(PUSH(ax));	// 26144 push    ax ;~ 0B93:3AA6
cs=0xb93;eip=0x003aa7; 	T(MOV(ax, 0x140));	// 26145 mov     ax, 140h ;~ 0B93:3AA7
cs=0xb93;eip=0x003aaa; 	X(PUSH(ax));	// 26146 push    ax ;~ 0B93:3AAA
cs=0xb93;eip=0x003aab; 	J(CALLF(sprite_make_wnd,0));	// 26147 call    sprite_make_wnd ;~ 0B93:3AAB
cs=0xb93;eip=0x003ab0; 	T(ADD(sp, 6));	// 26148 add     sp, 6 ;~ 0B93:3AB0
cs=0xb93;eip=0x003ab3; 	X(MOV(*(dw*)(((db*)&wndsprite)), ax));	// 26149 mov     word ptr wndsprite, ax ;~ 0B93:3AB3
cs=0xb93;eip=0x003ab6; 	X(MOV(*(dw*)(((db*)&wndsprite)+2), dx));	// 26150 mov     word ptr wndsprite+2, dx ;~ 0B93:3AB6
loc_1d9ca:
	// 5969 
cs=0xb93;eip=0x003aba; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), 0));	// 26153 mov     [bp+var_42], 0 ;~ 0B93:3ABA
loc_1d9cf:
	// 5970 
cs=0xb93;eip=0x003abf; 	J(CALLF(get_kevinrandom,0));	// 26156 call    get_kevinrandom ;~ 0B93:3ABF
cs=0xb93;eip=0x003ac4; 	T(MOV(cl, 7));	// 26157 mov     cl, 7 ;~ 0B93:3AC4
cs=0xb93;eip=0x003ac6; 	T(SHL(ax, cl));	// 26158 shl     ax, cl ;~ 0B93:3AC6
cs=0xb93;eip=0x003ac8; 	T(SUB(ax, 0x4000));	// 26159 sub     ax, 4000h ;~ 0B93:3AC8
cs=0xb93;eip=0x003acb; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_42))));	// 26160 mov     si, [bp+var_42] ;~ 0B93:3ACB
cs=0xb93;eip=0x003ace; 	T(MOV(cx, si));	// 26161 mov     cx, si ;~ 0B93:3ACE
cs=0xb93;eip=0x003ad0; 	T(SHL(si, 1));	// 26162 shl     si, 1 ;~ 0B93:3AD0
cs=0xb93;eip=0x003ad2; 	T(ADD(si, cx));	// 26163 add     si, cx ;~ 0B93:3AD2
cs=0xb93;eip=0x003ad4; 	T(SHL(si, 1));	// 26164 shl     si, 1 ;~ 0B93:3AD4
cs=0xb93;eip=0x003ad6; 	X(MOV(*(dw*)(raddr(ss,bp+si+var_29a)), ax));	// 26165 mov     [bp+si+var_29A], ax ;~ 0B93:3AD6
cs=0xb93;eip=0x003ada; 	J(CALLF(get_kevinrandom,0));	// 26166 call    get_kevinrandom ;~ 0B93:3ADA
cs=0xb93;eip=0x003adf; 	T(MOV(cl, 7));	// 26167 mov     cl, 7 ;~ 0B93:3ADF
cs=0xb93;eip=0x003ae1; 	T(SHL(ax, cl));	// 26168 shl     ax, cl ;~ 0B93:3AE1
cs=0xb93;eip=0x003ae3; 	T(SUB(ax, 0x1388));	// 26169 sub     ax, 1388h ;~ 0B93:3AE3
cs=0xb93;eip=0x003ae6; 	T(NEG(ax));	// 26170 neg     ax ;~ 0B93:3AE6
cs=0xb93;eip=0x003ae8; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_42))));	// 26171 mov     si, [bp+var_42] ;~ 0B93:3AE8
cs=0xb93;eip=0x003aeb; 	T(MOV(cx, si));	// 26172 mov     cx, si ;~ 0B93:3AEB
cs=0xb93;eip=0x003aed; 	T(SHL(si, 1));	// 26173 shl     si, 1 ;~ 0B93:3AED
cs=0xb93;eip=0x003aef; 	T(ADD(si, cx));	// 26174 add     si, cx ;~ 0B93:3AEF
cs=0xb93;eip=0x003af1; 	T(SHL(si, 1));	// 26175 shl     si, 1 ;~ 0B93:3AF1
cs=0xb93;eip=0x003af3; 	X(MOV(*(dw*)(raddr(ss,bp+si+var_298)), ax));	// 26176 mov     [bp+si+var_298], ax ;~ 0B93:3AF3
cs=0xb93;eip=0x003af7; 	J(CALLF(get_kevinrandom,0));	// 26177 call    get_kevinrandom ;~ 0B93:3AF7
cs=0xb93;eip=0x003afc; 	T(MOV(cl, 7));	// 26178 mov     cl, 7 ;~ 0B93:3AFC
cs=0xb93;eip=0x003afe; 	T(SHL(ax, cl));	// 26179 shl     ax, cl ;~ 0B93:3AFE
cs=0xb93;eip=0x003b00; 	T(SUB(ax, 0x4000));	// 26180 sub     ax, 4000h ;~ 0B93:3B00
cs=0xb93;eip=0x003b03; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_42))));	// 26181 mov     si, [bp+var_42] ;~ 0B93:3B03
cs=0xb93;eip=0x003b06; 	T(MOV(cx, si));	// 26182 mov     cx, si ;~ 0B93:3B06
cs=0xb93;eip=0x003b08; 	T(SHL(si, 1));	// 26183 shl     si, 1 ;~ 0B93:3B08
cs=0xb93;eip=0x003b0a; 	T(ADD(si, cx));	// 26184 add     si, cx ;~ 0B93:3B0A
cs=0xb93;eip=0x003b0c; 	T(SHL(si, 1));	// 26185 shl     si, 1 ;~ 0B93:3B0C
cs=0xb93;eip=0x003b0e; 	X(MOV(*(dw*)(raddr(ss,bp+si+var_296)), ax));	// 26186 mov     [bp+si+var_296], ax ;~ 0B93:3B0E
cs=0xb93;eip=0x003b12; 	X(INC(*(dw*)(raddr(ss,bp+var_42))));	// 26187 inc     [bp+var_42] ;~ 0B93:3B12
cs=0xb93;eip=0x003b15; 	T(CMP(*(dw*)(raddr(ss,bp+var_42)), 0x64));	// 26188 cmp     [bp+var_42], 64h ; 'd' ;~ 0B93:3B15
cs=0xb93;eip=0x003b19; 	J(JL(loc_1d9cf));	// 26189 jl      short loc_1D9CF ;~ 0B93:3B19
cs=0xb93;eip=0x003b1b; 	T(MOV(ax, 0x0C8));	// 26190 mov     ax, 0C8h ; 'È' ;~ 0B93:3B1B
cs=0xb93;eip=0x003b1e; 	X(PUSH(ax));	// 26191 push    ax ;~ 0B93:3B1E
cs=0xb93;eip=0x003b1f; 	T(MOV(ax, 0x140));	// 26192 mov     ax, 140h ;~ 0B93:3B1F
cs=0xb93;eip=0x003b22; 	X(PUSH(ax));	// 26193 push    ax ;~ 0B93:3B22
cs=0xb93;eip=0x003b23; 	T(MOV(ax, 0x28));	// 26194 mov     ax, 28h ; '(' ;~ 0B93:3B23
cs=0xb93;eip=0x003b26; 	X(PUSH(ax));	// 26195 push    ax ;~ 0B93:3B26
cs=0xb93;eip=0x003b27; 	X(PUSH(ax));	// 26196 push    ax ;~ 0B93:3B27
cs=0xb93;eip=0x003b28; 	J(CALLF(set_projection,0));	// 26197 call    set_projection ;~ 0B93:3B28
cs=0xb93;eip=0x003b2d; 	T(ADD(sp, 8));	// 26198 add     sp, 8 ;~ 0B93:3B2D
cs=0xb93;eip=0x003b30; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), 0x400));	// 26199 mov     [bp+var_3E], 400h ;~ 0B93:3B30
cs=0xb93;eip=0x003b35; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), 0x400));	// 26200 mov     [bp+var_3A], 400h ;~ 0B93:3B35
cs=0xb93;eip=0x003b3a; 	X(MOV(*(dw*)(raddr(ss,bp+var_3c)), 0x12C));	// 26201 mov     [bp+var_3C], 12Ch ;~ 0B93:3B3A
cs=0xb93;eip=0x003b3f; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 26202 mov     [bp+var_E], 0 ;~ 0B93:3B3F
cs=0xb93;eip=0x003b44; 	X(MOV(*(dw*)(raddr(ss,bp+var_5d4)), 0));	// 26203 mov     [bp+var_5D4], 0 ;~ 0B93:3B44
cs=0xb93;eip=0x003b4a; 	T(MOV(ax, offset(dseg,acarcoun_0)));	// 26204 mov     ax, offset aCarcoun_0 ; "carcoun" ;~ 0B93:3B4A
cs=0xb93;eip=0x003b4d; 	X(PUSH(ax));	// 26205 push    ax ;~ 0B93:3B4D
cs=0xb93;eip=0x003b4e; 	J(CALLF(file_load_resfile,0));	// 26206 call    file_load_resfile ;~ 0B93:3B4E
cs=0xb93;eip=0x003b53; 	T(ADD(sp, 2));	// 26207 add     sp, 2 ;~ 0B93:3B53
cs=0xb93;eip=0x003b56; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 26208 mov     [bp+var_A], ax ;~ 0B93:3B56
cs=0xb93;eip=0x003b59; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 26209 mov     [bp+var_8], dx ;~ 0B93:3B59
cs=0xb93;eip=0x003b5c; 	T(MOV(ax, 1));	// 26210 mov     ax, 1 ;~ 0B93:3B5C
cs=0xb93;eip=0x003b5f; 	X(PUSH(ax));	// 26211 push    ax ;~ 0B93:3B5F
cs=0xb93;eip=0x003b60; 	X(PUSH(dx));	// 26212 push    dx ;~ 0B93:3B60
cs=0xb93;eip=0x003b61; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 26213 push    [bp+var_A] ;~ 0B93:3B61
cs=0xb93;eip=0x003b64; 	J(CALLF(setup_aero_trackdata,0));	// 26214 call    setup_aero_trackdata ;~ 0B93:3B64
cs=0xb93;eip=0x003b69; 	T(ADD(sp, 6));	// 26215 add     sp, 6 ;~ 0B93:3B69
cs=0xb93;eip=0x003b6c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 26216 push    [bp+var_8] ;~ 0B93:3B6C
cs=0xb93;eip=0x003b6f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 26217 push    [bp+var_A] ;~ 0B93:3B6F
cs=0xb93;eip=0x003b72; 	J(CALLF(unload_resource,0));	// 26218 call    unload_resource ;~ 0B93:3B72
cs=0xb93;eip=0x003b77; 	T(ADD(sp, 4));	// 26219 add     sp, 4 ;~ 0B93:3B77
cs=0xb93;eip=0x003b7a; 	J(CALLF(init_plantrak,0));	// 26220 call    init_plantrak ;~ 0B93:3B7A
cs=0xb93;eip=0x003b7f; 	J(CALLF(timer_get_delta,0));	// 26221 call    timer_get_delta ;~ 0B93:3B7F
cs=0xb93;eip=0x003b84; 	X(MOV(*(dw*)(raddr(ss,bp+var_2aa)), 0));	// 26222 mov     [bp+var_2AA], 0 ;~ 0B93:3B84
cs=0xb93;eip=0x003b8a; 	X(MOV(*(dw*)(raddr(ss,bp+var_440)), 0));	// 26223 mov     [bp+var_440], 0 ;~ 0B93:3B8A
cs=0xb93;eip=0x003b90; 	T(MOV(ax, timertestflag));	// 26224 mov     ax, timertestflag ;~ 0B93:3B90
cs=0xb93;eip=0x003b93; 	X(MOV(timertestflag_copy, ax));	// 26225 mov     timertestflag_copy, ax ;~ 0B93:3B93
cs=0xb93;eip=0x003b96; 	X(MOV(rect_unk, 0));	// 26226 mov     rect_unk, 0 ;~ 0B93:3B96
cs=0xb93;eip=0x003b9c; 	X(MOV(word_44a06, 0x140));	// 26227 mov     word_44A06, 140h ;~ 0B93:3B9C
cs=0xb93;eip=0x003ba2; 	X(MOV(word_44a08, 0));	// 26228 mov     word_44A08, 0 ;~ 0B93:3BA2
cs=0xb93;eip=0x003ba8; 	X(MOV(word_44a0a, 0x0C8));	// 26229 mov     word_44A0A, 0C8h ; 'È' ;~ 0B93:3BA8
cs=0xb93;eip=0x003bae; 	T(MOV(di, offset(dseg,rect_unk2)));	// 26230 mov     di, offset rect_unk2 ;~ 0B93:3BAE
cs=0xb93;eip=0x003bb1; 	T(MOV(si, offset(dseg,rect_unk)));	// 26231 mov     si, offset rect_unk ;~ 0B93:3BB1
cs=0xb93;eip=0x003bb4; 	X(PUSH(ds));	// 26232 push    ds ;~ 0B93:3BB4
cs=0xb93;eip=0x003bb5; 	X(POP(es));	// 26233 pop     es ;~ 0B93:3BB5
cs=0xb93;eip=0x003bb6; 	X(MOVSW);	// 26235 movsw ;~ 0B93:3BB6
cs=0xb93;eip=0x003bb7; 	X(MOVSW);	// 26236 movsw ;~ 0B93:3BB7
cs=0xb93;eip=0x003bb8; 	X(MOVSW);	// 26237 movsw ;~ 0B93:3BB8
cs=0xb93;eip=0x003bb9; 	X(MOVSW);	// 26238 movsw ;~ 0B93:3BB9
cs=0xb93;eip=0x003bba; 	T(MOV(di, offset(dseg,rect_unk3)));	// 26239 mov     di, offset rect_unk3 ;~ 0B93:3BBA
cs=0xb93;eip=0x003bbd; 	T(MOV(si, offset(dseg,rect_unk)));	// 26240 mov     si, offset rect_unk ;~ 0B93:3BBD
cs=0xb93;eip=0x003bc0; 	X(MOVSW);	// 26241 movsw ;~ 0B93:3BC0
cs=0xb93;eip=0x003bc1; 	X(MOVSW);	// 26242 movsw ;~ 0B93:3BC1
cs=0xb93;eip=0x003bc2; 	X(MOVSW);	// 26243 movsw ;~ 0B93:3BC2
cs=0xb93;eip=0x003bc3; 	X(MOVSW);	// 26244 movsw ;~ 0B93:3BC3
cs=0xb93;eip=0x003bc4; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), 0));	// 26245 mov     [bp+var_36], 0 ;~ 0B93:3BC4
cs=0xb93;eip=0x003bc9; 	X(MOV(*(raddr(ss,bp+var_2a2)), 1));	// 26246 mov     [bp+var_2A2], 1 ;~ 0B93:3BC9
loc_1dade:
	// 5971 
cs=0xb93;eip=0x003bce; 	J(CALLF(timer_get_delta,0));	// 26249 call    timer_get_delta ;~ 0B93:3BCE
cs=0xb93;eip=0x003bd3; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 26250 mov     [bp+var_40], ax ;~ 0B93:3BD3
cs=0xb93;eip=0x003bd6; 	X(ADD(word_44dcc, ax));	// 26251 add     word_44DCC, ax ;~ 0B93:3BD6
cs=0xb93;eip=0x003bda; 	J(JMP(loc_1db8a));	// 26252 jmp     loc_1DB8A ;~ 0B93:3BDA
loc_1daee:
	// 5972 
cs=0xb93;eip=0x003bde; 	T(MOV(ax, word_4499c));	// 26257 mov     ax, word_4499C ;~ 0B93:3BDE
cs=0xb93;eip=0x003be1; 	X(SUB(word_44dcc, ax));	// 26258 sub     word_44DCC, ax ;~ 0B93:3BE1
cs=0xb93;eip=0x003be5; 	J(CALLF(do_opponent_op,0));	// 26259 call    do_opponent_op ;~ 0B93:3BE5
cs=0xb93;eip=0x003bea; 	X(MOV(*(raddr(ss,bp+var_2a2)), 1));	// 26260 mov     [bp+var_2A2], 1 ;~ 0B93:3BEA
cs=0xb93;eip=0x003bef; 	T(MOV(ax, framespersec));	// 26261 mov     ax, framespersec ;~ 0B93:3BEF
cs=0xb93;eip=0x003bf2; 	T(MOV(cx, ax));	// 26262 mov     cx, ax ;~ 0B93:3BF2
cs=0xb93;eip=0x003bf4; 	T(SHL(ax, 1));	// 26263 shl     ax, 1 ;~ 0B93:3BF4
cs=0xb93;eip=0x003bf6; 	T(SHL(ax, 1));	// 26264 shl     ax, 1 ;~ 0B93:3BF6
cs=0xb93;eip=0x003bf8; 	T(ADD(ax, cx));	// 26265 add     ax, cx ;~ 0B93:3BF8
cs=0xb93;eip=0x003bfa; 	T(SHL(ax, 1));	// 26266 shl     ax, 1 ;~ 0B93:3BFA
cs=0xb93;eip=0x003bfc; 	T(ADD(ax, cx));	// 26267 add     ax, cx ;~ 0B93:3BFC
cs=0xb93;eip=0x003bfe; 	X(INC(*(dw*)(raddr(ss,bp+var_5d4))));	// 26268 inc     [bp+var_5D4] ;~ 0B93:3BFE
cs=0xb93;eip=0x003c02; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_5d4))));	// 26269 cmp     ax, [bp+var_5D4] ;~ 0B93:3C02
cs=0xb93;eip=0x003c06; 	J(JGE(loc_1db8a));	// 26270 jge     short loc_1DB8A ;~ 0B93:3C06
cs=0xb93;eip=0x003c08; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 1));	// 26271 mov     [bp+var_E], 1 ;~ 0B93:3C08
cs=0xb93;eip=0x003c0d; 	X(ADD(*(dw*)(raddr(ss,bp+var_3c)), 0x14));	// 26272 add     [bp+var_3C], 14h ;~ 0B93:3C0D
cs=0xb93;eip=0x003c11; 	X(SUB(*(dw*)(raddr(ss,bp+var_3a)), 5));	// 26273 sub     [bp+var_3A], 5 ;~ 0B93:3C11
cs=0xb93;eip=0x003c15; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3e))));	// 26274 mov     ax, [bp+var_3E] ;~ 0B93:3C15
cs=0xb93;eip=0x003c18; 	T(SUB(ax, 0x400));	// 26275 sub     ax, 400h ;~ 0B93:3C18
cs=0xb93;eip=0x003c1b; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), ax));	// 26276 mov     [bp+var_42], ax ;~ 0B93:3C1B
cs=0xb93;eip=0x003c1e; 	T(OR(ax, ax));	// 26277 or      ax, ax ;~ 0B93:3C1E
cs=0xb93;eip=0x003c20; 	J(JGE(loc_1db38));	// 26278 jge     short loc_1DB38 ;~ 0B93:3C20
cs=0xb93;eip=0x003c22; 	T(NEG(ax));	// 26279 neg     ax ;~ 0B93:3C22
cs=0xb93;eip=0x003c24; 	J(JMP(loc_1db3b));	// 26280 jmp     short loc_1DB3B ;~ 0B93:3C24
loc_1db38:
	// 5973 
cs=0xb93;eip=0x003c28; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_42))));	// 26286 mov     ax, [bp+var_42] ;~ 0B93:3C28
loc_1db3b:
	// 5974 
cs=0xb93;eip=0x003c2b; 	T(CMP(ax, 0x0A));	// 26289 cmp     ax, 0Ah ;~ 0B93:3C2B
cs=0xb93;eip=0x003c2e; 	J(JGE(loc_1db48));	// 26290 jge     short loc_1DB48 ;~ 0B93:3C2E
cs=0xb93;eip=0x003c30; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), 0x400));	// 26291 mov     [bp+var_3E], 400h ;~ 0B93:3C30
cs=0xb93;eip=0x003c35; 	J(JMP(loc_1db5e));	// 26292 jmp     short loc_1DB5E ;~ 0B93:3C35
loc_1db48:
	// 5975 
cs=0xb93;eip=0x003c38; 	T(CMP(*(dw*)(raddr(ss,bp+var_42)), 0));	// 26297 cmp     [bp+var_42], 0 ;~ 0B93:3C38
cs=0xb93;eip=0x003c3c; 	J(JLE(loc_1db54));	// 26298 jle     short loc_1DB54 ;~ 0B93:3C3C
cs=0xb93;eip=0x003c3e; 	X(SUB(*(dw*)(raddr(ss,bp+var_3e)), 0x0A));	// 26299 sub     [bp+var_3E], 0Ah ;~ 0B93:3C3E
cs=0xb93;eip=0x003c42; 	J(JMP(loc_1db5e));	// 26300 jmp     short loc_1DB5E ;~ 0B93:3C42
loc_1db54:
	// 5976 
cs=0xb93;eip=0x003c44; 	T(CMP(*(dw*)(raddr(ss,bp+var_42)), 0));	// 26304 cmp     [bp+var_42], 0 ;~ 0B93:3C44
cs=0xb93;eip=0x003c48; 	J(JGE(loc_1db5e));	// 26305 jge     short loc_1DB5E ;~ 0B93:3C48
cs=0xb93;eip=0x003c4a; 	X(ADD(*(dw*)(raddr(ss,bp+var_3e)), 0x0A));	// 26306 add     [bp+var_3E], 0Ah ;~ 0B93:3C4A
loc_1db5e:
	// 5977 
cs=0xb93;eip=0x003c4e; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0x400));	// 26310 cmp     [bp+var_6], 400h ;~ 0B93:3C4E
cs=0xb93;eip=0x003c53; 	J(JLE(loc_1db6a));	// 26311 jle     short loc_1DB6A ;~ 0B93:3C53
cs=0xb93;eip=0x003c55; 	X(DEC(*(dw*)(raddr(ss,bp+var_6))));	// 26312 dec     [bp+var_6] ;~ 0B93:3C55
cs=0xb93;eip=0x003c58; 	J(JMP(loc_1db74));	// 26313 jmp     short loc_1DB74 ;~ 0B93:3C58
loc_1db6a:
	// 5978 
cs=0xb93;eip=0x003c5a; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0x400));	// 26317 cmp     [bp+var_6], 400h ;~ 0B93:3C5A
cs=0xb93;eip=0x003c5f; 	J(JGE(loc_1db74));	// 26318 jge     short loc_1DB74 ;~ 0B93:3C5F
cs=0xb93;eip=0x003c61; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 26319 inc     [bp+var_6] ;~ 0B93:3C61
loc_1db74:
	// 5979 
cs=0xb93;eip=0x003c64; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x400));	// 26323 cmp     [bp+var_2], 400h ;~ 0B93:3C64
cs=0xb93;eip=0x003c69; 	J(JLE(loc_1db80));	// 26324 jle     short loc_1DB80 ;~ 0B93:3C69
cs=0xb93;eip=0x003c6b; 	X(DEC(*(dw*)(raddr(ss,bp+var_2))));	// 26325 dec     [bp+var_2] ;~ 0B93:3C6B
cs=0xb93;eip=0x003c6e; 	J(JMP(loc_1db8a));	// 26326 jmp     short loc_1DB8A ;~ 0B93:3C6E
loc_1db80:
	// 5980 
cs=0xb93;eip=0x003c70; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x400));	// 26330 cmp     [bp+var_2], 400h ;~ 0B93:3C70
cs=0xb93;eip=0x003c75; 	J(JGE(loc_1db8a));	// 26331 jge     short loc_1DB8A ;~ 0B93:3C75
cs=0xb93;eip=0x003c77; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 26332 inc     [bp+var_2] ;~ 0B93:3C77
loc_1db8a:
	// 5981 
cs=0xb93;eip=0x003c7a; 	T(MOV(ax, word_4499c));	// 26336 mov     ax, word_4499C ;~ 0B93:3C7A
cs=0xb93;eip=0x003c7d; 	T(CMP(word_44dcc, ax));	// 26337 cmp     word_44DCC, ax ;~ 0B93:3C7D
cs=0xb93;eip=0x003c81; 	J(JLE(loc_1db96));	// 26338 jle     short loc_1DB96 ;~ 0B93:3C81
cs=0xb93;eip=0x003c83; 	J(JMP(loc_1daee));	// 26339 jmp     loc_1DAEE ;~ 0B93:3C83
loc_1db96:
	// 5982 
cs=0xb93;eip=0x003c86; 	T(CMP(*(raddr(ss,bp+var_2a2)), 0));	// 26343 cmp     [bp+var_2A2], 0 ;~ 0B93:3C86
cs=0xb93;eip=0x003c8b; 	J(JNZ(loc_1dba0));	// 26344 jnz     short loc_1DBA0 ;~ 0B93:3C8B
cs=0xb93;eip=0x003c8d; 	J(JMP(loc_1de19));	// 26345 jmp     loc_1DE19 ;~ 0B93:3C8D
loc_1dba0:
	// 5983 
cs=0xb93;eip=0x003c90; 	X(MOV(*(raddr(ss,bp+var_2a2)), 0));	// 26349 mov     [bp+var_2A2], 0 ;~ 0B93:3C90
cs=0xb93;eip=0x003c95; 	T(CMP(video_flag5_is0, 0));	// 26350 cmp     video_flag5_is0, 0 ;~ 0B93:3C95
cs=0xb93;eip=0x003c9a; 	J(JZ(loc_1dbb4));	// 26351 jz      short loc_1DBB4 ;~ 0B93:3C9A
cs=0xb93;eip=0x003c9c; 	J(CALLF(setup_mcgawnd2,0));	// 26352 call    setup_mcgawnd2 ;~ 0B93:3C9C
cs=0xb93;eip=0x003ca1; 	J(JMP(loc_1dbb9));	// 26353 jmp     short loc_1DBB9 ;~ 0B93:3CA1
loc_1dbb4:
	// 5984 
cs=0xb93;eip=0x003ca4; 	J(CALLF(sprite_copy_wnd_to_1,0));	// 26358 call    sprite_copy_wnd_to_1 ;~ 0B93:3CA4
loc_1dbb9:
	// 5985 
cs=0xb93;eip=0x003ca9; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), 0x0FFFF));	// 26361 mov     [bp+var_2C], 0FFFFh ;~ 0B93:3CA9
cs=0xb93;eip=0x003cae; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a6)), 1));	// 26362 mov     [bp+var_2A6], 1 ;~ 0B93:3CAE
cs=0xb93;eip=0x003cb4; 	T(MOV(ax, word_446b6));	// 26363 mov     ax, word_446B6 ;~ 0B93:3CB4
cs=0xb93;eip=0x003cb7; 	T(MOV(dx, word_446b8));	// 26364 mov     dx, word_446B8 ;~ 0B93:3CB7
cs=0xb93;eip=0x003cbb; 	T(MOV(cl, 6));	// 26365 mov     cl, 6 ;~ 0B93:3CBB
loc_1dbcd:
	// 5986 
cs=0xb93;eip=0x003cbd; 	T(SAR(dx, 1));	// 26368 sar     dx, 1 ;~ 0B93:3CBD
cs=0xb93;eip=0x003cbf; 	T(RCR(ax, 1));	// 26369 rcr     ax, 1 ;~ 0B93:3CBF
cs=0xb93;eip=0x003cc1; 	T(DEC(cl));	// 26370 dec     cl ;~ 0B93:3CC1
cs=0xb93;eip=0x003cc3; 	J(JNZ(loc_1dbcd));	// 26371 jnz     short loc_1DBCD ;~ 0B93:3CC3
cs=0xb93;eip=0x003cc5; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a0)), ax));	// 26372 mov     [bp+var_2A0], ax ;~ 0B93:3CC5
cs=0xb93;eip=0x003cc9; 	T(MOV(ax, word_446ba));	// 26373 mov     ax, word_446BA ;~ 0B93:3CC9
cs=0xb93;eip=0x003ccc; 	T(MOV(dx, word_446bc));	// 26374 mov     dx, word_446BC ;~ 0B93:3CCC
cs=0xb93;eip=0x003cd0; 	T(MOV(cl, 6));	// 26375 mov     cl, 6 ;~ 0B93:3CD0
loc_1dbe2:
	// 5987 
cs=0xb93;eip=0x003cd2; 	T(SAR(dx, 1));	// 26378 sar     dx, 1 ;~ 0B93:3CD2
cs=0xb93;eip=0x003cd4; 	T(RCR(ax, 1));	// 26379 rcr     ax, 1 ;~ 0B93:3CD4
cs=0xb93;eip=0x003cd6; 	T(DEC(cl));	// 26380 dec     cl ;~ 0B93:3CD6
cs=0xb93;eip=0x003cd8; 	J(JNZ(loc_1dbe2));	// 26381 jnz     short loc_1DBE2 ;~ 0B93:3CD8
cs=0xb93;eip=0x003cda; 	X(MOV(*(dw*)(raddr(ss,bp+var_29e)), ax));	// 26382 mov     [bp+var_29E], ax ;~ 0B93:3CDA
cs=0xb93;eip=0x003cde; 	T(MOV(ax, word_446be));	// 26383 mov     ax, word_446BE ;~ 0B93:3CDE
cs=0xb93;eip=0x003ce1; 	T(MOV(dx, word_446c0));	// 26384 mov     dx, word_446C0 ;~ 0B93:3CE1
cs=0xb93;eip=0x003ce5; 	T(MOV(cl, 6));	// 26385 mov     cl, 6 ;~ 0B93:3CE5
loc_1dbf7:
	// 5988 
cs=0xb93;eip=0x003ce7; 	T(SAR(dx, 1));	// 26388 sar     dx, 1 ;~ 0B93:3CE7
cs=0xb93;eip=0x003ce9; 	T(RCR(ax, 1));	// 26389 rcr     ax, 1 ;~ 0B93:3CE9
cs=0xb93;eip=0x003ceb; 	T(DEC(cl));	// 26390 dec     cl ;~ 0B93:3CEB
cs=0xb93;eip=0x003ced; 	J(JNZ(loc_1dbf7));	// 26391 jnz     short loc_1DBF7 ;~ 0B93:3CED
cs=0xb93;eip=0x003cef; 	X(MOV(*(dw*)(raddr(ss,bp+var_29c)), ax));	// 26392 mov     [bp+var_29C], ax ;~ 0B93:3CEF
cs=0xb93;eip=0x003cf3; 	T(MOV(ax, framespersec));	// 26393 mov     ax, framespersec ;~ 0B93:3CF3
cs=0xb93;eip=0x003cf6; 	T(MOV(cx, ax));	// 26394 mov     cx, ax ;~ 0B93:3CF6
cs=0xb93;eip=0x003cf8; 	T(SHL(ax, 1));	// 26395 shl     ax, 1 ;~ 0B93:3CF8
cs=0xb93;eip=0x003cfa; 	T(ADD(ax, cx));	// 26396 add     ax, cx ;~ 0B93:3CFA
cs=0xb93;eip=0x003cfc; 	T(SHL(ax, 1));	// 26397 shl     ax, 1 ;~ 0B93:3CFC
cs=0xb93;eip=0x003cfe; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_5d4))));	// 26398 cmp     ax, [bp+var_5D4] ;~ 0B93:3CFE
cs=0xb93;eip=0x003d02; 	J(JLE(loc_1dc44));	// 26399 jle     short loc_1DC44 ;~ 0B93:3D02
cs=0xb93;eip=0x003d04; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a6)), 0));	// 26400 mov     [bp+var_2A6], 0 ;~ 0B93:3D04
cs=0xb93;eip=0x003d0a; 	T(MOV(ax, word_446ce));	// 26401 mov     ax, word_446CE ;~ 0B93:3D0A
cs=0xb93;eip=0x003d0d; 	T(AND(ah, 3));	// 26402 and     ah, 3 ;~ 0B93:3D0D
cs=0xb93;eip=0x003d10; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 26403 mov     [bp+var_2C], ax ;~ 0B93:3D10
cs=0xb93;eip=0x003d13; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a4)), 0));	// 26404 mov     [bp+var_2A4], 0 ;~ 0B93:3D13
cs=0xb93;eip=0x003d19; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2a0))));	// 26405 mov     ax, [bp+var_2A0] ;~ 0B93:3D19
cs=0xb93;eip=0x003d1d; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), ax));	// 26406 mov     [bp+var_3E], ax ;~ 0B93:3D1D
cs=0xb93;eip=0x003d20; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_29e))));	// 26407 mov     ax, [bp+var_29E] ;~ 0B93:3D20
cs=0xb93;eip=0x003d24; 	T(ADD(ax, 0x14));	// 26408 add     ax, 14h ;~ 0B93:3D24
cs=0xb93;eip=0x003d27; 	X(MOV(*(dw*)(raddr(ss,bp+var_3c)), ax));	// 26409 mov     [bp+var_3C], ax ;~ 0B93:3D27
cs=0xb93;eip=0x003d2a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_29c))));	// 26410 mov     ax, [bp+var_29C] ;~ 0B93:3D2A
cs=0xb93;eip=0x003d2e; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), ax));	// 26411 mov     [bp+var_3A], ax ;~ 0B93:3D2E
cs=0xb93;eip=0x003d31; 	J(JMP(loc_1dc7d));	// 26412 jmp     short loc_1DC7D ;~ 0B93:3D31
loc_1dc44:
	// 5989 
cs=0xb93;eip=0x003d34; 	T(MOV(ax, framespersec));	// 26417 mov     ax, framespersec ;~ 0B93:3D34
cs=0xb93;eip=0x003d37; 	T(MOV(cx, ax));	// 26418 mov     cx, ax ;~ 0B93:3D37
cs=0xb93;eip=0x003d39; 	T(SHL(ax, 1));	// 26419 shl     ax, 1 ;~ 0B93:3D39
cs=0xb93;eip=0x003d3b; 	T(SHL(ax, 1));	// 26420 shl     ax, 1 ;~ 0B93:3D3B
cs=0xb93;eip=0x003d3d; 	T(ADD(ax, cx));	// 26421 add     ax, cx ;~ 0B93:3D3D
cs=0xb93;eip=0x003d3f; 	T(SHL(ax, 1));	// 26422 shl     ax, 1 ;~ 0B93:3D3F
cs=0xb93;eip=0x003d41; 	T(ADD(ax, cx));	// 26423 add     ax, cx ;~ 0B93:3D41
cs=0xb93;eip=0x003d43; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_5d4))));	// 26424 cmp     ax, [bp+var_5D4] ;~ 0B93:3D43
cs=0xb93;eip=0x003d47; 	J(JLE(loc_1dc7d));	// 26425 jle     short loc_1DC7D ;~ 0B93:3D47
cs=0xb93;eip=0x003d49; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), 0x400));	// 26426 mov     [bp+var_3E], 400h ;~ 0B93:3D49
cs=0xb93;eip=0x003d4e; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), 0x400));	// 26427 mov     [bp+var_3A], 400h ;~ 0B93:3D4E
cs=0xb93;eip=0x003d53; 	X(MOV(*(dw*)(raddr(ss,bp+var_3c)), 0x5A));	// 26428 mov     [bp+var_3C], 5Ah ; 'Z' ;~ 0B93:3D53
cs=0xb93;eip=0x003d58; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2a0))));	// 26429 mov     ax, [bp+var_2A0] ;~ 0B93:3D58
cs=0xb93;eip=0x003d5c; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 26430 mov     [bp+var_6], ax ;~ 0B93:3D5C
cs=0xb93;eip=0x003d5f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_29e))));	// 26431 mov     ax, [bp+var_29E] ;~ 0B93:3D5F
cs=0xb93;eip=0x003d63; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 26432 mov     [bp+var_4], ax ;~ 0B93:3D63
cs=0xb93;eip=0x003d66; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_29c))));	// 26433 mov     ax, [bp+var_29C] ;~ 0B93:3D66
cs=0xb93;eip=0x003d6a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 26434 mov     [bp+var_2], ax ;~ 0B93:3D6A
loc_1dc7d:
	// 5990 
cs=0xb93;eip=0x003d6d; 	T(CMP(*(dw*)(raddr(ss,bp+var_2c)), 0x0FFFF));	// 26438 cmp     [bp+var_2C], 0FFFFh ;~ 0B93:3D6D
cs=0xb93;eip=0x003d71; 	J(JNZ(loc_1dcd1));	// 26439 jnz     short loc_1DCD1 ;~ 0B93:3D71
cs=0xb93;eip=0x003d73; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 26440 mov     ax, [bp+var_2] ;~ 0B93:3D73
cs=0xb93;eip=0x003d76; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_3a))));	// 26441 sub     ax, [bp+var_3A] ;~ 0B93:3D76
cs=0xb93;eip=0x003d79; 	X(PUSH(ax));	// 26442 push    ax ;~ 0B93:3D79
cs=0xb93;eip=0x003d7a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 26443 mov     ax, [bp+var_6] ;~ 0B93:3D7A
cs=0xb93;eip=0x003d7d; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_3e))));	// 26444 sub     ax, [bp+var_3E] ;~ 0B93:3D7D
cs=0xb93;eip=0x003d80; 	X(PUSH(ax));	// 26445 push    ax ;~ 0B93:3D80
cs=0xb93;eip=0x003d81; 	J(CALLF(polarangle,0));	// 26446 call    polarAngle ;~ 0B93:3D81
cs=0xb93;eip=0x003d86; 	T(ADD(sp, 4));	// 26447 add     sp, 4 ;~ 0B93:3D86
cs=0xb93;eip=0x003d89; 	T(NEG(ax));	// 26448 neg     ax ;~ 0B93:3D89
cs=0xb93;eip=0x003d8b; 	T(AND(ah, 3));	// 26449 and     ah, 3 ;~ 0B93:3D8B
cs=0xb93;eip=0x003d8e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 26450 mov     [bp+var_2C], ax ;~ 0B93:3D8E
cs=0xb93;eip=0x003d91; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 26451 mov     ax, [bp+var_2] ;~ 0B93:3D91
cs=0xb93;eip=0x003d94; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_3a))));	// 26452 sub     ax, [bp+var_3A] ;~ 0B93:3D94
cs=0xb93;eip=0x003d97; 	X(PUSH(ax));	// 26453 push    ax ;~ 0B93:3D97
cs=0xb93;eip=0x003d98; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 26454 mov     ax, [bp+var_6] ;~ 0B93:3D98
cs=0xb93;eip=0x003d9b; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_3e))));	// 26455 sub     ax, [bp+var_3E] ;~ 0B93:3D9B
cs=0xb93;eip=0x003d9e; 	X(PUSH(ax));	// 26456 push    ax ;~ 0B93:3D9E
cs=0xb93;eip=0x003d9f; 	J(CALLF(polarradius2d,0));	// 26457 call    polarRadius2D ;~ 0B93:3D9F
cs=0xb93;eip=0x003da4; 	T(ADD(sp, 4));	// 26458 add     sp, 4 ;~ 0B93:3DA4
cs=0xb93;eip=0x003da7; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 26459 mov     [bp+var_C], ax ;~ 0B93:3DA7
cs=0xb93;eip=0x003daa; 	X(PUSH(ax));	// 26460 push    ax ;~ 0B93:3DAA
cs=0xb93;eip=0x003dab; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 26461 mov     ax, [bp+var_4] ;~ 0B93:3DAB
cs=0xb93;eip=0x003dae; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_3c))));	// 26462 sub     ax, [bp+var_3C] ;~ 0B93:3DAE
cs=0xb93;eip=0x003db1; 	X(PUSH(ax));	// 26463 push    ax ;~ 0B93:3DB1
cs=0xb93;eip=0x003db2; 	J(CALLF(polarangle,0));	// 26464 call    polarAngle ;~ 0B93:3DB2
cs=0xb93;eip=0x003db7; 	T(ADD(sp, 4));	// 26465 add     sp, 4 ;~ 0B93:3DB7
cs=0xb93;eip=0x003dba; 	T(AND(ah, 3));	// 26466 and     ah, 3 ;~ 0B93:3DBA
cs=0xb93;eip=0x003dbd; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a4)), ax));	// 26467 mov     [bp+var_2A4], ax ;~ 0B93:3DBD
loc_1dcd1:
	// 5991 
cs=0xb93;eip=0x003dc1; 	T(CMP(timertestflag_copy, 0));	// 26470 cmp     timertestflag_copy, 0 ;~ 0B93:3DC1
cs=0xb93;eip=0x003dc6; 	J(JZ(loc_1dcfc));	// 26471 jz      short loc_1DCFC ;~ 0B93:3DC6
cs=0xb93;eip=0x003dc8; 	T(CMP(*(dw*)(raddr(ss,bp+var_36)), 0));	// 26472 cmp     [bp+var_36], 0 ;~ 0B93:3DC8
cs=0xb93;eip=0x003dcc; 	J(JNZ(loc_1dcec));	// 26473 jnz     short loc_1DCEC ;~ 0B93:3DCC
cs=0xb93;eip=0x003dce; 	T(ax = bp+var_43e);	// 26474 lea     ax, [bp+var_43E] ;~ 0B93:3DCE
cs=0xb93;eip=0x003dd2; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a8)), ax));	// 26475 mov     [bp+var_2A8], ax ;~ 0B93:3DD2
cs=0xb93;eip=0x003dd6; 	T(ax = bp+var_2aa);	// 26476 lea     ax, [bp+var_2AA] ;~ 0B93:3DD6
cs=0xb93;eip=0x003dda; 	J(JMP(loc_1dcf8));	// 26477 jmp     short loc_1DCF8 ;~ 0B93:3DDA
loc_1dcec:
	// 5992 
cs=0xb93;eip=0x003ddc; 	T(ax = bp+var_5d0);	// 26481 lea     ax, [bp+var_5D0] ;~ 0B93:3DDC
cs=0xb93;eip=0x003de0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a8)), ax));	// 26482 mov     [bp+var_2A8], ax ;~ 0B93:3DE0
cs=0xb93;eip=0x003de4; 	T(ax = bp+var_440);	// 26483 lea     ax, [bp+var_440] ;~ 0B93:3DE4
loc_1dcf8:
	// 5993 
cs=0xb93;eip=0x003de8; 	X(MOV(*(dw*)(raddr(ss,bp+var_5d2)), ax));	// 26486 mov     [bp+var_5D2], ax ;~ 0B93:3DE8
loc_1dcfc:
	// 5994 
cs=0xb93;eip=0x003dec; 	T(ax = bp+var_34);	// 26489 lea     ax, [bp+var_34] ;~ 0B93:3DEC
cs=0xb93;eip=0x003def; 	X(PUSH(ax));	// 26490 push    ax ;~ 0B93:3DEF
cs=0xb93;eip=0x003df0; 	T(ax = bp+var_16);	// 26491 lea     ax, [bp+var_16] ;~ 0B93:3DF0
cs=0xb93;eip=0x003df3; 	X(PUSH(ax));	// 26492 push    ax ;~ 0B93:3DF3
cs=0xb93;eip=0x003df4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_36))));	// 26493 mov     bx, [bp+var_36] ;~ 0B93:3DF4
cs=0xb93;eip=0x003df7; 	T(MOV(cl, 3));	// 26494 mov     cl, 3 ;~ 0B93:3DF7
cs=0xb93;eip=0x003df9; 	T(SHL(bx, cl));	// 26495 shl     bx, cl ;~ 0B93:3DF9
cs=0xb93;eip=0x003dfb; 	X(PUSH(*(dw*)(((db*)&word_44a0a)+bx)));	// 26496 push    word_44A0A[bx] ;~ 0B93:3DFB
cs=0xb93;eip=0x003dff; 	X(PUSH(*(dw*)(((db*)&word_44a08)+bx)));	// 26497 push    word_44A08[bx] ;~ 0B93:3DFF
cs=0xb93;eip=0x003e03; 	X(PUSH(*(dw*)(((db*)&word_44a06)+bx)));	// 26498 push    word_44A06[bx] ;~ 0B93:3E03
cs=0xb93;eip=0x003e07; 	X(PUSH(*(dw*)(((db*)&rect_unk)+bx)));	// 26499 push    rect_unk[bx] ;~ 0B93:3E07
cs=0xb93;eip=0x003e0b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_5d2))));	// 26500 push    [bp+var_5D2] ;~ 0B93:3E0B
cs=0xb93;eip=0x003e0f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2a8))));	// 26501 push    [bp+var_2A8] ;~ 0B93:3E0F
cs=0xb93;eip=0x003e13; 	T(ax = bp+var_29a);	// 26502 lea     ax, [bp+var_29A] ;~ 0B93:3E13
cs=0xb93;eip=0x003e17; 	X(PUSH(ax));	// 26503 push    ax ;~ 0B93:3E17
cs=0xb93;eip=0x003e18; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 26504 push    [bp+var_E] ;~ 0B93:3E18
cs=0xb93;eip=0x003e1b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2a6))));	// 26505 push    [bp+var_2A6] ;~ 0B93:3E1B
cs=0xb93;eip=0x003e1f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2a4))));	// 26506 push    [bp+var_2A4] ;~ 0B93:3E1F
cs=0xb93;eip=0x003e23; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2c))));	// 26507 push    [bp+var_2C] ;~ 0B93:3E23
cs=0xb93;eip=0x003e26; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 26508 push    [bp+var_3A] ;~ 0B93:3E26
cs=0xb93;eip=0x003e29; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3c))));	// 26509 push    [bp+var_3C] ;~ 0B93:3E29
cs=0xb93;eip=0x003e2c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3e))));	// 26510 push    [bp+var_3E] ;~ 0B93:3E2C
cs=0xb93;eip=0x003e2f; 	X(PUSH(cs));	// 26511 push    cs ;~ 0B93:3E2F
cs=0xb93;eip=0x003e30; 	J(CALL(intro_op,0));	// 26512 call    near ptr intro_op ;~ 0B93:3E30
cs=0xb93;eip=0x003e33; 	T(ADD(sp, 0x20));	// 26513 add     sp, 20h ;~ 0B93:3E33
cs=0xb93;eip=0x003e36; 	T(CMP(video_flag5_is0, 0));	// 26514 cmp     video_flag5_is0, 0 ;~ 0B93:3E36
cs=0xb93;eip=0x003e3b; 	J(JZ(loc_1dd7e));	// 26515 jz      short loc_1DD7E ;~ 0B93:3E3B
cs=0xb93;eip=0x003e3d; 	J(CALLF(mouse_draw_opaque_check,0));	// 26516 call    mouse_draw_opaque_check ;~ 0B93:3E3D
cs=0xb93;eip=0x003e42; 	J(CALLF(setup_mcgawnd1,0));	// 26517 call    setup_mcgawnd1 ;~ 0B93:3E42
cs=0xb93;eip=0x003e47; 	J(CALLF(mouse_draw_transparent_check,0));	// 26518 call    mouse_draw_transparent_check ;~ 0B93:3E47
cs=0xb93;eip=0x003e4c; 	T(CMP(timertestflag_copy, 0));	// 26519 cmp     timertestflag_copy, 0 ;~ 0B93:3E4C
cs=0xb93;eip=0x003e51; 	J(JZ(loc_1dd77));	// 26520 jz      short loc_1DD77 ;~ 0B93:3E51
cs=0xb93;eip=0x003e53; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_36))));	// 26521 mov     bx, [bp+var_36] ;~ 0B93:3E53
cs=0xb93;eip=0x003e56; 	T(MOV(cl, 3));	// 26522 mov     cl, 3 ;~ 0B93:3E56
cs=0xb93;eip=0x003e58; 	T(SHL(bx, cl));	// 26523 shl     bx, cl ;~ 0B93:3E58
cs=0xb93;eip=0x003e5a; 	T(di = offset(dseg,rect_unk)+bx);	// 26524 lea     di, rect_unk[bx] ;~ 0B93:3E5A
cs=0xb93;eip=0x003e5e; 	T(si = bp+var_16);	// 26525 lea     si, [bp+var_16] ;~ 0B93:3E5E
cs=0xb93;eip=0x003e61; 	X(PUSH(ds));	// 26526 push    ds ;~ 0B93:3E61
cs=0xb93;eip=0x003e62; 	X(POP(es));	// 26527 pop     es ;~ 0B93:3E62
cs=0xb93;eip=0x003e63; 	X(MOVSW);	// 26528 movsw ;~ 0B93:3E63
cs=0xb93;eip=0x003e64; 	X(MOVSW);	// 26529 movsw ;~ 0B93:3E64
cs=0xb93;eip=0x003e65; 	X(MOVSW);	// 26530 movsw ;~ 0B93:3E65
cs=0xb93;eip=0x003e66; 	X(MOVSW);	// 26531 movsw ;~ 0B93:3E66
loc_1dd77:
	// 5995 
cs=0xb93;eip=0x003e67; 	X(XOR(*(db*)(raddr(ss,bp+var_36)), 1));	// 26534 xor     byte ptr [bp+var_36], 1 ;~ 0B93:3E67
cs=0xb93;eip=0x003e6b; 	J(JMP(loc_1de19));	// 26535 jmp     loc_1DE19 ;~ 0B93:3E6B
loc_1dd7e:
	// 5996 
cs=0xb93;eip=0x003e6e; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 26539 call    sprite_copy_2_to_1_2 ;~ 0B93:3E6E
cs=0xb93;eip=0x003e73; 	T(CMP(timertestflag_copy, 0));	// 26540 cmp     timertestflag_copy, 0 ;~ 0B93:3E73
cs=0xb93;eip=0x003e78; 	J(JZ(loc_1ddfc));	// 26541 jz      short loc_1DDFC ;~ 0B93:3E78
cs=0xb93;eip=0x003e7a; 	T(ax = bp+var_2a);	// 26542 lea     ax, [bp+var_2A] ;~ 0B93:3E7A
cs=0xb93;eip=0x003e7d; 	X(PUSH(ax));	// 26543 push    ax ;~ 0B93:3E7D
cs=0xb93;eip=0x003e7e; 	T(MOV(ax, offset(dseg,rect_unk6)));	// 26544 mov     ax, offset rect_unk6 ;~ 0B93:3E7E
cs=0xb93;eip=0x003e81; 	X(PUSH(ax));	// 26545 push    ax ;~ 0B93:3E81
cs=0xb93;eip=0x003e82; 	T(ax = bp+var_34);	// 26546 lea     ax, [bp+var_34] ;~ 0B93:3E82
cs=0xb93;eip=0x003e85; 	X(PUSH(ax));	// 26547 push    ax ;~ 0B93:3E85
cs=0xb93;eip=0x003e86; 	J(CALLF(rect_union,0));	// 26548 call    rect_union ;~ 0B93:3E86
cs=0xb93;eip=0x003e8b; 	T(ADD(sp, 6));	// 26549 add     sp, 6 ;~ 0B93:3E8B
cs=0xb93;eip=0x003e8e; 	T(MOV(ax, offset(dseg,rect_unk3)));	// 26550 mov     ax, offset rect_unk3 ;~ 0B93:3E8E
cs=0xb93;eip=0x003e91; 	X(PUSH(ax));	// 26551 push    ax ;~ 0B93:3E91
cs=0xb93;eip=0x003e92; 	T(ax = bp+var_2a);	// 26552 lea     ax, [bp+var_2A] ;~ 0B93:3E92
cs=0xb93;eip=0x003e95; 	X(PUSH(ax));	// 26553 push    ax ;~ 0B93:3E95
cs=0xb93;eip=0x003e96; 	J(CALLF(rect_intersect,0));	// 26554 call    rect_intersect ;~ 0B93:3E96
cs=0xb93;eip=0x003e9b; 	T(ADD(sp, 4));	// 26555 add     sp, 4 ;~ 0B93:3E9B
cs=0xb93;eip=0x003e9e; 	T(OR(al, al));	// 26556 or      al, al ;~ 0B93:3E9E
cs=0xb93;eip=0x003ea0; 	J(JNZ(loc_1de19));	// 26557 jnz     short loc_1DE19 ;~ 0B93:3EA0
cs=0xb93;eip=0x003ea2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 26558 push    [bp+var_24] ;~ 0B93:3EA2
cs=0xb93;eip=0x003ea5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_26))));	// 26559 push    [bp+var_26] ;~ 0B93:3EA5
cs=0xb93;eip=0x003ea8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_28))));	// 26560 push    [bp+var_28] ;~ 0B93:3EA8
cs=0xb93;eip=0x003eab; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2a))));	// 26561 push    [bp+var_2A] ;~ 0B93:3EAB
cs=0xb93;eip=0x003eae; 	J(CALLF(sprite_set_1_size,0));	// 26562 call    sprite_set_1_size ;~ 0B93:3EAE
cs=0xb93;eip=0x003eb3; 	T(ADD(sp, 8));	// 26563 add     sp, 8 ;~ 0B93:3EB3
cs=0xb93;eip=0x003eb6; 	J(CALLF(mouse_draw_opaque_check,0));	// 26564 call    mouse_draw_opaque_check ;~ 0B93:3EB6
cs=0xb93;eip=0x003ebb; 	T(LES(bx, wndsprite));	// 26565 les     bx, wndsprite ;~ 0B93:3EBB
cs=0xb93;eip=0x003ebf; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 26567 push    word ptr es:[bx+2] ;~ 0B93:3EBF
cs=0xb93;eip=0x003ec3; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 26568 push    word ptr es:[bx] ;~ 0B93:3EC3
cs=0xb93;eip=0x003ec6; 	J(CALLF(sprite_putimage,0));	// 26569 call    sprite_putimage ;~ 0B93:3EC6
cs=0xb93;eip=0x003ecb; 	T(ADD(sp, 4));	// 26570 add     sp, 4 ;~ 0B93:3ECB
cs=0xb93;eip=0x003ece; 	J(CALLF(mouse_draw_transparent_check,0));	// 26571 call    mouse_draw_transparent_check ;~ 0B93:3ECE
cs=0xb93;eip=0x003ed3; 	T(MOV(di, offset(dseg,rect_unk)));	// 26572 mov     di, offset rect_unk ;~ 0B93:3ED3
cs=0xb93;eip=0x003ed6; 	T(si = bp+var_16);	// 26573 lea     si, [bp+var_16] ;~ 0B93:3ED6
cs=0xb93;eip=0x003ed9; 	X(PUSH(ds));	// 26574 push    ds ;~ 0B93:3ED9
cs=0xb93;eip=0x003eda; 	X(POP(es));	// 26575 pop     es ;~ 0B93:3EDA
cs=0xb93;eip=0x003edb; 	X(MOVSW);	// 26577 movsw ;~ 0B93:3EDB
cs=0xb93;eip=0x003edc; 	X(MOVSW);	// 26578 movsw ;~ 0B93:3EDC
cs=0xb93;eip=0x003edd; 	X(MOVSW);	// 26579 movsw ;~ 0B93:3EDD
cs=0xb93;eip=0x003ede; 	X(MOVSW);	// 26580 movsw ;~ 0B93:3EDE
cs=0xb93;eip=0x003edf; 	T(MOV(di, offset(dseg,rect_unk6)));	// 26581 mov     di, offset rect_unk6 ;~ 0B93:3EDF
cs=0xb93;eip=0x003ee2; 	T(si = bp+var_34);	// 26582 lea     si, [bp+var_34] ;~ 0B93:3EE2
cs=0xb93;eip=0x003ee5; 	X(MOVSW);	// 26583 movsw ;~ 0B93:3EE5
cs=0xb93;eip=0x003ee6; 	X(MOVSW);	// 26584 movsw ;~ 0B93:3EE6
cs=0xb93;eip=0x003ee7; 	X(MOVSW);	// 26585 movsw ;~ 0B93:3EE7
cs=0xb93;eip=0x003ee8; 	X(MOVSW);	// 26586 movsw ;~ 0B93:3EE8
cs=0xb93;eip=0x003ee9; 	J(JMP(loc_1de19));	// 26587 jmp     short loc_1DE19 ;~ 0B93:3EE9
loc_1ddfc:
	// 5997 
cs=0xb93;eip=0x003eec; 	J(CALLF(mouse_draw_opaque_check,0));	// 26592 call    mouse_draw_opaque_check ;~ 0B93:3EEC
cs=0xb93;eip=0x003ef1; 	T(LES(bx, wndsprite));	// 26593 les     bx, wndsprite ;~ 0B93:3EF1
cs=0xb93;eip=0x003ef5; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 26595 push    word ptr es:[bx+2] ;~ 0B93:3EF5
cs=0xb93;eip=0x003ef9; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 26596 push    word ptr es:[bx] ;~ 0B93:3EF9
cs=0xb93;eip=0x003efc; 	J(CALLF(sprite_putimage,0));	// 26597 call    sprite_putimage ;~ 0B93:3EFC
cs=0xb93;eip=0x003f01; 	T(ADD(sp, 4));	// 26598 add     sp, 4 ;~ 0B93:3F01
cs=0xb93;eip=0x003f04; 	J(CALLF(mouse_draw_transparent_check,0));	// 26599 call    mouse_draw_transparent_check ;~ 0B93:3F04
loc_1de19:
	// 5998 
cs=0xb93;eip=0x003f09; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40))));	// 26603 push    [bp+var_40] ;~ 0B93:3F09
cs=0xb93;eip=0x003f0c; 	J(CALLF(input_do_checking,0));	// 26604 call    input_do_checking ;~ 0B93:3F0C
cs=0xb93;eip=0x003f11; 	T(ADD(sp, 2));	// 26605 add     sp, 2 ;~ 0B93:3F11
cs=0xb93;eip=0x003f14; 	T(OR(ax, ax));	// 26606 or      ax, ax ;~ 0B93:3F14
cs=0xb93;eip=0x003f16; 	J(JZ(loc_1de2e));	// 26607 jz      short loc_1DE2E ;~ 0B93:3F16
cs=0xb93;eip=0x003f18; 	X(MOV(*(raddr(ss,bp+var_38)), 1));	// 26608 mov     [bp+var_38], 1 ;~ 0B93:3F18
cs=0xb93;eip=0x003f1c; 	J(JMP(loc_1de3e));	// 26609 jmp     short loc_1DE3E ;~ 0B93:3F1C
loc_1de2e:
	// 5999 
cs=0xb93;eip=0x003f1e; 	T(MOV(ax, 0x17));	// 26613 mov     ax, 17h ;~ 0B93:3F1E
cs=0xb93;eip=0x003f21; 	X(IMUL1_2(framespersec));	// 26614 imul    framespersec ;~ 0B93:3F21
cs=0xb93;eip=0x003f25; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_5d4))));	// 26615 cmp     ax, [bp+var_5D4] ;~ 0B93:3F25
cs=0xb93;eip=0x003f29; 	J(JLE(loc_1de3e));	// 26616 jle     short loc_1DE3E ;~ 0B93:3F29
cs=0xb93;eip=0x003f2b; 	J(JMP(loc_1dade));	// 26617 jmp     loc_1DADE ;~ 0B93:3F2B
loc_1de3e:
	// 6000 
cs=0xb93;eip=0x003f2e; 	T(CMP(video_flag5_is0, 0));	// 26622 cmp     video_flag5_is0, 0 ;~ 0B93:3F2E
cs=0xb93;eip=0x003f33; 	J(JZ(loc_1de7c));	// 26623 jz      short loc_1DE7C ;~ 0B93:3F33
cs=0xb93;eip=0x003f35; 	J(CALLF(get_0,0));	// 26624 call    get_0 ;~ 0B93:3F35
cs=0xb93;eip=0x003f3a; 	T(OR(ax, ax));	// 26625 or      ax, ax ;~ 0B93:3F3A
cs=0xb93;eip=0x003f3c; 	J(JZ(loc_1de8c));	// 26626 jz      short loc_1DE8C ;~ 0B93:3F3C
cs=0xb93;eip=0x003f3e; 	J(CALLF(setup_mcgawnd2,0));	// 26627 call    setup_mcgawnd2 ;~ 0B93:3F3E
cs=0xb93;eip=0x003f43; 	T(SUB(ax, ax));	// 26628 sub     ax, ax ;~ 0B93:3F43
cs=0xb93;eip=0x003f45; 	X(PUSH(ax));	// 26629 push    ax ;~ 0B93:3F45
cs=0xb93;eip=0x003f46; 	T(MOV(ax, 0x0C8));	// 26630 mov     ax, 0C8h ; 'È' ;~ 0B93:3F46
cs=0xb93;eip=0x003f49; 	X(PUSH(ax));	// 26631 push    ax ;~ 0B93:3F49
cs=0xb93;eip=0x003f4a; 	T(MOV(ax, 0x140));	// 26632 mov     ax, 140h ;~ 0B93:3F4A
cs=0xb93;eip=0x003f4d; 	X(PUSH(ax));	// 26633 push    ax ;~ 0B93:3F4D
cs=0xb93;eip=0x003f4e; 	T(SUB(ax, ax));	// 26634 sub     ax, ax ;~ 0B93:3F4E
cs=0xb93;eip=0x003f50; 	X(PUSH(ax));	// 26635 push    ax ;~ 0B93:3F50
cs=0xb93;eip=0x003f51; 	X(PUSH(ax));	// 26636 push    ax ;~ 0B93:3F51
cs=0xb93;eip=0x003f52; 	J(CALLF(sub_35c4e,0));	// 26637 call    sub_35C4E ;~ 0B93:3F52
cs=0xb93;eip=0x003f57; 	T(ADD(sp, 0x0A));	// 26638 add     sp, 0Ah ;~ 0B93:3F57
cs=0xb93;eip=0x003f5a; 	J(CALLF(mouse_draw_opaque_check,0));	// 26639 call    mouse_draw_opaque_check ;~ 0B93:3F5A
cs=0xb93;eip=0x003f5f; 	J(CALLF(setup_mcgawnd1,0));	// 26640 call    setup_mcgawnd1 ;~ 0B93:3F5F
cs=0xb93;eip=0x003f64; 	J(CALLF(mouse_draw_transparent_check,0));	// 26641 call    mouse_draw_transparent_check ;~ 0B93:3F64
cs=0xb93;eip=0x003f69; 	J(JMP(loc_1de8c));	// 26642 jmp     short loc_1DE8C ;~ 0B93:3F69
loc_1de7c:
	// 6001 
cs=0xb93;eip=0x003f6c; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 26647 push    word ptr wndsprite+2 ;~ 0B93:3F6C
cs=0xb93;eip=0x003f70; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 26648 push    word ptr wndsprite ;~ 0B93:3F70
cs=0xb93;eip=0x003f74; 	J(CALLF(sprite_free_wnd,0));	// 26649 call    sprite_free_wnd ;~ 0B93:3F74
cs=0xb93;eip=0x003f79; 	T(ADD(sp, 4));	// 26650 add     sp, 4 ;~ 0B93:3F79
loc_1de8c:
	// 6002 
cs=0xb93;eip=0x003f7c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2ac))));	// 26654 push    [bp+var_2AC] ;~ 0B93:3F7C
cs=0xb93;eip=0x003f80; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2ae))));	// 26655 push    [bp+var_2AE] ;~ 0B93:3F80
cs=0xb93;eip=0x003f84; 	J(CALLF(mmgr_free,0));	// 26656 call    mmgr_free ;~ 0B93:3F84
cs=0xb93;eip=0x003f89; 	T(ADD(sp, 4));	// 26657 add     sp, 4 ;~ 0B93:3F89
cs=0xb93;eip=0x003f8c; 	T(MOV(al, *(raddr(ss,bp+var_38))));	// 26658 mov     al, [bp+var_38] ;~ 0B93:3F8C
cs=0xb93;eip=0x003f8f; 	T(CBW);	// 26659 cbw ;~ 0B93:3F8F
cs=0xb93;eip=0x003f90; 	X(POP(si));	// 26660 pop     si ;~ 0B93:3F90
cs=0xb93;eip=0x003f91; 	X(POP(di));	// 26661 pop     di ;~ 0B93:3F91
cs=0xb93;eip=0x003f92; 	T(MOV(sp, bp));	// 26662 mov     sp, bp ;~ 0B93:3F92
cs=0xb93;eip=0x003f94; 	X(POP(bp));	// 26663 pop     bp ;~ 0B93:3F94
cs=0xb93;eip=0x003f95; 	J(RETF(0));	// 26664 retf ;~ 0B93:3F95

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1d9ca: 	goto loc_1d9ca;
        case m2c::kloc_1d9cf: 	goto loc_1d9cf;
        case m2c::kloc_1dade: 	goto loc_1dade;
        case m2c::kloc_1daee: 	goto loc_1daee;
        case m2c::kloc_1db38: 	goto loc_1db38;
        case m2c::kloc_1db3b: 	goto loc_1db3b;
        case m2c::kloc_1db48: 	goto loc_1db48;
        case m2c::kloc_1db54: 	goto loc_1db54;
        case m2c::kloc_1db5e: 	goto loc_1db5e;
        case m2c::kloc_1db6a: 	goto loc_1db6a;
        case m2c::kloc_1db74: 	goto loc_1db74;
        case m2c::kloc_1db80: 	goto loc_1db80;
        case m2c::kloc_1db8a: 	goto loc_1db8a;
        case m2c::kloc_1db96: 	goto loc_1db96;
        case m2c::kloc_1dba0: 	goto loc_1dba0;
        case m2c::kloc_1dbb4: 	goto loc_1dbb4;
        case m2c::kloc_1dbb9: 	goto loc_1dbb9;
        case m2c::kloc_1dbcd: 	goto loc_1dbcd;
        case m2c::kloc_1dbe2: 	goto loc_1dbe2;
        case m2c::kloc_1dbf7: 	goto loc_1dbf7;
        case m2c::kloc_1dc44: 	goto loc_1dc44;
        case m2c::kloc_1dc7d: 	goto loc_1dc7d;
        case m2c::kloc_1dcd1: 	goto loc_1dcd1;
        case m2c::kloc_1dcec: 	goto loc_1dcec;
        case m2c::kloc_1dcf8: 	goto loc_1dcf8;
        case m2c::kloc_1dcfc: 	goto loc_1dcfc;
        case m2c::kloc_1dd77: 	goto loc_1dd77;
        case m2c::kloc_1dd7e: 	goto loc_1dd7e;
        case m2c::kloc_1ddfc: 	goto loc_1ddfc;
        case m2c::kloc_1de19: 	goto loc_1de19;
        case m2c::kloc_1de2e: 	goto loc_1de2e;
        case m2c::kloc_1de3e: 	goto loc_1de3e;
        case m2c::kloc_1de7c: 	goto loc_1de7c;
        case m2c::kloc_1de8c: 	goto loc_1de8c;
        case m2c::ksetup_intro: 	goto setup_intro;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool intro_op(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    intro_op:
    _begin:
#undef var_42
#define var_42 -0x42
	// 26674 var_42          = word ptr -42h ;~ 0B93:3F96
#undef var_40
#define var_40 -0x40
	// 26675 var_40          = byte ptr -40h ;~ 0B93:3F96
#undef var_3c
#define var_3c -0x3C
	// 26676 var_3C          = word ptr -3Ch ;~ 0B93:3F96
#undef var_3a
#define var_3a -0x3A
	// 26677 var_3A          = word ptr -3Ah ;~ 0B93:3F96
#undef var_38
#define var_38 -0x38
	// 26678 var_38          = word ptr -38h ;~ 0B93:3F96
#undef var_36
#define var_36 -0x36
	// 26679 var_36          = word ptr -36h ;~ 0B93:3F96
#undef var_34
#define var_34 -0x34
	// 26680 var_34          = word ptr -34h ;~ 0B93:3F96
#undef var_32
#define var_32 -0x32
	// 26681 var_32          = word ptr -32h ;~ 0B93:3F96
#undef var_2c
#define var_2c -0x2C
	// 26682 var_2C          = word ptr -2Ch ;~ 0B93:3F96
#undef var_2a
#define var_2a -0x2A
	// 26683 var_2A          = word ptr -2Ah ;~ 0B93:3F96
#undef var_28
#define var_28 -0x28
	// 26684 var_28          = word ptr -28h ;~ 0B93:3F96
#undef var_26
#define var_26 -0x26
	// 26685 var_26          = word ptr -26h ;~ 0B93:3F96
#undef var_24
#define var_24 -0x24
	// 26686 var_24          = byte ptr -24h ;~ 0B93:3F96
#undef var_1c
#define var_1c -0x1C
	// 26687 var_1C          = word ptr -1Ch ;~ 0B93:3F96
#undef var_1a
#define var_1a -0x1A
	// 26688 var_1A          = word ptr -1Ah ;~ 0B93:3F96
#undef var_18
#define var_18 -0x18
	// 26689 var_18          = word ptr -18h ;~ 0B93:3F96
#undef var_16
#define var_16 -0x16
	// 26690 var_16          = word ptr -16h ;~ 0B93:3F96
#undef var_14
#define var_14 -0x14
	// 26691 var_14          = word ptr -14h ;~ 0B93:3F96
#undef var_12
#define var_12 -0x12
	// 26692 var_12          = word ptr -12h ;~ 0B93:3F96
#undef var_10
#define var_10 -0x10
	// 26693 var_10          = word ptr -10h ;~ 0B93:3F96
#undef var_e
#define var_e -0x0E
	// 26694 var_E           = word ptr -0Eh ;~ 0B93:3F96
#undef var_c
#define var_c -0x0C
	// 26695 var_C           = word ptr -0Ch ;~ 0B93:3F96
#undef var_a
#define var_a -0x0A
	// 26696 var_A           = byte ptr -0Ah ;~ 0B93:3F96
#undef var_9
#define var_9 -9
	// 26697 var_9           = byte ptr -9 ;~ 0B93:3F96
#undef var_8
#define var_8 -8
	// 26698 var_8           = byte ptr -8 ;~ 0B93:3F96
#undef arg_0
#define arg_0 6
	// 26699 arg_0           = word ptr  6 ;~ 0B93:3F96
#undef arg_2
#define arg_2 8
	// 26700 arg_2           = word ptr  8 ;~ 0B93:3F96
#undef arg_4
#define arg_4 0x0A
	// 26701 arg_4           = word ptr  0Ah ;~ 0B93:3F96
#undef arg_6
#define arg_6 0x0C
	// 26702 arg_6           = word ptr  0Ch ;~ 0B93:3F96
#undef arg_8
#define arg_8 0x0E
	// 26703 arg_8           = word ptr  0Eh ;~ 0B93:3F96
#undef arg_a
#define arg_a 0x10
	// 26704 arg_A           = word ptr  10h ;~ 0B93:3F96
#undef arg_c
#define arg_c 0x12
	// 26705 arg_C           = word ptr  12h ;~ 0B93:3F96
#undef arg_e
#define arg_e 0x14
	// 26706 arg_E           = word ptr  14h ;~ 0B93:3F96
#undef arg_10
#define arg_10 0x16
	// 26707 arg_10          = word ptr  16h ;~ 0B93:3F96
#undef arg_12
#define arg_12 0x18
	// 26708 arg_12          = word ptr  18h ;~ 0B93:3F96
#undef arg_14
#define arg_14 0x1A
	// 26709 arg_14          = byte ptr  1Ah ;~ 0B93:3F96
#undef arg_1c
#define arg_1c 0x22
	// 26710 arg_1C          = word ptr  22h ;~ 0B93:3F96
#undef arg_1e
#define arg_1e 0x24
	// 26711 arg_1E          = word ptr  24h ;~ 0B93:3F96
cs=0xb93;eip=0x003f96; 	X(PUSH(bp));	// 26713 push    bp ;~ 0B93:3F96
cs=0xb93;eip=0x003f97; 	T(MOV(bp, sp));	// 26714 mov     bp, sp ;~ 0B93:3F97
cs=0xb93;eip=0x003f99; 	T(SUB(sp, 0x42));	// 26715 sub     sp, 42h ;~ 0B93:3F99
cs=0xb93;eip=0x003f9c; 	X(PUSH(di));	// 26716 push    di ;~ 0B93:3F9C
cs=0xb93;eip=0x003f9d; 	X(PUSH(si));	// 26717 push    si ;~ 0B93:3F9D
cs=0xb93;eip=0x003f9e; 	X(PUSH(si));	// 26718 push    si ;~ 0B93:3F9E
cs=0xb93;eip=0x003f9f; 	X(PUSH(di));	// 26719 push    di ;~ 0B93:3F9F
cs=0xb93;eip=0x003fa0; 	T(di = bp+var_8);	// 26720 lea     di, [bp+var_8] ;~ 0B93:3FA0
cs=0xb93;eip=0x003fa3; 	T(MOV(si, offset(dseg,cliprect_unk)));	// 26721 mov     si, offset cliprect_unk ;~ 0B93:3FA3
cs=0xb93;eip=0x003fa6; 	X(PUSH(ss));	// 26722 push    ss ;~ 0B93:3FA6
cs=0xb93;eip=0x003fa7; 	X(POP(es));	// 26723 pop     es ;~ 0B93:3FA7
cs=0xb93;eip=0x003fa8; 	X(MOVSW);	// 26724 movsw ;~ 0B93:3FA8
cs=0xb93;eip=0x003fa9; 	X(MOVSW);	// 26725 movsw ;~ 0B93:3FA9
cs=0xb93;eip=0x003faa; 	X(MOVSW);	// 26726 movsw ;~ 0B93:3FAA
cs=0xb93;eip=0x003fab; 	X(MOVSW);	// 26727 movsw ;~ 0B93:3FAB
cs=0xb93;eip=0x003fac; 	X(POP(di));	// 26728 pop     di ;~ 0B93:3FAC
cs=0xb93;eip=0x003fad; 	X(POP(si));	// 26729 pop     si ;~ 0B93:3FAD
cs=0xb93;eip=0x003fae; 	T(SUB(ax, ax));	// 26730 sub     ax, ax ;~ 0B93:3FAE
cs=0xb93;eip=0x003fb0; 	X(PUSH(ax));	// 26731 push    ax ;~ 0B93:3FB0
cs=0xb93;eip=0x003fb1; 	T(MOV(ax, offset(dseg,intro_cliprect)));	// 26732 mov     ax, offset intro_cliprect ;~ 0B93:3FB1
cs=0xb93;eip=0x003fb4; 	X(PUSH(ax));	// 26733 push    ax ;~ 0B93:3FB4
cs=0xb93;eip=0x003fb5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 26734 push    [bp+arg_6] ;~ 0B93:3FB5
cs=0xb93;eip=0x003fb8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 26735 push    [bp+arg_8] ;~ 0B93:3FB8
cs=0xb93;eip=0x003fbb; 	T(SUB(ax, ax));	// 26736 sub     ax, ax ;~ 0B93:3FBB
cs=0xb93;eip=0x003fbd; 	X(PUSH(ax));	// 26737 push    ax ;~ 0B93:3FBD
cs=0xb93;eip=0x003fbe; 	J(CALLF(select_cliprect_rotate,0));	// 26738 call    select_cliprect_rotate ;~ 0B93:3FBE
cs=0xb93;eip=0x003fc3; 	T(ADD(sp, 0x0A));	// 26739 add     sp, 0Ah ;~ 0B93:3FC3
cs=0xb93;eip=0x003fc6; 	T(CMP(*(dw*)(raddr(ss,bp+arg_c)), 0));	// 26740 cmp     [bp+arg_C], 0 ;~ 0B93:3FC6
cs=0xb93;eip=0x003fca; 	J(JZ(loc_1dee4));	// 26741 jz      short loc_1DEE4 ;~ 0B93:3FCA
cs=0xb93;eip=0x003fcc; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), offset(dseg,logoshape)));	// 26742 mov     [bp+var_16], offset logoshape ;~ 0B93:3FCC
cs=0xb93;eip=0x003fd1; 	J(JMP(loc_1dee9));	// 26743 jmp     short loc_1DEE9 ;~ 0B93:3FD1
loc_1dee4:
	// 6003 
cs=0xb93;eip=0x003fd4; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), offset(dseg,logo2shape)));	// 26748 mov     [bp+var_16], offset logo2shape ;~ 0B93:3FD4
loc_1dee9:
	// 6004 
cs=0xb93;eip=0x003fd9; 	T(MOV(ax, 0x400));	// 26751 mov     ax, 400h ;~ 0B93:3FD9
cs=0xb93;eip=0x003fdc; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 26752 sub     ax, [bp+arg_0] ;~ 0B93:3FDC
cs=0xb93;eip=0x003fdf; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 26753 mov     [bp+var_1C], ax ;~ 0B93:3FDF
cs=0xb93;eip=0x003fe2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 26754 mov     ax, [bp+arg_2] ;~ 0B93:3FE2
cs=0xb93;eip=0x003fe5; 	T(NEG(ax));	// 26755 neg     ax ;~ 0B93:3FE5
cs=0xb93;eip=0x003fe7; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 26756 mov     [bp+var_1A], ax ;~ 0B93:3FE7
cs=0xb93;eip=0x003fea; 	T(MOV(ax, 0x400));	// 26757 mov     ax, 400h ;~ 0B93:3FEA
cs=0xb93;eip=0x003fed; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 26758 sub     ax, [bp+arg_4] ;~ 0B93:3FED
cs=0xb93;eip=0x003ff0; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 26759 mov     [bp+var_18], ax ;~ 0B93:3FF0
cs=0xb93;eip=0x003ff3; 	T(CMP(timertestflag_copy, 0));	// 26760 cmp     timertestflag_copy, 0 ;~ 0B93:3FF3
cs=0xb93;eip=0x003ff8; 	J(JZ(loc_1df16));	// 26761 jz      short loc_1DF16 ;~ 0B93:3FF8
cs=0xb93;eip=0x003ffa; 	T(ax = bp+var_8);	// 26762 lea     ax, [bp+var_8] ;~ 0B93:3FFA
cs=0xb93;eip=0x003ffd; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 26763 mov     [bp+var_14], ax ;~ 0B93:3FFD
cs=0xb93;eip=0x004000; 	X(MOV(*(raddr(ss,bp+var_a)), 0x0C));	// 26764 mov     [bp+var_A], 0Ch ;~ 0B93:4000
cs=0xb93;eip=0x004004; 	J(JMP(loc_1df1a));	// 26765 jmp     short loc_1DF1A ;~ 0B93:4004
loc_1df16:
	// 6005 
cs=0xb93;eip=0x004006; 	X(MOV(*(raddr(ss,bp+var_a)), 4));	// 26769 mov     [bp+var_A], 4 ;~ 0B93:4006
loc_1df1a:
	// 6006 
cs=0xb93;eip=0x00400a; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 0));	// 26772 mov     [bp+var_12], 0 ;~ 0B93:400A
cs=0xb93;eip=0x00400f; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0));	// 26773 mov     [bp+var_10], 0 ;~ 0B93:400F
cs=0xb93;eip=0x004014; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 26774 mov     [bp+var_E], 0 ;~ 0B93:4014
cs=0xb93;eip=0x004019; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0x400));	// 26775 mov     [bp+var_C], 400h ;~ 0B93:4019
cs=0xb93;eip=0x00401e; 	X(MOV(*(raddr(ss,bp+var_9)), 0));	// 26776 mov     [bp+var_9], 0 ;~ 0B93:401E
cs=0xb93;eip=0x004022; 	T(ax = bp+var_1c);	// 26777 lea     ax, [bp+var_1C] ;~ 0B93:4022
cs=0xb93;eip=0x004025; 	X(PUSH(ax));	// 26778 push    ax ;~ 0B93:4025
cs=0xb93;eip=0x004026; 	J(CALLF(transformed_shape_op,0));	// 26779 call    transformed_shape_op ;~ 0B93:4026
cs=0xb93;eip=0x00402b; 	T(ADD(sp, 2));	// 26780 add     sp, 2 ;~ 0B93:402B
cs=0xb93;eip=0x00402e; 	T(CMP(*(dw*)(raddr(ss,bp+arg_a)), 0));	// 26781 cmp     [bp+arg_A], 0 ;~ 0B93:402E
cs=0xb93;eip=0x004032; 	J(JNZ(loc_1df47));	// 26782 jnz     short loc_1DF47 ;~ 0B93:4032
cs=0xb93;eip=0x004034; 	J(JMP(loc_1dfcf));	// 26783 jmp     loc_1DFCF ;~ 0B93:4034
loc_1df47:
	// 6007 
cs=0xb93;eip=0x004037; 	T(MOV(ax, word_446b6));	// 26787 mov     ax, word_446B6 ;~ 0B93:4037
cs=0xb93;eip=0x00403a; 	T(MOV(dx, word_446b8));	// 26788 mov     dx, word_446B8 ;~ 0B93:403A
cs=0xb93;eip=0x00403e; 	T(MOV(cl, 6));	// 26789 mov     cl, 6 ;~ 0B93:403E
loc_1df50:
	// 6008 
cs=0xb93;eip=0x004040; 	T(SAR(dx, 1));	// 26792 sar     dx, 1 ;~ 0B93:4040
cs=0xb93;eip=0x004042; 	T(RCR(ax, 1));	// 26793 rcr     ax, 1 ;~ 0B93:4042
cs=0xb93;eip=0x004044; 	T(DEC(cl));	// 26794 dec     cl ;~ 0B93:4044
cs=0xb93;eip=0x004046; 	J(JNZ(loc_1df50));	// 26795 jnz     short loc_1DF50 ;~ 0B93:4046
cs=0xb93;eip=0x004048; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 26796 sub     ax, [bp+arg_0] ;~ 0B93:4048
cs=0xb93;eip=0x00404b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 26797 mov     [bp+var_1C], ax ;~ 0B93:404B
cs=0xb93;eip=0x00404e; 	T(MOV(ax, word_446ba));	// 26798 mov     ax, word_446BA ;~ 0B93:404E
cs=0xb93;eip=0x004051; 	T(MOV(dx, word_446bc));	// 26799 mov     dx, word_446BC ;~ 0B93:4051
cs=0xb93;eip=0x004055; 	T(MOV(cl, 6));	// 26800 mov     cl, 6 ;~ 0B93:4055
loc_1df67:
	// 6009 
cs=0xb93;eip=0x004057; 	T(SAR(dx, 1));	// 26803 sar     dx, 1 ;~ 0B93:4057
cs=0xb93;eip=0x004059; 	T(RCR(ax, 1));	// 26804 rcr     ax, 1 ;~ 0B93:4059
cs=0xb93;eip=0x00405b; 	T(DEC(cl));	// 26805 dec     cl ;~ 0B93:405B
cs=0xb93;eip=0x00405d; 	J(JNZ(loc_1df67));	// 26806 jnz     short loc_1DF67 ;~ 0B93:405D
cs=0xb93;eip=0x00405f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 26807 sub     ax, [bp+arg_2] ;~ 0B93:405F
cs=0xb93;eip=0x004062; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 26808 mov     [bp+var_1A], ax ;~ 0B93:4062
cs=0xb93;eip=0x004065; 	T(MOV(ax, word_446be));	// 26809 mov     ax, word_446BE ;~ 0B93:4065
cs=0xb93;eip=0x004068; 	T(MOV(dx, word_446c0));	// 26810 mov     dx, word_446C0 ;~ 0B93:4068
cs=0xb93;eip=0x00406c; 	T(MOV(cl, 6));	// 26811 mov     cl, 6 ;~ 0B93:406C
loc_1df7e:
	// 6010 
cs=0xb93;eip=0x00406e; 	T(SAR(dx, 1));	// 26814 sar     dx, 1 ;~ 0B93:406E
cs=0xb93;eip=0x004070; 	T(RCR(ax, 1));	// 26815 rcr     ax, 1 ;~ 0B93:4070
cs=0xb93;eip=0x004072; 	T(DEC(cl));	// 26816 dec     cl ;~ 0B93:4072
cs=0xb93;eip=0x004074; 	J(JNZ(loc_1df7e));	// 26817 jnz     short loc_1DF7E ;~ 0B93:4074
cs=0xb93;eip=0x004076; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 26818 sub     ax, [bp+arg_4] ;~ 0B93:4076
cs=0xb93;eip=0x004079; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 26819 mov     [bp+var_18], ax ;~ 0B93:4079
cs=0xb93;eip=0x00407c; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), offset(dseg,bravshape)));	// 26820 mov     [bp+var_16], offset bravshape ;~ 0B93:407C
cs=0xb93;eip=0x004081; 	T(CMP(timertestflag_copy, 0));	// 26821 cmp     timertestflag_copy, 0 ;~ 0B93:4081
cs=0xb93;eip=0x004086; 	J(JZ(loc_1dfa4));	// 26822 jz      short loc_1DFA4 ;~ 0B93:4086
cs=0xb93;eip=0x004088; 	T(ax = bp+var_8);	// 26823 lea     ax, [bp+var_8] ;~ 0B93:4088
cs=0xb93;eip=0x00408b; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 26824 mov     [bp+var_14], ax ;~ 0B93:408B
cs=0xb93;eip=0x00408e; 	X(MOV(*(raddr(ss,bp+var_a)), 0x0C));	// 26825 mov     [bp+var_A], 0Ch ;~ 0B93:408E
cs=0xb93;eip=0x004092; 	J(JMP(loc_1dfa8));	// 26826 jmp     short loc_1DFA8 ;~ 0B93:4092
loc_1dfa4:
	// 6011 
cs=0xb93;eip=0x004094; 	X(MOV(*(raddr(ss,bp+var_a)), 4));	// 26830 mov     [bp+var_A], 4 ;~ 0B93:4094
loc_1dfa8:
	// 6012 
cs=0xb93;eip=0x004098; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 0));	// 26833 mov     [bp+var_12], 0 ;~ 0B93:4098
cs=0xb93;eip=0x00409d; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0));	// 26834 mov     [bp+var_10], 0 ;~ 0B93:409D
cs=0xb93;eip=0x0040a2; 	T(MOV(ax, word_446ce));	// 26835 mov     ax, word_446CE ;~ 0B93:40A2
cs=0xb93;eip=0x0040a5; 	T(NEG(ax));	// 26836 neg     ax ;~ 0B93:40A5
cs=0xb93;eip=0x0040a7; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 26837 mov     [bp+var_E], ax ;~ 0B93:40A7
cs=0xb93;eip=0x0040aa; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0x400));	// 26838 mov     [bp+var_C], 400h ;~ 0B93:40AA
cs=0xb93;eip=0x0040af; 	X(MOV(*(raddr(ss,bp+var_9)), 0));	// 26839 mov     [bp+var_9], 0 ;~ 0B93:40AF
cs=0xb93;eip=0x0040b3; 	T(ax = bp+var_1c);	// 26840 lea     ax, [bp+var_1C] ;~ 0B93:40B3
cs=0xb93;eip=0x0040b6; 	X(PUSH(ax));	// 26841 push    ax ;~ 0B93:40B6
cs=0xb93;eip=0x0040b7; 	J(CALLF(transformed_shape_op,0));	// 26842 call    transformed_shape_op ;~ 0B93:40B7
cs=0xb93;eip=0x0040bc; 	T(ADD(sp, 2));	// 26843 add     sp, 2 ;~ 0B93:40BC
loc_1dfcf:
	// 6013 
cs=0xb93;eip=0x0040bf; 	T(CMP(timertestflag_copy, 0));	// 26846 cmp     timertestflag_copy, 0 ;~ 0B93:40BF
cs=0xb93;eip=0x0040c4; 	J(JNZ(loc_1dfd9));	// 26847 jnz     short loc_1DFD9 ;~ 0B93:40C4
cs=0xb93;eip=0x0040c6; 	J(JMP(loc_1e06c));	// 26848 jmp     loc_1E06C ;~ 0B93:40C6
loc_1dfd9:
	// 6014 
cs=0xb93;eip=0x0040c9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_12))));	// 26852 mov     bx, [bp+arg_12] ;~ 0B93:40C9
cs=0xb93;eip=0x0040cc; 	T(CMP(*(dw*)(raddr(ds,bx)), 0));	// 26853 cmp     word ptr [bx], 0 ;~ 0B93:40CC
cs=0xb93;eip=0x0040cf; 	J(JZ(loc_1e013));	// 26854 jz      short loc_1E013 ;~ 0B93:40CF
cs=0xb93;eip=0x0040d1; 	T(SUB(si, si));	// 26855 sub     si, si ;~ 0B93:40D1
cs=0xb93;eip=0x0040d3; 	J(JMP(loc_1e00c));	// 26856 jmp     short loc_1E00C ;~ 0B93:40D3
loc_1dfe6:
	// 6015 
cs=0xb93;eip=0x0040d6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_10))));	// 26861 mov     bx, [bp+arg_10] ;~ 0B93:40D6
cs=0xb93;eip=0x0040d9; 	T(MOV(ax, si));	// 26862 mov     ax, si ;~ 0B93:40D9
cs=0xb93;eip=0x0040db; 	T(SHL(ax, 1));	// 26863 shl     ax, 1 ;~ 0B93:40DB
cs=0xb93;eip=0x0040dd; 	T(SHL(ax, 1));	// 26864 shl     ax, 1 ;~ 0B93:40DD
cs=0xb93;eip=0x0040df; 	T(ADD(bx, ax));	// 26865 add     bx, ax ;~ 0B93:40DF
cs=0xb93;eip=0x0040e1; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 26866 mov     ax, [bx] ;~ 0B93:40E1
cs=0xb93;eip=0x0040e3; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 26867 mov     dx, [bx+2] ;~ 0B93:40E3
cs=0xb93;eip=0x0040e6; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), ax));	// 26868 mov     [bp+var_3A], ax ;~ 0B93:40E6
cs=0xb93;eip=0x0040e9; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), dx));	// 26869 mov     [bp+var_38], dx ;~ 0B93:40E9
cs=0xb93;eip=0x0040ec; 	T(SUB(ax, ax));	// 26870 sub     ax, ax ;~ 0B93:40EC
cs=0xb93;eip=0x0040ee; 	X(PUSH(ax));	// 26871 push    ax ;~ 0B93:40EE
cs=0xb93;eip=0x0040ef; 	X(PUSH(dx));	// 26872 push    dx ;~ 0B93:40EF
cs=0xb93;eip=0x0040f0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 26873 push    [bp+var_3A] ;~ 0B93:40F0
cs=0xb93;eip=0x0040f3; 	J(CALLF(putpixel_single_maybe,0));	// 26874 call    putpixel_single_maybe ;~ 0B93:40F3
cs=0xb93;eip=0x0040f8; 	T(ADD(sp, 6));	// 26875 add     sp, 6 ;~ 0B93:40F8
cs=0xb93;eip=0x0040fb; 	T(INC(si));	// 26876 inc     si ;~ 0B93:40FB
loc_1e00c:
	// 6016 
cs=0xb93;eip=0x0040fc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_12))));	// 26879 mov     bx, [bp+arg_12] ;~ 0B93:40FC
cs=0xb93;eip=0x0040ff; 	T(CMP(*(dw*)(raddr(ds,bx)), si));	// 26880 cmp     [bx], si ;~ 0B93:40FF
cs=0xb93;eip=0x004101; 	J(JG(loc_1dfe6));	// 26881 jg      short loc_1DFE6 ;~ 0B93:4101
loc_1e013:
	// 6017 
cs=0xb93;eip=0x004103; 	T(ax = bp+var_2c);	// 26884 lea     ax, [bp+var_2C] ;~ 0B93:4103
cs=0xb93;eip=0x004106; 	X(PUSH(ax));	// 26885 push    ax ;~ 0B93:4106
cs=0xb93;eip=0x004107; 	T(ax = bp+arg_14);	// 26886 lea     ax, [bp+arg_14] ;~ 0B93:4107
cs=0xb93;eip=0x00410a; 	X(PUSH(ax));	// 26887 push    ax ;~ 0B93:410A
cs=0xb93;eip=0x00410b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_1c))));	// 26888 push    [bp+arg_1C] ;~ 0B93:410B
cs=0xb93;eip=0x00410e; 	J(CALLF(rect_union,0));	// 26889 call    rect_union ;~ 0B93:410E
cs=0xb93;eip=0x004113; 	T(ADD(sp, 6));	// 26890 add     sp, 6 ;~ 0B93:4113
cs=0xb93;eip=0x004116; 	T(MOV(ax, offset(dseg,rect_unk3)));	// 26891 mov     ax, offset rect_unk3 ;~ 0B93:4116
cs=0xb93;eip=0x004119; 	X(PUSH(ax));	// 26892 push    ax ;~ 0B93:4119
cs=0xb93;eip=0x00411a; 	T(ax = bp+var_2c);	// 26893 lea     ax, [bp+var_2C] ;~ 0B93:411A
cs=0xb93;eip=0x00411d; 	X(PUSH(ax));	// 26894 push    ax ;~ 0B93:411D
cs=0xb93;eip=0x00411e; 	J(CALLF(rect_intersect,0));	// 26895 call    rect_intersect ;~ 0B93:411E
cs=0xb93;eip=0x004123; 	T(ADD(sp, 4));	// 26896 add     sp, 4 ;~ 0B93:4123
cs=0xb93;eip=0x004126; 	T(OR(al, al));	// 26897 or      al, al ;~ 0B93:4126
cs=0xb93;eip=0x004128; 	J(JNZ(loc_1e059));	// 26898 jnz     short loc_1E059 ;~ 0B93:4128
cs=0xb93;eip=0x00412a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_26))));	// 26899 push    [bp+var_26] ;~ 0B93:412A
cs=0xb93;eip=0x00412d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_28))));	// 26900 push    [bp+var_28] ;~ 0B93:412D
cs=0xb93;eip=0x004130; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2a))));	// 26901 push    [bp+var_2A] ;~ 0B93:4130
cs=0xb93;eip=0x004133; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2c))));	// 26902 push    [bp+var_2C] ;~ 0B93:4133
cs=0xb93;eip=0x004136; 	J(CALLF(sprite_set_1_size,0));	// 26903 call    sprite_set_1_size ;~ 0B93:4136
cs=0xb93;eip=0x00413b; 	T(ADD(sp, 8));	// 26904 add     sp, 8 ;~ 0B93:413B
cs=0xb93;eip=0x00413e; 	T(SUB(ax, ax));	// 26905 sub     ax, ax ;~ 0B93:413E
cs=0xb93;eip=0x004140; 	X(PUSH(ax));	// 26906 push    ax ;~ 0B93:4140
cs=0xb93;eip=0x004141; 	J(CALLF(sprite_clear_1_color,0));	// 26907 call    sprite_clear_1_color ;~ 0B93:4141
cs=0xb93;eip=0x004146; 	T(ADD(sp, 2));	// 26908 add     sp, 2 ;~ 0B93:4146
loc_1e059:
	// 6018 
cs=0xb93;eip=0x004149; 	X(PUSH(si));	// 26911 push    si ;~ 0B93:4149
cs=0xb93;eip=0x00414a; 	X(PUSH(di));	// 26912 push    di ;~ 0B93:414A
cs=0xb93;eip=0x00414b; 	T(di = bp+var_24);	// 26913 lea     di, [bp+var_24] ;~ 0B93:414B
cs=0xb93;eip=0x00414e; 	T(si = bp+var_8);	// 26914 lea     si, [bp+var_8] ;~ 0B93:414E
cs=0xb93;eip=0x004151; 	X(PUSH(ss));	// 26915 push    ss ;~ 0B93:4151
cs=0xb93;eip=0x004152; 	X(POP(es));	// 26916 pop     es ;~ 0B93:4152
cs=0xb93;eip=0x004153; 	X(MOVSW);	// 26917 movsw ;~ 0B93:4153
cs=0xb93;eip=0x004154; 	X(MOVSW);	// 26918 movsw ;~ 0B93:4154
cs=0xb93;eip=0x004155; 	X(MOVSW);	// 26919 movsw ;~ 0B93:4155
cs=0xb93;eip=0x004156; 	X(MOVSW);	// 26920 movsw ;~ 0B93:4156
cs=0xb93;eip=0x004157; 	X(POP(di));	// 26921 pop     di ;~ 0B93:4157
cs=0xb93;eip=0x004158; 	X(POP(si));	// 26922 pop     si ;~ 0B93:4158
cs=0xb93;eip=0x004159; 	J(JMP(loc_1e08f));	// 26923 jmp     short loc_1E08F ;~ 0B93:4159
loc_1e06c:
	// 6019 
cs=0xb93;eip=0x00415c; 	X(PUSH(word_3c1bc));	// 26928 push    word_3C1BC ;~ 0B93:415C
cs=0xb93;eip=0x004160; 	X(PUSH(word_3c1ba));	// 26929 push    word_3C1BA ;~ 0B93:4160
cs=0xb93;eip=0x004164; 	X(PUSH(word_3c1b8));	// 26930 push    word_3C1B8 ;~ 0B93:4164
cs=0xb93;eip=0x004168; 	X(PUSH(intro_cliprect));	// 26931 push    intro_cliprect ;~ 0B93:4168
cs=0xb93;eip=0x00416c; 	J(CALLF(sprite_set_1_size,0));	// 26932 call    sprite_set_1_size ;~ 0B93:416C
cs=0xb93;eip=0x004171; 	T(ADD(sp, 8));	// 26933 add     sp, 8 ;~ 0B93:4171
cs=0xb93;eip=0x004174; 	T(SUB(ax, ax));	// 26934 sub     ax, ax ;~ 0B93:4174
cs=0xb93;eip=0x004176; 	X(PUSH(ax));	// 26935 push    ax ;~ 0B93:4176
cs=0xb93;eip=0x004177; 	J(CALLF(sprite_clear_1_color,0));	// 26936 call    sprite_clear_1_color ;~ 0B93:4177
cs=0xb93;eip=0x00417c; 	T(ADD(sp, 2));	// 26937 add     sp, 2 ;~ 0B93:417C
loc_1e08f:
	// 6020 
cs=0xb93;eip=0x00417f; 	X(PUSH(word_3c1bc));	// 26940 push    word_3C1BC ;~ 0B93:417F
cs=0xb93;eip=0x004183; 	X(PUSH(word_3c1ba));	// 26941 push    word_3C1BA ;~ 0B93:4183
cs=0xb93;eip=0x004187; 	X(PUSH(word_3c1b8));	// 26942 push    word_3C1B8 ;~ 0B93:4187
cs=0xb93;eip=0x00418b; 	X(PUSH(intro_cliprect));	// 26943 push    intro_cliprect ;~ 0B93:418B
cs=0xb93;eip=0x00418f; 	J(CALLF(sprite_set_1_size,0));	// 26944 call    sprite_set_1_size ;~ 0B93:418F
cs=0xb93;eip=0x004194; 	T(ADD(sp, 8));	// 26945 add     sp, 8 ;~ 0B93:4194
cs=0xb93;eip=0x004197; 	T(SUB(di, di));	// 26946 sub     di, di ;~ 0B93:4197
cs=0xb93;eip=0x004199; 	T(SUB(si, si));	// 26947 sub     si, si ;~ 0B93:4199
loc_1e0ab:
	// 6021 
cs=0xb93;eip=0x00419b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_e))));	// 26950 mov     ax, [bp+arg_E] ;~ 0B93:419B
cs=0xb93;eip=0x00419e; 	T(MOV(cx, si));	// 26951 mov     cx, si ;~ 0B93:419E
cs=0xb93;eip=0x0041a0; 	T(MOV(dx, cx));	// 26952 mov     dx, cx ;~ 0B93:41A0
cs=0xb93;eip=0x0041a2; 	T(SHL(cx, 1));	// 26953 shl     cx, 1 ;~ 0B93:41A2
cs=0xb93;eip=0x0041a4; 	T(ADD(cx, dx));	// 26954 add     cx, dx ;~ 0B93:41A4
cs=0xb93;eip=0x0041a6; 	T(SHL(cx, 1));	// 26955 shl     cx, 1 ;~ 0B93:41A6
cs=0xb93;eip=0x0041a8; 	T(ADD(ax, cx));	// 26956 add     ax, cx ;~ 0B93:41A8
cs=0xb93;eip=0x0041aa; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), ax));	// 26957 mov     [bp+var_42], ax ;~ 0B93:41AA
cs=0xb93;eip=0x0041ad; 	T(MOV(bx, ax));	// 26958 mov     bx, ax ;~ 0B93:41AD
cs=0xb93;eip=0x0041af; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 26959 mov     ax, [bx] ;~ 0B93:41AF
cs=0xb93;eip=0x0041b1; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 26960 sub     ax, [bp+arg_0] ;~ 0B93:41B1
cs=0xb93;eip=0x0041b4; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), ax));	// 26961 mov     [bp+var_36], ax ;~ 0B93:41B4
cs=0xb93;eip=0x0041b7; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 26962 mov     ax, [bx+2] ;~ 0B93:41B7
cs=0xb93;eip=0x0041ba; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 26963 sub     ax, [bp+arg_2] ;~ 0B93:41BA
cs=0xb93;eip=0x0041bd; 	X(MOV(*(dw*)(raddr(ss,bp+var_34)), ax));	// 26964 mov     [bp+var_34], ax ;~ 0B93:41BD
cs=0xb93;eip=0x0041c0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 26965 mov     ax, [bx+4] ;~ 0B93:41C0
cs=0xb93;eip=0x0041c3; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 26966 sub     ax, [bp+arg_4] ;~ 0B93:41C3
cs=0xb93;eip=0x0041c6; 	X(MOV(*(dw*)(raddr(ss,bp+var_32)), ax));	// 26967 mov     [bp+var_32], ax ;~ 0B93:41C6
cs=0xb93;eip=0x0041c9; 	T(ax = bp+var_40);	// 26968 lea     ax, [bp+var_40] ;~ 0B93:41C9
cs=0xb93;eip=0x0041cc; 	X(PUSH(ax));	// 26969 push    ax ;~ 0B93:41CC
cs=0xb93;eip=0x0041cd; 	T(MOV(ax, offset(dseg,mat_temp)));	// 26970 mov     ax, offset mat_temp ;~ 0B93:41CD
cs=0xb93;eip=0x0041d0; 	X(PUSH(ax));	// 26971 push    ax ;~ 0B93:41D0
cs=0xb93;eip=0x0041d1; 	T(ax = bp+var_36);	// 26972 lea     ax, [bp+var_36] ;~ 0B93:41D1
cs=0xb93;eip=0x0041d4; 	X(PUSH(ax));	// 26973 push    ax ;~ 0B93:41D4
cs=0xb93;eip=0x0041d5; 	J(CALLF(mat_mul_vector,0));	// 26974 call    mat_mul_vector ;~ 0B93:41D5
cs=0xb93;eip=0x0041da; 	T(ADD(sp, 6));	// 26975 add     sp, 6 ;~ 0B93:41DA
cs=0xb93;eip=0x0041dd; 	T(CMP(*(dw*)(raddr(ss,bp+var_3c)), 0x0C8));	// 26976 cmp     [bp+var_3C], 0C8h ; 'È' ;~ 0B93:41DD
cs=0xb93;eip=0x0041e2; 	J(JLE(loc_1e157));	// 26977 jle     short loc_1E157 ;~ 0B93:41E2
cs=0xb93;eip=0x0041e4; 	T(ax = bp+var_3a);	// 26978 lea     ax, [bp+var_3A] ;~ 0B93:41E4
cs=0xb93;eip=0x0041e7; 	X(PUSH(ax));	// 26979 push    ax ;~ 0B93:41E7
cs=0xb93;eip=0x0041e8; 	T(ax = bp+var_40);	// 26980 lea     ax, [bp+var_40] ;~ 0B93:41E8
cs=0xb93;eip=0x0041eb; 	X(PUSH(ax));	// 26981 push    ax ;~ 0B93:41EB
cs=0xb93;eip=0x0041ec; 	J(CALLF(vector_to_point,0));	// 26982 call    vector_to_point ;~ 0B93:41EC
cs=0xb93;eip=0x0041f1; 	T(ADD(sp, 4));	// 26983 add     sp, 4 ;~ 0B93:41F1
cs=0xb93;eip=0x0041f4; 	X(PUSH(intro_colorvalue));	// 26984 push    intro_colorvalue ;~ 0B93:41F4
cs=0xb93;eip=0x0041f8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 26985 push    [bp+var_38] ;~ 0B93:41F8
cs=0xb93;eip=0x0041fb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 26986 push    [bp+var_3A] ;~ 0B93:41FB
cs=0xb93;eip=0x0041fe; 	J(CALLF(putpixel_single_maybe,0));	// 26987 call    putpixel_single_maybe ;~ 0B93:41FE
cs=0xb93;eip=0x004203; 	T(ADD(sp, 6));	// 26988 add     sp, 6 ;~ 0B93:4203
cs=0xb93;eip=0x004206; 	T(CMP(timertestflag_copy, 0));	// 26989 cmp     timertestflag_copy, 0 ;~ 0B93:4206
cs=0xb93;eip=0x00420b; 	J(JZ(loc_1e144));	// 26990 jz      short loc_1E144 ;~ 0B93:420B
cs=0xb93;eip=0x00420d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_10))));	// 26991 mov     bx, [bp+arg_10] ;~ 0B93:420D
cs=0xb93;eip=0x004210; 	T(MOV(ax, di));	// 26992 mov     ax, di ;~ 0B93:4210
cs=0xb93;eip=0x004212; 	T(INC(di));	// 26993 inc     di ;~ 0B93:4212
cs=0xb93;eip=0x004213; 	T(SHL(ax, 1));	// 26994 shl     ax, 1 ;~ 0B93:4213
cs=0xb93;eip=0x004215; 	T(SHL(ax, 1));	// 26995 shl     ax, 1 ;~ 0B93:4215
cs=0xb93;eip=0x004217; 	T(ADD(bx, ax));	// 26996 add     bx, ax ;~ 0B93:4217
cs=0xb93;eip=0x004219; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3a))));	// 26997 mov     ax, [bp+var_3A] ;~ 0B93:4219
cs=0xb93;eip=0x00421c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_38))));	// 26998 mov     dx, [bp+var_38] ;~ 0B93:421C
cs=0xb93;eip=0x00421f; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 26999 mov     [bx], ax ;~ 0B93:421F
cs=0xb93;eip=0x004221; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 27000 mov     [bx+2], dx ;~ 0B93:4221
cs=0xb93;eip=0x004224; 	T(ax = bp+var_24);	// 27001 lea     ax, [bp+var_24] ;~ 0B93:4224
cs=0xb93;eip=0x004227; 	X(PUSH(ax));	// 27002 push    ax ;~ 0B93:4227
cs=0xb93;eip=0x004228; 	T(ax = bp+var_3a);	// 27003 lea     ax, [bp+var_3A] ;~ 0B93:4228
cs=0xb93;eip=0x00422b; 	X(PUSH(ax));	// 27004 push    ax ;~ 0B93:422B
cs=0xb93;eip=0x00422c; 	J(CALLF(rect_adjust_from_point,0));	// 27005 call    rect_adjust_from_point ;~ 0B93:422C
cs=0xb93;eip=0x004231; 	T(ADD(sp, 4));	// 27006 add     sp, 4 ;~ 0B93:4231
loc_1e144:
	// 6022 
cs=0xb93;eip=0x004234; 	X(INC(intro_colorvalue));	// 27009 inc     intro_colorvalue ;~ 0B93:4234
cs=0xb93;eip=0x004238; 	T(MOV(ax, word_407cc));	// 27010 mov     ax, word_407CC ;~ 0B93:4238
cs=0xb93;eip=0x00423b; 	T(CMP(intro_colorvalue, ax));	// 27011 cmp     intro_colorvalue, ax ;~ 0B93:423B
cs=0xb93;eip=0x00423f; 	J(JNZ(loc_1e157));	// 27012 jnz     short loc_1E157 ;~ 0B93:423F
cs=0xb93;eip=0x004241; 	X(MOV(intro_colorvalue, 1));	// 27013 mov     intro_colorvalue, 1 ;~ 0B93:4241
loc_1e157:
	// 6023 
cs=0xb93;eip=0x004247; 	T(INC(si));	// 27017 inc     si ;~ 0B93:4247
cs=0xb93;eip=0x004248; 	T(CMP(si, 0x64));	// 27018 cmp     si, 64h ; 'd' ;~ 0B93:4248
cs=0xb93;eip=0x00424b; 	J(JGE(loc_1e160));	// 27019 jge     short loc_1E160 ;~ 0B93:424B
cs=0xb93;eip=0x00424d; 	J(JMP(loc_1e0ab));	// 27020 jmp     loc_1E0AB ;~ 0B93:424D
loc_1e160:
	// 6024 
cs=0xb93;eip=0x004250; 	T(CMP(timertestflag_copy, 0));	// 27024 cmp     timertestflag_copy, 0 ;~ 0B93:4250
cs=0xb93;eip=0x004255; 	J(JZ(loc_1e16c));	// 27025 jz      short loc_1E16C ;~ 0B93:4255
cs=0xb93;eip=0x004257; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_12))));	// 27026 mov     bx, [bp+arg_12] ;~ 0B93:4257
cs=0xb93;eip=0x00425a; 	X(MOV(*(dw*)(raddr(ds,bx)), di));	// 27027 mov     [bx], di ;~ 0B93:425A
loc_1e16c:
	// 6025 
cs=0xb93;eip=0x00425c; 	J(CALLF(get_a_poly_info,0));	// 27030 call    get_a_poly_info ;~ 0B93:425C
cs=0xb93;eip=0x004261; 	T(CMP(timertestflag_copy, 0));	// 27031 cmp     timertestflag_copy, 0 ;~ 0B93:4261
cs=0xb93;eip=0x004266; 	J(JZ(loc_1e19a));	// 27032 jz      short loc_1E19A ;~ 0B93:4266
cs=0xb93;eip=0x004268; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_1c))));	// 27033 mov     bx, [bp+arg_1C] ;~ 0B93:4268
cs=0xb93;eip=0x00426b; 	X(PUSH(si));	// 27034 push    si ;~ 0B93:426B
cs=0xb93;eip=0x00426c; 	X(PUSH(di));	// 27035 push    di ;~ 0B93:426C
cs=0xb93;eip=0x00426d; 	T(MOV(di, bx));	// 27036 mov     di, bx ;~ 0B93:426D
cs=0xb93;eip=0x00426f; 	T(si = bp+var_8);	// 27037 lea     si, [bp+var_8] ;~ 0B93:426F
cs=0xb93;eip=0x004272; 	X(PUSH(ds));	// 27038 push    ds ;~ 0B93:4272
cs=0xb93;eip=0x004273; 	X(POP(es));	// 27039 pop     es ;~ 0B93:4273
cs=0xb93;eip=0x004274; 	X(MOVSW);	// 27041 movsw ;~ 0B93:4274
cs=0xb93;eip=0x004275; 	X(MOVSW);	// 27042 movsw ;~ 0B93:4275
cs=0xb93;eip=0x004276; 	X(MOVSW);	// 27043 movsw ;~ 0B93:4276
cs=0xb93;eip=0x004277; 	X(MOVSW);	// 27044 movsw ;~ 0B93:4277
cs=0xb93;eip=0x004278; 	X(POP(di));	// 27045 pop     di ;~ 0B93:4278
cs=0xb93;eip=0x004279; 	X(POP(si));	// 27046 pop     si ;~ 0B93:4279
cs=0xb93;eip=0x00427a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_1e))));	// 27047 mov     bx, [bp+arg_1E] ;~ 0B93:427A
cs=0xb93;eip=0x00427d; 	X(PUSH(si));	// 27048 push    si ;~ 0B93:427D
cs=0xb93;eip=0x00427e; 	X(PUSH(di));	// 27049 push    di ;~ 0B93:427E
cs=0xb93;eip=0x00427f; 	T(MOV(di, bx));	// 27050 mov     di, bx ;~ 0B93:427F
cs=0xb93;eip=0x004281; 	T(si = bp+var_24);	// 27051 lea     si, [bp+var_24] ;~ 0B93:4281
cs=0xb93;eip=0x004284; 	X(MOVSW);	// 27052 movsw ;~ 0B93:4284
cs=0xb93;eip=0x004285; 	X(MOVSW);	// 27053 movsw ;~ 0B93:4285
cs=0xb93;eip=0x004286; 	X(MOVSW);	// 27054 movsw ;~ 0B93:4286
cs=0xb93;eip=0x004287; 	X(MOVSW);	// 27055 movsw ;~ 0B93:4287
cs=0xb93;eip=0x004288; 	X(POP(di));	// 27056 pop     di ;~ 0B93:4288
cs=0xb93;eip=0x004289; 	X(POP(si));	// 27057 pop     si ;~ 0B93:4289
loc_1e19a:
	// 6026 
cs=0xb93;eip=0x00428a; 	X(POP(si));	// 27060 pop     si ;~ 0B93:428A
cs=0xb93;eip=0x00428b; 	X(POP(di));	// 27061 pop     di ;~ 0B93:428B
cs=0xb93;eip=0x00428c; 	T(MOV(sp, bp));	// 27062 mov     sp, bp ;~ 0B93:428C
cs=0xb93;eip=0x00428e; 	X(POP(bp));	// 27063 pop     bp ;~ 0B93:428E
cs=0xb93;eip=0x00428f; 	J(RETF(0));	// 27064 retf ;~ 0B93:428F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kintro_op: 	goto intro_op;
        case m2c::kloc_1dee4: 	goto loc_1dee4;
        case m2c::kloc_1dee9: 	goto loc_1dee9;
        case m2c::kloc_1df16: 	goto loc_1df16;
        case m2c::kloc_1df1a: 	goto loc_1df1a;
        case m2c::kloc_1df47: 	goto loc_1df47;
        case m2c::kloc_1df50: 	goto loc_1df50;
        case m2c::kloc_1df67: 	goto loc_1df67;
        case m2c::kloc_1df7e: 	goto loc_1df7e;
        case m2c::kloc_1dfa4: 	goto loc_1dfa4;
        case m2c::kloc_1dfa8: 	goto loc_1dfa8;
        case m2c::kloc_1dfcf: 	goto loc_1dfcf;
        case m2c::kloc_1dfd9: 	goto loc_1dfd9;
        case m2c::kloc_1dfe6: 	goto loc_1dfe6;
        case m2c::kloc_1e00c: 	goto loc_1e00c;
        case m2c::kloc_1e013: 	goto loc_1e013;
        case m2c::kloc_1e059: 	goto loc_1e059;
        case m2c::kloc_1e06c: 	goto loc_1e06c;
        case m2c::kloc_1e08f: 	goto loc_1e08f;
        case m2c::kloc_1e0ab: 	goto loc_1e0ab;
        case m2c::kloc_1e144: 	goto loc_1e144;
        case m2c::kloc_1e157: 	goto loc_1e157;
        case m2c::kloc_1e160: 	goto loc_1e160;
        case m2c::kloc_1e16c: 	goto loc_1e16c;
        case m2c::kloc_1e19a: 	goto loc_1e19a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

