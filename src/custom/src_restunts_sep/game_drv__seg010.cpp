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
start:
	// 57024 
cs=0x1e67;eip=0x000012; 	T(MOV(ah, 0x30));	// 57025 mov     ah, 30h ;~ 1E67:0012
cs=0x1e67;eip=0x000014; 	R(_INT(0x21));	// 57026 int     21h             ; DOS - GET DOS VERSION ;~ 1E67:0014
cs=0x1e67;eip=0x000016; 	T(CMP(al, 2));	// 57028 cmp     al, 2 ;~ 1E67:0016
cs=0x1e67;eip=0x000018; 	J(JNC(loc_2cc6c));	// 57029 jnb     short loc_2CC6C ;~ 1E67:0018
cs=0x1e67;eip=0x00001a; 	R(_INT(0x20));	// 57030 int     20h             ; DOS - PROGRAM TERMINATION ;~ 1E67:001A
loc_2cc6c:
	// 8029 
cs=0x1e67;eip=0x00001c; 	T(MOV(di, seg_offset(dseg)));	// 57035 mov     di, seg dseg ;~ 1E67:001C
cs=0x1e67;eip=0x00001f; 	T(MOV(si, *(dw*)(raddr(ds,2))));	// 57036 mov     si, ds:2        ; pspseg:2 = Memory size in paragraphs ;~ 1E67:001F
cs=0x1e67;eip=0x000023; 	T(SUB(si, di));	// 57038 sub     si, di ;~ 1E67:0023
cs=0x1e67;eip=0x000025; 	T(CMP(si, 0x1000));	// 57039 cmp     si, 1000h ;~ 1E67:0025
cs=0x1e67;eip=0x000029; 	J(JC(loc_2cc7e));	// 57040 jb      short loc_2CC7E ;~ 1E67:0029
cs=0x1e67;eip=0x00002b; 	T(MOV(si, 0x1000));	// 57041 mov     si, 1000h       ; si = 1000h or memory size if less than 1000h ;~ 1E67:002B
loc_2cc7e:
	// 8030 
cs=0x1e67;eip=0x00002e; 	T(CLI);	// 57044 cli ;~ 1E67:002E
cs=0x1e67;eip=0x00002f; 	R(MOV(ss, di));	// 57045 mov     ss, di          ; ss = dseg ;~ 1E67:002F
cs=0x1e67;eip=0x000031; 	T(ADD(sp, 0x0AD1E));	// 57047 add     sp, 0AD1Eh      ; sp = end of stack in data segment ;~ 1E67:0031
cs=0x1e67;eip=0x000035; 	T(STI);	// 57048 sti ;~ 1E67:0035
cs=0x1e67;eip=0x000036; 	J(JNC(_no_stack_overflow));	// 57049 jnb     short _no_stack_overflow ; check for overflow and abort if there was more than 64k data+stack ;~ 1E67:0036
cs=0x1e67;eip=0x000038; 	X(PUSH(ss));	// 57050 push    ss ;~ 1E67:0038
cs=0x1e67;eip=0x000039; 	X(POP(ds));	// 57051 pop     ds ;~ 1E67:0039
cs=0x1e67;eip=0x00003a; 	J(CALLF(__ff_msgbanner,0));	// 57053 call    __FF_MSGBANNER ;~ 1E67:003A
cs=0x1e67;eip=0x00003f; 	T(XOR(ax, ax));	// 57054 xor     ax, ax ;~ 1E67:003F
cs=0x1e67;eip=0x000041; 	X(PUSH(ax));	// 57055 push    ax ;~ 1E67:0041
cs=0x1e67;eip=0x000042; 	J(CALLF(__nmsg_write,0));	// 57056 call    __NMSG_WRITE ;~ 1E67:0042
cs=0x1e67;eip=0x000047; 	T(MOV(ax, 0x4CFF));	// 57057 mov     ax, 4CFFh ;~ 1E67:0047
cs=0x1e67;eip=0x00004a; 	R(_INT(0x21));	// 57058 int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 1E67:004A
_no_stack_overflow:
	// 8031 
cs=0x1e67;eip=0x00004c; 	T(AND(sp, 0x0FFFE));	// 57063 and     sp, 0FFFEh ;~ 1E67:004C
cs=0x1e67;eip=0x00004f; 	X(MOV(*(dw*)(((db*)&crtsp1)), sp));	// 57064 mov     ss:crtsp1, sp ;~ 1E67:004F
cs=0x1e67;eip=0x000054; 	X(MOV(*(dw*)(((db*)&crtsp2)), sp));	// 57065 mov     ss:crtsp2, sp ;~ 1E67:0054
cs=0x1e67;eip=0x000059; 	T(MOV(ax, si));	// 57066 mov     ax, si ;~ 1E67:0059
cs=0x1e67;eip=0x00005b; 	T(MOV(cl, 4));	// 57067 mov     cl, 4 ;~ 1E67:005B
cs=0x1e67;eip=0x00005d; 	T(SHL(ax, cl));	// 57068 shl     ax, cl ;~ 1E67:005D
cs=0x1e67;eip=0x00005f; 	T(DEC(ax));	// 57069 dec     ax ;~ 1E67:005F
cs=0x1e67;eip=0x000060; 	X(MOV(*(dw*)(((db*)&word_3ed74)), ax));	// 57070 mov     ss:word_3ED74, ax ; ax = (01000h << 4) - 1 = 0ffffh ;~ 1E67:0060
cs=0x1e67;eip=0x000064; 	T(ADD(si, di));	// 57071 add     si, di ;~ 1E67:0064
cs=0x1e67;eip=0x000066; 	X(MOV(*(dw*)(raddr(ds,2)), si));	// 57072 mov     ds:2, si        ; set memory size in psp?, si = 01000h + dseg ;~ 1E67:0066
cs=0x1e67;eip=0x00006a; 	T(MOV(bx, es));	// 57073 mov     bx, es          ; es = pspseg on startup ;~ 1E67:006A
cs=0x1e67;eip=0x00006c; 	T(SUB(bx, si));	// 57074 sub     bx, si ;~ 1E67:006C
cs=0x1e67;eip=0x00006e; 	T(NEG(bx));	// 57075 neg     bx              ; bx = -(pspseg - si) = -(pspseg - (1000h + dseg)) ;~ 1E67:006E
cs=0x1e67;eip=0x000070; 	T(MOV(ah, 0x4A));	// 57076 mov     ah, 4Ah ;~ 1E67:0070
cs=0x1e67;eip=0x000072; 	R(_INT(0x21));	// 57077 int     21h             ; DOS - 2+ - ADJUST MEMORY BLOCK SIZE (SETBLOCK) ;~ 1E67:0072
cs=0x1e67;eip=0x000074; 	X(MOV(*(dw*)(((db*)&crtpspseg)), ds));	// 57080 mov     ss:crtpspseg, ds ;~ 1E67:0074
cs=0x1e67;eip=0x000079; 	X(PUSH(ss));	// 57081 push    ss ;~ 1E67:0079
cs=0x1e67;eip=0x00007a; 	X(POP(es));	// 57082 pop     es ;~ 1E67:007A
cs=0x1e67;eip=0x00007b; 	T(CLD);	// 57084 cld ;~ 1E67:007B
cs=0x1e67;eip=0x00007c; 	T(NOP);	// 57085 nop                     ; offset in dseg where uninitialized data starts ;~ 1E67:007C
cs=0x1e67;eip=0x00007d; 	T(NOP);	// 57086 nop ;~ 1E67:007D
cs=0x1e67;eip=0x00007e; 	T(NOP);	// 57087 nop ;~ 1E67:007E
cs=0x1e67;eip=0x00007f; 	T(NOP);	// 57088 nop                     ; original size/end of dseg ;~ 1E67:007F
cs=0x1e67;eip=0x000080; 	T(NOP);	// 57089 nop ;~ 1E67:0080
cs=0x1e67;eip=0x000081; 	T(NOP);	// 57090 nop ;~ 1E67:0081
cs=0x1e67;eip=0x000082; 	T(NOP);	// 57091 nop ;~ 1E67:0082
cs=0x1e67;eip=0x000083; 	T(NOP);	// 57092 nop ;~ 1E67:0083
cs=0x1e67;eip=0x000084; 	T(NOP);	// 57093 nop ;~ 1E67:0084
cs=0x1e67;eip=0x000085; 	T(NOP);	// 57094 nop ;~ 1E67:0085
cs=0x1e67;eip=0x000086; 	T(NOP);	// 57095 nop                     ; initialize uninitialized data to 0 ;~ 1E67:0086
cs=0x1e67;eip=0x000087; 	T(NOP);	// 57096 nop ;~ 1E67:0087
cs=0x1e67;eip=0x000088; 	X(PUSH(ss));	// 57097 push    ss ;~ 1E67:0088
cs=0x1e67;eip=0x000089; 	X(POP(ds));	// 57098 pop     ds ;~ 1E67:0089
cs=0x1e67;eip=0x00008a; 	J(CALLF(sub_2cd28,0));	// 57099 call    sub_2CD28 ;~ 1E67:008A
cs=0x1e67;eip=0x00008f; 	X(PUSH(ss));	// 57100 push    ss ;~ 1E67:008F
cs=0x1e67;eip=0x000090; 	X(POP(ds));	// 57101 pop     ds ;~ 1E67:0090
cs=0x1e67;eip=0x000091; 	J(CALLF(__setenvp,0));	// 57102 call    __setenvp ;~ 1E67:0091
seg_1e67_96:
cs=0x1e67;eip=0x000096; 	J(CALLF(__setargv,0));	// 57103 call    far ptr __setargv ;~ 1E67:0096
seg_1e67_9b:
cs=0x1e67;eip=0x00009b; 	T(XOR(bp, bp));	// 57104 xor     bp, bp ;~ 1E67:009B
cs=0x1e67;eip=0x00009d; 	X(PUSH(p_argv_));	// 57105 push    p_argv_         ; p_argv ;~ 1E67:009D
cs=0x1e67;eip=0x0000a1; 	X(PUSH(argv_));	// 57106 push    argv_           ; p_argv ;~ 1E67:00A1
cs=0x1e67;eip=0x0000a5; 	X(PUSH(argc_));	// 57107 push    argc_           ; p_argc ;~ 1E67:00A5
cs=0x1e67;eip=0x0000a9; 	J(CALLF(stuntsmain,0));	// 57108 call    stuntsmain ;~ 1E67:00A9
cs=0x1e67;eip=0x0000ae; 	X(PUSH(ax));	// 57109 push    ax ;~ 1E67:00AE
cs=0x1e67;eip=0x0000af; 	J(CALLF(libsub_quit_to_dos_alt,0));	// 57110 call    far ptr libsub_quit_to_dos_alt ;~ 1E67:00AF
__cintdiv:
	// 8032 
cs=0x1e67;eip=0x0000b4; 	T(MOV(ax, seg_offset(dseg)));	// 57114 mov     ax, seg dseg ;~ 1E67:00B4
cs=0x1e67;eip=0x0000b7; 	T(MOV(ds, ax));	// 57115 mov     ds, ax ;~ 1E67:00B7
cs=0x1e67;eip=0x0000b9; 	T(MOV(ax, 3));	// 57116 mov     ax, 3 ;~ 1E67:00B9
cs=0x1e67;eip=0x0000bc; 	X(MOV(*(dw*)(((db*)&crtquitfunction)), m2c::klibsub_quit_to_dos_alt));	// 57117 mov     ss:crtquitfunction, offset libsub_quit_to_dos_alt ;~ 1E67:00BC
__amsg_exit:
	// 8033 
cs=0x1e67;eip=0x0000c3; 	X(PUSH(ax));	// 57121 push    ax ;~ 1E67:00C3
cs=0x1e67;eip=0x0000c4; 	J(CALLF(__ff_msgbanner,0));	// 57122 call    __FF_MSGBANNER ;~ 1E67:00C4
cs=0x1e67;eip=0x0000c9; 	J(CALLF(__nmsg_write,0));	// 57123 call    __NMSG_WRITE ;~ 1E67:00C9
cs=0x1e67;eip=0x0000ce; 	T(MOV(ax, 0x0FF));	// 57124 mov     ax, 0FFh ;~ 1E67:00CE
cs=0x1e67;eip=0x0000d1; 	X(PUSH(ax));	// 57125 push    ax ;~ 1E67:00D1
cs=0x1e67;eip=0x0000d2; 	X(PUSH(cs));	// 57126 push    cs ;~ 1E67:00D2
cs=0x1e67;eip=0x0000d3; 	J(CALL(__dispatch_call,crtquitfunction));	// 57127 call    crtquitfunction ;~ 1E67:00D3
	R(JMP(sub_2cd28));sub_2cd28:
	// 57136 
cs=0x1e67;eip=0x0000d8; 	T(MOV(ah, 0x30));	// 57137 mov     ah, 30h ;~ 1E67:00D8
cs=0x1e67;eip=0x0000da; 	R(_INT(0x21));	// 57138 int     21h             ; DOS - GET DOS VERSION ;~ 1E67:00DA
cs=0x1e67;eip=0x0000dc; 	X(MOV(crtdosversion, ax));	// 57140 mov     crtdosversion, ax ;~ 1E67:00DC
cs=0x1e67;eip=0x0000df; 	T(MOV(ax, 0x3500));	// 57141 mov     ax, 3500h ;~ 1E67:00DF
cs=0x1e67;eip=0x0000e2; 	R(_INT(0x21));	// 57142 int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 1E67:00E2
cs=0x1e67;eip=0x0000e4; 	X(MOV(*(dw*)(((db*)&crtintrvec0)), bx));	// 57145 mov     word ptr crtintrvec0, bx ;~ 1E67:00E4
cs=0x1e67;eip=0x0000e8; 	X(MOV(*(dw*)(((db*)&crtintrvec0)+2), es));	// 57146 mov     word ptr crtintrvec0+2, es ;~ 1E67:00E8
cs=0x1e67;eip=0x0000ec; 	X(PUSH(cs));	// 57147 push    cs ;~ 1E67:00EC
cs=0x1e67;eip=0x0000ed; 	X(POP(ds));	// 57148 pop     ds ;~ 1E67:00ED
cs=0x1e67;eip=0x0000ee; 	T(MOV(ax, 0x2500));	// 57150 mov     ax, 2500h ;~ 1E67:00EE
cs=0x1e67;eip=0x0000f1; 	T(MOV(dx, m2c::k__cintdiv));	// 57151 mov     dx, offset __cintDIV ;~ 1E67:00F1
cs=0x1e67;eip=0x0000f4; 	R(_INT(0x21));	// 57152 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 1E67:00F4
cs=0x1e67;eip=0x0000f6; 	X(PUSH(ss));	// 57155 push    ss ;~ 1E67:00F6
cs=0x1e67;eip=0x0000f7; 	X(POP(ds));	// 57156 pop     ds ;~ 1E67:00F7
cs=0x1e67;eip=0x0000f8; 	T(MOV(cx, *(dw*)(((db*)&dword_40c1e)+2)));	// 57158 mov     cx, word ptr dword_40C1E+2 ;~ 1E67:00F8
cs=0x1e67;eip=0x0000fc; 	J(JCXZ(loc_2cd7c));	// 57159 jcxz    short loc_2CD7C ;~ 1E67:00FC
cs=0x1e67;eip=0x0000fe; 	T(MOV(es, crtpspseg));	// 57160 mov     es, crtpspseg ;~ 1E67:00FE
cs=0x1e67;eip=0x000102; 	T(MOV(si, *(dw*)(raddr(es,0x2C))));	// 57162 mov     si, es:2Ch      ; si = environment segment ;~ 1E67:0102
cs=0x1e67;eip=0x000107; 	T(LDS(ax, dword_40c22));	// 57163 lds     ax, dword_40C22 ;~ 1E67:0107
cs=0x1e67;eip=0x00010b; 	T(MOV(dx, ds));	// 57164 mov     dx, ds ;~ 1E67:010B
cs=0x1e67;eip=0x00010d; 	T(XOR(bx, bx));	// 57165 xor     bx, bx ;~ 1E67:010D
cs=0x1e67;eip=0x00010f; 	J(CALLF(__dispatch_call,*(dd*)(((db*)&dword_40c1e))));	// 57166 call    ss:dword_40C1E ;~ 1E67:010F
cs=0x1e67;eip=0x000114; 	J(JNC(loc_2cd6b));	// 57167 jnb     short loc_2CD6B ;~ 1E67:0114
cs=0x1e67;eip=0x000116; 	X(PUSH(ss));	// 57168 push    ss ;~ 1E67:0116
cs=0x1e67;eip=0x000117; 	X(POP(ds));	// 57169 pop     ds ;~ 1E67:0117
cs=0x1e67;eip=0x000118; 	J(return __fptrap(0, _state););	// 57170 jmp     __fptrap ;~ 1E67:0118
loc_2cd6b:
	// 8034 
cs=0x1e67;eip=0x00011b; 	T(LDS(ax, *(dd*)(((db*)&dword_40c26))));	// 57174 lds     ax, ss:dword_40C26 ;~ 1E67:011B
cs=0x1e67;eip=0x000120; 	T(MOV(dx, ds));	// 57175 mov     dx, ds ;~ 1E67:0120
cs=0x1e67;eip=0x000122; 	T(MOV(bx, 3));	// 57176 mov     bx, 3 ;~ 1E67:0122
cs=0x1e67;eip=0x000125; 	J(CALLF(__dispatch_call,*(dd*)(((db*)&dword_40c1e))));	// 57177 call    ss:dword_40C1E ;~ 1E67:0125
cs=0x1e67;eip=0x00012a; 	X(PUSH(ss));	// 57178 push    ss ;~ 1E67:012A
cs=0x1e67;eip=0x00012b; 	X(POP(ds));	// 57179 pop     ds ;~ 1E67:012B
loc_2cd7c:
	// 8035 
cs=0x1e67;eip=0x00012c; 	T(MOV(es, crtpspseg));	// 57182 mov     es, crtpspseg ;~ 1E67:012C
cs=0x1e67;eip=0x000130; 	T(MOV(cx, *(dw*)(raddr(es,0x2C))));	// 57183 mov     cx, es:2Ch      ; es:2C = environment segment ;~ 1E67:0130
cs=0x1e67;eip=0x000135; 	J(JCXZ(loc_2cdbd));	// 57184 jcxz    short loc_2CDBD ;~ 1E67:0135
cs=0x1e67;eip=0x000137; 	T(MOV(es, cx));	// 57185 mov     es, cx ;~ 1E67:0137
cs=0x1e67;eip=0x000139; 	T(XOR(di, di));	// 57186 xor     di, di ;~ 1E67:0139
loc_2cd8b:
	// 8036 
cs=0x1e67;eip=0x00013b; 	T(CMP(*(raddr(es,di)), 0));	// 57189 cmp     byte ptr es:[di], 0 ;~ 1E67:013B
cs=0x1e67;eip=0x00013f; 	J(JZ(loc_2cdbd));	// 57190 jz      short loc_2CDBD ;~ 1E67:013F
cs=0x1e67;eip=0x000141; 	T(MOV(cx, 0x0C));	// 57191 mov     cx, 0Ch ;~ 1E67:0141
cs=0x1e67;eip=0x000144; 	T(MOV(si, offset(dseg,ac_file_info)));	// 57192 mov     si, offset aC_file_info ; ";C_FILE_INFO" ;~ 1E67:0144
	// 57193 repe cmpsb ;~ 1E67:0147
cs=0x1e67;eip=0x000147; 	T(	REPE CMPSB);	// 57193 repe cmpsb ;~ 1E67:0147
cs=0x1e67;eip=0x000149; 	J(JZ(loc_2cda6));	// 57194 jz      short loc_2CDA6 ;~ 1E67:0149
cs=0x1e67;eip=0x00014b; 	T(MOV(cx, 0x7FFF));	// 57195 mov     cx, 7FFFh ;~ 1E67:014B
cs=0x1e67;eip=0x00014e; 	T(XOR(ax, ax));	// 57196 xor     ax, ax ;~ 1E67:014E
	// 57197 repne scasb ;~ 1E67:0150
cs=0x1e67;eip=0x000150; 	T(	REPNE SCASB);	// 57197 repne scasb ;~ 1E67:0150
cs=0x1e67;eip=0x000152; 	J(JNZ(loc_2cdbd));	// 57198 jnz     short loc_2CDBD ;~ 1E67:0152
cs=0x1e67;eip=0x000154; 	J(JMP(loc_2cd8b));	// 57199 jmp     short loc_2CD8B ;~ 1E67:0154
loc_2cda6:
	// 8037 
cs=0x1e67;eip=0x000156; 	X(PUSH(es));	// 57203 push    es ;~ 1E67:0156
cs=0x1e67;eip=0x000157; 	X(PUSH(ds));	// 57204 push    ds ;~ 1E67:0157
cs=0x1e67;eip=0x000158; 	X(POP(es));	// 57205 pop     es ;~ 1E67:0158
cs=0x1e67;eip=0x000159; 	X(POP(ds));	// 57207 pop     ds ;~ 1E67:0159
cs=0x1e67;eip=0x00015a; 	T(MOV(si, di));	// 57208 mov     si, di ;~ 1E67:015A
cs=0x1e67;eip=0x00015c; 	T(MOV(di, offset(dseg,crtfilehandles)));	// 57209 mov     di, offset crtfilehandles ;~ 1E67:015C
cs=0x1e67;eip=0x00015f; 	T(LODSB);	// 57210 lodsb ;~ 1E67:015F
cs=0x1e67;eip=0x000160; 	T(CBW);	// 57211 cbw ;~ 1E67:0160
cs=0x1e67;eip=0x000161; 	T(XCHG(ax, cx));	// 57212 xchg    ax, cx ;~ 1E67:0161
loc_2cdb2:
	// 8038 
cs=0x1e67;eip=0x000162; 	T(LODSB);	// 57215 lodsb ;~ 1E67:0162
cs=0x1e67;eip=0x000163; 	T(INC(al));	// 57216 inc     al ;~ 1E67:0163
cs=0x1e67;eip=0x000165; 	J(JZ(loc_2cdb8));	// 57217 jz      short loc_2CDB8 ;~ 1E67:0165
cs=0x1e67;eip=0x000167; 	T(DEC(ax));	// 57218 dec     ax ;~ 1E67:0167
loc_2cdb8:
	// 8039 
cs=0x1e67;eip=0x000168; 	X(STOSB);	// 57221 stosb ;~ 1E67:0168
cs=0x1e67;eip=0x000169; 	J(LOOP(loc_2cdb2));	// 57222 loop    loc_2CDB2 ;~ 1E67:0169
cs=0x1e67;eip=0x00016b; 	X(PUSH(ss));	// 57223 push    ss ;~ 1E67:016B
cs=0x1e67;eip=0x00016c; 	X(POP(ds));	// 57224 pop     ds ;~ 1E67:016C
loc_2cdbd:
	// 8040 
cs=0x1e67;eip=0x00016d; 	T(MOV(bx, 4));	// 57228 mov     bx, 4 ;~ 1E67:016D
loc_2cdc0:
	// 8041 
cs=0x1e67;eip=0x000170; 	X(AND(*((&crtfilehandles)+bx), 0x0BF));	// 57231 and     crtfilehandles[bx], 0BFh ;~ 1E67:0170
cs=0x1e67;eip=0x000175; 	T(MOV(ax, 0x4400));	// 57232 mov     ax, 4400h ;~ 1E67:0175
cs=0x1e67;eip=0x000178; 	R(_INT(0x21));	// 57233 int     21h             ; DOS - 2+ - IOCTL - GET DEVICE INFORMATION ;~ 1E67:0178
cs=0x1e67;eip=0x00017a; 	J(JC(loc_2cdd6));	// 57235 jb      short loc_2CDD6 ;~ 1E67:017A
cs=0x1e67;eip=0x00017c; 	T(TEST(dl, 0x80));	// 57236 test    dl, 80h ;~ 1E67:017C
cs=0x1e67;eip=0x00017f; 	J(JZ(loc_2cdd6));	// 57237 jz      short loc_2CDD6 ;~ 1E67:017F
cs=0x1e67;eip=0x000181; 	X(OR(*((&crtfilehandles)+bx), 0x40));	// 57238 or      crtfilehandles[bx], 40h ;~ 1E67:0181
loc_2cdd6:
	// 8042 
cs=0x1e67;eip=0x000186; 	T(DEC(bx));	// 57242 dec     bx ;~ 1E67:0186
cs=0x1e67;eip=0x000187; 	J(JNS(loc_2cdc0));	// 57243 jns     short loc_2CDC0 ;~ 1E67:0187
cs=0x1e67;eip=0x000189; 	T(MOV(si, offset(dseg,_flushallptr)));	// 57244 mov     si, offset _flushallptr ;~ 1E67:0189
cs=0x1e67;eip=0x00018c; 	T(MOV(di, offset(dseg,_flushallptr)));	// 57245 mov     di, offset _flushallptr ;~ 1E67:018C
cs=0x1e67;eip=0x00018f; 	J(CALL(sub_2ce77,0));	// 57246 call    sub_2CE77 ;~ 1E67:018F
cs=0x1e67;eip=0x000192; 	T(MOV(si, offset(dseg,_flushallptr)));	// 57247 mov     si, offset _flushallptr ;~ 1E67:0192
cs=0x1e67;eip=0x000195; 	T(MOV(di, offset(dseg,_flushallptr)));	// 57248 mov     di, offset _flushallptr ;~ 1E67:0195
cs=0x1e67;eip=0x000198; 	J(CALL(sub_2ce77,0));	// 57249 call    sub_2CE77 ;~ 1E67:0198
cs=0x1e67;eip=0x00019b; 	J(RETF(0));	// 57250 retf ;~ 1E67:019B
libsub_quit_to_dos_alt:
	// 57258 
cs=0x1e67;eip=0x00019c; 	X(PUSH(bp));	// 57260 push    bp ;~ 1E67:019C
cs=0x1e67;eip=0x00019d; 	T(MOV(bp, sp));	// 57261 mov     bp, sp ;~ 1E67:019D
cs=0x1e67;eip=0x00019f; 	T(MOV(si, offset(dseg,unk_42a24)));	// 57262 mov     si, offset unk_42A24 ;~ 1E67:019F
cs=0x1e67;eip=0x0001a2; 	T(MOV(di, offset(dseg,unk_42a24)));	// 57263 mov     di, offset unk_42A24 ;~ 1E67:01A2
cs=0x1e67;eip=0x0001a5; 	J(CALL(sub_2ce77,0));	// 57264 call    sub_2CE77 ;~ 1E67:01A5
cs=0x1e67;eip=0x0001a8; 	T(MOV(si, offset(dseg,_flushallptr)));	// 57265 mov     si, offset _flushallptr ;~ 1E67:01A8
cs=0x1e67;eip=0x0001ab; 	T(MOV(di, offset(dseg,anmsg)));	// 57266 mov     di, offset aNmsg ; "<<NMSG>>" ;~ 1E67:01AB
cs=0x1e67;eip=0x0001ae; 	J(CALL(sub_2ce77,0));	// 57267 call    sub_2CE77 ;~ 1E67:01AE
cs=0x1e67;eip=0x0001b1; 	J(return libsub_quit_to_dos(m2c::kloc_2ce06, _state););	// 57268 jmp     short loc_2CE06 ;~ 1E67:01B1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__amsg_exit: 	goto __amsg_exit;
        case m2c::k__cintdiv: 	goto __cintdiv;
        case m2c::k_no_stack_overflow: 	goto _no_stack_overflow;
        case m2c::klibsub_quit_to_dos_alt: 	goto libsub_quit_to_dos_alt;
        case m2c::kloc_2cc6c: 	goto loc_2cc6c;
        case m2c::kloc_2cc7e: 	goto loc_2cc7e;
        case m2c::kloc_2cd6b: 	goto loc_2cd6b;
        case m2c::kloc_2cd7c: 	goto loc_2cd7c;
        case m2c::kloc_2cd8b: 	goto loc_2cd8b;
        case m2c::kloc_2cda6: 	goto loc_2cda6;
        case m2c::kloc_2cdb2: 	goto loc_2cdb2;
        case m2c::kloc_2cdb8: 	goto loc_2cdb8;
        case m2c::kloc_2cdbd: 	goto loc_2cdbd;
        case m2c::kloc_2cdc0: 	goto loc_2cdc0;
        case m2c::kloc_2cdd6: 	goto loc_2cdd6;
        case m2c::kstart: 	goto start;
        case m2c::ksub_2cd28: 	goto sub_2cd28;
        case m2c::kseg_1e67_96: 	goto seg_1e67_96;
        case m2c::kseg_1e67_9b: 	goto seg_1e67_9b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool libsub_quit_to_dos(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    libsub_quit_to_dos:
    _begin:
#undef arg_2
#define arg_2 6
	// 57279 arg_2           = word ptr  6 ;~ 1E67:01B3
cs=0x1e67;eip=0x0001b3; 	X(PUSH(bp));	// 57281 push    bp ;~ 1E67:01B3
cs=0x1e67;eip=0x0001b4; 	T(MOV(bp, sp));	// 57282 mov     bp, sp ;~ 1E67:01B4
loc_2ce06:
	// 8043 
cs=0x1e67;eip=0x0001b6; 	T(MOV(si, offset(dseg,anmsg)));	// 57285 mov     si, offset aNmsg ; "<<NMSG>>" ;~ 1E67:01B6
cs=0x1e67;eip=0x0001b9; 	T(MOV(di, offset(dseg,anmsg)));	// 57286 mov     di, offset aNmsg ; "<<NMSG>>" ;~ 1E67:01B9
cs=0x1e67;eip=0x0001bc; 	J(CALL(sub_2ce77,0));	// 57287 call    sub_2CE77 ;~ 1E67:01BC
cs=0x1e67;eip=0x0001bf; 	T(MOV(si, offset(dseg,anmsg)));	// 57288 mov     si, offset aNmsg ; "<<NMSG>>" ;~ 1E67:01BF
cs=0x1e67;eip=0x0001c2; 	T(MOV(di, offset(dseg,anmsg)));	// 57289 mov     di, offset aNmsg ; "<<NMSG>>" ;~ 1E67:01C2
cs=0x1e67;eip=0x0001c5; 	J(CALL(sub_2ce77,0));	// 57290 call    sub_2CE77 ;~ 1E67:01C5
cs=0x1e67;eip=0x0001c8; 	J(CALLF(__nullcheck,0));	// 57291 call    __nullcheck ;~ 1E67:01C8
cs=0x1e67;eip=0x0001cd; 	T(OR(ax, ax));	// 57292 or      ax, ax ;~ 1E67:01CD
cs=0x1e67;eip=0x0001cf; 	J(JZ(loc_2ce2c));	// 57293 jz      short loc_2CE2C ;~ 1E67:01CF
cs=0x1e67;eip=0x0001d1; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 57294 cmp     [bp+arg_2], 0 ;~ 1E67:01D1
cs=0x1e67;eip=0x0001d5; 	J(JNZ(loc_2ce2c));	// 57295 jnz     short loc_2CE2C ;~ 1E67:01D5
cs=0x1e67;eip=0x0001d7; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), 0x0FF));	// 57296 mov     [bp+arg_2], 0FFh ;~ 1E67:01D7
loc_2ce2c:
	// 8044 
cs=0x1e67;eip=0x0001dc; 	T(MOV(cx, 0x0F));	// 57300 mov     cx, 0Fh ;~ 1E67:01DC
cs=0x1e67;eip=0x0001df; 	T(MOV(bx, 5));	// 57301 mov     bx, 5 ;~ 1E67:01DF
loc_2ce32:
	// 8045 
cs=0x1e67;eip=0x0001e2; 	T(TEST(*((&crtfilehandles)+bx), 1));	// 57304 test    crtfilehandles[bx], 1 ;~ 1E67:01E2
cs=0x1e67;eip=0x0001e7; 	J(JZ(loc_2ce3d));	// 57305 jz      short loc_2CE3D ;~ 1E67:01E7
cs=0x1e67;eip=0x0001e9; 	T(MOV(ah, 0x3E));	// 57306 mov     ah, 3Eh ;~ 1E67:01E9
cs=0x1e67;eip=0x0001eb; 	R(_INT(0x21));	// 57307 int     21h             ; DOS - 2+ - CLOSE A FILE WITH HANDLE ;~ 1E67:01EB
loc_2ce3d:
	// 8046 
cs=0x1e67;eip=0x0001ed; 	T(INC(bx));	// 57311 inc     bx ;~ 1E67:01ED
cs=0x1e67;eip=0x0001ee; 	J(LOOP(loc_2ce32));	// 57312 loop    loc_2CE32 ;~ 1E67:01EE
cs=0x1e67;eip=0x0001f0; 	J(CALL(sub_2ce4a,0));	// 57313 call    sub_2CE4A ;~ 1E67:01F0
cs=0x1e67;eip=0x0001f3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 57314 mov     ax, [bp+arg_2] ;~ 1E67:01F3
cs=0x1e67;eip=0x0001f6; 	T(MOV(ah, 0x4C));	// 57315 mov     ah, 4Ch ;~ 1E67:01F6
cs=0x1e67;eip=0x0001f8; 	R(_INT(0x21));	// 57316 int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 1E67:01F8
	R(return sub_2ce4a(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::klibsub_quit_to_dos: 	goto libsub_quit_to_dos;
        case m2c::kloc_2ce06: 	goto loc_2ce06;
        case m2c::kloc_2ce2c: 	goto loc_2ce2c;
        case m2c::kloc_2ce32: 	goto loc_2ce32;
        case m2c::kloc_2ce3d: 	goto loc_2ce3d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2ce4a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2ce4a:
    _begin:
cs=0x1e67;eip=0x0001fa; 	T(MOV(cx, *(dw*)(((db*)&dword_40c1e)+2)));	// 57324 mov     cx, word ptr dword_40C1E+2 ;~ 1E67:01FA
cs=0x1e67;eip=0x0001fe; 	J(JCXZ(loc_2ce57));	// 57325 jcxz    short loc_2CE57 ;~ 1E67:01FE
cs=0x1e67;eip=0x000200; 	T(MOV(bx, 2));	// 57326 mov     bx, 2 ;~ 1E67:0200
cs=0x1e67;eip=0x000203; 	J(CALLF(__dispatch_call,dword_40c1e));	// 57327 call    dword_40C1E ;~ 1E67:0203
loc_2ce57:
	// 8047 
cs=0x1e67;eip=0x000207; 	X(PUSH(ds));	// 57330 push    ds ;~ 1E67:0207
cs=0x1e67;eip=0x000208; 	T(LDS(dx, crtintrvec0));	// 57331 lds     dx, crtintrvec0 ;~ 1E67:0208
cs=0x1e67;eip=0x00020c; 	T(MOV(ax, 0x2500));	// 57332 mov     ax, 2500h ;~ 1E67:020C
cs=0x1e67;eip=0x00020f; 	R(_INT(0x21));	// 57333 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 1E67:020F
cs=0x1e67;eip=0x000211; 	X(POP(ds));	// 57336 pop     ds ;~ 1E67:0211
cs=0x1e67;eip=0x000212; 	T(CMP(byte_3ee16, 0));	// 57337 cmp     byte_3EE16, 0 ;~ 1E67:0212
cs=0x1e67;eip=0x000217; 	J(JZ(locret_2ce76));	// 57338 jz      short locret_2CE76 ;~ 1E67:0217
cs=0x1e67;eip=0x000219; 	X(PUSH(ds));	// 57339 push    ds ;~ 1E67:0219
cs=0x1e67;eip=0x00021a; 	T(MOV(al, byte_3ee17));	// 57340 mov     al, byte_3EE17 ;~ 1E67:021A
cs=0x1e67;eip=0x00021d; 	T(LDS(dx, dword_3ee18));	// 57341 lds     dx, dword_3EE18 ;~ 1E67:021D
cs=0x1e67;eip=0x000221; 	T(MOV(ah, 0x25));	// 57342 mov     ah, 25h ;~ 1E67:0221
cs=0x1e67;eip=0x000223; 	R(_INT(0x21));	// 57343 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 1E67:0223
cs=0x1e67;eip=0x000225; 	X(POP(ds));	// 57346 pop     ds ;~ 1E67:0225
locret_2ce76:
	// 8048 
cs=0x1e67;eip=0x000226; 	J(RETN(0));	// 57349 retn ;~ 1E67:0226

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_2ce57: 	goto loc_2ce57;
        case m2c::klocret_2ce76: 	goto locret_2ce76;
        case m2c::ksub_2ce4a: 	goto sub_2ce4a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2ce77(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2ce77:
    _begin:
cs=0x1e67;eip=0x000227; 	T(CMP(si, di));	// 57358 cmp     si, di ;~ 1E67:0227
cs=0x1e67;eip=0x000229; 	J(JNC(locret_2ce89));	// 57359 jnb     short locret_2CE89 ;~ 1E67:0229
cs=0x1e67;eip=0x00022b; 	T(SUB(di, 4));	// 57360 sub     di, 4 ;~ 1E67:022B
cs=0x1e67;eip=0x00022e; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 57361 mov     ax, [di] ;~ 1E67:022E
cs=0x1e67;eip=0x000230; 	T(OR(ax, *(dw*)(raddr(ds,di+2))));	// 57362 or      ax, [di+2] ;~ 1E67:0230
cs=0x1e67;eip=0x000233; 	J(JZ(sub_2ce77));	// 57363 jz      short sub_2CE77 ;~ 1E67:0233
cs=0x1e67;eip=0x000235; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ds,di))));	// 57364 call    dword ptr [di] ;~ 1E67:0235
cs=0x1e67;eip=0x000237; 	J(JMP(sub_2ce77));	// 57365 jmp     short sub_2CE77 ;~ 1E67:0237
locret_2ce89:
	// 8049 
cs=0x1e67;eip=0x000239; 	J(RETN(0));	// 57369 retn ;~ 1E67:0239

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::klocret_2ce89: 	goto locret_2ce89;
        case m2c::ksub_2ce77: 	goto sub_2ce77;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __ff_msgbanner(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __ff_msgbanner:
    _begin:
cs=0x1e67;eip=0x00023a; 	X(PUSH(bp));	// 57379 push    bp ;~ 1E67:023A
cs=0x1e67;eip=0x00023b; 	T(MOV(bp, sp));	// 57380 mov     bp, sp ;~ 1E67:023B
cs=0x1e67;eip=0x00023d; 	T(MOV(ax, 0x0FC));	// 57381 mov     ax, 0FCh ; 'ü' ;~ 1E67:023D
cs=0x1e67;eip=0x000240; 	X(PUSH(ax));	// 57382 push    ax ;~ 1E67:0240
cs=0x1e67;eip=0x000241; 	J(CALLF(__nmsg_write,0));	// 57383 call    __NMSG_WRITE ;~ 1E67:0241
cs=0x1e67;eip=0x000246; 	T(CMP(word_3ee1e, 0));	// 57384 cmp     word_3EE1E, 0 ;~ 1E67:0246
cs=0x1e67;eip=0x00024b; 	J(JZ(loc_2cea1));	// 57385 jz      short loc_2CEA1 ;~ 1E67:024B
cs=0x1e67;eip=0x00024d; 	J(CALLF(__dispatch_call,*(dd*)((&unk_3ee1c))));	// 57386 call    dword ptr unk_3EE1C ;~ 1E67:024D
loc_2cea1:
	// 8050 
cs=0x1e67;eip=0x000251; 	T(MOV(ax, 0x0FF));	// 57389 mov     ax, 0FFh ;~ 1E67:0251
cs=0x1e67;eip=0x000254; 	X(PUSH(ax));	// 57390 push    ax ;~ 1E67:0254
cs=0x1e67;eip=0x000255; 	J(CALLF(__nmsg_write,0));	// 57391 call    __NMSG_WRITE ;~ 1E67:0255
cs=0x1e67;eip=0x00025a; 	T(MOV(sp, bp));	// 57392 mov     sp, bp ;~ 1E67:025A
cs=0x1e67;eip=0x00025c; 	X(POP(bp));	// 57393 pop     bp ;~ 1E67:025C
cs=0x1e67;eip=0x00025d; 	J(RETF(0));	// 57394 retf ;~ 1E67:025D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__ff_msgbanner: 	goto __ff_msgbanner;
        case m2c::kloc_2cea1: 	goto loc_2cea1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __fptrap(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __fptrap:
    _begin:
cs=0x1e67;eip=0x00025e; 	T(MOV(ax, 2));	// 57404 mov     ax, 2 ;~ 1E67:025E
cs=0x1e67;eip=0x000261; 	J(return _group5(m2c::k__amsg_exit, _state););	// 57405 jmp     __amsg_exit ;~ 1E67:0261

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__fptrap: 	goto __fptrap;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __chkstk(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __chkstk:
    _begin:
cs=0x1e67;eip=0x000264; 	X(POP(cx));	// 57414 pop     cx ;~ 1E67:0264
cs=0x1e67;eip=0x000265; 	X(POP(dx));	// 57415 pop     dx ;~ 1E67:0265
cs=0x1e67;eip=0x000266; 	T(MOV(bx, sp));	// 57416 mov     bx, sp ;~ 1E67:0266
cs=0x1e67;eip=0x000268; 	T(SUB(bx, ax));	// 57417 sub     bx, ax ;~ 1E67:0268
cs=0x1e67;eip=0x00026a; 	J(JC(loc_2cec7));	// 57418 jb      short loc_2CEC7 ;~ 1E67:026A
cs=0x1e67;eip=0x00026c; 	T(CMP(bx, word_3ee24));	// 57419 cmp     bx, word_3EE24 ;~ 1E67:026C
cs=0x1e67;eip=0x000270; 	J(JC(loc_2cec7));	// 57420 jb      short loc_2CEC7 ;~ 1E67:0270
cs=0x1e67;eip=0x000272; 	T(MOV(sp, bx));	// 57421 mov     sp, bx ;~ 1E67:0272
cs=0x1e67;eip=0x000274; 	X(PUSH(dx));	// 57422 push    dx ;~ 1E67:0274
cs=0x1e67;eip=0x000275; 	X(PUSH(cx));	// 57423 push    cx ;~ 1E67:0275
cs=0x1e67;eip=0x000276; 	J(RETF(0));	// 57424 retf ;~ 1E67:0276
loc_2cec7:
	// 8051 
cs=0x1e67;eip=0x000277; 	T(MOV(ax, *(dw*)(((db*)&dword_3ee20))));	// 57429 mov     ax, word ptr dword_3EE20 ;~ 1E67:0277
cs=0x1e67;eip=0x00027a; 	T(INC(ax));	// 57430 inc     ax ;~ 1E67:027A
cs=0x1e67;eip=0x00027b; 	J(JNZ(loc_2ced2));	// 57431 jnz     short loc_2CED2 ;~ 1E67:027B
cs=0x1e67;eip=0x00027d; 	T(XOR(ax, ax));	// 57432 xor     ax, ax ;~ 1E67:027D
cs=0x1e67;eip=0x00027f; 	J(return _group5(m2c::k__amsg_exit, _state););	// 57433 jmp     __amsg_exit ;~ 1E67:027F
loc_2ced2:
	// 8052 
cs=0x1e67;eip=0x000282; 	X(PUSH(dx));	// 57437 push    dx ;~ 1E67:0282
cs=0x1e67;eip=0x000283; 	X(PUSH(cx));	// 57438 push    cx ;~ 1E67:0283
cs=0x1e67;eip=0x000284; __disp=dword_3ee20;
	J(return __dispatch_call(__disp, _state););	// 57439 jmp     dword_3EE20 ;~ 1E67:0284

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__chkstk: 	goto __chkstk;
        case m2c::kloc_2cec7: 	goto loc_2cec7;
        case m2c::kloc_2ced2: 	goto loc_2ced2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __nullcheck(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __nullcheck:
    _begin:
cs=0x1e67;eip=0x000288; 	X(PUSH(si));	// 57448 push    si ;~ 1E67:0288
cs=0x1e67;eip=0x000289; 	T(XOR(si, si));	// 57449 xor     si, si ;~ 1E67:0289
cs=0x1e67;eip=0x00028b; 	T(MOV(cx, 0x42));	// 57450 mov     cx, 42h ; 'B' ;~ 1E67:028B
cs=0x1e67;eip=0x00028e; 	T(XOR(ah, ah));	// 57451 xor     ah, ah ;~ 1E67:028E
cs=0x1e67;eip=0x000290; 	T(CLD);	// 57452 cld ;~ 1E67:0290
loc_2cee1:
	// 8053 
cs=0x1e67;eip=0x000291; 	T(LODSB);	// 57455 lodsb ;~ 1E67:0291
cs=0x1e67;eip=0x000292; 	T(XOR(ah, al));	// 57456 xor     ah, al ;~ 1E67:0292
cs=0x1e67;eip=0x000294; 	J(LOOP(loc_2cee1));	// 57457 loop    loc_2CEE1 ;~ 1E67:0294
cs=0x1e67;eip=0x000296; 	T(XOR(ah, 0x55));	// 57458 xor     ah, 55h ;~ 1E67:0296
cs=0x1e67;eip=0x000299; 	J(JZ(loc_2cefc));	// 57459 jz      short loc_2CEFC ;~ 1E67:0299
cs=0x1e67;eip=0x00029b; 	J(CALLF(__ff_msgbanner,0));	// 57460 call    __FF_MSGBANNER ;~ 1E67:029B
cs=0x1e67;eip=0x0002a0; 	T(MOV(ax, 1));	// 57461 mov     ax, 1 ;~ 1E67:02A0
cs=0x1e67;eip=0x0002a3; 	X(PUSH(ax));	// 57462 push    ax ;~ 1E67:02A3
cs=0x1e67;eip=0x0002a4; 	J(CALLF(__nmsg_write,0));	// 57463 call    __NMSG_WRITE ;~ 1E67:02A4
cs=0x1e67;eip=0x0002a9; 	T(MOV(ax, 1));	// 57464 mov     ax, 1 ;~ 1E67:02A9
loc_2cefc:
	// 8054 
cs=0x1e67;eip=0x0002ac; 	X(POP(si));	// 57467 pop     si ;~ 1E67:02AC
cs=0x1e67;eip=0x0002ad; 	J(RETF(0));	// 57468 retf ;~ 1E67:02AD

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__nullcheck: 	goto __nullcheck;
        case m2c::kloc_2cee1: 	goto loc_2cee1;
        case m2c::kloc_2cefc: 	goto loc_2cefc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __setargv(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __setargv:
    _begin:
cs=0x1e67;eip=0x0002ae; 	X(POP(*(dw*)(((db*)&dword_3ee26))));	// 57477 pop     word ptr dword_3EE26 ;~ 1E67:02AE
cs=0x1e67;eip=0x0002b2; 	X(POP(*(dw*)(((db*)&dword_3ee26)+2)));	// 57478 pop     word ptr dword_3EE26+2 ;~ 1E67:02B2
cs=0x1e67;eip=0x0002b6; 	T(MOV(dx, 2));	// 57479 mov     dx, 2 ;~ 1E67:02B6
cs=0x1e67;eip=0x0002b9; 	T(CMP(*(db*)(((db*)&crtdosversion)), dl));	// 57480 cmp     byte ptr crtdosversion, dl ;~ 1E67:02B9
cs=0x1e67;eip=0x0002bd; 	J(JZ(loc_2cf38));	// 57481 jz      short loc_2CF38 ;~ 1E67:02BD
cs=0x1e67;eip=0x0002bf; 	T(MOV(es, crtpspseg));	// 57482 mov     es, crtpspseg ;~ 1E67:02BF
cs=0x1e67;eip=0x0002c3; 	T(MOV(es, *(dw*)(raddr(es,0x2C))));	// 57484 mov     es, word ptr es:2Ch ; es:2c = environemtn segment ;~ 1E67:02C3
cs=0x1e67;eip=0x0002c8; 	X(MOV(crtenvseg, es));	// 57485 mov     crtenvseg, es ;~ 1E67:02C8
cs=0x1e67;eip=0x0002cc; 	T(XOR(ax, ax));	// 57486 xor     ax, ax ;~ 1E67:02CC
cs=0x1e67;eip=0x0002ce; 	T(CWD);	// 57487 cwd ;~ 1E67:02CE
cs=0x1e67;eip=0x0002cf; 	T(MOV(cx, 0x8000));	// 57488 mov     cx, 8000h ;~ 1E67:02CF
cs=0x1e67;eip=0x0002d2; 	T(XOR(di, di));	// 57489 xor     di, di ;~ 1E67:02D2
loc_2cf24:
	// 8055 
	// 57492 repne scasb ;~ 1E67:02D4
cs=0x1e67;eip=0x0002d4; 	T(	REPNE SCASB);	// 57492 repne scasb ;~ 1E67:02D4
cs=0x1e67;eip=0x0002d6; 	T(SCASB);	// 57493 scasb ;~ 1E67:02D6
cs=0x1e67;eip=0x0002d7; 	J(JNZ(loc_2cf24));	// 57494 jnz     short loc_2CF24 ;~ 1E67:02D7
cs=0x1e67;eip=0x0002d9; 	T(INC(di));	// 57495 inc     di ;~ 1E67:02D9
cs=0x1e67;eip=0x0002da; 	T(INC(di));	// 57496 inc     di ;~ 1E67:02DA
cs=0x1e67;eip=0x0002db; 	X(MOV(word_3ee0e, di));	// 57497 mov     word_3EE0E, di ;~ 1E67:02DB
cs=0x1e67;eip=0x0002df; 	T(MOV(cx, 0x0FFFF));	// 57498 mov     cx, 0FFFFh ;~ 1E67:02DF
	// 57499 repne scasb ;~ 1E67:02E2
cs=0x1e67;eip=0x0002e2; 	T(	REPNE SCASB);	// 57499 repne scasb ;~ 1E67:02E2
cs=0x1e67;eip=0x0002e4; 	T(NOT(cx));	// 57500 not     cx ;~ 1E67:02E4
cs=0x1e67;eip=0x0002e6; 	T(MOV(dx, cx));	// 57501 mov     dx, cx ;~ 1E67:02E6
loc_2cf38:
	// 8056 
cs=0x1e67;eip=0x0002e8; 	T(MOV(di, 1));	// 57504 mov     di, 1 ;~ 1E67:02E8
cs=0x1e67;eip=0x0002eb; 	T(MOV(si, 0x81));	// 57505 mov     si, 81h ; '' ;~ 1E67:02EB
cs=0x1e67;eip=0x0002ee; 	T(MOV(ds, crtpspseg));	// 57506 mov     ds, crtpspseg ;~ 1E67:02EE
loc_2cf42:
	// 8057 
cs=0x1e67;eip=0x0002f2; 	T(LODSB);	// 57510 lodsb ;~ 1E67:02F2
cs=0x1e67;eip=0x0002f3; 	T(CMP(al, 0x20));	// 57511 cmp     al, 20h ; ' ' ;~ 1E67:02F3
cs=0x1e67;eip=0x0002f5; 	J(JZ(loc_2cf42));	// 57512 jz      short loc_2CF42 ;~ 1E67:02F5
cs=0x1e67;eip=0x0002f7; 	T(CMP(al, 9));	// 57513 cmp     al, 9 ;~ 1E67:02F7
cs=0x1e67;eip=0x0002f9; 	J(JZ(loc_2cf42));	// 57514 jz      short loc_2CF42 ;~ 1E67:02F9
cs=0x1e67;eip=0x0002fb; 	T(CMP(al, 0x0D));	// 57515 cmp     al, 0Dh ;~ 1E67:02FB
cs=0x1e67;eip=0x0002fd; 	J(JZ(loc_2cfbe));	// 57516 jz      short loc_2CFBE ;~ 1E67:02FD
cs=0x1e67;eip=0x0002ff; 	T(OR(al, al));	// 57517 or      al, al ;~ 1E67:02FF
cs=0x1e67;eip=0x000301; 	J(JZ(loc_2cfbe));	// 57518 jz      short loc_2CFBE ;~ 1E67:0301
cs=0x1e67;eip=0x000303; 	T(INC(di));	// 57519 inc     di ;~ 1E67:0303
loc_2cf54:
	// 8058 
cs=0x1e67;eip=0x000304; 	T(DEC(si));	// 57522 dec     si ;~ 1E67:0304
loc_2cf55:
	// 8059 
cs=0x1e67;eip=0x000305; 	T(LODSB);	// 57526 lodsb ;~ 1E67:0305
cs=0x1e67;eip=0x000306; 	T(CMP(al, 0x20));	// 57527 cmp     al, 20h ; ' ' ;~ 1E67:0306
cs=0x1e67;eip=0x000308; 	J(JZ(loc_2cf42));	// 57528 jz      short loc_2CF42 ;~ 1E67:0308
cs=0x1e67;eip=0x00030a; 	T(CMP(al, 9));	// 57529 cmp     al, 9 ;~ 1E67:030A
cs=0x1e67;eip=0x00030c; 	J(JZ(loc_2cf42));	// 57530 jz      short loc_2CF42 ;~ 1E67:030C
cs=0x1e67;eip=0x00030e; 	T(CMP(al, 0x0D));	// 57531 cmp     al, 0Dh ;~ 1E67:030E
cs=0x1e67;eip=0x000310; 	J(JZ(loc_2cfbe));	// 57532 jz      short loc_2CFBE ;~ 1E67:0310
cs=0x1e67;eip=0x000312; 	T(OR(al, al));	// 57533 or      al, al ;~ 1E67:0312
cs=0x1e67;eip=0x000314; 	J(JZ(loc_2cfbe));	// 57534 jz      short loc_2CFBE ;~ 1E67:0314
cs=0x1e67;eip=0x000316; 	T(CMP(al, 0x22));	// 57535 cmp     al, 22h ; '"' ;~ 1E67:0316
cs=0x1e67;eip=0x000318; 	J(JZ(loc_2cf8e));	// 57536 jz      short loc_2CF8E ;~ 1E67:0318
cs=0x1e67;eip=0x00031a; 	T(CMP(al, 0x5C));	// 57537 cmp     al, 5Ch ; '\' ;~ 1E67:031A
cs=0x1e67;eip=0x00031c; 	J(JZ(loc_2cf71));	// 57538 jz      short loc_2CF71 ;~ 1E67:031C
cs=0x1e67;eip=0x00031e; 	T(INC(dx));	// 57539 inc     dx ;~ 1E67:031E
cs=0x1e67;eip=0x00031f; 	J(JMP(loc_2cf55));	// 57540 jmp     short loc_2CF55 ;~ 1E67:031F
loc_2cf71:
	// 8060 
cs=0x1e67;eip=0x000321; 	T(XOR(cx, cx));	// 57544 xor     cx, cx ;~ 1E67:0321
loc_2cf73:
	// 8061 
cs=0x1e67;eip=0x000323; 	T(INC(cx));	// 57547 inc     cx ;~ 1E67:0323
cs=0x1e67;eip=0x000324; 	T(LODSB);	// 57548 lodsb ;~ 1E67:0324
cs=0x1e67;eip=0x000325; 	T(CMP(al, 0x5C));	// 57549 cmp     al, 5Ch ; '\' ;~ 1E67:0325
cs=0x1e67;eip=0x000327; 	J(JZ(loc_2cf73));	// 57550 jz      short loc_2CF73 ;~ 1E67:0327
cs=0x1e67;eip=0x000329; 	T(CMP(al, 0x22));	// 57551 cmp     al, 22h ; '"' ;~ 1E67:0329
cs=0x1e67;eip=0x00032b; 	J(JZ(loc_2cf81));	// 57552 jz      short loc_2CF81 ;~ 1E67:032B
cs=0x1e67;eip=0x00032d; 	T(ADD(dx, cx));	// 57553 add     dx, cx ;~ 1E67:032D
cs=0x1e67;eip=0x00032f; 	J(JMP(loc_2cf54));	// 57554 jmp     short loc_2CF54 ;~ 1E67:032F
loc_2cf81:
	// 8062 
cs=0x1e67;eip=0x000331; 	T(MOV(ax, cx));	// 57558 mov     ax, cx ;~ 1E67:0331
cs=0x1e67;eip=0x000333; 	T(SHR(cx, 1));	// 57559 shr     cx, 1 ;~ 1E67:0333
cs=0x1e67;eip=0x000335; 	T(ADC(dx, cx));	// 57560 adc     dx, cx ;~ 1E67:0335
cs=0x1e67;eip=0x000337; 	T(TEST(al, 1));	// 57561 test    al, 1 ;~ 1E67:0337
cs=0x1e67;eip=0x000339; 	J(JNZ(loc_2cf55));	// 57562 jnz     short loc_2CF55 ;~ 1E67:0339
cs=0x1e67;eip=0x00033b; 	J(JMP(loc_2cf8e));	// 57563 jmp     short loc_2CF8E ;~ 1E67:033B
loc_2cf8d:
	// 8063 
cs=0x1e67;eip=0x00033d; 	T(DEC(si));	// 57567 dec     si ;~ 1E67:033D
loc_2cf8e:
	// 8064 
cs=0x1e67;eip=0x00033e; 	T(LODSB);	// 57571 lodsb ;~ 1E67:033E
cs=0x1e67;eip=0x00033f; 	T(CMP(al, 0x0D));	// 57572 cmp     al, 0Dh ;~ 1E67:033F
cs=0x1e67;eip=0x000341; 	J(JZ(loc_2cfbe));	// 57573 jz      short loc_2CFBE ;~ 1E67:0341
cs=0x1e67;eip=0x000343; 	T(OR(al, al));	// 57574 or      al, al ;~ 1E67:0343
cs=0x1e67;eip=0x000345; 	J(JZ(loc_2cfbe));	// 57575 jz      short loc_2CFBE ;~ 1E67:0345
cs=0x1e67;eip=0x000347; 	T(CMP(al, 0x22));	// 57576 cmp     al, 22h ; '"' ;~ 1E67:0347
cs=0x1e67;eip=0x000349; 	J(JZ(loc_2cf55));	// 57577 jz      short loc_2CF55 ;~ 1E67:0349
cs=0x1e67;eip=0x00034b; 	T(CMP(al, 0x5C));	// 57578 cmp     al, 5Ch ; '\' ;~ 1E67:034B
cs=0x1e67;eip=0x00034d; 	J(JZ(loc_2cfa2));	// 57579 jz      short loc_2CFA2 ;~ 1E67:034D
cs=0x1e67;eip=0x00034f; 	T(INC(dx));	// 57580 inc     dx ;~ 1E67:034F
cs=0x1e67;eip=0x000350; 	J(JMP(loc_2cf8e));	// 57581 jmp     short loc_2CF8E ;~ 1E67:0350
loc_2cfa2:
	// 8065 
cs=0x1e67;eip=0x000352; 	T(XOR(cx, cx));	// 57585 xor     cx, cx ;~ 1E67:0352
loc_2cfa4:
	// 8066 
cs=0x1e67;eip=0x000354; 	T(INC(cx));	// 57588 inc     cx ;~ 1E67:0354
cs=0x1e67;eip=0x000355; 	T(LODSB);	// 57589 lodsb ;~ 1E67:0355
cs=0x1e67;eip=0x000356; 	T(CMP(al, 0x5C));	// 57590 cmp     al, 5Ch ; '\' ;~ 1E67:0356
cs=0x1e67;eip=0x000358; 	J(JZ(loc_2cfa4));	// 57591 jz      short loc_2CFA4 ;~ 1E67:0358
cs=0x1e67;eip=0x00035a; 	T(CMP(al, 0x22));	// 57592 cmp     al, 22h ; '"' ;~ 1E67:035A
cs=0x1e67;eip=0x00035c; 	J(JZ(loc_2cfb2));	// 57593 jz      short loc_2CFB2 ;~ 1E67:035C
cs=0x1e67;eip=0x00035e; 	T(ADD(dx, cx));	// 57594 add     dx, cx ;~ 1E67:035E
cs=0x1e67;eip=0x000360; 	J(JMP(loc_2cf8d));	// 57595 jmp     short loc_2CF8D ;~ 1E67:0360
loc_2cfb2:
	// 8067 
cs=0x1e67;eip=0x000362; 	T(MOV(ax, cx));	// 57599 mov     ax, cx ;~ 1E67:0362
cs=0x1e67;eip=0x000364; 	T(SHR(cx, 1));	// 57600 shr     cx, 1 ;~ 1E67:0364
cs=0x1e67;eip=0x000366; 	T(ADC(dx, cx));	// 57601 adc     dx, cx ;~ 1E67:0366
cs=0x1e67;eip=0x000368; 	T(TEST(al, 1));	// 57602 test    al, 1 ;~ 1E67:0368
cs=0x1e67;eip=0x00036a; 	J(JNZ(loc_2cf8e));	// 57603 jnz     short loc_2CF8E ;~ 1E67:036A
cs=0x1e67;eip=0x00036c; 	J(JMP(loc_2cf55));	// 57604 jmp     short loc_2CF55 ;~ 1E67:036C
loc_2cfbe:
	// 8068 
cs=0x1e67;eip=0x00036e; 	X(PUSH(ss));	// 57609 push    ss ;~ 1E67:036E
cs=0x1e67;eip=0x00036f; 	X(POP(ds));	// 57610 pop     ds ;~ 1E67:036F
cs=0x1e67;eip=0x000370; 	X(MOV(argc_, di));	// 57611 mov     argc_, di ;~ 1E67:0370
cs=0x1e67;eip=0x000374; 	T(ADD(dx, di));	// 57612 add     dx, di ;~ 1E67:0374
cs=0x1e67;eip=0x000376; 	T(INC(di));	// 57613 inc     di ;~ 1E67:0376
cs=0x1e67;eip=0x000377; 	T(SHL(di, 1));	// 57614 shl     di, 1 ;~ 1E67:0377
cs=0x1e67;eip=0x000379; 	T(ADD(dx, di));	// 57615 add     dx, di ;~ 1E67:0379
cs=0x1e67;eip=0x00037b; 	T(AND(dl, 0x0FE));	// 57616 and     dl, 0FEh ;~ 1E67:037B
cs=0x1e67;eip=0x00037e; 	T(SUB(sp, dx));	// 57617 sub     sp, dx ;~ 1E67:037E
cs=0x1e67;eip=0x000380; 	T(MOV(ax, sp));	// 57618 mov     ax, sp ;~ 1E67:0380
cs=0x1e67;eip=0x000382; 	X(MOV(argv_, ax));	// 57619 mov     argv_, ax ;~ 1E67:0382
cs=0x1e67;eip=0x000385; 	T(MOV(bx, ax));	// 57620 mov     bx, ax ;~ 1E67:0385
cs=0x1e67;eip=0x000387; 	T(ADD(di, bx));	// 57621 add     di, bx ;~ 1E67:0387
cs=0x1e67;eip=0x000389; 	X(PUSH(ss));	// 57622 push    ss ;~ 1E67:0389
cs=0x1e67;eip=0x00038a; 	X(POP(es));	// 57623 pop     es ;~ 1E67:038A
cs=0x1e67;eip=0x00038b; 	X(MOV(*(dw*)(raddr(ss,bx)), di));	// 57625 mov     ss:[bx], di ;~ 1E67:038B
cs=0x1e67;eip=0x00038e; 	T(INC(bx));	// 57626 inc     bx ;~ 1E67:038E
cs=0x1e67;eip=0x00038f; 	T(INC(bx));	// 57627 inc     bx ;~ 1E67:038F
cs=0x1e67;eip=0x000390; 	T(LDS(si, *(dd*)(((db*)&word_3ee0e))));	// 57628 lds     si, dword ptr word_3EE0E ;~ 1E67:0390
loc_2cfe4:
	// 8069 
cs=0x1e67;eip=0x000394; 	T(LODSB);	// 57631 lodsb ;~ 1E67:0394
cs=0x1e67;eip=0x000395; 	X(STOSB);	// 57632 stosb ;~ 1E67:0395
cs=0x1e67;eip=0x000396; 	T(OR(al, al));	// 57633 or      al, al ;~ 1E67:0396
cs=0x1e67;eip=0x000398; 	J(JNZ(loc_2cfe4));	// 57634 jnz     short loc_2CFE4 ;~ 1E67:0398
cs=0x1e67;eip=0x00039a; 	T(MOV(si, 0x81));	// 57635 mov     si, 81h ; '' ;~ 1E67:039A
cs=0x1e67;eip=0x00039d; 	T(MOV(ds, *(dw*)(((db*)&crtpspseg))));	// 57636 mov     ds, ss:crtpspseg ;~ 1E67:039D
cs=0x1e67;eip=0x0003a2; 	J(JMP(loc_2cff7));	// 57637 jmp     short loc_2CFF7 ;~ 1E67:03A2
loc_2cff4:
	// 8070 
cs=0x1e67;eip=0x0003a4; 	T(XOR(ax, ax));	// 57642 xor     ax, ax ;~ 1E67:03A4
cs=0x1e67;eip=0x0003a6; 	X(STOSB);	// 57643 stosb ;~ 1E67:03A6
loc_2cff7:
	// 8071 
cs=0x1e67;eip=0x0003a7; 	T(LODSB);	// 57647 lodsb ;~ 1E67:03A7
cs=0x1e67;eip=0x0003a8; 	T(CMP(al, 0x20));	// 57648 cmp     al, 20h ; ' ' ;~ 1E67:03A8
cs=0x1e67;eip=0x0003aa; 	J(JZ(loc_2cff7));	// 57649 jz      short loc_2CFF7 ;~ 1E67:03AA
cs=0x1e67;eip=0x0003ac; 	T(CMP(al, 9));	// 57650 cmp     al, 9 ;~ 1E67:03AC
cs=0x1e67;eip=0x0003ae; 	J(JZ(loc_2cff7));	// 57651 jz      short loc_2CFF7 ;~ 1E67:03AE
cs=0x1e67;eip=0x0003b0; 	T(CMP(al, 0x0D));	// 57652 cmp     al, 0Dh ;~ 1E67:03B0
cs=0x1e67;eip=0x0003b2; 	J(JNZ(loc_2d007));	// 57653 jnz     short loc_2D007 ;~ 1E67:03B2
cs=0x1e67;eip=0x0003b4; 	J(JMP(loc_2d086));	// 57654 jmp     loc_2D086 ;~ 1E67:03B4
loc_2d007:
	// 8072 
cs=0x1e67;eip=0x0003b7; 	T(OR(al, al));	// 57658 or      al, al ;~ 1E67:03B7
cs=0x1e67;eip=0x0003b9; 	J(JNZ(loc_2d00e));	// 57659 jnz     short loc_2D00E ;~ 1E67:03B9
cs=0x1e67;eip=0x0003bb; 	J(JMP(loc_2d086));	// 57660 jmp     short loc_2D086 ;~ 1E67:03BB
loc_2d00e:
	// 8073 
cs=0x1e67;eip=0x0003be; 	X(MOV(*(dw*)(raddr(ss,bx)), di));	// 57665 mov     ss:[bx], di ;~ 1E67:03BE
cs=0x1e67;eip=0x0003c1; 	T(INC(bx));	// 57666 inc     bx ;~ 1E67:03C1
cs=0x1e67;eip=0x0003c2; 	T(INC(bx));	// 57667 inc     bx ;~ 1E67:03C2
loc_2d013:
	// 8074 
cs=0x1e67;eip=0x0003c3; 	T(DEC(si));	// 57670 dec     si ;~ 1E67:03C3
loc_2d014:
	// 8075 
cs=0x1e67;eip=0x0003c4; 	T(LODSB);	// 57674 lodsb ;~ 1E67:03C4
cs=0x1e67;eip=0x0003c5; 	T(CMP(al, 0x20));	// 57675 cmp     al, 20h ; ' ' ;~ 1E67:03C5
cs=0x1e67;eip=0x0003c7; 	J(JZ(loc_2cff4));	// 57676 jz      short loc_2CFF4 ;~ 1E67:03C7
cs=0x1e67;eip=0x0003c9; 	T(CMP(al, 9));	// 57677 cmp     al, 9 ;~ 1E67:03C9
cs=0x1e67;eip=0x0003cb; 	J(JZ(loc_2cff4));	// 57678 jz      short loc_2CFF4 ;~ 1E67:03CB
cs=0x1e67;eip=0x0003cd; 	T(CMP(al, 0x0D));	// 57679 cmp     al, 0Dh ;~ 1E67:03CD
cs=0x1e67;eip=0x0003cf; 	J(JZ(loc_2d083));	// 57680 jz      short loc_2D083 ;~ 1E67:03CF
cs=0x1e67;eip=0x0003d1; 	T(OR(al, al));	// 57681 or      al, al ;~ 1E67:03D1
cs=0x1e67;eip=0x0003d3; 	J(JZ(loc_2d083));	// 57682 jz      short loc_2D083 ;~ 1E67:03D3
cs=0x1e67;eip=0x0003d5; 	T(CMP(al, 0x22));	// 57683 cmp     al, 22h ; '"' ;~ 1E67:03D5
cs=0x1e67;eip=0x0003d7; 	J(JZ(loc_2d050));	// 57684 jz      short loc_2D050 ;~ 1E67:03D7
cs=0x1e67;eip=0x0003d9; 	T(CMP(al, 0x5C));	// 57685 cmp     al, 5Ch ; '\' ;~ 1E67:03D9
cs=0x1e67;eip=0x0003db; 	J(JZ(loc_2d030));	// 57686 jz      short loc_2D030 ;~ 1E67:03DB
cs=0x1e67;eip=0x0003dd; 	X(STOSB);	// 57687 stosb ;~ 1E67:03DD
cs=0x1e67;eip=0x0003de; 	J(JMP(loc_2d014));	// 57688 jmp     short loc_2D014 ;~ 1E67:03DE
loc_2d030:
	// 8076 
cs=0x1e67;eip=0x0003e0; 	T(XOR(cx, cx));	// 57692 xor     cx, cx ;~ 1E67:03E0
loc_2d032:
	// 8077 
cs=0x1e67;eip=0x0003e2; 	T(INC(cx));	// 57695 inc     cx ;~ 1E67:03E2
cs=0x1e67;eip=0x0003e3; 	T(LODSB);	// 57696 lodsb ;~ 1E67:03E3
cs=0x1e67;eip=0x0003e4; 	T(CMP(al, 0x5C));	// 57697 cmp     al, 5Ch ; '\' ;~ 1E67:03E4
cs=0x1e67;eip=0x0003e6; 	J(JZ(loc_2d032));	// 57698 jz      short loc_2D032 ;~ 1E67:03E6
cs=0x1e67;eip=0x0003e8; 	T(CMP(al, 0x22));	// 57699 cmp     al, 22h ; '"' ;~ 1E67:03E8
cs=0x1e67;eip=0x0003ea; 	J(JZ(loc_2d042));	// 57700 jz      short loc_2D042 ;~ 1E67:03EA
cs=0x1e67;eip=0x0003ec; 	T(MOV(al, 0x5C));	// 57701 mov     al, 5Ch ; '\' ;~ 1E67:03EC
	// 57702 rep stosb ;~ 1E67:03EE
cs=0x1e67;eip=0x0003ee; 	X(	REP STOSB);	// 57702 rep stosb ;~ 1E67:03EE
cs=0x1e67;eip=0x0003f0; 	J(JMP(loc_2d013));	// 57703 jmp     short loc_2D013 ;~ 1E67:03F0
loc_2d042:
	// 8078 
cs=0x1e67;eip=0x0003f2; 	T(MOV(al, 0x5C));	// 57707 mov     al, 5Ch ; '\' ;~ 1E67:03F2
cs=0x1e67;eip=0x0003f4; 	T(SHR(cx, 1));	// 57708 shr     cx, 1 ;~ 1E67:03F4
	// 57709 rep stosb ;~ 1E67:03F6
cs=0x1e67;eip=0x0003f6; 	X(	REP STOSB);	// 57709 rep stosb ;~ 1E67:03F6
cs=0x1e67;eip=0x0003f8; 	J(JNC(loc_2d050));	// 57710 jnb     short loc_2D050 ;~ 1E67:03F8
cs=0x1e67;eip=0x0003fa; 	T(MOV(al, 0x22));	// 57711 mov     al, 22h ; '"' ;~ 1E67:03FA
cs=0x1e67;eip=0x0003fc; 	X(STOSB);	// 57712 stosb ;~ 1E67:03FC
cs=0x1e67;eip=0x0003fd; 	J(JMP(loc_2d014));	// 57713 jmp     short loc_2D014 ;~ 1E67:03FD
loc_2d04f:
	// 8079 
cs=0x1e67;eip=0x0003ff; 	T(DEC(si));	// 57717 dec     si ;~ 1E67:03FF
loc_2d050:
	// 8080 
cs=0x1e67;eip=0x000400; 	T(LODSB);	// 57721 lodsb ;~ 1E67:0400
cs=0x1e67;eip=0x000401; 	T(CMP(al, 0x0D));	// 57722 cmp     al, 0Dh ;~ 1E67:0401
cs=0x1e67;eip=0x000403; 	J(JZ(loc_2d083));	// 57723 jz      short loc_2D083 ;~ 1E67:0403
cs=0x1e67;eip=0x000405; 	T(OR(al, al));	// 57724 or      al, al ;~ 1E67:0405
cs=0x1e67;eip=0x000407; 	J(JZ(loc_2d083));	// 57725 jz      short loc_2D083 ;~ 1E67:0407
cs=0x1e67;eip=0x000409; 	T(CMP(al, 0x22));	// 57726 cmp     al, 22h ; '"' ;~ 1E67:0409
cs=0x1e67;eip=0x00040b; 	J(JZ(loc_2d014));	// 57727 jz      short loc_2D014 ;~ 1E67:040B
cs=0x1e67;eip=0x00040d; 	T(CMP(al, 0x5C));	// 57728 cmp     al, 5Ch ; '\' ;~ 1E67:040D
cs=0x1e67;eip=0x00040f; 	J(JZ(loc_2d064));	// 57729 jz      short loc_2D064 ;~ 1E67:040F
cs=0x1e67;eip=0x000411; 	X(STOSB);	// 57730 stosb ;~ 1E67:0411
cs=0x1e67;eip=0x000412; 	J(JMP(loc_2d050));	// 57731 jmp     short loc_2D050 ;~ 1E67:0412
loc_2d064:
	// 8081 
cs=0x1e67;eip=0x000414; 	T(XOR(cx, cx));	// 57735 xor     cx, cx ;~ 1E67:0414
loc_2d066:
	// 8082 
cs=0x1e67;eip=0x000416; 	T(INC(cx));	// 57738 inc     cx ;~ 1E67:0416
cs=0x1e67;eip=0x000417; 	T(LODSB);	// 57739 lodsb ;~ 1E67:0417
cs=0x1e67;eip=0x000418; 	T(CMP(al, 0x5C));	// 57740 cmp     al, 5Ch ; '\' ;~ 1E67:0418
cs=0x1e67;eip=0x00041a; 	J(JZ(loc_2d066));	// 57741 jz      short loc_2D066 ;~ 1E67:041A
cs=0x1e67;eip=0x00041c; 	T(CMP(al, 0x22));	// 57742 cmp     al, 22h ; '"' ;~ 1E67:041C
cs=0x1e67;eip=0x00041e; 	J(JZ(loc_2d076));	// 57743 jz      short loc_2D076 ;~ 1E67:041E
cs=0x1e67;eip=0x000420; 	T(MOV(al, 0x5C));	// 57744 mov     al, 5Ch ; '\' ;~ 1E67:0420
	// 57745 rep stosb ;~ 1E67:0422
cs=0x1e67;eip=0x000422; 	X(	REP STOSB);	// 57745 rep stosb ;~ 1E67:0422
cs=0x1e67;eip=0x000424; 	J(JMP(loc_2d04f));	// 57746 jmp     short loc_2D04F ;~ 1E67:0424
loc_2d076:
	// 8083 
cs=0x1e67;eip=0x000426; 	T(MOV(al, 0x5C));	// 57750 mov     al, 5Ch ; '\' ;~ 1E67:0426
cs=0x1e67;eip=0x000428; 	T(SHR(cx, 1));	// 57751 shr     cx, 1 ;~ 1E67:0428
	// 57752 rep stosb ;~ 1E67:042A
cs=0x1e67;eip=0x00042a; 	X(	REP STOSB);	// 57752 rep stosb ;~ 1E67:042A
cs=0x1e67;eip=0x00042c; 	J(JNC(loc_2d014));	// 57753 jnb     short loc_2D014 ;~ 1E67:042C
cs=0x1e67;eip=0x00042e; 	T(MOV(al, 0x22));	// 57754 mov     al, 22h ; '"' ;~ 1E67:042E
cs=0x1e67;eip=0x000430; 	X(STOSB);	// 57755 stosb ;~ 1E67:0430
cs=0x1e67;eip=0x000431; 	J(JMP(loc_2d050));	// 57756 jmp     short loc_2D050 ;~ 1E67:0431
loc_2d083:
	// 8084 
cs=0x1e67;eip=0x000433; 	T(XOR(ax, ax));	// 57761 xor     ax, ax ;~ 1E67:0433
cs=0x1e67;eip=0x000435; 	X(STOSB);	// 57762 stosb ;~ 1E67:0435
loc_2d086:
	// 8085 
cs=0x1e67;eip=0x000436; 	X(PUSH(ss));	// 57766 push    ss ;~ 1E67:0436
cs=0x1e67;eip=0x000437; 	X(POP(ds));	// 57767 pop     ds ;~ 1E67:0437
cs=0x1e67;eip=0x000438; 	X(MOV(*(dw*)(raddr(ds,bx)), 0));	// 57768 mov     word ptr [bx], 0 ;~ 1E67:0438
cs=0x1e67;eip=0x00043c; __disp=dword_3ee26;
return true;
	J(return __dispatch_call(__disp, _state););	// 57769 jmp     dword_3EE26 ;~ 1E67:043C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__setargv: 	goto __setargv;
        case m2c::kloc_2cf24: 	goto loc_2cf24;
        case m2c::kloc_2cf38: 	goto loc_2cf38;
        case m2c::kloc_2cf42: 	goto loc_2cf42;
        case m2c::kloc_2cf54: 	goto loc_2cf54;
        case m2c::kloc_2cf55: 	goto loc_2cf55;
        case m2c::kloc_2cf71: 	goto loc_2cf71;
        case m2c::kloc_2cf73: 	goto loc_2cf73;
        case m2c::kloc_2cf81: 	goto loc_2cf81;
        case m2c::kloc_2cf8d: 	goto loc_2cf8d;
        case m2c::kloc_2cf8e: 	goto loc_2cf8e;
        case m2c::kloc_2cfa2: 	goto loc_2cfa2;
        case m2c::kloc_2cfa4: 	goto loc_2cfa4;
        case m2c::kloc_2cfb2: 	goto loc_2cfb2;
        case m2c::kloc_2cfbe: 	goto loc_2cfbe;
        case m2c::kloc_2cfe4: 	goto loc_2cfe4;
        case m2c::kloc_2cff4: 	goto loc_2cff4;
        case m2c::kloc_2cff7: 	goto loc_2cff7;
        case m2c::kloc_2d007: 	goto loc_2d007;
        case m2c::kloc_2d00e: 	goto loc_2d00e;
        case m2c::kloc_2d013: 	goto loc_2d013;
        case m2c::kloc_2d014: 	goto loc_2d014;
        case m2c::kloc_2d030: 	goto loc_2d030;
        case m2c::kloc_2d032: 	goto loc_2d032;
        case m2c::kloc_2d042: 	goto loc_2d042;
        case m2c::kloc_2d04f: 	goto loc_2d04f;
        case m2c::kloc_2d050: 	goto loc_2d050;
        case m2c::kloc_2d064: 	goto loc_2d064;
        case m2c::kloc_2d066: 	goto loc_2d066;
        case m2c::kloc_2d076: 	goto loc_2d076;
        case m2c::kloc_2d083: 	goto loc_2d083;
        case m2c::kloc_2d086: 	goto loc_2d086;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __setenvp(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __setenvp:
    _begin:
#undef var_s0
#define var_s0 0
	// 57779 var_s0          = word ptr  0 ;~ 1E67:0440
cs=0x1e67;eip=0x000440; 	X(PUSH(bp));	// 57781 push    bp ;~ 1E67:0440
cs=0x1e67;eip=0x000441; 	T(MOV(bp, sp));	// 57782 mov     bp, sp ;~ 1E67:0441
cs=0x1e67;eip=0x000443; 	X(PUSH(bp));	// 57783 push    bp ;~ 1E67:0443
cs=0x1e67;eip=0x000444; 	T(MOV(ds, crtpspseg));	// 57784 mov     ds, crtpspseg ;~ 1E67:0444
cs=0x1e67;eip=0x000448; 	T(XOR(cx, cx));	// 57785 xor     cx, cx ;~ 1E67:0448
cs=0x1e67;eip=0x00044a; 	T(MOV(ax, cx));	// 57786 mov     ax, cx ;~ 1E67:044A
cs=0x1e67;eip=0x00044c; 	T(MOV(bp, cx));	// 57787 mov     bp, cx ;~ 1E67:044C
cs=0x1e67;eip=0x00044e; 	T(MOV(di, cx));	// 57788 mov     di, cx ;~ 1E67:044E
cs=0x1e67;eip=0x000450; 	T(DEC(cx));	// 57789 dec     cx              ; cx = 0ffffh ;~ 1E67:0450
cs=0x1e67;eip=0x000451; 	T(MOV(si, *(dw*)(raddr(ds,0x2C))));	// 57790 mov     si, ds:2Ch      ; psp:2c = environment segment ;~ 1E67:0451
cs=0x1e67;eip=0x000455; 	T(OR(si, si));	// 57791 or      si, si ;~ 1E67:0455
cs=0x1e67;eip=0x000457; 	J(JZ(loc_2d0b9));	// 57792 jz      short loc_2D0B9 ;~ 1E67:0457
cs=0x1e67;eip=0x000459; 	T(MOV(es, si));	// 57793 mov     es, si ;~ 1E67:0459
cs=0x1e67;eip=0x00045b; 	T(CMP(*(raddr(es,0)), 0));	// 57795 cmp     byte ptr es:0, 0 ;~ 1E67:045B
cs=0x1e67;eip=0x000461; 	J(JZ(loc_2d0b9));	// 57796 jz      short loc_2D0B9 ; empty environment? ;~ 1E67:0461
loc_2d0b3:
	// 8086 
	// 57799 repne scasb ;~ 1E67:0463
cs=0x1e67;eip=0x000463; 	T(	REPNE SCASB);	// 57799 repne scasb ;~ 1E67:0463
cs=0x1e67;eip=0x000465; 	T(INC(bp));	// 57800 inc     bp              ; count x=y strings in environment ;~ 1E67:0465
cs=0x1e67;eip=0x000466; 	T(SCASB);	// 57801 scasb                   ; two nulls in a row = end of environment ;~ 1E67:0466
cs=0x1e67;eip=0x000467; 	J(JNZ(loc_2d0b3));	// 57802 jnz     short loc_2D0B3 ;~ 1E67:0467
loc_2d0b9:
	// 8087 
cs=0x1e67;eip=0x000469; 	T(INC(bp));	// 57806 inc     bp              ; bp = number of envirment strings ;~ 1E67:0469
cs=0x1e67;eip=0x00046a; 	T(XCHG(ax, di));	// 57807 xchg    ax, di          ; set ax to number of bytes in environent, di to 0 ;~ 1E67:046A
cs=0x1e67;eip=0x00046b; 	T(INC(ax));	// 57808 inc     ax ;~ 1E67:046B
cs=0x1e67;eip=0x00046c; 	T(AND(al, 0x0FE));	// 57809 and     al, 0FEh ;~ 1E67:046C
cs=0x1e67;eip=0x00046e; 	T(MOV(di, bp));	// 57810 mov     di, bp          ; di = number of environment strings ;~ 1E67:046E
cs=0x1e67;eip=0x000470; 	T(SHL(bp, 1));	// 57811 shl     bp, 1 ;~ 1E67:0470
cs=0x1e67;eip=0x000472; 	T(ADD(ax, bp));	// 57812 add     ax, bp          ; ax = ((envsize+1)&FFFE) + numstrings*2 ;~ 1E67:0472
cs=0x1e67;eip=0x000474; 	X(PUSH(ss));	// 57813 push    ss ;~ 1E67:0474
cs=0x1e67;eip=0x000475; 	X(POP(ds));	// 57814 pop     ds ;~ 1E67:0475
cs=0x1e67;eip=0x000476; 	X(PUSH(di));	// 57815 push    di ;~ 1E67:0476
cs=0x1e67;eip=0x000477; 	T(MOV(di, 9));	// 57816 mov     di, 9 ;~ 1E67:0477
cs=0x1e67;eip=0x00047a; 	J(CALL(__myalloc,0));	// 57817 call    __myalloc ;~ 1E67:047A
cs=0x1e67;eip=0x00047d; 	X(POP(di));	// 57818 pop     di ;~ 1E67:047D
cs=0x1e67;eip=0x00047e; 	T(MOV(cx, di));	// 57819 mov     cx, di          ; cx = number of environment strings ;~ 1E67:047E
cs=0x1e67;eip=0x000480; 	T(MOV(di, bp));	// 57820 mov     di, bp          ; bp = old crtsp1 (was changed in myalloc) ;~ 1E67:0480
cs=0x1e67;eip=0x000482; 	T(ADD(di, ax));	// 57821 add     di, ax          ; ax = old bp = numstrings*2 ;~ 1E67:0482
cs=0x1e67;eip=0x000484; 	X(MOV(p_argv_, bp));	// 57822 mov     p_argv_, bp ;~ 1E67:0484
cs=0x1e67;eip=0x000488; 	X(PUSH(ds));	// 57823 push    ds ;~ 1E67:0488
cs=0x1e67;eip=0x000489; 	X(POP(es));	// 57824 pop     es ;~ 1E67:0489
cs=0x1e67;eip=0x00048a; 	T(MOV(ds, si));	// 57826 mov     ds, si ;~ 1E67:048A
cs=0x1e67;eip=0x00048c; 	T(XOR(si, si));	// 57827 xor     si, si ;~ 1E67:048C
cs=0x1e67;eip=0x00048e; 	T(DEC(cx));	// 57828 dec     cx ;~ 1E67:048E
cs=0x1e67;eip=0x00048f; 	J(JCXZ(loc_2d0f4));	// 57829 jcxz    short loc_2D0F4 ;~ 1E67:048F
loc_2d0e1:
	// 8088 
cs=0x1e67;eip=0x000491; 	T(CMP(*(dw*)(raddr(ds,si)), 0x433B));	// 57832 cmp     word ptr [si], 433Bh ; if the env string does not start with "C;" (or ;C) put its ofs at ds:bp ;~ 1E67:0491
cs=0x1e67;eip=0x000495; 	J(JZ(loc_2d0ec));	// 57833 jz      short loc_2D0EC ;~ 1E67:0495
cs=0x1e67;eip=0x000497; 	X(MOV(*(dw*)(raddr(ss,bp+var_s0)), di));	// 57834 mov     [bp+var_s0], di ;~ 1E67:0497
cs=0x1e67;eip=0x00049a; 	T(INC(bp));	// 57835 inc     bp ;~ 1E67:049A
cs=0x1e67;eip=0x00049b; 	T(INC(bp));	// 57836 inc     bp ;~ 1E67:049B
loc_2d0ec:
	// 8089 
cs=0x1e67;eip=0x00049c; 	T(LODSB);	// 57840 lodsb ;~ 1E67:049C
cs=0x1e67;eip=0x00049d; 	X(STOSB);	// 57841 stosb ;~ 1E67:049D
cs=0x1e67;eip=0x00049e; 	T(OR(al, al));	// 57842 or      al, al ;~ 1E67:049E
cs=0x1e67;eip=0x0004a0; 	J(JNZ(loc_2d0ec));	// 57843 jnz     short loc_2D0EC ;~ 1E67:04A0
cs=0x1e67;eip=0x0004a2; 	J(LOOP(loc_2d0e1));	// 57844 loop    loc_2D0E1 ;~ 1E67:04A2
loc_2d0f4:
	// 8090 
cs=0x1e67;eip=0x0004a4; 	X(MOV(*(dw*)(raddr(ss,bp+var_s0)), cx));	// 57847 mov     [bp+var_s0], cx ;~ 1E67:04A4
cs=0x1e67;eip=0x0004a7; 	X(PUSH(ss));	// 57848 push    ss ;~ 1E67:04A7
cs=0x1e67;eip=0x0004a8; 	X(POP(ds));	// 57849 pop     ds ;~ 1E67:04A8
cs=0x1e67;eip=0x0004a9; 	X(POP(bp));	// 57850 pop     bp ;~ 1E67:04A9
cs=0x1e67;eip=0x0004aa; 	T(MOV(sp, bp));	// 57851 mov     sp, bp ;~ 1E67:04AA
cs=0x1e67;eip=0x0004ac; 	X(POP(bp));	// 57852 pop     bp ;~ 1E67:04AC
cs=0x1e67;eip=0x0004ad; 	J(RETF(0));	// 57853 retf ;~ 1E67:04AD

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__setenvp: 	goto __setenvp;
        case m2c::kloc_2d0b3: 	goto loc_2d0b3;
        case m2c::kloc_2d0b9: 	goto loc_2d0b9;
        case m2c::kloc_2d0e1: 	goto loc_2d0e1;
        case m2c::kloc_2d0ec: 	goto loc_2d0ec;
        case m2c::kloc_2d0f4: 	goto loc_2d0f4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __nmsg_text(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __nmsg_text:
    _begin:
#undef arg_0
#define arg_0 6
	// 57863 arg_0           = word ptr  6 ;~ 1E67:04AE
cs=0x1e67;eip=0x0004ae; 	X(PUSH(bp));	// 57865 push    bp ;~ 1E67:04AE
cs=0x1e67;eip=0x0004af; 	T(MOV(bp, sp));	// 57866 mov     bp, sp ;~ 1E67:04AF
cs=0x1e67;eip=0x0004b1; 	X(PUSH(si));	// 57867 push    si ;~ 1E67:04B1
cs=0x1e67;eip=0x0004b2; 	X(PUSH(di));	// 57868 push    di ;~ 1E67:04B2
cs=0x1e67;eip=0x0004b3; 	X(PUSH(ds));	// 57869 push    ds ;~ 1E67:04B3
cs=0x1e67;eip=0x0004b4; 	X(POP(es));	// 57870 pop     es ;~ 1E67:04B4
cs=0x1e67;eip=0x0004b5; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 57871 mov     dx, [bp+arg_0] ;~ 1E67:04B5
cs=0x1e67;eip=0x0004b8; 	T(MOV(si, 0x54C6));	// 57872 mov     si, 54C6h ;~ 1E67:04B8
loc_2d10b:
	// 8091 
cs=0x1e67;eip=0x0004bb; 	T(LODSW);	// 57875 lodsw ;~ 1E67:04BB
cs=0x1e67;eip=0x0004bc; 	T(CMP(ax, dx));	// 57876 cmp     ax, dx ;~ 1E67:04BC
cs=0x1e67;eip=0x0004be; 	J(JZ(loc_2d120));	// 57877 jz      short loc_2D120 ;~ 1E67:04BE
cs=0x1e67;eip=0x0004c0; 	T(INC(ax));	// 57878 inc     ax ;~ 1E67:04C0
cs=0x1e67;eip=0x0004c1; 	T(XCHG(ax, si));	// 57879 xchg    ax, si ;~ 1E67:04C1
cs=0x1e67;eip=0x0004c2; 	J(JZ(loc_2d120));	// 57880 jz      short loc_2D120 ;~ 1E67:04C2
cs=0x1e67;eip=0x0004c4; 	T(XCHG(ax, di));	// 57881 xchg    ax, di ;~ 1E67:04C4
cs=0x1e67;eip=0x0004c5; 	T(XOR(ax, ax));	// 57882 xor     ax, ax ;~ 1E67:04C5
cs=0x1e67;eip=0x0004c7; 	T(MOV(cx, 0x0FFFF));	// 57883 mov     cx, 0FFFFh ;~ 1E67:04C7
	// 57884 repne scasb ;~ 1E67:04CA
cs=0x1e67;eip=0x0004ca; 	T(	REPNE SCASB);	// 57884 repne scasb ;~ 1E67:04CA
cs=0x1e67;eip=0x0004cc; 	T(MOV(si, di));	// 57885 mov     si, di ;~ 1E67:04CC
cs=0x1e67;eip=0x0004ce; 	J(JMP(loc_2d10b));	// 57886 jmp     short loc_2D10B ;~ 1E67:04CE
loc_2d120:
	// 8092 
cs=0x1e67;eip=0x0004d0; 	T(XCHG(ax, si));	// 57891 xchg    ax, si ;~ 1E67:04D0
cs=0x1e67;eip=0x0004d1; 	X(POP(di));	// 57892 pop     di ;~ 1E67:04D1
cs=0x1e67;eip=0x0004d2; 	X(POP(si));	// 57893 pop     si ;~ 1E67:04D2
cs=0x1e67;eip=0x0004d3; 	T(MOV(sp, bp));	// 57894 mov     sp, bp ;~ 1E67:04D3
cs=0x1e67;eip=0x0004d5; 	X(POP(bp));	// 57895 pop     bp ;~ 1E67:04D5
cs=0x1e67;eip=0x0004d6; 	J(RETF(2));	// 57896 retf    2 ;~ 1E67:04D6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__nmsg_text: 	goto __nmsg_text;
        case m2c::kloc_2d10b: 	goto loc_2d10b;
        case m2c::kloc_2d120: 	goto loc_2d120;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __nmsg_write(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __nmsg_write:
    _begin:
#undef arg_0
#define arg_0 6
	// 57907 arg_0           = word ptr  6 ;~ 1E67:04D9
cs=0x1e67;eip=0x0004d9; 	X(PUSH(bp));	// 57909 push    bp ;~ 1E67:04D9
cs=0x1e67;eip=0x0004da; 	T(MOV(bp, sp));	// 57910 mov     bp, sp ;~ 1E67:04DA
cs=0x1e67;eip=0x0004dc; 	X(PUSH(di));	// 57911 push    di ;~ 1E67:04DC
cs=0x1e67;eip=0x0004dd; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 57912 push    [bp+arg_0] ;~ 1E67:04DD
cs=0x1e67;eip=0x0004e0; 	J(CALLF(__nmsg_text,0));	// 57913 call    __NMSG_TEXT ;~ 1E67:04E0
cs=0x1e67;eip=0x0004e5; 	T(OR(ax, ax));	// 57914 or      ax, ax ;~ 1E67:04E5
cs=0x1e67;eip=0x0004e7; 	J(JZ(loc_2d14d));	// 57915 jz      short loc_2D14D ;~ 1E67:04E7
cs=0x1e67;eip=0x0004e9; 	T(XCHG(ax, dx));	// 57916 xchg    ax, dx ;~ 1E67:04E9
cs=0x1e67;eip=0x0004ea; 	T(MOV(di, dx));	// 57917 mov     di, dx ;~ 1E67:04EA
cs=0x1e67;eip=0x0004ec; 	T(XOR(ax, ax));	// 57918 xor     ax, ax ;~ 1E67:04EC
cs=0x1e67;eip=0x0004ee; 	T(MOV(cx, 0x0FFFF));	// 57919 mov     cx, 0FFFFh ;~ 1E67:04EE
	// 57920 repne scasb ;~ 1E67:04F1
cs=0x1e67;eip=0x0004f1; 	T(	REPNE SCASB);	// 57920 repne scasb ;~ 1E67:04F1
cs=0x1e67;eip=0x0004f3; 	T(NOT(cx));	// 57921 not     cx ;~ 1E67:04F3
cs=0x1e67;eip=0x0004f5; 	T(DEC(cx));	// 57922 dec     cx ;~ 1E67:04F5
cs=0x1e67;eip=0x0004f6; 	T(MOV(bx, 2));	// 57923 mov     bx, 2 ;~ 1E67:04F6
cs=0x1e67;eip=0x0004f9; 	T(MOV(ah, 0x40));	// 57924 mov     ah, 40h ;~ 1E67:04F9
cs=0x1e67;eip=0x0004fb; 	R(_INT(0x21));	// 57925 int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 1E67:04FB
loc_2d14d:
	// 8093 
cs=0x1e67;eip=0x0004fd; 	X(POP(di));	// 57929 pop     di ;~ 1E67:04FD
cs=0x1e67;eip=0x0004fe; 	T(MOV(sp, bp));	// 57930 mov     sp, bp ;~ 1E67:04FE
cs=0x1e67;eip=0x000500; 	X(POP(bp));	// 57931 pop     bp ;~ 1E67:0500
cs=0x1e67;eip=0x000501; 	J(RETF(2));	// 57932 retf    2 ;~ 1E67:0501

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__nmsg_write: 	goto __nmsg_write;
        case m2c::kloc_2d14d: 	goto loc_2d14d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __myalloc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __myalloc:
    _begin:
cs=0x1e67;eip=0x000504; 	T(MOV(dx, ax));	// 57941 mov     dx, ax ;~ 1E67:0504
cs=0x1e67;eip=0x000506; 	T(ADD(ax, crtsp1));	// 57942 add     ax, crtsp1 ;~ 1E67:0506
cs=0x1e67;eip=0x00050a; 	J(JC(loc_2d191));	// 57943 jb      short loc_2D191 ;~ 1E67:050A
cs=0x1e67;eip=0x00050c; 	T(CMP(word_3ed74, ax));	// 57944 cmp     word_3ED74, ax ;~ 1E67:050C
cs=0x1e67;eip=0x000510; 	J(JNC(loc_2d187));	// 57945 jnb     short loc_2D187 ;~ 1E67:0510
cs=0x1e67;eip=0x000512; 	T(ADD(ax, 0x0F));	// 57946 add     ax, 0Fh ;~ 1E67:0512
cs=0x1e67;eip=0x000515; 	X(PUSH(ax));	// 57947 push    ax ;~ 1E67:0515
cs=0x1e67;eip=0x000516; 	T(RCR(ax, 1));	// 57948 rcr     ax, 1 ;~ 1E67:0516
cs=0x1e67;eip=0x000518; 	T(MOV(cl, 3));	// 57949 mov     cl, 3 ;~ 1E67:0518
cs=0x1e67;eip=0x00051a; 	T(SHR(ax, cl));	// 57950 shr     ax, cl ;~ 1E67:051A
cs=0x1e67;eip=0x00051c; 	T(MOV(cx, ds));	// 57951 mov     cx, ds ;~ 1E67:051C
cs=0x1e67;eip=0x00051e; 	T(MOV(bx, crtpspseg));	// 57952 mov     bx, crtpspseg ;~ 1E67:051E
cs=0x1e67;eip=0x000522; 	T(SUB(cx, bx));	// 57953 sub     cx, bx ;~ 1E67:0522
cs=0x1e67;eip=0x000524; 	T(ADD(ax, cx));	// 57954 add     ax, cx ;~ 1E67:0524
cs=0x1e67;eip=0x000526; 	T(MOV(es, bx));	// 57955 mov     es, bx ;~ 1E67:0526
cs=0x1e67;eip=0x000528; 	T(MOV(bx, ax));	// 57957 mov     bx, ax ;~ 1E67:0528
cs=0x1e67;eip=0x00052a; 	T(MOV(ah, 0x4A));	// 57958 mov     ah, 4Ah ;~ 1E67:052A
cs=0x1e67;eip=0x00052c; 	R(_INT(0x21));	// 57959 int     21h             ; DOS - 2+ - ADJUST MEMORY BLOCK SIZE (SETBLOCK) ;~ 1E67:052C
cs=0x1e67;eip=0x00052e; 	X(POP(ax));	// 57962 pop     ax ;~ 1E67:052E
cs=0x1e67;eip=0x00052f; 	J(JC(loc_2d191));	// 57963 jb      short loc_2D191 ;~ 1E67:052F
cs=0x1e67;eip=0x000531; 	T(AND(al, 0x0F0));	// 57964 and     al, 0F0h ;~ 1E67:0531
cs=0x1e67;eip=0x000533; 	T(DEC(ax));	// 57965 dec     ax ;~ 1E67:0533
cs=0x1e67;eip=0x000534; 	X(MOV(word_3ed74, ax));	// 57966 mov     word_3ED74, ax ;~ 1E67:0534
loc_2d187:
	// 8094 
cs=0x1e67;eip=0x000537; 	T(XCHG(ax, bp));	// 57969 xchg    ax, bp ;~ 1E67:0537
cs=0x1e67;eip=0x000538; 	T(MOV(bp, crtsp1));	// 57970 mov     bp, crtsp1 ;~ 1E67:0538
cs=0x1e67;eip=0x00053c; 	X(ADD(crtsp1, dx));	// 57971 add     crtsp1, dx ;~ 1E67:053C
cs=0x1e67;eip=0x000540; 	J(RETN(0));	// 57972 retn ;~ 1E67:0540
loc_2d191:
	// 8095 
cs=0x1e67;eip=0x000541; 	T(MOV(ax, di));	// 57977 mov     ax, di ;~ 1E67:0541
cs=0x1e67;eip=0x000543; 	J(return _group5(m2c::k__amsg_exit, _state););	// 57978 jmp     __amsg_exit ;~ 1E67:0543

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__myalloc: 	goto __myalloc;
        case m2c::kloc_2d187: 	goto loc_2d187;
        case m2c::kloc_2d191: 	goto loc_2d191;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg010_546_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg010_546_proc:
    _begin:
__dosret0:
	// 8096 
cs=0x1e67;eip=0x000546; 	J(JC(loc_2d1ab));	// 57984 jb      short loc_2D1AB ;~ 1E67:0546
loc_2d198:
	// 8097 
cs=0x1e67;eip=0x000548; 	T(XOR(ax, ax));	// 57987 xor     ax, ax ;~ 1E67:0548
cs=0x1e67;eip=0x00054a; 	T(MOV(sp, bp));	// 57988 mov     sp, bp ;~ 1E67:054A
cs=0x1e67;eip=0x00054c; 	X(POP(bp));	// 57989 pop     bp ;~ 1E67:054C
cs=0x1e67;eip=0x00054d; 	J(RETF(0));	// 57990 retf ;~ 1E67:054D
__dosreturn:
	// 8098 
cs=0x1e67;eip=0x00054e; 	J(JNC(loc_2d198));	// 57994 jnb     short loc_2D198 ;~ 1E67:054E
cs=0x1e67;eip=0x000550; 	X(PUSH(ax));	// 57995 push    ax ;~ 1E67:0550
cs=0x1e67;eip=0x000551; 	J(CALL(sub_2d1bc,0));	// 57996 call    sub_2D1BC ;~ 1E67:0551
cs=0x1e67;eip=0x000554; 	X(POP(ax));	// 57997 pop     ax ;~ 1E67:0554
cs=0x1e67;eip=0x000555; 	T(MOV(sp, bp));	// 57998 mov     sp, bp ;~ 1E67:0555
cs=0x1e67;eip=0x000557; 	X(POP(bp));	// 57999 pop     bp ;~ 1E67:0557
cs=0x1e67;eip=0x000558; 	J(RETF(0));	// 58000 retf ;~ 1E67:0558
__dosretax:
	// 8099 
cs=0x1e67;eip=0x000559; 	J(JNC(loc_2d1b2));	// 58009 jnb     short loc_2D1B2 ;~ 1E67:0559
loc_2d1ab:
	// 8100 
cs=0x1e67;eip=0x00055b; 	J(CALL(sub_2d1bc,0));	// 58012 call    sub_2D1BC ;~ 1E67:055B
cs=0x1e67;eip=0x00055e; 	T(MOV(ax, 0x0FFFF));	// 58013 mov     ax, 0FFFFh ;~ 1E67:055E
cs=0x1e67;eip=0x000561; 	T(CWD);	// 58014 cwd ;~ 1E67:0561
loc_2d1b2:
	// 8101 
cs=0x1e67;eip=0x000562; 	T(MOV(sp, bp));	// 58017 mov     sp, bp ;~ 1E67:0562
cs=0x1e67;eip=0x000564; 	X(POP(bp));	// 58018 pop     bp ;~ 1E67:0564
cs=0x1e67;eip=0x000565; 	J(RETF(0));	// 58019 retf ;~ 1E67:0565

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__dosretax: 	goto __dosretax;
        case m2c::k__dosreturn: 	goto __dosreturn;
        case m2c::kloc_2d198: 	goto loc_2d198;
        case m2c::kloc_2d1ab: 	goto loc_2d1ab;
        case m2c::kloc_2d1b2: 	goto loc_2d1b2;
        case m2c::kseg010_546_proc: 	goto seg010_546_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __maperror(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __maperror:
    _begin:
cs=0x1e67;eip=0x000566; 	T(XOR(ah, ah));	// 58027 xor     ah, ah ;~ 1E67:0566
cs=0x1e67;eip=0x000568; 	J(CALL(sub_2d1bc,0));	// 58028 call    sub_2D1BC ;~ 1E67:0568
cs=0x1e67;eip=0x00056b; 	J(RETF(0));	// 58029 retf ;~ 1E67:056B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__maperror: 	goto __maperror;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2d1bc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2d1bc:
    _begin:
cs=0x1e67;eip=0x00056c; 	X(MOV(byte_3edf0, al));	// 58038 mov     byte_3EDF0, al ;~ 1E67:056C
cs=0x1e67;eip=0x00056f; 	T(OR(ah, ah));	// 58039 or      ah, ah ;~ 1E67:056F
cs=0x1e67;eip=0x000571; 	J(JNZ(loc_2d1e6));	// 58040 jnz     short loc_2D1E6 ;~ 1E67:0571
cs=0x1e67;eip=0x000573; 	T(CMP(*(db*)(((db*)&crtdosversion)), 3));	// 58041 cmp     byte ptr crtdosversion, 3 ;~ 1E67:0573
cs=0x1e67;eip=0x000578; 	J(JC(loc_2d1d7));	// 58042 jb      short loc_2D1D7 ;~ 1E67:0578
cs=0x1e67;eip=0x00057a; 	T(CMP(al, 0x22));	// 58043 cmp     al, 22h ; '"' ;~ 1E67:057A
cs=0x1e67;eip=0x00057c; 	J(JNC(loc_2d1db));	// 58044 jnb     short loc_2D1DB ;~ 1E67:057C
cs=0x1e67;eip=0x00057e; 	T(CMP(al, 0x20));	// 58045 cmp     al, 20h ; ' ' ;~ 1E67:057E
cs=0x1e67;eip=0x000580; 	J(JC(loc_2d1d7));	// 58046 jb      short loc_2D1D7 ;~ 1E67:0580
cs=0x1e67;eip=0x000582; 	T(MOV(al, 5));	// 58047 mov     al, 5 ;~ 1E67:0582
cs=0x1e67;eip=0x000584; 	J(JMP(loc_2d1dd));	// 58048 jmp     short loc_2D1DD ;~ 1E67:0584
loc_2d1d7:
	// 8102 
cs=0x1e67;eip=0x000587; 	T(CMP(al, 0x13));	// 58055 cmp     al, 13h ;~ 1E67:0587
cs=0x1e67;eip=0x000589; 	J(JBE(loc_2d1dd));	// 58056 jbe     short loc_2D1DD ;~ 1E67:0589
loc_2d1db:
	// 8103 
cs=0x1e67;eip=0x00058b; 	T(MOV(al, 0x13));	// 58059 mov     al, 13h ;~ 1E67:058B
loc_2d1dd:
	// 8104 
cs=0x1e67;eip=0x00058d; 	T(MOV(bx, 0x36BA));	// 58063 mov     bx, 36BAh ;~ 1E67:058D
cs=0x1e67;eip=0x000590; 	T(XLAT);	// 58064 xlat ;~ 1E67:0590
loc_2d1e1:
	// 8105 
cs=0x1e67;eip=0x000591; 	T(CBW);	// 58067 cbw ;~ 1E67:0591
cs=0x1e67;eip=0x000592; 	X(MOV(word_3ede5, ax));	// 58068 mov     word_3EDE5, ax ;~ 1E67:0592
cs=0x1e67;eip=0x000595; 	J(RETN(0));	// 58069 retn ;~ 1E67:0595
loc_2d1e6:
	// 8106 
cs=0x1e67;eip=0x000596; 	T(MOV(al, ah));	// 58073 mov     al, ah ;~ 1E67:0596
cs=0x1e67;eip=0x000598; 	J(JMP(loc_2d1e1));	// 58074 jmp     short loc_2D1E1 ;~ 1E67:0598

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_2d1d7: 	goto loc_2d1d7;
        case m2c::kloc_2d1db: 	goto loc_2d1db;
        case m2c::kloc_2d1dd: 	goto loc_2d1dd;
        case m2c::kloc_2d1e1: 	goto loc_2d1e1;
        case m2c::kloc_2d1e6: 	goto loc_2d1e6;
        case m2c::ksub_2d1bc: 	goto sub_2d1bc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _flushall(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _flushall:
    _begin:
cs=0x1e67;eip=0x00059a; 	X(PUSH(bp));	// 58084 push    bp ;~ 1E67:059A
cs=0x1e67;eip=0x00059b; 	T(MOV(bp, sp));	// 58085 mov     bp, sp ;~ 1E67:059B
cs=0x1e67;eip=0x00059d; 	T(SUB(sp, 4));	// 58086 sub     sp, 4 ;~ 1E67:059D
cs=0x1e67;eip=0x0005a0; 	X(PUSH(di));	// 58087 push    di ;~ 1E67:05A0
cs=0x1e67;eip=0x0005a1; 	X(PUSH(si));	// 58088 push    si ;~ 1E67:05A1
cs=0x1e67;eip=0x0005a2; 	T(MOV(si, 0x36D0));	// 58089 mov     si, 36D0h ;~ 1E67:05A2
cs=0x1e67;eip=0x0005a5; 	T(SUB(di, di));	// 58090 sub     di, di ;~ 1E67:05A5
cs=0x1e67;eip=0x0005a7; 	J(JMP(loc_2d210));	// 58091 jmp     short loc_2D210 ;~ 1E67:05A7
loc_2d1fa:
	// 8107 
cs=0x1e67;eip=0x0005aa; 	T(TEST(*(raddr(ds,si+6)), 0x83));	// 58096 test    byte ptr [si+6], 83h ;~ 1E67:05AA
cs=0x1e67;eip=0x0005ae; 	J(JZ(loc_2d20d));	// 58097 jz      short loc_2D20D ;~ 1E67:05AE
cs=0x1e67;eip=0x0005b0; 	X(PUSH(si));	// 58098 push    si              ; FILE * ;~ 1E67:05B0
cs=0x1e67;eip=0x0005b1; 	J(CALLF(_fflush,0));	// 58099 call    _fflush ;~ 1E67:05B1
cs=0x1e67;eip=0x0005b6; 	T(ADD(sp, 2));	// 58100 add     sp, 2 ;~ 1E67:05B6
cs=0x1e67;eip=0x0005b9; 	T(INC(ax));	// 58101 inc     ax ;~ 1E67:05B9
cs=0x1e67;eip=0x0005ba; 	J(JZ(loc_2d20d));	// 58102 jz      short loc_2D20D ;~ 1E67:05BA
cs=0x1e67;eip=0x0005bc; 	T(INC(di));	// 58103 inc     di ;~ 1E67:05BC
loc_2d20d:
	// 8108 
cs=0x1e67;eip=0x0005bd; 	T(ADD(si, 8));	// 58107 add     si, 8 ;~ 1E67:05BD
loc_2d210:
	// 8109 
cs=0x1e67;eip=0x0005c0; 	T(CMP(word_3ef58, si));	// 58110 cmp     word_3EF58, si ;~ 1E67:05C0
cs=0x1e67;eip=0x0005c4; 	J(JNC(loc_2d1fa));	// 58111 jnb     short loc_2D1FA ;~ 1E67:05C4
cs=0x1e67;eip=0x0005c6; 	T(MOV(ax, di));	// 58112 mov     ax, di ;~ 1E67:05C6
cs=0x1e67;eip=0x0005c8; 	X(POP(si));	// 58113 pop     si ;~ 1E67:05C8
cs=0x1e67;eip=0x0005c9; 	X(POP(di));	// 58114 pop     di ;~ 1E67:05C9
cs=0x1e67;eip=0x0005ca; 	T(MOV(sp, bp));	// 58115 mov     sp, bp ;~ 1E67:05CA
cs=0x1e67;eip=0x0005cc; 	X(POP(bp));	// 58116 pop     bp ;~ 1E67:05CC
cs=0x1e67;eip=0x0005cd; 	J(RETF(0));	// 58117 retf ;~ 1E67:05CD

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_flushall: 	goto _flushall;
        case m2c::kloc_2d1fa: 	goto loc_2d1fa;
        case m2c::kloc_2d20d: 	goto loc_2d20d;
        case m2c::kloc_2d210: 	goto loc_2d210;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _printf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _printf:
    _begin:
#undef var_8
#define var_8 -8
	// 58129 var_8           = word ptr -8 ;~ 1E67:05CE
#undef var_4
#define var_4 -4
	// 58130 var_4           = word ptr -4 ;~ 1E67:05CE
#undef arg_0
#define arg_0 6
	// 58131 arg_0           = dword ptr  6 ;~ 1E67:05CE
cs=0x1e67;eip=0x0005ce; 	X(PUSH(bp));	// 58133 push    bp ;~ 1E67:05CE
cs=0x1e67;eip=0x0005cf; 	T(MOV(bp, sp));	// 58134 mov     bp, sp ;~ 1E67:05CF
cs=0x1e67;eip=0x0005d1; 	T(SUB(sp, 8));	// 58135 sub     sp, 8 ;~ 1E67:05D1
cs=0x1e67;eip=0x0005d4; 	X(PUSH(di));	// 58136 push    di ;~ 1E67:05D4
cs=0x1e67;eip=0x0005d5; 	X(PUSH(si));	// 58137 push    si              ; FILE * ;~ 1E67:05D5
cs=0x1e67;eip=0x0005d6; 	T(MOV(si, 0x36D8));	// 58138 mov     si, 36D8h ;~ 1E67:05D6
cs=0x1e67;eip=0x0005d9; 	T(ax = bp+arg_0+2);	// 58139 lea     ax, [bp+arg_0+2] ;~ 1E67:05D9
cs=0x1e67;eip=0x0005dc; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 58140 mov     [bp+var_4], ax ;~ 1E67:05DC
cs=0x1e67;eip=0x0005df; 	X(PUSH(si));	// 58141 push    si ;~ 1E67:05DF
cs=0x1e67;eip=0x0005e0; 	J(CALLF(__stbuf,0));	// 58142 call    __stbuf ;~ 1E67:05E0
cs=0x1e67;eip=0x0005e5; 	T(ADD(sp, 2));	// 58143 add     sp, 2 ;~ 1E67:05E5
cs=0x1e67;eip=0x0005e8; 	T(MOV(di, ax));	// 58144 mov     di, ax ;~ 1E67:05E8
cs=0x1e67;eip=0x0005ea; 	T(ax = bp+arg_0+2);	// 58145 lea     ax, [bp+arg_0+2] ;~ 1E67:05EA
cs=0x1e67;eip=0x0005ed; 	X(PUSH(ax));	// 58146 push    ax ;~ 1E67:05ED
cs=0x1e67;eip=0x0005ee; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 58147 push    word ptr [bp+arg_0] ;~ 1E67:05EE
cs=0x1e67;eip=0x0005f1; 	X(PUSH(si));	// 58148 push    si ;~ 1E67:05F1
cs=0x1e67;eip=0x0005f2; 	J(CALLF(__output,0));	// 58149 call    __output ;~ 1E67:05F2
cs=0x1e67;eip=0x0005f7; 	T(ADD(sp, 6));	// 58150 add     sp, 6 ;~ 1E67:05F7
cs=0x1e67;eip=0x0005fa; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 58151 mov     [bp+var_8], ax ;~ 1E67:05FA
cs=0x1e67;eip=0x0005fd; 	X(PUSH(si));	// 58152 push    si              ; FILE * ;~ 1E67:05FD
cs=0x1e67;eip=0x0005fe; 	X(PUSH(di));	// 58153 push    di              ; int ;~ 1E67:05FE
cs=0x1e67;eip=0x0005ff; 	J(CALLF(__ftbuf,0));	// 58154 call    __ftbuf ;~ 1E67:05FF
cs=0x1e67;eip=0x000604; 	T(ADD(sp, 4));	// 58155 add     sp, 4 ;~ 1E67:0604
cs=0x1e67;eip=0x000607; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 58156 mov     ax, [bp+var_8] ;~ 1E67:0607
cs=0x1e67;eip=0x00060a; 	X(POP(si));	// 58157 pop     si ;~ 1E67:060A
cs=0x1e67;eip=0x00060b; 	X(POP(di));	// 58158 pop     di ;~ 1E67:060B
cs=0x1e67;eip=0x00060c; 	T(MOV(sp, bp));	// 58159 mov     sp, bp ;~ 1E67:060C
cs=0x1e67;eip=0x00060e; 	X(POP(bp));	// 58160 pop     bp ;~ 1E67:060E
cs=0x1e67;eip=0x00060f; 	J(RETF(0));	// 58161 retf ;~ 1E67:060F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_printf: 	goto _printf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __flsbuf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __flsbuf:
    _begin:
#undef var_8
#define var_8 -8
	// 58173 var_8           = word ptr -8 ;~ 1E67:0610
#undef var_6
#define var_6 -6
	// 58174 var_6           = dword ptr -6 ;~ 1E67:0610
#undef arg_0
#define arg_0 6
	// 58175 arg_0           = dword ptr  6 ;~ 1E67:0610
cs=0x1e67;eip=0x000610; 	X(PUSH(bp));	// 58177 push    bp ;~ 1E67:0610
cs=0x1e67;eip=0x000611; 	T(MOV(bp, sp));	// 58178 mov     bp, sp ;~ 1E67:0611
cs=0x1e67;eip=0x000613; 	T(SUB(sp, 8));	// 58179 sub     sp, 8 ;~ 1E67:0613
cs=0x1e67;eip=0x000616; 	X(PUSH(di));	// 58180 push    di              ; unsigned int ;~ 1E67:0616
cs=0x1e67;eip=0x000617; 	X(PUSH(si));	// 58181 push    si              ; int ;~ 1E67:0617
cs=0x1e67;eip=0x000618; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 58182 mov     si, word ptr [bp+arg_0+2] ;~ 1E67:0618
cs=0x1e67;eip=0x00061b; 	T(MOV(al, *(raddr(ds,si+7))));	// 58183 mov     al, [si+7] ;~ 1E67:061B
cs=0x1e67;eip=0x00061e; 	T(CBW);	// 58184 cbw ;~ 1E67:061E
cs=0x1e67;eip=0x00061f; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 58185 mov     word ptr [bp+var_6], ax ;~ 1E67:061F
cs=0x1e67;eip=0x000622; 	T(MOV(ax, si));	// 58186 mov     ax, si ;~ 1E67:0622
cs=0x1e67;eip=0x000624; 	T(SUB(ax, 0x36D0));	// 58187 sub     ax, 36D0h ;~ 1E67:0624
cs=0x1e67;eip=0x000627; 	T(MOV(cl, 3));	// 58188 mov     cl, 3 ;~ 1E67:0627
cs=0x1e67;eip=0x000629; 	T(SAR(ax, cl));	// 58189 sar     ax, cl ;~ 1E67:0629
cs=0x1e67;eip=0x00062b; 	T(MOV(cx, ax));	// 58190 mov     cx, ax ;~ 1E67:062B
cs=0x1e67;eip=0x00062d; 	T(SHL(ax, 1));	// 58191 shl     ax, 1 ;~ 1E67:062D
cs=0x1e67;eip=0x00062f; 	T(ADD(ax, cx));	// 58192 add     ax, cx ;~ 1E67:062F
cs=0x1e67;eip=0x000631; 	T(SHL(ax, 1));	// 58193 shl     ax, 1 ;~ 1E67:0631
cs=0x1e67;eip=0x000633; 	T(ADD(ax, 0x3770));	// 58194 add     ax, 3770h ;~ 1E67:0633
cs=0x1e67;eip=0x000636; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 58195 mov     [bp+var_8], ax ;~ 1E67:0636
cs=0x1e67;eip=0x000639; 	T(TEST(*(raddr(ds,si+6)), 0x83));	// 58196 test    byte ptr [si+6], 83h ;~ 1E67:0639
cs=0x1e67;eip=0x00063d; 	J(JZ(loc_2d295));	// 58197 jz      short loc_2D295 ;~ 1E67:063D
cs=0x1e67;eip=0x00063f; 	T(TEST(*(raddr(ds,si+6)), 0x40));	// 58198 test    byte ptr [si+6], 40h ;~ 1E67:063F
cs=0x1e67;eip=0x000643; 	J(JZ(loc_2d2a0));	// 58199 jz      short loc_2D2A0 ;~ 1E67:0643
loc_2d295:
	// 8110 
cs=0x1e67;eip=0x000645; 	X(OR(*(raddr(ds,si+6)), 0x20));	// 58203 or      byte ptr [si+6], 20h ;~ 1E67:0645
cs=0x1e67;eip=0x000649; 	T(MOV(ax, 0x0FFFF));	// 58204 mov     ax, 0FFFFh ;~ 1E67:0649
cs=0x1e67;eip=0x00064c; 	J(JMP(loc_2d3b7));	// 58205 jmp     loc_2D3B7 ;~ 1E67:064C
loc_2d2a0:
	// 8111 
cs=0x1e67;eip=0x000650; 	T(TEST(*(raddr(ds,si+6)), 1));	// 58210 test    byte ptr [si+6], 1 ;~ 1E67:0650
cs=0x1e67;eip=0x000654; 	J(JNZ(loc_2d295));	// 58211 jnz     short loc_2D295 ;~ 1E67:0654
cs=0x1e67;eip=0x000656; 	X(OR(*(raddr(ds,si+6)), 2));	// 58212 or      byte ptr [si+6], 2 ;~ 1E67:0656
cs=0x1e67;eip=0x00065a; 	X(AND(*(raddr(ds,si+6)), 0x0EF));	// 58213 and     byte ptr [si+6], 0EFh ;~ 1E67:065A
cs=0x1e67;eip=0x00065e; 	T(SUB(ax, ax));	// 58214 sub     ax, ax ;~ 1E67:065E
cs=0x1e67;eip=0x000660; 	X(MOV(*(dw*)(raddr(ds,si+2)), ax));	// 58215 mov     [si+2], ax ;~ 1E67:0660
cs=0x1e67;eip=0x000663; 	T(MOV(di, ax));	// 58216 mov     di, ax ;~ 1E67:0663
cs=0x1e67;eip=0x000665; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), di));	// 58217 mov     word ptr [bp+var_6+2], di ;~ 1E67:0665
cs=0x1e67;eip=0x000668; 	T(TEST(*(raddr(ds,si+6)), 0x0C));	// 58218 test    byte ptr [si+6], 0Ch ;~ 1E67:0668
cs=0x1e67;eip=0x00066c; 	J(JNZ(loc_2d31f));	// 58219 jnz     short loc_2D31F ;~ 1E67:066C
cs=0x1e67;eip=0x00066e; 	T(MOV(bx, si));	// 58220 mov     bx, si ;~ 1E67:066E
cs=0x1e67;eip=0x000670; 	T(SUB(bx, 0x36D0));	// 58221 sub     bx, 36D0h ;~ 1E67:0670
cs=0x1e67;eip=0x000674; 	T(MOV(cl, 3));	// 58222 mov     cl, 3 ;~ 1E67:0674
cs=0x1e67;eip=0x000676; 	T(SAR(bx, cl));	// 58223 sar     bx, cl ;~ 1E67:0676
cs=0x1e67;eip=0x000678; 	T(MOV(ax, bx));	// 58224 mov     ax, bx ;~ 1E67:0678
cs=0x1e67;eip=0x00067a; 	T(SHL(bx, 1));	// 58225 shl     bx, 1 ;~ 1E67:067A
cs=0x1e67;eip=0x00067c; 	T(ADD(bx, ax));	// 58226 add     bx, ax ;~ 1E67:067C
cs=0x1e67;eip=0x00067e; 	T(SHL(bx, 1));	// 58227 shl     bx, 1 ;~ 1E67:067E
cs=0x1e67;eip=0x000680; 	T(TEST(*(raddr(ds,bx+0x3770)), 1));	// 58228 test    byte ptr [bx+3770h], 1 ;~ 1E67:0680
cs=0x1e67;eip=0x000685; 	J(JNZ(loc_2d31f));	// 58229 jnz     short loc_2D31F ;~ 1E67:0685
cs=0x1e67;eip=0x000687; 	T(CMP(si, 0x36D8));	// 58230 cmp     si, 36D8h ;~ 1E67:0687
cs=0x1e67;eip=0x00068b; 	J(JZ(loc_2d2e3));	// 58231 jz      short loc_2D2E3 ;~ 1E67:068B
cs=0x1e67;eip=0x00068d; 	T(CMP(si, 0x36E0));	// 58232 cmp     si, 36E0h ;~ 1E67:068D
cs=0x1e67;eip=0x000691; 	J(JNZ(loc_2d318));	// 58233 jnz     short loc_2D318 ;~ 1E67:0691
loc_2d2e3:
	// 8112 
cs=0x1e67;eip=0x000693; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 58236 push    word ptr [bp+var_6] ; int ;~ 1E67:0693
cs=0x1e67;eip=0x000696; 	J(CALLF(_isatty,0));	// 58237 call    _isatty ;~ 1E67:0696
cs=0x1e67;eip=0x00069b; 	T(ADD(sp, 2));	// 58238 add     sp, 2 ;~ 1E67:069B
cs=0x1e67;eip=0x00069e; 	T(OR(ax, ax));	// 58239 or      ax, ax ;~ 1E67:069E
cs=0x1e67;eip=0x0006a0; 	J(JNZ(loc_2d31f));	// 58240 jnz     short loc_2D31F ;~ 1E67:06A0
cs=0x1e67;eip=0x0006a2; 	X(INC(word_3ee3e));	// 58241 inc     word_3EE3E ;~ 1E67:06A2
cs=0x1e67;eip=0x0006a6; 	T(CMP(si, 0x36D8));	// 58242 cmp     si, 36D8h ;~ 1E67:06A6
cs=0x1e67;eip=0x0006aa; 	J(JNZ(loc_2d302));	// 58243 jnz     short loc_2D302 ;~ 1E67:06AA
cs=0x1e67;eip=0x0006ac; 	T(MOV(ax, 0x891E));	// 58244 mov     ax, 891Eh ;~ 1E67:06AC
cs=0x1e67;eip=0x0006af; 	J(JMP(loc_2d305));	// 58245 jmp     short loc_2D305 ;~ 1E67:06AF
loc_2d302:
	// 8113 
cs=0x1e67;eip=0x0006b2; 	T(MOV(ax, 0x0AA62));	// 58250 mov     ax, 0AA62h ;~ 1E67:06B2
loc_2d305:
	// 8114 
cs=0x1e67;eip=0x0006b5; 	X(MOV(*(dw*)(raddr(ds,si+4)), ax));	// 58253 mov     [si+4], ax ;~ 1E67:06B5
cs=0x1e67;eip=0x0006b8; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 58254 mov     [si], ax ;~ 1E67:06B8
cs=0x1e67;eip=0x0006ba; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 58255 mov     bx, [bp+var_8] ;~ 1E67:06BA
cs=0x1e67;eip=0x0006bd; 	X(MOV(*(dw*)(raddr(ds,bx+2)), 0x200));	// 58256 mov     word ptr [bx+2], 200h ;~ 1E67:06BD
cs=0x1e67;eip=0x0006c2; 	X(MOV(*(raddr(ds,bx)), 1));	// 58257 mov     byte ptr [bx], 1 ;~ 1E67:06C2
cs=0x1e67;eip=0x0006c5; 	J(JMP(loc_2d31f));	// 58258 jmp     short loc_2D31F ;~ 1E67:06C5
loc_2d318:
	// 8115 
cs=0x1e67;eip=0x0006c8; 	X(PUSH(si));	// 58263 push    si ;~ 1E67:06C8
cs=0x1e67;eip=0x0006c9; 	J(CALL(__getbuf,0));	// 58264 call    __getbuf ;~ 1E67:06C9
cs=0x1e67;eip=0x0006cc; 	T(ADD(sp, 2));	// 58265 add     sp, 2 ;~ 1E67:06CC
loc_2d31f:
	// 8116 
cs=0x1e67;eip=0x0006cf; 	T(TEST(*(raddr(ds,si+6)), 8));	// 58269 test    byte ptr [si+6], 8 ;~ 1E67:06CF
cs=0x1e67;eip=0x0006d3; 	J(JNZ(loc_2d33e));	// 58270 jnz     short loc_2D33E ;~ 1E67:06D3
cs=0x1e67;eip=0x0006d5; 	T(MOV(bx, si));	// 58271 mov     bx, si ;~ 1E67:06D5
cs=0x1e67;eip=0x0006d7; 	T(SUB(bx, 0x36D0));	// 58272 sub     bx, 36D0h ;~ 1E67:06D7
cs=0x1e67;eip=0x0006db; 	T(MOV(cl, 3));	// 58273 mov     cl, 3 ;~ 1E67:06DB
cs=0x1e67;eip=0x0006dd; 	T(SAR(bx, cl));	// 58274 sar     bx, cl ;~ 1E67:06DD
cs=0x1e67;eip=0x0006df; 	T(MOV(ax, bx));	// 58275 mov     ax, bx ;~ 1E67:06DF
cs=0x1e67;eip=0x0006e1; 	T(SHL(bx, 1));	// 58276 shl     bx, 1 ;~ 1E67:06E1
cs=0x1e67;eip=0x0006e3; 	T(ADD(bx, ax));	// 58277 add     bx, ax ;~ 1E67:06E3
cs=0x1e67;eip=0x0006e5; 	T(SHL(bx, 1));	// 58278 shl     bx, 1 ;~ 1E67:06E5
cs=0x1e67;eip=0x0006e7; 	T(TEST(*(raddr(ds,bx+0x3770)), 1));	// 58279 test    byte ptr [bx+3770h], 1 ;~ 1E67:06E7
cs=0x1e67;eip=0x0006ec; 	J(JZ(loc_2d392));	// 58280 jz      short loc_2D392 ;~ 1E67:06EC
loc_2d33e:
	// 8117 
cs=0x1e67;eip=0x0006ee; 	T(MOV(di, *(dw*)(raddr(ds,si))));	// 58283 mov     di, [si] ;~ 1E67:06EE
cs=0x1e67;eip=0x0006f0; 	T(SUB(di, *(dw*)(raddr(ds,si+4))));	// 58284 sub     di, [si+4] ;~ 1E67:06F0
cs=0x1e67;eip=0x0006f3; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 58285 mov     ax, [si+4] ;~ 1E67:06F3
cs=0x1e67;eip=0x0006f6; 	T(INC(ax));	// 58286 inc     ax ;~ 1E67:06F6
cs=0x1e67;eip=0x0006f7; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 58287 mov     [si], ax ;~ 1E67:06F7
cs=0x1e67;eip=0x0006f9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 58288 mov     bx, [bp+var_8] ;~ 1E67:06F9
cs=0x1e67;eip=0x0006fc; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 58289 mov     ax, [bx+2] ;~ 1E67:06FC
cs=0x1e67;eip=0x0006ff; 	T(DEC(ax));	// 58290 dec     ax ;~ 1E67:06FF
cs=0x1e67;eip=0x000700; 	X(MOV(*(dw*)(raddr(ds,si+2)), ax));	// 58291 mov     [si+2], ax ;~ 1E67:0700
cs=0x1e67;eip=0x000703; 	T(OR(di, di));	// 58292 or      di, di ;~ 1E67:0703
cs=0x1e67;eip=0x000705; 	J(JLE(loc_2d36c));	// 58293 jle     short loc_2D36C ;~ 1E67:0705
cs=0x1e67;eip=0x000707; 	X(PUSH(di));	// 58294 push    di              ; void * ;~ 1E67:0707
cs=0x1e67;eip=0x000708; 	X(PUSH(*(dw*)(raddr(ds,si+4))));	// 58295 push    word ptr [si+4] ; void * ;~ 1E67:0708
cs=0x1e67;eip=0x00070b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 58296 push    word ptr [bp+var_6] ; int ;~ 1E67:070B
cs=0x1e67;eip=0x00070e; 	J(CALLF(_write,0));	// 58297 call    _write ;~ 1E67:070E
cs=0x1e67;eip=0x000713; 	T(ADD(sp, 6));	// 58298 add     sp, 6 ;~ 1E67:0713
cs=0x1e67;eip=0x000716; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), ax));	// 58299 mov     word ptr [bp+var_6+2], ax ;~ 1E67:0716
cs=0x1e67;eip=0x000719; 	J(JMP(loc_2d387));	// 58300 jmp     short loc_2D387 ;~ 1E67:0719
loc_2d36c:
	// 8118 
cs=0x1e67;eip=0x00071c; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 58305 mov     bx, word ptr [bp+var_6] ;~ 1E67:071C
cs=0x1e67;eip=0x00071f; 	T(TEST(*(raddr(ds,bx+0x3684)), 0x20));	// 58306 test    byte ptr [bx+3684h], 20h ;~ 1E67:071F
cs=0x1e67;eip=0x000724; 	J(JZ(loc_2d387));	// 58307 jz      short loc_2D387 ;~ 1E67:0724
cs=0x1e67;eip=0x000726; 	T(MOV(ax, 2));	// 58308 mov     ax, 2 ;~ 1E67:0726
cs=0x1e67;eip=0x000729; 	X(PUSH(ax));	// 58309 push    ax              ; int ;~ 1E67:0729
cs=0x1e67;eip=0x00072a; 	T(SUB(ax, ax));	// 58310 sub     ax, ax ;~ 1E67:072A
cs=0x1e67;eip=0x00072c; 	X(PUSH(ax));	// 58311 push    ax              ; __int32 ;~ 1E67:072C
cs=0x1e67;eip=0x00072d; 	X(PUSH(ax));	// 58312 push    ax              ; __int32 ;~ 1E67:072D
cs=0x1e67;eip=0x00072e; 	X(PUSH(bx));	// 58313 push    bx              ; int ;~ 1E67:072E
cs=0x1e67;eip=0x00072f; 	J(CALLF(_lseek,0));	// 58314 call    _lseek ;~ 1E67:072F
cs=0x1e67;eip=0x000734; 	T(ADD(sp, 8));	// 58315 add     sp, 8 ;~ 1E67:0734
loc_2d387:
	// 8119 
cs=0x1e67;eip=0x000737; 	T(MOV(bx, *(dw*)(raddr(ds,si+4))));	// 58319 mov     bx, [si+4] ;~ 1E67:0737
cs=0x1e67;eip=0x00073a; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0))));	// 58320 mov     al, byte ptr [bp+arg_0] ;~ 1E67:073A
cs=0x1e67;eip=0x00073d; 	X(MOV(*(raddr(ds,bx)), al));	// 58321 mov     [bx], al ;~ 1E67:073D
cs=0x1e67;eip=0x00073f; 	J(JMP(loc_2d3aa));	// 58322 jmp     short loc_2D3AA ;~ 1E67:073F
loc_2d392:
	// 8120 
cs=0x1e67;eip=0x000742; 	T(MOV(di, 1));	// 58327 mov     di, 1 ;~ 1E67:0742
cs=0x1e67;eip=0x000745; 	T(MOV(ax, di));	// 58328 mov     ax, di ;~ 1E67:0745
cs=0x1e67;eip=0x000747; 	X(PUSH(ax));	// 58329 push    ax              ; void * ;~ 1E67:0747
cs=0x1e67;eip=0x000748; 	T(ax = bp+arg_0);	// 58330 lea     ax, [bp+arg_0] ;~ 1E67:0748
cs=0x1e67;eip=0x00074b; 	X(PUSH(ax));	// 58331 push    ax              ; void * ;~ 1E67:074B
cs=0x1e67;eip=0x00074c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 58332 push    word ptr [bp+var_6] ; int ;~ 1E67:074C
cs=0x1e67;eip=0x00074f; 	J(CALLF(_write,0));	// 58333 call    _write ;~ 1E67:074F
cs=0x1e67;eip=0x000754; 	T(ADD(sp, 6));	// 58334 add     sp, 6 ;~ 1E67:0754
cs=0x1e67;eip=0x000757; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), ax));	// 58335 mov     word ptr [bp+var_6+2], ax ;~ 1E67:0757
loc_2d3aa:
	// 8121 
cs=0x1e67;eip=0x00075a; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), di));	// 58338 cmp     word ptr [bp+var_6+2], di ;~ 1E67:075A
cs=0x1e67;eip=0x00075d; 	J(JZ(loc_2d3b2));	// 58339 jz      short loc_2D3B2 ;~ 1E67:075D
cs=0x1e67;eip=0x00075f; 	J(JMP(loc_2d295));	// 58340 jmp     loc_2D295 ;~ 1E67:075F
loc_2d3b2:
	// 8122 
cs=0x1e67;eip=0x000762; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0))));	// 58344 mov     al, byte ptr [bp+arg_0] ;~ 1E67:0762
cs=0x1e67;eip=0x000765; 	T(SUB(ah, ah));	// 58345 sub     ah, ah ;~ 1E67:0765
loc_2d3b7:
	// 8123 
cs=0x1e67;eip=0x000767; 	X(POP(si));	// 58348 pop     si ;~ 1E67:0767
cs=0x1e67;eip=0x000768; 	X(POP(di));	// 58349 pop     di ;~ 1E67:0768
cs=0x1e67;eip=0x000769; 	T(MOV(sp, bp));	// 58350 mov     sp, bp ;~ 1E67:0769
cs=0x1e67;eip=0x00076b; 	X(POP(bp));	// 58351 pop     bp ;~ 1E67:076B
cs=0x1e67;eip=0x00076c; 	J(RETF(0));	// 58352 retf ;~ 1E67:076C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__flsbuf: 	goto __flsbuf;
        case m2c::kloc_2d295: 	goto loc_2d295;
        case m2c::kloc_2d2a0: 	goto loc_2d2a0;
        case m2c::kloc_2d2e3: 	goto loc_2d2e3;
        case m2c::kloc_2d302: 	goto loc_2d302;
        case m2c::kloc_2d305: 	goto loc_2d305;
        case m2c::kloc_2d318: 	goto loc_2d318;
        case m2c::kloc_2d31f: 	goto loc_2d31f;
        case m2c::kloc_2d33e: 	goto loc_2d33e;
        case m2c::kloc_2d36c: 	goto loc_2d36c;
        case m2c::kloc_2d387: 	goto loc_2d387;
        case m2c::kloc_2d392: 	goto loc_2d392;
        case m2c::kloc_2d3aa: 	goto loc_2d3aa;
        case m2c::kloc_2d3b2: 	goto loc_2d3b2;
        case m2c::kloc_2d3b7: 	goto loc_2d3b7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __getbuf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __getbuf:
    _begin:
#undef var_2
#define var_2 -2
	// 58364 var_2           = word ptr -2 ;~ 1E67:076E
#undef arg_0
#define arg_0 4
	// 58365 arg_0           = word ptr  4 ;~ 1E67:076E
cs=0x1e67;eip=0x00076e; 	X(PUSH(bp));	// 58367 push    bp ;~ 1E67:076E
cs=0x1e67;eip=0x00076f; 	T(MOV(bp, sp));	// 58368 mov     bp, sp ;~ 1E67:076F
cs=0x1e67;eip=0x000771; 	T(SUB(sp, 2));	// 58369 sub     sp, 2 ;~ 1E67:0771
cs=0x1e67;eip=0x000774; 	X(PUSH(si));	// 58370 push    si ;~ 1E67:0774
cs=0x1e67;eip=0x000775; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 58371 mov     ax, [bp+arg_0] ;~ 1E67:0775
cs=0x1e67;eip=0x000778; 	T(SUB(ax, 0x36D0));	// 58372 sub     ax, 36D0h ;~ 1E67:0778
cs=0x1e67;eip=0x00077b; 	T(MOV(cl, 3));	// 58373 mov     cl, 3 ;~ 1E67:077B
cs=0x1e67;eip=0x00077d; 	T(SAR(ax, cl));	// 58374 sar     ax, cl ;~ 1E67:077D
cs=0x1e67;eip=0x00077f; 	T(MOV(cx, ax));	// 58375 mov     cx, ax ;~ 1E67:077F
cs=0x1e67;eip=0x000781; 	T(SHL(ax, 1));	// 58376 shl     ax, 1 ;~ 1E67:0781
cs=0x1e67;eip=0x000783; 	T(ADD(ax, cx));	// 58377 add     ax, cx ;~ 1E67:0783
cs=0x1e67;eip=0x000785; 	T(SHL(ax, 1));	// 58378 shl     ax, 1 ;~ 1E67:0785
cs=0x1e67;eip=0x000787; 	T(ADD(ax, 0x3770));	// 58379 add     ax, 3770h ;~ 1E67:0787
cs=0x1e67;eip=0x00078a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 58380 mov     [bp+var_2], ax ;~ 1E67:078A
cs=0x1e67;eip=0x00078d; 	T(MOV(ax, 0x200));	// 58381 mov     ax, 200h ;~ 1E67:078D
cs=0x1e67;eip=0x000790; 	X(PUSH(ax));	// 58382 push    ax ;~ 1E67:0790
cs=0x1e67;eip=0x000791; 	J(CALLF(unknown_libname_2,0));	// 58383 call    unknown_libname_2 ; MS Quick C v1.0/v2.01 & MSC v5.1 DOS run-time & graphic ;~ 1E67:0791
cs=0x1e67;eip=0x000796; 	T(ADD(sp, 2));	// 58384 add     sp, 2 ;~ 1E67:0796
cs=0x1e67;eip=0x000799; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 58385 mov     bx, [bp+arg_0] ;~ 1E67:0799
cs=0x1e67;eip=0x00079c; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 58386 mov     [bx+4], ax ;~ 1E67:079C
cs=0x1e67;eip=0x00079f; 	T(OR(ax, ax));	// 58387 or      ax, ax ;~ 1E67:079F
cs=0x1e67;eip=0x0007a1; 	J(JZ(loc_2d402));	// 58388 jz      short loc_2D402 ;~ 1E67:07A1
cs=0x1e67;eip=0x0007a3; 	X(OR(*(raddr(ds,bx+6)), 8));	// 58389 or      byte ptr [bx+6], 8 ;~ 1E67:07A3
cs=0x1e67;eip=0x0007a7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 58390 mov     bx, [bp+var_2] ;~ 1E67:07A7
cs=0x1e67;eip=0x0007aa; 	X(MOV(*(dw*)(raddr(ds,bx+2)), 0x200));	// 58391 mov     word ptr [bx+2], 200h ;~ 1E67:07AA
cs=0x1e67;eip=0x0007af; 	J(JMP(loc_2d418));	// 58392 jmp     short loc_2D418 ;~ 1E67:07AF
loc_2d402:
	// 8124 
cs=0x1e67;eip=0x0007b2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 58397 mov     bx, [bp+arg_0] ;~ 1E67:07B2
cs=0x1e67;eip=0x0007b5; 	X(OR(*(raddr(ds,bx+6)), 4));	// 58398 or      byte ptr [bx+6], 4 ;~ 1E67:07B5
cs=0x1e67;eip=0x0007b9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 58399 mov     ax, [bp+var_2] ;~ 1E67:07B9
cs=0x1e67;eip=0x0007bc; 	T(INC(ax));	// 58400 inc     ax ;~ 1E67:07BC
cs=0x1e67;eip=0x0007bd; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 58401 mov     [bx+4], ax ;~ 1E67:07BD
cs=0x1e67;eip=0x0007c0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 58402 mov     bx, [bp+var_2] ;~ 1E67:07C0
cs=0x1e67;eip=0x0007c3; 	X(MOV(*(dw*)(raddr(ds,bx+2)), 1));	// 58403 mov     word ptr [bx+2], 1 ;~ 1E67:07C3
loc_2d418:
	// 8125 
cs=0x1e67;eip=0x0007c8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 58406 mov     bx, [bp+arg_0] ;~ 1E67:07C8
cs=0x1e67;eip=0x0007cb; 	T(MOV(si, bx));	// 58407 mov     si, bx ;~ 1E67:07CB
cs=0x1e67;eip=0x0007cd; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 58408 mov     ax, [si+4] ;~ 1E67:07CD
cs=0x1e67;eip=0x0007d0; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 58409 mov     [bx], ax ;~ 1E67:07D0
cs=0x1e67;eip=0x0007d2; 	X(MOV(*(dw*)(raddr(ds,bx+2)), 0));	// 58410 mov     word ptr [bx+2], 0 ;~ 1E67:07D2
cs=0x1e67;eip=0x0007d7; 	X(POP(si));	// 58411 pop     si ;~ 1E67:07D7
cs=0x1e67;eip=0x0007d8; 	T(MOV(sp, bp));	// 58412 mov     sp, bp ;~ 1E67:07D8
cs=0x1e67;eip=0x0007da; 	X(POP(bp));	// 58413 pop     bp ;~ 1E67:07DA
cs=0x1e67;eip=0x0007db; 	J(RETN(0));	// 58414 retn ;~ 1E67:07DB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__getbuf: 	goto __getbuf;
        case m2c::kloc_2d402: 	goto loc_2d402;
        case m2c::kloc_2d418: 	goto loc_2d418;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __stbuf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __stbuf:
    _begin:
#undef var_4
#define var_4 -4
	// 58424 var_4           = word ptr -4 ;~ 1E67:07DC
#undef var_2
#define var_2 -2
	// 58425 var_2           = word ptr -2 ;~ 1E67:07DC
#undef arg_0
#define arg_0 6
	// 58426 arg_0           = word ptr  6 ;~ 1E67:07DC
cs=0x1e67;eip=0x0007dc; 	X(PUSH(bp));	// 58428 push    bp ;~ 1E67:07DC
cs=0x1e67;eip=0x0007dd; 	T(MOV(bp, sp));	// 58429 mov     bp, sp ;~ 1E67:07DD
cs=0x1e67;eip=0x0007df; 	T(SUB(sp, 4));	// 58430 sub     sp, 4 ;~ 1E67:07DF
cs=0x1e67;eip=0x0007e2; 	X(PUSH(si));	// 58431 push    si ;~ 1E67:07E2
cs=0x1e67;eip=0x0007e3; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 58432 mov     si, [bp+arg_0] ;~ 1E67:07E3
cs=0x1e67;eip=0x0007e6; 	X(INC(word_3ee3e));	// 58433 inc     word_3EE3E ;~ 1E67:07E6
cs=0x1e67;eip=0x0007ea; 	T(CMP(si, 0x36D8));	// 58434 cmp     si, 36D8h ;~ 1E67:07EA
cs=0x1e67;eip=0x0007ee; 	J(JNZ(loc_2d448));	// 58435 jnz     short loc_2D448 ;~ 1E67:07EE
cs=0x1e67;eip=0x0007f0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x891E));	// 58436 mov     [bp+var_2], 891Eh ;~ 1E67:07F0
cs=0x1e67;eip=0x0007f5; 	J(JMP(loc_2d453));	// 58437 jmp     short loc_2D453 ;~ 1E67:07F5
loc_2d448:
	// 8126 
cs=0x1e67;eip=0x0007f8; 	T(CMP(si, 0x36E0));	// 58442 cmp     si, 36E0h ;~ 1E67:07F8
cs=0x1e67;eip=0x0007fc; 	J(JNZ(loc_2d472));	// 58443 jnz     short loc_2D472 ;~ 1E67:07FC
cs=0x1e67;eip=0x0007fe; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0AA62));	// 58444 mov     [bp+var_2], 0AA62h ;~ 1E67:07FE
loc_2d453:
	// 8127 
cs=0x1e67;eip=0x000803; 	T(TEST(*(raddr(ds,si+6)), 0x0C));	// 58447 test    byte ptr [si+6], 0Ch ;~ 1E67:0803
cs=0x1e67;eip=0x000807; 	J(JNZ(loc_2d472));	// 58448 jnz     short loc_2D472 ;~ 1E67:0807
cs=0x1e67;eip=0x000809; 	T(MOV(bx, si));	// 58449 mov     bx, si ;~ 1E67:0809
cs=0x1e67;eip=0x00080b; 	T(SUB(bx, 0x36D0));	// 58450 sub     bx, 36D0h ;~ 1E67:080B
cs=0x1e67;eip=0x00080f; 	T(MOV(cl, 3));	// 58451 mov     cl, 3 ;~ 1E67:080F
cs=0x1e67;eip=0x000811; 	T(SAR(bx, cl));	// 58452 sar     bx, cl ;~ 1E67:0811
cs=0x1e67;eip=0x000813; 	T(MOV(ax, bx));	// 58453 mov     ax, bx ;~ 1E67:0813
cs=0x1e67;eip=0x000815; 	T(SHL(bx, 1));	// 58454 shl     bx, 1 ;~ 1E67:0815
cs=0x1e67;eip=0x000817; 	T(ADD(bx, ax));	// 58455 add     bx, ax ;~ 1E67:0817
cs=0x1e67;eip=0x000819; 	T(SHL(bx, 1));	// 58456 shl     bx, 1 ;~ 1E67:0819
cs=0x1e67;eip=0x00081b; 	T(TEST(*(raddr(ds,bx+0x3770)), 1));	// 58457 test    byte ptr [bx+3770h], 1 ;~ 1E67:081B
cs=0x1e67;eip=0x000820; 	J(JZ(loc_2d476));	// 58458 jz      short loc_2D476 ;~ 1E67:0820
loc_2d472:
	// 8128 
cs=0x1e67;eip=0x000822; 	T(SUB(ax, ax));	// 58462 sub     ax, ax ;~ 1E67:0822
cs=0x1e67;eip=0x000824; 	J(JMP(loc_2d4ab));	// 58463 jmp     short loc_2D4AB ;~ 1E67:0824
loc_2d476:
	// 8129 
cs=0x1e67;eip=0x000826; 	T(MOV(ax, si));	// 58467 mov     ax, si ;~ 1E67:0826
cs=0x1e67;eip=0x000828; 	T(SUB(ax, 0x36D0));	// 58468 sub     ax, 36D0h ;~ 1E67:0828
cs=0x1e67;eip=0x00082b; 	T(MOV(cl, 3));	// 58469 mov     cl, 3 ;~ 1E67:082B
cs=0x1e67;eip=0x00082d; 	T(SAR(ax, cl));	// 58470 sar     ax, cl ;~ 1E67:082D
cs=0x1e67;eip=0x00082f; 	T(MOV(cx, ax));	// 58471 mov     cx, ax ;~ 1E67:082F
cs=0x1e67;eip=0x000831; 	T(SHL(ax, 1));	// 58472 shl     ax, 1 ;~ 1E67:0831
cs=0x1e67;eip=0x000833; 	T(ADD(ax, cx));	// 58473 add     ax, cx ;~ 1E67:0833
cs=0x1e67;eip=0x000835; 	T(SHL(ax, 1));	// 58474 shl     ax, 1 ;~ 1E67:0835
cs=0x1e67;eip=0x000837; 	T(ADD(ax, 0x3770));	// 58475 add     ax, 3770h ;~ 1E67:0837
cs=0x1e67;eip=0x00083a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 58476 mov     [bp+var_4], ax ;~ 1E67:083A
cs=0x1e67;eip=0x00083d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 58477 mov     ax, [bp+var_2] ;~ 1E67:083D
cs=0x1e67;eip=0x000840; 	X(MOV(*(dw*)(raddr(ds,si+4)), ax));	// 58478 mov     [si+4], ax ;~ 1E67:0840
cs=0x1e67;eip=0x000843; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 58479 mov     [si], ax ;~ 1E67:0843
cs=0x1e67;eip=0x000845; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 58480 mov     bx, [bp+var_4] ;~ 1E67:0845
cs=0x1e67;eip=0x000848; 	T(MOV(ax, 0x200));	// 58481 mov     ax, 200h ;~ 1E67:0848
cs=0x1e67;eip=0x00084b; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 58482 mov     [bx+2], ax ;~ 1E67:084B
cs=0x1e67;eip=0x00084e; 	X(MOV(*(dw*)(raddr(ds,si+2)), ax));	// 58483 mov     [si+2], ax ;~ 1E67:084E
cs=0x1e67;eip=0x000851; 	X(MOV(*(raddr(ds,bx)), 1));	// 58484 mov     byte ptr [bx], 1 ;~ 1E67:0851
cs=0x1e67;eip=0x000854; 	X(OR(*(raddr(ds,si+6)), 2));	// 58485 or      byte ptr [si+6], 2 ;~ 1E67:0854
cs=0x1e67;eip=0x000858; 	T(MOV(ax, 1));	// 58486 mov     ax, 1 ;~ 1E67:0858
loc_2d4ab:
	// 8130 
cs=0x1e67;eip=0x00085b; 	X(POP(si));	// 58489 pop     si ;~ 1E67:085B
cs=0x1e67;eip=0x00085c; 	T(MOV(sp, bp));	// 58490 mov     sp, bp ;~ 1E67:085C
cs=0x1e67;eip=0x00085e; 	X(POP(bp));	// 58491 pop     bp ;~ 1E67:085E
cs=0x1e67;eip=0x00085f; 	J(RETF(0));	// 58492 retf ;~ 1E67:085F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__stbuf: 	goto __stbuf;
        case m2c::kloc_2d448: 	goto loc_2d448;
        case m2c::kloc_2d453: 	goto loc_2d453;
        case m2c::kloc_2d472: 	goto loc_2d472;
        case m2c::kloc_2d476: 	goto loc_2d476;
        case m2c::kloc_2d4ab: 	goto loc_2d4ab;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __ftbuf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __ftbuf:
    _begin:
#undef var_2
#define var_2 -2
	// 58503 var_2           = word ptr -2 ;~ 1E67:0860
#undef arg_0
#define arg_0 6
	// 58504 arg_0           = word ptr  6 ;~ 1E67:0860
#undef arg_2
#define arg_2 8
	// 58505 arg_2           = dword ptr  8 ;~ 1E67:0860
cs=0x1e67;eip=0x000860; 	X(PUSH(bp));	// 58507 push    bp ;~ 1E67:0860
cs=0x1e67;eip=0x000861; 	T(MOV(bp, sp));	// 58508 mov     bp, sp ;~ 1E67:0861
cs=0x1e67;eip=0x000863; 	T(SUB(sp, 2));	// 58509 sub     sp, 2 ;~ 1E67:0863
cs=0x1e67;eip=0x000866; 	X(PUSH(si));	// 58510 push    si ;~ 1E67:0866
cs=0x1e67;eip=0x000867; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 58511 cmp     [bp+arg_0], 0 ;~ 1E67:0867
cs=0x1e67;eip=0x00086b; 	J(JZ(loc_2d51c));	// 58512 jz      short loc_2D51C ;~ 1E67:086B
cs=0x1e67;eip=0x00086d; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+arg_2))), 0x36D8));	// 58513 cmp     word ptr [bp+arg_2], 36D8h ;~ 1E67:086D
cs=0x1e67;eip=0x000872; 	J(JZ(loc_2d4cb));	// 58514 jz      short loc_2D4CB ;~ 1E67:0872
cs=0x1e67;eip=0x000874; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+arg_2))), 0x36E0));	// 58515 cmp     word ptr [bp+arg_2], 36E0h ;~ 1E67:0874
cs=0x1e67;eip=0x000879; 	J(JNZ(loc_2d549));	// 58516 jnz     short loc_2D549 ;~ 1E67:0879
loc_2d4cb:
	// 8131 
cs=0x1e67;eip=0x00087b; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 58519 mov     bx, word ptr [bp+arg_2] ;~ 1E67:087B
cs=0x1e67;eip=0x00087e; 	T(MOV(al, *(raddr(ds,bx+7))));	// 58520 mov     al, [bx+7] ;~ 1E67:087E
cs=0x1e67;eip=0x000881; 	T(CBW);	// 58521 cbw ;~ 1E67:0881
cs=0x1e67;eip=0x000882; 	X(PUSH(ax));	// 58522 push    ax              ; int ;~ 1E67:0882
cs=0x1e67;eip=0x000883; 	J(CALLF(_isatty,0));	// 58523 call    _isatty ;~ 1E67:0883
cs=0x1e67;eip=0x000888; 	T(ADD(sp, 2));	// 58524 add     sp, 2 ;~ 1E67:0888
cs=0x1e67;eip=0x00088b; 	T(OR(ax, ax));	// 58525 or      ax, ax ;~ 1E67:088B
cs=0x1e67;eip=0x00088d; 	J(JZ(loc_2d549));	// 58526 jz      short loc_2D549 ;~ 1E67:088D
cs=0x1e67;eip=0x00088f; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 58527 mov     ax, word ptr [bp+arg_2] ;~ 1E67:088F
cs=0x1e67;eip=0x000892; 	T(SUB(ax, 0x36D0));	// 58528 sub     ax, 36D0h ;~ 1E67:0892
cs=0x1e67;eip=0x000895; 	T(MOV(cl, 3));	// 58529 mov     cl, 3 ;~ 1E67:0895
cs=0x1e67;eip=0x000897; 	T(SAR(ax, cl));	// 58530 sar     ax, cl ;~ 1E67:0897
cs=0x1e67;eip=0x000899; 	T(MOV(cx, ax));	// 58531 mov     cx, ax ;~ 1E67:0899
cs=0x1e67;eip=0x00089b; 	T(SHL(ax, 1));	// 58532 shl     ax, 1 ;~ 1E67:089B
cs=0x1e67;eip=0x00089d; 	T(ADD(ax, cx));	// 58533 add     ax, cx ;~ 1E67:089D
cs=0x1e67;eip=0x00089f; 	T(SHL(ax, 1));	// 58534 shl     ax, 1 ;~ 1E67:089F
cs=0x1e67;eip=0x0008a1; 	T(ADD(ax, 0x3770));	// 58535 add     ax, 3770h ;~ 1E67:08A1
cs=0x1e67;eip=0x0008a4; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 58536 mov     [bp+var_2], ax ;~ 1E67:08A4
cs=0x1e67;eip=0x0008a7; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 58537 push    word ptr [bp+arg_2] ; FILE * ;~ 1E67:08A7
cs=0x1e67;eip=0x0008aa; 	J(CALLF(_fflush,0));	// 58538 call    _fflush ;~ 1E67:08AA
cs=0x1e67;eip=0x0008af; 	T(ADD(sp, 2));	// 58539 add     sp, 2 ;~ 1E67:08AF
cs=0x1e67;eip=0x0008b2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 58540 mov     bx, [bp+var_2] ;~ 1E67:08B2
cs=0x1e67;eip=0x0008b5; 	X(MOV(*(raddr(ds,bx)), 0));	// 58541 mov     byte ptr [bx], 0 ;~ 1E67:08B5
cs=0x1e67;eip=0x0008b8; 	X(MOV(*(dw*)(raddr(ds,bx+2)), 0));	// 58542 mov     word ptr [bx+2], 0 ;~ 1E67:08B8
cs=0x1e67;eip=0x0008bd; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 58543 mov     bx, word ptr [bp+arg_2] ;~ 1E67:08BD
cs=0x1e67;eip=0x0008c0; 	T(MOV(si, bx));	// 58544 mov     si, bx ;~ 1E67:08C0
cs=0x1e67;eip=0x0008c2; 	T(SUB(ax, ax));	// 58545 sub     ax, ax ;~ 1E67:08C2
cs=0x1e67;eip=0x0008c4; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 58546 mov     [si], ax ;~ 1E67:08C4
cs=0x1e67;eip=0x0008c6; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 58547 mov     [bx+4], ax ;~ 1E67:08C6
cs=0x1e67;eip=0x0008c9; 	J(JMP(loc_2d549));	// 58548 jmp     short loc_2D549 ;~ 1E67:08C9
loc_2d51c:
	// 8132 
cs=0x1e67;eip=0x0008cc; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 58553 mov     bx, word ptr [bp+arg_2] ;~ 1E67:08CC
cs=0x1e67;eip=0x0008cf; 	T(CMP(*(dw*)(raddr(ds,bx+4)), 0x891E));	// 58554 cmp     word ptr [bx+4], 891Eh ;~ 1E67:08CF
cs=0x1e67;eip=0x0008d4; 	J(JZ(loc_2d52d));	// 58555 jz      short loc_2D52D ;~ 1E67:08D4
cs=0x1e67;eip=0x0008d6; 	T(CMP(*(dw*)(raddr(ds,bx+4)), 0x0AA62));	// 58556 cmp     word ptr [bx+4], 0AA62h ;~ 1E67:08D6
cs=0x1e67;eip=0x0008db; 	J(JNZ(loc_2d549));	// 58557 jnz     short loc_2D549 ;~ 1E67:08DB
loc_2d52d:
	// 8133 
cs=0x1e67;eip=0x0008dd; 	T(MOV(al, *(raddr(ds,bx+7))));	// 58560 mov     al, [bx+7] ;~ 1E67:08DD
cs=0x1e67;eip=0x0008e0; 	T(CBW);	// 58561 cbw ;~ 1E67:08E0
cs=0x1e67;eip=0x0008e1; 	X(PUSH(ax));	// 58562 push    ax              ; int ;~ 1E67:08E1
cs=0x1e67;eip=0x0008e2; 	J(CALLF(_isatty,0));	// 58563 call    _isatty ;~ 1E67:08E2
cs=0x1e67;eip=0x0008e7; 	T(ADD(sp, 2));	// 58564 add     sp, 2 ;~ 1E67:08E7
cs=0x1e67;eip=0x0008ea; 	T(OR(ax, ax));	// 58565 or      ax, ax ;~ 1E67:08EA
cs=0x1e67;eip=0x0008ec; 	J(JZ(loc_2d549));	// 58566 jz      short loc_2D549 ;~ 1E67:08EC
cs=0x1e67;eip=0x0008ee; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 58567 push    word ptr [bp+arg_2] ; FILE * ;~ 1E67:08EE
cs=0x1e67;eip=0x0008f1; 	J(CALLF(_fflush,0));	// 58568 call    _fflush ;~ 1E67:08F1
cs=0x1e67;eip=0x0008f6; 	T(ADD(sp, 2));	// 58569 add     sp, 2 ;~ 1E67:08F6
loc_2d549:
	// 8134 
cs=0x1e67;eip=0x0008f9; 	X(POP(si));	// 58573 pop     si ;~ 1E67:08F9
cs=0x1e67;eip=0x0008fa; 	T(MOV(sp, bp));	// 58574 mov     sp, bp ;~ 1E67:08FA
cs=0x1e67;eip=0x0008fc; 	X(POP(bp));	// 58575 pop     bp ;~ 1E67:08FC
cs=0x1e67;eip=0x0008fd; 	J(RETF(0));	// 58576 retf ;~ 1E67:08FD

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__ftbuf: 	goto __ftbuf;
        case m2c::kloc_2d4cb: 	goto loc_2d4cb;
        case m2c::kloc_2d51c: 	goto loc_2d51c;
        case m2c::kloc_2d52d: 	goto loc_2d52d;
        case m2c::kloc_2d549: 	goto loc_2d549;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _fflush(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _fflush:
    _begin:
#undef var_4
#define var_4 -4
	// 58588 var_4           = word ptr -4 ;~ 1E67:08FE
#undef arg_0
#define arg_0 6
	// 58589 arg_0           = dword ptr  6 ;~ 1E67:08FE
cs=0x1e67;eip=0x0008fe; 	X(PUSH(bp));	// 58591 push    bp ;~ 1E67:08FE
cs=0x1e67;eip=0x0008ff; 	T(MOV(bp, sp));	// 58592 mov     bp, sp ;~ 1E67:08FF
cs=0x1e67;eip=0x000901; 	T(SUB(sp, 4));	// 58593 sub     sp, 4 ;~ 1E67:0901
cs=0x1e67;eip=0x000904; 	X(PUSH(di));	// 58594 push    di              ; unsigned int ;~ 1E67:0904
cs=0x1e67;eip=0x000905; 	X(PUSH(si));	// 58595 push    si ;~ 1E67:0905
cs=0x1e67;eip=0x000906; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 58596 mov     si, word ptr [bp+arg_0] ;~ 1E67:0906
cs=0x1e67;eip=0x000909; 	T(SUB(di, di));	// 58597 sub     di, di ;~ 1E67:0909
cs=0x1e67;eip=0x00090b; 	T(MOV(al, *(raddr(ds,si+6))));	// 58598 mov     al, [si+6] ;~ 1E67:090B
cs=0x1e67;eip=0x00090e; 	T(AND(al, 3));	// 58599 and     al, 3 ;~ 1E67:090E
cs=0x1e67;eip=0x000910; 	T(CMP(al, 2));	// 58600 cmp     al, 2 ;~ 1E67:0910
cs=0x1e67;eip=0x000912; 	J(JNZ(loc_2d5ac));	// 58601 jnz     short loc_2D5AC ;~ 1E67:0912
cs=0x1e67;eip=0x000914; 	T(TEST(*(raddr(ds,si+6)), 8));	// 58602 test    byte ptr [si+6], 8 ;~ 1E67:0914
cs=0x1e67;eip=0x000918; 	J(JNZ(loc_2d583));	// 58603 jnz     short loc_2D583 ;~ 1E67:0918
cs=0x1e67;eip=0x00091a; 	T(MOV(bx, si));	// 58604 mov     bx, si ;~ 1E67:091A
cs=0x1e67;eip=0x00091c; 	T(SUB(bx, 0x36D0));	// 58605 sub     bx, 36D0h ;~ 1E67:091C
cs=0x1e67;eip=0x000920; 	T(MOV(cl, 3));	// 58606 mov     cl, 3 ;~ 1E67:0920
cs=0x1e67;eip=0x000922; 	T(SAR(bx, cl));	// 58607 sar     bx, cl ;~ 1E67:0922
cs=0x1e67;eip=0x000924; 	T(MOV(ax, bx));	// 58608 mov     ax, bx ;~ 1E67:0924
cs=0x1e67;eip=0x000926; 	T(SHL(bx, 1));	// 58609 shl     bx, 1 ;~ 1E67:0926
cs=0x1e67;eip=0x000928; 	T(ADD(bx, ax));	// 58610 add     bx, ax ;~ 1E67:0928
cs=0x1e67;eip=0x00092a; 	T(SHL(bx, 1));	// 58611 shl     bx, 1 ;~ 1E67:092A
cs=0x1e67;eip=0x00092c; 	T(TEST(*(raddr(ds,bx+0x3770)), 1));	// 58612 test    byte ptr [bx+3770h], 1 ;~ 1E67:092C
cs=0x1e67;eip=0x000931; 	J(JZ(loc_2d5ac));	// 58613 jz      short loc_2D5AC ;~ 1E67:0931
loc_2d583:
	// 8135 
cs=0x1e67;eip=0x000933; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 58616 mov     ax, [si] ;~ 1E67:0933
cs=0x1e67;eip=0x000935; 	T(SUB(ax, *(dw*)(raddr(ds,si+4))));	// 58617 sub     ax, [si+4] ;~ 1E67:0935
cs=0x1e67;eip=0x000938; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 58618 mov     [bp+var_4], ax ;~ 1E67:0938
cs=0x1e67;eip=0x00093b; 	T(OR(ax, ax));	// 58619 or      ax, ax ;~ 1E67:093B
cs=0x1e67;eip=0x00093d; 	J(JLE(loc_2d5ac));	// 58620 jle     short loc_2D5AC ;~ 1E67:093D
cs=0x1e67;eip=0x00093f; 	X(PUSH(ax));	// 58621 push    ax              ; void * ;~ 1E67:093F
cs=0x1e67;eip=0x000940; 	X(PUSH(*(dw*)(raddr(ds,si+4))));	// 58622 push    word ptr [si+4] ; void * ;~ 1E67:0940
cs=0x1e67;eip=0x000943; 	T(MOV(al, *(raddr(ds,si+7))));	// 58623 mov     al, [si+7] ;~ 1E67:0943
cs=0x1e67;eip=0x000946; 	T(CBW);	// 58624 cbw ;~ 1E67:0946
cs=0x1e67;eip=0x000947; 	X(PUSH(ax));	// 58625 push    ax              ; int ;~ 1E67:0947
cs=0x1e67;eip=0x000948; 	J(CALLF(_write,0));	// 58626 call    _write ;~ 1E67:0948
cs=0x1e67;eip=0x00094d; 	T(ADD(sp, 6));	// 58627 add     sp, 6 ;~ 1E67:094D
cs=0x1e67;eip=0x000950; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4))));	// 58628 cmp     ax, [bp+var_4] ;~ 1E67:0950
cs=0x1e67;eip=0x000953; 	J(JZ(loc_2d5ac));	// 58629 jz      short loc_2D5AC ;~ 1E67:0953
cs=0x1e67;eip=0x000955; 	X(OR(*(raddr(ds,si+6)), 0x20));	// 58630 or      byte ptr [si+6], 20h ;~ 1E67:0955
cs=0x1e67;eip=0x000959; 	T(MOV(di, 0x0FFFF));	// 58631 mov     di, 0FFFFh ;~ 1E67:0959
loc_2d5ac:
	// 8136 
cs=0x1e67;eip=0x00095c; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 58635 mov     ax, [si+4] ;~ 1E67:095C
cs=0x1e67;eip=0x00095f; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 58636 mov     [si], ax ;~ 1E67:095F
cs=0x1e67;eip=0x000961; 	X(MOV(*(dw*)(raddr(ds,si+2)), 0));	// 58637 mov     word ptr [si+2], 0 ;~ 1E67:0961
cs=0x1e67;eip=0x000966; 	T(MOV(ax, di));	// 58638 mov     ax, di ;~ 1E67:0966
cs=0x1e67;eip=0x000968; 	X(POP(si));	// 58639 pop     si ;~ 1E67:0968
cs=0x1e67;eip=0x000969; 	X(POP(di));	// 58640 pop     di ;~ 1E67:0969
cs=0x1e67;eip=0x00096a; 	T(MOV(sp, bp));	// 58641 mov     sp, bp ;~ 1E67:096A
cs=0x1e67;eip=0x00096c; 	X(POP(bp));	// 58642 pop     bp ;~ 1E67:096C
cs=0x1e67;eip=0x00096d; 	J(RETF(0));	// 58643 retf ;~ 1E67:096D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_fflush: 	goto _fflush;
        case m2c::kloc_2d583: 	goto loc_2d583;
        case m2c::kloc_2d5ac: 	goto loc_2d5ac;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __output(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __output:
    _begin:
#undef var_164
#define var_164 -0x164
	// 58654 var_164         = word ptr -164h ;~ 1E67:096E
#undef var_162
#define var_162 -0x162
	// 58655 var_162         = byte ptr -162h ;~ 1E67:096E
#undef var_4
#define var_4 -4
	// 58656 var_4           = word ptr -4 ;~ 1E67:096E
#undef arg_0
#define arg_0 6
	// 58657 arg_0           = word ptr  6 ;~ 1E67:096E
#undef arg_2
#define arg_2 8
	// 58658 arg_2           = word ptr  8 ;~ 1E67:096E
#undef arg_4
#define arg_4 0x0A
	// 58659 arg_4           = word ptr  0Ah ;~ 1E67:096E
cs=0x1e67;eip=0x00096e; 	X(PUSH(bp));	// 58661 push    bp ;~ 1E67:096E
cs=0x1e67;eip=0x00096f; 	T(MOV(bp, sp));	// 58662 mov     bp, sp ;~ 1E67:096F
cs=0x1e67;eip=0x000971; 	T(MOV(ax, 0x164));	// 58663 mov     ax, 164h ;~ 1E67:0971
cs=0x1e67;eip=0x000974; 	J(CALLF(__chkstk,0));	// 58664 call    __chkstk ;~ 1E67:0974
cs=0x1e67;eip=0x000979; 	X(PUSH(di));	// 58665 push    di ;~ 1E67:0979
cs=0x1e67;eip=0x00097a; 	X(PUSH(si));	// 58666 push    si ;~ 1E67:097A
cs=0x1e67;eip=0x00097b; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 58667 mov     si, [bp+arg_2] ;~ 1E67:097B
cs=0x1e67;eip=0x00097e; 	T(ax = bp+var_162);	// 58668 lea     ax, [bp+var_162] ;~ 1E67:097E
cs=0x1e67;eip=0x000982; 	X(MOV(off_428b6, ax));	// 58669 mov     off_428B6, ax ;~ 1E67:0982
cs=0x1e67;eip=0x000985; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 58670 mov     ax, [bp+arg_4] ;~ 1E67:0985
cs=0x1e67;eip=0x000988; 	X(MOV(word_428a6, ax));	// 58671 mov     word_428A6, ax ;~ 1E67:0988
cs=0x1e67;eip=0x00098b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 58672 mov     ax, [bp+arg_0] ;~ 1E67:098B
cs=0x1e67;eip=0x00098e; 	X(MOV(off_4289a, ax));	// 58673 mov     off_4289A, ax ;~ 1E67:098E
cs=0x1e67;eip=0x000991; 	X(MOV(word_428b0, 0));	// 58674 mov     word_428B0, 0 ;~ 1E67:0991
cs=0x1e67;eip=0x000997; 	X(MOV(word_428ae, 0));	// 58675 mov     word_428AE, 0 ;~ 1E67:0997
cs=0x1e67;eip=0x00099d; 	J(JMP(loc_2d877));	// 58676 jmp     loc_2D877 ;~ 1E67:099D
loc_2d5f0:
	// 8137 
cs=0x1e67;eip=0x0009a0; 	T(CMP(*(raddr(ds,si)), 0x25));	// 58680 cmp     byte ptr [si], 25h ; '%' ;~ 1E67:09A0
cs=0x1e67;eip=0x0009a3; 	J(JZ(loc_2d5f8));	// 58681 jz      short loc_2D5F8 ;~ 1E67:09A3
cs=0x1e67;eip=0x0009a5; 	J(JMP(loc_2d85a));	// 58682 jmp     loc_2D85A ;~ 1E67:09A5
loc_2d5f8:
	// 8138 
cs=0x1e67;eip=0x0009a8; 	X(MOV(word_428b2, 1));	// 58686 mov     word_428B2, 1 ;~ 1E67:09A8
cs=0x1e67;eip=0x0009ae; 	T(SUB(ax, ax));	// 58687 sub     ax, ax ;~ 1E67:09AE
cs=0x1e67;eip=0x0009b0; 	X(MOV(word_428a2, ax));	// 58688 mov     word_428A2, ax ;~ 1E67:09B0
cs=0x1e67;eip=0x0009b3; 	X(MOV(word_4289e, ax));	// 58689 mov     word_4289E, ax ;~ 1E67:09B3
cs=0x1e67;eip=0x0009b6; 	X(MOV(word_428ac, ax));	// 58690 mov     word_428AC, ax ;~ 1E67:09B6
cs=0x1e67;eip=0x0009b9; 	X(MOV(word_428a0, ax));	// 58691 mov     word_428A0, ax ;~ 1E67:09B9
cs=0x1e67;eip=0x0009bc; 	X(MOV(word_428aa, ax));	// 58692 mov     word_428AA, ax ;~ 1E67:09BC
cs=0x1e67;eip=0x0009bf; 	X(MOV(word_428a8, ax));	// 58693 mov     word_428A8, ax ;~ 1E67:09BF
cs=0x1e67;eip=0x0009c2; 	X(MOV(word_4289c, ax));	// 58694 mov     word_4289C, ax ;~ 1E67:09C2
cs=0x1e67;eip=0x0009c5; 	X(MOV(word_42898, ax));	// 58695 mov     word_42898, ax ;~ 1E67:09C5
cs=0x1e67;eip=0x0009c8; 	X(MOV(word_428a4, ax));	// 58696 mov     word_428A4, ax ;~ 1E67:09C8
cs=0x1e67;eip=0x0009cb; 	X(MOV(word_428bc, 0x20));	// 58697 mov     word_428BC, 20h ; ' ' ;~ 1E67:09CB
cs=0x1e67;eip=0x0009d1; 	T(CMP(*(raddr(ds,si+1)), 0x30));	// 58698 cmp     byte ptr [si+1], 30h ; '0' ;~ 1E67:09D1
cs=0x1e67;eip=0x0009d5; 	J(JNZ(loc_2d663));	// 58699 jnz     short loc_2D663 ;~ 1E67:09D5
cs=0x1e67;eip=0x0009d7; 	T(INC(si));	// 58700 inc     si ;~ 1E67:09D7
cs=0x1e67;eip=0x0009d8; 	X(MOV(word_428bc, 0x30));	// 58701 mov     word_428BC, 30h ; '0' ;~ 1E67:09D8
cs=0x1e67;eip=0x0009de; 	J(JMP(loc_2d663));	// 58702 jmp     short loc_2D663 ;~ 1E67:09DE
loc_2d630:
	// 8139 
cs=0x1e67;eip=0x0009e0; 	T(CMP(*(raddr(ds,si)), 0x2B));	// 58706 cmp     byte ptr [si], 2Bh ; '+' ;~ 1E67:09E0
cs=0x1e67;eip=0x0009e3; 	J(JNZ(loc_2d642));	// 58707 jnz     short loc_2D642 ;~ 1E67:09E3
cs=0x1e67;eip=0x0009e5; 	X(INC(word_428a2));	// 58708 inc     word_428A2 ;~ 1E67:09E5
cs=0x1e67;eip=0x0009e9; 	X(MOV(word_428a8, 0));	// 58709 mov     word_428A8, 0 ;~ 1E67:09E9
cs=0x1e67;eip=0x0009ef; 	J(JMP(loc_2d663));	// 58710 jmp     short loc_2D663 ;~ 1E67:09EF
loc_2d642:
	// 8140 
cs=0x1e67;eip=0x0009f2; 	T(CMP(*(raddr(ds,si)), 0x20));	// 58715 cmp     byte ptr [si], 20h ; ' ' ;~ 1E67:09F2
cs=0x1e67;eip=0x0009f5; 	J(JNZ(loc_2d654));	// 58716 jnz     short loc_2D654 ;~ 1E67:09F5
cs=0x1e67;eip=0x0009f7; 	T(CMP(word_428a2, 0));	// 58717 cmp     word_428A2, 0 ;~ 1E67:09F7
cs=0x1e67;eip=0x0009fc; 	J(JNZ(loc_2d663));	// 58718 jnz     short loc_2D663 ;~ 1E67:09FC
cs=0x1e67;eip=0x0009fe; 	X(INC(word_428a8));	// 58719 inc     word_428A8 ;~ 1E67:09FE
cs=0x1e67;eip=0x000a02; 	J(JMP(loc_2d663));	// 58720 jmp     short loc_2D663 ;~ 1E67:0A02
loc_2d654:
	// 8141 
cs=0x1e67;eip=0x000a04; 	X(INC(word_42898));	// 58724 inc     word_42898 ;~ 1E67:0A04
cs=0x1e67;eip=0x000a08; 	J(JMP(loc_2d663));	// 58725 jmp     short loc_2D663 ;~ 1E67:0A08
loc_2d65a:
	// 8142 
cs=0x1e67;eip=0x000a0a; 	T(CMP(*(raddr(ds,si)), 0x2D));	// 58729 cmp     byte ptr [si], 2Dh ; '-' ;~ 1E67:0A0A
cs=0x1e67;eip=0x000a0d; 	J(JNZ(loc_2d630));	// 58730 jnz     short loc_2D630 ;~ 1E67:0A0D
cs=0x1e67;eip=0x000a0f; 	X(INC(word_428a4));	// 58731 inc     word_428A4 ;~ 1E67:0A0F
loc_2d663:
	// 8143 
cs=0x1e67;eip=0x000a13; 	T(INC(si));	// 58735 inc     si ;~ 1E67:0A13
cs=0x1e67;eip=0x000a14; 	T(MOV(al, *(raddr(ds,si))));	// 58736 mov     al, [si] ;~ 1E67:0A14
cs=0x1e67;eip=0x000a16; 	T(CBW);	// 58737 cbw ;~ 1E67:0A16
cs=0x1e67;eip=0x000a17; 	X(PUSH(ax));	// 58738 push    ax ;~ 1E67:0A17
cs=0x1e67;eip=0x000a18; 	X(PUSH(cs));	// 58739 push    cs ;~ 1E67:0A18
cs=0x1e67;eip=0x000a19; 	J(CALL(flagchar,0));	// 58740 call    near ptr flagchar ;~ 1E67:0A19
cs=0x1e67;eip=0x000a1c; 	T(ADD(sp, 2));	// 58741 add     sp, 2 ;~ 1E67:0A1C
cs=0x1e67;eip=0x000a1f; 	T(OR(ax, ax));	// 58742 or      ax, ax ;~ 1E67:0A1F
cs=0x1e67;eip=0x000a21; 	J(JNZ(loc_2d65a));	// 58743 jnz     short loc_2D65A ;~ 1E67:0A21
cs=0x1e67;eip=0x000a23; 	X(PUSH(si));	// 58744 push    si ;~ 1E67:0A23
cs=0x1e67;eip=0x000a24; 	T(MOV(ax, offset(dseg,word_428b8)));	// 58745 mov     ax, offset word_428B8 ;~ 1E67:0A24
cs=0x1e67;eip=0x000a27; 	X(PUSH(ax));	// 58746 push    ax ;~ 1E67:0A27
cs=0x1e67;eip=0x000a28; 	X(PUSH(cs));	// 58747 push    cs ;~ 1E67:0A28
cs=0x1e67;eip=0x000a29; 	J(CALL(getnum,0));	// 58748 call    near ptr getnum ;~ 1E67:0A29
cs=0x1e67;eip=0x000a2c; 	T(ADD(sp, 4));	// 58749 add     sp, 4 ;~ 1E67:0A2C
cs=0x1e67;eip=0x000a2f; 	T(MOV(si, ax));	// 58750 mov     si, ax ;~ 1E67:0A2F
cs=0x1e67;eip=0x000a31; 	T(CMP(word_428b8, 0));	// 58751 cmp     word_428B8, 0 ;~ 1E67:0A31
cs=0x1e67;eip=0x000a36; 	J(JGE(loc_2d694));	// 58752 jge     short loc_2D694 ;~ 1E67:0A36
cs=0x1e67;eip=0x000a38; 	X(INC(word_428a4));	// 58753 inc     word_428A4 ;~ 1E67:0A38
cs=0x1e67;eip=0x000a3c; 	T(MOV(ax, word_428b8));	// 58754 mov     ax, word_428B8 ;~ 1E67:0A3C
cs=0x1e67;eip=0x000a3f; 	T(NEG(ax));	// 58755 neg     ax ;~ 1E67:0A3F
cs=0x1e67;eip=0x000a41; 	X(MOV(word_428b8, ax));	// 58756 mov     word_428B8, ax ;~ 1E67:0A41
loc_2d694:
	// 8144 
cs=0x1e67;eip=0x000a44; 	T(CMP(*(raddr(ds,si)), 0x2E));	// 58759 cmp     byte ptr [si], 2Eh ; '.' ;~ 1E67:0A44
cs=0x1e67;eip=0x000a47; 	J(JNZ(loc_2d6bd));	// 58760 jnz     short loc_2D6BD ;~ 1E67:0A47
cs=0x1e67;eip=0x000a49; 	X(INC(word_428aa));	// 58761 inc     word_428AA ;~ 1E67:0A49
cs=0x1e67;eip=0x000a4d; 	T(INC(si));	// 58762 inc     si ;~ 1E67:0A4D
cs=0x1e67;eip=0x000a4e; 	X(PUSH(si));	// 58763 push    si ;~ 1E67:0A4E
cs=0x1e67;eip=0x000a4f; 	T(MOV(ax, offset(dseg,word_428b2)));	// 58764 mov     ax, offset word_428B2 ;~ 1E67:0A4F
cs=0x1e67;eip=0x000a52; 	X(PUSH(ax));	// 58765 push    ax ;~ 1E67:0A52
cs=0x1e67;eip=0x000a53; 	X(PUSH(cs));	// 58766 push    cs ;~ 1E67:0A53
cs=0x1e67;eip=0x000a54; 	J(CALL(getnum,0));	// 58767 call    near ptr getnum ;~ 1E67:0A54
cs=0x1e67;eip=0x000a57; 	T(ADD(sp, 4));	// 58768 add     sp, 4 ;~ 1E67:0A57
cs=0x1e67;eip=0x000a5a; 	T(MOV(si, ax));	// 58769 mov     si, ax ;~ 1E67:0A5A
cs=0x1e67;eip=0x000a5c; 	T(CMP(word_428b2, 0));	// 58770 cmp     word_428B2, 0 ;~ 1E67:0A5C
cs=0x1e67;eip=0x000a61; 	J(JGE(loc_2d6bd));	// 58771 jge     short loc_2D6BD ;~ 1E67:0A61
cs=0x1e67;eip=0x000a63; 	X(MOV(word_428b2, 1));	// 58772 mov     word_428B2, 1 ;~ 1E67:0A63
cs=0x1e67;eip=0x000a69; 	X(DEC(word_428aa));	// 58773 dec     word_428AA ;~ 1E67:0A69
loc_2d6bd:
	// 8145 
cs=0x1e67;eip=0x000a6d; 	T(MOV(al, *(raddr(ds,si))));	// 58777 mov     al, [si] ;~ 1E67:0A6D
cs=0x1e67;eip=0x000a6f; 	T(CBW);	// 58778 cbw ;~ 1E67:0A6F
cs=0x1e67;eip=0x000a70; 	T(CMP(ax, 0x46));	// 58779 cmp     ax, 46h ; 'F' ;~ 1E67:0A70
cs=0x1e67;eip=0x000a73; 	J(JZ(loc_2d6f8));	// 58780 jz      short loc_2D6F8 ;~ 1E67:0A73
cs=0x1e67;eip=0x000a75; 	T(CMP(ax, 0x4E));	// 58781 cmp     ax, 4Eh ; 'N' ;~ 1E67:0A75
cs=0x1e67;eip=0x000a78; 	J(JZ(loc_2d700));	// 58782 jz      short loc_2D700 ;~ 1E67:0A78
cs=0x1e67;eip=0x000a7a; 	T(CMP(ax, 0x68));	// 58783 cmp     ax, 68h ; 'h' ;~ 1E67:0A7A
cs=0x1e67;eip=0x000a7d; 	J(JZ(loc_2d6f0));	// 58784 jz      short loc_2D6F0 ;~ 1E67:0A7D
cs=0x1e67;eip=0x000a7f; 	T(CMP(ax, 0x6C));	// 58785 cmp     ax, 6Ch ; 'l' ;~ 1E67:0A7F
cs=0x1e67;eip=0x000a82; 	J(JNZ(loc_2d6da));	// 58786 jnz     short loc_2D6DA ;~ 1E67:0A82
cs=0x1e67;eip=0x000a84; 	X(MOV(word_428a0, 2));	// 58787 mov     word_428A0, 2 ;~ 1E67:0A84
loc_2d6da:
	// 8146 
cs=0x1e67;eip=0x000a8a; 	T(CMP(word_428a0, 0));	// 58791 cmp     word_428A0, 0 ;~ 1E67:0A8A
cs=0x1e67;eip=0x000a8f; 	J(JNZ(loc_2d6e6));	// 58792 jnz     short loc_2D6E6 ;~ 1E67:0A8F
cs=0x1e67;eip=0x000a91; 	T(CMP(*(raddr(ds,si)), 0x4C));	// 58793 cmp     byte ptr [si], 4Ch ; 'L' ;~ 1E67:0A91
cs=0x1e67;eip=0x000a94; 	J(JNZ(loc_2d6e7));	// 58794 jnz     short loc_2D6E7 ;~ 1E67:0A94
loc_2d6e6:
	// 8147 
cs=0x1e67;eip=0x000a96; 	T(INC(si));	// 58797 inc     si ;~ 1E67:0A96
loc_2d6e7:
	// 8148 
cs=0x1e67;eip=0x000a97; 	T(CMP(*(raddr(ds,si)), 0));	// 58800 cmp     byte ptr [si], 0 ;~ 1E67:0A97
cs=0x1e67;eip=0x000a9a; 	J(JNZ(loc_2d708));	// 58801 jnz     short loc_2D708 ;~ 1E67:0A9A
cs=0x1e67;eip=0x000a9c; 	J(JMP(loc_2d87f));	// 58802 jmp     loc_2D87F ;~ 1E67:0A9C
loc_2d6f0:
	// 8149 
cs=0x1e67;eip=0x000aa0; 	X(MOV(word_428a0, 1));	// 58807 mov     word_428A0, 1 ;~ 1E67:0AA0
cs=0x1e67;eip=0x000aa6; 	J(JMP(loc_2d6da));	// 58808 jmp     short loc_2D6DA ;~ 1E67:0AA6
loc_2d6f8:
	// 8150 
cs=0x1e67;eip=0x000aa8; 	X(MOV(word_428a0, 0x10));	// 58812 mov     word_428A0, 10h ;~ 1E67:0AA8
cs=0x1e67;eip=0x000aae; 	J(JMP(loc_2d6da));	// 58813 jmp     short loc_2D6DA ;~ 1E67:0AAE
loc_2d700:
	// 8151 
cs=0x1e67;eip=0x000ab0; 	X(MOV(word_428a0, 8));	// 58817 mov     word_428A0, 8 ;~ 1E67:0AB0
cs=0x1e67;eip=0x000ab6; 	J(JMP(loc_2d6da));	// 58818 jmp     short loc_2D6DA ;~ 1E67:0AB6
loc_2d708:
	// 8152 
cs=0x1e67;eip=0x000ab8; 	T(MOV(al, *(raddr(ds,si))));	// 58822 mov     al, [si] ;~ 1E67:0AB8
cs=0x1e67;eip=0x000aba; 	T(CBW);	// 58823 cbw ;~ 1E67:0ABA
cs=0x1e67;eip=0x000abb; 	X(MOV(*(dw*)(raddr(ss,bp+var_164)), ax));	// 58824 mov     [bp+var_164], ax ;~ 1E67:0ABB
cs=0x1e67;eip=0x000abf; 	T(CMP(ax, 0x45));	// 58825 cmp     ax, 45h ; 'E' ;~ 1E67:0ABF
cs=0x1e67;eip=0x000ac2; 	J(JZ(loc_2d71e));	// 58826 jz      short loc_2D71E ;~ 1E67:0AC2
cs=0x1e67;eip=0x000ac4; 	T(CMP(ax, 0x47));	// 58827 cmp     ax, 47h ; 'G' ;~ 1E67:0AC4
cs=0x1e67;eip=0x000ac7; 	J(JZ(loc_2d71e));	// 58828 jz      short loc_2D71E ;~ 1E67:0AC7
cs=0x1e67;eip=0x000ac9; 	T(CMP(ax, 0x58));	// 58829 cmp     ax, 58h ; 'X' ;~ 1E67:0AC9
cs=0x1e67;eip=0x000acc; 	J(JNZ(loc_2d727));	// 58830 jnz     short loc_2D727 ;~ 1E67:0ACC
loc_2d71e:
	// 8153 
cs=0x1e67;eip=0x000ace; 	X(INC(word_4289e));	// 58834 inc     word_4289E ;~ 1E67:0ACE
cs=0x1e67;eip=0x000ad2; 	X(ADD(*(dw*)(raddr(ss,bp+var_164)), 0x20));	// 58835 add     [bp+var_164], 20h ; ' ' ;~ 1E67:0AD2
loc_2d727:
	// 8154 
cs=0x1e67;eip=0x000ad7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_164))));	// 58838 mov     ax, [bp+var_164] ;~ 1E67:0AD7
cs=0x1e67;eip=0x000adb; 	T(SUB(ax, 0x63));	// 58839 sub     ax, 63h ; 'c'   ; switch 22 cases ;~ 1E67:0ADB
cs=0x1e67;eip=0x000ade; 	T(CMP(ax, 0x15));	// 58840 cmp     ax, 15h ;~ 1E67:0ADE
cs=0x1e67;eip=0x000ae1; 	J(JBE(loc_2d736));	// 58841 jbe     short loc_2D736 ;~ 1E67:0AE1
cs=0x1e67;eip=0x000ae3; 	J(JMP(def_2d739));	// 58842 jmp     def_2D739       ; jumptable 0002D739 default case, cases 104,106-109,113,114,116,118,119 ;~ 1E67:0AE3
loc_2d736:
	// 8155 
cs=0x1e67;eip=0x000ae6; 	T(ADD(ax, ax));	// 58846 add     ax, ax ;~ 1E67:0AE6
cs=0x1e67;eip=0x000ae8; 	T(XCHG(ax, bx));	// 58847 xchg    ax, bx ;~ 1E67:0AE8
	cs=seg_offset(seg010);
cs=0x1e67;eip=0x000ae9; __disp=*(dw*)(((db*)&jpt_2d739)+bx);
	J(return __dispatch_call(__disp, _state););	// 58848 jmp     cs:jpt_2D739[bx] ; switch jump ;~ 1E67:0AE9
loc_2d73e:
	// 8156 
cs=0x1e67;eip=0x000aee; 	T(MOV(bx, word_428a6));	// 58853 mov     bx, word_428A6  ; jumptable 0002D739 case 110 ;~ 1E67:0AEE
cs=0x1e67;eip=0x000af2; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 58854 mov     bx, [bx] ;~ 1E67:0AF2
cs=0x1e67;eip=0x000af4; 	T(MOV(ax, word_428ae));	// 58855 mov     ax, word_428AE ;~ 1E67:0AF4
cs=0x1e67;eip=0x000af7; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 58856 mov     [bx], ax ;~ 1E67:0AF7
loc_2d749:
	// 8157 
cs=0x1e67;eip=0x000af9; 	X(ADD(word_428a6, 2));	// 58859 add     word_428A6, 2 ;~ 1E67:0AF9
cs=0x1e67;eip=0x000afe; 	J(JMP(loc_2d8c2));	// 58860 jmp     loc_2D8C2 ;~ 1E67:0AFE
loc_2d752:
	// 8158 
cs=0x1e67;eip=0x000b02; 	X(INC(word_428ac));	// 58866 inc     word_428AC      ; jumptable 0002D739 case 117 ;~ 1E67:0B02
loc_2d756:
	// 8159 
cs=0x1e67;eip=0x000b06; 	X(MOV(word_42898, 0));	// 58870 mov     word_42898, 0   ; jumptable 0002D739 cases 100,105 ;~ 1E67:0B06
cs=0x1e67;eip=0x000b0c; 	T(MOV(ax, 0x0A));	// 58871 mov     ax, 0Ah ;~ 1E67:0B0C
loc_2d75f:
	// 8160 
cs=0x1e67;eip=0x000b0f; 	X(PUSH(ax));	// 58875 push    ax ;~ 1E67:0B0F
cs=0x1e67;eip=0x000b10; 	X(PUSH(cs));	// 58876 push    cs ;~ 1E67:0B10
cs=0x1e67;eip=0x000b11; 	J(CALL(iprint,0));	// 58877 call    near ptr iprint ;~ 1E67:0B11
loc_2d764:
	// 8161 
cs=0x1e67;eip=0x000b14; 	T(ADD(sp, 2));	// 58881 add     sp, 2 ;~ 1E67:0B14
cs=0x1e67;eip=0x000b17; 	J(JMP(loc_2d8c2));	// 58882 jmp     loc_2D8C2 ;~ 1E67:0B17
loc_2d76a:
	// 8162 
cs=0x1e67;eip=0x000b1a; 	T(MOV(ax, 8));	// 58887 mov     ax, 8           ; jumptable 0002D739 case 111 ;~ 1E67:0B1A
cs=0x1e67;eip=0x000b1d; 	J(JMP(loc_2d75f));	// 58888 jmp     short loc_2D75F ;~ 1E67:0B1D
loc_2d770:
	// 8163 
cs=0x1e67;eip=0x000b20; 	X(INC(word_4289c));	// 58894 inc     word_4289C      ; jumptable 0002D739 case 112 ;~ 1E67:0B20
cs=0x1e67;eip=0x000b24; 	X(INC(word_4289e));	// 58895 inc     word_4289E ;~ 1E67:0B24
cs=0x1e67;eip=0x000b28; 	T(CMP(word_428aa, 0));	// 58896 cmp     word_428AA, 0 ;~ 1E67:0B28
cs=0x1e67;eip=0x000b2d; 	J(JNZ(loc_2d788));	// 58897 jnz     short loc_2D788 ;~ 1E67:0B2D
cs=0x1e67;eip=0x000b2f; 	X(MOV(word_428b4, 1));	// 58898 mov     word_428B4, 1 ;~ 1E67:0B2F
cs=0x1e67;eip=0x000b35; 	J(JMP(loc_2d78e));	// 58899 jmp     short loc_2D78E ;~ 1E67:0B35
loc_2d788:
	// 8164 
cs=0x1e67;eip=0x000b38; 	X(MOV(word_428b4, 0));	// 58904 mov     word_428B4, 0 ;~ 1E67:0B38
loc_2d78e:
	// 8165 
cs=0x1e67;eip=0x000b3e; 	X(INC(word_428aa));	// 58907 inc     word_428AA ;~ 1E67:0B3E
cs=0x1e67;eip=0x000b42; 	X(MOV(word_428b2, 4));	// 58908 mov     word_428B2, 4 ;~ 1E67:0B42
cs=0x1e67;eip=0x000b48; 	T(CMP(word_428a0, 8));	// 58909 cmp     word_428A0, 8 ;~ 1E67:0B48
cs=0x1e67;eip=0x000b4d; 	J(JNZ(loc_2d7a2));	// 58910 jnz     short loc_2D7A2 ;~ 1E67:0B4D
cs=0x1e67;eip=0x000b4f; 	J(JMP(loc_2d82e));	// 58911 jmp     loc_2D82E       ; jumptable 0002D739 case 120 ;~ 1E67:0B4F
loc_2d7a2:
	// 8166 
cs=0x1e67;eip=0x000b52; 	T(SUB(ax, ax));	// 58915 sub     ax, ax ;~ 1E67:0B52
cs=0x1e67;eip=0x000b54; 	X(MOV(word_428a0, ax));	// 58916 mov     word_428A0, ax ;~ 1E67:0B54
cs=0x1e67;eip=0x000b57; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 58917 mov     [bp+var_4], ax ;~ 1E67:0B57
cs=0x1e67;eip=0x000b5a; 	T(CMP(word_428b8, ax));	// 58918 cmp     word_428B8, ax ;~ 1E67:0B5A
cs=0x1e67;eip=0x000b5e; 	J(JZ(loc_2d7d7));	// 58919 jz      short loc_2D7D7 ;~ 1E67:0B5E
cs=0x1e67;eip=0x000b60; 	T(MOV(ax, word_428b8));	// 58920 mov     ax, word_428B8 ;~ 1E67:0B60
cs=0x1e67;eip=0x000b63; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 58921 mov     [bp+var_4], ax ;~ 1E67:0B63
cs=0x1e67;eip=0x000b66; 	T(CMP(word_428a4, 0));	// 58922 cmp     word_428A4, 0 ;~ 1E67:0B66
cs=0x1e67;eip=0x000b6b; 	J(JZ(loc_2d7c6));	// 58923 jz      short loc_2D7C6 ;~ 1E67:0B6B
cs=0x1e67;eip=0x000b6d; 	X(MOV(word_428b8, 0));	// 58924 mov     word_428B8, 0 ;~ 1E67:0B6D
cs=0x1e67;eip=0x000b73; 	J(JMP(loc_2d7d7));	// 58925 jmp     short loc_2D7D7 ;~ 1E67:0B73
loc_2d7c6:
	// 8167 
cs=0x1e67;eip=0x000b76; 	X(SUB(word_428b8, 5));	// 58930 sub     word_428B8, 5 ;~ 1E67:0B76
cs=0x1e67;eip=0x000b7b; 	T(MOV(ax, word_428b8));	// 58931 mov     ax, word_428B8 ;~ 1E67:0B7B
cs=0x1e67;eip=0x000b7e; 	T(OR(ax, ax));	// 58932 or      ax, ax ;~ 1E67:0B7E
cs=0x1e67;eip=0x000b80; 	J(JGE(loc_2d7d4));	// 58933 jge     short loc_2D7D4 ;~ 1E67:0B80
cs=0x1e67;eip=0x000b82; 	T(SUB(ax, ax));	// 58934 sub     ax, ax ;~ 1E67:0B82
loc_2d7d4:
	// 8168 
cs=0x1e67;eip=0x000b84; 	X(MOV(word_428b8, ax));	// 58937 mov     word_428B8, ax ;~ 1E67:0B84
loc_2d7d7:
	// 8169 
cs=0x1e67;eip=0x000b87; 	X(ADD(word_428a6, 2));	// 58941 add     word_428A6, 2 ;~ 1E67:0B87
cs=0x1e67;eip=0x000b8c; 	T(MOV(ax, 0x10));	// 58942 mov     ax, 10h ;~ 1E67:0B8C
cs=0x1e67;eip=0x000b8f; 	X(PUSH(ax));	// 58943 push    ax ;~ 1E67:0B8F
cs=0x1e67;eip=0x000b90; 	X(PUSH(cs));	// 58944 push    cs ;~ 1E67:0B90
cs=0x1e67;eip=0x000b91; 	J(CALL(iprint,0));	// 58945 call    near ptr iprint ;~ 1E67:0B91
cs=0x1e67;eip=0x000b94; 	T(ADD(sp, 2));	// 58946 add     sp, 2 ;~ 1E67:0B94
cs=0x1e67;eip=0x000b97; 	T(MOV(ax, 0x3A));	// 58947 mov     ax, 3Ah ; ':' ;~ 1E67:0B97
cs=0x1e67;eip=0x000b9a; 	X(PUSH(ax));	// 58948 push    ax ;~ 1E67:0B9A
cs=0x1e67;eip=0x000b9b; 	X(PUSH(cs));	// 58949 push    cs ;~ 1E67:0B9B
cs=0x1e67;eip=0x000b9c; 	J(CALL(_outc,0));	// 58950 call    near ptr _outc ;~ 1E67:0B9C
cs=0x1e67;eip=0x000b9f; 	T(ADD(sp, 2));	// 58951 add     sp, 2 ;~ 1E67:0B9F
cs=0x1e67;eip=0x000ba2; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 58952 cmp     [bp+var_4], 0 ;~ 1E67:0BA2
cs=0x1e67;eip=0x000ba6; 	J(JZ(loc_2d81a));	// 58953 jz      short loc_2D81A ;~ 1E67:0BA6
cs=0x1e67;eip=0x000ba8; 	T(CMP(word_428a4, 0));	// 58954 cmp     word_428A4, 0 ;~ 1E67:0BA8
cs=0x1e67;eip=0x000bad; 	J(JZ(loc_2d814));	// 58955 jz      short loc_2D814 ;~ 1E67:0BAD
cs=0x1e67;eip=0x000baf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 58956 mov     ax, [bp+var_4] ;~ 1E67:0BAF
cs=0x1e67;eip=0x000bb2; 	T(SUB(ax, 5));	// 58957 sub     ax, 5 ;~ 1E67:0BB2
cs=0x1e67;eip=0x000bb5; 	X(MOV(word_428b8, ax));	// 58958 mov     word_428B8, ax ;~ 1E67:0BB5
cs=0x1e67;eip=0x000bb8; 	T(OR(ax, ax));	// 58959 or      ax, ax ;~ 1E67:0BB8
cs=0x1e67;eip=0x000bba; 	J(JGE(loc_2d80e));	// 58960 jge     short loc_2D80E ;~ 1E67:0BBA
cs=0x1e67;eip=0x000bbc; 	T(SUB(ax, ax));	// 58961 sub     ax, ax ;~ 1E67:0BBC
loc_2d80e:
	// 8170 
cs=0x1e67;eip=0x000bbe; 	X(MOV(word_428b8, ax));	// 58964 mov     word_428B8, ax ;~ 1E67:0BBE
cs=0x1e67;eip=0x000bc1; 	J(JMP(loc_2d81a));	// 58965 jmp     short loc_2D81A ;~ 1E67:0BC1
loc_2d814:
	// 8171 
cs=0x1e67;eip=0x000bc4; 	X(MOV(word_428b8, 0));	// 58970 mov     word_428B8, 0 ;~ 1E67:0BC4
loc_2d81a:
	// 8172 
cs=0x1e67;eip=0x000bca; 	X(SUB(word_428a6, 4));	// 58974 sub     word_428A6, 4 ;~ 1E67:0BCA
cs=0x1e67;eip=0x000bcf; 	T(MOV(ax, 0x10));	// 58975 mov     ax, 10h ;~ 1E67:0BCF
cs=0x1e67;eip=0x000bd2; 	X(PUSH(ax));	// 58976 push    ax ;~ 1E67:0BD2
cs=0x1e67;eip=0x000bd3; 	X(PUSH(cs));	// 58977 push    cs ;~ 1E67:0BD3
cs=0x1e67;eip=0x000bd4; 	J(CALL(iprint,0));	// 58978 call    near ptr iprint ;~ 1E67:0BD4
cs=0x1e67;eip=0x000bd7; 	T(ADD(sp, 2));	// 58979 add     sp, 2 ;~ 1E67:0BD7
cs=0x1e67;eip=0x000bda; 	J(JMP(loc_2d749));	// 58980 jmp     loc_2D749 ;~ 1E67:0BDA
loc_2d82e:
	// 8173 
cs=0x1e67;eip=0x000bde; 	T(MOV(ax, 0x10));	// 58987 mov     ax, 10h         ; jumptable 0002D739 case 120 ;~ 1E67:0BDE
cs=0x1e67;eip=0x000be1; 	J(JMP(loc_2d75f));	// 58988 jmp     loc_2D75F ;~ 1E67:0BE1
loc_2d834:
	// 8174 
cs=0x1e67;eip=0x000be4; 	T(SUB(ax, ax));	// 58993 sub     ax, ax          ; jumptable 0002D739 case 115 ;~ 1E67:0BE4
loc_2d836:
	// 8175 
cs=0x1e67;eip=0x000be6; 	X(PUSH(ax));	// 58996 push    ax ;~ 1E67:0BE6
cs=0x1e67;eip=0x000be7; 	X(PUSH(cs));	// 58997 push    cs ;~ 1E67:0BE7
cs=0x1e67;eip=0x000be8; 	J(CALL(sprint,0));	// 58998 call    near ptr sprint ;~ 1E67:0BE8
cs=0x1e67;eip=0x000beb; 	J(JMP(loc_2d764));	// 58999 jmp     loc_2D764 ;~ 1E67:0BEB
loc_2d83e:
	// 8176 
cs=0x1e67;eip=0x000bee; 	T(MOV(ax, 1));	// 59004 mov     ax, 1           ; jumptable 0002D739 case 99 ;~ 1E67:0BEE
cs=0x1e67;eip=0x000bf1; 	J(JMP(loc_2d836));	// 59005 jmp     short loc_2D836 ;~ 1E67:0BF1
loc_2d844:
	// 8177 
cs=0x1e67;eip=0x000bf4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_164))));	// 59011 push    [bp+var_164]    ; jumptable 0002D739 cases 101-103 ;~ 1E67:0BF4
cs=0x1e67;eip=0x000bf8; 	X(PUSH(cs));	// 59012 push    cs ;~ 1E67:0BF8
cs=0x1e67;eip=0x000bf9; 	J(CALL(fprint,0));	// 59013 call    near ptr fprint ;~ 1E67:0BF9
cs=0x1e67;eip=0x000bfc; 	J(JMP(loc_2d764));	// 59015 jmp     loc_2D764 ;~ 1E67:0BFC
def_2d739:
	// 8178 
cs=0x1e67;eip=0x000c00; 	T(CMP(word_428a0, 0));	// 59022 cmp     word_428A0, 0   ; jumptable 0002D739 default case, cases 104,106-109,113,114,116,118,119 ;~ 1E67:0C00
cs=0x1e67;eip=0x000c05; 	J(JZ(loc_2d85a));	// 59023 jz      short loc_2D85A ;~ 1E67:0C05
cs=0x1e67;eip=0x000c07; 	T(MOV(ax, si));	// 59024 mov     ax, si ;~ 1E67:0C07
cs=0x1e67;eip=0x000c09; 	T(DEC(si));	// 59025 dec     si ;~ 1E67:0C09
loc_2d85a:
	// 8179 
cs=0x1e67;eip=0x000c0a; 	T(MOV(di, si));	// 59029 mov     di, si ;~ 1E67:0C0A
loc_2d85c:
	// 8180 
cs=0x1e67;eip=0x000c0c; 	T(INC(di));	// 59032 inc     di ;~ 1E67:0C0C
cs=0x1e67;eip=0x000c0d; 	T(CMP(*(raddr(ds,di)), 0));	// 59033 cmp     byte ptr [di], 0 ;~ 1E67:0C0D
cs=0x1e67;eip=0x000c10; 	J(JZ(loc_2d867));	// 59034 jz      short loc_2D867 ;~ 1E67:0C10
cs=0x1e67;eip=0x000c12; 	T(CMP(*(raddr(ds,di)), 0x25));	// 59035 cmp     byte ptr [di], 25h ; '%' ;~ 1E67:0C12
cs=0x1e67;eip=0x000c15; 	J(JNZ(loc_2d85c));	// 59036 jnz     short loc_2D85C ;~ 1E67:0C15
loc_2d867:
	// 8181 
cs=0x1e67;eip=0x000c17; 	T(MOV(ax, di));	// 59039 mov     ax, di ;~ 1E67:0C17
cs=0x1e67;eip=0x000c19; 	T(SUB(ax, si));	// 59040 sub     ax, si ;~ 1E67:0C19
cs=0x1e67;eip=0x000c1b; 	X(PUSH(ax));	// 59041 push    ax ;~ 1E67:0C1B
cs=0x1e67;eip=0x000c1c; 	X(PUSH(ds));	// 59042 push    ds ;~ 1E67:0C1C
cs=0x1e67;eip=0x000c1d; 	X(PUSH(si));	// 59043 push    si ;~ 1E67:0C1D
cs=0x1e67;eip=0x000c1e; 	X(PUSH(cs));	// 59044 push    cs ;~ 1E67:0C1E
cs=0x1e67;eip=0x000c1f; 	J(CALL(putbuf,0));	// 59045 call    near ptr putbuf ;~ 1E67:0C1F
cs=0x1e67;eip=0x000c22; 	T(ADD(sp, 6));	// 59046 add     sp, 6 ;~ 1E67:0C22
cs=0x1e67;eip=0x000c25; 	T(MOV(si, di));	// 59047 mov     si, di ;~ 1E67:0C25
loc_2d877:
	// 8182 
cs=0x1e67;eip=0x000c27; 	T(CMP(*(raddr(ds,si)), 0));	// 59051 cmp     byte ptr [si], 0 ;~ 1E67:0C27
cs=0x1e67;eip=0x000c2a; 	J(JZ(loc_2d87f));	// 59052 jz      short loc_2D87F ;~ 1E67:0C2A
cs=0x1e67;eip=0x000c2c; 	J(JMP(loc_2d5f0));	// 59053 jmp     loc_2D5F0 ;~ 1E67:0C2C
loc_2d87f:
	// 8183 
cs=0x1e67;eip=0x000c2f; 	T(CMP(word_428ae, 0));	// 59058 cmp     word_428AE, 0 ;~ 1E67:0C2F
cs=0x1e67;eip=0x000c34; 	J(JNZ(loc_2d8e0));	// 59059 jnz     short loc_2D8E0 ;~ 1E67:0C34
cs=0x1e67;eip=0x000c36; 	T(MOV(bx, off_4289a));	// 59060 mov     bx, off_4289A ;~ 1E67:0C36
cs=0x1e67;eip=0x000c3a; 	T(TEST(*(raddr(ds,bx+6)), 0x20));	// 59061 test    byte ptr [bx+6], 20h ;~ 1E67:0C3A
cs=0x1e67;eip=0x000c3e; 	J(JZ(loc_2d8e0));	// 59062 jz      short loc_2D8E0 ;~ 1E67:0C3E
loc_2d890:
	// 8184 
cs=0x1e67;eip=0x000c40; 	T(MOV(ax, 0x0FFFF));	// 59065 mov     ax, 0FFFFh ;~ 1E67:0C40
cs=0x1e67;eip=0x000c43; 	J(JMP(loc_2d8e3));	// 59066 jmp     short loc_2D8E3 ;~ 1E67:0C43
loc_2d8c2:
	// 8185 
cs=0x1e67;eip=0x000c72; 	T(CMP(word_428b0, 0));	// 59095 cmp     word_428B0, 0 ;~ 1E67:0C72
cs=0x1e67;eip=0x000c77; 	J(JZ(loc_2d8dc));	// 59096 jz      short loc_2D8DC ;~ 1E67:0C77
cs=0x1e67;eip=0x000c79; 	T(CMP(word_428ae, 0));	// 59097 cmp     word_428AE, 0 ;~ 1E67:0C79
cs=0x1e67;eip=0x000c7e; 	J(JNZ(loc_2d8e0));	// 59098 jnz     short loc_2D8E0 ;~ 1E67:0C7E
cs=0x1e67;eip=0x000c80; 	T(MOV(bx, off_4289a));	// 59099 mov     bx, off_4289A ;~ 1E67:0C80
cs=0x1e67;eip=0x000c84; 	T(TEST(*(raddr(ds,bx+6)), 0x20));	// 59100 test    byte ptr [bx+6], 20h ;~ 1E67:0C84
cs=0x1e67;eip=0x000c88; 	J(JNZ(loc_2d890));	// 59101 jnz     short loc_2D890 ;~ 1E67:0C88
cs=0x1e67;eip=0x000c8a; 	J(JMP(loc_2d8e0));	// 59102 jmp     short loc_2D8E0 ;~ 1E67:0C8A
loc_2d8dc:
	// 8186 
cs=0x1e67;eip=0x000c8c; 	T(INC(si));	// 59106 inc     si ;~ 1E67:0C8C
cs=0x1e67;eip=0x000c8d; 	J(JMP(loc_2d877));	// 59107 jmp     short loc_2D877 ;~ 1E67:0C8D
loc_2d8e0:
	// 8187 
cs=0x1e67;eip=0x000c90; 	T(MOV(ax, word_428ae));	// 59113 mov     ax, word_428AE ;~ 1E67:0C90
loc_2d8e3:
	// 8188 
cs=0x1e67;eip=0x000c93; 	X(POP(si));	// 59116 pop     si ;~ 1E67:0C93
cs=0x1e67;eip=0x000c94; 	X(POP(di));	// 59117 pop     di ;~ 1E67:0C94
cs=0x1e67;eip=0x000c95; 	T(MOV(sp, bp));	// 59118 mov     sp, bp ;~ 1E67:0C95
cs=0x1e67;eip=0x000c97; 	X(POP(bp));	// 59119 pop     bp ;~ 1E67:0C97
cs=0x1e67;eip=0x000c98; 	J(RETF(0));	// 59120 retf ;~ 1E67:0C98

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__output: 	goto __output;
        case m2c::kdef_2d739: 	goto def_2d739;
        case m2c::kloc_2d5f0: 	goto loc_2d5f0;
        case m2c::kloc_2d5f8: 	goto loc_2d5f8;
        case m2c::kloc_2d630: 	goto loc_2d630;
        case m2c::kloc_2d642: 	goto loc_2d642;
        case m2c::kloc_2d654: 	goto loc_2d654;
        case m2c::kloc_2d65a: 	goto loc_2d65a;
        case m2c::kloc_2d663: 	goto loc_2d663;
        case m2c::kloc_2d694: 	goto loc_2d694;
        case m2c::kloc_2d6bd: 	goto loc_2d6bd;
        case m2c::kloc_2d6da: 	goto loc_2d6da;
        case m2c::kloc_2d6e6: 	goto loc_2d6e6;
        case m2c::kloc_2d6e7: 	goto loc_2d6e7;
        case m2c::kloc_2d6f0: 	goto loc_2d6f0;
        case m2c::kloc_2d6f8: 	goto loc_2d6f8;
        case m2c::kloc_2d700: 	goto loc_2d700;
        case m2c::kloc_2d708: 	goto loc_2d708;
        case m2c::kloc_2d71e: 	goto loc_2d71e;
        case m2c::kloc_2d727: 	goto loc_2d727;
        case m2c::kloc_2d736: 	goto loc_2d736;
        case m2c::kloc_2d73e: 	goto loc_2d73e;
        case m2c::kloc_2d749: 	goto loc_2d749;
        case m2c::kloc_2d752: 	goto loc_2d752;
        case m2c::kloc_2d756: 	goto loc_2d756;
        case m2c::kloc_2d75f: 	goto loc_2d75f;
        case m2c::kloc_2d764: 	goto loc_2d764;
        case m2c::kloc_2d76a: 	goto loc_2d76a;
        case m2c::kloc_2d770: 	goto loc_2d770;
        case m2c::kloc_2d788: 	goto loc_2d788;
        case m2c::kloc_2d78e: 	goto loc_2d78e;
        case m2c::kloc_2d7a2: 	goto loc_2d7a2;
        case m2c::kloc_2d7c6: 	goto loc_2d7c6;
        case m2c::kloc_2d7d4: 	goto loc_2d7d4;
        case m2c::kloc_2d7d7: 	goto loc_2d7d7;
        case m2c::kloc_2d80e: 	goto loc_2d80e;
        case m2c::kloc_2d814: 	goto loc_2d814;
        case m2c::kloc_2d81a: 	goto loc_2d81a;
        case m2c::kloc_2d82e: 	goto loc_2d82e;
        case m2c::kloc_2d834: 	goto loc_2d834;
        case m2c::kloc_2d836: 	goto loc_2d836;
        case m2c::kloc_2d83e: 	goto loc_2d83e;
        case m2c::kloc_2d844: 	goto loc_2d844;
        case m2c::kloc_2d85a: 	goto loc_2d85a;
        case m2c::kloc_2d85c: 	goto loc_2d85c;
        case m2c::kloc_2d867: 	goto loc_2d867;
        case m2c::kloc_2d877: 	goto loc_2d877;
        case m2c::kloc_2d87f: 	goto loc_2d87f;
        case m2c::kloc_2d890: 	goto loc_2d890;
        case m2c::kloc_2d8c2: 	goto loc_2d8c2;
        case m2c::kloc_2d8dc: 	goto loc_2d8dc;
        case m2c::kloc_2d8e0: 	goto loc_2d8e0;
        case m2c::kloc_2d8e3: 	goto loc_2d8e3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool iprint(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    iprint:
    _begin:
#undef var_18
#define var_18 -0x18
	// 59133 var_18          = byte ptr -18h ;~ 1E67:0C9A
#undef var_c
#define var_c -0x0C
	// 59134 var_C           = word ptr -0Ch ;~ 1E67:0C9A
#undef var_8
#define var_8 -8
	// 59135 var_8           = word ptr -8 ;~ 1E67:0C9A
#undef var_4
#define var_4 -4
	// 59136 var_4           = dword ptr -4 ;~ 1E67:0C9A
#undef arg_0
#define arg_0 6
	// 59137 arg_0           = word ptr  6 ;~ 1E67:0C9A
cs=0x1e67;eip=0x000c9a; 	X(PUSH(bp));	// 59139 push    bp ;~ 1E67:0C9A
cs=0x1e67;eip=0x000c9b; 	T(MOV(bp, sp));	// 59140 mov     bp, sp ;~ 1E67:0C9B
cs=0x1e67;eip=0x000c9d; 	T(SUB(sp, 0x18));	// 59141 sub     sp, 18h ;~ 1E67:0C9D
cs=0x1e67;eip=0x000ca0; 	X(PUSH(di));	// 59142 push    di ;~ 1E67:0CA0
cs=0x1e67;eip=0x000ca1; 	X(PUSH(si));	// 59143 push    si              ; int ;~ 1E67:0CA1
cs=0x1e67;eip=0x000ca2; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0A));	// 59144 cmp     [bp+arg_0], 0Ah ;~ 1E67:0CA2
cs=0x1e67;eip=0x000ca6; 	J(JZ(loc_2d8fc));	// 59145 jz      short loc_2D8FC ;~ 1E67:0CA6
cs=0x1e67;eip=0x000ca8; 	X(INC(word_428ac));	// 59146 inc     word_428AC ;~ 1E67:0CA8
loc_2d8fc:
	// 8189 
cs=0x1e67;eip=0x000cac; 	T(CMP(word_428a0, 2));	// 59149 cmp     word_428A0, 2 ;~ 1E67:0CAC
cs=0x1e67;eip=0x000cb1; 	J(JZ(loc_2d90a));	// 59150 jz      short loc_2D90A ;~ 1E67:0CB1
cs=0x1e67;eip=0x000cb3; 	T(CMP(word_428a0, 0x10));	// 59151 cmp     word_428A0, 10h ;~ 1E67:0CB3
cs=0x1e67;eip=0x000cb8; 	J(JNZ(loc_2d920));	// 59152 jnz     short loc_2D920 ;~ 1E67:0CB8
loc_2d90a:
	// 8190 
cs=0x1e67;eip=0x000cba; 	T(MOV(bx, word_428a6));	// 59155 mov     bx, word_428A6 ;~ 1E67:0CBA
cs=0x1e67;eip=0x000cbe; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 59156 mov     ax, [bx] ;~ 1E67:0CBE
cs=0x1e67;eip=0x000cc0; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 59157 mov     dx, [bx+2] ;~ 1E67:0CC0
cs=0x1e67;eip=0x000cc3; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 59158 mov     word ptr [bp+var_4], ax ;~ 1E67:0CC3
cs=0x1e67;eip=0x000cc6; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 59159 mov     word ptr [bp+var_4+2], dx ;~ 1E67:0CC6
cs=0x1e67;eip=0x000cc9; 	X(ADD(word_428a6, 4));	// 59160 add     word_428A6, 4 ;~ 1E67:0CC9
cs=0x1e67;eip=0x000cce; 	J(JMP(loc_2d94a));	// 59161 jmp     short loc_2D94A ;~ 1E67:0CCE
loc_2d920:
	// 8191 
cs=0x1e67;eip=0x000cd0; 	T(CMP(word_428ac, 0));	// 59165 cmp     word_428AC, 0 ;~ 1E67:0CD0
cs=0x1e67;eip=0x000cd5; 	J(JZ(loc_2d938));	// 59166 jz      short loc_2D938 ;~ 1E67:0CD5
cs=0x1e67;eip=0x000cd7; 	T(MOV(bx, word_428a6));	// 59167 mov     bx, word_428A6 ;~ 1E67:0CD7
cs=0x1e67;eip=0x000cdb; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 59168 mov     ax, [bx] ;~ 1E67:0CDB
cs=0x1e67;eip=0x000cdd; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 59169 mov     word ptr [bp+var_4], ax ;~ 1E67:0CDD
cs=0x1e67;eip=0x000ce0; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), 0));	// 59170 mov     word ptr [bp+var_4+2], 0 ;~ 1E67:0CE0
cs=0x1e67;eip=0x000ce5; 	J(JMP(loc_2d945));	// 59171 jmp     short loc_2D945 ;~ 1E67:0CE5
loc_2d938:
	// 8192 
cs=0x1e67;eip=0x000ce8; 	T(MOV(bx, word_428a6));	// 59176 mov     bx, word_428A6 ;~ 1E67:0CE8
cs=0x1e67;eip=0x000cec; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 59177 mov     ax, [bx] ;~ 1E67:0CEC
cs=0x1e67;eip=0x000cee; 	T(CWD);	// 59178 cwd ;~ 1E67:0CEE
cs=0x1e67;eip=0x000cef; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 59179 mov     word ptr [bp+var_4], ax ;~ 1E67:0CEF
cs=0x1e67;eip=0x000cf2; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 59180 mov     word ptr [bp+var_4+2], dx ;~ 1E67:0CF2
loc_2d945:
	// 8193 
cs=0x1e67;eip=0x000cf5; 	X(ADD(word_428a6, 2));	// 59183 add     word_428A6, 2 ;~ 1E67:0CF5
loc_2d94a:
	// 8194 
cs=0x1e67;eip=0x000cfa; 	T(CMP(word_42898, 0));	// 59186 cmp     word_42898, 0 ;~ 1E67:0CFA
cs=0x1e67;eip=0x000cff; 	J(JZ(loc_2d95e));	// 59187 jz      short loc_2D95E ;~ 1E67:0CFF
cs=0x1e67;eip=0x000d01; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 59188 mov     ax, word ptr [bp+var_4] ;~ 1E67:0D01
cs=0x1e67;eip=0x000d04; 	T(OR(ax, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 59189 or      ax, word ptr [bp+var_4+2] ;~ 1E67:0D04
cs=0x1e67;eip=0x000d07; 	J(JZ(loc_2d95e));	// 59190 jz      short loc_2D95E ;~ 1E67:0D07
cs=0x1e67;eip=0x000d09; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 59191 mov     ax, [bp+arg_0] ;~ 1E67:0D09
cs=0x1e67;eip=0x000d0c; 	J(JMP(loc_2d960));	// 59192 jmp     short loc_2D960 ;~ 1E67:0D0C
loc_2d95e:
	// 8195 
cs=0x1e67;eip=0x000d0e; 	T(SUB(ax, ax));	// 59197 sub     ax, ax ;~ 1E67:0D0E
loc_2d960:
	// 8196 
cs=0x1e67;eip=0x000d10; 	X(MOV(word_428ba, ax));	// 59200 mov     word_428BA, ax ;~ 1E67:0D10
cs=0x1e67;eip=0x000d13; 	T(MOV(si, off_428b6));	// 59201 mov     si, off_428B6 ;~ 1E67:0D13
cs=0x1e67;eip=0x000d17; 	T(CMP(word_428ac, 0));	// 59202 cmp     word_428AC, 0 ;~ 1E67:0D17
cs=0x1e67;eip=0x000d1c; 	J(JNZ(loc_2d998));	// 59203 jnz     short loc_2D998 ;~ 1E67:0D1C
cs=0x1e67;eip=0x000d1e; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), 0));	// 59204 cmp     word ptr [bp+var_4+2], 0 ;~ 1E67:0D1E
cs=0x1e67;eip=0x000d22; 	J(JGE(loc_2d998));	// 59205 jge     short loc_2D998 ;~ 1E67:0D22
cs=0x1e67;eip=0x000d24; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0A));	// 59206 cmp     [bp+arg_0], 0Ah ;~ 1E67:0D24
cs=0x1e67;eip=0x000d28; 	J(JNZ(loc_2d991));	// 59207 jnz     short loc_2D991 ;~ 1E67:0D28
cs=0x1e67;eip=0x000d2a; 	X(MOV(*(raddr(ds,si)), 0x2D));	// 59208 mov     byte ptr [si], 2Dh ; '-' ;~ 1E67:0D2A
cs=0x1e67;eip=0x000d2d; 	T(INC(si));	// 59209 inc     si ;~ 1E67:0D2D
cs=0x1e67;eip=0x000d2e; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 59210 mov     ax, word ptr [bp+var_4] ;~ 1E67:0D2E
cs=0x1e67;eip=0x000d31; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 59211 mov     dx, word ptr [bp+var_4+2] ;~ 1E67:0D31
cs=0x1e67;eip=0x000d34; 	T(NEG(ax));	// 59212 neg     ax ;~ 1E67:0D34
cs=0x1e67;eip=0x000d36; 	T(ADC(dx, 0));	// 59213 adc     dx, 0 ;~ 1E67:0D36
cs=0x1e67;eip=0x000d39; 	T(NEG(dx));	// 59214 neg     dx ;~ 1E67:0D39
cs=0x1e67;eip=0x000d3b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 59215 mov     word ptr [bp+var_4], ax ;~ 1E67:0D3B
cs=0x1e67;eip=0x000d3e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 59216 mov     word ptr [bp+var_4+2], dx ;~ 1E67:0D3E
loc_2d991:
	// 8197 
cs=0x1e67;eip=0x000d41; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 1));	// 59219 mov     [bp+var_8], 1 ;~ 1E67:0D41
cs=0x1e67;eip=0x000d46; 	J(JMP(loc_2d99d));	// 59220 jmp     short loc_2D99D ;~ 1E67:0D46
loc_2d998:
	// 8198 
cs=0x1e67;eip=0x000d48; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 59225 mov     [bp+var_8], 0 ;~ 1E67:0D48
loc_2d99d:
	// 8199 
cs=0x1e67;eip=0x000d4d; 	T(ax = bp+var_18);	// 59228 lea     ax, [bp+var_18] ;~ 1E67:0D4D
cs=0x1e67;eip=0x000d50; 	T(MOV(di, ax));	// 59229 mov     di, ax ;~ 1E67:0D50
cs=0x1e67;eip=0x000d52; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 59230 push    [bp+arg_0] ;~ 1E67:0D52
cs=0x1e67;eip=0x000d55; 	X(PUSH(di));	// 59231 push    di              ; char * ;~ 1E67:0D55
cs=0x1e67;eip=0x000d56; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 59232 push    word ptr [bp+var_4+2] ;~ 1E67:0D56
cs=0x1e67;eip=0x000d59; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 59233 push    word ptr [bp+var_4] ; unsigned __int32 ;~ 1E67:0D59
cs=0x1e67;eip=0x000d5c; 	J(CALLF(_ultoa,0));	// 59234 call    far ptr _ultoa ;~ 1E67:0D5C
cs=0x1e67;eip=0x000d61; 	T(ADD(sp, 8));	// 59235 add     sp, 8 ;~ 1E67:0D61
cs=0x1e67;eip=0x000d64; 	T(CMP(word_428aa, 0));	// 59236 cmp     word_428AA, 0 ;~ 1E67:0D64
cs=0x1e67;eip=0x000d69; 	J(JZ(loc_2d9de));	// 59237 jz      short loc_2D9DE ;~ 1E67:0D69
cs=0x1e67;eip=0x000d6b; 	X(PUSH(di));	// 59238 push    di              ; char * ;~ 1E67:0D6B
cs=0x1e67;eip=0x000d6c; 	J(CALLF(_strlen,0));	// 59239 call    _strlen ;~ 1E67:0D6C
cs=0x1e67;eip=0x000d71; 	T(ADD(sp, 2));	// 59240 add     sp, 2 ;~ 1E67:0D71
cs=0x1e67;eip=0x000d74; 	T(MOV(cx, word_428b2));	// 59241 mov     cx, word_428B2 ;~ 1E67:0D74
cs=0x1e67;eip=0x000d78; 	T(SUB(cx, ax));	// 59242 sub     cx, ax ;~ 1E67:0D78
cs=0x1e67;eip=0x000d7a; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), cx));	// 59243 mov     [bp+var_C], cx ;~ 1E67:0D7A
cs=0x1e67;eip=0x000d7d; 	J(JMP(loc_2d9d4));	// 59244 jmp     short loc_2D9D4 ;~ 1E67:0D7D
loc_2d9d0:
	// 8200 
cs=0x1e67;eip=0x000d80; 	X(MOV(*(raddr(ds,si)), 0x30));	// 59249 mov     byte ptr [si], 30h ; '0' ;~ 1E67:0D80
cs=0x1e67;eip=0x000d83; 	T(INC(si));	// 59250 inc     si ;~ 1E67:0D83
loc_2d9d4:
	// 8201 
cs=0x1e67;eip=0x000d84; 	T(MOV(ax, cx));	// 59253 mov     ax, cx ;~ 1E67:0D84
cs=0x1e67;eip=0x000d86; 	T(DEC(cx));	// 59254 dec     cx ;~ 1E67:0D86
cs=0x1e67;eip=0x000d87; 	T(OR(ax, ax));	// 59255 or      ax, ax ;~ 1E67:0D87
cs=0x1e67;eip=0x000d89; 	J(JG(loc_2d9d0));	// 59256 jg      short loc_2D9D0 ;~ 1E67:0D89
cs=0x1e67;eip=0x000d8b; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), cx));	// 59257 mov     [bp+var_C], cx ;~ 1E67:0D8B
loc_2d9de:
	// 8202 
cs=0x1e67;eip=0x000d8e; 	T(MOV(cx, word_4289e));	// 59260 mov     cx, word_4289E ;~ 1E67:0D8E
loc_2d9e2:
	// 8203 
cs=0x1e67;eip=0x000d92; 	T(MOV(al, *(raddr(ds,di))));	// 59263 mov     al, [di] ;~ 1E67:0D92
cs=0x1e67;eip=0x000d94; 	X(MOV(*(raddr(ds,si)), al));	// 59264 mov     [si], al ;~ 1E67:0D94
cs=0x1e67;eip=0x000d96; 	T(OR(cx, cx));	// 59265 or      cx, cx ;~ 1E67:0D96
cs=0x1e67;eip=0x000d98; 	J(JZ(loc_2d9f1));	// 59266 jz      short loc_2D9F1 ;~ 1E67:0D98
cs=0x1e67;eip=0x000d9a; 	T(CMP(al, 0x61));	// 59267 cmp     al, 61h ; 'a' ;~ 1E67:0D9A
cs=0x1e67;eip=0x000d9c; 	J(JL(loc_2d9f1));	// 59268 jl      short loc_2D9F1 ;~ 1E67:0D9C
cs=0x1e67;eip=0x000d9e; 	X(SUB(*(raddr(ds,si)), 0x20));	// 59269 sub     byte ptr [si], 20h ; ' ' ;~ 1E67:0D9E
loc_2d9f1:
	// 8204 
cs=0x1e67;eip=0x000da1; 	T(INC(si));	// 59273 inc     si ;~ 1E67:0DA1
cs=0x1e67;eip=0x000da2; 	T(INC(di));	// 59274 inc     di ;~ 1E67:0DA2
cs=0x1e67;eip=0x000da3; 	T(CMP(*(raddr(ds,di-1)), 0));	// 59275 cmp     byte ptr [di-1], 0 ;~ 1E67:0DA3
cs=0x1e67;eip=0x000da7; 	J(JNZ(loc_2d9e2));	// 59276 jnz     short loc_2D9E2 ;~ 1E67:0DA7
cs=0x1e67;eip=0x000da9; 	T(CMP(word_428ac, 0));	// 59277 cmp     word_428AC, 0 ;~ 1E67:0DA9
cs=0x1e67;eip=0x000dae; 	J(JNZ(loc_2da14));	// 59278 jnz     short loc_2DA14 ;~ 1E67:0DAE
cs=0x1e67;eip=0x000db0; 	T(MOV(ax, word_428a2));	// 59279 mov     ax, word_428A2 ;~ 1E67:0DB0
cs=0x1e67;eip=0x000db3; 	T(OR(ax, word_428a8));	// 59280 or      ax, word_428A8 ;~ 1E67:0DB3
cs=0x1e67;eip=0x000db7; 	J(JZ(loc_2da14));	// 59281 jz      short loc_2DA14 ;~ 1E67:0DB7
cs=0x1e67;eip=0x000db9; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 59282 cmp     [bp+var_8], 0 ;~ 1E67:0DB9
cs=0x1e67;eip=0x000dbd; 	J(JNZ(loc_2da14));	// 59283 jnz     short loc_2DA14 ;~ 1E67:0DBD
cs=0x1e67;eip=0x000dbf; 	T(MOV(ax, 1));	// 59284 mov     ax, 1 ;~ 1E67:0DBF
cs=0x1e67;eip=0x000dc2; 	J(JMP(loc_2da16));	// 59285 jmp     short loc_2DA16 ;~ 1E67:0DC2
loc_2da14:
	// 8205 
cs=0x1e67;eip=0x000dc4; 	T(SUB(ax, ax));	// 59290 sub     ax, ax ;~ 1E67:0DC4
loc_2da16:
	// 8206 
cs=0x1e67;eip=0x000dc6; 	X(PUSH(ax));	// 59293 push    ax ;~ 1E67:0DC6
cs=0x1e67;eip=0x000dc7; 	X(PUSH(cs));	// 59294 push    cs ;~ 1E67:0DC7
cs=0x1e67;eip=0x000dc8; 	J(CALL(_out,0));	// 59295 call    near ptr _out ;~ 1E67:0DC8
cs=0x1e67;eip=0x000dcb; 	T(ADD(sp, 2));	// 59296 add     sp, 2 ;~ 1E67:0DCB
cs=0x1e67;eip=0x000dce; 	X(POP(si));	// 59297 pop     si ;~ 1E67:0DCE
cs=0x1e67;eip=0x000dcf; 	X(POP(di));	// 59298 pop     di ;~ 1E67:0DCF
cs=0x1e67;eip=0x000dd0; 	T(MOV(sp, bp));	// 59299 mov     sp, bp ;~ 1E67:0DD0
cs=0x1e67;eip=0x000dd2; 	X(POP(bp));	// 59300 pop     bp ;~ 1E67:0DD2
cs=0x1e67;eip=0x000dd3; 	J(RETF(0));	// 59301 retf ;~ 1E67:0DD3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kiprint: 	goto iprint;
        case m2c::kloc_2d8fc: 	goto loc_2d8fc;
        case m2c::kloc_2d90a: 	goto loc_2d90a;
        case m2c::kloc_2d920: 	goto loc_2d920;
        case m2c::kloc_2d938: 	goto loc_2d938;
        case m2c::kloc_2d945: 	goto loc_2d945;
        case m2c::kloc_2d94a: 	goto loc_2d94a;
        case m2c::kloc_2d95e: 	goto loc_2d95e;
        case m2c::kloc_2d960: 	goto loc_2d960;
        case m2c::kloc_2d991: 	goto loc_2d991;
        case m2c::kloc_2d998: 	goto loc_2d998;
        case m2c::kloc_2d99d: 	goto loc_2d99d;
        case m2c::kloc_2d9d0: 	goto loc_2d9d0;
        case m2c::kloc_2d9d4: 	goto loc_2d9d4;
        case m2c::kloc_2d9de: 	goto loc_2d9de;
        case m2c::kloc_2d9e2: 	goto loc_2d9e2;
        case m2c::kloc_2d9f1: 	goto loc_2d9f1;
        case m2c::kloc_2da14: 	goto loc_2da14;
        case m2c::kloc_2da16: 	goto loc_2da16;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sprint(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sprint:
    _begin:
#undef var_e
#define var_e -0x0E
	// 59311 var_E           = dword ptr -0Eh ;~ 1E67:0DD4
#undef var_8
#define var_8 -8
	// 59312 var_8           = word ptr -8 ;~ 1E67:0DD4
#undef var_6
#define var_6 -6
	// 59313 var_6           = word ptr -6 ;~ 1E67:0DD4
#undef var_4
#define var_4 -4
	// 59314 var_4           = word ptr -4 ;~ 1E67:0DD4
#undef arg_0
#define arg_0 6
	// 59315 arg_0           = word ptr  6 ;~ 1E67:0DD4
cs=0x1e67;eip=0x000dd4; 	X(PUSH(bp));	// 59317 push    bp ;~ 1E67:0DD4
cs=0x1e67;eip=0x000dd5; 	T(MOV(bp, sp));	// 59318 mov     bp, sp ;~ 1E67:0DD5
cs=0x1e67;eip=0x000dd7; 	T(SUB(sp, 0x10));	// 59319 sub     sp, 10h ;~ 1E67:0DD7
cs=0x1e67;eip=0x000dda; 	X(PUSH(di));	// 59320 push    di ;~ 1E67:0DDA
cs=0x1e67;eip=0x000ddb; 	X(PUSH(si));	// 59321 push    si ;~ 1E67:0DDB
cs=0x1e67;eip=0x000ddc; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 59322 cmp     [bp+arg_0], 0 ;~ 1E67:0DDC
cs=0x1e67;eip=0x000de0; 	J(JZ(loc_2da46));	// 59323 jz      short loc_2DA46 ;~ 1E67:0DE0
cs=0x1e67;eip=0x000de2; 	T(MOV(si, 1));	// 59324 mov     si, 1 ;~ 1E67:0DE2
cs=0x1e67;eip=0x000de5; 	T(MOV(ax, word_428a6));	// 59325 mov     ax, word_428A6 ;~ 1E67:0DE5
cs=0x1e67;eip=0x000de8; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 59326 mov     [bp+var_8], ax ;~ 1E67:0DE8
cs=0x1e67;eip=0x000deb; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ds));	// 59327 mov     [bp+var_6], ds ;~ 1E67:0DEB
cs=0x1e67;eip=0x000dee; 	X(ADD(word_428a6, 2));	// 59328 add     word_428A6, 2 ;~ 1E67:0DEE
cs=0x1e67;eip=0x000df3; 	J(JMP(loc_2dad7));	// 59329 jmp     loc_2DAD7 ;~ 1E67:0DF3
loc_2da46:
	// 8207 
cs=0x1e67;eip=0x000df6; 	T(CMP(word_428a0, 0x10));	// 59333 cmp     word_428A0, 10h ;~ 1E67:0DF6
cs=0x1e67;eip=0x000dfb; 	J(JNZ(loc_2da64));	// 59334 jnz     short loc_2DA64 ;~ 1E67:0DFB
cs=0x1e67;eip=0x000dfd; 	T(MOV(bx, word_428a6));	// 59335 mov     bx, word_428A6 ;~ 1E67:0DFD
cs=0x1e67;eip=0x000e01; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 59336 mov     ax, [bx] ;~ 1E67:0E01
cs=0x1e67;eip=0x000e03; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 59337 mov     dx, [bx+2] ;~ 1E67:0E03
cs=0x1e67;eip=0x000e06; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 59338 mov     [bp+var_8], ax ;~ 1E67:0E06
cs=0x1e67;eip=0x000e09; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 59339 mov     [bp+var_6], dx ;~ 1E67:0E09
cs=0x1e67;eip=0x000e0c; 	X(ADD(word_428a6, 4));	// 59340 add     word_428A6, 4 ;~ 1E67:0E0C
cs=0x1e67;eip=0x000e11; 	J(JMP(loc_2da78));	// 59341 jmp     short loc_2DA78 ;~ 1E67:0E11
loc_2da64:
	// 8208 
cs=0x1e67;eip=0x000e14; 	T(MOV(bx, word_428a6));	// 59346 mov     bx, word_428A6 ;~ 1E67:0E14
cs=0x1e67;eip=0x000e18; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 59347 mov     ax, [bx] ;~ 1E67:0E18
cs=0x1e67;eip=0x000e1a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 59348 mov     [bp+var_4], ax ;~ 1E67:0E1A
cs=0x1e67;eip=0x000e1d; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 59349 mov     [bp+var_8], ax ;~ 1E67:0E1D
cs=0x1e67;eip=0x000e20; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ds));	// 59350 mov     [bp+var_6], ds ;~ 1E67:0E20
cs=0x1e67;eip=0x000e23; 	X(ADD(word_428a6, 2));	// 59351 add     word_428A6, 2 ;~ 1E67:0E23
loc_2da78:
	// 8209 
cs=0x1e67;eip=0x000e28; 	T(CMP(word_428a0, 0x10));	// 59354 cmp     word_428A0, 10h ;~ 1E67:0E28
cs=0x1e67;eip=0x000e2d; 	J(JNZ(loc_2da8c));	// 59355 jnz     short loc_2DA8C ;~ 1E67:0E2D
cs=0x1e67;eip=0x000e2f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 59356 mov     ax, [bp+var_8] ;~ 1E67:0E2F
cs=0x1e67;eip=0x000e32; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_6))));	// 59357 or      ax, [bp+var_6] ;~ 1E67:0E32
cs=0x1e67;eip=0x000e35; 	J(JNZ(loc_2da9b));	// 59358 jnz     short loc_2DA9B ;~ 1E67:0E35
cs=0x1e67;eip=0x000e37; 	T(MOV(ax, 0x37EA));	// 59359 mov     ax, 37EAh ;~ 1E67:0E37
cs=0x1e67;eip=0x000e3a; 	J(JMP(loc_2da95));	// 59360 jmp     short loc_2DA95 ;~ 1E67:0E3A
loc_2da8c:
	// 8210 
cs=0x1e67;eip=0x000e3c; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 59364 cmp     [bp+var_4], 0 ;~ 1E67:0E3C
cs=0x1e67;eip=0x000e40; 	J(JNZ(loc_2da9b));	// 59365 jnz     short loc_2DA9B ;~ 1E67:0E40
cs=0x1e67;eip=0x000e42; 	T(MOV(ax, 0x37F1));	// 59366 mov     ax, 37F1h ;~ 1E67:0E42
loc_2da95:
	// 8211 
cs=0x1e67;eip=0x000e45; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 59369 mov     [bp+var_8], ax ;~ 1E67:0E45
cs=0x1e67;eip=0x000e48; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ds));	// 59370 mov     [bp+var_6], ds ;~ 1E67:0E48
loc_2da9b:
	// 8212 
cs=0x1e67;eip=0x000e4b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 59374 mov     ax, [bp+var_8] ;~ 1E67:0E4B
cs=0x1e67;eip=0x000e4e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 59375 mov     dx, [bp+var_6] ;~ 1E67:0E4E
cs=0x1e67;eip=0x000e51; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e))), ax));	// 59376 mov     word ptr [bp+var_E], ax ;~ 1E67:0E51
cs=0x1e67;eip=0x000e54; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e +2))), dx));	// 59377 mov     word ptr [bp+var_E+2], dx ;~ 1E67:0E54
cs=0x1e67;eip=0x000e57; 	T(SUB(si, si));	// 59378 sub     si, si ;~ 1E67:0E57
cs=0x1e67;eip=0x000e59; 	T(CMP(word_428aa, si));	// 59379 cmp     word_428AA, si ;~ 1E67:0E59
cs=0x1e67;eip=0x000e5d; 	J(JZ(loc_2dacb));	// 59380 jz      short loc_2DACB ;~ 1E67:0E5D
cs=0x1e67;eip=0x000e5f; 	T(MOV(cx, word_428b2));	// 59381 mov     cx, word_428B2 ;~ 1E67:0E5F
cs=0x1e67;eip=0x000e63; 	J(JMP(loc_2dac3));	// 59382 jmp     short loc_2DAC3 ;~ 1E67:0E63
loc_2dab6:
	// 8213 
cs=0x1e67;eip=0x000e66; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 59387 les     bx, [bp+var_E] ;~ 1E67:0E66
cs=0x1e67;eip=0x000e69; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_e)))));	// 59388 inc     word ptr [bp+var_E] ;~ 1E67:0E69
cs=0x1e67;eip=0x000e6c; 	T(CMP(*(raddr(es,bx)), 0));	// 59389 cmp     byte ptr es:[bx], 0 ;~ 1E67:0E6C
cs=0x1e67;eip=0x000e70; 	J(JZ(loc_2dad7));	// 59390 jz      short loc_2DAD7 ;~ 1E67:0E70
cs=0x1e67;eip=0x000e72; 	T(INC(si));	// 59391 inc     si ;~ 1E67:0E72
loc_2dac3:
	// 8214 
cs=0x1e67;eip=0x000e73; 	T(CMP(cx, si));	// 59394 cmp     cx, si ;~ 1E67:0E73
cs=0x1e67;eip=0x000e75; 	J(JLE(loc_2dad7));	// 59395 jle     short loc_2DAD7 ;~ 1E67:0E75
cs=0x1e67;eip=0x000e77; 	J(JMP(loc_2dab6));	// 59396 jmp     short loc_2DAB6 ;~ 1E67:0E77
loc_2daca:
	// 8215 
cs=0x1e67;eip=0x000e7a; 	T(INC(si));	// 59401 inc     si ;~ 1E67:0E7A
loc_2dacb:
	// 8216 
cs=0x1e67;eip=0x000e7b; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 59404 les     bx, [bp+var_E] ;~ 1E67:0E7B
cs=0x1e67;eip=0x000e7e; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_e)))));	// 59405 inc     word ptr [bp+var_E] ;~ 1E67:0E7E
cs=0x1e67;eip=0x000e81; 	T(CMP(*(raddr(es,bx)), 0));	// 59406 cmp     byte ptr es:[bx], 0 ;~ 1E67:0E81
cs=0x1e67;eip=0x000e85; 	J(JNZ(loc_2daca));	// 59407 jnz     short loc_2DACA ;~ 1E67:0E85
loc_2dad7:
	// 8217 
cs=0x1e67;eip=0x000e87; 	T(MOV(di, word_428b8));	// 59411 mov     di, word_428B8 ;~ 1E67:0E87
cs=0x1e67;eip=0x000e8b; 	T(SUB(di, si));	// 59412 sub     di, si ;~ 1E67:0E8B
cs=0x1e67;eip=0x000e8d; 	T(CMP(word_428a4, 0));	// 59413 cmp     word_428A4, 0 ;~ 1E67:0E8D
cs=0x1e67;eip=0x000e92; 	J(JNZ(loc_2daec));	// 59414 jnz     short loc_2DAEC ;~ 1E67:0E92
cs=0x1e67;eip=0x000e94; 	X(PUSH(di));	// 59415 push    di ;~ 1E67:0E94
cs=0x1e67;eip=0x000e95; 	X(PUSH(cs));	// 59416 push    cs ;~ 1E67:0E95
cs=0x1e67;eip=0x000e96; 	J(CALL(putpad,0));	// 59417 call    near ptr putpad ;~ 1E67:0E96
cs=0x1e67;eip=0x000e99; 	T(ADD(sp, 2));	// 59418 add     sp, 2 ;~ 1E67:0E99
loc_2daec:
	// 8218 
cs=0x1e67;eip=0x000e9c; 	X(PUSH(si));	// 59421 push    si ;~ 1E67:0E9C
cs=0x1e67;eip=0x000e9d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 59422 push    [bp+var_6] ;~ 1E67:0E9D
cs=0x1e67;eip=0x000ea0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 59423 push    [bp+var_8] ;~ 1E67:0EA0
cs=0x1e67;eip=0x000ea3; 	X(PUSH(cs));	// 59424 push    cs ;~ 1E67:0EA3
cs=0x1e67;eip=0x000ea4; 	J(CALL(putbuf,0));	// 59425 call    near ptr putbuf ;~ 1E67:0EA4
cs=0x1e67;eip=0x000ea7; 	T(ADD(sp, 6));	// 59426 add     sp, 6 ;~ 1E67:0EA7
cs=0x1e67;eip=0x000eaa; 	T(CMP(word_428a4, 0));	// 59427 cmp     word_428A4, 0 ;~ 1E67:0EAA
cs=0x1e67;eip=0x000eaf; 	J(JZ(loc_2db09));	// 59428 jz      short loc_2DB09 ;~ 1E67:0EAF
cs=0x1e67;eip=0x000eb1; 	X(PUSH(di));	// 59429 push    di ;~ 1E67:0EB1
cs=0x1e67;eip=0x000eb2; 	X(PUSH(cs));	// 59430 push    cs ;~ 1E67:0EB2
cs=0x1e67;eip=0x000eb3; 	J(CALL(putpad,0));	// 59431 call    near ptr putpad ;~ 1E67:0EB3
cs=0x1e67;eip=0x000eb6; 	T(ADD(sp, 2));	// 59432 add     sp, 2 ;~ 1E67:0EB6
loc_2db09:
	// 8219 
cs=0x1e67;eip=0x000eb9; 	X(POP(si));	// 59435 pop     si ;~ 1E67:0EB9
cs=0x1e67;eip=0x000eba; 	X(POP(di));	// 59436 pop     di ;~ 1E67:0EBA
cs=0x1e67;eip=0x000ebb; 	T(MOV(sp, bp));	// 59437 mov     sp, bp ;~ 1E67:0EBB
cs=0x1e67;eip=0x000ebd; 	X(POP(bp));	// 59438 pop     bp ;~ 1E67:0EBD
cs=0x1e67;eip=0x000ebe; 	J(RETF(0));	// 59439 retf ;~ 1E67:0EBE

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_2da46: 	goto loc_2da46;
        case m2c::kloc_2da64: 	goto loc_2da64;
        case m2c::kloc_2da78: 	goto loc_2da78;
        case m2c::kloc_2da8c: 	goto loc_2da8c;
        case m2c::kloc_2da95: 	goto loc_2da95;
        case m2c::kloc_2da9b: 	goto loc_2da9b;
        case m2c::kloc_2dab6: 	goto loc_2dab6;
        case m2c::kloc_2dac3: 	goto loc_2dac3;
        case m2c::kloc_2daca: 	goto loc_2daca;
        case m2c::kloc_2dacb: 	goto loc_2dacb;
        case m2c::kloc_2dad7: 	goto loc_2dad7;
        case m2c::kloc_2daec: 	goto loc_2daec;
        case m2c::kloc_2db09: 	goto loc_2db09;
        case m2c::ksprint: 	goto sprint;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool fprint(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    fprint:
    _begin:
#undef var_4
#define var_4 -4
	// 59451 var_4           = byte ptr -4 ;~ 1E67:0EC0
#undef var_2
#define var_2 -2
	// 59452 var_2           = word ptr -2 ;~ 1E67:0EC0
#undef arg_0
#define arg_0 6
	// 59453 arg_0           = word ptr  6 ;~ 1E67:0EC0
cs=0x1e67;eip=0x000ec0; 	X(PUSH(bp));	// 59455 push    bp ;~ 1E67:0EC0
cs=0x1e67;eip=0x000ec1; 	T(MOV(bp, sp));	// 59456 mov     bp, sp ;~ 1E67:0EC1
cs=0x1e67;eip=0x000ec3; 	T(SUB(sp, 4));	// 59457 sub     sp, 4 ;~ 1E67:0EC3
cs=0x1e67;eip=0x000ec6; 	T(MOV(ax, word_428a6));	// 59458 mov     ax, word_428A6 ;~ 1E67:0EC6
cs=0x1e67;eip=0x000ec9; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 59459 mov     [bp+var_2], ax ;~ 1E67:0EC9
cs=0x1e67;eip=0x000ecc; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x67));	// 59460 cmp     [bp+arg_0], 67h ; 'g' ;~ 1E67:0ECC
cs=0x1e67;eip=0x000ed0; 	J(JZ(loc_2db28));	// 59461 jz      short loc_2DB28 ;~ 1E67:0ED0
cs=0x1e67;eip=0x000ed2; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x47));	// 59462 cmp     [bp+arg_0], 47h ; 'G' ;~ 1E67:0ED2
cs=0x1e67;eip=0x000ed6; 	J(JNZ(loc_2db2c));	// 59463 jnz     short loc_2DB2C ;~ 1E67:0ED6
loc_2db28:
	// 8220 
cs=0x1e67;eip=0x000ed8; 	T(MOV(al, 1));	// 59466 mov     al, 1 ;~ 1E67:0ED8
cs=0x1e67;eip=0x000eda; 	J(JMP(loc_2db2e));	// 59467 jmp     short loc_2DB2E ;~ 1E67:0EDA
loc_2db2c:
	// 8221 
cs=0x1e67;eip=0x000edc; 	T(SUB(al, al));	// 59471 sub     al, al ;~ 1E67:0EDC
loc_2db2e:
	// 8222 
cs=0x1e67;eip=0x000ede; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 59474 mov     [bp+var_4], al ;~ 1E67:0EDE
cs=0x1e67;eip=0x000ee1; 	T(CMP(word_428aa, 0));	// 59475 cmp     word_428AA, 0 ;~ 1E67:0EE1
cs=0x1e67;eip=0x000ee6; 	J(JNZ(loc_2db3e));	// 59476 jnz     short loc_2DB3E ;~ 1E67:0EE6
cs=0x1e67;eip=0x000ee8; 	X(MOV(word_428b2, 6));	// 59477 mov     word_428B2, 6 ;~ 1E67:0EE8
loc_2db3e:
	// 8223 
cs=0x1e67;eip=0x000eee; 	T(CMP(*(raddr(ss,bp+var_4)), 0));	// 59480 cmp     [bp+var_4], 0 ;~ 1E67:0EEE
cs=0x1e67;eip=0x000ef2; 	J(JZ(loc_2db51));	// 59481 jz      short loc_2DB51 ;~ 1E67:0EF2
cs=0x1e67;eip=0x000ef4; 	T(CMP(word_428b2, 0));	// 59482 cmp     word_428B2, 0 ;~ 1E67:0EF4
cs=0x1e67;eip=0x000ef9; 	J(JNZ(loc_2db51));	// 59483 jnz     short loc_2DB51 ;~ 1E67:0EF9
cs=0x1e67;eip=0x000efb; 	X(MOV(word_428b2, 1));	// 59484 mov     word_428B2, 1 ;~ 1E67:0EFB
loc_2db51:
	// 8224 
cs=0x1e67;eip=0x000f01; 	X(PUSH(word_4289e));	// 59488 push    word_4289E ;~ 1E67:0F01
cs=0x1e67;eip=0x000f05; 	X(PUSH(word_428b2));	// 59489 push    word_428B2 ;~ 1E67:0F05
cs=0x1e67;eip=0x000f09; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 59490 push    [bp+arg_0] ;~ 1E67:0F09
cs=0x1e67;eip=0x000f0c; 	X(PUSH(off_428b6));	// 59491 push    off_428B6 ;~ 1E67:0F0C
cs=0x1e67;eip=0x000f10; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 59492 push    [bp+var_2] ;~ 1E67:0F10
cs=0x1e67;eip=0x000f13; 	J(CALLF(__dispatch_call,off_3ef84));	// 59493 call    off_3EF84 ;~ 1E67:0F13
	R(return seg010_f17_proc(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfprint: 	goto fprint;
        case m2c::kloc_2db28: 	goto loc_2db28;
        case m2c::kloc_2db2c: 	goto loc_2db2c;
        case m2c::kloc_2db2e: 	goto loc_2db2e;
        case m2c::kloc_2db3e: 	goto loc_2db3e;
        case m2c::kloc_2db51: 	goto loc_2db51;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg010_f17_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg010_f17_proc:
    _begin:
cs=0x1e67;eip=0x000f17; 	T(ADD(sp, 0x0A));	// 59496 add     sp, 0Ah ;~ 1E67:0F17
cs=0x1e67;eip=0x000f1a; 	T(CMP(*(raddr(ss,bp-4)), 0));	// 59497 cmp     byte ptr [bp-4], 0 ;~ 1E67:0F1A
cs=0x1e67;eip=0x000f1e; 	J(JZ(loc_2db82));	// 59498 jz      short loc_2DB82 ;~ 1E67:0F1E
cs=0x1e67;eip=0x000f20; 	T(CMP(word_42898, 0));	// 59499 cmp     word_42898, 0 ;~ 1E67:0F20
cs=0x1e67;eip=0x000f25; 	J(JNZ(loc_2db82));	// 59500 jnz     short loc_2DB82 ;~ 1E67:0F25
cs=0x1e67;eip=0x000f27; 	X(PUSH(off_428b6));	// 59501 push    off_428B6 ;~ 1E67:0F27
cs=0x1e67;eip=0x000f2b; 	J(CALLF(__dispatch_call,off_3ef88));	// 59502 call    off_3EF88 ;~ 1E67:0F2B
cs=0x1e67;eip=0x000f2f; 	T(ADD(sp, 2));	// 59503 add     sp, 2 ;~ 1E67:0F2F
loc_2db82:
	// 8225 
cs=0x1e67;eip=0x000f32; 	T(CMP(word_42898, 0));	// 59507 cmp     word_42898, 0 ;~ 1E67:0F32
cs=0x1e67;eip=0x000f37; 	J(JZ(loc_2db9b));	// 59508 jz      short loc_2DB9B ;~ 1E67:0F37
cs=0x1e67;eip=0x000f39; 	T(CMP(word_428b2, 0));	// 59509 cmp     word_428B2, 0 ;~ 1E67:0F39
cs=0x1e67;eip=0x000f3e; 	J(JNZ(loc_2db9b));	// 59510 jnz     short loc_2DB9B ;~ 1E67:0F3E
cs=0x1e67;eip=0x000f40; 	X(PUSH(off_428b6));	// 59511 push    off_428B6 ;~ 1E67:0F40
cs=0x1e67;eip=0x000f44; 	J(CALLF(__dispatch_call,off_3ef90));	// 59512 call    off_3EF90 ;~ 1E67:0F44
cs=0x1e67;eip=0x000f48; 	T(ADD(sp, 2));	// 59513 add     sp, 2 ;~ 1E67:0F48
loc_2db9b:
	// 8226 
cs=0x1e67;eip=0x000f4b; 	X(ADD(word_428a6, 8));	// 59517 add     word_428A6, 8 ;~ 1E67:0F4B
cs=0x1e67;eip=0x000f50; 	X(MOV(word_428ba, 0));	// 59518 mov     word_428BA, 0 ;~ 1E67:0F50
cs=0x1e67;eip=0x000f56; 	T(MOV(ax, word_428a2));	// 59519 mov     ax, word_428A2 ;~ 1E67:0F56
cs=0x1e67;eip=0x000f59; 	T(OR(ax, word_428a8));	// 59520 or      ax, word_428A8 ;~ 1E67:0F59
cs=0x1e67;eip=0x000f5d; 	J(JZ(loc_2dbc2));	// 59521 jz      short loc_2DBC2 ;~ 1E67:0F5D
cs=0x1e67;eip=0x000f5f; 	X(PUSH(*(dw*)(raddr(ss,bp-2))));	// 59522 push    word ptr [bp-2] ;~ 1E67:0F5F
cs=0x1e67;eip=0x000f62; 	J(CALLF(__dispatch_call,off_3ef94));	// 59523 call    off_3EF94 ;~ 1E67:0F62
cs=0x1e67;eip=0x000f66; 	T(ADD(sp, 2));	// 59524 add     sp, 2 ;~ 1E67:0F66
cs=0x1e67;eip=0x000f69; 	T(OR(ax, ax));	// 59525 or      ax, ax ;~ 1E67:0F69
cs=0x1e67;eip=0x000f6b; 	J(JZ(loc_2dbc2));	// 59526 jz      short loc_2DBC2 ;~ 1E67:0F6B
cs=0x1e67;eip=0x000f6d; 	T(MOV(ax, 1));	// 59527 mov     ax, 1 ;~ 1E67:0F6D
cs=0x1e67;eip=0x000f70; 	J(JMP(loc_2dbc4));	// 59528 jmp     short loc_2DBC4 ;~ 1E67:0F70
loc_2dbc2:
	// 8227 
cs=0x1e67;eip=0x000f72; 	T(SUB(ax, ax));	// 59533 sub     ax, ax ;~ 1E67:0F72
loc_2dbc4:
	// 8228 
cs=0x1e67;eip=0x000f74; 	X(PUSH(ax));	// 59536 push    ax ;~ 1E67:0F74
cs=0x1e67;eip=0x000f75; 	X(PUSH(cs));	// 59537 push    cs ;~ 1E67:0F75
cs=0x1e67;eip=0x000f76; 	J(CALL(_out,0));	// 59538 call    near ptr _out ;~ 1E67:0F76
cs=0x1e67;eip=0x000f79; 	T(MOV(sp, bp));	// 59539 mov     sp, bp ;~ 1E67:0F79
cs=0x1e67;eip=0x000f7b; 	X(POP(bp));	// 59540 pop     bp ;~ 1E67:0F7B
cs=0x1e67;eip=0x000f7c; 	J(RETF(0));	// 59541 retf ;~ 1E67:0F7C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_2db82: 	goto loc_2db82;
        case m2c::kloc_2db9b: 	goto loc_2db9b;
        case m2c::kloc_2dbc2: 	goto loc_2dbc2;
        case m2c::kloc_2dbc4: 	goto loc_2dbc4;
        case m2c::kseg010_f17_proc: 	goto seg010_f17_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _outc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _outc:
    _begin:
#undef arg_0
#define arg_0 6
	// 59552 arg_0           = dword ptr  6 ;~ 1E67:0F7E
cs=0x1e67;eip=0x000f7e; 	X(PUSH(bp));	// 59554 push    bp ;~ 1E67:0F7E
cs=0x1e67;eip=0x000f7f; 	T(MOV(bp, sp));	// 59555 mov     bp, sp ;~ 1E67:0F7F
cs=0x1e67;eip=0x000f81; 	X(PUSH(si));	// 59556 push    si              ; FILE * ;~ 1E67:0F81
cs=0x1e67;eip=0x000f82; 	T(CMP(word_428b0, 0));	// 59557 cmp     word_428B0, 0 ;~ 1E67:0F82
cs=0x1e67;eip=0x000f87; 	J(JNZ(loc_2dc0a));	// 59558 jnz     short loc_2DC0A ;~ 1E67:0F87
cs=0x1e67;eip=0x000f89; 	T(MOV(bx, off_4289a));	// 59559 mov     bx, off_4289A ;~ 1E67:0F89
cs=0x1e67;eip=0x000f8d; 	X(DEC(*(dw*)(raddr(ds,bx+2))));	// 59560 dec     word ptr [bx+2] ;~ 1E67:0F8D
cs=0x1e67;eip=0x000f90; 	J(JS(loc_2dbf0));	// 59561 js      short loc_2DBF0 ;~ 1E67:0F90
cs=0x1e67;eip=0x000f92; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0))));	// 59562 mov     al, byte ptr [bp+arg_0] ;~ 1E67:0F92
cs=0x1e67;eip=0x000f95; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 59563 mov     si, [bx] ;~ 1E67:0F95
cs=0x1e67;eip=0x000f97; 	X(INC(*(dw*)(raddr(ds,bx))));	// 59564 inc     word ptr [bx] ;~ 1E67:0F97
cs=0x1e67;eip=0x000f99; 	X(MOV(*(raddr(ds,si)), al));	// 59565 mov     [si], al ;~ 1E67:0F99
cs=0x1e67;eip=0x000f9b; 	T(SUB(ah, ah));	// 59566 sub     ah, ah ;~ 1E67:0F9B
cs=0x1e67;eip=0x000f9d; 	J(JMP(loc_2dbfc));	// 59567 jmp     short loc_2DBFC ;~ 1E67:0F9D
loc_2dbf0:
	// 8229 
cs=0x1e67;eip=0x000fa0; 	X(PUSH(bx));	// 59572 push    bx              ; FILE * ;~ 1E67:0FA0
cs=0x1e67;eip=0x000fa1; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 59573 push    word ptr [bp+arg_0] ; int ;~ 1E67:0FA1
cs=0x1e67;eip=0x000fa4; 	J(CALLF(__flsbuf,0));	// 59574 call    __flsbuf ;~ 1E67:0FA4
cs=0x1e67;eip=0x000fa9; 	T(ADD(sp, 4));	// 59575 add     sp, 4 ;~ 1E67:0FA9
loc_2dbfc:
	// 8230 
cs=0x1e67;eip=0x000fac; 	T(INC(ax));	// 59578 inc     ax ;~ 1E67:0FAC
cs=0x1e67;eip=0x000fad; 	J(JNZ(loc_2dc06));	// 59579 jnz     short loc_2DC06 ;~ 1E67:0FAD
cs=0x1e67;eip=0x000faf; 	X(INC(word_428b0));	// 59580 inc     word_428B0 ;~ 1E67:0FAF
cs=0x1e67;eip=0x000fb3; 	J(JMP(loc_2dc0a));	// 59581 jmp     short loc_2DC0A ;~ 1E67:0FB3
loc_2dc06:
	// 8231 
cs=0x1e67;eip=0x000fb6; 	X(INC(word_428ae));	// 59586 inc     word_428AE ;~ 1E67:0FB6
loc_2dc0a:
	// 8232 
cs=0x1e67;eip=0x000fba; 	X(POP(si));	// 59590 pop     si ;~ 1E67:0FBA
cs=0x1e67;eip=0x000fbb; 	X(POP(bp));	// 59591 pop     bp ;~ 1E67:0FBB
cs=0x1e67;eip=0x000fbc; 	J(RETF(0));	// 59592 retf ;~ 1E67:0FBC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_outc: 	goto _outc;
        case m2c::kloc_2dbf0: 	goto loc_2dbf0;
        case m2c::kloc_2dbfc: 	goto loc_2dbfc;
        case m2c::kloc_2dc06: 	goto loc_2dc06;
        case m2c::kloc_2dc0a: 	goto loc_2dc0a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool putpad(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    putpad:
    _begin:
#undef arg_0
#define arg_0 6
	// 59605 arg_0           = word ptr  6 ;~ 1E67:0FBE
cs=0x1e67;eip=0x000fbe; 	X(PUSH(bp));	// 59607 push    bp ;~ 1E67:0FBE
cs=0x1e67;eip=0x000fbf; 	T(MOV(bp, sp));	// 59608 mov     bp, sp ;~ 1E67:0FBF
cs=0x1e67;eip=0x000fc1; 	T(SUB(sp, 2));	// 59609 sub     sp, 2 ;~ 1E67:0FC1
cs=0x1e67;eip=0x000fc4; 	X(PUSH(di));	// 59610 push    di ;~ 1E67:0FC4
cs=0x1e67;eip=0x000fc5; 	X(PUSH(si));	// 59611 push    si ;~ 1E67:0FC5
cs=0x1e67;eip=0x000fc6; 	T(CMP(word_428b0, 0));	// 59612 cmp     word_428B0, 0 ;~ 1E67:0FC6
cs=0x1e67;eip=0x000fcb; 	J(JNZ(loc_2dc68));	// 59613 jnz     short loc_2DC68 ;~ 1E67:0FCB
cs=0x1e67;eip=0x000fcd; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 59614 mov     si, [bp+arg_0] ;~ 1E67:0FCD
cs=0x1e67;eip=0x000fd0; 	T(OR(si, si));	// 59615 or      si, si ;~ 1E67:0FD0
cs=0x1e67;eip=0x000fd2; 	J(JLE(loc_2dc68));	// 59616 jle     short loc_2DC68 ;~ 1E67:0FD2
cs=0x1e67;eip=0x000fd4; 	J(JMP(loc_2dc3d));	// 59617 jmp     short loc_2DC3D ;~ 1E67:0FD4
loc_2dc26:
	// 8233 
cs=0x1e67;eip=0x000fd6; 	X(PUSH(off_4289a));	// 59621 push    off_4289A       ; FILE * ;~ 1E67:0FD6
cs=0x1e67;eip=0x000fda; 	X(PUSH(word_428bc));	// 59622 push    word_428BC      ; int ;~ 1E67:0FDA
cs=0x1e67;eip=0x000fde; 	J(CALLF(__flsbuf,0));	// 59623 call    __flsbuf ;~ 1E67:0FDE
cs=0x1e67;eip=0x000fe3; 	T(ADD(sp, 4));	// 59624 add     sp, 4 ;~ 1E67:0FE3
loc_2dc36:
	// 8234 
cs=0x1e67;eip=0x000fe6; 	T(INC(ax));	// 59627 inc     ax ;~ 1E67:0FE6
cs=0x1e67;eip=0x000fe7; 	J(JNZ(loc_2dc3d));	// 59628 jnz     short loc_2DC3D ;~ 1E67:0FE7
cs=0x1e67;eip=0x000fe9; 	X(INC(word_428b0));	// 59629 inc     word_428B0 ;~ 1E67:0FE9
loc_2dc3d:
	// 8235 
cs=0x1e67;eip=0x000fed; 	T(MOV(ax, si));	// 59633 mov     ax, si ;~ 1E67:0FED
cs=0x1e67;eip=0x000fef; 	T(DEC(si));	// 59634 dec     si ;~ 1E67:0FEF
cs=0x1e67;eip=0x000ff0; 	T(OR(ax, ax));	// 59635 or      ax, ax ;~ 1E67:0FF0
cs=0x1e67;eip=0x000ff2; 	J(JLE(loc_2dc5a));	// 59636 jle     short loc_2DC5A ;~ 1E67:0FF2
cs=0x1e67;eip=0x000ff4; 	T(MOV(bx, off_4289a));	// 59637 mov     bx, off_4289A ;~ 1E67:0FF4
cs=0x1e67;eip=0x000ff8; 	X(DEC(*(dw*)(raddr(ds,bx+2))));	// 59638 dec     word ptr [bx+2] ;~ 1E67:0FF8
cs=0x1e67;eip=0x000ffb; 	J(JS(loc_2dc26));	// 59639 js      short loc_2DC26 ;~ 1E67:0FFB
cs=0x1e67;eip=0x000ffd; 	T(MOV(al, *(db*)(((db*)&word_428bc))));	// 59640 mov     al, byte ptr word_428BC ;~ 1E67:0FFD
cs=0x1e67;eip=0x001000; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 59641 mov     di, [bx] ;~ 1E67:1000
cs=0x1e67;eip=0x001002; 	X(INC(*(dw*)(raddr(ds,bx))));	// 59642 inc     word ptr [bx] ;~ 1E67:1002
cs=0x1e67;eip=0x001004; 	X(MOV(*(raddr(ds,di)), al));	// 59643 mov     [di], al ;~ 1E67:1004
cs=0x1e67;eip=0x001006; 	T(SUB(ah, ah));	// 59644 sub     ah, ah ;~ 1E67:1006
cs=0x1e67;eip=0x001008; 	J(JMP(loc_2dc36));	// 59645 jmp     short loc_2DC36 ;~ 1E67:1008
loc_2dc5a:
	// 8236 
cs=0x1e67;eip=0x00100a; 	T(CMP(word_428b0, 0));	// 59649 cmp     word_428B0, 0 ;~ 1E67:100A
cs=0x1e67;eip=0x00100f; 	J(JNZ(loc_2dc68));	// 59650 jnz     short loc_2DC68 ;~ 1E67:100F
cs=0x1e67;eip=0x001011; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 59651 mov     ax, [bp+arg_0] ;~ 1E67:1011
cs=0x1e67;eip=0x001014; 	X(ADD(word_428ae, ax));	// 59652 add     word_428AE, ax ;~ 1E67:1014
loc_2dc68:
	// 8237 
cs=0x1e67;eip=0x001018; 	X(POP(si));	// 59656 pop     si ;~ 1E67:1018
cs=0x1e67;eip=0x001019; 	X(POP(di));	// 59657 pop     di ;~ 1E67:1019
cs=0x1e67;eip=0x00101a; 	T(MOV(sp, bp));	// 59658 mov     sp, bp ;~ 1E67:101A
cs=0x1e67;eip=0x00101c; 	X(POP(bp));	// 59659 pop     bp ;~ 1E67:101C
cs=0x1e67;eip=0x00101d; 	J(RETF(0));	// 59660 retf ;~ 1E67:101D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_2dc26: 	goto loc_2dc26;
        case m2c::kloc_2dc36: 	goto loc_2dc36;
        case m2c::kloc_2dc3d: 	goto loc_2dc3d;
        case m2c::kloc_2dc5a: 	goto loc_2dc5a;
        case m2c::kloc_2dc68: 	goto loc_2dc68;
        case m2c::kputpad: 	goto putpad;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool putbuf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    putbuf:
    _begin:
#undef arg_0
#define arg_0 6
	// 59671 arg_0           = dword ptr  6 ;~ 1E67:101E
#undef arg_4
#define arg_4 0x0A
	// 59672 arg_4           = word ptr  0Ah ;~ 1E67:101E
cs=0x1e67;eip=0x00101e; 	X(PUSH(bp));	// 59674 push    bp ;~ 1E67:101E
cs=0x1e67;eip=0x00101f; 	T(MOV(bp, sp));	// 59675 mov     bp, sp ;~ 1E67:101F
cs=0x1e67;eip=0x001021; 	T(SUB(sp, 2));	// 59676 sub     sp, 2 ;~ 1E67:1021
cs=0x1e67;eip=0x001024; 	X(PUSH(di));	// 59677 push    di ;~ 1E67:1024
cs=0x1e67;eip=0x001025; 	X(PUSH(si));	// 59678 push    si ;~ 1E67:1025
cs=0x1e67;eip=0x001026; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 59679 mov     si, [bp+arg_4] ;~ 1E67:1026
cs=0x1e67;eip=0x001029; 	T(CMP(word_428b0, 0));	// 59680 cmp     word_428B0, 0 ;~ 1E67:1029
cs=0x1e67;eip=0x00102e; 	J(JNZ(loc_2dcd2));	// 59681 jnz     short loc_2DCD2 ;~ 1E67:102E
cs=0x1e67;eip=0x001030; 	J(JMP(loc_2dca0));	// 59682 jmp     short loc_2DCA0 ;~ 1E67:1030
loc_2dc82:
	// 8238 
cs=0x1e67;eip=0x001032; 	X(PUSH(off_4289a));	// 59686 push    off_4289A       ; FILE * ;~ 1E67:1032
cs=0x1e67;eip=0x001036; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 59687 les     bx, [bp+arg_0] ;~ 1E67:1036
cs=0x1e67;eip=0x001039; 	T(MOV(al, *(raddr(es,bx))));	// 59688 mov     al, es:[bx] ;~ 1E67:1039
cs=0x1e67;eip=0x00103c; 	T(CBW);	// 59689 cbw ;~ 1E67:103C
cs=0x1e67;eip=0x00103d; 	X(PUSH(ax));	// 59690 push    ax              ; int ;~ 1E67:103D
cs=0x1e67;eip=0x00103e; 	J(CALLF(__flsbuf,0));	// 59691 call    __flsbuf ;~ 1E67:103E
cs=0x1e67;eip=0x001043; 	T(ADD(sp, 4));	// 59692 add     sp, 4 ;~ 1E67:1043
loc_2dc96:
	// 8239 
cs=0x1e67;eip=0x001046; 	T(INC(ax));	// 59695 inc     ax ;~ 1E67:1046
cs=0x1e67;eip=0x001047; 	J(JNZ(loc_2dc9d));	// 59696 jnz     short loc_2DC9D ;~ 1E67:1047
cs=0x1e67;eip=0x001049; 	X(INC(word_428b0));	// 59697 inc     word_428B0 ;~ 1E67:1049
loc_2dc9d:
	// 8240 
cs=0x1e67;eip=0x00104d; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 59700 inc     word ptr [bp+arg_0] ;~ 1E67:104D
loc_2dca0:
	// 8241 
cs=0x1e67;eip=0x001050; 	T(MOV(ax, si));	// 59703 mov     ax, si ;~ 1E67:1050
cs=0x1e67;eip=0x001052; 	T(DEC(si));	// 59704 dec     si ;~ 1E67:1052
cs=0x1e67;eip=0x001053; 	T(OR(ax, ax));	// 59705 or      ax, ax ;~ 1E67:1053
cs=0x1e67;eip=0x001055; 	J(JZ(loc_2dcc4));	// 59706 jz      short loc_2DCC4 ;~ 1E67:1055
cs=0x1e67;eip=0x001057; 	T(MOV(bx, off_4289a));	// 59707 mov     bx, off_4289A ;~ 1E67:1057
cs=0x1e67;eip=0x00105b; 	X(DEC(*(dw*)(raddr(ds,bx+2))));	// 59708 dec     word ptr [bx+2] ;~ 1E67:105B
cs=0x1e67;eip=0x00105e; 	J(JS(loc_2dc82));	// 59709 js      short loc_2DC82 ;~ 1E67:105E
cs=0x1e67;eip=0x001060; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 59710 les     bx, [bp+arg_0] ;~ 1E67:1060
cs=0x1e67;eip=0x001063; 	T(MOV(al, *(raddr(es,bx))));	// 59711 mov     al, es:[bx] ;~ 1E67:1063
cs=0x1e67;eip=0x001066; 	T(MOV(bx, off_4289a));	// 59712 mov     bx, off_4289A ;~ 1E67:1066
cs=0x1e67;eip=0x00106a; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 59713 mov     di, [bx] ;~ 1E67:106A
cs=0x1e67;eip=0x00106c; 	X(INC(*(dw*)(raddr(ds,bx))));	// 59714 inc     word ptr [bx] ;~ 1E67:106C
cs=0x1e67;eip=0x00106e; 	X(MOV(*(raddr(ds,di)), al));	// 59715 mov     [di], al ;~ 1E67:106E
cs=0x1e67;eip=0x001070; 	T(SUB(ah, ah));	// 59716 sub     ah, ah ;~ 1E67:1070
cs=0x1e67;eip=0x001072; 	J(JMP(loc_2dc96));	// 59717 jmp     short loc_2DC96 ;~ 1E67:1072
loc_2dcc4:
	// 8242 
cs=0x1e67;eip=0x001074; 	T(CMP(word_428b0, 0));	// 59721 cmp     word_428B0, 0 ;~ 1E67:1074
cs=0x1e67;eip=0x001079; 	J(JNZ(loc_2dcd2));	// 59722 jnz     short loc_2DCD2 ;~ 1E67:1079
cs=0x1e67;eip=0x00107b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 59723 mov     ax, [bp+arg_4] ;~ 1E67:107B
cs=0x1e67;eip=0x00107e; 	X(ADD(word_428ae, ax));	// 59724 add     word_428AE, ax ;~ 1E67:107E
loc_2dcd2:
	// 8243 
cs=0x1e67;eip=0x001082; 	X(POP(si));	// 59728 pop     si ;~ 1E67:1082
cs=0x1e67;eip=0x001083; 	X(POP(di));	// 59729 pop     di ;~ 1E67:1083
cs=0x1e67;eip=0x001084; 	T(MOV(sp, bp));	// 59730 mov     sp, bp ;~ 1E67:1084
cs=0x1e67;eip=0x001086; 	X(POP(bp));	// 59731 pop     bp ;~ 1E67:1086
cs=0x1e67;eip=0x001087; 	J(RETF(0));	// 59732 retf ;~ 1E67:1087

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_2dc82: 	goto loc_2dc82;
        case m2c::kloc_2dc96: 	goto loc_2dc96;
        case m2c::kloc_2dc9d: 	goto loc_2dc9d;
        case m2c::kloc_2dca0: 	goto loc_2dca0;
        case m2c::kloc_2dcc4: 	goto loc_2dcc4;
        case m2c::kloc_2dcd2: 	goto loc_2dcd2;
        case m2c::kputbuf: 	goto putbuf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _out(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _out:
    _begin:
#undef var_8
#define var_8 -8
	// 59743 var_8           = word ptr -8 ;~ 1E67:1088
#undef var_6
#define var_6 -6
	// 59744 var_6           = word ptr -6 ;~ 1E67:1088
#undef var_4
#define var_4 -4
	// 59745 var_4           = word ptr -4 ;~ 1E67:1088
#undef arg_0
#define arg_0 6
	// 59746 arg_0           = word ptr  6 ;~ 1E67:1088
cs=0x1e67;eip=0x001088; 	X(PUSH(bp));	// 59748 push    bp ;~ 1E67:1088
cs=0x1e67;eip=0x001089; 	T(MOV(bp, sp));	// 59749 mov     bp, sp ;~ 1E67:1089
cs=0x1e67;eip=0x00108b; 	T(SUB(sp, 0x0A));	// 59750 sub     sp, 0Ah ;~ 1E67:108B
cs=0x1e67;eip=0x00108e; 	X(PUSH(di));	// 59751 push    di ;~ 1E67:108E
cs=0x1e67;eip=0x00108f; 	X(PUSH(si));	// 59752 push    si ;~ 1E67:108F
cs=0x1e67;eip=0x001090; 	T(MOV(si, off_428b6));	// 59753 mov     si, off_428B6 ;~ 1E67:1090
cs=0x1e67;eip=0x001094; 	T(SUB(ax, ax));	// 59754 sub     ax, ax ;~ 1E67:1094
cs=0x1e67;eip=0x001096; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 59755 mov     [bp+var_4], ax ;~ 1E67:1096
cs=0x1e67;eip=0x001099; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 59756 mov     [bp+var_6], ax ;~ 1E67:1099
cs=0x1e67;eip=0x00109c; 	T(CMP(word_428bc, 0x30));	// 59757 cmp     word_428BC, 30h ; '0' ;~ 1E67:109C
cs=0x1e67;eip=0x0010a1; 	J(JNZ(loc_2dd0b));	// 59758 jnz     short loc_2DD0B ;~ 1E67:10A1
cs=0x1e67;eip=0x0010a3; 	T(CMP(word_428aa, ax));	// 59759 cmp     word_428AA, ax ;~ 1E67:10A3
cs=0x1e67;eip=0x0010a7; 	J(JZ(loc_2dd0b));	// 59760 jz      short loc_2DD0B ;~ 1E67:10A7
cs=0x1e67;eip=0x0010a9; 	T(CMP(word_4289c, ax));	// 59761 cmp     word_4289C, ax ;~ 1E67:10A9
cs=0x1e67;eip=0x0010ad; 	J(JZ(loc_2dd05));	// 59762 jz      short loc_2DD05 ;~ 1E67:10AD
cs=0x1e67;eip=0x0010af; 	T(CMP(word_428b4, ax));	// 59763 cmp     word_428B4, ax ;~ 1E67:10AF
cs=0x1e67;eip=0x0010b3; 	J(JNZ(loc_2dd0b));	// 59764 jnz     short loc_2DD0B ;~ 1E67:10B3
loc_2dd05:
	// 8244 
cs=0x1e67;eip=0x0010b5; 	X(MOV(word_428bc, 0x20));	// 59767 mov     word_428BC, 20h ; ' ' ;~ 1E67:10B5
loc_2dd0b:
	// 8245 
cs=0x1e67;eip=0x0010bb; 	T(MOV(di, word_428b8));	// 59771 mov     di, word_428B8 ;~ 1E67:10BB
cs=0x1e67;eip=0x0010bf; 	X(PUSH(si));	// 59772 push    si              ; char * ;~ 1E67:10BF
cs=0x1e67;eip=0x0010c0; 	J(CALLF(_strlen,0));	// 59773 call    _strlen ;~ 1E67:10C0
cs=0x1e67;eip=0x0010c5; 	T(ADD(sp, 2));	// 59774 add     sp, 2 ;~ 1E67:10C5
cs=0x1e67;eip=0x0010c8; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 59775 mov     [bp+var_8], ax ;~ 1E67:10C8
cs=0x1e67;eip=0x0010cb; 	T(SUB(di, ax));	// 59776 sub     di, ax ;~ 1E67:10CB
cs=0x1e67;eip=0x0010cd; 	T(SUB(di, *(dw*)(raddr(ss,bp+arg_0))));	// 59777 sub     di, [bp+arg_0] ;~ 1E67:10CD
cs=0x1e67;eip=0x0010d0; 	T(CMP(word_428a4, 0));	// 59778 cmp     word_428A4, 0 ;~ 1E67:10D0
cs=0x1e67;eip=0x0010d5; 	J(JNZ(loc_2dd40));	// 59779 jnz     short loc_2DD40 ;~ 1E67:10D5
cs=0x1e67;eip=0x0010d7; 	T(CMP(*(raddr(ds,si)), 0x2D));	// 59780 cmp     byte ptr [si], 2Dh ; '-' ;~ 1E67:10D7
cs=0x1e67;eip=0x0010da; 	J(JNZ(loc_2dd40));	// 59781 jnz     short loc_2DD40 ;~ 1E67:10DA
cs=0x1e67;eip=0x0010dc; 	T(CMP(word_428bc, 0x30));	// 59782 cmp     word_428BC, 30h ; '0' ;~ 1E67:10DC
cs=0x1e67;eip=0x0010e1; 	J(JNZ(loc_2dd40));	// 59783 jnz     short loc_2DD40 ;~ 1E67:10E1
cs=0x1e67;eip=0x0010e3; 	T(LODSB);	// 59784 lodsb ;~ 1E67:10E3
cs=0x1e67;eip=0x0010e4; 	T(CBW);	// 59785 cbw ;~ 1E67:10E4
cs=0x1e67;eip=0x0010e5; 	X(PUSH(ax));	// 59786 push    ax ;~ 1E67:10E5
cs=0x1e67;eip=0x0010e6; 	X(PUSH(cs));	// 59787 push    cs ;~ 1E67:10E6
cs=0x1e67;eip=0x0010e7; 	J(CALL(_outc,0));	// 59788 call    near ptr _outc ;~ 1E67:10E7
cs=0x1e67;eip=0x0010ea; 	T(ADD(sp, 2));	// 59789 add     sp, 2 ;~ 1E67:10EA
cs=0x1e67;eip=0x0010ed; 	X(DEC(*(dw*)(raddr(ss,bp+var_8))));	// 59790 dec     [bp+var_8] ;~ 1E67:10ED
loc_2dd40:
	// 8246 
cs=0x1e67;eip=0x0010f0; 	T(CMP(word_428bc, 0x30));	// 59794 cmp     word_428BC, 30h ; '0' ;~ 1E67:10F0
cs=0x1e67;eip=0x0010f5; 	J(JZ(loc_2dd52));	// 59795 jz      short loc_2DD52 ;~ 1E67:10F5
cs=0x1e67;eip=0x0010f7; 	T(OR(di, di));	// 59796 or      di, di ;~ 1E67:10F7
cs=0x1e67;eip=0x0010f9; 	J(JLE(loc_2dd52));	// 59797 jle     short loc_2DD52 ;~ 1E67:10F9
cs=0x1e67;eip=0x0010fb; 	T(CMP(word_428a4, 0));	// 59798 cmp     word_428A4, 0 ;~ 1E67:10FB
cs=0x1e67;eip=0x001100; 	J(JZ(loc_2dd6d));	// 59799 jz      short loc_2DD6D ;~ 1E67:1100
loc_2dd52:
	// 8247 
cs=0x1e67;eip=0x001102; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 59803 cmp     [bp+arg_0], 0 ;~ 1E67:1102
cs=0x1e67;eip=0x001106; 	J(JZ(loc_2dd5f));	// 59804 jz      short loc_2DD5F ;~ 1E67:1106
cs=0x1e67;eip=0x001108; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 59805 inc     [bp+var_6] ;~ 1E67:1108
cs=0x1e67;eip=0x00110b; 	X(PUSH(cs));	// 59806 push    cs ;~ 1E67:110B
cs=0x1e67;eip=0x00110c; 	J(CALL(putsign,0));	// 59807 call    near ptr putsign ;~ 1E67:110C
loc_2dd5f:
	// 8248 
cs=0x1e67;eip=0x00110f; 	T(CMP(word_428ba, 0));	// 59810 cmp     word_428BA, 0 ;~ 1E67:110F
cs=0x1e67;eip=0x001114; 	J(JZ(loc_2dd6d));	// 59811 jz      short loc_2DD6D ;~ 1E67:1114
cs=0x1e67;eip=0x001116; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 59812 inc     [bp+var_4] ;~ 1E67:1116
cs=0x1e67;eip=0x001119; 	X(PUSH(cs));	// 59813 push    cs ;~ 1E67:1119
cs=0x1e67;eip=0x00111a; 	J(CALL(putprefix,0));	// 59814 call    near ptr putprefix ;~ 1E67:111A
loc_2dd6d:
	// 8249 
cs=0x1e67;eip=0x00111d; 	T(CMP(word_428a4, 0));	// 59818 cmp     word_428A4, 0 ;~ 1E67:111D
cs=0x1e67;eip=0x001122; 	J(JNZ(loc_2dd9d));	// 59819 jnz     short loc_2DD9D ;~ 1E67:1122
cs=0x1e67;eip=0x001124; 	X(PUSH(di));	// 59820 push    di ;~ 1E67:1124
cs=0x1e67;eip=0x001125; 	X(PUSH(cs));	// 59821 push    cs ;~ 1E67:1125
cs=0x1e67;eip=0x001126; 	J(CALL(putpad,0));	// 59822 call    near ptr putpad ;~ 1E67:1126
cs=0x1e67;eip=0x001129; 	T(ADD(sp, 2));	// 59823 add     sp, 2 ;~ 1E67:1129
cs=0x1e67;eip=0x00112c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 59824 cmp     [bp+arg_0], 0 ;~ 1E67:112C
cs=0x1e67;eip=0x001130; 	J(JZ(loc_2dd8c));	// 59825 jz      short loc_2DD8C ;~ 1E67:1130
cs=0x1e67;eip=0x001132; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0));	// 59826 cmp     [bp+var_6], 0 ;~ 1E67:1132
cs=0x1e67;eip=0x001136; 	J(JNZ(loc_2dd8c));	// 59827 jnz     short loc_2DD8C ;~ 1E67:1136
cs=0x1e67;eip=0x001138; 	X(PUSH(cs));	// 59828 push    cs ;~ 1E67:1138
cs=0x1e67;eip=0x001139; 	J(CALL(putsign,0));	// 59829 call    near ptr putsign ;~ 1E67:1139
loc_2dd8c:
	// 8250 
cs=0x1e67;eip=0x00113c; 	T(CMP(word_428ba, 0));	// 59833 cmp     word_428BA, 0 ;~ 1E67:113C
cs=0x1e67;eip=0x001141; 	J(JZ(loc_2dd9d));	// 59834 jz      short loc_2DD9D ;~ 1E67:1141
cs=0x1e67;eip=0x001143; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 59835 cmp     [bp+var_4], 0 ;~ 1E67:1143
cs=0x1e67;eip=0x001147; 	J(JNZ(loc_2dd9d));	// 59836 jnz     short loc_2DD9D ;~ 1E67:1147
cs=0x1e67;eip=0x001149; 	X(PUSH(cs));	// 59837 push    cs ;~ 1E67:1149
cs=0x1e67;eip=0x00114a; 	J(CALL(putprefix,0));	// 59838 call    near ptr putprefix ;~ 1E67:114A
loc_2dd9d:
	// 8251 
cs=0x1e67;eip=0x00114d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 59842 push    [bp+var_8] ;~ 1E67:114D
cs=0x1e67;eip=0x001150; 	X(PUSH(ds));	// 59843 push    ds ;~ 1E67:1150
cs=0x1e67;eip=0x001151; 	X(PUSH(si));	// 59844 push    si ;~ 1E67:1151
cs=0x1e67;eip=0x001152; 	X(PUSH(cs));	// 59845 push    cs ;~ 1E67:1152
cs=0x1e67;eip=0x001153; 	J(CALL(putbuf,0));	// 59846 call    near ptr putbuf ;~ 1E67:1153
cs=0x1e67;eip=0x001156; 	T(ADD(sp, 6));	// 59847 add     sp, 6 ;~ 1E67:1156
cs=0x1e67;eip=0x001159; 	T(CMP(word_428a4, 0));	// 59848 cmp     word_428A4, 0 ;~ 1E67:1159
cs=0x1e67;eip=0x00115e; 	J(JZ(loc_2ddbe));	// 59849 jz      short loc_2DDBE ;~ 1E67:115E
cs=0x1e67;eip=0x001160; 	X(MOV(word_428bc, 0x20));	// 59850 mov     word_428BC, 20h ; ' ' ;~ 1E67:1160
cs=0x1e67;eip=0x001166; 	X(PUSH(di));	// 59851 push    di ;~ 1E67:1166
cs=0x1e67;eip=0x001167; 	X(PUSH(cs));	// 59852 push    cs ;~ 1E67:1167
cs=0x1e67;eip=0x001168; 	J(CALL(putpad,0));	// 59853 call    near ptr putpad ;~ 1E67:1168
cs=0x1e67;eip=0x00116b; 	T(ADD(sp, 2));	// 59854 add     sp, 2 ;~ 1E67:116B
loc_2ddbe:
	// 8252 
cs=0x1e67;eip=0x00116e; 	X(POP(si));	// 59857 pop     si ;~ 1E67:116E
cs=0x1e67;eip=0x00116f; 	X(POP(di));	// 59858 pop     di ;~ 1E67:116F
cs=0x1e67;eip=0x001170; 	T(MOV(sp, bp));	// 59859 mov     sp, bp ;~ 1E67:1170
cs=0x1e67;eip=0x001172; 	X(POP(bp));	// 59860 pop     bp ;~ 1E67:1172
cs=0x1e67;eip=0x001173; 	J(RETF(0));	// 59861 retf ;~ 1E67:1173

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_out: 	goto _out;
        case m2c::kloc_2dd05: 	goto loc_2dd05;
        case m2c::kloc_2dd0b: 	goto loc_2dd0b;
        case m2c::kloc_2dd40: 	goto loc_2dd40;
        case m2c::kloc_2dd52: 	goto loc_2dd52;
        case m2c::kloc_2dd5f: 	goto loc_2dd5f;
        case m2c::kloc_2dd6d: 	goto loc_2dd6d;
        case m2c::kloc_2dd8c: 	goto loc_2dd8c;
        case m2c::kloc_2dd9d: 	goto loc_2dd9d;
        case m2c::kloc_2ddbe: 	goto loc_2ddbe;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool putsign(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    putsign:
    _begin:
cs=0x1e67;eip=0x001174; 	T(CMP(word_428a2, 0));	// 59871 cmp     word_428A2, 0 ;~ 1E67:1174
cs=0x1e67;eip=0x001179; 	J(JZ(loc_2ddd0));	// 59872 jz      short loc_2DDD0 ;~ 1E67:1179
cs=0x1e67;eip=0x00117b; 	T(MOV(ax, 0x2B));	// 59873 mov     ax, 2Bh ; '+' ;~ 1E67:117B
cs=0x1e67;eip=0x00117e; 	J(JMP(loc_2ddd3));	// 59874 jmp     short loc_2DDD3 ;~ 1E67:117E
loc_2ddd0:
	// 8253 
cs=0x1e67;eip=0x001180; 	T(MOV(ax, 0x20));	// 59878 mov     ax, 20h ; ' ' ;~ 1E67:1180
loc_2ddd3:
	// 8254 
cs=0x1e67;eip=0x001183; 	X(PUSH(ax));	// 59881 push    ax ;~ 1E67:1183
cs=0x1e67;eip=0x001184; 	X(PUSH(cs));	// 59882 push    cs ;~ 1E67:1184
cs=0x1e67;eip=0x001185; 	J(CALL(_outc,0));	// 59883 call    near ptr _outc ;~ 1E67:1185
cs=0x1e67;eip=0x001188; 	T(ADD(sp, 2));	// 59884 add     sp, 2 ;~ 1E67:1188
cs=0x1e67;eip=0x00118b; 	J(RETF(0));	// 59885 retf ;~ 1E67:118B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_2ddd0: 	goto loc_2ddd0;
        case m2c::kloc_2ddd3: 	goto loc_2ddd3;
        case m2c::kputsign: 	goto putsign;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool putprefix(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    putprefix:
    _begin:
cs=0x1e67;eip=0x00118c; 	T(MOV(ax, 0x30));	// 59895 mov     ax, 30h ; '0' ;~ 1E67:118C
cs=0x1e67;eip=0x00118f; 	X(PUSH(ax));	// 59896 push    ax ;~ 1E67:118F
cs=0x1e67;eip=0x001190; 	X(PUSH(cs));	// 59897 push    cs ;~ 1E67:1190
cs=0x1e67;eip=0x001191; 	J(CALL(_outc,0));	// 59898 call    near ptr _outc ;~ 1E67:1191
cs=0x1e67;eip=0x001194; 	T(ADD(sp, 2));	// 59899 add     sp, 2 ;~ 1E67:1194
cs=0x1e67;eip=0x001197; 	T(CMP(word_428ba, 0x10));	// 59900 cmp     word_428BA, 10h ;~ 1E67:1197
cs=0x1e67;eip=0x00119c; 	J(JNZ(locret_2de05));	// 59901 jnz     short locret_2DE05 ;~ 1E67:119C
cs=0x1e67;eip=0x00119e; 	T(CMP(word_4289e, 0));	// 59902 cmp     word_4289E, 0 ;~ 1E67:119E
cs=0x1e67;eip=0x0011a3; 	J(JZ(loc_2ddfa));	// 59903 jz      short loc_2DDFA ;~ 1E67:11A3
cs=0x1e67;eip=0x0011a5; 	T(MOV(ax, 0x58));	// 59904 mov     ax, 58h ; 'X' ;~ 1E67:11A5
cs=0x1e67;eip=0x0011a8; 	J(JMP(loc_2ddfd));	// 59905 jmp     short loc_2DDFD ;~ 1E67:11A8
loc_2ddfa:
	// 8255 
cs=0x1e67;eip=0x0011aa; 	T(MOV(ax, 0x78));	// 59909 mov     ax, 78h ; 'x' ;~ 1E67:11AA
loc_2ddfd:
	// 8256 
cs=0x1e67;eip=0x0011ad; 	X(PUSH(ax));	// 59912 push    ax ;~ 1E67:11AD
cs=0x1e67;eip=0x0011ae; 	X(PUSH(cs));	// 59913 push    cs ;~ 1E67:11AE
cs=0x1e67;eip=0x0011af; 	J(CALL(_outc,0));	// 59914 call    near ptr _outc ;~ 1E67:11AF
cs=0x1e67;eip=0x0011b2; 	T(ADD(sp, 2));	// 59915 add     sp, 2 ;~ 1E67:11B2
locret_2de05:
	// 8257 
cs=0x1e67;eip=0x0011b5; 	J(RETF(0));	// 59918 retf ;~ 1E67:11B5

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_2ddfa: 	goto loc_2ddfa;
        case m2c::kloc_2ddfd: 	goto loc_2ddfd;
        case m2c::klocret_2de05: 	goto locret_2de05;
        case m2c::kputprefix: 	goto putprefix;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool getnum(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    getnum:
    _begin:
#undef var_2
#define var_2 -2
	// 59929 var_2           = word ptr -2 ;~ 1E67:11B6
#undef arg_0
#define arg_0 6
	// 59930 arg_0           = word ptr  6 ;~ 1E67:11B6
#undef arg_2
#define arg_2 8
	// 59931 arg_2           = word ptr  8 ;~ 1E67:11B6
cs=0x1e67;eip=0x0011b6; 	X(PUSH(bp));	// 59933 push    bp ;~ 1E67:11B6
cs=0x1e67;eip=0x0011b7; 	T(MOV(bp, sp));	// 59934 mov     bp, sp ;~ 1E67:11B7
cs=0x1e67;eip=0x0011b9; 	T(SUB(sp, 4));	// 59935 sub     sp, 4 ;~ 1E67:11B9
cs=0x1e67;eip=0x0011bc; 	X(PUSH(di));	// 59936 push    di ;~ 1E67:11BC
cs=0x1e67;eip=0x0011bd; 	X(PUSH(si));	// 59937 push    si ;~ 1E67:11BD
cs=0x1e67;eip=0x0011be; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 59938 mov     si, [bp+arg_2] ;~ 1E67:11BE
cs=0x1e67;eip=0x0011c1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 1));	// 59939 mov     [bp+var_2], 1 ;~ 1E67:11C1
cs=0x1e67;eip=0x0011c6; 	T(CMP(*(raddr(ds,si)), 0x2A));	// 59940 cmp     byte ptr [si], 2Ah ; '*' ;~ 1E67:11C6
cs=0x1e67;eip=0x0011c9; 	J(JNZ(loc_2de2a));	// 59941 jnz     short loc_2DE2A ;~ 1E67:11C9
cs=0x1e67;eip=0x0011cb; 	T(MOV(bx, word_428a6));	// 59942 mov     bx, word_428A6 ;~ 1E67:11CB
cs=0x1e67;eip=0x0011cf; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 59943 mov     di, [bx] ;~ 1E67:11CF
cs=0x1e67;eip=0x0011d1; 	X(ADD(word_428a6, 2));	// 59944 add     word_428A6, 2 ;~ 1E67:11D1
cs=0x1e67;eip=0x0011d6; 	T(INC(si));	// 59945 inc     si ;~ 1E67:11D6
cs=0x1e67;eip=0x0011d7; 	J(JMP(loc_2de71));	// 59946 jmp     short loc_2DE71 ;~ 1E67:11D7
loc_2de2a:
	// 8258 
cs=0x1e67;eip=0x0011da; 	T(CMP(*(raddr(ds,si)), 0x2D));	// 59951 cmp     byte ptr [si], 2Dh ; '-' ;~ 1E67:11DA
cs=0x1e67;eip=0x0011dd; 	J(JNZ(loc_2de35));	// 59952 jnz     short loc_2DE35 ;~ 1E67:11DD
cs=0x1e67;eip=0x0011df; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0FFFF));	// 59953 mov     [bp+var_2], 0FFFFh ;~ 1E67:11DF
cs=0x1e67;eip=0x0011e4; 	T(INC(si));	// 59954 inc     si ;~ 1E67:11E4
loc_2de35:
	// 8259 
cs=0x1e67;eip=0x0011e5; 	T(SUB(di, di));	// 59957 sub     di, di ;~ 1E67:11E5
cs=0x1e67;eip=0x0011e7; 	T(CMP(*(raddr(ds,si)), 0x30));	// 59958 cmp     byte ptr [si], 30h ; '0' ;~ 1E67:11E7
cs=0x1e67;eip=0x0011ea; 	J(JL(loc_2de71));	// 59959 jl      short loc_2DE71 ;~ 1E67:11EA
cs=0x1e67;eip=0x0011ec; 	T(CMP(*(raddr(ds,si)), 0x39));	// 59960 cmp     byte ptr [si], 39h ; '9' ;~ 1E67:11EC
cs=0x1e67;eip=0x0011ef; 	J(JG(loc_2de71));	// 59961 jg      short loc_2DE71 ;~ 1E67:11EF
cs=0x1e67;eip=0x0011f1; 	T(CMP(word_428aa, di));	// 59962 cmp     word_428AA, di ;~ 1E67:11F1
cs=0x1e67;eip=0x0011f5; 	J(JNZ(loc_2de52));	// 59963 jnz     short loc_2DE52 ;~ 1E67:11F5
cs=0x1e67;eip=0x0011f7; 	T(CMP(*(raddr(ds,si)), 0x30));	// 59964 cmp     byte ptr [si], 30h ; '0' ;~ 1E67:11F7
cs=0x1e67;eip=0x0011fa; 	J(JNZ(loc_2de52));	// 59965 jnz     short loc_2DE52 ;~ 1E67:11FA
cs=0x1e67;eip=0x0011fc; 	X(MOV(word_428bc, 0x30));	// 59966 mov     word_428BC, 30h ; '0' ;~ 1E67:11FC
loc_2de52:
	// 8260 
cs=0x1e67;eip=0x001202; 	T(MOV(al, *(raddr(ds,si))));	// 59970 mov     al, [si] ;~ 1E67:1202
cs=0x1e67;eip=0x001204; 	T(CBW);	// 59971 cbw ;~ 1E67:1204
cs=0x1e67;eip=0x001205; 	T(MOV(cx, di));	// 59972 mov     cx, di ;~ 1E67:1205
cs=0x1e67;eip=0x001207; 	T(SHL(cx, 1));	// 59973 shl     cx, 1 ;~ 1E67:1207
cs=0x1e67;eip=0x001209; 	T(SHL(cx, 1));	// 59974 shl     cx, 1 ;~ 1E67:1209
cs=0x1e67;eip=0x00120b; 	T(ADD(cx, di));	// 59975 add     cx, di ;~ 1E67:120B
cs=0x1e67;eip=0x00120d; 	T(SHL(cx, 1));	// 59976 shl     cx, 1 ;~ 1E67:120D
cs=0x1e67;eip=0x00120f; 	T(ADD(cx, ax));	// 59977 add     cx, ax ;~ 1E67:120F
cs=0x1e67;eip=0x001211; 	T(SUB(cx, 0x30));	// 59978 sub     cx, 30h ; '0' ;~ 1E67:1211
cs=0x1e67;eip=0x001214; 	T(MOV(di, cx));	// 59979 mov     di, cx ;~ 1E67:1214
cs=0x1e67;eip=0x001216; 	T(INC(si));	// 59980 inc     si ;~ 1E67:1216
cs=0x1e67;eip=0x001217; 	T(CMP(*(raddr(ds,si)), 0x30));	// 59981 cmp     byte ptr [si], 30h ; '0' ;~ 1E67:1217
cs=0x1e67;eip=0x00121a; 	J(JL(loc_2de71));	// 59982 jl      short loc_2DE71 ;~ 1E67:121A
cs=0x1e67;eip=0x00121c; 	T(CMP(*(raddr(ds,si)), 0x39));	// 59983 cmp     byte ptr [si], 39h ; '9' ;~ 1E67:121C
cs=0x1e67;eip=0x00121f; 	J(JLE(loc_2de52));	// 59984 jle     short loc_2DE52 ;~ 1E67:121F
loc_2de71:
	// 8261 
cs=0x1e67;eip=0x001221; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 59988 mov     ax, [bp+var_2] ;~ 1E67:1221
cs=0x1e67;eip=0x001224; 	T(IMUL1_2(di));	// 59989 imul    di ;~ 1E67:1224
cs=0x1e67;eip=0x001226; 	T(MOV(di, ax));	// 59990 mov     di, ax ;~ 1E67:1226
cs=0x1e67;eip=0x001228; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 59991 mov     bx, [bp+arg_0] ;~ 1E67:1228
cs=0x1e67;eip=0x00122b; 	X(MOV(*(dw*)(raddr(ds,bx)), di));	// 59992 mov     [bx], di ;~ 1E67:122B
cs=0x1e67;eip=0x00122d; 	T(MOV(ax, si));	// 59993 mov     ax, si ;~ 1E67:122D
cs=0x1e67;eip=0x00122f; 	X(POP(si));	// 59994 pop     si ;~ 1E67:122F
cs=0x1e67;eip=0x001230; 	X(POP(di));	// 59995 pop     di ;~ 1E67:1230
cs=0x1e67;eip=0x001231; 	T(MOV(sp, bp));	// 59996 mov     sp, bp ;~ 1E67:1231
cs=0x1e67;eip=0x001233; 	X(POP(bp));	// 59997 pop     bp ;~ 1E67:1233
cs=0x1e67;eip=0x001234; 	J(RETF(0));	// 59998 retf ;~ 1E67:1234

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kgetnum: 	goto getnum;
        case m2c::kloc_2de2a: 	goto loc_2de2a;
        case m2c::kloc_2de35: 	goto loc_2de35;
        case m2c::kloc_2de52: 	goto loc_2de52;
        case m2c::kloc_2de71: 	goto loc_2de71;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool flagchar(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    flagchar:
    _begin:
#undef arg_0
#define arg_0 6
	// 60010 arg_0           = byte ptr  6 ;~ 1E67:1236
cs=0x1e67;eip=0x001236; 	X(PUSH(bp));	// 60012 push    bp ;~ 1E67:1236
cs=0x1e67;eip=0x001237; 	T(MOV(bp, sp));	// 60013 mov     bp, sp ;~ 1E67:1237
cs=0x1e67;eip=0x001239; 	T(SUB(sp, 2));	// 60014 sub     sp, 2 ;~ 1E67:1239
cs=0x1e67;eip=0x00123c; 	X(PUSH(si));	// 60015 push    si ;~ 1E67:123C
cs=0x1e67;eip=0x00123d; 	T(MOV(si, 0x37F8));	// 60016 mov     si, 37F8h ;~ 1E67:123D
cs=0x1e67;eip=0x001240; 	T(MOV(cl, *(raddr(ss,bp+arg_0))));	// 60017 mov     cl, [bp+arg_0] ;~ 1E67:1240
cs=0x1e67;eip=0x001243; 	J(JMP(loc_2de97));	// 60018 jmp     short loc_2DE97 ;~ 1E67:1243
loc_2de96:
	// 8262 
cs=0x1e67;eip=0x001246; 	T(INC(si));	// 60023 inc     si ;~ 1E67:1246
loc_2de97:
	// 8263 
cs=0x1e67;eip=0x001247; 	T(CMP(*(raddr(ds,si)), 0));	// 60026 cmp     byte ptr [si], 0 ;~ 1E67:1247
cs=0x1e67;eip=0x00124a; 	J(JZ(loc_2dea6));	// 60027 jz      short loc_2DEA6 ;~ 1E67:124A
cs=0x1e67;eip=0x00124c; 	T(CMP(cl, *(raddr(ds,si))));	// 60028 cmp     cl, [si] ;~ 1E67:124C
cs=0x1e67;eip=0x00124e; 	J(JNZ(loc_2de96));	// 60029 jnz     short loc_2DE96 ;~ 1E67:124E
cs=0x1e67;eip=0x001250; 	T(MOV(ax, 1));	// 60030 mov     ax, 1 ;~ 1E67:1250
cs=0x1e67;eip=0x001253; 	J(JMP(loc_2dea8));	// 60031 jmp     short loc_2DEA8 ;~ 1E67:1253
loc_2dea6:
	// 8264 
cs=0x1e67;eip=0x001256; 	T(SUB(ax, ax));	// 60036 sub     ax, ax ;~ 1E67:1256
loc_2dea8:
	// 8265 
cs=0x1e67;eip=0x001258; 	X(POP(si));	// 60039 pop     si ;~ 1E67:1258
cs=0x1e67;eip=0x001259; 	T(MOV(sp, bp));	// 60040 mov     sp, bp ;~ 1E67:1259
cs=0x1e67;eip=0x00125b; 	X(POP(bp));	// 60041 pop     bp ;~ 1E67:125B
cs=0x1e67;eip=0x00125c; 	J(RETF(0));	// 60042 retf ;~ 1E67:125C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kflagchar: 	goto flagchar;
        case m2c::kloc_2de96: 	goto loc_2de96;
        case m2c::kloc_2de97: 	goto loc_2de97;
        case m2c::kloc_2dea6: 	goto loc_2dea6;
        case m2c::kloc_2dea8: 	goto loc_2dea8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _lseek(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _lseek:
    _begin:
#undef var_4
#define var_4 -4
	// 60055 var_4           = word ptr -4 ;~ 1E67:125E
#undef var_2
#define var_2 -2
	// 60056 var_2           = word ptr -2 ;~ 1E67:125E
#undef arg_0
#define arg_0 6
	// 60057 arg_0           = dword ptr  6 ;~ 1E67:125E
#undef arg_4
#define arg_4 0x0A
	// 60058 arg_4           = dword ptr  0Ah ;~ 1E67:125E
cs=0x1e67;eip=0x00125e; 	X(PUSH(bp));	// 60062 push    bp ;~ 1E67:125E
cs=0x1e67;eip=0x00125f; 	T(MOV(bp, sp));	// 60063 mov     bp, sp ;~ 1E67:125F
cs=0x1e67;eip=0x001261; 	T(SUB(sp, 4));	// 60064 sub     sp, 4 ;~ 1E67:1261
cs=0x1e67;eip=0x001264; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 60065 mov     bx, word ptr [bp+arg_0] ;~ 1E67:1264
cs=0x1e67;eip=0x001267; 	T(CMP(bx, word_3edf2));	// 60066 cmp     bx, word_3EDF2 ;~ 1E67:1267
cs=0x1e67;eip=0x00126b; 	J(JC(loc_2dec2));	// 60067 jb      short loc_2DEC2 ;~ 1E67:126B
cs=0x1e67;eip=0x00126d; 	T(MOV(ax, 0x900));	// 60068 mov     ax, 900h ;~ 1E67:126D
cs=0x1e67;eip=0x001270; 	J(JMP(loc_2deec));	// 60069 jmp     short loc_2DEEC ;~ 1E67:1270
loc_2dec2:
	// 8266 
cs=0x1e67;eip=0x001272; 	T(TEST(*(dw*)((dw*)(raddr(ss,bp+arg_4))), 0x8000));	// 60073 test    word ptr [bp+arg_4], 8000h ;~ 1E67:1272
cs=0x1e67;eip=0x001277; 	J(JZ(loc_2df11));	// 60074 jz      short loc_2DF11 ;~ 1E67:1277
cs=0x1e67;eip=0x001279; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+arg_4+2))), 0));	// 60075 cmp     word ptr [bp+arg_4+2], 0 ;~ 1E67:1279
cs=0x1e67;eip=0x00127d; 	J(JZ(loc_2dee9));	// 60076 jz      short loc_2DEE9 ;~ 1E67:127D
cs=0x1e67;eip=0x00127f; 	T(XOR(cx, cx));	// 60077 xor     cx, cx ;~ 1E67:127F
cs=0x1e67;eip=0x001281; 	T(MOV(dx, cx));	// 60078 mov     dx, cx ;~ 1E67:1281
cs=0x1e67;eip=0x001283; 	T(MOV(ax, 0x4201));	// 60079 mov     ax, 4201h ;~ 1E67:1283
cs=0x1e67;eip=0x001286; 	R(_INT(0x21));	// 60080 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 1E67:1286
cs=0x1e67;eip=0x001288; 	J(JC(loc_2df25));	// 60082 jb      short loc_2DF25 ;~ 1E67:1288
cs=0x1e67;eip=0x00128a; 	T(TEST(*(dw*)((dw*)(raddr(ss,bp+arg_4+2))), 2));	// 60083 test    word ptr [bp+arg_4+2], 2 ;~ 1E67:128A
cs=0x1e67;eip=0x00128f; 	J(JNZ(loc_2deef));	// 60084 jnz     short loc_2DEEF ;~ 1E67:128F
cs=0x1e67;eip=0x001291; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 60085 add     ax, word ptr [bp+arg_0+2] ;~ 1E67:1291
cs=0x1e67;eip=0x001294; 	T(ADC(dx, *(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 60086 adc     dx, word ptr [bp+arg_4] ;~ 1E67:1294
cs=0x1e67;eip=0x001297; 	J(JNS(loc_2df11));	// 60087 jns     short loc_2DF11 ;~ 1E67:1297
loc_2dee9:
	// 8267 
cs=0x1e67;eip=0x001299; 	T(MOV(ax, 0x1600));	// 60091 mov     ax, 1600h ;~ 1E67:1299
loc_2deec:
	// 8268 
cs=0x1e67;eip=0x00129c; 	T(STC);	// 60094 stc ;~ 1E67:129C
cs=0x1e67;eip=0x00129d; 	J(JMP(loc_2df25));	// 60095 jmp     short loc_2DF25 ;~ 1E67:129D
loc_2deef:
	// 8269 
cs=0x1e67;eip=0x00129f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 60099 mov     [bp+var_2], dx ;~ 1E67:129F
cs=0x1e67;eip=0x0012a2; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 60100 mov     [bp+var_4], ax ;~ 1E67:12A2
cs=0x1e67;eip=0x0012a5; 	T(MOV(dx, cx));	// 60101 mov     dx, cx ;~ 1E67:12A5
cs=0x1e67;eip=0x0012a7; 	T(MOV(ax, 0x4202));	// 60102 mov     ax, 4202h ;~ 1E67:12A7
cs=0x1e67;eip=0x0012aa; 	R(_INT(0x21));	// 60103 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 1E67:12AA
cs=0x1e67;eip=0x0012ac; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 60105 add     ax, word ptr [bp+arg_0+2] ;~ 1E67:12AC
cs=0x1e67;eip=0x0012af; 	T(ADC(dx, *(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 60106 adc     dx, word ptr [bp+arg_4] ;~ 1E67:12AF
cs=0x1e67;eip=0x0012b2; 	J(JNS(loc_2df11));	// 60107 jns     short loc_2DF11 ;~ 1E67:12B2
cs=0x1e67;eip=0x0012b4; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_2))));	// 60108 mov     cx, [bp+var_2] ;~ 1E67:12B4
cs=0x1e67;eip=0x0012b7; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 60109 mov     dx, [bp+var_4] ;~ 1E67:12B7
cs=0x1e67;eip=0x0012ba; 	T(MOV(ax, 0x4200));	// 60110 mov     ax, 4200h ;~ 1E67:12BA
cs=0x1e67;eip=0x0012bd; 	R(_INT(0x21));	// 60111 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 1E67:12BD
cs=0x1e67;eip=0x0012bf; 	J(JMP(loc_2dee9));	// 60113 jmp     short loc_2DEE9 ;~ 1E67:12BF
loc_2df11:
	// 8270 
cs=0x1e67;eip=0x0012c1; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 60118 mov     dx, word ptr [bp+arg_0+2] ;~ 1E67:12C1
cs=0x1e67;eip=0x0012c4; 	T(MOV(cx, *(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 60119 mov     cx, word ptr [bp+arg_4] ;~ 1E67:12C4
cs=0x1e67;eip=0x0012c7; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_4+2))));	// 60120 mov     al, byte ptr [bp+arg_4+2] ;~ 1E67:12C7
cs=0x1e67;eip=0x0012ca; 	T(MOV(ah, 0x42));	// 60121 mov     ah, 42h ;~ 1E67:12CA
cs=0x1e67;eip=0x0012cc; 	R(_INT(0x21));	// 60122 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 1E67:12CC
cs=0x1e67;eip=0x0012ce; 	J(JC(loc_2df25));	// 60125 jb      short loc_2DF25 ;~ 1E67:12CE
cs=0x1e67;eip=0x0012d0; 	X(AND(*(raddr(ds,bx+0x3684)), 0x0FD));	// 60126 and     byte ptr [bx+3684h], 0FDh ;~ 1E67:12D0
loc_2df25:
	// 8271 
cs=0x1e67;eip=0x0012d5; 	J(return seg010_546_proc(m2c::k__dosretax, _state););	// 60130 jmp     __dosretax ;~ 1E67:12D5

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_lseek: 	goto _lseek;
        case m2c::kloc_2dec2: 	goto loc_2dec2;
        case m2c::kloc_2dee9: 	goto loc_2dee9;
        case m2c::kloc_2deec: 	goto loc_2deec;
        case m2c::kloc_2deef: 	goto loc_2deef;
        case m2c::kloc_2df11: 	goto loc_2df11;
        case m2c::kloc_2df25: 	goto loc_2df25;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _write(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _write:
    _begin:
#undef var_8
#define var_8 -8
	// 60142 var_8           = word ptr -8 ;~ 1E67:12D8
#undef var_4
#define var_4 -4
	// 60143 var_4           = word ptr -4 ;~ 1E67:12D8
#undef var_2
#define var_2 -2
	// 60144 var_2           = word ptr -2 ;~ 1E67:12D8
#undef arg_0
#define arg_0 6
	// 60145 arg_0           = dword ptr  6 ;~ 1E67:12D8
#undef arg_4
#define arg_4 0x0A
	// 60146 arg_4           = dword ptr  0Ah ;~ 1E67:12D8
cs=0x1e67;eip=0x0012d8; 	X(PUSH(bp));	// 60151 push    bp ;~ 1E67:12D8
cs=0x1e67;eip=0x0012d9; 	T(MOV(bp, sp));	// 60152 mov     bp, sp ;~ 1E67:12D9
cs=0x1e67;eip=0x0012db; 	T(SUB(sp, 8));	// 60153 sub     sp, 8 ;~ 1E67:12DB
cs=0x1e67;eip=0x0012de; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 60154 mov     bx, word ptr [bp+arg_0] ;~ 1E67:12DE
cs=0x1e67;eip=0x0012e1; 	T(CMP(bx, word_3edf2));	// 60155 cmp     bx, word_3EDF2 ;~ 1E67:12E1
cs=0x1e67;eip=0x0012e5; 	J(JC(loc_2df3e));	// 60156 jb      short loc_2DF3E ;~ 1E67:12E5
cs=0x1e67;eip=0x0012e7; 	T(MOV(ax, 0x900));	// 60157 mov     ax, 900h ;~ 1E67:12E7
cs=0x1e67;eip=0x0012ea; 	T(STC);	// 60158 stc ;~ 1E67:12EA
loc_2df3b:
	// 8272 
cs=0x1e67;eip=0x0012eb; 	J(return seg010_546_proc(m2c::k__dosretax, _state););	// 60161 jmp     __dosretax ;~ 1E67:12EB
loc_2df3e:
	// 8273 
cs=0x1e67;eip=0x0012ee; 	T(TEST(*(raddr(ds,bx+0x3684)), 0x20));	// 60165 test    byte ptr [bx+3684h], 20h ;~ 1E67:12EE
cs=0x1e67;eip=0x0012f3; 	J(JZ(loc_2df50));	// 60166 jz      short loc_2DF50 ;~ 1E67:12F3
cs=0x1e67;eip=0x0012f5; 	T(MOV(ax, 0x4202));	// 60167 mov     ax, 4202h ;~ 1E67:12F5
cs=0x1e67;eip=0x0012f8; 	T(XOR(cx, cx));	// 60168 xor     cx, cx ;~ 1E67:12F8
cs=0x1e67;eip=0x0012fa; 	T(MOV(dx, cx));	// 60169 mov     dx, cx ;~ 1E67:12FA
cs=0x1e67;eip=0x0012fc; 	R(_INT(0x21));	// 60170 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 1E67:12FC
cs=0x1e67;eip=0x0012fe; 	J(JC(loc_2df3b));	// 60172 jb      short loc_2DF3B ;~ 1E67:12FE
loc_2df50:
	// 8274 
cs=0x1e67;eip=0x001300; 	T(TEST(*(raddr(ds,bx+0x3684)), 0x80));	// 60175 test    byte ptr [bx+3684h], 80h ;~ 1E67:1300
cs=0x1e67;eip=0x001305; 	J(JZ(loc_2dfc7));	// 60176 jz      short loc_2DFC7 ;~ 1E67:1305
cs=0x1e67;eip=0x001307; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 60177 mov     dx, word ptr [bp+arg_0+2] ;~ 1E67:1307
cs=0x1e67;eip=0x00130a; 	X(PUSH(ds));	// 60178 push    ds ;~ 1E67:130A
cs=0x1e67;eip=0x00130b; 	X(POP(es));	// 60179 pop     es ;~ 1E67:130B
cs=0x1e67;eip=0x00130c; 	T(XOR(ax, ax));	// 60181 xor     ax, ax ;~ 1E67:130C
cs=0x1e67;eip=0x00130e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 60182 mov     [bp+var_2], ax ;~ 1E67:130E
cs=0x1e67;eip=0x001311; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 60183 mov     [bp+var_4], ax ;~ 1E67:1311
cs=0x1e67;eip=0x001314; 	T(CLD);	// 60184 cld ;~ 1E67:1314
cs=0x1e67;eip=0x001315; 	X(PUSH(di));	// 60185 push    di ;~ 1E67:1315
cs=0x1e67;eip=0x001316; 	X(PUSH(si));	// 60186 push    si ;~ 1E67:1316
cs=0x1e67;eip=0x001317; 	T(MOV(di, dx));	// 60187 mov     di, dx ;~ 1E67:1317
cs=0x1e67;eip=0x001319; 	T(MOV(si, dx));	// 60188 mov     si, dx ;~ 1E67:1319
cs=0x1e67;eip=0x00131b; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), sp));	// 60189 mov     [bp+var_8], sp ;~ 1E67:131B
cs=0x1e67;eip=0x00131e; 	T(MOV(cx, *(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 60190 mov     cx, word ptr [bp+arg_4] ;~ 1E67:131E
cs=0x1e67;eip=0x001321; 	J(JCXZ(loc_2dfc9));	// 60191 jcxz    short loc_2DFC9 ;~ 1E67:1321
cs=0x1e67;eip=0x001323; 	T(MOV(al, 0x0A));	// 60192 mov     al, 0Ah ;~ 1E67:1323
	// 60193 repne scasb ;~ 1E67:1325
cs=0x1e67;eip=0x001325; 	T(	REPNE SCASB);	// 60193 repne scasb ;~ 1E67:1325
cs=0x1e67;eip=0x001327; 	J(JNZ(loc_2dfc5));	// 60194 jnz     short loc_2DFC5 ;~ 1E67:1327
cs=0x1e67;eip=0x001329; 	J(CALLF(_stackavail,0));	// 60195 call    _stackavail ;~ 1E67:1329
cs=0x1e67;eip=0x00132e; 	T(CMP(ax, 0x0A8));	// 60196 cmp     ax, 0A8h ; '¨' ;~ 1E67:132E
cs=0x1e67;eip=0x001331; 	J(JBE(loc_2dfcb));	// 60197 jbe     short loc_2DFCB ;~ 1E67:1331
cs=0x1e67;eip=0x001333; 	T(SUB(sp, 2));	// 60198 sub     sp, 2 ;~ 1E67:1333
cs=0x1e67;eip=0x001336; 	T(MOV(bx, sp));	// 60199 mov     bx, sp ;~ 1E67:1336
cs=0x1e67;eip=0x001338; 	T(MOV(dx, 0x200));	// 60200 mov     dx, 200h ;~ 1E67:1338
cs=0x1e67;eip=0x00133b; 	T(CMP(ax, 0x228));	// 60201 cmp     ax, 228h ;~ 1E67:133B
cs=0x1e67;eip=0x00133e; 	J(JNC(loc_2df93));	// 60202 jnb     short loc_2DF93 ;~ 1E67:133E
cs=0x1e67;eip=0x001340; 	T(MOV(dx, 0x80));	// 60203 mov     dx, 80h ; '€' ;~ 1E67:1340
loc_2df93:
	// 8275 
cs=0x1e67;eip=0x001343; 	T(SUB(sp, dx));	// 60206 sub     sp, dx ;~ 1E67:1343
cs=0x1e67;eip=0x001345; 	T(MOV(dx, sp));	// 60207 mov     dx, sp ;~ 1E67:1345
cs=0x1e67;eip=0x001347; 	T(MOV(di, dx));	// 60208 mov     di, dx ;~ 1E67:1347
cs=0x1e67;eip=0x001349; 	X(PUSH(ss));	// 60209 push    ss ;~ 1E67:1349
cs=0x1e67;eip=0x00134a; 	X(POP(es));	// 60210 pop     es ;~ 1E67:134A
cs=0x1e67;eip=0x00134b; 	T(MOV(cx, *(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 60211 mov     cx, word ptr [bp+arg_4] ;~ 1E67:134B
loc_2df9e:
	// 8276 
cs=0x1e67;eip=0x00134e; 	T(LODSB);	// 60214 lodsb ;~ 1E67:134E
cs=0x1e67;eip=0x00134f; 	T(CMP(al, 0x0A));	// 60215 cmp     al, 0Ah ;~ 1E67:134F
cs=0x1e67;eip=0x001351; 	J(JZ(loc_2dfaf));	// 60216 jz      short loc_2DFAF ;~ 1E67:1351
loc_2dfa3:
	// 8277 
cs=0x1e67;eip=0x001353; 	T(CMP(di, bx));	// 60219 cmp     di, bx ;~ 1E67:1353
cs=0x1e67;eip=0x001355; 	J(JZ(loc_2dfc0));	// 60220 jz      short loc_2DFC0 ;~ 1E67:1355
loc_2dfa7:
	// 8278 
cs=0x1e67;eip=0x001357; 	X(STOSB);	// 60223 stosb ;~ 1E67:1357
cs=0x1e67;eip=0x001358; 	J(LOOP(loc_2df9e));	// 60224 loop    loc_2DF9E ;~ 1E67:1358
cs=0x1e67;eip=0x00135a; 	J(CALL(sub_2dfd0,0));	// 60225 call    near ptr sub_2DFD0 ;~ 1E67:135A
cs=0x1e67;eip=0x00135d; 	J(return _group6(m2c::kloc_2e010, _state););	// 60226 jmp     short loc_2E010 ;~ 1E67:135D
loc_2dfaf:
	// 8279 
cs=0x1e67;eip=0x00135f; 	T(MOV(al, 0x0D));	// 60230 mov     al, 0Dh ;~ 1E67:135F
cs=0x1e67;eip=0x001361; 	T(CMP(di, bx));	// 60231 cmp     di, bx ;~ 1E67:1361
cs=0x1e67;eip=0x001363; 	J(JNZ(loc_2dfb8));	// 60232 jnz     short loc_2DFB8 ;~ 1E67:1363
cs=0x1e67;eip=0x001365; 	J(CALL(sub_2dfd0,0));	// 60233 call    near ptr sub_2DFD0 ;~ 1E67:1365
loc_2dfb8:
	// 8280 
cs=0x1e67;eip=0x001368; 	X(STOSB);	// 60236 stosb ;~ 1E67:1368
cs=0x1e67;eip=0x001369; 	T(MOV(al, 0x0A));	// 60237 mov     al, 0Ah ;~ 1E67:1369
cs=0x1e67;eip=0x00136b; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 60238 inc     [bp+var_4] ;~ 1E67:136B
cs=0x1e67;eip=0x00136e; 	J(JMP(loc_2dfa3));	// 60239 jmp     short loc_2DFA3 ;~ 1E67:136E
loc_2dfc0:
	// 8281 
cs=0x1e67;eip=0x001370; 	J(CALL(sub_2dfd0,0));	// 60243 call    near ptr sub_2DFD0 ;~ 1E67:1370
cs=0x1e67;eip=0x001373; 	J(JMP(loc_2dfa7));	// 60244 jmp     short loc_2DFA7 ;~ 1E67:1373
loc_2dfc5:
	// 8282 
cs=0x1e67;eip=0x001375; 	X(POP(si));	// 60248 pop     si ;~ 1E67:1375
cs=0x1e67;eip=0x001376; 	X(POP(di));	// 60249 pop     di ;~ 1E67:1376
loc_2dfc7:
	// 8283 
cs=0x1e67;eip=0x001377; 	J(return _group6(m2c::kloc_2e01e, _state););	// 60252 jmp     short loc_2E01E ;~ 1E67:1377
loc_2dfc9:
	// 8284 
cs=0x1e67;eip=0x001379; 	J(return _group6(m2c::kloc_2e010, _state););	// 60256 jmp     short loc_2E010 ;~ 1E67:1379
loc_2dfcb:
	// 8285 
cs=0x1e67;eip=0x00137b; 	T(XOR(ax, ax));	// 60260 xor     ax, ax ;~ 1E67:137B
cs=0x1e67;eip=0x00137d; 	J(return _group5(m2c::k__amsg_exit, _state););	// 60261 jmp     __amsg_exit ;~ 1E67:137D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_write: 	goto _write;
        case m2c::kloc_2df3b: 	goto loc_2df3b;
        case m2c::kloc_2df3e: 	goto loc_2df3e;
        case m2c::kloc_2df50: 	goto loc_2df50;
        case m2c::kloc_2df93: 	goto loc_2df93;
        case m2c::kloc_2df9e: 	goto loc_2df9e;
        case m2c::kloc_2dfa3: 	goto loc_2dfa3;
        case m2c::kloc_2dfa7: 	goto loc_2dfa7;
        case m2c::kloc_2dfaf: 	goto loc_2dfaf;
        case m2c::kloc_2dfb8: 	goto loc_2dfb8;
        case m2c::kloc_2dfc0: 	goto loc_2dfc0;
        case m2c::kloc_2dfc5: 	goto loc_2dfc5;
        case m2c::kloc_2dfc7: 	goto loc_2dfc7;
        case m2c::kloc_2dfc9: 	goto loc_2dfc9;
        case m2c::kloc_2dfcb: 	goto loc_2dfcb;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group6:
    _begin:
sub_2dfd0:
	// 60268 
cs=0x1e67;eip=0x001380; 	X(PUSH(ax));	// 60273 push    ax ;~ 1E67:1380
cs=0x1e67;eip=0x001381; 	X(PUSH(bx));	// 60274 push    bx ;~ 1E67:1381
cs=0x1e67;eip=0x001382; 	X(PUSH(cx));	// 60275 push    cx ;~ 1E67:1382
cs=0x1e67;eip=0x001383; 	T(MOV(cx, di));	// 60276 mov     cx, di ;~ 1E67:1383
cs=0x1e67;eip=0x001385; 	T(SUB(cx, dx));	// 60277 sub     cx, dx ;~ 1E67:1385
cs=0x1e67;eip=0x001387; 	J(JCXZ(loc_2dfe9));	// 60278 jcxz    short loc_2DFE9 ;~ 1E67:1387
cs=0x1e67;eip=0x001389; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 60279 mov     bx, [bp+6] ;~ 1E67:1389
cs=0x1e67;eip=0x00138c; 	T(MOV(ah, 0x40));	// 60280 mov     ah, 40h ;~ 1E67:138C
cs=0x1e67;eip=0x00138e; 	R(_INT(0x21));	// 60281 int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 1E67:138E
cs=0x1e67;eip=0x001390; 	J(JC(loc_2dfef));	// 60283 jb      short loc_2DFEF ;~ 1E67:1390
cs=0x1e67;eip=0x001392; 	X(ADD(*(dw*)(raddr(ss,bp-2)), ax));	// 60284 add     [bp-2], ax ;~ 1E67:1392
cs=0x1e67;eip=0x001395; 	T(OR(ax, ax));	// 60285 or      ax, ax ;~ 1E67:1395
cs=0x1e67;eip=0x001397; 	J(JZ(loc_2dfef));	// 60286 jz      short loc_2DFEF ;~ 1E67:1397
loc_2dfe9:
	// 8286 
cs=0x1e67;eip=0x001399; 	X(POP(cx));	// 60289 pop     cx ;~ 1E67:1399
cs=0x1e67;eip=0x00139a; 	X(POP(bx));	// 60290 pop     bx ;~ 1E67:139A
cs=0x1e67;eip=0x00139b; 	X(POP(ax));	// 60291 pop     ax ;~ 1E67:139B
cs=0x1e67;eip=0x00139c; 	T(MOV(di, dx));	// 60292 mov     di, dx ;~ 1E67:139C
cs=0x1e67;eip=0x00139e; 	J(RETN(0));	// 60293 retn ;~ 1E67:139E
loc_2dfef:
	// 8287 
cs=0x1e67;eip=0x00139f; 	T(ADD(sp, 8));	// 60298 add     sp, 8 ;~ 1E67:139F
cs=0x1e67;eip=0x0013a2; 	J(JNC(loc_2dff8));	// 60299 jnb     short loc_2DFF8 ;~ 1E67:13A2
cs=0x1e67;eip=0x0013a4; 	T(MOV(ah, 9));	// 60300 mov     ah, 9 ;~ 1E67:13A4
cs=0x1e67;eip=0x0013a6; 	J(JMP(loc_2e016));	// 60301 jmp     short loc_2E016 ;~ 1E67:13A6
loc_2dff8:
	// 8288 
cs=0x1e67;eip=0x0013a8; 	T(TEST(*(raddr(ds,bx+0x3684)), 0x40));	// 60305 test    byte ptr [bx+3684h], 40h ;~ 1E67:13A8
cs=0x1e67;eip=0x0013ad; 	J(JZ(loc_2e00a));	// 60306 jz      short loc_2E00A ;~ 1E67:13AD
cs=0x1e67;eip=0x0013af; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 60307 mov     bx, [bp+8] ;~ 1E67:13AF
cs=0x1e67;eip=0x0013b2; 	T(CMP(*(raddr(ds,bx)), 0x1A));	// 60308 cmp     byte ptr [bx], 1Ah ;~ 1E67:13B2
cs=0x1e67;eip=0x0013b5; 	J(JNZ(loc_2e00a));	// 60309 jnz     short loc_2E00A ;~ 1E67:13B5
cs=0x1e67;eip=0x0013b7; 	T(CLC);	// 60310 clc ;~ 1E67:13B7
cs=0x1e67;eip=0x0013b8; 	J(JMP(loc_2e016));	// 60311 jmp     short loc_2E016 ;~ 1E67:13B8
loc_2e00a:
	// 8289 
cs=0x1e67;eip=0x0013ba; 	T(STC);	// 60316 stc ;~ 1E67:13BA
cs=0x1e67;eip=0x0013bb; 	T(MOV(ax, 0x1C00));	// 60317 mov     ax, 1C00h ;~ 1E67:13BB
cs=0x1e67;eip=0x0013be; 	J(JMP(loc_2e016));	// 60318 jmp     short loc_2E016 ;~ 1E67:13BE
loc_2e010:
	// 8290 
cs=0x1e67;eip=0x0013c0; 	T(MOV(ax, *(dw*)(raddr(ss,bp-2))));	// 60323 mov     ax, [bp-2] ;~ 1E67:13C0
cs=0x1e67;eip=0x0013c3; 	T(SUB(ax, *(dw*)(raddr(ss,bp-4))));	// 60324 sub     ax, [bp-4] ;~ 1E67:13C3
loc_2e016:
	// 8291 
cs=0x1e67;eip=0x0013c6; 	T(MOV(sp, *(dw*)(raddr(ss,bp-8))));	// 60328 mov     sp, [bp-8] ;~ 1E67:13C6
cs=0x1e67;eip=0x0013c9; 	X(POP(si));	// 60329 pop     si ;~ 1E67:13C9
cs=0x1e67;eip=0x0013ca; 	X(POP(di));	// 60330 pop     di ;~ 1E67:13CA
loc_2e01b:
	// 8292 
cs=0x1e67;eip=0x0013cb; 	J(return seg010_546_proc(m2c::k__dosretax, _state););	// 60334 jmp     __dosretax ;~ 1E67:13CB
seg010_13ce_proc:
	// 60340 
loc_2e01e:
	// 8293 
cs=0x1e67;eip=0x0013ce; 	T(MOV(cx, *(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 60341 mov     cx, word ptr [bp+arg_4] ;~ 1E67:13CE
cs=0x1e67;eip=0x0013d1; 	T(OR(cx, cx));	// 60342 or      cx, cx ;~ 1E67:13D1
cs=0x1e67;eip=0x0013d3; 	J(JNZ(loc_2e02a));	// 60343 jnz     short loc_2E02A ;~ 1E67:13D3
cs=0x1e67;eip=0x0013d5; 	T(MOV(ax, cx));	// 60344 mov     ax, cx ;~ 1E67:13D5
cs=0x1e67;eip=0x0013d7; 	J(return seg010_546_proc(m2c::k__dosretax, _state););	// 60345 jmp     __dosretax ;~ 1E67:13D7
loc_2e02a:
	// 8294 
cs=0x1e67;eip=0x0013da; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 60349 mov     dx, word ptr [bp+arg_0+2] ;~ 1E67:13DA
cs=0x1e67;eip=0x0013dd; 	T(MOV(ah, 0x40));	// 60350 mov     ah, 40h ;~ 1E67:13DD
cs=0x1e67;eip=0x0013df; 	R(_INT(0x21));	// 60351 int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 1E67:13DF
cs=0x1e67;eip=0x0013e1; 	J(JNC(loc_2e037));	// 60353 jnb     short loc_2E037 ;~ 1E67:13E1
cs=0x1e67;eip=0x0013e3; 	T(MOV(ah, 9));	// 60354 mov     ah, 9 ;~ 1E67:13E3
cs=0x1e67;eip=0x0013e5; 	J(JMP(loc_2e01b));	// 60355 jmp     short loc_2E01B ;~ 1E67:13E5
loc_2e037:
	// 8295 
cs=0x1e67;eip=0x0013e7; 	T(OR(ax, ax));	// 60359 or      ax, ax ;~ 1E67:13E7
cs=0x1e67;eip=0x0013e9; 	J(JNZ(loc_2e01b));	// 60360 jnz     short loc_2E01B ;~ 1E67:13E9
cs=0x1e67;eip=0x0013eb; 	T(TEST(*(raddr(ds,bx+0x3684)), 0x40));	// 60361 test    byte ptr [bx+3684h], 40h ;~ 1E67:13EB
cs=0x1e67;eip=0x0013f0; 	J(JZ(loc_2e04c));	// 60362 jz      short loc_2E04C ;~ 1E67:13F0
cs=0x1e67;eip=0x0013f2; 	T(MOV(bx, dx));	// 60363 mov     bx, dx ;~ 1E67:13F2
cs=0x1e67;eip=0x0013f4; 	T(CMP(*(raddr(ds,bx)), 0x1A));	// 60364 cmp     byte ptr [bx], 1Ah ;~ 1E67:13F4
cs=0x1e67;eip=0x0013f7; 	J(JNZ(loc_2e04c));	// 60365 jnz     short loc_2E04C ;~ 1E67:13F7
cs=0x1e67;eip=0x0013f9; 	T(CLC);	// 60366 clc ;~ 1E67:13F9
cs=0x1e67;eip=0x0013fa; 	J(JMP(loc_2e01b));	// 60367 jmp     short loc_2E01B ;~ 1E67:13FA
loc_2e04c:
	// 8296 
cs=0x1e67;eip=0x0013fc; 	T(STC);	// 60372 stc ;~ 1E67:13FC
cs=0x1e67;eip=0x0013fd; 	T(MOV(ax, 0x1C00));	// 60373 mov     ax, 1C00h ;~ 1E67:13FD
cs=0x1e67;eip=0x001400; 	J(JMP(loc_2e01b));	// 60374 jmp     short loc_2E01B ;~ 1E67:1400

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_2dfe9: 	goto loc_2dfe9;
        case m2c::kloc_2dfef: 	goto loc_2dfef;
        case m2c::kloc_2dff8: 	goto loc_2dff8;
        case m2c::kloc_2e00a: 	goto loc_2e00a;
        case m2c::kloc_2e010: 	goto loc_2e010;
        case m2c::kloc_2e016: 	goto loc_2e016;
        case m2c::kloc_2e01b: 	goto loc_2e01b;
        case m2c::kloc_2e02a: 	goto loc_2e02a;
        case m2c::kloc_2e037: 	goto loc_2e037;
        case m2c::kloc_2e04c: 	goto loc_2e04c;
        case m2c::kseg010_13ce_proc: 	goto seg010_13ce_proc;
        case m2c::ksub_2dfd0: 	goto sub_2dfd0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _stackavail(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _stackavail:
    _begin:
cs=0x1e67;eip=0x001402; 	X(POP(cx));	// 60383 pop     cx ;~ 1E67:1402
cs=0x1e67;eip=0x001403; 	X(POP(dx));	// 60384 pop     dx ;~ 1E67:1403
cs=0x1e67;eip=0x001404; 	T(MOV(ax, word_3ee24));	// 60385 mov     ax, word_3EE24 ;~ 1E67:1404
cs=0x1e67;eip=0x001407; 	T(CMP(ax, sp));	// 60386 cmp     ax, sp ;~ 1E67:1407
cs=0x1e67;eip=0x001409; 	J(JNC(loc_2e062));	// 60387 jnb     short loc_2E062 ;~ 1E67:1409
cs=0x1e67;eip=0x00140b; 	T(SUB(ax, sp));	// 60388 sub     ax, sp ;~ 1E67:140B
cs=0x1e67;eip=0x00140d; 	T(NEG(ax));	// 60389 neg     ax ;~ 1E67:140D
loc_2e05f:
	// 8297 
cs=0x1e67;eip=0x00140f; 	X(PUSH(dx));	// 60392 push    dx ;~ 1E67:140F
cs=0x1e67;eip=0x001410; 	X(PUSH(cx));	// 60393 push    cx ;~ 1E67:1410
cs=0x1e67;eip=0x001411; 	J(RETF(0));	// 60394 retf ;~ 1E67:1411
loc_2e062:
	// 8298 
cs=0x1e67;eip=0x001412; 	T(XOR(ax, ax));	// 60398 xor     ax, ax ;~ 1E67:1412
cs=0x1e67;eip=0x001414; 	J(JMP(loc_2e05f));	// 60399 jmp     short loc_2E05F ;~ 1E67:1414

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_stackavail: 	goto _stackavail;
        case m2c::kloc_2e05f: 	goto loc_2e05f;
        case m2c::kloc_2e062: 	goto loc_2e062;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool unknown_libname_1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    unknown_libname_1:
    _begin:
#undef arg_0
#define arg_0 6
	// 60410 arg_0           = word ptr  6 ;~ 1E67:1416
cs=0x1e67;eip=0x001416; 	X(PUSH(bp));	// 60412 push    bp ;~ 1E67:1416
cs=0x1e67;eip=0x001417; 	T(MOV(bp, sp));	// 60413 mov     bp, sp ;~ 1E67:1417
cs=0x1e67;eip=0x001419; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 60414 mov     bx, [bp+arg_0] ;~ 1E67:1419
cs=0x1e67;eip=0x00141c; 	T(OR(bx, bx));	// 60415 or      bx, bx ;~ 1E67:141C
cs=0x1e67;eip=0x00141e; 	J(JZ(loc_2e074));	// 60416 jz      short loc_2E074 ;~ 1E67:141E
cs=0x1e67;eip=0x001420; 	X(OR(*(raddr(ds,bx-2)), 1));	// 60417 or      byte ptr [bx-2], 1 ;~ 1E67:1420
loc_2e074:
	// 8299 
cs=0x1e67;eip=0x001424; 	T(MOV(sp, bp));	// 60420 mov     sp, bp ;~ 1E67:1424
cs=0x1e67;eip=0x001426; 	X(POP(bp));	// 60421 pop     bp ;~ 1E67:1426
cs=0x1e67;eip=0x001427; 	J(RETF(0));	// 60422 retf ;~ 1E67:1427

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_2e074: 	goto loc_2e074;
        case m2c::kunknown_libname_1: 	goto unknown_libname_1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool unknown_libname_2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    unknown_libname_2:
    _begin:
#undef arg_0
#define arg_0 6
	// 60433 arg_0           = word ptr  6 ;~ 1E67:1428
cs=0x1e67;eip=0x001428; 	X(PUSH(bp));	// 60435 push    bp ;~ 1E67:1428
cs=0x1e67;eip=0x001429; 	T(MOV(bp, sp));	// 60436 mov     bp, sp ;~ 1E67:1429
cs=0x1e67;eip=0x00142b; 	X(PUSH(si));	// 60437 push    si ;~ 1E67:142B
cs=0x1e67;eip=0x00142c; 	X(PUSH(di));	// 60438 push    di ;~ 1E67:142C
cs=0x1e67;eip=0x00142d; 	T(MOV(bx, 0x37FE));	// 60439 mov     bx, 37FEh ;~ 1E67:142D
cs=0x1e67;eip=0x001430; 	T(CMP(*(dw*)(raddr(ds,bx)), 0));	// 60440 cmp     word ptr [bx], 0 ;~ 1E67:1430
cs=0x1e67;eip=0x001433; 	J(JNZ(loc_2e0ae));	// 60441 jnz     short loc_2E0AE ;~ 1E67:1433
cs=0x1e67;eip=0x001435; 	X(PUSH(ds));	// 60442 push    ds ;~ 1E67:1435
cs=0x1e67;eip=0x001436; 	X(POP(es));	// 60443 pop     es ;~ 1E67:1436
cs=0x1e67;eip=0x001437; 	T(MOV(ax, 5));	// 60444 mov     ax, 5 ;~ 1E67:1437
cs=0x1e67;eip=0x00143a; 	J(CALL(__amallocbrk,0));	// 60445 call    __amallocbrk ;~ 1E67:143A
cs=0x1e67;eip=0x00143d; 	J(JNZ(loc_2e094));	// 60446 jnz     short loc_2E094 ;~ 1E67:143D
cs=0x1e67;eip=0x00143f; 	T(XOR(ax, ax));	// 60447 xor     ax, ax ;~ 1E67:143F
cs=0x1e67;eip=0x001441; 	T(CWD);	// 60448 cwd ;~ 1E67:1441
cs=0x1e67;eip=0x001442; 	J(JMP(loc_2e0b8));	// 60449 jmp     short loc_2E0B8 ;~ 1E67:1442
loc_2e094:
	// 8300 
cs=0x1e67;eip=0x001444; 	T(INC(ax));	// 60453 inc     ax ;~ 1E67:1444
cs=0x1e67;eip=0x001445; 	T(AND(al, 0x0FE));	// 60454 and     al, 0FEh ;~ 1E67:1445
cs=0x1e67;eip=0x001447; 	X(MOV(word_3ef6e, ax));	// 60455 mov     word_3EF6E, ax ;~ 1E67:1447
cs=0x1e67;eip=0x00144a; 	X(MOV(word_3ef70, ax));	// 60456 mov     word_3EF70, ax ;~ 1E67:144A
cs=0x1e67;eip=0x00144d; 	T(XCHG(ax, si));	// 60457 xchg    ax, si ;~ 1E67:144D
cs=0x1e67;eip=0x00144e; 	X(MOV(*(dw*)(raddr(ds,si)), 1));	// 60458 mov     word ptr [si], 1 ;~ 1E67:144E
cs=0x1e67;eip=0x001452; 	T(ADD(si, 4));	// 60459 add     si, 4 ;~ 1E67:1452
cs=0x1e67;eip=0x001455; 	X(MOV(*(dw*)(raddr(ds,si-2)), 0x0FFFE));	// 60460 mov     word ptr [si-2], 0FFFEh ;~ 1E67:1455
cs=0x1e67;eip=0x00145a; 	X(MOV(word_3ef74, si));	// 60461 mov     word_3EF74, si ;~ 1E67:145A
loc_2e0ae:
	// 8301 
cs=0x1e67;eip=0x00145e; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_0))));	// 60464 mov     cx, [bp+arg_0] ;~ 1E67:145E
cs=0x1e67;eip=0x001461; 	T(MOV(ax, ds));	// 60465 mov     ax, ds ;~ 1E67:1461
cs=0x1e67;eip=0x001463; 	T(MOV(es, ax));	// 60466 mov     es, ax ;~ 1E67:1463
cs=0x1e67;eip=0x001465; 	J(CALL(__amalloc,0));	// 60467 call    __amalloc ;~ 1E67:1465
loc_2e0b8:
	// 8302 
cs=0x1e67;eip=0x001468; 	X(POP(di));	// 60470 pop     di ;~ 1E67:1468
cs=0x1e67;eip=0x001469; 	X(POP(si));	// 60471 pop     si ;~ 1E67:1469
cs=0x1e67;eip=0x00146a; 	T(MOV(sp, bp));	// 60472 mov     sp, bp ;~ 1E67:146A
cs=0x1e67;eip=0x00146c; 	X(POP(bp));	// 60473 pop     bp ;~ 1E67:146C
cs=0x1e67;eip=0x00146d; 	J(RETF(0));	// 60474 retf ;~ 1E67:146D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_2e094: 	goto loc_2e094;
        case m2c::kloc_2e0ae: 	goto loc_2e0ae;
        case m2c::kloc_2e0b8: 	goto loc_2e0b8;
        case m2c::kunknown_libname_2: 	goto unknown_libname_2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group7:
    _begin:
seg010_146e_proc:
	// 60480 
loc_2e0be:
	// 8303 
cs=0x1e67;eip=0x00146e; 	J(JMP(loc_2e18f));	// 60482 jmp     loc_2E18F ;~ 1E67:146E
__amalloc:
	// 60489 
cs=0x1e67;eip=0x001471; 	T(INC(cx));	// 60493 inc     cx ;~ 1E67:1471
cs=0x1e67;eip=0x001472; 	J(JZ(loc_2e0be));	// 60494 jz      short loc_2E0BE ;~ 1E67:1472
cs=0x1e67;eip=0x001474; 	T(AND(cl, 0x0FE));	// 60495 and     cl, 0FEh ;~ 1E67:1474
cs=0x1e67;eip=0x001477; 	T(CMP(cx, 0x0FFEE));	// 60496 cmp     cx, 0FFEEh ;~ 1E67:1477
cs=0x1e67;eip=0x00147a; 	J(JNC(loc_2e0be));	// 60497 jnb     short loc_2E0BE ;~ 1E67:147A
cs=0x1e67;eip=0x00147c; 	T(MOV(si, *(dw*)(raddr(ds,bx+2))));	// 60498 mov     si, [bx+2] ;~ 1E67:147C
cs=0x1e67;eip=0x00147f; 	T(CLD);	// 60499 cld ;~ 1E67:147F
cs=0x1e67;eip=0x001480; 	T(LODSW);	// 60500 lodsw ;~ 1E67:1480
cs=0x1e67;eip=0x001481; 	T(MOV(di, si));	// 60501 mov     di, si ;~ 1E67:1481
cs=0x1e67;eip=0x001483; 	T(TEST(al, 1));	// 60502 test    al, 1 ;~ 1E67:1483
cs=0x1e67;eip=0x001485; 	J(JZ(loc_2e119));	// 60503 jz      short loc_2E119 ;~ 1E67:1485
loc_2e0d7:
	// 8304 
cs=0x1e67;eip=0x001487; 	T(DEC(ax));	// 60506 dec     ax ;~ 1E67:1487
cs=0x1e67;eip=0x001488; 	T(CMP(ax, cx));	// 60507 cmp     ax, cx ;~ 1E67:1488
cs=0x1e67;eip=0x00148a; 	J(JNC(loc_2e0f1));	// 60508 jnb     short loc_2E0F1 ;~ 1E67:148A
cs=0x1e67;eip=0x00148c; 	T(MOV(dx, ax));	// 60509 mov     dx, ax ;~ 1E67:148C
cs=0x1e67;eip=0x00148e; 	T(ADD(si, ax));	// 60510 add     si, ax ;~ 1E67:148E
cs=0x1e67;eip=0x001490; 	T(LODSW);	// 60511 lodsw ;~ 1E67:1490
cs=0x1e67;eip=0x001491; 	T(TEST(al, 1));	// 60512 test    al, 1 ;~ 1E67:1491
cs=0x1e67;eip=0x001493; 	J(JZ(loc_2e119));	// 60513 jz      short loc_2E119 ;~ 1E67:1493
cs=0x1e67;eip=0x001495; 	T(ADD(ax, dx));	// 60514 add     ax, dx ;~ 1E67:1495
cs=0x1e67;eip=0x001497; 	T(ADD(ax, 2));	// 60515 add     ax, 2 ;~ 1E67:1497
cs=0x1e67;eip=0x00149a; 	T(MOV(si, di));	// 60516 mov     si, di ;~ 1E67:149A
cs=0x1e67;eip=0x00149c; 	X(MOV(*(dw*)(raddr(ds,si-2)), ax));	// 60517 mov     [si-2], ax ;~ 1E67:149C
cs=0x1e67;eip=0x00149f; 	J(JMP(loc_2e0d7));	// 60518 jmp     short loc_2E0D7 ;~ 1E67:149F
loc_2e0f1:
	// 8305 
cs=0x1e67;eip=0x0014a1; 	T(MOV(di, si));	// 60523 mov     di, si ;~ 1E67:14A1
cs=0x1e67;eip=0x0014a3; 	J(JZ(loc_2e101));	// 60524 jz      short loc_2E101 ;~ 1E67:14A3
cs=0x1e67;eip=0x0014a5; 	T(ADD(di, cx));	// 60525 add     di, cx ;~ 1E67:14A5
cs=0x1e67;eip=0x0014a7; 	X(MOV(*(dw*)(raddr(ds,si-2)), cx));	// 60526 mov     [si-2], cx ;~ 1E67:14A7
cs=0x1e67;eip=0x0014aa; 	T(SUB(ax, cx));	// 60527 sub     ax, cx ;~ 1E67:14AA
cs=0x1e67;eip=0x0014ac; 	T(DEC(ax));	// 60528 dec     ax ;~ 1E67:14AC
cs=0x1e67;eip=0x0014ad; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 60529 mov     [di], ax ;~ 1E67:14AD
cs=0x1e67;eip=0x0014af; 	J(JMP(loc_2e106));	// 60530 jmp     short loc_2E106 ;~ 1E67:14AF
loc_2e101:
	// 8306 
cs=0x1e67;eip=0x0014b1; 	T(ADD(di, cx));	// 60534 add     di, cx ;~ 1E67:14B1
cs=0x1e67;eip=0x0014b3; 	X(DEC(*(raddr(ds,si-2))));	// 60535 dec     byte ptr [si-2] ;~ 1E67:14B3
loc_2e106:
	// 8307 
cs=0x1e67;eip=0x0014b6; 	T(MOV(ax, si));	// 60538 mov     ax, si ;~ 1E67:14B6
cs=0x1e67;eip=0x0014b8; 	T(MOV(dx, ds));	// 60539 mov     dx, ds ;~ 1E67:14B8
cs=0x1e67;eip=0x0014ba; 	T(MOV(cx, ss));	// 60540 mov     cx, ss ;~ 1E67:14BA
cs=0x1e67;eip=0x0014bc; 	T(CMP(dx, cx));	// 60541 cmp     dx, cx ;~ 1E67:14BC
cs=0x1e67;eip=0x0014be; 	J(JZ(loc_2e115));	// 60542 jz      short loc_2E115 ;~ 1E67:14BE
cs=0x1e67;eip=0x0014c0; 	X(MOV(*(dw*)(((db*)&word_3ef7c)), ds));	// 60543 mov     es:word_3EF7C, ds ;~ 1E67:14C0
loc_2e115:
	// 8308 
cs=0x1e67;eip=0x0014c5; 	X(MOV(*(dw*)(raddr(ds,bx+2)), di));	// 60546 mov     [bx+2], di ;~ 1E67:14C5
cs=0x1e67;eip=0x0014c8; 	J(RETN(0));	// 60547 retn ;~ 1E67:14C8
loc_2e119:
	// 8309 
cs=0x1e67;eip=0x0014c9; 	X(MOV(*(&byte_3ef82), 2));	// 60552 mov     es:byte_3EF82, 2 ;~ 1E67:14C9
loc_2e11f:
	// 8310 
cs=0x1e67;eip=0x0014cf; 	T(CMP(ax, 0x0FFFE));	// 60556 cmp     ax, 0FFFEh ;~ 1E67:14CF
cs=0x1e67;eip=0x0014d2; 	J(JZ(loc_2e149));	// 60557 jz      short loc_2E149 ;~ 1E67:14D2
cs=0x1e67;eip=0x0014d4; 	T(MOV(di, si));	// 60558 mov     di, si ;~ 1E67:14D4
cs=0x1e67;eip=0x0014d6; 	T(ADD(si, ax));	// 60559 add     si, ax ;~ 1E67:14D6
loc_2e128:
	// 8311 
cs=0x1e67;eip=0x0014d8; 	T(LODSW);	// 60563 lodsw ;~ 1E67:14D8
cs=0x1e67;eip=0x0014d9; 	T(TEST(al, 1));	// 60564 test    al, 1 ;~ 1E67:14D9
cs=0x1e67;eip=0x0014db; 	J(JZ(loc_2e11f));	// 60565 jz      short loc_2E11F ;~ 1E67:14DB
cs=0x1e67;eip=0x0014dd; 	T(MOV(di, si));	// 60566 mov     di, si ;~ 1E67:14DD
loc_2e12f:
	// 8312 
cs=0x1e67;eip=0x0014df; 	T(DEC(ax));	// 60569 dec     ax ;~ 1E67:14DF
cs=0x1e67;eip=0x0014e0; 	T(CMP(ax, cx));	// 60570 cmp     ax, cx ;~ 1E67:14E0
cs=0x1e67;eip=0x0014e2; 	J(JNC(loc_2e0f1));	// 60571 jnb     short loc_2E0F1 ;~ 1E67:14E2
cs=0x1e67;eip=0x0014e4; 	T(MOV(dx, ax));	// 60572 mov     dx, ax ;~ 1E67:14E4
cs=0x1e67;eip=0x0014e6; 	T(ADD(si, ax));	// 60573 add     si, ax ;~ 1E67:14E6
cs=0x1e67;eip=0x0014e8; 	T(LODSW);	// 60574 lodsw ;~ 1E67:14E8
cs=0x1e67;eip=0x0014e9; 	T(TEST(al, 1));	// 60575 test    al, 1 ;~ 1E67:14E9
cs=0x1e67;eip=0x0014eb; 	J(JZ(loc_2e11f));	// 60576 jz      short loc_2E11F ;~ 1E67:14EB
cs=0x1e67;eip=0x0014ed; 	T(ADD(ax, dx));	// 60577 add     ax, dx ;~ 1E67:14ED
cs=0x1e67;eip=0x0014ef; 	T(ADD(ax, 2));	// 60578 add     ax, 2 ;~ 1E67:14EF
cs=0x1e67;eip=0x0014f2; 	T(MOV(si, di));	// 60579 mov     si, di ;~ 1E67:14F2
cs=0x1e67;eip=0x0014f4; 	X(MOV(*(dw*)(raddr(ds,si-2)), ax));	// 60580 mov     [si-2], ax ;~ 1E67:14F4
cs=0x1e67;eip=0x0014f7; 	J(JMP(loc_2e12f));	// 60581 jmp     short loc_2E12F ;~ 1E67:14F7
loc_2e149:
	// 8313 
cs=0x1e67;eip=0x0014f9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 60585 mov     ax, [bx+8] ;~ 1E67:14F9
cs=0x1e67;eip=0x0014fc; 	T(OR(ax, ax));	// 60586 or      ax, ax ;~ 1E67:14FC
cs=0x1e67;eip=0x0014fe; 	J(JZ(loc_2e154));	// 60587 jz      short loc_2E154 ;~ 1E67:14FE
cs=0x1e67;eip=0x001500; 	T(MOV(ds, ax));	// 60588 mov     ds, ax ;~ 1E67:1500
cs=0x1e67;eip=0x001502; 	J(JMP(loc_2e168));	// 60589 jmp     short loc_2E168 ;~ 1E67:1502
loc_2e154:
	// 8314 
cs=0x1e67;eip=0x001504; 	X(DEC(*(&byte_3ef82)));	// 60593 dec     es:byte_3EF82 ;~ 1E67:1504
cs=0x1e67;eip=0x001509; 	J(JZ(loc_2e16c));	// 60594 jz      short loc_2E16C ;~ 1E67:1509
cs=0x1e67;eip=0x00150b; 	T(MOV(ax, ds));	// 60595 mov     ax, ds ;~ 1E67:150B
cs=0x1e67;eip=0x00150d; 	T(MOV(di, ss));	// 60596 mov     di, ss ;~ 1E67:150D
cs=0x1e67;eip=0x00150f; 	T(CMP(ax, di));	// 60597 cmp     ax, di ;~ 1E67:150F
cs=0x1e67;eip=0x001511; 	J(JZ(loc_2e168));	// 60598 jz      short loc_2E168 ;~ 1E67:1511
cs=0x1e67;eip=0x001513; 	T(MOV(ds, *(dw*)(((db*)&word_3ef78))));	// 60599 mov     ds, es:word_3EF78 ;~ 1E67:1513
loc_2e168:
	// 8315 
cs=0x1e67;eip=0x001518; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 60604 mov     si, [bx] ;~ 1E67:1518
cs=0x1e67;eip=0x00151a; 	J(JMP(loc_2e128));	// 60605 jmp     short loc_2E128 ;~ 1E67:151A
loc_2e16c:
	// 8316 
cs=0x1e67;eip=0x00151c; 	T(MOV(si, *(dw*)(raddr(ds,bx+6))));	// 60609 mov     si, [bx+6] ;~ 1E67:151C
cs=0x1e67;eip=0x00151f; 	T(XOR(ax, ax));	// 60610 xor     ax, ax ;~ 1E67:151F
cs=0x1e67;eip=0x001521; 	J(CALL(__amlink,0));	// 60611 call    __amlink ;~ 1E67:1521
cs=0x1e67;eip=0x001524; 	T(CMP(ax, si));	// 60612 cmp     ax, si ;~ 1E67:1524
cs=0x1e67;eip=0x001526; 	J(JZ(loc_2e185));	// 60613 jz      short loc_2E185 ;~ 1E67:1526
cs=0x1e67;eip=0x001528; 	T(AND(al, 1));	// 60614 and     al, 1 ;~ 1E67:1528
cs=0x1e67;eip=0x00152a; 	T(INC(ax));	// 60615 inc     ax ;~ 1E67:152A
cs=0x1e67;eip=0x00152b; 	T(INC(ax));	// 60616 inc     ax ;~ 1E67:152B
cs=0x1e67;eip=0x00152c; 	T(CBW);	// 60617 cbw ;~ 1E67:152C
cs=0x1e67;eip=0x00152d; 	J(CALL(__amlink,0));	// 60618 call    __amlink ;~ 1E67:152D
cs=0x1e67;eip=0x001530; 	J(JZ(loc_2e18f));	// 60619 jz      short loc_2E18F ;~ 1E67:1530
cs=0x1e67;eip=0x001532; 	X(DEC(*(raddr(ds,di-2))));	// 60620 dec     byte ptr [di-2] ;~ 1E67:1532
loc_2e185:
	// 8317 
cs=0x1e67;eip=0x001535; 	J(CALL(__amexpand,0));	// 60623 call    __amexpand ;~ 1E67:1535
cs=0x1e67;eip=0x001538; 	J(JZ(loc_2e18f));	// 60624 jz      short loc_2E18F ;~ 1E67:1538
cs=0x1e67;eip=0x00153a; 	T(XCHG(ax, si));	// 60625 xchg    ax, si ;~ 1E67:153A
cs=0x1e67;eip=0x00153b; 	T(DEC(si));	// 60626 dec     si ;~ 1E67:153B
cs=0x1e67;eip=0x00153c; 	T(DEC(si));	// 60627 dec     si ;~ 1E67:153C
cs=0x1e67;eip=0x00153d; 	J(JMP(loc_2e128));	// 60628 jmp     short loc_2E128 ;~ 1E67:153D
loc_2e18f:
	// 8318 
cs=0x1e67;eip=0x00153f; 	T(MOV(ax, ds));	// 60633 mov     ax, ds ;~ 1E67:153F
cs=0x1e67;eip=0x001541; 	T(MOV(cx, ss));	// 60634 mov     cx, ss ;~ 1E67:1541
cs=0x1e67;eip=0x001543; 	T(CMP(ax, cx));	// 60635 cmp     ax, cx ;~ 1E67:1543
cs=0x1e67;eip=0x001545; 	J(JZ(loc_2e19b));	// 60636 jz      short loc_2E19B ;~ 1E67:1545
cs=0x1e67;eip=0x001547; 	X(MOV(*(dw*)(((db*)&word_3ef7c)), ax));	// 60637 mov     es:word_3EF7C, ax ;~ 1E67:1547
loc_2e19b:
	// 8319 
cs=0x1e67;eip=0x00154b; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 60640 mov     ax, [bx] ;~ 1E67:154B
cs=0x1e67;eip=0x00154d; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 60641 mov     [bx+2], ax ;~ 1E67:154D
cs=0x1e67;eip=0x001550; 	T(XOR(ax, ax));	// 60642 xor     ax, ax ;~ 1E67:1550
cs=0x1e67;eip=0x001552; 	T(CWD);	// 60643 cwd ;~ 1E67:1552
cs=0x1e67;eip=0x001553; 	J(RETN(0));	// 60644 retn ;~ 1E67:1553

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__amalloc: 	goto __amalloc;
        case m2c::kloc_2e0d7: 	goto loc_2e0d7;
        case m2c::kloc_2e0f1: 	goto loc_2e0f1;
        case m2c::kloc_2e101: 	goto loc_2e101;
        case m2c::kloc_2e106: 	goto loc_2e106;
        case m2c::kloc_2e115: 	goto loc_2e115;
        case m2c::kloc_2e119: 	goto loc_2e119;
        case m2c::kloc_2e11f: 	goto loc_2e11f;
        case m2c::kloc_2e128: 	goto loc_2e128;
        case m2c::kloc_2e12f: 	goto loc_2e12f;
        case m2c::kloc_2e149: 	goto loc_2e149;
        case m2c::kloc_2e154: 	goto loc_2e154;
        case m2c::kloc_2e168: 	goto loc_2e168;
        case m2c::kloc_2e16c: 	goto loc_2e16c;
        case m2c::kloc_2e185: 	goto loc_2e185;
        case m2c::kloc_2e18f: 	goto loc_2e18f;
        case m2c::kloc_2e19b: 	goto loc_2e19b;
        case m2c::kseg010_146e_proc: 	goto seg010_146e_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __amexpand(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __amexpand:
    _begin:
cs=0x1e67;eip=0x001554; 	X(PUSH(cx));	// 60653 push    cx ;~ 1E67:1554
cs=0x1e67;eip=0x001555; 	T(MOV(ax, *(dw*)(raddr(ds,di-2))));	// 60654 mov     ax, [di-2] ;~ 1E67:1555
cs=0x1e67;eip=0x001558; 	T(TEST(al, 1));	// 60655 test    al, 1 ;~ 1E67:1558
cs=0x1e67;eip=0x00155a; 	J(JZ(loc_2e1af));	// 60656 jz      short loc_2E1AF ;~ 1E67:155A
cs=0x1e67;eip=0x00155c; 	T(SUB(cx, ax));	// 60657 sub     cx, ax ;~ 1E67:155C
cs=0x1e67;eip=0x00155e; 	T(DEC(cx));	// 60658 dec     cx ;~ 1E67:155E
loc_2e1af:
	// 8320 
cs=0x1e67;eip=0x00155f; 	T(INC(cx));	// 60661 inc     cx ;~ 1E67:155F
cs=0x1e67;eip=0x001560; 	T(INC(cx));	// 60662 inc     cx ;~ 1E67:1560
cs=0x1e67;eip=0x001561; 	T(MOV(dx, 0x7FFF));	// 60663 mov     dx, 7FFFh ;~ 1E67:1561
loc_2e1b4:
	// 8321 
cs=0x1e67;eip=0x001564; 	T(CMP(dx, *(dw*)(((db*)&word_3ef7e))));	// 60666 cmp     dx, es:word_3EF7E ;~ 1E67:1564
cs=0x1e67;eip=0x001569; 	J(JBE(loc_2e1bf));	// 60667 jbe     short loc_2E1BF ;~ 1E67:1569
cs=0x1e67;eip=0x00156b; 	T(SHR(dx, 1));	// 60668 shr     dx, 1 ;~ 1E67:156B
cs=0x1e67;eip=0x00156d; 	J(JNZ(loc_2e1b4));	// 60669 jnz     short loc_2E1B4 ;~ 1E67:156D
loc_2e1bf:
	// 8322 
cs=0x1e67;eip=0x00156f; 	T(MOV(ax, cx));	// 60673 mov     ax, cx ;~ 1E67:156F
cs=0x1e67;eip=0x001571; 	T(ADD(ax, si));	// 60674 add     ax, si ;~ 1E67:1571
cs=0x1e67;eip=0x001573; 	J(JC(loc_2e1da));	// 60675 jb      short loc_2E1DA ;~ 1E67:1573
cs=0x1e67;eip=0x001575; 	T(ADD(ax, dx));	// 60676 add     ax, dx ;~ 1E67:1575
cs=0x1e67;eip=0x001577; 	J(JC(loc_2e1d6));	// 60677 jb      short loc_2E1D6 ;~ 1E67:1577
cs=0x1e67;eip=0x001579; 	T(NOT(dx));	// 60678 not     dx ;~ 1E67:1579
cs=0x1e67;eip=0x00157b; 	T(AND(ax, dx));	// 60679 and     ax, dx ;~ 1E67:157B
cs=0x1e67;eip=0x00157d; 	T(SUB(ax, si));	// 60680 sub     ax, si ;~ 1E67:157D
cs=0x1e67;eip=0x00157f; 	J(CALL(__amlink,0));	// 60681 call    __amlink ;~ 1E67:157F
cs=0x1e67;eip=0x001582; 	J(JNZ(loc_2e1dc));	// 60682 jnz     short loc_2E1DC ;~ 1E67:1582
cs=0x1e67;eip=0x001584; 	T(NOT(dx));	// 60683 not     dx ;~ 1E67:1584
loc_2e1d6:
	// 8323 
cs=0x1e67;eip=0x001586; 	T(SHR(dx, 1));	// 60686 shr     dx, 1 ;~ 1E67:1586
cs=0x1e67;eip=0x001588; 	J(JNZ(loc_2e1bf));	// 60687 jnz     short loc_2E1BF ;~ 1E67:1588
loc_2e1da:
	// 8324 
cs=0x1e67;eip=0x00158a; 	T(XOR(ax, ax));	// 60690 xor     ax, ax ;~ 1E67:158A
loc_2e1dc:
	// 8325 
cs=0x1e67;eip=0x00158c; 	X(POP(cx));	// 60693 pop     cx ;~ 1E67:158C
cs=0x1e67;eip=0x00158d; 	J(RETN(0));	// 60694 retn ;~ 1E67:158D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__amexpand: 	goto __amexpand;
        case m2c::kloc_2e1af: 	goto loc_2e1af;
        case m2c::kloc_2e1b4: 	goto loc_2e1b4;
        case m2c::kloc_2e1bf: 	goto loc_2e1bf;
        case m2c::kloc_2e1d6: 	goto loc_2e1d6;
        case m2c::kloc_2e1da: 	goto loc_2e1da;
        case m2c::kloc_2e1dc: 	goto loc_2e1dc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __amlink(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __amlink:
    _begin:
cs=0x1e67;eip=0x00158e; 	X(PUSH(dx));	// 60704 push    dx ;~ 1E67:158E
cs=0x1e67;eip=0x00158f; 	X(PUSH(cx));	// 60705 push    cx ;~ 1E67:158F
cs=0x1e67;eip=0x001590; 	J(CALL(__amallocbrk,0));	// 60706 call    __amallocbrk ;~ 1E67:1590
cs=0x1e67;eip=0x001593; 	J(JZ(loc_2e1fd));	// 60707 jz      short loc_2E1FD ;~ 1E67:1593
cs=0x1e67;eip=0x001595; 	X(PUSH(di));	// 60708 push    di ;~ 1E67:1595
cs=0x1e67;eip=0x001596; 	T(MOV(di, si));	// 60709 mov     di, si ;~ 1E67:1596
cs=0x1e67;eip=0x001598; 	T(MOV(si, ax));	// 60710 mov     si, ax ;~ 1E67:1598
cs=0x1e67;eip=0x00159a; 	T(ADD(si, dx));	// 60711 add     si, dx ;~ 1E67:159A
cs=0x1e67;eip=0x00159c; 	X(MOV(*(dw*)(raddr(ds,si-2)), 0x0FFFE));	// 60712 mov     word ptr [si-2], 0FFFEh ;~ 1E67:159C
cs=0x1e67;eip=0x0015a1; 	X(MOV(*(dw*)(raddr(ds,bx+6)), si));	// 60713 mov     [bx+6], si ;~ 1E67:15A1
cs=0x1e67;eip=0x0015a4; 	T(MOV(dx, si));	// 60714 mov     dx, si ;~ 1E67:15A4
cs=0x1e67;eip=0x0015a6; 	T(SUB(dx, di));	// 60715 sub     dx, di ;~ 1E67:15A6
cs=0x1e67;eip=0x0015a8; 	T(DEC(dx));	// 60716 dec     dx ;~ 1E67:15A8
cs=0x1e67;eip=0x0015a9; 	X(MOV(*(dw*)(raddr(ds,di-2)), dx));	// 60717 mov     [di-2], dx ;~ 1E67:15A9
cs=0x1e67;eip=0x0015ac; 	X(POP(ax));	// 60718 pop     ax ;~ 1E67:15AC
loc_2e1fd:
	// 8326 
cs=0x1e67;eip=0x0015ad; 	X(POP(cx));	// 60721 pop     cx ;~ 1E67:15AD
cs=0x1e67;eip=0x0015ae; 	X(POP(dx));	// 60722 pop     dx ;~ 1E67:15AE
cs=0x1e67;eip=0x0015af; 	J(RETN(0));	// 60723 retn ;~ 1E67:15AF

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__amlink: 	goto __amlink;
        case m2c::kloc_2e1fd: 	goto loc_2e1fd;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __amallocbrk(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __amallocbrk:
    _begin:
cs=0x1e67;eip=0x0015b0; 	X(PUSH(bx));	// 60733 push    bx ;~ 1E67:15B0
cs=0x1e67;eip=0x0015b1; 	X(PUSH(ax));	// 60734 push    ax ;~ 1E67:15B1
cs=0x1e67;eip=0x0015b2; 	T(XOR(dx, dx));	// 60735 xor     dx, dx ;~ 1E67:15B2
cs=0x1e67;eip=0x0015b4; 	X(PUSH(ds));	// 60736 push    ds ;~ 1E67:15B4
cs=0x1e67;eip=0x0015b5; 	X(PUSH(dx));	// 60737 push    dx ;~ 1E67:15B5
cs=0x1e67;eip=0x0015b6; 	X(PUSH(dx));	// 60738 push    dx ;~ 1E67:15B6
cs=0x1e67;eip=0x0015b7; 	X(PUSH(ax));	// 60739 push    ax ;~ 1E67:15B7
cs=0x1e67;eip=0x0015b8; 	T(MOV(ax, 1));	// 60740 mov     ax, 1 ;~ 1E67:15B8
cs=0x1e67;eip=0x0015bb; 	X(PUSH(ax));	// 60741 push    ax ;~ 1E67:15BB
cs=0x1e67;eip=0x0015bc; 	X(PUSH(es));	// 60742 push    es ;~ 1E67:15BC
cs=0x1e67;eip=0x0015bd; 	X(POP(ds));	// 60743 pop     ds ;~ 1E67:15BD
cs=0x1e67;eip=0x0015be; 	J(CALLF(_brkctl,0));	// 60745 call    _brkctl ;~ 1E67:15BE
cs=0x1e67;eip=0x0015c3; 	T(ADD(sp, 8));	// 60746 add     sp, 8 ;~ 1E67:15C3
cs=0x1e67;eip=0x0015c6; 	T(CMP(dx, 0x0FFFF));	// 60747 cmp     dx, 0FFFFh ;~ 1E67:15C6
cs=0x1e67;eip=0x0015c9; 	X(POP(ds));	// 60748 pop     ds ;~ 1E67:15C9
cs=0x1e67;eip=0x0015ca; 	X(POP(dx));	// 60749 pop     dx ;~ 1E67:15CA
cs=0x1e67;eip=0x0015cb; 	X(POP(bx));	// 60750 pop     bx ;~ 1E67:15CB
cs=0x1e67;eip=0x0015cc; 	J(JZ(locret_2e220));	// 60751 jz      short locret_2E220 ;~ 1E67:15CC
cs=0x1e67;eip=0x0015ce; 	T(OR(dx, dx));	// 60752 or      dx, dx ;~ 1E67:15CE
locret_2e220:
	// 8327 
cs=0x1e67;eip=0x0015d0; 	J(RETN(0));	// 60755 retn ;~ 1E67:15D0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__amallocbrk: 	goto __amallocbrk;
        case m2c::klocret_2e220: 	goto locret_2e220;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _brkctl(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _brkctl:
    _begin:
#undef arg_0
#define arg_0 6
	// 60767 arg_0           = word ptr  6 ;~ 1E67:15D2
#undef arg_2
#define arg_2 8
	// 60768 arg_2           = word ptr  8 ;~ 1E67:15D2
#undef arg_4
#define arg_4 0x0A
	// 60769 arg_4           = word ptr  0Ah ;~ 1E67:15D2
#undef arg_8
#define arg_8 0x0E
	// 60770 arg_8           = word ptr  0Eh ;~ 1E67:15D2
cs=0x1e67;eip=0x0015d2; 	X(PUSH(bp));	// 60772 push    bp ;~ 1E67:15D2
cs=0x1e67;eip=0x0015d3; 	T(MOV(bp, sp));	// 60773 mov     bp, sp ;~ 1E67:15D3
cs=0x1e67;eip=0x0015d5; 	X(PUSH(si));	// 60774 push    si ;~ 1E67:15D5
cs=0x1e67;eip=0x0015d6; 	X(PUSH(di));	// 60775 push    di ;~ 1E67:15D6
cs=0x1e67;eip=0x0015d7; 	X(PUSH(es));	// 60776 push    es ;~ 1E67:15D7
cs=0x1e67;eip=0x0015d8; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0));	// 60777 cmp     [bp+arg_4], 0 ;~ 1E67:15D8
cs=0x1e67;eip=0x0015dc; 	J(JNZ(loc_2e266));	// 60778 jnz     short loc_2E266 ;~ 1E67:15DC
cs=0x1e67;eip=0x0015de; 	T(MOV(di, 0x360A));	// 60779 mov     di, 360Ah ;~ 1E67:15DE
cs=0x1e67;eip=0x0015e1; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 60780 mov     dx, [bp+arg_2] ;~ 1E67:15E1
cs=0x1e67;eip=0x0015e4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 60781 mov     ax, [bp+arg_0] ;~ 1E67:15E4
cs=0x1e67;eip=0x0015e7; 	T(DEC(ax));	// 60782 dec     ax ;~ 1E67:15E7
cs=0x1e67;eip=0x0015e8; 	J(JNZ(loc_2e241));	// 60783 jnz     short loc_2E241 ;~ 1E67:15E8
cs=0x1e67;eip=0x0015ea; 	J(CALL(sub_2e290,0));	// 60784 call    sub_2E290 ;~ 1E67:15EA
cs=0x1e67;eip=0x0015ed; 	J(JC(loc_2e266));	// 60785 jb      short loc_2E266 ;~ 1E67:15ED
cs=0x1e67;eip=0x0015ef; 	J(JMP(loc_2e289));	// 60786 jmp     short loc_2E289 ;~ 1E67:15EF
loc_2e241:
	// 8328 
cs=0x1e67;eip=0x0015f1; 	T(MOV(si, word_3edca));	// 60790 mov     si, word_3EDCA ;~ 1E67:15F1
cs=0x1e67;eip=0x0015f5; 	T(DEC(ax));	// 60791 dec     ax ;~ 1E67:15F5
cs=0x1e67;eip=0x0015f6; 	J(JZ(loc_2e259));	// 60792 jz      short loc_2E259 ;~ 1E67:15F6
cs=0x1e67;eip=0x0015f8; 	T(CMP(si, di));	// 60793 cmp     si, di ;~ 1E67:15F8
cs=0x1e67;eip=0x0015fa; 	J(JZ(loc_2e259));	// 60794 jz      short loc_2E259 ;~ 1E67:15FA
cs=0x1e67;eip=0x0015fc; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 60795 mov     ax, [si+2] ;~ 1E67:15FC
cs=0x1e67;eip=0x0015ff; 	X(MOV(*(dw*)(raddr(ss,bp+arg_8)), ax));	// 60796 mov     [bp+arg_8], ax ;~ 1E67:15FF
cs=0x1e67;eip=0x001602; 	X(PUSH(si));	// 60797 push    si ;~ 1E67:1602
cs=0x1e67;eip=0x001603; 	J(CALL(sub_2e290,0));	// 60798 call    sub_2E290 ;~ 1E67:1603
cs=0x1e67;eip=0x001606; 	X(POP(si));	// 60799 pop     si ;~ 1E67:1606
cs=0x1e67;eip=0x001607; 	J(JNC(loc_2e289));	// 60800 jnb     short loc_2E289 ;~ 1E67:1607
loc_2e259:
	// 8329 
cs=0x1e67;eip=0x001609; 	T(ADD(si, 4));	// 60804 add     si, 4 ;~ 1E67:1609
cs=0x1e67;eip=0x00160c; 	T(CMP(si, 0x365A));	// 60805 cmp     si, 365Ah ;~ 1E67:160C
cs=0x1e67;eip=0x001610; 	J(JNC(loc_2e266));	// 60806 jnb     short loc_2E266 ;~ 1E67:1610
cs=0x1e67;eip=0x001612; 	T(OR(dx, dx));	// 60807 or      dx, dx ;~ 1E67:1612
cs=0x1e67;eip=0x001614; 	J(JNZ(loc_2e26c));	// 60808 jnz     short loc_2E26C ;~ 1E67:1614
loc_2e266:
	// 8330 
cs=0x1e67;eip=0x001616; 	T(MOV(ax, 0x0FFFF));	// 60812 mov     ax, 0FFFFh ;~ 1E67:1616
cs=0x1e67;eip=0x001619; 	T(CWD);	// 60813 cwd ;~ 1E67:1619
cs=0x1e67;eip=0x00161a; 	J(JMP(loc_2e289));	// 60814 jmp     short loc_2E289 ;~ 1E67:161A
loc_2e26c:
	// 8331 
cs=0x1e67;eip=0x00161c; 	T(MOV(bx, dx));	// 60818 mov     bx, dx ;~ 1E67:161C
cs=0x1e67;eip=0x00161e; 	T(ADD(bx, 0x0F));	// 60819 add     bx, 0Fh ;~ 1E67:161E
cs=0x1e67;eip=0x001621; 	T(RCR(bx, 1));	// 60820 rcr     bx, 1 ;~ 1E67:1621
cs=0x1e67;eip=0x001623; 	T(MOV(cl, 3));	// 60821 mov     cl, 3 ;~ 1E67:1623
cs=0x1e67;eip=0x001625; 	T(SHR(bx, cl));	// 60822 shr     bx, cl ;~ 1E67:1625
cs=0x1e67;eip=0x001627; 	T(MOV(ah, 0x48));	// 60823 mov     ah, 48h ;~ 1E67:1627
cs=0x1e67;eip=0x001629; 	R(_INT(0x21));	// 60824 int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 1E67:1629
cs=0x1e67;eip=0x00162b; 	J(JC(loc_2e266));	// 60826 jb      short loc_2E266 ;~ 1E67:162B
cs=0x1e67;eip=0x00162d; 	T(XCHG(ax, dx));	// 60827 xchg    ax, dx ;~ 1E67:162D
cs=0x1e67;eip=0x00162e; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 60828 mov     [si], ax ;~ 1E67:162E
cs=0x1e67;eip=0x001630; 	X(MOV(*(dw*)(raddr(ds,si+2)), dx));	// 60829 mov     [si+2], dx ;~ 1E67:1630
cs=0x1e67;eip=0x001633; 	X(MOV(word_3edca, si));	// 60830 mov     word_3EDCA, si ;~ 1E67:1633
cs=0x1e67;eip=0x001637; 	T(XOR(ax, ax));	// 60831 xor     ax, ax ;~ 1E67:1637
loc_2e289:
	// 8332 
cs=0x1e67;eip=0x001639; 	X(POP(es));	// 60835 pop     es ;~ 1E67:1639
cs=0x1e67;eip=0x00163a; 	X(POP(di));	// 60837 pop     di ;~ 1E67:163A
cs=0x1e67;eip=0x00163b; 	X(POP(si));	// 60838 pop     si ;~ 1E67:163B
cs=0x1e67;eip=0x00163c; 	T(MOV(sp, bp));	// 60839 mov     sp, bp ;~ 1E67:163C
cs=0x1e67;eip=0x00163e; 	X(POP(bp));	// 60840 pop     bp ;~ 1E67:163E
cs=0x1e67;eip=0x00163f; 	J(RETF(0));	// 60841 retf ;~ 1E67:163F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_brkctl: 	goto _brkctl;
        case m2c::kloc_2e241: 	goto loc_2e241;
        case m2c::kloc_2e259: 	goto loc_2e259;
        case m2c::kloc_2e266: 	goto loc_2e266;
        case m2c::kloc_2e26c: 	goto loc_2e26c;
        case m2c::kloc_2e289: 	goto loc_2e289;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2e290(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2e290:
    _begin:
cs=0x1e67;eip=0x001640; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0E))));	// 60851 mov     cx, [bp+0Eh] ;~ 1E67:1640
cs=0x1e67;eip=0x001643; 	T(MOV(si, di));	// 60852 mov     si, di ;~ 1E67:1643
loc_2e295:
	// 8333 
cs=0x1e67;eip=0x001645; 	T(CMP(*(dw*)(raddr(ds,si+2)), cx));	// 60855 cmp     [si+2], cx ;~ 1E67:1645
cs=0x1e67;eip=0x001648; 	J(JZ(loc_2e2a6));	// 60856 jz      short loc_2E2A6 ;~ 1E67:1648
cs=0x1e67;eip=0x00164a; 	T(ADD(si, 4));	// 60857 add     si, 4 ;~ 1E67:164A
cs=0x1e67;eip=0x00164d; 	T(CMP(si, 0x365A));	// 60858 cmp     si, 365Ah ;~ 1E67:164D
cs=0x1e67;eip=0x001651; 	J(JNZ(loc_2e295));	// 60859 jnz     short loc_2E295 ;~ 1E67:1651
cs=0x1e67;eip=0x001653; 	T(STC);	// 60860 stc ;~ 1E67:1653
cs=0x1e67;eip=0x001654; 	J(JMP(locret_2e2e5));	// 60861 jmp     short locret_2E2E5 ;~ 1E67:1654
loc_2e2a6:
	// 8334 
cs=0x1e67;eip=0x001656; 	T(MOV(bx, dx));	// 60865 mov     bx, dx ;~ 1E67:1656
cs=0x1e67;eip=0x001658; 	T(ADD(bx, *(dw*)(raddr(ds,si))));	// 60866 add     bx, [si] ;~ 1E67:1658
cs=0x1e67;eip=0x00165a; 	J(JC(locret_2e2e5));	// 60867 jb      short locret_2E2E5 ;~ 1E67:165A
cs=0x1e67;eip=0x00165c; 	T(MOV(dx, bx));	// 60868 mov     dx, bx ;~ 1E67:165C
cs=0x1e67;eip=0x00165e; 	T(MOV(es, cx));	// 60869 mov     es, cx ;~ 1E67:165E
cs=0x1e67;eip=0x001660; 	T(CMP(si, di));	// 60870 cmp     si, di ;~ 1E67:1660
cs=0x1e67;eip=0x001662; 	J(JNZ(loc_2e2ba));	// 60871 jnz     short loc_2E2BA ;~ 1E67:1662
cs=0x1e67;eip=0x001664; 	T(CMP(word_3ed74, bx));	// 60872 cmp     word_3ED74, bx ;~ 1E67:1664
cs=0x1e67;eip=0x001668; 	J(JNC(loc_2e2e0));	// 60873 jnb     short loc_2E2E0 ;~ 1E67:1668
loc_2e2ba:
	// 8335 
cs=0x1e67;eip=0x00166a; 	T(ADD(bx, 0x0F));	// 60876 add     bx, 0Fh ;~ 1E67:166A
cs=0x1e67;eip=0x00166d; 	T(RCR(bx, 1));	// 60877 rcr     bx, 1 ;~ 1E67:166D
cs=0x1e67;eip=0x00166f; 	T(SHR(bx, 1));	// 60878 shr     bx, 1 ;~ 1E67:166F
cs=0x1e67;eip=0x001671; 	T(SHR(bx, 1));	// 60879 shr     bx, 1 ;~ 1E67:1671
cs=0x1e67;eip=0x001673; 	T(SHR(bx, 1));	// 60880 shr     bx, 1 ;~ 1E67:1673
cs=0x1e67;eip=0x001675; 	T(CMP(si, di));	// 60881 cmp     si, di ;~ 1E67:1675
cs=0x1e67;eip=0x001677; 	J(JNZ(loc_2e2d2));	// 60882 jnz     short loc_2E2D2 ;~ 1E67:1677
cs=0x1e67;eip=0x001679; 	T(ADD(bx, cx));	// 60883 add     bx, cx ;~ 1E67:1679
cs=0x1e67;eip=0x00167b; 	T(MOV(ax, crtpspseg));	// 60884 mov     ax, crtpspseg ;~ 1E67:167B
cs=0x1e67;eip=0x00167e; 	T(SUB(bx, ax));	// 60885 sub     bx, ax ;~ 1E67:167E
cs=0x1e67;eip=0x001680; 	T(MOV(es, ax));	// 60886 mov     es, ax ;~ 1E67:1680
loc_2e2d2:
	// 8336 
cs=0x1e67;eip=0x001682; 	T(MOV(ah, 0x4A));	// 60889 mov     ah, 4Ah ;~ 1E67:1682
cs=0x1e67;eip=0x001684; 	R(_INT(0x21));	// 60890 int     21h             ; DOS - 2+ - ADJUST MEMORY BLOCK SIZE (SETBLOCK) ;~ 1E67:1684
cs=0x1e67;eip=0x001686; 	J(JC(locret_2e2e5));	// 60893 jb      short locret_2E2E5 ;~ 1E67:1686
cs=0x1e67;eip=0x001688; 	T(CMP(si, di));	// 60894 cmp     si, di ;~ 1E67:1688
cs=0x1e67;eip=0x00168a; 	J(JNZ(loc_2e2e0));	// 60895 jnz     short loc_2E2E0 ;~ 1E67:168A
cs=0x1e67;eip=0x00168c; 	X(MOV(word_3ed74, dx));	// 60896 mov     word_3ED74, dx ;~ 1E67:168C
loc_2e2e0:
	// 8337 
cs=0x1e67;eip=0x001690; 	T(XCHG(ax, dx));	// 60900 xchg    ax, dx ;~ 1E67:1690
cs=0x1e67;eip=0x001691; 	X(XCHG(ax, *(dw*)(raddr(ds,si))));	// 60901 xchg    ax, [si] ;~ 1E67:1691
cs=0x1e67;eip=0x001693; 	T(MOV(dx, cx));	// 60902 mov     dx, cx ;~ 1E67:1693
locret_2e2e5:
	// 8338 
cs=0x1e67;eip=0x001695; 	J(RETN(0));	// 60906 retn ;~ 1E67:1695

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_2e295: 	goto loc_2e295;
        case m2c::kloc_2e2a6: 	goto loc_2e2a6;
        case m2c::kloc_2e2ba: 	goto loc_2e2ba;
        case m2c::kloc_2e2d2: 	goto loc_2e2d2;
        case m2c::kloc_2e2e0: 	goto loc_2e2e0;
        case m2c::klocret_2e2e5: 	goto locret_2e2e5;
        case m2c::ksub_2e290: 	goto sub_2e290;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _strcat(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _strcat:
    _begin:
#undef arg_0
#define arg_0 6
	// 60918 arg_0           = dword ptr  6 ;~ 1E67:1696
cs=0x1e67;eip=0x001696; 	X(PUSH(bp));	// 60920 push    bp ;~ 1E67:1696
cs=0x1e67;eip=0x001697; 	T(MOV(bp, sp));	// 60921 mov     bp, sp ;~ 1E67:1697
cs=0x1e67;eip=0x001699; 	T(MOV(dx, di));	// 60922 mov     dx, di ;~ 1E67:1699
cs=0x1e67;eip=0x00169b; 	T(MOV(bx, si));	// 60923 mov     bx, si ;~ 1E67:169B
cs=0x1e67;eip=0x00169d; 	T(MOV(ax, ds));	// 60924 mov     ax, ds ;~ 1E67:169D
cs=0x1e67;eip=0x00169f; 	T(MOV(es, ax));	// 60925 mov     es, ax ;~ 1E67:169F
cs=0x1e67;eip=0x0016a1; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 60927 mov     di, word ptr [bp+arg_0] ;~ 1E67:16A1
cs=0x1e67;eip=0x0016a4; 	T(XOR(ax, ax));	// 60928 xor     ax, ax ;~ 1E67:16A4
cs=0x1e67;eip=0x0016a6; 	T(MOV(cx, 0x0FFFF));	// 60929 mov     cx, 0FFFFh ;~ 1E67:16A6
	// 60930 repne scasb ;~ 1E67:16A9
cs=0x1e67;eip=0x0016a9; 	T(	REPNE SCASB);	// 60930 repne scasb ;~ 1E67:16A9
cs=0x1e67;eip=0x0016ab; 	T(si = di-1);	// 60931 lea     si, [di-1] ;~ 1E67:16AB
cs=0x1e67;eip=0x0016ae; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 60932 mov     di, word ptr [bp+arg_0+2] ;~ 1E67:16AE
cs=0x1e67;eip=0x0016b1; 	T(MOV(cx, 0x0FFFF));	// 60933 mov     cx, 0FFFFh ;~ 1E67:16B1
	// 60934 repne scasb ;~ 1E67:16B4
cs=0x1e67;eip=0x0016b4; 	T(	REPNE SCASB);	// 60934 repne scasb ;~ 1E67:16B4
cs=0x1e67;eip=0x0016b6; 	T(NOT(cx));	// 60935 not     cx ;~ 1E67:16B6
cs=0x1e67;eip=0x0016b8; 	T(SUB(di, cx));	// 60936 sub     di, cx ;~ 1E67:16B8
cs=0x1e67;eip=0x0016ba; 	T(XCHG(di, si));	// 60937 xchg    di, si ;~ 1E67:16BA
cs=0x1e67;eip=0x0016bc; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 60938 mov     ax, word ptr [bp+arg_0] ;~ 1E67:16BC
cs=0x1e67;eip=0x0016bf; 	T(TEST(si, 1));	// 60939 test    si, 1 ;~ 1E67:16BF
cs=0x1e67;eip=0x0016c3; 	J(JZ(loc_2e317));	// 60940 jz      short loc_2E317 ;~ 1E67:16C3
cs=0x1e67;eip=0x0016c5; 	X(MOVSB);	// 60941 movsb ;~ 1E67:16C5
cs=0x1e67;eip=0x0016c6; 	T(DEC(cx));	// 60942 dec     cx ;~ 1E67:16C6
loc_2e317:
	// 8339 
cs=0x1e67;eip=0x0016c7; 	T(SHR(cx, 1));	// 60945 shr     cx, 1 ;~ 1E67:16C7
	// 60946 rep movsw ;~ 1E67:16C9
cs=0x1e67;eip=0x0016c9; 	X(	REP MOVSW);	// 60946 rep movsw ;~ 1E67:16C9
cs=0x1e67;eip=0x0016cb; 	T(ADC(cx, cx));	// 60947 adc     cx, cx ;~ 1E67:16CB
	// 60948 rep movsb ;~ 1E67:16CD
cs=0x1e67;eip=0x0016cd; 	X(	REP MOVSB);	// 60948 rep movsb ;~ 1E67:16CD
cs=0x1e67;eip=0x0016cf; 	T(MOV(si, bx));	// 60949 mov     si, bx ;~ 1E67:16CF
cs=0x1e67;eip=0x0016d1; 	T(MOV(di, dx));	// 60950 mov     di, dx ;~ 1E67:16D1
cs=0x1e67;eip=0x0016d3; 	X(POP(bp));	// 60951 pop     bp ;~ 1E67:16D3
cs=0x1e67;eip=0x0016d4; 	J(RETF(0));	// 60952 retf ;~ 1E67:16D4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_strcat: 	goto _strcat;
        case m2c::kloc_2e317: 	goto loc_2e317;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _strcpy(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _strcpy:
    _begin:
#undef arg_0
#define arg_0 6
	// 60966 arg_0           = dword ptr  6 ;~ 1E67:16D6
cs=0x1e67;eip=0x0016d6; 	X(PUSH(bp));	// 60968 push    bp ;~ 1E67:16D6
cs=0x1e67;eip=0x0016d7; 	T(MOV(bp, sp));	// 60969 mov     bp, sp ;~ 1E67:16D7
cs=0x1e67;eip=0x0016d9; 	T(MOV(dx, di));	// 60970 mov     dx, di ;~ 1E67:16D9
cs=0x1e67;eip=0x0016db; 	T(MOV(bx, si));	// 60971 mov     bx, si ;~ 1E67:16DB
cs=0x1e67;eip=0x0016dd; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 60972 mov     si, word ptr [bp+arg_0+2] ;~ 1E67:16DD
cs=0x1e67;eip=0x0016e0; 	T(MOV(di, si));	// 60973 mov     di, si ;~ 1E67:16E0
cs=0x1e67;eip=0x0016e2; 	T(MOV(ax, ds));	// 60974 mov     ax, ds ;~ 1E67:16E2
cs=0x1e67;eip=0x0016e4; 	T(MOV(es, ax));	// 60975 mov     es, ax ;~ 1E67:16E4
cs=0x1e67;eip=0x0016e6; 	T(XOR(ax, ax));	// 60976 xor     ax, ax ;~ 1E67:16E6
cs=0x1e67;eip=0x0016e8; 	T(MOV(cx, 0x0FFFF));	// 60977 mov     cx, 0FFFFh ;~ 1E67:16E8
	// 60978 repne scasb ;~ 1E67:16EB
cs=0x1e67;eip=0x0016eb; 	T(	REPNE SCASB);	// 60978 repne scasb ;~ 1E67:16EB
cs=0x1e67;eip=0x0016ed; 	T(NOT(cx));	// 60979 not     cx ;~ 1E67:16ED
cs=0x1e67;eip=0x0016ef; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 60980 mov     di, word ptr [bp+arg_0] ;~ 1E67:16EF
cs=0x1e67;eip=0x0016f2; 	T(MOV(ax, di));	// 60981 mov     ax, di ;~ 1E67:16F2
cs=0x1e67;eip=0x0016f4; 	T(TEST(al, 1));	// 60982 test    al, 1 ;~ 1E67:16F4
cs=0x1e67;eip=0x0016f6; 	J(JZ(loc_2e34a));	// 60983 jz      short loc_2E34A ;~ 1E67:16F6
cs=0x1e67;eip=0x0016f8; 	X(MOVSB);	// 60984 movsb ;~ 1E67:16F8
cs=0x1e67;eip=0x0016f9; 	T(DEC(cx));	// 60985 dec     cx ;~ 1E67:16F9
loc_2e34a:
	// 8340 
cs=0x1e67;eip=0x0016fa; 	T(SHR(cx, 1));	// 60988 shr     cx, 1 ;~ 1E67:16FA
	// 60989 rep movsw ;~ 1E67:16FC
cs=0x1e67;eip=0x0016fc; 	X(	REP MOVSW);	// 60989 rep movsw ;~ 1E67:16FC
cs=0x1e67;eip=0x0016fe; 	T(ADC(cx, cx));	// 60990 adc     cx, cx ;~ 1E67:16FE
	// 60991 rep movsb ;~ 1E67:1700
cs=0x1e67;eip=0x001700; 	X(	REP MOVSB);	// 60991 rep movsb ;~ 1E67:1700
cs=0x1e67;eip=0x001702; 	T(MOV(si, bx));	// 60992 mov     si, bx ;~ 1E67:1702
cs=0x1e67;eip=0x001704; 	T(MOV(di, dx));	// 60993 mov     di, dx ;~ 1E67:1704
cs=0x1e67;eip=0x001706; 	X(POP(bp));	// 60994 pop     bp ;~ 1E67:1706
cs=0x1e67;eip=0x001707; 	J(RETF(0));	// 60995 retf ;~ 1E67:1707

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_strcpy: 	goto _strcpy;
        case m2c::kloc_2e34a: 	goto loc_2e34a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _strcmp(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _strcmp:
    _begin:
#undef arg_0
#define arg_0 6
	// 61007 arg_0           = dword ptr  6 ;~ 1E67:1708
cs=0x1e67;eip=0x001708; 	X(PUSH(bp));	// 61009 push    bp ;~ 1E67:1708
cs=0x1e67;eip=0x001709; 	T(MOV(bp, sp));	// 61010 mov     bp, sp ;~ 1E67:1709
cs=0x1e67;eip=0x00170b; 	T(MOV(dx, di));	// 61011 mov     dx, di ;~ 1E67:170B
cs=0x1e67;eip=0x00170d; 	T(MOV(bx, si));	// 61012 mov     bx, si ;~ 1E67:170D
cs=0x1e67;eip=0x00170f; 	T(MOV(ax, ds));	// 61013 mov     ax, ds ;~ 1E67:170F
cs=0x1e67;eip=0x001711; 	T(MOV(es, ax));	// 61014 mov     es, ax ;~ 1E67:1711
cs=0x1e67;eip=0x001713; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61015 mov     si, word ptr [bp+arg_0] ;~ 1E67:1713
cs=0x1e67;eip=0x001716; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 61016 mov     di, word ptr [bp+arg_0+2] ;~ 1E67:1716
cs=0x1e67;eip=0x001719; 	T(XOR(ax, ax));	// 61017 xor     ax, ax ;~ 1E67:1719
cs=0x1e67;eip=0x00171b; 	T(MOV(cx, 0x0FFFF));	// 61018 mov     cx, 0FFFFh ;~ 1E67:171B
	// 61019 repne scasb ;~ 1E67:171E
cs=0x1e67;eip=0x00171e; 	T(	REPNE SCASB);	// 61019 repne scasb ;~ 1E67:171E
cs=0x1e67;eip=0x001720; 	T(NOT(cx));	// 61020 not     cx ;~ 1E67:1720
cs=0x1e67;eip=0x001722; 	T(SUB(di, cx));	// 61021 sub     di, cx ;~ 1E67:1722
	// 61022 repe cmpsb ;~ 1E67:1724
cs=0x1e67;eip=0x001724; 	T(	REPE CMPSB);	// 61022 repe cmpsb ;~ 1E67:1724
cs=0x1e67;eip=0x001726; 	J(JZ(loc_2e37d));	// 61023 jz      short loc_2E37D ;~ 1E67:1726
cs=0x1e67;eip=0x001728; 	T(SBB(ax, ax));	// 61024 sbb     ax, ax ;~ 1E67:1728
cs=0x1e67;eip=0x00172a; 	T(SBB(ax, 0x0FFFF));	// 61025 sbb     ax, 0FFFFh ;~ 1E67:172A
loc_2e37d:
	// 8341 
cs=0x1e67;eip=0x00172d; 	T(MOV(si, bx));	// 61028 mov     si, bx ;~ 1E67:172D
cs=0x1e67;eip=0x00172f; 	T(MOV(di, dx));	// 61029 mov     di, dx ;~ 1E67:172F
cs=0x1e67;eip=0x001731; 	X(POP(bp));	// 61030 pop     bp ;~ 1E67:1731
cs=0x1e67;eip=0x001732; 	J(RETF(0));	// 61031 retf ;~ 1E67:1732

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_strcmp: 	goto _strcmp;
        case m2c::kloc_2e37d: 	goto loc_2e37d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _strlen(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _strlen:
    _begin:
#undef arg_0
#define arg_0 6
	// 61045 arg_0           = dword ptr  6 ;~ 1E67:1734
cs=0x1e67;eip=0x001734; 	X(PUSH(bp));	// 61047 push    bp ;~ 1E67:1734
cs=0x1e67;eip=0x001735; 	T(MOV(bp, sp));	// 61048 mov     bp, sp ;~ 1E67:1735
cs=0x1e67;eip=0x001737; 	T(MOV(dx, di));	// 61049 mov     dx, di ;~ 1E67:1737
cs=0x1e67;eip=0x001739; 	T(MOV(ax, ds));	// 61050 mov     ax, ds ;~ 1E67:1739
cs=0x1e67;eip=0x00173b; 	T(MOV(es, ax));	// 61051 mov     es, ax ;~ 1E67:173B
cs=0x1e67;eip=0x00173d; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61052 mov     di, word ptr [bp+arg_0] ;~ 1E67:173D
cs=0x1e67;eip=0x001740; 	T(XOR(ax, ax));	// 61053 xor     ax, ax ;~ 1E67:1740
cs=0x1e67;eip=0x001742; 	T(MOV(cx, 0x0FFFF));	// 61054 mov     cx, 0FFFFh ;~ 1E67:1742
	// 61055 repne scasb ;~ 1E67:1745
cs=0x1e67;eip=0x001745; 	T(	REPNE SCASB);	// 61055 repne scasb ;~ 1E67:1745
cs=0x1e67;eip=0x001747; 	T(NOT(cx));	// 61056 not     cx ;~ 1E67:1747
cs=0x1e67;eip=0x001749; 	T(DEC(cx));	// 61057 dec     cx ;~ 1E67:1749
cs=0x1e67;eip=0x00174a; 	T(XCHG(ax, cx));	// 61058 xchg    ax, cx ;~ 1E67:174A
cs=0x1e67;eip=0x00174b; 	T(MOV(di, dx));	// 61059 mov     di, dx ;~ 1E67:174B
cs=0x1e67;eip=0x00174d; 	X(POP(bp));	// 61060 pop     bp ;~ 1E67:174D
cs=0x1e67;eip=0x00174e; 	J(RETF(0));	// 61061 retf ;~ 1E67:174E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_strlen: 	goto _strlen;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _itoa(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _itoa:
    _begin:
#undef arg_0
#define arg_0 6
	// 61074 arg_0           = dword ptr  6 ;~ 1E67:1750
#undef arg_4
#define arg_4 0x0A
	// 61075 arg_4           = dword ptr  0Ah ;~ 1E67:1750
cs=0x1e67;eip=0x001750; 	X(PUSH(bp));	// 61079 push    bp ;~ 1E67:1750
cs=0x1e67;eip=0x001751; 	T(MOV(bp, sp));	// 61080 mov     bp, sp ;~ 1E67:1751
cs=0x1e67;eip=0x001753; 	X(PUSH(si));	// 61081 push    si ;~ 1E67:1753
cs=0x1e67;eip=0x001754; 	X(PUSH(di));	// 61082 push    di ;~ 1E67:1754
cs=0x1e67;eip=0x001755; 	T(MOV(bl, 1));	// 61083 mov     bl, 1 ;~ 1E67:1755
cs=0x1e67;eip=0x001757; 	T(MOV(cx, *(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 61084 mov     cx, word ptr [bp+arg_4] ;~ 1E67:1757
cs=0x1e67;eip=0x00175a; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61085 mov     ax, word ptr [bp+arg_0] ;~ 1E67:175A
cs=0x1e67;eip=0x00175d; 	T(XOR(dx, dx));	// 61086 xor     dx, dx ;~ 1E67:175D
cs=0x1e67;eip=0x00175f; 	T(CMP(cx, 0x0A));	// 61087 cmp     cx, 0Ah ;~ 1E67:175F
cs=0x1e67;eip=0x001762; 	J(JNZ(loc_2e3b5));	// 61088 jnz     short loc_2E3B5 ;~ 1E67:1762
cs=0x1e67;eip=0x001764; 	T(CWD);	// 61089 cwd ;~ 1E67:1764
loc_2e3b5:
	// 8342 
cs=0x1e67;eip=0x001765; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 61092 mov     di, word ptr [bp+arg_0+2] ;~ 1E67:1765
cs=0x1e67;eip=0x001768; 	J(return seg010_18d8_proc(m2c::k__cxtoa, _state););	// 61093 jmp     __cxtoa ;~ 1E67:1768

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_itoa: 	goto _itoa;
        case m2c::kloc_2e3b5: 	goto loc_2e3b5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _ultoa(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _ultoa:
    _begin:
#undef arg_2
#define arg_2 6
	// 61106 arg_2           = word ptr  6 ;~ 1E67:176C
#undef arg_4
#define arg_4 8
	// 61107 arg_4           = dword ptr  8 ;~ 1E67:176C
#undef arg_8
#define arg_8 0x0C
	// 61108 arg_8           = dword ptr  0Ch ;~ 1E67:176C
cs=0x1e67;eip=0x00176c; 	X(PUSH(bp));	// 61112 push    bp ;~ 1E67:176C
cs=0x1e67;eip=0x00176d; 	T(MOV(bp, sp));	// 61113 mov     bp, sp ;~ 1E67:176D
cs=0x1e67;eip=0x00176f; 	X(PUSH(si));	// 61114 push    si ;~ 1E67:176F
cs=0x1e67;eip=0x001770; 	X(PUSH(di));	// 61115 push    di ;~ 1E67:1770
cs=0x1e67;eip=0x001771; 	T(MOV(bl, 0));	// 61116 mov     bl, 0 ;~ 1E67:1771
cs=0x1e67;eip=0x001773; 	J(return seg010_18d8_proc(m2c::k__cltoasub, _state););	// 61117 jmp     __cltoasub ;~ 1E67:1773

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_ultoa: 	goto _ultoa;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _abort(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _abort:
    _begin:
cs=0x1e67;eip=0x001776; 	X(PUSH(bp));	// 61127 push    bp ;~ 1E67:1776
cs=0x1e67;eip=0x001777; 	T(MOV(bp, sp));	// 61128 mov     bp, sp ;~ 1E67:1777
cs=0x1e67;eip=0x001779; 	T(MOV(ax, 0x0A));	// 61129 mov     ax, 0Ah ;~ 1E67:1779
cs=0x1e67;eip=0x00177c; 	X(PUSH(ax));	// 61130 push    ax ;~ 1E67:177C
cs=0x1e67;eip=0x00177d; 	J(CALLF(__nmsg_write,0));	// 61131 call    __NMSG_WRITE ;~ 1E67:177D
cs=0x1e67;eip=0x001782; 	T(MOV(ax, 0x16));	// 61132 mov     ax, 16h ;~ 1E67:1782
cs=0x1e67;eip=0x001785; 	X(PUSH(ax));	// 61133 push    ax              ; int ;~ 1E67:1785
cs=0x1e67;eip=0x001786; 	J(CALLF(_raise,0));	// 61134 call    _raise ;~ 1E67:1786
cs=0x1e67;eip=0x00178b; 	T(MOV(ax, 3));	// 61135 mov     ax, 3 ;~ 1E67:178B
cs=0x1e67;eip=0x00178e; 	X(PUSH(ax));	// 61136 push    ax ;~ 1E67:178E
cs=0x1e67;eip=0x00178f; 	J(CALLF(libsub_quit_to_dos,0));	// 61137 call    far ptr libsub_quit_to_dos ;~ 1E67:178F
	R(return seg010_1794_proc(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_abort: 	goto _abort;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg010_1794_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg010_1794_proc:
    _begin:
cs=0x1e67;eip=0x001794; 	T(MOV(sp, bp));	// 61141 mov     sp, bp ;~ 1E67:1794
cs=0x1e67;eip=0x001796; 	X(POP(bp));	// 61142 pop     bp ;~ 1E67:1796
cs=0x1e67;eip=0x001797; 	J(RETF(0));	// 61143 retf ;~ 1E67:1797

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg010_1794_proc: 	goto seg010_1794_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _isatty(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _isatty:
    _begin:
#undef arg_0
#define arg_0 6
	// 61153 arg_0           = dword ptr  6 ;~ 1E67:1798
cs=0x1e67;eip=0x001798; 	X(PUSH(bp));	// 61155 push    bp ;~ 1E67:1798
cs=0x1e67;eip=0x001799; 	T(MOV(bp, sp));	// 61156 mov     bp, sp ;~ 1E67:1799
cs=0x1e67;eip=0x00179b; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61157 mov     bx, word ptr [bp+arg_0] ;~ 1E67:179B
cs=0x1e67;eip=0x00179e; 	T(CMP(bx, word_3edf2));	// 61158 cmp     bx, word_3EDF2 ;~ 1E67:179E
cs=0x1e67;eip=0x0017a2; 	J(JGE(loc_2e405));	// 61159 jge     short loc_2E405 ;~ 1E67:17A2
cs=0x1e67;eip=0x0017a4; 	T(CMP(bx, 0));	// 61160 cmp     bx, 0 ;~ 1E67:17A4
cs=0x1e67;eip=0x0017a7; 	J(JL(loc_2e405));	// 61161 jl      short loc_2E405 ;~ 1E67:17A7
cs=0x1e67;eip=0x0017a9; 	T(TEST(*(raddr(ds,bx+0x3684)), 0x40));	// 61162 test    byte ptr [bx+3684h], 40h ;~ 1E67:17A9
cs=0x1e67;eip=0x0017ae; 	J(JZ(loc_2e405));	// 61163 jz      short loc_2E405 ;~ 1E67:17AE
cs=0x1e67;eip=0x0017b0; 	T(MOV(ax, 1));	// 61164 mov     ax, 1 ;~ 1E67:17B0
cs=0x1e67;eip=0x0017b3; 	J(JMP(loc_2e407));	// 61165 jmp     short loc_2E407 ;~ 1E67:17B3
loc_2e405:
	// 8343 
cs=0x1e67;eip=0x0017b5; 	T(XOR(ax, ax));	// 61170 xor     ax, ax ;~ 1E67:17B5
loc_2e407:
	// 8344 
cs=0x1e67;eip=0x0017b7; 	T(MOV(sp, bp));	// 61173 mov     sp, bp ;~ 1E67:17B7
cs=0x1e67;eip=0x0017b9; 	X(POP(bp));	// 61174 pop     bp ;~ 1E67:17B9
cs=0x1e67;eip=0x0017ba; 	J(RETF(0));	// 61175 retf ;~ 1E67:17BA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_isatty: 	goto _isatty;
        case m2c::kloc_2e405: 	goto loc_2e405;
        case m2c::kloc_2e407: 	goto loc_2e407;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _int86(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;
db int_num;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _int86:
    _begin:
#undef var_e
#define var_e -0x0E
	// 61189 var_E           = dword ptr -0Eh ;~ 1E67:17BC
#undef var_a
#define var_a -0x0A
	// 61190 var_A           = byte ptr -0Ah ;~ 1E67:17BC
#undef var_9
#define var_9 -9
	// 61191 var_9           = byte ptr -9 ;~ 1E67:17BC
#undef var_8
#define var_8 -8
	// 61192 var_8           = byte ptr -8 ;~ 1E67:17BC
#undef var_7
#define var_7 -7
	// 61193 var_7           = byte ptr -7 ;~ 1E67:17BC
#undef var_6
#define var_6 -6
	// 61194 var_6           = byte ptr -6 ;~ 1E67:17BC
#undef arg_0
#define arg_0 6
	// 61195 arg_0           = dword ptr  6 ;~ 1E67:17BC
#undef arg_4
#define arg_4 0x0A
	// 61196 arg_4           = dword ptr  0Ah ;~ 1E67:17BC
cs=0x1e67;eip=0x0017bc; 	X(PUSH(bp));	// 61198 push    bp ;~ 1E67:17BC
cs=0x1e67;eip=0x0017bd; 	T(MOV(bp, sp));	// 61199 mov     bp, sp ;~ 1E67:17BD
cs=0x1e67;eip=0x0017bf; 	X(PUSH(si));	// 61200 push    si ;~ 1E67:17BF
cs=0x1e67;eip=0x0017c0; 	X(PUSH(di));	// 61201 push    di ;~ 1E67:17C0
cs=0x1e67;eip=0x0017c1; 	T(SUB(sp, 0x0A));	// 61202 sub     sp, 0Ah ;~ 1E67:17C1
cs=0x1e67;eip=0x0017c4; 	X(MOV(*(raddr(ss,bp+var_a)), 0x0CD));	// 61203 mov     [bp+var_A], 0CDh ; 'Í' ;~ 1E67:17C4
cs=0x1e67;eip=0x0017c8; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61204 mov     ax, word ptr [bp+arg_0] ;~ 1E67:17C8
cs=0x1e67;eip=0x0017cb; 	X(MOV(*(raddr(ss,bp+var_9)), al));	// 61205 mov     [bp+var_9], al ;~ 1E67:17CB
int_num=al;
cs=0x1e67;eip=0x0017ce; 	T(CMP(al, 0x25));	// 61206 cmp     al, 25h ; '%' ;~ 1E67:17CE
cs=0x1e67;eip=0x0017d0; 	J(JZ(loc_2e42c));	// 61207 jz      short loc_2E42C ;~ 1E67:17D0
cs=0x1e67;eip=0x0017d2; 	T(CMP(al, 0x26));	// 61208 cmp     al, 26h ; '&' ;~ 1E67:17D2
cs=0x1e67;eip=0x0017d4; 	J(JZ(loc_2e42c));	// 61209 jz      short loc_2E42C ;~ 1E67:17D4
cs=0x1e67;eip=0x0017d6; 	X(MOV(*(raddr(ss,bp+var_8)), 0x0CB));	// 61210 mov     [bp+var_8], 0CBh ; 'Ë' ;~ 1E67:17D6
cs=0x1e67;eip=0x0017da; 	J(JMP(loc_2e438));	// 61211 jmp     short loc_2E438 ;~ 1E67:17DA
loc_2e42c:
	// 8345 
cs=0x1e67;eip=0x0017dc; 	X(MOV(*(raddr(ss,bp+var_6)), 0x0CB));	// 61216 mov     [bp+var_6], 0CBh ; 'Ë' ;~ 1E67:17DC
cs=0x1e67;eip=0x0017e0; 	X(MOV(*(raddr(ss,bp+var_7)), 0x44));	// 61217 mov     [bp+var_7], 44h ; 'D' ;~ 1E67:17E0
cs=0x1e67;eip=0x0017e4; 	X(MOV(*(raddr(ss,bp+var_8)), 0x44));	// 61218 mov     [bp+var_8], 44h ; 'D' ;~ 1E67:17E4
loc_2e438:
	// 8346 
cs=0x1e67;eip=0x0017e8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e +2))), ss));	// 61221 mov     word ptr [bp+var_E+2], ss ;~ 1E67:17E8
cs=0x1e67;eip=0x0017eb; 	T(ax = bp+var_a);	// 61222 lea     ax, [bp+var_A] ;~ 1E67:17EB
cs=0x1e67;eip=0x0017ee; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e))), ax));	// 61223 mov     word ptr [bp+var_E], ax ;~ 1E67:17EE
cs=0x1e67;eip=0x0017f1; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 61224 mov     di, word ptr [bp+arg_0+2] ;~ 1E67:17F1
cs=0x1e67;eip=0x0017f4; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 61225 mov     ax, [di] ;~ 1E67:17F4
cs=0x1e67;eip=0x0017f6; 	T(MOV(bx, *(dw*)(raddr(ds,di+2))));	// 61226 mov     bx, [di+2] ;~ 1E67:17F6
cs=0x1e67;eip=0x0017f9; 	T(MOV(cx, *(dw*)(raddr(ds,di+4))));	// 61227 mov     cx, [di+4] ;~ 1E67:17F9
cs=0x1e67;eip=0x0017fc; 	T(MOV(dx, *(dw*)(raddr(ds,di+6))));	// 61228 mov     dx, [di+6] ;~ 1E67:17FC
cs=0x1e67;eip=0x0017ff; 	T(MOV(si, *(dw*)(raddr(ds,di+8))));	// 61229 mov     si, [di+8] ;~ 1E67:17FF
cs=0x1e67;eip=0x001802; 	T(MOV(di, *(dw*)(raddr(ds,di+0x0A))));	// 61230 mov     di, [di+0Ah] ;~ 1E67:1802
cs=0x1e67;eip=0x001805; 	X(PUSH(bp));	// 61248 push    bp ;~ 1E67:1805
cs=0x1e67;eip=0x001806;// 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_e))));	// 61249 call    [bp+var_E] ;~ 1E67:1806
R(_INT(int_num));
if (int_num==0x25 || int_num==0x26) sp+=2;
cs=0x1e67;eip=0x001809; 	X(POP(bp));	// 61250 pop     bp ;~ 1E67:1809
cs=0x1e67;eip=0x00180a; 	T(CLD);	// 61234 cld ;~ 1E67:180A
cs=0x1e67;eip=0x00180b; 	X(PUSH(di));	// 61235 push    di ;~ 1E67:180B
cs=0x1e67;eip=0x00180c; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 61236 mov     di, word ptr [bp+arg_4] ;~ 1E67:180C
cs=0x1e67;eip=0x00180f; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 61237 mov     [di], ax ;~ 1E67:180F
cs=0x1e67;eip=0x001811; 	X(MOV(*(dw*)(raddr(ds,di+2)), bx));	// 61238 mov     [di+2], bx ;~ 1E67:1811
cs=0x1e67;eip=0x001814; 	X(MOV(*(dw*)(raddr(ds,di+4)), cx));	// 61239 mov     [di+4], cx ;~ 1E67:1814
cs=0x1e67;eip=0x001817; 	X(MOV(*(dw*)(raddr(ds,di+6)), dx));	// 61240 mov     [di+6], dx ;~ 1E67:1817
cs=0x1e67;eip=0x00181a; 	X(MOV(*(dw*)(raddr(ds,di+8)), si));	// 61241 mov     [di+8], si ;~ 1E67:181A
cs=0x1e67;eip=0x00181d; 	X(POP(*(dw*)(raddr(ds,di+0x0A))));	// 61242 pop     word ptr [di+0Ah] ;~ 1E67:181D
cs=0x1e67;eip=0x001820; 	J(JC(loc_2e476));	// 61243 jb      short loc_2E476 ;~ 1E67:1820
cs=0x1e67;eip=0x001822; 	T(XOR(si, si));	// 61244 xor     si, si ;~ 1E67:1822
cs=0x1e67;eip=0x001824; 	J(JMP(loc_2e480));	// 61245 jmp     short loc_2E480 ;~ 1E67:1824
loc_2e476:
	// 8347 
cs=0x1e67;eip=0x001826; 	J(CALLF(__maperror,0));	// 61249 call    __maperror ;~ 1E67:1826
cs=0x1e67;eip=0x00182b; 	T(MOV(si, 1));	// 61250 mov     si, 1 ;~ 1E67:182B
cs=0x1e67;eip=0x00182e; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 61251 mov     ax, [di] ;~ 1E67:182E
loc_2e480:
	// 8348 
cs=0x1e67;eip=0x001830; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), si));	// 61254 mov     [di+0Ch], si ;~ 1E67:1830
cs=0x1e67;eip=0x001833; 	T(ADD(sp, 0x0A));	// 61255 add     sp, 0Ah ;~ 1E67:1833
cs=0x1e67;eip=0x001836; 	X(POP(di));	// 61256 pop     di ;~ 1E67:1836
cs=0x1e67;eip=0x001837; 	X(POP(si));	// 61257 pop     si ;~ 1E67:1837
cs=0x1e67;eip=0x001838; 	T(MOV(sp, bp));	// 61258 mov     sp, bp ;~ 1E67:1838
cs=0x1e67;eip=0x00183a; 	X(POP(bp));	// 61259 pop     bp ;~ 1E67:183A
cs=0x1e67;eip=0x00183b; 	J(RETF(0));	// 61260 retf ;~ 1E67:183B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_int86: 	goto _int86;
        case m2c::kloc_2e42c: 	goto loc_2e42c;
        case m2c::kloc_2e438: 	goto loc_2e438;
        case m2c::kloc_2e476: 	goto loc_2e476;
        case m2c::kloc_2e480: 	goto loc_2e480;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _sprintf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _sprintf:
    _begin:
#undef var_c
#define var_c -0x0C
	// 61272 var_C           = byte ptr -0Ch ;~ 1E67:183C
#undef var_2
#define var_2 -2
	// 61273 var_2           = word ptr -2 ;~ 1E67:183C
#undef arg_0
#define arg_0 6
	// 61274 arg_0           = dword ptr  6 ;~ 1E67:183C
#undef arg_4
#define arg_4 0x0A
	// 61275 arg_4           = dword ptr  0Ah ;~ 1E67:183C
cs=0x1e67;eip=0x00183c; 	X(PUSH(bp));	// 61277 push    bp ;~ 1E67:183C
cs=0x1e67;eip=0x00183d; 	T(MOV(bp, sp));	// 61278 mov     bp, sp ;~ 1E67:183D
cs=0x1e67;eip=0x00183f; 	T(SUB(sp, 0x0E));	// 61279 sub     sp, 0Eh ;~ 1E67:183F
cs=0x1e67;eip=0x001842; 	X(PUSH(di));	// 61280 push    di ;~ 1E67:1842
cs=0x1e67;eip=0x001843; 	X(PUSH(si));	// 61281 push    si              ; FILE * ;~ 1E67:1843
cs=0x1e67;eip=0x001844; 	T(ax = bp+var_c);	// 61282 lea     ax, [bp+var_C] ;~ 1E67:1844
cs=0x1e67;eip=0x001847; 	T(MOV(di, ax));	// 61283 mov     di, ax ;~ 1E67:1847
cs=0x1e67;eip=0x001849; 	T(ax = bp+arg_4);	// 61284 lea     ax, [bp+arg_4] ;~ 1E67:1849
cs=0x1e67;eip=0x00184c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 61285 mov     [bp+var_2], ax ;~ 1E67:184C
cs=0x1e67;eip=0x00184f; 	X(MOV(*(raddr(ds,di+6)), 0x42));	// 61286 mov     byte ptr [di+6], 42h ; 'B' ;~ 1E67:184F
cs=0x1e67;eip=0x001853; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61287 mov     ax, word ptr [bp+arg_0] ;~ 1E67:1853
cs=0x1e67;eip=0x001856; 	X(MOV(*(dw*)(raddr(ds,di+4)), ax));	// 61288 mov     [di+4], ax ;~ 1E67:1856
cs=0x1e67;eip=0x001859; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 61289 mov     [di], ax ;~ 1E67:1859
cs=0x1e67;eip=0x00185b; 	X(MOV(*(dw*)(raddr(ds,di+2)), 0x7FFF));	// 61290 mov     word ptr [di+2], 7FFFh ;~ 1E67:185B
cs=0x1e67;eip=0x001860; 	T(ax = bp+arg_4);	// 61291 lea     ax, [bp+arg_4] ;~ 1E67:1860
cs=0x1e67;eip=0x001863; 	X(PUSH(ax));	// 61292 push    ax ;~ 1E67:1863
cs=0x1e67;eip=0x001864; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 61293 push    word ptr [bp+arg_0+2] ;~ 1E67:1864
cs=0x1e67;eip=0x001867; 	X(PUSH(di));	// 61294 push    di ;~ 1E67:1867
cs=0x1e67;eip=0x001868; 	J(CALLF(__output,0));	// 61295 call    __output ;~ 1E67:1868
cs=0x1e67;eip=0x00186d; 	T(ADD(sp, 6));	// 61296 add     sp, 6 ;~ 1E67:186D
cs=0x1e67;eip=0x001870; 	T(MOV(si, ax));	// 61297 mov     si, ax ;~ 1E67:1870
cs=0x1e67;eip=0x001872; 	X(DEC(*(dw*)(raddr(ds,di+2))));	// 61298 dec     word ptr [di+2] ;~ 1E67:1872
cs=0x1e67;eip=0x001875; 	J(JS(loc_2e4d2));	// 61299 js      short loc_2E4D2 ;~ 1E67:1875
cs=0x1e67;eip=0x001877; 	T(SUB(al, al));	// 61300 sub     al, al ;~ 1E67:1877
cs=0x1e67;eip=0x001879; 	T(MOV(bx, *(dw*)(raddr(ds,di))));	// 61301 mov     bx, [di] ;~ 1E67:1879
cs=0x1e67;eip=0x00187b; 	X(INC(*(dw*)(raddr(ds,di))));	// 61302 inc     word ptr [di] ;~ 1E67:187B
cs=0x1e67;eip=0x00187d; 	X(MOV(*(raddr(ds,bx)), al));	// 61303 mov     [bx], al ;~ 1E67:187D
cs=0x1e67;eip=0x00187f; 	J(JMP(loc_2e4de));	// 61304 jmp     short loc_2E4DE ;~ 1E67:187F
loc_2e4d2:
	// 8349 
cs=0x1e67;eip=0x001882; 	X(PUSH(di));	// 61309 push    di              ; FILE * ;~ 1E67:1882
cs=0x1e67;eip=0x001883; 	T(SUB(ax, ax));	// 61310 sub     ax, ax ;~ 1E67:1883
cs=0x1e67;eip=0x001885; 	X(PUSH(ax));	// 61311 push    ax              ; int ;~ 1E67:1885
cs=0x1e67;eip=0x001886; 	J(CALLF(__flsbuf,0));	// 61312 call    __flsbuf ;~ 1E67:1886
cs=0x1e67;eip=0x00188b; 	T(ADD(sp, 4));	// 61313 add     sp, 4 ;~ 1E67:188B
loc_2e4de:
	// 8350 
cs=0x1e67;eip=0x00188e; 	T(MOV(ax, si));	// 61316 mov     ax, si ;~ 1E67:188E
cs=0x1e67;eip=0x001890; 	X(POP(si));	// 61317 pop     si ;~ 1E67:1890
cs=0x1e67;eip=0x001891; 	X(POP(di));	// 61318 pop     di ;~ 1E67:1891
cs=0x1e67;eip=0x001892; 	T(MOV(sp, bp));	// 61319 mov     sp, bp ;~ 1E67:1892
cs=0x1e67;eip=0x001894; 	X(POP(bp));	// 61320 pop     bp ;~ 1E67:1894
cs=0x1e67;eip=0x001895; 	J(RETF(0));	// 61321 retf ;~ 1E67:1895

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_sprintf: 	goto _sprintf;
        case m2c::kloc_2e4d2: 	goto loc_2e4d2;
        case m2c::kloc_2e4de: 	goto loc_2e4de;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _stricmp(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _stricmp:
    _begin:
#undef arg_0
#define arg_0 6
	// 61333 arg_0           = dword ptr  6 ;~ 1E67:1896
cs=0x1e67;eip=0x001896; 	X(PUSH(bp));	// 61335 push    bp ;~ 1E67:1896
cs=0x1e67;eip=0x001897; 	T(MOV(bp, sp));	// 61336 mov     bp, sp ;~ 1E67:1897
cs=0x1e67;eip=0x001899; 	T(MOV(dx, si));	// 61337 mov     dx, si ;~ 1E67:1899
cs=0x1e67;eip=0x00189b; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 61338 mov     si, word ptr [bp+arg_0+2] ;~ 1E67:189B
cs=0x1e67;eip=0x00189e; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61339 mov     bx, word ptr [bp+arg_0] ;~ 1E67:189E
cs=0x1e67;eip=0x0018a1; 	T(MOV(al, 0x0FF));	// 61340 mov     al, 0FFh ;~ 1E67:18A1
loc_2e4f3:
	// 8351 
cs=0x1e67;eip=0x0018a3; 	T(OR(al, al));	// 61344 or      al, al ;~ 1E67:18A3
cs=0x1e67;eip=0x0018a5; 	J(JZ(loc_2e523));	// 61345 jz      short loc_2E523 ;~ 1E67:18A5
cs=0x1e67;eip=0x0018a7; 	T(LODSB);	// 61346 lodsb ;~ 1E67:18A7
cs=0x1e67;eip=0x0018a8; 	T(MOV(ah, *(raddr(ds,bx))));	// 61347 mov     ah, [bx] ;~ 1E67:18A8
cs=0x1e67;eip=0x0018aa; 	T(INC(bx));	// 61348 inc     bx ;~ 1E67:18AA
cs=0x1e67;eip=0x0018ab; 	T(CMP(ah, al));	// 61349 cmp     ah, al ;~ 1E67:18AB
cs=0x1e67;eip=0x0018ad; 	J(JZ(loc_2e4f3));	// 61350 jz      short loc_2E4F3 ;~ 1E67:18AD
cs=0x1e67;eip=0x0018af; 	T(SUB(al, 0x41));	// 61351 sub     al, 41h ; 'A' ;~ 1E67:18AF
cs=0x1e67;eip=0x0018b1; 	T(CMP(al, 0x1A));	// 61352 cmp     al, 1Ah ;~ 1E67:18B1
cs=0x1e67;eip=0x0018b3; 	T(SBB(cl, cl));	// 61353 sbb     cl, cl ;~ 1E67:18B3
cs=0x1e67;eip=0x0018b5; 	T(AND(cl, 0x20));	// 61354 and     cl, 20h ;~ 1E67:18B5
cs=0x1e67;eip=0x0018b8; 	T(ADD(al, cl));	// 61355 add     al, cl ;~ 1E67:18B8
cs=0x1e67;eip=0x0018ba; 	T(ADD(al, 0x41));	// 61356 add     al, 41h ; 'A' ;~ 1E67:18BA
cs=0x1e67;eip=0x0018bc; 	T(XCHG(ah, al));	// 61357 xchg    ah, al ;~ 1E67:18BC
cs=0x1e67;eip=0x0018be; 	T(SUB(al, 0x41));	// 61358 sub     al, 41h ; 'A' ;~ 1E67:18BE
cs=0x1e67;eip=0x0018c0; 	T(CMP(al, 0x1A));	// 61359 cmp     al, 1Ah ;~ 1E67:18C0
cs=0x1e67;eip=0x0018c2; 	T(SBB(cl, cl));	// 61360 sbb     cl, cl ;~ 1E67:18C2
cs=0x1e67;eip=0x0018c4; 	T(AND(cl, 0x20));	// 61361 and     cl, 20h ;~ 1E67:18C4
cs=0x1e67;eip=0x0018c7; 	T(ADD(al, cl));	// 61362 add     al, cl ;~ 1E67:18C7
cs=0x1e67;eip=0x0018c9; 	T(ADD(al, 0x41));	// 61363 add     al, 41h ; 'A' ;~ 1E67:18C9
cs=0x1e67;eip=0x0018cb; 	T(CMP(al, ah));	// 61364 cmp     al, ah ;~ 1E67:18CB
cs=0x1e67;eip=0x0018cd; 	J(JZ(loc_2e4f3));	// 61365 jz      short loc_2E4F3 ;~ 1E67:18CD
cs=0x1e67;eip=0x0018cf; 	T(SBB(al, al));	// 61366 sbb     al, al ;~ 1E67:18CF
cs=0x1e67;eip=0x0018d1; 	T(SBB(al, 0x0FF));	// 61367 sbb     al, 0FFh ;~ 1E67:18D1
loc_2e523:
	// 8352 
cs=0x1e67;eip=0x0018d3; 	T(CBW);	// 61370 cbw ;~ 1E67:18D3
cs=0x1e67;eip=0x0018d4; 	T(MOV(si, dx));	// 61371 mov     si, dx ;~ 1E67:18D4
cs=0x1e67;eip=0x0018d6; 	X(POP(bp));	// 61372 pop     bp ;~ 1E67:18D6
cs=0x1e67;eip=0x0018d7; 	J(RETF(0));	// 61373 retf ;~ 1E67:18D7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_stricmp: 	goto _stricmp;
        case m2c::kloc_2e4f3: 	goto loc_2e4f3;
        case m2c::kloc_2e523: 	goto loc_2e523;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg010_18d8_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg010_18d8_proc:
    _begin:
__cltoasub:
	// 8353 
cs=0x1e67;eip=0x0018d8; 	T(MOV(cx, *(dw*)((dw*)(raddr(ss,bp+arg_8)))));	// 61380 mov     cx, word ptr [bp+arg_8] ;~ 1E67:18D8
cs=0x1e67;eip=0x0018db; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 61381 mov     ax, [bp+arg_2] ;~ 1E67:18DB
cs=0x1e67;eip=0x0018de; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 61382 mov     dx, word ptr [bp+arg_4] ;~ 1E67:18DE
cs=0x1e67;eip=0x0018e1; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_4+2)))));	// 61383 mov     di, word ptr [bp+arg_4+2] ;~ 1E67:18E1
__cxtoa:
	// 8354 
cs=0x1e67;eip=0x0018e4; 	X(PUSH(di));	// 61388 push    di ;~ 1E67:18E4
cs=0x1e67;eip=0x0018e5; 	X(PUSH(ds));	// 61389 push    ds ;~ 1E67:18E5
cs=0x1e67;eip=0x0018e6; 	X(POP(es));	// 61390 pop     es ;~ 1E67:18E6
cs=0x1e67;eip=0x0018e7; 	T(CLD);	// 61391 cld ;~ 1E67:18E7
cs=0x1e67;eip=0x0018e8; 	T(XCHG(ax, bx));	// 61392 xchg    ax, bx ;~ 1E67:18E8
cs=0x1e67;eip=0x0018e9; 	T(OR(al, al));	// 61393 or      al, al ;~ 1E67:18E9
cs=0x1e67;eip=0x0018eb; 	J(JZ(loc_2e550));	// 61394 jz      short loc_2E550 ;~ 1E67:18EB
cs=0x1e67;eip=0x0018ed; 	T(CMP(cx, 0x0A));	// 61395 cmp     cx, 0Ah ;~ 1E67:18ED
cs=0x1e67;eip=0x0018f0; 	J(JNZ(loc_2e550));	// 61396 jnz     short loc_2E550 ;~ 1E67:18F0
cs=0x1e67;eip=0x0018f2; 	T(OR(dx, dx));	// 61397 or      dx, dx ;~ 1E67:18F2
cs=0x1e67;eip=0x0018f4; 	J(JNS(loc_2e550));	// 61398 jns     short loc_2E550 ;~ 1E67:18F4
cs=0x1e67;eip=0x0018f6; 	T(MOV(al, 0x2D));	// 61399 mov     al, 2Dh ; '-' ;~ 1E67:18F6
cs=0x1e67;eip=0x0018f8; 	X(STOSB);	// 61400 stosb ;~ 1E67:18F8
cs=0x1e67;eip=0x0018f9; 	T(NEG(bx));	// 61401 neg     bx ;~ 1E67:18F9
cs=0x1e67;eip=0x0018fb; 	T(ADC(dx, 0));	// 61402 adc     dx, 0 ;~ 1E67:18FB
cs=0x1e67;eip=0x0018fe; 	T(NEG(dx));	// 61403 neg     dx ;~ 1E67:18FE
loc_2e550:
	// 8355 
cs=0x1e67;eip=0x001900; 	T(MOV(si, di));	// 61407 mov     si, di ;~ 1E67:1900
loc_2e552:
	// 8356 
cs=0x1e67;eip=0x001902; 	T(XCHG(ax, dx));	// 61410 xchg    ax, dx ;~ 1E67:1902
cs=0x1e67;eip=0x001903; 	T(XOR(dx, dx));	// 61411 xor     dx, dx ;~ 1E67:1903
cs=0x1e67;eip=0x001905; 	T(OR(ax, ax));	// 61412 or      ax, ax ;~ 1E67:1905
cs=0x1e67;eip=0x001907; 	J(JZ(loc_2e55b));	// 61413 jz      short loc_2E55B ;~ 1E67:1907
cs=0x1e67;eip=0x001909; 	T(DIV2(cx));	// 61414 div     cx ;~ 1E67:1909
loc_2e55b:
	// 8357 
cs=0x1e67;eip=0x00190b; 	T(XCHG(ax, bx));	// 61417 xchg    ax, bx ;~ 1E67:190B
cs=0x1e67;eip=0x00190c; 	T(DIV2(cx));	// 61418 div     cx ;~ 1E67:190C
cs=0x1e67;eip=0x00190e; 	T(XCHG(ax, dx));	// 61419 xchg    ax, dx ;~ 1E67:190E
cs=0x1e67;eip=0x00190f; 	T(XCHG(dx, bx));	// 61420 xchg    dx, bx ;~ 1E67:190F
cs=0x1e67;eip=0x001911; 	T(ADD(al, 0x30));	// 61421 add     al, 30h ; '0' ;~ 1E67:1911
cs=0x1e67;eip=0x001913; 	T(CMP(al, 0x39));	// 61422 cmp     al, 39h ; '9' ;~ 1E67:1913
cs=0x1e67;eip=0x001915; 	J(JBE(loc_2e569));	// 61423 jbe     short loc_2E569 ;~ 1E67:1915
cs=0x1e67;eip=0x001917; 	T(ADD(al, 0x27));	// 61424 add     al, 27h ; ''' ;~ 1E67:1917
loc_2e569:
	// 8358 
cs=0x1e67;eip=0x001919; 	X(STOSB);	// 61427 stosb ;~ 1E67:1919
cs=0x1e67;eip=0x00191a; 	T(MOV(ax, dx));	// 61428 mov     ax, dx ;~ 1E67:191A
cs=0x1e67;eip=0x00191c; 	T(OR(ax, bx));	// 61429 or      ax, bx ;~ 1E67:191C
cs=0x1e67;eip=0x00191e; 	J(JNZ(loc_2e552));	// 61430 jnz     short loc_2E552 ;~ 1E67:191E
cs=0x1e67;eip=0x001920; 	X(MOV(*(raddr(ds,di)), al));	// 61431 mov     [di], al ;~ 1E67:1920
loc_2e572:
	// 8359 
cs=0x1e67;eip=0x001922; 	T(DEC(di));	// 61434 dec     di ;~ 1E67:1922
cs=0x1e67;eip=0x001923; 	T(LODSB);	// 61435 lodsb ;~ 1E67:1923
cs=0x1e67;eip=0x001924; 	X(XCHG(al, *(raddr(ds,di))));	// 61436 xchg    al, [di] ;~ 1E67:1924
cs=0x1e67;eip=0x001926; 	X(MOV(*(raddr(ds,si-1)), al));	// 61437 mov     [si-1], al ;~ 1E67:1926
cs=0x1e67;eip=0x001929; 	T(ax = si+1);	// 61438 lea     ax, [si+1] ;~ 1E67:1929
cs=0x1e67;eip=0x00192c; 	T(CMP(ax, di));	// 61439 cmp     ax, di ;~ 1E67:192C
cs=0x1e67;eip=0x00192e; 	J(JC(loc_2e572));	// 61440 jb      short loc_2E572 ;~ 1E67:192E
cs=0x1e67;eip=0x001930; 	X(POP(ax));	// 61441 pop     ax ;~ 1E67:1930
cs=0x1e67;eip=0x001931; 	X(POP(di));	// 61442 pop     di ;~ 1E67:1931
cs=0x1e67;eip=0x001932; 	X(POP(si));	// 61443 pop     si ;~ 1E67:1932
cs=0x1e67;eip=0x001933; 	T(MOV(sp, bp));	// 61444 mov     sp, bp ;~ 1E67:1933
cs=0x1e67;eip=0x001935; 	X(POP(bp));	// 61445 pop     bp ;~ 1E67:1935
cs=0x1e67;eip=0x001936; 	J(RETF(0));	// 61446 retf ;~ 1E67:1936

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__cltoasub: 	goto __cltoasub;
        case m2c::k__cxtoa: 	goto __cxtoa;
        case m2c::kloc_2e550: 	goto loc_2e550;
        case m2c::kloc_2e552: 	goto loc_2e552;
        case m2c::kloc_2e55b: 	goto loc_2e55b;
        case m2c::kloc_2e569: 	goto loc_2e569;
        case m2c::kloc_2e572: 	goto loc_2e572;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _abs(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _abs:
    _begin:
#undef arg_0
#define arg_0 6
	// 61459 arg_0           = dword ptr  6 ;~ 1E67:1938
cs=0x1e67;eip=0x001938; 	X(PUSH(bp));	// 61461 push    bp ;~ 1E67:1938
cs=0x1e67;eip=0x001939; 	T(MOV(bp, sp));	// 61462 mov     bp, sp ;~ 1E67:1939
cs=0x1e67;eip=0x00193b; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+arg_0))), 0));	// 61463 cmp     word ptr [bp+arg_0], 0 ;~ 1E67:193B
cs=0x1e67;eip=0x00193f; 	J(JL(loc_2e596));	// 61464 jl      short loc_2E596 ;~ 1E67:193F
cs=0x1e67;eip=0x001941; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61465 mov     ax, word ptr [bp+arg_0] ;~ 1E67:1941
cs=0x1e67;eip=0x001944; 	J(JMP(loc_2e59b));	// 61466 jmp     short loc_2E59B ;~ 1E67:1944
loc_2e596:
	// 8360 
cs=0x1e67;eip=0x001946; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61470 mov     ax, word ptr [bp+arg_0] ;~ 1E67:1946
cs=0x1e67;eip=0x001949; 	T(NEG(ax));	// 61471 neg     ax ;~ 1E67:1949
loc_2e59b:
	// 8361 
cs=0x1e67;eip=0x00194b; 	X(POP(bp));	// 61474 pop     bp ;~ 1E67:194B
cs=0x1e67;eip=0x00194c; 	J(RETF(0));	// 61475 retf ;~ 1E67:194C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_abs: 	goto _abs;
        case m2c::kloc_2e596: 	goto loc_2e596;
        case m2c::kloc_2e59b: 	goto loc_2e59b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _raise(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _raise:
    _begin:
#undef var_4
#define var_4 -4
	// 61494 var_4           = dword ptr -4 ;~ 1E67:195A
#undef arg_0
#define arg_0 6
	// 61495 arg_0           = dword ptr  6 ;~ 1E67:195A
cs=0x1e67;eip=0x00195a; 	X(PUSH(bp));	// 61497 push    bp ;~ 1E67:195A
cs=0x1e67;eip=0x00195b; 	T(MOV(bp, sp));	// 61498 mov     bp, sp ;~ 1E67:195B
cs=0x1e67;eip=0x00195d; 	T(SUB(sp, 4));	// 61499 sub     sp, 4 ;~ 1E67:195D
cs=0x1e67;eip=0x001960; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61500 mov     ax, word ptr [bp+arg_0] ;~ 1E67:1960
cs=0x1e67;eip=0x001963; 	T(CMP(ax, 2));	// 61501 cmp     ax, 2 ;~ 1E67:1963
cs=0x1e67;eip=0x001966; 	J(JNZ(loc_2e5c1));	// 61502 jnz     short loc_2E5C1 ;~ 1E67:1966
cs=0x1e67;eip=0x001968; 	T(CLC);	// 61503 clc ;~ 1E67:1968
cs=0x1e67;eip=0x001969; 	R(_INT(0x23));	// 61504 int     23h             ; DOS - CONTROL "C" EXIT ADDRESS ;~ 1E67:1969
cs=0x1e67;eip=0x00196b; 	J(JNC(loc_2e635));	// 61509 jnb     short loc_2E635 ; jumptable 0002E5ED case 0 ;~ 1E67:196B
cs=0x1e67;eip=0x00196d; 	T(MOV(ah, 0x4C));	// 61510 mov     ah, 4Ch ;~ 1E67:196D
cs=0x1e67;eip=0x00196f; 	R(_INT(0x21));	// 61511 int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 1E67:196F
loc_2e5c1:
	// 8362 
cs=0x1e67;eip=0x001971; 	T(CMP(ax, 8));	// 61516 cmp     ax, 8 ;~ 1E67:1971
cs=0x1e67;eip=0x001974; 	J(JNZ(loc_2e5d0));	// 61517 jnz     short loc_2E5D0 ;~ 1E67:1974
cs=0x1e67;eip=0x001976; 	T(MOV(bx, *(dw*)(((db*)&dword_40c1e))));	// 61518 mov     bx, word ptr dword_40C1E ;~ 1E67:1976
cs=0x1e67;eip=0x00197a; 	T(OR(bx, *(dw*)(((db*)&dword_40c1e)+2)));	// 61519 or      bx, word ptr dword_40C1E+2 ;~ 1E67:197A
cs=0x1e67;eip=0x00197e; 	J(JZ(loc_2e62f));	// 61520 jz      short loc_2E62F ;~ 1E67:197E
loc_2e5d0:
	// 8363 
cs=0x1e67;eip=0x001980; 	J(CALLF(__sigentry,0));	// 61523 call    __sigentry ;~ 1E67:1980
cs=0x1e67;eip=0x001985; 	J(JC(loc_2e62f));	// 61524 jb      short loc_2E62F ;~ 1E67:1985
cs=0x1e67;eip=0x001987; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 61525 mov     ax, [bx] ;~ 1E67:1987
cs=0x1e67;eip=0x001989; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 61526 mov     dx, [bx+2] ;~ 1E67:1989
cs=0x1e67;eip=0x00198c; 	T(OR(dx, dx));	// 61527 or      dx, dx ;~ 1E67:198C
cs=0x1e67;eip=0x00198e; 	J(JNZ(loc_2e5f2));	// 61528 jnz     short loc_2E5F2 ;~ 1E67:198E
cs=0x1e67;eip=0x001990; 	T(CMP(ax, 1));	// 61529 cmp     ax, 1 ;~ 1E67:1990
cs=0x1e67;eip=0x001993; 	J(JA(loc_2e5f2));	// 61530 ja      short loc_2E5F2 ;~ 1E67:1993
cs=0x1e67;eip=0x001995; 	T(OR(ax, ax));	// 61531 or      ax, ax ;~ 1E67:1995
cs=0x1e67;eip=0x001997; 	J(JNZ(loc_2e635));	// 61532 jnz     short loc_2E635 ; jumptable 0002E5ED case 0 ;~ 1E67:1997
cs=0x1e67;eip=0x001999; 	T(MOV(bx, cx));	// 61533 mov     bx, cx ;~ 1E67:1999
cs=0x1e67;eip=0x00199b; 	T(SHL(bx, 1));	// 61534 shl     bx, 1           ; switch 6 cases ;~ 1E67:199B
	cs=seg_offset(seg010);
cs=0x1e67;eip=0x00199d; __disp=*(dw*)(((db*)&jpt_2e5ed)+bx);
	J(return __dispatch_call(__disp, _state););	// 61535 jmp     cs:jpt_2E5ED[bx] ; switch jump ;~ 1E67:199D
loc_2e5f2:
	// 8364 
cs=0x1e67;eip=0x0019a2; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 61540 mov     word ptr [bp+var_4], ax ;~ 1E67:19A2
cs=0x1e67;eip=0x0019a5; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 61541 mov     word ptr [bp+var_4+2], dx ;~ 1E67:19A5
cs=0x1e67;eip=0x0019a8; 	X(PUSH(es));	// 61542 push    es ;~ 1E67:19A8
cs=0x1e67;eip=0x0019a9; 	X(PUSH(bp));	// 61543 push    bp ;~ 1E67:19A9
cs=0x1e67;eip=0x0019aa; 	X(PUSH(di));	// 61544 push    di ;~ 1E67:19AA
cs=0x1e67;eip=0x0019ab; 	X(PUSH(si));	// 61545 push    si ;~ 1E67:19AB
cs=0x1e67;eip=0x0019ac; 	T(MOV(cx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61546 mov     cx, word ptr [bp+arg_0] ;~ 1E67:19AC
cs=0x1e67;eip=0x0019af; 	T(CMP(cx, 8));	// 61547 cmp     cx, 8 ;~ 1E67:19AF
cs=0x1e67;eip=0x0019b2; 	J(JZ(loc_2e60b));	// 61548 jz      short loc_2E60B ;~ 1E67:19B2
cs=0x1e67;eip=0x0019b4; 	T(XOR(ax, ax));	// 61549 xor     ax, ax ;~ 1E67:19B4
cs=0x1e67;eip=0x0019b6; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 61550 mov     [bx], ax ;~ 1E67:19B6
cs=0x1e67;eip=0x0019b8; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 61551 mov     [bx+2], ax ;~ 1E67:19B8
loc_2e60b:
	// 8365 
cs=0x1e67;eip=0x0019bb; 	T(MOV(ax, 0x8C));	// 61554 mov     ax, 8Ch ; 'Œ' ;~ 1E67:19BB
cs=0x1e67;eip=0x0019be; 	X(PUSH(ax));	// 61555 push    ax ;~ 1E67:19BE
cs=0x1e67;eip=0x0019bf; 	X(PUSH(cx));	// 61556 push    cx ;~ 1E67:19BF
cs=0x1e67;eip=0x0019c0; 	T(CLD);	// 61557 cld ;~ 1E67:19C0
cs=0x1e67;eip=0x0019c1; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_4))));	// 61558 call    [bp+var_4] ;~ 1E67:19C1
cs=0x1e67;eip=0x0019c4; 	T(ADD(sp, 4));	// 61559 add     sp, 4 ;~ 1E67:19C4
cs=0x1e67;eip=0x0019c7; 	X(POP(si));	// 61560 pop     si ;~ 1E67:19C7
cs=0x1e67;eip=0x0019c8; 	X(POP(di));	// 61561 pop     di ;~ 1E67:19C8
cs=0x1e67;eip=0x0019c9; 	X(POP(bp));	// 61562 pop     bp ;~ 1E67:19C9
cs=0x1e67;eip=0x0019ca; 	X(POP(es));	// 61563 pop     es ;~ 1E67:19CA
cs=0x1e67;eip=0x0019cb; 	J(JMP(loc_2e635));	// 61565 jmp     short loc_2E635 ; jumptable 0002E5ED case 0 ;~ 1E67:19CB
loc_2e61e:
	// 8366 
cs=0x1e67;eip=0x0019ce; 	T(MOV(ax, 0x8C));	// 61571 mov     ax, 8Ch ; 'Œ'   ; jumptable 0002E5ED case 2 ;~ 1E67:19CE
cs=0x1e67;eip=0x0019d1; 	J(CALLF(__dispatch_call,*(dd*)(((db*)&dword_40c26))));	// 61572 call    ss:dword_40C26 ;~ 1E67:19D1
loc_2e626:
	// 8367 
cs=0x1e67;eip=0x0019d6; 	T(MOV(ax, 3));	// 61576 mov     ax, 3           ; jumptable 0002E5ED cases 1,3-5 ;~ 1E67:19D6
cs=0x1e67;eip=0x0019d9; 	X(PUSH(ax));	// 61577 push    ax ;~ 1E67:19D9
cs=0x1e67;eip=0x0019da; 	J(CALLF(libsub_quit_to_dos,0));	// 61578 call    far ptr libsub_quit_to_dos ;~ 1E67:19DA
loc_2e62f:
	// 8368 
cs=0x1e67;eip=0x0019df; 	T(MOV(ax, 0x0FFFF));	// 61583 mov     ax, 0FFFFh ;~ 1E67:19DF
cs=0x1e67;eip=0x0019e2; 	J(JMP(loc_2e637));	// 61584 jmp     short loc_2E637 ;~ 1E67:19E2
loc_2e635:
	// 8369 
cs=0x1e67;eip=0x0019e5; 	T(XOR(ax, ax));	// 61591 xor     ax, ax          ; jumptable 0002E5ED case 0 ;~ 1E67:19E5
loc_2e637:
	// 8370 
cs=0x1e67;eip=0x0019e7; 	T(MOV(sp, bp));	// 61594 mov     sp, bp ;~ 1E67:19E7
cs=0x1e67;eip=0x0019e9; 	X(POP(bp));	// 61595 pop     bp ;~ 1E67:19E9
cs=0x1e67;eip=0x0019ea; 	J(RETF(0));	// 61596 retf ;~ 1E67:19EA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_raise: 	goto _raise;
        case m2c::kloc_2e5c1: 	goto loc_2e5c1;
        case m2c::kloc_2e5d0: 	goto loc_2e5d0;
        case m2c::kloc_2e5f2: 	goto loc_2e5f2;
        case m2c::kloc_2e60b: 	goto loc_2e60b;
        case m2c::kloc_2e61e: 	goto loc_2e61e;
        case m2c::kloc_2e626: 	goto loc_2e626;
        case m2c::kloc_2e62f: 	goto loc_2e62f;
        case m2c::kloc_2e635: 	goto loc_2e635;
        case m2c::kloc_2e637: 	goto loc_2e637;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _srand(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _srand:
    _begin:
#undef arg_0
#define arg_0 6
	// 61609 arg_0           = dword ptr  6 ;~ 1E67:19EC
cs=0x1e67;eip=0x0019ec; 	X(PUSH(bp));	// 61611 push    bp ;~ 1E67:19EC
cs=0x1e67;eip=0x0019ed; 	T(MOV(bp, sp));	// 61612 mov     bp, sp ;~ 1E67:19ED
cs=0x1e67;eip=0x0019ef; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61613 mov     ax, word ptr [bp+arg_0] ;~ 1E67:19EF
cs=0x1e67;eip=0x0019f2; 	X(MOV(word_3f0a0, ax));	// 61614 mov     word_3F0A0, ax ;~ 1E67:19F2
cs=0x1e67;eip=0x0019f5; 	X(MOV(word_3f0a2, 0));	// 61615 mov     word_3F0A2, 0 ;~ 1E67:19F5
cs=0x1e67;eip=0x0019fb; 	X(POP(bp));	// 61616 pop     bp ;~ 1E67:19FB
cs=0x1e67;eip=0x0019fc; 	J(RETF(0));	// 61617 retf ;~ 1E67:19FC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_srand: 	goto _srand;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _rand(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _rand:
    _begin:
cs=0x1e67;eip=0x0019fe; 	T(MOV(ax, 0x43FD));	// 61630 mov     ax, 43FDh ;~ 1E67:19FE
cs=0x1e67;eip=0x001a01; 	T(MOV(dx, 3));	// 61631 mov     dx, 3 ;~ 1E67:1A01
cs=0x1e67;eip=0x001a04; 	X(PUSH(dx));	// 61632 push    dx ;~ 1E67:1A04
cs=0x1e67;eip=0x001a05; 	X(PUSH(ax));	// 61633 push    ax ;~ 1E67:1A05
cs=0x1e67;eip=0x001a06; 	X(PUSH(word_3f0a2));	// 61634 push    word_3F0A2 ;~ 1E67:1A06
cs=0x1e67;eip=0x001a0a; 	X(PUSH(word_3f0a0));	// 61635 push    word_3F0A0 ;~ 1E67:1A0A
cs=0x1e67;eip=0x001a0e; 	J(CALLF(__aflmul,0));	// 61636 call    __aFlmul ;~ 1E67:1A0E
cs=0x1e67;eip=0x001a13; 	T(ADD(ax, 0x9EC3));	// 61637 add     ax, 9EC3h ;~ 1E67:1A13
cs=0x1e67;eip=0x001a16; 	T(ADC(dx, 0x26));	// 61638 adc     dx, 26h ; '&' ;~ 1E67:1A16
cs=0x1e67;eip=0x001a19; 	X(MOV(word_3f0a0, ax));	// 61639 mov     word_3F0A0, ax ;~ 1E67:1A19
cs=0x1e67;eip=0x001a1c; 	X(MOV(word_3f0a2, dx));	// 61640 mov     word_3F0A2, dx ;~ 1E67:1A1C
cs=0x1e67;eip=0x001a20; 	T(MOV(ax, dx));	// 61641 mov     ax, dx ;~ 1E67:1A20
cs=0x1e67;eip=0x001a22; 	T(AND(ah, 0x7F));	// 61642 and     ah, 7Fh ;~ 1E67:1A22
cs=0x1e67;eip=0x001a25; 	J(RETF(0));	// 61643 retf ;~ 1E67:1A25

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_rand: 	goto _rand;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _signal(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _signal:
    _begin:
#undef var_4
#define var_4 -4
	// 61656 var_4           = word ptr -4 ;~ 1E67:1A2C
#undef var_2
#define var_2 -2
	// 61657 var_2           = word ptr -2 ;~ 1E67:1A2C
#undef arg_0
#define arg_0 6
	// 61658 arg_0           = dword ptr  6 ;~ 1E67:1A2C
#undef arg_4
#define arg_4 0x0A
	// 61659 arg_4           = dword ptr  0Ah ;~ 1E67:1A2C
cs=0x1e67;eip=0x001a2c; 	X(PUSH(bp));	// 61663 push    bp ;~ 1E67:1A2C
cs=0x1e67;eip=0x001a2d; 	T(MOV(bp, sp));	// 61664 mov     bp, sp ;~ 1E67:1A2D
cs=0x1e67;eip=0x001a2f; 	T(SUB(sp, 4));	// 61665 sub     sp, 4 ;~ 1E67:1A2F
cs=0x1e67;eip=0x001a32; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61666 mov     ax, word ptr [bp+arg_0] ;~ 1E67:1A32
cs=0x1e67;eip=0x001a35; 	T(CMP(ax, 8));	// 61667 cmp     ax, 8 ;~ 1E67:1A35
cs=0x1e67;eip=0x001a38; 	J(JNZ(loc_2e69b));	// 61668 jnz     short loc_2E69B ;~ 1E67:1A38
cs=0x1e67;eip=0x001a3a; 	T(MOV(bx, *(dw*)(((db*)&dword_40c1e))));	// 61669 mov     bx, word ptr dword_40C1E ;~ 1E67:1A3A
cs=0x1e67;eip=0x001a3e; 	T(OR(bx, *(dw*)(((db*)&dword_40c1e)+2)));	// 61670 or      bx, word ptr dword_40C1E+2 ;~ 1E67:1A3E
cs=0x1e67;eip=0x001a42; 	J(JNZ(loc_2e69b));	// 61671 jnz     short loc_2E69B ;~ 1E67:1A42
loc_2e694:
	// 8371 
cs=0x1e67;eip=0x001a44; 	T(MOV(ax, 0x1600));	// 61674 mov     ax, 1600h ;~ 1E67:1A44
cs=0x1e67;eip=0x001a47; 	T(STC);	// 61675 stc ;~ 1E67:1A47
cs=0x1e67;eip=0x001a48; 	J(return seg010_546_proc(m2c::k__dosretax, _state););	// 61676 jmp     __dosretax ;~ 1E67:1A48
loc_2e69b:
	// 8372 
cs=0x1e67;eip=0x001a4b; 	J(CALLF(__sigentry,0));	// 61681 call    __sigentry ;~ 1E67:1A4B
cs=0x1e67;eip=0x001a50; 	J(JC(loc_2e694));	// 61682 jb      short loc_2E694 ;~ 1E67:1A50
cs=0x1e67;eip=0x001a52; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 61683 mov     ax, [bx] ;~ 1E67:1A52
cs=0x1e67;eip=0x001a54; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 61684 mov     [bp+var_2], ax ;~ 1E67:1A54
cs=0x1e67;eip=0x001a57; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 61685 mov     ax, [bx+2] ;~ 1E67:1A57
cs=0x1e67;eip=0x001a5a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 61686 mov     [bp+var_4], ax ;~ 1E67:1A5A
cs=0x1e67;eip=0x001a5d; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 61687 mov     ax, word ptr [bp+arg_0+2] ;~ 1E67:1A5D
cs=0x1e67;eip=0x001a60; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 61688 mov     dx, word ptr [bp+arg_4] ;~ 1E67:1A60
cs=0x1e67;eip=0x001a63; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 61689 mov     [bx], ax ;~ 1E67:1A63
cs=0x1e67;eip=0x001a65; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 61690 mov     [bx+2], dx ;~ 1E67:1A65
cs=0x1e67;eip=0x001a68; 	T(MOV(cx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61691 mov     cx, word ptr [bp+arg_0] ;~ 1E67:1A68
cs=0x1e67;eip=0x001a6b; 	T(CMP(cx, 2));	// 61692 cmp     cx, 2 ;~ 1E67:1A6B
cs=0x1e67;eip=0x001a6e; 	J(JNZ(loc_2e6ec));	// 61693 jnz     short loc_2E6EC ;~ 1E67:1A6E
cs=0x1e67;eip=0x001a70; 	T(OR(dx, dx));	// 61694 or      dx, dx ;~ 1E67:1A70
cs=0x1e67;eip=0x001a72; 	J(JNZ(loc_2e6c8));	// 61695 jnz     short loc_2E6C8 ;~ 1E67:1A72
cs=0x1e67;eip=0x001a74; 	T(OR(ax, ax));	// 61696 or      ax, ax ;~ 1E67:1A74
cs=0x1e67;eip=0x001a76; 	J(JZ(loc_2e6ec));	// 61697 jz      short loc_2E6EC ;~ 1E67:1A76
loc_2e6c8:
	// 8373 
cs=0x1e67;eip=0x001a78; 	T(CMP(word_3ef98, 0));	// 61700 cmp     word_3EF98, 0 ;~ 1E67:1A78
cs=0x1e67;eip=0x001a7d; 	J(JNZ(loc_2e6ec));	// 61701 jnz     short loc_2E6EC ;~ 1E67:1A7D
cs=0x1e67;eip=0x001a7f; 	X(PUSH(bx));	// 61702 push    bx ;~ 1E67:1A7F
cs=0x1e67;eip=0x001a80; 	T(MOV(al, 0x23));	// 61703 mov     al, 23h ; '#' ;~ 1E67:1A80
cs=0x1e67;eip=0x001a82; 	T(MOV(ah, 0x35));	// 61704 mov     ah, 35h ;~ 1E67:1A82
cs=0x1e67;eip=0x001a84; 	R(_INT(0x21));	// 61705 int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 1E67:1A84
cs=0x1e67;eip=0x001a86; 	X(MOV(word_3ef98, es));	// 61708 mov     word_3EF98, es ;~ 1E67:1A86
cs=0x1e67;eip=0x001a8a; 	X(MOV(word_3ef9a, bx));	// 61709 mov     word_3EF9A, bx ;~ 1E67:1A8A
cs=0x1e67;eip=0x001a8e; 	X(POP(bx));	// 61710 pop     bx ;~ 1E67:1A8E
cs=0x1e67;eip=0x001a8f; 	T(MOV(dx, 0x1AF7));	// 61711 mov     dx, 1AF7h ;~ 1E67:1A8F
cs=0x1e67;eip=0x001a92; 	X(PUSH(ds));	// 61712 push    ds ;~ 1E67:1A92
cs=0x1e67;eip=0x001a93; 	X(PUSH(cs));	// 61713 push    cs ;~ 1E67:1A93
cs=0x1e67;eip=0x001a94; 	X(POP(ds));	// 61714 pop     ds ;~ 1E67:1A94
cs=0x1e67;eip=0x001a95; 	T(MOV(al, 0x23));	// 61716 mov     al, 23h ; '#' ;~ 1E67:1A95
cs=0x1e67;eip=0x001a97; 	T(MOV(ah, 0x25));	// 61717 mov     ah, 25h ;~ 1E67:1A97
cs=0x1e67;eip=0x001a99; 	R(_INT(0x21));	// 61718 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 1E67:1A99
cs=0x1e67;eip=0x001a9b; 	X(POP(ds));	// 61721 pop     ds ;~ 1E67:1A9B
loc_2e6ec:
	// 8374 
cs=0x1e67;eip=0x001a9c; 	T(CMP(cx, 8));	// 61726 cmp     cx, 8 ;~ 1E67:1A9C
cs=0x1e67;eip=0x001a9f; 	J(JNZ(loc_2e715));	// 61727 jnz     short loc_2E715 ;~ 1E67:1A9F
cs=0x1e67;eip=0x001aa1; 	T(MOV(ax, 0x1B7B));	// 61728 mov     ax, 1B7Bh ;~ 1E67:1AA1
cs=0x1e67;eip=0x001aa4; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 61729 mov     dx, [bx+2] ;~ 1E67:1AA4
cs=0x1e67;eip=0x001aa7; 	T(OR(dx, dx));	// 61730 or      dx, dx ;~ 1E67:1AA7
cs=0x1e67;eip=0x001aa9; 	J(JNZ(loc_2e70c));	// 61731 jnz     short loc_2E70C ;~ 1E67:1AA9
cs=0x1e67;eip=0x001aab; 	T(MOV(cx, *(dw*)(raddr(ds,bx))));	// 61732 mov     cx, [bx] ;~ 1E67:1AAB
cs=0x1e67;eip=0x001aad; 	T(CMP(cx, 2));	// 61733 cmp     cx, 2 ;~ 1E67:1AAD
cs=0x1e67;eip=0x001ab0; 	J(JNC(loc_2e70c));	// 61734 jnb     short loc_2E70C ;~ 1E67:1AB0
cs=0x1e67;eip=0x001ab2; 	T(MOV(ax, 0x1B76));	// 61735 mov     ax, 1B76h ;~ 1E67:1AB2
cs=0x1e67;eip=0x001ab5; 	T(OR(cx, cx));	// 61736 or      cx, cx ;~ 1E67:1AB5
cs=0x1e67;eip=0x001ab7; 	J(JZ(loc_2e70c));	// 61737 jz      short loc_2E70C ;~ 1E67:1AB7
cs=0x1e67;eip=0x001ab9; 	T(MOV(ax, 0x1B75));	// 61738 mov     ax, 1B75h ;~ 1E67:1AB9
loc_2e70c:
	// 8375 
cs=0x1e67;eip=0x001abc; 	T(MOV(dx, cs));	// 61742 mov     dx, cs ;~ 1E67:1ABC
cs=0x1e67;eip=0x001abe; 	T(MOV(bx, 3));	// 61743 mov     bx, 3 ;~ 1E67:1ABE
cs=0x1e67;eip=0x001ac1; 	J(CALLF(__dispatch_call,dword_40c1e));	// 61744 call    dword_40C1E ;~ 1E67:1AC1
loc_2e715:
	// 8376 
cs=0x1e67;eip=0x001ac5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 61747 mov     ax, [bp+var_2] ;~ 1E67:1AC5
cs=0x1e67;eip=0x001ac8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 61748 mov     dx, [bp+var_4] ;~ 1E67:1AC8
cs=0x1e67;eip=0x001acb; 	T(MOV(sp, bp));	// 61749 mov     sp, bp ;~ 1E67:1ACB
cs=0x1e67;eip=0x001acd; 	X(POP(bp));	// 61750 pop     bp ;~ 1E67:1ACD
cs=0x1e67;eip=0x001ace; 	J(RETF(0));	// 61751 retf ;~ 1E67:1ACE

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_signal: 	goto _signal;
        case m2c::kloc_2e694: 	goto loc_2e694;
        case m2c::kloc_2e69b: 	goto loc_2e69b;
        case m2c::kloc_2e6c8: 	goto loc_2e6c8;
        case m2c::kloc_2e6ec: 	goto loc_2e6ec;
        case m2c::kloc_2e70c: 	goto loc_2e70c;
        case m2c::kloc_2e715: 	goto loc_2e715;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __sigentry(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __sigentry:
    _begin:
cs=0x1e67;eip=0x001acf; 	X(PUSH(bp));	// 61761 push    bp ;~ 1E67:1ACF
cs=0x1e67;eip=0x001ad0; 	T(MOV(bp, sp));	// 61762 mov     bp, sp ;~ 1E67:1AD0
cs=0x1e67;eip=0x001ad2; 	T(bx = 0x1A2B);	// 61763 lea     bx, ds:1A2Bh ;~ 1E67:1AD2
cs=0x1e67;eip=0x001ad6; 	T(MOV(cx, 6));	// 61764 mov     cx, 6 ;~ 1E67:1AD6
loc_2e729:
	// 8377 
cs=0x1e67;eip=0x001ad9; 	T(CMP(*(raddr(cs,bx)), al));	// 61767 cmp     cs:[bx], al ;~ 1E67:1AD9
cs=0x1e67;eip=0x001adc; 	J(JZ(loc_2e735));	// 61768 jz      short loc_2E735 ;~ 1E67:1ADC
cs=0x1e67;eip=0x001ade; 	T(DEC(bx));	// 61769 dec     bx ;~ 1E67:1ADE
cs=0x1e67;eip=0x001adf; 	J(LOOP(loc_2e729));	// 61770 loop    loc_2E729 ;~ 1E67:1ADF
cs=0x1e67;eip=0x001ae1; 	T(STC);	// 61771 stc ;~ 1E67:1AE1
cs=0x1e67;eip=0x001ae2; 	J(JMP(loc_2e743));	// 61772 jmp     short loc_2E743 ;~ 1E67:1AE2
loc_2e735:
	// 8378 
cs=0x1e67;eip=0x001ae5; 	T(DEC(cx));	// 61778 dec     cx ;~ 1E67:1AE5
cs=0x1e67;eip=0x001ae6; 	T(MOV(ax, cx));	// 61779 mov     ax, cx ;~ 1E67:1AE6
cs=0x1e67;eip=0x001ae8; 	T(SHL(ax, 1));	// 61780 shl     ax, 1 ;~ 1E67:1AE8
cs=0x1e67;eip=0x001aea; 	T(SHL(ax, 1));	// 61781 shl     ax, 1 ;~ 1E67:1AEA
cs=0x1e67;eip=0x001aec; 	T(bx = offset(dseg,word_3f0a4));	// 61782 lea     bx, word_3F0A4 ;~ 1E67:1AEC
cs=0x1e67;eip=0x001af0; 	T(ADD(bx, ax));	// 61783 add     bx, ax ;~ 1E67:1AF0
cs=0x1e67;eip=0x001af2; 	T(CLC);	// 61784 clc ;~ 1E67:1AF2
loc_2e743:
	// 8379 
cs=0x1e67;eip=0x001af3; 	T(MOV(sp, bp));	// 61787 mov     sp, bp ;~ 1E67:1AF3
cs=0x1e67;eip=0x001af5; 	X(POP(bp));	// 61788 pop     bp ;~ 1E67:1AF5
cs=0x1e67;eip=0x001af6; 	J(RETF(0));	// 61789 retf ;~ 1E67:1AF6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__sigentry: 	goto __sigentry;
        case m2c::kloc_2e729: 	goto loc_2e729;
        case m2c::kloc_2e735: 	goto loc_2e735;
        case m2c::kloc_2e743: 	goto loc_2e743;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg010_1af7_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg010_1af7_proc:
    _begin:
cs=0x1e67;eip=0x001af7; 	X(PUSH(ax));	// 61793 push    ax ;~ 1E67:1AF7
cs=0x1e67;eip=0x001af8; 	T(LAHF);	// 61794 lahf ;~ 1E67:1AF8
cs=0x1e67;eip=0x001af9; 	X(PUSH(ax));	// 61795 push    ax ;~ 1E67:1AF9
cs=0x1e67;eip=0x001afa; 	X(PUSH(ds));	// 61796 push    ds ;~ 1E67:1AFA
cs=0x1e67;eip=0x001afb; 	X(PUSH(dx));	// 61797 push    dx ;~ 1E67:1AFB
cs=0x1e67;eip=0x001afc; 	T(MOV(ax, seg_offset(dseg)));	// 61798 mov     ax, seg dseg ;~ 1E67:1AFC
cs=0x1e67;eip=0x001aff; 	T(MOV(ds, ax));	// 61799 mov     ds, ax ;~ 1E67:1AFF
cs=0x1e67;eip=0x001b01; 	T(CMP(word_3ee14, 0));	// 61800 cmp     word_3EE14, 0 ;~ 1E67:1B01
cs=0x1e67;eip=0x001b06; 	J(JNZ(loc_2e76c));	// 61801 jnz     short loc_2E76C ;~ 1E67:1B06
cs=0x1e67;eip=0x001b08; 	T(MOV(ax, word_3f0a4));	// 61802 mov     ax, word_3F0A4 ;~ 1E67:1B08
cs=0x1e67;eip=0x001b0b; 	T(MOV(dx, word_3f0a6));	// 61803 mov     dx, word_3F0A6 ;~ 1E67:1B0B
cs=0x1e67;eip=0x001b0f; 	T(OR(dx, dx));	// 61804 or      dx, dx ;~ 1E67:1B0F
cs=0x1e67;eip=0x001b11; 	J(JNZ(loc_2e799));	// 61805 jnz     short loc_2E799 ;~ 1E67:1B11
cs=0x1e67;eip=0x001b13; 	T(CMP(ax, 1));	// 61806 cmp     ax, 1 ;~ 1E67:1B13
cs=0x1e67;eip=0x001b16; 	J(JA(loc_2e799));	// 61807 ja      short loc_2E799 ;~ 1E67:1B16
cs=0x1e67;eip=0x001b18; 	T(OR(ax, ax));	// 61808 or      ax, ax ;~ 1E67:1B18
cs=0x1e67;eip=0x001b1a; 	J(JNZ(loc_2e7be));	// 61809 jnz     short loc_2E7BE ;~ 1E67:1B1A
loc_2e76c:
	// 8380 
cs=0x1e67;eip=0x001b1c; 	T(SUB(sp, 4));	// 61812 sub     sp, 4 ;~ 1E67:1B1C
cs=0x1e67;eip=0x001b1f; 	X(PUSH(bp));	// 61813 push    bp ;~ 1E67:1B1F
cs=0x1e67;eip=0x001b20; 	T(MOV(bp, sp));	// 61814 mov     bp, sp ;~ 1E67:1B20
cs=0x1e67;eip=0x001b22; 	T(ADD(bp, 2));	// 61815 add     bp, 2 ;~ 1E67:1B22
cs=0x1e67;eip=0x001b25; 	T(MOV(al, 4));	// 61816 mov     al, 4 ;~ 1E67:1B25
loc_2e777:
	// 8381 
cs=0x1e67;eip=0x001b27; 	T(MOV(dx, *(dw*)(raddr(ss,bp+4))));	// 61819 mov     dx, [bp+4] ;~ 1E67:1B27
cs=0x1e67;eip=0x001b2a; 	X(MOV(*(dw*)(raddr(ss,bp+0)), dx));	// 61820 mov     [bp+0], dx ;~ 1E67:1B2A
cs=0x1e67;eip=0x001b2d; 	T(INC(bp));	// 61821 inc     bp ;~ 1E67:1B2D
cs=0x1e67;eip=0x001b2e; 	T(INC(bp));	// 61822 inc     bp ;~ 1E67:1B2E
cs=0x1e67;eip=0x001b2f; 	T(DEC(al));	// 61823 dec     al ;~ 1E67:1B2F
cs=0x1e67;eip=0x001b31; 	T(CMP(al, 0));	// 61824 cmp     al, 0 ;~ 1E67:1B31
cs=0x1e67;eip=0x001b33; 	J(JNZ(loc_2e777));	// 61825 jnz     short loc_2E777 ;~ 1E67:1B33
cs=0x1e67;eip=0x001b35; 	T(MOV(ax, word_3ef9a));	// 61826 mov     ax, word_3EF9A ;~ 1E67:1B35
cs=0x1e67;eip=0x001b38; 	X(MOV(*(dw*)(raddr(ss,bp+0)), ax));	// 61827 mov     [bp+0], ax ;~ 1E67:1B38
cs=0x1e67;eip=0x001b3b; 	T(MOV(ax, word_3ef98));	// 61828 mov     ax, word_3EF98 ;~ 1E67:1B3B
cs=0x1e67;eip=0x001b3e; 	X(MOV(*(dw*)(raddr(ss,bp+2)), ax));	// 61829 mov     [bp+2], ax ;~ 1E67:1B3E
cs=0x1e67;eip=0x001b41; 	X(POP(bp));	// 61830 pop     bp ;~ 1E67:1B41
cs=0x1e67;eip=0x001b42; 	X(POP(dx));	// 61831 pop     dx ;~ 1E67:1B42
cs=0x1e67;eip=0x001b43; 	X(POP(ds));	// 61832 pop     ds ;~ 1E67:1B43
cs=0x1e67;eip=0x001b44; 	X(POP(ax));	// 61833 pop     ax ;~ 1E67:1B44
cs=0x1e67;eip=0x001b45; 	T(SAHF);	// 61834 sahf ;~ 1E67:1B45
cs=0x1e67;eip=0x001b46; 	X(POP(ax));	// 61835 pop     ax ;~ 1E67:1B46
cs=0x1e67;eip=0x001b47; 	T(STC);	// 61836 stc ;~ 1E67:1B47
cs=0x1e67;eip=0x001b48; 	J(RETF(0));	// 61837 retf ;~ 1E67:1B48
loc_2e799:
	// 8382 
cs=0x1e67;eip=0x001b49; 	X(MOV(*(dw*)(((db*)&dword_3f0bc)), ax));	// 61842 mov     word ptr dword_3F0BC, ax ;~ 1E67:1B49
cs=0x1e67;eip=0x001b4c; 	X(MOV(*(dw*)(((db*)&dword_3f0bc)+2), dx));	// 61843 mov     word ptr dword_3F0BC+2, dx ;~ 1E67:1B4C
cs=0x1e67;eip=0x001b50; 	X(PUSH(es));	// 61844 push    es ;~ 1E67:1B50
cs=0x1e67;eip=0x001b51; 	X(PUSH(bp));	// 61845 push    bp ;~ 1E67:1B51
cs=0x1e67;eip=0x001b52; 	X(PUSH(di));	// 61846 push    di ;~ 1E67:1B52
cs=0x1e67;eip=0x001b53; 	X(PUSH(si));	// 61847 push    si ;~ 1E67:1B53
cs=0x1e67;eip=0x001b54; 	X(PUSH(cx));	// 61848 push    cx ;~ 1E67:1B54
cs=0x1e67;eip=0x001b55; 	X(PUSH(bx));	// 61849 push    bx ;~ 1E67:1B55
cs=0x1e67;eip=0x001b56; 	T(XOR(ax, ax));	// 61850 xor     ax, ax ;~ 1E67:1B56
cs=0x1e67;eip=0x001b58; 	X(MOV(word_3f0a4, ax));	// 61851 mov     word_3F0A4, ax ;~ 1E67:1B58
cs=0x1e67;eip=0x001b5b; 	X(MOV(word_3f0a6, ax));	// 61852 mov     word_3F0A6, ax ;~ 1E67:1B5B
cs=0x1e67;eip=0x001b5e; 	T(MOV(ax, 2));	// 61853 mov     ax, 2 ;~ 1E67:1B5E
cs=0x1e67;eip=0x001b61; 	X(PUSH(ax));	// 61854 push    ax ;~ 1E67:1B61
cs=0x1e67;eip=0x001b62; 	T(CLD);	// 61855 cld ;~ 1E67:1B62
cs=0x1e67;eip=0x001b63; 	J(CALLF(__dispatch_call,dword_3f0bc));	// 61856 call    dword_3F0BC ;~ 1E67:1B63
cs=0x1e67;eip=0x001b67; 	X(POP(ax));	// 61857 pop     ax ;~ 1E67:1B67
cs=0x1e67;eip=0x001b68; 	X(POP(bx));	// 61858 pop     bx ;~ 1E67:1B68
cs=0x1e67;eip=0x001b69; 	X(POP(cx));	// 61859 pop     cx ;~ 1E67:1B69
cs=0x1e67;eip=0x001b6a; 	X(POP(si));	// 61860 pop     si ;~ 1E67:1B6A
cs=0x1e67;eip=0x001b6b; 	X(POP(di));	// 61861 pop     di ;~ 1E67:1B6B
cs=0x1e67;eip=0x001b6c; 	X(POP(bp));	// 61862 pop     bp ;~ 1E67:1B6C
cs=0x1e67;eip=0x001b6d; 	X(POP(es));	// 61863 pop     es ;~ 1E67:1B6D
loc_2e7be:
	// 8383 
cs=0x1e67;eip=0x001b6e; 	X(POP(dx));	// 61866 pop     dx ;~ 1E67:1B6E
cs=0x1e67;eip=0x001b6f; 	X(POP(ds));	// 61867 pop     ds ;~ 1E67:1B6F
cs=0x1e67;eip=0x001b70; 	X(POP(ax));	// 61868 pop     ax ;~ 1E67:1B70
cs=0x1e67;eip=0x001b71; 	T(SAHF);	// 61869 sahf ;~ 1E67:1B71
cs=0x1e67;eip=0x001b72; 	X(POP(ax));	// 61870 pop     ax ;~ 1E67:1B72
cs=0x1e67;eip=0x001b73; 	T(CLC);	// 61871 clc ;~ 1E67:1B73
cs=0x1e67;eip=0x001b74; 	J(RETF(0));	// 61872 retf ;~ 1E67:1B74
ret_1e67_1b75:
	// 8384 
cs=0x1e67;eip=0x001b75; 	J(RETF(0));	// 61874 retf ;~ 1E67:1B75
ret_1e67_1b76:
	// 8385 
cs=0x1e67;eip=0x001b76; __disp=*(dd*)(((db*)&dword_40c26));
	J(return __dispatch_call(__disp, _state););	// 61876 jmp     ss:dword_40C26 ;~ 1E67:1B76
ret_1e67_1b7b:
	// 8386 
cs=0x1e67;eip=0x001b7b; 	X(PUSH(bx));	// 61878 push    bx ;~ 1E67:1B7B
cs=0x1e67;eip=0x001b7c; 	X(PUSH(cx));	// 61879 push    cx ;~ 1E67:1B7C
cs=0x1e67;eip=0x001b7d; 	X(PUSH(dx));	// 61880 push    dx ;~ 1E67:1B7D
cs=0x1e67;eip=0x001b7e; 	X(PUSH(es));	// 61881 push    es ;~ 1E67:1B7E
cs=0x1e67;eip=0x001b7f; 	T(XOR(ah, ah));	// 61882 xor     ah, ah ;~ 1E67:1B7F
cs=0x1e67;eip=0x001b81; 	X(PUSH(ax));	// 61883 push    ax ;~ 1E67:1B81
cs=0x1e67;eip=0x001b82; 	T(MOV(ax, 8));	// 61884 mov     ax, 8 ;~ 1E67:1B82
cs=0x1e67;eip=0x001b85; 	X(PUSH(ax));	// 61885 push    ax ;~ 1E67:1B85
cs=0x1e67;eip=0x001b86; 	J(CALLF(__sigentry,0));	// 61886 call    __sigentry ;~ 1E67:1B86
cs=0x1e67;eip=0x001b8b; 	X(PUSH(ss));	// 61887 push    ss ;~ 1E67:1B8B
cs=0x1e67;eip=0x001b8c; 	X(POP(ds));	// 61888 pop     ds ;~ 1E67:1B8C
cs=0x1e67;eip=0x001b8d; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ds,bx))));	// 61889 call    dword ptr [bx] ;~ 1E67:1B8D
cs=0x1e67;eip=0x001b8f; 	T(ADD(sp, 4));	// 61890 add     sp, 4 ;~ 1E67:1B8F
cs=0x1e67;eip=0x001b92; 	X(POP(es));	// 61891 pop     es ;~ 1E67:1B92
cs=0x1e67;eip=0x001b93; 	X(POP(dx));	// 61892 pop     dx ;~ 1E67:1B93
cs=0x1e67;eip=0x001b94; 	X(POP(cx));	// 61893 pop     cx ;~ 1E67:1B94
cs=0x1e67;eip=0x001b95; 	X(POP(bx));	// 61894 pop     bx ;~ 1E67:1B95
cs=0x1e67;eip=0x001b96; 	J(RETF(0));	// 61895 retf ;~ 1E67:1B96
ret_1e67_1b98:
	// 8387 
cs=0x1e67;eip=0x001b98; 	J(return __afldiv(0, _state););	// 61898 jmp     __aFldiv ;~ 1E67:1B98
ret_1e67_1b9d:
	// 8388 
cs=0x1e67;eip=0x001b9d; 	J(return unknown_libname_3(0, _state););	// 61900 jmp     unknown_libname_3 ; MS Quick C v1.0/v2.01 & MSC v5.1 DOS run-time & graphic ;~ 1E67:1B9D
ret_1e67_1ba2:
	// 8389 
cs=0x1e67;eip=0x001ba2; 	J(return __aflmul(0, _state););	// 61902 jmp     __aFlmul ;~ 1E67:1BA2
ret_1e67_1ba7:
	// 8390 
cs=0x1e67;eip=0x001ba7; 	J(return __affblmul(0, _state););	// 61904 jmp     __aFFblmul ;~ 1E67:1BA7
ret_1e67_1bac:
	// 8391 
cs=0x1e67;eip=0x001bac; 	J(return unknown_libname_4(0, _state););	// 61906 jmp     unknown_libname_4 ; MS Quick C v1.0/v2.01 & MSC v5.1 DOS run-time & graphic ;~ 1E67:1BAC
ret_1e67_1bb1:
	// 8392 
cs=0x1e67;eip=0x001bb1; 	J(return __aflshr(0, _state););	// 61908 jmp     __aFlshr ;~ 1E67:1BB1
ret_1e67_1bb6:
	// 8393 
cs=0x1e67;eip=0x001bb6; 	J(return __afuldiv(0, _state););	// 61910 jmp     __aFuldiv ;~ 1E67:1BB6
ret_1e67_1bbb:
	// 8394 
cs=0x1e67;eip=0x001bbb; 	J(return unknown_libname_5(0, _state););	// 61912 jmp     unknown_libname_5 ; MS Quick C v1.0/v2.01 & MSC v5.1 DOS run-time & graphic ;~ 1E67:1BBB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_2e76c: 	goto loc_2e76c;
        case m2c::kloc_2e777: 	goto loc_2e777;
        case m2c::kloc_2e799: 	goto loc_2e799;
        case m2c::kloc_2e7be: 	goto loc_2e7be;
        case m2c::kret_1e67_1b75: 	goto ret_1e67_1b75;
        case m2c::kret_1e67_1b76: 	goto ret_1e67_1b76;
        case m2c::kret_1e67_1b7b: 	goto ret_1e67_1b7b;
        case m2c::kret_1e67_1b98: 	goto ret_1e67_1b98;
        case m2c::kret_1e67_1b9d: 	goto ret_1e67_1b9d;
        case m2c::kret_1e67_1ba2: 	goto ret_1e67_1ba2;
        case m2c::kret_1e67_1ba7: 	goto ret_1e67_1ba7;
        case m2c::kret_1e67_1bac: 	goto ret_1e67_1bac;
        case m2c::kret_1e67_1bb1: 	goto ret_1e67_1bb1;
        case m2c::kret_1e67_1bb6: 	goto ret_1e67_1bb6;
        case m2c::kret_1e67_1bbb: 	goto ret_1e67_1bbb;
        case m2c::kseg010_1af7_proc: 	goto seg010_1af7_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _strrchr(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _strrchr:
    _begin:
#undef arg_0
#define arg_0 6
	// 61922 arg_0           = dword ptr  6 ;~ 1E67:1BC0
cs=0x1e67;eip=0x001bc0; 	X(PUSH(bp));	// 61924 push    bp ;~ 1E67:1BC0
cs=0x1e67;eip=0x001bc1; 	T(MOV(bp, sp));	// 61925 mov     bp, sp ;~ 1E67:1BC1
cs=0x1e67;eip=0x001bc3; 	X(PUSH(di));	// 61926 push    di ;~ 1E67:1BC3
cs=0x1e67;eip=0x001bc4; 	X(PUSH(ds));	// 61927 push    ds ;~ 1E67:1BC4
cs=0x1e67;eip=0x001bc5; 	X(POP(es));	// 61928 pop     es ;~ 1E67:1BC5
cs=0x1e67;eip=0x001bc6; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61930 mov     di, word ptr [bp+arg_0] ;~ 1E67:1BC6
cs=0x1e67;eip=0x001bc9; 	T(XOR(ax, ax));	// 61931 xor     ax, ax ;~ 1E67:1BC9
cs=0x1e67;eip=0x001bcb; 	T(MOV(cx, 0x0FFFF));	// 61932 mov     cx, 0FFFFh ;~ 1E67:1BCB
	// 61933 repne scasb ;~ 1E67:1BCE
cs=0x1e67;eip=0x001bce; 	T(	REPNE SCASB);	// 61933 repne scasb ;~ 1E67:1BCE
cs=0x1e67;eip=0x001bd0; 	T(INC(cx));	// 61934 inc     cx ;~ 1E67:1BD0
cs=0x1e67;eip=0x001bd1; 	T(NEG(cx));	// 61935 neg     cx ;~ 1E67:1BD1
cs=0x1e67;eip=0x001bd3; 	T(DEC(di));	// 61936 dec     di ;~ 1E67:1BD3
cs=0x1e67;eip=0x001bd4; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0+2))));	// 61937 mov     al, byte ptr [bp+arg_0+2] ;~ 1E67:1BD4
cs=0x1e67;eip=0x001bd7; 	T(STD);	// 61938 std ;~ 1E67:1BD7
	// 61939 repne scasb ;~ 1E67:1BD8
cs=0x1e67;eip=0x001bd8; 	T(	REPNE SCASB);	// 61939 repne scasb ;~ 1E67:1BD8
cs=0x1e67;eip=0x001bda; 	T(INC(di));	// 61940 inc     di ;~ 1E67:1BDA
cs=0x1e67;eip=0x001bdb; 	T(CMP(*(raddr(ds,di)), al));	// 61941 cmp     [di], al ;~ 1E67:1BDB
cs=0x1e67;eip=0x001bdd; 	J(JZ(loc_2e833));	// 61942 jz      short loc_2E833 ;~ 1E67:1BDD
cs=0x1e67;eip=0x001bdf; 	T(XOR(ax, ax));	// 61943 xor     ax, ax ;~ 1E67:1BDF
cs=0x1e67;eip=0x001be1; 	J(JMP(loc_2e835));	// 61944 jmp     short loc_2E835 ;~ 1E67:1BE1
loc_2e833:
	// 8395 
cs=0x1e67;eip=0x001be3; 	T(MOV(ax, di));	// 61948 mov     ax, di ;~ 1E67:1BE3
loc_2e835:
	// 8396 
cs=0x1e67;eip=0x001be5; 	T(CLD);	// 61951 cld ;~ 1E67:1BE5
cs=0x1e67;eip=0x001be6; 	X(POP(di));	// 61952 pop     di ;~ 1E67:1BE6
cs=0x1e67;eip=0x001be7; 	T(MOV(sp, bp));	// 61953 mov     sp, bp ;~ 1E67:1BE7
cs=0x1e67;eip=0x001be9; 	X(POP(bp));	// 61954 pop     bp ;~ 1E67:1BE9
cs=0x1e67;eip=0x001bea; 	J(RETF(0));	// 61955 retf ;~ 1E67:1BEA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_strrchr: 	goto _strrchr;
        case m2c::kloc_2e833: 	goto loc_2e833;
        case m2c::kloc_2e835: 	goto loc_2e835;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __afldiv(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __afldiv:
    _begin:
#undef arg_0
#define arg_0 6
	// 61968 arg_0           = word ptr  6 ;~ 1E67:1BEC
#undef arg_2
#define arg_2 8
	// 61969 arg_2           = word ptr  8 ;~ 1E67:1BEC
#undef arg_4
#define arg_4 0x0A
	// 61970 arg_4           = word ptr  0Ah ;~ 1E67:1BEC
#undef arg_6
#define arg_6 0x0C
	// 61971 arg_6           = word ptr  0Ch ;~ 1E67:1BEC
cs=0x1e67;eip=0x001bec; 	X(PUSH(bp));	// 61973 push    bp ;~ 1E67:1BEC
cs=0x1e67;eip=0x001bed; 	T(MOV(bp, sp));	// 61974 mov     bp, sp ;~ 1E67:1BED
cs=0x1e67;eip=0x001bef; 	X(PUSH(di));	// 61975 push    di ;~ 1E67:1BEF
cs=0x1e67;eip=0x001bf0; 	X(PUSH(si));	// 61976 push    si ;~ 1E67:1BF0
cs=0x1e67;eip=0x001bf1; 	X(PUSH(bx));	// 61977 push    bx ;~ 1E67:1BF1
cs=0x1e67;eip=0x001bf2; 	T(XOR(di, di));	// 61978 xor     di, di ;~ 1E67:1BF2
cs=0x1e67;eip=0x001bf4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 61979 mov     ax, [bp+arg_2] ;~ 1E67:1BF4
cs=0x1e67;eip=0x001bf7; 	T(OR(ax, ax));	// 61980 or      ax, ax ;~ 1E67:1BF7
cs=0x1e67;eip=0x001bf9; 	J(JGE(loc_2e85c));	// 61981 jge     short loc_2E85C ;~ 1E67:1BF9
cs=0x1e67;eip=0x001bfb; 	T(INC(di));	// 61982 inc     di ;~ 1E67:1BFB
cs=0x1e67;eip=0x001bfc; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 61983 mov     dx, [bp+arg_0] ;~ 1E67:1BFC
cs=0x1e67;eip=0x001bff; 	T(NEG(ax));	// 61984 neg     ax ;~ 1E67:1BFF
cs=0x1e67;eip=0x001c01; 	T(NEG(dx));	// 61985 neg     dx ;~ 1E67:1C01
cs=0x1e67;eip=0x001c03; 	T(SBB(ax, 0));	// 61986 sbb     ax, 0 ;~ 1E67:1C03
cs=0x1e67;eip=0x001c06; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), ax));	// 61987 mov     [bp+arg_2], ax ;~ 1E67:1C06
cs=0x1e67;eip=0x001c09; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), dx));	// 61988 mov     [bp+arg_0], dx ;~ 1E67:1C09
loc_2e85c:
	// 8397 
cs=0x1e67;eip=0x001c0c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 61991 mov     ax, [bp+arg_6] ;~ 1E67:1C0C
cs=0x1e67;eip=0x001c0f; 	T(OR(ax, ax));	// 61992 or      ax, ax ;~ 1E67:1C0F
cs=0x1e67;eip=0x001c11; 	J(JGE(loc_2e874));	// 61993 jge     short loc_2E874 ;~ 1E67:1C11
cs=0x1e67;eip=0x001c13; 	T(INC(di));	// 61994 inc     di ;~ 1E67:1C13
cs=0x1e67;eip=0x001c14; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 61995 mov     dx, [bp+arg_4] ;~ 1E67:1C14
cs=0x1e67;eip=0x001c17; 	T(NEG(ax));	// 61996 neg     ax ;~ 1E67:1C17
cs=0x1e67;eip=0x001c19; 	T(NEG(dx));	// 61997 neg     dx ;~ 1E67:1C19
cs=0x1e67;eip=0x001c1b; 	T(SBB(ax, 0));	// 61998 sbb     ax, 0 ;~ 1E67:1C1B
cs=0x1e67;eip=0x001c1e; 	X(MOV(*(dw*)(raddr(ss,bp+arg_6)), ax));	// 61999 mov     [bp+arg_6], ax ;~ 1E67:1C1E
cs=0x1e67;eip=0x001c21; 	X(MOV(*(dw*)(raddr(ss,bp+arg_4)), dx));	// 62000 mov     [bp+arg_4], dx ;~ 1E67:1C21
loc_2e874:
	// 8398 
cs=0x1e67;eip=0x001c24; 	T(OR(ax, ax));	// 62003 or      ax, ax ;~ 1E67:1C24
cs=0x1e67;eip=0x001c26; 	J(JNZ(loc_2e88d));	// 62004 jnz     short loc_2E88D ;~ 1E67:1C26
cs=0x1e67;eip=0x001c28; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 62005 mov     cx, [bp+arg_4] ;~ 1E67:1C28
cs=0x1e67;eip=0x001c2b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 62006 mov     ax, [bp+arg_2] ;~ 1E67:1C2B
cs=0x1e67;eip=0x001c2e; 	T(XOR(dx, dx));	// 62007 xor     dx, dx ;~ 1E67:1C2E
cs=0x1e67;eip=0x001c30; 	T(DIV2(cx));	// 62008 div     cx ;~ 1E67:1C30
cs=0x1e67;eip=0x001c32; 	T(MOV(bx, ax));	// 62009 mov     bx, ax ;~ 1E67:1C32
cs=0x1e67;eip=0x001c34; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 62010 mov     ax, [bp+arg_0] ;~ 1E67:1C34
cs=0x1e67;eip=0x001c37; 	T(DIV2(cx));	// 62011 div     cx ;~ 1E67:1C37
cs=0x1e67;eip=0x001c39; 	T(MOV(dx, bx));	// 62012 mov     dx, bx ;~ 1E67:1C39
cs=0x1e67;eip=0x001c3b; 	J(JMP(loc_2e8c5));	// 62013 jmp     short loc_2E8C5 ;~ 1E67:1C3B
loc_2e88d:
	// 8399 
cs=0x1e67;eip=0x001c3d; 	T(MOV(bx, ax));	// 62017 mov     bx, ax ;~ 1E67:1C3D
cs=0x1e67;eip=0x001c3f; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 62018 mov     cx, [bp+arg_4] ;~ 1E67:1C3F
cs=0x1e67;eip=0x001c42; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 62019 mov     dx, [bp+arg_2] ;~ 1E67:1C42
cs=0x1e67;eip=0x001c45; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 62020 mov     ax, [bp+arg_0] ;~ 1E67:1C45
loc_2e898:
	// 8400 
cs=0x1e67;eip=0x001c48; 	T(SHR(bx, 1));	// 62023 shr     bx, 1 ;~ 1E67:1C48
cs=0x1e67;eip=0x001c4a; 	T(RCR(cx, 1));	// 62024 rcr     cx, 1 ;~ 1E67:1C4A
cs=0x1e67;eip=0x001c4c; 	T(SHR(dx, 1));	// 62025 shr     dx, 1 ;~ 1E67:1C4C
cs=0x1e67;eip=0x001c4e; 	T(RCR(ax, 1));	// 62026 rcr     ax, 1 ;~ 1E67:1C4E
cs=0x1e67;eip=0x001c50; 	T(OR(bx, bx));	// 62027 or      bx, bx ;~ 1E67:1C50
cs=0x1e67;eip=0x001c52; 	J(JNZ(loc_2e898));	// 62028 jnz     short loc_2E898 ;~ 1E67:1C52
cs=0x1e67;eip=0x001c54; 	T(DIV2(cx));	// 62029 div     cx ;~ 1E67:1C54
cs=0x1e67;eip=0x001c56; 	T(MOV(si, ax));	// 62030 mov     si, ax ;~ 1E67:1C56
cs=0x1e67;eip=0x001c58; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_6))));	// 62031 mul     [bp+arg_6] ;~ 1E67:1C58
cs=0x1e67;eip=0x001c5b; 	T(XCHG(ax, cx));	// 62032 xchg    ax, cx ;~ 1E67:1C5B
cs=0x1e67;eip=0x001c5c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 62033 mov     ax, [bp+arg_4] ;~ 1E67:1C5C
cs=0x1e67;eip=0x001c5f; 	T(MUL1_2(si));	// 62034 mul     si ;~ 1E67:1C5F
cs=0x1e67;eip=0x001c61; 	T(ADD(dx, cx));	// 62035 add     dx, cx ;~ 1E67:1C61
cs=0x1e67;eip=0x001c63; 	J(JC(loc_2e8c1));	// 62036 jb      short loc_2E8C1 ;~ 1E67:1C63
cs=0x1e67;eip=0x001c65; 	T(CMP(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 62037 cmp     dx, [bp+arg_2] ;~ 1E67:1C65
cs=0x1e67;eip=0x001c68; 	J(JA(loc_2e8c1));	// 62038 ja      short loc_2E8C1 ;~ 1E67:1C68
cs=0x1e67;eip=0x001c6a; 	J(JC(loc_2e8c2));	// 62039 jb      short loc_2E8C2 ;~ 1E67:1C6A
cs=0x1e67;eip=0x001c6c; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 62040 cmp     ax, [bp+arg_0] ;~ 1E67:1C6C
cs=0x1e67;eip=0x001c6f; 	J(JBE(loc_2e8c2));	// 62041 jbe     short loc_2E8C2 ;~ 1E67:1C6F
loc_2e8c1:
	// 8401 
cs=0x1e67;eip=0x001c71; 	T(DEC(si));	// 62045 dec     si ;~ 1E67:1C71
loc_2e8c2:
	// 8402 
cs=0x1e67;eip=0x001c72; 	T(XOR(dx, dx));	// 62049 xor     dx, dx ;~ 1E67:1C72
cs=0x1e67;eip=0x001c74; 	T(XCHG(ax, si));	// 62050 xchg    ax, si ;~ 1E67:1C74
loc_2e8c5:
	// 8403 
cs=0x1e67;eip=0x001c75; 	T(DEC(di));	// 62053 dec     di ;~ 1E67:1C75
cs=0x1e67;eip=0x001c76; 	J(JNZ(loc_2e8cf));	// 62054 jnz     short loc_2E8CF ;~ 1E67:1C76
cs=0x1e67;eip=0x001c78; 	T(NEG(dx));	// 62055 neg     dx ;~ 1E67:1C78
cs=0x1e67;eip=0x001c7a; 	T(NEG(ax));	// 62056 neg     ax ;~ 1E67:1C7A
cs=0x1e67;eip=0x001c7c; 	T(SBB(dx, 0));	// 62057 sbb     dx, 0 ;~ 1E67:1C7C
loc_2e8cf:
	// 8404 
cs=0x1e67;eip=0x001c7f; 	X(POP(bx));	// 62060 pop     bx ;~ 1E67:1C7F
cs=0x1e67;eip=0x001c80; 	X(POP(si));	// 62061 pop     si ;~ 1E67:1C80
cs=0x1e67;eip=0x001c81; 	X(POP(di));	// 62062 pop     di ;~ 1E67:1C81
cs=0x1e67;eip=0x001c82; 	T(MOV(sp, bp));	// 62063 mov     sp, bp ;~ 1E67:1C82
cs=0x1e67;eip=0x001c84; 	X(POP(bp));	// 62064 pop     bp ;~ 1E67:1C84
cs=0x1e67;eip=0x001c85; 	J(RETF(8));	// 62065 retf    8 ;~ 1E67:1C85

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__afldiv: 	goto __afldiv;
        case m2c::kloc_2e85c: 	goto loc_2e85c;
        case m2c::kloc_2e874: 	goto loc_2e874;
        case m2c::kloc_2e88d: 	goto loc_2e88d;
        case m2c::kloc_2e898: 	goto loc_2e898;
        case m2c::kloc_2e8c1: 	goto loc_2e8c1;
        case m2c::kloc_2e8c2: 	goto loc_2e8c2;
        case m2c::kloc_2e8c5: 	goto loc_2e8c5;
        case m2c::kloc_2e8cf: 	goto loc_2e8cf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __aflmul(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __aflmul:
    _begin:
#undef arg_0
#define arg_0 6
	// 62076 arg_0           = word ptr  6 ;~ 1E67:1C88
#undef arg_2
#define arg_2 8
	// 62077 arg_2           = word ptr  8 ;~ 1E67:1C88
#undef arg_4
#define arg_4 0x0A
	// 62078 arg_4           = word ptr  0Ah ;~ 1E67:1C88
#undef arg_6
#define arg_6 0x0C
	// 62079 arg_6           = word ptr  0Ch ;~ 1E67:1C88
cs=0x1e67;eip=0x001c88; 	X(PUSH(bp));	// 62081 push    bp ;~ 1E67:1C88
cs=0x1e67;eip=0x001c89; 	T(MOV(bp, sp));	// 62082 mov     bp, sp ;~ 1E67:1C89
cs=0x1e67;eip=0x001c8b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 62083 mov     ax, [bp+arg_2] ;~ 1E67:1C8B
cs=0x1e67;eip=0x001c8e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 62084 mov     bx, [bp+arg_6] ;~ 1E67:1C8E
cs=0x1e67;eip=0x001c91; 	T(OR(bx, ax));	// 62085 or      bx, ax ;~ 1E67:1C91
cs=0x1e67;eip=0x001c93; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 62086 mov     bx, [bp+arg_4] ;~ 1E67:1C93
cs=0x1e67;eip=0x001c96; 	J(JNZ(loc_2e8f3));	// 62087 jnz     short loc_2E8F3 ;~ 1E67:1C96
cs=0x1e67;eip=0x001c98; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 62088 mov     ax, [bp+arg_0] ;~ 1E67:1C98
cs=0x1e67;eip=0x001c9b; 	T(MUL1_2(bx));	// 62089 mul     bx ;~ 1E67:1C9B
cs=0x1e67;eip=0x001c9d; 	T(MOV(sp, bp));	// 62090 mov     sp, bp ;~ 1E67:1C9D
cs=0x1e67;eip=0x001c9f; 	X(POP(bp));	// 62091 pop     bp ;~ 1E67:1C9F
cs=0x1e67;eip=0x001ca0; 	J(RETF(8));	// 62092 retf    8 ;~ 1E67:1CA0
loc_2e8f3:
	// 8405 
cs=0x1e67;eip=0x001ca3; 	T(MUL1_2(bx));	// 62096 mul     bx ;~ 1E67:1CA3
cs=0x1e67;eip=0x001ca5; 	T(MOV(cx, ax));	// 62097 mov     cx, ax ;~ 1E67:1CA5
cs=0x1e67;eip=0x001ca7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 62098 mov     ax, [bp+arg_0] ;~ 1E67:1CA7
cs=0x1e67;eip=0x001caa; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_6))));	// 62099 mul     [bp+arg_6] ;~ 1E67:1CAA
cs=0x1e67;eip=0x001cad; 	T(ADD(cx, ax));	// 62100 add     cx, ax ;~ 1E67:1CAD
cs=0x1e67;eip=0x001caf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 62101 mov     ax, [bp+arg_0] ;~ 1E67:1CAF
cs=0x1e67;eip=0x001cb2; 	T(MUL1_2(bx));	// 62102 mul     bx ;~ 1E67:1CB2
cs=0x1e67;eip=0x001cb4; 	T(ADD(dx, cx));	// 62103 add     dx, cx ;~ 1E67:1CB4
cs=0x1e67;eip=0x001cb6; 	T(MOV(sp, bp));	// 62104 mov     sp, bp ;~ 1E67:1CB6
cs=0x1e67;eip=0x001cb8; 	X(POP(bp));	// 62105 pop     bp ;~ 1E67:1CB8
cs=0x1e67;eip=0x001cb9; 	J(RETF(8));	// 62106 retf    8 ;~ 1E67:1CB9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__aflmul: 	goto __aflmul;
        case m2c::kloc_2e8f3: 	goto loc_2e8f3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __aflshr(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __aflshr:
    _begin:
cs=0x1e67;eip=0x001cbc; 	T(XOR(ch, ch));	// 62116 xor     ch, ch ;~ 1E67:1CBC
cs=0x1e67;eip=0x001cbe; 	J(JCXZ(locret_2e916));	// 62117 jcxz    short locret_2E916 ;~ 1E67:1CBE
loc_2e910:
	// 8406 
cs=0x1e67;eip=0x001cc0; 	T(SAR(dx, 1));	// 62120 sar     dx, 1 ;~ 1E67:1CC0
cs=0x1e67;eip=0x001cc2; 	T(RCR(ax, 1));	// 62121 rcr     ax, 1 ;~ 1E67:1CC2
cs=0x1e67;eip=0x001cc4; 	J(LOOP(loc_2e910));	// 62122 loop    loc_2E910 ;~ 1E67:1CC4
locret_2e916:
	// 8407 
cs=0x1e67;eip=0x001cc6; 	J(RETF(0));	// 62125 retf ;~ 1E67:1CC6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__aflshr: 	goto __aflshr;
        case m2c::kloc_2e910: 	goto loc_2e910;
        case m2c::klocret_2e916: 	goto locret_2e916;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool unknown_libname_3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    unknown_libname_3:
    _begin:
#undef arg_0
#define arg_0 6
	// 62138 arg_0           = word ptr  6 ;~ 1E67:1CC8
#undef arg_2
#define arg_2 8
	// 62139 arg_2           = word ptr  8 ;~ 1E67:1CC8
#undef arg_4
#define arg_4 0x0A
	// 62140 arg_4           = word ptr  0Ah ;~ 1E67:1CC8
cs=0x1e67;eip=0x001cc8; 	X(PUSH(bp));	// 62142 push    bp ;~ 1E67:1CC8
cs=0x1e67;eip=0x001cc9; 	T(MOV(bp, sp));	// 62143 mov     bp, sp ;~ 1E67:1CC9
cs=0x1e67;eip=0x001ccb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 62144 mov     bx, [bp+arg_0] ;~ 1E67:1CCB
cs=0x1e67;eip=0x001cce; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 62145 push    [bp+arg_4] ;~ 1E67:1CCE
cs=0x1e67;eip=0x001cd1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 62146 push    [bp+arg_2] ;~ 1E67:1CD1
cs=0x1e67;eip=0x001cd4; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 62147 push    word ptr [bx+2] ;~ 1E67:1CD4
cs=0x1e67;eip=0x001cd7; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 62148 push    word ptr [bx] ;~ 1E67:1CD7
cs=0x1e67;eip=0x001cd9; 	J(CALLF(__afldiv,0));	// 62149 call    __aFldiv ;~ 1E67:1CD9
cs=0x1e67;eip=0x001cde; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 62150 mov     bx, [bp+arg_0] ;~ 1E67:1CDE
cs=0x1e67;eip=0x001ce1; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 62151 mov     [bx+2], dx ;~ 1E67:1CE1
cs=0x1e67;eip=0x001ce4; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 62152 mov     [bx], ax ;~ 1E67:1CE4
cs=0x1e67;eip=0x001ce6; 	T(MOV(sp, bp));	// 62153 mov     sp, bp ;~ 1E67:1CE6
cs=0x1e67;eip=0x001ce8; 	X(POP(bp));	// 62154 pop     bp ;~ 1E67:1CE8
cs=0x1e67;eip=0x001ce9; 	J(RETF(6));	// 62155 retf    6 ;~ 1E67:1CE9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kunknown_libname_3: 	goto unknown_libname_3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __affblmul(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __affblmul:
    _begin:
#undef arg_0
#define arg_0 6
	// 62165 arg_0           = word ptr  6 ;~ 1E67:1CEC
#undef arg_2
#define arg_2 8
	// 62166 arg_2           = word ptr  8 ;~ 1E67:1CEC
#undef arg_4
#define arg_4 0x0A
	// 62167 arg_4           = word ptr  0Ah ;~ 1E67:1CEC
cs=0x1e67;eip=0x001cec; 	X(PUSH(bp));	// 62169 push    bp ;~ 1E67:1CEC
cs=0x1e67;eip=0x001ced; 	T(MOV(bp, sp));	// 62170 mov     bp, sp ;~ 1E67:1CED
cs=0x1e67;eip=0x001cef; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 62171 mov     bx, [bp+arg_0] ;~ 1E67:1CEF
cs=0x1e67;eip=0x001cf2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 62172 push    [bp+arg_4] ;~ 1E67:1CF2
cs=0x1e67;eip=0x001cf5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 62173 push    [bp+arg_2] ;~ 1E67:1CF5
cs=0x1e67;eip=0x001cf8; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 62174 push    word ptr [bx+2] ;~ 1E67:1CF8
cs=0x1e67;eip=0x001cfb; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 62175 push    word ptr [bx] ;~ 1E67:1CFB
cs=0x1e67;eip=0x001cfd; 	J(CALLF(__aflmul,0));	// 62176 call    __aFlmul ;~ 1E67:1CFD
cs=0x1e67;eip=0x001d02; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 62177 mov     bx, [bp+arg_0] ;~ 1E67:1D02
cs=0x1e67;eip=0x001d05; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 62178 mov     [bx], ax ;~ 1E67:1D05
cs=0x1e67;eip=0x001d07; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 62179 mov     [bx+2], dx ;~ 1E67:1D07
cs=0x1e67;eip=0x001d0a; 	T(MOV(sp, bp));	// 62180 mov     sp, bp ;~ 1E67:1D0A
cs=0x1e67;eip=0x001d0c; 	X(POP(bp));	// 62181 pop     bp ;~ 1E67:1D0C
cs=0x1e67;eip=0x001d0d; 	J(RETF(6));	// 62182 retf    6 ;~ 1E67:1D0D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__affblmul: 	goto __affblmul;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool unknown_libname_4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    unknown_libname_4:
    _begin:
#undef arg_0
#define arg_0 6
	// 62194 arg_0           = word ptr  6 ;~ 1E67:1D10
#undef arg_2
#define arg_2 8
	// 62195 arg_2           = word ptr  8 ;~ 1E67:1D10
cs=0x1e67;eip=0x001d10; 	X(PUSH(bp));	// 62197 push    bp ;~ 1E67:1D10
cs=0x1e67;eip=0x001d11; 	T(MOV(bp, sp));	// 62198 mov     bp, sp ;~ 1E67:1D11
cs=0x1e67;eip=0x001d13; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 62199 mov     bx, [bp+arg_0] ;~ 1E67:1D13
cs=0x1e67;eip=0x001d16; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 62200 mov     ax, [bx] ;~ 1E67:1D16
cs=0x1e67;eip=0x001d18; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 62201 mov     dx, [bx+2] ;~ 1E67:1D18
cs=0x1e67;eip=0x001d1b; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 62202 mov     cx, [bp+arg_2] ;~ 1E67:1D1B
cs=0x1e67;eip=0x001d1e; 	J(CALLF(__aflshr,0));	// 62203 call    __aFlshr ;~ 1E67:1D1E
cs=0x1e67;eip=0x001d23; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 62204 mov     bx, [bp+arg_0] ;~ 1E67:1D23
cs=0x1e67;eip=0x001d26; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 62205 mov     [bx], ax ;~ 1E67:1D26
cs=0x1e67;eip=0x001d28; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 62206 mov     [bx+2], dx ;~ 1E67:1D28
cs=0x1e67;eip=0x001d2b; 	T(MOV(sp, bp));	// 62207 mov     sp, bp ;~ 1E67:1D2B
cs=0x1e67;eip=0x001d2d; 	X(POP(bp));	// 62208 pop     bp ;~ 1E67:1D2D
cs=0x1e67;eip=0x001d2e; 	J(RETF(4));	// 62209 retf    4 ;~ 1E67:1D2E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kunknown_libname_4: 	goto unknown_libname_4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool unknown_libname_5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    unknown_libname_5:
    _begin:
#undef arg_0
#define arg_0 6
	// 62222 arg_0           = word ptr  6 ;~ 1E67:1D32
#undef arg_2
#define arg_2 8
	// 62223 arg_2           = word ptr  8 ;~ 1E67:1D32
#undef arg_4
#define arg_4 0x0A
	// 62224 arg_4           = word ptr  0Ah ;~ 1E67:1D32
cs=0x1e67;eip=0x001d32; 	X(PUSH(bp));	// 62226 push    bp ;~ 1E67:1D32
cs=0x1e67;eip=0x001d33; 	T(MOV(bp, sp));	// 62227 mov     bp, sp ;~ 1E67:1D33
cs=0x1e67;eip=0x001d35; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 62228 mov     bx, [bp+arg_0] ;~ 1E67:1D35
cs=0x1e67;eip=0x001d38; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 62229 push    [bp+arg_4] ;~ 1E67:1D38
cs=0x1e67;eip=0x001d3b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 62230 push    [bp+arg_2] ;~ 1E67:1D3B
cs=0x1e67;eip=0x001d3e; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 62231 push    word ptr [bx+2] ;~ 1E67:1D3E
cs=0x1e67;eip=0x001d41; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 62232 push    word ptr [bx] ;~ 1E67:1D41
cs=0x1e67;eip=0x001d43; 	J(CALLF(__afuldiv,0));	// 62233 call    __aFuldiv ;~ 1E67:1D43
cs=0x1e67;eip=0x001d48; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 62234 mov     bx, [bp+arg_0] ;~ 1E67:1D48
cs=0x1e67;eip=0x001d4b; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 62235 mov     [bx+2], dx ;~ 1E67:1D4B
cs=0x1e67;eip=0x001d4e; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 62236 mov     [bx], ax ;~ 1E67:1D4E
cs=0x1e67;eip=0x001d50; 	T(MOV(sp, bp));	// 62237 mov     sp, bp ;~ 1E67:1D50
cs=0x1e67;eip=0x001d52; 	X(POP(bp));	// 62238 pop     bp ;~ 1E67:1D52
cs=0x1e67;eip=0x001d53; 	J(RETF(6));	// 62239 retf    6 ;~ 1E67:1D53

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kunknown_libname_5: 	goto unknown_libname_5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool __afuldiv(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    __afuldiv:
    _begin:
#undef arg_0
#define arg_0 6
	// 62250 arg_0           = word ptr  6 ;~ 1E67:1D56
#undef arg_2
#define arg_2 8
	// 62251 arg_2           = word ptr  8 ;~ 1E67:1D56
#undef arg_4
#define arg_4 0x0A
	// 62252 arg_4           = word ptr  0Ah ;~ 1E67:1D56
#undef arg_6
#define arg_6 0x0C
	// 62253 arg_6           = word ptr  0Ch ;~ 1E67:1D56
cs=0x1e67;eip=0x001d56; 	X(PUSH(bp));	// 62255 push    bp ;~ 1E67:1D56
cs=0x1e67;eip=0x001d57; 	T(MOV(bp, sp));	// 62256 mov     bp, sp ;~ 1E67:1D57
cs=0x1e67;eip=0x001d59; 	X(PUSH(bx));	// 62257 push    bx ;~ 1E67:1D59
cs=0x1e67;eip=0x001d5a; 	X(PUSH(si));	// 62258 push    si ;~ 1E67:1D5A
cs=0x1e67;eip=0x001d5b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 62259 mov     ax, [bp+arg_6] ;~ 1E67:1D5B
cs=0x1e67;eip=0x001d5e; 	T(OR(ax, ax));	// 62260 or      ax, ax ;~ 1E67:1D5E
cs=0x1e67;eip=0x001d60; 	J(JNZ(loc_2e9c7));	// 62261 jnz     short loc_2E9C7 ;~ 1E67:1D60
cs=0x1e67;eip=0x001d62; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 62262 mov     cx, [bp+arg_4] ;~ 1E67:1D62
cs=0x1e67;eip=0x001d65; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 62263 mov     ax, [bp+arg_2] ;~ 1E67:1D65
cs=0x1e67;eip=0x001d68; 	T(XOR(dx, dx));	// 62264 xor     dx, dx ;~ 1E67:1D68
cs=0x1e67;eip=0x001d6a; 	T(DIV2(cx));	// 62265 div     cx ;~ 1E67:1D6A
cs=0x1e67;eip=0x001d6c; 	T(MOV(bx, ax));	// 62266 mov     bx, ax ;~ 1E67:1D6C
cs=0x1e67;eip=0x001d6e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 62267 mov     ax, [bp+arg_0] ;~ 1E67:1D6E
cs=0x1e67;eip=0x001d71; 	T(DIV2(cx));	// 62268 div     cx ;~ 1E67:1D71
cs=0x1e67;eip=0x001d73; 	T(MOV(dx, bx));	// 62269 mov     dx, bx ;~ 1E67:1D73
cs=0x1e67;eip=0x001d75; 	J(JMP(loc_2e9ff));	// 62270 jmp     short loc_2E9FF ;~ 1E67:1D75
loc_2e9c7:
	// 8408 
cs=0x1e67;eip=0x001d77; 	T(MOV(cx, ax));	// 62274 mov     cx, ax ;~ 1E67:1D77
cs=0x1e67;eip=0x001d79; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 62275 mov     bx, [bp+arg_4] ;~ 1E67:1D79
cs=0x1e67;eip=0x001d7c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 62276 mov     dx, [bp+arg_2] ;~ 1E67:1D7C
cs=0x1e67;eip=0x001d7f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 62277 mov     ax, [bp+arg_0] ;~ 1E67:1D7F
loc_2e9d2:
	// 8409 
cs=0x1e67;eip=0x001d82; 	T(SHR(cx, 1));	// 62280 shr     cx, 1 ;~ 1E67:1D82
cs=0x1e67;eip=0x001d84; 	T(RCR(bx, 1));	// 62281 rcr     bx, 1 ;~ 1E67:1D84
cs=0x1e67;eip=0x001d86; 	T(SHR(dx, 1));	// 62282 shr     dx, 1 ;~ 1E67:1D86
cs=0x1e67;eip=0x001d88; 	T(RCR(ax, 1));	// 62283 rcr     ax, 1 ;~ 1E67:1D88
cs=0x1e67;eip=0x001d8a; 	T(OR(cx, cx));	// 62284 or      cx, cx ;~ 1E67:1D8A
cs=0x1e67;eip=0x001d8c; 	J(JNZ(loc_2e9d2));	// 62285 jnz     short loc_2E9D2 ;~ 1E67:1D8C
cs=0x1e67;eip=0x001d8e; 	T(DIV2(bx));	// 62286 div     bx ;~ 1E67:1D8E
cs=0x1e67;eip=0x001d90; 	T(MOV(si, ax));	// 62287 mov     si, ax ;~ 1E67:1D90
cs=0x1e67;eip=0x001d92; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_6))));	// 62288 mul     [bp+arg_6] ;~ 1E67:1D92
cs=0x1e67;eip=0x001d95; 	T(XCHG(ax, cx));	// 62289 xchg    ax, cx ;~ 1E67:1D95
cs=0x1e67;eip=0x001d96; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 62290 mov     ax, [bp+arg_4] ;~ 1E67:1D96
cs=0x1e67;eip=0x001d99; 	T(MUL1_2(si));	// 62291 mul     si ;~ 1E67:1D99
cs=0x1e67;eip=0x001d9b; 	T(ADD(dx, cx));	// 62292 add     dx, cx ;~ 1E67:1D9B
cs=0x1e67;eip=0x001d9d; 	J(JC(loc_2e9fb));	// 62293 jb      short loc_2E9FB ;~ 1E67:1D9D
cs=0x1e67;eip=0x001d9f; 	T(CMP(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 62294 cmp     dx, [bp+arg_2] ;~ 1E67:1D9F
cs=0x1e67;eip=0x001da2; 	J(JA(loc_2e9fb));	// 62295 ja      short loc_2E9FB ;~ 1E67:1DA2
cs=0x1e67;eip=0x001da4; 	J(JC(loc_2e9fc));	// 62296 jb      short loc_2E9FC ;~ 1E67:1DA4
cs=0x1e67;eip=0x001da6; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 62297 cmp     ax, [bp+arg_0] ;~ 1E67:1DA6
cs=0x1e67;eip=0x001da9; 	J(JBE(loc_2e9fc));	// 62298 jbe     short loc_2E9FC ;~ 1E67:1DA9
loc_2e9fb:
	// 8410 
cs=0x1e67;eip=0x001dab; 	T(DEC(si));	// 62302 dec     si ;~ 1E67:1DAB
loc_2e9fc:
	// 8411 
cs=0x1e67;eip=0x001dac; 	T(XOR(dx, dx));	// 62306 xor     dx, dx ;~ 1E67:1DAC
cs=0x1e67;eip=0x001dae; 	T(XCHG(ax, si));	// 62307 xchg    ax, si ;~ 1E67:1DAE
loc_2e9ff:
	// 8412 
cs=0x1e67;eip=0x001daf; 	X(POP(si));	// 62310 pop     si ;~ 1E67:1DAF
cs=0x1e67;eip=0x001db0; 	X(POP(bx));	// 62311 pop     bx ;~ 1E67:1DB0
cs=0x1e67;eip=0x001db1; 	T(MOV(sp, bp));	// 62312 mov     sp, bp ;~ 1E67:1DB1
cs=0x1e67;eip=0x001db3; 	X(POP(bp));	// 62313 pop     bp ;~ 1E67:1DB3
cs=0x1e67;eip=0x001db4; 	J(RETF(8));	// 62314 retf    8 ;~ 1E67:1DB4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k__afuldiv: 	goto __afuldiv;
        case m2c::kloc_2e9c7: 	goto loc_2e9c7;
        case m2c::kloc_2e9d2: 	goto loc_2e9d2;
        case m2c::kloc_2e9fb: 	goto loc_2e9fb;
        case m2c::kloc_2e9fc: 	goto loc_2e9fc;
        case m2c::kloc_2e9ff: 	goto loc_2e9ff;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

