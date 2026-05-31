/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool stuntsmain(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    stuntsmain:
    _begin:
#undef var_12
#define var_12 -0x12
	// 37 var_12          = word ptr -12h ;~ 01A2:0000
#undef var_10
#define var_10 -0x10
	// 38 var_10          = word ptr -10h ;~ 01A2:0000
#undef var_e
#define var_e -0x0E
	// 39 var_E           = word ptr -0Eh ;~ 01A2:0000
#undef var_c
#define var_c -0x0C
	// 40 var_C           = word ptr -0Ch ;~ 01A2:0000
#undef var_a
#define var_a -0x0A
	// 41 var_A           = byte ptr -0Ah ;~ 01A2:0000
#undef trkptr
#define trkptr -4
	// 42 trkptr          = word ptr -4 ;~ 01A2:0000
#undef var_2
#define var_2 -2
	// 43 var_2           = word ptr -2 ;~ 01A2:0000
#undef p_argc
#define p_argc 6
	// 44 p_argc          = word ptr  6 ;~ 01A2:0000
#undef arg_2
#define arg_2 8
	// 45 arg_2           = word ptr  8 ;~ 01A2:0000
#undef p_argv
#define p_argv 0x0A
	// 46 p_argv          = byte ptr  0Ah ;~ 01A2:0000
#undef envp
#define envp 0x0E
	// 47 envp            = byte ptr  0Eh ;~ 01A2:0000
cs=0x1a2;eip=0x000000; 	X(PUSH(bp));	// 49 push    bp ;~ 01A2:0000
cs=0x1a2;eip=0x000001; 	T(MOV(bp, sp));	// 50 mov     bp, sp ;~ 01A2:0001
cs=0x1a2;eip=0x000003; 	T(SUB(sp, 0x12));	// 51 sub     sp, 12h ;~ 01A2:0003
cs=0x1a2;eip=0x000006; 	X(PUSH(di));	// 52 push    di ;~ 01A2:0006
cs=0x1a2;eip=0x000007; 	X(PUSH(si));	// 53 push    si              ; char * ;~ 01A2:0007
cs=0x1a2;eip=0x000008; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 54 push    [bp+arg_2] ;~ 01A2:0008
cs=0x1a2;eip=0x00000b; 	X(PUSH(*(dw*)(raddr(ss,bp+p_argc))));	// 55 push    [bp+p_argc] ;~ 01A2:000B
cs=0x1a2;eip=0x00000e; 	J(CALLF(init_main,0));	// 56 call    init_main ;~ 01A2:000E
cs=0x1a2;eip=0x000013; 	T(ADD(sp, 4));	// 57 add     sp, 4 ;~ 01A2:0013
cs=0x1a2;eip=0x000016; 	J(CALLF(init_div0,0));	// 58 call    init_div0 ;~ 01A2:0016
cs=0x1a2;eip=0x00001b; 	T(SUB(si, si));	// 59 sub     si, si ;~ 01A2:001B
loc_1001d:
	// 4369 
cs=0x1a2;eip=0x00001d; 	T(MOV(ax, si));	// 62 mov     ax, si ;~ 01A2:001D
cs=0x1a2;eip=0x00001f; 	T(SHL(ax, 1));	// 63 shl     ax, 1 ;~ 01A2:001F
cs=0x1a2;eip=0x000021; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 64 mov     [bp+var_C], ax ;~ 01A2:0021
cs=0x1a2;eip=0x000024; 	T(MOV(ax, 0x1D));	// 65 mov     ax, 1Dh ;~ 01A2:0024
cs=0x1a2;eip=0x000027; 	T(SUB(ax, si));	// 66 sub     ax, si ;~ 01A2:0027
cs=0x1a2;eip=0x000029; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 67 mov     [bp+var_E], ax ;~ 01A2:0029
cs=0x1a2;eip=0x00002c; 	T(MOV(ax, 0x1E));	// 68 mov     ax, 1Eh ;~ 01A2:002C
cs=0x1a2;eip=0x00002f; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_e))));	// 69 imul    [bp+var_E] ;~ 01A2:002F
cs=0x1a2;eip=0x000032; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 70 mov     bx, [bp+var_C] ;~ 01A2:0032
cs=0x1a2;eip=0x000035; 	X(MOV(*(dw*)(((db*)trackrows)+bx), ax));	// 71 mov     trackrows[bx], ax ;~ 01A2:0035
cs=0x1a2;eip=0x000039; 	T(MOV(ax, 0x1E));	// 72 mov     ax, 1Eh ;~ 01A2:0039
cs=0x1a2;eip=0x00003c; 	T(IMUL1_2(si));	// 73 imul    si ;~ 01A2:003C
cs=0x1a2;eip=0x00003e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 74 mov     bx, [bp+var_C] ;~ 01A2:003E
cs=0x1a2;eip=0x000041; 	X(MOV(*(dw*)(((db*)terrainrows)+bx), ax));	// 75 mov     terrainrows[bx], ax ;~ 01A2:0041
cs=0x1a2;eip=0x000045; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 76 mov     ax, [bp+var_E] ;~ 01A2:0045
cs=0x1a2;eip=0x000048; 	T(MOV(cl, 0x0A));	// 77 mov     cl, 0Ah ;~ 01A2:0048
cs=0x1a2;eip=0x00004a; 	T(SHL(ax, cl));	// 78 shl     ax, cl          ; *1024, or tile length ;~ 01A2:004A
cs=0x1a2;eip=0x00004c; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 79 mov     [bp+var_10], ax ;~ 01A2:004C
cs=0x1a2;eip=0x00004f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 80 mov     bx, [bp+var_C] ;~ 01A2:004F
cs=0x1a2;eip=0x000052; 	X(MOV(*(dw*)(((db*)&trackpos)+bx), ax));	// 81 mov     trackpos[bx], ax ;~ 01A2:0052
cs=0x1a2;eip=0x000056; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 82 mov     bx, [bp+var_C] ;~ 01A2:0056
cs=0x1a2;eip=0x000059; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 83 mov     ax, [bp+var_10] ;~ 01A2:0059
cs=0x1a2;eip=0x00005c; 	T(ADD(ah, 2));	// 84 add     ah, 2 ;~ 01A2:005C
cs=0x1a2;eip=0x00005f; 	X(MOV(*(dw*)(((db*)trackcenterpos)+bx), ax));	// 85 mov     trackcenterpos[bx], ax ;~ 01A2:005F
cs=0x1a2;eip=0x000063; 	T(MOV(ax, si));	// 86 mov     ax, si ;~ 01A2:0063
cs=0x1a2;eip=0x000065; 	T(SHL(ax, cl));	// 87 shl     ax, cl ;~ 01A2:0065
cs=0x1a2;eip=0x000067; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 88 mov     [bp+var_12], ax ;~ 01A2:0067
cs=0x1a2;eip=0x00006a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 89 mov     bx, [bp+var_C] ;~ 01A2:006A
cs=0x1a2;eip=0x00006d; 	X(MOV(*(dw*)(((db*)terrainpos)+bx), ax));	// 90 mov     terrainpos[bx], ax ;~ 01A2:006D
cs=0x1a2;eip=0x000071; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 91 mov     bx, [bp+var_C] ;~ 01A2:0071
cs=0x1a2;eip=0x000074; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 92 mov     ax, [bp+var_12] ;~ 01A2:0074
cs=0x1a2;eip=0x000077; 	T(ADD(ah, 2));	// 93 add     ah, 2 ;~ 01A2:0077
cs=0x1a2;eip=0x00007a; 	X(MOV(*(dw*)(((db*)terraincenterpos)+bx), ax));	// 94 mov     terraincenterpos[bx], ax ;~ 01A2:007A
cs=0x1a2;eip=0x00007e; 	T(INC(si));	// 95 inc     si ;~ 01A2:007E
cs=0x1a2;eip=0x00007f; 	T(CMP(si, 0x1E));	// 96 cmp     si, 1Eh ;~ 01A2:007F
cs=0x1a2;eip=0x000082; 	J(JL(loc_1001d));	// 97 jl      short loc_1001D ;~ 01A2:0082
cs=0x1a2;eip=0x000084; 	T(SUB(si, si));	// 98 sub     si, si ;~ 01A2:0084
loc_10086:
	// 4370 
cs=0x1a2;eip=0x000086; 	T(MOV(ax, si));	// 101 mov     ax, si ;~ 01A2:0086
cs=0x1a2;eip=0x000088; 	T(SHL(ax, 1));	// 102 shl     ax, 1 ;~ 01A2:0088
cs=0x1a2;eip=0x00008a; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 103 mov     [bp+var_12], ax ;~ 01A2:008A
cs=0x1a2;eip=0x00008d; 	T(MOV(bx, ax));	// 104 mov     bx, ax ;~ 01A2:008D
cs=0x1a2;eip=0x00008f; 	T(MOV(ax, si));	// 105 mov     ax, si ;~ 01A2:008F
cs=0x1a2;eip=0x000091; 	T(MOV(cl, 0x0A));	// 106 mov     cl, 0Ah ;~ 01A2:0091
cs=0x1a2;eip=0x000093; 	T(SHL(ax, cl));	// 107 shl     ax, cl ;~ 01A2:0093
cs=0x1a2;eip=0x000095; 	X(MOV(*(dw*)(((db*)trackpos2)+bx), ax));	// 108 mov     trackpos2[bx], ax ;~ 01A2:0095
cs=0x1a2;eip=0x000099; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12))));	// 109 mov     bx, [bp+var_12] ;~ 01A2:0099
cs=0x1a2;eip=0x00009c; 	T(MOV(ax, si));	// 110 mov     ax, si ;~ 01A2:009C
cs=0x1a2;eip=0x00009e; 	T(SHL(ax, cl));	// 111 shl     ax, cl ;~ 01A2:009E
cs=0x1a2;eip=0x0000a0; 	T(ADD(ah, 2));	// 112 add     ah, 2 ;~ 01A2:00A0
cs=0x1a2;eip=0x0000a3; 	X(MOV(*(dw*)(((db*)trackcenterpos2)+bx), ax));	// 113 mov     trackcenterpos2[bx], ax ;~ 01A2:00A3
cs=0x1a2;eip=0x0000a7; 	T(INC(si));	// 114 inc     si ;~ 01A2:00A7
cs=0x1a2;eip=0x0000a8; 	T(CMP(si, 0x1E));	// 115 cmp     si, 1Eh ;~ 01A2:00A8
cs=0x1a2;eip=0x0000ab; 	J(JL(loc_10086));	// 116 jl      short loc_10086 ;~ 01A2:00AB
cs=0x1a2;eip=0x0000ad; 	T(MOV(ax, offset(dseg,amain)));	// 117 mov     ax, offset aMain ; "main" ;~ 01A2:00AD
cs=0x1a2;eip=0x0000b0; 	X(PUSH(ax));	// 118 push    ax ;~ 01A2:00B0
cs=0x1a2;eip=0x0000b1; 	J(CALLF(file_load_resfile,0));	// 119 call    file_load_resfile ;~ 01A2:00B1
cs=0x1a2;eip=0x0000b6; 	T(ADD(sp, 2));	// 120 add     sp, 2 ;~ 01A2:00B6
cs=0x1a2;eip=0x0000b9; 	X(MOV(mainresptr, ax));	// 121 mov     mainresptr, ax ;~ 01A2:00B9
cs=0x1a2;eip=0x0000bc; 	X(MOV(word_44cee, dx));	// 122 mov     word_44CEE, dx ;~ 01A2:00BC
cs=0x1a2;eip=0x0000c0; 	T(MOV(ax, offset(dseg,afontdef_fnt)));	// 123 mov     ax, offset aFontdef_fnt ; "fontdef.fnt" ;~ 01A2:00C0
cs=0x1a2;eip=0x0000c3; 	X(PUSH(ax));	// 124 push    ax              ; char * ;~ 01A2:00C3
cs=0x1a2;eip=0x0000c4; 	T(SUB(ax, ax));	// 125 sub     ax, ax ;~ 01A2:00C4
cs=0x1a2;eip=0x0000c6; 	X(PUSH(ax));	// 126 push    ax              ; int ;~ 01A2:00C6
cs=0x1a2;eip=0x0000c7; 	J(CALLF(file_load_resource,0));	// 127 call    file_load_resource ; type 0 = binary file ;~ 01A2:00C7
cs=0x1a2;eip=0x0000cc; 	T(ADD(sp, 4));	// 128 add     sp, 4 ;~ 01A2:00CC
cs=0x1a2;eip=0x0000cf; 	X(MOV(fontdefptr, ax));	// 129 mov     fontdefptr, ax ;~ 01A2:00CF
cs=0x1a2;eip=0x0000d2; 	X(MOV(word_454c8, dx));	// 130 mov     word_454C8, dx ;~ 01A2:00D2
cs=0x1a2;eip=0x0000d6; 	T(MOV(ax, offset(dseg,afontn_fnt)));	// 131 mov     ax, offset aFontn_fnt ; "fontn.fnt" ;~ 01A2:00D6
cs=0x1a2;eip=0x0000d9; 	X(PUSH(ax));	// 132 push    ax              ; char * ;~ 01A2:00D9
cs=0x1a2;eip=0x0000da; 	T(SUB(ax, ax));	// 133 sub     ax, ax ;~ 01A2:00DA
cs=0x1a2;eip=0x0000dc; 	X(PUSH(ax));	// 134 push    ax              ; int ;~ 01A2:00DC
cs=0x1a2;eip=0x0000dd; 	J(CALLF(file_load_resource,0));	// 135 call    file_load_resource ;~ 01A2:00DD
cs=0x1a2;eip=0x0000e2; 	T(ADD(sp, 4));	// 136 add     sp, 4 ;~ 01A2:00E2
cs=0x1a2;eip=0x0000e5; 	X(MOV(fontnptr, ax));	// 137 mov     fontnptr, ax ;~ 01A2:00E5
cs=0x1a2;eip=0x0000e8; 	X(MOV(word_44d24, dx));	// 138 mov     word_44D24, dx ;~ 01A2:00E8
cs=0x1a2;eip=0x0000ec; 	J(CALLF(font_set_fontdef,0));	// 139 call    font_set_fontdef ;~ 01A2:00EC
cs=0x1a2;eip=0x0000f1; 	J(CALLF(init_polyinfo,0));	// 140 call    init_polyinfo ;~ 01A2:00F1
cs=0x1a2;eip=0x0000f6; 	T(MOV(si, 0x6BF3));	// 141 mov     si, 6BF3h       ; bytes to allocate ;~ 01A2:00F6
cs=0x1a2;eip=0x0000f9; 	T(MOV(ax, si));	// 142 mov     ax, si ;~ 01A2:00F9
cs=0x1a2;eip=0x0000fb; 	T(CWD);	// 143 cwd ;~ 01A2:00FB
cs=0x1a2;eip=0x0000fc; 	X(PUSH(dx));	// 144 push    dx ;~ 01A2:00FC
cs=0x1a2;eip=0x0000fd; 	X(PUSH(ax));	// 145 push    ax ;~ 01A2:00FD
cs=0x1a2;eip=0x0000fe; 	T(MOV(ax, offset(dseg,atrakdata)));	// 146 mov     ax, offset aTrakdata ; "trakdata" ;~ 01A2:00FE
cs=0x1a2;eip=0x000101; 	X(PUSH(ax));	// 147 push    ax ;~ 01A2:0101
cs=0x1a2;eip=0x000102; 	J(CALLF(mmgr_alloc_resbytes,0));	// 148 call    mmgr_alloc_resbytes ;~ 01A2:0102
cs=0x1a2;eip=0x000107; 	T(ADD(sp, 6));	// 149 add     sp, 6 ;~ 01A2:0107
cs=0x1a2;eip=0x00010a; 	X(MOV(*(dw*)(raddr(ss,bp+trkptr)), ax));	// 150 mov     [bp+trkptr], ax ;~ 01A2:010A
cs=0x1a2;eip=0x00010d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 151 mov     [bp+var_2], dx ;~ 01A2:010D
cs=0x1a2;eip=0x000110; 	X(MOV(*(dw*)(((db*)&td01_track_file_cpy)), ax));	// 152 mov     word ptr td01_track_file_cpy, ax ;~ 01A2:0110
cs=0x1a2;eip=0x000113; 	X(MOV(*(dw*)(((db*)&td01_track_file_cpy)+2), dx));	// 153 mov     word ptr td01_track_file_cpy+2, dx ;~ 01A2:0113
cs=0x1a2;eip=0x000117; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x70A));	// 154 add     [bp+trkptr], 70Ah ; 1802, size of a track file ;~ 01A2:0117
cs=0x1a2;eip=0x00011c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 155 mov     ax, [bp+trkptr] ;~ 01A2:011C
cs=0x1a2;eip=0x00011f; 	X(MOV(*(dw*)(((db*)&td02_penalty_related)), ax));	// 156 mov     word ptr td02_penalty_related, ax ;~ 01A2:011F
cs=0x1a2;eip=0x000122; 	X(MOV(*(dw*)(((db*)&td02_penalty_related)+2), dx));	// 157 mov     word ptr td02_penalty_related+2, dx ;~ 01A2:0122
cs=0x1a2;eip=0x000126; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x70A));	// 158 add     [bp+trkptr], 70Ah ;~ 01A2:0126
cs=0x1a2;eip=0x00012b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 159 mov     ax, [bp+trkptr] ;~ 01A2:012B
cs=0x1a2;eip=0x00012e; 	X(MOV(*(dw*)(((db*)&trackdata3)), ax));	// 160 mov     word ptr trackdata3, ax ;~ 01A2:012E
cs=0x1a2;eip=0x000131; 	X(MOV(*(dw*)(((db*)&trackdata3)+2), dx));	// 161 mov     word ptr trackdata3+2, dx ;~ 01A2:0131
cs=0x1a2;eip=0x000135; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x70A));	// 162 add     [bp+trkptr], 70Ah ;~ 01A2:0135
cs=0x1a2;eip=0x00013a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 163 mov     ax, [bp+trkptr] ;~ 01A2:013A
cs=0x1a2;eip=0x00013d; 	X(MOV(*(dw*)(((db*)&td04_aerotable_pl)), ax));	// 164 mov     word ptr td04_aerotable_pl, ax ;~ 01A2:013D
cs=0x1a2;eip=0x000140; 	X(MOV(*(dw*)(((db*)&td04_aerotable_pl)+2), dx));	// 165 mov     word ptr td04_aerotable_pl+2, dx ;~ 01A2:0140
cs=0x1a2;eip=0x000144; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x80));	// 166 add     [bp+trkptr], 80h ;~ 01A2:0144
cs=0x1a2;eip=0x000149; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 167 mov     ax, [bp+trkptr] ;~ 01A2:0149
cs=0x1a2;eip=0x00014c; 	X(MOV(*(dw*)(((db*)&td05_aerotable_op)), ax));	// 168 mov     word ptr td05_aerotable_op, ax ;~ 01A2:014C
cs=0x1a2;eip=0x00014f; 	X(MOV(*(dw*)(((db*)&td05_aerotable_op)+2), dx));	// 169 mov     word ptr td05_aerotable_op+2, dx ;~ 01A2:014F
cs=0x1a2;eip=0x000153; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x80));	// 170 add     [bp+trkptr], 80h ;~ 01A2:0153
cs=0x1a2;eip=0x000158; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 171 mov     ax, [bp+trkptr] ;~ 01A2:0158
cs=0x1a2;eip=0x00015b; 	X(MOV(trackdata6, ax));	// 172 mov     trackdata6, ax ;~ 01A2:015B
cs=0x1a2;eip=0x00015e; 	X(MOV(word_454d2, dx));	// 173 mov     word_454D2, dx ;~ 01A2:015E
cs=0x1a2;eip=0x000162; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x80));	// 174 add     [bp+trkptr], 80h ;~ 01A2:0162
cs=0x1a2;eip=0x000167; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 175 mov     ax, [bp+trkptr] ;~ 01A2:0167
cs=0x1a2;eip=0x00016a; 	X(MOV(trackdata7, ax));	// 176 mov     trackdata7, ax ;~ 01A2:016A
cs=0x1a2;eip=0x00016d; 	X(MOV(word_454b6, dx));	// 177 mov     word_454B6, dx ;~ 01A2:016D
cs=0x1a2;eip=0x000171; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x80));	// 178 add     [bp+trkptr], 80h ;~ 01A2:0171
cs=0x1a2;eip=0x000176; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 179 mov     ax, [bp+trkptr] ;~ 01A2:0176
cs=0x1a2;eip=0x000179; 	X(MOV(td08_direction_related, ax));	// 180 mov     td08_direction_related, ax ;~ 01A2:0179
cs=0x1a2;eip=0x00017c; 	X(MOV(word_45db6, dx));	// 181 mov     word_45DB6, dx ;~ 01A2:017C
cs=0x1a2;eip=0x000180; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x60));	// 182 add     [bp+trkptr], 60h ;~ 01A2:0180
cs=0x1a2;eip=0x000184; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 183 mov     ax, [bp+trkptr] ;~ 01A2:0184
cs=0x1a2;eip=0x000187; 	X(MOV(trackdata9, ax));	// 184 mov     trackdata9, ax ;~ 01A2:0187
cs=0x1a2;eip=0x00018a; 	X(MOV(word_449de, dx));	// 185 mov     word_449DE, dx ;~ 01A2:018A
cs=0x1a2;eip=0x00018e; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x180));	// 186 add     [bp+trkptr], 180h ;~ 01A2:018E
cs=0x1a2;eip=0x000193; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 187 mov     ax, [bp+trkptr] ;~ 01A2:0193
cs=0x1a2;eip=0x000196; 	X(MOV(*(dw*)(((db*)&td10_track_check_rel)), ax));	// 188 mov     word ptr td10_track_check_rel, ax ;~ 01A2:0196
cs=0x1a2;eip=0x000199; 	X(MOV(*(dw*)(((db*)&td10_track_check_rel)+2), dx));	// 189 mov     word ptr td10_track_check_rel+2, dx ;~ 01A2:0199
cs=0x1a2;eip=0x00019d; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x120));	// 190 add     [bp+trkptr], 120h ;~ 01A2:019D
cs=0x1a2;eip=0x0001a2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 191 mov     ax, [bp+trkptr] ;~ 01A2:01A2
cs=0x1a2;eip=0x0001a5; 	X(MOV(*(dw*)(((db*)&td11_highscores)), ax));	// 192 mov     word ptr td11_highscores, ax ;~ 01A2:01A5
cs=0x1a2;eip=0x0001a8; 	X(MOV(*(dw*)(((db*)&td11_highscores)+2), dx));	// 193 mov     word ptr td11_highscores+2, dx ;~ 01A2:01A8
cs=0x1a2;eip=0x0001ac; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x16C));	// 194 add     [bp+trkptr], 16Ch ;~ 01A2:01AC
cs=0x1a2;eip=0x0001b1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 195 mov     ax, [bp+trkptr] ;~ 01A2:01B1
cs=0x1a2;eip=0x0001b4; 	X(MOV(*(dw*)(((db*)&trackdata12)), ax));	// 196 mov     word ptr trackdata12, ax ;~ 01A2:01B4
cs=0x1a2;eip=0x0001b7; 	X(MOV(*(dw*)(((db*)&trackdata12)+2), dx));	// 197 mov     word ptr trackdata12+2, dx ;~ 01A2:01B7
cs=0x1a2;eip=0x0001bb; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x0F0));	// 198 add     [bp+trkptr], 0F0h ;~ 01A2:01BB
cs=0x1a2;eip=0x0001c0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 199 mov     ax, [bp+trkptr] ;~ 01A2:01C0
cs=0x1a2;eip=0x0001c3; 	X(MOV(*(dw*)(((db*)&td13_rpl_header)), ax));	// 200 mov     word ptr td13_rpl_header, ax ;~ 01A2:01C3
cs=0x1a2;eip=0x0001c6; 	X(MOV(*(dw*)(((db*)&td13_rpl_header)+2), dx));	// 201 mov     word ptr td13_rpl_header+2, dx ;~ 01A2:01C6
cs=0x1a2;eip=0x0001ca; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x1A));	// 202 add     [bp+trkptr], 1Ah ;~ 01A2:01CA
cs=0x1a2;eip=0x0001ce; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 203 mov     ax, [bp+trkptr] ;~ 01A2:01CE
cs=0x1a2;eip=0x0001d1; 	X(MOV(*(dw*)(((db*)&td14_elem_map_main)), ax));	// 204 mov     word ptr td14_elem_map_main, ax ;~ 01A2:01D1
cs=0x1a2;eip=0x0001d4; 	X(MOV(*(dw*)(((db*)&td14_elem_map_main)+2), dx));	// 205 mov     word ptr td14_elem_map_main+2, dx ;~ 01A2:01D4
cs=0x1a2;eip=0x0001d8; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x385));	// 206 add     [bp+trkptr], 385h ;~ 01A2:01D8
cs=0x1a2;eip=0x0001dd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 207 mov     ax, [bp+trkptr] ;~ 01A2:01DD
cs=0x1a2;eip=0x0001e0; 	X(MOV(*(dw*)(((db*)&td15_terr_map_main)), ax));	// 208 mov     word ptr td15_terr_map_main, ax ;~ 01A2:01E0
cs=0x1a2;eip=0x0001e3; 	X(MOV(*(dw*)(((db*)&td15_terr_map_main)+2), dx));	// 209 mov     word ptr td15_terr_map_main+2, dx ;~ 01A2:01E3
cs=0x1a2;eip=0x0001e7; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x385));	// 210 add     [bp+trkptr], 385h ;~ 01A2:01E7
cs=0x1a2;eip=0x0001ec; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 211 mov     ax, [bp+trkptr] ;~ 01A2:01EC
cs=0x1a2;eip=0x0001ef; 	X(MOV(*(dw*)(((db*)&td16_rpl_buffer)), ax));	// 212 mov     word ptr td16_rpl_buffer, ax ;~ 01A2:01EF
cs=0x1a2;eip=0x0001f2; 	X(MOV(*(dw*)(((db*)&td16_rpl_buffer)+2), dx));	// 213 mov     word ptr td16_rpl_buffer+2, dx ;~ 01A2:01F2
cs=0x1a2;eip=0x0001f6; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x2EE0));	// 214 add     [bp+trkptr], 2EE0h ;~ 01A2:01F6
cs=0x1a2;eip=0x0001fb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 215 mov     ax, [bp+trkptr] ;~ 01A2:01FB
cs=0x1a2;eip=0x0001fe; 	X(MOV(*(dw*)(((db*)&td17_trk_elem_ordered)), ax));	// 216 mov     word ptr td17_trk_elem_ordered, ax ;~ 01A2:01FE
cs=0x1a2;eip=0x000201; 	X(MOV(*(dw*)(((db*)&td17_trk_elem_ordered)+2), dx));	// 217 mov     word ptr td17_trk_elem_ordered+2, dx ;~ 01A2:0201
cs=0x1a2;eip=0x000205; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x385));	// 218 add     [bp+trkptr], 385h ;~ 01A2:0205
cs=0x1a2;eip=0x00020a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 219 mov     ax, [bp+trkptr] ;~ 01A2:020A
cs=0x1a2;eip=0x00020d; 	X(MOV(*(dw*)(((db*)&trackdata18)), ax));	// 220 mov     word ptr trackdata18, ax ;~ 01A2:020D
cs=0x1a2;eip=0x000210; 	X(MOV(*(dw*)(((db*)&trackdata18)+2), dx));	// 221 mov     word ptr trackdata18+2, dx ;~ 01A2:0210
cs=0x1a2;eip=0x000214; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x385));	// 222 add     [bp+trkptr], 385h ;~ 01A2:0214
cs=0x1a2;eip=0x000219; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 223 mov     ax, [bp+trkptr] ;~ 01A2:0219
cs=0x1a2;eip=0x00021c; 	X(MOV(*(dw*)(((db*)&trackdata19)), ax));	// 224 mov     word ptr trackdata19, ax ;~ 01A2:021C
cs=0x1a2;eip=0x00021f; 	X(MOV(*(dw*)(((db*)&trackdata19)+2), dx));	// 225 mov     word ptr trackdata19+2, dx ;~ 01A2:021F
cs=0x1a2;eip=0x000223; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x385));	// 226 add     [bp+trkptr], 385h ;~ 01A2:0223
cs=0x1a2;eip=0x000228; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 227 mov     ax, [bp+trkptr] ;~ 01A2:0228
cs=0x1a2;eip=0x00022b; 	X(MOV(*(dw*)(((db*)&td20_trk_file_appnd)), ax));	// 228 mov     word ptr td20_trk_file_appnd, ax ;~ 01A2:022B
cs=0x1a2;eip=0x00022e; 	X(MOV(*(dw*)(((db*)&td20_trk_file_appnd)+2), dx));	// 229 mov     word ptr td20_trk_file_appnd+2, dx ;~ 01A2:022E
cs=0x1a2;eip=0x000232; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x7AC));	// 230 add     [bp+trkptr], 7ACh ;~ 01A2:0232
cs=0x1a2;eip=0x000237; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 231 mov     ax, [bp+trkptr] ;~ 01A2:0237
cs=0x1a2;eip=0x00023a; 	X(MOV(*(dw*)(((db*)&td21_col_from_path)), ax));	// 232 mov     word ptr td21_col_from_path, ax ;~ 01A2:023A
cs=0x1a2;eip=0x00023d; 	X(MOV(*(dw*)(((db*)&td21_col_from_path)+2), dx));	// 233 mov     word ptr td21_col_from_path+2, dx ;~ 01A2:023D
cs=0x1a2;eip=0x000241; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x385));	// 234 add     [bp+trkptr], 385h ;~ 01A2:0241
cs=0x1a2;eip=0x000246; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 235 mov     ax, [bp+trkptr] ;~ 01A2:0246
cs=0x1a2;eip=0x000249; 	X(MOV(*(dw*)(((db*)&td22_row_from_path)), ax));	// 236 mov     word ptr td22_row_from_path, ax ;~ 01A2:0249
cs=0x1a2;eip=0x00024c; 	X(MOV(*(dw*)(((db*)&td22_row_from_path)+2), dx));	// 237 mov     word ptr td22_row_from_path+2, dx ;~ 01A2:024C
cs=0x1a2;eip=0x000250; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x385));	// 238 add     [bp+trkptr], 385h ;~ 01A2:0250
cs=0x1a2;eip=0x000255; 	T(MOV(ax, *(dw*)(raddr(ss,bp+trkptr))));	// 239 mov     ax, [bp+trkptr] ;~ 01A2:0255
cs=0x1a2;eip=0x000258; 	X(MOV(trackdata23, ax));	// 240 mov     trackdata23, ax ;~ 01A2:0258
cs=0x1a2;eip=0x00025b; 	X(MOV(word_463de, dx));	// 241 mov     word_463DE, dx ;~ 01A2:025B
cs=0x1a2;eip=0x00025f; 	X(ADD(*(dw*)(raddr(ss,bp+trkptr)), 0x30));	// 242 add     [bp+trkptr], 30h ;~ 01A2:025F
cs=0x1a2;eip=0x000263; 	J(CALLF(init_unknown,0));	// 243 call    init_unknown ;~ 01A2:0263
cs=0x1a2;eip=0x000268; 	T(MOV(ax, offset(dseg,akevin)));	// 244 mov     ax, offset aKevin ; "kevin" ;~ 01A2:0268
cs=0x1a2;eip=0x00026b; 	X(PUSH(ax));	// 245 push    ax ;~ 01A2:026B
cs=0x1a2;eip=0x00026c; 	J(CALLF(init_kevinrandom,0));	// 246 call    init_kevinrandom ;~ 01A2:026C
cs=0x1a2;eip=0x000271; 	T(ADD(sp, 2));	// 247 add     sp, 2 ;~ 01A2:0271
cs=0x1a2;eip=0x000274; 	T(MOV(ax, offset(dseg,adefault_0)));	// 248 mov     ax, offset aDefault_0 ; "DEFAULT" ;~ 01A2:0274
cs=0x1a2;eip=0x000277; 	X(PUSH(ax));	// 249 push    ax ;~ 01A2:0277
cs=0x1a2;eip=0x000278; 	T(MOV(ax, offset(dseg,byte_449b1)));	// 250 mov     ax, offset byte_449B1 ;~ 01A2:0278
cs=0x1a2;eip=0x00027b; 	X(PUSH(ax));	// 251 push    ax              ; char * ;~ 01A2:027B
cs=0x1a2;eip=0x00027c; 	J(CALLF(_strcpy,0));	// 252 call    _strcpy ;~ 01A2:027C
cs=0x1a2;eip=0x000281; 	T(ADD(sp, 4));	// 253 add     sp, 4 ;~ 01A2:0281
cs=0x1a2;eip=0x000284; 	T(SUB(si, si));	// 254 sub     si, si ;~ 01A2:0284
cs=0x1a2;eip=0x000286; 	T(MOV(ax, 1));	// 255 mov     ax, 1 ;~ 01A2:0286
cs=0x1a2;eip=0x000289; 	X(PUSH(ax));	// 256 push    ax ;~ 01A2:0289
cs=0x1a2;eip=0x00028a; 	J(CALLF(input_do_checking,0));	// 257 call    input_do_checking ;~ 01A2:028A
cs=0x1a2;eip=0x00028f; 	T(ADD(sp, 2));	// 258 add     sp, 2 ;~ 01A2:028F
cs=0x1a2;eip=0x000292; 	T(MOV(ax, 1));	// 259 mov     ax, 1 ;~ 01A2:0292
cs=0x1a2;eip=0x000295; 	X(PUSH(ax));	// 260 push    ax ;~ 01A2:0295
cs=0x1a2;eip=0x000296; 	J(CALLF(input_do_checking,0));	// 261 call    input_do_checking ;~ 01A2:0296
cs=0x1a2;eip=0x00029b; 	T(ADD(sp, 2));	// 262 add     sp, 2 ;~ 01A2:029B
cs=0x1a2;eip=0x00029e; 	J(CALLF(mouse_draw_opaque_check,0));	// 263 call    mouse_draw_opaque_check ;~ 01A2:029E
cs=0x1a2;eip=0x0002a3; 	X(MOV(kbormouse, 0));	// 264 mov     kbormouse, 0 ;~ 01A2:02A3
cs=0x1a2;eip=0x0002a8; 	X(MOV(passed_security, 1));	// 265 mov     passed_security, 1 ; originally set to 0 - bypasses the copy protection ;~ 01A2:02A8
cs=0x1a2;eip=0x0002ad; 	X(PUSH(cs));	// 266 push    cs ;~ 01A2:02AD
cs=0x1a2;eip=0x0002ae; 	J(CALL(set_default_car,0));	// 267 call    near ptr set_default_car ;~ 01A2:02AE
cs=0x1a2;eip=0x0002b1; 	T(MOV(si, 1));	// 268 mov     si, 1 ;~ 01A2:02B1
cs=0x1a2;eip=0x0002b4; 	J(JMP(_do_intro));	// 269 jmp     _do_intro ;~ 01A2:02B4
ret_1a2_2b7:
	// 4371 
cs=0x1a2;eip=0x0002b7; 	T(NOP);	// 271 nop ;~ 01A2:02B7
_tracks_menu0:
	// 4372 
cs=0x1a2;eip=0x0002b8; 	T(SUB(ax, ax));	// 274 sub     ax, ax ;~ 01A2:02B8
_tracks_menu_ax:
	// 4373 
cs=0x1a2;eip=0x0002ba; 	X(PUSH(ax));	// 277 push    ax ;~ 01A2:02BA
cs=0x1a2;eip=0x0002bb; 	X(PUSH(cs));	// 278 push    cs ;~ 01A2:02BB
cs=0x1a2;eip=0x0002bc; 	J(CALL(run_tracks_menu,0));	// 279 call    near ptr run_tracks_menu ;~ 01A2:02BC
cs=0x1a2;eip=0x0002bf; 	T(ADD(sp, 2));	// 280 add     sp, 2 ;~ 01A2:02BF
cs=0x1a2;eip=0x0002c2; 	J(JMP(_show_menu));	// 281 jmp     _show_menu ;~ 01A2:02C2
ret_1a2_2c5:
	// 4374 
cs=0x1a2;eip=0x0002c5; 	T(NOP);	// 283 nop ;~ 01A2:02C5
_do_opp_menu:
	// 4375 
cs=0x1a2;eip=0x0002c6; 	J(CALLF(check_input,0));	// 286 call    check_input ;~ 01A2:02C6
cs=0x1a2;eip=0x0002cb; 	J(CALLF(show_waiting,0));	// 287 call    show_waiting ;~ 01A2:02CB
cs=0x1a2;eip=0x0002d0; 	X(PUSH(cs));	// 288 push    cs ;~ 01A2:02D0
cs=0x1a2;eip=0x0002d1; 	J(CALL(run_opponent_menu,0));	// 289 call    near ptr run_opponent_menu ;~ 01A2:02D1
cs=0x1a2;eip=0x0002d4; 	J(JMP(_show_menu));	// 290 jmp     _show_menu ;~ 01A2:02D4
ret_1a2_2d7:
	// 4376 
cs=0x1a2;eip=0x0002d7; 	T(NOP);	// 292 nop ;~ 01A2:02D7
_do_option_menu:
	// 4377 
cs=0x1a2;eip=0x0002d8; 	J(CALLF(check_input,0));	// 295 call    check_input ;~ 01A2:02D8
cs=0x1a2;eip=0x0002dd; 	J(CALLF(show_waiting,0));	// 296 call    show_waiting ;~ 01A2:02DD
cs=0x1a2;eip=0x0002e2; 	X(PUSH(cs));	// 297 push    cs ;~ 01A2:02E2
cs=0x1a2;eip=0x0002e3; 	J(CALL(run_option_menu,0));	// 298 call    near ptr run_option_menu ;~ 01A2:02E3
cs=0x1a2;eip=0x0002e6; 	T(OR(al, al));	// 299 or      al, al ;~ 01A2:02E6
cs=0x1a2;eip=0x0002e8; 	J(JNZ(_goto_game1));	// 300 jnz     short _goto_game1 ;~ 01A2:02E8
cs=0x1a2;eip=0x0002ea; 	J(JMP(_show_menu));	// 301 jmp     _show_menu ;~ 01A2:02EA
_goto_game1:
	// 4378 
cs=0x1a2;eip=0x0002ed; 	X(MOV(*(raddr(ss,bp+var_a)), 1));	// 305 mov     [bp+var_A], 1 ;~ 01A2:02ED
cs=0x1a2;eip=0x0002f1; 	J(JMP(_do_game1));	// 306 jmp     short _do_game1 ;~ 01A2:02F1
ret_1a2_2f3:
	// 4379 
cs=0x1a2;eip=0x0002f3; 	T(NOP);	// 308 nop ;~ 01A2:02F3
_do_car_menu:
	// 4380 
cs=0x1a2;eip=0x0002f4; 	J(CALLF(check_input,0));	// 311 call    check_input ;~ 01A2:02F4
cs=0x1a2;eip=0x0002f9; 	J(CALLF(show_waiting,0));	// 312 call    show_waiting ;~ 01A2:02F9
cs=0x1a2;eip=0x0002fe; 	T(SUB(ax, ax));	// 313 sub     ax, ax ;~ 01A2:02FE
cs=0x1a2;eip=0x000300; 	X(PUSH(ax));	// 314 push    ax ;~ 01A2:0300
cs=0x1a2;eip=0x000301; 	T(MOV(ax, offset(dseg,byte_449a9)));	// 315 mov     ax, offset byte_449A9 ;~ 01A2:0301
cs=0x1a2;eip=0x000304; 	X(PUSH(ax));	// 316 push    ax ;~ 01A2:0304
cs=0x1a2;eip=0x000305; 	T(MOV(ax, offset(dseg,byte_449a8)));	// 317 mov     ax, offset byte_449A8 ;~ 01A2:0305
cs=0x1a2;eip=0x000308; 	X(PUSH(ax));	// 318 push    ax ;~ 01A2:0308
cs=0x1a2;eip=0x000309; 	T(MOV(ax, offset(dseg,gameconfig)));	// 319 mov     ax, offset gameconfig ;~ 01A2:0309
cs=0x1a2;eip=0x00030c; 	X(PUSH(ax));	// 320 push    ax ;~ 01A2:030C
cs=0x1a2;eip=0x00030d; 	X(PUSH(cs));	// 321 push    cs ;~ 01A2:030D
cs=0x1a2;eip=0x00030e; 	J(CALL(run_car_menu,0));	// 322 call    near ptr run_car_menu ;~ 01A2:030E
cs=0x1a2;eip=0x000311; 	T(ADD(sp, 8));	// 323 add     sp, 8 ;~ 01A2:0311
cs=0x1a2;eip=0x000314; 	J(JMP(_show_menu));	// 324 jmp     _show_menu ;~ 01A2:0314
ret_1a2_317:
	// 4381 
cs=0x1a2;eip=0x000317; 	T(NOP);	// 326 nop ;~ 01A2:0317
_do_game0:
	// 4382 
cs=0x1a2;eip=0x000318; 	X(MOV(*(raddr(ss,bp+var_a)), 0));	// 329 mov     [bp+var_A], 0 ;~ 01A2:0318
_do_game1:
	// 4383 
cs=0x1a2;eip=0x00031c; 	X(PUSH(si));	// 332 push    si ;~ 01A2:031C
cs=0x1a2;eip=0x00031d; 	X(PUSH(di));	// 333 push    di ;~ 01A2:031D
cs=0x1a2;eip=0x00031e; 	T(MOV(di, offset(dseg,gameconfigcopy)));	// 334 mov     di, offset gameconfigcopy ;~ 01A2:031E
cs=0x1a2;eip=0x000321; 	T(MOV(si, offset(dseg,gameconfig)));	// 335 mov     si, offset gameconfig ;~ 01A2:0321
cs=0x1a2;eip=0x000324; 	X(PUSH(ds));	// 336 push    ds ;~ 01A2:0324
cs=0x1a2;eip=0x000325; 	X(POP(es));	// 337 pop     es ;~ 01A2:0325
cs=0x1a2;eip=0x000326; 	T(MOV(cx, 0x0D));	// 339 mov     cx, 0Dh ;~ 01A2:0326
	// 340 repne movsw ;~ 01A2:0329
cs=0x1a2;eip=0x000329; 	X(	REPNE MOVSW);	// 340 repne movsw ;~ 01A2:0329
cs=0x1a2;eip=0x00032b; 	X(POP(di));	// 341 pop     di ;~ 01A2:032B
cs=0x1a2;eip=0x00032c; 	X(POP(si));	// 342 pop     si ;~ 01A2:032C
cs=0x1a2;eip=0x00032d; 	T(SUB(si, si));	// 343 sub     si, si ;~ 01A2:032D
loc_1032f:
	// 4384 
cs=0x1a2;eip=0x00032f; 	T(LES(bx, td14_elem_map_main));	// 346 les     bx, td14_elem_map_main ;~ 01A2:032F
cs=0x1a2;eip=0x000333; 	T(MOV(al, *(raddr(es,bx+si))));	// 348 mov     al, es:[bx+si] ;~ 01A2:0333
cs=0x1a2;eip=0x000336; 	T(LES(bx, td20_trk_file_appnd));	// 349 les     bx, td20_trk_file_appnd ;~ 01A2:0336
cs=0x1a2;eip=0x00033a; 	X(MOV(*(raddr(es,bx+si)), al));	// 350 mov     es:[bx+si], al ;~ 01A2:033A
cs=0x1a2;eip=0x00033d; 	T(INC(si));	// 351 inc     si ;~ 01A2:033D
cs=0x1a2;eip=0x00033e; 	T(CMP(si, 0x70A));	// 352 cmp     si, 70Ah ;~ 01A2:033E
cs=0x1a2;eip=0x000342; 	J(JL(loc_1032f));	// 353 jl      short loc_1032F ;~ 01A2:0342
cs=0x1a2;eip=0x000344; 	T(SUB(si, si));	// 354 sub     si, si ;~ 01A2:0344
loc_10346:
	// 4385 
cs=0x1a2;eip=0x000346; 	T(LES(bx, td20_trk_file_appnd));	// 357 les     bx, td20_trk_file_appnd ;~ 01A2:0346
cs=0x1a2;eip=0x00034a; 	T(MOV(al, *((byte_3b80c)+si)));	// 358 mov     al, byte_3B80C[si] ;~ 01A2:034A
cs=0x1a2;eip=0x00034e; 	X(MOV(*(raddr(es,bx+si+0x70A)), al));	// 359 mov     es:[bx+si+70Ah], al ;~ 01A2:034E
cs=0x1a2;eip=0x000353; 	T(LES(bx, td20_trk_file_appnd));	// 360 les     bx, td20_trk_file_appnd ;~ 01A2:0353
cs=0x1a2;eip=0x000357; 	T(MOV(al, *((&byte_3b85e)+si)));	// 361 mov     al, byte_3B85E[si] ;~ 01A2:0357
cs=0x1a2;eip=0x00035b; 	X(MOV(*(raddr(es,bx+si+0x75B)), al));	// 362 mov     es:[bx+si+75Bh], al ;~ 01A2:035B
cs=0x1a2;eip=0x000360; 	T(INC(si));	// 363 inc     si ;~ 01A2:0360
cs=0x1a2;eip=0x000361; 	T(CMP(si, 0x51));	// 364 cmp     si, 51h ; 'Q' ;~ 01A2:0361
cs=0x1a2;eip=0x000364; 	J(JL(loc_10346));	// 365 jl      short loc_10346 ;~ 01A2:0364
cs=0x1a2;eip=0x000366; 	T(CMP(idle_expired, 0));	// 366 cmp     idle_expired, 0 ;~ 01A2:0366
cs=0x1a2;eip=0x00036b; 	J(JNZ(_find_tedit));	// 367 jnz     short _find_tedit ;~ 01A2:036B
cs=0x1a2;eip=0x00036d; 	J(CALLF(track_setup,0));	// 368 call    track_setup ;~ 01A2:036D
cs=0x1a2;eip=0x000372; 	T(OR(al, al));	// 369 or      al, al ;~ 01A2:0372
cs=0x1a2;eip=0x000374; 	J(JZ(_sec_check1));	// 370 jz      short _sec_check1 ;~ 01A2:0374
cs=0x1a2;eip=0x000376; 	T(MOV(ax, 1));	// 371 mov     ax, 1 ;~ 01A2:0376
cs=0x1a2;eip=0x000379; 	J(JMP(_tracks_menu_ax));	// 372 jmp     _tracks_menu_ax ;~ 01A2:0379
_sec_check1:
	// 4386 
cs=0x1a2;eip=0x00037c; 	J(CALLF(random_wait,0));	// 376 call    random_wait ;~ 01A2:037C
cs=0x1a2;eip=0x000381; 	T(CMP(passed_security, 0));	// 377 cmp     passed_security, 0 ;~ 01A2:0381
cs=0x1a2;eip=0x000386; 	J(JNZ(_init_replay));	// 378 jnz     short _init_replay ;~ 01A2:0386
cs=0x1a2;eip=0x000388; 	J(CALLF(get_super_random,0));	// 379 call    get_super_random ;~ 01A2:0388
cs=0x1a2;eip=0x00038d; 	T(CWD);	// 380 cwd ;~ 01A2:038D
cs=0x1a2;eip=0x00038e; 	T(MOV(cx, 0x14));	// 381 mov     cx, 14h ;~ 01A2:038E
cs=0x1a2;eip=0x000391; 	T(IDIV2(cx));	// 382 idiv    cx ;~ 01A2:0391
cs=0x1a2;eip=0x000393; 	T(MOV(ax, dx));	// 383 mov     ax, dx ;~ 01A2:0393
cs=0x1a2;eip=0x000395; 	T(CBW);	// 384 cbw ;~ 01A2:0395
cs=0x1a2;eip=0x000396; 	X(PUSH(ax));	// 385 push    ax ;~ 01A2:0396
cs=0x1a2;eip=0x000397; 	X(PUSH(cs));	// 386 push    cs ;~ 01A2:0397
cs=0x1a2;eip=0x000398; 	J(CALL(security_check,0));	// 387 call    near ptr security_check ;~ 01A2:0398
cs=0x1a2;eip=0x00039b; 	T(ADD(sp, 2));	// 388 add     sp, 2 ;~ 01A2:039B
_init_replay:
	// 4387 
cs=0x1a2;eip=0x00039e; 	J(CALLF(audio_unload,0));	// 392 call    audio_unload ;~ 01A2:039E
cs=0x1a2;eip=0x0003a3; 	T(MOV(ax, 0x5780));	// 393 mov     ax, 5780h       ; size to allocate, 20*1120 ;~ 01A2:03A3
cs=0x1a2;eip=0x0003a6; 	T(CWD);	// 394 cwd ;~ 01A2:03A6
cs=0x1a2;eip=0x0003a7; 	X(PUSH(dx));	// 395 push    dx ;~ 01A2:03A7
cs=0x1a2;eip=0x0003a8; 	X(PUSH(ax));	// 396 push    ax ;~ 01A2:03A8
cs=0x1a2;eip=0x0003a9; 	T(MOV(ax, offset(dseg,acvx)));	// 397 mov     ax, offset aCvx ; "cvx" ;~ 01A2:03A9
cs=0x1a2;eip=0x0003ac; 	X(PUSH(ax));	// 398 push    ax ;~ 01A2:03AC
cs=0x1a2;eip=0x0003ad; 	J(CALLF(mmgr_alloc_resbytes,0));	// 399 call    mmgr_alloc_resbytes ;~ 01A2:03AD
cs=0x1a2;eip=0x0003b2; 	T(ADD(sp, 6));	// 400 add     sp, 6 ;~ 01A2:03B2
cs=0x1a2;eip=0x0003b5; 	X(MOV(cvxptr, ax));	// 401 mov     cvxptr, ax ;~ 01A2:03B5
cs=0x1a2;eip=0x0003b8; 	X(MOV(word_45a22, dx));	// 402 mov     word_45A22, dx ;~ 01A2:03B8
cs=0x1a2;eip=0x0003bc; 	T(MOV(ax, 0x0FFFF));	// 403 mov     ax, 0FFFFh ;~ 01A2:03BC
cs=0x1a2;eip=0x0003bf; 	X(PUSH(ax));	// 404 push    ax ;~ 01A2:03BF
cs=0x1a2;eip=0x0003c0; 	J(CALLF(init_game_state,0));	// 405 call    init_game_state ;~ 01A2:03C0
cs=0x1a2;eip=0x0003c5; 	T(ADD(sp, 2));	// 406 add     sp, 2 ;~ 01A2:03C5
cs=0x1a2;eip=0x0003c8; 	T(CMP(*(raddr(ss,bp+var_a)), 0));	// 407 cmp     [bp+var_A], 0 ;~ 01A2:03C8
cs=0x1a2;eip=0x0003cc; 	J(JNZ(loc_103d1));	// 408 jnz     short loc_103D1 ;~ 01A2:03CC
cs=0x1a2;eip=0x0003ce; 	J(JMP(loc_104a6));	// 409 jmp     loc_104A6 ;~ 01A2:03CE
loc_103d1:
	// 4388 
cs=0x1a2;eip=0x0003d1; 	X(MOV(byte_43966, 0));	// 413 mov     byte_43966, 0 ;~ 01A2:03D1
cs=0x1a2;eip=0x0003d6; 	J(JMP(loc_104ac));	// 414 jmp     loc_104AC ;~ 01A2:03D6
ret_1a2_3d9:
	// 4389 
cs=0x1a2;eip=0x0003d9; 	T(NOP);	// 416 nop ;~ 01A2:03D9
_find_tedit:
	// 4390 
cs=0x1a2;eip=0x0003da; 	T(MOV(ax, offset(dseg,atedit__0)));	// 419 mov     ax, offset aTedit__0 ; "tedit.*" ;~ 01A2:03DA
cs=0x1a2;eip=0x0003dd; 	X(PUSH(ax));	// 420 push    ax ;~ 01A2:03DD
cs=0x1a2;eip=0x0003de; 	J(CALLF(file_find,0));	// 421 call    file_find ;~ 01A2:03DE
cs=0x1a2;eip=0x0003e3; 	T(ADD(sp, 2));	// 422 add     sp, 2 ;~ 01A2:03E3
cs=0x1a2;eip=0x0003e6; 	T(OR(ax, ax));	// 423 or      ax, ax ;~ 01A2:03E6
cs=0x1a2;eip=0x0003e8; 	J(JNZ(_init_replay));	// 424 jnz     short _init_replay ;~ 01A2:03E8
_prepare_intro:
	// 4391 
cs=0x1a2;eip=0x0003ea; 	J(CALLF(audio_unload,0));	// 427 call    audio_unload ;~ 01A2:03EA
_do_intro0:
	// 4392 
cs=0x1a2;eip=0x0003ef; 	T(SUB(si, si));	// 431 sub     si, si ;~ 01A2:03EF
_do_intro:
	// 4393 
cs=0x1a2;eip=0x0003f1; 	T(MOV(ax, 2));	// 434 mov     ax, 2 ;~ 01A2:03F1
cs=0x1a2;eip=0x0003f4; 	X(PUSH(ax));	// 435 push    ax ;~ 01A2:03F4
cs=0x1a2;eip=0x0003f5; 	J(CALLF(ensure_file_exists,0));	// 436 call    ensure_file_exists ;~ 01A2:03F5
cs=0x1a2;eip=0x0003fa; 	T(ADD(sp, 2));	// 437 add     sp, 2 ;~ 01A2:03FA
cs=0x1a2;eip=0x0003fd; 	T(OR(si, si));	// 438 or      si, si ;~ 01A2:03FD
cs=0x1a2;eip=0x0003ff; 	J(JZ(loc_1042d));	// 439 jz      short loc_1042D ;~ 01A2:03FF
cs=0x1a2;eip=0x000401; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 440 mov     ax, offset g_path_buf ;~ 01A2:0401
cs=0x1a2;eip=0x000404; 	X(PUSH(ax));	// 441 push    ax              ; char * ;~ 01A2:0404
cs=0x1a2;eip=0x000405; 	T(MOV(ax, offset(dseg,a_trk)));	// 442 mov     ax, offset a_trk ; ".trk" ;~ 01A2:0405
cs=0x1a2;eip=0x000408; 	X(PUSH(ax));	// 443 push    ax              ; int ;~ 01A2:0408
cs=0x1a2;eip=0x000409; 	T(MOV(ax, offset(dseg,byte_449b1)));	// 444 mov     ax, offset byte_449B1 ;~ 01A2:0409
cs=0x1a2;eip=0x00040c; 	X(PUSH(ax));	// 445 push    ax ;~ 01A2:040C
cs=0x1a2;eip=0x00040d; 	T(MOV(ax, offset(dseg,byte_3b80c)));	// 446 mov     ax, offset byte_3B80C ;~ 01A2:040D
cs=0x1a2;eip=0x000410; 	X(PUSH(ax));	// 447 push    ax              ; char * ;~ 01A2:0410
cs=0x1a2;eip=0x000411; 	J(CALLF(file_build_path,0));	// 448 call    file_build_path ;~ 01A2:0411
cs=0x1a2;eip=0x000416; 	T(ADD(sp, 8));	// 449 add     sp, 8 ;~ 01A2:0416
cs=0x1a2;eip=0x000419; 	X(PUSH(*(dw*)(((db*)&td14_elem_map_main)+2)));	// 450 push    word ptr td14_elem_map_main+2 ;~ 01A2:0419
cs=0x1a2;eip=0x00041d; 	X(PUSH(*(dw*)(((db*)&td14_elem_map_main))));	// 451 push    word ptr td14_elem_map_main ;~ 01A2:041D
cs=0x1a2;eip=0x000421; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 452 mov     ax, offset g_path_buf ;~ 01A2:0421
cs=0x1a2;eip=0x000424; 	X(PUSH(ax));	// 453 push    ax ;~ 01A2:0424
cs=0x1a2;eip=0x000425; 	J(CALLF(file_read_fatal,0));	// 454 call    file_read_fatal ;~ 01A2:0425
cs=0x1a2;eip=0x00042a; 	T(ADD(sp, 6));	// 455 add     sp, 6 ;~ 01A2:042A
loc_1042d:
	// 4394 
cs=0x1a2;eip=0x00042d; 	X(MOV(idle_expired, 0));	// 458 mov     idle_expired, 0 ;~ 01A2:042D
cs=0x1a2;eip=0x000432; 	X(PUSH(cs));	// 459 push    cs ;~ 01A2:0432
cs=0x1a2;eip=0x000433; 	J(CALL(run_intro_looped,0));	// 460 call    near ptr run_intro_looped ;~ 01A2:0433
cs=0x1a2;eip=0x000436; 	T(MOV(di, ax));	// 461 mov     di, ax ;~ 01A2:0436
cs=0x1a2;eip=0x000438; 	T(CMP(di, 0x1B));	// 462 cmp     di, 1Bh ;~ 01A2:0438
cs=0x1a2;eip=0x00043b; 	J(JNZ(_show_menu));	// 463 jnz     short _show_menu ;~ 01A2:043B
cs=0x1a2;eip=0x00043d; 	J(JMP(_ask_dos));	// 464 jmp     _ask_dos ;~ 01A2:043D
_show_menu:
	// 4395 
cs=0x1a2;eip=0x000440; 	T(MOV(ax, 2));	// 469 mov     ax, 2 ;~ 01A2:0440
cs=0x1a2;eip=0x000443; 	X(PUSH(ax));	// 470 push    ax ;~ 01A2:0443
cs=0x1a2;eip=0x000444; 	J(CALLF(ensure_file_exists,0));	// 471 call    ensure_file_exists ;~ 01A2:0444
cs=0x1a2;eip=0x000449; 	T(ADD(sp, 2));	// 472 add     sp, 2 ;~ 01A2:0449
cs=0x1a2;eip=0x00044c; 	T(CMP(is_audioloaded, 0));	// 473 cmp     is_audioloaded, 0 ;~ 01A2:044C
cs=0x1a2;eip=0x000451; 	J(JNZ(loc_10467));	// 474 jnz     short loc_10467 ;~ 01A2:0451
cs=0x1a2;eip=0x000453; 	T(MOV(ax, offset(dseg,aslct)));	// 475 mov     ax, offset aSlct ; "SLCT" ;~ 01A2:0453
cs=0x1a2;eip=0x000456; 	X(PUSH(ax));	// 476 push    ax ;~ 01A2:0456
cs=0x1a2;eip=0x000457; 	T(MOV(ax, offset(dseg,askidms_0)));	// 477 mov     ax, offset aSkidms_0 ; "skidms" ;~ 01A2:0457
cs=0x1a2;eip=0x00045a; 	X(PUSH(ax));	// 478 push    ax ;~ 01A2:045A
cs=0x1a2;eip=0x00045b; 	T(MOV(ax, offset(dseg,askidslct)));	// 479 mov     ax, offset aSkidslct ; "skidslct" ;~ 01A2:045B
cs=0x1a2;eip=0x00045e; 	X(PUSH(ax));	// 480 push    ax              ; char * ;~ 01A2:045E
cs=0x1a2;eip=0x00045f; 	J(CALLF(file_load_audiores,0));	// 481 call    file_load_audiores ;~ 01A2:045F
cs=0x1a2;eip=0x000464; 	T(ADD(sp, 6));	// 482 add     sp, 6 ;~ 01A2:0464
loc_10467:
	// 4396 
cs=0x1a2;eip=0x000467; 	X(PUSH(cs));	// 485 push    cs ;~ 01A2:0467
cs=0x1a2;eip=0x000468; 	J(CALL(run_menu,0));	// 486 call    near ptr run_menu ;~ 01A2:0468
cs=0x1a2;eip=0x00046b; 	T(CBW);	// 487 cbw ;~ 01A2:046B
cs=0x1a2;eip=0x00046c; 	T(CMP(ax, 0x0FFFF));	// 488 cmp     ax, 0FFFFh ;~ 01A2:046C
cs=0x1a2;eip=0x00046f; 	J(JNZ(loc_10474));	// 489 jnz     short loc_10474 ;~ 01A2:046F
cs=0x1a2;eip=0x000471; 	J(JMP(_prepare_intro));	// 490 jmp     _prepare_intro ;~ 01A2:0471
loc_10474:
	// 4397 
cs=0x1a2;eip=0x000474; 	T(OR(ax, ax));	// 494 or      ax, ax ;~ 01A2:0474
cs=0x1a2;eip=0x000476; 	J(JNZ(loc_1047b));	// 495 jnz     short loc_1047B ;~ 01A2:0476
cs=0x1a2;eip=0x000478; 	J(JMP(_do_game0));	// 496 jmp     _do_game0 ;~ 01A2:0478
loc_1047b:
	// 4398 
cs=0x1a2;eip=0x00047b; 	T(CMP(ax, 1));	// 500 cmp     ax, 1 ;~ 01A2:047B
cs=0x1a2;eip=0x00047e; 	J(JNZ(loc_10483));	// 501 jnz     short loc_10483 ;~ 01A2:047E
cs=0x1a2;eip=0x000480; 	J(JMP(_do_car_menu));	// 502 jmp     _do_car_menu ;~ 01A2:0480
loc_10483:
	// 4399 
cs=0x1a2;eip=0x000483; 	T(CMP(ax, 2));	// 506 cmp     ax, 2 ;~ 01A2:0483
cs=0x1a2;eip=0x000486; 	J(JNZ(_do_show_menu));	// 507 jnz     short _do_show_menu ;~ 01A2:0486
cs=0x1a2;eip=0x000488; 	J(JMP(_do_opp_menu));	// 508 jmp     _do_opp_menu ;~ 01A2:0488
_do_show_menu:
	// 4400 
cs=0x1a2;eip=0x00048b; 	T(CMP(ax, 3));	// 512 cmp     ax, 3 ;~ 01A2:048B
cs=0x1a2;eip=0x00048e; 	J(JNZ(loc_10493));	// 513 jnz     short loc_10493 ;~ 01A2:048E
cs=0x1a2;eip=0x000490; 	J(JMP(_tracks_menu0));	// 514 jmp     _tracks_menu0 ;~ 01A2:0490
loc_10493:
	// 4401 
cs=0x1a2;eip=0x000493; 	T(CMP(ax, 4));	// 518 cmp     ax, 4 ;~ 01A2:0493
cs=0x1a2;eip=0x000496; 	J(JNZ(loc_1049b));	// 519 jnz     short loc_1049B ;~ 01A2:0496
cs=0x1a2;eip=0x000498; 	J(JMP(_do_option_menu));	// 520 jmp     _do_option_menu ;~ 01A2:0498
loc_1049b:
	// 4402 
cs=0x1a2;eip=0x00049b; 	J(JMP(_show_menu));	// 524 jmp     short _show_menu ;~ 01A2:049B
ret_1a2_49d:
	// 4403 
cs=0x1a2;eip=0x00049d; 	T(NOP);	// 526 nop ;~ 01A2:049D
loc_1049e:
	// 4404 
cs=0x1a2;eip=0x00049e; 	X(MOV(byte_43966, 4));	// 529 mov     byte_43966, 4 ;~ 01A2:049E
cs=0x1a2;eip=0x0004a3; 	J(JMP(loc_104ac));	// 530 jmp     short loc_104AC ;~ 01A2:04A3
ret_1a2_4a5:
	// 4405 
cs=0x1a2;eip=0x0004a5; 	T(NOP);	// 532 nop ;~ 01A2:04A5
loc_104a6:
	// 4406 
cs=0x1a2;eip=0x0004a6; 	X(MOV(word_449bc, 0));	// 536 mov     word_449BC, 0 ;~ 01A2:04A6
loc_104ac:
	// 4407 
cs=0x1a2;eip=0x0004ac; 	J(CALLF(show_waiting,0));	// 540 call    show_waiting ;~ 01A2:04AC
cs=0x1a2;eip=0x0004b1; 	J(CALLF(run_game,0));	// 541 call    run_game ;~ 01A2:04B1
cs=0x1a2;eip=0x0004b6; 	T(CMP(idle_expired, 0));	// 542 cmp     idle_expired, 0 ;~ 01A2:04B6
cs=0x1a2;eip=0x0004bb; 	J(JNZ(loc_104d2));	// 543 jnz     short loc_104D2 ;~ 01A2:04BB
cs=0x1a2;eip=0x0004bd; 	T(CMP(byte_43966, 0));	// 544 cmp     byte_43966, 0 ;~ 01A2:04BD
cs=0x1a2;eip=0x0004c2; 	J(JZ(loc_104d2));	// 545 jz      short loc_104D2 ;~ 01A2:04C2
cs=0x1a2;eip=0x0004c4; 	X(PUSH(cs));	// 546 push    cs ;~ 01A2:04C4
cs=0x1a2;eip=0x0004c5; 	J(CALL(end_hiscore,0));	// 547 call    near ptr end_hiscore ;~ 01A2:04C5
cs=0x1a2;eip=0x0004c8; 	T(CBW);	// 548 cbw ;~ 01A2:04C8
cs=0x1a2;eip=0x0004c9; 	T(OR(ax, ax));	// 549 or      ax, ax ;~ 01A2:04C9
cs=0x1a2;eip=0x0004cb; 	J(JZ(loc_1049e));	// 550 jz      short loc_1049E ;~ 01A2:04CB
cs=0x1a2;eip=0x0004cd; 	T(CMP(ax, 1));	// 551 cmp     ax, 1 ;~ 01A2:04CD
cs=0x1a2;eip=0x0004d0; 	J(JZ(loc_104a6));	// 552 jz      short loc_104A6 ;~ 01A2:04D0
loc_104d2:
	// 4408 
cs=0x1a2;eip=0x0004d2; 	X(PUSH(si));	// 556 push    si ;~ 01A2:04D2
cs=0x1a2;eip=0x0004d3; 	X(PUSH(di));	// 557 push    di ;~ 01A2:04D3
cs=0x1a2;eip=0x0004d4; 	T(MOV(di, offset(dseg,gameconfig)));	// 558 mov     di, offset gameconfig ;~ 01A2:04D4
cs=0x1a2;eip=0x0004d7; 	T(MOV(si, offset(dseg,gameconfigcopy)));	// 559 mov     si, offset gameconfigcopy ;~ 01A2:04D7
cs=0x1a2;eip=0x0004da; 	X(PUSH(ds));	// 560 push    ds ;~ 01A2:04DA
cs=0x1a2;eip=0x0004db; 	X(POP(es));	// 561 pop     es ;~ 01A2:04DB
cs=0x1a2;eip=0x0004dc; 	T(MOV(cx, 0x0D));	// 563 mov     cx, 0Dh ;~ 01A2:04DC
	// 564 repne movsw ;~ 01A2:04DF
cs=0x1a2;eip=0x0004df; 	X(	REPNE MOVSW);	// 564 repne movsw ;~ 01A2:04DF
cs=0x1a2;eip=0x0004e1; 	X(POP(di));	// 565 pop     di ;~ 01A2:04E1
cs=0x1a2;eip=0x0004e2; 	X(POP(si));	// 566 pop     si ;~ 01A2:04E2
cs=0x1a2;eip=0x0004e3; 	T(SUB(si, si));	// 567 sub     si, si ;~ 01A2:04E3
loc_104e5:
	// 4409 
cs=0x1a2;eip=0x0004e5; 	T(LES(bx, td20_trk_file_appnd));	// 570 les     bx, td20_trk_file_appnd ;~ 01A2:04E5
cs=0x1a2;eip=0x0004e9; 	T(MOV(al, *(raddr(es,bx+si))));	// 572 mov     al, es:[bx+si] ;~ 01A2:04E9
cs=0x1a2;eip=0x0004ec; 	T(LES(bx, td14_elem_map_main));	// 573 les     bx, td14_elem_map_main ;~ 01A2:04EC
cs=0x1a2;eip=0x0004f0; 	X(MOV(*(raddr(es,bx+si)), al));	// 574 mov     es:[bx+si], al ;~ 01A2:04F0
cs=0x1a2;eip=0x0004f3; 	T(INC(si));	// 575 inc     si ;~ 01A2:04F3
cs=0x1a2;eip=0x0004f4; 	T(CMP(si, 0x70A));	// 576 cmp     si, 70Ah ;~ 01A2:04F4
cs=0x1a2;eip=0x0004f8; 	J(JL(loc_104e5));	// 577 jl      short loc_104E5 ;~ 01A2:04F8
cs=0x1a2;eip=0x0004fa; 	T(SUB(si, si));	// 578 sub     si, si ;~ 01A2:04FA
loc_104fc:
	// 4410 
cs=0x1a2;eip=0x0004fc; 	T(LES(bx, td20_trk_file_appnd));	// 581 les     bx, td20_trk_file_appnd ;~ 01A2:04FC
cs=0x1a2;eip=0x000500; 	T(MOV(al, *(raddr(es,bx+si+0x70A))));	// 582 mov     al, es:[bx+si+70Ah] ;~ 01A2:0500
cs=0x1a2;eip=0x000505; 	X(MOV(*((byte_3b80c)+si), al));	// 583 mov     byte_3B80C[si], al ;~ 01A2:0505
cs=0x1a2;eip=0x000509; 	T(LES(bx, td20_trk_file_appnd));	// 584 les     bx, td20_trk_file_appnd ;~ 01A2:0509
cs=0x1a2;eip=0x00050d; 	T(MOV(al, *(raddr(es,bx+si+0x75B))));	// 585 mov     al, es:[bx+si+75Bh] ;~ 01A2:050D
cs=0x1a2;eip=0x000512; 	X(MOV(*((&byte_3b85e)+si), al));	// 586 mov     byte_3B85E[si], al ;~ 01A2:0512
cs=0x1a2;eip=0x000516; 	T(INC(si));	// 587 inc     si ;~ 01A2:0516
cs=0x1a2;eip=0x000517; 	T(CMP(si, 0x51));	// 588 cmp     si, 51h ; 'Q' ;~ 01A2:0517
cs=0x1a2;eip=0x00051a; 	J(JL(loc_104fc));	// 589 jl      short loc_104FC ;~ 01A2:051A
cs=0x1a2;eip=0x00051c; 	X(PUSH(word_45a22));	// 590 push    word_45A22 ;~ 01A2:051C
cs=0x1a2;eip=0x000520; 	X(PUSH(cvxptr));	// 591 push    cvxptr ;~ 01A2:0520
cs=0x1a2;eip=0x000524; 	J(CALLF(mmgr_release,0));	// 592 call    mmgr_release ;~ 01A2:0524
cs=0x1a2;eip=0x000529; 	T(ADD(sp, 4));	// 593 add     sp, 4 ;~ 01A2:0529
cs=0x1a2;eip=0x00052c; 	T(CMP(idle_expired, 0));	// 594 cmp     idle_expired, 0 ;~ 01A2:052C
cs=0x1a2;eip=0x000531; 	J(JNZ(loc_10536));	// 595 jnz     short loc_10536 ;~ 01A2:0531
cs=0x1a2;eip=0x000533; 	J(JMP(_show_menu));	// 596 jmp     _show_menu ;~ 01A2:0533
loc_10536:
	// 4411 
cs=0x1a2;eip=0x000536; 	J(JMP(_do_intro0));	// 600 jmp     _do_intro0 ;~ 01A2:0536
ret_1a2_539:
	// 4412 
cs=0x1a2;eip=0x000539; 	T(NOP);	// 602 nop ;~ 01A2:0539
_ask_dos:
	// 4413 
cs=0x1a2;eip=0x00053a; 	T(SUB(ax, ax));	// 605 sub     ax, ax ;~ 01A2:053A
cs=0x1a2;eip=0x00053c; 	X(PUSH(ax));	// 606 push    ax ;~ 01A2:053C
cs=0x1a2;eip=0x00053d; 	X(PUSH(ax));	// 607 push    ax ;~ 01A2:053D
cs=0x1a2;eip=0x00053e; 	X(PUSH(dialogarg2));	// 608 push    dialogarg2 ;~ 01A2:053E
cs=0x1a2;eip=0x000542; 	T(MOV(ax, 0x0FFFF));	// 609 mov     ax, 0FFFFh ;~ 01A2:0542
cs=0x1a2;eip=0x000545; 	X(PUSH(ax));	// 610 push    ax ;~ 01A2:0545
cs=0x1a2;eip=0x000546; 	X(PUSH(ax));	// 611 push    ax ;~ 01A2:0546
cs=0x1a2;eip=0x000547; 	T(MOV(ax, offset(dseg,ados)));	// 612 mov     ax, offset aDos ; "dos" ;~ 01A2:0547
cs=0x1a2;eip=0x00054a; 	X(PUSH(ax));	// 613 push    ax ;~ 01A2:054A
cs=0x1a2;eip=0x00054b; 	X(PUSH(word_44cee));	// 614 push    word_44CEE ;~ 01A2:054B
cs=0x1a2;eip=0x00054f; 	X(PUSH(mainresptr));	// 615 push    mainresptr ;~ 01A2:054F
cs=0x1a2;eip=0x000553; 	J(CALLF(locate_text_res,0));	// 616 call    locate_text_res ;~ 01A2:0553
cs=0x1a2;eip=0x000558; 	T(ADD(sp, 6));	// 617 add     sp, 6 ;~ 01A2:0558
cs=0x1a2;eip=0x00055b; 	X(PUSH(dx));	// 618 push    dx ;~ 01A2:055B
cs=0x1a2;eip=0x00055c; 	X(PUSH(ax));	// 619 push    ax ;~ 01A2:055C
cs=0x1a2;eip=0x00055d; 	T(MOV(ax, 1));	// 620 mov     ax, 1 ;~ 01A2:055D
cs=0x1a2;eip=0x000560; 	X(PUSH(ax));	// 621 push    ax ;~ 01A2:0560
cs=0x1a2;eip=0x000561; 	T(MOV(ax, 2));	// 622 mov     ax, 2 ;~ 01A2:0561
cs=0x1a2;eip=0x000564; 	X(PUSH(ax));	// 623 push    ax ;~ 01A2:0564
cs=0x1a2;eip=0x000565; 	J(CALLF(show_dialog,0));	// 624 call    show_dialog ;~ 01A2:0565
cs=0x1a2;eip=0x00056a; 	T(ADD(sp, 0x12));	// 625 add     sp, 12h ;~ 01A2:056A
cs=0x1a2;eip=0x00056d; 	T(CMP(ax, 1));	// 626 cmp     ax, 1 ;~ 01A2:056D
cs=0x1a2;eip=0x000570; 	J(JGE(loc_10575));	// 627 jge     short loc_10575 ;~ 01A2:0570
cs=0x1a2;eip=0x000572; 	J(JMP(_do_intro0));	// 628 jmp     _do_intro0 ;~ 01A2:0572
loc_10575:
	// 4414 
cs=0x1a2;eip=0x000575; 	J(CALLF(mouse_draw_opaque_check,0));	// 632 call    mouse_draw_opaque_check ;~ 01A2:0575
cs=0x1a2;eip=0x00057a; 	J(CALLF(audio_stop_unk,0));	// 633 call    audio_stop_unk ;~ 01A2:057A
cs=0x1a2;eip=0x00057f; 	J(CALLF(audiodrv_atexit,0));	// 634 call    audiodrv_atexit ;~ 01A2:057F
cs=0x1a2;eip=0x000584; 	J(CALLF(kb_exit_handler,0));	// 635 call    kb_exit_handler ;~ 01A2:0584
cs=0x1a2;eip=0x000589; 	J(CALLF(kb_shift_checking1,0));	// 636 call    kb_shift_checking1 ;~ 01A2:0589
cs=0x1a2;eip=0x00058e; 	J(CALLF(video_set_mode7,0));	// 637 call    video_set_mode7 ;~ 01A2:058E
cs=0x1a2;eip=0x000593; 	X(POP(si));	// 638 pop     si ;~ 01A2:0593
cs=0x1a2;eip=0x000594; 	X(POP(di));	// 639 pop     di ;~ 01A2:0594
cs=0x1a2;eip=0x000595; 	T(MOV(sp, bp));	// 640 mov     sp, bp ;~ 01A2:0595
cs=0x1a2;eip=0x000597; 	X(POP(bp));	// 641 pop     bp ;~ 01A2:0597
cs=0x1a2;eip=0x000598; 	J(RETF(0));	// 642 retf ;~ 01A2:0598

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
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
        case m2c::k_prepare_intro: 	goto _prepare_intro;
        case m2c::k_sec_check1: 	goto _sec_check1;
        case m2c::k_show_menu: 	goto _show_menu;
        case m2c::k_tracks_menu0: 	goto _tracks_menu0;
        case m2c::k_tracks_menu_ax: 	goto _tracks_menu_ax;
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
        case m2c::kret_1a2_2b7: 	goto ret_1a2_2b7;
        case m2c::kret_1a2_2c5: 	goto ret_1a2_2c5;
        case m2c::kret_1a2_2d7: 	goto ret_1a2_2d7;
        case m2c::kret_1a2_2f3: 	goto ret_1a2_2f3;
        case m2c::kret_1a2_317: 	goto ret_1a2_317;
        case m2c::kret_1a2_3d9: 	goto ret_1a2_3d9;
        case m2c::kret_1a2_49d: 	goto ret_1a2_49d;
        case m2c::kret_1a2_4a5: 	goto ret_1a2_4a5;
        case m2c::kret_1a2_539: 	goto ret_1a2_539;
        case m2c::kstuntsmain: 	goto stuntsmain;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg000_599_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg000_599_proc:
    _begin:
cs=0x1a2;eip=0x000599; 	T(NOP);	// 646 nop ;~ 01A2:0599
	R(return run_intro_looped(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg000_599_proc: 	goto seg000_599_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool run_intro_looped(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    run_intro_looped:
    _begin:
cs=0x1a2;eip=0x00059a; 	X(PUSH(bp));	// 653 push    bp ;~ 01A2:059A
cs=0x1a2;eip=0x00059b; 	T(MOV(bp, sp));	// 654 mov     bp, sp ;~ 01A2:059B
cs=0x1a2;eip=0x00059d; 	T(SUB(sp, 2));	// 655 sub     sp, 2 ;~ 01A2:059D
cs=0x1a2;eip=0x0005a0; 	X(PUSH(si));	// 656 push    si              ; char * ;~ 01A2:05A0
cs=0x1a2;eip=0x0005a1; 	T(MOV(ax, offset(dseg,atitl)));	// 657 mov     ax, offset aTitl ; "TITL" ;~ 01A2:05A1
cs=0x1a2;eip=0x0005a4; 	X(PUSH(ax));	// 658 push    ax ;~ 01A2:05A4
cs=0x1a2;eip=0x0005a5; 	T(MOV(ax, offset(dseg,askidms)));	// 659 mov     ax, offset aSkidms ; "skidms" ;~ 01A2:05A5
cs=0x1a2;eip=0x0005a8; 	X(PUSH(ax));	// 660 push    ax ;~ 01A2:05A8
cs=0x1a2;eip=0x0005a9; 	T(MOV(ax, offset(dseg,askidtitl)));	// 661 mov     ax, offset aSkidtitl ; "skidtitl" ;~ 01A2:05A9
cs=0x1a2;eip=0x0005ac; 	X(PUSH(ax));	// 662 push    ax              ; char * ;~ 01A2:05AC
cs=0x1a2;eip=0x0005ad; 	J(CALLF(file_load_audiores,0));	// 663 call    file_load_audiores ;~ 01A2:05AD
cs=0x1a2;eip=0x0005b2; 	T(ADD(sp, 6));	// 664 add     sp, 6 ;~ 01A2:05B2
cs=0x1a2;eip=0x0005b5; 	T(MOV(ax, offset(dseg,asdtitl)));	// 665 mov     ax, offset aSdtitl ; "sdtitl" ;~ 01A2:05B5
cs=0x1a2;eip=0x0005b8; 	X(PUSH(ax));	// 666 push    ax              ; char * ;~ 01A2:05B8
cs=0x1a2;eip=0x0005b9; 	T(MOV(ax, 2));	// 667 mov     ax, 2 ;~ 01A2:05B9
cs=0x1a2;eip=0x0005bc; 	X(PUSH(ax));	// 668 push    ax              ; int ;~ 01A2:05BC
cs=0x1a2;eip=0x0005bd; 	J(CALLF(file_load_resource,0));	// 669 call    file_load_resource ;~ 01A2:05BD
cs=0x1a2;eip=0x0005c2; 	T(ADD(sp, 4));	// 670 add     sp, 4 ;~ 01A2:05C2
cs=0x1a2;eip=0x0005c5; 	X(MOV(tempdataptr, ax));	// 671 mov     tempdataptr, ax ;~ 01A2:05C5
cs=0x1a2;eip=0x0005c8; 	X(MOV(word_45e14, dx));	// 672 mov     word_45E14, dx ;~ 01A2:05C8
cs=0x1a2;eip=0x0005cc; 	T(MOV(ax, 0x0F));	// 673 mov     ax, 0Fh ;~ 01A2:05CC
cs=0x1a2;eip=0x0005cf; 	X(PUSH(ax));	// 674 push    ax ;~ 01A2:05CF
cs=0x1a2;eip=0x0005d0; 	T(MOV(ax, 0x0C8));	// 675 mov     ax, 0C8h ; 'È' ;~ 01A2:05D0
cs=0x1a2;eip=0x0005d3; 	X(PUSH(ax));	// 676 push    ax ;~ 01A2:05D3
cs=0x1a2;eip=0x0005d4; 	T(MOV(ax, 0x140));	// 677 mov     ax, 140h ;~ 01A2:05D4
cs=0x1a2;eip=0x0005d7; 	X(PUSH(ax));	// 678 push    ax ;~ 01A2:05D7
cs=0x1a2;eip=0x0005d8; 	J(CALLF(sprite_make_wnd,0));	// 679 call    sprite_make_wnd ;~ 01A2:05D8
cs=0x1a2;eip=0x0005dd; 	T(ADD(sp, 6));	// 680 add     sp, 6 ;~ 01A2:05DD
cs=0x1a2;eip=0x0005e0; 	X(MOV(*(dw*)(((db*)&wndsprite)), ax));	// 681 mov     word ptr wndsprite, ax ;~ 01A2:05E0
cs=0x1a2;eip=0x0005e3; 	X(MOV(*(dw*)(((db*)&wndsprite)+2), dx));	// 682 mov     word ptr wndsprite+2, dx ;~ 01A2:05E3
cs=0x1a2;eip=0x0005e7; 	X(PUSH(cs));	// 683 push    cs ;~ 01A2:05E7
cs=0x1a2;eip=0x0005e8; 	J(CALL(run_intro,0));	// 684 call    near ptr run_intro ;~ 01A2:05E8
cs=0x1a2;eip=0x0005eb; 	T(MOV(si, ax));	// 685 mov     si, ax ;~ 01A2:05EB
cs=0x1a2;eip=0x0005ed; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 686 push    word ptr wndsprite+2 ;~ 01A2:05ED
cs=0x1a2;eip=0x0005f1; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 687 push    word ptr wndsprite ;~ 01A2:05F1
cs=0x1a2;eip=0x0005f5; 	J(CALLF(sprite_free_wnd,0));	// 688 call    sprite_free_wnd ;~ 01A2:05F5
cs=0x1a2;eip=0x0005fa; 	T(ADD(sp, 4));	// 689 add     sp, 4 ;~ 01A2:05FA
cs=0x1a2;eip=0x0005fd; 	X(PUSH(word_45e14));	// 690 push    word_45E14 ;~ 01A2:05FD
cs=0x1a2;eip=0x000601; 	X(PUSH(tempdataptr));	// 691 push    tempdataptr ;~ 01A2:0601
cs=0x1a2;eip=0x000605; 	J(CALLF(mmgr_free,0));	// 692 call    mmgr_free ;~ 01A2:0605
cs=0x1a2;eip=0x00060a; 	T(ADD(sp, 4));	// 693 add     sp, 4 ;~ 01A2:060A
cs=0x1a2;eip=0x00060d; 	T(OR(si, si));	// 694 or      si, si ;~ 01A2:060D
cs=0x1a2;eip=0x00060f; 	J(JNZ(loc_1068e));	// 695 jnz     short loc_1068E ;~ 01A2:060F
cs=0x1a2;eip=0x000611; 	J(CALLF(setup_intro,0));	// 696 call    setup_intro ;~ 01A2:0611
cs=0x1a2;eip=0x000616; 	T(CBW);	// 697 cbw ;~ 01A2:0616
cs=0x1a2;eip=0x000617; 	T(MOV(si, ax));	// 698 mov     si, ax ;~ 01A2:0617
cs=0x1a2;eip=0x000619; 	T(OR(si, si));	// 699 or      si, si ;~ 01A2:0619
cs=0x1a2;eip=0x00061b; 	J(JNZ(loc_1068e));	// 700 jnz     short loc_1068E ;~ 01A2:061B
cs=0x1a2;eip=0x00061d; 	T(MOV(ax, offset(dseg,asdcred)));	// 701 mov     ax, offset aSdcred ; "sdcred" ;~ 01A2:061D
cs=0x1a2;eip=0x000620; 	X(PUSH(ax));	// 702 push    ax              ; char * ;~ 01A2:0620
cs=0x1a2;eip=0x000621; 	T(MOV(ax, 2));	// 703 mov     ax, 2 ;~ 01A2:0621
cs=0x1a2;eip=0x000624; 	X(PUSH(ax));	// 704 push    ax              ; int ;~ 01A2:0624
cs=0x1a2;eip=0x000625; 	J(CALLF(file_load_resource,0));	// 705 call    file_load_resource ;~ 01A2:0625
cs=0x1a2;eip=0x00062a; 	T(ADD(sp, 4));	// 706 add     sp, 4 ;~ 01A2:062A
cs=0x1a2;eip=0x00062d; 	X(MOV(tempdataptr, ax));	// 707 mov     tempdataptr, ax ;~ 01A2:062D
cs=0x1a2;eip=0x000630; 	X(MOV(word_45e14, dx));	// 708 mov     word_45E14, dx ;~ 01A2:0630
cs=0x1a2;eip=0x000634; 	T(MOV(ax, 0x0F));	// 709 mov     ax, 0Fh ;~ 01A2:0634
cs=0x1a2;eip=0x000637; 	X(PUSH(ax));	// 710 push    ax ;~ 01A2:0637
cs=0x1a2;eip=0x000638; 	T(MOV(ax, 0x0C8));	// 711 mov     ax, 0C8h ; 'È' ;~ 01A2:0638
cs=0x1a2;eip=0x00063b; 	X(PUSH(ax));	// 712 push    ax ;~ 01A2:063B
cs=0x1a2;eip=0x00063c; 	T(MOV(ax, 0x140));	// 713 mov     ax, 140h ;~ 01A2:063C
cs=0x1a2;eip=0x00063f; 	X(PUSH(ax));	// 714 push    ax ;~ 01A2:063F
cs=0x1a2;eip=0x000640; 	J(CALLF(sprite_make_wnd,0));	// 715 call    sprite_make_wnd ;~ 01A2:0640
cs=0x1a2;eip=0x000645; 	T(ADD(sp, 6));	// 716 add     sp, 6 ;~ 01A2:0645
cs=0x1a2;eip=0x000648; 	X(MOV(*(dw*)(((db*)&wndsprite)), ax));	// 717 mov     word ptr wndsprite, ax ;~ 01A2:0648
cs=0x1a2;eip=0x00064b; 	X(MOV(*(dw*)(((db*)&wndsprite)+2), dx));	// 718 mov     word ptr wndsprite+2, dx ;~ 01A2:064B
cs=0x1a2;eip=0x00064f; 	J(CALLF(sprite_copy_wnd_to_1_clear,0));	// 719 call    sprite_copy_wnd_to_1_clear ;~ 01A2:064F
cs=0x1a2;eip=0x000654; 	T(SUB(ax, ax));	// 720 sub     ax, ax ;~ 01A2:0654
cs=0x1a2;eip=0x000656; 	X(PUSH(ax));	// 721 push    ax ;~ 01A2:0656
cs=0x1a2;eip=0x000657; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 722 push    word ptr wndsprite+2 ;~ 01A2:0657
cs=0x1a2;eip=0x00065b; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 723 push    word ptr wndsprite ;~ 01A2:065B
cs=0x1a2;eip=0x00065f; 	J(CALLF(sprite_blit_to_video,0));	// 724 call    sprite_blit_to_video ;~ 01A2:065F
cs=0x1a2;eip=0x000664; 	T(ADD(sp, 6));	// 725 add     sp, 6 ;~ 01A2:0664
cs=0x1a2;eip=0x000667; 	X(PUSH(cs));	// 726 push    cs ;~ 01A2:0667
cs=0x1a2;eip=0x000668; 	J(CALL(load_intro_resources,0));	// 727 call    near ptr load_intro_resources ;~ 01A2:0668
cs=0x1a2;eip=0x00066b; 	T(CBW);	// 728 cbw ;~ 01A2:066B
cs=0x1a2;eip=0x00066c; 	T(MOV(si, ax));	// 729 mov     si, ax ;~ 01A2:066C
cs=0x1a2;eip=0x00066e; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 730 push    word ptr wndsprite+2 ;~ 01A2:066E
cs=0x1a2;eip=0x000672; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 731 push    word ptr wndsprite ;~ 01A2:0672
cs=0x1a2;eip=0x000676; 	J(CALLF(sprite_free_wnd,0));	// 732 call    sprite_free_wnd ;~ 01A2:0676
cs=0x1a2;eip=0x00067b; 	T(ADD(sp, 4));	// 733 add     sp, 4 ;~ 01A2:067B
cs=0x1a2;eip=0x00067e; 	X(PUSH(word_45e14));	// 734 push    word_45E14 ;~ 01A2:067E
cs=0x1a2;eip=0x000682; 	X(PUSH(tempdataptr));	// 735 push    tempdataptr ;~ 01A2:0682
cs=0x1a2;eip=0x000686; 	J(CALLF(mmgr_free,0));	// 736 call    mmgr_free ;~ 01A2:0686
cs=0x1a2;eip=0x00068b; 	T(ADD(sp, 4));	// 737 add     sp, 4 ;~ 01A2:068B
loc_1068e:
	// 4415 
cs=0x1a2;eip=0x00068e; 	J(CALLF(audio_unload,0));	// 741 call    audio_unload ;~ 01A2:068E
cs=0x1a2;eip=0x000693; 	T(MOV(ax, si));	// 742 mov     ax, si ;~ 01A2:0693
cs=0x1a2;eip=0x000695; 	X(POP(si));	// 743 pop     si ;~ 01A2:0695
cs=0x1a2;eip=0x000696; 	T(MOV(sp, bp));	// 744 mov     sp, bp ;~ 01A2:0696
cs=0x1a2;eip=0x000698; 	X(POP(bp));	// 745 pop     bp ;~ 01A2:0698
cs=0x1a2;eip=0x000699; 	J(RETF(0));	// 746 retf ;~ 01A2:0699

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1068e: 	goto loc_1068e;
        case m2c::krun_intro_looped: 	goto run_intro_looped;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool run_intro(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    run_intro:
    _begin:
cs=0x1a2;eip=0x00069c; 	X(PUSH(bp));	// 757 push    bp ;~ 01A2:069C
cs=0x1a2;eip=0x00069d; 	T(MOV(bp, sp));	// 758 mov     bp, sp ;~ 01A2:069D
cs=0x1a2;eip=0x00069f; 	T(SUB(sp, 2));	// 759 sub     sp, 2 ;~ 01A2:069F
cs=0x1a2;eip=0x0006a2; 	X(PUSH(si));	// 760 push    si ;~ 01A2:06A2
cs=0x1a2;eip=0x0006a3; 	J(CALLF(mouse_draw_opaque_check,0));	// 761 call    mouse_draw_opaque_check ;~ 01A2:06A3
cs=0x1a2;eip=0x0006a8; 	J(CALLF(sprite_copy_2_to_1_clear,0));	// 762 call    sprite_copy_2_to_1_clear ;~ 01A2:06A8
cs=0x1a2;eip=0x0006ad; 	J(CALLF(mouse_draw_transparent_check,0));	// 763 call    mouse_draw_transparent_check ;~ 01A2:06AD
cs=0x1a2;eip=0x0006b2; 	J(CALLF(sprite_copy_wnd_to_1_clear,0));	// 764 call    sprite_copy_wnd_to_1_clear ;~ 01A2:06B2
cs=0x1a2;eip=0x0006b7; 	T(MOV(ax, offset(dseg,aprod)));	// 765 mov     ax, offset aProd ; "prod" ;~ 01A2:06B7
cs=0x1a2;eip=0x0006ba; 	X(PUSH(ax));	// 766 push    ax ;~ 01A2:06BA
cs=0x1a2;eip=0x0006bb; 	X(PUSH(word_45e14));	// 767 push    word_45E14 ;~ 01A2:06BB
cs=0x1a2;eip=0x0006bf; 	X(PUSH(tempdataptr));	// 768 push    tempdataptr ;~ 01A2:06BF
cs=0x1a2;eip=0x0006c3; 	J(CALLF(locate_shape_fatal,0));	// 769 call    locate_shape_fatal ;~ 01A2:06C3
cs=0x1a2;eip=0x0006c8; 	T(ADD(sp, 6));	// 770 add     sp, 6 ;~ 01A2:06C8
cs=0x1a2;eip=0x0006cb; 	T(MOV(bx, ax));	// 771 mov     bx, ax ;~ 01A2:06CB
cs=0x1a2;eip=0x0006cd; 	T(MOV(es, dx));	// 772 mov     es, dx ;~ 01A2:06CD
cs=0x1a2;eip=0x0006cf; 	T(CMP(*(dw*)(raddr(es,bx+0x0A)), 0));	// 773 cmp     word ptr es:[bx+0Ah], 0 ;~ 01A2:06CF
cs=0x1a2;eip=0x0006d4; 	J(JZ(loc_106de));	// 774 jz      short loc_106DE ;~ 01A2:06D4
cs=0x1a2;eip=0x0006d6; 	X(MOV(waitflag, 0x0A0));	// 775 mov     waitflag, 0A0h ; ' ' ;~ 01A2:06D6
cs=0x1a2;eip=0x0006dc; 	J(JMP(loc_106e4));	// 776 jmp     short loc_106E4 ;~ 01A2:06DC
loc_106de:
	// 4416 
cs=0x1a2;eip=0x0006de; 	X(MOV(waitflag, 0x0B4));	// 780 mov     waitflag, 0B4h ; '´' ;~ 01A2:06DE
loc_106e4:
	// 4417 
cs=0x1a2;eip=0x0006e4; 	T(MOV(ax, offset(dseg,aprod_0)));	// 783 mov     ax, offset aProd_0 ; "prod" ;~ 01A2:06E4
cs=0x1a2;eip=0x0006e7; 	X(PUSH(ax));	// 784 push    ax ;~ 01A2:06E7
cs=0x1a2;eip=0x0006e8; 	X(PUSH(word_45e14));	// 785 push    word_45E14 ;~ 01A2:06E8
cs=0x1a2;eip=0x0006ec; 	X(PUSH(tempdataptr));	// 786 push    tempdataptr ;~ 01A2:06EC
cs=0x1a2;eip=0x0006f0; 	J(CALLF(locate_shape_fatal,0));	// 787 call    locate_shape_fatal ;~ 01A2:06F0
cs=0x1a2;eip=0x0006f5; 	T(ADD(sp, 6));	// 788 add     sp, 6 ;~ 01A2:06F5
cs=0x1a2;eip=0x0006f8; 	X(PUSH(dx));	// 789 push    dx ;~ 01A2:06F8
cs=0x1a2;eip=0x0006f9; 	X(PUSH(ax));	// 790 push    ax ;~ 01A2:06F9
cs=0x1a2;eip=0x0006fa; 	J(CALLF(sprite_shape_to_1_alt,0));	// 791 call    sprite_shape_to_1_alt ;~ 01A2:06FA
cs=0x1a2;eip=0x0006ff; 	T(ADD(sp, 4));	// 792 add     sp, 4 ;~ 01A2:06FF
cs=0x1a2;eip=0x000702; 	T(MOV(ax, 0x0FFFF));	// 793 mov     ax, 0FFFFh ;~ 01A2:0702
cs=0x1a2;eip=0x000705; 	X(PUSH(ax));	// 794 push    ax ;~ 01A2:0705
cs=0x1a2;eip=0x000706; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 795 push    word ptr wndsprite+2 ;~ 01A2:0706
cs=0x1a2;eip=0x00070a; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 796 push    word ptr wndsprite ;~ 01A2:070A
cs=0x1a2;eip=0x00070e; 	J(CALLF(sprite_blit_to_video,0));	// 797 call    sprite_blit_to_video ;~ 01A2:070E
cs=0x1a2;eip=0x000713; 	T(ADD(sp, 6));	// 798 add     sp, 6 ;~ 01A2:0713
cs=0x1a2;eip=0x000716; 	T(MOV(si, ax));	// 799 mov     si, ax ;~ 01A2:0716
cs=0x1a2;eip=0x000718; 	T(OR(si, si));	// 800 or      si, si ;~ 01A2:0718
cs=0x1a2;eip=0x00071a; 	J(JNZ(loc_1077f));	// 801 jnz     short loc_1077F ;~ 01A2:071A
cs=0x1a2;eip=0x00071c; 	T(MOV(ax, 0x190));	// 802 mov     ax, 190h ;~ 01A2:071C
cs=0x1a2;eip=0x00071f; 	X(PUSH(ax));	// 803 push    ax ;~ 01A2:071F
cs=0x1a2;eip=0x000720; 	J(CALLF(input_repeat_check,0));	// 804 call    input_repeat_check ;~ 01A2:0720
cs=0x1a2;eip=0x000725; 	T(ADD(sp, 2));	// 805 add     sp, 2 ;~ 01A2:0725
cs=0x1a2;eip=0x000728; 	T(MOV(si, ax));	// 806 mov     si, ax ;~ 01A2:0728
cs=0x1a2;eip=0x00072a; 	T(OR(si, si));	// 807 or      si, si ;~ 01A2:072A
cs=0x1a2;eip=0x00072c; 	J(JNZ(loc_1077f));	// 808 jnz     short loc_1077F ;~ 01A2:072C
cs=0x1a2;eip=0x00072e; 	J(CALLF(sprite_copy_wnd_to_1_clear,0));	// 809 call    sprite_copy_wnd_to_1_clear ;~ 01A2:072E
cs=0x1a2;eip=0x000733; 	X(MOV(waitflag, 0x0B4));	// 810 mov     waitflag, 0B4h ; '´' ;~ 01A2:0733
cs=0x1a2;eip=0x000739; 	T(MOV(ax, offset(dseg,atitl_0)));	// 811 mov     ax, offset aTitl_0 ; "titl" ;~ 01A2:0739
cs=0x1a2;eip=0x00073c; 	X(PUSH(ax));	// 812 push    ax ;~ 01A2:073C
cs=0x1a2;eip=0x00073d; 	X(PUSH(word_45e14));	// 813 push    word_45E14 ;~ 01A2:073D
cs=0x1a2;eip=0x000741; 	X(PUSH(tempdataptr));	// 814 push    tempdataptr ;~ 01A2:0741
cs=0x1a2;eip=0x000745; 	J(CALLF(locate_shape_fatal,0));	// 815 call    locate_shape_fatal ;~ 01A2:0745
cs=0x1a2;eip=0x00074a; 	T(ADD(sp, 6));	// 816 add     sp, 6 ;~ 01A2:074A
cs=0x1a2;eip=0x00074d; 	X(PUSH(dx));	// 817 push    dx ;~ 01A2:074D
cs=0x1a2;eip=0x00074e; 	X(PUSH(ax));	// 818 push    ax ;~ 01A2:074E
cs=0x1a2;eip=0x00074f; 	J(CALLF(sprite_shape_to_1_alt,0));	// 819 call    sprite_shape_to_1_alt ;~ 01A2:074F
cs=0x1a2;eip=0x000754; 	T(ADD(sp, 4));	// 820 add     sp, 4 ;~ 01A2:0754
cs=0x1a2;eip=0x000757; 	T(MOV(ax, 0x0FFFF));	// 821 mov     ax, 0FFFFh ;~ 01A2:0757
cs=0x1a2;eip=0x00075a; 	X(PUSH(ax));	// 822 push    ax ;~ 01A2:075A
cs=0x1a2;eip=0x00075b; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 823 push    word ptr wndsprite+2 ;~ 01A2:075B
cs=0x1a2;eip=0x00075f; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 824 push    word ptr wndsprite ;~ 01A2:075F
cs=0x1a2;eip=0x000763; 	J(CALLF(sprite_blit_to_video,0));	// 825 call    sprite_blit_to_video ;~ 01A2:0763
cs=0x1a2;eip=0x000768; 	T(ADD(sp, 6));	// 826 add     sp, 6 ;~ 01A2:0768
cs=0x1a2;eip=0x00076b; 	T(MOV(si, ax));	// 827 mov     si, ax ;~ 01A2:076B
cs=0x1a2;eip=0x00076d; 	T(OR(si, si));	// 828 or      si, si ;~ 01A2:076D
cs=0x1a2;eip=0x00076f; 	J(JNZ(loc_1077f));	// 829 jnz     short loc_1077F ;~ 01A2:076F
cs=0x1a2;eip=0x000771; 	T(MOV(ax, 0x190));	// 830 mov     ax, 190h ;~ 01A2:0771
cs=0x1a2;eip=0x000774; 	X(PUSH(ax));	// 831 push    ax ;~ 01A2:0774
cs=0x1a2;eip=0x000775; 	J(CALLF(input_repeat_check,0));	// 832 call    input_repeat_check ;~ 01A2:0775
cs=0x1a2;eip=0x00077a; 	T(ADD(sp, 2));	// 833 add     sp, 2 ;~ 01A2:077A
cs=0x1a2;eip=0x00077d; 	T(MOV(si, ax));	// 834 mov     si, ax ;~ 01A2:077D
loc_1077f:
	// 4418 
cs=0x1a2;eip=0x00077f; 	T(MOV(ax, si));	// 838 mov     ax, si ;~ 01A2:077F
cs=0x1a2;eip=0x000781; 	X(POP(si));	// 839 pop     si ;~ 01A2:0781
cs=0x1a2;eip=0x000782; 	T(MOV(sp, bp));	// 840 mov     sp, bp ;~ 01A2:0782
cs=0x1a2;eip=0x000784; 	X(POP(bp));	// 841 pop     bp ;~ 01A2:0784
cs=0x1a2;eip=0x000785; 	J(RETF(0));	// 842 retf ;~ 01A2:0785

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_106de: 	goto loc_106de;
        case m2c::kloc_106e4: 	goto loc_106e4;
        case m2c::kloc_1077f: 	goto loc_1077f;
        case m2c::krun_intro: 	goto run_intro;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool load_intro_resources(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    load_intro_resources:
    _begin:
#undef var_46
#define var_46 -0x46
	// 852 var_46          = word ptr -46h ;~ 01A2:0786
#undef var_44
#define var_44 -0x44
	// 853 var_44          = word ptr -44h ;~ 01A2:0786
#undef var_40
#define var_40 -0x40
	// 854 var_40          = word ptr -40h ;~ 01A2:0786
#undef var_3e
#define var_3e -0x3E
	// 855 var_3E          = word ptr -3Eh ;~ 01A2:0786
#undef var_3a
#define var_3a -0x3A
	// 856 var_3A          = word ptr -3Ah ;~ 01A2:0786
#undef var_38
#define var_38 -0x38
	// 857 var_38          = word ptr -38h ;~ 01A2:0786
#undef var_36
#define var_36 -0x36
	// 858 var_36          = word ptr -36h ;~ 01A2:0786
#undef var_34
#define var_34 -0x34
	// 859 var_34          = dword ptr -34h ;~ 01A2:0786
#undef var_30
#define var_30 -0x30
	// 860 var_30          = dword ptr -30h ;~ 01A2:0786
#undef var_c
#define var_c -0x0C
	// 861 var_C           = word ptr -0Ch ;~ 01A2:0786
#undef var_a
#define var_a -0x0A
	// 862 var_A           = word ptr -0Ah ;~ 01A2:0786
#undef var_4
#define var_4 -4
	// 863 var_4           = word ptr -4 ;~ 01A2:0786
#undef var_2
#define var_2 -2
	// 864 var_2           = word ptr -2 ;~ 01A2:0786
cs=0x1a2;eip=0x000786; 	X(PUSH(bp));	// 866 push    bp ;~ 01A2:0786
cs=0x1a2;eip=0x000787; 	T(MOV(bp, sp));	// 867 mov     bp, sp ;~ 01A2:0787
cs=0x1a2;eip=0x000789; 	T(SUB(sp, 0x46));	// 868 sub     sp, 46h ;~ 01A2:0789
cs=0x1a2;eip=0x00078c; 	X(PUSH(di));	// 869 push    di ;~ 01A2:078C
cs=0x1a2;eip=0x00078d; 	X(PUSH(si));	// 870 push    si ;~ 01A2:078D
cs=0x1a2;eip=0x00078e; 	T(MOV(ax, offset(dseg,acred)));	// 871 mov     ax, offset aCred ; "cred" ;~ 01A2:078E
cs=0x1a2;eip=0x000791; 	X(PUSH(ax));	// 872 push    ax ;~ 01A2:0791
cs=0x1a2;eip=0x000792; 	J(CALLF(file_load_resfile,0));	// 873 call    file_load_resfile ;~ 01A2:0792
cs=0x1a2;eip=0x000797; 	T(ADD(sp, 2));	// 874 add     sp, 2 ;~ 01A2:0797
cs=0x1a2;eip=0x00079a; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), ax));	// 875 mov     [bp+var_3A], ax ;~ 01A2:079A
cs=0x1a2;eip=0x00079d; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), dx));	// 876 mov     [bp+var_38], dx ;~ 01A2:079D
cs=0x1a2;eip=0x0007a0; 	T(ax = bp+var_34);	// 877 lea     ax, [bp+var_34] ;~ 01A2:07A0
cs=0x1a2;eip=0x0007a3; 	X(PUSH(ax));	// 878 push    ax ;~ 01A2:07A3
cs=0x1a2;eip=0x0007a4; 	T(MOV(ax, offset(dseg,aarowarrwarw1ar)));	// 879 mov     ax, offset aArowarrwarw1ar ; "arowarrwarw1arw2arw3arw4arw5arw6arw7arw"... ;~ 01A2:07A4
cs=0x1a2;eip=0x0007a7; 	X(PUSH(ax));	// 880 push    ax ;~ 01A2:07A7
cs=0x1a2;eip=0x0007a8; 	X(PUSH(word_45e14));	// 881 push    word_45E14 ;~ 01A2:07A8
cs=0x1a2;eip=0x0007ac; 	X(PUSH(tempdataptr));	// 882 push    tempdataptr ;~ 01A2:07AC
cs=0x1a2;eip=0x0007b0; 	J(CALLF(locate_many_resources,0));	// 883 call    locate_many_resources ;~ 01A2:07B0
cs=0x1a2;eip=0x0007b5; 	T(ADD(sp, 8));	// 884 add     sp, 8 ;~ 01A2:07B5
cs=0x1a2;eip=0x0007b8; 	X(MOV(waitflag, 0x96));	// 885 mov     waitflag, 96h ; '–' ;~ 01A2:07B8
cs=0x1a2;eip=0x0007be; 	J(CALLF(sprite_copy_wnd_to_1_clear,0));	// 886 call    sprite_copy_wnd_to_1_clear ;~ 01A2:07BE
cs=0x1a2;eip=0x0007c3; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_30))));	// 887 les     bx, [bp+var_30] ;~ 01A2:07C3
cs=0x1a2;eip=0x0007c6; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 888 mov     ax, es:[bx+8] ;~ 01A2:07C6
cs=0x1a2;eip=0x0007ca; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 889 mov     [bp+var_2], ax ;~ 01A2:07CA
cs=0x1a2;eip=0x0007cd; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 890 mov     ax, es:[bx+0Ah] ;~ 01A2:07CD
cs=0x1a2;eip=0x0007d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 891 mov     [bp+var_4], ax ;~ 01A2:07D1
cs=0x1a2;eip=0x0007d4; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 892 mov     ax, es:[bx] ;~ 01A2:07D4
cs=0x1a2;eip=0x0007d7; 	X(IMUL1_2(video_flag1_is1));	// 893 imul    video_flag1_is1 ;~ 01A2:07D7
cs=0x1a2;eip=0x0007db; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), ax));	// 894 mov     [bp+var_3E], ax ;~ 01A2:07DB
cs=0x1a2;eip=0x0007de; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 895 mov     ax, es:[bx+2] ;~ 01A2:07DE
cs=0x1a2;eip=0x0007e2; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 896 mov     [bp+var_44], ax ;~ 01A2:07E2
cs=0x1a2;eip=0x0007e5; 	T(MOV(ax, offset(dseg,acre)));	// 897 mov     ax, offset aCre ; "cre" ;~ 01A2:07E5
cs=0x1a2;eip=0x0007e8; 	X(PUSH(ax));	// 898 push    ax ;~ 01A2:07E8
cs=0x1a2;eip=0x0007e9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 899 push    [bp+var_38] ;~ 01A2:07E9
cs=0x1a2;eip=0x0007ec; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 900 push    [bp+var_3A] ;~ 01A2:07EC
cs=0x1a2;eip=0x0007ef; 	J(CALLF(locate_text_res,0));	// 901 call    locate_text_res ;~ 01A2:07EF
cs=0x1a2;eip=0x0007f4; 	T(ADD(sp, 6));	// 902 add     sp, 6 ;~ 01A2:07F4
cs=0x1a2;eip=0x0007f7; 	X(PUSH(dx));	// 903 push    dx ;~ 01A2:07F7
cs=0x1a2;eip=0x0007f8; 	X(PUSH(ax));	// 904 push    ax ;~ 01A2:07F8
cs=0x1a2;eip=0x0007f9; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 905 mov     ax, offset resID_byte1 ;~ 01A2:07F9
cs=0x1a2;eip=0x0007fc; 	X(PUSH(ax));	// 906 push    ax ;~ 01A2:07FC
cs=0x1a2;eip=0x0007fd; 	J(CALLF(copy_string,0));	// 907 call    copy_string ;~ 01A2:07FD
cs=0x1a2;eip=0x000802; 	T(ADD(sp, 6));	// 908 add     sp, 6 ;~ 01A2:0802
cs=0x1a2;eip=0x000805; 	X(PUSH(word_407da));	// 909 push    word_407DA ;~ 01A2:0805
cs=0x1a2;eip=0x000809; 	X(PUSH(word_407d8));	// 910 push    word_407D8 ;~ 01A2:0809
cs=0x1a2;eip=0x00080d; 	T(SUB(ax, ax));	// 911 sub     ax, ax ;~ 01A2:080D
cs=0x1a2;eip=0x00080f; 	X(PUSH(ax));	// 912 push    ax ;~ 01A2:080F
cs=0x1a2;eip=0x000810; 	T(MOV(ax, 0x78));	// 913 mov     ax, 78h ; 'x' ;~ 01A2:0810
cs=0x1a2;eip=0x000813; 	X(PUSH(ax));	// 914 push    ax ;~ 01A2:0813
cs=0x1a2;eip=0x000814; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 915 mov     ax, offset resID_byte1 ;~ 01A2:0814
cs=0x1a2;eip=0x000817; 	X(PUSH(ax));	// 916 push    ax ;~ 01A2:0817
cs=0x1a2;eip=0x000818; 	J(CALLF(intro_draw_text,0));	// 917 call    intro_draw_text ;~ 01A2:0818
cs=0x1a2;eip=0x00081d; 	T(ADD(sp, 0x0A));	// 918 add     sp, 0Ah ;~ 01A2:081D
cs=0x1a2;eip=0x000820; 	T(MOV(ax, offset(dseg,agds0)));	// 919 mov     ax, offset aGds0 ; "gds0" ;~ 01A2:0820
cs=0x1a2;eip=0x000823; 	X(PUSH(ax));	// 920 push    ax ;~ 01A2:0823
cs=0x1a2;eip=0x000824; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 921 push    [bp+var_38] ;~ 01A2:0824
cs=0x1a2;eip=0x000827; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 922 push    [bp+var_3A] ;~ 01A2:0827
cs=0x1a2;eip=0x00082a; 	J(CALLF(locate_shape_alt,0));	// 923 call    locate_shape_alt ;~ 01A2:082A
cs=0x1a2;eip=0x00082f; 	T(ADD(sp, 6));	// 924 add     sp, 6 ;~ 01A2:082F
cs=0x1a2;eip=0x000832; 	X(PUSH(dx));	// 925 push    dx ;~ 01A2:0832
cs=0x1a2;eip=0x000833; 	X(PUSH(ax));	// 926 push    ax ;~ 01A2:0833
cs=0x1a2;eip=0x000834; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 927 mov     ax, offset resID_byte1 ;~ 01A2:0834
cs=0x1a2;eip=0x000837; 	X(PUSH(ax));	// 928 push    ax ;~ 01A2:0837
cs=0x1a2;eip=0x000838; 	J(CALLF(copy_string,0));	// 929 call    copy_string ;~ 01A2:0838
cs=0x1a2;eip=0x00083d; 	T(ADD(sp, 6));	// 930 add     sp, 6 ;~ 01A2:083D
cs=0x1a2;eip=0x000840; 	X(PUSH(word_407d6));	// 931 push    word_407D6 ;~ 01A2:0840
cs=0x1a2;eip=0x000844; 	X(PUSH(word_407d4));	// 932 push    word_407D4 ;~ 01A2:0844
cs=0x1a2;eip=0x000848; 	T(MOV(ax, 0x0C));	// 933 mov     ax, 0Ch ;~ 01A2:0848
cs=0x1a2;eip=0x00084b; 	X(PUSH(ax));	// 934 push    ax ;~ 01A2:084B
cs=0x1a2;eip=0x00084c; 	T(MOV(ax, 0x3C));	// 935 mov     ax, 3Ch ; '<' ;~ 01A2:084C
cs=0x1a2;eip=0x00084f; 	X(PUSH(ax));	// 936 push    ax ;~ 01A2:084F
cs=0x1a2;eip=0x000850; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 937 mov     ax, offset resID_byte1 ;~ 01A2:0850
cs=0x1a2;eip=0x000853; 	X(PUSH(ax));	// 938 push    ax ;~ 01A2:0853
cs=0x1a2;eip=0x000854; 	J(CALLF(intro_draw_text,0));	// 939 call    intro_draw_text ;~ 01A2:0854
cs=0x1a2;eip=0x000859; 	T(ADD(sp, 0x0A));	// 940 add     sp, 0Ah ;~ 01A2:0859
cs=0x1a2;eip=0x00085c; 	T(MOV(ax, offset(dseg,agds1)));	// 941 mov     ax, offset aGds1 ; "gds1" ;~ 01A2:085C
cs=0x1a2;eip=0x00085f; 	X(PUSH(ax));	// 942 push    ax ;~ 01A2:085F
cs=0x1a2;eip=0x000860; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 943 push    [bp+var_38] ;~ 01A2:0860
cs=0x1a2;eip=0x000863; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 944 push    [bp+var_3A] ;~ 01A2:0863
cs=0x1a2;eip=0x000866; 	J(CALLF(locate_shape_alt,0));	// 945 call    locate_shape_alt ;~ 01A2:0866
cs=0x1a2;eip=0x00086b; 	T(ADD(sp, 6));	// 946 add     sp, 6 ;~ 01A2:086B
cs=0x1a2;eip=0x00086e; 	X(PUSH(dx));	// 947 push    dx ;~ 01A2:086E
cs=0x1a2;eip=0x00086f; 	X(PUSH(ax));	// 948 push    ax ;~ 01A2:086F
cs=0x1a2;eip=0x000870; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 949 mov     ax, offset resID_byte1 ;~ 01A2:0870
cs=0x1a2;eip=0x000873; 	X(PUSH(ax));	// 950 push    ax ;~ 01A2:0873
cs=0x1a2;eip=0x000874; 	J(CALLF(copy_string,0));	// 951 call    copy_string ;~ 01A2:0874
cs=0x1a2;eip=0x000879; 	T(ADD(sp, 6));	// 952 add     sp, 6 ;~ 01A2:0879
cs=0x1a2;eip=0x00087c; 	X(PUSH(word_407d6));	// 953 push    word_407D6 ;~ 01A2:087C
cs=0x1a2;eip=0x000880; 	X(PUSH(word_407d4));	// 954 push    word_407D4 ;~ 01A2:0880
cs=0x1a2;eip=0x000884; 	T(MOV(ax, 0x14));	// 955 mov     ax, 14h ;~ 01A2:0884
cs=0x1a2;eip=0x000887; 	X(PUSH(ax));	// 956 push    ax ;~ 01A2:0887
cs=0x1a2;eip=0x000888; 	T(MOV(ax, 0x68));	// 957 mov     ax, 68h ; 'h' ;~ 01A2:0888
cs=0x1a2;eip=0x00088b; 	X(PUSH(ax));	// 958 push    ax ;~ 01A2:088B
cs=0x1a2;eip=0x00088c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 959 mov     ax, offset resID_byte1 ;~ 01A2:088C
cs=0x1a2;eip=0x00088f; 	X(PUSH(ax));	// 960 push    ax ;~ 01A2:088F
cs=0x1a2;eip=0x000890; 	J(CALLF(intro_draw_text,0));	// 961 call    intro_draw_text ;~ 01A2:0890
cs=0x1a2;eip=0x000895; 	T(ADD(sp, 0x0A));	// 962 add     sp, 0Ah ;~ 01A2:0895
cs=0x1a2;eip=0x000898; 	T(MOV(ax, offset(dseg,ades)));	// 963 mov     ax, offset aDes ; "des" ;~ 01A2:0898
cs=0x1a2;eip=0x00089b; 	X(PUSH(ax));	// 964 push    ax ;~ 01A2:089B
cs=0x1a2;eip=0x00089c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 965 push    [bp+var_38] ;~ 01A2:089C
cs=0x1a2;eip=0x00089f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 966 push    [bp+var_3A] ;~ 01A2:089F
cs=0x1a2;eip=0x0008a2; 	J(CALLF(locate_text_res,0));	// 967 call    locate_text_res ;~ 01A2:08A2
cs=0x1a2;eip=0x0008a7; 	T(ADD(sp, 6));	// 968 add     sp, 6 ;~ 01A2:08A7
cs=0x1a2;eip=0x0008aa; 	X(PUSH(dx));	// 969 push    dx ;~ 01A2:08AA
cs=0x1a2;eip=0x0008ab; 	X(PUSH(ax));	// 970 push    ax ;~ 01A2:08AB
cs=0x1a2;eip=0x0008ac; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 971 mov     ax, offset resID_byte1 ;~ 01A2:08AC
cs=0x1a2;eip=0x0008af; 	X(PUSH(ax));	// 972 push    ax ;~ 01A2:08AF
cs=0x1a2;eip=0x0008b0; 	J(CALLF(copy_string,0));	// 973 call    copy_string ;~ 01A2:08B0
cs=0x1a2;eip=0x0008b5; 	T(ADD(sp, 6));	// 974 add     sp, 6 ;~ 01A2:08B5
cs=0x1a2;eip=0x0008b8; 	X(PUSH(word_407de));	// 975 push    word_407DE ;~ 01A2:08B8
cs=0x1a2;eip=0x0008bc; 	X(PUSH(word_407dc));	// 976 push    word_407DC ;~ 01A2:08BC
cs=0x1a2;eip=0x0008c0; 	T(MOV(ax, 0x20));	// 977 mov     ax, 20h ; ' ' ;~ 01A2:08C0
cs=0x1a2;eip=0x0008c3; 	X(PUSH(ax));	// 978 push    ax ;~ 01A2:08C3
cs=0x1a2;eip=0x0008c4; 	T(MOV(ax, 0x14));	// 979 mov     ax, 14h ;~ 01A2:08C4
cs=0x1a2;eip=0x0008c7; 	X(PUSH(ax));	// 980 push    ax ;~ 01A2:08C7
cs=0x1a2;eip=0x0008c8; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 981 mov     ax, offset resID_byte1 ;~ 01A2:08C8
cs=0x1a2;eip=0x0008cb; 	X(PUSH(ax));	// 982 push    ax ;~ 01A2:08CB
cs=0x1a2;eip=0x0008cc; 	J(CALLF(intro_draw_text,0));	// 983 call    intro_draw_text ;~ 01A2:08CC
cs=0x1a2;eip=0x0008d1; 	T(ADD(sp, 0x0A));	// 984 add     sp, 0Ah ;~ 01A2:08D1
cs=0x1a2;eip=0x0008d4; 	T(MOV(ax, offset(dseg,agdon)));	// 985 mov     ax, offset aGdon ; "gdon" ;~ 01A2:08D4
cs=0x1a2;eip=0x0008d7; 	X(PUSH(ax));	// 986 push    ax ;~ 01A2:08D7
cs=0x1a2;eip=0x0008d8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 987 push    [bp+var_38] ;~ 01A2:08D8
cs=0x1a2;eip=0x0008db; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 988 push    [bp+var_3A] ;~ 01A2:08DB
cs=0x1a2;eip=0x0008de; 	J(CALLF(locate_shape_alt,0));	// 989 call    locate_shape_alt ;~ 01A2:08DE
cs=0x1a2;eip=0x0008e3; 	T(ADD(sp, 6));	// 990 add     sp, 6 ;~ 01A2:08E3
cs=0x1a2;eip=0x0008e6; 	X(PUSH(dx));	// 991 push    dx ;~ 01A2:08E6
cs=0x1a2;eip=0x0008e7; 	X(PUSH(ax));	// 992 push    ax ;~ 01A2:08E7
cs=0x1a2;eip=0x0008e8; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 993 mov     ax, offset resID_byte1 ;~ 01A2:08E8
cs=0x1a2;eip=0x0008eb; 	X(PUSH(ax));	// 994 push    ax ;~ 01A2:08EB
cs=0x1a2;eip=0x0008ec; 	J(CALLF(copy_string,0));	// 995 call    copy_string ;~ 01A2:08EC
cs=0x1a2;eip=0x0008f1; 	T(ADD(sp, 6));	// 996 add     sp, 6 ;~ 01A2:08F1
cs=0x1a2;eip=0x0008f4; 	X(PUSH(word_407d6));	// 997 push    word_407D6 ;~ 01A2:08F4
cs=0x1a2;eip=0x0008f8; 	X(PUSH(word_407d4));	// 998 push    word_407D4 ;~ 01A2:08F8
cs=0x1a2;eip=0x0008fc; 	T(MOV(ax, 0x2C));	// 999 mov     ax, 2Ch ; ',' ;~ 01A2:08FC
cs=0x1a2;eip=0x0008ff; 	X(PUSH(ax));	// 1000 push    ax ;~ 01A2:08FF
cs=0x1a2;eip=0x000900; 	T(MOV(ax, 0x14));	// 1001 mov     ax, 14h ;~ 01A2:0900
cs=0x1a2;eip=0x000903; 	X(PUSH(ax));	// 1002 push    ax ;~ 01A2:0903
cs=0x1a2;eip=0x000904; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1003 mov     ax, offset resID_byte1 ;~ 01A2:0904
cs=0x1a2;eip=0x000907; 	X(PUSH(ax));	// 1004 push    ax ;~ 01A2:0907
cs=0x1a2;eip=0x000908; 	J(CALLF(intro_draw_text,0));	// 1005 call    intro_draw_text ;~ 01A2:0908
cs=0x1a2;eip=0x00090d; 	T(ADD(sp, 0x0A));	// 1006 add     sp, 0Ah ;~ 01A2:090D
cs=0x1a2;eip=0x000910; 	T(MOV(ax, offset(dseg,agkev)));	// 1007 mov     ax, offset aGkev ; "gkev" ;~ 01A2:0910
cs=0x1a2;eip=0x000913; 	X(PUSH(ax));	// 1008 push    ax ;~ 01A2:0913
cs=0x1a2;eip=0x000914; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1009 push    [bp+var_38] ;~ 01A2:0914
cs=0x1a2;eip=0x000917; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1010 push    [bp+var_3A] ;~ 01A2:0917
cs=0x1a2;eip=0x00091a; 	J(CALLF(locate_shape_alt,0));	// 1011 call    locate_shape_alt ;~ 01A2:091A
cs=0x1a2;eip=0x00091f; 	T(ADD(sp, 6));	// 1012 add     sp, 6 ;~ 01A2:091F
cs=0x1a2;eip=0x000922; 	X(PUSH(dx));	// 1013 push    dx ;~ 01A2:0922
cs=0x1a2;eip=0x000923; 	X(PUSH(ax));	// 1014 push    ax ;~ 01A2:0923
cs=0x1a2;eip=0x000924; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1015 mov     ax, offset resID_byte1 ;~ 01A2:0924
cs=0x1a2;eip=0x000927; 	X(PUSH(ax));	// 1016 push    ax ;~ 01A2:0927
cs=0x1a2;eip=0x000928; 	J(CALLF(copy_string,0));	// 1017 call    copy_string ;~ 01A2:0928
cs=0x1a2;eip=0x00092d; 	T(ADD(sp, 6));	// 1018 add     sp, 6 ;~ 01A2:092D
cs=0x1a2;eip=0x000930; 	X(PUSH(word_407d6));	// 1019 push    word_407D6 ;~ 01A2:0930
cs=0x1a2;eip=0x000934; 	X(PUSH(word_407d4));	// 1020 push    word_407D4 ;~ 01A2:0934
cs=0x1a2;eip=0x000938; 	T(MOV(ax, 0x34));	// 1021 mov     ax, 34h ; '4' ;~ 01A2:0938
cs=0x1a2;eip=0x00093b; 	X(PUSH(ax));	// 1022 push    ax ;~ 01A2:093B
cs=0x1a2;eip=0x00093c; 	T(MOV(ax, 0x14));	// 1023 mov     ax, 14h ;~ 01A2:093C
cs=0x1a2;eip=0x00093f; 	X(PUSH(ax));	// 1024 push    ax ;~ 01A2:093F
cs=0x1a2;eip=0x000940; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1025 mov     ax, offset resID_byte1 ;~ 01A2:0940
cs=0x1a2;eip=0x000943; 	X(PUSH(ax));	// 1026 push    ax ;~ 01A2:0943
cs=0x1a2;eip=0x000944; 	J(CALLF(intro_draw_text,0));	// 1027 call    intro_draw_text ;~ 01A2:0944
cs=0x1a2;eip=0x000949; 	T(ADD(sp, 0x0A));	// 1028 add     sp, 0Ah ;~ 01A2:0949
cs=0x1a2;eip=0x00094c; 	T(MOV(ax, offset(dseg,agbra)));	// 1029 mov     ax, offset aGbra ; "gbra" ;~ 01A2:094C
cs=0x1a2;eip=0x00094f; 	X(PUSH(ax));	// 1030 push    ax ;~ 01A2:094F
cs=0x1a2;eip=0x000950; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1031 push    [bp+var_38] ;~ 01A2:0950
cs=0x1a2;eip=0x000953; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1032 push    [bp+var_3A] ;~ 01A2:0953
cs=0x1a2;eip=0x000956; 	J(CALLF(locate_shape_alt,0));	// 1033 call    locate_shape_alt ;~ 01A2:0956
cs=0x1a2;eip=0x00095b; 	T(ADD(sp, 6));	// 1034 add     sp, 6 ;~ 01A2:095B
cs=0x1a2;eip=0x00095e; 	X(PUSH(dx));	// 1035 push    dx ;~ 01A2:095E
cs=0x1a2;eip=0x00095f; 	X(PUSH(ax));	// 1036 push    ax ;~ 01A2:095F
cs=0x1a2;eip=0x000960; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1037 mov     ax, offset resID_byte1 ;~ 01A2:0960
cs=0x1a2;eip=0x000963; 	X(PUSH(ax));	// 1038 push    ax ;~ 01A2:0963
cs=0x1a2;eip=0x000964; 	J(CALLF(copy_string,0));	// 1039 call    copy_string ;~ 01A2:0964
cs=0x1a2;eip=0x000969; 	T(ADD(sp, 6));	// 1040 add     sp, 6 ;~ 01A2:0969
cs=0x1a2;eip=0x00096c; 	X(PUSH(word_407d6));	// 1041 push    word_407D6 ;~ 01A2:096C
cs=0x1a2;eip=0x000970; 	X(PUSH(word_407d4));	// 1042 push    word_407D4 ;~ 01A2:0970
cs=0x1a2;eip=0x000974; 	T(MOV(ax, 0x3C));	// 1043 mov     ax, 3Ch ; '<' ;~ 01A2:0974
cs=0x1a2;eip=0x000977; 	X(PUSH(ax));	// 1044 push    ax ;~ 01A2:0977
cs=0x1a2;eip=0x000978; 	T(MOV(ax, 0x14));	// 1045 mov     ax, 14h ;~ 01A2:0978
cs=0x1a2;eip=0x00097b; 	X(PUSH(ax));	// 1046 push    ax ;~ 01A2:097B
cs=0x1a2;eip=0x00097c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1047 mov     ax, offset resID_byte1 ;~ 01A2:097C
cs=0x1a2;eip=0x00097f; 	X(PUSH(ax));	// 1048 push    ax ;~ 01A2:097F
cs=0x1a2;eip=0x000980; 	J(CALLF(intro_draw_text,0));	// 1049 call    intro_draw_text ;~ 01A2:0980
cs=0x1a2;eip=0x000985; 	T(ADD(sp, 0x0A));	// 1050 add     sp, 0Ah ;~ 01A2:0985
cs=0x1a2;eip=0x000988; 	T(MOV(ax, offset(dseg,agrob)));	// 1051 mov     ax, offset aGrob ; "grob" ;~ 01A2:0988
cs=0x1a2;eip=0x00098b; 	X(PUSH(ax));	// 1052 push    ax ;~ 01A2:098B
cs=0x1a2;eip=0x00098c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1053 push    [bp+var_38] ;~ 01A2:098C
cs=0x1a2;eip=0x00098f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1054 push    [bp+var_3A] ;~ 01A2:098F
cs=0x1a2;eip=0x000992; 	J(CALLF(locate_shape_alt,0));	// 1055 call    locate_shape_alt ;~ 01A2:0992
cs=0x1a2;eip=0x000997; 	T(ADD(sp, 6));	// 1056 add     sp, 6 ;~ 01A2:0997
cs=0x1a2;eip=0x00099a; 	X(PUSH(dx));	// 1057 push    dx ;~ 01A2:099A
cs=0x1a2;eip=0x00099b; 	X(PUSH(ax));	// 1058 push    ax ;~ 01A2:099B
cs=0x1a2;eip=0x00099c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1059 mov     ax, offset resID_byte1 ;~ 01A2:099C
cs=0x1a2;eip=0x00099f; 	X(PUSH(ax));	// 1060 push    ax ;~ 01A2:099F
cs=0x1a2;eip=0x0009a0; 	J(CALLF(copy_string,0));	// 1061 call    copy_string ;~ 01A2:09A0
cs=0x1a2;eip=0x0009a5; 	T(ADD(sp, 6));	// 1062 add     sp, 6 ;~ 01A2:09A5
cs=0x1a2;eip=0x0009a8; 	X(PUSH(word_407d6));	// 1063 push    word_407D6 ;~ 01A2:09A8
cs=0x1a2;eip=0x0009ac; 	X(PUSH(word_407d4));	// 1064 push    word_407D4 ;~ 01A2:09AC
cs=0x1a2;eip=0x0009b0; 	T(MOV(ax, 0x44));	// 1065 mov     ax, 44h ; 'D' ;~ 01A2:09B0
cs=0x1a2;eip=0x0009b3; 	X(PUSH(ax));	// 1066 push    ax ;~ 01A2:09B3
cs=0x1a2;eip=0x0009b4; 	T(MOV(ax, 0x14));	// 1067 mov     ax, 14h ;~ 01A2:09B4
cs=0x1a2;eip=0x0009b7; 	X(PUSH(ax));	// 1068 push    ax ;~ 01A2:09B7
cs=0x1a2;eip=0x0009b8; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1069 mov     ax, offset resID_byte1 ;~ 01A2:09B8
cs=0x1a2;eip=0x0009bb; 	X(PUSH(ax));	// 1070 push    ax ;~ 01A2:09BB
cs=0x1a2;eip=0x0009bc; 	J(CALLF(intro_draw_text,0));	// 1071 call    intro_draw_text ;~ 01A2:09BC
cs=0x1a2;eip=0x0009c1; 	T(ADD(sp, 0x0A));	// 1072 add     sp, 0Ah ;~ 01A2:09C1
cs=0x1a2;eip=0x0009c4; 	T(MOV(ax, offset(dseg,agsta)));	// 1073 mov     ax, offset aGsta ; "gsta" ;~ 01A2:09C4
cs=0x1a2;eip=0x0009c7; 	X(PUSH(ax));	// 1074 push    ax ;~ 01A2:09C7
cs=0x1a2;eip=0x0009c8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1075 push    [bp+var_38] ;~ 01A2:09C8
cs=0x1a2;eip=0x0009cb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1076 push    [bp+var_3A] ;~ 01A2:09CB
cs=0x1a2;eip=0x0009ce; 	J(CALLF(locate_shape_alt,0));	// 1077 call    locate_shape_alt ;~ 01A2:09CE
cs=0x1a2;eip=0x0009d3; 	T(ADD(sp, 6));	// 1078 add     sp, 6 ;~ 01A2:09D3
cs=0x1a2;eip=0x0009d6; 	X(PUSH(dx));	// 1079 push    dx ;~ 01A2:09D6
cs=0x1a2;eip=0x0009d7; 	X(PUSH(ax));	// 1080 push    ax ;~ 01A2:09D7
cs=0x1a2;eip=0x0009d8; 	T(MOV(ax, 0x0AC74));	// 1081 mov     ax, 0AC74h ;~ 01A2:09D8
cs=0x1a2;eip=0x0009db; 	X(PUSH(ax));	// 1082 push    ax ;~ 01A2:09DB
cs=0x1a2;eip=0x0009dc; 	J(CALLF(copy_string,0));	// 1083 call    copy_string ;~ 01A2:09DC
cs=0x1a2;eip=0x0009e1; 	T(ADD(sp, 6));	// 1084 add     sp, 6 ;~ 01A2:09E1
cs=0x1a2;eip=0x0009e4; 	X(PUSH(word_407d6));	// 1085 push    word_407D6 ;~ 01A2:09E4
cs=0x1a2;eip=0x0009e8; 	X(PUSH(word_407d4));	// 1086 push    word_407D4 ;~ 01A2:09E8
cs=0x1a2;eip=0x0009ec; 	T(MOV(ax, 0x4C));	// 1087 mov     ax, 4Ch ; 'L' ;~ 01A2:09EC
cs=0x1a2;eip=0x0009ef; 	X(PUSH(ax));	// 1088 push    ax ;~ 01A2:09EF
cs=0x1a2;eip=0x0009f0; 	T(MOV(ax, 0x14));	// 1089 mov     ax, 14h ;~ 01A2:09F0
cs=0x1a2;eip=0x0009f3; 	X(PUSH(ax));	// 1090 push    ax ;~ 01A2:09F3
cs=0x1a2;eip=0x0009f4; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1091 mov     ax, offset resID_byte1 ;~ 01A2:09F4
cs=0x1a2;eip=0x0009f7; 	X(PUSH(ax));	// 1092 push    ax ;~ 01A2:09F7
cs=0x1a2;eip=0x0009f8; 	J(CALLF(intro_draw_text,0));	// 1093 call    intro_draw_text ;~ 01A2:09F8
cs=0x1a2;eip=0x0009fd; 	T(ADD(sp, 0x0A));	// 1094 add     sp, 0Ah ;~ 01A2:09FD
cs=0x1a2;eip=0x000a00; 	T(MOV(ax, offset(dseg,amus)));	// 1095 mov     ax, offset aMus ; "mus" ;~ 01A2:0A00
cs=0x1a2;eip=0x000a03; 	X(PUSH(ax));	// 1096 push    ax ;~ 01A2:0A03
cs=0x1a2;eip=0x000a04; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1097 push    [bp+var_38] ;~ 01A2:0A04
cs=0x1a2;eip=0x000a07; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1098 push    [bp+var_3A] ;~ 01A2:0A07
cs=0x1a2;eip=0x000a0a; 	J(CALLF(locate_text_res,0));	// 1099 call    locate_text_res ;~ 01A2:0A0A
cs=0x1a2;eip=0x000a0f; 	T(ADD(sp, 6));	// 1100 add     sp, 6 ;~ 01A2:0A0F
cs=0x1a2;eip=0x000a12; 	X(PUSH(dx));	// 1101 push    dx ;~ 01A2:0A12
cs=0x1a2;eip=0x000a13; 	X(PUSH(ax));	// 1102 push    ax ;~ 01A2:0A13
cs=0x1a2;eip=0x000a14; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1103 mov     ax, offset resID_byte1 ;~ 01A2:0A14
cs=0x1a2;eip=0x000a17; 	X(PUSH(ax));	// 1104 push    ax ;~ 01A2:0A17
cs=0x1a2;eip=0x000a18; 	J(CALLF(copy_string,0));	// 1105 call    copy_string ;~ 01A2:0A18
cs=0x1a2;eip=0x000a1d; 	T(ADD(sp, 6));	// 1106 add     sp, 6 ;~ 01A2:0A1D
cs=0x1a2;eip=0x000a20; 	X(PUSH(word_407ea));	// 1107 push    word_407EA ;~ 01A2:0A20
cs=0x1a2;eip=0x000a24; 	X(PUSH(word_407e8));	// 1108 push    word_407E8 ;~ 01A2:0A24
cs=0x1a2;eip=0x000a28; 	T(MOV(ax, 0x5C));	// 1109 mov     ax, 5Ch ; '\' ;~ 01A2:0A28
cs=0x1a2;eip=0x000a2b; 	X(PUSH(ax));	// 1110 push    ax ;~ 01A2:0A2B
cs=0x1a2;eip=0x000a2c; 	T(MOV(ax, 0x14));	// 1111 mov     ax, 14h ;~ 01A2:0A2C
cs=0x1a2;eip=0x000a2f; 	X(PUSH(ax));	// 1112 push    ax ;~ 01A2:0A2F
cs=0x1a2;eip=0x000a30; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1113 mov     ax, offset resID_byte1 ;~ 01A2:0A30
cs=0x1a2;eip=0x000a33; 	X(PUSH(ax));	// 1114 push    ax ;~ 01A2:0A33
cs=0x1a2;eip=0x000a34; 	J(CALLF(intro_draw_text,0));	// 1115 call    intro_draw_text ;~ 01A2:0A34
cs=0x1a2;eip=0x000a39; 	T(ADD(sp, 0x0A));	// 1116 add     sp, 0Ah ;~ 01A2:0A39
cs=0x1a2;eip=0x000a3c; 	T(MOV(ax, offset(dseg,agmsy)));	// 1117 mov     ax, offset aGmsy ; "gmsy" ;~ 01A2:0A3C
cs=0x1a2;eip=0x000a3f; 	X(PUSH(ax));	// 1118 push    ax ;~ 01A2:0A3F
cs=0x1a2;eip=0x000a40; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1119 push    [bp+var_38] ;~ 01A2:0A40
cs=0x1a2;eip=0x000a43; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1120 push    [bp+var_3A] ;~ 01A2:0A43
cs=0x1a2;eip=0x000a46; 	J(CALLF(locate_shape_alt,0));	// 1121 call    locate_shape_alt ;~ 01A2:0A46
cs=0x1a2;eip=0x000a4b; 	T(ADD(sp, 6));	// 1122 add     sp, 6 ;~ 01A2:0A4B
cs=0x1a2;eip=0x000a4e; 	X(PUSH(dx));	// 1123 push    dx ;~ 01A2:0A4E
cs=0x1a2;eip=0x000a4f; 	X(PUSH(ax));	// 1124 push    ax ;~ 01A2:0A4F
cs=0x1a2;eip=0x000a50; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1125 mov     ax, offset resID_byte1 ;~ 01A2:0A50
cs=0x1a2;eip=0x000a53; 	X(PUSH(ax));	// 1126 push    ax ;~ 01A2:0A53
cs=0x1a2;eip=0x000a54; 	J(CALLF(copy_string,0));	// 1127 call    copy_string ;~ 01A2:0A54
cs=0x1a2;eip=0x000a59; 	T(ADD(sp, 6));	// 1128 add     sp, 6 ;~ 01A2:0A59
cs=0x1a2;eip=0x000a5c; 	X(PUSH(word_407d6));	// 1129 push    word_407D6 ;~ 01A2:0A5C
cs=0x1a2;eip=0x000a60; 	X(PUSH(word_407d4));	// 1130 push    word_407D4 ;~ 01A2:0A60
cs=0x1a2;eip=0x000a64; 	T(MOV(ax, 0x68));	// 1131 mov     ax, 68h ; 'h' ;~ 01A2:0A64
cs=0x1a2;eip=0x000a67; 	X(PUSH(ax));	// 1132 push    ax ;~ 01A2:0A67
cs=0x1a2;eip=0x000a68; 	T(MOV(ax, 0x14));	// 1133 mov     ax, 14h ;~ 01A2:0A68
cs=0x1a2;eip=0x000a6b; 	X(PUSH(ax));	// 1134 push    ax ;~ 01A2:0A6B
cs=0x1a2;eip=0x000a6c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1135 mov     ax, offset resID_byte1 ;~ 01A2:0A6C
cs=0x1a2;eip=0x000a6f; 	X(PUSH(ax));	// 1136 push    ax ;~ 01A2:0A6F
cs=0x1a2;eip=0x000a70; 	J(CALLF(intro_draw_text,0));	// 1137 call    intro_draw_text ;~ 01A2:0A70
cs=0x1a2;eip=0x000a75; 	T(ADD(sp, 0x0A));	// 1138 add     sp, 0Ah ;~ 01A2:0A75
cs=0x1a2;eip=0x000a78; 	T(MOV(ax, offset(dseg,agkri)));	// 1139 mov     ax, offset aGkri ; "gkri" ;~ 01A2:0A78
cs=0x1a2;eip=0x000a7b; 	X(PUSH(ax));	// 1140 push    ax ;~ 01A2:0A7B
cs=0x1a2;eip=0x000a7c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1141 push    [bp+var_38] ;~ 01A2:0A7C
cs=0x1a2;eip=0x000a7f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1142 push    [bp+var_3A] ;~ 01A2:0A7F
cs=0x1a2;eip=0x000a82; 	J(CALLF(locate_shape_alt,0));	// 1143 call    locate_shape_alt ;~ 01A2:0A82
cs=0x1a2;eip=0x000a87; 	T(ADD(sp, 6));	// 1144 add     sp, 6 ;~ 01A2:0A87
cs=0x1a2;eip=0x000a8a; 	X(PUSH(dx));	// 1145 push    dx ;~ 01A2:0A8A
cs=0x1a2;eip=0x000a8b; 	X(PUSH(ax));	// 1146 push    ax ;~ 01A2:0A8B
cs=0x1a2;eip=0x000a8c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1147 mov     ax, offset resID_byte1 ;~ 01A2:0A8C
cs=0x1a2;eip=0x000a8f; 	X(PUSH(ax));	// 1148 push    ax ;~ 01A2:0A8F
cs=0x1a2;eip=0x000a90; 	J(CALLF(copy_string,0));	// 1149 call    copy_string ;~ 01A2:0A90
cs=0x1a2;eip=0x000a95; 	T(ADD(sp, 6));	// 1150 add     sp, 6 ;~ 01A2:0A95
cs=0x1a2;eip=0x000a98; 	X(PUSH(word_407d6));	// 1151 push    word_407D6 ;~ 01A2:0A98
cs=0x1a2;eip=0x000a9c; 	X(PUSH(word_407d4));	// 1152 push    word_407D4 ;~ 01A2:0A9C
cs=0x1a2;eip=0x000aa0; 	T(MOV(ax, 0x70));	// 1153 mov     ax, 70h ; 'p' ;~ 01A2:0AA0
cs=0x1a2;eip=0x000aa3; 	X(PUSH(ax));	// 1154 push    ax ;~ 01A2:0AA3
cs=0x1a2;eip=0x000aa4; 	T(MOV(ax, 0x14));	// 1155 mov     ax, 14h ;~ 01A2:0AA4
cs=0x1a2;eip=0x000aa7; 	X(PUSH(ax));	// 1156 push    ax ;~ 01A2:0AA7
cs=0x1a2;eip=0x000aa8; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1157 mov     ax, offset resID_byte1 ;~ 01A2:0AA8
cs=0x1a2;eip=0x000aab; 	X(PUSH(ax));	// 1158 push    ax ;~ 01A2:0AAB
cs=0x1a2;eip=0x000aac; 	J(CALLF(intro_draw_text,0));	// 1159 call    intro_draw_text ;~ 01A2:0AAC
cs=0x1a2;eip=0x000ab1; 	T(ADD(sp, 0x0A));	// 1160 add     sp, 0Ah ;~ 01A2:0AB1
cs=0x1a2;eip=0x000ab4; 	T(MOV(ax, offset(dseg,agbri)));	// 1161 mov     ax, offset aGbri ; "gbri" ;~ 01A2:0AB4
cs=0x1a2;eip=0x000ab7; 	X(PUSH(ax));	// 1162 push    ax ;~ 01A2:0AB7
cs=0x1a2;eip=0x000ab8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1163 push    [bp+var_38] ;~ 01A2:0AB8
cs=0x1a2;eip=0x000abb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1164 push    [bp+var_3A] ;~ 01A2:0ABB
cs=0x1a2;eip=0x000abe; 	J(CALLF(locate_shape_alt,0));	// 1165 call    locate_shape_alt ;~ 01A2:0ABE
cs=0x1a2;eip=0x000ac3; 	T(ADD(sp, 6));	// 1166 add     sp, 6 ;~ 01A2:0AC3
cs=0x1a2;eip=0x000ac6; 	X(PUSH(dx));	// 1167 push    dx ;~ 01A2:0AC6
cs=0x1a2;eip=0x000ac7; 	X(PUSH(ax));	// 1168 push    ax ;~ 01A2:0AC7
cs=0x1a2;eip=0x000ac8; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1169 mov     ax, offset resID_byte1 ;~ 01A2:0AC8
cs=0x1a2;eip=0x000acb; 	X(PUSH(ax));	// 1170 push    ax ;~ 01A2:0ACB
cs=0x1a2;eip=0x000acc; 	J(CALLF(copy_string,0));	// 1171 call    copy_string ;~ 01A2:0ACC
cs=0x1a2;eip=0x000ad1; 	T(ADD(sp, 6));	// 1172 add     sp, 6 ;~ 01A2:0AD1
cs=0x1a2;eip=0x000ad4; 	X(PUSH(word_407d6));	// 1173 push    word_407D6 ;~ 01A2:0AD4
cs=0x1a2;eip=0x000ad8; 	X(PUSH(word_407d4));	// 1174 push    word_407D4 ;~ 01A2:0AD8
cs=0x1a2;eip=0x000adc; 	T(MOV(ax, 0x78));	// 1175 mov     ax, 78h ; 'x' ;~ 01A2:0ADC
cs=0x1a2;eip=0x000adf; 	X(PUSH(ax));	// 1176 push    ax ;~ 01A2:0ADF
cs=0x1a2;eip=0x000ae0; 	T(MOV(ax, 0x14));	// 1177 mov     ax, 14h ;~ 01A2:0AE0
cs=0x1a2;eip=0x000ae3; 	X(PUSH(ax));	// 1178 push    ax ;~ 01A2:0AE3
cs=0x1a2;eip=0x000ae4; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1179 mov     ax, offset resID_byte1 ;~ 01A2:0AE4
cs=0x1a2;eip=0x000ae7; 	X(PUSH(ax));	// 1180 push    ax ;~ 01A2:0AE7
cs=0x1a2;eip=0x000ae8; 	J(CALLF(intro_draw_text,0));	// 1181 call    intro_draw_text ;~ 01A2:0AE8
cs=0x1a2;eip=0x000aed; 	T(ADD(sp, 0x0A));	// 1182 add     sp, 0Ah ;~ 01A2:0AED
cs=0x1a2;eip=0x000af0; 	T(MOV(ax, offset(dseg,apro)));	// 1183 mov     ax, offset aPro ; "pro" ;~ 01A2:0AF0
cs=0x1a2;eip=0x000af3; 	X(PUSH(ax));	// 1184 push    ax ;~ 01A2:0AF3
cs=0x1a2;eip=0x000af4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1185 push    [bp+var_38] ;~ 01A2:0AF4
cs=0x1a2;eip=0x000af7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1186 push    [bp+var_3A] ;~ 01A2:0AF7
cs=0x1a2;eip=0x000afa; 	J(CALLF(locate_text_res,0));	// 1187 call    locate_text_res ;~ 01A2:0AFA
cs=0x1a2;eip=0x000aff; 	T(ADD(sp, 6));	// 1188 add     sp, 6 ;~ 01A2:0AFF
cs=0x1a2;eip=0x000b02; 	X(PUSH(dx));	// 1189 push    dx ;~ 01A2:0B02
cs=0x1a2;eip=0x000b03; 	X(PUSH(ax));	// 1190 push    ax ;~ 01A2:0B03
cs=0x1a2;eip=0x000b04; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1191 mov     ax, offset resID_byte1 ;~ 01A2:0B04
cs=0x1a2;eip=0x000b07; 	X(PUSH(ax));	// 1192 push    ax ;~ 01A2:0B07
cs=0x1a2;eip=0x000b08; 	J(CALLF(copy_string,0));	// 1193 call    copy_string ;~ 01A2:0B08
cs=0x1a2;eip=0x000b0d; 	T(ADD(sp, 6));	// 1194 add     sp, 6 ;~ 01A2:0B0D
cs=0x1a2;eip=0x000b10; 	X(PUSH(word_407e2));	// 1195 push    word_407E2 ;~ 01A2:0B10
cs=0x1a2;eip=0x000b14; 	X(PUSH(word_407e0));	// 1196 push    word_407E0 ;~ 01A2:0B14
cs=0x1a2;eip=0x000b18; 	T(MOV(ax, 0x20));	// 1197 mov     ax, 20h ; ' ' ;~ 01A2:0B18
cs=0x1a2;eip=0x000b1b; 	X(PUSH(ax));	// 1198 push    ax ;~ 01A2:0B1B
cs=0x1a2;eip=0x000b1c; 	T(MOV(ax, 0x0AC));	// 1199 mov     ax, 0ACh ; '¬' ;~ 01A2:0B1C
cs=0x1a2;eip=0x000b1f; 	X(PUSH(ax));	// 1200 push    ax ;~ 01A2:0B1F
cs=0x1a2;eip=0x000b20; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1201 mov     ax, offset resID_byte1 ;~ 01A2:0B20
cs=0x1a2;eip=0x000b23; 	X(PUSH(ax));	// 1202 push    ax ;~ 01A2:0B23
cs=0x1a2;eip=0x000b24; 	J(CALLF(intro_draw_text,0));	// 1203 call    intro_draw_text ;~ 01A2:0B24
cs=0x1a2;eip=0x000b29; 	T(ADD(sp, 0x0A));	// 1204 add     sp, 0Ah ;~ 01A2:0B29
cs=0x1a2;eip=0x000b2c; 	T(MOV(ax, offset(dseg,agkev_0)));	// 1205 mov     ax, offset aGkev_0 ; "gkev" ;~ 01A2:0B2C
cs=0x1a2;eip=0x000b2f; 	X(PUSH(ax));	// 1206 push    ax ;~ 01A2:0B2F
cs=0x1a2;eip=0x000b30; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1207 push    [bp+var_38] ;~ 01A2:0B30
cs=0x1a2;eip=0x000b33; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1208 push    [bp+var_3A] ;~ 01A2:0B33
cs=0x1a2;eip=0x000b36; 	J(CALLF(locate_shape_alt,0));	// 1209 call    locate_shape_alt ;~ 01A2:0B36
cs=0x1a2;eip=0x000b3b; 	T(ADD(sp, 6));	// 1210 add     sp, 6 ;~ 01A2:0B3B
cs=0x1a2;eip=0x000b3e; 	X(PUSH(dx));	// 1211 push    dx ;~ 01A2:0B3E
cs=0x1a2;eip=0x000b3f; 	X(PUSH(ax));	// 1212 push    ax ;~ 01A2:0B3F
cs=0x1a2;eip=0x000b40; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1213 mov     ax, offset resID_byte1 ;~ 01A2:0B40
cs=0x1a2;eip=0x000b43; 	X(PUSH(ax));	// 1214 push    ax ;~ 01A2:0B43
cs=0x1a2;eip=0x000b44; 	J(CALLF(copy_string,0));	// 1215 call    copy_string ;~ 01A2:0B44
cs=0x1a2;eip=0x000b49; 	T(ADD(sp, 6));	// 1216 add     sp, 6 ;~ 01A2:0B49
cs=0x1a2;eip=0x000b4c; 	X(PUSH(word_407d6));	// 1217 push    word_407D6 ;~ 01A2:0B4C
cs=0x1a2;eip=0x000b50; 	X(PUSH(word_407d4));	// 1218 push    word_407D4 ;~ 01A2:0B50
cs=0x1a2;eip=0x000b54; 	T(MOV(ax, 0x2C));	// 1219 mov     ax, 2Ch ; ',' ;~ 01A2:0B54
cs=0x1a2;eip=0x000b57; 	X(PUSH(ax));	// 1220 push    ax ;~ 01A2:0B57
cs=0x1a2;eip=0x000b58; 	T(MOV(ax, 0x0AC));	// 1221 mov     ax, 0ACh ; '¬' ;~ 01A2:0B58
cs=0x1a2;eip=0x000b5b; 	X(PUSH(ax));	// 1222 push    ax ;~ 01A2:0B5B
cs=0x1a2;eip=0x000b5c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1223 mov     ax, offset resID_byte1 ;~ 01A2:0B5C
cs=0x1a2;eip=0x000b5f; 	X(PUSH(ax));	// 1224 push    ax ;~ 01A2:0B5F
cs=0x1a2;eip=0x000b60; 	J(CALLF(intro_draw_text,0));	// 1225 call    intro_draw_text ;~ 01A2:0B60
cs=0x1a2;eip=0x000b65; 	T(ADD(sp, 0x0A));	// 1226 add     sp, 0Ah ;~ 01A2:0B65
cs=0x1a2;eip=0x000b68; 	T(MOV(ax, offset(dseg,aopr)));	// 1227 mov     ax, offset aOpr ; "opr" ;~ 01A2:0B68
cs=0x1a2;eip=0x000b6b; 	X(PUSH(ax));	// 1228 push    ax ;~ 01A2:0B6B
cs=0x1a2;eip=0x000b6c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1229 push    [bp+var_38] ;~ 01A2:0B6C
cs=0x1a2;eip=0x000b6f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1230 push    [bp+var_3A] ;~ 01A2:0B6F
cs=0x1a2;eip=0x000b72; 	J(CALLF(locate_text_res,0));	// 1231 call    locate_text_res ;~ 01A2:0B72
cs=0x1a2;eip=0x000b77; 	T(ADD(sp, 6));	// 1232 add     sp, 6 ;~ 01A2:0B77
cs=0x1a2;eip=0x000b7a; 	X(PUSH(dx));	// 1233 push    dx ;~ 01A2:0B7A
cs=0x1a2;eip=0x000b7b; 	X(PUSH(ax));	// 1234 push    ax ;~ 01A2:0B7B
cs=0x1a2;eip=0x000b7c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1235 mov     ax, offset resID_byte1 ;~ 01A2:0B7C
cs=0x1a2;eip=0x000b7f; 	X(PUSH(ax));	// 1236 push    ax ;~ 01A2:0B7F
cs=0x1a2;eip=0x000b80; 	J(CALLF(copy_string,0));	// 1237 call    copy_string ;~ 01A2:0B80
cs=0x1a2;eip=0x000b85; 	T(ADD(sp, 6));	// 1238 add     sp, 6 ;~ 01A2:0B85
cs=0x1a2;eip=0x000b88; 	X(PUSH(word_407e2));	// 1239 push    word_407E2 ;~ 01A2:0B88
cs=0x1a2;eip=0x000b8c; 	X(PUSH(word_407e0));	// 1240 push    word_407E0 ;~ 01A2:0B8C
cs=0x1a2;eip=0x000b90; 	T(MOV(ax, 0x38));	// 1241 mov     ax, 38h ; '8' ;~ 01A2:0B90
cs=0x1a2;eip=0x000b93; 	X(PUSH(ax));	// 1242 push    ax ;~ 01A2:0B93
cs=0x1a2;eip=0x000b94; 	T(MOV(ax, 0x0AC));	// 1243 mov     ax, 0ACh ; '¬' ;~ 01A2:0B94
cs=0x1a2;eip=0x000b97; 	X(PUSH(ax));	// 1244 push    ax ;~ 01A2:0B97
cs=0x1a2;eip=0x000b98; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1245 mov     ax, offset resID_byte1 ;~ 01A2:0B98
cs=0x1a2;eip=0x000b9b; 	X(PUSH(ax));	// 1246 push    ax ;~ 01A2:0B9B
cs=0x1a2;eip=0x000b9c; 	J(CALLF(intro_draw_text,0));	// 1247 call    intro_draw_text ;~ 01A2:0B9C
cs=0x1a2;eip=0x000ba1; 	T(ADD(sp, 0x0A));	// 1248 add     sp, 0Ah ;~ 01A2:0BA1
cs=0x1a2;eip=0x000ba4; 	T(MOV(ax, offset(dseg,agbra_0)));	// 1249 mov     ax, offset aGbra_0 ; "gbra" ;~ 01A2:0BA4
cs=0x1a2;eip=0x000ba7; 	X(PUSH(ax));	// 1250 push    ax ;~ 01A2:0BA7
cs=0x1a2;eip=0x000ba8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1251 push    [bp+var_38] ;~ 01A2:0BA8
cs=0x1a2;eip=0x000bab; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1252 push    [bp+var_3A] ;~ 01A2:0BAB
cs=0x1a2;eip=0x000bae; 	J(CALLF(locate_shape_alt,0));	// 1253 call    locate_shape_alt ;~ 01A2:0BAE
cs=0x1a2;eip=0x000bb3; 	T(ADD(sp, 6));	// 1254 add     sp, 6 ;~ 01A2:0BB3
cs=0x1a2;eip=0x000bb6; 	X(PUSH(dx));	// 1255 push    dx ;~ 01A2:0BB6
cs=0x1a2;eip=0x000bb7; 	X(PUSH(ax));	// 1256 push    ax ;~ 01A2:0BB7
cs=0x1a2;eip=0x000bb8; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1257 mov     ax, offset resID_byte1 ;~ 01A2:0BB8
cs=0x1a2;eip=0x000bbb; 	X(PUSH(ax));	// 1258 push    ax ;~ 01A2:0BBB
cs=0x1a2;eip=0x000bbc; 	J(CALLF(copy_string,0));	// 1259 call    copy_string ;~ 01A2:0BBC
cs=0x1a2;eip=0x000bc1; 	T(ADD(sp, 6));	// 1260 add     sp, 6 ;~ 01A2:0BC1
cs=0x1a2;eip=0x000bc4; 	X(PUSH(word_407d6));	// 1261 push    word_407D6 ;~ 01A2:0BC4
cs=0x1a2;eip=0x000bc8; 	X(PUSH(word_407d4));	// 1262 push    word_407D4 ;~ 01A2:0BC8
cs=0x1a2;eip=0x000bcc; 	T(MOV(ax, 0x40));	// 1263 mov     ax, 40h ; '@' ;~ 01A2:0BCC
cs=0x1a2;eip=0x000bcf; 	X(PUSH(ax));	// 1264 push    ax ;~ 01A2:0BCF
cs=0x1a2;eip=0x000bd0; 	T(MOV(ax, 0x0AC));	// 1265 mov     ax, 0ACh ; '¬' ;~ 01A2:0BD0
cs=0x1a2;eip=0x000bd3; 	X(PUSH(ax));	// 1266 push    ax ;~ 01A2:0BD3
cs=0x1a2;eip=0x000bd4; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1267 mov     ax, offset resID_byte1 ;~ 01A2:0BD4
cs=0x1a2;eip=0x000bd7; 	X(PUSH(ax));	// 1268 push    ax ;~ 01A2:0BD7
cs=0x1a2;eip=0x000bd8; 	J(CALLF(intro_draw_text,0));	// 1269 call    intro_draw_text ;~ 01A2:0BD8
cs=0x1a2;eip=0x000bdd; 	T(ADD(sp, 0x0A));	// 1270 add     sp, 0Ah ;~ 01A2:0BDD
cs=0x1a2;eip=0x000be0; 	T(MOV(ax, offset(dseg,agric)));	// 1271 mov     ax, offset aGric ; "gric" ;~ 01A2:0BE0
cs=0x1a2;eip=0x000be3; 	X(PUSH(ax));	// 1272 push    ax ;~ 01A2:0BE3
cs=0x1a2;eip=0x000be4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1273 push    [bp+var_38] ;~ 01A2:0BE4
cs=0x1a2;eip=0x000be7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1274 push    [bp+var_3A] ;~ 01A2:0BE7
cs=0x1a2;eip=0x000bea; 	J(CALLF(locate_shape_alt,0));	// 1275 call    locate_shape_alt ;~ 01A2:0BEA
cs=0x1a2;eip=0x000bef; 	T(ADD(sp, 6));	// 1276 add     sp, 6 ;~ 01A2:0BEF
cs=0x1a2;eip=0x000bf2; 	X(PUSH(dx));	// 1277 push    dx ;~ 01A2:0BF2
cs=0x1a2;eip=0x000bf3; 	X(PUSH(ax));	// 1278 push    ax ;~ 01A2:0BF3
cs=0x1a2;eip=0x000bf4; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1279 mov     ax, offset resID_byte1 ;~ 01A2:0BF4
cs=0x1a2;eip=0x000bf7; 	X(PUSH(ax));	// 1280 push    ax ;~ 01A2:0BF7
cs=0x1a2;eip=0x000bf8; 	J(CALLF(copy_string,0));	// 1281 call    copy_string ;~ 01A2:0BF8
cs=0x1a2;eip=0x000bfd; 	T(ADD(sp, 6));	// 1282 add     sp, 6 ;~ 01A2:0BFD
cs=0x1a2;eip=0x000c00; 	X(PUSH(word_407d6));	// 1283 push    word_407D6 ;~ 01A2:0C00
cs=0x1a2;eip=0x000c04; 	X(PUSH(word_407d4));	// 1284 push    word_407D4 ;~ 01A2:0C04
cs=0x1a2;eip=0x000c08; 	T(MOV(ax, 0x48));	// 1285 mov     ax, 48h ; 'H' ;~ 01A2:0C08
cs=0x1a2;eip=0x000c0b; 	X(PUSH(ax));	// 1286 push    ax ;~ 01A2:0C0B
cs=0x1a2;eip=0x000c0c; 	T(MOV(ax, 0x0AC));	// 1287 mov     ax, 0ACh ; '¬' ;~ 01A2:0C0C
cs=0x1a2;eip=0x000c0f; 	X(PUSH(ax));	// 1288 push    ax ;~ 01A2:0C0F
cs=0x1a2;eip=0x000c10; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1289 mov     ax, offset resID_byte1 ;~ 01A2:0C10
cs=0x1a2;eip=0x000c13; 	X(PUSH(ax));	// 1290 push    ax ;~ 01A2:0C13
cs=0x1a2;eip=0x000c14; 	J(CALLF(intro_draw_text,0));	// 1291 call    intro_draw_text ;~ 01A2:0C14
cs=0x1a2;eip=0x000c19; 	T(ADD(sp, 0x0A));	// 1292 add     sp, 0Ah ;~ 01A2:0C19
cs=0x1a2;eip=0x000c1c; 	T(MOV(ax, offset(dseg,aart)));	// 1293 mov     ax, offset aArt ; "art" ;~ 01A2:0C1C
cs=0x1a2;eip=0x000c1f; 	X(PUSH(ax));	// 1294 push    ax ;~ 01A2:0C1F
cs=0x1a2;eip=0x000c20; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1295 push    [bp+var_38] ;~ 01A2:0C20
cs=0x1a2;eip=0x000c23; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1296 push    [bp+var_3A] ;~ 01A2:0C23
cs=0x1a2;eip=0x000c26; 	J(CALLF(locate_text_res,0));	// 1297 call    locate_text_res ;~ 01A2:0C26
cs=0x1a2;eip=0x000c2b; 	T(ADD(sp, 6));	// 1298 add     sp, 6 ;~ 01A2:0C2B
cs=0x1a2;eip=0x000c2e; 	X(PUSH(dx));	// 1299 push    dx ;~ 01A2:0C2E
cs=0x1a2;eip=0x000c2f; 	X(PUSH(ax));	// 1300 push    ax ;~ 01A2:0C2F
cs=0x1a2;eip=0x000c30; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1301 mov     ax, offset resID_byte1 ;~ 01A2:0C30
cs=0x1a2;eip=0x000c33; 	X(PUSH(ax));	// 1302 push    ax ;~ 01A2:0C33
cs=0x1a2;eip=0x000c34; 	J(CALLF(copy_string,0));	// 1303 call    copy_string ;~ 01A2:0C34
cs=0x1a2;eip=0x000c39; 	T(ADD(sp, 6));	// 1304 add     sp, 6 ;~ 01A2:0C39
cs=0x1a2;eip=0x000c3c; 	X(PUSH(word_407e6));	// 1305 push    word_407E6 ;~ 01A2:0C3C
cs=0x1a2;eip=0x000c40; 	X(PUSH(word_407e4));	// 1306 push    word_407E4 ;~ 01A2:0C40
cs=0x1a2;eip=0x000c44; 	T(MOV(ax, 0x54));	// 1307 mov     ax, 54h ; 'T' ;~ 01A2:0C44
cs=0x1a2;eip=0x000c47; 	X(PUSH(ax));	// 1308 push    ax ;~ 01A2:0C47
cs=0x1a2;eip=0x000c48; 	T(MOV(ax, 0x0AC));	// 1309 mov     ax, 0ACh ; '¬' ;~ 01A2:0C48
cs=0x1a2;eip=0x000c4b; 	X(PUSH(ax));	// 1310 push    ax ;~ 01A2:0C4B
cs=0x1a2;eip=0x000c4c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1311 mov     ax, offset resID_byte1 ;~ 01A2:0C4C
cs=0x1a2;eip=0x000c4f; 	X(PUSH(ax));	// 1312 push    ax ;~ 01A2:0C4F
cs=0x1a2;eip=0x000c50; 	J(CALLF(intro_draw_text,0));	// 1313 call    intro_draw_text ;~ 01A2:0C50
cs=0x1a2;eip=0x000c55; 	T(ADD(sp, 0x0A));	// 1314 add     sp, 0Ah ;~ 01A2:0C55
cs=0x1a2;eip=0x000c58; 	T(MOV(ax, offset(dseg,agmsm)));	// 1315 mov     ax, offset aGmsm ; "gmsm" ;~ 01A2:0C58
cs=0x1a2;eip=0x000c5b; 	X(PUSH(ax));	// 1316 push    ax ;~ 01A2:0C5B
cs=0x1a2;eip=0x000c5c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1317 push    [bp+var_38] ;~ 01A2:0C5C
cs=0x1a2;eip=0x000c5f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1318 push    [bp+var_3A] ;~ 01A2:0C5F
cs=0x1a2;eip=0x000c62; 	J(CALLF(locate_shape_alt,0));	// 1319 call    locate_shape_alt ;~ 01A2:0C62
cs=0x1a2;eip=0x000c67; 	T(ADD(sp, 6));	// 1320 add     sp, 6 ;~ 01A2:0C67
cs=0x1a2;eip=0x000c6a; 	X(PUSH(dx));	// 1321 push    dx ;~ 01A2:0C6A
cs=0x1a2;eip=0x000c6b; 	X(PUSH(ax));	// 1322 push    ax ;~ 01A2:0C6B
cs=0x1a2;eip=0x000c6c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1323 mov     ax, offset resID_byte1 ;~ 01A2:0C6C
cs=0x1a2;eip=0x000c6f; 	X(PUSH(ax));	// 1324 push    ax ;~ 01A2:0C6F
cs=0x1a2;eip=0x000c70; 	J(CALLF(copy_string,0));	// 1325 call    copy_string ;~ 01A2:0C70
cs=0x1a2;eip=0x000c75; 	T(ADD(sp, 6));	// 1326 add     sp, 6 ;~ 01A2:0C75
cs=0x1a2;eip=0x000c78; 	X(PUSH(word_407d6));	// 1327 push    word_407D6 ;~ 01A2:0C78
cs=0x1a2;eip=0x000c7c; 	X(PUSH(word_407d4));	// 1328 push    word_407D4 ;~ 01A2:0C7C
cs=0x1a2;eip=0x000c80; 	T(MOV(ax, 0x60));	// 1329 mov     ax, 60h ; '`' ;~ 01A2:0C80
cs=0x1a2;eip=0x000c83; 	X(PUSH(ax));	// 1330 push    ax ;~ 01A2:0C83
cs=0x1a2;eip=0x000c84; 	T(MOV(ax, 0x0AC));	// 1331 mov     ax, 0ACh ; '¬' ;~ 01A2:0C84
cs=0x1a2;eip=0x000c87; 	X(PUSH(ax));	// 1332 push    ax ;~ 01A2:0C87
cs=0x1a2;eip=0x000c88; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1333 mov     ax, offset resID_byte1 ;~ 01A2:0C88
cs=0x1a2;eip=0x000c8b; 	X(PUSH(ax));	// 1334 push    ax ;~ 01A2:0C8B
cs=0x1a2;eip=0x000c8c; 	J(CALLF(intro_draw_text,0));	// 1335 call    intro_draw_text ;~ 01A2:0C8C
cs=0x1a2;eip=0x000c91; 	T(ADD(sp, 0x0A));	// 1336 add     sp, 0Ah ;~ 01A2:0C91
cs=0x1a2;eip=0x000c94; 	T(MOV(ax, offset(dseg,agdav)));	// 1337 mov     ax, offset aGdav ; "gdav" ;~ 01A2:0C94
cs=0x1a2;eip=0x000c97; 	X(PUSH(ax));	// 1338 push    ax ;~ 01A2:0C97
cs=0x1a2;eip=0x000c98; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1339 push    [bp+var_38] ;~ 01A2:0C98
cs=0x1a2;eip=0x000c9b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1340 push    [bp+var_3A] ;~ 01A2:0C9B
cs=0x1a2;eip=0x000c9e; 	J(CALLF(locate_shape_alt,0));	// 1341 call    locate_shape_alt ;~ 01A2:0C9E
cs=0x1a2;eip=0x000ca3; 	T(ADD(sp, 6));	// 1342 add     sp, 6 ;~ 01A2:0CA3
cs=0x1a2;eip=0x000ca6; 	X(PUSH(dx));	// 1343 push    dx ;~ 01A2:0CA6
cs=0x1a2;eip=0x000ca7; 	X(PUSH(ax));	// 1344 push    ax ;~ 01A2:0CA7
cs=0x1a2;eip=0x000ca8; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1345 mov     ax, offset resID_byte1 ;~ 01A2:0CA8
cs=0x1a2;eip=0x000cab; 	X(PUSH(ax));	// 1346 push    ax ;~ 01A2:0CAB
cs=0x1a2;eip=0x000cac; 	J(CALLF(copy_string,0));	// 1347 call    copy_string ;~ 01A2:0CAC
cs=0x1a2;eip=0x000cb1; 	T(ADD(sp, 6));	// 1348 add     sp, 6 ;~ 01A2:0CB1
cs=0x1a2;eip=0x000cb4; 	X(PUSH(word_407d6));	// 1349 push    word_407D6 ;~ 01A2:0CB4
cs=0x1a2;eip=0x000cb8; 	X(PUSH(word_407d4));	// 1350 push    word_407D4 ;~ 01A2:0CB8
cs=0x1a2;eip=0x000cbc; 	T(MOV(ax, 0x68));	// 1351 mov     ax, 68h ; 'h' ;~ 01A2:0CBC
cs=0x1a2;eip=0x000cbf; 	X(PUSH(ax));	// 1352 push    ax ;~ 01A2:0CBF
cs=0x1a2;eip=0x000cc0; 	T(MOV(ax, 0x0AC));	// 1353 mov     ax, 0ACh ; '¬' ;~ 01A2:0CC0
cs=0x1a2;eip=0x000cc3; 	X(PUSH(ax));	// 1354 push    ax ;~ 01A2:0CC3
cs=0x1a2;eip=0x000cc4; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1355 mov     ax, offset resID_byte1 ;~ 01A2:0CC4
cs=0x1a2;eip=0x000cc7; 	X(PUSH(ax));	// 1356 push    ax ;~ 01A2:0CC7
cs=0x1a2;eip=0x000cc8; 	J(CALLF(intro_draw_text,0));	// 1357 call    intro_draw_text ;~ 01A2:0CC8
cs=0x1a2;eip=0x000ccd; 	T(ADD(sp, 0x0A));	// 1358 add     sp, 0Ah ;~ 01A2:0CCD
cs=0x1a2;eip=0x000cd0; 	T(MOV(ax, offset(dseg,agnic)));	// 1359 mov     ax, offset aGnic ; "gnic" ;~ 01A2:0CD0
cs=0x1a2;eip=0x000cd3; 	X(PUSH(ax));	// 1360 push    ax ;~ 01A2:0CD3
cs=0x1a2;eip=0x000cd4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1361 push    [bp+var_38] ;~ 01A2:0CD4
cs=0x1a2;eip=0x000cd7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1362 push    [bp+var_3A] ;~ 01A2:0CD7
cs=0x1a2;eip=0x000cda; 	J(CALLF(locate_shape_alt,0));	// 1363 call    locate_shape_alt ;~ 01A2:0CDA
cs=0x1a2;eip=0x000cdf; 	T(ADD(sp, 6));	// 1364 add     sp, 6 ;~ 01A2:0CDF
cs=0x1a2;eip=0x000ce2; 	X(PUSH(dx));	// 1365 push    dx ;~ 01A2:0CE2
cs=0x1a2;eip=0x000ce3; 	X(PUSH(ax));	// 1366 push    ax ;~ 01A2:0CE3
cs=0x1a2;eip=0x000ce4; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1367 mov     ax, offset resID_byte1 ;~ 01A2:0CE4
cs=0x1a2;eip=0x000ce7; 	X(PUSH(ax));	// 1368 push    ax ;~ 01A2:0CE7
cs=0x1a2;eip=0x000ce8; 	J(CALLF(copy_string,0));	// 1369 call    copy_string ;~ 01A2:0CE8
cs=0x1a2;eip=0x000ced; 	T(ADD(sp, 6));	// 1370 add     sp, 6 ;~ 01A2:0CED
cs=0x1a2;eip=0x000cf0; 	X(PUSH(word_407d6));	// 1371 push    word_407D6 ;~ 01A2:0CF0
cs=0x1a2;eip=0x000cf4; 	X(PUSH(word_407d4));	// 1372 push    word_407D4 ;~ 01A2:0CF4
cs=0x1a2;eip=0x000cf8; 	T(MOV(ax, 0x70));	// 1373 mov     ax, 70h ; 'p' ;~ 01A2:0CF8
cs=0x1a2;eip=0x000cfb; 	X(PUSH(ax));	// 1374 push    ax ;~ 01A2:0CFB
cs=0x1a2;eip=0x000cfc; 	T(MOV(ax, 0x0AC));	// 1375 mov     ax, 0ACh ; '¬' ;~ 01A2:0CFC
cs=0x1a2;eip=0x000cff; 	X(PUSH(ax));	// 1376 push    ax ;~ 01A2:0CFF
cs=0x1a2;eip=0x000d00; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1377 mov     ax, offset resID_byte1 ;~ 01A2:0D00
cs=0x1a2;eip=0x000d03; 	X(PUSH(ax));	// 1378 push    ax ;~ 01A2:0D03
cs=0x1a2;eip=0x000d04; 	J(CALLF(intro_draw_text,0));	// 1379 call    intro_draw_text ;~ 01A2:0D04
cs=0x1a2;eip=0x000d09; 	T(ADD(sp, 0x0A));	// 1380 add     sp, 0Ah ;~ 01A2:0D09
cs=0x1a2;eip=0x000d0c; 	T(MOV(ax, offset(dseg,agkev_1)));	// 1381 mov     ax, offset aGkev_1 ; "gkev" ;~ 01A2:0D0C
cs=0x1a2;eip=0x000d0f; 	X(PUSH(ax));	// 1382 push    ax ;~ 01A2:0D0F
cs=0x1a2;eip=0x000d10; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1383 push    [bp+var_38] ;~ 01A2:0D10
cs=0x1a2;eip=0x000d13; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1384 push    [bp+var_3A] ;~ 01A2:0D13
cs=0x1a2;eip=0x000d16; 	J(CALLF(locate_shape_alt,0));	// 1385 call    locate_shape_alt ;~ 01A2:0D16
cs=0x1a2;eip=0x000d1b; 	T(ADD(sp, 6));	// 1386 add     sp, 6 ;~ 01A2:0D1B
cs=0x1a2;eip=0x000d1e; 	X(PUSH(dx));	// 1387 push    dx ;~ 01A2:0D1E
cs=0x1a2;eip=0x000d1f; 	X(PUSH(ax));	// 1388 push    ax ;~ 01A2:0D1F
cs=0x1a2;eip=0x000d20; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1389 mov     ax, offset resID_byte1 ;~ 01A2:0D20
cs=0x1a2;eip=0x000d23; 	X(PUSH(ax));	// 1390 push    ax ;~ 01A2:0D23
cs=0x1a2;eip=0x000d24; 	J(CALLF(copy_string,0));	// 1391 call    copy_string ;~ 01A2:0D24
cs=0x1a2;eip=0x000d29; 	T(ADD(sp, 6));	// 1392 add     sp, 6 ;~ 01A2:0D29
cs=0x1a2;eip=0x000d2c; 	X(PUSH(word_407d6));	// 1393 push    word_407D6 ;~ 01A2:0D2C
cs=0x1a2;eip=0x000d30; 	X(PUSH(word_407d4));	// 1394 push    word_407D4 ;~ 01A2:0D30
cs=0x1a2;eip=0x000d34; 	T(MOV(ax, 0x78));	// 1395 mov     ax, 78h ; 'x' ;~ 01A2:0D34
cs=0x1a2;eip=0x000d37; 	X(PUSH(ax));	// 1396 push    ax ;~ 01A2:0D37
cs=0x1a2;eip=0x000d38; 	T(MOV(ax, 0x0AC));	// 1397 mov     ax, 0ACh ; '¬' ;~ 01A2:0D38
cs=0x1a2;eip=0x000d3b; 	X(PUSH(ax));	// 1398 push    ax ;~ 01A2:0D3B
cs=0x1a2;eip=0x000d3c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1399 mov     ax, offset resID_byte1 ;~ 01A2:0D3C
cs=0x1a2;eip=0x000d3f; 	X(PUSH(ax));	// 1400 push    ax ;~ 01A2:0D3F
cs=0x1a2;eip=0x000d40; 	J(CALLF(intro_draw_text,0));	// 1401 call    intro_draw_text ;~ 01A2:0D40
cs=0x1a2;eip=0x000d45; 	T(ADD(sp, 0x0A));	// 1402 add     sp, 0Ah ;~ 01A2:0D45
cs=0x1a2;eip=0x000d48; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 1403 push    [bp+var_38] ;~ 01A2:0D48
cs=0x1a2;eip=0x000d4b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 1404 push    [bp+var_3A] ;~ 01A2:0D4B
cs=0x1a2;eip=0x000d4e; 	J(CALLF(unload_resource,0));	// 1405 call    unload_resource ;~ 01A2:0D4E
cs=0x1a2;eip=0x000d53; 	T(ADD(sp, 4));	// 1406 add     sp, 4 ;~ 01A2:0D53
cs=0x1a2;eip=0x000d56; 	T(MOV(ax, 0x0FFFF));	// 1407 mov     ax, 0FFFFh ;~ 01A2:0D56
cs=0x1a2;eip=0x000d59; 	X(PUSH(ax));	// 1408 push    ax ;~ 01A2:0D59
cs=0x1a2;eip=0x000d5a; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 1409 push    word ptr wndsprite+2 ;~ 01A2:0D5A
cs=0x1a2;eip=0x000d5e; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 1410 push    word ptr wndsprite ;~ 01A2:0D5E
cs=0x1a2;eip=0x000d62; 	J(CALLF(sprite_blit_to_video,0));	// 1411 call    sprite_blit_to_video ;~ 01A2:0D62
cs=0x1a2;eip=0x000d67; 	T(ADD(sp, 6));	// 1412 add     sp, 6 ;~ 01A2:0D67
cs=0x1a2;eip=0x000d6a; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 1413 call    sprite_copy_2_to_1_2 ;~ 01A2:0D6A
cs=0x1a2;eip=0x000d6f; 	J(CALLF(timer_get_delta_alt,0));	// 1414 call    timer_get_delta_alt ;~ 01A2:0D6F
cs=0x1a2;eip=0x000d74; 	T(MOV(si, 0x14A));	// 1415 mov     si, 14Ah ;~ 01A2:0D74
loc_10d77:
	// 4419 
cs=0x1a2;eip=0x000d77; 	J(CALLF(timer_get_delta_alt,0));	// 1418 call    timer_get_delta_alt ;~ 01A2:0D77
cs=0x1a2;eip=0x000d7c; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 1419 mov     [bp+var_40], ax ;~ 01A2:0D7C
cs=0x1a2;eip=0x000d7f; 	T(SHL(ax, 1));	// 1420 shl     ax, 1 ;~ 01A2:0D7F
cs=0x1a2;eip=0x000d81; 	T(SUB(si, ax));	// 1421 sub     si, ax ;~ 01A2:0D81
cs=0x1a2;eip=0x000d83; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), si));	// 1422 cmp     [bp+var_2], si ;~ 01A2:0D83
cs=0x1a2;eip=0x000d86; 	J(JLE(loc_10da0));	// 1423 jle     short loc_10DA0 ;~ 01A2:0D86
loc_10d88:
	// 4420 
cs=0x1a2;eip=0x000d88; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_34))));	// 1426 les     bx, [bp+var_34] ;~ 01A2:0D88
cs=0x1a2;eip=0x000d8b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 1427 mov     ax, es:[bx+0Ah] ;~ 01A2:0D8B
cs=0x1a2;eip=0x000d8f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 1428 mov     [bp+var_4], ax ;~ 01A2:0D8F
cs=0x1a2;eip=0x000d92; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), 0));	// 1429 mov     [bp+var_36], 0 ;~ 01A2:0D92
cs=0x1a2;eip=0x000d97; 	T(SUB(si, si));	// 1430 sub     si, si ;~ 01A2:0D97
cs=0x1a2;eip=0x000d99; 	T(MOV(di, 2));	// 1431 mov     di, 2 ;~ 01A2:0D99
cs=0x1a2;eip=0x000d9c; 	J(JMP(loc_10e83));	// 1432 jmp     loc_10E83 ;~ 01A2:0D9C
loc_10da0:
	// 4421 
cs=0x1a2;eip=0x000da0; 	J(CALLF(mouse_draw_opaque_check,0));	// 1437 call    mouse_draw_opaque_check ;~ 01A2:0DA0
cs=0x1a2;eip=0x000da5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1438 push    [bp+var_4] ;~ 01A2:0DA5
cs=0x1a2;eip=0x000da8; 	X(PUSH(si));	// 1439 push    si ;~ 01A2:0DA8
cs=0x1a2;eip=0x000da9; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_30+2)))));	// 1440 push    word ptr [bp+var_30+2] ;~ 01A2:0DA9
cs=0x1a2;eip=0x000dac; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_30)))));	// 1441 push    word ptr [bp+var_30] ;~ 01A2:0DAC
cs=0x1a2;eip=0x000daf; 	J(CALLF(sprite_putimage_and_alt,0));	// 1442 call    sprite_putimage_and_alt ;~ 01A2:0DAF
cs=0x1a2;eip=0x000db4; 	T(ADD(sp, 8));	// 1443 add     sp, 8 ;~ 01A2:0DB4
cs=0x1a2;eip=0x000db7; 	T(SUB(ax, ax));	// 1444 sub     ax, ax ;~ 01A2:0DB7
cs=0x1a2;eip=0x000db9; 	X(PUSH(ax));	// 1445 push    ax ;~ 01A2:0DB9
cs=0x1a2;eip=0x000dba; 	X(PUSH(*(dw*)(raddr(ss,bp+var_44))));	// 1446 push    [bp+var_44] ;~ 01A2:0DBA
cs=0x1a2;eip=0x000dbd; 	T(MOV(ax, 0x20));	// 1447 mov     ax, 20h ; ' ' ;~ 01A2:0DBD
cs=0x1a2;eip=0x000dc0; 	X(PUSH(ax));	// 1448 push    ax ;~ 01A2:0DC0
cs=0x1a2;eip=0x000dc1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1449 push    [bp+var_4] ;~ 01A2:0DC1
cs=0x1a2;eip=0x000dc4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3e))));	// 1450 mov     ax, [bp+var_3E] ;~ 01A2:0DC4
cs=0x1a2;eip=0x000dc7; 	T(ADD(ax, si));	// 1451 add     ax, si ;~ 01A2:0DC7
cs=0x1a2;eip=0x000dc9; 	X(PUSH(ax));	// 1452 push    ax ;~ 01A2:0DC9
cs=0x1a2;eip=0x000dca; 	J(CALLF(sprite_1_unk2,0));	// 1453 call    sprite_1_unk2 ;~ 01A2:0DCA
cs=0x1a2;eip=0x000dcf; 	T(ADD(sp, 0x0A));	// 1454 add     sp, 0Ah ;~ 01A2:0DCF
cs=0x1a2;eip=0x000dd2; 	J(CALLF(mouse_draw_transparent_check,0));	// 1455 call    mouse_draw_transparent_check ;~ 01A2:0DD2
cs=0x1a2;eip=0x000dd7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40))));	// 1456 push    [bp+var_40] ;~ 01A2:0DD7
cs=0x1a2;eip=0x000dda; 	J(CALLF(input_do_checking,0));	// 1457 call    input_do_checking ;~ 01A2:0DDA
cs=0x1a2;eip=0x000ddf; 	T(ADD(sp, 2));	// 1458 add     sp, 2 ;~ 01A2:0DDF
cs=0x1a2;eip=0x000de2; 	X(MOV(*(dw*)(raddr(ss,bp+var_46)), ax));	// 1459 mov     [bp+var_46], ax ;~ 01A2:0DE2
cs=0x1a2;eip=0x000de5; 	T(OR(ax, ax));	// 1460 or      ax, ax ;~ 01A2:0DE5
cs=0x1a2;eip=0x000de7; 	J(JZ(loc_10d77));	// 1461 jz      short loc_10D77 ;~ 01A2:0DE7
cs=0x1a2;eip=0x000de9; 	J(JMP(loc_10d88));	// 1462 jmp     short loc_10D88 ;~ 01A2:0DE9
loc_10dec:
	// 4422 
cs=0x1a2;eip=0x000dec; 	J(CALLF(sprite_copy_wnd_to_1,0));	// 1467 call    sprite_copy_wnd_to_1 ;~ 01A2:0DEC
cs=0x1a2;eip=0x000df1; 	T(MOV(ax, 0x0C8));	// 1468 mov     ax, 0C8h ; 'È' ;~ 01A2:0DF1
cs=0x1a2;eip=0x000df4; 	X(PUSH(ax));	// 1469 push    ax ;~ 01A2:0DF4
cs=0x1a2;eip=0x000df5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1470 push    [bp+var_4] ;~ 01A2:0DF5
cs=0x1a2;eip=0x000df8; 	T(MOV(ax, 0x140));	// 1471 mov     ax, 140h ;~ 01A2:0DF8
cs=0x1a2;eip=0x000dfb; 	X(PUSH(ax));	// 1472 push    ax ;~ 01A2:0DFB
cs=0x1a2;eip=0x000dfc; 	T(SUB(ax, ax));	// 1473 sub     ax, ax ;~ 01A2:0DFC
cs=0x1a2;eip=0x000dfe; 	X(PUSH(ax));	// 1474 push    ax ;~ 01A2:0DFE
cs=0x1a2;eip=0x000dff; 	J(CALLF(sprite_set_1_size,0));	// 1475 call    sprite_set_1_size ;~ 01A2:0DFF
cs=0x1a2;eip=0x000e04; 	T(ADD(sp, 8));	// 1476 add     sp, 8 ;~ 01A2:0E04
cs=0x1a2;eip=0x000e07; 	T(SUB(ax, ax));	// 1477 sub     ax, ax ;~ 01A2:0E07
cs=0x1a2;eip=0x000e09; 	X(PUSH(ax));	// 1478 push    ax ;~ 01A2:0E09
cs=0x1a2;eip=0x000e0a; 	J(CALLF(sprite_clear_1_color,0));	// 1479 call    sprite_clear_1_color ;~ 01A2:0E0A
cs=0x1a2;eip=0x000e0f; 	T(ADD(sp, 2));	// 1480 add     sp, 2 ;~ 01A2:0E0F
cs=0x1a2;eip=0x000e12; 	T(MOV(bx, di));	// 1481 mov     bx, di ;~ 01A2:0E12
cs=0x1a2;eip=0x000e14; 	T(SHL(bx, 1));	// 1482 shl     bx, 1 ;~ 01A2:0E14
cs=0x1a2;eip=0x000e16; 	T(SHL(bx, 1));	// 1483 shl     bx, 1 ;~ 01A2:0E16
cs=0x1a2;eip=0x000e18; 	T(ADD(bx, bp));	// 1484 add     bx, bp ;~ 01A2:0E18
cs=0x1a2;eip=0x000e1a; 	X(PUSH(*(dw*)(raddr(ds,bx-0x32))));	// 1485 push    word ptr [bx-32h] ;~ 01A2:0E1A
cs=0x1a2;eip=0x000e1d; 	X(PUSH(*(dw*)(raddr(ds,bx-0x34))));	// 1486 push    word ptr [bx-34h] ;~ 01A2:0E1D
cs=0x1a2;eip=0x000e20; 	J(CALLF(sprite_shape_to_1_alt,0));	// 1487 call    sprite_shape_to_1_alt ;~ 01A2:0E20
cs=0x1a2;eip=0x000e25; 	T(ADD(sp, 4));	// 1488 add     sp, 4 ;~ 01A2:0E25
cs=0x1a2;eip=0x000e28; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 1489 call    sprite_copy_2_to_1_2 ;~ 01A2:0E28
cs=0x1a2;eip=0x000e2d; 	T(MOV(ax, 0x0C8));	// 1490 mov     ax, 0C8h ; 'È' ;~ 01A2:0E2D
cs=0x1a2;eip=0x000e30; 	X(PUSH(ax));	// 1491 push    ax ;~ 01A2:0E30
cs=0x1a2;eip=0x000e31; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1492 push    [bp+var_4] ;~ 01A2:0E31
cs=0x1a2;eip=0x000e34; 	T(MOV(ax, 0x140));	// 1493 mov     ax, 140h ;~ 01A2:0E34
cs=0x1a2;eip=0x000e37; 	X(PUSH(ax));	// 1494 push    ax ;~ 01A2:0E37
cs=0x1a2;eip=0x000e38; 	T(SUB(ax, ax));	// 1495 sub     ax, ax ;~ 01A2:0E38
cs=0x1a2;eip=0x000e3a; 	X(PUSH(ax));	// 1496 push    ax ;~ 01A2:0E3A
cs=0x1a2;eip=0x000e3b; 	J(CALLF(sprite_set_1_size,0));	// 1497 call    sprite_set_1_size ;~ 01A2:0E3B
cs=0x1a2;eip=0x000e40; 	T(ADD(sp, 8));	// 1498 add     sp, 8 ;~ 01A2:0E40
cs=0x1a2;eip=0x000e43; 	J(CALLF(mouse_draw_opaque_check,0));	// 1499 call    mouse_draw_opaque_check ;~ 01A2:0E43
cs=0x1a2;eip=0x000e48; 	T(LES(bx, wndsprite));	// 1500 les     bx, wndsprite ;~ 01A2:0E48
cs=0x1a2;eip=0x000e4c; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 1501 push    word ptr es:[bx+2] ;~ 01A2:0E4C
cs=0x1a2;eip=0x000e50; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 1502 push    word ptr es:[bx] ;~ 01A2:0E50
cs=0x1a2;eip=0x000e53; 	J(CALLF(sprite_putimage,0));	// 1503 call    sprite_putimage ;~ 01A2:0E53
cs=0x1a2;eip=0x000e58; 	T(ADD(sp, 4));	// 1504 add     sp, 4 ;~ 01A2:0E58
cs=0x1a2;eip=0x000e5b; 	J(CALLF(mouse_draw_transparent_check,0));	// 1505 call    mouse_draw_transparent_check ;~ 01A2:0E5B
cs=0x1a2;eip=0x000e60; 	X(ADD(*(dw*)(raddr(ss,bp+var_36)), 5));	// 1506 add     [bp+var_36], 5 ;~ 01A2:0E60
cs=0x1a2;eip=0x000e64; 	J(JMP(loc_10e7d));	// 1507 jmp     short loc_10E7D ;~ 01A2:0E64
loc_10e66:
	// 4423 
cs=0x1a2;eip=0x000e66; 	J(CALLF(timer_get_delta_alt,0));	// 1511 call    timer_get_delta_alt ;~ 01A2:0E66
cs=0x1a2;eip=0x000e6b; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 1512 mov     [bp+var_40], ax ;~ 01A2:0E6B
cs=0x1a2;eip=0x000e6e; 	X(PUSH(ax));	// 1513 push    ax ;~ 01A2:0E6E
cs=0x1a2;eip=0x000e6f; 	J(CALLF(input_do_checking,0));	// 1514 call    input_do_checking ;~ 01A2:0E6F
cs=0x1a2;eip=0x000e74; 	T(ADD(sp, 2));	// 1515 add     sp, 2 ;~ 01A2:0E74
cs=0x1a2;eip=0x000e77; 	X(MOV(*(dw*)(raddr(ss,bp+var_46)), ax));	// 1516 mov     [bp+var_46], ax ;~ 01A2:0E77
cs=0x1a2;eip=0x000e7a; 	T(ADD(si, *(dw*)(raddr(ss,bp+var_40))));	// 1517 add     si, [bp+var_40] ;~ 01A2:0E7A
loc_10e7d:
	// 4424 
cs=0x1a2;eip=0x000e7d; 	T(CMP(*(dw*)(raddr(ss,bp+var_36)), si));	// 1520 cmp     [bp+var_36], si ;~ 01A2:0E7D
cs=0x1a2;eip=0x000e80; 	J(JG(loc_10e66));	// 1521 jg      short loc_10E66 ;~ 01A2:0E80
cs=0x1a2;eip=0x000e82; 	T(INC(di));	// 1522 inc     di ;~ 01A2:0E82
loc_10e83:
	// 4425 
cs=0x1a2;eip=0x000e83; 	T(CMP(di, 0x0A));	// 1525 cmp     di, 0Ah ;~ 01A2:0E83
cs=0x1a2;eip=0x000e86; 	J(JGE(loc_10e91));	// 1526 jge     short loc_10E91 ;~ 01A2:0E86
cs=0x1a2;eip=0x000e88; 	T(CMP(*(dw*)(raddr(ss,bp+var_46)), 0));	// 1527 cmp     [bp+var_46], 0 ;~ 01A2:0E88
cs=0x1a2;eip=0x000e8c; 	J(JNZ(loc_10e91));	// 1528 jnz     short loc_10E91 ;~ 01A2:0E8C
cs=0x1a2;eip=0x000e8e; 	J(JMP(loc_10dec));	// 1529 jmp     loc_10DEC ;~ 01A2:0E8E
loc_10e91:
	// 4426 
cs=0x1a2;eip=0x000e91; 	T(MOV(ax, 0x0C8));	// 1534 mov     ax, 0C8h ; 'È' ;~ 01A2:0E91
cs=0x1a2;eip=0x000e94; 	X(PUSH(ax));	// 1535 push    ax ;~ 01A2:0E94
cs=0x1a2;eip=0x000e95; 	T(SUB(ax, ax));	// 1536 sub     ax, ax ;~ 01A2:0E95
cs=0x1a2;eip=0x000e97; 	X(PUSH(ax));	// 1537 push    ax ;~ 01A2:0E97
cs=0x1a2;eip=0x000e98; 	T(MOV(ax, 0x140));	// 1538 mov     ax, 140h ;~ 01A2:0E98
cs=0x1a2;eip=0x000e9b; 	X(PUSH(ax));	// 1539 push    ax ;~ 01A2:0E9B
cs=0x1a2;eip=0x000e9c; 	T(SUB(ax, ax));	// 1540 sub     ax, ax ;~ 01A2:0E9C
cs=0x1a2;eip=0x000e9e; 	X(PUSH(ax));	// 1541 push    ax ;~ 01A2:0E9E
cs=0x1a2;eip=0x000e9f; 	J(CALLF(sprite_set_1_size,0));	// 1542 call    sprite_set_1_size ;~ 01A2:0E9F
cs=0x1a2;eip=0x000ea4; 	T(ADD(sp, 8));	// 1543 add     sp, 8 ;~ 01A2:0EA4
cs=0x1a2;eip=0x000ea7; 	J(CALLF(mouse_draw_opaque_check,0));	// 1544 call    mouse_draw_opaque_check ;~ 01A2:0EA7
cs=0x1a2;eip=0x000eac; 	T(LES(bx, wndsprite));	// 1545 les     bx, wndsprite ;~ 01A2:0EAC
cs=0x1a2;eip=0x000eb0; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 1546 push    word ptr es:[bx+2] ;~ 01A2:0EB0
cs=0x1a2;eip=0x000eb4; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 1547 push    word ptr es:[bx] ;~ 01A2:0EB4
cs=0x1a2;eip=0x000eb7; 	J(CALLF(sprite_clear_shape,0));	// 1548 call    sprite_clear_shape ;~ 01A2:0EB7
cs=0x1a2;eip=0x000ebc; 	T(ADD(sp, 4));	// 1549 add     sp, 4 ;~ 01A2:0EBC
cs=0x1a2;eip=0x000ebf; 	J(CALLF(sprite_copy_wnd_to_1,0));	// 1550 call    sprite_copy_wnd_to_1 ;~ 01A2:0EBF
cs=0x1a2;eip=0x000ec4; 	T(MOV(ax, 0x0C8));	// 1551 mov     ax, 0C8h ; 'È' ;~ 01A2:0EC4
cs=0x1a2;eip=0x000ec7; 	X(PUSH(ax));	// 1552 push    ax ;~ 01A2:0EC7
cs=0x1a2;eip=0x000ec8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1553 push    [bp+var_4] ;~ 01A2:0EC8
cs=0x1a2;eip=0x000ecb; 	T(MOV(ax, 0x140));	// 1554 mov     ax, 140h ;~ 01A2:0ECB
cs=0x1a2;eip=0x000ece; 	X(PUSH(ax));	// 1555 push    ax ;~ 01A2:0ECE
cs=0x1a2;eip=0x000ecf; 	T(SUB(ax, ax));	// 1556 sub     ax, ax ;~ 01A2:0ECF
cs=0x1a2;eip=0x000ed1; 	X(PUSH(ax));	// 1557 push    ax ;~ 01A2:0ED1
cs=0x1a2;eip=0x000ed2; 	J(CALLF(sprite_set_1_size,0));	// 1558 call    sprite_set_1_size ;~ 01A2:0ED2
cs=0x1a2;eip=0x000ed7; 	T(ADD(sp, 8));	// 1559 add     sp, 8 ;~ 01A2:0ED7
cs=0x1a2;eip=0x000eda; 	T(SUB(ax, ax));	// 1560 sub     ax, ax ;~ 01A2:0EDA
cs=0x1a2;eip=0x000edc; 	X(PUSH(ax));	// 1561 push    ax ;~ 01A2:0EDC
cs=0x1a2;eip=0x000edd; 	J(CALLF(sprite_clear_1_color,0));	// 1562 call    sprite_clear_1_color ;~ 01A2:0EDD
cs=0x1a2;eip=0x000ee2; 	T(ADD(sp, 2));	// 1563 add     sp, 2 ;~ 01A2:0EE2
cs=0x1a2;eip=0x000ee5; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_34+2)))));	// 1564 push    word ptr [bp+var_34+2] ;~ 01A2:0EE5
cs=0x1a2;eip=0x000ee8; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_34)))));	// 1565 push    word ptr [bp+var_34] ;~ 01A2:0EE8
cs=0x1a2;eip=0x000eeb; 	J(CALLF(sprite_shape_to_1_alt,0));	// 1566 call    sprite_shape_to_1_alt ;~ 01A2:0EEB
cs=0x1a2;eip=0x000ef0; 	T(ADD(sp, 4));	// 1567 add     sp, 4 ;~ 01A2:0EF0
cs=0x1a2;eip=0x000ef3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 1568 push    [bp+var_A] ;~ 01A2:0EF3
cs=0x1a2;eip=0x000ef6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 1569 push    [bp+var_C] ;~ 01A2:0EF6
cs=0x1a2;eip=0x000ef9; 	J(CALLF(sprite_shape_to_1_alt,0));	// 1570 call    sprite_shape_to_1_alt ;~ 01A2:0EF9
cs=0x1a2;eip=0x000efe; 	T(ADD(sp, 4));	// 1571 add     sp, 4 ;~ 01A2:0EFE
cs=0x1a2;eip=0x000f01; 	T(SUB(ax, ax));	// 1572 sub     ax, ax ;~ 01A2:0F01
cs=0x1a2;eip=0x000f03; 	X(PUSH(ax));	// 1573 push    ax ;~ 01A2:0F03
cs=0x1a2;eip=0x000f04; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 1574 push    word ptr wndsprite+2 ;~ 01A2:0F04
cs=0x1a2;eip=0x000f08; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 1575 push    word ptr wndsprite ;~ 01A2:0F08
cs=0x1a2;eip=0x000f0c; 	J(CALLF(sprite_blit_to_video,0));	// 1576 call    sprite_blit_to_video ;~ 01A2:0F0C
cs=0x1a2;eip=0x000f11; 	T(ADD(sp, 6));	// 1577 add     sp, 6 ;~ 01A2:0F11
cs=0x1a2;eip=0x000f14; 	X(MOV(*(dw*)(raddr(ss,bp+var_46)), ax));	// 1578 mov     [bp+var_46], ax ;~ 01A2:0F14
cs=0x1a2;eip=0x000f17; 	T(OR(ax, ax));	// 1579 or      ax, ax ;~ 01A2:0F17
cs=0x1a2;eip=0x000f19; 	J(JNZ(loc_10f2b));	// 1580 jnz     short loc_10F2B ;~ 01A2:0F19
cs=0x1a2;eip=0x000f1b; 	T(MOV(ax, 0x1F4));	// 1581 mov     ax, 1F4h ;~ 01A2:0F1B
cs=0x1a2;eip=0x000f1e; 	X(PUSH(ax));	// 1582 push    ax ;~ 01A2:0F1E
cs=0x1a2;eip=0x000f1f; 	J(CALLF(input_repeat_check,0));	// 1583 call    input_repeat_check ;~ 01A2:0F1F
cs=0x1a2;eip=0x000f24; 	T(ADD(sp, 2));	// 1584 add     sp, 2 ;~ 01A2:0F24
cs=0x1a2;eip=0x000f27; 	T(OR(ax, ax));	// 1585 or      ax, ax ;~ 01A2:0F27
cs=0x1a2;eip=0x000f29; 	J(JZ(loc_10f34));	// 1586 jz      short loc_10F34 ;~ 01A2:0F29
loc_10f2b:
	// 4427 
cs=0x1a2;eip=0x000f2b; 	T(MOV(ax, 1));	// 1589 mov     ax, 1 ;~ 01A2:0F2B
cs=0x1a2;eip=0x000f2e; 	X(POP(si));	// 1590 pop     si ;~ 01A2:0F2E
cs=0x1a2;eip=0x000f2f; 	X(POP(di));	// 1591 pop     di ;~ 01A2:0F2F
cs=0x1a2;eip=0x000f30; 	T(MOV(sp, bp));	// 1592 mov     sp, bp ;~ 01A2:0F30
cs=0x1a2;eip=0x000f32; 	X(POP(bp));	// 1593 pop     bp ;~ 01A2:0F32
cs=0x1a2;eip=0x000f33; 	J(RETF(0));	// 1594 retf ;~ 01A2:0F33
loc_10f34:
	// 4428 
cs=0x1a2;eip=0x000f34; 	T(SUB(ax, ax));	// 1598 sub     ax, ax ;~ 01A2:0F34
cs=0x1a2;eip=0x000f36; 	X(POP(si));	// 1599 pop     si ;~ 01A2:0F36
cs=0x1a2;eip=0x000f37; 	X(POP(di));	// 1600 pop     di ;~ 01A2:0F37
cs=0x1a2;eip=0x000f38; 	T(MOV(sp, bp));	// 1601 mov     sp, bp ;~ 01A2:0F38
cs=0x1a2;eip=0x000f3a; 	X(POP(bp));	// 1602 pop     bp ;~ 01A2:0F3A
cs=0x1a2;eip=0x000f3b; 	J(RETF(0));	// 1603 retf ;~ 01A2:0F3B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kload_intro_resources: 	goto load_intro_resources;
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
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool run_menu(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    run_menu:
    _begin:
#undef var_10
#define var_10 -0x10
	// 1613 var_10          = byte ptr -10h ;~ 01A2:0F3C
#undef var_e
#define var_e -0x0E
	// 1614 var_E           = byte ptr -0Eh ;~ 01A2:0F3C
#undef var_c
#define var_c -0x0C
	// 1615 var_C           = byte ptr -0Ch ;~ 01A2:0F3C
#undef var_a
#define var_a -0x0A
	// 1616 var_A           = word ptr -0Ah ;~ 01A2:0F3C
#undef var_8
#define var_8 -8
	// 1617 var_8           = word ptr -8 ;~ 01A2:0F3C
#undef var_6
#define var_6 -6
	// 1618 var_6           = byte ptr -6 ;~ 01A2:0F3C
#undef var_4
#define var_4 -4
	// 1619 var_4           = word ptr -4 ;~ 01A2:0F3C
#undef var_2
#define var_2 -2
	// 1620 var_2           = word ptr -2 ;~ 01A2:0F3C
cs=0x1a2;eip=0x000f3c; 	X(PUSH(bp));	// 1622 push    bp ;~ 01A2:0F3C
cs=0x1a2;eip=0x000f3d; 	T(MOV(bp, sp));	// 1623 mov     bp, sp ;~ 01A2:0F3D
cs=0x1a2;eip=0x000f3f; 	T(SUB(sp, 0x10));	// 1624 sub     sp, 10h ;~ 01A2:0F3F
cs=0x1a2;eip=0x000f42; 	X(MOV(*(raddr(ss,bp+var_6)), 0x0FF));	// 1625 mov     [bp+var_6], 0FFh ;~ 01A2:0F42
cs=0x1a2;eip=0x000f46; 	X(MOV(*(raddr(ss,bp+var_10)), 0));	// 1626 mov     [bp+var_10], 0 ;~ 01A2:0F46
cs=0x1a2;eip=0x000f4a; 	X(MOV(*(raddr(ss,bp+var_c)), 0x0FF));	// 1627 mov     [bp+var_C], 0FFh ;~ 01A2:0F4A
cs=0x1a2;eip=0x000f4e; 	J(CALLF(show_waiting,0));	// 1628 call    show_waiting ;~ 01A2:0F4E
cs=0x1a2;eip=0x000f53; 	X(MOV(waitflag, 0x0B4));	// 1629 mov     waitflag, 0B4h ; '´' ;~ 01A2:0F53
cs=0x1a2;eip=0x000f59; 	T(MOV(ax, 0x0F));	// 1630 mov     ax, 0Fh ;~ 01A2:0F59
cs=0x1a2;eip=0x000f5c; 	X(PUSH(ax));	// 1631 push    ax ;~ 01A2:0F5C
cs=0x1a2;eip=0x000f5d; 	T(MOV(ax, 0x0C8));	// 1632 mov     ax, 0C8h ; 'È' ;~ 01A2:0F5D
cs=0x1a2;eip=0x000f60; 	X(PUSH(ax));	// 1633 push    ax ;~ 01A2:0F60
cs=0x1a2;eip=0x000f61; 	T(MOV(ax, 0x140));	// 1634 mov     ax, 140h ;~ 01A2:0F61
cs=0x1a2;eip=0x000f64; 	X(PUSH(ax));	// 1635 push    ax ;~ 01A2:0F64
cs=0x1a2;eip=0x000f65; 	J(CALLF(sprite_make_wnd,0));	// 1636 call    sprite_make_wnd ;~ 01A2:0F65
cs=0x1a2;eip=0x000f6a; 	T(ADD(sp, 6));	// 1637 add     sp, 6 ;~ 01A2:0F6A
cs=0x1a2;eip=0x000f6d; 	X(MOV(*(dw*)(((db*)&wndsprite)), ax));	// 1638 mov     word ptr wndsprite, ax ;~ 01A2:0F6D
cs=0x1a2;eip=0x000f70; 	X(MOV(*(dw*)(((db*)&wndsprite)+2), dx));	// 1639 mov     word ptr wndsprite+2, dx ;~ 01A2:0F70
cs=0x1a2;eip=0x000f74; 	T(MOV(ax, offset(dseg,asdmsel)));	// 1640 mov     ax, offset aSdmsel ; "sdmsel" ;~ 01A2:0F74
cs=0x1a2;eip=0x000f77; 	X(PUSH(ax));	// 1641 push    ax              ; char * ;~ 01A2:0F77
cs=0x1a2;eip=0x000f78; 	T(MOV(ax, 2));	// 1642 mov     ax, 2 ;~ 01A2:0F78
cs=0x1a2;eip=0x000f7b; 	X(PUSH(ax));	// 1643 push    ax              ; int ;~ 01A2:0F7B
cs=0x1a2;eip=0x000f7c; 	J(CALLF(file_load_resource,0));	// 1644 call    file_load_resource ;~ 01A2:0F7C
cs=0x1a2;eip=0x000f81; 	T(ADD(sp, 4));	// 1645 add     sp, 4 ;~ 01A2:0F81
cs=0x1a2;eip=0x000f84; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 1646 mov     [bp+var_4], ax ;~ 01A2:0F84
cs=0x1a2;eip=0x000f87; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 1647 mov     [bp+var_2], dx ;~ 01A2:0F87
cs=0x1a2;eip=0x000f8a; 	J(CALLF(sprite_copy_wnd_to_1,0));	// 1648 call    sprite_copy_wnd_to_1 ;~ 01A2:0F8A
cs=0x1a2;eip=0x000f8f; 	T(MOV(ax, offset(dseg,ascrn)));	// 1649 mov     ax, offset aScrn ; "scrn" ;~ 01A2:0F8F
cs=0x1a2;eip=0x000f92; 	X(PUSH(ax));	// 1650 push    ax ;~ 01A2:0F92
cs=0x1a2;eip=0x000f93; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 1651 push    [bp+var_2] ;~ 01A2:0F93
cs=0x1a2;eip=0x000f96; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1652 push    [bp+var_4] ;~ 01A2:0F96
cs=0x1a2;eip=0x000f99; 	J(CALLF(locate_shape_fatal,0));	// 1653 call    locate_shape_fatal ;~ 01A2:0F99
cs=0x1a2;eip=0x000f9e; 	T(ADD(sp, 6));	// 1654 add     sp, 6 ;~ 01A2:0F9E
cs=0x1a2;eip=0x000fa1; 	X(PUSH(dx));	// 1655 push    dx ;~ 01A2:0FA1
cs=0x1a2;eip=0x000fa2; 	X(PUSH(ax));	// 1656 push    ax ;~ 01A2:0FA2
cs=0x1a2;eip=0x000fa3; 	J(CALLF(sprite_shape_to_1_alt,0));	// 1657 call    sprite_shape_to_1_alt ;~ 01A2:0FA3
cs=0x1a2;eip=0x000fa8; 	T(ADD(sp, 4));	// 1658 add     sp, 4 ;~ 01A2:0FA8
cs=0x1a2;eip=0x000fab; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 1659 push    [bp+var_2] ;~ 01A2:0FAB
cs=0x1a2;eip=0x000fae; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1660 push    [bp+var_4] ;~ 01A2:0FAE
cs=0x1a2;eip=0x000fb1; 	J(CALLF(mmgr_free,0));	// 1661 call    mmgr_free ;~ 01A2:0FB1
cs=0x1a2;eip=0x000fb6; 	T(ADD(sp, 4));	// 1662 add     sp, 4 ;~ 01A2:0FB6
loc_10fb9:
	// 4429 
cs=0x1a2;eip=0x000fb9; 	T(MOV(al, *(raddr(ss,bp+var_c))));	// 1666 mov     al, [bp+var_C] ;~ 01A2:0FB9
cs=0x1a2;eip=0x000fbc; 	T(CMP(*(raddr(ss,bp+var_10)), al));	// 1667 cmp     [bp+var_10], al ;~ 01A2:0FBC
cs=0x1a2;eip=0x000fbf; 	J(JZ(loc_10fef));	// 1668 jz      short loc_10FEF ;~ 01A2:0FBF
cs=0x1a2;eip=0x000fc1; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 1669 mov     al, [bp+var_10] ;~ 01A2:0FC1
cs=0x1a2;eip=0x000fc4; 	X(MOV(*(raddr(ss,bp+var_c)), al));	// 1670 mov     [bp+var_C], al ;~ 01A2:0FC4
cs=0x1a2;eip=0x000fc7; 	J(CALLF(sprite_copy_wnd_to_1,0));	// 1671 call    sprite_copy_wnd_to_1 ;~ 01A2:0FC7
cs=0x1a2;eip=0x000fcc; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 1672 mov     al, [bp+var_6] ;~ 01A2:0FCC
cs=0x1a2;eip=0x000fcf; 	T(CBW);	// 1673 cbw ;~ 01A2:0FCF
cs=0x1a2;eip=0x000fd0; 	X(PUSH(ax));	// 1674 push    ax ;~ 01A2:0FD0
cs=0x1a2;eip=0x000fd1; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 1675 push    word ptr wndsprite+2 ;~ 01A2:0FD1
cs=0x1a2;eip=0x000fd5; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 1676 push    word ptr wndsprite ;~ 01A2:0FD5
cs=0x1a2;eip=0x000fd9; 	J(CALLF(sprite_blit_to_video,0));	// 1677 call    sprite_blit_to_video ;~ 01A2:0FD9
cs=0x1a2;eip=0x000fde; 	T(ADD(sp, 6));	// 1678 add     sp, 6 ;~ 01A2:0FDE
cs=0x1a2;eip=0x000fe1; 	X(MOV(*(raddr(ss,bp+var_6)), 0x0FE));	// 1679 mov     [bp+var_6], 0FEh ; 'ş' ;~ 01A2:0FE1
cs=0x1a2;eip=0x000fe5; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 1680 call    sprite_copy_2_to_1_2 ;~ 01A2:0FE5
cs=0x1a2;eip=0x000fea; 	J(CALLF(sub_29772,0));	// 1681 call    sub_29772 ;~ 01A2:0FEA
loc_10fef:
	// 4430 
cs=0x1a2;eip=0x000fef; 	X(PUSH(word_407d0));	// 1684 push    word_407D0 ;~ 01A2:0FEF
cs=0x1a2;eip=0x000ff3; 	X(PUSH(word_407ce));	// 1685 push    word_407CE ;~ 01A2:0FF3
cs=0x1a2;eip=0x000ff7; 	T(MOV(ax, offset(dseg,menu_buttons_y2)));	// 1686 mov     ax, offset menu_buttons_y2 ;~ 01A2:0FF7
cs=0x1a2;eip=0x000ffa; 	X(PUSH(ax));	// 1687 push    ax ;~ 01A2:0FFA
cs=0x1a2;eip=0x000ffb; 	T(MOV(ax, offset(dseg,menu_buttons_y1)));	// 1688 mov     ax, offset menu_buttons_y1 ;~ 01A2:0FFB
cs=0x1a2;eip=0x000ffe; 	X(PUSH(ax));	// 1689 push    ax ;~ 01A2:0FFE
cs=0x1a2;eip=0x000fff; 	T(MOV(ax, offset(dseg,menu_buttons_x2)));	// 1690 mov     ax, offset menu_buttons_x2 ;~ 01A2:0FFF
cs=0x1a2;eip=0x001002; 	X(PUSH(ax));	// 1691 push    ax ;~ 01A2:1002
cs=0x1a2;eip=0x001003; 	T(MOV(ax, offset(dseg,menu_buttons_x1)));	// 1692 mov     ax, offset menu_buttons_x1 ;~ 01A2:1003
cs=0x1a2;eip=0x001006; 	X(PUSH(ax));	// 1693 push    ax ;~ 01A2:1006
cs=0x1a2;eip=0x001007; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 1694 mov     al, [bp+var_10] ;~ 01A2:1007
cs=0x1a2;eip=0x00100a; 	T(CBW);	// 1695 cbw ;~ 01A2:100A
cs=0x1a2;eip=0x00100b; 	X(PUSH(ax));	// 1696 push    ax ;~ 01A2:100B
cs=0x1a2;eip=0x00100c; 	J(CALLF(mouse_timer_sprite_unk,0));	// 1697 call    mouse_timer_sprite_unk ;~ 01A2:100C
cs=0x1a2;eip=0x001011; 	T(ADD(sp, 0x0E));	// 1698 add     sp, 0Eh ;~ 01A2:1011
cs=0x1a2;eip=0x001014; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 1699 mov     [bp+var_8], ax ;~ 01A2:1014
cs=0x1a2;eip=0x001017; 	X(PUSH(ax));	// 1700 push    ax ;~ 01A2:1017
cs=0x1a2;eip=0x001018; 	J(CALLF(input_checking,0));	// 1701 call    input_checking ;~ 01A2:1018
cs=0x1a2;eip=0x00101d; 	T(ADD(sp, 2));	// 1702 add     sp, 2 ;~ 01A2:101D
cs=0x1a2;eip=0x001020; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 1703 mov     [bp+var_A], ax ;~ 01A2:1020
cs=0x1a2;eip=0x001023; 	T(MOV(ax, offset(dseg,menu_buttons_y2)));	// 1704 mov     ax, offset menu_buttons_y2 ;~ 01A2:1023
cs=0x1a2;eip=0x001026; 	X(PUSH(ax));	// 1705 push    ax ;~ 01A2:1026
cs=0x1a2;eip=0x001027; 	T(MOV(ax, offset(dseg,menu_buttons_y1)));	// 1706 mov     ax, offset menu_buttons_y1 ;~ 01A2:1027
cs=0x1a2;eip=0x00102a; 	X(PUSH(ax));	// 1707 push    ax ;~ 01A2:102A
cs=0x1a2;eip=0x00102b; 	T(MOV(ax, offset(dseg,menu_buttons_x2)));	// 1708 mov     ax, offset menu_buttons_x2 ;~ 01A2:102B
cs=0x1a2;eip=0x00102e; 	X(PUSH(ax));	// 1709 push    ax ;~ 01A2:102E
cs=0x1a2;eip=0x00102f; 	T(MOV(ax, offset(dseg,menu_buttons_x1)));	// 1710 mov     ax, offset menu_buttons_x1 ;~ 01A2:102F
cs=0x1a2;eip=0x001032; 	X(PUSH(ax));	// 1711 push    ax ;~ 01A2:1032
cs=0x1a2;eip=0x001033; 	T(MOV(ax, 5));	// 1712 mov     ax, 5 ;~ 01A2:1033
cs=0x1a2;eip=0x001036; 	X(PUSH(ax));	// 1713 push    ax ;~ 01A2:1036
cs=0x1a2;eip=0x001037; 	J(CALLF(mouse_multi_hittest,0));	// 1714 call    mouse_multi_hittest ;~ 01A2:1037
cs=0x1a2;eip=0x00103c; 	T(ADD(sp, 0x0A));	// 1715 add     sp, 0Ah ;~ 01A2:103C
cs=0x1a2;eip=0x00103f; 	X(MOV(*(raddr(ss,bp+var_e)), al));	// 1716 mov     [bp+var_E], al ;~ 01A2:103F
cs=0x1a2;eip=0x001042; 	T(CMP(al, 0x0FF));	// 1717 cmp     al, 0FFh ;~ 01A2:1042
cs=0x1a2;eip=0x001044; 	J(JZ(loc_11049));	// 1718 jz      short loc_11049 ;~ 01A2:1044
cs=0x1a2;eip=0x001046; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 1719 mov     [bp+var_10], al ;~ 01A2:1046
loc_11049:
	// 4431 
cs=0x1a2;eip=0x001049; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 1722 mov     ax, [bp+var_8] ;~ 01A2:1049
cs=0x1a2;eip=0x00104c; 	X(ADD(idle_counter, ax));	// 1723 add     idle_counter, ax ;~ 01A2:104C
cs=0x1a2;eip=0x001050; 	T(CMP(idle_counter, 0x1770));	// 1724 cmp     idle_counter, 1770h ;~ 01A2:1050
cs=0x1a2;eip=0x001056; 	J(JLE(loc_11062));	// 1725 jle     short loc_11062 ;~ 01A2:1056
cs=0x1a2;eip=0x001058; 	X(MOV(idle_counter, 0));	// 1726 mov     idle_counter, 0 ;~ 01A2:1058
cs=0x1a2;eip=0x00105e; 	X(INC(idle_expired));	// 1727 inc     idle_expired ;~ 01A2:105E
loc_11062:
	// 4432 
cs=0x1a2;eip=0x001062; 	T(CMP(idle_expired, 0));	// 1730 cmp     idle_expired, 0 ;~ 01A2:1062
cs=0x1a2;eip=0x001067; 	J(JZ(loc_11072));	// 1731 jz      short loc_11072 ;~ 01A2:1067
cs=0x1a2;eip=0x001069; 	X(MOV(*(raddr(ss,bp+var_10)), 0));	// 1732 mov     [bp+var_10], 0  ; idle expired -> select menu 0 and keycode for enter ;~ 01A2:1069
cs=0x1a2;eip=0x00106d; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x0D));	// 1733 mov     [bp+var_A], 0Dh ;~ 01A2:106D
loc_11072:
	// 4433 
cs=0x1a2;eip=0x001072; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 1736 cmp     [bp+var_A], 0 ;~ 01A2:1072
cs=0x1a2;eip=0x001076; 	J(JNZ(loc_1107b));	// 1737 jnz     short loc_1107B ;~ 01A2:1076
cs=0x1a2;eip=0x001078; 	J(JMP(loc_10fb9));	// 1738 jmp     loc_10FB9 ;~ 01A2:1078
loc_1107b:
	// 4434 
cs=0x1a2;eip=0x00107b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 1742 mov     ax, [bp+var_A] ;~ 01A2:107B
cs=0x1a2;eip=0x00107e; 	T(CMP(ax, 0x0D));	// 1743 cmp     ax, 0Dh         ; enter ;~ 01A2:107E
cs=0x1a2;eip=0x001081; 	J(JZ(loc_110ba));	// 1744 jz      short loc_110BA ;~ 01A2:1081
cs=0x1a2;eip=0x001083; 	T(CMP(ax, 0x1B));	// 1745 cmp     ax, 1Bh         ; esc ;~ 01A2:1083
cs=0x1a2;eip=0x001086; 	J(JZ(loc_110b6));	// 1746 jz      short loc_110B6 ;~ 01A2:1086
cs=0x1a2;eip=0x001088; 	T(CMP(ax, 0x20));	// 1747 cmp     ax, 20h ; ' '   ; space ;~ 01A2:1088
cs=0x1a2;eip=0x00108b; 	J(JZ(loc_110ba));	// 1748 jz      short loc_110BA ;~ 01A2:108B
cs=0x1a2;eip=0x00108d; 	T(CMP(ax, 0x4B00));	// 1749 cmp     ax, 4B00h       ; arrow ;~ 01A2:108D
cs=0x1a2;eip=0x001090; 	J(JZ(loc_1109a));	// 1750 jz      short loc_1109A ;~ 01A2:1090
cs=0x1a2;eip=0x001092; 	T(CMP(ax, 0x4D00));	// 1751 cmp     ax, 4D00h       ; arrow opposite direction ;~ 01A2:1092
cs=0x1a2;eip=0x001095; 	J(JZ(loc_110aa));	// 1752 jz      short loc_110AA ;~ 01A2:1095
cs=0x1a2;eip=0x001097; 	J(JMP(loc_10fb9));	// 1753 jmp     loc_10FB9 ;~ 01A2:1097
loc_1109a:
	// 4435 
cs=0x1a2;eip=0x00109a; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 1757 mov     al, [bp+var_10] ;~ 01A2:109A
cs=0x1a2;eip=0x00109d; 	T(CBW);	// 1758 cbw ;~ 01A2:109D
cs=0x1a2;eip=0x00109e; 	T(MOV(bx, ax));	// 1759 mov     bx, ax ;~ 01A2:109E
cs=0x1a2;eip=0x0010a0; 	T(MOV(al, *(raddr(ds,bx+0x280))));	// 1760 mov     al, [bx+280h] ;~ 01A2:10A0
loc_110a4:
	// 4436 
cs=0x1a2;eip=0x0010a4; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 1763 mov     [bp+var_10], al ;~ 01A2:10A4
cs=0x1a2;eip=0x0010a7; 	J(JMP(loc_10fb9));	// 1764 jmp     loc_10FB9 ;~ 01A2:10A7
loc_110aa:
	// 4437 
cs=0x1a2;eip=0x0010aa; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 1768 mov     al, [bp+var_10] ;~ 01A2:10AA
cs=0x1a2;eip=0x0010ad; 	T(CBW);	// 1769 cbw ;~ 01A2:10AD
cs=0x1a2;eip=0x0010ae; 	T(MOV(bx, ax));	// 1770 mov     bx, ax ;~ 01A2:10AE
cs=0x1a2;eip=0x0010b0; 	T(MOV(al, *(raddr(ds,bx+0x286))));	// 1771 mov     al, [bx+286h] ;~ 01A2:10B0
cs=0x1a2;eip=0x0010b4; 	J(JMP(loc_110a4));	// 1772 jmp     short loc_110A4 ;~ 01A2:10B4
loc_110b6:
	// 4438 
cs=0x1a2;eip=0x0010b6; 	X(MOV(*(raddr(ss,bp+var_10)), 0x0FF));	// 1776 mov     [bp+var_10], 0FFh ;~ 01A2:10B6
loc_110ba:
	// 4439 
cs=0x1a2;eip=0x0010ba; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 1780 push    word ptr wndsprite+2 ;~ 01A2:10BA
cs=0x1a2;eip=0x0010be; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 1781 push    word ptr wndsprite ;~ 01A2:10BE
cs=0x1a2;eip=0x0010c2; 	J(CALLF(sprite_free_wnd,0));	// 1782 call    sprite_free_wnd ;~ 01A2:10C2
cs=0x1a2;eip=0x0010c7; 	T(MOV(al, *(raddr(ss,bp+var_10))));	// 1783 mov     al, [bp+var_10] ;~ 01A2:10C7
cs=0x1a2;eip=0x0010ca; 	T(CBW);	// 1784 cbw ;~ 01A2:10CA
cs=0x1a2;eip=0x0010cb; 	T(MOV(sp, bp));	// 1785 mov     sp, bp ;~ 01A2:10CB
cs=0x1a2;eip=0x0010cd; 	X(POP(bp));	// 1786 pop     bp ;~ 01A2:10CD
cs=0x1a2;eip=0x0010ce; 	J(RETF(0));	// 1787 retf ;~ 01A2:10CE

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
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
        case m2c::krun_menu: 	goto run_menu;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool run_tracks_menu(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    run_tracks_menu:
    _begin:
#undef var_16
#define var_16 -0x16
	// 1799 var_16          = byte ptr -16h ;~ 01A2:10D0
#undef var_14
#define var_14 -0x14
	// 1800 var_14          = byte ptr -14h ;~ 01A2:10D0
#undef var_12
#define var_12 -0x12
	// 1801 var_12          = byte ptr -12h ;~ 01A2:10D0
#undef var_e
#define var_e -0x0E
	// 1802 var_E           = word ptr -0Eh ;~ 01A2:10D0
#undef var_c
#define var_c -0x0C
	// 1803 var_C           = word ptr -0Ch ;~ 01A2:10D0
#undef var_a
#define var_a -0x0A
	// 1804 var_A           = byte ptr -0Ah ;~ 01A2:10D0
#undef var_9
#define var_9 -9
	// 1805 var_9           = byte ptr -9 ;~ 01A2:10D0
#undef var_8
#define var_8 -8
	// 1806 var_8           = byte ptr -8 ;~ 01A2:10D0
#undef var_7
#define var_7 -7
	// 1807 var_7           = byte ptr -7 ;~ 01A2:10D0
#undef var_6
#define var_6 -6
	// 1808 var_6           = byte ptr -6 ;~ 01A2:10D0
#undef var_4
#define var_4 -4
	// 1809 var_4           = word ptr -4 ;~ 01A2:10D0
#undef var_2
#define var_2 -2
	// 1810 var_2           = word ptr -2 ;~ 01A2:10D0
#undef arg_0
#define arg_0 6
	// 1811 arg_0           = word ptr  6 ;~ 01A2:10D0
cs=0x1a2;eip=0x0010d0; 	X(PUSH(bp));	// 1813 push    bp ;~ 01A2:10D0
cs=0x1a2;eip=0x0010d1; 	T(MOV(bp, sp));	// 1814 mov     bp, sp ;~ 01A2:10D1
cs=0x1a2;eip=0x0010d3; 	T(SUB(sp, 0x16));	// 1815 sub     sp, 16h ;~ 01A2:10D3
cs=0x1a2;eip=0x0010d6; 	X(PUSH(di));	// 1816 push    di              ; int ;~ 01A2:10D6
cs=0x1a2;eip=0x0010d7; 	X(PUSH(si));	// 1817 push    si              ; char * ;~ 01A2:10D7
cs=0x1a2;eip=0x0010d8; 	T(MOV(ax, 3));	// 1818 mov     ax, 3 ;~ 01A2:10D8
cs=0x1a2;eip=0x0010db; 	X(PUSH(ax));	// 1819 push    ax ;~ 01A2:10DB
cs=0x1a2;eip=0x0010dc; 	J(CALLF(ensure_file_exists,0));	// 1820 call    ensure_file_exists ;~ 01A2:10DC
cs=0x1a2;eip=0x0010e1; 	T(ADD(sp, 2));	// 1821 add     sp, 2 ;~ 01A2:10E1
cs=0x1a2;eip=0x0010e4; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 1822 cmp     [bp+arg_0], 0 ;~ 01A2:10E4
cs=0x1a2;eip=0x0010e8; 	J(JZ(loc_110ed));	// 1823 jz      short loc_110ED ;~ 01A2:10E8
cs=0x1a2;eip=0x0010ea; 	J(JMP(loc_1156a));	// 1824 jmp     loc_1156A ;~ 01A2:10EA
loc_110ed:
	// 4440 
cs=0x1a2;eip=0x0010ed; 	X(MOV(*(raddr(ss,bp+var_6)), 0x0FF));	// 1829 mov     [bp+var_6], 0FFh ;~ 01A2:10ED
cs=0x1a2;eip=0x0010f1; 	X(MOV(*(raddr(ss,bp+var_16)), 0));	// 1830 mov     [bp+var_16], 0 ;~ 01A2:10F1
cs=0x1a2;eip=0x0010f5; 	X(MOV(*(raddr(ss,bp+var_12)), 0x0FF));	// 1831 mov     [bp+var_12], 0FFh ;~ 01A2:10F5
cs=0x1a2;eip=0x0010f9; 	J(CALLF(show_waiting,0));	// 1832 call    show_waiting ;~ 01A2:10F9
cs=0x1a2;eip=0x0010fe; 	X(MOV(waitflag, 0x9B));	// 1833 mov     waitflag, 9Bh ; '›' ;~ 01A2:10FE
cs=0x1a2;eip=0x001104; 	T(MOV(ax, 0x0F));	// 1834 mov     ax, 0Fh ;~ 01A2:1104
cs=0x1a2;eip=0x001107; 	X(PUSH(ax));	// 1835 push    ax ;~ 01A2:1107
cs=0x1a2;eip=0x001108; 	T(MOV(ax, 0x0C8));	// 1836 mov     ax, 0C8h ; 'È' ;~ 01A2:1108
cs=0x1a2;eip=0x00110b; 	X(PUSH(ax));	// 1837 push    ax ;~ 01A2:110B
cs=0x1a2;eip=0x00110c; 	T(MOV(ax, 0x140));	// 1838 mov     ax, 140h ;~ 01A2:110C
cs=0x1a2;eip=0x00110f; 	X(PUSH(ax));	// 1839 push    ax ;~ 01A2:110F
cs=0x1a2;eip=0x001110; 	J(CALLF(sprite_make_wnd,0));	// 1840 call    sprite_make_wnd ;~ 01A2:1110
cs=0x1a2;eip=0x001115; 	T(ADD(sp, 6));	// 1841 add     sp, 6 ;~ 01A2:1115
cs=0x1a2;eip=0x001118; 	X(MOV(*(dw*)(((db*)&wndsprite)), ax));	// 1842 mov     word ptr wndsprite, ax ;~ 01A2:1118
cs=0x1a2;eip=0x00111b; 	X(MOV(*(dw*)(((db*)&wndsprite)+2), dx));	// 1843 mov     word ptr wndsprite+2, dx ;~ 01A2:111B
cs=0x1a2;eip=0x00111f; 	T(LES(bx, td14_elem_map_main));	// 1844 les     bx, td14_elem_map_main ;~ 01A2:111F
cs=0x1a2;eip=0x001123; 	T(MOV(al, *(raddr(es,bx+0x384))));	// 1845 mov     al, es:[bx+384h] ;~ 01A2:1123
cs=0x1a2;eip=0x001128; 	T(SUB(ah, ah));	// 1846 sub     ah, ah ;~ 01A2:1128
cs=0x1a2;eip=0x00112a; 	X(PUSH(ax));	// 1847 push    ax ;~ 01A2:112A
cs=0x1a2;eip=0x00112b; 	J(CALLF(load_skybox,0));	// 1848 call    load_skybox ;~ 01A2:112B
cs=0x1a2;eip=0x001130; 	T(ADD(sp, 2));	// 1849 add     sp, 2 ;~ 01A2:1130
cs=0x1a2;eip=0x001133; 	J(CALLF(shape3d_load_all,0));	// 1850 call    shape3d_load_all ;~ 01A2:1133
cs=0x1a2;eip=0x001138; 	T(MOV(ax, 0x0C8));	// 1851 mov     ax, 0C8h ; 'È' ;~ 01A2:1138
cs=0x1a2;eip=0x00113b; 	X(PUSH(ax));	// 1852 push    ax ;~ 01A2:113B
cs=0x1a2;eip=0x00113c; 	T(MOV(ax, 0x140));	// 1853 mov     ax, 140h ;~ 01A2:113C
cs=0x1a2;eip=0x00113f; 	X(PUSH(ax));	// 1854 push    ax ;~ 01A2:113F
cs=0x1a2;eip=0x001140; 	T(MOV(ax, 0x28));	// 1855 mov     ax, 28h ; '(' ;~ 01A2:1140
cs=0x1a2;eip=0x001143; 	X(PUSH(ax));	// 1856 push    ax ;~ 01A2:1143
cs=0x1a2;eip=0x001144; 	X(PUSH(ax));	// 1857 push    ax ;~ 01A2:1144
cs=0x1a2;eip=0x001145; 	J(CALLF(set_projection,0));	// 1858 call    set_projection ;~ 01A2:1145
cs=0x1a2;eip=0x00114a; 	T(ADD(sp, 8));	// 1859 add     sp, 8 ;~ 01A2:114A
cs=0x1a2;eip=0x00114d; 	T(MOV(ax, 0x0FFFE));	// 1860 mov     ax, 0FFFEh ;~ 01A2:114D
cs=0x1a2;eip=0x001150; 	X(PUSH(ax));	// 1861 push    ax ;~ 01A2:1150
cs=0x1a2;eip=0x001151; 	J(CALLF(init_game_state,0));	// 1862 call    init_game_state ;~ 01A2:1151
cs=0x1a2;eip=0x001156; 	T(ADD(sp, 2));	// 1863 add     sp, 2 ;~ 01A2:1156
cs=0x1a2;eip=0x001159; 	J(CALLF(sprite_copy_wnd_to_1,0));	// 1864 call    sprite_copy_wnd_to_1 ;~ 01A2:1159
cs=0x1a2;eip=0x00115e; 	X(PUSH(skybox_grd_color));	// 1865 push    skybox_grd_color ;~ 01A2:115E
cs=0x1a2;eip=0x001162; 	J(CALLF(sprite_clear_1_color,0));	// 1866 call    sprite_clear_1_color ;~ 01A2:1162
cs=0x1a2;eip=0x001167; 	T(ADD(sp, 2));	// 1867 add     sp, 2 ;~ 01A2:1167
cs=0x1a2;eip=0x00116a; 	T(MOV(ax, 0x0C8));	// 1868 mov     ax, 0C8h ; 'È' ;~ 01A2:116A
cs=0x1a2;eip=0x00116d; 	X(PUSH(ax));	// 1869 push    ax ;~ 01A2:116D
cs=0x1a2;eip=0x00116e; 	T(SUB(ax, ax));	// 1870 sub     ax, ax ;~ 01A2:116E
cs=0x1a2;eip=0x001170; 	X(PUSH(ax));	// 1871 push    ax ;~ 01A2:1170
cs=0x1a2;eip=0x001171; 	T(MOV(ax, 0x140));	// 1872 mov     ax, 140h ;~ 01A2:1171
cs=0x1a2;eip=0x001174; 	X(PUSH(ax));	// 1873 push    ax ;~ 01A2:1174
cs=0x1a2;eip=0x001175; 	T(SUB(ax, ax));	// 1874 sub     ax, ax ;~ 01A2:1175
cs=0x1a2;eip=0x001177; 	X(PUSH(ax));	// 1875 push    ax ;~ 01A2:1177
cs=0x1a2;eip=0x001178; 	J(CALLF(sprite_set_1_size,0));	// 1876 call    sprite_set_1_size ;~ 01A2:1178
cs=0x1a2;eip=0x00117d; 	T(ADD(sp, 8));	// 1877 add     sp, 8 ;~ 01A2:117D
cs=0x1a2;eip=0x001180; 	J(CALLF(draw_track_preview,0));	// 1878 call    draw_track_preview ;~ 01A2:1180
cs=0x1a2;eip=0x001185; 	J(CALLF(shape3d_free_all,0));	// 1879 call    shape3d_free_all ;~ 01A2:1185
cs=0x1a2;eip=0x00118a; 	J(CALLF(unload_skybox,0));	// 1880 call    unload_skybox ;~ 01A2:118A
cs=0x1a2;eip=0x00118f; 	J(CALLF(sprite_copy_wnd_to_1,0));	// 1881 call    sprite_copy_wnd_to_1 ;~ 01A2:118F
cs=0x1a2;eip=0x001194; 	T(MOV(ax, offset(dseg,asc_3ba24)));	// 1882 mov     ax, offset asc_3BA24 ; "'" ;~ 01A2:1194
cs=0x1a2;eip=0x001197; 	X(PUSH(ax));	// 1883 push    ax ;~ 01A2:1197
cs=0x1a2;eip=0x001198; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1884 mov     ax, offset resID_byte1 ;~ 01A2:1198
cs=0x1a2;eip=0x00119b; 	X(PUSH(ax));	// 1885 push    ax              ; char * ;~ 01A2:119B
cs=0x1a2;eip=0x00119c; 	J(CALLF(_strcpy,0));	// 1886 call    _strcpy ;~ 01A2:119C
cs=0x1a2;eip=0x0011a1; 	T(ADD(sp, 4));	// 1887 add     sp, 4 ;~ 01A2:11A1
cs=0x1a2;eip=0x0011a4; 	T(MOV(ax, offset(dseg,byte_449b1)));	// 1888 mov     ax, offset byte_449B1 ;~ 01A2:11A4
cs=0x1a2;eip=0x0011a7; 	X(PUSH(ax));	// 1889 push    ax ;~ 01A2:11A7
cs=0x1a2;eip=0x0011a8; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1890 mov     ax, offset resID_byte1 ;~ 01A2:11A8
cs=0x1a2;eip=0x0011ab; 	X(PUSH(ax));	// 1891 push    ax              ; char * ;~ 01A2:11AB
cs=0x1a2;eip=0x0011ac; 	J(CALLF(_strcat,0));	// 1892 call    _strcat ;~ 01A2:11AC
cs=0x1a2;eip=0x0011b1; 	T(ADD(sp, 4));	// 1893 add     sp, 4 ;~ 01A2:11B1
cs=0x1a2;eip=0x0011b4; 	T(MOV(ax, offset(dseg,asc_3ba26)));	// 1894 mov     ax, offset asc_3BA26 ; "'" ;~ 01A2:11B4
cs=0x1a2;eip=0x0011b7; 	X(PUSH(ax));	// 1895 push    ax ;~ 01A2:11B7
cs=0x1a2;eip=0x0011b8; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1896 mov     ax, offset resID_byte1 ;~ 01A2:11B8
cs=0x1a2;eip=0x0011bb; 	X(PUSH(ax));	// 1897 push    ax              ; char * ;~ 01A2:11BB
cs=0x1a2;eip=0x0011bc; 	J(CALLF(_strcat,0));	// 1898 call    _strcat ;~ 01A2:11BC
cs=0x1a2;eip=0x0011c1; 	T(ADD(sp, 4));	// 1899 add     sp, 4 ;~ 01A2:11C1
cs=0x1a2;eip=0x0011c4; 	T(SUB(ax, ax));	// 1900 sub     ax, ax ;~ 01A2:11C4
cs=0x1a2;eip=0x0011c6; 	X(PUSH(ax));	// 1901 push    ax ;~ 01A2:11C6
cs=0x1a2;eip=0x0011c7; 	X(PUSH(dialog_fnt_colour));	// 1902 push    dialog_fnt_colour ;~ 01A2:11C7
cs=0x1a2;eip=0x0011cb; 	T(MOV(ax, 6));	// 1903 mov     ax, 6 ;~ 01A2:11CB
cs=0x1a2;eip=0x0011ce; 	X(PUSH(ax));	// 1904 push    ax ;~ 01A2:11CE
cs=0x1a2;eip=0x0011cf; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1905 mov     ax, offset resID_byte1 ;~ 01A2:11CF
cs=0x1a2;eip=0x0011d2; 	X(PUSH(ax));	// 1906 push    ax ;~ 01A2:11D2
cs=0x1a2;eip=0x0011d3; 	J(CALLF(font_op2_alt,0));	// 1907 call    font_op2_alt ;~ 01A2:11D3
cs=0x1a2;eip=0x0011d8; 	T(ADD(sp, 2));	// 1908 add     sp, 2 ;~ 01A2:11D8
cs=0x1a2;eip=0x0011db; 	X(PUSH(ax));	// 1909 push    ax ;~ 01A2:11DB
cs=0x1a2;eip=0x0011dc; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1910 mov     ax, offset resID_byte1 ;~ 01A2:11DC
cs=0x1a2;eip=0x0011df; 	X(PUSH(ax));	// 1911 push    ax ;~ 01A2:11DF
cs=0x1a2;eip=0x0011e0; 	J(CALLF(intro_draw_text,0));	// 1912 call    intro_draw_text ;~ 01A2:11E0
cs=0x1a2;eip=0x0011e5; 	T(ADD(sp, 0x0A));	// 1913 add     sp, 0Ah ;~ 01A2:11E5
cs=0x1a2;eip=0x0011e8; 	T(SUB(ax, ax));	// 1914 sub     ax, ax ;~ 01A2:11E8
cs=0x1a2;eip=0x0011ea; 	X(PUSH(ax));	// 1915 push    ax ;~ 01A2:11EA
cs=0x1a2;eip=0x0011eb; 	X(PUSH(cs));	// 1916 push    cs ;~ 01A2:11EB
cs=0x1a2;eip=0x0011ec; 	J(CALL(highscore_write_a,0));	// 1917 call    near ptr highscore_write_a ;~ 01A2:11EC
cs=0x1a2;eip=0x0011ef; 	T(ADD(sp, 2));	// 1918 add     sp, 2 ;~ 01A2:11EF
cs=0x1a2;eip=0x0011f2; 	T(OR(al, al));	// 1919 or      al, al ;~ 01A2:11F2
cs=0x1a2;eip=0x0011f4; 	J(JZ(loc_111f9));	// 1920 jz      short loc_111F9 ;~ 01A2:11F4
cs=0x1a2;eip=0x0011f6; 	J(JMP(loc_112e5));	// 1921 jmp     loc_112E5 ;~ 01A2:11F6
loc_111f9:
	// 4441 
cs=0x1a2;eip=0x0011f9; 	T(MOV(ax, 0x34));	// 1925 mov     ax, 34h ; '4' ;~ 01A2:11F9
cs=0x1a2;eip=0x0011fc; 	X(IMUL1_2(word_46170));	// 1926 imul    word_46170 ;~ 01A2:11FC
cs=0x1a2;eip=0x001200; 	T(MOV(di, ax));	// 1927 mov     di, ax ;~ 01A2:1200
cs=0x1a2;eip=0x001202; 	T(LES(bx, td11_highscores));	// 1928 les     bx, td11_highscores ;~ 01A2:1202
cs=0x1a2;eip=0x001206; 	T(CMP(*(dw*)(raddr(es,bx+di+0x32)), 0x0FFFF));	// 1929 cmp     word ptr es:[bx+di+32h], 0FFFFh ;~ 01A2:1206
cs=0x1a2;eip=0x00120b; 	J(JNZ(loc_11210));	// 1930 jnz     short loc_11210 ;~ 01A2:120B
cs=0x1a2;eip=0x00120d; 	J(JMP(loc_112e5));	// 1931 jmp     loc_112E5 ;~ 01A2:120D
loc_11210:
	// 4442 
cs=0x1a2;eip=0x001210; 	T(MOV(ax, offset(dseg,ahs0)));	// 1935 mov     ax, offset aHs0 ; "hs0" ;~ 01A2:1210
cs=0x1a2;eip=0x001213; 	X(PUSH(ax));	// 1936 push    ax ;~ 01A2:1213
cs=0x1a2;eip=0x001214; 	X(PUSH(word_44cee));	// 1937 push    word_44CEE ;~ 01A2:1214
cs=0x1a2;eip=0x001218; 	X(PUSH(mainresptr));	// 1938 push    mainresptr ;~ 01A2:1218
cs=0x1a2;eip=0x00121c; 	J(CALLF(locate_text_res,0));	// 1939 call    locate_text_res ;~ 01A2:121C
cs=0x1a2;eip=0x001221; 	T(ADD(sp, 6));	// 1940 add     sp, 6 ;~ 01A2:1221
cs=0x1a2;eip=0x001224; 	X(PUSH(dx));	// 1941 push    dx ;~ 01A2:1224
cs=0x1a2;eip=0x001225; 	X(PUSH(ax));	// 1942 push    ax ;~ 01A2:1225
cs=0x1a2;eip=0x001226; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1943 mov     ax, offset resID_byte1 ;~ 01A2:1226
cs=0x1a2;eip=0x001229; 	X(PUSH(ax));	// 1944 push    ax ;~ 01A2:1229
cs=0x1a2;eip=0x00122a; 	J(CALLF(copy_string,0));	// 1945 call    copy_string ;~ 01A2:122A
cs=0x1a2;eip=0x00122f; 	T(ADD(sp, 6));	// 1946 add     sp, 6 ;~ 01A2:122F
cs=0x1a2;eip=0x001232; 	T(SUB(ax, ax));	// 1947 sub     ax, ax ;~ 01A2:1232
cs=0x1a2;eip=0x001234; 	X(PUSH(ax));	// 1948 push    ax ;~ 01A2:1234
cs=0x1a2;eip=0x001235; 	X(PUSH(dialog_fnt_colour));	// 1949 push    dialog_fnt_colour ;~ 01A2:1235
cs=0x1a2;eip=0x001239; 	T(MOV(ax, 0x12));	// 1950 mov     ax, 12h ;~ 01A2:1239
cs=0x1a2;eip=0x00123c; 	X(PUSH(ax));	// 1951 push    ax ;~ 01A2:123C
cs=0x1a2;eip=0x00123d; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1952 mov     ax, offset resID_byte1 ;~ 01A2:123D
cs=0x1a2;eip=0x001240; 	X(PUSH(ax));	// 1953 push    ax ;~ 01A2:1240
cs=0x1a2;eip=0x001241; 	J(CALLF(font_op2_alt,0));	// 1954 call    font_op2_alt ;~ 01A2:1241
cs=0x1a2;eip=0x001246; 	T(ADD(sp, 2));	// 1955 add     sp, 2 ;~ 01A2:1246
cs=0x1a2;eip=0x001249; 	X(PUSH(ax));	// 1956 push    ax ;~ 01A2:1249
cs=0x1a2;eip=0x00124a; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 1957 mov     ax, offset resID_byte1 ;~ 01A2:124A
cs=0x1a2;eip=0x00124d; 	X(PUSH(ax));	// 1958 push    ax ;~ 01A2:124D
cs=0x1a2;eip=0x00124e; 	J(CALLF(intro_draw_text,0));	// 1959 call    intro_draw_text ;~ 01A2:124E
cs=0x1a2;eip=0x001253; 	T(ADD(sp, 0x0A));	// 1960 add     sp, 0Ah ;~ 01A2:1253
cs=0x1a2;eip=0x001256; 	X(PUSH(word_44d24));	// 1961 push    word_44D24 ;~ 01A2:1256
cs=0x1a2;eip=0x00125a; 	X(PUSH(fontnptr));	// 1962 push    fontnptr ;~ 01A2:125A
cs=0x1a2;eip=0x00125e; 	J(CALLF(font_set_fontdef2,0));	// 1963 call    font_set_fontdef2 ;~ 01A2:125E
cs=0x1a2;eip=0x001263; 	T(ADD(sp, 4));	// 1964 add     sp, 4 ;~ 01A2:1263
cs=0x1a2;eip=0x001266; 	T(ax = bp+var_a);	// 1965 lea     ax, [bp+var_A] ;~ 01A2:1266
cs=0x1a2;eip=0x001269; 	X(PUSH(ax));	// 1966 push    ax ;~ 01A2:1269
cs=0x1a2;eip=0x00126a; 	T(SUB(ax, ax));	// 1967 sub     ax, ax ;~ 01A2:126A
cs=0x1a2;eip=0x00126c; 	X(PUSH(ax));	// 1968 push    ax ;~ 01A2:126C
cs=0x1a2;eip=0x00126d; 	X(PUSH(cs));	// 1969 push    cs ;~ 01A2:126D
cs=0x1a2;eip=0x00126e; 	J(CALL(print_highscore_entry,0));	// 1970 call    near ptr print_highscore_entry ;~ 01A2:126E
cs=0x1a2;eip=0x001271; 	T(ADD(sp, 4));	// 1971 add     sp, 4 ;~ 01A2:1271
cs=0x1a2;eip=0x001274; 	T(SUB(ax, ax));	// 1972 sub     ax, ax ;~ 01A2:1274
cs=0x1a2;eip=0x001276; 	X(PUSH(ax));	// 1973 push    ax ;~ 01A2:1276
cs=0x1a2;eip=0x001277; 	X(PUSH(ax));	// 1974 push    ax ;~ 01A2:1277
cs=0x1a2;eip=0x001278; 	J(CALLF(font_set_unk,0));	// 1975 call    font_set_unk ;~ 01A2:1278
cs=0x1a2;eip=0x00127d; 	T(ADD(sp, 4));	// 1976 add     sp, 4 ;~ 01A2:127D
cs=0x1a2;eip=0x001280; 	T(MOV(ax, 0x1E));	// 1977 mov     ax, 1Eh ;~ 01A2:1280
cs=0x1a2;eip=0x001283; 	X(PUSH(ax));	// 1978 push    ax ;~ 01A2:1283
cs=0x1a2;eip=0x001284; 	T(MOV(ax, 0x10));	// 1979 mov     ax, 10h ;~ 01A2:1284
cs=0x1a2;eip=0x001287; 	X(PUSH(ax));	// 1980 push    ax ;~ 01A2:1287
cs=0x1a2;eip=0x001288; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 1981 mov     al, [bp+var_A] ;~ 01A2:1288
cs=0x1a2;eip=0x00128b; 	T(CBW);	// 1982 cbw ;~ 01A2:128B
cs=0x1a2;eip=0x00128c; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 1983 add     ax, offset resID_byte1 ;~ 01A2:128C
cs=0x1a2;eip=0x00128f; 	X(PUSH(ax));	// 1984 push    ax ;~ 01A2:128F
cs=0x1a2;eip=0x001290; 	J(CALLF(font_draw_text,0));	// 1985 call    font_draw_text ;~ 01A2:1290
cs=0x1a2;eip=0x001295; 	T(ADD(sp, 6));	// 1986 add     sp, 6 ;~ 01A2:1295
cs=0x1a2;eip=0x001298; 	T(MOV(ax, 0x1E));	// 1987 mov     ax, 1Eh ;~ 01A2:1298
cs=0x1a2;eip=0x00129b; 	X(PUSH(ax));	// 1988 push    ax ;~ 01A2:129B
cs=0x1a2;eip=0x00129c; 	T(MOV(ax, 0x78));	// 1989 mov     ax, 78h ; 'x' ;~ 01A2:129C
cs=0x1a2;eip=0x00129f; 	X(PUSH(ax));	// 1990 push    ax ;~ 01A2:129F
cs=0x1a2;eip=0x0012a0; 	T(MOV(al, *(raddr(ss,bp+var_9))));	// 1991 mov     al, [bp+var_9] ;~ 01A2:12A0
cs=0x1a2;eip=0x0012a3; 	T(CBW);	// 1992 cbw ;~ 01A2:12A3
cs=0x1a2;eip=0x0012a4; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 1993 add     ax, offset resID_byte1 ;~ 01A2:12A4
cs=0x1a2;eip=0x0012a7; 	X(PUSH(ax));	// 1994 push    ax ;~ 01A2:12A7
cs=0x1a2;eip=0x0012a8; 	J(CALLF(font_draw_text,0));	// 1995 call    font_draw_text ;~ 01A2:12A8
cs=0x1a2;eip=0x0012ad; 	T(ADD(sp, 6));	// 1996 add     sp, 6 ;~ 01A2:12AD
cs=0x1a2;eip=0x0012b0; 	T(MOV(ax, 0x1E));	// 1997 mov     ax, 1Eh ;~ 01A2:12B0
cs=0x1a2;eip=0x0012b3; 	X(PUSH(ax));	// 1998 push    ax ;~ 01A2:12B3
cs=0x1a2;eip=0x0012b4; 	T(MOV(ax, 0x0E0));	// 1999 mov     ax, 0E0h ; 'à' ;~ 01A2:12B4
cs=0x1a2;eip=0x0012b7; 	X(PUSH(ax));	// 2000 push    ax ;~ 01A2:12B7
cs=0x1a2;eip=0x0012b8; 	T(MOV(al, *(raddr(ss,bp+var_8))));	// 2001 mov     al, [bp+var_8] ;~ 01A2:12B8
cs=0x1a2;eip=0x0012bb; 	T(CBW);	// 2002 cbw ;~ 01A2:12BB
cs=0x1a2;eip=0x0012bc; 	T(ADD(ax, 0x0AC74));	// 2003 add     ax, 0AC74h ;~ 01A2:12BC
cs=0x1a2;eip=0x0012bf; 	X(PUSH(ax));	// 2004 push    ax ;~ 01A2:12BF
cs=0x1a2;eip=0x0012c0; 	J(CALLF(font_draw_text,0));	// 2005 call    font_draw_text ;~ 01A2:12C0
cs=0x1a2;eip=0x0012c5; 	T(ADD(sp, 6));	// 2006 add     sp, 6 ;~ 01A2:12C5
cs=0x1a2;eip=0x0012c8; 	T(MOV(ax, 0x1E));	// 2007 mov     ax, 1Eh ;~ 01A2:12C8
cs=0x1a2;eip=0x0012cb; 	X(PUSH(ax));	// 2008 push    ax ;~ 01A2:12CB
cs=0x1a2;eip=0x0012cc; 	T(MOV(ax, 0x110));	// 2009 mov     ax, 110h ;~ 01A2:12CC
cs=0x1a2;eip=0x0012cf; 	X(PUSH(ax));	// 2010 push    ax ;~ 01A2:12CF
cs=0x1a2;eip=0x0012d0; 	T(MOV(al, *(raddr(ss,bp+var_7))));	// 2011 mov     al, [bp+var_7] ;~ 01A2:12D0
cs=0x1a2;eip=0x0012d3; 	T(CBW);	// 2012 cbw ;~ 01A2:12D3
cs=0x1a2;eip=0x0012d4; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2013 add     ax, offset resID_byte1 ;~ 01A2:12D4
cs=0x1a2;eip=0x0012d7; 	X(PUSH(ax));	// 2014 push    ax ;~ 01A2:12D7
cs=0x1a2;eip=0x0012d8; 	J(CALLF(font_draw_text,0));	// 2015 call    font_draw_text ;~ 01A2:12D8
cs=0x1a2;eip=0x0012dd; 	T(ADD(sp, 6));	// 2016 add     sp, 6 ;~ 01A2:12DD
cs=0x1a2;eip=0x0012e0; 	J(CALLF(font_set_fontdef,0));	// 2017 call    font_set_fontdef ;~ 01A2:12E0
loc_112e5:
	// 4443 
cs=0x1a2;eip=0x0012e5; 	T(MOV(ax, offset(dseg,atedit_0)));	// 2021 mov     ax, offset aTedit_0 ; "tedit" ;~ 01A2:12E5
cs=0x1a2;eip=0x0012e8; 	X(PUSH(ax));	// 2022 push    ax ;~ 01A2:12E8
cs=0x1a2;eip=0x0012e9; 	J(CALLF(file_load_resfile,0));	// 2023 call    file_load_resfile ;~ 01A2:12E9
cs=0x1a2;eip=0x0012ee; 	T(ADD(sp, 2));	// 2024 add     sp, 2 ;~ 01A2:12EE
cs=0x1a2;eip=0x0012f1; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 2025 mov     [bp+var_4], ax ;~ 01A2:12F1
cs=0x1a2;eip=0x0012f4; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 2026 mov     [bp+var_2], dx ;~ 01A2:12F4
cs=0x1a2;eip=0x0012f7; 	T(SUB(ax, ax));	// 2027 sub     ax, ax ;~ 01A2:12F7
cs=0x1a2;eip=0x0012f9; 	X(PUSH(ax));	// 2028 push    ax ;~ 01A2:12F9
cs=0x1a2;eip=0x0012fa; 	X(PUSH(word_407f8));	// 2029 push    word_407F8 ;~ 01A2:12FA
cs=0x1a2;eip=0x0012fe; 	X(PUSH(word_407f6));	// 2030 push    word_407F6 ;~ 01A2:12FE
cs=0x1a2;eip=0x001302; 	X(PUSH(word_407f4));	// 2031 push    word_407F4 ;~ 01A2:1302
cs=0x1a2;eip=0x001306; 	T(MOV(ax, 0x18));	// 2032 mov     ax, 18h ;~ 01A2:1306
cs=0x1a2;eip=0x001309; 	X(PUSH(ax));	// 2033 push    ax ;~ 01A2:1309
cs=0x1a2;eip=0x00130a; 	T(MOV(ax, 0x5E));	// 2034 mov     ax, 5Eh ; '^' ;~ 01A2:130A
cs=0x1a2;eip=0x00130d; 	X(PUSH(ax));	// 2035 push    ax ;~ 01A2:130D
cs=0x1a2;eip=0x00130e; 	T(MOV(ax, 0x0AC));	// 2036 mov     ax, 0ACh ; '¬' ;~ 01A2:130E
cs=0x1a2;eip=0x001311; 	X(PUSH(ax));	// 2037 push    ax ;~ 01A2:1311
cs=0x1a2;eip=0x001312; 	T(MOV(ax, 0x11));	// 2038 mov     ax, 11h ;~ 01A2:1312
cs=0x1a2;eip=0x001315; 	X(PUSH(ax));	// 2039 push    ax ;~ 01A2:1315
cs=0x1a2;eip=0x001316; 	T(MOV(ax, offset(dseg,abmt)));	// 2040 mov     ax, offset aBmt ; "bmt" ;~ 01A2:1316
cs=0x1a2;eip=0x001319; 	X(PUSH(ax));	// 2041 push    ax ;~ 01A2:1319
cs=0x1a2;eip=0x00131a; 	X(PUSH(dx));	// 2042 push    dx ;~ 01A2:131A
cs=0x1a2;eip=0x00131b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 2043 push    [bp+var_4] ;~ 01A2:131B
cs=0x1a2;eip=0x00131e; 	J(CALLF(locate_text_res,0));	// 2044 call    locate_text_res ;~ 01A2:131E
cs=0x1a2;eip=0x001323; 	T(ADD(sp, 6));	// 2045 add     sp, 6 ;~ 01A2:1323
cs=0x1a2;eip=0x001326; 	X(PUSH(dx));	// 2046 push    dx ;~ 01A2:1326
cs=0x1a2;eip=0x001327; 	X(PUSH(ax));	// 2047 push    ax ;~ 01A2:1327
cs=0x1a2;eip=0x001328; 	J(CALLF(draw_button,0));	// 2048 call    draw_button ;~ 01A2:1328
cs=0x1a2;eip=0x00132d; 	T(ADD(sp, 0x14));	// 2049 add     sp, 14h ;~ 01A2:132D
cs=0x1a2;eip=0x001330; 	T(SUB(ax, ax));	// 2050 sub     ax, ax ;~ 01A2:1330
cs=0x1a2;eip=0x001332; 	X(PUSH(ax));	// 2051 push    ax ;~ 01A2:1332
cs=0x1a2;eip=0x001333; 	X(PUSH(word_407f8));	// 2052 push    word_407F8 ;~ 01A2:1333
cs=0x1a2;eip=0x001337; 	X(PUSH(word_407f6));	// 2053 push    word_407F6 ;~ 01A2:1337
cs=0x1a2;eip=0x00133b; 	X(PUSH(word_407f4));	// 2054 push    word_407F4 ;~ 01A2:133B
cs=0x1a2;eip=0x00133f; 	T(MOV(ax, 0x18));	// 2055 mov     ax, 18h ;~ 01A2:133F
cs=0x1a2;eip=0x001342; 	X(PUSH(ax));	// 2056 push    ax ;~ 01A2:1342
cs=0x1a2;eip=0x001343; 	T(MOV(ax, 0x5E));	// 2057 mov     ax, 5Eh ; '^' ;~ 01A2:1343
cs=0x1a2;eip=0x001346; 	X(PUSH(ax));	// 2058 push    ax ;~ 01A2:1346
cs=0x1a2;eip=0x001347; 	T(MOV(ax, 0x0AC));	// 2059 mov     ax, 0ACh ; '¬' ;~ 01A2:1347
cs=0x1a2;eip=0x00134a; 	X(PUSH(ax));	// 2060 push    ax ;~ 01A2:134A
cs=0x1a2;eip=0x00134b; 	T(MOV(ax, 0x71));	// 2061 mov     ax, 71h ; 'q' ;~ 01A2:134B
cs=0x1a2;eip=0x00134e; 	X(PUSH(ax));	// 2062 push    ax ;~ 01A2:134E
cs=0x1a2;eip=0x00134f; 	T(MOV(ax, offset(dseg,abet)));	// 2063 mov     ax, offset aBet ; "bet" ;~ 01A2:134F
cs=0x1a2;eip=0x001352; 	X(PUSH(ax));	// 2064 push    ax ;~ 01A2:1352
cs=0x1a2;eip=0x001353; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 2065 push    [bp+var_2] ;~ 01A2:1353
cs=0x1a2;eip=0x001356; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 2066 push    [bp+var_4] ;~ 01A2:1356
cs=0x1a2;eip=0x001359; 	J(CALLF(locate_text_res,0));	// 2067 call    locate_text_res ;~ 01A2:1359
cs=0x1a2;eip=0x00135e; 	T(ADD(sp, 6));	// 2068 add     sp, 6 ;~ 01A2:135E
cs=0x1a2;eip=0x001361; 	X(PUSH(dx));	// 2069 push    dx ;~ 01A2:1361
cs=0x1a2;eip=0x001362; 	X(PUSH(ax));	// 2070 push    ax ;~ 01A2:1362
cs=0x1a2;eip=0x001363; 	J(CALLF(draw_button,0));	// 2071 call    draw_button ;~ 01A2:1363
cs=0x1a2;eip=0x001368; 	T(ADD(sp, 0x14));	// 2072 add     sp, 14h ;~ 01A2:1368
cs=0x1a2;eip=0x00136b; 	T(SUB(ax, ax));	// 2073 sub     ax, ax ;~ 01A2:136B
cs=0x1a2;eip=0x00136d; 	X(PUSH(ax));	// 2074 push    ax ;~ 01A2:136D
cs=0x1a2;eip=0x00136e; 	X(PUSH(word_407f8));	// 2075 push    word_407F8 ;~ 01A2:136E
cs=0x1a2;eip=0x001372; 	X(PUSH(word_407f6));	// 2076 push    word_407F6 ;~ 01A2:1372
cs=0x1a2;eip=0x001376; 	X(PUSH(word_407f4));	// 2077 push    word_407F4 ;~ 01A2:1376
cs=0x1a2;eip=0x00137a; 	T(MOV(ax, 0x18));	// 2078 mov     ax, 18h ;~ 01A2:137A
cs=0x1a2;eip=0x00137d; 	X(PUSH(ax));	// 2079 push    ax ;~ 01A2:137D
cs=0x1a2;eip=0x00137e; 	T(MOV(ax, 0x5E));	// 2080 mov     ax, 5Eh ; '^' ;~ 01A2:137E
cs=0x1a2;eip=0x001381; 	X(PUSH(ax));	// 2081 push    ax ;~ 01A2:1381
cs=0x1a2;eip=0x001382; 	T(MOV(ax, 0x0AC));	// 2082 mov     ax, 0ACh ; '¬' ;~ 01A2:1382
cs=0x1a2;eip=0x001385; 	X(PUSH(ax));	// 2083 push    ax ;~ 01A2:1385
cs=0x1a2;eip=0x001386; 	T(MOV(ax, 0x0D1));	// 2084 mov     ax, 0D1h ; 'Ñ' ;~ 01A2:1386
cs=0x1a2;eip=0x001389; 	X(PUSH(ax));	// 2085 push    ax ;~ 01A2:1389
cs=0x1a2;eip=0x00138a; 	T(MOV(ax, offset(dseg,abmm)));	// 2086 mov     ax, offset aBmm ; "bmm" ;~ 01A2:138A
cs=0x1a2;eip=0x00138d; 	X(PUSH(ax));	// 2087 push    ax ;~ 01A2:138D
cs=0x1a2;eip=0x00138e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 2088 push    [bp+var_2] ;~ 01A2:138E
cs=0x1a2;eip=0x001391; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 2089 push    [bp+var_4] ;~ 01A2:1391
cs=0x1a2;eip=0x001394; 	J(CALLF(locate_text_res,0));	// 2090 call    locate_text_res ;~ 01A2:1394
cs=0x1a2;eip=0x001399; 	T(ADD(sp, 6));	// 2091 add     sp, 6 ;~ 01A2:1399
cs=0x1a2;eip=0x00139c; 	X(PUSH(dx));	// 2092 push    dx ;~ 01A2:139C
cs=0x1a2;eip=0x00139d; 	X(PUSH(ax));	// 2093 push    ax ;~ 01A2:139D
cs=0x1a2;eip=0x00139e; 	J(CALLF(draw_button,0));	// 2094 call    draw_button ;~ 01A2:139E
cs=0x1a2;eip=0x0013a3; 	T(ADD(sp, 0x14));	// 2095 add     sp, 14h ;~ 01A2:13A3
cs=0x1a2;eip=0x0013a6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 2096 push    [bp+var_2] ;~ 01A2:13A6
cs=0x1a2;eip=0x0013a9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 2097 push    [bp+var_4] ;~ 01A2:13A9
cs=0x1a2;eip=0x0013ac; 	J(CALLF(unload_resource,0));	// 2098 call    unload_resource ;~ 01A2:13AC
cs=0x1a2;eip=0x0013b1; 	T(ADD(sp, 4));	// 2099 add     sp, 4 ;~ 01A2:13B1
loc_113b4:
	// 4444 
cs=0x1a2;eip=0x0013b4; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 2103 mov     al, [bp+var_12] ;~ 01A2:13B4
cs=0x1a2;eip=0x0013b7; 	T(CMP(*(raddr(ss,bp+var_16)), al));	// 2104 cmp     [bp+var_16], al ;~ 01A2:13B7
cs=0x1a2;eip=0x0013ba; 	J(JZ(loc_113e5));	// 2105 jz      short loc_113E5 ;~ 01A2:13BA
cs=0x1a2;eip=0x0013bc; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2106 mov     al, [bp+var_16] ;~ 01A2:13BC
cs=0x1a2;eip=0x0013bf; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 2107 mov     [bp+var_12], al ;~ 01A2:13BF
cs=0x1a2;eip=0x0013c2; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 2108 mov     al, [bp+var_6] ;~ 01A2:13C2
cs=0x1a2;eip=0x0013c5; 	T(CBW);	// 2109 cbw ;~ 01A2:13C5
cs=0x1a2;eip=0x0013c6; 	X(PUSH(ax));	// 2110 push    ax ;~ 01A2:13C6
cs=0x1a2;eip=0x0013c7; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 2111 push    word ptr wndsprite+2 ;~ 01A2:13C7
cs=0x1a2;eip=0x0013cb; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 2112 push    word ptr wndsprite ;~ 01A2:13CB
cs=0x1a2;eip=0x0013cf; 	J(CALLF(sprite_blit_to_video,0));	// 2113 call    sprite_blit_to_video ;~ 01A2:13CF
cs=0x1a2;eip=0x0013d4; 	T(ADD(sp, 6));	// 2114 add     sp, 6 ;~ 01A2:13D4
cs=0x1a2;eip=0x0013d7; 	X(MOV(*(raddr(ss,bp+var_6)), 0x0FE));	// 2115 mov     [bp+var_6], 0FEh ; 'ş' ;~ 01A2:13D7
cs=0x1a2;eip=0x0013db; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 2116 call    sprite_copy_2_to_1_2 ;~ 01A2:13DB
cs=0x1a2;eip=0x0013e0; 	J(CALLF(sub_29772,0));	// 2117 call    sub_29772 ;~ 01A2:13E0
loc_113e5:
	// 4445 
cs=0x1a2;eip=0x0013e5; 	X(PUSH(word_407d0));	// 2120 push    word_407D0 ;~ 01A2:13E5
cs=0x1a2;eip=0x0013e9; 	X(PUSH(word_407ce));	// 2121 push    word_407CE ;~ 01A2:13E9
cs=0x1a2;eip=0x0013ed; 	T(MOV(ax, offset(dseg,trackmenu_buttons_y2)));	// 2122 mov     ax, offset trackmenu_buttons_y2 ;~ 01A2:13ED
cs=0x1a2;eip=0x0013f0; 	X(PUSH(ax));	// 2123 push    ax ;~ 01A2:13F0
cs=0x1a2;eip=0x0013f1; 	T(MOV(ax, offset(dseg,trackmenu_buttons_y1)));	// 2124 mov     ax, offset trackmenu_buttons_y1 ;~ 01A2:13F1
cs=0x1a2;eip=0x0013f4; 	X(PUSH(ax));	// 2125 push    ax ;~ 01A2:13F4
cs=0x1a2;eip=0x0013f5; 	T(MOV(ax, offset(dseg,trackmenu_buttons_x2)));	// 2126 mov     ax, offset trackmenu_buttons_x2 ;~ 01A2:13F5
cs=0x1a2;eip=0x0013f8; 	X(PUSH(ax));	// 2127 push    ax ;~ 01A2:13F8
cs=0x1a2;eip=0x0013f9; 	T(MOV(ax, offset(dseg,trackmenu_buttons_x1)));	// 2128 mov     ax, offset trackmenu_buttons_x1 ;~ 01A2:13F9
cs=0x1a2;eip=0x0013fc; 	X(PUSH(ax));	// 2129 push    ax ;~ 01A2:13FC
cs=0x1a2;eip=0x0013fd; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2130 mov     al, [bp+var_16] ;~ 01A2:13FD
cs=0x1a2;eip=0x001400; 	T(CBW);	// 2131 cbw ;~ 01A2:1400
cs=0x1a2;eip=0x001401; 	X(PUSH(ax));	// 2132 push    ax ;~ 01A2:1401
cs=0x1a2;eip=0x001402; 	J(CALLF(mouse_timer_sprite_unk,0));	// 2133 call    mouse_timer_sprite_unk ;~ 01A2:1402
cs=0x1a2;eip=0x001407; 	T(ADD(sp, 0x0E));	// 2134 add     sp, 0Eh ;~ 01A2:1407
cs=0x1a2;eip=0x00140a; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 2135 mov     [bp+var_C], ax ;~ 01A2:140A
cs=0x1a2;eip=0x00140d; 	X(ADD(idle_counter, ax));	// 2136 add     idle_counter, ax ;~ 01A2:140D
cs=0x1a2;eip=0x001411; 	T(CMP(idle_counter, 0x1770));	// 2137 cmp     idle_counter, 1770h ;~ 01A2:1411
cs=0x1a2;eip=0x001417; 	J(JLE(loc_11423));	// 2138 jle     short loc_11423 ;~ 01A2:1417
cs=0x1a2;eip=0x001419; 	X(MOV(idle_counter, 0));	// 2139 mov     idle_counter, 0 ;~ 01A2:1419
cs=0x1a2;eip=0x00141f; 	X(INC(idle_expired));	// 2140 inc     idle_expired ;~ 01A2:141F
loc_11423:
	// 4446 
cs=0x1a2;eip=0x001423; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 2143 push    [bp+var_C] ;~ 01A2:1423
cs=0x1a2;eip=0x001426; 	J(CALLF(input_checking,0));	// 2144 call    input_checking ;~ 01A2:1426
cs=0x1a2;eip=0x00142b; 	T(ADD(sp, 2));	// 2145 add     sp, 2 ;~ 01A2:142B
cs=0x1a2;eip=0x00142e; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 2146 mov     [bp+var_E], ax ;~ 01A2:142E
cs=0x1a2;eip=0x001431; 	T(MOV(ax, offset(dseg,trackmenu_buttons_y2)));	// 2147 mov     ax, offset trackmenu_buttons_y2 ;~ 01A2:1431
cs=0x1a2;eip=0x001434; 	X(PUSH(ax));	// 2148 push    ax ;~ 01A2:1434
cs=0x1a2;eip=0x001435; 	T(MOV(ax, offset(dseg,trackmenu_buttons_y1)));	// 2149 mov     ax, offset trackmenu_buttons_y1 ;~ 01A2:1435
cs=0x1a2;eip=0x001438; 	X(PUSH(ax));	// 2150 push    ax ;~ 01A2:1438
cs=0x1a2;eip=0x001439; 	T(MOV(ax, offset(dseg,trackmenu_buttons_x2)));	// 2151 mov     ax, offset trackmenu_buttons_x2 ;~ 01A2:1439
cs=0x1a2;eip=0x00143c; 	X(PUSH(ax));	// 2152 push    ax ;~ 01A2:143C
cs=0x1a2;eip=0x00143d; 	T(MOV(ax, offset(dseg,trackmenu_buttons_x1)));	// 2153 mov     ax, offset trackmenu_buttons_x1 ;~ 01A2:143D
cs=0x1a2;eip=0x001440; 	X(PUSH(ax));	// 2154 push    ax ;~ 01A2:1440
cs=0x1a2;eip=0x001441; 	T(MOV(ax, 3));	// 2155 mov     ax, 3 ;~ 01A2:1441
cs=0x1a2;eip=0x001444; 	X(PUSH(ax));	// 2156 push    ax ;~ 01A2:1444
cs=0x1a2;eip=0x001445; 	J(CALLF(mouse_multi_hittest,0));	// 2157 call    mouse_multi_hittest ;~ 01A2:1445
cs=0x1a2;eip=0x00144a; 	T(ADD(sp, 0x0A));	// 2158 add     sp, 0Ah ;~ 01A2:144A
cs=0x1a2;eip=0x00144d; 	X(MOV(*(raddr(ss,bp+var_14)), al));	// 2159 mov     [bp+var_14], al ;~ 01A2:144D
cs=0x1a2;eip=0x001450; 	T(CMP(al, 0x0FF));	// 2160 cmp     al, 0FFh ;~ 01A2:1450
cs=0x1a2;eip=0x001452; 	J(JZ(loc_11457));	// 2161 jz      short loc_11457 ;~ 01A2:1452
cs=0x1a2;eip=0x001454; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 2162 mov     [bp+var_16], al ;~ 01A2:1454
loc_11457:
	// 4447 
cs=0x1a2;eip=0x001457; 	T(CMP(idle_expired, 0));	// 2165 cmp     idle_expired, 0 ;~ 01A2:1457
cs=0x1a2;eip=0x00145c; 	J(JZ(loc_11467));	// 2166 jz      short loc_11467 ;~ 01A2:145C
cs=0x1a2;eip=0x00145e; 	X(MOV(*(raddr(ss,bp+var_16)), 2));	// 2167 mov     [bp+var_16], 2 ;~ 01A2:145E
cs=0x1a2;eip=0x001462; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0x0D));	// 2168 mov     [bp+var_E], 0Dh ;~ 01A2:1462
loc_11467:
	// 4448 
cs=0x1a2;eip=0x001467; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0));	// 2171 cmp     [bp+var_E], 0 ;~ 01A2:1467
cs=0x1a2;eip=0x00146b; 	J(JNZ(loc_11470));	// 2172 jnz     short loc_11470 ;~ 01A2:146B
cs=0x1a2;eip=0x00146d; 	J(JMP(loc_113b4));	// 2173 jmp     loc_113B4 ;~ 01A2:146D
loc_11470:
	// 4449 
cs=0x1a2;eip=0x001470; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 2177 mov     ax, [bp+var_E] ;~ 01A2:1470
cs=0x1a2;eip=0x001473; 	T(CMP(ax, 0x0D));	// 2178 cmp     ax, 0Dh ;~ 01A2:1473
cs=0x1a2;eip=0x001476; 	J(JZ(loc_114bc));	// 2179 jz      short loc_114BC ;~ 01A2:1476
cs=0x1a2;eip=0x001478; 	T(CMP(ax, 0x1B));	// 2180 cmp     ax, 1Bh ;~ 01A2:1478
cs=0x1a2;eip=0x00147b; 	J(JZ(loc_114b8));	// 2181 jz      short loc_114B8 ;~ 01A2:147B
cs=0x1a2;eip=0x00147d; 	T(CMP(ax, 0x20));	// 2182 cmp     ax, 20h ; ' ' ;~ 01A2:147D
cs=0x1a2;eip=0x001480; 	J(JZ(loc_114bc));	// 2183 jz      short loc_114BC ;~ 01A2:1480
cs=0x1a2;eip=0x001482; 	T(CMP(ax, 0x4B00));	// 2184 cmp     ax, 4B00h ;~ 01A2:1482
cs=0x1a2;eip=0x001485; 	J(JZ(loc_11490));	// 2185 jz      short loc_11490 ;~ 01A2:1485
cs=0x1a2;eip=0x001487; 	T(CMP(ax, 0x4D00));	// 2186 cmp     ax, 4D00h ;~ 01A2:1487
cs=0x1a2;eip=0x00148a; 	J(JZ(loc_114a4));	// 2187 jz      short loc_114A4 ;~ 01A2:148A
cs=0x1a2;eip=0x00148c; 	J(JMP(loc_113b4));	// 2188 jmp     loc_113B4 ;~ 01A2:148C
loc_11490:
	// 4450 
cs=0x1a2;eip=0x001490; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 2193 cmp     [bp+var_16], 0 ;~ 01A2:1490
cs=0x1a2;eip=0x001494; 	J(JZ(loc_1149c));	// 2194 jz      short loc_1149C ;~ 01A2:1494
cs=0x1a2;eip=0x001496; 	X(DEC(*(raddr(ss,bp+var_16))));	// 2195 dec     [bp+var_16] ;~ 01A2:1496
cs=0x1a2;eip=0x001499; 	J(JMP(loc_113b4));	// 2196 jmp     loc_113B4 ;~ 01A2:1499
loc_1149c:
	// 4451 
cs=0x1a2;eip=0x00149c; 	X(MOV(*(raddr(ss,bp+var_16)), 2));	// 2200 mov     [bp+var_16], 2 ;~ 01A2:149C
cs=0x1a2;eip=0x0014a0; 	J(JMP(loc_113b4));	// 2201 jmp     loc_113B4 ;~ 01A2:14A0
loc_114a4:
	// 4452 
cs=0x1a2;eip=0x0014a4; 	T(CMP(*(raddr(ss,bp+var_16)), 2));	// 2206 cmp     [bp+var_16], 2 ;~ 01A2:14A4
cs=0x1a2;eip=0x0014a8; 	J(JGE(loc_114b0));	// 2207 jge     short loc_114B0 ;~ 01A2:14A8
cs=0x1a2;eip=0x0014aa; 	X(INC(*(raddr(ss,bp+var_16))));	// 2208 inc     [bp+var_16] ;~ 01A2:14AA
cs=0x1a2;eip=0x0014ad; 	J(JMP(loc_113b4));	// 2209 jmp     loc_113B4 ;~ 01A2:14AD
loc_114b0:
	// 4453 
cs=0x1a2;eip=0x0014b0; 	X(MOV(*(raddr(ss,bp+var_16)), 0));	// 2213 mov     [bp+var_16], 0 ;~ 01A2:14B0
cs=0x1a2;eip=0x0014b4; 	J(JMP(loc_113b4));	// 2214 jmp     loc_113B4 ;~ 01A2:14B4
loc_114b8:
	// 4454 
cs=0x1a2;eip=0x0014b8; 	X(MOV(*(raddr(ss,bp+var_16)), 0x0FF));	// 2219 mov     [bp+var_16], 0FFh ;~ 01A2:14B8
loc_114bc:
	// 4455 
cs=0x1a2;eip=0x0014bc; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2223 mov     al, [bp+var_16] ;~ 01A2:14BC
cs=0x1a2;eip=0x0014bf; 	T(CBW);	// 2224 cbw ;~ 01A2:14BF
cs=0x1a2;eip=0x0014c0; 	T(OR(ax, ax));	// 2225 or      ax, ax ;~ 01A2:14C0
cs=0x1a2;eip=0x0014c2; 	J(JZ(loc_114e2));	// 2226 jz      short loc_114E2 ;~ 01A2:14C2
cs=0x1a2;eip=0x0014c4; 	T(CMP(ax, 1));	// 2227 cmp     ax, 1 ;~ 01A2:14C4
cs=0x1a2;eip=0x0014c7; 	J(JNZ(loc_114cc));	// 2228 jnz     short loc_114CC ;~ 01A2:14C7
cs=0x1a2;eip=0x0014c9; 	J(JMP(loc_1155a));	// 2229 jmp     loc_1155A ;~ 01A2:14C9
loc_114cc:
	// 4456 
cs=0x1a2;eip=0x0014cc; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 2233 push    word ptr wndsprite+2 ;~ 01A2:14CC
cs=0x1a2;eip=0x0014d0; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 2234 push    word ptr wndsprite ;~ 01A2:14D0
cs=0x1a2;eip=0x0014d4; 	J(CALLF(sprite_free_wnd,0));	// 2235 call    sprite_free_wnd ;~ 01A2:14D4
cs=0x1a2;eip=0x0014d9; 	T(ADD(sp, 4));	// 2236 add     sp, 4 ;~ 01A2:14D9
cs=0x1a2;eip=0x0014dc; 	X(POP(si));	// 2237 pop     si ;~ 01A2:14DC
cs=0x1a2;eip=0x0014dd; 	X(POP(di));	// 2238 pop     di ;~ 01A2:14DD
cs=0x1a2;eip=0x0014de; 	T(MOV(sp, bp));	// 2239 mov     sp, bp ;~ 01A2:14DE
cs=0x1a2;eip=0x0014e0; 	X(POP(bp));	// 2240 pop     bp ;~ 01A2:14E0
cs=0x1a2;eip=0x0014e1; 	J(RETF(0));	// 2241 retf ;~ 01A2:14E1
loc_114e2:
	// 4457 
cs=0x1a2;eip=0x0014e2; 	T(MOV(ax, offset(dseg,atrk)));	// 2245 mov     ax, offset aTrk ; "trk" ;~ 01A2:14E2
cs=0x1a2;eip=0x0014e5; 	X(PUSH(ax));	// 2246 push    ax ;~ 01A2:14E5
cs=0x1a2;eip=0x0014e6; 	X(PUSH(word_44cee));	// 2247 push    word_44CEE ;~ 01A2:14E6
cs=0x1a2;eip=0x0014ea; 	X(PUSH(mainresptr));	// 2248 push    mainresptr ;~ 01A2:14EA
cs=0x1a2;eip=0x0014ee; 	J(CALLF(locate_text_res,0));	// 2249 call    locate_text_res ;~ 01A2:14EE
cs=0x1a2;eip=0x0014f3; 	T(ADD(sp, 6));	// 2250 add     sp, 6 ;~ 01A2:14F3
cs=0x1a2;eip=0x0014f6; 	X(PUSH(dx));	// 2251 push    dx              ; int ;~ 01A2:14F6
cs=0x1a2;eip=0x0014f7; 	X(PUSH(ax));	// 2252 push    ax              ; int ;~ 01A2:14F7
cs=0x1a2;eip=0x0014f8; 	T(MOV(ax, offset(dseg,a_trk_0)));	// 2253 mov     ax, offset a_trk_0 ; ".trk" ;~ 01A2:14F8
cs=0x1a2;eip=0x0014fb; 	X(PUSH(ax));	// 2254 push    ax              ; int ;~ 01A2:14FB
cs=0x1a2;eip=0x0014fc; 	T(MOV(ax, offset(dseg,byte_449b1)));	// 2255 mov     ax, offset byte_449B1 ;~ 01A2:14FC
cs=0x1a2;eip=0x0014ff; 	X(PUSH(ax));	// 2256 push    ax ;~ 01A2:14FF
cs=0x1a2;eip=0x001500; 	T(MOV(ax, 0x9C));	// 2257 mov     ax, 9Ch ; 'œ' ;~ 01A2:1500
cs=0x1a2;eip=0x001503; 	X(PUSH(ax));	// 2258 push    ax              ; char * ;~ 01A2:1503
cs=0x1a2;eip=0x001504; 	J(CALLF(do_fileselect_dialog,0));	// 2259 call    do_fileselect_dialog ;~ 01A2:1504
cs=0x1a2;eip=0x001509; 	T(ADD(sp, 0x0A));	// 2260 add     sp, 0Ah ;~ 01A2:1509
cs=0x1a2;eip=0x00150c; 	T(CBW);	// 2261 cbw ;~ 01A2:150C
cs=0x1a2;eip=0x00150d; 	T(MOV(si, ax));	// 2262 mov     si, ax ;~ 01A2:150D
cs=0x1a2;eip=0x00150f; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 2263 mov     ax, offset g_path_buf ;~ 01A2:150F
cs=0x1a2;eip=0x001512; 	X(PUSH(ax));	// 2264 push    ax              ; char * ;~ 01A2:1512
cs=0x1a2;eip=0x001513; 	T(MOV(ax, offset(dseg,a_trk_1)));	// 2265 mov     ax, offset a_trk_1 ; ".trk" ;~ 01A2:1513
cs=0x1a2;eip=0x001516; 	X(PUSH(ax));	// 2266 push    ax              ; int ;~ 01A2:1516
cs=0x1a2;eip=0x001517; 	T(MOV(ax, offset(dseg,byte_449b1)));	// 2267 mov     ax, offset byte_449B1 ;~ 01A2:1517
cs=0x1a2;eip=0x00151a; 	X(PUSH(ax));	// 2268 push    ax ;~ 01A2:151A
cs=0x1a2;eip=0x00151b; 	T(MOV(ax, 0x9C));	// 2269 mov     ax, 9Ch ; 'œ' ;~ 01A2:151B
cs=0x1a2;eip=0x00151e; 	X(PUSH(ax));	// 2270 push    ax              ; char * ;~ 01A2:151E
cs=0x1a2;eip=0x00151f; 	J(CALLF(file_build_path,0));	// 2271 call    file_build_path ;~ 01A2:151F
cs=0x1a2;eip=0x001524; 	T(ADD(sp, 8));	// 2272 add     sp, 8 ;~ 01A2:1524
cs=0x1a2;eip=0x001527; 	T(OR(si, si));	// 2273 or      si, si ;~ 01A2:1527
cs=0x1a2;eip=0x001529; 	J(JZ(loc_11552));	// 2274 jz      short loc_11552 ;~ 01A2:1529
cs=0x1a2;eip=0x00152b; 	X(PUSH(*(dw*)(((db*)&td14_elem_map_main)+2)));	// 2275 push    word ptr td14_elem_map_main+2 ;~ 01A2:152B
cs=0x1a2;eip=0x00152f; 	X(PUSH(*(dw*)(((db*)&td14_elem_map_main))));	// 2276 push    word ptr td14_elem_map_main ;~ 01A2:152F
cs=0x1a2;eip=0x001533; 	T(MOV(ax, 0x95F8));	// 2277 mov     ax, 95F8h ;~ 01A2:1533
cs=0x1a2;eip=0x001536; 	X(PUSH(ax));	// 2278 push    ax ;~ 01A2:1536
cs=0x1a2;eip=0x001537; 	J(CALLF(file_read_fatal,0));	// 2279 call    file_read_fatal ;~ 01A2:1537
cs=0x1a2;eip=0x00153c; 	T(ADD(sp, 6));	// 2280 add     sp, 6 ;~ 01A2:153C
cs=0x1a2;eip=0x00153f; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 2281 push    word ptr wndsprite+2 ;~ 01A2:153F
cs=0x1a2;eip=0x001543; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 2282 push    word ptr wndsprite ;~ 01A2:1543
cs=0x1a2;eip=0x001547; 	J(CALLF(sprite_free_wnd,0));	// 2283 call    sprite_free_wnd ;~ 01A2:1547
cs=0x1a2;eip=0x00154c; 	T(ADD(sp, 4));	// 2284 add     sp, 4 ;~ 01A2:154C
cs=0x1a2;eip=0x00154f; 	J(JMP(loc_110ed));	// 2285 jmp     loc_110ED ;~ 01A2:154F
loc_11552:
	// 4458 
cs=0x1a2;eip=0x001552; 	X(MOV(*(raddr(ss,bp+var_12)), 0x0FF));	// 2289 mov     [bp+var_12], 0FFh ;~ 01A2:1552
cs=0x1a2;eip=0x001556; 	J(JMP(loc_113b4));	// 2290 jmp     loc_113B4 ;~ 01A2:1556
loc_1155a:
	// 4459 
cs=0x1a2;eip=0x00155a; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 2295 push    word ptr wndsprite+2 ;~ 01A2:155A
cs=0x1a2;eip=0x00155e; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 2296 push    word ptr wndsprite ;~ 01A2:155E
cs=0x1a2;eip=0x001562; 	J(CALLF(sprite_free_wnd,0));	// 2297 call    sprite_free_wnd ;~ 01A2:1562
cs=0x1a2;eip=0x001567; 	T(ADD(sp, 4));	// 2298 add     sp, 4 ;~ 01A2:1567
loc_1156a:
	// 4460 
cs=0x1a2;eip=0x00156a; 	J(CALLF(check_input,0));	// 2301 call    check_input ;~ 01A2:156A
cs=0x1a2;eip=0x00156f; 	J(CALLF(show_waiting,0));	// 2302 call    show_waiting ;~ 01A2:156F
cs=0x1a2;eip=0x001574; 	X(MOV(waitflag, 0x82));	// 2303 mov     waitflag, 82h ; '‚' ;~ 01A2:1574
cs=0x1a2;eip=0x00157a; 	J(CALLF(track_setup,0));	// 2304 call    track_setup ;~ 01A2:157A
cs=0x1a2;eip=0x00157f; 	J(CALLF(load_tracks_menu_shapes,0));	// 2305 call    load_tracks_menu_shapes ;~ 01A2:157F
cs=0x1a2;eip=0x001584; 	J(JMP(loc_110ed));	// 2306 jmp     loc_110ED ;~ 01A2:1584

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
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
        case m2c::krun_tracks_menu: 	goto run_tracks_menu;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool highscore_write_a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    highscore_write_a:
    _begin:
#undef var_3a
#define var_3a -0x3A
	// 2319 var_3A          = word ptr -3Ah ;~ 01A2:1588
#undef var_38
#define var_38 -0x38
	// 2320 var_38          = byte ptr -38h ;~ 01A2:1588
#undef var_27
#define var_27 -0x27
	// 2321 var_27          = byte ptr -27h ;~ 01A2:1588
#undef var_f
#define var_f -0x0F
	// 2322 var_F           = byte ptr -0Fh ;~ 01A2:1588
#undef var_e
#define var_e -0x0E
	// 2323 var_E           = byte ptr -0Eh ;~ 01A2:1588
#undef var_6
#define var_6 -6
	// 2324 var_6           = word ptr -6 ;~ 01A2:1588
#undef var_4
#define var_4 -4
	// 2325 var_4           = word ptr -4 ;~ 01A2:1588
#undef var_2
#define var_2 -2
	// 2326 var_2           = word ptr -2 ;~ 01A2:1588
#undef arg_0
#define arg_0 6
	// 2327 arg_0           = word ptr  6 ;~ 01A2:1588
cs=0x1a2;eip=0x001588; 	X(PUSH(bp));	// 2329 push    bp ;~ 01A2:1588
cs=0x1a2;eip=0x001589; 	T(MOV(bp, sp));	// 2330 mov     bp, sp ;~ 01A2:1589
cs=0x1a2;eip=0x00158b; 	T(SUB(sp, 0x3A));	// 2331 sub     sp, 3Ah ;~ 01A2:158B
cs=0x1a2;eip=0x00158e; 	X(PUSH(di));	// 2332 push    di ;~ 01A2:158E
cs=0x1a2;eip=0x00158f; 	X(PUSH(si));	// 2333 push    si              ; char * ;~ 01A2:158F
cs=0x1a2;eip=0x001590; 	X(MOV(byte_449ce, 0x0FF));	// 2334 mov     byte_449CE, 0FFh ;~ 01A2:1590
cs=0x1a2;eip=0x001595; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), 0));	// 2335 mov     [bp+var_3A], 0 ;~ 01A2:1595
loc_1159a:
	// 4461 
cs=0x1a2;eip=0x00159a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_3a))));	// 2338 mov     bx, [bp+var_3A] ;~ 01A2:159A
cs=0x1a2;eip=0x00159d; 	T(SHL(bx, 1));	// 2339 shl     bx, 1 ;~ 01A2:159D
cs=0x1a2;eip=0x00159f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3a))));	// 2340 mov     ax, [bp+var_3A] ;~ 01A2:159F
cs=0x1a2;eip=0x0015a2; 	X(MOV(*(dw*)(((db*)&word_46170)+bx), ax));	// 2341 mov     word_46170[bx], ax ;~ 01A2:15A2
cs=0x1a2;eip=0x0015a6; 	X(INC(*(dw*)(raddr(ss,bp+var_3a))));	// 2342 inc     [bp+var_3A] ;~ 01A2:15A6
cs=0x1a2;eip=0x0015a9; 	T(CMP(*(dw*)(raddr(ss,bp+var_3a)), 7));	// 2343 cmp     [bp+var_3A], 7 ;~ 01A2:15A9
cs=0x1a2;eip=0x0015ad; 	J(JL(loc_1159a));	// 2344 jl      short loc_1159A ;~ 01A2:15AD
cs=0x1a2;eip=0x0015af; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 2345 mov     ax, offset g_path_buf ;~ 01A2:15AF
cs=0x1a2;eip=0x0015b2; 	X(PUSH(ax));	// 2346 push    ax              ; char * ;~ 01A2:15B2
cs=0x1a2;eip=0x0015b3; 	T(MOV(ax, offset(dseg,a_hig_0)));	// 2347 mov     ax, offset a_hig_0 ; ".hig" ;~ 01A2:15B3
cs=0x1a2;eip=0x0015b6; 	X(PUSH(ax));	// 2348 push    ax              ; int ;~ 01A2:15B6
cs=0x1a2;eip=0x0015b7; 	T(MOV(ax, offset(dseg,byte_449b1)));	// 2349 mov     ax, offset byte_449B1 ;~ 01A2:15B7
cs=0x1a2;eip=0x0015ba; 	X(PUSH(ax));	// 2350 push    ax ;~ 01A2:15BA
cs=0x1a2;eip=0x0015bb; 	T(MOV(ax, 0x9C));	// 2351 mov     ax, 9Ch ; 'œ' ;~ 01A2:15BB
cs=0x1a2;eip=0x0015be; 	X(PUSH(ax));	// 2352 push    ax              ; char * ;~ 01A2:15BE
cs=0x1a2;eip=0x0015bf; 	J(CALLF(file_build_path,0));	// 2353 call    file_build_path ;~ 01A2:15BF
cs=0x1a2;eip=0x0015c4; 	T(ADD(sp, 8));	// 2354 add     sp, 8 ;~ 01A2:15C4
cs=0x1a2;eip=0x0015c7; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 2355 cmp     [bp+arg_0], 0 ;~ 01A2:15C7
cs=0x1a2;eip=0x0015cb; 	J(JNZ(loc_1160a));	// 2356 jnz     short loc_1160A ;~ 01A2:15CB
cs=0x1a2;eip=0x0015cd; 	X(MOV(g_is_busy, 1));	// 2357 mov     g_is_busy, 1 ;~ 01A2:15CD
cs=0x1a2;eip=0x0015d2; 	X(PUSH(*(dw*)(((db*)&td11_highscores)+2)));	// 2358 push    word ptr td11_highscores+2 ;~ 01A2:15D2
cs=0x1a2;eip=0x0015d6; 	X(PUSH(*(dw*)(((db*)&td11_highscores))));	// 2359 push    word ptr td11_highscores ;~ 01A2:15D6
cs=0x1a2;eip=0x0015da; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 2360 mov     ax, offset g_path_buf ;~ 01A2:15DA
cs=0x1a2;eip=0x0015dd; 	X(PUSH(ax));	// 2361 push    ax ;~ 01A2:15DD
cs=0x1a2;eip=0x0015de; 	T(MOV(ax, 0x0A));	// 2362 mov     ax, 0Ah ;~ 01A2:15DE
cs=0x1a2;eip=0x0015e1; 	X(PUSH(ax));	// 2363 push    ax ;~ 01A2:15E1
cs=0x1a2;eip=0x0015e2; 	J(CALLF(sub_29a86,0));	// 2364 call    sub_29A86 ;~ 01A2:15E2
cs=0x1a2;eip=0x0015e7; 	T(ADD(sp, 8));	// 2365 add     sp, 8 ;~ 01A2:15E7
cs=0x1a2;eip=0x0015ea; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 2366 mov     [bp+var_4], ax ;~ 01A2:15EA
cs=0x1a2;eip=0x0015ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 2367 mov     [bp+var_2], dx ;~ 01A2:15ED
cs=0x1a2;eip=0x0015f0; 	X(MOV(g_is_busy, 0));	// 2368 mov     g_is_busy, 0 ;~ 01A2:15F0
cs=0x1a2;eip=0x0015f5; 	T(OR(ax, dx));	// 2369 or      ax, dx ;~ 01A2:15F5
cs=0x1a2;eip=0x0015f7; 	J(JNZ(loc_11602));	// 2370 jnz     short loc_11602 ;~ 01A2:15F7
loc_115f9:
	// 4462 
cs=0x1a2;eip=0x0015f9; 	T(MOV(ax, 1));	// 2373 mov     ax, 1 ;~ 01A2:15F9
cs=0x1a2;eip=0x0015fc; 	X(POP(si));	// 2374 pop     si ;~ 01A2:15FC
cs=0x1a2;eip=0x0015fd; 	X(POP(di));	// 2375 pop     di ;~ 01A2:15FD
cs=0x1a2;eip=0x0015fe; 	T(MOV(sp, bp));	// 2376 mov     sp, bp ;~ 01A2:15FE
cs=0x1a2;eip=0x001600; 	X(POP(bp));	// 2377 pop     bp ;~ 01A2:1600
cs=0x1a2;eip=0x001601; 	J(RETF(0));	// 2378 retf ;~ 01A2:1601
loc_11602:
	// 4463 
cs=0x1a2;eip=0x001602; 	T(SUB(ax, ax));	// 2383 sub     ax, ax ;~ 01A2:1602
cs=0x1a2;eip=0x001604; 	X(POP(si));	// 2384 pop     si ;~ 01A2:1604
cs=0x1a2;eip=0x001605; 	X(POP(di));	// 2385 pop     di ;~ 01A2:1605
cs=0x1a2;eip=0x001606; 	T(MOV(sp, bp));	// 2386 mov     sp, bp ;~ 01A2:1606
cs=0x1a2;eip=0x001608; 	X(POP(bp));	// 2387 pop     bp ;~ 01A2:1608
cs=0x1a2;eip=0x001609; 	J(RETF(0));	// 2388 retf ;~ 01A2:1609
loc_1160a:
	// 4464 
cs=0x1a2;eip=0x00160a; 	T(MOV(ax, offset(dseg,a______________)));	// 2392 mov     ax, offset a______________ ; "...................." ;~ 01A2:160A
cs=0x1a2;eip=0x00160d; 	X(PUSH(ax));	// 2393 push    ax ;~ 01A2:160D
cs=0x1a2;eip=0x00160e; 	T(ax = bp+var_38);	// 2394 lea     ax, [bp+var_38] ;~ 01A2:160E
cs=0x1a2;eip=0x001611; 	X(PUSH(ax));	// 2395 push    ax              ; char * ;~ 01A2:1611
cs=0x1a2;eip=0x001612; 	J(CALLF(_strcpy,0));	// 2396 call    _strcpy ;~ 01A2:1612
cs=0x1a2;eip=0x001617; 	T(ADD(sp, 4));	// 2397 add     sp, 4 ;~ 01A2:1617
cs=0x1a2;eip=0x00161a; 	T(MOV(ax, offset(dseg,a_______________________)));	// 2398 mov     ax, offset a_______________________ ; "......................." ;~ 01A2:161A
cs=0x1a2;eip=0x00161d; 	X(PUSH(ax));	// 2399 push    ax ;~ 01A2:161D
cs=0x1a2;eip=0x00161e; 	T(ax = bp+var_27);	// 2400 lea     ax, [bp+var_27] ;~ 01A2:161E
cs=0x1a2;eip=0x001621; 	X(PUSH(ax));	// 2401 push    ax              ; char * ;~ 01A2:1621
cs=0x1a2;eip=0x001622; 	J(CALLF(_strcpy,0));	// 2402 call    _strcpy ;~ 01A2:1622
cs=0x1a2;eip=0x001627; 	T(ADD(sp, 4));	// 2403 add     sp, 4 ;~ 01A2:1627
cs=0x1a2;eip=0x00162a; 	X(MOV(*(raddr(ss,bp+var_f)), 0));	// 2404 mov     [bp+var_F], 0 ;~ 01A2:162A
cs=0x1a2;eip=0x00162e; 	T(MOV(ax, offset(dseg,a______)));	// 2405 mov     ax, offset a______ ; "../...." ;~ 01A2:162E
cs=0x1a2;eip=0x001631; 	X(PUSH(ax));	// 2406 push    ax ;~ 01A2:1631
cs=0x1a2;eip=0x001632; 	T(ax = bp+var_e);	// 2407 lea     ax, [bp+var_E] ;~ 01A2:1632
cs=0x1a2;eip=0x001635; 	X(PUSH(ax));	// 2408 push    ax              ; char * ;~ 01A2:1635
cs=0x1a2;eip=0x001636; 	J(CALLF(_strcpy,0));	// 2409 call    _strcpy ;~ 01A2:1636
cs=0x1a2;eip=0x00163b; 	T(ADD(sp, 4));	// 2410 add     sp, 4 ;~ 01A2:163B
cs=0x1a2;eip=0x00163e; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0x0FFFF));	// 2411 mov     [bp+var_6], 0FFFFh ;~ 01A2:163E
cs=0x1a2;eip=0x001643; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), 0));	// 2412 mov     [bp+var_3A], 0 ;~ 01A2:1643
loc_11648:
	// 4465 
cs=0x1a2;eip=0x001648; 	T(MOV(ax, 0x34));	// 2415 mov     ax, 34h ; '4' ;~ 01A2:1648
cs=0x1a2;eip=0x00164b; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_3a))));	// 2416 imul    [bp+var_3A] ;~ 01A2:164B
cs=0x1a2;eip=0x00164e; 	T(MOV(bx, ax));	// 2417 mov     bx, ax ;~ 01A2:164E
cs=0x1a2;eip=0x001650; 	T(LES(si, td11_highscores));	// 2418 les     si, td11_highscores ;~ 01A2:1650
cs=0x1a2;eip=0x001654; 	T(di = bx+si);	// 2419 lea     di, [bx+si] ;~ 01A2:1654
cs=0x1a2;eip=0x001656; 	T(si = bp+var_38);	// 2420 lea     si, [bp+var_38] ;~ 01A2:1656
cs=0x1a2;eip=0x001659; 	T(MOV(cx, 0x1A));	// 2421 mov     cx, 1Ah ;~ 01A2:1659
	// 2422 repne movsw ;~ 01A2:165C
cs=0x1a2;eip=0x00165c; 	X(	REPNE MOVSW);	// 2422 repne movsw ;~ 01A2:165C
cs=0x1a2;eip=0x00165e; 	X(INC(*(dw*)(raddr(ss,bp+var_3a))));	// 2423 inc     [bp+var_3A] ;~ 01A2:165E
cs=0x1a2;eip=0x001661; 	T(CMP(*(dw*)(raddr(ss,bp+var_3a)), 7));	// 2424 cmp     [bp+var_3A], 7 ;~ 01A2:1661
cs=0x1a2;eip=0x001665; 	J(JL(loc_11648));	// 2425 jl      short loc_11648 ;~ 01A2:1665
cs=0x1a2;eip=0x001667; 	T(MOV(ax, 0x16C));	// 2426 mov     ax, 16Ch ;~ 01A2:1667
cs=0x1a2;eip=0x00166a; 	T(CWD);	// 2427 cwd ;~ 01A2:166A
cs=0x1a2;eip=0x00166b; 	X(PUSH(dx));	// 2428 push    dx ;~ 01A2:166B
cs=0x1a2;eip=0x00166c; 	X(PUSH(ax));	// 2429 push    ax ;~ 01A2:166C
cs=0x1a2;eip=0x00166d; 	X(PUSH(*(dw*)(((db*)&td11_highscores)+2)));	// 2430 push    word ptr td11_highscores+2 ;~ 01A2:166D
cs=0x1a2;eip=0x001671; 	X(PUSH(*(dw*)(((db*)&td11_highscores))));	// 2431 push    word ptr td11_highscores ;~ 01A2:1671
cs=0x1a2;eip=0x001675; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 2432 mov     ax, offset g_path_buf ;~ 01A2:1675
cs=0x1a2;eip=0x001678; 	X(PUSH(ax));	// 2433 push    ax ;~ 01A2:1678
cs=0x1a2;eip=0x001679; 	J(CALLF(file_write_fatal,0));	// 2434 call    file_write_fatal ;~ 01A2:1679
cs=0x1a2;eip=0x00167e; 	T(ADD(sp, 0x0A));	// 2435 add     sp, 0Ah ;~ 01A2:167E
cs=0x1a2;eip=0x001681; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), ax));	// 2436 mov     [bp+var_3A], ax ;~ 01A2:1681
cs=0x1a2;eip=0x001684; 	T(OR(ax, ax));	// 2437 or      ax, ax ;~ 01A2:1684
cs=0x1a2;eip=0x001686; 	J(JNZ(loc_1168b));	// 2438 jnz     short loc_1168B ;~ 01A2:1686
cs=0x1a2;eip=0x001688; 	J(JMP(loc_11602));	// 2439 jmp     loc_11602 ;~ 01A2:1688
loc_1168b:
	// 4466 
cs=0x1a2;eip=0x00168b; 	J(JMP(loc_115f9));	// 2443 jmp     loc_115F9 ;~ 01A2:168B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::khighscore_write_a: 	goto highscore_write_a;
        case m2c::kloc_1159a: 	goto loc_1159a;
        case m2c::kloc_115f9: 	goto loc_115f9;
        case m2c::kloc_11602: 	goto loc_11602;
        case m2c::kloc_1160a: 	goto loc_1160a;
        case m2c::kloc_11648: 	goto loc_11648;
        case m2c::kloc_1168b: 	goto loc_1168b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool highscore_text_unk(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    highscore_text_unk:
    _begin:
#undef var_a
#define var_a -0x0A
	// 2454 var_A           = byte ptr -0Ah ;~ 01A2:168E
#undef var_8
#define var_8 -8
	// 2455 var_8           = word ptr -8 ;~ 01A2:168E
#undef var_6
#define var_6 -6
	// 2456 var_6           = byte ptr -6 ;~ 01A2:168E
#undef var_5
#define var_5 -5
	// 2457 var_5           = byte ptr -5 ;~ 01A2:168E
#undef var_4
#define var_4 -4
	// 2458 var_4           = byte ptr -4 ;~ 01A2:168E
#undef var_3
#define var_3 -3
	// 2459 var_3           = byte ptr -3 ;~ 01A2:168E
#undef var_2
#define var_2 -2
	// 2460 var_2           = word ptr -2 ;~ 01A2:168E
cs=0x1a2;eip=0x00168e; 	X(PUSH(bp));	// 2462 push    bp ;~ 01A2:168E
cs=0x1a2;eip=0x00168f; 	T(MOV(bp, sp));	// 2463 mov     bp, sp ;~ 01A2:168F
cs=0x1a2;eip=0x001691; 	T(SUB(sp, 0x0A));	// 2464 sub     sp, 0Ah ;~ 01A2:1691
cs=0x1a2;eip=0x001694; 	J(CALLF(sprite_copy_wnd_to_1,0));	// 2465 call    sprite_copy_wnd_to_1 ;~ 01A2:1694
cs=0x1a2;eip=0x001699; 	T(MOV(ax, offset(dseg,ahs1)));	// 2466 mov     ax, offset aHs1 ; "hs1" ;~ 01A2:1699
cs=0x1a2;eip=0x00169c; 	X(PUSH(ax));	// 2467 push    ax ;~ 01A2:169C
cs=0x1a2;eip=0x00169d; 	X(PUSH(word_44cee));	// 2468 push    word_44CEE ;~ 01A2:169D
cs=0x1a2;eip=0x0016a1; 	X(PUSH(mainresptr));	// 2469 push    mainresptr ;~ 01A2:16A1
cs=0x1a2;eip=0x0016a5; 	J(CALLF(locate_text_res,0));	// 2470 call    locate_text_res ;~ 01A2:16A5
cs=0x1a2;eip=0x0016aa; 	T(ADD(sp, 6));	// 2471 add     sp, 6 ;~ 01A2:16AA
cs=0x1a2;eip=0x0016ad; 	X(PUSH(dx));	// 2472 push    dx ;~ 01A2:16AD
cs=0x1a2;eip=0x0016ae; 	X(PUSH(ax));	// 2473 push    ax ;~ 01A2:16AE
cs=0x1a2;eip=0x0016af; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2474 mov     ax, offset resID_byte1 ;~ 01A2:16AF
cs=0x1a2;eip=0x0016b2; 	X(PUSH(ax));	// 2475 push    ax ;~ 01A2:16B2
cs=0x1a2;eip=0x0016b3; 	J(CALLF(copy_string,0));	// 2476 call    copy_string ;~ 01A2:16B3
cs=0x1a2;eip=0x0016b8; 	T(ADD(sp, 6));	// 2477 add     sp, 6 ;~ 01A2:16B8
cs=0x1a2;eip=0x0016bb; 	T(MOV(ax, offset(dseg,asc_3baa2)));	// 2478 mov     ax, offset asc_3BAA2 ; " '" ;~ 01A2:16BB
cs=0x1a2;eip=0x0016be; 	X(PUSH(ax));	// 2479 push    ax ;~ 01A2:16BE
cs=0x1a2;eip=0x0016bf; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2480 mov     ax, offset resID_byte1 ;~ 01A2:16BF
cs=0x1a2;eip=0x0016c2; 	X(PUSH(ax));	// 2481 push    ax              ; char * ;~ 01A2:16C2
cs=0x1a2;eip=0x0016c3; 	J(CALLF(_strcat,0));	// 2482 call    _strcat ;~ 01A2:16C3
cs=0x1a2;eip=0x0016c8; 	T(ADD(sp, 4));	// 2483 add     sp, 4 ;~ 01A2:16C8
cs=0x1a2;eip=0x0016cb; 	T(MOV(ax, offset(dseg,byte_449b1)));	// 2484 mov     ax, offset byte_449B1 ;~ 01A2:16CB
cs=0x1a2;eip=0x0016ce; 	X(PUSH(ax));	// 2485 push    ax ;~ 01A2:16CE
cs=0x1a2;eip=0x0016cf; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2486 mov     ax, offset resID_byte1 ;~ 01A2:16CF
cs=0x1a2;eip=0x0016d2; 	X(PUSH(ax));	// 2487 push    ax              ; char * ;~ 01A2:16D2
cs=0x1a2;eip=0x0016d3; 	J(CALLF(_strcat,0));	// 2488 call    _strcat ;~ 01A2:16D3
cs=0x1a2;eip=0x0016d8; 	T(ADD(sp, 4));	// 2489 add     sp, 4 ;~ 01A2:16D8
cs=0x1a2;eip=0x0016db; 	T(MOV(ax, offset(dseg,asc_3baa5)));	// 2490 mov     ax, offset asc_3BAA5 ; "'" ;~ 01A2:16DB
cs=0x1a2;eip=0x0016de; 	X(PUSH(ax));	// 2491 push    ax ;~ 01A2:16DE
cs=0x1a2;eip=0x0016df; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2492 mov     ax, offset resID_byte1 ;~ 01A2:16DF
cs=0x1a2;eip=0x0016e2; 	X(PUSH(ax));	// 2493 push    ax              ; char * ;~ 01A2:16E2
cs=0x1a2;eip=0x0016e3; 	J(CALLF(_strcat,0));	// 2494 call    _strcat ;~ 01A2:16E3
cs=0x1a2;eip=0x0016e8; 	T(ADD(sp, 4));	// 2495 add     sp, 4 ;~ 01A2:16E8
cs=0x1a2;eip=0x0016eb; 	T(SUB(ax, ax));	// 2496 sub     ax, ax ;~ 01A2:16EB
cs=0x1a2;eip=0x0016ed; 	X(PUSH(ax));	// 2497 push    ax ;~ 01A2:16ED
cs=0x1a2;eip=0x0016ee; 	X(PUSH(dialog_fnt_colour));	// 2498 push    dialog_fnt_colour ;~ 01A2:16EE
cs=0x1a2;eip=0x0016f2; 	T(MOV(ax, 5));	// 2499 mov     ax, 5 ;~ 01A2:16F2
cs=0x1a2;eip=0x0016f5; 	X(PUSH(ax));	// 2500 push    ax ;~ 01A2:16F5
cs=0x1a2;eip=0x0016f6; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2501 mov     ax, offset resID_byte1 ;~ 01A2:16F6
cs=0x1a2;eip=0x0016f9; 	X(PUSH(ax));	// 2502 push    ax ;~ 01A2:16F9
cs=0x1a2;eip=0x0016fa; 	J(CALLF(font_op2_alt,0));	// 2503 call    font_op2_alt ;~ 01A2:16FA
cs=0x1a2;eip=0x0016ff; 	T(ADD(sp, 2));	// 2504 add     sp, 2 ;~ 01A2:16FF
cs=0x1a2;eip=0x001702; 	X(PUSH(ax));	// 2505 push    ax ;~ 01A2:1702
cs=0x1a2;eip=0x001703; 	T(MOV(ax, 0x0AC74));	// 2506 mov     ax, 0AC74h ;~ 01A2:1703
cs=0x1a2;eip=0x001706; 	X(PUSH(ax));	// 2507 push    ax ;~ 01A2:1706
cs=0x1a2;eip=0x001707; 	J(CALLF(hiscore_draw_text,0));	// 2508 call    hiscore_draw_text ;~ 01A2:1707
cs=0x1a2;eip=0x00170c; 	T(ADD(sp, 0x0A));	// 2509 add     sp, 0Ah ;~ 01A2:170C
cs=0x1a2;eip=0x00170f; 	T(MOV(ax, offset(dseg,ahs2)));	// 2510 mov     ax, offset aHs2 ; "hs2" ;~ 01A2:170F
cs=0x1a2;eip=0x001712; 	X(PUSH(ax));	// 2511 push    ax ;~ 01A2:1712
cs=0x1a2;eip=0x001713; 	X(PUSH(word_44cee));	// 2512 push    word_44CEE ;~ 01A2:1713
cs=0x1a2;eip=0x001717; 	X(PUSH(mainresptr));	// 2513 push    mainresptr ;~ 01A2:1717
cs=0x1a2;eip=0x00171b; 	J(CALLF(locate_text_res,0));	// 2514 call    locate_text_res ;~ 01A2:171B
cs=0x1a2;eip=0x001720; 	T(ADD(sp, 6));	// 2515 add     sp, 6 ;~ 01A2:1720
cs=0x1a2;eip=0x001723; 	X(PUSH(dx));	// 2516 push    dx ;~ 01A2:1723
cs=0x1a2;eip=0x001724; 	X(PUSH(ax));	// 2517 push    ax ;~ 01A2:1724
cs=0x1a2;eip=0x001725; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2518 mov     ax, offset resID_byte1 ;~ 01A2:1725
cs=0x1a2;eip=0x001728; 	X(PUSH(ax));	// 2519 push    ax ;~ 01A2:1728
cs=0x1a2;eip=0x001729; 	J(CALLF(copy_string,0));	// 2520 call    copy_string ;~ 01A2:1729
cs=0x1a2;eip=0x00172e; 	T(ADD(sp, 6));	// 2521 add     sp, 6 ;~ 01A2:172E
cs=0x1a2;eip=0x001731; 	T(SUB(ax, ax));	// 2522 sub     ax, ax ;~ 01A2:1731
cs=0x1a2;eip=0x001733; 	X(PUSH(ax));	// 2523 push    ax ;~ 01A2:1733
cs=0x1a2;eip=0x001734; 	X(PUSH(dialog_fnt_colour));	// 2524 push    dialog_fnt_colour ;~ 01A2:1734
cs=0x1a2;eip=0x001738; 	T(MOV(ax, 0x0F));	// 2525 mov     ax, 0Fh ;~ 01A2:1738
cs=0x1a2;eip=0x00173b; 	X(PUSH(ax));	// 2526 push    ax ;~ 01A2:173B
cs=0x1a2;eip=0x00173c; 	T(MOV(ax, 0x10));	// 2527 mov     ax, 10h ;~ 01A2:173C
cs=0x1a2;eip=0x00173f; 	X(PUSH(ax));	// 2528 push    ax ;~ 01A2:173F
cs=0x1a2;eip=0x001740; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2529 mov     ax, offset resID_byte1 ;~ 01A2:1740
cs=0x1a2;eip=0x001743; 	X(PUSH(ax));	// 2530 push    ax ;~ 01A2:1743
cs=0x1a2;eip=0x001744; 	J(CALLF(hiscore_draw_text,0));	// 2531 call    hiscore_draw_text ;~ 01A2:1744
cs=0x1a2;eip=0x001749; 	T(ADD(sp, 0x0A));	// 2532 add     sp, 0Ah ;~ 01A2:1749
cs=0x1a2;eip=0x00174c; 	T(MOV(ax, offset(dseg,ahs3)));	// 2533 mov     ax, offset aHs3 ; "hs3" ;~ 01A2:174C
cs=0x1a2;eip=0x00174f; 	X(PUSH(ax));	// 2534 push    ax ;~ 01A2:174F
cs=0x1a2;eip=0x001750; 	X(PUSH(word_44cee));	// 2535 push    word_44CEE ;~ 01A2:1750
cs=0x1a2;eip=0x001754; 	X(PUSH(mainresptr));	// 2536 push    mainresptr ;~ 01A2:1754
cs=0x1a2;eip=0x001758; 	J(CALLF(locate_text_res,0));	// 2537 call    locate_text_res ;~ 01A2:1758
cs=0x1a2;eip=0x00175d; 	T(ADD(sp, 6));	// 2538 add     sp, 6 ;~ 01A2:175D
cs=0x1a2;eip=0x001760; 	X(PUSH(dx));	// 2539 push    dx ;~ 01A2:1760
cs=0x1a2;eip=0x001761; 	X(PUSH(ax));	// 2540 push    ax ;~ 01A2:1761
cs=0x1a2;eip=0x001762; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2541 mov     ax, offset resID_byte1 ;~ 01A2:1762
cs=0x1a2;eip=0x001765; 	X(PUSH(ax));	// 2542 push    ax ;~ 01A2:1765
cs=0x1a2;eip=0x001766; 	J(CALLF(copy_string,0));	// 2543 call    copy_string ;~ 01A2:1766
cs=0x1a2;eip=0x00176b; 	T(ADD(sp, 6));	// 2544 add     sp, 6 ;~ 01A2:176B
cs=0x1a2;eip=0x00176e; 	T(SUB(ax, ax));	// 2545 sub     ax, ax ;~ 01A2:176E
cs=0x1a2;eip=0x001770; 	X(PUSH(ax));	// 2546 push    ax ;~ 01A2:1770
cs=0x1a2;eip=0x001771; 	X(PUSH(dialog_fnt_colour));	// 2547 push    dialog_fnt_colour ;~ 01A2:1771
cs=0x1a2;eip=0x001775; 	T(MOV(ax, 0x0F));	// 2548 mov     ax, 0Fh ;~ 01A2:1775
cs=0x1a2;eip=0x001778; 	X(PUSH(ax));	// 2549 push    ax ;~ 01A2:1778
cs=0x1a2;eip=0x001779; 	T(MOV(ax, 0x78));	// 2550 mov     ax, 78h ; 'x' ;~ 01A2:1779
cs=0x1a2;eip=0x00177c; 	X(PUSH(ax));	// 2551 push    ax ;~ 01A2:177C
cs=0x1a2;eip=0x00177d; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2552 mov     ax, offset resID_byte1 ;~ 01A2:177D
cs=0x1a2;eip=0x001780; 	X(PUSH(ax));	// 2553 push    ax ;~ 01A2:1780
cs=0x1a2;eip=0x001781; 	J(CALLF(hiscore_draw_text,0));	// 2554 call    hiscore_draw_text ;~ 01A2:1781
cs=0x1a2;eip=0x001786; 	T(ADD(sp, 0x0A));	// 2555 add     sp, 0Ah ;~ 01A2:1786
cs=0x1a2;eip=0x001789; 	T(MOV(ax, offset(dseg,ahs5)));	// 2556 mov     ax, offset aHs5 ; "hs5" ;~ 01A2:1789
cs=0x1a2;eip=0x00178c; 	X(PUSH(ax));	// 2557 push    ax ;~ 01A2:178C
cs=0x1a2;eip=0x00178d; 	X(PUSH(word_44cee));	// 2558 push    word_44CEE ;~ 01A2:178D
cs=0x1a2;eip=0x001791; 	X(PUSH(mainresptr));	// 2559 push    mainresptr ;~ 01A2:1791
cs=0x1a2;eip=0x001795; 	J(CALLF(locate_text_res,0));	// 2560 call    locate_text_res ;~ 01A2:1795
cs=0x1a2;eip=0x00179a; 	T(ADD(sp, 6));	// 2561 add     sp, 6 ;~ 01A2:179A
cs=0x1a2;eip=0x00179d; 	X(PUSH(dx));	// 2562 push    dx ;~ 01A2:179D
cs=0x1a2;eip=0x00179e; 	X(PUSH(ax));	// 2563 push    ax ;~ 01A2:179E
cs=0x1a2;eip=0x00179f; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2564 mov     ax, offset resID_byte1 ;~ 01A2:179F
cs=0x1a2;eip=0x0017a2; 	X(PUSH(ax));	// 2565 push    ax ;~ 01A2:17A2
cs=0x1a2;eip=0x0017a3; 	J(CALLF(copy_string,0));	// 2566 call    copy_string ;~ 01A2:17A3
cs=0x1a2;eip=0x0017a8; 	T(ADD(sp, 6));	// 2567 add     sp, 6 ;~ 01A2:17A8
cs=0x1a2;eip=0x0017ab; 	T(SUB(ax, ax));	// 2568 sub     ax, ax ;~ 01A2:17AB
cs=0x1a2;eip=0x0017ad; 	X(PUSH(ax));	// 2569 push    ax ;~ 01A2:17AD
cs=0x1a2;eip=0x0017ae; 	X(PUSH(dialog_fnt_colour));	// 2570 push    dialog_fnt_colour ;~ 01A2:17AE
cs=0x1a2;eip=0x0017b2; 	T(MOV(ax, 0x0F));	// 2571 mov     ax, 0Fh ;~ 01A2:17B2
cs=0x1a2;eip=0x0017b5; 	X(PUSH(ax));	// 2572 push    ax ;~ 01A2:17B5
cs=0x1a2;eip=0x0017b6; 	T(MOV(ax, 0x0E0));	// 2573 mov     ax, 0E0h ; 'à' ;~ 01A2:17B6
cs=0x1a2;eip=0x0017b9; 	X(PUSH(ax));	// 2574 push    ax ;~ 01A2:17B9
cs=0x1a2;eip=0x0017ba; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2575 mov     ax, offset resID_byte1 ;~ 01A2:17BA
cs=0x1a2;eip=0x0017bd; 	X(PUSH(ax));	// 2576 push    ax ;~ 01A2:17BD
cs=0x1a2;eip=0x0017be; 	J(CALLF(hiscore_draw_text,0));	// 2577 call    hiscore_draw_text ;~ 01A2:17BE
cs=0x1a2;eip=0x0017c3; 	T(ADD(sp, 0x0A));	// 2578 add     sp, 0Ah ;~ 01A2:17C3
cs=0x1a2;eip=0x0017c6; 	T(MOV(ax, offset(dseg,ahs4)));	// 2579 mov     ax, offset aHs4 ; "hs4" ;~ 01A2:17C6
cs=0x1a2;eip=0x0017c9; 	X(PUSH(ax));	// 2580 push    ax ;~ 01A2:17C9
cs=0x1a2;eip=0x0017ca; 	X(PUSH(word_44cee));	// 2581 push    word_44CEE ;~ 01A2:17CA
cs=0x1a2;eip=0x0017ce; 	X(PUSH(mainresptr));	// 2582 push    mainresptr ;~ 01A2:17CE
cs=0x1a2;eip=0x0017d2; 	J(CALLF(locate_text_res,0));	// 2583 call    locate_text_res ;~ 01A2:17D2
cs=0x1a2;eip=0x0017d7; 	T(ADD(sp, 6));	// 2584 add     sp, 6 ;~ 01A2:17D7
cs=0x1a2;eip=0x0017da; 	X(PUSH(dx));	// 2585 push    dx ;~ 01A2:17DA
cs=0x1a2;eip=0x0017db; 	X(PUSH(ax));	// 2586 push    ax ;~ 01A2:17DB
cs=0x1a2;eip=0x0017dc; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2587 mov     ax, offset resID_byte1 ;~ 01A2:17DC
cs=0x1a2;eip=0x0017df; 	X(PUSH(ax));	// 2588 push    ax ;~ 01A2:17DF
cs=0x1a2;eip=0x0017e0; 	J(CALLF(copy_string,0));	// 2589 call    copy_string ;~ 01A2:17E0
cs=0x1a2;eip=0x0017e5; 	T(ADD(sp, 6));	// 2590 add     sp, 6 ;~ 01A2:17E5
cs=0x1a2;eip=0x0017e8; 	T(SUB(ax, ax));	// 2591 sub     ax, ax ;~ 01A2:17E8
cs=0x1a2;eip=0x0017ea; 	X(PUSH(ax));	// 2592 push    ax ;~ 01A2:17EA
cs=0x1a2;eip=0x0017eb; 	X(PUSH(dialog_fnt_colour));	// 2593 push    dialog_fnt_colour ;~ 01A2:17EB
cs=0x1a2;eip=0x0017ef; 	T(MOV(ax, 0x0F));	// 2594 mov     ax, 0Fh ;~ 01A2:17EF
cs=0x1a2;eip=0x0017f2; 	X(PUSH(ax));	// 2595 push    ax ;~ 01A2:17F2
cs=0x1a2;eip=0x0017f3; 	T(MOV(ax, 0x110));	// 2596 mov     ax, 110h ;~ 01A2:17F3
cs=0x1a2;eip=0x0017f6; 	X(PUSH(ax));	// 2597 push    ax ;~ 01A2:17F6
cs=0x1a2;eip=0x0017f7; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2598 mov     ax, offset resID_byte1 ;~ 01A2:17F7
cs=0x1a2;eip=0x0017fa; 	X(PUSH(ax));	// 2599 push    ax ;~ 01A2:17FA
cs=0x1a2;eip=0x0017fb; 	J(CALLF(hiscore_draw_text,0));	// 2600 call    hiscore_draw_text ;~ 01A2:17FB
cs=0x1a2;eip=0x001800; 	T(ADD(sp, 0x0A));	// 2601 add     sp, 0Ah ;~ 01A2:1800
cs=0x1a2;eip=0x001803; 	X(PUSH(word_44d24));	// 2602 push    word_44D24 ;~ 01A2:1803
cs=0x1a2;eip=0x001807; 	X(PUSH(fontnptr));	// 2603 push    fontnptr ;~ 01A2:1807
cs=0x1a2;eip=0x00180b; 	J(CALLF(font_set_fontdef2,0));	// 2604 call    font_set_fontdef2 ;~ 01A2:180B
cs=0x1a2;eip=0x001810; 	T(ADD(sp, 4));	// 2605 add     sp, 4 ;~ 01A2:1810
cs=0x1a2;eip=0x001813; 	X(MOV(*(raddr(ss,bp+var_a)), 0));	// 2606 mov     [bp+var_A], 0 ;~ 01A2:1813
cs=0x1a2;eip=0x001817; 	J(JMP(loc_118a0));	// 2607 jmp     loc_118A0 ;~ 01A2:1817
loc_1181a:
	// 4467 
cs=0x1a2;eip=0x00181a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 2611 mov     [bp+var_2], 0 ;~ 01A2:181A
loc_1181f:
	// 4468 
cs=0x1a2;eip=0x00181f; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 2614 mov     al, [bp+var_A] ;~ 01A2:181F
cs=0x1a2;eip=0x001822; 	T(CBW);	// 2615 cbw ;~ 01A2:1822
cs=0x1a2;eip=0x001823; 	T(MOV(cx, ax));	// 2616 mov     cx, ax ;~ 01A2:1823
cs=0x1a2;eip=0x001825; 	T(SHL(ax, 1));	// 2617 shl     ax, 1 ;~ 01A2:1825
cs=0x1a2;eip=0x001827; 	T(SHL(ax, 1));	// 2618 shl     ax, 1 ;~ 01A2:1827
cs=0x1a2;eip=0x001829; 	T(ADD(ax, cx));	// 2619 add     ax, cx ;~ 01A2:1829
cs=0x1a2;eip=0x00182b; 	T(SHL(ax, 1));	// 2620 shl     ax, 1 ;~ 01A2:182B
cs=0x1a2;eip=0x00182d; 	T(ADD(ax, 0x19));	// 2621 add     ax, 19h ;~ 01A2:182D
cs=0x1a2;eip=0x001830; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 2622 mov     [bp+var_8], ax ;~ 01A2:1830
cs=0x1a2;eip=0x001833; 	T(SUB(ax, ax));	// 2623 sub     ax, ax ;~ 01A2:1833
cs=0x1a2;eip=0x001835; 	X(PUSH(ax));	// 2624 push    ax ;~ 01A2:1835
cs=0x1a2;eip=0x001836; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 2625 push    [bp+var_2] ;~ 01A2:1836
cs=0x1a2;eip=0x001839; 	J(CALLF(font_set_unk,0));	// 2626 call    font_set_unk ;~ 01A2:1839
cs=0x1a2;eip=0x00183e; 	T(ADD(sp, 4));	// 2627 add     sp, 4 ;~ 01A2:183E
cs=0x1a2;eip=0x001841; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 2628 push    [bp+var_8] ;~ 01A2:1841
cs=0x1a2;eip=0x001844; 	T(MOV(ax, 0x10));	// 2629 mov     ax, 10h ;~ 01A2:1844
cs=0x1a2;eip=0x001847; 	X(PUSH(ax));	// 2630 push    ax ;~ 01A2:1847
cs=0x1a2;eip=0x001848; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 2631 mov     al, [bp+var_6] ;~ 01A2:1848
cs=0x1a2;eip=0x00184b; 	T(CBW);	// 2632 cbw ;~ 01A2:184B
cs=0x1a2;eip=0x00184c; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2633 add     ax, offset resID_byte1 ;~ 01A2:184C
cs=0x1a2;eip=0x00184f; 	X(PUSH(ax));	// 2634 push    ax ;~ 01A2:184F
cs=0x1a2;eip=0x001850; 	J(CALLF(font_draw_text,0));	// 2635 call    font_draw_text ;~ 01A2:1850
cs=0x1a2;eip=0x001855; 	T(ADD(sp, 6));	// 2636 add     sp, 6 ;~ 01A2:1855
cs=0x1a2;eip=0x001858; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 2637 push    [bp+var_8] ;~ 01A2:1858
cs=0x1a2;eip=0x00185b; 	T(MOV(ax, 0x78));	// 2638 mov     ax, 78h ; 'x' ;~ 01A2:185B
cs=0x1a2;eip=0x00185e; 	X(PUSH(ax));	// 2639 push    ax ;~ 01A2:185E
cs=0x1a2;eip=0x00185f; 	T(MOV(al, *(raddr(ss,bp+var_5))));	// 2640 mov     al, [bp+var_5] ;~ 01A2:185F
cs=0x1a2;eip=0x001862; 	T(CBW);	// 2641 cbw ;~ 01A2:1862
cs=0x1a2;eip=0x001863; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2642 add     ax, offset resID_byte1 ;~ 01A2:1863
cs=0x1a2;eip=0x001866; 	X(PUSH(ax));	// 2643 push    ax ;~ 01A2:1866
cs=0x1a2;eip=0x001867; 	J(CALLF(font_draw_text,0));	// 2644 call    font_draw_text ;~ 01A2:1867
cs=0x1a2;eip=0x00186c; 	T(ADD(sp, 6));	// 2645 add     sp, 6 ;~ 01A2:186C
cs=0x1a2;eip=0x00186f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 2646 push    [bp+var_8] ;~ 01A2:186F
cs=0x1a2;eip=0x001872; 	T(MOV(ax, 0x0E0));	// 2647 mov     ax, 0E0h ; 'à' ;~ 01A2:1872
cs=0x1a2;eip=0x001875; 	X(PUSH(ax));	// 2648 push    ax ;~ 01A2:1875
cs=0x1a2;eip=0x001876; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 2649 mov     al, [bp+var_4] ;~ 01A2:1876
cs=0x1a2;eip=0x001879; 	T(CBW);	// 2650 cbw ;~ 01A2:1879
cs=0x1a2;eip=0x00187a; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2651 add     ax, offset resID_byte1 ;~ 01A2:187A
cs=0x1a2;eip=0x00187d; 	X(PUSH(ax));	// 2652 push    ax ;~ 01A2:187D
cs=0x1a2;eip=0x00187e; 	J(CALLF(font_draw_text,0));	// 2653 call    font_draw_text ;~ 01A2:187E
cs=0x1a2;eip=0x001883; 	T(ADD(sp, 6));	// 2654 add     sp, 6 ;~ 01A2:1883
cs=0x1a2;eip=0x001886; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 2655 push    [bp+var_8] ;~ 01A2:1886
cs=0x1a2;eip=0x001889; 	T(MOV(ax, 0x110));	// 2656 mov     ax, 110h ;~ 01A2:1889
cs=0x1a2;eip=0x00188c; 	X(PUSH(ax));	// 2657 push    ax ;~ 01A2:188C
cs=0x1a2;eip=0x00188d; 	T(MOV(al, *(raddr(ss,bp+var_3))));	// 2658 mov     al, [bp+var_3] ;~ 01A2:188D
cs=0x1a2;eip=0x001890; 	T(CBW);	// 2659 cbw ;~ 01A2:1890
cs=0x1a2;eip=0x001891; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2660 add     ax, offset resID_byte1 ;~ 01A2:1891
cs=0x1a2;eip=0x001894; 	X(PUSH(ax));	// 2661 push    ax ;~ 01A2:1894
cs=0x1a2;eip=0x001895; 	J(CALLF(font_draw_text,0));	// 2662 call    font_draw_text ;~ 01A2:1895
cs=0x1a2;eip=0x00189a; 	T(ADD(sp, 6));	// 2663 add     sp, 6 ;~ 01A2:189A
cs=0x1a2;eip=0x00189d; 	X(INC(*(raddr(ss,bp+var_a))));	// 2664 inc     [bp+var_A] ;~ 01A2:189D
loc_118a0:
	// 4469 
cs=0x1a2;eip=0x0018a0; 	T(CMP(*(raddr(ss,bp+var_a)), 7));	// 2667 cmp     [bp+var_A], 7 ;~ 01A2:18A0
cs=0x1a2;eip=0x0018a4; 	J(JGE(loc_118ca));	// 2668 jge     short loc_118CA ;~ 01A2:18A4
cs=0x1a2;eip=0x0018a6; 	T(ax = bp+var_6);	// 2669 lea     ax, [bp+var_6] ;~ 01A2:18A6
cs=0x1a2;eip=0x0018a9; 	X(PUSH(ax));	// 2670 push    ax ;~ 01A2:18A9
cs=0x1a2;eip=0x0018aa; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 2671 mov     al, [bp+var_A] ;~ 01A2:18AA
cs=0x1a2;eip=0x0018ad; 	T(CBW);	// 2672 cbw ;~ 01A2:18AD
cs=0x1a2;eip=0x0018ae; 	X(PUSH(ax));	// 2673 push    ax ;~ 01A2:18AE
cs=0x1a2;eip=0x0018af; 	X(PUSH(cs));	// 2674 push    cs ;~ 01A2:18AF
cs=0x1a2;eip=0x0018b0; 	J(CALL(print_highscore_entry,0));	// 2675 call    near ptr print_highscore_entry ;~ 01A2:18B0
cs=0x1a2;eip=0x0018b3; 	T(ADD(sp, 4));	// 2676 add     sp, 4 ;~ 01A2:18B3
cs=0x1a2;eip=0x0018b6; 	T(MOV(al, byte_449ce));	// 2677 mov     al, byte_449CE ;~ 01A2:18B6
cs=0x1a2;eip=0x0018b9; 	T(CMP(*(raddr(ss,bp+var_a)), al));	// 2678 cmp     [bp+var_A], al ;~ 01A2:18B9
cs=0x1a2;eip=0x0018bc; 	J(JZ(loc_118c1));	// 2679 jz      short loc_118C1 ;~ 01A2:18BC
cs=0x1a2;eip=0x0018be; 	J(JMP(loc_1181a));	// 2680 jmp     loc_1181A ;~ 01A2:18BE
loc_118c1:
	// 4470 
cs=0x1a2;eip=0x0018c1; 	T(MOV(ax, dialogarg2));	// 2684 mov     ax, dialogarg2 ;~ 01A2:18C1
cs=0x1a2;eip=0x0018c4; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 2685 mov     [bp+var_2], ax ;~ 01A2:18C4
cs=0x1a2;eip=0x0018c7; 	J(JMP(loc_1181f));	// 2686 jmp     loc_1181F ;~ 01A2:18C7
loc_118ca:
	// 4471 
cs=0x1a2;eip=0x0018ca; 	J(CALLF(font_set_fontdef,0));	// 2690 call    font_set_fontdef ;~ 01A2:18CA
cs=0x1a2;eip=0x0018cf; 	T(MOV(sp, bp));	// 2691 mov     sp, bp ;~ 01A2:18CF
cs=0x1a2;eip=0x0018d1; 	X(POP(bp));	// 2692 pop     bp ;~ 01A2:18D1
cs=0x1a2;eip=0x0018d2; 	J(RETF(0));	// 2693 retf ;~ 01A2:18D2

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::khighscore_text_unk: 	goto highscore_text_unk;
        case m2c::kloc_1181a: 	goto loc_1181a;
        case m2c::kloc_1181f: 	goto loc_1181f;
        case m2c::kloc_118a0: 	goto loc_118a0;
        case m2c::kloc_118c1: 	goto loc_118c1;
        case m2c::kloc_118ca: 	goto loc_118ca;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool print_highscore_entry(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    print_highscore_entry:
    _begin:
#undef var_4a
#define var_4a -0x4A
	// 2706 var_4A          = byte ptr -4Ah ;~ 01A2:18D4
#undef var_39
#define var_39 -0x39
	// 2707 var_39          = byte ptr -39h ;~ 01A2:18D4
#undef var_21
#define var_21 -0x21
	// 2708 var_21          = byte ptr -21h ;~ 01A2:18D4
#undef var_20
#define var_20 -0x20
	// 2709 var_20          = byte ptr -20h ;~ 01A2:18D4
#undef var_18
#define var_18 -0x18
	// 2710 var_18          = word ptr -18h ;~ 01A2:18D4
#undef var_16
#define var_16 -0x16
	// 2711 var_16          = byte ptr -16h ;~ 01A2:18D4
#undef var_14
#define var_14 -0x14
	// 2712 var_14          = word ptr -14h ;~ 01A2:18D4
#undef var_12
#define var_12 -0x12
	// 2713 var_12          = byte ptr -12h ;~ 01A2:18D4
#undef arg_0
#define arg_0 6
	// 2714 arg_0           = word ptr  6 ;~ 01A2:18D4
#undef arg_2
#define arg_2 8
	// 2715 arg_2           = word ptr  8 ;~ 01A2:18D4
cs=0x1a2;eip=0x0018d4; 	X(PUSH(bp));	// 2717 push    bp ;~ 01A2:18D4
cs=0x1a2;eip=0x0018d5; 	T(MOV(bp, sp));	// 2718 mov     bp, sp ;~ 01A2:18D5
cs=0x1a2;eip=0x0018d7; 	T(SUB(sp, 0x4A));	// 2719 sub     sp, 4Ah ;~ 01A2:18D7
cs=0x1a2;eip=0x0018da; 	X(PUSH(di));	// 2720 push    di ;~ 01A2:18DA
cs=0x1a2;eip=0x0018db; 	X(PUSH(si));	// 2721 push    si              ; char * ;~ 01A2:18DB
cs=0x1a2;eip=0x0018dc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 2722 mov     bx, [bp+arg_0] ;~ 01A2:18DC
cs=0x1a2;eip=0x0018df; 	T(SHL(bx, 1));	// 2723 shl     bx, 1 ;~ 01A2:18DF
cs=0x1a2;eip=0x0018e1; 	T(MOV(ax, 0x34));	// 2724 mov     ax, 34h ; '4' ;~ 01A2:18E1
cs=0x1a2;eip=0x0018e4; 	X(IMUL1_2(*(dw*)(((db*)&word_46170)+bx)));	// 2725 imul    word_46170[bx] ;~ 01A2:18E4
cs=0x1a2;eip=0x0018e8; 	T(ADD(ax, *(dw*)(((db*)&td11_highscores))));	// 2726 add     ax, word ptr td11_highscores ;~ 01A2:18E8
cs=0x1a2;eip=0x0018ec; 	T(MOV(dx, *(dw*)(((db*)&td11_highscores)+2)));	// 2727 mov     dx, word ptr td11_highscores+2 ;~ 01A2:18EC
cs=0x1a2;eip=0x0018f0; 	X(PUSH(si));	// 2728 push    si ;~ 01A2:18F0
cs=0x1a2;eip=0x0018f1; 	T(di = bp+var_4a);	// 2729 lea     di, [bp+var_4A] ;~ 01A2:18F1
cs=0x1a2;eip=0x0018f4; 	T(MOV(si, ax));	// 2730 mov     si, ax ;~ 01A2:18F4
cs=0x1a2;eip=0x0018f6; 	X(PUSH(ss));	// 2731 push    ss ;~ 01A2:18F6
cs=0x1a2;eip=0x0018f7; 	X(POP(es));	// 2732 pop     es ;~ 01A2:18F7
cs=0x1a2;eip=0x0018f8; 	X(PUSH(ds));	// 2733 push    ds ;~ 01A2:18F8
cs=0x1a2;eip=0x0018f9; 	T(MOV(ds, dx));	// 2734 mov     ds, dx ;~ 01A2:18F9
cs=0x1a2;eip=0x0018fb; 	T(MOV(cx, 0x1A));	// 2735 mov     cx, 1Ah ;~ 01A2:18FB
	// 2736 repne movsw ;~ 01A2:18FE
cs=0x1a2;eip=0x0018fe; 	X(	REPNE MOVSW);	// 2736 repne movsw ;~ 01A2:18FE
cs=0x1a2;eip=0x001900; 	X(POP(ds));	// 2737 pop     ds ;~ 01A2:1900
cs=0x1a2;eip=0x001901; 	X(POP(si));	// 2738 pop     si ;~ 01A2:1901
cs=0x1a2;eip=0x001902; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 2739 mov     bx, [bp+arg_2] ;~ 01A2:1902
cs=0x1a2;eip=0x001905; 	X(MOV(*(raddr(ds,bx)), 0));	// 2740 mov     byte ptr [bx], 0 ;~ 01A2:1905
cs=0x1a2;eip=0x001908; 	T(ax = bp+var_4a);	// 2741 lea     ax, [bp+var_4A] ;~ 01A2:1908
cs=0x1a2;eip=0x00190b; 	X(PUSH(ax));	// 2742 push    ax ;~ 01A2:190B
cs=0x1a2;eip=0x00190c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2743 mov     ax, offset resID_byte1 ;~ 01A2:190C
cs=0x1a2;eip=0x00190f; 	X(PUSH(ax));	// 2744 push    ax              ; char * ;~ 01A2:190F
cs=0x1a2;eip=0x001910; 	J(CALLF(_strcpy,0));	// 2745 call    _strcpy ;~ 01A2:1910
cs=0x1a2;eip=0x001915; 	T(ADD(sp, 4));	// 2746 add     sp, 4 ;~ 01A2:1915
cs=0x1a2;eip=0x001918; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 2747 mov     ax, offset resID_byte1 ;~ 01A2:1918
cs=0x1a2;eip=0x00191b; 	X(PUSH(ax));	// 2748 push    ax              ; char * ;~ 01A2:191B
cs=0x1a2;eip=0x00191c; 	J(CALLF(_strlen,0));	// 2749 call    _strlen ;~ 01A2:191C
cs=0x1a2;eip=0x001921; 	T(ADD(sp, 2));	// 2750 add     sp, 2 ;~ 01A2:1921
cs=0x1a2;eip=0x001924; 	T(INC(al));	// 2751 inc     al ;~ 01A2:1924
cs=0x1a2;eip=0x001926; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 2752 mov     [bp+var_16], al ;~ 01A2:1926
cs=0x1a2;eip=0x001929; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 2753 mov     bx, [bp+arg_2] ;~ 01A2:1929
cs=0x1a2;eip=0x00192c; 	X(MOV(*(raddr(ds,bx+1)), al));	// 2754 mov     [bx+1], al ;~ 01A2:192C
cs=0x1a2;eip=0x00192f; 	T(ax = bp+var_39);	// 2755 lea     ax, [bp+var_39] ;~ 01A2:192F
cs=0x1a2;eip=0x001932; 	X(PUSH(ax));	// 2756 push    ax ;~ 01A2:1932
cs=0x1a2;eip=0x001933; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2757 mov     al, [bp+var_16] ;~ 01A2:1933
cs=0x1a2;eip=0x001936; 	T(CBW);	// 2758 cbw ;~ 01A2:1936
cs=0x1a2;eip=0x001937; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2759 add     ax, offset resID_byte1 ;~ 01A2:1937
cs=0x1a2;eip=0x00193a; 	X(PUSH(ax));	// 2760 push    ax              ; char * ;~ 01A2:193A
cs=0x1a2;eip=0x00193b; 	J(CALLF(_strcpy,0));	// 2761 call    _strcpy ;~ 01A2:193B
cs=0x1a2;eip=0x001940; 	T(ADD(sp, 4));	// 2762 add     sp, 4 ;~ 01A2:1940
cs=0x1a2;eip=0x001943; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2763 mov     al, [bp+var_16] ;~ 01A2:1943
cs=0x1a2;eip=0x001946; 	T(CBW);	// 2764 cbw ;~ 01A2:1946
cs=0x1a2;eip=0x001947; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2765 add     ax, offset resID_byte1 ;~ 01A2:1947
cs=0x1a2;eip=0x00194a; 	X(PUSH(ax));	// 2766 push    ax              ; char * ;~ 01A2:194A
cs=0x1a2;eip=0x00194b; 	J(CALLF(_strlen,0));	// 2767 call    _strlen ;~ 01A2:194B
cs=0x1a2;eip=0x001950; 	T(ADD(sp, 2));	// 2768 add     sp, 2 ;~ 01A2:1950
cs=0x1a2;eip=0x001953; 	T(INC(al));	// 2769 inc     al ;~ 01A2:1953
cs=0x1a2;eip=0x001955; 	X(ADD(*(raddr(ss,bp+var_16)), al));	// 2770 add     [bp+var_16], al ;~ 01A2:1955
cs=0x1a2;eip=0x001958; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 2771 mov     bx, [bp+arg_2] ;~ 01A2:1958
cs=0x1a2;eip=0x00195b; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2772 mov     al, [bp+var_16] ;~ 01A2:195B
cs=0x1a2;eip=0x00195e; 	X(MOV(*(raddr(ds,bx+2)), al));	// 2773 mov     [bx+2], al ;~ 01A2:195E
cs=0x1a2;eip=0x001961; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2774 mov     al, [bp+var_16] ;~ 01A2:1961
cs=0x1a2;eip=0x001964; 	T(CBW);	// 2775 cbw ;~ 01A2:1964
cs=0x1a2;eip=0x001965; 	T(MOV(si, ax));	// 2776 mov     si, ax ;~ 01A2:1965
cs=0x1a2;eip=0x001967; 	T(ADD(si, offset(dseg,resid_byte1)));	// 2777 add     si, offset resID_byte1 ;~ 01A2:1967
cs=0x1a2;eip=0x00196b; 	X(MOV(*(raddr(ds,si)), 0));	// 2778 mov     byte ptr [si], 0 ;~ 01A2:196B
cs=0x1a2;eip=0x00196e; 	T(CMP(*(raddr(ss,bp+var_21)), 1));	// 2779 cmp     [bp+var_21], 1 ;~ 01A2:196E
cs=0x1a2;eip=0x001972; 	J(JNZ(loc_11981));	// 2780 jnz     short loc_11981 ;~ 01A2:1972
cs=0x1a2;eip=0x001974; 	T(MOV(ax, offset(dseg,asc_3bab7)));	// 2781 mov     ax, offset asc_3BAB7 ; "(" ;~ 01A2:1974
cs=0x1a2;eip=0x001977; 	X(PUSH(ax));	// 2782 push    ax ;~ 01A2:1977
cs=0x1a2;eip=0x001978; 	X(PUSH(si));	// 2783 push    si              ; char * ;~ 01A2:1978
cs=0x1a2;eip=0x001979; 	J(CALLF(_strcat,0));	// 2784 call    _strcat ;~ 01A2:1979
cs=0x1a2;eip=0x00197e; 	T(ADD(sp, 4));	// 2785 add     sp, 4 ;~ 01A2:197E
loc_11981:
	// 4472 
cs=0x1a2;eip=0x001981; 	T(ax = bp+var_20);	// 2788 lea     ax, [bp+var_20] ;~ 01A2:1981
cs=0x1a2;eip=0x001984; 	X(PUSH(ax));	// 2789 push    ax ;~ 01A2:1984
cs=0x1a2;eip=0x001985; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2790 mov     al, [bp+var_16] ;~ 01A2:1985
cs=0x1a2;eip=0x001988; 	T(CBW);	// 2791 cbw ;~ 01A2:1988
cs=0x1a2;eip=0x001989; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2792 add     ax, offset resID_byte1 ;~ 01A2:1989
cs=0x1a2;eip=0x00198c; 	X(PUSH(ax));	// 2793 push    ax              ; char * ;~ 01A2:198C
cs=0x1a2;eip=0x00198d; 	J(CALLF(_strcat,0));	// 2794 call    _strcat ;~ 01A2:198D
cs=0x1a2;eip=0x001992; 	T(ADD(sp, 4));	// 2795 add     sp, 4 ;~ 01A2:1992
cs=0x1a2;eip=0x001995; 	T(CMP(*(raddr(ss,bp+var_21)), 1));	// 2796 cmp     [bp+var_21], 1 ;~ 01A2:1995
cs=0x1a2;eip=0x001999; 	J(JNZ(loc_119af));	// 2797 jnz     short loc_119AF ;~ 01A2:1999
cs=0x1a2;eip=0x00199b; 	T(MOV(ax, offset(dseg,asc_3bab9)));	// 2798 mov     ax, offset asc_3BAB9 ; ")" ;~ 01A2:199B
cs=0x1a2;eip=0x00199e; 	X(PUSH(ax));	// 2799 push    ax ;~ 01A2:199E
cs=0x1a2;eip=0x00199f; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2800 mov     al, [bp+var_16] ;~ 01A2:199F
cs=0x1a2;eip=0x0019a2; 	T(CBW);	// 2801 cbw ;~ 01A2:19A2
cs=0x1a2;eip=0x0019a3; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2802 add     ax, offset resID_byte1 ;~ 01A2:19A3
cs=0x1a2;eip=0x0019a6; 	X(PUSH(ax));	// 2803 push    ax              ; char * ;~ 01A2:19A6
cs=0x1a2;eip=0x0019a7; 	J(CALLF(_strcat,0));	// 2804 call    _strcat ;~ 01A2:19A7
cs=0x1a2;eip=0x0019ac; 	T(ADD(sp, 4));	// 2805 add     sp, 4 ;~ 01A2:19AC
loc_119af:
	// 4473 
cs=0x1a2;eip=0x0019af; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2808 mov     al, [bp+var_16] ;~ 01A2:19AF
cs=0x1a2;eip=0x0019b2; 	T(CBW);	// 2809 cbw ;~ 01A2:19B2
cs=0x1a2;eip=0x0019b3; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2810 add     ax, offset resID_byte1 ;~ 01A2:19B3
cs=0x1a2;eip=0x0019b6; 	X(PUSH(ax));	// 2811 push    ax              ; char * ;~ 01A2:19B6
cs=0x1a2;eip=0x0019b7; 	J(CALLF(_strlen,0));	// 2812 call    _strlen ;~ 01A2:19B7
cs=0x1a2;eip=0x0019bc; 	T(ADD(sp, 2));	// 2813 add     sp, 2 ;~ 01A2:19BC
cs=0x1a2;eip=0x0019bf; 	T(INC(al));	// 2814 inc     al ;~ 01A2:19BF
cs=0x1a2;eip=0x0019c1; 	X(ADD(*(raddr(ss,bp+var_16)), al));	// 2815 add     [bp+var_16], al ;~ 01A2:19C1
cs=0x1a2;eip=0x0019c4; 	T(MOV(ax, framespersec));	// 2816 mov     ax, framespersec ;~ 01A2:19C4
cs=0x1a2;eip=0x0019c7; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 2817 mov     [bp+var_14], ax ;~ 01A2:19C7
cs=0x1a2;eip=0x0019ca; 	X(MOV(framespersec, 0x14));	// 2818 mov     framespersec, 14h ;~ 01A2:19CA
cs=0x1a2;eip=0x0019d0; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FFFF));	// 2819 cmp     [bp+var_18], 0FFFFh ;~ 01A2:19D0
cs=0x1a2;eip=0x0019d4; 	J(JZ(loc_119e0));	// 2820 jz      short loc_119E0 ;~ 01A2:19D4
cs=0x1a2;eip=0x0019d6; 	T(MOV(ax, 1));	// 2821 mov     ax, 1 ;~ 01A2:19D6
cs=0x1a2;eip=0x0019d9; 	X(PUSH(ax));	// 2822 push    ax ;~ 01A2:19D9
cs=0x1a2;eip=0x0019da; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 2823 push    [bp+var_18] ;~ 01A2:19DA
cs=0x1a2;eip=0x0019dd; 	J(JMP(loc_119e7));	// 2824 jmp     short loc_119E7 ;~ 01A2:19DD
loc_119e0:
	// 4474 
cs=0x1a2;eip=0x0019e0; 	T(MOV(ax, 1));	// 2829 mov     ax, 1 ;~ 01A2:19E0
cs=0x1a2;eip=0x0019e3; 	X(PUSH(ax));	// 2830 push    ax              ; int ;~ 01A2:19E3
cs=0x1a2;eip=0x0019e4; 	T(SUB(ax, ax));	// 2831 sub     ax, ax ;~ 01A2:19E4
cs=0x1a2;eip=0x0019e6; 	X(PUSH(ax));	// 2832 push    ax ;~ 01A2:19E6
loc_119e7:
	// 4475 
cs=0x1a2;eip=0x0019e7; 	T(ax = bp+var_12);	// 2835 lea     ax, [bp+var_12] ;~ 01A2:19E7
cs=0x1a2;eip=0x0019ea; 	X(PUSH(ax));	// 2836 push    ax              ; char * ;~ 01A2:19EA
cs=0x1a2;eip=0x0019eb; 	J(CALLF(format_frame_as_string,0));	// 2837 call    format_frame_as_string ;~ 01A2:19EB
cs=0x1a2;eip=0x0019f0; 	T(ADD(sp, 6));	// 2838 add     sp, 6 ;~ 01A2:19F0
cs=0x1a2;eip=0x0019f3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 2839 mov     bx, [bp+arg_2] ;~ 01A2:19F3
cs=0x1a2;eip=0x0019f6; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2840 mov     al, [bp+var_16] ;~ 01A2:19F6
cs=0x1a2;eip=0x0019f9; 	X(MOV(*(raddr(ds,bx+3)), al));	// 2841 mov     [bx+3], al ;~ 01A2:19F9
cs=0x1a2;eip=0x0019fc; 	T(ax = bp+var_12);	// 2842 lea     ax, [bp+var_12] ;~ 01A2:19FC
cs=0x1a2;eip=0x0019ff; 	X(PUSH(ax));	// 2843 push    ax ;~ 01A2:19FF
cs=0x1a2;eip=0x001a00; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 2844 mov     al, [bp+var_16] ;~ 01A2:1A00
cs=0x1a2;eip=0x001a03; 	T(CBW);	// 2845 cbw ;~ 01A2:1A03
cs=0x1a2;eip=0x001a04; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 2846 add     ax, offset resID_byte1 ;~ 01A2:1A04
cs=0x1a2;eip=0x001a07; 	X(PUSH(ax));	// 2847 push    ax              ; char * ;~ 01A2:1A07
cs=0x1a2;eip=0x001a08; 	J(CALLF(_strcpy,0));	// 2848 call    _strcpy ;~ 01A2:1A08
cs=0x1a2;eip=0x001a0d; 	T(ADD(sp, 4));	// 2849 add     sp, 4 ;~ 01A2:1A0D
cs=0x1a2;eip=0x001a10; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 2850 mov     ax, [bp+var_14] ;~ 01A2:1A10
cs=0x1a2;eip=0x001a13; 	X(MOV(framespersec, ax));	// 2851 mov     framespersec, ax ;~ 01A2:1A13
cs=0x1a2;eip=0x001a16; 	X(POP(si));	// 2852 pop     si ;~ 01A2:1A16
cs=0x1a2;eip=0x001a17; 	X(POP(di));	// 2853 pop     di ;~ 01A2:1A17
cs=0x1a2;eip=0x001a18; 	T(MOV(sp, bp));	// 2854 mov     sp, bp ;~ 01A2:1A18
cs=0x1a2;eip=0x001a1a; 	X(POP(bp));	// 2855 pop     bp ;~ 01A2:1A1A
cs=0x1a2;eip=0x001a1b; 	J(RETF(0));	// 2856 retf ;~ 01A2:1A1B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_11981: 	goto loc_11981;
        case m2c::kloc_119af: 	goto loc_119af;
        case m2c::kloc_119e0: 	goto loc_119e0;
        case m2c::kloc_119e7: 	goto loc_119e7;
        case m2c::kprint_highscore_entry: 	goto print_highscore_entry;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool enter_hiscore(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    enter_hiscore:
    _begin:
#undef var_3c
#define var_3c -0x3C
	// 2867 var_3C          = dword ptr -3Ch ;~ 01A2:1A1C
#undef var_38
#define var_38 -0x38
	// 2868 var_38          = byte ptr -38h ;~ 01A2:1A1C
#undef var_36
#define var_36 -0x36
	// 2869 var_36          = byte ptr -36h ;~ 01A2:1A1C
#undef var_25
#define var_25 -0x25
	// 2870 var_25          = byte ptr -25h ;~ 01A2:1A1C
#undef var_d
#define var_d -0x0D
	// 2871 var_D           = byte ptr -0Dh ;~ 01A2:1A1C
#undef var_c
#define var_c -0x0C
	// 2872 var_C           = byte ptr -0Ch ;~ 01A2:1A1C
#undef var_a
#define var_a -0x0A
	// 2873 var_A           = byte ptr -0Ah ;~ 01A2:1A1C
#undef var_9
#define var_9 -9
	// 2874 var_9           = byte ptr -9 ;~ 01A2:1A1C
#undef var_4
#define var_4 -4
	// 2875 var_4           = word ptr -4 ;~ 01A2:1A1C
#undef var_2
#define var_2 -2
	// 2876 var_2           = byte ptr -2 ;~ 01A2:1A1C
#undef arg_0
#define arg_0 6
	// 2877 arg_0           = word ptr  6 ;~ 01A2:1A1C
#undef arg_2
#define arg_2 8
	// 2878 arg_2           = word ptr  8 ;~ 01A2:1A1C
#undef arg_4
#define arg_4 0x0A
	// 2879 arg_4           = word ptr  0Ah ;~ 01A2:1A1C
#undef arg_6
#define arg_6 0x0C
	// 2880 arg_6           = byte ptr  0Ch ;~ 01A2:1A1C
cs=0x1a2;eip=0x001a1c; 	X(PUSH(bp));	// 2882 push    bp ;~ 01A2:1A1C
cs=0x1a2;eip=0x001a1d; 	T(MOV(bp, sp));	// 2883 mov     bp, sp ;~ 01A2:1A1D
cs=0x1a2;eip=0x001a1f; 	T(SUB(sp, 0x3C));	// 2884 sub     sp, 3Ch ;~ 01A2:1A1F
cs=0x1a2;eip=0x001a22; 	X(PUSH(di));	// 2885 push    di ;~ 01A2:1A22
cs=0x1a2;eip=0x001a23; 	X(PUSH(si));	// 2886 push    si ;~ 01A2:1A23
cs=0x1a2;eip=0x001a24; 	T(CMP(framespersec, 0x0A));	// 2887 cmp     framespersec, 0Ah ;~ 01A2:1A24
cs=0x1a2;eip=0x001a29; 	J(JNZ(loc_11a2e));	// 2888 jnz     short loc_11A2E ;~ 01A2:1A29
cs=0x1a2;eip=0x001a2b; 	X(SHL(*(dw*)(raddr(ss,bp+arg_0)), 1));	// 2889 shl     [bp+arg_0], 1 ;~ 01A2:1A2B
loc_11a2e:
	// 4476 
cs=0x1a2;eip=0x001a2e; 	T(LES(bx, td11_highscores));	// 2892 les     bx, td11_highscores ;~ 01A2:1A2E
cs=0x1a2;eip=0x001a32; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 2893 mov     ax, [bp+arg_0] ;~ 01A2:1A32
cs=0x1a2;eip=0x001a35; 	T(CMP(*(dw*)(raddr(es,bx+0x16A)), ax));	// 2894 cmp     es:[bx+16Ah], ax ;~ 01A2:1A35
cs=0x1a2;eip=0x001a3a; 	J(JA(loc_11a3f));	// 2895 ja      short loc_11A3F ;~ 01A2:1A3A
cs=0x1a2;eip=0x001a3c; 	J(JMP(loc_11baa));	// 2896 jmp     loc_11BAA ;~ 01A2:1A3C
loc_11a3f:
	// 4477 
cs=0x1a2;eip=0x001a3f; 	X(MOV(*(raddr(ss,bp+var_38)), 0));	// 2900 mov     [bp+var_38], 0 ;~ 01A2:1A3F
cs=0x1a2;eip=0x001a43; 	J(JMP(loc_11a5d));	// 2901 jmp     short loc_11A5D ;~ 01A2:1A43
loc_11a46:
	// 4478 
cs=0x1a2;eip=0x001a46; 	T(CMP(*(raddr(ss,bp+var_38)), 7));	// 2906 cmp     [bp+var_38], 7 ;~ 01A2:1A46
cs=0x1a2;eip=0x001a4a; 	J(JGE(loc_11a71));	// 2907 jge     short loc_11A71 ;~ 01A2:1A4A
cs=0x1a2;eip=0x001a4c; 	T(MOV(al, *(raddr(ss,bp+var_38))));	// 2908 mov     al, [bp+var_38] ;~ 01A2:1A4C
cs=0x1a2;eip=0x001a4f; 	T(CBW);	// 2909 cbw ;~ 01A2:1A4F
cs=0x1a2;eip=0x001a50; 	T(MOV(si, ax));	// 2910 mov     si, ax ;~ 01A2:1A50
cs=0x1a2;eip=0x001a52; 	T(MOV(bx, si));	// 2911 mov     bx, si ;~ 01A2:1A52
cs=0x1a2;eip=0x001a54; 	T(SHL(bx, 1));	// 2912 shl     bx, 1 ;~ 01A2:1A54
cs=0x1a2;eip=0x001a56; 	X(MOV(*(dw*)(((db*)&word_46170)+bx), si));	// 2913 mov     word_46170[bx], si ;~ 01A2:1A56
cs=0x1a2;eip=0x001a5a; 	X(INC(*(raddr(ss,bp+var_38))));	// 2914 inc     [bp+var_38] ;~ 01A2:1A5A
loc_11a5d:
	// 4479 
cs=0x1a2;eip=0x001a5d; 	T(MOV(al, 0x34));	// 2917 mov     al, 34h ; '4' ;~ 01A2:1A5D
cs=0x1a2;eip=0x001a5f; 	X(IMUL1_1(*(raddr(ss,bp+var_38))));	// 2918 imul    [bp+var_38] ;~ 01A2:1A5F
cs=0x1a2;eip=0x001a62; 	T(MOV(di, ax));	// 2919 mov     di, ax ;~ 01A2:1A62
cs=0x1a2;eip=0x001a64; 	T(LES(bx, td11_highscores));	// 2920 les     bx, td11_highscores ;~ 01A2:1A64
cs=0x1a2;eip=0x001a68; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 2921 mov     ax, [bp+arg_0] ;~ 01A2:1A68
cs=0x1a2;eip=0x001a6b; 	T(CMP(*(dw*)(raddr(es,bx+di+0x32)), ax));	// 2922 cmp     es:[bx+di+32h], ax ;~ 01A2:1A6B
cs=0x1a2;eip=0x001a6f; 	J(JBE(loc_11a46));	// 2923 jbe     short loc_11A46 ;~ 01A2:1A6F
loc_11a71:
	// 4480 
cs=0x1a2;eip=0x001a71; 	T(MOV(al, *(raddr(ss,bp+var_38))));	// 2926 mov     al, [bp+var_38] ;~ 01A2:1A71
cs=0x1a2;eip=0x001a74; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 2927 mov     [bp+var_2], al ;~ 01A2:1A74
cs=0x1a2;eip=0x001a77; 	X(MOV(byte_449ce, al));	// 2928 mov     byte_449CE, al ;~ 01A2:1A77
cs=0x1a2;eip=0x001a7a; 	J(JMP(loc_11a8d));	// 2929 jmp     short loc_11A8D ;~ 01A2:1A7A
loc_11a7c:
	// 4481 
cs=0x1a2;eip=0x001a7c; 	T(MOV(al, *(raddr(ss,bp+var_38))));	// 2933 mov     al, [bp+var_38] ;~ 01A2:1A7C
cs=0x1a2;eip=0x001a7f; 	T(CBW);	// 2934 cbw ;~ 01A2:1A7F
cs=0x1a2;eip=0x001a80; 	T(MOV(si, ax));	// 2935 mov     si, ax ;~ 01A2:1A80
cs=0x1a2;eip=0x001a82; 	T(MOV(bx, si));	// 2936 mov     bx, si ;~ 01A2:1A82
cs=0x1a2;eip=0x001a84; 	T(SHL(bx, 1));	// 2937 shl     bx, 1 ;~ 01A2:1A84
cs=0x1a2;eip=0x001a86; 	X(MOV(*(dw*)(((db*)&word_46172)+bx), si));	// 2938 mov     word_46172[bx], si ;~ 01A2:1A86
cs=0x1a2;eip=0x001a8a; 	X(INC(*(raddr(ss,bp+var_38))));	// 2939 inc     [bp+var_38] ;~ 01A2:1A8A
loc_11a8d:
	// 4482 
cs=0x1a2;eip=0x001a8d; 	T(CMP(*(raddr(ss,bp+var_38)), 6));	// 2942 cmp     [bp+var_38], 6 ;~ 01A2:1A8D
cs=0x1a2;eip=0x001a91; 	J(JL(loc_11a7c));	// 2943 jl      short loc_11A7C ;~ 01A2:1A91
cs=0x1a2;eip=0x001a93; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 2944 mov     al, [bp+var_2] ;~ 01A2:1A93
cs=0x1a2;eip=0x001a96; 	T(CBW);	// 2945 cbw ;~ 01A2:1A96
cs=0x1a2;eip=0x001a97; 	T(MOV(bx, ax));	// 2946 mov     bx, ax ;~ 01A2:1A97
cs=0x1a2;eip=0x001a99; 	T(SHL(bx, 1));	// 2947 shl     bx, 1 ;~ 01A2:1A99
cs=0x1a2;eip=0x001a9b; 	X(MOV(*(dw*)(((db*)&word_46170)+bx), 6));	// 2948 mov     word_46170[bx], 6 ;~ 01A2:1A9B
cs=0x1a2;eip=0x001aa1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 2949 mov     ax, [bp+arg_0] ;~ 01A2:1AA1
cs=0x1a2;eip=0x001aa4; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 2950 mov     [bp+var_4], ax ;~ 01A2:1AA4
cs=0x1a2;eip=0x001aa7; 	X(MOV(*(raddr(ss,bp+var_36)), 0));	// 2951 mov     [bp+var_36], 0 ;~ 01A2:1AA7
cs=0x1a2;eip=0x001aab; 	T(MOV(ax, offset(dseg,gnam_string)));	// 2952 mov     ax, offset gnam_string ;~ 01A2:1AAB
cs=0x1a2;eip=0x001aae; 	X(PUSH(ax));	// 2953 push    ax ;~ 01A2:1AAE
cs=0x1a2;eip=0x001aaf; 	T(ax = bp+var_25);	// 2954 lea     ax, [bp+var_25] ;~ 01A2:1AAF
cs=0x1a2;eip=0x001ab2; 	X(PUSH(ax));	// 2955 push    ax              ; char * ;~ 01A2:1AB2
cs=0x1a2;eip=0x001ab3; 	J(CALLF(_strcpy,0));	// 2956 call    _strcpy ;~ 01A2:1AB3
cs=0x1a2;eip=0x001ab8; 	T(ADD(sp, 4));	// 2957 add     sp, 4 ;~ 01A2:1AB8
cs=0x1a2;eip=0x001abb; 	T(MOV(al, *(raddr(ss,bp+arg_6))));	// 2958 mov     al, [bp+arg_6] ;~ 01A2:1ABB
cs=0x1a2;eip=0x001abe; 	X(MOV(*(raddr(ss,bp+var_d)), al));	// 2959 mov     [bp+var_D], al ;~ 01A2:1ABE
cs=0x1a2;eip=0x001ac1; 	T(CMP(byte_449aa, 0));	// 2960 cmp     byte_449AA, 0 ;~ 01A2:1AC1
cs=0x1a2;eip=0x001ac6; 	J(JZ(loc_11ae6));	// 2961 jz      short loc_11AE6 ;~ 01A2:1AC6
cs=0x1a2;eip=0x001ac8; 	T(MOV(ax, offset(dseg,unk_46464)));	// 2962 mov     ax, offset unk_46464 ;~ 01A2:1AC8
cs=0x1a2;eip=0x001acb; 	X(PUSH(ax));	// 2963 push    ax ;~ 01A2:1ACB
cs=0x1a2;eip=0x001acc; 	T(ax = bp+var_c);	// 2964 lea     ax, [bp+var_C] ;~ 01A2:1ACC
cs=0x1a2;eip=0x001acf; 	X(PUSH(ax));	// 2965 push    ax              ; char * ;~ 01A2:1ACF
cs=0x1a2;eip=0x001ad0; 	J(CALLF(_strcpy,0));	// 2966 call    _strcpy ;~ 01A2:1AD0
cs=0x1a2;eip=0x001ad5; 	T(ADD(sp, 4));	// 2967 add     sp, 4 ;~ 01A2:1AD5
cs=0x1a2;eip=0x001ad8; 	X(MOV(*(raddr(ss,bp+var_a)), 0x2F));	// 2968 mov     [bp+var_A], 2Fh ; '/' ;~ 01A2:1AD8
cs=0x1a2;eip=0x001adc; 	T(MOV(ax, offset(dseg,gsna_string)));	// 2969 mov     ax, offset gsna_string ;~ 01A2:1ADC
cs=0x1a2;eip=0x001adf; 	X(PUSH(ax));	// 2970 push    ax ;~ 01A2:1ADF
cs=0x1a2;eip=0x001ae0; 	T(ax = bp+var_9);	// 2971 lea     ax, [bp+var_9] ;~ 01A2:1AE0
cs=0x1a2;eip=0x001ae3; 	J(JMP(loc_11aed));	// 2972 jmp     short loc_11AED ;~ 01A2:1AE3
loc_11ae6:
	// 4483 
cs=0x1a2;eip=0x001ae6; 	T(MOV(ax, offset(dseg,asc_3babb)));	// 2977 mov     ax, offset asc_3BABB ; " " ;~ 01A2:1AE6
cs=0x1a2;eip=0x001ae9; 	X(PUSH(ax));	// 2978 push    ax ;~ 01A2:1AE9
cs=0x1a2;eip=0x001aea; 	T(ax = bp+var_c);	// 2979 lea     ax, [bp+var_C] ;~ 01A2:1AEA
loc_11aed:
	// 4484 
cs=0x1a2;eip=0x001aed; 	X(PUSH(ax));	// 2982 push    ax              ; char * ;~ 01A2:1AED
cs=0x1a2;eip=0x001aee; 	J(CALLF(_strcpy,0));	// 2983 call    _strcpy ;~ 01A2:1AEE
cs=0x1a2;eip=0x001af3; 	T(ADD(sp, 4));	// 2984 add     sp, 4 ;~ 01A2:1AF3
cs=0x1a2;eip=0x001af6; 	T(LES(bx, td11_highscores));	// 2985 les     bx, td11_highscores ;~ 01A2:1AF6
cs=0x1a2;eip=0x001afa; 	T(di = bx+0x138);	// 2986 lea     di, [bx+138h] ;~ 01A2:1AFA
cs=0x1a2;eip=0x001afe; 	T(si = bp+var_36);	// 2987 lea     si, [bp+var_36] ;~ 01A2:1AFE
cs=0x1a2;eip=0x001b01; 	T(MOV(cx, 0x1A));	// 2988 mov     cx, 1Ah ;~ 01A2:1B01
	// 2989 repne movsw ;~ 01A2:1B04
cs=0x1a2;eip=0x001b04; 	X(	REPNE MOVSW);	// 2989 repne movsw ;~ 01A2:1B04
cs=0x1a2;eip=0x001b06; 	J(CALLF(sprite_copy_wnd_to_1,0));	// 2990 call    sprite_copy_wnd_to_1 ;~ 01A2:1B06
cs=0x1a2;eip=0x001b0b; 	X(PUSH(cs));	// 2991 push    cs ;~ 01A2:1B0B
cs=0x1a2;eip=0x001b0c; 	J(CALL(highscore_text_unk,0));	// 2992 call    near ptr highscore_text_unk ;~ 01A2:1B0C
cs=0x1a2;eip=0x001b0f; 	T(MOV(ax, 0x0FFFF));	// 2993 mov     ax, 0FFFFh ;~ 01A2:1B0F
cs=0x1a2;eip=0x001b12; 	X(PUSH(ax));	// 2994 push    ax ;~ 01A2:1B12
cs=0x1a2;eip=0x001b13; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 2995 push    word ptr wndsprite+2 ;~ 01A2:1B13
cs=0x1a2;eip=0x001b17; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 2996 push    word ptr wndsprite ;~ 01A2:1B17
cs=0x1a2;eip=0x001b1b; 	J(CALLF(sprite_blit_to_video,0));	// 2997 call    sprite_blit_to_video ;~ 01A2:1B1B
cs=0x1a2;eip=0x001b20; 	T(ADD(sp, 6));	// 2998 add     sp, 6 ;~ 01A2:1B20
cs=0x1a2;eip=0x001b23; 	T(SUB(ax, ax));	// 2999 sub     ax, ax ;~ 01A2:1B23
cs=0x1a2;eip=0x001b25; 	X(PUSH(ax));	// 3000 push    ax ;~ 01A2:1B25
cs=0x1a2;eip=0x001b26; 	T(ax = bp+var_3c);	// 3001 lea     ax, [bp+var_3C] ;~ 01A2:1B26
cs=0x1a2;eip=0x001b29; 	X(PUSH(ax));	// 3002 push    ax ;~ 01A2:1B29
cs=0x1a2;eip=0x001b2a; 	X(PUSH(dialogarg2));	// 3003 push    dialogarg2 ;~ 01A2:1B2A
cs=0x1a2;eip=0x001b2e; 	T(MOV(ax, 0x0FFFF));	// 3004 mov     ax, 0FFFFh ;~ 01A2:1B2E
cs=0x1a2;eip=0x001b31; 	X(PUSH(ax));	// 3005 push    ax ;~ 01A2:1B31
cs=0x1a2;eip=0x001b32; 	X(PUSH(ax));	// 3006 push    ax ;~ 01A2:1B32
cs=0x1a2;eip=0x001b33; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 3007 push    [bp+arg_4] ;~ 01A2:1B33
cs=0x1a2;eip=0x001b36; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 3008 push    [bp+arg_2] ;~ 01A2:1B36
cs=0x1a2;eip=0x001b39; 	T(SUB(ax, ax));	// 3009 sub     ax, ax ;~ 01A2:1B39
cs=0x1a2;eip=0x001b3b; 	X(PUSH(ax));	// 3010 push    ax ;~ 01A2:1B3B
cs=0x1a2;eip=0x001b3c; 	T(MOV(ax, 3));	// 3011 mov     ax, 3 ;~ 01A2:1B3C
cs=0x1a2;eip=0x001b3f; 	X(PUSH(ax));	// 3012 push    ax ;~ 01A2:1B3F
cs=0x1a2;eip=0x001b40; 	J(CALLF(show_dialog,0));	// 3013 call    show_dialog ;~ 01A2:1B40
cs=0x1a2;eip=0x001b45; 	T(ADD(sp, 0x12));	// 3014 add     sp, 12h ;~ 01A2:1B45
cs=0x1a2;eip=0x001b48; 	J(CALLF(check_input,0));	// 3015 call    check_input ;~ 01A2:1B48
cs=0x1a2;eip=0x001b4d; 	T(MOV(ax, offset(dseg,terraincenterpos)+0x22));	// 3016 mov     ax, (offset terraincenterpos+22h) ;~ 01A2:1B4D
cs=0x1a2;eip=0x001b50; 	T(CWD);	// 3017 cwd ;~ 01A2:1B50
cs=0x1a2;eip=0x001b51; 	X(PUSH(dx));	// 3018 push    dx              ; int ;~ 01A2:1B51
cs=0x1a2;eip=0x001b52; 	X(PUSH(ax));	// 3019 push    ax              ; int ;~ 01A2:1B52
cs=0x1a2;eip=0x001b53; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_3c+2)))));	// 3020 push    word ptr [bp+var_3C+2] ; int ;~ 01A2:1B53
cs=0x1a2;eip=0x001b56; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_3c)))));	// 3021 push    word ptr [bp+var_3C] ; int ;~ 01A2:1B56
cs=0x1a2;eip=0x001b59; 	T(MOV(ax, 0x10));	// 3022 mov     ax, 10h ;~ 01A2:1B59
cs=0x1a2;eip=0x001b5c; 	X(PUSH(ax));	// 3023 push    ax ;~ 01A2:1B5C
cs=0x1a2;eip=0x001b5d; 	T(MOV(ax, offset(dseg,byte_459e0)));	// 3024 mov     ax, offset byte_459E0 ;~ 01A2:1B5D
cs=0x1a2;eip=0x001b60; 	X(PUSH(ax));	// 3025 push    ax              ; char * ;~ 01A2:1B60
cs=0x1a2;eip=0x001b61; 	J(CALLF(call_read_line,0));	// 3026 call    call_read_line ;~ 01A2:1B61
cs=0x1a2;eip=0x001b66; 	T(ADD(sp, 0x0C));	// 3027 add     sp, 0Ch ;~ 01A2:1B66
cs=0x1a2;eip=0x001b69; 	T(MOV(ax, offset(dseg,byte_459e0)));	// 3028 mov     ax, offset byte_459E0 ;~ 01A2:1B69
cs=0x1a2;eip=0x001b6c; 	X(PUSH(ax));	// 3029 push    ax ;~ 01A2:1B6C
cs=0x1a2;eip=0x001b6d; 	T(ax = bp+var_36);	// 3030 lea     ax, [bp+var_36] ;~ 01A2:1B6D
cs=0x1a2;eip=0x001b70; 	X(PUSH(ax));	// 3031 push    ax              ; char * ;~ 01A2:1B70
cs=0x1a2;eip=0x001b71; 	J(CALLF(_strcpy,0));	// 3032 call    _strcpy ;~ 01A2:1B71
cs=0x1a2;eip=0x001b76; 	T(ADD(sp, 4));	// 3033 add     sp, 4 ;~ 01A2:1B76
cs=0x1a2;eip=0x001b79; 	T(LES(bx, td11_highscores));	// 3034 les     bx, td11_highscores ;~ 01A2:1B79
cs=0x1a2;eip=0x001b7d; 	T(di = bx+0x138);	// 3035 lea     di, [bx+138h] ;~ 01A2:1B7D
cs=0x1a2;eip=0x001b81; 	T(si = bp+var_36);	// 3036 lea     si, [bp+var_36] ;~ 01A2:1B81
cs=0x1a2;eip=0x001b84; 	T(MOV(cx, 0x1A));	// 3037 mov     cx, 1Ah ;~ 01A2:1B84
	// 3038 repne movsw ;~ 01A2:1B87
cs=0x1a2;eip=0x001b87; 	X(	REPNE MOVSW);	// 3038 repne movsw ;~ 01A2:1B87
cs=0x1a2;eip=0x001b89; 	J(CALLF(sprite_copy_wnd_to_1,0));	// 3039 call    sprite_copy_wnd_to_1 ;~ 01A2:1B89
cs=0x1a2;eip=0x001b8e; 	X(PUSH(cs));	// 3040 push    cs ;~ 01A2:1B8E
cs=0x1a2;eip=0x001b8f; 	J(CALL(highscore_text_unk,0));	// 3041 call    near ptr highscore_text_unk ;~ 01A2:1B8F
cs=0x1a2;eip=0x001b92; 	T(MOV(ax, 0x0FFFF));	// 3042 mov     ax, 0FFFFh ;~ 01A2:1B92
cs=0x1a2;eip=0x001b95; 	X(PUSH(ax));	// 3043 push    ax ;~ 01A2:1B95
cs=0x1a2;eip=0x001b96; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 3044 push    word ptr wndsprite+2 ;~ 01A2:1B96
cs=0x1a2;eip=0x001b9a; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 3045 push    word ptr wndsprite ;~ 01A2:1B9A
cs=0x1a2;eip=0x001b9e; 	J(CALLF(sprite_blit_to_video,0));	// 3046 call    sprite_blit_to_video ;~ 01A2:1B9E
cs=0x1a2;eip=0x001ba3; 	T(ADD(sp, 6));	// 3047 add     sp, 6 ;~ 01A2:1BA3
cs=0x1a2;eip=0x001ba6; 	X(PUSH(cs));	// 3048 push    cs ;~ 01A2:1BA6
cs=0x1a2;eip=0x001ba7; 	J(CALL(highscore_write_b,0));	// 3049 call    near ptr highscore_write_b ;~ 01A2:1BA7
loc_11baa:
	// 4485 
cs=0x1a2;eip=0x001baa; 	X(PUSH(cs));	// 3052 push    cs ;~ 01A2:1BAA
cs=0x1a2;eip=0x001bab; 	J(CALL(highscore_text_unk,0));	// 3053 call    near ptr highscore_text_unk ;~ 01A2:1BAB
cs=0x1a2;eip=0x001bae; 	X(POP(si));	// 3054 pop     si ;~ 01A2:1BAE
cs=0x1a2;eip=0x001baf; 	X(POP(di));	// 3055 pop     di ;~ 01A2:1BAF
cs=0x1a2;eip=0x001bb0; 	T(MOV(sp, bp));	// 3056 mov     sp, bp ;~ 01A2:1BB0
cs=0x1a2;eip=0x001bb2; 	X(POP(bp));	// 3057 pop     bp ;~ 01A2:1BB2
cs=0x1a2;eip=0x001bb3; 	J(RETF(0));	// 3058 retf ;~ 01A2:1BB3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kenter_hiscore: 	goto enter_hiscore;
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
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool highscore_write_b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    highscore_write_b:
    _begin:
#undef var_16e
#define var_16e -0x16E
	// 3068 var_16E         = word ptr -16Eh ;~ 01A2:1BB4
#undef var_16c
#define var_16c -0x16C
	// 3069 var_16C         = byte ptr -16Ch ;~ 01A2:1BB4
cs=0x1a2;eip=0x001bb4; 	X(PUSH(bp));	// 3071 push    bp ;~ 01A2:1BB4
cs=0x1a2;eip=0x001bb5; 	T(MOV(bp, sp));	// 3072 mov     bp, sp ;~ 01A2:1BB5
cs=0x1a2;eip=0x001bb7; 	T(SUB(sp, 0x16E));	// 3073 sub     sp, 16Eh ;~ 01A2:1BB7
cs=0x1a2;eip=0x001bbb; 	X(PUSH(di));	// 3074 push    di ;~ 01A2:1BBB
cs=0x1a2;eip=0x001bbc; 	X(PUSH(si));	// 3075 push    si              ; char * ;~ 01A2:1BBC
cs=0x1a2;eip=0x001bbd; 	X(MOV(*(dw*)(raddr(ss,bp+var_16e)), 0));	// 3076 mov     [bp+var_16E], 0 ;~ 01A2:1BBD
loc_11bc3:
	// 4486 
cs=0x1a2;eip=0x001bc3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16e))));	// 3079 mov     bx, [bp+var_16E] ;~ 01A2:1BC3
cs=0x1a2;eip=0x001bc7; 	T(SHL(bx, 1));	// 3080 shl     bx, 1 ;~ 01A2:1BC7
cs=0x1a2;eip=0x001bc9; 	T(MOV(ax, 0x34));	// 3081 mov     ax, 34h ; '4' ;~ 01A2:1BC9
cs=0x1a2;eip=0x001bcc; 	X(IMUL1_2(*(dw*)(((db*)&word_46170)+bx)));	// 3082 imul    word_46170[bx] ;~ 01A2:1BCC
cs=0x1a2;eip=0x001bd0; 	T(ADD(ax, *(dw*)(((db*)&td11_highscores))));	// 3083 add     ax, word ptr td11_highscores ;~ 01A2:1BD0
cs=0x1a2;eip=0x001bd4; 	T(MOV(dx, *(dw*)(((db*)&td11_highscores)+2)));	// 3084 mov     dx, word ptr td11_highscores+2 ;~ 01A2:1BD4
cs=0x1a2;eip=0x001bd8; 	T(MOV(cx, ax));	// 3085 mov     cx, ax ;~ 01A2:1BD8
cs=0x1a2;eip=0x001bda; 	T(MOV(ax, 0x34));	// 3086 mov     ax, 34h ; '4' ;~ 01A2:1BDA
cs=0x1a2;eip=0x001bdd; 	T(MOV(bx, dx));	// 3087 mov     bx, dx ;~ 01A2:1BDD
cs=0x1a2;eip=0x001bdf; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_16e))));	// 3088 imul    [bp+var_16E] ;~ 01A2:1BDF
cs=0x1a2;eip=0x001be3; 	T(MOV(si, ax));	// 3089 mov     si, ax ;~ 01A2:1BE3
cs=0x1a2;eip=0x001be5; 	T(di = bp+si+var_16c);	// 3090 lea     di, [bp+si+var_16C] ;~ 01A2:1BE5
cs=0x1a2;eip=0x001be9; 	T(MOV(si, cx));	// 3091 mov     si, cx ;~ 01A2:1BE9
cs=0x1a2;eip=0x001beb; 	X(PUSH(ss));	// 3092 push    ss ;~ 01A2:1BEB
cs=0x1a2;eip=0x001bec; 	X(POP(es));	// 3093 pop     es ;~ 01A2:1BEC
cs=0x1a2;eip=0x001bed; 	X(PUSH(ds));	// 3094 push    ds ;~ 01A2:1BED
cs=0x1a2;eip=0x001bee; 	T(MOV(ds, bx));	// 3095 mov     ds, bx ;~ 01A2:1BEE
cs=0x1a2;eip=0x001bf0; 	T(MOV(cx, 0x1A));	// 3096 mov     cx, 1Ah ;~ 01A2:1BF0
	// 3097 repne movsw ;~ 01A2:1BF3
cs=0x1a2;eip=0x001bf3; 	X(	REPNE MOVSW);	// 3097 repne movsw ;~ 01A2:1BF3
cs=0x1a2;eip=0x001bf5; 	X(POP(ds));	// 3098 pop     ds ;~ 01A2:1BF5
cs=0x1a2;eip=0x001bf6; 	X(INC(*(dw*)(raddr(ss,bp+var_16e))));	// 3099 inc     [bp+var_16E] ;~ 01A2:1BF6
cs=0x1a2;eip=0x001bfa; 	T(CMP(*(dw*)(raddr(ss,bp+var_16e)), 7));	// 3100 cmp     [bp+var_16E], 7 ;~ 01A2:1BFA
cs=0x1a2;eip=0x001bff; 	J(JL(loc_11bc3));	// 3101 jl      short loc_11BC3 ;~ 01A2:1BFF
cs=0x1a2;eip=0x001c01; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 3102 mov     ax, offset g_path_buf ;~ 01A2:1C01
cs=0x1a2;eip=0x001c04; 	X(PUSH(ax));	// 3103 push    ax              ; char * ;~ 01A2:1C04
cs=0x1a2;eip=0x001c05; 	T(MOV(ax, offset(dseg,a_hig)));	// 3104 mov     ax, offset a_hig ; ".hig" ;~ 01A2:1C05
cs=0x1a2;eip=0x001c08; 	X(PUSH(ax));	// 3105 push    ax              ; int ;~ 01A2:1C08
cs=0x1a2;eip=0x001c09; 	T(MOV(ax, offset(dseg,byte_449b1)));	// 3106 mov     ax, offset byte_449B1 ;~ 01A2:1C09
cs=0x1a2;eip=0x001c0c; 	X(PUSH(ax));	// 3107 push    ax ;~ 01A2:1C0C
cs=0x1a2;eip=0x001c0d; 	T(MOV(ax, 0x9C));	// 3108 mov     ax, 9Ch ; 'œ' ;~ 01A2:1C0D
cs=0x1a2;eip=0x001c10; 	X(PUSH(ax));	// 3109 push    ax              ; char * ;~ 01A2:1C10
cs=0x1a2;eip=0x001c11; 	J(CALLF(file_build_path,0));	// 3110 call    file_build_path ;~ 01A2:1C11
cs=0x1a2;eip=0x001c16; 	T(ADD(sp, 8));	// 3111 add     sp, 8 ;~ 01A2:1C16
cs=0x1a2;eip=0x001c19; 	X(MOV(g_is_busy, 1));	// 3112 mov     g_is_busy, 1 ;~ 01A2:1C19
cs=0x1a2;eip=0x001c1e; 	T(MOV(ax, 0x16C));	// 3113 mov     ax, 16Ch ;~ 01A2:1C1E
cs=0x1a2;eip=0x001c21; 	T(CWD);	// 3114 cwd ;~ 01A2:1C21
cs=0x1a2;eip=0x001c22; 	X(PUSH(dx));	// 3115 push    dx ;~ 01A2:1C22
cs=0x1a2;eip=0x001c23; 	X(PUSH(ax));	// 3116 push    ax ;~ 01A2:1C23
cs=0x1a2;eip=0x001c24; 	T(ax = bp+var_16c);	// 3117 lea     ax, [bp+var_16C] ;~ 01A2:1C24
cs=0x1a2;eip=0x001c28; 	X(PUSH(ss));	// 3118 push    ss ;~ 01A2:1C28
cs=0x1a2;eip=0x001c29; 	X(PUSH(ax));	// 3119 push    ax ;~ 01A2:1C29
cs=0x1a2;eip=0x001c2a; 	T(MOV(ax, 0x95F8));	// 3120 mov     ax, 95F8h ;~ 01A2:1C2A
cs=0x1a2;eip=0x001c2d; 	X(PUSH(ax));	// 3121 push    ax ;~ 01A2:1C2D
cs=0x1a2;eip=0x001c2e; 	J(CALLF(file_write_fatal,0));	// 3122 call    file_write_fatal ;~ 01A2:1C2E
cs=0x1a2;eip=0x001c33; 	T(ADD(sp, 0x0A));	// 3123 add     sp, 0Ah ;~ 01A2:1C33
cs=0x1a2;eip=0x001c36; 	X(MOV(g_is_busy, 0));	// 3124 mov     g_is_busy, 0 ;~ 01A2:1C36
cs=0x1a2;eip=0x001c3b; 	X(POP(si));	// 3125 pop     si ;~ 01A2:1C3B
cs=0x1a2;eip=0x001c3c; 	X(POP(di));	// 3126 pop     di ;~ 01A2:1C3C
cs=0x1a2;eip=0x001c3d; 	T(MOV(sp, bp));	// 3127 mov     sp, bp ;~ 01A2:1C3D
cs=0x1a2;eip=0x001c3f; 	X(POP(bp));	// 3128 pop     bp ;~ 01A2:1C3F
cs=0x1a2;eip=0x001c40; 	J(RETF(0));	// 3129 retf ;~ 01A2:1C40

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::khighscore_write_b: 	goto highscore_write_b;
        case m2c::kloc_11bc3: 	goto loc_11bc3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool run_car_menu(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    run_car_menu:
    _begin:
#undef var_10c
#define var_10c -0x10C
	// 3142 var_10C         = dword ptr -10Ch ;~ 01A2:1C42
#undef var_108
#define var_108 -0x108
	// 3143 var_108         = byte ptr -108h ;~ 01A2:1C42
#undef var_106
#define var_106 -0x106
	// 3144 var_106         = byte ptr -106h ;~ 01A2:1C42
#undef var_104
#define var_104 -0x104
	// 3145 var_104         = word ptr -104h ;~ 01A2:1C42
#undef var_102
#define var_102 -0x102
	// 3146 var_102         = word ptr -102h ;~ 01A2:1C42
#undef var_100
#define var_100 -0x100
	// 3147 var_100         = word ptr -100h ;~ 01A2:1C42
#undef var_fe
#define var_fe -0x0FE
	// 3148 var_FE          = word ptr -0FEh ;~ 01A2:1C42
#undef var_fc
#define var_fc -0x0FC
	// 3149 var_FC          = dword ptr -0FCh ;~ 01A2:1C42
#undef var_f8
#define var_f8 -0x0F8
	// 3150 var_F8          = word ptr -0F8h ;~ 01A2:1C42
#undef var_f6
#define var_f6 -0x0F6
	// 3151 var_F6          = byte ptr -0F6h ;~ 01A2:1C42
#undef var_f4
#define var_f4 -0x0F4
	// 3152 var_F4          = word ptr -0F4h ;~ 01A2:1C42
#undef var_f2
#define var_f2 -0x0F2
	// 3153 var_F2          = byte ptr -0F2h ;~ 01A2:1C42
#undef var_f0
#define var_f0 -0x0F0
	// 3154 var_F0          = byte ptr -0F0h ;~ 01A2:1C42
#undef var_ee
#define var_ee -0x0EE
	// 3155 var_EE          = byte ptr -0EEh ;~ 01A2:1C42
#undef var_ed
#define var_ed -0x0ED
	// 3156 var_ED          = byte ptr -0EDh ;~ 01A2:1C42
#undef var_ec
#define var_ec -0x0EC
	// 3157 var_EC          = byte ptr -0ECh ;~ 01A2:1C42
#undef var_eb
#define var_eb -0x0EB
	// 3158 var_EB          = byte ptr -0EBh ;~ 01A2:1C42
#undef var_ea
#define var_ea -0x0EA
	// 3159 var_EA          = byte ptr -0EAh ;~ 01A2:1C42
#undef var_4c
#define var_4c -0x4C
	// 3160 var_4C          = word ptr -4Ch ;~ 01A2:1C42
#undef var_4a
#define var_4a -0x4A
	// 3161 var_4A          = word ptr -4Ah ;~ 01A2:1C42
#undef var_48
#define var_48 -0x48
	// 3162 var_48          = word ptr -48h ;~ 01A2:1C42
#undef var_46
#define var_46 -0x46
	// 3163 var_46          = byte ptr -46h ;~ 01A2:1C42
#undef var_44
#define var_44 -0x44
	// 3164 var_44          = word ptr -44h ;~ 01A2:1C42
#undef var_42
#define var_42 -0x42
	// 3165 var_42          = dword ptr -42h ;~ 01A2:1C42
#undef var_3e
#define var_3e -0x3E
	// 3166 var_3E          = byte ptr -3Eh ;~ 01A2:1C42
#undef var_3c
#define var_3c -0x3C
	// 3167 var_3C          = word ptr -3Ch ;~ 01A2:1C42
#undef var_3a
#define var_3a -0x3A
	// 3168 var_3A          = word ptr -3Ah ;~ 01A2:1C42
#undef var_38
#define var_38 -0x38
	// 3169 var_38          = byte ptr -38h ;~ 01A2:1C42
#undef var_36
#define var_36 -0x36
	// 3170 var_36          = word ptr -36h ;~ 01A2:1C42
#undef var_34
#define var_34 -0x34
	// 3171 var_34          = word ptr -34h ;~ 01A2:1C42
#undef var_32
#define var_32 -0x32
	// 3172 var_32          = byte ptr -32h ;~ 01A2:1C42
#undef var_2c
#define var_2c -0x2C
	// 3173 var_2C          = word ptr -2Ch ;~ 01A2:1C42
#undef var_2a
#define var_2a -0x2A
	// 3174 var_2A          = word ptr -2Ah ;~ 01A2:1C42
#undef var_28
#define var_28 -0x28
	// 3175 var_28          = word ptr -28h ;~ 01A2:1C42
#undef var_26
#define var_26 -0x26
	// 3176 var_26          = word ptr -26h ;~ 01A2:1C42
#undef var_24
#define var_24 -0x24
	// 3177 var_24          = word ptr -24h ;~ 01A2:1C42
#undef var_22
#define var_22 -0x22
	// 3178 var_22          = word ptr -22h ;~ 01A2:1C42
#undef var_20
#define var_20 -0x20
	// 3179 var_20          = byte ptr -20h ;~ 01A2:1C42
#undef var_1f
#define var_1f -0x1F
	// 3180 var_1F          = byte ptr -1Fh ;~ 01A2:1C42
#undef var_1e
#define var_1e -0x1E
	// 3181 var_1E          = word ptr -1Eh ;~ 01A2:1C42
#undef var_1c
#define var_1c -0x1C
	// 3182 var_1C          = byte ptr -1Ch ;~ 01A2:1C42
#undef var_1a
#define var_1a -0x1A
	// 3183 var_1A          = word ptr -1Ah ;~ 01A2:1C42
#undef var_18
#define var_18 -0x18
	// 3184 var_18          = word ptr -18h ;~ 01A2:1C42
#undef var_16
#define var_16 -0x16
	// 3185 var_16          = word ptr -16h ;~ 01A2:1C42
#undef var_14
#define var_14 -0x14
	// 3186 var_14          = word ptr -14h ;~ 01A2:1C42
#undef var_12
#define var_12 -0x12
	// 3187 var_12          = word ptr -12h ;~ 01A2:1C42
#undef var_10
#define var_10 -0x10
	// 3188 var_10          = byte ptr -10h ;~ 01A2:1C42
#undef var_8
#define var_8 -8
	// 3189 var_8           = word ptr -8 ;~ 01A2:1C42
#undef var_6
#define var_6 -6
	// 3190 var_6           = byte ptr -6 ;~ 01A2:1C42
#undef var_4
#define var_4 -4
	// 3191 var_4           = word ptr -4 ;~ 01A2:1C42
#undef var_2
#define var_2 -2
	// 3192 var_2           = word ptr -2 ;~ 01A2:1C42
#undef arg_0
#define arg_0 6
	// 3193 arg_0           = word ptr  6 ;~ 01A2:1C42
#undef arg_2
#define arg_2 8
	// 3194 arg_2           = word ptr  8 ;~ 01A2:1C42
#undef arg_4
#define arg_4 0x0A
	// 3195 arg_4           = word ptr  0Ah ;~ 01A2:1C42
#undef arg_6
#define arg_6 0x0C
	// 3196 arg_6           = word ptr  0Ch ;~ 01A2:1C42
cs=0x1a2;eip=0x001c42; 	X(PUSH(bp));	// 3198 push    bp ;~ 01A2:1C42
cs=0x1a2;eip=0x001c43; 	T(MOV(bp, sp));	// 3199 mov     bp, sp ;~ 01A2:1C43
cs=0x1a2;eip=0x001c45; 	T(SUB(sp, 0x10C));	// 3200 sub     sp, 10Ch ;~ 01A2:1C45
cs=0x1a2;eip=0x001c49; 	X(PUSH(di));	// 3201 push    di ;~ 01A2:1C49
cs=0x1a2;eip=0x001c4a; 	X(PUSH(si));	// 3202 push    si ;~ 01A2:1C4A
cs=0x1a2;eip=0x001c4b; 	X(PUSH(si));	// 3203 push    si ;~ 01A2:1C4B
cs=0x1a2;eip=0x001c4c; 	T(di = bp+var_32);	// 3204 lea     di, [bp+var_32] ;~ 01A2:1C4C
cs=0x1a2;eip=0x001c4f; 	T(MOV(si, offset(dseg,carmenu_carpos)));	// 3205 mov     si, offset carmenu_carpos ;~ 01A2:1C4F
cs=0x1a2;eip=0x001c52; 	X(PUSH(ss));	// 3206 push    ss ;~ 01A2:1C52
cs=0x1a2;eip=0x001c53; 	X(POP(es));	// 3207 pop     es ;~ 01A2:1C53
cs=0x1a2;eip=0x001c54; 	X(MOVSW);	// 3208 movsw ;~ 01A2:1C54
cs=0x1a2;eip=0x001c55; 	X(MOVSW);	// 3209 movsw ;~ 01A2:1C55
cs=0x1a2;eip=0x001c56; 	X(MOVSW);	// 3210 movsw ;~ 01A2:1C56
cs=0x1a2;eip=0x001c57; 	X(POP(si));	// 3211 pop     si ;~ 01A2:1C57
cs=0x1a2;eip=0x001c58; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), offset(dseg,unk_43864)));	// 3212 mov     [bp+var_2C], offset unk_43864 ;~ 01A2:1C58
cs=0x1a2;eip=0x001c5d; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), 0));	// 3213 mov     [bp+var_28], 0 ;~ 01A2:1C5D
cs=0x1a2;eip=0x001c62; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), 0));	// 3214 mov     [bp+var_26], 0 ;~ 01A2:1C62
cs=0x1a2;eip=0x001c67; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 0x7530));	// 3215 mov     [bp+var_22], 7530h ;~ 01A2:1C67
cs=0x1a2;eip=0x001c6c; 	T(MOV(ax, timertestflag));	// 3216 mov     ax, timertestflag ;~ 01A2:1C6C
cs=0x1a2;eip=0x001c6f; 	X(MOV(timertestflag_copy, ax));	// 3217 mov     timertestflag_copy, ax ;~ 01A2:1C6F
cs=0x1a2;eip=0x001c72; 	T(OR(ax, ax));	// 3218 or      ax, ax ;~ 01A2:1C72
cs=0x1a2;eip=0x001c74; 	J(JZ(loc_11c82));	// 3219 jz      short loc_11C82 ;~ 01A2:1C74
cs=0x1a2;eip=0x001c76; 	T(ax = bp+var_10);	// 3220 lea     ax, [bp+var_10] ;~ 01A2:1C76
cs=0x1a2;eip=0x001c79; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 3221 mov     [bp+var_2A], ax ;~ 01A2:1C79
cs=0x1a2;eip=0x001c7c; 	X(MOV(*(raddr(ss,bp+var_20)), 8));	// 3222 mov     [bp+var_20], 8 ;~ 01A2:1C7C
cs=0x1a2;eip=0x001c80; 	J(JMP(loc_11c86));	// 3223 jmp     short loc_11C86 ;~ 01A2:1C80
loc_11c82:
	// 4487 
cs=0x1a2;eip=0x001c82; 	X(MOV(*(raddr(ss,bp+var_20)), 0));	// 3227 mov     [bp+var_20], 0 ;~ 01A2:1C82
loc_11c86:
	// 4488 
cs=0x1a2;eip=0x001c86; 	T(MOV(ax, 2));	// 3230 mov     ax, 2 ;~ 01A2:1C86
cs=0x1a2;eip=0x001c89; 	X(PUSH(ax));	// 3231 push    ax ;~ 01A2:1C89
cs=0x1a2;eip=0x001c8a; 	J(CALLF(ensure_file_exists,0));	// 3232 call    ensure_file_exists ;~ 01A2:1C8A
cs=0x1a2;eip=0x001c8f; 	T(ADD(sp, 2));	// 3233 add     sp, 2 ;~ 01A2:1C8F
cs=0x1a2;eip=0x001c92; 	T(MOV(ax, offset(dseg,a_res_0)));	// 3234 mov     ax, offset a_res_0 ; ".res" ;~ 01A2:1C92
cs=0x1a2;eip=0x001c95; 	X(PUSH(ax));	// 3235 push    ax              ; int ;~ 01A2:1C95
cs=0x1a2;eip=0x001c96; 	T(MOV(ax, offset(dseg,acar)));	// 3236 mov     ax, offset aCar ; "car*" ;~ 01A2:1C96
cs=0x1a2;eip=0x001c99; 	X(PUSH(ax));	// 3237 push    ax ;~ 01A2:1C99
cs=0x1a2;eip=0x001c9a; 	T(SUB(ax, ax));	// 3238 sub     ax, ax ;~ 01A2:1C9A
cs=0x1a2;eip=0x001c9c; 	X(PUSH(ax));	// 3239 push    ax              ; char * ;~ 01A2:1C9C
cs=0x1a2;eip=0x001c9d; 	J(CALLF(file_combine_and_find,0));	// 3240 call    file_combine_and_find ;~ 01A2:1C9D
cs=0x1a2;eip=0x001ca2; 	T(ADD(sp, 6));	// 3241 add     sp, 6 ;~ 01A2:1CA2
cs=0x1a2;eip=0x001ca5; 	X(MOV(*(dw*)(raddr(ss,bp+var_f4)), ax));	// 3242 mov     [bp+var_F4], ax ;~ 01A2:1CA5
cs=0x1a2;eip=0x001ca9; 	T(OR(ax, ax));	// 3243 or      ax, ax ;~ 01A2:1CA9
cs=0x1a2;eip=0x001cab; 	J(JNZ(loc_11cb8));	// 3244 jnz     short loc_11CB8 ;~ 01A2:1CAB
cs=0x1a2;eip=0x001cad; 	J(CALLF(nullsub_1,0));	// 3245 call    nullsub_1 ;~ 01A2:1CAD
cs=0x1a2;eip=0x001cb2; 	X(POP(si));	// 3246 pop     si ;~ 01A2:1CB2
cs=0x1a2;eip=0x001cb3; 	X(POP(di));	// 3247 pop     di ;~ 01A2:1CB3
cs=0x1a2;eip=0x001cb4; 	T(MOV(sp, bp));	// 3248 mov     sp, bp ;~ 01A2:1CB4
cs=0x1a2;eip=0x001cb6; 	X(POP(bp));	// 3249 pop     bp ;~ 01A2:1CB6
cs=0x1a2;eip=0x001cb7; 	J(RETF(0));	// 3250 retf ;~ 01A2:1CB7
loc_11cb8:
	// 4489 
cs=0x1a2;eip=0x001cb8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_f4))));	// 3254 mov     bx, [bp+var_F4] ;~ 01A2:1CB8
cs=0x1a2;eip=0x001cbc; 	T(MOV(al, *(raddr(ds,bx+3))));	// 3255 mov     al, [bx+3] ;~ 01A2:1CBC
cs=0x1a2;eip=0x001cbf; 	X(MOV(*(raddr(ss,bp+var_ee)), al));	// 3256 mov     [bp+var_EE], al ;~ 01A2:1CBF
cs=0x1a2;eip=0x001cc3; 	T(MOV(al, *(raddr(ds,bx+4))));	// 3257 mov     al, [bx+4] ;~ 01A2:1CC3
cs=0x1a2;eip=0x001cc6; 	X(MOV(*(raddr(ss,bp+var_ed)), al));	// 3258 mov     [bp+var_ED], al ;~ 01A2:1CC6
cs=0x1a2;eip=0x001cca; 	T(MOV(al, *(raddr(ds,bx+5))));	// 3259 mov     al, [bx+5] ;~ 01A2:1CCA
cs=0x1a2;eip=0x001ccd; 	X(MOV(*(raddr(ss,bp+var_ec)), al));	// 3260 mov     [bp+var_EC], al ;~ 01A2:1CCD
cs=0x1a2;eip=0x001cd1; 	T(MOV(al, *(raddr(ds,bx+6))));	// 3261 mov     al, [bx+6] ;~ 01A2:1CD1
cs=0x1a2;eip=0x001cd4; 	X(MOV(*(raddr(ss,bp+var_eb)), al));	// 3262 mov     [bp+var_EB], al ;~ 01A2:1CD4
cs=0x1a2;eip=0x001cd8; 	X(MOV(*(raddr(ss,bp+var_ea)), 0));	// 3263 mov     [bp+var_EA], 0 ;~ 01A2:1CD8
cs=0x1a2;eip=0x001cdd; 	X(MOV(*(raddr(ss,bp+var_46)), 1));	// 3264 mov     [bp+var_46], 1 ;~ 01A2:1CDD
loc_11ce1:
	// 4490 
cs=0x1a2;eip=0x001ce1; 	J(CALLF(file_find_next_alt,0));	// 3267 call    file_find_next_alt ;~ 01A2:1CE1
cs=0x1a2;eip=0x001ce6; 	X(MOV(*(dw*)(raddr(ss,bp+var_f4)), ax));	// 3268 mov     [bp+var_F4], ax ;~ 01A2:1CE6
cs=0x1a2;eip=0x001cea; 	T(OR(ax, ax));	// 3269 or      ax, ax ;~ 01A2:1CEA
cs=0x1a2;eip=0x001cec; 	J(JZ(loc_11d44));	// 3270 jz      short loc_11D44 ;~ 01A2:1CEC
cs=0x1a2;eip=0x001cee; 	T(MOV(al, *(raddr(ss,bp+var_46))));	// 3271 mov     al, [bp+var_46] ;~ 01A2:1CEE
cs=0x1a2;eip=0x001cf1; 	T(CBW);	// 3272 cbw ;~ 01A2:1CF1
cs=0x1a2;eip=0x001cf2; 	T(MOV(cx, ax));	// 3273 mov     cx, ax ;~ 01A2:1CF2
cs=0x1a2;eip=0x001cf4; 	T(SHL(ax, 1));	// 3274 shl     ax, 1 ;~ 01A2:1CF4
cs=0x1a2;eip=0x001cf6; 	T(SHL(ax, 1));	// 3275 shl     ax, 1 ;~ 01A2:1CF6
cs=0x1a2;eip=0x001cf8; 	T(ADD(ax, cx));	// 3276 add     ax, cx ;~ 01A2:1CF8
cs=0x1a2;eip=0x001cfa; 	T(MOV(di, ax));	// 3277 mov     di, ax ;~ 01A2:1CFA
cs=0x1a2;eip=0x001cfc; 	T(ADD(di, bp));	// 3278 add     di, bp ;~ 01A2:1CFC
cs=0x1a2;eip=0x001cfe; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_f4))));	// 3279 mov     bx, [bp+var_F4] ;~ 01A2:1CFE
cs=0x1a2;eip=0x001d02; 	T(MOV(al, *(raddr(ds,bx+3))));	// 3280 mov     al, [bx+3] ;~ 01A2:1D02
cs=0x1a2;eip=0x001d05; 	X(MOV(*(raddr(ds,di-0x0EE)), al));	// 3281 mov     [di-0EEh], al ;~ 01A2:1D05
cs=0x1a2;eip=0x001d09; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_f4))));	// 3282 mov     bx, [bp+var_F4] ;~ 01A2:1D09
cs=0x1a2;eip=0x001d0d; 	T(MOV(al, *(raddr(ds,bx+4))));	// 3283 mov     al, [bx+4] ;~ 01A2:1D0D
cs=0x1a2;eip=0x001d10; 	X(MOV(*(raddr(ds,di-0x0ED)), al));	// 3284 mov     [di-0EDh], al ;~ 01A2:1D10
cs=0x1a2;eip=0x001d14; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_f4))));	// 3285 mov     bx, [bp+var_F4] ;~ 01A2:1D14
cs=0x1a2;eip=0x001d18; 	T(MOV(al, *(raddr(ds,bx+5))));	// 3286 mov     al, [bx+5] ;~ 01A2:1D18
cs=0x1a2;eip=0x001d1b; 	X(MOV(*(raddr(ds,di-0x0EC)), al));	// 3287 mov     [di-0ECh], al ;~ 01A2:1D1B
cs=0x1a2;eip=0x001d1f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_f4))));	// 3288 mov     bx, [bp+var_F4] ;~ 01A2:1D1F
cs=0x1a2;eip=0x001d23; 	T(MOV(al, *(raddr(ds,bx+6))));	// 3289 mov     al, [bx+6] ;~ 01A2:1D23
cs=0x1a2;eip=0x001d26; 	X(MOV(*(raddr(ds,di-0x0EB)), al));	// 3290 mov     [di-0EBh], al ;~ 01A2:1D26
cs=0x1a2;eip=0x001d2a; 	T(MOV(al, *(raddr(ss,bp+var_46))));	// 3291 mov     al, [bp+var_46] ;~ 01A2:1D2A
cs=0x1a2;eip=0x001d2d; 	T(CBW);	// 3292 cbw ;~ 01A2:1D2D
cs=0x1a2;eip=0x001d2e; 	T(MOV(di, ax));	// 3293 mov     di, ax ;~ 01A2:1D2E
cs=0x1a2;eip=0x001d30; 	T(SHL(di, 1));	// 3294 shl     di, 1 ;~ 01A2:1D30
cs=0x1a2;eip=0x001d32; 	T(SHL(di, 1));	// 3295 shl     di, 1 ;~ 01A2:1D32
cs=0x1a2;eip=0x001d34; 	T(ADD(di, ax));	// 3296 add     di, ax ;~ 01A2:1D34
cs=0x1a2;eip=0x001d36; 	X(MOV(*(raddr(ss,bp+di+var_ea)), 0));	// 3297 mov     [bp+di+var_EA], 0 ;~ 01A2:1D36
cs=0x1a2;eip=0x001d3b; 	X(INC(*(raddr(ss,bp+var_46))));	// 3298 inc     [bp+var_46] ;~ 01A2:1D3B
cs=0x1a2;eip=0x001d3e; 	T(CMP(*(raddr(ss,bp+var_46)), 0x20));	// 3299 cmp     [bp+var_46], 20h ; ' ' ;~ 01A2:1D3E
cs=0x1a2;eip=0x001d42; 	J(JNZ(loc_11ce1));	// 3300 jnz     short loc_11CE1 ;~ 01A2:1D42
loc_11d44:
	// 4491 
cs=0x1a2;eip=0x001d44; 	J(CALLF(nullsub_1,0));	// 3303 call    nullsub_1 ;~ 01A2:1D44
cs=0x1a2;eip=0x001d49; 	T(CMP(*(raddr(ss,bp+var_46)), 1));	// 3304 cmp     [bp+var_46], 1 ;~ 01A2:1D49
cs=0x1a2;eip=0x001d4d; 	J(JG(loc_11d52));	// 3305 jg      short loc_11D52 ;~ 01A2:1D4D
cs=0x1a2;eip=0x001d4f; 	J(JMP(loc_11e10));	// 3306 jmp     loc_11E10 ;~ 01A2:1D4F
loc_11d52:
	// 4492 
cs=0x1a2;eip=0x001d52; 	X(MOV(*(dw*)(raddr(ss,bp+var_4a)), 0));	// 3310 mov     [bp+var_4A], 0 ;~ 01A2:1D52
cs=0x1a2;eip=0x001d57; 	J(JMP(loc_11dfb));	// 3311 jmp     loc_11DFB ;~ 01A2:1D57
loc_11d5a:
	// 4493 
cs=0x1a2;eip=0x001d5a; 	X(INC(*(dw*)(raddr(ss,bp+var_44))));	// 3316 inc     [bp+var_44] ;~ 01A2:1D5A
loc_11d5d:
	// 4494 
cs=0x1a2;eip=0x001d5d; 	T(MOV(al, *(raddr(ss,bp+var_46))));	// 3319 mov     al, [bp+var_46] ;~ 01A2:1D5D
cs=0x1a2;eip=0x001d60; 	T(CBW);	// 3320 cbw ;~ 01A2:1D60
cs=0x1a2;eip=0x001d61; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_44))));	// 3321 cmp     ax, [bp+var_44] ;~ 01A2:1D61
cs=0x1a2;eip=0x001d64; 	J(JA(loc_11d69));	// 3322 ja      short loc_11D69 ;~ 01A2:1D64
cs=0x1a2;eip=0x001d66; 	J(JMP(loc_11df8));	// 3323 jmp     loc_11DF8 ;~ 01A2:1D66
loc_11d69:
	// 4495 
cs=0x1a2;eip=0x001d69; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_44))));	// 3327 mov     di, [bp+var_44] ;~ 01A2:1D69
cs=0x1a2;eip=0x001d6c; 	T(MOV(ax, di));	// 3328 mov     ax, di ;~ 01A2:1D6C
cs=0x1a2;eip=0x001d6e; 	T(SHL(di, 1));	// 3329 shl     di, 1 ;~ 01A2:1D6E
cs=0x1a2;eip=0x001d70; 	T(SHL(di, 1));	// 3330 shl     di, 1 ;~ 01A2:1D70
cs=0x1a2;eip=0x001d72; 	T(ADD(di, ax));	// 3331 add     di, ax ;~ 01A2:1D72
cs=0x1a2;eip=0x001d74; 	T(ax = bp+di+var_ee);	// 3332 lea     ax, [bp+di+var_EE] ;~ 01A2:1D74
cs=0x1a2;eip=0x001d78; 	X(PUSH(ax));	// 3333 push    ax ;~ 01A2:1D78
cs=0x1a2;eip=0x001d79; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_4a))));	// 3334 mov     di, [bp+var_4A] ;~ 01A2:1D79
cs=0x1a2;eip=0x001d7c; 	T(MOV(ax, di));	// 3335 mov     ax, di ;~ 01A2:1D7C
cs=0x1a2;eip=0x001d7e; 	T(SHL(di, 1));	// 3336 shl     di, 1 ;~ 01A2:1D7E
cs=0x1a2;eip=0x001d80; 	T(SHL(di, 1));	// 3337 shl     di, 1 ;~ 01A2:1D80
cs=0x1a2;eip=0x001d82; 	T(ADD(di, ax));	// 3338 add     di, ax ;~ 01A2:1D82
cs=0x1a2;eip=0x001d84; 	T(ax = bp+di+var_ee);	// 3339 lea     ax, [bp+di+var_EE] ;~ 01A2:1D84
cs=0x1a2;eip=0x001d88; 	X(PUSH(ax));	// 3340 push    ax              ; char * ;~ 01A2:1D88
cs=0x1a2;eip=0x001d89; 	J(CALLF(_strcmp,0));	// 3341 call    _strcmp ;~ 01A2:1D89
cs=0x1a2;eip=0x001d8e; 	T(ADD(sp, 4));	// 3342 add     sp, 4 ;~ 01A2:1D8E
cs=0x1a2;eip=0x001d91; 	T(OR(ax, ax));	// 3343 or      ax, ax ;~ 01A2:1D91
cs=0x1a2;eip=0x001d93; 	J(JLE(loc_11d5a));	// 3344 jle     short loc_11D5A ;~ 01A2:1D93
cs=0x1a2;eip=0x001d95; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_4a))));	// 3345 mov     di, [bp+var_4A] ;~ 01A2:1D95
cs=0x1a2;eip=0x001d98; 	T(MOV(ax, di));	// 3346 mov     ax, di ;~ 01A2:1D98
cs=0x1a2;eip=0x001d9a; 	T(SHL(di, 1));	// 3347 shl     di, 1 ;~ 01A2:1D9A
cs=0x1a2;eip=0x001d9c; 	T(SHL(di, 1));	// 3348 shl     di, 1 ;~ 01A2:1D9C
cs=0x1a2;eip=0x001d9e; 	T(ADD(di, ax));	// 3349 add     di, ax ;~ 01A2:1D9E
cs=0x1a2;eip=0x001da0; 	T(ax = bp+di+var_ee);	// 3350 lea     ax, [bp+di+var_EE] ;~ 01A2:1DA0
cs=0x1a2;eip=0x001da4; 	X(PUSH(ax));	// 3351 push    ax ;~ 01A2:1DA4
cs=0x1a2;eip=0x001da5; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 3352 mov     ax, offset resID_byte1 ;~ 01A2:1DA5
cs=0x1a2;eip=0x001da8; 	X(PUSH(ax));	// 3353 push    ax              ; char * ;~ 01A2:1DA8
cs=0x1a2;eip=0x001da9; 	J(CALLF(_strcpy,0));	// 3354 call    _strcpy ;~ 01A2:1DA9
cs=0x1a2;eip=0x001dae; 	T(ADD(sp, 4));	// 3355 add     sp, 4 ;~ 01A2:1DAE
cs=0x1a2;eip=0x001db1; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_44))));	// 3356 mov     di, [bp+var_44] ;~ 01A2:1DB1
cs=0x1a2;eip=0x001db4; 	T(MOV(ax, di));	// 3357 mov     ax, di ;~ 01A2:1DB4
cs=0x1a2;eip=0x001db6; 	T(SHL(di, 1));	// 3358 shl     di, 1 ;~ 01A2:1DB6
cs=0x1a2;eip=0x001db8; 	T(SHL(di, 1));	// 3359 shl     di, 1 ;~ 01A2:1DB8
cs=0x1a2;eip=0x001dba; 	T(ADD(di, ax));	// 3360 add     di, ax ;~ 01A2:1DBA
cs=0x1a2;eip=0x001dbc; 	T(ax = bp+di+var_ee);	// 3361 lea     ax, [bp+di+var_EE] ;~ 01A2:1DBC
cs=0x1a2;eip=0x001dc0; 	X(PUSH(ax));	// 3362 push    ax ;~ 01A2:1DC0
cs=0x1a2;eip=0x001dc1; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_4a))));	// 3363 mov     di, [bp+var_4A] ;~ 01A2:1DC1
cs=0x1a2;eip=0x001dc4; 	T(MOV(ax, di));	// 3364 mov     ax, di ;~ 01A2:1DC4
cs=0x1a2;eip=0x001dc6; 	T(SHL(di, 1));	// 3365 shl     di, 1 ;~ 01A2:1DC6
cs=0x1a2;eip=0x001dc8; 	T(SHL(di, 1));	// 3366 shl     di, 1 ;~ 01A2:1DC8
cs=0x1a2;eip=0x001dca; 	T(ADD(di, ax));	// 3367 add     di, ax ;~ 01A2:1DCA
cs=0x1a2;eip=0x001dcc; 	T(ax = bp+di+var_ee);	// 3368 lea     ax, [bp+di+var_EE] ;~ 01A2:1DCC
cs=0x1a2;eip=0x001dd0; 	X(PUSH(ax));	// 3369 push    ax              ; char * ;~ 01A2:1DD0
cs=0x1a2;eip=0x001dd1; 	J(CALLF(_strcpy,0));	// 3370 call    _strcpy ;~ 01A2:1DD1
cs=0x1a2;eip=0x001dd6; 	T(ADD(sp, 4));	// 3371 add     sp, 4 ;~ 01A2:1DD6
cs=0x1a2;eip=0x001dd9; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 3372 mov     ax, offset resID_byte1 ;~ 01A2:1DD9
cs=0x1a2;eip=0x001ddc; 	X(PUSH(ax));	// 3373 push    ax ;~ 01A2:1DDC
cs=0x1a2;eip=0x001ddd; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_44))));	// 3374 mov     di, [bp+var_44] ;~ 01A2:1DDD
cs=0x1a2;eip=0x001de0; 	T(MOV(ax, di));	// 3375 mov     ax, di ;~ 01A2:1DE0
cs=0x1a2;eip=0x001de2; 	T(SHL(di, 1));	// 3376 shl     di, 1 ;~ 01A2:1DE2
cs=0x1a2;eip=0x001de4; 	T(SHL(di, 1));	// 3377 shl     di, 1 ;~ 01A2:1DE4
cs=0x1a2;eip=0x001de6; 	T(ADD(di, ax));	// 3378 add     di, ax ;~ 01A2:1DE6
cs=0x1a2;eip=0x001de8; 	T(ax = bp+di+var_ee);	// 3379 lea     ax, [bp+di+var_EE] ;~ 01A2:1DE8
cs=0x1a2;eip=0x001dec; 	X(PUSH(ax));	// 3380 push    ax              ; char * ;~ 01A2:1DEC
cs=0x1a2;eip=0x001ded; 	J(CALLF(_strcpy,0));	// 3381 call    _strcpy ;~ 01A2:1DED
cs=0x1a2;eip=0x001df2; 	T(ADD(sp, 4));	// 3382 add     sp, 4 ;~ 01A2:1DF2
cs=0x1a2;eip=0x001df5; 	J(JMP(loc_11d5a));	// 3383 jmp     loc_11D5A ;~ 01A2:1DF5
loc_11df8:
	// 4496 
cs=0x1a2;eip=0x001df8; 	X(INC(*(dw*)(raddr(ss,bp+var_4a))));	// 3387 inc     [bp+var_4A] ;~ 01A2:1DF8
loc_11dfb:
	// 4497 
cs=0x1a2;eip=0x001dfb; 	T(MOV(al, *(raddr(ss,bp+var_46))));	// 3390 mov     al, [bp+var_46] ;~ 01A2:1DFB
cs=0x1a2;eip=0x001dfe; 	T(CBW);	// 3391 cbw ;~ 01A2:1DFE
cs=0x1a2;eip=0x001dff; 	T(DEC(ax));	// 3392 dec     ax ;~ 01A2:1DFF
cs=0x1a2;eip=0x001e00; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4a))));	// 3393 cmp     ax, [bp+var_4A] ;~ 01A2:1E00
cs=0x1a2;eip=0x001e03; 	J(JLE(loc_11e10));	// 3394 jle     short loc_11E10 ;~ 01A2:1E03
cs=0x1a2;eip=0x001e05; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4a))));	// 3395 mov     ax, [bp+var_4A] ;~ 01A2:1E05
cs=0x1a2;eip=0x001e08; 	T(INC(ax));	// 3396 inc     ax ;~ 01A2:1E08
cs=0x1a2;eip=0x001e09; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 3397 mov     [bp+var_44], ax ;~ 01A2:1E09
cs=0x1a2;eip=0x001e0c; 	J(JMP(loc_11d5d));	// 3398 jmp     loc_11D5D ;~ 01A2:1E0C
loc_11e10:
	// 4498 
cs=0x1a2;eip=0x001e10; 	X(MOV(*(raddr(ss,bp+var_f0)), 0));	// 3404 mov     [bp+var_F0], 0 ;~ 01A2:1E10
cs=0x1a2;eip=0x001e15; 	X(MOV(*(raddr(ss,bp+var_f6)), 0));	// 3405 mov     [bp+var_F6], 0 ;~ 01A2:1E15
cs=0x1a2;eip=0x001e1a; 	J(JMP(loc_11e20));	// 3406 jmp     short loc_11E20 ;~ 01A2:1E1A
loc_11e1c:
	// 4499 
cs=0x1a2;eip=0x001e1c; 	X(INC(*(raddr(ss,bp+var_f6))));	// 3411 inc     [bp+var_F6] ;~ 01A2:1E1C
loc_11e20:
	// 4500 
cs=0x1a2;eip=0x001e20; 	T(MOV(al, *(raddr(ss,bp+var_46))));	// 3414 mov     al, [bp+var_46] ;~ 01A2:1E20
cs=0x1a2;eip=0x001e23; 	T(CMP(*(raddr(ss,bp+var_f6)), al));	// 3415 cmp     [bp+var_F6], al ;~ 01A2:1E23
cs=0x1a2;eip=0x001e27; 	J(JGE(loc_11e68));	// 3416 jge     short loc_11E68 ;~ 01A2:1E27
cs=0x1a2;eip=0x001e29; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 3417 mov     al, [bp+var_F6] ;~ 01A2:1E29
cs=0x1a2;eip=0x001e2d; 	T(CBW);	// 3418 cbw ;~ 01A2:1E2D
cs=0x1a2;eip=0x001e2e; 	T(MOV(cx, ax));	// 3419 mov     cx, ax ;~ 01A2:1E2E
cs=0x1a2;eip=0x001e30; 	T(SHL(ax, 1));	// 3420 shl     ax, 1 ;~ 01A2:1E30
cs=0x1a2;eip=0x001e32; 	T(SHL(ax, 1));	// 3421 shl     ax, 1 ;~ 01A2:1E32
cs=0x1a2;eip=0x001e34; 	T(ADD(ax, cx));	// 3422 add     ax, cx ;~ 01A2:1E34
cs=0x1a2;eip=0x001e36; 	T(MOV(di, ax));	// 3423 mov     di, ax ;~ 01A2:1E36
cs=0x1a2;eip=0x001e38; 	T(ADD(di, bp));	// 3424 add     di, bp ;~ 01A2:1E38
cs=0x1a2;eip=0x001e3a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 3425 mov     bx, [bp+arg_0] ;~ 01A2:1E3A
cs=0x1a2;eip=0x001e3d; 	T(MOV(al, *(raddr(ds,di-0x0EE))));	// 3426 mov     al, [di-0EEh] ;~ 01A2:1E3D
cs=0x1a2;eip=0x001e41; 	T(CMP(*(raddr(ds,bx)), al));	// 3427 cmp     [bx], al ;~ 01A2:1E41
cs=0x1a2;eip=0x001e43; 	J(JNZ(loc_11e1c));	// 3428 jnz     short loc_11E1C ;~ 01A2:1E43
cs=0x1a2;eip=0x001e45; 	T(MOV(al, *(raddr(ds,di-0x0ED))));	// 3429 mov     al, [di-0EDh] ;~ 01A2:1E45
cs=0x1a2;eip=0x001e49; 	T(CMP(*(raddr(ds,bx+1)), al));	// 3430 cmp     [bx+1], al ;~ 01A2:1E49
cs=0x1a2;eip=0x001e4c; 	J(JNZ(loc_11e1c));	// 3431 jnz     short loc_11E1C ;~ 01A2:1E4C
cs=0x1a2;eip=0x001e4e; 	T(MOV(al, *(raddr(ds,di-0x0EC))));	// 3432 mov     al, [di-0ECh] ;~ 01A2:1E4E
cs=0x1a2;eip=0x001e52; 	T(CMP(*(raddr(ds,bx+2)), al));	// 3433 cmp     [bx+2], al ;~ 01A2:1E52
cs=0x1a2;eip=0x001e55; 	J(JNZ(loc_11e1c));	// 3434 jnz     short loc_11E1C ;~ 01A2:1E55
cs=0x1a2;eip=0x001e57; 	T(MOV(al, *(raddr(ds,di-0x0EB))));	// 3435 mov     al, [di-0EBh] ;~ 01A2:1E57
cs=0x1a2;eip=0x001e5b; 	T(CMP(*(raddr(ds,bx+3)), al));	// 3436 cmp     [bx+3], al ;~ 01A2:1E5B
cs=0x1a2;eip=0x001e5e; 	J(JNZ(loc_11e1c));	// 3437 jnz     short loc_11E1C ;~ 01A2:1E5E
cs=0x1a2;eip=0x001e60; 	T(MOV(al, *(raddr(ss,bp+var_f6))));	// 3438 mov     al, [bp+var_F6] ;~ 01A2:1E60
cs=0x1a2;eip=0x001e64; 	X(MOV(*(raddr(ss,bp+var_f0)), al));	// 3439 mov     [bp+var_F0], al ;~ 01A2:1E64
loc_11e68:
	// 4501 
cs=0x1a2;eip=0x001e68; 	X(MOV(waitflag, 0x5A));	// 3442 mov     waitflag, 5Ah ; 'Z' ;~ 01A2:1E68
cs=0x1a2;eip=0x001e6e; 	X(MOV(*(raddr(ss,bp+var_3e)), 0x0FF));	// 3443 mov     [bp+var_3E], 0FFh ;~ 01A2:1E6E
cs=0x1a2;eip=0x001e72; 	X(MOV(backlights_paint_override, 0x2D));	// 3444 mov     backlights_paint_override, 2Dh ; '-' ; default backlights paintjob 2Dh ;~ 01A2:1E72
cs=0x1a2;eip=0x001e77; 	T(MOV(ax, offset(dseg,asdcsel)));	// 3445 mov     ax, offset aSdcsel ; "sdcsel" ;~ 01A2:1E77
cs=0x1a2;eip=0x001e7a; 	X(PUSH(ax));	// 3446 push    ax ;~ 01A2:1E7A
cs=0x1a2;eip=0x001e7b; 	J(CALLF(file_load_shape2d_fatal_thunk,0));	// 3447 call    file_load_shape2d_fatal_thunk ;~ 01A2:1E7B
cs=0x1a2;eip=0x001e80; 	T(ADD(sp, 2));	// 3448 add     sp, 2 ;~ 01A2:1E80
cs=0x1a2;eip=0x001e83; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), ax));	// 3449 mov     [bp+var_36], ax ;~ 01A2:1E83
cs=0x1a2;eip=0x001e86; 	X(MOV(*(dw*)(raddr(ss,bp+var_34)), dx));	// 3450 mov     [bp+var_34], dx ;~ 01A2:1E86
cs=0x1a2;eip=0x001e89; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0));	// 3451 cmp     [bp+arg_6], 0 ;~ 01A2:1E89
cs=0x1a2;eip=0x001e8d; 	J(JNZ(loc_11ea2));	// 3452 jnz     short loc_11EA2 ;~ 01A2:1E8D
cs=0x1a2;eip=0x001e8f; 	T(MOV(ax, offset(dseg,amisc_0)));	// 3453 mov     ax, offset aMisc_0 ; "misc" ;~ 01A2:1E8F
cs=0x1a2;eip=0x001e92; 	X(PUSH(ax));	// 3454 push    ax ;~ 01A2:1E92
cs=0x1a2;eip=0x001e93; 	J(CALLF(file_load_resfile,0));	// 3455 call    file_load_resfile ;~ 01A2:1E93
cs=0x1a2;eip=0x001e98; 	T(ADD(sp, 2));	// 3456 add     sp, 2 ;~ 01A2:1E98
cs=0x1a2;eip=0x001e9b; 	X(MOV(miscptr, ax));	// 3457 mov     miscptr, ax ;~ 01A2:1E9B
cs=0x1a2;eip=0x001e9e; 	X(MOV(word_455ce, dx));	// 3458 mov     word_455CE, dx ;~ 01A2:1E9E
loc_11ea2:
	// 4502 
cs=0x1a2;eip=0x001ea2; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0));	// 3461 cmp     [bp+arg_6], 0 ;~ 01A2:1EA2
cs=0x1a2;eip=0x001ea6; 	J(JNZ(loc_11eab));	// 3462 jnz     short loc_11EAB ;~ 01A2:1EA6
cs=0x1a2;eip=0x001ea8; 	J(JMP(loc_11f4a));	// 3463 jmp     loc_11F4A ;~ 01A2:1EA8
loc_11eab:
	// 4503 
cs=0x1a2;eip=0x001eab; 	X(MOV(word_3bb58, 0x0F0));	// 3467 mov     word_3BB58, 0F0h ; 'ğ' ;~ 01A2:1EAB
cs=0x1a2;eip=0x001eb1; 	T(CMP(video_flag5_is0, 0));	// 3468 cmp     video_flag5_is0, 0 ;~ 01A2:1EB1
cs=0x1a2;eip=0x001eb6; 	J(JNZ(loc_11ebb));	// 3469 jnz     short loc_11EBB ;~ 01A2:1EB6
cs=0x1a2;eip=0x001eb8; 	J(JMP(loc_11f50));	// 3470 jmp     loc_11F50 ;~ 01A2:1EB8
loc_11ebb:
	// 4504 
cs=0x1a2;eip=0x001ebb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 3474 mov     bx, [bp+arg_6] ;~ 01A2:1EBB
cs=0x1a2;eip=0x001ebe; 	T(SHL(bx, 1));	// 3475 shl     bx, 1 ;~ 01A2:1EBE
cs=0x1a2;eip=0x001ec0; 	T(SHL(bx, 1));	// 3476 shl     bx, 1 ;~ 01A2:1EC0
cs=0x1a2;eip=0x001ec2; 	T(MOV(ax, *(dw*)(((db*)&oppresources)+bx)));	// 3477 mov     ax, word ptr oppresources[bx] ;~ 01A2:1EC2
cs=0x1a2;eip=0x001ec6; 	T(MOV(dx, *(dw*)((((db*)&oppresources)+2)+bx)));	// 3478 mov     dx, word ptr (oppresources+2)[bx] ;~ 01A2:1EC6
cs=0x1a2;eip=0x001eca; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10c))), ax));	// 3479 mov     word ptr [bp+var_10C], ax ;~ 01A2:1ECA
cs=0x1a2;eip=0x001ece; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10c+2))), dx));	// 3480 mov     word ptr [bp+var_10C+2], dx ;~ 01A2:1ECE
cs=0x1a2;eip=0x001ed2; 	T(MOV(ax, 0x0F));	// 3481 mov     ax, 0Fh ;~ 01A2:1ED2
cs=0x1a2;eip=0x001ed5; 	X(PUSH(ax));	// 3482 push    ax ;~ 01A2:1ED5
cs=0x1a2;eip=0x001ed6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10c))));	// 3483 les     bx, [bp+var_10C] ;~ 01A2:1ED6
cs=0x1a2;eip=0x001eda; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 3484 push    word ptr es:[bx+2] ;~ 01A2:1EDA
cs=0x1a2;eip=0x001ede; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 3485 push    word ptr es:[bx] ;~ 01A2:1EDE
cs=0x1a2;eip=0x001ee1; 	J(CALLF(sprite_make_wnd,0));	// 3486 call    sprite_make_wnd ;~ 01A2:1EE1
cs=0x1a2;eip=0x001ee6; 	T(ADD(sp, 6));	// 3487 add     sp, 6 ;~ 01A2:1EE6
cs=0x1a2;eip=0x001ee9; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_42))), ax));	// 3488 mov     word ptr [bp+var_42], ax ;~ 01A2:1EE9
cs=0x1a2;eip=0x001eec; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_42+2))), dx));	// 3489 mov     word ptr [bp+var_42+2], dx ;~ 01A2:1EEC
cs=0x1a2;eip=0x001eef; 	J(CALLF(setup_mcgawnd2,0));	// 3490 call    setup_mcgawnd2 ;~ 01A2:1EEF
cs=0x1a2;eip=0x001ef4; 	T(SUB(ax, ax));	// 3491 sub     ax, ax ;~ 01A2:1EF4
cs=0x1a2;eip=0x001ef6; 	X(PUSH(ax));	// 3492 push    ax ;~ 01A2:1EF6
cs=0x1a2;eip=0x001ef7; 	J(CALLF(sprite_clear_1_color,0));	// 3493 call    sprite_clear_1_color ;~ 01A2:1EF7
cs=0x1a2;eip=0x001efc; 	T(ADD(sp, 2));	// 3494 add     sp, 2 ;~ 01A2:1EFC
cs=0x1a2;eip=0x001eff; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_6))));	// 3495 mov     al, byte ptr [bp+arg_6] ;~ 01A2:1EFF
cs=0x1a2;eip=0x001f02; 	T(ADD(al, 0x30));	// 3496 add     al, 30h ; '0' ;~ 01A2:1F02
cs=0x1a2;eip=0x001f04; 	T(CBW);	// 3497 cbw ;~ 01A2:1F04
cs=0x1a2;eip=0x001f05; 	X(PUSH(ax));	// 3498 push    ax ;~ 01A2:1F05
cs=0x1a2;eip=0x001f06; 	X(PUSH(word_44a02));	// 3499 push    word_44A02 ;~ 01A2:1F06
cs=0x1a2;eip=0x001f0a; 	X(PUSH(opp_res));	// 3500 push    opp_res ;~ 01A2:1F0A
cs=0x1a2;eip=0x001f0e; 	J(CALLF(nullsub_2,0));	// 3501 call    nullsub_2 ;~ 01A2:1F0E
cs=0x1a2;eip=0x001f13; 	T(ADD(sp, 6));	// 3502 add     sp, 6 ;~ 01A2:1F13
cs=0x1a2;eip=0x001f16; 	T(SUB(ax, ax));	// 3503 sub     ax, ax ;~ 01A2:1F16
cs=0x1a2;eip=0x001f18; 	X(PUSH(ax));	// 3504 push    ax ;~ 01A2:1F18
cs=0x1a2;eip=0x001f19; 	X(PUSH(ax));	// 3505 push    ax              ; __int16 ;~ 01A2:1F19
cs=0x1a2;eip=0x001f1a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 3506 mov     bx, [bp+arg_6] ;~ 01A2:1F1A
cs=0x1a2;eip=0x001f1d; 	T(SHL(bx, 1));	// 3507 shl     bx, 1 ;~ 01A2:1F1D
cs=0x1a2;eip=0x001f1f; 	T(SHL(bx, 1));	// 3508 shl     bx, 1 ;~ 01A2:1F1F
cs=0x1a2;eip=0x001f21; 	X(PUSH(*(dw*)((((db*)&oppresources)+2)+bx)));	// 3509 push    word ptr (oppresources+2)[bx] ;~ 01A2:1F21
cs=0x1a2;eip=0x001f25; 	X(PUSH(*(dw*)(((db*)&oppresources)+bx)));	// 3510 push    word ptr oppresources[bx] ; shapeptr ;~ 01A2:1F25
cs=0x1a2;eip=0x001f29; 	J(CALLF(sprite_putimage_transparent,0));	// 3511 call    sprite_putimage_transparent ;~ 01A2:1F29
cs=0x1a2;eip=0x001f2e; 	T(ADD(sp, 8));	// 3512 add     sp, 8 ;~ 01A2:1F2E
cs=0x1a2;eip=0x001f31; 	T(SUB(ax, ax));	// 3513 sub     ax, ax ;~ 01A2:1F31
cs=0x1a2;eip=0x001f33; 	X(PUSH(ax));	// 3514 push    ax ;~ 01A2:1F33
cs=0x1a2;eip=0x001f34; 	X(PUSH(ax));	// 3515 push    ax ;~ 01A2:1F34
cs=0x1a2;eip=0x001f35; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_42))));	// 3516 les     bx, [bp+var_42] ;~ 01A2:1F35
cs=0x1a2;eip=0x001f38; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 3517 push    word ptr es:[bx+2] ;~ 01A2:1F38
cs=0x1a2;eip=0x001f3c; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 3518 push    word ptr es:[bx] ;~ 01A2:1F3C
cs=0x1a2;eip=0x001f3f; 	J(CALLF(sprite_clear_shape_alt,0));	// 3519 call    sprite_clear_shape_alt ;~ 01A2:1F3F
cs=0x1a2;eip=0x001f44; 	T(ADD(sp, 8));	// 3520 add     sp, 8 ;~ 01A2:1F44
cs=0x1a2;eip=0x001f47; 	J(JMP(loc_11f50));	// 3521 jmp     short loc_11F50 ;~ 01A2:1F47
loc_11f4a:
	// 4505 
cs=0x1a2;eip=0x001f4a; 	X(MOV(word_3bb58, 0x140));	// 3526 mov     word_3BB58, 140h ;~ 01A2:1F4A
loc_11f50:
	// 4506 
cs=0x1a2;eip=0x001f50; 	X(MOV(*(raddr(ss,bp+var_38)), 0x0FF));	// 3530 mov     [bp+var_38], 0FFh ;~ 01A2:1F50
cs=0x1a2;eip=0x001f54; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 3531 mov     [bp+var_1E], 0 ;~ 01A2:1F54
cs=0x1a2;eip=0x001f59; 	X(MOV(*(raddr(ss,bp+var_106)), 0));	// 3532 mov     [bp+var_106], 0 ;~ 01A2:1F59
cs=0x1a2;eip=0x001f5e; 	J(CALLF(sub_29772,0));	// 3533 call    sub_29772 ;~ 01A2:1F5E
cs=0x1a2;eip=0x001f63; 	X(MOV(*(dw*)(raddr(ss,bp+var_4c)), 0));	// 3534 mov     [bp+var_4C], 0 ;~ 01A2:1F63
cs=0x1a2;eip=0x001f68; 	X(MOV(*(raddr(ss,bp+var_f2)), 0x0FF));	// 3535 mov     [bp+var_F2], 0FFh ;~ 01A2:1F68
cs=0x1a2;eip=0x001f6d; 	T(MOV(ax, 0x64));	// 3536 mov     ax, 64h ; 'd' ;~ 01A2:1F6D
cs=0x1a2;eip=0x001f70; 	X(PUSH(ax));	// 3537 push    ax ;~ 01A2:1F70
cs=0x1a2;eip=0x001f71; 	T(MOV(ax, 0x140));	// 3538 mov     ax, 140h ;~ 01A2:1F71
cs=0x1a2;eip=0x001f74; 	X(PUSH(ax));	// 3539 push    ax ;~ 01A2:1F74
cs=0x1a2;eip=0x001f75; 	T(MOV(ax, 0x11));	// 3540 mov     ax, 11h ;~ 01A2:1F75
cs=0x1a2;eip=0x001f78; 	X(PUSH(ax));	// 3541 push    ax ;~ 01A2:1F78
cs=0x1a2;eip=0x001f79; 	T(MOV(ax, 0x24));	// 3542 mov     ax, 24h ; '$' ;~ 01A2:1F79
cs=0x1a2;eip=0x001f7c; 	X(PUSH(ax));	// 3543 push    ax ;~ 01A2:1F7C
cs=0x1a2;eip=0x001f7d; 	J(CALLF(set_projection,0));	// 3544 call    set_projection ;~ 01A2:1F7D
cs=0x1a2;eip=0x001f82; 	T(ADD(sp, 8));	// 3545 add     sp, 8 ;~ 01A2:1F82
cs=0x1a2;eip=0x001f85; 	J(CALLF(timer_get_delta_alt,0));	// 3546 call    timer_get_delta_alt ;~ 01A2:1F85
cs=0x1a2;eip=0x001f8a; 	T(MOV(ax, 0x0F));	// 3547 mov     ax, 0Fh ;~ 01A2:1F8A
cs=0x1a2;eip=0x001f8d; 	X(PUSH(ax));	// 3548 push    ax ;~ 01A2:1F8D
cs=0x1a2;eip=0x001f8e; 	T(MOV(ax, 0x0C8));	// 3549 mov     ax, 0C8h ; 'È' ;~ 01A2:1F8E
cs=0x1a2;eip=0x001f91; 	X(PUSH(ax));	// 3550 push    ax ;~ 01A2:1F91
cs=0x1a2;eip=0x001f92; 	T(MOV(ax, 0x140));	// 3551 mov     ax, 140h ;~ 01A2:1F92
cs=0x1a2;eip=0x001f95; 	X(PUSH(ax));	// 3552 push    ax ;~ 01A2:1F95
cs=0x1a2;eip=0x001f96; 	J(CALLF(sprite_make_wnd,0));	// 3553 call    sprite_make_wnd ;~ 01A2:1F96
cs=0x1a2;eip=0x001f9b; 	T(ADD(sp, 6));	// 3554 add     sp, 6 ;~ 01A2:1F9B
cs=0x1a2;eip=0x001f9e; 	X(MOV(*(dw*)(((db*)&wndsprite)), ax));	// 3555 mov     word ptr wndsprite, ax ;~ 01A2:1F9E
cs=0x1a2;eip=0x001fa1; 	X(MOV(*(dw*)(((db*)&wndsprite)+2), dx));	// 3556 mov     word ptr wndsprite+2, dx ;~ 01A2:1FA1
loc_11fa5:
	// 4507 
cs=0x1a2;eip=0x001fa5; 	T(MOV(al, *(raddr(ss,bp+var_38))));	// 3560 mov     al, [bp+var_38] ;~ 01A2:1FA5
cs=0x1a2;eip=0x001fa8; 	T(CMP(*(raddr(ss,bp+var_f0)), al));	// 3561 cmp     [bp+var_F0], al ;~ 01A2:1FA8
cs=0x1a2;eip=0x001fac; 	J(JNZ(loc_11fb1));	// 3562 jnz     short loc_11FB1 ;~ 01A2:1FAC
cs=0x1a2;eip=0x001fae; 	J(JMP(loc_12405));	// 3563 jmp     loc_12405 ;~ 01A2:1FAE
loc_11fb1:
	// 4508 
cs=0x1a2;eip=0x001fb1; 	T(CMP(al, 0x0FF));	// 3567 cmp     al, 0FFh ;~ 01A2:1FB1
cs=0x1a2;eip=0x001fb3; 	J(JZ(loc_11fc8));	// 3568 jz      short loc_11FC8 ;~ 01A2:1FB3
cs=0x1a2;eip=0x001fb5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 3569 push    [bp+var_2] ;~ 01A2:1FB5
cs=0x1a2;eip=0x001fb8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 3570 push    [bp+var_4] ;~ 01A2:1FB8
cs=0x1a2;eip=0x001fbb; 	J(CALLF(unload_resource,0));	// 3571 call    unload_resource ;~ 01A2:1FBB
cs=0x1a2;eip=0x001fc0; 	T(ADD(sp, 4));	// 3572 add     sp, 4 ;~ 01A2:1FC0
cs=0x1a2;eip=0x001fc3; 	J(CALLF(shape3d_free_car_shapes,0));	// 3573 call    shape3d_free_car_shapes ;~ 01A2:1FC3
loc_11fc8:
	// 4509 
cs=0x1a2;eip=0x001fc8; 	T(MOV(ax, offset(dseg,byte_449ab)));	// 3576 mov     ax, offset byte_449AB ;~ 01A2:1FC8
cs=0x1a2;eip=0x001fcb; 	X(PUSH(ax));	// 3577 push    ax ;~ 01A2:1FCB
cs=0x1a2;eip=0x001fcc; 	T(MOV(al, *(raddr(ss,bp+var_f0))));	// 3578 mov     al, [bp+var_F0] ;~ 01A2:1FCC
cs=0x1a2;eip=0x001fd0; 	T(CBW);	// 3579 cbw ;~ 01A2:1FD0
cs=0x1a2;eip=0x001fd1; 	T(MOV(cx, ax));	// 3580 mov     cx, ax ;~ 01A2:1FD1
cs=0x1a2;eip=0x001fd3; 	T(SHL(ax, 1));	// 3581 shl     ax, 1 ;~ 01A2:1FD3
cs=0x1a2;eip=0x001fd5; 	T(SHL(ax, 1));	// 3582 shl     ax, 1 ;~ 01A2:1FD5
cs=0x1a2;eip=0x001fd7; 	T(ADD(ax, cx));	// 3583 add     ax, cx ;~ 01A2:1FD7
cs=0x1a2;eip=0x001fd9; 	T(ADD(ax, bp));	// 3584 add     ax, bp ;~ 01A2:1FD9
cs=0x1a2;eip=0x001fdb; 	T(SUB(ax, 0x0EE));	// 3585 sub     ax, 0EEh ; 'î'  ; var_EE = var_carids ;~ 01A2:1FDB
cs=0x1a2;eip=0x001fde; 	X(PUSH(ax));	// 3586 push    ax ;~ 01A2:1FDE
cs=0x1a2;eip=0x001fdf; 	J(CALLF(shape3d_load_car_shapes,0));	// 3587 call    shape3d_load_car_shapes ;~ 01A2:1FDF
cs=0x1a2;eip=0x001fe4; 	T(ADD(sp, 4));	// 3588 add     sp, 4 ;~ 01A2:1FE4
cs=0x1a2;eip=0x001fe7; 	T(MOV(al, *(raddr(ss,bp+var_f0))));	// 3589 mov     al, [bp+var_F0] ;~ 01A2:1FE7
cs=0x1a2;eip=0x001feb; 	T(CBW);	// 3590 cbw ;~ 01A2:1FEB
cs=0x1a2;eip=0x001fec; 	T(MOV(cx, ax));	// 3591 mov     cx, ax ;~ 01A2:1FEC
cs=0x1a2;eip=0x001fee; 	T(SHL(ax, 1));	// 3592 shl     ax, 1 ;~ 01A2:1FEE
cs=0x1a2;eip=0x001ff0; 	T(SHL(ax, 1));	// 3593 shl     ax, 1 ;~ 01A2:1FF0
cs=0x1a2;eip=0x001ff2; 	T(ADD(ax, cx));	// 3594 add     ax, cx ;~ 01A2:1FF2
cs=0x1a2;eip=0x001ff4; 	T(MOV(di, ax));	// 3595 mov     di, ax ;~ 01A2:1FF4
cs=0x1a2;eip=0x001ff6; 	T(ADD(di, bp));	// 3596 add     di, bp ;~ 01A2:1FF6
cs=0x1a2;eip=0x001ff8; 	T(MOV(al, *(raddr(ds,di-0x0EE))));	// 3597 mov     al, [di-0EEh] ;~ 01A2:1FF8
cs=0x1a2;eip=0x001ffc; 	X(MOV(byte_3b90d, al));	// 3598 mov     byte_3B90D, al ;~ 01A2:1FFC
cs=0x1a2;eip=0x001fff; 	T(MOV(al, *(raddr(ds,di-0x0ED))));	// 3599 mov     al, [di-0EDh] ;~ 01A2:1FFF
cs=0x1a2;eip=0x002003; 	X(MOV(byte_3b90e, al));	// 3600 mov     byte_3B90E, al ;~ 01A2:2003
cs=0x1a2;eip=0x002006; 	T(MOV(al, *(raddr(ds,di-0x0EC))));	// 3601 mov     al, [di-0ECh] ;~ 01A2:2006
cs=0x1a2;eip=0x00200a; 	X(MOV(byte_3b90f, al));	// 3602 mov     byte_3B90F, al ;~ 01A2:200A
cs=0x1a2;eip=0x00200d; 	T(MOV(al, *(raddr(ds,di-0x0EB))));	// 3603 mov     al, [di-0EBh] ;~ 01A2:200D
cs=0x1a2;eip=0x002011; 	X(MOV(byte_3b910, al));	// 3604 mov     byte_3B910, al ;~ 01A2:2011
cs=0x1a2;eip=0x002014; 	T(MOV(ax, offset(dseg,acarcoun)));	// 3605 mov     ax, offset aCarcoun ;~ 01A2:2014
cs=0x1a2;eip=0x002017; 	X(PUSH(ax));	// 3606 push    ax ;~ 01A2:2017
cs=0x1a2;eip=0x002018; 	J(CALLF(file_load_resfile,0));	// 3607 call    file_load_resfile ;~ 01A2:2018
cs=0x1a2;eip=0x00201d; 	T(ADD(sp, 2));	// 3608 add     sp, 2 ;~ 01A2:201D
cs=0x1a2;eip=0x002020; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 3609 mov     [bp+var_4], ax ;~ 01A2:2020
cs=0x1a2;eip=0x002023; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 3610 mov     [bp+var_2], dx ;~ 01A2:2023
cs=0x1a2;eip=0x002026; 	T(SUB(ax, ax));	// 3611 sub     ax, ax ;~ 01A2:2026
cs=0x1a2;eip=0x002028; 	X(PUSH(ax));	// 3612 push    ax ;~ 01A2:2028
cs=0x1a2;eip=0x002029; 	X(PUSH(dx));	// 3613 push    dx ;~ 01A2:2029
cs=0x1a2;eip=0x00202a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 3614 push    [bp+var_4] ;~ 01A2:202A
cs=0x1a2;eip=0x00202d; 	J(CALLF(setup_aero_trackdata,0));	// 3615 call    setup_aero_trackdata ;~ 01A2:202D
cs=0x1a2;eip=0x002032; 	T(ADD(sp, 6));	// 3616 add     sp, 6 ;~ 01A2:2032
cs=0x1a2;eip=0x002035; 	J(CALLF(sprite_copy_wnd_to_1_clear,0));	// 3617 call    sprite_copy_wnd_to_1_clear ;~ 01A2:2035
cs=0x1a2;eip=0x00203a; 	T(SUB(ax, ax));	// 3618 sub     ax, ax ;~ 01A2:203A
cs=0x1a2;eip=0x00203c; 	X(PUSH(ax));	// 3619 push    ax ;~ 01A2:203C
cs=0x1a2;eip=0x00203d; 	X(PUSH(word_407f8));	// 3620 push    word_407F8      ; 7 ;~ 01A2:203D
cs=0x1a2;eip=0x002041; 	X(PUSH(word_407f6));	// 3621 push    word_407F6      ; 8 ;~ 01A2:2041
cs=0x1a2;eip=0x002045; 	X(PUSH(word_407f4));	// 3622 push    word_407F4      ; F ;~ 01A2:2045
cs=0x1a2;eip=0x002049; 	T(MOV(ax, 0x61));	// 3623 mov     ax, 61h ; 'a' ;~ 01A2:2049
cs=0x1a2;eip=0x00204c; 	X(PUSH(ax));	// 3624 push    ax ;~ 01A2:204C
cs=0x1a2;eip=0x00204d; 	T(MOV(ax, 0x140));	// 3625 mov     ax, 140h ;~ 01A2:204D
cs=0x1a2;eip=0x002050; 	X(PUSH(ax));	// 3626 push    ax ;~ 01A2:2050
cs=0x1a2;eip=0x002051; 	T(MOV(ax, 0x67));	// 3627 mov     ax, 67h ; 'g' ;~ 01A2:2051
cs=0x1a2;eip=0x002054; 	X(PUSH(ax));	// 3628 push    ax ;~ 01A2:2054
cs=0x1a2;eip=0x002055; 	T(SUB(ax, ax));	// 3629 sub     ax, ax ;~ 01A2:2055
cs=0x1a2;eip=0x002057; 	X(PUSH(ax));	// 3630 push    ax ;~ 01A2:2057
cs=0x1a2;eip=0x002058; 	X(PUSH(ax));	// 3631 push    ax ;~ 01A2:2058
cs=0x1a2;eip=0x002059; 	X(PUSH(ax));	// 3632 push    ax ;~ 01A2:2059
cs=0x1a2;eip=0x00205a; 	J(CALLF(draw_button,0));	// 3633 call    draw_button ;~ 01A2:205A
cs=0x1a2;eip=0x00205f; 	T(ADD(sp, 0x14));	// 3634 add     sp, 14h ;~ 01A2:205F
cs=0x1a2;eip=0x002062; 	T(SUB(ax, ax));	// 3635 sub     ax, ax ;~ 01A2:2062
cs=0x1a2;eip=0x002064; 	X(PUSH(ax));	// 3636 push    ax ;~ 01A2:2064
cs=0x1a2;eip=0x002065; 	X(PUSH(word_407f8));	// 3637 push    word_407F8 ;~ 01A2:2065
cs=0x1a2;eip=0x002069; 	X(PUSH(word_407f6));	// 3638 push    word_407F6 ;~ 01A2:2069
cs=0x1a2;eip=0x00206d; 	X(PUSH(word_407f4));	// 3639 push    word_407F4 ;~ 01A2:206D
cs=0x1a2;eip=0x002071; 	T(MOV(ax, 0x55));	// 3640 mov     ax, 55h ; 'U' ;~ 01A2:2071
cs=0x1a2;eip=0x002074; 	X(PUSH(ax));	// 3641 push    ax ;~ 01A2:2074
cs=0x1a2;eip=0x002075; 	T(MOV(ax, 0x46));	// 3642 mov     ax, 46h ; 'F' ;~ 01A2:2075
cs=0x1a2;eip=0x002078; 	X(PUSH(ax));	// 3643 push    ax ;~ 01A2:2078
cs=0x1a2;eip=0x002079; 	T(MOV(ax, 0x6D));	// 3644 mov     ax, 6Dh ; 'm' ;~ 01A2:2079
cs=0x1a2;eip=0x00207c; 	X(PUSH(ax));	// 3645 push    ax ;~ 01A2:207C
cs=0x1a2;eip=0x00207d; 	T(MOV(ax, 5));	// 3646 mov     ax, 5 ;~ 01A2:207D
cs=0x1a2;eip=0x002080; 	X(PUSH(ax));	// 3647 push    ax ;~ 01A2:2080
cs=0x1a2;eip=0x002081; 	T(SUB(ax, ax));	// 3648 sub     ax, ax ;~ 01A2:2081
cs=0x1a2;eip=0x002083; 	X(PUSH(ax));	// 3649 push    ax ;~ 01A2:2083
cs=0x1a2;eip=0x002084; 	X(PUSH(ax));	// 3650 push    ax ;~ 01A2:2084
cs=0x1a2;eip=0x002085; 	J(CALLF(draw_button,0));	// 3651 call    draw_button ;~ 01A2:2085
cs=0x1a2;eip=0x00208a; 	T(ADD(sp, 0x14));	// 3652 add     sp, 14h ;~ 01A2:208A
cs=0x1a2;eip=0x00208d; 	T(SUB(ax, ax));	// 3653 sub     ax, ax ;~ 01A2:208D
cs=0x1a2;eip=0x00208f; 	X(PUSH(ax));	// 3654 push    ax ;~ 01A2:208F
cs=0x1a2;eip=0x002090; 	X(PUSH(word_407f8));	// 3655 push    word_407F8 ;~ 01A2:2090
cs=0x1a2;eip=0x002094; 	X(PUSH(word_407f6));	// 3656 push    word_407F6 ;~ 01A2:2094
cs=0x1a2;eip=0x002098; 	X(PUSH(word_407f4));	// 3657 push    word_407F4 ;~ 01A2:2098
cs=0x1a2;eip=0x00209c; 	T(MOV(ax, 0x55));	// 3658 mov     ax, 55h ; 'U' ;~ 01A2:209C
cs=0x1a2;eip=0x00209f; 	X(PUSH(ax));	// 3659 push    ax ;~ 01A2:209F
cs=0x1a2;eip=0x0020a0; 	T(MOV(ax, 0x8C));	// 3660 mov     ax, 8Ch ; 'Œ' ;~ 01A2:20A0
cs=0x1a2;eip=0x0020a3; 	X(PUSH(ax));	// 3661 push    ax ;~ 01A2:20A3
cs=0x1a2;eip=0x0020a4; 	T(MOV(ax, 0x6D));	// 3662 mov     ax, 6Dh ; 'm' ;~ 01A2:20A4
cs=0x1a2;eip=0x0020a7; 	X(PUSH(ax));	// 3663 push    ax ;~ 01A2:20A7
cs=0x1a2;eip=0x0020a8; 	T(MOV(ax, 0x52));	// 3664 mov     ax, 52h ; 'R' ;~ 01A2:20A8
cs=0x1a2;eip=0x0020ab; 	X(PUSH(ax));	// 3665 push    ax ;~ 01A2:20AB
cs=0x1a2;eip=0x0020ac; 	T(SUB(ax, ax));	// 3666 sub     ax, ax ;~ 01A2:20AC
cs=0x1a2;eip=0x0020ae; 	X(PUSH(ax));	// 3667 push    ax ;~ 01A2:20AE
cs=0x1a2;eip=0x0020af; 	X(PUSH(ax));	// 3668 push    ax ;~ 01A2:20AF
cs=0x1a2;eip=0x0020b0; 	J(CALLF(draw_button,0));	// 3669 call    draw_button ;~ 01A2:20B0
cs=0x1a2;eip=0x0020b5; 	T(ADD(sp, 0x14));	// 3670 add     sp, 14h ;~ 01A2:20B5
cs=0x1a2;eip=0x0020b8; 	T(MOV(ax, offset(dseg,agrap)));	// 3671 mov     ax, offset aGrap ; "grap" ;~ 01A2:20B8
cs=0x1a2;eip=0x0020bb; 	X(PUSH(ax));	// 3672 push    ax ;~ 01A2:20BB
cs=0x1a2;eip=0x0020bc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_34))));	// 3673 push    [bp+var_34] ;~ 01A2:20BC
cs=0x1a2;eip=0x0020bf; 	X(PUSH(*(dw*)(raddr(ss,bp+var_36))));	// 3674 push    [bp+var_36] ;~ 01A2:20BF
cs=0x1a2;eip=0x0020c2; 	J(CALLF(locate_shape_fatal,0));	// 3675 call    locate_shape_fatal ;~ 01A2:20C2
cs=0x1a2;eip=0x0020c7; 	T(ADD(sp, 6));	// 3676 add     sp, 6 ;~ 01A2:20C7
cs=0x1a2;eip=0x0020ca; 	X(PUSH(dx));	// 3677 push    dx ;~ 01A2:20CA
cs=0x1a2;eip=0x0020cb; 	X(PUSH(ax));	// 3678 push    ax ;~ 01A2:20CB
cs=0x1a2;eip=0x0020cc; 	J(CALLF(sprite_shape_to_1_alt,0));	// 3679 call    sprite_shape_to_1_alt ;~ 01A2:20CC
cs=0x1a2;eip=0x0020d1; 	T(ADD(sp, 4));	// 3680 add     sp, 4 ;~ 01A2:20D1
cs=0x1a2;eip=0x0020d4; 	X(PUSH(word_44d24));	// 3681 push    word_44D24 ;~ 01A2:20D4
cs=0x1a2;eip=0x0020d8; 	X(PUSH(fontnptr));	// 3682 push    fontnptr ;~ 01A2:20D8
cs=0x1a2;eip=0x0020dc; 	J(CALLF(font_set_fontdef2,0));	// 3683 call    font_set_fontdef2 ;~ 01A2:20DC
cs=0x1a2;eip=0x0020e1; 	T(ADD(sp, 4));	// 3684 add     sp, 4 ;~ 01A2:20E1
cs=0x1a2;eip=0x0020e4; 	X(PUSH(dialog_fnt_colour));	// 3685 push    dialog_fnt_colour ; the graph ;~ 01A2:20E4
cs=0x1a2;eip=0x0020e8; 	T(SUB(ax, ax));	// 3686 sub     ax, ax ;~ 01A2:20E8
cs=0x1a2;eip=0x0020ea; 	X(PUSH(ax));	// 3687 push    ax ;~ 01A2:20EA
cs=0x1a2;eip=0x0020eb; 	J(CALLF(font_set_unk,0));	// 3688 call    font_set_unk ;~ 01A2:20EB
cs=0x1a2;eip=0x0020f0; 	T(ADD(sp, 4));	// 3689 add     sp, 4 ;~ 01A2:20F0
cs=0x1a2;eip=0x0020f3; 	T(MOV(ax, 0x73));	// 3690 mov     ax, 73h ; 's' ;~ 01A2:20F3
cs=0x1a2;eip=0x0020f6; 	X(PUSH(ax));	// 3691 push    ax ;~ 01A2:20F6
cs=0x1a2;eip=0x0020f7; 	T(MOV(ax, 9));	// 3692 mov     ax, 9 ;~ 01A2:20F7
cs=0x1a2;eip=0x0020fa; 	X(PUSH(ax));	// 3693 push    ax ;~ 01A2:20FA
cs=0x1a2;eip=0x0020fb; 	T(MOV(ax, offset(dseg,a150)));	// 3694 mov     ax, offset a150 ; "150" ;~ 01A2:20FB
cs=0x1a2;eip=0x0020fe; 	X(PUSH(ax));	// 3695 push    ax ;~ 01A2:20FE
cs=0x1a2;eip=0x0020ff; 	J(CALLF(font_draw_text,0));	// 3696 call    font_draw_text ;~ 01A2:20FF
cs=0x1a2;eip=0x002104; 	T(ADD(sp, 6));	// 3697 add     sp, 6 ;~ 01A2:2104
cs=0x1a2;eip=0x002107; 	T(MOV(ax, 0x87));	// 3698 mov     ax, 87h ; '‡' ;~ 01A2:2107
cs=0x1a2;eip=0x00210a; 	X(PUSH(ax));	// 3699 push    ax ;~ 01A2:210A
cs=0x1a2;eip=0x00210b; 	T(MOV(ax, 9));	// 3700 mov     ax, 9 ;~ 01A2:210B
cs=0x1a2;eip=0x00210e; 	X(PUSH(ax));	// 3701 push    ax ;~ 01A2:210E
cs=0x1a2;eip=0x00210f; 	T(MOV(ax, offset(dseg,a100)));	// 3702 mov     ax, offset a100 ; "100" ;~ 01A2:210F
cs=0x1a2;eip=0x002112; 	X(PUSH(ax));	// 3703 push    ax ;~ 01A2:2112
cs=0x1a2;eip=0x002113; 	J(CALLF(font_draw_text,0));	// 3704 call    font_draw_text ;~ 01A2:2113
cs=0x1a2;eip=0x002118; 	T(ADD(sp, 6));	// 3705 add     sp, 6 ;~ 01A2:2118
cs=0x1a2;eip=0x00211b; 	T(MOV(ax, 0x9B));	// 3706 mov     ax, 9Bh ; '›' ;~ 01A2:211B
cs=0x1a2;eip=0x00211e; 	X(PUSH(ax));	// 3707 push    ax ;~ 01A2:211E
cs=0x1a2;eip=0x00211f; 	T(MOV(ax, 9));	// 3708 mov     ax, 9 ;~ 01A2:211F
cs=0x1a2;eip=0x002122; 	X(PUSH(ax));	// 3709 push    ax ;~ 01A2:2122
cs=0x1a2;eip=0x002123; 	T(MOV(ax, offset(dseg,a50)));	// 3710 mov     ax, offset a50  ; " 50" ;~ 01A2:2123
cs=0x1a2;eip=0x002126; 	X(PUSH(ax));	// 3711 push    ax ;~ 01A2:2126
cs=0x1a2;eip=0x002127; 	J(CALLF(font_draw_text,0));	// 3712 call    font_draw_text ;~ 01A2:2127
cs=0x1a2;eip=0x00212c; 	T(ADD(sp, 6));	// 3713 add     sp, 6 ;~ 01A2:212C
cs=0x1a2;eip=0x00212f; 	T(MOV(ax, 0x0AF));	// 3714 mov     ax, 0AFh ; '¯' ;~ 01A2:212F
cs=0x1a2;eip=0x002132; 	X(PUSH(ax));	// 3715 push    ax ;~ 01A2:2132
cs=0x1a2;eip=0x002133; 	T(MOV(ax, 9));	// 3716 mov     ax, 9 ;~ 01A2:2133
cs=0x1a2;eip=0x002136; 	X(PUSH(ax));	// 3717 push    ax ;~ 01A2:2136
cs=0x1a2;eip=0x002137; 	T(MOV(ax, offset(dseg,a0)));	// 3718 mov     ax, offset a0   ; "  0" ;~ 01A2:2137
cs=0x1a2;eip=0x00213a; 	X(PUSH(ax));	// 3719 push    ax ;~ 01A2:213A
cs=0x1a2;eip=0x00213b; 	J(CALLF(font_draw_text,0));	// 3720 call    font_draw_text ;~ 01A2:213B
cs=0x1a2;eip=0x002140; 	T(ADD(sp, 6));	// 3721 add     sp, 6 ;~ 01A2:2140
cs=0x1a2;eip=0x002143; 	T(MOV(ax, 0x0B9));	// 3722 mov     ax, 0B9h ; '¹' ;~ 01A2:2143
cs=0x1a2;eip=0x002146; 	X(PUSH(ax));	// 3723 push    ax ;~ 01A2:2146
cs=0x1a2;eip=0x002147; 	T(MOV(ax, 0x1A));	// 3724 mov     ax, 1Ah ;~ 01A2:2147
cs=0x1a2;eip=0x00214a; 	X(PUSH(ax));	// 3725 push    ax ;~ 01A2:214A
cs=0x1a2;eip=0x00214b; 	T(MOV(ax, offset(dseg,a02040)));	// 3726 mov     ax, offset a02040 ; "0  20  40" ;~ 01A2:214B
cs=0x1a2;eip=0x00214e; 	X(PUSH(ax));	// 3727 push    ax ;~ 01A2:214E
cs=0x1a2;eip=0x00214f; 	J(CALLF(font_draw_text,0));	// 3728 call    font_draw_text ;~ 01A2:214F
cs=0x1a2;eip=0x002154; 	T(ADD(sp, 6));	// 3729 add     sp, 6 ;~ 01A2:2154
cs=0x1a2;eip=0x002157; 	J(CALLF(font_set_fontdef,0));	// 3730 call    font_set_fontdef ;~ 01A2:2157
cs=0x1a2;eip=0x00215c; 	T(SUB(ax, ax));	// 3731 sub     ax, ax ;~ 01A2:215C
cs=0x1a2;eip=0x00215e; 	X(PUSH(ax));	// 3732 push    ax ;~ 01A2:215E
cs=0x1a2;eip=0x00215f; 	X(PUSH(word_407f8));	// 3733 push    word_407F8 ;~ 01A2:215F
cs=0x1a2;eip=0x002163; 	X(PUSH(word_407f6));	// 3734 push    word_407F6 ;~ 01A2:2163
cs=0x1a2;eip=0x002167; 	X(PUSH(word_407f4));	// 3735 push    word_407F4 ;~ 01A2:2167
cs=0x1a2;eip=0x00216b; 	T(MOV(ax, 0x10));	// 3736 mov     ax, 10h ;~ 01A2:216B
cs=0x1a2;eip=0x00216e; 	X(PUSH(ax));	// 3737 push    ax ;~ 01A2:216E
cs=0x1a2;eip=0x00216f; 	T(MOV(ax, 0x56));	// 3738 mov     ax, 56h ; 'V' ;~ 01A2:216F
cs=0x1a2;eip=0x002172; 	X(PUSH(ax));	// 3739 push    ax ;~ 01A2:2172
cs=0x1a2;eip=0x002173; 	T(MOV(ax, *(carmenu_buttons_x1)));	// 3740 mov     ax, carmenu_buttons_x1 ;~ 01A2:2173
cs=0x1a2;eip=0x002176; 	T(INC(ax));	// 3741 inc     ax ;~ 01A2:2176
cs=0x1a2;eip=0x002177; 	X(PUSH(ax));	// 3742 push    ax ;~ 01A2:2177
cs=0x1a2;eip=0x002178; 	T(MOV(ax, *(carmenu_buttons_y1)));	// 3743 mov     ax, carmenu_buttons_y1 ;~ 01A2:2178
cs=0x1a2;eip=0x00217b; 	T(INC(ax));	// 3744 inc     ax ;~ 01A2:217B
cs=0x1a2;eip=0x00217c; 	X(PUSH(ax));	// 3745 push    ax ;~ 01A2:217C
cs=0x1a2;eip=0x00217d; 	T(MOV(ax, offset(dseg,abdo_0)));	// 3746 mov     ax, offset aBdo_0 ; "bdo" ;~ 01A2:217D
cs=0x1a2;eip=0x002180; 	X(PUSH(ax));	// 3747 push    ax ;~ 01A2:2180
cs=0x1a2;eip=0x002181; 	X(PUSH(word_455ce));	// 3748 push    word_455CE ;~ 01A2:2181
cs=0x1a2;eip=0x002185; 	X(PUSH(miscptr));	// 3749 push    miscptr ;~ 01A2:2185
cs=0x1a2;eip=0x002189; 	J(CALLF(locate_text_res,0));	// 3750 call    locate_text_res ;~ 01A2:2189
cs=0x1a2;eip=0x00218e; 	T(ADD(sp, 6));	// 3751 add     sp, 6 ;~ 01A2:218E
cs=0x1a2;eip=0x002191; 	X(PUSH(dx));	// 3752 push    dx ;~ 01A2:2191
cs=0x1a2;eip=0x002192; 	X(PUSH(ax));	// 3753 push    ax ;~ 01A2:2192
cs=0x1a2;eip=0x002193; 	J(CALLF(draw_button,0));	// 3754 call    draw_button ;~ 01A2:2193
cs=0x1a2;eip=0x002198; 	T(ADD(sp, 0x14));	// 3755 add     sp, 14h ;~ 01A2:2198
cs=0x1a2;eip=0x00219b; 	T(SUB(ax, ax));	// 3756 sub     ax, ax ;~ 01A2:219B
cs=0x1a2;eip=0x00219d; 	X(PUSH(ax));	// 3757 push    ax ;~ 01A2:219D
cs=0x1a2;eip=0x00219e; 	X(PUSH(word_407f8));	// 3758 push    word_407F8 ;~ 01A2:219E
cs=0x1a2;eip=0x0021a2; 	X(PUSH(word_407f6));	// 3759 push    word_407F6 ;~ 01A2:21A2
cs=0x1a2;eip=0x0021a6; 	X(PUSH(word_407f4));	// 3760 push    word_407F4 ;~ 01A2:21A6
cs=0x1a2;eip=0x0021aa; 	T(MOV(ax, 0x10));	// 3761 mov     ax, 10h ;~ 01A2:21AA
cs=0x1a2;eip=0x0021ad; 	X(PUSH(ax));	// 3762 push    ax ;~ 01A2:21AD
cs=0x1a2;eip=0x0021ae; 	T(MOV(ax, 0x56));	// 3763 mov     ax, 56h ; 'V' ;~ 01A2:21AE
cs=0x1a2;eip=0x0021b1; 	X(PUSH(ax));	// 3764 push    ax ;~ 01A2:21B1
cs=0x1a2;eip=0x0021b2; 	T(MOV(ax, *(dw*)(((db*)carmenu_buttons_x1)+2)));	// 3765 mov     ax, carmenu_buttons_x1+2 ;~ 01A2:21B2
cs=0x1a2;eip=0x0021b5; 	T(INC(ax));	// 3766 inc     ax ;~ 01A2:21B5
cs=0x1a2;eip=0x0021b6; 	X(PUSH(ax));	// 3767 push    ax ;~ 01A2:21B6
cs=0x1a2;eip=0x0021b7; 	T(MOV(ax, *(carmenu_buttons_y1)));	// 3768 mov     ax, carmenu_buttons_y1 ;~ 01A2:21B7
cs=0x1a2;eip=0x0021ba; 	T(INC(ax));	// 3769 inc     ax ;~ 01A2:21BA
cs=0x1a2;eip=0x0021bb; 	X(PUSH(ax));	// 3770 push    ax ;~ 01A2:21BB
cs=0x1a2;eip=0x0021bc; 	T(MOV(ax, offset(dseg,abnx_0)));	// 3771 mov     ax, offset aBnx_0 ; "bnx" ;~ 01A2:21BC
cs=0x1a2;eip=0x0021bf; 	X(PUSH(ax));	// 3772 push    ax ;~ 01A2:21BF
cs=0x1a2;eip=0x0021c0; 	X(PUSH(word_455ce));	// 3773 push    word_455CE ;~ 01A2:21C0
cs=0x1a2;eip=0x0021c4; 	X(PUSH(miscptr));	// 3774 push    miscptr ;~ 01A2:21C4
cs=0x1a2;eip=0x0021c8; 	J(CALLF(locate_text_res,0));	// 3775 call    locate_text_res ;~ 01A2:21C8
cs=0x1a2;eip=0x0021cd; 	T(ADD(sp, 6));	// 3776 add     sp, 6 ;~ 01A2:21CD
cs=0x1a2;eip=0x0021d0; 	X(PUSH(dx));	// 3777 push    dx ;~ 01A2:21D0
cs=0x1a2;eip=0x0021d1; 	X(PUSH(ax));	// 3778 push    ax ;~ 01A2:21D1
cs=0x1a2;eip=0x0021d2; 	J(CALLF(draw_button,0));	// 3779 call    draw_button ;~ 01A2:21D2
cs=0x1a2;eip=0x0021d7; 	T(ADD(sp, 0x14));	// 3780 add     sp, 14h ;~ 01A2:21D7
cs=0x1a2;eip=0x0021da; 	T(SUB(ax, ax));	// 3781 sub     ax, ax ;~ 01A2:21DA
cs=0x1a2;eip=0x0021dc; 	X(PUSH(ax));	// 3782 push    ax ;~ 01A2:21DC
cs=0x1a2;eip=0x0021dd; 	X(PUSH(word_407f8));	// 3783 push    word_407F8 ;~ 01A2:21DD
cs=0x1a2;eip=0x0021e1; 	X(PUSH(word_407f6));	// 3784 push    word_407F6 ;~ 01A2:21E1
cs=0x1a2;eip=0x0021e5; 	X(PUSH(word_407f4));	// 3785 push    word_407F4 ;~ 01A2:21E5
cs=0x1a2;eip=0x0021e9; 	T(MOV(ax, 0x10));	// 3786 mov     ax, 10h ;~ 01A2:21E9
cs=0x1a2;eip=0x0021ec; 	X(PUSH(ax));	// 3787 push    ax ;~ 01A2:21EC
cs=0x1a2;eip=0x0021ed; 	T(MOV(ax, 0x56));	// 3788 mov     ax, 56h ; 'V' ;~ 01A2:21ED
cs=0x1a2;eip=0x0021f0; 	X(PUSH(ax));	// 3789 push    ax ;~ 01A2:21F0
cs=0x1a2;eip=0x0021f1; 	T(MOV(ax, *(dw*)(((db*)carmenu_buttons_x1)+4)));	// 3790 mov     ax, carmenu_buttons_x1+4 ;~ 01A2:21F1
cs=0x1a2;eip=0x0021f4; 	T(INC(ax));	// 3791 inc     ax ;~ 01A2:21F4
cs=0x1a2;eip=0x0021f5; 	X(PUSH(ax));	// 3792 push    ax ;~ 01A2:21F5
cs=0x1a2;eip=0x0021f6; 	T(MOV(ax, *(carmenu_buttons_y1)));	// 3793 mov     ax, carmenu_buttons_y1 ;~ 01A2:21F6
cs=0x1a2;eip=0x0021f9; 	T(INC(ax));	// 3794 inc     ax ;~ 01A2:21F9
cs=0x1a2;eip=0x0021fa; 	X(PUSH(ax));	// 3795 push    ax ;~ 01A2:21FA
cs=0x1a2;eip=0x0021fb; 	T(MOV(ax, offset(dseg,abla_0)));	// 3796 mov     ax, offset aBla_0 ; "bla" ;~ 01A2:21FB
cs=0x1a2;eip=0x0021fe; 	X(PUSH(ax));	// 3797 push    ax ;~ 01A2:21FE
cs=0x1a2;eip=0x0021ff; 	X(PUSH(word_455ce));	// 3798 push    word_455CE ;~ 01A2:21FF
cs=0x1a2;eip=0x002203; 	X(PUSH(miscptr));	// 3799 push    miscptr ;~ 01A2:2203
cs=0x1a2;eip=0x002207; 	J(CALLF(locate_text_res,0));	// 3800 call    locate_text_res ;~ 01A2:2207
cs=0x1a2;eip=0x00220c; 	T(ADD(sp, 6));	// 3801 add     sp, 6 ;~ 01A2:220C
cs=0x1a2;eip=0x00220f; 	X(PUSH(dx));	// 3802 push    dx ;~ 01A2:220F
cs=0x1a2;eip=0x002210; 	X(PUSH(ax));	// 3803 push    ax ;~ 01A2:2210
cs=0x1a2;eip=0x002211; 	J(CALLF(draw_button,0));	// 3804 call    draw_button ;~ 01A2:2211
cs=0x1a2;eip=0x002216; 	T(ADD(sp, 0x14));	// 3805 add     sp, 14h ;~ 01A2:2216
cs=0x1a2;eip=0x002219; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 3806 mov     bx, [bp+arg_4] ;~ 01A2:2219
cs=0x1a2;eip=0x00221c; 	T(CMP(*(raddr(ds,bx)), 0));	// 3807 cmp     byte ptr [bx], 0 ;~ 01A2:221C
cs=0x1a2;eip=0x00221f; 	J(JZ(loc_12226));	// 3808 jz      short loc_12226 ;~ 01A2:221F
cs=0x1a2;eip=0x002221; 	T(MOV(ax, offset(dseg,abau)));	// 3809 mov     ax, offset aBau ; "bau" ;~ 01A2:2221
cs=0x1a2;eip=0x002224; 	J(JMP(loc_12229));	// 3810 jmp     short loc_12229 ;~ 01A2:2224
loc_12226:
	// 4510 
cs=0x1a2;eip=0x002226; 	T(MOV(ax, offset(dseg,abma)));	// 3814 mov     ax, offset aBma ; "bma" ;~ 01A2:2226
loc_12229:
	// 4511 
cs=0x1a2;eip=0x002229; 	X(PUSH(ax));	// 3817 push    ax ;~ 01A2:2229
cs=0x1a2;eip=0x00222a; 	X(PUSH(word_455ce));	// 3818 push    word_455CE ;~ 01A2:222A
cs=0x1a2;eip=0x00222e; 	X(PUSH(miscptr));	// 3819 push    miscptr ;~ 01A2:222E
cs=0x1a2;eip=0x002232; 	J(CALLF(locate_text_res,0));	// 3820 call    locate_text_res ;~ 01A2:2232
cs=0x1a2;eip=0x002237; 	T(ADD(sp, 6));	// 3821 add     sp, 6 ;~ 01A2:2237
cs=0x1a2;eip=0x00223a; 	X(MOV(*(dw*)(raddr(ss,bp+var_3c)), ax));	// 3822 mov     [bp+var_3C], ax ;~ 01A2:223A
cs=0x1a2;eip=0x00223d; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), dx));	// 3823 mov     [bp+var_3A], dx ;~ 01A2:223D
cs=0x1a2;eip=0x002240; 	T(SUB(ax, ax));	// 3824 sub     ax, ax ;~ 01A2:2240
cs=0x1a2;eip=0x002242; 	X(PUSH(ax));	// 3825 push    ax ;~ 01A2:2242
cs=0x1a2;eip=0x002243; 	X(PUSH(word_407f8));	// 3826 push    word_407F8 ;~ 01A2:2243
cs=0x1a2;eip=0x002247; 	X(PUSH(word_407f6));	// 3827 push    word_407F6 ;~ 01A2:2247
cs=0x1a2;eip=0x00224b; 	X(PUSH(word_407f4));	// 3828 push    word_407F4 ;~ 01A2:224B
cs=0x1a2;eip=0x00224f; 	T(MOV(ax, 0x10));	// 3829 mov     ax, 10h ;~ 01A2:224F
cs=0x1a2;eip=0x002252; 	X(PUSH(ax));	// 3830 push    ax ;~ 01A2:2252
cs=0x1a2;eip=0x002253; 	T(MOV(ax, 0x56));	// 3831 mov     ax, 56h ; 'V' ;~ 01A2:2253
cs=0x1a2;eip=0x002256; 	X(PUSH(ax));	// 3832 push    ax ;~ 01A2:2256
cs=0x1a2;eip=0x002257; 	T(MOV(ax, *(dw*)(((db*)carmenu_buttons_x1)+6)));	// 3833 mov     ax, carmenu_buttons_x1+6 ;~ 01A2:2257
cs=0x1a2;eip=0x00225a; 	T(INC(ax));	// 3834 inc     ax ;~ 01A2:225A
cs=0x1a2;eip=0x00225b; 	X(PUSH(ax));	// 3835 push    ax ;~ 01A2:225B
cs=0x1a2;eip=0x00225c; 	T(MOV(ax, *(carmenu_buttons_y1)));	// 3836 mov     ax, carmenu_buttons_y1 ;~ 01A2:225C
cs=0x1a2;eip=0x00225f; 	T(INC(ax));	// 3837 inc     ax ;~ 01A2:225F
cs=0x1a2;eip=0x002260; 	X(PUSH(ax));	// 3838 push    ax ;~ 01A2:2260
cs=0x1a2;eip=0x002261; 	X(PUSH(dx));	// 3839 push    dx ;~ 01A2:2261
cs=0x1a2;eip=0x002262; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3c))));	// 3840 push    [bp+var_3C] ;~ 01A2:2262
cs=0x1a2;eip=0x002265; 	J(CALLF(draw_button,0));	// 3841 call    draw_button ;~ 01A2:2265
cs=0x1a2;eip=0x00226a; 	T(ADD(sp, 0x14));	// 3842 add     sp, 14h ;~ 01A2:226A
cs=0x1a2;eip=0x00226d; 	T(SUB(ax, ax));	// 3843 sub     ax, ax ;~ 01A2:226D
cs=0x1a2;eip=0x00226f; 	X(PUSH(ax));	// 3844 push    ax ;~ 01A2:226F
cs=0x1a2;eip=0x002270; 	X(PUSH(word_407f8));	// 3845 push    word_407F8 ;~ 01A2:2270
cs=0x1a2;eip=0x002274; 	X(PUSH(word_407f6));	// 3846 push    word_407F6 ;~ 01A2:2274
cs=0x1a2;eip=0x002278; 	X(PUSH(word_407f4));	// 3847 push    word_407F4 ;~ 01A2:2278
cs=0x1a2;eip=0x00227c; 	T(MOV(ax, 0x10));	// 3848 mov     ax, 10h ;~ 01A2:227C
cs=0x1a2;eip=0x00227f; 	X(PUSH(ax));	// 3849 push    ax ;~ 01A2:227F
cs=0x1a2;eip=0x002280; 	T(MOV(ax, 0x56));	// 3850 mov     ax, 56h ; 'V' ;~ 01A2:2280
cs=0x1a2;eip=0x002283; 	X(PUSH(ax));	// 3851 push    ax ;~ 01A2:2283
cs=0x1a2;eip=0x002284; 	T(MOV(ax, *(dw*)(((db*)carmenu_buttons_x1)+8)));	// 3852 mov     ax, carmenu_buttons_x1+8 ;~ 01A2:2284
cs=0x1a2;eip=0x002287; 	T(INC(ax));	// 3853 inc     ax ;~ 01A2:2287
cs=0x1a2;eip=0x002288; 	X(PUSH(ax));	// 3854 push    ax ;~ 01A2:2288
cs=0x1a2;eip=0x002289; 	T(MOV(ax, *(carmenu_buttons_y1)));	// 3855 mov     ax, carmenu_buttons_y1 ;~ 01A2:2289
cs=0x1a2;eip=0x00228c; 	T(INC(ax));	// 3856 inc     ax ;~ 01A2:228C
cs=0x1a2;eip=0x00228d; 	X(PUSH(ax));	// 3857 push    ax ;~ 01A2:228D
cs=0x1a2;eip=0x00228e; 	T(MOV(ax, offset(dseg,abco)));	// 3858 mov     ax, offset aBco ; "bco" ;~ 01A2:228E
cs=0x1a2;eip=0x002291; 	X(PUSH(ax));	// 3859 push    ax ;~ 01A2:2291
cs=0x1a2;eip=0x002292; 	X(PUSH(word_455ce));	// 3860 push    word_455CE ;~ 01A2:2292
cs=0x1a2;eip=0x002296; 	X(PUSH(miscptr));	// 3861 push    miscptr ;~ 01A2:2296
cs=0x1a2;eip=0x00229a; 	J(CALLF(locate_text_res,0));	// 3862 call    locate_text_res ;~ 01A2:229A
cs=0x1a2;eip=0x00229f; 	T(ADD(sp, 6));	// 3863 add     sp, 6 ;~ 01A2:229F
cs=0x1a2;eip=0x0022a2; 	X(PUSH(dx));	// 3864 push    dx ;~ 01A2:22A2
cs=0x1a2;eip=0x0022a3; 	X(PUSH(ax));	// 3865 push    ax ;~ 01A2:22A3
cs=0x1a2;eip=0x0022a4; 	J(CALLF(draw_button,0));	// 3866 call    draw_button ;~ 01A2:22A4
cs=0x1a2;eip=0x0022a9; 	T(ADD(sp, 0x14));	// 3867 add     sp, 14h ;~ 01A2:22A9
cs=0x1a2;eip=0x0022ac; 	T(MOV(ax, framespersec));	// 3868 mov     ax, framespersec ;~ 01A2:22AC
cs=0x1a2;eip=0x0022af; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 3869 mov     [bp+var_12], ax ;~ 01A2:22AF
cs=0x1a2;eip=0x0022b2; 	X(MOV(framespersec, 0x14));	// 3870 mov     framespersec, 14h ;~ 01A2:22B2
cs=0x1a2;eip=0x0022b8; 	T(MOV(ax, 0x0FFFE));	// 3871 mov     ax, 0FFFEh ;~ 01A2:22B8
cs=0x1a2;eip=0x0022bb; 	X(PUSH(ax));	// 3872 push    ax ;~ 01A2:22BB
cs=0x1a2;eip=0x0022bc; 	J(CALLF(init_game_state,0));	// 3873 call    init_game_state ;~ 01A2:22BC
cs=0x1a2;eip=0x0022c1; 	T(ADD(sp, 2));	// 3874 add     sp, 2 ;~ 01A2:22C1
cs=0x1a2;eip=0x0022c4; 	X(MOV(byte_446b2, 1));	// 3875 mov     byte_446B2, 1 ;~ 01A2:22C4
cs=0x1a2;eip=0x0022c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_4a)), 0));	// 3876 mov     [bp+var_4A], 0 ;~ 01A2:22C9
loc_122ce:
	// 4512 
cs=0x1a2;eip=0x0022ce; 	T(MOV(ax, offset(dseg,simd_player)));	// 3879 mov     ax, offset simd_player ;~ 01A2:22CE
cs=0x1a2;eip=0x0022d1; 	X(PUSH(ax));	// 3880 push    ax ;~ 01A2:22D1
cs=0x1a2;eip=0x0022d2; 	T(MOV(ax, offset(dseg,word_445e6)));	// 3881 mov     ax, offset word_445E6 ;~ 01A2:22D2
cs=0x1a2;eip=0x0022d5; 	X(PUSH(ax));	// 3882 push    ax ;~ 01A2:22D5
cs=0x1a2;eip=0x0022d6; 	T(SUB(ax, ax));	// 3883 sub     ax, ax ;~ 01A2:22D6
cs=0x1a2;eip=0x0022d8; 	X(PUSH(ax));	// 3884 push    ax ;~ 01A2:22D8
cs=0x1a2;eip=0x0022d9; 	T(MOV(ax, 1));	// 3885 mov     ax, 1 ;~ 01A2:22D9
cs=0x1a2;eip=0x0022dc; 	X(PUSH(ax));	// 3886 push    ax ;~ 01A2:22DC
cs=0x1a2;eip=0x0022dd; 	J(CALLF(update_car_speed,0));	// 3887 call    update_car_speed ;~ 01A2:22DD
cs=0x1a2;eip=0x0022e2; 	T(ADD(sp, 8));	// 3888 add     sp, 8 ;~ 01A2:22E2
cs=0x1a2;eip=0x0022e5; 	T(MOV(ax, word_44610));	// 3889 mov     ax, word_44610 ;~ 01A2:22E5
cs=0x1a2;eip=0x0022e8; 	T(MOV(cl, 8));	// 3890 mov     cl, 8 ;~ 01A2:22E8
cs=0x1a2;eip=0x0022ea; 	T(SHR(ax, cl));	// 3891 shr     ax, cl ;~ 01A2:22EA
cs=0x1a2;eip=0x0022ec; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 3892 mov     [bp+var_8], ax ;~ 01A2:22EC
cs=0x1a2;eip=0x0022ef; 	T(MOV(ax, 0x96));	// 3893 mov     ax, 96h ; '–' ;~ 01A2:22EF
cs=0x1a2;eip=0x0022f2; 	T(CWD);	// 3894 cwd ;~ 01A2:22F2
cs=0x1a2;eip=0x0022f3; 	X(PUSH(dx));	// 3895 push    dx ;~ 01A2:22F3
cs=0x1a2;eip=0x0022f4; 	X(PUSH(ax));	// 3896 push    ax ;~ 01A2:22F4
cs=0x1a2;eip=0x0022f5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 3897 mov     ax, [bp+var_8] ;~ 01A2:22F5
cs=0x1a2;eip=0x0022f8; 	T(CWD);	// 3898 cwd ;~ 01A2:22F8
cs=0x1a2;eip=0x0022f9; 	T(MOV(cl, 6));	// 3899 mov     cl, 6 ;~ 01A2:22F9
loc_122fb:
	// 4513 
cs=0x1a2;eip=0x0022fb; 	T(SHL(ax, 1));	// 3902 shl     ax, 1 ;~ 01A2:22FB
cs=0x1a2;eip=0x0022fd; 	T(RCL(dx, 1));	// 3903 rcl     dx, 1 ;~ 01A2:22FD
cs=0x1a2;eip=0x0022ff; 	T(DEC(cl));	// 3904 dec     cl ;~ 01A2:22FF
cs=0x1a2;eip=0x002301; 	J(JNZ(loc_122fb));	// 3905 jnz     short loc_122FB ;~ 01A2:2301
cs=0x1a2;eip=0x002303; 	X(PUSH(dx));	// 3906 push    dx ;~ 01A2:2303
cs=0x1a2;eip=0x002304; 	X(PUSH(ax));	// 3907 push    ax ;~ 01A2:2304
cs=0x1a2;eip=0x002305; 	J(CALLF(__afuldiv,0));	// 3908 call    __aFuldiv ;~ 01A2:2305
cs=0x1a2;eip=0x00230a; 	T(SUB(ax, 0x0B5));	// 3909 sub     ax, 0B5h ; 'µ' ;~ 01A2:230A
cs=0x1a2;eip=0x00230d; 	T(NEG(ax));	// 3910 neg     ax ;~ 01A2:230D
cs=0x1a2;eip=0x00230f; 	X(MOV(*(dw*)(raddr(ss,bp+var_48)), ax));	// 3911 mov     [bp+var_48], ax ;~ 01A2:230F
cs=0x1a2;eip=0x002312; 	T(CMP(ax, 0x75));	// 3912 cmp     ax, 75h ; 'u' ;~ 01A2:2312
cs=0x1a2;eip=0x002315; 	J(JC(loc_12344));	// 3913 jb      short loc_12344 ;~ 01A2:2315
cs=0x1a2;eip=0x002317; 	T(MOV(ax, 0x26));	// 3914 mov     ax, 26h ; '&' ;~ 01A2:2317
cs=0x1a2;eip=0x00231a; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_4a))));	// 3915 imul    [bp+var_4A] ;~ 01A2:231A
cs=0x1a2;eip=0x00231d; 	T(SUB(dx, dx));	// 3916 sub     dx, dx ;~ 01A2:231D
cs=0x1a2;eip=0x00231f; 	T(MOV(cx, 0x320));	// 3917 mov     cx, 320h ;~ 01A2:231F
cs=0x1a2;eip=0x002322; 	T(DIV2(cx));	// 3918 div     cx ;~ 01A2:2322
cs=0x1a2;eip=0x002324; 	T(ADD(ax, 0x1C));	// 3919 add     ax, 1Ch ;~ 01A2:2324
cs=0x1a2;eip=0x002327; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 3920 mov     [bp+var_44], ax ;~ 01A2:2327
cs=0x1a2;eip=0x00232a; 	X(PUSH(performgraphcolor));	// 3921 push    performGraphColor ;~ 01A2:232A
cs=0x1a2;eip=0x00232e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_48))));	// 3922 push    [bp+var_48] ;~ 01A2:232E
cs=0x1a2;eip=0x002331; 	X(PUSH(ax));	// 3923 push    ax ;~ 01A2:2331
cs=0x1a2;eip=0x002332; 	J(CALLF(putpixel_single_maybe,0));	// 3924 call    putpixel_single_maybe ;~ 01A2:2332
cs=0x1a2;eip=0x002337; 	T(ADD(sp, 6));	// 3925 add     sp, 6 ;~ 01A2:2337
cs=0x1a2;eip=0x00233a; 	X(INC(*(dw*)(raddr(ss,bp+var_4a))));	// 3926 inc     [bp+var_4A] ;~ 01A2:233A
cs=0x1a2;eip=0x00233d; 	T(CMP(*(dw*)(raddr(ss,bp+var_4a)), 0x320));	// 3927 cmp     [bp+var_4A], 320h ;~ 01A2:233D
cs=0x1a2;eip=0x002342; 	J(JL(loc_122ce));	// 3928 jl      short loc_122CE ;~ 01A2:2342
loc_12344:
	// 4514 
cs=0x1a2;eip=0x002344; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 3931 mov     ax, [bp+var_12] ;~ 01A2:2344
cs=0x1a2;eip=0x002347; 	X(MOV(framespersec, ax));	// 3932 mov     framespersec, ax ;~ 01A2:2347
cs=0x1a2;eip=0x00234a; 	X(PUSH(word_44d24));	// 3933 push    word_44D24 ;~ 01A2:234A
cs=0x1a2;eip=0x00234e; 	X(PUSH(fontnptr));	// 3934 push    fontnptr ;~ 01A2:234E
cs=0x1a2;eip=0x002352; 	J(CALLF(font_set_fontdef2,0));	// 3935 call    font_set_fontdef2 ;~ 01A2:2352
cs=0x1a2;eip=0x002357; 	T(ADD(sp, 4));	// 3936 add     sp, 4 ;~ 01A2:2357
cs=0x1a2;eip=0x00235a; 	T(MOV(ax, offset(dseg,ades_1)));	// 3937 mov     ax, offset aDes_1 ; "des" ;~ 01A2:235A
cs=0x1a2;eip=0x00235d; 	X(PUSH(ax));	// 3938 push    ax ;~ 01A2:235D
cs=0x1a2;eip=0x00235e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 3939 push    [bp+var_2] ;~ 01A2:235E
cs=0x1a2;eip=0x002361; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 3940 push    [bp+var_4] ;~ 01A2:2361
cs=0x1a2;eip=0x002364; 	J(CALLF(locate_text_res,0));	// 3941 call    locate_text_res ;~ 01A2:2364
cs=0x1a2;eip=0x002369; 	T(ADD(sp, 6));	// 3942 add     sp, 6 ;~ 01A2:2369
cs=0x1a2;eip=0x00236c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_fc))), ax));	// 3943 mov     word ptr [bp+var_FC], ax ;~ 01A2:236C
cs=0x1a2;eip=0x002370; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_fc+2))), dx));	// 3944 mov     word ptr [bp+var_FC+2], dx ;~ 01A2:2370
cs=0x1a2;eip=0x002374; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), 0));	// 3945 mov     [bp+var_44], 0 ;~ 01A2:2374
cs=0x1a2;eip=0x002379; 	X(MOV(*(dw*)(raddr(ss,bp+var_48)), 0x74));	// 3946 mov     [bp+var_48], 74h ; 't' ;~ 01A2:2379
loc_1237e:
	// 4515 
cs=0x1a2;eip=0x00237e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_fc))));	// 3949 les     bx, [bp+var_FC] ;~ 01A2:237E
cs=0x1a2;eip=0x002382; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_fc)))));	// 3950 inc     word ptr [bp+var_FC] ;~ 01A2:2382
cs=0x1a2;eip=0x002386; 	T(MOV(al, *(raddr(es,bx))));	// 3951 mov     al, es:[bx] ;~ 01A2:2386
cs=0x1a2;eip=0x002389; 	X(MOV(*(raddr(ss,bp+var_1c)), al));	// 3952 mov     [bp+var_1C], al ;~ 01A2:2389
cs=0x1a2;eip=0x00238c; 	T(CMP(al, 0x5D));	// 3953 cmp     al, 5Dh ; ']' ;~ 01A2:238C
cs=0x1a2;eip=0x00238e; 	J(JNZ(loc_123be));	// 3954 jnz     short loc_123BE ;~ 01A2:238E
cs=0x1a2;eip=0x002390; 	T(CMP(*(dw*)(raddr(ss,bp+var_44)), 0));	// 3955 cmp     [bp+var_44], 0 ;~ 01A2:2390
cs=0x1a2;eip=0x002394; 	J(JZ(loc_123b1));	// 3956 jz      short loc_123B1 ;~ 01A2:2394
cs=0x1a2;eip=0x002396; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_44))));	// 3957 mov     bx, [bp+var_44] ;~ 01A2:2396
cs=0x1a2;eip=0x002399; 	X(MOV(*((&resid_byte1)+bx), 0));	// 3958 mov     resID_byte1[bx], 0 ;~ 01A2:2399
cs=0x1a2;eip=0x00239e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_48))));	// 3959 push    [bp+var_48] ;~ 01A2:239E
cs=0x1a2;eip=0x0023a1; 	T(MOV(ax, 0x58));	// 3960 mov     ax, 58h ; 'X' ;~ 01A2:23A1
cs=0x1a2;eip=0x0023a4; 	X(PUSH(ax));	// 3961 push    ax ;~ 01A2:23A4
cs=0x1a2;eip=0x0023a5; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 3962 mov     ax, offset resID_byte1 ;~ 01A2:23A5
cs=0x1a2;eip=0x0023a8; 	X(PUSH(ax));	// 3963 push    ax ;~ 01A2:23A8
cs=0x1a2;eip=0x0023a9; 	J(CALLF(font_draw_text,0));	// 3964 call    font_draw_text ;~ 01A2:23A9
cs=0x1a2;eip=0x0023ae; 	T(ADD(sp, 6));	// 3965 add     sp, 6 ;~ 01A2:23AE
loc_123b1:
	// 4516 
cs=0x1a2;eip=0x0023b1; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), 0));	// 3968 mov     [bp+var_44], 0 ;~ 01A2:23B1
cs=0x1a2;eip=0x0023b6; 	T(MOV(ax, fontdef_unk_0e));	// 3969 mov     ax, fontdef_unk_0E ;~ 01A2:23B6
cs=0x1a2;eip=0x0023b9; 	X(ADD(*(dw*)(raddr(ss,bp+var_48)), ax));	// 3970 add     [bp+var_48], ax ;~ 01A2:23B9
cs=0x1a2;eip=0x0023bc; 	J(JMP(loc_123cb));	// 3971 jmp     short loc_123CB ;~ 01A2:23BC
loc_123be:
	// 4517 
cs=0x1a2;eip=0x0023be; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_44))));	// 3975 mov     bx, [bp+var_44] ;~ 01A2:23BE
cs=0x1a2;eip=0x0023c1; 	X(INC(*(dw*)(raddr(ss,bp+var_44))));	// 3976 inc     [bp+var_44] ;~ 01A2:23C1
cs=0x1a2;eip=0x0023c4; 	T(MOV(al, *(raddr(ss,bp+var_1c))));	// 3977 mov     al, [bp+var_1C] ;~ 01A2:23C4
cs=0x1a2;eip=0x0023c7; 	X(MOV(*((&resid_byte1)+bx), al));	// 3978 mov     resID_byte1[bx], al ;~ 01A2:23C7
loc_123cb:
	// 4518 
cs=0x1a2;eip=0x0023cb; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_fc))));	// 3981 les     bx, [bp+var_FC] ;~ 01A2:23CB
cs=0x1a2;eip=0x0023cf; 	T(CMP(*(raddr(es,bx)), 0));	// 3982 cmp     byte ptr es:[bx], 0 ;~ 01A2:23CF
cs=0x1a2;eip=0x0023d3; 	J(JNZ(loc_1237e));	// 3983 jnz     short loc_1237E ;~ 01A2:23D3
cs=0x1a2;eip=0x0023d5; 	J(CALLF(font_set_fontdef,0));	// 3984 call    font_set_fontdef ;~ 01A2:23D5
cs=0x1a2;eip=0x0023da; 	J(CALLF(timer_get_delta_alt,0));	// 3985 call    timer_get_delta_alt ;~ 01A2:23DA
cs=0x1a2;eip=0x0023df; 	X(MOV(*(raddr(ss,bp+var_f2)), 0x0FF));	// 3986 mov     [bp+var_F2], 0FFh ;~ 01A2:23DF
cs=0x1a2;eip=0x0023e4; 	X(MOV(*(dw*)(raddr(ss,bp+var_104)), 0));	// 3987 mov     [bp+var_104], 0 ;~ 01A2:23E4
cs=0x1a2;eip=0x0023ea; 	X(MOV(*(dw*)(raddr(ss,bp+var_102)), 0x140));	// 3988 mov     [bp+var_102], 140h ;~ 01A2:23EA
cs=0x1a2;eip=0x0023f0; 	X(MOV(*(dw*)(raddr(ss,bp+var_100)), 0));	// 3989 mov     [bp+var_100], 0 ;~ 01A2:23F0
cs=0x1a2;eip=0x0023f6; 	X(MOV(*(dw*)(raddr(ss,bp+var_fe)), 0x0C8));	// 3990 mov     [bp+var_FE], 0C8h ; 'È' ;~ 01A2:23F6
cs=0x1a2;eip=0x0023fc; 	X(MOV(*(raddr(ss,bp+var_108)), 0));	// 3991 mov     [bp+var_108], 0 ;~ 01A2:23FC
cs=0x1a2;eip=0x002401; 	X(MOV(*(raddr(ss,bp+var_6)), 3));	// 3992 mov     [bp+var_6], 3 ;~ 01A2:2401
loc_12405:
	// 4519 
cs=0x1a2;eip=0x002405; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4c))));	// 3995 mov     ax, [bp+var_4C] ;~ 01A2:2405
cs=0x1a2;eip=0x002408; 	X(ADD(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 3996 add     [bp+var_1E], ax ;~ 01A2:2408
cs=0x1a2;eip=0x00240b; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 3997 mov     al, [bp+var_6] ;~ 01A2:240B
cs=0x1a2;eip=0x00240e; 	T(CBW);	// 3998 cbw ;~ 01A2:240E
cs=0x1a2;eip=0x00240f; 	T(OR(ax, ax));	// 3999 or      ax, ax ;~ 01A2:240F
cs=0x1a2;eip=0x002411; 	J(JZ(loc_12423));	// 4000 jz      short loc_12423 ;~ 01A2:2411
cs=0x1a2;eip=0x002413; 	T(CMP(ax, 1));	// 4001 cmp     ax, 1 ;~ 01A2:2413
cs=0x1a2;eip=0x002416; 	J(JNZ(loc_1241b));	// 4002 jnz     short loc_1241B ;~ 01A2:2416
cs=0x1a2;eip=0x002418; 	J(JMP(loc_125fe));	// 4003 jmp     loc_125FE ;~ 01A2:2418
loc_1241b:
	// 4520 
cs=0x1a2;eip=0x00241b; 	T(CMP(ax, 3));	// 4007 cmp     ax, 3 ;~ 01A2:241B
cs=0x1a2;eip=0x00241e; 	J(JZ(loc_12423));	// 4008 jz      short loc_12423 ;~ 01A2:241E
cs=0x1a2;eip=0x002420; 	J(JMP(loc_124de));	// 4009 jmp     loc_124DE ;~ 01A2:2420
loc_12423:
	// 4521 
cs=0x1a2;eip=0x002423; 	X(PUSH(word_3bb62));	// 4014 push    word_3BB62 ;~ 01A2:2423
cs=0x1a2;eip=0x002427; 	X(PUSH(word_3bb60));	// 4015 push    word_3BB60 ;~ 01A2:2427
cs=0x1a2;eip=0x00242b; 	J(CALLF(polarangle,0));	// 4016 call    polarAngle ;~ 01A2:242B
cs=0x1a2;eip=0x002430; 	T(ADD(sp, 4));	// 4017 add     sp, 4 ;~ 01A2:2430
cs=0x1a2;eip=0x002433; 	X(MOV(*(dw*)(raddr(ss,bp+var_f8)), ax));	// 4018 mov     [bp+var_F8], ax ;~ 01A2:2433
cs=0x1a2;eip=0x002437; 	T(CMP(timertestflag_copy, 0));	// 4019 cmp     timertestflag_copy, 0 ;~ 01A2:2437
cs=0x1a2;eip=0x00243c; 	J(JZ(loc_12448));	// 4020 jz      short loc_12448 ;~ 01A2:243C
cs=0x1a2;eip=0x00243e; 	X(PUSH(si));	// 4021 push    si ;~ 01A2:243E
cs=0x1a2;eip=0x00243f; 	T(di = bp+var_10);	// 4022 lea     di, [bp+var_10] ;~ 01A2:243F
cs=0x1a2;eip=0x002442; 	T(MOV(si, offset(dseg,cliprect_unk)));	// 4023 mov     si, offset cliprect_unk ;~ 01A2:2442
cs=0x1a2;eip=0x002445; 	J(JMP(loc_1244f));	// 4024 jmp     short loc_1244F ;~ 01A2:2445
loc_12448:
	// 4522 
cs=0x1a2;eip=0x002448; 	X(PUSH(si));	// 4029 push    si ;~ 01A2:2448
cs=0x1a2;eip=0x002449; 	T(di = bp+var_10);	// 4030 lea     di, [bp+var_10] ;~ 01A2:2449
cs=0x1a2;eip=0x00244c; 	T(MOV(si, offset(dseg,carmenu_cliprect)));	// 4031 mov     si, offset carmenu_cliprect ;~ 01A2:244C
loc_1244f:
	// 4523 
cs=0x1a2;eip=0x00244f; 	X(PUSH(ss));	// 4034 push    ss ;~ 01A2:244F
cs=0x1a2;eip=0x002450; 	X(POP(es));	// 4035 pop     es ;~ 01A2:2450
cs=0x1a2;eip=0x002451; 	X(MOVSW);	// 4036 movsw ;~ 01A2:2451
cs=0x1a2;eip=0x002452; 	X(MOVSW);	// 4037 movsw ;~ 01A2:2452
cs=0x1a2;eip=0x002453; 	X(MOVSW);	// 4038 movsw ;~ 01A2:2453
cs=0x1a2;eip=0x002454; 	X(MOVSW);	// 4039 movsw ;~ 01A2:2454
cs=0x1a2;eip=0x002455; 	X(POP(si));	// 4040 pop     si ;~ 01A2:2455
cs=0x1a2;eip=0x002456; 	T(SUB(ax, ax));	// 4041 sub     ax, ax ;~ 01A2:2456
cs=0x1a2;eip=0x002458; 	X(PUSH(ax));	// 4042 push    ax ;~ 01A2:2458
cs=0x1a2;eip=0x002459; 	T(MOV(ax, offset(dseg,carmenu_cliprect)));	// 4043 mov     ax, offset carmenu_cliprect ;~ 01A2:2459
cs=0x1a2;eip=0x00245c; 	X(PUSH(ax));	// 4044 push    ax ;~ 01A2:245C
cs=0x1a2;eip=0x00245d; 	T(SUB(ax, ax));	// 4045 sub     ax, ax ;~ 01A2:245D
cs=0x1a2;eip=0x00245f; 	X(PUSH(ax));	// 4046 push    ax ;~ 01A2:245F
cs=0x1a2;eip=0x002460; 	X(PUSH(*(dw*)(raddr(ss,bp+var_f8))));	// 4047 push    [bp+var_F8] ;~ 01A2:2460
cs=0x1a2;eip=0x002464; 	X(PUSH(ax));	// 4048 push    ax ;~ 01A2:2464
cs=0x1a2;eip=0x002465; 	J(CALLF(select_cliprect_rotate,0));	// 4049 call    select_cliprect_rotate ;~ 01A2:2465
cs=0x1a2;eip=0x00246a; 	T(ADD(sp, 0x0A));	// 4050 add     sp, 0Ah ;~ 01A2:246A
cs=0x1a2;eip=0x00246d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 4051 mov     bx, [bp+arg_2] ;~ 01A2:246D
cs=0x1a2;eip=0x002470; 	T(MOV(al, byte_4386c));	// 4052 mov     al, byte_4386C ;~ 01A2:2470
cs=0x1a2;eip=0x002473; 	T(CMP(*(raddr(ds,bx)), al));	// 4053 cmp     [bx], al ;~ 01A2:2473
cs=0x1a2;eip=0x002475; 	J(JL(loc_1247a));	// 4054 jl      short loc_1247A ;~ 01A2:2475
cs=0x1a2;eip=0x002477; 	X(MOV(*(raddr(ds,bx)), 0));	// 4055 mov     byte ptr [bx], 0 ;~ 01A2:2477
loc_1247a:
	// 4524 
cs=0x1a2;eip=0x00247a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 4058 mov     ax, [bp+var_1E] ;~ 01A2:247A
cs=0x1a2;eip=0x00247d; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 4059 mov     [bp+var_24], ax ;~ 01A2:247D
cs=0x1a2;eip=0x002480; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 4060 mov     bx, [bp+arg_2] ;~ 01A2:2480
cs=0x1a2;eip=0x002483; 	T(MOV(al, *(raddr(ds,bx))));	// 4061 mov     al, [bx] ;~ 01A2:2483
cs=0x1a2;eip=0x002485; 	X(MOV(*(raddr(ss,bp+var_1f)), al));	// 4062 mov     [bp+var_1F], al ;~ 01A2:2485
cs=0x1a2;eip=0x002488; 	T(ax = bp+var_32);	// 4063 lea     ax, [bp+var_32] ;~ 01A2:2488
cs=0x1a2;eip=0x00248b; 	X(PUSH(ax));	// 4064 push    ax ;~ 01A2:248B
cs=0x1a2;eip=0x00248c; 	J(CALLF(transformed_shape_op,0));	// 4065 call    transformed_shape_op ;~ 01A2:248C
cs=0x1a2;eip=0x002491; 	T(ADD(sp, 2));	// 4066 add     sp, 2 ;~ 01A2:2491
cs=0x1a2;eip=0x002494; 	T(MOV(al, *(raddr(ss,bp+var_38))));	// 4067 mov     al, [bp+var_38] ;~ 01A2:2494
cs=0x1a2;eip=0x002497; 	T(CMP(*(raddr(ss,bp+var_f0)), al));	// 4068 cmp     [bp+var_F0], al ;~ 01A2:2497
cs=0x1a2;eip=0x00249b; 	J(JNZ(loc_124a6));	// 4069 jnz     short loc_124A6 ;~ 01A2:249B
cs=0x1a2;eip=0x00249d; 	X(MOV(word_3bb5c, 0x5F));	// 4070 mov     word_3BB5C, 5Fh ; '_' ;~ 01A2:249D
cs=0x1a2;eip=0x0024a3; 	J(JMP(loc_124ac));	// 4071 jmp     short loc_124AC ;~ 01A2:24A3
loc_124a6:
	// 4525 
cs=0x1a2;eip=0x0024a6; 	X(MOV(word_3bb5c, 0x0C8));	// 4076 mov     word_3BB5C, 0C8h ; 'È' ;~ 01A2:24A6
loc_124ac:
	// 4526 
cs=0x1a2;eip=0x0024ac; 	T(MOV(ax, offset(dseg,unk_3bb56)));	// 4079 mov     ax, offset unk_3BB56 ;~ 01A2:24AC
cs=0x1a2;eip=0x0024af; 	X(PUSH(ax));	// 4080 push    ax ;~ 01A2:24AF
cs=0x1a2;eip=0x0024b0; 	T(ax = bp+var_10);	// 4081 lea     ax, [bp+var_10] ;~ 01A2:24B0
cs=0x1a2;eip=0x0024b3; 	X(PUSH(ax));	// 4082 push    ax ;~ 01A2:24B3
cs=0x1a2;eip=0x0024b4; 	J(CALLF(rect_intersect,0));	// 4083 call    rect_intersect ;~ 01A2:24B4
cs=0x1a2;eip=0x0024b9; 	T(ADD(sp, 4));	// 4084 add     sp, 4 ;~ 01A2:24B9
cs=0x1a2;eip=0x0024bc; 	T(ax = bp+var_1a);	// 4085 lea     ax, [bp+var_1A] ;~ 01A2:24BC
cs=0x1a2;eip=0x0024bf; 	X(PUSH(ax));	// 4086 push    ax ;~ 01A2:24BF
cs=0x1a2;eip=0x0024c0; 	T(ax = bp+var_104);	// 4087 lea     ax, [bp+var_104] ;~ 01A2:24C0
cs=0x1a2;eip=0x0024c4; 	X(PUSH(ax));	// 4088 push    ax ;~ 01A2:24C4
cs=0x1a2;eip=0x0024c5; 	T(ax = bp+var_10);	// 4089 lea     ax, [bp+var_10] ;~ 01A2:24C5
cs=0x1a2;eip=0x0024c8; 	X(PUSH(ax));	// 4090 push    ax ;~ 01A2:24C8
cs=0x1a2;eip=0x0024c9; 	J(CALLF(rect_union,0));	// 4091 call    rect_union ;~ 01A2:24C9
cs=0x1a2;eip=0x0024ce; 	T(ADD(sp, 6));	// 4092 add     sp, 6 ;~ 01A2:24CE
cs=0x1a2;eip=0x0024d1; 	T(CMP(*(raddr(ss,bp+var_6)), 3));	// 4093 cmp     [bp+var_6], 3 ;~ 01A2:24D1
cs=0x1a2;eip=0x0024d5; 	J(JNZ(loc_124da));	// 4094 jnz     short loc_124DA ;~ 01A2:24D5
cs=0x1a2;eip=0x0024d7; 	J(JMP(loc_125fe));	// 4095 jmp     loc_125FE ;~ 01A2:24D7
loc_124da:
	// 4527 
cs=0x1a2;eip=0x0024da; 	X(MOV(*(raddr(ss,bp+var_6)), 1));	// 4099 mov     [bp+var_6], 1 ;~ 01A2:24DA
loc_124de:
	// 4528 
cs=0x1a2;eip=0x0024de; 	T(MOV(al, *(raddr(ss,bp+var_f2))));	// 4103 mov     al, [bp+var_F2] ;~ 01A2:24DE
cs=0x1a2;eip=0x0024e2; 	T(CMP(*(raddr(ss,bp+var_106)), al));	// 4104 cmp     [bp+var_106], al ;~ 01A2:24E2
cs=0x1a2;eip=0x0024e6; 	J(JZ(loc_12541));	// 4105 jz      short loc_12541 ;~ 01A2:24E6
cs=0x1a2;eip=0x0024e8; 	T(CMP(al, 0x0FF));	// 4106 cmp     al, 0FFh ;~ 01A2:24E8
cs=0x1a2;eip=0x0024ea; 	J(JZ(loc_12534));	// 4107 jz      short loc_12534 ;~ 01A2:24EA
cs=0x1a2;eip=0x0024ec; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 4108 call    sprite_copy_2_to_1_2 ;~ 01A2:24EC
cs=0x1a2;eip=0x0024f1; 	T(MOV(ax, *(dw*)(((db*)carmenu_buttons_x2)+8)));	// 4109 mov     ax, carmenu_buttons_x2+8 ;~ 01A2:24F1
cs=0x1a2;eip=0x0024f4; 	T(INC(ax));	// 4110 inc     ax ;~ 01A2:24F4
cs=0x1a2;eip=0x0024f5; 	X(PUSH(ax));	// 4111 push    ax ;~ 01A2:24F5
cs=0x1a2;eip=0x0024f6; 	X(PUSH(*(carmenu_buttons_x1)));	// 4112 push    carmenu_buttons_x1 ;~ 01A2:24F6
cs=0x1a2;eip=0x0024fa; 	T(MOV(ax, *(carmenu_buttons_y2)));	// 4113 mov     ax, carmenu_buttons_y2 ;~ 01A2:24FA
cs=0x1a2;eip=0x0024fd; 	T(ADD(ax, video_flag2_is1));	// 4114 add     ax, video_flag2_is1 ;~ 01A2:24FD
cs=0x1a2;eip=0x002501; 	T(AND(ax, video_flag3_isffff));	// 4115 and     ax, video_flag3_isFFFF ;~ 01A2:2501
cs=0x1a2;eip=0x002505; 	X(PUSH(ax));	// 4116 push    ax ;~ 01A2:2505
cs=0x1a2;eip=0x002506; 	X(PUSH(*(carmenu_buttons_y1)));	// 4117 push    carmenu_buttons_y1 ;~ 01A2:2506
cs=0x1a2;eip=0x00250a; 	J(CALLF(sprite_set_1_size,0));	// 4118 call    sprite_set_1_size ;~ 01A2:250A
cs=0x1a2;eip=0x00250f; 	T(ADD(sp, 8));	// 4119 add     sp, 8 ;~ 01A2:250F
cs=0x1a2;eip=0x002512; 	J(CALLF(mouse_draw_opaque_check,0));	// 4120 call    mouse_draw_opaque_check ;~ 01A2:2512
cs=0x1a2;eip=0x002517; 	T(LES(bx, wndsprite));	// 4121 les     bx, wndsprite ;~ 01A2:2517
cs=0x1a2;eip=0x00251b; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 4122 push    word ptr es:[bx+2] ;~ 01A2:251B
cs=0x1a2;eip=0x00251f; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 4123 push    word ptr es:[bx] ;~ 01A2:251F
cs=0x1a2;eip=0x002522; 	J(CALLF(sprite_putimage,0));	// 4124 call    sprite_putimage ;~ 01A2:2522
cs=0x1a2;eip=0x002527; 	T(ADD(sp, 4));	// 4125 add     sp, 4 ;~ 01A2:2527
cs=0x1a2;eip=0x00252a; 	J(CALLF(mouse_draw_transparent_check,0));	// 4126 call    mouse_draw_transparent_check ;~ 01A2:252A
cs=0x1a2;eip=0x00252f; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 4127 call    sprite_copy_2_to_1_2 ;~ 01A2:252F
loc_12534:
	// 4529 
cs=0x1a2;eip=0x002534; 	J(CALLF(sub_29772,0));	// 4130 call    sub_29772 ;~ 01A2:2534
cs=0x1a2;eip=0x002539; 	T(MOV(al, *(raddr(ss,bp+var_106))));	// 4131 mov     al, [bp+var_106] ;~ 01A2:2539
cs=0x1a2;eip=0x00253d; 	X(MOV(*(raddr(ss,bp+var_f2)), al));	// 4132 mov     [bp+var_F2], al ;~ 01A2:253D
loc_12541:
	// 4530 
cs=0x1a2;eip=0x002541; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 4135 call    sprite_copy_2_to_1_2 ;~ 01A2:2541
cs=0x1a2;eip=0x002546; 	X(PUSH(word_407d0));	// 4136 push    word_407D0 ;~ 01A2:2546
cs=0x1a2;eip=0x00254a; 	X(PUSH(word_407ce));	// 4137 push    word_407CE ;~ 01A2:254A
cs=0x1a2;eip=0x00254e; 	T(MOV(ax, offset(dseg,carmenu_buttons_x2)));	// 4138 mov     ax, offset carmenu_buttons_x2 ;~ 01A2:254E
cs=0x1a2;eip=0x002551; 	X(PUSH(ax));	// 4139 push    ax ;~ 01A2:2551
cs=0x1a2;eip=0x002552; 	T(MOV(ax, offset(dseg,carmenu_buttons_x1)));	// 4140 mov     ax, offset carmenu_buttons_x1 ;~ 01A2:2552
cs=0x1a2;eip=0x002555; 	X(PUSH(ax));	// 4141 push    ax ;~ 01A2:2555
cs=0x1a2;eip=0x002556; 	T(MOV(ax, offset(dseg,carmenu_buttons_y2)));	// 4142 mov     ax, offset carmenu_buttons_y2 ;~ 01A2:2556
cs=0x1a2;eip=0x002559; 	X(PUSH(ax));	// 4143 push    ax ;~ 01A2:2559
cs=0x1a2;eip=0x00255a; 	T(MOV(ax, offset(dseg,carmenu_buttons_y1)));	// 4144 mov     ax, offset carmenu_buttons_y1 ;~ 01A2:255A
cs=0x1a2;eip=0x00255d; 	X(PUSH(ax));	// 4145 push    ax ;~ 01A2:255D
cs=0x1a2;eip=0x00255e; 	T(MOV(al, *(raddr(ss,bp+var_106))));	// 4146 mov     al, [bp+var_106] ;~ 01A2:255E
cs=0x1a2;eip=0x002562; 	T(CBW);	// 4147 cbw ;~ 01A2:2562
cs=0x1a2;eip=0x002563; 	X(PUSH(ax));	// 4148 push    ax ;~ 01A2:2563
cs=0x1a2;eip=0x002564; 	J(CALLF(mouse_timer_sprite_unk,0));	// 4149 call    mouse_timer_sprite_unk ;~ 01A2:2564
cs=0x1a2;eip=0x002569; 	T(ADD(sp, 0x0E));	// 4150 add     sp, 0Eh ;~ 01A2:2569
cs=0x1a2;eip=0x00256c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4c)), ax));	// 4151 mov     [bp+var_4C], ax ;~ 01A2:256C
cs=0x1a2;eip=0x00256f; 	X(ADD(idle_counter, ax));	// 4152 add     idle_counter, ax ;~ 01A2:256F
cs=0x1a2;eip=0x002573; 	T(CMP(idle_counter, 0x2EE0));	// 4153 cmp     idle_counter, 2EE0h ;~ 01A2:2573
cs=0x1a2;eip=0x002579; 	J(JLE(loc_12585));	// 4154 jle     short loc_12585 ;~ 01A2:2579
cs=0x1a2;eip=0x00257b; 	X(MOV(idle_counter, 0));	// 4155 mov     idle_counter, 0 ;~ 01A2:257B
cs=0x1a2;eip=0x002581; 	X(INC(idle_expired));	// 4156 inc     idle_expired ;~ 01A2:2581
loc_12585:
	// 4531 
cs=0x1a2;eip=0x002585; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 4159 push    [bp+var_4C] ;~ 01A2:2585
cs=0x1a2;eip=0x002588; 	J(CALLF(input_checking,0));	// 4160 call    input_checking ;~ 01A2:2588
cs=0x1a2;eip=0x00258d; 	T(ADD(sp, 2));	// 4161 add     sp, 2 ;~ 01A2:258D
cs=0x1a2;eip=0x002590; 	T(MOV(si, ax));	// 4162 mov     si, ax ;~ 01A2:2590
cs=0x1a2;eip=0x002592; 	T(MOV(ax, offset(dseg,carmenu_buttons_x2)));	// 4163 mov     ax, offset carmenu_buttons_x2 ;~ 01A2:2592
cs=0x1a2;eip=0x002595; 	X(PUSH(ax));	// 4164 push    ax ;~ 01A2:2595
cs=0x1a2;eip=0x002596; 	T(MOV(ax, offset(dseg,carmenu_buttons_x1)));	// 4165 mov     ax, offset carmenu_buttons_x1 ;~ 01A2:2596
cs=0x1a2;eip=0x002599; 	X(PUSH(ax));	// 4166 push    ax ;~ 01A2:2599
cs=0x1a2;eip=0x00259a; 	T(MOV(ax, offset(dseg,carmenu_buttons_y2)));	// 4167 mov     ax, offset carmenu_buttons_y2 ;~ 01A2:259A
cs=0x1a2;eip=0x00259d; 	X(PUSH(ax));	// 4168 push    ax ;~ 01A2:259D
cs=0x1a2;eip=0x00259e; 	T(MOV(ax, offset(dseg,carmenu_buttons_y1)));	// 4169 mov     ax, offset carmenu_buttons_y1 ;~ 01A2:259E
cs=0x1a2;eip=0x0025a1; 	X(PUSH(ax));	// 4170 push    ax ;~ 01A2:25A1
cs=0x1a2;eip=0x0025a2; 	T(MOV(ax, 5));	// 4171 mov     ax, 5 ;~ 01A2:25A2
cs=0x1a2;eip=0x0025a5; 	X(PUSH(ax));	// 4172 push    ax ;~ 01A2:25A5
cs=0x1a2;eip=0x0025a6; 	J(CALLF(mouse_multi_hittest,0));	// 4173 call    mouse_multi_hittest ;~ 01A2:25A6
cs=0x1a2;eip=0x0025ab; 	T(ADD(sp, 0x0A));	// 4174 add     sp, 0Ah ;~ 01A2:25AB
cs=0x1a2;eip=0x0025ae; 	X(MOV(*(raddr(ss,bp+var_f6)), al));	// 4175 mov     [bp+var_F6], al ;~ 01A2:25AE
cs=0x1a2;eip=0x0025b2; 	T(CMP(al, 0x0FF));	// 4176 cmp     al, 0FFh ;~ 01A2:25B2
cs=0x1a2;eip=0x0025b4; 	J(JZ(loc_125ba));	// 4177 jz      short loc_125BA ;~ 01A2:25B4
cs=0x1a2;eip=0x0025b6; 	X(MOV(*(raddr(ss,bp+var_106)), al));	// 4178 mov     [bp+var_106], al ;~ 01A2:25B6
loc_125ba:
	// 4532 
cs=0x1a2;eip=0x0025ba; 	T(CMP(idle_expired, 0));	// 4181 cmp     idle_expired, 0 ;~ 01A2:25BA
cs=0x1a2;eip=0x0025bf; 	J(JZ(loc_125c9));	// 4182 jz      short loc_125C9 ;~ 01A2:25BF
cs=0x1a2;eip=0x0025c1; 	X(MOV(*(raddr(ss,bp+var_106)), 0));	// 4183 mov     [bp+var_106], 0 ;~ 01A2:25C1
cs=0x1a2;eip=0x0025c6; 	T(MOV(si, 0x0D));	// 4184 mov     si, 0Dh ;~ 01A2:25C6
loc_125c9:
	// 4533 
cs=0x1a2;eip=0x0025c9; 	T(OR(si, si));	// 4187 or      si, si ;~ 01A2:25C9
cs=0x1a2;eip=0x0025cb; 	J(JNZ(loc_125d0));	// 4188 jnz     short loc_125D0 ;~ 01A2:25CB
cs=0x1a2;eip=0x0025cd; 	J(JMP(loc_11fa5));	// 4189 jmp     loc_11FA5 ;~ 01A2:25CD
loc_125d0:
	// 4534 
cs=0x1a2;eip=0x0025d0; 	T(MOV(ax, si));	// 4193 mov     ax, si ;~ 01A2:25D0
cs=0x1a2;eip=0x0025d2; 	T(CMP(ax, 0x0D));	// 4194 cmp     ax, 0Dh ;~ 01A2:25D2
cs=0x1a2;eip=0x0025d5; 	J(JNZ(loc_125da));	// 4195 jnz     short loc_125DA ;~ 01A2:25D5
cs=0x1a2;eip=0x0025d7; 	J(JMP(loc_12732));	// 4196 jmp     loc_12732 ;~ 01A2:25D7
loc_125da:
	// 4535 
cs=0x1a2;eip=0x0025da; 	T(CMP(ax, 0x1B));	// 4200 cmp     ax, 1Bh ;~ 01A2:25DA
cs=0x1a2;eip=0x0025dd; 	J(JNZ(loc_125e2));	// 4201 jnz     short loc_125E2 ;~ 01A2:25DD
cs=0x1a2;eip=0x0025df; 	J(JMP(loc_12732));	// 4202 jmp     loc_12732 ;~ 01A2:25DF
loc_125e2:
	// 4536 
cs=0x1a2;eip=0x0025e2; 	T(CMP(ax, 0x20));	// 4206 cmp     ax, 20h ; ' ' ;~ 01A2:25E2
cs=0x1a2;eip=0x0025e5; 	J(JNZ(loc_125ea));	// 4207 jnz     short loc_125EA ;~ 01A2:25E5
cs=0x1a2;eip=0x0025e7; 	J(JMP(loc_12732));	// 4208 jmp     loc_12732 ;~ 01A2:25E7
loc_125ea:
	// 4537 
cs=0x1a2;eip=0x0025ea; 	T(CMP(ax, 0x4800));	// 4212 cmp     ax, 4800h ;~ 01A2:25EA
cs=0x1a2;eip=0x0025ed; 	J(JNZ(loc_125f2));	// 4213 jnz     short loc_125F2 ;~ 01A2:25ED
cs=0x1a2;eip=0x0025ef; 	J(JMP(loc_12910));	// 4214 jmp     loc_12910 ;~ 01A2:25EF
loc_125f2:
	// 4538 
cs=0x1a2;eip=0x0025f2; 	T(CMP(ax, 0x5000));	// 4218 cmp     ax, 5000h ;~ 01A2:25F2
cs=0x1a2;eip=0x0025f5; 	J(JNZ(loc_125fa));	// 4219 jnz     short loc_125FA ;~ 01A2:25F5
cs=0x1a2;eip=0x0025f7; 	J(JMP(loc_12926));	// 4220 jmp     loc_12926 ;~ 01A2:25F7
loc_125fa:
	// 4539 
cs=0x1a2;eip=0x0025fa; 	J(JMP(loc_11fa5));	// 4224 jmp     loc_11FA5 ;~ 01A2:25FA
loc_125fe:
	// 4540 
cs=0x1a2;eip=0x0025fe; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 4230 mov     [bp+var_6], 0 ;~ 01A2:25FE
cs=0x1a2;eip=0x002602; 	X(MOV(*(raddr(ss,bp+var_108)), 1));	// 4231 mov     [bp+var_108], 1 ;~ 01A2:2602
cs=0x1a2;eip=0x002607; 	J(CALLF(sprite_copy_wnd_to_1,0));	// 4232 call    sprite_copy_wnd_to_1 ;~ 01A2:2607
cs=0x1a2;eip=0x00260c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 4233 push    [bp+var_14] ;~ 01A2:260C
cs=0x1a2;eip=0x00260f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 4234 push    [bp+var_16] ;~ 01A2:260F
cs=0x1a2;eip=0x002612; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 4235 push    [bp+var_18] ;~ 01A2:2612
cs=0x1a2;eip=0x002615; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 4236 push    [bp+var_1A] ;~ 01A2:2615
cs=0x1a2;eip=0x002618; 	J(CALLF(sprite_set_1_size,0));	// 4237 call    sprite_set_1_size ;~ 01A2:2618
cs=0x1a2;eip=0x00261d; 	T(ADD(sp, 8));	// 4238 add     sp, 8 ;~ 01A2:261D
cs=0x1a2;eip=0x002620; 	T(MOV(ax, offset(dseg,astop_1)));	// 4239 mov     ax, offset aStop_1 ; "stop" ;~ 01A2:2620
cs=0x1a2;eip=0x002623; 	X(PUSH(ax));	// 4240 push    ax ;~ 01A2:2623
cs=0x1a2;eip=0x002624; 	X(PUSH(*(dw*)(raddr(ss,bp+var_34))));	// 4241 push    [bp+var_34] ;~ 01A2:2624
cs=0x1a2;eip=0x002627; 	X(PUSH(*(dw*)(raddr(ss,bp+var_36))));	// 4242 push    [bp+var_36] ;~ 01A2:2627
cs=0x1a2;eip=0x00262a; 	J(CALLF(locate_shape_fatal,0));	// 4243 call    locate_shape_fatal ;~ 01A2:262A
cs=0x1a2;eip=0x00262f; 	T(ADD(sp, 6));	// 4244 add     sp, 6 ;~ 01A2:262F
cs=0x1a2;eip=0x002632; 	X(PUSH(dx));	// 4245 push    dx ;~ 01A2:2632
cs=0x1a2;eip=0x002633; 	X(PUSH(ax));	// 4246 push    ax ;~ 01A2:2633
cs=0x1a2;eip=0x002634; 	J(CALLF(sprite_putimage,0));	// 4247 call    sprite_putimage ;~ 01A2:2634
cs=0x1a2;eip=0x002639; 	T(ADD(sp, 4));	// 4248 add     sp, 4 ;~ 01A2:2639
cs=0x1a2;eip=0x00263c; 	J(CALLF(get_a_poly_info,0));	// 4249 call    get_a_poly_info ;~ 01A2:263C
cs=0x1a2;eip=0x002641; 	J(CALLF(sprite_copy_wnd_to_1,0));	// 4250 call    sprite_copy_wnd_to_1 ;~ 01A2:2641
cs=0x1a2;eip=0x002646; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 4251 push    [bp+var_14] ;~ 01A2:2646
cs=0x1a2;eip=0x002649; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 4252 push    [bp+var_16] ;~ 01A2:2649
cs=0x1a2;eip=0x00264c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 4253 push    [bp+var_18] ;~ 01A2:264C
cs=0x1a2;eip=0x00264f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 4254 push    [bp+var_1A] ;~ 01A2:264F
cs=0x1a2;eip=0x002652; 	J(CALLF(sprite_set_1_size,0));	// 4255 call    sprite_set_1_size ;~ 01A2:2652
cs=0x1a2;eip=0x002657; 	T(ADD(sp, 8));	// 4256 add     sp, 8 ;~ 01A2:2657
cs=0x1a2;eip=0x00265a; 	X(PUSH(si));	// 4257 push    si ;~ 01A2:265A
cs=0x1a2;eip=0x00265b; 	T(di = bp+var_104);	// 4258 lea     di, [bp+var_104] ;~ 01A2:265B
cs=0x1a2;eip=0x00265f; 	T(si = bp+var_10);	// 4259 lea     si, [bp+var_10] ;~ 01A2:265F
cs=0x1a2;eip=0x002662; 	X(PUSH(ss));	// 4260 push    ss ;~ 01A2:2662
cs=0x1a2;eip=0x002663; 	X(POP(es));	// 4261 pop     es ;~ 01A2:2663
cs=0x1a2;eip=0x002664; 	X(MOVSW);	// 4262 movsw ;~ 01A2:2664
cs=0x1a2;eip=0x002665; 	X(MOVSW);	// 4263 movsw ;~ 01A2:2665
cs=0x1a2;eip=0x002666; 	X(MOVSW);	// 4264 movsw ;~ 01A2:2666
cs=0x1a2;eip=0x002667; 	X(MOVSW);	// 4265 movsw ;~ 01A2:2667
cs=0x1a2;eip=0x002668; 	X(POP(si));	// 4266 pop     si ;~ 01A2:2668
cs=0x1a2;eip=0x002669; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0));	// 4267 cmp     [bp+arg_6], 0 ;~ 01A2:2669
cs=0x1a2;eip=0x00266d; 	J(JZ(loc_126d1));	// 4268 jz      short loc_126D1 ;~ 01A2:266D
cs=0x1a2;eip=0x00266f; 	T(MOV(al, *(raddr(ss,bp+var_38))));	// 4269 mov     al, [bp+var_38] ;~ 01A2:266F
cs=0x1a2;eip=0x002672; 	T(CMP(*(raddr(ss,bp+var_f0)), al));	// 4270 cmp     [bp+var_F0], al ;~ 01A2:2672
cs=0x1a2;eip=0x002676; 	J(JZ(loc_126d1));	// 4271 jz      short loc_126D1 ;~ 01A2:2676
cs=0x1a2;eip=0x002678; 	J(CALLF(sprite_copy_wnd_to_1,0));	// 4272 call    sprite_copy_wnd_to_1 ;~ 01A2:2678
cs=0x1a2;eip=0x00267d; 	T(CMP(video_flag5_is0, 0));	// 4273 cmp     video_flag5_is0, 0 ;~ 01A2:267D
cs=0x1a2;eip=0x002682; 	J(JNZ(loc_126b8));	// 4274 jnz     short loc_126B8 ;~ 01A2:2682
cs=0x1a2;eip=0x002684; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_6))));	// 4275 mov     al, byte ptr [bp+arg_6] ;~ 01A2:2684
cs=0x1a2;eip=0x002687; 	T(ADD(al, 0x30));	// 4276 add     al, 30h ; '0' ;~ 01A2:2687
cs=0x1a2;eip=0x002689; 	T(CBW);	// 4277 cbw ;~ 01A2:2689
cs=0x1a2;eip=0x00268a; 	X(PUSH(ax));	// 4278 push    ax ;~ 01A2:268A
cs=0x1a2;eip=0x00268b; 	X(PUSH(word_44a02));	// 4279 push    word_44A02 ;~ 01A2:268B
cs=0x1a2;eip=0x00268f; 	X(PUSH(opp_res));	// 4280 push    opp_res ;~ 01A2:268F
cs=0x1a2;eip=0x002693; 	J(CALLF(nullsub_2,0));	// 4281 call    nullsub_2 ;~ 01A2:2693
cs=0x1a2;eip=0x002698; 	T(ADD(sp, 6));	// 4282 add     sp, 6 ;~ 01A2:2698
cs=0x1a2;eip=0x00269b; 	T(SUB(ax, ax));	// 4283 sub     ax, ax ;~ 01A2:269B
cs=0x1a2;eip=0x00269d; 	X(PUSH(ax));	// 4284 push    ax ;~ 01A2:269D
cs=0x1a2;eip=0x00269e; 	T(MOV(ax, 0x0F0));	// 4285 mov     ax, 0F0h ; 'ğ' ;~ 01A2:269E
cs=0x1a2;eip=0x0026a1; 	X(PUSH(ax));	// 4286 push    ax              ; __int16 ;~ 01A2:26A1
cs=0x1a2;eip=0x0026a2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 4287 mov     bx, [bp+arg_6] ;~ 01A2:26A2
cs=0x1a2;eip=0x0026a5; 	T(SHL(bx, 1));	// 4288 shl     bx, 1 ;~ 01A2:26A5
cs=0x1a2;eip=0x0026a7; 	T(SHL(bx, 1));	// 4289 shl     bx, 1 ;~ 01A2:26A7
cs=0x1a2;eip=0x0026a9; 	X(PUSH(*(dw*)((((db*)&oppresources)+2)+bx)));	// 4290 push    word ptr (oppresources+2)[bx] ;~ 01A2:26A9
cs=0x1a2;eip=0x0026ad; 	X(PUSH(*(dw*)(((db*)&oppresources)+bx)));	// 4291 push    word ptr oppresources[bx] ; shapeptr ;~ 01A2:26AD
cs=0x1a2;eip=0x0026b1; 	J(CALLF(sprite_putimage_transparent,0));	// 4292 call    sprite_putimage_transparent ;~ 01A2:26B1
cs=0x1a2;eip=0x0026b6; 	J(JMP(loc_126ce));	// 4293 jmp     short loc_126CE ;~ 01A2:26B6
loc_126b8:
	// 4541 
cs=0x1a2;eip=0x0026b8; 	T(SUB(ax, ax));	// 4297 sub     ax, ax ;~ 01A2:26B8
cs=0x1a2;eip=0x0026ba; 	X(PUSH(ax));	// 4298 push    ax ;~ 01A2:26BA
cs=0x1a2;eip=0x0026bb; 	T(MOV(ax, 0x0F0));	// 4299 mov     ax, 0F0h ; 'ğ' ;~ 01A2:26BB
cs=0x1a2;eip=0x0026be; 	X(PUSH(ax));	// 4300 push    ax ;~ 01A2:26BE
cs=0x1a2;eip=0x0026bf; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_42))));	// 4301 les     bx, [bp+var_42] ;~ 01A2:26BF
cs=0x1a2;eip=0x0026c2; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 4302 push    word ptr es:[bx+2] ;~ 01A2:26C2
cs=0x1a2;eip=0x0026c6; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 4303 push    word ptr es:[bx] ;~ 01A2:26C6
cs=0x1a2;eip=0x0026c9; 	J(CALLF(sprite_putimage_and_alt,0));	// 4304 call    sprite_putimage_and_alt ;~ 01A2:26C9
loc_126ce:
	// 4542 
cs=0x1a2;eip=0x0026ce; 	T(ADD(sp, 8));	// 4307 add     sp, 8 ;~ 01A2:26CE
loc_126d1:
	// 4543 
cs=0x1a2;eip=0x0026d1; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 4311 call    sprite_copy_2_to_1_2 ;~ 01A2:26D1
cs=0x1a2;eip=0x0026d6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 4312 push    [bp+var_14] ;~ 01A2:26D6
cs=0x1a2;eip=0x0026d9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 4313 push    [bp+var_16] ;~ 01A2:26D9
cs=0x1a2;eip=0x0026dc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 4314 push    [bp+var_18] ;~ 01A2:26DC
cs=0x1a2;eip=0x0026df; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 4315 push    [bp+var_1A] ;~ 01A2:26DF
cs=0x1a2;eip=0x0026e2; 	J(CALLF(sprite_set_1_size,0));	// 4316 call    sprite_set_1_size ;~ 01A2:26E2
cs=0x1a2;eip=0x0026e7; 	T(ADD(sp, 8));	// 4317 add     sp, 8 ;~ 01A2:26E7
cs=0x1a2;eip=0x0026ea; 	J(CALLF(mouse_draw_opaque_check,0));	// 4318 call    mouse_draw_opaque_check ;~ 01A2:26EA
cs=0x1a2;eip=0x0026ef; 	T(CMP(*(raddr(ss,bp+var_3e)), 0x0FE));	// 4319 cmp     [bp+var_3E], 0FEh ; 'ş' ;~ 01A2:26EF
cs=0x1a2;eip=0x0026f3; 	J(JZ(loc_12710));	// 4320 jz      short loc_12710 ;~ 01A2:26F3
cs=0x1a2;eip=0x0026f5; 	T(MOV(al, *(raddr(ss,bp+var_3e))));	// 4321 mov     al, [bp+var_3E] ;~ 01A2:26F5
cs=0x1a2;eip=0x0026f8; 	T(CBW);	// 4322 cbw ;~ 01A2:26F8
cs=0x1a2;eip=0x0026f9; 	X(PUSH(ax));	// 4323 push    ax ;~ 01A2:26F9
cs=0x1a2;eip=0x0026fa; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 4324 push    word ptr wndsprite+2 ;~ 01A2:26FA
cs=0x1a2;eip=0x0026fe; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 4325 push    word ptr wndsprite ;~ 01A2:26FE
cs=0x1a2;eip=0x002702; 	J(CALLF(sprite_blit_to_video,0));	// 4326 call    sprite_blit_to_video ;~ 01A2:2702
cs=0x1a2;eip=0x002707; 	T(ADD(sp, 6));	// 4327 add     sp, 6 ;~ 01A2:2707
cs=0x1a2;eip=0x00270a; 	X(MOV(*(raddr(ss,bp+var_3e)), 0x0FE));	// 4328 mov     [bp+var_3E], 0FEh ; 'ş' ;~ 01A2:270A
cs=0x1a2;eip=0x00270e; 	J(JMP(loc_12723));	// 4329 jmp     short loc_12723 ;~ 01A2:270E
loc_12710:
	// 4544 
cs=0x1a2;eip=0x002710; 	T(LES(bx, wndsprite));	// 4333 les     bx, wndsprite ;~ 01A2:2710
cs=0x1a2;eip=0x002714; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 4334 push    word ptr es:[bx+2] ;~ 01A2:2714
cs=0x1a2;eip=0x002718; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 4335 push    word ptr es:[bx] ;~ 01A2:2718
cs=0x1a2;eip=0x00271b; 	J(CALLF(sprite_putimage,0));	// 4336 call    sprite_putimage ;~ 01A2:271B
cs=0x1a2;eip=0x002720; 	T(ADD(sp, 4));	// 4337 add     sp, 4 ;~ 01A2:2720
loc_12723:
	// 4545 
cs=0x1a2;eip=0x002723; 	J(CALLF(mouse_draw_transparent_check,0));	// 4340 call    mouse_draw_transparent_check ;~ 01A2:2723
cs=0x1a2;eip=0x002728; 	T(MOV(al, *(raddr(ss,bp+var_f0))));	// 4341 mov     al, [bp+var_F0] ;~ 01A2:2728
cs=0x1a2;eip=0x00272c; 	X(MOV(*(raddr(ss,bp+var_38)), al));	// 4342 mov     [bp+var_38], al ;~ 01A2:272C
cs=0x1a2;eip=0x00272f; 	J(JMP(loc_124de));	// 4343 jmp     loc_124DE ;~ 01A2:272F
loc_12732:
	// 4546 
cs=0x1a2;eip=0x002732; 	T(MOV(al, *(raddr(ss,bp+var_106))));	// 4348 mov     al, [bp+var_106] ;~ 01A2:2732
cs=0x1a2;eip=0x002736; 	T(CBW);	// 4349 cbw ;~ 01A2:2736
cs=0x1a2;eip=0x002737; 	T(OR(ax, ax));	// 4350 or      ax, ax ;~ 01A2:2737
cs=0x1a2;eip=0x002739; 	J(JZ(_menu_done));	// 4351 jz      short _menu_done ;~ 01A2:2739
cs=0x1a2;eip=0x00273b; 	T(CMP(ax, 1));	// 4352 cmp     ax, 1 ;~ 01A2:273B
cs=0x1a2;eip=0x00273e; 	J(JNZ(loc_12743));	// 4353 jnz     short loc_12743 ;~ 01A2:273E
cs=0x1a2;eip=0x002740; 	J(JMP(_menu_nextcar));	// 4354 jmp     _menu_nextcar ;~ 01A2:2740
loc_12743:
	// 4547 
cs=0x1a2;eip=0x002743; 	T(CMP(ax, 2));	// 4358 cmp     ax, 2 ;~ 01A2:2743
cs=0x1a2;eip=0x002746; 	J(JNZ(loc_1274b));	// 4359 jnz     short loc_1274B ;~ 01A2:2746
cs=0x1a2;eip=0x002748; 	J(JMP(_menu_prevcar));	// 4360 jmp     _menu_prevcar ;~ 01A2:2748
loc_1274b:
	// 4548 
cs=0x1a2;eip=0x00274b; 	T(CMP(ax, 3));	// 4364 cmp     ax, 3 ;~ 01A2:274B
cs=0x1a2;eip=0x00274e; 	J(JNZ(loc_12753));	// 4365 jnz     short loc_12753 ;~ 01A2:274E
cs=0x1a2;eip=0x002750; 	J(JMP(_menu_transmission));	// 4366 jmp     _menu_transmission ;~ 01A2:2750
loc_12753:
	// 4549 
cs=0x1a2;eip=0x002753; 	T(CMP(ax, 4));	// 4370 cmp     ax, 4 ;~ 01A2:2753
cs=0x1a2;eip=0x002756; 	J(JNZ(loc_1275b));	// 4371 jnz     short loc_1275B ;~ 01A2:2756
cs=0x1a2;eip=0x002758; 	J(JMP(_menu_color));	// 4372 jmp     _menu_color ;~ 01A2:2758
loc_1275b:
	// 4550 
cs=0x1a2;eip=0x00275b; 	J(JMP(loc_11fa5));	// 4376 jmp     loc_11FA5 ;~ 01A2:275B
_menu_done:
	// 4551 
cs=0x1a2;eip=0x00275e; 	T(CMP(*(raddr(ss,bp+var_108)), 0));	// 4380 cmp     [bp+var_108], 0 ;~ 01A2:275E
cs=0x1a2;eip=0x002763; 	J(JNZ(loc_12768));	// 4381 jnz     short loc_12768 ;~ 01A2:2763
cs=0x1a2;eip=0x002765; 	J(JMP(loc_11fa5));	// 4382 jmp     loc_11FA5 ;~ 01A2:2765
loc_12768:
	// 4552 
cs=0x1a2;eip=0x002768; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 4386 push    word ptr wndsprite+2 ;~ 01A2:2768
cs=0x1a2;eip=0x00276c; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 4387 push    word ptr wndsprite ;~ 01A2:276C
cs=0x1a2;eip=0x002770; 	J(CALLF(sprite_free_wnd,0));	// 4388 call    sprite_free_wnd ;~ 01A2:2770
cs=0x1a2;eip=0x002775; 	T(ADD(sp, 4));	// 4389 add     sp, 4 ;~ 01A2:2775
cs=0x1a2;eip=0x002778; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 4390 push    [bp+var_2] ;~ 01A2:2778
cs=0x1a2;eip=0x00277b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 4391 push    [bp+var_4] ;~ 01A2:277B
cs=0x1a2;eip=0x00277e; 	J(CALLF(unload_resource,0));	// 4392 call    unload_resource ;~ 01A2:277E
cs=0x1a2;eip=0x002783; 	T(ADD(sp, 4));	// 4393 add     sp, 4 ;~ 01A2:2783
cs=0x1a2;eip=0x002786; 	J(CALLF(shape3d_free_car_shapes,0));	// 4394 call    shape3d_free_car_shapes ;~ 01A2:2786
cs=0x1a2;eip=0x00278b; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0));	// 4395 cmp     [bp+arg_6], 0 ;~ 01A2:278B
cs=0x1a2;eip=0x00278f; 	J(JZ(loc_127a6));	// 4396 jz      short loc_127A6 ;~ 01A2:278F
cs=0x1a2;eip=0x002791; 	T(CMP(video_flag5_is0, 0));	// 4397 cmp     video_flag5_is0, 0 ;~ 01A2:2791
cs=0x1a2;eip=0x002796; 	J(JZ(loc_127a6));	// 4398 jz      short loc_127A6 ;~ 01A2:2796
cs=0x1a2;eip=0x002798; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_42+2)))));	// 4399 push    word ptr [bp+var_42+2] ;~ 01A2:2798
cs=0x1a2;eip=0x00279b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_42)))));	// 4400 push    word ptr [bp+var_42] ;~ 01A2:279B
cs=0x1a2;eip=0x00279e; 	J(CALLF(sprite_free_wnd,0));	// 4401 call    sprite_free_wnd ;~ 01A2:279E
cs=0x1a2;eip=0x0027a3; 	T(ADD(sp, 4));	// 4402 add     sp, 4 ;~ 01A2:27A3
loc_127a6:
	// 4553 
cs=0x1a2;eip=0x0027a6; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0));	// 4406 cmp     [bp+arg_6], 0 ;~ 01A2:27A6
cs=0x1a2;eip=0x0027aa; 	J(JNZ(loc_127bc));	// 4407 jnz     short loc_127BC ;~ 01A2:27AA
cs=0x1a2;eip=0x0027ac; 	X(PUSH(word_455ce));	// 4408 push    word_455CE ;~ 01A2:27AC
cs=0x1a2;eip=0x0027b0; 	X(PUSH(miscptr));	// 4409 push    miscptr ;~ 01A2:27B0
cs=0x1a2;eip=0x0027b4; 	J(CALLF(unload_resource,0));	// 4410 call    unload_resource ;~ 01A2:27B4
cs=0x1a2;eip=0x0027b9; 	T(ADD(sp, 4));	// 4411 add     sp, 4 ;~ 01A2:27B9
loc_127bc:
	// 4554 
cs=0x1a2;eip=0x0027bc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_34))));	// 4414 push    [bp+var_34] ;~ 01A2:27BC
cs=0x1a2;eip=0x0027bf; 	X(PUSH(*(dw*)(raddr(ss,bp+var_36))));	// 4415 push    [bp+var_36] ;~ 01A2:27BF
cs=0x1a2;eip=0x0027c2; 	J(CALLF(mmgr_free,0));	// 4416 call    mmgr_free ;~ 01A2:27C2
cs=0x1a2;eip=0x0027c7; 	T(ADD(sp, 4));	// 4417 add     sp, 4 ;~ 01A2:27C7
cs=0x1a2;eip=0x0027ca; 	J(CALLF(mouse_draw_opaque_check,0));	// 4418 call    mouse_draw_opaque_check ;~ 01A2:27CA
cs=0x1a2;eip=0x0027cf; 	T(MOV(al, *(raddr(ss,bp+var_f0))));	// 4419 mov     al, [bp+var_F0] ;~ 01A2:27CF
cs=0x1a2;eip=0x0027d3; 	T(CBW);	// 4420 cbw ;~ 01A2:27D3
cs=0x1a2;eip=0x0027d4; 	T(MOV(di, ax));	// 4421 mov     di, ax ;~ 01A2:27D4
cs=0x1a2;eip=0x0027d6; 	T(SHL(di, 1));	// 4422 shl     di, 1 ;~ 01A2:27D6
cs=0x1a2;eip=0x0027d8; 	T(SHL(di, 1));	// 4423 shl     di, 1 ;~ 01A2:27D8
cs=0x1a2;eip=0x0027da; 	T(ADD(di, ax));	// 4424 add     di, ax ;~ 01A2:27DA
cs=0x1a2;eip=0x0027dc; 	T(MOV(al, *(raddr(ss,bp+di+var_ee))));	// 4425 mov     al, [bp+di+var_EE] ;~ 01A2:27DC
cs=0x1a2;eip=0x0027e0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 4426 mov     bx, [bp+arg_0] ;~ 01A2:27E0
cs=0x1a2;eip=0x0027e3; 	X(MOV(*(raddr(ds,bx)), al));	// 4427 mov     [bx], al ;~ 01A2:27E3
cs=0x1a2;eip=0x0027e5; 	T(MOV(al, *(raddr(ss,bp+var_f0))));	// 4428 mov     al, [bp+var_F0] ;~ 01A2:27E5
cs=0x1a2;eip=0x0027e9; 	T(CBW);	// 4429 cbw ;~ 01A2:27E9
cs=0x1a2;eip=0x0027ea; 	T(MOV(di, ax));	// 4430 mov     di, ax ;~ 01A2:27EA
cs=0x1a2;eip=0x0027ec; 	T(SHL(di, 1));	// 4431 shl     di, 1 ;~ 01A2:27EC
cs=0x1a2;eip=0x0027ee; 	T(SHL(di, 1));	// 4432 shl     di, 1 ;~ 01A2:27EE
cs=0x1a2;eip=0x0027f0; 	T(ADD(di, ax));	// 4433 add     di, ax ;~ 01A2:27F0
cs=0x1a2;eip=0x0027f2; 	T(MOV(al, *(raddr(ss,bp+di+var_ed))));	// 4434 mov     al, [bp+di+var_ED] ;~ 01A2:27F2
cs=0x1a2;eip=0x0027f6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 4435 mov     bx, [bp+arg_0] ;~ 01A2:27F6
cs=0x1a2;eip=0x0027f9; 	X(MOV(*(raddr(ds,bx+1)), al));	// 4436 mov     [bx+1], al ;~ 01A2:27F9
cs=0x1a2;eip=0x0027fc; 	T(MOV(al, *(raddr(ss,bp+var_f0))));	// 4437 mov     al, [bp+var_F0] ;~ 01A2:27FC
cs=0x1a2;eip=0x002800; 	T(CBW);	// 4438 cbw ;~ 01A2:2800
cs=0x1a2;eip=0x002801; 	T(MOV(di, ax));	// 4439 mov     di, ax ;~ 01A2:2801
cs=0x1a2;eip=0x002803; 	T(SHL(di, 1));	// 4440 shl     di, 1 ;~ 01A2:2803
cs=0x1a2;eip=0x002805; 	T(SHL(di, 1));	// 4441 shl     di, 1 ;~ 01A2:2805
cs=0x1a2;eip=0x002807; 	T(ADD(di, ax));	// 4442 add     di, ax ;~ 01A2:2807
cs=0x1a2;eip=0x002809; 	T(MOV(al, *(raddr(ss,bp+di+var_ec))));	// 4443 mov     al, [bp+di+var_EC] ;~ 01A2:2809
cs=0x1a2;eip=0x00280d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 4444 mov     bx, [bp+arg_0] ;~ 01A2:280D
cs=0x1a2;eip=0x002810; 	X(MOV(*(raddr(ds,bx+2)), al));	// 4445 mov     [bx+2], al ;~ 01A2:2810
cs=0x1a2;eip=0x002813; 	T(MOV(al, *(raddr(ss,bp+var_f0))));	// 4446 mov     al, [bp+var_F0] ;~ 01A2:2813
cs=0x1a2;eip=0x002817; 	T(CBW);	// 4447 cbw ;~ 01A2:2817
cs=0x1a2;eip=0x002818; 	T(MOV(di, ax));	// 4448 mov     di, ax ;~ 01A2:2818
cs=0x1a2;eip=0x00281a; 	T(SHL(di, 1));	// 4449 shl     di, 1 ;~ 01A2:281A
cs=0x1a2;eip=0x00281c; 	T(SHL(di, 1));	// 4450 shl     di, 1 ;~ 01A2:281C
cs=0x1a2;eip=0x00281e; 	T(ADD(di, ax));	// 4451 add     di, ax ;~ 01A2:281E
cs=0x1a2;eip=0x002820; 	T(MOV(al, *(raddr(ss,bp+di+var_eb))));	// 4452 mov     al, [bp+di+var_EB] ;~ 01A2:2820
cs=0x1a2;eip=0x002824; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 4453 mov     bx, [bp+arg_0] ;~ 01A2:2824
cs=0x1a2;eip=0x002827; 	X(MOV(*(raddr(ds,bx+3)), al));	// 4454 mov     [bx+3], al ;~ 01A2:2827
cs=0x1a2;eip=0x00282a; 	X(MOV(idle_expired, 0));	// 4455 mov     idle_expired, 0 ;~ 01A2:282A
cs=0x1a2;eip=0x00282f; 	X(POP(si));	// 4456 pop     si ;~ 01A2:282F
cs=0x1a2;eip=0x002830; 	X(POP(di));	// 4457 pop     di ;~ 01A2:2830
cs=0x1a2;eip=0x002831; 	T(MOV(sp, bp));	// 4458 mov     sp, bp ;~ 01A2:2831
cs=0x1a2;eip=0x002833; 	X(POP(bp));	// 4459 pop     bp ;~ 01A2:2833
cs=0x1a2;eip=0x002834; 	J(RETF(0));	// 4460 retf ;~ 01A2:2834
_menu_nextcar:
	// 4555 
cs=0x1a2;eip=0x002836; 	X(INC(*(raddr(ss,bp+var_f0))));	// 4465 inc     [bp+var_F0] ;~ 01A2:2836
cs=0x1a2;eip=0x00283a; 	T(MOV(al, *(raddr(ss,bp+var_46))));	// 4466 mov     al, [bp+var_46] ;~ 01A2:283A
cs=0x1a2;eip=0x00283d; 	T(CMP(*(raddr(ss,bp+var_f0)), al));	// 4467 cmp     [bp+var_F0], al ;~ 01A2:283D
cs=0x1a2;eip=0x002841; 	J(JZ(loc_12846));	// 4468 jz      short loc_12846 ;~ 01A2:2841
cs=0x1a2;eip=0x002843; 	J(JMP(loc_11fa5));	// 4469 jmp     loc_11FA5 ;~ 01A2:2843
loc_12846:
	// 4556 
cs=0x1a2;eip=0x002846; 	X(MOV(*(raddr(ss,bp+var_f0)), 0));	// 4473 mov     [bp+var_F0], 0 ;~ 01A2:2846
cs=0x1a2;eip=0x00284b; 	J(JMP(loc_11fa5));	// 4474 jmp     loc_11FA5 ;~ 01A2:284B
_menu_prevcar:
	// 4557 
cs=0x1a2;eip=0x00284e; 	X(DEC(*(raddr(ss,bp+var_f0))));	// 4478 dec     [bp+var_F0] ;~ 01A2:284E
cs=0x1a2;eip=0x002852; 	J(JS(loc_12857));	// 4479 js      short loc_12857 ;~ 01A2:2852
cs=0x1a2;eip=0x002854; 	J(JMP(loc_11fa5));	// 4480 jmp     loc_11FA5 ;~ 01A2:2854
loc_12857:
	// 4558 
cs=0x1a2;eip=0x002857; 	T(MOV(al, *(raddr(ss,bp+var_46))));	// 4484 mov     al, [bp+var_46] ;~ 01A2:2857
cs=0x1a2;eip=0x00285a; 	T(DEC(al));	// 4485 dec     al ;~ 01A2:285A
cs=0x1a2;eip=0x00285c; 	X(MOV(*(raddr(ss,bp+var_f0)), al));	// 4486 mov     [bp+var_F0], al ;~ 01A2:285C
cs=0x1a2;eip=0x002860; 	J(JMP(loc_11fa5));	// 4487 jmp     loc_11FA5 ;~ 01A2:2860
_menu_transmission:
	// 4559 
cs=0x1a2;eip=0x002864; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 4492 mov     bx, [bp+arg_4] ;~ 01A2:2864
cs=0x1a2;eip=0x002867; 	X(XOR(*(raddr(ds,bx)), 1));	// 4493 xor     byte ptr [bx], 1 ;~ 01A2:2867
cs=0x1a2;eip=0x00286a; 	J(CALLF(sprite_copy_wnd_to_1,0));	// 4494 call    sprite_copy_wnd_to_1 ;~ 01A2:286A
cs=0x1a2;eip=0x00286f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 4495 mov     bx, [bp+arg_4] ;~ 01A2:286F
cs=0x1a2;eip=0x002872; 	T(CMP(*(raddr(ds,bx)), 0));	// 4496 cmp     byte ptr [bx], 0 ;~ 01A2:2872
cs=0x1a2;eip=0x002875; 	J(JZ(loc_1287c));	// 4497 jz      short loc_1287C ;~ 01A2:2875
cs=0x1a2;eip=0x002877; 	T(MOV(ax, offset(dseg,abau_0)));	// 4498 mov     ax, offset aBau_0 ; "bau" ;~ 01A2:2877
cs=0x1a2;eip=0x00287a; 	J(JMP(loc_1287f));	// 4499 jmp     short loc_1287F ;~ 01A2:287A
loc_1287c:
	// 4560 
cs=0x1a2;eip=0x00287c; 	T(MOV(ax, offset(dseg,abma_0)));	// 4503 mov     ax, offset aBma_0 ; "bma" ;~ 01A2:287C
loc_1287f:
	// 4561 
cs=0x1a2;eip=0x00287f; 	X(PUSH(ax));	// 4506 push    ax ;~ 01A2:287F
cs=0x1a2;eip=0x002880; 	X(PUSH(word_455ce));	// 4507 push    word_455CE ;~ 01A2:2880
cs=0x1a2;eip=0x002884; 	X(PUSH(miscptr));	// 4508 push    miscptr ;~ 01A2:2884
cs=0x1a2;eip=0x002888; 	J(CALLF(locate_text_res,0));	// 4509 call    locate_text_res ;~ 01A2:2888
cs=0x1a2;eip=0x00288d; 	T(ADD(sp, 6));	// 4510 add     sp, 6 ;~ 01A2:288D
cs=0x1a2;eip=0x002890; 	X(MOV(*(dw*)(raddr(ss,bp+var_3c)), ax));	// 4511 mov     [bp+var_3C], ax ;~ 01A2:2890
cs=0x1a2;eip=0x002893; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), dx));	// 4512 mov     [bp+var_3A], dx ;~ 01A2:2893
cs=0x1a2;eip=0x002896; 	T(SUB(ax, ax));	// 4513 sub     ax, ax ;~ 01A2:2896
cs=0x1a2;eip=0x002898; 	X(PUSH(ax));	// 4514 push    ax ;~ 01A2:2898
cs=0x1a2;eip=0x002899; 	X(PUSH(word_407f8));	// 4515 push    word_407F8 ;~ 01A2:2899
cs=0x1a2;eip=0x00289d; 	X(PUSH(word_407f6));	// 4516 push    word_407F6 ;~ 01A2:289D
cs=0x1a2;eip=0x0028a1; 	X(PUSH(word_407f4));	// 4517 push    word_407F4 ;~ 01A2:28A1
cs=0x1a2;eip=0x0028a5; 	T(MOV(ax, 0x10));	// 4518 mov     ax, 10h ;~ 01A2:28A5
cs=0x1a2;eip=0x0028a8; 	X(PUSH(ax));	// 4519 push    ax ;~ 01A2:28A8
cs=0x1a2;eip=0x0028a9; 	T(MOV(ax, 0x56));	// 4520 mov     ax, 56h ; 'V' ;~ 01A2:28A9
cs=0x1a2;eip=0x0028ac; 	X(PUSH(ax));	// 4521 push    ax ;~ 01A2:28AC
cs=0x1a2;eip=0x0028ad; 	T(MOV(ax, *(dw*)(((db*)carmenu_buttons_x1)+6)));	// 4522 mov     ax, carmenu_buttons_x1+6 ;~ 01A2:28AD
cs=0x1a2;eip=0x0028b0; 	T(INC(ax));	// 4523 inc     ax ;~ 01A2:28B0
cs=0x1a2;eip=0x0028b1; 	X(PUSH(ax));	// 4524 push    ax ;~ 01A2:28B1
cs=0x1a2;eip=0x0028b2; 	T(MOV(ax, *(carmenu_buttons_y1)));	// 4525 mov     ax, carmenu_buttons_y1 ;~ 01A2:28B2
cs=0x1a2;eip=0x0028b5; 	T(INC(ax));	// 4526 inc     ax ;~ 01A2:28B5
cs=0x1a2;eip=0x0028b6; 	X(PUSH(ax));	// 4527 push    ax ;~ 01A2:28B6
cs=0x1a2;eip=0x0028b7; 	X(PUSH(dx));	// 4528 push    dx ;~ 01A2:28B7
cs=0x1a2;eip=0x0028b8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3c))));	// 4529 push    [bp+var_3C] ;~ 01A2:28B8
cs=0x1a2;eip=0x0028bb; 	J(CALLF(draw_button,0));	// 4530 call    draw_button ;~ 01A2:28BB
cs=0x1a2;eip=0x0028c0; 	T(ADD(sp, 0x14));	// 4531 add     sp, 14h ;~ 01A2:28C0
cs=0x1a2;eip=0x0028c3; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 4532 call    sprite_copy_2_to_1_2 ;~ 01A2:28C3
cs=0x1a2;eip=0x0028c8; 	J(CALLF(mouse_draw_opaque_check,0));	// 4533 call    mouse_draw_opaque_check ;~ 01A2:28C8
cs=0x1a2;eip=0x0028cd; 	T(SUB(ax, ax));	// 4534 sub     ax, ax ;~ 01A2:28CD
cs=0x1a2;eip=0x0028cf; 	X(PUSH(ax));	// 4535 push    ax ;~ 01A2:28CF
cs=0x1a2;eip=0x0028d0; 	X(PUSH(word_407f8));	// 4536 push    word_407F8 ;~ 01A2:28D0
cs=0x1a2;eip=0x0028d4; 	X(PUSH(word_407f6));	// 4537 push    word_407F6 ;~ 01A2:28D4
cs=0x1a2;eip=0x0028d8; 	X(PUSH(word_407f4));	// 4538 push    word_407F4 ;~ 01A2:28D8
cs=0x1a2;eip=0x0028dc; 	T(MOV(ax, 0x10));	// 4539 mov     ax, 10h ;~ 01A2:28DC
cs=0x1a2;eip=0x0028df; 	X(PUSH(ax));	// 4540 push    ax ;~ 01A2:28DF
cs=0x1a2;eip=0x0028e0; 	T(MOV(ax, 0x56));	// 4541 mov     ax, 56h ; 'V' ;~ 01A2:28E0
cs=0x1a2;eip=0x0028e3; 	X(PUSH(ax));	// 4542 push    ax ;~ 01A2:28E3
cs=0x1a2;eip=0x0028e4; 	T(MOV(ax, *(dw*)(((db*)carmenu_buttons_x1)+6)));	// 4543 mov     ax, carmenu_buttons_x1+6 ;~ 01A2:28E4
cs=0x1a2;eip=0x0028e7; 	T(INC(ax));	// 4544 inc     ax ;~ 01A2:28E7
cs=0x1a2;eip=0x0028e8; 	X(PUSH(ax));	// 4545 push    ax ;~ 01A2:28E8
cs=0x1a2;eip=0x0028e9; 	T(MOV(ax, *(carmenu_buttons_y1)));	// 4546 mov     ax, carmenu_buttons_y1 ;~ 01A2:28E9
cs=0x1a2;eip=0x0028ec; 	T(INC(ax));	// 4547 inc     ax ;~ 01A2:28EC
cs=0x1a2;eip=0x0028ed; 	X(PUSH(ax));	// 4548 push    ax ;~ 01A2:28ED
cs=0x1a2;eip=0x0028ee; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 4549 push    [bp+var_3A] ;~ 01A2:28EE
cs=0x1a2;eip=0x0028f1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3c))));	// 4550 push    [bp+var_3C] ;~ 01A2:28F1
cs=0x1a2;eip=0x0028f4; 	J(CALLF(draw_button,0));	// 4551 call    draw_button ;~ 01A2:28F4
cs=0x1a2;eip=0x0028f9; 	T(ADD(sp, 0x14));	// 4552 add     sp, 14h ;~ 01A2:28F9
cs=0x1a2;eip=0x0028fc; 	J(CALLF(mouse_draw_transparent_check,0));	// 4553 call    mouse_draw_transparent_check ;~ 01A2:28FC
cs=0x1a2;eip=0x002901; 	J(JMP(loc_11fa5));	// 4554 jmp     loc_11FA5 ;~ 01A2:2901
_menu_color:
	// 4562 
cs=0x1a2;eip=0x002904; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 4558 mov     bx, [bp+arg_2] ;~ 01A2:2904
cs=0x1a2;eip=0x002907; 	X(INC(*(raddr(ds,bx))));	// 4559 inc     byte ptr [bx]   ; change color/material ;~ 01A2:2907
cs=0x1a2;eip=0x002909; 	X(MOV(*(raddr(ss,bp+var_6)), 3));	// 4560 mov     [bp+var_6], 3 ;~ 01A2:2909
cs=0x1a2;eip=0x00290d; 	J(JMP(loc_11fa5));	// 4561 jmp     loc_11FA5 ;~ 01A2:290D
loc_12910:
	// 4563 
cs=0x1a2;eip=0x002910; 	T(CMP(*(raddr(ss,bp+var_106)), 0));	// 4565 cmp     [bp+var_106], 0 ;~ 01A2:2910
cs=0x1a2;eip=0x002915; 	J(JZ(loc_1291e));	// 4566 jz      short loc_1291E ;~ 01A2:2915
cs=0x1a2;eip=0x002917; 	X(DEC(*(raddr(ss,bp+var_106))));	// 4567 dec     [bp+var_106] ;~ 01A2:2917
cs=0x1a2;eip=0x00291b; 	J(JMP(loc_11fa5));	// 4568 jmp     loc_11FA5 ;~ 01A2:291B
loc_1291e:
	// 4564 
cs=0x1a2;eip=0x00291e; 	X(MOV(*(raddr(ss,bp+var_106)), 4));	// 4572 mov     [bp+var_106], 4 ;~ 01A2:291E
cs=0x1a2;eip=0x002923; 	J(JMP(loc_11fa5));	// 4573 jmp     loc_11FA5 ;~ 01A2:2923
loc_12926:
	// 4565 
cs=0x1a2;eip=0x002926; 	T(CMP(*(raddr(ss,bp+var_106)), 4));	// 4577 cmp     [bp+var_106], 4 ;~ 01A2:2926
cs=0x1a2;eip=0x00292b; 	J(JGE(loc_12934));	// 4578 jge     short loc_12934 ;~ 01A2:292B
cs=0x1a2;eip=0x00292d; 	X(INC(*(raddr(ss,bp+var_106))));	// 4579 inc     [bp+var_106] ;~ 01A2:292D
cs=0x1a2;eip=0x002931; 	J(JMP(loc_11fa5));	// 4580 jmp     loc_11FA5 ;~ 01A2:2931
loc_12934:
	// 4566 
cs=0x1a2;eip=0x002934; 	X(MOV(*(raddr(ss,bp+var_106)), 0));	// 4584 mov     [bp+var_106], 0 ;~ 01A2:2934
cs=0x1a2;eip=0x002939; 	J(JMP(loc_11fa5));	// 4585 jmp     loc_11FA5 ;~ 01A2:2939

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_menu_color: 	goto _menu_color;
        case m2c::k_menu_done: 	goto _menu_done;
        case m2c::k_menu_nextcar: 	goto _menu_nextcar;
        case m2c::k_menu_prevcar: 	goto _menu_prevcar;
        case m2c::k_menu_transmission: 	goto _menu_transmission;
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
        case m2c::krun_car_menu: 	goto run_car_menu;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool run_opponent_menu(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    run_opponent_menu:
    _begin:
#undef var_1e
#define var_1e -0x1E
	// 4595 var_1E          = byte ptr -1Eh ;~ 01A2:293C
#undef var_1c
#define var_1c -0x1C
	// 4596 var_1C          = byte ptr -1Ch ;~ 01A2:293C
#undef var_1a
#define var_1a -0x1A
	// 4597 var_1A          = dword ptr -1Ah ;~ 01A2:293C
#undef var_16
#define var_16 -0x16
	// 4598 var_16          = byte ptr -16h ;~ 01A2:293C
#undef var_14
#define var_14 -0x14
	// 4599 var_14          = byte ptr -14h ;~ 01A2:293C
#undef var_10
#define var_10 -0x10
	// 4600 var_10          = word ptr -10h ;~ 01A2:293C
#undef var_e
#define var_e -0x0E
	// 4601 var_E           = word ptr -0Eh ;~ 01A2:293C
#undef var_c
#define var_c -0x0C
	// 4602 var_C           = word ptr -0Ch ;~ 01A2:293C
#undef var_a
#define var_a -0x0A
	// 4603 var_A           = word ptr -0Ah ;~ 01A2:293C
#undef var_8
#define var_8 -8
	// 4604 var_8           = word ptr -8 ;~ 01A2:293C
#undef var_6
#define var_6 -6
	// 4605 var_6           = byte ptr -6 ;~ 01A2:293C
#undef var_4
#define var_4 -4
	// 4606 var_4           = byte ptr -4 ;~ 01A2:293C
#undef var_2
#define var_2 -2
	// 4607 var_2           = byte ptr -2 ;~ 01A2:293C
cs=0x1a2;eip=0x00293c; 	X(PUSH(bp));	// 4609 push    bp ;~ 01A2:293C
cs=0x1a2;eip=0x00293d; 	T(MOV(bp, sp));	// 4610 mov     bp, sp ;~ 01A2:293D
cs=0x1a2;eip=0x00293f; 	T(SUB(sp, 0x1E));	// 4611 sub     sp, 1Eh ;~ 01A2:293F
cs=0x1a2;eip=0x002942; 	X(PUSH(si));	// 4612 push    si              ; char * ;~ 01A2:2942
cs=0x1a2;eip=0x002943; 	T(MOV(ax, 4));	// 4613 mov     ax, 4 ;~ 01A2:2943
cs=0x1a2;eip=0x002946; 	X(PUSH(ax));	// 4614 push    ax ;~ 01A2:2946
cs=0x1a2;eip=0x002947; 	J(CALLF(ensure_file_exists,0));	// 4615 call    ensure_file_exists ;~ 01A2:2947
cs=0x1a2;eip=0x00294c; 	T(ADD(sp, 2));	// 4616 add     sp, 2 ;~ 01A2:294C
cs=0x1a2;eip=0x00294f; 	T(MOV(ax, offset(dseg,amisc)));	// 4617 mov     ax, offset aMisc ; "misc" ;~ 01A2:294F
cs=0x1a2;eip=0x002952; 	X(PUSH(ax));	// 4618 push    ax ;~ 01A2:2952
cs=0x1a2;eip=0x002953; 	J(CALLF(file_load_resfile,0));	// 4619 call    file_load_resfile ;~ 01A2:2953
cs=0x1a2;eip=0x002958; 	T(ADD(sp, 2));	// 4620 add     sp, 2 ;~ 01A2:2958
cs=0x1a2;eip=0x00295b; 	X(MOV(miscptr, ax));	// 4621 mov     miscptr, ax ;~ 01A2:295B
cs=0x1a2;eip=0x00295e; 	X(MOV(word_455ce, dx));	// 4622 mov     word_455CE, dx ;~ 01A2:295E
cs=0x1a2;eip=0x002962; 	T(MOV(ax, offset(dseg,asdosel)));	// 4623 mov     ax, offset aSdosel ; "sdosel" ;~ 01A2:2962
cs=0x1a2;eip=0x002965; 	X(PUSH(ax));	// 4624 push    ax              ; char * ;~ 01A2:2965
cs=0x1a2;eip=0x002966; 	T(MOV(ax, 8));	// 4625 mov     ax, 8 ;~ 01A2:2966
cs=0x1a2;eip=0x002969; 	X(PUSH(ax));	// 4626 push    ax              ; int ;~ 01A2:2969
cs=0x1a2;eip=0x00296a; 	J(CALLF(file_load_resource,0));	// 4627 call    file_load_resource ;~ 01A2:296A
cs=0x1a2;eip=0x00296f; 	T(ADD(sp, 4));	// 4628 add     sp, 4 ;~ 01A2:296F
cs=0x1a2;eip=0x002972; 	X(MOV(opp_res, ax));	// 4629 mov     opp_res, ax ;~ 01A2:2972
cs=0x1a2;eip=0x002975; 	X(MOV(word_44a02, dx));	// 4630 mov     word_44A02, dx ;~ 01A2:2975
cs=0x1a2;eip=0x002979; 	T(MOV(ax, offset(dseg,oppresources)));	// 4631 mov     ax, offset oppresources ;~ 01A2:2979
cs=0x1a2;eip=0x00297c; 	X(PUSH(ax));	// 4632 push    ax ;~ 01A2:297C
cs=0x1a2;eip=0x00297d; 	T(MOV(ax, offset(dseg,aopp0opp1opp2op)));	// 4633 mov     ax, offset aOpp0opp1opp2op ; "opp0opp1opp2opp3opp4opp5opp6" ;~ 01A2:297D
cs=0x1a2;eip=0x002980; 	X(PUSH(ax));	// 4634 push    ax ;~ 01A2:2980
cs=0x1a2;eip=0x002981; 	X(PUSH(dx));	// 4635 push    dx ;~ 01A2:2981
cs=0x1a2;eip=0x002982; 	X(PUSH(opp_res));	// 4636 push    opp_res ;~ 01A2:2982
cs=0x1a2;eip=0x002986; 	J(CALLF(locate_many_resources,0));	// 4637 call    locate_many_resources ;~ 01A2:2986
cs=0x1a2;eip=0x00298b; 	T(ADD(sp, 8));	// 4638 add     sp, 8 ;~ 01A2:298B
cs=0x1a2;eip=0x00298e; 	X(MOV(*(raddr(ss,bp+var_1c)), 0));	// 4639 mov     [bp+var_1C], 0 ;~ 01A2:298E
cs=0x1a2;eip=0x002992; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 4640 mov     [bp+var_6], 0 ;~ 01A2:2992
cs=0x1a2;eip=0x002996; 	X(MOV(*(raddr(ss,bp+var_1e)), 0x0FF));	// 4641 mov     [bp+var_1E], 0FFh ;~ 01A2:2996
cs=0x1a2;eip=0x00299a; 	X(MOV(*(raddr(ss,bp+var_4)), 0x0FF));	// 4642 mov     [bp+var_4], 0FFh ;~ 01A2:299A
cs=0x1a2;eip=0x00299e; 	J(CALLF(sub_29772,0));	// 4643 call    sub_29772 ;~ 01A2:299E
loc_129a3:
	// 4567 
cs=0x1a2;eip=0x0029a3; 	J(CALLF(mouse_draw_transparent_check,0));	// 4646 call    mouse_draw_transparent_check ;~ 01A2:29A3
loc_129a8:
	// 4568 
cs=0x1a2;eip=0x0029a8; 	T(MOV(al, byte_449aa));	// 4650 mov     al, byte_449AA ;~ 01A2:29A8
cs=0x1a2;eip=0x0029ab; 	T(CMP(*(raddr(ss,bp+var_1e)), al));	// 4651 cmp     [bp+var_1E], al ;~ 01A2:29AB
cs=0x1a2;eip=0x0029ae; 	J(JNZ(loc_129b3));	// 4652 jnz     short loc_129B3 ;~ 01A2:29AE
cs=0x1a2;eip=0x0029b0; 	J(JMP(loc_12cfb));	// 4653 jmp     loc_12CFB ;~ 01A2:29B0
loc_129b3:
	// 4569 
cs=0x1a2;eip=0x0029b3; 	T(CMP(*(raddr(ss,bp+var_1e)), 0x0FF));	// 4657 cmp     [bp+var_1E], 0FFh ;~ 01A2:29B3
cs=0x1a2;eip=0x0029b7; 	J(JZ(loc_129dd));	// 4658 jz      short loc_129DD ;~ 01A2:29B7
cs=0x1a2;eip=0x0029b9; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 4659 push    word ptr wndsprite+2 ;~ 01A2:29B9
cs=0x1a2;eip=0x0029bd; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 4660 push    word ptr wndsprite ;~ 01A2:29BD
cs=0x1a2;eip=0x0029c1; 	J(CALLF(sprite_free_wnd,0));	// 4661 call    sprite_free_wnd ;~ 01A2:29C1
cs=0x1a2;eip=0x0029c6; 	T(ADD(sp, 4));	// 4662 add     sp, 4 ;~ 01A2:29C6
cs=0x1a2;eip=0x0029c9; 	T(CMP(*(raddr(ss,bp+var_6)), 0));	// 4663 cmp     [bp+var_6], 0 ;~ 01A2:29C9
cs=0x1a2;eip=0x0029cd; 	J(JZ(loc_129dd));	// 4664 jz      short loc_129DD ;~ 01A2:29CD
cs=0x1a2;eip=0x0029cf; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 4665 push    [bp+var_A] ;~ 01A2:29CF
cs=0x1a2;eip=0x0029d2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 4666 push    [bp+var_C] ;~ 01A2:29D2
cs=0x1a2;eip=0x0029d5; 	J(CALLF(unload_resource,0));	// 4667 call    unload_resource ;~ 01A2:29D5
cs=0x1a2;eip=0x0029da; 	T(ADD(sp, 4));	// 4668 add     sp, 4 ;~ 01A2:29DA
loc_129dd:
	// 4570 
cs=0x1a2;eip=0x0029dd; 	T(MOV(ax, 4));	// 4672 mov     ax, 4 ;~ 01A2:29DD
cs=0x1a2;eip=0x0029e0; 	X(PUSH(ax));	// 4673 push    ax ;~ 01A2:29E0
cs=0x1a2;eip=0x0029e1; 	J(CALLF(ensure_file_exists,0));	// 4674 call    ensure_file_exists ;~ 01A2:29E1
cs=0x1a2;eip=0x0029e6; 	T(ADD(sp, 2));	// 4675 add     sp, 2 ;~ 01A2:29E6
cs=0x1a2;eip=0x0029e9; 	T(CMP(byte_449aa, 0));	// 4676 cmp     byte_449AA, 0 ;~ 01A2:29E9
cs=0x1a2;eip=0x0029ee; 	J(JZ(loc_12a10));	// 4677 jz      short loc_12A10 ;~ 01A2:29EE
cs=0x1a2;eip=0x0029f0; 	T(MOV(al, byte_449aa));	// 4678 mov     al, byte_449AA ;~ 01A2:29F0
cs=0x1a2;eip=0x0029f3; 	T(ADD(al, 0x30));	// 4679 add     al, 30h ; '0' ;~ 01A2:29F3
cs=0x1a2;eip=0x0029f5; 	X(MOV(byte_3b907, al));	// 4680 mov     byte_3B907, al ;~ 01A2:29F5
cs=0x1a2;eip=0x0029f8; 	T(MOV(ax, offset(dseg,unk_3b904)));	// 4681 mov     ax, offset unk_3B904 ;~ 01A2:29F8
cs=0x1a2;eip=0x0029fb; 	X(PUSH(ax));	// 4682 push    ax ;~ 01A2:29FB
cs=0x1a2;eip=0x0029fc; 	J(CALLF(file_load_resfile,0));	// 4683 call    file_load_resfile ;~ 01A2:29FC
cs=0x1a2;eip=0x002a01; 	T(ADD(sp, 2));	// 4684 add     sp, 2 ;~ 01A2:2A01
cs=0x1a2;eip=0x002a04; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 4685 mov     [bp+var_C], ax ;~ 01A2:2A04
cs=0x1a2;eip=0x002a07; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 4686 mov     [bp+var_A], dx ;~ 01A2:2A07
cs=0x1a2;eip=0x002a0a; 	X(MOV(*(raddr(ss,bp+var_6)), 1));	// 4687 mov     [bp+var_6], 1 ;~ 01A2:2A0A
cs=0x1a2;eip=0x002a0e; 	J(JMP(loc_12a14));	// 4688 jmp     short loc_12A14 ;~ 01A2:2A0E
loc_12a10:
	// 4571 
cs=0x1a2;eip=0x002a10; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 4692 mov     [bp+var_6], 0 ;~ 01A2:2A10
loc_12a14:
	// 4572 
cs=0x1a2;eip=0x002a14; 	T(MOV(ax, 0x0F));	// 4695 mov     ax, 0Fh ;~ 01A2:2A14
cs=0x1a2;eip=0x002a17; 	X(PUSH(ax));	// 4696 push    ax ;~ 01A2:2A17
cs=0x1a2;eip=0x002a18; 	T(MOV(ax, 0x0C8));	// 4697 mov     ax, 0C8h ; 'È' ;~ 01A2:2A18
cs=0x1a2;eip=0x002a1b; 	X(PUSH(ax));	// 4698 push    ax ;~ 01A2:2A1B
cs=0x1a2;eip=0x002a1c; 	T(MOV(ax, 0x140));	// 4699 mov     ax, 140h ;~ 01A2:2A1C
cs=0x1a2;eip=0x002a1f; 	X(PUSH(ax));	// 4700 push    ax ;~ 01A2:2A1F
cs=0x1a2;eip=0x002a20; 	J(CALLF(sprite_make_wnd,0));	// 4701 call    sprite_make_wnd ;~ 01A2:2A20
cs=0x1a2;eip=0x002a25; 	T(ADD(sp, 6));	// 4702 add     sp, 6 ;~ 01A2:2A25
cs=0x1a2;eip=0x002a28; 	X(MOV(*(dw*)(((db*)&wndsprite)), ax));	// 4703 mov     word ptr wndsprite, ax ;~ 01A2:2A28
cs=0x1a2;eip=0x002a2b; 	X(MOV(*(dw*)(((db*)&wndsprite)+2), dx));	// 4704 mov     word ptr wndsprite+2, dx ;~ 01A2:2A2B
cs=0x1a2;eip=0x002a2f; 	T(MOV(al, byte_449aa));	// 4705 mov     al, byte_449AA ;~ 01A2:2A2F
cs=0x1a2;eip=0x002a32; 	X(MOV(*(raddr(ss,bp+var_1e)), al));	// 4706 mov     [bp+var_1E], al ;~ 01A2:2A32
cs=0x1a2;eip=0x002a35; 	X(MOV(*(raddr(ss,bp+var_14)), 0x0FF));	// 4707 mov     [bp+var_14], 0FFh ;~ 01A2:2A35
cs=0x1a2;eip=0x002a39; 	T(CMP(video_flag5_is0, 0));	// 4708 cmp     video_flag5_is0, 0 ;~ 01A2:2A39
cs=0x1a2;eip=0x002a3e; 	J(JNZ(loc_12a48));	// 4709 jnz     short loc_12A48 ;~ 01A2:2A3E
cs=0x1a2;eip=0x002a40; 	J(CALLF(sprite_copy_wnd_to_1,0));	// 4710 call    sprite_copy_wnd_to_1 ;~ 01A2:2A40
cs=0x1a2;eip=0x002a45; 	J(JMP(loc_12a4d));	// 4711 jmp     short loc_12A4D ;~ 01A2:2A45
loc_12a48:
	// 4573 
cs=0x1a2;eip=0x002a48; 	J(CALLF(setup_mcgawnd2,0));	// 4716 call    setup_mcgawnd2 ;~ 01A2:2A48
loc_12a4d:
	// 4574 
cs=0x1a2;eip=0x002a4d; 	T(SUB(ax, ax));	// 4719 sub     ax, ax ;~ 01A2:2A4D
cs=0x1a2;eip=0x002a4f; 	X(PUSH(ax));	// 4720 push    ax ;~ 01A2:2A4F
cs=0x1a2;eip=0x002a50; 	J(CALLF(sprite_clear_1_color,0));	// 4721 call    sprite_clear_1_color ;~ 01A2:2A50
cs=0x1a2;eip=0x002a55; 	T(ADD(sp, 2));	// 4722 add     sp, 2 ;~ 01A2:2A55
cs=0x1a2;eip=0x002a58; 	T(MOV(ax, 0x37));	// 4723 mov     ax, 37h ; '7' ;~ 01A2:2A58
cs=0x1a2;eip=0x002a5b; 	X(PUSH(ax));	// 4724 push    ax ;~ 01A2:2A5B
cs=0x1a2;eip=0x002a5c; 	X(PUSH(word_44a02));	// 4725 push    word_44A02 ;~ 01A2:2A5C
cs=0x1a2;eip=0x002a60; 	X(PUSH(opp_res));	// 4726 push    opp_res ;~ 01A2:2A60
cs=0x1a2;eip=0x002a64; 	J(CALLF(nullsub_2,0));	// 4727 call    nullsub_2 ;~ 01A2:2A64
cs=0x1a2;eip=0x002a69; 	T(ADD(sp, 6));	// 4728 add     sp, 6 ;~ 01A2:2A69
cs=0x1a2;eip=0x002a6c; 	T(MOV(ax, offset(dseg,ascrn_0)));	// 4729 mov     ax, offset aScrn_0 ; "scrn" ;~ 01A2:2A6C
cs=0x1a2;eip=0x002a6f; 	X(PUSH(ax));	// 4730 push    ax ;~ 01A2:2A6F
cs=0x1a2;eip=0x002a70; 	X(PUSH(word_44a02));	// 4731 push    word_44A02 ;~ 01A2:2A70
cs=0x1a2;eip=0x002a74; 	X(PUSH(opp_res));	// 4732 push    opp_res ;~ 01A2:2A74
cs=0x1a2;eip=0x002a78; 	J(CALLF(locate_shape_fatal,0));	// 4733 call    locate_shape_fatal ;~ 01A2:2A78
cs=0x1a2;eip=0x002a7d; 	T(ADD(sp, 6));	// 4734 add     sp, 6 ;~ 01A2:2A7D
cs=0x1a2;eip=0x002a80; 	X(PUSH(dx));	// 4735 push    dx ;~ 01A2:2A80
cs=0x1a2;eip=0x002a81; 	X(PUSH(ax));	// 4736 push    ax ;~ 01A2:2A81
cs=0x1a2;eip=0x002a82; 	J(CALLF(sub_34526,0));	// 4737 call    sub_34526 ;~ 01A2:2A82
cs=0x1a2;eip=0x002a87; 	T(ADD(sp, 4));	// 4738 add     sp, 4 ;~ 01A2:2A87
cs=0x1a2;eip=0x002a8a; 	T(SUB(ax, ax));	// 4739 sub     ax, ax ;~ 01A2:2A8A
cs=0x1a2;eip=0x002a8c; 	X(PUSH(ax));	// 4740 push    ax ;~ 01A2:2A8C
cs=0x1a2;eip=0x002a8d; 	X(PUSH(word_407f8));	// 4741 push    word_407F8 ;~ 01A2:2A8D
cs=0x1a2;eip=0x002a91; 	X(PUSH(word_407f6));	// 4742 push    word_407F6 ;~ 01A2:2A91
cs=0x1a2;eip=0x002a95; 	X(PUSH(word_407f4));	// 4743 push    word_407F4 ;~ 01A2:2A95
cs=0x1a2;eip=0x002a99; 	T(MOV(ax, 0x12));	// 4744 mov     ax, 12h ;~ 01A2:2A99
cs=0x1a2;eip=0x002a9c; 	X(PUSH(ax));	// 4745 push    ax ;~ 01A2:2A9C
cs=0x1a2;eip=0x002a9d; 	T(MOV(ax, 0x36));	// 4746 mov     ax, 36h ; '6' ;~ 01A2:2A9D
cs=0x1a2;eip=0x002aa0; 	X(PUSH(ax));	// 4747 push    ax ;~ 01A2:2AA0
cs=0x1a2;eip=0x002aa1; 	T(MOV(ax, *(opponentmenu_buttons_y1)));	// 4748 mov     ax, opponentmenu_buttons_y1 ;~ 01A2:2AA1
cs=0x1a2;eip=0x002aa4; 	T(INC(ax));	// 4749 inc     ax ;~ 01A2:2AA4
cs=0x1a2;eip=0x002aa5; 	X(PUSH(ax));	// 4750 push    ax ;~ 01A2:2AA5
cs=0x1a2;eip=0x002aa6; 	T(MOV(ax, 0x15));	// 4751 mov     ax, 15h ;~ 01A2:2AA6
cs=0x1a2;eip=0x002aa9; 	X(PUSH(ax));	// 4752 push    ax ;~ 01A2:2AA9
cs=0x1a2;eip=0x002aaa; 	T(MOV(ax, offset(dseg,abla)));	// 4753 mov     ax, offset aBla ; "bla" ;~ 01A2:2AAA
cs=0x1a2;eip=0x002aad; 	X(PUSH(ax));	// 4754 push    ax ;~ 01A2:2AAD
cs=0x1a2;eip=0x002aae; 	X(PUSH(word_455ce));	// 4755 push    word_455CE ;~ 01A2:2AAE
cs=0x1a2;eip=0x002ab2; 	X(PUSH(miscptr));	// 4756 push    miscptr ;~ 01A2:2AB2
cs=0x1a2;eip=0x002ab6; 	J(CALLF(locate_text_res,0));	// 4757 call    locate_text_res ;~ 01A2:2AB6
cs=0x1a2;eip=0x002abb; 	T(ADD(sp, 6));	// 4758 add     sp, 6 ;~ 01A2:2ABB
cs=0x1a2;eip=0x002abe; 	X(PUSH(dx));	// 4759 push    dx ;~ 01A2:2ABE
cs=0x1a2;eip=0x002abf; 	X(PUSH(ax));	// 4760 push    ax ;~ 01A2:2ABF
cs=0x1a2;eip=0x002ac0; 	J(CALLF(draw_button,0));	// 4761 call    draw_button ;~ 01A2:2AC0
cs=0x1a2;eip=0x002ac5; 	T(ADD(sp, 0x14));	// 4762 add     sp, 14h ;~ 01A2:2AC5
cs=0x1a2;eip=0x002ac8; 	T(SUB(ax, ax));	// 4763 sub     ax, ax ;~ 01A2:2AC8
cs=0x1a2;eip=0x002aca; 	X(PUSH(ax));	// 4764 push    ax ;~ 01A2:2ACA
cs=0x1a2;eip=0x002acb; 	X(PUSH(word_407f8));	// 4765 push    word_407F8 ;~ 01A2:2ACB
cs=0x1a2;eip=0x002acf; 	X(PUSH(word_407f6));	// 4766 push    word_407F6 ;~ 01A2:2ACF
cs=0x1a2;eip=0x002ad3; 	X(PUSH(word_407f4));	// 4767 push    word_407F4 ;~ 01A2:2AD3
cs=0x1a2;eip=0x002ad7; 	T(MOV(ax, 0x12));	// 4768 mov     ax, 12h ;~ 01A2:2AD7
cs=0x1a2;eip=0x002ada; 	X(PUSH(ax));	// 4769 push    ax ;~ 01A2:2ADA
cs=0x1a2;eip=0x002adb; 	T(MOV(ax, 0x36));	// 4770 mov     ax, 36h ; '6' ;~ 01A2:2ADB
cs=0x1a2;eip=0x002ade; 	X(PUSH(ax));	// 4771 push    ax ;~ 01A2:2ADE
cs=0x1a2;eip=0x002adf; 	T(MOV(ax, *(opponentmenu_buttons_y1)));	// 4772 mov     ax, opponentmenu_buttons_y1 ;~ 01A2:2ADF
cs=0x1a2;eip=0x002ae2; 	T(INC(ax));	// 4773 inc     ax ;~ 01A2:2AE2
cs=0x1a2;eip=0x002ae3; 	X(PUSH(ax));	// 4774 push    ax ;~ 01A2:2AE3
cs=0x1a2;eip=0x002ae4; 	T(MOV(ax, 0x4D));	// 4775 mov     ax, 4Dh ; 'M' ;~ 01A2:2AE4
cs=0x1a2;eip=0x002ae7; 	X(PUSH(ax));	// 4776 push    ax ;~ 01A2:2AE7
cs=0x1a2;eip=0x002ae8; 	T(MOV(ax, offset(dseg,abnx)));	// 4777 mov     ax, offset aBnx ; "bnx" ;~ 01A2:2AE8
cs=0x1a2;eip=0x002aeb; 	X(PUSH(ax));	// 4778 push    ax ;~ 01A2:2AEB
cs=0x1a2;eip=0x002aec; 	X(PUSH(word_455ce));	// 4779 push    word_455CE ;~ 01A2:2AEC
cs=0x1a2;eip=0x002af0; 	X(PUSH(miscptr));	// 4780 push    miscptr ;~ 01A2:2AF0
cs=0x1a2;eip=0x002af4; 	J(CALLF(locate_text_res,0));	// 4781 call    locate_text_res ;~ 01A2:2AF4
cs=0x1a2;eip=0x002af9; 	T(ADD(sp, 6));	// 4782 add     sp, 6 ;~ 01A2:2AF9
cs=0x1a2;eip=0x002afc; 	X(PUSH(dx));	// 4783 push    dx ;~ 01A2:2AFC
cs=0x1a2;eip=0x002afd; 	X(PUSH(ax));	// 4784 push    ax ;~ 01A2:2AFD
cs=0x1a2;eip=0x002afe; 	J(CALLF(draw_button,0));	// 4785 call    draw_button ;~ 01A2:2AFE
cs=0x1a2;eip=0x002b03; 	T(ADD(sp, 0x14));	// 4786 add     sp, 14h ;~ 01A2:2B03
cs=0x1a2;eip=0x002b06; 	T(SUB(ax, ax));	// 4787 sub     ax, ax ;~ 01A2:2B06
cs=0x1a2;eip=0x002b08; 	X(PUSH(ax));	// 4788 push    ax ;~ 01A2:2B08
cs=0x1a2;eip=0x002b09; 	X(PUSH(word_407f8));	// 4789 push    word_407F8 ;~ 01A2:2B09
cs=0x1a2;eip=0x002b0d; 	X(PUSH(word_407f6));	// 4790 push    word_407F6 ;~ 01A2:2B0D
cs=0x1a2;eip=0x002b11; 	X(PUSH(word_407f4));	// 4791 push    word_407F4 ;~ 01A2:2B11
cs=0x1a2;eip=0x002b15; 	T(MOV(ax, 0x12));	// 4792 mov     ax, 12h ;~ 01A2:2B15
cs=0x1a2;eip=0x002b18; 	X(PUSH(ax));	// 4793 push    ax ;~ 01A2:2B18
cs=0x1a2;eip=0x002b19; 	T(MOV(ax, 0x36));	// 4794 mov     ax, 36h ; '6' ;~ 01A2:2B19
cs=0x1a2;eip=0x002b1c; 	X(PUSH(ax));	// 4795 push    ax ;~ 01A2:2B1C
cs=0x1a2;eip=0x002b1d; 	T(MOV(ax, *(opponentmenu_buttons_y1)));	// 4796 mov     ax, opponentmenu_buttons_y1 ;~ 01A2:2B1D
cs=0x1a2;eip=0x002b20; 	T(INC(ax));	// 4797 inc     ax ;~ 01A2:2B20
cs=0x1a2;eip=0x002b21; 	X(PUSH(ax));	// 4798 push    ax ;~ 01A2:2B21
cs=0x1a2;eip=0x002b22; 	T(MOV(ax, 0x85));	// 4799 mov     ax, 85h ; '…' ;~ 01A2:2B22
cs=0x1a2;eip=0x002b25; 	X(PUSH(ax));	// 4800 push    ax ;~ 01A2:2B25
cs=0x1a2;eip=0x002b26; 	T(MOV(ax, offset(dseg,abcl)));	// 4801 mov     ax, offset aBcl ; "bcl" ;~ 01A2:2B26
cs=0x1a2;eip=0x002b29; 	X(PUSH(ax));	// 4802 push    ax ;~ 01A2:2B29
cs=0x1a2;eip=0x002b2a; 	X(PUSH(word_455ce));	// 4803 push    word_455CE ;~ 01A2:2B2A
cs=0x1a2;eip=0x002b2e; 	X(PUSH(miscptr));	// 4804 push    miscptr ;~ 01A2:2B2E
cs=0x1a2;eip=0x002b32; 	J(CALLF(locate_text_res,0));	// 4805 call    locate_text_res ;~ 01A2:2B32
cs=0x1a2;eip=0x002b37; 	T(ADD(sp, 6));	// 4806 add     sp, 6 ;~ 01A2:2B37
cs=0x1a2;eip=0x002b3a; 	X(PUSH(dx));	// 4807 push    dx ;~ 01A2:2B3A
cs=0x1a2;eip=0x002b3b; 	X(PUSH(ax));	// 4808 push    ax ;~ 01A2:2B3B
cs=0x1a2;eip=0x002b3c; 	J(CALLF(draw_button,0));	// 4809 call    draw_button ;~ 01A2:2B3C
cs=0x1a2;eip=0x002b41; 	T(ADD(sp, 0x14));	// 4810 add     sp, 14h ;~ 01A2:2B41
cs=0x1a2;eip=0x002b44; 	T(SUB(ax, ax));	// 4811 sub     ax, ax ;~ 01A2:2B44
cs=0x1a2;eip=0x002b46; 	X(PUSH(ax));	// 4812 push    ax ;~ 01A2:2B46
cs=0x1a2;eip=0x002b47; 	X(PUSH(word_407f8));	// 4813 push    word_407F8 ;~ 01A2:2B47
cs=0x1a2;eip=0x002b4b; 	X(PUSH(word_407f6));	// 4814 push    word_407F6 ;~ 01A2:2B4B
cs=0x1a2;eip=0x002b4f; 	X(PUSH(word_407f4));	// 4815 push    word_407F4 ;~ 01A2:2B4F
cs=0x1a2;eip=0x002b53; 	T(MOV(ax, 0x12));	// 4816 mov     ax, 12h ;~ 01A2:2B53
cs=0x1a2;eip=0x002b56; 	X(PUSH(ax));	// 4817 push    ax ;~ 01A2:2B56
cs=0x1a2;eip=0x002b57; 	T(MOV(ax, 0x36));	// 4818 mov     ax, 36h ; '6' ;~ 01A2:2B57
cs=0x1a2;eip=0x002b5a; 	X(PUSH(ax));	// 4819 push    ax ;~ 01A2:2B5A
cs=0x1a2;eip=0x002b5b; 	T(MOV(ax, *(opponentmenu_buttons_y1)));	// 4820 mov     ax, opponentmenu_buttons_y1 ;~ 01A2:2B5B
cs=0x1a2;eip=0x002b5e; 	T(INC(ax));	// 4821 inc     ax ;~ 01A2:2B5E
cs=0x1a2;eip=0x002b5f; 	X(PUSH(ax));	// 4822 push    ax ;~ 01A2:2B5F
cs=0x1a2;eip=0x002b60; 	T(MOV(ax, 0x0BD));	// 4823 mov     ax, 0BDh ; '½' ;~ 01A2:2B60
cs=0x1a2;eip=0x002b63; 	X(PUSH(ax));	// 4824 push    ax ;~ 01A2:2B63
cs=0x1a2;eip=0x002b64; 	T(MOV(ax, offset(dseg,abca)));	// 4825 mov     ax, offset aBca ; "bca" ;~ 01A2:2B64
cs=0x1a2;eip=0x002b67; 	X(PUSH(ax));	// 4826 push    ax ;~ 01A2:2B67
cs=0x1a2;eip=0x002b68; 	X(PUSH(word_455ce));	// 4827 push    word_455CE ;~ 01A2:2B68
cs=0x1a2;eip=0x002b6c; 	X(PUSH(miscptr));	// 4828 push    miscptr ;~ 01A2:2B6C
cs=0x1a2;eip=0x002b70; 	J(CALLF(locate_text_res,0));	// 4829 call    locate_text_res ;~ 01A2:2B70
cs=0x1a2;eip=0x002b75; 	T(ADD(sp, 6));	// 4830 add     sp, 6 ;~ 01A2:2B75
cs=0x1a2;eip=0x002b78; 	X(PUSH(dx));	// 4831 push    dx ;~ 01A2:2B78
cs=0x1a2;eip=0x002b79; 	X(PUSH(ax));	// 4832 push    ax ;~ 01A2:2B79
cs=0x1a2;eip=0x002b7a; 	J(CALLF(draw_button,0));	// 4833 call    draw_button ;~ 01A2:2B7A
cs=0x1a2;eip=0x002b7f; 	T(ADD(sp, 0x14));	// 4834 add     sp, 14h ;~ 01A2:2B7F
cs=0x1a2;eip=0x002b82; 	T(SUB(ax, ax));	// 4835 sub     ax, ax ;~ 01A2:2B82
cs=0x1a2;eip=0x002b84; 	X(PUSH(ax));	// 4836 push    ax ;~ 01A2:2B84
cs=0x1a2;eip=0x002b85; 	X(PUSH(word_407f8));	// 4837 push    word_407F8 ;~ 01A2:2B85
cs=0x1a2;eip=0x002b89; 	X(PUSH(word_407f6));	// 4838 push    word_407F6 ;~ 01A2:2B89
cs=0x1a2;eip=0x002b8d; 	X(PUSH(word_407f4));	// 4839 push    word_407F4 ;~ 01A2:2B8D
cs=0x1a2;eip=0x002b91; 	T(MOV(ax, 0x12));	// 4840 mov     ax, 12h ;~ 01A2:2B91
cs=0x1a2;eip=0x002b94; 	X(PUSH(ax));	// 4841 push    ax ;~ 01A2:2B94
cs=0x1a2;eip=0x002b95; 	T(MOV(ax, 0x36));	// 4842 mov     ax, 36h ; '6' ;~ 01A2:2B95
cs=0x1a2;eip=0x002b98; 	X(PUSH(ax));	// 4843 push    ax ;~ 01A2:2B98
cs=0x1a2;eip=0x002b99; 	T(MOV(ax, *(opponentmenu_buttons_y1)));	// 4844 mov     ax, opponentmenu_buttons_y1 ;~ 01A2:2B99
cs=0x1a2;eip=0x002b9c; 	T(INC(ax));	// 4845 inc     ax ;~ 01A2:2B9C
cs=0x1a2;eip=0x002b9d; 	X(PUSH(ax));	// 4846 push    ax ;~ 01A2:2B9D
cs=0x1a2;eip=0x002b9e; 	T(MOV(ax, 0x0F5));	// 4847 mov     ax, 0F5h ; 'õ' ;~ 01A2:2B9E
cs=0x1a2;eip=0x002ba1; 	X(PUSH(ax));	// 4848 push    ax ;~ 01A2:2BA1
cs=0x1a2;eip=0x002ba2; 	T(MOV(ax, offset(dseg,abdo)));	// 4849 mov     ax, offset aBdo ; "bdo" ;~ 01A2:2BA2
cs=0x1a2;eip=0x002ba5; 	X(PUSH(ax));	// 4850 push    ax ;~ 01A2:2BA5
cs=0x1a2;eip=0x002ba6; 	X(PUSH(word_455ce));	// 4851 push    word_455CE ;~ 01A2:2BA6
cs=0x1a2;eip=0x002baa; 	X(PUSH(miscptr));	// 4852 push    miscptr ;~ 01A2:2BAA
cs=0x1a2;eip=0x002bae; 	J(CALLF(locate_text_res,0));	// 4853 call    locate_text_res ;~ 01A2:2BAE
cs=0x1a2;eip=0x002bb3; 	T(ADD(sp, 6));	// 4854 add     sp, 6 ;~ 01A2:2BB3
cs=0x1a2;eip=0x002bb6; 	X(PUSH(dx));	// 4855 push    dx ;~ 01A2:2BB6
cs=0x1a2;eip=0x002bb7; 	X(PUSH(ax));	// 4856 push    ax ;~ 01A2:2BB7
cs=0x1a2;eip=0x002bb8; 	J(CALLF(draw_button,0));	// 4857 call    draw_button ;~ 01A2:2BB8
cs=0x1a2;eip=0x002bbd; 	T(ADD(sp, 0x14));	// 4858 add     sp, 14h ;~ 01A2:2BBD
cs=0x1a2;eip=0x002bc0; 	T(MOV(al, byte_449aa));	// 4859 mov     al, byte_449AA ;~ 01A2:2BC0
cs=0x1a2;eip=0x002bc3; 	T(ADD(al, 0x30));	// 4860 add     al, 30h ; '0' ;~ 01A2:2BC3
cs=0x1a2;eip=0x002bc5; 	T(CBW);	// 4861 cbw ;~ 01A2:2BC5
cs=0x1a2;eip=0x002bc6; 	X(PUSH(ax));	// 4862 push    ax ;~ 01A2:2BC6
cs=0x1a2;eip=0x002bc7; 	X(PUSH(word_44a02));	// 4863 push    word_44A02 ;~ 01A2:2BC7
cs=0x1a2;eip=0x002bcb; 	X(PUSH(opp_res));	// 4864 push    opp_res ;~ 01A2:2BCB
cs=0x1a2;eip=0x002bcf; 	J(CALLF(nullsub_2,0));	// 4865 call    nullsub_2 ;~ 01A2:2BCF
cs=0x1a2;eip=0x002bd4; 	T(ADD(sp, 6));	// 4866 add     sp, 6 ;~ 01A2:2BD4
cs=0x1a2;eip=0x002bd7; 	T(MOV(al, byte_449aa));	// 4867 mov     al, byte_449AA ;~ 01A2:2BD7
cs=0x1a2;eip=0x002bda; 	T(CBW);	// 4868 cbw ;~ 01A2:2BDA
cs=0x1a2;eip=0x002bdb; 	T(MOV(bx, ax));	// 4869 mov     bx, ax ;~ 01A2:2BDB
cs=0x1a2;eip=0x002bdd; 	T(SHL(bx, 1));	// 4870 shl     bx, 1 ;~ 01A2:2BDD
cs=0x1a2;eip=0x002bdf; 	T(SHL(bx, 1));	// 4871 shl     bx, 1 ;~ 01A2:2BDF
cs=0x1a2;eip=0x002be1; 	X(PUSH(*(dw*)((((db*)&oppresources)+2)+bx)));	// 4872 push    word ptr (oppresources+2)[bx] ;~ 01A2:2BE1
cs=0x1a2;eip=0x002be5; 	X(PUSH(*(dw*)(((db*)&oppresources)+bx)));	// 4873 push    word ptr oppresources[bx] ;~ 01A2:2BE5
cs=0x1a2;eip=0x002be9; 	J(CALLF(sub_34526,0));	// 4874 call    sub_34526 ;~ 01A2:2BE9
cs=0x1a2;eip=0x002bee; 	T(ADD(sp, 4));	// 4875 add     sp, 4 ;~ 01A2:2BEE
cs=0x1a2;eip=0x002bf1; 	T(MOV(ax, 0x37));	// 4876 mov     ax, 37h ; '7' ;~ 01A2:2BF1
cs=0x1a2;eip=0x002bf4; 	X(PUSH(ax));	// 4877 push    ax ;~ 01A2:2BF4
cs=0x1a2;eip=0x002bf5; 	X(PUSH(word_44a02));	// 4878 push    word_44A02 ;~ 01A2:2BF5
cs=0x1a2;eip=0x002bf9; 	X(PUSH(opp_res));	// 4879 push    opp_res ;~ 01A2:2BF9
cs=0x1a2;eip=0x002bfd; 	J(CALLF(nullsub_2,0));	// 4880 call    nullsub_2 ;~ 01A2:2BFD
cs=0x1a2;eip=0x002c02; 	T(ADD(sp, 6));	// 4881 add     sp, 6 ;~ 01A2:2C02
cs=0x1a2;eip=0x002c05; 	T(MOV(ax, offset(dseg,aclip)));	// 4882 mov     ax, offset aClip ; "clip" ;~ 01A2:2C05
cs=0x1a2;eip=0x002c08; 	X(PUSH(ax));	// 4883 push    ax ;~ 01A2:2C08
cs=0x1a2;eip=0x002c09; 	X(PUSH(word_44a02));	// 4884 push    word_44A02 ;~ 01A2:2C09
cs=0x1a2;eip=0x002c0d; 	X(PUSH(opp_res));	// 4885 push    opp_res ;~ 01A2:2C0D
cs=0x1a2;eip=0x002c11; 	J(CALLF(locate_shape_fatal,0));	// 4886 call    locate_shape_fatal ;~ 01A2:2C11
cs=0x1a2;eip=0x002c16; 	T(ADD(sp, 6));	// 4887 add     sp, 6 ;~ 01A2:2C16
cs=0x1a2;eip=0x002c19; 	X(PUSH(dx));	// 4888 push    dx ;~ 01A2:2C19
cs=0x1a2;eip=0x002c1a; 	X(PUSH(ax));	// 4889 push    ax ;~ 01A2:2C1A
cs=0x1a2;eip=0x002c1b; 	J(CALLF(sub_34526,0));	// 4890 call    sub_34526 ;~ 01A2:2C1B
cs=0x1a2;eip=0x002c20; 	T(ADD(sp, 4));	// 4891 add     sp, 4 ;~ 01A2:2C20
cs=0x1a2;eip=0x002c23; 	T(CMP(video_flag5_is0, 0));	// 4892 cmp     video_flag5_is0, 0 ;~ 01A2:2C23
cs=0x1a2;eip=0x002c28; 	J(JZ(loc_12c46));	// 4893 jz      short loc_12C46 ;~ 01A2:2C28
cs=0x1a2;eip=0x002c2a; 	T(SUB(ax, ax));	// 4894 sub     ax, ax ;~ 01A2:2C2A
cs=0x1a2;eip=0x002c2c; 	X(PUSH(ax));	// 4895 push    ax ;~ 01A2:2C2C
cs=0x1a2;eip=0x002c2d; 	X(PUSH(ax));	// 4896 push    ax ;~ 01A2:2C2D
cs=0x1a2;eip=0x002c2e; 	T(LES(bx, wndsprite));	// 4897 les     bx, wndsprite ;~ 01A2:2C2E
cs=0x1a2;eip=0x002c32; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 4898 push    word ptr es:[bx+2] ;~ 01A2:2C32
cs=0x1a2;eip=0x002c36; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 4899 push    word ptr es:[bx] ;~ 01A2:2C36
cs=0x1a2;eip=0x002c39; 	J(CALLF(sprite_clear_shape_alt,0));	// 4900 call    sprite_clear_shape_alt ;~ 01A2:2C39
cs=0x1a2;eip=0x002c3e; 	T(ADD(sp, 8));	// 4901 add     sp, 8 ;~ 01A2:2C3E
cs=0x1a2;eip=0x002c41; 	J(CALLF(sprite_copy_wnd_to_1,0));	// 4902 call    sprite_copy_wnd_to_1 ;~ 01A2:2C41
loc_12c46:
	// 4575 
cs=0x1a2;eip=0x002c46; 	T(CMP(byte_449aa, 0));	// 4905 cmp     byte_449AA, 0 ;~ 01A2:2C46
cs=0x1a2;eip=0x002c4b; 	J(JZ(loc_12c5a));	// 4906 jz      short loc_12C5A ;~ 01A2:2C4B
cs=0x1a2;eip=0x002c4d; 	T(MOV(ax, offset(dseg,ades_0)));	// 4907 mov     ax, offset aDes_0 ; "des" ;~ 01A2:2C4D
cs=0x1a2;eip=0x002c50; 	X(PUSH(ax));	// 4908 push    ax ;~ 01A2:2C50
cs=0x1a2;eip=0x002c51; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 4909 push    [bp+var_A] ;~ 01A2:2C51
cs=0x1a2;eip=0x002c54; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 4910 push    [bp+var_C] ;~ 01A2:2C54
cs=0x1a2;eip=0x002c57; 	J(JMP(loc_12c66));	// 4911 jmp     short loc_12C66 ;~ 01A2:2C57
loc_12c5a:
	// 4576 
cs=0x1a2;eip=0x002c5a; 	T(MOV(ax, offset(dseg,arac)));	// 4916 mov     ax, offset aRac ; "rac" ;~ 01A2:2C5A
cs=0x1a2;eip=0x002c5d; 	X(PUSH(ax));	// 4917 push    ax ;~ 01A2:2C5D
cs=0x1a2;eip=0x002c5e; 	X(PUSH(word_455ce));	// 4918 push    word_455CE ;~ 01A2:2C5E
cs=0x1a2;eip=0x002c62; 	X(PUSH(miscptr));	// 4919 push    miscptr ;~ 01A2:2C62
loc_12c66:
	// 4577 
cs=0x1a2;eip=0x002c66; 	J(CALLF(locate_text_res,0));	// 4922 call    locate_text_res ;~ 01A2:2C66
cs=0x1a2;eip=0x002c6b; 	T(ADD(sp, 6));	// 4923 add     sp, 6 ;~ 01A2:2C6B
cs=0x1a2;eip=0x002c6e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_1a))), ax));	// 4924 mov     word ptr [bp+var_1A], ax ;~ 01A2:2C6E
cs=0x1a2;eip=0x002c71; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_1a+2))), dx));	// 4925 mov     word ptr [bp+var_1A+2], dx ;~ 01A2:2C71
cs=0x1a2;eip=0x002c74; 	X(PUSH(word_44d24));	// 4926 push    word_44D24 ;~ 01A2:2C74
cs=0x1a2;eip=0x002c78; 	X(PUSH(fontnptr));	// 4927 push    fontnptr ;~ 01A2:2C78
cs=0x1a2;eip=0x002c7c; 	J(CALLF(font_set_fontdef2,0));	// 4928 call    font_set_fontdef2 ;~ 01A2:2C7C
cs=0x1a2;eip=0x002c81; 	T(ADD(sp, 4));	// 4929 add     sp, 4 ;~ 01A2:2C81
cs=0x1a2;eip=0x002c84; 	X(PUSH(dialog_fnt_colour));	// 4930 push    dialog_fnt_colour ;~ 01A2:2C84
cs=0x1a2;eip=0x002c88; 	T(SUB(ax, ax));	// 4931 sub     ax, ax ;~ 01A2:2C88
cs=0x1a2;eip=0x002c8a; 	X(PUSH(ax));	// 4932 push    ax ;~ 01A2:2C8A
cs=0x1a2;eip=0x002c8b; 	J(CALLF(font_set_unk,0));	// 4933 call    font_set_unk ;~ 01A2:2C8B
cs=0x1a2;eip=0x002c90; 	T(ADD(sp, 4));	// 4934 add     sp, 4 ;~ 01A2:2C90
cs=0x1a2;eip=0x002c93; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 4935 mov     [bp+var_8], 0 ;~ 01A2:2C93
cs=0x1a2;eip=0x002c98; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 4936 mov     [bp+var_E], 0 ;~ 01A2:2C98
loc_12c9d:
	// 4578 
cs=0x1a2;eip=0x002c9d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1a))));	// 4939 les     bx, [bp+var_1A] ;~ 01A2:2C9D
cs=0x1a2;eip=0x002ca0; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_1a)))));	// 4940 inc     word ptr [bp+var_1A] ;~ 01A2:2CA0
cs=0x1a2;eip=0x002ca3; 	T(MOV(al, *(raddr(es,bx))));	// 4941 mov     al, es:[bx] ;~ 01A2:2CA3
cs=0x1a2;eip=0x002ca6; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 4942 mov     [bp+var_2], al ;~ 01A2:2CA6
cs=0x1a2;eip=0x002ca9; 	T(CMP(al, 0x5D));	// 4943 cmp     al, 5Dh ; ']' ;~ 01A2:2CA9
cs=0x1a2;eip=0x002cab; 	J(JNZ(loc_12ce0));	// 4944 jnz     short loc_12CE0 ;~ 01A2:2CAB
cs=0x1a2;eip=0x002cad; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 4945 cmp     [bp+var_8], 0 ;~ 01A2:2CAD
cs=0x1a2;eip=0x002cb1; 	J(JZ(loc_12cd2));	// 4946 jz      short loc_12CD2 ;~ 01A2:2CB1
cs=0x1a2;eip=0x002cb3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 4947 mov     bx, [bp+var_8] ;~ 01A2:2CB3
cs=0x1a2;eip=0x002cb6; 	X(MOV(*((&resid_byte1)+bx), 0));	// 4948 mov     resID_byte1[bx], 0 ;~ 01A2:2CB6
cs=0x1a2;eip=0x002cbb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 4949 mov     ax, [bp+var_E] ;~ 01A2:2CBB
cs=0x1a2;eip=0x002cbe; 	T(ADD(ax, 0x21));	// 4950 add     ax, 21h ; '!' ;~ 01A2:2CBE
cs=0x1a2;eip=0x002cc1; 	X(PUSH(ax));	// 4951 push    ax ;~ 01A2:2CC1
cs=0x1a2;eip=0x002cc2; 	T(MOV(ax, 0x0C));	// 4952 mov     ax, 0Ch ;~ 01A2:2CC2
cs=0x1a2;eip=0x002cc5; 	X(PUSH(ax));	// 4953 push    ax ;~ 01A2:2CC5
cs=0x1a2;eip=0x002cc6; 	T(MOV(ax, 0x0AC74));	// 4954 mov     ax, 0AC74h ;~ 01A2:2CC6
cs=0x1a2;eip=0x002cc9; 	X(PUSH(ax));	// 4955 push    ax ;~ 01A2:2CC9
cs=0x1a2;eip=0x002cca; 	J(CALLF(font_draw_text,0));	// 4956 call    font_draw_text ;~ 01A2:2CCA
cs=0x1a2;eip=0x002ccf; 	T(ADD(sp, 6));	// 4957 add     sp, 6 ;~ 01A2:2CCF
loc_12cd2:
	// 4579 
cs=0x1a2;eip=0x002cd2; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 4960 mov     [bp+var_8], 0 ;~ 01A2:2CD2
cs=0x1a2;eip=0x002cd7; 	T(MOV(ax, fontdef_unk_0e));	// 4961 mov     ax, fontdef_unk_0E ;~ 01A2:2CD7
cs=0x1a2;eip=0x002cda; 	X(ADD(*(dw*)(raddr(ss,bp+var_e)), ax));	// 4962 add     [bp+var_E], ax ;~ 01A2:2CDA
cs=0x1a2;eip=0x002cdd; 	J(JMP(loc_12ced));	// 4963 jmp     short loc_12CED ;~ 01A2:2CDD
loc_12ce0:
	// 4580 
cs=0x1a2;eip=0x002ce0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 4968 mov     bx, [bp+var_8] ;~ 01A2:2CE0
cs=0x1a2;eip=0x002ce3; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 4969 inc     [bp+var_8] ;~ 01A2:2CE3
cs=0x1a2;eip=0x002ce6; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 4970 mov     al, [bp+var_2] ;~ 01A2:2CE6
cs=0x1a2;eip=0x002ce9; 	X(MOV(*((&resid_byte1)+bx), al));	// 4971 mov     resID_byte1[bx], al ;~ 01A2:2CE9
loc_12ced:
	// 4581 
cs=0x1a2;eip=0x002ced; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1a))));	// 4974 les     bx, [bp+var_1A] ;~ 01A2:2CED
cs=0x1a2;eip=0x002cf0; 	T(CMP(*(raddr(es,bx)), 0));	// 4975 cmp     byte ptr es:[bx], 0 ;~ 01A2:2CF0
cs=0x1a2;eip=0x002cf4; 	J(JNZ(loc_12c9d));	// 4976 jnz     short loc_12C9D ;~ 01A2:2CF4
cs=0x1a2;eip=0x002cf6; 	J(CALLF(font_set_fontdef,0));	// 4977 call    font_set_fontdef ;~ 01A2:2CF6
loc_12cfb:
	// 4582 
cs=0x1a2;eip=0x002cfb; 	T(MOV(al, *(raddr(ss,bp+var_14))));	// 4980 mov     al, [bp+var_14] ;~ 01A2:2CFB
cs=0x1a2;eip=0x002cfe; 	T(CMP(*(raddr(ss,bp+var_1c)), al));	// 4981 cmp     [bp+var_1C], al ;~ 01A2:2CFE
cs=0x1a2;eip=0x002d01; 	J(JZ(loc_12d2c));	// 4982 jz      short loc_12D2C ;~ 01A2:2D01
cs=0x1a2;eip=0x002d03; 	T(MOV(al, *(raddr(ss,bp+var_1c))));	// 4983 mov     al, [bp+var_1C] ;~ 01A2:2D03
cs=0x1a2;eip=0x002d06; 	X(MOV(*(raddr(ss,bp+var_14)), al));	// 4984 mov     [bp+var_14], al ;~ 01A2:2D06
cs=0x1a2;eip=0x002d09; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 4985 mov     al, [bp+var_4] ;~ 01A2:2D09
cs=0x1a2;eip=0x002d0c; 	T(CBW);	// 4986 cbw ;~ 01A2:2D0C
cs=0x1a2;eip=0x002d0d; 	X(PUSH(ax));	// 4987 push    ax ;~ 01A2:2D0D
cs=0x1a2;eip=0x002d0e; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 4988 push    word ptr wndsprite+2 ;~ 01A2:2D0E
cs=0x1a2;eip=0x002d12; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 4989 push    word ptr wndsprite ;~ 01A2:2D12
cs=0x1a2;eip=0x002d16; 	J(CALLF(sprite_blit_to_video,0));	// 4990 call    sprite_blit_to_video ;~ 01A2:2D16
cs=0x1a2;eip=0x002d1b; 	T(ADD(sp, 6));	// 4991 add     sp, 6 ;~ 01A2:2D1B
cs=0x1a2;eip=0x002d1e; 	X(MOV(*(raddr(ss,bp+var_4)), 0x0FE));	// 4992 mov     [bp+var_4], 0FEh ; 'ş' ;~ 01A2:2D1E
cs=0x1a2;eip=0x002d22; 	J(CALLF(timer_get_delta_alt,0));	// 4993 call    timer_get_delta_alt ;~ 01A2:2D22
cs=0x1a2;eip=0x002d27; 	J(CALLF(sub_29772,0));	// 4994 call    sub_29772 ;~ 01A2:2D27
loc_12d2c:
	// 4583 
cs=0x1a2;eip=0x002d2c; 	X(PUSH(word_407d0));	// 4997 push    word_407D0 ;~ 01A2:2D2C
cs=0x1a2;eip=0x002d30; 	X(PUSH(word_407ce));	// 4998 push    word_407CE ;~ 01A2:2D30
cs=0x1a2;eip=0x002d34; 	T(MOV(ax, 0x462));	// 4999 mov     ax, 462h ;~ 01A2:2D34
cs=0x1a2;eip=0x002d37; 	X(PUSH(ax));	// 5000 push    ax ;~ 01A2:2D37
cs=0x1a2;eip=0x002d38; 	T(MOV(ax, 0x458));	// 5001 mov     ax, 458h ;~ 01A2:2D38
cs=0x1a2;eip=0x002d3b; 	X(PUSH(ax));	// 5002 push    ax ;~ 01A2:2D3B
cs=0x1a2;eip=0x002d3c; 	T(MOV(ax, 0x44E));	// 5003 mov     ax, 44Eh ;~ 01A2:2D3C
cs=0x1a2;eip=0x002d3f; 	X(PUSH(ax));	// 5004 push    ax ;~ 01A2:2D3F
cs=0x1a2;eip=0x002d40; 	T(MOV(ax, 0x444));	// 5005 mov     ax, 444h ;~ 01A2:2D40
cs=0x1a2;eip=0x002d43; 	X(PUSH(ax));	// 5006 push    ax ;~ 01A2:2D43
cs=0x1a2;eip=0x002d44; 	T(MOV(al, *(raddr(ss,bp+var_1c))));	// 5007 mov     al, [bp+var_1C] ;~ 01A2:2D44
cs=0x1a2;eip=0x002d47; 	T(CBW);	// 5008 cbw ;~ 01A2:2D47
cs=0x1a2;eip=0x002d48; 	X(PUSH(ax));	// 5009 push    ax ;~ 01A2:2D48
cs=0x1a2;eip=0x002d49; 	J(CALLF(mouse_timer_sprite_unk,0));	// 5010 call    mouse_timer_sprite_unk ;~ 01A2:2D49
cs=0x1a2;eip=0x002d4e; 	T(ADD(sp, 0x0E));	// 5011 add     sp, 0Eh ;~ 01A2:2D4E
cs=0x1a2;eip=0x002d51; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 5012 mov     [bp+var_10], ax ;~ 01A2:2D51
cs=0x1a2;eip=0x002d54; 	X(PUSH(ax));	// 5013 push    ax ;~ 01A2:2D54
cs=0x1a2;eip=0x002d55; 	J(CALLF(input_checking,0));	// 5014 call    input_checking ;~ 01A2:2D55
cs=0x1a2;eip=0x002d5a; 	T(ADD(sp, 2));	// 5015 add     sp, 2 ;~ 01A2:2D5A
cs=0x1a2;eip=0x002d5d; 	T(MOV(si, ax));	// 5016 mov     si, ax ;~ 01A2:2D5D
cs=0x1a2;eip=0x002d5f; 	T(MOV(ax, offset(dseg,opponentmenu_buttons_y2)));	// 5017 mov     ax, offset opponentmenu_buttons_y2 ;~ 01A2:2D5F
cs=0x1a2;eip=0x002d62; 	X(PUSH(ax));	// 5018 push    ax ;~ 01A2:2D62
cs=0x1a2;eip=0x002d63; 	T(MOV(ax, offset(dseg,opponentmenu_buttons_y1)));	// 5019 mov     ax, offset opponentmenu_buttons_y1 ;~ 01A2:2D63
cs=0x1a2;eip=0x002d66; 	X(PUSH(ax));	// 5020 push    ax ;~ 01A2:2D66
cs=0x1a2;eip=0x002d67; 	T(MOV(ax, offset(dseg,opponentmenu_buttons_x2)));	// 5021 mov     ax, offset opponentmenu_buttons_x2 ;~ 01A2:2D67
cs=0x1a2;eip=0x002d6a; 	X(PUSH(ax));	// 5022 push    ax ;~ 01A2:2D6A
cs=0x1a2;eip=0x002d6b; 	T(MOV(ax, offset(dseg,opponentmenu_buttons_x1)));	// 5023 mov     ax, offset opponentmenu_buttons_x1 ;~ 01A2:2D6B
cs=0x1a2;eip=0x002d6e; 	X(PUSH(ax));	// 5024 push    ax ;~ 01A2:2D6E
cs=0x1a2;eip=0x002d6f; 	T(MOV(ax, 5));	// 5025 mov     ax, 5 ;~ 01A2:2D6F
cs=0x1a2;eip=0x002d72; 	X(PUSH(ax));	// 5026 push    ax ;~ 01A2:2D72
cs=0x1a2;eip=0x002d73; 	J(CALLF(mouse_multi_hittest,0));	// 5027 call    mouse_multi_hittest ;~ 01A2:2D73
cs=0x1a2;eip=0x002d78; 	T(ADD(sp, 0x0A));	// 5028 add     sp, 0Ah ;~ 01A2:2D78
cs=0x1a2;eip=0x002d7b; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 5029 mov     [bp+var_16], al ;~ 01A2:2D7B
cs=0x1a2;eip=0x002d7e; 	T(CMP(al, 0x0FF));	// 5030 cmp     al, 0FFh ;~ 01A2:2D7E
cs=0x1a2;eip=0x002d80; 	J(JZ(loc_12d93));	// 5031 jz      short loc_12D93 ;~ 01A2:2D80
cs=0x1a2;eip=0x002d82; 	T(CMP(byte_449aa, 0));	// 5032 cmp     byte_449AA, 0 ;~ 01A2:2D82
cs=0x1a2;eip=0x002d87; 	J(JNZ(loc_12d8d));	// 5033 jnz     short loc_12D8D ;~ 01A2:2D87
cs=0x1a2;eip=0x002d89; 	T(CMP(al, 3));	// 5034 cmp     al, 3 ;~ 01A2:2D89
cs=0x1a2;eip=0x002d8b; 	J(JZ(loc_12d93));	// 5035 jz      short loc_12D93 ;~ 01A2:2D8B
loc_12d8d:
	// 4584 
cs=0x1a2;eip=0x002d8d; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 5038 mov     al, [bp+var_16] ;~ 01A2:2D8D
cs=0x1a2;eip=0x002d90; 	X(MOV(*(raddr(ss,bp+var_1c)), al));	// 5039 mov     [bp+var_1C], al ;~ 01A2:2D90
loc_12d93:
	// 4585 
cs=0x1a2;eip=0x002d93; 	T(OR(si, si));	// 5043 or      si, si ;~ 01A2:2D93
cs=0x1a2;eip=0x002d95; 	J(JNZ(loc_12d9a));	// 5044 jnz     short loc_12D9A ;~ 01A2:2D95
cs=0x1a2;eip=0x002d97; 	J(JMP(loc_129a8));	// 5045 jmp     loc_129A8 ;~ 01A2:2D97
loc_12d9a:
	// 4586 
cs=0x1a2;eip=0x002d9a; 	T(MOV(ax, si));	// 5049 mov     ax, si ;~ 01A2:2D9A
cs=0x1a2;eip=0x002d9c; 	T(CMP(ax, 0x0D));	// 5050 cmp     ax, 0Dh ;~ 01A2:2D9C
cs=0x1a2;eip=0x002d9f; 	J(JZ(loc_12dbe));	// 5051 jz      short loc_12DBE ;~ 01A2:2D9F
cs=0x1a2;eip=0x002da1; 	T(CMP(ax, 0x1B));	// 5052 cmp     ax, 1Bh ;~ 01A2:2DA1
cs=0x1a2;eip=0x002da4; 	J(JZ(loc_12dbe));	// 5053 jz      short loc_12DBE ;~ 01A2:2DA4
cs=0x1a2;eip=0x002da6; 	T(CMP(ax, 0x20));	// 5054 cmp     ax, 20h ; ' ' ;~ 01A2:2DA6
cs=0x1a2;eip=0x002da9; 	J(JZ(loc_12dbe));	// 5055 jz      short loc_12DBE ;~ 01A2:2DA9
cs=0x1a2;eip=0x002dab; 	T(CMP(ax, 0x4B00));	// 5056 cmp     ax, 4B00h ;~ 01A2:2DAB
cs=0x1a2;eip=0x002dae; 	J(JNZ(loc_12db3));	// 5057 jnz     short loc_12DB3 ;~ 01A2:2DAE
cs=0x1a2;eip=0x002db0; 	J(JMP(loc_12ef6));	// 5058 jmp     loc_12EF6 ;~ 01A2:2DB0
loc_12db3:
	// 4587 
cs=0x1a2;eip=0x002db3; 	T(CMP(ax, 0x4D00));	// 5062 cmp     ax, 4D00h ;~ 01A2:2DB3
cs=0x1a2;eip=0x002db6; 	J(JNZ(loc_12dbb));	// 5063 jnz     short loc_12DBB ;~ 01A2:2DB6
cs=0x1a2;eip=0x002db8; 	J(JMP(loc_12f20));	// 5064 jmp     loc_12F20 ;~ 01A2:2DB8
loc_12dbb:
	// 4588 
cs=0x1a2;eip=0x002dbb; 	J(JMP(loc_129a8));	// 5068 jmp     loc_129A8 ;~ 01A2:2DBB
loc_12dbe:
	// 4589 
cs=0x1a2;eip=0x002dbe; 	T(MOV(al, *(raddr(ss,bp+var_1c))));	// 5073 mov     al, [bp+var_1C] ;~ 01A2:2DBE
cs=0x1a2;eip=0x002dc1; 	T(CBW);	// 5074 cbw ;~ 01A2:2DC1
cs=0x1a2;eip=0x002dc2; 	T(OR(ax, ax));	// 5075 or      ax, ax ;~ 01A2:2DC2
cs=0x1a2;eip=0x002dc4; 	J(JZ(loc_12de0));	// 5076 jz      short loc_12DE0 ;~ 01A2:2DC4
cs=0x1a2;eip=0x002dc6; 	T(CMP(ax, 1));	// 5077 cmp     ax, 1 ;~ 01A2:2DC6
cs=0x1a2;eip=0x002dc9; 	J(JZ(loc_12df6));	// 5078 jz      short loc_12DF6 ;~ 01A2:2DC9
cs=0x1a2;eip=0x002dcb; 	T(CMP(ax, 2));	// 5079 cmp     ax, 2 ;~ 01A2:2DCB
cs=0x1a2;eip=0x002dce; 	J(JZ(loc_12e0c));	// 5080 jz      short loc_12E0C ;~ 01A2:2DCE
cs=0x1a2;eip=0x002dd0; 	T(CMP(ax, 3));	// 5081 cmp     ax, 3 ;~ 01A2:2DD0
cs=0x1a2;eip=0x002dd3; 	J(JZ(loc_12e14));	// 5082 jz      short loc_12E14 ;~ 01A2:2DD3
cs=0x1a2;eip=0x002dd5; 	T(CMP(ax, 4));	// 5083 cmp     ax, 4 ;~ 01A2:2DD5
cs=0x1a2;eip=0x002dd8; 	J(JNZ(loc_12ddd));	// 5084 jnz     short loc_12DDD ;~ 01A2:2DD8
cs=0x1a2;eip=0x002dda; 	J(JMP(loc_12e6a));	// 5085 jmp     loc_12E6A ;~ 01A2:2DDA
loc_12ddd:
	// 4590 
cs=0x1a2;eip=0x002ddd; 	J(JMP(loc_129a8));	// 5089 jmp     loc_129A8 ;~ 01A2:2DDD
loc_12de0:
	// 4591 
cs=0x1a2;eip=0x002de0; 	X(DEC(byte_449aa));	// 5093 dec     byte_449AA ;~ 01A2:2DE0
cs=0x1a2;eip=0x002de4; 	T(CMP(byte_449aa, 1));	// 5094 cmp     byte_449AA, 1 ;~ 01A2:2DE4
cs=0x1a2;eip=0x002de9; 	J(JL(loc_12dee));	// 5095 jl      short loc_12DEE ;~ 01A2:2DE9
cs=0x1a2;eip=0x002deb; 	J(JMP(loc_129a8));	// 5096 jmp     loc_129A8 ;~ 01A2:2DEB
loc_12dee:
	// 4592 
cs=0x1a2;eip=0x002dee; 	X(MOV(byte_449aa, 6));	// 5100 mov     byte_449AA, 6 ;~ 01A2:2DEE
cs=0x1a2;eip=0x002df3; 	J(JMP(loc_129a8));	// 5101 jmp     loc_129A8 ;~ 01A2:2DF3
loc_12df6:
	// 4593 
cs=0x1a2;eip=0x002df6; 	X(INC(byte_449aa));	// 5105 inc     byte_449AA ;~ 01A2:2DF6
cs=0x1a2;eip=0x002dfa; 	T(CMP(byte_449aa, 7));	// 5106 cmp     byte_449AA, 7 ;~ 01A2:2DFA
cs=0x1a2;eip=0x002dff; 	J(JZ(loc_12e04));	// 5107 jz      short loc_12E04 ;~ 01A2:2DFF
cs=0x1a2;eip=0x002e01; 	J(JMP(loc_129a8));	// 5108 jmp     loc_129A8 ;~ 01A2:2E01
loc_12e04:
	// 4594 
cs=0x1a2;eip=0x002e04; 	X(MOV(byte_449aa, 1));	// 5112 mov     byte_449AA, 1 ;~ 01A2:2E04
cs=0x1a2;eip=0x002e09; 	J(JMP(loc_129a8));	// 5113 jmp     loc_129A8 ;~ 01A2:2E09
loc_12e0c:
	// 4595 
cs=0x1a2;eip=0x002e0c; 	X(MOV(byte_449aa, 0));	// 5117 mov     byte_449AA, 0 ;~ 01A2:2E0C
cs=0x1a2;eip=0x002e11; 	J(JMP(loc_129a8));	// 5118 jmp     loc_129A8 ;~ 01A2:2E11
loc_12e14:
	// 4596 
cs=0x1a2;eip=0x002e14; 	T(CMP(byte_449aa, 0));	// 5122 cmp     byte_449AA, 0 ;~ 01A2:2E14
cs=0x1a2;eip=0x002e19; 	J(JNZ(loc_12e1e));	// 5123 jnz     short loc_12E1E ;~ 01A2:2E19
cs=0x1a2;eip=0x002e1b; 	J(JMP(loc_129a8));	// 5124 jmp     loc_129A8 ;~ 01A2:2E1B
loc_12e1e:
	// 4597 
cs=0x1a2;eip=0x002e1e; 	J(CALLF(check_input,0));	// 5128 call    check_input ;~ 01A2:2E1E
cs=0x1a2;eip=0x002e23; 	J(CALLF(mouse_draw_opaque_check,0));	// 5129 call    mouse_draw_opaque_check ;~ 01A2:2E23
cs=0x1a2;eip=0x002e28; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 5130 push    word ptr wndsprite+2 ;~ 01A2:2E28
cs=0x1a2;eip=0x002e2c; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 5131 push    word ptr wndsprite ;~ 01A2:2E2C
cs=0x1a2;eip=0x002e30; 	J(CALLF(sprite_free_wnd,0));	// 5132 call    sprite_free_wnd ;~ 01A2:2E30
cs=0x1a2;eip=0x002e35; 	T(ADD(sp, 4));	// 5133 add     sp, 4 ;~ 01A2:2E35
cs=0x1a2;eip=0x002e38; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 5134 push    [bp+var_A] ;~ 01A2:2E38
cs=0x1a2;eip=0x002e3b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 5135 push    [bp+var_C] ;~ 01A2:2E3B
cs=0x1a2;eip=0x002e3e; 	J(CALLF(unload_resource,0));	// 5136 call    unload_resource ;~ 01A2:2E3E
cs=0x1a2;eip=0x002e43; 	T(ADD(sp, 4));	// 5137 add     sp, 4 ;~ 01A2:2E43
cs=0x1a2;eip=0x002e46; 	J(CALLF(show_waiting,0));	// 5138 call    show_waiting ;~ 01A2:2E46
cs=0x1a2;eip=0x002e4b; 	T(MOV(al, byte_449aa));	// 5139 mov     al, byte_449AA ;~ 01A2:2E4B
cs=0x1a2;eip=0x002e4e; 	T(CBW);	// 5140 cbw ;~ 01A2:2E4E
cs=0x1a2;eip=0x002e4f; 	X(PUSH(ax));	// 5141 push    ax ;~ 01A2:2E4F
cs=0x1a2;eip=0x002e50; 	T(MOV(ax, offset(dseg,byte_449b0)));	// 5142 mov     ax, offset byte_449B0 ;~ 01A2:2E50
cs=0x1a2;eip=0x002e53; 	X(PUSH(ax));	// 5143 push    ax ;~ 01A2:2E53
cs=0x1a2;eip=0x002e54; 	T(MOV(ax, offset(dseg,byte_449af)));	// 5144 mov     ax, offset byte_449AF ;~ 01A2:2E54
cs=0x1a2;eip=0x002e57; 	X(PUSH(ax));	// 5145 push    ax ;~ 01A2:2E57
cs=0x1a2;eip=0x002e58; 	T(MOV(ax, offset(dseg,byte_449ab)));	// 5146 mov     ax, offset byte_449AB ;~ 01A2:2E58
cs=0x1a2;eip=0x002e5b; 	X(PUSH(ax));	// 5147 push    ax ;~ 01A2:2E5B
cs=0x1a2;eip=0x002e5c; 	X(PUSH(cs));	// 5148 push    cs ;~ 01A2:2E5C
cs=0x1a2;eip=0x002e5d; 	J(CALL(run_car_menu,0));	// 5149 call    near ptr run_car_menu ;~ 01A2:2E5D
cs=0x1a2;eip=0x002e60; 	T(ADD(sp, 8));	// 5150 add     sp, 8 ;~ 01A2:2E60
cs=0x1a2;eip=0x002e63; 	X(MOV(*(raddr(ss,bp+var_1e)), 0x0FF));	// 5151 mov     [bp+var_1E], 0FFh ;~ 01A2:2E63
cs=0x1a2;eip=0x002e67; 	J(JMP(loc_129a3));	// 5152 jmp     loc_129A3 ;~ 01A2:2E67
loc_12e6a:
	// 4598 
cs=0x1a2;eip=0x002e6a; 	T(CMP(byte_449aa, 0));	// 5156 cmp     byte_449AA, 0 ;~ 01A2:2E6A
cs=0x1a2;eip=0x002e6f; 	J(JZ(loc_12ea2));	// 5157 jz      short loc_12EA2 ;~ 01A2:2E6F
cs=0x1a2;eip=0x002e71; 	T(CMP(byte_449ab, 0x0FF));	// 5158 cmp     byte_449AB, 0FFh ;~ 01A2:2E71
cs=0x1a2;eip=0x002e76; 	J(JNZ(loc_12ea7));	// 5159 jnz     short loc_12EA7 ;~ 01A2:2E76
cs=0x1a2;eip=0x002e78; 	T(MOV(al, gameconfig));	// 5160 mov     al, gameconfig ;~ 01A2:2E78
cs=0x1a2;eip=0x002e7b; 	X(MOV(byte_449ab, al));	// 5161 mov     byte_449AB, al ;~ 01A2:2E7B
cs=0x1a2;eip=0x002e7e; 	T(MOV(al, byte_449a5));	// 5162 mov     al, byte_449A5 ;~ 01A2:2E7E
cs=0x1a2;eip=0x002e81; 	X(MOV(byte_449ac, al));	// 5163 mov     byte_449AC, al ;~ 01A2:2E81
cs=0x1a2;eip=0x002e84; 	T(MOV(al, byte_449a6));	// 5164 mov     al, byte_449A6 ;~ 01A2:2E84
cs=0x1a2;eip=0x002e87; 	X(MOV(byte_449ad, al));	// 5165 mov     byte_449AD, al ;~ 01A2:2E87
cs=0x1a2;eip=0x002e8a; 	T(MOV(al, byte_449a7));	// 5166 mov     al, byte_449A7 ;~ 01A2:2E8A
cs=0x1a2;eip=0x002e8d; 	X(MOV(byte_449ae, al));	// 5167 mov     byte_449AE, al ;~ 01A2:2E8D
cs=0x1a2;eip=0x002e90; 	T(MOV(al, byte_449a8));	// 5168 mov     al, byte_449A8 ;~ 01A2:2E90
cs=0x1a2;eip=0x002e93; 	T(AND(al, 1));	// 5169 and     al, 1 ;~ 01A2:2E93
cs=0x1a2;eip=0x002e95; 	T(XOR(al, 1));	// 5170 xor     al, 1 ;~ 01A2:2E95
cs=0x1a2;eip=0x002e97; 	X(MOV(byte_449af, al));	// 5171 mov     byte_449AF, al ;~ 01A2:2E97
cs=0x1a2;eip=0x002e9a; 	X(MOV(byte_449b0, 0));	// 5172 mov     byte_449B0, 0 ;~ 01A2:2E9A
cs=0x1a2;eip=0x002e9f; 	J(JMP(loc_12ea7));	// 5173 jmp     short loc_12EA7 ;~ 01A2:2E9F
loc_12ea2:
	// 4599 
cs=0x1a2;eip=0x002ea2; 	X(MOV(byte_449ab, 0x0FF));	// 5178 mov     byte_449AB, 0FFh ;~ 01A2:2EA2
loc_12ea7:
	// 4600 
cs=0x1a2;eip=0x002ea7; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 5182 push    word ptr wndsprite+2 ;~ 01A2:2EA7
cs=0x1a2;eip=0x002eab; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 5183 push    word ptr wndsprite ;~ 01A2:2EAB
cs=0x1a2;eip=0x002eaf; 	J(CALLF(sprite_free_wnd,0));	// 5184 call    sprite_free_wnd ;~ 01A2:2EAF
cs=0x1a2;eip=0x002eb4; 	T(ADD(sp, 4));	// 5185 add     sp, 4 ;~ 01A2:2EB4
cs=0x1a2;eip=0x002eb7; 	T(CMP(*(raddr(ss,bp+var_6)), 0));	// 5186 cmp     [bp+var_6], 0 ;~ 01A2:2EB7
cs=0x1a2;eip=0x002ebb; 	J(JZ(loc_12ecb));	// 5187 jz      short loc_12ECB ;~ 01A2:2EBB
cs=0x1a2;eip=0x002ebd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 5188 push    [bp+var_A] ;~ 01A2:2EBD
cs=0x1a2;eip=0x002ec0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 5189 push    [bp+var_C] ;~ 01A2:2EC0
cs=0x1a2;eip=0x002ec3; 	J(CALLF(unload_resource,0));	// 5190 call    unload_resource ;~ 01A2:2EC3
cs=0x1a2;eip=0x002ec8; 	T(ADD(sp, 4));	// 5191 add     sp, 4 ;~ 01A2:2EC8
loc_12ecb:
	// 4601 
cs=0x1a2;eip=0x002ecb; 	X(PUSH(word_44a02));	// 5194 push    word_44A02 ;~ 01A2:2ECB
cs=0x1a2;eip=0x002ecf; 	X(PUSH(opp_res));	// 5195 push    opp_res ;~ 01A2:2ECF
cs=0x1a2;eip=0x002ed3; 	J(CALLF(mmgr_free,0));	// 5196 call    mmgr_free ;~ 01A2:2ED3
cs=0x1a2;eip=0x002ed8; 	T(ADD(sp, 4));	// 5197 add     sp, 4 ;~ 01A2:2ED8
cs=0x1a2;eip=0x002edb; 	X(PUSH(word_455ce));	// 5198 push    word_455CE ;~ 01A2:2EDB
cs=0x1a2;eip=0x002edf; 	X(PUSH(miscptr));	// 5199 push    miscptr ;~ 01A2:2EDF
cs=0x1a2;eip=0x002ee3; 	J(CALLF(unload_resource,0));	// 5200 call    unload_resource ;~ 01A2:2EE3
cs=0x1a2;eip=0x002ee8; 	T(ADD(sp, 4));	// 5201 add     sp, 4 ;~ 01A2:2EE8
cs=0x1a2;eip=0x002eeb; 	J(CALLF(mouse_draw_opaque_check,0));	// 5202 call    mouse_draw_opaque_check ;~ 01A2:2EEB
cs=0x1a2;eip=0x002ef0; 	X(POP(si));	// 5203 pop     si ;~ 01A2:2EF0
cs=0x1a2;eip=0x002ef1; 	T(MOV(sp, bp));	// 5204 mov     sp, bp ;~ 01A2:2EF1
cs=0x1a2;eip=0x002ef3; 	X(POP(bp));	// 5205 pop     bp ;~ 01A2:2EF3
cs=0x1a2;eip=0x002ef4; 	J(RETF(0));	// 5206 retf ;~ 01A2:2EF4
loc_12ef6:
	// 4602 
cs=0x1a2;eip=0x002ef6; 	T(CMP(*(raddr(ss,bp+var_1c)), 0));	// 5211 cmp     [bp+var_1C], 0 ;~ 01A2:2EF6
cs=0x1a2;eip=0x002efa; 	J(JZ(loc_12f02));	// 5212 jz      short loc_12F02 ;~ 01A2:2EFA
cs=0x1a2;eip=0x002efc; 	X(DEC(*(raddr(ss,bp+var_1c))));	// 5213 dec     [bp+var_1C] ;~ 01A2:2EFC
cs=0x1a2;eip=0x002eff; 	J(JMP(loc_12f06));	// 5214 jmp     short loc_12F06 ;~ 01A2:2EFF
loc_12f02:
	// 4603 
cs=0x1a2;eip=0x002f02; 	X(MOV(*(raddr(ss,bp+var_1c)), 4));	// 5219 mov     [bp+var_1C], 4 ;~ 01A2:2F02
loc_12f06:
	// 4604 
cs=0x1a2;eip=0x002f06; 	T(CMP(byte_449aa, 0));	// 5222 cmp     byte_449AA, 0 ;~ 01A2:2F06
cs=0x1a2;eip=0x002f0b; 	J(JZ(loc_12f10));	// 5223 jz      short loc_12F10 ;~ 01A2:2F0B
cs=0x1a2;eip=0x002f0d; 	J(JMP(loc_129a8));	// 5224 jmp     loc_129A8 ;~ 01A2:2F0D
loc_12f10:
	// 4605 
cs=0x1a2;eip=0x002f10; 	T(CMP(*(raddr(ss,bp+var_1c)), 3));	// 5228 cmp     [bp+var_1C], 3 ;~ 01A2:2F10
cs=0x1a2;eip=0x002f14; 	J(JZ(loc_12f19));	// 5229 jz      short loc_12F19 ;~ 01A2:2F14
cs=0x1a2;eip=0x002f16; 	J(JMP(loc_129a8));	// 5230 jmp     loc_129A8 ;~ 01A2:2F16
loc_12f19:
	// 4606 
cs=0x1a2;eip=0x002f19; 	X(DEC(*(raddr(ss,bp+var_1c))));	// 5234 dec     [bp+var_1C] ;~ 01A2:2F19
cs=0x1a2;eip=0x002f1c; 	J(JMP(loc_129a8));	// 5235 jmp     loc_129A8 ;~ 01A2:2F1C
loc_12f20:
	// 4607 
cs=0x1a2;eip=0x002f20; 	T(CMP(*(raddr(ss,bp+var_1c)), 4));	// 5240 cmp     [bp+var_1C], 4 ;~ 01A2:2F20
cs=0x1a2;eip=0x002f24; 	J(JGE(loc_12f2c));	// 5241 jge     short loc_12F2C ;~ 01A2:2F24
cs=0x1a2;eip=0x002f26; 	X(INC(*(raddr(ss,bp+var_1c))));	// 5242 inc     [bp+var_1C] ;~ 01A2:2F26
cs=0x1a2;eip=0x002f29; 	J(JMP(loc_12f30));	// 5243 jmp     short loc_12F30 ;~ 01A2:2F29
loc_12f2c:
	// 4608 
cs=0x1a2;eip=0x002f2c; 	X(MOV(*(raddr(ss,bp+var_1c)), 0));	// 5248 mov     [bp+var_1C], 0 ;~ 01A2:2F2C
loc_12f30:
	// 4609 
cs=0x1a2;eip=0x002f30; 	T(CMP(byte_449aa, 0));	// 5251 cmp     byte_449AA, 0 ;~ 01A2:2F30
cs=0x1a2;eip=0x002f35; 	J(JZ(loc_12f3a));	// 5252 jz      short loc_12F3A ;~ 01A2:2F35
cs=0x1a2;eip=0x002f37; 	J(JMP(loc_129a8));	// 5253 jmp     loc_129A8 ;~ 01A2:2F37
loc_12f3a:
	// 4610 
cs=0x1a2;eip=0x002f3a; 	T(CMP(*(raddr(ss,bp+var_1c)), 3));	// 5257 cmp     [bp+var_1C], 3 ;~ 01A2:2F3A
cs=0x1a2;eip=0x002f3e; 	J(JZ(loc_12f43));	// 5258 jz      short loc_12F43 ;~ 01A2:2F3E
cs=0x1a2;eip=0x002f40; 	J(JMP(loc_129a8));	// 5259 jmp     loc_129A8 ;~ 01A2:2F40
loc_12f43:
	// 4611 
cs=0x1a2;eip=0x002f43; 	X(INC(*(raddr(ss,bp+var_1c))));	// 5263 inc     [bp+var_1C] ;~ 01A2:2F43
cs=0x1a2;eip=0x002f46; 	J(JMP(loc_129a8));	// 5264 jmp     loc_129A8 ;~ 01A2:2F46

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
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
        case m2c::krun_opponent_menu: 	goto run_opponent_menu;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool run_option_menu(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    run_option_menu:
    _begin:
#undef var_6
#define var_6 -6
	// 5276 var_6           = byte ptr -6 ;~ 01A2:2F4A
#undef var_4
#define var_4 -4
	// 5277 var_4           = byte ptr -4 ;~ 01A2:2F4A
#undef var_2
#define var_2 -2
	// 5278 var_2           = byte ptr -2 ;~ 01A2:2F4A
cs=0x1a2;eip=0x002f4a; 	X(PUSH(bp));	// 5280 push    bp ;~ 01A2:2F4A
cs=0x1a2;eip=0x002f4b; 	T(MOV(bp, sp));	// 5281 mov     bp, sp ;~ 01A2:2F4B
cs=0x1a2;eip=0x002f4d; 	T(SUB(sp, 6));	// 5282 sub     sp, 6 ;~ 01A2:2F4D
cs=0x1a2;eip=0x002f50; 	T(MOV(ax, offset(dseg,amisc_1)));	// 5283 mov     ax, offset aMisc_1 ; "misc" ;~ 01A2:2F50
cs=0x1a2;eip=0x002f53; 	X(PUSH(ax));	// 5284 push    ax ;~ 01A2:2F53
cs=0x1a2;eip=0x002f54; 	J(CALLF(file_load_resfile,0));	// 5285 call    file_load_resfile ;~ 01A2:2F54
cs=0x1a2;eip=0x002f59; 	T(ADD(sp, 2));	// 5286 add     sp, 2 ;~ 01A2:2F59
cs=0x1a2;eip=0x002f5c; 	X(MOV(miscptr, ax));	// 5287 mov     miscptr, ax ;~ 01A2:2F5C
cs=0x1a2;eip=0x002f5f; 	X(MOV(word_455ce, dx));	// 5288 mov     word_455CE, dx ;~ 01A2:2F5F
cs=0x1a2;eip=0x002f63; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 5289 call    sprite_copy_2_to_1_2 ;~ 01A2:2F63
cs=0x1a2;eip=0x002f68; 	X(PUSH(word_407fa));	// 5290 push    word_407FA ;~ 01A2:2F68
cs=0x1a2;eip=0x002f6c; 	J(CALLF(sprite_clear_1_color,0));	// 5291 call    sprite_clear_1_color ;~ 01A2:2F6C
cs=0x1a2;eip=0x002f71; 	T(ADD(sp, 2));	// 5292 add     sp, 2 ;~ 01A2:2F71
cs=0x1a2;eip=0x002f74; 	T(MOV(ax, offset(dseg,agstu)));	// 5293 mov     ax, offset aGstu ; "gstu" ;~ 01A2:2F74
cs=0x1a2;eip=0x002f77; 	X(PUSH(ax));	// 5294 push    ax ;~ 01A2:2F77
cs=0x1a2;eip=0x002f78; 	X(PUSH(word_455ce));	// 5295 push    word_455CE ;~ 01A2:2F78
cs=0x1a2;eip=0x002f7c; 	X(PUSH(miscptr));	// 5296 push    miscptr ;~ 01A2:2F7C
cs=0x1a2;eip=0x002f80; 	J(CALLF(locate_shape_alt,0));	// 5297 call    locate_shape_alt ;~ 01A2:2F80
cs=0x1a2;eip=0x002f85; 	T(ADD(sp, 6));	// 5298 add     sp, 6 ;~ 01A2:2F85
cs=0x1a2;eip=0x002f88; 	X(PUSH(dx));	// 5299 push    dx ;~ 01A2:2F88
cs=0x1a2;eip=0x002f89; 	X(PUSH(ax));	// 5300 push    ax ;~ 01A2:2F89
cs=0x1a2;eip=0x002f8a; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5301 mov     ax, offset resID_byte1 ;~ 01A2:2F8A
cs=0x1a2;eip=0x002f8d; 	X(PUSH(ax));	// 5302 push    ax ;~ 01A2:2F8D
cs=0x1a2;eip=0x002f8e; 	J(CALLF(copy_string,0));	// 5303 call    copy_string ;~ 01A2:2F8E
cs=0x1a2;eip=0x002f93; 	T(ADD(sp, 6));	// 5304 add     sp, 6 ;~ 01A2:2F93
cs=0x1a2;eip=0x002f96; 	T(SUB(ax, ax));	// 5305 sub     ax, ax ;~ 01A2:2F96
cs=0x1a2;eip=0x002f98; 	X(PUSH(ax));	// 5306 push    ax ;~ 01A2:2F98
cs=0x1a2;eip=0x002f99; 	X(PUSH(dialog_fnt_colour));	// 5307 push    dialog_fnt_colour ;~ 01A2:2F99
cs=0x1a2;eip=0x002f9d; 	T(MOV(ax, 6));	// 5308 mov     ax, 6 ;~ 01A2:2F9D
cs=0x1a2;eip=0x002fa0; 	X(PUSH(ax));	// 5309 push    ax ;~ 01A2:2FA0
cs=0x1a2;eip=0x002fa1; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5310 mov     ax, offset resID_byte1 ;~ 01A2:2FA1
cs=0x1a2;eip=0x002fa4; 	X(PUSH(ax));	// 5311 push    ax ;~ 01A2:2FA4
cs=0x1a2;eip=0x002fa5; 	J(CALLF(font_op2_alt,0));	// 5312 call    font_op2_alt ;~ 01A2:2FA5
cs=0x1a2;eip=0x002faa; 	T(ADD(sp, 2));	// 5313 add     sp, 2 ;~ 01A2:2FAA
cs=0x1a2;eip=0x002fad; 	X(PUSH(ax));	// 5314 push    ax ;~ 01A2:2FAD
cs=0x1a2;eip=0x002fae; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5315 mov     ax, offset resID_byte1 ;~ 01A2:2FAE
cs=0x1a2;eip=0x002fb1; 	X(PUSH(ax));	// 5316 push    ax ;~ 01A2:2FB1
cs=0x1a2;eip=0x002fb2; 	J(CALLF(intro_draw_text,0));	// 5317 call    intro_draw_text ;~ 01A2:2FB2
cs=0x1a2;eip=0x002fb7; 	T(ADD(sp, 0x0A));	// 5318 add     sp, 0Ah ;~ 01A2:2FB7
cs=0x1a2;eip=0x002fba; 	T(MOV(ax, offset(dseg,agver)));	// 5319 mov     ax, offset aGver ; "gver" ;~ 01A2:2FBA
cs=0x1a2;eip=0x002fbd; 	X(PUSH(ax));	// 5320 push    ax ;~ 01A2:2FBD
cs=0x1a2;eip=0x002fbe; 	X(PUSH(word_455ce));	// 5321 push    word_455CE ;~ 01A2:2FBE
cs=0x1a2;eip=0x002fc2; 	X(PUSH(miscptr));	// 5322 push    miscptr ;~ 01A2:2FC2
cs=0x1a2;eip=0x002fc6; 	J(CALLF(locate_shape_alt,0));	// 5323 call    locate_shape_alt ;~ 01A2:2FC6
cs=0x1a2;eip=0x002fcb; 	T(ADD(sp, 6));	// 5324 add     sp, 6 ;~ 01A2:2FCB
cs=0x1a2;eip=0x002fce; 	X(PUSH(dx));	// 5325 push    dx ;~ 01A2:2FCE
cs=0x1a2;eip=0x002fcf; 	X(PUSH(ax));	// 5326 push    ax ;~ 01A2:2FCF
cs=0x1a2;eip=0x002fd0; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5327 mov     ax, offset resID_byte1 ;~ 01A2:2FD0
cs=0x1a2;eip=0x002fd3; 	X(PUSH(ax));	// 5328 push    ax ;~ 01A2:2FD3
cs=0x1a2;eip=0x002fd4; 	J(CALLF(copy_string,0));	// 5329 call    copy_string ;~ 01A2:2FD4
cs=0x1a2;eip=0x002fd9; 	T(ADD(sp, 6));	// 5330 add     sp, 6 ;~ 01A2:2FD9
cs=0x1a2;eip=0x002fdc; 	T(SUB(ax, ax));	// 5331 sub     ax, ax ;~ 01A2:2FDC
cs=0x1a2;eip=0x002fde; 	X(PUSH(ax));	// 5332 push    ax ;~ 01A2:2FDE
cs=0x1a2;eip=0x002fdf; 	X(PUSH(dialog_fnt_colour));	// 5333 push    dialog_fnt_colour ;~ 01A2:2FDF
cs=0x1a2;eip=0x002fe3; 	T(MOV(ax, 0x10));	// 5334 mov     ax, 10h ;~ 01A2:2FE3
cs=0x1a2;eip=0x002fe6; 	X(PUSH(ax));	// 5335 push    ax ;~ 01A2:2FE6
cs=0x1a2;eip=0x002fe7; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5336 mov     ax, offset resID_byte1 ;~ 01A2:2FE7
cs=0x1a2;eip=0x002fea; 	X(PUSH(ax));	// 5337 push    ax ;~ 01A2:2FEA
cs=0x1a2;eip=0x002feb; 	J(CALLF(font_op2_alt,0));	// 5338 call    font_op2_alt ;~ 01A2:2FEB
cs=0x1a2;eip=0x002ff0; 	T(ADD(sp, 2));	// 5339 add     sp, 2 ;~ 01A2:2FF0
cs=0x1a2;eip=0x002ff3; 	X(PUSH(ax));	// 5340 push    ax ;~ 01A2:2FF3
cs=0x1a2;eip=0x002ff4; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5341 mov     ax, offset resID_byte1 ;~ 01A2:2FF4
cs=0x1a2;eip=0x002ff7; 	X(PUSH(ax));	// 5342 push    ax ;~ 01A2:2FF7
cs=0x1a2;eip=0x002ff8; 	J(CALLF(intro_draw_text,0));	// 5343 call    intro_draw_text ;~ 01A2:2FF8
cs=0x1a2;eip=0x002ffd; 	T(ADD(sp, 0x0A));	// 5344 add     sp, 0Ah ;~ 01A2:2FFD
cs=0x1a2;eip=0x003000; 	X(MOV(*(raddr(ss,bp+var_4)), 1));	// 5345 mov     [bp+var_4], 1 ;~ 01A2:3000
loc_13004:
	// 4612 
cs=0x1a2;eip=0x003004; 	T(SUB(ax, ax));	// 5348 sub     ax, ax ;~ 01A2:3004
cs=0x1a2;eip=0x003006; 	X(PUSH(ax));	// 5349 push    ax ;~ 01A2:3006
cs=0x1a2;eip=0x003007; 	X(PUSH(ax));	// 5350 push    ax ;~ 01A2:3007
cs=0x1a2;eip=0x003008; 	X(PUSH(dialogarg2));	// 5351 push    dialogarg2 ;~ 01A2:3008
cs=0x1a2;eip=0x00300c; 	T(MOV(ax, 0x0FFFF));	// 5352 mov     ax, 0FFFFh ;~ 01A2:300C
cs=0x1a2;eip=0x00300f; 	X(PUSH(ax));	// 5353 push    ax ;~ 01A2:300F
cs=0x1a2;eip=0x003010; 	X(PUSH(ax));	// 5354 push    ax ;~ 01A2:3010
cs=0x1a2;eip=0x003011; 	T(MOV(ax, offset(dseg,amop)));	// 5355 mov     ax, offset aMop ; "mop" ;~ 01A2:3011
cs=0x1a2;eip=0x003014; 	X(PUSH(ax));	// 5356 push    ax ;~ 01A2:3014
cs=0x1a2;eip=0x003015; 	X(PUSH(word_455ce));	// 5357 push    word_455CE ;~ 01A2:3015
cs=0x1a2;eip=0x003019; 	X(PUSH(miscptr));	// 5358 push    miscptr ;~ 01A2:3019
cs=0x1a2;eip=0x00301d; 	J(CALLF(locate_text_res,0));	// 5359 call    locate_text_res ;~ 01A2:301D
cs=0x1a2;eip=0x003022; 	T(ADD(sp, 6));	// 5360 add     sp, 6 ;~ 01A2:3022
cs=0x1a2;eip=0x003025; 	X(PUSH(dx));	// 5361 push    dx ;~ 01A2:3025
cs=0x1a2;eip=0x003026; 	X(PUSH(ax));	// 5362 push    ax ;~ 01A2:3026
cs=0x1a2;eip=0x003027; 	T(MOV(ax, 1));	// 5363 mov     ax, 1 ;~ 01A2:3027
cs=0x1a2;eip=0x00302a; 	X(PUSH(ax));	// 5364 push    ax ;~ 01A2:302A
cs=0x1a2;eip=0x00302b; 	T(MOV(ax, 2));	// 5365 mov     ax, 2 ;~ 01A2:302B
cs=0x1a2;eip=0x00302e; 	X(PUSH(ax));	// 5366 push    ax ;~ 01A2:302E
cs=0x1a2;eip=0x00302f; 	J(CALLF(show_dialog,0));	// 5367 call    show_dialog ;~ 01A2:302F
cs=0x1a2;eip=0x003034; 	T(ADD(sp, 0x12));	// 5368 add     sp, 12h ;~ 01A2:3034
cs=0x1a2;eip=0x003037; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 5369 mov     [bp+var_2], al ;~ 01A2:3037
cs=0x1a2;eip=0x00303a; 	T(CBW);	// 5370 cbw ;~ 01A2:303A
cs=0x1a2;eip=0x00303b; 	T(SUB(ax, 0x0FFFF));	// 5371 sub     ax, 0FFFFh      ; switch 8 cases ;~ 01A2:303B
cs=0x1a2;eip=0x00303e; 	T(CMP(ax, 7));	// 5372 cmp     ax, 7 ;~ 01A2:303E
cs=0x1a2;eip=0x003041; 	J(JBE(loc_13046));	// 5373 jbe     short loc_13046 ;~ 01A2:3041
cs=0x1a2;eip=0x003043; 	J(JMP(def_13049));	// 5374 jmp     def_13049       ; jumptable 00013049 default case ;~ 01A2:3043
loc_13046:
	// 4613 
cs=0x1a2;eip=0x003046; 	T(ADD(ax, ax));	// 5378 add     ax, ax ;~ 01A2:3046
cs=0x1a2;eip=0x003048; 	T(XCHG(ax, bx));	// 5379 xchg    ax, bx ;~ 01A2:3048
	cs=seg_offset(seg000);
cs=0x1a2;eip=0x003049; __disp=*(dw*)(((db*)&jpt_13049)+bx);
	J(return __dispatch_call(__disp, _state););	// 5380 jmp     cs:jpt_13049[bx] ; switch jump ;~ 01A2:3049
loc_1304e:
	// 4614 
cs=0x1a2;eip=0x00304e; 	T(CMP(byte_3b8f2, 0));	// 5385 cmp     byte_3B8F2, 0   ; jumptable 00013049 case 0 ;~ 01A2:304E
cs=0x1a2;eip=0x003053; 	J(JZ(loc_1305c));	// 5386 jz      short loc_1305C ;~ 01A2:3053
cs=0x1a2;eip=0x003055; 	X(MOV(*(raddr(ss,bp+var_6)), 2));	// 5387 mov     [bp+var_6], 2 ;~ 01A2:3055
cs=0x1a2;eip=0x003059; 	J(JMP(loc_1306e));	// 5388 jmp     short loc_1306E ;~ 01A2:3059
loc_1305c:
	// 4615 
cs=0x1a2;eip=0x00305c; 	T(CMP(byte_3fe00, 0));	// 5393 cmp     byte_3FE00, 0 ;~ 01A2:305C
cs=0x1a2;eip=0x003061; 	J(JZ(loc_1306a));	// 5394 jz      short loc_1306A ;~ 01A2:3061
cs=0x1a2;eip=0x003063; 	X(MOV(*(raddr(ss,bp+var_6)), 1));	// 5395 mov     [bp+var_6], 1 ;~ 01A2:3063
cs=0x1a2;eip=0x003067; 	J(JMP(loc_1306e));	// 5396 jmp     short loc_1306E ;~ 01A2:3067
loc_1306a:
	// 4616 
cs=0x1a2;eip=0x00306a; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 5401 mov     [bp+var_6], 0 ;~ 01A2:306A
loc_1306e:
	// 4617 
cs=0x1a2;eip=0x00306e; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 5405 mov     al, [bp+var_6] ;~ 01A2:306E
cs=0x1a2;eip=0x003071; 	T(CBW);	// 5406 cbw ;~ 01A2:3071
cs=0x1a2;eip=0x003072; 	X(PUSH(ax));	// 5407 push    ax ;~ 01A2:3072
cs=0x1a2;eip=0x003073; 	T(SUB(ax, ax));	// 5408 sub     ax, ax ;~ 01A2:3073
cs=0x1a2;eip=0x003075; 	X(PUSH(ax));	// 5409 push    ax ;~ 01A2:3075
cs=0x1a2;eip=0x003076; 	X(PUSH(performgraphcolor));	// 5410 push    performGraphColor ;~ 01A2:3076
cs=0x1a2;eip=0x00307a; 	T(MOV(ax, 0x0FFFF));	// 5411 mov     ax, 0FFFFh ;~ 01A2:307A
cs=0x1a2;eip=0x00307d; 	X(PUSH(ax));	// 5412 push    ax ;~ 01A2:307D
cs=0x1a2;eip=0x00307e; 	X(PUSH(ax));	// 5413 push    ax ;~ 01A2:307E
cs=0x1a2;eip=0x00307f; 	T(MOV(ax, offset(dseg,amid)));	// 5414 mov     ax, offset aMid ; "mid" ;~ 01A2:307F
cs=0x1a2;eip=0x003082; 	X(PUSH(ax));	// 5415 push    ax ;~ 01A2:3082
cs=0x1a2;eip=0x003083; 	X(PUSH(word_455ce));	// 5416 push    word_455CE ;~ 01A2:3083
cs=0x1a2;eip=0x003087; 	X(PUSH(miscptr));	// 5417 push    miscptr ;~ 01A2:3087
cs=0x1a2;eip=0x00308b; 	J(CALLF(locate_text_res,0));	// 5418 call    locate_text_res ;~ 01A2:308B
cs=0x1a2;eip=0x003090; 	T(ADD(sp, 6));	// 5419 add     sp, 6 ;~ 01A2:3090
cs=0x1a2;eip=0x003093; 	X(PUSH(dx));	// 5420 push    dx ;~ 01A2:3093
cs=0x1a2;eip=0x003094; 	X(PUSH(ax));	// 5421 push    ax ;~ 01A2:3094
cs=0x1a2;eip=0x003095; 	T(MOV(ax, 1));	// 5422 mov     ax, 1 ;~ 01A2:3095
cs=0x1a2;eip=0x003098; 	X(PUSH(ax));	// 5423 push    ax ;~ 01A2:3098
cs=0x1a2;eip=0x003099; 	T(MOV(ax, 2));	// 5424 mov     ax, 2 ;~ 01A2:3099
cs=0x1a2;eip=0x00309c; 	X(PUSH(ax));	// 5425 push    ax ;~ 01A2:309C
cs=0x1a2;eip=0x00309d; 	J(CALLF(show_dialog,0));	// 5426 call    show_dialog ;~ 01A2:309D
cs=0x1a2;eip=0x0030a2; 	T(ADD(sp, 0x12));	// 5427 add     sp, 12h ;~ 01A2:30A2
cs=0x1a2;eip=0x0030a5; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 5428 mov     [bp+var_2], al ;~ 01A2:30A5
cs=0x1a2;eip=0x0030a8; 	T(CBW);	// 5429 cbw ;~ 01A2:30A8
cs=0x1a2;eip=0x0030a9; 	T(OR(ax, ax));	// 5430 or      ax, ax ;~ 01A2:30A9
cs=0x1a2;eip=0x0030ab; 	J(JZ(loc_130ba));	// 5431 jz      short loc_130BA ;~ 01A2:30AB
cs=0x1a2;eip=0x0030ad; 	T(CMP(ax, 1));	// 5432 cmp     ax, 1 ;~ 01A2:30AD
cs=0x1a2;eip=0x0030b0; 	J(JZ(loc_130c2));	// 5433 jz      short loc_130C2 ;~ 01A2:30B0
cs=0x1a2;eip=0x0030b2; 	T(CMP(ax, 2));	// 5434 cmp     ax, 2 ;~ 01A2:30B2
cs=0x1a2;eip=0x0030b5; 	J(JZ(loc_130ca));	// 5435 jz      short loc_130CA ;~ 01A2:30B5
cs=0x1a2;eip=0x0030b7; 	J(JMP(def_13049));	// 5436 jmp     def_13049       ; jumptable 00013049 default case ;~ 01A2:30B7
loc_130ba:
	// 4618 
cs=0x1a2;eip=0x0030ba; 	J(CALLF(do_key_restext,0));	// 5440 call    do_key_restext ;~ 01A2:30BA
cs=0x1a2;eip=0x0030bf; 	J(JMP(def_13049));	// 5441 jmp     def_13049       ; jumptable 00013049 default case ;~ 01A2:30BF
loc_130c2:
	// 4619 
cs=0x1a2;eip=0x0030c2; 	J(CALLF(do_joy_restext,0));	// 5445 call    do_joy_restext ;~ 01A2:30C2
cs=0x1a2;eip=0x0030c7; 	J(JMP(def_13049));	// 5446 jmp     def_13049       ; jumptable 00013049 default case ;~ 01A2:30C7
loc_130ca:
	// 4620 
cs=0x1a2;eip=0x0030ca; 	J(CALLF(do_mou_restext,0));	// 5450 call    do_mou_restext ;~ 01A2:30CA
cs=0x1a2;eip=0x0030cf; 	J(JMP(def_13049));	// 5451 jmp     def_13049       ; jumptable 00013049 default case ;~ 01A2:30CF
loc_130d2:
	// 4621 
cs=0x1a2;eip=0x0030d2; 	J(CALLF(do_mof_restext,0));	// 5456 call    do_mof_restext  ; jumptable 00013049 case 1 ;~ 01A2:30D2
cs=0x1a2;eip=0x0030d7; 	J(JMP(def_13049));	// 5457 jmp     def_13049       ; jumptable 00013049 default case ;~ 01A2:30D7
loc_130da:
	// 4622 
cs=0x1a2;eip=0x0030da; 	J(CALLF(do_sonsof_restext,0));	// 5462 call    do_sonsof_restext ; jumptable 00013049 case 2 ;~ 01A2:30DA
cs=0x1a2;eip=0x0030df; 	J(JMP(def_13049));	// 5463 jmp     short def_13049 ; jumptable 00013049 default case ;~ 01A2:30DF
loc_130e2:
	// 4623 
cs=0x1a2;eip=0x0030e2; 	T(MOV(ax, offset(dseg,arep_0)));	// 5469 mov     ax, offset aRep_0 ; jumptable 00013049 case 3 ;~ 01A2:30E2
cs=0x1a2;eip=0x0030e5; 	X(PUSH(ax));	// 5470 push    ax ;~ 01A2:30E5
cs=0x1a2;eip=0x0030e6; 	X(PUSH(word_44cee));	// 5471 push    word_44CEE ;~ 01A2:30E6
cs=0x1a2;eip=0x0030ea; 	X(PUSH(mainresptr));	// 5472 push    mainresptr ;~ 01A2:30EA
cs=0x1a2;eip=0x0030ee; 	J(CALLF(locate_text_res,0));	// 5473 call    locate_text_res ;~ 01A2:30EE
cs=0x1a2;eip=0x0030f3; 	T(ADD(sp, 6));	// 5474 add     sp, 6 ;~ 01A2:30F3
cs=0x1a2;eip=0x0030f6; 	X(PUSH(dx));	// 5475 push    dx              ; int ;~ 01A2:30F6
cs=0x1a2;eip=0x0030f7; 	X(PUSH(ax));	// 5476 push    ax              ; int ;~ 01A2:30F7
cs=0x1a2;eip=0x0030f8; 	T(MOV(ax, offset(dseg,a_rpl_0)));	// 5477 mov     ax, offset a_rpl_0 ; ".rpl" ;~ 01A2:30F8
cs=0x1a2;eip=0x0030fb; 	X(PUSH(ax));	// 5478 push    ax              ; int ;~ 01A2:30FB
cs=0x1a2;eip=0x0030fc; 	T(MOV(ax, offset(dseg,adefault_1)));	// 5479 mov     ax, offset aDefault_1 ; "DEFAULT" ;~ 01A2:30FC
cs=0x1a2;eip=0x0030ff; 	X(PUSH(ax));	// 5480 push    ax ;~ 01A2:30FF
cs=0x1a2;eip=0x003100; 	T(MOV(ax, offset(dseg,byte_3b85e)));	// 5481 mov     ax, offset byte_3B85E ;~ 01A2:3100
cs=0x1a2;eip=0x003103; 	X(PUSH(ax));	// 5482 push    ax              ; char * ;~ 01A2:3103
cs=0x1a2;eip=0x003104; 	J(CALLF(do_fileselect_dialog,0));	// 5483 call    do_fileselect_dialog ;~ 01A2:3104
cs=0x1a2;eip=0x003109; 	T(ADD(sp, 0x0A));	// 5484 add     sp, 0Ah ;~ 01A2:3109
cs=0x1a2;eip=0x00310c; 	X(MOV(*(raddr(ss,bp+var_6)), al));	// 5485 mov     [bp+var_6], al ;~ 01A2:310C
cs=0x1a2;eip=0x00310f; 	T(OR(al, al));	// 5486 or      al, al ;~ 01A2:310F
cs=0x1a2;eip=0x003111; 	J(JZ(def_13049));	// 5487 jz      short def_13049 ; jumptable 00013049 default case ;~ 01A2:3111
cs=0x1a2;eip=0x003113; 	X(MOV(waitflag, 0x96));	// 5488 mov     waitflag, 96h ; '–' ;~ 01A2:3113
cs=0x1a2;eip=0x003119; 	J(CALLF(show_waiting,0));	// 5489 call    show_waiting ;~ 01A2:3119
cs=0x1a2;eip=0x00311e; 	T(MOV(ax, offset(dseg,adefault_1)));	// 5490 mov     ax, offset aDefault_1 ; "DEFAULT" ;~ 01A2:311E
cs=0x1a2;eip=0x003121; 	X(PUSH(ax));	// 5491 push    ax ;~ 01A2:3121
cs=0x1a2;eip=0x003122; 	T(MOV(ax, offset(dseg,byte_3b85e)));	// 5492 mov     ax, offset byte_3B85E ;~ 01A2:3122
cs=0x1a2;eip=0x003125; 	X(PUSH(ax));	// 5493 push    ax              ; char * ;~ 01A2:3125
cs=0x1a2;eip=0x003126; 	J(CALLF(file_load_replay,0));	// 5494 call    file_load_replay ;~ 01A2:3126
cs=0x1a2;eip=0x00312b; 	T(ADD(sp, 4));	// 5495 add     sp, 4 ;~ 01A2:312B
cs=0x1a2;eip=0x00312e; 	X(MOV(*(raddr(ss,bp+var_4)), 1));	// 5496 mov     [bp+var_4], 1 ;~ 01A2:312E
cs=0x1a2;eip=0x003132; 	J(JMP(loc_13163));	// 5497 jmp     short loc_13163 ;~ 01A2:3132
loc_13134:
	// 4624 
cs=0x1a2;eip=0x003134; 	J(CALLF(do_mrl_textres,0));	// 5502 call    do_mrl_textres  ; jumptable 00013049 case 4 ;~ 01A2:3134
cs=0x1a2;eip=0x003139; 	J(JMP(def_13049));	// 5503 jmp     short def_13049 ; jumptable 00013049 default case ;~ 01A2:3139
loc_1313c:
	// 4625 
cs=0x1a2;eip=0x00313c; 	J(CALLF(do_dos_restext,0));	// 5509 call    do_dos_restext  ; jumptable 00013049 case 5 ;~ 01A2:313C
cs=0x1a2;eip=0x003141; 	J(JMP(def_13049));	// 5510 jmp     short def_13049 ; jumptable 00013049 default case ;~ 01A2:3141
loc_13144:
	// 4626 
cs=0x1a2;eip=0x003144; 	X(MOV(*(raddr(ss,bp+var_4)), 0));	// 5516 mov     [bp+var_4], 0   ; jumptable 00013049 cases -1,6 ;~ 01A2:3144
cs=0x1a2;eip=0x003148; 	J(JMP(def_13049));	// 5517 jmp     short def_13049 ; jumptable 00013049 default case ;~ 01A2:3148
def_13049:
	// 4627 
cs=0x1a2;eip=0x00315a; 	T(CMP(*(raddr(ss,bp+var_4)), 0));	// 5531 cmp     [bp+var_4], 0   ; jumptable 00013049 default case ;~ 01A2:315A
cs=0x1a2;eip=0x00315e; 	J(JZ(loc_13163));	// 5532 jz      short loc_13163 ;~ 01A2:315E
cs=0x1a2;eip=0x003160; 	J(JMP(loc_13004));	// 5533 jmp     loc_13004 ;~ 01A2:3160
loc_13163:
	// 4628 
cs=0x1a2;eip=0x003163; 	X(PUSH(word_455ce));	// 5538 push    word_455CE ;~ 01A2:3163
cs=0x1a2;eip=0x003167; 	X(PUSH(miscptr));	// 5539 push    miscptr ;~ 01A2:3167
cs=0x1a2;eip=0x00316b; 	J(CALLF(unload_resource,0));	// 5540 call    unload_resource ;~ 01A2:316B
cs=0x1a2;eip=0x003170; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 5541 mov     al, [bp+var_4] ;~ 01A2:3170
cs=0x1a2;eip=0x003173; 	T(CBW);	// 5542 cbw ;~ 01A2:3173
cs=0x1a2;eip=0x003174; 	T(MOV(sp, bp));	// 5543 mov     sp, bp ;~ 01A2:3174
cs=0x1a2;eip=0x003176; 	X(POP(bp));	// 5544 pop     bp ;~ 01A2:3176
cs=0x1a2;eip=0x003177; 	J(RETF(0));	// 5545 retf ;~ 01A2:3177

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdef_13049: 	goto def_13049;
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
        case m2c::krun_option_menu: 	goto run_option_menu;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool end_hiscore(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    end_hiscore:
    _begin:
#undef var_9e
#define var_9e -0x9E
	// 5555 var_9E          = word ptr -9Eh ;~ 01A2:3178
#undef var_9c
#define var_9c -0x9C
	// 5556 var_9C          = word ptr -9Ch ;~ 01A2:3178
#undef var_9a
#define var_9a -0x9A
	// 5557 var_9A          = byte ptr -9Ah ;~ 01A2:3178
#undef var_98
#define var_98 -0x98
	// 5558 var_98          = byte ptr -98h ;~ 01A2:3178
#undef var_92
#define var_92 -0x92
	// 5559 var_92          = byte ptr -92h ;~ 01A2:3178
#undef var_90
#define var_90 -0x90
	// 5560 var_90          = word ptr -90h ;~ 01A2:3178
#undef var_8e
#define var_8e -0x8E
	// 5561 var_8E          = byte ptr -8Eh ;~ 01A2:3178
#undef var_8c
#define var_8c -0x8C
	// 5562 var_8C          = word ptr -8Ch ;~ 01A2:3178
#undef var_8a
#define var_8a -0x8A
	// 5563 var_8A          = word ptr -8Ah ;~ 01A2:3178
#undef var_88
#define var_88 -0x88
	// 5564 var_88          = word ptr -88h ;~ 01A2:3178
#undef var_86
#define var_86 -0x86
	// 5565 var_86          = dword ptr -86h ;~ 01A2:3178
#undef var_82
#define var_82 -0x82
	// 5566 var_82          = byte ptr -82h ;~ 01A2:3178
#undef var_80
#define var_80 -0x80
	// 5567 var_80          = word ptr -80h ;~ 01A2:3178
#undef var_7e
#define var_7e -0x7E
	// 5568 var_7E          = word ptr -7Eh ;~ 01A2:3178
#undef var_7c
#define var_7c -0x7C
	// 5569 var_7C          = word ptr -7Ch ;~ 01A2:3178
#undef var_7a
#define var_7a -0x7A
	// 5570 var_7A          = word ptr -7Ah ;~ 01A2:3178
#undef var_78
#define var_78 -0x78
	// 5571 var_78          = byte ptr -78h ;~ 01A2:3178
#undef var_72
#define var_72 -0x72
	// 5572 var_72          = word ptr -72h ;~ 01A2:3178
#undef var_70
#define var_70 -0x70
	// 5573 var_70          = word ptr -70h ;~ 01A2:3178
#undef var_6e
#define var_6e -0x6E
	// 5574 var_6E          = byte ptr -6Eh ;~ 01A2:3178
#undef var_6c
#define var_6c -0x6C
	// 5575 var_6C          = byte ptr -6Ch ;~ 01A2:3178
#undef var_6a
#define var_6a -0x6A
	// 5576 var_6A          = byte ptr -6Ah ;~ 01A2:3178
#undef var_68
#define var_68 -0x68
	// 5577 var_68          = word ptr -68h ;~ 01A2:3178
#undef var_66
#define var_66 -0x66
	// 5578 var_66          = word ptr -66h ;~ 01A2:3178
#undef var_64
#define var_64 -0x64
	// 5579 var_64          = byte ptr -64h ;~ 01A2:3178
#undef var_62
#define var_62 -0x62
	// 5580 var_62          = byte ptr -62h ;~ 01A2:3178
#undef var_5c
#define var_5c -0x5C
	// 5581 var_5C          = word ptr -5Ch ;~ 01A2:3178
#undef var_5a
#define var_5a -0x5A
	// 5582 var_5A          = word ptr -5Ah ;~ 01A2:3178
#undef var_58
#define var_58 -0x58
	// 5583 var_58          = word ptr -58h ;~ 01A2:3178
#undef var_56
#define var_56 -0x56
	// 5584 var_56          = dword ptr -56h ;~ 01A2:3178
#undef var_52
#define var_52 -0x52
	// 5585 var_52          = byte ptr -52h ;~ 01A2:3178
#undef var_50
#define var_50 -0x50
	// 5586 var_50          = word ptr -50h ;~ 01A2:3178
#undef var_4e
#define var_4e -0x4E
	// 5587 var_4E          = word ptr -4Eh ;~ 01A2:3178
#undef var_4c
#define var_4c -0x4C
	// 5588 var_4C          = word ptr -4Ch ;~ 01A2:3178
#undef var_4a
#define var_4a -0x4A
	// 5589 var_4A          = dword ptr -4Ah ;~ 01A2:3178
#undef var_46
#define var_46 -0x46
	// 5590 var_46          = dword ptr -46h ;~ 01A2:3178
#undef var_42
#define var_42 -0x42
	// 5591 var_42          = word ptr -42h ;~ 01A2:3178
#undef var_40
#define var_40 -0x40
	// 5592 var_40          = word ptr -40h ;~ 01A2:3178
#undef var_3e
#define var_3e -0x3E
	// 5593 var_3E          = byte ptr -3Eh ;~ 01A2:3178
#undef var_3c
#define var_3c -0x3C
	// 5594 var_3C          = byte ptr -3Ch ;~ 01A2:3178
#undef var_1c
#define var_1c -0x1C
	// 5595 var_1C          = word ptr -1Ch ;~ 01A2:3178
#undef var_1a
#define var_1a -0x1A
	// 5596 var_1A          = word ptr -1Ah ;~ 01A2:3178
#undef var_18
#define var_18 -0x18
	// 5597 var_18          = byte ptr -18h ;~ 01A2:3178
#undef var_16
#define var_16 -0x16
	// 5598 var_16          = byte ptr -16h ;~ 01A2:3178
#undef var_14
#define var_14 -0x14
	// 5599 var_14          = byte ptr -14h ;~ 01A2:3178
#undef var_12
#define var_12 -0x12
	// 5600 var_12          = byte ptr -12h ;~ 01A2:3178
#undef var_11
#define var_11 -0x11
	// 5601 var_11          = byte ptr -11h ;~ 01A2:3178
#undef var_10
#define var_10 -0x10
	// 5602 var_10          = byte ptr -10h ;~ 01A2:3178
cs=0x1a2;eip=0x003178; 	X(PUSH(bp));	// 5604 push    bp ;~ 01A2:3178
cs=0x1a2;eip=0x003179; 	T(MOV(bp, sp));	// 5605 mov     bp, sp ;~ 01A2:3179
cs=0x1a2;eip=0x00317b; 	T(SUB(sp, 0x9E));	// 5606 sub     sp, 9Eh ;~ 01A2:317B
cs=0x1a2;eip=0x00317f; 	X(PUSH(di));	// 5607 push    di ;~ 01A2:317F
cs=0x1a2;eip=0x003180; 	X(PUSH(si));	// 5608 push    si              ; char * ;~ 01A2:3180
cs=0x1a2;eip=0x003181; 	T(MOV(ax, 4));	// 5609 mov     ax, 4 ;~ 01A2:3181
cs=0x1a2;eip=0x003184; 	X(PUSH(ax));	// 5610 push    ax ;~ 01A2:3184
cs=0x1a2;eip=0x003185; 	J(CALLF(ensure_file_exists,0));	// 5611 call    ensure_file_exists ;~ 01A2:3185
cs=0x1a2;eip=0x00318a; 	T(ADD(sp, 2));	// 5612 add     sp, 2 ;~ 01A2:318A
cs=0x1a2;eip=0x00318d; 	T(MOV(ax, offset(dseg,amisc_2)));	// 5613 mov     ax, offset aMisc_2 ; "misc" ;~ 01A2:318D
cs=0x1a2;eip=0x003190; 	X(PUSH(ax));	// 5614 push    ax ;~ 01A2:3190
cs=0x1a2;eip=0x003191; 	J(CALLF(file_load_resfile,0));	// 5615 call    file_load_resfile ;~ 01A2:3191
cs=0x1a2;eip=0x003196; 	T(ADD(sp, 2));	// 5616 add     sp, 2 ;~ 01A2:3196
cs=0x1a2;eip=0x003199; 	X(MOV(*(dw*)(raddr(ss,bp+var_4e)), ax));	// 5617 mov     [bp+var_4E], ax ;~ 01A2:3199
cs=0x1a2;eip=0x00319c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4c)), dx));	// 5618 mov     [bp+var_4C], dx ;~ 01A2:319C
cs=0x1a2;eip=0x00319f; 	T(CMP(byte_449aa, 0));	// 5619 cmp     byte_449AA, 0 ;~ 01A2:319F
cs=0x1a2;eip=0x0031a4; 	J(JZ(loc_131c0));	// 5620 jz      short loc_131C0 ;~ 01A2:31A4
cs=0x1a2;eip=0x0031a6; 	T(MOV(al, byte_449aa));	// 5621 mov     al, byte_449AA ;~ 01A2:31A6
cs=0x1a2;eip=0x0031a9; 	T(ADD(al, 0x30));	// 5622 add     al, 30h ; '0' ;~ 01A2:31A9
cs=0x1a2;eip=0x0031ab; 	X(MOV(byte_3b907, al));	// 5623 mov     byte_3B907, al ;~ 01A2:31AB
cs=0x1a2;eip=0x0031ae; 	T(MOV(ax, offset(dseg,unk_3b904)));	// 5624 mov     ax, offset unk_3B904 ;~ 01A2:31AE
cs=0x1a2;eip=0x0031b1; 	X(PUSH(ax));	// 5625 push    ax ;~ 01A2:31B1
cs=0x1a2;eip=0x0031b2; 	J(CALLF(file_load_resfile,0));	// 5626 call    file_load_resfile ;~ 01A2:31B2
cs=0x1a2;eip=0x0031b7; 	T(ADD(sp, 2));	// 5627 add     sp, 2 ;~ 01A2:31B7
cs=0x1a2;eip=0x0031ba; 	X(MOV(*(dw*)(raddr(ss,bp+var_68)), ax));	// 5628 mov     [bp+var_68], ax ;~ 01A2:31BA
cs=0x1a2;eip=0x0031bd; 	X(MOV(*(dw*)(raddr(ss,bp+var_66)), dx));	// 5629 mov     [bp+var_66], dx ;~ 01A2:31BD
loc_131c0:
	// 4629 
cs=0x1a2;eip=0x0031c0; 	T(MOV(ax, 0x0F));	// 5632 mov     ax, 0Fh ;~ 01A2:31C0
cs=0x1a2;eip=0x0031c3; 	X(PUSH(ax));	// 5633 push    ax ;~ 01A2:31C3
cs=0x1a2;eip=0x0031c4; 	T(MOV(ax, 0x0C8));	// 5634 mov     ax, 0C8h ; 'È' ;~ 01A2:31C4
cs=0x1a2;eip=0x0031c7; 	X(PUSH(ax));	// 5635 push    ax ;~ 01A2:31C7
cs=0x1a2;eip=0x0031c8; 	T(MOV(ax, 0x140));	// 5636 mov     ax, 140h ;~ 01A2:31C8
cs=0x1a2;eip=0x0031cb; 	X(PUSH(ax));	// 5637 push    ax ;~ 01A2:31CB
cs=0x1a2;eip=0x0031cc; 	J(CALLF(sprite_make_wnd,0));	// 5638 call    sprite_make_wnd ;~ 01A2:31CC
cs=0x1a2;eip=0x0031d1; 	T(ADD(sp, 6));	// 5639 add     sp, 6 ;~ 01A2:31D1
cs=0x1a2;eip=0x0031d4; 	X(MOV(*(dw*)(((db*)&wndsprite)), ax));	// 5640 mov     word ptr wndsprite, ax ;~ 01A2:31D4
cs=0x1a2;eip=0x0031d7; 	X(MOV(*(dw*)(((db*)&wndsprite)+2), dx));	// 5641 mov     word ptr wndsprite+2, dx ;~ 01A2:31D7
cs=0x1a2;eip=0x0031db; 	T(CMP(video_flag5_is0, 0));	// 5642 cmp     video_flag5_is0, 0 ;~ 01A2:31DB
cs=0x1a2;eip=0x0031e0; 	J(JZ(loc_131fc));	// 5643 jz      short loc_131FC ;~ 01A2:31E0
cs=0x1a2;eip=0x0031e2; 	T(MOV(ax, 0x0F));	// 5644 mov     ax, 0Fh ;~ 01A2:31E2
cs=0x1a2;eip=0x0031e5; 	X(PUSH(ax));	// 5645 push    ax ;~ 01A2:31E5
cs=0x1a2;eip=0x0031e6; 	T(MOV(ax, 0x64));	// 5646 mov     ax, 64h ; 'd' ;~ 01A2:31E6
cs=0x1a2;eip=0x0031e9; 	X(PUSH(ax));	// 5647 push    ax ;~ 01A2:31E9
cs=0x1a2;eip=0x0031ea; 	T(MOV(ax, 0x0C8));	// 5648 mov     ax, 0C8h ; 'È' ;~ 01A2:31EA
cs=0x1a2;eip=0x0031ed; 	X(PUSH(ax));	// 5649 push    ax ;~ 01A2:31ED
cs=0x1a2;eip=0x0031ee; 	J(CALLF(sprite_make_wnd,0));	// 5650 call    sprite_make_wnd ;~ 01A2:31EE
cs=0x1a2;eip=0x0031f3; 	T(ADD(sp, 6));	// 5651 add     sp, 6 ;~ 01A2:31F3
cs=0x1a2;eip=0x0031f6; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_46))), ax));	// 5652 mov     word ptr [bp+var_46], ax ;~ 01A2:31F6
cs=0x1a2;eip=0x0031f9; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_46+2))), dx));	// 5653 mov     word ptr [bp+var_46+2], dx ;~ 01A2:31F9
loc_131fc:
	// 4630 
cs=0x1a2;eip=0x0031fc; 	X(MOV(*(raddr(ss,bp+var_52)), 0x0FF));	// 5656 mov     [bp+var_52], 0FFh ;~ 01A2:31FC
cs=0x1a2;eip=0x003200; 	J(CALLF(sprite_copy_wnd_to_1_clear,0));	// 5657 call    sprite_copy_wnd_to_1_clear ;~ 01A2:3200
cs=0x1a2;eip=0x003205; 	T(SUB(ax, ax));	// 5658 sub     ax, ax ;~ 01A2:3205
cs=0x1a2;eip=0x003207; 	X(PUSH(ax));	// 5659 push    ax ;~ 01A2:3207
cs=0x1a2;eip=0x003208; 	X(PUSH(word_407f8));	// 5660 push    word_407F8 ;~ 01A2:3208
cs=0x1a2;eip=0x00320c; 	X(PUSH(word_407f6));	// 5661 push    word_407F6 ;~ 01A2:320C
cs=0x1a2;eip=0x003210; 	X(PUSH(word_407f4));	// 5662 push    word_407F4 ;~ 01A2:3210
cs=0x1a2;eip=0x003214; 	T(MOV(ax, 0x64));	// 5663 mov     ax, 64h ; 'd' ;~ 01A2:3214
cs=0x1a2;eip=0x003217; 	X(PUSH(ax));	// 5664 push    ax ;~ 01A2:3217
cs=0x1a2;eip=0x003218; 	T(MOV(ax, 0x140));	// 5665 mov     ax, 140h ;~ 01A2:3218
cs=0x1a2;eip=0x00321b; 	X(PUSH(ax));	// 5666 push    ax ;~ 01A2:321B
cs=0x1a2;eip=0x00321c; 	T(SUB(ax, ax));	// 5667 sub     ax, ax ;~ 01A2:321C
cs=0x1a2;eip=0x00321e; 	X(PUSH(ax));	// 5668 push    ax ;~ 01A2:321E
cs=0x1a2;eip=0x00321f; 	X(PUSH(ax));	// 5669 push    ax ;~ 01A2:321F
cs=0x1a2;eip=0x003220; 	X(PUSH(ax));	// 5670 push    ax ;~ 01A2:3220
cs=0x1a2;eip=0x003221; 	X(PUSH(ax));	// 5671 push    ax ;~ 01A2:3221
cs=0x1a2;eip=0x003222; 	J(CALLF(draw_button,0));	// 5672 call    draw_button ;~ 01A2:3222
cs=0x1a2;eip=0x003227; 	T(ADD(sp, 0x14));	// 5673 add     sp, 14h ;~ 01A2:3227
cs=0x1a2;eip=0x00322a; 	T(SUB(ax, ax));	// 5674 sub     ax, ax ;~ 01A2:322A
cs=0x1a2;eip=0x00322c; 	X(PUSH(ax));	// 5675 push    ax ;~ 01A2:322C
cs=0x1a2;eip=0x00322d; 	X(PUSH(word_407f8));	// 5676 push    word_407F8 ;~ 01A2:322D
cs=0x1a2;eip=0x003231; 	X(PUSH(word_407f6));	// 5677 push    word_407F6 ;~ 01A2:3231
cs=0x1a2;eip=0x003235; 	X(PUSH(word_407f4));	// 5678 push    word_407F4 ;~ 01A2:3235
cs=0x1a2;eip=0x003239; 	T(MOV(ax, 0x63));	// 5679 mov     ax, 63h ; 'c' ;~ 01A2:3239
cs=0x1a2;eip=0x00323c; 	X(PUSH(ax));	// 5680 push    ax ;~ 01A2:323C
cs=0x1a2;eip=0x00323d; 	T(MOV(ax, 0x140));	// 5681 mov     ax, 140h ;~ 01A2:323D
cs=0x1a2;eip=0x003240; 	X(PUSH(ax));	// 5682 push    ax ;~ 01A2:3240
cs=0x1a2;eip=0x003241; 	T(MOV(ax, 0x65));	// 5683 mov     ax, 65h ; 'e' ;~ 01A2:3241
cs=0x1a2;eip=0x003244; 	X(PUSH(ax));	// 5684 push    ax ;~ 01A2:3244
cs=0x1a2;eip=0x003245; 	T(SUB(ax, ax));	// 5685 sub     ax, ax ;~ 01A2:3245
cs=0x1a2;eip=0x003247; 	X(PUSH(ax));	// 5686 push    ax ;~ 01A2:3247
cs=0x1a2;eip=0x003248; 	X(PUSH(ax));	// 5687 push    ax ;~ 01A2:3248
cs=0x1a2;eip=0x003249; 	X(PUSH(ax));	// 5688 push    ax ;~ 01A2:3249
cs=0x1a2;eip=0x00324a; 	J(CALLF(draw_button,0));	// 5689 call    draw_button ;~ 01A2:324A
cs=0x1a2;eip=0x00324f; 	T(ADD(sp, 0x14));	// 5690 add     sp, 14h ;~ 01A2:324F
cs=0x1a2;eip=0x003252; 	X(MOV(*(dw*)(raddr(ss,bp+var_70)), 0x6B));	// 5691 mov     [bp+var_70], 6Bh ; 'k' ;~ 01A2:3252
cs=0x1a2;eip=0x003257; 	T(MOV(ax, offset(dseg,aelt)));	// 5692 mov     ax, offset aElt ; "elt" ;~ 01A2:3257
cs=0x1a2;eip=0x00325a; 	X(PUSH(ax));	// 5693 push    ax ;~ 01A2:325A
cs=0x1a2;eip=0x00325b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 5694 push    [bp+var_4C] ;~ 01A2:325B
cs=0x1a2;eip=0x00325e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 5695 push    [bp+var_4E] ;~ 01A2:325E
cs=0x1a2;eip=0x003261; 	J(CALLF(locate_text_res,0));	// 5696 call    locate_text_res ;~ 01A2:3261
cs=0x1a2;eip=0x003266; 	T(ADD(sp, 6));	// 5697 add     sp, 6 ;~ 01A2:3266
cs=0x1a2;eip=0x003269; 	X(PUSH(dx));	// 5698 push    dx ;~ 01A2:3269
cs=0x1a2;eip=0x00326a; 	X(PUSH(ax));	// 5699 push    ax ;~ 01A2:326A
cs=0x1a2;eip=0x00326b; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5700 mov     ax, offset resID_byte1 ;~ 01A2:326B
cs=0x1a2;eip=0x00326e; 	X(PUSH(ax));	// 5701 push    ax ;~ 01A2:326E
cs=0x1a2;eip=0x00326f; 	J(CALLF(copy_string,0));	// 5702 call    copy_string ;~ 01A2:326F
cs=0x1a2;eip=0x003274; 	T(ADD(sp, 6));	// 5703 add     sp, 6 ;~ 01A2:3274
cs=0x1a2;eip=0x003277; 	T(CMP(gstate_total_finish_time, 0));	// 5704 cmp     gState_total_finish_time, 0 ;~ 01A2:3277
cs=0x1a2;eip=0x00327c; 	J(JNZ(loc_13281));	// 5705 jnz     short loc_13281 ;~ 01A2:327C
cs=0x1a2;eip=0x00327e; 	J(JMP(loc_13354));	// 5706 jmp     loc_13354 ;~ 01A2:327E
loc_13281:
	// 4631 
cs=0x1a2;eip=0x003281; 	T(MOV(ax, 1));	// 5710 mov     ax, 1 ;~ 01A2:3281
cs=0x1a2;eip=0x003284; 	X(PUSH(ax));	// 5711 push    ax              ; int ;~ 01A2:3284
cs=0x1a2;eip=0x003285; 	T(MOV(ax, gstate_total_finish_time));	// 5712 mov     ax, gState_total_finish_time ;~ 01A2:3285
cs=0x1a2;eip=0x003288; 	T(SUB(ax, gstate_penalty));	// 5713 sub     ax, gState_penalty ;~ 01A2:3288
cs=0x1a2;eip=0x00328c; 	X(PUSH(ax));	// 5714 push    ax ;~ 01A2:328C
cs=0x1a2;eip=0x00328d; 	T(ax = bp+var_12);	// 5715 lea     ax, [bp+var_12] ;~ 01A2:328D
cs=0x1a2;eip=0x003290; 	X(PUSH(ax));	// 5716 push    ax              ; char * ;~ 01A2:3290
cs=0x1a2;eip=0x003291; 	J(CALLF(format_frame_as_string,0));	// 5717 call    format_frame_as_string ;~ 01A2:3291
cs=0x1a2;eip=0x003296; 	T(ADD(sp, 6));	// 5718 add     sp, 6 ;~ 01A2:3296
cs=0x1a2;eip=0x003299; 	T(ax = bp+var_12);	// 5719 lea     ax, [bp+var_12] ;~ 01A2:3299
cs=0x1a2;eip=0x00329c; 	X(PUSH(ax));	// 5720 push    ax ;~ 01A2:329C
cs=0x1a2;eip=0x00329d; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5721 mov     ax, offset resID_byte1 ;~ 01A2:329D
cs=0x1a2;eip=0x0032a0; 	X(PUSH(ax));	// 5722 push    ax              ; char * ;~ 01A2:32A0
cs=0x1a2;eip=0x0032a1; 	J(CALLF(_strcat,0));	// 5723 call    _strcat ;~ 01A2:32A1
cs=0x1a2;eip=0x0032a6; 	T(ADD(sp, 4));	// 5724 add     sp, 4 ;~ 01A2:32A6
cs=0x1a2;eip=0x0032a9; 	T(TEST(byte_43966, 2));	// 5725 test    byte_43966, 2 ;~ 01A2:32A9
cs=0x1a2;eip=0x0032ae; 	J(JZ(loc_132dc));	// 5726 jz      short loc_132DC ;~ 01A2:32AE
cs=0x1a2;eip=0x0032b0; 	T(MOV(ax, offset(dseg,acon)));	// 5727 mov     ax, offset aCon ; "con" ;~ 01A2:32B0
cs=0x1a2;eip=0x0032b3; 	X(PUSH(ax));	// 5728 push    ax ;~ 01A2:32B3
cs=0x1a2;eip=0x0032b4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 5729 push    [bp+var_4C] ;~ 01A2:32B4
cs=0x1a2;eip=0x0032b7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 5730 push    [bp+var_4E] ;~ 01A2:32B7
cs=0x1a2;eip=0x0032ba; 	J(CALLF(locate_text_res,0));	// 5731 call    locate_text_res ;~ 01A2:32BA
cs=0x1a2;eip=0x0032bf; 	T(ADD(sp, 6));	// 5732 add     sp, 6 ;~ 01A2:32BF
cs=0x1a2;eip=0x0032c2; 	X(PUSH(dx));	// 5733 push    dx ;~ 01A2:32C2
cs=0x1a2;eip=0x0032c3; 	X(PUSH(ax));	// 5734 push    ax ;~ 01A2:32C3
cs=0x1a2;eip=0x0032c4; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5735 mov     ax, offset resID_byte1 ;~ 01A2:32C4
cs=0x1a2;eip=0x0032c7; 	X(PUSH(ax));	// 5736 push    ax              ; char * ;~ 01A2:32C7
cs=0x1a2;eip=0x0032c8; 	J(CALLF(_strlen,0));	// 5737 call    _strlen ;~ 01A2:32C8
cs=0x1a2;eip=0x0032cd; 	T(ADD(sp, 2));	// 5738 add     sp, 2 ;~ 01A2:32CD
cs=0x1a2;eip=0x0032d0; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 5739 add     ax, offset resID_byte1 ;~ 01A2:32D0
cs=0x1a2;eip=0x0032d3; 	X(PUSH(ax));	// 5740 push    ax ;~ 01A2:32D3
cs=0x1a2;eip=0x0032d4; 	J(CALLF(copy_string,0));	// 5741 call    copy_string ;~ 01A2:32D4
cs=0x1a2;eip=0x0032d9; 	T(ADD(sp, 6));	// 5742 add     sp, 6 ;~ 01A2:32D9
loc_132dc:
	// 4632 
cs=0x1a2;eip=0x0032dc; 	T(SUB(ax, ax));	// 5745 sub     ax, ax ;~ 01A2:32DC
cs=0x1a2;eip=0x0032de; 	X(PUSH(ax));	// 5746 push    ax ;~ 01A2:32DE
cs=0x1a2;eip=0x0032df; 	X(PUSH(dialog_fnt_colour));	// 5747 push    dialog_fnt_colour ;~ 01A2:32DF
cs=0x1a2;eip=0x0032e3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 5748 push    [bp+var_70] ;~ 01A2:32E3
cs=0x1a2;eip=0x0032e6; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5749 mov     ax, offset resID_byte1 ;~ 01A2:32E6
cs=0x1a2;eip=0x0032e9; 	X(PUSH(ax));	// 5750 push    ax ;~ 01A2:32E9
cs=0x1a2;eip=0x0032ea; 	J(CALLF(font_op2_alt,0));	// 5751 call    font_op2_alt ;~ 01A2:32EA
cs=0x1a2;eip=0x0032ef; 	T(ADD(sp, 2));	// 5752 add     sp, 2 ;~ 01A2:32EF
cs=0x1a2;eip=0x0032f2; 	X(PUSH(ax));	// 5753 push    ax ;~ 01A2:32F2
cs=0x1a2;eip=0x0032f3; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5754 mov     ax, offset resID_byte1 ;~ 01A2:32F3
cs=0x1a2;eip=0x0032f6; 	X(PUSH(ax));	// 5755 push    ax ;~ 01A2:32F6
cs=0x1a2;eip=0x0032f7; 	J(CALLF(hiscore_draw_text,0));	// 5756 call    hiscore_draw_text ;~ 01A2:32F7
cs=0x1a2;eip=0x0032fc; 	T(ADD(sp, 0x0A));	// 5757 add     sp, 0Ah ;~ 01A2:32FC
cs=0x1a2;eip=0x0032ff; 	X(ADD(*(dw*)(raddr(ss,bp+var_70)), 0x0A));	// 5758 add     [bp+var_70], 0Ah ;~ 01A2:32FF
cs=0x1a2;eip=0x003303; 	T(CMP(gstate_penalty, 0));	// 5759 cmp     gState_penalty, 0 ;~ 01A2:3303
cs=0x1a2;eip=0x003308; 	J(JNZ(loc_1330d));	// 5760 jnz     short loc_1330D ;~ 01A2:3308
cs=0x1a2;eip=0x00330a; 	J(JMP(loc_133a7));	// 5761 jmp     loc_133A7 ;~ 01A2:330A
loc_1330d:
	// 4633 
cs=0x1a2;eip=0x00330d; 	T(MOV(ax, offset(dseg,appt)));	// 5765 mov     ax, offset aPpt ; "ppt" ;~ 01A2:330D
cs=0x1a2;eip=0x003310; 	X(PUSH(ax));	// 5766 push    ax ;~ 01A2:3310
cs=0x1a2;eip=0x003311; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 5767 push    [bp+var_4C] ;~ 01A2:3311
cs=0x1a2;eip=0x003314; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 5768 push    [bp+var_4E] ;~ 01A2:3314
cs=0x1a2;eip=0x003317; 	J(CALLF(locate_text_res,0));	// 5769 call    locate_text_res ;~ 01A2:3317
cs=0x1a2;eip=0x00331c; 	T(ADD(sp, 6));	// 5770 add     sp, 6 ;~ 01A2:331C
cs=0x1a2;eip=0x00331f; 	X(PUSH(dx));	// 5771 push    dx ;~ 01A2:331F
cs=0x1a2;eip=0x003320; 	X(PUSH(ax));	// 5772 push    ax ;~ 01A2:3320
cs=0x1a2;eip=0x003321; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5773 mov     ax, offset resID_byte1 ;~ 01A2:3321
cs=0x1a2;eip=0x003324; 	X(PUSH(ax));	// 5774 push    ax ;~ 01A2:3324
cs=0x1a2;eip=0x003325; 	J(CALLF(copy_string,0));	// 5775 call    copy_string ;~ 01A2:3325
cs=0x1a2;eip=0x00332a; 	T(ADD(sp, 6));	// 5776 add     sp, 6 ;~ 01A2:332A
cs=0x1a2;eip=0x00332d; 	T(MOV(ax, 1));	// 5777 mov     ax, 1 ;~ 01A2:332D
cs=0x1a2;eip=0x003330; 	X(PUSH(ax));	// 5778 push    ax              ; int ;~ 01A2:3330
cs=0x1a2;eip=0x003331; 	X(PUSH(gstate_penalty));	// 5779 push    gState_penalty ;~ 01A2:3331
cs=0x1a2;eip=0x003335; 	T(ax = bp+var_12);	// 5780 lea     ax, [bp+var_12] ;~ 01A2:3335
cs=0x1a2;eip=0x003338; 	X(PUSH(ax));	// 5781 push    ax              ; char * ;~ 01A2:3338
cs=0x1a2;eip=0x003339; 	J(CALLF(format_frame_as_string,0));	// 5782 call    format_frame_as_string ;~ 01A2:3339
cs=0x1a2;eip=0x00333e; 	T(ADD(sp, 6));	// 5783 add     sp, 6 ;~ 01A2:333E
cs=0x1a2;eip=0x003341; 	T(ax = bp+var_12);	// 5784 lea     ax, [bp+var_12] ;~ 01A2:3341
cs=0x1a2;eip=0x003344; 	X(PUSH(ax));	// 5785 push    ax ;~ 01A2:3344
cs=0x1a2;eip=0x003345; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5786 mov     ax, offset resID_byte1 ;~ 01A2:3345
cs=0x1a2;eip=0x003348; 	X(PUSH(ax));	// 5787 push    ax              ; char * ;~ 01A2:3348
cs=0x1a2;eip=0x003349; 	J(CALLF(_strcat,0));	// 5788 call    _strcat ;~ 01A2:3349
cs=0x1a2;eip=0x00334e; 	T(ADD(sp, 4));	// 5789 add     sp, 4 ;~ 01A2:334E
cs=0x1a2;eip=0x003351; 	J(JMP(loc_13380));	// 5790 jmp     short loc_13380 ;~ 01A2:3351
loc_13354:
	// 4634 
cs=0x1a2;eip=0x003354; 	T(MOV(ax, offset(dseg,adnf)));	// 5795 mov     ax, offset aDnf ; "dnf" ;~ 01A2:3354
cs=0x1a2;eip=0x003357; 	X(PUSH(ax));	// 5796 push    ax ;~ 01A2:3357
cs=0x1a2;eip=0x003358; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 5797 push    [bp+var_4C] ;~ 01A2:3358
cs=0x1a2;eip=0x00335b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 5798 push    [bp+var_4E] ;~ 01A2:335B
cs=0x1a2;eip=0x00335e; 	J(CALLF(locate_text_res,0));	// 5799 call    locate_text_res ;~ 01A2:335E
cs=0x1a2;eip=0x003363; 	T(ADD(sp, 6));	// 5800 add     sp, 6 ;~ 01A2:3363
cs=0x1a2;eip=0x003366; 	X(PUSH(dx));	// 5801 push    dx ;~ 01A2:3366
cs=0x1a2;eip=0x003367; 	X(PUSH(ax));	// 5802 push    ax ;~ 01A2:3367
cs=0x1a2;eip=0x003368; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5803 mov     ax, offset resID_byte1 ;~ 01A2:3368
cs=0x1a2;eip=0x00336b; 	X(PUSH(ax));	// 5804 push    ax              ; char * ;~ 01A2:336B
cs=0x1a2;eip=0x00336c; 	J(CALLF(_strlen,0));	// 5805 call    _strlen ;~ 01A2:336C
cs=0x1a2;eip=0x003371; 	T(ADD(sp, 2));	// 5806 add     sp, 2 ;~ 01A2:3371
cs=0x1a2;eip=0x003374; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 5807 add     ax, offset resID_byte1 ;~ 01A2:3374
cs=0x1a2;eip=0x003377; 	X(PUSH(ax));	// 5808 push    ax ;~ 01A2:3377
cs=0x1a2;eip=0x003378; 	J(CALLF(copy_string,0));	// 5809 call    copy_string ;~ 01A2:3378
cs=0x1a2;eip=0x00337d; 	T(ADD(sp, 6));	// 5810 add     sp, 6 ;~ 01A2:337D
loc_13380:
	// 4635 
cs=0x1a2;eip=0x003380; 	T(SUB(ax, ax));	// 5813 sub     ax, ax ;~ 01A2:3380
cs=0x1a2;eip=0x003382; 	X(PUSH(ax));	// 5814 push    ax ;~ 01A2:3382
cs=0x1a2;eip=0x003383; 	X(PUSH(dialog_fnt_colour));	// 5815 push    dialog_fnt_colour ;~ 01A2:3383
cs=0x1a2;eip=0x003387; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 5816 push    [bp+var_70] ;~ 01A2:3387
cs=0x1a2;eip=0x00338a; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5817 mov     ax, offset resID_byte1 ;~ 01A2:338A
cs=0x1a2;eip=0x00338d; 	X(PUSH(ax));	// 5818 push    ax ;~ 01A2:338D
cs=0x1a2;eip=0x00338e; 	J(CALLF(font_op2_alt,0));	// 5819 call    font_op2_alt ;~ 01A2:338E
cs=0x1a2;eip=0x003393; 	T(ADD(sp, 2));	// 5820 add     sp, 2 ;~ 01A2:3393
cs=0x1a2;eip=0x003396; 	X(PUSH(ax));	// 5821 push    ax ;~ 01A2:3396
cs=0x1a2;eip=0x003397; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5822 mov     ax, offset resID_byte1 ;~ 01A2:3397
cs=0x1a2;eip=0x00339a; 	X(PUSH(ax));	// 5823 push    ax ;~ 01A2:339A
cs=0x1a2;eip=0x00339b; 	J(CALLF(hiscore_draw_text,0));	// 5824 call    hiscore_draw_text ;~ 01A2:339B
cs=0x1a2;eip=0x0033a0; 	T(ADD(sp, 0x0A));	// 5825 add     sp, 0Ah ;~ 01A2:33A0
cs=0x1a2;eip=0x0033a3; 	X(ADD(*(dw*)(raddr(ss,bp+var_70)), 0x0A));	// 5826 add     [bp+var_70], 0Ah ;~ 01A2:33A3
loc_133a7:
	// 4636 
cs=0x1a2;eip=0x0033a7; 	X(MOV(*(raddr(ss,bp+var_18)), 2));	// 5829 mov     [bp+var_18], 2 ;~ 01A2:33A7
cs=0x1a2;eip=0x0033ab; 	T(CMP(byte_449aa, 0));	// 5830 cmp     byte_449AA, 0 ;~ 01A2:33AB
cs=0x1a2;eip=0x0033b0; 	J(JNZ(loc_133b5));	// 5831 jnz     short loc_133B5 ;~ 01A2:33B0
cs=0x1a2;eip=0x0033b2; 	J(JMP(loc_134dc));	// 5832 jmp     loc_134DC ;~ 01A2:33B2
loc_133b5:
	// 4637 
cs=0x1a2;eip=0x0033b5; 	T(CMP(gstate_144, 0));	// 5836 cmp     gState_144, 0 ;~ 01A2:33B5
cs=0x1a2;eip=0x0033ba; 	J(JNZ(loc_1340c));	// 5837 jnz     short loc_1340C ;~ 01A2:33BA
cs=0x1a2;eip=0x0033bc; 	T(MOV(ax, offset(dseg,aolt)));	// 5838 mov     ax, offset aOlt ; "olt" ;~ 01A2:33BC
cs=0x1a2;eip=0x0033bf; 	X(PUSH(ax));	// 5839 push    ax ;~ 01A2:33BF
cs=0x1a2;eip=0x0033c0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 5840 push    [bp+var_4C] ;~ 01A2:33C0
cs=0x1a2;eip=0x0033c3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 5841 push    [bp+var_4E] ;~ 01A2:33C3
cs=0x1a2;eip=0x0033c6; 	J(CALLF(locate_text_res,0));	// 5842 call    locate_text_res ;~ 01A2:33C6
cs=0x1a2;eip=0x0033cb; 	T(ADD(sp, 6));	// 5843 add     sp, 6 ;~ 01A2:33CB
cs=0x1a2;eip=0x0033ce; 	X(PUSH(dx));	// 5844 push    dx ;~ 01A2:33CE
cs=0x1a2;eip=0x0033cf; 	X(PUSH(ax));	// 5845 push    ax ;~ 01A2:33CF
cs=0x1a2;eip=0x0033d0; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5846 mov     ax, offset resID_byte1 ;~ 01A2:33D0
cs=0x1a2;eip=0x0033d3; 	X(PUSH(ax));	// 5847 push    ax ;~ 01A2:33D3
cs=0x1a2;eip=0x0033d4; 	J(CALLF(copy_string,0));	// 5848 call    copy_string ;~ 01A2:33D4
cs=0x1a2;eip=0x0033d9; 	T(ADD(sp, 6));	// 5849 add     sp, 6 ;~ 01A2:33D9
cs=0x1a2;eip=0x0033dc; 	T(MOV(ax, offset(dseg,adnf_0)));	// 5850 mov     ax, offset aDnf_0 ; "dnf" ;~ 01A2:33DC
cs=0x1a2;eip=0x0033df; 	X(PUSH(ax));	// 5851 push    ax ;~ 01A2:33DF
cs=0x1a2;eip=0x0033e0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 5852 push    [bp+var_4C] ;~ 01A2:33E0
cs=0x1a2;eip=0x0033e3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 5853 push    [bp+var_4E] ;~ 01A2:33E3
cs=0x1a2;eip=0x0033e6; 	J(CALLF(locate_text_res,0));	// 5854 call    locate_text_res ;~ 01A2:33E6
cs=0x1a2;eip=0x0033eb; 	T(ADD(sp, 6));	// 5855 add     sp, 6 ;~ 01A2:33EB
cs=0x1a2;eip=0x0033ee; 	X(PUSH(dx));	// 5856 push    dx ;~ 01A2:33EE
cs=0x1a2;eip=0x0033ef; 	X(PUSH(ax));	// 5857 push    ax ;~ 01A2:33EF
cs=0x1a2;eip=0x0033f0; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5858 mov     ax, offset resID_byte1 ;~ 01A2:33F0
cs=0x1a2;eip=0x0033f3; 	X(PUSH(ax));	// 5859 push    ax              ; char * ;~ 01A2:33F3
cs=0x1a2;eip=0x0033f4; 	J(CALLF(_strlen,0));	// 5860 call    _strlen ;~ 01A2:33F4
cs=0x1a2;eip=0x0033f9; 	T(ADD(sp, 2));	// 5861 add     sp, 2 ;~ 01A2:33F9
cs=0x1a2;eip=0x0033fc; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 5862 add     ax, offset resID_byte1 ;~ 01A2:33FC
cs=0x1a2;eip=0x0033ff; 	X(PUSH(ax));	// 5863 push    ax ;~ 01A2:33FF
cs=0x1a2;eip=0x003400; 	J(CALLF(copy_string,0));	// 5864 call    copy_string ;~ 01A2:3400
cs=0x1a2;eip=0x003405; 	T(ADD(sp, 6));	// 5865 add     sp, 6 ;~ 01A2:3405
cs=0x1a2;eip=0x003408; 	J(JMP(loc_134aa));	// 5866 jmp     loc_134AA ;~ 01A2:3408
loc_1340c:
	// 4638 
cs=0x1a2;eip=0x00340c; 	T(CMP(gstate_total_finish_time, 0));	// 5871 cmp     gState_total_finish_time, 0 ;~ 01A2:340C
cs=0x1a2;eip=0x003411; 	J(JZ(loc_1341c));	// 5872 jz      short loc_1341C ;~ 01A2:3411
cs=0x1a2;eip=0x003413; 	T(MOV(ax, gstate_total_finish_time));	// 5873 mov     ax, gState_total_finish_time ;~ 01A2:3413
cs=0x1a2;eip=0x003416; 	T(CMP(gstate_144, ax));	// 5874 cmp     gState_144, ax ;~ 01A2:3416
cs=0x1a2;eip=0x00341a; 	J(JNC(loc_13466));	// 5875 jnb     short loc_13466 ;~ 01A2:341A
loc_1341c:
	// 4639 
cs=0x1a2;eip=0x00341c; 	T(MOV(ax, offset(dseg,aowt)));	// 5878 mov     ax, offset aOwt ; "owt" ;~ 01A2:341C
cs=0x1a2;eip=0x00341f; 	X(PUSH(ax));	// 5879 push    ax ;~ 01A2:341F
cs=0x1a2;eip=0x003420; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 5880 push    [bp+var_4C] ;~ 01A2:3420
cs=0x1a2;eip=0x003423; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 5881 push    [bp+var_4E] ;~ 01A2:3423
cs=0x1a2;eip=0x003426; 	J(CALLF(locate_text_res,0));	// 5882 call    locate_text_res ;~ 01A2:3426
cs=0x1a2;eip=0x00342b; 	T(ADD(sp, 6));	// 5883 add     sp, 6 ;~ 01A2:342B
cs=0x1a2;eip=0x00342e; 	X(PUSH(dx));	// 5884 push    dx ;~ 01A2:342E
cs=0x1a2;eip=0x00342f; 	X(PUSH(ax));	// 5885 push    ax ;~ 01A2:342F
cs=0x1a2;eip=0x003430; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5886 mov     ax, offset resID_byte1 ;~ 01A2:3430
cs=0x1a2;eip=0x003433; 	X(PUSH(ax));	// 5887 push    ax ;~ 01A2:3433
cs=0x1a2;eip=0x003434; 	J(CALLF(copy_string,0));	// 5888 call    copy_string ;~ 01A2:3434
cs=0x1a2;eip=0x003439; 	T(ADD(sp, 6));	// 5889 add     sp, 6 ;~ 01A2:3439
cs=0x1a2;eip=0x00343c; 	T(MOV(ax, 1));	// 5890 mov     ax, 1 ;~ 01A2:343C
cs=0x1a2;eip=0x00343f; 	X(PUSH(ax));	// 5891 push    ax              ; int ;~ 01A2:343F
cs=0x1a2;eip=0x003440; 	X(PUSH(gstate_144));	// 5892 push    gState_144 ;~ 01A2:3440
cs=0x1a2;eip=0x003444; 	T(ax = bp+var_12);	// 5893 lea     ax, [bp+var_12] ;~ 01A2:3444
cs=0x1a2;eip=0x003447; 	X(PUSH(ax));	// 5894 push    ax              ; char * ;~ 01A2:3447
cs=0x1a2;eip=0x003448; 	J(CALLF(format_frame_as_string,0));	// 5895 call    format_frame_as_string ;~ 01A2:3448
cs=0x1a2;eip=0x00344d; 	T(ADD(sp, 6));	// 5896 add     sp, 6 ;~ 01A2:344D
cs=0x1a2;eip=0x003450; 	T(ax = bp+var_12);	// 5897 lea     ax, [bp+var_12] ;~ 01A2:3450
cs=0x1a2;eip=0x003453; 	X(PUSH(ax));	// 5898 push    ax ;~ 01A2:3453
cs=0x1a2;eip=0x003454; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5899 mov     ax, offset resID_byte1 ;~ 01A2:3454
cs=0x1a2;eip=0x003457; 	X(PUSH(ax));	// 5900 push    ax              ; char * ;~ 01A2:3457
cs=0x1a2;eip=0x003458; 	J(CALLF(_strcat,0));	// 5901 call    _strcat ;~ 01A2:3458
cs=0x1a2;eip=0x00345d; 	T(ADD(sp, 4));	// 5902 add     sp, 4 ;~ 01A2:345D
cs=0x1a2;eip=0x003460; 	X(MOV(*(raddr(ss,bp+var_18)), 1));	// 5903 mov     [bp+var_18], 1 ;~ 01A2:3460
cs=0x1a2;eip=0x003464; 	J(JMP(loc_134b5));	// 5904 jmp     short loc_134B5 ;~ 01A2:3464
loc_13466:
	// 4640 
cs=0x1a2;eip=0x003466; 	T(MOV(ax, offset(dseg,aolt_0)));	// 5908 mov     ax, offset aOlt_0 ; "olt" ;~ 01A2:3466
cs=0x1a2;eip=0x003469; 	X(PUSH(ax));	// 5909 push    ax ;~ 01A2:3469
cs=0x1a2;eip=0x00346a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 5910 push    [bp+var_4C] ;~ 01A2:346A
cs=0x1a2;eip=0x00346d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 5911 push    [bp+var_4E] ;~ 01A2:346D
cs=0x1a2;eip=0x003470; 	J(CALLF(locate_text_res,0));	// 5912 call    locate_text_res ;~ 01A2:3470
cs=0x1a2;eip=0x003475; 	T(ADD(sp, 6));	// 5913 add     sp, 6 ;~ 01A2:3475
cs=0x1a2;eip=0x003478; 	X(PUSH(dx));	// 5914 push    dx ;~ 01A2:3478
cs=0x1a2;eip=0x003479; 	X(PUSH(ax));	// 5915 push    ax ;~ 01A2:3479
cs=0x1a2;eip=0x00347a; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5916 mov     ax, offset resID_byte1 ;~ 01A2:347A
cs=0x1a2;eip=0x00347d; 	X(PUSH(ax));	// 5917 push    ax ;~ 01A2:347D
cs=0x1a2;eip=0x00347e; 	J(CALLF(copy_string,0));	// 5918 call    copy_string ;~ 01A2:347E
cs=0x1a2;eip=0x003483; 	T(ADD(sp, 6));	// 5919 add     sp, 6 ;~ 01A2:3483
cs=0x1a2;eip=0x003486; 	T(MOV(ax, 1));	// 5920 mov     ax, 1 ;~ 01A2:3486
cs=0x1a2;eip=0x003489; 	X(PUSH(ax));	// 5921 push    ax              ; int ;~ 01A2:3489
cs=0x1a2;eip=0x00348a; 	X(PUSH(gstate_144));	// 5922 push    gState_144 ;~ 01A2:348A
cs=0x1a2;eip=0x00348e; 	T(ax = bp+var_12);	// 5923 lea     ax, [bp+var_12] ;~ 01A2:348E
cs=0x1a2;eip=0x003491; 	X(PUSH(ax));	// 5924 push    ax              ; char * ;~ 01A2:3491
cs=0x1a2;eip=0x003492; 	J(CALLF(format_frame_as_string,0));	// 5925 call    format_frame_as_string ;~ 01A2:3492
cs=0x1a2;eip=0x003497; 	T(ADD(sp, 6));	// 5926 add     sp, 6 ;~ 01A2:3497
cs=0x1a2;eip=0x00349a; 	T(ax = bp+var_12);	// 5927 lea     ax, [bp+var_12] ;~ 01A2:349A
cs=0x1a2;eip=0x00349d; 	X(PUSH(ax));	// 5928 push    ax ;~ 01A2:349D
cs=0x1a2;eip=0x00349e; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5929 mov     ax, offset resID_byte1 ;~ 01A2:349E
cs=0x1a2;eip=0x0034a1; 	X(PUSH(ax));	// 5930 push    ax              ; char * ;~ 01A2:34A1
cs=0x1a2;eip=0x0034a2; 	J(CALLF(_strcat,0));	// 5931 call    _strcat ;~ 01A2:34A2
cs=0x1a2;eip=0x0034a7; 	T(ADD(sp, 4));	// 5932 add     sp, 4 ;~ 01A2:34A7
loc_134aa:
	// 4641 
cs=0x1a2;eip=0x0034aa; 	T(CMP(gstate_total_finish_time, 0));	// 5935 cmp     gState_total_finish_time, 0 ;~ 01A2:34AA
cs=0x1a2;eip=0x0034af; 	J(JZ(loc_134b5));	// 5936 jz      short loc_134B5 ;~ 01A2:34AF
cs=0x1a2;eip=0x0034b1; 	X(MOV(*(raddr(ss,bp+var_18)), 0));	// 5937 mov     [bp+var_18], 0 ;~ 01A2:34B1
loc_134b5:
	// 4642 
cs=0x1a2;eip=0x0034b5; 	T(SUB(ax, ax));	// 5941 sub     ax, ax ;~ 01A2:34B5
cs=0x1a2;eip=0x0034b7; 	X(PUSH(ax));	// 5942 push    ax ;~ 01A2:34B7
cs=0x1a2;eip=0x0034b8; 	X(PUSH(dialog_fnt_colour));	// 5943 push    dialog_fnt_colour ;~ 01A2:34B8
cs=0x1a2;eip=0x0034bc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 5944 push    [bp+var_70] ;~ 01A2:34BC
cs=0x1a2;eip=0x0034bf; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5945 mov     ax, offset resID_byte1 ;~ 01A2:34BF
cs=0x1a2;eip=0x0034c2; 	X(PUSH(ax));	// 5946 push    ax ;~ 01A2:34C2
cs=0x1a2;eip=0x0034c3; 	J(CALLF(font_op2_alt,0));	// 5947 call    font_op2_alt ;~ 01A2:34C3
cs=0x1a2;eip=0x0034c8; 	T(ADD(sp, 2));	// 5948 add     sp, 2 ;~ 01A2:34C8
cs=0x1a2;eip=0x0034cb; 	X(PUSH(ax));	// 5949 push    ax ;~ 01A2:34CB
cs=0x1a2;eip=0x0034cc; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5950 mov     ax, offset resID_byte1 ;~ 01A2:34CC
cs=0x1a2;eip=0x0034cf; 	X(PUSH(ax));	// 5951 push    ax ;~ 01A2:34CF
cs=0x1a2;eip=0x0034d0; 	J(CALLF(hiscore_draw_text,0));	// 5952 call    hiscore_draw_text ;~ 01A2:34D0
cs=0x1a2;eip=0x0034d5; 	T(ADD(sp, 0x0A));	// 5953 add     sp, 0Ah ;~ 01A2:34D5
cs=0x1a2;eip=0x0034d8; 	X(ADD(*(dw*)(raddr(ss,bp+var_70)), 0x0A));	// 5954 add     [bp+var_70], 0Ah ;~ 01A2:34D8
loc_134dc:
	// 4643 
cs=0x1a2;eip=0x0034dc; 	T(CMP(*(raddr(ss,bp+var_18)), 0));	// 5957 cmp     [bp+var_18], 0 ;~ 01A2:34DC
cs=0x1a2;eip=0x0034e0; 	J(JNZ(loc_134f0));	// 5958 jnz     short loc_134F0 ;~ 01A2:34E0
cs=0x1a2;eip=0x0034e2; 	T(MOV(ax, offset(dseg,avict)));	// 5959 mov     ax, offset aVict ; "VICT" ;~ 01A2:34E2
cs=0x1a2;eip=0x0034e5; 	X(PUSH(ax));	// 5960 push    ax ;~ 01A2:34E5
cs=0x1a2;eip=0x0034e6; 	T(MOV(ax, offset(dseg,askidms_1)));	// 5961 mov     ax, offset aSkidms_1 ; "skidms" ;~ 01A2:34E6
cs=0x1a2;eip=0x0034e9; 	X(PUSH(ax));	// 5962 push    ax ;~ 01A2:34E9
cs=0x1a2;eip=0x0034ea; 	T(MOV(ax, offset(dseg,askidvict)));	// 5963 mov     ax, offset aSkidvict ; "skidvict" ;~ 01A2:34EA
cs=0x1a2;eip=0x0034ed; 	J(JMP(loc_134fb));	// 5964 jmp     short loc_134FB ;~ 01A2:34ED
loc_134f0:
	// 4644 
cs=0x1a2;eip=0x0034f0; 	T(MOV(ax, offset(dseg,aover)));	// 5969 mov     ax, offset aOver ; "OVER" ;~ 01A2:34F0
cs=0x1a2;eip=0x0034f3; 	X(PUSH(ax));	// 5970 push    ax ;~ 01A2:34F3
cs=0x1a2;eip=0x0034f4; 	T(MOV(ax, offset(dseg,askidms_2)));	// 5971 mov     ax, offset aSkidms_2 ; "skidms" ;~ 01A2:34F4
cs=0x1a2;eip=0x0034f7; 	X(PUSH(ax));	// 5972 push    ax ;~ 01A2:34F7
cs=0x1a2;eip=0x0034f8; 	T(MOV(ax, offset(dseg,askidover)));	// 5973 mov     ax, offset aSkidover ; "skidover" ;~ 01A2:34F8
loc_134fb:
	// 4645 
cs=0x1a2;eip=0x0034fb; 	X(PUSH(ax));	// 5976 push    ax              ; char * ;~ 01A2:34FB
cs=0x1a2;eip=0x0034fc; 	J(CALLF(file_load_audiores,0));	// 5977 call    file_load_audiores ;~ 01A2:34FC
cs=0x1a2;eip=0x003501; 	T(ADD(sp, 6));	// 5978 add     sp, 6 ;~ 01A2:3501
cs=0x1a2;eip=0x003504; 	T(MOV(al, byte_449aa));	// 5979 mov     al, byte_449AA ;~ 01A2:3504
cs=0x1a2;eip=0x003507; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 5980 mov     [bp+var_16], al ;~ 01A2:3507
cs=0x1a2;eip=0x00350a; 	T(CMP(*(raddr(ss,bp+var_18)), 2));	// 5981 cmp     [bp+var_18], 2 ;~ 01A2:350A
cs=0x1a2;eip=0x00350e; 	J(JNZ(loc_1351d));	// 5982 jnz     short loc_1351D ;~ 01A2:350E
cs=0x1a2;eip=0x003510; 	T(MOV(ax, gstate_pendframe));	// 5983 mov     ax, gState_pEndFrame ;~ 01A2:3510
cs=0x1a2;eip=0x003513; 	T(CMP(gstate_oendframe, ax));	// 5984 cmp     gState_oEndFrame, ax ;~ 01A2:3513
cs=0x1a2;eip=0x003517; 	J(JZ(loc_1351d));	// 5985 jz      short loc_1351D ;~ 01A2:3517
cs=0x1a2;eip=0x003519; 	X(MOV(*(raddr(ss,bp+var_16)), 0));	// 5986 mov     [bp+var_16], 0 ;~ 01A2:3519
loc_1351d:
	// 4646 
cs=0x1a2;eip=0x00351d; 	T(MOV(ax, offset(dseg,aavs)));	// 5990 mov     ax, offset aAvs ; "avs" ;~ 01A2:351D
cs=0x1a2;eip=0x003520; 	X(PUSH(ax));	// 5991 push    ax ;~ 01A2:3520
cs=0x1a2;eip=0x003521; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 5992 push    [bp+var_4C] ;~ 01A2:3521
cs=0x1a2;eip=0x003524; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 5993 push    [bp+var_4E] ;~ 01A2:3524
cs=0x1a2;eip=0x003527; 	J(CALLF(locate_text_res,0));	// 5994 call    locate_text_res ;~ 01A2:3527
cs=0x1a2;eip=0x00352c; 	T(ADD(sp, 6));	// 5995 add     sp, 6 ;~ 01A2:352C
cs=0x1a2;eip=0x00352f; 	X(PUSH(dx));	// 5996 push    dx ;~ 01A2:352F
cs=0x1a2;eip=0x003530; 	X(PUSH(ax));	// 5997 push    ax ;~ 01A2:3530
cs=0x1a2;eip=0x003531; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 5998 mov     ax, offset resID_byte1 ;~ 01A2:3531
cs=0x1a2;eip=0x003534; 	X(PUSH(ax));	// 5999 push    ax ;~ 01A2:3534
cs=0x1a2;eip=0x003535; 	J(CALLF(copy_string,0));	// 6000 call    copy_string ;~ 01A2:3535
cs=0x1a2;eip=0x00353a; 	T(ADD(sp, 6));	// 6001 add     sp, 6 ;~ 01A2:353A
cs=0x1a2;eip=0x00353d; 	T(MOV(ax, gstate_pendframe));	// 6002 mov     ax, gState_pEndFrame ;~ 01A2:353D
cs=0x1a2;eip=0x003540; 	T(ADD(ax, elapsed_time1));	// 6003 add     ax, elapsed_time1 ;~ 01A2:3540
cs=0x1a2;eip=0x003544; 	J(JZ(loc_1356a));	// 6004 jz      short loc_1356A ;~ 01A2:3544
cs=0x1a2;eip=0x003546; 	T(MOV(ax, gstate_pendframe));	// 6005 mov     ax, gState_pEndFrame ;~ 01A2:3546
cs=0x1a2;eip=0x003549; 	T(ADD(ax, elapsed_time1));	// 6006 add     ax, elapsed_time1 ;~ 01A2:3549
cs=0x1a2;eip=0x00354d; 	T(SUB(cx, cx));	// 6007 sub     cx, cx ;~ 01A2:354D
cs=0x1a2;eip=0x00354f; 	X(PUSH(cx));	// 6008 push    cx ;~ 01A2:354F
cs=0x1a2;eip=0x003550; 	X(PUSH(ax));	// 6009 push    ax ;~ 01A2:3550
cs=0x1a2;eip=0x003551; 	X(PUSH(word_4434a));	// 6010 push    word_4434A ;~ 01A2:3551
cs=0x1a2;eip=0x003555; 	X(PUSH(gstate_travdist));	// 6011 push    gState_travDist ;~ 01A2:3555
cs=0x1a2;eip=0x003559; 	J(CALLF(__afuldiv,0));	// 6012 call    __aFuldiv ;~ 01A2:3559
cs=0x1a2;eip=0x00355e; 	T(MOV(al, ah));	// 6013 mov     al, ah ;~ 01A2:355E
cs=0x1a2;eip=0x003560; 	T(MOV(ah, dl));	// 6014 mov     ah, dl ;~ 01A2:3560
cs=0x1a2;eip=0x003562; 	T(MOV(dl, dh));	// 6015 mov     dl, dh ;~ 01A2:3562
cs=0x1a2;eip=0x003564; 	T(SUB(dh, dh));	// 6016 sub     dh, dh ;~ 01A2:3564
cs=0x1a2;eip=0x003566; 	T(MOV(di, ax));	// 6017 mov     di, ax ;~ 01A2:3566
cs=0x1a2;eip=0x003568; 	J(JMP(loc_1356c));	// 6018 jmp     short loc_1356C ;~ 01A2:3568
loc_1356a:
	// 4647 
cs=0x1a2;eip=0x00356a; 	T(SUB(di, di));	// 6022 sub     di, di ;~ 01A2:356A
loc_1356c:
	// 4648 
cs=0x1a2;eip=0x00356c; 	T(MOV(ax, 3));	// 6025 mov     ax, 3 ;~ 01A2:356C
cs=0x1a2;eip=0x00356f; 	X(PUSH(ax));	// 6026 push    ax              ; int ;~ 01A2:356F
cs=0x1a2;eip=0x003570; 	T(SUB(ax, ax));	// 6027 sub     ax, ax ;~ 01A2:3570
cs=0x1a2;eip=0x003572; 	X(PUSH(ax));	// 6028 push    ax              ; int ;~ 01A2:3572
cs=0x1a2;eip=0x003573; 	X(PUSH(di));	// 6029 push    di ;~ 01A2:3573
cs=0x1a2;eip=0x003574; 	T(ax = bp+var_12);	// 6030 lea     ax, [bp+var_12] ;~ 01A2:3574
cs=0x1a2;eip=0x003577; 	X(PUSH(ax));	// 6031 push    ax              ; char * ;~ 01A2:3577
cs=0x1a2;eip=0x003578; 	J(CALLF(print_int_as_string_maybe,0));	// 6032 call    print_int_as_string_maybe ;~ 01A2:3578
cs=0x1a2;eip=0x00357d; 	T(ADD(sp, 8));	// 6033 add     sp, 8 ;~ 01A2:357D
cs=0x1a2;eip=0x003580; 	T(ax = bp+var_12);	// 6034 lea     ax, [bp+var_12] ;~ 01A2:3580
cs=0x1a2;eip=0x003583; 	X(PUSH(ax));	// 6035 push    ax ;~ 01A2:3583
cs=0x1a2;eip=0x003584; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6036 mov     ax, offset resID_byte1 ;~ 01A2:3584
cs=0x1a2;eip=0x003587; 	X(PUSH(ax));	// 6037 push    ax              ; char * ;~ 01A2:3587
cs=0x1a2;eip=0x003588; 	J(CALLF(_strcat,0));	// 6038 call    _strcat ;~ 01A2:3588
cs=0x1a2;eip=0x00358d; 	T(ADD(sp, 4));	// 6039 add     sp, 4 ;~ 01A2:358D
cs=0x1a2;eip=0x003590; 	T(MOV(ax, offset(dseg,amph)));	// 6040 mov     ax, offset aMph ; "mph" ;~ 01A2:3590
cs=0x1a2;eip=0x003593; 	X(PUSH(ax));	// 6041 push    ax ;~ 01A2:3593
cs=0x1a2;eip=0x003594; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 6042 push    [bp+var_4C] ;~ 01A2:3594
cs=0x1a2;eip=0x003597; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 6043 push    [bp+var_4E] ;~ 01A2:3597
cs=0x1a2;eip=0x00359a; 	J(CALLF(locate_text_res,0));	// 6044 call    locate_text_res ;~ 01A2:359A
cs=0x1a2;eip=0x00359f; 	T(ADD(sp, 6));	// 6045 add     sp, 6 ;~ 01A2:359F
cs=0x1a2;eip=0x0035a2; 	X(PUSH(dx));	// 6046 push    dx ;~ 01A2:35A2
cs=0x1a2;eip=0x0035a3; 	X(PUSH(ax));	// 6047 push    ax ;~ 01A2:35A3
cs=0x1a2;eip=0x0035a4; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6048 mov     ax, offset resID_byte1 ;~ 01A2:35A4
cs=0x1a2;eip=0x0035a7; 	X(PUSH(ax));	// 6049 push    ax              ; char * ;~ 01A2:35A7
cs=0x1a2;eip=0x0035a8; 	J(CALLF(_strlen,0));	// 6050 call    _strlen ;~ 01A2:35A8
cs=0x1a2;eip=0x0035ad; 	T(ADD(sp, 2));	// 6051 add     sp, 2 ;~ 01A2:35AD
cs=0x1a2;eip=0x0035b0; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 6052 add     ax, offset resID_byte1 ;~ 01A2:35B0
cs=0x1a2;eip=0x0035b3; 	X(PUSH(ax));	// 6053 push    ax ;~ 01A2:35B3
cs=0x1a2;eip=0x0035b4; 	J(CALLF(copy_string,0));	// 6054 call    copy_string ;~ 01A2:35B4
cs=0x1a2;eip=0x0035b9; 	T(ADD(sp, 6));	// 6055 add     sp, 6 ;~ 01A2:35B9
cs=0x1a2;eip=0x0035bc; 	T(SUB(ax, ax));	// 6056 sub     ax, ax ;~ 01A2:35BC
cs=0x1a2;eip=0x0035be; 	X(PUSH(ax));	// 6057 push    ax ;~ 01A2:35BE
cs=0x1a2;eip=0x0035bf; 	X(PUSH(dialog_fnt_colour));	// 6058 push    dialog_fnt_colour ;~ 01A2:35BF
cs=0x1a2;eip=0x0035c3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 6059 push    [bp+var_70] ;~ 01A2:35C3
cs=0x1a2;eip=0x0035c6; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6060 mov     ax, offset resID_byte1 ;~ 01A2:35C6
cs=0x1a2;eip=0x0035c9; 	X(PUSH(ax));	// 6061 push    ax ;~ 01A2:35C9
cs=0x1a2;eip=0x0035ca; 	J(CALLF(font_op2_alt,0));	// 6062 call    font_op2_alt ;~ 01A2:35CA
cs=0x1a2;eip=0x0035cf; 	T(ADD(sp, 2));	// 6063 add     sp, 2 ;~ 01A2:35CF
cs=0x1a2;eip=0x0035d2; 	X(PUSH(ax));	// 6064 push    ax ;~ 01A2:35D2
cs=0x1a2;eip=0x0035d3; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6065 mov     ax, offset resID_byte1 ;~ 01A2:35D3
cs=0x1a2;eip=0x0035d6; 	X(PUSH(ax));	// 6066 push    ax ;~ 01A2:35D6
cs=0x1a2;eip=0x0035d7; 	J(CALLF(hiscore_draw_text,0));	// 6067 call    hiscore_draw_text ;~ 01A2:35D7
cs=0x1a2;eip=0x0035dc; 	T(ADD(sp, 0x0A));	// 6068 add     sp, 0Ah ;~ 01A2:35DC
cs=0x1a2;eip=0x0035df; 	X(ADD(*(dw*)(raddr(ss,bp+var_70)), 0x0A));	// 6069 add     [bp+var_70], 0Ah ;~ 01A2:35DF
cs=0x1a2;eip=0x0035e3; 	T(CMP(gstate_impactspeed, 0));	// 6070 cmp     gState_impactSpeed, 0 ;~ 01A2:35E3
cs=0x1a2;eip=0x0035e8; 	J(JNZ(loc_135ed));	// 6071 jnz     short loc_135ED ;~ 01A2:35E8
cs=0x1a2;eip=0x0035ea; 	J(JMP(loc_1368b));	// 6072 jmp     loc_1368B ;~ 01A2:35EA
loc_135ed:
	// 4649 
cs=0x1a2;eip=0x0035ed; 	T(MOV(ax, offset(dseg,aimp)));	// 6076 mov     ax, offset aImp ; "imp" ;~ 01A2:35ED
cs=0x1a2;eip=0x0035f0; 	X(PUSH(ax));	// 6077 push    ax ;~ 01A2:35F0
cs=0x1a2;eip=0x0035f1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 6078 push    [bp+var_4C] ;~ 01A2:35F1
cs=0x1a2;eip=0x0035f4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 6079 push    [bp+var_4E] ;~ 01A2:35F4
cs=0x1a2;eip=0x0035f7; 	J(CALLF(locate_text_res,0));	// 6080 call    locate_text_res ;~ 01A2:35F7
cs=0x1a2;eip=0x0035fc; 	T(ADD(sp, 6));	// 6081 add     sp, 6 ;~ 01A2:35FC
cs=0x1a2;eip=0x0035ff; 	X(PUSH(dx));	// 6082 push    dx ;~ 01A2:35FF
cs=0x1a2;eip=0x003600; 	X(PUSH(ax));	// 6083 push    ax ;~ 01A2:3600
cs=0x1a2;eip=0x003601; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6084 mov     ax, offset resID_byte1 ;~ 01A2:3601
cs=0x1a2;eip=0x003604; 	X(PUSH(ax));	// 6085 push    ax ;~ 01A2:3604
cs=0x1a2;eip=0x003605; 	J(CALLF(copy_string,0));	// 6086 call    copy_string ;~ 01A2:3605
cs=0x1a2;eip=0x00360a; 	T(ADD(sp, 6));	// 6087 add     sp, 6 ;~ 01A2:360A
cs=0x1a2;eip=0x00360d; 	T(MOV(ax, 3));	// 6088 mov     ax, 3 ;~ 01A2:360D
cs=0x1a2;eip=0x003610; 	X(PUSH(ax));	// 6089 push    ax              ; int ;~ 01A2:3610
cs=0x1a2;eip=0x003611; 	T(SUB(ax, ax));	// 6090 sub     ax, ax ;~ 01A2:3611
cs=0x1a2;eip=0x003613; 	X(PUSH(ax));	// 6091 push    ax              ; int ;~ 01A2:3613
cs=0x1a2;eip=0x003614; 	T(MOV(ax, gstate_impactspeed));	// 6092 mov     ax, gState_impactSpeed ;~ 01A2:3614
cs=0x1a2;eip=0x003617; 	T(MOV(cl, 8));	// 6093 mov     cl, 8 ;~ 01A2:3617
cs=0x1a2;eip=0x003619; 	T(SHR(ax, cl));	// 6094 shr     ax, cl ;~ 01A2:3619
cs=0x1a2;eip=0x00361b; 	X(PUSH(ax));	// 6095 push    ax ;~ 01A2:361B
cs=0x1a2;eip=0x00361c; 	T(ax = bp+var_12);	// 6096 lea     ax, [bp+var_12] ;~ 01A2:361C
cs=0x1a2;eip=0x00361f; 	X(PUSH(ax));	// 6097 push    ax              ; char * ;~ 01A2:361F
cs=0x1a2;eip=0x003620; 	J(CALLF(print_int_as_string_maybe,0));	// 6098 call    print_int_as_string_maybe ;~ 01A2:3620
cs=0x1a2;eip=0x003625; 	T(ADD(sp, 8));	// 6099 add     sp, 8 ;~ 01A2:3625
cs=0x1a2;eip=0x003628; 	T(ax = bp+var_12);	// 6100 lea     ax, [bp+var_12] ;~ 01A2:3628
cs=0x1a2;eip=0x00362b; 	X(PUSH(ax));	// 6101 push    ax ;~ 01A2:362B
cs=0x1a2;eip=0x00362c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6102 mov     ax, offset resID_byte1 ;~ 01A2:362C
cs=0x1a2;eip=0x00362f; 	X(PUSH(ax));	// 6103 push    ax              ; char * ;~ 01A2:362F
cs=0x1a2;eip=0x003630; 	J(CALLF(_strcat,0));	// 6104 call    _strcat ;~ 01A2:3630
cs=0x1a2;eip=0x003635; 	T(ADD(sp, 4));	// 6105 add     sp, 4 ;~ 01A2:3635
cs=0x1a2;eip=0x003638; 	T(MOV(ax, offset(dseg,amph_0)));	// 6106 mov     ax, offset aMph_0 ; "mph" ;~ 01A2:3638
cs=0x1a2;eip=0x00363b; 	X(PUSH(ax));	// 6107 push    ax ;~ 01A2:363B
cs=0x1a2;eip=0x00363c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 6108 push    [bp+var_4C] ;~ 01A2:363C
cs=0x1a2;eip=0x00363f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 6109 push    [bp+var_4E] ;~ 01A2:363F
cs=0x1a2;eip=0x003642; 	J(CALLF(locate_text_res,0));	// 6110 call    locate_text_res ;~ 01A2:3642
cs=0x1a2;eip=0x003647; 	T(ADD(sp, 6));	// 6111 add     sp, 6 ;~ 01A2:3647
cs=0x1a2;eip=0x00364a; 	X(PUSH(dx));	// 6112 push    dx ;~ 01A2:364A
cs=0x1a2;eip=0x00364b; 	X(PUSH(ax));	// 6113 push    ax ;~ 01A2:364B
cs=0x1a2;eip=0x00364c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6114 mov     ax, offset resID_byte1 ;~ 01A2:364C
cs=0x1a2;eip=0x00364f; 	X(PUSH(ax));	// 6115 push    ax              ; char * ;~ 01A2:364F
cs=0x1a2;eip=0x003650; 	J(CALLF(_strlen,0));	// 6116 call    _strlen ;~ 01A2:3650
cs=0x1a2;eip=0x003655; 	T(ADD(sp, 2));	// 6117 add     sp, 2 ;~ 01A2:3655
cs=0x1a2;eip=0x003658; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 6118 add     ax, offset resID_byte1 ;~ 01A2:3658
cs=0x1a2;eip=0x00365b; 	X(PUSH(ax));	// 6119 push    ax ;~ 01A2:365B
cs=0x1a2;eip=0x00365c; 	J(CALLF(copy_string,0));	// 6120 call    copy_string ;~ 01A2:365C
cs=0x1a2;eip=0x003661; 	T(ADD(sp, 6));	// 6121 add     sp, 6 ;~ 01A2:3661
cs=0x1a2;eip=0x003664; 	T(SUB(ax, ax));	// 6122 sub     ax, ax ;~ 01A2:3664
cs=0x1a2;eip=0x003666; 	X(PUSH(ax));	// 6123 push    ax ;~ 01A2:3666
cs=0x1a2;eip=0x003667; 	X(PUSH(dialog_fnt_colour));	// 6124 push    dialog_fnt_colour ;~ 01A2:3667
cs=0x1a2;eip=0x00366b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 6125 push    [bp+var_70] ;~ 01A2:366B
cs=0x1a2;eip=0x00366e; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6126 mov     ax, offset resID_byte1 ;~ 01A2:366E
cs=0x1a2;eip=0x003671; 	X(PUSH(ax));	// 6127 push    ax ;~ 01A2:3671
cs=0x1a2;eip=0x003672; 	J(CALLF(font_op2_alt,0));	// 6128 call    font_op2_alt ;~ 01A2:3672
cs=0x1a2;eip=0x003677; 	T(ADD(sp, 2));	// 6129 add     sp, 2 ;~ 01A2:3677
cs=0x1a2;eip=0x00367a; 	X(PUSH(ax));	// 6130 push    ax ;~ 01A2:367A
cs=0x1a2;eip=0x00367b; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6131 mov     ax, offset resID_byte1 ;~ 01A2:367B
cs=0x1a2;eip=0x00367e; 	X(PUSH(ax));	// 6132 push    ax ;~ 01A2:367E
cs=0x1a2;eip=0x00367f; 	J(CALLF(hiscore_draw_text,0));	// 6133 call    hiscore_draw_text ;~ 01A2:367F
cs=0x1a2;eip=0x003684; 	T(ADD(sp, 0x0A));	// 6134 add     sp, 0Ah ;~ 01A2:3684
cs=0x1a2;eip=0x003687; 	X(ADD(*(dw*)(raddr(ss,bp+var_70)), 0x0A));	// 6135 add     [bp+var_70], 0Ah ;~ 01A2:3687
loc_1368b:
	// 4650 
cs=0x1a2;eip=0x00368b; 	T(MOV(ax, offset(dseg,atop)));	// 6138 mov     ax, offset aTop ; "top" ;~ 01A2:368B
cs=0x1a2;eip=0x00368e; 	X(PUSH(ax));	// 6139 push    ax ;~ 01A2:368E
cs=0x1a2;eip=0x00368f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 6140 push    [bp+var_4C] ;~ 01A2:368F
cs=0x1a2;eip=0x003692; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 6141 push    [bp+var_4E] ;~ 01A2:3692
cs=0x1a2;eip=0x003695; 	J(CALLF(locate_text_res,0));	// 6142 call    locate_text_res ;~ 01A2:3695
cs=0x1a2;eip=0x00369a; 	T(ADD(sp, 6));	// 6143 add     sp, 6 ;~ 01A2:369A
cs=0x1a2;eip=0x00369d; 	X(PUSH(dx));	// 6144 push    dx ;~ 01A2:369D
cs=0x1a2;eip=0x00369e; 	X(PUSH(ax));	// 6145 push    ax ;~ 01A2:369E
cs=0x1a2;eip=0x00369f; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6146 mov     ax, offset resID_byte1 ;~ 01A2:369F
cs=0x1a2;eip=0x0036a2; 	X(PUSH(ax));	// 6147 push    ax ;~ 01A2:36A2
cs=0x1a2;eip=0x0036a3; 	J(CALLF(copy_string,0));	// 6148 call    copy_string ;~ 01A2:36A3
cs=0x1a2;eip=0x0036a8; 	T(ADD(sp, 6));	// 6149 add     sp, 6 ;~ 01A2:36A8
cs=0x1a2;eip=0x0036ab; 	T(MOV(ax, 3));	// 6150 mov     ax, 3 ;~ 01A2:36AB
cs=0x1a2;eip=0x0036ae; 	X(PUSH(ax));	// 6151 push    ax              ; int ;~ 01A2:36AE
cs=0x1a2;eip=0x0036af; 	T(SUB(ax, ax));	// 6152 sub     ax, ax ;~ 01A2:36AF
cs=0x1a2;eip=0x0036b1; 	X(PUSH(ax));	// 6153 push    ax              ; int ;~ 01A2:36B1
cs=0x1a2;eip=0x0036b2; 	T(MOV(ax, gstate_topspeed));	// 6154 mov     ax, gState_topSpeed ;~ 01A2:36B2
cs=0x1a2;eip=0x0036b5; 	T(MOV(cl, 8));	// 6155 mov     cl, 8 ;~ 01A2:36B5
cs=0x1a2;eip=0x0036b7; 	T(SHR(ax, cl));	// 6156 shr     ax, cl ;~ 01A2:36B7
cs=0x1a2;eip=0x0036b9; 	X(PUSH(ax));	// 6157 push    ax ;~ 01A2:36B9
cs=0x1a2;eip=0x0036ba; 	T(ax = bp+var_12);	// 6158 lea     ax, [bp+var_12] ;~ 01A2:36BA
cs=0x1a2;eip=0x0036bd; 	X(PUSH(ax));	// 6159 push    ax              ; char * ;~ 01A2:36BD
cs=0x1a2;eip=0x0036be; 	J(CALLF(print_int_as_string_maybe,0));	// 6160 call    print_int_as_string_maybe ;~ 01A2:36BE
cs=0x1a2;eip=0x0036c3; 	T(ADD(sp, 8));	// 6161 add     sp, 8 ;~ 01A2:36C3
cs=0x1a2;eip=0x0036c6; 	T(ax = bp+var_12);	// 6162 lea     ax, [bp+var_12] ;~ 01A2:36C6
cs=0x1a2;eip=0x0036c9; 	X(PUSH(ax));	// 6163 push    ax ;~ 01A2:36C9
cs=0x1a2;eip=0x0036ca; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6164 mov     ax, offset resID_byte1 ;~ 01A2:36CA
cs=0x1a2;eip=0x0036cd; 	X(PUSH(ax));	// 6165 push    ax              ; char * ;~ 01A2:36CD
cs=0x1a2;eip=0x0036ce; 	J(CALLF(_strcat,0));	// 6166 call    _strcat ;~ 01A2:36CE
cs=0x1a2;eip=0x0036d3; 	T(ADD(sp, 4));	// 6167 add     sp, 4 ;~ 01A2:36D3
cs=0x1a2;eip=0x0036d6; 	T(MOV(ax, offset(dseg,amph_1)));	// 6168 mov     ax, offset aMph_1 ; "mph" ;~ 01A2:36D6
cs=0x1a2;eip=0x0036d9; 	X(PUSH(ax));	// 6169 push    ax ;~ 01A2:36D9
cs=0x1a2;eip=0x0036da; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 6170 push    [bp+var_4C] ;~ 01A2:36DA
cs=0x1a2;eip=0x0036dd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 6171 push    [bp+var_4E] ;~ 01A2:36DD
cs=0x1a2;eip=0x0036e0; 	J(CALLF(locate_text_res,0));	// 6172 call    locate_text_res ;~ 01A2:36E0
cs=0x1a2;eip=0x0036e5; 	T(ADD(sp, 6));	// 6173 add     sp, 6 ;~ 01A2:36E5
cs=0x1a2;eip=0x0036e8; 	X(PUSH(dx));	// 6174 push    dx ;~ 01A2:36E8
cs=0x1a2;eip=0x0036e9; 	X(PUSH(ax));	// 6175 push    ax ;~ 01A2:36E9
cs=0x1a2;eip=0x0036ea; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6176 mov     ax, offset resID_byte1 ;~ 01A2:36EA
cs=0x1a2;eip=0x0036ed; 	X(PUSH(ax));	// 6177 push    ax              ; char * ;~ 01A2:36ED
cs=0x1a2;eip=0x0036ee; 	J(CALLF(_strlen,0));	// 6178 call    _strlen ;~ 01A2:36EE
cs=0x1a2;eip=0x0036f3; 	T(ADD(sp, 2));	// 6179 add     sp, 2 ;~ 01A2:36F3
cs=0x1a2;eip=0x0036f6; 	T(ADD(ax, offset(dseg,resid_byte1)));	// 6180 add     ax, offset resID_byte1 ;~ 01A2:36F6
cs=0x1a2;eip=0x0036f9; 	X(PUSH(ax));	// 6181 push    ax ;~ 01A2:36F9
cs=0x1a2;eip=0x0036fa; 	J(CALLF(copy_string,0));	// 6182 call    copy_string ;~ 01A2:36FA
cs=0x1a2;eip=0x0036ff; 	T(ADD(sp, 6));	// 6183 add     sp, 6 ;~ 01A2:36FF
cs=0x1a2;eip=0x003702; 	T(SUB(ax, ax));	// 6184 sub     ax, ax ;~ 01A2:3702
cs=0x1a2;eip=0x003704; 	X(PUSH(ax));	// 6185 push    ax ;~ 01A2:3704
cs=0x1a2;eip=0x003705; 	X(PUSH(dialog_fnt_colour));	// 6186 push    dialog_fnt_colour ;~ 01A2:3705
cs=0x1a2;eip=0x003709; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 6187 push    [bp+var_70] ;~ 01A2:3709
cs=0x1a2;eip=0x00370c; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6188 mov     ax, offset resID_byte1 ;~ 01A2:370C
cs=0x1a2;eip=0x00370f; 	X(PUSH(ax));	// 6189 push    ax ;~ 01A2:370F
cs=0x1a2;eip=0x003710; 	J(CALLF(font_op2_alt,0));	// 6190 call    font_op2_alt ;~ 01A2:3710
cs=0x1a2;eip=0x003715; 	T(ADD(sp, 2));	// 6191 add     sp, 2 ;~ 01A2:3715
cs=0x1a2;eip=0x003718; 	X(PUSH(ax));	// 6192 push    ax ;~ 01A2:3718
cs=0x1a2;eip=0x003719; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6193 mov     ax, offset resID_byte1 ;~ 01A2:3719
cs=0x1a2;eip=0x00371c; 	X(PUSH(ax));	// 6194 push    ax ;~ 01A2:371C
cs=0x1a2;eip=0x00371d; 	J(CALLF(hiscore_draw_text,0));	// 6195 call    hiscore_draw_text ;~ 01A2:371D
cs=0x1a2;eip=0x003722; 	T(ADD(sp, 0x0A));	// 6196 add     sp, 0Ah ;~ 01A2:3722
cs=0x1a2;eip=0x003725; 	X(ADD(*(dw*)(raddr(ss,bp+var_70)), 0x0A));	// 6197 add     [bp+var_70], 0Ah ;~ 01A2:3725
cs=0x1a2;eip=0x003729; 	T(CMP(gstate_jumpcount, 0));	// 6198 cmp     gState_jumpCount, 0 ;~ 01A2:3729
cs=0x1a2;eip=0x00372e; 	J(JZ(loc_1379a));	// 6199 jz      short loc_1379A ;~ 01A2:372E
cs=0x1a2;eip=0x003730; 	T(MOV(ax, offset(dseg,ajum)));	// 6200 mov     ax, offset aJum ; "jum" ;~ 01A2:3730
cs=0x1a2;eip=0x003733; 	X(PUSH(ax));	// 6201 push    ax ;~ 01A2:3733
cs=0x1a2;eip=0x003734; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 6202 push    [bp+var_4C] ;~ 01A2:3734
cs=0x1a2;eip=0x003737; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 6203 push    [bp+var_4E] ;~ 01A2:3737
cs=0x1a2;eip=0x00373a; 	J(CALLF(locate_text_res,0));	// 6204 call    locate_text_res ;~ 01A2:373A
cs=0x1a2;eip=0x00373f; 	T(ADD(sp, 6));	// 6205 add     sp, 6 ;~ 01A2:373F
cs=0x1a2;eip=0x003742; 	X(PUSH(dx));	// 6206 push    dx ;~ 01A2:3742
cs=0x1a2;eip=0x003743; 	X(PUSH(ax));	// 6207 push    ax ;~ 01A2:3743
cs=0x1a2;eip=0x003744; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6208 mov     ax, offset resID_byte1 ;~ 01A2:3744
cs=0x1a2;eip=0x003747; 	X(PUSH(ax));	// 6209 push    ax ;~ 01A2:3747
cs=0x1a2;eip=0x003748; 	J(CALLF(copy_string,0));	// 6210 call    copy_string ;~ 01A2:3748
cs=0x1a2;eip=0x00374d; 	T(ADD(sp, 6));	// 6211 add     sp, 6 ;~ 01A2:374D
cs=0x1a2;eip=0x003750; 	T(MOV(ax, 3));	// 6212 mov     ax, 3 ;~ 01A2:3750
cs=0x1a2;eip=0x003753; 	X(PUSH(ax));	// 6213 push    ax              ; int ;~ 01A2:3753
cs=0x1a2;eip=0x003754; 	T(SUB(ax, ax));	// 6214 sub     ax, ax ;~ 01A2:3754
cs=0x1a2;eip=0x003756; 	X(PUSH(ax));	// 6215 push    ax              ; int ;~ 01A2:3756
cs=0x1a2;eip=0x003757; 	X(PUSH(gstate_jumpcount));	// 6216 push    gState_jumpCount ;~ 01A2:3757
cs=0x1a2;eip=0x00375b; 	T(ax = bp+var_12);	// 6217 lea     ax, [bp+var_12] ;~ 01A2:375B
cs=0x1a2;eip=0x00375e; 	X(PUSH(ax));	// 6218 push    ax              ; char * ;~ 01A2:375E
cs=0x1a2;eip=0x00375f; 	J(CALLF(print_int_as_string_maybe,0));	// 6219 call    print_int_as_string_maybe ;~ 01A2:375F
cs=0x1a2;eip=0x003764; 	T(ADD(sp, 8));	// 6220 add     sp, 8 ;~ 01A2:3764
cs=0x1a2;eip=0x003767; 	T(ax = bp+var_12);	// 6221 lea     ax, [bp+var_12] ;~ 01A2:3767
cs=0x1a2;eip=0x00376a; 	X(PUSH(ax));	// 6222 push    ax ;~ 01A2:376A
cs=0x1a2;eip=0x00376b; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6223 mov     ax, offset resID_byte1 ;~ 01A2:376B
cs=0x1a2;eip=0x00376e; 	X(PUSH(ax));	// 6224 push    ax              ; char * ;~ 01A2:376E
cs=0x1a2;eip=0x00376f; 	J(CALLF(_strcat,0));	// 6225 call    _strcat ;~ 01A2:376F
cs=0x1a2;eip=0x003774; 	T(ADD(sp, 4));	// 6226 add     sp, 4 ;~ 01A2:3774
cs=0x1a2;eip=0x003777; 	T(SUB(ax, ax));	// 6227 sub     ax, ax ;~ 01A2:3777
cs=0x1a2;eip=0x003779; 	X(PUSH(ax));	// 6228 push    ax ;~ 01A2:3779
cs=0x1a2;eip=0x00377a; 	X(PUSH(dialog_fnt_colour));	// 6229 push    dialog_fnt_colour ;~ 01A2:377A
cs=0x1a2;eip=0x00377e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 6230 push    [bp+var_70] ;~ 01A2:377E
cs=0x1a2;eip=0x003781; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6231 mov     ax, offset resID_byte1 ;~ 01A2:3781
cs=0x1a2;eip=0x003784; 	X(PUSH(ax));	// 6232 push    ax ;~ 01A2:3784
cs=0x1a2;eip=0x003785; 	J(CALLF(font_op2_alt,0));	// 6233 call    font_op2_alt ;~ 01A2:3785
cs=0x1a2;eip=0x00378a; 	T(ADD(sp, 2));	// 6234 add     sp, 2 ;~ 01A2:378A
cs=0x1a2;eip=0x00378d; 	X(PUSH(ax));	// 6235 push    ax ;~ 01A2:378D
cs=0x1a2;eip=0x00378e; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6236 mov     ax, offset resID_byte1 ;~ 01A2:378E
cs=0x1a2;eip=0x003791; 	X(PUSH(ax));	// 6237 push    ax ;~ 01A2:3791
cs=0x1a2;eip=0x003792; 	J(CALLF(hiscore_draw_text,0));	// 6238 call    hiscore_draw_text ;~ 01A2:3792
cs=0x1a2;eip=0x003797; 	T(ADD(sp, 0x0A));	// 6239 add     sp, 0Ah ;~ 01A2:3797
loc_1379a:
	// 4651 
cs=0x1a2;eip=0x00379a; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 6242 cmp     [bp+var_16], 0 ;~ 01A2:379A
cs=0x1a2;eip=0x00379e; 	J(JNZ(loc_137a3));	// 6243 jnz     short loc_137A3 ;~ 01A2:379E
cs=0x1a2;eip=0x0037a0; 	J(JMP(loc_138ff));	// 6244 jmp     loc_138FF ;~ 01A2:37A0
loc_137a3:
	// 4652 
cs=0x1a2;eip=0x0037a3; 	T(TEST(byte_43966, 4));	// 6248 test    byte_43966, 4 ;~ 01A2:37A3
cs=0x1a2;eip=0x0037a8; 	J(JZ(loc_137ad));	// 6249 jz      short loc_137AD ;~ 01A2:37A8
cs=0x1a2;eip=0x0037aa; 	J(JMP(loc_1384b));	// 6250 jmp     loc_1384B ;~ 01A2:37AA
loc_137ad:
	// 4653 
cs=0x1a2;eip=0x0037ad; 	T(MOV(ax, word_40d40));	// 6254 mov     ax, word_40D40 ;~ 01A2:37AD
cs=0x1a2;eip=0x0037b0; 	X(MOV(word_40d3a, ax));	// 6255 mov     word_40D3A, ax ;~ 01A2:37B0
cs=0x1a2;eip=0x0037b3; 	T(MOV(ax, end_hiscore_random));	// 6256 mov     ax, end_hiscore_random ;~ 01A2:37B3
cs=0x1a2;eip=0x0037b6; 	X(MOV(word_40d3c, ax));	// 6257 mov     word_40D3C, ax ;~ 01A2:37B6
cs=0x1a2;eip=0x0037b9; 	T(MOV(ax, word_40d44));	// 6258 mov     ax, word_40D44 ;~ 01A2:37B9
cs=0x1a2;eip=0x0037bc; 	X(MOV(word_40d3e, ax));	// 6259 mov     word_40D3E, ax ;~ 01A2:37BC
cs=0x1a2;eip=0x0037bf; 	J(CALLF(get_super_random,0));	// 6260 call    get_super_random ;~ 01A2:37BF
cs=0x1a2;eip=0x0037c4; 	T(CWD);	// 6261 cwd ;~ 01A2:37C4
cs=0x1a2;eip=0x0037c5; 	T(MOV(cx, 3));	// 6262 mov     cx, 3 ;~ 01A2:37C5
cs=0x1a2;eip=0x0037c8; 	T(IDIV2(cx));	// 6263 idiv    cx ;~ 01A2:37C8
cs=0x1a2;eip=0x0037ca; 	X(MOV(word_40d40, dx));	// 6264 mov     word_40D40, dx ;~ 01A2:37CA
cs=0x1a2;eip=0x0037ce; 	T(MOV(ax, word_40d3a));	// 6265 mov     ax, word_40D3A ;~ 01A2:37CE
cs=0x1a2;eip=0x0037d1; 	T(CMP(dx, ax));	// 6266 cmp     dx, ax ;~ 01A2:37D1
cs=0x1a2;eip=0x0037d3; 	J(JNZ(loc_137e0));	// 6267 jnz     short loc_137E0 ;~ 01A2:37D3
cs=0x1a2;eip=0x0037d5; 	T(MOV(bx, dx));	// 6268 mov     bx, dx ;~ 01A2:37D5
cs=0x1a2;eip=0x0037d7; 	T(SHL(bx, 1));	// 6269 shl     bx, 1 ;~ 01A2:37D7
cs=0x1a2;eip=0x0037d9; 	T(MOV(ax, *(dw*)(((db*)&word_3bcde)+bx)));	// 6270 mov     ax, word_3BCDE[bx] ;~ 01A2:37D9
cs=0x1a2;eip=0x0037dd; 	X(MOV(word_40d40, ax));	// 6271 mov     word_40D40, ax ;~ 01A2:37DD
loc_137e0:
	// 4654 
cs=0x1a2;eip=0x0037e0; 	J(CALLF(get_super_random,0));	// 6274 call    get_super_random ;~ 01A2:37E0
cs=0x1a2;eip=0x0037e5; 	T(CWD);	// 6275 cwd ;~ 01A2:37E5
cs=0x1a2;eip=0x0037e6; 	T(MOV(cx, 3));	// 6276 mov     cx, 3 ;~ 01A2:37E6
cs=0x1a2;eip=0x0037e9; 	T(IDIV2(cx));	// 6277 idiv    cx ;~ 01A2:37E9
cs=0x1a2;eip=0x0037eb; 	X(MOV(word_40d44, dx));	// 6278 mov     word_40D44, dx ;~ 01A2:37EB
cs=0x1a2;eip=0x0037ef; 	T(MOV(ax, word_40d3e));	// 6279 mov     ax, word_40D3E ;~ 01A2:37EF
cs=0x1a2;eip=0x0037f2; 	T(CMP(dx, ax));	// 6280 cmp     dx, ax ;~ 01A2:37F2
cs=0x1a2;eip=0x0037f4; 	J(JNZ(loc_13801));	// 6281 jnz     short loc_13801 ;~ 01A2:37F4
cs=0x1a2;eip=0x0037f6; 	T(MOV(bx, dx));	// 6282 mov     bx, dx ;~ 01A2:37F6
cs=0x1a2;eip=0x0037f8; 	T(SHL(bx, 1));	// 6283 shl     bx, 1 ;~ 01A2:37F8
cs=0x1a2;eip=0x0037fa; 	T(MOV(ax, *(dw*)(((db*)&word_3bcde)+bx)));	// 6284 mov     ax, word_3BCDE[bx] ;~ 01A2:37FA
cs=0x1a2;eip=0x0037fe; 	X(MOV(word_40d44, ax));	// 6285 mov     word_40D44, ax ;~ 01A2:37FE
loc_13801:
	// 4655 
cs=0x1a2;eip=0x003801; 	T(CMP(*(raddr(ss,bp+var_18)), 1));	// 6288 cmp     [bp+var_18], 1 ;~ 01A2:3801
cs=0x1a2;eip=0x003805; 	J(JNZ(loc_1382a));	// 6289 jnz     short loc_1382A ;~ 01A2:3805
cs=0x1a2;eip=0x003807; 	T(CMP(gstate_total_finish_time, 0));	// 6290 cmp     gState_total_finish_time, 0 ;~ 01A2:3807
cs=0x1a2;eip=0x00380c; 	J(JZ(loc_1381e));	// 6291 jz      short loc_1381E ;~ 01A2:380C
cs=0x1a2;eip=0x00380e; 	J(CALLF(get_super_random,0));	// 6292 call    get_super_random ;~ 01A2:380E
cs=0x1a2;eip=0x003813; 	T(CWD);	// 6293 cwd ;~ 01A2:3813
cs=0x1a2;eip=0x003814; 	T(MOV(cx, 2));	// 6294 mov     cx, 2 ;~ 01A2:3814
cs=0x1a2;eip=0x003817; 	T(IDIV2(cx));	// 6295 idiv    cx ;~ 01A2:3817
cs=0x1a2;eip=0x003819; 	T(ADD(dx, cx));	// 6296 add     dx, cx ;~ 01A2:3819
cs=0x1a2;eip=0x00381b; 	J(JMP(loc_13835));	// 6297 jmp     short loc_13835 ;~ 01A2:381B
loc_1381e:
	// 4656 
cs=0x1a2;eip=0x00381e; 	J(CALLF(get_super_random,0));	// 6302 call    get_super_random ;~ 01A2:381E
cs=0x1a2;eip=0x003823; 	T(CWD);	// 6303 cwd ;~ 01A2:3823
cs=0x1a2;eip=0x003824; 	T(MOV(cx, 2));	// 6304 mov     cx, 2 ;~ 01A2:3824
cs=0x1a2;eip=0x003827; 	J(JMP(loc_13833));	// 6305 jmp     short loc_13833 ;~ 01A2:3827
loc_1382a:
	// 4657 
cs=0x1a2;eip=0x00382a; 	J(CALLF(get_super_random,0));	// 6310 call    get_super_random ;~ 01A2:382A
cs=0x1a2;eip=0x00382f; 	T(CWD);	// 6311 cwd ;~ 01A2:382F
cs=0x1a2;eip=0x003830; 	T(MOV(cx, 4));	// 6312 mov     cx, 4 ;~ 01A2:3830
loc_13833:
	// 4658 
cs=0x1a2;eip=0x003833; 	T(IDIV2(cx));	// 6315 idiv    cx ;~ 01A2:3833
loc_13835:
	// 4659 
cs=0x1a2;eip=0x003835; 	X(MOV(end_hiscore_random, dx));	// 6318 mov     end_hiscore_random, dx ;~ 01A2:3835
cs=0x1a2;eip=0x003839; 	T(MOV(ax, word_40d3c));	// 6319 mov     ax, word_40D3C ;~ 01A2:3839
cs=0x1a2;eip=0x00383c; 	T(CMP(dx, ax));	// 6320 cmp     dx, ax ;~ 01A2:383C
cs=0x1a2;eip=0x00383e; 	J(JNZ(loc_1384b));	// 6321 jnz     short loc_1384B ;~ 01A2:383E
cs=0x1a2;eip=0x003840; 	T(MOV(bx, dx));	// 6322 mov     bx, dx ;~ 01A2:3840
cs=0x1a2;eip=0x003842; 	T(SHL(bx, 1));	// 6323 shl     bx, 1 ;~ 01A2:3842
cs=0x1a2;eip=0x003844; 	T(MOV(ax, *(dw*)(((db*)&word_3bce4)+bx)));	// 6324 mov     ax, word_3BCE4[bx] ;~ 01A2:3844
cs=0x1a2;eip=0x003848; 	X(MOV(end_hiscore_random, ax));	// 6325 mov     end_hiscore_random, ax ;~ 01A2:3848
loc_1384b:
	// 4660 
cs=0x1a2;eip=0x00384b; 	T(CMP(*(raddr(ss,bp+var_18)), 1));	// 6329 cmp     [bp+var_18], 1 ;~ 01A2:384B
cs=0x1a2;eip=0x00384f; 	J(JNZ(loc_138b6));	// 6330 jnz     short loc_138B6 ;~ 01A2:384F
cs=0x1a2;eip=0x003851; 	T(MOV(al, byte_449aa));	// 6331 mov     al, byte_449AA ;~ 01A2:3851
cs=0x1a2;eip=0x003854; 	T(ADD(al, 0x30));	// 6332 add     al, 30h ; '0' ;~ 01A2:3854
cs=0x1a2;eip=0x003856; 	X(MOV(byte_3bd17, al));	// 6333 mov     byte_3BD17, al ;~ 01A2:3856
cs=0x1a2;eip=0x003859; 	T(MOV(ax, offset(dseg,aopp2win)));	// 6334 mov     ax, offset aOpp2win ;~ 01A2:3859
cs=0x1a2;eip=0x00385c; 	X(PUSH(ax));	// 6335 push    ax              ; char * ;~ 01A2:385C
cs=0x1a2;eip=0x00385d; 	T(MOV(ax, 3));	// 6336 mov     ax, 3 ;~ 01A2:385D
cs=0x1a2;eip=0x003860; 	X(PUSH(ax));	// 6337 push    ax              ; int ;~ 01A2:3860
cs=0x1a2;eip=0x003861; 	J(CALLF(file_load_resource,0));	// 6338 call    file_load_resource ;~ 01A2:3861
cs=0x1a2;eip=0x003866; 	T(ADD(sp, 4));	// 6339 add     sp, 4 ;~ 01A2:3866
cs=0x1a2;eip=0x003869; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 6340 mov     [bp+var_1C], ax ;~ 01A2:3869
cs=0x1a2;eip=0x00386c; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), dx));	// 6341 mov     [bp+var_1A], dx ;~ 01A2:386C
cs=0x1a2;eip=0x00386f; 	T(MOV(ax, offset(dseg,awinn)));	// 6342 mov     ax, offset aWinn ; "winn" ;~ 01A2:386F
cs=0x1a2;eip=0x003872; 	X(PUSH(ax));	// 6343 push    ax ;~ 01A2:3872
cs=0x1a2;eip=0x003873; 	X(PUSH(*(dw*)(raddr(ss,bp+var_66))));	// 6344 push    [bp+var_66] ;~ 01A2:3873
cs=0x1a2;eip=0x003876; 	X(PUSH(*(dw*)(raddr(ss,bp+var_68))));	// 6345 push    [bp+var_68] ;~ 01A2:3876
cs=0x1a2;eip=0x003879; 	J(CALLF(locate_shape_alt,0));	// 6346 call    locate_shape_alt ;~ 01A2:3879
cs=0x1a2;eip=0x00387e; 	T(ADD(sp, 6));	// 6347 add     sp, 6 ;~ 01A2:387E
cs=0x1a2;eip=0x003881; 	X(MOV(*(dw*)(raddr(ss,bp+var_5a)), ax));	// 6348 mov     [bp+var_5A], ax ;~ 01A2:3881
cs=0x1a2;eip=0x003884; 	X(MOV(*(dw*)(raddr(ss,bp+var_58)), dx));	// 6349 mov     [bp+var_58], dx ;~ 01A2:3884
cs=0x1a2;eip=0x003887; 	T(CMP(gstate_total_finish_time, 0));	// 6350 cmp     gState_total_finish_time, 0 ;~ 01A2:3887
cs=0x1a2;eip=0x00388c; 	J(JZ(loc_138a0));	// 6351 jz      short loc_138A0 ;~ 01A2:388C
cs=0x1a2;eip=0x00388e; 	J(CALLF(get_kevinrandom,0));	// 6352 call    get_kevinrandom ;~ 01A2:388E
cs=0x1a2;eip=0x003893; 	T(ADD(ax, gstate_frame));	// 6353 add     ax, gState_frame ;~ 01A2:3893
cs=0x1a2;eip=0x003897; 	T(AND(ax, 1));	// 6354 and     ax, 1 ;~ 01A2:3897
cs=0x1a2;eip=0x00389a; 	T(ADD(ax, 2));	// 6355 add     ax, 2 ;~ 01A2:389A
cs=0x1a2;eip=0x00389d; 	J(JMP(loc_138ac));	// 6356 jmp     short loc_138AC ;~ 01A2:389D
loc_138a0:
	// 4661 
cs=0x1a2;eip=0x0038a0; 	J(CALLF(get_kevinrandom,0));	// 6361 call    get_kevinrandom ;~ 01A2:38A0
cs=0x1a2;eip=0x0038a5; 	T(ADD(ax, gstate_frame));	// 6362 add     ax, gState_frame ;~ 01A2:38A5
cs=0x1a2;eip=0x0038a9; 	T(AND(ax, 1));	// 6363 and     ax, 1 ;~ 01A2:38A9
loc_138ac:
	// 4662 
cs=0x1a2;eip=0x0038ac; 	X(MOV(end_hiscore_random, ax));	// 6366 mov     end_hiscore_random, ax ;~ 01A2:38AC
cs=0x1a2;eip=0x0038af; 	X(MOV(*(raddr(ss,bp+var_6a)), 0x76));	// 6367 mov     [bp+var_6A], 76h ; 'v' ;~ 01A2:38AF
cs=0x1a2;eip=0x0038b3; 	J(JMP(loc_138ff));	// 6368 jmp     short loc_138FF ;~ 01A2:38B3
loc_138b6:
	// 4663 
cs=0x1a2;eip=0x0038b6; 	T(MOV(al, byte_449aa));	// 6373 mov     al, byte_449AA ;~ 01A2:38B6
cs=0x1a2;eip=0x0038b9; 	T(ADD(al, 0x30));	// 6374 add     al, 30h ; '0' ;~ 01A2:38B9
cs=0x1a2;eip=0x0038bb; 	X(MOV(byte_3bd1f, al));	// 6375 mov     byte_3BD1F, al ;~ 01A2:38BB
cs=0x1a2;eip=0x0038be; 	T(MOV(ax, offset(dseg,aopp2lose)));	// 6376 mov     ax, offset aOpp2lose ;~ 01A2:38BE
cs=0x1a2;eip=0x0038c1; 	X(PUSH(ax));	// 6377 push    ax              ; char * ;~ 01A2:38C1
cs=0x1a2;eip=0x0038c2; 	T(MOV(ax, 3));	// 6378 mov     ax, 3 ;~ 01A2:38C2
cs=0x1a2;eip=0x0038c5; 	X(PUSH(ax));	// 6379 push    ax              ; int ;~ 01A2:38C5
cs=0x1a2;eip=0x0038c6; 	J(CALLF(file_load_resource,0));	// 6380 call    file_load_resource ;~ 01A2:38C6
cs=0x1a2;eip=0x0038cb; 	T(ADD(sp, 4));	// 6381 add     sp, 4 ;~ 01A2:38CB
cs=0x1a2;eip=0x0038ce; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 6382 mov     [bp+var_1C], ax ;~ 01A2:38CE
cs=0x1a2;eip=0x0038d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), dx));	// 6383 mov     [bp+var_1A], dx ;~ 01A2:38D1
cs=0x1a2;eip=0x0038d4; 	T(MOV(ax, offset(dseg,alose_0)));	// 6384 mov     ax, offset aLose_0 ; "lose" ;~ 01A2:38D4
cs=0x1a2;eip=0x0038d7; 	X(PUSH(ax));	// 6385 push    ax ;~ 01A2:38D7
cs=0x1a2;eip=0x0038d8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_66))));	// 6386 push    [bp+var_66] ;~ 01A2:38D8
cs=0x1a2;eip=0x0038db; 	X(PUSH(*(dw*)(raddr(ss,bp+var_68))));	// 6387 push    [bp+var_68] ;~ 01A2:38DB
cs=0x1a2;eip=0x0038de; 	J(CALLF(locate_shape_alt,0));	// 6388 call    locate_shape_alt ;~ 01A2:38DE
cs=0x1a2;eip=0x0038e3; 	T(ADD(sp, 6));	// 6389 add     sp, 6 ;~ 01A2:38E3
cs=0x1a2;eip=0x0038e6; 	X(MOV(*(dw*)(raddr(ss,bp+var_5a)), ax));	// 6390 mov     [bp+var_5A], ax ;~ 01A2:38E6
cs=0x1a2;eip=0x0038e9; 	X(MOV(*(dw*)(raddr(ss,bp+var_58)), dx));	// 6391 mov     [bp+var_58], dx ;~ 01A2:38E9
cs=0x1a2;eip=0x0038ec; 	J(CALLF(get_kevinrandom,0));	// 6392 call    get_kevinrandom ;~ 01A2:38EC
cs=0x1a2;eip=0x0038f1; 	T(ADD(ax, gstate_frame));	// 6393 add     ax, gState_frame ;~ 01A2:38F1
cs=0x1a2;eip=0x0038f5; 	T(AND(ax, 3));	// 6394 and     ax, 3 ;~ 01A2:38F5
cs=0x1a2;eip=0x0038f8; 	X(MOV(end_hiscore_random, ax));	// 6395 mov     end_hiscore_random, ax ;~ 01A2:38F8
cs=0x1a2;eip=0x0038fb; 	X(MOV(*(raddr(ss,bp+var_6a)), 0x64));	// 6396 mov     [bp+var_6A], 64h ; 'd' ;~ 01A2:38FB
loc_138ff:
	// 4664 
cs=0x1a2;eip=0x0038ff; 	X(MOV(*(raddr(ss,bp+var_6e)), 0));	// 6400 mov     [bp+var_6E], 0 ;~ 01A2:38FF
cs=0x1a2;eip=0x003903; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 6401 mov     ax, offset g_path_buf ;~ 01A2:3903
cs=0x1a2;eip=0x003906; 	X(PUSH(ax));	// 6402 push    ax              ; char * ;~ 01A2:3906
cs=0x1a2;eip=0x003907; 	T(MOV(ax, offset(dseg,a_trk_5)));	// 6403 mov     ax, offset a_trk_5 ; ".trk" ;~ 01A2:3907
cs=0x1a2;eip=0x00390a; 	X(PUSH(ax));	// 6404 push    ax              ; int ;~ 01A2:390A
cs=0x1a2;eip=0x00390b; 	T(MOV(ax, offset(dseg,byte_449b1)));	// 6405 mov     ax, offset byte_449B1 ;~ 01A2:390B
cs=0x1a2;eip=0x00390e; 	X(PUSH(ax));	// 6406 push    ax ;~ 01A2:390E
cs=0x1a2;eip=0x00390f; 	T(MOV(ax, offset(dseg,byte_3b80c)));	// 6407 mov     ax, offset byte_3B80C ;~ 01A2:390F
cs=0x1a2;eip=0x003912; 	X(PUSH(ax));	// 6408 push    ax              ; char * ;~ 01A2:3912
cs=0x1a2;eip=0x003913; 	J(CALLF(file_build_path,0));	// 6409 call    file_build_path ;~ 01A2:3913
cs=0x1a2;eip=0x003918; 	T(ADD(sp, 8));	// 6410 add     sp, 8 ;~ 01A2:3918
cs=0x1a2;eip=0x00391b; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 6411 mov     ax, offset g_path_buf ;~ 01A2:391B
cs=0x1a2;eip=0x00391e; 	X(PUSH(ax));	// 6412 push    ax              ; char * ;~ 01A2:391E
cs=0x1a2;eip=0x00391f; 	T(MOV(ax, 1));	// 6413 mov     ax, 1 ;~ 01A2:391F
cs=0x1a2;eip=0x003922; 	X(PUSH(ax));	// 6414 push    ax              ; int ;~ 01A2:3922
cs=0x1a2;eip=0x003923; 	J(CALLF(file_load_resource,0));	// 6415 call    file_load_resource ;~ 01A2:3923
cs=0x1a2;eip=0x003928; 	T(ADD(sp, 4));	// 6416 add     sp, 4 ;~ 01A2:3928
cs=0x1a2;eip=0x00392b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4a))), ax));	// 6417 mov     word ptr [bp+var_4A], ax ;~ 01A2:392B
cs=0x1a2;eip=0x00392e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4a+2))), dx));	// 6418 mov     word ptr [bp+var_4A+2], dx ;~ 01A2:392E
cs=0x1a2;eip=0x003931; 	T(OR(ax, dx));	// 6419 or      ax, dx ;~ 01A2:3931
cs=0x1a2;eip=0x003933; 	J(JNZ(loc_1397f));	// 6420 jnz     short loc_1397F ;~ 01A2:3933
cs=0x1a2;eip=0x003935; 	T(SUB(ax, ax));	// 6421 sub     ax, ax ;~ 01A2:3935
cs=0x1a2;eip=0x003937; 	X(PUSH(ax));	// 6422 push    ax ;~ 01A2:3937
cs=0x1a2;eip=0x003938; 	X(PUSH(ax));	// 6423 push    ax ;~ 01A2:3938
cs=0x1a2;eip=0x003939; 	X(PUSH(dialogarg2));	// 6424 push    dialogarg2 ;~ 01A2:3939
cs=0x1a2;eip=0x00393d; 	T(MOV(ax, 0x0FFFF));	// 6425 mov     ax, 0FFFFh ;~ 01A2:393D
cs=0x1a2;eip=0x003940; 	X(PUSH(ax));	// 6426 push    ax ;~ 01A2:3940
cs=0x1a2;eip=0x003941; 	X(PUSH(ax));	// 6427 push    ax ;~ 01A2:3941
cs=0x1a2;eip=0x003942; 	T(MOV(ax, offset(dseg,aihd)));	// 6428 mov     ax, offset aIhd ; "ihd" ;~ 01A2:3942
cs=0x1a2;eip=0x003945; 	X(PUSH(ax));	// 6429 push    ax ;~ 01A2:3945
cs=0x1a2;eip=0x003946; 	X(PUSH(word_44cee));	// 6430 push    word_44CEE ;~ 01A2:3946
cs=0x1a2;eip=0x00394a; 	X(PUSH(mainresptr));	// 6431 push    mainresptr ;~ 01A2:394A
cs=0x1a2;eip=0x00394e; 	J(CALLF(locate_text_res,0));	// 6432 call    locate_text_res ;~ 01A2:394E
cs=0x1a2;eip=0x003953; 	T(ADD(sp, 6));	// 6433 add     sp, 6 ;~ 01A2:3953
cs=0x1a2;eip=0x003956; 	X(PUSH(dx));	// 6434 push    dx ;~ 01A2:3956
cs=0x1a2;eip=0x003957; 	X(PUSH(ax));	// 6435 push    ax ;~ 01A2:3957
cs=0x1a2;eip=0x003958; 	T(MOV(ax, 1));	// 6436 mov     ax, 1 ;~ 01A2:3958
cs=0x1a2;eip=0x00395b; 	X(PUSH(ax));	// 6437 push    ax ;~ 01A2:395B
cs=0x1a2;eip=0x00395c; 	X(PUSH(ax));	// 6438 push    ax ;~ 01A2:395C
cs=0x1a2;eip=0x00395d; 	J(CALLF(show_dialog,0));	// 6439 call    show_dialog ;~ 01A2:395D
cs=0x1a2;eip=0x003962; 	T(ADD(sp, 0x12));	// 6440 add     sp, 12h ;~ 01A2:3962
cs=0x1a2;eip=0x003965; 	T(OR(ax, ax));	// 6441 or      ax, ax ;~ 01A2:3965
cs=0x1a2;eip=0x003967; 	J(JZ(loc_1397f));	// 6442 jz      short loc_1397F ;~ 01A2:3967
cs=0x1a2;eip=0x003969; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 6443 mov     ax, offset g_path_buf ;~ 01A2:3969
cs=0x1a2;eip=0x00396c; 	X(PUSH(ax));	// 6444 push    ax              ; char * ;~ 01A2:396C
cs=0x1a2;eip=0x00396d; 	T(MOV(ax, 1));	// 6445 mov     ax, 1 ;~ 01A2:396D
cs=0x1a2;eip=0x003970; 	X(PUSH(ax));	// 6446 push    ax              ; int ;~ 01A2:3970
cs=0x1a2;eip=0x003971; 	J(CALLF(file_load_resource,0));	// 6447 call    file_load_resource ;~ 01A2:3971
cs=0x1a2;eip=0x003976; 	T(ADD(sp, 4));	// 6448 add     sp, 4 ;~ 01A2:3976
cs=0x1a2;eip=0x003979; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4a))), ax));	// 6449 mov     word ptr [bp+var_4A], ax ;~ 01A2:3979
cs=0x1a2;eip=0x00397c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4a+2))), dx));	// 6450 mov     word ptr [bp+var_4A+2], dx ;~ 01A2:397C
loc_1397f:
	// 4665 
cs=0x1a2;eip=0x00397f; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4a)))));	// 6454 mov     ax, word ptr [bp+var_4A] ;~ 01A2:397F
cs=0x1a2;eip=0x003982; 	T(OR(ax, *(dw*)((dw*)(raddr(ss,bp+var_4a+2)))));	// 6455 or      ax, word ptr [bp+var_4A+2] ;~ 01A2:3982
cs=0x1a2;eip=0x003985; 	J(JZ(loc_139b6));	// 6456 jz      short loc_139B6 ;~ 01A2:3985
cs=0x1a2;eip=0x003987; 	T(SUB(di, di));	// 6457 sub     di, di ;~ 01A2:3987
cs=0x1a2;eip=0x003989; 	J(JMP(loc_1398d));	// 6458 jmp     short loc_1398D ;~ 01A2:3989
loc_1398c:
	// 4666 
cs=0x1a2;eip=0x00398c; 	T(INC(di));	// 6463 inc     di ;~ 01A2:398C
loc_1398d:
	// 4667 
cs=0x1a2;eip=0x00398d; 	T(CMP(di, 0x385));	// 6466 cmp     di, 385h ;~ 01A2:398D
cs=0x1a2;eip=0x003991; 	J(JGE(loc_139a6));	// 6467 jge     short loc_139A6 ;~ 01A2:3991
cs=0x1a2;eip=0x003993; 	T(LES(bx, td14_elem_map_main));	// 6468 les     bx, td14_elem_map_main ;~ 01A2:3993
cs=0x1a2;eip=0x003997; 	T(MOV(al, *(raddr(es,bx+di))));	// 6469 mov     al, es:[bx+di] ;~ 01A2:3997
cs=0x1a2;eip=0x00399a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4a))));	// 6470 les     bx, [bp+var_4A] ;~ 01A2:399A
cs=0x1a2;eip=0x00399d; 	T(CMP(*(raddr(es,bx+di)), al));	// 6471 cmp     es:[bx+di], al ;~ 01A2:399D
cs=0x1a2;eip=0x0039a0; 	J(JZ(loc_1398c));	// 6472 jz      short loc_1398C ;~ 01A2:39A0
cs=0x1a2;eip=0x0039a2; 	X(MOV(*(raddr(ss,bp+var_6e)), 0x0FF));	// 6473 mov     [bp+var_6E], 0FFh ;~ 01A2:39A2
loc_139a6:
	// 4668 
cs=0x1a2;eip=0x0039a6; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4a+2)))));	// 6476 push    word ptr [bp+var_4A+2] ;~ 01A2:39A6
cs=0x1a2;eip=0x0039a9; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4a)))));	// 6477 push    word ptr [bp+var_4A] ;~ 01A2:39A9
cs=0x1a2;eip=0x0039ac; 	J(CALLF(mmgr_release,0));	// 6478 call    mmgr_release ;~ 01A2:39AC
cs=0x1a2;eip=0x0039b1; 	T(ADD(sp, 4));	// 6479 add     sp, 4 ;~ 01A2:39B1
cs=0x1a2;eip=0x0039b4; 	J(JMP(loc_139ba));	// 6480 jmp     short loc_139BA ;~ 01A2:39B4
loc_139b6:
	// 4669 
cs=0x1a2;eip=0x0039b6; 	X(MOV(*(raddr(ss,bp+var_6e)), 0x0FF));	// 6484 mov     [bp+var_6E], 0FFh ;~ 01A2:39B6
loc_139ba:
	// 4670 
cs=0x1a2;eip=0x0039ba; 	T(CMP(*(raddr(ss,bp+var_6e)), 0x0FF));	// 6487 cmp     [bp+var_6E], 0FFh ;~ 01A2:39BA
cs=0x1a2;eip=0x0039be; 	J(JZ(loc_139e1));	// 6488 jz      short loc_139E1 ;~ 01A2:39BE
cs=0x1a2;eip=0x0039c0; 	T(SUB(ax, ax));	// 6489 sub     ax, ax ;~ 01A2:39C0
cs=0x1a2;eip=0x0039c2; 	X(PUSH(ax));	// 6490 push    ax ;~ 01A2:39C2
cs=0x1a2;eip=0x0039c3; 	X(PUSH(cs));	// 6491 push    cs ;~ 01A2:39C3
cs=0x1a2;eip=0x0039c4; 	J(CALL(highscore_write_a,0));	// 6492 call    near ptr highscore_write_a ;~ 01A2:39C4
cs=0x1a2;eip=0x0039c7; 	T(ADD(sp, 2));	// 6493 add     sp, 2 ;~ 01A2:39C7
cs=0x1a2;eip=0x0039ca; 	T(OR(al, al));	// 6494 or      al, al ;~ 01A2:39CA
cs=0x1a2;eip=0x0039cc; 	J(JZ(loc_139e1));	// 6495 jz      short loc_139E1 ;~ 01A2:39CC
cs=0x1a2;eip=0x0039ce; 	T(MOV(ax, 1));	// 6496 mov     ax, 1 ;~ 01A2:39CE
cs=0x1a2;eip=0x0039d1; 	X(PUSH(ax));	// 6497 push    ax ;~ 01A2:39D1
cs=0x1a2;eip=0x0039d2; 	X(PUSH(cs));	// 6498 push    cs ;~ 01A2:39D2
cs=0x1a2;eip=0x0039d3; 	J(CALL(highscore_write_a,0));	// 6499 call    near ptr highscore_write_a ;~ 01A2:39D3
cs=0x1a2;eip=0x0039d6; 	T(ADD(sp, 2));	// 6500 add     sp, 2 ;~ 01A2:39D6
cs=0x1a2;eip=0x0039d9; 	T(OR(al, al));	// 6501 or      al, al ;~ 01A2:39D9
cs=0x1a2;eip=0x0039db; 	J(JZ(loc_139e1));	// 6502 jz      short loc_139E1 ;~ 01A2:39DB
cs=0x1a2;eip=0x0039dd; 	X(MOV(*(raddr(ss,bp+var_6e)), 0x0FF));	// 6503 mov     [bp+var_6E], 0FFh ;~ 01A2:39DD
loc_139e1:
	// 4671 
cs=0x1a2;eip=0x0039e1; 	T(CMP(*(raddr(ss,bp+var_6e)), 0));	// 6507 cmp     [bp+var_6E], 0 ;~ 01A2:39E1
cs=0x1a2;eip=0x0039e5; 	J(JNZ(loc_13a0f));	// 6508 jnz     short loc_13A0F ;~ 01A2:39E5
cs=0x1a2;eip=0x0039e7; 	T(CMP(gstate_total_finish_time, 0));	// 6509 cmp     gState_total_finish_time, 0 ;~ 01A2:39E7
cs=0x1a2;eip=0x0039ec; 	J(JZ(loc_13a0f));	// 6510 jz      short loc_13A0F ;~ 01A2:39EC
cs=0x1a2;eip=0x0039ee; 	T(MOV(ax, gstate_total_finish_time));	// 6511 mov     ax, gState_total_finish_time ;~ 01A2:39EE
cs=0x1a2;eip=0x0039f1; 	X(MOV(*(dw*)(raddr(ss,bp+var_88)), ax));	// 6512 mov     [bp+var_88], ax ;~ 01A2:39F1
cs=0x1a2;eip=0x0039f5; 	T(TEST(byte_43966, 6));	// 6513 test    byte_43966, 6 ;~ 01A2:39F5
cs=0x1a2;eip=0x0039fa; 	J(JNZ(loc_13a0f));	// 6514 jnz     short loc_13A0F ;~ 01A2:39FA
cs=0x1a2;eip=0x0039fc; 	T(OR(ax, ax));	// 6515 or      ax, ax ;~ 01A2:39FC
cs=0x1a2;eip=0x0039fe; 	J(JZ(loc_13a0f));	// 6516 jz      short loc_13A0F ;~ 01A2:39FE
cs=0x1a2;eip=0x003a00; 	T(LES(bx, td11_highscores));	// 6517 les     bx, td11_highscores ;~ 01A2:3A00
cs=0x1a2;eip=0x003a04; 	T(CMP(*(dw*)(raddr(es,bx+0x16A)), ax));	// 6518 cmp     es:[bx+16Ah], ax ;~ 01A2:3A04
cs=0x1a2;eip=0x003a09; 	J(JBE(loc_13a0f));	// 6519 jbe     short loc_13A0F ;~ 01A2:3A09
cs=0x1a2;eip=0x003a0b; 	X(MOV(*(raddr(ss,bp+var_6e)), 1));	// 6520 mov     [bp+var_6E], 1 ;~ 01A2:3A0B
loc_13a0f:
	// 4672 
cs=0x1a2;eip=0x003a0f; 	X(MOV(*(raddr(ss,bp+var_8e)), 0));	// 6524 mov     [bp+var_8E], 0 ;~ 01A2:3A0F
cs=0x1a2;eip=0x003a14; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), 0x1E));	// 6525 mov     [bp+var_42], 1Eh ;~ 01A2:3A14
cs=0x1a2;eip=0x003a19; 	X(MOV(*(raddr(ss,bp+var_14)), 1));	// 6526 mov     [bp+var_14], 1 ;~ 01A2:3A19
loc_13a1d:
	// 4673 
cs=0x1a2;eip=0x003a1d; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 6530 cmp     [bp+var_16], 0 ;~ 01A2:3A1D
cs=0x1a2;eip=0x003a21; 	J(JZ(loc_13a42));	// 6531 jz      short loc_13A42 ;~ 01A2:3A21
cs=0x1a2;eip=0x003a23; 	T(CMP(*(raddr(ss,bp+var_6e)), 2));	// 6532 cmp     [bp+var_6E], 2 ;~ 01A2:3A23
cs=0x1a2;eip=0x003a27; 	J(JNZ(loc_13a42));	// 6533 jnz     short loc_13A42 ;~ 01A2:3A27
cs=0x1a2;eip=0x003a29; 	X(MOV(*(raddr(ss,bp+var_6e)), 0));	// 6534 mov     [bp+var_6E], 0 ;~ 01A2:3A29
cs=0x1a2;eip=0x003a2d; 	J(CALLF(sprite_copy_wnd_to_1,0));	// 6535 call    sprite_copy_wnd_to_1 ;~ 01A2:3A2D
cs=0x1a2;eip=0x003a32; 	X(PUSH(cs));	// 6536 push    cs ;~ 01A2:3A32
cs=0x1a2;eip=0x003a33; 	J(CALL(highscore_text_unk,0));	// 6537 call    near ptr highscore_text_unk ;~ 01A2:3A33
cs=0x1a2;eip=0x003a36; 	X(MOV(*(raddr(ss,bp+var_92)), 1));	// 6538 mov     [bp+var_92], 1 ;~ 01A2:3A36
cs=0x1a2;eip=0x003a3b; 	X(MOV(*(raddr(ss,bp+var_14)), 1));	// 6539 mov     [bp+var_14], 1 ;~ 01A2:3A3B
cs=0x1a2;eip=0x003a3f; 	J(JMP(loc_13fda));	// 6540 jmp     loc_13FDA ;~ 01A2:3A3F
loc_13a42:
	// 4674 
cs=0x1a2;eip=0x003a42; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 6545 cmp     [bp+var_16], 0 ;~ 01A2:3A42
cs=0x1a2;eip=0x003a46; 	J(JNZ(loc_13a4b));	// 6546 jnz     short loc_13A4B ;~ 01A2:3A46
cs=0x1a2;eip=0x003a48; 	J(JMP(loc_13f48));	// 6547 jmp     loc_13F48 ;~ 01A2:3A48
loc_13a4b:
	// 4675 
cs=0x1a2;eip=0x003a4b; 	X(MOV(byte_3bd29, 0x31));	// 6551 mov     byte_3BD29, 31h ; '1' ;~ 01A2:3A4B
cs=0x1a2;eip=0x003a50; 	T(MOV(ax, offset(dseg,aop01)));	// 6552 mov     ax, offset aOp01 ;~ 01A2:3A50
cs=0x1a2;eip=0x003a53; 	X(PUSH(ax));	// 6553 push    ax ;~ 01A2:3A53
cs=0x1a2;eip=0x003a54; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 6554 push    [bp+var_1A] ;~ 01A2:3A54
cs=0x1a2;eip=0x003a57; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 6555 push    [bp+var_1C] ;~ 01A2:3A57
cs=0x1a2;eip=0x003a5a; 	J(CALLF(locate_shape_fatal,0));	// 6556 call    locate_shape_fatal ;~ 01A2:3A5A
cs=0x1a2;eip=0x003a5f; 	T(ADD(sp, 6));	// 6557 add     sp, 6 ;~ 01A2:3A5F
cs=0x1a2;eip=0x003a62; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56))), ax));	// 6558 mov     word ptr [bp+var_56], ax ;~ 01A2:3A62
cs=0x1a2;eip=0x003a65; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56+2))), dx));	// 6559 mov     word ptr [bp+var_56+2], dx ;~ 01A2:3A65
cs=0x1a2;eip=0x003a68; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_56))));	// 6560 les     bx, [bp+var_56] ;~ 01A2:3A68
cs=0x1a2;eip=0x003a6b; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 6561 mov     ax, es:[bx] ;~ 01A2:3A6B
cs=0x1a2;eip=0x003a6e; 	X(IMUL1_2(video_flag1_is1));	// 6562 imul    video_flag1_is1 ;~ 01A2:3A6E
cs=0x1a2;eip=0x003a72; 	X(MOV(*(dw*)(raddr(ss,bp+var_70)), ax));	// 6563 mov     [bp+var_70], ax ;~ 01A2:3A72
cs=0x1a2;eip=0x003a75; 	T(MOV(ax, 0x138));	// 6564 mov     ax, 138h ;~ 01A2:3A75
cs=0x1a2;eip=0x003a78; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_70))));	// 6565 sub     ax, [bp+var_70] ;~ 01A2:3A78
cs=0x1a2;eip=0x003a7b; 	X(MOV(*(dw*)(raddr(ss,bp+var_8c)), ax));	// 6566 mov     [bp+var_8C], ax ;~ 01A2:3A7B
cs=0x1a2;eip=0x003a7f; 	T(MOV(ax, 0x63));	// 6567 mov     ax, 63h ; 'c' ;~ 01A2:3A7F
cs=0x1a2;eip=0x003a82; 	T(SUB(ax, *(dw*)(raddr(es,bx+2))));	// 6568 sub     ax, es:[bx+2] ;~ 01A2:3A82
cs=0x1a2;eip=0x003a86; 	T(SAR(ax, 1));	// 6569 sar     ax, 1 ;~ 01A2:3A86
cs=0x1a2;eip=0x003a88; 	X(MOV(*(dw*)(raddr(ss,bp+var_90)), ax));	// 6570 mov     [bp+var_90], ax ;~ 01A2:3A88
cs=0x1a2;eip=0x003a8c; 	X(PUSH(word_407d2));	// 6571 push    word_407D2 ;~ 01A2:3A8C
cs=0x1a2;eip=0x003a90; 	T(SUB(ax, ax));	// 6572 sub     ax, ax ;~ 01A2:3A90
cs=0x1a2;eip=0x003a92; 	X(PUSH(ax));	// 6573 push    ax ;~ 01A2:3A92
cs=0x1a2;eip=0x003a93; 	X(PUSH(dialog_fnt_colour));	// 6574 push    dialog_fnt_colour ;~ 01A2:3A93
cs=0x1a2;eip=0x003a97; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 6575 mov     ax, es:[bx+2] ;~ 01A2:3A97
cs=0x1a2;eip=0x003a9b; 	T(ADD(ax, 5));	// 6576 add     ax, 5 ;~ 01A2:3A9B
cs=0x1a2;eip=0x003a9e; 	X(PUSH(ax));	// 6577 push    ax ;~ 01A2:3A9E
cs=0x1a2;eip=0x003a9f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_70))));	// 6578 mov     ax, [bp+var_70] ;~ 01A2:3A9F
cs=0x1a2;eip=0x003aa2; 	T(ADD(ax, 5));	// 6579 add     ax, 5 ;~ 01A2:3AA2
cs=0x1a2;eip=0x003aa5; 	X(PUSH(ax));	// 6580 push    ax ;~ 01A2:3AA5
cs=0x1a2;eip=0x003aa6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_90))));	// 6581 mov     ax, [bp+var_90] ;~ 01A2:3AA6
cs=0x1a2;eip=0x003aaa; 	T(SUB(ax, 3));	// 6582 sub     ax, 3 ;~ 01A2:3AAA
cs=0x1a2;eip=0x003aad; 	X(PUSH(ax));	// 6583 push    ax ;~ 01A2:3AAD
cs=0x1a2;eip=0x003aae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8c))));	// 6584 mov     ax, [bp+var_8C] ;~ 01A2:3AAE
cs=0x1a2;eip=0x003ab2; 	T(SUB(ax, 3));	// 6585 sub     ax, 3 ;~ 01A2:3AB2
cs=0x1a2;eip=0x003ab5; 	X(PUSH(ax));	// 6586 push    ax ;~ 01A2:3AB5
cs=0x1a2;eip=0x003ab6; 	J(CALLF(draw_lines_unk,0));	// 6587 call    draw_lines_unk  ; border around opponent animation on eval screen ;~ 01A2:3AB6
cs=0x1a2;eip=0x003abb; 	T(ADD(sp, 0x0E));	// 6588 add     sp, 0Eh ;~ 01A2:3ABB
cs=0x1a2;eip=0x003abe; 	T(MOV(al, *(raddr(ss,bp+var_8e))));	// 6589 mov     al, [bp+var_8E] ;~ 01A2:3ABE
cs=0x1a2;eip=0x003ac2; 	T(CBW);	// 6590 cbw ;~ 01A2:3AC2
cs=0x1a2;eip=0x003ac3; 	T(MOV(bx, ax));	// 6591 mov     bx, ax ;~ 01A2:3AC3
cs=0x1a2;eip=0x003ac5; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_5a))));	// 6592 add     bx, [bp+var_5A] ;~ 01A2:3AC5
cs=0x1a2;eip=0x003ac8; 	T(MOV(es, *(dw*)(raddr(ss,bp+var_58))));	// 6593 mov     es, [bp+var_58] ;~ 01A2:3AC8
cs=0x1a2;eip=0x003acb; 	T(MOV(al, *(raddr(es,bx))));	// 6594 mov     al, es:[bx] ;~ 01A2:3ACB
cs=0x1a2;eip=0x003ace; 	T(ADD(al, 0x30));	// 6595 add     al, 30h ; '0' ;~ 01A2:3ACE
cs=0x1a2;eip=0x003ad0; 	X(MOV(byte_3bd29, al));	// 6596 mov     byte_3BD29, al ;~ 01A2:3AD0
cs=0x1a2;eip=0x003ad3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_90))));	// 6597 push    [bp+var_90] ;~ 01A2:3AD3
cs=0x1a2;eip=0x003ad7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8c))));	// 6598 push    [bp+var_8C] ;~ 01A2:3AD7
cs=0x1a2;eip=0x003adb; 	T(MOV(ax, offset(dseg,aop01)));	// 6599 mov     ax, offset aOp01 ;~ 01A2:3ADB
cs=0x1a2;eip=0x003ade; 	X(PUSH(ax));	// 6600 push    ax ;~ 01A2:3ADE
cs=0x1a2;eip=0x003adf; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 6601 push    [bp+var_1A] ;~ 01A2:3ADF
cs=0x1a2;eip=0x003ae2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 6602 push    [bp+var_1C] ;~ 01A2:3AE2
cs=0x1a2;eip=0x003ae5; 	J(CALLF(locate_shape_fatal,0));	// 6603 call    locate_shape_fatal ;~ 01A2:3AE5
cs=0x1a2;eip=0x003aea; 	T(ADD(sp, 6));	// 6604 add     sp, 6 ;~ 01A2:3AEA
cs=0x1a2;eip=0x003aed; 	X(PUSH(dx));	// 6605 push    dx ;~ 01A2:3AED
cs=0x1a2;eip=0x003aee; 	X(PUSH(ax));	// 6606 push    ax ;~ 01A2:3AEE
cs=0x1a2;eip=0x003aef; 	J(CALLF(shape2d_op_unk5,0));	// 6607 call    shape2d_op_unk5 ;~ 01A2:3AEF
cs=0x1a2;eip=0x003af4; 	T(ADD(sp, 8));	// 6608 add     sp, 8 ;~ 01A2:3AF4
cs=0x1a2;eip=0x003af7; 	T(MOV(al, *(raddr(ss,bp+var_8e))));	// 6609 mov     al, [bp+var_8E] ;~ 01A2:3AF7
cs=0x1a2;eip=0x003afb; 	X(MOV(*(raddr(ss,bp+var_6c)), al));	// 6610 mov     [bp+var_6C], al ;~ 01A2:3AFB
cs=0x1a2;eip=0x003afe; 	T(SUB(ax, ax));	// 6611 sub     ax, ax ;~ 01A2:3AFE
cs=0x1a2;eip=0x003b00; 	X(PUSH(ax));	// 6612 push    ax ;~ 01A2:3B00
cs=0x1a2;eip=0x003b01; 	X(PUSH(ax));	// 6613 push    ax ;~ 01A2:3B01
cs=0x1a2;eip=0x003b02; 	J(CALLF(font_set_unk,0));	// 6614 call    font_set_unk ;~ 01A2:3B02
cs=0x1a2;eip=0x003b07; 	T(ADD(sp, 4));	// 6615 add     sp, 4 ;~ 01A2:3B07
cs=0x1a2;eip=0x003b0a; 	X(MOV(*(dw*)(raddr(ss,bp+var_70)), 8));	// 6616 mov     [bp+var_70], 8 ;~ 01A2:3B0A
cs=0x1a2;eip=0x003b0f; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), 0));	// 6617 mov     [bp+var_40], 0 ;~ 01A2:3B0F
cs=0x1a2;eip=0x003b14; 	X(MOV(*(dw*)(raddr(ss,bp+var_50)), 0));	// 6618 mov     [bp+var_50], 0 ;~ 01A2:3B14
cs=0x1a2;eip=0x003b19; 	X(MOV(*(dw*)(raddr(ss,bp+var_80)), 0));	// 6619 mov     [bp+var_80], 0 ;~ 01A2:3B19
cs=0x1a2;eip=0x003b1e; 	T(CMP(*(raddr(ss,bp+var_18)), 2));	// 6620 cmp     [bp+var_18], 2 ;~ 01A2:3B1E
cs=0x1a2;eip=0x003b22; 	J(JNZ(loc_13b2c));	// 6621 jnz     short loc_13B2C ;~ 01A2:3B22
cs=0x1a2;eip=0x003b24; 	X(MOV(*(dw*)(raddr(ss,bp+var_7a)), 1));	// 6622 mov     [bp+var_7A], 1 ;~ 01A2:3B24
cs=0x1a2;eip=0x003b29; 	J(JMP(loc_13b31));	// 6623 jmp     short loc_13B31 ;~ 01A2:3B29
loc_13b2c:
	// 4676 
cs=0x1a2;eip=0x003b2c; 	X(MOV(*(dw*)(raddr(ss,bp+var_7a)), 3));	// 6628 mov     [bp+var_7A], 3 ;~ 01A2:3B2C
loc_13b31:
	// 4677 
cs=0x1a2;eip=0x003b31; 	T(SUB(di, di));	// 6631 sub     di, di ;~ 01A2:3B31
cs=0x1a2;eip=0x003b33; 	J(JMP(loc_13caf));	// 6632 jmp     loc_13CAF ;~ 01A2:3B33
loc_13b36:
	// 4678 
cs=0x1a2;eip=0x003b36; 	T(CMP(*(raddr(ss,bp+var_18)), 2));	// 6636 cmp     [bp+var_18], 2 ;~ 01A2:3B36
cs=0x1a2;eip=0x003b3a; 	J(JNZ(loc_13b42));	// 6637 jnz     short loc_13B42 ;~ 01A2:3B3A
cs=0x1a2;eip=0x003b3c; 	T(MOV(ax, offset(dseg,ad4a)));	// 6638 mov     ax, offset aD4a ; "d4a" ;~ 01A2:3B3C
cs=0x1a2;eip=0x003b3f; 	J(JMP(loc_13b57));	// 6639 jmp     short loc_13B57 ;~ 01A2:3B3F
loc_13b42:
	// 4679 
cs=0x1a2;eip=0x003b42; 	T(MOV(al, *(raddr(ss,bp+var_6a))));	// 6644 mov     al, [bp+var_6A] ;~ 01A2:3B42
cs=0x1a2;eip=0x003b45; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 6645 mov     [bp+var_12], al ;~ 01A2:3B45
cs=0x1a2;eip=0x003b48; 	X(MOV(*(raddr(ss,bp+var_11)), 0x31));	// 6646 mov     [bp+var_11], 31h ; '1' ;~ 01A2:3B48
cs=0x1a2;eip=0x003b4c; 	T(MOV(al, *(db*)(((db*)&word_40d40))));	// 6647 mov     al, byte ptr word_40D40 ;~ 01A2:3B4C
loc_13b4f:
	// 4680 
cs=0x1a2;eip=0x003b4f; 	T(ADD(al, 0x61));	// 6651 add     al, 61h ; 'a' ;~ 01A2:3B4F
cs=0x1a2;eip=0x003b51; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 6652 mov     [bp+var_10], al ;~ 01A2:3B51
cs=0x1a2;eip=0x003b54; 	T(ax = bp+var_12);	// 6653 lea     ax, [bp+var_12] ;~ 01A2:3B54
loc_13b57:
	// 4681 
cs=0x1a2;eip=0x003b57; 	X(PUSH(ax));	// 6656 push    ax ;~ 01A2:3B57
cs=0x1a2;eip=0x003b58; 	X(PUSH(*(dw*)(raddr(ss,bp+var_66))));	// 6657 push    [bp+var_66] ;~ 01A2:3B58
cs=0x1a2;eip=0x003b5b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_68))));	// 6658 push    [bp+var_68] ;~ 01A2:3B5B
cs=0x1a2;eip=0x003b5e; 	J(CALLF(locate_text_res,0));	// 6659 call    locate_text_res ;~ 01A2:3B5E
cs=0x1a2;eip=0x003b63; 	T(ADD(sp, 6));	// 6660 add     sp, 6 ;~ 01A2:3B63
cs=0x1a2;eip=0x003b66; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_86))), ax));	// 6661 mov     word ptr [bp+var_86], ax ;~ 01A2:3B66
cs=0x1a2;eip=0x003b6a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_86+2))), dx));	// 6662 mov     word ptr [bp+var_86+2], dx ;~ 01A2:3B6A
loc_13b6e:
	// 4682 
cs=0x1a2;eip=0x003b6e; 	X(PUSH(word_44d24));	// 6665 push    word_44D24 ;~ 01A2:3B6E
cs=0x1a2;eip=0x003b72; 	X(PUSH(fontnptr));	// 6666 push    fontnptr ;~ 01A2:3B72
cs=0x1a2;eip=0x003b76; 	J(CALLF(font_set_fontdef2,0));	// 6667 call    font_set_fontdef2 ;~ 01A2:3B76
cs=0x1a2;eip=0x003b7b; 	T(ADD(sp, 4));	// 6668 add     sp, 4 ;~ 01A2:3B7B
loc_13b7e:
	// 4683 
cs=0x1a2;eip=0x003b7e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_86))));	// 6671 les     bx, [bp+var_86] ;~ 01A2:3B7E
cs=0x1a2;eip=0x003b82; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_86)))));	// 6672 inc     word ptr [bp+var_86] ;~ 01A2:3B82
cs=0x1a2;eip=0x003b86; 	T(MOV(al, *(raddr(es,bx))));	// 6673 mov     al, es:[bx] ;~ 01A2:3B86
cs=0x1a2;eip=0x003b89; 	X(MOV(*(raddr(ss,bp+var_3e)), al));	// 6674 mov     [bp+var_3E], al ;~ 01A2:3B89
cs=0x1a2;eip=0x003b8c; 	T(CMP(al, 0x20));	// 6675 cmp     al, 20h ; ' ' ;~ 01A2:3B8C
cs=0x1a2;eip=0x003b8e; 	J(JZ(loc_13b97));	// 6676 jz      short loc_13B97 ;~ 01A2:3B8E
cs=0x1a2;eip=0x003b90; 	T(OR(al, al));	// 6677 or      al, al ;~ 01A2:3B90
cs=0x1a2;eip=0x003b92; 	J(JZ(loc_13b97));	// 6678 jz      short loc_13B97 ;~ 01A2:3B92
cs=0x1a2;eip=0x003b94; 	J(JMP(loc_13c92));	// 6679 jmp     loc_13C92 ;~ 01A2:3B94
loc_13b97:
	// 4684 
cs=0x1a2;eip=0x003b97; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_80))));	// 6684 mov     bx, [bp+var_80] ;~ 01A2:3B97
cs=0x1a2;eip=0x003b9a; 	T(ADD(bx, bp));	// 6685 add     bx, bp ;~ 01A2:3B9A
cs=0x1a2;eip=0x003b9c; 	X(MOV(*(raddr(ds,bx-0x3C)), 0));	// 6686 mov     byte ptr [bx-3Ch], 0 ;~ 01A2:3B9C
cs=0x1a2;eip=0x003ba0; 	T(ax = bp+var_3c);	// 6687 lea     ax, [bp+var_3C] ;~ 01A2:3BA0
cs=0x1a2;eip=0x003ba3; 	X(PUSH(ax));	// 6688 push    ax ;~ 01A2:3BA3
cs=0x1a2;eip=0x003ba4; 	J(CALLF(font_op2,0));	// 6689 call    font_op2 ;~ 01A2:3BA4
cs=0x1a2;eip=0x003ba9; 	T(ADD(sp, 2));	// 6690 add     sp, 2 ;~ 01A2:3BA9
cs=0x1a2;eip=0x003bac; 	X(MOV(*(dw*)(raddr(ss,bp+var_8a)), ax));	// 6691 mov     [bp+var_8A], ax ;~ 01A2:3BAC
cs=0x1a2;eip=0x003bb0; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_50))));	// 6692 add     ax, [bp+var_50] ;~ 01A2:3BB0
cs=0x1a2;eip=0x003bb3; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_8c))));	// 6693 mov     cx, [bp+var_8C] ;~ 01A2:3BB3
cs=0x1a2;eip=0x003bb7; 	T(SUB(cx, 0x10));	// 6694 sub     cx, 10h ;~ 01A2:3BB7
cs=0x1a2;eip=0x003bba; 	T(CMP(ax, cx));	// 6695 cmp     ax, cx ;~ 01A2:3BBA
cs=0x1a2;eip=0x003bbc; 	J(JGE(loc_13c1a));	// 6696 jge     short loc_13C1A ;~ 01A2:3BBC
cs=0x1a2;eip=0x003bbe; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_40))));	// 6697 mov     ax, [bp+var_40] ;~ 01A2:3BBE
cs=0x1a2;eip=0x003bc1; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_80))));	// 6698 add     ax, [bp+var_80] ;~ 01A2:3BC1
cs=0x1a2;eip=0x003bc4; 	T(CMP(ax, 0x50));	// 6699 cmp     ax, 50h ; 'P' ;~ 01A2:3BC4
cs=0x1a2;eip=0x003bc7; 	J(JGE(loc_13c1a));	// 6700 jge     short loc_13C1A ;~ 01A2:3BC7
cs=0x1a2;eip=0x003bc9; 	X(MOV(*(dw*)(raddr(ss,bp+var_5c)), 0));	// 6701 mov     [bp+var_5C], 0 ;~ 01A2:3BC9
cs=0x1a2;eip=0x003bce; 	J(JMP(loc_13bf3));	// 6702 jmp     short loc_13BF3 ;~ 01A2:3BCE
loc_13bd0:
	// 4685 
cs=0x1a2;eip=0x003bd0; 	T(MOV(al, *(raddr(ss,bp+var_6a))));	// 6706 mov     al, [bp+var_6A] ;~ 01A2:3BD0
cs=0x1a2;eip=0x003bd3; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 6707 mov     [bp+var_12], al ;~ 01A2:3BD3
cs=0x1a2;eip=0x003bd6; 	X(MOV(*(raddr(ss,bp+var_11)), 0x32));	// 6708 mov     [bp+var_11], 32h ; '2' ;~ 01A2:3BD6
cs=0x1a2;eip=0x003bda; 	T(MOV(al, *(db*)(((db*)&end_hiscore_random))));	// 6709 mov     al, byte ptr end_hiscore_random ;~ 01A2:3BDA
cs=0x1a2;eip=0x003bdd; 	J(JMP(loc_13b4f));	// 6710 jmp     loc_13B4F ;~ 01A2:3BDD
loc_13be0:
	// 4686 
cs=0x1a2;eip=0x003be0; 	T(MOV(al, *(raddr(ss,bp+var_6a))));	// 6714 mov     al, [bp+var_6A] ;~ 01A2:3BE0
cs=0x1a2;eip=0x003be3; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 6715 mov     [bp+var_12], al ;~ 01A2:3BE3
cs=0x1a2;eip=0x003be6; 	X(MOV(*(raddr(ss,bp+var_11)), 0x33));	// 6716 mov     [bp+var_11], 33h ; '3' ;~ 01A2:3BE6
cs=0x1a2;eip=0x003bea; 	T(MOV(al, *(db*)(((db*)&word_40d44))));	// 6717 mov     al, byte ptr word_40D44 ;~ 01A2:3BEA
cs=0x1a2;eip=0x003bed; 	J(JMP(loc_13b4f));	// 6718 jmp     loc_13B4F ;~ 01A2:3BED
loc_13bf0:
	// 4687 
cs=0x1a2;eip=0x003bf0; 	X(INC(*(dw*)(raddr(ss,bp+var_5c))));	// 6722 inc     [bp+var_5C] ;~ 01A2:3BF0
loc_13bf3:
	// 4688 
cs=0x1a2;eip=0x003bf3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_80))));	// 6725 mov     ax, [bp+var_80] ;~ 01A2:3BF3
cs=0x1a2;eip=0x003bf6; 	T(CMP(*(dw*)(raddr(ss,bp+var_5c)), ax));	// 6726 cmp     [bp+var_5C], ax ;~ 01A2:3BF6
cs=0x1a2;eip=0x003bf9; 	J(JGE(loc_13c10));	// 6727 jge     short loc_13C10 ;~ 01A2:3BF9
cs=0x1a2;eip=0x003bfb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_5c))));	// 6728 mov     bx, [bp+var_5C] ;~ 01A2:3BFB
cs=0x1a2;eip=0x003bfe; 	T(ADD(bx, bp));	// 6729 add     bx, bp ;~ 01A2:3BFE
cs=0x1a2;eip=0x003c00; 	T(MOV(al, *(raddr(ds,bx-0x3C))));	// 6730 mov     al, [bx-3Ch] ;~ 01A2:3C00
cs=0x1a2;eip=0x003c03; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_40))));	// 6731 mov     bx, [bp+var_40] ;~ 01A2:3C03
cs=0x1a2;eip=0x003c06; 	X(INC(*(dw*)(raddr(ss,bp+var_40))));	// 6732 inc     [bp+var_40] ;~ 01A2:3C06
cs=0x1a2;eip=0x003c09; 	X(MOV(*((&resid_byte1)+bx), al));	// 6733 mov     resID_byte1[bx], al ;~ 01A2:3C09
cs=0x1a2;eip=0x003c0d; 	J(JMP(loc_13bf0));	// 6734 jmp     short loc_13BF0 ;~ 01A2:3C0D
loc_13c10:
	// 4689 
cs=0x1a2;eip=0x003c10; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8a))));	// 6739 mov     ax, [bp+var_8A] ;~ 01A2:3C10
cs=0x1a2;eip=0x003c14; 	X(ADD(*(dw*)(raddr(ss,bp+var_50)), ax));	// 6740 add     [bp+var_50], ax ;~ 01A2:3C14
cs=0x1a2;eip=0x003c17; 	J(JMP(loc_13c86));	// 6741 jmp     short loc_13C86 ;~ 01A2:3C17
loc_13c1a:
	// 4690 
cs=0x1a2;eip=0x003c1a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_40))));	// 6747 mov     bx, [bp+var_40] ;~ 01A2:3C1A
cs=0x1a2;eip=0x003c1d; 	X(MOV(*((&resid_byte1)+bx), 0));	// 6748 mov     resID_byte1[bx], 0 ;~ 01A2:3C1D
cs=0x1a2;eip=0x003c22; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 6749 push    [bp+var_70] ;~ 01A2:3C22
cs=0x1a2;eip=0x003c25; 	T(MOV(ax, 8));	// 6750 mov     ax, 8 ;~ 01A2:3C25
cs=0x1a2;eip=0x003c28; 	X(PUSH(ax));	// 6751 push    ax ;~ 01A2:3C28
cs=0x1a2;eip=0x003c29; 	T(MOV(ax, 0x0AC74));	// 6752 mov     ax, 0AC74h ;~ 01A2:3C29
cs=0x1a2;eip=0x003c2c; 	X(PUSH(ax));	// 6753 push    ax ;~ 01A2:3C2C
cs=0x1a2;eip=0x003c2d; 	J(CALLF(font_draw_text,0));	// 6754 call    font_draw_text ;~ 01A2:3C2D
cs=0x1a2;eip=0x003c32; 	T(ADD(sp, 6));	// 6755 add     sp, 6 ;~ 01A2:3C32
cs=0x1a2;eip=0x003c35; 	X(ADD(*(dw*)(raddr(ss,bp+var_70)), 8));	// 6756 add     [bp+var_70], 8 ;~ 01A2:3C35
cs=0x1a2;eip=0x003c39; 	T(CMP(*(raddr(ss,bp+var_3c)), 0x20));	// 6757 cmp     [bp+var_3C], 20h ; ' ' ;~ 01A2:3C39
cs=0x1a2;eip=0x003c3d; 	J(JNZ(loc_13c46));	// 6758 jnz     short loc_13C46 ;~ 01A2:3C3D
cs=0x1a2;eip=0x003c3f; 	X(MOV(*(dw*)(raddr(ss,bp+var_5c)), 1));	// 6759 mov     [bp+var_5C], 1 ;~ 01A2:3C3F
cs=0x1a2;eip=0x003c44; 	J(JMP(loc_13c4b));	// 6760 jmp     short loc_13C4B ;~ 01A2:3C44
loc_13c46:
	// 4691 
cs=0x1a2;eip=0x003c46; 	X(MOV(*(dw*)(raddr(ss,bp+var_5c)), 0));	// 6764 mov     [bp+var_5C], 0 ;~ 01A2:3C46
loc_13c4b:
	// 4692 
cs=0x1a2;eip=0x003c4b; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), 0));	// 6767 mov     [bp+var_40], 0 ;~ 01A2:3C4B
cs=0x1a2;eip=0x003c50; 	J(JMP(loc_13c67));	// 6768 jmp     short loc_13C67 ;~ 01A2:3C50
loc_13c52:
	// 4693 
cs=0x1a2;eip=0x003c52; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_5c))));	// 6772 mov     bx, [bp+var_5C] ;~ 01A2:3C52
cs=0x1a2;eip=0x003c55; 	T(ADD(bx, bp));	// 6773 add     bx, bp ;~ 01A2:3C55
cs=0x1a2;eip=0x003c57; 	T(MOV(al, *(raddr(ds,bx-0x3C))));	// 6774 mov     al, [bx-3Ch] ;~ 01A2:3C57
cs=0x1a2;eip=0x003c5a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_40))));	// 6775 mov     bx, [bp+var_40] ;~ 01A2:3C5A
cs=0x1a2;eip=0x003c5d; 	X(INC(*(dw*)(raddr(ss,bp+var_40))));	// 6776 inc     [bp+var_40] ;~ 01A2:3C5D
cs=0x1a2;eip=0x003c60; 	X(MOV(*((&resid_byte1)+bx), al));	// 6777 mov     resID_byte1[bx], al ;~ 01A2:3C60
cs=0x1a2;eip=0x003c64; 	X(INC(*(dw*)(raddr(ss,bp+var_5c))));	// 6778 inc     [bp+var_5C] ;~ 01A2:3C64
loc_13c67:
	// 4694 
cs=0x1a2;eip=0x003c67; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_80))));	// 6781 mov     ax, [bp+var_80] ;~ 01A2:3C67
cs=0x1a2;eip=0x003c6a; 	T(CMP(*(dw*)(raddr(ss,bp+var_5c)), ax));	// 6782 cmp     [bp+var_5C], ax ;~ 01A2:3C6A
cs=0x1a2;eip=0x003c6d; 	J(JL(loc_13c52));	// 6783 jl      short loc_13C52 ;~ 01A2:3C6D
cs=0x1a2;eip=0x003c6f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_40))));	// 6784 mov     bx, [bp+var_40] ;~ 01A2:3C6F
cs=0x1a2;eip=0x003c72; 	X(MOV(*((&resid_byte1)+bx), 0));	// 6785 mov     resID_byte1[bx], 0 ;~ 01A2:3C72
cs=0x1a2;eip=0x003c77; 	T(MOV(ax, 0x0AC74));	// 6786 mov     ax, 0AC74h ;~ 01A2:3C77
cs=0x1a2;eip=0x003c7a; 	X(PUSH(ax));	// 6787 push    ax ;~ 01A2:3C7A
cs=0x1a2;eip=0x003c7b; 	J(CALLF(font_op2,0));	// 6788 call    font_op2 ;~ 01A2:3C7B
cs=0x1a2;eip=0x003c80; 	T(ADD(sp, 2));	// 6789 add     sp, 2 ;~ 01A2:3C80
cs=0x1a2;eip=0x003c83; 	X(MOV(*(dw*)(raddr(ss,bp+var_50)), ax));	// 6790 mov     [bp+var_50], ax ;~ 01A2:3C83
loc_13c86:
	// 4695 
cs=0x1a2;eip=0x003c86; 	X(MOV(*(dw*)(raddr(ss,bp+var_80)), 1));	// 6793 mov     [bp+var_80], 1 ;~ 01A2:3C86
cs=0x1a2;eip=0x003c8b; 	X(MOV(*(raddr(ss,bp+var_3c)), 0x20));	// 6794 mov     [bp+var_3C], 20h ; ' ' ;~ 01A2:3C8B
cs=0x1a2;eip=0x003c8f; 	J(JMP(loc_13ca0));	// 6795 jmp     short loc_13CA0 ;~ 01A2:3C8F
loc_13c92:
	// 4696 
cs=0x1a2;eip=0x003c92; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_80))));	// 6800 mov     bx, [bp+var_80] ;~ 01A2:3C92
cs=0x1a2;eip=0x003c95; 	X(INC(*(dw*)(raddr(ss,bp+var_80))));	// 6801 inc     [bp+var_80] ;~ 01A2:3C95
cs=0x1a2;eip=0x003c98; 	T(ADD(bx, bp));	// 6802 add     bx, bp ;~ 01A2:3C98
cs=0x1a2;eip=0x003c9a; 	T(MOV(al, *(raddr(ss,bp+var_3e))));	// 6803 mov     al, [bp+var_3E] ;~ 01A2:3C9A
cs=0x1a2;eip=0x003c9d; 	X(MOV(*(raddr(ds,bx-0x3C)), al));	// 6804 mov     [bx-3Ch], al ;~ 01A2:3C9D
loc_13ca0:
	// 4697 
cs=0x1a2;eip=0x003ca0; 	T(CMP(*(raddr(ss,bp+var_3e)), 0));	// 6807 cmp     [bp+var_3E], 0 ;~ 01A2:3CA0
cs=0x1a2;eip=0x003ca4; 	J(JZ(loc_13ca9));	// 6808 jz      short loc_13CA9 ;~ 01A2:3CA4
cs=0x1a2;eip=0x003ca6; 	J(JMP(loc_13b7e));	// 6809 jmp     loc_13B7E ;~ 01A2:3CA6
loc_13ca9:
	// 4698 
cs=0x1a2;eip=0x003ca9; 	J(CALLF(font_set_fontdef,0));	// 6813 call    font_set_fontdef ;~ 01A2:3CA9
cs=0x1a2;eip=0x003cae; 	T(INC(di));	// 6814 inc     di ;~ 01A2:3CAE
loc_13caf:
	// 4699 
cs=0x1a2;eip=0x003caf; 	T(CMP(*(dw*)(raddr(ss,bp+var_7a)), di));	// 6817 cmp     [bp+var_7A], di ;~ 01A2:3CAF
cs=0x1a2;eip=0x003cb2; 	J(JLE(loc_13cd0));	// 6818 jle     short loc_13CD0 ;~ 01A2:3CB2
cs=0x1a2;eip=0x003cb4; 	T(MOV(ax, di));	// 6819 mov     ax, di ;~ 01A2:3CB4
cs=0x1a2;eip=0x003cb6; 	T(OR(ax, ax));	// 6820 or      ax, ax ;~ 01A2:3CB6
cs=0x1a2;eip=0x003cb8; 	J(JNZ(loc_13cbd));	// 6821 jnz     short loc_13CBD ;~ 01A2:3CB8
cs=0x1a2;eip=0x003cba; 	J(JMP(loc_13b36));	// 6822 jmp     loc_13B36 ;~ 01A2:3CBA
loc_13cbd:
	// 4700 
cs=0x1a2;eip=0x003cbd; 	T(CMP(ax, 1));	// 6826 cmp     ax, 1 ;~ 01A2:3CBD
cs=0x1a2;eip=0x003cc0; 	J(JNZ(loc_13cc5));	// 6827 jnz     short loc_13CC5 ;~ 01A2:3CC0
cs=0x1a2;eip=0x003cc2; 	J(JMP(loc_13bd0));	// 6828 jmp     loc_13BD0 ;~ 01A2:3CC2
loc_13cc5:
	// 4701 
cs=0x1a2;eip=0x003cc5; 	T(CMP(ax, 2));	// 6832 cmp     ax, 2 ;~ 01A2:3CC5
cs=0x1a2;eip=0x003cc8; 	J(JNZ(loc_13ccd));	// 6833 jnz     short loc_13CCD ;~ 01A2:3CC8
cs=0x1a2;eip=0x003cca; 	J(JMP(loc_13be0));	// 6834 jmp     loc_13BE0 ;~ 01A2:3CCA
loc_13ccd:
	// 4702 
cs=0x1a2;eip=0x003ccd; 	J(JMP(loc_13b6e));	// 6838 jmp     loc_13B6E ;~ 01A2:3CCD
loc_13cd0:
	// 4703 
cs=0x1a2;eip=0x003cd0; 	T(CMP(*(dw*)(raddr(ss,bp+var_40)), 0));	// 6842 cmp     [bp+var_40], 0 ;~ 01A2:3CD0
cs=0x1a2;eip=0x003cd4; 	J(JZ(loc_13d06));	// 6843 jz      short loc_13D06 ;~ 01A2:3CD4
cs=0x1a2;eip=0x003cd6; 	X(PUSH(word_44d24));	// 6844 push    word_44D24 ;~ 01A2:3CD6
cs=0x1a2;eip=0x003cda; 	X(PUSH(fontnptr));	// 6845 push    fontnptr ;~ 01A2:3CDA
cs=0x1a2;eip=0x003cde; 	J(CALLF(font_set_fontdef2,0));	// 6846 call    font_set_fontdef2 ;~ 01A2:3CDE
cs=0x1a2;eip=0x003ce3; 	T(ADD(sp, 4));	// 6847 add     sp, 4 ;~ 01A2:3CE3
cs=0x1a2;eip=0x003ce6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_40))));	// 6848 mov     bx, [bp+var_40] ;~ 01A2:3CE6
cs=0x1a2;eip=0x003ce9; 	X(MOV(*((&resid_byte1)+bx), 0));	// 6849 mov     resID_byte1[bx], 0 ;~ 01A2:3CE9
cs=0x1a2;eip=0x003cee; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 6850 push    [bp+var_70] ;~ 01A2:3CEE
cs=0x1a2;eip=0x003cf1; 	T(MOV(ax, 8));	// 6851 mov     ax, 8 ;~ 01A2:3CF1
cs=0x1a2;eip=0x003cf4; 	X(PUSH(ax));	// 6852 push    ax ;~ 01A2:3CF4
cs=0x1a2;eip=0x003cf5; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 6853 mov     ax, offset resID_byte1 ;~ 01A2:3CF5
cs=0x1a2;eip=0x003cf8; 	X(PUSH(ax));	// 6854 push    ax ;~ 01A2:3CF8
cs=0x1a2;eip=0x003cf9; 	J(CALLF(font_draw_text,0));	// 6855 call    font_draw_text ;~ 01A2:3CF9
cs=0x1a2;eip=0x003cfe; 	T(ADD(sp, 6));	// 6856 add     sp, 6 ;~ 01A2:3CFE
cs=0x1a2;eip=0x003d01; 	J(CALLF(font_set_fontdef,0));	// 6857 call    font_set_fontdef ;~ 01A2:3D01
loc_13d06:
	// 4704 
cs=0x1a2;eip=0x003d06; 	X(MOV(*(raddr(ss,bp+var_14)), 0));	// 6860 mov     [bp+var_14], 0 ;~ 01A2:3D06
cs=0x1a2;eip=0x003d0a; 	T(CMP(*(raddr(ss,bp+var_6e)), 0));	// 6861 cmp     [bp+var_6E], 0 ;~ 01A2:3D0A
cs=0x1a2;eip=0x003d0e; 	J(JG(loc_13d13));	// 6862 jg      short loc_13D13 ;~ 01A2:3D0E
cs=0x1a2;eip=0x003d10; 	J(JMP(loc_13fda));	// 6863 jmp     loc_13FDA ;~ 01A2:3D10
loc_13d13:
	// 4705 
cs=0x1a2;eip=0x003d13; 	X(MOV(*(raddr(ss,bp+var_6e)), 0));	// 6867 mov     [bp+var_6E], 0 ;~ 01A2:3D13
cs=0x1a2;eip=0x003d17; 	X(MOV(*(raddr(ss,bp+var_14)), 1));	// 6868 mov     [bp+var_14], 1 ;~ 01A2:3D17
cs=0x1a2;eip=0x003d1b; 	T(SUB(ax, ax));	// 6869 sub     ax, ax ;~ 01A2:3D1B
cs=0x1a2;eip=0x003d1d; 	X(PUSH(ax));	// 6870 push    ax ;~ 01A2:3D1D
cs=0x1a2;eip=0x003d1e; 	X(PUSH(word_407f8));	// 6871 push    word_407F8 ;~ 01A2:3D1E
cs=0x1a2;eip=0x003d22; 	X(PUSH(word_407f6));	// 6872 push    word_407F6 ;~ 01A2:3D22
cs=0x1a2;eip=0x003d26; 	X(PUSH(word_407f4));	// 6873 push    word_407F4 ;~ 01A2:3D26
cs=0x1a2;eip=0x003d2a; 	T(MOV(ax, 0x15));	// 6874 mov     ax, 15h ;~ 01A2:3D2A
cs=0x1a2;eip=0x003d2d; 	X(PUSH(ax));	// 6875 push    ax ;~ 01A2:3D2D
cs=0x1a2;eip=0x003d2e; 	T(MOV(ax, 0x46));	// 6876 mov     ax, 46h ; 'F' ;~ 01A2:3D2E
cs=0x1a2;eip=0x003d31; 	X(PUSH(ax));	// 6877 push    ax ;~ 01A2:3D31
cs=0x1a2;eip=0x003d32; 	T(MOV(ax, 0x0AF));	// 6878 mov     ax, 0AFh ; '¯' ;~ 01A2:3D32
cs=0x1a2;eip=0x003d35; 	X(PUSH(ax));	// 6879 push    ax ;~ 01A2:3D35
cs=0x1a2;eip=0x003d36; 	T(MOV(ax, 0x81));	// 6880 mov     ax, 81h ; '' ;~ 01A2:3D36
cs=0x1a2;eip=0x003d39; 	X(PUSH(ax));	// 6881 push    ax ;~ 01A2:3D39
cs=0x1a2;eip=0x003d3a; 	T(MOV(ax, offset(dseg,abct)));	// 6882 mov     ax, offset aBct ; "bct" ;~ 01A2:3D3A
cs=0x1a2;eip=0x003d3d; 	X(PUSH(ax));	// 6883 push    ax ;~ 01A2:3D3D
cs=0x1a2;eip=0x003d3e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 6884 push    [bp+var_4C] ;~ 01A2:3D3E
cs=0x1a2;eip=0x003d41; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 6885 push    [bp+var_4E] ;~ 01A2:3D41
cs=0x1a2;eip=0x003d44; 	J(CALLF(locate_text_res,0));	// 6886 call    locate_text_res ;~ 01A2:3D44
cs=0x1a2;eip=0x003d49; 	T(ADD(sp, 6));	// 6887 add     sp, 6 ;~ 01A2:3D49
cs=0x1a2;eip=0x003d4c; 	X(PUSH(dx));	// 6888 push    dx ;~ 01A2:3D4C
cs=0x1a2;eip=0x003d4d; 	X(PUSH(ax));	// 6889 push    ax ;~ 01A2:3D4D
cs=0x1a2;eip=0x003d4e; 	J(CALLF(draw_button,0));	// 6890 call    draw_button ;~ 01A2:3D4E
cs=0x1a2;eip=0x003d53; 	T(ADD(sp, 0x14));	// 6891 add     sp, 14h ;~ 01A2:3D53
cs=0x1a2;eip=0x003d56; 	T(MOV(al, *(raddr(ss,bp+var_52))));	// 6892 mov     al, [bp+var_52] ;~ 01A2:3D56
cs=0x1a2;eip=0x003d59; 	T(CBW);	// 6893 cbw ;~ 01A2:3D59
cs=0x1a2;eip=0x003d5a; 	X(PUSH(ax));	// 6894 push    ax ;~ 01A2:3D5A
cs=0x1a2;eip=0x003d5b; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 6895 push    word ptr wndsprite+2 ;~ 01A2:3D5B
cs=0x1a2;eip=0x003d5f; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 6896 push    word ptr wndsprite ;~ 01A2:3D5F
cs=0x1a2;eip=0x003d63; 	J(CALLF(sprite_blit_to_video,0));	// 6897 call    sprite_blit_to_video ;~ 01A2:3D63
cs=0x1a2;eip=0x003d68; 	T(ADD(sp, 6));	// 6898 add     sp, 6 ;~ 01A2:3D68
cs=0x1a2;eip=0x003d6b; 	X(MOV(*(raddr(ss,bp+var_52)), 0x0FE));	// 6899 mov     [bp+var_52], 0FEh ; 'ş' ;~ 01A2:3D6B
cs=0x1a2;eip=0x003d6f; 	J(CALLF(sub_29772,0));	// 6900 call    sub_29772 ;~ 01A2:3D6F
cs=0x1a2;eip=0x003d74; 	J(CALLF(check_input,0));	// 6901 call    check_input ;~ 01A2:3D74
cs=0x1a2;eip=0x003d79; 	X(MOV(*(dw*)(raddr(ss,bp+var_70)), 1));	// 6902 mov     [bp+var_70], 1 ;~ 01A2:3D79
cs=0x1a2;eip=0x003d7e; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 6903 call    sprite_copy_2_to_1_2 ;~ 01A2:3D7E
loc_13d83:
	// 4706 
cs=0x1a2;eip=0x003d83; 	X(PUSH(word_407d0));	// 6906 push    word_407D0 ;~ 01A2:3D83
cs=0x1a2;eip=0x003d87; 	X(PUSH(word_407ce));	// 6907 push    word_407CE ;~ 01A2:3D87
cs=0x1a2;eip=0x003d8b; 	T(MOV(ax, 0x59A));	// 6908 mov     ax, 59Ah ;~ 01A2:3D8B
cs=0x1a2;eip=0x003d8e; 	X(PUSH(ax));	// 6909 push    ax ;~ 01A2:3D8E
cs=0x1a2;eip=0x003d8f; 	T(MOV(ax, 0x590));	// 6910 mov     ax, 590h ;~ 01A2:3D8F
cs=0x1a2;eip=0x003d92; 	X(PUSH(ax));	// 6911 push    ax ;~ 01A2:3D92
cs=0x1a2;eip=0x003d93; 	T(MOV(ax, 0x586));	// 6912 mov     ax, 586h ;~ 01A2:3D93
cs=0x1a2;eip=0x003d96; 	X(PUSH(ax));	// 6913 push    ax ;~ 01A2:3D96
cs=0x1a2;eip=0x003d97; 	T(MOV(ax, 0x57C));	// 6914 mov     ax, 57Ch ;~ 01A2:3D97
cs=0x1a2;eip=0x003d9a; 	X(PUSH(ax));	// 6915 push    ax ;~ 01A2:3D9A
cs=0x1a2;eip=0x003d9b; 	T(MOV(ax, 4));	// 6916 mov     ax, 4 ;~ 01A2:3D9B
cs=0x1a2;eip=0x003d9e; 	X(PUSH(ax));	// 6917 push    ax ;~ 01A2:3D9E
cs=0x1a2;eip=0x003d9f; 	J(CALLF(mouse_timer_sprite_unk,0));	// 6918 call    mouse_timer_sprite_unk ;~ 01A2:3D9F
cs=0x1a2;eip=0x003da4; 	T(ADD(sp, 0x0E));	// 6919 add     sp, 0Eh ;~ 01A2:3DA4
cs=0x1a2;eip=0x003da7; 	X(MOV(*(dw*)(raddr(ss,bp+var_72)), ax));	// 6920 mov     [bp+var_72], ax ;~ 01A2:3DA7
cs=0x1a2;eip=0x003daa; 	X(ADD(*(dw*)(raddr(ss,bp+var_42)), ax));	// 6921 add     [bp+var_42], ax ;~ 01A2:3DAA
cs=0x1a2;eip=0x003dad; 	T(CMP(*(dw*)(raddr(ss,bp+var_42)), 0x1E));	// 6922 cmp     [bp+var_42], 1Eh ;~ 01A2:3DAD
cs=0x1a2;eip=0x003db1; 	J(JL(loc_13dd3));	// 6923 jl      short loc_13DD3 ;~ 01A2:3DB1
cs=0x1a2;eip=0x003db3; 	X(SUB(*(dw*)(raddr(ss,bp+var_42)), 0x1E));	// 6924 sub     [bp+var_42], 1Eh ;~ 01A2:3DB3
cs=0x1a2;eip=0x003db7; 	X(INC(*(raddr(ss,bp+var_8e))));	// 6925 inc     [bp+var_8E] ;~ 01A2:3DB7
cs=0x1a2;eip=0x003dbb; 	T(MOV(al, *(raddr(ss,bp+var_8e))));	// 6926 mov     al, [bp+var_8E] ;~ 01A2:3DBB
cs=0x1a2;eip=0x003dbf; 	T(CBW);	// 6927 cbw ;~ 01A2:3DBF
cs=0x1a2;eip=0x003dc0; 	T(MOV(bx, ax));	// 6928 mov     bx, ax ;~ 01A2:3DC0
cs=0x1a2;eip=0x003dc2; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_5a))));	// 6929 add     bx, [bp+var_5A] ;~ 01A2:3DC2
cs=0x1a2;eip=0x003dc5; 	T(MOV(es, *(dw*)(raddr(ss,bp+var_58))));	// 6930 mov     es, [bp+var_58] ;~ 01A2:3DC5
cs=0x1a2;eip=0x003dc8; 	T(CMP(*(raddr(es,bx)), 0));	// 6931 cmp     byte ptr es:[bx], 0 ;~ 01A2:3DC8
cs=0x1a2;eip=0x003dcc; 	J(JNZ(loc_13dd3));	// 6932 jnz     short loc_13DD3 ;~ 01A2:3DCC
cs=0x1a2;eip=0x003dce; 	X(MOV(*(raddr(ss,bp+var_8e)), 0));	// 6933 mov     [bp+var_8E], 0 ;~ 01A2:3DCE
loc_13dd3:
	// 4707 
cs=0x1a2;eip=0x003dd3; 	T(MOV(al, *(raddr(ss,bp+var_6c))));	// 6937 mov     al, [bp+var_6C] ;~ 01A2:3DD3
cs=0x1a2;eip=0x003dd6; 	T(CMP(*(raddr(ss,bp+var_8e)), al));	// 6938 cmp     [bp+var_8E], al ;~ 01A2:3DD6
cs=0x1a2;eip=0x003dda; 	J(JNZ(loc_13ddf));	// 6939 jnz     short loc_13DDF ;~ 01A2:3DDA
cs=0x1a2;eip=0x003ddc; 	J(JMP(loc_13ea5));	// 6940 jmp     loc_13EA5 ;~ 01A2:3DDC
loc_13ddf:
	// 4708 
cs=0x1a2;eip=0x003ddf; 	T(MOV(al, *(raddr(ss,bp+var_8e))));	// 6944 mov     al, [bp+var_8E] ;~ 01A2:3DDF
cs=0x1a2;eip=0x003de3; 	X(MOV(*(raddr(ss,bp+var_6c)), al));	// 6945 mov     [bp+var_6C], al ;~ 01A2:3DE3
cs=0x1a2;eip=0x003de6; 	T(CBW);	// 6946 cbw ;~ 01A2:3DE6
cs=0x1a2;eip=0x003de7; 	T(MOV(bx, ax));	// 6947 mov     bx, ax ;~ 01A2:3DE7
cs=0x1a2;eip=0x003de9; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_5a))));	// 6948 add     bx, [bp+var_5A] ;~ 01A2:3DE9
cs=0x1a2;eip=0x003dec; 	T(MOV(es, *(dw*)(raddr(ss,bp+var_58))));	// 6949 mov     es, [bp+var_58] ;~ 01A2:3DEC
cs=0x1a2;eip=0x003def; 	T(MOV(al, *(raddr(es,bx))));	// 6950 mov     al, es:[bx] ;~ 01A2:3DEF
cs=0x1a2;eip=0x003df2; 	T(ADD(al, 0x30));	// 6951 add     al, 30h ; '0' ;~ 01A2:3DF2
cs=0x1a2;eip=0x003df4; 	X(MOV(byte_3bd29, al));	// 6952 mov     byte_3BD29, al ;~ 01A2:3DF4
cs=0x1a2;eip=0x003df7; 	J(CALLF(mouse_draw_opaque_check,0));	// 6953 call    mouse_draw_opaque_check ;~ 01A2:3DF7
cs=0x1a2;eip=0x003dfc; 	T(MOV(ax, offset(dseg,aop01)));	// 6954 mov     ax, offset aOp01 ;~ 01A2:3DFC
cs=0x1a2;eip=0x003dff; 	X(PUSH(ax));	// 6955 push    ax ;~ 01A2:3DFF
cs=0x1a2;eip=0x003e00; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 6956 push    [bp+var_1A] ;~ 01A2:3E00
cs=0x1a2;eip=0x003e03; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 6957 push    [bp+var_1C] ;~ 01A2:3E03
cs=0x1a2;eip=0x003e06; 	J(CALLF(locate_shape_fatal,0));	// 6958 call    locate_shape_fatal ;~ 01A2:3E06
cs=0x1a2;eip=0x003e0b; 	T(ADD(sp, 6));	// 6959 add     sp, 6 ;~ 01A2:3E0B
cs=0x1a2;eip=0x003e0e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56))), ax));	// 6960 mov     word ptr [bp+var_56], ax ;~ 01A2:3E0E
cs=0x1a2;eip=0x003e11; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56+2))), dx));	// 6961 mov     word ptr [bp+var_56+2], dx ;~ 01A2:3E11
cs=0x1a2;eip=0x003e14; 	T(CMP(video_flag5_is0, 0));	// 6962 cmp     video_flag5_is0, 0 ;~ 01A2:3E14
cs=0x1a2;eip=0x003e19; 	J(JZ(loc_13e8a));	// 6963 jz      short loc_13E8A ;~ 01A2:3E19
cs=0x1a2;eip=0x003e1b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_46+2)))));	// 6964 push    word ptr [bp+var_46+2] ;~ 01A2:3E1B
cs=0x1a2;eip=0x003e1e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_46)))));	// 6965 push    word ptr [bp+var_46] ;~ 01A2:3E1E
cs=0x1a2;eip=0x003e21; 	J(CALLF(sprite_set_1_from_argptr,0));	// 6966 call    sprite_set_1_from_argptr ;~ 01A2:3E21
cs=0x1a2;eip=0x003e26; 	T(ADD(sp, 4));	// 6967 add     sp, 4 ;~ 01A2:3E26
cs=0x1a2;eip=0x003e29; 	T(SUB(ax, ax));	// 6968 sub     ax, ax ;~ 01A2:3E29
cs=0x1a2;eip=0x003e2b; 	X(PUSH(ax));	// 6969 push    ax ;~ 01A2:3E2B
cs=0x1a2;eip=0x003e2c; 	X(PUSH(ax));	// 6970 push    ax ;~ 01A2:3E2C
cs=0x1a2;eip=0x003e2d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_56+2)))));	// 6971 push    word ptr [bp+var_56+2] ;~ 01A2:3E2D
cs=0x1a2;eip=0x003e30; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_56)))));	// 6972 push    word ptr [bp+var_56] ;~ 01A2:3E30
cs=0x1a2;eip=0x003e33; 	J(CALLF(shape2d_op_unk5,0));	// 6973 call    shape2d_op_unk5 ;~ 01A2:3E33
cs=0x1a2;eip=0x003e38; 	T(ADD(sp, 8));	// 6974 add     sp, 8 ;~ 01A2:3E38
cs=0x1a2;eip=0x003e3b; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 6975 call    sprite_copy_2_to_1_2 ;~ 01A2:3E3B
cs=0x1a2;eip=0x003e40; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_56))));	// 6976 les     bx, [bp+var_56] ;~ 01A2:3E40
cs=0x1a2;eip=0x003e43; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 6977 mov     ax, es:[bx+2] ;~ 01A2:3E43
cs=0x1a2;eip=0x003e47; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_90))));	// 6978 add     ax, [bp+var_90] ;~ 01A2:3E47
cs=0x1a2;eip=0x003e4b; 	X(PUSH(ax));	// 6979 push    ax ;~ 01A2:3E4B
cs=0x1a2;eip=0x003e4c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_90))));	// 6980 push    [bp+var_90] ;~ 01A2:3E4C
cs=0x1a2;eip=0x003e50; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 6981 mov     ax, es:[bx] ;~ 01A2:3E50
cs=0x1a2;eip=0x003e53; 	X(IMUL1_2(video_flag1_is1));	// 6982 imul    video_flag1_is1 ;~ 01A2:3E53
cs=0x1a2;eip=0x003e57; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_8c))));	// 6983 add     ax, [bp+var_8C] ;~ 01A2:3E57
cs=0x1a2;eip=0x003e5b; 	X(PUSH(ax));	// 6984 push    ax ;~ 01A2:3E5B
cs=0x1a2;eip=0x003e5c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8c))));	// 6985 push    [bp+var_8C] ;~ 01A2:3E5C
cs=0x1a2;eip=0x003e60; 	J(CALLF(sprite_set_1_size,0));	// 6986 call    sprite_set_1_size ;~ 01A2:3E60
cs=0x1a2;eip=0x003e65; 	T(ADD(sp, 8));	// 6987 add     sp, 8 ;~ 01A2:3E65
cs=0x1a2;eip=0x003e68; 	X(PUSH(*(dw*)(raddr(ss,bp+var_90))));	// 6988 push    [bp+var_90] ;~ 01A2:3E68
cs=0x1a2;eip=0x003e6c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8c))));	// 6989 push    [bp+var_8C] ;~ 01A2:3E6C
cs=0x1a2;eip=0x003e70; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_46))));	// 6990 les     bx, [bp+var_46] ;~ 01A2:3E70
cs=0x1a2;eip=0x003e73; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 6991 push    word ptr es:[bx+2] ;~ 01A2:3E73
cs=0x1a2;eip=0x003e77; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 6992 push    word ptr es:[bx] ;~ 01A2:3E77
cs=0x1a2;eip=0x003e7a; 	J(CALLF(sprite_putimage_and_alt,0));	// 6993 call    sprite_putimage_and_alt ;~ 01A2:3E7A
cs=0x1a2;eip=0x003e7f; 	T(ADD(sp, 8));	// 6994 add     sp, 8 ;~ 01A2:3E7F
cs=0x1a2;eip=0x003e82; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 6995 call    sprite_copy_2_to_1_2 ;~ 01A2:3E82
cs=0x1a2;eip=0x003e87; 	J(JMP(loc_13ea0));	// 6996 jmp     short loc_13EA0 ;~ 01A2:3E87
loc_13e8a:
	// 4709 
cs=0x1a2;eip=0x003e8a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_90))));	// 7001 push    [bp+var_90] ;~ 01A2:3E8A
cs=0x1a2;eip=0x003e8e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8c))));	// 7002 push    [bp+var_8C] ;~ 01A2:3E8E
cs=0x1a2;eip=0x003e92; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_56+2)))));	// 7003 push    word ptr [bp+var_56+2] ;~ 01A2:3E92
cs=0x1a2;eip=0x003e95; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_56)))));	// 7004 push    word ptr [bp+var_56] ;~ 01A2:3E95
cs=0x1a2;eip=0x003e98; 	J(CALLF(shape2d_op_unk5,0));	// 7005 call    shape2d_op_unk5 ;~ 01A2:3E98
cs=0x1a2;eip=0x003e9d; 	T(ADD(sp, 8));	// 7006 add     sp, 8 ;~ 01A2:3E9D
loc_13ea0:
	// 4710 
cs=0x1a2;eip=0x003ea0; 	J(CALLF(mouse_draw_transparent_check,0));	// 7009 call    mouse_draw_transparent_check ;~ 01A2:3EA0
loc_13ea5:
	// 4711 
cs=0x1a2;eip=0x003ea5; 	X(PUSH(di));	// 7012 push    di ;~ 01A2:3EA5
cs=0x1a2;eip=0x003ea6; 	J(CALLF(input_checking,0));	// 7013 call    input_checking ;~ 01A2:3EA6
cs=0x1a2;eip=0x003eab; 	T(ADD(sp, 2));	// 7014 add     sp, 2 ;~ 01A2:3EAB
cs=0x1a2;eip=0x003eae; 	T(MOV(si, ax));	// 7015 mov     si, ax ;~ 01A2:3EAE
cs=0x1a2;eip=0x003eb0; 	T(CMP(si, 0x0D));	// 7016 cmp     si, 0Dh ;~ 01A2:3EB0
cs=0x1a2;eip=0x003eb3; 	J(JZ(loc_13ebf));	// 7017 jz      short loc_13EBF ;~ 01A2:3EB3
cs=0x1a2;eip=0x003eb5; 	T(CMP(si, 0x20));	// 7018 cmp     si, 20h ; ' ' ;~ 01A2:3EB5
cs=0x1a2;eip=0x003eb8; 	J(JZ(loc_13ebf));	// 7019 jz      short loc_13EBF ;~ 01A2:3EB8
cs=0x1a2;eip=0x003eba; 	T(CMP(si, 0x1B));	// 7020 cmp     si, 1Bh ;~ 01A2:3EBA
cs=0x1a2;eip=0x003ebd; 	J(JNZ(loc_13ec4));	// 7021 jnz     short loc_13EC4 ;~ 01A2:3EBD
loc_13ebf:
	// 4712 
cs=0x1a2;eip=0x003ebf; 	X(MOV(*(dw*)(raddr(ss,bp+var_70)), 0));	// 7025 mov     [bp+var_70], 0 ;~ 01A2:3EBF
loc_13ec4:
	// 4713 
cs=0x1a2;eip=0x003ec4; 	T(CMP(*(dw*)(raddr(ss,bp+var_70)), 0));	// 7028 cmp     [bp+var_70], 0 ;~ 01A2:3EC4
cs=0x1a2;eip=0x003ec8; 	J(JZ(loc_13ecd));	// 7029 jz      short loc_13ECD ;~ 01A2:3EC8
cs=0x1a2;eip=0x003eca; 	J(JMP(loc_13d83));	// 7030 jmp     loc_13D83 ;~ 01A2:3ECA
loc_13ecd:
	// 4714 
cs=0x1a2;eip=0x003ecd; 	J(CALLF(sprite_copy_wnd_to_1,0));	// 7034 call    sprite_copy_wnd_to_1 ;~ 01A2:3ECD
cs=0x1a2;eip=0x003ed2; 	T(SUB(ax, ax));	// 7035 sub     ax, ax ;~ 01A2:3ED2
cs=0x1a2;eip=0x003ed4; 	X(PUSH(ax));	// 7036 push    ax ;~ 01A2:3ED4
cs=0x1a2;eip=0x003ed5; 	X(PUSH(word_407f8));	// 7037 push    word_407F8 ;~ 01A2:3ED5
cs=0x1a2;eip=0x003ed9; 	X(PUSH(word_407f6));	// 7038 push    word_407F6 ;~ 01A2:3ED9
cs=0x1a2;eip=0x003edd; 	X(PUSH(word_407f4));	// 7039 push    word_407F4 ;~ 01A2:3EDD
cs=0x1a2;eip=0x003ee1; 	T(MOV(ax, 0x64));	// 7040 mov     ax, 64h ; 'd' ;~ 01A2:3EE1
cs=0x1a2;eip=0x003ee4; 	X(PUSH(ax));	// 7041 push    ax ;~ 01A2:3EE4
cs=0x1a2;eip=0x003ee5; 	T(MOV(ax, 0x140));	// 7042 mov     ax, 140h ;~ 01A2:3EE5
cs=0x1a2;eip=0x003ee8; 	X(PUSH(ax));	// 7043 push    ax ;~ 01A2:3EE8
cs=0x1a2;eip=0x003ee9; 	T(SUB(ax, ax));	// 7044 sub     ax, ax ;~ 01A2:3EE9
cs=0x1a2;eip=0x003eeb; 	X(PUSH(ax));	// 7045 push    ax ;~ 01A2:3EEB
cs=0x1a2;eip=0x003eec; 	X(PUSH(ax));	// 7046 push    ax ;~ 01A2:3EEC
cs=0x1a2;eip=0x003eed; 	X(PUSH(ax));	// 7047 push    ax ;~ 01A2:3EED
cs=0x1a2;eip=0x003eee; 	X(PUSH(ax));	// 7048 push    ax ;~ 01A2:3EEE
cs=0x1a2;eip=0x003eef; 	J(CALLF(draw_button,0));	// 7049 call    draw_button ;~ 01A2:3EEF
cs=0x1a2;eip=0x003ef4; 	T(ADD(sp, 0x14));	// 7050 add     sp, 14h ;~ 01A2:3EF4
cs=0x1a2;eip=0x003ef7; 	T(MOV(ax, *(hiscore_buttons_y2)));	// 7051 mov     ax, hiscore_buttons_y2 ;~ 01A2:3EF7
cs=0x1a2;eip=0x003efa; 	T(INC(ax));	// 7052 inc     ax ;~ 01A2:3EFA
cs=0x1a2;eip=0x003efb; 	X(PUSH(ax));	// 7053 push    ax ;~ 01A2:3EFB
cs=0x1a2;eip=0x003efc; 	X(PUSH(*(hiscore_buttons_y1)));	// 7054 push    hiscore_buttons_y1 ;~ 01A2:3EFC
cs=0x1a2;eip=0x003f00; 	T(MOV(ax, 0x138));	// 7055 mov     ax, 138h ;~ 01A2:3F00
cs=0x1a2;eip=0x003f03; 	X(PUSH(ax));	// 7056 push    ax ;~ 01A2:3F03
cs=0x1a2;eip=0x003f04; 	T(MOV(ax, 8));	// 7057 mov     ax, 8 ;~ 01A2:3F04
cs=0x1a2;eip=0x003f07; 	X(PUSH(ax));	// 7058 push    ax ;~ 01A2:3F07
cs=0x1a2;eip=0x003f08; 	J(CALLF(sprite_set_1_size,0));	// 7059 call    sprite_set_1_size ;~ 01A2:3F08
cs=0x1a2;eip=0x003f0d; 	T(ADD(sp, 8));	// 7060 add     sp, 8 ;~ 01A2:3F0D
cs=0x1a2;eip=0x003f10; 	X(PUSH(word_407f8));	// 7061 push    word_407F8 ;~ 01A2:3F10
cs=0x1a2;eip=0x003f14; 	J(CALLF(sprite_clear_1_color,0));	// 7062 call    sprite_clear_1_color ;~ 01A2:3F14
cs=0x1a2;eip=0x003f19; 	T(ADD(sp, 2));	// 7063 add     sp, 2 ;~ 01A2:3F19
cs=0x1a2;eip=0x003f1c; 	J(CALLF(mouse_draw_opaque_check,0));	// 7064 call    mouse_draw_opaque_check ;~ 01A2:3F1C
cs=0x1a2;eip=0x003f21; 	T(MOV(al, *(raddr(ss,bp+var_18))));	// 7065 mov     al, [bp+var_18] ;~ 01A2:3F21
cs=0x1a2;eip=0x003f24; 	T(CBW);	// 7066 cbw ;~ 01A2:3F24
cs=0x1a2;eip=0x003f25; 	X(PUSH(ax));	// 7067 push    ax ;~ 01A2:3F25
cs=0x1a2;eip=0x003f26; 	T(MOV(ax, offset(dseg,ainh)));	// 7068 mov     ax, offset aInh ; "inh" ;~ 01A2:3F26
cs=0x1a2;eip=0x003f29; 	X(PUSH(ax));	// 7069 push    ax ;~ 01A2:3F29
cs=0x1a2;eip=0x003f2a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 7070 push    [bp+var_4C] ;~ 01A2:3F2A
cs=0x1a2;eip=0x003f2d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 7071 push    [bp+var_4E] ;~ 01A2:3F2D
cs=0x1a2;eip=0x003f30; 	J(CALLF(locate_text_res,0));	// 7072 call    locate_text_res ;~ 01A2:3F30
cs=0x1a2;eip=0x003f35; 	T(ADD(sp, 6));	// 7073 add     sp, 6 ;~ 01A2:3F35
cs=0x1a2;eip=0x003f38; 	X(PUSH(dx));	// 7074 push    dx ;~ 01A2:3F38
cs=0x1a2;eip=0x003f39; 	X(PUSH(ax));	// 7075 push    ax ;~ 01A2:3F39
cs=0x1a2;eip=0x003f3a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_88))));	// 7076 push    [bp+var_88] ;~ 01A2:3F3A
cs=0x1a2;eip=0x003f3e; 	X(PUSH(cs));	// 7077 push    cs ;~ 01A2:3F3E
cs=0x1a2;eip=0x003f3f; 	J(CALL(enter_hiscore,0));	// 7078 call    near ptr enter_hiscore ;~ 01A2:3F3F
cs=0x1a2;eip=0x003f42; 	T(ADD(sp, 8));	// 7079 add     sp, 8 ;~ 01A2:3F42
cs=0x1a2;eip=0x003f45; 	J(JMP(loc_13fda));	// 7080 jmp     loc_13FDA ;~ 01A2:3F45
loc_13f48:
	// 4715 
cs=0x1a2;eip=0x003f48; 	T(CMP(*(raddr(ss,bp+var_6e)), 0));	// 7084 cmp     [bp+var_6E], 0 ;~ 01A2:3F48
cs=0x1a2;eip=0x003f4c; 	J(JLE(loc_13f84));	// 7085 jle     short loc_13F84 ;~ 01A2:3F4C
cs=0x1a2;eip=0x003f4e; 	J(CALLF(check_input,0));	// 7086 call    check_input ;~ 01A2:3F4E
cs=0x1a2;eip=0x003f53; 	J(CALLF(mouse_draw_opaque_check,0));	// 7087 call    mouse_draw_opaque_check ;~ 01A2:3F53
cs=0x1a2;eip=0x003f58; 	T(SUB(ax, ax));	// 7088 sub     ax, ax ;~ 01A2:3F58
cs=0x1a2;eip=0x003f5a; 	X(PUSH(ax));	// 7089 push    ax ;~ 01A2:3F5A
cs=0x1a2;eip=0x003f5b; 	T(MOV(ax, offset(dseg,ainh_0)));	// 7090 mov     ax, offset aInh_0 ; "inh" ;~ 01A2:3F5B
cs=0x1a2;eip=0x003f5e; 	X(PUSH(ax));	// 7091 push    ax ;~ 01A2:3F5E
cs=0x1a2;eip=0x003f5f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 7092 push    [bp+var_4C] ;~ 01A2:3F5F
cs=0x1a2;eip=0x003f62; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 7093 push    [bp+var_4E] ;~ 01A2:3F62
cs=0x1a2;eip=0x003f65; 	J(CALLF(locate_text_res,0));	// 7094 call    locate_text_res ;~ 01A2:3F65
cs=0x1a2;eip=0x003f6a; 	T(ADD(sp, 6));	// 7095 add     sp, 6 ;~ 01A2:3F6A
cs=0x1a2;eip=0x003f6d; 	X(PUSH(dx));	// 7096 push    dx ;~ 01A2:3F6D
cs=0x1a2;eip=0x003f6e; 	X(PUSH(ax));	// 7097 push    ax ;~ 01A2:3F6E
cs=0x1a2;eip=0x003f6f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_88))));	// 7098 push    [bp+var_88] ;~ 01A2:3F6F
cs=0x1a2;eip=0x003f73; 	X(PUSH(cs));	// 7099 push    cs ;~ 01A2:3F73
cs=0x1a2;eip=0x003f74; 	J(CALL(enter_hiscore,0));	// 7100 call    near ptr enter_hiscore ;~ 01A2:3F74
cs=0x1a2;eip=0x003f77; 	T(ADD(sp, 8));	// 7101 add     sp, 8 ;~ 01A2:3F77
cs=0x1a2;eip=0x003f7a; 	X(MOV(*(raddr(ss,bp+var_6e)), 0));	// 7102 mov     [bp+var_6E], 0 ;~ 01A2:3F7A
cs=0x1a2;eip=0x003f7e; 	X(MOV(*(raddr(ss,bp+var_52)), 0x0FE));	// 7103 mov     [bp+var_52], 0FEh ; 'ş' ;~ 01A2:3F7E
cs=0x1a2;eip=0x003f82; 	J(JMP(loc_13fda));	// 7104 jmp     short loc_13FDA ;~ 01A2:3F82
loc_13f84:
	// 4716 
cs=0x1a2;eip=0x003f84; 	J(CALLF(mouse_draw_opaque_check,0));	// 7108 call    mouse_draw_opaque_check ;~ 01A2:3F84
cs=0x1a2;eip=0x003f89; 	T(CMP(*(raddr(ss,bp+var_6e)), 0x0FF));	// 7109 cmp     [bp+var_6E], 0FFh ;~ 01A2:3F89
cs=0x1a2;eip=0x003f8d; 	J(JNZ(loc_13fd6));	// 7110 jnz     short loc_13FD6 ;~ 01A2:3F8D
cs=0x1a2;eip=0x003f8f; 	T(MOV(ax, offset(dseg,ahna)));	// 7111 mov     ax, offset aHna ; "hna" ;~ 01A2:3F8F
cs=0x1a2;eip=0x003f92; 	X(PUSH(ax));	// 7112 push    ax ;~ 01A2:3F92
cs=0x1a2;eip=0x003f93; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 7113 push    [bp+var_4C] ;~ 01A2:3F93
cs=0x1a2;eip=0x003f96; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 7114 push    [bp+var_4E] ;~ 01A2:3F96
cs=0x1a2;eip=0x003f99; 	J(CALLF(locate_text_res,0));	// 7115 call    locate_text_res ;~ 01A2:3F99
cs=0x1a2;eip=0x003f9e; 	T(ADD(sp, 6));	// 7116 add     sp, 6 ;~ 01A2:3F9E
cs=0x1a2;eip=0x003fa1; 	X(PUSH(dx));	// 7117 push    dx ;~ 01A2:3FA1
cs=0x1a2;eip=0x003fa2; 	X(PUSH(ax));	// 7118 push    ax ;~ 01A2:3FA2
cs=0x1a2;eip=0x003fa3; 	T(MOV(ax, 0x0AC74));	// 7119 mov     ax, 0AC74h ;~ 01A2:3FA3
cs=0x1a2;eip=0x003fa6; 	X(PUSH(ax));	// 7120 push    ax ;~ 01A2:3FA6
cs=0x1a2;eip=0x003fa7; 	J(CALLF(copy_string,0));	// 7121 call    copy_string ;~ 01A2:3FA7
cs=0x1a2;eip=0x003fac; 	T(ADD(sp, 6));	// 7122 add     sp, 6 ;~ 01A2:3FAC
cs=0x1a2;eip=0x003faf; 	T(SUB(ax, ax));	// 7123 sub     ax, ax ;~ 01A2:3FAF
cs=0x1a2;eip=0x003fb1; 	X(PUSH(ax));	// 7124 push    ax ;~ 01A2:3FB1
cs=0x1a2;eip=0x003fb2; 	X(PUSH(dialog_fnt_colour));	// 7125 push    dialog_fnt_colour ;~ 01A2:3FB2
cs=0x1a2;eip=0x003fb6; 	T(MOV(ax, 0x32));	// 7126 mov     ax, 32h ; '2' ;~ 01A2:3FB6
cs=0x1a2;eip=0x003fb9; 	X(PUSH(ax));	// 7127 push    ax ;~ 01A2:3FB9
cs=0x1a2;eip=0x003fba; 	T(MOV(ax, 0x0AC74));	// 7128 mov     ax, 0AC74h ;~ 01A2:3FBA
cs=0x1a2;eip=0x003fbd; 	X(PUSH(ax));	// 7129 push    ax ;~ 01A2:3FBD
cs=0x1a2;eip=0x003fbe; 	J(CALLF(font_op2_alt,0));	// 7130 call    font_op2_alt ;~ 01A2:3FBE
cs=0x1a2;eip=0x003fc3; 	T(ADD(sp, 2));	// 7131 add     sp, 2 ;~ 01A2:3FC3
cs=0x1a2;eip=0x003fc6; 	X(PUSH(ax));	// 7132 push    ax ;~ 01A2:3FC6
cs=0x1a2;eip=0x003fc7; 	T(MOV(ax, 0x0AC74));	// 7133 mov     ax, 0AC74h ;~ 01A2:3FC7
cs=0x1a2;eip=0x003fca; 	X(PUSH(ax));	// 7134 push    ax ;~ 01A2:3FCA
cs=0x1a2;eip=0x003fcb; 	J(CALLF(hiscore_draw_text,0));	// 7135 call    hiscore_draw_text ;~ 01A2:3FCB
cs=0x1a2;eip=0x003fd0; 	T(ADD(sp, 0x0A));	// 7136 add     sp, 0Ah ;~ 01A2:3FD0
cs=0x1a2;eip=0x003fd3; 	J(JMP(loc_13fda));	// 7137 jmp     short loc_13FDA ;~ 01A2:3FD3
loc_13fd6:
	// 4717 
cs=0x1a2;eip=0x003fd6; 	X(PUSH(cs));	// 7142 push    cs ;~ 01A2:3FD6
cs=0x1a2;eip=0x003fd7; 	J(CALL(highscore_text_unk,0));	// 7143 call    near ptr highscore_text_unk ;~ 01A2:3FD7
loc_13fda:
	// 4718 
cs=0x1a2;eip=0x003fda; 	X(MOV(*(raddr(ss,bp+var_92)), 1));	// 7147 mov     [bp+var_92], 1 ;~ 01A2:3FDA
cs=0x1a2;eip=0x003fdf; 	X(MOV(*(raddr(ss,bp+var_78)), 1));	// 7148 mov     [bp+var_78], 1 ;~ 01A2:3FDF
cs=0x1a2;eip=0x003fe3; 	J(CALLF(sub_29772,0));	// 7149 call    sub_29772 ;~ 01A2:3FE3
cs=0x1a2;eip=0x003fe8; 	J(CALLF(sprite_copy_wnd_to_1,0));	// 7150 call    sprite_copy_wnd_to_1 ;~ 01A2:3FE8
cs=0x1a2;eip=0x003fed; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 7151 cmp     [bp+var_16], 0 ;~ 01A2:3FED
cs=0x1a2;eip=0x003ff1; 	J(JZ(loc_13ff9));	// 7152 jz      short loc_13FF9 ;~ 01A2:3FF1
cs=0x1a2;eip=0x003ff3; 	T(CMP(*(raddr(ss,bp+var_6e)), 0x0FF));	// 7153 cmp     [bp+var_6E], 0FFh ;~ 01A2:3FF3
cs=0x1a2;eip=0x003ff7; 	J(JNZ(loc_14002));	// 7154 jnz     short loc_14002 ;~ 01A2:3FF7
loc_13ff9:
	// 4719 
cs=0x1a2;eip=0x003ff9; 	X(MOV(*(dw*)(raddr(ss,bp+var_9c)), 0x0FFDC));	// 7157 mov     [bp+var_9C], 0FFDCh ;~ 01A2:3FF9
cs=0x1a2;eip=0x003fff; 	J(JMP(loc_14058));	// 7158 jmp     short loc_14058 ;~ 01A2:3FFF
loc_14002:
	// 4720 
cs=0x1a2;eip=0x004002; 	X(MOV(*(dw*)(raddr(ss,bp+var_9c)), 0));	// 7163 mov     [bp+var_9C], 0 ;~ 01A2:4002
cs=0x1a2;eip=0x004008; 	T(CMP(*(raddr(ss,bp+var_14)), 0));	// 7164 cmp     [bp+var_14], 0 ;~ 01A2:4008
cs=0x1a2;eip=0x00400c; 	J(JZ(loc_14014));	// 7165 jz      short loc_14014 ;~ 01A2:400C
cs=0x1a2;eip=0x00400e; 	T(MOV(ax, offset(dseg,abev)));	// 7166 mov     ax, offset aBev ; "bev" ;~ 01A2:400E
cs=0x1a2;eip=0x004011; 	J(JMP(loc_14017));	// 7167 jmp     short loc_14017 ;~ 01A2:4011
loc_14014:
	// 4721 
cs=0x1a2;eip=0x004014; 	T(MOV(ax, offset(dseg,abhi)));	// 7172 mov     ax, offset aBhi ; "bhi" ;~ 01A2:4014
loc_14017:
	// 4722 
cs=0x1a2;eip=0x004017; 	X(PUSH(ax));	// 7175 push    ax ;~ 01A2:4017
cs=0x1a2;eip=0x004018; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 7176 push    [bp+var_4C] ;~ 01A2:4018
cs=0x1a2;eip=0x00401b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 7177 push    [bp+var_4E] ;~ 01A2:401B
cs=0x1a2;eip=0x00401e; 	J(CALLF(locate_text_res,0));	// 7178 call    locate_text_res ;~ 01A2:401E
cs=0x1a2;eip=0x004023; 	T(ADD(sp, 6));	// 7179 add     sp, 6 ;~ 01A2:4023
cs=0x1a2;eip=0x004026; 	X(MOV(*(dw*)(raddr(ss,bp+var_7e)), ax));	// 7180 mov     [bp+var_7E], ax ;~ 01A2:4026
cs=0x1a2;eip=0x004029; 	X(MOV(*(dw*)(raddr(ss,bp+var_7c)), dx));	// 7181 mov     [bp+var_7C], dx ;~ 01A2:4029
cs=0x1a2;eip=0x00402c; 	T(SUB(ax, ax));	// 7182 sub     ax, ax ;~ 01A2:402C
cs=0x1a2;eip=0x00402e; 	X(PUSH(ax));	// 7183 push    ax ;~ 01A2:402E
cs=0x1a2;eip=0x00402f; 	X(PUSH(word_407f8));	// 7184 push    word_407F8 ;~ 01A2:402F
cs=0x1a2;eip=0x004033; 	X(PUSH(word_407f6));	// 7185 push    word_407F6 ;~ 01A2:4033
cs=0x1a2;eip=0x004037; 	X(PUSH(word_407f4));	// 7186 push    word_407F4 ;~ 01A2:4037
cs=0x1a2;eip=0x00403b; 	T(MOV(ax, 0x15));	// 7187 mov     ax, 15h ;~ 01A2:403B
cs=0x1a2;eip=0x00403e; 	X(PUSH(ax));	// 7188 push    ax ;~ 01A2:403E
cs=0x1a2;eip=0x00403f; 	T(MOV(ax, 0x46));	// 7189 mov     ax, 46h ; 'F' ;~ 01A2:403F
cs=0x1a2;eip=0x004042; 	X(PUSH(ax));	// 7190 push    ax ;~ 01A2:4042
cs=0x1a2;eip=0x004043; 	T(MOV(ax, 0x0AF));	// 7191 mov     ax, 0AFh ; '¯' ;~ 01A2:4043
cs=0x1a2;eip=0x004046; 	X(PUSH(ax));	// 7192 push    ax ;~ 01A2:4046
cs=0x1a2;eip=0x004047; 	T(MOV(ax, word_3bcec));	// 7193 mov     ax, word_3BCEC ;~ 01A2:4047
cs=0x1a2;eip=0x00404a; 	T(INC(ax));	// 7194 inc     ax ;~ 01A2:404A
cs=0x1a2;eip=0x00404b; 	X(PUSH(ax));	// 7195 push    ax ;~ 01A2:404B
cs=0x1a2;eip=0x00404c; 	X(PUSH(dx));	// 7196 push    dx ;~ 01A2:404C
cs=0x1a2;eip=0x00404d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_7e))));	// 7197 push    [bp+var_7E] ;~ 01A2:404D
cs=0x1a2;eip=0x004050; 	J(CALLF(draw_button,0));	// 7198 call    draw_button ;~ 01A2:4050
cs=0x1a2;eip=0x004055; 	T(ADD(sp, 0x14));	// 7199 add     sp, 14h ;~ 01A2:4055
loc_14058:
	// 4723 
cs=0x1a2;eip=0x004058; 	T(SUB(ax, ax));	// 7202 sub     ax, ax ;~ 01A2:4058
cs=0x1a2;eip=0x00405a; 	X(PUSH(ax));	// 7203 push    ax ;~ 01A2:405A
cs=0x1a2;eip=0x00405b; 	X(PUSH(word_407f8));	// 7204 push    word_407F8 ;~ 01A2:405B
cs=0x1a2;eip=0x00405f; 	X(PUSH(word_407f6));	// 7205 push    word_407F6 ;~ 01A2:405F
cs=0x1a2;eip=0x004063; 	X(PUSH(word_407f4));	// 7206 push    word_407F4 ;~ 01A2:4063
cs=0x1a2;eip=0x004067; 	T(MOV(ax, 0x15));	// 7207 mov     ax, 15h ;~ 01A2:4067
cs=0x1a2;eip=0x00406a; 	X(PUSH(ax));	// 7208 push    ax ;~ 01A2:406A
cs=0x1a2;eip=0x00406b; 	T(MOV(ax, 0x46));	// 7209 mov     ax, 46h ; 'F' ;~ 01A2:406B
cs=0x1a2;eip=0x00406e; 	X(PUSH(ax));	// 7210 push    ax ;~ 01A2:406E
cs=0x1a2;eip=0x00406f; 	T(MOV(ax, 0x0AF));	// 7211 mov     ax, 0AFh ; '¯' ;~ 01A2:406F
cs=0x1a2;eip=0x004072; 	X(PUSH(ax));	// 7212 push    ax ;~ 01A2:4072
cs=0x1a2;eip=0x004073; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_9c))));	// 7213 mov     ax, [bp+var_9C] ;~ 01A2:4073
cs=0x1a2;eip=0x004077; 	T(ADD(ax, word_3bcee));	// 7214 add     ax, word_3BCEE ;~ 01A2:4077
cs=0x1a2;eip=0x00407b; 	T(INC(ax));	// 7215 inc     ax ;~ 01A2:407B
cs=0x1a2;eip=0x00407c; 	X(PUSH(ax));	// 7216 push    ax ;~ 01A2:407C
cs=0x1a2;eip=0x00407d; 	T(MOV(ax, offset(dseg,abrp)));	// 7217 mov     ax, offset aBrp ; "brp" ;~ 01A2:407D
cs=0x1a2;eip=0x004080; 	X(PUSH(ax));	// 7218 push    ax ;~ 01A2:4080
cs=0x1a2;eip=0x004081; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 7219 push    [bp+var_4C] ;~ 01A2:4081
cs=0x1a2;eip=0x004084; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 7220 push    [bp+var_4E] ;~ 01A2:4084
cs=0x1a2;eip=0x004087; 	J(CALLF(locate_text_res,0));	// 7221 call    locate_text_res ;~ 01A2:4087
cs=0x1a2;eip=0x00408c; 	T(ADD(sp, 6));	// 7222 add     sp, 6 ;~ 01A2:408C
cs=0x1a2;eip=0x00408f; 	X(PUSH(dx));	// 7223 push    dx ;~ 01A2:408F
cs=0x1a2;eip=0x004090; 	X(PUSH(ax));	// 7224 push    ax ;~ 01A2:4090
cs=0x1a2;eip=0x004091; 	J(CALLF(draw_button,0));	// 7225 call    draw_button ;~ 01A2:4091
cs=0x1a2;eip=0x004096; 	T(ADD(sp, 0x14));	// 7226 add     sp, 14h ;~ 01A2:4096
cs=0x1a2;eip=0x004099; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 7227 cmp     [bp+var_16], 0 ;~ 01A2:4099
cs=0x1a2;eip=0x00409d; 	J(JZ(loc_140a4));	// 7228 jz      short loc_140A4 ;~ 01A2:409D
cs=0x1a2;eip=0x00409f; 	T(MOV(ax, offset(dseg,abra)));	// 7229 mov     ax, offset aBra ; "bra" ;~ 01A2:409F
cs=0x1a2;eip=0x0040a2; 	J(JMP(loc_140a7));	// 7230 jmp     short loc_140A7 ;~ 01A2:40A2
loc_140a4:
	// 4724 
cs=0x1a2;eip=0x0040a4; 	T(MOV(ax, offset(dseg,abdr)));	// 7234 mov     ax, offset aBdr ; "bdr" ;~ 01A2:40A4
loc_140a7:
	// 4725 
cs=0x1a2;eip=0x0040a7; 	X(PUSH(ax));	// 7237 push    ax ;~ 01A2:40A7
cs=0x1a2;eip=0x0040a8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 7238 push    [bp+var_4C] ;~ 01A2:40A8
cs=0x1a2;eip=0x0040ab; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 7239 push    [bp+var_4E] ;~ 01A2:40AB
cs=0x1a2;eip=0x0040ae; 	J(CALLF(locate_text_res,0));	// 7240 call    locate_text_res ;~ 01A2:40AE
cs=0x1a2;eip=0x0040b3; 	T(ADD(sp, 6));	// 7241 add     sp, 6 ;~ 01A2:40B3
cs=0x1a2;eip=0x0040b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_7e)), ax));	// 7242 mov     [bp+var_7E], ax ;~ 01A2:40B6
cs=0x1a2;eip=0x0040b9; 	X(MOV(*(dw*)(raddr(ss,bp+var_7c)), dx));	// 7243 mov     [bp+var_7C], dx ;~ 01A2:40B9
cs=0x1a2;eip=0x0040bc; 	T(SUB(ax, ax));	// 7244 sub     ax, ax ;~ 01A2:40BC
cs=0x1a2;eip=0x0040be; 	X(PUSH(ax));	// 7245 push    ax ;~ 01A2:40BE
cs=0x1a2;eip=0x0040bf; 	X(PUSH(word_407f8));	// 7246 push    word_407F8 ;~ 01A2:40BF
cs=0x1a2;eip=0x0040c3; 	X(PUSH(word_407f6));	// 7247 push    word_407F6 ;~ 01A2:40C3
cs=0x1a2;eip=0x0040c7; 	X(PUSH(word_407f4));	// 7248 push    word_407F4 ;~ 01A2:40C7
cs=0x1a2;eip=0x0040cb; 	T(MOV(ax, 0x15));	// 7249 mov     ax, 15h ;~ 01A2:40CB
cs=0x1a2;eip=0x0040ce; 	X(PUSH(ax));	// 7250 push    ax ;~ 01A2:40CE
cs=0x1a2;eip=0x0040cf; 	T(MOV(ax, 0x46));	// 7251 mov     ax, 46h ; 'F' ;~ 01A2:40CF
cs=0x1a2;eip=0x0040d2; 	X(PUSH(ax));	// 7252 push    ax ;~ 01A2:40D2
cs=0x1a2;eip=0x0040d3; 	T(MOV(ax, 0x0AF));	// 7253 mov     ax, 0AFh ; '¯' ;~ 01A2:40D3
cs=0x1a2;eip=0x0040d6; 	X(PUSH(ax));	// 7254 push    ax ;~ 01A2:40D6
cs=0x1a2;eip=0x0040d7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_9c))));	// 7255 mov     ax, [bp+var_9C] ;~ 01A2:40D7
cs=0x1a2;eip=0x0040db; 	T(ADD(ax, word_3bcf0));	// 7256 add     ax, word_3BCF0 ;~ 01A2:40DB
cs=0x1a2;eip=0x0040df; 	T(INC(ax));	// 7257 inc     ax ;~ 01A2:40DF
cs=0x1a2;eip=0x0040e0; 	X(PUSH(ax));	// 7258 push    ax ;~ 01A2:40E0
cs=0x1a2;eip=0x0040e1; 	X(PUSH(dx));	// 7259 push    dx ;~ 01A2:40E1
cs=0x1a2;eip=0x0040e2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_7e))));	// 7260 push    [bp+var_7E] ;~ 01A2:40E2
cs=0x1a2;eip=0x0040e5; 	J(CALLF(draw_button,0));	// 7261 call    draw_button ;~ 01A2:40E5
cs=0x1a2;eip=0x0040ea; 	T(ADD(sp, 0x14));	// 7262 add     sp, 14h ;~ 01A2:40EA
cs=0x1a2;eip=0x0040ed; 	T(SUB(ax, ax));	// 7263 sub     ax, ax ;~ 01A2:40ED
cs=0x1a2;eip=0x0040ef; 	X(PUSH(ax));	// 7264 push    ax ;~ 01A2:40EF
cs=0x1a2;eip=0x0040f0; 	X(PUSH(word_407f8));	// 7265 push    word_407F8 ;~ 01A2:40F0
cs=0x1a2;eip=0x0040f4; 	X(PUSH(word_407f6));	// 7266 push    word_407F6 ;~ 01A2:40F4
cs=0x1a2;eip=0x0040f8; 	X(PUSH(word_407f4));	// 7267 push    word_407F4 ;~ 01A2:40F8
cs=0x1a2;eip=0x0040fc; 	T(MOV(ax, 0x15));	// 7268 mov     ax, 15h ;~ 01A2:40FC
cs=0x1a2;eip=0x0040ff; 	X(PUSH(ax));	// 7269 push    ax ;~ 01A2:40FF
cs=0x1a2;eip=0x004100; 	T(MOV(ax, 0x46));	// 7270 mov     ax, 46h ; 'F' ;~ 01A2:4100
cs=0x1a2;eip=0x004103; 	X(PUSH(ax));	// 7271 push    ax ;~ 01A2:4103
cs=0x1a2;eip=0x004104; 	T(MOV(ax, 0x0AF));	// 7272 mov     ax, 0AFh ; '¯' ;~ 01A2:4104
cs=0x1a2;eip=0x004107; 	X(PUSH(ax));	// 7273 push    ax ;~ 01A2:4107
cs=0x1a2;eip=0x004108; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_9c))));	// 7274 mov     ax, [bp+var_9C] ;~ 01A2:4108
cs=0x1a2;eip=0x00410c; 	T(ADD(ax, word_3bcf2));	// 7275 add     ax, word_3BCF2 ;~ 01A2:410C
cs=0x1a2;eip=0x004110; 	T(INC(ax));	// 7276 inc     ax ;~ 01A2:4110
cs=0x1a2;eip=0x004111; 	X(PUSH(ax));	// 7277 push    ax ;~ 01A2:4111
cs=0x1a2;eip=0x004112; 	T(MOV(ax, offset(dseg,abmm_0)));	// 7278 mov     ax, offset aBmm_0 ; "bmm" ;~ 01A2:4112
cs=0x1a2;eip=0x004115; 	X(PUSH(ax));	// 7279 push    ax ;~ 01A2:4115
cs=0x1a2;eip=0x004116; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 7280 push    [bp+var_4C] ;~ 01A2:4116
cs=0x1a2;eip=0x004119; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 7281 push    [bp+var_4E] ;~ 01A2:4119
cs=0x1a2;eip=0x00411c; 	J(CALLF(locate_text_res,0));	// 7282 call    locate_text_res ;~ 01A2:411C
cs=0x1a2;eip=0x004121; 	T(ADD(sp, 6));	// 7283 add     sp, 6 ;~ 01A2:4121
cs=0x1a2;eip=0x004124; 	X(PUSH(dx));	// 7284 push    dx ;~ 01A2:4124
cs=0x1a2;eip=0x004125; 	X(PUSH(ax));	// 7285 push    ax ;~ 01A2:4125
cs=0x1a2;eip=0x004126; 	J(CALLF(draw_button,0));	// 7286 call    draw_button ;~ 01A2:4126
cs=0x1a2;eip=0x00412b; 	T(ADD(sp, 0x14));	// 7287 add     sp, 14h ;~ 01A2:412B
cs=0x1a2;eip=0x00412e; 	T(SUB(di, di));	// 7288 sub     di, di ;~ 01A2:412E
loc_14130:
	// 4726 
cs=0x1a2;eip=0x004130; 	T(MOV(ax, di));	// 7291 mov     ax, di ;~ 01A2:4130
cs=0x1a2;eip=0x004132; 	T(SHL(ax, 1));	// 7292 shl     ax, 1 ;~ 01A2:4132
cs=0x1a2;eip=0x004134; 	X(MOV(*(dw*)(raddr(ss,bp+var_9e)), ax));	// 7293 mov     [bp+var_9E], ax ;~ 01A2:4134
cs=0x1a2;eip=0x004138; 	T(MOV(bx, ax));	// 7294 mov     bx, ax ;~ 01A2:4138
cs=0x1a2;eip=0x00413a; 	T(MOV(ax, *(dw*)(((db*)&word_3bcec)+bx)));	// 7295 mov     ax, word_3BCEC[bx] ;~ 01A2:413A
cs=0x1a2;eip=0x00413e; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_9c))));	// 7296 add     ax, [bp+var_9C] ;~ 01A2:413E
cs=0x1a2;eip=0x004142; 	T(ADD(bx, bp));	// 7297 add     bx, bp ;~ 01A2:4142
cs=0x1a2;eip=0x004144; 	X(MOV(*(dw*)(raddr(ds,bx-0x64)), ax));	// 7298 mov     [bx-64h], ax ;~ 01A2:4144
cs=0x1a2;eip=0x004147; 	T(MOV(ax, di));	// 7299 mov     ax, di ;~ 01A2:4147
cs=0x1a2;eip=0x004149; 	T(SHL(ax, 1));	// 7300 shl     ax, 1 ;~ 01A2:4149
cs=0x1a2;eip=0x00414b; 	X(MOV(*(dw*)(raddr(ss,bp+var_9e)), ax));	// 7301 mov     [bp+var_9E], ax ;~ 01A2:414B
cs=0x1a2;eip=0x00414f; 	T(MOV(bx, ax));	// 7302 mov     bx, ax ;~ 01A2:414F
cs=0x1a2;eip=0x004151; 	T(MOV(ax, *(dw*)(((db*)&word_3bcf6)+bx)));	// 7303 mov     ax, word_3BCF6[bx] ;~ 01A2:4151
cs=0x1a2;eip=0x004155; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_9c))));	// 7304 add     ax, [bp+var_9C] ;~ 01A2:4155
cs=0x1a2;eip=0x004159; 	T(ADD(bx, bp));	// 7305 add     bx, bp ;~ 01A2:4159
cs=0x1a2;eip=0x00415b; 	X(MOV(*(dw*)(raddr(ds,bx-0x9A)), ax));	// 7306 mov     [bx-9Ah], ax ;~ 01A2:415B
cs=0x1a2;eip=0x00415f; 	T(INC(di));	// 7307 inc     di ;~ 01A2:415F
cs=0x1a2;eip=0x004160; 	T(CMP(di, 4));	// 7308 cmp     di, 4 ;~ 01A2:4160
cs=0x1a2;eip=0x004163; 	J(JL(loc_14130));	// 7309 jl      short loc_14130 ;~ 01A2:4163
cs=0x1a2;eip=0x004165; 	J(CALLF(check_input,0));	// 7310 call    check_input ;~ 01A2:4165
cs=0x1a2;eip=0x00416a; 	T(MOV(al, *(raddr(ss,bp+var_52))));	// 7311 mov     al, [bp+var_52] ;~ 01A2:416A
cs=0x1a2;eip=0x00416d; 	T(CBW);	// 7312 cbw ;~ 01A2:416D
cs=0x1a2;eip=0x00416e; 	X(PUSH(ax));	// 7313 push    ax ;~ 01A2:416E
cs=0x1a2;eip=0x00416f; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 7314 push    word ptr wndsprite+2 ;~ 01A2:416F
cs=0x1a2;eip=0x004173; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 7315 push    word ptr wndsprite ;~ 01A2:4173
cs=0x1a2;eip=0x004177; 	J(CALLF(sprite_blit_to_video,0));	// 7316 call    sprite_blit_to_video ;~ 01A2:4177
cs=0x1a2;eip=0x00417c; 	T(ADD(sp, 6));	// 7317 add     sp, 6 ;~ 01A2:417C
cs=0x1a2;eip=0x00417f; 	X(MOV(*(raddr(ss,bp+var_52)), 0x0FE));	// 7318 mov     [bp+var_52], 0FEh ; 'ş' ;~ 01A2:417F
cs=0x1a2;eip=0x004183; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 7319 call    sprite_copy_2_to_1_2 ;~ 01A2:4183
loc_14188:
	// 4727 
cs=0x1a2;eip=0x004188; 	T(MOV(al, *(raddr(ss,bp+var_78))));	// 7323 mov     al, [bp+var_78] ;~ 01A2:4188
cs=0x1a2;eip=0x00418b; 	T(CMP(*(raddr(ss,bp+var_92)), al));	// 7324 cmp     [bp+var_92], al ;~ 01A2:418B
cs=0x1a2;eip=0x00418f; 	J(JZ(loc_141dc));	// 7325 jz      short loc_141DC ;~ 01A2:418F
cs=0x1a2;eip=0x004191; 	T(MOV(al, *(raddr(ss,bp+var_92))));	// 7326 mov     al, [bp+var_92] ;~ 01A2:4191
cs=0x1a2;eip=0x004195; 	X(MOV(*(raddr(ss,bp+var_78)), al));	// 7327 mov     [bp+var_78], al ;~ 01A2:4195
cs=0x1a2;eip=0x004198; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 7328 call    sprite_copy_2_to_1_2 ;~ 01A2:4198
cs=0x1a2;eip=0x00419d; 	T(MOV(ax, *(hiscore_buttons_y2)));	// 7329 mov     ax, hiscore_buttons_y2 ;~ 01A2:419D
cs=0x1a2;eip=0x0041a0; 	T(INC(ax));	// 7330 inc     ax ;~ 01A2:41A0
cs=0x1a2;eip=0x0041a1; 	X(PUSH(ax));	// 7331 push    ax ;~ 01A2:41A1
cs=0x1a2;eip=0x0041a2; 	X(PUSH(*(hiscore_buttons_y1)));	// 7332 push    hiscore_buttons_y1 ;~ 01A2:41A2
cs=0x1a2;eip=0x0041a6; 	T(MOV(ax, 0x140));	// 7333 mov     ax, 140h ;~ 01A2:41A6
cs=0x1a2;eip=0x0041a9; 	X(PUSH(ax));	// 7334 push    ax ;~ 01A2:41A9
cs=0x1a2;eip=0x0041aa; 	T(SUB(ax, ax));	// 7335 sub     ax, ax ;~ 01A2:41AA
cs=0x1a2;eip=0x0041ac; 	X(PUSH(ax));	// 7336 push    ax ;~ 01A2:41AC
cs=0x1a2;eip=0x0041ad; 	J(CALLF(sprite_set_1_size,0));	// 7337 call    sprite_set_1_size ;~ 01A2:41AD
cs=0x1a2;eip=0x0041b2; 	T(ADD(sp, 8));	// 7338 add     sp, 8 ;~ 01A2:41B2
cs=0x1a2;eip=0x0041b5; 	J(CALLF(mouse_draw_opaque_check,0));	// 7339 call    mouse_draw_opaque_check ;~ 01A2:41B5
cs=0x1a2;eip=0x0041ba; 	T(LES(bx, wndsprite));	// 7340 les     bx, wndsprite ;~ 01A2:41BA
cs=0x1a2;eip=0x0041be; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 7341 push    word ptr es:[bx+2] ;~ 01A2:41BE
cs=0x1a2;eip=0x0041c2; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 7342 push    word ptr es:[bx] ;~ 01A2:41C2
cs=0x1a2;eip=0x0041c5; 	J(CALLF(sprite_putimage,0));	// 7343 call    sprite_putimage ;~ 01A2:41C5
cs=0x1a2;eip=0x0041ca; 	T(ADD(sp, 4));	// 7344 add     sp, 4 ;~ 01A2:41CA
cs=0x1a2;eip=0x0041cd; 	J(CALLF(mouse_draw_transparent_check,0));	// 7345 call    mouse_draw_transparent_check ;~ 01A2:41CD
cs=0x1a2;eip=0x0041d2; 	J(CALLF(timer_get_delta_alt,0));	// 7346 call    timer_get_delta_alt ;~ 01A2:41D2
cs=0x1a2;eip=0x0041d7; 	J(CALLF(sub_29772,0));	// 7347 call    sub_29772 ;~ 01A2:41D7
loc_141dc:
	// 4728 
cs=0x1a2;eip=0x0041dc; 	X(PUSH(word_407d0));	// 7350 push    word_407D0 ;~ 01A2:41DC
cs=0x1a2;eip=0x0041e0; 	X(PUSH(word_407ce));	// 7351 push    word_407CE ;~ 01A2:41E0
cs=0x1a2;eip=0x0041e4; 	T(MOV(ax, offset(dseg,hiscore_buttons_y2)));	// 7352 mov     ax, offset hiscore_buttons_y2 ;~ 01A2:41E4
cs=0x1a2;eip=0x0041e7; 	X(PUSH(ax));	// 7353 push    ax ;~ 01A2:41E7
cs=0x1a2;eip=0x0041e8; 	T(MOV(ax, offset(dseg,hiscore_buttons_y1)));	// 7354 mov     ax, offset hiscore_buttons_y1 ;~ 01A2:41E8
cs=0x1a2;eip=0x0041eb; 	X(PUSH(ax));	// 7355 push    ax ;~ 01A2:41EB
cs=0x1a2;eip=0x0041ec; 	T(ax = bp+var_9a);	// 7356 lea     ax, [bp+var_9A] ;~ 01A2:41EC
cs=0x1a2;eip=0x0041f0; 	X(PUSH(ax));	// 7357 push    ax ;~ 01A2:41F0
cs=0x1a2;eip=0x0041f1; 	T(ax = bp+var_64);	// 7358 lea     ax, [bp+var_64] ;~ 01A2:41F1
cs=0x1a2;eip=0x0041f4; 	X(PUSH(ax));	// 7359 push    ax ;~ 01A2:41F4
cs=0x1a2;eip=0x0041f5; 	T(MOV(al, *(raddr(ss,bp+var_92))));	// 7360 mov     al, [bp+var_92] ;~ 01A2:41F5
cs=0x1a2;eip=0x0041f9; 	T(CBW);	// 7361 cbw ;~ 01A2:41F9
cs=0x1a2;eip=0x0041fa; 	X(PUSH(ax));	// 7362 push    ax ;~ 01A2:41FA
cs=0x1a2;eip=0x0041fb; 	J(CALLF(mouse_timer_sprite_unk,0));	// 7363 call    mouse_timer_sprite_unk ;~ 01A2:41FB
cs=0x1a2;eip=0x004200; 	T(ADD(sp, 0x0E));	// 7364 add     sp, 0Eh ;~ 01A2:4200
cs=0x1a2;eip=0x004203; 	X(MOV(*(dw*)(raddr(ss,bp+var_72)), ax));	// 7365 mov     [bp+var_72], ax ;~ 01A2:4203
cs=0x1a2;eip=0x004206; 	T(CMP(*(raddr(ss,bp+var_14)), 0));	// 7366 cmp     [bp+var_14], 0 ;~ 01A2:4206
cs=0x1a2;eip=0x00420a; 	J(JZ(loc_1420f));	// 7367 jz      short loc_1420F ;~ 01A2:420A
cs=0x1a2;eip=0x00420c; 	J(JMP(loc_14337));	// 7368 jmp     loc_14337 ;~ 01A2:420C
loc_1420f:
	// 4729 
cs=0x1a2;eip=0x00420f; 	T(CMP(*(raddr(ss,bp+var_18)), 2));	// 7372 cmp     [bp+var_18], 2 ;~ 01A2:420F
cs=0x1a2;eip=0x004213; 	J(JNZ(loc_14218));	// 7373 jnz     short loc_14218 ;~ 01A2:4213
cs=0x1a2;eip=0x004215; 	J(JMP(loc_14337));	// 7374 jmp     loc_14337 ;~ 01A2:4215
loc_14218:
	// 4730 
cs=0x1a2;eip=0x004218; 	X(ADD(*(dw*)(raddr(ss,bp+var_42)), ax));	// 7378 add     [bp+var_42], ax ;~ 01A2:4218
cs=0x1a2;eip=0x00421b; 	T(CMP(*(dw*)(raddr(ss,bp+var_42)), 0x1E));	// 7379 cmp     [bp+var_42], 1Eh ;~ 01A2:421B
cs=0x1a2;eip=0x00421f; 	J(JL(loc_14241));	// 7380 jl      short loc_14241 ;~ 01A2:421F
cs=0x1a2;eip=0x004221; 	X(SUB(*(dw*)(raddr(ss,bp+var_42)), 0x1E));	// 7381 sub     [bp+var_42], 1Eh ;~ 01A2:4221
cs=0x1a2;eip=0x004225; 	X(INC(*(raddr(ss,bp+var_8e))));	// 7382 inc     [bp+var_8E] ;~ 01A2:4225
cs=0x1a2;eip=0x004229; 	T(MOV(al, *(raddr(ss,bp+var_8e))));	// 7383 mov     al, [bp+var_8E] ;~ 01A2:4229
cs=0x1a2;eip=0x00422d; 	T(CBW);	// 7384 cbw ;~ 01A2:422D
cs=0x1a2;eip=0x00422e; 	T(MOV(bx, ax));	// 7385 mov     bx, ax ;~ 01A2:422E
cs=0x1a2;eip=0x004230; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_5a))));	// 7386 add     bx, [bp+var_5A] ;~ 01A2:4230
cs=0x1a2;eip=0x004233; 	T(MOV(es, *(dw*)(raddr(ss,bp+var_58))));	// 7387 mov     es, [bp+var_58] ;~ 01A2:4233
cs=0x1a2;eip=0x004236; 	T(CMP(*(raddr(es,bx)), 0));	// 7388 cmp     byte ptr es:[bx], 0 ;~ 01A2:4236
cs=0x1a2;eip=0x00423a; 	J(JNZ(loc_14241));	// 7389 jnz     short loc_14241 ;~ 01A2:423A
cs=0x1a2;eip=0x00423c; 	X(MOV(*(raddr(ss,bp+var_8e)), 0));	// 7390 mov     [bp+var_8E], 0 ;~ 01A2:423C
loc_14241:
	// 4731 
cs=0x1a2;eip=0x004241; 	T(MOV(al, *(raddr(ss,bp+var_6c))));	// 7394 mov     al, [bp+var_6C] ;~ 01A2:4241
cs=0x1a2;eip=0x004244; 	T(CMP(*(raddr(ss,bp+var_8e)), al));	// 7395 cmp     [bp+var_8E], al ;~ 01A2:4244
cs=0x1a2;eip=0x004248; 	J(JNZ(loc_1424d));	// 7396 jnz     short loc_1424D ;~ 01A2:4248
cs=0x1a2;eip=0x00424a; 	J(JMP(loc_14337));	// 7397 jmp     loc_14337 ;~ 01A2:424A
loc_1424d:
	// 4732 
cs=0x1a2;eip=0x00424d; 	T(MOV(al, *(raddr(ss,bp+var_8e))));	// 7401 mov     al, [bp+var_8E] ;~ 01A2:424D
cs=0x1a2;eip=0x004251; 	X(MOV(*(raddr(ss,bp+var_6c)), al));	// 7402 mov     [bp+var_6C], al ;~ 01A2:4251
cs=0x1a2;eip=0x004254; 	T(CBW);	// 7403 cbw ;~ 01A2:4254
cs=0x1a2;eip=0x004255; 	T(MOV(bx, ax));	// 7404 mov     bx, ax ;~ 01A2:4255
cs=0x1a2;eip=0x004257; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_5a))));	// 7405 add     bx, [bp+var_5A] ;~ 01A2:4257
cs=0x1a2;eip=0x00425a; 	T(MOV(es, *(dw*)(raddr(ss,bp+var_58))));	// 7406 mov     es, [bp+var_58] ;~ 01A2:425A
cs=0x1a2;eip=0x00425d; 	T(MOV(al, *(raddr(es,bx))));	// 7407 mov     al, es:[bx] ;~ 01A2:425D
cs=0x1a2;eip=0x004260; 	T(ADD(al, 0x30));	// 7408 add     al, 30h ; '0' ;~ 01A2:4260
cs=0x1a2;eip=0x004262; 	X(MOV(byte_3bd29, al));	// 7409 mov     byte_3BD29, al ;~ 01A2:4262
cs=0x1a2;eip=0x004265; 	J(CALLF(mouse_draw_opaque_check,0));	// 7410 call    mouse_draw_opaque_check ;~ 01A2:4265
cs=0x1a2;eip=0x00426a; 	T(MOV(ax, offset(dseg,aop01)));	// 7411 mov     ax, offset aOp01 ;~ 01A2:426A
cs=0x1a2;eip=0x00426d; 	X(PUSH(ax));	// 7412 push    ax ;~ 01A2:426D
cs=0x1a2;eip=0x00426e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 7413 push    [bp+var_1A] ;~ 01A2:426E
cs=0x1a2;eip=0x004271; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 7414 push    [bp+var_1C] ;~ 01A2:4271
cs=0x1a2;eip=0x004274; 	J(CALLF(locate_shape_fatal,0));	// 7415 call    locate_shape_fatal ;~ 01A2:4274
cs=0x1a2;eip=0x004279; 	T(ADD(sp, 6));	// 7416 add     sp, 6 ;~ 01A2:4279
cs=0x1a2;eip=0x00427c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56))), ax));	// 7417 mov     word ptr [bp+var_56], ax ;~ 01A2:427C
cs=0x1a2;eip=0x00427f; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56+2))), dx));	// 7418 mov     word ptr [bp+var_56+2], dx ;~ 01A2:427F
cs=0x1a2;eip=0x004282; 	T(CMP(video_flag5_is0, 0));	// 7419 cmp     video_flag5_is0, 0 ;~ 01A2:4282
cs=0x1a2;eip=0x004287; 	J(JZ(loc_142f8));	// 7420 jz      short loc_142F8 ;~ 01A2:4287
cs=0x1a2;eip=0x004289; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_46+2)))));	// 7421 push    word ptr [bp+var_46+2] ;~ 01A2:4289
cs=0x1a2;eip=0x00428c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_46)))));	// 7422 push    word ptr [bp+var_46] ;~ 01A2:428C
cs=0x1a2;eip=0x00428f; 	J(CALLF(sprite_set_1_from_argptr,0));	// 7423 call    sprite_set_1_from_argptr ;~ 01A2:428F
cs=0x1a2;eip=0x004294; 	T(ADD(sp, 4));	// 7424 add     sp, 4 ;~ 01A2:4294
cs=0x1a2;eip=0x004297; 	T(SUB(ax, ax));	// 7425 sub     ax, ax ;~ 01A2:4297
cs=0x1a2;eip=0x004299; 	X(PUSH(ax));	// 7426 push    ax ;~ 01A2:4299
cs=0x1a2;eip=0x00429a; 	X(PUSH(ax));	// 7427 push    ax ;~ 01A2:429A
cs=0x1a2;eip=0x00429b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_56+2)))));	// 7428 push    word ptr [bp+var_56+2] ;~ 01A2:429B
cs=0x1a2;eip=0x00429e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_56)))));	// 7429 push    word ptr [bp+var_56] ;~ 01A2:429E
cs=0x1a2;eip=0x0042a1; 	J(CALLF(shape2d_op_unk5,0));	// 7430 call    shape2d_op_unk5 ;~ 01A2:42A1
cs=0x1a2;eip=0x0042a6; 	T(ADD(sp, 8));	// 7431 add     sp, 8 ;~ 01A2:42A6
cs=0x1a2;eip=0x0042a9; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 7432 call    sprite_copy_2_to_1_2 ;~ 01A2:42A9
cs=0x1a2;eip=0x0042ae; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_56))));	// 7433 les     bx, [bp+var_56] ;~ 01A2:42AE
cs=0x1a2;eip=0x0042b1; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 7434 mov     ax, es:[bx+2] ;~ 01A2:42B1
cs=0x1a2;eip=0x0042b5; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_90))));	// 7435 add     ax, [bp+var_90] ;~ 01A2:42B5
cs=0x1a2;eip=0x0042b9; 	X(PUSH(ax));	// 7436 push    ax ;~ 01A2:42B9
cs=0x1a2;eip=0x0042ba; 	X(PUSH(*(dw*)(raddr(ss,bp+var_90))));	// 7437 push    [bp+var_90] ;~ 01A2:42BA
cs=0x1a2;eip=0x0042be; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 7438 mov     ax, es:[bx] ;~ 01A2:42BE
cs=0x1a2;eip=0x0042c1; 	X(IMUL1_2(video_flag1_is1));	// 7439 imul    video_flag1_is1 ;~ 01A2:42C1
cs=0x1a2;eip=0x0042c5; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_8c))));	// 7440 add     ax, [bp+var_8C] ;~ 01A2:42C5
cs=0x1a2;eip=0x0042c9; 	X(PUSH(ax));	// 7441 push    ax ;~ 01A2:42C9
cs=0x1a2;eip=0x0042ca; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8c))));	// 7442 push    [bp+var_8C] ;~ 01A2:42CA
cs=0x1a2;eip=0x0042ce; 	J(CALLF(sprite_set_1_size,0));	// 7443 call    sprite_set_1_size ;~ 01A2:42CE
cs=0x1a2;eip=0x0042d3; 	T(ADD(sp, 8));	// 7444 add     sp, 8 ;~ 01A2:42D3
cs=0x1a2;eip=0x0042d6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_90))));	// 7445 push    [bp+var_90] ;~ 01A2:42D6
cs=0x1a2;eip=0x0042da; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8c))));	// 7446 push    [bp+var_8C] ;~ 01A2:42DA
cs=0x1a2;eip=0x0042de; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_46))));	// 7447 les     bx, [bp+var_46] ;~ 01A2:42DE
cs=0x1a2;eip=0x0042e1; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 7448 push    word ptr es:[bx+2] ;~ 01A2:42E1
cs=0x1a2;eip=0x0042e5; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 7449 push    word ptr es:[bx] ;~ 01A2:42E5
cs=0x1a2;eip=0x0042e8; 	J(CALLF(sprite_putimage_and_alt,0));	// 7450 call    sprite_putimage_and_alt ;~ 01A2:42E8
cs=0x1a2;eip=0x0042ed; 	T(ADD(sp, 8));	// 7451 add     sp, 8 ;~ 01A2:42ED
cs=0x1a2;eip=0x0042f0; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 7452 call    sprite_copy_2_to_1_2 ;~ 01A2:42F0
cs=0x1a2;eip=0x0042f5; 	J(JMP(loc_1430e));	// 7453 jmp     short loc_1430E ;~ 01A2:42F5
loc_142f8:
	// 4733 
cs=0x1a2;eip=0x0042f8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_90))));	// 7458 push    [bp+var_90] ;~ 01A2:42F8
cs=0x1a2;eip=0x0042fc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8c))));	// 7459 push    [bp+var_8C] ;~ 01A2:42FC
cs=0x1a2;eip=0x004300; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_56+2)))));	// 7460 push    word ptr [bp+var_56+2] ;~ 01A2:4300
cs=0x1a2;eip=0x004303; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_56)))));	// 7461 push    word ptr [bp+var_56] ;~ 01A2:4303
cs=0x1a2;eip=0x004306; 	J(CALLF(shape2d_op_unk5,0));	// 7462 call    shape2d_op_unk5 ;~ 01A2:4306
cs=0x1a2;eip=0x00430b; 	T(ADD(sp, 8));	// 7463 add     sp, 8 ;~ 01A2:430B
loc_1430e:
	// 4734 
cs=0x1a2;eip=0x00430e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_90))));	// 7466 push    [bp+var_90] ;~ 01A2:430E
cs=0x1a2;eip=0x004312; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8c))));	// 7467 push    [bp+var_8C] ;~ 01A2:4312
cs=0x1a2;eip=0x004316; 	T(MOV(ax, offset(dseg,aop01)));	// 7468 mov     ax, offset aOp01 ;~ 01A2:4316
cs=0x1a2;eip=0x004319; 	X(PUSH(ax));	// 7469 push    ax ;~ 01A2:4319
cs=0x1a2;eip=0x00431a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 7470 push    [bp+var_1A] ;~ 01A2:431A
cs=0x1a2;eip=0x00431d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 7471 push    [bp+var_1C] ;~ 01A2:431D
cs=0x1a2;eip=0x004320; 	J(CALLF(locate_shape_fatal,0));	// 7472 call    locate_shape_fatal ;~ 01A2:4320
cs=0x1a2;eip=0x004325; 	T(ADD(sp, 6));	// 7473 add     sp, 6 ;~ 01A2:4325
cs=0x1a2;eip=0x004328; 	X(PUSH(dx));	// 7474 push    dx ;~ 01A2:4328
cs=0x1a2;eip=0x004329; 	X(PUSH(ax));	// 7475 push    ax ;~ 01A2:4329
cs=0x1a2;eip=0x00432a; 	J(CALLF(shape2d_op_unk5,0));	// 7476 call    shape2d_op_unk5 ;~ 01A2:432A
cs=0x1a2;eip=0x00432f; 	T(ADD(sp, 8));	// 7477 add     sp, 8 ;~ 01A2:432F
cs=0x1a2;eip=0x004332; 	J(CALLF(mouse_draw_transparent_check,0));	// 7478 call    mouse_draw_transparent_check ;~ 01A2:4332
loc_14337:
	// 4735 
cs=0x1a2;eip=0x004337; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 7482 cmp     [bp+var_16], 0 ;~ 01A2:4337
cs=0x1a2;eip=0x00433b; 	J(JZ(loc_14343));	// 7483 jz      short loc_14343 ;~ 01A2:433B
cs=0x1a2;eip=0x00433d; 	T(CMP(*(raddr(ss,bp+var_6e)), 0x0FF));	// 7484 cmp     [bp+var_6E], 0FFh ;~ 01A2:433D
cs=0x1a2;eip=0x004341; 	J(JNZ(loc_1436c));	// 7485 jnz     short loc_1436C ;~ 01A2:4341
loc_14343:
	// 4736 
cs=0x1a2;eip=0x004343; 	T(MOV(ax, offset(dseg,hiscore_buttons_y2)+2));	// 7488 mov     ax, (offset hiscore_buttons_y2+2) ; references the last three y pos in the array ;~ 01A2:4343
cs=0x1a2;eip=0x004346; 	X(PUSH(ax));	// 7489 push    ax ;~ 01A2:4346
cs=0x1a2;eip=0x004347; 	T(MOV(ax, offset(dseg,hiscore_buttons_y1)+2));	// 7490 mov     ax, (offset hiscore_buttons_y1+2) ; ditto ;~ 01A2:4347
cs=0x1a2;eip=0x00434a; 	X(PUSH(ax));	// 7491 push    ax ;~ 01A2:434A
cs=0x1a2;eip=0x00434b; 	T(ax = bp+var_98);	// 7492 lea     ax, [bp+var_98] ;~ 01A2:434B
cs=0x1a2;eip=0x00434f; 	X(PUSH(ax));	// 7493 push    ax ;~ 01A2:434F
cs=0x1a2;eip=0x004350; 	T(ax = bp+var_62);	// 7494 lea     ax, [bp+var_62] ;~ 01A2:4350
cs=0x1a2;eip=0x004353; 	X(PUSH(ax));	// 7495 push    ax ;~ 01A2:4353
cs=0x1a2;eip=0x004354; 	T(MOV(ax, 3));	// 7496 mov     ax, 3 ;~ 01A2:4354
cs=0x1a2;eip=0x004357; 	X(PUSH(ax));	// 7497 push    ax ;~ 01A2:4357
cs=0x1a2;eip=0x004358; 	J(CALLF(mouse_multi_hittest,0));	// 7498 call    mouse_multi_hittest ;~ 01A2:4358
cs=0x1a2;eip=0x00435d; 	T(ADD(sp, 0x0A));	// 7499 add     sp, 0Ah ;~ 01A2:435D
cs=0x1a2;eip=0x004360; 	X(MOV(*(raddr(ss,bp+var_82)), al));	// 7500 mov     [bp+var_82], al ;~ 01A2:4360
cs=0x1a2;eip=0x004364; 	T(CMP(al, 0x0FF));	// 7501 cmp     al, 0FFh ;~ 01A2:4364
cs=0x1a2;eip=0x004366; 	J(JZ(loc_14395));	// 7502 jz      short loc_14395 ;~ 01A2:4366
cs=0x1a2;eip=0x004368; 	T(INC(al));	// 7503 inc     al ;~ 01A2:4368
cs=0x1a2;eip=0x00436a; 	J(JMP(loc_14391));	// 7504 jmp     short loc_14391 ;~ 01A2:436A
loc_1436c:
	// 4737 
cs=0x1a2;eip=0x00436c; 	T(MOV(ax, offset(dseg,hiscore_buttons_y2)));	// 7508 mov     ax, offset hiscore_buttons_y2 ;~ 01A2:436C
cs=0x1a2;eip=0x00436f; 	X(PUSH(ax));	// 7509 push    ax ;~ 01A2:436F
cs=0x1a2;eip=0x004370; 	T(MOV(ax, offset(dseg,hiscore_buttons_y1)));	// 7510 mov     ax, offset hiscore_buttons_y1 ;~ 01A2:4370
cs=0x1a2;eip=0x004373; 	X(PUSH(ax));	// 7511 push    ax ;~ 01A2:4373
cs=0x1a2;eip=0x004374; 	T(ax = bp+var_9a);	// 7512 lea     ax, [bp+var_9A] ;~ 01A2:4374
cs=0x1a2;eip=0x004378; 	X(PUSH(ax));	// 7513 push    ax ;~ 01A2:4378
cs=0x1a2;eip=0x004379; 	T(ax = bp+var_64);	// 7514 lea     ax, [bp+var_64] ;~ 01A2:4379
cs=0x1a2;eip=0x00437c; 	X(PUSH(ax));	// 7515 push    ax ;~ 01A2:437C
cs=0x1a2;eip=0x00437d; 	T(MOV(ax, 4));	// 7516 mov     ax, 4 ;~ 01A2:437D
cs=0x1a2;eip=0x004380; 	X(PUSH(ax));	// 7517 push    ax ;~ 01A2:4380
cs=0x1a2;eip=0x004381; 	J(CALLF(mouse_multi_hittest,0));	// 7518 call    mouse_multi_hittest ;~ 01A2:4381
cs=0x1a2;eip=0x004386; 	T(ADD(sp, 0x0A));	// 7519 add     sp, 0Ah ;~ 01A2:4386
cs=0x1a2;eip=0x004389; 	X(MOV(*(raddr(ss,bp+var_82)), al));	// 7520 mov     [bp+var_82], al ;~ 01A2:4389
cs=0x1a2;eip=0x00438d; 	T(CMP(al, 0x0FF));	// 7521 cmp     al, 0FFh ;~ 01A2:438D
cs=0x1a2;eip=0x00438f; 	J(JZ(loc_14395));	// 7522 jz      short loc_14395 ;~ 01A2:438F
loc_14391:
	// 4738 
cs=0x1a2;eip=0x004391; 	X(MOV(*(raddr(ss,bp+var_92)), al));	// 7525 mov     [bp+var_92], al ;~ 01A2:4391
loc_14395:
	// 4739 
cs=0x1a2;eip=0x004395; 	X(PUSH(*(dw*)(raddr(ss,bp+var_72))));	// 7529 push    [bp+var_72] ;~ 01A2:4395
cs=0x1a2;eip=0x004398; 	J(CALLF(input_checking,0));	// 7530 call    input_checking ;~ 01A2:4398
cs=0x1a2;eip=0x00439d; 	T(ADD(sp, 2));	// 7531 add     sp, 2 ;~ 01A2:439D
cs=0x1a2;eip=0x0043a0; 	T(MOV(si, ax));	// 7532 mov     si, ax ;~ 01A2:43A0
cs=0x1a2;eip=0x0043a2; 	T(OR(si, si));	// 7533 or      si, si ;~ 01A2:43A2
cs=0x1a2;eip=0x0043a4; 	J(JNZ(loc_143a9));	// 7534 jnz     short loc_143A9 ;~ 01A2:43A4
cs=0x1a2;eip=0x0043a6; 	J(JMP(loc_14188));	// 7535 jmp     loc_14188 ;~ 01A2:43A6
loc_143a9:
	// 4740 
cs=0x1a2;eip=0x0043a9; 	T(CMP(ax, 0x0D));	// 7539 cmp     ax, 0Dh         ; enter ;~ 01A2:43A9
cs=0x1a2;eip=0x0043ac; 	J(JZ(loc_143c6));	// 7540 jz      short loc_143C6 ;~ 01A2:43AC
cs=0x1a2;eip=0x0043ae; 	T(CMP(ax, 0x20));	// 7541 cmp     ax, 20h ; ' '   ; space ;~ 01A2:43AE
cs=0x1a2;eip=0x0043b1; 	J(JZ(loc_143c6));	// 7542 jz      short loc_143C6 ;~ 01A2:43B1
cs=0x1a2;eip=0x0043b3; 	T(CMP(ax, 0x4B00));	// 7543 cmp     ax, 4B00h ;~ 01A2:43B3
cs=0x1a2;eip=0x0043b6; 	J(JNZ(loc_143bb));	// 7544 jnz     short loc_143BB ;~ 01A2:43B6
cs=0x1a2;eip=0x0043b8; 	J(JMP(loc_1447a));	// 7545 jmp     loc_1447A ;~ 01A2:43B8
loc_143bb:
	// 4741 
cs=0x1a2;eip=0x0043bb; 	T(CMP(ax, 0x4D00));	// 7549 cmp     ax, 4D00h ;~ 01A2:43BB
cs=0x1a2;eip=0x0043be; 	J(JNZ(loc_143c3));	// 7550 jnz     short loc_143C3 ;~ 01A2:43BE
cs=0x1a2;eip=0x0043c0; 	J(JMP(loc_144a4));	// 7551 jmp     loc_144A4 ;~ 01A2:43C0
loc_143c3:
	// 4742 
cs=0x1a2;eip=0x0043c3; 	J(JMP(loc_14188));	// 7555 jmp     loc_14188 ;~ 01A2:43C3
loc_143c6:
	// 4743 
cs=0x1a2;eip=0x0043c6; 	T(CMP(*(raddr(ss,bp+var_92)), 0));	// 7560 cmp     [bp+var_92], 0 ;~ 01A2:43C6
cs=0x1a2;eip=0x0043cb; 	J(JNZ(loc_1440c));	// 7561 jnz     short loc_1440C ;~ 01A2:43CB
cs=0x1a2;eip=0x0043cd; 	J(CALLF(sprite_copy_wnd_to_1,0));	// 7562 call    sprite_copy_wnd_to_1 ;~ 01A2:43CD
cs=0x1a2;eip=0x0043d2; 	T(SUB(ax, ax));	// 7563 sub     ax, ax ;~ 01A2:43D2
cs=0x1a2;eip=0x0043d4; 	X(PUSH(ax));	// 7564 push    ax ;~ 01A2:43D4
cs=0x1a2;eip=0x0043d5; 	X(PUSH(word_407f8));	// 7565 push    word_407F8 ;~ 01A2:43D5
cs=0x1a2;eip=0x0043d9; 	X(PUSH(word_407f6));	// 7566 push    word_407F6 ;~ 01A2:43D9
cs=0x1a2;eip=0x0043dd; 	X(PUSH(word_407f4));	// 7567 push    word_407F4 ;~ 01A2:43DD
cs=0x1a2;eip=0x0043e1; 	T(MOV(ax, 0x64));	// 7568 mov     ax, 64h ; 'd' ;~ 01A2:43E1
cs=0x1a2;eip=0x0043e4; 	X(PUSH(ax));	// 7569 push    ax ;~ 01A2:43E4
cs=0x1a2;eip=0x0043e5; 	T(MOV(ax, 0x140));	// 7570 mov     ax, 140h ;~ 01A2:43E5
cs=0x1a2;eip=0x0043e8; 	X(PUSH(ax));	// 7571 push    ax ;~ 01A2:43E8
cs=0x1a2;eip=0x0043e9; 	T(SUB(ax, ax));	// 7572 sub     ax, ax ;~ 01A2:43E9
cs=0x1a2;eip=0x0043eb; 	X(PUSH(ax));	// 7573 push    ax ;~ 01A2:43EB
cs=0x1a2;eip=0x0043ec; 	X(PUSH(ax));	// 7574 push    ax ;~ 01A2:43EC
cs=0x1a2;eip=0x0043ed; 	X(PUSH(ax));	// 7575 push    ax ;~ 01A2:43ED
cs=0x1a2;eip=0x0043ee; 	X(PUSH(ax));	// 7576 push    ax ;~ 01A2:43EE
cs=0x1a2;eip=0x0043ef; 	J(CALLF(draw_button,0));	// 7577 call    draw_button ;~ 01A2:43EF
cs=0x1a2;eip=0x0043f4; 	T(ADD(sp, 0x14));	// 7578 add     sp, 14h ;~ 01A2:43F4
cs=0x1a2;eip=0x0043f7; 	T(CMP(*(raddr(ss,bp+var_14)), 0));	// 7579 cmp     [bp+var_14], 0 ;~ 01A2:43F7
cs=0x1a2;eip=0x0043fb; 	J(JZ(loc_14404));	// 7580 jz      short loc_14404 ;~ 01A2:43FB
cs=0x1a2;eip=0x0043fd; 	X(MOV(*(raddr(ss,bp+var_6e)), 0));	// 7581 mov     [bp+var_6E], 0 ;~ 01A2:43FD
cs=0x1a2;eip=0x004401; 	J(JMP(loc_13a1d));	// 7582 jmp     loc_13A1D ;~ 01A2:4401
loc_14404:
	// 4744 
cs=0x1a2;eip=0x004404; 	X(MOV(*(raddr(ss,bp+var_6e)), 2));	// 7586 mov     [bp+var_6E], 2 ;~ 01A2:4404
cs=0x1a2;eip=0x004408; 	J(JMP(loc_13a1d));	// 7587 jmp     loc_13A1D ;~ 01A2:4408
loc_1440c:
	// 4745 
cs=0x1a2;eip=0x00440c; 	J(CALLF(audio_unload,0));	// 7592 call    audio_unload ;~ 01A2:440C
cs=0x1a2;eip=0x004411; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 7593 cmp     [bp+var_16], 0 ;~ 01A2:4411
cs=0x1a2;eip=0x004415; 	J(JZ(loc_14425));	// 7594 jz      short loc_14425 ;~ 01A2:4415
cs=0x1a2;eip=0x004417; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 7595 push    [bp+var_1A] ;~ 01A2:4417
cs=0x1a2;eip=0x00441a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 7596 push    [bp+var_1C] ;~ 01A2:441A
cs=0x1a2;eip=0x00441d; 	J(CALLF(mmgr_release,0));	// 7597 call    mmgr_release ;~ 01A2:441D
cs=0x1a2;eip=0x004422; 	T(ADD(sp, 4));	// 7598 add     sp, 4 ;~ 01A2:4422
loc_14425:
	// 4746 
cs=0x1a2;eip=0x004425; 	T(CMP(video_flag5_is0, 0));	// 7601 cmp     video_flag5_is0, 0 ;~ 01A2:4425
cs=0x1a2;eip=0x00442a; 	J(JZ(loc_1443a));	// 7602 jz      short loc_1443A ;~ 01A2:442A
cs=0x1a2;eip=0x00442c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_46+2)))));	// 7603 push    word ptr [bp+var_46+2] ;~ 01A2:442C
cs=0x1a2;eip=0x00442f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_46)))));	// 7604 push    word ptr [bp+var_46] ;~ 01A2:442F
cs=0x1a2;eip=0x004432; 	J(CALLF(sprite_free_wnd,0));	// 7605 call    sprite_free_wnd ;~ 01A2:4432
cs=0x1a2;eip=0x004437; 	T(ADD(sp, 4));	// 7606 add     sp, 4 ;~ 01A2:4437
loc_1443a:
	// 4747 
cs=0x1a2;eip=0x00443a; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 7609 push    word ptr wndsprite+2 ;~ 01A2:443A
cs=0x1a2;eip=0x00443e; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 7610 push    word ptr wndsprite ;~ 01A2:443E
cs=0x1a2;eip=0x004442; 	J(CALLF(sprite_free_wnd,0));	// 7611 call    sprite_free_wnd ;~ 01A2:4442
cs=0x1a2;eip=0x004447; 	T(ADD(sp, 4));	// 7612 add     sp, 4 ;~ 01A2:4447
cs=0x1a2;eip=0x00444a; 	T(CMP(byte_449aa, 0));	// 7613 cmp     byte_449AA, 0 ;~ 01A2:444A
cs=0x1a2;eip=0x00444f; 	J(JZ(loc_1445f));	// 7614 jz      short loc_1445F ;~ 01A2:444F
cs=0x1a2;eip=0x004451; 	X(PUSH(*(dw*)(raddr(ss,bp+var_66))));	// 7615 push    [bp+var_66] ;~ 01A2:4451
cs=0x1a2;eip=0x004454; 	X(PUSH(*(dw*)(raddr(ss,bp+var_68))));	// 7616 push    [bp+var_68] ;~ 01A2:4454
cs=0x1a2;eip=0x004457; 	J(CALLF(unload_resource,0));	// 7617 call    unload_resource ;~ 01A2:4457
cs=0x1a2;eip=0x00445c; 	T(ADD(sp, 4));	// 7618 add     sp, 4 ;~ 01A2:445C
loc_1445f:
	// 4748 
cs=0x1a2;eip=0x00445f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4c))));	// 7621 push    [bp+var_4C] ;~ 01A2:445F
cs=0x1a2;eip=0x004462; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4e))));	// 7622 push    [bp+var_4E] ;~ 01A2:4462
cs=0x1a2;eip=0x004465; 	J(CALLF(unload_resource,0));	// 7623 call    unload_resource ;~ 01A2:4465
cs=0x1a2;eip=0x00446a; 	T(ADD(sp, 4));	// 7624 add     sp, 4 ;~ 01A2:446A
cs=0x1a2;eip=0x00446d; 	T(MOV(al, *(raddr(ss,bp+var_92))));	// 7625 mov     al, [bp+var_92] ;~ 01A2:446D
cs=0x1a2;eip=0x004471; 	T(CBW);	// 7626 cbw ;~ 01A2:4471
cs=0x1a2;eip=0x004472; 	T(DEC(ax));	// 7627 dec     ax ;~ 01A2:4472
cs=0x1a2;eip=0x004473; 	X(POP(si));	// 7628 pop     si ;~ 01A2:4473
cs=0x1a2;eip=0x004474; 	X(POP(di));	// 7629 pop     di ;~ 01A2:4474
cs=0x1a2;eip=0x004475; 	T(MOV(sp, bp));	// 7630 mov     sp, bp ;~ 01A2:4475
cs=0x1a2;eip=0x004477; 	X(POP(bp));	// 7631 pop     bp ;~ 01A2:4477
cs=0x1a2;eip=0x004478; 	J(RETF(0));	// 7632 retf ;~ 01A2:4478
loc_1447a:
	// 4749 
cs=0x1a2;eip=0x00447a; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 7637 cmp     [bp+var_16], 0 ;~ 01A2:447A
cs=0x1a2;eip=0x00447e; 	J(JZ(loc_14486));	// 7638 jz      short loc_14486 ;~ 01A2:447E
cs=0x1a2;eip=0x004480; 	T(CMP(*(raddr(ss,bp+var_6e)), 0x0FF));	// 7639 cmp     [bp+var_6E], 0FFh ;~ 01A2:4480
cs=0x1a2;eip=0x004484; 	J(JNZ(loc_14496));	// 7640 jnz     short loc_14496 ;~ 01A2:4484
loc_14486:
	// 4750 
cs=0x1a2;eip=0x004486; 	T(CMP(*(raddr(ss,bp+var_92)), 1));	// 7643 cmp     [bp+var_92], 1 ;~ 01A2:4486
cs=0x1a2;eip=0x00448b; 	J(JG(loc_1449d));	// 7644 jg      short loc_1449D ;~ 01A2:448B
loc_1448d:
	// 4751 
cs=0x1a2;eip=0x00448d; 	X(MOV(*(raddr(ss,bp+var_92)), 3));	// 7647 mov     [bp+var_92], 3 ;~ 01A2:448D
cs=0x1a2;eip=0x004492; 	J(JMP(loc_14188));	// 7648 jmp     loc_14188 ;~ 01A2:4492
loc_14496:
	// 4752 
cs=0x1a2;eip=0x004496; 	T(CMP(*(raddr(ss,bp+var_92)), 0));	// 7653 cmp     [bp+var_92], 0 ;~ 01A2:4496
cs=0x1a2;eip=0x00449b; 	J(JZ(loc_1448d));	// 7654 jz      short loc_1448D ;~ 01A2:449B
loc_1449d:
	// 4753 
cs=0x1a2;eip=0x00449d; 	X(DEC(*(raddr(ss,bp+var_92))));	// 7657 dec     [bp+var_92] ;~ 01A2:449D
cs=0x1a2;eip=0x0044a1; 	J(JMP(loc_14188));	// 7658 jmp     loc_14188 ;~ 01A2:44A1
loc_144a4:
	// 4754 
cs=0x1a2;eip=0x0044a4; 	T(CMP(*(raddr(ss,bp+var_92)), 3));	// 7662 cmp     [bp+var_92], 3 ;~ 01A2:44A4
cs=0x1a2;eip=0x0044a9; 	J(JGE(loc_144b2));	// 7663 jge     short loc_144B2 ;~ 01A2:44A9
cs=0x1a2;eip=0x0044ab; 	X(INC(*(raddr(ss,bp+var_92))));	// 7664 inc     [bp+var_92] ;~ 01A2:44AB
cs=0x1a2;eip=0x0044af; 	J(JMP(loc_14188));	// 7665 jmp     loc_14188 ;~ 01A2:44AF
loc_144b2:
	// 4755 
cs=0x1a2;eip=0x0044b2; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 7669 cmp     [bp+var_16], 0 ;~ 01A2:44B2
cs=0x1a2;eip=0x0044b6; 	J(JZ(loc_144be));	// 7670 jz      short loc_144BE ;~ 01A2:44B6
cs=0x1a2;eip=0x0044b8; 	T(CMP(*(raddr(ss,bp+var_6e)), 0x0FF));	// 7671 cmp     [bp+var_6E], 0FFh ;~ 01A2:44B8
cs=0x1a2;eip=0x0044bc; 	J(JNZ(loc_144c6));	// 7672 jnz     short loc_144C6 ;~ 01A2:44BC
loc_144be:
	// 4756 
cs=0x1a2;eip=0x0044be; 	X(MOV(*(raddr(ss,bp+var_92)), 1));	// 7675 mov     [bp+var_92], 1 ;~ 01A2:44BE
cs=0x1a2;eip=0x0044c3; 	J(JMP(loc_14188));	// 7676 jmp     loc_14188 ;~ 01A2:44C3
loc_144c6:
	// 4757 
cs=0x1a2;eip=0x0044c6; 	X(MOV(*(raddr(ss,bp+var_92)), 0));	// 7680 mov     [bp+var_92], 0 ;~ 01A2:44C6
cs=0x1a2;eip=0x0044cb; 	J(JMP(loc_14188));	// 7681 jmp     loc_14188 ;~ 01A2:44CB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kend_hiscore: 	goto end_hiscore;
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
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg000_44ce_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg000_44ce_proc:
    _begin:
cs=0x1a2;eip=0x0044ce; 	X(POP(si));	// 7685 pop     si ;~ 01A2:44CE
	R(return security_check(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg000_44ce_proc: 	goto seg000_44ce_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool security_check(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    security_check:
    _begin:
#undef var_440
#define var_440 -0x440
	// 7693 var_440         = byte ptr -440h ;~ 01A2:44CF
#undef var_43e
#define var_43e -0x43E
	// 7694 var_43E         = byte ptr -43Eh ;~ 01A2:44CF
#undef var_428
#define var_428 -0x428
	// 7695 var_428         = dword ptr -428h ;~ 01A2:44CF
#undef var_424
#define var_424 -0x424
	// 7696 var_424         = word ptr -424h ;~ 01A2:44CF
#undef var_422
#define var_422 -0x422
	// 7697 var_422         = word ptr -422h ;~ 01A2:44CF
#undef var_420
#define var_420 -0x420
	// 7698 var_420         = word ptr -420h ;~ 01A2:44CF
#undef var_41e
#define var_41e -0x41E
	// 7699 var_41E         = word ptr -41Eh ;~ 01A2:44CF
#undef var_41c
#define var_41c -0x41C
	// 7700 var_41C         = word ptr -41Ch ;~ 01A2:44CF
#undef var_41a
#define var_41a -0x41A
	// 7701 var_41A         = word ptr -41Ah ;~ 01A2:44CF
#undef var_40e
#define var_40e -0x40E
	// 7702 var_40E         = word ptr -40Eh ;~ 01A2:44CF
#undef var_40c
#define var_40c -0x40C
	// 7703 var_40C         = word ptr -40Ch ;~ 01A2:44CF
#undef var_40a
#define var_40a -0x40A
	// 7704 var_40A         = word ptr -40Ah ;~ 01A2:44CF
#undef var_408
#define var_408 -0x408
	// 7705 var_408         = word ptr -408h ;~ 01A2:44CF
#undef var_406
#define var_406 -0x406
	// 7706 var_406         = byte ptr -406h ;~ 01A2:44CF
#undef var_405
#define var_405 -0x405
	// 7707 var_405         = byte ptr -405h ;~ 01A2:44CF
#undef var_404
#define var_404 -0x404
	// 7708 var_404         = byte ptr -404h ;~ 01A2:44CF
#undef var_403
#define var_403 -0x403
	// 7709 var_403         = byte ptr -403h ;~ 01A2:44CF
#undef var_402
#define var_402 -0x402
	// 7710 var_402         = byte ptr -402h ;~ 01A2:44CF
#undef var_401
#define var_401 -0x401
	// 7711 var_401         = byte ptr -401h ;~ 01A2:44CF
#undef var_400
#define var_400 -0x400
	// 7712 var_400         = byte ptr -400h ;~ 01A2:44CF
#undef arg_0
#define arg_0 6
	// 7713 arg_0           = word ptr  6 ;~ 01A2:44CF
cs=0x1a2;eip=0x0044cf; 	X(PUSH(bp));	// 7715 push    bp ;~ 01A2:44CF
cs=0x1a2;eip=0x0044d0; 	T(MOV(bp, sp));	// 7716 mov     bp, sp ;~ 01A2:44D0
cs=0x1a2;eip=0x0044d2; 	T(SUB(sp, 0x440));	// 7717 sub     sp, 440h ;~ 01A2:44D2
cs=0x1a2;eip=0x0044d6; 	X(PUSH(si));	// 7718 push    si              ; int ;~ 01A2:44D6
cs=0x1a2;eip=0x0044d7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 7719 mov     bx, [bp+arg_0] ;~ 01A2:44D7
cs=0x1a2;eip=0x0044da; 	T(MOV(al, *((&byte_3bd34)+bx)));	// 7720 mov     al, byte_3BD34[bx] ;~ 01A2:44DA
cs=0x1a2;eip=0x0044de; 	X(MOV(byte_3bd4c, al));	// 7721 mov     byte_3BD4C, al ;~ 01A2:44DE
cs=0x1a2;eip=0x0044e1; 	T(MOV(al, *((&byte_3bd34)+bx)));	// 7722 mov     al, byte_3BD34[bx] ;~ 01A2:44E1
cs=0x1a2;eip=0x0044e5; 	X(MOV(byte_3bd50, al));	// 7723 mov     byte_3BD50, al ;~ 01A2:44E5
cs=0x1a2;eip=0x0044e8; 	T(MOV(ax, offset(dseg,amisc_3)));	// 7724 mov     ax, offset aMisc_3 ; "misc" ;~ 01A2:44E8
cs=0x1a2;eip=0x0044eb; 	X(PUSH(ax));	// 7725 push    ax ;~ 01A2:44EB
cs=0x1a2;eip=0x0044ec; 	J(CALLF(file_load_resfile,0));	// 7726 call    file_load_resfile ;~ 01A2:44EC
cs=0x1a2;eip=0x0044f1; 	T(ADD(sp, 2));	// 7727 add     sp, 2 ;~ 01A2:44F1
cs=0x1a2;eip=0x0044f4; 	X(MOV(*(dw*)(raddr(ss,bp+var_40c)), ax));	// 7728 mov     [bp+var_40C], ax ;~ 01A2:44F4
cs=0x1a2;eip=0x0044f8; 	X(MOV(*(dw*)(raddr(ss,bp+var_40a)), dx));	// 7729 mov     [bp+var_40A], dx ;~ 01A2:44F8
cs=0x1a2;eip=0x0044fc; 	T(MOV(ax, offset(dseg,acop_0)));	// 7730 mov     ax, offset aCop_0 ; "cop" ;~ 01A2:44FC
cs=0x1a2;eip=0x0044ff; 	X(PUSH(ax));	// 7731 push    ax ;~ 01A2:44FF
cs=0x1a2;eip=0x004500; 	X(PUSH(dx));	// 7732 push    dx ;~ 01A2:4500
cs=0x1a2;eip=0x004501; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40c))));	// 7733 push    [bp+var_40C] ;~ 01A2:4501
cs=0x1a2;eip=0x004505; 	J(CALLF(locate_text_res,0));	// 7734 call    locate_text_res ;~ 01A2:4505
cs=0x1a2;eip=0x00450a; 	T(ADD(sp, 6));	// 7735 add     sp, 6 ;~ 01A2:450A
cs=0x1a2;eip=0x00450d; 	X(PUSH(dx));	// 7736 push    dx ;~ 01A2:450D
cs=0x1a2;eip=0x00450e; 	X(PUSH(ax));	// 7737 push    ax ;~ 01A2:450E
cs=0x1a2;eip=0x00450f; 	T(ax = bp+var_400);	// 7738 lea     ax, [bp+var_400] ;~ 01A2:450F
cs=0x1a2;eip=0x004513; 	X(PUSH(ax));	// 7739 push    ax ;~ 01A2:4513
cs=0x1a2;eip=0x004514; 	J(CALLF(copy_string,0));	// 7740 call    copy_string ;~ 01A2:4514
cs=0x1a2;eip=0x004519; 	T(ADD(sp, 6));	// 7741 add     sp, 6 ;~ 01A2:4519
cs=0x1a2;eip=0x00451c; 	T(MOV(ax, offset(dseg,aq00)));	// 7742 mov     ax, offset aQ00 ;~ 01A2:451C
cs=0x1a2;eip=0x00451f; 	X(PUSH(ax));	// 7743 push    ax ;~ 01A2:451F
cs=0x1a2;eip=0x004520; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40a))));	// 7744 push    [bp+var_40A] ;~ 01A2:4520
cs=0x1a2;eip=0x004524; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40c))));	// 7745 push    [bp+var_40C] ;~ 01A2:4524
cs=0x1a2;eip=0x004528; 	J(CALLF(locate_text_res,0));	// 7746 call    locate_text_res ;~ 01A2:4528
cs=0x1a2;eip=0x00452d; 	T(ADD(sp, 6));	// 7747 add     sp, 6 ;~ 01A2:452D
cs=0x1a2;eip=0x004530; 	X(PUSH(dx));	// 7748 push    dx ;~ 01A2:4530
cs=0x1a2;eip=0x004531; 	X(PUSH(ax));	// 7749 push    ax ;~ 01A2:4531
cs=0x1a2;eip=0x004532; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 7750 mov     ax, offset resID_byte1 ;~ 01A2:4532
cs=0x1a2;eip=0x004535; 	X(PUSH(ax));	// 7751 push    ax ;~ 01A2:4535
cs=0x1a2;eip=0x004536; 	J(CALLF(copy_string,0));	// 7752 call    copy_string ;~ 01A2:4536
cs=0x1a2;eip=0x00453b; 	T(ADD(sp, 6));	// 7753 add     sp, 6 ;~ 01A2:453B
cs=0x1a2;eip=0x00453e; 	T(MOV(ax, offset(dseg,unk_463ea)));	// 7754 mov     ax, offset unk_463EA ;~ 01A2:453E
cs=0x1a2;eip=0x004541; 	X(PUSH(ax));	// 7755 push    ax ;~ 01A2:4541
cs=0x1a2;eip=0x004542; 	T(ax = bp+var_400);	// 7756 lea     ax, [bp+var_400] ;~ 01A2:4542
cs=0x1a2;eip=0x004546; 	X(PUSH(ax));	// 7757 push    ax              ; char * ;~ 01A2:4546
cs=0x1a2;eip=0x004547; 	J(CALLF(_strcat,0));	// 7758 call    _strcat ;~ 01A2:4547
cs=0x1a2;eip=0x00454c; 	T(ADD(sp, 4));	// 7759 add     sp, 4 ;~ 01A2:454C
cs=0x1a2;eip=0x00454f; 	T(SUB(si, si));	// 7760 sub     si, si ;~ 01A2:454F
loc_14551:
	// 4758 
cs=0x1a2;eip=0x004551; 	T(MOV(al, *((&resid_byte1)+si)));	// 7763 mov     al, resID_byte1[si] ;~ 01A2:4551
cs=0x1a2;eip=0x004555; 	X(MOV(*(raddr(ss,bp+si+var_406)), al));	// 7764 mov     [bp+si+var_406], al ;~ 01A2:4555
cs=0x1a2;eip=0x004559; 	T(INC(si));	// 7765 inc     si ;~ 01A2:4559
cs=0x1a2;eip=0x00455a; 	T(CMP(si, 6));	// 7766 cmp     si, 6 ;~ 01A2:455A
cs=0x1a2;eip=0x00455d; 	J(JL(loc_14551));	// 7767 jl      short loc_14551 ;~ 01A2:455D
cs=0x1a2;eip=0x00455f; 	T(SUB(ax, ax));	// 7768 sub     ax, ax ;~ 01A2:455F
cs=0x1a2;eip=0x004561; 	X(PUSH(ax));	// 7769 push    ax ;~ 01A2:4561
cs=0x1a2;eip=0x004562; 	T(ax = bp+var_428);	// 7770 lea     ax, [bp+var_428] ;~ 01A2:4562
cs=0x1a2;eip=0x004566; 	X(PUSH(ax));	// 7771 push    ax ;~ 01A2:4566
cs=0x1a2;eip=0x004567; 	X(PUSH(performgraphcolor));	// 7772 push    performGraphColor ;~ 01A2:4567
cs=0x1a2;eip=0x00456b; 	T(MOV(ax, 0x78));	// 7773 mov     ax, 78h ; 'x' ;~ 01A2:456B
cs=0x1a2;eip=0x00456e; 	X(PUSH(ax));	// 7774 push    ax ;~ 01A2:456E
cs=0x1a2;eip=0x00456f; 	T(MOV(ax, 0x0FFFF));	// 7775 mov     ax, 0FFFFh ;~ 01A2:456F
cs=0x1a2;eip=0x004572; 	X(PUSH(ax));	// 7776 push    ax ;~ 01A2:4572
cs=0x1a2;eip=0x004573; 	T(ax = bp+var_400);	// 7777 lea     ax, [bp+var_400] ;~ 01A2:4573
cs=0x1a2;eip=0x004577; 	X(PUSH(ss));	// 7778 push    ss ;~ 01A2:4577
cs=0x1a2;eip=0x004578; 	X(PUSH(ax));	// 7779 push    ax ;~ 01A2:4578
cs=0x1a2;eip=0x004579; 	T(MOV(ax, 1));	// 7780 mov     ax, 1 ;~ 01A2:4579
cs=0x1a2;eip=0x00457c; 	X(PUSH(ax));	// 7781 push    ax ;~ 01A2:457C
cs=0x1a2;eip=0x00457d; 	T(MOV(ax, 3));	// 7782 mov     ax, 3 ;~ 01A2:457D
cs=0x1a2;eip=0x004580; 	X(PUSH(ax));	// 7783 push    ax ;~ 01A2:4580
cs=0x1a2;eip=0x004581; 	J(CALLF(show_dialog,0));	// 7784 call    show_dialog ;~ 01A2:4581
cs=0x1a2;eip=0x004586; 	T(ADD(sp, 0x12));	// 7785 add     sp, 12h ;~ 01A2:4586
cs=0x1a2;eip=0x004589; 	X(MOV(resid_byte3, 0));	// 7786 mov     resID_byte3, 0 ;~ 01A2:4589
cs=0x1a2;eip=0x00458e; 	T(MOV(al, *(raddr(ss,bp+var_406))));	// 7787 mov     al, [bp+var_406] ;~ 01A2:458E
cs=0x1a2;eip=0x004592; 	X(MOV(resid_byte1, al));	// 7788 mov     resID_byte1, al ;~ 01A2:4592
cs=0x1a2;eip=0x004595; 	T(MOV(al, *(raddr(ss,bp+var_405))));	// 7789 mov     al, [bp+var_405] ;~ 01A2:4595
cs=0x1a2;eip=0x004599; 	X(MOV(resid_byte2, al));	// 7790 mov     resID_byte2, al ;~ 01A2:4599
cs=0x1a2;eip=0x00459c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_428+2)))));	// 7791 push    word ptr [bp+var_428+2] ;~ 01A2:459C
cs=0x1a2;eip=0x0045a0; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_428)))));	// 7792 push    word ptr [bp+var_428] ;~ 01A2:45A0
cs=0x1a2;eip=0x0045a4; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 7793 mov     ax, offset resID_byte1 ;~ 01A2:45A4
cs=0x1a2;eip=0x0045a7; 	X(PUSH(ax));	// 7794 push    ax ;~ 01A2:45A7
cs=0x1a2;eip=0x0045a8; 	J(CALLF(font_draw_text,0));	// 7795 call    font_draw_text ;~ 01A2:45A8
cs=0x1a2;eip=0x0045ad; 	T(ADD(sp, 6));	// 7796 add     sp, 6 ;~ 01A2:45AD
cs=0x1a2;eip=0x0045b0; 	T(MOV(al, *(raddr(ss,bp+var_404))));	// 7797 mov     al, [bp+var_404] ;~ 01A2:45B0
cs=0x1a2;eip=0x0045b4; 	X(MOV(resid_byte1, al));	// 7798 mov     resID_byte1, al ;~ 01A2:45B4
cs=0x1a2;eip=0x0045b7; 	T(MOV(al, *(raddr(ss,bp+var_403))));	// 7799 mov     al, [bp+var_403] ;~ 01A2:45B7
cs=0x1a2;eip=0x0045bb; 	X(MOV(resid_byte2, al));	// 7800 mov     resID_byte2, al ;~ 01A2:45BB
cs=0x1a2;eip=0x0045be; 	X(PUSH(*(dw*)(raddr(ss,bp+var_422))));	// 7801 push    [bp+var_422] ;~ 01A2:45BE
cs=0x1a2;eip=0x0045c2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_424))));	// 7802 push    [bp+var_424] ;~ 01A2:45C2
cs=0x1a2;eip=0x0045c6; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 7803 mov     ax, offset resID_byte1 ;~ 01A2:45C6
cs=0x1a2;eip=0x0045c9; 	X(PUSH(ax));	// 7804 push    ax ;~ 01A2:45C9
cs=0x1a2;eip=0x0045ca; 	J(CALLF(font_draw_text,0));	// 7805 call    font_draw_text ;~ 01A2:45CA
cs=0x1a2;eip=0x0045cf; 	T(ADD(sp, 6));	// 7806 add     sp, 6 ;~ 01A2:45CF
cs=0x1a2;eip=0x0045d2; 	T(MOV(al, *(raddr(ss,bp+var_402))));	// 7807 mov     al, [bp+var_402] ;~ 01A2:45D2
cs=0x1a2;eip=0x0045d6; 	X(MOV(resid_byte1, al));	// 7808 mov     resID_byte1, al ;~ 01A2:45D6
cs=0x1a2;eip=0x0045d9; 	T(MOV(al, *(raddr(ss,bp+var_401))));	// 7809 mov     al, [bp+var_401] ;~ 01A2:45D9
cs=0x1a2;eip=0x0045dd; 	X(MOV(resid_byte2, al));	// 7810 mov     resID_byte2, al ;~ 01A2:45DD
cs=0x1a2;eip=0x0045e0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_41e))));	// 7811 push    [bp+var_41E] ;~ 01A2:45E0
cs=0x1a2;eip=0x0045e4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_420))));	// 7812 push    [bp+var_420] ;~ 01A2:45E4
cs=0x1a2;eip=0x0045e8; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 7813 mov     ax, offset resID_byte1 ;~ 01A2:45E8
cs=0x1a2;eip=0x0045eb; 	X(PUSH(ax));	// 7814 push    ax ;~ 01A2:45EB
cs=0x1a2;eip=0x0045ec; 	J(CALLF(font_draw_text,0));	// 7815 call    font_draw_text ;~ 01A2:45EC
cs=0x1a2;eip=0x0045f1; 	T(ADD(sp, 6));	// 7816 add     sp, 6 ;~ 01A2:45F1
cs=0x1a2;eip=0x0045f4; 	T(MOV(ax, offset(dseg,aa00)));	// 7817 mov     ax, offset aA00 ;~ 01A2:45F4
cs=0x1a2;eip=0x0045f7; 	X(PUSH(ax));	// 7818 push    ax ;~ 01A2:45F7
cs=0x1a2;eip=0x0045f8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40a))));	// 7819 push    [bp+var_40A] ;~ 01A2:45F8
cs=0x1a2;eip=0x0045fc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40c))));	// 7820 push    [bp+var_40C] ;~ 01A2:45FC
cs=0x1a2;eip=0x004600; 	J(CALLF(locate_text_res,0));	// 7821 call    locate_text_res ;~ 01A2:4600
cs=0x1a2;eip=0x004605; 	T(ADD(sp, 6));	// 7822 add     sp, 6 ;~ 01A2:4605
cs=0x1a2;eip=0x004608; 	X(PUSH(dx));	// 7823 push    dx ;~ 01A2:4608
cs=0x1a2;eip=0x004609; 	X(PUSH(ax));	// 7824 push    ax ;~ 01A2:4609
cs=0x1a2;eip=0x00460a; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 7825 mov     ax, offset resID_byte1 ;~ 01A2:460A
cs=0x1a2;eip=0x00460d; 	X(PUSH(ax));	// 7826 push    ax ;~ 01A2:460D
cs=0x1a2;eip=0x00460e; 	J(CALLF(copy_string,0));	// 7827 call    copy_string ;~ 01A2:460E
cs=0x1a2;eip=0x004613; 	T(ADD(sp, 6));	// 7828 add     sp, 6 ;~ 01A2:4613
cs=0x1a2;eip=0x004616; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_41c))));	// 7829 mov     ax, [bp+var_41C] ;~ 01A2:4616
cs=0x1a2;eip=0x00461a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_41a))));	// 7830 mov     dx, [bp+var_41A] ;~ 01A2:461A
cs=0x1a2;eip=0x00461e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_428))), ax));	// 7831 mov     word ptr [bp+var_428], ax ;~ 01A2:461E
cs=0x1a2;eip=0x004622; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_428+2))), dx));	// 7832 mov     word ptr [bp+var_428+2], dx ;~ 01A2:4622
cs=0x1a2;eip=0x004626; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 7833 mov     ax, offset resID_byte1 ;~ 01A2:4626
cs=0x1a2;eip=0x004629; 	X(PUSH(ax));	// 7834 push    ax              ; char * ;~ 01A2:4629
cs=0x1a2;eip=0x00462a; 	J(CALLF(_strlen,0));	// 7835 call    _strlen ;~ 01A2:462A
cs=0x1a2;eip=0x00462f; 	T(ADD(sp, 2));	// 7836 add     sp, 2 ;~ 01A2:462F
cs=0x1a2;eip=0x004632; 	X(MOV(*(dw*)(raddr(ss,bp+var_408)), ax));	// 7837 mov     [bp+var_408], ax ;~ 01A2:4632
cs=0x1a2;eip=0x004636; 	X(MOV(*(raddr(ss,bp+var_43e)), 0));	// 7838 mov     [bp+var_43E], 0 ;~ 01A2:4636
cs=0x1a2;eip=0x00463b; 	X(MOV(*(dw*)(raddr(ss,bp+var_40e)), 0));	// 7839 mov     [bp+var_40E], 0 ;~ 01A2:463B
loc_14641:
	// 4759 
cs=0x1a2;eip=0x004641; 	T(MOV(ax, offset(dseg,terraincenterpos)+0x22));	// 7842 mov     ax, (offset terraincenterpos+22h) ;~ 01A2:4641
cs=0x1a2;eip=0x004644; 	T(CWD);	// 7843 cwd ;~ 01A2:4644
cs=0x1a2;eip=0x004645; 	X(PUSH(dx));	// 7844 push    dx              ; int ;~ 01A2:4645
cs=0x1a2;eip=0x004646; 	X(PUSH(ax));	// 7845 push    ax              ; int ;~ 01A2:4646
cs=0x1a2;eip=0x004647; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_428+2)))));	// 7846 push    word ptr [bp+var_428+2] ; int ;~ 01A2:4647
cs=0x1a2;eip=0x00464b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_428)))));	// 7847 push    word ptr [bp+var_428] ; int ;~ 01A2:464B
cs=0x1a2;eip=0x00464f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_408))));	// 7848 push    [bp+var_408] ;~ 01A2:464F
cs=0x1a2;eip=0x004653; 	T(ax = bp+var_43e);	// 7849 lea     ax, [bp+var_43E] ;~ 01A2:4653
cs=0x1a2;eip=0x004657; 	X(PUSH(ax));	// 7850 push    ax              ; char * ;~ 01A2:4657
cs=0x1a2;eip=0x004658; 	J(CALLF(call_read_line,0));	// 7851 call    call_read_line ;~ 01A2:4658
cs=0x1a2;eip=0x00465d; 	T(ADD(sp, 0x0C));	// 7852 add     sp, 0Ch ;~ 01A2:465D
cs=0x1a2;eip=0x004660; 	T(SUB(si, si));	// 7853 sub     si, si ;~ 01A2:4660
cs=0x1a2;eip=0x004662; 	J(JMP(loc_1468d));	// 7854 jmp     short loc_1468D ;~ 01A2:4662
loc_14664:
	// 4760 
cs=0x1a2;eip=0x004664; 	T(MOV(al, *(raddr(ss,bp+si+var_43e))));	// 7858 mov     al, [bp+si+var_43E] ;~ 01A2:4664
cs=0x1a2;eip=0x004668; 	T(CBW);	// 7859 cbw ;~ 01A2:4668
cs=0x1a2;eip=0x004669; 	T(MOV(bx, ax));	// 7860 mov     bx, ax ;~ 01A2:4669
cs=0x1a2;eip=0x00466b; 	T(MOV(al, *((g_ascii_props)+bx)));	// 7861 mov     al, g_ascii_props[bx] ;~ 01A2:466B
cs=0x1a2;eip=0x00466f; 	T(AND(al, 1));	// 7862 and     al, 1 ;~ 01A2:466F
cs=0x1a2;eip=0x004671; 	X(MOV(*(raddr(ss,bp+var_440)), al));	// 7863 mov     [bp+var_440], al ;~ 01A2:4671
cs=0x1a2;eip=0x004675; 	T(OR(al, al));	// 7864 or      al, al ;~ 01A2:4675
cs=0x1a2;eip=0x004677; 	J(JZ(loc_1468c));	// 7865 jz      short loc_1468C ;~ 01A2:4677
cs=0x1a2;eip=0x004679; 	J(JZ(loc_14684));	// 7866 jz      short loc_14684 ;~ 01A2:4679
cs=0x1a2;eip=0x00467b; 	T(MOV(al, *(raddr(ss,bp+si+var_43e))));	// 7867 mov     al, [bp+si+var_43E] ;~ 01A2:467B
cs=0x1a2;eip=0x00467f; 	T(ADD(al, 0x20));	// 7868 add     al, 20h ; ' ' ;~ 01A2:467F
cs=0x1a2;eip=0x004681; 	J(JMP(loc_14688));	// 7869 jmp     short loc_14688 ;~ 01A2:4681
loc_14684:
	// 4761 
cs=0x1a2;eip=0x004684; 	T(MOV(al, *(raddr(ss,bp+si+var_43e))));	// 7874 mov     al, [bp+si+var_43E] ;~ 01A2:4684
loc_14688:
	// 4762 
cs=0x1a2;eip=0x004688; 	X(MOV(*(raddr(ss,bp+si+var_43e)), al));	// 7877 mov     [bp+si+var_43E], al ;~ 01A2:4688
loc_1468c:
	// 4763 
cs=0x1a2;eip=0x00468c; 	T(INC(si));	// 7880 inc     si ;~ 01A2:468C
loc_1468d:
	// 4764 
cs=0x1a2;eip=0x00468d; 	T(CMP(*(raddr(ss,bp+si+var_43e)), 0));	// 7883 cmp     [bp+si+var_43E], 0 ;~ 01A2:468D
cs=0x1a2;eip=0x004692; 	J(JNZ(loc_14664));	// 7884 jnz     short loc_14664 ;~ 01A2:4692
cs=0x1a2;eip=0x004694; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 7885 mov     ax, offset resID_byte1 ;~ 01A2:4694
cs=0x1a2;eip=0x004697; 	X(PUSH(ax));	// 7886 push    ax ;~ 01A2:4697
cs=0x1a2;eip=0x004698; 	T(ax = bp+var_43e);	// 7887 lea     ax, [bp+var_43E] ;~ 01A2:4698
cs=0x1a2;eip=0x00469c; 	X(PUSH(ax));	// 7888 push    ax              ; char * ;~ 01A2:469C
cs=0x1a2;eip=0x00469d; 	J(CALLF(_strcmp,0));	// 7889 call    _strcmp ;~ 01A2:469D
cs=0x1a2;eip=0x0046a2; 	T(ADD(sp, 4));	// 7890 add     sp, 4 ;~ 01A2:46A2
cs=0x1a2;eip=0x0046a5; 	T(OR(ax, ax));	// 7891 or      ax, ax ;~ 01A2:46A5
cs=0x1a2;eip=0x0046a7; 	J(JNZ(loc_146b0));	// 7892 jnz     short loc_146B0 ;~ 01A2:46A7
cs=0x1a2;eip=0x0046a9; 	X(MOV(passed_security, 1));	// 7893 mov     passed_security, 1 ;~ 01A2:46A9
cs=0x1a2;eip=0x0046ae; 	J(JMP(loc_146b4));	// 7894 jmp     short loc_146B4 ;~ 01A2:46AE
loc_146b0:
	// 4765 
cs=0x1a2;eip=0x0046b0; 	X(INC(*(dw*)(raddr(ss,bp+var_40e))));	// 7898 inc     [bp+var_40E] ;~ 01A2:46B0
loc_146b4:
	// 4766 
cs=0x1a2;eip=0x0046b4; 	T(CMP(passed_security, 0));	// 7901 cmp     passed_security, 0 ;~ 01A2:46B4
cs=0x1a2;eip=0x0046b9; 	J(JNZ(loc_146c5));	// 7902 jnz     short loc_146C5 ;~ 01A2:46B9
cs=0x1a2;eip=0x0046bb; 	T(CMP(*(dw*)(raddr(ss,bp+var_40e)), 3));	// 7903 cmp     [bp+var_40E], 3 ;~ 01A2:46BB
cs=0x1a2;eip=0x0046c0; 	J(JZ(loc_146c5));	// 7904 jz      short loc_146C5 ;~ 01A2:46C0
cs=0x1a2;eip=0x0046c2; 	J(JMP(loc_14641));	// 7905 jmp     loc_14641 ;~ 01A2:46C2
loc_146c5:
	// 4767 
cs=0x1a2;eip=0x0046c5; 	J(CALLF(sub_275c6,0));	// 7910 call    sub_275C6 ;~ 01A2:46C5
cs=0x1a2;eip=0x0046ca; 	J(CALLF(mouse_draw_transparent_check,0));	// 7911 call    mouse_draw_transparent_check ;~ 01A2:46CA
cs=0x1a2;eip=0x0046cf; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40a))));	// 7912 push    [bp+var_40A] ;~ 01A2:46CF
cs=0x1a2;eip=0x0046d3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40c))));	// 7913 push    [bp+var_40C] ;~ 01A2:46D3
cs=0x1a2;eip=0x0046d7; 	J(CALLF(unload_resource,0));	// 7914 call    unload_resource ;~ 01A2:46D7
cs=0x1a2;eip=0x0046dc; 	T(ADD(sp, 4));	// 7915 add     sp, 4 ;~ 01A2:46DC
cs=0x1a2;eip=0x0046df; 	X(POP(si));	// 7916 pop     si ;~ 01A2:46DF
cs=0x1a2;eip=0x0046e0; 	T(MOV(sp, bp));	// 7917 mov     sp, bp ;~ 01A2:46E0
cs=0x1a2;eip=0x0046e2; 	X(POP(bp));	// 7918 pop     bp ;~ 01A2:46E2
cs=0x1a2;eip=0x0046e3; 	J(RETF(0));	// 7919 retf ;~ 01A2:46E3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
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
        case m2c::ksecurity_check: 	goto security_check;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool set_default_car(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    set_default_car:
    _begin:
cs=0x1a2;eip=0x0046e4; 	X(MOV(gameconfig, 0x43));	// 7927 mov     gameconfig, 43h ; 'C' ;~ 01A2:46E4
cs=0x1a2;eip=0x0046e9; 	X(MOV(byte_449a5, 0x4F));	// 7928 mov     byte_449A5, 4Fh ; 'O' ;~ 01A2:46E9
cs=0x1a2;eip=0x0046ee; 	X(MOV(byte_449a6, 0x55));	// 7929 mov     byte_449A6, 55h ; 'U' ;~ 01A2:46EE
cs=0x1a2;eip=0x0046f3; 	X(MOV(byte_449a7, 0x4E));	// 7930 mov     byte_449A7, 4Eh ; 'N' ;~ 01A2:46F3
cs=0x1a2;eip=0x0046f8; 	X(MOV(byte_449a8, 0));	// 7931 mov     byte_449A8, 0 ;~ 01A2:46F8
cs=0x1a2;eip=0x0046fd; 	X(MOV(byte_449aa, 0));	// 7932 mov     byte_449AA, 0 ;~ 01A2:46FD
cs=0x1a2;eip=0x004702; 	X(MOV(byte_449af, 0));	// 7933 mov     byte_449AF, 0 ;~ 01A2:4702
cs=0x1a2;eip=0x004707; 	X(MOV(byte_449a9, 1));	// 7934 mov     byte_449A9, 1 ;~ 01A2:4707
cs=0x1a2;eip=0x00470c; 	X(MOV(byte_449ab, 0x0FF));	// 7935 mov     byte_449AB, 0FFh ;~ 01A2:470C
cs=0x1a2;eip=0x004711; 	J(RETF(0));	// 7936 retf ;~ 01A2:4711

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kset_default_car: 	goto set_default_car;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

