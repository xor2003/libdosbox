/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
stuntsmain:
	// 52 
#undef var_12
#define var_12 -0x12
	// 54 var_12          = word ptr -12h ;~ 01A2:0000
#undef var_10
#define var_10 -0x10
	// 55 var_10          = word ptr -10h ;~ 01A2:0000
#undef var_e
#define var_e -0x0E
	// 56 var_E           = word ptr -0Eh ;~ 01A2:0000
#undef var_c
#define var_c -0x0C
	// 57 var_C           = word ptr -0Ch ;~ 01A2:0000
#undef var_a
#define var_a -0x0A
	// 58 var_A           = byte ptr -0Ah ;~ 01A2:0000
#undef trkptr
#define trkptr -4
	// 59 trkptr          = word ptr -4 ;~ 01A2:0000
#undef var_2
#define var_2 -2
	// 60 var_2           = word ptr -2 ;~ 01A2:0000
#undef p_argc
#define p_argc 6
	// 61 p_argc          = word ptr  6 ;~ 01A2:0000
#undef arg_2
#define arg_2 8
	// 62 arg_2           = word ptr  8 ;~ 01A2:0000
#undef p_argv
#define p_argv 0x0A
	// 63 p_argv          = byte ptr  0Ah ;~ 01A2:0000
#undef envp
#define envp 0x0E
	// 64 envp            = byte ptr  0Eh ;~ 01A2:0000
ret_1a2_0:
	// 4369 
cs=0x1a2;eip=0x000000; 	X(PUSH(bp));	// 66 push    bp ;~ 01A2:0000
cs=0x1a2;eip=0x000001; 	T(MOV(bp, sp));	// 67 mov     bp, sp ;~ 01A2:0001
cs=0x1a2;eip=0x000003; 	T(SUB(sp, 0x12));	// 68 sub     sp, 12h ;~ 01A2:0003
cs=0x1a2;eip=0x000006; 	X(PUSH(di));	// 69 push    di ;~ 01A2:0006
cs=0x1a2;eip=0x000007; 	X(PUSH(si));	// 70 push    si              ; char * ;~ 01A2:0007
cs=0x1a2;eip=0x000008; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 71 push    [bp+arg_2] ;~ 01A2:0008
cs=0x1a2;eip=0x00000b; 	X(PUSH(*(dw*)(raddr(ss,bp+p_argc))));	// 72 push    [bp+p_argc] ;~ 01A2:000B
cs=0x1a2;eip=0x00000e; 	R(CALLF(init_main,0));	// 73 call    init_main ;~ 01A2:000E
cs=0x1a2;eip=0x000013; 	T(ADD(sp, 4));	// 74 add     sp, 4 ;~ 01A2:0013
cs=0x1a2;eip=0x000016; 	R(CALLF(init_div0,0));	// 75 call    init_div0 ;~ 01A2:0016
cs=0x1a2;eip=0x00001b; 	T(SUB(si, si));	// 76 sub     si, si ;~ 01A2:001B
loc_1001d:
	// 4370 
cs=0x1a2;eip=0x00001d; 	T(MOV(ax, si));	// 79 mov     ax, si ;~ 01A2:001D
cs=0x1a2;eip=0x00001f; 	T(SHL(ax, 1));	// 80 shl     ax, 1 ;~ 01A2:001F
cs=0x1a2;eip=0x000021; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 81 mov     [bp+var_C], ax ;~ 01A2:0021
cs=0x1a2;eip=0x000024; 	T(MOV(ax, 0x1D));	// 82 mov     ax, 1Dh ;~ 01A2:0024
cs=0x1a2;eip=0x000027; 	T(SUB(ax, si));	// 83 sub     ax, si ;~ 01A2:0027
cs=0x1a2;eip=0x000029; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 84 mov     [bp+var_E], ax ;~ 01A2:0029
cs=0x1a2;eip=0x00002c; 	T(MOV(ax, 0x1E));	// 85 mov     ax, 1Eh ;~ 01A2:002C
cs=0x1a2;eip=0x00002f; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_e))));	// 86 imul    [bp+var_E] ;~ 01A2:002F
cs=0x1a2;eip=0x000032; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 87 mov     bx, [bp+var_C] ;~ 01A2:0032
cs=0x1a2;eip=0x000035; 	X(MOV(*(dw*)(((db*)trackrows)+bx), ax));	// 88 mov     trackrows[bx], ax ;~ 01A2:0035
cs=0x1a2;eip=0x000039; 	T(MOV(ax, 0x1E));	// 89 mov     ax, 1Eh ;~ 01A2:0039
cs=0x1a2;eip=0x00003c; 	T(IMUL1_2(si));	// 90 imul    si ;~ 01A2:003C
cs=0x1a2;eip=0x00003e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 91 mov     bx, [bp+var_C] ;~ 01A2:003E
cs=0x1a2;eip=0x000041; 	X(MOV(*(dw*)(((db*)terrainrows)+bx), ax));	// 92 mov     terrainrows[bx], ax ;~ 01A2:0041
cs=0x1a2;eip=0x000045; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 93 mov     ax, [bp+var_E] ;~ 01A2:0045
cs=0x1a2;eip=0x000048; 	T(MOV(cl, 0x0A));	// 94 mov     cl, 0Ah ;~ 01A2:0048
cs=0x1a2;eip=0x00004a; 	T(SHL(ax, cl));	// 95 shl     ax, cl          ; *1024, or tile length ;~ 01A2:004A
cs=0x1a2;eip=0x00004c; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 96 mov     [bp+var_10], ax ;~ 01A2:004C
cs=0x1a2;eip=0x00004f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 97 mov     bx, [bp+var_C] ;~ 01A2:004F
cs=0x1a2;eip=0x000052; 	X(MOV(*(dw*)(((db*)&trackpos)+bx), ax));	// 98 mov     trackpos[bx], ax ;~ 01A2:0052
cs=0x1a2;eip=0x000056; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 99 mov     bx, [bp+var_C] ;~ 01A2:0056
cs=0x1a2;eip=0x000059; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 100 mov     ax, [bp+var_10] ;~ 01A2:0059
cs=0x1a2;eip=0x00005c; 	T(ADD(ah, 2));	// 101 add     ah, 2 ;~ 01A2:005C
cs=0x1a2;eip=0x00005f; 	X(MOV(*(dw*)(((db*)trackcenterpos)+bx), ax));	// 102 mov     trackcenterpos[bx], ax ;~ 01A2:005F
cs=0x1a2;eip=0x000063; 	T(MOV(ax, si));	// 103 mov     ax, si ;~ 01A2:0063
cs=0x1a2;eip=0x000065; 	T(SHL(ax, cl));	// 104 shl     ax, cl ;~ 01A2:0065
cs=0x1a2;eip=0x000067; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 105 mov     [bp+var_12], ax ;~ 01A2:0067
cs=0x1a2;eip=0x00006a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 106 mov     bx, [bp+var_C] ;~ 01A2:006A
cs=0x1a2;eip=0x00006d; 	X(MOV(*(dw*)(((db*)terrainpos)+bx), ax));	// 107 mov     terrainpos[bx], ax ;~ 01A2:006D
cs=0x1a2;eip=0x000071; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 108 mov     bx, [bp+var_C] ;~ 01A2:0071
cs=0x1a2;eip=0x000074; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 109 mov     ax, [bp+var_12] ;~ 01A2:0074
cs=0x1a2;eip=0x000077; 	T(ADD(ah, 2));	// 110 add     ah, 2 ;~ 01A2:0077
cs=0x1a2;eip=0x00007a; 	X(MOV(*(dw*)(((db*)terraincenterpos)+bx), ax));	// 111 mov     terraincenterpos[bx], ax ;~ 01A2:007A
cs=0x1a2;eip=0x00007e; 	T(INC(si));	// 112 inc     si ;~ 01A2:007E
cs=0x1a2;eip=0x00007f; 	T(CMP(si, 0x1E));	// 113 cmp     si, 1Eh ;~ 01A2:007F
cs=0x1a2;eip=0x000082; 	R(JL(loc_1001d));	// 114 jl      short loc_1001D ;~ 01A2:0082
cs=0x1a2;eip=0x000084; 	T(SUB(si, si));	// 115 sub     si, si ;~ 01A2:0084
loc_10086:
	// 4371 
cs=0x1a2;eip=0x000086; 	T(MOV(ax, si));	// 118 mov     ax, si ;~ 01A2:0086
cs=0x1a2;eip=0x000088; 	T(SHL(ax, 1));	// 119 shl     ax, 1 ;~ 01A2:0088
cs=0x1a2;eip=0x00008a; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 120 mov     [bp+var_12], ax ;~ 01A2:008A
cs=0x1a2;eip=0x00008d; 	T(MOV(bx, ax));	// 121 mov     bx, ax ;~ 01A2:008D
cs=0x1a2;eip=0x00008f; 	T(MOV(ax, si));	// 122 mov     ax, si ;~ 01A2:008F
cs=0x1a2;eip=0x000091; 	T(MOV(cl, 0x0A));	// 123 mov     cl, 0Ah ;~ 01A2:0091
cs=0x1a2;eip=0x000093; 	T(SHL(ax, cl));	// 124 shl     ax, cl ;~ 01A2:0093
cs=0x1a2;eip=0x000095; 	X(MOV(*(dw*)(((db*)trackpos2)+bx), ax));	// 125 mov     trackpos2[bx], ax ;~ 01A2:0095
cs=0x1a2;eip=0x000099; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12))));	// 126 mov     bx, [bp+var_12] ;~ 01A2:0099
cs=0x1a2;eip=0x00009c; 	T(MOV(ax, si));	// 127 mov     ax, si ;~ 01A2:009C
cs=0x1a2;eip=0x00009e; 	T(SHL(ax, cl));	// 128 shl     ax, cl ;~ 01A2:009E
cs=0x1a2;eip=0x0000a0; 	T(ADD(ah, 2));	// 129 add     ah, 2 ;~ 01A2:00A0
cs=0x1a2;eip=0x0000a3; 	X(MOV(*(dw*)(((db*)trackcenterpos2)+bx), ax));	// 130 mov     trackcenterpos2[bx], ax ;~ 01A2:00A3
cs=0x1a2;eip=0x0000a7; 	T(INC(si));	// 131 inc     si ;~ 01A2:00A7
cs=0x1a2;eip=0x0000a8; 	T(CMP(si, 0x1E));	// 132 cmp     si, 1Eh ;~ 01A2:00A8
cs=0x1a2;eip=0x0000ab; 	R(JL(loc_10086));	// 133 jl      short loc_10086 ;~ 01A2:00AB
cs=0x1a2;eip=0x0000ad; 	T(MOV(ax, offset(dseg,amain)));	// 134 mov     ax, offset aMain ; "main" ;~ 01A2:00AD
cs=0x1a2;eip=0x0000b0; 	X(PUSH(ax));	// 135 push    ax ;~ 01A2:00B0
cs=0x1a2;eip=0x0000b1; 	R(CALLF(file_load_resfile,0));	// 136 call    file_load_resfile ;~ 01A2:00B1
cs=0x1a2;eip=0x0000b6; 	T(ADD(sp, 2));	// 137 add     sp, 2 ;~ 01A2:00B6
cs=0x1a2;eip=0x0000b9; 	X(MOV(mainresptr, ax));	// 138 mov     mainresptr, ax ;~ 01A2:00B9
cs=0x1a2;eip=0x0000bc; 	X(MOV(word_44cee, dx));	// 139 mov     word_44CEE, dx ;~ 01A2:00BC
cs=0x1a2;eip=0x0000c0; 	T(MOV(ax, offset(dseg,afontdef_fnt)));	// 140 mov     ax, offset aFontdef_fnt ; "fontdef.fnt" ;~ 01A2:00C0
cs=0x1a2;eip=0x0000c3; 	X(PUSH(ax));	// 141 push    ax              ; char * ;~ 01A2:00C3
cs=0x1a2;eip=0x0000c4; 	T(SUB(ax, ax));	// 142 sub     ax, ax ;~ 01A2:00C4
cs=0x1a2;eip=0x0000c6; 	X(PUSH(ax));	// 143 push    ax              ; int ;~ 01A2:00C6
cs=0x1a2;eip=0x0000c7; 	R(CALLF(file_load_resource,0));	// 144 call    file_load_resource ; type 0 = binary file ;~ 01A2:00C7
cs=0x1a2;eip=0x0000cc; 	T(ADD(sp, 4));	// 145 add     sp, 4 ;~ 01A2:00CC
cs=0x1a2;eip=0x0000cf; 	X(MOV(fontdefptr, ax));	// 146 mov     fontdefptr, ax ;~ 01A2:00CF
cs=0x1a2;eip=0x0000d2; 	X(MOV(word_454c8, dx));	// 147 mov     word_454C8, dx ;~ 01A2:00D2
cs=0x1a2;eip=0x0000d6; 	T(MOV(ax, offset(dseg,afontn_fnt)));	// 148 mov     ax, offset aFontn_fnt ; "fontn.fnt" ;~ 01A2:00D6
cs=0x1a2;eip=0x0000d9; 	X(PUSH(ax));	// 149 push    ax              ; char * ;~ 01A2:00D9
cs=0x1a2;eip=0x0000da; 	T(SUB(ax, ax));	// 150 sub     ax, ax ;~ 01A2:00DA
cs=0x1a2;eip=0x0000dc; 	X(PUSH(ax));	// 151 push    ax              ; int ;~ 01A2:00DC
cs=0x1a2;eip=0x0000dd; 	R(CALLF(file_load_resource,0));	// 152 call    file_load_resource ;~ 01A2:00DD
cs=0x1a2;eip=0x0000e2; 	T(ADD(sp, 4));	// 153 add     sp, 4 ;~ 01A2:00E2
cs=0x1a2;eip=0x0000e5; 	X(MOV(fontnptr, ax));	// 154 mov     fontnptr, ax ;~ 01A2:00E5
cs=0x1a2;eip=0x0000e8; 	X(MOV(word_44d24, dx));	// 155 mov     word_44D24, dx ;~ 01A2:00E8
cs=0x1a2;eip=0x0000ec; 	R(CALLF(font_set_fontdef,0));	// 156 call    font_set_fontdef ;~ 01A2:00EC
cs=0x1a2;eip=0x0000f1; 	R(CALLF(init_polyinfo,0));	// 157 call    init_polyinfo ;~ 01A2:00F1
cs=0x1a2;eip=0x0000f6; 	T(MOV(si, 0x6BF3));	// 158 mov     si, 6BF3h       ; bytes to allocate ;~ 01A2:00F6
cs=0x1a2;eip=0x0000f9; 	T(MOV(ax, si));	// 159 mov     ax, si ;~ 01A2:00F9
cs=0x1a2;eip=0x0000fb; 	T(CWD);	// 160 cwd ;~ 01A2:00FB
cs=0x1a2;eip=0x0000fc; 	X(PUSH(dx));	// 161 push    dx ;~ 01A2:00FC
cs=0x1a2;eip=0x0000fd; 	X(PUSH(ax));	// 162 push    ax ;~ 01A2:00FD
cs=0x1a2;eip=0x0000fe; 	T(MOV(ax, offset(dseg,atrakdata)));	// 163 mov     ax, offset aTrakdata ; "trakdata" ;~ 01A2:00FE
cs=0x1a2;eip=0x000101; 	X(PUSH(ax));	// 164 push    ax ;~ 01A2:0101
cs=0x1a2;eip=0x000102; 	R(CALLF(mmgr_alloc_resbytes,0));	// 165 call    mmgr_alloc_resbytes ;~ 01A2:0102
cs=0x1a2;eip=0x000107; 	T(ADD(sp, 6));	// 166 add     sp, 6 ;~ 01A2:0107
cs=0x1a2;eip=0x00010a; 	X(MOV(*(dw*)(raddr(ss,bp+trkptr)), ax));	// 167 mov     [bp+trkptr], ax ;~ 01A2:010A
cs=0x1a2;eip=0x00010d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 168 mov     [bp+var_2], dx ;~ 01A2:010D
cs=0x1a2;eip=0x000110; 	X(MOV(*(dw*)(((db*)&td01_track_file_cpy)), ax));	// 169 mov     word ptr td01_track_file_cpy, ax ;~ 01A2:0110
cs=0x1a2;eip=0x000113; 	X(MOV(*(dw*)(((db*)&td01_track_file_cpy)+2), dx));	// 170 mov     word ptr td01_track_file_cpy+2, dx ;~ 01A2:0113
cs=0x1a2;eip=0x000117; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x70A));	// 171 add     [bp+trkptr], 70Ah ; 1802, size of a track file ;~ 01A2:0117
cs=0x1a2;eip=0x00011c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 172 mov     ax, [bp+trkptr] ;~ 01A2:011C
cs=0x1a2;eip=0x00011f; 	X(MOV(*(dw*)(((db*)&td02_penalty_related)), ax));	// 173 mov     word ptr td02_penalty_related, ax ;~ 01A2:011F
cs=0x1a2;eip=0x000122; 	X(MOV(*(dw*)(((db*)&td02_penalty_related)+2), dx));	// 174 mov     word ptr td02_penalty_related+2, dx ;~ 01A2:0122
cs=0x1a2;eip=0x000126; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x70A));	// 175 add     [bp+trkptr], 70Ah ;~ 01A2:0126
cs=0x1a2;eip=0x00012b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 176 mov     ax, [bp+trkptr] ;~ 01A2:012B
cs=0x1a2;eip=0x00012e; 	X(MOV(*(dw*)(((db*)&trackdata3)), ax));	// 177 mov     word ptr trackdata3, ax ;~ 01A2:012E
cs=0x1a2;eip=0x000131; 	X(MOV(*(dw*)(((db*)&trackdata3)+2), dx));	// 178 mov     word ptr trackdata3+2, dx ;~ 01A2:0131
cs=0x1a2;eip=0x000135; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x70A));	// 179 add     [bp+trkptr], 70Ah ;~ 01A2:0135
cs=0x1a2;eip=0x00013a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 180 mov     ax, [bp+trkptr] ;~ 01A2:013A
cs=0x1a2;eip=0x00013d; 	X(MOV(*(dw*)(((db*)&td04_aerotable_pl)), ax));	// 181 mov     word ptr td04_aerotable_pl, ax ;~ 01A2:013D
cs=0x1a2;eip=0x000140; 	X(MOV(*(dw*)(((db*)&td04_aerotable_pl)+2), dx));	// 182 mov     word ptr td04_aerotable_pl+2, dx ;~ 01A2:0140
cs=0x1a2;eip=0x000144; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x80));	// 183 add     [bp+trkptr], 80h ;~ 01A2:0144
cs=0x1a2;eip=0x000149; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 184 mov     ax, [bp+trkptr] ;~ 01A2:0149
cs=0x1a2;eip=0x00014c; 	X(MOV(*(dw*)(((db*)&td05_aerotable_op)), ax));	// 185 mov     word ptr td05_aerotable_op, ax ;~ 01A2:014C
cs=0x1a2;eip=0x00014f; 	X(MOV(*(dw*)(((db*)&td05_aerotable_op)+2), dx));	// 186 mov     word ptr td05_aerotable_op+2, dx ;~ 01A2:014F
cs=0x1a2;eip=0x000153; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x80));	// 187 add     [bp+trkptr], 80h ;~ 01A2:0153
cs=0x1a2;eip=0x000158; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 188 mov     ax, [bp+trkptr] ;~ 01A2:0158
cs=0x1a2;eip=0x00015b; 	X(MOV(trackdata6, ax));	// 189 mov     trackdata6, ax ;~ 01A2:015B
cs=0x1a2;eip=0x00015e; 	X(MOV(word_454d2, dx));	// 190 mov     word_454D2, dx ;~ 01A2:015E
cs=0x1a2;eip=0x000162; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x80));	// 191 add     [bp+trkptr], 80h ;~ 01A2:0162
cs=0x1a2;eip=0x000167; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 192 mov     ax, [bp+trkptr] ;~ 01A2:0167
cs=0x1a2;eip=0x00016a; 	X(MOV(trackdata7, ax));	// 193 mov     trackdata7, ax ;~ 01A2:016A
cs=0x1a2;eip=0x00016d; 	X(MOV(word_454b6, dx));	// 194 mov     word_454B6, dx ;~ 01A2:016D
cs=0x1a2;eip=0x000171; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x80));	// 195 add     [bp+trkptr], 80h ;~ 01A2:0171
cs=0x1a2;eip=0x000176; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 196 mov     ax, [bp+trkptr] ;~ 01A2:0176
cs=0x1a2;eip=0x000179; 	X(MOV(td08_direction_related, ax));	// 197 mov     td08_direction_related, ax ;~ 01A2:0179
cs=0x1a2;eip=0x00017c; 	X(MOV(word_45db6, dx));	// 198 mov     word_45DB6, dx ;~ 01A2:017C
cs=0x1a2;eip=0x000180; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x60));	// 199 add     [bp+trkptr], 60h ;~ 01A2:0180
cs=0x1a2;eip=0x000184; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 200 mov     ax, [bp+trkptr] ;~ 01A2:0184
cs=0x1a2;eip=0x000187; 	X(MOV(trackdata9, ax));	// 201 mov     trackdata9, ax ;~ 01A2:0187
cs=0x1a2;eip=0x00018a; 	X(MOV(word_449de, dx));	// 202 mov     word_449DE, dx ;~ 01A2:018A
cs=0x1a2;eip=0x00018e; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x180));	// 203 add     [bp+trkptr], 180h ;~ 01A2:018E
cs=0x1a2;eip=0x000193; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 204 mov     ax, [bp+trkptr] ;~ 01A2:0193
cs=0x1a2;eip=0x000196; 	X(MOV(*(dw*)(((db*)&td10_track_check_rel)), ax));	// 205 mov     word ptr td10_track_check_rel, ax ;~ 01A2:0196
cs=0x1a2;eip=0x000199; 	X(MOV(*(dw*)(((db*)&td10_track_check_rel)+2), dx));	// 206 mov     word ptr td10_track_check_rel+2, dx ;~ 01A2:0199
cs=0x1a2;eip=0x00019d; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x120));	// 207 add     [bp+trkptr], 120h ;~ 01A2:019D
cs=0x1a2;eip=0x0001a2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 208 mov     ax, [bp+trkptr] ;~ 01A2:01A2
cs=0x1a2;eip=0x0001a5; 	X(MOV(*(dw*)(((db*)&td11_highscores)), ax));	// 209 mov     word ptr td11_highscores, ax ;~ 01A2:01A5
cs=0x1a2;eip=0x0001a8; 	X(MOV(*(dw*)(((db*)&td11_highscores)+2), dx));	// 210 mov     word ptr td11_highscores+2, dx ;~ 01A2:01A8
cs=0x1a2;eip=0x0001ac; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x16C));	// 211 add     [bp+trkptr], 16Ch ;~ 01A2:01AC
cs=0x1a2;eip=0x0001b1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 212 mov     ax, [bp+trkptr] ;~ 01A2:01B1
cs=0x1a2;eip=0x0001b4; 	X(MOV(*(dw*)(((db*)&trackdata12)), ax));	// 213 mov     word ptr trackdata12, ax ;~ 01A2:01B4
cs=0x1a2;eip=0x0001b7; 	X(MOV(*(dw*)(((db*)&trackdata12)+2), dx));	// 214 mov     word ptr trackdata12+2, dx ;~ 01A2:01B7
cs=0x1a2;eip=0x0001bb; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x0F0));	// 215 add     [bp+trkptr], 0F0h ;~ 01A2:01BB
cs=0x1a2;eip=0x0001c0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 216 mov     ax, [bp+trkptr] ;~ 01A2:01C0
cs=0x1a2;eip=0x0001c3; 	X(MOV(*(dw*)(((db*)&td13_rpl_header)), ax));	// 217 mov     word ptr td13_rpl_header, ax ;~ 01A2:01C3
cs=0x1a2;eip=0x0001c6; 	X(MOV(*(dw*)(((db*)&td13_rpl_header)+2), dx));	// 218 mov     word ptr td13_rpl_header+2, dx ;~ 01A2:01C6
cs=0x1a2;eip=0x0001ca; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x1A));	// 219 add     [bp+trkptr], 1Ah ;~ 01A2:01CA
cs=0x1a2;eip=0x0001ce; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 220 mov     ax, [bp+trkptr] ;~ 01A2:01CE
cs=0x1a2;eip=0x0001d1; 	X(MOV(*(dw*)(((db*)&td14_elem_map_main)), ax));	// 221 mov     word ptr td14_elem_map_main, ax ;~ 01A2:01D1
cs=0x1a2;eip=0x0001d4; 	X(MOV(*(dw*)(((db*)&td14_elem_map_main)+2), dx));	// 222 mov     word ptr td14_elem_map_main+2, dx ;~ 01A2:01D4
cs=0x1a2;eip=0x0001d8; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x385));	// 223 add     [bp+trkptr], 385h ;~ 01A2:01D8
cs=0x1a2;eip=0x0001dd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 224 mov     ax, [bp+trkptr] ;~ 01A2:01DD
cs=0x1a2;eip=0x0001e0; 	X(MOV(*(dw*)(((db*)&td15_terr_map_main)), ax));	// 225 mov     word ptr td15_terr_map_main, ax ;~ 01A2:01E0
cs=0x1a2;eip=0x0001e3; 	X(MOV(*(dw*)(((db*)&td15_terr_map_main)+2), dx));	// 226 mov     word ptr td15_terr_map_main+2, dx ;~ 01A2:01E3
cs=0x1a2;eip=0x0001e7; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x385));	// 227 add     [bp+trkptr], 385h ;~ 01A2:01E7
cs=0x1a2;eip=0x0001ec; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 228 mov     ax, [bp+trkptr] ;~ 01A2:01EC
cs=0x1a2;eip=0x0001ef; 	X(MOV(*(dw*)(((db*)&td16_rpl_buffer)), ax));	// 229 mov     word ptr td16_rpl_buffer, ax ;~ 01A2:01EF
cs=0x1a2;eip=0x0001f2; 	X(MOV(*(dw*)(((db*)&td16_rpl_buffer)+2), dx));	// 230 mov     word ptr td16_rpl_buffer+2, dx ;~ 01A2:01F2
cs=0x1a2;eip=0x0001f6; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x2EE0));	// 231 add     [bp+trkptr], 2EE0h ;~ 01A2:01F6
cs=0x1a2;eip=0x0001fb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 232 mov     ax, [bp+trkptr] ;~ 01A2:01FB
cs=0x1a2;eip=0x0001fe; 	X(MOV(*(dw*)(((db*)&td17_trk_elem_ordered)), ax));	// 233 mov     word ptr td17_trk_elem_ordered, ax ;~ 01A2:01FE
cs=0x1a2;eip=0x000201; 	X(MOV(*(dw*)(((db*)&td17_trk_elem_ordered)+2), dx));	// 234 mov     word ptr td17_trk_elem_ordered+2, dx ;~ 01A2:0201
cs=0x1a2;eip=0x000205; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x385));	// 235 add     [bp+trkptr], 385h ;~ 01A2:0205
cs=0x1a2;eip=0x00020a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 236 mov     ax, [bp+trkptr] ;~ 01A2:020A
cs=0x1a2;eip=0x00020d; 	X(MOV(*(dw*)(((db*)&trackdata18)), ax));	// 237 mov     word ptr trackdata18, ax ;~ 01A2:020D
cs=0x1a2;eip=0x000210; 	X(MOV(*(dw*)(((db*)&trackdata18)+2), dx));	// 238 mov     word ptr trackdata18+2, dx ;~ 01A2:0210
cs=0x1a2;eip=0x000214; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x385));	// 239 add     [bp+trkptr], 385h ;~ 01A2:0214
cs=0x1a2;eip=0x000219; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 240 mov     ax, [bp+trkptr] ;~ 01A2:0219
cs=0x1a2;eip=0x00021c; 	X(MOV(*(dw*)(((db*)&trackdata19)), ax));	// 241 mov     word ptr trackdata19, ax ;~ 01A2:021C
cs=0x1a2;eip=0x00021f; 	X(MOV(*(dw*)(((db*)&trackdata19)+2), dx));	// 242 mov     word ptr trackdata19+2, dx ;~ 01A2:021F
cs=0x1a2;eip=0x000223; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x385));	// 243 add     [bp+trkptr], 385h ;~ 01A2:0223
cs=0x1a2;eip=0x000228; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 244 mov     ax, [bp+trkptr] ;~ 01A2:0228
cs=0x1a2;eip=0x00022b; 	X(MOV(*(dw*)(((db*)&td20_trk_file_appnd)), ax));	// 245 mov     word ptr td20_trk_file_appnd, ax ;~ 01A2:022B
cs=0x1a2;eip=0x00022e; 	X(MOV(*(dw*)(((db*)&td20_trk_file_appnd)+2), dx));	// 246 mov     word ptr td20_trk_file_appnd+2, dx ;~ 01A2:022E
cs=0x1a2;eip=0x000232; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x7AC));	// 247 add     [bp+trkptr], 7ACh ;~ 01A2:0232
cs=0x1a2;eip=0x000237; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 248 mov     ax, [bp+trkptr] ;~ 01A2:0237
cs=0x1a2;eip=0x00023a; 	X(MOV(*(dw*)(((db*)&td21_col_from_path)), ax));	// 249 mov     word ptr td21_col_from_path, ax ;~ 01A2:023A
cs=0x1a2;eip=0x00023d; 	X(MOV(*(dw*)(((db*)&td21_col_from_path)+2), dx));	// 250 mov     word ptr td21_col_from_path+2, dx ;~ 01A2:023D
cs=0x1a2;eip=0x000241; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x385));	// 251 add     [bp+trkptr], 385h ;~ 01A2:0241
cs=0x1a2;eip=0x000246; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 252 mov     ax, [bp+trkptr] ;~ 01A2:0246
cs=0x1a2;eip=0x000249; 	X(MOV(*(dw*)(((db*)&td22_row_from_path)), ax));	// 253 mov     word ptr td22_row_from_path, ax ;~ 01A2:0249
cs=0x1a2;eip=0x00024c; 	X(MOV(*(dw*)(((db*)&td22_row_from_path)+2), dx));	// 254 mov     word ptr td22_row_from_path+2, dx ;~ 01A2:024C
cs=0x1a2;eip=0x000250; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x385));	// 255 add     [bp+trkptr], 385h ;~ 01A2:0250
cs=0x1a2;eip=0x000255; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 256 mov     ax, [bp+trkptr] ;~ 01A2:0255
cs=0x1a2;eip=0x000258; 	X(MOV(trackdata23, ax));	// 257 mov     trackdata23, ax ;~ 01A2:0258
cs=0x1a2;eip=0x00025b; 	X(MOV(word_463de, dx));	// 258 mov     word_463DE, dx ;~ 01A2:025B
cs=0x1a2;eip=0x00025f; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x30));	// 259 add     [bp+trkptr], 30h ;~ 01A2:025F
cs=0x1a2;eip=0x000263; 	R(CALLF(init_unknown,0));	// 260 call    init_unknown ;~ 01A2:0263
cs=0x1a2;eip=0x000268; 	T(MOV(ax, offset(dseg,akevin)));	// 261 mov     ax, offset aKevin ; "kevin" ;~ 01A2:0268
cs=0x1a2;eip=0x00026b; 	X(PUSH(ax));	// 262 push    ax ;~ 01A2:026B
cs=0x1a2;eip=0x00026c; 	R(CALLF(init_kevinrandom,0));	// 263 call    init_kevinrandom ;~ 01A2:026C
cs=0x1a2;eip=0x000271; 	T(ADD(sp, 2));	// 264 add     sp, 2 ;~ 01A2:0271
cs=0x1a2;eip=0x000274; 	T(MOV(ax, offset(dseg,adefault_0)));	// 265 mov     ax, offset aDefault_0 ; "DEFAULT" ;~ 01A2:0274
cs=0x1a2;eip=0x000277; 	X(PUSH(ax));	// 266 push    ax ;~ 01A2:0277
cs=0x1a2;eip=0x000278; 	T(MOV(ax, offset(dseg,byte_449b1)));	// 267 mov     ax, offset byte_449B1 ;~ 01A2:0278
cs=0x1a2;eip=0x00027b; 	X(PUSH(ax));	// 268 push    ax              ; char * ;~ 01A2:027B
cs=0x1a2;eip=0x00027c; 	R(CALLF(_strcpy,0));	// 269 call    _strcpy ;~ 01A2:027C
cs=0x1a2;eip=0x000281; 	T(ADD(sp, 4));	// 270 add     sp, 4 ;~ 01A2:0281
cs=0x1a2;eip=0x000284; 	T(SUB(si, si));	// 271 sub     si, si ;~ 01A2:0284
cs=0x1a2;eip=0x000286; 	T(MOV(ax, 1));	// 272 mov     ax, 1 ;~ 01A2:0286
cs=0x1a2;eip=0x000289; 	X(PUSH(ax));	// 273 push    ax ;~ 01A2:0289
cs=0x1a2;eip=0x00028a; 	R(CALLF(input_do_checking,0));	// 274 call    input_do_checking ;~ 01A2:028A
cs=0x1a2;eip=0x00028f; 	T(ADD(sp, 2));	// 275 add     sp, 2 ;~ 01A2:028F
cs=0x1a2;eip=0x000292; 	T(MOV(ax, 1));	// 276 mov     ax, 1 ;~ 01A2:0292
cs=0x1a2;eip=0x000295; 	X(PUSH(ax));	// 277 push    ax ;~ 01A2:0295
cs=0x1a2;eip=0x000296; 	R(CALLF(input_do_checking,0));	// 278 call    input_do_checking ;~ 01A2:0296
cs=0x1a2;eip=0x00029b; 	T(ADD(sp, 2));	// 279 add     sp, 2 ;~ 01A2:029B
cs=0x1a2;eip=0x00029e; 	R(CALLF(mouse_draw_opaque_check,0));	// 280 call    mouse_draw_opaque_check ;~ 01A2:029E
cs=0x1a2;eip=0x0002a3; 	X(MOV(kbormouse, 0));	// 281 mov     kbormouse, 0 ;~ 01A2:02A3
cs=0x1a2;eip=0x0002a8; 	X(MOV(passed_security, 1));	// 282 mov     passed_security, 1 ; originally set to 0 - bypasses the copy protection ;~ 01A2:02A8
cs=0x1a2;eip=0x0002ad; 	X(PUSH(cs));	// 283 push    cs ;~ 01A2:02AD
cs=0x1a2;eip=0x0002ae; 	R(CALL(set_default_car,0));	// 284 call    near ptr set_default_car ;~ 01A2:02AE
cs=0x1a2;eip=0x0002b1; 	T(MOV(si, 1));	// 285 mov     si, 1 ;~ 01A2:02B1
cs=0x1a2;eip=0x0002b4; 	R(JMP(_do_intro));	// 286 jmp     _do_intro ;~ 01A2:02B4
ret_1a2_2b7:
	// 4372 
	// 288 nop ;~ 01A2:02B7
_tracks_menu0:
	// 4373 
cs=0x1a2;eip=0x0002b8; 	T(SUB(ax, ax));	// 291 sub     ax, ax ;~ 01A2:02B8
_tracks_menu_ax:
	// 4374 
cs=0x1a2;eip=0x0002ba; 	X(PUSH(ax));	// 294 push    ax ;~ 01A2:02BA
cs=0x1a2;eip=0x0002bb; 	X(PUSH(cs));	// 295 push    cs ;~ 01A2:02BB
cs=0x1a2;eip=0x0002bc; 	R(CALL(run_tracks_menu,0));	// 296 call    near ptr run_tracks_menu ;~ 01A2:02BC
cs=0x1a2;eip=0x0002bf; 	T(ADD(sp, 2));	// 297 add     sp, 2 ;~ 01A2:02BF
cs=0x1a2;eip=0x0002c2; 	R(JMP(_show_menu));	// 298 jmp     _show_menu ;~ 01A2:02C2
ret_1a2_2c5:
	// 4375 
	// 300 nop ;~ 01A2:02C5
_do_opp_menu:
	// 4376 
cs=0x1a2;eip=0x0002c6; 	R(CALLF(check_input,0));	// 303 call    check_input ;~ 01A2:02C6
cs=0x1a2;eip=0x0002cb; 	R(CALLF(show_waiting,0));	// 304 call    show_waiting ;~ 01A2:02CB
cs=0x1a2;eip=0x0002d0; 	X(PUSH(cs));	// 305 push    cs ;~ 01A2:02D0
cs=0x1a2;eip=0x0002d1; 	R(CALL(run_opponent_menu,0));	// 306 call    near ptr run_opponent_menu ;~ 01A2:02D1
cs=0x1a2;eip=0x0002d4; 	R(JMP(_show_menu));	// 307 jmp     _show_menu ;~ 01A2:02D4
ret_1a2_2d7:
	// 4377 
	// 309 nop ;~ 01A2:02D7
_do_option_menu:
	// 4378 
cs=0x1a2;eip=0x0002d8; 	R(CALLF(check_input,0));	// 312 call    check_input ;~ 01A2:02D8
cs=0x1a2;eip=0x0002dd; 	R(CALLF(show_waiting,0));	// 313 call    show_waiting ;~ 01A2:02DD
cs=0x1a2;eip=0x0002e2; 	X(PUSH(cs));	// 314 push    cs ;~ 01A2:02E2
cs=0x1a2;eip=0x0002e3; 	R(CALL(run_option_menu,0));	// 315 call    near ptr run_option_menu ;~ 01A2:02E3
cs=0x1a2;eip=0x0002e6; 	T(OR(al, al));	// 316 or      al, al ;~ 01A2:02E6
cs=0x1a2;eip=0x0002e8; 	R(JNZ(_goto_game1));	// 317 jnz     short _goto_game1 ;~ 01A2:02E8
cs=0x1a2;eip=0x0002ea; 	R(JMP(_show_menu));	// 318 jmp     _show_menu ;~ 01A2:02EA
_goto_game1:
	// 4379 
cs=0x1a2;eip=0x0002ed; 	X(MOV(*(raddr(ss,bp+var_a)), 1));	// 322 mov     [bp+var_A], 1 ;~ 01A2:02ED
cs=0x1a2;eip=0x0002f1; 	R(JMP(_do_game1));	// 323 jmp     short _do_game1 ;~ 01A2:02F1
ret_1a2_2f3:
	// 4380 
	// 325 nop ;~ 01A2:02F3
_do_car_menu:
	// 4381 
cs=0x1a2;eip=0x0002f4; 	R(CALLF(check_input,0));	// 328 call    check_input ;~ 01A2:02F4
cs=0x1a2;eip=0x0002f9; 	R(CALLF(show_waiting,0));	// 329 call    show_waiting ;~ 01A2:02F9
cs=0x1a2;eip=0x0002fe; 	T(SUB(ax, ax));	// 330 sub     ax, ax ;~ 01A2:02FE
cs=0x1a2;eip=0x000300; 	X(PUSH(ax));	// 331 push    ax ;~ 01A2:0300
cs=0x1a2;eip=0x000301; 	T(MOV(ax, offset(dseg,byte_449a9)));	// 332 mov     ax, offset byte_449A9 ;~ 01A2:0301
cs=0x1a2;eip=0x000304; 	X(PUSH(ax));	// 333 push    ax ;~ 01A2:0304
cs=0x1a2;eip=0x000305; 	T(MOV(ax, offset(dseg,byte_449a8)));	// 334 mov     ax, offset byte_449A8 ;~ 01A2:0305
cs=0x1a2;eip=0x000308; 	X(PUSH(ax));	// 335 push    ax ;~ 01A2:0308
cs=0x1a2;eip=0x000309; 	T(MOV(ax, offset(dseg,gameconfig)));	// 336 mov     ax, offset gameconfig ;~ 01A2:0309
cs=0x1a2;eip=0x00030c; 	X(PUSH(ax));	// 337 push    ax ;~ 01A2:030C
cs=0x1a2;eip=0x00030d; 	X(PUSH(cs));	// 338 push    cs ;~ 01A2:030D
cs=0x1a2;eip=0x00030e; 	R(CALL(run_car_menu,0));	// 339 call    near ptr run_car_menu ;~ 01A2:030E
cs=0x1a2;eip=0x000311; 	T(ADD(sp, 8));	// 340 add     sp, 8 ;~ 01A2:0311
cs=0x1a2;eip=0x000314; 	R(JMP(_show_menu));	// 341 jmp     _show_menu ;~ 01A2:0314
ret_1a2_317:
	// 4382 
	// 343 nop ;~ 01A2:0317
_do_game0:
	// 4383 
cs=0x1a2;eip=0x000318; 	X(MOV(*(raddr(ss,bp+var_a)), 0));	// 346 mov     [bp+var_A], 0 ;~ 01A2:0318
_do_game1:
	// 4384 
cs=0x1a2;eip=0x00031c; 	X(PUSH(si));	// 349 push    si ;~ 01A2:031C
cs=0x1a2;eip=0x00031d; 	X(PUSH(di));	// 350 push    di ;~ 01A2:031D
cs=0x1a2;eip=0x00031e; 	T(MOV(di, offset(dseg,gameconfigcopy)));	// 351 mov     di, offset gameconfigcopy ;~ 01A2:031E
cs=0x1a2;eip=0x000321; 	T(MOV(si, offset(dseg,gameconfig)));	// 352 mov     si, offset gameconfig ;~ 01A2:0321
cs=0x1a2;eip=0x000324; 	X(PUSH(ds));	// 353 push    ds ;~ 01A2:0324
cs=0x1a2;eip=0x000325; 	X(POP(es));	// 354 pop     es ;~ 01A2:0325
cs=0x1a2;eip=0x000326; 	T(MOV(cx, 0x0D));	// 356 mov     cx, 0Dh ;~ 01A2:0326
	// 357 repne movsw ;~ 01A2:0329
cs=0x1a2;eip=0x000329; 	X(	REPNE MOVSW);	// 357 repne movsw ;~ 01A2:0329
cs=0x1a2;eip=0x00032b; 	X(POP(di));	// 358 pop     di ;~ 01A2:032B
cs=0x1a2;eip=0x00032c; 	X(POP(si));	// 359 pop     si ;~ 01A2:032C
cs=0x1a2;eip=0x00032d; 	T(SUB(si, si));	// 360 sub     si, si ;~ 01A2:032D
loc_1032f:
	// 4385 
cs=0x1a2;eip=0x00032f; 	T(LES(bx, td14_elem_map_main));	// 363 les     bx, td14_elem_map_main ;~ 01A2:032F
cs=0x1a2;eip=0x000333; 	T(MOV(al, *(raddr(es,bx+si))));	// 365 mov     al, es:[bx+si] ;~ 01A2:0333
cs=0x1a2;eip=0x000336; 	T(LES(bx, td20_trk_file_appnd));	// 366 les     bx, td20_trk_file_appnd ;~ 01A2:0336
cs=0x1a2;eip=0x00033a; 	X(MOV(*(raddr(es,bx+si)), al));	// 367 mov     es:[bx+si], al ;~ 01A2:033A
cs=0x1a2;eip=0x00033d; 	T(INC(si));	// 368 inc     si ;~ 01A2:033D
cs=0x1a2;eip=0x00033e; 	T(CMP(si, 0x70A));	// 369 cmp     si, 70Ah ;~ 01A2:033E
cs=0x1a2;eip=0x000342; 	R(JL(loc_1032f));	// 370 jl      short loc_1032F ;~ 01A2:0342
cs=0x1a2;eip=0x000344; 	T(SUB(si, si));	// 371 sub     si, si ;~ 01A2:0344
loc_10346:
	// 4386 
cs=0x1a2;eip=0x000346; 	T(LES(bx, td20_trk_file_appnd));	// 374 les     bx, td20_trk_file_appnd ;~ 01A2:0346
cs=0x1a2;eip=0x00034a; 	T(MOV(al, *((byte_3b80c)+si)));	// 375 mov     al, byte_3B80C[si] ;~ 01A2:034A
cs=0x1a2;eip=0x00034e; 	X(MOV(*(raddr(es,bx+si+0x70A)), al));	// 376 mov     es:[bx+si+70Ah], al ;~ 01A2:034E
cs=0x1a2;eip=0x000353; 	T(LES(bx, td20_trk_file_appnd));	// 377 les     bx, td20_trk_file_appnd ;~ 01A2:0353
cs=0x1a2;eip=0x000357; 	T(MOV(al, *((&byte_3b85e)+si)));	// 378 mov     al, byte_3B85E[si] ;~ 01A2:0357
cs=0x1a2;eip=0x00035b; 	X(MOV(*(raddr(es,bx+si+0x75B)), al));	// 379 mov     es:[bx+si+75Bh], al ;~ 01A2:035B
cs=0x1a2;eip=0x000360; 	T(INC(si));	// 380 inc     si ;~ 01A2:0360
cs=0x1a2;eip=0x000361; 	T(CMP(si, 0x51));	// 381 cmp     si, 51h ; 'Q' ;~ 01A2:0361
cs=0x1a2;eip=0x000364; 	R(JL(loc_10346));	// 382 jl      short loc_10346 ;~ 01A2:0364
cs=0x1a2;eip=0x000366; 	T(CMP(idle_expired, 0));	// 383 cmp     idle_expired, 0 ;~ 01A2:0366
cs=0x1a2;eip=0x00036b; 	R(JNZ(_find_tedit));	// 384 jnz     short _find_tedit ;~ 01A2:036B
cs=0x1a2;eip=0x00036d; 	R(CALLF(track_setup,0));	// 385 call    track_setup ;~ 01A2:036D
cs=0x1a2;eip=0x000372; 	T(OR(al, al));	// 386 or      al, al ;~ 01A2:0372
cs=0x1a2;eip=0x000374; 	R(JZ(_sec_check1));	// 387 jz      short _sec_check1 ;~ 01A2:0374
cs=0x1a2;eip=0x000376; 	T(MOV(ax, 1));	// 388 mov     ax, 1 ;~ 01A2:0376
cs=0x1a2;eip=0x000379; 	R(JMP(_tracks_menu_ax));	// 389 jmp     _tracks_menu_ax ;~ 01A2:0379
_sec_check1:
	// 4387 
cs=0x1a2;eip=0x00037c; 	R(CALLF(random_wait,0));	// 393 call    random_wait ;~ 01A2:037C
cs=0x1a2;eip=0x000381; 	T(CMP(passed_security, 0));	// 394 cmp     passed_security, 0 ;~ 01A2:0381
cs=0x1a2;eip=0x000386; 	R(JNZ(_init_replay));	// 395 jnz     short _init_replay ;~ 01A2:0386
cs=0x1a2;eip=0x000388; 	R(CALLF(get_super_random,0));	// 396 call    get_super_random ;~ 01A2:0388
cs=0x1a2;eip=0x00038d; 	T(CWD);	// 397 cwd ;~ 01A2:038D
cs=0x1a2;eip=0x00038e; 	T(MOV(cx, 0x14));	// 398 mov     cx, 14h ;~ 01A2:038E
cs=0x1a2;eip=0x000391; 	T(IDIV2(cx));	// 399 idiv    cx ;~ 01A2:0391
cs=0x1a2;eip=0x000393; 	T(MOV(ax, dx));	// 400 mov     ax, dx ;~ 01A2:0393
cs=0x1a2;eip=0x000395; 	T(CBW);	// 401 cbw ;~ 01A2:0395
cs=0x1a2;eip=0x000396; 	X(PUSH(ax));	// 402 push    ax ;~ 01A2:0396
cs=0x1a2;eip=0x000397; 	X(PUSH(cs));	// 403 push    cs ;~ 01A2:0397
cs=0x1a2;eip=0x000398; 	R(CALL(security_check,0));	// 404 call    near ptr security_check ;~ 01A2:0398
cs=0x1a2;eip=0x00039b; 	T(ADD(sp, 2));	// 405 add     sp, 2 ;~ 01A2:039B
_init_replay:
	// 4388 
cs=0x1a2;eip=0x00039e; 	R(CALLF(audio_unload,0));	// 409 call    audio_unload ;~ 01A2:039E
cs=0x1a2;eip=0x0003a3; 	T(MOV(ax, 0x5780));	// 410 mov     ax, 5780h       ; size to allocate, 20*1120 ;~ 01A2:03A3
cs=0x1a2;eip=0x0003a6; 	T(CWD);	// 411 cwd ;~ 01A2:03A6
cs=0x1a2;eip=0x0003a7; 	X(PUSH(dx));	// 412 push    dx ;~ 01A2:03A7
cs=0x1a2;eip=0x0003a8; 	X(PUSH(ax));	// 413 push    ax ;~ 01A2:03A8
cs=0x1a2;eip=0x0003a9; 	T(MOV(ax, offset(dseg,acvx)));	// 414 mov     ax, offset aCvx ; "cvx" ;~ 01A2:03A9
cs=0x1a2;eip=0x0003ac; 	X(PUSH(ax));	// 415 push    ax ;~ 01A2:03AC
cs=0x1a2;eip=0x0003ad; 	R(CALLF(mmgr_alloc_resbytes,0));	// 416 call    mmgr_alloc_resbytes ;~ 01A2:03AD
cs=0x1a2;eip=0x0003b2; 	T(ADD(sp, 6));	// 417 add     sp, 6 ;~ 01A2:03B2
cs=0x1a2;eip=0x0003b5; 	X(MOV(cvxptr, ax));	// 418 mov     cvxptr, ax ;~ 01A2:03B5
cs=0x1a2;eip=0x0003b8; 	X(MOV(word_45a22, dx));	// 419 mov     word_45A22, dx ;~ 01A2:03B8
cs=0x1a2;eip=0x0003bc; 	T(MOV(ax, 0x0FFFF));	// 420 mov     ax, 0FFFFh ;~ 01A2:03BC
cs=0x1a2;eip=0x0003bf; 	X(PUSH(ax));	// 421 push    ax ;~ 01A2:03BF
cs=0x1a2;eip=0x0003c0; 	R(CALLF(init_game_state,0));	// 422 call    init_game_state ;~ 01A2:03C0
cs=0x1a2;eip=0x0003c5; 	T(ADD(sp, 2));	// 423 add     sp, 2 ;~ 01A2:03C5
cs=0x1a2;eip=0x0003c8; 	T(CMP(*(raddr(ss,bp+var_a)), 0));	// 424 cmp     [bp+var_A], 0 ;~ 01A2:03C8
cs=0x1a2;eip=0x0003cc; 	R(JNZ(loc_103d1));	// 425 jnz     short loc_103D1 ;~ 01A2:03CC
cs=0x1a2;eip=0x0003ce; 	R(JMP(loc_104a6));	// 426 jmp     loc_104A6 ;~ 01A2:03CE
loc_103d1:
	// 4389 
cs=0x1a2;eip=0x0003d1; 	X(MOV(byte_43966, 0));	// 430 mov     byte_43966, 0 ;~ 01A2:03D1
cs=0x1a2;eip=0x0003d6; 	R(JMP(loc_104ac));	// 431 jmp     loc_104AC ;~ 01A2:03D6
ret_1a2_3d9:
	// 4390 
	// 433 nop ;~ 01A2:03D9
_find_tedit:
	// 4391 
cs=0x1a2;eip=0x0003da; 	T(MOV(ax, offset(dseg,atedit__0)));	// 436 mov     ax, offset aTedit__0 ; "tedit.*" ;~ 01A2:03DA
cs=0x1a2;eip=0x0003dd; 	X(PUSH(ax));	// 437 push    ax ;~ 01A2:03DD
cs=0x1a2;eip=0x0003de; 	R(CALLF(file_find,0));	// 438 call    file_find ;~ 01A2:03DE
cs=0x1a2;eip=0x0003e3; 	T(ADD(sp, 2));	// 439 add     sp, 2 ;~ 01A2:03E3
cs=0x1a2;eip=0x0003e6; 	T(OR(ax, ax));	// 440 or      ax, ax ;~ 01A2:03E6
cs=0x1a2;eip=0x0003e8; 	R(JNZ(_init_replay));	// 441 jnz     short _init_replay ;~ 01A2:03E8
_prepare_intro:
	// 4392 
cs=0x1a2;eip=0x0003ea; 	R(CALLF(audio_unload,0));	// 444 call    audio_unload ;~ 01A2:03EA
_do_intro0:
	// 4393 
cs=0x1a2;eip=0x0003ef; 	T(SUB(si, si));	// 448 sub     si, si ;~ 01A2:03EF
_do_intro:
	// 4394 
cs=0x1a2;eip=0x0003f1; 	T(MOV(ax, 2));	// 451 mov     ax, 2 ;~ 01A2:03F1
cs=0x1a2;eip=0x0003f4; 	X(PUSH(ax));	// 452 push    ax ;~ 01A2:03F4
cs=0x1a2;eip=0x0003f5; 	R(CALLF(ensure_file_exists,0));	// 453 call    ensure_file_exists ;~ 01A2:03F5
cs=0x1a2;eip=0x0003fa; 	T(ADD(sp, 2));	// 454 add     sp, 2 ;~ 01A2:03FA
cs=0x1a2;eip=0x0003fd; 	T(OR(si, si));	// 455 or      si, si ;~ 01A2:03FD
cs=0x1a2;eip=0x0003ff; 	R(JZ(loc_1042d));	// 456 jz      short loc_1042D ;~ 01A2:03FF
cs=0x1a2;eip=0x000401; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 457 mov     ax, offset g_path_buf ;~ 01A2:0401
cs=0x1a2;eip=0x000404; 	X(PUSH(ax));	// 458 push    ax              ; char * ;~ 01A2:0404
cs=0x1a2;eip=0x000405; 	T(MOV(ax, offset(dseg,a_trk)));	// 459 mov     ax, offset a_trk ; ".trk" ;~ 01A2:0405
cs=0x1a2;eip=0x000408; 	X(PUSH(ax));	// 460 push    ax              ; int ;~ 01A2:0408
cs=0x1a2;eip=0x000409; 	T(MOV(ax, offset(dseg,byte_449b1)));	// 461 mov     ax, offset byte_449B1 ;~ 01A2:0409
cs=0x1a2;eip=0x00040c; 	X(PUSH(ax));	// 462 push    ax ;~ 01A2:040C
cs=0x1a2;eip=0x00040d; 	T(MOV(ax, offset(dseg,byte_3b80c)));	// 463 mov     ax, offset byte_3B80C ;~ 01A2:040D
cs=0x1a2;eip=0x000410; 	X(PUSH(ax));	// 464 push    ax              ; char * ;~ 01A2:0410
cs=0x1a2;eip=0x000411; 	R(CALLF(file_build_path,0));	// 465 call    file_build_path ;~ 01A2:0411
cs=0x1a2;eip=0x000416; 	T(ADD(sp, 8));	// 466 add     sp, 8 ;~ 01A2:0416
cs=0x1a2;eip=0x000419; 	X(PUSH(*(dw*)(((db*)&td14_elem_map_main)+2)));	// 467 push    word ptr td14_elem_map_main+2 ;~ 01A2:0419
cs=0x1a2;eip=0x00041d; 	X(PUSH(*(dw*)(((db*)&td14_elem_map_main))));	// 468 push    word ptr td14_elem_map_main ;~ 01A2:041D
cs=0x1a2;eip=0x000421; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 469 mov     ax, offset g_path_buf ;~ 01A2:0421
cs=0x1a2;eip=0x000424; 	X(PUSH(ax));	// 470 push    ax ;~ 01A2:0424
cs=0x1a2;eip=0x000425; 	R(CALLF(file_read_fatal,0));	// 471 call    file_read_fatal ;~ 01A2:0425
cs=0x1a2;eip=0x00042a; 	T(ADD(sp, 6));	// 472 add     sp, 6 ;~ 01A2:042A
loc_1042d:
	// 4395 
cs=0x1a2;eip=0x00042d; 	X(MOV(idle_expired, 0));	// 475 mov     idle_expired, 0 ;~ 01A2:042D
cs=0x1a2;eip=0x000432; 	X(PUSH(cs));	// 476 push    cs ;~ 01A2:0432
cs=0x1a2;eip=0x000433; 	R(CALL(run_intro_looped,0));	// 477 call    near ptr run_intro_looped ;~ 01A2:0433
cs=0x1a2;eip=0x000436; 	T(MOV(di, ax));	// 478 mov     di, ax ;~ 01A2:0436
cs=0x1a2;eip=0x000438; 	T(CMP(di, 0x1B));	// 479 cmp     di, 1Bh ;~ 01A2:0438
cs=0x1a2;eip=0x00043b; 	R(JNZ(_show_menu));	// 480 jnz     short _show_menu ;~ 01A2:043B
cs=0x1a2;eip=0x00043d; 	R(JMP(_ask_dos));	// 481 jmp     _ask_dos ;~ 01A2:043D
_show_menu:
	// 4396 
cs=0x1a2;eip=0x000440; 	T(MOV(ax, 2));	// 486 mov     ax, 2 ;~ 01A2:0440
cs=0x1a2;eip=0x000443; 	X(PUSH(ax));	// 487 push    ax ;~ 01A2:0443
cs=0x1a2;eip=0x000444; 	R(CALLF(ensure_file_exists,0));	// 488 call    ensure_file_exists ;~ 01A2:0444
cs=0x1a2;eip=0x000449; 	T(ADD(sp, 2));	// 489 add     sp, 2 ;~ 01A2:0449
cs=0x1a2;eip=0x00044c; 	T(CMP(is_audioloaded, 0));	// 490 cmp     is_audioloaded, 0 ;~ 01A2:044C
cs=0x1a2;eip=0x000451; 	R(JNZ(loc_10467));	// 491 jnz     short loc_10467 ;~ 01A2:0451
cs=0x1a2;eip=0x000453; 	T(MOV(ax, offset(dseg,aslct)));	// 492 mov     ax, offset aSlct ; "SLCT" ;~ 01A2:0453
cs=0x1a2;eip=0x000456; 	X(PUSH(ax));	// 493 push    ax ;~ 01A2:0456
cs=0x1a2;eip=0x000457; 	T(MOV(ax, offset(dseg,askidms_0)));	// 494 mov     ax, offset aSkidms_0 ; "skidms" ;~ 01A2:0457
cs=0x1a2;eip=0x00045a; 	X(PUSH(ax));	// 495 push    ax ;~ 01A2:045A
cs=0x1a2;eip=0x00045b; 	T(MOV(ax, offset(dseg,askidslct)));	// 496 mov     ax, offset aSkidslct ; "skidslct" ;~ 01A2:045B
cs=0x1a2;eip=0x00045e; 	X(PUSH(ax));	// 497 push    ax              ; char * ;~ 01A2:045E
cs=0x1a2;eip=0x00045f; 	R(CALLF(file_load_audiores,0));	// 498 call    file_load_audiores ;~ 01A2:045F
cs=0x1a2;eip=0x000464; 	T(ADD(sp, 6));	// 499 add     sp, 6 ;~ 01A2:0464
loc_10467:
	// 4397 
cs=0x1a2;eip=0x000467; 	X(PUSH(cs));	// 502 push    cs ;~ 01A2:0467
cs=0x1a2;eip=0x000468; 	R(CALL(run_menu,0));	// 503 call    near ptr run_menu ;~ 01A2:0468
cs=0x1a2;eip=0x00046b; 	T(CBW);	// 504 cbw ;~ 01A2:046B
cs=0x1a2;eip=0x00046c; 	T(CMP(ax, 0x0FFFF));	// 505 cmp     ax, 0FFFFh ;~ 01A2:046C
cs=0x1a2;eip=0x00046f; 	R(JNZ(loc_10474));	// 506 jnz     short loc_10474 ;~ 01A2:046F
cs=0x1a2;eip=0x000471; 	R(JMP(_prepare_intro));	// 507 jmp     _prepare_intro ;~ 01A2:0471
loc_10474:
	// 4398 
cs=0x1a2;eip=0x000474; 	T(OR(ax, ax));	// 511 or      ax, ax ;~ 01A2:0474
cs=0x1a2;eip=0x000476; 	R(JNZ(loc_1047b));	// 512 jnz     short loc_1047B ;~ 01A2:0476
cs=0x1a2;eip=0x000478; 	R(JMP(_do_game0));	// 513 jmp     _do_game0 ;~ 01A2:0478
loc_1047b:
	// 4399 
cs=0x1a2;eip=0x00047b; 	T(CMP(ax, 1));	// 517 cmp     ax, 1 ;~ 01A2:047B
cs=0x1a2;eip=0x00047e; 	R(JNZ(loc_10483));	// 518 jnz     short loc_10483 ;~ 01A2:047E
cs=0x1a2;eip=0x000480; 	R(JMP(_do_car_menu));	// 519 jmp     _do_car_menu ;~ 01A2:0480
loc_10483:
	// 4400 
cs=0x1a2;eip=0x000483; 	T(CMP(ax, 2));	// 523 cmp     ax, 2 ;~ 01A2:0483
cs=0x1a2;eip=0x000486; 	R(JNZ(_do_show_menu));	// 524 jnz     short _do_show_menu ;~ 01A2:0486
cs=0x1a2;eip=0x000488; 	R(JMP(_do_opp_menu));	// 525 jmp     _do_opp_menu ;~ 01A2:0488
_do_show_menu:
	// 4401 
cs=0x1a2;eip=0x00048b; 	T(CMP(ax, 3));	// 529 cmp     ax, 3 ;~ 01A2:048B
cs=0x1a2;eip=0x00048e; 	R(JNZ(loc_10493));	// 530 jnz     short loc_10493 ;~ 01A2:048E
cs=0x1a2;eip=0x000490; 	R(JMP(_tracks_menu0));	// 531 jmp     _tracks_menu0 ;~ 01A2:0490
loc_10493:
	// 4402 
cs=0x1a2;eip=0x000493; 	T(CMP(ax, 4));	// 535 cmp     ax, 4 ;~ 01A2:0493
cs=0x1a2;eip=0x000496; 	R(JNZ(loc_1049b));	// 536 jnz     short loc_1049B ;~ 01A2:0496
cs=0x1a2;eip=0x000498; 	R(JMP(_do_option_menu));	// 537 jmp     _do_option_menu ;~ 01A2:0498
loc_1049b:
	// 4403 
cs=0x1a2;eip=0x00049b; 	R(JMP(_show_menu));	// 541 jmp     short _show_menu ;~ 01A2:049B
ret_1a2_49d:
	// 4404 
	// 543 nop ;~ 01A2:049D
loc_1049e:
	// 4405 
cs=0x1a2;eip=0x00049e; 	X(MOV(byte_43966, 4));	// 546 mov     byte_43966, 4 ;~ 01A2:049E
cs=0x1a2;eip=0x0004a3; 	R(JMP(loc_104ac));	// 547 jmp     short loc_104AC ;~ 01A2:04A3
ret_1a2_4a5:
	// 4406 
	// 549 nop ;~ 01A2:04A5
loc_104a6:
	// 4407 
cs=0x1a2;eip=0x0004a6; 	X(MOV(word_449bc, 0));	// 553 mov     word_449BC, 0 ;~ 01A2:04A6
loc_104ac:
	// 4408 
cs=0x1a2;eip=0x0004ac; 	R(CALLF(show_waiting,0));	// 557 call    show_waiting ;~ 01A2:04AC
cs=0x1a2;eip=0x0004b1; 	R(CALLF(run_game,0));	// 558 call    run_game ;~ 01A2:04B1
cs=0x1a2;eip=0x0004b6; 	T(CMP(idle_expired, 0));	// 559 cmp     idle_expired, 0 ;~ 01A2:04B6
cs=0x1a2;eip=0x0004bb; 	R(JNZ(loc_104d2));	// 560 jnz     short loc_104D2 ;~ 01A2:04BB
cs=0x1a2;eip=0x0004bd; 	T(CMP(byte_43966, 0));	// 561 cmp     byte_43966, 0 ;~ 01A2:04BD
cs=0x1a2;eip=0x0004c2; 	R(JZ(loc_104d2));	// 562 jz      short loc_104D2 ;~ 01A2:04C2
cs=0x1a2;eip=0x0004c4; 	X(PUSH(cs));	// 563 push    cs ;~ 01A2:04C4
cs=0x1a2;eip=0x0004c5; 	R(CALL(end_hiscore,0));	// 564 call    near ptr end_hiscore ;~ 01A2:04C5
cs=0x1a2;eip=0x0004c8; 	T(CBW);	// 565 cbw ;~ 01A2:04C8
cs=0x1a2;eip=0x0004c9; 	T(OR(ax, ax));	// 566 or      ax, ax ;~ 01A2:04C9
cs=0x1a2;eip=0x0004cb; 	R(JZ(loc_1049e));	// 567 jz      short loc_1049E ;~ 01A2:04CB
cs=0x1a2;eip=0x0004cd; 	T(CMP(ax, 1));	// 568 cmp     ax, 1 ;~ 01A2:04CD
cs=0x1a2;eip=0x0004d0; 	R(JZ(loc_104a6));	// 569 jz      short loc_104A6 ;~ 01A2:04D0
loc_104d2:
	// 4409 
cs=0x1a2;eip=0x0004d2; 	X(PUSH(si));	// 573 push    si ;~ 01A2:04D2
cs=0x1a2;eip=0x0004d3; 	X(PUSH(di));	// 574 push    di ;~ 01A2:04D3
cs=0x1a2;eip=0x0004d4; 	T(MOV(di, offset(dseg,gameconfig)));	// 575 mov     di, offset gameconfig ;~ 01A2:04D4
cs=0x1a2;eip=0x0004d7; 	T(MOV(si, offset(dseg,gameconfigcopy)));	// 576 mov     si, offset gameconfigcopy ;~ 01A2:04D7
cs=0x1a2;eip=0x0004da; 	X(PUSH(ds));	// 577 push    ds ;~ 01A2:04DA
cs=0x1a2;eip=0x0004db; 	X(POP(es));	// 578 pop     es ;~ 01A2:04DB
cs=0x1a2;eip=0x0004dc; 	T(MOV(cx, 0x0D));	// 580 mov     cx, 0Dh ;~ 01A2:04DC
	// 581 repne movsw ;~ 01A2:04DF
cs=0x1a2;eip=0x0004df; 	X(	REPNE MOVSW);	// 581 repne movsw ;~ 01A2:04DF
cs=0x1a2;eip=0x0004e1; 	X(POP(di));	// 582 pop     di ;~ 01A2:04E1
cs=0x1a2;eip=0x0004e2; 	X(POP(si));	// 583 pop     si ;~ 01A2:04E2
cs=0x1a2;eip=0x0004e3; 	T(SUB(si, si));	// 584 sub     si, si ;~ 01A2:04E3
loc_104e5:
	// 4410 
cs=0x1a2;eip=0x0004e5; 	T(LES(bx, td20_trk_file_appnd));	// 587 les     bx, td20_trk_file_appnd ;~ 01A2:04E5
cs=0x1a2;eip=0x0004e9; 	T(MOV(al, *(raddr(es,bx+si))));	// 589 mov     al, es:[bx+si] ;~ 01A2:04E9
cs=0x1a2;eip=0x0004ec; 	T(LES(bx, td14_elem_map_main));	// 590 les     bx, td14_elem_map_main ;~ 01A2:04EC
cs=0x1a2;eip=0x0004f0; 	X(MOV(*(raddr(es,bx+si)), al));	// 591 mov     es:[bx+si], al ;~ 01A2:04F0
cs=0x1a2;eip=0x0004f3; 	T(INC(si));	// 592 inc     si ;~ 01A2:04F3
cs=0x1a2;eip=0x0004f4; 	T(CMP(si, 0x70A));	// 593 cmp     si, 70Ah ;~ 01A2:04F4
cs=0x1a2;eip=0x0004f8; 	R(JL(loc_104e5));	// 594 jl      short loc_104E5 ;~ 01A2:04F8
cs=0x1a2;eip=0x0004fa; 	T(SUB(si, si));	// 595 sub     si, si ;~ 01A2:04FA
loc_104fc:
	// 4411 
cs=0x1a2;eip=0x0004fc; 	T(LES(bx, td20_trk_file_appnd));	// 598 les     bx, td20_trk_file_appnd ;~ 01A2:04FC
cs=0x1a2;eip=0x000500; 	T(MOV(al, *(raddr(es,bx+si+0x70A))));	// 599 mov     al, es:[bx+si+70Ah] ;~ 01A2:0500
cs=0x1a2;eip=0x000505; 	X(MOV(*((byte_3b80c)+si), al));	// 600 mov     byte_3B80C[si], al ;~ 01A2:0505
cs=0x1a2;eip=0x000509; 	T(LES(bx, td20_trk_file_appnd));	// 601 les     bx, td20_trk_file_appnd ;~ 01A2:0509
cs=0x1a2;eip=0x00050d; 	T(MOV(al, *(raddr(es,bx+si+0x75B))));	// 602 mov     al, es:[bx+si+75Bh] ;~ 01A2:050D
cs=0x1a2;eip=0x000512; 	X(MOV(*((&byte_3b85e)+si), al));	// 603 mov     byte_3B85E[si], al ;~ 01A2:0512
cs=0x1a2;eip=0x000516; 	T(INC(si));	// 604 inc     si ;~ 01A2:0516
cs=0x1a2;eip=0x000517; 	T(CMP(si, 0x51));	// 605 cmp     si, 51h ; 'Q' ;~ 01A2:0517
cs=0x1a2;eip=0x00051a; 	R(JL(loc_104fc));	// 606 jl      short loc_104FC ;~ 01A2:051A
cs=0x1a2;eip=0x00051c; 	X(PUSH(word_45a22));	// 607 push    word_45A22 ;~ 01A2:051C
cs=0x1a2;eip=0x000520; 	X(PUSH(cvxptr));	// 608 push    cvxptr ;~ 01A2:0520
cs=0x1a2;eip=0x000524; 	R(CALLF(mmgr_release,0));	// 609 call    mmgr_release ;~ 01A2:0524
cs=0x1a2;eip=0x000529; 	T(ADD(sp, 4));	// 610 add     sp, 4 ;~ 01A2:0529
cs=0x1a2;eip=0x00052c; 	T(CMP(idle_expired, 0));	// 611 cmp     idle_expired, 0 ;~ 01A2:052C
cs=0x1a2;eip=0x000531; 	R(JNZ(loc_10536));	// 612 jnz     short loc_10536 ;~ 01A2:0531
cs=0x1a2;eip=0x000533; 	R(JMP(_show_menu));	// 613 jmp     _show_menu ;~ 01A2:0533
loc_10536:
	// 4412 
cs=0x1a2;eip=0x000536; 	R(JMP(_do_intro0));	// 617 jmp     _do_intro0 ;~ 01A2:0536
ret_1a2_539:
	// 4413 
	// 619 nop ;~ 01A2:0539
_ask_dos:
	// 4414 
cs=0x1a2;eip=0x00053a; 	T(SUB(ax, ax));	// 622 sub     ax, ax ;~ 01A2:053A
cs=0x1a2;eip=0x00053c; 	X(PUSH(ax));	// 623 push    ax ;~ 01A2:053C
cs=0x1a2;eip=0x00053d; 	X(PUSH(ax));	// 624 push    ax ;~ 01A2:053D
cs=0x1a2;eip=0x00053e; 	X(PUSH(dialogarg2));	// 625 push    dialogarg2 ;~ 01A2:053E
cs=0x1a2;eip=0x000542; 	T(MOV(ax, 0x0FFFF));	// 626 mov     ax, 0FFFFh ;~ 01A2:0542
cs=0x1a2;eip=0x000545; 	X(PUSH(ax));	// 627 push    ax ;~ 01A2:0545
cs=0x1a2;eip=0x000546; 	X(PUSH(ax));	// 628 push    ax ;~ 01A2:0546
cs=0x1a2;eip=0x000547; 	T(MOV(ax, offset(dseg,ados)));	// 629 mov     ax, offset aDos ; "dos" ;~ 01A2:0547
cs=0x1a2;eip=0x00054a; 	X(PUSH(ax));	// 630 push    ax ;~ 01A2:054A
cs=0x1a2;eip=0x00054b; 	X(PUSH(word_44cee));	// 631 push    word_44CEE ;~ 01A2:054B
cs=0x1a2;eip=0x00054f; 	X(PUSH(mainresptr));	// 632 push    mainresptr ;~ 01A2:054F
cs=0x1a2;eip=0x000553; 	R(CALLF(locate_text_res,0));	// 633 call    locate_text_res ;~ 01A2:0553
cs=0x1a2;eip=0x000558; 	T(ADD(sp, 6));	// 634 add     sp, 6 ;~ 01A2:0558
cs=0x1a2;eip=0x00055b; 	X(PUSH(dx));	// 635 push    dx ;~ 01A2:055B
cs=0x1a2;eip=0x00055c; 	X(PUSH(ax));	// 636 push    ax ;~ 01A2:055C
cs=0x1a2;eip=0x00055d; 	T(MOV(ax, 1));	// 637 mov     ax, 1 ;~ 01A2:055D
cs=0x1a2;eip=0x000560; 	X(PUSH(ax));	// 638 push    ax ;~ 01A2:0560
cs=0x1a2;eip=0x000561; 	T(MOV(ax, 2));	// 639 mov     ax, 2 ;~ 01A2:0561
cs=0x1a2;eip=0x000564; 	X(PUSH(ax));	// 640 push    ax ;~ 01A2:0564
cs=0x1a2;eip=0x000565; 	R(CALLF(show_dialog,0));	// 641 call    show_dialog ;~ 01A2:0565
cs=0x1a2;eip=0x00056a; 	T(ADD(sp, 0x12));	// 642 add     sp, 12h ;~ 01A2:056A
cs=0x1a2;eip=0x00056d; 	T(CMP(ax, 1));	// 643 cmp     ax, 1 ;~ 01A2:056D
cs=0x1a2;eip=0x000570; 	R(JGE(loc_10575));	// 644 jge     short loc_10575 ;~ 01A2:0570
cs=0x1a2;eip=0x000572; 	R(JMP(_do_intro0));	// 645 jmp     _do_intro0 ;~ 01A2:0572
loc_10575:
	// 4415 
cs=0x1a2;eip=0x000575; 	R(CALLF(mouse_draw_opaque_check,0));	// 649 call    mouse_draw_opaque_check ;~ 01A2:0575
cs=0x1a2;eip=0x00057a; 	R(CALLF(audio_stop_unk,0));	// 650 call    audio_stop_unk ;~ 01A2:057A
cs=0x1a2;eip=0x00057f; 	R(CALLF(audiodrv_atexit,0));	// 651 call    audiodrv_atexit ;~ 01A2:057F
cs=0x1a2;eip=0x000584; 	R(CALLF(kb_exit_handler,0));	// 652 call    kb_exit_handler ;~ 01A2:0584
cs=0x1a2;eip=0x000589; 	R(CALLF(kb_shift_checking1,0));	// 653 call    kb_shift_checking1 ;~ 01A2:0589
cs=0x1a2;eip=0x00058e; 	R(CALLF(video_set_mode7,0));	// 654 call    video_set_mode7 ;~ 01A2:058E
cs=0x1a2;eip=0x000593; 	X(POP(si));	// 655 pop     si ;~ 01A2:0593
cs=0x1a2;eip=0x000594; 	X(POP(di));	// 656 pop     di ;~ 01A2:0594
cs=0x1a2;eip=0x000595; 	T(MOV(sp, bp));	// 657 mov     sp, bp ;~ 01A2:0595
cs=0x1a2;eip=0x000597; 	X(POP(bp));	// 658 pop     bp ;~ 01A2:0597
cs=0x1a2;eip=0x000598; 	R(RETF(0));	// 659 retf ;~ 01A2:0598
seg000_599_proc:
	// 663 
	// 663 nop ;~ 01A2:0599
run_intro_looped:
	// 669 
cs=0x1a2;eip=0x00059a; 	X(PUSH(bp));	// 670 push    bp ;~ 01A2:059A
ret_1a2_59b:
	// 4416 
cs=0x1a2;eip=0x00059b; 	T(MOV(bp, sp));	// 671 mov     bp, sp ;~ 01A2:059B
cs=0x1a2;eip=0x00059d; 	T(SUB(sp, 2));	// 672 sub     sp, 2 ;~ 01A2:059D
cs=0x1a2;eip=0x0005a0; 	X(PUSH(si));	// 673 push    si              ; char * ;~ 01A2:05A0
cs=0x1a2;eip=0x0005a1; 	T(MOV(ax, offset(dseg,atitl)));	// 674 mov     ax, offset aTitl ; "TITL" ;~ 01A2:05A1
cs=0x1a2;eip=0x0005a4; 	X(PUSH(ax));	// 675 push    ax ;~ 01A2:05A4
cs=0x1a2;eip=0x0005a5; 	T(MOV(ax, offset(dseg,askidms)));	// 676 mov     ax, offset aSkidms ; "skidms" ;~ 01A2:05A5
cs=0x1a2;eip=0x0005a8; 	X(PUSH(ax));	// 677 push    ax ;~ 01A2:05A8
cs=0x1a2;eip=0x0005a9; 	T(MOV(ax, offset(dseg,askidtitl)));	// 678 mov     ax, offset aSkidtitl ; "skidtitl" ;~ 01A2:05A9
cs=0x1a2;eip=0x0005ac; 	X(PUSH(ax));	// 679 push    ax              ; char * ;~ 01A2:05AC
cs=0x1a2;eip=0x0005ad; 	R(CALLF(file_load_audiores,0));	// 680 call    file_load_audiores ;~ 01A2:05AD
cs=0x1a2;eip=0x0005b2; 	T(ADD(sp, 6));	// 681 add     sp, 6 ;~ 01A2:05B2
cs=0x1a2;eip=0x0005b5; 	T(MOV(ax, offset(dseg,asdtitl)));	// 682 mov     ax, offset aSdtitl ; "sdtitl" ;~ 01A2:05B5
cs=0x1a2;eip=0x0005b8; 	X(PUSH(ax));	// 683 push    ax              ; char * ;~ 01A2:05B8
cs=0x1a2;eip=0x0005b9; 	T(MOV(ax, 2));	// 684 mov     ax, 2 ;~ 01A2:05B9
cs=0x1a2;eip=0x0005bc; 	X(PUSH(ax));	// 685 push    ax              ; int ;~ 01A2:05BC
cs=0x1a2;eip=0x0005bd; 	R(CALLF(file_load_resource,0));	// 686 call    file_load_resource ;~ 01A2:05BD
cs=0x1a2;eip=0x0005c2; 	T(ADD(sp, 4));	// 687 add     sp, 4 ;~ 01A2:05C2
cs=0x1a2;eip=0x0005c5; 	X(MOV(tempdataptr, ax));	// 688 mov     tempdataptr, ax ;~ 01A2:05C5
cs=0x1a2;eip=0x0005c8; 	X(MOV(word_45e14, dx));	// 689 mov     word_45E14, dx ;~ 01A2:05C8
cs=0x1a2;eip=0x0005cc; 	T(MOV(ax, 0x0F));	// 690 mov     ax, 0Fh ;~ 01A2:05CC
cs=0x1a2;eip=0x0005cf; 	X(PUSH(ax));	// 691 push    ax ;~ 01A2:05CF
cs=0x1a2;eip=0x0005d0; 	T(MOV(ax, 0x0C8));	// 692 mov     ax, 0C8h ; 'È' ;~ 01A2:05D0
cs=0x1a2;eip=0x0005d3; 	X(PUSH(ax));	// 693 push    ax ;~ 01A2:05D3
cs=0x1a2;eip=0x0005d4; 	T(MOV(ax, 0x140));	// 694 mov     ax, 140h ;~ 01A2:05D4
cs=0x1a2;eip=0x0005d7; 	X(PUSH(ax));	// 695 push    ax ;~ 01A2:05D7
cs=0x1a2;eip=0x0005d8; 	R(CALLF(sprite_make_wnd,0));	// 696 call    sprite_make_wnd ;~ 01A2:05D8
cs=0x1a2;eip=0x0005dd; 	T(ADD(sp, 6));	// 697 add     sp, 6 ;~ 01A2:05DD
cs=0x1a2;eip=0x0005e0; 	X(MOV(*(dw*)(((db*)&wndsprite)), ax));	// 698 mov     word ptr wndsprite, ax ;~ 01A2:05E0
cs=0x1a2;eip=0x0005e3; 	X(MOV(*(dw*)(((db*)&wndsprite)+2), dx));	// 699 mov     word ptr wndsprite+2, dx ;~ 01A2:05E3
cs=0x1a2;eip=0x0005e7; 	X(PUSH(cs));	// 700 push    cs ;~ 01A2:05E7
cs=0x1a2;eip=0x0005e8; 	R(CALL(run_intro,0));	// 701 call    near ptr run_intro ;~ 01A2:05E8
cs=0x1a2;eip=0x0005eb; 	T(MOV(si, ax));	// 702 mov     si, ax ;~ 01A2:05EB
cs=0x1a2;eip=0x0005ed; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 703 push    word ptr wndsprite+2 ;~ 01A2:05ED
cs=0x1a2;eip=0x0005f1; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 704 push    word ptr wndsprite ;~ 01A2:05F1
cs=0x1a2;eip=0x0005f5; 	R(CALLF(sprite_free_wnd,0));	// 705 call    sprite_free_wnd ;~ 01A2:05F5
cs=0x1a2;eip=0x0005fa; 	T(ADD(sp, 4));	// 706 add     sp, 4 ;~ 01A2:05FA
cs=0x1a2;eip=0x0005fd; 	X(PUSH(word_45e14));	// 707 push    word_45E14 ;~ 01A2:05FD
cs=0x1a2;eip=0x000601; 	X(PUSH(tempdataptr));	// 708 push    tempdataptr ;~ 01A2:0601
cs=0x1a2;eip=0x000605; 	R(CALLF(mmgr_free,0));	// 709 call    mmgr_free ;~ 01A2:0605
cs=0x1a2;eip=0x00060a; 	T(ADD(sp, 4));	// 710 add     sp, 4 ;~ 01A2:060A
cs=0x1a2;eip=0x00060d; 	T(OR(si, si));	// 711 or      si, si ;~ 01A2:060D
cs=0x1a2;eip=0x00060f; 	R(JNZ(loc_1068e));	// 712 jnz     short loc_1068E ;~ 01A2:060F
cs=0x1a2;eip=0x000611; 	R(CALLF(setup_intro,0));	// 713 call    setup_intro ;~ 01A2:0611
cs=0x1a2;eip=0x000616; 	T(CBW);	// 714 cbw ;~ 01A2:0616
cs=0x1a2;eip=0x000617; 	T(MOV(si, ax));	// 715 mov     si, ax ;~ 01A2:0617
cs=0x1a2;eip=0x000619; 	T(OR(si, si));	// 716 or      si, si ;~ 01A2:0619
cs=0x1a2;eip=0x00061b; 	R(JNZ(loc_1068e));	// 717 jnz     short loc_1068E ;~ 01A2:061B
cs=0x1a2;eip=0x00061d; 	T(MOV(ax, offset(dseg,asdcred)));	// 718 mov     ax, offset aSdcred ; "sdcred" ;~ 01A2:061D
cs=0x1a2;eip=0x000620; 	X(PUSH(ax));	// 719 push    ax              ; char * ;~ 01A2:0620
cs=0x1a2;eip=0x000621; 	T(MOV(ax, 2));	// 720 mov     ax, 2 ;~ 01A2:0621
cs=0x1a2;eip=0x000624; 	X(PUSH(ax));	// 721 push    ax              ; int ;~ 01A2:0624
cs=0x1a2;eip=0x000625; 	R(CALLF(file_load_resource,0));	// 722 call    file_load_resource ;~ 01A2:0625
cs=0x1a2;eip=0x00062a; 	T(ADD(sp, 4));	// 723 add     sp, 4 ;~ 01A2:062A
cs=0x1a2;eip=0x00062d; 	X(MOV(tempdataptr, ax));	// 724 mov     tempdataptr, ax ;~ 01A2:062D
cs=0x1a2;eip=0x000630; 	X(MOV(word_45e14, dx));	// 725 mov     word_45E14, dx ;~ 01A2:0630
cs=0x1a2;eip=0x000634; 	T(MOV(ax, 0x0F));	// 726 mov     ax, 0Fh ;~ 01A2:0634
cs=0x1a2;eip=0x000637; 	X(PUSH(ax));	// 727 push    ax ;~ 01A2:0637
cs=0x1a2;eip=0x000638; 	T(MOV(ax, 0x0C8));	// 728 mov     ax, 0C8h ; 'È' ;~ 01A2:0638
cs=0x1a2;eip=0x00063b; 	X(PUSH(ax));	// 729 push    ax ;~ 01A2:063B
cs=0x1a2;eip=0x00063c; 	T(MOV(ax, 0x140));	// 730 mov     ax, 140h ;~ 01A2:063C
cs=0x1a2;eip=0x00063f; 	X(PUSH(ax));	// 731 push    ax ;~ 01A2:063F
cs=0x1a2;eip=0x000640; 	R(CALLF(sprite_make_wnd,0));	// 732 call    sprite_make_wnd ;~ 01A2:0640
cs=0x1a2;eip=0x000645; 	T(ADD(sp, 6));	// 733 add     sp, 6 ;~ 01A2:0645
cs=0x1a2;eip=0x000648; 	X(MOV(*(dw*)(((db*)&wndsprite)), ax));	// 734 mov     word ptr wndsprite, ax ;~ 01A2:0648
cs=0x1a2;eip=0x00064b; 	X(MOV(*(dw*)(((db*)&wndsprite)+2), dx));	// 735 mov     word ptr wndsprite+2, dx ;~ 01A2:064B
cs=0x1a2;eip=0x00064f; 	R(CALLF(sprite_copy_wnd_to_1_clear,0));	// 736 call    sprite_copy_wnd_to_1_clear ;~ 01A2:064F
cs=0x1a2;eip=0x000654; 	T(SUB(ax, ax));	// 737 sub     ax, ax ;~ 01A2:0654
cs=0x1a2;eip=0x000656; 	X(PUSH(ax));	// 738 push    ax ;~ 01A2:0656
cs=0x1a2;eip=0x000657; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 739 push    word ptr wndsprite+2 ;~ 01A2:0657
cs=0x1a2;eip=0x00065b; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 740 push    word ptr wndsprite ;~ 01A2:065B
cs=0x1a2;eip=0x00065f; 	R(CALLF(sprite_blit_to_video,0));	// 741 call    sprite_blit_to_video ;~ 01A2:065F
cs=0x1a2;eip=0x000664; 	T(ADD(sp, 6));	// 742 add     sp, 6 ;~ 01A2:0664
cs=0x1a2;eip=0x000667; 	X(PUSH(cs));	// 743 push    cs ;~ 01A2:0667
cs=0x1a2;eip=0x000668; 	R(CALL(load_intro_resources,0));	// 744 call    near ptr load_intro_resources ;~ 01A2:0668
cs=0x1a2;eip=0x00066b; 	T(CBW);	// 745 cbw ;~ 01A2:066B
cs=0x1a2;eip=0x00066c; 	T(MOV(si, ax));	// 746 mov     si, ax ;~ 01A2:066C
cs=0x1a2;eip=0x00066e; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 747 push    word ptr wndsprite+2 ;~ 01A2:066E
cs=0x1a2;eip=0x000672; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 748 push    word ptr wndsprite ;~ 01A2:0672
cs=0x1a2;eip=0x000676; 	R(CALLF(sprite_free_wnd,0));	// 749 call    sprite_free_wnd ;~ 01A2:0676
cs=0x1a2;eip=0x00067b; 	T(ADD(sp, 4));	// 750 add     sp, 4 ;~ 01A2:067B
cs=0x1a2;eip=0x00067e; 	X(PUSH(word_45e14));	// 751 push    word_45E14 ;~ 01A2:067E
cs=0x1a2;eip=0x000682; 	X(PUSH(tempdataptr));	// 752 push    tempdataptr ;~ 01A2:0682
cs=0x1a2;eip=0x000686; 	R(CALLF(mmgr_free,0));	// 753 call    mmgr_free ;~ 01A2:0686
cs=0x1a2;eip=0x00068b; 	T(ADD(sp, 4));	// 754 add     sp, 4 ;~ 01A2:068B
loc_1068e:
	// 4417 
cs=0x1a2;eip=0x00068e; 	R(CALLF(audio_unload,0));	// 758 call    audio_unload ;~ 01A2:068E
cs=0x1a2;eip=0x000693; 	T(MOV(ax, si));	// 759 mov     ax, si ;~ 01A2:0693
cs=0x1a2;eip=0x000695; 	X(POP(si));	// 760 pop     si ;~ 01A2:0695
cs=0x1a2;eip=0x000696; 	T(MOV(sp, bp));	// 761 mov     sp, bp ;~ 01A2:0696
cs=0x1a2;eip=0x000698; 	X(POP(bp));	// 762 pop     bp ;~ 01A2:0698
cs=0x1a2;eip=0x000699; 	R(RETF(0));	// 763 retf ;~ 01A2:0699
run_intro:
	// 773 
cs=0x1a2;eip=0x00069c; 	X(PUSH(bp));	// 774 push    bp ;~ 01A2:069C
ret_1a2_69d:
	// 4418 
cs=0x1a2;eip=0x00069d; 	T(MOV(bp, sp));	// 775 mov     bp, sp ;~ 01A2:069D
cs=0x1a2;eip=0x00069f; 	T(SUB(sp, 2));	// 776 sub     sp, 2 ;~ 01A2:069F
cs=0x1a2;eip=0x0006a2; 	X(PUSH(si));	// 777 push    si ;~ 01A2:06A2
cs=0x1a2;eip=0x0006a3; 	R(CALLF(mouse_draw_opaque_check,0));	// 778 call    mouse_draw_opaque_check ;~ 01A2:06A3
cs=0x1a2;eip=0x0006a8; 	R(CALLF(sprite_copy_2_to_1_clear,0));	// 779 call    sprite_copy_2_to_1_clear ;~ 01A2:06A8
cs=0x1a2;eip=0x0006ad; 	R(CALLF(mouse_draw_transparent_check,0));	// 780 call    mouse_draw_transparent_check ;~ 01A2:06AD
cs=0x1a2;eip=0x0006b2; 	R(CALLF(sprite_copy_wnd_to_1_clear,0));	// 781 call    sprite_copy_wnd_to_1_clear ;~ 01A2:06B2
cs=0x1a2;eip=0x0006b7; 	T(MOV(ax, offset(dseg,aprod)));	// 782 mov     ax, offset aProd ; "prod" ;~ 01A2:06B7
cs=0x1a2;eip=0x0006ba; 	X(PUSH(ax));	// 783 push    ax ;~ 01A2:06BA
cs=0x1a2;eip=0x0006bb; 	X(PUSH(word_45e14));	// 784 push    word_45E14 ;~ 01A2:06BB
cs=0x1a2;eip=0x0006bf; 	X(PUSH(tempdataptr));	// 785 push    tempdataptr ;~ 01A2:06BF
cs=0x1a2;eip=0x0006c3; 	R(CALLF(locate_shape_fatal,0));	// 786 call    locate_shape_fatal ;~ 01A2:06C3
cs=0x1a2;eip=0x0006c8; 	T(ADD(sp, 6));	// 787 add     sp, 6 ;~ 01A2:06C8
cs=0x1a2;eip=0x0006cb; 	T(MOV(bx, ax));	// 788 mov     bx, ax ;~ 01A2:06CB
cs=0x1a2;eip=0x0006cd; 	T(MOV(es, dx));	// 789 mov     es, dx ;~ 01A2:06CD
cs=0x1a2;eip=0x0006cf; 	T(CMP(*(dw*)(raddr(es,bx+0x0A)), 0));	// 790 cmp     word ptr es:[bx+0Ah], 0 ;~ 01A2:06CF
cs=0x1a2;eip=0x0006d4; 	R(JZ(loc_106de));	// 791 jz      short loc_106DE ;~ 01A2:06D4
cs=0x1a2;eip=0x0006d6; 	X(MOV(waitflag, 0x0A0));	// 792 mov     waitflag, 0A0h ; ' ' ;~ 01A2:06D6
cs=0x1a2;eip=0x0006dc; 	R(JMP(loc_106e4));	// 793 jmp     short loc_106E4 ;~ 01A2:06DC
loc_106de:
	// 4419 
cs=0x1a2;eip=0x0006de; 	X(MOV(waitflag, 0x0B4));	// 797 mov     waitflag, 0B4h ; '´' ;~ 01A2:06DE
loc_106e4:
	// 4420 
cs=0x1a2;eip=0x0006e4; 	T(MOV(ax, offset(dseg,aprod_0)));	// 800 mov     ax, offset aProd_0 ; "prod" ;~ 01A2:06E4
cs=0x1a2;eip=0x0006e7; 	X(PUSH(ax));	// 801 push    ax ;~ 01A2:06E7
cs=0x1a2;eip=0x0006e8; 	X(PUSH(word_45e14));	// 802 push    word_45E14 ;~ 01A2:06E8
cs=0x1a2;eip=0x0006ec; 	X(PUSH(tempdataptr));	// 803 push    tempdataptr ;~ 01A2:06EC
cs=0x1a2;eip=0x0006f0; 	R(CALLF(locate_shape_fatal,0));	// 804 call    locate_shape_fatal ;~ 01A2:06F0
cs=0x1a2;eip=0x0006f5; 	T(ADD(sp, 6));	// 805 add     sp, 6 ;~ 01A2:06F5
cs=0x1a2;eip=0x0006f8; 	X(PUSH(dx));	// 806 push    dx ;~ 01A2:06F8
cs=0x1a2;eip=0x0006f9; 	X(PUSH(ax));	// 807 push    ax ;~ 01A2:06F9
cs=0x1a2;eip=0x0006fa; 	R(CALLF(sprite_shape_to_1_alt,0));	// 808 call    sprite_shape_to_1_alt ;~ 01A2:06FA
cs=0x1a2;eip=0x0006ff; 	T(ADD(sp, 4));	// 809 add     sp, 4 ;~ 01A2:06FF
cs=0x1a2;eip=0x000702; 	T(MOV(ax, 0x0FFFF));	// 810 mov     ax, 0FFFFh ;~ 01A2:0702
cs=0x1a2;eip=0x000705; 	X(PUSH(ax));	// 811 push    ax ;~ 01A2:0705
cs=0x1a2;eip=0x000706; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 812 push    word ptr wndsprite+2 ;~ 01A2:0706
cs=0x1a2;eip=0x00070a; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 813 push    word ptr wndsprite ;~ 01A2:070A
cs=0x1a2;eip=0x00070e; 	R(CALLF(sprite_blit_to_video,0));	// 814 call    sprite_blit_to_video ;~ 01A2:070E
cs=0x1a2;eip=0x000713; 	T(ADD(sp, 6));	// 815 add     sp, 6 ;~ 01A2:0713
cs=0x1a2;eip=0x000716; 	T(MOV(si, ax));	// 816 mov     si, ax ;~ 01A2:0716
cs=0x1a2;eip=0x000718; 	T(OR(si, si));	// 817 or      si, si ;~ 01A2:0718
cs=0x1a2;eip=0x00071a; 	R(JNZ(loc_1077f));	// 818 jnz     short loc_1077F ;~ 01A2:071A
cs=0x1a2;eip=0x00071c; 	T(MOV(ax, 0x190));	// 819 mov     ax, 190h ;~ 01A2:071C
cs=0x1a2;eip=0x00071f; 	X(PUSH(ax));	// 820 push    ax ;~ 01A2:071F
cs=0x1a2;eip=0x000720; 	R(CALLF(input_repeat_check,0));	// 821 call    input_repeat_check ;~ 01A2:0720
cs=0x1a2;eip=0x000725; 	T(ADD(sp, 2));	// 822 add     sp, 2 ;~ 01A2:0725
cs=0x1a2;eip=0x000728; 	T(MOV(si, ax));	// 823 mov     si, ax ;~ 01A2:0728
cs=0x1a2;eip=0x00072a; 	T(OR(si, si));	// 824 or      si, si ;~ 01A2:072A
cs=0x1a2;eip=0x00072c; 	R(JNZ(loc_1077f));	// 825 jnz     short loc_1077F ;~ 01A2:072C
cs=0x1a2;eip=0x00072e; 	R(CALLF(sprite_copy_wnd_to_1_clear,0));	// 826 call    sprite_copy_wnd_to_1_clear ;~ 01A2:072E
cs=0x1a2;eip=0x000733; 	X(MOV(waitflag, 0x0B4));	// 827 mov     waitflag, 0B4h ; '´' ;~ 01A2:0733
cs=0x1a2;eip=0x000739; 	T(MOV(ax, offset(dseg,atitl_0)));	// 828 mov     ax, offset aTitl_0 ; "titl" ;~ 01A2:0739
cs=0x1a2;eip=0x00073c; 	X(PUSH(ax));	// 829 push    ax ;~ 01A2:073C
cs=0x1a2;eip=0x00073d; 	X(PUSH(word_45e14));	// 830 push    word_45E14 ;~ 01A2:073D
cs=0x1a2;eip=0x000741; 	X(PUSH(tempdataptr));	// 831 push    tempdataptr ;~ 01A2:0741
cs=0x1a2;eip=0x000745; 	R(CALLF(locate_shape_fatal,0));	// 832 call    locate_shape_fatal ;~ 01A2:0745
cs=0x1a2;eip=0x00074a; 	T(ADD(sp, 6));	// 833 add     sp, 6 ;~ 01A2:074A
cs=0x1a2;eip=0x00074d; 	X(PUSH(dx));	// 834 push    dx ;~ 01A2:074D
cs=0x1a2;eip=0x00074e; 	X(PUSH(ax));	// 835 push    ax ;~ 01A2:074E
cs=0x1a2;eip=0x00074f; 	R(CALLF(sprite_shape_to_1_alt,0));	// 836 call    sprite_shape_to_1_alt ;~ 01A2:074F
cs=0x1a2;eip=0x000754; 	T(ADD(sp, 4));	// 837 add     sp, 4 ;~ 01A2:0754
cs=0x1a2;eip=0x000757; 	T(MOV(ax, 0x0FFFF));	// 838 mov     ax, 0FFFFh ;~ 01A2:0757
cs=0x1a2;eip=0x00075a; 	X(PUSH(ax));	// 839 push    ax ;~ 01A2:075A
cs=0x1a2;eip=0x00075b; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 840 push    word ptr wndsprite+2 ;~ 01A2:075B
cs=0x1a2;eip=0x00075f; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 841 push    word ptr wndsprite ;~ 01A2:075F
cs=0x1a2;eip=0x000763; 	R(CALLF(sprite_blit_to_video,0));	// 842 call    sprite_blit_to_video ;~ 01A2:0763
cs=0x1a2;eip=0x000768; 	T(ADD(sp, 6));	// 843 add     sp, 6 ;~ 01A2:0768
cs=0x1a2;eip=0x00076b; 	T(MOV(si, ax));	// 844 mov     si, ax ;~ 01A2:076B
cs=0x1a2;eip=0x00076d; 	T(OR(si, si));	// 845 or      si, si ;~ 01A2:076D
cs=0x1a2;eip=0x00076f; 	R(JNZ(loc_1077f));	// 846 jnz     short loc_1077F ;~ 01A2:076F
cs=0x1a2;eip=0x000771; 	T(MOV(ax, 0x190));	// 847 mov     ax, 190h ;~ 01A2:0771
cs=0x1a2;eip=0x000774; 	X(PUSH(ax));	// 848 push    ax ;~ 01A2:0774
cs=0x1a2;eip=0x000775; 	R(CALLF(input_repeat_check,0));	// 849 call    input_repeat_check ;~ 01A2:0775
cs=0x1a2;eip=0x00077a; 	T(ADD(sp, 2));	// 850 add     sp, 2 ;~ 01A2:077A
cs=0x1a2;eip=0x00077d; 	T(MOV(si, ax));	// 851 mov     si, ax ;~ 01A2:077D
loc_1077f:
	// 4421 
cs=0x1a2;eip=0x00077f; 	T(MOV(ax, si));	// 855 mov     ax, si ;~ 01A2:077F
cs=0x1a2;eip=0x000781; 	X(POP(si));	// 856 pop     si ;~ 01A2:0781
cs=0x1a2;eip=0x000782; 	T(MOV(sp, bp));	// 857 mov     sp, bp ;~ 01A2:0782
cs=0x1a2;eip=0x000784; 	X(POP(bp));	// 858 pop     bp ;~ 01A2:0784
cs=0x1a2;eip=0x000785; 	R(RETF(0));	// 859 retf ;~ 01A2:0785
load_intro_resources:
	// 867 
#undef var_46
#define var_46 -0x46
	// 869 var_46          = word ptr -46h ;~ 01A2:0786
#undef var_44
#define var_44 -0x44
	// 870 var_44          = word ptr -44h ;~ 01A2:0786
#undef var_40
#define var_40 -0x40
	// 871 var_40          = word ptr -40h ;~ 01A2:0786
#undef var_3e
#define var_3e -0x3E
	// 872 var_3E          = word ptr -3Eh ;~ 01A2:0786
#undef var_3a
#define var_3a -0x3A
	// 873 var_3A          = word ptr -3Ah ;~ 01A2:0786
#undef var_38
#define var_38 -0x38
	// 874 var_38          = word ptr -38h ;~ 01A2:0786
#undef var_36
#define var_36 -0x36
	// 875 var_36          = word ptr -36h ;~ 01A2:0786
#undef var_34
#define var_34 -0x34
	// 876 var_34          = dword ptr -34h ;~ 01A2:0786
#undef var_30
#define var_30 -0x30
	// 877 var_30          = dword ptr -30h ;~ 01A2:0786
#undef var_c
#define var_c -0x0C
	// 878 var_C           = word ptr -0Ch ;~ 01A2:0786
#undef var_a
#define var_a -0x0A
	// 879 var_A           = word ptr -0Ah ;~ 01A2:0786
#undef var_4
#define var_4 -4
	// 880 var_4           = word ptr -4 ;~ 01A2:0786
#undef var_2
#define var_2 -2
	// 881 var_2           = word ptr -2 ;~ 01A2:0786
ret_1a2_786:
	// 4422 
cs=0x1a2;eip=0x000786; 	X(PUSH(bp));	// 883 push    bp ;~ 01A2:0786
cs=0x1a2;eip=0x000787; 	T(MOV(bp, sp));	// 884 mov     bp, sp ;~ 01A2:0787
cs=0x1a2;eip=0x000789; 	T(SUB(sp, 0x46));	// 885 sub     sp, 46h ;~ 01A2:0789
cs=0x1a2;eip=0x00078c; 	X(PUSH(di));	// 886 push    di ;~ 01A2:078C
cs=0x1a2;eip=0x00078d; 	X(PUSH(si));	// 887 push    si ;~ 01A2:078D
cs=0x1a2;eip=0x00078e; 	T(MOV(ax, offset(dseg,acred)));	// 888 mov     ax, offset aCred ; "cred" ;~ 01A2:078E
cs=0x1a2;eip=0x000791; 	X(PUSH(ax));	// 889 push    ax ;~ 01A2:0791
cs=0x1a2;eip=0x000792; 	R(CALLF(file_load_resfile,0));	// 890 call    file_load_resfile ;~ 01A2:0792
cs=0x1a2;eip=0x000797; 	T(ADD(sp, 2));	// 891 add     sp, 2 ;~ 01A2:0797
cs=0x1a2;eip=0x00079a; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), ax));	// 892 mov     [bp+var_3A], ax ;~ 01A2:079A
cs=0x1a2;eip=0x00079d; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), dx));	// 893 mov     [bp+var_38], dx ;~ 01A2:079D
cs=0x1a2;eip=0x0007a0; 	T(ax = bp+var_34);	// 894 lea     ax, [bp+var_34] ;~ 01A2:07A0
cs=0x1a2;eip=0x0007a3; 	X(PUSH(ax));	// 895 push    ax ;~ 01A2:07A3
cs=0x1a2;eip=0x0007a4; 	T(MOV(ax, offset(dseg,aarowarrwarw1ar)));	// 896 mov     ax, offset aArowarrwarw1ar ; "arowarrwarw1arw2arw3arw4arw5arw6arw7arw"... ;~ 01A2:07A4
cs=0x1a2;eip=0x0007a7; 	X(PUSH(ax));	// 897 push    ax ;~ 01A2:07A7
cs=0x1a2;eip=0x0007a8; 	X(PUSH(word_45e14));	// 898 push    word_45E14 ;~ 01A2:07A8
cs=0x1a2;eip=0x0007ac; 	X(PUSH(tempdataptr));	// 899 push    tempdataptr ;~ 01A2:07AC
cs=0x1a2;eip=0x0007b0; 	R(CALLF(locate_many_resources,0));	// 900 call    locate_many_resources ;~ 01A2:07B0
cs=0x1a2;eip=0x0007b5; 	T(ADD(sp, 8));	// 901 add     sp, 8 ;~ 01A2:07B5
cs=0x1a2;eip=0x0007b8; 	X(MOV(waitflag, 0x96));	// 902 mov     waitflag, 96h ; '–' ;~ 01A2:07B8
cs=0x1a2;eip=0x0007be; 	R(CALLF(sprite_copy_wnd_to_1_clear,0));	// 903 call    sprite_copy_wnd_to_1_clear ;~ 01A2:07BE
cs=0x1a2;eip=0x0007c3; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_30))));	// 904 les     bx, [bp+var_30] ;~ 01A2:07C3
cs=0x1a2;eip=0x0007c6; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 905 mov     ax, es:[bx+8] ;~ 01A2:07C6
cs=0x1a2;eip=0x0007ca; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 906 mov     [bp+var_2], ax ;~ 01A2:07CA
cs=0x1a2;eip=0x0007cd; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 907 mov     ax, es:[bx+0Ah] ;~ 01A2:07CD
cs=0x1a2;eip=0x0007d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 908 mov     [bp+var_4], ax ;~ 01A2:07D1
cs=0x1a2;eip=0x0007d4; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 909 mov     ax, es:[bx] ;~ 01A2:07D4
cs=0x1a2;eip=0x0007d7; 	X(IMUL1_2(video_flag1_is1));	// 910 imul    video_flag1_is1 ;~ 01A2:07D7
cs=0x1a2;eip=0x0007db; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), ax));	// 911 mov     [bp+var_3E], ax ;~ 01A2:07DB
cs=0x1a2;eip=0x0007de; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 912 mov     ax, es:[bx+2] ;~ 01A2:07DE
cs=0x1a2;eip=0x0007e2; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 913 mov     [bp+var_44], ax ;~ 01A2:07E2
cs=0x1a2;eip=0x0007e5; 	T(MOV(ax, offset(dseg,acre)));	// 914 mov     ax, offset aCre ; "cre" ;~ 01A2:07E5
cs=0x1a2;eip=0x0007e8; 	X(PUSH(ax));	// 915 push    ax ;~ 01A2:07E8
cs=0x1a2;eip=0x0007e9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 916 push    [bp+var_38] ;~ 01A2:07E9
cs=0x1a2;eip=0x0007ec; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 917 push    [bp+var_3A] ;~ 01A2:07EC
cs=0x1a2;eip=0x0007ef; 	R(CALLF(locate_text_res,0));	// 918 call    locate_text_res ;~ 01A2:07EF
cs=0x1a2;eip=0x0007f4; 	T(ADD(sp, 6));	// 919 add     sp, 6 ;~ 01A2:07F4
cs=0x1a2;eip=0x0007f7; 	X(PUSH(dx));	// 920 push    dx ;~ 01A2:07F7
cs=0x1a2;eip=0x0007f8; 	X(PUSH(ax));	// 921 push    ax ;~ 01A2:07F8
cs=0x1a2;eip=0x0007f9; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 922 mov     ax, offset resID_byte1 ;~ 01A2:07F9
cs=0x1a2;eip=0x0007fc; 	X(PUSH(ax));	// 923 push    ax ;~ 01A2:07FC
cs=0x1a2;eip=0x0007fd; 	R(CALLF(copy_string,0));	// 924 call    copy_string ;~ 01A2:07FD
cs=0x1a2;eip=0x000802; 	T(ADD(sp, 6));	// 925 add     sp, 6 ;~ 01A2:0802
cs=0x1a2;eip=0x000805; 	X(PUSH(word_407da));	// 926 push    word_407DA ;~ 01A2:0805
cs=0x1a2;eip=0x000809; 	X(PUSH(word_407d8));	// 927 push    word_407D8 ;~ 01A2:0809
cs=0x1a2;eip=0x00080d; 	T(SUB(ax, ax));	// 928 sub     ax, ax ;~ 01A2:080D
cs=0x1a2;eip=0x00080f; 	X(PUSH(ax));	// 929 push    ax ;~ 01A2:080F
cs=0x1a2;eip=0x000810; 	T(MOV(ax, 0x78));	// 930 mov     ax, 78h ; 'x' ;~ 01A2:0810
cs=0x1a2;eip=0x000813; 	X(PUSH(ax));	// 931 push    ax ;~ 01A2:0813
cs=0x1a2;eip=0x000814; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 932 mov     ax, offset resID_byte1 ;~ 01A2:0814
cs=0x1a2;eip=0x000817; 	X(PUSH(ax));	// 933 push    ax ;~ 01A2:0817
cs=0x1a2;eip=0x000818; 	R(CALLF(intro_draw_text,0));	// 934 call    intro_draw_text ;~ 01A2:0818
cs=0x1a2;eip=0x00081d; 	T(ADD(sp, 0x0A));	// 935 add     sp, 0Ah ;~ 01A2:081D
cs=0x1a2;eip=0x000820; 	T(MOV(ax, offset(dseg,agds0)));	// 936 mov     ax, offset aGds0 ; "gds0" ;~ 01A2:0820
cs=0x1a2;eip=0x000823; 	X(PUSH(ax));	// 937 push    ax ;~ 01A2:0823
cs=0x1a2;eip=0x000824; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 938 push    [bp+var_38] ;~ 01A2:0824
cs=0x1a2;eip=0x000827; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 939 push    [bp+var_3A] ;~ 01A2:0827
cs=0x1a2;eip=0x00082a; 	R(CALLF(locate_shape_alt,0));	// 940 call    locate_shape_alt ;~ 01A2:082A
cs=0x1a2;eip=0x00082f; 	T(ADD(sp, 6));	// 941 add     sp, 6 ;~ 01A2:082F
cs=0x1a2;eip=0x000832; 	X(PUSH(dx));	// 942 push    dx ;~ 01A2:0832
cs=0x1a2;eip=0x000833; 	X(PUSH(ax));	// 943 push    ax ;~ 01A2:0833
cs=0x1a2;eip=0x000834; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 944 mov     ax, offset resID_byte1 ;~ 01A2:0834
cs=0x1a2;eip=0x000837; 	X(PUSH(ax));	// 945 push    ax ;~ 01A2:0837
cs=0x1a2;eip=0x000838; 	R(CALLF(copy_string,0));	// 946 call    copy_string ;~ 01A2:0838
cs=0x1a2;eip=0x00083d; 	T(ADD(sp, 6));	// 947 add     sp, 6 ;~ 01A2:083D
cs=0x1a2;eip=0x000840; 	X(PUSH(word_407d6));	// 948 push    word_407D6 ;~ 01A2:0840
cs=0x1a2;eip=0x000844; 	X(PUSH(word_407d4));	// 949 push    word_407D4 ;~ 01A2:0844
cs=0x1a2;eip=0x000848; 	T(MOV(ax, 0x0C));	// 950 mov     ax, 0Ch ;~ 01A2:0848
cs=0x1a2;eip=0x00084b; 	X(PUSH(ax));	// 951 push    ax ;~ 01A2:084B
cs=0x1a2;eip=0x00084c; 	T(MOV(ax, 0x3C));	// 952 mov     ax, 3Ch ; '<' ;~ 01A2:084C
cs=0x1a2;eip=0x00084f; 	X(PUSH(ax));	// 953 push    ax ;~ 01A2:084F
cs=0x1a2;eip=0x000850; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 954 mov     ax, offset resID_byte1 ;~ 01A2:0850
cs=0x1a2;eip=0x000853; 	X(PUSH(ax));	// 955 push    ax ;~ 01A2:0853
cs=0x1a2;eip=0x000854; 	R(CALLF(intro_draw_text,0));	// 956 call    intro_draw_text ;~ 01A2:0854
cs=0x1a2;eip=0x000859; 	T(ADD(sp, 0x0A));	// 957 add     sp, 0Ah ;~ 01A2:0859
cs=0x1a2;eip=0x00085c; 	T(MOV(ax, offset(dseg,agds1)));	// 958 mov     ax, offset aGds1 ; "gds1" ;~ 01A2:085C
cs=0x1a2;eip=0x00085f; 	X(PUSH(ax));	// 959 push    ax ;~ 01A2:085F
cs=0x1a2;eip=0x000860; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 960 push    [bp+var_38] ;~ 01A2:0860
cs=0x1a2;eip=0x000863; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 961 push    [bp+var_3A] ;~ 01A2:0863
cs=0x1a2;eip=0x000866; 	R(CALLF(locate_shape_alt,0));	// 962 call    locate_shape_alt ;~ 01A2:0866
cs=0x1a2;eip=0x00086b; 	T(ADD(sp, 6));	// 963 add     sp, 6 ;~ 01A2:086B
cs=0x1a2;eip=0x00086e; 	X(PUSH(dx));	// 964 push    dx ;~ 01A2:086E
cs=0x1a2;eip=0x00086f; 	X(PUSH(ax));	// 965 push    ax ;~ 01A2:086F
cs=0x1a2;eip=0x000870; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 966 mov     ax, offset resID_byte1 ;~ 01A2:0870
cs=0x1a2;eip=0x000873; 	X(PUSH(ax));	// 967 push    ax ;~ 01A2:0873
cs=0x1a2;eip=0x000874; 	R(CALLF(copy_string,0));	// 968 call    copy_string ;~ 01A2:0874
cs=0x1a2;eip=0x000879; 	T(ADD(sp, 6));	// 969 add     sp, 6 ;~ 01A2:0879
cs=0x1a2;eip=0x00087c; 	X(PUSH(word_407d6));	// 970 push    word_407D6 ;~ 01A2:087C
cs=0x1a2;eip=0x000880; 	X(PUSH(word_407d4));	// 971 push    word_407D4 ;~ 01A2:0880
cs=0x1a2;eip=0x000884; 	T(MOV(ax, 0x14));	// 972 mov     ax, 14h ;~ 01A2:0884
cs=0x1a2;eip=0x000887; 	X(PUSH(ax));	// 973 push    ax ;~ 01A2:0887
cs=0x1a2;eip=0x000888; 	T(MOV(ax, 0x68));	// 974 mov     ax, 68h ; 'h' ;~ 01A2:0888
cs=0x1a2;eip=0x00088b; 	X(PUSH(ax));	// 975 push    ax ;~ 01A2:088B
cs=0x1a2;eip=0x00088c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 976 mov     ax, offset resID_byte1 ;~ 01A2:088C
cs=0x1a2;eip=0x00088f; 	X(PUSH(ax));	// 977 push    ax ;~ 01A2:088F
cs=0x1a2;eip=0x000890; 	R(CALLF(intro_draw_text,0));	// 978 call    intro_draw_text ;~ 01A2:0890
cs=0x1a2;eip=0x000895; 	T(ADD(sp, 0x0A));	// 979 add     sp, 0Ah ;~ 01A2:0895
cs=0x1a2;eip=0x000898; 	T(MOV(ax, offset(dseg,ades)));	// 980 mov     ax, offset aDes ; "des" ;~ 01A2:0898
cs=0x1a2;eip=0x00089b; 	X(PUSH(ax));	// 981 push    ax ;~ 01A2:089B
cs=0x1a2;eip=0x00089c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 982 push    [bp+var_38] ;~ 01A2:089C
cs=0x1a2;eip=0x00089f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 983 push    [bp+var_3A] ;~ 01A2:089F
cs=0x1a2;eip=0x0008a2; 	R(CALLF(locate_text_res,0));	// 984 call    locate_text_res ;~ 01A2:08A2
cs=0x1a2;eip=0x0008a7; 	T(ADD(sp, 6));	// 985 add     sp, 6 ;~ 01A2:08A7
cs=0x1a2;eip=0x0008aa; 	X(PUSH(dx));	// 986 push    dx ;~ 01A2:08AA
cs=0x1a2;eip=0x0008ab; 	X(PUSH(ax));	// 987 push    ax ;~ 01A2:08AB
cs=0x1a2;eip=0x0008ac; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 988 mov     ax, offset resID_byte1 ;~ 01A2:08AC
cs=0x1a2;eip=0x0008af; 	X(PUSH(ax));	// 989 push    ax ;~ 01A2:08AF
cs=0x1a2;eip=0x0008b0; 	R(CALLF(copy_string,0));	// 990 call    copy_string ;~ 01A2:08B0
cs=0x1a2;eip=0x0008b5; 	T(ADD(sp, 6));	// 991 add     sp, 6 ;~ 01A2:08B5
cs=0x1a2;eip=0x0008b8; 	X(PUSH(word_407de));	// 992 push    word_407DE ;~ 01A2:08B8
cs=0x1a2;eip=0x0008bc; 	X(PUSH(word_407dc));	// 993 push    word_407DC ;~ 01A2:08BC
cs=0x1a2;eip=0x0008c0; 	T(MOV(ax, 0x20));	// 994 mov     ax, 20h ; ' ' ;~ 01A2:08C0
cs=0x1a2;eip=0x0008c3; 	X(PUSH(ax));	// 995 push    ax ;~ 01A2:08C3
cs=0x1a2;eip=0x0008c4; 	T(MOV(ax, 0x14));	// 996 mov     ax, 14h ;~ 01A2:08C4
cs=0x1a2;eip=0x0008c7; 	X(PUSH(ax));	// 997 push    ax ;~ 01A2:08C7
cs=0x1a2;eip=0x0008c8; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 998 mov     ax, offset resID_byte1 ;~ 01A2:08C8
cs=0x1a2;eip=0x0008cb; 	X(PUSH(ax));	// 999 push    ax ;~ 01A2:08CB
cs=0x1a2;eip=0x0008cc; 	R(CALLF(intro_draw_text,0));	// 1000 call    intro_draw_text ;~ 01A2:08CC
cs=0x1a2;eip=0x0008d1; 	T(ADD(sp, 0x0A));	// 1001 add     sp, 0Ah ;~ 01A2:08D1
cs=0x1a2;eip=0x0008d4; 	T(MOV(ax, offset(dseg,agdon)));	// 1002 mov     ax, offset aGdon ; "gdon" ;~ 01A2:08D4
cs=0x1a2;eip=0x0008d7; 	X(PUSH(ax));	// 1003 push    ax ;~ 01A2:08D7
cs=0x1a2;eip=0x0008d8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1004 push    [bp+var_38] ;~ 01A2:08D8
cs=0x1a2;eip=0x0008db; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1005 push    [bp+var_3A] ;~ 01A2:08DB
cs=0x1a2;eip=0x0008de; 	R(CALLF(locate_shape_alt,0));	// 1006 call    locate_shape_alt ;~ 01A2:08DE
cs=0x1a2;eip=0x0008e3; 	T(ADD(sp, 6));	// 1007 add     sp, 6 ;~ 01A2:08E3
cs=0x1a2;eip=0x0008e6; 	X(PUSH(dx));	// 1008 push    dx ;~ 01A2:08E6
cs=0x1a2;eip=0x0008e7; 	X(PUSH(ax));	// 1009 push    ax ;~ 01A2:08E7
cs=0x1a2;eip=0x0008e8; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1010 mov     ax, offset resID_byte1 ;~ 01A2:08E8
cs=0x1a2;eip=0x0008eb; 	X(PUSH(ax));	// 1011 push    ax ;~ 01A2:08EB
cs=0x1a2;eip=0x0008ec; 	R(CALLF(copy_string,0));	// 1012 call    copy_string ;~ 01A2:08EC
cs=0x1a2;eip=0x0008f1; 	T(ADD(sp, 6));	// 1013 add     sp, 6 ;~ 01A2:08F1
cs=0x1a2;eip=0x0008f4; 	X(PUSH(word_407d6));	// 1014 push    word_407D6 ;~ 01A2:08F4
cs=0x1a2;eip=0x0008f8; 	X(PUSH(word_407d4));	// 1015 push    word_407D4 ;~ 01A2:08F8
cs=0x1a2;eip=0x0008fc; 	T(MOV(ax, 0x2C));	// 1016 mov     ax, 2Ch ; ',' ;~ 01A2:08FC
cs=0x1a2;eip=0x0008ff; 	X(PUSH(ax));	// 1017 push    ax ;~ 01A2:08FF
cs=0x1a2;eip=0x000900; 	T(MOV(ax, 0x14));	// 1018 mov     ax, 14h ;~ 01A2:0900
cs=0x1a2;eip=0x000903; 	X(PUSH(ax));	// 1019 push    ax ;~ 01A2:0903
cs=0x1a2;eip=0x000904; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1020 mov     ax, offset resID_byte1 ;~ 01A2:0904
cs=0x1a2;eip=0x000907; 	X(PUSH(ax));	// 1021 push    ax ;~ 01A2:0907
cs=0x1a2;eip=0x000908; 	R(CALLF(intro_draw_text,0));	// 1022 call    intro_draw_text ;~ 01A2:0908
cs=0x1a2;eip=0x00090d; 	T(ADD(sp, 0x0A));	// 1023 add     sp, 0Ah ;~ 01A2:090D
cs=0x1a2;eip=0x000910; 	T(MOV(ax, offset(dseg,agkev)));	// 1024 mov     ax, offset aGkev ; "gkev" ;~ 01A2:0910
cs=0x1a2;eip=0x000913; 	X(PUSH(ax));	// 1025 push    ax ;~ 01A2:0913
cs=0x1a2;eip=0x000914; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1026 push    [bp+var_38] ;~ 01A2:0914
cs=0x1a2;eip=0x000917; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1027 push    [bp+var_3A] ;~ 01A2:0917
cs=0x1a2;eip=0x00091a; 	R(CALLF(locate_shape_alt,0));	// 1028 call    locate_shape_alt ;~ 01A2:091A
cs=0x1a2;eip=0x00091f; 	T(ADD(sp, 6));	// 1029 add     sp, 6 ;~ 01A2:091F
cs=0x1a2;eip=0x000922; 	X(PUSH(dx));	// 1030 push    dx ;~ 01A2:0922
cs=0x1a2;eip=0x000923; 	X(PUSH(ax));	// 1031 push    ax ;~ 01A2:0923
cs=0x1a2;eip=0x000924; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1032 mov     ax, offset resID_byte1 ;~ 01A2:0924
cs=0x1a2;eip=0x000927; 	X(PUSH(ax));	// 1033 push    ax ;~ 01A2:0927
cs=0x1a2;eip=0x000928; 	R(CALLF(copy_string,0));	// 1034 call    copy_string ;~ 01A2:0928
cs=0x1a2;eip=0x00092d; 	T(ADD(sp, 6));	// 1035 add     sp, 6 ;~ 01A2:092D
cs=0x1a2;eip=0x000930; 	X(PUSH(word_407d6));	// 1036 push    word_407D6 ;~ 01A2:0930
cs=0x1a2;eip=0x000934; 	X(PUSH(word_407d4));	// 1037 push    word_407D4 ;~ 01A2:0934
cs=0x1a2;eip=0x000938; 	T(MOV(ax, 0x34));	// 1038 mov     ax, 34h ; '4' ;~ 01A2:0938
cs=0x1a2;eip=0x00093b; 	X(PUSH(ax));	// 1039 push    ax ;~ 01A2:093B
cs=0x1a2;eip=0x00093c; 	T(MOV(ax, 0x14));	// 1040 mov     ax, 14h ;~ 01A2:093C
cs=0x1a2;eip=0x00093f; 	X(PUSH(ax));	// 1041 push    ax ;~ 01A2:093F
cs=0x1a2;eip=0x000940; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1042 mov     ax, offset resID_byte1 ;~ 01A2:0940
cs=0x1a2;eip=0x000943; 	X(PUSH(ax));	// 1043 push    ax ;~ 01A2:0943
cs=0x1a2;eip=0x000944; 	R(CALLF(intro_draw_text,0));	// 1044 call    intro_draw_text ;~ 01A2:0944
cs=0x1a2;eip=0x000949; 	T(ADD(sp, 0x0A));	// 1045 add     sp, 0Ah ;~ 01A2:0949
cs=0x1a2;eip=0x00094c; 	T(MOV(ax, offset(dseg,agbra)));	// 1046 mov     ax, offset aGbra ; "gbra" ;~ 01A2:094C
cs=0x1a2;eip=0x00094f; 	X(PUSH(ax));	// 1047 push    ax ;~ 01A2:094F
cs=0x1a2;eip=0x000950; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1048 push    [bp+var_38] ;~ 01A2:0950
cs=0x1a2;eip=0x000953; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1049 push    [bp+var_3A] ;~ 01A2:0953
cs=0x1a2;eip=0x000956; 	R(CALLF(locate_shape_alt,0));	// 1050 call    locate_shape_alt ;~ 01A2:0956
cs=0x1a2;eip=0x00095b; 	T(ADD(sp, 6));	// 1051 add     sp, 6 ;~ 01A2:095B
cs=0x1a2;eip=0x00095e; 	X(PUSH(dx));	// 1052 push    dx ;~ 01A2:095E
cs=0x1a2;eip=0x00095f; 	X(PUSH(ax));	// 1053 push    ax ;~ 01A2:095F
cs=0x1a2;eip=0x000960; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1054 mov     ax, offset resID_byte1 ;~ 01A2:0960
cs=0x1a2;eip=0x000963; 	X(PUSH(ax));	// 1055 push    ax ;~ 01A2:0963
cs=0x1a2;eip=0x000964; 	R(CALLF(copy_string,0));	// 1056 call    copy_string ;~ 01A2:0964
cs=0x1a2;eip=0x000969; 	T(ADD(sp, 6));	// 1057 add     sp, 6 ;~ 01A2:0969
cs=0x1a2;eip=0x00096c; 	X(PUSH(word_407d6));	// 1058 push    word_407D6 ;~ 01A2:096C
cs=0x1a2;eip=0x000970; 	X(PUSH(word_407d4));	// 1059 push    word_407D4 ;~ 01A2:0970
cs=0x1a2;eip=0x000974; 	T(MOV(ax, 0x3C));	// 1060 mov     ax, 3Ch ; '<' ;~ 01A2:0974
cs=0x1a2;eip=0x000977; 	X(PUSH(ax));	// 1061 push    ax ;~ 01A2:0977
cs=0x1a2;eip=0x000978; 	T(MOV(ax, 0x14));	// 1062 mov     ax, 14h ;~ 01A2:0978
cs=0x1a2;eip=0x00097b; 	X(PUSH(ax));	// 1063 push    ax ;~ 01A2:097B
cs=0x1a2;eip=0x00097c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1064 mov     ax, offset resID_byte1 ;~ 01A2:097C
cs=0x1a2;eip=0x00097f; 	X(PUSH(ax));	// 1065 push    ax ;~ 01A2:097F
cs=0x1a2;eip=0x000980; 	R(CALLF(intro_draw_text,0));	// 1066 call    intro_draw_text ;~ 01A2:0980
cs=0x1a2;eip=0x000985; 	T(ADD(sp, 0x0A));	// 1067 add     sp, 0Ah ;~ 01A2:0985
cs=0x1a2;eip=0x000988; 	T(MOV(ax, offset(dseg,agrob)));	// 1068 mov     ax, offset aGrob ; "grob" ;~ 01A2:0988
cs=0x1a2;eip=0x00098b; 	X(PUSH(ax));	// 1069 push    ax ;~ 01A2:098B
cs=0x1a2;eip=0x00098c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1070 push    [bp+var_38] ;~ 01A2:098C
cs=0x1a2;eip=0x00098f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1071 push    [bp+var_3A] ;~ 01A2:098F
cs=0x1a2;eip=0x000992; 	R(CALLF(locate_shape_alt,0));	// 1072 call    locate_shape_alt ;~ 01A2:0992
cs=0x1a2;eip=0x000997; 	T(ADD(sp, 6));	// 1073 add     sp, 6 ;~ 01A2:0997
cs=0x1a2;eip=0x00099a; 	X(PUSH(dx));	// 1074 push    dx ;~ 01A2:099A
cs=0x1a2;eip=0x00099b; 	X(PUSH(ax));	// 1075 push    ax ;~ 01A2:099B
cs=0x1a2;eip=0x00099c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1076 mov     ax, offset resID_byte1 ;~ 01A2:099C
cs=0x1a2;eip=0x00099f; 	X(PUSH(ax));	// 1077 push    ax ;~ 01A2:099F
cs=0x1a2;eip=0x0009a0; 	R(CALLF(copy_string,0));	// 1078 call    copy_string ;~ 01A2:09A0
cs=0x1a2;eip=0x0009a5; 	T(ADD(sp, 6));	// 1079 add     sp, 6 ;~ 01A2:09A5
cs=0x1a2;eip=0x0009a8; 	X(PUSH(word_407d6));	// 1080 push    word_407D6 ;~ 01A2:09A8
cs=0x1a2;eip=0x0009ac; 	X(PUSH(word_407d4));	// 1081 push    word_407D4 ;~ 01A2:09AC
cs=0x1a2;eip=0x0009b0; 	T(MOV(ax, 0x44));	// 1082 mov     ax, 44h ; 'D' ;~ 01A2:09B0
cs=0x1a2;eip=0x0009b3; 	X(PUSH(ax));	// 1083 push    ax ;~ 01A2:09B3
cs=0x1a2;eip=0x0009b4; 	T(MOV(ax, 0x14));	// 1084 mov     ax, 14h ;~ 01A2:09B4
cs=0x1a2;eip=0x0009b7; 	X(PUSH(ax));	// 1085 push    ax ;~ 01A2:09B7
cs=0x1a2;eip=0x0009b8; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1086 mov     ax, offset resID_byte1 ;~ 01A2:09B8
cs=0x1a2;eip=0x0009bb; 	X(PUSH(ax));	// 1087 push    ax ;~ 01A2:09BB
cs=0x1a2;eip=0x0009bc; 	R(CALLF(intro_draw_text,0));	// 1088 call    intro_draw_text ;~ 01A2:09BC
cs=0x1a2;eip=0x0009c1; 	T(ADD(sp, 0x0A));	// 1089 add     sp, 0Ah ;~ 01A2:09C1
cs=0x1a2;eip=0x0009c4; 	T(MOV(ax, offset(dseg,agsta)));	// 1090 mov     ax, offset aGsta ; "gsta" ;~ 01A2:09C4
cs=0x1a2;eip=0x0009c7; 	X(PUSH(ax));	// 1091 push    ax ;~ 01A2:09C7
cs=0x1a2;eip=0x0009c8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1092 push    [bp+var_38] ;~ 01A2:09C8
cs=0x1a2;eip=0x0009cb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1093 push    [bp+var_3A] ;~ 01A2:09CB
cs=0x1a2;eip=0x0009ce; 	R(CALLF(locate_shape_alt,0));	// 1094 call    locate_shape_alt ;~ 01A2:09CE
cs=0x1a2;eip=0x0009d3; 	T(ADD(sp, 6));	// 1095 add     sp, 6 ;~ 01A2:09D3
cs=0x1a2;eip=0x0009d6; 	X(PUSH(dx));	// 1096 push    dx ;~ 01A2:09D6
cs=0x1a2;eip=0x0009d7; 	X(PUSH(ax));	// 1097 push    ax ;~ 01A2:09D7
cs=0x1a2;eip=0x0009d8; 	T(MOV(ax, 0x0AC74));	// 1098 mov     ax, 0AC74h ;~ 01A2:09D8
cs=0x1a2;eip=0x0009db; 	X(PUSH(ax));	// 1099 push    ax ;~ 01A2:09DB
cs=0x1a2;eip=0x0009dc; 	R(CALLF(copy_string,0));	// 1100 call    copy_string ;~ 01A2:09DC
cs=0x1a2;eip=0x0009e1; 	T(ADD(sp, 6));	// 1101 add     sp, 6 ;~ 01A2:09E1
cs=0x1a2;eip=0x0009e4; 	X(PUSH(word_407d6));	// 1102 push    word_407D6 ;~ 01A2:09E4
cs=0x1a2;eip=0x0009e8; 	X(PUSH(word_407d4));	// 1103 push    word_407D4 ;~ 01A2:09E8
cs=0x1a2;eip=0x0009ec; 	T(MOV(ax, 0x4C));	// 1104 mov     ax, 4Ch ; 'L' ;~ 01A2:09EC
cs=0x1a2;eip=0x0009ef; 	X(PUSH(ax));	// 1105 push    ax ;~ 01A2:09EF
cs=0x1a2;eip=0x0009f0; 	T(MOV(ax, 0x14));	// 1106 mov     ax, 14h ;~ 01A2:09F0
cs=0x1a2;eip=0x0009f3; 	X(PUSH(ax));	// 1107 push    ax ;~ 01A2:09F3
cs=0x1a2;eip=0x0009f4; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1108 mov     ax, offset resID_byte1 ;~ 01A2:09F4
cs=0x1a2;eip=0x0009f7; 	X(PUSH(ax));	// 1109 push    ax ;~ 01A2:09F7
cs=0x1a2;eip=0x0009f8; 	R(CALLF(intro_draw_text,0));	// 1110 call    intro_draw_text ;~ 01A2:09F8
cs=0x1a2;eip=0x0009fd; 	T(ADD(sp, 0x0A));	// 1111 add     sp, 0Ah ;~ 01A2:09FD
cs=0x1a2;eip=0x000a00; 	T(MOV(ax, offset(dseg,amus)));	// 1112 mov     ax, offset aMus ; "mus" ;~ 01A2:0A00
cs=0x1a2;eip=0x000a03; 	X(PUSH(ax));	// 1113 push    ax ;~ 01A2:0A03
cs=0x1a2;eip=0x000a04; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1114 push    [bp+var_38] ;~ 01A2:0A04
cs=0x1a2;eip=0x000a07; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1115 push    [bp+var_3A] ;~ 01A2:0A07
cs=0x1a2;eip=0x000a0a; 	R(CALLF(locate_text_res,0));	// 1116 call    locate_text_res ;~ 01A2:0A0A
cs=0x1a2;eip=0x000a0f; 	T(ADD(sp, 6));	// 1117 add     sp, 6 ;~ 01A2:0A0F
cs=0x1a2;eip=0x000a12; 	X(PUSH(dx));	// 1118 push    dx ;~ 01A2:0A12
cs=0x1a2;eip=0x000a13; 	X(PUSH(ax));	// 1119 push    ax ;~ 01A2:0A13
cs=0x1a2;eip=0x000a14; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1120 mov     ax, offset resID_byte1 ;~ 01A2:0A14
cs=0x1a2;eip=0x000a17; 	X(PUSH(ax));	// 1121 push    ax ;~ 01A2:0A17
cs=0x1a2;eip=0x000a18; 	R(CALLF(copy_string,0));	// 1122 call    copy_string ;~ 01A2:0A18
cs=0x1a2;eip=0x000a1d; 	T(ADD(sp, 6));	// 1123 add     sp, 6 ;~ 01A2:0A1D
cs=0x1a2;eip=0x000a20; 	X(PUSH(word_407ea));	// 1124 push    word_407EA ;~ 01A2:0A20
cs=0x1a2;eip=0x000a24; 	X(PUSH(word_407e8));	// 1125 push    word_407E8 ;~ 01A2:0A24
cs=0x1a2;eip=0x000a28; 	T(MOV(ax, 0x5C));	// 1126 mov     ax, 5Ch ; '\' ;~ 01A2:0A28
cs=0x1a2;eip=0x000a2b; 	X(PUSH(ax));	// 1127 push    ax ;~ 01A2:0A2B
cs=0x1a2;eip=0x000a2c; 	T(MOV(ax, 0x14));	// 1128 mov     ax, 14h ;~ 01A2:0A2C
cs=0x1a2;eip=0x000a2f; 	X(PUSH(ax));	// 1129 push    ax ;~ 01A2:0A2F
cs=0x1a2;eip=0x000a30; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1130 mov     ax, offset resID_byte1 ;~ 01A2:0A30
cs=0x1a2;eip=0x000a33; 	X(PUSH(ax));	// 1131 push    ax ;~ 01A2:0A33
cs=0x1a2;eip=0x000a34; 	R(CALLF(intro_draw_text,0));	// 1132 call    intro_draw_text ;~ 01A2:0A34
cs=0x1a2;eip=0x000a39; 	T(ADD(sp, 0x0A));	// 1133 add     sp, 0Ah ;~ 01A2:0A39
cs=0x1a2;eip=0x000a3c; 	T(MOV(ax, offset(dseg,agmsy)));	// 1134 mov     ax, offset aGmsy ; "gmsy" ;~ 01A2:0A3C
cs=0x1a2;eip=0x000a3f; 	X(PUSH(ax));	// 1135 push    ax ;~ 01A2:0A3F
cs=0x1a2;eip=0x000a40; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1136 push    [bp+var_38] ;~ 01A2:0A40
cs=0x1a2;eip=0x000a43; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1137 push    [bp+var_3A] ;~ 01A2:0A43
cs=0x1a2;eip=0x000a46; 	R(CALLF(locate_shape_alt,0));	// 1138 call    locate_shape_alt ;~ 01A2:0A46
cs=0x1a2;eip=0x000a4b; 	T(ADD(sp, 6));	// 1139 add     sp, 6 ;~ 01A2:0A4B
cs=0x1a2;eip=0x000a4e; 	X(PUSH(dx));	// 1140 push    dx ;~ 01A2:0A4E
cs=0x1a2;eip=0x000a4f; 	X(PUSH(ax));	// 1141 push    ax ;~ 01A2:0A4F
cs=0x1a2;eip=0x000a50; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1142 mov     ax, offset resID_byte1 ;~ 01A2:0A50
cs=0x1a2;eip=0x000a53; 	X(PUSH(ax));	// 1143 push    ax ;~ 01A2:0A53
cs=0x1a2;eip=0x000a54; 	R(CALLF(copy_string,0));	// 1144 call    copy_string ;~ 01A2:0A54
cs=0x1a2;eip=0x000a59; 	T(ADD(sp, 6));	// 1145 add     sp, 6 ;~ 01A2:0A59
cs=0x1a2;eip=0x000a5c; 	X(PUSH(word_407d6));	// 1146 push    word_407D6 ;~ 01A2:0A5C
cs=0x1a2;eip=0x000a60; 	X(PUSH(word_407d4));	// 1147 push    word_407D4 ;~ 01A2:0A60
cs=0x1a2;eip=0x000a64; 	T(MOV(ax, 0x68));	// 1148 mov     ax, 68h ; 'h' ;~ 01A2:0A64
cs=0x1a2;eip=0x000a67; 	X(PUSH(ax));	// 1149 push    ax ;~ 01A2:0A67
cs=0x1a2;eip=0x000a68; 	T(MOV(ax, 0x14));	// 1150 mov     ax, 14h ;~ 01A2:0A68
cs=0x1a2;eip=0x000a6b; 	X(PUSH(ax));	// 1151 push    ax ;~ 01A2:0A6B
cs=0x1a2;eip=0x000a6c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1152 mov     ax, offset resID_byte1 ;~ 01A2:0A6C
cs=0x1a2;eip=0x000a6f; 	X(PUSH(ax));	// 1153 push    ax ;~ 01A2:0A6F
cs=0x1a2;eip=0x000a70; 	R(CALLF(intro_draw_text,0));	// 1154 call    intro_draw_text ;~ 01A2:0A70
cs=0x1a2;eip=0x000a75; 	T(ADD(sp, 0x0A));	// 1155 add     sp, 0Ah ;~ 01A2:0A75
cs=0x1a2;eip=0x000a78; 	T(MOV(ax, offset(dseg,agkri)));	// 1156 mov     ax, offset aGkri ; "gkri" ;~ 01A2:0A78
cs=0x1a2;eip=0x000a7b; 	X(PUSH(ax));	// 1157 push    ax ;~ 01A2:0A7B
cs=0x1a2;eip=0x000a7c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1158 push    [bp+var_38] ;~ 01A2:0A7C
cs=0x1a2;eip=0x000a7f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1159 push    [bp+var_3A] ;~ 01A2:0A7F
cs=0x1a2;eip=0x000a82; 	R(CALLF(locate_shape_alt,0));	// 1160 call    locate_shape_alt ;~ 01A2:0A82
cs=0x1a2;eip=0x000a87; 	T(ADD(sp, 6));	// 1161 add     sp, 6 ;~ 01A2:0A87
cs=0x1a2;eip=0x000a8a; 	X(PUSH(dx));	// 1162 push    dx ;~ 01A2:0A8A
cs=0x1a2;eip=0x000a8b; 	X(PUSH(ax));	// 1163 push    ax ;~ 01A2:0A8B
cs=0x1a2;eip=0x000a8c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1164 mov     ax, offset resID_byte1 ;~ 01A2:0A8C
cs=0x1a2;eip=0x000a8f; 	X(PUSH(ax));	// 1165 push    ax ;~ 01A2:0A8F
cs=0x1a2;eip=0x000a90; 	R(CALLF(copy_string,0));	// 1166 call    copy_string ;~ 01A2:0A90
cs=0x1a2;eip=0x000a95; 	T(ADD(sp, 6));	// 1167 add     sp, 6 ;~ 01A2:0A95
cs=0x1a2;eip=0x000a98; 	X(PUSH(word_407d6));	// 1168 push    word_407D6 ;~ 01A2:0A98
cs=0x1a2;eip=0x000a9c; 	X(PUSH(word_407d4));	// 1169 push    word_407D4 ;~ 01A2:0A9C
cs=0x1a2;eip=0x000aa0; 	T(MOV(ax, 0x70));	// 1170 mov     ax, 70h ; 'p' ;~ 01A2:0AA0
cs=0x1a2;eip=0x000aa3; 	X(PUSH(ax));	// 1171 push    ax ;~ 01A2:0AA3
cs=0x1a2;eip=0x000aa4; 	T(MOV(ax, 0x14));	// 1172 mov     ax, 14h ;~ 01A2:0AA4
cs=0x1a2;eip=0x000aa7; 	X(PUSH(ax));	// 1173 push    ax ;~ 01A2:0AA7
cs=0x1a2;eip=0x000aa8; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1174 mov     ax, offset resID_byte1 ;~ 01A2:0AA8
cs=0x1a2;eip=0x000aab; 	X(PUSH(ax));	// 1175 push    ax ;~ 01A2:0AAB
cs=0x1a2;eip=0x000aac; 	R(CALLF(intro_draw_text,0));	// 1176 call    intro_draw_text ;~ 01A2:0AAC
cs=0x1a2;eip=0x000ab1; 	T(ADD(sp, 0x0A));	// 1177 add     sp, 0Ah ;~ 01A2:0AB1
cs=0x1a2;eip=0x000ab4; 	T(MOV(ax, offset(dseg,agbri)));	// 1178 mov     ax, offset aGbri ; "gbri" ;~ 01A2:0AB4
cs=0x1a2;eip=0x000ab7; 	X(PUSH(ax));	// 1179 push    ax ;~ 01A2:0AB7
cs=0x1a2;eip=0x000ab8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1180 push    [bp+var_38] ;~ 01A2:0AB8
cs=0x1a2;eip=0x000abb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1181 push    [bp+var_3A] ;~ 01A2:0ABB
cs=0x1a2;eip=0x000abe; 	R(CALLF(locate_shape_alt,0));	// 1182 call    locate_shape_alt ;~ 01A2:0ABE
cs=0x1a2;eip=0x000ac3; 	T(ADD(sp, 6));	// 1183 add     sp, 6 ;~ 01A2:0AC3
cs=0x1a2;eip=0x000ac6; 	X(PUSH(dx));	// 1184 push    dx ;~ 01A2:0AC6
cs=0x1a2;eip=0x000ac7; 	X(PUSH(ax));	// 1185 push    ax ;~ 01A2:0AC7
cs=0x1a2;eip=0x000ac8; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1186 mov     ax, offset resID_byte1 ;~ 01A2:0AC8
cs=0x1a2;eip=0x000acb; 	X(PUSH(ax));	// 1187 push    ax ;~ 01A2:0ACB
cs=0x1a2;eip=0x000acc; 	R(CALLF(copy_string,0));	// 1188 call    copy_string ;~ 01A2:0ACC
cs=0x1a2;eip=0x000ad1; 	T(ADD(sp, 6));	// 1189 add     sp, 6 ;~ 01A2:0AD1
cs=0x1a2;eip=0x000ad4; 	X(PUSH(word_407d6));	// 1190 push    word_407D6 ;~ 01A2:0AD4
cs=0x1a2;eip=0x000ad8; 	X(PUSH(word_407d4));	// 1191 push    word_407D4 ;~ 01A2:0AD8
cs=0x1a2;eip=0x000adc; 	T(MOV(ax, 0x78));	// 1192 mov     ax, 78h ; 'x' ;~ 01A2:0ADC
cs=0x1a2;eip=0x000adf; 	X(PUSH(ax));	// 1193 push    ax ;~ 01A2:0ADF
cs=0x1a2;eip=0x000ae0; 	T(MOV(ax, 0x14));	// 1194 mov     ax, 14h ;~ 01A2:0AE0
cs=0x1a2;eip=0x000ae3; 	X(PUSH(ax));	// 1195 push    ax ;~ 01A2:0AE3
cs=0x1a2;eip=0x000ae4; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1196 mov     ax, offset resID_byte1 ;~ 01A2:0AE4
cs=0x1a2;eip=0x000ae7; 	X(PUSH(ax));	// 1197 push    ax ;~ 01A2:0AE7
cs=0x1a2;eip=0x000ae8; 	R(CALLF(intro_draw_text,0));	// 1198 call    intro_draw_text ;~ 01A2:0AE8
cs=0x1a2;eip=0x000aed; 	T(ADD(sp, 0x0A));	// 1199 add     sp, 0Ah ;~ 01A2:0AED
cs=0x1a2;eip=0x000af0; 	T(MOV(ax, offset(dseg,apro)));	// 1200 mov     ax, offset aPro ; "pro" ;~ 01A2:0AF0
cs=0x1a2;eip=0x000af3; 	X(PUSH(ax));	// 1201 push    ax ;~ 01A2:0AF3
cs=0x1a2;eip=0x000af4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1202 push    [bp+var_38] ;~ 01A2:0AF4
cs=0x1a2;eip=0x000af7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1203 push    [bp+var_3A] ;~ 01A2:0AF7
cs=0x1a2;eip=0x000afa; 	R(CALLF(locate_text_res,0));	// 1204 call    locate_text_res ;~ 01A2:0AFA
cs=0x1a2;eip=0x000aff; 	T(ADD(sp, 6));	// 1205 add     sp, 6 ;~ 01A2:0AFF
cs=0x1a2;eip=0x000b02; 	X(PUSH(dx));	// 1206 push    dx ;~ 01A2:0B02
cs=0x1a2;eip=0x000b03; 	X(PUSH(ax));	// 1207 push    ax ;~ 01A2:0B03
cs=0x1a2;eip=0x000b04; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1208 mov     ax, offset resID_byte1 ;~ 01A2:0B04
cs=0x1a2;eip=0x000b07; 	X(PUSH(ax));	// 1209 push    ax ;~ 01A2:0B07
cs=0x1a2;eip=0x000b08; 	R(CALLF(copy_string,0));	// 1210 call    copy_string ;~ 01A2:0B08
cs=0x1a2;eip=0x000b0d; 	T(ADD(sp, 6));	// 1211 add     sp, 6 ;~ 01A2:0B0D
cs=0x1a2;eip=0x000b10; 	X(PUSH(word_407e2));	// 1212 push    word_407E2 ;~ 01A2:0B10
cs=0x1a2;eip=0x000b14; 	X(PUSH(word_407e0));	// 1213 push    word_407E0 ;~ 01A2:0B14
cs=0x1a2;eip=0x000b18; 	T(MOV(ax, 0x20));	// 1214 mov     ax, 20h ; ' ' ;~ 01A2:0B18
cs=0x1a2;eip=0x000b1b; 	X(PUSH(ax));	// 1215 push    ax ;~ 01A2:0B1B
cs=0x1a2;eip=0x000b1c; 	T(MOV(ax, 0x0AC));	// 1216 mov     ax, 0ACh ; '¬' ;~ 01A2:0B1C
cs=0x1a2;eip=0x000b1f; 	X(PUSH(ax));	// 1217 push    ax ;~ 01A2:0B1F
cs=0x1a2;eip=0x000b20; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1218 mov     ax, offset resID_byte1 ;~ 01A2:0B20
cs=0x1a2;eip=0x000b23; 	X(PUSH(ax));	// 1219 push    ax ;~ 01A2:0B23
cs=0x1a2;eip=0x000b24; 	R(CALLF(intro_draw_text,0));	// 1220 call    intro_draw_text ;~ 01A2:0B24
cs=0x1a2;eip=0x000b29; 	T(ADD(sp, 0x0A));	// 1221 add     sp, 0Ah ;~ 01A2:0B29
cs=0x1a2;eip=0x000b2c; 	T(MOV(ax, offset(dseg,agkev_0)));	// 1222 mov     ax, offset aGkev_0 ; "gkev" ;~ 01A2:0B2C
cs=0x1a2;eip=0x000b2f; 	X(PUSH(ax));	// 1223 push    ax ;~ 01A2:0B2F
cs=0x1a2;eip=0x000b30; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1224 push    [bp+var_38] ;~ 01A2:0B30
cs=0x1a2;eip=0x000b33; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1225 push    [bp+var_3A] ;~ 01A2:0B33
cs=0x1a2;eip=0x000b36; 	R(CALLF(locate_shape_alt,0));	// 1226 call    locate_shape_alt ;~ 01A2:0B36
cs=0x1a2;eip=0x000b3b; 	T(ADD(sp, 6));	// 1227 add     sp, 6 ;~ 01A2:0B3B
cs=0x1a2;eip=0x000b3e; 	X(PUSH(dx));	// 1228 push    dx ;~ 01A2:0B3E
cs=0x1a2;eip=0x000b3f; 	X(PUSH(ax));	// 1229 push    ax ;~ 01A2:0B3F
cs=0x1a2;eip=0x000b40; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1230 mov     ax, offset resID_byte1 ;~ 01A2:0B40
cs=0x1a2;eip=0x000b43; 	X(PUSH(ax));	// 1231 push    ax ;~ 01A2:0B43
cs=0x1a2;eip=0x000b44; 	R(CALLF(copy_string,0));	// 1232 call    copy_string ;~ 01A2:0B44
cs=0x1a2;eip=0x000b49; 	T(ADD(sp, 6));	// 1233 add     sp, 6 ;~ 01A2:0B49
cs=0x1a2;eip=0x000b4c; 	X(PUSH(word_407d6));	// 1234 push    word_407D6 ;~ 01A2:0B4C
cs=0x1a2;eip=0x000b50; 	X(PUSH(word_407d4));	// 1235 push    word_407D4 ;~ 01A2:0B50
cs=0x1a2;eip=0x000b54; 	T(MOV(ax, 0x2C));	// 1236 mov     ax, 2Ch ; ',' ;~ 01A2:0B54
cs=0x1a2;eip=0x000b57; 	X(PUSH(ax));	// 1237 push    ax ;~ 01A2:0B57
cs=0x1a2;eip=0x000b58; 	T(MOV(ax, 0x0AC));	// 1238 mov     ax, 0ACh ; '¬' ;~ 01A2:0B58
cs=0x1a2;eip=0x000b5b; 	X(PUSH(ax));	// 1239 push    ax ;~ 01A2:0B5B
cs=0x1a2;eip=0x000b5c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1240 mov     ax, offset resID_byte1 ;~ 01A2:0B5C
cs=0x1a2;eip=0x000b5f; 	X(PUSH(ax));	// 1241 push    ax ;~ 01A2:0B5F
cs=0x1a2;eip=0x000b60; 	R(CALLF(intro_draw_text,0));	// 1242 call    intro_draw_text ;~ 01A2:0B60
cs=0x1a2;eip=0x000b65; 	T(ADD(sp, 0x0A));	// 1243 add     sp, 0Ah ;~ 01A2:0B65
cs=0x1a2;eip=0x000b68; 	T(MOV(ax, offset(dseg,aopr)));	// 1244 mov     ax, offset aOpr ; "opr" ;~ 01A2:0B68
cs=0x1a2;eip=0x000b6b; 	X(PUSH(ax));	// 1245 push    ax ;~ 01A2:0B6B
cs=0x1a2;eip=0x000b6c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1246 push    [bp+var_38] ;~ 01A2:0B6C
cs=0x1a2;eip=0x000b6f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1247 push    [bp+var_3A] ;~ 01A2:0B6F
cs=0x1a2;eip=0x000b72; 	R(CALLF(locate_text_res,0));	// 1248 call    locate_text_res ;~ 01A2:0B72
cs=0x1a2;eip=0x000b77; 	T(ADD(sp, 6));	// 1249 add     sp, 6 ;~ 01A2:0B77
cs=0x1a2;eip=0x000b7a; 	X(PUSH(dx));	// 1250 push    dx ;~ 01A2:0B7A
cs=0x1a2;eip=0x000b7b; 	X(PUSH(ax));	// 1251 push    ax ;~ 01A2:0B7B
cs=0x1a2;eip=0x000b7c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1252 mov     ax, offset resID_byte1 ;~ 01A2:0B7C
cs=0x1a2;eip=0x000b7f; 	X(PUSH(ax));	// 1253 push    ax ;~ 01A2:0B7F
cs=0x1a2;eip=0x000b80; 	R(CALLF(copy_string,0));	// 1254 call    copy_string ;~ 01A2:0B80
cs=0x1a2;eip=0x000b85; 	T(ADD(sp, 6));	// 1255 add     sp, 6 ;~ 01A2:0B85
cs=0x1a2;eip=0x000b88; 	X(PUSH(word_407e2));	// 1256 push    word_407E2 ;~ 01A2:0B88
cs=0x1a2;eip=0x000b8c; 	X(PUSH(word_407e0));	// 1257 push    word_407E0 ;~ 01A2:0B8C
cs=0x1a2;eip=0x000b90; 	T(MOV(ax, 0x38));	// 1258 mov     ax, 38h ; '8' ;~ 01A2:0B90
cs=0x1a2;eip=0x000b93; 	X(PUSH(ax));	// 1259 push    ax ;~ 01A2:0B93
cs=0x1a2;eip=0x000b94; 	T(MOV(ax, 0x0AC));	// 1260 mov     ax, 0ACh ; '¬' ;~ 01A2:0B94
cs=0x1a2;eip=0x000b97; 	X(PUSH(ax));	// 1261 push    ax ;~ 01A2:0B97
cs=0x1a2;eip=0x000b98; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1262 mov     ax, offset resID_byte1 ;~ 01A2:0B98
cs=0x1a2;eip=0x000b9b; 	X(PUSH(ax));	// 1263 push    ax ;~ 01A2:0B9B
cs=0x1a2;eip=0x000b9c; 	R(CALLF(intro_draw_text,0));	// 1264 call    intro_draw_text ;~ 01A2:0B9C
cs=0x1a2;eip=0x000ba1; 	T(ADD(sp, 0x0A));	// 1265 add     sp, 0Ah ;~ 01A2:0BA1
cs=0x1a2;eip=0x000ba4; 	T(MOV(ax, offset(dseg,agbra_0)));	// 1266 mov     ax, offset aGbra_0 ; "gbra" ;~ 01A2:0BA4
cs=0x1a2;eip=0x000ba7; 	X(PUSH(ax));	// 1267 push    ax ;~ 01A2:0BA7
cs=0x1a2;eip=0x000ba8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1268 push    [bp+var_38] ;~ 01A2:0BA8
cs=0x1a2;eip=0x000bab; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1269 push    [bp+var_3A] ;~ 01A2:0BAB
cs=0x1a2;eip=0x000bae; 	R(CALLF(locate_shape_alt,0));	// 1270 call    locate_shape_alt ;~ 01A2:0BAE
cs=0x1a2;eip=0x000bb3; 	T(ADD(sp, 6));	// 1271 add     sp, 6 ;~ 01A2:0BB3
cs=0x1a2;eip=0x000bb6; 	X(PUSH(dx));	// 1272 push    dx ;~ 01A2:0BB6
cs=0x1a2;eip=0x000bb7; 	X(PUSH(ax));	// 1273 push    ax ;~ 01A2:0BB7
cs=0x1a2;eip=0x000bb8; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1274 mov     ax, offset resID_byte1 ;~ 01A2:0BB8
cs=0x1a2;eip=0x000bbb; 	X(PUSH(ax));	// 1275 push    ax ;~ 01A2:0BBB
cs=0x1a2;eip=0x000bbc; 	R(CALLF(copy_string,0));	// 1276 call    copy_string ;~ 01A2:0BBC
cs=0x1a2;eip=0x000bc1; 	T(ADD(sp, 6));	// 1277 add     sp, 6 ;~ 01A2:0BC1
cs=0x1a2;eip=0x000bc4; 	X(PUSH(word_407d6));	// 1278 push    word_407D6 ;~ 01A2:0BC4
cs=0x1a2;eip=0x000bc8; 	X(PUSH(word_407d4));	// 1279 push    word_407D4 ;~ 01A2:0BC8
cs=0x1a2;eip=0x000bcc; 	T(MOV(ax, 0x40));	// 1280 mov     ax, 40h ; '@' ;~ 01A2:0BCC
cs=0x1a2;eip=0x000bcf; 	X(PUSH(ax));	// 1281 push    ax ;~ 01A2:0BCF
cs=0x1a2;eip=0x000bd0; 	T(MOV(ax, 0x0AC));	// 1282 mov     ax, 0ACh ; '¬' ;~ 01A2:0BD0
cs=0x1a2;eip=0x000bd3; 	X(PUSH(ax));	// 1283 push    ax ;~ 01A2:0BD3
cs=0x1a2;eip=0x000bd4; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1284 mov     ax, offset resID_byte1 ;~ 01A2:0BD4
cs=0x1a2;eip=0x000bd7; 	X(PUSH(ax));	// 1285 push    ax ;~ 01A2:0BD7
cs=0x1a2;eip=0x000bd8; 	R(CALLF(intro_draw_text,0));	// 1286 call    intro_draw_text ;~ 01A2:0BD8
cs=0x1a2;eip=0x000bdd; 	T(ADD(sp, 0x0A));	// 1287 add     sp, 0Ah ;~ 01A2:0BDD
cs=0x1a2;eip=0x000be0; 	T(MOV(ax, offset(dseg,agric)));	// 1288 mov     ax, offset aGric ; "gric" ;~ 01A2:0BE0
cs=0x1a2;eip=0x000be3; 	X(PUSH(ax));	// 1289 push    ax ;~ 01A2:0BE3
cs=0x1a2;eip=0x000be4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1290 push    [bp+var_38] ;~ 01A2:0BE4
cs=0x1a2;eip=0x000be7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1291 push    [bp+var_3A] ;~ 01A2:0BE7
cs=0x1a2;eip=0x000bea; 	R(CALLF(locate_shape_alt,0));	// 1292 call    locate_shape_alt ;~ 01A2:0BEA
cs=0x1a2;eip=0x000bef; 	T(ADD(sp, 6));	// 1293 add     sp, 6 ;~ 01A2:0BEF
cs=0x1a2;eip=0x000bf2; 	X(PUSH(dx));	// 1294 push    dx ;~ 01A2:0BF2
cs=0x1a2;eip=0x000bf3; 	X(PUSH(ax));	// 1295 push    ax ;~ 01A2:0BF3
cs=0x1a2;eip=0x000bf4; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1296 mov     ax, offset resID_byte1 ;~ 01A2:0BF4
cs=0x1a2;eip=0x000bf7; 	X(PUSH(ax));	// 1297 push    ax ;~ 01A2:0BF7
cs=0x1a2;eip=0x000bf8; 	R(CALLF(copy_string,0));	// 1298 call    copy_string ;~ 01A2:0BF8
cs=0x1a2;eip=0x000bfd; 	T(ADD(sp, 6));	// 1299 add     sp, 6 ;~ 01A2:0BFD
cs=0x1a2;eip=0x000c00; 	X(PUSH(word_407d6));	// 1300 push    word_407D6 ;~ 01A2:0C00
cs=0x1a2;eip=0x000c04; 	X(PUSH(word_407d4));	// 1301 push    word_407D4 ;~ 01A2:0C04
cs=0x1a2;eip=0x000c08; 	T(MOV(ax, 0x48));	// 1302 mov     ax, 48h ; 'H' ;~ 01A2:0C08
cs=0x1a2;eip=0x000c0b; 	X(PUSH(ax));	// 1303 push    ax ;~ 01A2:0C0B
cs=0x1a2;eip=0x000c0c; 	T(MOV(ax, 0x0AC));	// 1304 mov     ax, 0ACh ; '¬' ;~ 01A2:0C0C
cs=0x1a2;eip=0x000c0f; 	X(PUSH(ax));	// 1305 push    ax ;~ 01A2:0C0F
cs=0x1a2;eip=0x000c10; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1306 mov     ax, offset resID_byte1 ;~ 01A2:0C10
cs=0x1a2;eip=0x000c13; 	X(PUSH(ax));	// 1307 push    ax ;~ 01A2:0C13
cs=0x1a2;eip=0x000c14; 	R(CALLF(intro_draw_text,0));	// 1308 call    intro_draw_text ;~ 01A2:0C14
cs=0x1a2;eip=0x000c19; 	T(ADD(sp, 0x0A));	// 1309 add     sp, 0Ah ;~ 01A2:0C19
cs=0x1a2;eip=0x000c1c; 	T(MOV(ax, offset(dseg,aart)));	// 1310 mov     ax, offset aArt ; "art" ;~ 01A2:0C1C
cs=0x1a2;eip=0x000c1f; 	X(PUSH(ax));	// 1311 push    ax ;~ 01A2:0C1F
cs=0x1a2;eip=0x000c20; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1312 push    [bp+var_38] ;~ 01A2:0C20
cs=0x1a2;eip=0x000c23; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1313 push    [bp+var_3A] ;~ 01A2:0C23
cs=0x1a2;eip=0x000c26; 	R(CALLF(locate_text_res,0));	// 1314 call    locate_text_res ;~ 01A2:0C26
cs=0x1a2;eip=0x000c2b; 	T(ADD(sp, 6));	// 1315 add     sp, 6 ;~ 01A2:0C2B
cs=0x1a2;eip=0x000c2e; 	X(PUSH(dx));	// 1316 push    dx ;~ 01A2:0C2E
cs=0x1a2;eip=0x000c2f; 	X(PUSH(ax));	// 1317 push    ax ;~ 01A2:0C2F
cs=0x1a2;eip=0x000c30; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1318 mov     ax, offset resID_byte1 ;~ 01A2:0C30
cs=0x1a2;eip=0x000c33; 	X(PUSH(ax));	// 1319 push    ax ;~ 01A2:0C33
cs=0x1a2;eip=0x000c34; 	R(CALLF(copy_string,0));	// 1320 call    copy_string ;~ 01A2:0C34
cs=0x1a2;eip=0x000c39; 	T(ADD(sp, 6));	// 1321 add     sp, 6 ;~ 01A2:0C39
cs=0x1a2;eip=0x000c3c; 	X(PUSH(word_407e6));	// 1322 push    word_407E6 ;~ 01A2:0C3C
cs=0x1a2;eip=0x000c40; 	X(PUSH(word_407e4));	// 1323 push    word_407E4 ;~ 01A2:0C40
cs=0x1a2;eip=0x000c44; 	T(MOV(ax, 0x54));	// 1324 mov     ax, 54h ; 'T' ;~ 01A2:0C44
cs=0x1a2;eip=0x000c47; 	X(PUSH(ax));	// 1325 push    ax ;~ 01A2:0C47
cs=0x1a2;eip=0x000c48; 	T(MOV(ax, 0x0AC));	// 1326 mov     ax, 0ACh ; '¬' ;~ 01A2:0C48
cs=0x1a2;eip=0x000c4b; 	X(PUSH(ax));	// 1327 push    ax ;~ 01A2:0C4B
cs=0x1a2;eip=0x000c4c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1328 mov     ax, offset resID_byte1 ;~ 01A2:0C4C
cs=0x1a2;eip=0x000c4f; 	X(PUSH(ax));	// 1329 push    ax ;~ 01A2:0C4F
cs=0x1a2;eip=0x000c50; 	R(CALLF(intro_draw_text,0));	// 1330 call    intro_draw_text ;~ 01A2:0C50
cs=0x1a2;eip=0x000c55; 	T(ADD(sp, 0x0A));	// 1331 add     sp, 0Ah ;~ 01A2:0C55
cs=0x1a2;eip=0x000c58; 	T(MOV(ax, offset(dseg,agmsm)));	// 1332 mov     ax, offset aGmsm ; "gmsm" ;~ 01A2:0C58
cs=0x1a2;eip=0x000c5b; 	X(PUSH(ax));	// 1333 push    ax ;~ 01A2:0C5B
cs=0x1a2;eip=0x000c5c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1334 push    [bp+var_38] ;~ 01A2:0C5C
cs=0x1a2;eip=0x000c5f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1335 push    [bp+var_3A] ;~ 01A2:0C5F
cs=0x1a2;eip=0x000c62; 	R(CALLF(locate_shape_alt,0));	// 1336 call    locate_shape_alt ;~ 01A2:0C62
cs=0x1a2;eip=0x000c67; 	T(ADD(sp, 6));	// 1337 add     sp, 6 ;~ 01A2:0C67
cs=0x1a2;eip=0x000c6a; 	X(PUSH(dx));	// 1338 push    dx ;~ 01A2:0C6A
cs=0x1a2;eip=0x000c6b; 	X(PUSH(ax));	// 1339 push    ax ;~ 01A2:0C6B
cs=0x1a2;eip=0x000c6c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1340 mov     ax, offset resID_byte1 ;~ 01A2:0C6C
cs=0x1a2;eip=0x000c6f; 	X(PUSH(ax));	// 1341 push    ax ;~ 01A2:0C6F
cs=0x1a2;eip=0x000c70; 	R(CALLF(copy_string,0));	// 1342 call    copy_string ;~ 01A2:0C70
cs=0x1a2;eip=0x000c75; 	T(ADD(sp, 6));	// 1343 add     sp, 6 ;~ 01A2:0C75
cs=0x1a2;eip=0x000c78; 	X(PUSH(word_407d6));	// 1344 push    word_407D6 ;~ 01A2:0C78
cs=0x1a2;eip=0x000c7c; 	X(PUSH(word_407d4));	// 1345 push    word_407D4 ;~ 01A2:0C7C
cs=0x1a2;eip=0x000c80; 	T(MOV(ax, 0x60));	// 1346 mov     ax, 60h ; '`' ;~ 01A2:0C80
cs=0x1a2;eip=0x000c83; 	X(PUSH(ax));	// 1347 push    ax ;~ 01A2:0C83
cs=0x1a2;eip=0x000c84; 	T(MOV(ax, 0x0AC));	// 1348 mov     ax, 0ACh ; '¬' ;~ 01A2:0C84
cs=0x1a2;eip=0x000c87; 	X(PUSH(ax));	// 1349 push    ax ;~ 01A2:0C87
cs=0x1a2;eip=0x000c88; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1350 mov     ax, offset resID_byte1 ;~ 01A2:0C88
cs=0x1a2;eip=0x000c8b; 	X(PUSH(ax));	// 1351 push    ax ;~ 01A2:0C8B
cs=0x1a2;eip=0x000c8c; 	R(CALLF(intro_draw_text,0));	// 1352 call    intro_draw_text ;~ 01A2:0C8C
cs=0x1a2;eip=0x000c91; 	T(ADD(sp, 0x0A));	// 1353 add     sp, 0Ah ;~ 01A2:0C91
cs=0x1a2;eip=0x000c94; 	T(MOV(ax, offset(dseg,agdav)));	// 1354 mov     ax, offset aGdav ; "gdav" ;~ 01A2:0C94
cs=0x1a2;eip=0x000c97; 	X(PUSH(ax));	// 1355 push    ax ;~ 01A2:0C97
cs=0x1a2;eip=0x000c98; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1356 push    [bp+var_38] ;~ 01A2:0C98
cs=0x1a2;eip=0x000c9b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1357 push    [bp+var_3A] ;~ 01A2:0C9B
cs=0x1a2;eip=0x000c9e; 	R(CALLF(locate_shape_alt,0));	// 1358 call    locate_shape_alt ;~ 01A2:0C9E
cs=0x1a2;eip=0x000ca3; 	T(ADD(sp, 6));	// 1359 add     sp, 6 ;~ 01A2:0CA3
cs=0x1a2;eip=0x000ca6; 	X(PUSH(dx));	// 1360 push    dx ;~ 01A2:0CA6
cs=0x1a2;eip=0x000ca7; 	X(PUSH(ax));	// 1361 push    ax ;~ 01A2:0CA7
cs=0x1a2;eip=0x000ca8; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1362 mov     ax, offset resID_byte1 ;~ 01A2:0CA8
cs=0x1a2;eip=0x000cab; 	X(PUSH(ax));	// 1363 push    ax ;~ 01A2:0CAB
cs=0x1a2;eip=0x000cac; 	R(CALLF(copy_string,0));	// 1364 call    copy_string ;~ 01A2:0CAC
cs=0x1a2;eip=0x000cb1; 	T(ADD(sp, 6));	// 1365 add     sp, 6 ;~ 01A2:0CB1
cs=0x1a2;eip=0x000cb4; 	X(PUSH(word_407d6));	// 1366 push    word_407D6 ;~ 01A2:0CB4
cs=0x1a2;eip=0x000cb8; 	X(PUSH(word_407d4));	// 1367 push    word_407D4 ;~ 01A2:0CB8
cs=0x1a2;eip=0x000cbc; 	T(MOV(ax, 0x68));	// 1368 mov     ax, 68h ; 'h' ;~ 01A2:0CBC
cs=0x1a2;eip=0x000cbf; 	X(PUSH(ax));	// 1369 push    ax ;~ 01A2:0CBF
cs=0x1a2;eip=0x000cc0; 	T(MOV(ax, 0x0AC));	// 1370 mov     ax, 0ACh ; '¬' ;~ 01A2:0CC0
cs=0x1a2;eip=0x000cc3; 	X(PUSH(ax));	// 1371 push    ax ;~ 01A2:0CC3
cs=0x1a2;eip=0x000cc4; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1372 mov     ax, offset resID_byte1 ;~ 01A2:0CC4
cs=0x1a2;eip=0x000cc7; 	X(PUSH(ax));	// 1373 push    ax ;~ 01A2:0CC7
cs=0x1a2;eip=0x000cc8; 	R(CALLF(intro_draw_text,0));	// 1374 call    intro_draw_text ;~ 01A2:0CC8
cs=0x1a2;eip=0x000ccd; 	T(ADD(sp, 0x0A));	// 1375 add     sp, 0Ah ;~ 01A2:0CCD
cs=0x1a2;eip=0x000cd0; 	T(MOV(ax, offset(dseg,agnic)));	// 1376 mov     ax, offset aGnic ; "gnic" ;~ 01A2:0CD0
cs=0x1a2;eip=0x000cd3; 	X(PUSH(ax));	// 1377 push    ax ;~ 01A2:0CD3
cs=0x1a2;eip=0x000cd4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1378 push    [bp+var_38] ;~ 01A2:0CD4
cs=0x1a2;eip=0x000cd7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1379 push    [bp+var_3A] ;~ 01A2:0CD7
cs=0x1a2;eip=0x000cda; 	R(CALLF(locate_shape_alt,0));	// 1380 call    locate_shape_alt ;~ 01A2:0CDA
cs=0x1a2;eip=0x000cdf; 	T(ADD(sp, 6));	// 1381 add     sp, 6 ;~ 01A2:0CDF
cs=0x1a2;eip=0x000ce2; 	X(PUSH(dx));	// 1382 push    dx ;~ 01A2:0CE2
cs=0x1a2;eip=0x000ce3; 	X(PUSH(ax));	// 1383 push    ax ;~ 01A2:0CE3
cs=0x1a2;eip=0x000ce4; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1384 mov     ax, offset resID_byte1 ;~ 01A2:0CE4
cs=0x1a2;eip=0x000ce7; 	X(PUSH(ax));	// 1385 push    ax ;~ 01A2:0CE7
cs=0x1a2;eip=0x000ce8; 	R(CALLF(copy_string,0));	// 1386 call    copy_string ;~ 01A2:0CE8
cs=0x1a2;eip=0x000ced; 	T(ADD(sp, 6));	// 1387 add     sp, 6 ;~ 01A2:0CED
cs=0x1a2;eip=0x000cf0; 	X(PUSH(word_407d6));	// 1388 push    word_407D6 ;~ 01A2:0CF0
cs=0x1a2;eip=0x000cf4; 	X(PUSH(word_407d4));	// 1389 push    word_407D4 ;~ 01A2:0CF4
cs=0x1a2;eip=0x000cf8; 	T(MOV(ax, 0x70));	// 1390 mov     ax, 70h ; 'p' ;~ 01A2:0CF8
cs=0x1a2;eip=0x000cfb; 	X(PUSH(ax));	// 1391 push    ax ;~ 01A2:0CFB
cs=0x1a2;eip=0x000cfc; 	T(MOV(ax, 0x0AC));	// 1392 mov     ax, 0ACh ; '¬' ;~ 01A2:0CFC
cs=0x1a2;eip=0x000cff; 	X(PUSH(ax));	// 1393 push    ax ;~ 01A2:0CFF
cs=0x1a2;eip=0x000d00; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1394 mov     ax, offset resID_byte1 ;~ 01A2:0D00
cs=0x1a2;eip=0x000d03; 	X(PUSH(ax));	// 1395 push    ax ;~ 01A2:0D03
cs=0x1a2;eip=0x000d04; 	R(CALLF(intro_draw_text,0));	// 1396 call    intro_draw_text ;~ 01A2:0D04
cs=0x1a2;eip=0x000d09; 	T(ADD(sp, 0x0A));	// 1397 add     sp, 0Ah ;~ 01A2:0D09
cs=0x1a2;eip=0x000d0c; 	T(MOV(ax, offset(dseg,agkev_1)));	// 1398 mov     ax, offset aGkev_1 ; "gkev" ;~ 01A2:0D0C
cs=0x1a2;eip=0x000d0f; 	X(PUSH(ax));	// 1399 push    ax ;~ 01A2:0D0F
cs=0x1a2;eip=0x000d10; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1400 push    [bp+var_38] ;~ 01A2:0D10
cs=0x1a2;eip=0x000d13; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1401 push    [bp+var_3A] ;~ 01A2:0D13
cs=0x1a2;eip=0x000d16; 	R(CALLF(locate_shape_alt,0));	// 1402 call    locate_shape_alt ;~ 01A2:0D16
cs=0x1a2;eip=0x000d1b; 	T(ADD(sp, 6));	// 1403 add     sp, 6 ;~ 01A2:0D1B
cs=0x1a2;eip=0x000d1e; 	X(PUSH(dx));	// 1404 push    dx ;~ 01A2:0D1E
cs=0x1a2;eip=0x000d1f; 	X(PUSH(ax));	// 1405 push    ax ;~ 01A2:0D1F
cs=0x1a2;eip=0x000d20; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1406 mov     ax, offset resID_byte1 ;~ 01A2:0D20
cs=0x1a2;eip=0x000d23; 	X(PUSH(ax));	// 1407 push    ax ;~ 01A2:0D23
cs=0x1a2;eip=0x000d24; 	R(CALLF(copy_string,0));	// 1408 call    copy_string ;~ 01A2:0D24
cs=0x1a2;eip=0x000d29; 	T(ADD(sp, 6));	// 1409 add     sp, 6 ;~ 01A2:0D29
cs=0x1a2;eip=0x000d2c; 	X(PUSH(word_407d6));	// 1410 push    word_407D6 ;~ 01A2:0D2C
cs=0x1a2;eip=0x000d30; 	X(PUSH(word_407d4));	// 1411 push    word_407D4 ;~ 01A2:0D30
cs=0x1a2;eip=0x000d34; 	T(MOV(ax, 0x78));	// 1412 mov     ax, 78h ; 'x' ;~ 01A2:0D34
cs=0x1a2;eip=0x000d37; 	X(PUSH(ax));	// 1413 push    ax ;~ 01A2:0D37
cs=0x1a2;eip=0x000d38; 	T(MOV(ax, 0x0AC));	// 1414 mov     ax, 0ACh ; '¬' ;~ 01A2:0D38
cs=0x1a2;eip=0x000d3b; 	X(PUSH(ax));	// 1415 push    ax ;~ 01A2:0D3B
cs=0x1a2;eip=0x000d3c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1416 mov     ax, offset resID_byte1 ;~ 01A2:0D3C
cs=0x1a2;eip=0x000d3f; 	X(PUSH(ax));	// 1417 push    ax ;~ 01A2:0D3F
cs=0x1a2;eip=0x000d40; 	R(CALLF(intro_draw_text,0));	// 1418 call    intro_draw_text ;~ 01A2:0D40
cs=0x1a2;eip=0x000d45; 	T(ADD(sp, 0x0A));	// 1419 add     sp, 0Ah ;~ 01A2:0D45
cs=0x1a2;eip=0x000d48; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1420 push    [bp+var_38] ;~ 01A2:0D48
cs=0x1a2;eip=0x000d4b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1421 push    [bp+var_3A] ;~ 01A2:0D4B
cs=0x1a2;eip=0x000d4e; 	R(CALLF(unload_resource,0));	// 1422 call    unload_resource ;~ 01A2:0D4E
cs=0x1a2;eip=0x000d53; 	T(ADD(sp, 4));	// 1423 add     sp, 4 ;~ 01A2:0D53
cs=0x1a2;eip=0x000d56; 	T(MOV(ax, 0x0FFFF));	// 1424 mov     ax, 0FFFFh ;~ 01A2:0D56
cs=0x1a2;eip=0x000d59; 	X(PUSH(ax));	// 1425 push    ax ;~ 01A2:0D59
cs=0x1a2;eip=0x000d5a; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 1426 push    word ptr wndsprite+2 ;~ 01A2:0D5A
cs=0x1a2;eip=0x000d5e; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 1427 push    word ptr wndsprite ;~ 01A2:0D5E
cs=0x1a2;eip=0x000d62; 	R(CALLF(sprite_blit_to_video,0));	// 1428 call    sprite_blit_to_video ;~ 01A2:0D62
cs=0x1a2;eip=0x000d67; 	T(ADD(sp, 6));	// 1429 add     sp, 6 ;~ 01A2:0D67
cs=0x1a2;eip=0x000d6a; 	R(CALLF(sprite_copy_2_to_1_2,0));	// 1430 call    sprite_copy_2_to_1_2 ;~ 01A2:0D6A
cs=0x1a2;eip=0x000d6f; 	R(CALLF(timer_get_delta_alt,0));	// 1431 call    timer_get_delta_alt ;~ 01A2:0D6F
cs=0x1a2;eip=0x000d74; 	T(MOV(si, 0x14A));	// 1432 mov     si, 14Ah ;~ 01A2:0D74
loc_10d77:
	// 4423 
cs=0x1a2;eip=0x000d77; 	R(CALLF(timer_get_delta_alt,0));	// 1435 call    timer_get_delta_alt ;~ 01A2:0D77
cs=0x1a2;eip=0x000d7c; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 1436 mov     [bp+var_40], ax ;~ 01A2:0D7C
cs=0x1a2;eip=0x000d7f; 	T(SHL(ax, 1));	// 1437 shl     ax, 1 ;~ 01A2:0D7F
cs=0x1a2;eip=0x000d81; 	T(SUB(si, ax));	// 1438 sub     si, ax ;~ 01A2:0D81
cs=0x1a2;eip=0x000d83; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), si));	// 1439 cmp     [bp+var_2], si ;~ 01A2:0D83
cs=0x1a2;eip=0x000d86; 	R(JLE(loc_10da0));	// 1440 jle     short loc_10DA0 ;~ 01A2:0D86
loc_10d88:
	// 4424 
cs=0x1a2;eip=0x000d88; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_34))));	// 1443 les     bx, [bp+var_34] ;~ 01A2:0D88
cs=0x1a2;eip=0x000d8b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 1444 mov     ax, es:[bx+0Ah] ;~ 01A2:0D8B
cs=0x1a2;eip=0x000d8f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 1445 mov     [bp+var_4], ax ;~ 01A2:0D8F
cs=0x1a2;eip=0x000d92; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), 0));	// 1446 mov     [bp+var_36], 0 ;~ 01A2:0D92
cs=0x1a2;eip=0x000d97; 	T(SUB(si, si));	// 1447 sub     si, si ;~ 01A2:0D97
cs=0x1a2;eip=0x000d99; 	T(MOV(di, 2));	// 1448 mov     di, 2 ;~ 01A2:0D99
cs=0x1a2;eip=0x000d9c; 	R(JMP(loc_10e83));	// 1449 jmp     loc_10E83 ;~ 01A2:0D9C
loc_10da0:
	// 4425 
cs=0x1a2;eip=0x000da0; 	R(CALLF(mouse_draw_opaque_check,0));	// 1454 call    mouse_draw_opaque_check ;~ 01A2:0DA0
cs=0x1a2;eip=0x000da5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1455 push    [bp+var_4] ;~ 01A2:0DA5
cs=0x1a2;eip=0x000da8; 	X(PUSH(si));	// 1456 push    si ;~ 01A2:0DA8
cs=0x1a2;eip=0x000da9; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_30+2)))));	// 1457 push    word ptr [bp+var_30+2] ;~ 01A2:0DA9
cs=0x1a2;eip=0x000dac; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_30)))));	// 1458 push    word ptr [bp+var_30] ;~ 01A2:0DAC
cs=0x1a2;eip=0x000daf; 	R(CALLF(sprite_putimage_and_alt,0));	// 1459 call    sprite_putimage_and_alt ;~ 01A2:0DAF
cs=0x1a2;eip=0x000db4; 	T(ADD(sp, 8));	// 1460 add     sp, 8 ;~ 01A2:0DB4
cs=0x1a2;eip=0x000db7; 	T(SUB(ax, ax));	// 1461 sub     ax, ax ;~ 01A2:0DB7
cs=0x1a2;eip=0x000db9; 	X(PUSH(ax));	// 1462 push    ax ;~ 01A2:0DB9
cs=0x1a2;eip=0x000dba; 	X(PUSH(*(dw*)(raddr(ss,bp+var_44))));	// 1463 push    [bp+var_44] ;~ 01A2:0DBA
cs=0x1a2;eip=0x000dbd; 	T(MOV(ax, 0x20));	// 1464 mov     ax, 20h ; ' ' ;~ 01A2:0DBD
cs=0x1a2;eip=0x000dc0; 	X(PUSH(ax));	// 1465 push    ax ;~ 01A2:0DC0
cs=0x1a2;eip=0x000dc1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1466 push    [bp+var_4] ;~ 01A2:0DC1
cs=0x1a2;eip=0x000dc4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3e))));	// 1467 mov     ax, [bp+var_3E] ;~ 01A2:0DC4
cs=0x1a2;eip=0x000dc7; 	T(ADD(ax, si));	// 1468 add     ax, si ;~ 01A2:0DC7
cs=0x1a2;eip=0x000dc9; 	X(PUSH(ax));	// 1469 push    ax ;~ 01A2:0DC9
cs=0x1a2;eip=0x000dca; 	R(CALLF(sprite_1_unk2,0));	// 1470 call    sprite_1_unk2 ;~ 01A2:0DCA
cs=0x1a2;eip=0x000dcf; 	T(ADD(sp, 0x0A));	// 1471 add     sp, 0Ah ;~ 01A2:0DCF
cs=0x1a2;eip=0x000dd2; 	R(CALLF(mouse_draw_transparent_check,0));	// 1472 call    mouse_draw_transparent_check ;~ 01A2:0DD2
cs=0x1a2;eip=0x000dd7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40))));	// 1473 push    [bp+var_40] ;~ 01A2:0DD7
cs=0x1a2;eip=0x000dda; 	R(CALLF(input_do_checking,0));	// 1474 call    input_do_checking ;~ 01A2:0DDA
cs=0x1a2;eip=0x000ddf; 	T(ADD(sp, 2));	// 1475 add     sp, 2 ;~ 01A2:0DDF
cs=0x1a2;eip=0x000de2; 	X(MOV(*(dw*)(raddr(ss,bp+var_46)), ax));	// 1476 mov     [bp+var_46], ax ;~ 01A2:0DE2
cs=0x1a2;eip=0x000de5; 	T(OR(ax, ax));	// 1477 or      ax, ax ;~ 01A2:0DE5
cs=0x1a2;eip=0x000de7; 	R(JZ(loc_10d77));	// 1478 jz      short loc_10D77 ;~ 01A2:0DE7
cs=0x1a2;eip=0x000de9; 	R(JMP(loc_10d88));	// 1479 jmp     short loc_10D88 ;~ 01A2:0DE9
loc_10dec:
	// 4426 
cs=0x1a2;eip=0x000dec; 	R(CALLF(sprite_copy_wnd_to_1,0));	// 1484 call    sprite_copy_wnd_to_1 ;~ 01A2:0DEC
cs=0x1a2;eip=0x000df1; 	T(MOV(ax, 0x0C8));	// 1485 mov     ax, 0C8h ; 'È' ;~ 01A2:0DF1
cs=0x1a2;eip=0x000df4; 	X(PUSH(ax));	// 1486 push    ax ;~ 01A2:0DF4
cs=0x1a2;eip=0x000df5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1487 push    [bp+var_4] ;~ 01A2:0DF5
cs=0x1a2;eip=0x000df8; 	T(MOV(ax, 0x140));	// 1488 mov     ax, 140h ;~ 01A2:0DF8
cs=0x1a2;eip=0x000dfb; 	X(PUSH(ax));	// 1489 push    ax ;~ 01A2:0DFB
cs=0x1a2;eip=0x000dfc; 	T(SUB(ax, ax));	// 1490 sub     ax, ax ;~ 01A2:0DFC
cs=0x1a2;eip=0x000dfe; 	X(PUSH(ax));	// 1491 push    ax ;~ 01A2:0DFE
cs=0x1a2;eip=0x000dff; 	R(CALLF(sprite_set_1_size,0));	// 1492 call    sprite_set_1_size ;~ 01A2:0DFF
cs=0x1a2;eip=0x000e04; 	T(ADD(sp, 8));	// 1493 add     sp, 8 ;~ 01A2:0E04
cs=0x1a2;eip=0x000e07; 	T(SUB(ax, ax));	// 1494 sub     ax, ax ;~ 01A2:0E07
cs=0x1a2;eip=0x000e09; 	X(PUSH(ax));	// 1495 push    ax ;~ 01A2:0E09
cs=0x1a2;eip=0x000e0a; 	R(CALLF(sprite_clear_1_color,0));	// 1496 call    sprite_clear_1_color ;~ 01A2:0E0A
cs=0x1a2;eip=0x000e0f; 	T(ADD(sp, 2));	// 1497 add     sp, 2 ;~ 01A2:0E0F
cs=0x1a2;eip=0x000e12; 	T(MOV(bx, di));	// 1498 mov     bx, di ;~ 01A2:0E12
cs=0x1a2;eip=0x000e14; 	T(SHL(bx, 1));	// 1499 shl     bx, 1 ;~ 01A2:0E14
cs=0x1a2;eip=0x000e16; 	T(SHL(bx, 1));	// 1500 shl     bx, 1 ;~ 01A2:0E16
cs=0x1a2;eip=0x000e18; 	T(ADD(bx, bp));	// 1501 add     bx, bp ;~ 01A2:0E18
cs=0x1a2;eip=0x000e1a; 	X(PUSH(*(dw*)(raddr(ds,bx-0x32))));	// 1502 push    word ptr [bx-32h] ;~ 01A2:0E1A
cs=0x1a2;eip=0x000e1d; 	X(PUSH(*(dw*)(raddr(ds,bx-0x34))));	// 1503 push    word ptr [bx-34h] ;~ 01A2:0E1D
cs=0x1a2;eip=0x000e20; 	R(CALLF(sprite_shape_to_1_alt,0));	// 1504 call    sprite_shape_to_1_alt ;~ 01A2:0E20
cs=0x1a2;eip=0x000e25; 	T(ADD(sp, 4));	// 1505 add     sp, 4 ;~ 01A2:0E25
cs=0x1a2;eip=0x000e28; 	R(CALLF(sprite_copy_2_to_1_2,0));	// 1506 call    sprite_copy_2_to_1_2 ;~ 01A2:0E28
cs=0x1a2;eip=0x000e2d; 	T(MOV(ax, 0x0C8));	// 1507 mov     ax, 0C8h ; 'È' ;~ 01A2:0E2D
cs=0x1a2;eip=0x000e30; 	X(PUSH(ax));	// 1508 push    ax ;~ 01A2:0E30
cs=0x1a2;eip=0x000e31; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1509 push    [bp+var_4] ;~ 01A2:0E31
cs=0x1a2;eip=0x000e34; 	T(MOV(ax, 0x140));	// 1510 mov     ax, 140h ;~ 01A2:0E34
cs=0x1a2;eip=0x000e37; 	X(PUSH(ax));	// 1511 push    ax ;~ 01A2:0E37
cs=0x1a2;eip=0x000e38; 	T(SUB(ax, ax));	// 1512 sub     ax, ax ;~ 01A2:0E38
cs=0x1a2;eip=0x000e3a; 	X(PUSH(ax));	// 1513 push    ax ;~ 01A2:0E3A
cs=0x1a2;eip=0x000e3b; 	R(CALLF(sprite_set_1_size,0));	// 1514 call    sprite_set_1_size ;~ 01A2:0E3B
cs=0x1a2;eip=0x000e40; 	T(ADD(sp, 8));	// 1515 add     sp, 8 ;~ 01A2:0E40
cs=0x1a2;eip=0x000e43; 	R(CALLF(mouse_draw_opaque_check,0));	// 1516 call    mouse_draw_opaque_check ;~ 01A2:0E43
cs=0x1a2;eip=0x000e48; 	T(LES(bx, wndsprite));	// 1517 les     bx, wndsprite ;~ 01A2:0E48
cs=0x1a2;eip=0x000e4c; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 1518 push    word ptr es:[bx+2] ;~ 01A2:0E4C
cs=0x1a2;eip=0x000e50; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 1519 push    word ptr es:[bx] ;~ 01A2:0E50
cs=0x1a2;eip=0x000e53; 	R(CALLF(sprite_putimage,0));	// 1520 call    sprite_putimage ;~ 01A2:0E53
cs=0x1a2;eip=0x000e58; 	T(ADD(sp, 4));	// 1521 add     sp, 4 ;~ 01A2:0E58
cs=0x1a2;eip=0x000e5b; 	R(CALLF(mouse_draw_transparent_check,0));	// 1522 call    mouse_draw_transparent_check ;~ 01A2:0E5B
cs=0x1a2;eip=0x000e60; 	X(ADD(*(dw*)(raddr(ss,bp+var_36)), 5));	// 1523 add     [bp+var_36], 5 ;~ 01A2:0E60
cs=0x1a2;eip=0x000e64; 	R(JMP(loc_10e7d));	// 1524 jmp     short loc_10E7D ;~ 01A2:0E64
loc_10e66:
	// 4427 
cs=0x1a2;eip=0x000e66; 	R(CALLF(timer_get_delta_alt,0));	// 1528 call    timer_get_delta_alt ;~ 01A2:0E66
cs=0x1a2;eip=0x000e6b; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 1529 mov     [bp+var_40], ax ;~ 01A2:0E6B
cs=0x1a2;eip=0x000e6e; 	X(PUSH(ax));	// 1530 push    ax ;~ 01A2:0E6E
cs=0x1a2;eip=0x000e6f; 	R(CALLF(input_do_checking,0));	// 1531 call    input_do_checking ;~ 01A2:0E6F
cs=0x1a2;eip=0x000e74; 	T(ADD(sp, 2));	// 1532 add     sp, 2 ;~ 01A2:0E74
cs=0x1a2;eip=0x000e77; 	X(MOV(*(dw*)(raddr(ss,bp+var_46)), ax));	// 1533 mov     [bp+var_46], ax ;~ 01A2:0E77
cs=0x1a2;eip=0x000e7a; 	T(ADD(si, *(dw*)(raddr(ss,bp+var_40))));	// 1534 add     si, [bp+var_40] ;~ 01A2:0E7A
loc_10e7d:
	// 4428 
cs=0x1a2;eip=0x000e7d; 	T(CMP(*(dw*)(raddr(ss,bp+var_36)), si));	// 1537 cmp     [bp+var_36], si ;~ 01A2:0E7D
cs=0x1a2;eip=0x000e80; 	R(JG(loc_10e66));	// 1538 jg      short loc_10E66 ;~ 01A2:0E80
cs=0x1a2;eip=0x000e82; 	T(INC(di));	// 1539 inc     di ;~ 01A2:0E82
loc_10e83:
	// 4429 
cs=0x1a2;eip=0x000e83; 	T(CMP(di, 0x0A));	// 1542 cmp     di, 0Ah ;~ 01A2:0E83
cs=0x1a2;eip=0x000e86; 	R(JGE(loc_10e91));	// 1543 jge     short loc_10E91 ;~ 01A2:0E86
cs=0x1a2;eip=0x000e88; 	T(CMP(*(dw*)(raddr(ss,bp+var_46)), 0));	// 1544 cmp     [bp+var_46], 0 ;~ 01A2:0E88
cs=0x1a2;eip=0x000e8c; 	R(JNZ(loc_10e91));	// 1545 jnz     short loc_10E91 ;~ 01A2:0E8C
cs=0x1a2;eip=0x000e8e; 	R(JMP(loc_10dec));	// 1546 jmp     loc_10DEC ;~ 01A2:0E8E
loc_10e91:
	// 4430 
cs=0x1a2;eip=0x000e91; 	T(MOV(ax, 0x0C8));	// 1551 mov     ax, 0C8h ; 'È' ;~ 01A2:0E91
cs=0x1a2;eip=0x000e94; 	X(PUSH(ax));	// 1552 push    ax ;~ 01A2:0E94
cs=0x1a2;eip=0x000e95; 	T(SUB(ax, ax));	// 1553 sub     ax, ax ;~ 01A2:0E95
cs=0x1a2;eip=0x000e97; 	X(PUSH(ax));	// 1554 push    ax ;~ 01A2:0E97
cs=0x1a2;eip=0x000e98; 	T(MOV(ax, 0x140));	// 1555 mov     ax, 140h ;~ 01A2:0E98
cs=0x1a2;eip=0x000e9b; 	X(PUSH(ax));	// 1556 push    ax ;~ 01A2:0E9B
cs=0x1a2;eip=0x000e9c; 	T(SUB(ax, ax));	// 1557 sub     ax, ax ;~ 01A2:0E9C
cs=0x1a2;eip=0x000e9e; 	X(PUSH(ax));	// 1558 push    ax ;~ 01A2:0E9E
cs=0x1a2;eip=0x000e9f; 	R(CALLF(sprite_set_1_size,0));	// 1559 call    sprite_set_1_size ;~ 01A2:0E9F
cs=0x1a2;eip=0x000ea4; 	T(ADD(sp, 8));	// 1560 add     sp, 8 ;~ 01A2:0EA4
cs=0x1a2;eip=0x000ea7; 	R(CALLF(mouse_draw_opaque_check,0));	// 1561 call    mouse_draw_opaque_check ;~ 01A2:0EA7
cs=0x1a2;eip=0x000eac; 	T(LES(bx, wndsprite));	// 1562 les     bx, wndsprite ;~ 01A2:0EAC
cs=0x1a2;eip=0x000eb0; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 1563 push    word ptr es:[bx+2] ;~ 01A2:0EB0
cs=0x1a2;eip=0x000eb4; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 1564 push    word ptr es:[bx] ;~ 01A2:0EB4
cs=0x1a2;eip=0x000eb7; 	R(CALLF(sprite_clear_shape,0));	// 1565 call    sprite_clear_shape ;~ 01A2:0EB7
cs=0x1a2;eip=0x000ebc; 	T(ADD(sp, 4));	// 1566 add     sp, 4 ;~ 01A2:0EBC
cs=0x1a2;eip=0x000ebf; 	R(CALLF(sprite_copy_wnd_to_1,0));	// 1567 call    sprite_copy_wnd_to_1 ;~ 01A2:0EBF
cs=0x1a2;eip=0x000ec4; 	T(MOV(ax, 0x0C8));	// 1568 mov     ax, 0C8h ; 'È' ;~ 01A2:0EC4
cs=0x1a2;eip=0x000ec7; 	X(PUSH(ax));	// 1569 push    ax ;~ 01A2:0EC7
cs=0x1a2;eip=0x000ec8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1570 push    [bp+var_4] ;~ 01A2:0EC8
cs=0x1a2;eip=0x000ecb; 	T(MOV(ax, 0x140));	// 1571 mov     ax, 140h ;~ 01A2:0ECB
cs=0x1a2;eip=0x000ece; 	X(PUSH(ax));	// 1572 push    ax ;~ 01A2:0ECE
cs=0x1a2;eip=0x000ecf; 	T(SUB(ax, ax));	// 1573 sub     ax, ax ;~ 01A2:0ECF
cs=0x1a2;eip=0x000ed1; 	X(PUSH(ax));	// 1574 push    ax ;~ 01A2:0ED1
cs=0x1a2;eip=0x000ed2; 	R(CALLF(sprite_set_1_size,0));	// 1575 call    sprite_set_1_size ;~ 01A2:0ED2
cs=0x1a2;eip=0x000ed7; 	T(ADD(sp, 8));	// 1576 add     sp, 8 ;~ 01A2:0ED7
cs=0x1a2;eip=0x000eda; 	T(SUB(ax, ax));	// 1577 sub     ax, ax ;~ 01A2:0EDA
cs=0x1a2;eip=0x000edc; 	X(PUSH(ax));	// 1578 push    ax ;~ 01A2:0EDC
cs=0x1a2;eip=0x000edd; 	R(CALLF(sprite_clear_1_color,0));	// 1579 call    sprite_clear_1_color ;~ 01A2:0EDD
cs=0x1a2;eip=0x000ee2; 	T(ADD(sp, 2));	// 1580 add     sp, 2 ;~ 01A2:0EE2
cs=0x1a2;eip=0x000ee5; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_34+2)))));	// 1581 push    word ptr [bp+var_34+2] ;~ 01A2:0EE5
cs=0x1a2;eip=0x000ee8; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_34)))));	// 1582 push    word ptr [bp+var_34] ;~ 01A2:0EE8
cs=0x1a2;eip=0x000eeb; 	R(CALLF(sprite_shape_to_1_alt,0));	// 1583 call    sprite_shape_to_1_alt ;~ 01A2:0EEB
cs=0x1a2;eip=0x000ef0; 	T(ADD(sp, 4));	// 1584 add     sp, 4 ;~ 01A2:0EF0
cs=0x1a2;eip=0x000ef3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 1585 push    [bp+var_A] ;~ 01A2:0EF3
cs=0x1a2;eip=0x000ef6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 1586 push    [bp+var_C] ;~ 01A2:0EF6
cs=0x1a2;eip=0x000ef9; 	R(CALLF(sprite_shape_to_1_alt,0));	// 1587 call    sprite_shape_to_1_alt ;~ 01A2:0EF9
cs=0x1a2;eip=0x000efe; 	T(ADD(sp, 4));	// 1588 add     sp, 4 ;~ 01A2:0EFE
cs=0x1a2;eip=0x000f01; 	T(SUB(ax, ax));	// 1589 sub     ax, ax ;~ 01A2:0F01
cs=0x1a2;eip=0x000f03; 	X(PUSH(ax));	// 1590 push    ax ;~ 01A2:0F03
cs=0x1a2;eip=0x000f04; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 1591 push    word ptr wndsprite+2 ;~ 01A2:0F04
cs=0x1a2;eip=0x000f08; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 1592 push    word ptr wndsprite ;~ 01A2:0F08
cs=0x1a2;eip=0x000f0c; 	R(CALLF(sprite_blit_to_video,0));	// 1593 call    sprite_blit_to_video ;~ 01A2:0F0C
cs=0x1a2;eip=0x000f11; 	T(ADD(sp, 6));	// 1594 add     sp, 6 ;~ 01A2:0F11
cs=0x1a2;eip=0x000f14; 	X(MOV(*(dw*)(raddr(ss,bp+var_46)), ax));	// 1595 mov     [bp+var_46], ax ;~ 01A2:0F14
cs=0x1a2;eip=0x000f17; 	T(OR(ax, ax));	// 1596 or      ax, ax ;~ 01A2:0F17
cs=0x1a2;eip=0x000f19; 	R(JNZ(loc_10f2b));	// 1597 jnz     short loc_10F2B ;~ 01A2:0F19
cs=0x1a2;eip=0x000f1b; 	T(MOV(ax, 0x1F4));	// 1598 mov     ax, 1F4h ;~ 01A2:0F1B
cs=0x1a2;eip=0x000f1e; 	X(PUSH(ax));	// 1599 push    ax ;~ 01A2:0F1E
cs=0x1a2;eip=0x000f1f; 	R(CALLF(input_repeat_check,0));	// 1600 call    input_repeat_check ;~ 01A2:0F1F
cs=0x1a2;eip=0x000f24; 	T(ADD(sp, 2));	// 1601 add     sp, 2 ;~ 01A2:0F24
cs=0x1a2;eip=0x000f27; 	T(OR(ax, ax));	// 1602 or      ax, ax ;~ 01A2:0F27
cs=0x1a2;eip=0x000f29; 	R(JZ(loc_10f34));	// 1603 jz      short loc_10F34 ;~ 01A2:0F29
loc_10f2b:
	// 4431 
cs=0x1a2;eip=0x000f2b; 	T(MOV(ax, 1));	// 1606 mov     ax, 1 ;~ 01A2:0F2B
cs=0x1a2;eip=0x000f2e; 	X(POP(si));	// 1607 pop     si ;~ 01A2:0F2E
cs=0x1a2;eip=0x000f2f; 	X(POP(di));	// 1608 pop     di ;~ 01A2:0F2F
cs=0x1a2;eip=0x000f30; 	T(MOV(sp, bp));	// 1609 mov     sp, bp ;~ 01A2:0F30
cs=0x1a2;eip=0x000f32; 	X(POP(bp));	// 1610 pop     bp ;~ 01A2:0F32
cs=0x1a2;eip=0x000f33; 	R(RETF(0));	// 1611 retf ;~ 01A2:0F33
loc_10f34:
	// 4432 
cs=0x1a2;eip=0x000f34; 	T(SUB(ax, ax));	// 1615 sub     ax, ax ;~ 01A2:0F34
cs=0x1a2;eip=0x000f36; 	X(POP(si));	// 1616 pop     si ;~ 01A2:0F36
cs=0x1a2;eip=0x000f37; 	X(POP(di));	// 1617 pop     di ;~ 01A2:0F37
cs=0x1a2;eip=0x000f38; 	T(MOV(sp, bp));	// 1618 mov     sp, bp ;~ 01A2:0F38
cs=0x1a2;eip=0x000f3a; 	X(POP(bp));	// 1619 pop     bp ;~ 01A2:0F3A
cs=0x1a2;eip=0x000f3b; 	R(RETF(0));	// 1620 retf ;~ 01A2:0F3B
run_menu:
	// 1628 
#undef var_10
#define var_10 -0x10
	// 1630 var_10          = byte ptr -10h ;~ 01A2:0F3C
#undef var_e
#define var_e -0x0E
	// 1631 var_E           = byte ptr -0Eh ;~ 01A2:0F3C
#undef var_c
#define var_c -0x0C
	// 1632 var_C           = byte ptr -0Ch ;~ 01A2:0F3C
#undef var_a
#define var_a -0x0A
	// 1633 var_A           = word ptr -0Ah ;~ 01A2:0F3C
#undef var_8
#define var_8 -8
	// 1634 var_8           = word ptr -8 ;~ 01A2:0F3C
#undef var_6
#define var_6 -6
	// 1635 var_6           = byte ptr -6 ;~ 01A2:0F3C
#undef var_4
#define var_4 -4
	// 1636 var_4           = word ptr -4 ;~ 01A2:0F3C
#undef var_2
#define var_2 -2
	// 1637 var_2           = word ptr -2 ;~ 01A2:0F3C
ret_1a2_f3c:
	// 4433 
cs=0x1a2;eip=0x000f3c; 	X(PUSH(bp));	// 1639 push    bp ;~ 01A2:0F3C
cs=0x1a2;eip=0x000f3d; 	T(MOV(bp, sp));	// 1640 mov     bp, sp ;~ 01A2:0F3D
cs=0x1a2;eip=0x000f3f; 	T(SUB(sp, 0x10));	// 1641 sub     sp, 10h ;~ 01A2:0F3F
cs=0x1a2;eip=0x000f42; 	X(MOV(*(raddr(ss,bp+var_6)), 0x0FF));	// 1642 mov     [bp+var_6], 0FFh ;~ 01A2:0F42
cs=0x1a2;eip=0x000f46; 	X(MOV(*(raddr(ss,bp+var_10)), 0));	// 1643 mov     [bp+var_10], 0 ;~ 01A2:0F46
cs=0x1a2;eip=0x000f4a; 	X(MOV(*(raddr(ss,bp+var_c)), 0x0FF));	// 1644 mov     [bp+var_C], 0FFh ;~ 01A2:0F4A
cs=0x1a2;eip=0x000f4e; 	R(CALLF(show_waiting,0));	// 1645 call    show_waiting ;~ 01A2:0F4E
cs=0x1a2;eip=0x000f53; 	X(MOV(waitflag, 0x0B4));	// 1646 mov     waitflag, 0B4h ; '´' ;~ 01A2:0F53
cs=0x1a2;eip=0x000f59; 	T(MOV(ax, 0x0F));	// 1647 mov     ax, 0Fh ;~ 01A2:0F59
cs=0x1a2;eip=0x000f5c; 	X(PUSH(ax));	// 1648 push    ax ;~ 01A2:0F5C
cs=0x1a2;eip=0x000f5d; 	T(MOV(ax, 0x0C8));	// 1649 mov     ax, 0C8h ; 'È' ;~ 01A2:0F5D
cs=0x1a2;eip=0x000f60; 	X(PUSH(ax));	// 1650 push    ax ;~ 01A2:0F60
cs=0x1a2;eip=0x000f61; 	T(MOV(ax, 0x140));	// 1651 mov     ax, 140h ;~ 01A2:0F61
cs=0x1a2;eip=0x000f64; 	X(PUSH(ax));	// 1652 push    ax ;~ 01A2:0F64
cs=0x1a2;eip=0x000f65; 	R(CALLF(sprite_make_wnd,0));	// 1653 call    sprite_make_wnd ;~ 01A2:0F65
cs=0x1a2;eip=0x000f6a; 	T(ADD(sp, 6));	// 1654 add     sp, 6 ;~ 01A2:0F6A
cs=0x1a2;eip=0x000f6d; 	X(MOV(*(dw*)(((db*)&wndsprite)), ax));	// 1655 mov     word ptr wndsprite, ax ;~ 01A2:0F6D
cs=0x1a2;eip=0x000f70; 	X(MOV(*(dw*)(((db*)&wndsprite)+2), dx));	// 1656 mov     word ptr wndsprite+2, dx ;~ 01A2:0F70
cs=0x1a2;eip=0x000f74; 	T(MOV(ax, offset(dseg,asdmsel)));	// 1657 mov     ax, offset aSdmsel ; "sdmsel" ;~ 01A2:0F74
cs=0x1a2;eip=0x000f77; 	X(PUSH(ax));	// 1658 push    ax              ; char * ;~ 01A2:0F77
cs=0x1a2;eip=0x000f78; 	T(MOV(ax, 2));	// 1659 mov     ax, 2 ;~ 01A2:0F78
cs=0x1a2;eip=0x000f7b; 	X(PUSH(ax));	// 1660 push    ax              ; int ;~ 01A2:0F7B
cs=0x1a2;eip=0x000f7c; 	R(CALLF(file_load_resource,0));	// 1661 call    file_load_resource ;~ 01A2:0F7C
cs=0x1a2;eip=0x000f81; 	T(ADD(sp, 4));	// 1662 add     sp, 4 ;~ 01A2:0F81
cs=0x1a2;eip=0x000f84; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 1663 mov     [bp+var_4], ax ;~ 01A2:0F84
cs=0x1a2;eip=0x000f87; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 1664 mov     [bp+var_2], dx ;~ 01A2:0F87
cs=0x1a2;eip=0x000f8a; 	R(CALLF(sprite_copy_wnd_to_1,0));	// 1665 call    sprite_copy_wnd_to_1 ;~ 01A2:0F8A
cs=0x1a2;eip=0x000f8f; 	T(MOV(ax, offset(dseg,ascrn)));	// 1666 mov     ax, offset aScrn ; "scrn" ;~ 01A2:0F8F
cs=0x1a2;eip=0x000f92; 	X(PUSH(ax));	// 1667 push    ax ;~ 01A2:0F92
cs=0x1a2;eip=0x000f93; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 1668 push    [bp+var_2] ;~ 01A2:0F93
cs=0x1a2;eip=0x000f96; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1669 push    [bp+var_4] ;~ 01A2:0F96
cs=0x1a2;eip=0x000f99; 	R(CALLF(locate_shape_fatal,0));	// 1670 call    locate_shape_fatal ;~ 01A2:0F99
cs=0x1a2;eip=0x000f9e; 	T(ADD(sp, 6));	// 1671 add     sp, 6 ;~ 01A2:0F9E
cs=0x1a2;eip=0x000fa1; 	X(PUSH(dx));	// 1672 push    dx ;~ 01A2:0FA1
cs=0x1a2;eip=0x000fa2; 	X(PUSH(ax));	// 1673 push    ax ;~ 01A2:0FA2
cs=0x1a2;eip=0x000fa3; 	R(CALLF(sprite_shape_to_1_alt,0));	// 1674 call    sprite_shape_to_1_alt ;~ 01A2:0FA3
cs=0x1a2;eip=0x000fa8; 	T(ADD(sp, 4));	// 1675 add     sp, 4 ;~ 01A2:0FA8
cs=0x1a2;eip=0x000fab; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 1676 push    [bp+var_2] ;~ 01A2:0FAB
cs=0x1a2;eip=0x000fae; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1677 push    [bp+var_4] ;~ 01A2:0FAE
cs=0x1a2;eip=0x000fb1; 	R(CALLF(mmgr_free,0));	// 1678 call    mmgr_free ;~ 01A2:0FB1
cs=0x1a2;eip=0x000fb6; 	T(ADD(sp, 4));	// 1679 add     sp, 4 ;~ 01A2:0FB6
loc_10fb9:
	// 4434 
cs=0x1a2;eip=0x000fb9; 	T(MOV(al, *(raddr(ss,bp+var_c))));	// 1683 mov     al, [bp+var_C] ;~ 01A2:0FB9
cs=0x1a2;eip=0x000fbc; 	T(CMP(*(raddr(ss,bp+var_10)), al));	// 1684 cmp     [bp+var_10], al ;~ 01A2:0FBC
cs=0x1a2;eip=0x000fbf; 	R(JZ(loc_10fef));	// 1685 jz      short loc_10FEF ;~ 01A2:0FBF
cs=0x1a2;eip=0x000fc1; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 1686 mov     al, [bp+var_10] ;~ 01A2:0FC1
cs=0x1a2;eip=0x000fc4; 	X(MOV(*(raddr(ss,bp+var_c)), al));	// 1687 mov     [bp+var_C], al ;~ 01A2:0FC4
cs=0x1a2;eip=0x000fc7; 	R(CALLF(sprite_copy_wnd_to_1,0));	// 1688 call    sprite_copy_wnd_to_1 ;~ 01A2:0FC7
cs=0x1a2;eip=0x000fcc; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 1689 mov     al, [bp+var_6] ;~ 01A2:0FCC
cs=0x1a2;eip=0x000fcf; 	T(CBW);	// 1690 cbw ;~ 01A2:0FCF
cs=0x1a2;eip=0x000fd0; 	X(PUSH(ax));	// 1691 push    ax ;~ 01A2:0FD0
cs=0x1a2;eip=0x000fd1; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 1692 push    word ptr wndsprite+2 ;~ 01A2:0FD1
cs=0x1a2;eip=0x000fd5; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 1693 push    word ptr wndsprite ;~ 01A2:0FD5
cs=0x1a2;eip=0x000fd9; 	R(CALLF(sprite_blit_to_video,0));	// 1694 call    sprite_blit_to_video ;~ 01A2:0FD9
cs=0x1a2;eip=0x000fde; 	T(ADD(sp, 6));	// 1695 add     sp, 6 ;~ 01A2:0FDE
cs=0x1a2;eip=0x000fe1; 	X(MOV(*(raddr(ss,bp+var_6)), 0x0FE));	// 1696 mov     [bp+var_6], 0FEh ; 'þ' ;~ 01A2:0FE1
cs=0x1a2;eip=0x000fe5; 	R(CALLF(sprite_copy_2_to_1_2,0));	// 1697 call    sprite_copy_2_to_1_2 ;~ 01A2:0FE5
cs=0x1a2;eip=0x000fea; 	R(CALLF(sub_29772,0));	// 1698 call    sub_29772 ;~ 01A2:0FEA
loc_10fef:
	// 4435 
cs=0x1a2;eip=0x000fef; 	X(PUSH(word_407d0));	// 1701 push    word_407D0 ;~ 01A2:0FEF
cs=0x1a2;eip=0x000ff3; 	X(PUSH(word_407ce));	// 1702 push    word_407CE ;~ 01A2:0FF3
cs=0x1a2;eip=0x000ff7; 	T(MOV(ax, offset(dseg,menu_buttons_y2)));	// 1703 mov     ax, offset menu_buttons_y2 ;~ 01A2:0FF7
cs=0x1a2;eip=0x000ffa; 	X(PUSH(ax));	// 1704 push    ax ;~ 01A2:0FFA
cs=0x1a2;eip=0x000ffb; 	T(MOV(ax, offset(dseg,menu_buttons_y1)));	// 1705 mov     ax, offset menu_buttons_y1 ;~ 01A2:0FFB
cs=0x1a2;eip=0x000ffe; 	X(PUSH(ax));	// 1706 push    ax ;~ 01A2:0FFE
cs=0x1a2;eip=0x000fff; 	T(MOV(ax, offset(dseg,menu_buttons_x2)));	// 1707 mov     ax, offset menu_buttons_x2 ;~ 01A2:0FFF
cs=0x1a2;eip=0x001002; 	X(PUSH(ax));	// 1708 push    ax ;~ 01A2:1002
cs=0x1a2;eip=0x001003; 	T(MOV(ax, offset(dseg,menu_buttons_x1)));	// 1709 mov     ax, offset menu_buttons_x1 ;~ 01A2:1003
cs=0x1a2;eip=0x001006; 	X(PUSH(ax));	// 1710 push    ax ;~ 01A2:1006
cs=0x1a2;eip=0x001007; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 1711 mov     al, [bp+var_10] ;~ 01A2:1007
cs=0x1a2;eip=0x00100a; 	T(CBW);	// 1712 cbw ;~ 01A2:100A
cs=0x1a2;eip=0x00100b; 	X(PUSH(ax));	// 1713 push    ax ;~ 01A2:100B
cs=0x1a2;eip=0x00100c; 	R(CALLF(mouse_timer_sprite_unk,0));	// 1714 call    mouse_timer_sprite_unk ;~ 01A2:100C
cs=0x1a2;eip=0x001011; 	T(ADD(sp, 0x0E));	// 1715 add     sp, 0Eh ;~ 01A2:1011
cs=0x1a2;eip=0x001014; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 1716 mov     [bp+var_8], ax ;~ 01A2:1014
cs=0x1a2;eip=0x001017; 	X(PUSH(ax));	// 1717 push    ax ;~ 01A2:1017
cs=0x1a2;eip=0x001018; 	R(CALLF(input_checking,0));	// 1718 call    input_checking ;~ 01A2:1018
cs=0x1a2;eip=0x00101d; 	T(ADD(sp, 2));	// 1719 add     sp, 2 ;~ 01A2:101D
cs=0x1a2;eip=0x001020; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 1720 mov     [bp+var_A], ax ;~ 01A2:1020
cs=0x1a2;eip=0x001023; 	T(MOV(ax, offset(dseg,menu_buttons_y2)));	// 1721 mov     ax, offset menu_buttons_y2 ;~ 01A2:1023
cs=0x1a2;eip=0x001026; 	X(PUSH(ax));	// 1722 push    ax ;~ 01A2:1026
cs=0x1a2;eip=0x001027; 	T(MOV(ax, offset(dseg,menu_buttons_y1)));	// 1723 mov     ax, offset menu_buttons_y1 ;~ 01A2:1027
cs=0x1a2;eip=0x00102a; 	X(PUSH(ax));	// 1724 push    ax ;~ 01A2:102A
cs=0x1a2;eip=0x00102b; 	T(MOV(ax, offset(dseg,menu_buttons_x2)));	// 1725 mov     ax, offset menu_buttons_x2 ;~ 01A2:102B
cs=0x1a2;eip=0x00102e; 	X(PUSH(ax));	// 1726 push    ax ;~ 01A2:102E
cs=0x1a2;eip=0x00102f; 	T(MOV(ax, offset(dseg,menu_buttons_x1)));	// 1727 mov     ax, offset menu_buttons_x1 ;~ 01A2:102F
cs=0x1a2;eip=0x001032; 	X(PUSH(ax));	// 1728 push    ax ;~ 01A2:1032
cs=0x1a2;eip=0x001033; 	T(MOV(ax, 5));	// 1729 mov     ax, 5 ;~ 01A2:1033
cs=0x1a2;eip=0x001036; 	X(PUSH(ax));	// 1730 push    ax ;~ 01A2:1036
cs=0x1a2;eip=0x001037; 	R(CALLF(mouse_multi_hittest,0));	// 1731 call    mouse_multi_hittest ;~ 01A2:1037
cs=0x1a2;eip=0x00103c; 	T(ADD(sp, 0x0A));	// 1732 add     sp, 0Ah ;~ 01A2:103C
cs=0x1a2;eip=0x00103f; 	X(MOV(*(raddr(ss,bp+var_e)), al));	// 1733 mov     [bp+var_E], al ;~ 01A2:103F
cs=0x1a2;eip=0x001042; 	T(CMP(al, 0x0FF));	// 1734 cmp     al, 0FFh ;~ 01A2:1042
cs=0x1a2;eip=0x001044; 	R(JZ(loc_11049));	// 1735 jz      short loc_11049 ;~ 01A2:1044
cs=0x1a2;eip=0x001046; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 1736 mov     [bp+var_10], al ;~ 01A2:1046
loc_11049:
	// 4436 
cs=0x1a2;eip=0x001049; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 1739 mov     ax, [bp+var_8] ;~ 01A2:1049
cs=0x1a2;eip=0x00104c; 	X(ADD(idle_counter, ax));	// 1740 add     idle_counter, ax ;~ 01A2:104C
cs=0x1a2;eip=0x001050; 	T(CMP(idle_counter, 0x1770));	// 1741 cmp     idle_counter, 1770h ;~ 01A2:1050
cs=0x1a2;eip=0x001056; 	R(JLE(loc_11062));	// 1742 jle     short loc_11062 ;~ 01A2:1056
cs=0x1a2;eip=0x001058; 	X(MOV(idle_counter, 0));	// 1743 mov     idle_counter, 0 ;~ 01A2:1058
cs=0x1a2;eip=0x00105e; 	X(INC(idle_expired));	// 1744 inc     idle_expired ;~ 01A2:105E
loc_11062:
	// 4437 
cs=0x1a2;eip=0x001062; 	T(CMP(idle_expired, 0));	// 1747 cmp     idle_expired, 0 ;~ 01A2:1062
cs=0x1a2;eip=0x001067; 	R(JZ(loc_11072));	// 1748 jz      short loc_11072 ;~ 01A2:1067
cs=0x1a2;eip=0x001069; 	X(MOV(*(raddr(ss,bp+var_10)), 0));	// 1749 mov     [bp+var_10], 0  ; idle expired -> select menu 0 and keycode for enter ;~ 01A2:1069
cs=0x1a2;eip=0x00106d; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x0D));	// 1750 mov     [bp+var_A], 0Dh ;~ 01A2:106D
loc_11072:
	// 4438 
cs=0x1a2;eip=0x001072; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 1753 cmp     [bp+var_A], 0 ;~ 01A2:1072
cs=0x1a2;eip=0x001076; 	R(JNZ(loc_1107b));	// 1754 jnz     short loc_1107B ;~ 01A2:1076
cs=0x1a2;eip=0x001078; 	R(JMP(loc_10fb9));	// 1755 jmp     loc_10FB9 ;~ 01A2:1078
loc_1107b:
	// 4439 
cs=0x1a2;eip=0x00107b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 1759 mov     ax, [bp+var_A] ;~ 01A2:107B
cs=0x1a2;eip=0x00107e; 	T(CMP(ax, 0x0D));	// 1760 cmp     ax, 0Dh         ; enter ;~ 01A2:107E
cs=0x1a2;eip=0x001081; 	R(JZ(loc_110ba));	// 1761 jz      short loc_110BA ;~ 01A2:1081
cs=0x1a2;eip=0x001083; 	T(CMP(ax, 0x1B));	// 1762 cmp     ax, 1Bh         ; esc ;~ 01A2:1083
cs=0x1a2;eip=0x001086; 	R(JZ(loc_110b6));	// 1763 jz      short loc_110B6 ;~ 01A2:1086
cs=0x1a2;eip=0x001088; 	T(CMP(ax, 0x20));	// 1764 cmp     ax, 20h ; ' '   ; space ;~ 01A2:1088
cs=0x1a2;eip=0x00108b; 	R(JZ(loc_110ba));	// 1765 jz      short loc_110BA ;~ 01A2:108B
cs=0x1a2;eip=0x00108d; 	T(CMP(ax, 0x4B00));	// 1766 cmp     ax, 4B00h       ; arrow ;~ 01A2:108D
cs=0x1a2;eip=0x001090; 	R(JZ(loc_1109a));	// 1767 jz      short loc_1109A ;~ 01A2:1090
cs=0x1a2;eip=0x001092; 	T(CMP(ax, 0x4D00));	// 1768 cmp     ax, 4D00h       ; arrow opposite direction ;~ 01A2:1092
cs=0x1a2;eip=0x001095; 	R(JZ(loc_110aa));	// 1769 jz      short loc_110AA ;~ 01A2:1095
cs=0x1a2;eip=0x001097; 	R(JMP(loc_10fb9));	// 1770 jmp     loc_10FB9 ;~ 01A2:1097
loc_1109a:
	// 4440 
cs=0x1a2;eip=0x00109a; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 1774 mov     al, [bp+var_10] ;~ 01A2:109A
cs=0x1a2;eip=0x00109d; 	T(CBW);	// 1775 cbw ;~ 01A2:109D
cs=0x1a2;eip=0x00109e; 	T(MOV(bx, ax));	// 1776 mov     bx, ax ;~ 01A2:109E
cs=0x1a2;eip=0x0010a0; 	T(MOV(al, *(raddr(ds,bx+0x280))));	// 1777 mov     al, [bx+280h] ;~ 01A2:10A0
loc_110a4:
	// 4441 
cs=0x1a2;eip=0x0010a4; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 1780 mov     [bp+var_10], al ;~ 01A2:10A4
cs=0x1a2;eip=0x0010a7; 	R(JMP(loc_10fb9));	// 1781 jmp     loc_10FB9 ;~ 01A2:10A7
loc_110aa:
	// 4442 
cs=0x1a2;eip=0x0010aa; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 1785 mov     al, [bp+var_10] ;~ 01A2:10AA
cs=0x1a2;eip=0x0010ad; 	T(CBW);	// 1786 cbw ;~ 01A2:10AD
cs=0x1a2;eip=0x0010ae; 	T(MOV(bx, ax));	// 1787 mov     bx, ax ;~ 01A2:10AE
cs=0x1a2;eip=0x0010b0; 	T(MOV(al, *(raddr(ds,bx+0x286))));	// 1788 mov     al, [bx+286h] ;~ 01A2:10B0
cs=0x1a2;eip=0x0010b4; 	R(JMP(loc_110a4));	// 1789 jmp     short loc_110A4 ;~ 01A2:10B4
loc_110b6:
	// 4443 
cs=0x1a2;eip=0x0010b6; 	X(MOV(*(raddr(ss,bp+var_10)), 0x0FF));	// 1793 mov     [bp+var_10], 0FFh ;~ 01A2:10B6
loc_110ba:
	// 4444 
cs=0x1a2;eip=0x0010ba; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 1797 push    word ptr wndsprite+2 ;~ 01A2:10BA
cs=0x1a2;eip=0x0010be; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 1798 push    word ptr wndsprite ;~ 01A2:10BE
cs=0x1a2;eip=0x0010c2; 	R(CALLF(sprite_free_wnd,0));	// 1799 call    sprite_free_wnd ;~ 01A2:10C2
cs=0x1a2;eip=0x0010c7; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 1800 mov     al, [bp+var_10] ;~ 01A2:10C7
cs=0x1a2;eip=0x0010ca; 	T(CBW);	// 1801 cbw ;~ 01A2:10CA
cs=0x1a2;eip=0x0010cb; 	T(MOV(sp, bp));	// 1802 mov     sp, bp ;~ 01A2:10CB
cs=0x1a2;eip=0x0010cd; 	X(POP(bp));	// 1803 pop     bp ;~ 01A2:10CD
cs=0x1a2;eip=0x0010ce; 	R(RETF(0));	// 1804 retf ;~ 01A2:10CE
run_tracks_menu:
	// 1814 
#undef var_16
#define var_16 -0x16
	// 1816 var_16          = byte ptr -16h ;~ 01A2:10D0
#undef var_14
#define var_14 -0x14
	// 1817 var_14          = byte ptr -14h ;~ 01A2:10D0
#undef var_12
#define var_12 -0x12
	// 1818 var_12          = byte ptr -12h ;~ 01A2:10D0
#undef var_e
#define var_e -0x0E
	// 1819 var_E           = word ptr -0Eh ;~ 01A2:10D0
#undef var_c
#define var_c -0x0C
	// 1820 var_C           = word ptr -0Ch ;~ 01A2:10D0
#undef var_a
#define var_a -0x0A
	// 1821 var_A           = byte ptr -0Ah ;~ 01A2:10D0
#undef var_9
#define var_9 -9
	// 1822 var_9           = byte ptr -9 ;~ 01A2:10D0
#undef var_8
#define var_8 -8
	// 1823 var_8           = byte ptr -8 ;~ 01A2:10D0
#undef var_7
#define var_7 -7
	// 1824 var_7           = byte ptr -7 ;~ 01A2:10D0
#undef var_6
#define var_6 -6
	// 1825 var_6           = byte ptr -6 ;~ 01A2:10D0
#undef var_4
#define var_4 -4
	// 1826 var_4           = word ptr -4 ;~ 01A2:10D0
#undef var_2
#define var_2 -2
	// 1827 var_2           = word ptr -2 ;~ 01A2:10D0
#undef arg_0
#define arg_0 6
	// 1828 arg_0           = word ptr  6 ;~ 01A2:10D0
ret_1a2_10d0:
	// 4445 
cs=0x1a2;eip=0x0010d0; 	X(PUSH(bp));	// 1830 push    bp ;~ 01A2:10D0
cs=0x1a2;eip=0x0010d1; 	T(MOV(bp, sp));	// 1831 mov     bp, sp ;~ 01A2:10D1
cs=0x1a2;eip=0x0010d3; 	T(SUB(sp, 0x16));	// 1832 sub     sp, 16h ;~ 01A2:10D3
cs=0x1a2;eip=0x0010d6; 	X(PUSH(di));	// 1833 push    di              ; int ;~ 01A2:10D6
cs=0x1a2;eip=0x0010d7; 	X(PUSH(si));	// 1834 push    si              ; char * ;~ 01A2:10D7
cs=0x1a2;eip=0x0010d8; 	T(MOV(ax, 3));	// 1835 mov     ax, 3 ;~ 01A2:10D8
cs=0x1a2;eip=0x0010db; 	X(PUSH(ax));	// 1836 push    ax ;~ 01A2:10DB
cs=0x1a2;eip=0x0010dc; 	R(CALLF(ensure_file_exists,0));	// 1837 call    ensure_file_exists ;~ 01A2:10DC
cs=0x1a2;eip=0x0010e1; 	T(ADD(sp, 2));	// 1838 add     sp, 2 ;~ 01A2:10E1
cs=0x1a2;eip=0x0010e4; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 1839 cmp     [bp+arg_0], 0 ;~ 01A2:10E4
cs=0x1a2;eip=0x0010e8; 	R(JZ(loc_110ed));	// 1840 jz      short loc_110ED ;~ 01A2:10E8
cs=0x1a2;eip=0x0010ea; 	R(JMP(loc_1156a));	// 1841 jmp     loc_1156A ;~ 01A2:10EA
loc_110ed:
	// 4446 
cs=0x1a2;eip=0x0010ed; 	X(MOV(*(raddr(ss,bp+var_6)), 0x0FF));	// 1846 mov     [bp+var_6], 0FFh ;~ 01A2:10ED
cs=0x1a2;eip=0x0010f1; 	X(MOV(*(raddr(ss,bp+var_16)), 0));	// 1847 mov     [bp+var_16], 0 ;~ 01A2:10F1
cs=0x1a2;eip=0x0010f5; 	X(MOV(*(raddr(ss,bp+var_12)), 0x0FF));	// 1848 mov     [bp+var_12], 0FFh ;~ 01A2:10F5
cs=0x1a2;eip=0x0010f9; 	R(CALLF(show_waiting,0));	// 1849 call    show_waiting ;~ 01A2:10F9
cs=0x1a2;eip=0x0010fe; 	X(MOV(waitflag, 0x9B));	// 1850 mov     waitflag, 9Bh ; '›' ;~ 01A2:10FE
cs=0x1a2;eip=0x001104; 	T(MOV(ax, 0x0F));	// 1851 mov     ax, 0Fh ;~ 01A2:1104
cs=0x1a2;eip=0x001107; 	X(PUSH(ax));	// 1852 push    ax ;~ 01A2:1107
cs=0x1a2;eip=0x001108; 	T(MOV(ax, 0x0C8));	// 1853 mov     ax, 0C8h ; 'È' ;~ 01A2:1108
cs=0x1a2;eip=0x00110b; 	X(PUSH(ax));	// 1854 push    ax ;~ 01A2:110B
cs=0x1a2;eip=0x00110c; 	T(MOV(ax, 0x140));	// 1855 mov     ax, 140h ;~ 01A2:110C
cs=0x1a2;eip=0x00110f; 	X(PUSH(ax));	// 1856 push    ax ;~ 01A2:110F
cs=0x1a2;eip=0x001110; 	R(CALLF(sprite_make_wnd,0));	// 1857 call    sprite_make_wnd ;~ 01A2:1110
cs=0x1a2;eip=0x001115; 	T(ADD(sp, 6));	// 1858 add     sp, 6 ;~ 01A2:1115
cs=0x1a2;eip=0x001118; 	X(MOV(*(dw*)(((db*)&wndsprite)), ax));	// 1859 mov     word ptr wndsprite, ax ;~ 01A2:1118
cs=0x1a2;eip=0x00111b; 	X(MOV(*(dw*)(((db*)&wndsprite)+2), dx));	// 1860 mov     word ptr wndsprite+2, dx ;~ 01A2:111B
cs=0x1a2;eip=0x00111f; 	T(LES(bx, td14_elem_map_main));	// 1861 les     bx, td14_elem_map_main ;~ 01A2:111F
cs=0x1a2;eip=0x001123; 	T(MOV(al, *(raddr(es,bx+0x384))));	// 1862 mov     al, es:[bx+384h] ;~ 01A2:1123
cs=0x1a2;eip=0x001128; 	T(SUB(ah, ah));	// 1863 sub     ah, ah ;~ 01A2:1128
cs=0x1a2;eip=0x00112a; 	X(PUSH(ax));	// 1864 push    ax ;~ 01A2:112A
cs=0x1a2;eip=0x00112b; 	R(CALLF(load_skybox,0));	// 1865 call    load_skybox ;~ 01A2:112B
cs=0x1a2;eip=0x001130; 	T(ADD(sp, 2));	// 1866 add     sp, 2 ;~ 01A2:1130
cs=0x1a2;eip=0x001133; 	R(CALLF(shape3d_load_all,0));	// 1867 call    shape3d_load_all ;~ 01A2:1133
cs=0x1a2;eip=0x001138; 	T(MOV(ax, 0x0C8));	// 1868 mov     ax, 0C8h ; 'È' ;~ 01A2:1138
cs=0x1a2;eip=0x00113b; 	X(PUSH(ax));	// 1869 push    ax ;~ 01A2:113B
cs=0x1a2;eip=0x00113c; 	T(MOV(ax, 0x140));	// 1870 mov     ax, 140h ;~ 01A2:113C
cs=0x1a2;eip=0x00113f; 	X(PUSH(ax));	// 1871 push    ax ;~ 01A2:113F
cs=0x1a2;eip=0x001140; 	T(MOV(ax, 0x28));	// 1872 mov     ax, 28h ; '(' ;~ 01A2:1140
cs=0x1a2;eip=0x001143; 	X(PUSH(ax));	// 1873 push    ax ;~ 01A2:1143
cs=0x1a2;eip=0x001144; 	X(PUSH(ax));	// 1874 push    ax ;~ 01A2:1144
cs=0x1a2;eip=0x001145; 	R(CALLF(set_projection,0));	// 1875 call    set_projection ;~ 01A2:1145
cs=0x1a2;eip=0x00114a; 	T(ADD(sp, 8));	// 1876 add     sp, 8 ;~ 01A2:114A
cs=0x1a2;eip=0x00114d; 	T(MOV(ax, 0x0FFFE));	// 1877 mov     ax, 0FFFEh ;~ 01A2:114D
cs=0x1a2;eip=0x001150; 	X(PUSH(ax));	// 1878 push    ax ;~ 01A2:1150
cs=0x1a2;eip=0x001151; 	R(CALLF(init_game_state,0));	// 1879 call    init_game_state ;~ 01A2:1151
cs=0x1a2;eip=0x001156; 	T(ADD(sp, 2));	// 1880 add     sp, 2 ;~ 01A2:1156
cs=0x1a2;eip=0x001159; 	R(CALLF(sprite_copy_wnd_to_1,0));	// 1881 call    sprite_copy_wnd_to_1 ;~ 01A2:1159
cs=0x1a2;eip=0x00115e; 	X(PUSH(skybox_grd_color));	// 1882 push    skybox_grd_color ;~ 01A2:115E
cs=0x1a2;eip=0x001162; 	R(CALLF(sprite_clear_1_color,0));	// 1883 call    sprite_clear_1_color ;~ 01A2:1162
cs=0x1a2;eip=0x001167; 	T(ADD(sp, 2));	// 1884 add     sp, 2 ;~ 01A2:1167
cs=0x1a2;eip=0x00116a; 	T(MOV(ax, 0x0C8));	// 1885 mov     ax, 0C8h ; 'È' ;~ 01A2:116A
cs=0x1a2;eip=0x00116d; 	X(PUSH(ax));	// 1886 push    ax ;~ 01A2:116D
cs=0x1a2;eip=0x00116e; 	T(SUB(ax, ax));	// 1887 sub     ax, ax ;~ 01A2:116E
cs=0x1a2;eip=0x001170; 	X(PUSH(ax));	// 1888 push    ax ;~ 01A2:1170
cs=0x1a2;eip=0x001171; 	T(MOV(ax, 0x140));	// 1889 mov     ax, 140h ;~ 01A2:1171
cs=0x1a2;eip=0x001174; 	X(PUSH(ax));	// 1890 push    ax ;~ 01A2:1174
cs=0x1a2;eip=0x001175; 	T(SUB(ax, ax));	// 1891 sub     ax, ax ;~ 01A2:1175
cs=0x1a2;eip=0x001177; 	X(PUSH(ax));	// 1892 push    ax ;~ 01A2:1177
cs=0x1a2;eip=0x001178; 	R(CALLF(sprite_set_1_size,0));	// 1893 call    sprite_set_1_size ;~ 01A2:1178
cs=0x1a2;eip=0x00117d; 	T(ADD(sp, 8));	// 1894 add     sp, 8 ;~ 01A2:117D
cs=0x1a2;eip=0x001180; 	R(CALLF(draw_track_preview,0));	// 1895 call    draw_track_preview ;~ 01A2:1180
cs=0x1a2;eip=0x001185; 	R(CALLF(shape3d_free_all,0));	// 1896 call    shape3d_free_all ;~ 01A2:1185
cs=0x1a2;eip=0x00118a; 	R(CALLF(unload_skybox,0));	// 1897 call    unload_skybox ;~ 01A2:118A
cs=0x1a2;eip=0x00118f; 	R(CALLF(sprite_copy_wnd_to_1,0));	// 1898 call    sprite_copy_wnd_to_1 ;~ 01A2:118F
cs=0x1a2;eip=0x001194; 	T(MOV(ax, offset(dseg,asc_3ba24)));	// 1899 mov     ax, offset asc_3BA24 ; "'" ;~ 01A2:1194
cs=0x1a2;eip=0x001197; 	X(PUSH(ax));	// 1900 push    ax ;~ 01A2:1197
cs=0x1a2;eip=0x001198; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1901 mov     ax, offset resID_byte1 ;~ 01A2:1198
cs=0x1a2;eip=0x00119b; 	X(PUSH(ax));	// 1902 push    ax              ; char * ;~ 01A2:119B
cs=0x1a2;eip=0x00119c; 	R(CALLF(_strcpy,0));	// 1903 call    _strcpy ;~ 01A2:119C
cs=0x1a2;eip=0x0011a1; 	T(ADD(sp, 4));	// 1904 add     sp, 4 ;~ 01A2:11A1
cs=0x1a2;eip=0x0011a4; 	T(MOV(ax, offset(dseg,byte_449b1)));	// 1905 mov     ax, offset byte_449B1 ;~ 01A2:11A4
cs=0x1a2;eip=0x0011a7; 	X(PUSH(ax));	// 1906 push    ax ;~ 01A2:11A7
cs=0x1a2;eip=0x0011a8; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1907 mov     ax, offset resID_byte1 ;~ 01A2:11A8
cs=0x1a2;eip=0x0011ab; 	X(PUSH(ax));	// 1908 push    ax              ; char * ;~ 01A2:11AB
cs=0x1a2;eip=0x0011ac; 	R(CALLF(_strcat,0));	// 1909 call    _strcat ;~ 01A2:11AC
cs=0x1a2;eip=0x0011b1; 	T(ADD(sp, 4));	// 1910 add     sp, 4 ;~ 01A2:11B1
cs=0x1a2;eip=0x0011b4; 	T(MOV(ax, offset(dseg,asc_3ba26)));	// 1911 mov     ax, offset asc_3BA26 ; "'" ;~ 01A2:11B4
cs=0x1a2;eip=0x0011b7; 	X(PUSH(ax));	// 1912 push    ax ;~ 01A2:11B7
cs=0x1a2;eip=0x0011b8; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1913 mov     ax, offset resID_byte1 ;~ 01A2:11B8
cs=0x1a2;eip=0x0011bb; 	X(PUSH(ax));	// 1914 push    ax              ; char * ;~ 01A2:11BB
cs=0x1a2;eip=0x0011bc; 	R(CALLF(_strcat,0));	// 1915 call    _strcat ;~ 01A2:11BC
cs=0x1a2;eip=0x0011c1; 	T(ADD(sp, 4));	// 1916 add     sp, 4 ;~ 01A2:11C1
cs=0x1a2;eip=0x0011c4; 	T(SUB(ax, ax));	// 1917 sub     ax, ax ;~ 01A2:11C4
cs=0x1a2;eip=0x0011c6; 	X(PUSH(ax));	// 1918 push    ax ;~ 01A2:11C6
cs=0x1a2;eip=0x0011c7; 	X(PUSH(dialog_fnt_colour));	// 1919 push    dialog_fnt_colour ;~ 01A2:11C7
cs=0x1a2;eip=0x0011cb; 	T(MOV(ax, 6));	// 1920 mov     ax, 6 ;~ 01A2:11CB
cs=0x1a2;eip=0x0011ce; 	X(PUSH(ax));	// 1921 push    ax ;~ 01A2:11CE
cs=0x1a2;eip=0x0011cf; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1922 mov     ax, offset resID_byte1 ;~ 01A2:11CF
cs=0x1a2;eip=0x0011d2; 	X(PUSH(ax));	// 1923 push    ax ;~ 01A2:11D2
cs=0x1a2;eip=0x0011d3; 	R(CALLF(font_op2_alt,0));	// 1924 call    font_op2_alt ;~ 01A2:11D3
cs=0x1a2;eip=0x0011d8; 	T(ADD(sp, 2));	// 1925 add     sp, 2 ;~ 01A2:11D8
cs=0x1a2;eip=0x0011db; 	X(PUSH(ax));	// 1926 push    ax ;~ 01A2:11DB
cs=0x1a2;eip=0x0011dc; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1927 mov     ax, offset resID_byte1 ;~ 01A2:11DC
cs=0x1a2;eip=0x0011df; 	X(PUSH(ax));	// 1928 push    ax ;~ 01A2:11DF
cs=0x1a2;eip=0x0011e0; 	R(CALLF(intro_draw_text,0));	// 1929 call    intro_draw_text ;~ 01A2:11E0
cs=0x1a2;eip=0x0011e5; 	T(ADD(sp, 0x0A));	// 1930 add     sp, 0Ah ;~ 01A2:11E5
cs=0x1a2;eip=0x0011e8; 	T(SUB(ax, ax));	// 1931 sub     ax, ax ;~ 01A2:11E8
cs=0x1a2;eip=0x0011ea; 	X(PUSH(ax));	// 1932 push    ax ;~ 01A2:11EA
cs=0x1a2;eip=0x0011eb; 	X(PUSH(cs));	// 1933 push    cs ;~ 01A2:11EB
cs=0x1a2;eip=0x0011ec; 	R(CALL(highscore_write_a,0));	// 1934 call    near ptr highscore_write_a ;~ 01A2:11EC
cs=0x1a2;eip=0x0011ef; 	T(ADD(sp, 2));	// 1935 add     sp, 2 ;~ 01A2:11EF
cs=0x1a2;eip=0x0011f2; 	T(OR(al, al));	// 1936 or      al, al ;~ 01A2:11F2
cs=0x1a2;eip=0x0011f4; 	R(JZ(loc_111f9));	// 1937 jz      short loc_111F9 ;~ 01A2:11F4
cs=0x1a2;eip=0x0011f6; 	R(JMP(loc_112e5));	// 1938 jmp     loc_112E5 ;~ 01A2:11F6
loc_111f9:
	// 4447 
cs=0x1a2;eip=0x0011f9; 	T(MOV(ax, 0x34));	// 1942 mov     ax, 34h ; '4' ;~ 01A2:11F9
cs=0x1a2;eip=0x0011fc; 	X(IMUL1_2(word_46170));	// 1943 imul    word_46170 ;~ 01A2:11FC
cs=0x1a2;eip=0x001200; 	T(MOV(di, ax));	// 1944 mov     di, ax ;~ 01A2:1200
cs=0x1a2;eip=0x001202; 	T(LES(bx, td11_highscores));	// 1945 les     bx, td11_highscores ;~ 01A2:1202
cs=0x1a2;eip=0x001206; 	T(CMP(*(dw*)(raddr(es,bx+di+0x32)), 0x0FFFF));	// 1946 cmp     word ptr es:[bx+di+32h], 0FFFFh ;~ 01A2:1206
cs=0x1a2;eip=0x00120b; 	R(JNZ(loc_11210));	// 1947 jnz     short loc_11210 ;~ 01A2:120B
cs=0x1a2;eip=0x00120d; 	R(JMP(loc_112e5));	// 1948 jmp     loc_112E5 ;~ 01A2:120D
loc_11210:
	// 4448 
cs=0x1a2;eip=0x001210; 	T(MOV(ax, offset(dseg,ahs0)));	// 1952 mov     ax, offset aHs0 ; "hs0" ;~ 01A2:1210
cs=0x1a2;eip=0x001213; 	X(PUSH(ax));	// 1953 push    ax ;~ 01A2:1213
cs=0x1a2;eip=0x001214; 	X(PUSH(word_44cee));	// 1954 push    word_44CEE ;~ 01A2:1214
cs=0x1a2;eip=0x001218; 	X(PUSH(mainresptr));	// 1955 push    mainresptr ;~ 01A2:1218
cs=0x1a2;eip=0x00121c; 	R(CALLF(locate_text_res,0));	// 1956 call    locate_text_res ;~ 01A2:121C
cs=0x1a2;eip=0x001221; 	T(ADD(sp, 6));	// 1957 add     sp, 6 ;~ 01A2:1221
cs=0x1a2;eip=0x001224; 	X(PUSH(dx));	// 1958 push    dx ;~ 01A2:1224
cs=0x1a2;eip=0x001225; 	X(PUSH(ax));	// 1959 push    ax ;~ 01A2:1225
cs=0x1a2;eip=0x001226; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1960 mov     ax, offset resID_byte1 ;~ 01A2:1226
cs=0x1a2;eip=0x001229; 	X(PUSH(ax));	// 1961 push    ax ;~ 01A2:1229
cs=0x1a2;eip=0x00122a; 	R(CALLF(copy_string,0));	// 1962 call    copy_string ;~ 01A2:122A
cs=0x1a2;eip=0x00122f; 	T(ADD(sp, 6));	// 1963 add     sp, 6 ;~ 01A2:122F
cs=0x1a2;eip=0x001232; 	T(SUB(ax, ax));	// 1964 sub     ax, ax ;~ 01A2:1232
cs=0x1a2;eip=0x001234; 	X(PUSH(ax));	// 1965 push    ax ;~ 01A2:1234
cs=0x1a2;eip=0x001235; 	X(PUSH(dialog_fnt_colour));	// 1966 push    dialog_fnt_colour ;~ 01A2:1235
cs=0x1a2;eip=0x001239; 	T(MOV(ax, 0x12));	// 1967 mov     ax, 12h ;~ 01A2:1239
cs=0x1a2;eip=0x00123c; 	X(PUSH(ax));	// 1968 push    ax ;~ 01A2:123C
cs=0x1a2;eip=0x00123d; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1969 mov     ax, offset resID_byte1 ;~ 01A2:123D
cs=0x1a2;eip=0x001240; 	X(PUSH(ax));	// 1970 push    ax ;~ 01A2:1240
cs=0x1a2;eip=0x001241; 	R(CALLF(font_op2_alt,0));	// 1971 call    font_op2_alt ;~ 01A2:1241
cs=0x1a2;eip=0x001246; 	T(ADD(sp, 2));	// 1972 add     sp, 2 ;~ 01A2:1246
cs=0x1a2;eip=0x001249; 	X(PUSH(ax));	// 1973 push    ax ;~ 01A2:1249
cs=0x1a2;eip=0x00124a; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1974 mov     ax, offset resID_byte1 ;~ 01A2:124A
cs=0x1a2;eip=0x00124d; 	X(PUSH(ax));	// 1975 push    ax ;~ 01A2:124D
cs=0x1a2;eip=0x00124e; 	R(CALLF(intro_draw_text,0));	// 1976 call    intro_draw_text ;~ 01A2:124E
cs=0x1a2;eip=0x001253; 	T(ADD(sp, 0x0A));	// 1977 add     sp, 0Ah ;~ 01A2:1253
cs=0x1a2;eip=0x001256; 	X(PUSH(word_44d24));	// 1978 push    word_44D24 ;~ 01A2:1256
cs=0x1a2;eip=0x00125a; 	X(PUSH(fontnptr));	// 1979 push    fontnptr ;~ 01A2:125A
cs=0x1a2;eip=0x00125e; 	R(CALLF(font_set_fontdef2,0));	// 1980 call    font_set_fontdef2 ;~ 01A2:125E
cs=0x1a2;eip=0x001263; 	T(ADD(sp, 4));	// 1981 add     sp, 4 ;~ 01A2:1263
cs=0x1a2;eip=0x001266; 	T(ax = bp+var_a);	// 1982 lea     ax, [bp+var_A] ;~ 01A2:1266
cs=0x1a2;eip=0x001269; 	X(PUSH(ax));	// 1983 push    ax ;~ 01A2:1269
cs=0x1a2;eip=0x00126a; 	T(SUB(ax, ax));	// 1984 sub     ax, ax ;~ 01A2:126A
cs=0x1a2;eip=0x00126c; 	X(PUSH(ax));	// 1985 push    ax ;~ 01A2:126C
cs=0x1a2;eip=0x00126d; 	X(PUSH(cs));	// 1986 push    cs ;~ 01A2:126D
cs=0x1a2;eip=0x00126e; 	R(CALL(print_highscore_entry,0));	// 1987 call    near ptr print_highscore_entry ;~ 01A2:126E
cs=0x1a2;eip=0x001271; 	T(ADD(sp, 4));	// 1988 add     sp, 4 ;~ 01A2:1271
cs=0x1a2;eip=0x001274; 	T(SUB(ax, ax));	// 1989 sub     ax, ax ;~ 01A2:1274
cs=0x1a2;eip=0x001276; 	X(PUSH(ax));	// 1990 push    ax ;~ 01A2:1276
cs=0x1a2;eip=0x001277; 	X(PUSH(ax));	// 1991 push    ax ;~ 01A2:1277
cs=0x1a2;eip=0x001278; 	R(CALLF(font_set_unk,0));	// 1992 call    font_set_unk ;~ 01A2:1278
cs=0x1a2;eip=0x00127d; 	T(ADD(sp, 4));	// 1993 add     sp, 4 ;~ 01A2:127D
cs=0x1a2;eip=0x001280; 	T(MOV(ax, 0x1E));	// 1994 mov     ax, 1Eh ;~ 01A2:1280
cs=0x1a2;eip=0x001283; 	X(PUSH(ax));	// 1995 push    ax ;~ 01A2:1283
cs=0x1a2;eip=0x001284; 	T(MOV(ax, 0x10));	// 1996 mov     ax, 10h ;~ 01A2:1284
cs=0x1a2;eip=0x001287; 	X(PUSH(ax));	// 1997 push    ax ;~ 01A2:1287
cs=0x1a2;eip=0x001288; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 1998 mov     al, [bp+var_A] ;~ 01A2:1288
cs=0x1a2;eip=0x00128b; 	T(CBW);	// 1999 cbw ;~ 01A2:128B
cs=0x1a2;eip=0x00128c; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2000 add     ax, offset resID_byte1 ;~ 01A2:128C
cs=0x1a2;eip=0x00128f; 	X(PUSH(ax));	// 2001 push    ax ;~ 01A2:128F
cs=0x1a2;eip=0x001290; 	R(CALLF(font_draw_text,0));	// 2002 call    font_draw_text ;~ 01A2:1290
cs=0x1a2;eip=0x001295; 	T(ADD(sp, 6));	// 2003 add     sp, 6 ;~ 01A2:1295
cs=0x1a2;eip=0x001298; 	T(MOV(ax, 0x1E));	// 2004 mov     ax, 1Eh ;~ 01A2:1298
cs=0x1a2;eip=0x00129b; 	X(PUSH(ax));	// 2005 push    ax ;~ 01A2:129B
cs=0x1a2;eip=0x00129c; 	T(MOV(ax, 0x78));	// 2006 mov     ax, 78h ; 'x' ;~ 01A2:129C
cs=0x1a2;eip=0x00129f; 	X(PUSH(ax));	// 2007 push    ax ;~ 01A2:129F
cs=0x1a2;eip=0x0012a0; 	T(MOV(al, *(raddr(ss,bp+var_9))));	// 2008 mov     al, [bp+var_9] ;~ 01A2:12A0
cs=0x1a2;eip=0x0012a3; 	T(CBW);	// 2009 cbw ;~ 01A2:12A3
cs=0x1a2;eip=0x0012a4; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2010 add     ax, offset resID_byte1 ;~ 01A2:12A4
cs=0x1a2;eip=0x0012a7; 	X(PUSH(ax));	// 2011 push    ax ;~ 01A2:12A7
cs=0x1a2;eip=0x0012a8; 	R(CALLF(font_draw_text,0));	// 2012 call    font_draw_text ;~ 01A2:12A8
cs=0x1a2;eip=0x0012ad; 	T(ADD(sp, 6));	// 2013 add     sp, 6 ;~ 01A2:12AD
cs=0x1a2;eip=0x0012b0; 	T(MOV(ax, 0x1E));	// 2014 mov     ax, 1Eh ;~ 01A2:12B0
cs=0x1a2;eip=0x0012b3; 	X(PUSH(ax));	// 2015 push    ax ;~ 01A2:12B3
cs=0x1a2;eip=0x0012b4; 	T(MOV(ax, 0x0E0));	// 2016 mov     ax, 0E0h ; 'à' ;~ 01A2:12B4
cs=0x1a2;eip=0x0012b7; 	X(PUSH(ax));	// 2017 push    ax ;~ 01A2:12B7
cs=0x1a2;eip=0x0012b8; 	T(MOV(al, *(raddr(ss,bp+var_8))));	// 2018 mov     al, [bp+var_8] ;~ 01A2:12B8
cs=0x1a2;eip=0x0012bb; 	T(CBW);	// 2019 cbw ;~ 01A2:12BB
cs=0x1a2;eip=0x0012bc; 	T(ADD(ax, 0x0AC74));	// 2020 add     ax, 0AC74h ;~ 01A2:12BC
cs=0x1a2;eip=0x0012bf; 	X(PUSH(ax));	// 2021 push    ax ;~ 01A2:12BF
cs=0x1a2;eip=0x0012c0; 	R(CALLF(font_draw_text,0));	// 2022 call    font_draw_text ;~ 01A2:12C0
cs=0x1a2;eip=0x0012c5; 	T(ADD(sp, 6));	// 2023 add     sp, 6 ;~ 01A2:12C5
cs=0x1a2;eip=0x0012c8; 	T(MOV(ax, 0x1E));	// 2024 mov     ax, 1Eh ;~ 01A2:12C8
cs=0x1a2;eip=0x0012cb; 	X(PUSH(ax));	// 2025 push    ax ;~ 01A2:12CB
cs=0x1a2;eip=0x0012cc; 	T(MOV(ax, 0x110));	// 2026 mov     ax, 110h ;~ 01A2:12CC
cs=0x1a2;eip=0x0012cf; 	X(PUSH(ax));	// 2027 push    ax ;~ 01A2:12CF
cs=0x1a2;eip=0x0012d0; 	T(MOV(al, *(raddr(ss,bp+var_7))));	// 2028 mov     al, [bp+var_7] ;~ 01A2:12D0
cs=0x1a2;eip=0x0012d3; 	T(CBW);	// 2029 cbw ;~ 01A2:12D3
cs=0x1a2;eip=0x0012d4; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2030 add     ax, offset resID_byte1 ;~ 01A2:12D4
cs=0x1a2;eip=0x0012d7; 	X(PUSH(ax));	// 2031 push    ax ;~ 01A2:12D7
cs=0x1a2;eip=0x0012d8; 	R(CALLF(font_draw_text,0));	// 2032 call    font_draw_text ;~ 01A2:12D8
cs=0x1a2;eip=0x0012dd; 	T(ADD(sp, 6));	// 2033 add     sp, 6 ;~ 01A2:12DD
cs=0x1a2;eip=0x0012e0; 	R(CALLF(font_set_fontdef,0));	// 2034 call    font_set_fontdef ;~ 01A2:12E0
loc_112e5:
	// 4449 
cs=0x1a2;eip=0x0012e5; 	T(MOV(ax, offset(dseg,atedit_0)));	// 2038 mov     ax, offset aTedit_0 ; "tedit" ;~ 01A2:12E5
cs=0x1a2;eip=0x0012e8; 	X(PUSH(ax));	// 2039 push    ax ;~ 01A2:12E8
cs=0x1a2;eip=0x0012e9; 	R(CALLF(file_load_resfile,0));	// 2040 call    file_load_resfile ;~ 01A2:12E9
cs=0x1a2;eip=0x0012ee; 	T(ADD(sp, 2));	// 2041 add     sp, 2 ;~ 01A2:12EE
cs=0x1a2;eip=0x0012f1; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 2042 mov     [bp+var_4], ax ;~ 01A2:12F1
cs=0x1a2;eip=0x0012f4; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 2043 mov     [bp+var_2], dx ;~ 01A2:12F4
cs=0x1a2;eip=0x0012f7; 	T(SUB(ax, ax));	// 2044 sub     ax, ax ;~ 01A2:12F7
cs=0x1a2;eip=0x0012f9; 	X(PUSH(ax));	// 2045 push    ax ;~ 01A2:12F9
cs=0x1a2;eip=0x0012fa; 	X(PUSH(word_407f8));	// 2046 push    word_407F8 ;~ 01A2:12FA
cs=0x1a2;eip=0x0012fe; 	X(PUSH(word_407f6));	// 2047 push    word_407F6 ;~ 01A2:12FE
cs=0x1a2;eip=0x001302; 	X(PUSH(word_407f4));	// 2048 push    word_407F4 ;~ 01A2:1302
cs=0x1a2;eip=0x001306; 	T(MOV(ax, 0x18));	// 2049 mov     ax, 18h ;~ 01A2:1306
cs=0x1a2;eip=0x001309; 	X(PUSH(ax));	// 2050 push    ax ;~ 01A2:1309
cs=0x1a2;eip=0x00130a; 	T(MOV(ax, 0x5E));	// 2051 mov     ax, 5Eh ; '^' ;~ 01A2:130A
cs=0x1a2;eip=0x00130d; 	X(PUSH(ax));	// 2052 push    ax ;~ 01A2:130D
cs=0x1a2;eip=0x00130e; 	T(MOV(ax, 0x0AC));	// 2053 mov     ax, 0ACh ; '¬' ;~ 01A2:130E
cs=0x1a2;eip=0x001311; 	X(PUSH(ax));	// 2054 push    ax ;~ 01A2:1311
cs=0x1a2;eip=0x001312; 	T(MOV(ax, 0x11));	// 2055 mov     ax, 11h ;~ 01A2:1312
cs=0x1a2;eip=0x001315; 	X(PUSH(ax));	// 2056 push    ax ;~ 01A2:1315
cs=0x1a2;eip=0x001316; 	T(MOV(ax, offset(dseg,abmt)));	// 2057 mov     ax, offset aBmt ; "bmt" ;~ 01A2:1316
cs=0x1a2;eip=0x001319; 	X(PUSH(ax));	// 2058 push    ax ;~ 01A2:1319
cs=0x1a2;eip=0x00131a; 	X(PUSH(dx));	// 2059 push    dx ;~ 01A2:131A
cs=0x1a2;eip=0x00131b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 2060 push    [bp+var_4] ;~ 01A2:131B
cs=0x1a2;eip=0x00131e; 	R(CALLF(locate_text_res,0));	// 2061 call    locate_text_res ;~ 01A2:131E
cs=0x1a2;eip=0x001323; 	T(ADD(sp, 6));	// 2062 add     sp, 6 ;~ 01A2:1323
cs=0x1a2;eip=0x001326; 	X(PUSH(dx));	// 2063 push    dx ;~ 01A2:1326
cs=0x1a2;eip=0x001327; 	X(PUSH(ax));	// 2064 push    ax ;~ 01A2:1327
cs=0x1a2;eip=0x001328; 	R(CALLF(draw_button,0));	// 2065 call    draw_button ;~ 01A2:1328
cs=0x1a2;eip=0x00132d; 	T(ADD(sp, 0x14));	// 2066 add     sp, 14h ;~ 01A2:132D
cs=0x1a2;eip=0x001330; 	T(SUB(ax, ax));	// 2067 sub     ax, ax ;~ 01A2:1330
cs=0x1a2;eip=0x001332; 	X(PUSH(ax));	// 2068 push    ax ;~ 01A2:1332
cs=0x1a2;eip=0x001333; 	X(PUSH(word_407f8));	// 2069 push    word_407F8 ;~ 01A2:1333
cs=0x1a2;eip=0x001337; 	X(PUSH(word_407f6));	// 2070 push    word_407F6 ;~ 01A2:1337
cs=0x1a2;eip=0x00133b; 	X(PUSH(word_407f4));	// 2071 push    word_407F4 ;~ 01A2:133B
cs=0x1a2;eip=0x00133f; 	T(MOV(ax, 0x18));	// 2072 mov     ax, 18h ;~ 01A2:133F
cs=0x1a2;eip=0x001342; 	X(PUSH(ax));	// 2073 push    ax ;~ 01A2:1342
cs=0x1a2;eip=0x001343; 	T(MOV(ax, 0x5E));	// 2074 mov     ax, 5Eh ; '^' ;~ 01A2:1343
cs=0x1a2;eip=0x001346; 	X(PUSH(ax));	// 2075 push    ax ;~ 01A2:1346
cs=0x1a2;eip=0x001347; 	T(MOV(ax, 0x0AC));	// 2076 mov     ax, 0ACh ; '¬' ;~ 01A2:1347
cs=0x1a2;eip=0x00134a; 	X(PUSH(ax));	// 2077 push    ax ;~ 01A2:134A
cs=0x1a2;eip=0x00134b; 	T(MOV(ax, 0x71));	// 2078 mov     ax, 71h ; 'q' ;~ 01A2:134B
cs=0x1a2;eip=0x00134e; 	X(PUSH(ax));	// 2079 push    ax ;~ 01A2:134E
cs=0x1a2;eip=0x00134f; 	T(MOV(ax, offset(dseg,abet)));	// 2080 mov     ax, offset aBet ; "bet" ;~ 01A2:134F
cs=0x1a2;eip=0x001352; 	X(PUSH(ax));	// 2081 push    ax ;~ 01A2:1352
cs=0x1a2;eip=0x001353; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 2082 push    [bp+var_2] ;~ 01A2:1353
cs=0x1a2;eip=0x001356; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 2083 push    [bp+var_4] ;~ 01A2:1356
cs=0x1a2;eip=0x001359; 	R(CALLF(locate_text_res,0));	// 2084 call    locate_text_res ;~ 01A2:1359
cs=0x1a2;eip=0x00135e; 	T(ADD(sp, 6));	// 2085 add     sp, 6 ;~ 01A2:135E
cs=0x1a2;eip=0x001361; 	X(PUSH(dx));	// 2086 push    dx ;~ 01A2:1361
cs=0x1a2;eip=0x001362; 	X(PUSH(ax));	// 2087 push    ax ;~ 01A2:1362
cs=0x1a2;eip=0x001363; 	R(CALLF(draw_button,0));	// 2088 call    draw_button ;~ 01A2:1363
cs=0x1a2;eip=0x001368; 	T(ADD(sp, 0x14));	// 2089 add     sp, 14h ;~ 01A2:1368
cs=0x1a2;eip=0x00136b; 	T(SUB(ax, ax));	// 2090 sub     ax, ax ;~ 01A2:136B
cs=0x1a2;eip=0x00136d; 	X(PUSH(ax));	// 2091 push    ax ;~ 01A2:136D
cs=0x1a2;eip=0x00136e; 	X(PUSH(word_407f8));	// 2092 push    word_407F8 ;~ 01A2:136E
cs=0x1a2;eip=0x001372; 	X(PUSH(word_407f6));	// 2093 push    word_407F6 ;~ 01A2:1372
cs=0x1a2;eip=0x001376; 	X(PUSH(word_407f4));	// 2094 push    word_407F4 ;~ 01A2:1376
cs=0x1a2;eip=0x00137a; 	T(MOV(ax, 0x18));	// 2095 mov     ax, 18h ;~ 01A2:137A
cs=0x1a2;eip=0x00137d; 	X(PUSH(ax));	// 2096 push    ax ;~ 01A2:137D
cs=0x1a2;eip=0x00137e; 	T(MOV(ax, 0x5E));	// 2097 mov     ax, 5Eh ; '^' ;~ 01A2:137E
cs=0x1a2;eip=0x001381; 	X(PUSH(ax));	// 2098 push    ax ;~ 01A2:1381
cs=0x1a2;eip=0x001382; 	T(MOV(ax, 0x0AC));	// 2099 mov     ax, 0ACh ; '¬' ;~ 01A2:1382
cs=0x1a2;eip=0x001385; 	X(PUSH(ax));	// 2100 push    ax ;~ 01A2:1385
cs=0x1a2;eip=0x001386; 	T(MOV(ax, 0x0D1));	// 2101 mov     ax, 0D1h ; 'Ñ' ;~ 01A2:1386
cs=0x1a2;eip=0x001389; 	X(PUSH(ax));	// 2102 push    ax ;~ 01A2:1389
cs=0x1a2;eip=0x00138a; 	T(MOV(ax, offset(dseg,abmm)));	// 2103 mov     ax, offset aBmm ; "bmm" ;~ 01A2:138A
cs=0x1a2;eip=0x00138d; 	X(PUSH(ax));	// 2104 push    ax ;~ 01A2:138D
cs=0x1a2;eip=0x00138e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 2105 push    [bp+var_2] ;~ 01A2:138E
cs=0x1a2;eip=0x001391; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 2106 push    [bp+var_4] ;~ 01A2:1391
cs=0x1a2;eip=0x001394; 	R(CALLF(locate_text_res,0));	// 2107 call    locate_text_res ;~ 01A2:1394
cs=0x1a2;eip=0x001399; 	T(ADD(sp, 6));	// 2108 add     sp, 6 ;~ 01A2:1399
cs=0x1a2;eip=0x00139c; 	X(PUSH(dx));	// 2109 push    dx ;~ 01A2:139C
cs=0x1a2;eip=0x00139d; 	X(PUSH(ax));	// 2110 push    ax ;~ 01A2:139D
cs=0x1a2;eip=0x00139e; 	R(CALLF(draw_button,0));	// 2111 call    draw_button ;~ 01A2:139E
cs=0x1a2;eip=0x0013a3; 	T(ADD(sp, 0x14));	// 2112 add     sp, 14h ;~ 01A2:13A3
cs=0x1a2;eip=0x0013a6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 2113 push    [bp+var_2] ;~ 01A2:13A6
cs=0x1a2;eip=0x0013a9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 2114 push    [bp+var_4] ;~ 01A2:13A9
cs=0x1a2;eip=0x0013ac; 	R(CALLF(unload_resource,0));	// 2115 call    unload_resource ;~ 01A2:13AC
cs=0x1a2;eip=0x0013b1; 	T(ADD(sp, 4));	// 2116 add     sp, 4 ;~ 01A2:13B1
loc_113b4:
	// 4450 
cs=0x1a2;eip=0x0013b4; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 2120 mov     al, [bp+var_12] ;~ 01A2:13B4
cs=0x1a2;eip=0x0013b7; 	T(CMP(*(raddr(ss,bp+var_16)), al));	// 2121 cmp     [bp+var_16], al ;~ 01A2:13B7
cs=0x1a2;eip=0x0013ba; 	R(JZ(loc_113e5));	// 2122 jz      short loc_113E5 ;~ 01A2:13BA
cs=0x1a2;eip=0x0013bc; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2123 mov     al, [bp+var_16] ;~ 01A2:13BC
cs=0x1a2;eip=0x0013bf; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 2124 mov     [bp+var_12], al ;~ 01A2:13BF
cs=0x1a2;eip=0x0013c2; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 2125 mov     al, [bp+var_6] ;~ 01A2:13C2
cs=0x1a2;eip=0x0013c5; 	T(CBW);	// 2126 cbw ;~ 01A2:13C5
cs=0x1a2;eip=0x0013c6; 	X(PUSH(ax));	// 2127 push    ax ;~ 01A2:13C6
cs=0x1a2;eip=0x0013c7; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 2128 push    word ptr wndsprite+2 ;~ 01A2:13C7
cs=0x1a2;eip=0x0013cb; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 2129 push    word ptr wndsprite ;~ 01A2:13CB
cs=0x1a2;eip=0x0013cf; 	R(CALLF(sprite_blit_to_video,0));	// 2130 call    sprite_blit_to_video ;~ 01A2:13CF
cs=0x1a2;eip=0x0013d4; 	T(ADD(sp, 6));	// 2131 add     sp, 6 ;~ 01A2:13D4
cs=0x1a2;eip=0x0013d7; 	X(MOV(*(raddr(ss,bp+var_6)), 0x0FE));	// 2132 mov     [bp+var_6], 0FEh ; 'þ' ;~ 01A2:13D7
cs=0x1a2;eip=0x0013db; 	R(CALLF(sprite_copy_2_to_1_2,0));	// 2133 call    sprite_copy_2_to_1_2 ;~ 01A2:13DB
cs=0x1a2;eip=0x0013e0; 	R(CALLF(sub_29772,0));	// 2134 call    sub_29772 ;~ 01A2:13E0
loc_113e5:
	// 4451 
cs=0x1a2;eip=0x0013e5; 	X(PUSH(word_407d0));	// 2137 push    word_407D0 ;~ 01A2:13E5
cs=0x1a2;eip=0x0013e9; 	X(PUSH(word_407ce));	// 2138 push    word_407CE ;~ 01A2:13E9
cs=0x1a2;eip=0x0013ed; 	T(MOV(ax, offset(dseg,trackmenu_buttons_y2)));	// 2139 mov     ax, offset trackmenu_buttons_y2 ;~ 01A2:13ED
cs=0x1a2;eip=0x0013f0; 	X(PUSH(ax));	// 2140 push    ax ;~ 01A2:13F0
cs=0x1a2;eip=0x0013f1; 	T(MOV(ax, offset(dseg,trackmenu_buttons_y1)));	// 2141 mov     ax, offset trackmenu_buttons_y1 ;~ 01A2:13F1
cs=0x1a2;eip=0x0013f4; 	X(PUSH(ax));	// 2142 push    ax ;~ 01A2:13F4
cs=0x1a2;eip=0x0013f5; 	T(MOV(ax, offset(dseg,trackmenu_buttons_x2)));	// 2143 mov     ax, offset trackmenu_buttons_x2 ;~ 01A2:13F5
cs=0x1a2;eip=0x0013f8; 	X(PUSH(ax));	// 2144 push    ax ;~ 01A2:13F8
cs=0x1a2;eip=0x0013f9; 	T(MOV(ax, offset(dseg,trackmenu_buttons_x1)));	// 2145 mov     ax, offset trackmenu_buttons_x1 ;~ 01A2:13F9
cs=0x1a2;eip=0x0013fc; 	X(PUSH(ax));	// 2146 push    ax ;~ 01A2:13FC
cs=0x1a2;eip=0x0013fd; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2147 mov     al, [bp+var_16] ;~ 01A2:13FD
cs=0x1a2;eip=0x001400; 	T(CBW);	// 2148 cbw ;~ 01A2:1400
cs=0x1a2;eip=0x001401; 	X(PUSH(ax));	// 2149 push    ax ;~ 01A2:1401
cs=0x1a2;eip=0x001402; 	R(CALLF(mouse_timer_sprite_unk,0));	// 2150 call    mouse_timer_sprite_unk ;~ 01A2:1402
cs=0x1a2;eip=0x001407; 	T(ADD(sp, 0x0E));	// 2151 add     sp, 0Eh ;~ 01A2:1407
cs=0x1a2;eip=0x00140a; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 2152 mov     [bp+var_C], ax ;~ 01A2:140A
cs=0x1a2;eip=0x00140d; 	X(ADD(idle_counter, ax));	// 2153 add     idle_counter, ax ;~ 01A2:140D
cs=0x1a2;eip=0x001411; 	T(CMP(idle_counter, 0x1770));	// 2154 cmp     idle_counter, 1770h ;~ 01A2:1411
cs=0x1a2;eip=0x001417; 	R(JLE(loc_11423));	// 2155 jle     short loc_11423 ;~ 01A2:1417
cs=0x1a2;eip=0x001419; 	X(MOV(idle_counter, 0));	// 2156 mov     idle_counter, 0 ;~ 01A2:1419
cs=0x1a2;eip=0x00141f; 	X(INC(idle_expired));	// 2157 inc     idle_expired ;~ 01A2:141F
loc_11423:
	// 4452 
cs=0x1a2;eip=0x001423; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 2160 push    [bp+var_C] ;~ 01A2:1423
cs=0x1a2;eip=0x001426; 	R(CALLF(input_checking,0));	// 2161 call    input_checking ;~ 01A2:1426
cs=0x1a2;eip=0x00142b; 	T(ADD(sp, 2));	// 2162 add     sp, 2 ;~ 01A2:142B
cs=0x1a2;eip=0x00142e; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 2163 mov     [bp+var_E], ax ;~ 01A2:142E
cs=0x1a2;eip=0x001431; 	T(MOV(ax, offset(dseg,trackmenu_buttons_y2)));	// 2164 mov     ax, offset trackmenu_buttons_y2 ;~ 01A2:1431
cs=0x1a2;eip=0x001434; 	X(PUSH(ax));	// 2165 push    ax ;~ 01A2:1434
cs=0x1a2;eip=0x001435; 	T(MOV(ax, offset(dseg,trackmenu_buttons_y1)));	// 2166 mov     ax, offset trackmenu_buttons_y1 ;~ 01A2:1435
cs=0x1a2;eip=0x001438; 	X(PUSH(ax));	// 2167 push    ax ;~ 01A2:1438
cs=0x1a2;eip=0x001439; 	T(MOV(ax, offset(dseg,trackmenu_buttons_x2)));	// 2168 mov     ax, offset trackmenu_buttons_x2 ;~ 01A2:1439
cs=0x1a2;eip=0x00143c; 	X(PUSH(ax));	// 2169 push    ax ;~ 01A2:143C
cs=0x1a2;eip=0x00143d; 	T(MOV(ax, offset(dseg,trackmenu_buttons_x1)));	// 2170 mov     ax, offset trackmenu_buttons_x1 ;~ 01A2:143D
cs=0x1a2;eip=0x001440; 	X(PUSH(ax));	// 2171 push    ax ;~ 01A2:1440
cs=0x1a2;eip=0x001441; 	T(MOV(ax, 3));	// 2172 mov     ax, 3 ;~ 01A2:1441
cs=0x1a2;eip=0x001444; 	X(PUSH(ax));	// 2173 push    ax ;~ 01A2:1444
cs=0x1a2;eip=0x001445; 	R(CALLF(mouse_multi_hittest,0));	// 2174 call    mouse_multi_hittest ;~ 01A2:1445
cs=0x1a2;eip=0x00144a; 	T(ADD(sp, 0x0A));	// 2175 add     sp, 0Ah ;~ 01A2:144A
cs=0x1a2;eip=0x00144d; 	X(MOV(*(raddr(ss,bp+var_14)), al));	// 2176 mov     [bp+var_14], al ;~ 01A2:144D
cs=0x1a2;eip=0x001450; 	T(CMP(al, 0x0FF));	// 2177 cmp     al, 0FFh ;~ 01A2:1450
cs=0x1a2;eip=0x001452; 	R(JZ(loc_11457));	// 2178 jz      short loc_11457 ;~ 01A2:1452
cs=0x1a2;eip=0x001454; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 2179 mov     [bp+var_16], al ;~ 01A2:1454
loc_11457:
	// 4453 
cs=0x1a2;eip=0x001457; 	T(CMP(idle_expired, 0));	// 2182 cmp     idle_expired, 0 ;~ 01A2:1457
cs=0x1a2;eip=0x00145c; 	R(JZ(loc_11467));	// 2183 jz      short loc_11467 ;~ 01A2:145C
cs=0x1a2;eip=0x00145e; 	X(MOV(*(raddr(ss,bp+var_16)), 2));	// 2184 mov     [bp+var_16], 2 ;~ 01A2:145E
cs=0x1a2;eip=0x001462; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0x0D));	// 2185 mov     [bp+var_E], 0Dh ;~ 01A2:1462
loc_11467:
	// 4454 
cs=0x1a2;eip=0x001467; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0));	// 2188 cmp     [bp+var_E], 0 ;~ 01A2:1467
cs=0x1a2;eip=0x00146b; 	R(JNZ(loc_11470));	// 2189 jnz     short loc_11470 ;~ 01A2:146B
cs=0x1a2;eip=0x00146d; 	R(JMP(loc_113b4));	// 2190 jmp     loc_113B4 ;~ 01A2:146D
loc_11470:
	// 4455 
cs=0x1a2;eip=0x001470; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 2194 mov     ax, [bp+var_E] ;~ 01A2:1470
cs=0x1a2;eip=0x001473; 	T(CMP(ax, 0x0D));	// 2195 cmp     ax, 0Dh ;~ 01A2:1473
cs=0x1a2;eip=0x001476; 	R(JZ(loc_114bc));	// 2196 jz      short loc_114BC ;~ 01A2:1476
cs=0x1a2;eip=0x001478; 	T(CMP(ax, 0x1B));	// 2197 cmp     ax, 1Bh ;~ 01A2:1478
cs=0x1a2;eip=0x00147b; 	R(JZ(loc_114b8));	// 2198 jz      short loc_114B8 ;~ 01A2:147B
cs=0x1a2;eip=0x00147d; 	T(CMP(ax, 0x20));	// 2199 cmp     ax, 20h ; ' ' ;~ 01A2:147D
cs=0x1a2;eip=0x001480; 	R(JZ(loc_114bc));	// 2200 jz      short loc_114BC ;~ 01A2:1480
cs=0x1a2;eip=0x001482; 	T(CMP(ax, 0x4B00));	// 2201 cmp     ax, 4B00h ;~ 01A2:1482
cs=0x1a2;eip=0x001485; 	R(JZ(loc_11490));	// 2202 jz      short loc_11490 ;~ 01A2:1485
cs=0x1a2;eip=0x001487; 	T(CMP(ax, 0x4D00));	// 2203 cmp     ax, 4D00h ;~ 01A2:1487
cs=0x1a2;eip=0x00148a; 	R(JZ(loc_114a4));	// 2204 jz      short loc_114A4 ;~ 01A2:148A
cs=0x1a2;eip=0x00148c; 	R(JMP(loc_113b4));	// 2205 jmp     loc_113B4 ;~ 01A2:148C
loc_11490:
	// 4456 
cs=0x1a2;eip=0x001490; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 2210 cmp     [bp+var_16], 0 ;~ 01A2:1490
cs=0x1a2;eip=0x001494; 	R(JZ(loc_1149c));	// 2211 jz      short loc_1149C ;~ 01A2:1494
cs=0x1a2;eip=0x001496; 	X(DEC(*(raddr(ss,bp+var_16))));	// 2212 dec     [bp+var_16] ;~ 01A2:1496
cs=0x1a2;eip=0x001499; 	R(JMP(loc_113b4));	// 2213 jmp     loc_113B4 ;~ 01A2:1499
loc_1149c:
	// 4457 
cs=0x1a2;eip=0x00149c; 	X(MOV(*(raddr(ss,bp+var_16)), 2));	// 2217 mov     [bp+var_16], 2 ;~ 01A2:149C
cs=0x1a2;eip=0x0014a0; 	R(JMP(loc_113b4));	// 2218 jmp     loc_113B4 ;~ 01A2:14A0
loc_114a4:
	// 4458 
cs=0x1a2;eip=0x0014a4; 	T(CMP(*(raddr(ss,bp+var_16)), 2));	// 2223 cmp     [bp+var_16], 2 ;~ 01A2:14A4
cs=0x1a2;eip=0x0014a8; 	R(JGE(loc_114b0));	// 2224 jge     short loc_114B0 ;~ 01A2:14A8
cs=0x1a2;eip=0x0014aa; 	X(INC(*(raddr(ss,bp+var_16))));	// 2225 inc     [bp+var_16] ;~ 01A2:14AA
cs=0x1a2;eip=0x0014ad; 	R(JMP(loc_113b4));	// 2226 jmp     loc_113B4 ;~ 01A2:14AD
loc_114b0:
	// 4459 
cs=0x1a2;eip=0x0014b0; 	X(MOV(*(raddr(ss,bp+var_16)), 0));	// 2230 mov     [bp+var_16], 0 ;~ 01A2:14B0
cs=0x1a2;eip=0x0014b4; 	R(JMP(loc_113b4));	// 2231 jmp     loc_113B4 ;~ 01A2:14B4
loc_114b8:
	// 4460 
cs=0x1a2;eip=0x0014b8; 	X(MOV(*(raddr(ss,bp+var_16)), 0x0FF));	// 2236 mov     [bp+var_16], 0FFh ;~ 01A2:14B8
loc_114bc:
	// 4461 
cs=0x1a2;eip=0x0014bc; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2240 mov     al, [bp+var_16] ;~ 01A2:14BC
cs=0x1a2;eip=0x0014bf; 	T(CBW);	// 2241 cbw ;~ 01A2:14BF
cs=0x1a2;eip=0x0014c0; 	T(OR(ax, ax));	// 2242 or      ax, ax ;~ 01A2:14C0
cs=0x1a2;eip=0x0014c2; 	R(JZ(loc_114e2));	// 2243 jz      short loc_114E2 ;~ 01A2:14C2
cs=0x1a2;eip=0x0014c4; 	T(CMP(ax, 1));	// 2244 cmp     ax, 1 ;~ 01A2:14C4
cs=0x1a2;eip=0x0014c7; 	R(JNZ(loc_114cc));	// 2245 jnz     short loc_114CC ;~ 01A2:14C7
cs=0x1a2;eip=0x0014c9; 	R(JMP(loc_1155a));	// 2246 jmp     loc_1155A ;~ 01A2:14C9
loc_114cc:
	// 4462 
cs=0x1a2;eip=0x0014cc; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 2250 push    word ptr wndsprite+2 ;~ 01A2:14CC
cs=0x1a2;eip=0x0014d0; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 2251 push    word ptr wndsprite ;~ 01A2:14D0
cs=0x1a2;eip=0x0014d4; 	R(CALLF(sprite_free_wnd,0));	// 2252 call    sprite_free_wnd ;~ 01A2:14D4
cs=0x1a2;eip=0x0014d9; 	T(ADD(sp, 4));	// 2253 add     sp, 4 ;~ 01A2:14D9
cs=0x1a2;eip=0x0014dc; 	X(POP(si));	// 2254 pop     si ;~ 01A2:14DC
cs=0x1a2;eip=0x0014dd; 	X(POP(di));	// 2255 pop     di ;~ 01A2:14DD
cs=0x1a2;eip=0x0014de; 	T(MOV(sp, bp));	// 2256 mov     sp, bp ;~ 01A2:14DE
cs=0x1a2;eip=0x0014e0; 	X(POP(bp));	// 2257 pop     bp ;~ 01A2:14E0
cs=0x1a2;eip=0x0014e1; 	R(RETF(0));	// 2258 retf ;~ 01A2:14E1
loc_114e2:
	// 4463 
cs=0x1a2;eip=0x0014e2; 	T(MOV(ax, offset(dseg,atrk)));	// 2262 mov     ax, offset aTrk ; "trk" ;~ 01A2:14E2
cs=0x1a2;eip=0x0014e5; 	X(PUSH(ax));	// 2263 push    ax ;~ 01A2:14E5
cs=0x1a2;eip=0x0014e6; 	X(PUSH(word_44cee));	// 2264 push    word_44CEE ;~ 01A2:14E6
cs=0x1a2;eip=0x0014ea; 	X(PUSH(mainresptr));	// 2265 push    mainresptr ;~ 01A2:14EA
cs=0x1a2;eip=0x0014ee; 	R(CALLF(locate_text_res,0));	// 2266 call    locate_text_res ;~ 01A2:14EE
cs=0x1a2;eip=0x0014f3; 	T(ADD(sp, 6));	// 2267 add     sp, 6 ;~ 01A2:14F3
cs=0x1a2;eip=0x0014f6; 	X(PUSH(dx));	// 2268 push    dx              ; int ;~ 01A2:14F6
cs=0x1a2;eip=0x0014f7; 	X(PUSH(ax));	// 2269 push    ax              ; int ;~ 01A2:14F7
cs=0x1a2;eip=0x0014f8; 	T(MOV(ax, offset(dseg,a_trk_0)));	// 2270 mov     ax, offset a_trk_0 ; ".trk" ;~ 01A2:14F8
cs=0x1a2;eip=0x0014fb; 	X(PUSH(ax));	// 2271 push    ax              ; int ;~ 01A2:14FB
cs=0x1a2;eip=0x0014fc; 	T(MOV(ax, offset(dseg,byte_449b1)));	// 2272 mov     ax, offset byte_449B1 ;~ 01A2:14FC
cs=0x1a2;eip=0x0014ff; 	X(PUSH(ax));	// 2273 push    ax ;~ 01A2:14FF
cs=0x1a2;eip=0x001500; 	T(MOV(ax, 0x9C));	// 2274 mov     ax, 9Ch ; 'œ' ;~ 01A2:1500
cs=0x1a2;eip=0x001503; 	X(PUSH(ax));	// 2275 push    ax              ; char * ;~ 01A2:1503
cs=0x1a2;eip=0x001504; 	R(CALLF(do_fileselect_dialog,0));	// 2276 call    do_fileselect_dialog ;~ 01A2:1504
cs=0x1a2;eip=0x001509; 	T(ADD(sp, 0x0A));	// 2277 add     sp, 0Ah ;~ 01A2:1509
cs=0x1a2;eip=0x00150c; 	T(CBW);	// 2278 cbw ;~ 01A2:150C
cs=0x1a2;eip=0x00150d; 	T(MOV(si, ax));	// 2279 mov     si, ax ;~ 01A2:150D
cs=0x1a2;eip=0x00150f; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 2280 mov     ax, offset g_path_buf ;~ 01A2:150F
cs=0x1a2;eip=0x001512; 	X(PUSH(ax));	// 2281 push    ax              ; char * ;~ 01A2:1512
cs=0x1a2;eip=0x001513; 	T(MOV(ax, offset(dseg,a_trk_1)));	// 2282 mov     ax, offset a_trk_1 ; ".trk" ;~ 01A2:1513
cs=0x1a2;eip=0x001516; 	X(PUSH(ax));	// 2283 push    ax              ; int ;~ 01A2:1516
cs=0x1a2;eip=0x001517; 	T(MOV(ax, offset(dseg,byte_449b1)));	// 2284 mov     ax, offset byte_449B1 ;~ 01A2:1517
cs=0x1a2;eip=0x00151a; 	X(PUSH(ax));	// 2285 push    ax ;~ 01A2:151A
cs=0x1a2;eip=0x00151b; 	T(MOV(ax, 0x9C));	// 2286 mov     ax, 9Ch ; 'œ' ;~ 01A2:151B
cs=0x1a2;eip=0x00151e; 	X(PUSH(ax));	// 2287 push    ax              ; char * ;~ 01A2:151E
cs=0x1a2;eip=0x00151f; 	R(CALLF(file_build_path,0));	// 2288 call    file_build_path ;~ 01A2:151F
cs=0x1a2;eip=0x001524; 	T(ADD(sp, 8));	// 2289 add     sp, 8 ;~ 01A2:1524
cs=0x1a2;eip=0x001527; 	T(OR(si, si));	// 2290 or      si, si ;~ 01A2:1527
cs=0x1a2;eip=0x001529; 	R(JZ(loc_11552));	// 2291 jz      short loc_11552 ;~ 01A2:1529
cs=0x1a2;eip=0x00152b; 	X(PUSH(*(dw*)(((db*)&td14_elem_map_main)+2)));	// 2292 push    word ptr td14_elem_map_main+2 ;~ 01A2:152B
cs=0x1a2;eip=0x00152f; 	X(PUSH(*(dw*)(((db*)&td14_elem_map_main))));	// 2293 push    word ptr td14_elem_map_main ;~ 01A2:152F
cs=0x1a2;eip=0x001533; 	T(MOV(ax, 0x95F8));	// 2294 mov     ax, 95F8h ;~ 01A2:1533
cs=0x1a2;eip=0x001536; 	X(PUSH(ax));	// 2295 push    ax ;~ 01A2:1536
cs=0x1a2;eip=0x001537; 	R(CALLF(file_read_fatal,0));	// 2296 call    file_read_fatal ;~ 01A2:1537
cs=0x1a2;eip=0x00153c; 	T(ADD(sp, 6));	// 2297 add     sp, 6 ;~ 01A2:153C
cs=0x1a2;eip=0x00153f; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 2298 push    word ptr wndsprite+2 ;~ 01A2:153F
cs=0x1a2;eip=0x001543; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 2299 push    word ptr wndsprite ;~ 01A2:1543
cs=0x1a2;eip=0x001547; 	R(CALLF(sprite_free_wnd,0));	// 2300 call    sprite_free_wnd ;~ 01A2:1547
cs=0x1a2;eip=0x00154c; 	T(ADD(sp, 4));	// 2301 add     sp, 4 ;~ 01A2:154C
cs=0x1a2;eip=0x00154f; 	R(JMP(loc_110ed));	// 2302 jmp     loc_110ED ;~ 01A2:154F
loc_11552:
	// 4464 
cs=0x1a2;eip=0x001552; 	X(MOV(*(raddr(ss,bp+var_12)), 0x0FF));	// 2306 mov     [bp+var_12], 0FFh ;~ 01A2:1552
cs=0x1a2;eip=0x001556; 	R(JMP(loc_113b4));	// 2307 jmp     loc_113B4 ;~ 01A2:1556
loc_1155a:
	// 4465 
cs=0x1a2;eip=0x00155a; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 2312 push    word ptr wndsprite+2 ;~ 01A2:155A
cs=0x1a2;eip=0x00155e; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 2313 push    word ptr wndsprite ;~ 01A2:155E
cs=0x1a2;eip=0x001562; 	R(CALLF(sprite_free_wnd,0));	// 2314 call    sprite_free_wnd ;~ 01A2:1562
cs=0x1a2;eip=0x001567; 	T(ADD(sp, 4));	// 2315 add     sp, 4 ;~ 01A2:1567
loc_1156a:
	// 4466 
cs=0x1a2;eip=0x00156a; 	R(CALLF(check_input,0));	// 2318 call    check_input ;~ 01A2:156A
cs=0x1a2;eip=0x00156f; 	R(CALLF(show_waiting,0));	// 2319 call    show_waiting ;~ 01A2:156F
cs=0x1a2;eip=0x001574; 	X(MOV(waitflag, 0x82));	// 2320 mov     waitflag, 82h ; '‚' ;~ 01A2:1574
cs=0x1a2;eip=0x00157a; 	R(CALLF(track_setup,0));	// 2321 call    track_setup ;~ 01A2:157A
cs=0x1a2;eip=0x00157f; 	R(CALLF(load_tracks_menu_shapes,0));	// 2322 call    load_tracks_menu_shapes ;~ 01A2:157F
cs=0x1a2;eip=0x001584; 	R(JMP(loc_110ed));	// 2323 jmp     loc_110ED ;~ 01A2:1584
highscore_write_a:
	// 2333 
#undef var_3a
#define var_3a -0x3A
	// 2336 var_3A          = word ptr -3Ah ;~ 01A2:1588
#undef var_38
#define var_38 -0x38
	// 2337 var_38          = byte ptr -38h ;~ 01A2:1588
#undef var_27
#define var_27 -0x27
	// 2338 var_27          = byte ptr -27h ;~ 01A2:1588
#undef var_f
#define var_f -0x0F
	// 2339 var_F           = byte ptr -0Fh ;~ 01A2:1588
#undef var_e
#define var_e -0x0E
	// 2340 var_E           = byte ptr -0Eh ;~ 01A2:1588
#undef var_6
#define var_6 -6
	// 2341 var_6           = word ptr -6 ;~ 01A2:1588
#undef var_4
#define var_4 -4
	// 2342 var_4           = word ptr -4 ;~ 01A2:1588
#undef var_2
#define var_2 -2
	// 2343 var_2           = word ptr -2 ;~ 01A2:1588
#undef arg_0
#define arg_0 6
	// 2344 arg_0           = word ptr  6 ;~ 01A2:1588
ret_1a2_1588:
	// 4467 
cs=0x1a2;eip=0x001588; 	X(PUSH(bp));	// 2346 push    bp ;~ 01A2:1588
cs=0x1a2;eip=0x001589; 	T(MOV(bp, sp));	// 2347 mov     bp, sp ;~ 01A2:1589
cs=0x1a2;eip=0x00158b; 	T(SUB(sp, 0x3A));	// 2348 sub     sp, 3Ah ;~ 01A2:158B
cs=0x1a2;eip=0x00158e; 	X(PUSH(di));	// 2349 push    di ;~ 01A2:158E
cs=0x1a2;eip=0x00158f; 	X(PUSH(si));	// 2350 push    si              ; char * ;~ 01A2:158F
cs=0x1a2;eip=0x001590; 	X(MOV(byte_449ce, 0x0FF));	// 2351 mov     byte_449CE, 0FFh ;~ 01A2:1590
cs=0x1a2;eip=0x001595; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), 0));	// 2352 mov     [bp+var_3A], 0 ;~ 01A2:1595
loc_1159a:
	// 4468 
cs=0x1a2;eip=0x00159a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3a))));	// 2355 mov     bx, [bp+var_3A] ;~ 01A2:159A
cs=0x1a2;eip=0x00159d; 	T(SHL(bx, 1));	// 2356 shl     bx, 1 ;~ 01A2:159D
cs=0x1a2;eip=0x00159f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3a))));	// 2357 mov     ax, [bp+var_3A] ;~ 01A2:159F
cs=0x1a2;eip=0x0015a2; 	X(MOV(*(dw*)(((db*)&word_46170)+bx), ax));	// 2358 mov     word_46170[bx], ax ;~ 01A2:15A2
cs=0x1a2;eip=0x0015a6; 	X(INC(*(dw*)(raddr(ss,bp+var_3a))));	// 2359 inc     [bp+var_3A] ;~ 01A2:15A6
cs=0x1a2;eip=0x0015a9; 	T(CMP(*(dw*)(raddr(ss,bp+var_3a)), 7));	// 2360 cmp     [bp+var_3A], 7 ;~ 01A2:15A9
cs=0x1a2;eip=0x0015ad; 	R(JL(loc_1159a));	// 2361 jl      short loc_1159A ;~ 01A2:15AD
cs=0x1a2;eip=0x0015af; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 2362 mov     ax, offset g_path_buf ;~ 01A2:15AF
cs=0x1a2;eip=0x0015b2; 	X(PUSH(ax));	// 2363 push    ax              ; char * ;~ 01A2:15B2
cs=0x1a2;eip=0x0015b3; 	T(MOV(ax, offset(dseg,a_hig_0)));	// 2364 mov     ax, offset a_hig_0 ; ".hig" ;~ 01A2:15B3
cs=0x1a2;eip=0x0015b6; 	X(PUSH(ax));	// 2365 push    ax              ; int ;~ 01A2:15B6
cs=0x1a2;eip=0x0015b7; 	T(MOV(ax, offset(dseg,byte_449b1)));	// 2366 mov     ax, offset byte_449B1 ;~ 01A2:15B7
cs=0x1a2;eip=0x0015ba; 	X(PUSH(ax));	// 2367 push    ax ;~ 01A2:15BA
cs=0x1a2;eip=0x0015bb; 	T(MOV(ax, 0x9C));	// 2368 mov     ax, 9Ch ; 'œ' ;~ 01A2:15BB
cs=0x1a2;eip=0x0015be; 	X(PUSH(ax));	// 2369 push    ax              ; char * ;~ 01A2:15BE
cs=0x1a2;eip=0x0015bf; 	R(CALLF(file_build_path,0));	// 2370 call    file_build_path ;~ 01A2:15BF
cs=0x1a2;eip=0x0015c4; 	T(ADD(sp, 8));	// 2371 add     sp, 8 ;~ 01A2:15C4
cs=0x1a2;eip=0x0015c7; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 2372 cmp     [bp+arg_0], 0 ;~ 01A2:15C7
cs=0x1a2;eip=0x0015cb; 	R(JNZ(loc_1160a));	// 2373 jnz     short loc_1160A ;~ 01A2:15CB
cs=0x1a2;eip=0x0015cd; 	X(MOV(g_is_busy, 1));	// 2374 mov     g_is_busy, 1 ;~ 01A2:15CD
cs=0x1a2;eip=0x0015d2; 	X(PUSH(*(dw*)(((db*)&td11_highscores)+2)));	// 2375 push    word ptr td11_highscores+2 ;~ 01A2:15D2
cs=0x1a2;eip=0x0015d6; 	X(PUSH(*(dw*)(((db*)&td11_highscores))));	// 2376 push    word ptr td11_highscores ;~ 01A2:15D6
cs=0x1a2;eip=0x0015da; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 2377 mov     ax, offset g_path_buf ;~ 01A2:15DA
cs=0x1a2;eip=0x0015dd; 	X(PUSH(ax));	// 2378 push    ax ;~ 01A2:15DD
cs=0x1a2;eip=0x0015de; 	T(MOV(ax, 0x0A));	// 2379 mov     ax, 0Ah ;~ 01A2:15DE
cs=0x1a2;eip=0x0015e1; 	X(PUSH(ax));	// 2380 push    ax ;~ 01A2:15E1
cs=0x1a2;eip=0x0015e2; 	R(CALLF(sub_29a86,0));	// 2381 call    sub_29A86 ;~ 01A2:15E2
cs=0x1a2;eip=0x0015e7; 	T(ADD(sp, 8));	// 2382 add     sp, 8 ;~ 01A2:15E7
cs=0x1a2;eip=0x0015ea; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 2383 mov     [bp+var_4], ax ;~ 01A2:15EA
cs=0x1a2;eip=0x0015ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 2384 mov     [bp+var_2], dx ;~ 01A2:15ED
cs=0x1a2;eip=0x0015f0; 	X(MOV(g_is_busy, 0));	// 2385 mov     g_is_busy, 0 ;~ 01A2:15F0
cs=0x1a2;eip=0x0015f5; 	T(OR(ax, dx));	// 2386 or      ax, dx ;~ 01A2:15F5
cs=0x1a2;eip=0x0015f7; 	R(JNZ(loc_11602));	// 2387 jnz     short loc_11602 ;~ 01A2:15F7
loc_115f9:
	// 4469 
cs=0x1a2;eip=0x0015f9; 	T(MOV(ax, 1));	// 2390 mov     ax, 1 ;~ 01A2:15F9
cs=0x1a2;eip=0x0015fc; 	X(POP(si));	// 2391 pop     si ;~ 01A2:15FC
cs=0x1a2;eip=0x0015fd; 	X(POP(di));	// 2392 pop     di ;~ 01A2:15FD
cs=0x1a2;eip=0x0015fe; 	T(MOV(sp, bp));	// 2393 mov     sp, bp ;~ 01A2:15FE
cs=0x1a2;eip=0x001600; 	X(POP(bp));	// 2394 pop     bp ;~ 01A2:1600
cs=0x1a2;eip=0x001601; 	R(RETF(0));	// 2395 retf ;~ 01A2:1601
loc_11602:
	// 4470 
cs=0x1a2;eip=0x001602; 	T(SUB(ax, ax));	// 2400 sub     ax, ax ;~ 01A2:1602
cs=0x1a2;eip=0x001604; 	X(POP(si));	// 2401 pop     si ;~ 01A2:1604
cs=0x1a2;eip=0x001605; 	X(POP(di));	// 2402 pop     di ;~ 01A2:1605
cs=0x1a2;eip=0x001606; 	T(MOV(sp, bp));	// 2403 mov     sp, bp ;~ 01A2:1606
cs=0x1a2;eip=0x001608; 	X(POP(bp));	// 2404 pop     bp ;~ 01A2:1608
cs=0x1a2;eip=0x001609; 	R(RETF(0));	// 2405 retf ;~ 01A2:1609
loc_1160a:
	// 4471 
cs=0x1a2;eip=0x00160a; 	T(MOV(ax, offset(dseg,a______________)));	// 2409 mov     ax, offset a______________ ; "...................." ;~ 01A2:160A
cs=0x1a2;eip=0x00160d; 	X(PUSH(ax));	// 2410 push    ax ;~ 01A2:160D
cs=0x1a2;eip=0x00160e; 	T(ax = bp+var_38);	// 2411 lea     ax, [bp+var_38] ;~ 01A2:160E
cs=0x1a2;eip=0x001611; 	X(PUSH(ax));	// 2412 push    ax              ; char * ;~ 01A2:1611
cs=0x1a2;eip=0x001612; 	R(CALLF(_strcpy,0));	// 2413 call    _strcpy ;~ 01A2:1612
cs=0x1a2;eip=0x001617; 	T(ADD(sp, 4));	// 2414 add     sp, 4 ;~ 01A2:1617
cs=0x1a2;eip=0x00161a; 	T(MOV(ax, offset(dseg,a_______________________)));	// 2415 mov     ax, offset a_______________________ ; "......................." ;~ 01A2:161A
cs=0x1a2;eip=0x00161d; 	X(PUSH(ax));	// 2416 push    ax ;~ 01A2:161D
cs=0x1a2;eip=0x00161e; 	T(ax = bp+var_27);	// 2417 lea     ax, [bp+var_27] ;~ 01A2:161E
cs=0x1a2;eip=0x001621; 	X(PUSH(ax));	// 2418 push    ax              ; char * ;~ 01A2:1621
cs=0x1a2;eip=0x001622; 	R(CALLF(_strcpy,0));	// 2419 call    _strcpy ;~ 01A2:1622
cs=0x1a2;eip=0x001627; 	T(ADD(sp, 4));	// 2420 add     sp, 4 ;~ 01A2:1627
cs=0x1a2;eip=0x00162a; 	X(MOV(*(raddr(ss,bp+var_f)), 0));	// 2421 mov     [bp+var_F], 0 ;~ 01A2:162A
cs=0x1a2;eip=0x00162e; 	T(MOV(ax, offset(dseg,a______)));	// 2422 mov     ax, offset a______ ; "../...." ;~ 01A2:162E
cs=0x1a2;eip=0x001631; 	X(PUSH(ax));	// 2423 push    ax ;~ 01A2:1631
cs=0x1a2;eip=0x001632; 	T(ax = bp+var_e);	// 2424 lea     ax, [bp+var_E] ;~ 01A2:1632
cs=0x1a2;eip=0x001635; 	X(PUSH(ax));	// 2425 push    ax              ; char * ;~ 01A2:1635
cs=0x1a2;eip=0x001636; 	R(CALLF(_strcpy,0));	// 2426 call    _strcpy ;~ 01A2:1636
cs=0x1a2;eip=0x00163b; 	T(ADD(sp, 4));	// 2427 add     sp, 4 ;~ 01A2:163B
cs=0x1a2;eip=0x00163e; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0x0FFFF));	// 2428 mov     [bp+var_6], 0FFFFh ;~ 01A2:163E
cs=0x1a2;eip=0x001643; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), 0));	// 2429 mov     [bp+var_3A], 0 ;~ 01A2:1643
loc_11648:
	// 4472 
cs=0x1a2;eip=0x001648; 	T(MOV(ax, 0x34));	// 2432 mov     ax, 34h ; '4' ;~ 01A2:1648
cs=0x1a2;eip=0x00164b; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_3a))));	// 2433 imul    [bp+var_3A] ;~ 01A2:164B
cs=0x1a2;eip=0x00164e; 	T(MOV(bx, ax));	// 2434 mov     bx, ax ;~ 01A2:164E
cs=0x1a2;eip=0x001650; 	T(LES(si, td11_highscores));	// 2435 les     si, td11_highscores ;~ 01A2:1650
cs=0x1a2;eip=0x001654; 	T(di = bx+si);	// 2436 lea     di, [bx+si] ;~ 01A2:1654
cs=0x1a2;eip=0x001656; 	T(si = bp+var_38);	// 2437 lea     si, [bp+var_38] ;~ 01A2:1656
cs=0x1a2;eip=0x001659; 	T(MOV(cx, 0x1A));	// 2438 mov     cx, 1Ah ;~ 01A2:1659
	// 2439 repne movsw ;~ 01A2:165C
cs=0x1a2;eip=0x00165c; 	X(	REPNE MOVSW);	// 2439 repne movsw ;~ 01A2:165C
cs=0x1a2;eip=0x00165e; 	X(INC(*(dw*)(raddr(ss,bp+var_3a))));	// 2440 inc     [bp+var_3A] ;~ 01A2:165E
cs=0x1a2;eip=0x001661; 	T(CMP(*(dw*)(raddr(ss,bp+var_3a)), 7));	// 2441 cmp     [bp+var_3A], 7 ;~ 01A2:1661
cs=0x1a2;eip=0x001665; 	R(JL(loc_11648));	// 2442 jl      short loc_11648 ;~ 01A2:1665
cs=0x1a2;eip=0x001667; 	T(MOV(ax, 0x16C));	// 2443 mov     ax, 16Ch ;~ 01A2:1667
cs=0x1a2;eip=0x00166a; 	T(CWD);	// 2444 cwd ;~ 01A2:166A
cs=0x1a2;eip=0x00166b; 	X(PUSH(dx));	// 2445 push    dx ;~ 01A2:166B
cs=0x1a2;eip=0x00166c; 	X(PUSH(ax));	// 2446 push    ax ;~ 01A2:166C
cs=0x1a2;eip=0x00166d; 	X(PUSH(*(dw*)(((db*)&td11_highscores)+2)));	// 2447 push    word ptr td11_highscores+2 ;~ 01A2:166D
cs=0x1a2;eip=0x001671; 	X(PUSH(*(dw*)(((db*)&td11_highscores))));	// 2448 push    word ptr td11_highscores ;~ 01A2:1671
cs=0x1a2;eip=0x001675; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 2449 mov     ax, offset g_path_buf ;~ 01A2:1675
cs=0x1a2;eip=0x001678; 	X(PUSH(ax));	// 2450 push    ax ;~ 01A2:1678
cs=0x1a2;eip=0x001679; 	R(CALLF(file_write_fatal,0));	// 2451 call    file_write_fatal ;~ 01A2:1679
cs=0x1a2;eip=0x00167e; 	T(ADD(sp, 0x0A));	// 2452 add     sp, 0Ah ;~ 01A2:167E
cs=0x1a2;eip=0x001681; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), ax));	// 2453 mov     [bp+var_3A], ax ;~ 01A2:1681
cs=0x1a2;eip=0x001684; 	T(OR(ax, ax));	// 2454 or      ax, ax ;~ 01A2:1684
cs=0x1a2;eip=0x001686; 	R(JNZ(loc_1168b));	// 2455 jnz     short loc_1168B ;~ 01A2:1686
cs=0x1a2;eip=0x001688; 	R(JMP(loc_11602));	// 2456 jmp     loc_11602 ;~ 01A2:1688
loc_1168b:
	// 4473 
cs=0x1a2;eip=0x00168b; 	R(JMP(loc_115f9));	// 2460 jmp     loc_115F9 ;~ 01A2:168B
highscore_text_unk:
	// 2468 
#undef var_a
#define var_a -0x0A
	// 2471 var_A           = byte ptr -0Ah ;~ 01A2:168E
#undef var_8
#define var_8 -8
	// 2472 var_8           = word ptr -8 ;~ 01A2:168E
#undef var_6
#define var_6 -6
	// 2473 var_6           = byte ptr -6 ;~ 01A2:168E
#undef var_5
#define var_5 -5
	// 2474 var_5           = byte ptr -5 ;~ 01A2:168E
#undef var_4
#define var_4 -4
	// 2475 var_4           = byte ptr -4 ;~ 01A2:168E
#undef var_3
#define var_3 -3
	// 2476 var_3           = byte ptr -3 ;~ 01A2:168E
#undef var_2
#define var_2 -2
	// 2477 var_2           = word ptr -2 ;~ 01A2:168E
ret_1a2_168e:
	// 4474 
cs=0x1a2;eip=0x00168e; 	X(PUSH(bp));	// 2479 push    bp ;~ 01A2:168E
cs=0x1a2;eip=0x00168f; 	T(MOV(bp, sp));	// 2480 mov     bp, sp ;~ 01A2:168F
cs=0x1a2;eip=0x001691; 	T(SUB(sp, 0x0A));	// 2481 sub     sp, 0Ah ;~ 01A2:1691
cs=0x1a2;eip=0x001694; 	R(CALLF(sprite_copy_wnd_to_1,0));	// 2482 call    sprite_copy_wnd_to_1 ;~ 01A2:1694
cs=0x1a2;eip=0x001699; 	T(MOV(ax, offset(dseg,ahs1)));	// 2483 mov     ax, offset aHs1 ; "hs1" ;~ 01A2:1699
cs=0x1a2;eip=0x00169c; 	X(PUSH(ax));	// 2484 push    ax ;~ 01A2:169C
cs=0x1a2;eip=0x00169d; 	X(PUSH(word_44cee));	// 2485 push    word_44CEE ;~ 01A2:169D
cs=0x1a2;eip=0x0016a1; 	X(PUSH(mainresptr));	// 2486 push    mainresptr ;~ 01A2:16A1
cs=0x1a2;eip=0x0016a5; 	R(CALLF(locate_text_res,0));	// 2487 call    locate_text_res ;~ 01A2:16A5
cs=0x1a2;eip=0x0016aa; 	T(ADD(sp, 6));	// 2488 add     sp, 6 ;~ 01A2:16AA
cs=0x1a2;eip=0x0016ad; 	X(PUSH(dx));	// 2489 push    dx ;~ 01A2:16AD
cs=0x1a2;eip=0x0016ae; 	X(PUSH(ax));	// 2490 push    ax ;~ 01A2:16AE
cs=0x1a2;eip=0x0016af; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2491 mov     ax, offset resID_byte1 ;~ 01A2:16AF
cs=0x1a2;eip=0x0016b2; 	X(PUSH(ax));	// 2492 push    ax ;~ 01A2:16B2
cs=0x1a2;eip=0x0016b3; 	R(CALLF(copy_string,0));	// 2493 call    copy_string ;~ 01A2:16B3
cs=0x1a2;eip=0x0016b8; 	T(ADD(sp, 6));	// 2494 add     sp, 6 ;~ 01A2:16B8
cs=0x1a2;eip=0x0016bb; 	T(MOV(ax, offset(dseg,asc_3baa2)));	// 2495 mov     ax, offset asc_3BAA2 ; " '" ;~ 01A2:16BB
cs=0x1a2;eip=0x0016be; 	X(PUSH(ax));	// 2496 push    ax ;~ 01A2:16BE
cs=0x1a2;eip=0x0016bf; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2497 mov     ax, offset resID_byte1 ;~ 01A2:16BF
cs=0x1a2;eip=0x0016c2; 	X(PUSH(ax));	// 2498 push    ax              ; char * ;~ 01A2:16C2
cs=0x1a2;eip=0x0016c3; 	R(CALLF(_strcat,0));	// 2499 call    _strcat ;~ 01A2:16C3
cs=0x1a2;eip=0x0016c8; 	T(ADD(sp, 4));	// 2500 add     sp, 4 ;~ 01A2:16C8
cs=0x1a2;eip=0x0016cb; 	T(MOV(ax, offset(dseg,byte_449b1)));	// 2501 mov     ax, offset byte_449B1 ;~ 01A2:16CB
cs=0x1a2;eip=0x0016ce; 	X(PUSH(ax));	// 2502 push    ax ;~ 01A2:16CE
cs=0x1a2;eip=0x0016cf; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2503 mov     ax, offset resID_byte1 ;~ 01A2:16CF
cs=0x1a2;eip=0x0016d2; 	X(PUSH(ax));	// 2504 push    ax              ; char * ;~ 01A2:16D2
cs=0x1a2;eip=0x0016d3; 	R(CALLF(_strcat,0));	// 2505 call    _strcat ;~ 01A2:16D3
cs=0x1a2;eip=0x0016d8; 	T(ADD(sp, 4));	// 2506 add     sp, 4 ;~ 01A2:16D8
cs=0x1a2;eip=0x0016db; 	T(MOV(ax, offset(dseg,asc_3baa5)));	// 2507 mov     ax, offset asc_3BAA5 ; "'" ;~ 01A2:16DB
cs=0x1a2;eip=0x0016de; 	X(PUSH(ax));	// 2508 push    ax ;~ 01A2:16DE
cs=0x1a2;eip=0x0016df; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2509 mov     ax, offset resID_byte1 ;~ 01A2:16DF
cs=0x1a2;eip=0x0016e2; 	X(PUSH(ax));	// 2510 push    ax              ; char * ;~ 01A2:16E2
cs=0x1a2;eip=0x0016e3; 	R(CALLF(_strcat,0));	// 2511 call    _strcat ;~ 01A2:16E3
cs=0x1a2;eip=0x0016e8; 	T(ADD(sp, 4));	// 2512 add     sp, 4 ;~ 01A2:16E8
cs=0x1a2;eip=0x0016eb; 	T(SUB(ax, ax));	// 2513 sub     ax, ax ;~ 01A2:16EB
cs=0x1a2;eip=0x0016ed; 	X(PUSH(ax));	// 2514 push    ax ;~ 01A2:16ED
cs=0x1a2;eip=0x0016ee; 	X(PUSH(dialog_fnt_colour));	// 2515 push    dialog_fnt_colour ;~ 01A2:16EE
cs=0x1a2;eip=0x0016f2; 	T(MOV(ax, 5));	// 2516 mov     ax, 5 ;~ 01A2:16F2
cs=0x1a2;eip=0x0016f5; 	X(PUSH(ax));	// 2517 push    ax ;~ 01A2:16F5
cs=0x1a2;eip=0x0016f6; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2518 mov     ax, offset resID_byte1 ;~ 01A2:16F6
cs=0x1a2;eip=0x0016f9; 	X(PUSH(ax));	// 2519 push    ax ;~ 01A2:16F9
cs=0x1a2;eip=0x0016fa; 	R(CALLF(font_op2_alt,0));	// 2520 call    font_op2_alt ;~ 01A2:16FA
cs=0x1a2;eip=0x0016ff; 	T(ADD(sp, 2));	// 2521 add     sp, 2 ;~ 01A2:16FF
cs=0x1a2;eip=0x001702; 	X(PUSH(ax));	// 2522 push    ax ;~ 01A2:1702
cs=0x1a2;eip=0x001703; 	T(MOV(ax, 0x0AC74));	// 2523 mov     ax, 0AC74h ;~ 01A2:1703
cs=0x1a2;eip=0x001706; 	X(PUSH(ax));	// 2524 push    ax ;~ 01A2:1706
cs=0x1a2;eip=0x001707; 	R(CALLF(hiscore_draw_text,0));	// 2525 call    hiscore_draw_text ;~ 01A2:1707
cs=0x1a2;eip=0x00170c; 	T(ADD(sp, 0x0A));	// 2526 add     sp, 0Ah ;~ 01A2:170C
cs=0x1a2;eip=0x00170f; 	T(MOV(ax, offset(dseg,ahs2)));	// 2527 mov     ax, offset aHs2 ; "hs2" ;~ 01A2:170F
cs=0x1a2;eip=0x001712; 	X(PUSH(ax));	// 2528 push    ax ;~ 01A2:1712
cs=0x1a2;eip=0x001713; 	X(PUSH(word_44cee));	// 2529 push    word_44CEE ;~ 01A2:1713
cs=0x1a2;eip=0x001717; 	X(PUSH(mainresptr));	// 2530 push    mainresptr ;~ 01A2:1717
cs=0x1a2;eip=0x00171b; 	R(CALLF(locate_text_res,0));	// 2531 call    locate_text_res ;~ 01A2:171B
cs=0x1a2;eip=0x001720; 	T(ADD(sp, 6));	// 2532 add     sp, 6 ;~ 01A2:1720
cs=0x1a2;eip=0x001723; 	X(PUSH(dx));	// 2533 push    dx ;~ 01A2:1723
cs=0x1a2;eip=0x001724; 	X(PUSH(ax));	// 2534 push    ax ;~ 01A2:1724
cs=0x1a2;eip=0x001725; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2535 mov     ax, offset resID_byte1 ;~ 01A2:1725
cs=0x1a2;eip=0x001728; 	X(PUSH(ax));	// 2536 push    ax ;~ 01A2:1728
cs=0x1a2;eip=0x001729; 	R(CALLF(copy_string,0));	// 2537 call    copy_string ;~ 01A2:1729
cs=0x1a2;eip=0x00172e; 	T(ADD(sp, 6));	// 2538 add     sp, 6 ;~ 01A2:172E
cs=0x1a2;eip=0x001731; 	T(SUB(ax, ax));	// 2539 sub     ax, ax ;~ 01A2:1731
cs=0x1a2;eip=0x001733; 	X(PUSH(ax));	// 2540 push    ax ;~ 01A2:1733
cs=0x1a2;eip=0x001734; 	X(PUSH(dialog_fnt_colour));	// 2541 push    dialog_fnt_colour ;~ 01A2:1734
cs=0x1a2;eip=0x001738; 	T(MOV(ax, 0x0F));	// 2542 mov     ax, 0Fh ;~ 01A2:1738
cs=0x1a2;eip=0x00173b; 	X(PUSH(ax));	// 2543 push    ax ;~ 01A2:173B
cs=0x1a2;eip=0x00173c; 	T(MOV(ax, 0x10));	// 2544 mov     ax, 10h ;~ 01A2:173C
cs=0x1a2;eip=0x00173f; 	X(PUSH(ax));	// 2545 push    ax ;~ 01A2:173F
cs=0x1a2;eip=0x001740; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2546 mov     ax, offset resID_byte1 ;~ 01A2:1740
cs=0x1a2;eip=0x001743; 	X(PUSH(ax));	// 2547 push    ax ;~ 01A2:1743
cs=0x1a2;eip=0x001744; 	R(CALLF(hiscore_draw_text,0));	// 2548 call    hiscore_draw_text ;~ 01A2:1744
cs=0x1a2;eip=0x001749; 	T(ADD(sp, 0x0A));	// 2549 add     sp, 0Ah ;~ 01A2:1749
cs=0x1a2;eip=0x00174c; 	T(MOV(ax, offset(dseg,ahs3)));	// 2550 mov     ax, offset aHs3 ; "hs3" ;~ 01A2:174C
cs=0x1a2;eip=0x00174f; 	X(PUSH(ax));	// 2551 push    ax ;~ 01A2:174F
cs=0x1a2;eip=0x001750; 	X(PUSH(word_44cee));	// 2552 push    word_44CEE ;~ 01A2:1750
cs=0x1a2;eip=0x001754; 	X(PUSH(mainresptr));	// 2553 push    mainresptr ;~ 01A2:1754
cs=0x1a2;eip=0x001758; 	R(CALLF(locate_text_res,0));	// 2554 call    locate_text_res ;~ 01A2:1758
cs=0x1a2;eip=0x00175d; 	T(ADD(sp, 6));	// 2555 add     sp, 6 ;~ 01A2:175D
cs=0x1a2;eip=0x001760; 	X(PUSH(dx));	// 2556 push    dx ;~ 01A2:1760
cs=0x1a2;eip=0x001761; 	X(PUSH(ax));	// 2557 push    ax ;~ 01A2:1761
cs=0x1a2;eip=0x001762; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2558 mov     ax, offset resID_byte1 ;~ 01A2:1762
cs=0x1a2;eip=0x001765; 	X(PUSH(ax));	// 2559 push    ax ;~ 01A2:1765
cs=0x1a2;eip=0x001766; 	R(CALLF(copy_string,0));	// 2560 call    copy_string ;~ 01A2:1766
cs=0x1a2;eip=0x00176b; 	T(ADD(sp, 6));	// 2561 add     sp, 6 ;~ 01A2:176B
cs=0x1a2;eip=0x00176e; 	T(SUB(ax, ax));	// 2562 sub     ax, ax ;~ 01A2:176E
cs=0x1a2;eip=0x001770; 	X(PUSH(ax));	// 2563 push    ax ;~ 01A2:1770
cs=0x1a2;eip=0x001771; 	X(PUSH(dialog_fnt_colour));	// 2564 push    dialog_fnt_colour ;~ 01A2:1771
cs=0x1a2;eip=0x001775; 	T(MOV(ax, 0x0F));	// 2565 mov     ax, 0Fh ;~ 01A2:1775
cs=0x1a2;eip=0x001778; 	X(PUSH(ax));	// 2566 push    ax ;~ 01A2:1778
cs=0x1a2;eip=0x001779; 	T(MOV(ax, 0x78));	// 2567 mov     ax, 78h ; 'x' ;~ 01A2:1779
cs=0x1a2;eip=0x00177c; 	X(PUSH(ax));	// 2568 push    ax ;~ 01A2:177C
cs=0x1a2;eip=0x00177d; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2569 mov     ax, offset resID_byte1 ;~ 01A2:177D
cs=0x1a2;eip=0x001780; 	X(PUSH(ax));	// 2570 push    ax ;~ 01A2:1780
cs=0x1a2;eip=0x001781; 	R(CALLF(hiscore_draw_text,0));	// 2571 call    hiscore_draw_text ;~ 01A2:1781
cs=0x1a2;eip=0x001786; 	T(ADD(sp, 0x0A));	// 2572 add     sp, 0Ah ;~ 01A2:1786
cs=0x1a2;eip=0x001789; 	T(MOV(ax, offset(dseg,ahs5)));	// 2573 mov     ax, offset aHs5 ; "hs5" ;~ 01A2:1789
cs=0x1a2;eip=0x00178c; 	X(PUSH(ax));	// 2574 push    ax ;~ 01A2:178C
cs=0x1a2;eip=0x00178d; 	X(PUSH(word_44cee));	// 2575 push    word_44CEE ;~ 01A2:178D
cs=0x1a2;eip=0x001791; 	X(PUSH(mainresptr));	// 2576 push    mainresptr ;~ 01A2:1791
cs=0x1a2;eip=0x001795; 	R(CALLF(locate_text_res,0));	// 2577 call    locate_text_res ;~ 01A2:1795
cs=0x1a2;eip=0x00179a; 	T(ADD(sp, 6));	// 2578 add     sp, 6 ;~ 01A2:179A
cs=0x1a2;eip=0x00179d; 	X(PUSH(dx));	// 2579 push    dx ;~ 01A2:179D
cs=0x1a2;eip=0x00179e; 	X(PUSH(ax));	// 2580 push    ax ;~ 01A2:179E
cs=0x1a2;eip=0x00179f; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2581 mov     ax, offset resID_byte1 ;~ 01A2:179F
cs=0x1a2;eip=0x0017a2; 	X(PUSH(ax));	// 2582 push    ax ;~ 01A2:17A2
cs=0x1a2;eip=0x0017a3; 	R(CALLF(copy_string,0));	// 2583 call    copy_string ;~ 01A2:17A3
cs=0x1a2;eip=0x0017a8; 	T(ADD(sp, 6));	// 2584 add     sp, 6 ;~ 01A2:17A8
cs=0x1a2;eip=0x0017ab; 	T(SUB(ax, ax));	// 2585 sub     ax, ax ;~ 01A2:17AB
cs=0x1a2;eip=0x0017ad; 	X(PUSH(ax));	// 2586 push    ax ;~ 01A2:17AD
cs=0x1a2;eip=0x0017ae; 	X(PUSH(dialog_fnt_colour));	// 2587 push    dialog_fnt_colour ;~ 01A2:17AE
cs=0x1a2;eip=0x0017b2; 	T(MOV(ax, 0x0F));	// 2588 mov     ax, 0Fh ;~ 01A2:17B2
cs=0x1a2;eip=0x0017b5; 	X(PUSH(ax));	// 2589 push    ax ;~ 01A2:17B5
cs=0x1a2;eip=0x0017b6; 	T(MOV(ax, 0x0E0));	// 2590 mov     ax, 0E0h ; 'à' ;~ 01A2:17B6
cs=0x1a2;eip=0x0017b9; 	X(PUSH(ax));	// 2591 push    ax ;~ 01A2:17B9
cs=0x1a2;eip=0x0017ba; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2592 mov     ax, offset resID_byte1 ;~ 01A2:17BA
cs=0x1a2;eip=0x0017bd; 	X(PUSH(ax));	// 2593 push    ax ;~ 01A2:17BD
cs=0x1a2;eip=0x0017be; 	R(CALLF(hiscore_draw_text,0));	// 2594 call    hiscore_draw_text ;~ 01A2:17BE
cs=0x1a2;eip=0x0017c3; 	T(ADD(sp, 0x0A));	// 2595 add     sp, 0Ah ;~ 01A2:17C3
cs=0x1a2;eip=0x0017c6; 	T(MOV(ax, offset(dseg,ahs4)));	// 2596 mov     ax, offset aHs4 ; "hs4" ;~ 01A2:17C6
cs=0x1a2;eip=0x0017c9; 	X(PUSH(ax));	// 2597 push    ax ;~ 01A2:17C9
cs=0x1a2;eip=0x0017ca; 	X(PUSH(word_44cee));	// 2598 push    word_44CEE ;~ 01A2:17CA
cs=0x1a2;eip=0x0017ce; 	X(PUSH(mainresptr));	// 2599 push    mainresptr ;~ 01A2:17CE
cs=0x1a2;eip=0x0017d2; 	R(CALLF(locate_text_res,0));	// 2600 call    locate_text_res ;~ 01A2:17D2
cs=0x1a2;eip=0x0017d7; 	T(ADD(sp, 6));	// 2601 add     sp, 6 ;~ 01A2:17D7
cs=0x1a2;eip=0x0017da; 	X(PUSH(dx));	// 2602 push    dx ;~ 01A2:17DA
cs=0x1a2;eip=0x0017db; 	X(PUSH(ax));	// 2603 push    ax ;~ 01A2:17DB
cs=0x1a2;eip=0x0017dc; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2604 mov     ax, offset resID_byte1 ;~ 01A2:17DC
cs=0x1a2;eip=0x0017df; 	X(PUSH(ax));	// 2605 push    ax ;~ 01A2:17DF
cs=0x1a2;eip=0x0017e0; 	R(CALLF(copy_string,0));	// 2606 call    copy_string ;~ 01A2:17E0
cs=0x1a2;eip=0x0017e5; 	T(ADD(sp, 6));	// 2607 add     sp, 6 ;~ 01A2:17E5
cs=0x1a2;eip=0x0017e8; 	T(SUB(ax, ax));	// 2608 sub     ax, ax ;~ 01A2:17E8
cs=0x1a2;eip=0x0017ea; 	X(PUSH(ax));	// 2609 push    ax ;~ 01A2:17EA
cs=0x1a2;eip=0x0017eb; 	X(PUSH(dialog_fnt_colour));	// 2610 push    dialog_fnt_colour ;~ 01A2:17EB
cs=0x1a2;eip=0x0017ef; 	T(MOV(ax, 0x0F));	// 2611 mov     ax, 0Fh ;~ 01A2:17EF
cs=0x1a2;eip=0x0017f2; 	X(PUSH(ax));	// 2612 push    ax ;~ 01A2:17F2
cs=0x1a2;eip=0x0017f3; 	T(MOV(ax, 0x110));	// 2613 mov     ax, 110h ;~ 01A2:17F3
cs=0x1a2;eip=0x0017f6; 	X(PUSH(ax));	// 2614 push    ax ;~ 01A2:17F6
cs=0x1a2;eip=0x0017f7; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2615 mov     ax, offset resID_byte1 ;~ 01A2:17F7
cs=0x1a2;eip=0x0017fa; 	X(PUSH(ax));	// 2616 push    ax ;~ 01A2:17FA
cs=0x1a2;eip=0x0017fb; 	R(CALLF(hiscore_draw_text,0));	// 2617 call    hiscore_draw_text ;~ 01A2:17FB
cs=0x1a2;eip=0x001800; 	T(ADD(sp, 0x0A));	// 2618 add     sp, 0Ah ;~ 01A2:1800
cs=0x1a2;eip=0x001803; 	X(PUSH(word_44d24));	// 2619 push    word_44D24 ;~ 01A2:1803
cs=0x1a2;eip=0x001807; 	X(PUSH(fontnptr));	// 2620 push    fontnptr ;~ 01A2:1807
cs=0x1a2;eip=0x00180b; 	R(CALLF(font_set_fontdef2,0));	// 2621 call    font_set_fontdef2 ;~ 01A2:180B
cs=0x1a2;eip=0x001810; 	T(ADD(sp, 4));	// 2622 add     sp, 4 ;~ 01A2:1810
cs=0x1a2;eip=0x001813; 	X(MOV(*(raddr(ss,bp+var_a)), 0));	// 2623 mov     [bp+var_A], 0 ;~ 01A2:1813
cs=0x1a2;eip=0x001817; 	R(JMP(loc_118a0));	// 2624 jmp     loc_118A0 ;~ 01A2:1817
loc_1181a:
	// 4475 
cs=0x1a2;eip=0x00181a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 2628 mov     [bp+var_2], 0 ;~ 01A2:181A
loc_1181f:
	// 4476 
cs=0x1a2;eip=0x00181f; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 2631 mov     al, [bp+var_A] ;~ 01A2:181F
cs=0x1a2;eip=0x001822; 	T(CBW);	// 2632 cbw ;~ 01A2:1822
cs=0x1a2;eip=0x001823; 	T(MOV(cx, ax));	// 2633 mov     cx, ax ;~ 01A2:1823
cs=0x1a2;eip=0x001825; 	T(SHL(ax, 1));	// 2634 shl     ax, 1 ;~ 01A2:1825
cs=0x1a2;eip=0x001827; 	T(SHL(ax, 1));	// 2635 shl     ax, 1 ;~ 01A2:1827
cs=0x1a2;eip=0x001829; 	T(ADD(ax, cx));	// 2636 add     ax, cx ;~ 01A2:1829
cs=0x1a2;eip=0x00182b; 	T(SHL(ax, 1));	// 2637 shl     ax, 1 ;~ 01A2:182B
cs=0x1a2;eip=0x00182d; 	T(ADD(ax, 0x19));	// 2638 add     ax, 19h ;~ 01A2:182D
cs=0x1a2;eip=0x001830; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 2639 mov     [bp+var_8], ax ;~ 01A2:1830
cs=0x1a2;eip=0x001833; 	T(SUB(ax, ax));	// 2640 sub     ax, ax ;~ 01A2:1833
cs=0x1a2;eip=0x001835; 	X(PUSH(ax));	// 2641 push    ax ;~ 01A2:1835
cs=0x1a2;eip=0x001836; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 2642 push    [bp+var_2] ;~ 01A2:1836
cs=0x1a2;eip=0x001839; 	R(CALLF(font_set_unk,0));	// 2643 call    font_set_unk ;~ 01A2:1839
cs=0x1a2;eip=0x00183e; 	T(ADD(sp, 4));	// 2644 add     sp, 4 ;~ 01A2:183E
cs=0x1a2;eip=0x001841; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 2645 push    [bp+var_8] ;~ 01A2:1841
cs=0x1a2;eip=0x001844; 	T(MOV(ax, 0x10));	// 2646 mov     ax, 10h ;~ 01A2:1844
cs=0x1a2;eip=0x001847; 	X(PUSH(ax));	// 2647 push    ax ;~ 01A2:1847
cs=0x1a2;eip=0x001848; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 2648 mov     al, [bp+var_6] ;~ 01A2:1848
cs=0x1a2;eip=0x00184b; 	T(CBW);	// 2649 cbw ;~ 01A2:184B
cs=0x1a2;eip=0x00184c; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2650 add     ax, offset resID_byte1 ;~ 01A2:184C
cs=0x1a2;eip=0x00184f; 	X(PUSH(ax));	// 2651 push    ax ;~ 01A2:184F
cs=0x1a2;eip=0x001850; 	R(CALLF(font_draw_text,0));	// 2652 call    font_draw_text ;~ 01A2:1850
cs=0x1a2;eip=0x001855; 	T(ADD(sp, 6));	// 2653 add     sp, 6 ;~ 01A2:1855
cs=0x1a2;eip=0x001858; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 2654 push    [bp+var_8] ;~ 01A2:1858
cs=0x1a2;eip=0x00185b; 	T(MOV(ax, 0x78));	// 2655 mov     ax, 78h ; 'x' ;~ 01A2:185B
cs=0x1a2;eip=0x00185e; 	X(PUSH(ax));	// 2656 push    ax ;~ 01A2:185E
cs=0x1a2;eip=0x00185f; 	T(MOV(al, *(raddr(ss,bp+var_5))));	// 2657 mov     al, [bp+var_5] ;~ 01A2:185F
cs=0x1a2;eip=0x001862; 	T(CBW);	// 2658 cbw ;~ 01A2:1862
cs=0x1a2;eip=0x001863; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2659 add     ax, offset resID_byte1 ;~ 01A2:1863
cs=0x1a2;eip=0x001866; 	X(PUSH(ax));	// 2660 push    ax ;~ 01A2:1866
cs=0x1a2;eip=0x001867; 	R(CALLF(font_draw_text,0));	// 2661 call    font_draw_text ;~ 01A2:1867
cs=0x1a2;eip=0x00186c; 	T(ADD(sp, 6));	// 2662 add     sp, 6 ;~ 01A2:186C
cs=0x1a2;eip=0x00186f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 2663 push    [bp+var_8] ;~ 01A2:186F
cs=0x1a2;eip=0x001872; 	T(MOV(ax, 0x0E0));	// 2664 mov     ax, 0E0h ; 'à' ;~ 01A2:1872
cs=0x1a2;eip=0x001875; 	X(PUSH(ax));	// 2665 push    ax ;~ 01A2:1875
cs=0x1a2;eip=0x001876; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 2666 mov     al, [bp+var_4] ;~ 01A2:1876
cs=0x1a2;eip=0x001879; 	T(CBW);	// 2667 cbw ;~ 01A2:1879
cs=0x1a2;eip=0x00187a; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2668 add     ax, offset resID_byte1 ;~ 01A2:187A
cs=0x1a2;eip=0x00187d; 	X(PUSH(ax));	// 2669 push    ax ;~ 01A2:187D
cs=0x1a2;eip=0x00187e; 	R(CALLF(font_draw_text,0));	// 2670 call    font_draw_text ;~ 01A2:187E
cs=0x1a2;eip=0x001883; 	T(ADD(sp, 6));	// 2671 add     sp, 6 ;~ 01A2:1883
cs=0x1a2;eip=0x001886; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 2672 push    [bp+var_8] ;~ 01A2:1886
cs=0x1a2;eip=0x001889; 	T(MOV(ax, 0x110));	// 2673 mov     ax, 110h ;~ 01A2:1889
cs=0x1a2;eip=0x00188c; 	X(PUSH(ax));	// 2674 push    ax ;~ 01A2:188C
cs=0x1a2;eip=0x00188d; 	T(MOV(al, *(raddr(ss,bp+var_3))));	// 2675 mov     al, [bp+var_3] ;~ 01A2:188D
cs=0x1a2;eip=0x001890; 	T(CBW);	// 2676 cbw ;~ 01A2:1890
cs=0x1a2;eip=0x001891; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2677 add     ax, offset resID_byte1 ;~ 01A2:1891
cs=0x1a2;eip=0x001894; 	X(PUSH(ax));	// 2678 push    ax ;~ 01A2:1894
cs=0x1a2;eip=0x001895; 	R(CALLF(font_draw_text,0));	// 2679 call    font_draw_text ;~ 01A2:1895
cs=0x1a2;eip=0x00189a; 	T(ADD(sp, 6));	// 2680 add     sp, 6 ;~ 01A2:189A
cs=0x1a2;eip=0x00189d; 	X(INC(*(raddr(ss,bp+var_a))));	// 2681 inc     [bp+var_A] ;~ 01A2:189D
loc_118a0:
	// 4477 
cs=0x1a2;eip=0x0018a0; 	T(CMP(*(raddr(ss,bp+var_a)), 7));	// 2684 cmp     [bp+var_A], 7 ;~ 01A2:18A0
cs=0x1a2;eip=0x0018a4; 	R(JGE(loc_118ca));	// 2685 jge     short loc_118CA ;~ 01A2:18A4
cs=0x1a2;eip=0x0018a6; 	T(ax = bp+var_6);	// 2686 lea     ax, [bp+var_6] ;~ 01A2:18A6
cs=0x1a2;eip=0x0018a9; 	X(PUSH(ax));	// 2687 push    ax ;~ 01A2:18A9
cs=0x1a2;eip=0x0018aa; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 2688 mov     al, [bp+var_A] ;~ 01A2:18AA
cs=0x1a2;eip=0x0018ad; 	T(CBW);	// 2689 cbw ;~ 01A2:18AD
cs=0x1a2;eip=0x0018ae; 	X(PUSH(ax));	// 2690 push    ax ;~ 01A2:18AE
cs=0x1a2;eip=0x0018af; 	X(PUSH(cs));	// 2691 push    cs ;~ 01A2:18AF
cs=0x1a2;eip=0x0018b0; 	R(CALL(print_highscore_entry,0));	// 2692 call    near ptr print_highscore_entry ;~ 01A2:18B0
cs=0x1a2;eip=0x0018b3; 	T(ADD(sp, 4));	// 2693 add     sp, 4 ;~ 01A2:18B3
cs=0x1a2;eip=0x0018b6; 	T(MOV(al, byte_449ce));	// 2694 mov     al, byte_449CE ;~ 01A2:18B6
cs=0x1a2;eip=0x0018b9; 	T(CMP(*(raddr(ss,bp+var_a)), al));	// 2695 cmp     [bp+var_A], al ;~ 01A2:18B9
cs=0x1a2;eip=0x0018bc; 	R(JZ(loc_118c1));	// 2696 jz      short loc_118C1 ;~ 01A2:18BC
cs=0x1a2;eip=0x0018be; 	R(JMP(loc_1181a));	// 2697 jmp     loc_1181A ;~ 01A2:18BE
loc_118c1:
	// 4478 
cs=0x1a2;eip=0x0018c1; 	T(MOV(ax, dialogarg2));	// 2701 mov     ax, dialogarg2 ;~ 01A2:18C1
cs=0x1a2;eip=0x0018c4; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 2702 mov     [bp+var_2], ax ;~ 01A2:18C4
cs=0x1a2;eip=0x0018c7; 	R(JMP(loc_1181f));	// 2703 jmp     loc_1181F ;~ 01A2:18C7
loc_118ca:
	// 4479 
cs=0x1a2;eip=0x0018ca; 	R(CALLF(font_set_fontdef,0));	// 2707 call    font_set_fontdef ;~ 01A2:18CA
cs=0x1a2;eip=0x0018cf; 	T(MOV(sp, bp));	// 2708 mov     sp, bp ;~ 01A2:18CF
cs=0x1a2;eip=0x0018d1; 	X(POP(bp));	// 2709 pop     bp ;~ 01A2:18D1
cs=0x1a2;eip=0x0018d2; 	R(RETF(0));	// 2710 retf ;~ 01A2:18D2
print_highscore_entry:
	// 2720 
#undef var_4a
#define var_4a -0x4A
	// 2723 var_4A          = byte ptr -4Ah ;~ 01A2:18D4
#undef var_39
#define var_39 -0x39
	// 2724 var_39          = byte ptr -39h ;~ 01A2:18D4
#undef var_21
#define var_21 -0x21
	// 2725 var_21          = byte ptr -21h ;~ 01A2:18D4
#undef var_20
#define var_20 -0x20
	// 2726 var_20          = byte ptr -20h ;~ 01A2:18D4
#undef var_18
#define var_18 -0x18
	// 2727 var_18          = word ptr -18h ;~ 01A2:18D4
#undef var_16
#define var_16 -0x16
	// 2728 var_16          = byte ptr -16h ;~ 01A2:18D4
#undef var_14
#define var_14 -0x14
	// 2729 var_14          = word ptr -14h ;~ 01A2:18D4
#undef var_12
#define var_12 -0x12
	// 2730 var_12          = byte ptr -12h ;~ 01A2:18D4
#undef arg_0
#define arg_0 6
	// 2731 arg_0           = word ptr  6 ;~ 01A2:18D4
#undef arg_2
#define arg_2 8
	// 2732 arg_2           = word ptr  8 ;~ 01A2:18D4
ret_1a2_18d4:
	// 4480 
cs=0x1a2;eip=0x0018d4; 	X(PUSH(bp));	// 2734 push    bp ;~ 01A2:18D4
cs=0x1a2;eip=0x0018d5; 	T(MOV(bp, sp));	// 2735 mov     bp, sp ;~ 01A2:18D5
cs=0x1a2;eip=0x0018d7; 	T(SUB(sp, 0x4A));	// 2736 sub     sp, 4Ah ;~ 01A2:18D7
cs=0x1a2;eip=0x0018da; 	X(PUSH(di));	// 2737 push    di ;~ 01A2:18DA
cs=0x1a2;eip=0x0018db; 	X(PUSH(si));	// 2738 push    si              ; char * ;~ 01A2:18DB
cs=0x1a2;eip=0x0018dc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 2739 mov     bx, [bp+arg_0] ;~ 01A2:18DC
cs=0x1a2;eip=0x0018df; 	T(SHL(bx, 1));	// 2740 shl     bx, 1 ;~ 01A2:18DF
cs=0x1a2;eip=0x0018e1; 	T(MOV(ax, 0x34));	// 2741 mov     ax, 34h ; '4' ;~ 01A2:18E1
cs=0x1a2;eip=0x0018e4; 	X(IMUL1_2(*(dw*)(((db*)&word_46170)+bx)));	// 2742 imul    word_46170[bx] ;~ 01A2:18E4
cs=0x1a2;eip=0x0018e8; 	T(ADD(ax, *(dw*)(((db*)&td11_highscores))));	// 2743 add     ax, word ptr td11_highscores ;~ 01A2:18E8
cs=0x1a2;eip=0x0018ec; 	T(MOV(dx, *(dw*)(((db*)&td11_highscores)+2)));	// 2744 mov     dx, word ptr td11_highscores+2 ;~ 01A2:18EC
cs=0x1a2;eip=0x0018f0; 	X(PUSH(si));	// 2745 push    si ;~ 01A2:18F0
cs=0x1a2;eip=0x0018f1; 	T(di = bp+var_4a);	// 2746 lea     di, [bp+var_4A] ;~ 01A2:18F1
cs=0x1a2;eip=0x0018f4; 	T(MOV(si, ax));	// 2747 mov     si, ax ;~ 01A2:18F4
cs=0x1a2;eip=0x0018f6; 	X(PUSH(ss));	// 2748 push    ss ;~ 01A2:18F6
cs=0x1a2;eip=0x0018f7; 	X(POP(es));	// 2749 pop     es ;~ 01A2:18F7
cs=0x1a2;eip=0x0018f8; 	X(PUSH(ds));	// 2750 push    ds ;~ 01A2:18F8
cs=0x1a2;eip=0x0018f9; 	T(MOV(ds, dx));	// 2751 mov     ds, dx ;~ 01A2:18F9
cs=0x1a2;eip=0x0018fb; 	T(MOV(cx, 0x1A));	// 2752 mov     cx, 1Ah ;~ 01A2:18FB
	// 2753 repne movsw ;~ 01A2:18FE
cs=0x1a2;eip=0x0018fe; 	X(	REPNE MOVSW);	// 2753 repne movsw ;~ 01A2:18FE
cs=0x1a2;eip=0x001900; 	X(POP(ds));	// 2754 pop     ds ;~ 01A2:1900
cs=0x1a2;eip=0x001901; 	X(POP(si));	// 2755 pop     si ;~ 01A2:1901
cs=0x1a2;eip=0x001902; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 2756 mov     bx, [bp+arg_2] ;~ 01A2:1902
cs=0x1a2;eip=0x001905; 	X(MOV(*(raddr(ds,bx)), 0));	// 2757 mov     byte ptr [bx], 0 ;~ 01A2:1905
cs=0x1a2;eip=0x001908; 	T(ax = bp+var_4a);	// 2758 lea     ax, [bp+var_4A] ;~ 01A2:1908
cs=0x1a2;eip=0x00190b; 	X(PUSH(ax));	// 2759 push    ax ;~ 01A2:190B
cs=0x1a2;eip=0x00190c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2760 mov     ax, offset resID_byte1 ;~ 01A2:190C
cs=0x1a2;eip=0x00190f; 	X(PUSH(ax));	// 2761 push    ax              ; char * ;~ 01A2:190F
cs=0x1a2;eip=0x001910; 	R(CALLF(_strcpy,0));	// 2762 call    _strcpy ;~ 01A2:1910
cs=0x1a2;eip=0x001915; 	T(ADD(sp, 4));	// 2763 add     sp, 4 ;~ 01A2:1915
cs=0x1a2;eip=0x001918; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2764 mov     ax, offset resID_byte1 ;~ 01A2:1918
cs=0x1a2;eip=0x00191b; 	X(PUSH(ax));	// 2765 push    ax              ; char * ;~ 01A2:191B
cs=0x1a2;eip=0x00191c; 	R(CALLF(_strlen,0));	// 2766 call    _strlen ;~ 01A2:191C
cs=0x1a2;eip=0x001921; 	T(ADD(sp, 2));	// 2767 add     sp, 2 ;~ 01A2:1921
cs=0x1a2;eip=0x001924; 	T(INC(al));	// 2768 inc     al ;~ 01A2:1924
cs=0x1a2;eip=0x001926; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 2769 mov     [bp+var_16], al ;~ 01A2:1926
cs=0x1a2;eip=0x001929; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 2770 mov     bx, [bp+arg_2] ;~ 01A2:1929
cs=0x1a2;eip=0x00192c; 	X(MOV(*(raddr(ds,bx+1)), al));	// 2771 mov     [bx+1], al ;~ 01A2:192C
cs=0x1a2;eip=0x00192f; 	T(ax = bp+var_39);	// 2772 lea     ax, [bp+var_39] ;~ 01A2:192F
cs=0x1a2;eip=0x001932; 	X(PUSH(ax));	// 2773 push    ax ;~ 01A2:1932
cs=0x1a2;eip=0x001933; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2774 mov     al, [bp+var_16] ;~ 01A2:1933
cs=0x1a2;eip=0x001936; 	T(CBW);	// 2775 cbw ;~ 01A2:1936
cs=0x1a2;eip=0x001937; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2776 add     ax, offset resID_byte1 ;~ 01A2:1937
cs=0x1a2;eip=0x00193a; 	X(PUSH(ax));	// 2777 push    ax              ; char * ;~ 01A2:193A
cs=0x1a2;eip=0x00193b; 	R(CALLF(_strcpy,0));	// 2778 call    _strcpy ;~ 01A2:193B
cs=0x1a2;eip=0x001940; 	T(ADD(sp, 4));	// 2779 add     sp, 4 ;~ 01A2:1940
cs=0x1a2;eip=0x001943; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2780 mov     al, [bp+var_16] ;~ 01A2:1943
cs=0x1a2;eip=0x001946; 	T(CBW);	// 2781 cbw ;~ 01A2:1946
cs=0x1a2;eip=0x001947; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2782 add     ax, offset resID_byte1 ;~ 01A2:1947
cs=0x1a2;eip=0x00194a; 	X(PUSH(ax));	// 2783 push    ax              ; char * ;~ 01A2:194A
cs=0x1a2;eip=0x00194b; 	R(CALLF(_strlen,0));	// 2784 call    _strlen ;~ 01A2:194B
cs=0x1a2;eip=0x001950; 	T(ADD(sp, 2));	// 2785 add     sp, 2 ;~ 01A2:1950
cs=0x1a2;eip=0x001953; 	T(INC(al));	// 2786 inc     al ;~ 01A2:1953
cs=0x1a2;eip=0x001955; 	X(ADD(*(raddr(ss,bp+var_16)), al));	// 2787 add     [bp+var_16], al ;~ 01A2:1955
cs=0x1a2;eip=0x001958; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 2788 mov     bx, [bp+arg_2] ;~ 01A2:1958
cs=0x1a2;eip=0x00195b; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2789 mov     al, [bp+var_16] ;~ 01A2:195B
cs=0x1a2;eip=0x00195e; 	X(MOV(*(raddr(ds,bx+2)), al));	// 2790 mov     [bx+2], al ;~ 01A2:195E
cs=0x1a2;eip=0x001961; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2791 mov     al, [bp+var_16] ;~ 01A2:1961
cs=0x1a2;eip=0x001964; 	T(CBW);	// 2792 cbw ;~ 01A2:1964
cs=0x1a2;eip=0x001965; 	T(MOV(si, ax));	// 2793 mov     si, ax ;~ 01A2:1965
cs=0x1a2;eip=0x001967; 	T(ADD(si, offset(dseg,resid_byte1)));	// 2794 add     si, offset resID_byte1 ;~ 01A2:1967
cs=0x1a2;eip=0x00196b; 	X(MOV(*(raddr(ds,si)), 0));	// 2795 mov     byte ptr [si], 0 ;~ 01A2:196B
cs=0x1a2;eip=0x00196e; 	T(CMP(*(raddr(ss,bp+var_21)), 1));	// 2796 cmp     [bp+var_21], 1 ;~ 01A2:196E
cs=0x1a2;eip=0x001972; 	R(JNZ(loc_11981));	// 2797 jnz     short loc_11981 ;~ 01A2:1972
cs=0x1a2;eip=0x001974; 	T(MOV(ax, offset(dseg,asc_3bab7)));	// 2798 mov     ax, offset asc_3BAB7 ; "(" ;~ 01A2:1974
cs=0x1a2;eip=0x001977; 	X(PUSH(ax));	// 2799 push    ax ;~ 01A2:1977
cs=0x1a2;eip=0x001978; 	X(PUSH(si));	// 2800 push    si              ; char * ;~ 01A2:1978
cs=0x1a2;eip=0x001979; 	R(CALLF(_strcat,0));	// 2801 call    _strcat ;~ 01A2:1979
cs=0x1a2;eip=0x00197e; 	T(ADD(sp, 4));	// 2802 add     sp, 4 ;~ 01A2:197E
loc_11981:
	// 4481 
cs=0x1a2;eip=0x001981; 	T(ax = bp+var_20);	// 2805 lea     ax, [bp+var_20] ;~ 01A2:1981
cs=0x1a2;eip=0x001984; 	X(PUSH(ax));	// 2806 push    ax ;~ 01A2:1984
cs=0x1a2;eip=0x001985; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2807 mov     al, [bp+var_16] ;~ 01A2:1985
cs=0x1a2;eip=0x001988; 	T(CBW);	// 2808 cbw ;~ 01A2:1988
cs=0x1a2;eip=0x001989; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2809 add     ax, offset resID_byte1 ;~ 01A2:1989
cs=0x1a2;eip=0x00198c; 	X(PUSH(ax));	// 2810 push    ax              ; char * ;~ 01A2:198C
cs=0x1a2;eip=0x00198d; 	R(CALLF(_strcat,0));	// 2811 call    _strcat ;~ 01A2:198D
cs=0x1a2;eip=0x001992; 	T(ADD(sp, 4));	// 2812 add     sp, 4 ;~ 01A2:1992
cs=0x1a2;eip=0x001995; 	T(CMP(*(raddr(ss,bp+var_21)), 1));	// 2813 cmp     [bp+var_21], 1 ;~ 01A2:1995
cs=0x1a2;eip=0x001999; 	R(JNZ(loc_119af));	// 2814 jnz     short loc_119AF ;~ 01A2:1999
cs=0x1a2;eip=0x00199b; 	T(MOV(ax, offset(dseg,asc_3bab9)));	// 2815 mov     ax, offset asc_3BAB9 ; ")" ;~ 01A2:199B
cs=0x1a2;eip=0x00199e; 	X(PUSH(ax));	// 2816 push    ax ;~ 01A2:199E
cs=0x1a2;eip=0x00199f; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2817 mov     al, [bp+var_16] ;~ 01A2:199F
cs=0x1a2;eip=0x0019a2; 	T(CBW);	// 2818 cbw ;~ 01A2:19A2
cs=0x1a2;eip=0x0019a3; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2819 add     ax, offset resID_byte1 ;~ 01A2:19A3
cs=0x1a2;eip=0x0019a6; 	X(PUSH(ax));	// 2820 push    ax              ; char * ;~ 01A2:19A6
cs=0x1a2;eip=0x0019a7; 	R(CALLF(_strcat,0));	// 2821 call    _strcat ;~ 01A2:19A7
cs=0x1a2;eip=0x0019ac; 	T(ADD(sp, 4));	// 2822 add     sp, 4 ;~ 01A2:19AC
loc_119af:
	// 4482 
cs=0x1a2;eip=0x0019af; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2825 mov     al, [bp+var_16] ;~ 01A2:19AF
cs=0x1a2;eip=0x0019b2; 	T(CBW);	// 2826 cbw ;~ 01A2:19B2
cs=0x1a2;eip=0x0019b3; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2827 add     ax, offset resID_byte1 ;~ 01A2:19B3
cs=0x1a2;eip=0x0019b6; 	X(PUSH(ax));	// 2828 push    ax              ; char * ;~ 01A2:19B6
cs=0x1a2;eip=0x0019b7; 	R(CALLF(_strlen,0));	// 2829 call    _strlen ;~ 01A2:19B7
cs=0x1a2;eip=0x0019bc; 	T(ADD(sp, 2));	// 2830 add     sp, 2 ;~ 01A2:19BC
cs=0x1a2;eip=0x0019bf; 	T(INC(al));	// 2831 inc     al ;~ 01A2:19BF
cs=0x1a2;eip=0x0019c1; 	X(ADD(*(raddr(ss,bp+var_16)), al));	// 2832 add     [bp+var_16], al ;~ 01A2:19C1
cs=0x1a2;eip=0x0019c4; 	T(MOV(ax, framespersec));	// 2833 mov     ax, framespersec ;~ 01A2:19C4
cs=0x1a2;eip=0x0019c7; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 2834 mov     [bp+var_14], ax ;~ 01A2:19C7
cs=0x1a2;eip=0x0019ca; 	X(MOV(framespersec, 0x14));	// 2835 mov     framespersec, 14h ;~ 01A2:19CA
cs=0x1a2;eip=0x0019d0; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FFFF));	// 2836 cmp     [bp+var_18], 0FFFFh ;~ 01A2:19D0
cs=0x1a2;eip=0x0019d4; 	R(JZ(loc_119e0));	// 2837 jz      short loc_119E0 ;~ 01A2:19D4
cs=0x1a2;eip=0x0019d6; 	T(MOV(ax, 1));	// 2838 mov     ax, 1 ;~ 01A2:19D6
cs=0x1a2;eip=0x0019d9; 	X(PUSH(ax));	// 2839 push    ax ;~ 01A2:19D9
cs=0x1a2;eip=0x0019da; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 2840 push    [bp+var_18] ;~ 01A2:19DA
cs=0x1a2;eip=0x0019dd; 	R(JMP(loc_119e7));	// 2841 jmp     short loc_119E7 ;~ 01A2:19DD
loc_119e0:
	// 4483 
cs=0x1a2;eip=0x0019e0; 	T(MOV(ax, 1));	// 2846 mov     ax, 1 ;~ 01A2:19E0
cs=0x1a2;eip=0x0019e3; 	X(PUSH(ax));	// 2847 push    ax              ; int ;~ 01A2:19E3
cs=0x1a2;eip=0x0019e4; 	T(SUB(ax, ax));	// 2848 sub     ax, ax ;~ 01A2:19E4
cs=0x1a2;eip=0x0019e6; 	X(PUSH(ax));	// 2849 push    ax ;~ 01A2:19E6
loc_119e7:
	// 4484 
cs=0x1a2;eip=0x0019e7; 	T(ax = bp+var_12);	// 2852 lea     ax, [bp+var_12] ;~ 01A2:19E7
cs=0x1a2;eip=0x0019ea; 	X(PUSH(ax));	// 2853 push    ax              ; char * ;~ 01A2:19EA
cs=0x1a2;eip=0x0019eb; 	R(CALLF(format_frame_as_string,0));	// 2854 call    format_frame_as_string ;~ 01A2:19EB
cs=0x1a2;eip=0x0019f0; 	T(ADD(sp, 6));	// 2855 add     sp, 6 ;~ 01A2:19F0
cs=0x1a2;eip=0x0019f3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 2856 mov     bx, [bp+arg_2] ;~ 01A2:19F3
cs=0x1a2;eip=0x0019f6; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2857 mov     al, [bp+var_16] ;~ 01A2:19F6
cs=0x1a2;eip=0x0019f9; 	X(MOV(*(raddr(ds,bx+3)), al));	// 2858 mov     [bx+3], al ;~ 01A2:19F9
cs=0x1a2;eip=0x0019fc; 	T(ax = bp+var_12);	// 2859 lea     ax, [bp+var_12] ;~ 01A2:19FC
cs=0x1a2;eip=0x0019ff; 	X(PUSH(ax));	// 2860 push    ax ;~ 01A2:19FF
cs=0x1a2;eip=0x001a00; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2861 mov     al, [bp+var_16] ;~ 01A2:1A00
cs=0x1a2;eip=0x001a03; 	T(CBW);	// 2862 cbw ;~ 01A2:1A03
cs=0x1a2;eip=0x001a04; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2863 add     ax, offset resID_byte1 ;~ 01A2:1A04
cs=0x1a2;eip=0x001a07; 	X(PUSH(ax));	// 2864 push    ax              ; char * ;~ 01A2:1A07
cs=0x1a2;eip=0x001a08; 	R(CALLF(_strcpy,0));	// 2865 call    _strcpy ;~ 01A2:1A08
cs=0x1a2;eip=0x001a0d; 	T(ADD(sp, 4));	// 2866 add     sp, 4 ;~ 01A2:1A0D
cs=0x1a2;eip=0x001a10; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 2867 mov     ax, [bp+var_14] ;~ 01A2:1A10
cs=0x1a2;eip=0x001a13; 	X(MOV(framespersec, ax));	// 2868 mov     framespersec, ax ;~ 01A2:1A13
cs=0x1a2;eip=0x001a16; 	X(POP(si));	// 2869 pop     si ;~ 01A2:1A16
cs=0x1a2;eip=0x001a17; 	X(POP(di));	// 2870 pop     di ;~ 01A2:1A17
cs=0x1a2;eip=0x001a18; 	T(MOV(sp, bp));	// 2871 mov     sp, bp ;~ 01A2:1A18
cs=0x1a2;eip=0x001a1a; 	X(POP(bp));	// 2872 pop     bp ;~ 01A2:1A1A
cs=0x1a2;eip=0x001a1b; 	R(RETF(0));	// 2873 retf ;~ 01A2:1A1B
enter_hiscore:
	// 2881 
#undef var_3c
#define var_3c -0x3C
	// 2884 var_3C          = dword ptr -3Ch ;~ 01A2:1A1C
#undef var_38
#define var_38 -0x38
	// 2885 var_38          = byte ptr -38h ;~ 01A2:1A1C
#undef var_36
#define var_36 -0x36
	// 2886 var_36          = byte ptr -36h ;~ 01A2:1A1C
#undef var_25
#define var_25 -0x25
	// 2887 var_25          = byte ptr -25h ;~ 01A2:1A1C
#undef var_d
#define var_d -0x0D
	// 2888 var_D           = byte ptr -0Dh ;~ 01A2:1A1C
#undef var_c
#define var_c -0x0C
	// 2889 var_C           = byte ptr -0Ch ;~ 01A2:1A1C
#undef var_a
#define var_a -0x0A
	// 2890 var_A           = byte ptr -0Ah ;~ 01A2:1A1C
#undef var_9
#define var_9 -9
	// 2891 var_9           = byte ptr -9 ;~ 01A2:1A1C
#undef var_4
#define var_4 -4
	// 2892 var_4           = word ptr -4 ;~ 01A2:1A1C
#undef var_2
#define var_2 -2
	// 2893 var_2           = byte ptr -2 ;~ 01A2:1A1C
#undef arg_0
#define arg_0 6
	// 2894 arg_0           = word ptr  6 ;~ 01A2:1A1C
#undef arg_2
#define arg_2 8
	// 2895 arg_2           = word ptr  8 ;~ 01A2:1A1C
#undef arg_4
#define arg_4 0x0A
	// 2896 arg_4           = word ptr  0Ah ;~ 01A2:1A1C
#undef arg_6
#define arg_6 0x0C
	// 2897 arg_6           = byte ptr  0Ch ;~ 01A2:1A1C
ret_1a2_1a1c:
	// 4485 
cs=0x1a2;eip=0x001a1c; 	X(PUSH(bp));	// 2899 push    bp ;~ 01A2:1A1C
cs=0x1a2;eip=0x001a1d; 	T(MOV(bp, sp));	// 2900 mov     bp, sp ;~ 01A2:1A1D
cs=0x1a2;eip=0x001a1f; 	T(SUB(sp, 0x3C));	// 2901 sub     sp, 3Ch ;~ 01A2:1A1F
cs=0x1a2;eip=0x001a22; 	X(PUSH(di));	// 2902 push    di ;~ 01A2:1A22
cs=0x1a2;eip=0x001a23; 	X(PUSH(si));	// 2903 push    si ;~ 01A2:1A23
cs=0x1a2;eip=0x001a24; 	T(CMP(framespersec, 0x0A));	// 2904 cmp     framespersec, 0Ah ;~ 01A2:1A24
cs=0x1a2;eip=0x001a29; 	R(JNZ(loc_11a2e));	// 2905 jnz     short loc_11A2E ;~ 01A2:1A29
cs=0x1a2;eip=0x001a2b; 	X(SHL(*(dw*)(raddr(ss,bp+arg_0)), 1));	// 2906 shl     [bp+arg_0], 1 ;~ 01A2:1A2B
loc_11a2e:
	// 4486 
cs=0x1a2;eip=0x001a2e; 	T(LES(bx, td11_highscores));	// 2909 les     bx, td11_highscores ;~ 01A2:1A2E
cs=0x1a2;eip=0x001a32; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 2910 mov     ax, [bp+arg_0] ;~ 01A2:1A32
cs=0x1a2;eip=0x001a35; 	T(CMP(*(dw*)(raddr(es,bx+0x16A)), ax));	// 2911 cmp     es:[bx+16Ah], ax ;~ 01A2:1A35
cs=0x1a2;eip=0x001a3a; 	R(JA(loc_11a3f));	// 2912 ja      short loc_11A3F ;~ 01A2:1A3A
cs=0x1a2;eip=0x001a3c; 	R(JMP(loc_11baa));	// 2913 jmp     loc_11BAA ;~ 01A2:1A3C
loc_11a3f:
	// 4487 
cs=0x1a2;eip=0x001a3f; 	X(MOV(*(raddr(ss,bp+var_38)), 0));	// 2917 mov     [bp+var_38], 0 ;~ 01A2:1A3F
cs=0x1a2;eip=0x001a43; 	R(JMP(loc_11a5d));	// 2918 jmp     short loc_11A5D ;~ 01A2:1A43
loc_11a46:
	// 4488 
cs=0x1a2;eip=0x001a46; 	T(CMP(*(raddr(ss,bp+var_38)), 7));	// 2923 cmp     [bp+var_38], 7 ;~ 01A2:1A46
cs=0x1a2;eip=0x001a4a; 	R(JGE(loc_11a71));	// 2924 jge     short loc_11A71 ;~ 01A2:1A4A
cs=0x1a2;eip=0x001a4c; 	T(MOV(al, *(raddr(ss,bp+var_38))));	// 2925 mov     al, [bp+var_38] ;~ 01A2:1A4C
cs=0x1a2;eip=0x001a4f; 	T(CBW);	// 2926 cbw ;~ 01A2:1A4F
cs=0x1a2;eip=0x001a50; 	T(MOV(si, ax));	// 2927 mov     si, ax ;~ 01A2:1A50
cs=0x1a2;eip=0x001a52; 	T(MOV(bx, si));	// 2928 mov     bx, si ;~ 01A2:1A52
cs=0x1a2;eip=0x001a54; 	T(SHL(bx, 1));	// 2929 shl     bx, 1 ;~ 01A2:1A54
cs=0x1a2;eip=0x001a56; 	X(MOV(*(dw*)(((db*)&word_46170)+bx), si));	// 2930 mov     word_46170[bx], si ;~ 01A2:1A56
cs=0x1a2;eip=0x001a5a; 	X(INC(*(raddr(ss,bp+var_38))));	// 2931 inc     [bp+var_38] ;~ 01A2:1A5A
loc_11a5d:
	// 4489 
cs=0x1a2;eip=0x001a5d; 	T(MOV(al, 0x34));	// 2934 mov     al, 34h ; '4' ;~ 01A2:1A5D
cs=0x1a2;eip=0x001a5f; 	X(IMUL1_1(*(raddr(ss,bp+var_38))));	// 2935 imul    [bp+var_38] ;~ 01A2:1A5F
cs=0x1a2;eip=0x001a62; 	T(MOV(di, ax));	// 2936 mov     di, ax ;~ 01A2:1A62
cs=0x1a2;eip=0x001a64; 	T(LES(bx, td11_highscores));	// 2937 les     bx, td11_highscores ;~ 01A2:1A64
cs=0x1a2;eip=0x001a68; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 2938 mov     ax, [bp+arg_0] ;~ 01A2:1A68
cs=0x1a2;eip=0x001a6b; 	T(CMP(*(dw*)(raddr(es,bx+di+0x32)), ax));	// 2939 cmp     es:[bx+di+32h], ax ;~ 01A2:1A6B
cs=0x1a2;eip=0x001a6f; 	R(JBE(loc_11a46));	// 2940 jbe     short loc_11A46 ;~ 01A2:1A6F
loc_11a71:
	// 4490 
cs=0x1a2;eip=0x001a71; 	T(MOV(al, *(raddr(ss,bp+var_38))));	// 2943 mov     al, [bp+var_38] ;~ 01A2:1A71
cs=0x1a2;eip=0x001a74; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 2944 mov     [bp+var_2], al ;~ 01A2:1A74
cs=0x1a2;eip=0x001a77; 	X(MOV(byte_449ce, al));	// 2945 mov     byte_449CE, al ;~ 01A2:1A77
cs=0x1a2;eip=0x001a7a; 	R(JMP(loc_11a8d));	// 2946 jmp     short loc_11A8D ;~ 01A2:1A7A
loc_11a7c:
	// 4491 
cs=0x1a2;eip=0x001a7c; 	T(MOV(al, *(raddr(ss,bp+var_38))));	// 2950 mov     al, [bp+var_38] ;~ 01A2:1A7C
cs=0x1a2;eip=0x001a7f; 	T(CBW);	// 2951 cbw ;~ 01A2:1A7F
cs=0x1a2;eip=0x001a80; 	T(MOV(si, ax));	// 2952 mov     si, ax ;~ 01A2:1A80
cs=0x1a2;eip=0x001a82; 	T(MOV(bx, si));	// 2953 mov     bx, si ;~ 01A2:1A82
cs=0x1a2;eip=0x001a84; 	T(SHL(bx, 1));	// 2954 shl     bx, 1 ;~ 01A2:1A84
cs=0x1a2;eip=0x001a86; 	X(MOV(*(dw*)(((db*)&word_46172)+bx), si));	// 2955 mov     word_46172[bx], si ;~ 01A2:1A86
cs=0x1a2;eip=0x001a8a; 	X(INC(*(raddr(ss,bp+var_38))));	// 2956 inc     [bp+var_38] ;~ 01A2:1A8A
loc_11a8d:
	// 4492 
cs=0x1a2;eip=0x001a8d; 	T(CMP(*(raddr(ss,bp+var_38)), 6));	// 2959 cmp     [bp+var_38], 6 ;~ 01A2:1A8D
cs=0x1a2;eip=0x001a91; 	R(JL(loc_11a7c));	// 2960 jl      short loc_11A7C ;~ 01A2:1A91
cs=0x1a2;eip=0x001a93; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 2961 mov     al, [bp+var_2] ;~ 01A2:1A93
cs=0x1a2;eip=0x001a96; 	T(CBW);	// 2962 cbw ;~ 01A2:1A96
cs=0x1a2;eip=0x001a97; 	T(MOV(bx, ax));	// 2963 mov     bx, ax ;~ 01A2:1A97
cs=0x1a2;eip=0x001a99; 	T(SHL(bx, 1));	// 2964 shl     bx, 1 ;~ 01A2:1A99
cs=0x1a2;eip=0x001a9b; 	X(MOV(*(dw*)(((db*)&word_46170)+bx), 6));	// 2965 mov     word_46170[bx], 6 ;~ 01A2:1A9B
cs=0x1a2;eip=0x001aa1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 2966 mov     ax, [bp+arg_0] ;~ 01A2:1AA1
cs=0x1a2;eip=0x001aa4; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 2967 mov     [bp+var_4], ax ;~ 01A2:1AA4
cs=0x1a2;eip=0x001aa7; 	X(MOV(*(raddr(ss,bp+var_36)), 0));	// 2968 mov     [bp+var_36], 0 ;~ 01A2:1AA7
cs=0x1a2;eip=0x001aab; 	T(MOV(ax, offset(dseg,gnam_string)));	// 2969 mov     ax, offset gnam_string ;~ 01A2:1AAB
cs=0x1a2;eip=0x001aae; 	X(PUSH(ax));	// 2970 push    ax ;~ 01A2:1AAE
cs=0x1a2;eip=0x001aaf; 	T(ax = bp+var_25);	// 2971 lea     ax, [bp+var_25] ;~ 01A2:1AAF
cs=0x1a2;eip=0x001ab2; 	X(PUSH(ax));	// 2972 push    ax              ; char * ;~ 01A2:1AB2
cs=0x1a2;eip=0x001ab3; 	R(CALLF(_strcpy,0));	// 2973 call    _strcpy ;~ 01A2:1AB3
cs=0x1a2;eip=0x001ab8; 	T(ADD(sp, 4));	// 2974 add     sp, 4 ;~ 01A2:1AB8
cs=0x1a2;eip=0x001abb; 	T(MOV(al, *(raddr(ss,bp+arg_6))));	// 2975 mov     al, [bp+arg_6] ;~ 01A2:1ABB
cs=0x1a2;eip=0x001abe; 	X(MOV(*(raddr(ss,bp+var_d)), al));	// 2976 mov     [bp+var_D], al ;~ 01A2:1ABE
cs=0x1a2;eip=0x001ac1; 	T(CMP(byte_449aa, 0));	// 2977 cmp     byte_449AA, 0 ;~ 01A2:1AC1
cs=0x1a2;eip=0x001ac6; 	R(JZ(loc_11ae6));	// 2978 jz      short loc_11AE6 ;~ 01A2:1AC6
cs=0x1a2;eip=0x001ac8; 	T(MOV(ax, offset(dseg,unk_46464)));	// 2979 mov     ax, offset unk_46464 ;~ 01A2:1AC8
cs=0x1a2;eip=0x001acb; 	X(PUSH(ax));	// 2980 push    ax ;~ 01A2:1ACB
cs=0x1a2;eip=0x001acc; 	T(ax = bp+var_c);	// 2981 lea     ax, [bp+var_C] ;~ 01A2:1ACC
cs=0x1a2;eip=0x001acf; 	X(PUSH(ax));	// 2982 push    ax              ; char * ;~ 01A2:1ACF
cs=0x1a2;eip=0x001ad0; 	R(CALLF(_strcpy,0));	// 2983 call    _strcpy ;~ 01A2:1AD0
cs=0x1a2;eip=0x001ad5; 	T(ADD(sp, 4));	// 2984 add     sp, 4 ;~ 01A2:1AD5
cs=0x1a2;eip=0x001ad8; 	X(MOV(*(raddr(ss,bp+var_a)), 0x2F));	// 2985 mov     [bp+var_A], 2Fh ; '/' ;~ 01A2:1AD8
cs=0x1a2;eip=0x001adc; 	T(MOV(ax, offset(dseg,gsna_string)));	// 2986 mov     ax, offset gsna_string ;~ 01A2:1ADC
cs=0x1a2;eip=0x001adf; 	X(PUSH(ax));	// 2987 push    ax ;~ 01A2:1ADF
cs=0x1a2;eip=0x001ae0; 	T(ax = bp+var_9);	// 2988 lea     ax, [bp+var_9] ;~ 01A2:1AE0
cs=0x1a2;eip=0x001ae3; 	R(JMP(loc_11aed));	// 2989 jmp     short loc_11AED ;~ 01A2:1AE3
loc_11ae6:
	// 4493 
cs=0x1a2;eip=0x001ae6; 	T(MOV(ax, offset(dseg,asc_3babb)));	// 2994 mov     ax, offset asc_3BABB ; " " ;~ 01A2:1AE6
cs=0x1a2;eip=0x001ae9; 	X(PUSH(ax));	// 2995 push    ax ;~ 01A2:1AE9
cs=0x1a2;eip=0x001aea; 	T(ax = bp+var_c);	// 2996 lea     ax, [bp+var_C] ;~ 01A2:1AEA
loc_11aed:
	// 4494 
cs=0x1a2;eip=0x001aed; 	X(PUSH(ax));	// 2999 push    ax              ; char * ;~ 01A2:1AED
cs=0x1a2;eip=0x001aee; 	R(CALLF(_strcpy,0));	// 3000 call    _strcpy ;~ 01A2:1AEE
cs=0x1a2;eip=0x001af3; 	T(ADD(sp, 4));	// 3001 add     sp, 4 ;~ 01A2:1AF3
cs=0x1a2;eip=0x001af6; 	T(LES(bx, td11_highscores));	// 3002 les     bx, td11_highscores ;~ 01A2:1AF6
cs=0x1a2;eip=0x001afa; 	T(di = bx+0x138);	// 3003 lea     di, [bx+138h] ;~ 01A2:1AFA
cs=0x1a2;eip=0x001afe; 	T(si = bp+var_36);	// 3004 lea     si, [bp+var_36] ;~ 01A2:1AFE
cs=0x1a2;eip=0x001b01; 	T(MOV(cx, 0x1A));	// 3005 mov     cx, 1Ah ;~ 01A2:1B01
	// 3006 repne movsw ;~ 01A2:1B04
cs=0x1a2;eip=0x001b04; 	X(	REPNE MOVSW);	// 3006 repne movsw ;~ 01A2:1B04
cs=0x1a2;eip=0x001b06; 	R(CALLF(sprite_copy_wnd_to_1,0));	// 3007 call    sprite_copy_wnd_to_1 ;~ 01A2:1B06
cs=0x1a2;eip=0x001b0b; 	X(PUSH(cs));	// 3008 push    cs ;~ 01A2:1B0B
cs=0x1a2;eip=0x001b0c; 	R(CALL(highscore_text_unk,0));	// 3009 call    near ptr highscore_text_unk ;~ 01A2:1B0C
cs=0x1a2;eip=0x001b0f; 	T(MOV(ax, 0x0FFFF));	// 3010 mov     ax, 0FFFFh ;~ 01A2:1B0F
cs=0x1a2;eip=0x001b12; 	X(PUSH(ax));	// 3011 push    ax ;~ 01A2:1B12
cs=0x1a2;eip=0x001b13; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 3012 push    word ptr wndsprite+2 ;~ 01A2:1B13
cs=0x1a2;eip=0x001b17; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 3013 push    word ptr wndsprite ;~ 01A2:1B17
cs=0x1a2;eip=0x001b1b; 	R(CALLF(sprite_blit_to_video,0));	// 3014 call    sprite_blit_to_video ;~ 01A2:1B1B
cs=0x1a2;eip=0x001b20; 	T(ADD(sp, 6));	// 3015 add     sp, 6 ;~ 01A2:1B20
cs=0x1a2;eip=0x001b23; 	T(SUB(ax, ax));	// 3016 sub     ax, ax ;~ 01A2:1B23
cs=0x1a2;eip=0x001b25; 	X(PUSH(ax));	// 3017 push    ax ;~ 01A2:1B25
cs=0x1a2;eip=0x001b26; 	T(ax = bp+var_3c);	// 3018 lea     ax, [bp+var_3C] ;~ 01A2:1B26
cs=0x1a2;eip=0x001b29; 	X(PUSH(ax));	// 3019 push    ax ;~ 01A2:1B29
cs=0x1a2;eip=0x001b2a; 	X(PUSH(dialogarg2));	// 3020 push    dialogarg2 ;~ 01A2:1B2A
cs=0x1a2;eip=0x001b2e; 	T(MOV(ax, 0x0FFFF));	// 3021 mov     ax, 0FFFFh ;~ 01A2:1B2E
cs=0x1a2;eip=0x001b31; 	X(PUSH(ax));	// 3022 push    ax ;~ 01A2:1B31
cs=0x1a2;eip=0x001b32; 	X(PUSH(ax));	// 3023 push    ax ;~ 01A2:1B32
cs=0x1a2;eip=0x001b33; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 3024 push    [bp+arg_4] ;~ 01A2:1B33
cs=0x1a2;eip=0x001b36; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 3025 push    [bp+arg_2] ;~ 01A2:1B36
cs=0x1a2;eip=0x001b39; 	T(SUB(ax, ax));	// 3026 sub     ax, ax ;~ 01A2:1B39
cs=0x1a2;eip=0x001b3b; 	X(PUSH(ax));	// 3027 push    ax ;~ 01A2:1B3B
cs=0x1a2;eip=0x001b3c; 	T(MOV(ax, 3));	// 3028 mov     ax, 3 ;~ 01A2:1B3C
cs=0x1a2;eip=0x001b3f; 	X(PUSH(ax));	// 3029 push    ax ;~ 01A2:1B3F
cs=0x1a2;eip=0x001b40; 	R(CALLF(show_dialog,0));	// 3030 call    show_dialog ;~ 01A2:1B40
cs=0x1a2;eip=0x001b45; 	T(ADD(sp, 0x12));	// 3031 add     sp, 12h ;~ 01A2:1B45
cs=0x1a2;eip=0x001b48; 	R(CALLF(check_input,0));	// 3032 call    check_input ;~ 01A2:1B48
cs=0x1a2;eip=0x001b4d; 	T(MOV(ax, offset(dseg,terraincenterpos)+0x22));	// 3033 mov     ax, (offset terraincenterpos+22h) ;~ 01A2:1B4D
cs=0x1a2;eip=0x001b50; 	T(CWD);	// 3034 cwd ;~ 01A2:1B50
cs=0x1a2;eip=0x001b51; 	X(PUSH(dx));	// 3035 push    dx              ; int ;~ 01A2:1B51
cs=0x1a2;eip=0x001b52; 	X(PUSH(ax));	// 3036 push    ax              ; int ;~ 01A2:1B52
cs=0x1a2;eip=0x001b53; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_3c+2)))));	// 3037 push    word ptr [bp+var_3C+2] ; int ;~ 01A2:1B53
cs=0x1a2;eip=0x001b56; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_3c)))));	// 3038 push    word ptr [bp+var_3C] ; int ;~ 01A2:1B56
cs=0x1a2;eip=0x001b59; 	T(MOV(ax, 0x10));	// 3039 mov     ax, 10h ;~ 01A2:1B59
cs=0x1a2;eip=0x001b5c; 	X(PUSH(ax));	// 3040 push    ax ;~ 01A2:1B5C
cs=0x1a2;eip=0x001b5d; 	T(MOV(ax, offset(dseg,byte_459e0)));	// 3041 mov     ax, offset byte_459E0 ;~ 01A2:1B5D
cs=0x1a2;eip=0x001b60; 	X(PUSH(ax));	// 3042 push    ax              ; char * ;~ 01A2:1B60
cs=0x1a2;eip=0x001b61; 	R(CALLF(call_read_line,0));	// 3043 call    call_read_line ;~ 01A2:1B61
cs=0x1a2;eip=0x001b66; 	T(ADD(sp, 0x0C));	// 3044 add     sp, 0Ch ;~ 01A2:1B66
cs=0x1a2;eip=0x001b69; 	T(MOV(ax, offset(dseg,byte_459e0)));	// 3045 mov     ax, offset byte_459E0 ;~ 01A2:1B69
cs=0x1a2;eip=0x001b6c; 	X(PUSH(ax));	// 3046 push    ax ;~ 01A2:1B6C
cs=0x1a2;eip=0x001b6d; 	T(ax = bp+var_36);	// 3047 lea     ax, [bp+var_36] ;~ 01A2:1B6D
cs=0x1a2;eip=0x001b70; 	X(PUSH(ax));	// 3048 push    ax              ; char * ;~ 01A2:1B70
cs=0x1a2;eip=0x001b71; 	R(CALLF(_strcpy,0));	// 3049 call    _strcpy ;~ 01A2:1B71
cs=0x1a2;eip=0x001b76; 	T(ADD(sp, 4));	// 3050 add     sp, 4 ;~ 01A2:1B76
cs=0x1a2;eip=0x001b79; 	T(LES(bx, td11_highscores));	// 3051 les     bx, td11_highscores ;~ 01A2:1B79
cs=0x1a2;eip=0x001b7d; 	T(di = bx+0x138);	// 3052 lea     di, [bx+138h] ;~ 01A2:1B7D
cs=0x1a2;eip=0x001b81; 	T(si = bp+var_36);	// 3053 lea     si, [bp+var_36] ;~ 01A2:1B81
cs=0x1a2;eip=0x001b84; 	T(MOV(cx, 0x1A));	// 3054 mov     cx, 1Ah ;~ 01A2:1B84
	// 3055 repne movsw ;~ 01A2:1B87
cs=0x1a2;eip=0x001b87; 	X(	REPNE MOVSW);	// 3055 repne movsw ;~ 01A2:1B87
cs=0x1a2;eip=0x001b89; 	R(CALLF(sprite_copy_wnd_to_1,0));	// 3056 call    sprite_copy_wnd_to_1 ;~ 01A2:1B89
cs=0x1a2;eip=0x001b8e; 	X(PUSH(cs));	// 3057 push    cs ;~ 01A2:1B8E
cs=0x1a2;eip=0x001b8f; 	R(CALL(highscore_text_unk,0));	// 3058 call    near ptr highscore_text_unk ;~ 01A2:1B8F
cs=0x1a2;eip=0x001b92; 	T(MOV(ax, 0x0FFFF));	// 3059 mov     ax, 0FFFFh ;~ 01A2:1B92
cs=0x1a2;eip=0x001b95; 	X(PUSH(ax));	// 3060 push    ax ;~ 01A2:1B95
cs=0x1a2;eip=0x001b96; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 3061 push    word ptr wndsprite+2 ;~ 01A2:1B96
cs=0x1a2;eip=0x001b9a; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 3062 push    word ptr wndsprite ;~ 01A2:1B9A
cs=0x1a2;eip=0x001b9e; 	R(CALLF(sprite_blit_to_video,0));	// 3063 call    sprite_blit_to_video ;~ 01A2:1B9E
cs=0x1a2;eip=0x001ba3; 	T(ADD(sp, 6));	// 3064 add     sp, 6 ;~ 01A2:1BA3
cs=0x1a2;eip=0x001ba6; 	X(PUSH(cs));	// 3065 push    cs ;~ 01A2:1BA6
cs=0x1a2;eip=0x001ba7; 	R(CALL(highscore_write_b,0));	// 3066 call    near ptr highscore_write_b ;~ 01A2:1BA7
loc_11baa:
	// 4495 
cs=0x1a2;eip=0x001baa; 	X(PUSH(cs));	// 3069 push    cs ;~ 01A2:1BAA
cs=0x1a2;eip=0x001bab; 	R(CALL(highscore_text_unk,0));	// 3070 call    near ptr highscore_text_unk ;~ 01A2:1BAB
cs=0x1a2;eip=0x001bae; 	X(POP(si));	// 3071 pop     si ;~ 01A2:1BAE
cs=0x1a2;eip=0x001baf; 	X(POP(di));	// 3072 pop     di ;~ 01A2:1BAF
cs=0x1a2;eip=0x001bb0; 	T(MOV(sp, bp));	// 3073 mov     sp, bp ;~ 01A2:1BB0
cs=0x1a2;eip=0x001bb2; 	X(POP(bp));	// 3074 pop     bp ;~ 01A2:1BB2
cs=0x1a2;eip=0x001bb3; 	R(RETF(0));	// 3075 retf ;~ 01A2:1BB3
highscore_write_b:
	// 3083 
#undef var_16e
#define var_16e -0x16E
	// 3085 var_16E         = word ptr -16Eh ;~ 01A2:1BB4
#undef var_16c
#define var_16c -0x16C
	// 3086 var_16C         = byte ptr -16Ch ;~ 01A2:1BB4
ret_1a2_1bb4:
	// 4496 
cs=0x1a2;eip=0x001bb4; 	X(PUSH(bp));	// 3088 push    bp ;~ 01A2:1BB4
cs=0x1a2;eip=0x001bb5; 	T(MOV(bp, sp));	// 3089 mov     bp, sp ;~ 01A2:1BB5
cs=0x1a2;eip=0x001bb7; 	T(SUB(sp, 0x16E));	// 3090 sub     sp, 16Eh ;~ 01A2:1BB7
cs=0x1a2;eip=0x001bbb; 	X(PUSH(di));	// 3091 push    di ;~ 01A2:1BBB
cs=0x1a2;eip=0x001bbc; 	X(PUSH(si));	// 3092 push    si              ; char * ;~ 01A2:1BBC
cs=0x1a2;eip=0x001bbd; 	X(MOV(*(dw*)(raddr(ss,bp+var_16e)), 0));	// 3093 mov     [bp+var_16E], 0 ;~ 01A2:1BBD
loc_11bc3:
	// 4497 
cs=0x1a2;eip=0x001bc3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16e))));	// 3096 mov     bx, [bp+var_16E] ;~ 01A2:1BC3
cs=0x1a2;eip=0x001bc7; 	T(SHL(bx, 1));	// 3097 shl     bx, 1 ;~ 01A2:1BC7
cs=0x1a2;eip=0x001bc9; 	T(MOV(ax, 0x34));	// 3098 mov     ax, 34h ; '4' ;~ 01A2:1BC9
cs=0x1a2;eip=0x001bcc; 	X(IMUL1_2(*(dw*)(((db*)&word_46170)+bx)));	// 3099 imul    word_46170[bx] ;~ 01A2:1BCC
cs=0x1a2;eip=0x001bd0; 	T(ADD(ax, *(dw*)(((db*)&td11_highscores))));	// 3100 add     ax, word ptr td11_highscores ;~ 01A2:1BD0
cs=0x1a2;eip=0x001bd4; 	T(MOV(dx, *(dw*)(((db*)&td11_highscores)+2)));	// 3101 mov     dx, word ptr td11_highscores+2 ;~ 01A2:1BD4
cs=0x1a2;eip=0x001bd8; 	T(MOV(cx, ax));	// 3102 mov     cx, ax ;~ 01A2:1BD8
cs=0x1a2;eip=0x001bda; 	T(MOV(ax, 0x34));	// 3103 mov     ax, 34h ; '4' ;~ 01A2:1BDA
cs=0x1a2;eip=0x001bdd; 	T(MOV(bx, dx));	// 3104 mov     bx, dx ;~ 01A2:1BDD
cs=0x1a2;eip=0x001bdf; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_16e))));	// 3105 imul    [bp+var_16E] ;~ 01A2:1BDF
cs=0x1a2;eip=0x001be3; 	T(MOV(si, ax));	// 3106 mov     si, ax ;~ 01A2:1BE3
cs=0x1a2;eip=0x001be5; 	T(di = bp+si+var_16c);	// 3107 lea     di, [bp+si+var_16C] ;~ 01A2:1BE5
cs=0x1a2;eip=0x001be9; 	T(MOV(si, cx));	// 3108 mov     si, cx ;~ 01A2:1BE9
cs=0x1a2;eip=0x001beb; 	X(PUSH(ss));	// 3109 push    ss ;~ 01A2:1BEB
cs=0x1a2;eip=0x001bec; 	X(POP(es));	// 3110 pop     es ;~ 01A2:1BEC
cs=0x1a2;eip=0x001bed; 	X(PUSH(ds));	// 3111 push    ds ;~ 01A2:1BED
cs=0x1a2;eip=0x001bee; 	T(MOV(ds, bx));	// 3112 mov     ds, bx ;~ 01A2:1BEE
cs=0x1a2;eip=0x001bf0; 	T(MOV(cx, 0x1A));	// 3113 mov     cx, 1Ah ;~ 01A2:1BF0
	// 3114 repne movsw ;~ 01A2:1BF3
cs=0x1a2;eip=0x001bf3; 	X(	REPNE MOVSW);	// 3114 repne movsw ;~ 01A2:1BF3
cs=0x1a2;eip=0x001bf5; 	X(POP(ds));	// 3115 pop     ds ;~ 01A2:1BF5
cs=0x1a2;eip=0x001bf6; 	X(INC(*(dw*)(raddr(ss,bp+var_16e))));	// 3116 inc     [bp+var_16E] ;~ 01A2:1BF6
cs=0x1a2;eip=0x001bfa; 	T(CMP(*(dw*)(raddr(ss,bp+var_16e)), 7));	// 3117 cmp     [bp+var_16E], 7 ;~ 01A2:1BFA
cs=0x1a2;eip=0x001bff; 	R(JL(loc_11bc3));	// 3118 jl      short loc_11BC3 ;~ 01A2:1BFF
cs=0x1a2;eip=0x001c01; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 3119 mov     ax, offset g_path_buf ;~ 01A2:1C01
cs=0x1a2;eip=0x001c04; 	X(PUSH(ax));	// 3120 push    ax              ; char * ;~ 01A2:1C04
cs=0x1a2;eip=0x001c05; 	T(MOV(ax, offset(dseg,a_hig)));	// 3121 mov     ax, offset a_hig ; ".hig" ;~ 01A2:1C05
cs=0x1a2;eip=0x001c08; 	X(PUSH(ax));	// 3122 push    ax              ; int ;~ 01A2:1C08
cs=0x1a2;eip=0x001c09; 	T(MOV(ax, offset(dseg,byte_449b1)));	// 3123 mov     ax, offset byte_449B1 ;~ 01A2:1C09
cs=0x1a2;eip=0x001c0c; 	X(PUSH(ax));	// 3124 push    ax ;~ 01A2:1C0C
cs=0x1a2;eip=0x001c0d; 	T(MOV(ax, 0x9C));	// 3125 mov     ax, 9Ch ; 'œ' ;~ 01A2:1C0D
cs=0x1a2;eip=0x001c10; 	X(PUSH(ax));	// 3126 push    ax              ; char * ;~ 01A2:1C10
cs=0x1a2;eip=0x001c11; 	R(CALLF(file_build_path,0));	// 3127 call    file_build_path ;~ 01A2:1C11
cs=0x1a2;eip=0x001c16; 	T(ADD(sp, 8));	// 3128 add     sp, 8 ;~ 01A2:1C16
cs=0x1a2;eip=0x001c19; 	X(MOV(g_is_busy, 1));	// 3129 mov     g_is_busy, 1 ;~ 01A2:1C19
cs=0x1a2;eip=0x001c1e; 	T(MOV(ax, 0x16C));	// 3130 mov     ax, 16Ch ;~ 01A2:1C1E
cs=0x1a2;eip=0x001c21; 	T(CWD);	// 3131 cwd ;~ 01A2:1C21
cs=0x1a2;eip=0x001c22; 	X(PUSH(dx));	// 3132 push    dx ;~ 01A2:1C22
cs=0x1a2;eip=0x001c23; 	X(PUSH(ax));	// 3133 push    ax ;~ 01A2:1C23
cs=0x1a2;eip=0x001c24; 	T(ax = bp+var_16c);	// 3134 lea     ax, [bp+var_16C] ;~ 01A2:1C24
cs=0x1a2;eip=0x001c28; 	X(PUSH(ss));	// 3135 push    ss ;~ 01A2:1C28
cs=0x1a2;eip=0x001c29; 	X(PUSH(ax));	// 3136 push    ax ;~ 01A2:1C29
cs=0x1a2;eip=0x001c2a; 	T(MOV(ax, 0x95F8));	// 3137 mov     ax, 95F8h ;~ 01A2:1C2A
cs=0x1a2;eip=0x001c2d; 	X(PUSH(ax));	// 3138 push    ax ;~ 01A2:1C2D
cs=0x1a2;eip=0x001c2e; 	R(CALLF(file_write_fatal,0));	// 3139 call    file_write_fatal ;~ 01A2:1C2E
cs=0x1a2;eip=0x001c33; 	T(ADD(sp, 0x0A));	// 3140 add     sp, 0Ah ;~ 01A2:1C33
cs=0x1a2;eip=0x001c36; 	X(MOV(g_is_busy, 0));	// 3141 mov     g_is_busy, 0 ;~ 01A2:1C36
cs=0x1a2;eip=0x001c3b; 	X(POP(si));	// 3142 pop     si ;~ 01A2:1C3B
cs=0x1a2;eip=0x001c3c; 	X(POP(di));	// 3143 pop     di ;~ 01A2:1C3C
cs=0x1a2;eip=0x001c3d; 	T(MOV(sp, bp));	// 3144 mov     sp, bp ;~ 01A2:1C3D
cs=0x1a2;eip=0x001c3f; 	X(POP(bp));	// 3145 pop     bp ;~ 01A2:1C3F
cs=0x1a2;eip=0x001c40; 	R(RETF(0));	// 3146 retf ;~ 01A2:1C40
run_car_menu:
	// 3156 
#undef var_10c
#define var_10c -0x10C
	// 3159 var_10C         = dword ptr -10Ch ;~ 01A2:1C42
#undef var_108
#define var_108 -0x108
	// 3160 var_108         = byte ptr -108h ;~ 01A2:1C42
#undef var_106
#define var_106 -0x106
	// 3161 var_106         = byte ptr -106h ;~ 01A2:1C42
#undef var_104
#define var_104 -0x104
	// 3162 var_104         = word ptr -104h ;~ 01A2:1C42
#undef var_102
#define var_102 -0x102
	// 3163 var_102         = word ptr -102h ;~ 01A2:1C42
#undef var_100
#define var_100 -0x100
	// 3164 var_100         = word ptr -100h ;~ 01A2:1C42
#undef var_fe
#define var_fe -0x0FE
	// 3165 var_FE          = word ptr -0FEh ;~ 01A2:1C42
#undef var_fc
#define var_fc -0x0FC
	// 3166 var_FC          = dword ptr -0FCh ;~ 01A2:1C42
#undef var_f8
#define var_f8 -0x0F8
	// 3167 var_F8          = word ptr -0F8h ;~ 01A2:1C42
#undef var_f6
#define var_f6 -0x0F6
	// 3168 var_F6          = byte ptr -0F6h ;~ 01A2:1C42
#undef var_f4
#define var_f4 -0x0F4
	// 3169 var_F4          = word ptr -0F4h ;~ 01A2:1C42
#undef var_f2
#define var_f2 -0x0F2
	// 3170 var_F2          = byte ptr -0F2h ;~ 01A2:1C42
#undef var_f0
#define var_f0 -0x0F0
	// 3171 var_F0          = byte ptr -0F0h ;~ 01A2:1C42
#undef var_ee
#define var_ee -0x0EE
	// 3172 var_EE          = byte ptr -0EEh ;~ 01A2:1C42
#undef var_ed
#define var_ed -0x0ED
	// 3173 var_ED          = byte ptr -0EDh ;~ 01A2:1C42
#undef var_ec
#define var_ec -0x0EC
	// 3174 var_EC          = byte ptr -0ECh ;~ 01A2:1C42
#undef var_eb
#define var_eb -0x0EB
	// 3175 var_EB          = byte ptr -0EBh ;~ 01A2:1C42
#undef var_ea
#define var_ea -0x0EA
	// 3176 var_EA          = byte ptr -0EAh ;~ 01A2:1C42
#undef var_4c
#define var_4c -0x4C
	// 3177 var_4C          = word ptr -4Ch ;~ 01A2:1C42
#undef var_4a
#define var_4a -0x4A
	// 3178 var_4A          = word ptr -4Ah ;~ 01A2:1C42
#undef var_48
#define var_48 -0x48
	// 3179 var_48          = word ptr -48h ;~ 01A2:1C42
#undef var_46
#define var_46 -0x46
	// 3180 var_46          = byte ptr -46h ;~ 01A2:1C42
#undef var_44
#define var_44 -0x44
	// 3181 var_44          = word ptr -44h ;~ 01A2:1C42
#undef var_42
#define var_42 -0x42
	// 3182 var_42          = dword ptr -42h ;~ 01A2:1C42
#undef var_3e
#define var_3e -0x3E
	// 3183 var_3E          = byte ptr -3Eh ;~ 01A2:1C42
#undef var_3c
#define var_3c -0x3C
	// 3184 var_3C          = word ptr -3Ch ;~ 01A2:1C42
#undef var_3a
#define var_3a -0x3A
	// 3185 var_3A          = word ptr -3Ah ;~ 01A2:1C42
#undef var_38
#define var_38 -0x38
	// 3186 var_38          = byte ptr -38h ;~ 01A2:1C42
#undef var_36
#define var_36 -0x36
	// 3187 var_36          = word ptr -36h ;~ 01A2:1C42
#undef var_34
#define var_34 -0x34
	// 3188 var_34          = word ptr -34h ;~ 01A2:1C42
#undef var_32
#define var_32 -0x32
	// 3189 var_32          = byte ptr -32h ;~ 01A2:1C42
#undef var_2c
#define var_2c -0x2C
	// 3190 var_2C          = word ptr -2Ch ;~ 01A2:1C42
#undef var_2a
#define var_2a -0x2A
	// 3191 var_2A          = word ptr -2Ah ;~ 01A2:1C42
#undef var_28
#define var_28 -0x28
	// 3192 var_28          = word ptr -28h ;~ 01A2:1C42
#undef var_26
#define var_26 -0x26
	// 3193 var_26          = word ptr -26h ;~ 01A2:1C42
#undef var_24
#define var_24 -0x24
	// 3194 var_24          = word ptr -24h ;~ 01A2:1C42
#undef var_22
#define var_22 -0x22
	// 3195 var_22          = word ptr -22h ;~ 01A2:1C42
#undef var_20
#define var_20 -0x20
	// 3196 var_20          = byte ptr -20h ;~ 01A2:1C42
#undef var_1f
#define var_1f -0x1F
	// 3197 var_1F          = byte ptr -1Fh ;~ 01A2:1C42
#undef var_1e
#define var_1e -0x1E
	// 3198 var_1E          = word ptr -1Eh ;~ 01A2:1C42
#undef var_1c
#define var_1c -0x1C
	// 3199 var_1C          = byte ptr -1Ch ;~ 01A2:1C42
#undef var_1a
#define var_1a -0x1A
	// 3200 var_1A          = word ptr -1Ah ;~ 01A2:1C42
#undef var_18
#define var_18 -0x18
	// 3201 var_18          = word ptr -18h ;~ 01A2:1C42
#undef var_16
#define var_16 -0x16
	// 3202 var_16          = word ptr -16h ;~ 01A2:1C42
#undef var_14
#define var_14 -0x14
	// 3203 var_14          = word ptr -14h ;~ 01A2:1C42
#undef var_12
#define var_12 -0x12
	// 3204 var_12          = word ptr -12h ;~ 01A2:1C42
#undef var_10
#define var_10 -0x10
	// 3205 var_10          = byte ptr -10h ;~ 01A2:1C42
#undef var_8
#define var_8 -8
	// 3206 var_8           = word ptr -8 ;~ 01A2:1C42
#undef var_6
#define var_6 -6
	// 3207 var_6           = byte ptr -6 ;~ 01A2:1C42
#undef var_4
#define var_4 -4
	// 3208 var_4           = word ptr -4 ;~ 01A2:1C42
#undef var_2
#define var_2 -2
	// 3209 var_2           = word ptr -2 ;~ 01A2:1C42
#undef arg_0
#define arg_0 6
	// 3210 arg_0           = word ptr  6 ;~ 01A2:1C42
#undef arg_2
#define arg_2 8
	// 3211 arg_2           = word ptr  8 ;~ 01A2:1C42
#undef arg_4
#define arg_4 0x0A
	// 3212 arg_4           = word ptr  0Ah ;~ 01A2:1C42
#undef arg_6
#define arg_6 0x0C
	// 3213 arg_6           = word ptr  0Ch ;~ 01A2:1C42
ret_1a2_1c42:
	// 4498 
cs=0x1a2;eip=0x001c42; 	X(PUSH(bp));	// 3215 push    bp ;~ 01A2:1C42
cs=0x1a2;eip=0x001c43; 	T(MOV(bp, sp));	// 3216 mov     bp, sp ;~ 01A2:1C43
cs=0x1a2;eip=0x001c45; 	T(SUB(sp, 0x10C));	// 3217 sub     sp, 10Ch ;~ 01A2:1C45
cs=0x1a2;eip=0x001c49; 	X(PUSH(di));	// 3218 push    di ;~ 01A2:1C49
cs=0x1a2;eip=0x001c4a; 	X(PUSH(si));	// 3219 push    si ;~ 01A2:1C4A
cs=0x1a2;eip=0x001c4b; 	X(PUSH(si));	// 3220 push    si ;~ 01A2:1C4B
cs=0x1a2;eip=0x001c4c; 	T(di = bp+var_32);	// 3221 lea     di, [bp+var_32] ;~ 01A2:1C4C
cs=0x1a2;eip=0x001c4f; 	T(MOV(si, offset(dseg,carmenu_carpos)));	// 3222 mov     si, offset carmenu_carpos ;~ 01A2:1C4F
cs=0x1a2;eip=0x001c52; 	X(PUSH(ss));	// 3223 push    ss ;~ 01A2:1C52
cs=0x1a2;eip=0x001c53; 	X(POP(es));	// 3224 pop     es ;~ 01A2:1C53
cs=0x1a2;eip=0x001c54; 	X(MOVSW);	// 3225 movsw ;~ 01A2:1C54
cs=0x1a2;eip=0x001c55; 	X(MOVSW);	// 3226 movsw ;~ 01A2:1C55
cs=0x1a2;eip=0x001c56; 	X(MOVSW);	// 3227 movsw ;~ 01A2:1C56
cs=0x1a2;eip=0x001c57; 	X(POP(si));	// 3228 pop     si ;~ 01A2:1C57
cs=0x1a2;eip=0x001c58; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), offset(dseg,unk_43864)));	// 3229 mov     [bp+var_2C], offset unk_43864 ;~ 01A2:1C58
cs=0x1a2;eip=0x001c5d; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), 0));	// 3230 mov     [bp+var_28], 0 ;~ 01A2:1C5D
cs=0x1a2;eip=0x001c62; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), 0));	// 3231 mov     [bp+var_26], 0 ;~ 01A2:1C62
cs=0x1a2;eip=0x001c67; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 0x7530));	// 3232 mov     [bp+var_22], 7530h ;~ 01A2:1C67
cs=0x1a2;eip=0x001c6c; 	T(MOV(ax, timertestflag));	// 3233 mov     ax, timertestflag ;~ 01A2:1C6C
cs=0x1a2;eip=0x001c6f; 	X(MOV(timertestflag_copy, ax));	// 3234 mov     timertestflag_copy, ax ;~ 01A2:1C6F
cs=0x1a2;eip=0x001c72; 	T(OR(ax, ax));	// 3235 or      ax, ax ;~ 01A2:1C72
cs=0x1a2;eip=0x001c74; 	R(JZ(loc_11c82));	// 3236 jz      short loc_11C82 ;~ 01A2:1C74
cs=0x1a2;eip=0x001c76; 	T(ax = bp+var_10);	// 3237 lea     ax, [bp+var_10] ;~ 01A2:1C76
cs=0x1a2;eip=0x001c79; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 3238 mov     [bp+var_2A], ax ;~ 01A2:1C79
cs=0x1a2;eip=0x001c7c; 	X(MOV(*(raddr(ss,bp+var_20)), 8));	// 3239 mov     [bp+var_20], 8 ;~ 01A2:1C7C
cs=0x1a2;eip=0x001c80; 	R(JMP(loc_11c86));	// 3240 jmp     short loc_11C86 ;~ 01A2:1C80
loc_11c82:
	// 4499 
cs=0x1a2;eip=0x001c82; 	X(MOV(*(raddr(ss,bp+var_20)), 0));	// 3244 mov     [bp+var_20], 0 ;~ 01A2:1C82
loc_11c86:
	// 4500 
cs=0x1a2;eip=0x001c86; 	T(MOV(ax, 2));	// 3247 mov     ax, 2 ;~ 01A2:1C86
cs=0x1a2;eip=0x001c89; 	X(PUSH(ax));	// 3248 push    ax ;~ 01A2:1C89
cs=0x1a2;eip=0x001c8a; 	R(CALLF(ensure_file_exists,0));	// 3249 call    ensure_file_exists ;~ 01A2:1C8A
cs=0x1a2;eip=0x001c8f; 	T(ADD(sp, 2));	// 3250 add     sp, 2 ;~ 01A2:1C8F
cs=0x1a2;eip=0x001c92; 	T(MOV(ax, offset(dseg,a_res_0)));	// 3251 mov     ax, offset a_res_0 ; ".res" ;~ 01A2:1C92
cs=0x1a2;eip=0x001c95; 	X(PUSH(ax));	// 3252 push    ax              ; int ;~ 01A2:1C95
cs=0x1a2;eip=0x001c96; 	T(MOV(ax, offset(dseg,acar)));	// 3253 mov     ax, offset aCar ; "car*" ;~ 01A2:1C96
cs=0x1a2;eip=0x001c99; 	X(PUSH(ax));	// 3254 push    ax ;~ 01A2:1C99
cs=0x1a2;eip=0x001c9a; 	T(SUB(ax, ax));	// 3255 sub     ax, ax ;~ 01A2:1C9A
cs=0x1a2;eip=0x001c9c; 	X(PUSH(ax));	// 3256 push    ax              ; char * ;~ 01A2:1C9C
cs=0x1a2;eip=0x001c9d; 	R(CALLF(file_combine_and_find,0));	// 3257 call    file_combine_and_find ;~ 01A2:1C9D
cs=0x1a2;eip=0x001ca2; 	T(ADD(sp, 6));	// 3258 add     sp, 6 ;~ 01A2:1CA2
cs=0x1a2;eip=0x001ca5; 	X(MOV(*(dw*)(raddr(ss,bp+var_f4)), ax));	// 3259 mov     [bp+var_F4], ax ;~ 01A2:1CA5
cs=0x1a2;eip=0x001ca9; 	T(OR(ax, ax));	// 3260 or      ax, ax ;~ 01A2:1CA9
cs=0x1a2;eip=0x001cab; 	R(JNZ(loc_11cb8));	// 3261 jnz     short loc_11CB8 ;~ 01A2:1CAB
cs=0x1a2;eip=0x001cad; 	R(CALLF(nullsub_1,0));	// 3262 call    nullsub_1 ;~ 01A2:1CAD
cs=0x1a2;eip=0x001cb2; 	X(POP(si));	// 3263 pop     si ;~ 01A2:1CB2
cs=0x1a2;eip=0x001cb3; 	X(POP(di));	// 3264 pop     di ;~ 01A2:1CB3
cs=0x1a2;eip=0x001cb4; 	T(MOV(sp, bp));	// 3265 mov     sp, bp ;~ 01A2:1CB4
cs=0x1a2;eip=0x001cb6; 	X(POP(bp));	// 3266 pop     bp ;~ 01A2:1CB6
cs=0x1a2;eip=0x001cb7; 	R(RETF(0));	// 3267 retf ;~ 01A2:1CB7
loc_11cb8:
	// 4501 
cs=0x1a2;eip=0x001cb8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_f4))));	// 3271 mov     bx, [bp+var_F4] ;~ 01A2:1CB8
cs=0x1a2;eip=0x001cbc; 	T(MOV(al, *(raddr(ds,bx+3))));	// 3272 mov     al, [bx+3] ;~ 01A2:1CBC
cs=0x1a2;eip=0x001cbf; 	X(MOV(*(raddr(ss,bp+var_ee)), al));	// 3273 mov     [bp+var_EE], al ;~ 01A2:1CBF
cs=0x1a2;eip=0x001cc3; 	T(MOV(al, *(raddr(ds,bx+4))));	// 3274 mov     al, [bx+4] ;~ 01A2:1CC3
cs=0x1a2;eip=0x001cc6; 	X(MOV(*(raddr(ss,bp+var_ed)), al));	// 3275 mov     [bp+var_ED], al ;~ 01A2:1CC6
cs=0x1a2;eip=0x001cca; 	T(MOV(al, *(raddr(ds,bx+5))));	// 3276 mov     al, [bx+5] ;~ 01A2:1CCA
cs=0x1a2;eip=0x001ccd; 	X(MOV(*(raddr(ss,bp+var_ec)), al));	// 3277 mov     [bp+var_EC], al ;~ 01A2:1CCD
cs=0x1a2;eip=0x001cd1; 	T(MOV(al, *(raddr(ds,bx+6))));	// 3278 mov     al, [bx+6] ;~ 01A2:1CD1
cs=0x1a2;eip=0x001cd4; 	X(MOV(*(raddr(ss,bp+var_eb)), al));	// 3279 mov     [bp+var_EB], al ;~ 01A2:1CD4
cs=0x1a2;eip=0x001cd8; 	X(MOV(*(raddr(ss,bp+var_ea)), 0));	// 3280 mov     [bp+var_EA], 0 ;~ 01A2:1CD8
cs=0x1a2;eip=0x001cdd; 	X(MOV(*(raddr(ss,bp+var_46)), 1));	// 3281 mov     [bp+var_46], 1 ;~ 01A2:1CDD
loc_11ce1:
	// 4502 
cs=0x1a2;eip=0x001ce1; 	R(CALLF(file_find_next_alt,0));	// 3284 call    file_find_next_alt ;~ 01A2:1CE1
cs=0x1a2;eip=0x001ce6; 	X(MOV(*(dw*)(raddr(ss,bp+var_f4)), ax));	// 3285 mov     [bp+var_F4], ax ;~ 01A2:1CE6
cs=0x1a2;eip=0x001cea; 	T(OR(ax, ax));	// 3286 or      ax, ax ;~ 01A2:1CEA
cs=0x1a2;eip=0x001cec; 	R(JZ(loc_11d44));	// 3287 jz      short loc_11D44 ;~ 01A2:1CEC
cs=0x1a2;eip=0x001cee; 	T(MOV(al, *(raddr(ss,bp+var_46))));	// 3288 mov     al, [bp+var_46] ;~ 01A2:1CEE
cs=0x1a2;eip=0x001cf1; 	T(CBW);	// 3289 cbw ;~ 01A2:1CF1
cs=0x1a2;eip=0x001cf2; 	T(MOV(cx, ax));	// 3290 mov     cx, ax ;~ 01A2:1CF2
cs=0x1a2;eip=0x001cf4; 	T(SHL(ax, 1));	// 3291 shl     ax, 1 ;~ 01A2:1CF4
cs=0x1a2;eip=0x001cf6; 	T(SHL(ax, 1));	// 3292 shl     ax, 1 ;~ 01A2:1CF6
cs=0x1a2;eip=0x001cf8; 	T(ADD(ax, cx));	// 3293 add     ax, cx ;~ 01A2:1CF8
cs=0x1a2;eip=0x001cfa; 	T(MOV(di, ax));	// 3294 mov     di, ax ;~ 01A2:1CFA
cs=0x1a2;eip=0x001cfc; 	T(ADD(di, bp));	// 3295 add     di, bp ;~ 01A2:1CFC
cs=0x1a2;eip=0x001cfe; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_f4))));	// 3296 mov     bx, [bp+var_F4] ;~ 01A2:1CFE
cs=0x1a2;eip=0x001d02; 	T(MOV(al, *(raddr(ds,bx+3))));	// 3297 mov     al, [bx+3] ;~ 01A2:1D02
cs=0x1a2;eip=0x001d05; 	X(MOV(*(raddr(ds,di-0x0EE)), al));	// 3298 mov     [di-0EEh], al ;~ 01A2:1D05
cs=0x1a2;eip=0x001d09; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_f4))));	// 3299 mov     bx, [bp+var_F4] ;~ 01A2:1D09
cs=0x1a2;eip=0x001d0d; 	T(MOV(al, *(raddr(ds,bx+4))));	// 3300 mov     al, [bx+4] ;~ 01A2:1D0D
cs=0x1a2;eip=0x001d10; 	X(MOV(*(raddr(ds,di-0x0ED)), al));	// 3301 mov     [di-0EDh], al ;~ 01A2:1D10
cs=0x1a2;eip=0x001d14; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_f4))));	// 3302 mov     bx, [bp+var_F4] ;~ 01A2:1D14
cs=0x1a2;eip=0x001d18; 	T(MOV(al, *(raddr(ds,bx+5))));	// 3303 mov     al, [bx+5] ;~ 01A2:1D18
cs=0x1a2;eip=0x001d1b; 	X(MOV(*(raddr(ds,di-0x0EC)), al));	// 3304 mov     [di-0ECh], al ;~ 01A2:1D1B
cs=0x1a2;eip=0x001d1f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_f4))));	// 3305 mov     bx, [bp+var_F4] ;~ 01A2:1D1F
cs=0x1a2;eip=0x001d23; 	T(MOV(al, *(raddr(ds,bx+6))));	// 3306 mov     al, [bx+6] ;~ 01A2:1D23
cs=0x1a2;eip=0x001d26; 	X(MOV(*(raddr(ds,di-0x0EB)), al));	// 3307 mov     [di-0EBh], al ;~ 01A2:1D26
cs=0x1a2;eip=0x001d2a; 	T(MOV(al, *(raddr(ss,bp+var_46))));	// 3308 mov     al, [bp+var_46] ;~ 01A2:1D2A
cs=0x1a2;eip=0x001d2d; 	T(CBW);	// 3309 cbw ;~ 01A2:1D2D
cs=0x1a2;eip=0x001d2e; 	T(MOV(di, ax));	// 3310 mov     di, ax ;~ 01A2:1D2E
cs=0x1a2;eip=0x001d30; 	T(SHL(di, 1));	// 3311 shl     di, 1 ;~ 01A2:1D30
cs=0x1a2;eip=0x001d32; 	T(SHL(di, 1));	// 3312 shl     di, 1 ;~ 01A2:1D32
cs=0x1a2;eip=0x001d34; 	T(ADD(di, ax));	// 3313 add     di, ax ;~ 01A2:1D34
cs=0x1a2;eip=0x001d36; 	X(MOV(*(raddr(ss,bp+di+var_ea)), 0));	// 3314 mov     [bp+di+var_EA], 0 ;~ 01A2:1D36
cs=0x1a2;eip=0x001d3b; 	X(INC(*(raddr(ss,bp+var_46))));	// 3315 inc     [bp+var_46] ;~ 01A2:1D3B
cs=0x1a2;eip=0x001d3e; 	T(CMP(*(raddr(ss,bp+var_46)), 0x20));	// 3316 cmp     [bp+var_46], 20h ; ' ' ;~ 01A2:1D3E
cs=0x1a2;eip=0x001d42; 	R(JNZ(loc_11ce1));	// 3317 jnz     short loc_11CE1 ;~ 01A2:1D42
loc_11d44:
	// 4503 
cs=0x1a2;eip=0x001d44; 	R(CALLF(nullsub_1,0));	// 3320 call    nullsub_1 ;~ 01A2:1D44
cs=0x1a2;eip=0x001d49; 	T(CMP(*(raddr(ss,bp+var_46)), 1));	// 3321 cmp     [bp+var_46], 1 ;~ 01A2:1D49
cs=0x1a2;eip=0x001d4d; 	R(JG(loc_11d52));	// 3322 jg      short loc_11D52 ;~ 01A2:1D4D
cs=0x1a2;eip=0x001d4f; 	R(JMP(loc_11e10));	// 3323 jmp     loc_11E10 ;~ 01A2:1D4F
loc_11d52:
	// 4504 
cs=0x1a2;eip=0x001d52; 	X(MOV(*(dw*)(raddr(ss,bp+var_4a)), 0));	// 3327 mov     [bp+var_4A], 0 ;~ 01A2:1D52
cs=0x1a2;eip=0x001d57; 	R(JMP(loc_11dfb));	// 3328 jmp     loc_11DFB ;~ 01A2:1D57
loc_11d5a:
	// 4505 
cs=0x1a2;eip=0x001d5a; 	X(INC(*(dw*)(raddr(ss,bp+var_44))));	// 3333 inc     [bp+var_44] ;~ 01A2:1D5A
loc_11d5d:
	// 4506 
cs=0x1a2;eip=0x001d5d; 	T(MOV(al, *(raddr(ss,bp+var_46))));	// 3336 mov     al, [bp+var_46] ;~ 01A2:1D5D
cs=0x1a2;eip=0x001d60; 	T(CBW);	// 3337 cbw ;~ 01A2:1D60
cs=0x1a2;eip=0x001d61; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_44))));	// 3338 cmp     ax, [bp+var_44] ;~ 01A2:1D61
cs=0x1a2;eip=0x001d64; 	R(JA(loc_11d69));	// 3339 ja      short loc_11D69 ;~ 01A2:1D64
cs=0x1a2;eip=0x001d66; 	R(JMP(loc_11df8));	// 3340 jmp     loc_11DF8 ;~ 01A2:1D66
loc_11d69:
	// 4507 
cs=0x1a2;eip=0x001d69; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_44))));	// 3344 mov     di, [bp+var_44] ;~ 01A2:1D69
cs=0x1a2;eip=0x001d6c; 	T(MOV(ax, di));	// 3345 mov     ax, di ;~ 01A2:1D6C
cs=0x1a2;eip=0x001d6e; 	T(SHL(di, 1));	// 3346 shl     di, 1 ;~ 01A2:1D6E
cs=0x1a2;eip=0x001d70; 	T(SHL(di, 1));	// 3347 shl     di, 1 ;~ 01A2:1D70
cs=0x1a2;eip=0x001d72; 	T(ADD(di, ax));	// 3348 add     di, ax ;~ 01A2:1D72
cs=0x1a2;eip=0x001d74; 	T(ax = bp+di+var_ee);	// 3349 lea     ax, [bp+di+var_EE] ;~ 01A2:1D74
cs=0x1a2;eip=0x001d78; 	X(PUSH(ax));	// 3350 push    ax ;~ 01A2:1D78
cs=0x1a2;eip=0x001d79; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_4a))));	// 3351 mov     di, [bp+var_4A] ;~ 01A2:1D79
cs=0x1a2;eip=0x001d7c; 	T(MOV(ax, di));	// 3352 mov     ax, di ;~ 01A2:1D7C
cs=0x1a2;eip=0x001d7e; 	T(SHL(di, 1));	// 3353 shl     di, 1 ;~ 01A2:1D7E
cs=0x1a2;eip=0x001d80; 	T(SHL(di, 1));	// 3354 shl     di, 1 ;~ 01A2:1D80
cs=0x1a2;eip=0x001d82; 	T(ADD(di, ax));	// 3355 add     di, ax ;~ 01A2:1D82
cs=0x1a2;eip=0x001d84; 	T(ax = bp+di+var_ee);	// 3356 lea     ax, [bp+di+var_EE] ;~ 01A2:1D84
cs=0x1a2;eip=0x001d88; 	X(PUSH(ax));	// 3357 push    ax              ; char * ;~ 01A2:1D88
cs=0x1a2;eip=0x001d89; 	R(CALLF(_strcmp,0));	// 3358 call    _strcmp ;~ 01A2:1D89
cs=0x1a2;eip=0x001d8e; 	T(ADD(sp, 4));	// 3359 add     sp, 4 ;~ 01A2:1D8E
cs=0x1a2;eip=0x001d91; 	T(OR(ax, ax));	// 3360 or      ax, ax ;~ 01A2:1D91
cs=0x1a2;eip=0x001d93; 	R(JLE(loc_11d5a));	// 3361 jle     short loc_11D5A ;~ 01A2:1D93
cs=0x1a2;eip=0x001d95; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_4a))));	// 3362 mov     di, [bp+var_4A] ;~ 01A2:1D95
cs=0x1a2;eip=0x001d98; 	T(MOV(ax, di));	// 3363 mov     ax, di ;~ 01A2:1D98
cs=0x1a2;eip=0x001d9a; 	T(SHL(di, 1));	// 3364 shl     di, 1 ;~ 01A2:1D9A
cs=0x1a2;eip=0x001d9c; 	T(SHL(di, 1));	// 3365 shl     di, 1 ;~ 01A2:1D9C
cs=0x1a2;eip=0x001d9e; 	T(ADD(di, ax));	// 3366 add     di, ax ;~ 01A2:1D9E
cs=0x1a2;eip=0x001da0; 	T(ax = bp+di+var_ee);	// 3367 lea     ax, [bp+di+var_EE] ;~ 01A2:1DA0
cs=0x1a2;eip=0x001da4; 	X(PUSH(ax));	// 3368 push    ax ;~ 01A2:1DA4
cs=0x1a2;eip=0x001da5; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 3369 mov     ax, offset resID_byte1 ;~ 01A2:1DA5
cs=0x1a2;eip=0x001da8; 	X(PUSH(ax));	// 3370 push    ax              ; char * ;~ 01A2:1DA8
cs=0x1a2;eip=0x001da9; 	R(CALLF(_strcpy,0));	// 3371 call    _strcpy ;~ 01A2:1DA9
cs=0x1a2;eip=0x001dae; 	T(ADD(sp, 4));	// 3372 add     sp, 4 ;~ 01A2:1DAE
cs=0x1a2;eip=0x001db1; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_44))));	// 3373 mov     di, [bp+var_44] ;~ 01A2:1DB1
cs=0x1a2;eip=0x001db4; 	T(MOV(ax, di));	// 3374 mov     ax, di ;~ 01A2:1DB4
cs=0x1a2;eip=0x001db6; 	T(SHL(di, 1));	// 3375 shl     di, 1 ;~ 01A2:1DB6
cs=0x1a2;eip=0x001db8; 	T(SHL(di, 1));	// 3376 shl     di, 1 ;~ 01A2:1DB8
cs=0x1a2;eip=0x001dba; 	T(ADD(di, ax));	// 3377 add     di, ax ;~ 01A2:1DBA
cs=0x1a2;eip=0x001dbc; 	T(ax = bp+di+var_ee);	// 3378 lea     ax, [bp+di+var_EE] ;~ 01A2:1DBC
cs=0x1a2;eip=0x001dc0; 	X(PUSH(ax));	// 3379 push    ax ;~ 01A2:1DC0
cs=0x1a2;eip=0x001dc1; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_4a))));	// 3380 mov     di, [bp+var_4A] ;~ 01A2:1DC1
cs=0x1a2;eip=0x001dc4; 	T(MOV(ax, di));	// 3381 mov     ax, di ;~ 01A2:1DC4
cs=0x1a2;eip=0x001dc6; 	T(SHL(di, 1));	// 3382 shl     di, 1 ;~ 01A2:1DC6
cs=0x1a2;eip=0x001dc8; 	T(SHL(di, 1));	// 3383 shl     di, 1 ;~ 01A2:1DC8
cs=0x1a2;eip=0x001dca; 	T(ADD(di, ax));	// 3384 add     di, ax ;~ 01A2:1DCA
cs=0x1a2;eip=0x001dcc; 	T(ax = bp+di+var_ee);	// 3385 lea     ax, [bp+di+var_EE] ;~ 01A2:1DCC
cs=0x1a2;eip=0x001dd0; 	X(PUSH(ax));	// 3386 push    ax              ; char * ;~ 01A2:1DD0
cs=0x1a2;eip=0x001dd1; 	R(CALLF(_strcpy,0));	// 3387 call    _strcpy ;~ 01A2:1DD1
cs=0x1a2;eip=0x001dd6; 	T(ADD(sp, 4));	// 3388 add     sp, 4 ;~ 01A2:1DD6
cs=0x1a2;eip=0x001dd9; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 3389 mov     ax, offset resID_byte1 ;~ 01A2:1DD9
cs=0x1a2;eip=0x001ddc; 	X(PUSH(ax));	// 3390 push    ax ;~ 01A2:1DDC
cs=0x1a2;eip=0x001ddd; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_44))));	// 3391 mov     di, [bp+var_44] ;~ 01A2:1DDD
cs=0x1a2;eip=0x001de0; 	T(MOV(ax, di));	// 3392 mov     ax, di ;~ 01A2:1DE0
cs=0x1a2;eip=0x001de2; 	T(SHL(di, 1));	// 3393 shl     di, 1 ;~ 01A2:1DE2
cs=0x1a2;eip=0x001de4; 	T(SHL(di, 1));	// 3394 shl     di, 1 ;~ 01A2:1DE4
cs=0x1a2;eip=0x001de6; 	T(ADD(di, ax));	// 3395 add     di, ax ;~ 01A2:1DE6
cs=0x1a2;eip=0x001de8; 	T(ax = bp+di+var_ee);	// 3396 lea     ax, [bp+di+var_EE] ;~ 01A2:1DE8
cs=0x1a2;eip=0x001dec; 	X(PUSH(ax));	// 3397 push    ax              ; char * ;~ 01A2:1DEC
cs=0x1a2;eip=0x001ded; 	R(CALLF(_strcpy,0));	// 3398 call    _strcpy ;~ 01A2:1DED
cs=0x1a2;eip=0x001df2; 	T(ADD(sp, 4));	// 3399 add     sp, 4 ;~ 01A2:1DF2
cs=0x1a2;eip=0x001df5; 	R(JMP(loc_11d5a));	// 3400 jmp     loc_11D5A ;~ 01A2:1DF5
loc_11df8:
	// 4508 
cs=0x1a2;eip=0x001df8; 	X(INC(*(dw*)(raddr(ss,bp+var_4a))));	// 3404 inc     [bp+var_4A] ;~ 01A2:1DF8
loc_11dfb:
	// 4509 
cs=0x1a2;eip=0x001dfb; 	T(MOV(al, *(raddr(ss,bp+var_46))));	// 3407 mov     al, [bp+var_46] ;~ 01A2:1DFB
cs=0x1a2;eip=0x001dfe; 	T(CBW);	// 3408 cbw ;~ 01A2:1DFE
cs=0x1a2;eip=0x001dff; 	T(DEC(ax));	// 3409 dec     ax ;~ 01A2:1DFF
cs=0x1a2;eip=0x001e00; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4a))));	// 3410 cmp     ax, [bp+var_4A] ;~ 01A2:1E00
cs=0x1a2;eip=0x001e03; 	R(JLE(loc_11e10));	// 3411 jle     short loc_11E10 ;~ 01A2:1E03
cs=0x1a2;eip=0x001e05; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4a))));	// 3412 mov     ax, [bp+var_4A] ;~ 01A2:1E05
cs=0x1a2;eip=0x001e08; 	T(INC(ax));	// 3413 inc     ax ;~ 01A2:1E08
cs=0x1a2;eip=0x001e09; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 3414 mov     [bp+var_44], ax ;~ 01A2:1E09
cs=0x1a2;eip=0x001e0c; 	R(JMP(loc_11d5d));	// 3415 jmp     loc_11D5D ;~ 01A2:1E0C
loc_11e10:
	// 4510 
cs=0x1a2;eip=0x001e10; 	X(MOV(*(raddr(ss,bp+var_f0)), 0));	// 3421 mov     [bp+var_F0], 0 ;~ 01A2:1E10
cs=0x1a2;eip=0x001e15; 	X(MOV(*(raddr(ss,bp+var_f6)), 0));	// 3422 mov     [bp+var_F6], 0 ;~ 01A2:1E15
cs=0x1a2;eip=0x001e1a; 	R(JMP(loc_11e20));	// 3423 jmp     short loc_11E20 ;~ 01A2:1E1A
loc_11e1c:
	// 4511 
cs=0x1a2;eip=0x001e1c; 	X(INC(*(raddr(ss,bp+var_f6))));	// 3428 inc     [bp+var_F6] ;~ 01A2:1E1C
loc_11e20:
	// 4512 
cs=0x1a2;eip=0x001e20; 	T(MOV(al, *(raddr(ss,bp+var_46))));	// 3431 mov     al, [bp+var_46] ;~ 01A2:1E20
cs=0x1a2;eip=0x001e23; 	T(CMP(*(raddr(ss,bp+var_f6)), al));	// 3432 cmp     [bp+var_F6], al ;~ 01A2:1E23
cs=0x1a2;eip=0x001e27; 	R(JGE(loc_11e68));	// 3433 jge     short loc_11E68 ;~ 01A2:1E27
cs=0x1a2;eip=0x001e29; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 3434 mov     al, [bp+var_F6] ;~ 01A2:1E29
cs=0x1a2;eip=0x001e2d; 	T(CBW);	// 3435 cbw ;~ 01A2:1E2D
cs=0x1a2;eip=0x001e2e; 	T(MOV(cx, ax));	// 3436 mov     cx, ax ;~ 01A2:1E2E
cs=0x1a2;eip=0x001e30; 	T(SHL(ax, 1));	// 3437 shl     ax, 1 ;~ 01A2:1E30
cs=0x1a2;eip=0x001e32; 	T(SHL(ax, 1));	// 3438 shl     ax, 1 ;~ 01A2:1E32
cs=0x1a2;eip=0x001e34; 	T(ADD(ax, cx));	// 3439 add     ax, cx ;~ 01A2:1E34
cs=0x1a2;eip=0x001e36; 	T(MOV(di, ax));	// 3440 mov     di, ax ;~ 01A2:1E36
cs=0x1a2;eip=0x001e38; 	T(ADD(di, bp));	// 3441 add     di, bp ;~ 01A2:1E38
cs=0x1a2;eip=0x001e3a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 3442 mov     bx, [bp+arg_0] ;~ 01A2:1E3A
cs=0x1a2;eip=0x001e3d; 	T(MOV(al, *(raddr(ds,di-0x0EE))));	// 3443 mov     al, [di-0EEh] ;~ 01A2:1E3D
cs=0x1a2;eip=0x001e41; 	T(CMP(*(raddr(ds,bx)), al));	// 3444 cmp     [bx], al ;~ 01A2:1E41
cs=0x1a2;eip=0x001e43; 	R(JNZ(loc_11e1c));	// 3445 jnz     short loc_11E1C ;~ 01A2:1E43
cs=0x1a2;eip=0x001e45; 	T(MOV(al, *(raddr(ds,di-0x0ED))));	// 3446 mov     al, [di-0EDh] ;~ 01A2:1E45
cs=0x1a2;eip=0x001e49; 	T(CMP(*(raddr(ds,bx+1)), al));	// 3447 cmp     [bx+1], al ;~ 01A2:1E49
cs=0x1a2;eip=0x001e4c; 	R(JNZ(loc_11e1c));	// 3448 jnz     short loc_11E1C ;~ 01A2:1E4C
cs=0x1a2;eip=0x001e4e; 	T(MOV(al, *(raddr(ds,di-0x0EC))));	// 3449 mov     al, [di-0ECh] ;~ 01A2:1E4E
cs=0x1a2;eip=0x001e52; 	T(CMP(*(raddr(ds,bx+2)), al));	// 3450 cmp     [bx+2], al ;~ 01A2:1E52
cs=0x1a2;eip=0x001e55; 	R(JNZ(loc_11e1c));	// 3451 jnz     short loc_11E1C ;~ 01A2:1E55
cs=0x1a2;eip=0x001e57; 	T(MOV(al, *(raddr(ds,di-0x0EB))));	// 3452 mov     al, [di-0EBh] ;~ 01A2:1E57
cs=0x1a2;eip=0x001e5b; 	T(CMP(*(raddr(ds,bx+3)), al));	// 3453 cmp     [bx+3], al ;~ 01A2:1E5B
cs=0x1a2;eip=0x001e5e; 	R(JNZ(loc_11e1c));	// 3454 jnz     short loc_11E1C ;~ 01A2:1E5E
cs=0x1a2;eip=0x001e60; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 3455 mov     al, [bp+var_F6] ;~ 01A2:1E60
cs=0x1a2;eip=0x001e64; 	X(MOV(*(raddr(ss,bp+var_f0)), al));	// 3456 mov     [bp+var_F0], al ;~ 01A2:1E64
loc_11e68:
	// 4513 
cs=0x1a2;eip=0x001e68; 	X(MOV(waitflag, 0x5A));	// 3459 mov     waitflag, 5Ah ; 'Z' ;~ 01A2:1E68
cs=0x1a2;eip=0x001e6e; 	X(MOV(*(raddr(ss,bp+var_3e)), 0x0FF));	// 3460 mov     [bp+var_3E], 0FFh ;~ 01A2:1E6E
cs=0x1a2;eip=0x001e72; 	X(MOV(backlights_paint_override, 0x2D));	// 3461 mov     backlights_paint_override, 2Dh ; '-' ; default backlights paintjob 2Dh ;~ 01A2:1E72
cs=0x1a2;eip=0x001e77; 	T(MOV(ax, offset(dseg,asdcsel)));	// 3462 mov     ax, offset aSdcsel ; "sdcsel" ;~ 01A2:1E77
cs=0x1a2;eip=0x001e7a; 	X(PUSH(ax));	// 3463 push    ax ;~ 01A2:1E7A
cs=0x1a2;eip=0x001e7b; 	R(CALLF(file_load_shape2d_fatal,0));	// 3464 call    file_load_shape2d_fatal_thunk ;~ 01A2:1E7B
cs=0x1a2;eip=0x001e80; 	T(ADD(sp, 2));	// 3465 add     sp, 2 ;~ 01A2:1E80
cs=0x1a2;eip=0x001e83; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), ax));	// 3466 mov     [bp+var_36], ax ;~ 01A2:1E83
cs=0x1a2;eip=0x001e86; 	X(MOV(*(dw*)(raddr(ss,bp+var_34)), dx));	// 3467 mov     [bp+var_34], dx ;~ 01A2:1E86
cs=0x1a2;eip=0x001e89; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0));	// 3468 cmp     [bp+arg_6], 0 ;~ 01A2:1E89
cs=0x1a2;eip=0x001e8d; 	R(JNZ(loc_11ea2));	// 3469 jnz     short loc_11EA2 ;~ 01A2:1E8D
cs=0x1a2;eip=0x001e8f; 	T(MOV(ax, offset(dseg,amisc_0)));	// 3470 mov     ax, offset aMisc_0 ; "misc" ;~ 01A2:1E8F
cs=0x1a2;eip=0x001e92; 	X(PUSH(ax));	// 3471 push    ax ;~ 01A2:1E92
cs=0x1a2;eip=0x001e93; 	R(CALLF(file_load_resfile,0));	// 3472 call    file_load_resfile ;~ 01A2:1E93
cs=0x1a2;eip=0x001e98; 	T(ADD(sp, 2));	// 3473 add     sp, 2 ;~ 01A2:1E98
cs=0x1a2;eip=0x001e9b; 	X(MOV(miscptr, ax));	// 3474 mov     miscptr, ax ;~ 01A2:1E9B
cs=0x1a2;eip=0x001e9e; 	X(MOV(word_455ce, dx));	// 3475 mov     word_455CE, dx ;~ 01A2:1E9E
loc_11ea2:
	// 4514 
cs=0x1a2;eip=0x001ea2; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0));	// 3478 cmp     [bp+arg_6], 0 ;~ 01A2:1EA2
cs=0x1a2;eip=0x001ea6; 	R(JNZ(loc_11eab));	// 3479 jnz     short loc_11EAB ;~ 01A2:1EA6
cs=0x1a2;eip=0x001ea8; 	R(JMP(loc_11f4a));	// 3480 jmp     loc_11F4A ;~ 01A2:1EA8
loc_11eab:
	// 4515 
cs=0x1a2;eip=0x001eab; 	X(MOV(word_3bb58, 0x0F0));	// 3484 mov     word_3BB58, 0F0h ; 'ð' ;~ 01A2:1EAB
cs=0x1a2;eip=0x001eb1; 	T(CMP(video_flag5_is0, 0));	// 3485 cmp     video_flag5_is0, 0 ;~ 01A2:1EB1
cs=0x1a2;eip=0x001eb6; 	R(JNZ(loc_11ebb));	// 3486 jnz     short loc_11EBB ;~ 01A2:1EB6
cs=0x1a2;eip=0x001eb8; 	R(JMP(loc_11f50));	// 3487 jmp     loc_11F50 ;~ 01A2:1EB8
loc_11ebb:
	// 4516 
cs=0x1a2;eip=0x001ebb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 3491 mov     bx, [bp+arg_6] ;~ 01A2:1EBB
cs=0x1a2;eip=0x001ebe; 	T(SHL(bx, 1));	// 3492 shl     bx, 1 ;~ 01A2:1EBE
cs=0x1a2;eip=0x001ec0; 	T(SHL(bx, 1));	// 3493 shl     bx, 1 ;~ 01A2:1EC0
cs=0x1a2;eip=0x001ec2; 	T(MOV(ax, *(dw*)(((db*)&oppresources)+bx)));	// 3494 mov     ax, word ptr oppresources[bx] ;~ 01A2:1EC2
cs=0x1a2;eip=0x001ec6; 	T(MOV(dx, *(dw*)((((db*)&oppresources)+2)+bx)));	// 3495 mov     dx, word ptr (oppresources+2)[bx] ;~ 01A2:1EC6
cs=0x1a2;eip=0x001eca; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10c))), ax));	// 3496 mov     word ptr [bp+var_10C], ax ;~ 01A2:1ECA
cs=0x1a2;eip=0x001ece; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10c+2))), dx));	// 3497 mov     word ptr [bp+var_10C+2], dx ;~ 01A2:1ECE
cs=0x1a2;eip=0x001ed2; 	T(MOV(ax, 0x0F));	// 3498 mov     ax, 0Fh ;~ 01A2:1ED2
cs=0x1a2;eip=0x001ed5; 	X(PUSH(ax));	// 3499 push    ax ;~ 01A2:1ED5
cs=0x1a2;eip=0x001ed6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10c))));	// 3500 les     bx, [bp+var_10C] ;~ 01A2:1ED6
cs=0x1a2;eip=0x001eda; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 3501 push    word ptr es:[bx+2] ;~ 01A2:1EDA
cs=0x1a2;eip=0x001ede; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 3502 push    word ptr es:[bx] ;~ 01A2:1EDE
cs=0x1a2;eip=0x001ee1; 	R(CALLF(sprite_make_wnd,0));	// 3503 call    sprite_make_wnd ;~ 01A2:1EE1
cs=0x1a2;eip=0x001ee6; 	T(ADD(sp, 6));	// 3504 add     sp, 6 ;~ 01A2:1EE6
cs=0x1a2;eip=0x001ee9; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_42))), ax));	// 3505 mov     word ptr [bp+var_42], ax ;~ 01A2:1EE9
cs=0x1a2;eip=0x001eec; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_42+2))), dx));	// 3506 mov     word ptr [bp+var_42+2], dx ;~ 01A2:1EEC
cs=0x1a2;eip=0x001eef; 	R(CALLF(setup_mcgawnd2,0));	// 3507 call    setup_mcgawnd2 ;~ 01A2:1EEF
cs=0x1a2;eip=0x001ef4; 	T(SUB(ax, ax));	// 3508 sub     ax, ax ;~ 01A2:1EF4
cs=0x1a2;eip=0x001ef6; 	X(PUSH(ax));	// 3509 push    ax ;~ 01A2:1EF6
cs=0x1a2;eip=0x001ef7; 	R(CALLF(sprite_clear_1_color,0));	// 3510 call    sprite_clear_1_color ;~ 01A2:1EF7
cs=0x1a2;eip=0x001efc; 	T(ADD(sp, 2));	// 3511 add     sp, 2 ;~ 01A2:1EFC
cs=0x1a2;eip=0x001eff; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_6))));	// 3512 mov     al, byte ptr [bp+arg_6] ;~ 01A2:1EFF
cs=0x1a2;eip=0x001f02; 	T(ADD(al, 0x30));	// 3513 add     al, 30h ; '0' ;~ 01A2:1F02
cs=0x1a2;eip=0x001f04; 	T(CBW);	// 3514 cbw ;~ 01A2:1F04
cs=0x1a2;eip=0x001f05; 	X(PUSH(ax));	// 3515 push    ax ;~ 01A2:1F05
cs=0x1a2;eip=0x001f06; 	X(PUSH(word_44a02));	// 3516 push    word_44A02 ;~ 01A2:1F06
cs=0x1a2;eip=0x001f0a; 	X(PUSH(opp_res));	// 3517 push    opp_res ;~ 01A2:1F0A
cs=0x1a2;eip=0x001f0e; 	R(CALLF(nullsub_2,0));	// 3518 call    nullsub_2 ;~ 01A2:1F0E
cs=0x1a2;eip=0x001f13; 	T(ADD(sp, 6));	// 3519 add     sp, 6 ;~ 01A2:1F13
cs=0x1a2;eip=0x001f16; 	T(SUB(ax, ax));	// 3520 sub     ax, ax ;~ 01A2:1F16
cs=0x1a2;eip=0x001f18; 	X(PUSH(ax));	// 3521 push    ax ;~ 01A2:1F18
cs=0x1a2;eip=0x001f19; 	X(PUSH(ax));	// 3522 push    ax              ; __int16 ;~ 01A2:1F19
cs=0x1a2;eip=0x001f1a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 3523 mov     bx, [bp+arg_6] ;~ 01A2:1F1A
cs=0x1a2;eip=0x001f1d; 	T(SHL(bx, 1));	// 3524 shl     bx, 1 ;~ 01A2:1F1D
cs=0x1a2;eip=0x001f1f; 	T(SHL(bx, 1));	// 3525 shl     bx, 1 ;~ 01A2:1F1F
cs=0x1a2;eip=0x001f21; 	X(PUSH(*(dw*)((((db*)&oppresources)+2)+bx)));	// 3526 push    word ptr (oppresources+2)[bx] ;~ 01A2:1F21
cs=0x1a2;eip=0x001f25; 	X(PUSH(*(dw*)(((db*)&oppresources)+bx)));	// 3527 push    word ptr oppresources[bx] ; shapeptr ;~ 01A2:1F25
cs=0x1a2;eip=0x001f29; 	R(CALLF(sprite_putimage_transparent,0));	// 3528 call    sprite_putimage_transparent ;~ 01A2:1F29
cs=0x1a2;eip=0x001f2e; 	T(ADD(sp, 8));	// 3529 add     sp, 8 ;~ 01A2:1F2E
cs=0x1a2;eip=0x001f31; 	T(SUB(ax, ax));	// 3530 sub     ax, ax ;~ 01A2:1F31
cs=0x1a2;eip=0x001f33; 	X(PUSH(ax));	// 3531 push    ax ;~ 01A2:1F33
cs=0x1a2;eip=0x001f34; 	X(PUSH(ax));	// 3532 push    ax ;~ 01A2:1F34
cs=0x1a2;eip=0x001f35; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_42))));	// 3533 les     bx, [bp+var_42] ;~ 01A2:1F35
cs=0x1a2;eip=0x001f38; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 3534 push    word ptr es:[bx+2] ;~ 01A2:1F38
cs=0x1a2;eip=0x001f3c; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 3535 push    word ptr es:[bx] ;~ 01A2:1F3C
cs=0x1a2;eip=0x001f3f; 	R(CALLF(sprite_clear_shape_alt,0));	// 3536 call    sprite_clear_shape_alt ;~ 01A2:1F3F
cs=0x1a2;eip=0x001f44; 	T(ADD(sp, 8));	// 3537 add     sp, 8 ;~ 01A2:1F44
cs=0x1a2;eip=0x001f47; 	R(JMP(loc_11f50));	// 3538 jmp     short loc_11F50 ;~ 01A2:1F47
loc_11f4a:
	// 4517 
cs=0x1a2;eip=0x001f4a; 	X(MOV(word_3bb58, 0x140));	// 3543 mov     word_3BB58, 140h ;~ 01A2:1F4A
loc_11f50:
	// 4518 
cs=0x1a2;eip=0x001f50; 	X(MOV(*(raddr(ss,bp+var_38)), 0x0FF));	// 3547 mov     [bp+var_38], 0FFh ;~ 01A2:1F50
cs=0x1a2;eip=0x001f54; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 3548 mov     [bp+var_1E], 0 ;~ 01A2:1F54
cs=0x1a2;eip=0x001f59; 	X(MOV(*(raddr(ss,bp+var_106)), 0));	// 3549 mov     [bp+var_106], 0 ;~ 01A2:1F59
cs=0x1a2;eip=0x001f5e; 	R(CALLF(sub_29772,0));	// 3550 call    sub_29772 ;~ 01A2:1F5E
cs=0x1a2;eip=0x001f63; 	X(MOV(*(dw*)(raddr(ss,bp+var_4c)), 0));	// 3551 mov     [bp+var_4C], 0 ;~ 01A2:1F63
cs=0x1a2;eip=0x001f68; 	X(MOV(*(raddr(ss,bp+var_f2)), 0x0FF));	// 3552 mov     [bp+var_F2], 0FFh ;~ 01A2:1F68
cs=0x1a2;eip=0x001f6d; 	T(MOV(ax, 0x64));	// 3553 mov     ax, 64h ; 'd' ;~ 01A2:1F6D
cs=0x1a2;eip=0x001f70; 	X(PUSH(ax));	// 3554 push    ax ;~ 01A2:1F70
cs=0x1a2;eip=0x001f71; 	T(MOV(ax, 0x140));	// 3555 mov     ax, 140h ;~ 01A2:1F71
cs=0x1a2;eip=0x001f74; 	X(PUSH(ax));	// 3556 push    ax ;~ 01A2:1F74
cs=0x1a2;eip=0x001f75; 	T(MOV(ax, 0x11));	// 3557 mov     ax, 11h ;~ 01A2:1F75
cs=0x1a2;eip=0x001f78; 	X(PUSH(ax));	// 3558 push    ax ;~ 01A2:1F78
cs=0x1a2;eip=0x001f79; 	T(MOV(ax, 0x24));	// 3559 mov     ax, 24h ; '$' ;~ 01A2:1F79
cs=0x1a2;eip=0x001f7c; 	X(PUSH(ax));	// 3560 push    ax ;~ 01A2:1F7C
cs=0x1a2;eip=0x001f7d; 	R(CALLF(set_projection,0));	// 3561 call    set_projection ;~ 01A2:1F7D
cs=0x1a2;eip=0x001f82; 	T(ADD(sp, 8));	// 3562 add     sp, 8 ;~ 01A2:1F82
cs=0x1a2;eip=0x001f85; 	R(CALLF(timer_get_delta_alt,0));	// 3563 call    timer_get_delta_alt ;~ 01A2:1F85
cs=0x1a2;eip=0x001f8a; 	T(MOV(ax, 0x0F));	// 3564 mov     ax, 0Fh ;~ 01A2:1F8A
cs=0x1a2;eip=0x001f8d; 	X(PUSH(ax));	// 3565 push    ax ;~ 01A2:1F8D
cs=0x1a2;eip=0x001f8e; 	T(MOV(ax, 0x0C8));	// 3566 mov     ax, 0C8h ; 'È' ;~ 01A2:1F8E
cs=0x1a2;eip=0x001f91; 	X(PUSH(ax));	// 3567 push    ax ;~ 01A2:1F91
cs=0x1a2;eip=0x001f92; 	T(MOV(ax, 0x140));	// 3568 mov     ax, 140h ;~ 01A2:1F92
cs=0x1a2;eip=0x001f95; 	X(PUSH(ax));	// 3569 push    ax ;~ 01A2:1F95
cs=0x1a2;eip=0x001f96; 	R(CALLF(sprite_make_wnd,0));	// 3570 call    sprite_make_wnd ;~ 01A2:1F96
cs=0x1a2;eip=0x001f9b; 	T(ADD(sp, 6));	// 3571 add     sp, 6 ;~ 01A2:1F9B
cs=0x1a2;eip=0x001f9e; 	X(MOV(*(dw*)(((db*)&wndsprite)), ax));	// 3572 mov     word ptr wndsprite, ax ;~ 01A2:1F9E
cs=0x1a2;eip=0x001fa1; 	X(MOV(*(dw*)(((db*)&wndsprite)+2), dx));	// 3573 mov     word ptr wndsprite+2, dx ;~ 01A2:1FA1
loc_11fa5:
	// 4519 
cs=0x1a2;eip=0x001fa5; 	T(MOV(al, *(raddr(ss,bp+var_38))));	// 3577 mov     al, [bp+var_38] ;~ 01A2:1FA5
cs=0x1a2;eip=0x001fa8; 	T(CMP(*(raddr(ss,bp+var_f0)), al));	// 3578 cmp     [bp+var_F0], al ;~ 01A2:1FA8
cs=0x1a2;eip=0x001fac; 	R(JNZ(loc_11fb1));	// 3579 jnz     short loc_11FB1 ;~ 01A2:1FAC
cs=0x1a2;eip=0x001fae; 	R(JMP(loc_12405));	// 3580 jmp     loc_12405 ;~ 01A2:1FAE
loc_11fb1:
	// 4520 
cs=0x1a2;eip=0x001fb1; 	T(CMP(al, 0x0FF));	// 3584 cmp     al, 0FFh ;~ 01A2:1FB1
cs=0x1a2;eip=0x001fb3; 	R(JZ(loc_11fc8));	// 3585 jz      short loc_11FC8 ;~ 01A2:1FB3
cs=0x1a2;eip=0x001fb5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 3586 push    [bp+var_2] ;~ 01A2:1FB5
cs=0x1a2;eip=0x001fb8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 3587 push    [bp+var_4] ;~ 01A2:1FB8
cs=0x1a2;eip=0x001fbb; 	R(CALLF(unload_resource,0));	// 3588 call    unload_resource ;~ 01A2:1FBB
cs=0x1a2;eip=0x001fc0; 	T(ADD(sp, 4));	// 3589 add     sp, 4 ;~ 01A2:1FC0
cs=0x1a2;eip=0x001fc3; 	R(CALLF(shape3d_free_car_shapes,0));	// 3590 call    shape3d_free_car_shapes ;~ 01A2:1FC3
loc_11fc8:
	// 4521 
cs=0x1a2;eip=0x001fc8; 	T(MOV(ax, offset(dseg,byte_449ab)));	// 3593 mov     ax, offset byte_449AB ;~ 01A2:1FC8
cs=0x1a2;eip=0x001fcb; 	X(PUSH(ax));	// 3594 push    ax ;~ 01A2:1FCB
cs=0x1a2;eip=0x001fcc; 	T(MOV(al, *(raddr(ss,bp+var_f0))));	// 3595 mov     al, [bp+var_F0] ;~ 01A2:1FCC
cs=0x1a2;eip=0x001fd0; 	T(CBW);	// 3596 cbw ;~ 01A2:1FD0
cs=0x1a2;eip=0x001fd1; 	T(MOV(cx, ax));	// 3597 mov     cx, ax ;~ 01A2:1FD1
cs=0x1a2;eip=0x001fd3; 	T(SHL(ax, 1));	// 3598 shl     ax, 1 ;~ 01A2:1FD3
cs=0x1a2;eip=0x001fd5; 	T(SHL(ax, 1));	// 3599 shl     ax, 1 ;~ 01A2:1FD5
cs=0x1a2;eip=0x001fd7; 	T(ADD(ax, cx));	// 3600 add     ax, cx ;~ 01A2:1FD7
cs=0x1a2;eip=0x001fd9; 	T(ADD(ax, bp));	// 3601 add     ax, bp ;~ 01A2:1FD9
cs=0x1a2;eip=0x001fdb; 	T(SUB(ax, 0x0EE));	// 3602 sub     ax, 0EEh ; 'î'  ; var_EE = var_carids ;~ 01A2:1FDB
cs=0x1a2;eip=0x001fde; 	X(PUSH(ax));	// 3603 push    ax ;~ 01A2:1FDE
cs=0x1a2;eip=0x001fdf; 	R(CALLF(shape3d_load_car_shapes,0));	// 3604 call    shape3d_load_car_shapes ;~ 01A2:1FDF
cs=0x1a2;eip=0x001fe4; 	T(ADD(sp, 4));	// 3605 add     sp, 4 ;~ 01A2:1FE4
cs=0x1a2;eip=0x001fe7; 	T(MOV(al, *(raddr(ss,bp+var_f0))));	// 3606 mov     al, [bp+var_F0] ;~ 01A2:1FE7
cs=0x1a2;eip=0x001feb; 	T(CBW);	// 3607 cbw ;~ 01A2:1FEB
cs=0x1a2;eip=0x001fec; 	T(MOV(cx, ax));	// 3608 mov     cx, ax ;~ 01A2:1FEC
cs=0x1a2;eip=0x001fee; 	T(SHL(ax, 1));	// 3609 shl     ax, 1 ;~ 01A2:1FEE
cs=0x1a2;eip=0x001ff0; 	T(SHL(ax, 1));	// 3610 shl     ax, 1 ;~ 01A2:1FF0
cs=0x1a2;eip=0x001ff2; 	T(ADD(ax, cx));	// 3611 add     ax, cx ;~ 01A2:1FF2
cs=0x1a2;eip=0x001ff4; 	T(MOV(di, ax));	// 3612 mov     di, ax ;~ 01A2:1FF4
cs=0x1a2;eip=0x001ff6; 	T(ADD(di, bp));	// 3613 add     di, bp ;~ 01A2:1FF6
cs=0x1a2;eip=0x001ff8; 	T(MOV(al, *(raddr(ds,di-0x0EE))));	// 3614 mov     al, [di-0EEh] ;~ 01A2:1FF8
cs=0x1a2;eip=0x001ffc; 	X(MOV(byte_3b90d, al));	// 3615 mov     byte_3B90D, al ;~ 01A2:1FFC
cs=0x1a2;eip=0x001fff; 	T(MOV(al, *(raddr(ds,di-0x0ED))));	// 3616 mov     al, [di-0EDh] ;~ 01A2:1FFF
cs=0x1a2;eip=0x002003; 	X(MOV(byte_3b90e, al));	// 3617 mov     byte_3B90E, al ;~ 01A2:2003
cs=0x1a2;eip=0x002006; 	T(MOV(al, *(raddr(ds,di-0x0EC))));	// 3618 mov     al, [di-0ECh] ;~ 01A2:2006
cs=0x1a2;eip=0x00200a; 	X(MOV(byte_3b90f, al));	// 3619 mov     byte_3B90F, al ;~ 01A2:200A
cs=0x1a2;eip=0x00200d; 	T(MOV(al, *(raddr(ds,di-0x0EB))));	// 3620 mov     al, [di-0EBh] ;~ 01A2:200D
cs=0x1a2;eip=0x002011; 	X(MOV(byte_3b910, al));	// 3621 mov     byte_3B910, al ;~ 01A2:2011
cs=0x1a2;eip=0x002014; 	T(MOV(ax, offset(dseg,acarcoun)));	// 3622 mov     ax, offset aCarcoun ;~ 01A2:2014
cs=0x1a2;eip=0x002017; 	X(PUSH(ax));	// 3623 push    ax ;~ 01A2:2017
cs=0x1a2;eip=0x002018; 	R(CALLF(file_load_resfile,0));	// 3624 call    file_load_resfile ;~ 01A2:2018
cs=0x1a2;eip=0x00201d; 	T(ADD(sp, 2));	// 3625 add     sp, 2 ;~ 01A2:201D
cs=0x1a2;eip=0x002020; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 3626 mov     [bp+var_4], ax ;~ 01A2:2020
cs=0x1a2;eip=0x002023; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 3627 mov     [bp+var_2], dx ;~ 01A2:2023
cs=0x1a2;eip=0x002026; 	T(SUB(ax, ax));	// 3628 sub     ax, ax ;~ 01A2:2026
cs=0x1a2;eip=0x002028; 	X(PUSH(ax));	// 3629 push    ax ;~ 01A2:2028
cs=0x1a2;eip=0x002029; 	X(PUSH(dx));	// 3630 push    dx ;~ 01A2:2029
cs=0x1a2;eip=0x00202a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 3631 push    [bp+var_4] ;~ 01A2:202A
cs=0x1a2;eip=0x00202d; 	R(CALLF(setup_aero_trackdata,0));	// 3632 call    setup_aero_trackdata ;~ 01A2:202D
cs=0x1a2;eip=0x002032; 	T(ADD(sp, 6));	// 3633 add     sp, 6 ;~ 01A2:2032
cs=0x1a2;eip=0x002035; 	R(CALLF(sprite_copy_wnd_to_1_clear,0));	// 3634 call    sprite_copy_wnd_to_1_clear ;~ 01A2:2035
cs=0x1a2;eip=0x00203a; 	T(SUB(ax, ax));	// 3635 sub     ax, ax ;~ 01A2:203A
cs=0x1a2;eip=0x00203c; 	X(PUSH(ax));	// 3636 push    ax ;~ 01A2:203C
cs=0x1a2;eip=0x00203d; 	X(PUSH(word_407f8));	// 3637 push    word_407F8      ; 7 ;~ 01A2:203D
cs=0x1a2;eip=0x002041; 	X(PUSH(word_407f6));	// 3638 push    word_407F6      ; 8 ;~ 01A2:2041
cs=0x1a2;eip=0x002045; 	X(PUSH(word_407f4));	// 3639 push    word_407F4      ; F ;~ 01A2:2045
cs=0x1a2;eip=0x002049; 	T(MOV(ax, 0x61));	// 3640 mov     ax, 61h ; 'a' ;~ 01A2:2049
cs=0x1a2;eip=0x00204c; 	X(PUSH(ax));	// 3641 push    ax ;~ 01A2:204C
cs=0x1a2;eip=0x00204d; 	T(MOV(ax, 0x140));	// 3642 mov     ax, 140h ;~ 01A2:204D
cs=0x1a2;eip=0x002050; 	X(PUSH(ax));	// 3643 push    ax ;~ 01A2:2050
cs=0x1a2;eip=0x002051; 	T(MOV(ax, 0x67));	// 3644 mov     ax, 67h ; 'g' ;~ 01A2:2051
cs=0x1a2;eip=0x002054; 	X(PUSH(ax));	// 3645 push    ax ;~ 01A2:2054
cs=0x1a2;eip=0x002055; 	T(SUB(ax, ax));	// 3646 sub     ax, ax ;~ 01A2:2055
cs=0x1a2;eip=0x002057; 	X(PUSH(ax));	// 3647 push    ax ;~ 01A2:2057
cs=0x1a2;eip=0x002058; 	X(PUSH(ax));	// 3648 push    ax ;~ 01A2:2058
cs=0x1a2;eip=0x002059; 	X(PUSH(ax));	// 3649 push    ax ;~ 01A2:2059
cs=0x1a2;eip=0x00205a; 	R(CALLF(draw_button,0));	// 3650 call    draw_button ;~ 01A2:205A
cs=0x1a2;eip=0x00205f; 	T(ADD(sp, 0x14));	// 3651 add     sp, 14h ;~ 01A2:205F
cs=0x1a2;eip=0x002062; 	T(SUB(ax, ax));	// 3652 sub     ax, ax ;~ 01A2:2062
cs=0x1a2;eip=0x002064; 	X(PUSH(ax));	// 3653 push    ax ;~ 01A2:2064
cs=0x1a2;eip=0x002065; 	X(PUSH(word_407f8));	// 3654 push    word_407F8 ;~ 01A2:2065
cs=0x1a2;eip=0x002069; 	X(PUSH(word_407f6));	// 3655 push    word_407F6 ;~ 01A2:2069
cs=0x1a2;eip=0x00206d; 	X(PUSH(word_407f4));	// 3656 push    word_407F4 ;~ 01A2:206D
cs=0x1a2;eip=0x002071; 	T(MOV(ax, 0x55));	// 3657 mov     ax, 55h ; 'U' ;~ 01A2:2071
cs=0x1a2;eip=0x002074; 	X(PUSH(ax));	// 3658 push    ax ;~ 01A2:2074
cs=0x1a2;eip=0x002075; 	T(MOV(ax, 0x46));	// 3659 mov     ax, 46h ; 'F' ;~ 01A2:2075
cs=0x1a2;eip=0x002078; 	X(PUSH(ax));	// 3660 push    ax ;~ 01A2:2078
cs=0x1a2;eip=0x002079; 	T(MOV(ax, 0x6D));	// 3661 mov     ax, 6Dh ; 'm' ;~ 01A2:2079
cs=0x1a2;eip=0x00207c; 	X(PUSH(ax));	// 3662 push    ax ;~ 01A2:207C
cs=0x1a2;eip=0x00207d; 	T(MOV(ax, 5));	// 3663 mov     ax, 5 ;~ 01A2:207D
cs=0x1a2;eip=0x002080; 	X(PUSH(ax));	// 3664 push    ax ;~ 01A2:2080
cs=0x1a2;eip=0x002081; 	T(SUB(ax, ax));	// 3665 sub     ax, ax ;~ 01A2:2081
cs=0x1a2;eip=0x002083; 	X(PUSH(ax));	// 3666 push    ax ;~ 01A2:2083
cs=0x1a2;eip=0x002084; 	X(PUSH(ax));	// 3667 push    ax ;~ 01A2:2084
cs=0x1a2;eip=0x002085; 	R(CALLF(draw_button,0));	// 3668 call    draw_button ;~ 01A2:2085
cs=0x1a2;eip=0x00208a; 	T(ADD(sp, 0x14));	// 3669 add     sp, 14h ;~ 01A2:208A
cs=0x1a2;eip=0x00208d; 	T(SUB(ax, ax));	// 3670 sub     ax, ax ;~ 01A2:208D
cs=0x1a2;eip=0x00208f; 	X(PUSH(ax));	// 3671 push    ax ;~ 01A2:208F
cs=0x1a2;eip=0x002090; 	X(PUSH(word_407f8));	// 3672 push    word_407F8 ;~ 01A2:2090
cs=0x1a2;eip=0x002094; 	X(PUSH(word_407f6));	// 3673 push    word_407F6 ;~ 01A2:2094
cs=0x1a2;eip=0x002098; 	X(PUSH(word_407f4));	// 3674 push    word_407F4 ;~ 01A2:2098
cs=0x1a2;eip=0x00209c; 	T(MOV(ax, 0x55));	// 3675 mov     ax, 55h ; 'U' ;~ 01A2:209C
cs=0x1a2;eip=0x00209f; 	X(PUSH(ax));	// 3676 push    ax ;~ 01A2:209F
cs=0x1a2;eip=0x0020a0; 	T(MOV(ax, 0x8C));	// 3677 mov     ax, 8Ch ; 'Œ' ;~ 01A2:20A0
cs=0x1a2;eip=0x0020a3; 	X(PUSH(ax));	// 3678 push    ax ;~ 01A2:20A3
cs=0x1a2;eip=0x0020a4; 	T(MOV(ax, 0x6D));	// 3679 mov     ax, 6Dh ; 'm' ;~ 01A2:20A4
cs=0x1a2;eip=0x0020a7; 	X(PUSH(ax));	// 3680 push    ax ;~ 01A2:20A7
cs=0x1a2;eip=0x0020a8; 	T(MOV(ax, 0x52));	// 3681 mov     ax, 52h ; 'R' ;~ 01A2:20A8
cs=0x1a2;eip=0x0020ab; 	X(PUSH(ax));	// 3682 push    ax ;~ 01A2:20AB
cs=0x1a2;eip=0x0020ac; 	T(SUB(ax, ax));	// 3683 sub     ax, ax ;~ 01A2:20AC
cs=0x1a2;eip=0x0020ae; 	X(PUSH(ax));	// 3684 push    ax ;~ 01A2:20AE
cs=0x1a2;eip=0x0020af; 	X(PUSH(ax));	// 3685 push    ax ;~ 01A2:20AF
cs=0x1a2;eip=0x0020b0; 	R(CALLF(draw_button,0));	// 3686 call    draw_button ;~ 01A2:20B0
cs=0x1a2;eip=0x0020b5; 	T(ADD(sp, 0x14));	// 3687 add     sp, 14h ;~ 01A2:20B5
cs=0x1a2;eip=0x0020b8; 	T(MOV(ax, offset(dseg,agrap)));	// 3688 mov     ax, offset aGrap ; "grap" ;~ 01A2:20B8
cs=0x1a2;eip=0x0020bb; 	X(PUSH(ax));	// 3689 push    ax ;~ 01A2:20BB
cs=0x1a2;eip=0x0020bc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_34))));	// 3690 push    [bp+var_34] ;~ 01A2:20BC
cs=0x1a2;eip=0x0020bf; 	X(PUSH(*(dw*)(raddr(ss,bp+var_36))));	// 3691 push    [bp+var_36] ;~ 01A2:20BF
cs=0x1a2;eip=0x0020c2; 	R(CALLF(locate_shape_fatal,0));	// 3692 call    locate_shape_fatal ;~ 01A2:20C2
cs=0x1a2;eip=0x0020c7; 	T(ADD(sp, 6));	// 3693 add     sp, 6 ;~ 01A2:20C7
cs=0x1a2;eip=0x0020ca; 	X(PUSH(dx));	// 3694 push    dx ;~ 01A2:20CA
cs=0x1a2;eip=0x0020cb; 	X(PUSH(ax));	// 3695 push    ax ;~ 01A2:20CB
cs=0x1a2;eip=0x0020cc; 	R(CALLF(sprite_shape_to_1_alt,0));	// 3696 call    sprite_shape_to_1_alt ;~ 01A2:20CC
cs=0x1a2;eip=0x0020d1; 	T(ADD(sp, 4));	// 3697 add     sp, 4 ;~ 01A2:20D1
cs=0x1a2;eip=0x0020d4; 	X(PUSH(word_44d24));	// 3698 push    word_44D24 ;~ 01A2:20D4
cs=0x1a2;eip=0x0020d8; 	X(PUSH(fontnptr));	// 3699 push    fontnptr ;~ 01A2:20D8
cs=0x1a2;eip=0x0020dc; 	R(CALLF(font_set_fontdef2,0));	// 3700 call    font_set_fontdef2 ;~ 01A2:20DC
cs=0x1a2;eip=0x0020e1; 	T(ADD(sp, 4));	// 3701 add     sp, 4 ;~ 01A2:20E1
cs=0x1a2;eip=0x0020e4; 	X(PUSH(dialog_fnt_colour));	// 3702 push    dialog_fnt_colour ; the graph ;~ 01A2:20E4
cs=0x1a2;eip=0x0020e8; 	T(SUB(ax, ax));	// 3703 sub     ax, ax ;~ 01A2:20E8
cs=0x1a2;eip=0x0020ea; 	X(PUSH(ax));	// 3704 push    ax ;~ 01A2:20EA
cs=0x1a2;eip=0x0020eb; 	R(CALLF(font_set_unk,0));	// 3705 call    font_set_unk ;~ 01A2:20EB
cs=0x1a2;eip=0x0020f0; 	T(ADD(sp, 4));	// 3706 add     sp, 4 ;~ 01A2:20F0
cs=0x1a2;eip=0x0020f3; 	T(MOV(ax, 0x73));	// 3707 mov     ax, 73h ; 's' ;~ 01A2:20F3
cs=0x1a2;eip=0x0020f6; 	X(PUSH(ax));	// 3708 push    ax ;~ 01A2:20F6
cs=0x1a2;eip=0x0020f7; 	T(MOV(ax, 9));	// 3709 mov     ax, 9 ;~ 01A2:20F7
cs=0x1a2;eip=0x0020fa; 	X(PUSH(ax));	// 3710 push    ax ;~ 01A2:20FA
cs=0x1a2;eip=0x0020fb; 	T(MOV(ax, offset(dseg,a150)));	// 3711 mov     ax, offset a150 ; "150" ;~ 01A2:20FB
cs=0x1a2;eip=0x0020fe; 	X(PUSH(ax));	// 3712 push    ax ;~ 01A2:20FE
cs=0x1a2;eip=0x0020ff; 	R(CALLF(font_draw_text,0));	// 3713 call    font_draw_text ;~ 01A2:20FF
cs=0x1a2;eip=0x002104; 	T(ADD(sp, 6));	// 3714 add     sp, 6 ;~ 01A2:2104
cs=0x1a2;eip=0x002107; 	T(MOV(ax, 0x87));	// 3715 mov     ax, 87h ; '‡' ;~ 01A2:2107
cs=0x1a2;eip=0x00210a; 	X(PUSH(ax));	// 3716 push    ax ;~ 01A2:210A
cs=0x1a2;eip=0x00210b; 	T(MOV(ax, 9));	// 3717 mov     ax, 9 ;~ 01A2:210B
cs=0x1a2;eip=0x00210e; 	X(PUSH(ax));	// 3718 push    ax ;~ 01A2:210E
cs=0x1a2;eip=0x00210f; 	T(MOV(ax, offset(dseg,a100)));	// 3719 mov     ax, offset a100 ; "100" ;~ 01A2:210F
cs=0x1a2;eip=0x002112; 	X(PUSH(ax));	// 3720 push    ax ;~ 01A2:2112
cs=0x1a2;eip=0x002113; 	R(CALLF(font_draw_text,0));	// 3721 call    font_draw_text ;~ 01A2:2113
cs=0x1a2;eip=0x002118; 	T(ADD(sp, 6));	// 3722 add     sp, 6 ;~ 01A2:2118
cs=0x1a2;eip=0x00211b; 	T(MOV(ax, 0x9B));	// 3723 mov     ax, 9Bh ; '›' ;~ 01A2:211B
cs=0x1a2;eip=0x00211e; 	X(PUSH(ax));	// 3724 push    ax ;~ 01A2:211E
cs=0x1a2;eip=0x00211f; 	T(MOV(ax, 9));	// 3725 mov     ax, 9 ;~ 01A2:211F
cs=0x1a2;eip=0x002122; 	X(PUSH(ax));	// 3726 push    ax ;~ 01A2:2122
cs=0x1a2;eip=0x002123; 	T(MOV(ax, offset(dseg,a50)));	// 3727 mov     ax, offset a50  ; " 50" ;~ 01A2:2123
cs=0x1a2;eip=0x002126; 	X(PUSH(ax));	// 3728 push    ax ;~ 01A2:2126
cs=0x1a2;eip=0x002127; 	R(CALLF(font_draw_text,0));	// 3729 call    font_draw_text ;~ 01A2:2127
cs=0x1a2;eip=0x00212c; 	T(ADD(sp, 6));	// 3730 add     sp, 6 ;~ 01A2:212C
cs=0x1a2;eip=0x00212f; 	T(MOV(ax, 0x0AF));	// 3731 mov     ax, 0AFh ; '¯' ;~ 01A2:212F
cs=0x1a2;eip=0x002132; 	X(PUSH(ax));	// 3732 push    ax ;~ 01A2:2132
cs=0x1a2;eip=0x002133; 	T(MOV(ax, 9));	// 3733 mov     ax, 9 ;~ 01A2:2133
cs=0x1a2;eip=0x002136; 	X(PUSH(ax));	// 3734 push    ax ;~ 01A2:2136
cs=0x1a2;eip=0x002137; 	T(MOV(ax, offset(dseg,a0)));	// 3735 mov     ax, offset a0   ; "  0" ;~ 01A2:2137
cs=0x1a2;eip=0x00213a; 	X(PUSH(ax));	// 3736 push    ax ;~ 01A2:213A
cs=0x1a2;eip=0x00213b; 	R(CALLF(font_draw_text,0));	// 3737 call    font_draw_text ;~ 01A2:213B
cs=0x1a2;eip=0x002140; 	T(ADD(sp, 6));	// 3738 add     sp, 6 ;~ 01A2:2140
cs=0x1a2;eip=0x002143; 	T(MOV(ax, 0x0B9));	// 3739 mov     ax, 0B9h ; '¹' ;~ 01A2:2143
cs=0x1a2;eip=0x002146; 	X(PUSH(ax));	// 3740 push    ax ;~ 01A2:2146
cs=0x1a2;eip=0x002147; 	T(MOV(ax, 0x1A));	// 3741 mov     ax, 1Ah ;~ 01A2:2147
cs=0x1a2;eip=0x00214a; 	X(PUSH(ax));	// 3742 push    ax ;~ 01A2:214A
cs=0x1a2;eip=0x00214b; 	T(MOV(ax, offset(dseg,a02040)));	// 3743 mov     ax, offset a02040 ; "0  20  40" ;~ 01A2:214B
cs=0x1a2;eip=0x00214e; 	X(PUSH(ax));	// 3744 push    ax ;~ 01A2:214E
cs=0x1a2;eip=0x00214f; 	R(CALLF(font_draw_text,0));	// 3745 call    font_draw_text ;~ 01A2:214F
cs=0x1a2;eip=0x002154; 	T(ADD(sp, 6));	// 3746 add     sp, 6 ;~ 01A2:2154
cs=0x1a2;eip=0x002157; 	R(CALLF(font_set_fontdef,0));	// 3747 call    font_set_fontdef ;~ 01A2:2157
cs=0x1a2;eip=0x00215c; 	T(SUB(ax, ax));	// 3748 sub     ax, ax ;~ 01A2:215C
cs=0x1a2;eip=0x00215e; 	X(PUSH(ax));	// 3749 push    ax ;~ 01A2:215E
cs=0x1a2;eip=0x00215f; 	X(PUSH(word_407f8));	// 3750 push    word_407F8 ;~ 01A2:215F
cs=0x1a2;eip=0x002163; 	X(PUSH(word_407f6));	// 3751 push    word_407F6 ;~ 01A2:2163
cs=0x1a2;eip=0x002167; 	X(PUSH(word_407f4));	// 3752 push    word_407F4 ;~ 01A2:2167
cs=0x1a2;eip=0x00216b; 	T(MOV(ax, 0x10));	// 3753 mov     ax, 10h ;~ 01A2:216B
cs=0x1a2;eip=0x00216e; 	X(PUSH(ax));	// 3754 push    ax ;~ 01A2:216E
cs=0x1a2;eip=0x00216f; 	T(MOV(ax, 0x56));	// 3755 mov     ax, 56h ; 'V' ;~ 01A2:216F
cs=0x1a2;eip=0x002172; 	X(PUSH(ax));	// 3756 push    ax ;~ 01A2:2172
cs=0x1a2;eip=0x002173; 	T(MOV(ax, *(carmenu_buttons_x1)));	// 3757 mov     ax, carmenu_buttons_x1 ;~ 01A2:2173
cs=0x1a2;eip=0x002176; 	T(INC(ax));	// 3758 inc     ax ;~ 01A2:2176
cs=0x1a2;eip=0x002177; 	X(PUSH(ax));	// 3759 push    ax ;~ 01A2:2177
cs=0x1a2;eip=0x002178; 	T(MOV(ax, *(carmenu_buttons_y1)));	// 3760 mov     ax, carmenu_buttons_y1 ;~ 01A2:2178
cs=0x1a2;eip=0x00217b; 	T(INC(ax));	// 3761 inc     ax ;~ 01A2:217B
cs=0x1a2;eip=0x00217c; 	X(PUSH(ax));	// 3762 push    ax ;~ 01A2:217C
cs=0x1a2;eip=0x00217d; 	T(MOV(ax, offset(dseg,abdo_0)));	// 3763 mov     ax, offset aBdo_0 ; "bdo" ;~ 01A2:217D
cs=0x1a2;eip=0x002180; 	X(PUSH(ax));	// 3764 push    ax ;~ 01A2:2180
cs=0x1a2;eip=0x002181; 	X(PUSH(word_455ce));	// 3765 push    word_455CE ;~ 01A2:2181
cs=0x1a2;eip=0x002185; 	X(PUSH(miscptr));	// 3766 push    miscptr ;~ 01A2:2185
cs=0x1a2;eip=0x002189; 	R(CALLF(locate_text_res,0));	// 3767 call    locate_text_res ;~ 01A2:2189
cs=0x1a2;eip=0x00218e; 	T(ADD(sp, 6));	// 3768 add     sp, 6 ;~ 01A2:218E
cs=0x1a2;eip=0x002191; 	X(PUSH(dx));	// 3769 push    dx ;~ 01A2:2191
cs=0x1a2;eip=0x002192; 	X(PUSH(ax));	// 3770 push    ax ;~ 01A2:2192
cs=0x1a2;eip=0x002193; 	R(CALLF(draw_button,0));	// 3771 call    draw_button ;~ 01A2:2193
cs=0x1a2;eip=0x002198; 	T(ADD(sp, 0x14));	// 3772 add     sp, 14h ;~ 01A2:2198
cs=0x1a2;eip=0x00219b; 	T(SUB(ax, ax));	// 3773 sub     ax, ax ;~ 01A2:219B
cs=0x1a2;eip=0x00219d; 	X(PUSH(ax));	// 3774 push    ax ;~ 01A2:219D
cs=0x1a2;eip=0x00219e; 	X(PUSH(word_407f8));	// 3775 push    word_407F8 ;~ 01A2:219E
cs=0x1a2;eip=0x0021a2; 	X(PUSH(word_407f6));	// 3776 push    word_407F6 ;~ 01A2:21A2
cs=0x1a2;eip=0x0021a6; 	X(PUSH(word_407f4));	// 3777 push    word_407F4 ;~ 01A2:21A6
cs=0x1a2;eip=0x0021aa; 	T(MOV(ax, 0x10));	// 3778 mov     ax, 10h ;~ 01A2:21AA
cs=0x1a2;eip=0x0021ad; 	X(PUSH(ax));	// 3779 push    ax ;~ 01A2:21AD
cs=0x1a2;eip=0x0021ae; 	T(MOV(ax, 0x56));	// 3780 mov     ax, 56h ; 'V' ;~ 01A2:21AE
cs=0x1a2;eip=0x0021b1; 	X(PUSH(ax));	// 3781 push    ax ;~ 01A2:21B1
cs=0x1a2;eip=0x0021b2; 	T(MOV(ax, *(dw*)(((db*)carmenu_buttons_x1)+2)));	// 3782 mov     ax, carmenu_buttons_x1+2 ;~ 01A2:21B2
cs=0x1a2;eip=0x0021b5; 	T(INC(ax));	// 3783 inc     ax ;~ 01A2:21B5
cs=0x1a2;eip=0x0021b6; 	X(PUSH(ax));	// 3784 push    ax ;~ 01A2:21B6
cs=0x1a2;eip=0x0021b7; 	T(MOV(ax, *(carmenu_buttons_y1)));	// 3785 mov     ax, carmenu_buttons_y1 ;~ 01A2:21B7
cs=0x1a2;eip=0x0021ba; 	T(INC(ax));	// 3786 inc     ax ;~ 01A2:21BA
cs=0x1a2;eip=0x0021bb; 	X(PUSH(ax));	// 3787 push    ax ;~ 01A2:21BB
cs=0x1a2;eip=0x0021bc; 	T(MOV(ax, offset(dseg,abnx_0)));	// 3788 mov     ax, offset aBnx_0 ; "bnx" ;~ 01A2:21BC
cs=0x1a2;eip=0x0021bf; 	X(PUSH(ax));	// 3789 push    ax ;~ 01A2:21BF
cs=0x1a2;eip=0x0021c0; 	X(PUSH(word_455ce));	// 3790 push    word_455CE ;~ 01A2:21C0
cs=0x1a2;eip=0x0021c4; 	X(PUSH(miscptr));	// 3791 push    miscptr ;~ 01A2:21C4
cs=0x1a2;eip=0x0021c8; 	R(CALLF(locate_text_res,0));	// 3792 call    locate_text_res ;~ 01A2:21C8
cs=0x1a2;eip=0x0021cd; 	T(ADD(sp, 6));	// 3793 add     sp, 6 ;~ 01A2:21CD
cs=0x1a2;eip=0x0021d0; 	X(PUSH(dx));	// 3794 push    dx ;~ 01A2:21D0
cs=0x1a2;eip=0x0021d1; 	X(PUSH(ax));	// 3795 push    ax ;~ 01A2:21D1
cs=0x1a2;eip=0x0021d2; 	R(CALLF(draw_button,0));	// 3796 call    draw_button ;~ 01A2:21D2
cs=0x1a2;eip=0x0021d7; 	T(ADD(sp, 0x14));	// 3797 add     sp, 14h ;~ 01A2:21D7
cs=0x1a2;eip=0x0021da; 	T(SUB(ax, ax));	// 3798 sub     ax, ax ;~ 01A2:21DA
cs=0x1a2;eip=0x0021dc; 	X(PUSH(ax));	// 3799 push    ax ;~ 01A2:21DC
cs=0x1a2;eip=0x0021dd; 	X(PUSH(word_407f8));	// 3800 push    word_407F8 ;~ 01A2:21DD
cs=0x1a2;eip=0x0021e1; 	X(PUSH(word_407f6));	// 3801 push    word_407F6 ;~ 01A2:21E1
cs=0x1a2;eip=0x0021e5; 	X(PUSH(word_407f4));	// 3802 push    word_407F4 ;~ 01A2:21E5
cs=0x1a2;eip=0x0021e9; 	T(MOV(ax, 0x10));	// 3803 mov     ax, 10h ;~ 01A2:21E9
cs=0x1a2;eip=0x0021ec; 	X(PUSH(ax));	// 3804 push    ax ;~ 01A2:21EC
cs=0x1a2;eip=0x0021ed; 	T(MOV(ax, 0x56));	// 3805 mov     ax, 56h ; 'V' ;~ 01A2:21ED
cs=0x1a2;eip=0x0021f0; 	X(PUSH(ax));	// 3806 push    ax ;~ 01A2:21F0
cs=0x1a2;eip=0x0021f1; 	T(MOV(ax, *(dw*)(((db*)carmenu_buttons_x1)+4)));	// 3807 mov     ax, carmenu_buttons_x1+4 ;~ 01A2:21F1
cs=0x1a2;eip=0x0021f4; 	T(INC(ax));	// 3808 inc     ax ;~ 01A2:21F4
cs=0x1a2;eip=0x0021f5; 	X(PUSH(ax));	// 3809 push    ax ;~ 01A2:21F5
cs=0x1a2;eip=0x0021f6; 	T(MOV(ax, *(carmenu_buttons_y1)));	// 3810 mov     ax, carmenu_buttons_y1 ;~ 01A2:21F6
cs=0x1a2;eip=0x0021f9; 	T(INC(ax));	// 3811 inc     ax ;~ 01A2:21F9
cs=0x1a2;eip=0x0021fa; 	X(PUSH(ax));	// 3812 push    ax ;~ 01A2:21FA
cs=0x1a2;eip=0x0021fb; 	T(MOV(ax, offset(dseg,abla_0)));	// 3813 mov     ax, offset aBla_0 ; "bla" ;~ 01A2:21FB
cs=0x1a2;eip=0x0021fe; 	X(PUSH(ax));	// 3814 push    ax ;~ 01A2:21FE
cs=0x1a2;eip=0x0021ff; 	X(PUSH(word_455ce));	// 3815 push    word_455CE ;~ 01A2:21FF
cs=0x1a2;eip=0x002203; 	X(PUSH(miscptr));	// 3816 push    miscptr ;~ 01A2:2203
cs=0x1a2;eip=0x002207; 	R(CALLF(locate_text_res,0));	// 3817 call    locate_text_res ;~ 01A2:2207
cs=0x1a2;eip=0x00220c; 	T(ADD(sp, 6));	// 3818 add     sp, 6 ;~ 01A2:220C
cs=0x1a2;eip=0x00220f; 	X(PUSH(dx));	// 3819 push    dx ;~ 01A2:220F
cs=0x1a2;eip=0x002210; 	X(PUSH(ax));	// 3820 push    ax ;~ 01A2:2210
cs=0x1a2;eip=0x002211; 	R(CALLF(draw_button,0));	// 3821 call    draw_button ;~ 01A2:2211
cs=0x1a2;eip=0x002216; 	T(ADD(sp, 0x14));	// 3822 add     sp, 14h ;~ 01A2:2216
cs=0x1a2;eip=0x002219; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 3823 mov     bx, [bp+arg_4] ;~ 01A2:2219
cs=0x1a2;eip=0x00221c; 	T(CMP(*(raddr(ds,bx)), 0));	// 3824 cmp     byte ptr [bx], 0 ;~ 01A2:221C
cs=0x1a2;eip=0x00221f; 	R(JZ(loc_12226));	// 3825 jz      short loc_12226 ;~ 01A2:221F
cs=0x1a2;eip=0x002221; 	T(MOV(ax, offset(dseg,abau)));	// 3826 mov     ax, offset aBau ; "bau" ;~ 01A2:2221
cs=0x1a2;eip=0x002224; 	R(JMP(loc_12229));	// 3827 jmp     short loc_12229 ;~ 01A2:2224
loc_12226:
	// 4522 
cs=0x1a2;eip=0x002226; 	T(MOV(ax, offset(dseg,abma)));	// 3831 mov     ax, offset aBma ; "bma" ;~ 01A2:2226
loc_12229:
	// 4523 
cs=0x1a2;eip=0x002229; 	X(PUSH(ax));	// 3834 push    ax ;~ 01A2:2229
cs=0x1a2;eip=0x00222a; 	X(PUSH(word_455ce));	// 3835 push    word_455CE ;~ 01A2:222A
cs=0x1a2;eip=0x00222e; 	X(PUSH(miscptr));	// 3836 push    miscptr ;~ 01A2:222E
cs=0x1a2;eip=0x002232; 	R(CALLF(locate_text_res,0));	// 3837 call    locate_text_res ;~ 01A2:2232
cs=0x1a2;eip=0x002237; 	T(ADD(sp, 6));	// 3838 add     sp, 6 ;~ 01A2:2237
cs=0x1a2;eip=0x00223a; 	X(MOV(*(dw*)(raddr(ss,bp+var_3c)), ax));	// 3839 mov     [bp+var_3C], ax ;~ 01A2:223A
cs=0x1a2;eip=0x00223d; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), dx));	// 3840 mov     [bp+var_3A], dx ;~ 01A2:223D
cs=0x1a2;eip=0x002240; 	T(SUB(ax, ax));	// 3841 sub     ax, ax ;~ 01A2:2240
cs=0x1a2;eip=0x002242; 	X(PUSH(ax));	// 3842 push    ax ;~ 01A2:2242
cs=0x1a2;eip=0x002243; 	X(PUSH(word_407f8));	// 3843 push    word_407F8 ;~ 01A2:2243
cs=0x1a2;eip=0x002247; 	X(PUSH(word_407f6));	// 3844 push    word_407F6 ;~ 01A2:2247
cs=0x1a2;eip=0x00224b; 	X(PUSH(word_407f4));	// 3845 push    word_407F4 ;~ 01A2:224B
cs=0x1a2;eip=0x00224f; 	T(MOV(ax, 0x10));	// 3846 mov     ax, 10h ;~ 01A2:224F
cs=0x1a2;eip=0x002252; 	X(PUSH(ax));	// 3847 push    ax ;~ 01A2:2252
cs=0x1a2;eip=0x002253; 	T(MOV(ax, 0x56));	// 3848 mov     ax, 56h ; 'V' ;~ 01A2:2253
cs=0x1a2;eip=0x002256; 	X(PUSH(ax));	// 3849 push    ax ;~ 01A2:2256
cs=0x1a2;eip=0x002257; 	T(MOV(ax, *(dw*)(((db*)carmenu_buttons_x1)+6)));	// 3850 mov     ax, carmenu_buttons_x1+6 ;~ 01A2:2257
cs=0x1a2;eip=0x00225a; 	T(INC(ax));	// 3851 inc     ax ;~ 01A2:225A
cs=0x1a2;eip=0x00225b; 	X(PUSH(ax));	// 3852 push    ax ;~ 01A2:225B
cs=0x1a2;eip=0x00225c; 	T(MOV(ax, *(carmenu_buttons_y1)));	// 3853 mov     ax, carmenu_buttons_y1 ;~ 01A2:225C
cs=0x1a2;eip=0x00225f; 	T(INC(ax));	// 3854 inc     ax ;~ 01A2:225F
cs=0x1a2;eip=0x002260; 	X(PUSH(ax));	// 3855 push    ax ;~ 01A2:2260
cs=0x1a2;eip=0x002261; 	X(PUSH(dx));	// 3856 push    dx ;~ 01A2:2261
cs=0x1a2;eip=0x002262; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3c))));	// 3857 push    [bp+var_3C] ;~ 01A2:2262
cs=0x1a2;eip=0x002265; 	R(CALLF(draw_button,0));	// 3858 call    draw_button ;~ 01A2:2265
cs=0x1a2;eip=0x00226a; 	T(ADD(sp, 0x14));	// 3859 add     sp, 14h ;~ 01A2:226A
cs=0x1a2;eip=0x00226d; 	T(SUB(ax, ax));	// 3860 sub     ax, ax ;~ 01A2:226D
cs=0x1a2;eip=0x00226f; 	X(PUSH(ax));	// 3861 push    ax ;~ 01A2:226F
cs=0x1a2;eip=0x002270; 	X(PUSH(word_407f8));	// 3862 push    word_407F8 ;~ 01A2:2270
cs=0x1a2;eip=0x002274; 	X(PUSH(word_407f6));	// 3863 push    word_407F6 ;~ 01A2:2274
cs=0x1a2;eip=0x002278; 	X(PUSH(word_407f4));	// 3864 push    word_407F4 ;~ 01A2:2278
cs=0x1a2;eip=0x00227c; 	T(MOV(ax, 0x10));	// 3865 mov     ax, 10h ;~ 01A2:227C
cs=0x1a2;eip=0x00227f; 	X(PUSH(ax));	// 3866 push    ax ;~ 01A2:227F
cs=0x1a2;eip=0x002280; 	T(MOV(ax, 0x56));	// 3867 mov     ax, 56h ; 'V' ;~ 01A2:2280
cs=0x1a2;eip=0x002283; 	X(PUSH(ax));	// 3868 push    ax ;~ 01A2:2283
cs=0x1a2;eip=0x002284; 	T(MOV(ax, *(dw*)(((db*)carmenu_buttons_x1)+8)));	// 3869 mov     ax, carmenu_buttons_x1+8 ;~ 01A2:2284
cs=0x1a2;eip=0x002287; 	T(INC(ax));	// 3870 inc     ax ;~ 01A2:2287
cs=0x1a2;eip=0x002288; 	X(PUSH(ax));	// 3871 push    ax ;~ 01A2:2288
cs=0x1a2;eip=0x002289; 	T(MOV(ax, *(carmenu_buttons_y1)));	// 3872 mov     ax, carmenu_buttons_y1 ;~ 01A2:2289
cs=0x1a2;eip=0x00228c; 	T(INC(ax));	// 3873 inc     ax ;~ 01A2:228C
cs=0x1a2;eip=0x00228d; 	X(PUSH(ax));	// 3874 push    ax ;~ 01A2:228D
cs=0x1a2;eip=0x00228e; 	T(MOV(ax, offset(dseg,abco)));	// 3875 mov     ax, offset aBco ; "bco" ;~ 01A2:228E
cs=0x1a2;eip=0x002291; 	X(PUSH(ax));	// 3876 push    ax ;~ 01A2:2291
cs=0x1a2;eip=0x002292; 	X(PUSH(word_455ce));	// 3877 push    word_455CE ;~ 01A2:2292
cs=0x1a2;eip=0x002296; 	X(PUSH(miscptr));	// 3878 push    miscptr ;~ 01A2:2296
cs=0x1a2;eip=0x00229a; 	R(CALLF(locate_text_res,0));	// 3879 call    locate_text_res ;~ 01A2:229A
cs=0x1a2;eip=0x00229f; 	T(ADD(sp, 6));	// 3880 add     sp, 6 ;~ 01A2:229F
cs=0x1a2;eip=0x0022a2; 	X(PUSH(dx));	// 3881 push    dx ;~ 01A2:22A2
cs=0x1a2;eip=0x0022a3; 	X(PUSH(ax));	// 3882 push    ax ;~ 01A2:22A3
cs=0x1a2;eip=0x0022a4; 	R(CALLF(draw_button,0));	// 3883 call    draw_button ;~ 01A2:22A4
cs=0x1a2;eip=0x0022a9; 	T(ADD(sp, 0x14));	// 3884 add     sp, 14h ;~ 01A2:22A9
cs=0x1a2;eip=0x0022ac; 	T(MOV(ax, framespersec));	// 3885 mov     ax, framespersec ;~ 01A2:22AC
cs=0x1a2;eip=0x0022af; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 3886 mov     [bp+var_12], ax ;~ 01A2:22AF
cs=0x1a2;eip=0x0022b2; 	X(MOV(framespersec, 0x14));	// 3887 mov     framespersec, 14h ;~ 01A2:22B2
cs=0x1a2;eip=0x0022b8; 	T(MOV(ax, 0x0FFFE));	// 3888 mov     ax, 0FFFEh ;~ 01A2:22B8
cs=0x1a2;eip=0x0022bb; 	X(PUSH(ax));	// 3889 push    ax ;~ 01A2:22BB
cs=0x1a2;eip=0x0022bc; 	R(CALLF(init_game_state,0));	// 3890 call    init_game_state ;~ 01A2:22BC
cs=0x1a2;eip=0x0022c1; 	T(ADD(sp, 2));	// 3891 add     sp, 2 ;~ 01A2:22C1
cs=0x1a2;eip=0x0022c4; 	X(MOV(byte_446b2, 1));	// 3892 mov     byte_446B2, 1 ;~ 01A2:22C4
cs=0x1a2;eip=0x0022c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_4a)), 0));	// 3893 mov     [bp+var_4A], 0 ;~ 01A2:22C9
loc_122ce:
	// 4524 
cs=0x1a2;eip=0x0022ce; 	T(MOV(ax, offset(dseg,simd_player)));	// 3896 mov     ax, offset simd_player ;~ 01A2:22CE
cs=0x1a2;eip=0x0022d1; 	X(PUSH(ax));	// 3897 push    ax ;~ 01A2:22D1
cs=0x1a2;eip=0x0022d2; 	T(MOV(ax, offset(dseg,word_445e6)));	// 3898 mov     ax, offset word_445E6 ;~ 01A2:22D2
cs=0x1a2;eip=0x0022d5; 	X(PUSH(ax));	// 3899 push    ax ;~ 01A2:22D5
cs=0x1a2;eip=0x0022d6; 	T(SUB(ax, ax));	// 3900 sub     ax, ax ;~ 01A2:22D6
cs=0x1a2;eip=0x0022d8; 	X(PUSH(ax));	// 3901 push    ax ;~ 01A2:22D8
cs=0x1a2;eip=0x0022d9; 	T(MOV(ax, 1));	// 3902 mov     ax, 1 ;~ 01A2:22D9
cs=0x1a2;eip=0x0022dc; 	X(PUSH(ax));	// 3903 push    ax ;~ 01A2:22DC
cs=0x1a2;eip=0x0022dd; 	R(CALLF(update_car_speed,0));	// 3904 call    update_car_speed ;~ 01A2:22DD
cs=0x1a2;eip=0x0022e2; 	T(ADD(sp, 8));	// 3905 add     sp, 8 ;~ 01A2:22E2
cs=0x1a2;eip=0x0022e5; 	T(MOV(ax, word_44610));	// 3906 mov     ax, word_44610 ;~ 01A2:22E5
cs=0x1a2;eip=0x0022e8; 	T(MOV(cl, 8));	// 3907 mov     cl, 8 ;~ 01A2:22E8
cs=0x1a2;eip=0x0022ea; 	T(SHR(ax, cl));	// 3908 shr     ax, cl ;~ 01A2:22EA
cs=0x1a2;eip=0x0022ec; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 3909 mov     [bp+var_8], ax ;~ 01A2:22EC
cs=0x1a2;eip=0x0022ef; 	T(MOV(ax, 0x96));	// 3910 mov     ax, 96h ; '–' ;~ 01A2:22EF
cs=0x1a2;eip=0x0022f2; 	T(CWD);	// 3911 cwd ;~ 01A2:22F2
cs=0x1a2;eip=0x0022f3; 	X(PUSH(dx));	// 3912 push    dx ;~ 01A2:22F3
cs=0x1a2;eip=0x0022f4; 	X(PUSH(ax));	// 3913 push    ax ;~ 01A2:22F4
cs=0x1a2;eip=0x0022f5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 3914 mov     ax, [bp+var_8] ;~ 01A2:22F5
cs=0x1a2;eip=0x0022f8; 	T(CWD);	// 3915 cwd ;~ 01A2:22F8
cs=0x1a2;eip=0x0022f9; 	T(MOV(cl, 6));	// 3916 mov     cl, 6 ;~ 01A2:22F9
loc_122fb:
	// 4525 
cs=0x1a2;eip=0x0022fb; 	T(SHL(ax, 1));	// 3919 shl     ax, 1 ;~ 01A2:22FB
cs=0x1a2;eip=0x0022fd; 	T(RCL(dx, 1));	// 3920 rcl     dx, 1 ;~ 01A2:22FD
cs=0x1a2;eip=0x0022ff; 	T(DEC(cl));	// 3921 dec     cl ;~ 01A2:22FF
cs=0x1a2;eip=0x002301; 	R(JNZ(loc_122fb));	// 3922 jnz     short loc_122FB ;~ 01A2:2301
cs=0x1a2;eip=0x002303; 	X(PUSH(dx));	// 3923 push    dx ;~ 01A2:2303
cs=0x1a2;eip=0x002304; 	X(PUSH(ax));	// 3924 push    ax ;~ 01A2:2304
cs=0x1a2;eip=0x002305; 	R(CALLF(__afuldiv,0));	// 3925 call    __aFuldiv ;~ 01A2:2305
cs=0x1a2;eip=0x00230a; 	T(SUB(ax, 0x0B5));	// 3926 sub     ax, 0B5h ; 'µ' ;~ 01A2:230A
cs=0x1a2;eip=0x00230d; 	T(NEG(ax));	// 3927 neg     ax ;~ 01A2:230D
cs=0x1a2;eip=0x00230f; 	X(MOV(*(dw*)(raddr(ss,bp+var_48)), ax));	// 3928 mov     [bp+var_48], ax ;~ 01A2:230F
cs=0x1a2;eip=0x002312; 	T(CMP(ax, 0x75));	// 3929 cmp     ax, 75h ; 'u' ;~ 01A2:2312
cs=0x1a2;eip=0x002315; 	R(JC(loc_12344));	// 3930 jb      short loc_12344 ;~ 01A2:2315
cs=0x1a2;eip=0x002317; 	T(MOV(ax, 0x26));	// 3931 mov     ax, 26h ; '&' ;~ 01A2:2317
cs=0x1a2;eip=0x00231a; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_4a))));	// 3932 imul    [bp+var_4A] ;~ 01A2:231A
cs=0x1a2;eip=0x00231d; 	T(SUB(dx, dx));	// 3933 sub     dx, dx ;~ 01A2:231D
cs=0x1a2;eip=0x00231f; 	T(MOV(cx, 0x320));	// 3934 mov     cx, 320h ;~ 01A2:231F
cs=0x1a2;eip=0x002322; 	T(DIV2(cx));	// 3935 div     cx ;~ 01A2:2322
cs=0x1a2;eip=0x002324; 	T(ADD(ax, 0x1C));	// 3936 add     ax, 1Ch ;~ 01A2:2324
cs=0x1a2;eip=0x002327; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 3937 mov     [bp+var_44], ax ;~ 01A2:2327
cs=0x1a2;eip=0x00232a; 	X(PUSH(performgraphcolor));	// 3938 push    performGraphColor ;~ 01A2:232A
cs=0x1a2;eip=0x00232e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_48))));	// 3939 push    [bp+var_48] ;~ 01A2:232E
cs=0x1a2;eip=0x002331; 	X(PUSH(ax));	// 3940 push    ax ;~ 01A2:2331
cs=0x1a2;eip=0x002332; 	R(CALLF(putpixel_single_maybe,0));	// 3941 call    putpixel_single_maybe ;~ 01A2:2332
cs=0x1a2;eip=0x002337; 	T(ADD(sp, 6));	// 3942 add     sp, 6 ;~ 01A2:2337
cs=0x1a2;eip=0x00233a; 	X(INC(*(dw*)(raddr(ss,bp+var_4a))));	// 3943 inc     [bp+var_4A] ;~ 01A2:233A
cs=0x1a2;eip=0x00233d; 	T(CMP(*(dw*)(raddr(ss,bp+var_4a)), 0x320));	// 3944 cmp     [bp+var_4A], 320h ;~ 01A2:233D
cs=0x1a2;eip=0x002342; 	R(JL(loc_122ce));	// 3945 jl      short loc_122CE ;~ 01A2:2342
loc_12344:
	// 4526 
cs=0x1a2;eip=0x002344; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 3948 mov     ax, [bp+var_12] ;~ 01A2:2344
cs=0x1a2;eip=0x002347; 	X(MOV(framespersec, ax));	// 3949 mov     framespersec, ax ;~ 01A2:2347
cs=0x1a2;eip=0x00234a; 	X(PUSH(word_44d24));	// 3950 push    word_44D24 ;~ 01A2:234A
cs=0x1a2;eip=0x00234e; 	X(PUSH(fontnptr));	// 3951 push    fontnptr ;~ 01A2:234E
cs=0x1a2;eip=0x002352; 	R(CALLF(font_set_fontdef2,0));	// 3952 call    font_set_fontdef2 ;~ 01A2:2352
cs=0x1a2;eip=0x002357; 	T(ADD(sp, 4));	// 3953 add     sp, 4 ;~ 01A2:2357
cs=0x1a2;eip=0x00235a; 	T(MOV(ax, offset(dseg,ades_1)));	// 3954 mov     ax, offset aDes_1 ; "des" ;~ 01A2:235A
cs=0x1a2;eip=0x00235d; 	X(PUSH(ax));	// 3955 push    ax ;~ 01A2:235D
cs=0x1a2;eip=0x00235e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 3956 push    [bp+var_2] ;~ 01A2:235E
cs=0x1a2;eip=0x002361; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 3957 push    [bp+var_4] ;~ 01A2:2361
cs=0x1a2;eip=0x002364; 	R(CALLF(locate_text_res,0));	// 3958 call    locate_text_res ;~ 01A2:2364
cs=0x1a2;eip=0x002369; 	T(ADD(sp, 6));	// 3959 add     sp, 6 ;~ 01A2:2369
cs=0x1a2;eip=0x00236c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_fc))), ax));	// 3960 mov     word ptr [bp+var_FC], ax ;~ 01A2:236C
cs=0x1a2;eip=0x002370; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_fc+2))), dx));	// 3961 mov     word ptr [bp+var_FC+2], dx ;~ 01A2:2370
cs=0x1a2;eip=0x002374; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), 0));	// 3962 mov     [bp+var_44], 0 ;~ 01A2:2374
cs=0x1a2;eip=0x002379; 	X(MOV(*(dw*)(raddr(ss,bp+var_48)), 0x74));	// 3963 mov     [bp+var_48], 74h ; 't' ;~ 01A2:2379
loc_1237e:
	// 4527 
cs=0x1a2;eip=0x00237e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_fc))));	// 3966 les     bx, [bp+var_FC] ;~ 01A2:237E
cs=0x1a2;eip=0x002382; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_fc)))));	// 3967 inc     word ptr [bp+var_FC] ;~ 01A2:2382
cs=0x1a2;eip=0x002386; 	T(MOV(al, *(raddr(es,bx))));	// 3968 mov     al, es:[bx] ;~ 01A2:2386
cs=0x1a2;eip=0x002389; 	X(MOV(*(raddr(ss,bp+var_1c)), al));	// 3969 mov     [bp+var_1C], al ;~ 01A2:2389
cs=0x1a2;eip=0x00238c; 	T(CMP(al, 0x5D));	// 3970 cmp     al, 5Dh ; ']' ;~ 01A2:238C
cs=0x1a2;eip=0x00238e; 	R(JNZ(loc_123be));	// 3971 jnz     short loc_123BE ;~ 01A2:238E
cs=0x1a2;eip=0x002390; 	T(CMP(*(dw*)(raddr(ss,bp+var_44)), 0));	// 3972 cmp     [bp+var_44], 0 ;~ 01A2:2390
cs=0x1a2;eip=0x002394; 	R(JZ(loc_123b1));	// 3973 jz      short loc_123B1 ;~ 01A2:2394
cs=0x1a2;eip=0x002396; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_44))));	// 3974 mov     bx, [bp+var_44] ;~ 01A2:2396
cs=0x1a2;eip=0x002399; 	X(MOV(*((&resid_byte1)+bx), 0));	// 3975 mov     resID_byte1[bx], 0 ;~ 01A2:2399
cs=0x1a2;eip=0x00239e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_48))));	// 3976 push    [bp+var_48] ;~ 01A2:239E
cs=0x1a2;eip=0x0023a1; 	T(MOV(ax, 0x58));	// 3977 mov     ax, 58h ; 'X' ;~ 01A2:23A1
cs=0x1a2;eip=0x0023a4; 	X(PUSH(ax));	// 3978 push    ax ;~ 01A2:23A4
cs=0x1a2;eip=0x0023a5; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 3979 mov     ax, offset resID_byte1 ;~ 01A2:23A5
cs=0x1a2;eip=0x0023a8; 	X(PUSH(ax));	// 3980 push    ax ;~ 01A2:23A8
cs=0x1a2;eip=0x0023a9; 	R(CALLF(font_draw_text,0));	// 3981 call    font_draw_text ;~ 01A2:23A9
cs=0x1a2;eip=0x0023ae; 	T(ADD(sp, 6));	// 3982 add     sp, 6 ;~ 01A2:23AE
loc_123b1:
	// 4528 
cs=0x1a2;eip=0x0023b1; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), 0));	// 3985 mov     [bp+var_44], 0 ;~ 01A2:23B1
cs=0x1a2;eip=0x0023b6; 	T(MOV(ax, fontdef_unk_0e));	// 3986 mov     ax, fontdef_unk_0E ;~ 01A2:23B6
cs=0x1a2;eip=0x0023b9; 	X(ADD(*(dw*)(raddr(ss,bp+var_48)), ax));	// 3987 add     [bp+var_48], ax ;~ 01A2:23B9
cs=0x1a2;eip=0x0023bc; 	R(JMP(loc_123cb));	// 3988 jmp     short loc_123CB ;~ 01A2:23BC
loc_123be:
	// 4529 
cs=0x1a2;eip=0x0023be; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_44))));	// 3992 mov     bx, [bp+var_44] ;~ 01A2:23BE
cs=0x1a2;eip=0x0023c1; 	X(INC(*(dw*)(raddr(ss,bp+var_44))));	// 3993 inc     [bp+var_44] ;~ 01A2:23C1
cs=0x1a2;eip=0x0023c4; 	T(MOV(al, *(raddr(ss,bp+var_1c))));	// 3994 mov     al, [bp+var_1C] ;~ 01A2:23C4
cs=0x1a2;eip=0x0023c7; 	X(MOV(*((&resid_byte1)+bx), al));	// 3995 mov     resID_byte1[bx], al ;~ 01A2:23C7
loc_123cb:
	// 4530 
cs=0x1a2;eip=0x0023cb; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_fc))));	// 3998 les     bx, [bp+var_FC] ;~ 01A2:23CB
cs=0x1a2;eip=0x0023cf; 	T(CMP(*(raddr(es,bx)), 0));	// 3999 cmp     byte ptr es:[bx], 0 ;~ 01A2:23CF
cs=0x1a2;eip=0x0023d3; 	R(JNZ(loc_1237e));	// 4000 jnz     short loc_1237E ;~ 01A2:23D3
cs=0x1a2;eip=0x0023d5; 	R(CALLF(font_set_fontdef,0));	// 4001 call    font_set_fontdef ;~ 01A2:23D5
cs=0x1a2;eip=0x0023da; 	R(CALLF(timer_get_delta_alt,0));	// 4002 call    timer_get_delta_alt ;~ 01A2:23DA
cs=0x1a2;eip=0x0023df; 	X(MOV(*(raddr(ss,bp+var_f2)), 0x0FF));	// 4003 mov     [bp+var_F2], 0FFh ;~ 01A2:23DF
cs=0x1a2;eip=0x0023e4; 	X(MOV(*(dw*)(raddr(ss,bp+var_104)), 0));	// 4004 mov     [bp+var_104], 0 ;~ 01A2:23E4
cs=0x1a2;eip=0x0023ea; 	X(MOV(*(dw*)(raddr(ss,bp+var_102)), 0x140));	// 4005 mov     [bp+var_102], 140h ;~ 01A2:23EA
cs=0x1a2;eip=0x0023f0; 	X(MOV(*(dw*)(raddr(ss,bp+var_100)), 0));	// 4006 mov     [bp+var_100], 0 ;~ 01A2:23F0
cs=0x1a2;eip=0x0023f6; 	X(MOV(*(dw*)(raddr(ss,bp+var_fe)), 0x0C8));	// 4007 mov     [bp+var_FE], 0C8h ; 'È' ;~ 01A2:23F6
cs=0x1a2;eip=0x0023fc; 	X(MOV(*(raddr(ss,bp+var_108)), 0));	// 4008 mov     [bp+var_108], 0 ;~ 01A2:23FC
cs=0x1a2;eip=0x002401; 	X(MOV(*(raddr(ss,bp+var_6)), 3));	// 4009 mov     [bp+var_6], 3 ;~ 01A2:2401
loc_12405:
	// 4531 
cs=0x1a2;eip=0x002405; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4c))));	// 4012 mov     ax, [bp+var_4C] ;~ 01A2:2405
cs=0x1a2;eip=0x002408; 	X(ADD(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 4013 add     [bp+var_1E], ax ;~ 01A2:2408
cs=0x1a2;eip=0x00240b; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 4014 mov     al, [bp+var_6] ;~ 01A2:240B
cs=0x1a2;eip=0x00240e; 	T(CBW);	// 4015 cbw ;~ 01A2:240E
cs=0x1a2;eip=0x00240f; 	T(OR(ax, ax));	// 4016 or      ax, ax ;~ 01A2:240F
cs=0x1a2;eip=0x002411; 	R(JZ(loc_12423));	// 4017 jz      short loc_12423 ;~ 01A2:2411
cs=0x1a2;eip=0x002413; 	T(CMP(ax, 1));	// 4018 cmp     ax, 1 ;~ 01A2:2413
cs=0x1a2;eip=0x002416; 	R(JNZ(loc_1241b));	// 4019 jnz     short loc_1241B ;~ 01A2:2416
cs=0x1a2;eip=0x002418; 	R(JMP(loc_125fe));	// 4020 jmp     loc_125FE ;~ 01A2:2418
loc_1241b:
	// 4532 
cs=0x1a2;eip=0x00241b; 	T(CMP(ax, 3));	// 4024 cmp     ax, 3 ;~ 01A2:241B
cs=0x1a2;eip=0x00241e; 	R(JZ(loc_12423));	// 4025 jz      short loc_12423 ;~ 01A2:241E
cs=0x1a2;eip=0x002420; 	R(JMP(loc_124de));	// 4026 jmp     loc_124DE ;~ 01A2:2420
loc_12423:
	// 4533 
cs=0x1a2;eip=0x002423; 	X(PUSH(word_3bb62));	// 4031 push    word_3BB62 ;~ 01A2:2423
cs=0x1a2;eip=0x002427; 	X(PUSH(word_3bb60));	// 4032 push    word_3BB60 ;~ 01A2:2427
cs=0x1a2;eip=0x00242b; 	R(CALLF(polarangle,0));	// 4033 call    polarAngle ;~ 01A2:242B
cs=0x1a2;eip=0x002430; 	T(ADD(sp, 4));	// 4034 add     sp, 4 ;~ 01A2:2430
cs=0x1a2;eip=0x002433; 	X(MOV(*(dw*)(raddr(ss,bp+var_f8)), ax));	// 4035 mov     [bp+var_F8], ax ;~ 01A2:2433
cs=0x1a2;eip=0x002437; 	T(CMP(timertestflag_copy, 0));	// 4036 cmp     timertestflag_copy, 0 ;~ 01A2:2437
cs=0x1a2;eip=0x00243c; 	R(JZ(loc_12448));	// 4037 jz      short loc_12448 ;~ 01A2:243C
cs=0x1a2;eip=0x00243e; 	X(PUSH(si));	// 4038 push    si ;~ 01A2:243E
cs=0x1a2;eip=0x00243f; 	T(di = bp+var_10);	// 4039 lea     di, [bp+var_10] ;~ 01A2:243F
cs=0x1a2;eip=0x002442; 	T(MOV(si, offset(dseg,cliprect_unk)));	// 4040 mov     si, offset cliprect_unk ;~ 01A2:2442
cs=0x1a2;eip=0x002445; 	R(JMP(loc_1244f));	// 4041 jmp     short loc_1244F ;~ 01A2:2445
loc_12448:
	// 4534 
cs=0x1a2;eip=0x002448; 	X(PUSH(si));	// 4046 push    si ;~ 01A2:2448
cs=0x1a2;eip=0x002449; 	T(di = bp+var_10);	// 4047 lea     di, [bp+var_10] ;~ 01A2:2449
cs=0x1a2;eip=0x00244c; 	T(MOV(si, offset(dseg,carmenu_cliprect)));	// 4048 mov     si, offset carmenu_cliprect ;~ 01A2:244C
loc_1244f:
	// 4535 
cs=0x1a2;eip=0x00244f; 	X(PUSH(ss));	// 4051 push    ss ;~ 01A2:244F
cs=0x1a2;eip=0x002450; 	X(POP(es));	// 4052 pop     es ;~ 01A2:2450
cs=0x1a2;eip=0x002451; 	X(MOVSW);	// 4053 movsw ;~ 01A2:2451
cs=0x1a2;eip=0x002452; 	X(MOVSW);	// 4054 movsw ;~ 01A2:2452
cs=0x1a2;eip=0x002453; 	X(MOVSW);	// 4055 movsw ;~ 01A2:2453
cs=0x1a2;eip=0x002454; 	X(MOVSW);	// 4056 movsw ;~ 01A2:2454
cs=0x1a2;eip=0x002455; 	X(POP(si));	// 4057 pop     si ;~ 01A2:2455
cs=0x1a2;eip=0x002456; 	T(SUB(ax, ax));	// 4058 sub     ax, ax ;~ 01A2:2456
cs=0x1a2;eip=0x002458; 	X(PUSH(ax));	// 4059 push    ax ;~ 01A2:2458
cs=0x1a2;eip=0x002459; 	T(MOV(ax, offset(dseg,carmenu_cliprect)));	// 4060 mov     ax, offset carmenu_cliprect ;~ 01A2:2459
cs=0x1a2;eip=0x00245c; 	X(PUSH(ax));	// 4061 push    ax ;~ 01A2:245C
cs=0x1a2;eip=0x00245d; 	T(SUB(ax, ax));	// 4062 sub     ax, ax ;~ 01A2:245D
cs=0x1a2;eip=0x00245f; 	X(PUSH(ax));	// 4063 push    ax ;~ 01A2:245F
cs=0x1a2;eip=0x002460; 	X(PUSH(*(dw*)(raddr(ss,bp+var_f8))));	// 4064 push    [bp+var_F8] ;~ 01A2:2460
cs=0x1a2;eip=0x002464; 	X(PUSH(ax));	// 4065 push    ax ;~ 01A2:2464
cs=0x1a2;eip=0x002465; 	R(CALLF(select_cliprect_rotate,0));	// 4066 call    select_cliprect_rotate ;~ 01A2:2465
cs=0x1a2;eip=0x00246a; 	T(ADD(sp, 0x0A));	// 4067 add     sp, 0Ah ;~ 01A2:246A
cs=0x1a2;eip=0x00246d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 4068 mov     bx, [bp+arg_2] ;~ 01A2:246D
cs=0x1a2;eip=0x002470; 	T(MOV(al, byte_4386c));	// 4069 mov     al, byte_4386C ;~ 01A2:2470
cs=0x1a2;eip=0x002473; 	T(CMP(*(raddr(ds,bx)), al));	// 4070 cmp     [bx], al ;~ 01A2:2473
cs=0x1a2;eip=0x002475; 	R(JL(loc_1247a));	// 4071 jl      short loc_1247A ;~ 01A2:2475
cs=0x1a2;eip=0x002477; 	X(MOV(*(raddr(ds,bx)), 0));	// 4072 mov     byte ptr [bx], 0 ;~ 01A2:2477
loc_1247a:
	// 4536 
cs=0x1a2;eip=0x00247a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 4075 mov     ax, [bp+var_1E] ;~ 01A2:247A
cs=0x1a2;eip=0x00247d; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 4076 mov     [bp+var_24], ax ;~ 01A2:247D
cs=0x1a2;eip=0x002480; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 4077 mov     bx, [bp+arg_2] ;~ 01A2:2480
cs=0x1a2;eip=0x002483; 	T(MOV(al, *(raddr(ds,bx))));	// 4078 mov     al, [bx] ;~ 01A2:2483
cs=0x1a2;eip=0x002485; 	X(MOV(*(raddr(ss,bp+var_1f)), al));	// 4079 mov     [bp+var_1F], al ;~ 01A2:2485
cs=0x1a2;eip=0x002488; 	T(ax = bp+var_32);	// 4080 lea     ax, [bp+var_32] ;~ 01A2:2488
cs=0x1a2;eip=0x00248b; 	X(PUSH(ax));	// 4081 push    ax ;~ 01A2:248B
cs=0x1a2;eip=0x00248c; 	R(CALLF(transformed_shape_op,0));	// 4082 call    transformed_shape_op ;~ 01A2:248C
cs=0x1a2;eip=0x002491; 	T(ADD(sp, 2));	// 4083 add     sp, 2 ;~ 01A2:2491
cs=0x1a2;eip=0x002494; 	T(MOV(al, *(raddr(ss,bp+var_38))));	// 4084 mov     al, [bp+var_38] ;~ 01A2:2494
cs=0x1a2;eip=0x002497; 	T(CMP(*(raddr(ss,bp+var_f0)), al));	// 4085 cmp     [bp+var_F0], al ;~ 01A2:2497
cs=0x1a2;eip=0x00249b; 	R(JNZ(loc_124a6));	// 4086 jnz     short loc_124A6 ;~ 01A2:249B
cs=0x1a2;eip=0x00249d; 	X(MOV(word_3bb5c, 0x5F));	// 4087 mov     word_3BB5C, 5Fh ; '_' ;~ 01A2:249D
cs=0x1a2;eip=0x0024a3; 	R(JMP(loc_124ac));	// 4088 jmp     short loc_124AC ;~ 01A2:24A3
loc_124a6:
	// 4537 
cs=0x1a2;eip=0x0024a6; 	X(MOV(word_3bb5c, 0x0C8));	// 4093 mov     word_3BB5C, 0C8h ; 'È' ;~ 01A2:24A6
loc_124ac:
	// 4538 
cs=0x1a2;eip=0x0024ac; 	T(MOV(ax, offset(dseg,unk_3bb56)));	// 4096 mov     ax, offset unk_3BB56 ;~ 01A2:24AC
cs=0x1a2;eip=0x0024af; 	X(PUSH(ax));	// 4097 push    ax ;~ 01A2:24AF
cs=0x1a2;eip=0x0024b0; 	T(ax = bp+var_10);	// 4098 lea     ax, [bp+var_10] ;~ 01A2:24B0
cs=0x1a2;eip=0x0024b3; 	X(PUSH(ax));	// 4099 push    ax ;~ 01A2:24B3
cs=0x1a2;eip=0x0024b4; 	R(CALLF(rect_intersect,0));	// 4100 call    rect_intersect ;~ 01A2:24B4
cs=0x1a2;eip=0x0024b9; 	T(ADD(sp, 4));	// 4101 add     sp, 4 ;~ 01A2:24B9
cs=0x1a2;eip=0x0024bc; 	T(ax = bp+var_1a);	// 4102 lea     ax, [bp+var_1A] ;~ 01A2:24BC
cs=0x1a2;eip=0x0024bf; 	X(PUSH(ax));	// 4103 push    ax ;~ 01A2:24BF
cs=0x1a2;eip=0x0024c0; 	T(ax = bp+var_104);	// 4104 lea     ax, [bp+var_104] ;~ 01A2:24C0
cs=0x1a2;eip=0x0024c4; 	X(PUSH(ax));	// 4105 push    ax ;~ 01A2:24C4
cs=0x1a2;eip=0x0024c5; 	T(ax = bp+var_10);	// 4106 lea     ax, [bp+var_10] ;~ 01A2:24C5
cs=0x1a2;eip=0x0024c8; 	X(PUSH(ax));	// 4107 push    ax ;~ 01A2:24C8
cs=0x1a2;eip=0x0024c9; 	R(CALLF(rect_union,0));	// 4108 call    rect_union ;~ 01A2:24C9
cs=0x1a2;eip=0x0024ce; 	T(ADD(sp, 6));	// 4109 add     sp, 6 ;~ 01A2:24CE
cs=0x1a2;eip=0x0024d1; 	T(CMP(*(raddr(ss,bp+var_6)), 3));	// 4110 cmp     [bp+var_6], 3 ;~ 01A2:24D1
cs=0x1a2;eip=0x0024d5; 	R(JNZ(loc_124da));	// 4111 jnz     short loc_124DA ;~ 01A2:24D5
cs=0x1a2;eip=0x0024d7; 	R(JMP(loc_125fe));	// 4112 jmp     loc_125FE ;~ 01A2:24D7
loc_124da:
	// 4539 
cs=0x1a2;eip=0x0024da; 	X(MOV(*(raddr(ss,bp+var_6)), 1));	// 4116 mov     [bp+var_6], 1 ;~ 01A2:24DA
loc_124de:
	// 4540 
cs=0x1a2;eip=0x0024de; 	T(MOV(al, *(raddr(ss,bp+var_f2))));	// 4120 mov     al, [bp+var_F2] ;~ 01A2:24DE
cs=0x1a2;eip=0x0024e2; 	T(CMP(*(raddr(ss,bp+var_106)), al));	// 4121 cmp     [bp+var_106], al ;~ 01A2:24E2
cs=0x1a2;eip=0x0024e6; 	R(JZ(loc_12541));	// 4122 jz      short loc_12541 ;~ 01A2:24E6
cs=0x1a2;eip=0x0024e8; 	T(CMP(al, 0x0FF));	// 4123 cmp     al, 0FFh ;~ 01A2:24E8
cs=0x1a2;eip=0x0024ea; 	R(JZ(loc_12534));	// 4124 jz      short loc_12534 ;~ 01A2:24EA
cs=0x1a2;eip=0x0024ec; 	R(CALLF(sprite_copy_2_to_1_2,0));	// 4125 call    sprite_copy_2_to_1_2 ;~ 01A2:24EC
cs=0x1a2;eip=0x0024f1; 	T(MOV(ax, *(dw*)(((db*)carmenu_buttons_x2)+8)));	// 4126 mov     ax, carmenu_buttons_x2+8 ;~ 01A2:24F1
cs=0x1a2;eip=0x0024f4; 	T(INC(ax));	// 4127 inc     ax ;~ 01A2:24F4
cs=0x1a2;eip=0x0024f5; 	X(PUSH(ax));	// 4128 push    ax ;~ 01A2:24F5
cs=0x1a2;eip=0x0024f6; 	X(PUSH(*(carmenu_buttons_x1)));	// 4129 push    carmenu_buttons_x1 ;~ 01A2:24F6
cs=0x1a2;eip=0x0024fa; 	T(MOV(ax, *(carmenu_buttons_y2)));	// 4130 mov     ax, carmenu_buttons_y2 ;~ 01A2:24FA
cs=0x1a2;eip=0x0024fd; 	T(ADD(ax, video_flag2_is1));	// 4131 add     ax, video_flag2_is1 ;~ 01A2:24FD
cs=0x1a2;eip=0x002501; 	T(AND(ax, video_flag3_isffff));	// 4132 and     ax, video_flag3_isFFFF ;~ 01A2:2501
cs=0x1a2;eip=0x002505; 	X(PUSH(ax));	// 4133 push    ax ;~ 01A2:2505
cs=0x1a2;eip=0x002506; 	X(PUSH(*(carmenu_buttons_y1)));	// 4134 push    carmenu_buttons_y1 ;~ 01A2:2506
cs=0x1a2;eip=0x00250a; 	R(CALLF(sprite_set_1_size,0));	// 4135 call    sprite_set_1_size ;~ 01A2:250A
cs=0x1a2;eip=0x00250f; 	T(ADD(sp, 8));	// 4136 add     sp, 8 ;~ 01A2:250F
cs=0x1a2;eip=0x002512; 	R(CALLF(mouse_draw_opaque_check,0));	// 4137 call    mouse_draw_opaque_check ;~ 01A2:2512
cs=0x1a2;eip=0x002517; 	T(LES(bx, wndsprite));	// 4138 les     bx, wndsprite ;~ 01A2:2517
cs=0x1a2;eip=0x00251b; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 4139 push    word ptr es:[bx+2] ;~ 01A2:251B
cs=0x1a2;eip=0x00251f; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 4140 push    word ptr es:[bx] ;~ 01A2:251F
cs=0x1a2;eip=0x002522; 	R(CALLF(sprite_putimage,0));	// 4141 call    sprite_putimage ;~ 01A2:2522
cs=0x1a2;eip=0x002527; 	T(ADD(sp, 4));	// 4142 add     sp, 4 ;~ 01A2:2527
cs=0x1a2;eip=0x00252a; 	R(CALLF(mouse_draw_transparent_check,0));	// 4143 call    mouse_draw_transparent_check ;~ 01A2:252A
cs=0x1a2;eip=0x00252f; 	R(CALLF(sprite_copy_2_to_1_2,0));	// 4144 call    sprite_copy_2_to_1_2 ;~ 01A2:252F
loc_12534:
	// 4541 
cs=0x1a2;eip=0x002534; 	R(CALLF(sub_29772,0));	// 4147 call    sub_29772 ;~ 01A2:2534
cs=0x1a2;eip=0x002539; 	T(MOV(al, *(raddr(ss,bp+var_106))));	// 4148 mov     al, [bp+var_106] ;~ 01A2:2539
cs=0x1a2;eip=0x00253d; 	X(MOV(*(raddr(ss,bp+var_f2)), al));	// 4149 mov     [bp+var_F2], al ;~ 01A2:253D
loc_12541:
	// 4542 
cs=0x1a2;eip=0x002541; 	R(CALLF(sprite_copy_2_to_1_2,0));	// 4152 call    sprite_copy_2_to_1_2 ;~ 01A2:2541
cs=0x1a2;eip=0x002546; 	X(PUSH(word_407d0));	// 4153 push    word_407D0 ;~ 01A2:2546
cs=0x1a2;eip=0x00254a; 	X(PUSH(word_407ce));	// 4154 push    word_407CE ;~ 01A2:254A
cs=0x1a2;eip=0x00254e; 	T(MOV(ax, offset(dseg,carmenu_buttons_x2)));	// 4155 mov     ax, offset carmenu_buttons_x2 ;~ 01A2:254E
cs=0x1a2;eip=0x002551; 	X(PUSH(ax));	// 4156 push    ax ;~ 01A2:2551
cs=0x1a2;eip=0x002552; 	T(MOV(ax, offset(dseg,carmenu_buttons_x1)));	// 4157 mov     ax, offset carmenu_buttons_x1 ;~ 01A2:2552
cs=0x1a2;eip=0x002555; 	X(PUSH(ax));	// 4158 push    ax ;~ 01A2:2555
cs=0x1a2;eip=0x002556; 	T(MOV(ax, offset(dseg,carmenu_buttons_y2)));	// 4159 mov     ax, offset carmenu_buttons_y2 ;~ 01A2:2556
cs=0x1a2;eip=0x002559; 	X(PUSH(ax));	// 4160 push    ax ;~ 01A2:2559
cs=0x1a2;eip=0x00255a; 	T(MOV(ax, offset(dseg,carmenu_buttons_y1)));	// 4161 mov     ax, offset carmenu_buttons_y1 ;~ 01A2:255A
cs=0x1a2;eip=0x00255d; 	X(PUSH(ax));	// 4162 push    ax ;~ 01A2:255D
cs=0x1a2;eip=0x00255e; 	T(MOV(al, *(raddr(ss,bp+var_106))));	// 4163 mov     al, [bp+var_106] ;~ 01A2:255E
cs=0x1a2;eip=0x002562; 	T(CBW);	// 4164 cbw ;~ 01A2:2562
cs=0x1a2;eip=0x002563; 	X(PUSH(ax));	// 4165 push    ax ;~ 01A2:2563
cs=0x1a2;eip=0x002564; 	R(CALLF(mouse_timer_sprite_unk,0));	// 4166 call    mouse_timer_sprite_unk ;~ 01A2:2564
cs=0x1a2;eip=0x002569; 	T(ADD(sp, 0x0E));	// 4167 add     sp, 0Eh ;~ 01A2:2569
cs=0x1a2;eip=0x00256c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4c)), ax));	// 4168 mov     [bp+var_4C], ax ;~ 01A2:256C
cs=0x1a2;eip=0x00256f; 	X(ADD(idle_counter, ax));	// 4169 add     idle_counter, ax ;~ 01A2:256F
cs=0x1a2;eip=0x002573; 	T(CMP(idle_counter, 0x2EE0));	// 4170 cmp     idle_counter, 2EE0h ;~ 01A2:2573
cs=0x1a2;eip=0x002579; 	R(JLE(loc_12585));	// 4171 jle     short loc_12585 ;~ 01A2:2579
cs=0x1a2;eip=0x00257b; 	X(MOV(idle_counter, 0));	// 4172 mov     idle_counter, 0 ;~ 01A2:257B
cs=0x1a2;eip=0x002581; 	X(INC(idle_expired));	// 4173 inc     idle_expired ;~ 01A2:2581
loc_12585:
	// 4543 
cs=0x1a2;eip=0x002585; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 4176 push    [bp+var_4C] ;~ 01A2:2585
cs=0x1a2;eip=0x002588; 	R(CALLF(input_checking,0));	// 4177 call    input_checking ;~ 01A2:2588
cs=0x1a2;eip=0x00258d; 	T(ADD(sp, 2));	// 4178 add     sp, 2 ;~ 01A2:258D
cs=0x1a2;eip=0x002590; 	T(MOV(si, ax));	// 4179 mov     si, ax ;~ 01A2:2590
cs=0x1a2;eip=0x002592; 	T(MOV(ax, offset(dseg,carmenu_buttons_x2)));	// 4180 mov     ax, offset carmenu_buttons_x2 ;~ 01A2:2592
cs=0x1a2;eip=0x002595; 	X(PUSH(ax));	// 4181 push    ax ;~ 01A2:2595
cs=0x1a2;eip=0x002596; 	T(MOV(ax, offset(dseg,carmenu_buttons_x1)));	// 4182 mov     ax, offset carmenu_buttons_x1 ;~ 01A2:2596
cs=0x1a2;eip=0x002599; 	X(PUSH(ax));	// 4183 push    ax ;~ 01A2:2599
cs=0x1a2;eip=0x00259a; 	T(MOV(ax, offset(dseg,carmenu_buttons_y2)));	// 4184 mov     ax, offset carmenu_buttons_y2 ;~ 01A2:259A
cs=0x1a2;eip=0x00259d; 	X(PUSH(ax));	// 4185 push    ax ;~ 01A2:259D
cs=0x1a2;eip=0x00259e; 	T(MOV(ax, offset(dseg,carmenu_buttons_y1)));	// 4186 mov     ax, offset carmenu_buttons_y1 ;~ 01A2:259E
cs=0x1a2;eip=0x0025a1; 	X(PUSH(ax));	// 4187 push    ax ;~ 01A2:25A1
cs=0x1a2;eip=0x0025a2; 	T(MOV(ax, 5));	// 4188 mov     ax, 5 ;~ 01A2:25A2
cs=0x1a2;eip=0x0025a5; 	X(PUSH(ax));	// 4189 push    ax ;~ 01A2:25A5
cs=0x1a2;eip=0x0025a6; 	R(CALLF(mouse_multi_hittest,0));	// 4190 call    mouse_multi_hittest ;~ 01A2:25A6
cs=0x1a2;eip=0x0025ab; 	T(ADD(sp, 0x0A));	// 4191 add     sp, 0Ah ;~ 01A2:25AB
cs=0x1a2;eip=0x0025ae; 	X(MOV(*(raddr(ss,bp+var_f6)), al));	// 4192 mov     [bp+var_F6], al ;~ 01A2:25AE
cs=0x1a2;eip=0x0025b2; 	T(CMP(al, 0x0FF));	// 4193 cmp     al, 0FFh ;~ 01A2:25B2
cs=0x1a2;eip=0x0025b4; 	R(JZ(loc_125ba));	// 4194 jz      short loc_125BA ;~ 01A2:25B4
cs=0x1a2;eip=0x0025b6; 	X(MOV(*(raddr(ss,bp+var_106)), al));	// 4195 mov     [bp+var_106], al ;~ 01A2:25B6
loc_125ba:
	// 4544 
cs=0x1a2;eip=0x0025ba; 	T(CMP(idle_expired, 0));	// 4198 cmp     idle_expired, 0 ;~ 01A2:25BA
cs=0x1a2;eip=0x0025bf; 	R(JZ(loc_125c9));	// 4199 jz      short loc_125C9 ;~ 01A2:25BF
cs=0x1a2;eip=0x0025c1; 	X(MOV(*(raddr(ss,bp+var_106)), 0));	// 4200 mov     [bp+var_106], 0 ;~ 01A2:25C1
cs=0x1a2;eip=0x0025c6; 	T(MOV(si, 0x0D));	// 4201 mov     si, 0Dh ;~ 01A2:25C6
loc_125c9:
	// 4545 
cs=0x1a2;eip=0x0025c9; 	T(OR(si, si));	// 4204 or      si, si ;~ 01A2:25C9
cs=0x1a2;eip=0x0025cb; 	R(JNZ(loc_125d0));	// 4205 jnz     short loc_125D0 ;~ 01A2:25CB
cs=0x1a2;eip=0x0025cd; 	R(JMP(loc_11fa5));	// 4206 jmp     loc_11FA5 ;~ 01A2:25CD
loc_125d0:
	// 4546 
cs=0x1a2;eip=0x0025d0; 	T(MOV(ax, si));	// 4210 mov     ax, si ;~ 01A2:25D0
cs=0x1a2;eip=0x0025d2; 	T(CMP(ax, 0x0D));	// 4211 cmp     ax, 0Dh ;~ 01A2:25D2
cs=0x1a2;eip=0x0025d5; 	R(JNZ(loc_125da));	// 4212 jnz     short loc_125DA ;~ 01A2:25D5
cs=0x1a2;eip=0x0025d7; 	R(JMP(loc_12732));	// 4213 jmp     loc_12732 ;~ 01A2:25D7
loc_125da:
	// 4547 
cs=0x1a2;eip=0x0025da; 	T(CMP(ax, 0x1B));	// 4217 cmp     ax, 1Bh ;~ 01A2:25DA
cs=0x1a2;eip=0x0025dd; 	R(JNZ(loc_125e2));	// 4218 jnz     short loc_125E2 ;~ 01A2:25DD
cs=0x1a2;eip=0x0025df; 	R(JMP(loc_12732));	// 4219 jmp     loc_12732 ;~ 01A2:25DF
loc_125e2:
	// 4548 
cs=0x1a2;eip=0x0025e2; 	T(CMP(ax, 0x20));	// 4223 cmp     ax, 20h ; ' ' ;~ 01A2:25E2
cs=0x1a2;eip=0x0025e5; 	R(JNZ(loc_125ea));	// 4224 jnz     short loc_125EA ;~ 01A2:25E5
cs=0x1a2;eip=0x0025e7; 	R(JMP(loc_12732));	// 4225 jmp     loc_12732 ;~ 01A2:25E7
loc_125ea:
	// 4549 
cs=0x1a2;eip=0x0025ea; 	T(CMP(ax, 0x4800));	// 4229 cmp     ax, 4800h ;~ 01A2:25EA
cs=0x1a2;eip=0x0025ed; 	R(JNZ(loc_125f2));	// 4230 jnz     short loc_125F2 ;~ 01A2:25ED
cs=0x1a2;eip=0x0025ef; 	R(JMP(loc_12910));	// 4231 jmp     loc_12910 ;~ 01A2:25EF
loc_125f2:
	// 4550 
cs=0x1a2;eip=0x0025f2; 	T(CMP(ax, 0x5000));	// 4235 cmp     ax, 5000h ;~ 01A2:25F2
cs=0x1a2;eip=0x0025f5; 	R(JNZ(loc_125fa));	// 4236 jnz     short loc_125FA ;~ 01A2:25F5
cs=0x1a2;eip=0x0025f7; 	R(JMP(loc_12926));	// 4237 jmp     loc_12926 ;~ 01A2:25F7
loc_125fa:
	// 4551 
cs=0x1a2;eip=0x0025fa; 	R(JMP(loc_11fa5));	// 4241 jmp     loc_11FA5 ;~ 01A2:25FA
loc_125fe:
	// 4552 
cs=0x1a2;eip=0x0025fe; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 4247 mov     [bp+var_6], 0 ;~ 01A2:25FE
cs=0x1a2;eip=0x002602; 	X(MOV(*(raddr(ss,bp+var_108)), 1));	// 4248 mov     [bp+var_108], 1 ;~ 01A2:2602
cs=0x1a2;eip=0x002607; 	R(CALLF(sprite_copy_wnd_to_1,0));	// 4249 call    sprite_copy_wnd_to_1 ;~ 01A2:2607
cs=0x1a2;eip=0x00260c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 4250 push    [bp+var_14] ;~ 01A2:260C
cs=0x1a2;eip=0x00260f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 4251 push    [bp+var_16] ;~ 01A2:260F
cs=0x1a2;eip=0x002612; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 4252 push    [bp+var_18] ;~ 01A2:2612
cs=0x1a2;eip=0x002615; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 4253 push    [bp+var_1A] ;~ 01A2:2615
cs=0x1a2;eip=0x002618; 	R(CALLF(sprite_set_1_size,0));	// 4254 call    sprite_set_1_size ;~ 01A2:2618
cs=0x1a2;eip=0x00261d; 	T(ADD(sp, 8));	// 4255 add     sp, 8 ;~ 01A2:261D
cs=0x1a2;eip=0x002620; 	T(MOV(ax, offset(dseg,astop_1)));	// 4256 mov     ax, offset aStop_1 ; "stop" ;~ 01A2:2620
cs=0x1a2;eip=0x002623; 	X(PUSH(ax));	// 4257 push    ax ;~ 01A2:2623
cs=0x1a2;eip=0x002624; 	X(PUSH(*(dw*)(raddr(ss,bp+var_34))));	// 4258 push    [bp+var_34] ;~ 01A2:2624
cs=0x1a2;eip=0x002627; 	X(PUSH(*(dw*)(raddr(ss,bp+var_36))));	// 4259 push    [bp+var_36] ;~ 01A2:2627
cs=0x1a2;eip=0x00262a; 	R(CALLF(locate_shape_fatal,0));	// 4260 call    locate_shape_fatal ;~ 01A2:262A
cs=0x1a2;eip=0x00262f; 	T(ADD(sp, 6));	// 4261 add     sp, 6 ;~ 01A2:262F
cs=0x1a2;eip=0x002632; 	X(PUSH(dx));	// 4262 push    dx ;~ 01A2:2632
cs=0x1a2;eip=0x002633; 	X(PUSH(ax));	// 4263 push    ax ;~ 01A2:2633
cs=0x1a2;eip=0x002634; 	R(CALLF(sprite_putimage,0));	// 4264 call    sprite_putimage ;~ 01A2:2634
cs=0x1a2;eip=0x002639; 	T(ADD(sp, 4));	// 4265 add     sp, 4 ;~ 01A2:2639
cs=0x1a2;eip=0x00263c; 	R(CALLF(get_a_poly_info,0));	// 4266 call    get_a_poly_info ;~ 01A2:263C
cs=0x1a2;eip=0x002641; 	R(CALLF(sprite_copy_wnd_to_1,0));	// 4267 call    sprite_copy_wnd_to_1 ;~ 01A2:2641
cs=0x1a2;eip=0x002646; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 4268 push    [bp+var_14] ;~ 01A2:2646
cs=0x1a2;eip=0x002649; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 4269 push    [bp+var_16] ;~ 01A2:2649
cs=0x1a2;eip=0x00264c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 4270 push    [bp+var_18] ;~ 01A2:264C
cs=0x1a2;eip=0x00264f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 4271 push    [bp+var_1A] ;~ 01A2:264F
cs=0x1a2;eip=0x002652; 	R(CALLF(sprite_set_1_size,0));	// 4272 call    sprite_set_1_size ;~ 01A2:2652
cs=0x1a2;eip=0x002657; 	T(ADD(sp, 8));	// 4273 add     sp, 8 ;~ 01A2:2657
cs=0x1a2;eip=0x00265a; 	X(PUSH(si));	// 4274 push    si ;~ 01A2:265A
cs=0x1a2;eip=0x00265b; 	T(di = bp+var_104);	// 4275 lea     di, [bp+var_104] ;~ 01A2:265B
cs=0x1a2;eip=0x00265f; 	T(si = bp+var_10);	// 4276 lea     si, [bp+var_10] ;~ 01A2:265F
cs=0x1a2;eip=0x002662; 	X(PUSH(ss));	// 4277 push    ss ;~ 01A2:2662
cs=0x1a2;eip=0x002663; 	X(POP(es));	// 4278 pop     es ;~ 01A2:2663
cs=0x1a2;eip=0x002664; 	X(MOVSW);	// 4279 movsw ;~ 01A2:2664
cs=0x1a2;eip=0x002665; 	X(MOVSW);	// 4280 movsw ;~ 01A2:2665
cs=0x1a2;eip=0x002666; 	X(MOVSW);	// 4281 movsw ;~ 01A2:2666
cs=0x1a2;eip=0x002667; 	X(MOVSW);	// 4282 movsw ;~ 01A2:2667
cs=0x1a2;eip=0x002668; 	X(POP(si));	// 4283 pop     si ;~ 01A2:2668
cs=0x1a2;eip=0x002669; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0));	// 4284 cmp     [bp+arg_6], 0 ;~ 01A2:2669
cs=0x1a2;eip=0x00266d; 	R(JZ(loc_126d1));	// 4285 jz      short loc_126D1 ;~ 01A2:266D
cs=0x1a2;eip=0x00266f; 	T(MOV(al, *(raddr(ss,bp+var_38))));	// 4286 mov     al, [bp+var_38] ;~ 01A2:266F
cs=0x1a2;eip=0x002672; 	T(CMP(*(raddr(ss,bp+var_f0)), al));	// 4287 cmp     [bp+var_F0], al ;~ 01A2:2672
cs=0x1a2;eip=0x002676; 	R(JZ(loc_126d1));	// 4288 jz      short loc_126D1 ;~ 01A2:2676
cs=0x1a2;eip=0x002678; 	R(CALLF(sprite_copy_wnd_to_1,0));	// 4289 call    sprite_copy_wnd_to_1 ;~ 01A2:2678
cs=0x1a2;eip=0x00267d; 	T(CMP(video_flag5_is0, 0));	// 4290 cmp     video_flag5_is0, 0 ;~ 01A2:267D
cs=0x1a2;eip=0x002682; 	R(JNZ(loc_126b8));	// 4291 jnz     short loc_126B8 ;~ 01A2:2682
cs=0x1a2;eip=0x002684; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_6))));	// 4292 mov     al, byte ptr [bp+arg_6] ;~ 01A2:2684
cs=0x1a2;eip=0x002687; 	T(ADD(al, 0x30));	// 4293 add     al, 30h ; '0' ;~ 01A2:2687
cs=0x1a2;eip=0x002689; 	T(CBW);	// 4294 cbw ;~ 01A2:2689
cs=0x1a2;eip=0x00268a; 	X(PUSH(ax));	// 4295 push    ax ;~ 01A2:268A
cs=0x1a2;eip=0x00268b; 	X(PUSH(word_44a02));	// 4296 push    word_44A02 ;~ 01A2:268B
cs=0x1a2;eip=0x00268f; 	X(PUSH(opp_res));	// 4297 push    opp_res ;~ 01A2:268F
cs=0x1a2;eip=0x002693; 	R(CALLF(nullsub_2,0));	// 4298 call    nullsub_2 ;~ 01A2:2693
cs=0x1a2;eip=0x002698; 	T(ADD(sp, 6));	// 4299 add     sp, 6 ;~ 01A2:2698
cs=0x1a2;eip=0x00269b; 	T(SUB(ax, ax));	// 4300 sub     ax, ax ;~ 01A2:269B
cs=0x1a2;eip=0x00269d; 	X(PUSH(ax));	// 4301 push    ax ;~ 01A2:269D
cs=0x1a2;eip=0x00269e; 	T(MOV(ax, 0x0F0));	// 4302 mov     ax, 0F0h ; 'ð' ;~ 01A2:269E
cs=0x1a2;eip=0x0026a1; 	X(PUSH(ax));	// 4303 push    ax              ; __int16 ;~ 01A2:26A1
cs=0x1a2;eip=0x0026a2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 4304 mov     bx, [bp+arg_6] ;~ 01A2:26A2
cs=0x1a2;eip=0x0026a5; 	T(SHL(bx, 1));	// 4305 shl     bx, 1 ;~ 01A2:26A5
cs=0x1a2;eip=0x0026a7; 	T(SHL(bx, 1));	// 4306 shl     bx, 1 ;~ 01A2:26A7
cs=0x1a2;eip=0x0026a9; 	X(PUSH(*(dw*)((((db*)&oppresources)+2)+bx)));	// 4307 push    word ptr (oppresources+2)[bx] ;~ 01A2:26A9
cs=0x1a2;eip=0x0026ad; 	X(PUSH(*(dw*)(((db*)&oppresources)+bx)));	// 4308 push    word ptr oppresources[bx] ; shapeptr ;~ 01A2:26AD
cs=0x1a2;eip=0x0026b1; 	R(CALLF(sprite_putimage_transparent,0));	// 4309 call    sprite_putimage_transparent ;~ 01A2:26B1
cs=0x1a2;eip=0x0026b6; 	R(JMP(loc_126ce));	// 4310 jmp     short loc_126CE ;~ 01A2:26B6
loc_126b8:
	// 4553 
cs=0x1a2;eip=0x0026b8; 	T(SUB(ax, ax));	// 4314 sub     ax, ax ;~ 01A2:26B8
cs=0x1a2;eip=0x0026ba; 	X(PUSH(ax));	// 4315 push    ax ;~ 01A2:26BA
cs=0x1a2;eip=0x0026bb; 	T(MOV(ax, 0x0F0));	// 4316 mov     ax, 0F0h ; 'ð' ;~ 01A2:26BB
cs=0x1a2;eip=0x0026be; 	X(PUSH(ax));	// 4317 push    ax ;~ 01A2:26BE
cs=0x1a2;eip=0x0026bf; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_42))));	// 4318 les     bx, [bp+var_42] ;~ 01A2:26BF
cs=0x1a2;eip=0x0026c2; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 4319 push    word ptr es:[bx+2] ;~ 01A2:26C2
cs=0x1a2;eip=0x0026c6; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 4320 push    word ptr es:[bx] ;~ 01A2:26C6
cs=0x1a2;eip=0x0026c9; 	R(CALLF(sprite_putimage_and_alt,0));	// 4321 call    sprite_putimage_and_alt ;~ 01A2:26C9
loc_126ce:
	// 4554 
cs=0x1a2;eip=0x0026ce; 	T(ADD(sp, 8));	// 4324 add     sp, 8 ;~ 01A2:26CE
loc_126d1:
	// 4555 
cs=0x1a2;eip=0x0026d1; 	R(CALLF(sprite_copy_2_to_1_2,0));	// 4328 call    sprite_copy_2_to_1_2 ;~ 01A2:26D1
cs=0x1a2;eip=0x0026d6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 4329 push    [bp+var_14] ;~ 01A2:26D6
cs=0x1a2;eip=0x0026d9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 4330 push    [bp+var_16] ;~ 01A2:26D9
cs=0x1a2;eip=0x0026dc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 4331 push    [bp+var_18] ;~ 01A2:26DC
cs=0x1a2;eip=0x0026df; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 4332 push    [bp+var_1A] ;~ 01A2:26DF
cs=0x1a2;eip=0x0026e2; 	R(CALLF(sprite_set_1_size,0));	// 4333 call    sprite_set_1_size ;~ 01A2:26E2
cs=0x1a2;eip=0x0026e7; 	T(ADD(sp, 8));	// 4334 add     sp, 8 ;~ 01A2:26E7
cs=0x1a2;eip=0x0026ea; 	R(CALLF(mouse_draw_opaque_check,0));	// 4335 call    mouse_draw_opaque_check ;~ 01A2:26EA
cs=0x1a2;eip=0x0026ef; 	T(CMP(*(raddr(ss,bp+var_3e)), 0x0FE));	// 4336 cmp     [bp+var_3E], 0FEh ; 'þ' ;~ 01A2:26EF
cs=0x1a2;eip=0x0026f3; 	R(JZ(loc_12710));	// 4337 jz      short loc_12710 ;~ 01A2:26F3
cs=0x1a2;eip=0x0026f5; 	T(MOV(al, *(raddr(ss,bp+var_3e))));	// 4338 mov     al, [bp+var_3E] ;~ 01A2:26F5
cs=0x1a2;eip=0x0026f8; 	T(CBW);	// 4339 cbw ;~ 01A2:26F8
cs=0x1a2;eip=0x0026f9; 	X(PUSH(ax));	// 4340 push    ax ;~ 01A2:26F9
cs=0x1a2;eip=0x0026fa; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 4341 push    word ptr wndsprite+2 ;~ 01A2:26FA
cs=0x1a2;eip=0x0026fe; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 4342 push    word ptr wndsprite ;~ 01A2:26FE
cs=0x1a2;eip=0x002702; 	R(CALLF(sprite_blit_to_video,0));	// 4343 call    sprite_blit_to_video ;~ 01A2:2702
cs=0x1a2;eip=0x002707; 	T(ADD(sp, 6));	// 4344 add     sp, 6 ;~ 01A2:2707
cs=0x1a2;eip=0x00270a; 	X(MOV(*(raddr(ss,bp+var_3e)), 0x0FE));	// 4345 mov     [bp+var_3E], 0FEh ; 'þ' ;~ 01A2:270A
cs=0x1a2;eip=0x00270e; 	R(JMP(loc_12723));	// 4346 jmp     short loc_12723 ;~ 01A2:270E
loc_12710:
	// 4556 
cs=0x1a2;eip=0x002710; 	T(LES(bx, wndsprite));	// 4350 les     bx, wndsprite ;~ 01A2:2710
cs=0x1a2;eip=0x002714; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 4351 push    word ptr es:[bx+2] ;~ 01A2:2714
cs=0x1a2;eip=0x002718; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 4352 push    word ptr es:[bx] ;~ 01A2:2718
cs=0x1a2;eip=0x00271b; 	R(CALLF(sprite_putimage,0));	// 4353 call    sprite_putimage ;~ 01A2:271B
cs=0x1a2;eip=0x002720; 	T(ADD(sp, 4));	// 4354 add     sp, 4 ;~ 01A2:2720
loc_12723:
	// 4557 
cs=0x1a2;eip=0x002723; 	R(CALLF(mouse_draw_transparent_check,0));	// 4357 call    mouse_draw_transparent_check ;~ 01A2:2723
cs=0x1a2;eip=0x002728; 	T(MOV(al, *(raddr(ss,bp+var_f0))));	// 4358 mov     al, [bp+var_F0] ;~ 01A2:2728
cs=0x1a2;eip=0x00272c; 	X(MOV(*(raddr(ss,bp+var_38)), al));	// 4359 mov     [bp+var_38], al ;~ 01A2:272C
cs=0x1a2;eip=0x00272f; 	R(JMP(loc_124de));	// 4360 jmp     loc_124DE ;~ 01A2:272F
loc_12732:
	// 4558 
cs=0x1a2;eip=0x002732; 	T(MOV(al, *(raddr(ss,bp+var_106))));	// 4365 mov     al, [bp+var_106] ;~ 01A2:2732
cs=0x1a2;eip=0x002736; 	T(CBW);	// 4366 cbw ;~ 01A2:2736
cs=0x1a2;eip=0x002737; 	T(OR(ax, ax));	// 4367 or      ax, ax ;~ 01A2:2737
cs=0x1a2;eip=0x002739; 	R(JZ(_menu_done));	// 4368 jz      short _menu_done ;~ 01A2:2739
cs=0x1a2;eip=0x00273b; 	T(CMP(ax, 1));	// 4369 cmp     ax, 1 ;~ 01A2:273B
cs=0x1a2;eip=0x00273e; 	R(JNZ(loc_12743));	// 4370 jnz     short loc_12743 ;~ 01A2:273E
cs=0x1a2;eip=0x002740; 	R(JMP(_menu_nextcar));	// 4371 jmp     _menu_nextcar ;~ 01A2:2740
loc_12743:
	// 4559 
cs=0x1a2;eip=0x002743; 	T(CMP(ax, 2));	// 4375 cmp     ax, 2 ;~ 01A2:2743
cs=0x1a2;eip=0x002746; 	R(JNZ(loc_1274b));	// 4376 jnz     short loc_1274B ;~ 01A2:2746
cs=0x1a2;eip=0x002748; 	R(JMP(_menu_prevcar));	// 4377 jmp     _menu_prevcar ;~ 01A2:2748
loc_1274b:
	// 4560 
cs=0x1a2;eip=0x00274b; 	T(CMP(ax, 3));	// 4381 cmp     ax, 3 ;~ 01A2:274B
cs=0x1a2;eip=0x00274e; 	R(JNZ(loc_12753));	// 4382 jnz     short loc_12753 ;~ 01A2:274E
cs=0x1a2;eip=0x002750; 	R(JMP(_menu_transmission));	// 4383 jmp     _menu_transmission ;~ 01A2:2750
loc_12753:
	// 4561 
cs=0x1a2;eip=0x002753; 	T(CMP(ax, 4));	// 4387 cmp     ax, 4 ;~ 01A2:2753
cs=0x1a2;eip=0x002756; 	R(JNZ(loc_1275b));	// 4388 jnz     short loc_1275B ;~ 01A2:2756
cs=0x1a2;eip=0x002758; 	R(JMP(_menu_color));	// 4389 jmp     _menu_color ;~ 01A2:2758
loc_1275b:
	// 4562 
cs=0x1a2;eip=0x00275b; 	R(JMP(loc_11fa5));	// 4393 jmp     loc_11FA5 ;~ 01A2:275B
_menu_done:
	// 4563 
cs=0x1a2;eip=0x00275e; 	T(CMP(*(raddr(ss,bp+var_108)), 0));	// 4397 cmp     [bp+var_108], 0 ;~ 01A2:275E
cs=0x1a2;eip=0x002763; 	R(JNZ(loc_12768));	// 4398 jnz     short loc_12768 ;~ 01A2:2763
cs=0x1a2;eip=0x002765; 	R(JMP(loc_11fa5));	// 4399 jmp     loc_11FA5 ;~ 01A2:2765
loc_12768:
	// 4564 
cs=0x1a2;eip=0x002768; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 4403 push    word ptr wndsprite+2 ;~ 01A2:2768
cs=0x1a2;eip=0x00276c; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 4404 push    word ptr wndsprite ;~ 01A2:276C
cs=0x1a2;eip=0x002770; 	R(CALLF(sprite_free_wnd,0));	// 4405 call    sprite_free_wnd ;~ 01A2:2770
cs=0x1a2;eip=0x002775; 	T(ADD(sp, 4));	// 4406 add     sp, 4 ;~ 01A2:2775
cs=0x1a2;eip=0x002778; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 4407 push    [bp+var_2] ;~ 01A2:2778
cs=0x1a2;eip=0x00277b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 4408 push    [bp+var_4] ;~ 01A2:277B
cs=0x1a2;eip=0x00277e; 	R(CALLF(unload_resource,0));	// 4409 call    unload_resource ;~ 01A2:277E
cs=0x1a2;eip=0x002783; 	T(ADD(sp, 4));	// 4410 add     sp, 4 ;~ 01A2:2783
cs=0x1a2;eip=0x002786; 	R(CALLF(shape3d_free_car_shapes,0));	// 4411 call    shape3d_free_car_shapes ;~ 01A2:2786
cs=0x1a2;eip=0x00278b; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0));	// 4412 cmp     [bp+arg_6], 0 ;~ 01A2:278B
cs=0x1a2;eip=0x00278f; 	R(JZ(loc_127a6));	// 4413 jz      short loc_127A6 ;~ 01A2:278F
cs=0x1a2;eip=0x002791; 	T(CMP(video_flag5_is0, 0));	// 4414 cmp     video_flag5_is0, 0 ;~ 01A2:2791
cs=0x1a2;eip=0x002796; 	R(JZ(loc_127a6));	// 4415 jz      short loc_127A6 ;~ 01A2:2796
cs=0x1a2;eip=0x002798; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_42+2)))));	// 4416 push    word ptr [bp+var_42+2] ;~ 01A2:2798
cs=0x1a2;eip=0x00279b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_42)))));	// 4417 push    word ptr [bp+var_42] ;~ 01A2:279B
cs=0x1a2;eip=0x00279e; 	R(CALLF(sprite_free_wnd,0));	// 4418 call    sprite_free_wnd ;~ 01A2:279E
cs=0x1a2;eip=0x0027a3; 	T(ADD(sp, 4));	// 4419 add     sp, 4 ;~ 01A2:27A3
loc_127a6:
	// 4565 
cs=0x1a2;eip=0x0027a6; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0));	// 4423 cmp     [bp+arg_6], 0 ;~ 01A2:27A6
cs=0x1a2;eip=0x0027aa; 	R(JNZ(loc_127bc));	// 4424 jnz     short loc_127BC ;~ 01A2:27AA
cs=0x1a2;eip=0x0027ac; 	X(PUSH(word_455ce));	// 4425 push    word_455CE ;~ 01A2:27AC
cs=0x1a2;eip=0x0027b0; 	X(PUSH(miscptr));	// 4426 push    miscptr ;~ 01A2:27B0
cs=0x1a2;eip=0x0027b4; 	R(CALLF(unload_resource,0));	// 4427 call    unload_resource ;~ 01A2:27B4
cs=0x1a2;eip=0x0027b9; 	T(ADD(sp, 4));	// 4428 add     sp, 4 ;~ 01A2:27B9
loc_127bc:
	// 4566 
cs=0x1a2;eip=0x0027bc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_34))));	// 4431 push    [bp+var_34] ;~ 01A2:27BC
cs=0x1a2;eip=0x0027bf; 	X(PUSH(*(dw*)(raddr(ss,bp+var_36))));	// 4432 push    [bp+var_36] ;~ 01A2:27BF
cs=0x1a2;eip=0x0027c2; 	R(CALLF(mmgr_free,0));	// 4433 call    mmgr_free ;~ 01A2:27C2
cs=0x1a2;eip=0x0027c7; 	T(ADD(sp, 4));	// 4434 add     sp, 4 ;~ 01A2:27C7
cs=0x1a2;eip=0x0027ca; 	R(CALLF(mouse_draw_opaque_check,0));	// 4435 call    mouse_draw_opaque_check ;~ 01A2:27CA
cs=0x1a2;eip=0x0027cf; 	T(MOV(al, *(raddr(ss,bp+var_f0))));	// 4436 mov     al, [bp+var_F0] ;~ 01A2:27CF
cs=0x1a2;eip=0x0027d3; 	T(CBW);	// 4437 cbw ;~ 01A2:27D3
cs=0x1a2;eip=0x0027d4; 	T(MOV(di, ax));	// 4438 mov     di, ax ;~ 01A2:27D4
cs=0x1a2;eip=0x0027d6; 	T(SHL(di, 1));	// 4439 shl     di, 1 ;~ 01A2:27D6
cs=0x1a2;eip=0x0027d8; 	T(SHL(di, 1));	// 4440 shl     di, 1 ;~ 01A2:27D8
cs=0x1a2;eip=0x0027da; 	T(ADD(di, ax));	// 4441 add     di, ax ;~ 01A2:27DA
cs=0x1a2;eip=0x0027dc; 	T(MOV(al, *(raddr(ss,bp+di+var_ee))));	// 4442 mov     al, [bp+di+var_EE] ;~ 01A2:27DC
cs=0x1a2;eip=0x0027e0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 4443 mov     bx, [bp+arg_0] ;~ 01A2:27E0
cs=0x1a2;eip=0x0027e3; 	X(MOV(*(raddr(ds,bx)), al));	// 4444 mov     [bx], al ;~ 01A2:27E3
cs=0x1a2;eip=0x0027e5; 	T(MOV(al, *(raddr(ss,bp+var_f0))));	// 4445 mov     al, [bp+var_F0] ;~ 01A2:27E5
cs=0x1a2;eip=0x0027e9; 	T(CBW);	// 4446 cbw ;~ 01A2:27E9
cs=0x1a2;eip=0x0027ea; 	T(MOV(di, ax));	// 4447 mov     di, ax ;~ 01A2:27EA
cs=0x1a2;eip=0x0027ec; 	T(SHL(di, 1));	// 4448 shl     di, 1 ;~ 01A2:27EC
cs=0x1a2;eip=0x0027ee; 	T(SHL(di, 1));	// 4449 shl     di, 1 ;~ 01A2:27EE
cs=0x1a2;eip=0x0027f0; 	T(ADD(di, ax));	// 4450 add     di, ax ;~ 01A2:27F0
cs=0x1a2;eip=0x0027f2; 	T(MOV(al, *(raddr(ss,bp+di+var_ed))));	// 4451 mov     al, [bp+di+var_ED] ;~ 01A2:27F2
cs=0x1a2;eip=0x0027f6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 4452 mov     bx, [bp+arg_0] ;~ 01A2:27F6
cs=0x1a2;eip=0x0027f9; 	X(MOV(*(raddr(ds,bx+1)), al));	// 4453 mov     [bx+1], al ;~ 01A2:27F9
cs=0x1a2;eip=0x0027fc; 	T(MOV(al, *(raddr(ss,bp+var_f0))));	// 4454 mov     al, [bp+var_F0] ;~ 01A2:27FC
cs=0x1a2;eip=0x002800; 	T(CBW);	// 4455 cbw ;~ 01A2:2800
cs=0x1a2;eip=0x002801; 	T(MOV(di, ax));	// 4456 mov     di, ax ;~ 01A2:2801
cs=0x1a2;eip=0x002803; 	T(SHL(di, 1));	// 4457 shl     di, 1 ;~ 01A2:2803
cs=0x1a2;eip=0x002805; 	T(SHL(di, 1));	// 4458 shl     di, 1 ;~ 01A2:2805
cs=0x1a2;eip=0x002807; 	T(ADD(di, ax));	// 4459 add     di, ax ;~ 01A2:2807
cs=0x1a2;eip=0x002809; 	T(MOV(al, *(raddr(ss,bp+di+var_ec))));	// 4460 mov     al, [bp+di+var_EC] ;~ 01A2:2809
cs=0x1a2;eip=0x00280d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 4461 mov     bx, [bp+arg_0] ;~ 01A2:280D
cs=0x1a2;eip=0x002810; 	X(MOV(*(raddr(ds,bx+2)), al));	// 4462 mov     [bx+2], al ;~ 01A2:2810
cs=0x1a2;eip=0x002813; 	T(MOV(al, *(raddr(ss,bp+var_f0))));	// 4463 mov     al, [bp+var_F0] ;~ 01A2:2813
cs=0x1a2;eip=0x002817; 	T(CBW);	// 4464 cbw ;~ 01A2:2817
cs=0x1a2;eip=0x002818; 	T(MOV(di, ax));	// 4465 mov     di, ax ;~ 01A2:2818
cs=0x1a2;eip=0x00281a; 	T(SHL(di, 1));	// 4466 shl     di, 1 ;~ 01A2:281A
cs=0x1a2;eip=0x00281c; 	T(SHL(di, 1));	// 4467 shl     di, 1 ;~ 01A2:281C
cs=0x1a2;eip=0x00281e; 	T(ADD(di, ax));	// 4468 add     di, ax ;~ 01A2:281E
cs=0x1a2;eip=0x002820; 	T(MOV(al, *(raddr(ss,bp+di+var_eb))));	// 4469 mov     al, [bp+di+var_EB] ;~ 01A2:2820
cs=0x1a2;eip=0x002824; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 4470 mov     bx, [bp+arg_0] ;~ 01A2:2824
cs=0x1a2;eip=0x002827; 	X(MOV(*(raddr(ds,bx+3)), al));	// 4471 mov     [bx+3], al ;~ 01A2:2827
cs=0x1a2;eip=0x00282a; 	X(MOV(idle_expired, 0));	// 4472 mov     idle_expired, 0 ;~ 01A2:282A
cs=0x1a2;eip=0x00282f; 	X(POP(si));	// 4473 pop     si ;~ 01A2:282F
cs=0x1a2;eip=0x002830; 	X(POP(di));	// 4474 pop     di ;~ 01A2:2830
cs=0x1a2;eip=0x002831; 	T(MOV(sp, bp));	// 4475 mov     sp, bp ;~ 01A2:2831
cs=0x1a2;eip=0x002833; 	X(POP(bp));	// 4476 pop     bp ;~ 01A2:2833
cs=0x1a2;eip=0x002834; 	R(RETF(0));	// 4477 retf ;~ 01A2:2834
_menu_nextcar:
	// 4567 
cs=0x1a2;eip=0x002836; 	X(INC(*(raddr(ss,bp+var_f0))));	// 4482 inc     [bp+var_F0] ;~ 01A2:2836
cs=0x1a2;eip=0x00283a; 	T(MOV(al, *(raddr(ss,bp+var_46))));	// 4483 mov     al, [bp+var_46] ;~ 01A2:283A
cs=0x1a2;eip=0x00283d; 	T(CMP(*(raddr(ss,bp+var_f0)), al));	// 4484 cmp     [bp+var_F0], al ;~ 01A2:283D
cs=0x1a2;eip=0x002841; 	R(JZ(loc_12846));	// 4485 jz      short loc_12846 ;~ 01A2:2841
cs=0x1a2;eip=0x002843; 	R(JMP(loc_11fa5));	// 4486 jmp     loc_11FA5 ;~ 01A2:2843
loc_12846:
	// 4568 
cs=0x1a2;eip=0x002846; 	X(MOV(*(raddr(ss,bp+var_f0)), 0));	// 4490 mov     [bp+var_F0], 0 ;~ 01A2:2846
cs=0x1a2;eip=0x00284b; 	R(JMP(loc_11fa5));	// 4491 jmp     loc_11FA5 ;~ 01A2:284B
_menu_prevcar:
	// 4569 
cs=0x1a2;eip=0x00284e; 	X(DEC(*(raddr(ss,bp+var_f0))));	// 4495 dec     [bp+var_F0] ;~ 01A2:284E
cs=0x1a2;eip=0x002852; 	R(JS(loc_12857));	// 4496 js      short loc_12857 ;~ 01A2:2852
cs=0x1a2;eip=0x002854; 	R(JMP(loc_11fa5));	// 4497 jmp     loc_11FA5 ;~ 01A2:2854
loc_12857:
	// 4570 
cs=0x1a2;eip=0x002857; 	T(MOV(al, *(raddr(ss,bp+var_46))));	// 4501 mov     al, [bp+var_46] ;~ 01A2:2857
cs=0x1a2;eip=0x00285a; 	T(DEC(al));	// 4502 dec     al ;~ 01A2:285A
cs=0x1a2;eip=0x00285c; 	X(MOV(*(raddr(ss,bp+var_f0)), al));	// 4503 mov     [bp+var_F0], al ;~ 01A2:285C
cs=0x1a2;eip=0x002860; 	R(JMP(loc_11fa5));	// 4504 jmp     loc_11FA5 ;~ 01A2:2860
_menu_transmission:
	// 4571 
cs=0x1a2;eip=0x002864; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 4509 mov     bx, [bp+arg_4] ;~ 01A2:2864
cs=0x1a2;eip=0x002867; 	X(XOR(*(raddr(ds,bx)), 1));	// 4510 xor     byte ptr [bx], 1 ;~ 01A2:2867
cs=0x1a2;eip=0x00286a; 	R(CALLF(sprite_copy_wnd_to_1,0));	// 4511 call    sprite_copy_wnd_to_1 ;~ 01A2:286A
cs=0x1a2;eip=0x00286f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 4512 mov     bx, [bp+arg_4] ;~ 01A2:286F
cs=0x1a2;eip=0x002872; 	T(CMP(*(raddr(ds,bx)), 0));	// 4513 cmp     byte ptr [bx], 0 ;~ 01A2:2872
cs=0x1a2;eip=0x002875; 	R(JZ(loc_1287c));	// 4514 jz      short loc_1287C ;~ 01A2:2875
cs=0x1a2;eip=0x002877; 	T(MOV(ax, offset(dseg,abau_0)));	// 4515 mov     ax, offset aBau_0 ; "bau" ;~ 01A2:2877
cs=0x1a2;eip=0x00287a; 	R(JMP(loc_1287f));	// 4516 jmp     short loc_1287F ;~ 01A2:287A
loc_1287c:
	// 4572 
cs=0x1a2;eip=0x00287c; 	T(MOV(ax, offset(dseg,abma_0)));	// 4520 mov     ax, offset aBma_0 ; "bma" ;~ 01A2:287C
loc_1287f:
	// 4573 
cs=0x1a2;eip=0x00287f; 	X(PUSH(ax));	// 4523 push    ax ;~ 01A2:287F
cs=0x1a2;eip=0x002880; 	X(PUSH(word_455ce));	// 4524 push    word_455CE ;~ 01A2:2880
cs=0x1a2;eip=0x002884; 	X(PUSH(miscptr));	// 4525 push    miscptr ;~ 01A2:2884
cs=0x1a2;eip=0x002888; 	R(CALLF(locate_text_res,0));	// 4526 call    locate_text_res ;~ 01A2:2888
cs=0x1a2;eip=0x00288d; 	T(ADD(sp, 6));	// 4527 add     sp, 6 ;~ 01A2:288D
cs=0x1a2;eip=0x002890; 	X(MOV(*(dw*)(raddr(ss,bp+var_3c)), ax));	// 4528 mov     [bp+var_3C], ax ;~ 01A2:2890
cs=0x1a2;eip=0x002893; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), dx));	// 4529 mov     [bp+var_3A], dx ;~ 01A2:2893
cs=0x1a2;eip=0x002896; 	T(SUB(ax, ax));	// 4530 sub     ax, ax ;~ 01A2:2896
cs=0x1a2;eip=0x002898; 	X(PUSH(ax));	// 4531 push    ax ;~ 01A2:2898
cs=0x1a2;eip=0x002899; 	X(PUSH(word_407f8));	// 4532 push    word_407F8 ;~ 01A2:2899
cs=0x1a2;eip=0x00289d; 	X(PUSH(word_407f6));	// 4533 push    word_407F6 ;~ 01A2:289D
cs=0x1a2;eip=0x0028a1; 	X(PUSH(word_407f4));	// 4534 push    word_407F4 ;~ 01A2:28A1
cs=0x1a2;eip=0x0028a5; 	T(MOV(ax, 0x10));	// 4535 mov     ax, 10h ;~ 01A2:28A5
cs=0x1a2;eip=0x0028a8; 	X(PUSH(ax));	// 4536 push    ax ;~ 01A2:28A8
cs=0x1a2;eip=0x0028a9; 	T(MOV(ax, 0x56));	// 4537 mov     ax, 56h ; 'V' ;~ 01A2:28A9
cs=0x1a2;eip=0x0028ac; 	X(PUSH(ax));	// 4538 push    ax ;~ 01A2:28AC
cs=0x1a2;eip=0x0028ad; 	T(MOV(ax, *(dw*)(((db*)carmenu_buttons_x1)+6)));	// 4539 mov     ax, carmenu_buttons_x1+6 ;~ 01A2:28AD
cs=0x1a2;eip=0x0028b0; 	T(INC(ax));	// 4540 inc     ax ;~ 01A2:28B0
cs=0x1a2;eip=0x0028b1; 	X(PUSH(ax));	// 4541 push    ax ;~ 01A2:28B1
cs=0x1a2;eip=0x0028b2; 	T(MOV(ax, *(carmenu_buttons_y1)));	// 4542 mov     ax, carmenu_buttons_y1 ;~ 01A2:28B2
cs=0x1a2;eip=0x0028b5; 	T(INC(ax));	// 4543 inc     ax ;~ 01A2:28B5
cs=0x1a2;eip=0x0028b6; 	X(PUSH(ax));	// 4544 push    ax ;~ 01A2:28B6
cs=0x1a2;eip=0x0028b7; 	X(PUSH(dx));	// 4545 push    dx ;~ 01A2:28B7
cs=0x1a2;eip=0x0028b8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3c))));	// 4546 push    [bp+var_3C] ;~ 01A2:28B8
cs=0x1a2;eip=0x0028bb; 	R(CALLF(draw_button,0));	// 4547 call    draw_button ;~ 01A2:28BB
cs=0x1a2;eip=0x0028c0; 	T(ADD(sp, 0x14));	// 4548 add     sp, 14h ;~ 01A2:28C0
cs=0x1a2;eip=0x0028c3; 	R(CALLF(sprite_copy_2_to_1_2,0));	// 4549 call    sprite_copy_2_to_1_2 ;~ 01A2:28C3
cs=0x1a2;eip=0x0028c8; 	R(CALLF(mouse_draw_opaque_check,0));	// 4550 call    mouse_draw_opaque_check ;~ 01A2:28C8
cs=0x1a2;eip=0x0028cd; 	T(SUB(ax, ax));	// 4551 sub     ax, ax ;~ 01A2:28CD
cs=0x1a2;eip=0x0028cf; 	X(PUSH(ax));	// 4552 push    ax ;~ 01A2:28CF
cs=0x1a2;eip=0x0028d0; 	X(PUSH(word_407f8));	// 4553 push    word_407F8 ;~ 01A2:28D0
cs=0x1a2;eip=0x0028d4; 	X(PUSH(word_407f6));	// 4554 push    word_407F6 ;~ 01A2:28D4
cs=0x1a2;eip=0x0028d8; 	X(PUSH(word_407f4));	// 4555 push    word_407F4 ;~ 01A2:28D8
cs=0x1a2;eip=0x0028dc; 	T(MOV(ax, 0x10));	// 4556 mov     ax, 10h ;~ 01A2:28DC
cs=0x1a2;eip=0x0028df; 	X(PUSH(ax));	// 4557 push    ax ;~ 01A2:28DF
cs=0x1a2;eip=0x0028e0; 	T(MOV(ax, 0x56));	// 4558 mov     ax, 56h ; 'V' ;~ 01A2:28E0
cs=0x1a2;eip=0x0028e3; 	X(PUSH(ax));	// 4559 push    ax ;~ 01A2:28E3
cs=0x1a2;eip=0x0028e4; 	T(MOV(ax, *(dw*)(((db*)carmenu_buttons_x1)+6)));	// 4560 mov     ax, carmenu_buttons_x1+6 ;~ 01A2:28E4
cs=0x1a2;eip=0x0028e7; 	T(INC(ax));	// 4561 inc     ax ;~ 01A2:28E7
cs=0x1a2;eip=0x0028e8; 	X(PUSH(ax));	// 4562 push    ax ;~ 01A2:28E8
cs=0x1a2;eip=0x0028e9; 	T(MOV(ax, *(carmenu_buttons_y1)));	// 4563 mov     ax, carmenu_buttons_y1 ;~ 01A2:28E9
cs=0x1a2;eip=0x0028ec; 	T(INC(ax));	// 4564 inc     ax ;~ 01A2:28EC
cs=0x1a2;eip=0x0028ed; 	X(PUSH(ax));	// 4565 push    ax ;~ 01A2:28ED
cs=0x1a2;eip=0x0028ee; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 4566 push    [bp+var_3A] ;~ 01A2:28EE
cs=0x1a2;eip=0x0028f1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3c))));	// 4567 push    [bp+var_3C] ;~ 01A2:28F1
cs=0x1a2;eip=0x0028f4; 	R(CALLF(draw_button,0));	// 4568 call    draw_button ;~ 01A2:28F4
cs=0x1a2;eip=0x0028f9; 	T(ADD(sp, 0x14));	// 4569 add     sp, 14h ;~ 01A2:28F9
cs=0x1a2;eip=0x0028fc; 	R(CALLF(mouse_draw_transparent_check,0));	// 4570 call    mouse_draw_transparent_check ;~ 01A2:28FC
cs=0x1a2;eip=0x002901; 	R(JMP(loc_11fa5));	// 4571 jmp     loc_11FA5 ;~ 01A2:2901
_menu_color:
	// 4574 
cs=0x1a2;eip=0x002904; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 4575 mov     bx, [bp+arg_2] ;~ 01A2:2904
cs=0x1a2;eip=0x002907; 	X(INC(*(raddr(ds,bx))));	// 4576 inc     byte ptr [bx]   ; change color/material ;~ 01A2:2907
cs=0x1a2;eip=0x002909; 	X(MOV(*(raddr(ss,bp+var_6)), 3));	// 4577 mov     [bp+var_6], 3 ;~ 01A2:2909
cs=0x1a2;eip=0x00290d; 	R(JMP(loc_11fa5));	// 4578 jmp     loc_11FA5 ;~ 01A2:290D
loc_12910:
	// 4575 
cs=0x1a2;eip=0x002910; 	T(CMP(*(raddr(ss,bp+var_106)), 0));	// 4582 cmp     [bp+var_106], 0 ;~ 01A2:2910
cs=0x1a2;eip=0x002915; 	R(JZ(loc_1291e));	// 4583 jz      short loc_1291E ;~ 01A2:2915
cs=0x1a2;eip=0x002917; 	X(DEC(*(raddr(ss,bp+var_106))));	// 4584 dec     [bp+var_106] ;~ 01A2:2917
cs=0x1a2;eip=0x00291b; 	R(JMP(loc_11fa5));	// 4585 jmp     loc_11FA5 ;~ 01A2:291B
loc_1291e:
	// 4576 
cs=0x1a2;eip=0x00291e; 	X(MOV(*(raddr(ss,bp+var_106)), 4));	// 4589 mov     [bp+var_106], 4 ;~ 01A2:291E
cs=0x1a2;eip=0x002923; 	R(JMP(loc_11fa5));	// 4590 jmp     loc_11FA5 ;~ 01A2:2923
loc_12926:
	// 4577 
cs=0x1a2;eip=0x002926; 	T(CMP(*(raddr(ss,bp+var_106)), 4));	// 4594 cmp     [bp+var_106], 4 ;~ 01A2:2926
cs=0x1a2;eip=0x00292b; 	R(JGE(loc_12934));	// 4595 jge     short loc_12934 ;~ 01A2:292B
cs=0x1a2;eip=0x00292d; 	X(INC(*(raddr(ss,bp+var_106))));	// 4596 inc     [bp+var_106] ;~ 01A2:292D
cs=0x1a2;eip=0x002931; 	R(JMP(loc_11fa5));	// 4597 jmp     loc_11FA5 ;~ 01A2:2931
loc_12934:
	// 4578 
cs=0x1a2;eip=0x002934; 	X(MOV(*(raddr(ss,bp+var_106)), 0));	// 4601 mov     [bp+var_106], 0 ;~ 01A2:2934
cs=0x1a2;eip=0x002939; 	R(JMP(loc_11fa5));	// 4602 jmp     loc_11FA5 ;~ 01A2:2939
run_opponent_menu:
	// 4610 
#undef var_1e
#define var_1e -0x1E
	// 4612 var_1E          = byte ptr -1Eh ;~ 01A2:293C
#undef var_1c
#define var_1c -0x1C
	// 4613 var_1C          = byte ptr -1Ch ;~ 01A2:293C
#undef var_1a
#define var_1a -0x1A
	// 4614 var_1A          = dword ptr -1Ah ;~ 01A2:293C
#undef var_16
#define var_16 -0x16
	// 4615 var_16          = byte ptr -16h ;~ 01A2:293C
#undef var_14
#define var_14 -0x14
	// 4616 var_14          = byte ptr -14h ;~ 01A2:293C
#undef var_10
#define var_10 -0x10
	// 4617 var_10          = word ptr -10h ;~ 01A2:293C
#undef var_e
#define var_e -0x0E
	// 4618 var_E           = word ptr -0Eh ;~ 01A2:293C
#undef var_c
#define var_c -0x0C
	// 4619 var_C           = word ptr -0Ch ;~ 01A2:293C
#undef var_a
#define var_a -0x0A
	// 4620 var_A           = word ptr -0Ah ;~ 01A2:293C
#undef var_8
#define var_8 -8
	// 4621 var_8           = word ptr -8 ;~ 01A2:293C
#undef var_6
#define var_6 -6
	// 4622 var_6           = byte ptr -6 ;~ 01A2:293C
#undef var_4
#define var_4 -4
	// 4623 var_4           = byte ptr -4 ;~ 01A2:293C
#undef var_2
#define var_2 -2
	// 4624 var_2           = byte ptr -2 ;~ 01A2:293C
ret_1a2_293c:
	// 4579 
cs=0x1a2;eip=0x00293c; 	X(PUSH(bp));	// 4626 push    bp ;~ 01A2:293C
cs=0x1a2;eip=0x00293d; 	T(MOV(bp, sp));	// 4627 mov     bp, sp ;~ 01A2:293D
cs=0x1a2;eip=0x00293f; 	T(SUB(sp, 0x1E));	// 4628 sub     sp, 1Eh ;~ 01A2:293F
cs=0x1a2;eip=0x002942; 	X(PUSH(si));	// 4629 push    si              ; char * ;~ 01A2:2942
cs=0x1a2;eip=0x002943; 	T(MOV(ax, 4));	// 4630 mov     ax, 4 ;~ 01A2:2943
cs=0x1a2;eip=0x002946; 	X(PUSH(ax));	// 4631 push    ax ;~ 01A2:2946
cs=0x1a2;eip=0x002947; 	R(CALLF(ensure_file_exists,0));	// 4632 call    ensure_file_exists ;~ 01A2:2947
cs=0x1a2;eip=0x00294c; 	T(ADD(sp, 2));	// 4633 add     sp, 2 ;~ 01A2:294C
cs=0x1a2;eip=0x00294f; 	T(MOV(ax, offset(dseg,amisc)));	// 4634 mov     ax, offset aMisc ; "misc" ;~ 01A2:294F
cs=0x1a2;eip=0x002952; 	X(PUSH(ax));	// 4635 push    ax ;~ 01A2:2952
cs=0x1a2;eip=0x002953; 	R(CALLF(file_load_resfile,0));	// 4636 call    file_load_resfile ;~ 01A2:2953
cs=0x1a2;eip=0x002958; 	T(ADD(sp, 2));	// 4637 add     sp, 2 ;~ 01A2:2958
cs=0x1a2;eip=0x00295b; 	X(MOV(miscptr, ax));	// 4638 mov     miscptr, ax ;~ 01A2:295B
cs=0x1a2;eip=0x00295e; 	X(MOV(word_455ce, dx));	// 4639 mov     word_455CE, dx ;~ 01A2:295E
cs=0x1a2;eip=0x002962; 	T(MOV(ax, offset(dseg,asdosel)));	// 4640 mov     ax, offset aSdosel ; "sdosel" ;~ 01A2:2962
cs=0x1a2;eip=0x002965; 	X(PUSH(ax));	// 4641 push    ax              ; char * ;~ 01A2:2965
cs=0x1a2;eip=0x002966; 	T(MOV(ax, 8));	// 4642 mov     ax, 8 ;~ 01A2:2966
cs=0x1a2;eip=0x002969; 	X(PUSH(ax));	// 4643 push    ax              ; int ;~ 01A2:2969
cs=0x1a2;eip=0x00296a; 	R(CALLF(file_load_resource,0));	// 4644 call    file_load_resource ;~ 01A2:296A
cs=0x1a2;eip=0x00296f; 	T(ADD(sp, 4));	// 4645 add     sp, 4 ;~ 01A2:296F
cs=0x1a2;eip=0x002972; 	X(MOV(opp_res, ax));	// 4646 mov     opp_res, ax ;~ 01A2:2972
cs=0x1a2;eip=0x002975; 	X(MOV(word_44a02, dx));	// 4647 mov     word_44A02, dx ;~ 01A2:2975
cs=0x1a2;eip=0x002979; 	T(MOV(ax, offset(dseg,oppresources)));	// 4648 mov     ax, offset oppresources ;~ 01A2:2979
cs=0x1a2;eip=0x00297c; 	X(PUSH(ax));	// 4649 push    ax ;~ 01A2:297C
cs=0x1a2;eip=0x00297d; 	T(MOV(ax, offset(dseg,aopp0opp1opp2op)));	// 4650 mov     ax, offset aOpp0opp1opp2op ; "opp0opp1opp2opp3opp4opp5opp6" ;~ 01A2:297D
cs=0x1a2;eip=0x002980; 	X(PUSH(ax));	// 4651 push    ax ;~ 01A2:2980
cs=0x1a2;eip=0x002981; 	X(PUSH(dx));	// 4652 push    dx ;~ 01A2:2981
cs=0x1a2;eip=0x002982; 	X(PUSH(opp_res));	// 4653 push    opp_res ;~ 01A2:2982
cs=0x1a2;eip=0x002986; 	R(CALLF(locate_many_resources,0));	// 4654 call    locate_many_resources ;~ 01A2:2986
cs=0x1a2;eip=0x00298b; 	T(ADD(sp, 8));	// 4655 add     sp, 8 ;~ 01A2:298B
cs=0x1a2;eip=0x00298e; 	X(MOV(*(raddr(ss,bp+var_1c)), 0));	// 4656 mov     [bp+var_1C], 0 ;~ 01A2:298E
cs=0x1a2;eip=0x002992; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 4657 mov     [bp+var_6], 0 ;~ 01A2:2992
cs=0x1a2;eip=0x002996; 	X(MOV(*(raddr(ss,bp+var_1e)), 0x0FF));	// 4658 mov     [bp+var_1E], 0FFh ;~ 01A2:2996
cs=0x1a2;eip=0x00299a; 	X(MOV(*(raddr(ss,bp+var_4)), 0x0FF));	// 4659 mov     [bp+var_4], 0FFh ;~ 01A2:299A
cs=0x1a2;eip=0x00299e; 	R(CALLF(sub_29772,0));	// 4660 call    sub_29772 ;~ 01A2:299E
loc_129a3:
	// 4580 
cs=0x1a2;eip=0x0029a3; 	R(CALLF(mouse_draw_transparent_check,0));	// 4663 call    mouse_draw_transparent_check ;~ 01A2:29A3
loc_129a8:
	// 4581 
cs=0x1a2;eip=0x0029a8; 	T(MOV(al, byte_449aa));	// 4667 mov     al, byte_449AA ;~ 01A2:29A8
cs=0x1a2;eip=0x0029ab; 	T(CMP(*(raddr(ss,bp+var_1e)), al));	// 4668 cmp     [bp+var_1E], al ;~ 01A2:29AB
cs=0x1a2;eip=0x0029ae; 	R(JNZ(loc_129b3));	// 4669 jnz     short loc_129B3 ;~ 01A2:29AE
cs=0x1a2;eip=0x0029b0; 	R(JMP(loc_12cfb));	// 4670 jmp     loc_12CFB ;~ 01A2:29B0
loc_129b3:
	// 4582 
cs=0x1a2;eip=0x0029b3; 	T(CMP(*(raddr(ss,bp+var_1e)), 0x0FF));	// 4674 cmp     [bp+var_1E], 0FFh ;~ 01A2:29B3
cs=0x1a2;eip=0x0029b7; 	R(JZ(loc_129dd));	// 4675 jz      short loc_129DD ;~ 01A2:29B7
cs=0x1a2;eip=0x0029b9; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 4676 push    word ptr wndsprite+2 ;~ 01A2:29B9
cs=0x1a2;eip=0x0029bd; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 4677 push    word ptr wndsprite ;~ 01A2:29BD
cs=0x1a2;eip=0x0029c1; 	R(CALLF(sprite_free_wnd,0));	// 4678 call    sprite_free_wnd ;~ 01A2:29C1
cs=0x1a2;eip=0x0029c6; 	T(ADD(sp, 4));	// 4679 add     sp, 4 ;~ 01A2:29C6
cs=0x1a2;eip=0x0029c9; 	T(CMP(*(raddr(ss,bp+var_6)), 0));	// 4680 cmp     [bp+var_6], 0 ;~ 01A2:29C9
cs=0x1a2;eip=0x0029cd; 	R(JZ(loc_129dd));	// 4681 jz      short loc_129DD ;~ 01A2:29CD
cs=0x1a2;eip=0x0029cf; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 4682 push    [bp+var_A] ;~ 01A2:29CF
cs=0x1a2;eip=0x0029d2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 4683 push    [bp+var_C] ;~ 01A2:29D2
cs=0x1a2;eip=0x0029d5; 	R(CALLF(unload_resource,0));	// 4684 call    unload_resource ;~ 01A2:29D5
cs=0x1a2;eip=0x0029da; 	T(ADD(sp, 4));	// 4685 add     sp, 4 ;~ 01A2:29DA
loc_129dd:
	// 4583 
cs=0x1a2;eip=0x0029dd; 	T(MOV(ax, 4));	// 4689 mov     ax, 4 ;~ 01A2:29DD
cs=0x1a2;eip=0x0029e0; 	X(PUSH(ax));	// 4690 push    ax ;~ 01A2:29E0
cs=0x1a2;eip=0x0029e1; 	R(CALLF(ensure_file_exists,0));	// 4691 call    ensure_file_exists ;~ 01A2:29E1
cs=0x1a2;eip=0x0029e6; 	T(ADD(sp, 2));	// 4692 add     sp, 2 ;~ 01A2:29E6
cs=0x1a2;eip=0x0029e9; 	T(CMP(byte_449aa, 0));	// 4693 cmp     byte_449AA, 0 ;~ 01A2:29E9
cs=0x1a2;eip=0x0029ee; 	R(JZ(loc_12a10));	// 4694 jz      short loc_12A10 ;~ 01A2:29EE
cs=0x1a2;eip=0x0029f0; 	T(MOV(al, byte_449aa));	// 4695 mov     al, byte_449AA ;~ 01A2:29F0
cs=0x1a2;eip=0x0029f3; 	T(ADD(al, 0x30));	// 4696 add     al, 30h ; '0' ;~ 01A2:29F3
cs=0x1a2;eip=0x0029f5; 	X(MOV(byte_3b907, al));	// 4697 mov     byte_3B907, al ;~ 01A2:29F5
cs=0x1a2;eip=0x0029f8; 	T(MOV(ax, offset(dseg,unk_3b904)));	// 4698 mov     ax, offset unk_3B904 ;~ 01A2:29F8
cs=0x1a2;eip=0x0029fb; 	X(PUSH(ax));	// 4699 push    ax ;~ 01A2:29FB
cs=0x1a2;eip=0x0029fc; 	R(CALLF(file_load_resfile,0));	// 4700 call    file_load_resfile ;~ 01A2:29FC
cs=0x1a2;eip=0x002a01; 	T(ADD(sp, 2));	// 4701 add     sp, 2 ;~ 01A2:2A01
cs=0x1a2;eip=0x002a04; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 4702 mov     [bp+var_C], ax ;~ 01A2:2A04
cs=0x1a2;eip=0x002a07; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 4703 mov     [bp+var_A], dx ;~ 01A2:2A07
cs=0x1a2;eip=0x002a0a; 	X(MOV(*(raddr(ss,bp+var_6)), 1));	// 4704 mov     [bp+var_6], 1 ;~ 01A2:2A0A
cs=0x1a2;eip=0x002a0e; 	R(JMP(loc_12a14));	// 4705 jmp     short loc_12A14 ;~ 01A2:2A0E
loc_12a10:
	// 4584 
cs=0x1a2;eip=0x002a10; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 4709 mov     [bp+var_6], 0 ;~ 01A2:2A10
loc_12a14:
	// 4585 
cs=0x1a2;eip=0x002a14; 	T(MOV(ax, 0x0F));	// 4712 mov     ax, 0Fh ;~ 01A2:2A14
cs=0x1a2;eip=0x002a17; 	X(PUSH(ax));	// 4713 push    ax ;~ 01A2:2A17
cs=0x1a2;eip=0x002a18; 	T(MOV(ax, 0x0C8));	// 4714 mov     ax, 0C8h ; 'È' ;~ 01A2:2A18
cs=0x1a2;eip=0x002a1b; 	X(PUSH(ax));	// 4715 push    ax ;~ 01A2:2A1B
cs=0x1a2;eip=0x002a1c; 	T(MOV(ax, 0x140));	// 4716 mov     ax, 140h ;~ 01A2:2A1C
cs=0x1a2;eip=0x002a1f; 	X(PUSH(ax));	// 4717 push    ax ;~ 01A2:2A1F
cs=0x1a2;eip=0x002a20; 	R(CALLF(sprite_make_wnd,0));	// 4718 call    sprite_make_wnd ;~ 01A2:2A20
cs=0x1a2;eip=0x002a25; 	T(ADD(sp, 6));	// 4719 add     sp, 6 ;~ 01A2:2A25
cs=0x1a2;eip=0x002a28; 	X(MOV(*(dw*)(((db*)&wndsprite)), ax));	// 4720 mov     word ptr wndsprite, ax ;~ 01A2:2A28
cs=0x1a2;eip=0x002a2b; 	X(MOV(*(dw*)(((db*)&wndsprite)+2), dx));	// 4721 mov     word ptr wndsprite+2, dx ;~ 01A2:2A2B
cs=0x1a2;eip=0x002a2f; 	T(MOV(al, byte_449aa));	// 4722 mov     al, byte_449AA ;~ 01A2:2A2F
cs=0x1a2;eip=0x002a32; 	X(MOV(*(raddr(ss,bp+var_1e)), al));	// 4723 mov     [bp+var_1E], al ;~ 01A2:2A32
cs=0x1a2;eip=0x002a35; 	X(MOV(*(raddr(ss,bp+var_14)), 0x0FF));	// 4724 mov     [bp+var_14], 0FFh ;~ 01A2:2A35
cs=0x1a2;eip=0x002a39; 	T(CMP(video_flag5_is0, 0));	// 4725 cmp     video_flag5_is0, 0 ;~ 01A2:2A39
cs=0x1a2;eip=0x002a3e; 	R(JNZ(loc_12a48));	// 4726 jnz     short loc_12A48 ;~ 01A2:2A3E
cs=0x1a2;eip=0x002a40; 	R(CALLF(sprite_copy_wnd_to_1,0));	// 4727 call    sprite_copy_wnd_to_1 ;~ 01A2:2A40
cs=0x1a2;eip=0x002a45; 	R(JMP(loc_12a4d));	// 4728 jmp     short loc_12A4D ;~ 01A2:2A45
loc_12a48:
	// 4586 
cs=0x1a2;eip=0x002a48; 	R(CALLF(setup_mcgawnd2,0));	// 4733 call    setup_mcgawnd2 ;~ 01A2:2A48
loc_12a4d:
	// 4587 
cs=0x1a2;eip=0x002a4d; 	T(SUB(ax, ax));	// 4736 sub     ax, ax ;~ 01A2:2A4D
cs=0x1a2;eip=0x002a4f; 	X(PUSH(ax));	// 4737 push    ax ;~ 01A2:2A4F
cs=0x1a2;eip=0x002a50; 	R(CALLF(sprite_clear_1_color,0));	// 4738 call    sprite_clear_1_color ;~ 01A2:2A50
cs=0x1a2;eip=0x002a55; 	T(ADD(sp, 2));	// 4739 add     sp, 2 ;~ 01A2:2A55
cs=0x1a2;eip=0x002a58; 	T(MOV(ax, 0x37));	// 4740 mov     ax, 37h ; '7' ;~ 01A2:2A58
cs=0x1a2;eip=0x002a5b; 	X(PUSH(ax));	// 4741 push    ax ;~ 01A2:2A5B
cs=0x1a2;eip=0x002a5c; 	X(PUSH(word_44a02));	// 4742 push    word_44A02 ;~ 01A2:2A5C
cs=0x1a2;eip=0x002a60; 	X(PUSH(opp_res));	// 4743 push    opp_res ;~ 01A2:2A60
cs=0x1a2;eip=0x002a64; 	R(CALLF(nullsub_2,0));	// 4744 call    nullsub_2 ;~ 01A2:2A64
cs=0x1a2;eip=0x002a69; 	T(ADD(sp, 6));	// 4745 add     sp, 6 ;~ 01A2:2A69
cs=0x1a2;eip=0x002a6c; 	T(MOV(ax, offset(dseg,ascrn_0)));	// 4746 mov     ax, offset aScrn_0 ; "scrn" ;~ 01A2:2A6C
cs=0x1a2;eip=0x002a6f; 	X(PUSH(ax));	// 4747 push    ax ;~ 01A2:2A6F
cs=0x1a2;eip=0x002a70; 	X(PUSH(word_44a02));	// 4748 push    word_44A02 ;~ 01A2:2A70
cs=0x1a2;eip=0x002a74; 	X(PUSH(opp_res));	// 4749 push    opp_res ;~ 01A2:2A74
cs=0x1a2;eip=0x002a78; 	R(CALLF(locate_shape_fatal,0));	// 4750 call    locate_shape_fatal ;~ 01A2:2A78
cs=0x1a2;eip=0x002a7d; 	T(ADD(sp, 6));	// 4751 add     sp, 6 ;~ 01A2:2A7D
cs=0x1a2;eip=0x002a80; 	X(PUSH(dx));	// 4752 push    dx ;~ 01A2:2A80
cs=0x1a2;eip=0x002a81; 	X(PUSH(ax));	// 4753 push    ax ;~ 01A2:2A81
cs=0x1a2;eip=0x002a82; 	R(CALLF(sub_34526,0));	// 4754 call    sub_34526 ;~ 01A2:2A82
cs=0x1a2;eip=0x002a87; 	T(ADD(sp, 4));	// 4755 add     sp, 4 ;~ 01A2:2A87
cs=0x1a2;eip=0x002a8a; 	T(SUB(ax, ax));	// 4756 sub     ax, ax ;~ 01A2:2A8A
cs=0x1a2;eip=0x002a8c; 	X(PUSH(ax));	// 4757 push    ax ;~ 01A2:2A8C
cs=0x1a2;eip=0x002a8d; 	X(PUSH(word_407f8));	// 4758 push    word_407F8 ;~ 01A2:2A8D
cs=0x1a2;eip=0x002a91; 	X(PUSH(word_407f6));	// 4759 push    word_407F6 ;~ 01A2:2A91
cs=0x1a2;eip=0x002a95; 	X(PUSH(word_407f4));	// 4760 push    word_407F4 ;~ 01A2:2A95
cs=0x1a2;eip=0x002a99; 	T(MOV(ax, 0x12));	// 4761 mov     ax, 12h ;~ 01A2:2A99
cs=0x1a2;eip=0x002a9c; 	X(PUSH(ax));	// 4762 push    ax ;~ 01A2:2A9C
cs=0x1a2;eip=0x002a9d; 	T(MOV(ax, 0x36));	// 4763 mov     ax, 36h ; '6' ;~ 01A2:2A9D
cs=0x1a2;eip=0x002aa0; 	X(PUSH(ax));	// 4764 push    ax ;~ 01A2:2AA0
cs=0x1a2;eip=0x002aa1; 	T(MOV(ax, *(opponentmenu_buttons_y1)));	// 4765 mov     ax, opponentmenu_buttons_y1 ;~ 01A2:2AA1
cs=0x1a2;eip=0x002aa4; 	T(INC(ax));	// 4766 inc     ax ;~ 01A2:2AA4
cs=0x1a2;eip=0x002aa5; 	X(PUSH(ax));	// 4767 push    ax ;~ 01A2:2AA5
cs=0x1a2;eip=0x002aa6; 	T(MOV(ax, 0x15));	// 4768 mov     ax, 15h ;~ 01A2:2AA6
cs=0x1a2;eip=0x002aa9; 	X(PUSH(ax));	// 4769 push    ax ;~ 01A2:2AA9
cs=0x1a2;eip=0x002aaa; 	T(MOV(ax, offset(dseg,abla)));	// 4770 mov     ax, offset aBla ; "bla" ;~ 01A2:2AAA
cs=0x1a2;eip=0x002aad; 	X(PUSH(ax));	// 4771 push    ax ;~ 01A2:2AAD
cs=0x1a2;eip=0x002aae; 	X(PUSH(word_455ce));	// 4772 push    word_455CE ;~ 01A2:2AAE
cs=0x1a2;eip=0x002ab2; 	X(PUSH(miscptr));	// 4773 push    miscptr ;~ 01A2:2AB2
cs=0x1a2;eip=0x002ab6; 	R(CALLF(locate_text_res,0));	// 4774 call    locate_text_res ;~ 01A2:2AB6
cs=0x1a2;eip=0x002abb; 	T(ADD(sp, 6));	// 4775 add     sp, 6 ;~ 01A2:2ABB
cs=0x1a2;eip=0x002abe; 	X(PUSH(dx));	// 4776 push    dx ;~ 01A2:2ABE
cs=0x1a2;eip=0x002abf; 	X(PUSH(ax));	// 4777 push    ax ;~ 01A2:2ABF
cs=0x1a2;eip=0x002ac0; 	R(CALLF(draw_button,0));	// 4778 call    draw_button ;~ 01A2:2AC0
cs=0x1a2;eip=0x002ac5; 	T(ADD(sp, 0x14));	// 4779 add     sp, 14h ;~ 01A2:2AC5
cs=0x1a2;eip=0x002ac8; 	T(SUB(ax, ax));	// 4780 sub     ax, ax ;~ 01A2:2AC8
cs=0x1a2;eip=0x002aca; 	X(PUSH(ax));	// 4781 push    ax ;~ 01A2:2ACA
cs=0x1a2;eip=0x002acb; 	X(PUSH(word_407f8));	// 4782 push    word_407F8 ;~ 01A2:2ACB
cs=0x1a2;eip=0x002acf; 	X(PUSH(word_407f6));	// 4783 push    word_407F6 ;~ 01A2:2ACF
cs=0x1a2;eip=0x002ad3; 	X(PUSH(word_407f4));	// 4784 push    word_407F4 ;~ 01A2:2AD3
cs=0x1a2;eip=0x002ad7; 	T(MOV(ax, 0x12));	// 4785 mov     ax, 12h ;~ 01A2:2AD7
cs=0x1a2;eip=0x002ada; 	X(PUSH(ax));	// 4786 push    ax ;~ 01A2:2ADA
cs=0x1a2;eip=0x002adb; 	T(MOV(ax, 0x36));	// 4787 mov     ax, 36h ; '6' ;~ 01A2:2ADB
cs=0x1a2;eip=0x002ade; 	X(PUSH(ax));	// 4788 push    ax ;~ 01A2:2ADE
cs=0x1a2;eip=0x002adf; 	T(MOV(ax, *(opponentmenu_buttons_y1)));	// 4789 mov     ax, opponentmenu_buttons_y1 ;~ 01A2:2ADF
cs=0x1a2;eip=0x002ae2; 	T(INC(ax));	// 4790 inc     ax ;~ 01A2:2AE2
cs=0x1a2;eip=0x002ae3; 	X(PUSH(ax));	// 4791 push    ax ;~ 01A2:2AE3
cs=0x1a2;eip=0x002ae4; 	T(MOV(ax, 0x4D));	// 4792 mov     ax, 4Dh ; 'M' ;~ 01A2:2AE4
cs=0x1a2;eip=0x002ae7; 	X(PUSH(ax));	// 4793 push    ax ;~ 01A2:2AE7
cs=0x1a2;eip=0x002ae8; 	T(MOV(ax, offset(dseg,abnx)));	// 4794 mov     ax, offset aBnx ; "bnx" ;~ 01A2:2AE8
cs=0x1a2;eip=0x002aeb; 	X(PUSH(ax));	// 4795 push    ax ;~ 01A2:2AEB
cs=0x1a2;eip=0x002aec; 	X(PUSH(word_455ce));	// 4796 push    word_455CE ;~ 01A2:2AEC
cs=0x1a2;eip=0x002af0; 	X(PUSH(miscptr));	// 4797 push    miscptr ;~ 01A2:2AF0
cs=0x1a2;eip=0x002af4; 	R(CALLF(locate_text_res,0));	// 4798 call    locate_text_res ;~ 01A2:2AF4
cs=0x1a2;eip=0x002af9; 	T(ADD(sp, 6));	// 4799 add     sp, 6 ;~ 01A2:2AF9
cs=0x1a2;eip=0x002afc; 	X(PUSH(dx));	// 4800 push    dx ;~ 01A2:2AFC
cs=0x1a2;eip=0x002afd; 	X(PUSH(ax));	// 4801 push    ax ;~ 01A2:2AFD
cs=0x1a2;eip=0x002afe; 	R(CALLF(draw_button,0));	// 4802 call    draw_button ;~ 01A2:2AFE
cs=0x1a2;eip=0x002b03; 	T(ADD(sp, 0x14));	// 4803 add     sp, 14h ;~ 01A2:2B03
cs=0x1a2;eip=0x002b06; 	T(SUB(ax, ax));	// 4804 sub     ax, ax ;~ 01A2:2B06
cs=0x1a2;eip=0x002b08; 	X(PUSH(ax));	// 4805 push    ax ;~ 01A2:2B08
cs=0x1a2;eip=0x002b09; 	X(PUSH(word_407f8));	// 4806 push    word_407F8 ;~ 01A2:2B09
cs=0x1a2;eip=0x002b0d; 	X(PUSH(word_407f6));	// 4807 push    word_407F6 ;~ 01A2:2B0D
cs=0x1a2;eip=0x002b11; 	X(PUSH(word_407f4));	// 4808 push    word_407F4 ;~ 01A2:2B11
cs=0x1a2;eip=0x002b15; 	T(MOV(ax, 0x12));	// 4809 mov     ax, 12h ;~ 01A2:2B15
cs=0x1a2;eip=0x002b18; 	X(PUSH(ax));	// 4810 push    ax ;~ 01A2:2B18
cs=0x1a2;eip=0x002b19; 	T(MOV(ax, 0x36));	// 4811 mov     ax, 36h ; '6' ;~ 01A2:2B19
cs=0x1a2;eip=0x002b1c; 	X(PUSH(ax));	// 4812 push    ax ;~ 01A2:2B1C
cs=0x1a2;eip=0x002b1d; 	T(MOV(ax, *(opponentmenu_buttons_y1)));	// 4813 mov     ax, opponentmenu_buttons_y1 ;~ 01A2:2B1D
cs=0x1a2;eip=0x002b20; 	T(INC(ax));	// 4814 inc     ax ;~ 01A2:2B20
cs=0x1a2;eip=0x002b21; 	X(PUSH(ax));	// 4815 push    ax ;~ 01A2:2B21
cs=0x1a2;eip=0x002b22; 	T(MOV(ax, 0x85));	// 4816 mov     ax, 85h ; '…' ;~ 01A2:2B22
cs=0x1a2;eip=0x002b25; 	X(PUSH(ax));	// 4817 push    ax ;~ 01A2:2B25
cs=0x1a2;eip=0x002b26; 	T(MOV(ax, offset(dseg,abcl)));	// 4818 mov     ax, offset aBcl ; "bcl" ;~ 01A2:2B26
cs=0x1a2;eip=0x002b29; 	X(PUSH(ax));	// 4819 push    ax ;~ 01A2:2B29
cs=0x1a2;eip=0x002b2a; 	X(PUSH(word_455ce));	// 4820 push    word_455CE ;~ 01A2:2B2A
cs=0x1a2;eip=0x002b2e; 	X(PUSH(miscptr));	// 4821 push    miscptr ;~ 01A2:2B2E
cs=0x1a2;eip=0x002b32; 	R(CALLF(locate_text_res,0));	// 4822 call    locate_text_res ;~ 01A2:2B32
cs=0x1a2;eip=0x002b37; 	T(ADD(sp, 6));	// 4823 add     sp, 6 ;~ 01A2:2B37
cs=0x1a2;eip=0x002b3a; 	X(PUSH(dx));	// 4824 push    dx ;~ 01A2:2B3A
cs=0x1a2;eip=0x002b3b; 	X(PUSH(ax));	// 4825 push    ax ;~ 01A2:2B3B
cs=0x1a2;eip=0x002b3c; 	R(CALLF(draw_button,0));	// 4826 call    draw_button ;~ 01A2:2B3C
cs=0x1a2;eip=0x002b41; 	T(ADD(sp, 0x14));	// 4827 add     sp, 14h ;~ 01A2:2B41
cs=0x1a2;eip=0x002b44; 	T(SUB(ax, ax));	// 4828 sub     ax, ax ;~ 01A2:2B44
cs=0x1a2;eip=0x002b46; 	X(PUSH(ax));	// 4829 push    ax ;~ 01A2:2B46
cs=0x1a2;eip=0x002b47; 	X(PUSH(word_407f8));	// 4830 push    word_407F8 ;~ 01A2:2B47
cs=0x1a2;eip=0x002b4b; 	X(PUSH(word_407f6));	// 4831 push    word_407F6 ;~ 01A2:2B4B
cs=0x1a2;eip=0x002b4f; 	X(PUSH(word_407f4));	// 4832 push    word_407F4 ;~ 01A2:2B4F
cs=0x1a2;eip=0x002b53; 	T(MOV(ax, 0x12));	// 4833 mov     ax, 12h ;~ 01A2:2B53
cs=0x1a2;eip=0x002b56; 	X(PUSH(ax));	// 4834 push    ax ;~ 01A2:2B56
cs=0x1a2;eip=0x002b57; 	T(MOV(ax, 0x36));	// 4835 mov     ax, 36h ; '6' ;~ 01A2:2B57
cs=0x1a2;eip=0x002b5a; 	X(PUSH(ax));	// 4836 push    ax ;~ 01A2:2B5A
cs=0x1a2;eip=0x002b5b; 	T(MOV(ax, *(opponentmenu_buttons_y1)));	// 4837 mov     ax, opponentmenu_buttons_y1 ;~ 01A2:2B5B
cs=0x1a2;eip=0x002b5e; 	T(INC(ax));	// 4838 inc     ax ;~ 01A2:2B5E
cs=0x1a2;eip=0x002b5f; 	X(PUSH(ax));	// 4839 push    ax ;~ 01A2:2B5F
cs=0x1a2;eip=0x002b60; 	T(MOV(ax, 0x0BD));	// 4840 mov     ax, 0BDh ; '½' ;~ 01A2:2B60
cs=0x1a2;eip=0x002b63; 	X(PUSH(ax));	// 4841 push    ax ;~ 01A2:2B63
cs=0x1a2;eip=0x002b64; 	T(MOV(ax, offset(dseg,abca)));	// 4842 mov     ax, offset aBca ; "bca" ;~ 01A2:2B64
cs=0x1a2;eip=0x002b67; 	X(PUSH(ax));	// 4843 push    ax ;~ 01A2:2B67
cs=0x1a2;eip=0x002b68; 	X(PUSH(word_455ce));	// 4844 push    word_455CE ;~ 01A2:2B68
cs=0x1a2;eip=0x002b6c; 	X(PUSH(miscptr));	// 4845 push    miscptr ;~ 01A2:2B6C
cs=0x1a2;eip=0x002b70; 	R(CALLF(locate_text_res,0));	// 4846 call    locate_text_res ;~ 01A2:2B70
cs=0x1a2;eip=0x002b75; 	T(ADD(sp, 6));	// 4847 add     sp, 6 ;~ 01A2:2B75
cs=0x1a2;eip=0x002b78; 	X(PUSH(dx));	// 4848 push    dx ;~ 01A2:2B78
cs=0x1a2;eip=0x002b79; 	X(PUSH(ax));	// 4849 push    ax ;~ 01A2:2B79
cs=0x1a2;eip=0x002b7a; 	R(CALLF(draw_button,0));	// 4850 call    draw_button ;~ 01A2:2B7A
cs=0x1a2;eip=0x002b7f; 	T(ADD(sp, 0x14));	// 4851 add     sp, 14h ;~ 01A2:2B7F
cs=0x1a2;eip=0x002b82; 	T(SUB(ax, ax));	// 4852 sub     ax, ax ;~ 01A2:2B82
cs=0x1a2;eip=0x002b84; 	X(PUSH(ax));	// 4853 push    ax ;~ 01A2:2B84
cs=0x1a2;eip=0x002b85; 	X(PUSH(word_407f8));	// 4854 push    word_407F8 ;~ 01A2:2B85
cs=0x1a2;eip=0x002b89; 	X(PUSH(word_407f6));	// 4855 push    word_407F6 ;~ 01A2:2B89
cs=0x1a2;eip=0x002b8d; 	X(PUSH(word_407f4));	// 4856 push    word_407F4 ;~ 01A2:2B8D
cs=0x1a2;eip=0x002b91; 	T(MOV(ax, 0x12));	// 4857 mov     ax, 12h ;~ 01A2:2B91
cs=0x1a2;eip=0x002b94; 	X(PUSH(ax));	// 4858 push    ax ;~ 01A2:2B94
cs=0x1a2;eip=0x002b95; 	T(MOV(ax, 0x36));	// 4859 mov     ax, 36h ; '6' ;~ 01A2:2B95
cs=0x1a2;eip=0x002b98; 	X(PUSH(ax));	// 4860 push    ax ;~ 01A2:2B98
cs=0x1a2;eip=0x002b99; 	T(MOV(ax, *(opponentmenu_buttons_y1)));	// 4861 mov     ax, opponentmenu_buttons_y1 ;~ 01A2:2B99
cs=0x1a2;eip=0x002b9c; 	T(INC(ax));	// 4862 inc     ax ;~ 01A2:2B9C
cs=0x1a2;eip=0x002b9d; 	X(PUSH(ax));	// 4863 push    ax ;~ 01A2:2B9D
cs=0x1a2;eip=0x002b9e; 	T(MOV(ax, 0x0F5));	// 4864 mov     ax, 0F5h ; 'õ' ;~ 01A2:2B9E
cs=0x1a2;eip=0x002ba1; 	X(PUSH(ax));	// 4865 push    ax ;~ 01A2:2BA1
cs=0x1a2;eip=0x002ba2; 	T(MOV(ax, offset(dseg,abdo)));	// 4866 mov     ax, offset aBdo ; "bdo" ;~ 01A2:2BA2
cs=0x1a2;eip=0x002ba5; 	X(PUSH(ax));	// 4867 push    ax ;~ 01A2:2BA5
cs=0x1a2;eip=0x002ba6; 	X(PUSH(word_455ce));	// 4868 push    word_455CE ;~ 01A2:2BA6
cs=0x1a2;eip=0x002baa; 	X(PUSH(miscptr));	// 4869 push    miscptr ;~ 01A2:2BAA
cs=0x1a2;eip=0x002bae; 	R(CALLF(locate_text_res,0));	// 4870 call    locate_text_res ;~ 01A2:2BAE
cs=0x1a2;eip=0x002bb3; 	T(ADD(sp, 6));	// 4871 add     sp, 6 ;~ 01A2:2BB3
cs=0x1a2;eip=0x002bb6; 	X(PUSH(dx));	// 4872 push    dx ;~ 01A2:2BB6
cs=0x1a2;eip=0x002bb7; 	X(PUSH(ax));	// 4873 push    ax ;~ 01A2:2BB7
cs=0x1a2;eip=0x002bb8; 	R(CALLF(draw_button,0));	// 4874 call    draw_button ;~ 01A2:2BB8
cs=0x1a2;eip=0x002bbd; 	T(ADD(sp, 0x14));	// 4875 add     sp, 14h ;~ 01A2:2BBD
cs=0x1a2;eip=0x002bc0; 	T(MOV(al, byte_449aa));	// 4876 mov     al, byte_449AA ;~ 01A2:2BC0
cs=0x1a2;eip=0x002bc3; 	T(ADD(al, 0x30));	// 4877 add     al, 30h ; '0' ;~ 01A2:2BC3
cs=0x1a2;eip=0x002bc5; 	T(CBW);	// 4878 cbw ;~ 01A2:2BC5
cs=0x1a2;eip=0x002bc6; 	X(PUSH(ax));	// 4879 push    ax ;~ 01A2:2BC6
cs=0x1a2;eip=0x002bc7; 	X(PUSH(word_44a02));	// 4880 push    word_44A02 ;~ 01A2:2BC7
cs=0x1a2;eip=0x002bcb; 	X(PUSH(opp_res));	// 4881 push    opp_res ;~ 01A2:2BCB
cs=0x1a2;eip=0x002bcf; 	R(CALLF(nullsub_2,0));	// 4882 call    nullsub_2 ;~ 01A2:2BCF
cs=0x1a2;eip=0x002bd4; 	T(ADD(sp, 6));	// 4883 add     sp, 6 ;~ 01A2:2BD4
cs=0x1a2;eip=0x002bd7; 	T(MOV(al, byte_449aa));	// 4884 mov     al, byte_449AA ;~ 01A2:2BD7
cs=0x1a2;eip=0x002bda; 	T(CBW);	// 4885 cbw ;~ 01A2:2BDA
cs=0x1a2;eip=0x002bdb; 	T(MOV(bx, ax));	// 4886 mov     bx, ax ;~ 01A2:2BDB
cs=0x1a2;eip=0x002bdd; 	T(SHL(bx, 1));	// 4887 shl     bx, 1 ;~ 01A2:2BDD
cs=0x1a2;eip=0x002bdf; 	T(SHL(bx, 1));	// 4888 shl     bx, 1 ;~ 01A2:2BDF
cs=0x1a2;eip=0x002be1; 	X(PUSH(*(dw*)((((db*)&oppresources)+2)+bx)));	// 4889 push    word ptr (oppresources+2)[bx] ;~ 01A2:2BE1
cs=0x1a2;eip=0x002be5; 	X(PUSH(*(dw*)(((db*)&oppresources)+bx)));	// 4890 push    word ptr oppresources[bx] ;~ 01A2:2BE5
cs=0x1a2;eip=0x002be9; 	R(CALLF(sub_34526,0));	// 4891 call    sub_34526 ;~ 01A2:2BE9
cs=0x1a2;eip=0x002bee; 	T(ADD(sp, 4));	// 4892 add     sp, 4 ;~ 01A2:2BEE
cs=0x1a2;eip=0x002bf1; 	T(MOV(ax, 0x37));	// 4893 mov     ax, 37h ; '7' ;~ 01A2:2BF1
cs=0x1a2;eip=0x002bf4; 	X(PUSH(ax));	// 4894 push    ax ;~ 01A2:2BF4
cs=0x1a2;eip=0x002bf5; 	X(PUSH(word_44a02));	// 4895 push    word_44A02 ;~ 01A2:2BF5
cs=0x1a2;eip=0x002bf9; 	X(PUSH(opp_res));	// 4896 push    opp_res ;~ 01A2:2BF9
cs=0x1a2;eip=0x002bfd; 	R(CALLF(nullsub_2,0));	// 4897 call    nullsub_2 ;~ 01A2:2BFD
cs=0x1a2;eip=0x002c02; 	T(ADD(sp, 6));	// 4898 add     sp, 6 ;~ 01A2:2C02
cs=0x1a2;eip=0x002c05; 	T(MOV(ax, offset(dseg,aclip)));	// 4899 mov     ax, offset aClip ; "clip" ;~ 01A2:2C05
cs=0x1a2;eip=0x002c08; 	X(PUSH(ax));	// 4900 push    ax ;~ 01A2:2C08
cs=0x1a2;eip=0x002c09; 	X(PUSH(word_44a02));	// 4901 push    word_44A02 ;~ 01A2:2C09
cs=0x1a2;eip=0x002c0d; 	X(PUSH(opp_res));	// 4902 push    opp_res ;~ 01A2:2C0D
cs=0x1a2;eip=0x002c11; 	R(CALLF(locate_shape_fatal,0));	// 4903 call    locate_shape_fatal ;~ 01A2:2C11
cs=0x1a2;eip=0x002c16; 	T(ADD(sp, 6));	// 4904 add     sp, 6 ;~ 01A2:2C16
cs=0x1a2;eip=0x002c19; 	X(PUSH(dx));	// 4905 push    dx ;~ 01A2:2C19
cs=0x1a2;eip=0x002c1a; 	X(PUSH(ax));	// 4906 push    ax ;~ 01A2:2C1A
cs=0x1a2;eip=0x002c1b; 	R(CALLF(sub_34526,0));	// 4907 call    sub_34526 ;~ 01A2:2C1B
cs=0x1a2;eip=0x002c20; 	T(ADD(sp, 4));	// 4908 add     sp, 4 ;~ 01A2:2C20
cs=0x1a2;eip=0x002c23; 	T(CMP(video_flag5_is0, 0));	// 4909 cmp     video_flag5_is0, 0 ;~ 01A2:2C23
cs=0x1a2;eip=0x002c28; 	R(JZ(loc_12c46));	// 4910 jz      short loc_12C46 ;~ 01A2:2C28
cs=0x1a2;eip=0x002c2a; 	T(SUB(ax, ax));	// 4911 sub     ax, ax ;~ 01A2:2C2A
cs=0x1a2;eip=0x002c2c; 	X(PUSH(ax));	// 4912 push    ax ;~ 01A2:2C2C
cs=0x1a2;eip=0x002c2d; 	X(PUSH(ax));	// 4913 push    ax ;~ 01A2:2C2D
cs=0x1a2;eip=0x002c2e; 	T(LES(bx, wndsprite));	// 4914 les     bx, wndsprite ;~ 01A2:2C2E
cs=0x1a2;eip=0x002c32; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 4915 push    word ptr es:[bx+2] ;~ 01A2:2C32
cs=0x1a2;eip=0x002c36; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 4916 push    word ptr es:[bx] ;~ 01A2:2C36
cs=0x1a2;eip=0x002c39; 	R(CALLF(sprite_clear_shape_alt,0));	// 4917 call    sprite_clear_shape_alt ;~ 01A2:2C39
cs=0x1a2;eip=0x002c3e; 	T(ADD(sp, 8));	// 4918 add     sp, 8 ;~ 01A2:2C3E
cs=0x1a2;eip=0x002c41; 	R(CALLF(sprite_copy_wnd_to_1,0));	// 4919 call    sprite_copy_wnd_to_1 ;~ 01A2:2C41
loc_12c46:
	// 4588 
cs=0x1a2;eip=0x002c46; 	T(CMP(byte_449aa, 0));	// 4922 cmp     byte_449AA, 0 ;~ 01A2:2C46
cs=0x1a2;eip=0x002c4b; 	R(JZ(loc_12c5a));	// 4923 jz      short loc_12C5A ;~ 01A2:2C4B
cs=0x1a2;eip=0x002c4d; 	T(MOV(ax, offset(dseg,ades_0)));	// 4924 mov     ax, offset aDes_0 ; "des" ;~ 01A2:2C4D
cs=0x1a2;eip=0x002c50; 	X(PUSH(ax));	// 4925 push    ax ;~ 01A2:2C50
cs=0x1a2;eip=0x002c51; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 4926 push    [bp+var_A] ;~ 01A2:2C51
cs=0x1a2;eip=0x002c54; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 4927 push    [bp+var_C] ;~ 01A2:2C54
cs=0x1a2;eip=0x002c57; 	R(JMP(loc_12c66));	// 4928 jmp     short loc_12C66 ;~ 01A2:2C57
loc_12c5a:
	// 4589 
cs=0x1a2;eip=0x002c5a; 	T(MOV(ax, offset(dseg,arac)));	// 4933 mov     ax, offset aRac ; "rac" ;~ 01A2:2C5A
cs=0x1a2;eip=0x002c5d; 	X(PUSH(ax));	// 4934 push    ax ;~ 01A2:2C5D
cs=0x1a2;eip=0x002c5e; 	X(PUSH(word_455ce));	// 4935 push    word_455CE ;~ 01A2:2C5E
cs=0x1a2;eip=0x002c62; 	X(PUSH(miscptr));	// 4936 push    miscptr ;~ 01A2:2C62
loc_12c66:
	// 4590 
cs=0x1a2;eip=0x002c66; 	R(CALLF(locate_text_res,0));	// 4939 call    locate_text_res ;~ 01A2:2C66
cs=0x1a2;eip=0x002c6b; 	T(ADD(sp, 6));	// 4940 add     sp, 6 ;~ 01A2:2C6B
cs=0x1a2;eip=0x002c6e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_1a))), ax));	// 4941 mov     word ptr [bp+var_1A], ax ;~ 01A2:2C6E
cs=0x1a2;eip=0x002c71; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_1a+2))), dx));	// 4942 mov     word ptr [bp+var_1A+2], dx ;~ 01A2:2C71
cs=0x1a2;eip=0x002c74; 	X(PUSH(word_44d24));	// 4943 push    word_44D24 ;~ 01A2:2C74
cs=0x1a2;eip=0x002c78; 	X(PUSH(fontnptr));	// 4944 push    fontnptr ;~ 01A2:2C78
cs=0x1a2;eip=0x002c7c; 	R(CALLF(font_set_fontdef2,0));	// 4945 call    font_set_fontdef2 ;~ 01A2:2C7C
cs=0x1a2;eip=0x002c81; 	T(ADD(sp, 4));	// 4946 add     sp, 4 ;~ 01A2:2C81
cs=0x1a2;eip=0x002c84; 	X(PUSH(dialog_fnt_colour));	// 4947 push    dialog_fnt_colour ;~ 01A2:2C84
cs=0x1a2;eip=0x002c88; 	T(SUB(ax, ax));	// 4948 sub     ax, ax ;~ 01A2:2C88
cs=0x1a2;eip=0x002c8a; 	X(PUSH(ax));	// 4949 push    ax ;~ 01A2:2C8A
cs=0x1a2;eip=0x002c8b; 	R(CALLF(font_set_unk,0));	// 4950 call    font_set_unk ;~ 01A2:2C8B
cs=0x1a2;eip=0x002c90; 	T(ADD(sp, 4));	// 4951 add     sp, 4 ;~ 01A2:2C90
cs=0x1a2;eip=0x002c93; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 4952 mov     [bp+var_8], 0 ;~ 01A2:2C93
cs=0x1a2;eip=0x002c98; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 4953 mov     [bp+var_E], 0 ;~ 01A2:2C98
loc_12c9d:
	// 4591 
cs=0x1a2;eip=0x002c9d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1a))));	// 4956 les     bx, [bp+var_1A] ;~ 01A2:2C9D
cs=0x1a2;eip=0x002ca0; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_1a)))));	// 4957 inc     word ptr [bp+var_1A] ;~ 01A2:2CA0
cs=0x1a2;eip=0x002ca3; 	T(MOV(al, *(raddr(es,bx))));	// 4958 mov     al, es:[bx] ;~ 01A2:2CA3
cs=0x1a2;eip=0x002ca6; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 4959 mov     [bp+var_2], al ;~ 01A2:2CA6
cs=0x1a2;eip=0x002ca9; 	T(CMP(al, 0x5D));	// 4960 cmp     al, 5Dh ; ']' ;~ 01A2:2CA9
cs=0x1a2;eip=0x002cab; 	R(JNZ(loc_12ce0));	// 4961 jnz     short loc_12CE0 ;~ 01A2:2CAB
cs=0x1a2;eip=0x002cad; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 4962 cmp     [bp+var_8], 0 ;~ 01A2:2CAD
cs=0x1a2;eip=0x002cb1; 	R(JZ(loc_12cd2));	// 4963 jz      short loc_12CD2 ;~ 01A2:2CB1
cs=0x1a2;eip=0x002cb3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 4964 mov     bx, [bp+var_8] ;~ 01A2:2CB3
cs=0x1a2;eip=0x002cb6; 	X(MOV(*((&resid_byte1)+bx), 0));	// 4965 mov     resID_byte1[bx], 0 ;~ 01A2:2CB6
cs=0x1a2;eip=0x002cbb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 4966 mov     ax, [bp+var_E] ;~ 01A2:2CBB
cs=0x1a2;eip=0x002cbe; 	T(ADD(ax, 0x21));	// 4967 add     ax, 21h ; '!' ;~ 01A2:2CBE
cs=0x1a2;eip=0x002cc1; 	X(PUSH(ax));	// 4968 push    ax ;~ 01A2:2CC1
cs=0x1a2;eip=0x002cc2; 	T(MOV(ax, 0x0C));	// 4969 mov     ax, 0Ch ;~ 01A2:2CC2
cs=0x1a2;eip=0x002cc5; 	X(PUSH(ax));	// 4970 push    ax ;~ 01A2:2CC5
cs=0x1a2;eip=0x002cc6; 	T(MOV(ax, 0x0AC74));	// 4971 mov     ax, 0AC74h ;~ 01A2:2CC6
cs=0x1a2;eip=0x002cc9; 	X(PUSH(ax));	// 4972 push    ax ;~ 01A2:2CC9
cs=0x1a2;eip=0x002cca; 	R(CALLF(font_draw_text,0));	// 4973 call    font_draw_text ;~ 01A2:2CCA
cs=0x1a2;eip=0x002ccf; 	T(ADD(sp, 6));	// 4974 add     sp, 6 ;~ 01A2:2CCF
loc_12cd2:
	// 4592 
cs=0x1a2;eip=0x002cd2; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 4977 mov     [bp+var_8], 0 ;~ 01A2:2CD2
cs=0x1a2;eip=0x002cd7; 	T(MOV(ax, fontdef_unk_0e));	// 4978 mov     ax, fontdef_unk_0E ;~ 01A2:2CD7
cs=0x1a2;eip=0x002cda; 	X(ADD(*(dw*)(raddr(ss,bp+var_e)), ax));	// 4979 add     [bp+var_E], ax ;~ 01A2:2CDA
cs=0x1a2;eip=0x002cdd; 	R(JMP(loc_12ced));	// 4980 jmp     short loc_12CED ;~ 01A2:2CDD
loc_12ce0:
	// 4593 
cs=0x1a2;eip=0x002ce0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 4985 mov     bx, [bp+var_8] ;~ 01A2:2CE0
cs=0x1a2;eip=0x002ce3; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 4986 inc     [bp+var_8] ;~ 01A2:2CE3
cs=0x1a2;eip=0x002ce6; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 4987 mov     al, [bp+var_2] ;~ 01A2:2CE6
cs=0x1a2;eip=0x002ce9; 	X(MOV(*((&resid_byte1)+bx), al));	// 4988 mov     resID_byte1[bx], al ;~ 01A2:2CE9
loc_12ced:
	// 4594 
cs=0x1a2;eip=0x002ced; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1a))));	// 4991 les     bx, [bp+var_1A] ;~ 01A2:2CED
cs=0x1a2;eip=0x002cf0; 	T(CMP(*(raddr(es,bx)), 0));	// 4992 cmp     byte ptr es:[bx], 0 ;~ 01A2:2CF0
cs=0x1a2;eip=0x002cf4; 	R(JNZ(loc_12c9d));	// 4993 jnz     short loc_12C9D ;~ 01A2:2CF4
cs=0x1a2;eip=0x002cf6; 	R(CALLF(font_set_fontdef,0));	// 4994 call    font_set_fontdef ;~ 01A2:2CF6
loc_12cfb:
	// 4595 
cs=0x1a2;eip=0x002cfb; 	T(MOV(al, *(raddr(ss,bp+var_14))));	// 4997 mov     al, [bp+var_14] ;~ 01A2:2CFB
cs=0x1a2;eip=0x002cfe; 	T(CMP(*(raddr(ss,bp+var_1c)), al));	// 4998 cmp     [bp+var_1C], al ;~ 01A2:2CFE
cs=0x1a2;eip=0x002d01; 	R(JZ(loc_12d2c));	// 4999 jz      short loc_12D2C ;~ 01A2:2D01
cs=0x1a2;eip=0x002d03; 	T(MOV(al, *(raddr(ss,bp+var_1c))));	// 5000 mov     al, [bp+var_1C] ;~ 01A2:2D03
cs=0x1a2;eip=0x002d06; 	X(MOV(*(raddr(ss,bp+var_14)), al));	// 5001 mov     [bp+var_14], al ;~ 01A2:2D06
cs=0x1a2;eip=0x002d09; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 5002 mov     al, [bp+var_4] ;~ 01A2:2D09
cs=0x1a2;eip=0x002d0c; 	T(CBW);	// 5003 cbw ;~ 01A2:2D0C
cs=0x1a2;eip=0x002d0d; 	X(PUSH(ax));	// 5004 push    ax ;~ 01A2:2D0D
cs=0x1a2;eip=0x002d0e; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 5005 push    word ptr wndsprite+2 ;~ 01A2:2D0E
cs=0x1a2;eip=0x002d12; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 5006 push    word ptr wndsprite ;~ 01A2:2D12
cs=0x1a2;eip=0x002d16; 	R(CALLF(sprite_blit_to_video,0));	// 5007 call    sprite_blit_to_video ;~ 01A2:2D16
cs=0x1a2;eip=0x002d1b; 	T(ADD(sp, 6));	// 5008 add     sp, 6 ;~ 01A2:2D1B
cs=0x1a2;eip=0x002d1e; 	X(MOV(*(raddr(ss,bp+var_4)), 0x0FE));	// 5009 mov     [bp+var_4], 0FEh ; 'þ' ;~ 01A2:2D1E
cs=0x1a2;eip=0x002d22; 	R(CALLF(timer_get_delta_alt,0));	// 5010 call    timer_get_delta_alt ;~ 01A2:2D22
cs=0x1a2;eip=0x002d27; 	R(CALLF(sub_29772,0));	// 5011 call    sub_29772 ;~ 01A2:2D27
loc_12d2c:
	// 4596 
cs=0x1a2;eip=0x002d2c; 	X(PUSH(word_407d0));	// 5014 push    word_407D0 ;~ 01A2:2D2C
cs=0x1a2;eip=0x002d30; 	X(PUSH(word_407ce));	// 5015 push    word_407CE ;~ 01A2:2D30
cs=0x1a2;eip=0x002d34; 	T(MOV(ax, 0x462));	// 5016 mov     ax, 462h ;~ 01A2:2D34
cs=0x1a2;eip=0x002d37; 	X(PUSH(ax));	// 5017 push    ax ;~ 01A2:2D37
cs=0x1a2;eip=0x002d38; 	T(MOV(ax, 0x458));	// 5018 mov     ax, 458h ;~ 01A2:2D38
cs=0x1a2;eip=0x002d3b; 	X(PUSH(ax));	// 5019 push    ax ;~ 01A2:2D3B
cs=0x1a2;eip=0x002d3c; 	T(MOV(ax, 0x44E));	// 5020 mov     ax, 44Eh ;~ 01A2:2D3C
cs=0x1a2;eip=0x002d3f; 	X(PUSH(ax));	// 5021 push    ax ;~ 01A2:2D3F
cs=0x1a2;eip=0x002d40; 	T(MOV(ax, 0x444));	// 5022 mov     ax, 444h ;~ 01A2:2D40
cs=0x1a2;eip=0x002d43; 	X(PUSH(ax));	// 5023 push    ax ;~ 01A2:2D43
cs=0x1a2;eip=0x002d44; 	T(MOV(al, *(raddr(ss,bp+var_1c))));	// 5024 mov     al, [bp+var_1C] ;~ 01A2:2D44
cs=0x1a2;eip=0x002d47; 	T(CBW);	// 5025 cbw ;~ 01A2:2D47
cs=0x1a2;eip=0x002d48; 	X(PUSH(ax));	// 5026 push    ax ;~ 01A2:2D48
cs=0x1a2;eip=0x002d49; 	R(CALLF(mouse_timer_sprite_unk,0));	// 5027 call    mouse_timer_sprite_unk ;~ 01A2:2D49
cs=0x1a2;eip=0x002d4e; 	T(ADD(sp, 0x0E));	// 5028 add     sp, 0Eh ;~ 01A2:2D4E
cs=0x1a2;eip=0x002d51; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 5029 mov     [bp+var_10], ax ;~ 01A2:2D51
cs=0x1a2;eip=0x002d54; 	X(PUSH(ax));	// 5030 push    ax ;~ 01A2:2D54
cs=0x1a2;eip=0x002d55; 	R(CALLF(input_checking,0));	// 5031 call    input_checking ;~ 01A2:2D55
cs=0x1a2;eip=0x002d5a; 	T(ADD(sp, 2));	// 5032 add     sp, 2 ;~ 01A2:2D5A
cs=0x1a2;eip=0x002d5d; 	T(MOV(si, ax));	// 5033 mov     si, ax ;~ 01A2:2D5D
cs=0x1a2;eip=0x002d5f; 	T(MOV(ax, offset(dseg,opponentmenu_buttons_y2)));	// 5034 mov     ax, offset opponentmenu_buttons_y2 ;~ 01A2:2D5F
cs=0x1a2;eip=0x002d62; 	X(PUSH(ax));	// 5035 push    ax ;~ 01A2:2D62
cs=0x1a2;eip=0x002d63; 	T(MOV(ax, offset(dseg,opponentmenu_buttons_y1)));	// 5036 mov     ax, offset opponentmenu_buttons_y1 ;~ 01A2:2D63
cs=0x1a2;eip=0x002d66; 	X(PUSH(ax));	// 5037 push    ax ;~ 01A2:2D66
cs=0x1a2;eip=0x002d67; 	T(MOV(ax, offset(dseg,opponentmenu_buttons_x2)));	// 5038 mov     ax, offset opponentmenu_buttons_x2 ;~ 01A2:2D67
cs=0x1a2;eip=0x002d6a; 	X(PUSH(ax));	// 5039 push    ax ;~ 01A2:2D6A
cs=0x1a2;eip=0x002d6b; 	T(MOV(ax, offset(dseg,opponentmenu_buttons_x1)));	// 5040 mov     ax, offset opponentmenu_buttons_x1 ;~ 01A2:2D6B
cs=0x1a2;eip=0x002d6e; 	X(PUSH(ax));	// 5041 push    ax ;~ 01A2:2D6E
cs=0x1a2;eip=0x002d6f; 	T(MOV(ax, 5));	// 5042 mov     ax, 5 ;~ 01A2:2D6F
cs=0x1a2;eip=0x002d72; 	X(PUSH(ax));	// 5043 push    ax ;~ 01A2:2D72
cs=0x1a2;eip=0x002d73; 	R(CALLF(mouse_multi_hittest,0));	// 5044 call    mouse_multi_hittest ;~ 01A2:2D73
cs=0x1a2;eip=0x002d78; 	T(ADD(sp, 0x0A));	// 5045 add     sp, 0Ah ;~ 01A2:2D78
cs=0x1a2;eip=0x002d7b; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 5046 mov     [bp+var_16], al ;~ 01A2:2D7B
cs=0x1a2;eip=0x002d7e; 	T(CMP(al, 0x0FF));	// 5047 cmp     al, 0FFh ;~ 01A2:2D7E
cs=0x1a2;eip=0x002d80; 	R(JZ(loc_12d93));	// 5048 jz      short loc_12D93 ;~ 01A2:2D80
cs=0x1a2;eip=0x002d82; 	T(CMP(byte_449aa, 0));	// 5049 cmp     byte_449AA, 0 ;~ 01A2:2D82
cs=0x1a2;eip=0x002d87; 	R(JNZ(loc_12d8d));	// 5050 jnz     short loc_12D8D ;~ 01A2:2D87
cs=0x1a2;eip=0x002d89; 	T(CMP(al, 3));	// 5051 cmp     al, 3 ;~ 01A2:2D89
cs=0x1a2;eip=0x002d8b; 	R(JZ(loc_12d93));	// 5052 jz      short loc_12D93 ;~ 01A2:2D8B
loc_12d8d:
	// 4597 
cs=0x1a2;eip=0x002d8d; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 5055 mov     al, [bp+var_16] ;~ 01A2:2D8D
cs=0x1a2;eip=0x002d90; 	X(MOV(*(raddr(ss,bp+var_1c)), al));	// 5056 mov     [bp+var_1C], al ;~ 01A2:2D90
loc_12d93:
	// 4598 
cs=0x1a2;eip=0x002d93; 	T(OR(si, si));	// 5060 or      si, si ;~ 01A2:2D93
cs=0x1a2;eip=0x002d95; 	R(JNZ(loc_12d9a));	// 5061 jnz     short loc_12D9A ;~ 01A2:2D95
cs=0x1a2;eip=0x002d97; 	R(JMP(loc_129a8));	// 5062 jmp     loc_129A8 ;~ 01A2:2D97
loc_12d9a:
	// 4599 
cs=0x1a2;eip=0x002d9a; 	T(MOV(ax, si));	// 5066 mov     ax, si ;~ 01A2:2D9A
cs=0x1a2;eip=0x002d9c; 	T(CMP(ax, 0x0D));	// 5067 cmp     ax, 0Dh ;~ 01A2:2D9C
cs=0x1a2;eip=0x002d9f; 	R(JZ(loc_12dbe));	// 5068 jz      short loc_12DBE ;~ 01A2:2D9F
cs=0x1a2;eip=0x002da1; 	T(CMP(ax, 0x1B));	// 5069 cmp     ax, 1Bh ;~ 01A2:2DA1
cs=0x1a2;eip=0x002da4; 	R(JZ(loc_12dbe));	// 5070 jz      short loc_12DBE ;~ 01A2:2DA4
cs=0x1a2;eip=0x002da6; 	T(CMP(ax, 0x20));	// 5071 cmp     ax, 20h ; ' ' ;~ 01A2:2DA6
cs=0x1a2;eip=0x002da9; 	R(JZ(loc_12dbe));	// 5072 jz      short loc_12DBE ;~ 01A2:2DA9
cs=0x1a2;eip=0x002dab; 	T(CMP(ax, 0x4B00));	// 5073 cmp     ax, 4B00h ;~ 01A2:2DAB
cs=0x1a2;eip=0x002dae; 	R(JNZ(loc_12db3));	// 5074 jnz     short loc_12DB3 ;~ 01A2:2DAE
cs=0x1a2;eip=0x002db0; 	R(JMP(loc_12ef6));	// 5075 jmp     loc_12EF6 ;~ 01A2:2DB0
loc_12db3:
	// 4600 
cs=0x1a2;eip=0x002db3; 	T(CMP(ax, 0x4D00));	// 5079 cmp     ax, 4D00h ;~ 01A2:2DB3
cs=0x1a2;eip=0x002db6; 	R(JNZ(loc_12dbb));	// 5080 jnz     short loc_12DBB ;~ 01A2:2DB6
cs=0x1a2;eip=0x002db8; 	R(JMP(loc_12f20));	// 5081 jmp     loc_12F20 ;~ 01A2:2DB8
loc_12dbb:
	// 4601 
cs=0x1a2;eip=0x002dbb; 	R(JMP(loc_129a8));	// 5085 jmp     loc_129A8 ;~ 01A2:2DBB
loc_12dbe:
	// 4602 
cs=0x1a2;eip=0x002dbe; 	T(MOV(al, *(raddr(ss,bp+var_1c))));	// 5090 mov     al, [bp+var_1C] ;~ 01A2:2DBE
cs=0x1a2;eip=0x002dc1; 	T(CBW);	// 5091 cbw ;~ 01A2:2DC1
cs=0x1a2;eip=0x002dc2; 	T(OR(ax, ax));	// 5092 or      ax, ax ;~ 01A2:2DC2
cs=0x1a2;eip=0x002dc4; 	R(JZ(loc_12de0));	// 5093 jz      short loc_12DE0 ;~ 01A2:2DC4
cs=0x1a2;eip=0x002dc6; 	T(CMP(ax, 1));	// 5094 cmp     ax, 1 ;~ 01A2:2DC6
cs=0x1a2;eip=0x002dc9; 	R(JZ(loc_12df6));	// 5095 jz      short loc_12DF6 ;~ 01A2:2DC9
cs=0x1a2;eip=0x002dcb; 	T(CMP(ax, 2));	// 5096 cmp     ax, 2 ;~ 01A2:2DCB
cs=0x1a2;eip=0x002dce; 	R(JZ(loc_12e0c));	// 5097 jz      short loc_12E0C ;~ 01A2:2DCE
cs=0x1a2;eip=0x002dd0; 	T(CMP(ax, 3));	// 5098 cmp     ax, 3 ;~ 01A2:2DD0
cs=0x1a2;eip=0x002dd3; 	R(JZ(loc_12e14));	// 5099 jz      short loc_12E14 ;~ 01A2:2DD3
cs=0x1a2;eip=0x002dd5; 	T(CMP(ax, 4));	// 5100 cmp     ax, 4 ;~ 01A2:2DD5
cs=0x1a2;eip=0x002dd8; 	R(JNZ(loc_12ddd));	// 5101 jnz     short loc_12DDD ;~ 01A2:2DD8
cs=0x1a2;eip=0x002dda; 	R(JMP(loc_12e6a));	// 5102 jmp     loc_12E6A ;~ 01A2:2DDA
loc_12ddd:
	// 4603 
cs=0x1a2;eip=0x002ddd; 	R(JMP(loc_129a8));	// 5106 jmp     loc_129A8 ;~ 01A2:2DDD
loc_12de0:
	// 4604 
cs=0x1a2;eip=0x002de0; 	X(DEC(byte_449aa));	// 5110 dec     byte_449AA ;~ 01A2:2DE0
cs=0x1a2;eip=0x002de4; 	T(CMP(byte_449aa, 1));	// 5111 cmp     byte_449AA, 1 ;~ 01A2:2DE4
cs=0x1a2;eip=0x002de9; 	R(JL(loc_12dee));	// 5112 jl      short loc_12DEE ;~ 01A2:2DE9
cs=0x1a2;eip=0x002deb; 	R(JMP(loc_129a8));	// 5113 jmp     loc_129A8 ;~ 01A2:2DEB
loc_12dee:
	// 4605 
cs=0x1a2;eip=0x002dee; 	X(MOV(byte_449aa, 6));	// 5117 mov     byte_449AA, 6 ;~ 01A2:2DEE
cs=0x1a2;eip=0x002df3; 	R(JMP(loc_129a8));	// 5118 jmp     loc_129A8 ;~ 01A2:2DF3
loc_12df6:
	// 4606 
cs=0x1a2;eip=0x002df6; 	X(INC(byte_449aa));	// 5122 inc     byte_449AA ;~ 01A2:2DF6
cs=0x1a2;eip=0x002dfa; 	T(CMP(byte_449aa, 7));	// 5123 cmp     byte_449AA, 7 ;~ 01A2:2DFA
cs=0x1a2;eip=0x002dff; 	R(JZ(loc_12e04));	// 5124 jz      short loc_12E04 ;~ 01A2:2DFF
cs=0x1a2;eip=0x002e01; 	R(JMP(loc_129a8));	// 5125 jmp     loc_129A8 ;~ 01A2:2E01
loc_12e04:
	// 4607 
cs=0x1a2;eip=0x002e04; 	X(MOV(byte_449aa, 1));	// 5129 mov     byte_449AA, 1 ;~ 01A2:2E04
cs=0x1a2;eip=0x002e09; 	R(JMP(loc_129a8));	// 5130 jmp     loc_129A8 ;~ 01A2:2E09
loc_12e0c:
	// 4608 
cs=0x1a2;eip=0x002e0c; 	X(MOV(byte_449aa, 0));	// 5134 mov     byte_449AA, 0 ;~ 01A2:2E0C
cs=0x1a2;eip=0x002e11; 	R(JMP(loc_129a8));	// 5135 jmp     loc_129A8 ;~ 01A2:2E11
loc_12e14:
	// 4609 
cs=0x1a2;eip=0x002e14; 	T(CMP(byte_449aa, 0));	// 5139 cmp     byte_449AA, 0 ;~ 01A2:2E14
cs=0x1a2;eip=0x002e19; 	R(JNZ(loc_12e1e));	// 5140 jnz     short loc_12E1E ;~ 01A2:2E19
cs=0x1a2;eip=0x002e1b; 	R(JMP(loc_129a8));	// 5141 jmp     loc_129A8 ;~ 01A2:2E1B
loc_12e1e:
	// 4610 
cs=0x1a2;eip=0x002e1e; 	R(CALLF(check_input,0));	// 5145 call    check_input ;~ 01A2:2E1E
cs=0x1a2;eip=0x002e23; 	R(CALLF(mouse_draw_opaque_check,0));	// 5146 call    mouse_draw_opaque_check ;~ 01A2:2E23
cs=0x1a2;eip=0x002e28; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 5147 push    word ptr wndsprite+2 ;~ 01A2:2E28
cs=0x1a2;eip=0x002e2c; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 5148 push    word ptr wndsprite ;~ 01A2:2E2C
cs=0x1a2;eip=0x002e30; 	R(CALLF(sprite_free_wnd,0));	// 5149 call    sprite_free_wnd ;~ 01A2:2E30
cs=0x1a2;eip=0x002e35; 	T(ADD(sp, 4));	// 5150 add     sp, 4 ;~ 01A2:2E35
cs=0x1a2;eip=0x002e38; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 5151 push    [bp+var_A] ;~ 01A2:2E38
cs=0x1a2;eip=0x002e3b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 5152 push    [bp+var_C] ;~ 01A2:2E3B
cs=0x1a2;eip=0x002e3e; 	R(CALLF(unload_resource,0));	// 5153 call    unload_resource ;~ 01A2:2E3E
cs=0x1a2;eip=0x002e43; 	T(ADD(sp, 4));	// 5154 add     sp, 4 ;~ 01A2:2E43
cs=0x1a2;eip=0x002e46; 	R(CALLF(show_waiting,0));	// 5155 call    show_waiting ;~ 01A2:2E46
cs=0x1a2;eip=0x002e4b; 	T(MOV(al, byte_449aa));	// 5156 mov     al, byte_449AA ;~ 01A2:2E4B
cs=0x1a2;eip=0x002e4e; 	T(CBW);	// 5157 cbw ;~ 01A2:2E4E
cs=0x1a2;eip=0x002e4f; 	X(PUSH(ax));	// 5158 push    ax ;~ 01A2:2E4F
cs=0x1a2;eip=0x002e50; 	T(MOV(ax, offset(dseg,byte_449b0)));	// 5159 mov     ax, offset byte_449B0 ;~ 01A2:2E50
cs=0x1a2;eip=0x002e53; 	X(PUSH(ax));	// 5160 push    ax ;~ 01A2:2E53
cs=0x1a2;eip=0x002e54; 	T(MOV(ax, offset(dseg,byte_449af)));	// 5161 mov     ax, offset byte_449AF ;~ 01A2:2E54
cs=0x1a2;eip=0x002e57; 	X(PUSH(ax));	// 5162 push    ax ;~ 01A2:2E57
cs=0x1a2;eip=0x002e58; 	T(MOV(ax, offset(dseg,byte_449ab)));	// 5163 mov     ax, offset byte_449AB ;~ 01A2:2E58
cs=0x1a2;eip=0x002e5b; 	X(PUSH(ax));	// 5164 push    ax ;~ 01A2:2E5B
cs=0x1a2;eip=0x002e5c; 	X(PUSH(cs));	// 5165 push    cs ;~ 01A2:2E5C
cs=0x1a2;eip=0x002e5d; 	R(CALL(run_car_menu,0));	// 5166 call    near ptr run_car_menu ;~ 01A2:2E5D
cs=0x1a2;eip=0x002e60; 	T(ADD(sp, 8));	// 5167 add     sp, 8 ;~ 01A2:2E60
cs=0x1a2;eip=0x002e63; 	X(MOV(*(raddr(ss,bp+var_1e)), 0x0FF));	// 5168 mov     [bp+var_1E], 0FFh ;~ 01A2:2E63
cs=0x1a2;eip=0x002e67; 	R(JMP(loc_129a3));	// 5169 jmp     loc_129A3 ;~ 01A2:2E67
loc_12e6a:
	// 4611 
cs=0x1a2;eip=0x002e6a; 	T(CMP(byte_449aa, 0));	// 5173 cmp     byte_449AA, 0 ;~ 01A2:2E6A
cs=0x1a2;eip=0x002e6f; 	R(JZ(loc_12ea2));	// 5174 jz      short loc_12EA2 ;~ 01A2:2E6F
cs=0x1a2;eip=0x002e71; 	T(CMP(byte_449ab, 0x0FF));	// 5175 cmp     byte_449AB, 0FFh ;~ 01A2:2E71
cs=0x1a2;eip=0x002e76; 	R(JNZ(loc_12ea7));	// 5176 jnz     short loc_12EA7 ;~ 01A2:2E76
cs=0x1a2;eip=0x002e78; 	T(MOV(al, gameconfig));	// 5177 mov     al, gameconfig ;~ 01A2:2E78
cs=0x1a2;eip=0x002e7b; 	X(MOV(byte_449ab, al));	// 5178 mov     byte_449AB, al ;~ 01A2:2E7B
cs=0x1a2;eip=0x002e7e; 	T(MOV(al, byte_449a5));	// 5179 mov     al, byte_449A5 ;~ 01A2:2E7E
cs=0x1a2;eip=0x002e81; 	X(MOV(byte_449ac, al));	// 5180 mov     byte_449AC, al ;~ 01A2:2E81
cs=0x1a2;eip=0x002e84; 	T(MOV(al, byte_449a6));	// 5181 mov     al, byte_449A6 ;~ 01A2:2E84
cs=0x1a2;eip=0x002e87; 	X(MOV(byte_449ad, al));	// 5182 mov     byte_449AD, al ;~ 01A2:2E87
cs=0x1a2;eip=0x002e8a; 	T(MOV(al, byte_449a7));	// 5183 mov     al, byte_449A7 ;~ 01A2:2E8A
cs=0x1a2;eip=0x002e8d; 	X(MOV(byte_449ae, al));	// 5184 mov     byte_449AE, al ;~ 01A2:2E8D
cs=0x1a2;eip=0x002e90; 	T(MOV(al, byte_449a8));	// 5185 mov     al, byte_449A8 ;~ 01A2:2E90
cs=0x1a2;eip=0x002e93; 	T(AND(al, 1));	// 5186 and     al, 1 ;~ 01A2:2E93
cs=0x1a2;eip=0x002e95; 	T(XOR(al, 1));	// 5187 xor     al, 1 ;~ 01A2:2E95
cs=0x1a2;eip=0x002e97; 	X(MOV(byte_449af, al));	// 5188 mov     byte_449AF, al ;~ 01A2:2E97
cs=0x1a2;eip=0x002e9a; 	X(MOV(byte_449b0, 0));	// 5189 mov     byte_449B0, 0 ;~ 01A2:2E9A
cs=0x1a2;eip=0x002e9f; 	R(JMP(loc_12ea7));	// 5190 jmp     short loc_12EA7 ;~ 01A2:2E9F
loc_12ea2:
	// 4612 
cs=0x1a2;eip=0x002ea2; 	X(MOV(byte_449ab, 0x0FF));	// 5195 mov     byte_449AB, 0FFh ;~ 01A2:2EA2
loc_12ea7:
	// 4613 
cs=0x1a2;eip=0x002ea7; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 5199 push    word ptr wndsprite+2 ;~ 01A2:2EA7
cs=0x1a2;eip=0x002eab; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 5200 push    word ptr wndsprite ;~ 01A2:2EAB
cs=0x1a2;eip=0x002eaf; 	R(CALLF(sprite_free_wnd,0));	// 5201 call    sprite_free_wnd ;~ 01A2:2EAF
cs=0x1a2;eip=0x002eb4; 	T(ADD(sp, 4));	// 5202 add     sp, 4 ;~ 01A2:2EB4
cs=0x1a2;eip=0x002eb7; 	T(CMP(*(raddr(ss,bp+var_6)), 0));	// 5203 cmp     [bp+var_6], 0 ;~ 01A2:2EB7
cs=0x1a2;eip=0x002ebb; 	R(JZ(loc_12ecb));	// 5204 jz      short loc_12ECB ;~ 01A2:2EBB
cs=0x1a2;eip=0x002ebd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 5205 push    [bp+var_A] ;~ 01A2:2EBD
cs=0x1a2;eip=0x002ec0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 5206 push    [bp+var_C] ;~ 01A2:2EC0
cs=0x1a2;eip=0x002ec3; 	R(CALLF(unload_resource,0));	// 5207 call    unload_resource ;~ 01A2:2EC3
cs=0x1a2;eip=0x002ec8; 	T(ADD(sp, 4));	// 5208 add     sp, 4 ;~ 01A2:2EC8
loc_12ecb:
	// 4614 
cs=0x1a2;eip=0x002ecb; 	X(PUSH(word_44a02));	// 5211 push    word_44A02 ;~ 01A2:2ECB
cs=0x1a2;eip=0x002ecf; 	X(PUSH(opp_res));	// 5212 push    opp_res ;~ 01A2:2ECF
cs=0x1a2;eip=0x002ed3; 	R(CALLF(mmgr_free,0));	// 5213 call    mmgr_free ;~ 01A2:2ED3
cs=0x1a2;eip=0x002ed8; 	T(ADD(sp, 4));	// 5214 add     sp, 4 ;~ 01A2:2ED8
cs=0x1a2;eip=0x002edb; 	X(PUSH(word_455ce));	// 5215 push    word_455CE ;~ 01A2:2EDB
cs=0x1a2;eip=0x002edf; 	X(PUSH(miscptr));	// 5216 push    miscptr ;~ 01A2:2EDF
cs=0x1a2;eip=0x002ee3; 	R(CALLF(unload_resource,0));	// 5217 call    unload_resource ;~ 01A2:2EE3
cs=0x1a2;eip=0x002ee8; 	T(ADD(sp, 4));	// 5218 add     sp, 4 ;~ 01A2:2EE8
cs=0x1a2;eip=0x002eeb; 	R(CALLF(mouse_draw_opaque_check,0));	// 5219 call    mouse_draw_opaque_check ;~ 01A2:2EEB
cs=0x1a2;eip=0x002ef0; 	X(POP(si));	// 5220 pop     si ;~ 01A2:2EF0
cs=0x1a2;eip=0x002ef1; 	T(MOV(sp, bp));	// 5221 mov     sp, bp ;~ 01A2:2EF1
cs=0x1a2;eip=0x002ef3; 	X(POP(bp));	// 5222 pop     bp ;~ 01A2:2EF3
cs=0x1a2;eip=0x002ef4; 	R(RETF(0));	// 5223 retf ;~ 01A2:2EF4
loc_12ef6:
	// 4615 
cs=0x1a2;eip=0x002ef6; 	T(CMP(*(raddr(ss,bp+var_1c)), 0));	// 5228 cmp     [bp+var_1C], 0 ;~ 01A2:2EF6
cs=0x1a2;eip=0x002efa; 	R(JZ(loc_12f02));	// 5229 jz      short loc_12F02 ;~ 01A2:2EFA
cs=0x1a2;eip=0x002efc; 	X(DEC(*(raddr(ss,bp+var_1c))));	// 5230 dec     [bp+var_1C] ;~ 01A2:2EFC
cs=0x1a2;eip=0x002eff; 	R(JMP(loc_12f06));	// 5231 jmp     short loc_12F06 ;~ 01A2:2EFF
loc_12f02:
	// 4616 
cs=0x1a2;eip=0x002f02; 	X(MOV(*(raddr(ss,bp+var_1c)), 4));	// 5236 mov     [bp+var_1C], 4 ;~ 01A2:2F02
loc_12f06:
	// 4617 
cs=0x1a2;eip=0x002f06; 	T(CMP(byte_449aa, 0));	// 5239 cmp     byte_449AA, 0 ;~ 01A2:2F06
cs=0x1a2;eip=0x002f0b; 	R(JZ(loc_12f10));	// 5240 jz      short loc_12F10 ;~ 01A2:2F0B
cs=0x1a2;eip=0x002f0d; 	R(JMP(loc_129a8));	// 5241 jmp     loc_129A8 ;~ 01A2:2F0D
loc_12f10:
	// 4618 
cs=0x1a2;eip=0x002f10; 	T(CMP(*(raddr(ss,bp+var_1c)), 3));	// 5245 cmp     [bp+var_1C], 3 ;~ 01A2:2F10
cs=0x1a2;eip=0x002f14; 	R(JZ(loc_12f19));	// 5246 jz      short loc_12F19 ;~ 01A2:2F14
cs=0x1a2;eip=0x002f16; 	R(JMP(loc_129a8));	// 5247 jmp     loc_129A8 ;~ 01A2:2F16
loc_12f19:
	// 4619 
cs=0x1a2;eip=0x002f19; 	X(DEC(*(raddr(ss,bp+var_1c))));	// 5251 dec     [bp+var_1C] ;~ 01A2:2F19
cs=0x1a2;eip=0x002f1c; 	R(JMP(loc_129a8));	// 5252 jmp     loc_129A8 ;~ 01A2:2F1C
loc_12f20:
	// 4620 
cs=0x1a2;eip=0x002f20; 	T(CMP(*(raddr(ss,bp+var_1c)), 4));	// 5257 cmp     [bp+var_1C], 4 ;~ 01A2:2F20
cs=0x1a2;eip=0x002f24; 	R(JGE(loc_12f2c));	// 5258 jge     short loc_12F2C ;~ 01A2:2F24
cs=0x1a2;eip=0x002f26; 	X(INC(*(raddr(ss,bp+var_1c))));	// 5259 inc     [bp+var_1C] ;~ 01A2:2F26
cs=0x1a2;eip=0x002f29; 	R(JMP(loc_12f30));	// 5260 jmp     short loc_12F30 ;~ 01A2:2F29
loc_12f2c:
	// 4621 
cs=0x1a2;eip=0x002f2c; 	X(MOV(*(raddr(ss,bp+var_1c)), 0));	// 5265 mov     [bp+var_1C], 0 ;~ 01A2:2F2C
loc_12f30:
	// 4622 
cs=0x1a2;eip=0x002f30; 	T(CMP(byte_449aa, 0));	// 5268 cmp     byte_449AA, 0 ;~ 01A2:2F30
cs=0x1a2;eip=0x002f35; 	R(JZ(loc_12f3a));	// 5269 jz      short loc_12F3A ;~ 01A2:2F35
cs=0x1a2;eip=0x002f37; 	R(JMP(loc_129a8));	// 5270 jmp     loc_129A8 ;~ 01A2:2F37
loc_12f3a:
	// 4623 
cs=0x1a2;eip=0x002f3a; 	T(CMP(*(raddr(ss,bp+var_1c)), 3));	// 5274 cmp     [bp+var_1C], 3 ;~ 01A2:2F3A
cs=0x1a2;eip=0x002f3e; 	R(JZ(loc_12f43));	// 5275 jz      short loc_12F43 ;~ 01A2:2F3E
cs=0x1a2;eip=0x002f40; 	R(JMP(loc_129a8));	// 5276 jmp     loc_129A8 ;~ 01A2:2F40
loc_12f43:
	// 4624 
cs=0x1a2;eip=0x002f43; 	X(INC(*(raddr(ss,bp+var_1c))));	// 5280 inc     [bp+var_1C] ;~ 01A2:2F43
cs=0x1a2;eip=0x002f46; 	R(JMP(loc_129a8));	// 5281 jmp     loc_129A8 ;~ 01A2:2F46
run_option_menu:
	// 5291 
#undef var_6
#define var_6 -6
	// 5293 var_6           = byte ptr -6 ;~ 01A2:2F4A
#undef var_4
#define var_4 -4
	// 5294 var_4           = byte ptr -4 ;~ 01A2:2F4A
#undef var_2
#define var_2 -2
	// 5295 var_2           = byte ptr -2 ;~ 01A2:2F4A
ret_1a2_2f4a:
	// 4625 
cs=0x1a2;eip=0x002f4a; 	X(PUSH(bp));	// 5297 push    bp ;~ 01A2:2F4A
cs=0x1a2;eip=0x002f4b; 	T(MOV(bp, sp));	// 5298 mov     bp, sp ;~ 01A2:2F4B
cs=0x1a2;eip=0x002f4d; 	T(SUB(sp, 6));	// 5299 sub     sp, 6 ;~ 01A2:2F4D
cs=0x1a2;eip=0x002f50; 	T(MOV(ax, offset(dseg,amisc_1)));	// 5300 mov     ax, offset aMisc_1 ; "misc" ;~ 01A2:2F50
cs=0x1a2;eip=0x002f53; 	X(PUSH(ax));	// 5301 push    ax ;~ 01A2:2F53
cs=0x1a2;eip=0x002f54; 	R(CALLF(file_load_resfile,0));	// 5302 call    file_load_resfile ;~ 01A2:2F54
cs=0x1a2;eip=0x002f59; 	T(ADD(sp, 2));	// 5303 add     sp, 2 ;~ 01A2:2F59
cs=0x1a2;eip=0x002f5c; 	X(MOV(miscptr, ax));	// 5304 mov     miscptr, ax ;~ 01A2:2F5C
cs=0x1a2;eip=0x002f5f; 	X(MOV(word_455ce, dx));	// 5305 mov     word_455CE, dx ;~ 01A2:2F5F
cs=0x1a2;eip=0x002f63; 	R(CALLF(sprite_copy_2_to_1_2,0));	// 5306 call    sprite_copy_2_to_1_2 ;~ 01A2:2F63
cs=0x1a2;eip=0x002f68; 	X(PUSH(word_407fa));	// 5307 push    word_407FA ;~ 01A2:2F68
cs=0x1a2;eip=0x002f6c; 	R(CALLF(sprite_clear_1_color,0));	// 5308 call    sprite_clear_1_color ;~ 01A2:2F6C
cs=0x1a2;eip=0x002f71; 	T(ADD(sp, 2));	// 5309 add     sp, 2 ;~ 01A2:2F71
cs=0x1a2;eip=0x002f74; 	T(MOV(ax, offset(dseg,agstu)));	// 5310 mov     ax, offset aGstu ; "gstu" ;~ 01A2:2F74
cs=0x1a2;eip=0x002f77; 	X(PUSH(ax));	// 5311 push    ax ;~ 01A2:2F77
cs=0x1a2;eip=0x002f78; 	X(PUSH(word_455ce));	// 5312 push    word_455CE ;~ 01A2:2F78
cs=0x1a2;eip=0x002f7c; 	X(PUSH(miscptr));	// 5313 push    miscptr ;~ 01A2:2F7C
cs=0x1a2;eip=0x002f80; 	R(CALLF(locate_shape_alt,0));	// 5314 call    locate_shape_alt ;~ 01A2:2F80
cs=0x1a2;eip=0x002f85; 	T(ADD(sp, 6));	// 5315 add     sp, 6 ;~ 01A2:2F85
cs=0x1a2;eip=0x002f88; 	X(PUSH(dx));	// 5316 push    dx ;~ 01A2:2F88
cs=0x1a2;eip=0x002f89; 	X(PUSH(ax));	// 5317 push    ax ;~ 01A2:2F89
cs=0x1a2;eip=0x002f8a; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5318 mov     ax, offset resID_byte1 ;~ 01A2:2F8A
cs=0x1a2;eip=0x002f8d; 	X(PUSH(ax));	// 5319 push    ax ;~ 01A2:2F8D
cs=0x1a2;eip=0x002f8e; 	R(CALLF(copy_string,0));	// 5320 call    copy_string ;~ 01A2:2F8E
cs=0x1a2;eip=0x002f93; 	T(ADD(sp, 6));	// 5321 add     sp, 6 ;~ 01A2:2F93
cs=0x1a2;eip=0x002f96; 	T(SUB(ax, ax));	// 5322 sub     ax, ax ;~ 01A2:2F96
cs=0x1a2;eip=0x002f98; 	X(PUSH(ax));	// 5323 push    ax ;~ 01A2:2F98
cs=0x1a2;eip=0x002f99; 	X(PUSH(dialog_fnt_colour));	// 5324 push    dialog_fnt_colour ;~ 01A2:2F99
cs=0x1a2;eip=0x002f9d; 	T(MOV(ax, 6));	// 5325 mov     ax, 6 ;~ 01A2:2F9D
cs=0x1a2;eip=0x002fa0; 	X(PUSH(ax));	// 5326 push    ax ;~ 01A2:2FA0
cs=0x1a2;eip=0x002fa1; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5327 mov     ax, offset resID_byte1 ;~ 01A2:2FA1
cs=0x1a2;eip=0x002fa4; 	X(PUSH(ax));	// 5328 push    ax ;~ 01A2:2FA4
cs=0x1a2;eip=0x002fa5; 	R(CALLF(font_op2_alt,0));	// 5329 call    font_op2_alt ;~ 01A2:2FA5
cs=0x1a2;eip=0x002faa; 	T(ADD(sp, 2));	// 5330 add     sp, 2 ;~ 01A2:2FAA
cs=0x1a2;eip=0x002fad; 	X(PUSH(ax));	// 5331 push    ax ;~ 01A2:2FAD
cs=0x1a2;eip=0x002fae; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5332 mov     ax, offset resID_byte1 ;~ 01A2:2FAE
cs=0x1a2;eip=0x002fb1; 	X(PUSH(ax));	// 5333 push    ax ;~ 01A2:2FB1
cs=0x1a2;eip=0x002fb2; 	R(CALLF(intro_draw_text,0));	// 5334 call    intro_draw_text ;~ 01A2:2FB2
cs=0x1a2;eip=0x002fb7; 	T(ADD(sp, 0x0A));	// 5335 add     sp, 0Ah ;~ 01A2:2FB7
cs=0x1a2;eip=0x002fba; 	T(MOV(ax, offset(dseg,agver)));	// 5336 mov     ax, offset aGver ; "gver" ;~ 01A2:2FBA
cs=0x1a2;eip=0x002fbd; 	X(PUSH(ax));	// 5337 push    ax ;~ 01A2:2FBD
cs=0x1a2;eip=0x002fbe; 	X(PUSH(word_455ce));	// 5338 push    word_455CE ;~ 01A2:2FBE
cs=0x1a2;eip=0x002fc2; 	X(PUSH(miscptr));	// 5339 push    miscptr ;~ 01A2:2FC2
cs=0x1a2;eip=0x002fc6; 	R(CALLF(locate_shape_alt,0));	// 5340 call    locate_shape_alt ;~ 01A2:2FC6
cs=0x1a2;eip=0x002fcb; 	T(ADD(sp, 6));	// 5341 add     sp, 6 ;~ 01A2:2FCB
cs=0x1a2;eip=0x002fce; 	X(PUSH(dx));	// 5342 push    dx ;~ 01A2:2FCE
cs=0x1a2;eip=0x002fcf; 	X(PUSH(ax));	// 5343 push    ax ;~ 01A2:2FCF
cs=0x1a2;eip=0x002fd0; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5344 mov     ax, offset resID_byte1 ;~ 01A2:2FD0
cs=0x1a2;eip=0x002fd3; 	X(PUSH(ax));	// 5345 push    ax ;~ 01A2:2FD3
cs=0x1a2;eip=0x002fd4; 	R(CALLF(copy_string,0));	// 5346 call    copy_string ;~ 01A2:2FD4
cs=0x1a2;eip=0x002fd9; 	T(ADD(sp, 6));	// 5347 add     sp, 6 ;~ 01A2:2FD9
cs=0x1a2;eip=0x002fdc; 	T(SUB(ax, ax));	// 5348 sub     ax, ax ;~ 01A2:2FDC
cs=0x1a2;eip=0x002fde; 	X(PUSH(ax));	// 5349 push    ax ;~ 01A2:2FDE
cs=0x1a2;eip=0x002fdf; 	X(PUSH(dialog_fnt_colour));	// 5350 push    dialog_fnt_colour ;~ 01A2:2FDF
cs=0x1a2;eip=0x002fe3; 	T(MOV(ax, 0x10));	// 5351 mov     ax, 10h ;~ 01A2:2FE3
cs=0x1a2;eip=0x002fe6; 	X(PUSH(ax));	// 5352 push    ax ;~ 01A2:2FE6
cs=0x1a2;eip=0x002fe7; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5353 mov     ax, offset resID_byte1 ;~ 01A2:2FE7
cs=0x1a2;eip=0x002fea; 	X(PUSH(ax));	// 5354 push    ax ;~ 01A2:2FEA
cs=0x1a2;eip=0x002feb; 	R(CALLF(font_op2_alt,0));	// 5355 call    font_op2_alt ;~ 01A2:2FEB
cs=0x1a2;eip=0x002ff0; 	T(ADD(sp, 2));	// 5356 add     sp, 2 ;~ 01A2:2FF0
cs=0x1a2;eip=0x002ff3; 	X(PUSH(ax));	// 5357 push    ax ;~ 01A2:2FF3
cs=0x1a2;eip=0x002ff4; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5358 mov     ax, offset resID_byte1 ;~ 01A2:2FF4
cs=0x1a2;eip=0x002ff7; 	X(PUSH(ax));	// 5359 push    ax ;~ 01A2:2FF7
cs=0x1a2;eip=0x002ff8; 	R(CALLF(intro_draw_text,0));	// 5360 call    intro_draw_text ;~ 01A2:2FF8
cs=0x1a2;eip=0x002ffd; 	T(ADD(sp, 0x0A));	// 5361 add     sp, 0Ah ;~ 01A2:2FFD
cs=0x1a2;eip=0x003000; 	X(MOV(*(raddr(ss,bp+var_4)), 1));	// 5362 mov     [bp+var_4], 1 ;~ 01A2:3000
loc_13004:
	// 4626 
cs=0x1a2;eip=0x003004; 	T(SUB(ax, ax));	// 5365 sub     ax, ax ;~ 01A2:3004
cs=0x1a2;eip=0x003006; 	X(PUSH(ax));	// 5366 push    ax ;~ 01A2:3006
cs=0x1a2;eip=0x003007; 	X(PUSH(ax));	// 5367 push    ax ;~ 01A2:3007
cs=0x1a2;eip=0x003008; 	X(PUSH(dialogarg2));	// 5368 push    dialogarg2 ;~ 01A2:3008
cs=0x1a2;eip=0x00300c; 	T(MOV(ax, 0x0FFFF));	// 5369 mov     ax, 0FFFFh ;~ 01A2:300C
cs=0x1a2;eip=0x00300f; 	X(PUSH(ax));	// 5370 push    ax ;~ 01A2:300F
cs=0x1a2;eip=0x003010; 	X(PUSH(ax));	// 5371 push    ax ;~ 01A2:3010
cs=0x1a2;eip=0x003011; 	T(MOV(ax, offset(dseg,amop)));	// 5372 mov     ax, offset aMop ; "mop" ;~ 01A2:3011
cs=0x1a2;eip=0x003014; 	X(PUSH(ax));	// 5373 push    ax ;~ 01A2:3014
cs=0x1a2;eip=0x003015; 	X(PUSH(word_455ce));	// 5374 push    word_455CE ;~ 01A2:3015
cs=0x1a2;eip=0x003019; 	X(PUSH(miscptr));	// 5375 push    miscptr ;~ 01A2:3019
cs=0x1a2;eip=0x00301d; 	R(CALLF(locate_text_res,0));	// 5376 call    locate_text_res ;~ 01A2:301D
cs=0x1a2;eip=0x003022; 	T(ADD(sp, 6));	// 5377 add     sp, 6 ;~ 01A2:3022
cs=0x1a2;eip=0x003025; 	X(PUSH(dx));	// 5378 push    dx ;~ 01A2:3025
cs=0x1a2;eip=0x003026; 	X(PUSH(ax));	// 5379 push    ax ;~ 01A2:3026
cs=0x1a2;eip=0x003027; 	T(MOV(ax, 1));	// 5380 mov     ax, 1 ;~ 01A2:3027
cs=0x1a2;eip=0x00302a; 	X(PUSH(ax));	// 5381 push    ax ;~ 01A2:302A
cs=0x1a2;eip=0x00302b; 	T(MOV(ax, 2));	// 5382 mov     ax, 2 ;~ 01A2:302B
cs=0x1a2;eip=0x00302e; 	X(PUSH(ax));	// 5383 push    ax ;~ 01A2:302E
cs=0x1a2;eip=0x00302f; 	R(CALLF(show_dialog,0));	// 5384 call    show_dialog ;~ 01A2:302F
cs=0x1a2;eip=0x003034; 	T(ADD(sp, 0x12));	// 5385 add     sp, 12h ;~ 01A2:3034
cs=0x1a2;eip=0x003037; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 5386 mov     [bp+var_2], al ;~ 01A2:3037
cs=0x1a2;eip=0x00303a; 	T(CBW);	// 5387 cbw ;~ 01A2:303A
cs=0x1a2;eip=0x00303b; 	T(SUB(ax, 0x0FFFF));	// 5388 sub     ax, 0FFFFh      ; switch 8 cases ;~ 01A2:303B
cs=0x1a2;eip=0x00303e; 	T(CMP(ax, 7));	// 5389 cmp     ax, 7 ;~ 01A2:303E
cs=0x1a2;eip=0x003041; 	R(JBE(loc_13046));	// 5390 jbe     short loc_13046 ;~ 01A2:3041
cs=0x1a2;eip=0x003043; 	R(JMP(def_13049));	// 5391 jmp     def_13049       ; jumptable 00013049 default case ;~ 01A2:3043
loc_13046:
	// 4627 
cs=0x1a2;eip=0x003046; 	T(ADD(ax, ax));	// 5395 add     ax, ax ;~ 01A2:3046
cs=0x1a2;eip=0x003048; 	T(XCHG(ax, bx));	// 5396 xchg    ax, bx ;~ 01A2:3048
	cs=seg_offset(seg000);
cs=0x1a2;eip=0x003049; __disp=*(dw*)(((db*)&jpt_13049)+bx);
	R(JMP(__dispatch_call));	// 5397 jmp     cs:jpt_13049[bx] ; switch jump ;~ 01A2:3049
loc_1304e:
	// 4628 
cs=0x1a2;eip=0x00304e; 	T(CMP(byte_3b8f2, 0));	// 5402 cmp     byte_3B8F2, 0   ; jumptable 00013049 case 0 ;~ 01A2:304E
cs=0x1a2;eip=0x003053; 	R(JZ(loc_1305c));	// 5403 jz      short loc_1305C ;~ 01A2:3053
cs=0x1a2;eip=0x003055; 	X(MOV(*(raddr(ss,bp+var_6)), 2));	// 5404 mov     [bp+var_6], 2 ;~ 01A2:3055
cs=0x1a2;eip=0x003059; 	R(JMP(loc_1306e));	// 5405 jmp     short loc_1306E ;~ 01A2:3059
loc_1305c:
	// 4629 
cs=0x1a2;eip=0x00305c; 	T(CMP(byte_3fe00, 0));	// 5410 cmp     byte_3FE00, 0 ;~ 01A2:305C
cs=0x1a2;eip=0x003061; 	R(JZ(loc_1306a));	// 5411 jz      short loc_1306A ;~ 01A2:3061
cs=0x1a2;eip=0x003063; 	X(MOV(*(raddr(ss,bp+var_6)), 1));	// 5412 mov     [bp+var_6], 1 ;~ 01A2:3063
cs=0x1a2;eip=0x003067; 	R(JMP(loc_1306e));	// 5413 jmp     short loc_1306E ;~ 01A2:3067
loc_1306a:
	// 4630 
cs=0x1a2;eip=0x00306a; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 5418 mov     [bp+var_6], 0 ;~ 01A2:306A
loc_1306e:
	// 4631 
cs=0x1a2;eip=0x00306e; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 5422 mov     al, [bp+var_6] ;~ 01A2:306E
cs=0x1a2;eip=0x003071; 	T(CBW);	// 5423 cbw ;~ 01A2:3071
cs=0x1a2;eip=0x003072; 	X(PUSH(ax));	// 5424 push    ax ;~ 01A2:3072
cs=0x1a2;eip=0x003073; 	T(SUB(ax, ax));	// 5425 sub     ax, ax ;~ 01A2:3073
cs=0x1a2;eip=0x003075; 	X(PUSH(ax));	// 5426 push    ax ;~ 01A2:3075
cs=0x1a2;eip=0x003076; 	X(PUSH(performgraphcolor));	// 5427 push    performGraphColor ;~ 01A2:3076
cs=0x1a2;eip=0x00307a; 	T(MOV(ax, 0x0FFFF));	// 5428 mov     ax, 0FFFFh ;~ 01A2:307A
cs=0x1a2;eip=0x00307d; 	X(PUSH(ax));	// 5429 push    ax ;~ 01A2:307D
cs=0x1a2;eip=0x00307e; 	X(PUSH(ax));	// 5430 push    ax ;~ 01A2:307E
cs=0x1a2;eip=0x00307f; 	T(MOV(ax, offset(dseg,amid)));	// 5431 mov     ax, offset aMid ; "mid" ;~ 01A2:307F
cs=0x1a2;eip=0x003082; 	X(PUSH(ax));	// 5432 push    ax ;~ 01A2:3082
cs=0x1a2;eip=0x003083; 	X(PUSH(word_455ce));	// 5433 push    word_455CE ;~ 01A2:3083
cs=0x1a2;eip=0x003087; 	X(PUSH(miscptr));	// 5434 push    miscptr ;~ 01A2:3087
cs=0x1a2;eip=0x00308b; 	R(CALLF(locate_text_res,0));	// 5435 call    locate_text_res ;~ 01A2:308B
cs=0x1a2;eip=0x003090; 	T(ADD(sp, 6));	// 5436 add     sp, 6 ;~ 01A2:3090
cs=0x1a2;eip=0x003093; 	X(PUSH(dx));	// 5437 push    dx ;~ 01A2:3093
cs=0x1a2;eip=0x003094; 	X(PUSH(ax));	// 5438 push    ax ;~ 01A2:3094
cs=0x1a2;eip=0x003095; 	T(MOV(ax, 1));	// 5439 mov     ax, 1 ;~ 01A2:3095
cs=0x1a2;eip=0x003098; 	X(PUSH(ax));	// 5440 push    ax ;~ 01A2:3098
cs=0x1a2;eip=0x003099; 	T(MOV(ax, 2));	// 5441 mov     ax, 2 ;~ 01A2:3099
cs=0x1a2;eip=0x00309c; 	X(PUSH(ax));	// 5442 push    ax ;~ 01A2:309C
cs=0x1a2;eip=0x00309d; 	R(CALLF(show_dialog,0));	// 5443 call    show_dialog ;~ 01A2:309D
cs=0x1a2;eip=0x0030a2; 	T(ADD(sp, 0x12));	// 5444 add     sp, 12h ;~ 01A2:30A2
cs=0x1a2;eip=0x0030a5; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 5445 mov     [bp+var_2], al ;~ 01A2:30A5
cs=0x1a2;eip=0x0030a8; 	T(CBW);	// 5446 cbw ;~ 01A2:30A8
cs=0x1a2;eip=0x0030a9; 	T(OR(ax, ax));	// 5447 or      ax, ax ;~ 01A2:30A9
cs=0x1a2;eip=0x0030ab; 	R(JZ(loc_130ba));	// 5448 jz      short loc_130BA ;~ 01A2:30AB
cs=0x1a2;eip=0x0030ad; 	T(CMP(ax, 1));	// 5449 cmp     ax, 1 ;~ 01A2:30AD
cs=0x1a2;eip=0x0030b0; 	R(JZ(loc_130c2));	// 5450 jz      short loc_130C2 ;~ 01A2:30B0
cs=0x1a2;eip=0x0030b2; 	T(CMP(ax, 2));	// 5451 cmp     ax, 2 ;~ 01A2:30B2
cs=0x1a2;eip=0x0030b5; 	R(JZ(loc_130ca));	// 5452 jz      short loc_130CA ;~ 01A2:30B5
cs=0x1a2;eip=0x0030b7; 	R(JMP(def_13049));	// 5453 jmp     def_13049       ; jumptable 00013049 default case ;~ 01A2:30B7
loc_130ba:
	// 4632 
cs=0x1a2;eip=0x0030ba; 	R(CALLF(do_key_restext,0));	// 5457 call    do_key_restext ;~ 01A2:30BA
cs=0x1a2;eip=0x0030bf; 	R(JMP(def_13049));	// 5458 jmp     def_13049       ; jumptable 00013049 default case ;~ 01A2:30BF
loc_130c2:
	// 4633 
cs=0x1a2;eip=0x0030c2; 	R(CALLF(do_joy_restext,0));	// 5462 call    do_joy_restext ;~ 01A2:30C2
cs=0x1a2;eip=0x0030c7; 	R(JMP(def_13049));	// 5463 jmp     def_13049       ; jumptable 00013049 default case ;~ 01A2:30C7
loc_130ca:
	// 4634 
cs=0x1a2;eip=0x0030ca; 	R(CALLF(do_mou_restext,0));	// 5467 call    do_mou_restext ;~ 01A2:30CA
cs=0x1a2;eip=0x0030cf; 	R(JMP(def_13049));	// 5468 jmp     def_13049       ; jumptable 00013049 default case ;~ 01A2:30CF
loc_130d2:
	// 4635 
cs=0x1a2;eip=0x0030d2; 	R(CALLF(do_mof_restext,0));	// 5473 call    do_mof_restext  ; jumptable 00013049 case 1 ;~ 01A2:30D2
cs=0x1a2;eip=0x0030d7; 	R(JMP(def_13049));	// 5474 jmp     def_13049       ; jumptable 00013049 default case ;~ 01A2:30D7
loc_130da:
	// 4636 
cs=0x1a2;eip=0x0030da; 	R(CALLF(do_sonsof_restext,0));	// 5479 call    do_sonsof_restext ; jumptable 00013049 case 2 ;~ 01A2:30DA
cs=0x1a2;eip=0x0030df; 	R(JMP(def_13049));	// 5480 jmp     short def_13049 ; jumptable 00013049 default case ;~ 01A2:30DF
loc_130e2:
	// 4637 
cs=0x1a2;eip=0x0030e2; 	T(MOV(ax, offset(dseg,arep_0)));	// 5486 mov     ax, offset aRep_0 ; jumptable 00013049 case 3 ;~ 01A2:30E2
cs=0x1a2;eip=0x0030e5; 	X(PUSH(ax));	// 5487 push    ax ;~ 01A2:30E5
cs=0x1a2;eip=0x0030e6; 	X(PUSH(word_44cee));	// 5488 push    word_44CEE ;~ 01A2:30E6
cs=0x1a2;eip=0x0030ea; 	X(PUSH(mainresptr));	// 5489 push    mainresptr ;~ 01A2:30EA
cs=0x1a2;eip=0x0030ee; 	R(CALLF(locate_text_res,0));	// 5490 call    locate_text_res ;~ 01A2:30EE
cs=0x1a2;eip=0x0030f3; 	T(ADD(sp, 6));	// 5491 add     sp, 6 ;~ 01A2:30F3
cs=0x1a2;eip=0x0030f6; 	X(PUSH(dx));	// 5492 push    dx              ; int ;~ 01A2:30F6
cs=0x1a2;eip=0x0030f7; 	X(PUSH(ax));	// 5493 push    ax              ; int ;~ 01A2:30F7
cs=0x1a2;eip=0x0030f8; 	T(MOV(ax, offset(dseg,a_rpl_0)));	// 5494 mov     ax, offset a_rpl_0 ; ".rpl" ;~ 01A2:30F8
cs=0x1a2;eip=0x0030fb; 	X(PUSH(ax));	// 5495 push    ax              ; int ;~ 01A2:30FB
cs=0x1a2;eip=0x0030fc; 	T(MOV(ax, offset(dseg,adefault_1)));	// 5496 mov     ax, offset aDefault_1 ; "DEFAULT" ;~ 01A2:30FC
cs=0x1a2;eip=0x0030ff; 	X(PUSH(ax));	// 5497 push    ax ;~ 01A2:30FF
cs=0x1a2;eip=0x003100; 	T(MOV(ax, offset(dseg,byte_3b85e)));	// 5498 mov     ax, offset byte_3B85E ;~ 01A2:3100
cs=0x1a2;eip=0x003103; 	X(PUSH(ax));	// 5499 push    ax              ; char * ;~ 01A2:3103
cs=0x1a2;eip=0x003104; 	R(CALLF(do_fileselect_dialog,0));	// 5500 call    do_fileselect_dialog ;~ 01A2:3104
cs=0x1a2;eip=0x003109; 	T(ADD(sp, 0x0A));	// 5501 add     sp, 0Ah ;~ 01A2:3109
cs=0x1a2;eip=0x00310c; 	X(MOV(*(raddr(ss,bp+var_6)), al));	// 5502 mov     [bp+var_6], al ;~ 01A2:310C
cs=0x1a2;eip=0x00310f; 	T(OR(al, al));	// 5503 or      al, al ;~ 01A2:310F
cs=0x1a2;eip=0x003111; 	R(JZ(def_13049));	// 5504 jz      short def_13049 ; jumptable 00013049 default case ;~ 01A2:3111
cs=0x1a2;eip=0x003113; 	X(MOV(waitflag, 0x96));	// 5505 mov     waitflag, 96h ; '–' ;~ 01A2:3113
cs=0x1a2;eip=0x003119; 	R(CALLF(show_waiting,0));	// 5506 call    show_waiting ;~ 01A2:3119
cs=0x1a2;eip=0x00311e; 	T(MOV(ax, offset(dseg,adefault_1)));	// 5507 mov     ax, offset aDefault_1 ; "DEFAULT" ;~ 01A2:311E
cs=0x1a2;eip=0x003121; 	X(PUSH(ax));	// 5508 push    ax ;~ 01A2:3121
cs=0x1a2;eip=0x003122; 	T(MOV(ax, offset(dseg,byte_3b85e)));	// 5509 mov     ax, offset byte_3B85E ;~ 01A2:3122
cs=0x1a2;eip=0x003125; 	X(PUSH(ax));	// 5510 push    ax              ; char * ;~ 01A2:3125
cs=0x1a2;eip=0x003126; 	R(CALLF(file_load_replay,0));	// 5511 call    file_load_replay ;~ 01A2:3126
cs=0x1a2;eip=0x00312b; 	T(ADD(sp, 4));	// 5512 add     sp, 4 ;~ 01A2:312B
cs=0x1a2;eip=0x00312e; 	X(MOV(*(raddr(ss,bp+var_4)), 1));	// 5513 mov     [bp+var_4], 1 ;~ 01A2:312E
cs=0x1a2;eip=0x003132; 	R(JMP(loc_13163));	// 5514 jmp     short loc_13163 ;~ 01A2:3132
loc_13134:
	// 4638 
cs=0x1a2;eip=0x003134; 	R(CALLF(do_mrl_textres,0));	// 5519 call    do_mrl_textres  ; jumptable 00013049 case 4 ;~ 01A2:3134
cs=0x1a2;eip=0x003139; 	R(JMP(def_13049));	// 5520 jmp     short def_13049 ; jumptable 00013049 default case ;~ 01A2:3139
loc_1313c:
	// 4639 
cs=0x1a2;eip=0x00313c; 	R(CALLF(do_dos_restext,0));	// 5526 call    do_dos_restext  ; jumptable 00013049 case 5 ;~ 01A2:313C
cs=0x1a2;eip=0x003141; 	R(JMP(def_13049));	// 5527 jmp     short def_13049 ; jumptable 00013049 default case ;~ 01A2:3141
loc_13144:
	// 4640 
cs=0x1a2;eip=0x003144; 	X(MOV(*(raddr(ss,bp+var_4)), 0));	// 5533 mov     [bp+var_4], 0   ; jumptable 00013049 cases -1,6 ;~ 01A2:3144
cs=0x1a2;eip=0x003148; 	R(JMP(def_13049));	// 5534 jmp     short def_13049 ; jumptable 00013049 default case ;~ 01A2:3148
def_13049:
	// 4641 
cs=0x1a2;eip=0x00315a; 	T(CMP(*(raddr(ss,bp+var_4)), 0));	// 5548 cmp     [bp+var_4], 0   ; jumptable 00013049 default case ;~ 01A2:315A
cs=0x1a2;eip=0x00315e; 	R(JZ(loc_13163));	// 5549 jz      short loc_13163 ;~ 01A2:315E
cs=0x1a2;eip=0x003160; 	R(JMP(loc_13004));	// 5550 jmp     loc_13004 ;~ 01A2:3160
loc_13163:
	// 4642 
cs=0x1a2;eip=0x003163; 	X(PUSH(word_455ce));	// 5555 push    word_455CE ;~ 01A2:3163
cs=0x1a2;eip=0x003167; 	X(PUSH(miscptr));	// 5556 push    miscptr ;~ 01A2:3167
cs=0x1a2;eip=0x00316b; 	R(CALLF(unload_resource,0));	// 5557 call    unload_resource ;~ 01A2:316B
cs=0x1a2;eip=0x003170; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 5558 mov     al, [bp+var_4] ;~ 01A2:3170
cs=0x1a2;eip=0x003173; 	T(CBW);	// 5559 cbw ;~ 01A2:3173
cs=0x1a2;eip=0x003174; 	T(MOV(sp, bp));	// 5560 mov     sp, bp ;~ 01A2:3174
cs=0x1a2;eip=0x003176; 	X(POP(bp));	// 5561 pop     bp ;~ 01A2:3176
cs=0x1a2;eip=0x003177; 	R(RETF(0));	// 5562 retf ;~ 01A2:3177
end_hiscore:
	// 5570 
#undef var_9e
#define var_9e -0x9E
	// 5572 var_9E          = word ptr -9Eh ;~ 01A2:3178
#undef var_9c
#define var_9c -0x9C
	// 5573 var_9C          = word ptr -9Ch ;~ 01A2:3178
#undef var_9a
#define var_9a -0x9A
	// 5574 var_9A          = byte ptr -9Ah ;~ 01A2:3178
#undef var_98
#define var_98 -0x98
	// 5575 var_98          = byte ptr -98h ;~ 01A2:3178
#undef var_92
#define var_92 -0x92
	// 5576 var_92          = byte ptr -92h ;~ 01A2:3178
#undef var_90
#define var_90 -0x90
	// 5577 var_90          = word ptr -90h ;~ 01A2:3178
#undef var_8e
#define var_8e -0x8E
	// 5578 var_8E          = byte ptr -8Eh ;~ 01A2:3178
#undef var_8c
#define var_8c -0x8C
	// 5579 var_8C          = word ptr -8Ch ;~ 01A2:3178
#undef var_8a
#define var_8a -0x8A
	// 5580 var_8A          = word ptr -8Ah ;~ 01A2:3178
#undef var_88
#define var_88 -0x88
	// 5581 var_88          = word ptr -88h ;~ 01A2:3178
#undef var_86
#define var_86 -0x86
	// 5582 var_86          = dword ptr -86h ;~ 01A2:3178
#undef var_82
#define var_82 -0x82
	// 5583 var_82          = byte ptr -82h ;~ 01A2:3178
#undef var_80
#define var_80 -0x80
	// 5584 var_80          = word ptr -80h ;~ 01A2:3178
#undef var_7e
#define var_7e -0x7E
	// 5585 var_7E          = word ptr -7Eh ;~ 01A2:3178
#undef var_7c
#define var_7c -0x7C
	// 5586 var_7C          = word ptr -7Ch ;~ 01A2:3178
#undef var_7a
#define var_7a -0x7A
	// 5587 var_7A          = word ptr -7Ah ;~ 01A2:3178
#undef var_78
#define var_78 -0x78
	// 5588 var_78          = byte ptr -78h ;~ 01A2:3178
#undef var_72
#define var_72 -0x72
	// 5589 var_72          = word ptr -72h ;~ 01A2:3178
#undef var_70
#define var_70 -0x70
	// 5590 var_70          = word ptr -70h ;~ 01A2:3178
#undef var_6e
#define var_6e -0x6E
	// 5591 var_6E          = byte ptr -6Eh ;~ 01A2:3178
#undef var_6c
#define var_6c -0x6C
	// 5592 var_6C          = byte ptr -6Ch ;~ 01A2:3178
#undef var_6a
#define var_6a -0x6A
	// 5593 var_6A          = byte ptr -6Ah ;~ 01A2:3178
#undef var_68
#define var_68 -0x68
	// 5594 var_68          = word ptr -68h ;~ 01A2:3178
#undef var_66
#define var_66 -0x66
	// 5595 var_66          = word ptr -66h ;~ 01A2:3178
#undef var_64
#define var_64 -0x64
	// 5596 var_64          = byte ptr -64h ;~ 01A2:3178
#undef var_62
#define var_62 -0x62
	// 5597 var_62          = byte ptr -62h ;~ 01A2:3178
#undef var_5c
#define var_5c -0x5C
	// 5598 var_5C          = word ptr -5Ch ;~ 01A2:3178
#undef var_5a
#define var_5a -0x5A
	// 5599 var_5A          = word ptr -5Ah ;~ 01A2:3178
#undef var_58
#define var_58 -0x58
	// 5600 var_58          = word ptr -58h ;~ 01A2:3178
#undef var_56
#define var_56 -0x56
	// 5601 var_56          = dword ptr -56h ;~ 01A2:3178
#undef var_52
#define var_52 -0x52
	// 5602 var_52          = byte ptr -52h ;~ 01A2:3178
#undef var_50
#define var_50 -0x50
	// 5603 var_50          = word ptr -50h ;~ 01A2:3178
#undef var_4e
#define var_4e -0x4E
	// 5604 var_4E          = word ptr -4Eh ;~ 01A2:3178
#undef var_4c
#define var_4c -0x4C
	// 5605 var_4C          = word ptr -4Ch ;~ 01A2:3178
#undef var_4a
#define var_4a -0x4A
	// 5606 var_4A          = dword ptr -4Ah ;~ 01A2:3178
#undef var_46
#define var_46 -0x46
	// 5607 var_46          = dword ptr -46h ;~ 01A2:3178
#undef var_42
#define var_42 -0x42
	// 5608 var_42          = word ptr -42h ;~ 01A2:3178
#undef var_40
#define var_40 -0x40
	// 5609 var_40          = word ptr -40h ;~ 01A2:3178
#undef var_3e
#define var_3e -0x3E
	// 5610 var_3E          = byte ptr -3Eh ;~ 01A2:3178
#undef var_3c
#define var_3c -0x3C
	// 5611 var_3C          = byte ptr -3Ch ;~ 01A2:3178
#undef var_1c
#define var_1c -0x1C
	// 5612 var_1C          = word ptr -1Ch ;~ 01A2:3178
#undef var_1a
#define var_1a -0x1A
	// 5613 var_1A          = word ptr -1Ah ;~ 01A2:3178
#undef var_18
#define var_18 -0x18
	// 5614 var_18          = byte ptr -18h ;~ 01A2:3178
#undef var_16
#define var_16 -0x16
	// 5615 var_16          = byte ptr -16h ;~ 01A2:3178
#undef var_14
#define var_14 -0x14
	// 5616 var_14          = byte ptr -14h ;~ 01A2:3178
#undef var_12
#define var_12 -0x12
	// 5617 var_12          = byte ptr -12h ;~ 01A2:3178
#undef var_11
#define var_11 -0x11
	// 5618 var_11          = byte ptr -11h ;~ 01A2:3178
#undef var_10
#define var_10 -0x10
	// 5619 var_10          = byte ptr -10h ;~ 01A2:3178
ret_1a2_3178:
	// 4643 
cs=0x1a2;eip=0x003178; 	X(PUSH(bp));	// 5621 push    bp ;~ 01A2:3178
cs=0x1a2;eip=0x003179; 	T(MOV(bp, sp));	// 5622 mov     bp, sp ;~ 01A2:3179
cs=0x1a2;eip=0x00317b; 	T(SUB(sp, 0x9E));	// 5623 sub     sp, 9Eh ;~ 01A2:317B
cs=0x1a2;eip=0x00317f; 	X(PUSH(di));	// 5624 push    di ;~ 01A2:317F
cs=0x1a2;eip=0x003180; 	X(PUSH(si));	// 5625 push    si              ; char * ;~ 01A2:3180
cs=0x1a2;eip=0x003181; 	T(MOV(ax, 4));	// 5626 mov     ax, 4 ;~ 01A2:3181
cs=0x1a2;eip=0x003184; 	X(PUSH(ax));	// 5627 push    ax ;~ 01A2:3184
cs=0x1a2;eip=0x003185; 	R(CALLF(ensure_file_exists,0));	// 5628 call    ensure_file_exists ;~ 01A2:3185
cs=0x1a2;eip=0x00318a; 	T(ADD(sp, 2));	// 5629 add     sp, 2 ;~ 01A2:318A
cs=0x1a2;eip=0x00318d; 	T(MOV(ax, offset(dseg,amisc_2)));	// 5630 mov     ax, offset aMisc_2 ; "misc" ;~ 01A2:318D
cs=0x1a2;eip=0x003190; 	X(PUSH(ax));	// 5631 push    ax ;~ 01A2:3190
cs=0x1a2;eip=0x003191; 	R(CALLF(file_load_resfile,0));	// 5632 call    file_load_resfile ;~ 01A2:3191
cs=0x1a2;eip=0x003196; 	T(ADD(sp, 2));	// 5633 add     sp, 2 ;~ 01A2:3196
cs=0x1a2;eip=0x003199; 	X(MOV(*(dw*)(raddr(ss,bp+var_4e)), ax));	// 5634 mov     [bp+var_4E], ax ;~ 01A2:3199
cs=0x1a2;eip=0x00319c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4c)), dx));	// 5635 mov     [bp+var_4C], dx ;~ 01A2:319C
cs=0x1a2;eip=0x00319f; 	T(CMP(byte_449aa, 0));	// 5636 cmp     byte_449AA, 0 ;~ 01A2:319F
cs=0x1a2;eip=0x0031a4; 	R(JZ(loc_131c0));	// 5637 jz      short loc_131C0 ;~ 01A2:31A4
cs=0x1a2;eip=0x0031a6; 	T(MOV(al, byte_449aa));	// 5638 mov     al, byte_449AA ;~ 01A2:31A6
cs=0x1a2;eip=0x0031a9; 	T(ADD(al, 0x30));	// 5639 add     al, 30h ; '0' ;~ 01A2:31A9
cs=0x1a2;eip=0x0031ab; 	X(MOV(byte_3b907, al));	// 5640 mov     byte_3B907, al ;~ 01A2:31AB
cs=0x1a2;eip=0x0031ae; 	T(MOV(ax, offset(dseg,unk_3b904)));	// 5641 mov     ax, offset unk_3B904 ;~ 01A2:31AE
cs=0x1a2;eip=0x0031b1; 	X(PUSH(ax));	// 5642 push    ax ;~ 01A2:31B1
cs=0x1a2;eip=0x0031b2; 	R(CALLF(file_load_resfile,0));	// 5643 call    file_load_resfile ;~ 01A2:31B2
cs=0x1a2;eip=0x0031b7; 	T(ADD(sp, 2));	// 5644 add     sp, 2 ;~ 01A2:31B7
cs=0x1a2;eip=0x0031ba; 	X(MOV(*(dw*)(raddr(ss,bp+var_68)), ax));	// 5645 mov     [bp+var_68], ax ;~ 01A2:31BA
cs=0x1a2;eip=0x0031bd; 	X(MOV(*(dw*)(raddr(ss,bp+var_66)), dx));	// 5646 mov     [bp+var_66], dx ;~ 01A2:31BD
loc_131c0:
	// 4644 
cs=0x1a2;eip=0x0031c0; 	T(MOV(ax, 0x0F));	// 5649 mov     ax, 0Fh ;~ 01A2:31C0
cs=0x1a2;eip=0x0031c3; 	X(PUSH(ax));	// 5650 push    ax ;~ 01A2:31C3
cs=0x1a2;eip=0x0031c4; 	T(MOV(ax, 0x0C8));	// 5651 mov     ax, 0C8h ; 'È' ;~ 01A2:31C4
cs=0x1a2;eip=0x0031c7; 	X(PUSH(ax));	// 5652 push    ax ;~ 01A2:31C7
cs=0x1a2;eip=0x0031c8; 	T(MOV(ax, 0x140));	// 5653 mov     ax, 140h ;~ 01A2:31C8
cs=0x1a2;eip=0x0031cb; 	X(PUSH(ax));	// 5654 push    ax ;~ 01A2:31CB
cs=0x1a2;eip=0x0031cc; 	R(CALLF(sprite_make_wnd,0));	// 5655 call    sprite_make_wnd ;~ 01A2:31CC
cs=0x1a2;eip=0x0031d1; 	T(ADD(sp, 6));	// 5656 add     sp, 6 ;~ 01A2:31D1
cs=0x1a2;eip=0x0031d4; 	X(MOV(*(dw*)(((db*)&wndsprite)), ax));	// 5657 mov     word ptr wndsprite, ax ;~ 01A2:31D4
cs=0x1a2;eip=0x0031d7; 	X(MOV(*(dw*)(((db*)&wndsprite)+2), dx));	// 5658 mov     word ptr wndsprite+2, dx ;~ 01A2:31D7
cs=0x1a2;eip=0x0031db; 	T(CMP(video_flag5_is0, 0));	// 5659 cmp     video_flag5_is0, 0 ;~ 01A2:31DB
cs=0x1a2;eip=0x0031e0; 	R(JZ(loc_131fc));	// 5660 jz      short loc_131FC ;~ 01A2:31E0
cs=0x1a2;eip=0x0031e2; 	T(MOV(ax, 0x0F));	// 5661 mov     ax, 0Fh ;~ 01A2:31E2
cs=0x1a2;eip=0x0031e5; 	X(PUSH(ax));	// 5662 push    ax ;~ 01A2:31E5
cs=0x1a2;eip=0x0031e6; 	T(MOV(ax, 0x64));	// 5663 mov     ax, 64h ; 'd' ;~ 01A2:31E6
cs=0x1a2;eip=0x0031e9; 	X(PUSH(ax));	// 5664 push    ax ;~ 01A2:31E9
cs=0x1a2;eip=0x0031ea; 	T(MOV(ax, 0x0C8));	// 5665 mov     ax, 0C8h ; 'È' ;~ 01A2:31EA
cs=0x1a2;eip=0x0031ed; 	X(PUSH(ax));	// 5666 push    ax ;~ 01A2:31ED
cs=0x1a2;eip=0x0031ee; 	R(CALLF(sprite_make_wnd,0));	// 5667 call    sprite_make_wnd ;~ 01A2:31EE
cs=0x1a2;eip=0x0031f3; 	T(ADD(sp, 6));	// 5668 add     sp, 6 ;~ 01A2:31F3
cs=0x1a2;eip=0x0031f6; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_46))), ax));	// 5669 mov     word ptr [bp+var_46], ax ;~ 01A2:31F6
cs=0x1a2;eip=0x0031f9; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_46+2))), dx));	// 5670 mov     word ptr [bp+var_46+2], dx ;~ 01A2:31F9
loc_131fc:
	// 4645 
cs=0x1a2;eip=0x0031fc; 	X(MOV(*(raddr(ss,bp+var_52)), 0x0FF));	// 5673 mov     [bp+var_52], 0FFh ;~ 01A2:31FC
cs=0x1a2;eip=0x003200; 	R(CALLF(sprite_copy_wnd_to_1_clear,0));	// 5674 call    sprite_copy_wnd_to_1_clear ;~ 01A2:3200
cs=0x1a2;eip=0x003205; 	T(SUB(ax, ax));	// 5675 sub     ax, ax ;~ 01A2:3205
cs=0x1a2;eip=0x003207; 	X(PUSH(ax));	// 5676 push    ax ;~ 01A2:3207
cs=0x1a2;eip=0x003208; 	X(PUSH(word_407f8));	// 5677 push    word_407F8 ;~ 01A2:3208
cs=0x1a2;eip=0x00320c; 	X(PUSH(word_407f6));	// 5678 push    word_407F6 ;~ 01A2:320C
cs=0x1a2;eip=0x003210; 	X(PUSH(word_407f4));	// 5679 push    word_407F4 ;~ 01A2:3210
cs=0x1a2;eip=0x003214; 	T(MOV(ax, 0x64));	// 5680 mov     ax, 64h ; 'd' ;~ 01A2:3214
cs=0x1a2;eip=0x003217; 	X(PUSH(ax));	// 5681 push    ax ;~ 01A2:3217
cs=0x1a2;eip=0x003218; 	T(MOV(ax, 0x140));	// 5682 mov     ax, 140h ;~ 01A2:3218
cs=0x1a2;eip=0x00321b; 	X(PUSH(ax));	// 5683 push    ax ;~ 01A2:321B
cs=0x1a2;eip=0x00321c; 	T(SUB(ax, ax));	// 5684 sub     ax, ax ;~ 01A2:321C
cs=0x1a2;eip=0x00321e; 	X(PUSH(ax));	// 5685 push    ax ;~ 01A2:321E
cs=0x1a2;eip=0x00321f; 	X(PUSH(ax));	// 5686 push    ax ;~ 01A2:321F
cs=0x1a2;eip=0x003220; 	X(PUSH(ax));	// 5687 push    ax ;~ 01A2:3220
cs=0x1a2;eip=0x003221; 	X(PUSH(ax));	// 5688 push    ax ;~ 01A2:3221
cs=0x1a2;eip=0x003222; 	R(CALLF(draw_button,0));	// 5689 call    draw_button ;~ 01A2:3222
cs=0x1a2;eip=0x003227; 	T(ADD(sp, 0x14));	// 5690 add     sp, 14h ;~ 01A2:3227
cs=0x1a2;eip=0x00322a; 	T(SUB(ax, ax));	// 5691 sub     ax, ax ;~ 01A2:322A
cs=0x1a2;eip=0x00322c; 	X(PUSH(ax));	// 5692 push    ax ;~ 01A2:322C
cs=0x1a2;eip=0x00322d; 	X(PUSH(word_407f8));	// 5693 push    word_407F8 ;~ 01A2:322D
cs=0x1a2;eip=0x003231; 	X(PUSH(word_407f6));	// 5694 push    word_407F6 ;~ 01A2:3231
cs=0x1a2;eip=0x003235; 	X(PUSH(word_407f4));	// 5695 push    word_407F4 ;~ 01A2:3235
cs=0x1a2;eip=0x003239; 	T(MOV(ax, 0x63));	// 5696 mov     ax, 63h ; 'c' ;~ 01A2:3239
cs=0x1a2;eip=0x00323c; 	X(PUSH(ax));	// 5697 push    ax ;~ 01A2:323C
cs=0x1a2;eip=0x00323d; 	T(MOV(ax, 0x140));	// 5698 mov     ax, 140h ;~ 01A2:323D
cs=0x1a2;eip=0x003240; 	X(PUSH(ax));	// 5699 push    ax ;~ 01A2:3240
cs=0x1a2;eip=0x003241; 	T(MOV(ax, 0x65));	// 5700 mov     ax, 65h ; 'e' ;~ 01A2:3241
cs=0x1a2;eip=0x003244; 	X(PUSH(ax));	// 5701 push    ax ;~ 01A2:3244
cs=0x1a2;eip=0x003245; 	T(SUB(ax, ax));	// 5702 sub     ax, ax ;~ 01A2:3245
cs=0x1a2;eip=0x003247; 	X(PUSH(ax));	// 5703 push    ax ;~ 01A2:3247
cs=0x1a2;eip=0x003248; 	X(PUSH(ax));	// 5704 push    ax ;~ 01A2:3248
cs=0x1a2;eip=0x003249; 	X(PUSH(ax));	// 5705 push    ax ;~ 01A2:3249
cs=0x1a2;eip=0x00324a; 	R(CALLF(draw_button,0));	// 5706 call    draw_button ;~ 01A2:324A
cs=0x1a2;eip=0x00324f; 	T(ADD(sp, 0x14));	// 5707 add     sp, 14h ;~ 01A2:324F
cs=0x1a2;eip=0x003252; 	X(MOV(*(dw*)(raddr(ss,bp+var_70)), 0x6B));	// 5708 mov     [bp+var_70], 6Bh ; 'k' ;~ 01A2:3252
cs=0x1a2;eip=0x003257; 	T(MOV(ax, offset(dseg,aelt)));	// 5709 mov     ax, offset aElt ; "elt" ;~ 01A2:3257
cs=0x1a2;eip=0x00325a; 	X(PUSH(ax));	// 5710 push    ax ;~ 01A2:325A
cs=0x1a2;eip=0x00325b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 5711 push    [bp+var_4C] ;~ 01A2:325B
cs=0x1a2;eip=0x00325e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 5712 push    [bp+var_4E] ;~ 01A2:325E
cs=0x1a2;eip=0x003261; 	R(CALLF(locate_text_res,0));	// 5713 call    locate_text_res ;~ 01A2:3261
cs=0x1a2;eip=0x003266; 	T(ADD(sp, 6));	// 5714 add     sp, 6 ;~ 01A2:3266
cs=0x1a2;eip=0x003269; 	X(PUSH(dx));	// 5715 push    dx ;~ 01A2:3269
cs=0x1a2;eip=0x00326a; 	X(PUSH(ax));	// 5716 push    ax ;~ 01A2:326A
cs=0x1a2;eip=0x00326b; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5717 mov     ax, offset resID_byte1 ;~ 01A2:326B
cs=0x1a2;eip=0x00326e; 	X(PUSH(ax));	// 5718 push    ax ;~ 01A2:326E
cs=0x1a2;eip=0x00326f; 	R(CALLF(copy_string,0));	// 5719 call    copy_string ;~ 01A2:326F
cs=0x1a2;eip=0x003274; 	T(ADD(sp, 6));	// 5720 add     sp, 6 ;~ 01A2:3274
cs=0x1a2;eip=0x003277; 	T(CMP(gstate_total_finish_time, 0));	// 5721 cmp     gState_total_finish_time, 0 ;~ 01A2:3277
cs=0x1a2;eip=0x00327c; 	R(JNZ(loc_13281));	// 5722 jnz     short loc_13281 ;~ 01A2:327C
cs=0x1a2;eip=0x00327e; 	R(JMP(loc_13354));	// 5723 jmp     loc_13354 ;~ 01A2:327E
loc_13281:
	// 4646 
cs=0x1a2;eip=0x003281; 	T(MOV(ax, 1));	// 5727 mov     ax, 1 ;~ 01A2:3281
cs=0x1a2;eip=0x003284; 	X(PUSH(ax));	// 5728 push    ax              ; int ;~ 01A2:3284
cs=0x1a2;eip=0x003285; 	T(MOV(ax, gstate_total_finish_time));	// 5729 mov     ax, gState_total_finish_time ;~ 01A2:3285
cs=0x1a2;eip=0x003288; 	T(SUB(ax, gstate_penalty));	// 5730 sub     ax, gState_penalty ;~ 01A2:3288
cs=0x1a2;eip=0x00328c; 	X(PUSH(ax));	// 5731 push    ax ;~ 01A2:328C
cs=0x1a2;eip=0x00328d; 	T(ax = bp+var_12);	// 5732 lea     ax, [bp+var_12] ;~ 01A2:328D
cs=0x1a2;eip=0x003290; 	X(PUSH(ax));	// 5733 push    ax              ; char * ;~ 01A2:3290
cs=0x1a2;eip=0x003291; 	R(CALLF(format_frame_as_string,0));	// 5734 call    format_frame_as_string ;~ 01A2:3291
cs=0x1a2;eip=0x003296; 	T(ADD(sp, 6));	// 5735 add     sp, 6 ;~ 01A2:3296
cs=0x1a2;eip=0x003299; 	T(ax = bp+var_12);	// 5736 lea     ax, [bp+var_12] ;~ 01A2:3299
cs=0x1a2;eip=0x00329c; 	X(PUSH(ax));	// 5737 push    ax ;~ 01A2:329C
cs=0x1a2;eip=0x00329d; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5738 mov     ax, offset resID_byte1 ;~ 01A2:329D
cs=0x1a2;eip=0x0032a0; 	X(PUSH(ax));	// 5739 push    ax              ; char * ;~ 01A2:32A0
cs=0x1a2;eip=0x0032a1; 	R(CALLF(_strcat,0));	// 5740 call    _strcat ;~ 01A2:32A1
cs=0x1a2;eip=0x0032a6; 	T(ADD(sp, 4));	// 5741 add     sp, 4 ;~ 01A2:32A6
cs=0x1a2;eip=0x0032a9; 	T(TEST(byte_43966, 2));	// 5742 test    byte_43966, 2 ;~ 01A2:32A9
cs=0x1a2;eip=0x0032ae; 	R(JZ(loc_132dc));	// 5743 jz      short loc_132DC ;~ 01A2:32AE
cs=0x1a2;eip=0x0032b0; 	T(MOV(ax, offset(dseg,acon)));	// 5744 mov     ax, offset aCon ; "con" ;~ 01A2:32B0
cs=0x1a2;eip=0x0032b3; 	X(PUSH(ax));	// 5745 push    ax ;~ 01A2:32B3
cs=0x1a2;eip=0x0032b4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 5746 push    [bp+var_4C] ;~ 01A2:32B4
cs=0x1a2;eip=0x0032b7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 5747 push    [bp+var_4E] ;~ 01A2:32B7
cs=0x1a2;eip=0x0032ba; 	R(CALLF(locate_text_res,0));	// 5748 call    locate_text_res ;~ 01A2:32BA
cs=0x1a2;eip=0x0032bf; 	T(ADD(sp, 6));	// 5749 add     sp, 6 ;~ 01A2:32BF
cs=0x1a2;eip=0x0032c2; 	X(PUSH(dx));	// 5750 push    dx ;~ 01A2:32C2
cs=0x1a2;eip=0x0032c3; 	X(PUSH(ax));	// 5751 push    ax ;~ 01A2:32C3
cs=0x1a2;eip=0x0032c4; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5752 mov     ax, offset resID_byte1 ;~ 01A2:32C4
cs=0x1a2;eip=0x0032c7; 	X(PUSH(ax));	// 5753 push    ax              ; char * ;~ 01A2:32C7
cs=0x1a2;eip=0x0032c8; 	R(CALLF(_strlen,0));	// 5754 call    _strlen ;~ 01A2:32C8
cs=0x1a2;eip=0x0032cd; 	T(ADD(sp, 2));	// 5755 add     sp, 2 ;~ 01A2:32CD
cs=0x1a2;eip=0x0032d0; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 5756 add     ax, offset resID_byte1 ;~ 01A2:32D0
cs=0x1a2;eip=0x0032d3; 	X(PUSH(ax));	// 5757 push    ax ;~ 01A2:32D3
cs=0x1a2;eip=0x0032d4; 	R(CALLF(copy_string,0));	// 5758 call    copy_string ;~ 01A2:32D4
cs=0x1a2;eip=0x0032d9; 	T(ADD(sp, 6));	// 5759 add     sp, 6 ;~ 01A2:32D9
loc_132dc:
	// 4647 
cs=0x1a2;eip=0x0032dc; 	T(SUB(ax, ax));	// 5762 sub     ax, ax ;~ 01A2:32DC
cs=0x1a2;eip=0x0032de; 	X(PUSH(ax));	// 5763 push    ax ;~ 01A2:32DE
cs=0x1a2;eip=0x0032df; 	X(PUSH(dialog_fnt_colour));	// 5764 push    dialog_fnt_colour ;~ 01A2:32DF
cs=0x1a2;eip=0x0032e3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 5765 push    [bp+var_70] ;~ 01A2:32E3
cs=0x1a2;eip=0x0032e6; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5766 mov     ax, offset resID_byte1 ;~ 01A2:32E6
cs=0x1a2;eip=0x0032e9; 	X(PUSH(ax));	// 5767 push    ax ;~ 01A2:32E9
cs=0x1a2;eip=0x0032ea; 	R(CALLF(font_op2_alt,0));	// 5768 call    font_op2_alt ;~ 01A2:32EA
cs=0x1a2;eip=0x0032ef; 	T(ADD(sp, 2));	// 5769 add     sp, 2 ;~ 01A2:32EF
cs=0x1a2;eip=0x0032f2; 	X(PUSH(ax));	// 5770 push    ax ;~ 01A2:32F2
cs=0x1a2;eip=0x0032f3; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5771 mov     ax, offset resID_byte1 ;~ 01A2:32F3
cs=0x1a2;eip=0x0032f6; 	X(PUSH(ax));	// 5772 push    ax ;~ 01A2:32F6
cs=0x1a2;eip=0x0032f7; 	R(CALLF(hiscore_draw_text,0));	// 5773 call    hiscore_draw_text ;~ 01A2:32F7
cs=0x1a2;eip=0x0032fc; 	T(ADD(sp, 0x0A));	// 5774 add     sp, 0Ah ;~ 01A2:32FC
cs=0x1a2;eip=0x0032ff; 	X(ADD(*(dw*)(raddr(ss,bp+var_70)), 0x0A));	// 5775 add     [bp+var_70], 0Ah ;~ 01A2:32FF
cs=0x1a2;eip=0x003303; 	T(CMP(gstate_penalty, 0));	// 5776 cmp     gState_penalty, 0 ;~ 01A2:3303
cs=0x1a2;eip=0x003308; 	R(JNZ(loc_1330d));	// 5777 jnz     short loc_1330D ;~ 01A2:3308
cs=0x1a2;eip=0x00330a; 	R(JMP(loc_133a7));	// 5778 jmp     loc_133A7 ;~ 01A2:330A
loc_1330d:
	// 4648 
cs=0x1a2;eip=0x00330d; 	T(MOV(ax, offset(dseg,appt)));	// 5782 mov     ax, offset aPpt ; "ppt" ;~ 01A2:330D
cs=0x1a2;eip=0x003310; 	X(PUSH(ax));	// 5783 push    ax ;~ 01A2:3310
cs=0x1a2;eip=0x003311; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 5784 push    [bp+var_4C] ;~ 01A2:3311
cs=0x1a2;eip=0x003314; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 5785 push    [bp+var_4E] ;~ 01A2:3314
cs=0x1a2;eip=0x003317; 	R(CALLF(locate_text_res,0));	// 5786 call    locate_text_res ;~ 01A2:3317
cs=0x1a2;eip=0x00331c; 	T(ADD(sp, 6));	// 5787 add     sp, 6 ;~ 01A2:331C
cs=0x1a2;eip=0x00331f; 	X(PUSH(dx));	// 5788 push    dx ;~ 01A2:331F
cs=0x1a2;eip=0x003320; 	X(PUSH(ax));	// 5789 push    ax ;~ 01A2:3320
cs=0x1a2;eip=0x003321; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5790 mov     ax, offset resID_byte1 ;~ 01A2:3321
cs=0x1a2;eip=0x003324; 	X(PUSH(ax));	// 5791 push    ax ;~ 01A2:3324
cs=0x1a2;eip=0x003325; 	R(CALLF(copy_string,0));	// 5792 call    copy_string ;~ 01A2:3325
cs=0x1a2;eip=0x00332a; 	T(ADD(sp, 6));	// 5793 add     sp, 6 ;~ 01A2:332A
cs=0x1a2;eip=0x00332d; 	T(MOV(ax, 1));	// 5794 mov     ax, 1 ;~ 01A2:332D
cs=0x1a2;eip=0x003330; 	X(PUSH(ax));	// 5795 push    ax              ; int ;~ 01A2:3330
cs=0x1a2;eip=0x003331; 	X(PUSH(gstate_penalty));	// 5796 push    gState_penalty ;~ 01A2:3331
cs=0x1a2;eip=0x003335; 	T(ax = bp+var_12);	// 5797 lea     ax, [bp+var_12] ;~ 01A2:3335
cs=0x1a2;eip=0x003338; 	X(PUSH(ax));	// 5798 push    ax              ; char * ;~ 01A2:3338
cs=0x1a2;eip=0x003339; 	R(CALLF(format_frame_as_string,0));	// 5799 call    format_frame_as_string ;~ 01A2:3339
cs=0x1a2;eip=0x00333e; 	T(ADD(sp, 6));	// 5800 add     sp, 6 ;~ 01A2:333E
cs=0x1a2;eip=0x003341; 	T(ax = bp+var_12);	// 5801 lea     ax, [bp+var_12] ;~ 01A2:3341
cs=0x1a2;eip=0x003344; 	X(PUSH(ax));	// 5802 push    ax ;~ 01A2:3344
cs=0x1a2;eip=0x003345; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5803 mov     ax, offset resID_byte1 ;~ 01A2:3345
cs=0x1a2;eip=0x003348; 	X(PUSH(ax));	// 5804 push    ax              ; char * ;~ 01A2:3348
cs=0x1a2;eip=0x003349; 	R(CALLF(_strcat,0));	// 5805 call    _strcat ;~ 01A2:3349
cs=0x1a2;eip=0x00334e; 	T(ADD(sp, 4));	// 5806 add     sp, 4 ;~ 01A2:334E
cs=0x1a2;eip=0x003351; 	R(JMP(loc_13380));	// 5807 jmp     short loc_13380 ;~ 01A2:3351
loc_13354:
	// 4649 
cs=0x1a2;eip=0x003354; 	T(MOV(ax, offset(dseg,adnf)));	// 5812 mov     ax, offset aDnf ; "dnf" ;~ 01A2:3354
cs=0x1a2;eip=0x003357; 	X(PUSH(ax));	// 5813 push    ax ;~ 01A2:3357
cs=0x1a2;eip=0x003358; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 5814 push    [bp+var_4C] ;~ 01A2:3358
cs=0x1a2;eip=0x00335b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 5815 push    [bp+var_4E] ;~ 01A2:335B
cs=0x1a2;eip=0x00335e; 	R(CALLF(locate_text_res,0));	// 5816 call    locate_text_res ;~ 01A2:335E
cs=0x1a2;eip=0x003363; 	T(ADD(sp, 6));	// 5817 add     sp, 6 ;~ 01A2:3363
cs=0x1a2;eip=0x003366; 	X(PUSH(dx));	// 5818 push    dx ;~ 01A2:3366
cs=0x1a2;eip=0x003367; 	X(PUSH(ax));	// 5819 push    ax ;~ 01A2:3367
cs=0x1a2;eip=0x003368; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5820 mov     ax, offset resID_byte1 ;~ 01A2:3368
cs=0x1a2;eip=0x00336b; 	X(PUSH(ax));	// 5821 push    ax              ; char * ;~ 01A2:336B
cs=0x1a2;eip=0x00336c; 	R(CALLF(_strlen,0));	// 5822 call    _strlen ;~ 01A2:336C
cs=0x1a2;eip=0x003371; 	T(ADD(sp, 2));	// 5823 add     sp, 2 ;~ 01A2:3371
cs=0x1a2;eip=0x003374; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 5824 add     ax, offset resID_byte1 ;~ 01A2:3374
cs=0x1a2;eip=0x003377; 	X(PUSH(ax));	// 5825 push    ax ;~ 01A2:3377
cs=0x1a2;eip=0x003378; 	R(CALLF(copy_string,0));	// 5826 call    copy_string ;~ 01A2:3378
cs=0x1a2;eip=0x00337d; 	T(ADD(sp, 6));	// 5827 add     sp, 6 ;~ 01A2:337D
loc_13380:
	// 4650 
cs=0x1a2;eip=0x003380; 	T(SUB(ax, ax));	// 5830 sub     ax, ax ;~ 01A2:3380
cs=0x1a2;eip=0x003382; 	X(PUSH(ax));	// 5831 push    ax ;~ 01A2:3382
cs=0x1a2;eip=0x003383; 	X(PUSH(dialog_fnt_colour));	// 5832 push    dialog_fnt_colour ;~ 01A2:3383
cs=0x1a2;eip=0x003387; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 5833 push    [bp+var_70] ;~ 01A2:3387
cs=0x1a2;eip=0x00338a; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5834 mov     ax, offset resID_byte1 ;~ 01A2:338A
cs=0x1a2;eip=0x00338d; 	X(PUSH(ax));	// 5835 push    ax ;~ 01A2:338D
cs=0x1a2;eip=0x00338e; 	R(CALLF(font_op2_alt,0));	// 5836 call    font_op2_alt ;~ 01A2:338E
cs=0x1a2;eip=0x003393; 	T(ADD(sp, 2));	// 5837 add     sp, 2 ;~ 01A2:3393
cs=0x1a2;eip=0x003396; 	X(PUSH(ax));	// 5838 push    ax ;~ 01A2:3396
cs=0x1a2;eip=0x003397; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5839 mov     ax, offset resID_byte1 ;~ 01A2:3397
cs=0x1a2;eip=0x00339a; 	X(PUSH(ax));	// 5840 push    ax ;~ 01A2:339A
cs=0x1a2;eip=0x00339b; 	R(CALLF(hiscore_draw_text,0));	// 5841 call    hiscore_draw_text ;~ 01A2:339B
cs=0x1a2;eip=0x0033a0; 	T(ADD(sp, 0x0A));	// 5842 add     sp, 0Ah ;~ 01A2:33A0
cs=0x1a2;eip=0x0033a3; 	X(ADD(*(dw*)(raddr(ss,bp+var_70)), 0x0A));	// 5843 add     [bp+var_70], 0Ah ;~ 01A2:33A3
loc_133a7:
	// 4651 
cs=0x1a2;eip=0x0033a7; 	X(MOV(*(raddr(ss,bp+var_18)), 2));	// 5846 mov     [bp+var_18], 2 ;~ 01A2:33A7
cs=0x1a2;eip=0x0033ab; 	T(CMP(byte_449aa, 0));	// 5847 cmp     byte_449AA, 0 ;~ 01A2:33AB
cs=0x1a2;eip=0x0033b0; 	R(JNZ(loc_133b5));	// 5848 jnz     short loc_133B5 ;~ 01A2:33B0
cs=0x1a2;eip=0x0033b2; 	R(JMP(loc_134dc));	// 5849 jmp     loc_134DC ;~ 01A2:33B2
loc_133b5:
	// 4652 
cs=0x1a2;eip=0x0033b5; 	T(CMP(gstate_144, 0));	// 5853 cmp     gState_144, 0 ;~ 01A2:33B5
cs=0x1a2;eip=0x0033ba; 	R(JNZ(loc_1340c));	// 5854 jnz     short loc_1340C ;~ 01A2:33BA
cs=0x1a2;eip=0x0033bc; 	T(MOV(ax, offset(dseg,aolt)));	// 5855 mov     ax, offset aOlt ; "olt" ;~ 01A2:33BC
cs=0x1a2;eip=0x0033bf; 	X(PUSH(ax));	// 5856 push    ax ;~ 01A2:33BF
cs=0x1a2;eip=0x0033c0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 5857 push    [bp+var_4C] ;~ 01A2:33C0
cs=0x1a2;eip=0x0033c3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 5858 push    [bp+var_4E] ;~ 01A2:33C3
cs=0x1a2;eip=0x0033c6; 	R(CALLF(locate_text_res,0));	// 5859 call    locate_text_res ;~ 01A2:33C6
cs=0x1a2;eip=0x0033cb; 	T(ADD(sp, 6));	// 5860 add     sp, 6 ;~ 01A2:33CB
cs=0x1a2;eip=0x0033ce; 	X(PUSH(dx));	// 5861 push    dx ;~ 01A2:33CE
cs=0x1a2;eip=0x0033cf; 	X(PUSH(ax));	// 5862 push    ax ;~ 01A2:33CF
cs=0x1a2;eip=0x0033d0; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5863 mov     ax, offset resID_byte1 ;~ 01A2:33D0
cs=0x1a2;eip=0x0033d3; 	X(PUSH(ax));	// 5864 push    ax ;~ 01A2:33D3
cs=0x1a2;eip=0x0033d4; 	R(CALLF(copy_string,0));	// 5865 call    copy_string ;~ 01A2:33D4
cs=0x1a2;eip=0x0033d9; 	T(ADD(sp, 6));	// 5866 add     sp, 6 ;~ 01A2:33D9
cs=0x1a2;eip=0x0033dc; 	T(MOV(ax, offset(dseg,adnf_0)));	// 5867 mov     ax, offset aDnf_0 ; "dnf" ;~ 01A2:33DC
cs=0x1a2;eip=0x0033df; 	X(PUSH(ax));	// 5868 push    ax ;~ 01A2:33DF
cs=0x1a2;eip=0x0033e0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 5869 push    [bp+var_4C] ;~ 01A2:33E0
cs=0x1a2;eip=0x0033e3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 5870 push    [bp+var_4E] ;~ 01A2:33E3
cs=0x1a2;eip=0x0033e6; 	R(CALLF(locate_text_res,0));	// 5871 call    locate_text_res ;~ 01A2:33E6
cs=0x1a2;eip=0x0033eb; 	T(ADD(sp, 6));	// 5872 add     sp, 6 ;~ 01A2:33EB
cs=0x1a2;eip=0x0033ee; 	X(PUSH(dx));	// 5873 push    dx ;~ 01A2:33EE
cs=0x1a2;eip=0x0033ef; 	X(PUSH(ax));	// 5874 push    ax ;~ 01A2:33EF
cs=0x1a2;eip=0x0033f0; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5875 mov     ax, offset resID_byte1 ;~ 01A2:33F0
cs=0x1a2;eip=0x0033f3; 	X(PUSH(ax));	// 5876 push    ax              ; char * ;~ 01A2:33F3
cs=0x1a2;eip=0x0033f4; 	R(CALLF(_strlen,0));	// 5877 call    _strlen ;~ 01A2:33F4
cs=0x1a2;eip=0x0033f9; 	T(ADD(sp, 2));	// 5878 add     sp, 2 ;~ 01A2:33F9
cs=0x1a2;eip=0x0033fc; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 5879 add     ax, offset resID_byte1 ;~ 01A2:33FC
cs=0x1a2;eip=0x0033ff; 	X(PUSH(ax));	// 5880 push    ax ;~ 01A2:33FF
cs=0x1a2;eip=0x003400; 	R(CALLF(copy_string,0));	// 5881 call    copy_string ;~ 01A2:3400
cs=0x1a2;eip=0x003405; 	T(ADD(sp, 6));	// 5882 add     sp, 6 ;~ 01A2:3405
cs=0x1a2;eip=0x003408; 	R(JMP(loc_134aa));	// 5883 jmp     loc_134AA ;~ 01A2:3408
loc_1340c:
	// 4653 
cs=0x1a2;eip=0x00340c; 	T(CMP(gstate_total_finish_time, 0));	// 5888 cmp     gState_total_finish_time, 0 ;~ 01A2:340C
cs=0x1a2;eip=0x003411; 	R(JZ(loc_1341c));	// 5889 jz      short loc_1341C ;~ 01A2:3411
cs=0x1a2;eip=0x003413; 	T(MOV(ax, gstate_total_finish_time));	// 5890 mov     ax, gState_total_finish_time ;~ 01A2:3413
cs=0x1a2;eip=0x003416; 	T(CMP(gstate_144, ax));	// 5891 cmp     gState_144, ax ;~ 01A2:3416
cs=0x1a2;eip=0x00341a; 	R(JNC(loc_13466));	// 5892 jnb     short loc_13466 ;~ 01A2:341A
loc_1341c:
	// 4654 
cs=0x1a2;eip=0x00341c; 	T(MOV(ax, offset(dseg,aowt)));	// 5895 mov     ax, offset aOwt ; "owt" ;~ 01A2:341C
cs=0x1a2;eip=0x00341f; 	X(PUSH(ax));	// 5896 push    ax ;~ 01A2:341F
cs=0x1a2;eip=0x003420; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 5897 push    [bp+var_4C] ;~ 01A2:3420
cs=0x1a2;eip=0x003423; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 5898 push    [bp+var_4E] ;~ 01A2:3423
cs=0x1a2;eip=0x003426; 	R(CALLF(locate_text_res,0));	// 5899 call    locate_text_res ;~ 01A2:3426
cs=0x1a2;eip=0x00342b; 	T(ADD(sp, 6));	// 5900 add     sp, 6 ;~ 01A2:342B
cs=0x1a2;eip=0x00342e; 	X(PUSH(dx));	// 5901 push    dx ;~ 01A2:342E
cs=0x1a2;eip=0x00342f; 	X(PUSH(ax));	// 5902 push    ax ;~ 01A2:342F
cs=0x1a2;eip=0x003430; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5903 mov     ax, offset resID_byte1 ;~ 01A2:3430
cs=0x1a2;eip=0x003433; 	X(PUSH(ax));	// 5904 push    ax ;~ 01A2:3433
cs=0x1a2;eip=0x003434; 	R(CALLF(copy_string,0));	// 5905 call    copy_string ;~ 01A2:3434
cs=0x1a2;eip=0x003439; 	T(ADD(sp, 6));	// 5906 add     sp, 6 ;~ 01A2:3439
cs=0x1a2;eip=0x00343c; 	T(MOV(ax, 1));	// 5907 mov     ax, 1 ;~ 01A2:343C
cs=0x1a2;eip=0x00343f; 	X(PUSH(ax));	// 5908 push    ax              ; int ;~ 01A2:343F
cs=0x1a2;eip=0x003440; 	X(PUSH(gstate_144));	// 5909 push    gState_144 ;~ 01A2:3440
cs=0x1a2;eip=0x003444; 	T(ax = bp+var_12);	// 5910 lea     ax, [bp+var_12] ;~ 01A2:3444
cs=0x1a2;eip=0x003447; 	X(PUSH(ax));	// 5911 push    ax              ; char * ;~ 01A2:3447
cs=0x1a2;eip=0x003448; 	R(CALLF(format_frame_as_string,0));	// 5912 call    format_frame_as_string ;~ 01A2:3448
cs=0x1a2;eip=0x00344d; 	T(ADD(sp, 6));	// 5913 add     sp, 6 ;~ 01A2:344D
cs=0x1a2;eip=0x003450; 	T(ax = bp+var_12);	// 5914 lea     ax, [bp+var_12] ;~ 01A2:3450
cs=0x1a2;eip=0x003453; 	X(PUSH(ax));	// 5915 push    ax ;~ 01A2:3453
cs=0x1a2;eip=0x003454; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5916 mov     ax, offset resID_byte1 ;~ 01A2:3454
cs=0x1a2;eip=0x003457; 	X(PUSH(ax));	// 5917 push    ax              ; char * ;~ 01A2:3457
cs=0x1a2;eip=0x003458; 	R(CALLF(_strcat,0));	// 5918 call    _strcat ;~ 01A2:3458
cs=0x1a2;eip=0x00345d; 	T(ADD(sp, 4));	// 5919 add     sp, 4 ;~ 01A2:345D
cs=0x1a2;eip=0x003460; 	X(MOV(*(raddr(ss,bp+var_18)), 1));	// 5920 mov     [bp+var_18], 1 ;~ 01A2:3460
cs=0x1a2;eip=0x003464; 	R(JMP(loc_134b5));	// 5921 jmp     short loc_134B5 ;~ 01A2:3464
loc_13466:
	// 4655 
cs=0x1a2;eip=0x003466; 	T(MOV(ax, offset(dseg,aolt_0)));	// 5925 mov     ax, offset aOlt_0 ; "olt" ;~ 01A2:3466
cs=0x1a2;eip=0x003469; 	X(PUSH(ax));	// 5926 push    ax ;~ 01A2:3469
cs=0x1a2;eip=0x00346a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 5927 push    [bp+var_4C] ;~ 01A2:346A
cs=0x1a2;eip=0x00346d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 5928 push    [bp+var_4E] ;~ 01A2:346D
cs=0x1a2;eip=0x003470; 	R(CALLF(locate_text_res,0));	// 5929 call    locate_text_res ;~ 01A2:3470
cs=0x1a2;eip=0x003475; 	T(ADD(sp, 6));	// 5930 add     sp, 6 ;~ 01A2:3475
cs=0x1a2;eip=0x003478; 	X(PUSH(dx));	// 5931 push    dx ;~ 01A2:3478
cs=0x1a2;eip=0x003479; 	X(PUSH(ax));	// 5932 push    ax ;~ 01A2:3479
cs=0x1a2;eip=0x00347a; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5933 mov     ax, offset resID_byte1 ;~ 01A2:347A
cs=0x1a2;eip=0x00347d; 	X(PUSH(ax));	// 5934 push    ax ;~ 01A2:347D
cs=0x1a2;eip=0x00347e; 	R(CALLF(copy_string,0));	// 5935 call    copy_string ;~ 01A2:347E
cs=0x1a2;eip=0x003483; 	T(ADD(sp, 6));	// 5936 add     sp, 6 ;~ 01A2:3483
cs=0x1a2;eip=0x003486; 	T(MOV(ax, 1));	// 5937 mov     ax, 1 ;~ 01A2:3486
cs=0x1a2;eip=0x003489; 	X(PUSH(ax));	// 5938 push    ax              ; int ;~ 01A2:3489
cs=0x1a2;eip=0x00348a; 	X(PUSH(gstate_144));	// 5939 push    gState_144 ;~ 01A2:348A
cs=0x1a2;eip=0x00348e; 	T(ax = bp+var_12);	// 5940 lea     ax, [bp+var_12] ;~ 01A2:348E
cs=0x1a2;eip=0x003491; 	X(PUSH(ax));	// 5941 push    ax              ; char * ;~ 01A2:3491
cs=0x1a2;eip=0x003492; 	R(CALLF(format_frame_as_string,0));	// 5942 call    format_frame_as_string ;~ 01A2:3492
cs=0x1a2;eip=0x003497; 	T(ADD(sp, 6));	// 5943 add     sp, 6 ;~ 01A2:3497
cs=0x1a2;eip=0x00349a; 	T(ax = bp+var_12);	// 5944 lea     ax, [bp+var_12] ;~ 01A2:349A
cs=0x1a2;eip=0x00349d; 	X(PUSH(ax));	// 5945 push    ax ;~ 01A2:349D
cs=0x1a2;eip=0x00349e; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5946 mov     ax, offset resID_byte1 ;~ 01A2:349E
cs=0x1a2;eip=0x0034a1; 	X(PUSH(ax));	// 5947 push    ax              ; char * ;~ 01A2:34A1
cs=0x1a2;eip=0x0034a2; 	R(CALLF(_strcat,0));	// 5948 call    _strcat ;~ 01A2:34A2
cs=0x1a2;eip=0x0034a7; 	T(ADD(sp, 4));	// 5949 add     sp, 4 ;~ 01A2:34A7
loc_134aa:
	// 4656 
cs=0x1a2;eip=0x0034aa; 	T(CMP(gstate_total_finish_time, 0));	// 5952 cmp     gState_total_finish_time, 0 ;~ 01A2:34AA
cs=0x1a2;eip=0x0034af; 	R(JZ(loc_134b5));	// 5953 jz      short loc_134B5 ;~ 01A2:34AF
cs=0x1a2;eip=0x0034b1; 	X(MOV(*(raddr(ss,bp+var_18)), 0));	// 5954 mov     [bp+var_18], 0 ;~ 01A2:34B1
loc_134b5:
	// 4657 
cs=0x1a2;eip=0x0034b5; 	T(SUB(ax, ax));	// 5958 sub     ax, ax ;~ 01A2:34B5
cs=0x1a2;eip=0x0034b7; 	X(PUSH(ax));	// 5959 push    ax ;~ 01A2:34B7
cs=0x1a2;eip=0x0034b8; 	X(PUSH(dialog_fnt_colour));	// 5960 push    dialog_fnt_colour ;~ 01A2:34B8
cs=0x1a2;eip=0x0034bc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 5961 push    [bp+var_70] ;~ 01A2:34BC
cs=0x1a2;eip=0x0034bf; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5962 mov     ax, offset resID_byte1 ;~ 01A2:34BF
cs=0x1a2;eip=0x0034c2; 	X(PUSH(ax));	// 5963 push    ax ;~ 01A2:34C2
cs=0x1a2;eip=0x0034c3; 	R(CALLF(font_op2_alt,0));	// 5964 call    font_op2_alt ;~ 01A2:34C3
cs=0x1a2;eip=0x0034c8; 	T(ADD(sp, 2));	// 5965 add     sp, 2 ;~ 01A2:34C8
cs=0x1a2;eip=0x0034cb; 	X(PUSH(ax));	// 5966 push    ax ;~ 01A2:34CB
cs=0x1a2;eip=0x0034cc; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5967 mov     ax, offset resID_byte1 ;~ 01A2:34CC
cs=0x1a2;eip=0x0034cf; 	X(PUSH(ax));	// 5968 push    ax ;~ 01A2:34CF
cs=0x1a2;eip=0x0034d0; 	R(CALLF(hiscore_draw_text,0));	// 5969 call    hiscore_draw_text ;~ 01A2:34D0
cs=0x1a2;eip=0x0034d5; 	T(ADD(sp, 0x0A));	// 5970 add     sp, 0Ah ;~ 01A2:34D5
cs=0x1a2;eip=0x0034d8; 	X(ADD(*(dw*)(raddr(ss,bp+var_70)), 0x0A));	// 5971 add     [bp+var_70], 0Ah ;~ 01A2:34D8
loc_134dc:
	// 4658 
cs=0x1a2;eip=0x0034dc; 	T(CMP(*(raddr(ss,bp+var_18)), 0));	// 5974 cmp     [bp+var_18], 0 ;~ 01A2:34DC
cs=0x1a2;eip=0x0034e0; 	R(JNZ(loc_134f0));	// 5975 jnz     short loc_134F0 ;~ 01A2:34E0
cs=0x1a2;eip=0x0034e2; 	T(MOV(ax, offset(dseg,avict)));	// 5976 mov     ax, offset aVict ; "VICT" ;~ 01A2:34E2
cs=0x1a2;eip=0x0034e5; 	X(PUSH(ax));	// 5977 push    ax ;~ 01A2:34E5
cs=0x1a2;eip=0x0034e6; 	T(MOV(ax, offset(dseg,askidms_1)));	// 5978 mov     ax, offset aSkidms_1 ; "skidms" ;~ 01A2:34E6
cs=0x1a2;eip=0x0034e9; 	X(PUSH(ax));	// 5979 push    ax ;~ 01A2:34E9
cs=0x1a2;eip=0x0034ea; 	T(MOV(ax, offset(dseg,askidvict)));	// 5980 mov     ax, offset aSkidvict ; "skidvict" ;~ 01A2:34EA
cs=0x1a2;eip=0x0034ed; 	R(JMP(loc_134fb));	// 5981 jmp     short loc_134FB ;~ 01A2:34ED
loc_134f0:
	// 4659 
cs=0x1a2;eip=0x0034f0; 	T(MOV(ax, offset(dseg,aover)));	// 5986 mov     ax, offset aOver ; "OVER" ;~ 01A2:34F0
cs=0x1a2;eip=0x0034f3; 	X(PUSH(ax));	// 5987 push    ax ;~ 01A2:34F3
cs=0x1a2;eip=0x0034f4; 	T(MOV(ax, offset(dseg,askidms_2)));	// 5988 mov     ax, offset aSkidms_2 ; "skidms" ;~ 01A2:34F4
cs=0x1a2;eip=0x0034f7; 	X(PUSH(ax));	// 5989 push    ax ;~ 01A2:34F7
cs=0x1a2;eip=0x0034f8; 	T(MOV(ax, offset(dseg,askidover)));	// 5990 mov     ax, offset aSkidover ; "skidover" ;~ 01A2:34F8
loc_134fb:
	// 4660 
cs=0x1a2;eip=0x0034fb; 	X(PUSH(ax));	// 5993 push    ax              ; char * ;~ 01A2:34FB
cs=0x1a2;eip=0x0034fc; 	R(CALLF(file_load_audiores,0));	// 5994 call    file_load_audiores ;~ 01A2:34FC
cs=0x1a2;eip=0x003501; 	T(ADD(sp, 6));	// 5995 add     sp, 6 ;~ 01A2:3501
cs=0x1a2;eip=0x003504; 	T(MOV(al, byte_449aa));	// 5996 mov     al, byte_449AA ;~ 01A2:3504
cs=0x1a2;eip=0x003507; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 5997 mov     [bp+var_16], al ;~ 01A2:3507
cs=0x1a2;eip=0x00350a; 	T(CMP(*(raddr(ss,bp+var_18)), 2));	// 5998 cmp     [bp+var_18], 2 ;~ 01A2:350A
cs=0x1a2;eip=0x00350e; 	R(JNZ(loc_1351d));	// 5999 jnz     short loc_1351D ;~ 01A2:350E
cs=0x1a2;eip=0x003510; 	T(MOV(ax, gstate_pendframe));	// 6000 mov     ax, gState_pEndFrame ;~ 01A2:3510
cs=0x1a2;eip=0x003513; 	T(CMP(gstate_oendframe, ax));	// 6001 cmp     gState_oEndFrame, ax ;~ 01A2:3513
cs=0x1a2;eip=0x003517; 	R(JZ(loc_1351d));	// 6002 jz      short loc_1351D ;~ 01A2:3517
cs=0x1a2;eip=0x003519; 	X(MOV(*(raddr(ss,bp+var_16)), 0));	// 6003 mov     [bp+var_16], 0 ;~ 01A2:3519
loc_1351d:
	// 4661 
cs=0x1a2;eip=0x00351d; 	T(MOV(ax, offset(dseg,aavs)));	// 6007 mov     ax, offset aAvs ; "avs" ;~ 01A2:351D
cs=0x1a2;eip=0x003520; 	X(PUSH(ax));	// 6008 push    ax ;~ 01A2:3520
cs=0x1a2;eip=0x003521; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 6009 push    [bp+var_4C] ;~ 01A2:3521
cs=0x1a2;eip=0x003524; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 6010 push    [bp+var_4E] ;~ 01A2:3524
cs=0x1a2;eip=0x003527; 	R(CALLF(locate_text_res,0));	// 6011 call    locate_text_res ;~ 01A2:3527
cs=0x1a2;eip=0x00352c; 	T(ADD(sp, 6));	// 6012 add     sp, 6 ;~ 01A2:352C
cs=0x1a2;eip=0x00352f; 	X(PUSH(dx));	// 6013 push    dx ;~ 01A2:352F
cs=0x1a2;eip=0x003530; 	X(PUSH(ax));	// 6014 push    ax ;~ 01A2:3530
cs=0x1a2;eip=0x003531; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6015 mov     ax, offset resID_byte1 ;~ 01A2:3531
cs=0x1a2;eip=0x003534; 	X(PUSH(ax));	// 6016 push    ax ;~ 01A2:3534
cs=0x1a2;eip=0x003535; 	R(CALLF(copy_string,0));	// 6017 call    copy_string ;~ 01A2:3535
cs=0x1a2;eip=0x00353a; 	T(ADD(sp, 6));	// 6018 add     sp, 6 ;~ 01A2:353A
cs=0x1a2;eip=0x00353d; 	T(MOV(ax, gstate_pendframe));	// 6019 mov     ax, gState_pEndFrame ;~ 01A2:353D
cs=0x1a2;eip=0x003540; 	T(ADD(ax, elapsed_time1));	// 6020 add     ax, elapsed_time1 ;~ 01A2:3540
cs=0x1a2;eip=0x003544; 	R(JZ(loc_1356a));	// 6021 jz      short loc_1356A ;~ 01A2:3544
cs=0x1a2;eip=0x003546; 	T(MOV(ax, gstate_pendframe));	// 6022 mov     ax, gState_pEndFrame ;~ 01A2:3546
cs=0x1a2;eip=0x003549; 	T(ADD(ax, elapsed_time1));	// 6023 add     ax, elapsed_time1 ;~ 01A2:3549
cs=0x1a2;eip=0x00354d; 	T(SUB(cx, cx));	// 6024 sub     cx, cx ;~ 01A2:354D
cs=0x1a2;eip=0x00354f; 	X(PUSH(cx));	// 6025 push    cx ;~ 01A2:354F
cs=0x1a2;eip=0x003550; 	X(PUSH(ax));	// 6026 push    ax ;~ 01A2:3550
cs=0x1a2;eip=0x003551; 	X(PUSH(word_4434a));	// 6027 push    word_4434A ;~ 01A2:3551
cs=0x1a2;eip=0x003555; 	X(PUSH(gstate_travdist));	// 6028 push    gState_travDist ;~ 01A2:3555
cs=0x1a2;eip=0x003559; 	R(CALLF(__afuldiv,0));	// 6029 call    __aFuldiv ;~ 01A2:3559
cs=0x1a2;eip=0x00355e; 	T(MOV(al, ah));	// 6030 mov     al, ah ;~ 01A2:355E
cs=0x1a2;eip=0x003560; 	T(MOV(ah, dl));	// 6031 mov     ah, dl ;~ 01A2:3560
cs=0x1a2;eip=0x003562; 	T(MOV(dl, dh));	// 6032 mov     dl, dh ;~ 01A2:3562
cs=0x1a2;eip=0x003564; 	T(SUB(dh, dh));	// 6033 sub     dh, dh ;~ 01A2:3564
cs=0x1a2;eip=0x003566; 	T(MOV(di, ax));	// 6034 mov     di, ax ;~ 01A2:3566
cs=0x1a2;eip=0x003568; 	R(JMP(loc_1356c));	// 6035 jmp     short loc_1356C ;~ 01A2:3568
loc_1356a:
	// 4662 
cs=0x1a2;eip=0x00356a; 	T(SUB(di, di));	// 6039 sub     di, di ;~ 01A2:356A
loc_1356c:
	// 4663 
cs=0x1a2;eip=0x00356c; 	T(MOV(ax, 3));	// 6042 mov     ax, 3 ;~ 01A2:356C
cs=0x1a2;eip=0x00356f; 	X(PUSH(ax));	// 6043 push    ax              ; int ;~ 01A2:356F
cs=0x1a2;eip=0x003570; 	T(SUB(ax, ax));	// 6044 sub     ax, ax ;~ 01A2:3570
cs=0x1a2;eip=0x003572; 	X(PUSH(ax));	// 6045 push    ax              ; int ;~ 01A2:3572
cs=0x1a2;eip=0x003573; 	X(PUSH(di));	// 6046 push    di ;~ 01A2:3573
cs=0x1a2;eip=0x003574; 	T(ax = bp+var_12);	// 6047 lea     ax, [bp+var_12] ;~ 01A2:3574
cs=0x1a2;eip=0x003577; 	X(PUSH(ax));	// 6048 push    ax              ; char * ;~ 01A2:3577
cs=0x1a2;eip=0x003578; 	R(CALLF(print_int_as_string_maybe,0));	// 6049 call    print_int_as_string_maybe ;~ 01A2:3578
cs=0x1a2;eip=0x00357d; 	T(ADD(sp, 8));	// 6050 add     sp, 8 ;~ 01A2:357D
cs=0x1a2;eip=0x003580; 	T(ax = bp+var_12);	// 6051 lea     ax, [bp+var_12] ;~ 01A2:3580
cs=0x1a2;eip=0x003583; 	X(PUSH(ax));	// 6052 push    ax ;~ 01A2:3583
cs=0x1a2;eip=0x003584; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6053 mov     ax, offset resID_byte1 ;~ 01A2:3584
cs=0x1a2;eip=0x003587; 	X(PUSH(ax));	// 6054 push    ax              ; char * ;~ 01A2:3587
cs=0x1a2;eip=0x003588; 	R(CALLF(_strcat,0));	// 6055 call    _strcat ;~ 01A2:3588
cs=0x1a2;eip=0x00358d; 	T(ADD(sp, 4));	// 6056 add     sp, 4 ;~ 01A2:358D
cs=0x1a2;eip=0x003590; 	T(MOV(ax, offset(dseg,amph)));	// 6057 mov     ax, offset aMph ; "mph" ;~ 01A2:3590
cs=0x1a2;eip=0x003593; 	X(PUSH(ax));	// 6058 push    ax ;~ 01A2:3593
cs=0x1a2;eip=0x003594; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 6059 push    [bp+var_4C] ;~ 01A2:3594
cs=0x1a2;eip=0x003597; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 6060 push    [bp+var_4E] ;~ 01A2:3597
cs=0x1a2;eip=0x00359a; 	R(CALLF(locate_text_res,0));	// 6061 call    locate_text_res ;~ 01A2:359A
cs=0x1a2;eip=0x00359f; 	T(ADD(sp, 6));	// 6062 add     sp, 6 ;~ 01A2:359F
cs=0x1a2;eip=0x0035a2; 	X(PUSH(dx));	// 6063 push    dx ;~ 01A2:35A2
cs=0x1a2;eip=0x0035a3; 	X(PUSH(ax));	// 6064 push    ax ;~ 01A2:35A3
cs=0x1a2;eip=0x0035a4; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6065 mov     ax, offset resID_byte1 ;~ 01A2:35A4
cs=0x1a2;eip=0x0035a7; 	X(PUSH(ax));	// 6066 push    ax              ; char * ;~ 01A2:35A7
cs=0x1a2;eip=0x0035a8; 	R(CALLF(_strlen,0));	// 6067 call    _strlen ;~ 01A2:35A8
cs=0x1a2;eip=0x0035ad; 	T(ADD(sp, 2));	// 6068 add     sp, 2 ;~ 01A2:35AD
cs=0x1a2;eip=0x0035b0; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 6069 add     ax, offset resID_byte1 ;~ 01A2:35B0
cs=0x1a2;eip=0x0035b3; 	X(PUSH(ax));	// 6070 push    ax ;~ 01A2:35B3
cs=0x1a2;eip=0x0035b4; 	R(CALLF(copy_string,0));	// 6071 call    copy_string ;~ 01A2:35B4
cs=0x1a2;eip=0x0035b9; 	T(ADD(sp, 6));	// 6072 add     sp, 6 ;~ 01A2:35B9
cs=0x1a2;eip=0x0035bc; 	T(SUB(ax, ax));	// 6073 sub     ax, ax ;~ 01A2:35BC
cs=0x1a2;eip=0x0035be; 	X(PUSH(ax));	// 6074 push    ax ;~ 01A2:35BE
cs=0x1a2;eip=0x0035bf; 	X(PUSH(dialog_fnt_colour));	// 6075 push    dialog_fnt_colour ;~ 01A2:35BF
cs=0x1a2;eip=0x0035c3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 6076 push    [bp+var_70] ;~ 01A2:35C3
cs=0x1a2;eip=0x0035c6; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6077 mov     ax, offset resID_byte1 ;~ 01A2:35C6
cs=0x1a2;eip=0x0035c9; 	X(PUSH(ax));	// 6078 push    ax ;~ 01A2:35C9
cs=0x1a2;eip=0x0035ca; 	R(CALLF(font_op2_alt,0));	// 6079 call    font_op2_alt ;~ 01A2:35CA
cs=0x1a2;eip=0x0035cf; 	T(ADD(sp, 2));	// 6080 add     sp, 2 ;~ 01A2:35CF
cs=0x1a2;eip=0x0035d2; 	X(PUSH(ax));	// 6081 push    ax ;~ 01A2:35D2
cs=0x1a2;eip=0x0035d3; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6082 mov     ax, offset resID_byte1 ;~ 01A2:35D3
cs=0x1a2;eip=0x0035d6; 	X(PUSH(ax));	// 6083 push    ax ;~ 01A2:35D6
cs=0x1a2;eip=0x0035d7; 	R(CALLF(hiscore_draw_text,0));	// 6084 call    hiscore_draw_text ;~ 01A2:35D7
cs=0x1a2;eip=0x0035dc; 	T(ADD(sp, 0x0A));	// 6085 add     sp, 0Ah ;~ 01A2:35DC
cs=0x1a2;eip=0x0035df; 	X(ADD(*(dw*)(raddr(ss,bp+var_70)), 0x0A));	// 6086 add     [bp+var_70], 0Ah ;~ 01A2:35DF
cs=0x1a2;eip=0x0035e3; 	T(CMP(gstate_impactspeed, 0));	// 6087 cmp     gState_impactSpeed, 0 ;~ 01A2:35E3
cs=0x1a2;eip=0x0035e8; 	R(JNZ(loc_135ed));	// 6088 jnz     short loc_135ED ;~ 01A2:35E8
cs=0x1a2;eip=0x0035ea; 	R(JMP(loc_1368b));	// 6089 jmp     loc_1368B ;~ 01A2:35EA
loc_135ed:
	// 4664 
cs=0x1a2;eip=0x0035ed; 	T(MOV(ax, offset(dseg,aimp)));	// 6093 mov     ax, offset aImp ; "imp" ;~ 01A2:35ED
cs=0x1a2;eip=0x0035f0; 	X(PUSH(ax));	// 6094 push    ax ;~ 01A2:35F0
cs=0x1a2;eip=0x0035f1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 6095 push    [bp+var_4C] ;~ 01A2:35F1
cs=0x1a2;eip=0x0035f4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 6096 push    [bp+var_4E] ;~ 01A2:35F4
cs=0x1a2;eip=0x0035f7; 	R(CALLF(locate_text_res,0));	// 6097 call    locate_text_res ;~ 01A2:35F7
cs=0x1a2;eip=0x0035fc; 	T(ADD(sp, 6));	// 6098 add     sp, 6 ;~ 01A2:35FC
cs=0x1a2;eip=0x0035ff; 	X(PUSH(dx));	// 6099 push    dx ;~ 01A2:35FF
cs=0x1a2;eip=0x003600; 	X(PUSH(ax));	// 6100 push    ax ;~ 01A2:3600
cs=0x1a2;eip=0x003601; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6101 mov     ax, offset resID_byte1 ;~ 01A2:3601
cs=0x1a2;eip=0x003604; 	X(PUSH(ax));	// 6102 push    ax ;~ 01A2:3604
cs=0x1a2;eip=0x003605; 	R(CALLF(copy_string,0));	// 6103 call    copy_string ;~ 01A2:3605
cs=0x1a2;eip=0x00360a; 	T(ADD(sp, 6));	// 6104 add     sp, 6 ;~ 01A2:360A
cs=0x1a2;eip=0x00360d; 	T(MOV(ax, 3));	// 6105 mov     ax, 3 ;~ 01A2:360D
cs=0x1a2;eip=0x003610; 	X(PUSH(ax));	// 6106 push    ax              ; int ;~ 01A2:3610
cs=0x1a2;eip=0x003611; 	T(SUB(ax, ax));	// 6107 sub     ax, ax ;~ 01A2:3611
cs=0x1a2;eip=0x003613; 	X(PUSH(ax));	// 6108 push    ax              ; int ;~ 01A2:3613
cs=0x1a2;eip=0x003614; 	T(MOV(ax, gstate_impactspeed));	// 6109 mov     ax, gState_impactSpeed ;~ 01A2:3614
cs=0x1a2;eip=0x003617; 	T(MOV(cl, 8));	// 6110 mov     cl, 8 ;~ 01A2:3617
cs=0x1a2;eip=0x003619; 	T(SHR(ax, cl));	// 6111 shr     ax, cl ;~ 01A2:3619
cs=0x1a2;eip=0x00361b; 	X(PUSH(ax));	// 6112 push    ax ;~ 01A2:361B
cs=0x1a2;eip=0x00361c; 	T(ax = bp+var_12);	// 6113 lea     ax, [bp+var_12] ;~ 01A2:361C
cs=0x1a2;eip=0x00361f; 	X(PUSH(ax));	// 6114 push    ax              ; char * ;~ 01A2:361F
cs=0x1a2;eip=0x003620; 	R(CALLF(print_int_as_string_maybe,0));	// 6115 call    print_int_as_string_maybe ;~ 01A2:3620
cs=0x1a2;eip=0x003625; 	T(ADD(sp, 8));	// 6116 add     sp, 8 ;~ 01A2:3625
cs=0x1a2;eip=0x003628; 	T(ax = bp+var_12);	// 6117 lea     ax, [bp+var_12] ;~ 01A2:3628
cs=0x1a2;eip=0x00362b; 	X(PUSH(ax));	// 6118 push    ax ;~ 01A2:362B
cs=0x1a2;eip=0x00362c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6119 mov     ax, offset resID_byte1 ;~ 01A2:362C
cs=0x1a2;eip=0x00362f; 	X(PUSH(ax));	// 6120 push    ax              ; char * ;~ 01A2:362F
cs=0x1a2;eip=0x003630; 	R(CALLF(_strcat,0));	// 6121 call    _strcat ;~ 01A2:3630
cs=0x1a2;eip=0x003635; 	T(ADD(sp, 4));	// 6122 add     sp, 4 ;~ 01A2:3635
cs=0x1a2;eip=0x003638; 	T(MOV(ax, offset(dseg,amph_0)));	// 6123 mov     ax, offset aMph_0 ; "mph" ;~ 01A2:3638
cs=0x1a2;eip=0x00363b; 	X(PUSH(ax));	// 6124 push    ax ;~ 01A2:363B
cs=0x1a2;eip=0x00363c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 6125 push    [bp+var_4C] ;~ 01A2:363C
cs=0x1a2;eip=0x00363f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 6126 push    [bp+var_4E] ;~ 01A2:363F
cs=0x1a2;eip=0x003642; 	R(CALLF(locate_text_res,0));	// 6127 call    locate_text_res ;~ 01A2:3642
cs=0x1a2;eip=0x003647; 	T(ADD(sp, 6));	// 6128 add     sp, 6 ;~ 01A2:3647
cs=0x1a2;eip=0x00364a; 	X(PUSH(dx));	// 6129 push    dx ;~ 01A2:364A
cs=0x1a2;eip=0x00364b; 	X(PUSH(ax));	// 6130 push    ax ;~ 01A2:364B
cs=0x1a2;eip=0x00364c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6131 mov     ax, offset resID_byte1 ;~ 01A2:364C
cs=0x1a2;eip=0x00364f; 	X(PUSH(ax));	// 6132 push    ax              ; char * ;~ 01A2:364F
cs=0x1a2;eip=0x003650; 	R(CALLF(_strlen,0));	// 6133 call    _strlen ;~ 01A2:3650
cs=0x1a2;eip=0x003655; 	T(ADD(sp, 2));	// 6134 add     sp, 2 ;~ 01A2:3655
cs=0x1a2;eip=0x003658; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 6135 add     ax, offset resID_byte1 ;~ 01A2:3658
cs=0x1a2;eip=0x00365b; 	X(PUSH(ax));	// 6136 push    ax ;~ 01A2:365B
cs=0x1a2;eip=0x00365c; 	R(CALLF(copy_string,0));	// 6137 call    copy_string ;~ 01A2:365C
cs=0x1a2;eip=0x003661; 	T(ADD(sp, 6));	// 6138 add     sp, 6 ;~ 01A2:3661
cs=0x1a2;eip=0x003664; 	T(SUB(ax, ax));	// 6139 sub     ax, ax ;~ 01A2:3664
cs=0x1a2;eip=0x003666; 	X(PUSH(ax));	// 6140 push    ax ;~ 01A2:3666
cs=0x1a2;eip=0x003667; 	X(PUSH(dialog_fnt_colour));	// 6141 push    dialog_fnt_colour ;~ 01A2:3667
cs=0x1a2;eip=0x00366b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 6142 push    [bp+var_70] ;~ 01A2:366B
cs=0x1a2;eip=0x00366e; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6143 mov     ax, offset resID_byte1 ;~ 01A2:366E
cs=0x1a2;eip=0x003671; 	X(PUSH(ax));	// 6144 push    ax ;~ 01A2:3671
cs=0x1a2;eip=0x003672; 	R(CALLF(font_op2_alt,0));	// 6145 call    font_op2_alt ;~ 01A2:3672
cs=0x1a2;eip=0x003677; 	T(ADD(sp, 2));	// 6146 add     sp, 2 ;~ 01A2:3677
cs=0x1a2;eip=0x00367a; 	X(PUSH(ax));	// 6147 push    ax ;~ 01A2:367A
cs=0x1a2;eip=0x00367b; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6148 mov     ax, offset resID_byte1 ;~ 01A2:367B
cs=0x1a2;eip=0x00367e; 	X(PUSH(ax));	// 6149 push    ax ;~ 01A2:367E
cs=0x1a2;eip=0x00367f; 	R(CALLF(hiscore_draw_text,0));	// 6150 call    hiscore_draw_text ;~ 01A2:367F
cs=0x1a2;eip=0x003684; 	T(ADD(sp, 0x0A));	// 6151 add     sp, 0Ah ;~ 01A2:3684
cs=0x1a2;eip=0x003687; 	X(ADD(*(dw*)(raddr(ss,bp+var_70)), 0x0A));	// 6152 add     [bp+var_70], 0Ah ;~ 01A2:3687
loc_1368b:
	// 4665 
cs=0x1a2;eip=0x00368b; 	T(MOV(ax, offset(dseg,atop)));	// 6155 mov     ax, offset aTop ; "top" ;~ 01A2:368B
cs=0x1a2;eip=0x00368e; 	X(PUSH(ax));	// 6156 push    ax ;~ 01A2:368E
cs=0x1a2;eip=0x00368f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 6157 push    [bp+var_4C] ;~ 01A2:368F
cs=0x1a2;eip=0x003692; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 6158 push    [bp+var_4E] ;~ 01A2:3692
cs=0x1a2;eip=0x003695; 	R(CALLF(locate_text_res,0));	// 6159 call    locate_text_res ;~ 01A2:3695
cs=0x1a2;eip=0x00369a; 	T(ADD(sp, 6));	// 6160 add     sp, 6 ;~ 01A2:369A
cs=0x1a2;eip=0x00369d; 	X(PUSH(dx));	// 6161 push    dx ;~ 01A2:369D
cs=0x1a2;eip=0x00369e; 	X(PUSH(ax));	// 6162 push    ax ;~ 01A2:369E
cs=0x1a2;eip=0x00369f; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6163 mov     ax, offset resID_byte1 ;~ 01A2:369F
cs=0x1a2;eip=0x0036a2; 	X(PUSH(ax));	// 6164 push    ax ;~ 01A2:36A2
cs=0x1a2;eip=0x0036a3; 	R(CALLF(copy_string,0));	// 6165 call    copy_string ;~ 01A2:36A3
cs=0x1a2;eip=0x0036a8; 	T(ADD(sp, 6));	// 6166 add     sp, 6 ;~ 01A2:36A8
cs=0x1a2;eip=0x0036ab; 	T(MOV(ax, 3));	// 6167 mov     ax, 3 ;~ 01A2:36AB
cs=0x1a2;eip=0x0036ae; 	X(PUSH(ax));	// 6168 push    ax              ; int ;~ 01A2:36AE
cs=0x1a2;eip=0x0036af; 	T(SUB(ax, ax));	// 6169 sub     ax, ax ;~ 01A2:36AF
cs=0x1a2;eip=0x0036b1; 	X(PUSH(ax));	// 6170 push    ax              ; int ;~ 01A2:36B1
cs=0x1a2;eip=0x0036b2; 	T(MOV(ax, gstate_topspeed));	// 6171 mov     ax, gState_topSpeed ;~ 01A2:36B2
cs=0x1a2;eip=0x0036b5; 	T(MOV(cl, 8));	// 6172 mov     cl, 8 ;~ 01A2:36B5
cs=0x1a2;eip=0x0036b7; 	T(SHR(ax, cl));	// 6173 shr     ax, cl ;~ 01A2:36B7
cs=0x1a2;eip=0x0036b9; 	X(PUSH(ax));	// 6174 push    ax ;~ 01A2:36B9
cs=0x1a2;eip=0x0036ba; 	T(ax = bp+var_12);	// 6175 lea     ax, [bp+var_12] ;~ 01A2:36BA
cs=0x1a2;eip=0x0036bd; 	X(PUSH(ax));	// 6176 push    ax              ; char * ;~ 01A2:36BD
cs=0x1a2;eip=0x0036be; 	R(CALLF(print_int_as_string_maybe,0));	// 6177 call    print_int_as_string_maybe ;~ 01A2:36BE
cs=0x1a2;eip=0x0036c3; 	T(ADD(sp, 8));	// 6178 add     sp, 8 ;~ 01A2:36C3
cs=0x1a2;eip=0x0036c6; 	T(ax = bp+var_12);	// 6179 lea     ax, [bp+var_12] ;~ 01A2:36C6
cs=0x1a2;eip=0x0036c9; 	X(PUSH(ax));	// 6180 push    ax ;~ 01A2:36C9
cs=0x1a2;eip=0x0036ca; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6181 mov     ax, offset resID_byte1 ;~ 01A2:36CA
cs=0x1a2;eip=0x0036cd; 	X(PUSH(ax));	// 6182 push    ax              ; char * ;~ 01A2:36CD
cs=0x1a2;eip=0x0036ce; 	R(CALLF(_strcat,0));	// 6183 call    _strcat ;~ 01A2:36CE
cs=0x1a2;eip=0x0036d3; 	T(ADD(sp, 4));	// 6184 add     sp, 4 ;~ 01A2:36D3
cs=0x1a2;eip=0x0036d6; 	T(MOV(ax, offset(dseg,amph_1)));	// 6185 mov     ax, offset aMph_1 ; "mph" ;~ 01A2:36D6
cs=0x1a2;eip=0x0036d9; 	X(PUSH(ax));	// 6186 push    ax ;~ 01A2:36D9
cs=0x1a2;eip=0x0036da; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 6187 push    [bp+var_4C] ;~ 01A2:36DA
cs=0x1a2;eip=0x0036dd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 6188 push    [bp+var_4E] ;~ 01A2:36DD
cs=0x1a2;eip=0x0036e0; 	R(CALLF(locate_text_res,0));	// 6189 call    locate_text_res ;~ 01A2:36E0
cs=0x1a2;eip=0x0036e5; 	T(ADD(sp, 6));	// 6190 add     sp, 6 ;~ 01A2:36E5
cs=0x1a2;eip=0x0036e8; 	X(PUSH(dx));	// 6191 push    dx ;~ 01A2:36E8
cs=0x1a2;eip=0x0036e9; 	X(PUSH(ax));	// 6192 push    ax ;~ 01A2:36E9
cs=0x1a2;eip=0x0036ea; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6193 mov     ax, offset resID_byte1 ;~ 01A2:36EA
cs=0x1a2;eip=0x0036ed; 	X(PUSH(ax));	// 6194 push    ax              ; char * ;~ 01A2:36ED
cs=0x1a2;eip=0x0036ee; 	R(CALLF(_strlen,0));	// 6195 call    _strlen ;~ 01A2:36EE
cs=0x1a2;eip=0x0036f3; 	T(ADD(sp, 2));	// 6196 add     sp, 2 ;~ 01A2:36F3
cs=0x1a2;eip=0x0036f6; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 6197 add     ax, offset resID_byte1 ;~ 01A2:36F6
cs=0x1a2;eip=0x0036f9; 	X(PUSH(ax));	// 6198 push    ax ;~ 01A2:36F9
cs=0x1a2;eip=0x0036fa; 	R(CALLF(copy_string,0));	// 6199 call    copy_string ;~ 01A2:36FA
cs=0x1a2;eip=0x0036ff; 	T(ADD(sp, 6));	// 6200 add     sp, 6 ;~ 01A2:36FF
cs=0x1a2;eip=0x003702; 	T(SUB(ax, ax));	// 6201 sub     ax, ax ;~ 01A2:3702
cs=0x1a2;eip=0x003704; 	X(PUSH(ax));	// 6202 push    ax ;~ 01A2:3704
cs=0x1a2;eip=0x003705; 	X(PUSH(dialog_fnt_colour));	// 6203 push    dialog_fnt_colour ;~ 01A2:3705
cs=0x1a2;eip=0x003709; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 6204 push    [bp+var_70] ;~ 01A2:3709
cs=0x1a2;eip=0x00370c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6205 mov     ax, offset resID_byte1 ;~ 01A2:370C
cs=0x1a2;eip=0x00370f; 	X(PUSH(ax));	// 6206 push    ax ;~ 01A2:370F
cs=0x1a2;eip=0x003710; 	R(CALLF(font_op2_alt,0));	// 6207 call    font_op2_alt ;~ 01A2:3710
cs=0x1a2;eip=0x003715; 	T(ADD(sp, 2));	// 6208 add     sp, 2 ;~ 01A2:3715
cs=0x1a2;eip=0x003718; 	X(PUSH(ax));	// 6209 push    ax ;~ 01A2:3718
cs=0x1a2;eip=0x003719; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6210 mov     ax, offset resID_byte1 ;~ 01A2:3719
cs=0x1a2;eip=0x00371c; 	X(PUSH(ax));	// 6211 push    ax ;~ 01A2:371C
cs=0x1a2;eip=0x00371d; 	R(CALLF(hiscore_draw_text,0));	// 6212 call    hiscore_draw_text ;~ 01A2:371D
cs=0x1a2;eip=0x003722; 	T(ADD(sp, 0x0A));	// 6213 add     sp, 0Ah ;~ 01A2:3722
cs=0x1a2;eip=0x003725; 	X(ADD(*(dw*)(raddr(ss,bp+var_70)), 0x0A));	// 6214 add     [bp+var_70], 0Ah ;~ 01A2:3725
cs=0x1a2;eip=0x003729; 	T(CMP(gstate_jumpcount, 0));	// 6215 cmp     gState_jumpCount, 0 ;~ 01A2:3729
cs=0x1a2;eip=0x00372e; 	R(JZ(loc_1379a));	// 6216 jz      short loc_1379A ;~ 01A2:372E
cs=0x1a2;eip=0x003730; 	T(MOV(ax, offset(dseg,ajum)));	// 6217 mov     ax, offset aJum ; "jum" ;~ 01A2:3730
cs=0x1a2;eip=0x003733; 	X(PUSH(ax));	// 6218 push    ax ;~ 01A2:3733
cs=0x1a2;eip=0x003734; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 6219 push    [bp+var_4C] ;~ 01A2:3734
cs=0x1a2;eip=0x003737; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 6220 push    [bp+var_4E] ;~ 01A2:3737
cs=0x1a2;eip=0x00373a; 	R(CALLF(locate_text_res,0));	// 6221 call    locate_text_res ;~ 01A2:373A
cs=0x1a2;eip=0x00373f; 	T(ADD(sp, 6));	// 6222 add     sp, 6 ;~ 01A2:373F
cs=0x1a2;eip=0x003742; 	X(PUSH(dx));	// 6223 push    dx ;~ 01A2:3742
cs=0x1a2;eip=0x003743; 	X(PUSH(ax));	// 6224 push    ax ;~ 01A2:3743
cs=0x1a2;eip=0x003744; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6225 mov     ax, offset resID_byte1 ;~ 01A2:3744
cs=0x1a2;eip=0x003747; 	X(PUSH(ax));	// 6226 push    ax ;~ 01A2:3747
cs=0x1a2;eip=0x003748; 	R(CALLF(copy_string,0));	// 6227 call    copy_string ;~ 01A2:3748
cs=0x1a2;eip=0x00374d; 	T(ADD(sp, 6));	// 6228 add     sp, 6 ;~ 01A2:374D
cs=0x1a2;eip=0x003750; 	T(MOV(ax, 3));	// 6229 mov     ax, 3 ;~ 01A2:3750
cs=0x1a2;eip=0x003753; 	X(PUSH(ax));	// 6230 push    ax              ; int ;~ 01A2:3753
cs=0x1a2;eip=0x003754; 	T(SUB(ax, ax));	// 6231 sub     ax, ax ;~ 01A2:3754
cs=0x1a2;eip=0x003756; 	X(PUSH(ax));	// 6232 push    ax              ; int ;~ 01A2:3756
cs=0x1a2;eip=0x003757; 	X(PUSH(gstate_jumpcount));	// 6233 push    gState_jumpCount ;~ 01A2:3757
cs=0x1a2;eip=0x00375b; 	T(ax = bp+var_12);	// 6234 lea     ax, [bp+var_12] ;~ 01A2:375B
cs=0x1a2;eip=0x00375e; 	X(PUSH(ax));	// 6235 push    ax              ; char * ;~ 01A2:375E
cs=0x1a2;eip=0x00375f; 	R(CALLF(print_int_as_string_maybe,0));	// 6236 call    print_int_as_string_maybe ;~ 01A2:375F
cs=0x1a2;eip=0x003764; 	T(ADD(sp, 8));	// 6237 add     sp, 8 ;~ 01A2:3764
cs=0x1a2;eip=0x003767; 	T(ax = bp+var_12);	// 6238 lea     ax, [bp+var_12] ;~ 01A2:3767
cs=0x1a2;eip=0x00376a; 	X(PUSH(ax));	// 6239 push    ax ;~ 01A2:376A
cs=0x1a2;eip=0x00376b; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6240 mov     ax, offset resID_byte1 ;~ 01A2:376B
cs=0x1a2;eip=0x00376e; 	X(PUSH(ax));	// 6241 push    ax              ; char * ;~ 01A2:376E
cs=0x1a2;eip=0x00376f; 	R(CALLF(_strcat,0));	// 6242 call    _strcat ;~ 01A2:376F
cs=0x1a2;eip=0x003774; 	T(ADD(sp, 4));	// 6243 add     sp, 4 ;~ 01A2:3774
cs=0x1a2;eip=0x003777; 	T(SUB(ax, ax));	// 6244 sub     ax, ax ;~ 01A2:3777
cs=0x1a2;eip=0x003779; 	X(PUSH(ax));	// 6245 push    ax ;~ 01A2:3779
cs=0x1a2;eip=0x00377a; 	X(PUSH(dialog_fnt_colour));	// 6246 push    dialog_fnt_colour ;~ 01A2:377A
cs=0x1a2;eip=0x00377e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 6247 push    [bp+var_70] ;~ 01A2:377E
cs=0x1a2;eip=0x003781; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6248 mov     ax, offset resID_byte1 ;~ 01A2:3781
cs=0x1a2;eip=0x003784; 	X(PUSH(ax));	// 6249 push    ax ;~ 01A2:3784
cs=0x1a2;eip=0x003785; 	R(CALLF(font_op2_alt,0));	// 6250 call    font_op2_alt ;~ 01A2:3785
cs=0x1a2;eip=0x00378a; 	T(ADD(sp, 2));	// 6251 add     sp, 2 ;~ 01A2:378A
cs=0x1a2;eip=0x00378d; 	X(PUSH(ax));	// 6252 push    ax ;~ 01A2:378D
cs=0x1a2;eip=0x00378e; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6253 mov     ax, offset resID_byte1 ;~ 01A2:378E
cs=0x1a2;eip=0x003791; 	X(PUSH(ax));	// 6254 push    ax ;~ 01A2:3791
cs=0x1a2;eip=0x003792; 	R(CALLF(hiscore_draw_text,0));	// 6255 call    hiscore_draw_text ;~ 01A2:3792
cs=0x1a2;eip=0x003797; 	T(ADD(sp, 0x0A));	// 6256 add     sp, 0Ah ;~ 01A2:3797
loc_1379a:
	// 4666 
cs=0x1a2;eip=0x00379a; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 6259 cmp     [bp+var_16], 0 ;~ 01A2:379A
cs=0x1a2;eip=0x00379e; 	R(JNZ(loc_137a3));	// 6260 jnz     short loc_137A3 ;~ 01A2:379E
cs=0x1a2;eip=0x0037a0; 	R(JMP(loc_138ff));	// 6261 jmp     loc_138FF ;~ 01A2:37A0
loc_137a3:
	// 4667 
cs=0x1a2;eip=0x0037a3; 	T(TEST(byte_43966, 4));	// 6265 test    byte_43966, 4 ;~ 01A2:37A3
cs=0x1a2;eip=0x0037a8; 	R(JZ(loc_137ad));	// 6266 jz      short loc_137AD ;~ 01A2:37A8
cs=0x1a2;eip=0x0037aa; 	R(JMP(loc_1384b));	// 6267 jmp     loc_1384B ;~ 01A2:37AA
loc_137ad:
	// 4668 
cs=0x1a2;eip=0x0037ad; 	T(MOV(ax, word_40d40));	// 6271 mov     ax, word_40D40 ;~ 01A2:37AD
cs=0x1a2;eip=0x0037b0; 	X(MOV(word_40d3a, ax));	// 6272 mov     word_40D3A, ax ;~ 01A2:37B0
cs=0x1a2;eip=0x0037b3; 	T(MOV(ax, end_hiscore_random));	// 6273 mov     ax, end_hiscore_random ;~ 01A2:37B3
cs=0x1a2;eip=0x0037b6; 	X(MOV(word_40d3c, ax));	// 6274 mov     word_40D3C, ax ;~ 01A2:37B6
cs=0x1a2;eip=0x0037b9; 	T(MOV(ax, word_40d44));	// 6275 mov     ax, word_40D44 ;~ 01A2:37B9
cs=0x1a2;eip=0x0037bc; 	X(MOV(word_40d3e, ax));	// 6276 mov     word_40D3E, ax ;~ 01A2:37BC
cs=0x1a2;eip=0x0037bf; 	R(CALLF(get_super_random,0));	// 6277 call    get_super_random ;~ 01A2:37BF
cs=0x1a2;eip=0x0037c4; 	T(CWD);	// 6278 cwd ;~ 01A2:37C4
cs=0x1a2;eip=0x0037c5; 	T(MOV(cx, 3));	// 6279 mov     cx, 3 ;~ 01A2:37C5
cs=0x1a2;eip=0x0037c8; 	T(IDIV2(cx));	// 6280 idiv    cx ;~ 01A2:37C8
cs=0x1a2;eip=0x0037ca; 	X(MOV(word_40d40, dx));	// 6281 mov     word_40D40, dx ;~ 01A2:37CA
cs=0x1a2;eip=0x0037ce; 	T(MOV(ax, word_40d3a));	// 6282 mov     ax, word_40D3A ;~ 01A2:37CE
cs=0x1a2;eip=0x0037d1; 	T(CMP(dx, ax));	// 6283 cmp     dx, ax ;~ 01A2:37D1
cs=0x1a2;eip=0x0037d3; 	R(JNZ(loc_137e0));	// 6284 jnz     short loc_137E0 ;~ 01A2:37D3
cs=0x1a2;eip=0x0037d5; 	T(MOV(bx, dx));	// 6285 mov     bx, dx ;~ 01A2:37D5
cs=0x1a2;eip=0x0037d7; 	T(SHL(bx, 1));	// 6286 shl     bx, 1 ;~ 01A2:37D7
cs=0x1a2;eip=0x0037d9; 	T(MOV(ax, *(dw*)(((db*)&word_3bcde)+bx)));	// 6287 mov     ax, word_3BCDE[bx] ;~ 01A2:37D9
cs=0x1a2;eip=0x0037dd; 	X(MOV(word_40d40, ax));	// 6288 mov     word_40D40, ax ;~ 01A2:37DD
loc_137e0:
	// 4669 
cs=0x1a2;eip=0x0037e0; 	R(CALLF(get_super_random,0));	// 6291 call    get_super_random ;~ 01A2:37E0
cs=0x1a2;eip=0x0037e5; 	T(CWD);	// 6292 cwd ;~ 01A2:37E5
cs=0x1a2;eip=0x0037e6; 	T(MOV(cx, 3));	// 6293 mov     cx, 3 ;~ 01A2:37E6
cs=0x1a2;eip=0x0037e9; 	T(IDIV2(cx));	// 6294 idiv    cx ;~ 01A2:37E9
cs=0x1a2;eip=0x0037eb; 	X(MOV(word_40d44, dx));	// 6295 mov     word_40D44, dx ;~ 01A2:37EB
cs=0x1a2;eip=0x0037ef; 	T(MOV(ax, word_40d3e));	// 6296 mov     ax, word_40D3E ;~ 01A2:37EF
cs=0x1a2;eip=0x0037f2; 	T(CMP(dx, ax));	// 6297 cmp     dx, ax ;~ 01A2:37F2
cs=0x1a2;eip=0x0037f4; 	R(JNZ(loc_13801));	// 6298 jnz     short loc_13801 ;~ 01A2:37F4
cs=0x1a2;eip=0x0037f6; 	T(MOV(bx, dx));	// 6299 mov     bx, dx ;~ 01A2:37F6
cs=0x1a2;eip=0x0037f8; 	T(SHL(bx, 1));	// 6300 shl     bx, 1 ;~ 01A2:37F8
cs=0x1a2;eip=0x0037fa; 	T(MOV(ax, *(dw*)(((db*)&word_3bcde)+bx)));	// 6301 mov     ax, word_3BCDE[bx] ;~ 01A2:37FA
cs=0x1a2;eip=0x0037fe; 	X(MOV(word_40d44, ax));	// 6302 mov     word_40D44, ax ;~ 01A2:37FE
loc_13801:
	// 4670 
cs=0x1a2;eip=0x003801; 	T(CMP(*(raddr(ss,bp+var_18)), 1));	// 6305 cmp     [bp+var_18], 1 ;~ 01A2:3801
cs=0x1a2;eip=0x003805; 	R(JNZ(loc_1382a));	// 6306 jnz     short loc_1382A ;~ 01A2:3805
cs=0x1a2;eip=0x003807; 	T(CMP(gstate_total_finish_time, 0));	// 6307 cmp     gState_total_finish_time, 0 ;~ 01A2:3807
cs=0x1a2;eip=0x00380c; 	R(JZ(loc_1381e));	// 6308 jz      short loc_1381E ;~ 01A2:380C
cs=0x1a2;eip=0x00380e; 	R(CALLF(get_super_random,0));	// 6309 call    get_super_random ;~ 01A2:380E
cs=0x1a2;eip=0x003813; 	T(CWD);	// 6310 cwd ;~ 01A2:3813
cs=0x1a2;eip=0x003814; 	T(MOV(cx, 2));	// 6311 mov     cx, 2 ;~ 01A2:3814
cs=0x1a2;eip=0x003817; 	T(IDIV2(cx));	// 6312 idiv    cx ;~ 01A2:3817
cs=0x1a2;eip=0x003819; 	T(ADD(dx, cx));	// 6313 add     dx, cx ;~ 01A2:3819
cs=0x1a2;eip=0x00381b; 	R(JMP(loc_13835));	// 6314 jmp     short loc_13835 ;~ 01A2:381B
loc_1381e:
	// 4671 
cs=0x1a2;eip=0x00381e; 	R(CALLF(get_super_random,0));	// 6319 call    get_super_random ;~ 01A2:381E
cs=0x1a2;eip=0x003823; 	T(CWD);	// 6320 cwd ;~ 01A2:3823
cs=0x1a2;eip=0x003824; 	T(MOV(cx, 2));	// 6321 mov     cx, 2 ;~ 01A2:3824
cs=0x1a2;eip=0x003827; 	R(JMP(loc_13833));	// 6322 jmp     short loc_13833 ;~ 01A2:3827
loc_1382a:
	// 4672 
cs=0x1a2;eip=0x00382a; 	R(CALLF(get_super_random,0));	// 6327 call    get_super_random ;~ 01A2:382A
cs=0x1a2;eip=0x00382f; 	T(CWD);	// 6328 cwd ;~ 01A2:382F
cs=0x1a2;eip=0x003830; 	T(MOV(cx, 4));	// 6329 mov     cx, 4 ;~ 01A2:3830
loc_13833:
	// 4673 
cs=0x1a2;eip=0x003833; 	T(IDIV2(cx));	// 6332 idiv    cx ;~ 01A2:3833
loc_13835:
	// 4674 
cs=0x1a2;eip=0x003835; 	X(MOV(end_hiscore_random, dx));	// 6335 mov     end_hiscore_random, dx ;~ 01A2:3835
cs=0x1a2;eip=0x003839; 	T(MOV(ax, word_40d3c));	// 6336 mov     ax, word_40D3C ;~ 01A2:3839
cs=0x1a2;eip=0x00383c; 	T(CMP(dx, ax));	// 6337 cmp     dx, ax ;~ 01A2:383C
cs=0x1a2;eip=0x00383e; 	R(JNZ(loc_1384b));	// 6338 jnz     short loc_1384B ;~ 01A2:383E
cs=0x1a2;eip=0x003840; 	T(MOV(bx, dx));	// 6339 mov     bx, dx ;~ 01A2:3840
cs=0x1a2;eip=0x003842; 	T(SHL(bx, 1));	// 6340 shl     bx, 1 ;~ 01A2:3842
cs=0x1a2;eip=0x003844; 	T(MOV(ax, *(dw*)(((db*)&word_3bce4)+bx)));	// 6341 mov     ax, word_3BCE4[bx] ;~ 01A2:3844
cs=0x1a2;eip=0x003848; 	X(MOV(end_hiscore_random, ax));	// 6342 mov     end_hiscore_random, ax ;~ 01A2:3848
loc_1384b:
	// 4675 
cs=0x1a2;eip=0x00384b; 	T(CMP(*(raddr(ss,bp+var_18)), 1));	// 6346 cmp     [bp+var_18], 1 ;~ 01A2:384B
cs=0x1a2;eip=0x00384f; 	R(JNZ(loc_138b6));	// 6347 jnz     short loc_138B6 ;~ 01A2:384F
cs=0x1a2;eip=0x003851; 	T(MOV(al, byte_449aa));	// 6348 mov     al, byte_449AA ;~ 01A2:3851
cs=0x1a2;eip=0x003854; 	T(ADD(al, 0x30));	// 6349 add     al, 30h ; '0' ;~ 01A2:3854
cs=0x1a2;eip=0x003856; 	X(MOV(byte_3bd17, al));	// 6350 mov     byte_3BD17, al ;~ 01A2:3856
cs=0x1a2;eip=0x003859; 	T(MOV(ax, offset(dseg,aopp2win)));	// 6351 mov     ax, offset aOpp2win ;~ 01A2:3859
cs=0x1a2;eip=0x00385c; 	X(PUSH(ax));	// 6352 push    ax              ; char * ;~ 01A2:385C
cs=0x1a2;eip=0x00385d; 	T(MOV(ax, 3));	// 6353 mov     ax, 3 ;~ 01A2:385D
cs=0x1a2;eip=0x003860; 	X(PUSH(ax));	// 6354 push    ax              ; int ;~ 01A2:3860
cs=0x1a2;eip=0x003861; 	R(CALLF(file_load_resource,0));	// 6355 call    file_load_resource ;~ 01A2:3861
cs=0x1a2;eip=0x003866; 	T(ADD(sp, 4));	// 6356 add     sp, 4 ;~ 01A2:3866
cs=0x1a2;eip=0x003869; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 6357 mov     [bp+var_1C], ax ;~ 01A2:3869
cs=0x1a2;eip=0x00386c; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), dx));	// 6358 mov     [bp+var_1A], dx ;~ 01A2:386C
cs=0x1a2;eip=0x00386f; 	T(MOV(ax, offset(dseg,awinn)));	// 6359 mov     ax, offset aWinn ; "winn" ;~ 01A2:386F
cs=0x1a2;eip=0x003872; 	X(PUSH(ax));	// 6360 push    ax ;~ 01A2:3872
cs=0x1a2;eip=0x003873; 	X(PUSH(*(dw*)(raddr(ss,bp+var_66))));	// 6361 push    [bp+var_66] ;~ 01A2:3873
cs=0x1a2;eip=0x003876; 	X(PUSH(*(dw*)(raddr(ss,bp+var_68))));	// 6362 push    [bp+var_68] ;~ 01A2:3876
cs=0x1a2;eip=0x003879; 	R(CALLF(locate_shape_alt,0));	// 6363 call    locate_shape_alt ;~ 01A2:3879
cs=0x1a2;eip=0x00387e; 	T(ADD(sp, 6));	// 6364 add     sp, 6 ;~ 01A2:387E
cs=0x1a2;eip=0x003881; 	X(MOV(*(dw*)(raddr(ss,bp+var_5a)), ax));	// 6365 mov     [bp+var_5A], ax ;~ 01A2:3881
cs=0x1a2;eip=0x003884; 	X(MOV(*(dw*)(raddr(ss,bp+var_58)), dx));	// 6366 mov     [bp+var_58], dx ;~ 01A2:3884
cs=0x1a2;eip=0x003887; 	T(CMP(gstate_total_finish_time, 0));	// 6367 cmp     gState_total_finish_time, 0 ;~ 01A2:3887
cs=0x1a2;eip=0x00388c; 	R(JZ(loc_138a0));	// 6368 jz      short loc_138A0 ;~ 01A2:388C
cs=0x1a2;eip=0x00388e; 	R(CALLF(get_kevinrandom,0));	// 6369 call    get_kevinrandom ;~ 01A2:388E
cs=0x1a2;eip=0x003893; 	T(ADD(ax, gstate_frame));	// 6370 add     ax, gState_frame ;~ 01A2:3893
cs=0x1a2;eip=0x003897; 	T(AND(ax, 1));	// 6371 and     ax, 1 ;~ 01A2:3897
cs=0x1a2;eip=0x00389a; 	T(ADD(ax, 2));	// 6372 add     ax, 2 ;~ 01A2:389A
cs=0x1a2;eip=0x00389d; 	R(JMP(loc_138ac));	// 6373 jmp     short loc_138AC ;~ 01A2:389D
loc_138a0:
	// 4676 
cs=0x1a2;eip=0x0038a0; 	R(CALLF(get_kevinrandom,0));	// 6378 call    get_kevinrandom ;~ 01A2:38A0
cs=0x1a2;eip=0x0038a5; 	T(ADD(ax, gstate_frame));	// 6379 add     ax, gState_frame ;~ 01A2:38A5
cs=0x1a2;eip=0x0038a9; 	T(AND(ax, 1));	// 6380 and     ax, 1 ;~ 01A2:38A9
loc_138ac:
	// 4677 
cs=0x1a2;eip=0x0038ac; 	X(MOV(end_hiscore_random, ax));	// 6383 mov     end_hiscore_random, ax ;~ 01A2:38AC
cs=0x1a2;eip=0x0038af; 	X(MOV(*(raddr(ss,bp+var_6a)), 0x76));	// 6384 mov     [bp+var_6A], 76h ; 'v' ;~ 01A2:38AF
cs=0x1a2;eip=0x0038b3; 	R(JMP(loc_138ff));	// 6385 jmp     short loc_138FF ;~ 01A2:38B3
loc_138b6:
	// 4678 
cs=0x1a2;eip=0x0038b6; 	T(MOV(al, byte_449aa));	// 6390 mov     al, byte_449AA ;~ 01A2:38B6
cs=0x1a2;eip=0x0038b9; 	T(ADD(al, 0x30));	// 6391 add     al, 30h ; '0' ;~ 01A2:38B9
cs=0x1a2;eip=0x0038bb; 	X(MOV(byte_3bd1f, al));	// 6392 mov     byte_3BD1F, al ;~ 01A2:38BB
cs=0x1a2;eip=0x0038be; 	T(MOV(ax, offset(dseg,aopp2lose)));	// 6393 mov     ax, offset aOpp2lose ;~ 01A2:38BE
cs=0x1a2;eip=0x0038c1; 	X(PUSH(ax));	// 6394 push    ax              ; char * ;~ 01A2:38C1
cs=0x1a2;eip=0x0038c2; 	T(MOV(ax, 3));	// 6395 mov     ax, 3 ;~ 01A2:38C2
cs=0x1a2;eip=0x0038c5; 	X(PUSH(ax));	// 6396 push    ax              ; int ;~ 01A2:38C5
cs=0x1a2;eip=0x0038c6; 	R(CALLF(file_load_resource,0));	// 6397 call    file_load_resource ;~ 01A2:38C6
cs=0x1a2;eip=0x0038cb; 	T(ADD(sp, 4));	// 6398 add     sp, 4 ;~ 01A2:38CB
cs=0x1a2;eip=0x0038ce; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 6399 mov     [bp+var_1C], ax ;~ 01A2:38CE
cs=0x1a2;eip=0x0038d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), dx));	// 6400 mov     [bp+var_1A], dx ;~ 01A2:38D1
cs=0x1a2;eip=0x0038d4; 	T(MOV(ax, offset(dseg,alose_0)));	// 6401 mov     ax, offset aLose_0 ; "lose" ;~ 01A2:38D4
cs=0x1a2;eip=0x0038d7; 	X(PUSH(ax));	// 6402 push    ax ;~ 01A2:38D7
cs=0x1a2;eip=0x0038d8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_66))));	// 6403 push    [bp+var_66] ;~ 01A2:38D8
cs=0x1a2;eip=0x0038db; 	X(PUSH(*(dw*)(raddr(ss,bp+var_68))));	// 6404 push    [bp+var_68] ;~ 01A2:38DB
cs=0x1a2;eip=0x0038de; 	R(CALLF(locate_shape_alt,0));	// 6405 call    locate_shape_alt ;~ 01A2:38DE
cs=0x1a2;eip=0x0038e3; 	T(ADD(sp, 6));	// 6406 add     sp, 6 ;~ 01A2:38E3
cs=0x1a2;eip=0x0038e6; 	X(MOV(*(dw*)(raddr(ss,bp+var_5a)), ax));	// 6407 mov     [bp+var_5A], ax ;~ 01A2:38E6
cs=0x1a2;eip=0x0038e9; 	X(MOV(*(dw*)(raddr(ss,bp+var_58)), dx));	// 6408 mov     [bp+var_58], dx ;~ 01A2:38E9
cs=0x1a2;eip=0x0038ec; 	R(CALLF(get_kevinrandom,0));	// 6409 call    get_kevinrandom ;~ 01A2:38EC
cs=0x1a2;eip=0x0038f1; 	T(ADD(ax, gstate_frame));	// 6410 add     ax, gState_frame ;~ 01A2:38F1
cs=0x1a2;eip=0x0038f5; 	T(AND(ax, 3));	// 6411 and     ax, 3 ;~ 01A2:38F5
cs=0x1a2;eip=0x0038f8; 	X(MOV(end_hiscore_random, ax));	// 6412 mov     end_hiscore_random, ax ;~ 01A2:38F8
cs=0x1a2;eip=0x0038fb; 	X(MOV(*(raddr(ss,bp+var_6a)), 0x64));	// 6413 mov     [bp+var_6A], 64h ; 'd' ;~ 01A2:38FB
loc_138ff:
	// 4679 
cs=0x1a2;eip=0x0038ff; 	X(MOV(*(raddr(ss,bp+var_6e)), 0));	// 6417 mov     [bp+var_6E], 0 ;~ 01A2:38FF
cs=0x1a2;eip=0x003903; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 6418 mov     ax, offset g_path_buf ;~ 01A2:3903
cs=0x1a2;eip=0x003906; 	X(PUSH(ax));	// 6419 push    ax              ; char * ;~ 01A2:3906
cs=0x1a2;eip=0x003907; 	T(MOV(ax, offset(dseg,a_trk_5)));	// 6420 mov     ax, offset a_trk_5 ; ".trk" ;~ 01A2:3907
cs=0x1a2;eip=0x00390a; 	X(PUSH(ax));	// 6421 push    ax              ; int ;~ 01A2:390A
cs=0x1a2;eip=0x00390b; 	T(MOV(ax, offset(dseg,byte_449b1)));	// 6422 mov     ax, offset byte_449B1 ;~ 01A2:390B
cs=0x1a2;eip=0x00390e; 	X(PUSH(ax));	// 6423 push    ax ;~ 01A2:390E
cs=0x1a2;eip=0x00390f; 	T(MOV(ax, offset(dseg,byte_3b80c)));	// 6424 mov     ax, offset byte_3B80C ;~ 01A2:390F
cs=0x1a2;eip=0x003912; 	X(PUSH(ax));	// 6425 push    ax              ; char * ;~ 01A2:3912
cs=0x1a2;eip=0x003913; 	R(CALLF(file_build_path,0));	// 6426 call    file_build_path ;~ 01A2:3913
cs=0x1a2;eip=0x003918; 	T(ADD(sp, 8));	// 6427 add     sp, 8 ;~ 01A2:3918
cs=0x1a2;eip=0x00391b; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 6428 mov     ax, offset g_path_buf ;~ 01A2:391B
cs=0x1a2;eip=0x00391e; 	X(PUSH(ax));	// 6429 push    ax              ; char * ;~ 01A2:391E
cs=0x1a2;eip=0x00391f; 	T(MOV(ax, 1));	// 6430 mov     ax, 1 ;~ 01A2:391F
cs=0x1a2;eip=0x003922; 	X(PUSH(ax));	// 6431 push    ax              ; int ;~ 01A2:3922
cs=0x1a2;eip=0x003923; 	R(CALLF(file_load_resource,0));	// 6432 call    file_load_resource ;~ 01A2:3923
cs=0x1a2;eip=0x003928; 	T(ADD(sp, 4));	// 6433 add     sp, 4 ;~ 01A2:3928
cs=0x1a2;eip=0x00392b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4a))), ax));	// 6434 mov     word ptr [bp+var_4A], ax ;~ 01A2:392B
cs=0x1a2;eip=0x00392e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4a+2))), dx));	// 6435 mov     word ptr [bp+var_4A+2], dx ;~ 01A2:392E
cs=0x1a2;eip=0x003931; 	T(OR(ax, dx));	// 6436 or      ax, dx ;~ 01A2:3931
cs=0x1a2;eip=0x003933; 	R(JNZ(loc_1397f));	// 6437 jnz     short loc_1397F ;~ 01A2:3933
cs=0x1a2;eip=0x003935; 	T(SUB(ax, ax));	// 6438 sub     ax, ax ;~ 01A2:3935
cs=0x1a2;eip=0x003937; 	X(PUSH(ax));	// 6439 push    ax ;~ 01A2:3937
cs=0x1a2;eip=0x003938; 	X(PUSH(ax));	// 6440 push    ax ;~ 01A2:3938
cs=0x1a2;eip=0x003939; 	X(PUSH(dialogarg2));	// 6441 push    dialogarg2 ;~ 01A2:3939
cs=0x1a2;eip=0x00393d; 	T(MOV(ax, 0x0FFFF));	// 6442 mov     ax, 0FFFFh ;~ 01A2:393D
cs=0x1a2;eip=0x003940; 	X(PUSH(ax));	// 6443 push    ax ;~ 01A2:3940
cs=0x1a2;eip=0x003941; 	X(PUSH(ax));	// 6444 push    ax ;~ 01A2:3941
cs=0x1a2;eip=0x003942; 	T(MOV(ax, offset(dseg,aihd)));	// 6445 mov     ax, offset aIhd ; "ihd" ;~ 01A2:3942
cs=0x1a2;eip=0x003945; 	X(PUSH(ax));	// 6446 push    ax ;~ 01A2:3945
cs=0x1a2;eip=0x003946; 	X(PUSH(word_44cee));	// 6447 push    word_44CEE ;~ 01A2:3946
cs=0x1a2;eip=0x00394a; 	X(PUSH(mainresptr));	// 6448 push    mainresptr ;~ 01A2:394A
cs=0x1a2;eip=0x00394e; 	R(CALLF(locate_text_res,0));	// 6449 call    locate_text_res ;~ 01A2:394E
cs=0x1a2;eip=0x003953; 	T(ADD(sp, 6));	// 6450 add     sp, 6 ;~ 01A2:3953
cs=0x1a2;eip=0x003956; 	X(PUSH(dx));	// 6451 push    dx ;~ 01A2:3956
cs=0x1a2;eip=0x003957; 	X(PUSH(ax));	// 6452 push    ax ;~ 01A2:3957
cs=0x1a2;eip=0x003958; 	T(MOV(ax, 1));	// 6453 mov     ax, 1 ;~ 01A2:3958
cs=0x1a2;eip=0x00395b; 	X(PUSH(ax));	// 6454 push    ax ;~ 01A2:395B
cs=0x1a2;eip=0x00395c; 	X(PUSH(ax));	// 6455 push    ax ;~ 01A2:395C
cs=0x1a2;eip=0x00395d; 	R(CALLF(show_dialog,0));	// 6456 call    show_dialog ;~ 01A2:395D
cs=0x1a2;eip=0x003962; 	T(ADD(sp, 0x12));	// 6457 add     sp, 12h ;~ 01A2:3962
cs=0x1a2;eip=0x003965; 	T(OR(ax, ax));	// 6458 or      ax, ax ;~ 01A2:3965
cs=0x1a2;eip=0x003967; 	R(JZ(loc_1397f));	// 6459 jz      short loc_1397F ;~ 01A2:3967
cs=0x1a2;eip=0x003969; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 6460 mov     ax, offset g_path_buf ;~ 01A2:3969
cs=0x1a2;eip=0x00396c; 	X(PUSH(ax));	// 6461 push    ax              ; char * ;~ 01A2:396C
cs=0x1a2;eip=0x00396d; 	T(MOV(ax, 1));	// 6462 mov     ax, 1 ;~ 01A2:396D
cs=0x1a2;eip=0x003970; 	X(PUSH(ax));	// 6463 push    ax              ; int ;~ 01A2:3970
cs=0x1a2;eip=0x003971; 	R(CALLF(file_load_resource,0));	// 6464 call    file_load_resource ;~ 01A2:3971
cs=0x1a2;eip=0x003976; 	T(ADD(sp, 4));	// 6465 add     sp, 4 ;~ 01A2:3976
cs=0x1a2;eip=0x003979; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4a))), ax));	// 6466 mov     word ptr [bp+var_4A], ax ;~ 01A2:3979
cs=0x1a2;eip=0x00397c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4a+2))), dx));	// 6467 mov     word ptr [bp+var_4A+2], dx ;~ 01A2:397C
loc_1397f:
	// 4680 
cs=0x1a2;eip=0x00397f; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4a)))));	// 6471 mov     ax, word ptr [bp+var_4A] ;~ 01A2:397F
cs=0x1a2;eip=0x003982; 	T(OR(ax, *(dw*)((dw*)(raddr(ss,bp+var_4a+2)))));	// 6472 or      ax, word ptr [bp+var_4A+2] ;~ 01A2:3982
cs=0x1a2;eip=0x003985; 	R(JZ(loc_139b6));	// 6473 jz      short loc_139B6 ;~ 01A2:3985
cs=0x1a2;eip=0x003987; 	T(SUB(di, di));	// 6474 sub     di, di ;~ 01A2:3987
cs=0x1a2;eip=0x003989; 	R(JMP(loc_1398d));	// 6475 jmp     short loc_1398D ;~ 01A2:3989
loc_1398c:
	// 4681 
cs=0x1a2;eip=0x00398c; 	T(INC(di));	// 6480 inc     di ;~ 01A2:398C
loc_1398d:
	// 4682 
cs=0x1a2;eip=0x00398d; 	T(CMP(di, 0x385));	// 6483 cmp     di, 385h ;~ 01A2:398D
cs=0x1a2;eip=0x003991; 	R(JGE(loc_139a6));	// 6484 jge     short loc_139A6 ;~ 01A2:3991
cs=0x1a2;eip=0x003993; 	T(LES(bx, td14_elem_map_main));	// 6485 les     bx, td14_elem_map_main ;~ 01A2:3993
cs=0x1a2;eip=0x003997; 	T(MOV(al, *(raddr(es,bx+di))));	// 6486 mov     al, es:[bx+di] ;~ 01A2:3997
cs=0x1a2;eip=0x00399a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4a))));	// 6487 les     bx, [bp+var_4A] ;~ 01A2:399A
cs=0x1a2;eip=0x00399d; 	T(CMP(*(raddr(es,bx+di)), al));	// 6488 cmp     es:[bx+di], al ;~ 01A2:399D
cs=0x1a2;eip=0x0039a0; 	R(JZ(loc_1398c));	// 6489 jz      short loc_1398C ;~ 01A2:39A0
cs=0x1a2;eip=0x0039a2; 	X(MOV(*(raddr(ss,bp+var_6e)), 0x0FF));	// 6490 mov     [bp+var_6E], 0FFh ;~ 01A2:39A2
loc_139a6:
	// 4683 
cs=0x1a2;eip=0x0039a6; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4a+2)))));	// 6493 push    word ptr [bp+var_4A+2] ;~ 01A2:39A6
cs=0x1a2;eip=0x0039a9; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4a)))));	// 6494 push    word ptr [bp+var_4A] ;~ 01A2:39A9
cs=0x1a2;eip=0x0039ac; 	R(CALLF(mmgr_release,0));	// 6495 call    mmgr_release ;~ 01A2:39AC
cs=0x1a2;eip=0x0039b1; 	T(ADD(sp, 4));	// 6496 add     sp, 4 ;~ 01A2:39B1
cs=0x1a2;eip=0x0039b4; 	R(JMP(loc_139ba));	// 6497 jmp     short loc_139BA ;~ 01A2:39B4
loc_139b6:
	// 4684 
cs=0x1a2;eip=0x0039b6; 	X(MOV(*(raddr(ss,bp+var_6e)), 0x0FF));	// 6501 mov     [bp+var_6E], 0FFh ;~ 01A2:39B6
loc_139ba:
	// 4685 
cs=0x1a2;eip=0x0039ba; 	T(CMP(*(raddr(ss,bp+var_6e)), 0x0FF));	// 6504 cmp     [bp+var_6E], 0FFh ;~ 01A2:39BA
cs=0x1a2;eip=0x0039be; 	R(JZ(loc_139e1));	// 6505 jz      short loc_139E1 ;~ 01A2:39BE
cs=0x1a2;eip=0x0039c0; 	T(SUB(ax, ax));	// 6506 sub     ax, ax ;~ 01A2:39C0
cs=0x1a2;eip=0x0039c2; 	X(PUSH(ax));	// 6507 push    ax ;~ 01A2:39C2
cs=0x1a2;eip=0x0039c3; 	X(PUSH(cs));	// 6508 push    cs ;~ 01A2:39C3
cs=0x1a2;eip=0x0039c4; 	R(CALL(highscore_write_a,0));	// 6509 call    near ptr highscore_write_a ;~ 01A2:39C4
cs=0x1a2;eip=0x0039c7; 	T(ADD(sp, 2));	// 6510 add     sp, 2 ;~ 01A2:39C7
cs=0x1a2;eip=0x0039ca; 	T(OR(al, al));	// 6511 or      al, al ;~ 01A2:39CA
cs=0x1a2;eip=0x0039cc; 	R(JZ(loc_139e1));	// 6512 jz      short loc_139E1 ;~ 01A2:39CC
cs=0x1a2;eip=0x0039ce; 	T(MOV(ax, 1));	// 6513 mov     ax, 1 ;~ 01A2:39CE
cs=0x1a2;eip=0x0039d1; 	X(PUSH(ax));	// 6514 push    ax ;~ 01A2:39D1
cs=0x1a2;eip=0x0039d2; 	X(PUSH(cs));	// 6515 push    cs ;~ 01A2:39D2
cs=0x1a2;eip=0x0039d3; 	R(CALL(highscore_write_a,0));	// 6516 call    near ptr highscore_write_a ;~ 01A2:39D3
cs=0x1a2;eip=0x0039d6; 	T(ADD(sp, 2));	// 6517 add     sp, 2 ;~ 01A2:39D6
cs=0x1a2;eip=0x0039d9; 	T(OR(al, al));	// 6518 or      al, al ;~ 01A2:39D9
cs=0x1a2;eip=0x0039db; 	R(JZ(loc_139e1));	// 6519 jz      short loc_139E1 ;~ 01A2:39DB
cs=0x1a2;eip=0x0039dd; 	X(MOV(*(raddr(ss,bp+var_6e)), 0x0FF));	// 6520 mov     [bp+var_6E], 0FFh ;~ 01A2:39DD
loc_139e1:
	// 4686 
cs=0x1a2;eip=0x0039e1; 	T(CMP(*(raddr(ss,bp+var_6e)), 0));	// 6524 cmp     [bp+var_6E], 0 ;~ 01A2:39E1
cs=0x1a2;eip=0x0039e5; 	R(JNZ(loc_13a0f));	// 6525 jnz     short loc_13A0F ;~ 01A2:39E5
cs=0x1a2;eip=0x0039e7; 	T(CMP(gstate_total_finish_time, 0));	// 6526 cmp     gState_total_finish_time, 0 ;~ 01A2:39E7
cs=0x1a2;eip=0x0039ec; 	R(JZ(loc_13a0f));	// 6527 jz      short loc_13A0F ;~ 01A2:39EC
cs=0x1a2;eip=0x0039ee; 	T(MOV(ax, gstate_total_finish_time));	// 6528 mov     ax, gState_total_finish_time ;~ 01A2:39EE
cs=0x1a2;eip=0x0039f1; 	X(MOV(*(dw*)(raddr(ss,bp+var_88)), ax));	// 6529 mov     [bp+var_88], ax ;~ 01A2:39F1
cs=0x1a2;eip=0x0039f5; 	T(TEST(byte_43966, 6));	// 6530 test    byte_43966, 6 ;~ 01A2:39F5
cs=0x1a2;eip=0x0039fa; 	R(JNZ(loc_13a0f));	// 6531 jnz     short loc_13A0F ;~ 01A2:39FA
cs=0x1a2;eip=0x0039fc; 	T(OR(ax, ax));	// 6532 or      ax, ax ;~ 01A2:39FC
cs=0x1a2;eip=0x0039fe; 	R(JZ(loc_13a0f));	// 6533 jz      short loc_13A0F ;~ 01A2:39FE
cs=0x1a2;eip=0x003a00; 	T(LES(bx, td11_highscores));	// 6534 les     bx, td11_highscores ;~ 01A2:3A00
cs=0x1a2;eip=0x003a04; 	T(CMP(*(dw*)(raddr(es,bx+0x16A)), ax));	// 6535 cmp     es:[bx+16Ah], ax ;~ 01A2:3A04
cs=0x1a2;eip=0x003a09; 	R(JBE(loc_13a0f));	// 6536 jbe     short loc_13A0F ;~ 01A2:3A09
cs=0x1a2;eip=0x003a0b; 	X(MOV(*(raddr(ss,bp+var_6e)), 1));	// 6537 mov     [bp+var_6E], 1 ;~ 01A2:3A0B
loc_13a0f:
	// 4687 
cs=0x1a2;eip=0x003a0f; 	X(MOV(*(raddr(ss,bp+var_8e)), 0));	// 6541 mov     [bp+var_8E], 0 ;~ 01A2:3A0F
cs=0x1a2;eip=0x003a14; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), 0x1E));	// 6542 mov     [bp+var_42], 1Eh ;~ 01A2:3A14
cs=0x1a2;eip=0x003a19; 	X(MOV(*(raddr(ss,bp+var_14)), 1));	// 6543 mov     [bp+var_14], 1 ;~ 01A2:3A19
loc_13a1d:
	// 4688 
cs=0x1a2;eip=0x003a1d; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 6547 cmp     [bp+var_16], 0 ;~ 01A2:3A1D
cs=0x1a2;eip=0x003a21; 	R(JZ(loc_13a42));	// 6548 jz      short loc_13A42 ;~ 01A2:3A21
cs=0x1a2;eip=0x003a23; 	T(CMP(*(raddr(ss,bp+var_6e)), 2));	// 6549 cmp     [bp+var_6E], 2 ;~ 01A2:3A23
cs=0x1a2;eip=0x003a27; 	R(JNZ(loc_13a42));	// 6550 jnz     short loc_13A42 ;~ 01A2:3A27
cs=0x1a2;eip=0x003a29; 	X(MOV(*(raddr(ss,bp+var_6e)), 0));	// 6551 mov     [bp+var_6E], 0 ;~ 01A2:3A29
cs=0x1a2;eip=0x003a2d; 	R(CALLF(sprite_copy_wnd_to_1,0));	// 6552 call    sprite_copy_wnd_to_1 ;~ 01A2:3A2D
cs=0x1a2;eip=0x003a32; 	X(PUSH(cs));	// 6553 push    cs ;~ 01A2:3A32
cs=0x1a2;eip=0x003a33; 	R(CALL(highscore_text_unk,0));	// 6554 call    near ptr highscore_text_unk ;~ 01A2:3A33
cs=0x1a2;eip=0x003a36; 	X(MOV(*(raddr(ss,bp+var_92)), 1));	// 6555 mov     [bp+var_92], 1 ;~ 01A2:3A36
cs=0x1a2;eip=0x003a3b; 	X(MOV(*(raddr(ss,bp+var_14)), 1));	// 6556 mov     [bp+var_14], 1 ;~ 01A2:3A3B
cs=0x1a2;eip=0x003a3f; 	R(JMP(loc_13fda));	// 6557 jmp     loc_13FDA ;~ 01A2:3A3F
loc_13a42:
	// 4689 
cs=0x1a2;eip=0x003a42; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 6562 cmp     [bp+var_16], 0 ;~ 01A2:3A42
cs=0x1a2;eip=0x003a46; 	R(JNZ(loc_13a4b));	// 6563 jnz     short loc_13A4B ;~ 01A2:3A46
cs=0x1a2;eip=0x003a48; 	R(JMP(loc_13f48));	// 6564 jmp     loc_13F48 ;~ 01A2:3A48
loc_13a4b:
	// 4690 
cs=0x1a2;eip=0x003a4b; 	X(MOV(byte_3bd29, 0x31));	// 6568 mov     byte_3BD29, 31h ; '1' ;~ 01A2:3A4B
cs=0x1a2;eip=0x003a50; 	T(MOV(ax, offset(dseg,aop01)));	// 6569 mov     ax, offset aOp01 ;~ 01A2:3A50
cs=0x1a2;eip=0x003a53; 	X(PUSH(ax));	// 6570 push    ax ;~ 01A2:3A53
cs=0x1a2;eip=0x003a54; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 6571 push    [bp+var_1A] ;~ 01A2:3A54
cs=0x1a2;eip=0x003a57; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 6572 push    [bp+var_1C] ;~ 01A2:3A57
cs=0x1a2;eip=0x003a5a; 	R(CALLF(locate_shape_fatal,0));	// 6573 call    locate_shape_fatal ;~ 01A2:3A5A
cs=0x1a2;eip=0x003a5f; 	T(ADD(sp, 6));	// 6574 add     sp, 6 ;~ 01A2:3A5F
cs=0x1a2;eip=0x003a62; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56))), ax));	// 6575 mov     word ptr [bp+var_56], ax ;~ 01A2:3A62
cs=0x1a2;eip=0x003a65; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56+2))), dx));	// 6576 mov     word ptr [bp+var_56+2], dx ;~ 01A2:3A65
cs=0x1a2;eip=0x003a68; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_56))));	// 6577 les     bx, [bp+var_56] ;~ 01A2:3A68
cs=0x1a2;eip=0x003a6b; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 6578 mov     ax, es:[bx] ;~ 01A2:3A6B
cs=0x1a2;eip=0x003a6e; 	X(IMUL1_2(video_flag1_is1));	// 6579 imul    video_flag1_is1 ;~ 01A2:3A6E
cs=0x1a2;eip=0x003a72; 	X(MOV(*(dw*)(raddr(ss,bp+var_70)), ax));	// 6580 mov     [bp+var_70], ax ;~ 01A2:3A72
cs=0x1a2;eip=0x003a75; 	T(MOV(ax, 0x138));	// 6581 mov     ax, 138h ;~ 01A2:3A75
cs=0x1a2;eip=0x003a78; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_70))));	// 6582 sub     ax, [bp+var_70] ;~ 01A2:3A78
cs=0x1a2;eip=0x003a7b; 	X(MOV(*(dw*)(raddr(ss,bp+var_8c)), ax));	// 6583 mov     [bp+var_8C], ax ;~ 01A2:3A7B
cs=0x1a2;eip=0x003a7f; 	T(MOV(ax, 0x63));	// 6584 mov     ax, 63h ; 'c' ;~ 01A2:3A7F
cs=0x1a2;eip=0x003a82; 	T(SUB(ax, *(dw*)(raddr(es,bx+2))));	// 6585 sub     ax, es:[bx+2] ;~ 01A2:3A82
cs=0x1a2;eip=0x003a86; 	T(SAR(ax, 1));	// 6586 sar     ax, 1 ;~ 01A2:3A86
cs=0x1a2;eip=0x003a88; 	X(MOV(*(dw*)(raddr(ss,bp+var_90)), ax));	// 6587 mov     [bp+var_90], ax ;~ 01A2:3A88
cs=0x1a2;eip=0x003a8c; 	X(PUSH(word_407d2));	// 6588 push    word_407D2 ;~ 01A2:3A8C
cs=0x1a2;eip=0x003a90; 	T(SUB(ax, ax));	// 6589 sub     ax, ax ;~ 01A2:3A90
cs=0x1a2;eip=0x003a92; 	X(PUSH(ax));	// 6590 push    ax ;~ 01A2:3A92
cs=0x1a2;eip=0x003a93; 	X(PUSH(dialog_fnt_colour));	// 6591 push    dialog_fnt_colour ;~ 01A2:3A93
cs=0x1a2;eip=0x003a97; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 6592 mov     ax, es:[bx+2] ;~ 01A2:3A97
cs=0x1a2;eip=0x003a9b; 	T(ADD(ax, 5));	// 6593 add     ax, 5 ;~ 01A2:3A9B
cs=0x1a2;eip=0x003a9e; 	X(PUSH(ax));	// 6594 push    ax ;~ 01A2:3A9E
cs=0x1a2;eip=0x003a9f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_70))));	// 6595 mov     ax, [bp+var_70] ;~ 01A2:3A9F
cs=0x1a2;eip=0x003aa2; 	T(ADD(ax, 5));	// 6596 add     ax, 5 ;~ 01A2:3AA2
cs=0x1a2;eip=0x003aa5; 	X(PUSH(ax));	// 6597 push    ax ;~ 01A2:3AA5
cs=0x1a2;eip=0x003aa6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_90))));	// 6598 mov     ax, [bp+var_90] ;~ 01A2:3AA6
cs=0x1a2;eip=0x003aaa; 	T(SUB(ax, 3));	// 6599 sub     ax, 3 ;~ 01A2:3AAA
cs=0x1a2;eip=0x003aad; 	X(PUSH(ax));	// 6600 push    ax ;~ 01A2:3AAD
cs=0x1a2;eip=0x003aae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8c))));	// 6601 mov     ax, [bp+var_8C] ;~ 01A2:3AAE
cs=0x1a2;eip=0x003ab2; 	T(SUB(ax, 3));	// 6602 sub     ax, 3 ;~ 01A2:3AB2
cs=0x1a2;eip=0x003ab5; 	X(PUSH(ax));	// 6603 push    ax ;~ 01A2:3AB5
cs=0x1a2;eip=0x003ab6; 	R(CALLF(draw_lines_unk,0));	// 6604 call    draw_lines_unk  ; border around opponent animation on eval screen ;~ 01A2:3AB6
cs=0x1a2;eip=0x003abb; 	T(ADD(sp, 0x0E));	// 6605 add     sp, 0Eh ;~ 01A2:3ABB
cs=0x1a2;eip=0x003abe; 	T(MOV(al, *(raddr(ss,bp+var_8e))));	// 6606 mov     al, [bp+var_8E] ;~ 01A2:3ABE
cs=0x1a2;eip=0x003ac2; 	T(CBW);	// 6607 cbw ;~ 01A2:3AC2
cs=0x1a2;eip=0x003ac3; 	T(MOV(bx, ax));	// 6608 mov     bx, ax ;~ 01A2:3AC3
cs=0x1a2;eip=0x003ac5; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_5a))));	// 6609 add     bx, [bp+var_5A] ;~ 01A2:3AC5
cs=0x1a2;eip=0x003ac8; 	T(MOV(es, *(dw*)(raddr(ss,bp+var_58))));	// 6610 mov     es, [bp+var_58] ;~ 01A2:3AC8
cs=0x1a2;eip=0x003acb; 	T(MOV(al, *(raddr(es,bx))));	// 6611 mov     al, es:[bx] ;~ 01A2:3ACB
cs=0x1a2;eip=0x003ace; 	T(ADD(al, 0x30));	// 6612 add     al, 30h ; '0' ;~ 01A2:3ACE
cs=0x1a2;eip=0x003ad0; 	X(MOV(byte_3bd29, al));	// 6613 mov     byte_3BD29, al ;~ 01A2:3AD0
cs=0x1a2;eip=0x003ad3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_90))));	// 6614 push    [bp+var_90] ;~ 01A2:3AD3
cs=0x1a2;eip=0x003ad7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8c))));	// 6615 push    [bp+var_8C] ;~ 01A2:3AD7
cs=0x1a2;eip=0x003adb; 	T(MOV(ax, offset(dseg,aop01)));	// 6616 mov     ax, offset aOp01 ;~ 01A2:3ADB
cs=0x1a2;eip=0x003ade; 	X(PUSH(ax));	// 6617 push    ax ;~ 01A2:3ADE
cs=0x1a2;eip=0x003adf; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 6618 push    [bp+var_1A] ;~ 01A2:3ADF
cs=0x1a2;eip=0x003ae2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 6619 push    [bp+var_1C] ;~ 01A2:3AE2
cs=0x1a2;eip=0x003ae5; 	R(CALLF(locate_shape_fatal,0));	// 6620 call    locate_shape_fatal ;~ 01A2:3AE5
cs=0x1a2;eip=0x003aea; 	T(ADD(sp, 6));	// 6621 add     sp, 6 ;~ 01A2:3AEA
cs=0x1a2;eip=0x003aed; 	X(PUSH(dx));	// 6622 push    dx ;~ 01A2:3AED
cs=0x1a2;eip=0x003aee; 	X(PUSH(ax));	// 6623 push    ax ;~ 01A2:3AEE
cs=0x1a2;eip=0x003aef; 	R(CALLF(shape2d_op_unk5,0));	// 6624 call    shape2d_op_unk5 ;~ 01A2:3AEF
cs=0x1a2;eip=0x003af4; 	T(ADD(sp, 8));	// 6625 add     sp, 8 ;~ 01A2:3AF4
cs=0x1a2;eip=0x003af7; 	T(MOV(al, *(raddr(ss,bp+var_8e))));	// 6626 mov     al, [bp+var_8E] ;~ 01A2:3AF7
cs=0x1a2;eip=0x003afb; 	X(MOV(*(raddr(ss,bp+var_6c)), al));	// 6627 mov     [bp+var_6C], al ;~ 01A2:3AFB
cs=0x1a2;eip=0x003afe; 	T(SUB(ax, ax));	// 6628 sub     ax, ax ;~ 01A2:3AFE
cs=0x1a2;eip=0x003b00; 	X(PUSH(ax));	// 6629 push    ax ;~ 01A2:3B00
cs=0x1a2;eip=0x003b01; 	X(PUSH(ax));	// 6630 push    ax ;~ 01A2:3B01
cs=0x1a2;eip=0x003b02; 	R(CALLF(font_set_unk,0));	// 6631 call    font_set_unk ;~ 01A2:3B02
cs=0x1a2;eip=0x003b07; 	T(ADD(sp, 4));	// 6632 add     sp, 4 ;~ 01A2:3B07
cs=0x1a2;eip=0x003b0a; 	X(MOV(*(dw*)(raddr(ss,bp+var_70)), 8));	// 6633 mov     [bp+var_70], 8 ;~ 01A2:3B0A
cs=0x1a2;eip=0x003b0f; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), 0));	// 6634 mov     [bp+var_40], 0 ;~ 01A2:3B0F
cs=0x1a2;eip=0x003b14; 	X(MOV(*(dw*)(raddr(ss,bp+var_50)), 0));	// 6635 mov     [bp+var_50], 0 ;~ 01A2:3B14
cs=0x1a2;eip=0x003b19; 	X(MOV(*(dw*)(raddr(ss,bp+var_80)), 0));	// 6636 mov     [bp+var_80], 0 ;~ 01A2:3B19
cs=0x1a2;eip=0x003b1e; 	T(CMP(*(raddr(ss,bp+var_18)), 2));	// 6637 cmp     [bp+var_18], 2 ;~ 01A2:3B1E
cs=0x1a2;eip=0x003b22; 	R(JNZ(loc_13b2c));	// 6638 jnz     short loc_13B2C ;~ 01A2:3B22
cs=0x1a2;eip=0x003b24; 	X(MOV(*(dw*)(raddr(ss,bp+var_7a)), 1));	// 6639 mov     [bp+var_7A], 1 ;~ 01A2:3B24
cs=0x1a2;eip=0x003b29; 	R(JMP(loc_13b31));	// 6640 jmp     short loc_13B31 ;~ 01A2:3B29
loc_13b2c:
	// 4691 
cs=0x1a2;eip=0x003b2c; 	X(MOV(*(dw*)(raddr(ss,bp+var_7a)), 3));	// 6645 mov     [bp+var_7A], 3 ;~ 01A2:3B2C
loc_13b31:
	// 4692 
cs=0x1a2;eip=0x003b31; 	T(SUB(di, di));	// 6648 sub     di, di ;~ 01A2:3B31
cs=0x1a2;eip=0x003b33; 	R(JMP(loc_13caf));	// 6649 jmp     loc_13CAF ;~ 01A2:3B33
loc_13b36:
	// 4693 
cs=0x1a2;eip=0x003b36; 	T(CMP(*(raddr(ss,bp+var_18)), 2));	// 6653 cmp     [bp+var_18], 2 ;~ 01A2:3B36
cs=0x1a2;eip=0x003b3a; 	R(JNZ(loc_13b42));	// 6654 jnz     short loc_13B42 ;~ 01A2:3B3A
cs=0x1a2;eip=0x003b3c; 	T(MOV(ax, offset(dseg,ad4a)));	// 6655 mov     ax, offset aD4a ; "d4a" ;~ 01A2:3B3C
cs=0x1a2;eip=0x003b3f; 	R(JMP(loc_13b57));	// 6656 jmp     short loc_13B57 ;~ 01A2:3B3F
loc_13b42:
	// 4694 
cs=0x1a2;eip=0x003b42; 	T(MOV(al, *(raddr(ss,bp+var_6a))));	// 6661 mov     al, [bp+var_6A] ;~ 01A2:3B42
cs=0x1a2;eip=0x003b45; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 6662 mov     [bp+var_12], al ;~ 01A2:3B45
cs=0x1a2;eip=0x003b48; 	X(MOV(*(raddr(ss,bp+var_11)), 0x31));	// 6663 mov     [bp+var_11], 31h ; '1' ;~ 01A2:3B48
cs=0x1a2;eip=0x003b4c; 	T(MOV(al, *(db*)(((db*)&word_40d40))));	// 6664 mov     al, byte ptr word_40D40 ;~ 01A2:3B4C
loc_13b4f:
	// 4695 
cs=0x1a2;eip=0x003b4f; 	T(ADD(al, 0x61));	// 6668 add     al, 61h ; 'a' ;~ 01A2:3B4F
cs=0x1a2;eip=0x003b51; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 6669 mov     [bp+var_10], al ;~ 01A2:3B51
cs=0x1a2;eip=0x003b54; 	T(ax = bp+var_12);	// 6670 lea     ax, [bp+var_12] ;~ 01A2:3B54
loc_13b57:
	// 4696 
cs=0x1a2;eip=0x003b57; 	X(PUSH(ax));	// 6673 push    ax ;~ 01A2:3B57
cs=0x1a2;eip=0x003b58; 	X(PUSH(*(dw*)(raddr(ss,bp+var_66))));	// 6674 push    [bp+var_66] ;~ 01A2:3B58
cs=0x1a2;eip=0x003b5b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_68))));	// 6675 push    [bp+var_68] ;~ 01A2:3B5B
cs=0x1a2;eip=0x003b5e; 	R(CALLF(locate_text_res,0));	// 6676 call    locate_text_res ;~ 01A2:3B5E
cs=0x1a2;eip=0x003b63; 	T(ADD(sp, 6));	// 6677 add     sp, 6 ;~ 01A2:3B63
cs=0x1a2;eip=0x003b66; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_86))), ax));	// 6678 mov     word ptr [bp+var_86], ax ;~ 01A2:3B66
cs=0x1a2;eip=0x003b6a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_86+2))), dx));	// 6679 mov     word ptr [bp+var_86+2], dx ;~ 01A2:3B6A
loc_13b6e:
	// 4697 
cs=0x1a2;eip=0x003b6e; 	X(PUSH(word_44d24));	// 6682 push    word_44D24 ;~ 01A2:3B6E
cs=0x1a2;eip=0x003b72; 	X(PUSH(fontnptr));	// 6683 push    fontnptr ;~ 01A2:3B72
cs=0x1a2;eip=0x003b76; 	R(CALLF(font_set_fontdef2,0));	// 6684 call    font_set_fontdef2 ;~ 01A2:3B76
cs=0x1a2;eip=0x003b7b; 	T(ADD(sp, 4));	// 6685 add     sp, 4 ;~ 01A2:3B7B
loc_13b7e:
	// 4698 
cs=0x1a2;eip=0x003b7e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_86))));	// 6688 les     bx, [bp+var_86] ;~ 01A2:3B7E
cs=0x1a2;eip=0x003b82; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_86)))));	// 6689 inc     word ptr [bp+var_86] ;~ 01A2:3B82
cs=0x1a2;eip=0x003b86; 	T(MOV(al, *(raddr(es,bx))));	// 6690 mov     al, es:[bx] ;~ 01A2:3B86
cs=0x1a2;eip=0x003b89; 	X(MOV(*(raddr(ss,bp+var_3e)), al));	// 6691 mov     [bp+var_3E], al ;~ 01A2:3B89
cs=0x1a2;eip=0x003b8c; 	T(CMP(al, 0x20));	// 6692 cmp     al, 20h ; ' ' ;~ 01A2:3B8C
cs=0x1a2;eip=0x003b8e; 	R(JZ(loc_13b97));	// 6693 jz      short loc_13B97 ;~ 01A2:3B8E
cs=0x1a2;eip=0x003b90; 	T(OR(al, al));	// 6694 or      al, al ;~ 01A2:3B90
cs=0x1a2;eip=0x003b92; 	R(JZ(loc_13b97));	// 6695 jz      short loc_13B97 ;~ 01A2:3B92
cs=0x1a2;eip=0x003b94; 	R(JMP(loc_13c92));	// 6696 jmp     loc_13C92 ;~ 01A2:3B94
loc_13b97:
	// 4699 
cs=0x1a2;eip=0x003b97; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_80))));	// 6701 mov     bx, [bp+var_80] ;~ 01A2:3B97
cs=0x1a2;eip=0x003b9a; 	T(ADD(bx, bp));	// 6702 add     bx, bp ;~ 01A2:3B9A
cs=0x1a2;eip=0x003b9c; 	X(MOV(*(raddr(ds,bx-0x3C)), 0));	// 6703 mov     byte ptr [bx-3Ch], 0 ;~ 01A2:3B9C
cs=0x1a2;eip=0x003ba0; 	T(ax = bp+var_3c);	// 6704 lea     ax, [bp+var_3C] ;~ 01A2:3BA0
cs=0x1a2;eip=0x003ba3; 	X(PUSH(ax));	// 6705 push    ax ;~ 01A2:3BA3
cs=0x1a2;eip=0x003ba4; 	R(CALLF(font_op2,0));	// 6706 call    font_op2 ;~ 01A2:3BA4
cs=0x1a2;eip=0x003ba9; 	T(ADD(sp, 2));	// 6707 add     sp, 2 ;~ 01A2:3BA9
cs=0x1a2;eip=0x003bac; 	X(MOV(*(dw*)(raddr(ss,bp+var_8a)), ax));	// 6708 mov     [bp+var_8A], ax ;~ 01A2:3BAC
cs=0x1a2;eip=0x003bb0; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_50))));	// 6709 add     ax, [bp+var_50] ;~ 01A2:3BB0
cs=0x1a2;eip=0x003bb3; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_8c))));	// 6710 mov     cx, [bp+var_8C] ;~ 01A2:3BB3
cs=0x1a2;eip=0x003bb7; 	T(SUB(cx, 0x10));	// 6711 sub     cx, 10h ;~ 01A2:3BB7
cs=0x1a2;eip=0x003bba; 	T(CMP(ax, cx));	// 6712 cmp     ax, cx ;~ 01A2:3BBA
cs=0x1a2;eip=0x003bbc; 	R(JGE(loc_13c1a));	// 6713 jge     short loc_13C1A ;~ 01A2:3BBC
cs=0x1a2;eip=0x003bbe; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_40))));	// 6714 mov     ax, [bp+var_40] ;~ 01A2:3BBE
cs=0x1a2;eip=0x003bc1; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_80))));	// 6715 add     ax, [bp+var_80] ;~ 01A2:3BC1
cs=0x1a2;eip=0x003bc4; 	T(CMP(ax, 0x50));	// 6716 cmp     ax, 50h ; 'P' ;~ 01A2:3BC4
cs=0x1a2;eip=0x003bc7; 	R(JGE(loc_13c1a));	// 6717 jge     short loc_13C1A ;~ 01A2:3BC7
cs=0x1a2;eip=0x003bc9; 	X(MOV(*(dw*)(raddr(ss,bp+var_5c)), 0));	// 6718 mov     [bp+var_5C], 0 ;~ 01A2:3BC9
cs=0x1a2;eip=0x003bce; 	R(JMP(loc_13bf3));	// 6719 jmp     short loc_13BF3 ;~ 01A2:3BCE
loc_13bd0:
	// 4700 
cs=0x1a2;eip=0x003bd0; 	T(MOV(al, *(raddr(ss,bp+var_6a))));	// 6723 mov     al, [bp+var_6A] ;~ 01A2:3BD0
cs=0x1a2;eip=0x003bd3; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 6724 mov     [bp+var_12], al ;~ 01A2:3BD3
cs=0x1a2;eip=0x003bd6; 	X(MOV(*(raddr(ss,bp+var_11)), 0x32));	// 6725 mov     [bp+var_11], 32h ; '2' ;~ 01A2:3BD6
cs=0x1a2;eip=0x003bda; 	T(MOV(al, *(db*)(((db*)&end_hiscore_random))));	// 6726 mov     al, byte ptr end_hiscore_random ;~ 01A2:3BDA
cs=0x1a2;eip=0x003bdd; 	R(JMP(loc_13b4f));	// 6727 jmp     loc_13B4F ;~ 01A2:3BDD
loc_13be0:
	// 4701 
cs=0x1a2;eip=0x003be0; 	T(MOV(al, *(raddr(ss,bp+var_6a))));	// 6731 mov     al, [bp+var_6A] ;~ 01A2:3BE0
cs=0x1a2;eip=0x003be3; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 6732 mov     [bp+var_12], al ;~ 01A2:3BE3
cs=0x1a2;eip=0x003be6; 	X(MOV(*(raddr(ss,bp+var_11)), 0x33));	// 6733 mov     [bp+var_11], 33h ; '3' ;~ 01A2:3BE6
cs=0x1a2;eip=0x003bea; 	T(MOV(al, *(db*)(((db*)&word_40d44))));	// 6734 mov     al, byte ptr word_40D44 ;~ 01A2:3BEA
cs=0x1a2;eip=0x003bed; 	R(JMP(loc_13b4f));	// 6735 jmp     loc_13B4F ;~ 01A2:3BED
loc_13bf0:
	// 4702 
cs=0x1a2;eip=0x003bf0; 	X(INC(*(dw*)(raddr(ss,bp+var_5c))));	// 6739 inc     [bp+var_5C] ;~ 01A2:3BF0
loc_13bf3:
	// 4703 
cs=0x1a2;eip=0x003bf3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_80))));	// 6742 mov     ax, [bp+var_80] ;~ 01A2:3BF3
cs=0x1a2;eip=0x003bf6; 	T(CMP(*(dw*)(raddr(ss,bp+var_5c)), ax));	// 6743 cmp     [bp+var_5C], ax ;~ 01A2:3BF6
cs=0x1a2;eip=0x003bf9; 	R(JGE(loc_13c10));	// 6744 jge     short loc_13C10 ;~ 01A2:3BF9
cs=0x1a2;eip=0x003bfb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_5c))));	// 6745 mov     bx, [bp+var_5C] ;~ 01A2:3BFB
cs=0x1a2;eip=0x003bfe; 	T(ADD(bx, bp));	// 6746 add     bx, bp ;~ 01A2:3BFE
cs=0x1a2;eip=0x003c00; 	T(MOV(al, *(raddr(ds,bx-0x3C))));	// 6747 mov     al, [bx-3Ch] ;~ 01A2:3C00
cs=0x1a2;eip=0x003c03; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_40))));	// 6748 mov     bx, [bp+var_40] ;~ 01A2:3C03
cs=0x1a2;eip=0x003c06; 	X(INC(*(dw*)(raddr(ss,bp+var_40))));	// 6749 inc     [bp+var_40] ;~ 01A2:3C06
cs=0x1a2;eip=0x003c09; 	X(MOV(*((&resid_byte1)+bx), al));	// 6750 mov     resID_byte1[bx], al ;~ 01A2:3C09
cs=0x1a2;eip=0x003c0d; 	R(JMP(loc_13bf0));	// 6751 jmp     short loc_13BF0 ;~ 01A2:3C0D
loc_13c10:
	// 4704 
cs=0x1a2;eip=0x003c10; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8a))));	// 6756 mov     ax, [bp+var_8A] ;~ 01A2:3C10
cs=0x1a2;eip=0x003c14; 	X(ADD(*(dw*)(raddr(ss,bp+var_50)), ax));	// 6757 add     [bp+var_50], ax ;~ 01A2:3C14
cs=0x1a2;eip=0x003c17; 	R(JMP(loc_13c86));	// 6758 jmp     short loc_13C86 ;~ 01A2:3C17
loc_13c1a:
	// 4705 
cs=0x1a2;eip=0x003c1a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_40))));	// 6764 mov     bx, [bp+var_40] ;~ 01A2:3C1A
cs=0x1a2;eip=0x003c1d; 	X(MOV(*((&resid_byte1)+bx), 0));	// 6765 mov     resID_byte1[bx], 0 ;~ 01A2:3C1D
cs=0x1a2;eip=0x003c22; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 6766 push    [bp+var_70] ;~ 01A2:3C22
cs=0x1a2;eip=0x003c25; 	T(MOV(ax, 8));	// 6767 mov     ax, 8 ;~ 01A2:3C25
cs=0x1a2;eip=0x003c28; 	X(PUSH(ax));	// 6768 push    ax ;~ 01A2:3C28
cs=0x1a2;eip=0x003c29; 	T(MOV(ax, 0x0AC74));	// 6769 mov     ax, 0AC74h ;~ 01A2:3C29
cs=0x1a2;eip=0x003c2c; 	X(PUSH(ax));	// 6770 push    ax ;~ 01A2:3C2C
cs=0x1a2;eip=0x003c2d; 	R(CALLF(font_draw_text,0));	// 6771 call    font_draw_text ;~ 01A2:3C2D
cs=0x1a2;eip=0x003c32; 	T(ADD(sp, 6));	// 6772 add     sp, 6 ;~ 01A2:3C32
cs=0x1a2;eip=0x003c35; 	X(ADD(*(dw*)(raddr(ss,bp+var_70)), 8));	// 6773 add     [bp+var_70], 8 ;~ 01A2:3C35
cs=0x1a2;eip=0x003c39; 	T(CMP(*(raddr(ss,bp+var_3c)), 0x20));	// 6774 cmp     [bp+var_3C], 20h ; ' ' ;~ 01A2:3C39
cs=0x1a2;eip=0x003c3d; 	R(JNZ(loc_13c46));	// 6775 jnz     short loc_13C46 ;~ 01A2:3C3D
cs=0x1a2;eip=0x003c3f; 	X(MOV(*(dw*)(raddr(ss,bp+var_5c)), 1));	// 6776 mov     [bp+var_5C], 1 ;~ 01A2:3C3F
cs=0x1a2;eip=0x003c44; 	R(JMP(loc_13c4b));	// 6777 jmp     short loc_13C4B ;~ 01A2:3C44
loc_13c46:
	// 4706 
cs=0x1a2;eip=0x003c46; 	X(MOV(*(dw*)(raddr(ss,bp+var_5c)), 0));	// 6781 mov     [bp+var_5C], 0 ;~ 01A2:3C46
loc_13c4b:
	// 4707 
cs=0x1a2;eip=0x003c4b; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), 0));	// 6784 mov     [bp+var_40], 0 ;~ 01A2:3C4B
cs=0x1a2;eip=0x003c50; 	R(JMP(loc_13c67));	// 6785 jmp     short loc_13C67 ;~ 01A2:3C50
loc_13c52:
	// 4708 
cs=0x1a2;eip=0x003c52; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_5c))));	// 6789 mov     bx, [bp+var_5C] ;~ 01A2:3C52
cs=0x1a2;eip=0x003c55; 	T(ADD(bx, bp));	// 6790 add     bx, bp ;~ 01A2:3C55
cs=0x1a2;eip=0x003c57; 	T(MOV(al, *(raddr(ds,bx-0x3C))));	// 6791 mov     al, [bx-3Ch] ;~ 01A2:3C57
cs=0x1a2;eip=0x003c5a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_40))));	// 6792 mov     bx, [bp+var_40] ;~ 01A2:3C5A
cs=0x1a2;eip=0x003c5d; 	X(INC(*(dw*)(raddr(ss,bp+var_40))));	// 6793 inc     [bp+var_40] ;~ 01A2:3C5D
cs=0x1a2;eip=0x003c60; 	X(MOV(*((&resid_byte1)+bx), al));	// 6794 mov     resID_byte1[bx], al ;~ 01A2:3C60
cs=0x1a2;eip=0x003c64; 	X(INC(*(dw*)(raddr(ss,bp+var_5c))));	// 6795 inc     [bp+var_5C] ;~ 01A2:3C64
loc_13c67:
	// 4709 
cs=0x1a2;eip=0x003c67; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_80))));	// 6798 mov     ax, [bp+var_80] ;~ 01A2:3C67
cs=0x1a2;eip=0x003c6a; 	T(CMP(*(dw*)(raddr(ss,bp+var_5c)), ax));	// 6799 cmp     [bp+var_5C], ax ;~ 01A2:3C6A
cs=0x1a2;eip=0x003c6d; 	R(JL(loc_13c52));	// 6800 jl      short loc_13C52 ;~ 01A2:3C6D
cs=0x1a2;eip=0x003c6f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_40))));	// 6801 mov     bx, [bp+var_40] ;~ 01A2:3C6F
cs=0x1a2;eip=0x003c72; 	X(MOV(*((&resid_byte1)+bx), 0));	// 6802 mov     resID_byte1[bx], 0 ;~ 01A2:3C72
cs=0x1a2;eip=0x003c77; 	T(MOV(ax, 0x0AC74));	// 6803 mov     ax, 0AC74h ;~ 01A2:3C77
cs=0x1a2;eip=0x003c7a; 	X(PUSH(ax));	// 6804 push    ax ;~ 01A2:3C7A
cs=0x1a2;eip=0x003c7b; 	R(CALLF(font_op2,0));	// 6805 call    font_op2 ;~ 01A2:3C7B
cs=0x1a2;eip=0x003c80; 	T(ADD(sp, 2));	// 6806 add     sp, 2 ;~ 01A2:3C80
cs=0x1a2;eip=0x003c83; 	X(MOV(*(dw*)(raddr(ss,bp+var_50)), ax));	// 6807 mov     [bp+var_50], ax ;~ 01A2:3C83
loc_13c86:
	// 4710 
cs=0x1a2;eip=0x003c86; 	X(MOV(*(dw*)(raddr(ss,bp+var_80)), 1));	// 6810 mov     [bp+var_80], 1 ;~ 01A2:3C86
cs=0x1a2;eip=0x003c8b; 	X(MOV(*(raddr(ss,bp+var_3c)), 0x20));	// 6811 mov     [bp+var_3C], 20h ; ' ' ;~ 01A2:3C8B
cs=0x1a2;eip=0x003c8f; 	R(JMP(loc_13ca0));	// 6812 jmp     short loc_13CA0 ;~ 01A2:3C8F
loc_13c92:
	// 4711 
cs=0x1a2;eip=0x003c92; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_80))));	// 6817 mov     bx, [bp+var_80] ;~ 01A2:3C92
cs=0x1a2;eip=0x003c95; 	X(INC(*(dw*)(raddr(ss,bp+var_80))));	// 6818 inc     [bp+var_80] ;~ 01A2:3C95
cs=0x1a2;eip=0x003c98; 	T(ADD(bx, bp));	// 6819 add     bx, bp ;~ 01A2:3C98
cs=0x1a2;eip=0x003c9a; 	T(MOV(al, *(raddr(ss,bp+var_3e))));	// 6820 mov     al, [bp+var_3E] ;~ 01A2:3C9A
cs=0x1a2;eip=0x003c9d; 	X(MOV(*(raddr(ds,bx-0x3C)), al));	// 6821 mov     [bx-3Ch], al ;~ 01A2:3C9D
loc_13ca0:
	// 4712 
cs=0x1a2;eip=0x003ca0; 	T(CMP(*(raddr(ss,bp+var_3e)), 0));	// 6824 cmp     [bp+var_3E], 0 ;~ 01A2:3CA0
cs=0x1a2;eip=0x003ca4; 	R(JZ(loc_13ca9));	// 6825 jz      short loc_13CA9 ;~ 01A2:3CA4
cs=0x1a2;eip=0x003ca6; 	R(JMP(loc_13b7e));	// 6826 jmp     loc_13B7E ;~ 01A2:3CA6
loc_13ca9:
	// 4713 
cs=0x1a2;eip=0x003ca9; 	R(CALLF(font_set_fontdef,0));	// 6830 call    font_set_fontdef ;~ 01A2:3CA9
cs=0x1a2;eip=0x003cae; 	T(INC(di));	// 6831 inc     di ;~ 01A2:3CAE
loc_13caf:
	// 4714 
cs=0x1a2;eip=0x003caf; 	T(CMP(*(dw*)(raddr(ss,bp+var_7a)), di));	// 6834 cmp     [bp+var_7A], di ;~ 01A2:3CAF
cs=0x1a2;eip=0x003cb2; 	R(JLE(loc_13cd0));	// 6835 jle     short loc_13CD0 ;~ 01A2:3CB2
cs=0x1a2;eip=0x003cb4; 	T(MOV(ax, di));	// 6836 mov     ax, di ;~ 01A2:3CB4
cs=0x1a2;eip=0x003cb6; 	T(OR(ax, ax));	// 6837 or      ax, ax ;~ 01A2:3CB6
cs=0x1a2;eip=0x003cb8; 	R(JNZ(loc_13cbd));	// 6838 jnz     short loc_13CBD ;~ 01A2:3CB8
cs=0x1a2;eip=0x003cba; 	R(JMP(loc_13b36));	// 6839 jmp     loc_13B36 ;~ 01A2:3CBA
loc_13cbd:
	// 4715 
cs=0x1a2;eip=0x003cbd; 	T(CMP(ax, 1));	// 6843 cmp     ax, 1 ;~ 01A2:3CBD
cs=0x1a2;eip=0x003cc0; 	R(JNZ(loc_13cc5));	// 6844 jnz     short loc_13CC5 ;~ 01A2:3CC0
cs=0x1a2;eip=0x003cc2; 	R(JMP(loc_13bd0));	// 6845 jmp     loc_13BD0 ;~ 01A2:3CC2
loc_13cc5:
	// 4716 
cs=0x1a2;eip=0x003cc5; 	T(CMP(ax, 2));	// 6849 cmp     ax, 2 ;~ 01A2:3CC5
cs=0x1a2;eip=0x003cc8; 	R(JNZ(loc_13ccd));	// 6850 jnz     short loc_13CCD ;~ 01A2:3CC8
cs=0x1a2;eip=0x003cca; 	R(JMP(loc_13be0));	// 6851 jmp     loc_13BE0 ;~ 01A2:3CCA
loc_13ccd:
	// 4717 
cs=0x1a2;eip=0x003ccd; 	R(JMP(loc_13b6e));	// 6855 jmp     loc_13B6E ;~ 01A2:3CCD
loc_13cd0:
	// 4718 
cs=0x1a2;eip=0x003cd0; 	T(CMP(*(dw*)(raddr(ss,bp+var_40)), 0));	// 6859 cmp     [bp+var_40], 0 ;~ 01A2:3CD0
cs=0x1a2;eip=0x003cd4; 	R(JZ(loc_13d06));	// 6860 jz      short loc_13D06 ;~ 01A2:3CD4
cs=0x1a2;eip=0x003cd6; 	X(PUSH(word_44d24));	// 6861 push    word_44D24 ;~ 01A2:3CD6
cs=0x1a2;eip=0x003cda; 	X(PUSH(fontnptr));	// 6862 push    fontnptr ;~ 01A2:3CDA
cs=0x1a2;eip=0x003cde; 	R(CALLF(font_set_fontdef2,0));	// 6863 call    font_set_fontdef2 ;~ 01A2:3CDE
cs=0x1a2;eip=0x003ce3; 	T(ADD(sp, 4));	// 6864 add     sp, 4 ;~ 01A2:3CE3
cs=0x1a2;eip=0x003ce6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_40))));	// 6865 mov     bx, [bp+var_40] ;~ 01A2:3CE6
cs=0x1a2;eip=0x003ce9; 	X(MOV(*((&resid_byte1)+bx), 0));	// 6866 mov     resID_byte1[bx], 0 ;~ 01A2:3CE9
cs=0x1a2;eip=0x003cee; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 6867 push    [bp+var_70] ;~ 01A2:3CEE
cs=0x1a2;eip=0x003cf1; 	T(MOV(ax, 8));	// 6868 mov     ax, 8 ;~ 01A2:3CF1
cs=0x1a2;eip=0x003cf4; 	X(PUSH(ax));	// 6869 push    ax ;~ 01A2:3CF4
cs=0x1a2;eip=0x003cf5; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6870 mov     ax, offset resID_byte1 ;~ 01A2:3CF5
cs=0x1a2;eip=0x003cf8; 	X(PUSH(ax));	// 6871 push    ax ;~ 01A2:3CF8
cs=0x1a2;eip=0x003cf9; 	R(CALLF(font_draw_text,0));	// 6872 call    font_draw_text ;~ 01A2:3CF9
cs=0x1a2;eip=0x003cfe; 	T(ADD(sp, 6));	// 6873 add     sp, 6 ;~ 01A2:3CFE
cs=0x1a2;eip=0x003d01; 	R(CALLF(font_set_fontdef,0));	// 6874 call    font_set_fontdef ;~ 01A2:3D01
loc_13d06:
	// 4719 
cs=0x1a2;eip=0x003d06; 	X(MOV(*(raddr(ss,bp+var_14)), 0));	// 6877 mov     [bp+var_14], 0 ;~ 01A2:3D06
cs=0x1a2;eip=0x003d0a; 	T(CMP(*(raddr(ss,bp+var_6e)), 0));	// 6878 cmp     [bp+var_6E], 0 ;~ 01A2:3D0A
cs=0x1a2;eip=0x003d0e; 	R(JG(loc_13d13));	// 6879 jg      short loc_13D13 ;~ 01A2:3D0E
cs=0x1a2;eip=0x003d10; 	R(JMP(loc_13fda));	// 6880 jmp     loc_13FDA ;~ 01A2:3D10
loc_13d13:
	// 4720 
cs=0x1a2;eip=0x003d13; 	X(MOV(*(raddr(ss,bp+var_6e)), 0));	// 6884 mov     [bp+var_6E], 0 ;~ 01A2:3D13
cs=0x1a2;eip=0x003d17; 	X(MOV(*(raddr(ss,bp+var_14)), 1));	// 6885 mov     [bp+var_14], 1 ;~ 01A2:3D17
cs=0x1a2;eip=0x003d1b; 	T(SUB(ax, ax));	// 6886 sub     ax, ax ;~ 01A2:3D1B
cs=0x1a2;eip=0x003d1d; 	X(PUSH(ax));	// 6887 push    ax ;~ 01A2:3D1D
cs=0x1a2;eip=0x003d1e; 	X(PUSH(word_407f8));	// 6888 push    word_407F8 ;~ 01A2:3D1E
cs=0x1a2;eip=0x003d22; 	X(PUSH(word_407f6));	// 6889 push    word_407F6 ;~ 01A2:3D22
cs=0x1a2;eip=0x003d26; 	X(PUSH(word_407f4));	// 6890 push    word_407F4 ;~ 01A2:3D26
cs=0x1a2;eip=0x003d2a; 	T(MOV(ax, 0x15));	// 6891 mov     ax, 15h ;~ 01A2:3D2A
cs=0x1a2;eip=0x003d2d; 	X(PUSH(ax));	// 6892 push    ax ;~ 01A2:3D2D
cs=0x1a2;eip=0x003d2e; 	T(MOV(ax, 0x46));	// 6893 mov     ax, 46h ; 'F' ;~ 01A2:3D2E
cs=0x1a2;eip=0x003d31; 	X(PUSH(ax));	// 6894 push    ax ;~ 01A2:3D31
cs=0x1a2;eip=0x003d32; 	T(MOV(ax, 0x0AF));	// 6895 mov     ax, 0AFh ; '¯' ;~ 01A2:3D32
cs=0x1a2;eip=0x003d35; 	X(PUSH(ax));	// 6896 push    ax ;~ 01A2:3D35
cs=0x1a2;eip=0x003d36; 	T(MOV(ax, 0x81));	// 6897 mov     ax, 81h ; '' ;~ 01A2:3D36
cs=0x1a2;eip=0x003d39; 	X(PUSH(ax));	// 6898 push    ax ;~ 01A2:3D39
cs=0x1a2;eip=0x003d3a; 	T(MOV(ax, offset(dseg,abct)));	// 6899 mov     ax, offset aBct ; "bct" ;~ 01A2:3D3A
cs=0x1a2;eip=0x003d3d; 	X(PUSH(ax));	// 6900 push    ax ;~ 01A2:3D3D
cs=0x1a2;eip=0x003d3e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 6901 push    [bp+var_4C] ;~ 01A2:3D3E
cs=0x1a2;eip=0x003d41; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 6902 push    [bp+var_4E] ;~ 01A2:3D41
cs=0x1a2;eip=0x003d44; 	R(CALLF(locate_text_res,0));	// 6903 call    locate_text_res ;~ 01A2:3D44
cs=0x1a2;eip=0x003d49; 	T(ADD(sp, 6));	// 6904 add     sp, 6 ;~ 01A2:3D49
cs=0x1a2;eip=0x003d4c; 	X(PUSH(dx));	// 6905 push    dx ;~ 01A2:3D4C
cs=0x1a2;eip=0x003d4d; 	X(PUSH(ax));	// 6906 push    ax ;~ 01A2:3D4D
cs=0x1a2;eip=0x003d4e; 	R(CALLF(draw_button,0));	// 6907 call    draw_button ;~ 01A2:3D4E
cs=0x1a2;eip=0x003d53; 	T(ADD(sp, 0x14));	// 6908 add     sp, 14h ;~ 01A2:3D53
cs=0x1a2;eip=0x003d56; 	T(MOV(al, *(raddr(ss,bp+var_52))));	// 6909 mov     al, [bp+var_52] ;~ 01A2:3D56
cs=0x1a2;eip=0x003d59; 	T(CBW);	// 6910 cbw ;~ 01A2:3D59
cs=0x1a2;eip=0x003d5a; 	X(PUSH(ax));	// 6911 push    ax ;~ 01A2:3D5A
cs=0x1a2;eip=0x003d5b; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 6912 push    word ptr wndsprite+2 ;~ 01A2:3D5B
cs=0x1a2;eip=0x003d5f; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 6913 push    word ptr wndsprite ;~ 01A2:3D5F
cs=0x1a2;eip=0x003d63; 	R(CALLF(sprite_blit_to_video,0));	// 6914 call    sprite_blit_to_video ;~ 01A2:3D63
cs=0x1a2;eip=0x003d68; 	T(ADD(sp, 6));	// 6915 add     sp, 6 ;~ 01A2:3D68
cs=0x1a2;eip=0x003d6b; 	X(MOV(*(raddr(ss,bp+var_52)), 0x0FE));	// 6916 mov     [bp+var_52], 0FEh ; 'þ' ;~ 01A2:3D6B
cs=0x1a2;eip=0x003d6f; 	R(CALLF(sub_29772,0));	// 6917 call    sub_29772 ;~ 01A2:3D6F
cs=0x1a2;eip=0x003d74; 	R(CALLF(check_input,0));	// 6918 call    check_input ;~ 01A2:3D74
cs=0x1a2;eip=0x003d79; 	X(MOV(*(dw*)(raddr(ss,bp+var_70)), 1));	// 6919 mov     [bp+var_70], 1 ;~ 01A2:3D79
cs=0x1a2;eip=0x003d7e; 	R(CALLF(sprite_copy_2_to_1_2,0));	// 6920 call    sprite_copy_2_to_1_2 ;~ 01A2:3D7E
loc_13d83:
	// 4721 
cs=0x1a2;eip=0x003d83; 	X(PUSH(word_407d0));	// 6923 push    word_407D0 ;~ 01A2:3D83
cs=0x1a2;eip=0x003d87; 	X(PUSH(word_407ce));	// 6924 push    word_407CE ;~ 01A2:3D87
cs=0x1a2;eip=0x003d8b; 	T(MOV(ax, 0x59A));	// 6925 mov     ax, 59Ah ;~ 01A2:3D8B
cs=0x1a2;eip=0x003d8e; 	X(PUSH(ax));	// 6926 push    ax ;~ 01A2:3D8E
cs=0x1a2;eip=0x003d8f; 	T(MOV(ax, 0x590));	// 6927 mov     ax, 590h ;~ 01A2:3D8F
cs=0x1a2;eip=0x003d92; 	X(PUSH(ax));	// 6928 push    ax ;~ 01A2:3D92
cs=0x1a2;eip=0x003d93; 	T(MOV(ax, 0x586));	// 6929 mov     ax, 586h ;~ 01A2:3D93
cs=0x1a2;eip=0x003d96; 	X(PUSH(ax));	// 6930 push    ax ;~ 01A2:3D96
cs=0x1a2;eip=0x003d97; 	T(MOV(ax, 0x57C));	// 6931 mov     ax, 57Ch ;~ 01A2:3D97
cs=0x1a2;eip=0x003d9a; 	X(PUSH(ax));	// 6932 push    ax ;~ 01A2:3D9A
cs=0x1a2;eip=0x003d9b; 	T(MOV(ax, 4));	// 6933 mov     ax, 4 ;~ 01A2:3D9B
cs=0x1a2;eip=0x003d9e; 	X(PUSH(ax));	// 6934 push    ax ;~ 01A2:3D9E
cs=0x1a2;eip=0x003d9f; 	R(CALLF(mouse_timer_sprite_unk,0));	// 6935 call    mouse_timer_sprite_unk ;~ 01A2:3D9F
cs=0x1a2;eip=0x003da4; 	T(ADD(sp, 0x0E));	// 6936 add     sp, 0Eh ;~ 01A2:3DA4
cs=0x1a2;eip=0x003da7; 	X(MOV(*(dw*)(raddr(ss,bp+var_72)), ax));	// 6937 mov     [bp+var_72], ax ;~ 01A2:3DA7
cs=0x1a2;eip=0x003daa; 	X(ADD(*(dw*)(raddr(ss,bp+var_42)), ax));	// 6938 add     [bp+var_42], ax ;~ 01A2:3DAA
cs=0x1a2;eip=0x003dad; 	T(CMP(*(dw*)(raddr(ss,bp+var_42)), 0x1E));	// 6939 cmp     [bp+var_42], 1Eh ;~ 01A2:3DAD
cs=0x1a2;eip=0x003db1; 	R(JL(loc_13dd3));	// 6940 jl      short loc_13DD3 ;~ 01A2:3DB1
cs=0x1a2;eip=0x003db3; 	X(SUB(*(dw*)(raddr(ss,bp+var_42)), 0x1E));	// 6941 sub     [bp+var_42], 1Eh ;~ 01A2:3DB3
cs=0x1a2;eip=0x003db7; 	X(INC(*(raddr(ss,bp+var_8e))));	// 6942 inc     [bp+var_8E] ;~ 01A2:3DB7
cs=0x1a2;eip=0x003dbb; 	T(MOV(al, *(raddr(ss,bp+var_8e))));	// 6943 mov     al, [bp+var_8E] ;~ 01A2:3DBB
cs=0x1a2;eip=0x003dbf; 	T(CBW);	// 6944 cbw ;~ 01A2:3DBF
cs=0x1a2;eip=0x003dc0; 	T(MOV(bx, ax));	// 6945 mov     bx, ax ;~ 01A2:3DC0
cs=0x1a2;eip=0x003dc2; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_5a))));	// 6946 add     bx, [bp+var_5A] ;~ 01A2:3DC2
cs=0x1a2;eip=0x003dc5; 	T(MOV(es, *(dw*)(raddr(ss,bp+var_58))));	// 6947 mov     es, [bp+var_58] ;~ 01A2:3DC5
cs=0x1a2;eip=0x003dc8; 	T(CMP(*(raddr(es,bx)), 0));	// 6948 cmp     byte ptr es:[bx], 0 ;~ 01A2:3DC8
cs=0x1a2;eip=0x003dcc; 	R(JNZ(loc_13dd3));	// 6949 jnz     short loc_13DD3 ;~ 01A2:3DCC
cs=0x1a2;eip=0x003dce; 	X(MOV(*(raddr(ss,bp+var_8e)), 0));	// 6950 mov     [bp+var_8E], 0 ;~ 01A2:3DCE
loc_13dd3:
	// 4722 
cs=0x1a2;eip=0x003dd3; 	T(MOV(al, *(raddr(ss,bp+var_6c))));	// 6954 mov     al, [bp+var_6C] ;~ 01A2:3DD3
cs=0x1a2;eip=0x003dd6; 	T(CMP(*(raddr(ss,bp+var_8e)), al));	// 6955 cmp     [bp+var_8E], al ;~ 01A2:3DD6
cs=0x1a2;eip=0x003dda; 	R(JNZ(loc_13ddf));	// 6956 jnz     short loc_13DDF ;~ 01A2:3DDA
cs=0x1a2;eip=0x003ddc; 	R(JMP(loc_13ea5));	// 6957 jmp     loc_13EA5 ;~ 01A2:3DDC
loc_13ddf:
	// 4723 
cs=0x1a2;eip=0x003ddf; 	T(MOV(al, *(raddr(ss,bp+var_8e))));	// 6961 mov     al, [bp+var_8E] ;~ 01A2:3DDF
cs=0x1a2;eip=0x003de3; 	X(MOV(*(raddr(ss,bp+var_6c)), al));	// 6962 mov     [bp+var_6C], al ;~ 01A2:3DE3
cs=0x1a2;eip=0x003de6; 	T(CBW);	// 6963 cbw ;~ 01A2:3DE6
cs=0x1a2;eip=0x003de7; 	T(MOV(bx, ax));	// 6964 mov     bx, ax ;~ 01A2:3DE7
cs=0x1a2;eip=0x003de9; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_5a))));	// 6965 add     bx, [bp+var_5A] ;~ 01A2:3DE9
cs=0x1a2;eip=0x003dec; 	T(MOV(es, *(dw*)(raddr(ss,bp+var_58))));	// 6966 mov     es, [bp+var_58] ;~ 01A2:3DEC
cs=0x1a2;eip=0x003def; 	T(MOV(al, *(raddr(es,bx))));	// 6967 mov     al, es:[bx] ;~ 01A2:3DEF
cs=0x1a2;eip=0x003df2; 	T(ADD(al, 0x30));	// 6968 add     al, 30h ; '0' ;~ 01A2:3DF2
cs=0x1a2;eip=0x003df4; 	X(MOV(byte_3bd29, al));	// 6969 mov     byte_3BD29, al ;~ 01A2:3DF4
cs=0x1a2;eip=0x003df7; 	R(CALLF(mouse_draw_opaque_check,0));	// 6970 call    mouse_draw_opaque_check ;~ 01A2:3DF7
cs=0x1a2;eip=0x003dfc; 	T(MOV(ax, offset(dseg,aop01)));	// 6971 mov     ax, offset aOp01 ;~ 01A2:3DFC
cs=0x1a2;eip=0x003dff; 	X(PUSH(ax));	// 6972 push    ax ;~ 01A2:3DFF
cs=0x1a2;eip=0x003e00; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 6973 push    [bp+var_1A] ;~ 01A2:3E00
cs=0x1a2;eip=0x003e03; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 6974 push    [bp+var_1C] ;~ 01A2:3E03
cs=0x1a2;eip=0x003e06; 	R(CALLF(locate_shape_fatal,0));	// 6975 call    locate_shape_fatal ;~ 01A2:3E06
cs=0x1a2;eip=0x003e0b; 	T(ADD(sp, 6));	// 6976 add     sp, 6 ;~ 01A2:3E0B
cs=0x1a2;eip=0x003e0e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56))), ax));	// 6977 mov     word ptr [bp+var_56], ax ;~ 01A2:3E0E
cs=0x1a2;eip=0x003e11; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56+2))), dx));	// 6978 mov     word ptr [bp+var_56+2], dx ;~ 01A2:3E11
cs=0x1a2;eip=0x003e14; 	T(CMP(video_flag5_is0, 0));	// 6979 cmp     video_flag5_is0, 0 ;~ 01A2:3E14
cs=0x1a2;eip=0x003e19; 	R(JZ(loc_13e8a));	// 6980 jz      short loc_13E8A ;~ 01A2:3E19
cs=0x1a2;eip=0x003e1b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_46+2)))));	// 6981 push    word ptr [bp+var_46+2] ;~ 01A2:3E1B
cs=0x1a2;eip=0x003e1e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_46)))));	// 6982 push    word ptr [bp+var_46] ;~ 01A2:3E1E
cs=0x1a2;eip=0x003e21; 	R(CALLF(sprite_set_1_from_argptr,0));	// 6983 call    sprite_set_1_from_argptr ;~ 01A2:3E21
cs=0x1a2;eip=0x003e26; 	T(ADD(sp, 4));	// 6984 add     sp, 4 ;~ 01A2:3E26
cs=0x1a2;eip=0x003e29; 	T(SUB(ax, ax));	// 6985 sub     ax, ax ;~ 01A2:3E29
cs=0x1a2;eip=0x003e2b; 	X(PUSH(ax));	// 6986 push    ax ;~ 01A2:3E2B
cs=0x1a2;eip=0x003e2c; 	X(PUSH(ax));	// 6987 push    ax ;~ 01A2:3E2C
cs=0x1a2;eip=0x003e2d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_56+2)))));	// 6988 push    word ptr [bp+var_56+2] ;~ 01A2:3E2D
cs=0x1a2;eip=0x003e30; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_56)))));	// 6989 push    word ptr [bp+var_56] ;~ 01A2:3E30
cs=0x1a2;eip=0x003e33; 	R(CALLF(shape2d_op_unk5,0));	// 6990 call    shape2d_op_unk5 ;~ 01A2:3E33
cs=0x1a2;eip=0x003e38; 	T(ADD(sp, 8));	// 6991 add     sp, 8 ;~ 01A2:3E38
cs=0x1a2;eip=0x003e3b; 	R(CALLF(sprite_copy_2_to_1_2,0));	// 6992 call    sprite_copy_2_to_1_2 ;~ 01A2:3E3B
cs=0x1a2;eip=0x003e40; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_56))));	// 6993 les     bx, [bp+var_56] ;~ 01A2:3E40
cs=0x1a2;eip=0x003e43; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 6994 mov     ax, es:[bx+2] ;~ 01A2:3E43
cs=0x1a2;eip=0x003e47; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_90))));	// 6995 add     ax, [bp+var_90] ;~ 01A2:3E47
cs=0x1a2;eip=0x003e4b; 	X(PUSH(ax));	// 6996 push    ax ;~ 01A2:3E4B
cs=0x1a2;eip=0x003e4c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_90))));	// 6997 push    [bp+var_90] ;~ 01A2:3E4C
cs=0x1a2;eip=0x003e50; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 6998 mov     ax, es:[bx] ;~ 01A2:3E50
cs=0x1a2;eip=0x003e53; 	X(IMUL1_2(video_flag1_is1));	// 6999 imul    video_flag1_is1 ;~ 01A2:3E53
cs=0x1a2;eip=0x003e57; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_8c))));	// 7000 add     ax, [bp+var_8C] ;~ 01A2:3E57
cs=0x1a2;eip=0x003e5b; 	X(PUSH(ax));	// 7001 push    ax ;~ 01A2:3E5B
cs=0x1a2;eip=0x003e5c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8c))));	// 7002 push    [bp+var_8C] ;~ 01A2:3E5C
cs=0x1a2;eip=0x003e60; 	R(CALLF(sprite_set_1_size,0));	// 7003 call    sprite_set_1_size ;~ 01A2:3E60
cs=0x1a2;eip=0x003e65; 	T(ADD(sp, 8));	// 7004 add     sp, 8 ;~ 01A2:3E65
cs=0x1a2;eip=0x003e68; 	X(PUSH(*(dw*)(raddr(ss,bp+var_90))));	// 7005 push    [bp+var_90] ;~ 01A2:3E68
cs=0x1a2;eip=0x003e6c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8c))));	// 7006 push    [bp+var_8C] ;~ 01A2:3E6C
cs=0x1a2;eip=0x003e70; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_46))));	// 7007 les     bx, [bp+var_46] ;~ 01A2:3E70
cs=0x1a2;eip=0x003e73; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 7008 push    word ptr es:[bx+2] ;~ 01A2:3E73
cs=0x1a2;eip=0x003e77; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 7009 push    word ptr es:[bx] ;~ 01A2:3E77
cs=0x1a2;eip=0x003e7a; 	R(CALLF(sprite_putimage_and_alt,0));	// 7010 call    sprite_putimage_and_alt ;~ 01A2:3E7A
cs=0x1a2;eip=0x003e7f; 	T(ADD(sp, 8));	// 7011 add     sp, 8 ;~ 01A2:3E7F
cs=0x1a2;eip=0x003e82; 	R(CALLF(sprite_copy_2_to_1_2,0));	// 7012 call    sprite_copy_2_to_1_2 ;~ 01A2:3E82
cs=0x1a2;eip=0x003e87; 	R(JMP(loc_13ea0));	// 7013 jmp     short loc_13EA0 ;~ 01A2:3E87
loc_13e8a:
	// 4724 
cs=0x1a2;eip=0x003e8a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_90))));	// 7018 push    [bp+var_90] ;~ 01A2:3E8A
cs=0x1a2;eip=0x003e8e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8c))));	// 7019 push    [bp+var_8C] ;~ 01A2:3E8E
cs=0x1a2;eip=0x003e92; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_56+2)))));	// 7020 push    word ptr [bp+var_56+2] ;~ 01A2:3E92
cs=0x1a2;eip=0x003e95; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_56)))));	// 7021 push    word ptr [bp+var_56] ;~ 01A2:3E95
cs=0x1a2;eip=0x003e98; 	R(CALLF(shape2d_op_unk5,0));	// 7022 call    shape2d_op_unk5 ;~ 01A2:3E98
cs=0x1a2;eip=0x003e9d; 	T(ADD(sp, 8));	// 7023 add     sp, 8 ;~ 01A2:3E9D
loc_13ea0:
	// 4725 
cs=0x1a2;eip=0x003ea0; 	R(CALLF(mouse_draw_transparent_check,0));	// 7026 call    mouse_draw_transparent_check ;~ 01A2:3EA0
loc_13ea5:
	// 4726 
cs=0x1a2;eip=0x003ea5; 	X(PUSH(di));	// 7029 push    di ;~ 01A2:3EA5
cs=0x1a2;eip=0x003ea6; 	R(CALLF(input_checking,0));	// 7030 call    input_checking ;~ 01A2:3EA6
cs=0x1a2;eip=0x003eab; 	T(ADD(sp, 2));	// 7031 add     sp, 2 ;~ 01A2:3EAB
cs=0x1a2;eip=0x003eae; 	T(MOV(si, ax));	// 7032 mov     si, ax ;~ 01A2:3EAE
cs=0x1a2;eip=0x003eb0; 	T(CMP(si, 0x0D));	// 7033 cmp     si, 0Dh ;~ 01A2:3EB0
cs=0x1a2;eip=0x003eb3; 	R(JZ(loc_13ebf));	// 7034 jz      short loc_13EBF ;~ 01A2:3EB3
cs=0x1a2;eip=0x003eb5; 	T(CMP(si, 0x20));	// 7035 cmp     si, 20h ; ' ' ;~ 01A2:3EB5
cs=0x1a2;eip=0x003eb8; 	R(JZ(loc_13ebf));	// 7036 jz      short loc_13EBF ;~ 01A2:3EB8
cs=0x1a2;eip=0x003eba; 	T(CMP(si, 0x1B));	// 7037 cmp     si, 1Bh ;~ 01A2:3EBA
cs=0x1a2;eip=0x003ebd; 	R(JNZ(loc_13ec4));	// 7038 jnz     short loc_13EC4 ;~ 01A2:3EBD
loc_13ebf:
	// 4727 
cs=0x1a2;eip=0x003ebf; 	X(MOV(*(dw*)(raddr(ss,bp+var_70)), 0));	// 7042 mov     [bp+var_70], 0 ;~ 01A2:3EBF
loc_13ec4:
	// 4728 
cs=0x1a2;eip=0x003ec4; 	T(CMP(*(dw*)(raddr(ss,bp+var_70)), 0));	// 7045 cmp     [bp+var_70], 0 ;~ 01A2:3EC4
cs=0x1a2;eip=0x003ec8; 	R(JZ(loc_13ecd));	// 7046 jz      short loc_13ECD ;~ 01A2:3EC8
cs=0x1a2;eip=0x003eca; 	R(JMP(loc_13d83));	// 7047 jmp     loc_13D83 ;~ 01A2:3ECA
loc_13ecd:
	// 4729 
cs=0x1a2;eip=0x003ecd; 	R(CALLF(sprite_copy_wnd_to_1,0));	// 7051 call    sprite_copy_wnd_to_1 ;~ 01A2:3ECD
cs=0x1a2;eip=0x003ed2; 	T(SUB(ax, ax));	// 7052 sub     ax, ax ;~ 01A2:3ED2
cs=0x1a2;eip=0x003ed4; 	X(PUSH(ax));	// 7053 push    ax ;~ 01A2:3ED4
cs=0x1a2;eip=0x003ed5; 	X(PUSH(word_407f8));	// 7054 push    word_407F8 ;~ 01A2:3ED5
cs=0x1a2;eip=0x003ed9; 	X(PUSH(word_407f6));	// 7055 push    word_407F6 ;~ 01A2:3ED9
cs=0x1a2;eip=0x003edd; 	X(PUSH(word_407f4));	// 7056 push    word_407F4 ;~ 01A2:3EDD
cs=0x1a2;eip=0x003ee1; 	T(MOV(ax, 0x64));	// 7057 mov     ax, 64h ; 'd' ;~ 01A2:3EE1
cs=0x1a2;eip=0x003ee4; 	X(PUSH(ax));	// 7058 push    ax ;~ 01A2:3EE4
cs=0x1a2;eip=0x003ee5; 	T(MOV(ax, 0x140));	// 7059 mov     ax, 140h ;~ 01A2:3EE5
cs=0x1a2;eip=0x003ee8; 	X(PUSH(ax));	// 7060 push    ax ;~ 01A2:3EE8
cs=0x1a2;eip=0x003ee9; 	T(SUB(ax, ax));	// 7061 sub     ax, ax ;~ 01A2:3EE9
cs=0x1a2;eip=0x003eeb; 	X(PUSH(ax));	// 7062 push    ax ;~ 01A2:3EEB
cs=0x1a2;eip=0x003eec; 	X(PUSH(ax));	// 7063 push    ax ;~ 01A2:3EEC
cs=0x1a2;eip=0x003eed; 	X(PUSH(ax));	// 7064 push    ax ;~ 01A2:3EED
cs=0x1a2;eip=0x003eee; 	X(PUSH(ax));	// 7065 push    ax ;~ 01A2:3EEE
cs=0x1a2;eip=0x003eef; 	R(CALLF(draw_button,0));	// 7066 call    draw_button ;~ 01A2:3EEF
cs=0x1a2;eip=0x003ef4; 	T(ADD(sp, 0x14));	// 7067 add     sp, 14h ;~ 01A2:3EF4
cs=0x1a2;eip=0x003ef7; 	T(MOV(ax, *(hiscore_buttons_y2)));	// 7068 mov     ax, hiscore_buttons_y2 ;~ 01A2:3EF7
cs=0x1a2;eip=0x003efa; 	T(INC(ax));	// 7069 inc     ax ;~ 01A2:3EFA
cs=0x1a2;eip=0x003efb; 	X(PUSH(ax));	// 7070 push    ax ;~ 01A2:3EFB
cs=0x1a2;eip=0x003efc; 	X(PUSH(*(hiscore_buttons_y1)));	// 7071 push    hiscore_buttons_y1 ;~ 01A2:3EFC
cs=0x1a2;eip=0x003f00; 	T(MOV(ax, 0x138));	// 7072 mov     ax, 138h ;~ 01A2:3F00
cs=0x1a2;eip=0x003f03; 	X(PUSH(ax));	// 7073 push    ax ;~ 01A2:3F03
cs=0x1a2;eip=0x003f04; 	T(MOV(ax, 8));	// 7074 mov     ax, 8 ;~ 01A2:3F04
cs=0x1a2;eip=0x003f07; 	X(PUSH(ax));	// 7075 push    ax ;~ 01A2:3F07
cs=0x1a2;eip=0x003f08; 	R(CALLF(sprite_set_1_size,0));	// 7076 call    sprite_set_1_size ;~ 01A2:3F08
cs=0x1a2;eip=0x003f0d; 	T(ADD(sp, 8));	// 7077 add     sp, 8 ;~ 01A2:3F0D
cs=0x1a2;eip=0x003f10; 	X(PUSH(word_407f8));	// 7078 push    word_407F8 ;~ 01A2:3F10
cs=0x1a2;eip=0x003f14; 	R(CALLF(sprite_clear_1_color,0));	// 7079 call    sprite_clear_1_color ;~ 01A2:3F14
cs=0x1a2;eip=0x003f19; 	T(ADD(sp, 2));	// 7080 add     sp, 2 ;~ 01A2:3F19
cs=0x1a2;eip=0x003f1c; 	R(CALLF(mouse_draw_opaque_check,0));	// 7081 call    mouse_draw_opaque_check ;~ 01A2:3F1C
cs=0x1a2;eip=0x003f21; 	T(MOV(al, *(raddr(ss,bp+var_18))));	// 7082 mov     al, [bp+var_18] ;~ 01A2:3F21
cs=0x1a2;eip=0x003f24; 	T(CBW);	// 7083 cbw ;~ 01A2:3F24
cs=0x1a2;eip=0x003f25; 	X(PUSH(ax));	// 7084 push    ax ;~ 01A2:3F25
cs=0x1a2;eip=0x003f26; 	T(MOV(ax, offset(dseg,ainh)));	// 7085 mov     ax, offset aInh ; "inh" ;~ 01A2:3F26
cs=0x1a2;eip=0x003f29; 	X(PUSH(ax));	// 7086 push    ax ;~ 01A2:3F29
cs=0x1a2;eip=0x003f2a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 7087 push    [bp+var_4C] ;~ 01A2:3F2A
cs=0x1a2;eip=0x003f2d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 7088 push    [bp+var_4E] ;~ 01A2:3F2D
cs=0x1a2;eip=0x003f30; 	R(CALLF(locate_text_res,0));	// 7089 call    locate_text_res ;~ 01A2:3F30
cs=0x1a2;eip=0x003f35; 	T(ADD(sp, 6));	// 7090 add     sp, 6 ;~ 01A2:3F35
cs=0x1a2;eip=0x003f38; 	X(PUSH(dx));	// 7091 push    dx ;~ 01A2:3F38
cs=0x1a2;eip=0x003f39; 	X(PUSH(ax));	// 7092 push    ax ;~ 01A2:3F39
cs=0x1a2;eip=0x003f3a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_88))));	// 7093 push    [bp+var_88] ;~ 01A2:3F3A
cs=0x1a2;eip=0x003f3e; 	X(PUSH(cs));	// 7094 push    cs ;~ 01A2:3F3E
cs=0x1a2;eip=0x003f3f; 	R(CALL(enter_hiscore,0));	// 7095 call    near ptr enter_hiscore ;~ 01A2:3F3F
cs=0x1a2;eip=0x003f42; 	T(ADD(sp, 8));	// 7096 add     sp, 8 ;~ 01A2:3F42
cs=0x1a2;eip=0x003f45; 	R(JMP(loc_13fda));	// 7097 jmp     loc_13FDA ;~ 01A2:3F45
loc_13f48:
	// 4730 
cs=0x1a2;eip=0x003f48; 	T(CMP(*(raddr(ss,bp+var_6e)), 0));	// 7101 cmp     [bp+var_6E], 0 ;~ 01A2:3F48
cs=0x1a2;eip=0x003f4c; 	R(JLE(loc_13f84));	// 7102 jle     short loc_13F84 ;~ 01A2:3F4C
cs=0x1a2;eip=0x003f4e; 	R(CALLF(check_input,0));	// 7103 call    check_input ;~ 01A2:3F4E
cs=0x1a2;eip=0x003f53; 	R(CALLF(mouse_draw_opaque_check,0));	// 7104 call    mouse_draw_opaque_check ;~ 01A2:3F53
cs=0x1a2;eip=0x003f58; 	T(SUB(ax, ax));	// 7105 sub     ax, ax ;~ 01A2:3F58
cs=0x1a2;eip=0x003f5a; 	X(PUSH(ax));	// 7106 push    ax ;~ 01A2:3F5A
cs=0x1a2;eip=0x003f5b; 	T(MOV(ax, offset(dseg,ainh_0)));	// 7107 mov     ax, offset aInh_0 ; "inh" ;~ 01A2:3F5B
cs=0x1a2;eip=0x003f5e; 	X(PUSH(ax));	// 7108 push    ax ;~ 01A2:3F5E
cs=0x1a2;eip=0x003f5f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 7109 push    [bp+var_4C] ;~ 01A2:3F5F
cs=0x1a2;eip=0x003f62; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 7110 push    [bp+var_4E] ;~ 01A2:3F62
cs=0x1a2;eip=0x003f65; 	R(CALLF(locate_text_res,0));	// 7111 call    locate_text_res ;~ 01A2:3F65
cs=0x1a2;eip=0x003f6a; 	T(ADD(sp, 6));	// 7112 add     sp, 6 ;~ 01A2:3F6A
cs=0x1a2;eip=0x003f6d; 	X(PUSH(dx));	// 7113 push    dx ;~ 01A2:3F6D
cs=0x1a2;eip=0x003f6e; 	X(PUSH(ax));	// 7114 push    ax ;~ 01A2:3F6E
cs=0x1a2;eip=0x003f6f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_88))));	// 7115 push    [bp+var_88] ;~ 01A2:3F6F
cs=0x1a2;eip=0x003f73; 	X(PUSH(cs));	// 7116 push    cs ;~ 01A2:3F73
cs=0x1a2;eip=0x003f74; 	R(CALL(enter_hiscore,0));	// 7117 call    near ptr enter_hiscore ;~ 01A2:3F74
cs=0x1a2;eip=0x003f77; 	T(ADD(sp, 8));	// 7118 add     sp, 8 ;~ 01A2:3F77
cs=0x1a2;eip=0x003f7a; 	X(MOV(*(raddr(ss,bp+var_6e)), 0));	// 7119 mov     [bp+var_6E], 0 ;~ 01A2:3F7A
cs=0x1a2;eip=0x003f7e; 	X(MOV(*(raddr(ss,bp+var_52)), 0x0FE));	// 7120 mov     [bp+var_52], 0FEh ; 'þ' ;~ 01A2:3F7E
cs=0x1a2;eip=0x003f82; 	R(JMP(loc_13fda));	// 7121 jmp     short loc_13FDA ;~ 01A2:3F82
loc_13f84:
	// 4731 
cs=0x1a2;eip=0x003f84; 	R(CALLF(mouse_draw_opaque_check,0));	// 7125 call    mouse_draw_opaque_check ;~ 01A2:3F84
cs=0x1a2;eip=0x003f89; 	T(CMP(*(raddr(ss,bp+var_6e)), 0x0FF));	// 7126 cmp     [bp+var_6E], 0FFh ;~ 01A2:3F89
cs=0x1a2;eip=0x003f8d; 	R(JNZ(loc_13fd6));	// 7127 jnz     short loc_13FD6 ;~ 01A2:3F8D
cs=0x1a2;eip=0x003f8f; 	T(MOV(ax, offset(dseg,ahna)));	// 7128 mov     ax, offset aHna ; "hna" ;~ 01A2:3F8F
cs=0x1a2;eip=0x003f92; 	X(PUSH(ax));	// 7129 push    ax ;~ 01A2:3F92
cs=0x1a2;eip=0x003f93; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 7130 push    [bp+var_4C] ;~ 01A2:3F93
cs=0x1a2;eip=0x003f96; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 7131 push    [bp+var_4E] ;~ 01A2:3F96
cs=0x1a2;eip=0x003f99; 	R(CALLF(locate_text_res,0));	// 7132 call    locate_text_res ;~ 01A2:3F99
cs=0x1a2;eip=0x003f9e; 	T(ADD(sp, 6));	// 7133 add     sp, 6 ;~ 01A2:3F9E
cs=0x1a2;eip=0x003fa1; 	X(PUSH(dx));	// 7134 push    dx ;~ 01A2:3FA1
cs=0x1a2;eip=0x003fa2; 	X(PUSH(ax));	// 7135 push    ax ;~ 01A2:3FA2
cs=0x1a2;eip=0x003fa3; 	T(MOV(ax, 0x0AC74));	// 7136 mov     ax, 0AC74h ;~ 01A2:3FA3
cs=0x1a2;eip=0x003fa6; 	X(PUSH(ax));	// 7137 push    ax ;~ 01A2:3FA6
cs=0x1a2;eip=0x003fa7; 	R(CALLF(copy_string,0));	// 7138 call    copy_string ;~ 01A2:3FA7
cs=0x1a2;eip=0x003fac; 	T(ADD(sp, 6));	// 7139 add     sp, 6 ;~ 01A2:3FAC
cs=0x1a2;eip=0x003faf; 	T(SUB(ax, ax));	// 7140 sub     ax, ax ;~ 01A2:3FAF
cs=0x1a2;eip=0x003fb1; 	X(PUSH(ax));	// 7141 push    ax ;~ 01A2:3FB1
cs=0x1a2;eip=0x003fb2; 	X(PUSH(dialog_fnt_colour));	// 7142 push    dialog_fnt_colour ;~ 01A2:3FB2
cs=0x1a2;eip=0x003fb6; 	T(MOV(ax, 0x32));	// 7143 mov     ax, 32h ; '2' ;~ 01A2:3FB6
cs=0x1a2;eip=0x003fb9; 	X(PUSH(ax));	// 7144 push    ax ;~ 01A2:3FB9
cs=0x1a2;eip=0x003fba; 	T(MOV(ax, 0x0AC74));	// 7145 mov     ax, 0AC74h ;~ 01A2:3FBA
cs=0x1a2;eip=0x003fbd; 	X(PUSH(ax));	// 7146 push    ax ;~ 01A2:3FBD
cs=0x1a2;eip=0x003fbe; 	R(CALLF(font_op2_alt,0));	// 7147 call    font_op2_alt ;~ 01A2:3FBE
cs=0x1a2;eip=0x003fc3; 	T(ADD(sp, 2));	// 7148 add     sp, 2 ;~ 01A2:3FC3
cs=0x1a2;eip=0x003fc6; 	X(PUSH(ax));	// 7149 push    ax ;~ 01A2:3FC6
cs=0x1a2;eip=0x003fc7; 	T(MOV(ax, 0x0AC74));	// 7150 mov     ax, 0AC74h ;~ 01A2:3FC7
cs=0x1a2;eip=0x003fca; 	X(PUSH(ax));	// 7151 push    ax ;~ 01A2:3FCA
cs=0x1a2;eip=0x003fcb; 	R(CALLF(hiscore_draw_text,0));	// 7152 call    hiscore_draw_text ;~ 01A2:3FCB
cs=0x1a2;eip=0x003fd0; 	T(ADD(sp, 0x0A));	// 7153 add     sp, 0Ah ;~ 01A2:3FD0
cs=0x1a2;eip=0x003fd3; 	R(JMP(loc_13fda));	// 7154 jmp     short loc_13FDA ;~ 01A2:3FD3
loc_13fd6:
	// 4732 
cs=0x1a2;eip=0x003fd6; 	X(PUSH(cs));	// 7159 push    cs ;~ 01A2:3FD6
cs=0x1a2;eip=0x003fd7; 	R(CALL(highscore_text_unk,0));	// 7160 call    near ptr highscore_text_unk ;~ 01A2:3FD7
loc_13fda:
	// 4733 
cs=0x1a2;eip=0x003fda; 	X(MOV(*(raddr(ss,bp+var_92)), 1));	// 7164 mov     [bp+var_92], 1 ;~ 01A2:3FDA
cs=0x1a2;eip=0x003fdf; 	X(MOV(*(raddr(ss,bp+var_78)), 1));	// 7165 mov     [bp+var_78], 1 ;~ 01A2:3FDF
cs=0x1a2;eip=0x003fe3; 	R(CALLF(sub_29772,0));	// 7166 call    sub_29772 ;~ 01A2:3FE3
cs=0x1a2;eip=0x003fe8; 	R(CALLF(sprite_copy_wnd_to_1,0));	// 7167 call    sprite_copy_wnd_to_1 ;~ 01A2:3FE8
cs=0x1a2;eip=0x003fed; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 7168 cmp     [bp+var_16], 0 ;~ 01A2:3FED
cs=0x1a2;eip=0x003ff1; 	R(JZ(loc_13ff9));	// 7169 jz      short loc_13FF9 ;~ 01A2:3FF1
cs=0x1a2;eip=0x003ff3; 	T(CMP(*(raddr(ss,bp+var_6e)), 0x0FF));	// 7170 cmp     [bp+var_6E], 0FFh ;~ 01A2:3FF3
cs=0x1a2;eip=0x003ff7; 	R(JNZ(loc_14002));	// 7171 jnz     short loc_14002 ;~ 01A2:3FF7
loc_13ff9:
	// 4734 
cs=0x1a2;eip=0x003ff9; 	X(MOV(*(dw*)(raddr(ss,bp+var_9c)), 0x0FFDC));	// 7174 mov     [bp+var_9C], 0FFDCh ;~ 01A2:3FF9
cs=0x1a2;eip=0x003fff; 	R(JMP(loc_14058));	// 7175 jmp     short loc_14058 ;~ 01A2:3FFF
loc_14002:
	// 4735 
cs=0x1a2;eip=0x004002; 	X(MOV(*(dw*)(raddr(ss,bp+var_9c)), 0));	// 7180 mov     [bp+var_9C], 0 ;~ 01A2:4002
cs=0x1a2;eip=0x004008; 	T(CMP(*(raddr(ss,bp+var_14)), 0));	// 7181 cmp     [bp+var_14], 0 ;~ 01A2:4008
cs=0x1a2;eip=0x00400c; 	R(JZ(loc_14014));	// 7182 jz      short loc_14014 ;~ 01A2:400C
cs=0x1a2;eip=0x00400e; 	T(MOV(ax, offset(dseg,abev)));	// 7183 mov     ax, offset aBev ; "bev" ;~ 01A2:400E
cs=0x1a2;eip=0x004011; 	R(JMP(loc_14017));	// 7184 jmp     short loc_14017 ;~ 01A2:4011
loc_14014:
	// 4736 
cs=0x1a2;eip=0x004014; 	T(MOV(ax, offset(dseg,abhi)));	// 7189 mov     ax, offset aBhi ; "bhi" ;~ 01A2:4014
loc_14017:
	// 4737 
cs=0x1a2;eip=0x004017; 	X(PUSH(ax));	// 7192 push    ax ;~ 01A2:4017
cs=0x1a2;eip=0x004018; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 7193 push    [bp+var_4C] ;~ 01A2:4018
cs=0x1a2;eip=0x00401b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 7194 push    [bp+var_4E] ;~ 01A2:401B
cs=0x1a2;eip=0x00401e; 	R(CALLF(locate_text_res,0));	// 7195 call    locate_text_res ;~ 01A2:401E
cs=0x1a2;eip=0x004023; 	T(ADD(sp, 6));	// 7196 add     sp, 6 ;~ 01A2:4023
cs=0x1a2;eip=0x004026; 	X(MOV(*(dw*)(raddr(ss,bp+var_7e)), ax));	// 7197 mov     [bp+var_7E], ax ;~ 01A2:4026
cs=0x1a2;eip=0x004029; 	X(MOV(*(dw*)(raddr(ss,bp+var_7c)), dx));	// 7198 mov     [bp+var_7C], dx ;~ 01A2:4029
cs=0x1a2;eip=0x00402c; 	T(SUB(ax, ax));	// 7199 sub     ax, ax ;~ 01A2:402C
cs=0x1a2;eip=0x00402e; 	X(PUSH(ax));	// 7200 push    ax ;~ 01A2:402E
cs=0x1a2;eip=0x00402f; 	X(PUSH(word_407f8));	// 7201 push    word_407F8 ;~ 01A2:402F
cs=0x1a2;eip=0x004033; 	X(PUSH(word_407f6));	// 7202 push    word_407F6 ;~ 01A2:4033
cs=0x1a2;eip=0x004037; 	X(PUSH(word_407f4));	// 7203 push    word_407F4 ;~ 01A2:4037
cs=0x1a2;eip=0x00403b; 	T(MOV(ax, 0x15));	// 7204 mov     ax, 15h ;~ 01A2:403B
cs=0x1a2;eip=0x00403e; 	X(PUSH(ax));	// 7205 push    ax ;~ 01A2:403E
cs=0x1a2;eip=0x00403f; 	T(MOV(ax, 0x46));	// 7206 mov     ax, 46h ; 'F' ;~ 01A2:403F
cs=0x1a2;eip=0x004042; 	X(PUSH(ax));	// 7207 push    ax ;~ 01A2:4042
cs=0x1a2;eip=0x004043; 	T(MOV(ax, 0x0AF));	// 7208 mov     ax, 0AFh ; '¯' ;~ 01A2:4043
cs=0x1a2;eip=0x004046; 	X(PUSH(ax));	// 7209 push    ax ;~ 01A2:4046
cs=0x1a2;eip=0x004047; 	T(MOV(ax, word_3bcec));	// 7210 mov     ax, word_3BCEC ;~ 01A2:4047
cs=0x1a2;eip=0x00404a; 	T(INC(ax));	// 7211 inc     ax ;~ 01A2:404A
cs=0x1a2;eip=0x00404b; 	X(PUSH(ax));	// 7212 push    ax ;~ 01A2:404B
cs=0x1a2;eip=0x00404c; 	X(PUSH(dx));	// 7213 push    dx ;~ 01A2:404C
cs=0x1a2;eip=0x00404d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_7e))));	// 7214 push    [bp+var_7E] ;~ 01A2:404D
cs=0x1a2;eip=0x004050; 	R(CALLF(draw_button,0));	// 7215 call    draw_button ;~ 01A2:4050
cs=0x1a2;eip=0x004055; 	T(ADD(sp, 0x14));	// 7216 add     sp, 14h ;~ 01A2:4055
loc_14058:
	// 4738 
cs=0x1a2;eip=0x004058; 	T(SUB(ax, ax));	// 7219 sub     ax, ax ;~ 01A2:4058
cs=0x1a2;eip=0x00405a; 	X(PUSH(ax));	// 7220 push    ax ;~ 01A2:405A
cs=0x1a2;eip=0x00405b; 	X(PUSH(word_407f8));	// 7221 push    word_407F8 ;~ 01A2:405B
cs=0x1a2;eip=0x00405f; 	X(PUSH(word_407f6));	// 7222 push    word_407F6 ;~ 01A2:405F
cs=0x1a2;eip=0x004063; 	X(PUSH(word_407f4));	// 7223 push    word_407F4 ;~ 01A2:4063
cs=0x1a2;eip=0x004067; 	T(MOV(ax, 0x15));	// 7224 mov     ax, 15h ;~ 01A2:4067
cs=0x1a2;eip=0x00406a; 	X(PUSH(ax));	// 7225 push    ax ;~ 01A2:406A
cs=0x1a2;eip=0x00406b; 	T(MOV(ax, 0x46));	// 7226 mov     ax, 46h ; 'F' ;~ 01A2:406B
cs=0x1a2;eip=0x00406e; 	X(PUSH(ax));	// 7227 push    ax ;~ 01A2:406E
cs=0x1a2;eip=0x00406f; 	T(MOV(ax, 0x0AF));	// 7228 mov     ax, 0AFh ; '¯' ;~ 01A2:406F
cs=0x1a2;eip=0x004072; 	X(PUSH(ax));	// 7229 push    ax ;~ 01A2:4072
cs=0x1a2;eip=0x004073; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_9c))));	// 7230 mov     ax, [bp+var_9C] ;~ 01A2:4073
cs=0x1a2;eip=0x004077; 	T(ADD(ax, word_3bcee));	// 7231 add     ax, word_3BCEE ;~ 01A2:4077
cs=0x1a2;eip=0x00407b; 	T(INC(ax));	// 7232 inc     ax ;~ 01A2:407B
cs=0x1a2;eip=0x00407c; 	X(PUSH(ax));	// 7233 push    ax ;~ 01A2:407C
cs=0x1a2;eip=0x00407d; 	T(MOV(ax, offset(dseg,abrp)));	// 7234 mov     ax, offset aBrp ; "brp" ;~ 01A2:407D
cs=0x1a2;eip=0x004080; 	X(PUSH(ax));	// 7235 push    ax ;~ 01A2:4080
cs=0x1a2;eip=0x004081; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 7236 push    [bp+var_4C] ;~ 01A2:4081
cs=0x1a2;eip=0x004084; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 7237 push    [bp+var_4E] ;~ 01A2:4084
cs=0x1a2;eip=0x004087; 	R(CALLF(locate_text_res,0));	// 7238 call    locate_text_res ;~ 01A2:4087
cs=0x1a2;eip=0x00408c; 	T(ADD(sp, 6));	// 7239 add     sp, 6 ;~ 01A2:408C
cs=0x1a2;eip=0x00408f; 	X(PUSH(dx));	// 7240 push    dx ;~ 01A2:408F
cs=0x1a2;eip=0x004090; 	X(PUSH(ax));	// 7241 push    ax ;~ 01A2:4090
cs=0x1a2;eip=0x004091; 	R(CALLF(draw_button,0));	// 7242 call    draw_button ;~ 01A2:4091
cs=0x1a2;eip=0x004096; 	T(ADD(sp, 0x14));	// 7243 add     sp, 14h ;~ 01A2:4096
cs=0x1a2;eip=0x004099; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 7244 cmp     [bp+var_16], 0 ;~ 01A2:4099
cs=0x1a2;eip=0x00409d; 	R(JZ(loc_140a4));	// 7245 jz      short loc_140A4 ;~ 01A2:409D
cs=0x1a2;eip=0x00409f; 	T(MOV(ax, offset(dseg,abra)));	// 7246 mov     ax, offset aBra ; "bra" ;~ 01A2:409F
cs=0x1a2;eip=0x0040a2; 	R(JMP(loc_140a7));	// 7247 jmp     short loc_140A7 ;~ 01A2:40A2
loc_140a4:
	// 4739 
cs=0x1a2;eip=0x0040a4; 	T(MOV(ax, offset(dseg,abdr)));	// 7251 mov     ax, offset aBdr ; "bdr" ;~ 01A2:40A4
loc_140a7:
	// 4740 
cs=0x1a2;eip=0x0040a7; 	X(PUSH(ax));	// 7254 push    ax ;~ 01A2:40A7
cs=0x1a2;eip=0x0040a8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 7255 push    [bp+var_4C] ;~ 01A2:40A8
cs=0x1a2;eip=0x0040ab; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 7256 push    [bp+var_4E] ;~ 01A2:40AB
cs=0x1a2;eip=0x0040ae; 	R(CALLF(locate_text_res,0));	// 7257 call    locate_text_res ;~ 01A2:40AE
cs=0x1a2;eip=0x0040b3; 	T(ADD(sp, 6));	// 7258 add     sp, 6 ;~ 01A2:40B3
cs=0x1a2;eip=0x0040b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_7e)), ax));	// 7259 mov     [bp+var_7E], ax ;~ 01A2:40B6
cs=0x1a2;eip=0x0040b9; 	X(MOV(*(dw*)(raddr(ss,bp+var_7c)), dx));	// 7260 mov     [bp+var_7C], dx ;~ 01A2:40B9
cs=0x1a2;eip=0x0040bc; 	T(SUB(ax, ax));	// 7261 sub     ax, ax ;~ 01A2:40BC
cs=0x1a2;eip=0x0040be; 	X(PUSH(ax));	// 7262 push    ax ;~ 01A2:40BE
cs=0x1a2;eip=0x0040bf; 	X(PUSH(word_407f8));	// 7263 push    word_407F8 ;~ 01A2:40BF
cs=0x1a2;eip=0x0040c3; 	X(PUSH(word_407f6));	// 7264 push    word_407F6 ;~ 01A2:40C3
cs=0x1a2;eip=0x0040c7; 	X(PUSH(word_407f4));	// 7265 push    word_407F4 ;~ 01A2:40C7
cs=0x1a2;eip=0x0040cb; 	T(MOV(ax, 0x15));	// 7266 mov     ax, 15h ;~ 01A2:40CB
cs=0x1a2;eip=0x0040ce; 	X(PUSH(ax));	// 7267 push    ax ;~ 01A2:40CE
cs=0x1a2;eip=0x0040cf; 	T(MOV(ax, 0x46));	// 7268 mov     ax, 46h ; 'F' ;~ 01A2:40CF
cs=0x1a2;eip=0x0040d2; 	X(PUSH(ax));	// 7269 push    ax ;~ 01A2:40D2
cs=0x1a2;eip=0x0040d3; 	T(MOV(ax, 0x0AF));	// 7270 mov     ax, 0AFh ; '¯' ;~ 01A2:40D3
cs=0x1a2;eip=0x0040d6; 	X(PUSH(ax));	// 7271 push    ax ;~ 01A2:40D6
cs=0x1a2;eip=0x0040d7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_9c))));	// 7272 mov     ax, [bp+var_9C] ;~ 01A2:40D7
cs=0x1a2;eip=0x0040db; 	T(ADD(ax, word_3bcf0));	// 7273 add     ax, word_3BCF0 ;~ 01A2:40DB
cs=0x1a2;eip=0x0040df; 	T(INC(ax));	// 7274 inc     ax ;~ 01A2:40DF
cs=0x1a2;eip=0x0040e0; 	X(PUSH(ax));	// 7275 push    ax ;~ 01A2:40E0
cs=0x1a2;eip=0x0040e1; 	X(PUSH(dx));	// 7276 push    dx ;~ 01A2:40E1
cs=0x1a2;eip=0x0040e2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_7e))));	// 7277 push    [bp+var_7E] ;~ 01A2:40E2
cs=0x1a2;eip=0x0040e5; 	R(CALLF(draw_button,0));	// 7278 call    draw_button ;~ 01A2:40E5
cs=0x1a2;eip=0x0040ea; 	T(ADD(sp, 0x14));	// 7279 add     sp, 14h ;~ 01A2:40EA
cs=0x1a2;eip=0x0040ed; 	T(SUB(ax, ax));	// 7280 sub     ax, ax ;~ 01A2:40ED
cs=0x1a2;eip=0x0040ef; 	X(PUSH(ax));	// 7281 push    ax ;~ 01A2:40EF
cs=0x1a2;eip=0x0040f0; 	X(PUSH(word_407f8));	// 7282 push    word_407F8 ;~ 01A2:40F0
cs=0x1a2;eip=0x0040f4; 	X(PUSH(word_407f6));	// 7283 push    word_407F6 ;~ 01A2:40F4
cs=0x1a2;eip=0x0040f8; 	X(PUSH(word_407f4));	// 7284 push    word_407F4 ;~ 01A2:40F8
cs=0x1a2;eip=0x0040fc; 	T(MOV(ax, 0x15));	// 7285 mov     ax, 15h ;~ 01A2:40FC
cs=0x1a2;eip=0x0040ff; 	X(PUSH(ax));	// 7286 push    ax ;~ 01A2:40FF
cs=0x1a2;eip=0x004100; 	T(MOV(ax, 0x46));	// 7287 mov     ax, 46h ; 'F' ;~ 01A2:4100
cs=0x1a2;eip=0x004103; 	X(PUSH(ax));	// 7288 push    ax ;~ 01A2:4103
cs=0x1a2;eip=0x004104; 	T(MOV(ax, 0x0AF));	// 7289 mov     ax, 0AFh ; '¯' ;~ 01A2:4104
cs=0x1a2;eip=0x004107; 	X(PUSH(ax));	// 7290 push    ax ;~ 01A2:4107
cs=0x1a2;eip=0x004108; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_9c))));	// 7291 mov     ax, [bp+var_9C] ;~ 01A2:4108
cs=0x1a2;eip=0x00410c; 	T(ADD(ax, word_3bcf2));	// 7292 add     ax, word_3BCF2 ;~ 01A2:410C
cs=0x1a2;eip=0x004110; 	T(INC(ax));	// 7293 inc     ax ;~ 01A2:4110
cs=0x1a2;eip=0x004111; 	X(PUSH(ax));	// 7294 push    ax ;~ 01A2:4111
cs=0x1a2;eip=0x004112; 	T(MOV(ax, offset(dseg,abmm_0)));	// 7295 mov     ax, offset aBmm_0 ; "bmm" ;~ 01A2:4112
cs=0x1a2;eip=0x004115; 	X(PUSH(ax));	// 7296 push    ax ;~ 01A2:4115
cs=0x1a2;eip=0x004116; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 7297 push    [bp+var_4C] ;~ 01A2:4116
cs=0x1a2;eip=0x004119; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 7298 push    [bp+var_4E] ;~ 01A2:4119
cs=0x1a2;eip=0x00411c; 	R(CALLF(locate_text_res,0));	// 7299 call    locate_text_res ;~ 01A2:411C
cs=0x1a2;eip=0x004121; 	T(ADD(sp, 6));	// 7300 add     sp, 6 ;~ 01A2:4121
cs=0x1a2;eip=0x004124; 	X(PUSH(dx));	// 7301 push    dx ;~ 01A2:4124
cs=0x1a2;eip=0x004125; 	X(PUSH(ax));	// 7302 push    ax ;~ 01A2:4125
cs=0x1a2;eip=0x004126; 	R(CALLF(draw_button,0));	// 7303 call    draw_button ;~ 01A2:4126
cs=0x1a2;eip=0x00412b; 	T(ADD(sp, 0x14));	// 7304 add     sp, 14h ;~ 01A2:412B
cs=0x1a2;eip=0x00412e; 	T(SUB(di, di));	// 7305 sub     di, di ;~ 01A2:412E
loc_14130:
	// 4741 
cs=0x1a2;eip=0x004130; 	T(MOV(ax, di));	// 7308 mov     ax, di ;~ 01A2:4130
cs=0x1a2;eip=0x004132; 	T(SHL(ax, 1));	// 7309 shl     ax, 1 ;~ 01A2:4132
cs=0x1a2;eip=0x004134; 	X(MOV(*(dw*)(raddr(ss,bp+var_9e)), ax));	// 7310 mov     [bp+var_9E], ax ;~ 01A2:4134
cs=0x1a2;eip=0x004138; 	T(MOV(bx, ax));	// 7311 mov     bx, ax ;~ 01A2:4138
cs=0x1a2;eip=0x00413a; 	T(MOV(ax, *(dw*)(((db*)&word_3bcec)+bx)));	// 7312 mov     ax, word_3BCEC[bx] ;~ 01A2:413A
cs=0x1a2;eip=0x00413e; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_9c))));	// 7313 add     ax, [bp+var_9C] ;~ 01A2:413E
cs=0x1a2;eip=0x004142; 	T(ADD(bx, bp));	// 7314 add     bx, bp ;~ 01A2:4142
cs=0x1a2;eip=0x004144; 	X(MOV(*(dw*)(raddr(ds,bx-0x64)), ax));	// 7315 mov     [bx-64h], ax ;~ 01A2:4144
cs=0x1a2;eip=0x004147; 	T(MOV(ax, di));	// 7316 mov     ax, di ;~ 01A2:4147
cs=0x1a2;eip=0x004149; 	T(SHL(ax, 1));	// 7317 shl     ax, 1 ;~ 01A2:4149
cs=0x1a2;eip=0x00414b; 	X(MOV(*(dw*)(raddr(ss,bp+var_9e)), ax));	// 7318 mov     [bp+var_9E], ax ;~ 01A2:414B
cs=0x1a2;eip=0x00414f; 	T(MOV(bx, ax));	// 7319 mov     bx, ax ;~ 01A2:414F
cs=0x1a2;eip=0x004151; 	T(MOV(ax, *(dw*)(((db*)&word_3bcf6)+bx)));	// 7320 mov     ax, word_3BCF6[bx] ;~ 01A2:4151
cs=0x1a2;eip=0x004155; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_9c))));	// 7321 add     ax, [bp+var_9C] ;~ 01A2:4155
cs=0x1a2;eip=0x004159; 	T(ADD(bx, bp));	// 7322 add     bx, bp ;~ 01A2:4159
cs=0x1a2;eip=0x00415b; 	X(MOV(*(dw*)(raddr(ds,bx-0x9A)), ax));	// 7323 mov     [bx-9Ah], ax ;~ 01A2:415B
cs=0x1a2;eip=0x00415f; 	T(INC(di));	// 7324 inc     di ;~ 01A2:415F
cs=0x1a2;eip=0x004160; 	T(CMP(di, 4));	// 7325 cmp     di, 4 ;~ 01A2:4160
cs=0x1a2;eip=0x004163; 	R(JL(loc_14130));	// 7326 jl      short loc_14130 ;~ 01A2:4163
cs=0x1a2;eip=0x004165; 	R(CALLF(check_input,0));	// 7327 call    check_input ;~ 01A2:4165
cs=0x1a2;eip=0x00416a; 	T(MOV(al, *(raddr(ss,bp+var_52))));	// 7328 mov     al, [bp+var_52] ;~ 01A2:416A
cs=0x1a2;eip=0x00416d; 	T(CBW);	// 7329 cbw ;~ 01A2:416D
cs=0x1a2;eip=0x00416e; 	X(PUSH(ax));	// 7330 push    ax ;~ 01A2:416E
cs=0x1a2;eip=0x00416f; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 7331 push    word ptr wndsprite+2 ;~ 01A2:416F
cs=0x1a2;eip=0x004173; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 7332 push    word ptr wndsprite ;~ 01A2:4173
cs=0x1a2;eip=0x004177; 	R(CALLF(sprite_blit_to_video,0));	// 7333 call    sprite_blit_to_video ;~ 01A2:4177
cs=0x1a2;eip=0x00417c; 	T(ADD(sp, 6));	// 7334 add     sp, 6 ;~ 01A2:417C
cs=0x1a2;eip=0x00417f; 	X(MOV(*(raddr(ss,bp+var_52)), 0x0FE));	// 7335 mov     [bp+var_52], 0FEh ; 'þ' ;~ 01A2:417F
cs=0x1a2;eip=0x004183; 	R(CALLF(sprite_copy_2_to_1_2,0));	// 7336 call    sprite_copy_2_to_1_2 ;~ 01A2:4183
loc_14188:
	// 4742 
cs=0x1a2;eip=0x004188; 	T(MOV(al, *(raddr(ss,bp+var_78))));	// 7340 mov     al, [bp+var_78] ;~ 01A2:4188
cs=0x1a2;eip=0x00418b; 	T(CMP(*(raddr(ss,bp+var_92)), al));	// 7341 cmp     [bp+var_92], al ;~ 01A2:418B
cs=0x1a2;eip=0x00418f; 	R(JZ(loc_141dc));	// 7342 jz      short loc_141DC ;~ 01A2:418F
cs=0x1a2;eip=0x004191; 	T(MOV(al, *(raddr(ss,bp+var_92))));	// 7343 mov     al, [bp+var_92] ;~ 01A2:4191
cs=0x1a2;eip=0x004195; 	X(MOV(*(raddr(ss,bp+var_78)), al));	// 7344 mov     [bp+var_78], al ;~ 01A2:4195
cs=0x1a2;eip=0x004198; 	R(CALLF(sprite_copy_2_to_1_2,0));	// 7345 call    sprite_copy_2_to_1_2 ;~ 01A2:4198
cs=0x1a2;eip=0x00419d; 	T(MOV(ax, *(hiscore_buttons_y2)));	// 7346 mov     ax, hiscore_buttons_y2 ;~ 01A2:419D
cs=0x1a2;eip=0x0041a0; 	T(INC(ax));	// 7347 inc     ax ;~ 01A2:41A0
cs=0x1a2;eip=0x0041a1; 	X(PUSH(ax));	// 7348 push    ax ;~ 01A2:41A1
cs=0x1a2;eip=0x0041a2; 	X(PUSH(*(hiscore_buttons_y1)));	// 7349 push    hiscore_buttons_y1 ;~ 01A2:41A2
cs=0x1a2;eip=0x0041a6; 	T(MOV(ax, 0x140));	// 7350 mov     ax, 140h ;~ 01A2:41A6
cs=0x1a2;eip=0x0041a9; 	X(PUSH(ax));	// 7351 push    ax ;~ 01A2:41A9
cs=0x1a2;eip=0x0041aa; 	T(SUB(ax, ax));	// 7352 sub     ax, ax ;~ 01A2:41AA
cs=0x1a2;eip=0x0041ac; 	X(PUSH(ax));	// 7353 push    ax ;~ 01A2:41AC
cs=0x1a2;eip=0x0041ad; 	R(CALLF(sprite_set_1_size,0));	// 7354 call    sprite_set_1_size ;~ 01A2:41AD
cs=0x1a2;eip=0x0041b2; 	T(ADD(sp, 8));	// 7355 add     sp, 8 ;~ 01A2:41B2
cs=0x1a2;eip=0x0041b5; 	R(CALLF(mouse_draw_opaque_check,0));	// 7356 call    mouse_draw_opaque_check ;~ 01A2:41B5
cs=0x1a2;eip=0x0041ba; 	T(LES(bx, wndsprite));	// 7357 les     bx, wndsprite ;~ 01A2:41BA
cs=0x1a2;eip=0x0041be; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 7358 push    word ptr es:[bx+2] ;~ 01A2:41BE
cs=0x1a2;eip=0x0041c2; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 7359 push    word ptr es:[bx] ;~ 01A2:41C2
cs=0x1a2;eip=0x0041c5; 	R(CALLF(sprite_putimage,0));	// 7360 call    sprite_putimage ;~ 01A2:41C5
cs=0x1a2;eip=0x0041ca; 	T(ADD(sp, 4));	// 7361 add     sp, 4 ;~ 01A2:41CA
cs=0x1a2;eip=0x0041cd; 	R(CALLF(mouse_draw_transparent_check,0));	// 7362 call    mouse_draw_transparent_check ;~ 01A2:41CD
cs=0x1a2;eip=0x0041d2; 	R(CALLF(timer_get_delta_alt,0));	// 7363 call    timer_get_delta_alt ;~ 01A2:41D2
cs=0x1a2;eip=0x0041d7; 	R(CALLF(sub_29772,0));	// 7364 call    sub_29772 ;~ 01A2:41D7
loc_141dc:
	// 4743 
cs=0x1a2;eip=0x0041dc; 	X(PUSH(word_407d0));	// 7367 push    word_407D0 ;~ 01A2:41DC
cs=0x1a2;eip=0x0041e0; 	X(PUSH(word_407ce));	// 7368 push    word_407CE ;~ 01A2:41E0
cs=0x1a2;eip=0x0041e4; 	T(MOV(ax, offset(dseg,hiscore_buttons_y2)));	// 7369 mov     ax, offset hiscore_buttons_y2 ;~ 01A2:41E4
cs=0x1a2;eip=0x0041e7; 	X(PUSH(ax));	// 7370 push    ax ;~ 01A2:41E7
cs=0x1a2;eip=0x0041e8; 	T(MOV(ax, offset(dseg,hiscore_buttons_y1)));	// 7371 mov     ax, offset hiscore_buttons_y1 ;~ 01A2:41E8
cs=0x1a2;eip=0x0041eb; 	X(PUSH(ax));	// 7372 push    ax ;~ 01A2:41EB
cs=0x1a2;eip=0x0041ec; 	T(ax = bp+var_9a);	// 7373 lea     ax, [bp+var_9A] ;~ 01A2:41EC
cs=0x1a2;eip=0x0041f0; 	X(PUSH(ax));	// 7374 push    ax ;~ 01A2:41F0
cs=0x1a2;eip=0x0041f1; 	T(ax = bp+var_64);	// 7375 lea     ax, [bp+var_64] ;~ 01A2:41F1
cs=0x1a2;eip=0x0041f4; 	X(PUSH(ax));	// 7376 push    ax ;~ 01A2:41F4
cs=0x1a2;eip=0x0041f5; 	T(MOV(al, *(raddr(ss,bp+var_92))));	// 7377 mov     al, [bp+var_92] ;~ 01A2:41F5
cs=0x1a2;eip=0x0041f9; 	T(CBW);	// 7378 cbw ;~ 01A2:41F9
cs=0x1a2;eip=0x0041fa; 	X(PUSH(ax));	// 7379 push    ax ;~ 01A2:41FA
cs=0x1a2;eip=0x0041fb; 	R(CALLF(mouse_timer_sprite_unk,0));	// 7380 call    mouse_timer_sprite_unk ;~ 01A2:41FB
cs=0x1a2;eip=0x004200; 	T(ADD(sp, 0x0E));	// 7381 add     sp, 0Eh ;~ 01A2:4200
cs=0x1a2;eip=0x004203; 	X(MOV(*(dw*)(raddr(ss,bp+var_72)), ax));	// 7382 mov     [bp+var_72], ax ;~ 01A2:4203
cs=0x1a2;eip=0x004206; 	T(CMP(*(raddr(ss,bp+var_14)), 0));	// 7383 cmp     [bp+var_14], 0 ;~ 01A2:4206
cs=0x1a2;eip=0x00420a; 	R(JZ(loc_1420f));	// 7384 jz      short loc_1420F ;~ 01A2:420A
cs=0x1a2;eip=0x00420c; 	R(JMP(loc_14337));	// 7385 jmp     loc_14337 ;~ 01A2:420C
loc_1420f:
	// 4744 
cs=0x1a2;eip=0x00420f; 	T(CMP(*(raddr(ss,bp+var_18)), 2));	// 7389 cmp     [bp+var_18], 2 ;~ 01A2:420F
cs=0x1a2;eip=0x004213; 	R(JNZ(loc_14218));	// 7390 jnz     short loc_14218 ;~ 01A2:4213
cs=0x1a2;eip=0x004215; 	R(JMP(loc_14337));	// 7391 jmp     loc_14337 ;~ 01A2:4215
loc_14218:
	// 4745 
cs=0x1a2;eip=0x004218; 	X(ADD(*(dw*)(raddr(ss,bp+var_42)), ax));	// 7395 add     [bp+var_42], ax ;~ 01A2:4218
cs=0x1a2;eip=0x00421b; 	T(CMP(*(dw*)(raddr(ss,bp+var_42)), 0x1E));	// 7396 cmp     [bp+var_42], 1Eh ;~ 01A2:421B
cs=0x1a2;eip=0x00421f; 	R(JL(loc_14241));	// 7397 jl      short loc_14241 ;~ 01A2:421F
cs=0x1a2;eip=0x004221; 	X(SUB(*(dw*)(raddr(ss,bp+var_42)), 0x1E));	// 7398 sub     [bp+var_42], 1Eh ;~ 01A2:4221
cs=0x1a2;eip=0x004225; 	X(INC(*(raddr(ss,bp+var_8e))));	// 7399 inc     [bp+var_8E] ;~ 01A2:4225
cs=0x1a2;eip=0x004229; 	T(MOV(al, *(raddr(ss,bp+var_8e))));	// 7400 mov     al, [bp+var_8E] ;~ 01A2:4229
cs=0x1a2;eip=0x00422d; 	T(CBW);	// 7401 cbw ;~ 01A2:422D
cs=0x1a2;eip=0x00422e; 	T(MOV(bx, ax));	// 7402 mov     bx, ax ;~ 01A2:422E
cs=0x1a2;eip=0x004230; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_5a))));	// 7403 add     bx, [bp+var_5A] ;~ 01A2:4230
cs=0x1a2;eip=0x004233; 	T(MOV(es, *(dw*)(raddr(ss,bp+var_58))));	// 7404 mov     es, [bp+var_58] ;~ 01A2:4233
cs=0x1a2;eip=0x004236; 	T(CMP(*(raddr(es,bx)), 0));	// 7405 cmp     byte ptr es:[bx], 0 ;~ 01A2:4236
cs=0x1a2;eip=0x00423a; 	R(JNZ(loc_14241));	// 7406 jnz     short loc_14241 ;~ 01A2:423A
cs=0x1a2;eip=0x00423c; 	X(MOV(*(raddr(ss,bp+var_8e)), 0));	// 7407 mov     [bp+var_8E], 0 ;~ 01A2:423C
loc_14241:
	// 4746 
cs=0x1a2;eip=0x004241; 	T(MOV(al, *(raddr(ss,bp+var_6c))));	// 7411 mov     al, [bp+var_6C] ;~ 01A2:4241
cs=0x1a2;eip=0x004244; 	T(CMP(*(raddr(ss,bp+var_8e)), al));	// 7412 cmp     [bp+var_8E], al ;~ 01A2:4244
cs=0x1a2;eip=0x004248; 	R(JNZ(loc_1424d));	// 7413 jnz     short loc_1424D ;~ 01A2:4248
cs=0x1a2;eip=0x00424a; 	R(JMP(loc_14337));	// 7414 jmp     loc_14337 ;~ 01A2:424A
loc_1424d:
	// 4747 
cs=0x1a2;eip=0x00424d; 	T(MOV(al, *(raddr(ss,bp+var_8e))));	// 7418 mov     al, [bp+var_8E] ;~ 01A2:424D
cs=0x1a2;eip=0x004251; 	X(MOV(*(raddr(ss,bp+var_6c)), al));	// 7419 mov     [bp+var_6C], al ;~ 01A2:4251
cs=0x1a2;eip=0x004254; 	T(CBW);	// 7420 cbw ;~ 01A2:4254
cs=0x1a2;eip=0x004255; 	T(MOV(bx, ax));	// 7421 mov     bx, ax ;~ 01A2:4255
cs=0x1a2;eip=0x004257; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_5a))));	// 7422 add     bx, [bp+var_5A] ;~ 01A2:4257
cs=0x1a2;eip=0x00425a; 	T(MOV(es, *(dw*)(raddr(ss,bp+var_58))));	// 7423 mov     es, [bp+var_58] ;~ 01A2:425A
cs=0x1a2;eip=0x00425d; 	T(MOV(al, *(raddr(es,bx))));	// 7424 mov     al, es:[bx] ;~ 01A2:425D
cs=0x1a2;eip=0x004260; 	T(ADD(al, 0x30));	// 7425 add     al, 30h ; '0' ;~ 01A2:4260
cs=0x1a2;eip=0x004262; 	X(MOV(byte_3bd29, al));	// 7426 mov     byte_3BD29, al ;~ 01A2:4262
cs=0x1a2;eip=0x004265; 	R(CALLF(mouse_draw_opaque_check,0));	// 7427 call    mouse_draw_opaque_check ;~ 01A2:4265
cs=0x1a2;eip=0x00426a; 	T(MOV(ax, offset(dseg,aop01)));	// 7428 mov     ax, offset aOp01 ;~ 01A2:426A
cs=0x1a2;eip=0x00426d; 	X(PUSH(ax));	// 7429 push    ax ;~ 01A2:426D
cs=0x1a2;eip=0x00426e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 7430 push    [bp+var_1A] ;~ 01A2:426E
cs=0x1a2;eip=0x004271; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 7431 push    [bp+var_1C] ;~ 01A2:4271
cs=0x1a2;eip=0x004274; 	R(CALLF(locate_shape_fatal,0));	// 7432 call    locate_shape_fatal ;~ 01A2:4274
cs=0x1a2;eip=0x004279; 	T(ADD(sp, 6));	// 7433 add     sp, 6 ;~ 01A2:4279
cs=0x1a2;eip=0x00427c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56))), ax));	// 7434 mov     word ptr [bp+var_56], ax ;~ 01A2:427C
cs=0x1a2;eip=0x00427f; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56+2))), dx));	// 7435 mov     word ptr [bp+var_56+2], dx ;~ 01A2:427F
cs=0x1a2;eip=0x004282; 	T(CMP(video_flag5_is0, 0));	// 7436 cmp     video_flag5_is0, 0 ;~ 01A2:4282
cs=0x1a2;eip=0x004287; 	R(JZ(loc_142f8));	// 7437 jz      short loc_142F8 ;~ 01A2:4287
cs=0x1a2;eip=0x004289; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_46+2)))));	// 7438 push    word ptr [bp+var_46+2] ;~ 01A2:4289
cs=0x1a2;eip=0x00428c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_46)))));	// 7439 push    word ptr [bp+var_46] ;~ 01A2:428C
cs=0x1a2;eip=0x00428f; 	R(CALLF(sprite_set_1_from_argptr,0));	// 7440 call    sprite_set_1_from_argptr ;~ 01A2:428F
cs=0x1a2;eip=0x004294; 	T(ADD(sp, 4));	// 7441 add     sp, 4 ;~ 01A2:4294
cs=0x1a2;eip=0x004297; 	T(SUB(ax, ax));	// 7442 sub     ax, ax ;~ 01A2:4297
cs=0x1a2;eip=0x004299; 	X(PUSH(ax));	// 7443 push    ax ;~ 01A2:4299
cs=0x1a2;eip=0x00429a; 	X(PUSH(ax));	// 7444 push    ax ;~ 01A2:429A
cs=0x1a2;eip=0x00429b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_56+2)))));	// 7445 push    word ptr [bp+var_56+2] ;~ 01A2:429B
cs=0x1a2;eip=0x00429e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_56)))));	// 7446 push    word ptr [bp+var_56] ;~ 01A2:429E
cs=0x1a2;eip=0x0042a1; 	R(CALLF(shape2d_op_unk5,0));	// 7447 call    shape2d_op_unk5 ;~ 01A2:42A1
cs=0x1a2;eip=0x0042a6; 	T(ADD(sp, 8));	// 7448 add     sp, 8 ;~ 01A2:42A6
cs=0x1a2;eip=0x0042a9; 	R(CALLF(sprite_copy_2_to_1_2,0));	// 7449 call    sprite_copy_2_to_1_2 ;~ 01A2:42A9
cs=0x1a2;eip=0x0042ae; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_56))));	// 7450 les     bx, [bp+var_56] ;~ 01A2:42AE
cs=0x1a2;eip=0x0042b1; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 7451 mov     ax, es:[bx+2] ;~ 01A2:42B1
cs=0x1a2;eip=0x0042b5; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_90))));	// 7452 add     ax, [bp+var_90] ;~ 01A2:42B5
cs=0x1a2;eip=0x0042b9; 	X(PUSH(ax));	// 7453 push    ax ;~ 01A2:42B9
cs=0x1a2;eip=0x0042ba; 	X(PUSH(*(dw*)(raddr(ss,bp+var_90))));	// 7454 push    [bp+var_90] ;~ 01A2:42BA
cs=0x1a2;eip=0x0042be; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 7455 mov     ax, es:[bx] ;~ 01A2:42BE
cs=0x1a2;eip=0x0042c1; 	X(IMUL1_2(video_flag1_is1));	// 7456 imul    video_flag1_is1 ;~ 01A2:42C1
cs=0x1a2;eip=0x0042c5; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_8c))));	// 7457 add     ax, [bp+var_8C] ;~ 01A2:42C5
cs=0x1a2;eip=0x0042c9; 	X(PUSH(ax));	// 7458 push    ax ;~ 01A2:42C9
cs=0x1a2;eip=0x0042ca; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8c))));	// 7459 push    [bp+var_8C] ;~ 01A2:42CA
cs=0x1a2;eip=0x0042ce; 	R(CALLF(sprite_set_1_size,0));	// 7460 call    sprite_set_1_size ;~ 01A2:42CE
cs=0x1a2;eip=0x0042d3; 	T(ADD(sp, 8));	// 7461 add     sp, 8 ;~ 01A2:42D3
cs=0x1a2;eip=0x0042d6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_90))));	// 7462 push    [bp+var_90] ;~ 01A2:42D6
cs=0x1a2;eip=0x0042da; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8c))));	// 7463 push    [bp+var_8C] ;~ 01A2:42DA
cs=0x1a2;eip=0x0042de; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_46))));	// 7464 les     bx, [bp+var_46] ;~ 01A2:42DE
cs=0x1a2;eip=0x0042e1; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 7465 push    word ptr es:[bx+2] ;~ 01A2:42E1
cs=0x1a2;eip=0x0042e5; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 7466 push    word ptr es:[bx] ;~ 01A2:42E5
cs=0x1a2;eip=0x0042e8; 	R(CALLF(sprite_putimage_and_alt,0));	// 7467 call    sprite_putimage_and_alt ;~ 01A2:42E8
cs=0x1a2;eip=0x0042ed; 	T(ADD(sp, 8));	// 7468 add     sp, 8 ;~ 01A2:42ED
cs=0x1a2;eip=0x0042f0; 	R(CALLF(sprite_copy_2_to_1_2,0));	// 7469 call    sprite_copy_2_to_1_2 ;~ 01A2:42F0
cs=0x1a2;eip=0x0042f5; 	R(JMP(loc_1430e));	// 7470 jmp     short loc_1430E ;~ 01A2:42F5
loc_142f8:
	// 4748 
cs=0x1a2;eip=0x0042f8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_90))));	// 7475 push    [bp+var_90] ;~ 01A2:42F8
cs=0x1a2;eip=0x0042fc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8c))));	// 7476 push    [bp+var_8C] ;~ 01A2:42FC
cs=0x1a2;eip=0x004300; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_56+2)))));	// 7477 push    word ptr [bp+var_56+2] ;~ 01A2:4300
cs=0x1a2;eip=0x004303; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_56)))));	// 7478 push    word ptr [bp+var_56] ;~ 01A2:4303
cs=0x1a2;eip=0x004306; 	R(CALLF(shape2d_op_unk5,0));	// 7479 call    shape2d_op_unk5 ;~ 01A2:4306
cs=0x1a2;eip=0x00430b; 	T(ADD(sp, 8));	// 7480 add     sp, 8 ;~ 01A2:430B
loc_1430e:
	// 4749 
cs=0x1a2;eip=0x00430e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_90))));	// 7483 push    [bp+var_90] ;~ 01A2:430E
cs=0x1a2;eip=0x004312; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8c))));	// 7484 push    [bp+var_8C] ;~ 01A2:4312
cs=0x1a2;eip=0x004316; 	T(MOV(ax, offset(dseg,aop01)));	// 7485 mov     ax, offset aOp01 ;~ 01A2:4316
cs=0x1a2;eip=0x004319; 	X(PUSH(ax));	// 7486 push    ax ;~ 01A2:4319
cs=0x1a2;eip=0x00431a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 7487 push    [bp+var_1A] ;~ 01A2:431A
cs=0x1a2;eip=0x00431d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 7488 push    [bp+var_1C] ;~ 01A2:431D
cs=0x1a2;eip=0x004320; 	R(CALLF(locate_shape_fatal,0));	// 7489 call    locate_shape_fatal ;~ 01A2:4320
cs=0x1a2;eip=0x004325; 	T(ADD(sp, 6));	// 7490 add     sp, 6 ;~ 01A2:4325
cs=0x1a2;eip=0x004328; 	X(PUSH(dx));	// 7491 push    dx ;~ 01A2:4328
cs=0x1a2;eip=0x004329; 	X(PUSH(ax));	// 7492 push    ax ;~ 01A2:4329
cs=0x1a2;eip=0x00432a; 	R(CALLF(shape2d_op_unk5,0));	// 7493 call    shape2d_op_unk5 ;~ 01A2:432A
cs=0x1a2;eip=0x00432f; 	T(ADD(sp, 8));	// 7494 add     sp, 8 ;~ 01A2:432F
cs=0x1a2;eip=0x004332; 	R(CALLF(mouse_draw_transparent_check,0));	// 7495 call    mouse_draw_transparent_check ;~ 01A2:4332
loc_14337:
	// 4750 
cs=0x1a2;eip=0x004337; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 7499 cmp     [bp+var_16], 0 ;~ 01A2:4337
cs=0x1a2;eip=0x00433b; 	R(JZ(loc_14343));	// 7500 jz      short loc_14343 ;~ 01A2:433B
cs=0x1a2;eip=0x00433d; 	T(CMP(*(raddr(ss,bp+var_6e)), 0x0FF));	// 7501 cmp     [bp+var_6E], 0FFh ;~ 01A2:433D
cs=0x1a2;eip=0x004341; 	R(JNZ(loc_1436c));	// 7502 jnz     short loc_1436C ;~ 01A2:4341
loc_14343:
	// 4751 
cs=0x1a2;eip=0x004343; 	T(MOV(ax, offset(dseg,hiscore_buttons_y2)+2));	// 7505 mov     ax, (offset hiscore_buttons_y2+2) ; references the last three y pos in the array ;~ 01A2:4343
cs=0x1a2;eip=0x004346; 	X(PUSH(ax));	// 7506 push    ax ;~ 01A2:4346
cs=0x1a2;eip=0x004347; 	T(MOV(ax, offset(dseg,hiscore_buttons_y1)+2));	// 7507 mov     ax, (offset hiscore_buttons_y1+2) ; ditto ;~ 01A2:4347
cs=0x1a2;eip=0x00434a; 	X(PUSH(ax));	// 7508 push    ax ;~ 01A2:434A
cs=0x1a2;eip=0x00434b; 	T(ax = bp+var_98);	// 7509 lea     ax, [bp+var_98] ;~ 01A2:434B
cs=0x1a2;eip=0x00434f; 	X(PUSH(ax));	// 7510 push    ax ;~ 01A2:434F
cs=0x1a2;eip=0x004350; 	T(ax = bp+var_62);	// 7511 lea     ax, [bp+var_62] ;~ 01A2:4350
cs=0x1a2;eip=0x004353; 	X(PUSH(ax));	// 7512 push    ax ;~ 01A2:4353
cs=0x1a2;eip=0x004354; 	T(MOV(ax, 3));	// 7513 mov     ax, 3 ;~ 01A2:4354
cs=0x1a2;eip=0x004357; 	X(PUSH(ax));	// 7514 push    ax ;~ 01A2:4357
cs=0x1a2;eip=0x004358; 	R(CALLF(mouse_multi_hittest,0));	// 7515 call    mouse_multi_hittest ;~ 01A2:4358
cs=0x1a2;eip=0x00435d; 	T(ADD(sp, 0x0A));	// 7516 add     sp, 0Ah ;~ 01A2:435D
cs=0x1a2;eip=0x004360; 	X(MOV(*(raddr(ss,bp+var_82)), al));	// 7517 mov     [bp+var_82], al ;~ 01A2:4360
cs=0x1a2;eip=0x004364; 	T(CMP(al, 0x0FF));	// 7518 cmp     al, 0FFh ;~ 01A2:4364
cs=0x1a2;eip=0x004366; 	R(JZ(loc_14395));	// 7519 jz      short loc_14395 ;~ 01A2:4366
cs=0x1a2;eip=0x004368; 	T(INC(al));	// 7520 inc     al ;~ 01A2:4368
cs=0x1a2;eip=0x00436a; 	R(JMP(loc_14391));	// 7521 jmp     short loc_14391 ;~ 01A2:436A
loc_1436c:
	// 4752 
cs=0x1a2;eip=0x00436c; 	T(MOV(ax, offset(dseg,hiscore_buttons_y2)));	// 7525 mov     ax, offset hiscore_buttons_y2 ;~ 01A2:436C
cs=0x1a2;eip=0x00436f; 	X(PUSH(ax));	// 7526 push    ax ;~ 01A2:436F
cs=0x1a2;eip=0x004370; 	T(MOV(ax, offset(dseg,hiscore_buttons_y1)));	// 7527 mov     ax, offset hiscore_buttons_y1 ;~ 01A2:4370
cs=0x1a2;eip=0x004373; 	X(PUSH(ax));	// 7528 push    ax ;~ 01A2:4373
cs=0x1a2;eip=0x004374; 	T(ax = bp+var_9a);	// 7529 lea     ax, [bp+var_9A] ;~ 01A2:4374
cs=0x1a2;eip=0x004378; 	X(PUSH(ax));	// 7530 push    ax ;~ 01A2:4378
cs=0x1a2;eip=0x004379; 	T(ax = bp+var_64);	// 7531 lea     ax, [bp+var_64] ;~ 01A2:4379
cs=0x1a2;eip=0x00437c; 	X(PUSH(ax));	// 7532 push    ax ;~ 01A2:437C
cs=0x1a2;eip=0x00437d; 	T(MOV(ax, 4));	// 7533 mov     ax, 4 ;~ 01A2:437D
cs=0x1a2;eip=0x004380; 	X(PUSH(ax));	// 7534 push    ax ;~ 01A2:4380
cs=0x1a2;eip=0x004381; 	R(CALLF(mouse_multi_hittest,0));	// 7535 call    mouse_multi_hittest ;~ 01A2:4381
cs=0x1a2;eip=0x004386; 	T(ADD(sp, 0x0A));	// 7536 add     sp, 0Ah ;~ 01A2:4386
cs=0x1a2;eip=0x004389; 	X(MOV(*(raddr(ss,bp+var_82)), al));	// 7537 mov     [bp+var_82], al ;~ 01A2:4389
cs=0x1a2;eip=0x00438d; 	T(CMP(al, 0x0FF));	// 7538 cmp     al, 0FFh ;~ 01A2:438D
cs=0x1a2;eip=0x00438f; 	R(JZ(loc_14395));	// 7539 jz      short loc_14395 ;~ 01A2:438F
loc_14391:
	// 4753 
cs=0x1a2;eip=0x004391; 	X(MOV(*(raddr(ss,bp+var_92)), al));	// 7542 mov     [bp+var_92], al ;~ 01A2:4391
loc_14395:
	// 4754 
cs=0x1a2;eip=0x004395; 	X(PUSH(*(dw*)(raddr(ss,bp+var_72))));	// 7546 push    [bp+var_72] ;~ 01A2:4395
cs=0x1a2;eip=0x004398; 	R(CALLF(input_checking,0));	// 7547 call    input_checking ;~ 01A2:4398
cs=0x1a2;eip=0x00439d; 	T(ADD(sp, 2));	// 7548 add     sp, 2 ;~ 01A2:439D
cs=0x1a2;eip=0x0043a0; 	T(MOV(si, ax));	// 7549 mov     si, ax ;~ 01A2:43A0
cs=0x1a2;eip=0x0043a2; 	T(OR(si, si));	// 7550 or      si, si ;~ 01A2:43A2
cs=0x1a2;eip=0x0043a4; 	R(JNZ(loc_143a9));	// 7551 jnz     short loc_143A9 ;~ 01A2:43A4
cs=0x1a2;eip=0x0043a6; 	R(JMP(loc_14188));	// 7552 jmp     loc_14188 ;~ 01A2:43A6
loc_143a9:
	// 4755 
cs=0x1a2;eip=0x0043a9; 	T(CMP(ax, 0x0D));	// 7556 cmp     ax, 0Dh         ; enter ;~ 01A2:43A9
cs=0x1a2;eip=0x0043ac; 	R(JZ(loc_143c6));	// 7557 jz      short loc_143C6 ;~ 01A2:43AC
cs=0x1a2;eip=0x0043ae; 	T(CMP(ax, 0x20));	// 7558 cmp     ax, 20h ; ' '   ; space ;~ 01A2:43AE
cs=0x1a2;eip=0x0043b1; 	R(JZ(loc_143c6));	// 7559 jz      short loc_143C6 ;~ 01A2:43B1
cs=0x1a2;eip=0x0043b3; 	T(CMP(ax, 0x4B00));	// 7560 cmp     ax, 4B00h ;~ 01A2:43B3
cs=0x1a2;eip=0x0043b6; 	R(JNZ(loc_143bb));	// 7561 jnz     short loc_143BB ;~ 01A2:43B6
cs=0x1a2;eip=0x0043b8; 	R(JMP(loc_1447a));	// 7562 jmp     loc_1447A ;~ 01A2:43B8
loc_143bb:
	// 4756 
cs=0x1a2;eip=0x0043bb; 	T(CMP(ax, 0x4D00));	// 7566 cmp     ax, 4D00h ;~ 01A2:43BB
cs=0x1a2;eip=0x0043be; 	R(JNZ(loc_143c3));	// 7567 jnz     short loc_143C3 ;~ 01A2:43BE
cs=0x1a2;eip=0x0043c0; 	R(JMP(loc_144a4));	// 7568 jmp     loc_144A4 ;~ 01A2:43C0
loc_143c3:
	// 4757 
cs=0x1a2;eip=0x0043c3; 	R(JMP(loc_14188));	// 7572 jmp     loc_14188 ;~ 01A2:43C3
loc_143c6:
	// 4758 
cs=0x1a2;eip=0x0043c6; 	T(CMP(*(raddr(ss,bp+var_92)), 0));	// 7577 cmp     [bp+var_92], 0 ;~ 01A2:43C6
cs=0x1a2;eip=0x0043cb; 	R(JNZ(loc_1440c));	// 7578 jnz     short loc_1440C ;~ 01A2:43CB
cs=0x1a2;eip=0x0043cd; 	R(CALLF(sprite_copy_wnd_to_1,0));	// 7579 call    sprite_copy_wnd_to_1 ;~ 01A2:43CD
cs=0x1a2;eip=0x0043d2; 	T(SUB(ax, ax));	// 7580 sub     ax, ax ;~ 01A2:43D2
cs=0x1a2;eip=0x0043d4; 	X(PUSH(ax));	// 7581 push    ax ;~ 01A2:43D4
cs=0x1a2;eip=0x0043d5; 	X(PUSH(word_407f8));	// 7582 push    word_407F8 ;~ 01A2:43D5
cs=0x1a2;eip=0x0043d9; 	X(PUSH(word_407f6));	// 7583 push    word_407F6 ;~ 01A2:43D9
cs=0x1a2;eip=0x0043dd; 	X(PUSH(word_407f4));	// 7584 push    word_407F4 ;~ 01A2:43DD
cs=0x1a2;eip=0x0043e1; 	T(MOV(ax, 0x64));	// 7585 mov     ax, 64h ; 'd' ;~ 01A2:43E1
cs=0x1a2;eip=0x0043e4; 	X(PUSH(ax));	// 7586 push    ax ;~ 01A2:43E4
cs=0x1a2;eip=0x0043e5; 	T(MOV(ax, 0x140));	// 7587 mov     ax, 140h ;~ 01A2:43E5
cs=0x1a2;eip=0x0043e8; 	X(PUSH(ax));	// 7588 push    ax ;~ 01A2:43E8
cs=0x1a2;eip=0x0043e9; 	T(SUB(ax, ax));	// 7589 sub     ax, ax ;~ 01A2:43E9
cs=0x1a2;eip=0x0043eb; 	X(PUSH(ax));	// 7590 push    ax ;~ 01A2:43EB
cs=0x1a2;eip=0x0043ec; 	X(PUSH(ax));	// 7591 push    ax ;~ 01A2:43EC
cs=0x1a2;eip=0x0043ed; 	X(PUSH(ax));	// 7592 push    ax ;~ 01A2:43ED
cs=0x1a2;eip=0x0043ee; 	X(PUSH(ax));	// 7593 push    ax ;~ 01A2:43EE
cs=0x1a2;eip=0x0043ef; 	R(CALLF(draw_button,0));	// 7594 call    draw_button ;~ 01A2:43EF
cs=0x1a2;eip=0x0043f4; 	T(ADD(sp, 0x14));	// 7595 add     sp, 14h ;~ 01A2:43F4
cs=0x1a2;eip=0x0043f7; 	T(CMP(*(raddr(ss,bp+var_14)), 0));	// 7596 cmp     [bp+var_14], 0 ;~ 01A2:43F7
cs=0x1a2;eip=0x0043fb; 	R(JZ(loc_14404));	// 7597 jz      short loc_14404 ;~ 01A2:43FB
cs=0x1a2;eip=0x0043fd; 	X(MOV(*(raddr(ss,bp+var_6e)), 0));	// 7598 mov     [bp+var_6E], 0 ;~ 01A2:43FD
cs=0x1a2;eip=0x004401; 	R(JMP(loc_13a1d));	// 7599 jmp     loc_13A1D ;~ 01A2:4401
loc_14404:
	// 4759 
cs=0x1a2;eip=0x004404; 	X(MOV(*(raddr(ss,bp+var_6e)), 2));	// 7603 mov     [bp+var_6E], 2 ;~ 01A2:4404
cs=0x1a2;eip=0x004408; 	R(JMP(loc_13a1d));	// 7604 jmp     loc_13A1D ;~ 01A2:4408
loc_1440c:
	// 4760 
cs=0x1a2;eip=0x00440c; 	R(CALLF(audio_unload,0));	// 7609 call    audio_unload ;~ 01A2:440C
cs=0x1a2;eip=0x004411; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 7610 cmp     [bp+var_16], 0 ;~ 01A2:4411
cs=0x1a2;eip=0x004415; 	R(JZ(loc_14425));	// 7611 jz      short loc_14425 ;~ 01A2:4415
cs=0x1a2;eip=0x004417; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 7612 push    [bp+var_1A] ;~ 01A2:4417
cs=0x1a2;eip=0x00441a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 7613 push    [bp+var_1C] ;~ 01A2:441A
cs=0x1a2;eip=0x00441d; 	R(CALLF(mmgr_release,0));	// 7614 call    mmgr_release ;~ 01A2:441D
cs=0x1a2;eip=0x004422; 	T(ADD(sp, 4));	// 7615 add     sp, 4 ;~ 01A2:4422
loc_14425:
	// 4761 
cs=0x1a2;eip=0x004425; 	T(CMP(video_flag5_is0, 0));	// 7618 cmp     video_flag5_is0, 0 ;~ 01A2:4425
cs=0x1a2;eip=0x00442a; 	R(JZ(loc_1443a));	// 7619 jz      short loc_1443A ;~ 01A2:442A
cs=0x1a2;eip=0x00442c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_46+2)))));	// 7620 push    word ptr [bp+var_46+2] ;~ 01A2:442C
cs=0x1a2;eip=0x00442f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_46)))));	// 7621 push    word ptr [bp+var_46] ;~ 01A2:442F
cs=0x1a2;eip=0x004432; 	R(CALLF(sprite_free_wnd,0));	// 7622 call    sprite_free_wnd ;~ 01A2:4432
cs=0x1a2;eip=0x004437; 	T(ADD(sp, 4));	// 7623 add     sp, 4 ;~ 01A2:4437
loc_1443a:
	// 4762 
cs=0x1a2;eip=0x00443a; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 7626 push    word ptr wndsprite+2 ;~ 01A2:443A
cs=0x1a2;eip=0x00443e; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 7627 push    word ptr wndsprite ;~ 01A2:443E
cs=0x1a2;eip=0x004442; 	R(CALLF(sprite_free_wnd,0));	// 7628 call    sprite_free_wnd ;~ 01A2:4442
cs=0x1a2;eip=0x004447; 	T(ADD(sp, 4));	// 7629 add     sp, 4 ;~ 01A2:4447
cs=0x1a2;eip=0x00444a; 	T(CMP(byte_449aa, 0));	// 7630 cmp     byte_449AA, 0 ;~ 01A2:444A
cs=0x1a2;eip=0x00444f; 	R(JZ(loc_1445f));	// 7631 jz      short loc_1445F ;~ 01A2:444F
cs=0x1a2;eip=0x004451; 	X(PUSH(*(dw*)(raddr(ss,bp+var_66))));	// 7632 push    [bp+var_66] ;~ 01A2:4451
cs=0x1a2;eip=0x004454; 	X(PUSH(*(dw*)(raddr(ss,bp+var_68))));	// 7633 push    [bp+var_68] ;~ 01A2:4454
cs=0x1a2;eip=0x004457; 	R(CALLF(unload_resource,0));	// 7634 call    unload_resource ;~ 01A2:4457
cs=0x1a2;eip=0x00445c; 	T(ADD(sp, 4));	// 7635 add     sp, 4 ;~ 01A2:445C
loc_1445f:
	// 4763 
cs=0x1a2;eip=0x00445f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 7638 push    [bp+var_4C] ;~ 01A2:445F
cs=0x1a2;eip=0x004462; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 7639 push    [bp+var_4E] ;~ 01A2:4462
cs=0x1a2;eip=0x004465; 	R(CALLF(unload_resource,0));	// 7640 call    unload_resource ;~ 01A2:4465
cs=0x1a2;eip=0x00446a; 	T(ADD(sp, 4));	// 7641 add     sp, 4 ;~ 01A2:446A
cs=0x1a2;eip=0x00446d; 	T(MOV(al, *(raddr(ss,bp+var_92))));	// 7642 mov     al, [bp+var_92] ;~ 01A2:446D
cs=0x1a2;eip=0x004471; 	T(CBW);	// 7643 cbw ;~ 01A2:4471
cs=0x1a2;eip=0x004472; 	T(DEC(ax));	// 7644 dec     ax ;~ 01A2:4472
cs=0x1a2;eip=0x004473; 	X(POP(si));	// 7645 pop     si ;~ 01A2:4473
cs=0x1a2;eip=0x004474; 	X(POP(di));	// 7646 pop     di ;~ 01A2:4474
cs=0x1a2;eip=0x004475; 	T(MOV(sp, bp));	// 7647 mov     sp, bp ;~ 01A2:4475
cs=0x1a2;eip=0x004477; 	X(POP(bp));	// 7648 pop     bp ;~ 01A2:4477
cs=0x1a2;eip=0x004478; 	R(RETF(0));	// 7649 retf ;~ 01A2:4478
loc_1447a:
	// 4764 
cs=0x1a2;eip=0x00447a; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 7654 cmp     [bp+var_16], 0 ;~ 01A2:447A
cs=0x1a2;eip=0x00447e; 	R(JZ(loc_14486));	// 7655 jz      short loc_14486 ;~ 01A2:447E
cs=0x1a2;eip=0x004480; 	T(CMP(*(raddr(ss,bp+var_6e)), 0x0FF));	// 7656 cmp     [bp+var_6E], 0FFh ;~ 01A2:4480
cs=0x1a2;eip=0x004484; 	R(JNZ(loc_14496));	// 7657 jnz     short loc_14496 ;~ 01A2:4484
loc_14486:
	// 4765 
cs=0x1a2;eip=0x004486; 	T(CMP(*(raddr(ss,bp+var_92)), 1));	// 7660 cmp     [bp+var_92], 1 ;~ 01A2:4486
cs=0x1a2;eip=0x00448b; 	R(JG(loc_1449d));	// 7661 jg      short loc_1449D ;~ 01A2:448B
loc_1448d:
	// 4766 
cs=0x1a2;eip=0x00448d; 	X(MOV(*(raddr(ss,bp+var_92)), 3));	// 7664 mov     [bp+var_92], 3 ;~ 01A2:448D
cs=0x1a2;eip=0x004492; 	R(JMP(loc_14188));	// 7665 jmp     loc_14188 ;~ 01A2:4492
loc_14496:
	// 4767 
cs=0x1a2;eip=0x004496; 	T(CMP(*(raddr(ss,bp+var_92)), 0));	// 7670 cmp     [bp+var_92], 0 ;~ 01A2:4496
cs=0x1a2;eip=0x00449b; 	R(JZ(loc_1448d));	// 7671 jz      short loc_1448D ;~ 01A2:449B
loc_1449d:
	// 4768 
cs=0x1a2;eip=0x00449d; 	X(DEC(*(raddr(ss,bp+var_92))));	// 7674 dec     [bp+var_92] ;~ 01A2:449D
cs=0x1a2;eip=0x0044a1; 	R(JMP(loc_14188));	// 7675 jmp     loc_14188 ;~ 01A2:44A1
loc_144a4:
	// 4769 
cs=0x1a2;eip=0x0044a4; 	T(CMP(*(raddr(ss,bp+var_92)), 3));	// 7679 cmp     [bp+var_92], 3 ;~ 01A2:44A4
cs=0x1a2;eip=0x0044a9; 	R(JGE(loc_144b2));	// 7680 jge     short loc_144B2 ;~ 01A2:44A9
cs=0x1a2;eip=0x0044ab; 	X(INC(*(raddr(ss,bp+var_92))));	// 7681 inc     [bp+var_92] ;~ 01A2:44AB
cs=0x1a2;eip=0x0044af; 	R(JMP(loc_14188));	// 7682 jmp     loc_14188 ;~ 01A2:44AF
loc_144b2:
	// 4770 
cs=0x1a2;eip=0x0044b2; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 7686 cmp     [bp+var_16], 0 ;~ 01A2:44B2
cs=0x1a2;eip=0x0044b6; 	R(JZ(loc_144be));	// 7687 jz      short loc_144BE ;~ 01A2:44B6
cs=0x1a2;eip=0x0044b8; 	T(CMP(*(raddr(ss,bp+var_6e)), 0x0FF));	// 7688 cmp     [bp+var_6E], 0FFh ;~ 01A2:44B8
cs=0x1a2;eip=0x0044bc; 	R(JNZ(loc_144c6));	// 7689 jnz     short loc_144C6 ;~ 01A2:44BC
loc_144be:
	// 4771 
cs=0x1a2;eip=0x0044be; 	X(MOV(*(raddr(ss,bp+var_92)), 1));	// 7692 mov     [bp+var_92], 1 ;~ 01A2:44BE
cs=0x1a2;eip=0x0044c3; 	R(JMP(loc_14188));	// 7693 jmp     loc_14188 ;~ 01A2:44C3
loc_144c6:
	// 4772 
cs=0x1a2;eip=0x0044c6; 	X(MOV(*(raddr(ss,bp+var_92)), 0));	// 7697 mov     [bp+var_92], 0 ;~ 01A2:44C6
cs=0x1a2;eip=0x0044cb; 	R(JMP(loc_14188));	// 7698 jmp     loc_14188 ;~ 01A2:44CB
seg000_44ce_proc:
	// 7702 
cs=0x1a2;eip=0x0044ce; 	X(POP(si));	// 7702 pop     si ;~ 01A2:44CE
security_check:
	// 7708 
#undef var_440
#define var_440 -0x440
	// 7710 var_440         = byte ptr -440h ;~ 01A2:44CF
#undef var_43e
#define var_43e -0x43E
	// 7711 var_43E         = byte ptr -43Eh ;~ 01A2:44CF
#undef var_428
#define var_428 -0x428
	// 7712 var_428         = dword ptr -428h ;~ 01A2:44CF
#undef var_424
#define var_424 -0x424
	// 7713 var_424         = word ptr -424h ;~ 01A2:44CF
#undef var_422
#define var_422 -0x422
	// 7714 var_422         = word ptr -422h ;~ 01A2:44CF
#undef var_420
#define var_420 -0x420
	// 7715 var_420         = word ptr -420h ;~ 01A2:44CF
#undef var_41e
#define var_41e -0x41E
	// 7716 var_41E         = word ptr -41Eh ;~ 01A2:44CF
#undef var_41c
#define var_41c -0x41C
	// 7717 var_41C         = word ptr -41Ch ;~ 01A2:44CF
#undef var_41a
#define var_41a -0x41A
	// 7718 var_41A         = word ptr -41Ah ;~ 01A2:44CF
#undef var_40e
#define var_40e -0x40E
	// 7719 var_40E         = word ptr -40Eh ;~ 01A2:44CF
#undef var_40c
#define var_40c -0x40C
	// 7720 var_40C         = word ptr -40Ch ;~ 01A2:44CF
#undef var_40a
#define var_40a -0x40A
	// 7721 var_40A         = word ptr -40Ah ;~ 01A2:44CF
#undef var_408
#define var_408 -0x408
	// 7722 var_408         = word ptr -408h ;~ 01A2:44CF
#undef var_406
#define var_406 -0x406
	// 7723 var_406         = byte ptr -406h ;~ 01A2:44CF
#undef var_405
#define var_405 -0x405
	// 7724 var_405         = byte ptr -405h ;~ 01A2:44CF
#undef var_404
#define var_404 -0x404
	// 7725 var_404         = byte ptr -404h ;~ 01A2:44CF
#undef var_403
#define var_403 -0x403
	// 7726 var_403         = byte ptr -403h ;~ 01A2:44CF
#undef var_402
#define var_402 -0x402
	// 7727 var_402         = byte ptr -402h ;~ 01A2:44CF
#undef var_401
#define var_401 -0x401
	// 7728 var_401         = byte ptr -401h ;~ 01A2:44CF
#undef var_400
#define var_400 -0x400
	// 7729 var_400         = byte ptr -400h ;~ 01A2:44CF
#undef arg_0
#define arg_0 6
	// 7730 arg_0           = word ptr  6 ;~ 01A2:44CF
ret_1a2_44cf:
	// 4773 
cs=0x1a2;eip=0x0044cf; 	X(PUSH(bp));	// 7732 push    bp ;~ 01A2:44CF
cs=0x1a2;eip=0x0044d0; 	T(MOV(bp, sp));	// 7733 mov     bp, sp ;~ 01A2:44D0
cs=0x1a2;eip=0x0044d2; 	T(SUB(sp, 0x440));	// 7734 sub     sp, 440h ;~ 01A2:44D2
cs=0x1a2;eip=0x0044d6; 	X(PUSH(si));	// 7735 push    si              ; int ;~ 01A2:44D6
cs=0x1a2;eip=0x0044d7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 7736 mov     bx, [bp+arg_0] ;~ 01A2:44D7
cs=0x1a2;eip=0x0044da; 	T(MOV(al, *((&byte_3bd34)+bx)));	// 7737 mov     al, byte_3BD34[bx] ;~ 01A2:44DA
cs=0x1a2;eip=0x0044de; 	X(MOV(byte_3bd4c, al));	// 7738 mov     byte_3BD4C, al ;~ 01A2:44DE
cs=0x1a2;eip=0x0044e1; 	T(MOV(al, *((&byte_3bd34)+bx)));	// 7739 mov     al, byte_3BD34[bx] ;~ 01A2:44E1
cs=0x1a2;eip=0x0044e5; 	X(MOV(byte_3bd50, al));	// 7740 mov     byte_3BD50, al ;~ 01A2:44E5
cs=0x1a2;eip=0x0044e8; 	T(MOV(ax, offset(dseg,amisc_3)));	// 7741 mov     ax, offset aMisc_3 ; "misc" ;~ 01A2:44E8
cs=0x1a2;eip=0x0044eb; 	X(PUSH(ax));	// 7742 push    ax ;~ 01A2:44EB
cs=0x1a2;eip=0x0044ec; 	R(CALLF(file_load_resfile,0));	// 7743 call    file_load_resfile ;~ 01A2:44EC
cs=0x1a2;eip=0x0044f1; 	T(ADD(sp, 2));	// 7744 add     sp, 2 ;~ 01A2:44F1
cs=0x1a2;eip=0x0044f4; 	X(MOV(*(dw*)(raddr(ss,bp+var_40c)), ax));	// 7745 mov     [bp+var_40C], ax ;~ 01A2:44F4
cs=0x1a2;eip=0x0044f8; 	X(MOV(*(dw*)(raddr(ss,bp+var_40a)), dx));	// 7746 mov     [bp+var_40A], dx ;~ 01A2:44F8
cs=0x1a2;eip=0x0044fc; 	T(MOV(ax, offset(dseg,acop_0)));	// 7747 mov     ax, offset aCop_0 ; "cop" ;~ 01A2:44FC
cs=0x1a2;eip=0x0044ff; 	X(PUSH(ax));	// 7748 push    ax ;~ 01A2:44FF
cs=0x1a2;eip=0x004500; 	X(PUSH(dx));	// 7749 push    dx ;~ 01A2:4500
cs=0x1a2;eip=0x004501; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40c))));	// 7750 push    [bp+var_40C] ;~ 01A2:4501
cs=0x1a2;eip=0x004505; 	R(CALLF(locate_text_res,0));	// 7751 call    locate_text_res ;~ 01A2:4505
cs=0x1a2;eip=0x00450a; 	T(ADD(sp, 6));	// 7752 add     sp, 6 ;~ 01A2:450A
cs=0x1a2;eip=0x00450d; 	X(PUSH(dx));	// 7753 push    dx ;~ 01A2:450D
cs=0x1a2;eip=0x00450e; 	X(PUSH(ax));	// 7754 push    ax ;~ 01A2:450E
cs=0x1a2;eip=0x00450f; 	T(ax = bp+var_400);	// 7755 lea     ax, [bp+var_400] ;~ 01A2:450F
cs=0x1a2;eip=0x004513; 	X(PUSH(ax));	// 7756 push    ax ;~ 01A2:4513
cs=0x1a2;eip=0x004514; 	R(CALLF(copy_string,0));	// 7757 call    copy_string ;~ 01A2:4514
cs=0x1a2;eip=0x004519; 	T(ADD(sp, 6));	// 7758 add     sp, 6 ;~ 01A2:4519
cs=0x1a2;eip=0x00451c; 	T(MOV(ax, offset(dseg,aq00)));	// 7759 mov     ax, offset aQ00 ;~ 01A2:451C
cs=0x1a2;eip=0x00451f; 	X(PUSH(ax));	// 7760 push    ax ;~ 01A2:451F
cs=0x1a2;eip=0x004520; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40a))));	// 7761 push    [bp+var_40A] ;~ 01A2:4520
cs=0x1a2;eip=0x004524; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40c))));	// 7762 push    [bp+var_40C] ;~ 01A2:4524
cs=0x1a2;eip=0x004528; 	R(CALLF(locate_text_res,0));	// 7763 call    locate_text_res ;~ 01A2:4528
cs=0x1a2;eip=0x00452d; 	T(ADD(sp, 6));	// 7764 add     sp, 6 ;~ 01A2:452D
cs=0x1a2;eip=0x004530; 	X(PUSH(dx));	// 7765 push    dx ;~ 01A2:4530
cs=0x1a2;eip=0x004531; 	X(PUSH(ax));	// 7766 push    ax ;~ 01A2:4531
cs=0x1a2;eip=0x004532; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 7767 mov     ax, offset resID_byte1 ;~ 01A2:4532
cs=0x1a2;eip=0x004535; 	X(PUSH(ax));	// 7768 push    ax ;~ 01A2:4535
cs=0x1a2;eip=0x004536; 	R(CALLF(copy_string,0));	// 7769 call    copy_string ;~ 01A2:4536
cs=0x1a2;eip=0x00453b; 	T(ADD(sp, 6));	// 7770 add     sp, 6 ;~ 01A2:453B
cs=0x1a2;eip=0x00453e; 	T(MOV(ax, offset(dseg,unk_463ea)));	// 7771 mov     ax, offset unk_463EA ;~ 01A2:453E
cs=0x1a2;eip=0x004541; 	X(PUSH(ax));	// 7772 push    ax ;~ 01A2:4541
cs=0x1a2;eip=0x004542; 	T(ax = bp+var_400);	// 7773 lea     ax, [bp+var_400] ;~ 01A2:4542
cs=0x1a2;eip=0x004546; 	X(PUSH(ax));	// 7774 push    ax              ; char * ;~ 01A2:4546
cs=0x1a2;eip=0x004547; 	R(CALLF(_strcat,0));	// 7775 call    _strcat ;~ 01A2:4547
cs=0x1a2;eip=0x00454c; 	T(ADD(sp, 4));	// 7776 add     sp, 4 ;~ 01A2:454C
cs=0x1a2;eip=0x00454f; 	T(SUB(si, si));	// 7777 sub     si, si ;~ 01A2:454F
loc_14551:
	// 4774 
cs=0x1a2;eip=0x004551; 	T(MOV(al, *((&resid_byte1)+si)));	// 7780 mov     al, resID_byte1[si] ;~ 01A2:4551
cs=0x1a2;eip=0x004555; 	X(MOV(*(raddr(ss,bp+si+var_406)), al));	// 7781 mov     [bp+si+var_406], al ;~ 01A2:4555
cs=0x1a2;eip=0x004559; 	T(INC(si));	// 7782 inc     si ;~ 01A2:4559
cs=0x1a2;eip=0x00455a; 	T(CMP(si, 6));	// 7783 cmp     si, 6 ;~ 01A2:455A
cs=0x1a2;eip=0x00455d; 	R(JL(loc_14551));	// 7784 jl      short loc_14551 ;~ 01A2:455D
cs=0x1a2;eip=0x00455f; 	T(SUB(ax, ax));	// 7785 sub     ax, ax ;~ 01A2:455F
cs=0x1a2;eip=0x004561; 	X(PUSH(ax));	// 7786 push    ax ;~ 01A2:4561
cs=0x1a2;eip=0x004562; 	T(ax = bp+var_428);	// 7787 lea     ax, [bp+var_428] ;~ 01A2:4562
cs=0x1a2;eip=0x004566; 	X(PUSH(ax));	// 7788 push    ax ;~ 01A2:4566
cs=0x1a2;eip=0x004567; 	X(PUSH(performgraphcolor));	// 7789 push    performGraphColor ;~ 01A2:4567
cs=0x1a2;eip=0x00456b; 	T(MOV(ax, 0x78));	// 7790 mov     ax, 78h ; 'x' ;~ 01A2:456B
cs=0x1a2;eip=0x00456e; 	X(PUSH(ax));	// 7791 push    ax ;~ 01A2:456E
cs=0x1a2;eip=0x00456f; 	T(MOV(ax, 0x0FFFF));	// 7792 mov     ax, 0FFFFh ;~ 01A2:456F
cs=0x1a2;eip=0x004572; 	X(PUSH(ax));	// 7793 push    ax ;~ 01A2:4572
cs=0x1a2;eip=0x004573; 	T(ax = bp+var_400);	// 7794 lea     ax, [bp+var_400] ;~ 01A2:4573
cs=0x1a2;eip=0x004577; 	X(PUSH(ss));	// 7795 push    ss ;~ 01A2:4577
cs=0x1a2;eip=0x004578; 	X(PUSH(ax));	// 7796 push    ax ;~ 01A2:4578
cs=0x1a2;eip=0x004579; 	T(MOV(ax, 1));	// 7797 mov     ax, 1 ;~ 01A2:4579
cs=0x1a2;eip=0x00457c; 	X(PUSH(ax));	// 7798 push    ax ;~ 01A2:457C
cs=0x1a2;eip=0x00457d; 	T(MOV(ax, 3));	// 7799 mov     ax, 3 ;~ 01A2:457D
cs=0x1a2;eip=0x004580; 	X(PUSH(ax));	// 7800 push    ax ;~ 01A2:4580
cs=0x1a2;eip=0x004581; 	R(CALLF(show_dialog,0));	// 7801 call    show_dialog ;~ 01A2:4581
cs=0x1a2;eip=0x004586; 	T(ADD(sp, 0x12));	// 7802 add     sp, 12h ;~ 01A2:4586
cs=0x1a2;eip=0x004589; 	X(MOV(resid_byte3, 0));	// 7803 mov     resID_byte3, 0 ;~ 01A2:4589
cs=0x1a2;eip=0x00458e; 	T(MOV(al, *(raddr(ss,bp+var_406))));	// 7804 mov     al, [bp+var_406] ;~ 01A2:458E
cs=0x1a2;eip=0x004592; 	X(MOV(resid_byte1, al));	// 7805 mov     resID_byte1, al ;~ 01A2:4592
cs=0x1a2;eip=0x004595; 	T(MOV(al, *(raddr(ss,bp+var_405))));	// 7806 mov     al, [bp+var_405] ;~ 01A2:4595
cs=0x1a2;eip=0x004599; 	X(MOV(resid_byte2, al));	// 7807 mov     resID_byte2, al ;~ 01A2:4599
cs=0x1a2;eip=0x00459c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_428+2)))));	// 7808 push    word ptr [bp+var_428+2] ;~ 01A2:459C
cs=0x1a2;eip=0x0045a0; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_428)))));	// 7809 push    word ptr [bp+var_428] ;~ 01A2:45A0
cs=0x1a2;eip=0x0045a4; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 7810 mov     ax, offset resID_byte1 ;~ 01A2:45A4
cs=0x1a2;eip=0x0045a7; 	X(PUSH(ax));	// 7811 push    ax ;~ 01A2:45A7
cs=0x1a2;eip=0x0045a8; 	R(CALLF(font_draw_text,0));	// 7812 call    font_draw_text ;~ 01A2:45A8
cs=0x1a2;eip=0x0045ad; 	T(ADD(sp, 6));	// 7813 add     sp, 6 ;~ 01A2:45AD
cs=0x1a2;eip=0x0045b0; 	T(MOV(al, *(raddr(ss,bp+var_404))));	// 7814 mov     al, [bp+var_404] ;~ 01A2:45B0
cs=0x1a2;eip=0x0045b4; 	X(MOV(resid_byte1, al));	// 7815 mov     resID_byte1, al ;~ 01A2:45B4
cs=0x1a2;eip=0x0045b7; 	T(MOV(al, *(raddr(ss,bp+var_403))));	// 7816 mov     al, [bp+var_403] ;~ 01A2:45B7
cs=0x1a2;eip=0x0045bb; 	X(MOV(resid_byte2, al));	// 7817 mov     resID_byte2, al ;~ 01A2:45BB
cs=0x1a2;eip=0x0045be; 	X(PUSH(*(dw*)(raddr(ss,bp+var_422))));	// 7818 push    [bp+var_422] ;~ 01A2:45BE
cs=0x1a2;eip=0x0045c2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_424))));	// 7819 push    [bp+var_424] ;~ 01A2:45C2
cs=0x1a2;eip=0x0045c6; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 7820 mov     ax, offset resID_byte1 ;~ 01A2:45C6
cs=0x1a2;eip=0x0045c9; 	X(PUSH(ax));	// 7821 push    ax ;~ 01A2:45C9
cs=0x1a2;eip=0x0045ca; 	R(CALLF(font_draw_text,0));	// 7822 call    font_draw_text ;~ 01A2:45CA
cs=0x1a2;eip=0x0045cf; 	T(ADD(sp, 6));	// 7823 add     sp, 6 ;~ 01A2:45CF
cs=0x1a2;eip=0x0045d2; 	T(MOV(al, *(raddr(ss,bp+var_402))));	// 7824 mov     al, [bp+var_402] ;~ 01A2:45D2
cs=0x1a2;eip=0x0045d6; 	X(MOV(resid_byte1, al));	// 7825 mov     resID_byte1, al ;~ 01A2:45D6
cs=0x1a2;eip=0x0045d9; 	T(MOV(al, *(raddr(ss,bp+var_401))));	// 7826 mov     al, [bp+var_401] ;~ 01A2:45D9
cs=0x1a2;eip=0x0045dd; 	X(MOV(resid_byte2, al));	// 7827 mov     resID_byte2, al ;~ 01A2:45DD
cs=0x1a2;eip=0x0045e0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_41e))));	// 7828 push    [bp+var_41E] ;~ 01A2:45E0
cs=0x1a2;eip=0x0045e4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_420))));	// 7829 push    [bp+var_420] ;~ 01A2:45E4
cs=0x1a2;eip=0x0045e8; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 7830 mov     ax, offset resID_byte1 ;~ 01A2:45E8
cs=0x1a2;eip=0x0045eb; 	X(PUSH(ax));	// 7831 push    ax ;~ 01A2:45EB
cs=0x1a2;eip=0x0045ec; 	R(CALLF(font_draw_text,0));	// 7832 call    font_draw_text ;~ 01A2:45EC
cs=0x1a2;eip=0x0045f1; 	T(ADD(sp, 6));	// 7833 add     sp, 6 ;~ 01A2:45F1
cs=0x1a2;eip=0x0045f4; 	T(MOV(ax, offset(dseg,aa00)));	// 7834 mov     ax, offset aA00 ;~ 01A2:45F4
cs=0x1a2;eip=0x0045f7; 	X(PUSH(ax));	// 7835 push    ax ;~ 01A2:45F7
cs=0x1a2;eip=0x0045f8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40a))));	// 7836 push    [bp+var_40A] ;~ 01A2:45F8
cs=0x1a2;eip=0x0045fc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40c))));	// 7837 push    [bp+var_40C] ;~ 01A2:45FC
cs=0x1a2;eip=0x004600; 	R(CALLF(locate_text_res,0));	// 7838 call    locate_text_res ;~ 01A2:4600
cs=0x1a2;eip=0x004605; 	T(ADD(sp, 6));	// 7839 add     sp, 6 ;~ 01A2:4605
cs=0x1a2;eip=0x004608; 	X(PUSH(dx));	// 7840 push    dx ;~ 01A2:4608
cs=0x1a2;eip=0x004609; 	X(PUSH(ax));	// 7841 push    ax ;~ 01A2:4609
cs=0x1a2;eip=0x00460a; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 7842 mov     ax, offset resID_byte1 ;~ 01A2:460A
cs=0x1a2;eip=0x00460d; 	X(PUSH(ax));	// 7843 push    ax ;~ 01A2:460D
cs=0x1a2;eip=0x00460e; 	R(CALLF(copy_string,0));	// 7844 call    copy_string ;~ 01A2:460E
cs=0x1a2;eip=0x004613; 	T(ADD(sp, 6));	// 7845 add     sp, 6 ;~ 01A2:4613
cs=0x1a2;eip=0x004616; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_41c))));	// 7846 mov     ax, [bp+var_41C] ;~ 01A2:4616
cs=0x1a2;eip=0x00461a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_41a))));	// 7847 mov     dx, [bp+var_41A] ;~ 01A2:461A
cs=0x1a2;eip=0x00461e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_428))), ax));	// 7848 mov     word ptr [bp+var_428], ax ;~ 01A2:461E
cs=0x1a2;eip=0x004622; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_428+2))), dx));	// 7849 mov     word ptr [bp+var_428+2], dx ;~ 01A2:4622
cs=0x1a2;eip=0x004626; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 7850 mov     ax, offset resID_byte1 ;~ 01A2:4626
cs=0x1a2;eip=0x004629; 	X(PUSH(ax));	// 7851 push    ax              ; char * ;~ 01A2:4629
cs=0x1a2;eip=0x00462a; 	R(CALLF(_strlen,0));	// 7852 call    _strlen ;~ 01A2:462A
cs=0x1a2;eip=0x00462f; 	T(ADD(sp, 2));	// 7853 add     sp, 2 ;~ 01A2:462F
cs=0x1a2;eip=0x004632; 	X(MOV(*(dw*)(raddr(ss,bp+var_408)), ax));	// 7854 mov     [bp+var_408], ax ;~ 01A2:4632
cs=0x1a2;eip=0x004636; 	X(MOV(*(raddr(ss,bp+var_43e)), 0));	// 7855 mov     [bp+var_43E], 0 ;~ 01A2:4636
cs=0x1a2;eip=0x00463b; 	X(MOV(*(dw*)(raddr(ss,bp+var_40e)), 0));	// 7856 mov     [bp+var_40E], 0 ;~ 01A2:463B
loc_14641:
	// 4775 
cs=0x1a2;eip=0x004641; 	T(MOV(ax, offset(dseg,terraincenterpos)+0x22));	// 7859 mov     ax, (offset terraincenterpos+22h) ;~ 01A2:4641
cs=0x1a2;eip=0x004644; 	T(CWD);	// 7860 cwd ;~ 01A2:4644
cs=0x1a2;eip=0x004645; 	X(PUSH(dx));	// 7861 push    dx              ; int ;~ 01A2:4645
cs=0x1a2;eip=0x004646; 	X(PUSH(ax));	// 7862 push    ax              ; int ;~ 01A2:4646
cs=0x1a2;eip=0x004647; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_428+2)))));	// 7863 push    word ptr [bp+var_428+2] ; int ;~ 01A2:4647
cs=0x1a2;eip=0x00464b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_428)))));	// 7864 push    word ptr [bp+var_428] ; int ;~ 01A2:464B
cs=0x1a2;eip=0x00464f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_408))));	// 7865 push    [bp+var_408] ;~ 01A2:464F
cs=0x1a2;eip=0x004653; 	T(ax = bp+var_43e);	// 7866 lea     ax, [bp+var_43E] ;~ 01A2:4653
cs=0x1a2;eip=0x004657; 	X(PUSH(ax));	// 7867 push    ax              ; char * ;~ 01A2:4657
cs=0x1a2;eip=0x004658; 	R(CALLF(call_read_line,0));	// 7868 call    call_read_line ;~ 01A2:4658
cs=0x1a2;eip=0x00465d; 	T(ADD(sp, 0x0C));	// 7869 add     sp, 0Ch ;~ 01A2:465D
cs=0x1a2;eip=0x004660; 	T(SUB(si, si));	// 7870 sub     si, si ;~ 01A2:4660
cs=0x1a2;eip=0x004662; 	R(JMP(loc_1468d));	// 7871 jmp     short loc_1468D ;~ 01A2:4662
loc_14664:
	// 4776 
cs=0x1a2;eip=0x004664; 	T(MOV(al, *(raddr(ss,bp+si+var_43e))));	// 7875 mov     al, [bp+si+var_43E] ;~ 01A2:4664
cs=0x1a2;eip=0x004668; 	T(CBW);	// 7876 cbw ;~ 01A2:4668
cs=0x1a2;eip=0x004669; 	T(MOV(bx, ax));	// 7877 mov     bx, ax ;~ 01A2:4669
cs=0x1a2;eip=0x00466b; 	T(MOV(al, *((g_ascii_props)+bx)));	// 7878 mov     al, g_ascii_props[bx] ;~ 01A2:466B
cs=0x1a2;eip=0x00466f; 	T(AND(al, 1));	// 7879 and     al, 1 ;~ 01A2:466F
cs=0x1a2;eip=0x004671; 	X(MOV(*(raddr(ss,bp+var_440)), al));	// 7880 mov     [bp+var_440], al ;~ 01A2:4671
cs=0x1a2;eip=0x004675; 	T(OR(al, al));	// 7881 or      al, al ;~ 01A2:4675
cs=0x1a2;eip=0x004677; 	R(JZ(loc_1468c));	// 7882 jz      short loc_1468C ;~ 01A2:4677
cs=0x1a2;eip=0x004679; 	R(JZ(loc_14684));	// 7883 jz      short loc_14684 ;~ 01A2:4679
cs=0x1a2;eip=0x00467b; 	T(MOV(al, *(raddr(ss,bp+si+var_43e))));	// 7884 mov     al, [bp+si+var_43E] ;~ 01A2:467B
cs=0x1a2;eip=0x00467f; 	T(ADD(al, 0x20));	// 7885 add     al, 20h ; ' ' ;~ 01A2:467F
cs=0x1a2;eip=0x004681; 	R(JMP(loc_14688));	// 7886 jmp     short loc_14688 ;~ 01A2:4681
loc_14684:
	// 4777 
cs=0x1a2;eip=0x004684; 	T(MOV(al, *(raddr(ss,bp+si+var_43e))));	// 7891 mov     al, [bp+si+var_43E] ;~ 01A2:4684
loc_14688:
	// 4778 
cs=0x1a2;eip=0x004688; 	X(MOV(*(raddr(ss,bp+si+var_43e)), al));	// 7894 mov     [bp+si+var_43E], al ;~ 01A2:4688
loc_1468c:
	// 4779 
cs=0x1a2;eip=0x00468c; 	T(INC(si));	// 7897 inc     si ;~ 01A2:468C
loc_1468d:
	// 4780 
cs=0x1a2;eip=0x00468d; 	T(CMP(*(raddr(ss,bp+si+var_43e)), 0));	// 7900 cmp     [bp+si+var_43E], 0 ;~ 01A2:468D
cs=0x1a2;eip=0x004692; 	R(JNZ(loc_14664));	// 7901 jnz     short loc_14664 ;~ 01A2:4692
cs=0x1a2;eip=0x004694; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 7902 mov     ax, offset resID_byte1 ;~ 01A2:4694
cs=0x1a2;eip=0x004697; 	X(PUSH(ax));	// 7903 push    ax ;~ 01A2:4697
cs=0x1a2;eip=0x004698; 	T(ax = bp+var_43e);	// 7904 lea     ax, [bp+var_43E] ;~ 01A2:4698
cs=0x1a2;eip=0x00469c; 	X(PUSH(ax));	// 7905 push    ax              ; char * ;~ 01A2:469C
cs=0x1a2;eip=0x00469d; 	R(CALLF(_strcmp,0));	// 7906 call    _strcmp ;~ 01A2:469D
cs=0x1a2;eip=0x0046a2; 	T(ADD(sp, 4));	// 7907 add     sp, 4 ;~ 01A2:46A2
cs=0x1a2;eip=0x0046a5; 	T(OR(ax, ax));	// 7908 or      ax, ax ;~ 01A2:46A5
cs=0x1a2;eip=0x0046a7; 	R(JNZ(loc_146b0));	// 7909 jnz     short loc_146B0 ;~ 01A2:46A7
cs=0x1a2;eip=0x0046a9; 	X(MOV(passed_security, 1));	// 7910 mov     passed_security, 1 ;~ 01A2:46A9
cs=0x1a2;eip=0x0046ae; 	R(JMP(loc_146b4));	// 7911 jmp     short loc_146B4 ;~ 01A2:46AE
loc_146b0:
	// 4781 
cs=0x1a2;eip=0x0046b0; 	X(INC(*(dw*)(raddr(ss,bp+var_40e))));	// 7915 inc     [bp+var_40E] ;~ 01A2:46B0
loc_146b4:
	// 4782 
cs=0x1a2;eip=0x0046b4; 	T(CMP(passed_security, 0));	// 7918 cmp     passed_security, 0 ;~ 01A2:46B4
cs=0x1a2;eip=0x0046b9; 	R(JNZ(loc_146c5));	// 7919 jnz     short loc_146C5 ;~ 01A2:46B9
cs=0x1a2;eip=0x0046bb; 	T(CMP(*(dw*)(raddr(ss,bp+var_40e)), 3));	// 7920 cmp     [bp+var_40E], 3 ;~ 01A2:46BB
cs=0x1a2;eip=0x0046c0; 	R(JZ(loc_146c5));	// 7921 jz      short loc_146C5 ;~ 01A2:46C0
cs=0x1a2;eip=0x0046c2; 	R(JMP(loc_14641));	// 7922 jmp     loc_14641 ;~ 01A2:46C2
loc_146c5:
	// 4783 
cs=0x1a2;eip=0x0046c5; 	R(CALLF(sub_275c6,0));	// 7927 call    sub_275C6 ;~ 01A2:46C5
cs=0x1a2;eip=0x0046ca; 	R(CALLF(mouse_draw_transparent_check,0));	// 7928 call    mouse_draw_transparent_check ;~ 01A2:46CA
cs=0x1a2;eip=0x0046cf; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40a))));	// 7929 push    [bp+var_40A] ;~ 01A2:46CF
cs=0x1a2;eip=0x0046d3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40c))));	// 7930 push    [bp+var_40C] ;~ 01A2:46D3
cs=0x1a2;eip=0x0046d7; 	R(CALLF(unload_resource,0));	// 7931 call    unload_resource ;~ 01A2:46D7
cs=0x1a2;eip=0x0046dc; 	T(ADD(sp, 4));	// 7932 add     sp, 4 ;~ 01A2:46DC
cs=0x1a2;eip=0x0046df; 	X(POP(si));	// 7933 pop     si ;~ 01A2:46DF
cs=0x1a2;eip=0x0046e0; 	T(MOV(sp, bp));	// 7934 mov     sp, bp ;~ 01A2:46E0
cs=0x1a2;eip=0x0046e2; 	X(POP(bp));	// 7935 pop     bp ;~ 01A2:46E2
cs=0x1a2;eip=0x0046e3; 	R(RETF(0));	// 7936 retf ;~ 01A2:46E3
set_default_car:
	// 7943 
cs=0x1a2;eip=0x0046e4; 	X(MOV(gameconfig, 0x43));	// 7944 mov     gameconfig, 43h ; 'C' ;~ 01A2:46E4
ret_1a2_46e9:
	// 4784 
cs=0x1a2;eip=0x0046e9; 	X(MOV(byte_449a5, 0x4F));	// 7945 mov     byte_449A5, 4Fh ; 'O' ;~ 01A2:46E9
cs=0x1a2;eip=0x0046ee; 	X(MOV(byte_449a6, 0x55));	// 7946 mov     byte_449A6, 55h ; 'U' ;~ 01A2:46EE
cs=0x1a2;eip=0x0046f3; 	X(MOV(byte_449a7, 0x4E));	// 7947 mov     byte_449A7, 4Eh ; 'N' ;~ 01A2:46F3
cs=0x1a2;eip=0x0046f8; 	X(MOV(byte_449a8, 0));	// 7948 mov     byte_449A8, 0 ;~ 01A2:46F8
cs=0x1a2;eip=0x0046fd; 	X(MOV(byte_449aa, 0));	// 7949 mov     byte_449AA, 0 ;~ 01A2:46FD
cs=0x1a2;eip=0x004702; 	X(MOV(byte_449af, 0));	// 7950 mov     byte_449AF, 0 ;~ 01A2:4702
cs=0x1a2;eip=0x004707; 	X(MOV(byte_449a9, 1));	// 7951 mov     byte_449A9, 1 ;~ 01A2:4707
cs=0x1a2;eip=0x00470c; 	X(MOV(byte_449ab, 0x0FF));	// 7952 mov     byte_449AB, 0FFh ;~ 01A2:470C
cs=0x1a2;eip=0x004711; 	R(RETF(0));	// 7953 retf ;~ 01A2:4711

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::k_ask_dos: 	goto _ask_dos;
        case m2c::k_do_car_menu: 	goto _do_car_menu;
        case m2c::k_do_game0: 	goto _do_game0;
        case m2c::k_do_game1: 	goto _do_game1;
        case m2c::k_do_intro: 	goto _do_intro;
        case m2c::k_do_intro0: 	goto _do_intro0;
        case m2c::k_do_opp_menu: 	goto _do_opp_menu;
        case m2c::k_do_option_menu: 	goto _do_option_menu;
        case m2c::k_do_show_menu: 	goto _do_show_menu;
        case m2c::k_find_tedit: 	goto _find_tedit;
        case m2c::k_goto_game1: 	goto _goto_game1;
        case m2c::k_init_replay: 	goto _init_replay;
        case m2c::k_menu_color: 	goto _menu_color;
        case m2c::k_menu_done: 	goto _menu_done;
        case m2c::k_menu_nextcar: 	goto _menu_nextcar;
        case m2c::k_menu_prevcar: 	goto _menu_prevcar;
        case m2c::k_menu_transmission: 	goto _menu_transmission;
        case m2c::k_prepare_intro: 	goto _prepare_intro;
        case m2c::k_sec_check1: 	goto _sec_check1;
        case m2c::k_show_menu: 	goto _show_menu;
        case m2c::k_tracks_menu0: 	goto _tracks_menu0;
        case m2c::k_tracks_menu_ax: 	goto _tracks_menu_ax;
        case m2c::kdef_13049: 	goto def_13049;
        case m2c::kenter_hiscore: 	goto enter_hiscore;
        case m2c::kload_intro_resources: 	goto load_intro_resources;
        case m2c::kloc_1001d: 	goto loc_1001d;
        case m2c::kloc_10086: 	goto loc_10086;
        case m2c::kloc_1032f: 	goto loc_1032f;
        case m2c::kloc_10346: 	goto loc_10346;
        case m2c::kloc_103d1: 	goto loc_103d1;
        case m2c::kloc_1042d: 	goto loc_1042d;
        case m2c::kloc_10467: 	goto loc_10467;
        case m2c::kloc_10474: 	goto loc_10474;
        case m2c::kloc_1047b: 	goto loc_1047b;
        case m2c::kloc_10483: 	goto loc_10483;
        case m2c::kloc_10493: 	goto loc_10493;
        case m2c::kloc_1049b: 	goto loc_1049b;
        case m2c::kloc_1049e: 	goto loc_1049e;
        case m2c::kloc_104a6: 	goto loc_104a6;
        case m2c::kloc_104ac: 	goto loc_104ac;
        case m2c::kloc_104d2: 	goto loc_104d2;
        case m2c::kloc_104e5: 	goto loc_104e5;
        case m2c::kloc_104fc: 	goto loc_104fc;
        case m2c::kloc_10536: 	goto loc_10536;
        case m2c::kloc_10575: 	goto loc_10575;
        case m2c::kloc_1068e: 	goto loc_1068e;
        case m2c::kloc_106de: 	goto loc_106de;
        case m2c::kloc_106e4: 	goto loc_106e4;
        case m2c::kloc_1077f: 	goto loc_1077f;
        case m2c::kloc_10d77: 	goto loc_10d77;
        case m2c::kloc_10d88: 	goto loc_10d88;
        case m2c::kloc_10da0: 	goto loc_10da0;
        case m2c::kloc_10dec: 	goto loc_10dec;
        case m2c::kloc_10e66: 	goto loc_10e66;
        case m2c::kloc_10e7d: 	goto loc_10e7d;
        case m2c::kloc_10e83: 	goto loc_10e83;
        case m2c::kloc_10e91: 	goto loc_10e91;
        case m2c::kloc_10f2b: 	goto loc_10f2b;
        case m2c::kloc_10f34: 	goto loc_10f34;
        case m2c::kloc_10fb9: 	goto loc_10fb9;
        case m2c::kloc_10fef: 	goto loc_10fef;
        case m2c::kloc_11049: 	goto loc_11049;
        case m2c::kloc_11062: 	goto loc_11062;
        case m2c::kloc_11072: 	goto loc_11072;
        case m2c::kloc_1107b: 	goto loc_1107b;
        case m2c::kloc_1109a: 	goto loc_1109a;
        case m2c::kloc_110a4: 	goto loc_110a4;
        case m2c::kloc_110aa: 	goto loc_110aa;
        case m2c::kloc_110b6: 	goto loc_110b6;
        case m2c::kloc_110ba: 	goto loc_110ba;
        case m2c::kloc_110ed: 	goto loc_110ed;
        case m2c::kloc_111f9: 	goto loc_111f9;
        case m2c::kloc_11210: 	goto loc_11210;
        case m2c::kloc_112e5: 	goto loc_112e5;
        case m2c::kloc_113b4: 	goto loc_113b4;
        case m2c::kloc_113e5: 	goto loc_113e5;
        case m2c::kloc_11423: 	goto loc_11423;
        case m2c::kloc_11457: 	goto loc_11457;
        case m2c::kloc_11467: 	goto loc_11467;
        case m2c::kloc_11470: 	goto loc_11470;
        case m2c::kloc_11490: 	goto loc_11490;
        case m2c::kloc_1149c: 	goto loc_1149c;
        case m2c::kloc_114a4: 	goto loc_114a4;
        case m2c::kloc_114b0: 	goto loc_114b0;
        case m2c::kloc_114b8: 	goto loc_114b8;
        case m2c::kloc_114bc: 	goto loc_114bc;
        case m2c::kloc_114cc: 	goto loc_114cc;
        case m2c::kloc_114e2: 	goto loc_114e2;
        case m2c::kloc_11552: 	goto loc_11552;
        case m2c::kloc_1155a: 	goto loc_1155a;
        case m2c::kloc_1156a: 	goto loc_1156a;
        case m2c::kloc_1159a: 	goto loc_1159a;
        case m2c::kloc_115f9: 	goto loc_115f9;
        case m2c::kloc_11602: 	goto loc_11602;
        case m2c::kloc_1160a: 	goto loc_1160a;
        case m2c::kloc_11648: 	goto loc_11648;
        case m2c::kloc_1168b: 	goto loc_1168b;
        case m2c::kloc_1181a: 	goto loc_1181a;
        case m2c::kloc_1181f: 	goto loc_1181f;
        case m2c::kloc_118a0: 	goto loc_118a0;
        case m2c::kloc_118c1: 	goto loc_118c1;
        case m2c::kloc_118ca: 	goto loc_118ca;
        case m2c::kloc_11981: 	goto loc_11981;
        case m2c::kloc_119af: 	goto loc_119af;
        case m2c::kloc_119e0: 	goto loc_119e0;
        case m2c::kloc_119e7: 	goto loc_119e7;
        case m2c::kloc_11a2e: 	goto loc_11a2e;
        case m2c::kloc_11a3f: 	goto loc_11a3f;
        case m2c::kloc_11a46: 	goto loc_11a46;
        case m2c::kloc_11a5d: 	goto loc_11a5d;
        case m2c::kloc_11a71: 	goto loc_11a71;
        case m2c::kloc_11a7c: 	goto loc_11a7c;
        case m2c::kloc_11a8d: 	goto loc_11a8d;
        case m2c::kloc_11ae6: 	goto loc_11ae6;
        case m2c::kloc_11aed: 	goto loc_11aed;
        case m2c::kloc_11baa: 	goto loc_11baa;
        case m2c::kloc_11bc3: 	goto loc_11bc3;
        case m2c::kloc_11c82: 	goto loc_11c82;
        case m2c::kloc_11c86: 	goto loc_11c86;
        case m2c::kloc_11cb8: 	goto loc_11cb8;
        case m2c::kloc_11ce1: 	goto loc_11ce1;
        case m2c::kloc_11d44: 	goto loc_11d44;
        case m2c::kloc_11d52: 	goto loc_11d52;
        case m2c::kloc_11d5a: 	goto loc_11d5a;
        case m2c::kloc_11d5d: 	goto loc_11d5d;
        case m2c::kloc_11d69: 	goto loc_11d69;
        case m2c::kloc_11df8: 	goto loc_11df8;
        case m2c::kloc_11dfb: 	goto loc_11dfb;
        case m2c::kloc_11e10: 	goto loc_11e10;
        case m2c::kloc_11e1c: 	goto loc_11e1c;
        case m2c::kloc_11e20: 	goto loc_11e20;
        case m2c::kloc_11e68: 	goto loc_11e68;
        case m2c::kloc_11ea2: 	goto loc_11ea2;
        case m2c::kloc_11eab: 	goto loc_11eab;
        case m2c::kloc_11ebb: 	goto loc_11ebb;
        case m2c::kloc_11f4a: 	goto loc_11f4a;
        case m2c::kloc_11f50: 	goto loc_11f50;
        case m2c::kloc_11fa5: 	goto loc_11fa5;
        case m2c::kloc_11fb1: 	goto loc_11fb1;
        case m2c::kloc_11fc8: 	goto loc_11fc8;
        case m2c::kloc_12226: 	goto loc_12226;
        case m2c::kloc_12229: 	goto loc_12229;
        case m2c::kloc_122ce: 	goto loc_122ce;
        case m2c::kloc_122fb: 	goto loc_122fb;
        case m2c::kloc_12344: 	goto loc_12344;
        case m2c::kloc_1237e: 	goto loc_1237e;
        case m2c::kloc_123b1: 	goto loc_123b1;
        case m2c::kloc_123be: 	goto loc_123be;
        case m2c::kloc_123cb: 	goto loc_123cb;
        case m2c::kloc_12405: 	goto loc_12405;
        case m2c::kloc_1241b: 	goto loc_1241b;
        case m2c::kloc_12423: 	goto loc_12423;
        case m2c::kloc_12448: 	goto loc_12448;
        case m2c::kloc_1244f: 	goto loc_1244f;
        case m2c::kloc_1247a: 	goto loc_1247a;
        case m2c::kloc_124a6: 	goto loc_124a6;
        case m2c::kloc_124ac: 	goto loc_124ac;
        case m2c::kloc_124da: 	goto loc_124da;
        case m2c::kloc_124de: 	goto loc_124de;
        case m2c::kloc_12534: 	goto loc_12534;
        case m2c::kloc_12541: 	goto loc_12541;
        case m2c::kloc_12585: 	goto loc_12585;
        case m2c::kloc_125ba: 	goto loc_125ba;
        case m2c::kloc_125c9: 	goto loc_125c9;
        case m2c::kloc_125d0: 	goto loc_125d0;
        case m2c::kloc_125da: 	goto loc_125da;
        case m2c::kloc_125e2: 	goto loc_125e2;
        case m2c::kloc_125ea: 	goto loc_125ea;
        case m2c::kloc_125f2: 	goto loc_125f2;
        case m2c::kloc_125fa: 	goto loc_125fa;
        case m2c::kloc_125fe: 	goto loc_125fe;
        case m2c::kloc_126b8: 	goto loc_126b8;
        case m2c::kloc_126ce: 	goto loc_126ce;
        case m2c::kloc_126d1: 	goto loc_126d1;
        case m2c::kloc_12710: 	goto loc_12710;
        case m2c::kloc_12723: 	goto loc_12723;
        case m2c::kloc_12732: 	goto loc_12732;
        case m2c::kloc_12743: 	goto loc_12743;
        case m2c::kloc_1274b: 	goto loc_1274b;
        case m2c::kloc_12753: 	goto loc_12753;
        case m2c::kloc_1275b: 	goto loc_1275b;
        case m2c::kloc_12768: 	goto loc_12768;
        case m2c::kloc_127a6: 	goto loc_127a6;
        case m2c::kloc_127bc: 	goto loc_127bc;
        case m2c::kloc_12846: 	goto loc_12846;
        case m2c::kloc_12857: 	goto loc_12857;
        case m2c::kloc_1287c: 	goto loc_1287c;
        case m2c::kloc_1287f: 	goto loc_1287f;
        case m2c::kloc_12910: 	goto loc_12910;
        case m2c::kloc_1291e: 	goto loc_1291e;
        case m2c::kloc_12926: 	goto loc_12926;
        case m2c::kloc_12934: 	goto loc_12934;
        case m2c::kloc_129a3: 	goto loc_129a3;
        case m2c::kloc_129a8: 	goto loc_129a8;
        case m2c::kloc_129b3: 	goto loc_129b3;
        case m2c::kloc_129dd: 	goto loc_129dd;
        case m2c::kloc_12a10: 	goto loc_12a10;
        case m2c::kloc_12a14: 	goto loc_12a14;
        case m2c::kloc_12a48: 	goto loc_12a48;
        case m2c::kloc_12a4d: 	goto loc_12a4d;
        case m2c::kloc_12c46: 	goto loc_12c46;
        case m2c::kloc_12c5a: 	goto loc_12c5a;
        case m2c::kloc_12c66: 	goto loc_12c66;
        case m2c::kloc_12c9d: 	goto loc_12c9d;
        case m2c::kloc_12cd2: 	goto loc_12cd2;
        case m2c::kloc_12ce0: 	goto loc_12ce0;
        case m2c::kloc_12ced: 	goto loc_12ced;
        case m2c::kloc_12cfb: 	goto loc_12cfb;
        case m2c::kloc_12d2c: 	goto loc_12d2c;
        case m2c::kloc_12d8d: 	goto loc_12d8d;
        case m2c::kloc_12d93: 	goto loc_12d93;
        case m2c::kloc_12d9a: 	goto loc_12d9a;
        case m2c::kloc_12db3: 	goto loc_12db3;
        case m2c::kloc_12dbb: 	goto loc_12dbb;
        case m2c::kloc_12dbe: 	goto loc_12dbe;
        case m2c::kloc_12ddd: 	goto loc_12ddd;
        case m2c::kloc_12de0: 	goto loc_12de0;
        case m2c::kloc_12dee: 	goto loc_12dee;
        case m2c::kloc_12df6: 	goto loc_12df6;
        case m2c::kloc_12e04: 	goto loc_12e04;
        case m2c::kloc_12e0c: 	goto loc_12e0c;
        case m2c::kloc_12e14: 	goto loc_12e14;
        case m2c::kloc_12e1e: 	goto loc_12e1e;
        case m2c::kloc_12e6a: 	goto loc_12e6a;
        case m2c::kloc_12ea2: 	goto loc_12ea2;
        case m2c::kloc_12ea7: 	goto loc_12ea7;
        case m2c::kloc_12ecb: 	goto loc_12ecb;
        case m2c::kloc_12ef6: 	goto loc_12ef6;
        case m2c::kloc_12f02: 	goto loc_12f02;
        case m2c::kloc_12f06: 	goto loc_12f06;
        case m2c::kloc_12f10: 	goto loc_12f10;
        case m2c::kloc_12f19: 	goto loc_12f19;
        case m2c::kloc_12f20: 	goto loc_12f20;
        case m2c::kloc_12f2c: 	goto loc_12f2c;
        case m2c::kloc_12f30: 	goto loc_12f30;
        case m2c::kloc_12f3a: 	goto loc_12f3a;
        case m2c::kloc_12f43: 	goto loc_12f43;
        case m2c::kloc_13004: 	goto loc_13004;
        case m2c::kloc_13046: 	goto loc_13046;
        case m2c::kloc_1304e: 	goto loc_1304e;
        case m2c::kloc_1305c: 	goto loc_1305c;
        case m2c::kloc_1306a: 	goto loc_1306a;
        case m2c::kloc_1306e: 	goto loc_1306e;
        case m2c::kloc_130ba: 	goto loc_130ba;
        case m2c::kloc_130c2: 	goto loc_130c2;
        case m2c::kloc_130ca: 	goto loc_130ca;
        case m2c::kloc_130d2: 	goto loc_130d2;
        case m2c::kloc_130da: 	goto loc_130da;
        case m2c::kloc_130e2: 	goto loc_130e2;
        case m2c::kloc_13134: 	goto loc_13134;
        case m2c::kloc_1313c: 	goto loc_1313c;
        case m2c::kloc_13144: 	goto loc_13144;
        case m2c::kloc_13163: 	goto loc_13163;
        case m2c::kloc_131c0: 	goto loc_131c0;
        case m2c::kloc_131fc: 	goto loc_131fc;
        case m2c::kloc_13281: 	goto loc_13281;
        case m2c::kloc_132dc: 	goto loc_132dc;
        case m2c::kloc_1330d: 	goto loc_1330d;
        case m2c::kloc_13354: 	goto loc_13354;
        case m2c::kloc_13380: 	goto loc_13380;
        case m2c::kloc_133a7: 	goto loc_133a7;
        case m2c::kloc_133b5: 	goto loc_133b5;
        case m2c::kloc_1340c: 	goto loc_1340c;
        case m2c::kloc_1341c: 	goto loc_1341c;
        case m2c::kloc_13466: 	goto loc_13466;
        case m2c::kloc_134aa: 	goto loc_134aa;
        case m2c::kloc_134b5: 	goto loc_134b5;
        case m2c::kloc_134dc: 	goto loc_134dc;
        case m2c::kloc_134f0: 	goto loc_134f0;
        case m2c::kloc_134fb: 	goto loc_134fb;
        case m2c::kloc_1351d: 	goto loc_1351d;
        case m2c::kloc_1356a: 	goto loc_1356a;
        case m2c::kloc_1356c: 	goto loc_1356c;
        case m2c::kloc_135ed: 	goto loc_135ed;
        case m2c::kloc_1368b: 	goto loc_1368b;
        case m2c::kloc_1379a: 	goto loc_1379a;
        case m2c::kloc_137a3: 	goto loc_137a3;
        case m2c::kloc_137ad: 	goto loc_137ad;
        case m2c::kloc_137e0: 	goto loc_137e0;
        case m2c::kloc_13801: 	goto loc_13801;
        case m2c::kloc_1381e: 	goto loc_1381e;
        case m2c::kloc_1382a: 	goto loc_1382a;
        case m2c::kloc_13833: 	goto loc_13833;
        case m2c::kloc_13835: 	goto loc_13835;
        case m2c::kloc_1384b: 	goto loc_1384b;
        case m2c::kloc_138a0: 	goto loc_138a0;
        case m2c::kloc_138ac: 	goto loc_138ac;
        case m2c::kloc_138b6: 	goto loc_138b6;
        case m2c::kloc_138ff: 	goto loc_138ff;
        case m2c::kloc_1397f: 	goto loc_1397f;
        case m2c::kloc_1398c: 	goto loc_1398c;
        case m2c::kloc_1398d: 	goto loc_1398d;
        case m2c::kloc_139a6: 	goto loc_139a6;
        case m2c::kloc_139b6: 	goto loc_139b6;
        case m2c::kloc_139ba: 	goto loc_139ba;
        case m2c::kloc_139e1: 	goto loc_139e1;
        case m2c::kloc_13a0f: 	goto loc_13a0f;
        case m2c::kloc_13a1d: 	goto loc_13a1d;
        case m2c::kloc_13a42: 	goto loc_13a42;
        case m2c::kloc_13a4b: 	goto loc_13a4b;
        case m2c::kloc_13b2c: 	goto loc_13b2c;
        case m2c::kloc_13b31: 	goto loc_13b31;
        case m2c::kloc_13b36: 	goto loc_13b36;
        case m2c::kloc_13b42: 	goto loc_13b42;
        case m2c::kloc_13b4f: 	goto loc_13b4f;
        case m2c::kloc_13b57: 	goto loc_13b57;
        case m2c::kloc_13b6e: 	goto loc_13b6e;
        case m2c::kloc_13b7e: 	goto loc_13b7e;
        case m2c::kloc_13b97: 	goto loc_13b97;
        case m2c::kloc_13bd0: 	goto loc_13bd0;
        case m2c::kloc_13be0: 	goto loc_13be0;
        case m2c::kloc_13bf0: 	goto loc_13bf0;
        case m2c::kloc_13bf3: 	goto loc_13bf3;
        case m2c::kloc_13c10: 	goto loc_13c10;
        case m2c::kloc_13c1a: 	goto loc_13c1a;
        case m2c::kloc_13c46: 	goto loc_13c46;
        case m2c::kloc_13c4b: 	goto loc_13c4b;
        case m2c::kloc_13c52: 	goto loc_13c52;
        case m2c::kloc_13c67: 	goto loc_13c67;
        case m2c::kloc_13c86: 	goto loc_13c86;
        case m2c::kloc_13c92: 	goto loc_13c92;
        case m2c::kloc_13ca0: 	goto loc_13ca0;
        case m2c::kloc_13ca9: 	goto loc_13ca9;
        case m2c::kloc_13caf: 	goto loc_13caf;
        case m2c::kloc_13cbd: 	goto loc_13cbd;
        case m2c::kloc_13cc5: 	goto loc_13cc5;
        case m2c::kloc_13ccd: 	goto loc_13ccd;
        case m2c::kloc_13cd0: 	goto loc_13cd0;
        case m2c::kloc_13d06: 	goto loc_13d06;
        case m2c::kloc_13d13: 	goto loc_13d13;
        case m2c::kloc_13d83: 	goto loc_13d83;
        case m2c::kloc_13dd3: 	goto loc_13dd3;
        case m2c::kloc_13ddf: 	goto loc_13ddf;
        case m2c::kloc_13e8a: 	goto loc_13e8a;
        case m2c::kloc_13ea0: 	goto loc_13ea0;
        case m2c::kloc_13ea5: 	goto loc_13ea5;
        case m2c::kloc_13ebf: 	goto loc_13ebf;
        case m2c::kloc_13ec4: 	goto loc_13ec4;
        case m2c::kloc_13ecd: 	goto loc_13ecd;
        case m2c::kloc_13f48: 	goto loc_13f48;
        case m2c::kloc_13f84: 	goto loc_13f84;
        case m2c::kloc_13fd6: 	goto loc_13fd6;
        case m2c::kloc_13fda: 	goto loc_13fda;
        case m2c::kloc_13ff9: 	goto loc_13ff9;
        case m2c::kloc_14002: 	goto loc_14002;
        case m2c::kloc_14014: 	goto loc_14014;
        case m2c::kloc_14017: 	goto loc_14017;
        case m2c::kloc_14058: 	goto loc_14058;
        case m2c::kloc_140a4: 	goto loc_140a4;
        case m2c::kloc_140a7: 	goto loc_140a7;
        case m2c::kloc_14130: 	goto loc_14130;
        case m2c::kloc_14188: 	goto loc_14188;
        case m2c::kloc_141dc: 	goto loc_141dc;
        case m2c::kloc_1420f: 	goto loc_1420f;
        case m2c::kloc_14218: 	goto loc_14218;
        case m2c::kloc_14241: 	goto loc_14241;
        case m2c::kloc_1424d: 	goto loc_1424d;
        case m2c::kloc_142f8: 	goto loc_142f8;
        case m2c::kloc_1430e: 	goto loc_1430e;
        case m2c::kloc_14337: 	goto loc_14337;
        case m2c::kloc_14343: 	goto loc_14343;
        case m2c::kloc_1436c: 	goto loc_1436c;
        case m2c::kloc_14391: 	goto loc_14391;
        case m2c::kloc_14395: 	goto loc_14395;
        case m2c::kloc_143a9: 	goto loc_143a9;
        case m2c::kloc_143bb: 	goto loc_143bb;
        case m2c::kloc_143c3: 	goto loc_143c3;
        case m2c::kloc_143c6: 	goto loc_143c6;
        case m2c::kloc_14404: 	goto loc_14404;
        case m2c::kloc_1440c: 	goto loc_1440c;
        case m2c::kloc_14425: 	goto loc_14425;
        case m2c::kloc_1443a: 	goto loc_1443a;
        case m2c::kloc_1445f: 	goto loc_1445f;
        case m2c::kloc_1447a: 	goto loc_1447a;
        case m2c::kloc_14486: 	goto loc_14486;
        case m2c::kloc_1448d: 	goto loc_1448d;
        case m2c::kloc_14496: 	goto loc_14496;
        case m2c::kloc_1449d: 	goto loc_1449d;
        case m2c::kloc_144a4: 	goto loc_144a4;
        case m2c::kloc_144b2: 	goto loc_144b2;
        case m2c::kloc_144be: 	goto loc_144be;
        case m2c::kloc_144c6: 	goto loc_144c6;
        case m2c::kloc_14551: 	goto loc_14551;
        case m2c::kloc_14641: 	goto loc_14641;
        case m2c::kloc_14664: 	goto loc_14664;
        case m2c::kloc_14684: 	goto loc_14684;
        case m2c::kloc_14688: 	goto loc_14688;
        case m2c::kloc_1468c: 	goto loc_1468c;
        case m2c::kloc_1468d: 	goto loc_1468d;
        case m2c::kloc_146b0: 	goto loc_146b0;
        case m2c::kloc_146b4: 	goto loc_146b4;
        case m2c::kloc_146c5: 	goto loc_146c5;
        case m2c::kprint_highscore_entry: 	goto print_highscore_entry;
        case m2c::kret_1a2_0: 	goto ret_1a2_0;
        case m2c::kret_1a2_10d0: 	goto ret_1a2_10d0;
        case m2c::kret_1a2_1588: 	goto ret_1a2_1588;
        case m2c::kret_1a2_168e: 	goto ret_1a2_168e;
        case m2c::kret_1a2_1bb4: 	goto ret_1a2_1bb4;
        case m2c::kret_1a2_1c42: 	goto ret_1a2_1c42;
        case m2c::kret_1a2_2b7: 	goto ret_1a2_2b7;
        case m2c::kret_1a2_2c5: 	goto ret_1a2_2c5;
        case m2c::kret_1a2_2d7: 	goto ret_1a2_2d7;
        case m2c::kret_1a2_2f3: 	goto ret_1a2_2f3;
        case m2c::kret_1a2_2f4a: 	goto ret_1a2_2f4a;
        case m2c::kret_1a2_317: 	goto ret_1a2_317;
        case m2c::kret_1a2_3178: 	goto ret_1a2_3178;
        case m2c::kret_1a2_3d9: 	goto ret_1a2_3d9;
        case m2c::kret_1a2_46e9: 	goto ret_1a2_46e9;
        case m2c::kret_1a2_49d: 	goto ret_1a2_49d;
        case m2c::kret_1a2_4a5: 	goto ret_1a2_4a5;
        case m2c::kret_1a2_539: 	goto ret_1a2_539;
        case m2c::kret_1a2_59b: 	goto ret_1a2_59b;
        case m2c::kret_1a2_69d: 	goto ret_1a2_69d;
        case m2c::kret_1a2_f3c: 	goto ret_1a2_f3c;
        case m2c::krun_intro: 	goto run_intro;
        case m2c::krun_intro_looped: 	goto run_intro_looped;
        case m2c::krun_opponent_menu: 	goto run_opponent_menu;
        case m2c::ksecurity_check: 	goto security_check;
        case m2c::kseg000_44ce_proc: 	goto seg000_44ce_proc;
        case m2c::kseg000_599_proc: 	goto seg000_599_proc;
        case m2c::kset_default_car: 	goto set_default_car;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

