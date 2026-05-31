/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group11(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;
db int_num;
    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group11:
    _begin:
start:
	// 57041 
cs=0x1e67;eip=0x000012; 	T(MOV(ah, 0x30));	// 57042 mov     ah, 30h ;~ 1E67:0012
ret_1e67_14:
	// 8234 
cs=0x1e67;eip=0x000014; 	R(_INT(0x21));	// 57043 int     21h             ; DOS - GET DOS VERSION ;~ 1E67:0014
cs=0x1e67;eip=0x000016; 	T(CMP(al, 2));	// 57045 cmp     al, 2 ;~ 1E67:0016
cs=0x1e67;eip=0x000018; 	R(JNC(loc_2cc6c));	// 57046 jnb     short loc_2CC6C ;~ 1E67:0018
cs=0x1e67;eip=0x00001a; 	R(_INT(0x20));	// 57047 int     20h             ; DOS - PROGRAM TERMINATION ;~ 1E67:001A
loc_2cc6c:
	// 8235 
cs=0x1e67;eip=0x00001c; 	T(MOV(di, seg_offset(dseg)));	// 57052 mov     di, seg dseg ;~ 1E67:001C
cs=0x1e67;eip=0x00001f; 	T(MOV(si, *(dw*)(raddr(ds,2))));	// 57053 mov     si, ds:2        ; pspseg:2 = Memory size in paragraphs ;~ 1E67:001F
cs=0x1e67;eip=0x000023; 	T(SUB(si, di));	// 57055 sub     si, di ;~ 1E67:0023
cs=0x1e67;eip=0x000025; 	T(CMP(si, 0x1000));	// 57056 cmp     si, 1000h ;~ 1E67:0025
cs=0x1e67;eip=0x000029; 	R(JC(loc_2cc7e));	// 57057 jb      short loc_2CC7E ;~ 1E67:0029
cs=0x1e67;eip=0x00002b; 	T(MOV(si, 0x1000));	// 57058 mov     si, 1000h       ; si = 1000h or memory size if less than 1000h ;~ 1E67:002B
loc_2cc7e:
	// 8236 
cs=0x1e67;eip=0x00002e; 	T(CLI);	// 57061 cli ;~ 1E67:002E
cs=0x1e67;eip=0x00002f; 	R(MOV(ss, di));	// 57062 mov     ss, di          ; ss = dseg ;~ 1E67:002F
cs=0x1e67;eip=0x000031; 	T(ADD(sp, 0x0AD1E));	// 57064 add     sp, 0AD1Eh      ; sp = end of stack in data segment ;~ 1E67:0031
cs=0x1e67;eip=0x000035; 	T(STI);	// 57065 sti ;~ 1E67:0035
cs=0x1e67;eip=0x000036; 	R(JNC(_no_stack_overflow));	// 57066 jnb     short _no_stack_overflow ; check for overflow and abort if there was more than 64k data+stack ;~ 1E67:0036
cs=0x1e67;eip=0x000038; 	X(PUSH(ss));	// 57067 push    ss ;~ 1E67:0038
cs=0x1e67;eip=0x000039; 	X(POP(ds));	// 57068 pop     ds ;~ 1E67:0039
cs=0x1e67;eip=0x00003a; 	R(CALLF(__ff_msgbanner,0));	// 57070 call    __FF_MSGBANNER ;~ 1E67:003A
cs=0x1e67;eip=0x00003f; 	T(XOR(ax, ax));	// 57071 xor     ax, ax ;~ 1E67:003F
cs=0x1e67;eip=0x000041; 	X(PUSH(ax));	// 57072 push    ax ;~ 1E67:0041
cs=0x1e67;eip=0x000042; 	R(CALLF(__nmsg_write,0));	// 57073 call    __NMSG_WRITE ;~ 1E67:0042
cs=0x1e67;eip=0x000047; 	T(MOV(ax, 0x4CFF));	// 57074 mov     ax, 4CFFh ;~ 1E67:0047
cs=0x1e67;eip=0x00004a; 	R(_INT(0x21));	// 57075 int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 1E67:004A
_no_stack_overflow:
	// 8237 
cs=0x1e67;eip=0x00004c; 	T(AND(sp, 0x0FFFE));	// 57080 and     sp, 0FFFEh ;~ 1E67:004C
cs=0x1e67;eip=0x00004f; 	X(MOV(*(dw*)(((db*)&crtsp1)), sp));	// 57081 mov     ss:crtsp1, sp ;~ 1E67:004F
cs=0x1e67;eip=0x000054; 	X(MOV(*(dw*)(((db*)&crtsp2)), sp));	// 57082 mov     ss:crtsp2, sp ;~ 1E67:0054
cs=0x1e67;eip=0x000059; 	T(MOV(ax, si));	// 57083 mov     ax, si ;~ 1E67:0059
cs=0x1e67;eip=0x00005b; 	T(MOV(cl, 4));	// 57084 mov     cl, 4 ;~ 1E67:005B
cs=0x1e67;eip=0x00005d; 	T(SHL(ax, cl));	// 57085 shl     ax, cl ;~ 1E67:005D
cs=0x1e67;eip=0x00005f; 	T(DEC(ax));	// 57086 dec     ax ;~ 1E67:005F
cs=0x1e67;eip=0x000060; 	X(MOV(*(dw*)(((db*)&word_3ed74)), ax));	// 57087 mov     ss:word_3ED74, ax ; ax = (01000h << 4) - 1 = 0ffffh ;~ 1E67:0060
cs=0x1e67;eip=0x000064; 	T(ADD(si, di));	// 57088 add     si, di ;~ 1E67:0064
cs=0x1e67;eip=0x000066; 	X(MOV(*(dw*)(raddr(ds,2)), si));	// 57089 mov     ds:2, si        ; set memory size in psp?, si = 01000h + dseg ;~ 1E67:0066
cs=0x1e67;eip=0x00006a; 	T(MOV(bx, es));	// 57090 mov     bx, es          ; es = pspseg on startup ;~ 1E67:006A
cs=0x1e67;eip=0x00006c; 	T(SUB(bx, si));	// 57091 sub     bx, si ;~ 1E67:006C
cs=0x1e67;eip=0x00006e; 	T(NEG(bx));	// 57092 neg     bx              ; bx = -(pspseg - si) = -(pspseg - (1000h + dseg)) ;~ 1E67:006E
cs=0x1e67;eip=0x000070; 	T(MOV(ah, 0x4A));	// 57093 mov     ah, 4Ah ;~ 1E67:0070
cs=0x1e67;eip=0x000072; 	R(_INT(0x21));	// 57094 int     21h             ; DOS - 2+ - ADJUST MEMORY BLOCK SIZE (SETBLOCK) ;~ 1E67:0072
cs=0x1e67;eip=0x000074; 	X(MOV(*(dw*)(((db*)&crtpspseg)), ds));	// 57097 mov     ss:crtpspseg, ds ;~ 1E67:0074
cs=0x1e67;eip=0x000079; 	X(PUSH(ss));	// 57098 push    ss ;~ 1E67:0079
cs=0x1e67;eip=0x00007a; 	X(POP(es));	// 57099 pop     es ;~ 1E67:007A
cs=0x1e67;eip=0x00007b; 	T(CLD);	// 57101 cld ;~ 1E67:007B
	// 57102 nop                     ; offset in dseg where uninitialized data starts ;~ 1E67:007C
	// 57103 nop ;~ 1E67:007D
	// 57104 nop ;~ 1E67:007E
	// 57105 nop                     ; original size/end of dseg ;~ 1E67:007F
	// 57106 nop ;~ 1E67:0080
	// 57107 nop ;~ 1E67:0081
	// 57108 nop ;~ 1E67:0082
	// 57109 nop ;~ 1E67:0083
	// 57110 nop ;~ 1E67:0084
	// 57111 nop ;~ 1E67:0085
	// 57112 nop                     ; initialize uninitialized data to 0 ;~ 1E67:0086
	// 57113 nop ;~ 1E67:0087
cs=0x1e67;eip=0x000088; 	X(PUSH(ss));	// 57114 push    ss ;~ 1E67:0088
cs=0x1e67;eip=0x000089; 	X(POP(ds));	// 57115 pop     ds ;~ 1E67:0089
cs=0x1e67;eip=0x00008a; 	R(CALLF(sub_2cd28,0));	// 57116 call    sub_2CD28 ;~ 1E67:008A
cs=0x1e67;eip=0x00008f; 	X(PUSH(ss));	// 57117 push    ss ;~ 1E67:008F
cs=0x1e67;eip=0x000090; 	X(POP(ds));	// 57118 pop     ds ;~ 1E67:0090
cs=0x1e67;eip=0x000091; 	R(CALLF(__setenvp,0));	// 57119 call    __setenvp ;~ 1E67:0091
cs=0x1e67;eip=0x000096; 	R(CALLF(__setargv,0));	// 57120 call    far ptr __setargv ;~ 1E67:0096
cs=0x1e67;eip=0x00009b; 	T(XOR(bp, bp));	// 57121 xor     bp, bp ;~ 1E67:009B
cs=0x1e67;eip=0x00009d; 	X(PUSH(p_argv_));	// 57122 push    p_argv_         ; p_argv ;~ 1E67:009D
cs=0x1e67;eip=0x0000a1; 	X(PUSH(argv_));	// 57123 push    argv_           ; p_argv ;~ 1E67:00A1
cs=0x1e67;eip=0x0000a5; 	X(PUSH(argc_));	// 57124 push    argc_           ; p_argc ;~ 1E67:00A5
cs=0x1e67;eip=0x0000a9; 	R(CALLF(stuntsmain,0));	// 57125 call    stuntsmain ;~ 1E67:00A9
cs=0x1e67;eip=0x0000ae; 	X(PUSH(ax));	// 57126 push    ax ;~ 1E67:00AE
cs=0x1e67;eip=0x0000af; 	R(CALLF(libsub_quit_to_dos_alt,0));	// 57127 call    far ptr libsub_quit_to_dos_alt ;~ 1E67:00AF
__cintdiv:
	// 8238 
cs=0x1e67;eip=0x0000b4; 	T(MOV(ax, seg_offset(dseg)));	// 57131 mov     ax, seg dseg ;~ 1E67:00B4
cs=0x1e67;eip=0x0000b7; 	T(MOV(ds, ax));	// 57132 mov     ds, ax ;~ 1E67:00B7
cs=0x1e67;eip=0x0000b9; 	T(MOV(ax, 3));	// 57133 mov     ax, 3 ;~ 1E67:00B9
cs=0x1e67;eip=0x0000bc; 	X(MOV(*(dw*)(((db*)&crtquitfunction)), m2c::klibsub_quit_to_dos_alt));	// 57134 mov     ss:crtquitfunction, offset libsub_quit_to_dos_alt ;~ 1E67:00BC
__amsg_exit:
	// 8239 
cs=0x1e67;eip=0x0000c3; 	X(PUSH(ax));	// 57138 push    ax ;~ 1E67:00C3
cs=0x1e67;eip=0x0000c4; 	R(CALLF(__ff_msgbanner,0));	// 57139 call    __FF_MSGBANNER ;~ 1E67:00C4
cs=0x1e67;eip=0x0000c9; 	R(CALLF(__nmsg_write,0));	// 57140 call    __NMSG_WRITE ;~ 1E67:00C9
cs=0x1e67;eip=0x0000ce; 	T(MOV(ax, 0x0FF));	// 57141 mov     ax, 0FFh ;~ 1E67:00CE
cs=0x1e67;eip=0x0000d1; 	X(PUSH(ax));	// 57142 push    ax ;~ 1E67:00D1
cs=0x1e67;eip=0x0000d2; 	X(PUSH(cs));	// 57143 push    cs ;~ 1E67:00D2
cs=0x1e67;eip=0x0000d3; 	R(CALL(__dispatch_call,crtquitfunction));	// 57144 call    crtquitfunction ;~ 1E67:00D3
sub_2cd28:
	// 57153 
cs=0x1e67;eip=0x0000d8; 	T(MOV(ah, 0x30));	// 57154 mov     ah, 30h ;~ 1E67:00D8
cs=0x1e67;eip=0x0000da; 	R(_INT(0x21));	// 57155 int     21h             ; DOS - GET DOS VERSION ;~ 1E67:00DA
cs=0x1e67;eip=0x0000dc; 	X(MOV(crtdosversion, ax));	// 57157 mov     crtdosversion, ax ;~ 1E67:00DC
cs=0x1e67;eip=0x0000df; 	T(MOV(ax, 0x3500));	// 57158 mov     ax, 3500h ;~ 1E67:00DF
cs=0x1e67;eip=0x0000e2; 	R(_INT(0x21));	// 57159 int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 1E67:00E2
cs=0x1e67;eip=0x0000e4; 	X(MOV(*(dw*)(((db*)&crtintrvec0)), bx));	// 57162 mov     word ptr crtintrvec0, bx ;~ 1E67:00E4
cs=0x1e67;eip=0x0000e8; 	X(MOV(*(dw*)(((db*)&crtintrvec0)+2), es));	// 57163 mov     word ptr crtintrvec0+2, es ;~ 1E67:00E8
cs=0x1e67;eip=0x0000ec; 	X(PUSH(cs));	// 57164 push    cs ;~ 1E67:00EC
cs=0x1e67;eip=0x0000ed; 	X(POP(ds));	// 57165 pop     ds ;~ 1E67:00ED
cs=0x1e67;eip=0x0000ee; 	T(MOV(ax, 0x2500));	// 57167 mov     ax, 2500h ;~ 1E67:00EE
cs=0x1e67;eip=0x0000f1; 	T(MOV(dx, m2c::k__cintdiv));	// 57168 mov     dx, offset __cintDIV ;~ 1E67:00F1
cs=0x1e67;eip=0x0000f4; 	R(_INT(0x21));	// 57169 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 1E67:00F4
cs=0x1e67;eip=0x0000f6; 	X(PUSH(ss));	// 57172 push    ss ;~ 1E67:00F6
cs=0x1e67;eip=0x0000f7; 	X(POP(ds));	// 57173 pop     ds ;~ 1E67:00F7
cs=0x1e67;eip=0x0000f8; 	T(MOV(cx, *(dw*)(((db*)&dword_40c1e)+2)));	// 57175 mov     cx, word ptr dword_40C1E+2 ;~ 1E67:00F8
cs=0x1e67;eip=0x0000fc; 	R(JCXZ(loc_2cd7c));	// 57176 jcxz    short loc_2CD7C ;~ 1E67:00FC
cs=0x1e67;eip=0x0000fe; 	T(MOV(es, crtpspseg));	// 57177 mov     es, crtpspseg ;~ 1E67:00FE
cs=0x1e67;eip=0x000102; 	T(MOV(si, *(dw*)(raddr(es,0x2C))));	// 57179 mov     si, es:2Ch      ; si = environment segment ;~ 1E67:0102
cs=0x1e67;eip=0x000107; 	T(LDS(ax, dword_40c22));	// 57180 lds     ax, dword_40C22 ;~ 1E67:0107
cs=0x1e67;eip=0x00010b; 	T(MOV(dx, ds));	// 57181 mov     dx, ds ;~ 1E67:010B
cs=0x1e67;eip=0x00010d; 	T(XOR(bx, bx));	// 57182 xor     bx, bx ;~ 1E67:010D
cs=0x1e67;eip=0x00010f; 	R(CALLF(__dispatch_call,*(dd*)(((db*)&dword_40c1e))));	// 57183 call    ss:dword_40C1E ;~ 1E67:010F
cs=0x1e67;eip=0x000114; 	R(JNC(loc_2cd6b));	// 57184 jnb     short loc_2CD6B ;~ 1E67:0114
cs=0x1e67;eip=0x000116; 	X(PUSH(ss));	// 57185 push    ss ;~ 1E67:0116
cs=0x1e67;eip=0x000117; 	X(POP(ds));	// 57186 pop     ds ;~ 1E67:0117
cs=0x1e67;eip=0x000118; 	R(JMP(__fptrap));	// 57187 jmp     __fptrap ;~ 1E67:0118
loc_2cd6b:
	// 8240 
cs=0x1e67;eip=0x00011b; 	T(LDS(ax, *(dd*)(((db*)&dword_40c26))));	// 57191 lds     ax, ss:dword_40C26 ;~ 1E67:011B
cs=0x1e67;eip=0x000120; 	T(MOV(dx, ds));	// 57192 mov     dx, ds ;~ 1E67:0120
cs=0x1e67;eip=0x000122; 	T(MOV(bx, 3));	// 57193 mov     bx, 3 ;~ 1E67:0122
cs=0x1e67;eip=0x000125; 	R(CALLF(__dispatch_call,*(dd*)(((db*)&dword_40c1e))));	// 57194 call    ss:dword_40C1E ;~ 1E67:0125
cs=0x1e67;eip=0x00012a; 	X(PUSH(ss));	// 57195 push    ss ;~ 1E67:012A
cs=0x1e67;eip=0x00012b; 	X(POP(ds));	// 57196 pop     ds ;~ 1E67:012B
loc_2cd7c:
	// 8241 
cs=0x1e67;eip=0x00012c; 	T(MOV(es, crtpspseg));	// 57199 mov     es, crtpspseg ;~ 1E67:012C
cs=0x1e67;eip=0x000130; 	T(MOV(cx, *(dw*)(raddr(es,0x2C))));	// 57200 mov     cx, es:2Ch      ; es:2C = environment segment ;~ 1E67:0130
cs=0x1e67;eip=0x000135; 	R(JCXZ(loc_2cdbd));	// 57201 jcxz    short loc_2CDBD ;~ 1E67:0135
cs=0x1e67;eip=0x000137; 	T(MOV(es, cx));	// 57202 mov     es, cx ;~ 1E67:0137
cs=0x1e67;eip=0x000139; 	T(XOR(di, di));	// 57203 xor     di, di ;~ 1E67:0139
loc_2cd8b:
	// 8242 
cs=0x1e67;eip=0x00013b; 	T(CMP(*(raddr(es,di)), 0));	// 57206 cmp     byte ptr es:[di], 0 ;~ 1E67:013B
cs=0x1e67;eip=0x00013f; 	R(JZ(loc_2cdbd));	// 57207 jz      short loc_2CDBD ;~ 1E67:013F
cs=0x1e67;eip=0x000141; 	T(MOV(cx, 0x0C));	// 57208 mov     cx, 0Ch ;~ 1E67:0141
cs=0x1e67;eip=0x000144; 	T(MOV(si, offset(dseg,ac_file_info)));	// 57209 mov     si, offset aC_file_info ; ";C_FILE_INFO" ;~ 1E67:0144
	// 57210 repe cmpsb ;~ 1E67:0147
cs=0x1e67;eip=0x000147; 	T(	REPE CMPSB);	// 57210 repe cmpsb ;~ 1E67:0147
cs=0x1e67;eip=0x000149; 	R(JZ(loc_2cda6));	// 57211 jz      short loc_2CDA6 ;~ 1E67:0149
cs=0x1e67;eip=0x00014b; 	T(MOV(cx, 0x7FFF));	// 57212 mov     cx, 7FFFh ;~ 1E67:014B
cs=0x1e67;eip=0x00014e; 	T(XOR(ax, ax));	// 57213 xor     ax, ax ;~ 1E67:014E
	// 57214 repne scasb ;~ 1E67:0150
cs=0x1e67;eip=0x000150; 	T(	REPNE SCASB);	// 57214 repne scasb ;~ 1E67:0150
cs=0x1e67;eip=0x000152; 	R(JNZ(loc_2cdbd));	// 57215 jnz     short loc_2CDBD ;~ 1E67:0152
cs=0x1e67;eip=0x000154; 	R(JMP(loc_2cd8b));	// 57216 jmp     short loc_2CD8B ;~ 1E67:0154
loc_2cda6:
	// 8243 
cs=0x1e67;eip=0x000156; 	X(PUSH(es));	// 57220 push    es ;~ 1E67:0156
cs=0x1e67;eip=0x000157; 	X(PUSH(ds));	// 57221 push    ds ;~ 1E67:0157
cs=0x1e67;eip=0x000158; 	X(POP(es));	// 57222 pop     es ;~ 1E67:0158
cs=0x1e67;eip=0x000159; 	X(POP(ds));	// 57224 pop     ds ;~ 1E67:0159
cs=0x1e67;eip=0x00015a; 	T(MOV(si, di));	// 57225 mov     si, di ;~ 1E67:015A
cs=0x1e67;eip=0x00015c; 	T(MOV(di, offset(dseg,crtfilehandles)));	// 57226 mov     di, offset crtfilehandles ;~ 1E67:015C
cs=0x1e67;eip=0x00015f; 	T(LODSB);	// 57227 lodsb ;~ 1E67:015F
cs=0x1e67;eip=0x000160; 	T(CBW);	// 57228 cbw ;~ 1E67:0160
cs=0x1e67;eip=0x000161; 	T(XCHG(ax, cx));	// 57229 xchg    ax, cx ;~ 1E67:0161
loc_2cdb2:
	// 8244 
cs=0x1e67;eip=0x000162; 	T(LODSB);	// 57232 lodsb ;~ 1E67:0162
cs=0x1e67;eip=0x000163; 	T(INC(al));	// 57233 inc     al ;~ 1E67:0163
cs=0x1e67;eip=0x000165; 	R(JZ(loc_2cdb8));	// 57234 jz      short loc_2CDB8 ;~ 1E67:0165
cs=0x1e67;eip=0x000167; 	T(DEC(ax));	// 57235 dec     ax ;~ 1E67:0167
loc_2cdb8:
	// 8245 
cs=0x1e67;eip=0x000168; 	X(STOSB);	// 57238 stosb ;~ 1E67:0168
cs=0x1e67;eip=0x000169; 	R(LOOP(loc_2cdb2));	// 57239 loop    loc_2CDB2 ;~ 1E67:0169
cs=0x1e67;eip=0x00016b; 	X(PUSH(ss));	// 57240 push    ss ;~ 1E67:016B
cs=0x1e67;eip=0x00016c; 	X(POP(ds));	// 57241 pop     ds ;~ 1E67:016C
loc_2cdbd:
	// 8246 
cs=0x1e67;eip=0x00016d; 	T(MOV(bx, 4));	// 57245 mov     bx, 4 ;~ 1E67:016D
loc_2cdc0:
	// 8247 
cs=0x1e67;eip=0x000170; 	X(AND(*((&crtfilehandles)+bx), 0x0BF));	// 57248 and     crtfilehandles[bx], 0BFh ;~ 1E67:0170
cs=0x1e67;eip=0x000175; 	T(MOV(ax, 0x4400));	// 57249 mov     ax, 4400h ;~ 1E67:0175
cs=0x1e67;eip=0x000178; 	R(_INT(0x21));	// 57250 int     21h             ; DOS - 2+ - IOCTL - GET DEVICE INFORMATION ;~ 1E67:0178
cs=0x1e67;eip=0x00017a; 	R(JC(loc_2cdd6));	// 57252 jb      short loc_2CDD6 ;~ 1E67:017A
cs=0x1e67;eip=0x00017c; 	T(TEST(dl, 0x80));	// 57253 test    dl, 80h ;~ 1E67:017C
cs=0x1e67;eip=0x00017f; 	R(JZ(loc_2cdd6));	// 57254 jz      short loc_2CDD6 ;~ 1E67:017F
cs=0x1e67;eip=0x000181; 	X(OR(*((&crtfilehandles)+bx), 0x40));	// 57255 or      crtfilehandles[bx], 40h ;~ 1E67:0181
loc_2cdd6:
	// 8248 
cs=0x1e67;eip=0x000186; 	T(DEC(bx));	// 57259 dec     bx ;~ 1E67:0186
cs=0x1e67;eip=0x000187; 	R(JNS(loc_2cdc0));	// 57260 jns     short loc_2CDC0 ;~ 1E67:0187
cs=0x1e67;eip=0x000189; 	T(MOV(si, offset(dseg,_flushallptr)));	// 57261 mov     si, offset _flushallptr ;~ 1E67:0189
cs=0x1e67;eip=0x00018c; 	T(MOV(di, offset(dseg,_flushallptr)));	// 57262 mov     di, offset _flushallptr ;~ 1E67:018C
cs=0x1e67;eip=0x00018f; 	R(CALL(sub_2ce77,0));	// 57263 call    sub_2CE77 ;~ 1E67:018F
cs=0x1e67;eip=0x000192; 	T(MOV(si, offset(dseg,_flushallptr)));	// 57264 mov     si, offset _flushallptr ;~ 1E67:0192
cs=0x1e67;eip=0x000195; 	T(MOV(di, offset(dseg,_flushallptr)));	// 57265 mov     di, offset _flushallptr ;~ 1E67:0195
cs=0x1e67;eip=0x000198; 	R(CALL(sub_2ce77,0));	// 57266 call    sub_2CE77 ;~ 1E67:0198
cs=0x1e67;eip=0x00019b; 	R(RETF(0));	// 57267 retf ;~ 1E67:019B
libsub_quit_to_dos_alt:
	// 57275 
cs=0x1e67;eip=0x00019c; 	X(PUSH(bp));	// 57277 push    bp ;~ 1E67:019C
ret_1e67_19d:
	// 8249 
cs=0x1e67;eip=0x00019d; 	T(MOV(bp, sp));	// 57278 mov     bp, sp ;~ 1E67:019D
cs=0x1e67;eip=0x00019f; 	T(MOV(si, offset(dseg,unk_42a24)));	// 57279 mov     si, offset unk_42A24 ;~ 1E67:019F
cs=0x1e67;eip=0x0001a2; 	T(MOV(di, offset(dseg,unk_42a24)));	// 57280 mov     di, offset unk_42A24 ;~ 1E67:01A2
cs=0x1e67;eip=0x0001a5; 	R(CALL(sub_2ce77,0));	// 57281 call    sub_2CE77 ;~ 1E67:01A5
cs=0x1e67;eip=0x0001a8; 	T(MOV(si, offset(dseg,_flushallptr)));	// 57282 mov     si, offset _flushallptr ;~ 1E67:01A8
cs=0x1e67;eip=0x0001ab; 	T(MOV(di, offset(dseg,anmsg)));	// 57283 mov     di, offset aNmsg ; "<<NMSG>>" ;~ 1E67:01AB
cs=0x1e67;eip=0x0001ae; 	R(CALL(sub_2ce77,0));	// 57284 call    sub_2CE77 ;~ 1E67:01AE
cs=0x1e67;eip=0x0001b1; 	R(JMP(loc_2ce06));	// 57285 jmp     short loc_2CE06 ;~ 1E67:01B1
libsub_quit_to_dos:
	// 57293 
#undef arg_2
#define arg_2 6
	// 57296 arg_2           = word ptr  6 ;~ 1E67:01B3
ret_1e67_1b3:
	// 8250 
cs=0x1e67;eip=0x0001b3; 	X(PUSH(bp));	// 57298 push    bp ;~ 1E67:01B3
cs=0x1e67;eip=0x0001b4; 	T(MOV(bp, sp));	// 57299 mov     bp, sp ;~ 1E67:01B4
loc_2ce06:
	// 8251 
cs=0x1e67;eip=0x0001b6; 	T(MOV(si, offset(dseg,anmsg)));	// 57302 mov     si, offset aNmsg ; "<<NMSG>>" ;~ 1E67:01B6
cs=0x1e67;eip=0x0001b9; 	T(MOV(di, offset(dseg,anmsg)));	// 57303 mov     di, offset aNmsg ; "<<NMSG>>" ;~ 1E67:01B9
cs=0x1e67;eip=0x0001bc; 	R(CALL(sub_2ce77,0));	// 57304 call    sub_2CE77 ;~ 1E67:01BC
cs=0x1e67;eip=0x0001bf; 	T(MOV(si, offset(dseg,anmsg)));	// 57305 mov     si, offset aNmsg ; "<<NMSG>>" ;~ 1E67:01BF
cs=0x1e67;eip=0x0001c2; 	T(MOV(di, offset(dseg,anmsg)));	// 57306 mov     di, offset aNmsg ; "<<NMSG>>" ;~ 1E67:01C2
cs=0x1e67;eip=0x0001c5; 	R(CALL(sub_2ce77,0));	// 57307 call    sub_2CE77 ;~ 1E67:01C5
cs=0x1e67;eip=0x0001c8; 	R(CALLF(__nullcheck,0));	// 57308 call    __nullcheck ;~ 1E67:01C8
cs=0x1e67;eip=0x0001cd; 	T(OR(ax, ax));	// 57309 or      ax, ax ;~ 1E67:01CD
cs=0x1e67;eip=0x0001cf; 	R(JZ(loc_2ce2c));	// 57310 jz      short loc_2CE2C ;~ 1E67:01CF
cs=0x1e67;eip=0x0001d1; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 57311 cmp     [bp+arg_2], 0 ;~ 1E67:01D1
cs=0x1e67;eip=0x0001d5; 	R(JNZ(loc_2ce2c));	// 57312 jnz     short loc_2CE2C ;~ 1E67:01D5
cs=0x1e67;eip=0x0001d7; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), 0x0FF));	// 57313 mov     [bp+arg_2], 0FFh ;~ 1E67:01D7
loc_2ce2c:
	// 8252 
cs=0x1e67;eip=0x0001dc; 	T(MOV(cx, 0x0F));	// 57317 mov     cx, 0Fh ;~ 1E67:01DC
cs=0x1e67;eip=0x0001df; 	T(MOV(bx, 5));	// 57318 mov     bx, 5 ;~ 1E67:01DF
loc_2ce32:
	// 8253 
cs=0x1e67;eip=0x0001e2; 	T(TEST(*((&crtfilehandles)+bx), 1));	// 57321 test    crtfilehandles[bx], 1 ;~ 1E67:01E2
cs=0x1e67;eip=0x0001e7; 	R(JZ(loc_2ce3d));	// 57322 jz      short loc_2CE3D ;~ 1E67:01E7
cs=0x1e67;eip=0x0001e9; 	T(MOV(ah, 0x3E));	// 57323 mov     ah, 3Eh ;~ 1E67:01E9
cs=0x1e67;eip=0x0001eb; 	R(_INT(0x21));	// 57324 int     21h             ; DOS - 2+ - CLOSE A FILE WITH HANDLE ;~ 1E67:01EB
loc_2ce3d:
	// 8254 
cs=0x1e67;eip=0x0001ed; 	T(INC(bx));	// 57328 inc     bx ;~ 1E67:01ED
cs=0x1e67;eip=0x0001ee; 	R(LOOP(loc_2ce32));	// 57329 loop    loc_2CE32 ;~ 1E67:01EE
cs=0x1e67;eip=0x0001f0; 	R(CALL(sub_2ce4a,0));	// 57330 call    sub_2CE4A ;~ 1E67:01F0
cs=0x1e67;eip=0x0001f3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 57331 mov     ax, [bp+arg_2] ;~ 1E67:01F3
cs=0x1e67;eip=0x0001f6; 	T(MOV(ah, 0x4C));	// 57332 mov     ah, 4Ch ;~ 1E67:01F6
cs=0x1e67;eip=0x0001f8; 	R(_INT(0x21));	// 57333 int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 1E67:01F8
sub_2ce4a:
	// 57340 
cs=0x1e67;eip=0x0001fa; 	T(MOV(cx, *(dw*)(((db*)&dword_40c1e)+2)));	// 57341 mov     cx, word ptr dword_40C1E+2 ;~ 1E67:01FA
cs=0x1e67;eip=0x0001fe; 	R(JCXZ(loc_2ce57));	// 57342 jcxz    short loc_2CE57 ;~ 1E67:01FE
cs=0x1e67;eip=0x000200; 	T(MOV(bx, 2));	// 57343 mov     bx, 2 ;~ 1E67:0200
cs=0x1e67;eip=0x000203; 	R(CALLF(__dispatch_call,dword_40c1e));	// 57344 call    dword_40C1E ;~ 1E67:0203
loc_2ce57:
	// 8255 
cs=0x1e67;eip=0x000207; 	X(PUSH(ds));	// 57347 push    ds ;~ 1E67:0207
cs=0x1e67;eip=0x000208; 	T(LDS(dx, crtintrvec0));	// 57348 lds     dx, crtintrvec0 ;~ 1E67:0208
cs=0x1e67;eip=0x00020c; 	T(MOV(ax, 0x2500));	// 57349 mov     ax, 2500h ;~ 1E67:020C
cs=0x1e67;eip=0x00020f; 	R(_INT(0x21));	// 57350 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 1E67:020F
cs=0x1e67;eip=0x000211; 	X(POP(ds));	// 57353 pop     ds ;~ 1E67:0211
cs=0x1e67;eip=0x000212; 	T(CMP(byte_3ee16, 0));	// 57354 cmp     byte_3EE16, 0 ;~ 1E67:0212
cs=0x1e67;eip=0x000217; 	R(JZ(locret_2ce76));	// 57355 jz      short locret_2CE76 ;~ 1E67:0217
cs=0x1e67;eip=0x000219; 	X(PUSH(ds));	// 57356 push    ds ;~ 1E67:0219
cs=0x1e67;eip=0x00021a; 	T(MOV(al, byte_3ee17));	// 57357 mov     al, byte_3EE17 ;~ 1E67:021A
cs=0x1e67;eip=0x00021d; 	T(LDS(dx, dword_3ee18));	// 57358 lds     dx, dword_3EE18 ;~ 1E67:021D
cs=0x1e67;eip=0x000221; 	T(MOV(ah, 0x25));	// 57359 mov     ah, 25h ;~ 1E67:0221
cs=0x1e67;eip=0x000223; 	R(_INT(0x21));	// 57360 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 1E67:0223
cs=0x1e67;eip=0x000225; 	X(POP(ds));	// 57363 pop     ds ;~ 1E67:0225
locret_2ce76:
	// 8256 
cs=0x1e67;eip=0x000226; 	R(RETN(0));	// 57366 retn ;~ 1E67:0226
sub_2ce77:
	// 57373 
cs=0x1e67;eip=0x000227; 	T(CMP(si, di));	// 57375 cmp     si, di ;~ 1E67:0227
ret_1e67_229:
	// 8257 
cs=0x1e67;eip=0x000229; 	R(JNC(locret_2ce89));	// 57376 jnb     short locret_2CE89 ;~ 1E67:0229
cs=0x1e67;eip=0x00022b; 	T(SUB(di, 4));	// 57377 sub     di, 4 ;~ 1E67:022B
cs=0x1e67;eip=0x00022e; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 57378 mov     ax, [di] ;~ 1E67:022E
cs=0x1e67;eip=0x000230; 	T(OR(ax, *(dw*)(raddr(ds,di+2))));	// 57379 or      ax, [di+2] ;~ 1E67:0230
cs=0x1e67;eip=0x000233; 	R(JZ(sub_2ce77));	// 57380 jz      short sub_2CE77 ;~ 1E67:0233
cs=0x1e67;eip=0x000235; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ds,di))));	// 57381 call    dword ptr [di] ;~ 1E67:0235
cs=0x1e67;eip=0x000237; 	R(JMP(sub_2ce77));	// 57382 jmp     short sub_2CE77 ;~ 1E67:0237
locret_2ce89:
	// 8258 
cs=0x1e67;eip=0x000239; 	R(RETN(0));	// 57386 retn ;~ 1E67:0239
__ff_msgbanner:
	// 57394 
cs=0x1e67;eip=0x00023a; 	X(PUSH(bp));	// 57396 push    bp ;~ 1E67:023A
ret_1e67_23b:
	// 8259 
cs=0x1e67;eip=0x00023b; 	T(MOV(bp, sp));	// 57397 mov     bp, sp ;~ 1E67:023B
cs=0x1e67;eip=0x00023d; 	T(MOV(ax, 0x0FC));	// 57398 mov     ax, 0FCh ; '¸' ;~ 1E67:023D
cs=0x1e67;eip=0x000240; 	X(PUSH(ax));	// 57399 push    ax ;~ 1E67:0240
cs=0x1e67;eip=0x000241; 	R(CALLF(__nmsg_write,0));	// 57400 call    __NMSG_WRITE ;~ 1E67:0241
cs=0x1e67;eip=0x000246; 	T(CMP(word_3ee1e, 0));	// 57401 cmp     word_3EE1E, 0 ;~ 1E67:0246
cs=0x1e67;eip=0x00024b; 	R(JZ(loc_2cea1));	// 57402 jz      short loc_2CEA1 ;~ 1E67:024B
cs=0x1e67;eip=0x00024d; 	R(CALLF(__dispatch_call,*(dd*)((&unk_3ee1c))));	// 57403 call    dword ptr unk_3EE1C ;~ 1E67:024D
loc_2cea1:
	// 8260 
cs=0x1e67;eip=0x000251; 	T(MOV(ax, 0x0FF));	// 57406 mov     ax, 0FFh ;~ 1E67:0251
cs=0x1e67;eip=0x000254; 	X(PUSH(ax));	// 57407 push    ax ;~ 1E67:0254
cs=0x1e67;eip=0x000255; 	R(CALLF(__nmsg_write,0));	// 57408 call    __NMSG_WRITE ;~ 1E67:0255
cs=0x1e67;eip=0x00025a; 	T(MOV(sp, bp));	// 57409 mov     sp, bp ;~ 1E67:025A
cs=0x1e67;eip=0x00025c; 	X(POP(bp));	// 57410 pop     bp ;~ 1E67:025C
cs=0x1e67;eip=0x00025d; 	R(RETF(0));	// 57411 retf ;~ 1E67:025D
__fptrap:
	// 57419 
cs=0x1e67;eip=0x00025e; 	T(MOV(ax, 2));	// 57421 mov     ax, 2 ;~ 1E67:025E
ret_1e67_261:
	// 8261 
cs=0x1e67;eip=0x000261; 	R(JMP(__amsg_exit));	// 57422 jmp     __amsg_exit ;~ 1E67:0261
__chkstk:
	// 57430 
cs=0x1e67;eip=0x000264; 	X(POP(cx));	// 57431 pop     cx ;~ 1E67:0264
ret_1e67_265:
	// 8262 
cs=0x1e67;eip=0x000265; 	X(POP(dx));	// 57432 pop     dx ;~ 1E67:0265
cs=0x1e67;eip=0x000266; 	T(MOV(bx, sp));	// 57433 mov     bx, sp ;~ 1E67:0266
cs=0x1e67;eip=0x000268; 	T(SUB(bx, ax));	// 57434 sub     bx, ax ;~ 1E67:0268
cs=0x1e67;eip=0x00026a; 	R(JC(loc_2cec7));	// 57435 jb      short loc_2CEC7 ;~ 1E67:026A
cs=0x1e67;eip=0x00026c; 	T(CMP(bx, word_3ee24));	// 57436 cmp     bx, word_3EE24 ;~ 1E67:026C
cs=0x1e67;eip=0x000270; 	R(JC(loc_2cec7));	// 57437 jb      short loc_2CEC7 ;~ 1E67:0270
cs=0x1e67;eip=0x000272; 	T(MOV(sp, bx));	// 57438 mov     sp, bx ;~ 1E67:0272
cs=0x1e67;eip=0x000274; 	X(PUSH(dx));	// 57439 push    dx ;~ 1E67:0274
cs=0x1e67;eip=0x000275; 	X(PUSH(cx));	// 57440 push    cx ;~ 1E67:0275
cs=0x1e67;eip=0x000276; 	R(RETF(0));	// 57441 retf ;~ 1E67:0276
loc_2cec7:
	// 8263 
cs=0x1e67;eip=0x000277; 	T(MOV(ax, *(dw*)(((db*)&dword_3ee20))));	// 57446 mov     ax, word ptr dword_3EE20 ;~ 1E67:0277
cs=0x1e67;eip=0x00027a; 	T(INC(ax));	// 57447 inc     ax ;~ 1E67:027A
cs=0x1e67;eip=0x00027b; 	R(JNZ(loc_2ced2));	// 57448 jnz     short loc_2CED2 ;~ 1E67:027B
cs=0x1e67;eip=0x00027d; 	T(XOR(ax, ax));	// 57449 xor     ax, ax ;~ 1E67:027D
cs=0x1e67;eip=0x00027f; 	R(JMP(__amsg_exit));	// 57450 jmp     __amsg_exit ;~ 1E67:027F
loc_2ced2:
	// 8264 
cs=0x1e67;eip=0x000282; 	X(PUSH(dx));	// 57454 push    dx ;~ 1E67:0282
cs=0x1e67;eip=0x000283; 	X(PUSH(cx));	// 57455 push    cx ;~ 1E67:0283
cs=0x1e67;eip=0x000284; __disp=dword_3ee20;
	R(JMP(__dispatch_call));	// 57456 jmp     dword_3EE20 ;~ 1E67:0284
__nullcheck:
	// 57464 
cs=0x1e67;eip=0x000288; 	X(PUSH(si));	// 57465 push    si ;~ 1E67:0288
ret_1e67_289:
	// 8265 
cs=0x1e67;eip=0x000289; 	T(XOR(si, si));	// 57466 xor     si, si ;~ 1E67:0289
cs=0x1e67;eip=0x00028b; 	T(MOV(cx, 0x42));	// 57467 mov     cx, 42h ; 'B' ;~ 1E67:028B
cs=0x1e67;eip=0x00028e; 	T(XOR(ah, ah));	// 57468 xor     ah, ah ;~ 1E67:028E
cs=0x1e67;eip=0x000290; 	T(CLD);	// 57469 cld ;~ 1E67:0290
loc_2cee1:
	// 8266 
cs=0x1e67;eip=0x000291; 	T(LODSB);	// 57472 lodsb ;~ 1E67:0291
cs=0x1e67;eip=0x000292; 	T(XOR(ah, al));	// 57473 xor     ah, al ;~ 1E67:0292
cs=0x1e67;eip=0x000294; 	R(LOOP(loc_2cee1));	// 57474 loop    loc_2CEE1 ;~ 1E67:0294
cs=0x1e67;eip=0x000296; 	T(XOR(ah, 0x55));	// 57475 xor     ah, 55h ;~ 1E67:0296
cs=0x1e67;eip=0x000299; 	R(JZ(loc_2cefc));	// 57476 jz      short loc_2CEFC ;~ 1E67:0299
cs=0x1e67;eip=0x00029b; 	R(CALLF(__ff_msgbanner,0));	// 57477 call    __FF_MSGBANNER ;~ 1E67:029B
cs=0x1e67;eip=0x0002a0; 	T(MOV(ax, 1));	// 57478 mov     ax, 1 ;~ 1E67:02A0
cs=0x1e67;eip=0x0002a3; 	X(PUSH(ax));	// 57479 push    ax ;~ 1E67:02A3
cs=0x1e67;eip=0x0002a4; 	R(CALLF(__nmsg_write,0));	// 57480 call    __NMSG_WRITE ;~ 1E67:02A4
cs=0x1e67;eip=0x0002a9; 	T(MOV(ax, 1));	// 57481 mov     ax, 1 ;~ 1E67:02A9
loc_2cefc:
	// 8267 
cs=0x1e67;eip=0x0002ac; 	X(POP(si));	// 57484 pop     si ;~ 1E67:02AC
cs=0x1e67;eip=0x0002ad; 	R(RETF(0));	// 57485 retf ;~ 1E67:02AD
__setargv:
	// 57493 
cs=0x1e67;eip=0x0002ae; 	X(POP(*(dw*)(((db*)&dword_3ee26))));	// 57494 pop     word ptr dword_3EE26 ;~ 1E67:02AE
ret_1e67_2b2:
	// 8268 
cs=0x1e67;eip=0x0002b2; 	X(POP(*(dw*)(((db*)&dword_3ee26)+2)));	// 57495 pop     word ptr dword_3EE26+2 ;~ 1E67:02B2
cs=0x1e67;eip=0x0002b6; 	T(MOV(dx, 2));	// 57496 mov     dx, 2 ;~ 1E67:02B6
cs=0x1e67;eip=0x0002b9; 	T(CMP(*(db*)(((db*)&crtdosversion)), dl));	// 57497 cmp     byte ptr crtdosversion, dl ;~ 1E67:02B9
cs=0x1e67;eip=0x0002bd; 	R(JZ(loc_2cf38));	// 57498 jz      short loc_2CF38 ;~ 1E67:02BD
cs=0x1e67;eip=0x0002bf; 	T(MOV(es, crtpspseg));	// 57499 mov     es, crtpspseg ;~ 1E67:02BF
cs=0x1e67;eip=0x0002c3; 	T(MOV(es, *(dw*)(raddr(es,0x2C))));	// 57501 mov     es, word ptr es:2Ch ; es:2c = environemtn segment ;~ 1E67:02C3
cs=0x1e67;eip=0x0002c8; 	X(MOV(crtenvseg, es));	// 57502 mov     crtenvseg, es ;~ 1E67:02C8
cs=0x1e67;eip=0x0002cc; 	T(XOR(ax, ax));	// 57503 xor     ax, ax ;~ 1E67:02CC
cs=0x1e67;eip=0x0002ce; 	T(CWD);	// 57504 cwd ;~ 1E67:02CE
cs=0x1e67;eip=0x0002cf; 	T(MOV(cx, 0x8000));	// 57505 mov     cx, 8000h ;~ 1E67:02CF
cs=0x1e67;eip=0x0002d2; 	T(XOR(di, di));	// 57506 xor     di, di ;~ 1E67:02D2
loc_2cf24:
	// 8269 
	// 57509 repne scasb ;~ 1E67:02D4
cs=0x1e67;eip=0x0002d4; 	T(	REPNE SCASB);	// 57509 repne scasb ;~ 1E67:02D4
cs=0x1e67;eip=0x0002d6; 	T(SCASB);	// 57510 scasb ;~ 1E67:02D6
cs=0x1e67;eip=0x0002d7; 	R(JNZ(loc_2cf24));	// 57511 jnz     short loc_2CF24 ;~ 1E67:02D7
cs=0x1e67;eip=0x0002d9; 	T(INC(di));	// 57512 inc     di ;~ 1E67:02D9
cs=0x1e67;eip=0x0002da; 	T(INC(di));	// 57513 inc     di ;~ 1E67:02DA
cs=0x1e67;eip=0x0002db; 	X(MOV(word_3ee0e, di));	// 57514 mov     word_3EE0E, di ;~ 1E67:02DB
cs=0x1e67;eip=0x0002df; 	T(MOV(cx, 0x0FFFF));	// 57515 mov     cx, 0FFFFh ;~ 1E67:02DF
	// 57516 repne scasb ;~ 1E67:02E2
cs=0x1e67;eip=0x0002e2; 	T(	REPNE SCASB);	// 57516 repne scasb ;~ 1E67:02E2
cs=0x1e67;eip=0x0002e4; 	T(NOT(cx));	// 57517 not     cx ;~ 1E67:02E4
cs=0x1e67;eip=0x0002e6; 	T(MOV(dx, cx));	// 57518 mov     dx, cx ;~ 1E67:02E6
loc_2cf38:
	// 8270 
cs=0x1e67;eip=0x0002e8; 	T(MOV(di, 1));	// 57521 mov     di, 1 ;~ 1E67:02E8
cs=0x1e67;eip=0x0002eb; 	T(MOV(si, 0x81));	// 57522 mov     si, 81h ; 'Å' ;~ 1E67:02EB
cs=0x1e67;eip=0x0002ee; 	T(MOV(ds, crtpspseg));	// 57523 mov     ds, crtpspseg ;~ 1E67:02EE
loc_2cf42:
	// 8271 
cs=0x1e67;eip=0x0002f2; 	T(LODSB);	// 57527 lodsb ;~ 1E67:02F2
cs=0x1e67;eip=0x0002f3; 	T(CMP(al, 0x20));	// 57528 cmp     al, 20h ; ' ' ;~ 1E67:02F3
cs=0x1e67;eip=0x0002f5; 	R(JZ(loc_2cf42));	// 57529 jz      short loc_2CF42 ;~ 1E67:02F5
cs=0x1e67;eip=0x0002f7; 	T(CMP(al, 9));	// 57530 cmp     al, 9 ;~ 1E67:02F7
cs=0x1e67;eip=0x0002f9; 	R(JZ(loc_2cf42));	// 57531 jz      short loc_2CF42 ;~ 1E67:02F9
cs=0x1e67;eip=0x0002fb; 	T(CMP(al, 0x0D));	// 57532 cmp     al, 0Dh ;~ 1E67:02FB
cs=0x1e67;eip=0x0002fd; 	R(JZ(loc_2cfbe));	// 57533 jz      short loc_2CFBE ;~ 1E67:02FD
cs=0x1e67;eip=0x0002ff; 	T(OR(al, al));	// 57534 or      al, al ;~ 1E67:02FF
cs=0x1e67;eip=0x000301; 	R(JZ(loc_2cfbe));	// 57535 jz      short loc_2CFBE ;~ 1E67:0301
cs=0x1e67;eip=0x000303; 	T(INC(di));	// 57536 inc     di ;~ 1E67:0303
loc_2cf54:
	// 8272 
cs=0x1e67;eip=0x000304; 	T(DEC(si));	// 57539 dec     si ;~ 1E67:0304
loc_2cf55:
	// 8273 
cs=0x1e67;eip=0x000305; 	T(LODSB);	// 57543 lodsb ;~ 1E67:0305
cs=0x1e67;eip=0x000306; 	T(CMP(al, 0x20));	// 57544 cmp     al, 20h ; ' ' ;~ 1E67:0306
cs=0x1e67;eip=0x000308; 	R(JZ(loc_2cf42));	// 57545 jz      short loc_2CF42 ;~ 1E67:0308
cs=0x1e67;eip=0x00030a; 	T(CMP(al, 9));	// 57546 cmp     al, 9 ;~ 1E67:030A
cs=0x1e67;eip=0x00030c; 	R(JZ(loc_2cf42));	// 57547 jz      short loc_2CF42 ;~ 1E67:030C
cs=0x1e67;eip=0x00030e; 	T(CMP(al, 0x0D));	// 57548 cmp     al, 0Dh ;~ 1E67:030E
cs=0x1e67;eip=0x000310; 	R(JZ(loc_2cfbe));	// 57549 jz      short loc_2CFBE ;~ 1E67:0310
cs=0x1e67;eip=0x000312; 	T(OR(al, al));	// 57550 or      al, al ;~ 1E67:0312
cs=0x1e67;eip=0x000314; 	R(JZ(loc_2cfbe));	// 57551 jz      short loc_2CFBE ;~ 1E67:0314
cs=0x1e67;eip=0x000316; 	T(CMP(al, 0x22));	// 57552 cmp     al, 22h ; '"' ;~ 1E67:0316
cs=0x1e67;eip=0x000318; 	R(JZ(loc_2cf8e));	// 57553 jz      short loc_2CF8E ;~ 1E67:0318
cs=0x1e67;eip=0x00031a; 	T(CMP(al, 0x5C));	// 57554 cmp     al, 5Ch ; '\' ;~ 1E67:031A
cs=0x1e67;eip=0x00031c; 	R(JZ(loc_2cf71));	// 57555 jz      short loc_2CF71 ;~ 1E67:031C
cs=0x1e67;eip=0x00031e; 	T(INC(dx));	// 57556 inc     dx ;~ 1E67:031E
cs=0x1e67;eip=0x00031f; 	R(JMP(loc_2cf55));	// 57557 jmp     short loc_2CF55 ;~ 1E67:031F
loc_2cf71:
	// 8274 
cs=0x1e67;eip=0x000321; 	T(XOR(cx, cx));	// 57561 xor     cx, cx ;~ 1E67:0321
loc_2cf73:
	// 8275 
cs=0x1e67;eip=0x000323; 	T(INC(cx));	// 57564 inc     cx ;~ 1E67:0323
cs=0x1e67;eip=0x000324; 	T(LODSB);	// 57565 lodsb ;~ 1E67:0324
cs=0x1e67;eip=0x000325; 	T(CMP(al, 0x5C));	// 57566 cmp     al, 5Ch ; '\' ;~ 1E67:0325
cs=0x1e67;eip=0x000327; 	R(JZ(loc_2cf73));	// 57567 jz      short loc_2CF73 ;~ 1E67:0327
cs=0x1e67;eip=0x000329; 	T(CMP(al, 0x22));	// 57568 cmp     al, 22h ; '"' ;~ 1E67:0329
cs=0x1e67;eip=0x00032b; 	R(JZ(loc_2cf81));	// 57569 jz      short loc_2CF81 ;~ 1E67:032B
cs=0x1e67;eip=0x00032d; 	T(ADD(dx, cx));	// 57570 add     dx, cx ;~ 1E67:032D
cs=0x1e67;eip=0x00032f; 	R(JMP(loc_2cf54));	// 57571 jmp     short loc_2CF54 ;~ 1E67:032F
loc_2cf81:
	// 8276 
cs=0x1e67;eip=0x000331; 	T(MOV(ax, cx));	// 57575 mov     ax, cx ;~ 1E67:0331
cs=0x1e67;eip=0x000333; 	T(SHR(cx, 1));	// 57576 shr     cx, 1 ;~ 1E67:0333
cs=0x1e67;eip=0x000335; 	T(ADC(dx, cx));	// 57577 adc     dx, cx ;~ 1E67:0335
cs=0x1e67;eip=0x000337; 	T(TEST(al, 1));	// 57578 test    al, 1 ;~ 1E67:0337
cs=0x1e67;eip=0x000339; 	R(JNZ(loc_2cf55));	// 57579 jnz     short loc_2CF55 ;~ 1E67:0339
cs=0x1e67;eip=0x00033b; 	R(JMP(loc_2cf8e));	// 57580 jmp     short loc_2CF8E ;~ 1E67:033B
loc_2cf8d:
	// 8277 
cs=0x1e67;eip=0x00033d; 	T(DEC(si));	// 57584 dec     si ;~ 1E67:033D
loc_2cf8e:
	// 8278 
cs=0x1e67;eip=0x00033e; 	T(LODSB);	// 57588 lodsb ;~ 1E67:033E
cs=0x1e67;eip=0x00033f; 	T(CMP(al, 0x0D));	// 57589 cmp     al, 0Dh ;~ 1E67:033F
cs=0x1e67;eip=0x000341; 	R(JZ(loc_2cfbe));	// 57590 jz      short loc_2CFBE ;~ 1E67:0341
cs=0x1e67;eip=0x000343; 	T(OR(al, al));	// 57591 or      al, al ;~ 1E67:0343
cs=0x1e67;eip=0x000345; 	R(JZ(loc_2cfbe));	// 57592 jz      short loc_2CFBE ;~ 1E67:0345
cs=0x1e67;eip=0x000347; 	T(CMP(al, 0x22));	// 57593 cmp     al, 22h ; '"' ;~ 1E67:0347
cs=0x1e67;eip=0x000349; 	R(JZ(loc_2cf55));	// 57594 jz      short loc_2CF55 ;~ 1E67:0349
cs=0x1e67;eip=0x00034b; 	T(CMP(al, 0x5C));	// 57595 cmp     al, 5Ch ; '\' ;~ 1E67:034B
cs=0x1e67;eip=0x00034d; 	R(JZ(loc_2cfa2));	// 57596 jz      short loc_2CFA2 ;~ 1E67:034D
cs=0x1e67;eip=0x00034f; 	T(INC(dx));	// 57597 inc     dx ;~ 1E67:034F
cs=0x1e67;eip=0x000350; 	R(JMP(loc_2cf8e));	// 57598 jmp     short loc_2CF8E ;~ 1E67:0350
loc_2cfa2:
	// 8279 
cs=0x1e67;eip=0x000352; 	T(XOR(cx, cx));	// 57602 xor     cx, cx ;~ 1E67:0352
loc_2cfa4:
	// 8280 
cs=0x1e67;eip=0x000354; 	T(INC(cx));	// 57605 inc     cx ;~ 1E67:0354
cs=0x1e67;eip=0x000355; 	T(LODSB);	// 57606 lodsb ;~ 1E67:0355
cs=0x1e67;eip=0x000356; 	T(CMP(al, 0x5C));	// 57607 cmp     al, 5Ch ; '\' ;~ 1E67:0356
cs=0x1e67;eip=0x000358; 	R(JZ(loc_2cfa4));	// 57608 jz      short loc_2CFA4 ;~ 1E67:0358
cs=0x1e67;eip=0x00035a; 	T(CMP(al, 0x22));	// 57609 cmp     al, 22h ; '"' ;~ 1E67:035A
cs=0x1e67;eip=0x00035c; 	R(JZ(loc_2cfb2));	// 57610 jz      short loc_2CFB2 ;~ 1E67:035C
cs=0x1e67;eip=0x00035e; 	T(ADD(dx, cx));	// 57611 add     dx, cx ;~ 1E67:035E
cs=0x1e67;eip=0x000360; 	R(JMP(loc_2cf8d));	// 57612 jmp     short loc_2CF8D ;~ 1E67:0360
loc_2cfb2:
	// 8281 
cs=0x1e67;eip=0x000362; 	T(MOV(ax, cx));	// 57616 mov     ax, cx ;~ 1E67:0362
cs=0x1e67;eip=0x000364; 	T(SHR(cx, 1));	// 57617 shr     cx, 1 ;~ 1E67:0364
cs=0x1e67;eip=0x000366; 	T(ADC(dx, cx));	// 57618 adc     dx, cx ;~ 1E67:0366
cs=0x1e67;eip=0x000368; 	T(TEST(al, 1));	// 57619 test    al, 1 ;~ 1E67:0368
cs=0x1e67;eip=0x00036a; 	R(JNZ(loc_2cf8e));	// 57620 jnz     short loc_2CF8E ;~ 1E67:036A
cs=0x1e67;eip=0x00036c; 	R(JMP(loc_2cf55));	// 57621 jmp     short loc_2CF55 ;~ 1E67:036C
loc_2cfbe:
	// 8282 
cs=0x1e67;eip=0x00036e; 	X(PUSH(ss));	// 57626 push    ss ;~ 1E67:036E
cs=0x1e67;eip=0x00036f; 	X(POP(ds));	// 57627 pop     ds ;~ 1E67:036F
cs=0x1e67;eip=0x000370; 	X(MOV(argc_, di));	// 57628 mov     argc_, di ;~ 1E67:0370
cs=0x1e67;eip=0x000374; 	T(ADD(dx, di));	// 57629 add     dx, di ;~ 1E67:0374
cs=0x1e67;eip=0x000376; 	T(INC(di));	// 57630 inc     di ;~ 1E67:0376
cs=0x1e67;eip=0x000377; 	T(SHL(di, 1));	// 57631 shl     di, 1 ;~ 1E67:0377
cs=0x1e67;eip=0x000379; 	T(ADD(dx, di));	// 57632 add     dx, di ;~ 1E67:0379
cs=0x1e67;eip=0x00037b; 	T(AND(dl, 0x0FE));	// 57633 and     dl, 0FEh ;~ 1E67:037B
cs=0x1e67;eip=0x00037e; 	T(SUB(sp, dx));	// 57634 sub     sp, dx ;~ 1E67:037E
cs=0x1e67;eip=0x000380; 	T(MOV(ax, sp));	// 57635 mov     ax, sp ;~ 1E67:0380
cs=0x1e67;eip=0x000382; 	X(MOV(argv_, ax));	// 57636 mov     argv_, ax ;~ 1E67:0382
cs=0x1e67;eip=0x000385; 	T(MOV(bx, ax));	// 57637 mov     bx, ax ;~ 1E67:0385
cs=0x1e67;eip=0x000387; 	T(ADD(di, bx));	// 57638 add     di, bx ;~ 1E67:0387
cs=0x1e67;eip=0x000389; 	X(PUSH(ss));	// 57639 push    ss ;~ 1E67:0389
cs=0x1e67;eip=0x00038a; 	X(POP(es));	// 57640 pop     es ;~ 1E67:038A
cs=0x1e67;eip=0x00038b; 	X(MOV(*(dw*)(raddr(ss,bx)), di));	// 57642 mov     ss:[bx], di ;~ 1E67:038B
cs=0x1e67;eip=0x00038e; 	T(INC(bx));	// 57643 inc     bx ;~ 1E67:038E
cs=0x1e67;eip=0x00038f; 	T(INC(bx));	// 57644 inc     bx ;~ 1E67:038F
cs=0x1e67;eip=0x000390; 	T(LDS(si, *(dd*)(((db*)&word_3ee0e))));	// 57645 lds     si, dword ptr word_3EE0E ;~ 1E67:0390
loc_2cfe4:
	// 8283 
cs=0x1e67;eip=0x000394; 	T(LODSB);	// 57648 lodsb ;~ 1E67:0394
cs=0x1e67;eip=0x000395; 	X(STOSB);	// 57649 stosb ;~ 1E67:0395
cs=0x1e67;eip=0x000396; 	T(OR(al, al));	// 57650 or      al, al ;~ 1E67:0396
cs=0x1e67;eip=0x000398; 	R(JNZ(loc_2cfe4));	// 57651 jnz     short loc_2CFE4 ;~ 1E67:0398
cs=0x1e67;eip=0x00039a; 	T(MOV(si, 0x81));	// 57652 mov     si, 81h ; 'Å' ;~ 1E67:039A
cs=0x1e67;eip=0x00039d; 	T(MOV(ds, *(dw*)(((db*)&crtpspseg))));	// 57653 mov     ds, ss:crtpspseg ;~ 1E67:039D
cs=0x1e67;eip=0x0003a2; 	R(JMP(loc_2cff7));	// 57654 jmp     short loc_2CFF7 ;~ 1E67:03A2
loc_2cff4:
	// 8284 
cs=0x1e67;eip=0x0003a4; 	T(XOR(ax, ax));	// 57659 xor     ax, ax ;~ 1E67:03A4
cs=0x1e67;eip=0x0003a6; 	X(STOSB);	// 57660 stosb ;~ 1E67:03A6
loc_2cff7:
	// 8285 
cs=0x1e67;eip=0x0003a7; 	T(LODSB);	// 57664 lodsb ;~ 1E67:03A7
cs=0x1e67;eip=0x0003a8; 	T(CMP(al, 0x20));	// 57665 cmp     al, 20h ; ' ' ;~ 1E67:03A8
cs=0x1e67;eip=0x0003aa; 	R(JZ(loc_2cff7));	// 57666 jz      short loc_2CFF7 ;~ 1E67:03AA
cs=0x1e67;eip=0x0003ac; 	T(CMP(al, 9));	// 57667 cmp     al, 9 ;~ 1E67:03AC
cs=0x1e67;eip=0x0003ae; 	R(JZ(loc_2cff7));	// 57668 jz      short loc_2CFF7 ;~ 1E67:03AE
cs=0x1e67;eip=0x0003b0; 	T(CMP(al, 0x0D));	// 57669 cmp     al, 0Dh ;~ 1E67:03B0
cs=0x1e67;eip=0x0003b2; 	R(JNZ(loc_2d007));	// 57670 jnz     short loc_2D007 ;~ 1E67:03B2
cs=0x1e67;eip=0x0003b4; 	R(JMP(loc_2d086));	// 57671 jmp     loc_2D086 ;~ 1E67:03B4
loc_2d007:
	// 8286 
cs=0x1e67;eip=0x0003b7; 	T(OR(al, al));	// 57675 or      al, al ;~ 1E67:03B7
cs=0x1e67;eip=0x0003b9; 	R(JNZ(loc_2d00e));	// 57676 jnz     short loc_2D00E ;~ 1E67:03B9
cs=0x1e67;eip=0x0003bb; 	R(JMP(loc_2d086));	// 57677 jmp     short loc_2D086 ;~ 1E67:03BB
loc_2d00e:
	// 8287 
cs=0x1e67;eip=0x0003be; 	X(MOV(*(dw*)(raddr(ss,bx)), di));	// 57682 mov     ss:[bx], di ;~ 1E67:03BE
cs=0x1e67;eip=0x0003c1; 	T(INC(bx));	// 57683 inc     bx ;~ 1E67:03C1
cs=0x1e67;eip=0x0003c2; 	T(INC(bx));	// 57684 inc     bx ;~ 1E67:03C2
loc_2d013:
	// 8288 
cs=0x1e67;eip=0x0003c3; 	T(DEC(si));	// 57687 dec     si ;~ 1E67:03C3
loc_2d014:
	// 8289 
cs=0x1e67;eip=0x0003c4; 	T(LODSB);	// 57691 lodsb ;~ 1E67:03C4
cs=0x1e67;eip=0x0003c5; 	T(CMP(al, 0x20));	// 57692 cmp     al, 20h ; ' ' ;~ 1E67:03C5
cs=0x1e67;eip=0x0003c7; 	R(JZ(loc_2cff4));	// 57693 jz      short loc_2CFF4 ;~ 1E67:03C7
cs=0x1e67;eip=0x0003c9; 	T(CMP(al, 9));	// 57694 cmp     al, 9 ;~ 1E67:03C9
cs=0x1e67;eip=0x0003cb; 	R(JZ(loc_2cff4));	// 57695 jz      short loc_2CFF4 ;~ 1E67:03CB
cs=0x1e67;eip=0x0003cd; 	T(CMP(al, 0x0D));	// 57696 cmp     al, 0Dh ;~ 1E67:03CD
cs=0x1e67;eip=0x0003cf; 	R(JZ(loc_2d083));	// 57697 jz      short loc_2D083 ;~ 1E67:03CF
cs=0x1e67;eip=0x0003d1; 	T(OR(al, al));	// 57698 or      al, al ;~ 1E67:03D1
cs=0x1e67;eip=0x0003d3; 	R(JZ(loc_2d083));	// 57699 jz      short loc_2D083 ;~ 1E67:03D3
cs=0x1e67;eip=0x0003d5; 	T(CMP(al, 0x22));	// 57700 cmp     al, 22h ; '"' ;~ 1E67:03D5
cs=0x1e67;eip=0x0003d7; 	R(JZ(loc_2d050));	// 57701 jz      short loc_2D050 ;~ 1E67:03D7
cs=0x1e67;eip=0x0003d9; 	T(CMP(al, 0x5C));	// 57702 cmp     al, 5Ch ; '\' ;~ 1E67:03D9
cs=0x1e67;eip=0x0003db; 	R(JZ(loc_2d030));	// 57703 jz      short loc_2D030 ;~ 1E67:03DB
cs=0x1e67;eip=0x0003dd; 	X(STOSB);	// 57704 stosb ;~ 1E67:03DD
cs=0x1e67;eip=0x0003de; 	R(JMP(loc_2d014));	// 57705 jmp     short loc_2D014 ;~ 1E67:03DE
loc_2d030:
	// 8290 
cs=0x1e67;eip=0x0003e0; 	T(XOR(cx, cx));	// 57709 xor     cx, cx ;~ 1E67:03E0
loc_2d032:
	// 8291 
cs=0x1e67;eip=0x0003e2; 	T(INC(cx));	// 57712 inc     cx ;~ 1E67:03E2
cs=0x1e67;eip=0x0003e3; 	T(LODSB);	// 57713 lodsb ;~ 1E67:03E3
cs=0x1e67;eip=0x0003e4; 	T(CMP(al, 0x5C));	// 57714 cmp     al, 5Ch ; '\' ;~ 1E67:03E4
cs=0x1e67;eip=0x0003e6; 	R(JZ(loc_2d032));	// 57715 jz      short loc_2D032 ;~ 1E67:03E6
cs=0x1e67;eip=0x0003e8; 	T(CMP(al, 0x22));	// 57716 cmp     al, 22h ; '"' ;~ 1E67:03E8
cs=0x1e67;eip=0x0003ea; 	R(JZ(loc_2d042));	// 57717 jz      short loc_2D042 ;~ 1E67:03EA
cs=0x1e67;eip=0x0003ec; 	T(MOV(al, 0x5C));	// 57718 mov     al, 5Ch ; '\' ;~ 1E67:03EC
	// 57719 rep stosb ;~ 1E67:03EE
cs=0x1e67;eip=0x0003ee; 	X(	REP STOSB);	// 57719 rep stosb ;~ 1E67:03EE
cs=0x1e67;eip=0x0003f0; 	R(JMP(loc_2d013));	// 57720 jmp     short loc_2D013 ;~ 1E67:03F0
loc_2d042:
	// 8292 
cs=0x1e67;eip=0x0003f2; 	T(MOV(al, 0x5C));	// 57724 mov     al, 5Ch ; '\' ;~ 1E67:03F2
cs=0x1e67;eip=0x0003f4; 	T(SHR(cx, 1));	// 57725 shr     cx, 1 ;~ 1E67:03F4
	// 57726 rep stosb ;~ 1E67:03F6
cs=0x1e67;eip=0x0003f6; 	X(	REP STOSB);	// 57726 rep stosb ;~ 1E67:03F6
cs=0x1e67;eip=0x0003f8; 	R(JNC(loc_2d050));	// 57727 jnb     short loc_2D050 ;~ 1E67:03F8
cs=0x1e67;eip=0x0003fa; 	T(MOV(al, 0x22));	// 57728 mov     al, 22h ; '"' ;~ 1E67:03FA
cs=0x1e67;eip=0x0003fc; 	X(STOSB);	// 57729 stosb ;~ 1E67:03FC
cs=0x1e67;eip=0x0003fd; 	R(JMP(loc_2d014));	// 57730 jmp     short loc_2D014 ;~ 1E67:03FD
loc_2d04f:
	// 8293 
cs=0x1e67;eip=0x0003ff; 	T(DEC(si));	// 57734 dec     si ;~ 1E67:03FF
loc_2d050:
	// 8294 
cs=0x1e67;eip=0x000400; 	T(LODSB);	// 57738 lodsb ;~ 1E67:0400
cs=0x1e67;eip=0x000401; 	T(CMP(al, 0x0D));	// 57739 cmp     al, 0Dh ;~ 1E67:0401
cs=0x1e67;eip=0x000403; 	R(JZ(loc_2d083));	// 57740 jz      short loc_2D083 ;~ 1E67:0403
cs=0x1e67;eip=0x000405; 	T(OR(al, al));	// 57741 or      al, al ;~ 1E67:0405
cs=0x1e67;eip=0x000407; 	R(JZ(loc_2d083));	// 57742 jz      short loc_2D083 ;~ 1E67:0407
cs=0x1e67;eip=0x000409; 	T(CMP(al, 0x22));	// 57743 cmp     al, 22h ; '"' ;~ 1E67:0409
cs=0x1e67;eip=0x00040b; 	R(JZ(loc_2d014));	// 57744 jz      short loc_2D014 ;~ 1E67:040B
cs=0x1e67;eip=0x00040d; 	T(CMP(al, 0x5C));	// 57745 cmp     al, 5Ch ; '\' ;~ 1E67:040D
cs=0x1e67;eip=0x00040f; 	R(JZ(loc_2d064));	// 57746 jz      short loc_2D064 ;~ 1E67:040F
cs=0x1e67;eip=0x000411; 	X(STOSB);	// 57747 stosb ;~ 1E67:0411
cs=0x1e67;eip=0x000412; 	R(JMP(loc_2d050));	// 57748 jmp     short loc_2D050 ;~ 1E67:0412
loc_2d064:
	// 8295 
cs=0x1e67;eip=0x000414; 	T(XOR(cx, cx));	// 57752 xor     cx, cx ;~ 1E67:0414
loc_2d066:
	// 8296 
cs=0x1e67;eip=0x000416; 	T(INC(cx));	// 57755 inc     cx ;~ 1E67:0416
cs=0x1e67;eip=0x000417; 	T(LODSB);	// 57756 lodsb ;~ 1E67:0417
cs=0x1e67;eip=0x000418; 	T(CMP(al, 0x5C));	// 57757 cmp     al, 5Ch ; '\' ;~ 1E67:0418
cs=0x1e67;eip=0x00041a; 	R(JZ(loc_2d066));	// 57758 jz      short loc_2D066 ;~ 1E67:041A
cs=0x1e67;eip=0x00041c; 	T(CMP(al, 0x22));	// 57759 cmp     al, 22h ; '"' ;~ 1E67:041C
cs=0x1e67;eip=0x00041e; 	R(JZ(loc_2d076));	// 57760 jz      short loc_2D076 ;~ 1E67:041E
cs=0x1e67;eip=0x000420; 	T(MOV(al, 0x5C));	// 57761 mov     al, 5Ch ; '\' ;~ 1E67:0420
	// 57762 rep stosb ;~ 1E67:0422
cs=0x1e67;eip=0x000422; 	X(	REP STOSB);	// 57762 rep stosb ;~ 1E67:0422
cs=0x1e67;eip=0x000424; 	R(JMP(loc_2d04f));	// 57763 jmp     short loc_2D04F ;~ 1E67:0424
loc_2d076:
	// 8297 
cs=0x1e67;eip=0x000426; 	T(MOV(al, 0x5C));	// 57767 mov     al, 5Ch ; '\' ;~ 1E67:0426
cs=0x1e67;eip=0x000428; 	T(SHR(cx, 1));	// 57768 shr     cx, 1 ;~ 1E67:0428
	// 57769 rep stosb ;~ 1E67:042A
cs=0x1e67;eip=0x00042a; 	X(	REP STOSB);	// 57769 rep stosb ;~ 1E67:042A
cs=0x1e67;eip=0x00042c; 	R(JNC(loc_2d014));	// 57770 jnb     short loc_2D014 ;~ 1E67:042C
cs=0x1e67;eip=0x00042e; 	T(MOV(al, 0x22));	// 57771 mov     al, 22h ; '"' ;~ 1E67:042E
cs=0x1e67;eip=0x000430; 	X(STOSB);	// 57772 stosb ;~ 1E67:0430
cs=0x1e67;eip=0x000431; 	R(JMP(loc_2d050));	// 57773 jmp     short loc_2D050 ;~ 1E67:0431
loc_2d083:
	// 8298 
cs=0x1e67;eip=0x000433; 	T(XOR(ax, ax));	// 57778 xor     ax, ax ;~ 1E67:0433
cs=0x1e67;eip=0x000435; 	X(STOSB);	// 57779 stosb ;~ 1E67:0435
loc_2d086:
	// 8299 
cs=0x1e67;eip=0x000436; 	X(PUSH(ss));	// 57783 push    ss ;~ 1E67:0436
cs=0x1e67;eip=0x000437; 	X(POP(ds));	// 57784 pop     ds ;~ 1E67:0437
cs=0x1e67;eip=0x000438; 	X(MOV(*(dw*)(raddr(ds,bx)), 0));	// 57785 mov     word ptr [bx], 0 ;~ 1E67:0438
cs=0x1e67;eip=0x00043c; __disp=dword_3ee26;
return true;
	R(JMP(__dispatch_call));	// 57786 jmp     dword_3EE26 ;~ 1E67:043C
__setenvp:
	// 57794 
#undef var_s0
#define var_s0 0
	// 57796 var_s0          = word ptr  0 ;~ 1E67:0440
ret_1e67_440:
	// 8300 
cs=0x1e67;eip=0x000440; 	X(PUSH(bp));	// 57798 push    bp ;~ 1E67:0440
cs=0x1e67;eip=0x000441; 	T(MOV(bp, sp));	// 57799 mov     bp, sp ;~ 1E67:0441
cs=0x1e67;eip=0x000443; 	X(PUSH(bp));	// 57800 push    bp ;~ 1E67:0443
cs=0x1e67;eip=0x000444; 	T(MOV(ds, crtpspseg));	// 57801 mov     ds, crtpspseg ;~ 1E67:0444
cs=0x1e67;eip=0x000448; 	T(XOR(cx, cx));	// 57802 xor     cx, cx ;~ 1E67:0448
cs=0x1e67;eip=0x00044a; 	T(MOV(ax, cx));	// 57803 mov     ax, cx ;~ 1E67:044A
cs=0x1e67;eip=0x00044c; 	T(MOV(bp, cx));	// 57804 mov     bp, cx ;~ 1E67:044C
cs=0x1e67;eip=0x00044e; 	T(MOV(di, cx));	// 57805 mov     di, cx ;~ 1E67:044E
cs=0x1e67;eip=0x000450; 	T(DEC(cx));	// 57806 dec     cx              ; cx = 0ffffh ;~ 1E67:0450
cs=0x1e67;eip=0x000451; 	T(MOV(si, *(dw*)raddr(ds,0x2c)));	// 57807 mov     si, word_3B79C  ; psp:2c = environment segment ;~ 1E67:0451
cs=0x1e67;eip=0x000455; 	T(OR(si, si));	// 57808 or      si, si ;~ 1E67:0455
cs=0x1e67;eip=0x000457; 	R(JZ(loc_2d0b9));	// 57809 jz      short loc_2D0B9 ;~ 1E67:0457
cs=0x1e67;eip=0x000459; 	T(MOV(es, si));	// 57810 mov     es, si ;~ 1E67:0459
cs=0x1e67;eip=0x00045b; 	T(CMP(*raddr(es,0), 0));	// 57812 cmp     es:byte_39310, 0 ;~ 1E67:045B
cs=0x1e67;eip=0x000461; 	R(JZ(loc_2d0b9));	// 57813 jz      short loc_2D0B9 ; empty environment? ;~ 1E67:0461
loc_2d0b3:
	// 8301 
	// 57816 repne scasb ;~ 1E67:0463
cs=0x1e67;eip=0x000463; 	T(	REPNE SCASB);	// 57816 repne scasb ;~ 1E67:0463
cs=0x1e67;eip=0x000465; 	T(INC(bp));	// 57817 inc     bp              ; count x=y strings in environment ;~ 1E67:0465
cs=0x1e67;eip=0x000466; 	T(SCASB);	// 57818 scasb                   ; two nulls in a row = end of environment ;~ 1E67:0466
cs=0x1e67;eip=0x000467; 	R(JNZ(loc_2d0b3));	// 57819 jnz     short loc_2D0B3 ;~ 1E67:0467
loc_2d0b9:
	// 8302 
cs=0x1e67;eip=0x000469; 	T(INC(bp));	// 57823 inc     bp              ; bp = number of envirment strings ;~ 1E67:0469
cs=0x1e67;eip=0x00046a; 	T(XCHG(ax, di));	// 57824 xchg    ax, di          ; set ax to number of bytes in environent, di to 0 ;~ 1E67:046A
cs=0x1e67;eip=0x00046b; 	T(INC(ax));	// 57825 inc     ax ;~ 1E67:046B
cs=0x1e67;eip=0x00046c; 	T(AND(al, 0x0FE));	// 57826 and     al, 0FEh ;~ 1E67:046C
cs=0x1e67;eip=0x00046e; 	T(MOV(di, bp));	// 57827 mov     di, bp          ; di = number of environment strings ;~ 1E67:046E
cs=0x1e67;eip=0x000470; 	T(SHL(bp, 1));	// 57828 shl     bp, 1 ;~ 1E67:0470
cs=0x1e67;eip=0x000472; 	T(ADD(ax, bp));	// 57829 add     ax, bp          ; ax = ((envsize+1)&FFFE) + numstrings*2 ;~ 1E67:0472
cs=0x1e67;eip=0x000474; 	X(PUSH(ss));	// 57830 push    ss ;~ 1E67:0474
cs=0x1e67;eip=0x000475; 	X(POP(ds));	// 57831 pop     ds ;~ 1E67:0475
cs=0x1e67;eip=0x000476; 	X(PUSH(di));	// 57832 push    di ;~ 1E67:0476
cs=0x1e67;eip=0x000477; 	T(MOV(di, 9));	// 57833 mov     di, 9 ;~ 1E67:0477
cs=0x1e67;eip=0x00047a; 	R(CALL(__myalloc,0));	// 57834 call    __myalloc ;~ 1E67:047A
cs=0x1e67;eip=0x00047d; 	X(POP(di));	// 57835 pop     di ;~ 1E67:047D
cs=0x1e67;eip=0x00047e; 	T(MOV(cx, di));	// 57836 mov     cx, di          ; cx = number of environment strings ;~ 1E67:047E
cs=0x1e67;eip=0x000480; 	T(MOV(di, bp));	// 57837 mov     di, bp          ; bp = old crtsp1 (was changed in myalloc) ;~ 1E67:0480
cs=0x1e67;eip=0x000482; 	T(ADD(di, ax));	// 57838 add     di, ax          ; ax = old bp = numstrings*2 ;~ 1E67:0482
cs=0x1e67;eip=0x000484; 	X(MOV(p_argv_, bp));	// 57839 mov     p_argv_, bp ;~ 1E67:0484
cs=0x1e67;eip=0x000488; 	X(PUSH(ds));	// 57840 push    ds ;~ 1E67:0488
cs=0x1e67;eip=0x000489; 	X(POP(es));	// 57841 pop     es ;~ 1E67:0489
cs=0x1e67;eip=0x00048a; 	T(MOV(ds, si));	// 57843 mov     ds, si ;~ 1E67:048A
cs=0x1e67;eip=0x00048c; 	T(XOR(si, si));	// 57844 xor     si, si ;~ 1E67:048C
cs=0x1e67;eip=0x00048e; 	T(DEC(cx));	// 57845 dec     cx ;~ 1E67:048E
cs=0x1e67;eip=0x00048f; 	R(JCXZ(loc_2d0f4));	// 57846 jcxz    short loc_2D0F4 ;~ 1E67:048F
loc_2d0e1:
	// 8303 
cs=0x1e67;eip=0x000491; 	T(CMP(*(dw*)(raddr(ds,si)), 0x433B));	// 57849 cmp     word ptr [si], 433Bh ; if the env string does not start with "C;" (or ;C) put its ofs at ds:bp ;~ 1E67:0491
cs=0x1e67;eip=0x000495; 	R(JZ(loc_2d0ec));	// 57850 jz      short loc_2D0EC ;~ 1E67:0495
cs=0x1e67;eip=0x000497; 	X(MOV(*(dw*)(raddr(ss,bp+var_s0)), di));	// 57851 mov     [bp+var_s0], di ;~ 1E67:0497
cs=0x1e67;eip=0x00049a; 	T(INC(bp));	// 57852 inc     bp ;~ 1E67:049A
cs=0x1e67;eip=0x00049b; 	T(INC(bp));	// 57853 inc     bp ;~ 1E67:049B
loc_2d0ec:
	// 8304 
cs=0x1e67;eip=0x00049c; 	T(LODSB);	// 57857 lodsb ;~ 1E67:049C
cs=0x1e67;eip=0x00049d; 	X(STOSB);	// 57858 stosb ;~ 1E67:049D
cs=0x1e67;eip=0x00049e; 	T(OR(al, al));	// 57859 or      al, al ;~ 1E67:049E
cs=0x1e67;eip=0x0004a0; 	R(JNZ(loc_2d0ec));	// 57860 jnz     short loc_2D0EC ;~ 1E67:04A0
cs=0x1e67;eip=0x0004a2; 	R(LOOP(loc_2d0e1));	// 57861 loop    loc_2D0E1 ;~ 1E67:04A2
loc_2d0f4:
	// 8305 
cs=0x1e67;eip=0x0004a4; 	X(MOV(*(dw*)(raddr(ss,bp+var_s0)), cx));	// 57864 mov     [bp+var_s0], cx ;~ 1E67:04A4
cs=0x1e67;eip=0x0004a7; 	X(PUSH(ss));	// 57865 push    ss ;~ 1E67:04A7
cs=0x1e67;eip=0x0004a8; 	X(POP(ds));	// 57866 pop     ds ;~ 1E67:04A8
cs=0x1e67;eip=0x0004a9; 	X(POP(bp));	// 57867 pop     bp ;~ 1E67:04A9
cs=0x1e67;eip=0x0004aa; 	T(MOV(sp, bp));	// 57868 mov     sp, bp ;~ 1E67:04AA
cs=0x1e67;eip=0x0004ac; 	X(POP(bp));	// 57869 pop     bp ;~ 1E67:04AC
cs=0x1e67;eip=0x0004ad; 	R(RETF(0));	// 57870 retf ;~ 1E67:04AD
__nmsg_text:
	// 57878 
#undef arg_0
#define arg_0 6
	// 57880 arg_0           = word ptr  6 ;~ 1E67:04AE
ret_1e67_4ae:
	// 8306 
cs=0x1e67;eip=0x0004ae; 	X(PUSH(bp));	// 57882 push    bp ;~ 1E67:04AE
cs=0x1e67;eip=0x0004af; 	T(MOV(bp, sp));	// 57883 mov     bp, sp ;~ 1E67:04AF
cs=0x1e67;eip=0x0004b1; 	X(PUSH(si));	// 57884 push    si ;~ 1E67:04B1
cs=0x1e67;eip=0x0004b2; 	X(PUSH(di));	// 57885 push    di ;~ 1E67:04B2
cs=0x1e67;eip=0x0004b3; 	X(PUSH(ds));	// 57886 push    ds ;~ 1E67:04B3
cs=0x1e67;eip=0x0004b4; 	X(POP(es));	// 57887 pop     es ;~ 1E67:04B4
cs=0x1e67;eip=0x0004b5; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 57888 mov     dx, [bp+arg_0] ;~ 1E67:04B5
cs=0x1e67;eip=0x0004b8; 	T(MOV(si, 0x54C6));	// 57889 mov     si, 54C6h ;~ 1E67:04B8
loc_2d10b:
	// 8307 
cs=0x1e67;eip=0x0004bb; 	T(LODSW);	// 57892 lodsw ;~ 1E67:04BB
cs=0x1e67;eip=0x0004bc; 	T(CMP(ax, dx));	// 57893 cmp     ax, dx ;~ 1E67:04BC
cs=0x1e67;eip=0x0004be; 	R(JZ(loc_2d120));	// 57894 jz      short loc_2D120 ;~ 1E67:04BE
cs=0x1e67;eip=0x0004c0; 	T(INC(ax));	// 57895 inc     ax ;~ 1E67:04C0
cs=0x1e67;eip=0x0004c1; 	T(XCHG(ax, si));	// 57896 xchg    ax, si ;~ 1E67:04C1
cs=0x1e67;eip=0x0004c2; 	R(JZ(loc_2d120));	// 57897 jz      short loc_2D120 ;~ 1E67:04C2
cs=0x1e67;eip=0x0004c4; 	T(XCHG(ax, di));	// 57898 xchg    ax, di ;~ 1E67:04C4
cs=0x1e67;eip=0x0004c5; 	T(XOR(ax, ax));	// 57899 xor     ax, ax ;~ 1E67:04C5
cs=0x1e67;eip=0x0004c7; 	T(MOV(cx, 0x0FFFF));	// 57900 mov     cx, 0FFFFh ;~ 1E67:04C7
	// 57901 repne scasb ;~ 1E67:04CA
cs=0x1e67;eip=0x0004ca; 	T(	REPNE SCASB);	// 57901 repne scasb ;~ 1E67:04CA
cs=0x1e67;eip=0x0004cc; 	T(MOV(si, di));	// 57902 mov     si, di ;~ 1E67:04CC
cs=0x1e67;eip=0x0004ce; 	R(JMP(loc_2d10b));	// 57903 jmp     short loc_2D10B ;~ 1E67:04CE
loc_2d120:
	// 8308 
cs=0x1e67;eip=0x0004d0; 	T(XCHG(ax, si));	// 57908 xchg    ax, si ;~ 1E67:04D0
cs=0x1e67;eip=0x0004d1; 	X(POP(di));	// 57909 pop     di ;~ 1E67:04D1
cs=0x1e67;eip=0x0004d2; 	X(POP(si));	// 57910 pop     si ;~ 1E67:04D2
cs=0x1e67;eip=0x0004d3; 	T(MOV(sp, bp));	// 57911 mov     sp, bp ;~ 1E67:04D3
cs=0x1e67;eip=0x0004d5; 	X(POP(bp));	// 57912 pop     bp ;~ 1E67:04D5
cs=0x1e67;eip=0x0004d6; 	R(RETF(2));	// 57913 retf    2 ;~ 1E67:04D6
__nmsg_write:
	// 57921 
#undef arg_0
#define arg_0 6
	// 57924 arg_0           = word ptr  6 ;~ 1E67:04D9
ret_1e67_4d9:
	// 8309 
cs=0x1e67;eip=0x0004d9; 	X(PUSH(bp));	// 57926 push    bp ;~ 1E67:04D9
cs=0x1e67;eip=0x0004da; 	T(MOV(bp, sp));	// 57927 mov     bp, sp ;~ 1E67:04DA
cs=0x1e67;eip=0x0004dc; 	X(PUSH(di));	// 57928 push    di ;~ 1E67:04DC
cs=0x1e67;eip=0x0004dd; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 57929 push    [bp+arg_0] ;~ 1E67:04DD
cs=0x1e67;eip=0x0004e0; 	R(CALLF(__nmsg_text,0));	// 57930 call    __NMSG_TEXT ;~ 1E67:04E0
cs=0x1e67;eip=0x0004e5; 	T(OR(ax, ax));	// 57931 or      ax, ax ;~ 1E67:04E5
cs=0x1e67;eip=0x0004e7; 	R(JZ(loc_2d14d));	// 57932 jz      short loc_2D14D ;~ 1E67:04E7
cs=0x1e67;eip=0x0004e9; 	T(XCHG(ax, dx));	// 57933 xchg    ax, dx ;~ 1E67:04E9
cs=0x1e67;eip=0x0004ea; 	T(MOV(di, dx));	// 57934 mov     di, dx ;~ 1E67:04EA
cs=0x1e67;eip=0x0004ec; 	T(XOR(ax, ax));	// 57935 xor     ax, ax ;~ 1E67:04EC
cs=0x1e67;eip=0x0004ee; 	T(MOV(cx, 0x0FFFF));	// 57936 mov     cx, 0FFFFh ;~ 1E67:04EE
	// 57937 repne scasb ;~ 1E67:04F1
cs=0x1e67;eip=0x0004f1; 	T(	REPNE SCASB);	// 57937 repne scasb ;~ 1E67:04F1
cs=0x1e67;eip=0x0004f3; 	T(NOT(cx));	// 57938 not     cx ;~ 1E67:04F3
cs=0x1e67;eip=0x0004f5; 	T(DEC(cx));	// 57939 dec     cx ;~ 1E67:04F5
cs=0x1e67;eip=0x0004f6; 	T(MOV(bx, 2));	// 57940 mov     bx, 2 ;~ 1E67:04F6
cs=0x1e67;eip=0x0004f9; 	T(MOV(ah, 0x40));	// 57941 mov     ah, 40h ;~ 1E67:04F9
cs=0x1e67;eip=0x0004fb; 	R(_INT(0x21));	// 57942 int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 1E67:04FB
loc_2d14d:
	// 8310 
cs=0x1e67;eip=0x0004fd; 	X(POP(di));	// 57946 pop     di ;~ 1E67:04FD
cs=0x1e67;eip=0x0004fe; 	T(MOV(sp, bp));	// 57947 mov     sp, bp ;~ 1E67:04FE
cs=0x1e67;eip=0x000500; 	X(POP(bp));	// 57948 pop     bp ;~ 1E67:0500
cs=0x1e67;eip=0x000501; 	R(RETF(2));	// 57949 retf    2 ;~ 1E67:0501
__myalloc:
	// 57957 
cs=0x1e67;eip=0x000504; 	T(MOV(dx, ax));	// 57958 mov     dx, ax ;~ 1E67:0504
ret_1e67_506:
	// 8311 
cs=0x1e67;eip=0x000506; 	T(ADD(ax, crtsp1));	// 57959 add     ax, crtsp1 ;~ 1E67:0506
cs=0x1e67;eip=0x00050a; 	R(JC(loc_2d191));	// 57960 jb      short loc_2D191 ;~ 1E67:050A
cs=0x1e67;eip=0x00050c; 	T(CMP(word_3ed74, ax));	// 57961 cmp     word_3ED74, ax ;~ 1E67:050C
cs=0x1e67;eip=0x000510; 	R(JNC(loc_2d187));	// 57962 jnb     short loc_2D187 ;~ 1E67:0510
cs=0x1e67;eip=0x000512; 	T(ADD(ax, 0x0F));	// 57963 add     ax, 0Fh ;~ 1E67:0512
cs=0x1e67;eip=0x000515; 	X(PUSH(ax));	// 57964 push    ax ;~ 1E67:0515
cs=0x1e67;eip=0x000516; 	T(RCR(ax, 1));	// 57965 rcr     ax, 1 ;~ 1E67:0516
cs=0x1e67;eip=0x000518; 	T(MOV(cl, 3));	// 57966 mov     cl, 3 ;~ 1E67:0518
cs=0x1e67;eip=0x00051a; 	T(SHR(ax, cl));	// 57967 shr     ax, cl ;~ 1E67:051A
cs=0x1e67;eip=0x00051c; 	T(MOV(cx, ds));	// 57968 mov     cx, ds ;~ 1E67:051C
cs=0x1e67;eip=0x00051e; 	T(MOV(bx, crtpspseg));	// 57969 mov     bx, crtpspseg ;~ 1E67:051E
cs=0x1e67;eip=0x000522; 	T(SUB(cx, bx));	// 57970 sub     cx, bx ;~ 1E67:0522
cs=0x1e67;eip=0x000524; 	T(ADD(ax, cx));	// 57971 add     ax, cx ;~ 1E67:0524
cs=0x1e67;eip=0x000526; 	T(MOV(es, bx));	// 57972 mov     es, bx ;~ 1E67:0526
cs=0x1e67;eip=0x000528; 	T(MOV(bx, ax));	// 57974 mov     bx, ax ;~ 1E67:0528
cs=0x1e67;eip=0x00052a; 	T(MOV(ah, 0x4A));	// 57975 mov     ah, 4Ah ;~ 1E67:052A
cs=0x1e67;eip=0x00052c; 	R(_INT(0x21));	// 57976 int     21h             ; DOS - 2+ - ADJUST MEMORY BLOCK SIZE (SETBLOCK) ;~ 1E67:052C
cs=0x1e67;eip=0x00052e; 	X(POP(ax));	// 57979 pop     ax ;~ 1E67:052E
cs=0x1e67;eip=0x00052f; 	R(JC(loc_2d191));	// 57980 jb      short loc_2D191 ;~ 1E67:052F
cs=0x1e67;eip=0x000531; 	T(AND(al, 0x0F0));	// 57981 and     al, 0F0h ;~ 1E67:0531
cs=0x1e67;eip=0x000533; 	T(DEC(ax));	// 57982 dec     ax ;~ 1E67:0533
cs=0x1e67;eip=0x000534; 	X(MOV(word_3ed74, ax));	// 57983 mov     word_3ED74, ax ;~ 1E67:0534
loc_2d187:
	// 8312 
cs=0x1e67;eip=0x000537; 	T(XCHG(ax, bp));	// 57986 xchg    ax, bp ;~ 1E67:0537
cs=0x1e67;eip=0x000538; 	T(MOV(bp, crtsp1));	// 57987 mov     bp, crtsp1 ;~ 1E67:0538
cs=0x1e67;eip=0x00053c; 	X(ADD(crtsp1, dx));	// 57988 add     crtsp1, dx ;~ 1E67:053C
cs=0x1e67;eip=0x000540; 	R(RETN(0));	// 57989 retn ;~ 1E67:0540
loc_2d191:
	// 8313 
cs=0x1e67;eip=0x000541; 	T(MOV(ax, di));	// 57994 mov     ax, di ;~ 1E67:0541
cs=0x1e67;eip=0x000543; 	R(JMP(__amsg_exit));	// 57995 jmp     __amsg_exit ;~ 1E67:0543
seg010_546_proc:
	// 58000 
__dosret0:
	// 8314 
cs=0x1e67;eip=0x000546; 	R(JC(loc_2d1ab));	// 58001 jb      short loc_2D1AB ;~ 1E67:0546
loc_2d198:
	// 8315 
cs=0x1e67;eip=0x000548; 	T(XOR(ax, ax));	// 58004 xor     ax, ax ;~ 1E67:0548
cs=0x1e67;eip=0x00054a; 	T(MOV(sp, bp));	// 58005 mov     sp, bp ;~ 1E67:054A
cs=0x1e67;eip=0x00054c; 	X(POP(bp));	// 58006 pop     bp ;~ 1E67:054C
cs=0x1e67;eip=0x00054d; 	R(RETF(0));	// 58007 retf ;~ 1E67:054D
__dosreturn:
	// 8316 
cs=0x1e67;eip=0x00054e; 	R(JNC(loc_2d198));	// 58011 jnb     short loc_2D198 ;~ 1E67:054E
cs=0x1e67;eip=0x000550; 	X(PUSH(ax));	// 58012 push    ax ;~ 1E67:0550
cs=0x1e67;eip=0x000551; 	R(CALL(sub_2d1bc,0));	// 58013 call    sub_2D1BC ;~ 1E67:0551
cs=0x1e67;eip=0x000554; 	X(POP(ax));	// 58014 pop     ax ;~ 1E67:0554
cs=0x1e67;eip=0x000555; 	T(MOV(sp, bp));	// 58015 mov     sp, bp ;~ 1E67:0555
cs=0x1e67;eip=0x000557; 	X(POP(bp));	// 58016 pop     bp ;~ 1E67:0557
cs=0x1e67;eip=0x000558; 	R(RETF(0));	// 58017 retf ;~ 1E67:0558
__dosretax:
	// 8317 
cs=0x1e67;eip=0x000559; 	R(JNC(loc_2d1b2));	// 58026 jnb     short loc_2D1B2 ;~ 1E67:0559
loc_2d1ab:
	// 8318 
cs=0x1e67;eip=0x00055b; 	R(CALL(sub_2d1bc,0));	// 58029 call    sub_2D1BC ;~ 1E67:055B
cs=0x1e67;eip=0x00055e; 	T(MOV(ax, 0x0FFFF));	// 58030 mov     ax, 0FFFFh ;~ 1E67:055E
cs=0x1e67;eip=0x000561; 	T(CWD);	// 58031 cwd ;~ 1E67:0561
loc_2d1b2:
	// 8319 
cs=0x1e67;eip=0x000562; 	T(MOV(sp, bp));	// 58034 mov     sp, bp ;~ 1E67:0562
cs=0x1e67;eip=0x000564; 	X(POP(bp));	// 58035 pop     bp ;~ 1E67:0564
cs=0x1e67;eip=0x000565; 	R(RETF(0));	// 58036 retf ;~ 1E67:0565
__maperror:
	// 58043 
cs=0x1e67;eip=0x000566; 	T(XOR(ah, ah));	// 58044 xor     ah, ah ;~ 1E67:0566
ret_1e67_568:
	// 8320 
cs=0x1e67;eip=0x000568; 	R(CALL(sub_2d1bc,0));	// 58045 call    sub_2D1BC ;~ 1E67:0568
cs=0x1e67;eip=0x00056b; 	R(RETF(0));	// 58046 retf ;~ 1E67:056B
sub_2d1bc:
	// 58053 
cs=0x1e67;eip=0x00056c; 	X(MOV(byte_3edf0, al));	// 58055 mov     byte_3EDF0, al ;~ 1E67:056C
ret_1e67_56f:
	// 8321 
cs=0x1e67;eip=0x00056f; 	T(OR(ah, ah));	// 58056 or      ah, ah ;~ 1E67:056F
cs=0x1e67;eip=0x000571; 	R(JNZ(loc_2d1e6));	// 58057 jnz     short loc_2D1E6 ;~ 1E67:0571
cs=0x1e67;eip=0x000573; 	T(CMP(*(db*)(((db*)&crtdosversion)), 3));	// 58058 cmp     byte ptr crtdosversion, 3 ;~ 1E67:0573
cs=0x1e67;eip=0x000578; 	R(JC(loc_2d1d7));	// 58059 jb      short loc_2D1D7 ;~ 1E67:0578
cs=0x1e67;eip=0x00057a; 	T(CMP(al, 0x22));	// 58060 cmp     al, 22h ; '"' ;~ 1E67:057A
cs=0x1e67;eip=0x00057c; 	R(JNC(loc_2d1db));	// 58061 jnb     short loc_2D1DB ;~ 1E67:057C
cs=0x1e67;eip=0x00057e; 	T(CMP(al, 0x20));	// 58062 cmp     al, 20h ; ' ' ;~ 1E67:057E
cs=0x1e67;eip=0x000580; 	R(JC(loc_2d1d7));	// 58063 jb      short loc_2D1D7 ;~ 1E67:0580
cs=0x1e67;eip=0x000582; 	T(MOV(al, 5));	// 58064 mov     al, 5 ;~ 1E67:0582
cs=0x1e67;eip=0x000584; 	R(JMP(loc_2d1dd));	// 58065 jmp     short loc_2D1DD ;~ 1E67:0584
loc_2d1d7:
	// 8322 
cs=0x1e67;eip=0x000587; 	T(CMP(al, 0x13));	// 58072 cmp     al, 13h ;~ 1E67:0587
cs=0x1e67;eip=0x000589; 	R(JBE(loc_2d1dd));	// 58073 jbe     short loc_2D1DD ;~ 1E67:0589
loc_2d1db:
	// 8323 
cs=0x1e67;eip=0x00058b; 	T(MOV(al, 0x13));	// 58076 mov     al, 13h ;~ 1E67:058B
loc_2d1dd:
	// 8324 
cs=0x1e67;eip=0x00058d; 	T(MOV(bx, 0x36BA));	// 58080 mov     bx, 36BAh ;~ 1E67:058D
cs=0x1e67;eip=0x000590; 	T(XLAT);	// 58081 xlat ;~ 1E67:0590
loc_2d1e1:
	// 8325 
cs=0x1e67;eip=0x000591; 	T(CBW);	// 58084 cbw ;~ 1E67:0591
cs=0x1e67;eip=0x000592; 	X(MOV(word_3ede5, ax));	// 58085 mov     word_3EDE5, ax ;~ 1E67:0592
cs=0x1e67;eip=0x000595; 	R(RETN(0));	// 58086 retn ;~ 1E67:0595
loc_2d1e6:
	// 8326 
cs=0x1e67;eip=0x000596; 	T(MOV(al, ah));	// 58090 mov     al, ah ;~ 1E67:0596
cs=0x1e67;eip=0x000598; 	R(JMP(loc_2d1e1));	// 58091 jmp     short loc_2D1E1 ;~ 1E67:0598
_flushall:
	// 58100 
cs=0x1e67;eip=0x00059a; 	X(PUSH(bp));	// 58101 push    bp ;~ 1E67:059A
ret_1e67_59b:
	// 8327 
cs=0x1e67;eip=0x00059b; 	T(MOV(bp, sp));	// 58102 mov     bp, sp ;~ 1E67:059B
cs=0x1e67;eip=0x00059d; 	T(SUB(sp, 4));	// 58103 sub     sp, 4 ;~ 1E67:059D
cs=0x1e67;eip=0x0005a0; 	X(PUSH(di));	// 58104 push    di ;~ 1E67:05A0
cs=0x1e67;eip=0x0005a1; 	X(PUSH(si));	// 58105 push    si ;~ 1E67:05A1
cs=0x1e67;eip=0x0005a2; 	T(MOV(si, 0x36D0));	// 58106 mov     si, 36D0h ;~ 1E67:05A2
cs=0x1e67;eip=0x0005a5; 	T(SUB(di, di));	// 58107 sub     di, di ;~ 1E67:05A5
cs=0x1e67;eip=0x0005a7; 	R(JMP(loc_2d210));	// 58108 jmp     short loc_2D210 ;~ 1E67:05A7
loc_2d1fa:
	// 8328 
cs=0x1e67;eip=0x0005aa; 	T(TEST(*(raddr(ds,si+6)), 0x83));	// 58113 test    byte ptr [si+6], 83h ;~ 1E67:05AA
cs=0x1e67;eip=0x0005ae; 	R(JZ(loc_2d20d));	// 58114 jz      short loc_2D20D ;~ 1E67:05AE
cs=0x1e67;eip=0x0005b0; 	X(PUSH(si));	// 58115 push    si              ; FILE * ;~ 1E67:05B0
cs=0x1e67;eip=0x0005b1; 	R(CALLF(_fflush,0));	// 58116 call    _fflush ;~ 1E67:05B1
cs=0x1e67;eip=0x0005b6; 	T(ADD(sp, 2));	// 58117 add     sp, 2 ;~ 1E67:05B6
cs=0x1e67;eip=0x0005b9; 	T(INC(ax));	// 58118 inc     ax ;~ 1E67:05B9
cs=0x1e67;eip=0x0005ba; 	R(JZ(loc_2d20d));	// 58119 jz      short loc_2D20D ;~ 1E67:05BA
cs=0x1e67;eip=0x0005bc; 	T(INC(di));	// 58120 inc     di ;~ 1E67:05BC
loc_2d20d:
	// 8329 
cs=0x1e67;eip=0x0005bd; 	T(ADD(si, 8));	// 58124 add     si, 8 ;~ 1E67:05BD
loc_2d210:
	// 8330 
cs=0x1e67;eip=0x0005c0; 	T(CMP(word_3ef58, si));	// 58127 cmp     word_3EF58, si ;~ 1E67:05C0
cs=0x1e67;eip=0x0005c4; 	R(JNC(loc_2d1fa));	// 58128 jnb     short loc_2D1FA ;~ 1E67:05C4
cs=0x1e67;eip=0x0005c6; 	T(MOV(ax, di));	// 58129 mov     ax, di ;~ 1E67:05C6
cs=0x1e67;eip=0x0005c8; 	X(POP(si));	// 58130 pop     si ;~ 1E67:05C8
cs=0x1e67;eip=0x0005c9; 	X(POP(di));	// 58131 pop     di ;~ 1E67:05C9
cs=0x1e67;eip=0x0005ca; 	T(MOV(sp, bp));	// 58132 mov     sp, bp ;~ 1E67:05CA
cs=0x1e67;eip=0x0005cc; 	X(POP(bp));	// 58133 pop     bp ;~ 1E67:05CC
cs=0x1e67;eip=0x0005cd; 	R(RETF(0));	// 58134 retf ;~ 1E67:05CD
_printf:
	// 58143 
#undef var_8
#define var_8 -8
	// 58146 var_8           = word ptr -8 ;~ 1E67:05CE
#undef var_4
#define var_4 -4
	// 58147 var_4           = word ptr -4 ;~ 1E67:05CE
#undef arg_0
#define arg_0 6
	// 58148 arg_0           = dword ptr  6 ;~ 1E67:05CE
ret_1e67_5ce:
	// 8331 
cs=0x1e67;eip=0x0005ce; 	X(PUSH(bp));	// 58150 push    bp ;~ 1E67:05CE
cs=0x1e67;eip=0x0005cf; 	T(MOV(bp, sp));	// 58151 mov     bp, sp ;~ 1E67:05CF
cs=0x1e67;eip=0x0005d1; 	T(SUB(sp, 8));	// 58152 sub     sp, 8 ;~ 1E67:05D1
cs=0x1e67;eip=0x0005d4; 	X(PUSH(di));	// 58153 push    di ;~ 1E67:05D4
cs=0x1e67;eip=0x0005d5; 	X(PUSH(si));	// 58154 push    si              ; FILE * ;~ 1E67:05D5
cs=0x1e67;eip=0x0005d6; 	T(MOV(si, 0x36D8));	// 58155 mov     si, 36D8h ;~ 1E67:05D6
cs=0x1e67;eip=0x0005d9; 	T(ax = bp+arg_0+2);	// 58156 lea     ax, [bp+arg_0+2] ;~ 1E67:05D9
cs=0x1e67;eip=0x0005dc; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 58157 mov     [bp+var_4], ax ;~ 1E67:05DC
cs=0x1e67;eip=0x0005df; 	X(PUSH(si));	// 58158 push    si ;~ 1E67:05DF
cs=0x1e67;eip=0x0005e0; 	R(CALLF(__stbuf,0));	// 58159 call    __stbuf ;~ 1E67:05E0
cs=0x1e67;eip=0x0005e5; 	T(ADD(sp, 2));	// 58160 add     sp, 2 ;~ 1E67:05E5
cs=0x1e67;eip=0x0005e8; 	T(MOV(di, ax));	// 58161 mov     di, ax ;~ 1E67:05E8
cs=0x1e67;eip=0x0005ea; 	T(ax = bp+arg_0+2);	// 58162 lea     ax, [bp+arg_0+2] ;~ 1E67:05EA
cs=0x1e67;eip=0x0005ed; 	X(PUSH(ax));	// 58163 push    ax ;~ 1E67:05ED
cs=0x1e67;eip=0x0005ee; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 58164 push    word ptr [bp+arg_0] ;~ 1E67:05EE
cs=0x1e67;eip=0x0005f1; 	X(PUSH(si));	// 58165 push    si ;~ 1E67:05F1
cs=0x1e67;eip=0x0005f2; 	R(CALLF(__output,0));	// 58166 call    __output ;~ 1E67:05F2
cs=0x1e67;eip=0x0005f7; 	T(ADD(sp, 6));	// 58167 add     sp, 6 ;~ 1E67:05F7
cs=0x1e67;eip=0x0005fa; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 58168 mov     [bp+var_8], ax ;~ 1E67:05FA
cs=0x1e67;eip=0x0005fd; 	X(PUSH(si));	// 58169 push    si              ; FILE * ;~ 1E67:05FD
cs=0x1e67;eip=0x0005fe; 	X(PUSH(di));	// 58170 push    di              ; int ;~ 1E67:05FE
cs=0x1e67;eip=0x0005ff; 	R(CALLF(__ftbuf,0));	// 58171 call    __ftbuf ;~ 1E67:05FF
cs=0x1e67;eip=0x000604; 	T(ADD(sp, 4));	// 58172 add     sp, 4 ;~ 1E67:0604
cs=0x1e67;eip=0x000607; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 58173 mov     ax, [bp+var_8] ;~ 1E67:0607
cs=0x1e67;eip=0x00060a; 	X(POP(si));	// 58174 pop     si ;~ 1E67:060A
cs=0x1e67;eip=0x00060b; 	X(POP(di));	// 58175 pop     di ;~ 1E67:060B
cs=0x1e67;eip=0x00060c; 	T(MOV(sp, bp));	// 58176 mov     sp, bp ;~ 1E67:060C
cs=0x1e67;eip=0x00060e; 	X(POP(bp));	// 58177 pop     bp ;~ 1E67:060E
cs=0x1e67;eip=0x00060f; 	R(RETF(0));	// 58178 retf ;~ 1E67:060F
__flsbuf:
	// 58187 
#undef var_8
#define var_8 -8
	// 58190 var_8           = word ptr -8 ;~ 1E67:0610
#undef var_6
#define var_6 -6
	// 58191 var_6           = dword ptr -6 ;~ 1E67:0610
#undef arg_0
#define arg_0 6
	// 58192 arg_0           = dword ptr  6 ;~ 1E67:0610
ret_1e67_610:
	// 8332 
cs=0x1e67;eip=0x000610; 	X(PUSH(bp));	// 58194 push    bp ;~ 1E67:0610
cs=0x1e67;eip=0x000611; 	T(MOV(bp, sp));	// 58195 mov     bp, sp ;~ 1E67:0611
cs=0x1e67;eip=0x000613; 	T(SUB(sp, 8));	// 58196 sub     sp, 8 ;~ 1E67:0613
cs=0x1e67;eip=0x000616; 	X(PUSH(di));	// 58197 push    di              ; unsigned int ;~ 1E67:0616
cs=0x1e67;eip=0x000617; 	X(PUSH(si));	// 58198 push    si              ; int ;~ 1E67:0617
cs=0x1e67;eip=0x000618; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 58199 mov     si, word ptr [bp+arg_0+2] ;~ 1E67:0618
cs=0x1e67;eip=0x00061b; 	T(MOV(al, *(raddr(ds,si+7))));	// 58200 mov     al, [si+7] ;~ 1E67:061B
cs=0x1e67;eip=0x00061e; 	T(CBW);	// 58201 cbw ;~ 1E67:061E
cs=0x1e67;eip=0x00061f; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 58202 mov     word ptr [bp+var_6], ax ;~ 1E67:061F
cs=0x1e67;eip=0x000622; 	T(MOV(ax, si));	// 58203 mov     ax, si ;~ 1E67:0622
cs=0x1e67;eip=0x000624; 	T(SUB(ax, 0x36D0));	// 58204 sub     ax, 36D0h ;~ 1E67:0624
cs=0x1e67;eip=0x000627; 	T(MOV(cl, 3));	// 58205 mov     cl, 3 ;~ 1E67:0627
cs=0x1e67;eip=0x000629; 	T(SAR(ax, cl));	// 58206 sar     ax, cl ;~ 1E67:0629
cs=0x1e67;eip=0x00062b; 	T(MOV(cx, ax));	// 58207 mov     cx, ax ;~ 1E67:062B
cs=0x1e67;eip=0x00062d; 	T(SHL(ax, 1));	// 58208 shl     ax, 1 ;~ 1E67:062D
cs=0x1e67;eip=0x00062f; 	T(ADD(ax, cx));	// 58209 add     ax, cx ;~ 1E67:062F
cs=0x1e67;eip=0x000631; 	T(SHL(ax, 1));	// 58210 shl     ax, 1 ;~ 1E67:0631
cs=0x1e67;eip=0x000633; 	T(ADD(ax, 0x3770));	// 58211 add     ax, 3770h ;~ 1E67:0633
cs=0x1e67;eip=0x000636; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 58212 mov     [bp+var_8], ax ;~ 1E67:0636
cs=0x1e67;eip=0x000639; 	T(TEST(*(raddr(ds,si+6)), 0x83));	// 58213 test    byte ptr [si+6], 83h ;~ 1E67:0639
cs=0x1e67;eip=0x00063d; 	R(JZ(loc_2d295));	// 58214 jz      short loc_2D295 ;~ 1E67:063D
cs=0x1e67;eip=0x00063f; 	T(TEST(*(raddr(ds,si+6)), 0x40));	// 58215 test    byte ptr [si+6], 40h ;~ 1E67:063F
cs=0x1e67;eip=0x000643; 	R(JZ(loc_2d2a0));	// 58216 jz      short loc_2D2A0 ;~ 1E67:0643
loc_2d295:
	// 8333 
cs=0x1e67;eip=0x000645; 	X(OR(*(raddr(ds,si+6)), 0x20));	// 58220 or      byte ptr [si+6], 20h ;~ 1E67:0645
cs=0x1e67;eip=0x000649; 	T(MOV(ax, 0x0FFFF));	// 58221 mov     ax, 0FFFFh ;~ 1E67:0649
cs=0x1e67;eip=0x00064c; 	R(JMP(loc_2d3b7));	// 58222 jmp     loc_2D3B7 ;~ 1E67:064C
loc_2d2a0:
	// 8334 
cs=0x1e67;eip=0x000650; 	T(TEST(*(raddr(ds,si+6)), 1));	// 58227 test    byte ptr [si+6], 1 ;~ 1E67:0650
cs=0x1e67;eip=0x000654; 	R(JNZ(loc_2d295));	// 58228 jnz     short loc_2D295 ;~ 1E67:0654
cs=0x1e67;eip=0x000656; 	X(OR(*(raddr(ds,si+6)), 2));	// 58229 or      byte ptr [si+6], 2 ;~ 1E67:0656
cs=0x1e67;eip=0x00065a; 	X(AND(*(raddr(ds,si+6)), 0x0EF));	// 58230 and     byte ptr [si+6], 0EFh ;~ 1E67:065A
cs=0x1e67;eip=0x00065e; 	T(SUB(ax, ax));	// 58231 sub     ax, ax ;~ 1E67:065E
cs=0x1e67;eip=0x000660; 	X(MOV(*(dw*)(raddr(ds,si+2)), ax));	// 58232 mov     [si+2], ax ;~ 1E67:0660
cs=0x1e67;eip=0x000663; 	T(MOV(di, ax));	// 58233 mov     di, ax ;~ 1E67:0663
cs=0x1e67;eip=0x000665; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), di));	// 58234 mov     word ptr [bp+var_6+2], di ;~ 1E67:0665
cs=0x1e67;eip=0x000668; 	T(TEST(*(raddr(ds,si+6)), 0x0C));	// 58235 test    byte ptr [si+6], 0Ch ;~ 1E67:0668
cs=0x1e67;eip=0x00066c; 	R(JNZ(loc_2d31f));	// 58236 jnz     short loc_2D31F ;~ 1E67:066C
cs=0x1e67;eip=0x00066e; 	T(MOV(bx, si));	// 58237 mov     bx, si ;~ 1E67:066E
cs=0x1e67;eip=0x000670; 	T(SUB(bx, 0x36D0));	// 58238 sub     bx, 36D0h ;~ 1E67:0670
cs=0x1e67;eip=0x000674; 	T(MOV(cl, 3));	// 58239 mov     cl, 3 ;~ 1E67:0674
cs=0x1e67;eip=0x000676; 	T(SAR(bx, cl));	// 58240 sar     bx, cl ;~ 1E67:0676
cs=0x1e67;eip=0x000678; 	T(MOV(ax, bx));	// 58241 mov     ax, bx ;~ 1E67:0678
cs=0x1e67;eip=0x00067a; 	T(SHL(bx, 1));	// 58242 shl     bx, 1 ;~ 1E67:067A
cs=0x1e67;eip=0x00067c; 	T(ADD(bx, ax));	// 58243 add     bx, ax ;~ 1E67:067C
cs=0x1e67;eip=0x00067e; 	T(SHL(bx, 1));	// 58244 shl     bx, 1 ;~ 1E67:067E
cs=0x1e67;eip=0x000680; 	T(TEST(*(raddr(ds,bx+0x3770)), 1));	// 58245 test    byte ptr [bx+3770h], 1 ;~ 1E67:0680
cs=0x1e67;eip=0x000685; 	R(JNZ(loc_2d31f));	// 58246 jnz     short loc_2D31F ;~ 1E67:0685
cs=0x1e67;eip=0x000687; 	T(CMP(si, 0x36D8));	// 58247 cmp     si, 36D8h ;~ 1E67:0687
cs=0x1e67;eip=0x00068b; 	R(JZ(loc_2d2e3));	// 58248 jz      short loc_2D2E3 ;~ 1E67:068B
cs=0x1e67;eip=0x00068d; 	T(CMP(si, 0x36E0));	// 58249 cmp     si, 36E0h ;~ 1E67:068D
cs=0x1e67;eip=0x000691; 	R(JNZ(loc_2d318));	// 58250 jnz     short loc_2D318 ;~ 1E67:0691
loc_2d2e3:
	// 8335 
cs=0x1e67;eip=0x000693; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 58253 push    word ptr [bp+var_6] ; int ;~ 1E67:0693
cs=0x1e67;eip=0x000696; 	R(CALLF(_isatty,0));	// 58254 call    _isatty ;~ 1E67:0696
cs=0x1e67;eip=0x00069b; 	T(ADD(sp, 2));	// 58255 add     sp, 2 ;~ 1E67:069B
cs=0x1e67;eip=0x00069e; 	T(OR(ax, ax));	// 58256 or      ax, ax ;~ 1E67:069E
cs=0x1e67;eip=0x0006a0; 	R(JNZ(loc_2d31f));	// 58257 jnz     short loc_2D31F ;~ 1E67:06A0
cs=0x1e67;eip=0x0006a2; 	X(INC(word_3ee3e));	// 58258 inc     word_3EE3E ;~ 1E67:06A2
cs=0x1e67;eip=0x0006a6; 	T(CMP(si, 0x36D8));	// 58259 cmp     si, 36D8h ;~ 1E67:06A6
cs=0x1e67;eip=0x0006aa; 	R(JNZ(loc_2d302));	// 58260 jnz     short loc_2D302 ;~ 1E67:06AA
cs=0x1e67;eip=0x0006ac; 	T(MOV(ax, 0x891E));	// 58261 mov     ax, 891Eh ;~ 1E67:06AC
cs=0x1e67;eip=0x0006af; 	R(JMP(loc_2d305));	// 58262 jmp     short loc_2D305 ;~ 1E67:06AF
loc_2d302:
	// 8336 
cs=0x1e67;eip=0x0006b2; 	T(MOV(ax, 0x0AA62));	// 58267 mov     ax, 0AA62h ;~ 1E67:06B2
loc_2d305:
	// 8337 
cs=0x1e67;eip=0x0006b5; 	X(MOV(*(dw*)(raddr(ds,si+4)), ax));	// 58270 mov     [si+4], ax ;~ 1E67:06B5
cs=0x1e67;eip=0x0006b8; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 58271 mov     [si], ax ;~ 1E67:06B8
cs=0x1e67;eip=0x0006ba; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 58272 mov     bx, [bp+var_8] ;~ 1E67:06BA
cs=0x1e67;eip=0x0006bd; 	X(MOV(*(dw*)(raddr(ds,bx+2)), 0x200));	// 58273 mov     word ptr [bx+2], 200h ;~ 1E67:06BD
cs=0x1e67;eip=0x0006c2; 	X(MOV(*(raddr(ds,bx)), 1));	// 58274 mov     byte ptr [bx], 1 ;~ 1E67:06C2
cs=0x1e67;eip=0x0006c5; 	R(JMP(loc_2d31f));	// 58275 jmp     short loc_2D31F ;~ 1E67:06C5
loc_2d318:
	// 8338 
cs=0x1e67;eip=0x0006c8; 	X(PUSH(si));	// 58280 push    si ;~ 1E67:06C8
cs=0x1e67;eip=0x0006c9; 	R(CALL(__getbuf,0));	// 58281 call    __getbuf ;~ 1E67:06C9
cs=0x1e67;eip=0x0006cc; 	T(ADD(sp, 2));	// 58282 add     sp, 2 ;~ 1E67:06CC
loc_2d31f:
	// 8339 
cs=0x1e67;eip=0x0006cf; 	T(TEST(*(raddr(ds,si+6)), 8));	// 58286 test    byte ptr [si+6], 8 ;~ 1E67:06CF
cs=0x1e67;eip=0x0006d3; 	R(JNZ(loc_2d33e));	// 58287 jnz     short loc_2D33E ;~ 1E67:06D3
cs=0x1e67;eip=0x0006d5; 	T(MOV(bx, si));	// 58288 mov     bx, si ;~ 1E67:06D5
cs=0x1e67;eip=0x0006d7; 	T(SUB(bx, 0x36D0));	// 58289 sub     bx, 36D0h ;~ 1E67:06D7
cs=0x1e67;eip=0x0006db; 	T(MOV(cl, 3));	// 58290 mov     cl, 3 ;~ 1E67:06DB
cs=0x1e67;eip=0x0006dd; 	T(SAR(bx, cl));	// 58291 sar     bx, cl ;~ 1E67:06DD
cs=0x1e67;eip=0x0006df; 	T(MOV(ax, bx));	// 58292 mov     ax, bx ;~ 1E67:06DF
cs=0x1e67;eip=0x0006e1; 	T(SHL(bx, 1));	// 58293 shl     bx, 1 ;~ 1E67:06E1
cs=0x1e67;eip=0x0006e3; 	T(ADD(bx, ax));	// 58294 add     bx, ax ;~ 1E67:06E3
cs=0x1e67;eip=0x0006e5; 	T(SHL(bx, 1));	// 58295 shl     bx, 1 ;~ 1E67:06E5
cs=0x1e67;eip=0x0006e7; 	T(TEST(*(raddr(ds,bx+0x3770)), 1));	// 58296 test    byte ptr [bx+3770h], 1 ;~ 1E67:06E7
cs=0x1e67;eip=0x0006ec; 	R(JZ(loc_2d392));	// 58297 jz      short loc_2D392 ;~ 1E67:06EC
loc_2d33e:
	// 8340 
cs=0x1e67;eip=0x0006ee; 	T(MOV(di, *(dw*)(raddr(ds,si))));	// 58300 mov     di, [si] ;~ 1E67:06EE
cs=0x1e67;eip=0x0006f0; 	T(SUB(di, *(dw*)(raddr(ds,si+4))));	// 58301 sub     di, [si+4] ;~ 1E67:06F0
cs=0x1e67;eip=0x0006f3; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 58302 mov     ax, [si+4] ;~ 1E67:06F3
cs=0x1e67;eip=0x0006f6; 	T(INC(ax));	// 58303 inc     ax ;~ 1E67:06F6
cs=0x1e67;eip=0x0006f7; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 58304 mov     [si], ax ;~ 1E67:06F7
cs=0x1e67;eip=0x0006f9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 58305 mov     bx, [bp+var_8] ;~ 1E67:06F9
cs=0x1e67;eip=0x0006fc; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 58306 mov     ax, [bx+2] ;~ 1E67:06FC
cs=0x1e67;eip=0x0006ff; 	T(DEC(ax));	// 58307 dec     ax ;~ 1E67:06FF
cs=0x1e67;eip=0x000700; 	X(MOV(*(dw*)(raddr(ds,si+2)), ax));	// 58308 mov     [si+2], ax ;~ 1E67:0700
cs=0x1e67;eip=0x000703; 	T(OR(di, di));	// 58309 or      di, di ;~ 1E67:0703
cs=0x1e67;eip=0x000705; 	R(JLE(loc_2d36c));	// 58310 jle     short loc_2D36C ;~ 1E67:0705
cs=0x1e67;eip=0x000707; 	X(PUSH(di));	// 58311 push    di              ; void * ;~ 1E67:0707
cs=0x1e67;eip=0x000708; 	X(PUSH(*(dw*)(raddr(ds,si+4))));	// 58312 push    word ptr [si+4] ; void * ;~ 1E67:0708
cs=0x1e67;eip=0x00070b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 58313 push    word ptr [bp+var_6] ; int ;~ 1E67:070B
cs=0x1e67;eip=0x00070e; 	R(CALLF(_write,0));	// 58314 call    _write ;~ 1E67:070E
cs=0x1e67;eip=0x000713; 	T(ADD(sp, 6));	// 58315 add     sp, 6 ;~ 1E67:0713
cs=0x1e67;eip=0x000716; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), ax));	// 58316 mov     word ptr [bp+var_6+2], ax ;~ 1E67:0716
cs=0x1e67;eip=0x000719; 	R(JMP(loc_2d387));	// 58317 jmp     short loc_2D387 ;~ 1E67:0719
loc_2d36c:
	// 8341 
cs=0x1e67;eip=0x00071c; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 58322 mov     bx, word ptr [bp+var_6] ;~ 1E67:071C
cs=0x1e67;eip=0x00071f; 	T(TEST(*(raddr(ds,bx+0x3684)), 0x20));	// 58323 test    byte ptr [bx+3684h], 20h ;~ 1E67:071F
cs=0x1e67;eip=0x000724; 	R(JZ(loc_2d387));	// 58324 jz      short loc_2D387 ;~ 1E67:0724
cs=0x1e67;eip=0x000726; 	T(MOV(ax, 2));	// 58325 mov     ax, 2 ;~ 1E67:0726
cs=0x1e67;eip=0x000729; 	X(PUSH(ax));	// 58326 push    ax              ; int ;~ 1E67:0729
cs=0x1e67;eip=0x00072a; 	T(SUB(ax, ax));	// 58327 sub     ax, ax ;~ 1E67:072A
cs=0x1e67;eip=0x00072c; 	X(PUSH(ax));	// 58328 push    ax              ; __int32 ;~ 1E67:072C
cs=0x1e67;eip=0x00072d; 	X(PUSH(ax));	// 58329 push    ax              ; __int32 ;~ 1E67:072D
cs=0x1e67;eip=0x00072e; 	X(PUSH(bx));	// 58330 push    bx              ; int ;~ 1E67:072E
cs=0x1e67;eip=0x00072f; 	R(CALLF(_lseek,0));	// 58331 call    _lseek ;~ 1E67:072F
cs=0x1e67;eip=0x000734; 	T(ADD(sp, 8));	// 58332 add     sp, 8 ;~ 1E67:0734
loc_2d387:
	// 8342 
cs=0x1e67;eip=0x000737; 	T(MOV(bx, *(dw*)(raddr(ds,si+4))));	// 58336 mov     bx, [si+4] ;~ 1E67:0737
cs=0x1e67;eip=0x00073a; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0))));	// 58337 mov     al, byte ptr [bp+arg_0] ;~ 1E67:073A
cs=0x1e67;eip=0x00073d; 	X(MOV(*(raddr(ds,bx)), al));	// 58338 mov     [bx], al ;~ 1E67:073D
cs=0x1e67;eip=0x00073f; 	R(JMP(loc_2d3aa));	// 58339 jmp     short loc_2D3AA ;~ 1E67:073F
loc_2d392:
	// 8343 
cs=0x1e67;eip=0x000742; 	T(MOV(di, 1));	// 58344 mov     di, 1 ;~ 1E67:0742
cs=0x1e67;eip=0x000745; 	T(MOV(ax, di));	// 58345 mov     ax, di ;~ 1E67:0745
cs=0x1e67;eip=0x000747; 	X(PUSH(ax));	// 58346 push    ax              ; void * ;~ 1E67:0747
cs=0x1e67;eip=0x000748; 	T(ax = bp+arg_0);	// 58347 lea     ax, [bp+arg_0] ;~ 1E67:0748
cs=0x1e67;eip=0x00074b; 	X(PUSH(ax));	// 58348 push    ax              ; void * ;~ 1E67:074B
cs=0x1e67;eip=0x00074c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 58349 push    word ptr [bp+var_6] ; int ;~ 1E67:074C
cs=0x1e67;eip=0x00074f; 	R(CALLF(_write,0));	// 58350 call    _write ;~ 1E67:074F
cs=0x1e67;eip=0x000754; 	T(ADD(sp, 6));	// 58351 add     sp, 6 ;~ 1E67:0754
cs=0x1e67;eip=0x000757; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), ax));	// 58352 mov     word ptr [bp+var_6+2], ax ;~ 1E67:0757
loc_2d3aa:
	// 8344 
cs=0x1e67;eip=0x00075a; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), di));	// 58355 cmp     word ptr [bp+var_6+2], di ;~ 1E67:075A
cs=0x1e67;eip=0x00075d; 	R(JZ(loc_2d3b2));	// 58356 jz      short loc_2D3B2 ;~ 1E67:075D
cs=0x1e67;eip=0x00075f; 	R(JMP(loc_2d295));	// 58357 jmp     loc_2D295 ;~ 1E67:075F
loc_2d3b2:
	// 8345 
cs=0x1e67;eip=0x000762; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0))));	// 58361 mov     al, byte ptr [bp+arg_0] ;~ 1E67:0762
cs=0x1e67;eip=0x000765; 	T(SUB(ah, ah));	// 58362 sub     ah, ah ;~ 1E67:0765
loc_2d3b7:
	// 8346 
cs=0x1e67;eip=0x000767; 	X(POP(si));	// 58365 pop     si ;~ 1E67:0767
cs=0x1e67;eip=0x000768; 	X(POP(di));	// 58366 pop     di ;~ 1E67:0768
cs=0x1e67;eip=0x000769; 	T(MOV(sp, bp));	// 58367 mov     sp, bp ;~ 1E67:0769
cs=0x1e67;eip=0x00076b; 	X(POP(bp));	// 58368 pop     bp ;~ 1E67:076B
cs=0x1e67;eip=0x00076c; 	R(RETF(0));	// 58369 retf ;~ 1E67:076C
__getbuf:
	// 58379 
#undef var_2
#define var_2 -2
	// 58381 var_2           = word ptr -2 ;~ 1E67:076E
#undef arg_0
#define arg_0 4
	// 58382 arg_0           = word ptr  4 ;~ 1E67:076E
ret_1e67_76e:
	// 8347 
cs=0x1e67;eip=0x00076e; 	X(PUSH(bp));	// 58384 push    bp ;~ 1E67:076E
cs=0x1e67;eip=0x00076f; 	T(MOV(bp, sp));	// 58385 mov     bp, sp ;~ 1E67:076F
cs=0x1e67;eip=0x000771; 	T(SUB(sp, 2));	// 58386 sub     sp, 2 ;~ 1E67:0771
cs=0x1e67;eip=0x000774; 	X(PUSH(si));	// 58387 push    si ;~ 1E67:0774
cs=0x1e67;eip=0x000775; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 58388 mov     ax, [bp+arg_0] ;~ 1E67:0775
cs=0x1e67;eip=0x000778; 	T(SUB(ax, 0x36D0));	// 58389 sub     ax, 36D0h ;~ 1E67:0778
cs=0x1e67;eip=0x00077b; 	T(MOV(cl, 3));	// 58390 mov     cl, 3 ;~ 1E67:077B
cs=0x1e67;eip=0x00077d; 	T(SAR(ax, cl));	// 58391 sar     ax, cl ;~ 1E67:077D
cs=0x1e67;eip=0x00077f; 	T(MOV(cx, ax));	// 58392 mov     cx, ax ;~ 1E67:077F
cs=0x1e67;eip=0x000781; 	T(SHL(ax, 1));	// 58393 shl     ax, 1 ;~ 1E67:0781
cs=0x1e67;eip=0x000783; 	T(ADD(ax, cx));	// 58394 add     ax, cx ;~ 1E67:0783
cs=0x1e67;eip=0x000785; 	T(SHL(ax, 1));	// 58395 shl     ax, 1 ;~ 1E67:0785
cs=0x1e67;eip=0x000787; 	T(ADD(ax, 0x3770));	// 58396 add     ax, 3770h ;~ 1E67:0787
cs=0x1e67;eip=0x00078a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 58397 mov     [bp+var_2], ax ;~ 1E67:078A
cs=0x1e67;eip=0x00078d; 	T(MOV(ax, 0x200));	// 58398 mov     ax, 200h ;~ 1E67:078D
cs=0x1e67;eip=0x000790; 	X(PUSH(ax));	// 58399 push    ax ;~ 1E67:0790
cs=0x1e67;eip=0x000791; 	R(CALLF(unknown_libname_2,0));	// 58400 call    unknown_libname_2 ; MS Quick C v1.0/v2.01 & MSC v5.1 DOS run-time & graphic ;~ 1E67:0791
cs=0x1e67;eip=0x000796; 	T(ADD(sp, 2));	// 58401 add     sp, 2 ;~ 1E67:0796
cs=0x1e67;eip=0x000799; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 58402 mov     bx, [bp+arg_0] ;~ 1E67:0799
cs=0x1e67;eip=0x00079c; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 58403 mov     [bx+4], ax ;~ 1E67:079C
cs=0x1e67;eip=0x00079f; 	T(OR(ax, ax));	// 58404 or      ax, ax ;~ 1E67:079F
cs=0x1e67;eip=0x0007a1; 	R(JZ(loc_2d402));	// 58405 jz      short loc_2D402 ;~ 1E67:07A1
cs=0x1e67;eip=0x0007a3; 	X(OR(*(raddr(ds,bx+6)), 8));	// 58406 or      byte ptr [bx+6], 8 ;~ 1E67:07A3
cs=0x1e67;eip=0x0007a7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 58407 mov     bx, [bp+var_2] ;~ 1E67:07A7
cs=0x1e67;eip=0x0007aa; 	X(MOV(*(dw*)(raddr(ds,bx+2)), 0x200));	// 58408 mov     word ptr [bx+2], 200h ;~ 1E67:07AA
cs=0x1e67;eip=0x0007af; 	R(JMP(loc_2d418));	// 58409 jmp     short loc_2D418 ;~ 1E67:07AF
loc_2d402:
	// 8348 
cs=0x1e67;eip=0x0007b2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 58414 mov     bx, [bp+arg_0] ;~ 1E67:07B2
cs=0x1e67;eip=0x0007b5; 	X(OR(*(raddr(ds,bx+6)), 4));	// 58415 or      byte ptr [bx+6], 4 ;~ 1E67:07B5
cs=0x1e67;eip=0x0007b9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 58416 mov     ax, [bp+var_2] ;~ 1E67:07B9
cs=0x1e67;eip=0x0007bc; 	T(INC(ax));	// 58417 inc     ax ;~ 1E67:07BC
cs=0x1e67;eip=0x0007bd; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 58418 mov     [bx+4], ax ;~ 1E67:07BD
cs=0x1e67;eip=0x0007c0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 58419 mov     bx, [bp+var_2] ;~ 1E67:07C0
cs=0x1e67;eip=0x0007c3; 	X(MOV(*(dw*)(raddr(ds,bx+2)), 1));	// 58420 mov     word ptr [bx+2], 1 ;~ 1E67:07C3
loc_2d418:
	// 8349 
cs=0x1e67;eip=0x0007c8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 58423 mov     bx, [bp+arg_0] ;~ 1E67:07C8
cs=0x1e67;eip=0x0007cb; 	T(MOV(si, bx));	// 58424 mov     si, bx ;~ 1E67:07CB
cs=0x1e67;eip=0x0007cd; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 58425 mov     ax, [si+4] ;~ 1E67:07CD
cs=0x1e67;eip=0x0007d0; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 58426 mov     [bx], ax ;~ 1E67:07D0
cs=0x1e67;eip=0x0007d2; 	X(MOV(*(dw*)(raddr(ds,bx+2)), 0));	// 58427 mov     word ptr [bx+2], 0 ;~ 1E67:07D2
cs=0x1e67;eip=0x0007d7; 	X(POP(si));	// 58428 pop     si ;~ 1E67:07D7
cs=0x1e67;eip=0x0007d8; 	T(MOV(sp, bp));	// 58429 mov     sp, bp ;~ 1E67:07D8
cs=0x1e67;eip=0x0007da; 	X(POP(bp));	// 58430 pop     bp ;~ 1E67:07DA
cs=0x1e67;eip=0x0007db; 	R(RETN(0));	// 58431 retn ;~ 1E67:07DB
__stbuf:
	// 58439 
#undef var_4
#define var_4 -4
	// 58441 var_4           = word ptr -4 ;~ 1E67:07DC
#undef var_2
#define var_2 -2
	// 58442 var_2           = word ptr -2 ;~ 1E67:07DC
#undef arg_0
#define arg_0 6
	// 58443 arg_0           = word ptr  6 ;~ 1E67:07DC
ret_1e67_7dc:
	// 8350 
cs=0x1e67;eip=0x0007dc; 	X(PUSH(bp));	// 58445 push    bp ;~ 1E67:07DC
cs=0x1e67;eip=0x0007dd; 	T(MOV(bp, sp));	// 58446 mov     bp, sp ;~ 1E67:07DD
cs=0x1e67;eip=0x0007df; 	T(SUB(sp, 4));	// 58447 sub     sp, 4 ;~ 1E67:07DF
cs=0x1e67;eip=0x0007e2; 	X(PUSH(si));	// 58448 push    si ;~ 1E67:07E2
cs=0x1e67;eip=0x0007e3; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 58449 mov     si, [bp+arg_0] ;~ 1E67:07E3
cs=0x1e67;eip=0x0007e6; 	X(INC(word_3ee3e));	// 58450 inc     word_3EE3E ;~ 1E67:07E6
cs=0x1e67;eip=0x0007ea; 	T(CMP(si, 0x36D8));	// 58451 cmp     si, 36D8h ;~ 1E67:07EA
cs=0x1e67;eip=0x0007ee; 	R(JNZ(loc_2d448));	// 58452 jnz     short loc_2D448 ;~ 1E67:07EE
cs=0x1e67;eip=0x0007f0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x891E));	// 58453 mov     [bp+var_2], 891Eh ;~ 1E67:07F0
cs=0x1e67;eip=0x0007f5; 	R(JMP(loc_2d453));	// 58454 jmp     short loc_2D453 ;~ 1E67:07F5
loc_2d448:
	// 8351 
cs=0x1e67;eip=0x0007f8; 	T(CMP(si, 0x36E0));	// 58459 cmp     si, 36E0h ;~ 1E67:07F8
cs=0x1e67;eip=0x0007fc; 	R(JNZ(loc_2d472));	// 58460 jnz     short loc_2D472 ;~ 1E67:07FC
cs=0x1e67;eip=0x0007fe; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0AA62));	// 58461 mov     [bp+var_2], 0AA62h ;~ 1E67:07FE
loc_2d453:
	// 8352 
cs=0x1e67;eip=0x000803; 	T(TEST(*(raddr(ds,si+6)), 0x0C));	// 58464 test    byte ptr [si+6], 0Ch ;~ 1E67:0803
cs=0x1e67;eip=0x000807; 	R(JNZ(loc_2d472));	// 58465 jnz     short loc_2D472 ;~ 1E67:0807
cs=0x1e67;eip=0x000809; 	T(MOV(bx, si));	// 58466 mov     bx, si ;~ 1E67:0809
cs=0x1e67;eip=0x00080b; 	T(SUB(bx, 0x36D0));	// 58467 sub     bx, 36D0h ;~ 1E67:080B
cs=0x1e67;eip=0x00080f; 	T(MOV(cl, 3));	// 58468 mov     cl, 3 ;~ 1E67:080F
cs=0x1e67;eip=0x000811; 	T(SAR(bx, cl));	// 58469 sar     bx, cl ;~ 1E67:0811
cs=0x1e67;eip=0x000813; 	T(MOV(ax, bx));	// 58470 mov     ax, bx ;~ 1E67:0813
cs=0x1e67;eip=0x000815; 	T(SHL(bx, 1));	// 58471 shl     bx, 1 ;~ 1E67:0815
cs=0x1e67;eip=0x000817; 	T(ADD(bx, ax));	// 58472 add     bx, ax ;~ 1E67:0817
cs=0x1e67;eip=0x000819; 	T(SHL(bx, 1));	// 58473 shl     bx, 1 ;~ 1E67:0819
cs=0x1e67;eip=0x00081b; 	T(TEST(*(raddr(ds,bx+0x3770)), 1));	// 58474 test    byte ptr [bx+3770h], 1 ;~ 1E67:081B
cs=0x1e67;eip=0x000820; 	R(JZ(loc_2d476));	// 58475 jz      short loc_2D476 ;~ 1E67:0820
loc_2d472:
	// 8353 
cs=0x1e67;eip=0x000822; 	T(SUB(ax, ax));	// 58479 sub     ax, ax ;~ 1E67:0822
cs=0x1e67;eip=0x000824; 	R(JMP(loc_2d4ab));	// 58480 jmp     short loc_2D4AB ;~ 1E67:0824
loc_2d476:
	// 8354 
cs=0x1e67;eip=0x000826; 	T(MOV(ax, si));	// 58484 mov     ax, si ;~ 1E67:0826
cs=0x1e67;eip=0x000828; 	T(SUB(ax, 0x36D0));	// 58485 sub     ax, 36D0h ;~ 1E67:0828
cs=0x1e67;eip=0x00082b; 	T(MOV(cl, 3));	// 58486 mov     cl, 3 ;~ 1E67:082B
cs=0x1e67;eip=0x00082d; 	T(SAR(ax, cl));	// 58487 sar     ax, cl ;~ 1E67:082D
cs=0x1e67;eip=0x00082f; 	T(MOV(cx, ax));	// 58488 mov     cx, ax ;~ 1E67:082F
cs=0x1e67;eip=0x000831; 	T(SHL(ax, 1));	// 58489 shl     ax, 1 ;~ 1E67:0831
cs=0x1e67;eip=0x000833; 	T(ADD(ax, cx));	// 58490 add     ax, cx ;~ 1E67:0833
cs=0x1e67;eip=0x000835; 	T(SHL(ax, 1));	// 58491 shl     ax, 1 ;~ 1E67:0835
cs=0x1e67;eip=0x000837; 	T(ADD(ax, 0x3770));	// 58492 add     ax, 3770h ;~ 1E67:0837
cs=0x1e67;eip=0x00083a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 58493 mov     [bp+var_4], ax ;~ 1E67:083A
cs=0x1e67;eip=0x00083d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 58494 mov     ax, [bp+var_2] ;~ 1E67:083D
cs=0x1e67;eip=0x000840; 	X(MOV(*(dw*)(raddr(ds,si+4)), ax));	// 58495 mov     [si+4], ax ;~ 1E67:0840
cs=0x1e67;eip=0x000843; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 58496 mov     [si], ax ;~ 1E67:0843
cs=0x1e67;eip=0x000845; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 58497 mov     bx, [bp+var_4] ;~ 1E67:0845
cs=0x1e67;eip=0x000848; 	T(MOV(ax, 0x200));	// 58498 mov     ax, 200h ;~ 1E67:0848
cs=0x1e67;eip=0x00084b; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 58499 mov     [bx+2], ax ;~ 1E67:084B
cs=0x1e67;eip=0x00084e; 	X(MOV(*(dw*)(raddr(ds,si+2)), ax));	// 58500 mov     [si+2], ax ;~ 1E67:084E
cs=0x1e67;eip=0x000851; 	X(MOV(*(raddr(ds,bx)), 1));	// 58501 mov     byte ptr [bx], 1 ;~ 1E67:0851
cs=0x1e67;eip=0x000854; 	X(OR(*(raddr(ds,si+6)), 2));	// 58502 or      byte ptr [si+6], 2 ;~ 1E67:0854
cs=0x1e67;eip=0x000858; 	T(MOV(ax, 1));	// 58503 mov     ax, 1 ;~ 1E67:0858
loc_2d4ab:
	// 8355 
cs=0x1e67;eip=0x00085b; 	X(POP(si));	// 58506 pop     si ;~ 1E67:085B
cs=0x1e67;eip=0x00085c; 	T(MOV(sp, bp));	// 58507 mov     sp, bp ;~ 1E67:085C
cs=0x1e67;eip=0x00085e; 	X(POP(bp));	// 58508 pop     bp ;~ 1E67:085E
cs=0x1e67;eip=0x00085f; 	R(RETF(0));	// 58509 retf ;~ 1E67:085F
__ftbuf:
	// 58518 
#undef var_2
#define var_2 -2
	// 58520 var_2           = word ptr -2 ;~ 1E67:0860
#undef arg_0
#define arg_0 6
	// 58521 arg_0           = word ptr  6 ;~ 1E67:0860
#undef arg_2
#define arg_2 8
	// 58522 arg_2           = dword ptr  8 ;~ 1E67:0860
ret_1e67_860:
	// 8356 
cs=0x1e67;eip=0x000860; 	X(PUSH(bp));	// 58524 push    bp ;~ 1E67:0860
cs=0x1e67;eip=0x000861; 	T(MOV(bp, sp));	// 58525 mov     bp, sp ;~ 1E67:0861
cs=0x1e67;eip=0x000863; 	T(SUB(sp, 2));	// 58526 sub     sp, 2 ;~ 1E67:0863
cs=0x1e67;eip=0x000866; 	X(PUSH(si));	// 58527 push    si ;~ 1E67:0866
cs=0x1e67;eip=0x000867; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 58528 cmp     [bp+arg_0], 0 ;~ 1E67:0867
cs=0x1e67;eip=0x00086b; 	R(JZ(loc_2d51c));	// 58529 jz      short loc_2D51C ;~ 1E67:086B
cs=0x1e67;eip=0x00086d; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+arg_2))), 0x36D8));	// 58530 cmp     word ptr [bp+arg_2], 36D8h ;~ 1E67:086D
cs=0x1e67;eip=0x000872; 	R(JZ(loc_2d4cb));	// 58531 jz      short loc_2D4CB ;~ 1E67:0872
cs=0x1e67;eip=0x000874; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+arg_2))), 0x36E0));	// 58532 cmp     word ptr [bp+arg_2], 36E0h ;~ 1E67:0874
cs=0x1e67;eip=0x000879; 	R(JNZ(loc_2d549));	// 58533 jnz     short loc_2D549 ;~ 1E67:0879
loc_2d4cb:
	// 8357 
cs=0x1e67;eip=0x00087b; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 58536 mov     bx, word ptr [bp+arg_2] ;~ 1E67:087B
cs=0x1e67;eip=0x00087e; 	T(MOV(al, *(raddr(ds,bx+7))));	// 58537 mov     al, [bx+7] ;~ 1E67:087E
cs=0x1e67;eip=0x000881; 	T(CBW);	// 58538 cbw ;~ 1E67:0881
cs=0x1e67;eip=0x000882; 	X(PUSH(ax));	// 58539 push    ax              ; int ;~ 1E67:0882
cs=0x1e67;eip=0x000883; 	R(CALLF(_isatty,0));	// 58540 call    _isatty ;~ 1E67:0883
cs=0x1e67;eip=0x000888; 	T(ADD(sp, 2));	// 58541 add     sp, 2 ;~ 1E67:0888
cs=0x1e67;eip=0x00088b; 	T(OR(ax, ax));	// 58542 or      ax, ax ;~ 1E67:088B
cs=0x1e67;eip=0x00088d; 	R(JZ(loc_2d549));	// 58543 jz      short loc_2D549 ;~ 1E67:088D
cs=0x1e67;eip=0x00088f; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 58544 mov     ax, word ptr [bp+arg_2] ;~ 1E67:088F
cs=0x1e67;eip=0x000892; 	T(SUB(ax, 0x36D0));	// 58545 sub     ax, 36D0h ;~ 1E67:0892
cs=0x1e67;eip=0x000895; 	T(MOV(cl, 3));	// 58546 mov     cl, 3 ;~ 1E67:0895
cs=0x1e67;eip=0x000897; 	T(SAR(ax, cl));	// 58547 sar     ax, cl ;~ 1E67:0897
cs=0x1e67;eip=0x000899; 	T(MOV(cx, ax));	// 58548 mov     cx, ax ;~ 1E67:0899
cs=0x1e67;eip=0x00089b; 	T(SHL(ax, 1));	// 58549 shl     ax, 1 ;~ 1E67:089B
cs=0x1e67;eip=0x00089d; 	T(ADD(ax, cx));	// 58550 add     ax, cx ;~ 1E67:089D
cs=0x1e67;eip=0x00089f; 	T(SHL(ax, 1));	// 58551 shl     ax, 1 ;~ 1E67:089F
cs=0x1e67;eip=0x0008a1; 	T(ADD(ax, 0x3770));	// 58552 add     ax, 3770h ;~ 1E67:08A1
cs=0x1e67;eip=0x0008a4; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 58553 mov     [bp+var_2], ax ;~ 1E67:08A4
cs=0x1e67;eip=0x0008a7; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 58554 push    word ptr [bp+arg_2] ; FILE * ;~ 1E67:08A7
cs=0x1e67;eip=0x0008aa; 	R(CALLF(_fflush,0));	// 58555 call    _fflush ;~ 1E67:08AA
cs=0x1e67;eip=0x0008af; 	T(ADD(sp, 2));	// 58556 add     sp, 2 ;~ 1E67:08AF
cs=0x1e67;eip=0x0008b2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 58557 mov     bx, [bp+var_2] ;~ 1E67:08B2
cs=0x1e67;eip=0x0008b5; 	X(MOV(*(raddr(ds,bx)), 0));	// 58558 mov     byte ptr [bx], 0 ;~ 1E67:08B5
cs=0x1e67;eip=0x0008b8; 	X(MOV(*(dw*)(raddr(ds,bx+2)), 0));	// 58559 mov     word ptr [bx+2], 0 ;~ 1E67:08B8
cs=0x1e67;eip=0x0008bd; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 58560 mov     bx, word ptr [bp+arg_2] ;~ 1E67:08BD
cs=0x1e67;eip=0x0008c0; 	T(MOV(si, bx));	// 58561 mov     si, bx ;~ 1E67:08C0
cs=0x1e67;eip=0x0008c2; 	T(SUB(ax, ax));	// 58562 sub     ax, ax ;~ 1E67:08C2
cs=0x1e67;eip=0x0008c4; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 58563 mov     [si], ax ;~ 1E67:08C4
cs=0x1e67;eip=0x0008c6; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 58564 mov     [bx+4], ax ;~ 1E67:08C6
cs=0x1e67;eip=0x0008c9; 	R(JMP(loc_2d549));	// 58565 jmp     short loc_2D549 ;~ 1E67:08C9
loc_2d51c:
	// 8358 
cs=0x1e67;eip=0x0008cc; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 58570 mov     bx, word ptr [bp+arg_2] ;~ 1E67:08CC
cs=0x1e67;eip=0x0008cf; 	T(CMP(*(dw*)(raddr(ds,bx+4)), 0x891E));	// 58571 cmp     word ptr [bx+4], 891Eh ;~ 1E67:08CF
cs=0x1e67;eip=0x0008d4; 	R(JZ(loc_2d52d));	// 58572 jz      short loc_2D52D ;~ 1E67:08D4
cs=0x1e67;eip=0x0008d6; 	T(CMP(*(dw*)(raddr(ds,bx+4)), 0x0AA62));	// 58573 cmp     word ptr [bx+4], 0AA62h ;~ 1E67:08D6
cs=0x1e67;eip=0x0008db; 	R(JNZ(loc_2d549));	// 58574 jnz     short loc_2D549 ;~ 1E67:08DB
loc_2d52d:
	// 8359 
cs=0x1e67;eip=0x0008dd; 	T(MOV(al, *(raddr(ds,bx+7))));	// 58577 mov     al, [bx+7] ;~ 1E67:08DD
cs=0x1e67;eip=0x0008e0; 	T(CBW);	// 58578 cbw ;~ 1E67:08E0
cs=0x1e67;eip=0x0008e1; 	X(PUSH(ax));	// 58579 push    ax              ; int ;~ 1E67:08E1
cs=0x1e67;eip=0x0008e2; 	R(CALLF(_isatty,0));	// 58580 call    _isatty ;~ 1E67:08E2
cs=0x1e67;eip=0x0008e7; 	T(ADD(sp, 2));	// 58581 add     sp, 2 ;~ 1E67:08E7
cs=0x1e67;eip=0x0008ea; 	T(OR(ax, ax));	// 58582 or      ax, ax ;~ 1E67:08EA
cs=0x1e67;eip=0x0008ec; 	R(JZ(loc_2d549));	// 58583 jz      short loc_2D549 ;~ 1E67:08EC
cs=0x1e67;eip=0x0008ee; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 58584 push    word ptr [bp+arg_2] ; FILE * ;~ 1E67:08EE
cs=0x1e67;eip=0x0008f1; 	R(CALLF(_fflush,0));	// 58585 call    _fflush ;~ 1E67:08F1
cs=0x1e67;eip=0x0008f6; 	T(ADD(sp, 2));	// 58586 add     sp, 2 ;~ 1E67:08F6
loc_2d549:
	// 8360 
cs=0x1e67;eip=0x0008f9; 	X(POP(si));	// 58590 pop     si ;~ 1E67:08F9
cs=0x1e67;eip=0x0008fa; 	T(MOV(sp, bp));	// 58591 mov     sp, bp ;~ 1E67:08FA
cs=0x1e67;eip=0x0008fc; 	X(POP(bp));	// 58592 pop     bp ;~ 1E67:08FC
cs=0x1e67;eip=0x0008fd; 	R(RETF(0));	// 58593 retf ;~ 1E67:08FD
_fflush:
	// 58602 
#undef var_4
#define var_4 -4
	// 58605 var_4           = word ptr -4 ;~ 1E67:08FE
#undef arg_0
#define arg_0 6
	// 58606 arg_0           = dword ptr  6 ;~ 1E67:08FE
ret_1e67_8fe:
	// 8361 
cs=0x1e67;eip=0x0008fe; 	X(PUSH(bp));	// 58608 push    bp ;~ 1E67:08FE
cs=0x1e67;eip=0x0008ff; 	T(MOV(bp, sp));	// 58609 mov     bp, sp ;~ 1E67:08FF
cs=0x1e67;eip=0x000901; 	T(SUB(sp, 4));	// 58610 sub     sp, 4 ;~ 1E67:0901
cs=0x1e67;eip=0x000904; 	X(PUSH(di));	// 58611 push    di              ; unsigned int ;~ 1E67:0904
cs=0x1e67;eip=0x000905; 	X(PUSH(si));	// 58612 push    si ;~ 1E67:0905
cs=0x1e67;eip=0x000906; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 58613 mov     si, word ptr [bp+arg_0] ;~ 1E67:0906
cs=0x1e67;eip=0x000909; 	T(SUB(di, di));	// 58614 sub     di, di ;~ 1E67:0909
cs=0x1e67;eip=0x00090b; 	T(MOV(al, *(raddr(ds,si+6))));	// 58615 mov     al, [si+6] ;~ 1E67:090B
cs=0x1e67;eip=0x00090e; 	T(AND(al, 3));	// 58616 and     al, 3 ;~ 1E67:090E
cs=0x1e67;eip=0x000910; 	T(CMP(al, 2));	// 58617 cmp     al, 2 ;~ 1E67:0910
cs=0x1e67;eip=0x000912; 	R(JNZ(loc_2d5ac));	// 58618 jnz     short loc_2D5AC ;~ 1E67:0912
cs=0x1e67;eip=0x000914; 	T(TEST(*(raddr(ds,si+6)), 8));	// 58619 test    byte ptr [si+6], 8 ;~ 1E67:0914
cs=0x1e67;eip=0x000918; 	R(JNZ(loc_2d583));	// 58620 jnz     short loc_2D583 ;~ 1E67:0918
cs=0x1e67;eip=0x00091a; 	T(MOV(bx, si));	// 58621 mov     bx, si ;~ 1E67:091A
cs=0x1e67;eip=0x00091c; 	T(SUB(bx, 0x36D0));	// 58622 sub     bx, 36D0h ;~ 1E67:091C
cs=0x1e67;eip=0x000920; 	T(MOV(cl, 3));	// 58623 mov     cl, 3 ;~ 1E67:0920
cs=0x1e67;eip=0x000922; 	T(SAR(bx, cl));	// 58624 sar     bx, cl ;~ 1E67:0922
cs=0x1e67;eip=0x000924; 	T(MOV(ax, bx));	// 58625 mov     ax, bx ;~ 1E67:0924
cs=0x1e67;eip=0x000926; 	T(SHL(bx, 1));	// 58626 shl     bx, 1 ;~ 1E67:0926
cs=0x1e67;eip=0x000928; 	T(ADD(bx, ax));	// 58627 add     bx, ax ;~ 1E67:0928
cs=0x1e67;eip=0x00092a; 	T(SHL(bx, 1));	// 58628 shl     bx, 1 ;~ 1E67:092A
cs=0x1e67;eip=0x00092c; 	T(TEST(*(raddr(ds,bx+0x3770)), 1));	// 58629 test    byte ptr [bx+3770h], 1 ;~ 1E67:092C
cs=0x1e67;eip=0x000931; 	R(JZ(loc_2d5ac));	// 58630 jz      short loc_2D5AC ;~ 1E67:0931
loc_2d583:
	// 8362 
cs=0x1e67;eip=0x000933; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 58633 mov     ax, [si] ;~ 1E67:0933
cs=0x1e67;eip=0x000935; 	T(SUB(ax, *(dw*)(raddr(ds,si+4))));	// 58634 sub     ax, [si+4] ;~ 1E67:0935
cs=0x1e67;eip=0x000938; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 58635 mov     [bp+var_4], ax ;~ 1E67:0938
cs=0x1e67;eip=0x00093b; 	T(OR(ax, ax));	// 58636 or      ax, ax ;~ 1E67:093B
cs=0x1e67;eip=0x00093d; 	R(JLE(loc_2d5ac));	// 58637 jle     short loc_2D5AC ;~ 1E67:093D
cs=0x1e67;eip=0x00093f; 	X(PUSH(ax));	// 58638 push    ax              ; void * ;~ 1E67:093F
cs=0x1e67;eip=0x000940; 	X(PUSH(*(dw*)(raddr(ds,si+4))));	// 58639 push    word ptr [si+4] ; void * ;~ 1E67:0940
cs=0x1e67;eip=0x000943; 	T(MOV(al, *(raddr(ds,si+7))));	// 58640 mov     al, [si+7] ;~ 1E67:0943
cs=0x1e67;eip=0x000946; 	T(CBW);	// 58641 cbw ;~ 1E67:0946
cs=0x1e67;eip=0x000947; 	X(PUSH(ax));	// 58642 push    ax              ; int ;~ 1E67:0947
cs=0x1e67;eip=0x000948; 	R(CALLF(_write,0));	// 58643 call    _write ;~ 1E67:0948
cs=0x1e67;eip=0x00094d; 	T(ADD(sp, 6));	// 58644 add     sp, 6 ;~ 1E67:094D
cs=0x1e67;eip=0x000950; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4))));	// 58645 cmp     ax, [bp+var_4] ;~ 1E67:0950
cs=0x1e67;eip=0x000953; 	R(JZ(loc_2d5ac));	// 58646 jz      short loc_2D5AC ;~ 1E67:0953
cs=0x1e67;eip=0x000955; 	X(OR(*(raddr(ds,si+6)), 0x20));	// 58647 or      byte ptr [si+6], 20h ;~ 1E67:0955
cs=0x1e67;eip=0x000959; 	T(MOV(di, 0x0FFFF));	// 58648 mov     di, 0FFFFh ;~ 1E67:0959
loc_2d5ac:
	// 8363 
cs=0x1e67;eip=0x00095c; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 58652 mov     ax, [si+4] ;~ 1E67:095C
cs=0x1e67;eip=0x00095f; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 58653 mov     [si], ax ;~ 1E67:095F
cs=0x1e67;eip=0x000961; 	X(MOV(*(dw*)(raddr(ds,si+2)), 0));	// 58654 mov     word ptr [si+2], 0 ;~ 1E67:0961
cs=0x1e67;eip=0x000966; 	T(MOV(ax, di));	// 58655 mov     ax, di ;~ 1E67:0966
cs=0x1e67;eip=0x000968; 	X(POP(si));	// 58656 pop     si ;~ 1E67:0968
cs=0x1e67;eip=0x000969; 	X(POP(di));	// 58657 pop     di ;~ 1E67:0969
cs=0x1e67;eip=0x00096a; 	T(MOV(sp, bp));	// 58658 mov     sp, bp ;~ 1E67:096A
cs=0x1e67;eip=0x00096c; 	X(POP(bp));	// 58659 pop     bp ;~ 1E67:096C
cs=0x1e67;eip=0x00096d; 	R(RETF(0));	// 58660 retf ;~ 1E67:096D
__output:
	// 58668 
#undef var_164
#define var_164 -0x164
	// 58671 var_164         = word ptr -164h ;~ 1E67:096E
#undef var_162
#define var_162 -0x162
	// 58672 var_162         = byte ptr -162h ;~ 1E67:096E
#undef var_4
#define var_4 -4
	// 58673 var_4           = word ptr -4 ;~ 1E67:096E
#undef arg_0
#define arg_0 6
	// 58674 arg_0           = word ptr  6 ;~ 1E67:096E
#undef arg_2
#define arg_2 8
	// 58675 arg_2           = word ptr  8 ;~ 1E67:096E
#undef arg_4
#define arg_4 0x0A
	// 58676 arg_4           = word ptr  0Ah ;~ 1E67:096E
ret_1e67_96e:
	// 8364 
cs=0x1e67;eip=0x00096e; 	X(PUSH(bp));	// 58678 push    bp ;~ 1E67:096E
cs=0x1e67;eip=0x00096f; 	T(MOV(bp, sp));	// 58679 mov     bp, sp ;~ 1E67:096F
cs=0x1e67;eip=0x000971; 	T(MOV(ax, 0x164));	// 58680 mov     ax, 164h ;~ 1E67:0971
cs=0x1e67;eip=0x000974; 	R(CALLF(__chkstk,0));	// 58681 call    __chkstk ;~ 1E67:0974
cs=0x1e67;eip=0x000979; 	X(PUSH(di));	// 58682 push    di ;~ 1E67:0979
cs=0x1e67;eip=0x00097a; 	X(PUSH(si));	// 58683 push    si ;~ 1E67:097A
cs=0x1e67;eip=0x00097b; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 58684 mov     si, [bp+arg_2] ;~ 1E67:097B
cs=0x1e67;eip=0x00097e; 	T(ax = bp+var_162);	// 58685 lea     ax, [bp+var_162] ;~ 1E67:097E
cs=0x1e67;eip=0x000982; 	X(MOV(off_428b6, ax));	// 58686 mov     off_428B6, ax ;~ 1E67:0982
cs=0x1e67;eip=0x000985; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 58687 mov     ax, [bp+arg_4] ;~ 1E67:0985
cs=0x1e67;eip=0x000988; 	X(MOV(word_428a6, ax));	// 58688 mov     word_428A6, ax ;~ 1E67:0988
cs=0x1e67;eip=0x00098b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 58689 mov     ax, [bp+arg_0] ;~ 1E67:098B
cs=0x1e67;eip=0x00098e; 	X(MOV(off_4289a, ax));	// 58690 mov     off_4289A, ax ;~ 1E67:098E
cs=0x1e67;eip=0x000991; 	X(MOV(word_428b0, 0));	// 58691 mov     word_428B0, 0 ;~ 1E67:0991
cs=0x1e67;eip=0x000997; 	X(MOV(word_428ae, 0));	// 58692 mov     word_428AE, 0 ;~ 1E67:0997
cs=0x1e67;eip=0x00099d; 	R(JMP(loc_2d877));	// 58693 jmp     loc_2D877 ;~ 1E67:099D
loc_2d5f0:
	// 8365 
cs=0x1e67;eip=0x0009a0; 	T(CMP(*(raddr(ds,si)), 0x25));	// 58697 cmp     byte ptr [si], 25h ; '%' ;~ 1E67:09A0
cs=0x1e67;eip=0x0009a3; 	R(JZ(loc_2d5f8));	// 58698 jz      short loc_2D5F8 ;~ 1E67:09A3
cs=0x1e67;eip=0x0009a5; 	R(JMP(loc_2d85a));	// 58699 jmp     loc_2D85A ;~ 1E67:09A5
loc_2d5f8:
	// 8366 
cs=0x1e67;eip=0x0009a8; 	X(MOV(word_428b2, 1));	// 58703 mov     word_428B2, 1 ;~ 1E67:09A8
cs=0x1e67;eip=0x0009ae; 	T(SUB(ax, ax));	// 58704 sub     ax, ax ;~ 1E67:09AE
cs=0x1e67;eip=0x0009b0; 	X(MOV(word_428a2, ax));	// 58705 mov     word_428A2, ax ;~ 1E67:09B0
cs=0x1e67;eip=0x0009b3; 	X(MOV(word_4289e, ax));	// 58706 mov     word_4289E, ax ;~ 1E67:09B3
cs=0x1e67;eip=0x0009b6; 	X(MOV(word_428ac, ax));	// 58707 mov     word_428AC, ax ;~ 1E67:09B6
cs=0x1e67;eip=0x0009b9; 	X(MOV(word_428a0, ax));	// 58708 mov     word_428A0, ax ;~ 1E67:09B9
cs=0x1e67;eip=0x0009bc; 	X(MOV(word_428aa, ax));	// 58709 mov     word_428AA, ax ;~ 1E67:09BC
cs=0x1e67;eip=0x0009bf; 	X(MOV(word_428a8, ax));	// 58710 mov     word_428A8, ax ;~ 1E67:09BF
cs=0x1e67;eip=0x0009c2; 	X(MOV(word_4289c, ax));	// 58711 mov     word_4289C, ax ;~ 1E67:09C2
cs=0x1e67;eip=0x0009c5; 	X(MOV(word_42898, ax));	// 58712 mov     word_42898, ax ;~ 1E67:09C5
cs=0x1e67;eip=0x0009c8; 	X(MOV(word_428a4, ax));	// 58713 mov     word_428A4, ax ;~ 1E67:09C8
cs=0x1e67;eip=0x0009cb; 	X(MOV(word_428bc, 0x20));	// 58714 mov     word_428BC, 20h ; ' ' ;~ 1E67:09CB
cs=0x1e67;eip=0x0009d1; 	T(CMP(*(raddr(ds,si+1)), 0x30));	// 58715 cmp     byte ptr [si+1], 30h ; '0' ;~ 1E67:09D1
cs=0x1e67;eip=0x0009d5; 	R(JNZ(loc_2d663));	// 58716 jnz     short loc_2D663 ;~ 1E67:09D5
cs=0x1e67;eip=0x0009d7; 	T(INC(si));	// 58717 inc     si ;~ 1E67:09D7
cs=0x1e67;eip=0x0009d8; 	X(MOV(word_428bc, 0x30));	// 58718 mov     word_428BC, 30h ; '0' ;~ 1E67:09D8
cs=0x1e67;eip=0x0009de; 	R(JMP(loc_2d663));	// 58719 jmp     short loc_2D663 ;~ 1E67:09DE
loc_2d630:
	// 8367 
cs=0x1e67;eip=0x0009e0; 	T(CMP(*(raddr(ds,si)), 0x2B));	// 58723 cmp     byte ptr [si], 2Bh ; '+' ;~ 1E67:09E0
cs=0x1e67;eip=0x0009e3; 	R(JNZ(loc_2d642));	// 58724 jnz     short loc_2D642 ;~ 1E67:09E3
cs=0x1e67;eip=0x0009e5; 	X(INC(word_428a2));	// 58725 inc     word_428A2 ;~ 1E67:09E5
cs=0x1e67;eip=0x0009e9; 	X(MOV(word_428a8, 0));	// 58726 mov     word_428A8, 0 ;~ 1E67:09E9
cs=0x1e67;eip=0x0009ef; 	R(JMP(loc_2d663));	// 58727 jmp     short loc_2D663 ;~ 1E67:09EF
loc_2d642:
	// 8368 
cs=0x1e67;eip=0x0009f2; 	T(CMP(*(raddr(ds,si)), 0x20));	// 58732 cmp     byte ptr [si], 20h ; ' ' ;~ 1E67:09F2
cs=0x1e67;eip=0x0009f5; 	R(JNZ(loc_2d654));	// 58733 jnz     short loc_2D654 ;~ 1E67:09F5
cs=0x1e67;eip=0x0009f7; 	T(CMP(word_428a2, 0));	// 58734 cmp     word_428A2, 0 ;~ 1E67:09F7
cs=0x1e67;eip=0x0009fc; 	R(JNZ(loc_2d663));	// 58735 jnz     short loc_2D663 ;~ 1E67:09FC
cs=0x1e67;eip=0x0009fe; 	X(INC(word_428a8));	// 58736 inc     word_428A8 ;~ 1E67:09FE
cs=0x1e67;eip=0x000a02; 	R(JMP(loc_2d663));	// 58737 jmp     short loc_2D663 ;~ 1E67:0A02
loc_2d654:
	// 8369 
cs=0x1e67;eip=0x000a04; 	X(INC(word_42898));	// 58741 inc     word_42898 ;~ 1E67:0A04
cs=0x1e67;eip=0x000a08; 	R(JMP(loc_2d663));	// 58742 jmp     short loc_2D663 ;~ 1E67:0A08
loc_2d65a:
	// 8370 
cs=0x1e67;eip=0x000a0a; 	T(CMP(*(raddr(ds,si)), 0x2D));	// 58746 cmp     byte ptr [si], 2Dh ; '-' ;~ 1E67:0A0A
cs=0x1e67;eip=0x000a0d; 	R(JNZ(loc_2d630));	// 58747 jnz     short loc_2D630 ;~ 1E67:0A0D
cs=0x1e67;eip=0x000a0f; 	X(INC(word_428a4));	// 58748 inc     word_428A4 ;~ 1E67:0A0F
loc_2d663:
	// 8371 
cs=0x1e67;eip=0x000a13; 	T(INC(si));	// 58752 inc     si ;~ 1E67:0A13
cs=0x1e67;eip=0x000a14; 	T(MOV(al, *(raddr(ds,si))));	// 58753 mov     al, [si] ;~ 1E67:0A14
cs=0x1e67;eip=0x000a16; 	T(CBW);	// 58754 cbw ;~ 1E67:0A16
cs=0x1e67;eip=0x000a17; 	X(PUSH(ax));	// 58755 push    ax ;~ 1E67:0A17
cs=0x1e67;eip=0x000a18; 	X(PUSH(cs));	// 58756 push    cs ;~ 1E67:0A18
cs=0x1e67;eip=0x000a19; 	R(CALL(flagchar,0));	// 58757 call    near ptr flagchar ;~ 1E67:0A19
cs=0x1e67;eip=0x000a1c; 	T(ADD(sp, 2));	// 58758 add     sp, 2 ;~ 1E67:0A1C
cs=0x1e67;eip=0x000a1f; 	T(OR(ax, ax));	// 58759 or      ax, ax ;~ 1E67:0A1F
cs=0x1e67;eip=0x000a21; 	R(JNZ(loc_2d65a));	// 58760 jnz     short loc_2D65A ;~ 1E67:0A21
cs=0x1e67;eip=0x000a23; 	X(PUSH(si));	// 58761 push    si ;~ 1E67:0A23
cs=0x1e67;eip=0x000a24; 	T(MOV(ax, offset(dseg,word_428b8)));	// 58762 mov     ax, offset word_428B8 ;~ 1E67:0A24
cs=0x1e67;eip=0x000a27; 	X(PUSH(ax));	// 58763 push    ax ;~ 1E67:0A27
cs=0x1e67;eip=0x000a28; 	X(PUSH(cs));	// 58764 push    cs ;~ 1E67:0A28
cs=0x1e67;eip=0x000a29; 	R(CALL(getnum,0));	// 58765 call    near ptr getnum ;~ 1E67:0A29
cs=0x1e67;eip=0x000a2c; 	T(ADD(sp, 4));	// 58766 add     sp, 4 ;~ 1E67:0A2C
cs=0x1e67;eip=0x000a2f; 	T(MOV(si, ax));	// 58767 mov     si, ax ;~ 1E67:0A2F
cs=0x1e67;eip=0x000a31; 	T(CMP(word_428b8, 0));	// 58768 cmp     word_428B8, 0 ;~ 1E67:0A31
cs=0x1e67;eip=0x000a36; 	R(JGE(loc_2d694));	// 58769 jge     short loc_2D694 ;~ 1E67:0A36
cs=0x1e67;eip=0x000a38; 	X(INC(word_428a4));	// 58770 inc     word_428A4 ;~ 1E67:0A38
cs=0x1e67;eip=0x000a3c; 	T(MOV(ax, word_428b8));	// 58771 mov     ax, word_428B8 ;~ 1E67:0A3C
cs=0x1e67;eip=0x000a3f; 	T(NEG(ax));	// 58772 neg     ax ;~ 1E67:0A3F
cs=0x1e67;eip=0x000a41; 	X(MOV(word_428b8, ax));	// 58773 mov     word_428B8, ax ;~ 1E67:0A41
loc_2d694:
	// 8372 
cs=0x1e67;eip=0x000a44; 	T(CMP(*(raddr(ds,si)), 0x2E));	// 58776 cmp     byte ptr [si], 2Eh ; '.' ;~ 1E67:0A44
cs=0x1e67;eip=0x000a47; 	R(JNZ(loc_2d6bd));	// 58777 jnz     short loc_2D6BD ;~ 1E67:0A47
cs=0x1e67;eip=0x000a49; 	X(INC(word_428aa));	// 58778 inc     word_428AA ;~ 1E67:0A49
cs=0x1e67;eip=0x000a4d; 	T(INC(si));	// 58779 inc     si ;~ 1E67:0A4D
cs=0x1e67;eip=0x000a4e; 	X(PUSH(si));	// 58780 push    si ;~ 1E67:0A4E
cs=0x1e67;eip=0x000a4f; 	T(MOV(ax, offset(dseg,word_428b2)));	// 58781 mov     ax, offset word_428B2 ;~ 1E67:0A4F
cs=0x1e67;eip=0x000a52; 	X(PUSH(ax));	// 58782 push    ax ;~ 1E67:0A52
cs=0x1e67;eip=0x000a53; 	X(PUSH(cs));	// 58783 push    cs ;~ 1E67:0A53
cs=0x1e67;eip=0x000a54; 	R(CALL(getnum,0));	// 58784 call    near ptr getnum ;~ 1E67:0A54
cs=0x1e67;eip=0x000a57; 	T(ADD(sp, 4));	// 58785 add     sp, 4 ;~ 1E67:0A57
cs=0x1e67;eip=0x000a5a; 	T(MOV(si, ax));	// 58786 mov     si, ax ;~ 1E67:0A5A
cs=0x1e67;eip=0x000a5c; 	T(CMP(word_428b2, 0));	// 58787 cmp     word_428B2, 0 ;~ 1E67:0A5C
cs=0x1e67;eip=0x000a61; 	R(JGE(loc_2d6bd));	// 58788 jge     short loc_2D6BD ;~ 1E67:0A61
cs=0x1e67;eip=0x000a63; 	X(MOV(word_428b2, 1));	// 58789 mov     word_428B2, 1 ;~ 1E67:0A63
cs=0x1e67;eip=0x000a69; 	X(DEC(word_428aa));	// 58790 dec     word_428AA ;~ 1E67:0A69
loc_2d6bd:
	// 8373 
cs=0x1e67;eip=0x000a6d; 	T(MOV(al, *(raddr(ds,si))));	// 58794 mov     al, [si] ;~ 1E67:0A6D
cs=0x1e67;eip=0x000a6f; 	T(CBW);	// 58795 cbw ;~ 1E67:0A6F
cs=0x1e67;eip=0x000a70; 	T(CMP(ax, 0x46));	// 58796 cmp     ax, 46h ; 'F' ;~ 1E67:0A70
cs=0x1e67;eip=0x000a73; 	R(JZ(loc_2d6f8));	// 58797 jz      short loc_2D6F8 ;~ 1E67:0A73
cs=0x1e67;eip=0x000a75; 	T(CMP(ax, 0x4E));	// 58798 cmp     ax, 4Eh ; 'N' ;~ 1E67:0A75
cs=0x1e67;eip=0x000a78; 	R(JZ(loc_2d700));	// 58799 jz      short loc_2D700 ;~ 1E67:0A78
cs=0x1e67;eip=0x000a7a; 	T(CMP(ax, 0x68));	// 58800 cmp     ax, 68h ; 'h' ;~ 1E67:0A7A
cs=0x1e67;eip=0x000a7d; 	R(JZ(loc_2d6f0));	// 58801 jz      short loc_2D6F0 ;~ 1E67:0A7D
cs=0x1e67;eip=0x000a7f; 	T(CMP(ax, 0x6C));	// 58802 cmp     ax, 6Ch ; 'l' ;~ 1E67:0A7F
cs=0x1e67;eip=0x000a82; 	R(JNZ(loc_2d6da));	// 58803 jnz     short loc_2D6DA ;~ 1E67:0A82
cs=0x1e67;eip=0x000a84; 	X(MOV(word_428a0, 2));	// 58804 mov     word_428A0, 2 ;~ 1E67:0A84
loc_2d6da:
	// 8374 
cs=0x1e67;eip=0x000a8a; 	T(CMP(word_428a0, 0));	// 58808 cmp     word_428A0, 0 ;~ 1E67:0A8A
cs=0x1e67;eip=0x000a8f; 	R(JNZ(loc_2d6e6));	// 58809 jnz     short loc_2D6E6 ;~ 1E67:0A8F
cs=0x1e67;eip=0x000a91; 	T(CMP(*(raddr(ds,si)), 0x4C));	// 58810 cmp     byte ptr [si], 4Ch ; 'L' ;~ 1E67:0A91
cs=0x1e67;eip=0x000a94; 	R(JNZ(loc_2d6e7));	// 58811 jnz     short loc_2D6E7 ;~ 1E67:0A94
loc_2d6e6:
	// 8375 
cs=0x1e67;eip=0x000a96; 	T(INC(si));	// 58814 inc     si ;~ 1E67:0A96
loc_2d6e7:
	// 8376 
cs=0x1e67;eip=0x000a97; 	T(CMP(*(raddr(ds,si)), 0));	// 58817 cmp     byte ptr [si], 0 ;~ 1E67:0A97
cs=0x1e67;eip=0x000a9a; 	R(JNZ(loc_2d708));	// 58818 jnz     short loc_2D708 ;~ 1E67:0A9A
cs=0x1e67;eip=0x000a9c; 	R(JMP(loc_2d87f));	// 58819 jmp     loc_2D87F ;~ 1E67:0A9C
loc_2d6f0:
	// 8377 
cs=0x1e67;eip=0x000aa0; 	X(MOV(word_428a0, 1));	// 58824 mov     word_428A0, 1 ;~ 1E67:0AA0
cs=0x1e67;eip=0x000aa6; 	R(JMP(loc_2d6da));	// 58825 jmp     short loc_2D6DA ;~ 1E67:0AA6
loc_2d6f8:
	// 8378 
cs=0x1e67;eip=0x000aa8; 	X(MOV(word_428a0, 0x10));	// 58829 mov     word_428A0, 10h ;~ 1E67:0AA8
cs=0x1e67;eip=0x000aae; 	R(JMP(loc_2d6da));	// 58830 jmp     short loc_2D6DA ;~ 1E67:0AAE
loc_2d700:
	// 8379 
cs=0x1e67;eip=0x000ab0; 	X(MOV(word_428a0, 8));	// 58834 mov     word_428A0, 8 ;~ 1E67:0AB0
cs=0x1e67;eip=0x000ab6; 	R(JMP(loc_2d6da));	// 58835 jmp     short loc_2D6DA ;~ 1E67:0AB6
loc_2d708:
	// 8380 
cs=0x1e67;eip=0x000ab8; 	T(MOV(al, *(raddr(ds,si))));	// 58839 mov     al, [si] ;~ 1E67:0AB8
cs=0x1e67;eip=0x000aba; 	T(CBW);	// 58840 cbw ;~ 1E67:0ABA
cs=0x1e67;eip=0x000abb; 	X(MOV(*(dw*)(raddr(ss,bp+var_164)), ax));	// 58841 mov     [bp+var_164], ax ;~ 1E67:0ABB
cs=0x1e67;eip=0x000abf; 	T(CMP(ax, 0x45));	// 58842 cmp     ax, 45h ; 'E' ;~ 1E67:0ABF
cs=0x1e67;eip=0x000ac2; 	R(JZ(loc_2d71e));	// 58843 jz      short loc_2D71E ;~ 1E67:0AC2
cs=0x1e67;eip=0x000ac4; 	T(CMP(ax, 0x47));	// 58844 cmp     ax, 47h ; 'G' ;~ 1E67:0AC4
cs=0x1e67;eip=0x000ac7; 	R(JZ(loc_2d71e));	// 58845 jz      short loc_2D71E ;~ 1E67:0AC7
cs=0x1e67;eip=0x000ac9; 	T(CMP(ax, 0x58));	// 58846 cmp     ax, 58h ; 'X' ;~ 1E67:0AC9
cs=0x1e67;eip=0x000acc; 	R(JNZ(loc_2d727));	// 58847 jnz     short loc_2D727 ;~ 1E67:0ACC
loc_2d71e:
	// 8381 
cs=0x1e67;eip=0x000ace; 	X(INC(word_4289e));	// 58851 inc     word_4289E ;~ 1E67:0ACE
cs=0x1e67;eip=0x000ad2; 	X(ADD(*(dw*)(raddr(ss,bp+var_164)), 0x20));	// 58852 add     [bp+var_164], 20h ; ' ' ;~ 1E67:0AD2
loc_2d727:
	// 8382 
cs=0x1e67;eip=0x000ad7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_164))));	// 58855 mov     ax, [bp+var_164] ;~ 1E67:0AD7
cs=0x1e67;eip=0x000adb; 	T(SUB(ax, 0x63));	// 58856 sub     ax, 63h ; 'c'   ; switch 22 cases ;~ 1E67:0ADB
cs=0x1e67;eip=0x000ade; 	T(CMP(ax, 0x15));	// 58857 cmp     ax, 15h ;~ 1E67:0ADE
cs=0x1e67;eip=0x000ae1; 	R(JBE(loc_2d736));	// 58858 jbe     short loc_2D736 ;~ 1E67:0AE1
cs=0x1e67;eip=0x000ae3; 	R(JMP(def_2d739));	// 58859 jmp     def_2D739       ; jumptable 0002D739 default case, cases 104,106-109,113,114,116,118,119 ;~ 1E67:0AE3
loc_2d736:
	// 8383 
cs=0x1e67;eip=0x000ae6; 	T(ADD(ax, ax));	// 58863 add     ax, ax ;~ 1E67:0AE6
cs=0x1e67;eip=0x000ae8; 	T(XCHG(ax, bx));	// 58864 xchg    ax, bx ;~ 1E67:0AE8
	cs=seg_offset(seg010);
cs=0x1e67;eip=0x000ae9; __disp=*(dw*)(((db*)&jpt_2d739)+bx);
	R(JMP(__dispatch_call));	// 58865 jmp     cs:jpt_2D739[bx] ; switch jump ;~ 1E67:0AE9
loc_2d73e:
	// 8384 
cs=0x1e67;eip=0x000aee; 	T(MOV(bx, word_428a6));	// 58870 mov     bx, word_428A6  ; jumptable 0002D739 case 110 ;~ 1E67:0AEE
cs=0x1e67;eip=0x000af2; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 58871 mov     bx, [bx] ;~ 1E67:0AF2
cs=0x1e67;eip=0x000af4; 	T(MOV(ax, word_428ae));	// 58872 mov     ax, word_428AE ;~ 1E67:0AF4
cs=0x1e67;eip=0x000af7; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 58873 mov     [bx], ax ;~ 1E67:0AF7
loc_2d749:
	// 8385 
cs=0x1e67;eip=0x000af9; 	X(ADD(word_428a6, 2));	// 58876 add     word_428A6, 2 ;~ 1E67:0AF9
cs=0x1e67;eip=0x000afe; 	R(JMP(loc_2d8c2));	// 58877 jmp     loc_2D8C2 ;~ 1E67:0AFE
loc_2d752:
	// 8386 
cs=0x1e67;eip=0x000b02; 	X(INC(word_428ac));	// 58883 inc     word_428AC      ; jumptable 0002D739 case 117 ;~ 1E67:0B02
loc_2d756:
	// 8387 
cs=0x1e67;eip=0x000b06; 	X(MOV(word_42898, 0));	// 58887 mov     word_42898, 0   ; jumptable 0002D739 cases 100,105 ;~ 1E67:0B06
cs=0x1e67;eip=0x000b0c; 	T(MOV(ax, 0x0A));	// 58888 mov     ax, 0Ah ;~ 1E67:0B0C
loc_2d75f:
	// 8388 
cs=0x1e67;eip=0x000b0f; 	X(PUSH(ax));	// 58892 push    ax ;~ 1E67:0B0F
cs=0x1e67;eip=0x000b10; 	X(PUSH(cs));	// 58893 push    cs ;~ 1E67:0B10
cs=0x1e67;eip=0x000b11; 	R(CALL(iprint,0));	// 58894 call    near ptr iprint ;~ 1E67:0B11
loc_2d764:
	// 8389 
cs=0x1e67;eip=0x000b14; 	T(ADD(sp, 2));	// 58898 add     sp, 2 ;~ 1E67:0B14
cs=0x1e67;eip=0x000b17; 	R(JMP(loc_2d8c2));	// 58899 jmp     loc_2D8C2 ;~ 1E67:0B17
loc_2d76a:
	// 8390 
cs=0x1e67;eip=0x000b1a; 	T(MOV(ax, 8));	// 58904 mov     ax, 8           ; jumptable 0002D739 case 111 ;~ 1E67:0B1A
cs=0x1e67;eip=0x000b1d; 	R(JMP(loc_2d75f));	// 58905 jmp     short loc_2D75F ;~ 1E67:0B1D
loc_2d770:
	// 8391 
cs=0x1e67;eip=0x000b20; 	X(INC(word_4289c));	// 58911 inc     word_4289C      ; jumptable 0002D739 case 112 ;~ 1E67:0B20
cs=0x1e67;eip=0x000b24; 	X(INC(word_4289e));	// 58912 inc     word_4289E ;~ 1E67:0B24
cs=0x1e67;eip=0x000b28; 	T(CMP(word_428aa, 0));	// 58913 cmp     word_428AA, 0 ;~ 1E67:0B28
cs=0x1e67;eip=0x000b2d; 	R(JNZ(loc_2d788));	// 58914 jnz     short loc_2D788 ;~ 1E67:0B2D
cs=0x1e67;eip=0x000b2f; 	X(MOV(word_428b4, 1));	// 58915 mov     word_428B4, 1 ;~ 1E67:0B2F
cs=0x1e67;eip=0x000b35; 	R(JMP(loc_2d78e));	// 58916 jmp     short loc_2D78E ;~ 1E67:0B35
loc_2d788:
	// 8392 
cs=0x1e67;eip=0x000b38; 	X(MOV(word_428b4, 0));	// 58921 mov     word_428B4, 0 ;~ 1E67:0B38
loc_2d78e:
	// 8393 
cs=0x1e67;eip=0x000b3e; 	X(INC(word_428aa));	// 58924 inc     word_428AA ;~ 1E67:0B3E
cs=0x1e67;eip=0x000b42; 	X(MOV(word_428b2, 4));	// 58925 mov     word_428B2, 4 ;~ 1E67:0B42
cs=0x1e67;eip=0x000b48; 	T(CMP(word_428a0, 8));	// 58926 cmp     word_428A0, 8 ;~ 1E67:0B48
cs=0x1e67;eip=0x000b4d; 	R(JNZ(loc_2d7a2));	// 58927 jnz     short loc_2D7A2 ;~ 1E67:0B4D
cs=0x1e67;eip=0x000b4f; 	R(JMP(loc_2d82e));	// 58928 jmp     loc_2D82E       ; jumptable 0002D739 case 120 ;~ 1E67:0B4F
loc_2d7a2:
	// 8394 
cs=0x1e67;eip=0x000b52; 	T(SUB(ax, ax));	// 58932 sub     ax, ax ;~ 1E67:0B52
cs=0x1e67;eip=0x000b54; 	X(MOV(word_428a0, ax));	// 58933 mov     word_428A0, ax ;~ 1E67:0B54
cs=0x1e67;eip=0x000b57; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 58934 mov     [bp+var_4], ax ;~ 1E67:0B57
cs=0x1e67;eip=0x000b5a; 	T(CMP(word_428b8, ax));	// 58935 cmp     word_428B8, ax ;~ 1E67:0B5A
cs=0x1e67;eip=0x000b5e; 	R(JZ(loc_2d7d7));	// 58936 jz      short loc_2D7D7 ;~ 1E67:0B5E
cs=0x1e67;eip=0x000b60; 	T(MOV(ax, word_428b8));	// 58937 mov     ax, word_428B8 ;~ 1E67:0B60
cs=0x1e67;eip=0x000b63; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 58938 mov     [bp+var_4], ax ;~ 1E67:0B63
cs=0x1e67;eip=0x000b66; 	T(CMP(word_428a4, 0));	// 58939 cmp     word_428A4, 0 ;~ 1E67:0B66
cs=0x1e67;eip=0x000b6b; 	R(JZ(loc_2d7c6));	// 58940 jz      short loc_2D7C6 ;~ 1E67:0B6B
cs=0x1e67;eip=0x000b6d; 	X(MOV(word_428b8, 0));	// 58941 mov     word_428B8, 0 ;~ 1E67:0B6D
cs=0x1e67;eip=0x000b73; 	R(JMP(loc_2d7d7));	// 58942 jmp     short loc_2D7D7 ;~ 1E67:0B73
loc_2d7c6:
	// 8395 
cs=0x1e67;eip=0x000b76; 	X(SUB(word_428b8, 5));	// 58947 sub     word_428B8, 5 ;~ 1E67:0B76
cs=0x1e67;eip=0x000b7b; 	T(MOV(ax, word_428b8));	// 58948 mov     ax, word_428B8 ;~ 1E67:0B7B
cs=0x1e67;eip=0x000b7e; 	T(OR(ax, ax));	// 58949 or      ax, ax ;~ 1E67:0B7E
cs=0x1e67;eip=0x000b80; 	R(JGE(loc_2d7d4));	// 58950 jge     short loc_2D7D4 ;~ 1E67:0B80
cs=0x1e67;eip=0x000b82; 	T(SUB(ax, ax));	// 58951 sub     ax, ax ;~ 1E67:0B82
loc_2d7d4:
	// 8396 
cs=0x1e67;eip=0x000b84; 	X(MOV(word_428b8, ax));	// 58954 mov     word_428B8, ax ;~ 1E67:0B84
loc_2d7d7:
	// 8397 
cs=0x1e67;eip=0x000b87; 	X(ADD(word_428a6, 2));	// 58958 add     word_428A6, 2 ;~ 1E67:0B87
cs=0x1e67;eip=0x000b8c; 	T(MOV(ax, 0x10));	// 58959 mov     ax, 10h ;~ 1E67:0B8C
cs=0x1e67;eip=0x000b8f; 	X(PUSH(ax));	// 58960 push    ax ;~ 1E67:0B8F
cs=0x1e67;eip=0x000b90; 	X(PUSH(cs));	// 58961 push    cs ;~ 1E67:0B90
cs=0x1e67;eip=0x000b91; 	R(CALL(iprint,0));	// 58962 call    near ptr iprint ;~ 1E67:0B91
cs=0x1e67;eip=0x000b94; 	T(ADD(sp, 2));	// 58963 add     sp, 2 ;~ 1E67:0B94
cs=0x1e67;eip=0x000b97; 	T(MOV(ax, 0x3A));	// 58964 mov     ax, 3Ah ; ':' ;~ 1E67:0B97
cs=0x1e67;eip=0x000b9a; 	X(PUSH(ax));	// 58965 push    ax ;~ 1E67:0B9A
cs=0x1e67;eip=0x000b9b; 	X(PUSH(cs));	// 58966 push    cs ;~ 1E67:0B9B
cs=0x1e67;eip=0x000b9c; 	R(CALL(_outc,0));	// 58967 call    near ptr _outc ;~ 1E67:0B9C
cs=0x1e67;eip=0x000b9f; 	T(ADD(sp, 2));	// 58968 add     sp, 2 ;~ 1E67:0B9F
cs=0x1e67;eip=0x000ba2; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 58969 cmp     [bp+var_4], 0 ;~ 1E67:0BA2
cs=0x1e67;eip=0x000ba6; 	R(JZ(loc_2d81a));	// 58970 jz      short loc_2D81A ;~ 1E67:0BA6
cs=0x1e67;eip=0x000ba8; 	T(CMP(word_428a4, 0));	// 58971 cmp     word_428A4, 0 ;~ 1E67:0BA8
cs=0x1e67;eip=0x000bad; 	R(JZ(loc_2d814));	// 58972 jz      short loc_2D814 ;~ 1E67:0BAD
cs=0x1e67;eip=0x000baf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 58973 mov     ax, [bp+var_4] ;~ 1E67:0BAF
cs=0x1e67;eip=0x000bb2; 	T(SUB(ax, 5));	// 58974 sub     ax, 5 ;~ 1E67:0BB2
cs=0x1e67;eip=0x000bb5; 	X(MOV(word_428b8, ax));	// 58975 mov     word_428B8, ax ;~ 1E67:0BB5
cs=0x1e67;eip=0x000bb8; 	T(OR(ax, ax));	// 58976 or      ax, ax ;~ 1E67:0BB8
cs=0x1e67;eip=0x000bba; 	R(JGE(loc_2d80e));	// 58977 jge     short loc_2D80E ;~ 1E67:0BBA
cs=0x1e67;eip=0x000bbc; 	T(SUB(ax, ax));	// 58978 sub     ax, ax ;~ 1E67:0BBC
loc_2d80e:
	// 8398 
cs=0x1e67;eip=0x000bbe; 	X(MOV(word_428b8, ax));	// 58981 mov     word_428B8, ax ;~ 1E67:0BBE
cs=0x1e67;eip=0x000bc1; 	R(JMP(loc_2d81a));	// 58982 jmp     short loc_2D81A ;~ 1E67:0BC1
loc_2d814:
	// 8399 
cs=0x1e67;eip=0x000bc4; 	X(MOV(word_428b8, 0));	// 58987 mov     word_428B8, 0 ;~ 1E67:0BC4
loc_2d81a:
	// 8400 
cs=0x1e67;eip=0x000bca; 	X(SUB(word_428a6, 4));	// 58991 sub     word_428A6, 4 ;~ 1E67:0BCA
cs=0x1e67;eip=0x000bcf; 	T(MOV(ax, 0x10));	// 58992 mov     ax, 10h ;~ 1E67:0BCF
cs=0x1e67;eip=0x000bd2; 	X(PUSH(ax));	// 58993 push    ax ;~ 1E67:0BD2
cs=0x1e67;eip=0x000bd3; 	X(PUSH(cs));	// 58994 push    cs ;~ 1E67:0BD3
cs=0x1e67;eip=0x000bd4; 	R(CALL(iprint,0));	// 58995 call    near ptr iprint ;~ 1E67:0BD4
cs=0x1e67;eip=0x000bd7; 	T(ADD(sp, 2));	// 58996 add     sp, 2 ;~ 1E67:0BD7
cs=0x1e67;eip=0x000bda; 	R(JMP(loc_2d749));	// 58997 jmp     loc_2D749 ;~ 1E67:0BDA
loc_2d82e:
	// 8401 
cs=0x1e67;eip=0x000bde; 	T(MOV(ax, 0x10));	// 59004 mov     ax, 10h         ; jumptable 0002D739 case 120 ;~ 1E67:0BDE
cs=0x1e67;eip=0x000be1; 	R(JMP(loc_2d75f));	// 59005 jmp     loc_2D75F ;~ 1E67:0BE1
loc_2d834:
	// 8402 
cs=0x1e67;eip=0x000be4; 	T(SUB(ax, ax));	// 59010 sub     ax, ax          ; jumptable 0002D739 case 115 ;~ 1E67:0BE4
loc_2d836:
	// 8403 
cs=0x1e67;eip=0x000be6; 	X(PUSH(ax));	// 59013 push    ax ;~ 1E67:0BE6
cs=0x1e67;eip=0x000be7; 	X(PUSH(cs));	// 59014 push    cs ;~ 1E67:0BE7
cs=0x1e67;eip=0x000be8; 	R(CALL(sprint,0));	// 59015 call    near ptr sprint ;~ 1E67:0BE8
cs=0x1e67;eip=0x000beb; 	R(JMP(loc_2d764));	// 59016 jmp     loc_2D764 ;~ 1E67:0BEB
loc_2d83e:
	// 8404 
cs=0x1e67;eip=0x000bee; 	T(MOV(ax, 1));	// 59021 mov     ax, 1           ; jumptable 0002D739 case 99 ;~ 1E67:0BEE
cs=0x1e67;eip=0x000bf1; 	R(JMP(loc_2d836));	// 59022 jmp     short loc_2D836 ;~ 1E67:0BF1
loc_2d844:
	// 8405 
cs=0x1e67;eip=0x000bf4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_164))));	// 59028 push    [bp+var_164]    ; jumptable 0002D739 cases 101-103 ;~ 1E67:0BF4
cs=0x1e67;eip=0x000bf8; 	X(PUSH(cs));	// 59029 push    cs ;~ 1E67:0BF8
cs=0x1e67;eip=0x000bf9; 	R(CALL(fprint,0));	// 59030 call    near ptr fprint ;~ 1E67:0BF9
cs=0x1e67;eip=0x000bfc; 	R(JMP(loc_2d764));	// 59032 jmp     loc_2D764 ;~ 1E67:0BFC
def_2d739:
	// 8406 
cs=0x1e67;eip=0x000c00; 	T(CMP(word_428a0, 0));	// 59039 cmp     word_428A0, 0   ; jumptable 0002D739 default case, cases 104,106-109,113,114,116,118,119 ;~ 1E67:0C00
cs=0x1e67;eip=0x000c05; 	R(JZ(loc_2d85a));	// 59040 jz      short loc_2D85A ;~ 1E67:0C05
cs=0x1e67;eip=0x000c07; 	T(MOV(ax, si));	// 59041 mov     ax, si ;~ 1E67:0C07
cs=0x1e67;eip=0x000c09; 	T(DEC(si));	// 59042 dec     si ;~ 1E67:0C09
loc_2d85a:
	// 8407 
cs=0x1e67;eip=0x000c0a; 	T(MOV(di, si));	// 59046 mov     di, si ;~ 1E67:0C0A
loc_2d85c:
	// 8408 
cs=0x1e67;eip=0x000c0c; 	T(INC(di));	// 59049 inc     di ;~ 1E67:0C0C
cs=0x1e67;eip=0x000c0d; 	T(CMP(*(raddr(ds,di)), 0));	// 59050 cmp     byte ptr [di], 0 ;~ 1E67:0C0D
cs=0x1e67;eip=0x000c10; 	R(JZ(loc_2d867));	// 59051 jz      short loc_2D867 ;~ 1E67:0C10
cs=0x1e67;eip=0x000c12; 	T(CMP(*(raddr(ds,di)), 0x25));	// 59052 cmp     byte ptr [di], 25h ; '%' ;~ 1E67:0C12
cs=0x1e67;eip=0x000c15; 	R(JNZ(loc_2d85c));	// 59053 jnz     short loc_2D85C ;~ 1E67:0C15
loc_2d867:
	// 8409 
cs=0x1e67;eip=0x000c17; 	T(MOV(ax, di));	// 59056 mov     ax, di ;~ 1E67:0C17
cs=0x1e67;eip=0x000c19; 	T(SUB(ax, si));	// 59057 sub     ax, si ;~ 1E67:0C19
cs=0x1e67;eip=0x000c1b; 	X(PUSH(ax));	// 59058 push    ax ;~ 1E67:0C1B
cs=0x1e67;eip=0x000c1c; 	X(PUSH(ds));	// 59059 push    ds ;~ 1E67:0C1C
cs=0x1e67;eip=0x000c1d; 	X(PUSH(si));	// 59060 push    si ;~ 1E67:0C1D
cs=0x1e67;eip=0x000c1e; 	X(PUSH(cs));	// 59061 push    cs ;~ 1E67:0C1E
cs=0x1e67;eip=0x000c1f; 	R(CALL(putbuf,0));	// 59062 call    near ptr putbuf ;~ 1E67:0C1F
cs=0x1e67;eip=0x000c22; 	T(ADD(sp, 6));	// 59063 add     sp, 6 ;~ 1E67:0C22
cs=0x1e67;eip=0x000c25; 	T(MOV(si, di));	// 59064 mov     si, di ;~ 1E67:0C25
loc_2d877:
	// 8410 
cs=0x1e67;eip=0x000c27; 	T(CMP(*(raddr(ds,si)), 0));	// 59068 cmp     byte ptr [si], 0 ;~ 1E67:0C27
cs=0x1e67;eip=0x000c2a; 	R(JZ(loc_2d87f));	// 59069 jz      short loc_2D87F ;~ 1E67:0C2A
cs=0x1e67;eip=0x000c2c; 	R(JMP(loc_2d5f0));	// 59070 jmp     loc_2D5F0 ;~ 1E67:0C2C
loc_2d87f:
	// 8411 
cs=0x1e67;eip=0x000c2f; 	T(CMP(word_428ae, 0));	// 59075 cmp     word_428AE, 0 ;~ 1E67:0C2F
cs=0x1e67;eip=0x000c34; 	R(JNZ(loc_2d8e0));	// 59076 jnz     short loc_2D8E0 ;~ 1E67:0C34
cs=0x1e67;eip=0x000c36; 	T(MOV(bx, off_4289a));	// 59077 mov     bx, off_4289A ;~ 1E67:0C36
cs=0x1e67;eip=0x000c3a; 	T(TEST(*(raddr(ds,bx+6)), 0x20));	// 59078 test    byte ptr [bx+6], 20h ;~ 1E67:0C3A
cs=0x1e67;eip=0x000c3e; 	R(JZ(loc_2d8e0));	// 59079 jz      short loc_2D8E0 ;~ 1E67:0C3E
loc_2d890:
	// 8412 
cs=0x1e67;eip=0x000c40; 	T(MOV(ax, 0x0FFFF));	// 59082 mov     ax, 0FFFFh ;~ 1E67:0C40
cs=0x1e67;eip=0x000c43; 	R(JMP(loc_2d8e3));	// 59083 jmp     short loc_2D8E3 ;~ 1E67:0C43
loc_2d8c2:
	// 8413 
cs=0x1e67;eip=0x000c72; 	T(CMP(word_428b0, 0));	// 59112 cmp     word_428B0, 0 ;~ 1E67:0C72
cs=0x1e67;eip=0x000c77; 	R(JZ(loc_2d8dc));	// 59113 jz      short loc_2D8DC ;~ 1E67:0C77
cs=0x1e67;eip=0x000c79; 	T(CMP(word_428ae, 0));	// 59114 cmp     word_428AE, 0 ;~ 1E67:0C79
cs=0x1e67;eip=0x000c7e; 	R(JNZ(loc_2d8e0));	// 59115 jnz     short loc_2D8E0 ;~ 1E67:0C7E
cs=0x1e67;eip=0x000c80; 	T(MOV(bx, off_4289a));	// 59116 mov     bx, off_4289A ;~ 1E67:0C80
cs=0x1e67;eip=0x000c84; 	T(TEST(*(raddr(ds,bx+6)), 0x20));	// 59117 test    byte ptr [bx+6], 20h ;~ 1E67:0C84
cs=0x1e67;eip=0x000c88; 	R(JNZ(loc_2d890));	// 59118 jnz     short loc_2D890 ;~ 1E67:0C88
cs=0x1e67;eip=0x000c8a; 	R(JMP(loc_2d8e0));	// 59119 jmp     short loc_2D8E0 ;~ 1E67:0C8A
loc_2d8dc:
	// 8414 
cs=0x1e67;eip=0x000c8c; 	T(INC(si));	// 59123 inc     si ;~ 1E67:0C8C
cs=0x1e67;eip=0x000c8d; 	R(JMP(loc_2d877));	// 59124 jmp     short loc_2D877 ;~ 1E67:0C8D
loc_2d8e0:
	// 8415 
cs=0x1e67;eip=0x000c90; 	T(MOV(ax, word_428ae));	// 59130 mov     ax, word_428AE ;~ 1E67:0C90
loc_2d8e3:
	// 8416 
cs=0x1e67;eip=0x000c93; 	X(POP(si));	// 59133 pop     si ;~ 1E67:0C93
cs=0x1e67;eip=0x000c94; 	X(POP(di));	// 59134 pop     di ;~ 1E67:0C94
cs=0x1e67;eip=0x000c95; 	T(MOV(sp, bp));	// 59135 mov     sp, bp ;~ 1E67:0C95
cs=0x1e67;eip=0x000c97; 	X(POP(bp));	// 59136 pop     bp ;~ 1E67:0C97
cs=0x1e67;eip=0x000c98; 	R(RETF(0));	// 59137 retf ;~ 1E67:0C98
iprint:
	// 59147 
#undef var_18
#define var_18 -0x18
	// 59150 var_18          = byte ptr -18h ;~ 1E67:0C9A
#undef var_c
#define var_c -0x0C
	// 59151 var_C           = word ptr -0Ch ;~ 1E67:0C9A
#undef var_8
#define var_8 -8
	// 59152 var_8           = word ptr -8 ;~ 1E67:0C9A
#undef var_4
#define var_4 -4
	// 59153 var_4           = dword ptr -4 ;~ 1E67:0C9A
#undef arg_0
#define arg_0 6
	// 59154 arg_0           = word ptr  6 ;~ 1E67:0C9A
ret_1e67_c9a:
	// 8417 
cs=0x1e67;eip=0x000c9a; 	X(PUSH(bp));	// 59156 push    bp ;~ 1E67:0C9A
cs=0x1e67;eip=0x000c9b; 	T(MOV(bp, sp));	// 59157 mov     bp, sp ;~ 1E67:0C9B
cs=0x1e67;eip=0x000c9d; 	T(SUB(sp, 0x18));	// 59158 sub     sp, 18h ;~ 1E67:0C9D
cs=0x1e67;eip=0x000ca0; 	X(PUSH(di));	// 59159 push    di ;~ 1E67:0CA0
cs=0x1e67;eip=0x000ca1; 	X(PUSH(si));	// 59160 push    si              ; int ;~ 1E67:0CA1
cs=0x1e67;eip=0x000ca2; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0A));	// 59161 cmp     [bp+arg_0], 0Ah ;~ 1E67:0CA2
cs=0x1e67;eip=0x000ca6; 	R(JZ(loc_2d8fc));	// 59162 jz      short loc_2D8FC ;~ 1E67:0CA6
cs=0x1e67;eip=0x000ca8; 	X(INC(word_428ac));	// 59163 inc     word_428AC ;~ 1E67:0CA8
loc_2d8fc:
	// 8418 
cs=0x1e67;eip=0x000cac; 	T(CMP(word_428a0, 2));	// 59166 cmp     word_428A0, 2 ;~ 1E67:0CAC
cs=0x1e67;eip=0x000cb1; 	R(JZ(loc_2d90a));	// 59167 jz      short loc_2D90A ;~ 1E67:0CB1
cs=0x1e67;eip=0x000cb3; 	T(CMP(word_428a0, 0x10));	// 59168 cmp     word_428A0, 10h ;~ 1E67:0CB3
cs=0x1e67;eip=0x000cb8; 	R(JNZ(loc_2d920));	// 59169 jnz     short loc_2D920 ;~ 1E67:0CB8
loc_2d90a:
	// 8419 
cs=0x1e67;eip=0x000cba; 	T(MOV(bx, word_428a6));	// 59172 mov     bx, word_428A6 ;~ 1E67:0CBA
cs=0x1e67;eip=0x000cbe; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 59173 mov     ax, [bx] ;~ 1E67:0CBE
cs=0x1e67;eip=0x000cc0; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 59174 mov     dx, [bx+2] ;~ 1E67:0CC0
cs=0x1e67;eip=0x000cc3; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 59175 mov     word ptr [bp+var_4], ax ;~ 1E67:0CC3
cs=0x1e67;eip=0x000cc6; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 59176 mov     word ptr [bp+var_4+2], dx ;~ 1E67:0CC6
cs=0x1e67;eip=0x000cc9; 	X(ADD(word_428a6, 4));	// 59177 add     word_428A6, 4 ;~ 1E67:0CC9
cs=0x1e67;eip=0x000cce; 	R(JMP(loc_2d94a));	// 59178 jmp     short loc_2D94A ;~ 1E67:0CCE
loc_2d920:
	// 8420 
cs=0x1e67;eip=0x000cd0; 	T(CMP(word_428ac, 0));	// 59182 cmp     word_428AC, 0 ;~ 1E67:0CD0
cs=0x1e67;eip=0x000cd5; 	R(JZ(loc_2d938));	// 59183 jz      short loc_2D938 ;~ 1E67:0CD5
cs=0x1e67;eip=0x000cd7; 	T(MOV(bx, word_428a6));	// 59184 mov     bx, word_428A6 ;~ 1E67:0CD7
cs=0x1e67;eip=0x000cdb; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 59185 mov     ax, [bx] ;~ 1E67:0CDB
cs=0x1e67;eip=0x000cdd; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 59186 mov     word ptr [bp+var_4], ax ;~ 1E67:0CDD
cs=0x1e67;eip=0x000ce0; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), 0));	// 59187 mov     word ptr [bp+var_4+2], 0 ;~ 1E67:0CE0
cs=0x1e67;eip=0x000ce5; 	R(JMP(loc_2d945));	// 59188 jmp     short loc_2D945 ;~ 1E67:0CE5
loc_2d938:
	// 8421 
cs=0x1e67;eip=0x000ce8; 	T(MOV(bx, word_428a6));	// 59193 mov     bx, word_428A6 ;~ 1E67:0CE8
cs=0x1e67;eip=0x000cec; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 59194 mov     ax, [bx] ;~ 1E67:0CEC
cs=0x1e67;eip=0x000cee; 	T(CWD);	// 59195 cwd ;~ 1E67:0CEE
cs=0x1e67;eip=0x000cef; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 59196 mov     word ptr [bp+var_4], ax ;~ 1E67:0CEF
cs=0x1e67;eip=0x000cf2; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 59197 mov     word ptr [bp+var_4+2], dx ;~ 1E67:0CF2
loc_2d945:
	// 8422 
cs=0x1e67;eip=0x000cf5; 	X(ADD(word_428a6, 2));	// 59200 add     word_428A6, 2 ;~ 1E67:0CF5
loc_2d94a:
	// 8423 
cs=0x1e67;eip=0x000cfa; 	T(CMP(word_42898, 0));	// 59203 cmp     word_42898, 0 ;~ 1E67:0CFA
cs=0x1e67;eip=0x000cff; 	R(JZ(loc_2d95e));	// 59204 jz      short loc_2D95E ;~ 1E67:0CFF
cs=0x1e67;eip=0x000d01; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 59205 mov     ax, word ptr [bp+var_4] ;~ 1E67:0D01
cs=0x1e67;eip=0x000d04; 	T(OR(ax, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 59206 or      ax, word ptr [bp+var_4+2] ;~ 1E67:0D04
cs=0x1e67;eip=0x000d07; 	R(JZ(loc_2d95e));	// 59207 jz      short loc_2D95E ;~ 1E67:0D07
cs=0x1e67;eip=0x000d09; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 59208 mov     ax, [bp+arg_0] ;~ 1E67:0D09
cs=0x1e67;eip=0x000d0c; 	R(JMP(loc_2d960));	// 59209 jmp     short loc_2D960 ;~ 1E67:0D0C
loc_2d95e:
	// 8424 
cs=0x1e67;eip=0x000d0e; 	T(SUB(ax, ax));	// 59214 sub     ax, ax ;~ 1E67:0D0E
loc_2d960:
	// 8425 
cs=0x1e67;eip=0x000d10; 	X(MOV(word_428ba, ax));	// 59217 mov     word_428BA, ax ;~ 1E67:0D10
cs=0x1e67;eip=0x000d13; 	T(MOV(si, off_428b6));	// 59218 mov     si, off_428B6 ;~ 1E67:0D13
cs=0x1e67;eip=0x000d17; 	T(CMP(word_428ac, 0));	// 59219 cmp     word_428AC, 0 ;~ 1E67:0D17
cs=0x1e67;eip=0x000d1c; 	R(JNZ(loc_2d998));	// 59220 jnz     short loc_2D998 ;~ 1E67:0D1C
cs=0x1e67;eip=0x000d1e; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), 0));	// 59221 cmp     word ptr [bp+var_4+2], 0 ;~ 1E67:0D1E
cs=0x1e67;eip=0x000d22; 	R(JGE(loc_2d998));	// 59222 jge     short loc_2D998 ;~ 1E67:0D22
cs=0x1e67;eip=0x000d24; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0A));	// 59223 cmp     [bp+arg_0], 0Ah ;~ 1E67:0D24
cs=0x1e67;eip=0x000d28; 	R(JNZ(loc_2d991));	// 59224 jnz     short loc_2D991 ;~ 1E67:0D28
cs=0x1e67;eip=0x000d2a; 	X(MOV(*(raddr(ds,si)), 0x2D));	// 59225 mov     byte ptr [si], 2Dh ; '-' ;~ 1E67:0D2A
cs=0x1e67;eip=0x000d2d; 	T(INC(si));	// 59226 inc     si ;~ 1E67:0D2D
cs=0x1e67;eip=0x000d2e; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 59227 mov     ax, word ptr [bp+var_4] ;~ 1E67:0D2E
cs=0x1e67;eip=0x000d31; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 59228 mov     dx, word ptr [bp+var_4+2] ;~ 1E67:0D31
cs=0x1e67;eip=0x000d34; 	T(NEG(ax));	// 59229 neg     ax ;~ 1E67:0D34
cs=0x1e67;eip=0x000d36; 	T(ADC(dx, 0));	// 59230 adc     dx, 0 ;~ 1E67:0D36
cs=0x1e67;eip=0x000d39; 	T(NEG(dx));	// 59231 neg     dx ;~ 1E67:0D39
cs=0x1e67;eip=0x000d3b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 59232 mov     word ptr [bp+var_4], ax ;~ 1E67:0D3B
cs=0x1e67;eip=0x000d3e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 59233 mov     word ptr [bp+var_4+2], dx ;~ 1E67:0D3E
loc_2d991:
	// 8426 
cs=0x1e67;eip=0x000d41; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 1));	// 59236 mov     [bp+var_8], 1 ;~ 1E67:0D41
cs=0x1e67;eip=0x000d46; 	R(JMP(loc_2d99d));	// 59237 jmp     short loc_2D99D ;~ 1E67:0D46
loc_2d998:
	// 8427 
cs=0x1e67;eip=0x000d48; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 59242 mov     [bp+var_8], 0 ;~ 1E67:0D48
loc_2d99d:
	// 8428 
cs=0x1e67;eip=0x000d4d; 	T(ax = bp+var_18);	// 59245 lea     ax, [bp+var_18] ;~ 1E67:0D4D
cs=0x1e67;eip=0x000d50; 	T(MOV(di, ax));	// 59246 mov     di, ax ;~ 1E67:0D50
cs=0x1e67;eip=0x000d52; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 59247 push    [bp+arg_0] ;~ 1E67:0D52
cs=0x1e67;eip=0x000d55; 	X(PUSH(di));	// 59248 push    di              ; char * ;~ 1E67:0D55
cs=0x1e67;eip=0x000d56; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 59249 push    word ptr [bp+var_4+2] ;~ 1E67:0D56
cs=0x1e67;eip=0x000d59; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 59250 push    word ptr [bp+var_4] ; unsigned __int32 ;~ 1E67:0D59
cs=0x1e67;eip=0x000d5c; 	R(CALLF(_ultoa_,0));	// 59251 call    far ptr _ultoa_ ;~ 1E67:0D5C
cs=0x1e67;eip=0x000d61; 	T(ADD(sp, 8));	// 59252 add     sp, 8 ;~ 1E67:0D61
cs=0x1e67;eip=0x000d64; 	T(CMP(word_428aa, 0));	// 59253 cmp     word_428AA, 0 ;~ 1E67:0D64
cs=0x1e67;eip=0x000d69; 	R(JZ(loc_2d9de));	// 59254 jz      short loc_2D9DE ;~ 1E67:0D69
cs=0x1e67;eip=0x000d6b; 	X(PUSH(di));	// 59255 push    di              ; char * ;~ 1E67:0D6B
cs=0x1e67;eip=0x000d6c; 	R(CALLF(_strlen,0));	// 59256 call    _strlen ;~ 1E67:0D6C
cs=0x1e67;eip=0x000d71; 	T(ADD(sp, 2));	// 59257 add     sp, 2 ;~ 1E67:0D71
cs=0x1e67;eip=0x000d74; 	T(MOV(cx, word_428b2));	// 59258 mov     cx, word_428B2 ;~ 1E67:0D74
cs=0x1e67;eip=0x000d78; 	T(SUB(cx, ax));	// 59259 sub     cx, ax ;~ 1E67:0D78
cs=0x1e67;eip=0x000d7a; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), cx));	// 59260 mov     [bp+var_C], cx ;~ 1E67:0D7A
cs=0x1e67;eip=0x000d7d; 	R(JMP(loc_2d9d4));	// 59261 jmp     short loc_2D9D4 ;~ 1E67:0D7D
loc_2d9d0:
	// 8429 
cs=0x1e67;eip=0x000d80; 	X(MOV(*(raddr(ds,si)), 0x30));	// 59266 mov     byte ptr [si], 30h ; '0' ;~ 1E67:0D80
cs=0x1e67;eip=0x000d83; 	T(INC(si));	// 59267 inc     si ;~ 1E67:0D83
loc_2d9d4:
	// 8430 
cs=0x1e67;eip=0x000d84; 	T(MOV(ax, cx));	// 59270 mov     ax, cx ;~ 1E67:0D84
cs=0x1e67;eip=0x000d86; 	T(DEC(cx));	// 59271 dec     cx ;~ 1E67:0D86
cs=0x1e67;eip=0x000d87; 	T(OR(ax, ax));	// 59272 or      ax, ax ;~ 1E67:0D87
cs=0x1e67;eip=0x000d89; 	R(JG(loc_2d9d0));	// 59273 jg      short loc_2D9D0 ;~ 1E67:0D89
cs=0x1e67;eip=0x000d8b; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), cx));	// 59274 mov     [bp+var_C], cx ;~ 1E67:0D8B
loc_2d9de:
	// 8431 
cs=0x1e67;eip=0x000d8e; 	T(MOV(cx, word_4289e));	// 59277 mov     cx, word_4289E ;~ 1E67:0D8E
loc_2d9e2:
	// 8432 
cs=0x1e67;eip=0x000d92; 	T(MOV(al, *(raddr(ds,di))));	// 59280 mov     al, [di] ;~ 1E67:0D92
cs=0x1e67;eip=0x000d94; 	X(MOV(*(raddr(ds,si)), al));	// 59281 mov     [si], al ;~ 1E67:0D94
cs=0x1e67;eip=0x000d96; 	T(OR(cx, cx));	// 59282 or      cx, cx ;~ 1E67:0D96
cs=0x1e67;eip=0x000d98; 	R(JZ(loc_2d9f1));	// 59283 jz      short loc_2D9F1 ;~ 1E67:0D98
cs=0x1e67;eip=0x000d9a; 	T(CMP(al, 0x61));	// 59284 cmp     al, 61h ; 'a' ;~ 1E67:0D9A
cs=0x1e67;eip=0x000d9c; 	R(JL(loc_2d9f1));	// 59285 jl      short loc_2D9F1 ;~ 1E67:0D9C
cs=0x1e67;eip=0x000d9e; 	X(SUB(*(raddr(ds,si)), 0x20));	// 59286 sub     byte ptr [si], 20h ; ' ' ;~ 1E67:0D9E
loc_2d9f1:
	// 8433 
cs=0x1e67;eip=0x000da1; 	T(INC(si));	// 59290 inc     si ;~ 1E67:0DA1
cs=0x1e67;eip=0x000da2; 	T(INC(di));	// 59291 inc     di ;~ 1E67:0DA2
cs=0x1e67;eip=0x000da3; 	T(CMP(*(raddr(ds,di-1)), 0));	// 59292 cmp     byte ptr [di-1], 0 ;~ 1E67:0DA3
cs=0x1e67;eip=0x000da7; 	R(JNZ(loc_2d9e2));	// 59293 jnz     short loc_2D9E2 ;~ 1E67:0DA7
cs=0x1e67;eip=0x000da9; 	T(CMP(word_428ac, 0));	// 59294 cmp     word_428AC, 0 ;~ 1E67:0DA9
cs=0x1e67;eip=0x000dae; 	R(JNZ(loc_2da14));	// 59295 jnz     short loc_2DA14 ;~ 1E67:0DAE
cs=0x1e67;eip=0x000db0; 	T(MOV(ax, word_428a2));	// 59296 mov     ax, word_428A2 ;~ 1E67:0DB0
cs=0x1e67;eip=0x000db3; 	T(OR(ax, word_428a8));	// 59297 or      ax, word_428A8 ;~ 1E67:0DB3
cs=0x1e67;eip=0x000db7; 	R(JZ(loc_2da14));	// 59298 jz      short loc_2DA14 ;~ 1E67:0DB7
cs=0x1e67;eip=0x000db9; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 59299 cmp     [bp+var_8], 0 ;~ 1E67:0DB9
cs=0x1e67;eip=0x000dbd; 	R(JNZ(loc_2da14));	// 59300 jnz     short loc_2DA14 ;~ 1E67:0DBD
cs=0x1e67;eip=0x000dbf; 	T(MOV(ax, 1));	// 59301 mov     ax, 1 ;~ 1E67:0DBF
cs=0x1e67;eip=0x000dc2; 	R(JMP(loc_2da16));	// 59302 jmp     short loc_2DA16 ;~ 1E67:0DC2
loc_2da14:
	// 8434 
cs=0x1e67;eip=0x000dc4; 	T(SUB(ax, ax));	// 59307 sub     ax, ax ;~ 1E67:0DC4
loc_2da16:
	// 8435 
cs=0x1e67;eip=0x000dc6; 	X(PUSH(ax));	// 59310 push    ax ;~ 1E67:0DC6
cs=0x1e67;eip=0x000dc7; 	X(PUSH(cs));	// 59311 push    cs ;~ 1E67:0DC7
cs=0x1e67;eip=0x000dc8; 	R(CALL(_out,0));	// 59312 call    near ptr _out ;~ 1E67:0DC8
cs=0x1e67;eip=0x000dcb; 	T(ADD(sp, 2));	// 59313 add     sp, 2 ;~ 1E67:0DCB
cs=0x1e67;eip=0x000dce; 	X(POP(si));	// 59314 pop     si ;~ 1E67:0DCE
cs=0x1e67;eip=0x000dcf; 	X(POP(di));	// 59315 pop     di ;~ 1E67:0DCF
cs=0x1e67;eip=0x000dd0; 	T(MOV(sp, bp));	// 59316 mov     sp, bp ;~ 1E67:0DD0
cs=0x1e67;eip=0x000dd2; 	X(POP(bp));	// 59317 pop     bp ;~ 1E67:0DD2
cs=0x1e67;eip=0x000dd3; 	R(RETF(0));	// 59318 retf ;~ 1E67:0DD3
sprint:
	// 59326 
#undef var_e
#define var_e -0x0E
	// 59328 var_E           = dword ptr -0Eh ;~ 1E67:0DD4
#undef var_8
#define var_8 -8
	// 59329 var_8           = word ptr -8 ;~ 1E67:0DD4
#undef var_6
#define var_6 -6
	// 59330 var_6           = word ptr -6 ;~ 1E67:0DD4
#undef var_4
#define var_4 -4
	// 59331 var_4           = word ptr -4 ;~ 1E67:0DD4
#undef arg_0
#define arg_0 6
	// 59332 arg_0           = word ptr  6 ;~ 1E67:0DD4
ret_1e67_dd4:
	// 8436 
cs=0x1e67;eip=0x000dd4; 	X(PUSH(bp));	// 59334 push    bp ;~ 1E67:0DD4
cs=0x1e67;eip=0x000dd5; 	T(MOV(bp, sp));	// 59335 mov     bp, sp ;~ 1E67:0DD5
cs=0x1e67;eip=0x000dd7; 	T(SUB(sp, 0x10));	// 59336 sub     sp, 10h ;~ 1E67:0DD7
cs=0x1e67;eip=0x000dda; 	X(PUSH(di));	// 59337 push    di ;~ 1E67:0DDA
cs=0x1e67;eip=0x000ddb; 	X(PUSH(si));	// 59338 push    si ;~ 1E67:0DDB
cs=0x1e67;eip=0x000ddc; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 59339 cmp     [bp+arg_0], 0 ;~ 1E67:0DDC
cs=0x1e67;eip=0x000de0; 	R(JZ(loc_2da46));	// 59340 jz      short loc_2DA46 ;~ 1E67:0DE0
cs=0x1e67;eip=0x000de2; 	T(MOV(si, 1));	// 59341 mov     si, 1 ;~ 1E67:0DE2
cs=0x1e67;eip=0x000de5; 	T(MOV(ax, word_428a6));	// 59342 mov     ax, word_428A6 ;~ 1E67:0DE5
cs=0x1e67;eip=0x000de8; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 59343 mov     [bp+var_8], ax ;~ 1E67:0DE8
cs=0x1e67;eip=0x000deb; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ds));	// 59344 mov     [bp+var_6], ds ;~ 1E67:0DEB
cs=0x1e67;eip=0x000dee; 	X(ADD(word_428a6, 2));	// 59345 add     word_428A6, 2 ;~ 1E67:0DEE
cs=0x1e67;eip=0x000df3; 	R(JMP(loc_2dad7));	// 59346 jmp     loc_2DAD7 ;~ 1E67:0DF3
loc_2da46:
	// 8437 
cs=0x1e67;eip=0x000df6; 	T(CMP(word_428a0, 0x10));	// 59350 cmp     word_428A0, 10h ;~ 1E67:0DF6
cs=0x1e67;eip=0x000dfb; 	R(JNZ(loc_2da64));	// 59351 jnz     short loc_2DA64 ;~ 1E67:0DFB
cs=0x1e67;eip=0x000dfd; 	T(MOV(bx, word_428a6));	// 59352 mov     bx, word_428A6 ;~ 1E67:0DFD
cs=0x1e67;eip=0x000e01; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 59353 mov     ax, [bx] ;~ 1E67:0E01
cs=0x1e67;eip=0x000e03; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 59354 mov     dx, [bx+2] ;~ 1E67:0E03
cs=0x1e67;eip=0x000e06; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 59355 mov     [bp+var_8], ax ;~ 1E67:0E06
cs=0x1e67;eip=0x000e09; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 59356 mov     [bp+var_6], dx ;~ 1E67:0E09
cs=0x1e67;eip=0x000e0c; 	X(ADD(word_428a6, 4));	// 59357 add     word_428A6, 4 ;~ 1E67:0E0C
cs=0x1e67;eip=0x000e11; 	R(JMP(loc_2da78));	// 59358 jmp     short loc_2DA78 ;~ 1E67:0E11
loc_2da64:
	// 8438 
cs=0x1e67;eip=0x000e14; 	T(MOV(bx, word_428a6));	// 59363 mov     bx, word_428A6 ;~ 1E67:0E14
cs=0x1e67;eip=0x000e18; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 59364 mov     ax, [bx] ;~ 1E67:0E18
cs=0x1e67;eip=0x000e1a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 59365 mov     [bp+var_4], ax ;~ 1E67:0E1A
cs=0x1e67;eip=0x000e1d; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 59366 mov     [bp+var_8], ax ;~ 1E67:0E1D
cs=0x1e67;eip=0x000e20; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ds));	// 59367 mov     [bp+var_6], ds ;~ 1E67:0E20
cs=0x1e67;eip=0x000e23; 	X(ADD(word_428a6, 2));	// 59368 add     word_428A6, 2 ;~ 1E67:0E23
loc_2da78:
	// 8439 
cs=0x1e67;eip=0x000e28; 	T(CMP(word_428a0, 0x10));	// 59371 cmp     word_428A0, 10h ;~ 1E67:0E28
cs=0x1e67;eip=0x000e2d; 	R(JNZ(loc_2da8c));	// 59372 jnz     short loc_2DA8C ;~ 1E67:0E2D
cs=0x1e67;eip=0x000e2f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 59373 mov     ax, [bp+var_8] ;~ 1E67:0E2F
cs=0x1e67;eip=0x000e32; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_6))));	// 59374 or      ax, [bp+var_6] ;~ 1E67:0E32
cs=0x1e67;eip=0x000e35; 	R(JNZ(loc_2da9b));	// 59375 jnz     short loc_2DA9B ;~ 1E67:0E35
cs=0x1e67;eip=0x000e37; 	T(MOV(ax, 0x37EA));	// 59376 mov     ax, 37EAh ;~ 1E67:0E37
cs=0x1e67;eip=0x000e3a; 	R(JMP(loc_2da95));	// 59377 jmp     short loc_2DA95 ;~ 1E67:0E3A
loc_2da8c:
	// 8440 
cs=0x1e67;eip=0x000e3c; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 59381 cmp     [bp+var_4], 0 ;~ 1E67:0E3C
cs=0x1e67;eip=0x000e40; 	R(JNZ(loc_2da9b));	// 59382 jnz     short loc_2DA9B ;~ 1E67:0E40
cs=0x1e67;eip=0x000e42; 	T(MOV(ax, 0x37F1));	// 59383 mov     ax, 37F1h ;~ 1E67:0E42
loc_2da95:
	// 8441 
cs=0x1e67;eip=0x000e45; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 59386 mov     [bp+var_8], ax ;~ 1E67:0E45
cs=0x1e67;eip=0x000e48; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ds));	// 59387 mov     [bp+var_6], ds ;~ 1E67:0E48
loc_2da9b:
	// 8442 
cs=0x1e67;eip=0x000e4b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 59391 mov     ax, [bp+var_8] ;~ 1E67:0E4B
cs=0x1e67;eip=0x000e4e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 59392 mov     dx, [bp+var_6] ;~ 1E67:0E4E
cs=0x1e67;eip=0x000e51; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e))), ax));	// 59393 mov     word ptr [bp+var_E], ax ;~ 1E67:0E51
cs=0x1e67;eip=0x000e54; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e +2))), dx));	// 59394 mov     word ptr [bp+var_E+2], dx ;~ 1E67:0E54
cs=0x1e67;eip=0x000e57; 	T(SUB(si, si));	// 59395 sub     si, si ;~ 1E67:0E57
cs=0x1e67;eip=0x000e59; 	T(CMP(word_428aa, si));	// 59396 cmp     word_428AA, si ;~ 1E67:0E59
cs=0x1e67;eip=0x000e5d; 	R(JZ(loc_2dacb));	// 59397 jz      short loc_2DACB ;~ 1E67:0E5D
cs=0x1e67;eip=0x000e5f; 	T(MOV(cx, word_428b2));	// 59398 mov     cx, word_428B2 ;~ 1E67:0E5F
cs=0x1e67;eip=0x000e63; 	R(JMP(loc_2dac3));	// 59399 jmp     short loc_2DAC3 ;~ 1E67:0E63
loc_2dab6:
	// 8443 
cs=0x1e67;eip=0x000e66; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 59404 les     bx, [bp+var_E] ;~ 1E67:0E66
cs=0x1e67;eip=0x000e69; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_e)))));	// 59405 inc     word ptr [bp+var_E] ;~ 1E67:0E69
cs=0x1e67;eip=0x000e6c; 	T(CMP(*(raddr(es,bx)), 0));	// 59406 cmp     byte ptr es:[bx], 0 ;~ 1E67:0E6C
cs=0x1e67;eip=0x000e70; 	R(JZ(loc_2dad7));	// 59407 jz      short loc_2DAD7 ;~ 1E67:0E70
cs=0x1e67;eip=0x000e72; 	T(INC(si));	// 59408 inc     si ;~ 1E67:0E72
loc_2dac3:
	// 8444 
cs=0x1e67;eip=0x000e73; 	T(CMP(cx, si));	// 59411 cmp     cx, si ;~ 1E67:0E73
cs=0x1e67;eip=0x000e75; 	R(JLE(loc_2dad7));	// 59412 jle     short loc_2DAD7 ;~ 1E67:0E75
cs=0x1e67;eip=0x000e77; 	R(JMP(loc_2dab6));	// 59413 jmp     short loc_2DAB6 ;~ 1E67:0E77
loc_2daca:
	// 8445 
cs=0x1e67;eip=0x000e7a; 	T(INC(si));	// 59418 inc     si ;~ 1E67:0E7A
loc_2dacb:
	// 8446 
cs=0x1e67;eip=0x000e7b; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 59421 les     bx, [bp+var_E] ;~ 1E67:0E7B
cs=0x1e67;eip=0x000e7e; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_e)))));	// 59422 inc     word ptr [bp+var_E] ;~ 1E67:0E7E
cs=0x1e67;eip=0x000e81; 	T(CMP(*(raddr(es,bx)), 0));	// 59423 cmp     byte ptr es:[bx], 0 ;~ 1E67:0E81
cs=0x1e67;eip=0x000e85; 	R(JNZ(loc_2daca));	// 59424 jnz     short loc_2DACA ;~ 1E67:0E85
loc_2dad7:
	// 8447 
cs=0x1e67;eip=0x000e87; 	T(MOV(di, word_428b8));	// 59428 mov     di, word_428B8 ;~ 1E67:0E87
cs=0x1e67;eip=0x000e8b; 	T(SUB(di, si));	// 59429 sub     di, si ;~ 1E67:0E8B
cs=0x1e67;eip=0x000e8d; 	T(CMP(word_428a4, 0));	// 59430 cmp     word_428A4, 0 ;~ 1E67:0E8D
cs=0x1e67;eip=0x000e92; 	R(JNZ(loc_2daec));	// 59431 jnz     short loc_2DAEC ;~ 1E67:0E92
cs=0x1e67;eip=0x000e94; 	X(PUSH(di));	// 59432 push    di ;~ 1E67:0E94
cs=0x1e67;eip=0x000e95; 	X(PUSH(cs));	// 59433 push    cs ;~ 1E67:0E95
cs=0x1e67;eip=0x000e96; 	R(CALL(putpad,0));	// 59434 call    near ptr putpad ;~ 1E67:0E96
cs=0x1e67;eip=0x000e99; 	T(ADD(sp, 2));	// 59435 add     sp, 2 ;~ 1E67:0E99
loc_2daec:
	// 8448 
cs=0x1e67;eip=0x000e9c; 	X(PUSH(si));	// 59438 push    si ;~ 1E67:0E9C
cs=0x1e67;eip=0x000e9d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 59439 push    [bp+var_6] ;~ 1E67:0E9D
cs=0x1e67;eip=0x000ea0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 59440 push    [bp+var_8] ;~ 1E67:0EA0
cs=0x1e67;eip=0x000ea3; 	X(PUSH(cs));	// 59441 push    cs ;~ 1E67:0EA3
cs=0x1e67;eip=0x000ea4; 	R(CALL(putbuf,0));	// 59442 call    near ptr putbuf ;~ 1E67:0EA4
cs=0x1e67;eip=0x000ea7; 	T(ADD(sp, 6));	// 59443 add     sp, 6 ;~ 1E67:0EA7
cs=0x1e67;eip=0x000eaa; 	T(CMP(word_428a4, 0));	// 59444 cmp     word_428A4, 0 ;~ 1E67:0EAA
cs=0x1e67;eip=0x000eaf; 	R(JZ(loc_2db09));	// 59445 jz      short loc_2DB09 ;~ 1E67:0EAF
cs=0x1e67;eip=0x000eb1; 	X(PUSH(di));	// 59446 push    di ;~ 1E67:0EB1
cs=0x1e67;eip=0x000eb2; 	X(PUSH(cs));	// 59447 push    cs ;~ 1E67:0EB2
cs=0x1e67;eip=0x000eb3; 	R(CALL(putpad,0));	// 59448 call    near ptr putpad ;~ 1E67:0EB3
cs=0x1e67;eip=0x000eb6; 	T(ADD(sp, 2));	// 59449 add     sp, 2 ;~ 1E67:0EB6
loc_2db09:
	// 8449 
cs=0x1e67;eip=0x000eb9; 	X(POP(si));	// 59452 pop     si ;~ 1E67:0EB9
cs=0x1e67;eip=0x000eba; 	X(POP(di));	// 59453 pop     di ;~ 1E67:0EBA
cs=0x1e67;eip=0x000ebb; 	T(MOV(sp, bp));	// 59454 mov     sp, bp ;~ 1E67:0EBB
cs=0x1e67;eip=0x000ebd; 	X(POP(bp));	// 59455 pop     bp ;~ 1E67:0EBD
cs=0x1e67;eip=0x000ebe; 	R(RETF(0));	// 59456 retf ;~ 1E67:0EBE
fprint:
	// 59466 
#undef var_4
#define var_4 -4
	// 59468 var_4           = byte ptr -4 ;~ 1E67:0EC0
#undef var_2
#define var_2 -2
	// 59469 var_2           = word ptr -2 ;~ 1E67:0EC0
#undef arg_0
#define arg_0 6
	// 59470 arg_0           = word ptr  6 ;~ 1E67:0EC0
ret_1e67_ec0:
	// 8450 
cs=0x1e67;eip=0x000ec0; 	X(PUSH(bp));	// 59472 push    bp ;~ 1E67:0EC0
cs=0x1e67;eip=0x000ec1; 	T(MOV(bp, sp));	// 59473 mov     bp, sp ;~ 1E67:0EC1
cs=0x1e67;eip=0x000ec3; 	T(SUB(sp, 4));	// 59474 sub     sp, 4 ;~ 1E67:0EC3
cs=0x1e67;eip=0x000ec6; 	T(MOV(ax, word_428a6));	// 59475 mov     ax, word_428A6 ;~ 1E67:0EC6
cs=0x1e67;eip=0x000ec9; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 59476 mov     [bp+var_2], ax ;~ 1E67:0EC9
cs=0x1e67;eip=0x000ecc; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x67));	// 59477 cmp     [bp+arg_0], 67h ; 'g' ;~ 1E67:0ECC
cs=0x1e67;eip=0x000ed0; 	R(JZ(loc_2db28));	// 59478 jz      short loc_2DB28 ;~ 1E67:0ED0
cs=0x1e67;eip=0x000ed2; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x47));	// 59479 cmp     [bp+arg_0], 47h ; 'G' ;~ 1E67:0ED2
cs=0x1e67;eip=0x000ed6; 	R(JNZ(loc_2db2c));	// 59480 jnz     short loc_2DB2C ;~ 1E67:0ED6
loc_2db28:
	// 8451 
cs=0x1e67;eip=0x000ed8; 	T(MOV(al, 1));	// 59483 mov     al, 1 ;~ 1E67:0ED8
cs=0x1e67;eip=0x000eda; 	R(JMP(loc_2db2e));	// 59484 jmp     short loc_2DB2E ;~ 1E67:0EDA
loc_2db2c:
	// 8452 
cs=0x1e67;eip=0x000edc; 	T(SUB(al, al));	// 59488 sub     al, al ;~ 1E67:0EDC
loc_2db2e:
	// 8453 
cs=0x1e67;eip=0x000ede; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 59491 mov     [bp+var_4], al ;~ 1E67:0EDE
cs=0x1e67;eip=0x000ee1; 	T(CMP(word_428aa, 0));	// 59492 cmp     word_428AA, 0 ;~ 1E67:0EE1
cs=0x1e67;eip=0x000ee6; 	R(JNZ(loc_2db3e));	// 59493 jnz     short loc_2DB3E ;~ 1E67:0EE6
cs=0x1e67;eip=0x000ee8; 	X(MOV(word_428b2, 6));	// 59494 mov     word_428B2, 6 ;~ 1E67:0EE8
loc_2db3e:
	// 8454 
cs=0x1e67;eip=0x000eee; 	T(CMP(*(raddr(ss,bp+var_4)), 0));	// 59497 cmp     [bp+var_4], 0 ;~ 1E67:0EEE
cs=0x1e67;eip=0x000ef2; 	R(JZ(loc_2db51));	// 59498 jz      short loc_2DB51 ;~ 1E67:0EF2
cs=0x1e67;eip=0x000ef4; 	T(CMP(word_428b2, 0));	// 59499 cmp     word_428B2, 0 ;~ 1E67:0EF4
cs=0x1e67;eip=0x000ef9; 	R(JNZ(loc_2db51));	// 59500 jnz     short loc_2DB51 ;~ 1E67:0EF9
cs=0x1e67;eip=0x000efb; 	X(MOV(word_428b2, 1));	// 59501 mov     word_428B2, 1 ;~ 1E67:0EFB
loc_2db51:
	// 8455 
cs=0x1e67;eip=0x000f01; 	X(PUSH(word_4289e));	// 59505 push    word_4289E ;~ 1E67:0F01
cs=0x1e67;eip=0x000f05; 	X(PUSH(word_428b2));	// 59506 push    word_428B2 ;~ 1E67:0F05
cs=0x1e67;eip=0x000f09; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 59507 push    [bp+arg_0] ;~ 1E67:0F09
cs=0x1e67;eip=0x000f0c; 	X(PUSH(off_428b6));	// 59508 push    off_428B6 ;~ 1E67:0F0C
cs=0x1e67;eip=0x000f10; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 59509 push    [bp+var_2] ;~ 1E67:0F10
cs=0x1e67;eip=0x000f13; 	R(CALLF(__dispatch_call,off_3ef84));	// 59510 call    off_3EF84 ;~ 1E67:0F13
seg010_f17_proc:
	// 59513 
cs=0x1e67;eip=0x000f17; 	T(ADD(sp, 0x0A));	// 59513 add     sp, 0Ah ;~ 1E67:0F17
cs=0x1e67;eip=0x000f1a; 	T(CMP(*(raddr(ss,bp-4)), 0));	// 59514 cmp     byte ptr [bp-4], 0 ;~ 1E67:0F1A
cs=0x1e67;eip=0x000f1e; 	R(JZ(loc_2db82));	// 59515 jz      short loc_2DB82 ;~ 1E67:0F1E
cs=0x1e67;eip=0x000f20; 	T(CMP(word_42898, 0));	// 59516 cmp     word_42898, 0 ;~ 1E67:0F20
cs=0x1e67;eip=0x000f25; 	R(JNZ(loc_2db82));	// 59517 jnz     short loc_2DB82 ;~ 1E67:0F25
cs=0x1e67;eip=0x000f27; 	X(PUSH(off_428b6));	// 59518 push    off_428B6 ;~ 1E67:0F27
cs=0x1e67;eip=0x000f2b; 	R(CALLF(__dispatch_call,off_3ef88));	// 59519 call    off_3EF88 ;~ 1E67:0F2B
cs=0x1e67;eip=0x000f2f; 	T(ADD(sp, 2));	// 59520 add     sp, 2 ;~ 1E67:0F2F
loc_2db82:
	// 8456 
cs=0x1e67;eip=0x000f32; 	T(CMP(word_42898, 0));	// 59524 cmp     word_42898, 0 ;~ 1E67:0F32
cs=0x1e67;eip=0x000f37; 	R(JZ(loc_2db9b));	// 59525 jz      short loc_2DB9B ;~ 1E67:0F37
cs=0x1e67;eip=0x000f39; 	T(CMP(word_428b2, 0));	// 59526 cmp     word_428B2, 0 ;~ 1E67:0F39
cs=0x1e67;eip=0x000f3e; 	R(JNZ(loc_2db9b));	// 59527 jnz     short loc_2DB9B ;~ 1E67:0F3E
cs=0x1e67;eip=0x000f40; 	X(PUSH(off_428b6));	// 59528 push    off_428B6 ;~ 1E67:0F40
cs=0x1e67;eip=0x000f44; 	R(CALLF(__dispatch_call,off_3ef90));	// 59529 call    off_3EF90 ;~ 1E67:0F44
cs=0x1e67;eip=0x000f48; 	T(ADD(sp, 2));	// 59530 add     sp, 2 ;~ 1E67:0F48
loc_2db9b:
	// 8457 
cs=0x1e67;eip=0x000f4b; 	X(ADD(word_428a6, 8));	// 59534 add     word_428A6, 8 ;~ 1E67:0F4B
cs=0x1e67;eip=0x000f50; 	X(MOV(word_428ba, 0));	// 59535 mov     word_428BA, 0 ;~ 1E67:0F50
cs=0x1e67;eip=0x000f56; 	T(MOV(ax, word_428a2));	// 59536 mov     ax, word_428A2 ;~ 1E67:0F56
cs=0x1e67;eip=0x000f59; 	T(OR(ax, word_428a8));	// 59537 or      ax, word_428A8 ;~ 1E67:0F59
cs=0x1e67;eip=0x000f5d; 	R(JZ(loc_2dbc2));	// 59538 jz      short loc_2DBC2 ;~ 1E67:0F5D
cs=0x1e67;eip=0x000f5f; 	X(PUSH(*(dw*)(raddr(ss,bp-2))));	// 59539 push    word ptr [bp-2] ;~ 1E67:0F5F
cs=0x1e67;eip=0x000f62; 	R(CALLF(__dispatch_call,off_3ef94));	// 59540 call    off_3EF94 ;~ 1E67:0F62
cs=0x1e67;eip=0x000f66; 	T(ADD(sp, 2));	// 59541 add     sp, 2 ;~ 1E67:0F66
cs=0x1e67;eip=0x000f69; 	T(OR(ax, ax));	// 59542 or      ax, ax ;~ 1E67:0F69
cs=0x1e67;eip=0x000f6b; 	R(JZ(loc_2dbc2));	// 59543 jz      short loc_2DBC2 ;~ 1E67:0F6B
cs=0x1e67;eip=0x000f6d; 	T(MOV(ax, 1));	// 59544 mov     ax, 1 ;~ 1E67:0F6D
cs=0x1e67;eip=0x000f70; 	R(JMP(loc_2dbc4));	// 59545 jmp     short loc_2DBC4 ;~ 1E67:0F70
loc_2dbc2:
	// 8458 
cs=0x1e67;eip=0x000f72; 	T(SUB(ax, ax));	// 59550 sub     ax, ax ;~ 1E67:0F72
loc_2dbc4:
	// 8459 
cs=0x1e67;eip=0x000f74; 	X(PUSH(ax));	// 59553 push    ax ;~ 1E67:0F74
cs=0x1e67;eip=0x000f75; 	X(PUSH(cs));	// 59554 push    cs ;~ 1E67:0F75
cs=0x1e67;eip=0x000f76; 	R(CALL(_out,0));	// 59555 call    near ptr _out ;~ 1E67:0F76
cs=0x1e67;eip=0x000f79; 	T(MOV(sp, bp));	// 59556 mov     sp, bp ;~ 1E67:0F79
cs=0x1e67;eip=0x000f7b; 	X(POP(bp));	// 59557 pop     bp ;~ 1E67:0F7B
cs=0x1e67;eip=0x000f7c; 	R(RETF(0));	// 59558 retf ;~ 1E67:0F7C
_outc:
	// 59566 
#undef arg_0
#define arg_0 6
	// 59569 arg_0           = dword ptr  6 ;~ 1E67:0F7E
ret_1e67_f7e:
	// 8460 
cs=0x1e67;eip=0x000f7e; 	X(PUSH(bp));	// 59571 push    bp ;~ 1E67:0F7E
cs=0x1e67;eip=0x000f7f; 	T(MOV(bp, sp));	// 59572 mov     bp, sp ;~ 1E67:0F7F
cs=0x1e67;eip=0x000f81; 	X(PUSH(si));	// 59573 push    si              ; FILE * ;~ 1E67:0F81
cs=0x1e67;eip=0x000f82; 	T(CMP(word_428b0, 0));	// 59574 cmp     word_428B0, 0 ;~ 1E67:0F82
cs=0x1e67;eip=0x000f87; 	R(JNZ(loc_2dc0a));	// 59575 jnz     short loc_2DC0A ;~ 1E67:0F87
cs=0x1e67;eip=0x000f89; 	T(MOV(bx, off_4289a));	// 59576 mov     bx, off_4289A ;~ 1E67:0F89
cs=0x1e67;eip=0x000f8d; 	X(DEC(*(dw*)(raddr(ds,bx+2))));	// 59577 dec     word ptr [bx+2] ;~ 1E67:0F8D
cs=0x1e67;eip=0x000f90; 	R(JS(loc_2dbf0));	// 59578 js      short loc_2DBF0 ;~ 1E67:0F90
cs=0x1e67;eip=0x000f92; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0))));	// 59579 mov     al, byte ptr [bp+arg_0] ;~ 1E67:0F92
cs=0x1e67;eip=0x000f95; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 59580 mov     si, [bx] ;~ 1E67:0F95
cs=0x1e67;eip=0x000f97; 	X(INC(*(dw*)(raddr(ds,bx))));	// 59581 inc     word ptr [bx] ;~ 1E67:0F97
cs=0x1e67;eip=0x000f99; 	X(MOV(*(raddr(ds,si)), al));	// 59582 mov     [si], al ;~ 1E67:0F99
cs=0x1e67;eip=0x000f9b; 	T(SUB(ah, ah));	// 59583 sub     ah, ah ;~ 1E67:0F9B
cs=0x1e67;eip=0x000f9d; 	R(JMP(loc_2dbfc));	// 59584 jmp     short loc_2DBFC ;~ 1E67:0F9D
loc_2dbf0:
	// 8461 
cs=0x1e67;eip=0x000fa0; 	X(PUSH(bx));	// 59589 push    bx              ; FILE * ;~ 1E67:0FA0
cs=0x1e67;eip=0x000fa1; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 59590 push    word ptr [bp+arg_0] ; int ;~ 1E67:0FA1
cs=0x1e67;eip=0x000fa4; 	R(CALLF(__flsbuf,0));	// 59591 call    __flsbuf ;~ 1E67:0FA4
cs=0x1e67;eip=0x000fa9; 	T(ADD(sp, 4));	// 59592 add     sp, 4 ;~ 1E67:0FA9
loc_2dbfc:
	// 8462 
cs=0x1e67;eip=0x000fac; 	T(INC(ax));	// 59595 inc     ax ;~ 1E67:0FAC
cs=0x1e67;eip=0x000fad; 	R(JNZ(loc_2dc06));	// 59596 jnz     short loc_2DC06 ;~ 1E67:0FAD
cs=0x1e67;eip=0x000faf; 	X(INC(word_428b0));	// 59597 inc     word_428B0 ;~ 1E67:0FAF
cs=0x1e67;eip=0x000fb3; 	R(JMP(loc_2dc0a));	// 59598 jmp     short loc_2DC0A ;~ 1E67:0FB3
loc_2dc06:
	// 8463 
cs=0x1e67;eip=0x000fb6; 	X(INC(word_428ae));	// 59603 inc     word_428AE ;~ 1E67:0FB6
loc_2dc0a:
	// 8464 
cs=0x1e67;eip=0x000fba; 	X(POP(si));	// 59607 pop     si ;~ 1E67:0FBA
cs=0x1e67;eip=0x000fbb; 	X(POP(bp));	// 59608 pop     bp ;~ 1E67:0FBB
cs=0x1e67;eip=0x000fbc; 	R(RETF(0));	// 59609 retf ;~ 1E67:0FBC
putpad:
	// 59619 
#undef arg_0
#define arg_0 6
	// 59622 arg_0           = word ptr  6 ;~ 1E67:0FBE
ret_1e67_fbe:
	// 8465 
cs=0x1e67;eip=0x000fbe; 	X(PUSH(bp));	// 59624 push    bp ;~ 1E67:0FBE
cs=0x1e67;eip=0x000fbf; 	T(MOV(bp, sp));	// 59625 mov     bp, sp ;~ 1E67:0FBF
cs=0x1e67;eip=0x000fc1; 	T(SUB(sp, 2));	// 59626 sub     sp, 2 ;~ 1E67:0FC1
cs=0x1e67;eip=0x000fc4; 	X(PUSH(di));	// 59627 push    di ;~ 1E67:0FC4
cs=0x1e67;eip=0x000fc5; 	X(PUSH(si));	// 59628 push    si ;~ 1E67:0FC5
cs=0x1e67;eip=0x000fc6; 	T(CMP(word_428b0, 0));	// 59629 cmp     word_428B0, 0 ;~ 1E67:0FC6
cs=0x1e67;eip=0x000fcb; 	R(JNZ(loc_2dc68));	// 59630 jnz     short loc_2DC68 ;~ 1E67:0FCB
cs=0x1e67;eip=0x000fcd; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 59631 mov     si, [bp+arg_0] ;~ 1E67:0FCD
cs=0x1e67;eip=0x000fd0; 	T(OR(si, si));	// 59632 or      si, si ;~ 1E67:0FD0
cs=0x1e67;eip=0x000fd2; 	R(JLE(loc_2dc68));	// 59633 jle     short loc_2DC68 ;~ 1E67:0FD2
cs=0x1e67;eip=0x000fd4; 	R(JMP(loc_2dc3d));	// 59634 jmp     short loc_2DC3D ;~ 1E67:0FD4
loc_2dc26:
	// 8466 
cs=0x1e67;eip=0x000fd6; 	X(PUSH(off_4289a));	// 59638 push    off_4289A       ; FILE * ;~ 1E67:0FD6
cs=0x1e67;eip=0x000fda; 	X(PUSH(word_428bc));	// 59639 push    word_428BC      ; int ;~ 1E67:0FDA
cs=0x1e67;eip=0x000fde; 	R(CALLF(__flsbuf,0));	// 59640 call    __flsbuf ;~ 1E67:0FDE
cs=0x1e67;eip=0x000fe3; 	T(ADD(sp, 4));	// 59641 add     sp, 4 ;~ 1E67:0FE3
loc_2dc36:
	// 8467 
cs=0x1e67;eip=0x000fe6; 	T(INC(ax));	// 59644 inc     ax ;~ 1E67:0FE6
cs=0x1e67;eip=0x000fe7; 	R(JNZ(loc_2dc3d));	// 59645 jnz     short loc_2DC3D ;~ 1E67:0FE7
cs=0x1e67;eip=0x000fe9; 	X(INC(word_428b0));	// 59646 inc     word_428B0 ;~ 1E67:0FE9
loc_2dc3d:
	// 8468 
cs=0x1e67;eip=0x000fed; 	T(MOV(ax, si));	// 59650 mov     ax, si ;~ 1E67:0FED
cs=0x1e67;eip=0x000fef; 	T(DEC(si));	// 59651 dec     si ;~ 1E67:0FEF
cs=0x1e67;eip=0x000ff0; 	T(OR(ax, ax));	// 59652 or      ax, ax ;~ 1E67:0FF0
cs=0x1e67;eip=0x000ff2; 	R(JLE(loc_2dc5a));	// 59653 jle     short loc_2DC5A ;~ 1E67:0FF2
cs=0x1e67;eip=0x000ff4; 	T(MOV(bx, off_4289a));	// 59654 mov     bx, off_4289A ;~ 1E67:0FF4
cs=0x1e67;eip=0x000ff8; 	X(DEC(*(dw*)(raddr(ds,bx+2))));	// 59655 dec     word ptr [bx+2] ;~ 1E67:0FF8
cs=0x1e67;eip=0x000ffb; 	R(JS(loc_2dc26));	// 59656 js      short loc_2DC26 ;~ 1E67:0FFB
cs=0x1e67;eip=0x000ffd; 	T(MOV(al, *(db*)(((db*)&word_428bc))));	// 59657 mov     al, byte ptr word_428BC ;~ 1E67:0FFD
cs=0x1e67;eip=0x001000; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 59658 mov     di, [bx] ;~ 1E67:1000
cs=0x1e67;eip=0x001002; 	X(INC(*(dw*)(raddr(ds,bx))));	// 59659 inc     word ptr [bx] ;~ 1E67:1002
cs=0x1e67;eip=0x001004; 	X(MOV(*(raddr(ds,di)), al));	// 59660 mov     [di], al ;~ 1E67:1004
cs=0x1e67;eip=0x001006; 	T(SUB(ah, ah));	// 59661 sub     ah, ah ;~ 1E67:1006
cs=0x1e67;eip=0x001008; 	R(JMP(loc_2dc36));	// 59662 jmp     short loc_2DC36 ;~ 1E67:1008
loc_2dc5a:
	// 8469 
cs=0x1e67;eip=0x00100a; 	T(CMP(word_428b0, 0));	// 59666 cmp     word_428B0, 0 ;~ 1E67:100A
cs=0x1e67;eip=0x00100f; 	R(JNZ(loc_2dc68));	// 59667 jnz     short loc_2DC68 ;~ 1E67:100F
cs=0x1e67;eip=0x001011; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 59668 mov     ax, [bp+arg_0] ;~ 1E67:1011
cs=0x1e67;eip=0x001014; 	X(ADD(word_428ae, ax));	// 59669 add     word_428AE, ax ;~ 1E67:1014
loc_2dc68:
	// 8470 
cs=0x1e67;eip=0x001018; 	X(POP(si));	// 59673 pop     si ;~ 1E67:1018
cs=0x1e67;eip=0x001019; 	X(POP(di));	// 59674 pop     di ;~ 1E67:1019
cs=0x1e67;eip=0x00101a; 	T(MOV(sp, bp));	// 59675 mov     sp, bp ;~ 1E67:101A
cs=0x1e67;eip=0x00101c; 	X(POP(bp));	// 59676 pop     bp ;~ 1E67:101C
cs=0x1e67;eip=0x00101d; 	R(RETF(0));	// 59677 retf ;~ 1E67:101D
putbuf:
	// 59685 
#undef arg_0
#define arg_0 6
	// 59688 arg_0           = dword ptr  6 ;~ 1E67:101E
#undef arg_4
#define arg_4 0x0A
	// 59689 arg_4           = word ptr  0Ah ;~ 1E67:101E
ret_1e67_101e:
	// 8471 
cs=0x1e67;eip=0x00101e; 	X(PUSH(bp));	// 59691 push    bp ;~ 1E67:101E
cs=0x1e67;eip=0x00101f; 	T(MOV(bp, sp));	// 59692 mov     bp, sp ;~ 1E67:101F
cs=0x1e67;eip=0x001021; 	T(SUB(sp, 2));	// 59693 sub     sp, 2 ;~ 1E67:1021
cs=0x1e67;eip=0x001024; 	X(PUSH(di));	// 59694 push    di ;~ 1E67:1024
cs=0x1e67;eip=0x001025; 	X(PUSH(si));	// 59695 push    si ;~ 1E67:1025
cs=0x1e67;eip=0x001026; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 59696 mov     si, [bp+arg_4] ;~ 1E67:1026
cs=0x1e67;eip=0x001029; 	T(CMP(word_428b0, 0));	// 59697 cmp     word_428B0, 0 ;~ 1E67:1029
cs=0x1e67;eip=0x00102e; 	R(JNZ(loc_2dcd2));	// 59698 jnz     short loc_2DCD2 ;~ 1E67:102E
cs=0x1e67;eip=0x001030; 	R(JMP(loc_2dca0));	// 59699 jmp     short loc_2DCA0 ;~ 1E67:1030
loc_2dc82:
	// 8472 
cs=0x1e67;eip=0x001032; 	X(PUSH(off_4289a));	// 59703 push    off_4289A       ; FILE * ;~ 1E67:1032
cs=0x1e67;eip=0x001036; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 59704 les     bx, [bp+arg_0] ;~ 1E67:1036
cs=0x1e67;eip=0x001039; 	T(MOV(al, *(raddr(es,bx))));	// 59705 mov     al, es:[bx] ;~ 1E67:1039
cs=0x1e67;eip=0x00103c; 	T(CBW);	// 59706 cbw ;~ 1E67:103C
cs=0x1e67;eip=0x00103d; 	X(PUSH(ax));	// 59707 push    ax              ; int ;~ 1E67:103D
cs=0x1e67;eip=0x00103e; 	R(CALLF(__flsbuf,0));	// 59708 call    __flsbuf ;~ 1E67:103E
cs=0x1e67;eip=0x001043; 	T(ADD(sp, 4));	// 59709 add     sp, 4 ;~ 1E67:1043
loc_2dc96:
	// 8473 
cs=0x1e67;eip=0x001046; 	T(INC(ax));	// 59712 inc     ax ;~ 1E67:1046
cs=0x1e67;eip=0x001047; 	R(JNZ(loc_2dc9d));	// 59713 jnz     short loc_2DC9D ;~ 1E67:1047
cs=0x1e67;eip=0x001049; 	X(INC(word_428b0));	// 59714 inc     word_428B0 ;~ 1E67:1049
loc_2dc9d:
	// 8474 
cs=0x1e67;eip=0x00104d; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 59717 inc     word ptr [bp+arg_0] ;~ 1E67:104D
loc_2dca0:
	// 8475 
cs=0x1e67;eip=0x001050; 	T(MOV(ax, si));	// 59720 mov     ax, si ;~ 1E67:1050
cs=0x1e67;eip=0x001052; 	T(DEC(si));	// 59721 dec     si ;~ 1E67:1052
cs=0x1e67;eip=0x001053; 	T(OR(ax, ax));	// 59722 or      ax, ax ;~ 1E67:1053
cs=0x1e67;eip=0x001055; 	R(JZ(loc_2dcc4));	// 59723 jz      short loc_2DCC4 ;~ 1E67:1055
cs=0x1e67;eip=0x001057; 	T(MOV(bx, off_4289a));	// 59724 mov     bx, off_4289A ;~ 1E67:1057
cs=0x1e67;eip=0x00105b; 	X(DEC(*(dw*)(raddr(ds,bx+2))));	// 59725 dec     word ptr [bx+2] ;~ 1E67:105B
cs=0x1e67;eip=0x00105e; 	R(JS(loc_2dc82));	// 59726 js      short loc_2DC82 ;~ 1E67:105E
cs=0x1e67;eip=0x001060; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 59727 les     bx, [bp+arg_0] ;~ 1E67:1060
cs=0x1e67;eip=0x001063; 	T(MOV(al, *(raddr(es,bx))));	// 59728 mov     al, es:[bx] ;~ 1E67:1063
cs=0x1e67;eip=0x001066; 	T(MOV(bx, off_4289a));	// 59729 mov     bx, off_4289A ;~ 1E67:1066
cs=0x1e67;eip=0x00106a; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 59730 mov     di, [bx] ;~ 1E67:106A
cs=0x1e67;eip=0x00106c; 	X(INC(*(dw*)(raddr(ds,bx))));	// 59731 inc     word ptr [bx] ;~ 1E67:106C
cs=0x1e67;eip=0x00106e; 	X(MOV(*(raddr(ds,di)), al));	// 59732 mov     [di], al ;~ 1E67:106E
cs=0x1e67;eip=0x001070; 	T(SUB(ah, ah));	// 59733 sub     ah, ah ;~ 1E67:1070
cs=0x1e67;eip=0x001072; 	R(JMP(loc_2dc96));	// 59734 jmp     short loc_2DC96 ;~ 1E67:1072
loc_2dcc4:
	// 8476 
cs=0x1e67;eip=0x001074; 	T(CMP(word_428b0, 0));	// 59738 cmp     word_428B0, 0 ;~ 1E67:1074
cs=0x1e67;eip=0x001079; 	R(JNZ(loc_2dcd2));	// 59739 jnz     short loc_2DCD2 ;~ 1E67:1079
cs=0x1e67;eip=0x00107b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 59740 mov     ax, [bp+arg_4] ;~ 1E67:107B
cs=0x1e67;eip=0x00107e; 	X(ADD(word_428ae, ax));	// 59741 add     word_428AE, ax ;~ 1E67:107E
loc_2dcd2:
	// 8477 
cs=0x1e67;eip=0x001082; 	X(POP(si));	// 59745 pop     si ;~ 1E67:1082
cs=0x1e67;eip=0x001083; 	X(POP(di));	// 59746 pop     di ;~ 1E67:1083
cs=0x1e67;eip=0x001084; 	T(MOV(sp, bp));	// 59747 mov     sp, bp ;~ 1E67:1084
cs=0x1e67;eip=0x001086; 	X(POP(bp));	// 59748 pop     bp ;~ 1E67:1086
cs=0x1e67;eip=0x001087; 	R(RETF(0));	// 59749 retf ;~ 1E67:1087
_out:
	// 59757 
#undef var_8
#define var_8 -8
	// 59760 var_8           = word ptr -8 ;~ 1E67:1088
#undef var_6
#define var_6 -6
	// 59761 var_6           = word ptr -6 ;~ 1E67:1088
#undef var_4
#define var_4 -4
	// 59762 var_4           = word ptr -4 ;~ 1E67:1088
#undef arg_0
#define arg_0 6
	// 59763 arg_0           = word ptr  6 ;~ 1E67:1088
ret_1e67_1088:
	// 8478 
cs=0x1e67;eip=0x001088; 	X(PUSH(bp));	// 59765 push    bp ;~ 1E67:1088
cs=0x1e67;eip=0x001089; 	T(MOV(bp, sp));	// 59766 mov     bp, sp ;~ 1E67:1089
cs=0x1e67;eip=0x00108b; 	T(SUB(sp, 0x0A));	// 59767 sub     sp, 0Ah ;~ 1E67:108B
cs=0x1e67;eip=0x00108e; 	X(PUSH(di));	// 59768 push    di ;~ 1E67:108E
cs=0x1e67;eip=0x00108f; 	X(PUSH(si));	// 59769 push    si ;~ 1E67:108F
cs=0x1e67;eip=0x001090; 	T(MOV(si, off_428b6));	// 59770 mov     si, off_428B6 ;~ 1E67:1090
cs=0x1e67;eip=0x001094; 	T(SUB(ax, ax));	// 59771 sub     ax, ax ;~ 1E67:1094
cs=0x1e67;eip=0x001096; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 59772 mov     [bp+var_4], ax ;~ 1E67:1096
cs=0x1e67;eip=0x001099; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 59773 mov     [bp+var_6], ax ;~ 1E67:1099
cs=0x1e67;eip=0x00109c; 	T(CMP(word_428bc, 0x30));	// 59774 cmp     word_428BC, 30h ; '0' ;~ 1E67:109C
cs=0x1e67;eip=0x0010a1; 	R(JNZ(loc_2dd0b));	// 59775 jnz     short loc_2DD0B ;~ 1E67:10A1
cs=0x1e67;eip=0x0010a3; 	T(CMP(word_428aa, ax));	// 59776 cmp     word_428AA, ax ;~ 1E67:10A3
cs=0x1e67;eip=0x0010a7; 	R(JZ(loc_2dd0b));	// 59777 jz      short loc_2DD0B ;~ 1E67:10A7
cs=0x1e67;eip=0x0010a9; 	T(CMP(word_4289c, ax));	// 59778 cmp     word_4289C, ax ;~ 1E67:10A9
cs=0x1e67;eip=0x0010ad; 	R(JZ(loc_2dd05));	// 59779 jz      short loc_2DD05 ;~ 1E67:10AD
cs=0x1e67;eip=0x0010af; 	T(CMP(word_428b4, ax));	// 59780 cmp     word_428B4, ax ;~ 1E67:10AF
cs=0x1e67;eip=0x0010b3; 	R(JNZ(loc_2dd0b));	// 59781 jnz     short loc_2DD0B ;~ 1E67:10B3
loc_2dd05:
	// 8479 
cs=0x1e67;eip=0x0010b5; 	X(MOV(word_428bc, 0x20));	// 59784 mov     word_428BC, 20h ; ' ' ;~ 1E67:10B5
loc_2dd0b:
	// 8480 
cs=0x1e67;eip=0x0010bb; 	T(MOV(di, word_428b8));	// 59788 mov     di, word_428B8 ;~ 1E67:10BB
cs=0x1e67;eip=0x0010bf; 	X(PUSH(si));	// 59789 push    si              ; char * ;~ 1E67:10BF
cs=0x1e67;eip=0x0010c0; 	R(CALLF(_strlen,0));	// 59790 call    _strlen ;~ 1E67:10C0
cs=0x1e67;eip=0x0010c5; 	T(ADD(sp, 2));	// 59791 add     sp, 2 ;~ 1E67:10C5
cs=0x1e67;eip=0x0010c8; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 59792 mov     [bp+var_8], ax ;~ 1E67:10C8
cs=0x1e67;eip=0x0010cb; 	T(SUB(di, ax));	// 59793 sub     di, ax ;~ 1E67:10CB
cs=0x1e67;eip=0x0010cd; 	T(SUB(di, *(dw*)(raddr(ss,bp+arg_0))));	// 59794 sub     di, [bp+arg_0] ;~ 1E67:10CD
cs=0x1e67;eip=0x0010d0; 	T(CMP(word_428a4, 0));	// 59795 cmp     word_428A4, 0 ;~ 1E67:10D0
cs=0x1e67;eip=0x0010d5; 	R(JNZ(loc_2dd40));	// 59796 jnz     short loc_2DD40 ;~ 1E67:10D5
cs=0x1e67;eip=0x0010d7; 	T(CMP(*(raddr(ds,si)), 0x2D));	// 59797 cmp     byte ptr [si], 2Dh ; '-' ;~ 1E67:10D7
cs=0x1e67;eip=0x0010da; 	R(JNZ(loc_2dd40));	// 59798 jnz     short loc_2DD40 ;~ 1E67:10DA
cs=0x1e67;eip=0x0010dc; 	T(CMP(word_428bc, 0x30));	// 59799 cmp     word_428BC, 30h ; '0' ;~ 1E67:10DC
cs=0x1e67;eip=0x0010e1; 	R(JNZ(loc_2dd40));	// 59800 jnz     short loc_2DD40 ;~ 1E67:10E1
cs=0x1e67;eip=0x0010e3; 	T(LODSB);	// 59801 lodsb ;~ 1E67:10E3
cs=0x1e67;eip=0x0010e4; 	T(CBW);	// 59802 cbw ;~ 1E67:10E4
cs=0x1e67;eip=0x0010e5; 	X(PUSH(ax));	// 59803 push    ax ;~ 1E67:10E5
cs=0x1e67;eip=0x0010e6; 	X(PUSH(cs));	// 59804 push    cs ;~ 1E67:10E6
cs=0x1e67;eip=0x0010e7; 	R(CALL(_outc,0));	// 59805 call    near ptr _outc ;~ 1E67:10E7
cs=0x1e67;eip=0x0010ea; 	T(ADD(sp, 2));	// 59806 add     sp, 2 ;~ 1E67:10EA
cs=0x1e67;eip=0x0010ed; 	X(DEC(*(dw*)(raddr(ss,bp+var_8))));	// 59807 dec     [bp+var_8] ;~ 1E67:10ED
loc_2dd40:
	// 8481 
cs=0x1e67;eip=0x0010f0; 	T(CMP(word_428bc, 0x30));	// 59811 cmp     word_428BC, 30h ; '0' ;~ 1E67:10F0
cs=0x1e67;eip=0x0010f5; 	R(JZ(loc_2dd52));	// 59812 jz      short loc_2DD52 ;~ 1E67:10F5
cs=0x1e67;eip=0x0010f7; 	T(OR(di, di));	// 59813 or      di, di ;~ 1E67:10F7
cs=0x1e67;eip=0x0010f9; 	R(JLE(loc_2dd52));	// 59814 jle     short loc_2DD52 ;~ 1E67:10F9
cs=0x1e67;eip=0x0010fb; 	T(CMP(word_428a4, 0));	// 59815 cmp     word_428A4, 0 ;~ 1E67:10FB
cs=0x1e67;eip=0x001100; 	R(JZ(loc_2dd6d));	// 59816 jz      short loc_2DD6D ;~ 1E67:1100
loc_2dd52:
	// 8482 
cs=0x1e67;eip=0x001102; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 59820 cmp     [bp+arg_0], 0 ;~ 1E67:1102
cs=0x1e67;eip=0x001106; 	R(JZ(loc_2dd5f));	// 59821 jz      short loc_2DD5F ;~ 1E67:1106
cs=0x1e67;eip=0x001108; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 59822 inc     [bp+var_6] ;~ 1E67:1108
cs=0x1e67;eip=0x00110b; 	X(PUSH(cs));	// 59823 push    cs ;~ 1E67:110B
cs=0x1e67;eip=0x00110c; 	R(CALL(putsign,0));	// 59824 call    near ptr putsign ;~ 1E67:110C
loc_2dd5f:
	// 8483 
cs=0x1e67;eip=0x00110f; 	T(CMP(word_428ba, 0));	// 59827 cmp     word_428BA, 0 ;~ 1E67:110F
cs=0x1e67;eip=0x001114; 	R(JZ(loc_2dd6d));	// 59828 jz      short loc_2DD6D ;~ 1E67:1114
cs=0x1e67;eip=0x001116; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 59829 inc     [bp+var_4] ;~ 1E67:1116
cs=0x1e67;eip=0x001119; 	X(PUSH(cs));	// 59830 push    cs ;~ 1E67:1119
cs=0x1e67;eip=0x00111a; 	R(CALL(putprefix,0));	// 59831 call    near ptr putprefix ;~ 1E67:111A
loc_2dd6d:
	// 8484 
cs=0x1e67;eip=0x00111d; 	T(CMP(word_428a4, 0));	// 59835 cmp     word_428A4, 0 ;~ 1E67:111D
cs=0x1e67;eip=0x001122; 	R(JNZ(loc_2dd9d));	// 59836 jnz     short loc_2DD9D ;~ 1E67:1122
cs=0x1e67;eip=0x001124; 	X(PUSH(di));	// 59837 push    di ;~ 1E67:1124
cs=0x1e67;eip=0x001125; 	X(PUSH(cs));	// 59838 push    cs ;~ 1E67:1125
cs=0x1e67;eip=0x001126; 	R(CALL(putpad,0));	// 59839 call    near ptr putpad ;~ 1E67:1126
cs=0x1e67;eip=0x001129; 	T(ADD(sp, 2));	// 59840 add     sp, 2 ;~ 1E67:1129
cs=0x1e67;eip=0x00112c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 59841 cmp     [bp+arg_0], 0 ;~ 1E67:112C
cs=0x1e67;eip=0x001130; 	R(JZ(loc_2dd8c));	// 59842 jz      short loc_2DD8C ;~ 1E67:1130
cs=0x1e67;eip=0x001132; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0));	// 59843 cmp     [bp+var_6], 0 ;~ 1E67:1132
cs=0x1e67;eip=0x001136; 	R(JNZ(loc_2dd8c));	// 59844 jnz     short loc_2DD8C ;~ 1E67:1136
cs=0x1e67;eip=0x001138; 	X(PUSH(cs));	// 59845 push    cs ;~ 1E67:1138
cs=0x1e67;eip=0x001139; 	R(CALL(putsign,0));	// 59846 call    near ptr putsign ;~ 1E67:1139
loc_2dd8c:
	// 8485 
cs=0x1e67;eip=0x00113c; 	T(CMP(word_428ba, 0));	// 59850 cmp     word_428BA, 0 ;~ 1E67:113C
cs=0x1e67;eip=0x001141; 	R(JZ(loc_2dd9d));	// 59851 jz      short loc_2DD9D ;~ 1E67:1141
cs=0x1e67;eip=0x001143; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 59852 cmp     [bp+var_4], 0 ;~ 1E67:1143
cs=0x1e67;eip=0x001147; 	R(JNZ(loc_2dd9d));	// 59853 jnz     short loc_2DD9D ;~ 1E67:1147
cs=0x1e67;eip=0x001149; 	X(PUSH(cs));	// 59854 push    cs ;~ 1E67:1149
cs=0x1e67;eip=0x00114a; 	R(CALL(putprefix,0));	// 59855 call    near ptr putprefix ;~ 1E67:114A
loc_2dd9d:
	// 8486 
cs=0x1e67;eip=0x00114d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 59859 push    [bp+var_8] ;~ 1E67:114D
cs=0x1e67;eip=0x001150; 	X(PUSH(ds));	// 59860 push    ds ;~ 1E67:1150
cs=0x1e67;eip=0x001151; 	X(PUSH(si));	// 59861 push    si ;~ 1E67:1151
cs=0x1e67;eip=0x001152; 	X(PUSH(cs));	// 59862 push    cs ;~ 1E67:1152
cs=0x1e67;eip=0x001153; 	R(CALL(putbuf,0));	// 59863 call    near ptr putbuf ;~ 1E67:1153
cs=0x1e67;eip=0x001156; 	T(ADD(sp, 6));	// 59864 add     sp, 6 ;~ 1E67:1156
cs=0x1e67;eip=0x001159; 	T(CMP(word_428a4, 0));	// 59865 cmp     word_428A4, 0 ;~ 1E67:1159
cs=0x1e67;eip=0x00115e; 	R(JZ(loc_2ddbe));	// 59866 jz      short loc_2DDBE ;~ 1E67:115E
cs=0x1e67;eip=0x001160; 	X(MOV(word_428bc, 0x20));	// 59867 mov     word_428BC, 20h ; ' ' ;~ 1E67:1160
cs=0x1e67;eip=0x001166; 	X(PUSH(di));	// 59868 push    di ;~ 1E67:1166
cs=0x1e67;eip=0x001167; 	X(PUSH(cs));	// 59869 push    cs ;~ 1E67:1167
cs=0x1e67;eip=0x001168; 	R(CALL(putpad,0));	// 59870 call    near ptr putpad ;~ 1E67:1168
cs=0x1e67;eip=0x00116b; 	T(ADD(sp, 2));	// 59871 add     sp, 2 ;~ 1E67:116B
loc_2ddbe:
	// 8487 
cs=0x1e67;eip=0x00116e; 	X(POP(si));	// 59874 pop     si ;~ 1E67:116E
cs=0x1e67;eip=0x00116f; 	X(POP(di));	// 59875 pop     di ;~ 1E67:116F
cs=0x1e67;eip=0x001170; 	T(MOV(sp, bp));	// 59876 mov     sp, bp ;~ 1E67:1170
cs=0x1e67;eip=0x001172; 	X(POP(bp));	// 59877 pop     bp ;~ 1E67:1172
cs=0x1e67;eip=0x001173; 	R(RETF(0));	// 59878 retf ;~ 1E67:1173
putsign:
	// 59886 
cs=0x1e67;eip=0x001174; 	T(CMP(word_428a2, 0));	// 59888 cmp     word_428A2, 0 ;~ 1E67:1174
ret_1e67_1179:
	// 8488 
cs=0x1e67;eip=0x001179; 	R(JZ(loc_2ddd0));	// 59889 jz      short loc_2DDD0 ;~ 1E67:1179
cs=0x1e67;eip=0x00117b; 	T(MOV(ax, 0x2B));	// 59890 mov     ax, 2Bh ; '+' ;~ 1E67:117B
cs=0x1e67;eip=0x00117e; 	R(JMP(loc_2ddd3));	// 59891 jmp     short loc_2DDD3 ;~ 1E67:117E
loc_2ddd0:
	// 8489 
cs=0x1e67;eip=0x001180; 	T(MOV(ax, 0x20));	// 59895 mov     ax, 20h ; ' ' ;~ 1E67:1180
loc_2ddd3:
	// 8490 
cs=0x1e67;eip=0x001183; 	X(PUSH(ax));	// 59898 push    ax ;~ 1E67:1183
cs=0x1e67;eip=0x001184; 	X(PUSH(cs));	// 59899 push    cs ;~ 1E67:1184
cs=0x1e67;eip=0x001185; 	R(CALL(_outc,0));	// 59900 call    near ptr _outc ;~ 1E67:1185
cs=0x1e67;eip=0x001188; 	T(ADD(sp, 2));	// 59901 add     sp, 2 ;~ 1E67:1188
cs=0x1e67;eip=0x00118b; 	R(RETF(0));	// 59902 retf ;~ 1E67:118B
putprefix:
	// 59910 
cs=0x1e67;eip=0x00118c; 	T(MOV(ax, 0x30));	// 59912 mov     ax, 30h ; '0' ;~ 1E67:118C
ret_1e67_118f:
	// 8491 
cs=0x1e67;eip=0x00118f; 	X(PUSH(ax));	// 59913 push    ax ;~ 1E67:118F
cs=0x1e67;eip=0x001190; 	X(PUSH(cs));	// 59914 push    cs ;~ 1E67:1190
cs=0x1e67;eip=0x001191; 	R(CALL(_outc,0));	// 59915 call    near ptr _outc ;~ 1E67:1191
cs=0x1e67;eip=0x001194; 	T(ADD(sp, 2));	// 59916 add     sp, 2 ;~ 1E67:1194
cs=0x1e67;eip=0x001197; 	T(CMP(word_428ba, 0x10));	// 59917 cmp     word_428BA, 10h ;~ 1E67:1197
cs=0x1e67;eip=0x00119c; 	R(JNZ(locret_2de05));	// 59918 jnz     short locret_2DE05 ;~ 1E67:119C
cs=0x1e67;eip=0x00119e; 	T(CMP(word_4289e, 0));	// 59919 cmp     word_4289E, 0 ;~ 1E67:119E
cs=0x1e67;eip=0x0011a3; 	R(JZ(loc_2ddfa));	// 59920 jz      short loc_2DDFA ;~ 1E67:11A3
cs=0x1e67;eip=0x0011a5; 	T(MOV(ax, 0x58));	// 59921 mov     ax, 58h ; 'X' ;~ 1E67:11A5
cs=0x1e67;eip=0x0011a8; 	R(JMP(loc_2ddfd));	// 59922 jmp     short loc_2DDFD ;~ 1E67:11A8
loc_2ddfa:
	// 8492 
cs=0x1e67;eip=0x0011aa; 	T(MOV(ax, 0x78));	// 59926 mov     ax, 78h ; 'x' ;~ 1E67:11AA
loc_2ddfd:
	// 8493 
cs=0x1e67;eip=0x0011ad; 	X(PUSH(ax));	// 59929 push    ax ;~ 1E67:11AD
cs=0x1e67;eip=0x0011ae; 	X(PUSH(cs));	// 59930 push    cs ;~ 1E67:11AE
cs=0x1e67;eip=0x0011af; 	R(CALL(_outc,0));	// 59931 call    near ptr _outc ;~ 1E67:11AF
cs=0x1e67;eip=0x0011b2; 	T(ADD(sp, 2));	// 59932 add     sp, 2 ;~ 1E67:11B2
locret_2de05:
	// 8494 
cs=0x1e67;eip=0x0011b5; 	R(RETF(0));	// 59935 retf ;~ 1E67:11B5
getnum:
	// 59943 
#undef var_2
#define var_2 -2
	// 59946 var_2           = word ptr -2 ;~ 1E67:11B6
#undef arg_0
#define arg_0 6
	// 59947 arg_0           = word ptr  6 ;~ 1E67:11B6
#undef arg_2
#define arg_2 8
	// 59948 arg_2           = word ptr  8 ;~ 1E67:11B6
ret_1e67_11b6:
	// 8495 
cs=0x1e67;eip=0x0011b6; 	X(PUSH(bp));	// 59950 push    bp ;~ 1E67:11B6
cs=0x1e67;eip=0x0011b7; 	T(MOV(bp, sp));	// 59951 mov     bp, sp ;~ 1E67:11B7
cs=0x1e67;eip=0x0011b9; 	T(SUB(sp, 4));	// 59952 sub     sp, 4 ;~ 1E67:11B9
cs=0x1e67;eip=0x0011bc; 	X(PUSH(di));	// 59953 push    di ;~ 1E67:11BC
cs=0x1e67;eip=0x0011bd; 	X(PUSH(si));	// 59954 push    si ;~ 1E67:11BD
cs=0x1e67;eip=0x0011be; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 59955 mov     si, [bp+arg_2] ;~ 1E67:11BE
cs=0x1e67;eip=0x0011c1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 1));	// 59956 mov     [bp+var_2], 1 ;~ 1E67:11C1
cs=0x1e67;eip=0x0011c6; 	T(CMP(*(raddr(ds,si)), 0x2A));	// 59957 cmp     byte ptr [si], 2Ah ; '*' ;~ 1E67:11C6
cs=0x1e67;eip=0x0011c9; 	R(JNZ(loc_2de2a));	// 59958 jnz     short loc_2DE2A ;~ 1E67:11C9
cs=0x1e67;eip=0x0011cb; 	T(MOV(bx, word_428a6));	// 59959 mov     bx, word_428A6 ;~ 1E67:11CB
cs=0x1e67;eip=0x0011cf; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 59960 mov     di, [bx] ;~ 1E67:11CF
cs=0x1e67;eip=0x0011d1; 	X(ADD(word_428a6, 2));	// 59961 add     word_428A6, 2 ;~ 1E67:11D1
cs=0x1e67;eip=0x0011d6; 	T(INC(si));	// 59962 inc     si ;~ 1E67:11D6
cs=0x1e67;eip=0x0011d7; 	R(JMP(loc_2de71));	// 59963 jmp     short loc_2DE71 ;~ 1E67:11D7
loc_2de2a:
	// 8496 
cs=0x1e67;eip=0x0011da; 	T(CMP(*(raddr(ds,si)), 0x2D));	// 59968 cmp     byte ptr [si], 2Dh ; '-' ;~ 1E67:11DA
cs=0x1e67;eip=0x0011dd; 	R(JNZ(loc_2de35));	// 59969 jnz     short loc_2DE35 ;~ 1E67:11DD
cs=0x1e67;eip=0x0011df; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0FFFF));	// 59970 mov     [bp+var_2], 0FFFFh ;~ 1E67:11DF
cs=0x1e67;eip=0x0011e4; 	T(INC(si));	// 59971 inc     si ;~ 1E67:11E4
loc_2de35:
	// 8497 
cs=0x1e67;eip=0x0011e5; 	T(SUB(di, di));	// 59974 sub     di, di ;~ 1E67:11E5
cs=0x1e67;eip=0x0011e7; 	T(CMP(*(raddr(ds,si)), 0x30));	// 59975 cmp     byte ptr [si], 30h ; '0' ;~ 1E67:11E7
cs=0x1e67;eip=0x0011ea; 	R(JL(loc_2de71));	// 59976 jl      short loc_2DE71 ;~ 1E67:11EA
cs=0x1e67;eip=0x0011ec; 	T(CMP(*(raddr(ds,si)), 0x39));	// 59977 cmp     byte ptr [si], 39h ; '9' ;~ 1E67:11EC
cs=0x1e67;eip=0x0011ef; 	R(JG(loc_2de71));	// 59978 jg      short loc_2DE71 ;~ 1E67:11EF
cs=0x1e67;eip=0x0011f1; 	T(CMP(word_428aa, di));	// 59979 cmp     word_428AA, di ;~ 1E67:11F1
cs=0x1e67;eip=0x0011f5; 	R(JNZ(loc_2de52));	// 59980 jnz     short loc_2DE52 ;~ 1E67:11F5
cs=0x1e67;eip=0x0011f7; 	T(CMP(*(raddr(ds,si)), 0x30));	// 59981 cmp     byte ptr [si], 30h ; '0' ;~ 1E67:11F7
cs=0x1e67;eip=0x0011fa; 	R(JNZ(loc_2de52));	// 59982 jnz     short loc_2DE52 ;~ 1E67:11FA
cs=0x1e67;eip=0x0011fc; 	X(MOV(word_428bc, 0x30));	// 59983 mov     word_428BC, 30h ; '0' ;~ 1E67:11FC
loc_2de52:
	// 8498 
cs=0x1e67;eip=0x001202; 	T(MOV(al, *(raddr(ds,si))));	// 59987 mov     al, [si] ;~ 1E67:1202
cs=0x1e67;eip=0x001204; 	T(CBW);	// 59988 cbw ;~ 1E67:1204
cs=0x1e67;eip=0x001205; 	T(MOV(cx, di));	// 59989 mov     cx, di ;~ 1E67:1205
cs=0x1e67;eip=0x001207; 	T(SHL(cx, 1));	// 59990 shl     cx, 1 ;~ 1E67:1207
cs=0x1e67;eip=0x001209; 	T(SHL(cx, 1));	// 59991 shl     cx, 1 ;~ 1E67:1209
cs=0x1e67;eip=0x00120b; 	T(ADD(cx, di));	// 59992 add     cx, di ;~ 1E67:120B
cs=0x1e67;eip=0x00120d; 	T(SHL(cx, 1));	// 59993 shl     cx, 1 ;~ 1E67:120D
cs=0x1e67;eip=0x00120f; 	T(ADD(cx, ax));	// 59994 add     cx, ax ;~ 1E67:120F
cs=0x1e67;eip=0x001211; 	T(SUB(cx, 0x30));	// 59995 sub     cx, 30h ; '0' ;~ 1E67:1211
cs=0x1e67;eip=0x001214; 	T(MOV(di, cx));	// 59996 mov     di, cx ;~ 1E67:1214
cs=0x1e67;eip=0x001216; 	T(INC(si));	// 59997 inc     si ;~ 1E67:1216
cs=0x1e67;eip=0x001217; 	T(CMP(*(raddr(ds,si)), 0x30));	// 59998 cmp     byte ptr [si], 30h ; '0' ;~ 1E67:1217
cs=0x1e67;eip=0x00121a; 	R(JL(loc_2de71));	// 59999 jl      short loc_2DE71 ;~ 1E67:121A
cs=0x1e67;eip=0x00121c; 	T(CMP(*(raddr(ds,si)), 0x39));	// 60000 cmp     byte ptr [si], 39h ; '9' ;~ 1E67:121C
cs=0x1e67;eip=0x00121f; 	R(JLE(loc_2de52));	// 60001 jle     short loc_2DE52 ;~ 1E67:121F
loc_2de71:
	// 8499 
cs=0x1e67;eip=0x001221; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 60005 mov     ax, [bp+var_2] ;~ 1E67:1221
cs=0x1e67;eip=0x001224; 	T(IMUL1_2(di));	// 60006 imul    di ;~ 1E67:1224
cs=0x1e67;eip=0x001226; 	T(MOV(di, ax));	// 60007 mov     di, ax ;~ 1E67:1226
cs=0x1e67;eip=0x001228; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 60008 mov     bx, [bp+arg_0] ;~ 1E67:1228
cs=0x1e67;eip=0x00122b; 	X(MOV(*(dw*)(raddr(ds,bx)), di));	// 60009 mov     [bx], di ;~ 1E67:122B
cs=0x1e67;eip=0x00122d; 	T(MOV(ax, si));	// 60010 mov     ax, si ;~ 1E67:122D
cs=0x1e67;eip=0x00122f; 	X(POP(si));	// 60011 pop     si ;~ 1E67:122F
cs=0x1e67;eip=0x001230; 	X(POP(di));	// 60012 pop     di ;~ 1E67:1230
cs=0x1e67;eip=0x001231; 	T(MOV(sp, bp));	// 60013 mov     sp, bp ;~ 1E67:1231
cs=0x1e67;eip=0x001233; 	X(POP(bp));	// 60014 pop     bp ;~ 1E67:1233
cs=0x1e67;eip=0x001234; 	R(RETF(0));	// 60015 retf ;~ 1E67:1234
flagchar:
	// 60025 
#undef arg_0
#define arg_0 6
	// 60027 arg_0           = byte ptr  6 ;~ 1E67:1236
ret_1e67_1236:
	// 8500 
cs=0x1e67;eip=0x001236; 	X(PUSH(bp));	// 60029 push    bp ;~ 1E67:1236
cs=0x1e67;eip=0x001237; 	T(MOV(bp, sp));	// 60030 mov     bp, sp ;~ 1E67:1237
cs=0x1e67;eip=0x001239; 	T(SUB(sp, 2));	// 60031 sub     sp, 2 ;~ 1E67:1239
cs=0x1e67;eip=0x00123c; 	X(PUSH(si));	// 60032 push    si ;~ 1E67:123C
cs=0x1e67;eip=0x00123d; 	T(MOV(si, 0x37F8));	// 60033 mov     si, 37F8h ;~ 1E67:123D
cs=0x1e67;eip=0x001240; 	T(MOV(cl, *(raddr(ss,bp+arg_0))));	// 60034 mov     cl, [bp+arg_0] ;~ 1E67:1240
cs=0x1e67;eip=0x001243; 	R(JMP(loc_2de97));	// 60035 jmp     short loc_2DE97 ;~ 1E67:1243
loc_2de96:
	// 8501 
cs=0x1e67;eip=0x001246; 	T(INC(si));	// 60040 inc     si ;~ 1E67:1246
loc_2de97:
	// 8502 
cs=0x1e67;eip=0x001247; 	T(CMP(*(raddr(ds,si)), 0));	// 60043 cmp     byte ptr [si], 0 ;~ 1E67:1247
cs=0x1e67;eip=0x00124a; 	R(JZ(loc_2dea6));	// 60044 jz      short loc_2DEA6 ;~ 1E67:124A
cs=0x1e67;eip=0x00124c; 	T(CMP(cl, *(raddr(ds,si))));	// 60045 cmp     cl, [si] ;~ 1E67:124C
cs=0x1e67;eip=0x00124e; 	R(JNZ(loc_2de96));	// 60046 jnz     short loc_2DE96 ;~ 1E67:124E
cs=0x1e67;eip=0x001250; 	T(MOV(ax, 1));	// 60047 mov     ax, 1 ;~ 1E67:1250
cs=0x1e67;eip=0x001253; 	R(JMP(loc_2dea8));	// 60048 jmp     short loc_2DEA8 ;~ 1E67:1253
loc_2dea6:
	// 8503 
cs=0x1e67;eip=0x001256; 	T(SUB(ax, ax));	// 60053 sub     ax, ax ;~ 1E67:1256
loc_2dea8:
	// 8504 
cs=0x1e67;eip=0x001258; 	X(POP(si));	// 60056 pop     si ;~ 1E67:1258
cs=0x1e67;eip=0x001259; 	T(MOV(sp, bp));	// 60057 mov     sp, bp ;~ 1E67:1259
cs=0x1e67;eip=0x00125b; 	X(POP(bp));	// 60058 pop     bp ;~ 1E67:125B
cs=0x1e67;eip=0x00125c; 	R(RETF(0));	// 60059 retf ;~ 1E67:125C
_lseek:
	// 60070 
#undef var_4
#define var_4 -4
	// 60072 var_4           = word ptr -4 ;~ 1E67:125E
#undef var_2
#define var_2 -2
	// 60073 var_2           = word ptr -2 ;~ 1E67:125E
#undef arg_0
#define arg_0 6
	// 60074 arg_0           = dword ptr  6 ;~ 1E67:125E
#undef arg_4
#define arg_4 0x0A
	// 60075 arg_4           = dword ptr  0Ah ;~ 1E67:125E
ret_1e67_125e:
	// 8505 
cs=0x1e67;eip=0x00125e; 	X(PUSH(bp));	// 60079 push    bp ;~ 1E67:125E
cs=0x1e67;eip=0x00125f; 	T(MOV(bp, sp));	// 60080 mov     bp, sp ;~ 1E67:125F
cs=0x1e67;eip=0x001261; 	T(SUB(sp, 4));	// 60081 sub     sp, 4 ;~ 1E67:1261
cs=0x1e67;eip=0x001264; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 60082 mov     bx, word ptr [bp+arg_0] ;~ 1E67:1264
cs=0x1e67;eip=0x001267; 	T(CMP(bx, word_3edf2));	// 60083 cmp     bx, word_3EDF2 ;~ 1E67:1267
cs=0x1e67;eip=0x00126b; 	R(JC(loc_2dec2));	// 60084 jb      short loc_2DEC2 ;~ 1E67:126B
cs=0x1e67;eip=0x00126d; 	T(MOV(ax, 0x900));	// 60085 mov     ax, 900h ;~ 1E67:126D
cs=0x1e67;eip=0x001270; 	R(JMP(loc_2deec));	// 60086 jmp     short loc_2DEEC ;~ 1E67:1270
loc_2dec2:
	// 8506 
cs=0x1e67;eip=0x001272; 	T(TEST(*(dw*)((dw*)(raddr(ss,bp+arg_4))), 0x8000));	// 60090 test    word ptr [bp+arg_4], 8000h ;~ 1E67:1272
cs=0x1e67;eip=0x001277; 	R(JZ(loc_2df11));	// 60091 jz      short loc_2DF11 ;~ 1E67:1277
cs=0x1e67;eip=0x001279; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+arg_4+2))), 0));	// 60092 cmp     word ptr [bp+arg_4+2], 0 ;~ 1E67:1279
cs=0x1e67;eip=0x00127d; 	R(JZ(loc_2dee9));	// 60093 jz      short loc_2DEE9 ;~ 1E67:127D
cs=0x1e67;eip=0x00127f; 	T(XOR(cx, cx));	// 60094 xor     cx, cx ;~ 1E67:127F
cs=0x1e67;eip=0x001281; 	T(MOV(dx, cx));	// 60095 mov     dx, cx ;~ 1E67:1281
cs=0x1e67;eip=0x001283; 	T(MOV(ax, 0x4201));	// 60096 mov     ax, 4201h ;~ 1E67:1283
cs=0x1e67;eip=0x001286; 	R(_INT(0x21));	// 60097 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 1E67:1286
cs=0x1e67;eip=0x001288; 	R(JC(loc_2df25));	// 60099 jb      short loc_2DF25 ;~ 1E67:1288
cs=0x1e67;eip=0x00128a; 	T(TEST(*(dw*)((dw*)(raddr(ss,bp+arg_4+2))), 2));	// 60100 test    word ptr [bp+arg_4+2], 2 ;~ 1E67:128A
cs=0x1e67;eip=0x00128f; 	R(JNZ(loc_2deef));	// 60101 jnz     short loc_2DEEF ;~ 1E67:128F
cs=0x1e67;eip=0x001291; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 60102 add     ax, word ptr [bp+arg_0+2] ;~ 1E67:1291
cs=0x1e67;eip=0x001294; 	T(ADC(dx, *(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 60103 adc     dx, word ptr [bp+arg_4] ;~ 1E67:1294
cs=0x1e67;eip=0x001297; 	R(JNS(loc_2df11));	// 60104 jns     short loc_2DF11 ;~ 1E67:1297
loc_2dee9:
	// 8507 
cs=0x1e67;eip=0x001299; 	T(MOV(ax, 0x1600));	// 60108 mov     ax, 1600h ;~ 1E67:1299
loc_2deec:
	// 8508 
cs=0x1e67;eip=0x00129c; 	T(STC);	// 60111 stc ;~ 1E67:129C
cs=0x1e67;eip=0x00129d; 	R(JMP(loc_2df25));	// 60112 jmp     short loc_2DF25 ;~ 1E67:129D
loc_2deef:
	// 8509 
cs=0x1e67;eip=0x00129f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 60116 mov     [bp+var_2], dx ;~ 1E67:129F
cs=0x1e67;eip=0x0012a2; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 60117 mov     [bp+var_4], ax ;~ 1E67:12A2
cs=0x1e67;eip=0x0012a5; 	T(MOV(dx, cx));	// 60118 mov     dx, cx ;~ 1E67:12A5
cs=0x1e67;eip=0x0012a7; 	T(MOV(ax, 0x4202));	// 60119 mov     ax, 4202h ;~ 1E67:12A7
cs=0x1e67;eip=0x0012aa; 	R(_INT(0x21));	// 60120 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 1E67:12AA
cs=0x1e67;eip=0x0012ac; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 60122 add     ax, word ptr [bp+arg_0+2] ;~ 1E67:12AC
cs=0x1e67;eip=0x0012af; 	T(ADC(dx, *(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 60123 adc     dx, word ptr [bp+arg_4] ;~ 1E67:12AF
cs=0x1e67;eip=0x0012b2; 	R(JNS(loc_2df11));	// 60124 jns     short loc_2DF11 ;~ 1E67:12B2
cs=0x1e67;eip=0x0012b4; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_2))));	// 60125 mov     cx, [bp+var_2] ;~ 1E67:12B4
cs=0x1e67;eip=0x0012b7; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 60126 mov     dx, [bp+var_4] ;~ 1E67:12B7
cs=0x1e67;eip=0x0012ba; 	T(MOV(ax, 0x4200));	// 60127 mov     ax, 4200h ;~ 1E67:12BA
cs=0x1e67;eip=0x0012bd; 	R(_INT(0x21));	// 60128 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 1E67:12BD
cs=0x1e67;eip=0x0012bf; 	R(JMP(loc_2dee9));	// 60130 jmp     short loc_2DEE9 ;~ 1E67:12BF
loc_2df11:
	// 8510 
cs=0x1e67;eip=0x0012c1; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 60135 mov     dx, word ptr [bp+arg_0+2] ;~ 1E67:12C1
cs=0x1e67;eip=0x0012c4; 	T(MOV(cx, *(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 60136 mov     cx, word ptr [bp+arg_4] ;~ 1E67:12C4
cs=0x1e67;eip=0x0012c7; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_4+2))));	// 60137 mov     al, byte ptr [bp+arg_4+2] ;~ 1E67:12C7
cs=0x1e67;eip=0x0012ca; 	T(MOV(ah, 0x42));	// 60138 mov     ah, 42h ;~ 1E67:12CA
cs=0x1e67;eip=0x0012cc; 	R(_INT(0x21));	// 60139 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 1E67:12CC
cs=0x1e67;eip=0x0012ce; 	R(JC(loc_2df25));	// 60142 jb      short loc_2DF25 ;~ 1E67:12CE
cs=0x1e67;eip=0x0012d0; 	X(AND(*(raddr(ds,bx+0x3684)), 0x0FD));	// 60143 and     byte ptr [bx+3684h], 0FDh ;~ 1E67:12D0
loc_2df25:
	// 8511 
cs=0x1e67;eip=0x0012d5; 	R(JMP(__dosretax));	// 60147 jmp     __dosretax ;~ 1E67:12D5
_write:
	// 60156 
#undef var_8
#define var_8 -8
	// 60159 var_8           = word ptr -8 ;~ 1E67:12D8
#undef var_4
#define var_4 -4
	// 60160 var_4           = word ptr -4 ;~ 1E67:12D8
#undef var_2
#define var_2 -2
	// 60161 var_2           = word ptr -2 ;~ 1E67:12D8
#undef arg_0
#define arg_0 6
	// 60162 arg_0           = dword ptr  6 ;~ 1E67:12D8
#undef arg_4
#define arg_4 0x0A
	// 60163 arg_4           = dword ptr  0Ah ;~ 1E67:12D8
ret_1e67_12d8:
	// 8512 
cs=0x1e67;eip=0x0012d8; 	X(PUSH(bp));	// 60168 push    bp ;~ 1E67:12D8
cs=0x1e67;eip=0x0012d9; 	T(MOV(bp, sp));	// 60169 mov     bp, sp ;~ 1E67:12D9
cs=0x1e67;eip=0x0012db; 	T(SUB(sp, 8));	// 60170 sub     sp, 8 ;~ 1E67:12DB
cs=0x1e67;eip=0x0012de; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 60171 mov     bx, word ptr [bp+arg_0] ;~ 1E67:12DE
cs=0x1e67;eip=0x0012e1; 	T(CMP(bx, word_3edf2));	// 60172 cmp     bx, word_3EDF2 ;~ 1E67:12E1
cs=0x1e67;eip=0x0012e5; 	R(JC(loc_2df3e));	// 60173 jb      short loc_2DF3E ;~ 1E67:12E5
cs=0x1e67;eip=0x0012e7; 	T(MOV(ax, 0x900));	// 60174 mov     ax, 900h ;~ 1E67:12E7
cs=0x1e67;eip=0x0012ea; 	T(STC);	// 60175 stc ;~ 1E67:12EA
loc_2df3b:
	// 8513 
cs=0x1e67;eip=0x0012eb; 	R(JMP(__dosretax));	// 60178 jmp     __dosretax ;~ 1E67:12EB
loc_2df3e:
	// 8514 
cs=0x1e67;eip=0x0012ee; 	T(TEST(*(raddr(ds,bx+0x3684)), 0x20));	// 60182 test    byte ptr [bx+3684h], 20h ;~ 1E67:12EE
cs=0x1e67;eip=0x0012f3; 	R(JZ(loc_2df50));	// 60183 jz      short loc_2DF50 ;~ 1E67:12F3
cs=0x1e67;eip=0x0012f5; 	T(MOV(ax, 0x4202));	// 60184 mov     ax, 4202h ;~ 1E67:12F5
cs=0x1e67;eip=0x0012f8; 	T(XOR(cx, cx));	// 60185 xor     cx, cx ;~ 1E67:12F8
cs=0x1e67;eip=0x0012fa; 	T(MOV(dx, cx));	// 60186 mov     dx, cx ;~ 1E67:12FA
cs=0x1e67;eip=0x0012fc; 	R(_INT(0x21));	// 60187 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 1E67:12FC
cs=0x1e67;eip=0x0012fe; 	R(JC(loc_2df3b));	// 60189 jb      short loc_2DF3B ;~ 1E67:12FE
loc_2df50:
	// 8515 
cs=0x1e67;eip=0x001300; 	T(TEST(*(raddr(ds,bx+0x3684)), 0x80));	// 60192 test    byte ptr [bx+3684h], 80h ;~ 1E67:1300
cs=0x1e67;eip=0x001305; 	R(JZ(loc_2dfc7));	// 60193 jz      short loc_2DFC7 ;~ 1E67:1305
cs=0x1e67;eip=0x001307; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 60194 mov     dx, word ptr [bp+arg_0+2] ;~ 1E67:1307
cs=0x1e67;eip=0x00130a; 	X(PUSH(ds));	// 60195 push    ds ;~ 1E67:130A
cs=0x1e67;eip=0x00130b; 	X(POP(es));	// 60196 pop     es ;~ 1E67:130B
cs=0x1e67;eip=0x00130c; 	T(XOR(ax, ax));	// 60198 xor     ax, ax ;~ 1E67:130C
cs=0x1e67;eip=0x00130e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 60199 mov     [bp+var_2], ax ;~ 1E67:130E
cs=0x1e67;eip=0x001311; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 60200 mov     [bp+var_4], ax ;~ 1E67:1311
cs=0x1e67;eip=0x001314; 	T(CLD);	// 60201 cld ;~ 1E67:1314
cs=0x1e67;eip=0x001315; 	X(PUSH(di));	// 60202 push    di ;~ 1E67:1315
cs=0x1e67;eip=0x001316; 	X(PUSH(si));	// 60203 push    si ;~ 1E67:1316
cs=0x1e67;eip=0x001317; 	T(MOV(di, dx));	// 60204 mov     di, dx ;~ 1E67:1317
cs=0x1e67;eip=0x001319; 	T(MOV(si, dx));	// 60205 mov     si, dx ;~ 1E67:1319
cs=0x1e67;eip=0x00131b; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), sp));	// 60206 mov     [bp+var_8], sp ;~ 1E67:131B
cs=0x1e67;eip=0x00131e; 	T(MOV(cx, *(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 60207 mov     cx, word ptr [bp+arg_4] ;~ 1E67:131E
cs=0x1e67;eip=0x001321; 	R(JCXZ(loc_2dfc9));	// 60208 jcxz    short loc_2DFC9 ;~ 1E67:1321
cs=0x1e67;eip=0x001323; 	T(MOV(al, 0x0A));	// 60209 mov     al, 0Ah ;~ 1E67:1323
	// 60210 repne scasb ;~ 1E67:1325
cs=0x1e67;eip=0x001325; 	T(	REPNE SCASB);	// 60210 repne scasb ;~ 1E67:1325
cs=0x1e67;eip=0x001327; 	R(JNZ(loc_2dfc5));	// 60211 jnz     short loc_2DFC5 ;~ 1E67:1327
cs=0x1e67;eip=0x001329; 	R(CALLF(_stackavail,0));	// 60212 call    _stackavail ;~ 1E67:1329
cs=0x1e67;eip=0x00132e; 	T(CMP(ax, 0x0A8));	// 60213 cmp     ax, 0A8h ; '®' ;~ 1E67:132E
cs=0x1e67;eip=0x001331; 	R(JBE(loc_2dfcb));	// 60214 jbe     short loc_2DFCB ;~ 1E67:1331
cs=0x1e67;eip=0x001333; 	T(SUB(sp, 2));	// 60215 sub     sp, 2 ;~ 1E67:1333
cs=0x1e67;eip=0x001336; 	T(MOV(bx, sp));	// 60216 mov     bx, sp ;~ 1E67:1336
cs=0x1e67;eip=0x001338; 	T(MOV(dx, 0x200));	// 60217 mov     dx, 200h ;~ 1E67:1338
cs=0x1e67;eip=0x00133b; 	T(CMP(ax, 0x228));	// 60218 cmp     ax, 228h ;~ 1E67:133B
cs=0x1e67;eip=0x00133e; 	R(JNC(loc_2df93));	// 60219 jnb     short loc_2DF93 ;~ 1E67:133E
cs=0x1e67;eip=0x001340; 	T(MOV(dx, 0x80));	// 60220 mov     dx, 80h ; 'Ä' ;~ 1E67:1340
loc_2df93:
	// 8516 
cs=0x1e67;eip=0x001343; 	T(SUB(sp, dx));	// 60223 sub     sp, dx ;~ 1E67:1343
cs=0x1e67;eip=0x001345; 	T(MOV(dx, sp));	// 60224 mov     dx, sp ;~ 1E67:1345
cs=0x1e67;eip=0x001347; 	T(MOV(di, dx));	// 60225 mov     di, dx ;~ 1E67:1347
cs=0x1e67;eip=0x001349; 	X(PUSH(ss));	// 60226 push    ss ;~ 1E67:1349
cs=0x1e67;eip=0x00134a; 	X(POP(es));	// 60227 pop     es ;~ 1E67:134A
cs=0x1e67;eip=0x00134b; 	T(MOV(cx, *(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 60228 mov     cx, word ptr [bp+arg_4] ;~ 1E67:134B
loc_2df9e:
	// 8517 
cs=0x1e67;eip=0x00134e; 	T(LODSB);	// 60231 lodsb ;~ 1E67:134E
cs=0x1e67;eip=0x00134f; 	T(CMP(al, 0x0A));	// 60232 cmp     al, 0Ah ;~ 1E67:134F
cs=0x1e67;eip=0x001351; 	R(JZ(loc_2dfaf));	// 60233 jz      short loc_2DFAF ;~ 1E67:1351
loc_2dfa3:
	// 8518 
cs=0x1e67;eip=0x001353; 	T(CMP(di, bx));	// 60236 cmp     di, bx ;~ 1E67:1353
cs=0x1e67;eip=0x001355; 	R(JZ(loc_2dfc0));	// 60237 jz      short loc_2DFC0 ;~ 1E67:1355
loc_2dfa7:
	// 8519 
cs=0x1e67;eip=0x001357; 	X(STOSB);	// 60240 stosb ;~ 1E67:1357
cs=0x1e67;eip=0x001358; 	R(LOOP(loc_2df9e));	// 60241 loop    loc_2DF9E ;~ 1E67:1358
cs=0x1e67;eip=0x00135a; 	R(CALL(sub_2dfd0,0));	// 60242 call    near ptr sub_2DFD0 ;~ 1E67:135A
cs=0x1e67;eip=0x00135d; 	R(JMP(loc_2e010));	// 60243 jmp     short loc_2E010 ;~ 1E67:135D
loc_2dfaf:
	// 8520 
cs=0x1e67;eip=0x00135f; 	T(MOV(al, 0x0D));	// 60247 mov     al, 0Dh ;~ 1E67:135F
cs=0x1e67;eip=0x001361; 	T(CMP(di, bx));	// 60248 cmp     di, bx ;~ 1E67:1361
cs=0x1e67;eip=0x001363; 	R(JNZ(loc_2dfb8));	// 60249 jnz     short loc_2DFB8 ;~ 1E67:1363
cs=0x1e67;eip=0x001365; 	R(CALL(sub_2dfd0,0));	// 60250 call    near ptr sub_2DFD0 ;~ 1E67:1365
loc_2dfb8:
	// 8521 
cs=0x1e67;eip=0x001368; 	X(STOSB);	// 60253 stosb ;~ 1E67:1368
cs=0x1e67;eip=0x001369; 	T(MOV(al, 0x0A));	// 60254 mov     al, 0Ah ;~ 1E67:1369
cs=0x1e67;eip=0x00136b; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 60255 inc     [bp+var_4] ;~ 1E67:136B
cs=0x1e67;eip=0x00136e; 	R(JMP(loc_2dfa3));	// 60256 jmp     short loc_2DFA3 ;~ 1E67:136E
loc_2dfc0:
	// 8522 
cs=0x1e67;eip=0x001370; 	R(CALL(sub_2dfd0,0));	// 60260 call    near ptr sub_2DFD0 ;~ 1E67:1370
cs=0x1e67;eip=0x001373; 	R(JMP(loc_2dfa7));	// 60261 jmp     short loc_2DFA7 ;~ 1E67:1373
loc_2dfc5:
	// 8523 
cs=0x1e67;eip=0x001375; 	X(POP(si));	// 60265 pop     si ;~ 1E67:1375
cs=0x1e67;eip=0x001376; 	X(POP(di));	// 60266 pop     di ;~ 1E67:1376
loc_2dfc7:
	// 8524 
cs=0x1e67;eip=0x001377; 	R(JMP(loc_2e01e));	// 60269 jmp     short loc_2E01E ;~ 1E67:1377
loc_2dfc9:
	// 8525 
cs=0x1e67;eip=0x001379; 	R(JMP(loc_2e010));	// 60273 jmp     short loc_2E010 ;~ 1E67:1379
loc_2dfcb:
	// 8526 
cs=0x1e67;eip=0x00137b; 	T(XOR(ax, ax));	// 60277 xor     ax, ax ;~ 1E67:137B
cs=0x1e67;eip=0x00137d; 	R(JMP(__amsg_exit));	// 60278 jmp     __amsg_exit ;~ 1E67:137D
sub_2dfd0:
	// 60285 
cs=0x1e67;eip=0x001380; 	X(PUSH(ax));	// 60290 push    ax ;~ 1E67:1380
ret_1e67_1381:
	// 8527 
cs=0x1e67;eip=0x001381; 	X(PUSH(bx));	// 60291 push    bx ;~ 1E67:1381
cs=0x1e67;eip=0x001382; 	X(PUSH(cx));	// 60292 push    cx ;~ 1E67:1382
cs=0x1e67;eip=0x001383; 	T(MOV(cx, di));	// 60293 mov     cx, di ;~ 1E67:1383
cs=0x1e67;eip=0x001385; 	T(SUB(cx, dx));	// 60294 sub     cx, dx ;~ 1E67:1385
cs=0x1e67;eip=0x001387; 	R(JCXZ(loc_2dfe9));	// 60295 jcxz    short loc_2DFE9 ;~ 1E67:1387
cs=0x1e67;eip=0x001389; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 60296 mov     bx, [bp+6] ;~ 1E67:1389
cs=0x1e67;eip=0x00138c; 	T(MOV(ah, 0x40));	// 60297 mov     ah, 40h ;~ 1E67:138C
cs=0x1e67;eip=0x00138e; 	R(_INT(0x21));	// 60298 int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 1E67:138E
cs=0x1e67;eip=0x001390; 	R(JC(loc_2dfef));	// 60300 jb      short loc_2DFEF ;~ 1E67:1390
cs=0x1e67;eip=0x001392; 	X(ADD(*(dw*)(raddr(ss,bp-2)), ax));	// 60301 add     [bp-2], ax ;~ 1E67:1392
cs=0x1e67;eip=0x001395; 	T(OR(ax, ax));	// 60302 or      ax, ax ;~ 1E67:1395
cs=0x1e67;eip=0x001397; 	R(JZ(loc_2dfef));	// 60303 jz      short loc_2DFEF ;~ 1E67:1397
loc_2dfe9:
	// 8528 
cs=0x1e67;eip=0x001399; 	X(POP(cx));	// 60306 pop     cx ;~ 1E67:1399
cs=0x1e67;eip=0x00139a; 	X(POP(bx));	// 60307 pop     bx ;~ 1E67:139A
cs=0x1e67;eip=0x00139b; 	X(POP(ax));	// 60308 pop     ax ;~ 1E67:139B
cs=0x1e67;eip=0x00139c; 	T(MOV(di, dx));	// 60309 mov     di, dx ;~ 1E67:139C
cs=0x1e67;eip=0x00139e; 	R(RETN(0));	// 60310 retn ;~ 1E67:139E
loc_2dfef:
	// 8529 
cs=0x1e67;eip=0x00139f; 	T(ADD(sp, 8));	// 60315 add     sp, 8 ;~ 1E67:139F
cs=0x1e67;eip=0x0013a2; 	R(JNC(loc_2dff8));	// 60316 jnb     short loc_2DFF8 ;~ 1E67:13A2
cs=0x1e67;eip=0x0013a4; 	T(MOV(ah, 9));	// 60317 mov     ah, 9 ;~ 1E67:13A4
cs=0x1e67;eip=0x0013a6; 	R(JMP(loc_2e016));	// 60318 jmp     short loc_2E016 ;~ 1E67:13A6
loc_2dff8:
	// 8530 
cs=0x1e67;eip=0x0013a8; 	T(TEST(*(raddr(ds,bx+0x3684)), 0x40));	// 60322 test    byte ptr [bx+3684h], 40h ;~ 1E67:13A8
cs=0x1e67;eip=0x0013ad; 	R(JZ(loc_2e00a));	// 60323 jz      short loc_2E00A ;~ 1E67:13AD
cs=0x1e67;eip=0x0013af; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 60324 mov     bx, [bp+8] ;~ 1E67:13AF
cs=0x1e67;eip=0x0013b2; 	T(CMP(*(raddr(ds,bx)), 0x1A));	// 60325 cmp     byte ptr [bx], 1Ah ;~ 1E67:13B2
cs=0x1e67;eip=0x0013b5; 	R(JNZ(loc_2e00a));	// 60326 jnz     short loc_2E00A ;~ 1E67:13B5
cs=0x1e67;eip=0x0013b7; 	T(CLC);	// 60327 clc ;~ 1E67:13B7
cs=0x1e67;eip=0x0013b8; 	R(JMP(loc_2e016));	// 60328 jmp     short loc_2E016 ;~ 1E67:13B8
loc_2e00a:
	// 8531 
cs=0x1e67;eip=0x0013ba; 	T(STC);	// 60333 stc ;~ 1E67:13BA
cs=0x1e67;eip=0x0013bb; 	T(MOV(ax, 0x1C00));	// 60334 mov     ax, 1C00h ;~ 1E67:13BB
cs=0x1e67;eip=0x0013be; 	R(JMP(loc_2e016));	// 60335 jmp     short loc_2E016 ;~ 1E67:13BE
loc_2e010:
	// 8532 
cs=0x1e67;eip=0x0013c0; 	T(MOV(ax, *(dw*)(raddr(ss,bp-2))));	// 60340 mov     ax, [bp-2] ;~ 1E67:13C0
cs=0x1e67;eip=0x0013c3; 	T(SUB(ax, *(dw*)(raddr(ss,bp-4))));	// 60341 sub     ax, [bp-4] ;~ 1E67:13C3
loc_2e016:
	// 8533 
cs=0x1e67;eip=0x0013c6; 	T(MOV(sp, *(dw*)(raddr(ss,bp-8))));	// 60345 mov     sp, [bp-8] ;~ 1E67:13C6
cs=0x1e67;eip=0x0013c9; 	X(POP(si));	// 60346 pop     si ;~ 1E67:13C9
cs=0x1e67;eip=0x0013ca; 	X(POP(di));	// 60347 pop     di ;~ 1E67:13CA
loc_2e01b:
	// 8534 
cs=0x1e67;eip=0x0013cb; 	R(JMP(__dosretax));	// 60351 jmp     __dosretax ;~ 1E67:13CB
seg010_13ce_proc:
	// 60357 
loc_2e01e:
	// 8535 
cs=0x1e67;eip=0x0013ce; 	T(MOV(cx, *(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 60358 mov     cx, word ptr [bp+arg_4] ;~ 1E67:13CE
cs=0x1e67;eip=0x0013d1; 	T(OR(cx, cx));	// 60359 or      cx, cx ;~ 1E67:13D1
cs=0x1e67;eip=0x0013d3; 	R(JNZ(loc_2e02a));	// 60360 jnz     short loc_2E02A ;~ 1E67:13D3
cs=0x1e67;eip=0x0013d5; 	T(MOV(ax, cx));	// 60361 mov     ax, cx ;~ 1E67:13D5
cs=0x1e67;eip=0x0013d7; 	R(JMP(__dosretax));	// 60362 jmp     __dosretax ;~ 1E67:13D7
loc_2e02a:
	// 8536 
cs=0x1e67;eip=0x0013da; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 60366 mov     dx, word ptr [bp+arg_0+2] ;~ 1E67:13DA
cs=0x1e67;eip=0x0013dd; 	T(MOV(ah, 0x40));	// 60367 mov     ah, 40h ;~ 1E67:13DD
cs=0x1e67;eip=0x0013df; 	R(_INT(0x21));	// 60368 int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 1E67:13DF
cs=0x1e67;eip=0x0013e1; 	R(JNC(loc_2e037));	// 60370 jnb     short loc_2E037 ;~ 1E67:13E1
cs=0x1e67;eip=0x0013e3; 	T(MOV(ah, 9));	// 60371 mov     ah, 9 ;~ 1E67:13E3
cs=0x1e67;eip=0x0013e5; 	R(JMP(loc_2e01b));	// 60372 jmp     short loc_2E01B ;~ 1E67:13E5
loc_2e037:
	// 8537 
cs=0x1e67;eip=0x0013e7; 	T(OR(ax, ax));	// 60376 or      ax, ax ;~ 1E67:13E7
cs=0x1e67;eip=0x0013e9; 	R(JNZ(loc_2e01b));	// 60377 jnz     short loc_2E01B ;~ 1E67:13E9
cs=0x1e67;eip=0x0013eb; 	T(TEST(*(raddr(ds,bx+0x3684)), 0x40));	// 60378 test    byte ptr [bx+3684h], 40h ;~ 1E67:13EB
cs=0x1e67;eip=0x0013f0; 	R(JZ(loc_2e04c));	// 60379 jz      short loc_2E04C ;~ 1E67:13F0
cs=0x1e67;eip=0x0013f2; 	T(MOV(bx, dx));	// 60380 mov     bx, dx ;~ 1E67:13F2
cs=0x1e67;eip=0x0013f4; 	T(CMP(*(raddr(ds,bx)), 0x1A));	// 60381 cmp     byte ptr [bx], 1Ah ;~ 1E67:13F4
cs=0x1e67;eip=0x0013f7; 	R(JNZ(loc_2e04c));	// 60382 jnz     short loc_2E04C ;~ 1E67:13F7
cs=0x1e67;eip=0x0013f9; 	T(CLC);	// 60383 clc ;~ 1E67:13F9
cs=0x1e67;eip=0x0013fa; 	R(JMP(loc_2e01b));	// 60384 jmp     short loc_2E01B ;~ 1E67:13FA
loc_2e04c:
	// 8538 
cs=0x1e67;eip=0x0013fc; 	T(STC);	// 60389 stc ;~ 1E67:13FC
cs=0x1e67;eip=0x0013fd; 	T(MOV(ax, 0x1C00));	// 60390 mov     ax, 1C00h ;~ 1E67:13FD
cs=0x1e67;eip=0x001400; 	R(JMP(loc_2e01b));	// 60391 jmp     short loc_2E01B ;~ 1E67:1400
_stackavail:
	// 60399 
cs=0x1e67;eip=0x001402; 	X(POP(cx));	// 60400 pop     cx ;~ 1E67:1402
ret_1e67_1403:
	// 8539 
cs=0x1e67;eip=0x001403; 	X(POP(dx));	// 60401 pop     dx ;~ 1E67:1403
cs=0x1e67;eip=0x001404; 	T(MOV(ax, word_3ee24));	// 60402 mov     ax, word_3EE24 ;~ 1E67:1404
cs=0x1e67;eip=0x001407; 	T(CMP(ax, sp));	// 60403 cmp     ax, sp ;~ 1E67:1407
cs=0x1e67;eip=0x001409; 	R(JNC(loc_2e062));	// 60404 jnb     short loc_2E062 ;~ 1E67:1409
cs=0x1e67;eip=0x00140b; 	T(SUB(ax, sp));	// 60405 sub     ax, sp ;~ 1E67:140B
cs=0x1e67;eip=0x00140d; 	T(NEG(ax));	// 60406 neg     ax ;~ 1E67:140D
loc_2e05f:
	// 8540 
cs=0x1e67;eip=0x00140f; 	X(PUSH(dx));	// 60409 push    dx ;~ 1E67:140F
cs=0x1e67;eip=0x001410; 	X(PUSH(cx));	// 60410 push    cx ;~ 1E67:1410
cs=0x1e67;eip=0x001411; 	R(RETF(0));	// 60411 retf ;~ 1E67:1411
loc_2e062:
	// 8541 
cs=0x1e67;eip=0x001412; 	T(XOR(ax, ax));	// 60415 xor     ax, ax ;~ 1E67:1412
cs=0x1e67;eip=0x001414; 	R(JMP(loc_2e05f));	// 60416 jmp     short loc_2E05F ;~ 1E67:1414
unknown_libname_1:
	// 60425 
#undef arg_0
#define arg_0 6
	// 60427 arg_0           = word ptr  6 ;~ 1E67:1416
ret_1e67_1416:
	// 8542 
cs=0x1e67;eip=0x001416; 	X(PUSH(bp));	// 60429 push    bp ;~ 1E67:1416
cs=0x1e67;eip=0x001417; 	T(MOV(bp, sp));	// 60430 mov     bp, sp ;~ 1E67:1417
cs=0x1e67;eip=0x001419; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 60431 mov     bx, [bp+arg_0] ;~ 1E67:1419
cs=0x1e67;eip=0x00141c; 	T(OR(bx, bx));	// 60432 or      bx, bx ;~ 1E67:141C
cs=0x1e67;eip=0x00141e; 	R(JZ(loc_2e074));	// 60433 jz      short loc_2E074 ;~ 1E67:141E
cs=0x1e67;eip=0x001420; 	X(OR(*(raddr(ds,bx-2)), 1));	// 60434 or      byte ptr [bx-2], 1 ;~ 1E67:1420
loc_2e074:
	// 8543 
cs=0x1e67;eip=0x001424; 	T(MOV(sp, bp));	// 60437 mov     sp, bp ;~ 1E67:1424
cs=0x1e67;eip=0x001426; 	X(POP(bp));	// 60438 pop     bp ;~ 1E67:1426
cs=0x1e67;eip=0x001427; 	R(RETF(0));	// 60439 retf ;~ 1E67:1427
unknown_libname_2:
	// 60448 
#undef arg_0
#define arg_0 6
	// 60450 arg_0           = word ptr  6 ;~ 1E67:1428
ret_1e67_1428:
	// 8544 
cs=0x1e67;eip=0x001428; 	X(PUSH(bp));	// 60452 push    bp ;~ 1E67:1428
cs=0x1e67;eip=0x001429; 	T(MOV(bp, sp));	// 60453 mov     bp, sp ;~ 1E67:1429
cs=0x1e67;eip=0x00142b; 	X(PUSH(si));	// 60454 push    si ;~ 1E67:142B
cs=0x1e67;eip=0x00142c; 	X(PUSH(di));	// 60455 push    di ;~ 1E67:142C
cs=0x1e67;eip=0x00142d; 	T(MOV(bx, 0x37FE));	// 60456 mov     bx, 37FEh ;~ 1E67:142D
cs=0x1e67;eip=0x001430; 	T(CMP(*(dw*)(raddr(ds,bx)), 0));	// 60457 cmp     word ptr [bx], 0 ;~ 1E67:1430
cs=0x1e67;eip=0x001433; 	R(JNZ(loc_2e0ae));	// 60458 jnz     short loc_2E0AE ;~ 1E67:1433
cs=0x1e67;eip=0x001435; 	X(PUSH(ds));	// 60459 push    ds ;~ 1E67:1435
cs=0x1e67;eip=0x001436; 	X(POP(es));	// 60460 pop     es ;~ 1E67:1436
cs=0x1e67;eip=0x001437; 	T(MOV(ax, 5));	// 60461 mov     ax, 5 ;~ 1E67:1437
cs=0x1e67;eip=0x00143a; 	R(CALL(__amallocbrk,0));	// 60462 call    __amallocbrk ;~ 1E67:143A
cs=0x1e67;eip=0x00143d; 	R(JNZ(loc_2e094));	// 60463 jnz     short loc_2E094 ;~ 1E67:143D
cs=0x1e67;eip=0x00143f; 	T(XOR(ax, ax));	// 60464 xor     ax, ax ;~ 1E67:143F
cs=0x1e67;eip=0x001441; 	T(CWD);	// 60465 cwd ;~ 1E67:1441
cs=0x1e67;eip=0x001442; 	R(JMP(loc_2e0b8));	// 60466 jmp     short loc_2E0B8 ;~ 1E67:1442
loc_2e094:
	// 8545 
cs=0x1e67;eip=0x001444; 	T(INC(ax));	// 60470 inc     ax ;~ 1E67:1444
cs=0x1e67;eip=0x001445; 	T(AND(al, 0x0FE));	// 60471 and     al, 0FEh ;~ 1E67:1445
cs=0x1e67;eip=0x001447; 	X(MOV(word_3ef6e, ax));	// 60472 mov     word_3EF6E, ax ;~ 1E67:1447
cs=0x1e67;eip=0x00144a; 	X(MOV(word_3ef70, ax));	// 60473 mov     word_3EF70, ax ;~ 1E67:144A
cs=0x1e67;eip=0x00144d; 	T(XCHG(ax, si));	// 60474 xchg    ax, si ;~ 1E67:144D
cs=0x1e67;eip=0x00144e; 	X(MOV(*(dw*)(raddr(ds,si)), 1));	// 60475 mov     word ptr [si], 1 ;~ 1E67:144E
cs=0x1e67;eip=0x001452; 	T(ADD(si, 4));	// 60476 add     si, 4 ;~ 1E67:1452
cs=0x1e67;eip=0x001455; 	X(MOV(*(dw*)(raddr(ds,si-2)), 0x0FFFE));	// 60477 mov     word ptr [si-2], 0FFFEh ;~ 1E67:1455
cs=0x1e67;eip=0x00145a; 	X(MOV(word_3ef74, si));	// 60478 mov     word_3EF74, si ;~ 1E67:145A
loc_2e0ae:
	// 8546 
cs=0x1e67;eip=0x00145e; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_0))));	// 60481 mov     cx, [bp+arg_0] ;~ 1E67:145E
cs=0x1e67;eip=0x001461; 	T(MOV(ax, ds));	// 60482 mov     ax, ds ;~ 1E67:1461
cs=0x1e67;eip=0x001463; 	T(MOV(es, ax));	// 60483 mov     es, ax ;~ 1E67:1463
cs=0x1e67;eip=0x001465; 	R(CALL(__amalloc,0));	// 60484 call    __amalloc ;~ 1E67:1465
loc_2e0b8:
	// 8547 
cs=0x1e67;eip=0x001468; 	X(POP(di));	// 60487 pop     di ;~ 1E67:1468
cs=0x1e67;eip=0x001469; 	X(POP(si));	// 60488 pop     si ;~ 1E67:1469
cs=0x1e67;eip=0x00146a; 	T(MOV(sp, bp));	// 60489 mov     sp, bp ;~ 1E67:146A
cs=0x1e67;eip=0x00146c; 	X(POP(bp));	// 60490 pop     bp ;~ 1E67:146C
cs=0x1e67;eip=0x00146d; 	R(RETF(0));	// 60491 retf ;~ 1E67:146D
seg010_146e_proc:
	// 60497 
loc_2e0be:
	// 8548 
cs=0x1e67;eip=0x00146e; 	R(JMP(loc_2e18f));	// 60499 jmp     loc_2E18F ;~ 1E67:146E
__amalloc:
	// 60506 
cs=0x1e67;eip=0x001471; 	T(INC(cx));	// 60510 inc     cx ;~ 1E67:1471
ret_1e67_1472:
	// 8549 
cs=0x1e67;eip=0x001472; 	R(JZ(loc_2e0be));	// 60511 jz      short loc_2E0BE ;~ 1E67:1472
cs=0x1e67;eip=0x001474; 	T(AND(cl, 0x0FE));	// 60512 and     cl, 0FEh ;~ 1E67:1474
cs=0x1e67;eip=0x001477; 	T(CMP(cx, 0x0FFEE));	// 60513 cmp     cx, 0FFEEh ;~ 1E67:1477
cs=0x1e67;eip=0x00147a; 	R(JNC(loc_2e0be));	// 60514 jnb     short loc_2E0BE ;~ 1E67:147A
cs=0x1e67;eip=0x00147c; 	T(MOV(si, *(dw*)(raddr(ds,bx+2))));	// 60515 mov     si, [bx+2] ;~ 1E67:147C
cs=0x1e67;eip=0x00147f; 	T(CLD);	// 60516 cld ;~ 1E67:147F
cs=0x1e67;eip=0x001480; 	T(LODSW);	// 60517 lodsw ;~ 1E67:1480
cs=0x1e67;eip=0x001481; 	T(MOV(di, si));	// 60518 mov     di, si ;~ 1E67:1481
cs=0x1e67;eip=0x001483; 	T(TEST(al, 1));	// 60519 test    al, 1 ;~ 1E67:1483
cs=0x1e67;eip=0x001485; 	R(JZ(loc_2e119));	// 60520 jz      short loc_2E119 ;~ 1E67:1485
loc_2e0d7:
	// 8550 
cs=0x1e67;eip=0x001487; 	T(DEC(ax));	// 60523 dec     ax ;~ 1E67:1487
cs=0x1e67;eip=0x001488; 	T(CMP(ax, cx));	// 60524 cmp     ax, cx ;~ 1E67:1488
cs=0x1e67;eip=0x00148a; 	R(JNC(loc_2e0f1));	// 60525 jnb     short loc_2E0F1 ;~ 1E67:148A
cs=0x1e67;eip=0x00148c; 	T(MOV(dx, ax));	// 60526 mov     dx, ax ;~ 1E67:148C
cs=0x1e67;eip=0x00148e; 	T(ADD(si, ax));	// 60527 add     si, ax ;~ 1E67:148E
cs=0x1e67;eip=0x001490; 	T(LODSW);	// 60528 lodsw ;~ 1E67:1490
cs=0x1e67;eip=0x001491; 	T(TEST(al, 1));	// 60529 test    al, 1 ;~ 1E67:1491
cs=0x1e67;eip=0x001493; 	R(JZ(loc_2e119));	// 60530 jz      short loc_2E119 ;~ 1E67:1493
cs=0x1e67;eip=0x001495; 	T(ADD(ax, dx));	// 60531 add     ax, dx ;~ 1E67:1495
cs=0x1e67;eip=0x001497; 	T(ADD(ax, 2));	// 60532 add     ax, 2 ;~ 1E67:1497
cs=0x1e67;eip=0x00149a; 	T(MOV(si, di));	// 60533 mov     si, di ;~ 1E67:149A
cs=0x1e67;eip=0x00149c; 	X(MOV(*(dw*)(raddr(ds,si-2)), ax));	// 60534 mov     [si-2], ax ;~ 1E67:149C
cs=0x1e67;eip=0x00149f; 	R(JMP(loc_2e0d7));	// 60535 jmp     short loc_2E0D7 ;~ 1E67:149F
loc_2e0f1:
	// 8551 
cs=0x1e67;eip=0x0014a1; 	T(MOV(di, si));	// 60540 mov     di, si ;~ 1E67:14A1
cs=0x1e67;eip=0x0014a3; 	R(JZ(loc_2e101));	// 60541 jz      short loc_2E101 ;~ 1E67:14A3
cs=0x1e67;eip=0x0014a5; 	T(ADD(di, cx));	// 60542 add     di, cx ;~ 1E67:14A5
cs=0x1e67;eip=0x0014a7; 	X(MOV(*(dw*)(raddr(ds,si-2)), cx));	// 60543 mov     [si-2], cx ;~ 1E67:14A7
cs=0x1e67;eip=0x0014aa; 	T(SUB(ax, cx));	// 60544 sub     ax, cx ;~ 1E67:14AA
cs=0x1e67;eip=0x0014ac; 	T(DEC(ax));	// 60545 dec     ax ;~ 1E67:14AC
cs=0x1e67;eip=0x0014ad; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 60546 mov     [di], ax ;~ 1E67:14AD
cs=0x1e67;eip=0x0014af; 	R(JMP(loc_2e106));	// 60547 jmp     short loc_2E106 ;~ 1E67:14AF
loc_2e101:
	// 8552 
cs=0x1e67;eip=0x0014b1; 	T(ADD(di, cx));	// 60551 add     di, cx ;~ 1E67:14B1
cs=0x1e67;eip=0x0014b3; 	X(DEC(*(raddr(ds,si-2))));	// 60552 dec     byte ptr [si-2] ;~ 1E67:14B3
loc_2e106:
	// 8553 
cs=0x1e67;eip=0x0014b6; 	T(MOV(ax, si));	// 60555 mov     ax, si ;~ 1E67:14B6
cs=0x1e67;eip=0x0014b8; 	T(MOV(dx, ds));	// 60556 mov     dx, ds ;~ 1E67:14B8
cs=0x1e67;eip=0x0014ba; 	T(MOV(cx, ss));	// 60557 mov     cx, ss ;~ 1E67:14BA
cs=0x1e67;eip=0x0014bc; 	T(CMP(dx, cx));	// 60558 cmp     dx, cx ;~ 1E67:14BC
cs=0x1e67;eip=0x0014be; 	R(JZ(loc_2e115));	// 60559 jz      short loc_2E115 ;~ 1E67:14BE
cs=0x1e67;eip=0x0014c0; 	X(MOV(*(dw*)(((db*)&word_3ef7c)), ds));	// 60560 mov     es:word_3EF7C, ds ;~ 1E67:14C0
loc_2e115:
	// 8554 
cs=0x1e67;eip=0x0014c5; 	X(MOV(*(dw*)(raddr(ds,bx+2)), di));	// 60563 mov     [bx+2], di ;~ 1E67:14C5
cs=0x1e67;eip=0x0014c8; 	R(RETN(0));	// 60564 retn ;~ 1E67:14C8
loc_2e119:
	// 8555 
cs=0x1e67;eip=0x0014c9; 	X(MOV(*(&byte_3ef82), 2));	// 60569 mov     es:byte_3EF82, 2 ;~ 1E67:14C9
loc_2e11f:
	// 8556 
cs=0x1e67;eip=0x0014cf; 	T(CMP(ax, 0x0FFFE));	// 60573 cmp     ax, 0FFFEh ;~ 1E67:14CF
cs=0x1e67;eip=0x0014d2; 	R(JZ(loc_2e149));	// 60574 jz      short loc_2E149 ;~ 1E67:14D2
cs=0x1e67;eip=0x0014d4; 	T(MOV(di, si));	// 60575 mov     di, si ;~ 1E67:14D4
cs=0x1e67;eip=0x0014d6; 	T(ADD(si, ax));	// 60576 add     si, ax ;~ 1E67:14D6
loc_2e128:
	// 8557 
cs=0x1e67;eip=0x0014d8; 	T(LODSW);	// 60580 lodsw ;~ 1E67:14D8
cs=0x1e67;eip=0x0014d9; 	T(TEST(al, 1));	// 60581 test    al, 1 ;~ 1E67:14D9
cs=0x1e67;eip=0x0014db; 	R(JZ(loc_2e11f));	// 60582 jz      short loc_2E11F ;~ 1E67:14DB
cs=0x1e67;eip=0x0014dd; 	T(MOV(di, si));	// 60583 mov     di, si ;~ 1E67:14DD
loc_2e12f:
	// 8558 
cs=0x1e67;eip=0x0014df; 	T(DEC(ax));	// 60586 dec     ax ;~ 1E67:14DF
cs=0x1e67;eip=0x0014e0; 	T(CMP(ax, cx));	// 60587 cmp     ax, cx ;~ 1E67:14E0
cs=0x1e67;eip=0x0014e2; 	R(JNC(loc_2e0f1));	// 60588 jnb     short loc_2E0F1 ;~ 1E67:14E2
cs=0x1e67;eip=0x0014e4; 	T(MOV(dx, ax));	// 60589 mov     dx, ax ;~ 1E67:14E4
cs=0x1e67;eip=0x0014e6; 	T(ADD(si, ax));	// 60590 add     si, ax ;~ 1E67:14E6
cs=0x1e67;eip=0x0014e8; 	T(LODSW);	// 60591 lodsw ;~ 1E67:14E8
cs=0x1e67;eip=0x0014e9; 	T(TEST(al, 1));	// 60592 test    al, 1 ;~ 1E67:14E9
cs=0x1e67;eip=0x0014eb; 	R(JZ(loc_2e11f));	// 60593 jz      short loc_2E11F ;~ 1E67:14EB
cs=0x1e67;eip=0x0014ed; 	T(ADD(ax, dx));	// 60594 add     ax, dx ;~ 1E67:14ED
cs=0x1e67;eip=0x0014ef; 	T(ADD(ax, 2));	// 60595 add     ax, 2 ;~ 1E67:14EF
cs=0x1e67;eip=0x0014f2; 	T(MOV(si, di));	// 60596 mov     si, di ;~ 1E67:14F2
cs=0x1e67;eip=0x0014f4; 	X(MOV(*(dw*)(raddr(ds,si-2)), ax));	// 60597 mov     [si-2], ax ;~ 1E67:14F4
cs=0x1e67;eip=0x0014f7; 	R(JMP(loc_2e12f));	// 60598 jmp     short loc_2E12F ;~ 1E67:14F7
loc_2e149:
	// 8559 
cs=0x1e67;eip=0x0014f9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 60602 mov     ax, [bx+8] ;~ 1E67:14F9
cs=0x1e67;eip=0x0014fc; 	T(OR(ax, ax));	// 60603 or      ax, ax ;~ 1E67:14FC
cs=0x1e67;eip=0x0014fe; 	R(JZ(loc_2e154));	// 60604 jz      short loc_2E154 ;~ 1E67:14FE
cs=0x1e67;eip=0x001500; 	T(MOV(ds, ax));	// 60605 mov     ds, ax ;~ 1E67:1500
cs=0x1e67;eip=0x001502; 	R(JMP(loc_2e168));	// 60606 jmp     short loc_2E168 ;~ 1E67:1502
loc_2e154:
	// 8560 
cs=0x1e67;eip=0x001504; 	X(DEC(*(&byte_3ef82)));	// 60610 dec     es:byte_3EF82 ;~ 1E67:1504
cs=0x1e67;eip=0x001509; 	R(JZ(loc_2e16c));	// 60611 jz      short loc_2E16C ;~ 1E67:1509
cs=0x1e67;eip=0x00150b; 	T(MOV(ax, ds));	// 60612 mov     ax, ds ;~ 1E67:150B
cs=0x1e67;eip=0x00150d; 	T(MOV(di, ss));	// 60613 mov     di, ss ;~ 1E67:150D
cs=0x1e67;eip=0x00150f; 	T(CMP(ax, di));	// 60614 cmp     ax, di ;~ 1E67:150F
cs=0x1e67;eip=0x001511; 	R(JZ(loc_2e168));	// 60615 jz      short loc_2E168 ;~ 1E67:1511
cs=0x1e67;eip=0x001513; 	T(MOV(ds, *(dw*)(((db*)&word_3ef78))));	// 60616 mov     ds, es:word_3EF78 ;~ 1E67:1513
loc_2e168:
	// 8561 
cs=0x1e67;eip=0x001518; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 60621 mov     si, [bx] ;~ 1E67:1518
cs=0x1e67;eip=0x00151a; 	R(JMP(loc_2e128));	// 60622 jmp     short loc_2E128 ;~ 1E67:151A
loc_2e16c:
	// 8562 
cs=0x1e67;eip=0x00151c; 	T(MOV(si, *(dw*)(raddr(ds,bx+6))));	// 60626 mov     si, [bx+6] ;~ 1E67:151C
cs=0x1e67;eip=0x00151f; 	T(XOR(ax, ax));	// 60627 xor     ax, ax ;~ 1E67:151F
cs=0x1e67;eip=0x001521; 	R(CALL(__amlink,0));	// 60628 call    __amlink ;~ 1E67:1521
cs=0x1e67;eip=0x001524; 	T(CMP(ax, si));	// 60629 cmp     ax, si ;~ 1E67:1524
cs=0x1e67;eip=0x001526; 	R(JZ(loc_2e185));	// 60630 jz      short loc_2E185 ;~ 1E67:1526
cs=0x1e67;eip=0x001528; 	T(AND(al, 1));	// 60631 and     al, 1 ;~ 1E67:1528
cs=0x1e67;eip=0x00152a; 	T(INC(ax));	// 60632 inc     ax ;~ 1E67:152A
cs=0x1e67;eip=0x00152b; 	T(INC(ax));	// 60633 inc     ax ;~ 1E67:152B
cs=0x1e67;eip=0x00152c; 	T(CBW);	// 60634 cbw ;~ 1E67:152C
cs=0x1e67;eip=0x00152d; 	R(CALL(__amlink,0));	// 60635 call    __amlink ;~ 1E67:152D
cs=0x1e67;eip=0x001530; 	R(JZ(loc_2e18f));	// 60636 jz      short loc_2E18F ;~ 1E67:1530
cs=0x1e67;eip=0x001532; 	X(DEC(*(raddr(ds,di-2))));	// 60637 dec     byte ptr [di-2] ;~ 1E67:1532
loc_2e185:
	// 8563 
cs=0x1e67;eip=0x001535; 	R(CALL(__amexpand,0));	// 60640 call    __amexpand ;~ 1E67:1535
cs=0x1e67;eip=0x001538; 	R(JZ(loc_2e18f));	// 60641 jz      short loc_2E18F ;~ 1E67:1538
cs=0x1e67;eip=0x00153a; 	T(XCHG(ax, si));	// 60642 xchg    ax, si ;~ 1E67:153A
cs=0x1e67;eip=0x00153b; 	T(DEC(si));	// 60643 dec     si ;~ 1E67:153B
cs=0x1e67;eip=0x00153c; 	T(DEC(si));	// 60644 dec     si ;~ 1E67:153C
cs=0x1e67;eip=0x00153d; 	R(JMP(loc_2e128));	// 60645 jmp     short loc_2E128 ;~ 1E67:153D
loc_2e18f:
	// 8564 
cs=0x1e67;eip=0x00153f; 	T(MOV(ax, ds));	// 60650 mov     ax, ds ;~ 1E67:153F
cs=0x1e67;eip=0x001541; 	T(MOV(cx, ss));	// 60651 mov     cx, ss ;~ 1E67:1541
cs=0x1e67;eip=0x001543; 	T(CMP(ax, cx));	// 60652 cmp     ax, cx ;~ 1E67:1543
cs=0x1e67;eip=0x001545; 	R(JZ(loc_2e19b));	// 60653 jz      short loc_2E19B ;~ 1E67:1545
cs=0x1e67;eip=0x001547; 	X(MOV(*(dw*)(((db*)&word_3ef7c)), ax));	// 60654 mov     es:word_3EF7C, ax ;~ 1E67:1547
loc_2e19b:
	// 8565 
cs=0x1e67;eip=0x00154b; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 60657 mov     ax, [bx] ;~ 1E67:154B
cs=0x1e67;eip=0x00154d; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 60658 mov     [bx+2], ax ;~ 1E67:154D
cs=0x1e67;eip=0x001550; 	T(XOR(ax, ax));	// 60659 xor     ax, ax ;~ 1E67:1550
cs=0x1e67;eip=0x001552; 	T(CWD);	// 60660 cwd ;~ 1E67:1552
cs=0x1e67;eip=0x001553; 	R(RETN(0));	// 60661 retn ;~ 1E67:1553
__amexpand:
	// 60669 
cs=0x1e67;eip=0x001554; 	X(PUSH(cx));	// 60670 push    cx ;~ 1E67:1554
ret_1e67_1555:
	// 8566 
cs=0x1e67;eip=0x001555; 	T(MOV(ax, *(dw*)(raddr(ds,di-2))));	// 60671 mov     ax, [di-2] ;~ 1E67:1555
cs=0x1e67;eip=0x001558; 	T(TEST(al, 1));	// 60672 test    al, 1 ;~ 1E67:1558
cs=0x1e67;eip=0x00155a; 	R(JZ(loc_2e1af));	// 60673 jz      short loc_2E1AF ;~ 1E67:155A
cs=0x1e67;eip=0x00155c; 	T(SUB(cx, ax));	// 60674 sub     cx, ax ;~ 1E67:155C
cs=0x1e67;eip=0x00155e; 	T(DEC(cx));	// 60675 dec     cx ;~ 1E67:155E
loc_2e1af:
	// 8567 
cs=0x1e67;eip=0x00155f; 	T(INC(cx));	// 60678 inc     cx ;~ 1E67:155F
cs=0x1e67;eip=0x001560; 	T(INC(cx));	// 60679 inc     cx ;~ 1E67:1560
cs=0x1e67;eip=0x001561; 	T(MOV(dx, 0x7FFF));	// 60680 mov     dx, 7FFFh ;~ 1E67:1561
loc_2e1b4:
	// 8568 
cs=0x1e67;eip=0x001564; 	T(CMP(dx, *(dw*)(((db*)&word_3ef7e))));	// 60683 cmp     dx, es:word_3EF7E ;~ 1E67:1564
cs=0x1e67;eip=0x001569; 	R(JBE(loc_2e1bf));	// 60684 jbe     short loc_2E1BF ;~ 1E67:1569
cs=0x1e67;eip=0x00156b; 	T(SHR(dx, 1));	// 60685 shr     dx, 1 ;~ 1E67:156B
cs=0x1e67;eip=0x00156d; 	R(JNZ(loc_2e1b4));	// 60686 jnz     short loc_2E1B4 ;~ 1E67:156D
loc_2e1bf:
	// 8569 
cs=0x1e67;eip=0x00156f; 	T(MOV(ax, cx));	// 60690 mov     ax, cx ;~ 1E67:156F
cs=0x1e67;eip=0x001571; 	T(ADD(ax, si));	// 60691 add     ax, si ;~ 1E67:1571
cs=0x1e67;eip=0x001573; 	R(JC(loc_2e1da));	// 60692 jb      short loc_2E1DA ;~ 1E67:1573
cs=0x1e67;eip=0x001575; 	T(ADD(ax, dx));	// 60693 add     ax, dx ;~ 1E67:1575
cs=0x1e67;eip=0x001577; 	R(JC(loc_2e1d6));	// 60694 jb      short loc_2E1D6 ;~ 1E67:1577
cs=0x1e67;eip=0x001579; 	T(NOT(dx));	// 60695 not     dx ;~ 1E67:1579
cs=0x1e67;eip=0x00157b; 	T(AND(ax, dx));	// 60696 and     ax, dx ;~ 1E67:157B
cs=0x1e67;eip=0x00157d; 	T(SUB(ax, si));	// 60697 sub     ax, si ;~ 1E67:157D
cs=0x1e67;eip=0x00157f; 	R(CALL(__amlink,0));	// 60698 call    __amlink ;~ 1E67:157F
cs=0x1e67;eip=0x001582; 	R(JNZ(loc_2e1dc));	// 60699 jnz     short loc_2E1DC ;~ 1E67:1582
cs=0x1e67;eip=0x001584; 	T(NOT(dx));	// 60700 not     dx ;~ 1E67:1584
loc_2e1d6:
	// 8570 
cs=0x1e67;eip=0x001586; 	T(SHR(dx, 1));	// 60703 shr     dx, 1 ;~ 1E67:1586
cs=0x1e67;eip=0x001588; 	R(JNZ(loc_2e1bf));	// 60704 jnz     short loc_2E1BF ;~ 1E67:1588
loc_2e1da:
	// 8571 
cs=0x1e67;eip=0x00158a; 	T(XOR(ax, ax));	// 60707 xor     ax, ax ;~ 1E67:158A
loc_2e1dc:
	// 8572 
cs=0x1e67;eip=0x00158c; 	X(POP(cx));	// 60710 pop     cx ;~ 1E67:158C
cs=0x1e67;eip=0x00158d; 	R(RETN(0));	// 60711 retn ;~ 1E67:158D
__amlink:
	// 60719 
cs=0x1e67;eip=0x00158e; 	X(PUSH(dx));	// 60721 push    dx ;~ 1E67:158E
ret_1e67_158f:
	// 8573 
cs=0x1e67;eip=0x00158f; 	X(PUSH(cx));	// 60722 push    cx ;~ 1E67:158F
cs=0x1e67;eip=0x001590; 	R(CALL(__amallocbrk,0));	// 60723 call    __amallocbrk ;~ 1E67:1590
cs=0x1e67;eip=0x001593; 	R(JZ(loc_2e1fd));	// 60724 jz      short loc_2E1FD ;~ 1E67:1593
cs=0x1e67;eip=0x001595; 	X(PUSH(di));	// 60725 push    di ;~ 1E67:1595
cs=0x1e67;eip=0x001596; 	T(MOV(di, si));	// 60726 mov     di, si ;~ 1E67:1596
cs=0x1e67;eip=0x001598; 	T(MOV(si, ax));	// 60727 mov     si, ax ;~ 1E67:1598
cs=0x1e67;eip=0x00159a; 	T(ADD(si, dx));	// 60728 add     si, dx ;~ 1E67:159A
cs=0x1e67;eip=0x00159c; 	X(MOV(*(dw*)(raddr(ds,si-2)), 0x0FFFE));	// 60729 mov     word ptr [si-2], 0FFFEh ;~ 1E67:159C
cs=0x1e67;eip=0x0015a1; 	X(MOV(*(dw*)(raddr(ds,bx+6)), si));	// 60730 mov     [bx+6], si ;~ 1E67:15A1
cs=0x1e67;eip=0x0015a4; 	T(MOV(dx, si));	// 60731 mov     dx, si ;~ 1E67:15A4
cs=0x1e67;eip=0x0015a6; 	T(SUB(dx, di));	// 60732 sub     dx, di ;~ 1E67:15A6
cs=0x1e67;eip=0x0015a8; 	T(DEC(dx));	// 60733 dec     dx ;~ 1E67:15A8
cs=0x1e67;eip=0x0015a9; 	X(MOV(*(dw*)(raddr(ds,di-2)), dx));	// 60734 mov     [di-2], dx ;~ 1E67:15A9
cs=0x1e67;eip=0x0015ac; 	X(POP(ax));	// 60735 pop     ax ;~ 1E67:15AC
loc_2e1fd:
	// 8574 
cs=0x1e67;eip=0x0015ad; 	X(POP(cx));	// 60738 pop     cx ;~ 1E67:15AD
cs=0x1e67;eip=0x0015ae; 	X(POP(dx));	// 60739 pop     dx ;~ 1E67:15AE
cs=0x1e67;eip=0x0015af; 	R(RETN(0));	// 60740 retn ;~ 1E67:15AF
__amallocbrk:
	// 60748 
cs=0x1e67;eip=0x0015b0; 	X(PUSH(bx));	// 60750 push    bx ;~ 1E67:15B0
ret_1e67_15b1:
	// 8575 
cs=0x1e67;eip=0x0015b1; 	X(PUSH(ax));	// 60751 push    ax ;~ 1E67:15B1
cs=0x1e67;eip=0x0015b2; 	T(XOR(dx, dx));	// 60752 xor     dx, dx ;~ 1E67:15B2
cs=0x1e67;eip=0x0015b4; 	X(PUSH(ds));	// 60753 push    ds ;~ 1E67:15B4
cs=0x1e67;eip=0x0015b5; 	X(PUSH(dx));	// 60754 push    dx ;~ 1E67:15B5
cs=0x1e67;eip=0x0015b6; 	X(PUSH(dx));	// 60755 push    dx ;~ 1E67:15B6
cs=0x1e67;eip=0x0015b7; 	X(PUSH(ax));	// 60756 push    ax ;~ 1E67:15B7
cs=0x1e67;eip=0x0015b8; 	T(MOV(ax, 1));	// 60757 mov     ax, 1 ;~ 1E67:15B8
cs=0x1e67;eip=0x0015bb; 	X(PUSH(ax));	// 60758 push    ax ;~ 1E67:15BB
cs=0x1e67;eip=0x0015bc; 	X(PUSH(es));	// 60759 push    es ;~ 1E67:15BC
cs=0x1e67;eip=0x0015bd; 	X(POP(ds));	// 60760 pop     ds ;~ 1E67:15BD
cs=0x1e67;eip=0x0015be; 	R(CALLF(_brkctl,0));	// 60762 call    _brkctl ;~ 1E67:15BE
cs=0x1e67;eip=0x0015c3; 	T(ADD(sp, 8));	// 60763 add     sp, 8 ;~ 1E67:15C3
cs=0x1e67;eip=0x0015c6; 	T(CMP(dx, 0x0FFFF));	// 60764 cmp     dx, 0FFFFh ;~ 1E67:15C6
cs=0x1e67;eip=0x0015c9; 	X(POP(ds));	// 60765 pop     ds ;~ 1E67:15C9
cs=0x1e67;eip=0x0015ca; 	X(POP(dx));	// 60766 pop     dx ;~ 1E67:15CA
cs=0x1e67;eip=0x0015cb; 	X(POP(bx));	// 60767 pop     bx ;~ 1E67:15CB
cs=0x1e67;eip=0x0015cc; 	R(JZ(locret_2e220));	// 60768 jz      short locret_2E220 ;~ 1E67:15CC
cs=0x1e67;eip=0x0015ce; 	T(OR(dx, dx));	// 60769 or      dx, dx ;~ 1E67:15CE
locret_2e220:
	// 8576 
cs=0x1e67;eip=0x0015d0; 	R(RETN(0));	// 60772 retn ;~ 1E67:15D0
_brkctl:
	// 60782 
#undef arg_0
#define arg_0 6
	// 60784 arg_0           = word ptr  6 ;~ 1E67:15D2
#undef arg_2
#define arg_2 8
	// 60785 arg_2           = word ptr  8 ;~ 1E67:15D2
#undef arg_4
#define arg_4 0x0A
	// 60786 arg_4           = word ptr  0Ah ;~ 1E67:15D2
#undef arg_8
#define arg_8 0x0E
	// 60787 arg_8           = word ptr  0Eh ;~ 1E67:15D2
ret_1e67_15d2:
	// 8577 
cs=0x1e67;eip=0x0015d2; 	X(PUSH(bp));	// 60789 push    bp ;~ 1E67:15D2
cs=0x1e67;eip=0x0015d3; 	T(MOV(bp, sp));	// 60790 mov     bp, sp ;~ 1E67:15D3
cs=0x1e67;eip=0x0015d5; 	X(PUSH(si));	// 60791 push    si ;~ 1E67:15D5
cs=0x1e67;eip=0x0015d6; 	X(PUSH(di));	// 60792 push    di ;~ 1E67:15D6
cs=0x1e67;eip=0x0015d7; 	X(PUSH(es));	// 60793 push    es ;~ 1E67:15D7
cs=0x1e67;eip=0x0015d8; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0));	// 60794 cmp     [bp+arg_4], 0 ;~ 1E67:15D8
cs=0x1e67;eip=0x0015dc; 	R(JNZ(loc_2e266));	// 60795 jnz     short loc_2E266 ;~ 1E67:15DC
cs=0x1e67;eip=0x0015de; 	T(MOV(di, 0x360A));	// 60796 mov     di, 360Ah ;~ 1E67:15DE
cs=0x1e67;eip=0x0015e1; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 60797 mov     dx, [bp+arg_2] ;~ 1E67:15E1
cs=0x1e67;eip=0x0015e4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 60798 mov     ax, [bp+arg_0] ;~ 1E67:15E4
cs=0x1e67;eip=0x0015e7; 	T(DEC(ax));	// 60799 dec     ax ;~ 1E67:15E7
cs=0x1e67;eip=0x0015e8; 	R(JNZ(loc_2e241));	// 60800 jnz     short loc_2E241 ;~ 1E67:15E8
cs=0x1e67;eip=0x0015ea; 	R(CALL(sub_2e290,0));	// 60801 call    sub_2E290 ;~ 1E67:15EA
cs=0x1e67;eip=0x0015ed; 	R(JC(loc_2e266));	// 60802 jb      short loc_2E266 ;~ 1E67:15ED
cs=0x1e67;eip=0x0015ef; 	R(JMP(loc_2e289));	// 60803 jmp     short loc_2E289 ;~ 1E67:15EF
loc_2e241:
	// 8578 
cs=0x1e67;eip=0x0015f1; 	T(MOV(si, word_3edca));	// 60807 mov     si, word_3EDCA ;~ 1E67:15F1
cs=0x1e67;eip=0x0015f5; 	T(DEC(ax));	// 60808 dec     ax ;~ 1E67:15F5
cs=0x1e67;eip=0x0015f6; 	R(JZ(loc_2e259));	// 60809 jz      short loc_2E259 ;~ 1E67:15F6
cs=0x1e67;eip=0x0015f8; 	T(CMP(si, di));	// 60810 cmp     si, di ;~ 1E67:15F8
cs=0x1e67;eip=0x0015fa; 	R(JZ(loc_2e259));	// 60811 jz      short loc_2E259 ;~ 1E67:15FA
cs=0x1e67;eip=0x0015fc; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 60812 mov     ax, [si+2] ;~ 1E67:15FC
cs=0x1e67;eip=0x0015ff; 	X(MOV(*(dw*)(raddr(ss,bp+arg_8)), ax));	// 60813 mov     [bp+arg_8], ax ;~ 1E67:15FF
cs=0x1e67;eip=0x001602; 	X(PUSH(si));	// 60814 push    si ;~ 1E67:1602
cs=0x1e67;eip=0x001603; 	R(CALL(sub_2e290,0));	// 60815 call    sub_2E290 ;~ 1E67:1603
cs=0x1e67;eip=0x001606; 	X(POP(si));	// 60816 pop     si ;~ 1E67:1606
cs=0x1e67;eip=0x001607; 	R(JNC(loc_2e289));	// 60817 jnb     short loc_2E289 ;~ 1E67:1607
loc_2e259:
	// 8579 
cs=0x1e67;eip=0x001609; 	T(ADD(si, 4));	// 60821 add     si, 4 ;~ 1E67:1609
cs=0x1e67;eip=0x00160c; 	T(CMP(si, 0x365A));	// 60822 cmp     si, 365Ah ;~ 1E67:160C
cs=0x1e67;eip=0x001610; 	R(JNC(loc_2e266));	// 60823 jnb     short loc_2E266 ;~ 1E67:1610
cs=0x1e67;eip=0x001612; 	T(OR(dx, dx));	// 60824 or      dx, dx ;~ 1E67:1612
cs=0x1e67;eip=0x001614; 	R(JNZ(loc_2e26c));	// 60825 jnz     short loc_2E26C ;~ 1E67:1614
loc_2e266:
	// 8580 
cs=0x1e67;eip=0x001616; 	T(MOV(ax, 0x0FFFF));	// 60829 mov     ax, 0FFFFh ;~ 1E67:1616
cs=0x1e67;eip=0x001619; 	T(CWD);	// 60830 cwd ;~ 1E67:1619
cs=0x1e67;eip=0x00161a; 	R(JMP(loc_2e289));	// 60831 jmp     short loc_2E289 ;~ 1E67:161A
loc_2e26c:
	// 8581 
cs=0x1e67;eip=0x00161c; 	T(MOV(bx, dx));	// 60835 mov     bx, dx ;~ 1E67:161C
cs=0x1e67;eip=0x00161e; 	T(ADD(bx, 0x0F));	// 60836 add     bx, 0Fh ;~ 1E67:161E
cs=0x1e67;eip=0x001621; 	T(RCR(bx, 1));	// 60837 rcr     bx, 1 ;~ 1E67:1621
cs=0x1e67;eip=0x001623; 	T(MOV(cl, 3));	// 60838 mov     cl, 3 ;~ 1E67:1623
cs=0x1e67;eip=0x001625; 	T(SHR(bx, cl));	// 60839 shr     bx, cl ;~ 1E67:1625
cs=0x1e67;eip=0x001627; 	T(MOV(ah, 0x48));	// 60840 mov     ah, 48h ;~ 1E67:1627
cs=0x1e67;eip=0x001629; 	R(_INT(0x21));	// 60841 int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 1E67:1629
cs=0x1e67;eip=0x00162b; 	R(JC(loc_2e266));	// 60843 jb      short loc_2E266 ;~ 1E67:162B
cs=0x1e67;eip=0x00162d; 	T(XCHG(ax, dx));	// 60844 xchg    ax, dx ;~ 1E67:162D
cs=0x1e67;eip=0x00162e; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 60845 mov     [si], ax ;~ 1E67:162E
cs=0x1e67;eip=0x001630; 	X(MOV(*(dw*)(raddr(ds,si+2)), dx));	// 60846 mov     [si+2], dx ;~ 1E67:1630
cs=0x1e67;eip=0x001633; 	X(MOV(word_3edca, si));	// 60847 mov     word_3EDCA, si ;~ 1E67:1633
cs=0x1e67;eip=0x001637; 	T(XOR(ax, ax));	// 60848 xor     ax, ax ;~ 1E67:1637
loc_2e289:
	// 8582 
cs=0x1e67;eip=0x001639; 	X(POP(es));	// 60852 pop     es ;~ 1E67:1639
cs=0x1e67;eip=0x00163a; 	X(POP(di));	// 60854 pop     di ;~ 1E67:163A
cs=0x1e67;eip=0x00163b; 	X(POP(si));	// 60855 pop     si ;~ 1E67:163B
cs=0x1e67;eip=0x00163c; 	T(MOV(sp, bp));	// 60856 mov     sp, bp ;~ 1E67:163C
cs=0x1e67;eip=0x00163e; 	X(POP(bp));	// 60857 pop     bp ;~ 1E67:163E
cs=0x1e67;eip=0x00163f; 	R(RETF(0));	// 60858 retf ;~ 1E67:163F
sub_2e290:
	// 60866 
cs=0x1e67;eip=0x001640; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0E))));	// 60868 mov     cx, [bp+0Eh] ;~ 1E67:1640
ret_1e67_1643:
	// 8583 
cs=0x1e67;eip=0x001643; 	T(MOV(si, di));	// 60869 mov     si, di ;~ 1E67:1643
loc_2e295:
	// 8584 
cs=0x1e67;eip=0x001645; 	T(CMP(*(dw*)(raddr(ds,si+2)), cx));	// 60872 cmp     [si+2], cx ;~ 1E67:1645
cs=0x1e67;eip=0x001648; 	R(JZ(loc_2e2a6));	// 60873 jz      short loc_2E2A6 ;~ 1E67:1648
cs=0x1e67;eip=0x00164a; 	T(ADD(si, 4));	// 60874 add     si, 4 ;~ 1E67:164A
cs=0x1e67;eip=0x00164d; 	T(CMP(si, 0x365A));	// 60875 cmp     si, 365Ah ;~ 1E67:164D
cs=0x1e67;eip=0x001651; 	R(JNZ(loc_2e295));	// 60876 jnz     short loc_2E295 ;~ 1E67:1651
cs=0x1e67;eip=0x001653; 	T(STC);	// 60877 stc ;~ 1E67:1653
cs=0x1e67;eip=0x001654; 	R(JMP(locret_2e2e5));	// 60878 jmp     short locret_2E2E5 ;~ 1E67:1654
loc_2e2a6:
	// 8585 
cs=0x1e67;eip=0x001656; 	T(MOV(bx, dx));	// 60882 mov     bx, dx ;~ 1E67:1656
cs=0x1e67;eip=0x001658; 	T(ADD(bx, *(dw*)(raddr(ds,si))));	// 60883 add     bx, [si] ;~ 1E67:1658
cs=0x1e67;eip=0x00165a; 	R(JC(locret_2e2e5));	// 60884 jb      short locret_2E2E5 ;~ 1E67:165A
cs=0x1e67;eip=0x00165c; 	T(MOV(dx, bx));	// 60885 mov     dx, bx ;~ 1E67:165C
cs=0x1e67;eip=0x00165e; 	T(MOV(es, cx));	// 60886 mov     es, cx ;~ 1E67:165E
cs=0x1e67;eip=0x001660; 	T(CMP(si, di));	// 60887 cmp     si, di ;~ 1E67:1660
cs=0x1e67;eip=0x001662; 	R(JNZ(loc_2e2ba));	// 60888 jnz     short loc_2E2BA ;~ 1E67:1662
cs=0x1e67;eip=0x001664; 	T(CMP(word_3ed74, bx));	// 60889 cmp     word_3ED74, bx ;~ 1E67:1664
cs=0x1e67;eip=0x001668; 	R(JNC(loc_2e2e0));	// 60890 jnb     short loc_2E2E0 ;~ 1E67:1668
loc_2e2ba:
	// 8586 
cs=0x1e67;eip=0x00166a; 	T(ADD(bx, 0x0F));	// 60893 add     bx, 0Fh ;~ 1E67:166A
cs=0x1e67;eip=0x00166d; 	T(RCR(bx, 1));	// 60894 rcr     bx, 1 ;~ 1E67:166D
cs=0x1e67;eip=0x00166f; 	T(SHR(bx, 1));	// 60895 shr     bx, 1 ;~ 1E67:166F
cs=0x1e67;eip=0x001671; 	T(SHR(bx, 1));	// 60896 shr     bx, 1 ;~ 1E67:1671
cs=0x1e67;eip=0x001673; 	T(SHR(bx, 1));	// 60897 shr     bx, 1 ;~ 1E67:1673
cs=0x1e67;eip=0x001675; 	T(CMP(si, di));	// 60898 cmp     si, di ;~ 1E67:1675
cs=0x1e67;eip=0x001677; 	R(JNZ(loc_2e2d2));	// 60899 jnz     short loc_2E2D2 ;~ 1E67:1677
cs=0x1e67;eip=0x001679; 	T(ADD(bx, cx));	// 60900 add     bx, cx ;~ 1E67:1679
cs=0x1e67;eip=0x00167b; 	T(MOV(ax, crtpspseg));	// 60901 mov     ax, crtpspseg ;~ 1E67:167B
cs=0x1e67;eip=0x00167e; 	T(SUB(bx, ax));	// 60902 sub     bx, ax ;~ 1E67:167E
cs=0x1e67;eip=0x001680; 	T(MOV(es, ax));	// 60903 mov     es, ax ;~ 1E67:1680
loc_2e2d2:
	// 8587 
cs=0x1e67;eip=0x001682; 	T(MOV(ah, 0x4A));	// 60906 mov     ah, 4Ah ;~ 1E67:1682
cs=0x1e67;eip=0x001684; 	R(_INT(0x21));	// 60907 int     21h             ; DOS - 2+ - ADJUST MEMORY BLOCK SIZE (SETBLOCK) ;~ 1E67:1684
cs=0x1e67;eip=0x001686; 	R(JC(locret_2e2e5));	// 60910 jb      short locret_2E2E5 ;~ 1E67:1686
cs=0x1e67;eip=0x001688; 	T(CMP(si, di));	// 60911 cmp     si, di ;~ 1E67:1688
cs=0x1e67;eip=0x00168a; 	R(JNZ(loc_2e2e0));	// 60912 jnz     short loc_2E2E0 ;~ 1E67:168A
cs=0x1e67;eip=0x00168c; 	X(MOV(word_3ed74, dx));	// 60913 mov     word_3ED74, dx ;~ 1E67:168C
loc_2e2e0:
	// 8588 
cs=0x1e67;eip=0x001690; 	T(XCHG(ax, dx));	// 60917 xchg    ax, dx ;~ 1E67:1690
cs=0x1e67;eip=0x001691; 	X(XCHG(ax, *(dw*)(raddr(ds,si))));	// 60918 xchg    ax, [si] ;~ 1E67:1691
cs=0x1e67;eip=0x001693; 	T(MOV(dx, cx));	// 60919 mov     dx, cx ;~ 1E67:1693
locret_2e2e5:
	// 8589 
cs=0x1e67;eip=0x001695; 	R(RETN(0));	// 60923 retn ;~ 1E67:1695
_strcat:
	// 60932 
#undef arg_0
#define arg_0 6
	// 60935 arg_0           = dword ptr  6 ;~ 1E67:1696
ret_1e67_1696:
	// 8590 
cs=0x1e67;eip=0x001696; 	X(PUSH(bp));	// 60937 push    bp ;~ 1E67:1696
cs=0x1e67;eip=0x001697; 	T(MOV(bp, sp));	// 60938 mov     bp, sp ;~ 1E67:1697
cs=0x1e67;eip=0x001699; 	T(MOV(dx, di));	// 60939 mov     dx, di ;~ 1E67:1699
cs=0x1e67;eip=0x00169b; 	T(MOV(bx, si));	// 60940 mov     bx, si ;~ 1E67:169B
cs=0x1e67;eip=0x00169d; 	T(MOV(ax, ds));	// 60941 mov     ax, ds ;~ 1E67:169D
cs=0x1e67;eip=0x00169f; 	T(MOV(es, ax));	// 60942 mov     es, ax ;~ 1E67:169F
cs=0x1e67;eip=0x0016a1; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 60944 mov     di, word ptr [bp+arg_0] ;~ 1E67:16A1
cs=0x1e67;eip=0x0016a4; 	T(XOR(ax, ax));	// 60945 xor     ax, ax ;~ 1E67:16A4
cs=0x1e67;eip=0x0016a6; 	T(MOV(cx, 0x0FFFF));	// 60946 mov     cx, 0FFFFh ;~ 1E67:16A6
	// 60947 repne scasb ;~ 1E67:16A9
cs=0x1e67;eip=0x0016a9; 	T(	REPNE SCASB);	// 60947 repne scasb ;~ 1E67:16A9
cs=0x1e67;eip=0x0016ab; 	T(si = di-1);	// 60948 lea     si, [di-1] ;~ 1E67:16AB
cs=0x1e67;eip=0x0016ae; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 60949 mov     di, word ptr [bp+arg_0+2] ;~ 1E67:16AE
cs=0x1e67;eip=0x0016b1; 	T(MOV(cx, 0x0FFFF));	// 60950 mov     cx, 0FFFFh ;~ 1E67:16B1
	// 60951 repne scasb ;~ 1E67:16B4
cs=0x1e67;eip=0x0016b4; 	T(	REPNE SCASB);	// 60951 repne scasb ;~ 1E67:16B4
cs=0x1e67;eip=0x0016b6; 	T(NOT(cx));	// 60952 not     cx ;~ 1E67:16B6
cs=0x1e67;eip=0x0016b8; 	T(SUB(di, cx));	// 60953 sub     di, cx ;~ 1E67:16B8
cs=0x1e67;eip=0x0016ba; 	T(XCHG(di, si));	// 60954 xchg    di, si ;~ 1E67:16BA
cs=0x1e67;eip=0x0016bc; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 60955 mov     ax, word ptr [bp+arg_0] ;~ 1E67:16BC
cs=0x1e67;eip=0x0016bf; 	T(TEST(si, 1));	// 60956 test    si, 1 ;~ 1E67:16BF
cs=0x1e67;eip=0x0016c3; 	R(JZ(loc_2e317));	// 60957 jz      short loc_2E317 ;~ 1E67:16C3
cs=0x1e67;eip=0x0016c5; 	X(MOVSB);	// 60958 movsb ;~ 1E67:16C5
cs=0x1e67;eip=0x0016c6; 	T(DEC(cx));	// 60959 dec     cx ;~ 1E67:16C6
loc_2e317:
	// 8591 
cs=0x1e67;eip=0x0016c7; 	T(SHR(cx, 1));	// 60962 shr     cx, 1 ;~ 1E67:16C7
	// 60963 rep movsw ;~ 1E67:16C9
cs=0x1e67;eip=0x0016c9; 	X(	REP MOVSW);	// 60963 rep movsw ;~ 1E67:16C9
cs=0x1e67;eip=0x0016cb; 	T(ADC(cx, cx));	// 60964 adc     cx, cx ;~ 1E67:16CB
	// 60965 rep movsb ;~ 1E67:16CD
cs=0x1e67;eip=0x0016cd; 	X(	REP MOVSB);	// 60965 rep movsb ;~ 1E67:16CD
cs=0x1e67;eip=0x0016cf; 	T(MOV(si, bx));	// 60966 mov     si, bx ;~ 1E67:16CF
cs=0x1e67;eip=0x0016d1; 	T(MOV(di, dx));	// 60967 mov     di, dx ;~ 1E67:16D1
cs=0x1e67;eip=0x0016d3; 	X(POP(bp));	// 60968 pop     bp ;~ 1E67:16D3
cs=0x1e67;eip=0x0016d4; 	R(RETF(0));	// 60969 retf ;~ 1E67:16D4
_strcpy:
	// 60980 
#undef arg_0
#define arg_0 6
	// 60983 arg_0           = dword ptr  6 ;~ 1E67:16D6
ret_1e67_16d6:
	// 8592 
cs=0x1e67;eip=0x0016d6; 	X(PUSH(bp));	// 60985 push    bp ;~ 1E67:16D6
cs=0x1e67;eip=0x0016d7; 	T(MOV(bp, sp));	// 60986 mov     bp, sp ;~ 1E67:16D7
cs=0x1e67;eip=0x0016d9; 	T(MOV(dx, di));	// 60987 mov     dx, di ;~ 1E67:16D9
cs=0x1e67;eip=0x0016db; 	T(MOV(bx, si));	// 60988 mov     bx, si ;~ 1E67:16DB
cs=0x1e67;eip=0x0016dd; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 60989 mov     si, word ptr [bp+arg_0+2] ;~ 1E67:16DD
cs=0x1e67;eip=0x0016e0; 	T(MOV(di, si));	// 60990 mov     di, si ;~ 1E67:16E0
cs=0x1e67;eip=0x0016e2; 	T(MOV(ax, ds));	// 60991 mov     ax, ds ;~ 1E67:16E2
cs=0x1e67;eip=0x0016e4; 	T(MOV(es, ax));	// 60992 mov     es, ax ;~ 1E67:16E4
cs=0x1e67;eip=0x0016e6; 	T(XOR(ax, ax));	// 60993 xor     ax, ax ;~ 1E67:16E6
cs=0x1e67;eip=0x0016e8; 	T(MOV(cx, 0x0FFFF));	// 60994 mov     cx, 0FFFFh ;~ 1E67:16E8
	// 60995 repne scasb ;~ 1E67:16EB
cs=0x1e67;eip=0x0016eb; 	T(	REPNE SCASB);	// 60995 repne scasb ;~ 1E67:16EB
cs=0x1e67;eip=0x0016ed; 	T(NOT(cx));	// 60996 not     cx ;~ 1E67:16ED
cs=0x1e67;eip=0x0016ef; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 60997 mov     di, word ptr [bp+arg_0] ;~ 1E67:16EF
cs=0x1e67;eip=0x0016f2; 	T(MOV(ax, di));	// 60998 mov     ax, di ;~ 1E67:16F2
cs=0x1e67;eip=0x0016f4; 	T(TEST(al, 1));	// 60999 test    al, 1 ;~ 1E67:16F4
cs=0x1e67;eip=0x0016f6; 	R(JZ(loc_2e34a));	// 61000 jz      short loc_2E34A ;~ 1E67:16F6
cs=0x1e67;eip=0x0016f8; 	X(MOVSB);	// 61001 movsb ;~ 1E67:16F8
cs=0x1e67;eip=0x0016f9; 	T(DEC(cx));	// 61002 dec     cx ;~ 1E67:16F9
loc_2e34a:
	// 8593 
cs=0x1e67;eip=0x0016fa; 	T(SHR(cx, 1));	// 61005 shr     cx, 1 ;~ 1E67:16FA
	// 61006 rep movsw ;~ 1E67:16FC
cs=0x1e67;eip=0x0016fc; 	X(	REP MOVSW);	// 61006 rep movsw ;~ 1E67:16FC
cs=0x1e67;eip=0x0016fe; 	T(ADC(cx, cx));	// 61007 adc     cx, cx ;~ 1E67:16FE
	// 61008 rep movsb ;~ 1E67:1700
cs=0x1e67;eip=0x001700; 	X(	REP MOVSB);	// 61008 rep movsb ;~ 1E67:1700
cs=0x1e67;eip=0x001702; 	T(MOV(si, bx));	// 61009 mov     si, bx ;~ 1E67:1702
cs=0x1e67;eip=0x001704; 	T(MOV(di, dx));	// 61010 mov     di, dx ;~ 1E67:1704
cs=0x1e67;eip=0x001706; 	X(POP(bp));	// 61011 pop     bp ;~ 1E67:1706
cs=0x1e67;eip=0x001707; 	R(RETF(0));	// 61012 retf ;~ 1E67:1707
_strcmp:
	// 61021 
#undef arg_0
#define arg_0 6
	// 61024 arg_0           = dword ptr  6 ;~ 1E67:1708
ret_1e67_1708:
	// 8594 
cs=0x1e67;eip=0x001708; 	X(PUSH(bp));	// 61026 push    bp ;~ 1E67:1708
cs=0x1e67;eip=0x001709; 	T(MOV(bp, sp));	// 61027 mov     bp, sp ;~ 1E67:1709
cs=0x1e67;eip=0x00170b; 	T(MOV(dx, di));	// 61028 mov     dx, di ;~ 1E67:170B
cs=0x1e67;eip=0x00170d; 	T(MOV(bx, si));	// 61029 mov     bx, si ;~ 1E67:170D
cs=0x1e67;eip=0x00170f; 	T(MOV(ax, ds));	// 61030 mov     ax, ds ;~ 1E67:170F
cs=0x1e67;eip=0x001711; 	T(MOV(es, ax));	// 61031 mov     es, ax ;~ 1E67:1711
cs=0x1e67;eip=0x001713; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61032 mov     si, word ptr [bp+arg_0] ;~ 1E67:1713
cs=0x1e67;eip=0x001716; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 61033 mov     di, word ptr [bp+arg_0+2] ;~ 1E67:1716
cs=0x1e67;eip=0x001719; 	T(XOR(ax, ax));	// 61034 xor     ax, ax ;~ 1E67:1719
cs=0x1e67;eip=0x00171b; 	T(MOV(cx, 0x0FFFF));	// 61035 mov     cx, 0FFFFh ;~ 1E67:171B
	// 61036 repne scasb ;~ 1E67:171E
cs=0x1e67;eip=0x00171e; 	T(	REPNE SCASB);	// 61036 repne scasb ;~ 1E67:171E
cs=0x1e67;eip=0x001720; 	T(NOT(cx));	// 61037 not     cx ;~ 1E67:1720
cs=0x1e67;eip=0x001722; 	T(SUB(di, cx));	// 61038 sub     di, cx ;~ 1E67:1722
	// 61039 repe cmpsb ;~ 1E67:1724
cs=0x1e67;eip=0x001724; 	T(	REPE CMPSB);	// 61039 repe cmpsb ;~ 1E67:1724
cs=0x1e67;eip=0x001726; 	R(JZ(loc_2e37d));	// 61040 jz      short loc_2E37D ;~ 1E67:1726
cs=0x1e67;eip=0x001728; 	T(SBB(ax, ax));	// 61041 sbb     ax, ax ;~ 1E67:1728
cs=0x1e67;eip=0x00172a; 	T(SBB(ax, 0x0FFFF));	// 61042 sbb     ax, 0FFFFh ;~ 1E67:172A
loc_2e37d:
	// 8595 
cs=0x1e67;eip=0x00172d; 	T(MOV(si, bx));	// 61045 mov     si, bx ;~ 1E67:172D
cs=0x1e67;eip=0x00172f; 	T(MOV(di, dx));	// 61046 mov     di, dx ;~ 1E67:172F
cs=0x1e67;eip=0x001731; 	X(POP(bp));	// 61047 pop     bp ;~ 1E67:1731
cs=0x1e67;eip=0x001732; 	R(RETF(0));	// 61048 retf ;~ 1E67:1732
_strlen:
	// 61059 
#undef arg_0
#define arg_0 6
	// 61062 arg_0           = dword ptr  6 ;~ 1E67:1734
ret_1e67_1734:
	// 8596 
cs=0x1e67;eip=0x001734; 	X(PUSH(bp));	// 61064 push    bp ;~ 1E67:1734
cs=0x1e67;eip=0x001735; 	T(MOV(bp, sp));	// 61065 mov     bp, sp ;~ 1E67:1735
cs=0x1e67;eip=0x001737; 	T(MOV(dx, di));	// 61066 mov     dx, di ;~ 1E67:1737
cs=0x1e67;eip=0x001739; 	T(MOV(ax, ds));	// 61067 mov     ax, ds ;~ 1E67:1739
cs=0x1e67;eip=0x00173b; 	T(MOV(es, ax));	// 61068 mov     es, ax ;~ 1E67:173B
cs=0x1e67;eip=0x00173d; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61069 mov     di, word ptr [bp+arg_0] ;~ 1E67:173D
cs=0x1e67;eip=0x001740; 	T(XOR(ax, ax));	// 61070 xor     ax, ax ;~ 1E67:1740
cs=0x1e67;eip=0x001742; 	T(MOV(cx, 0x0FFFF));	// 61071 mov     cx, 0FFFFh ;~ 1E67:1742
	// 61072 repne scasb ;~ 1E67:1745
cs=0x1e67;eip=0x001745; 	T(	REPNE SCASB);	// 61072 repne scasb ;~ 1E67:1745
cs=0x1e67;eip=0x001747; 	T(NOT(cx));	// 61073 not     cx ;~ 1E67:1747
cs=0x1e67;eip=0x001749; 	T(DEC(cx));	// 61074 dec     cx ;~ 1E67:1749
cs=0x1e67;eip=0x00174a; 	T(XCHG(ax, cx));	// 61075 xchg    ax, cx ;~ 1E67:174A
cs=0x1e67;eip=0x00174b; 	T(MOV(di, dx));	// 61076 mov     di, dx ;~ 1E67:174B
cs=0x1e67;eip=0x00174d; 	X(POP(bp));	// 61077 pop     bp ;~ 1E67:174D
cs=0x1e67;eip=0x00174e; 	R(RETF(0));	// 61078 retf ;~ 1E67:174E
_itoa_:
	// 61089 
#undef arg_0
#define arg_0 6
	// 61091 arg_0           = dword ptr  6 ;~ 1E67:1750
#undef arg_4
#define arg_4 0x0A
	// 61092 arg_4           = dword ptr  0Ah ;~ 1E67:1750
ret_1e67_1750:
	// 8597 
cs=0x1e67;eip=0x001750; 	X(PUSH(bp));	// 61096 push    bp ;~ 1E67:1750
cs=0x1e67;eip=0x001751; 	T(MOV(bp, sp));	// 61097 mov     bp, sp ;~ 1E67:1751
cs=0x1e67;eip=0x001753; 	X(PUSH(si));	// 61098 push    si ;~ 1E67:1753
cs=0x1e67;eip=0x001754; 	X(PUSH(di));	// 61099 push    di ;~ 1E67:1754
cs=0x1e67;eip=0x001755; 	T(MOV(bl, 1));	// 61100 mov     bl, 1 ;~ 1E67:1755
cs=0x1e67;eip=0x001757; 	T(MOV(cx, *(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 61101 mov     cx, word ptr [bp+arg_4] ;~ 1E67:1757
cs=0x1e67;eip=0x00175a; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61102 mov     ax, word ptr [bp+arg_0] ;~ 1E67:175A
cs=0x1e67;eip=0x00175d; 	T(XOR(dx, dx));	// 61103 xor     dx, dx ;~ 1E67:175D
cs=0x1e67;eip=0x00175f; 	T(CMP(cx, 0x0A));	// 61104 cmp     cx, 0Ah ;~ 1E67:175F
cs=0x1e67;eip=0x001762; 	R(JNZ(loc_2e3b5));	// 61105 jnz     short loc_2E3B5 ;~ 1E67:1762
cs=0x1e67;eip=0x001764; 	T(CWD);	// 61106 cwd ;~ 1E67:1764
loc_2e3b5:
	// 8598 
cs=0x1e67;eip=0x001765; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 61109 mov     di, word ptr [bp+arg_0+2] ;~ 1E67:1765
cs=0x1e67;eip=0x001768; 	R(JMP(__cxtoa));	// 61110 jmp     __cxtoa ;~ 1E67:1768
_ultoa_:
	// 61121 
#undef arg_2
#define arg_2 6
	// 61123 arg_2           = word ptr  6 ;~ 1E67:176C
#undef arg_4
#define arg_4 8
	// 61124 arg_4           = dword ptr  8 ;~ 1E67:176C
#undef arg_8
#define arg_8 0x0C
	// 61125 arg_8           = dword ptr  0Ch ;~ 1E67:176C
ret_1e67_176c:
	// 8599 
cs=0x1e67;eip=0x00176c; 	X(PUSH(bp));	// 61129 push    bp ;~ 1E67:176C
cs=0x1e67;eip=0x00176d; 	T(MOV(bp, sp));	// 61130 mov     bp, sp ;~ 1E67:176D
cs=0x1e67;eip=0x00176f; 	X(PUSH(si));	// 61131 push    si ;~ 1E67:176F
cs=0x1e67;eip=0x001770; 	X(PUSH(di));	// 61132 push    di ;~ 1E67:1770
cs=0x1e67;eip=0x001771; 	T(MOV(bl, 0));	// 61133 mov     bl, 0 ;~ 1E67:1771
cs=0x1e67;eip=0x001773; 	R(JMP(__cltoasub));	// 61134 jmp     __cltoasub ;~ 1E67:1773
_abort:
	// 61143 
cs=0x1e67;eip=0x001776; 	X(PUSH(bp));	// 61144 push    bp ;~ 1E67:1776
ret_1e67_1777:
	// 8600 
cs=0x1e67;eip=0x001777; 	T(MOV(bp, sp));	// 61145 mov     bp, sp ;~ 1E67:1777
cs=0x1e67;eip=0x001779; 	T(MOV(ax, 0x0A));	// 61146 mov     ax, 0Ah ;~ 1E67:1779
cs=0x1e67;eip=0x00177c; 	X(PUSH(ax));	// 61147 push    ax ;~ 1E67:177C
cs=0x1e67;eip=0x00177d; 	R(CALLF(__nmsg_write,0));	// 61148 call    __NMSG_WRITE ;~ 1E67:177D
cs=0x1e67;eip=0x001782; 	T(MOV(ax, 0x16));	// 61149 mov     ax, 16h ;~ 1E67:1782
cs=0x1e67;eip=0x001785; 	X(PUSH(ax));	// 61150 push    ax              ; int ;~ 1E67:1785
cs=0x1e67;eip=0x001786; 	R(CALLF(_raise,0));	// 61151 call    _raise ;~ 1E67:1786
cs=0x1e67;eip=0x00178b; 	T(MOV(ax, 3));	// 61152 mov     ax, 3 ;~ 1E67:178B
cs=0x1e67;eip=0x00178e; 	X(PUSH(ax));	// 61153 push    ax ;~ 1E67:178E
cs=0x1e67;eip=0x00178f; 	R(CALLF(libsub_quit_to_dos,0));	// 61154 call    far ptr libsub_quit_to_dos ;~ 1E67:178F
seg010_1794_proc:
	// 61158 
cs=0x1e67;eip=0x001794; 	T(MOV(sp, bp));	// 61158 mov     sp, bp ;~ 1E67:1794
cs=0x1e67;eip=0x001796; 	X(POP(bp));	// 61159 pop     bp ;~ 1E67:1796
cs=0x1e67;eip=0x001797; 	R(RETF(0));	// 61160 retf ;~ 1E67:1797
_isatty:
	// 61167 
#undef arg_0
#define arg_0 6
	// 61170 arg_0           = dword ptr  6 ;~ 1E67:1798
ret_1e67_1798:
	// 8601 
cs=0x1e67;eip=0x001798; 	X(PUSH(bp));	// 61172 push    bp ;~ 1E67:1798
cs=0x1e67;eip=0x001799; 	T(MOV(bp, sp));	// 61173 mov     bp, sp ;~ 1E67:1799
cs=0x1e67;eip=0x00179b; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61174 mov     bx, word ptr [bp+arg_0] ;~ 1E67:179B
cs=0x1e67;eip=0x00179e; 	T(CMP(bx, word_3edf2));	// 61175 cmp     bx, word_3EDF2 ;~ 1E67:179E
cs=0x1e67;eip=0x0017a2; 	R(JGE(loc_2e405));	// 61176 jge     short loc_2E405 ;~ 1E67:17A2
cs=0x1e67;eip=0x0017a4; 	T(CMP(bx, 0));	// 61177 cmp     bx, 0 ;~ 1E67:17A4
cs=0x1e67;eip=0x0017a7; 	R(JL(loc_2e405));	// 61178 jl      short loc_2E405 ;~ 1E67:17A7
cs=0x1e67;eip=0x0017a9; 	T(TEST(*(raddr(ds,bx+0x3684)), 0x40));	// 61179 test    byte ptr [bx+3684h], 40h ;~ 1E67:17A9
cs=0x1e67;eip=0x0017ae; 	R(JZ(loc_2e405));	// 61180 jz      short loc_2E405 ;~ 1E67:17AE
cs=0x1e67;eip=0x0017b0; 	T(MOV(ax, 1));	// 61181 mov     ax, 1 ;~ 1E67:17B0
cs=0x1e67;eip=0x0017b3; 	R(JMP(loc_2e407));	// 61182 jmp     short loc_2E407 ;~ 1E67:17B3
loc_2e405:
	// 8602 
cs=0x1e67;eip=0x0017b5; 	T(XOR(ax, ax));	// 61187 xor     ax, ax ;~ 1E67:17B5
loc_2e407:
	// 8603 
cs=0x1e67;eip=0x0017b7; 	T(MOV(sp, bp));	// 61190 mov     sp, bp ;~ 1E67:17B7
cs=0x1e67;eip=0x0017b9; 	X(POP(bp));	// 61191 pop     bp ;~ 1E67:17B9
cs=0x1e67;eip=0x0017ba; 	R(RETF(0));	// 61192 retf ;~ 1E67:17BA
_int86:
	// 61203 
#undef var_e
#define var_e -0x0E
	// 61206 var_E           = dword ptr -0Eh ;~ 1E67:17BC
#undef var_a
#define var_a -0x0A
	// 61207 var_A           = byte ptr -0Ah ;~ 1E67:17BC
#undef var_9
#define var_9 -9
	// 61208 var_9           = byte ptr -9 ;~ 1E67:17BC
#undef var_8
#define var_8 -8
	// 61209 var_8           = byte ptr -8 ;~ 1E67:17BC
#undef var_7
#define var_7 -7
	// 61210 var_7           = byte ptr -7 ;~ 1E67:17BC
#undef var_6
#define var_6 -6
	// 61211 var_6           = byte ptr -6 ;~ 1E67:17BC
#undef arg_0
#define arg_0 6
	// 61212 arg_0           = dword ptr  6 ;~ 1E67:17BC
#undef arg_4
#define arg_4 0x0A
	// 61213 arg_4           = dword ptr  0Ah ;~ 1E67:17BC
ret_1e67_17bc:
	// 8604 
cs=0x1e67;eip=0x0017bc; 	X(PUSH(bp));	// 61215 push    bp ;~ 1E67:17BC
cs=0x1e67;eip=0x0017bd; 	T(MOV(bp, sp));	// 61216 mov     bp, sp ;~ 1E67:17BD
cs=0x1e67;eip=0x0017bf; 	X(PUSH(si));	// 61217 push    si ;~ 1E67:17BF
cs=0x1e67;eip=0x0017c0; 	X(PUSH(di));	// 61218 push    di ;~ 1E67:17C0
cs=0x1e67;eip=0x0017c1; 	T(SUB(sp, 0x0A));	// 61219 sub     sp, 0Ah ;~ 1E67:17C1
cs=0x1e67;eip=0x0017c4; 	X(MOV(*(raddr(ss,bp+var_a)), 0x0CD));	// 61220 mov     [bp+var_A], 0CDh ; 'Õ' ;~ 1E67:17C4
cs=0x1e67;eip=0x0017c8; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61221 mov     ax, word ptr [bp+arg_0] ;~ 1E67:17C8
cs=0x1e67;eip=0x0017cb; 	X(MOV(*(raddr(ss,bp+var_9)), al));	// 61222 mov     [bp+var_9], al ;~ 1E67:17CB
int_num=al;
cs=0x1e67;eip=0x0017ce; 	T(CMP(al, 0x25));	// 61223 cmp     al, 25h ; '%' ;~ 1E67:17CE
cs=0x1e67;eip=0x0017d0; 	R(JZ(loc_2e42c));	// 61224 jz      short loc_2E42C ;~ 1E67:17D0
cs=0x1e67;eip=0x0017d2; 	T(CMP(al, 0x26));	// 61225 cmp     al, 26h ; '&' ;~ 1E67:17D2
cs=0x1e67;eip=0x0017d4; 	R(JZ(loc_2e42c));	// 61226 jz      short loc_2E42C ;~ 1E67:17D4
cs=0x1e67;eip=0x0017d6; 	X(MOV(*(raddr(ss,bp+var_8)), 0x0CB));	// 61227 mov     [bp+var_8], 0CBh ; 'À' ;~ 1E67:17D6
cs=0x1e67;eip=0x0017da; 	R(JMP(loc_2e438));	// 61228 jmp     short loc_2E438 ;~ 1E67:17DA
loc_2e42c:
	// 8605 
cs=0x1e67;eip=0x0017dc; 	X(MOV(*(raddr(ss,bp+var_6)), 0x0CB));	// 61233 mov     [bp+var_6], 0CBh ; 'À' ;~ 1E67:17DC
cs=0x1e67;eip=0x0017e0; 	X(MOV(*(raddr(ss,bp+var_7)), 0x44));	// 61234 mov     [bp+var_7], 44h ; 'D' ;~ 1E67:17E0
cs=0x1e67;eip=0x0017e4; 	X(MOV(*(raddr(ss,bp+var_8)), 0x44));	// 61235 mov     [bp+var_8], 44h ; 'D' ;~ 1E67:17E4
loc_2e438:
	// 8606 
cs=0x1e67;eip=0x0017e8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e +2))), ss));	// 61238 mov     word ptr [bp+var_E+2], ss ;~ 1E67:17E8
cs=0x1e67;eip=0x0017eb; 	T(ax = bp+var_a);	// 61239 lea     ax, [bp+var_A] ;~ 1E67:17EB
cs=0x1e67;eip=0x0017ee; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e))), ax));	// 61240 mov     word ptr [bp+var_E], ax ;~ 1E67:17EE
cs=0x1e67;eip=0x0017f1; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 61241 mov     di, word ptr [bp+arg_0+2] ;~ 1E67:17F1
cs=0x1e67;eip=0x0017f4; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 61242 mov     ax, [di] ;~ 1E67:17F4
cs=0x1e67;eip=0x0017f6; 	T(MOV(bx, *(dw*)(raddr(ds,di+2))));	// 61243 mov     bx, [di+2] ;~ 1E67:17F6
cs=0x1e67;eip=0x0017f9; 	T(MOV(cx, *(dw*)(raddr(ds,di+4))));	// 61244 mov     cx, [di+4] ;~ 1E67:17F9
cs=0x1e67;eip=0x0017fc; 	T(MOV(dx, *(dw*)(raddr(ds,di+6))));	// 61245 mov     dx, [di+6] ;~ 1E67:17FC
cs=0x1e67;eip=0x0017ff; 	T(MOV(si, *(dw*)(raddr(ds,di+8))));	// 61246 mov     si, [di+8] ;~ 1E67:17FF
cs=0x1e67;eip=0x001802; 	T(MOV(di, *(dw*)(raddr(ds,di+0x0A))));	// 61247 mov     di, [di+0Ah] ;~ 1E67:1802
cs=0x1e67;eip=0x001805; 	X(PUSH(bp));	// 61248 push    bp ;~ 1E67:1805
cs=0x1e67;eip=0x001806;// 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_e))));	// 61249 call    [bp+var_E] ;~ 1E67:1806
R(_INT(int_num));
if (int_num==0x25 || int_num==0x26) sp+=2;
cs=0x1e67;eip=0x001809; 	X(POP(bp));	// 61250 pop     bp ;~ 1E67:1809
cs=0x1e67;eip=0x00180a; 	T(CLD);	// 61251 cld ;~ 1E67:180A
cs=0x1e67;eip=0x00180b; 	X(PUSH(di));	// 61252 push    di ;~ 1E67:180B
cs=0x1e67;eip=0x00180c; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 61253 mov     di, word ptr [bp+arg_4] ;~ 1E67:180C
cs=0x1e67;eip=0x00180f; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 61254 mov     [di], ax ;~ 1E67:180F
cs=0x1e67;eip=0x001811; 	X(MOV(*(dw*)(raddr(ds,di+2)), bx));	// 61255 mov     [di+2], bx ;~ 1E67:1811
cs=0x1e67;eip=0x001814; 	X(MOV(*(dw*)(raddr(ds,di+4)), cx));	// 61256 mov     [di+4], cx ;~ 1E67:1814
cs=0x1e67;eip=0x001817; 	X(MOV(*(dw*)(raddr(ds,di+6)), dx));	// 61257 mov     [di+6], dx ;~ 1E67:1817
cs=0x1e67;eip=0x00181a; 	X(MOV(*(dw*)(raddr(ds,di+8)), si));	// 61258 mov     [di+8], si ;~ 1E67:181A
cs=0x1e67;eip=0x00181d; 	X(POP(*(dw*)(raddr(ds,di+0x0A))));	// 61259 pop     word ptr [di+0Ah] ;~ 1E67:181D
cs=0x1e67;eip=0x001820; 	R(JC(loc_2e476));	// 61260 jb      short loc_2E476 ;~ 1E67:1820
cs=0x1e67;eip=0x001822; 	T(XOR(si, si));	// 61261 xor     si, si ;~ 1E67:1822
cs=0x1e67;eip=0x001824; 	R(JMP(loc_2e480));	// 61262 jmp     short loc_2E480 ;~ 1E67:1824
loc_2e476:
	// 8607 
cs=0x1e67;eip=0x001826; 	R(CALLF(__maperror,0));	// 61266 call    __maperror ;~ 1E67:1826
cs=0x1e67;eip=0x00182b; 	T(MOV(si, 1));	// 61267 mov     si, 1 ;~ 1E67:182B
cs=0x1e67;eip=0x00182e; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 61268 mov     ax, [di] ;~ 1E67:182E
loc_2e480:
	// 8608 
cs=0x1e67;eip=0x001830; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), si));	// 61271 mov     [di+0Ch], si ;~ 1E67:1830
cs=0x1e67;eip=0x001833; 	T(ADD(sp, 0x0A));	// 61272 add     sp, 0Ah ;~ 1E67:1833
cs=0x1e67;eip=0x001836; 	X(POP(di));	// 61273 pop     di ;~ 1E67:1836
cs=0x1e67;eip=0x001837; 	X(POP(si));	// 61274 pop     si ;~ 1E67:1837
cs=0x1e67;eip=0x001838; 	T(MOV(sp, bp));	// 61275 mov     sp, bp ;~ 1E67:1838
cs=0x1e67;eip=0x00183a; 	X(POP(bp));	// 61276 pop     bp ;~ 1E67:183A
cs=0x1e67;eip=0x00183b; 	R(RETF(0));	// 61277 retf ;~ 1E67:183B
_sprintf:
	// 61286 
#undef var_c
#define var_c -0x0C
	// 61289 var_C           = byte ptr -0Ch ;~ 1E67:183C
#undef var_2
#define var_2 -2
	// 61290 var_2           = word ptr -2 ;~ 1E67:183C
#undef arg_0
#define arg_0 6
	// 61291 arg_0           = dword ptr  6 ;~ 1E67:183C
#undef arg_4
#define arg_4 0x0A
	// 61292 arg_4           = dword ptr  0Ah ;~ 1E67:183C
ret_1e67_183c:
	// 8609 
cs=0x1e67;eip=0x00183c; 	X(PUSH(bp));	// 61294 push    bp ;~ 1E67:183C
cs=0x1e67;eip=0x00183d; 	T(MOV(bp, sp));	// 61295 mov     bp, sp ;~ 1E67:183D
cs=0x1e67;eip=0x00183f; 	T(SUB(sp, 0x0E));	// 61296 sub     sp, 0Eh ;~ 1E67:183F
cs=0x1e67;eip=0x001842; 	X(PUSH(di));	// 61297 push    di ;~ 1E67:1842
cs=0x1e67;eip=0x001843; 	X(PUSH(si));	// 61298 push    si              ; FILE * ;~ 1E67:1843
cs=0x1e67;eip=0x001844; 	T(ax = bp+var_c);	// 61299 lea     ax, [bp+var_C] ;~ 1E67:1844
cs=0x1e67;eip=0x001847; 	T(MOV(di, ax));	// 61300 mov     di, ax ;~ 1E67:1847
cs=0x1e67;eip=0x001849; 	T(ax = bp+arg_4);	// 61301 lea     ax, [bp+arg_4] ;~ 1E67:1849
cs=0x1e67;eip=0x00184c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 61302 mov     [bp+var_2], ax ;~ 1E67:184C
cs=0x1e67;eip=0x00184f; 	X(MOV(*(raddr(ds,di+6)), 0x42));	// 61303 mov     byte ptr [di+6], 42h ; 'B' ;~ 1E67:184F
cs=0x1e67;eip=0x001853; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61304 mov     ax, word ptr [bp+arg_0] ;~ 1E67:1853
cs=0x1e67;eip=0x001856; 	X(MOV(*(dw*)(raddr(ds,di+4)), ax));	// 61305 mov     [di+4], ax ;~ 1E67:1856
cs=0x1e67;eip=0x001859; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 61306 mov     [di], ax ;~ 1E67:1859
cs=0x1e67;eip=0x00185b; 	X(MOV(*(dw*)(raddr(ds,di+2)), 0x7FFF));	// 61307 mov     word ptr [di+2], 7FFFh ;~ 1E67:185B
cs=0x1e67;eip=0x001860; 	T(ax = bp+arg_4);	// 61308 lea     ax, [bp+arg_4] ;~ 1E67:1860
cs=0x1e67;eip=0x001863; 	X(PUSH(ax));	// 61309 push    ax ;~ 1E67:1863
cs=0x1e67;eip=0x001864; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 61310 push    word ptr [bp+arg_0+2] ;~ 1E67:1864
cs=0x1e67;eip=0x001867; 	X(PUSH(di));	// 61311 push    di ;~ 1E67:1867
cs=0x1e67;eip=0x001868; 	R(CALLF(__output,0));	// 61312 call    __output ;~ 1E67:1868
cs=0x1e67;eip=0x00186d; 	T(ADD(sp, 6));	// 61313 add     sp, 6 ;~ 1E67:186D
cs=0x1e67;eip=0x001870; 	T(MOV(si, ax));	// 61314 mov     si, ax ;~ 1E67:1870
cs=0x1e67;eip=0x001872; 	X(DEC(*(dw*)(raddr(ds,di+2))));	// 61315 dec     word ptr [di+2] ;~ 1E67:1872
cs=0x1e67;eip=0x001875; 	R(JS(loc_2e4d2));	// 61316 js      short loc_2E4D2 ;~ 1E67:1875
cs=0x1e67;eip=0x001877; 	T(SUB(al, al));	// 61317 sub     al, al ;~ 1E67:1877
cs=0x1e67;eip=0x001879; 	T(MOV(bx, *(dw*)(raddr(ds,di))));	// 61318 mov     bx, [di] ;~ 1E67:1879
cs=0x1e67;eip=0x00187b; 	X(INC(*(dw*)(raddr(ds,di))));	// 61319 inc     word ptr [di] ;~ 1E67:187B
cs=0x1e67;eip=0x00187d; 	X(MOV(*(raddr(ds,bx)), al));	// 61320 mov     [bx], al ;~ 1E67:187D
cs=0x1e67;eip=0x00187f; 	R(JMP(loc_2e4de));	// 61321 jmp     short loc_2E4DE ;~ 1E67:187F
loc_2e4d2:
	// 8610 
cs=0x1e67;eip=0x001882; 	X(PUSH(di));	// 61326 push    di              ; FILE * ;~ 1E67:1882
cs=0x1e67;eip=0x001883; 	T(SUB(ax, ax));	// 61327 sub     ax, ax ;~ 1E67:1883
cs=0x1e67;eip=0x001885; 	X(PUSH(ax));	// 61328 push    ax              ; int ;~ 1E67:1885
cs=0x1e67;eip=0x001886; 	R(CALLF(__flsbuf,0));	// 61329 call    __flsbuf ;~ 1E67:1886
cs=0x1e67;eip=0x00188b; 	T(ADD(sp, 4));	// 61330 add     sp, 4 ;~ 1E67:188B
loc_2e4de:
	// 8611 
cs=0x1e67;eip=0x00188e; 	T(MOV(ax, si));	// 61333 mov     ax, si ;~ 1E67:188E
cs=0x1e67;eip=0x001890; 	X(POP(si));	// 61334 pop     si ;~ 1E67:1890
cs=0x1e67;eip=0x001891; 	X(POP(di));	// 61335 pop     di ;~ 1E67:1891
cs=0x1e67;eip=0x001892; 	T(MOV(sp, bp));	// 61336 mov     sp, bp ;~ 1E67:1892
cs=0x1e67;eip=0x001894; 	X(POP(bp));	// 61337 pop     bp ;~ 1E67:1894
cs=0x1e67;eip=0x001895; 	R(RETF(0));	// 61338 retf ;~ 1E67:1895
_stricmp_:
	// 61347 
#undef arg_0
#define arg_0 6
	// 61350 arg_0           = dword ptr  6 ;~ 1E67:1896
ret_1e67_1896:
	// 8612 
cs=0x1e67;eip=0x001896; 	X(PUSH(bp));	// 61352 push    bp ;~ 1E67:1896
cs=0x1e67;eip=0x001897; 	T(MOV(bp, sp));	// 61353 mov     bp, sp ;~ 1E67:1897
cs=0x1e67;eip=0x001899; 	T(MOV(dx, si));	// 61354 mov     dx, si ;~ 1E67:1899
cs=0x1e67;eip=0x00189b; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 61355 mov     si, word ptr [bp+arg_0+2] ;~ 1E67:189B
cs=0x1e67;eip=0x00189e; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61356 mov     bx, word ptr [bp+arg_0] ;~ 1E67:189E
cs=0x1e67;eip=0x0018a1; 	T(MOV(al, 0x0FF));	// 61357 mov     al, 0FFh ;~ 1E67:18A1
loc_2e4f3:
	// 8613 
cs=0x1e67;eip=0x0018a3; 	T(OR(al, al));	// 61361 or      al, al ;~ 1E67:18A3
cs=0x1e67;eip=0x0018a5; 	R(JZ(loc_2e523));	// 61362 jz      short loc_2E523 ;~ 1E67:18A5
cs=0x1e67;eip=0x0018a7; 	T(LODSB);	// 61363 lodsb ;~ 1E67:18A7
cs=0x1e67;eip=0x0018a8; 	T(MOV(ah, *(raddr(ds,bx))));	// 61364 mov     ah, [bx] ;~ 1E67:18A8
cs=0x1e67;eip=0x0018aa; 	T(INC(bx));	// 61365 inc     bx ;~ 1E67:18AA
cs=0x1e67;eip=0x0018ab; 	T(CMP(ah, al));	// 61366 cmp     ah, al ;~ 1E67:18AB
cs=0x1e67;eip=0x0018ad; 	R(JZ(loc_2e4f3));	// 61367 jz      short loc_2E4F3 ;~ 1E67:18AD
cs=0x1e67;eip=0x0018af; 	T(SUB(al, 0x41));	// 61368 sub     al, 41h ; 'A' ;~ 1E67:18AF
cs=0x1e67;eip=0x0018b1; 	T(CMP(al, 0x1A));	// 61369 cmp     al, 1Ah ;~ 1E67:18B1
cs=0x1e67;eip=0x0018b3; 	T(SBB(cl, cl));	// 61370 sbb     cl, cl ;~ 1E67:18B3
cs=0x1e67;eip=0x0018b5; 	T(AND(cl, 0x20));	// 61371 and     cl, 20h ;~ 1E67:18B5
cs=0x1e67;eip=0x0018b8; 	T(ADD(al, cl));	// 61372 add     al, cl ;~ 1E67:18B8
cs=0x1e67;eip=0x0018ba; 	T(ADD(al, 0x41));	// 61373 add     al, 41h ; 'A' ;~ 1E67:18BA
cs=0x1e67;eip=0x0018bc; 	T(XCHG(ah, al));	// 61374 xchg    ah, al ;~ 1E67:18BC
cs=0x1e67;eip=0x0018be; 	T(SUB(al, 0x41));	// 61375 sub     al, 41h ; 'A' ;~ 1E67:18BE
cs=0x1e67;eip=0x0018c0; 	T(CMP(al, 0x1A));	// 61376 cmp     al, 1Ah ;~ 1E67:18C0
cs=0x1e67;eip=0x0018c2; 	T(SBB(cl, cl));	// 61377 sbb     cl, cl ;~ 1E67:18C2
cs=0x1e67;eip=0x0018c4; 	T(AND(cl, 0x20));	// 61378 and     cl, 20h ;~ 1E67:18C4
cs=0x1e67;eip=0x0018c7; 	T(ADD(al, cl));	// 61379 add     al, cl ;~ 1E67:18C7
cs=0x1e67;eip=0x0018c9; 	T(ADD(al, 0x41));	// 61380 add     al, 41h ; 'A' ;~ 1E67:18C9
cs=0x1e67;eip=0x0018cb; 	T(CMP(al, ah));	// 61381 cmp     al, ah ;~ 1E67:18CB
cs=0x1e67;eip=0x0018cd; 	R(JZ(loc_2e4f3));	// 61382 jz      short loc_2E4F3 ;~ 1E67:18CD
cs=0x1e67;eip=0x0018cf; 	T(SBB(al, al));	// 61383 sbb     al, al ;~ 1E67:18CF
cs=0x1e67;eip=0x0018d1; 	T(SBB(al, 0x0FF));	// 61384 sbb     al, 0FFh ;~ 1E67:18D1
loc_2e523:
	// 8614 
cs=0x1e67;eip=0x0018d3; 	T(CBW);	// 61387 cbw ;~ 1E67:18D3
cs=0x1e67;eip=0x0018d4; 	T(MOV(si, dx));	// 61388 mov     si, dx ;~ 1E67:18D4
cs=0x1e67;eip=0x0018d6; 	X(POP(bp));	// 61389 pop     bp ;~ 1E67:18D6
cs=0x1e67;eip=0x0018d7; 	R(RETF(0));	// 61390 retf ;~ 1E67:18D7
seg010_18d8_proc:
	// 61396 
__cltoasub:
	// 8615 
cs=0x1e67;eip=0x0018d8; 	T(MOV(cx, *(dw*)((dw*)(raddr(ss,bp+arg_8)))));	// 61397 mov     cx, word ptr [bp+arg_8] ;~ 1E67:18D8
cs=0x1e67;eip=0x0018db; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 61398 mov     ax, [bp+arg_2] ;~ 1E67:18DB
cs=0x1e67;eip=0x0018de; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 61399 mov     dx, word ptr [bp+arg_4] ;~ 1E67:18DE
cs=0x1e67;eip=0x0018e1; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_4+2)))));	// 61400 mov     di, word ptr [bp+arg_4+2] ;~ 1E67:18E1
__cxtoa:
	// 8616 
cs=0x1e67;eip=0x0018e4; 	X(PUSH(di));	// 61405 push    di ;~ 1E67:18E4
cs=0x1e67;eip=0x0018e5; 	X(PUSH(ds));	// 61406 push    ds ;~ 1E67:18E5
cs=0x1e67;eip=0x0018e6; 	X(POP(es));	// 61407 pop     es ;~ 1E67:18E6
cs=0x1e67;eip=0x0018e7; 	T(CLD);	// 61408 cld ;~ 1E67:18E7
cs=0x1e67;eip=0x0018e8; 	T(XCHG(ax, bx));	// 61409 xchg    ax, bx ;~ 1E67:18E8
cs=0x1e67;eip=0x0018e9; 	T(OR(al, al));	// 61410 or      al, al ;~ 1E67:18E9
cs=0x1e67;eip=0x0018eb; 	R(JZ(loc_2e550));	// 61411 jz      short loc_2E550 ;~ 1E67:18EB
cs=0x1e67;eip=0x0018ed; 	T(CMP(cx, 0x0A));	// 61412 cmp     cx, 0Ah ;~ 1E67:18ED
cs=0x1e67;eip=0x0018f0; 	R(JNZ(loc_2e550));	// 61413 jnz     short loc_2E550 ;~ 1E67:18F0
cs=0x1e67;eip=0x0018f2; 	T(OR(dx, dx));	// 61414 or      dx, dx ;~ 1E67:18F2
cs=0x1e67;eip=0x0018f4; 	R(JNS(loc_2e550));	// 61415 jns     short loc_2E550 ;~ 1E67:18F4
cs=0x1e67;eip=0x0018f6; 	T(MOV(al, 0x2D));	// 61416 mov     al, 2Dh ; '-' ;~ 1E67:18F6
cs=0x1e67;eip=0x0018f8; 	X(STOSB);	// 61417 stosb ;~ 1E67:18F8
cs=0x1e67;eip=0x0018f9; 	T(NEG(bx));	// 61418 neg     bx ;~ 1E67:18F9
cs=0x1e67;eip=0x0018fb; 	T(ADC(dx, 0));	// 61419 adc     dx, 0 ;~ 1E67:18FB
cs=0x1e67;eip=0x0018fe; 	T(NEG(dx));	// 61420 neg     dx ;~ 1E67:18FE
loc_2e550:
	// 8617 
cs=0x1e67;eip=0x001900; 	T(MOV(si, di));	// 61424 mov     si, di ;~ 1E67:1900
loc_2e552:
	// 8618 
cs=0x1e67;eip=0x001902; 	T(XCHG(ax, dx));	// 61427 xchg    ax, dx ;~ 1E67:1902
cs=0x1e67;eip=0x001903; 	T(XOR(dx, dx));	// 61428 xor     dx, dx ;~ 1E67:1903
cs=0x1e67;eip=0x001905; 	T(OR(ax, ax));	// 61429 or      ax, ax ;~ 1E67:1905
cs=0x1e67;eip=0x001907; 	R(JZ(loc_2e55b));	// 61430 jz      short loc_2E55B ;~ 1E67:1907
cs=0x1e67;eip=0x001909; 	T(DIV2(cx));	// 61431 div     cx ;~ 1E67:1909
loc_2e55b:
	// 8619 
cs=0x1e67;eip=0x00190b; 	T(XCHG(ax, bx));	// 61434 xchg    ax, bx ;~ 1E67:190B
cs=0x1e67;eip=0x00190c; 	T(DIV2(cx));	// 61435 div     cx ;~ 1E67:190C
cs=0x1e67;eip=0x00190e; 	T(XCHG(ax, dx));	// 61436 xchg    ax, dx ;~ 1E67:190E
cs=0x1e67;eip=0x00190f; 	T(XCHG(dx, bx));	// 61437 xchg    dx, bx ;~ 1E67:190F
cs=0x1e67;eip=0x001911; 	T(ADD(al, 0x30));	// 61438 add     al, 30h ; '0' ;~ 1E67:1911
cs=0x1e67;eip=0x001913; 	T(CMP(al, 0x39));	// 61439 cmp     al, 39h ; '9' ;~ 1E67:1913
cs=0x1e67;eip=0x001915; 	R(JBE(loc_2e569));	// 61440 jbe     short loc_2E569 ;~ 1E67:1915
cs=0x1e67;eip=0x001917; 	T(ADD(al, 0x27));	// 61441 add     al, 27h ; ''' ;~ 1E67:1917
loc_2e569:
	// 8620 
cs=0x1e67;eip=0x001919; 	X(STOSB);	// 61444 stosb ;~ 1E67:1919
cs=0x1e67;eip=0x00191a; 	T(MOV(ax, dx));	// 61445 mov     ax, dx ;~ 1E67:191A
cs=0x1e67;eip=0x00191c; 	T(OR(ax, bx));	// 61446 or      ax, bx ;~ 1E67:191C
cs=0x1e67;eip=0x00191e; 	R(JNZ(loc_2e552));	// 61447 jnz     short loc_2E552 ;~ 1E67:191E
cs=0x1e67;eip=0x001920; 	X(MOV(*(raddr(ds,di)), al));	// 61448 mov     [di], al ;~ 1E67:1920
loc_2e572:
	// 8621 
cs=0x1e67;eip=0x001922; 	T(DEC(di));	// 61451 dec     di ;~ 1E67:1922
cs=0x1e67;eip=0x001923; 	T(LODSB);	// 61452 lodsb ;~ 1E67:1923
cs=0x1e67;eip=0x001924; 	X(XCHG(al, *(raddr(ds,di))));	// 61453 xchg    al, [di] ;~ 1E67:1924
cs=0x1e67;eip=0x001926; 	X(MOV(*(raddr(ds,si-1)), al));	// 61454 mov     [si-1], al ;~ 1E67:1926
cs=0x1e67;eip=0x001929; 	T(ax = si+1);	// 61455 lea     ax, [si+1] ;~ 1E67:1929
cs=0x1e67;eip=0x00192c; 	T(CMP(ax, di));	// 61456 cmp     ax, di ;~ 1E67:192C
cs=0x1e67;eip=0x00192e; 	R(JC(loc_2e572));	// 61457 jb      short loc_2E572 ;~ 1E67:192E
cs=0x1e67;eip=0x001930; 	X(POP(ax));	// 61458 pop     ax ;~ 1E67:1930
cs=0x1e67;eip=0x001931; 	X(POP(di));	// 61459 pop     di ;~ 1E67:1931
cs=0x1e67;eip=0x001932; 	X(POP(si));	// 61460 pop     si ;~ 1E67:1932
cs=0x1e67;eip=0x001933; 	T(MOV(sp, bp));	// 61461 mov     sp, bp ;~ 1E67:1933
cs=0x1e67;eip=0x001935; 	X(POP(bp));	// 61462 pop     bp ;~ 1E67:1935
cs=0x1e67;eip=0x001936; 	R(RETF(0));	// 61463 retf ;~ 1E67:1936
_abs:
	// 61473 
#undef arg_0
#define arg_0 6
	// 61476 arg_0           = dword ptr  6 ;~ 1E67:1938
ret_1e67_1938:
	// 8622 
cs=0x1e67;eip=0x001938; 	X(PUSH(bp));	// 61478 push    bp ;~ 1E67:1938
cs=0x1e67;eip=0x001939; 	T(MOV(bp, sp));	// 61479 mov     bp, sp ;~ 1E67:1939
cs=0x1e67;eip=0x00193b; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+arg_0))), 0));	// 61480 cmp     word ptr [bp+arg_0], 0 ;~ 1E67:193B
cs=0x1e67;eip=0x00193f; 	R(JL(loc_2e596));	// 61481 jl      short loc_2E596 ;~ 1E67:193F
cs=0x1e67;eip=0x001941; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61482 mov     ax, word ptr [bp+arg_0] ;~ 1E67:1941
cs=0x1e67;eip=0x001944; 	R(JMP(loc_2e59b));	// 61483 jmp     short loc_2E59B ;~ 1E67:1944
loc_2e596:
	// 8623 
cs=0x1e67;eip=0x001946; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61487 mov     ax, word ptr [bp+arg_0] ;~ 1E67:1946
cs=0x1e67;eip=0x001949; 	T(NEG(ax));	// 61488 neg     ax ;~ 1E67:1949
loc_2e59b:
	// 8624 
cs=0x1e67;eip=0x00194b; 	X(POP(bp));	// 61491 pop     bp ;~ 1E67:194B
cs=0x1e67;eip=0x00194c; 	R(RETF(0));	// 61492 retf ;~ 1E67:194C
_raise:
	// 61509 
#undef var_4
#define var_4 -4
	// 61511 var_4           = dword ptr -4 ;~ 1E67:195A
#undef arg_0
#define arg_0 6
	// 61512 arg_0           = dword ptr  6 ;~ 1E67:195A
ret_1e67_195a:
	// 8625 
cs=0x1e67;eip=0x00195a; 	X(PUSH(bp));	// 61514 push    bp ;~ 1E67:195A
cs=0x1e67;eip=0x00195b; 	T(MOV(bp, sp));	// 61515 mov     bp, sp ;~ 1E67:195B
cs=0x1e67;eip=0x00195d; 	T(SUB(sp, 4));	// 61516 sub     sp, 4 ;~ 1E67:195D
cs=0x1e67;eip=0x001960; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61517 mov     ax, word ptr [bp+arg_0] ;~ 1E67:1960
cs=0x1e67;eip=0x001963; 	T(CMP(ax, 2));	// 61518 cmp     ax, 2 ;~ 1E67:1963
cs=0x1e67;eip=0x001966; 	R(JNZ(loc_2e5c1));	// 61519 jnz     short loc_2E5C1 ;~ 1E67:1966
cs=0x1e67;eip=0x001968; 	T(CLC);	// 61520 clc ;~ 1E67:1968
cs=0x1e67;eip=0x001969; 	R(_INT(0x23));	// 61521 int     23h             ; DOS - CONTROL "C" EXIT ADDRESS ;~ 1E67:1969
cs=0x1e67;eip=0x00196b; 	R(JNC(loc_2e635));	// 61526 jnb     short loc_2E635 ; jumptable 0002E5ED case 0 ;~ 1E67:196B
cs=0x1e67;eip=0x00196d; 	T(MOV(ah, 0x4C));	// 61527 mov     ah, 4Ch ;~ 1E67:196D
cs=0x1e67;eip=0x00196f; 	R(_INT(0x21));	// 61528 int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 1E67:196F
loc_2e5c1:
	// 8626 
cs=0x1e67;eip=0x001971; 	T(CMP(ax, 8));	// 61533 cmp     ax, 8 ;~ 1E67:1971
cs=0x1e67;eip=0x001974; 	R(JNZ(loc_2e5d0));	// 61534 jnz     short loc_2E5D0 ;~ 1E67:1974
cs=0x1e67;eip=0x001976; 	T(MOV(bx, *(dw*)(((db*)&dword_40c1e))));	// 61535 mov     bx, word ptr dword_40C1E ;~ 1E67:1976
cs=0x1e67;eip=0x00197a; 	T(OR(bx, *(dw*)(((db*)&dword_40c1e)+2)));	// 61536 or      bx, word ptr dword_40C1E+2 ;~ 1E67:197A
cs=0x1e67;eip=0x00197e; 	R(JZ(loc_2e62f));	// 61537 jz      short loc_2E62F ;~ 1E67:197E
loc_2e5d0:
	// 8627 
cs=0x1e67;eip=0x001980; 	R(CALLF(__sigentry,0));	// 61540 call    __sigentry ;~ 1E67:1980
cs=0x1e67;eip=0x001985; 	R(JC(loc_2e62f));	// 61541 jb      short loc_2E62F ;~ 1E67:1985
cs=0x1e67;eip=0x001987; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 61542 mov     ax, [bx] ;~ 1E67:1987
cs=0x1e67;eip=0x001989; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 61543 mov     dx, [bx+2] ;~ 1E67:1989
cs=0x1e67;eip=0x00198c; 	T(OR(dx, dx));	// 61544 or      dx, dx ;~ 1E67:198C
cs=0x1e67;eip=0x00198e; 	R(JNZ(loc_2e5f2));	// 61545 jnz     short loc_2E5F2 ;~ 1E67:198E
cs=0x1e67;eip=0x001990; 	T(CMP(ax, 1));	// 61546 cmp     ax, 1 ;~ 1E67:1990
cs=0x1e67;eip=0x001993; 	R(JA(loc_2e5f2));	// 61547 ja      short loc_2E5F2 ;~ 1E67:1993
cs=0x1e67;eip=0x001995; 	T(OR(ax, ax));	// 61548 or      ax, ax ;~ 1E67:1995
cs=0x1e67;eip=0x001997; 	R(JNZ(loc_2e635));	// 61549 jnz     short loc_2E635 ; jumptable 0002E5ED case 0 ;~ 1E67:1997
cs=0x1e67;eip=0x001999; 	T(MOV(bx, cx));	// 61550 mov     bx, cx ;~ 1E67:1999
cs=0x1e67;eip=0x00199b; 	T(SHL(bx, 1));	// 61551 shl     bx, 1           ; switch 6 cases ;~ 1E67:199B
	cs=seg_offset(seg010);
cs=0x1e67;eip=0x00199d; __disp=*(dw*)(((db*)&jpt_2e5ed)+bx);
	R(JMP(__dispatch_call));	// 61552 jmp     cs:jpt_2E5ED[bx] ; switch jump ;~ 1E67:199D
loc_2e5f2:
	// 8628 
cs=0x1e67;eip=0x0019a2; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 61557 mov     word ptr [bp+var_4], ax ;~ 1E67:19A2
cs=0x1e67;eip=0x0019a5; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 61558 mov     word ptr [bp+var_4+2], dx ;~ 1E67:19A5
cs=0x1e67;eip=0x0019a8; 	X(PUSH(es));	// 61559 push    es ;~ 1E67:19A8
cs=0x1e67;eip=0x0019a9; 	X(PUSH(bp));	// 61560 push    bp ;~ 1E67:19A9
cs=0x1e67;eip=0x0019aa; 	X(PUSH(di));	// 61561 push    di ;~ 1E67:19AA
cs=0x1e67;eip=0x0019ab; 	X(PUSH(si));	// 61562 push    si ;~ 1E67:19AB
cs=0x1e67;eip=0x0019ac; 	T(MOV(cx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61563 mov     cx, word ptr [bp+arg_0] ;~ 1E67:19AC
cs=0x1e67;eip=0x0019af; 	T(CMP(cx, 8));	// 61564 cmp     cx, 8 ;~ 1E67:19AF
cs=0x1e67;eip=0x0019b2; 	R(JZ(loc_2e60b));	// 61565 jz      short loc_2E60B ;~ 1E67:19B2
cs=0x1e67;eip=0x0019b4; 	T(XOR(ax, ax));	// 61566 xor     ax, ax ;~ 1E67:19B4
cs=0x1e67;eip=0x0019b6; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 61567 mov     [bx], ax ;~ 1E67:19B6
cs=0x1e67;eip=0x0019b8; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 61568 mov     [bx+2], ax ;~ 1E67:19B8
loc_2e60b:
	// 8629 
cs=0x1e67;eip=0x0019bb; 	T(MOV(ax, 0x8C));	// 61571 mov     ax, 8Ch ; 'å' ;~ 1E67:19BB
cs=0x1e67;eip=0x0019be; 	X(PUSH(ax));	// 61572 push    ax ;~ 1E67:19BE
cs=0x1e67;eip=0x0019bf; 	X(PUSH(cx));	// 61573 push    cx ;~ 1E67:19BF
cs=0x1e67;eip=0x0019c0; 	T(CLD);	// 61574 cld ;~ 1E67:19C0
cs=0x1e67;eip=0x0019c1; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_4))));	// 61575 call    [bp+var_4] ;~ 1E67:19C1
cs=0x1e67;eip=0x0019c4; 	T(ADD(sp, 4));	// 61576 add     sp, 4 ;~ 1E67:19C4
cs=0x1e67;eip=0x0019c7; 	X(POP(si));	// 61577 pop     si ;~ 1E67:19C7
cs=0x1e67;eip=0x0019c8; 	X(POP(di));	// 61578 pop     di ;~ 1E67:19C8
cs=0x1e67;eip=0x0019c9; 	X(POP(bp));	// 61579 pop     bp ;~ 1E67:19C9
cs=0x1e67;eip=0x0019ca; 	X(POP(es));	// 61580 pop     es ;~ 1E67:19CA
cs=0x1e67;eip=0x0019cb; 	R(JMP(loc_2e635));	// 61582 jmp     short loc_2E635 ; jumptable 0002E5ED case 0 ;~ 1E67:19CB
loc_2e61e:
	// 8630 
cs=0x1e67;eip=0x0019ce; 	T(MOV(ax, 0x8C));	// 61588 mov     ax, 8Ch ; 'å'   ; jumptable 0002E5ED case 2 ;~ 1E67:19CE
cs=0x1e67;eip=0x0019d1; 	R(CALLF(__dispatch_call,*(dd*)(((db*)&dword_40c26))));	// 61589 call    ss:dword_40C26 ;~ 1E67:19D1
loc_2e626:
	// 8631 
cs=0x1e67;eip=0x0019d6; 	T(MOV(ax, 3));	// 61593 mov     ax, 3           ; jumptable 0002E5ED cases 1,3-5 ;~ 1E67:19D6
cs=0x1e67;eip=0x0019d9; 	X(PUSH(ax));	// 61594 push    ax ;~ 1E67:19D9
cs=0x1e67;eip=0x0019da; 	R(CALLF(libsub_quit_to_dos,0));	// 61595 call    far ptr libsub_quit_to_dos ;~ 1E67:19DA
loc_2e62f:
	// 8632 
cs=0x1e67;eip=0x0019df; 	T(MOV(ax, 0x0FFFF));	// 61600 mov     ax, 0FFFFh ;~ 1E67:19DF
cs=0x1e67;eip=0x0019e2; 	R(JMP(loc_2e637));	// 61601 jmp     short loc_2E637 ;~ 1E67:19E2
loc_2e635:
	// 8633 
cs=0x1e67;eip=0x0019e5; 	T(XOR(ax, ax));	// 61608 xor     ax, ax          ; jumptable 0002E5ED case 0 ;~ 1E67:19E5
loc_2e637:
	// 8634 
cs=0x1e67;eip=0x0019e7; 	T(MOV(sp, bp));	// 61611 mov     sp, bp ;~ 1E67:19E7
cs=0x1e67;eip=0x0019e9; 	X(POP(bp));	// 61612 pop     bp ;~ 1E67:19E9
cs=0x1e67;eip=0x0019ea; 	R(RETF(0));	// 61613 retf ;~ 1E67:19EA
_srand:
	// 61624 
#undef arg_0
#define arg_0 6
	// 61626 arg_0           = dword ptr  6 ;~ 1E67:19EC
ret_1e67_19ec:
	// 8635 
cs=0x1e67;eip=0x0019ec; 	X(PUSH(bp));	// 61628 push    bp ;~ 1E67:19EC
cs=0x1e67;eip=0x0019ed; 	T(MOV(bp, sp));	// 61629 mov     bp, sp ;~ 1E67:19ED
cs=0x1e67;eip=0x0019ef; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61630 mov     ax, word ptr [bp+arg_0] ;~ 1E67:19EF
cs=0x1e67;eip=0x0019f2; 	X(MOV(word_3f0a0, ax));	// 61631 mov     word_3F0A0, ax ;~ 1E67:19F2
cs=0x1e67;eip=0x0019f5; 	X(MOV(word_3f0a2, 0));	// 61632 mov     word_3F0A2, 0 ;~ 1E67:19F5
cs=0x1e67;eip=0x0019fb; 	X(POP(bp));	// 61633 pop     bp ;~ 1E67:19FB
cs=0x1e67;eip=0x0019fc; 	R(RETF(0));	// 61634 retf ;~ 1E67:19FC
_rand:
	// 61645 
cs=0x1e67;eip=0x0019fe; 	T(MOV(ax, 0x43FD));	// 61647 mov     ax, 43FDh ;~ 1E67:19FE
ret_1e67_1a01:
	// 8636 
cs=0x1e67;eip=0x001a01; 	T(MOV(dx, 3));	// 61648 mov     dx, 3 ;~ 1E67:1A01
cs=0x1e67;eip=0x001a04; 	X(PUSH(dx));	// 61649 push    dx ;~ 1E67:1A04
cs=0x1e67;eip=0x001a05; 	X(PUSH(ax));	// 61650 push    ax ;~ 1E67:1A05
cs=0x1e67;eip=0x001a06; 	X(PUSH(word_3f0a2));	// 61651 push    word_3F0A2 ;~ 1E67:1A06
cs=0x1e67;eip=0x001a0a; 	X(PUSH(word_3f0a0));	// 61652 push    word_3F0A0 ;~ 1E67:1A0A
cs=0x1e67;eip=0x001a0e; 	R(CALLF(__aflmul,0));	// 61653 call    __aFlmul ;~ 1E67:1A0E
cs=0x1e67;eip=0x001a13; 	T(ADD(ax, 0x9EC3));	// 61654 add     ax, 9EC3h ;~ 1E67:1A13
cs=0x1e67;eip=0x001a16; 	T(ADC(dx, 0x26));	// 61655 adc     dx, 26h ; '&' ;~ 1E67:1A16
cs=0x1e67;eip=0x001a19; 	X(MOV(word_3f0a0, ax));	// 61656 mov     word_3F0A0, ax ;~ 1E67:1A19
cs=0x1e67;eip=0x001a1c; 	X(MOV(word_3f0a2, dx));	// 61657 mov     word_3F0A2, dx ;~ 1E67:1A1C
cs=0x1e67;eip=0x001a20; 	T(MOV(ax, dx));	// 61658 mov     ax, dx ;~ 1E67:1A20
cs=0x1e67;eip=0x001a22; 	T(AND(ah, 0x7F));	// 61659 and     ah, 7Fh ;~ 1E67:1A22
cs=0x1e67;eip=0x001a25; 	R(RETF(0));	// 61660 retf ;~ 1E67:1A25
_signal:
	// 61671 
#undef var_4
#define var_4 -4
	// 61673 var_4           = word ptr -4 ;~ 1E67:1A2C
#undef var_2
#define var_2 -2
	// 61674 var_2           = word ptr -2 ;~ 1E67:1A2C
#undef arg_0
#define arg_0 6
	// 61675 arg_0           = dword ptr  6 ;~ 1E67:1A2C
#undef arg_4
#define arg_4 0x0A
	// 61676 arg_4           = dword ptr  0Ah ;~ 1E67:1A2C
ret_1e67_1a2c:
	// 8637 
cs=0x1e67;eip=0x001a2c; 	X(PUSH(bp));	// 61680 push    bp ;~ 1E67:1A2C
cs=0x1e67;eip=0x001a2d; 	T(MOV(bp, sp));	// 61681 mov     bp, sp ;~ 1E67:1A2D
cs=0x1e67;eip=0x001a2f; 	T(SUB(sp, 4));	// 61682 sub     sp, 4 ;~ 1E67:1A2F
cs=0x1e67;eip=0x001a32; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61683 mov     ax, word ptr [bp+arg_0] ;~ 1E67:1A32
cs=0x1e67;eip=0x001a35; 	T(CMP(ax, 8));	// 61684 cmp     ax, 8 ;~ 1E67:1A35
cs=0x1e67;eip=0x001a38; 	R(JNZ(loc_2e69b));	// 61685 jnz     short loc_2E69B ;~ 1E67:1A38
cs=0x1e67;eip=0x001a3a; 	T(MOV(bx, *(dw*)(((db*)&dword_40c1e))));	// 61686 mov     bx, word ptr dword_40C1E ;~ 1E67:1A3A
cs=0x1e67;eip=0x001a3e; 	T(OR(bx, *(dw*)(((db*)&dword_40c1e)+2)));	// 61687 or      bx, word ptr dword_40C1E+2 ;~ 1E67:1A3E
cs=0x1e67;eip=0x001a42; 	R(JNZ(loc_2e69b));	// 61688 jnz     short loc_2E69B ;~ 1E67:1A42
loc_2e694:
	// 8638 
cs=0x1e67;eip=0x001a44; 	T(MOV(ax, 0x1600));	// 61691 mov     ax, 1600h ;~ 1E67:1A44
cs=0x1e67;eip=0x001a47; 	T(STC);	// 61692 stc ;~ 1E67:1A47
cs=0x1e67;eip=0x001a48; 	R(JMP(__dosretax));	// 61693 jmp     __dosretax ;~ 1E67:1A48
loc_2e69b:
	// 8639 
cs=0x1e67;eip=0x001a4b; 	R(CALLF(__sigentry,0));	// 61698 call    __sigentry ;~ 1E67:1A4B
cs=0x1e67;eip=0x001a50; 	R(JC(loc_2e694));	// 61699 jb      short loc_2E694 ;~ 1E67:1A50
cs=0x1e67;eip=0x001a52; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 61700 mov     ax, [bx] ;~ 1E67:1A52
cs=0x1e67;eip=0x001a54; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 61701 mov     [bp+var_2], ax ;~ 1E67:1A54
cs=0x1e67;eip=0x001a57; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 61702 mov     ax, [bx+2] ;~ 1E67:1A57
cs=0x1e67;eip=0x001a5a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 61703 mov     [bp+var_4], ax ;~ 1E67:1A5A
cs=0x1e67;eip=0x001a5d; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 61704 mov     ax, word ptr [bp+arg_0+2] ;~ 1E67:1A5D
cs=0x1e67;eip=0x001a60; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 61705 mov     dx, word ptr [bp+arg_4] ;~ 1E67:1A60
cs=0x1e67;eip=0x001a63; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 61706 mov     [bx], ax ;~ 1E67:1A63
cs=0x1e67;eip=0x001a65; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 61707 mov     [bx+2], dx ;~ 1E67:1A65
cs=0x1e67;eip=0x001a68; 	T(MOV(cx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61708 mov     cx, word ptr [bp+arg_0] ;~ 1E67:1A68
cs=0x1e67;eip=0x001a6b; 	T(CMP(cx, 2));	// 61709 cmp     cx, 2 ;~ 1E67:1A6B
cs=0x1e67;eip=0x001a6e; 	R(JNZ(loc_2e6ec));	// 61710 jnz     short loc_2E6EC ;~ 1E67:1A6E
cs=0x1e67;eip=0x001a70; 	T(OR(dx, dx));	// 61711 or      dx, dx ;~ 1E67:1A70
cs=0x1e67;eip=0x001a72; 	R(JNZ(loc_2e6c8));	// 61712 jnz     short loc_2E6C8 ;~ 1E67:1A72
cs=0x1e67;eip=0x001a74; 	T(OR(ax, ax));	// 61713 or      ax, ax ;~ 1E67:1A74
cs=0x1e67;eip=0x001a76; 	R(JZ(loc_2e6ec));	// 61714 jz      short loc_2E6EC ;~ 1E67:1A76
loc_2e6c8:
	// 8640 
cs=0x1e67;eip=0x001a78; 	T(CMP(word_3ef98, 0));	// 61717 cmp     word_3EF98, 0 ;~ 1E67:1A78
cs=0x1e67;eip=0x001a7d; 	R(JNZ(loc_2e6ec));	// 61718 jnz     short loc_2E6EC ;~ 1E67:1A7D
cs=0x1e67;eip=0x001a7f; 	X(PUSH(bx));	// 61719 push    bx ;~ 1E67:1A7F
cs=0x1e67;eip=0x001a80; 	T(MOV(al, 0x23));	// 61720 mov     al, 23h ; '#' ;~ 1E67:1A80
cs=0x1e67;eip=0x001a82; 	T(MOV(ah, 0x35));	// 61721 mov     ah, 35h ;~ 1E67:1A82
cs=0x1e67;eip=0x001a84; 	R(_INT(0x21));	// 61722 int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 1E67:1A84
cs=0x1e67;eip=0x001a86; 	X(MOV(word_3ef98, es));	// 61725 mov     word_3EF98, es ;~ 1E67:1A86
cs=0x1e67;eip=0x001a8a; 	X(MOV(word_3ef9a, bx));	// 61726 mov     word_3EF9A, bx ;~ 1E67:1A8A
cs=0x1e67;eip=0x001a8e; 	X(POP(bx));	// 61727 pop     bx ;~ 1E67:1A8E
cs=0x1e67;eip=0x001a8f; 	T(MOV(dx, 0x1AF7));	// 61728 mov     dx, 1AF7h ;~ 1E67:1A8F
cs=0x1e67;eip=0x001a92; 	X(PUSH(ds));	// 61729 push    ds ;~ 1E67:1A92
cs=0x1e67;eip=0x001a93; 	X(PUSH(cs));	// 61730 push    cs ;~ 1E67:1A93
cs=0x1e67;eip=0x001a94; 	X(POP(ds));	// 61731 pop     ds ;~ 1E67:1A94
cs=0x1e67;eip=0x001a95; 	T(MOV(al, 0x23));	// 61733 mov     al, 23h ; '#' ;~ 1E67:1A95
cs=0x1e67;eip=0x001a97; 	T(MOV(ah, 0x25));	// 61734 mov     ah, 25h ;~ 1E67:1A97
cs=0x1e67;eip=0x001a99; 	R(_INT(0x21));	// 61735 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 1E67:1A99
cs=0x1e67;eip=0x001a9b; 	X(POP(ds));	// 61738 pop     ds ;~ 1E67:1A9B
loc_2e6ec:
	// 8641 
cs=0x1e67;eip=0x001a9c; 	T(CMP(cx, 8));	// 61743 cmp     cx, 8 ;~ 1E67:1A9C
cs=0x1e67;eip=0x001a9f; 	R(JNZ(loc_2e715));	// 61744 jnz     short loc_2E715 ;~ 1E67:1A9F
cs=0x1e67;eip=0x001aa1; 	T(MOV(ax, 0x1B7B));	// 61745 mov     ax, 1B7Bh ;~ 1E67:1AA1
cs=0x1e67;eip=0x001aa4; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 61746 mov     dx, [bx+2] ;~ 1E67:1AA4
cs=0x1e67;eip=0x001aa7; 	T(OR(dx, dx));	// 61747 or      dx, dx ;~ 1E67:1AA7
cs=0x1e67;eip=0x001aa9; 	R(JNZ(loc_2e70c));	// 61748 jnz     short loc_2E70C ;~ 1E67:1AA9
cs=0x1e67;eip=0x001aab; 	T(MOV(cx, *(dw*)(raddr(ds,bx))));	// 61749 mov     cx, [bx] ;~ 1E67:1AAB
cs=0x1e67;eip=0x001aad; 	T(CMP(cx, 2));	// 61750 cmp     cx, 2 ;~ 1E67:1AAD
cs=0x1e67;eip=0x001ab0; 	R(JNC(loc_2e70c));	// 61751 jnb     short loc_2E70C ;~ 1E67:1AB0
cs=0x1e67;eip=0x001ab2; 	T(MOV(ax, 0x1B76));	// 61752 mov     ax, 1B76h ;~ 1E67:1AB2
cs=0x1e67;eip=0x001ab5; 	T(OR(cx, cx));	// 61753 or      cx, cx ;~ 1E67:1AB5
cs=0x1e67;eip=0x001ab7; 	R(JZ(loc_2e70c));	// 61754 jz      short loc_2E70C ;~ 1E67:1AB7
cs=0x1e67;eip=0x001ab9; 	T(MOV(ax, 0x1B75));	// 61755 mov     ax, 1B75h ;~ 1E67:1AB9
loc_2e70c:
	// 8642 
cs=0x1e67;eip=0x001abc; 	T(MOV(dx, cs));	// 61759 mov     dx, cs ;~ 1E67:1ABC
cs=0x1e67;eip=0x001abe; 	T(MOV(bx, 3));	// 61760 mov     bx, 3 ;~ 1E67:1ABE
cs=0x1e67;eip=0x001ac1; 	R(CALLF(__dispatch_call,dword_40c1e));	// 61761 call    dword_40C1E ;~ 1E67:1AC1
loc_2e715:
	// 8643 
cs=0x1e67;eip=0x001ac5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 61764 mov     ax, [bp+var_2] ;~ 1E67:1AC5
cs=0x1e67;eip=0x001ac8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 61765 mov     dx, [bp+var_4] ;~ 1E67:1AC8
cs=0x1e67;eip=0x001acb; 	T(MOV(sp, bp));	// 61766 mov     sp, bp ;~ 1E67:1ACB
cs=0x1e67;eip=0x001acd; 	X(POP(bp));	// 61767 pop     bp ;~ 1E67:1ACD
cs=0x1e67;eip=0x001ace; 	R(RETF(0));	// 61768 retf ;~ 1E67:1ACE
__sigentry:
	// 61776 
cs=0x1e67;eip=0x001acf; 	X(PUSH(bp));	// 61778 push    bp ;~ 1E67:1ACF
ret_1e67_1ad0:
	// 8644 
cs=0x1e67;eip=0x001ad0; 	T(MOV(bp, sp));	// 61779 mov     bp, sp ;~ 1E67:1AD0
cs=0x1e67;eip=0x001ad2; 	T(bx = 0x1A2B);	// 61780 lea     bx, ds:1A2Bh ;~ 1E67:1AD2
cs=0x1e67;eip=0x001ad6; 	T(MOV(cx, 6));	// 61781 mov     cx, 6 ;~ 1E67:1AD6
loc_2e729:
	// 8645 
cs=0x1e67;eip=0x001ad9; 	T(CMP(*(raddr(cs,bx)), al));	// 61784 cmp     cs:[bx], al ;~ 1E67:1AD9
cs=0x1e67;eip=0x001adc; 	R(JZ(loc_2e735));	// 61785 jz      short loc_2E735 ;~ 1E67:1ADC
cs=0x1e67;eip=0x001ade; 	T(DEC(bx));	// 61786 dec     bx ;~ 1E67:1ADE
cs=0x1e67;eip=0x001adf; 	R(LOOP(loc_2e729));	// 61787 loop    loc_2E729 ;~ 1E67:1ADF
cs=0x1e67;eip=0x001ae1; 	T(STC);	// 61788 stc ;~ 1E67:1AE1
cs=0x1e67;eip=0x001ae2; 	R(JMP(loc_2e743));	// 61789 jmp     short loc_2E743 ;~ 1E67:1AE2
loc_2e735:
	// 8646 
cs=0x1e67;eip=0x001ae5; 	T(DEC(cx));	// 61795 dec     cx ;~ 1E67:1AE5
cs=0x1e67;eip=0x001ae6; 	T(MOV(ax, cx));	// 61796 mov     ax, cx ;~ 1E67:1AE6
cs=0x1e67;eip=0x001ae8; 	T(SHL(ax, 1));	// 61797 shl     ax, 1 ;~ 1E67:1AE8
cs=0x1e67;eip=0x001aea; 	T(SHL(ax, 1));	// 61798 shl     ax, 1 ;~ 1E67:1AEA
cs=0x1e67;eip=0x001aec; 	T(bx = offset(dseg,word_3f0a4));	// 61799 lea     bx, word_3F0A4 ;~ 1E67:1AEC
cs=0x1e67;eip=0x001af0; 	T(ADD(bx, ax));	// 61800 add     bx, ax ;~ 1E67:1AF0
cs=0x1e67;eip=0x001af2; 	T(CLC);	// 61801 clc ;~ 1E67:1AF2
loc_2e743:
	// 8647 
cs=0x1e67;eip=0x001af3; 	T(MOV(sp, bp));	// 61804 mov     sp, bp ;~ 1E67:1AF3
cs=0x1e67;eip=0x001af5; 	X(POP(bp));	// 61805 pop     bp ;~ 1E67:1AF5
cs=0x1e67;eip=0x001af6; 	R(RETF(0));	// 61806 retf ;~ 1E67:1AF6
seg010_1af7_proc:
	// 61810 
cs=0x1e67;eip=0x001af7; 	X(PUSH(ax));	// 61810 push    ax ;~ 1E67:1AF7
ret_1e67_1af8:
	// 8648 
cs=0x1e67;eip=0x001af8; 	T(LAHF);	// 61811 lahf ;~ 1E67:1AF8
cs=0x1e67;eip=0x001af9; 	X(PUSH(ax));	// 61812 push    ax ;~ 1E67:1AF9
cs=0x1e67;eip=0x001afa; 	X(PUSH(ds));	// 61813 push    ds ;~ 1E67:1AFA
cs=0x1e67;eip=0x001afb; 	X(PUSH(dx));	// 61814 push    dx ;~ 1E67:1AFB
cs=0x1e67;eip=0x001afc; 	T(MOV(ax, seg_offset(dseg)));	// 61815 mov     ax, seg dseg ;~ 1E67:1AFC
cs=0x1e67;eip=0x001aff; 	T(MOV(ds, ax));	// 61816 mov     ds, ax ;~ 1E67:1AFF
cs=0x1e67;eip=0x001b01; 	T(CMP(word_3ee14, 0));	// 61817 cmp     word_3EE14, 0 ;~ 1E67:1B01
cs=0x1e67;eip=0x001b06; 	R(JNZ(loc_2e76c));	// 61818 jnz     short loc_2E76C ;~ 1E67:1B06
cs=0x1e67;eip=0x001b08; 	T(MOV(ax, word_3f0a4));	// 61819 mov     ax, word_3F0A4 ;~ 1E67:1B08
cs=0x1e67;eip=0x001b0b; 	T(MOV(dx, word_3f0a6));	// 61820 mov     dx, word_3F0A6 ;~ 1E67:1B0B
cs=0x1e67;eip=0x001b0f; 	T(OR(dx, dx));	// 61821 or      dx, dx ;~ 1E67:1B0F
cs=0x1e67;eip=0x001b11; 	R(JNZ(loc_2e799));	// 61822 jnz     short loc_2E799 ;~ 1E67:1B11
cs=0x1e67;eip=0x001b13; 	T(CMP(ax, 1));	// 61823 cmp     ax, 1 ;~ 1E67:1B13
cs=0x1e67;eip=0x001b16; 	R(JA(loc_2e799));	// 61824 ja      short loc_2E799 ;~ 1E67:1B16
cs=0x1e67;eip=0x001b18; 	T(OR(ax, ax));	// 61825 or      ax, ax ;~ 1E67:1B18
cs=0x1e67;eip=0x001b1a; 	R(JNZ(loc_2e7be));	// 61826 jnz     short loc_2E7BE ;~ 1E67:1B1A
loc_2e76c:
	// 8649 
cs=0x1e67;eip=0x001b1c; 	T(SUB(sp, 4));	// 61829 sub     sp, 4 ;~ 1E67:1B1C
cs=0x1e67;eip=0x001b1f; 	X(PUSH(bp));	// 61830 push    bp ;~ 1E67:1B1F
cs=0x1e67;eip=0x001b20; 	T(MOV(bp, sp));	// 61831 mov     bp, sp ;~ 1E67:1B20
cs=0x1e67;eip=0x001b22; 	T(ADD(bp, 2));	// 61832 add     bp, 2 ;~ 1E67:1B22
cs=0x1e67;eip=0x001b25; 	T(MOV(al, 4));	// 61833 mov     al, 4 ;~ 1E67:1B25
loc_2e777:
	// 8650 
cs=0x1e67;eip=0x001b27; 	T(MOV(dx, *(dw*)(raddr(ss,bp+4))));	// 61836 mov     dx, [bp+4] ;~ 1E67:1B27
cs=0x1e67;eip=0x001b2a; 	X(MOV(*(dw*)(raddr(ss,bp+0)), dx));	// 61837 mov     [bp+0], dx ;~ 1E67:1B2A
cs=0x1e67;eip=0x001b2d; 	T(INC(bp));	// 61838 inc     bp ;~ 1E67:1B2D
cs=0x1e67;eip=0x001b2e; 	T(INC(bp));	// 61839 inc     bp ;~ 1E67:1B2E
cs=0x1e67;eip=0x001b2f; 	T(DEC(al));	// 61840 dec     al ;~ 1E67:1B2F
cs=0x1e67;eip=0x001b31; 	T(CMP(al, 0));	// 61841 cmp     al, 0 ;~ 1E67:1B31
cs=0x1e67;eip=0x001b33; 	R(JNZ(loc_2e777));	// 61842 jnz     short loc_2E777 ;~ 1E67:1B33
cs=0x1e67;eip=0x001b35; 	T(MOV(ax, word_3ef9a));	// 61843 mov     ax, word_3EF9A ;~ 1E67:1B35
cs=0x1e67;eip=0x001b38; 	X(MOV(*(dw*)(raddr(ss,bp+0)), ax));	// 61844 mov     [bp+0], ax ;~ 1E67:1B38
cs=0x1e67;eip=0x001b3b; 	T(MOV(ax, word_3ef98));	// 61845 mov     ax, word_3EF98 ;~ 1E67:1B3B
cs=0x1e67;eip=0x001b3e; 	X(MOV(*(dw*)(raddr(ss,bp+2)), ax));	// 61846 mov     [bp+2], ax ;~ 1E67:1B3E
cs=0x1e67;eip=0x001b41; 	X(POP(bp));	// 61847 pop     bp ;~ 1E67:1B41
cs=0x1e67;eip=0x001b42; 	X(POP(dx));	// 61848 pop     dx ;~ 1E67:1B42
cs=0x1e67;eip=0x001b43; 	X(POP(ds));	// 61849 pop     ds ;~ 1E67:1B43
cs=0x1e67;eip=0x001b44; 	X(POP(ax));	// 61850 pop     ax ;~ 1E67:1B44
cs=0x1e67;eip=0x001b45; 	T(SAHF);	// 61851 sahf ;~ 1E67:1B45
cs=0x1e67;eip=0x001b46; 	X(POP(ax));	// 61852 pop     ax ;~ 1E67:1B46
cs=0x1e67;eip=0x001b47; 	T(STC);	// 61853 stc ;~ 1E67:1B47
cs=0x1e67;eip=0x001b48; 	R(RETF(0));	// 61854 retf ;~ 1E67:1B48
loc_2e799:
	// 8651 
cs=0x1e67;eip=0x001b49; 	X(MOV(*(dw*)(((db*)&dword_3f0bc)), ax));	// 61859 mov     word ptr dword_3F0BC, ax ;~ 1E67:1B49
cs=0x1e67;eip=0x001b4c; 	X(MOV(*(dw*)(((db*)&dword_3f0bc)+2), dx));	// 61860 mov     word ptr dword_3F0BC+2, dx ;~ 1E67:1B4C
cs=0x1e67;eip=0x001b50; 	X(PUSH(es));	// 61861 push    es ;~ 1E67:1B50
cs=0x1e67;eip=0x001b51; 	X(PUSH(bp));	// 61862 push    bp ;~ 1E67:1B51
cs=0x1e67;eip=0x001b52; 	X(PUSH(di));	// 61863 push    di ;~ 1E67:1B52
cs=0x1e67;eip=0x001b53; 	X(PUSH(si));	// 61864 push    si ;~ 1E67:1B53
cs=0x1e67;eip=0x001b54; 	X(PUSH(cx));	// 61865 push    cx ;~ 1E67:1B54
cs=0x1e67;eip=0x001b55; 	X(PUSH(bx));	// 61866 push    bx ;~ 1E67:1B55
cs=0x1e67;eip=0x001b56; 	T(XOR(ax, ax));	// 61867 xor     ax, ax ;~ 1E67:1B56
cs=0x1e67;eip=0x001b58; 	X(MOV(word_3f0a4, ax));	// 61868 mov     word_3F0A4, ax ;~ 1E67:1B58
cs=0x1e67;eip=0x001b5b; 	X(MOV(word_3f0a6, ax));	// 61869 mov     word_3F0A6, ax ;~ 1E67:1B5B
cs=0x1e67;eip=0x001b5e; 	T(MOV(ax, 2));	// 61870 mov     ax, 2 ;~ 1E67:1B5E
cs=0x1e67;eip=0x001b61; 	X(PUSH(ax));	// 61871 push    ax ;~ 1E67:1B61
cs=0x1e67;eip=0x001b62; 	T(CLD);	// 61872 cld ;~ 1E67:1B62
cs=0x1e67;eip=0x001b63; 	R(CALLF(__dispatch_call,dword_3f0bc));	// 61873 call    dword_3F0BC ;~ 1E67:1B63
cs=0x1e67;eip=0x001b67; 	X(POP(ax));	// 61874 pop     ax ;~ 1E67:1B67
cs=0x1e67;eip=0x001b68; 	X(POP(bx));	// 61875 pop     bx ;~ 1E67:1B68
cs=0x1e67;eip=0x001b69; 	X(POP(cx));	// 61876 pop     cx ;~ 1E67:1B69
cs=0x1e67;eip=0x001b6a; 	X(POP(si));	// 61877 pop     si ;~ 1E67:1B6A
cs=0x1e67;eip=0x001b6b; 	X(POP(di));	// 61878 pop     di ;~ 1E67:1B6B
cs=0x1e67;eip=0x001b6c; 	X(POP(bp));	// 61879 pop     bp ;~ 1E67:1B6C
cs=0x1e67;eip=0x001b6d; 	X(POP(es));	// 61880 pop     es ;~ 1E67:1B6D
loc_2e7be:
	// 8652 
cs=0x1e67;eip=0x001b6e; 	X(POP(dx));	// 61883 pop     dx ;~ 1E67:1B6E
cs=0x1e67;eip=0x001b6f; 	X(POP(ds));	// 61884 pop     ds ;~ 1E67:1B6F
cs=0x1e67;eip=0x001b70; 	X(POP(ax));	// 61885 pop     ax ;~ 1E67:1B70
cs=0x1e67;eip=0x001b71; 	T(SAHF);	// 61886 sahf ;~ 1E67:1B71
cs=0x1e67;eip=0x001b72; 	X(POP(ax));	// 61887 pop     ax ;~ 1E67:1B72
cs=0x1e67;eip=0x001b73; 	T(CLC);	// 61888 clc ;~ 1E67:1B73
cs=0x1e67;eip=0x001b74; 	R(RETF(0));	// 61889 retf ;~ 1E67:1B74
ret_1e67_1b75:
	// 8653 
cs=0x1e67;eip=0x001b75; 	R(RETF(0));	// 61891 retf ;~ 1E67:1B75
ret_1e67_1b76:
	// 8654 
cs=0x1e67;eip=0x001b76; __disp=*(dd*)(((db*)&dword_40c26));
	R(JMP(__dispatch_call));	// 61893 jmp     ss:dword_40C26 ;~ 1E67:1B76
ret_1e67_1b7b:
	// 8655 
cs=0x1e67;eip=0x001b7b; 	X(PUSH(bx));	// 61895 push    bx ;~ 1E67:1B7B
cs=0x1e67;eip=0x001b7c; 	X(PUSH(cx));	// 61896 push    cx ;~ 1E67:1B7C
cs=0x1e67;eip=0x001b7d; 	X(PUSH(dx));	// 61897 push    dx ;~ 1E67:1B7D
cs=0x1e67;eip=0x001b7e; 	X(PUSH(es));	// 61898 push    es ;~ 1E67:1B7E
cs=0x1e67;eip=0x001b7f; 	T(XOR(ah, ah));	// 61899 xor     ah, ah ;~ 1E67:1B7F
cs=0x1e67;eip=0x001b81; 	X(PUSH(ax));	// 61900 push    ax ;~ 1E67:1B81
cs=0x1e67;eip=0x001b82; 	T(MOV(ax, 8));	// 61901 mov     ax, 8 ;~ 1E67:1B82
cs=0x1e67;eip=0x001b85; 	X(PUSH(ax));	// 61902 push    ax ;~ 1E67:1B85
cs=0x1e67;eip=0x001b86; 	R(CALLF(__sigentry,0));	// 61903 call    __sigentry ;~ 1E67:1B86
cs=0x1e67;eip=0x001b8b; 	X(PUSH(ss));	// 61904 push    ss ;~ 1E67:1B8B
cs=0x1e67;eip=0x001b8c; 	X(POP(ds));	// 61905 pop     ds ;~ 1E67:1B8C
cs=0x1e67;eip=0x001b8d; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ds,bx))));	// 61906 call    dword ptr [bx] ;~ 1E67:1B8D
cs=0x1e67;eip=0x001b8f; 	T(ADD(sp, 4));	// 61907 add     sp, 4 ;~ 1E67:1B8F
cs=0x1e67;eip=0x001b92; 	X(POP(es));	// 61908 pop     es ;~ 1E67:1B92
cs=0x1e67;eip=0x001b93; 	X(POP(dx));	// 61909 pop     dx ;~ 1E67:1B93
cs=0x1e67;eip=0x001b94; 	X(POP(cx));	// 61910 pop     cx ;~ 1E67:1B94
cs=0x1e67;eip=0x001b95; 	X(POP(bx));	// 61911 pop     bx ;~ 1E67:1B95
cs=0x1e67;eip=0x001b96; 	R(RETF(0));	// 61912 retf ;~ 1E67:1B96
ret_1e67_1b98:
	// 8656 
cs=0x1e67;eip=0x001b98; 	R(JMP(__afldiv));	// 61915 jmp     __aFldiv ;~ 1E67:1B98
ret_1e67_1b9d:
	// 8657 
cs=0x1e67;eip=0x001b9d; 	R(JMP(unknown_libname_3));	// 61917 jmp     unknown_libname_3 ; MS Quick C v1.0/v2.01 & MSC v5.1 DOS run-time & graphic ;~ 1E67:1B9D
ret_1e67_1ba2:
	// 8658 
cs=0x1e67;eip=0x001ba2; 	R(JMP(__aflmul));	// 61919 jmp     __aFlmul ;~ 1E67:1BA2
ret_1e67_1ba7:
	// 8659 
cs=0x1e67;eip=0x001ba7; 	R(JMP(__affblmul));	// 61921 jmp     __aFFblmul ;~ 1E67:1BA7
ret_1e67_1bac:
	// 8660 
cs=0x1e67;eip=0x001bac; 	R(JMP(unknown_libname_4));	// 61923 jmp     unknown_libname_4 ; MS Quick C v1.0/v2.01 & MSC v5.1 DOS run-time & graphic ;~ 1E67:1BAC
ret_1e67_1bb1:
	// 8661 
cs=0x1e67;eip=0x001bb1; 	R(JMP(__aflshr));	// 61925 jmp     __aFlshr ;~ 1E67:1BB1
ret_1e67_1bb6:
	// 8662 
cs=0x1e67;eip=0x001bb6; 	R(JMP(__afuldiv));	// 61927 jmp     __aFuldiv ;~ 1E67:1BB6
ret_1e67_1bbb:
	// 8663 
cs=0x1e67;eip=0x001bbb; 	R(JMP(unknown_libname_5));	// 61929 jmp     unknown_libname_5 ; MS Quick C v1.0/v2.01 & MSC v5.1 DOS run-time & graphic ;~ 1E67:1BBB
_strrchr:
	// 61936 
#undef arg_0
#define arg_0 6
	// 61939 arg_0           = dword ptr  6 ;~ 1E67:1BC0
ret_1e67_1bc0:
	// 8664 
cs=0x1e67;eip=0x001bc0; 	X(PUSH(bp));	// 61941 push    bp ;~ 1E67:1BC0
cs=0x1e67;eip=0x001bc1; 	T(MOV(bp, sp));	// 61942 mov     bp, sp ;~ 1E67:1BC1
cs=0x1e67;eip=0x001bc3; 	X(PUSH(di));	// 61943 push    di ;~ 1E67:1BC3
cs=0x1e67;eip=0x001bc4; 	X(PUSH(ds));	// 61944 push    ds ;~ 1E67:1BC4
cs=0x1e67;eip=0x001bc5; 	X(POP(es));	// 61945 pop     es ;~ 1E67:1BC5
cs=0x1e67;eip=0x001bc6; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 61947 mov     di, word ptr [bp+arg_0] ;~ 1E67:1BC6
cs=0x1e67;eip=0x001bc9; 	T(XOR(ax, ax));	// 61948 xor     ax, ax ;~ 1E67:1BC9
cs=0x1e67;eip=0x001bcb; 	T(MOV(cx, 0x0FFFF));	// 61949 mov     cx, 0FFFFh ;~ 1E67:1BCB
	// 61950 repne scasb ;~ 1E67:1BCE
cs=0x1e67;eip=0x001bce; 	T(	REPNE SCASB);	// 61950 repne scasb ;~ 1E67:1BCE
cs=0x1e67;eip=0x001bd0; 	T(INC(cx));	// 61951 inc     cx ;~ 1E67:1BD0
cs=0x1e67;eip=0x001bd1; 	T(NEG(cx));	// 61952 neg     cx ;~ 1E67:1BD1
cs=0x1e67;eip=0x001bd3; 	T(DEC(di));	// 61953 dec     di ;~ 1E67:1BD3
cs=0x1e67;eip=0x001bd4; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0+2))));	// 61954 mov     al, byte ptr [bp+arg_0+2] ;~ 1E67:1BD4
cs=0x1e67;eip=0x001bd7; 	T(STD);	// 61955 std ;~ 1E67:1BD7
	// 61956 repne scasb ;~ 1E67:1BD8
cs=0x1e67;eip=0x001bd8; 	T(	REPNE SCASB);	// 61956 repne scasb ;~ 1E67:1BD8
cs=0x1e67;eip=0x001bda; 	T(INC(di));	// 61957 inc     di ;~ 1E67:1BDA
cs=0x1e67;eip=0x001bdb; 	T(CMP(*(raddr(ds,di)), al));	// 61958 cmp     [di], al ;~ 1E67:1BDB
cs=0x1e67;eip=0x001bdd; 	R(JZ(loc_2e833));	// 61959 jz      short loc_2E833 ;~ 1E67:1BDD
cs=0x1e67;eip=0x001bdf; 	T(XOR(ax, ax));	// 61960 xor     ax, ax ;~ 1E67:1BDF
cs=0x1e67;eip=0x001be1; 	R(JMP(loc_2e835));	// 61961 jmp     short loc_2E835 ;~ 1E67:1BE1
loc_2e833:
	// 8665 
cs=0x1e67;eip=0x001be3; 	T(MOV(ax, di));	// 61965 mov     ax, di ;~ 1E67:1BE3
loc_2e835:
	// 8666 
cs=0x1e67;eip=0x001be5; 	T(CLD);	// 61968 cld ;~ 1E67:1BE5
cs=0x1e67;eip=0x001be6; 	X(POP(di));	// 61969 pop     di ;~ 1E67:1BE6
cs=0x1e67;eip=0x001be7; 	T(MOV(sp, bp));	// 61970 mov     sp, bp ;~ 1E67:1BE7
cs=0x1e67;eip=0x001be9; 	X(POP(bp));	// 61971 pop     bp ;~ 1E67:1BE9
cs=0x1e67;eip=0x001bea; 	R(RETF(0));	// 61972 retf ;~ 1E67:1BEA
__afldiv:
	// 61982 
#undef arg_0
#define arg_0 6
	// 61985 arg_0           = word ptr  6 ;~ 1E67:1BEC
#undef arg_2
#define arg_2 8
	// 61986 arg_2           = word ptr  8 ;~ 1E67:1BEC
#undef arg_4
#define arg_4 0x0A
	// 61987 arg_4           = word ptr  0Ah ;~ 1E67:1BEC
#undef arg_6
#define arg_6 0x0C
	// 61988 arg_6           = word ptr  0Ch ;~ 1E67:1BEC
ret_1e67_1bec:
	// 8667 
cs=0x1e67;eip=0x001bec; 	X(PUSH(bp));	// 61990 push    bp ;~ 1E67:1BEC
cs=0x1e67;eip=0x001bed; 	T(MOV(bp, sp));	// 61991 mov     bp, sp ;~ 1E67:1BED
cs=0x1e67;eip=0x001bef; 	X(PUSH(di));	// 61992 push    di ;~ 1E67:1BEF
cs=0x1e67;eip=0x001bf0; 	X(PUSH(si));	// 61993 push    si ;~ 1E67:1BF0
cs=0x1e67;eip=0x001bf1; 	X(PUSH(bx));	// 61994 push    bx ;~ 1E67:1BF1
cs=0x1e67;eip=0x001bf2; 	T(XOR(di, di));	// 61995 xor     di, di ;~ 1E67:1BF2
cs=0x1e67;eip=0x001bf4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 61996 mov     ax, [bp+arg_2] ;~ 1E67:1BF4
cs=0x1e67;eip=0x001bf7; 	T(OR(ax, ax));	// 61997 or      ax, ax ;~ 1E67:1BF7
cs=0x1e67;eip=0x001bf9; 	R(JGE(loc_2e85c));	// 61998 jge     short loc_2E85C ;~ 1E67:1BF9
cs=0x1e67;eip=0x001bfb; 	T(INC(di));	// 61999 inc     di ;~ 1E67:1BFB
cs=0x1e67;eip=0x001bfc; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 62000 mov     dx, [bp+arg_0] ;~ 1E67:1BFC
cs=0x1e67;eip=0x001bff; 	T(NEG(ax));	// 62001 neg     ax ;~ 1E67:1BFF
cs=0x1e67;eip=0x001c01; 	T(NEG(dx));	// 62002 neg     dx ;~ 1E67:1C01
cs=0x1e67;eip=0x001c03; 	T(SBB(ax, 0));	// 62003 sbb     ax, 0 ;~ 1E67:1C03
cs=0x1e67;eip=0x001c06; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), ax));	// 62004 mov     [bp+arg_2], ax ;~ 1E67:1C06
cs=0x1e67;eip=0x001c09; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), dx));	// 62005 mov     [bp+arg_0], dx ;~ 1E67:1C09
loc_2e85c:
	// 8668 
cs=0x1e67;eip=0x001c0c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 62008 mov     ax, [bp+arg_6] ;~ 1E67:1C0C
cs=0x1e67;eip=0x001c0f; 	T(OR(ax, ax));	// 62009 or      ax, ax ;~ 1E67:1C0F
cs=0x1e67;eip=0x001c11; 	R(JGE(loc_2e874));	// 62010 jge     short loc_2E874 ;~ 1E67:1C11
cs=0x1e67;eip=0x001c13; 	T(INC(di));	// 62011 inc     di ;~ 1E67:1C13
cs=0x1e67;eip=0x001c14; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 62012 mov     dx, [bp+arg_4] ;~ 1E67:1C14
cs=0x1e67;eip=0x001c17; 	T(NEG(ax));	// 62013 neg     ax ;~ 1E67:1C17
cs=0x1e67;eip=0x001c19; 	T(NEG(dx));	// 62014 neg     dx ;~ 1E67:1C19
cs=0x1e67;eip=0x001c1b; 	T(SBB(ax, 0));	// 62015 sbb     ax, 0 ;~ 1E67:1C1B
cs=0x1e67;eip=0x001c1e; 	X(MOV(*(dw*)(raddr(ss,bp+arg_6)), ax));	// 62016 mov     [bp+arg_6], ax ;~ 1E67:1C1E
cs=0x1e67;eip=0x001c21; 	X(MOV(*(dw*)(raddr(ss,bp+arg_4)), dx));	// 62017 mov     [bp+arg_4], dx ;~ 1E67:1C21
loc_2e874:
	// 8669 
cs=0x1e67;eip=0x001c24; 	T(OR(ax, ax));	// 62020 or      ax, ax ;~ 1E67:1C24
cs=0x1e67;eip=0x001c26; 	R(JNZ(loc_2e88d));	// 62021 jnz     short loc_2E88D ;~ 1E67:1C26
cs=0x1e67;eip=0x001c28; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 62022 mov     cx, [bp+arg_4] ;~ 1E67:1C28
cs=0x1e67;eip=0x001c2b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 62023 mov     ax, [bp+arg_2] ;~ 1E67:1C2B
cs=0x1e67;eip=0x001c2e; 	T(XOR(dx, dx));	// 62024 xor     dx, dx ;~ 1E67:1C2E
cs=0x1e67;eip=0x001c30; 	T(DIV2(cx));	// 62025 div     cx ;~ 1E67:1C30
cs=0x1e67;eip=0x001c32; 	T(MOV(bx, ax));	// 62026 mov     bx, ax ;~ 1E67:1C32
cs=0x1e67;eip=0x001c34; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 62027 mov     ax, [bp+arg_0] ;~ 1E67:1C34
cs=0x1e67;eip=0x001c37; 	T(DIV2(cx));	// 62028 div     cx ;~ 1E67:1C37
cs=0x1e67;eip=0x001c39; 	T(MOV(dx, bx));	// 62029 mov     dx, bx ;~ 1E67:1C39
cs=0x1e67;eip=0x001c3b; 	R(JMP(loc_2e8c5));	// 62030 jmp     short loc_2E8C5 ;~ 1E67:1C3B
loc_2e88d:
	// 8670 
cs=0x1e67;eip=0x001c3d; 	T(MOV(bx, ax));	// 62034 mov     bx, ax ;~ 1E67:1C3D
cs=0x1e67;eip=0x001c3f; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 62035 mov     cx, [bp+arg_4] ;~ 1E67:1C3F
cs=0x1e67;eip=0x001c42; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 62036 mov     dx, [bp+arg_2] ;~ 1E67:1C42
cs=0x1e67;eip=0x001c45; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 62037 mov     ax, [bp+arg_0] ;~ 1E67:1C45
loc_2e898:
	// 8671 
cs=0x1e67;eip=0x001c48; 	T(SHR(bx, 1));	// 62040 shr     bx, 1 ;~ 1E67:1C48
cs=0x1e67;eip=0x001c4a; 	T(RCR(cx, 1));	// 62041 rcr     cx, 1 ;~ 1E67:1C4A
cs=0x1e67;eip=0x001c4c; 	T(SHR(dx, 1));	// 62042 shr     dx, 1 ;~ 1E67:1C4C
cs=0x1e67;eip=0x001c4e; 	T(RCR(ax, 1));	// 62043 rcr     ax, 1 ;~ 1E67:1C4E
cs=0x1e67;eip=0x001c50; 	T(OR(bx, bx));	// 62044 or      bx, bx ;~ 1E67:1C50
cs=0x1e67;eip=0x001c52; 	R(JNZ(loc_2e898));	// 62045 jnz     short loc_2E898 ;~ 1E67:1C52
cs=0x1e67;eip=0x001c54; 	T(DIV2(cx));	// 62046 div     cx ;~ 1E67:1C54
cs=0x1e67;eip=0x001c56; 	T(MOV(si, ax));	// 62047 mov     si, ax ;~ 1E67:1C56
cs=0x1e67;eip=0x001c58; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_6))));	// 62048 mul     [bp+arg_6] ;~ 1E67:1C58
cs=0x1e67;eip=0x001c5b; 	T(XCHG(ax, cx));	// 62049 xchg    ax, cx ;~ 1E67:1C5B
cs=0x1e67;eip=0x001c5c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 62050 mov     ax, [bp+arg_4] ;~ 1E67:1C5C
cs=0x1e67;eip=0x001c5f; 	T(MUL1_2(si));	// 62051 mul     si ;~ 1E67:1C5F
cs=0x1e67;eip=0x001c61; 	T(ADD(dx, cx));	// 62052 add     dx, cx ;~ 1E67:1C61
cs=0x1e67;eip=0x001c63; 	R(JC(loc_2e8c1));	// 62053 jb      short loc_2E8C1 ;~ 1E67:1C63
cs=0x1e67;eip=0x001c65; 	T(CMP(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 62054 cmp     dx, [bp+arg_2] ;~ 1E67:1C65
cs=0x1e67;eip=0x001c68; 	R(JA(loc_2e8c1));	// 62055 ja      short loc_2E8C1 ;~ 1E67:1C68
cs=0x1e67;eip=0x001c6a; 	R(JC(loc_2e8c2));	// 62056 jb      short loc_2E8C2 ;~ 1E67:1C6A
cs=0x1e67;eip=0x001c6c; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 62057 cmp     ax, [bp+arg_0] ;~ 1E67:1C6C
cs=0x1e67;eip=0x001c6f; 	R(JBE(loc_2e8c2));	// 62058 jbe     short loc_2E8C2 ;~ 1E67:1C6F
loc_2e8c1:
	// 8672 
cs=0x1e67;eip=0x001c71; 	T(DEC(si));	// 62062 dec     si ;~ 1E67:1C71
loc_2e8c2:
	// 8673 
cs=0x1e67;eip=0x001c72; 	T(XOR(dx, dx));	// 62066 xor     dx, dx ;~ 1E67:1C72
cs=0x1e67;eip=0x001c74; 	T(XCHG(ax, si));	// 62067 xchg    ax, si ;~ 1E67:1C74
loc_2e8c5:
	// 8674 
cs=0x1e67;eip=0x001c75; 	T(DEC(di));	// 62070 dec     di ;~ 1E67:1C75
cs=0x1e67;eip=0x001c76; 	R(JNZ(loc_2e8cf));	// 62071 jnz     short loc_2E8CF ;~ 1E67:1C76
cs=0x1e67;eip=0x001c78; 	T(NEG(dx));	// 62072 neg     dx ;~ 1E67:1C78
cs=0x1e67;eip=0x001c7a; 	T(NEG(ax));	// 62073 neg     ax ;~ 1E67:1C7A
cs=0x1e67;eip=0x001c7c; 	T(SBB(dx, 0));	// 62074 sbb     dx, 0 ;~ 1E67:1C7C
loc_2e8cf:
	// 8675 
cs=0x1e67;eip=0x001c7f; 	X(POP(bx));	// 62077 pop     bx ;~ 1E67:1C7F
cs=0x1e67;eip=0x001c80; 	X(POP(si));	// 62078 pop     si ;~ 1E67:1C80
cs=0x1e67;eip=0x001c81; 	X(POP(di));	// 62079 pop     di ;~ 1E67:1C81
cs=0x1e67;eip=0x001c82; 	T(MOV(sp, bp));	// 62080 mov     sp, bp ;~ 1E67:1C82
cs=0x1e67;eip=0x001c84; 	X(POP(bp));	// 62081 pop     bp ;~ 1E67:1C84
cs=0x1e67;eip=0x001c85; 	R(RETF(8));	// 62082 retf    8 ;~ 1E67:1C85
__aflmul:
	// 62090 
#undef arg_0
#define arg_0 6
	// 62093 arg_0           = word ptr  6 ;~ 1E67:1C88
#undef arg_2
#define arg_2 8
	// 62094 arg_2           = word ptr  8 ;~ 1E67:1C88
#undef arg_4
#define arg_4 0x0A
	// 62095 arg_4           = word ptr  0Ah ;~ 1E67:1C88
#undef arg_6
#define arg_6 0x0C
	// 62096 arg_6           = word ptr  0Ch ;~ 1E67:1C88
ret_1e67_1c88:
	// 8676 
cs=0x1e67;eip=0x001c88; 	X(PUSH(bp));	// 62098 push    bp ;~ 1E67:1C88
cs=0x1e67;eip=0x001c89; 	T(MOV(bp, sp));	// 62099 mov     bp, sp ;~ 1E67:1C89
cs=0x1e67;eip=0x001c8b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 62100 mov     ax, [bp+arg_2] ;~ 1E67:1C8B
cs=0x1e67;eip=0x001c8e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 62101 mov     bx, [bp+arg_6] ;~ 1E67:1C8E
cs=0x1e67;eip=0x001c91; 	T(OR(bx, ax));	// 62102 or      bx, ax ;~ 1E67:1C91
cs=0x1e67;eip=0x001c93; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 62103 mov     bx, [bp+arg_4] ;~ 1E67:1C93
cs=0x1e67;eip=0x001c96; 	R(JNZ(loc_2e8f3));	// 62104 jnz     short loc_2E8F3 ;~ 1E67:1C96
cs=0x1e67;eip=0x001c98; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 62105 mov     ax, [bp+arg_0] ;~ 1E67:1C98
cs=0x1e67;eip=0x001c9b; 	T(MUL1_2(bx));	// 62106 mul     bx ;~ 1E67:1C9B
cs=0x1e67;eip=0x001c9d; 	T(MOV(sp, bp));	// 62107 mov     sp, bp ;~ 1E67:1C9D
cs=0x1e67;eip=0x001c9f; 	X(POP(bp));	// 62108 pop     bp ;~ 1E67:1C9F
cs=0x1e67;eip=0x001ca0; 	R(RETF(8));	// 62109 retf    8 ;~ 1E67:1CA0
loc_2e8f3:
	// 8677 
cs=0x1e67;eip=0x001ca3; 	T(MUL1_2(bx));	// 62113 mul     bx ;~ 1E67:1CA3
cs=0x1e67;eip=0x001ca5; 	T(MOV(cx, ax));	// 62114 mov     cx, ax ;~ 1E67:1CA5
cs=0x1e67;eip=0x001ca7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 62115 mov     ax, [bp+arg_0] ;~ 1E67:1CA7
cs=0x1e67;eip=0x001caa; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_6))));	// 62116 mul     [bp+arg_6] ;~ 1E67:1CAA
cs=0x1e67;eip=0x001cad; 	T(ADD(cx, ax));	// 62117 add     cx, ax ;~ 1E67:1CAD
cs=0x1e67;eip=0x001caf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 62118 mov     ax, [bp+arg_0] ;~ 1E67:1CAF
cs=0x1e67;eip=0x001cb2; 	T(MUL1_2(bx));	// 62119 mul     bx ;~ 1E67:1CB2
cs=0x1e67;eip=0x001cb4; 	T(ADD(dx, cx));	// 62120 add     dx, cx ;~ 1E67:1CB4
cs=0x1e67;eip=0x001cb6; 	T(MOV(sp, bp));	// 62121 mov     sp, bp ;~ 1E67:1CB6
cs=0x1e67;eip=0x001cb8; 	X(POP(bp));	// 62122 pop     bp ;~ 1E67:1CB8
cs=0x1e67;eip=0x001cb9; 	R(RETF(8));	// 62123 retf    8 ;~ 1E67:1CB9
__aflshr:
	// 62131 
cs=0x1e67;eip=0x001cbc; 	T(XOR(ch, ch));	// 62133 xor     ch, ch ;~ 1E67:1CBC
ret_1e67_1cbe:
	// 8678 
cs=0x1e67;eip=0x001cbe; 	R(JCXZ(locret_2e916));	// 62134 jcxz    short locret_2E916 ;~ 1E67:1CBE
loc_2e910:
	// 8679 
cs=0x1e67;eip=0x001cc0; 	T(SAR(dx, 1));	// 62137 sar     dx, 1 ;~ 1E67:1CC0
cs=0x1e67;eip=0x001cc2; 	T(RCR(ax, 1));	// 62138 rcr     ax, 1 ;~ 1E67:1CC2
cs=0x1e67;eip=0x001cc4; 	R(LOOP(loc_2e910));	// 62139 loop    loc_2E910 ;~ 1E67:1CC4
locret_2e916:
	// 8680 
cs=0x1e67;eip=0x001cc6; 	R(RETF(0));	// 62142 retf ;~ 1E67:1CC6
unknown_libname_3:
	// 62153 
#undef arg_0
#define arg_0 6
	// 62155 arg_0           = word ptr  6 ;~ 1E67:1CC8
#undef arg_2
#define arg_2 8
	// 62156 arg_2           = word ptr  8 ;~ 1E67:1CC8
#undef arg_4
#define arg_4 0x0A
	// 62157 arg_4           = word ptr  0Ah ;~ 1E67:1CC8
ret_1e67_1cc8:
	// 8681 
cs=0x1e67;eip=0x001cc8; 	X(PUSH(bp));	// 62159 push    bp ;~ 1E67:1CC8
cs=0x1e67;eip=0x001cc9; 	T(MOV(bp, sp));	// 62160 mov     bp, sp ;~ 1E67:1CC9
cs=0x1e67;eip=0x001ccb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 62161 mov     bx, [bp+arg_0] ;~ 1E67:1CCB
cs=0x1e67;eip=0x001cce; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 62162 push    [bp+arg_4] ;~ 1E67:1CCE
cs=0x1e67;eip=0x001cd1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 62163 push    [bp+arg_2] ;~ 1E67:1CD1
cs=0x1e67;eip=0x001cd4; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 62164 push    word ptr [bx+2] ;~ 1E67:1CD4
cs=0x1e67;eip=0x001cd7; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 62165 push    word ptr [bx] ;~ 1E67:1CD7
cs=0x1e67;eip=0x001cd9; 	R(CALLF(__afldiv,0));	// 62166 call    __aFldiv ;~ 1E67:1CD9
cs=0x1e67;eip=0x001cde; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 62167 mov     bx, [bp+arg_0] ;~ 1E67:1CDE
cs=0x1e67;eip=0x001ce1; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 62168 mov     [bx+2], dx ;~ 1E67:1CE1
cs=0x1e67;eip=0x001ce4; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 62169 mov     [bx], ax ;~ 1E67:1CE4
cs=0x1e67;eip=0x001ce6; 	T(MOV(sp, bp));	// 62170 mov     sp, bp ;~ 1E67:1CE6
cs=0x1e67;eip=0x001ce8; 	X(POP(bp));	// 62171 pop     bp ;~ 1E67:1CE8
cs=0x1e67;eip=0x001ce9; 	R(RETF(6));	// 62172 retf    6 ;~ 1E67:1CE9
__affblmul:
	// 62180 
#undef arg_0
#define arg_0 6
	// 62182 arg_0           = word ptr  6 ;~ 1E67:1CEC
#undef arg_2
#define arg_2 8
	// 62183 arg_2           = word ptr  8 ;~ 1E67:1CEC
#undef arg_4
#define arg_4 0x0A
	// 62184 arg_4           = word ptr  0Ah ;~ 1E67:1CEC
ret_1e67_1cec:
	// 8682 
cs=0x1e67;eip=0x001cec; 	X(PUSH(bp));	// 62186 push    bp ;~ 1E67:1CEC
cs=0x1e67;eip=0x001ced; 	T(MOV(bp, sp));	// 62187 mov     bp, sp ;~ 1E67:1CED
cs=0x1e67;eip=0x001cef; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 62188 mov     bx, [bp+arg_0] ;~ 1E67:1CEF
cs=0x1e67;eip=0x001cf2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 62189 push    [bp+arg_4] ;~ 1E67:1CF2
cs=0x1e67;eip=0x001cf5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 62190 push    [bp+arg_2] ;~ 1E67:1CF5
cs=0x1e67;eip=0x001cf8; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 62191 push    word ptr [bx+2] ;~ 1E67:1CF8
cs=0x1e67;eip=0x001cfb; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 62192 push    word ptr [bx] ;~ 1E67:1CFB
cs=0x1e67;eip=0x001cfd; 	R(CALLF(__aflmul,0));	// 62193 call    __aFlmul ;~ 1E67:1CFD
cs=0x1e67;eip=0x001d02; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 62194 mov     bx, [bp+arg_0] ;~ 1E67:1D02
cs=0x1e67;eip=0x001d05; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 62195 mov     [bx], ax ;~ 1E67:1D05
cs=0x1e67;eip=0x001d07; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 62196 mov     [bx+2], dx ;~ 1E67:1D07
cs=0x1e67;eip=0x001d0a; 	T(MOV(sp, bp));	// 62197 mov     sp, bp ;~ 1E67:1D0A
cs=0x1e67;eip=0x001d0c; 	X(POP(bp));	// 62198 pop     bp ;~ 1E67:1D0C
cs=0x1e67;eip=0x001d0d; 	R(RETF(6));	// 62199 retf    6 ;~ 1E67:1D0D
unknown_libname_4:
	// 62208 
#undef arg_0
#define arg_0 6
	// 62211 arg_0           = word ptr  6 ;~ 1E67:1D10
#undef arg_2
#define arg_2 8
	// 62212 arg_2           = word ptr  8 ;~ 1E67:1D10
ret_1e67_1d10:
	// 8683 
cs=0x1e67;eip=0x001d10; 	X(PUSH(bp));	// 62214 push    bp ;~ 1E67:1D10
cs=0x1e67;eip=0x001d11; 	T(MOV(bp, sp));	// 62215 mov     bp, sp ;~ 1E67:1D11
cs=0x1e67;eip=0x001d13; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 62216 mov     bx, [bp+arg_0] ;~ 1E67:1D13
cs=0x1e67;eip=0x001d16; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 62217 mov     ax, [bx] ;~ 1E67:1D16
cs=0x1e67;eip=0x001d18; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 62218 mov     dx, [bx+2] ;~ 1E67:1D18
cs=0x1e67;eip=0x001d1b; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 62219 mov     cx, [bp+arg_2] ;~ 1E67:1D1B
cs=0x1e67;eip=0x001d1e; 	R(CALLF(__aflshr,0));	// 62220 call    __aFlshr ;~ 1E67:1D1E
cs=0x1e67;eip=0x001d23; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 62221 mov     bx, [bp+arg_0] ;~ 1E67:1D23
cs=0x1e67;eip=0x001d26; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 62222 mov     [bx], ax ;~ 1E67:1D26
cs=0x1e67;eip=0x001d28; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 62223 mov     [bx+2], dx ;~ 1E67:1D28
cs=0x1e67;eip=0x001d2b; 	T(MOV(sp, bp));	// 62224 mov     sp, bp ;~ 1E67:1D2B
cs=0x1e67;eip=0x001d2d; 	X(POP(bp));	// 62225 pop     bp ;~ 1E67:1D2D
cs=0x1e67;eip=0x001d2e; 	R(RETF(4));	// 62226 retf    4 ;~ 1E67:1D2E
unknown_libname_5:
	// 62237 
#undef arg_0
#define arg_0 6
	// 62239 arg_0           = word ptr  6 ;~ 1E67:1D32
#undef arg_2
#define arg_2 8
	// 62240 arg_2           = word ptr  8 ;~ 1E67:1D32
#undef arg_4
#define arg_4 0x0A
	// 62241 arg_4           = word ptr  0Ah ;~ 1E67:1D32
ret_1e67_1d32:
	// 8684 
cs=0x1e67;eip=0x001d32; 	X(PUSH(bp));	// 62243 push    bp ;~ 1E67:1D32
cs=0x1e67;eip=0x001d33; 	T(MOV(bp, sp));	// 62244 mov     bp, sp ;~ 1E67:1D33
cs=0x1e67;eip=0x001d35; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 62245 mov     bx, [bp+arg_0] ;~ 1E67:1D35
cs=0x1e67;eip=0x001d38; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 62246 push    [bp+arg_4] ;~ 1E67:1D38
cs=0x1e67;eip=0x001d3b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 62247 push    [bp+arg_2] ;~ 1E67:1D3B
cs=0x1e67;eip=0x001d3e; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 62248 push    word ptr [bx+2] ;~ 1E67:1D3E
cs=0x1e67;eip=0x001d41; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 62249 push    word ptr [bx] ;~ 1E67:1D41
cs=0x1e67;eip=0x001d43; 	R(CALLF(__afuldiv,0));	// 62250 call    __aFuldiv ;~ 1E67:1D43
cs=0x1e67;eip=0x001d48; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 62251 mov     bx, [bp+arg_0] ;~ 1E67:1D48
cs=0x1e67;eip=0x001d4b; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 62252 mov     [bx+2], dx ;~ 1E67:1D4B
cs=0x1e67;eip=0x001d4e; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 62253 mov     [bx], ax ;~ 1E67:1D4E
cs=0x1e67;eip=0x001d50; 	T(MOV(sp, bp));	// 62254 mov     sp, bp ;~ 1E67:1D50
cs=0x1e67;eip=0x001d52; 	X(POP(bp));	// 62255 pop     bp ;~ 1E67:1D52
cs=0x1e67;eip=0x001d53; 	R(RETF(6));	// 62256 retf    6 ;~ 1E67:1D53
__afuldiv:
	// 62264 
#undef arg_0
#define arg_0 6
	// 62267 arg_0           = word ptr  6 ;~ 1E67:1D56
#undef arg_2
#define arg_2 8
	// 62268 arg_2           = word ptr  8 ;~ 1E67:1D56
#undef arg_4
#define arg_4 0x0A
	// 62269 arg_4           = word ptr  0Ah ;~ 1E67:1D56
#undef arg_6
#define arg_6 0x0C
	// 62270 arg_6           = word ptr  0Ch ;~ 1E67:1D56
ret_1e67_1d56:
	// 8685 
cs=0x1e67;eip=0x001d56; 	X(PUSH(bp));	// 62272 push    bp ;~ 1E67:1D56
cs=0x1e67;eip=0x001d57; 	T(MOV(bp, sp));	// 62273 mov     bp, sp ;~ 1E67:1D57
cs=0x1e67;eip=0x001d59; 	X(PUSH(bx));	// 62274 push    bx ;~ 1E67:1D59
cs=0x1e67;eip=0x001d5a; 	X(PUSH(si));	// 62275 push    si ;~ 1E67:1D5A
cs=0x1e67;eip=0x001d5b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 62276 mov     ax, [bp+arg_6] ;~ 1E67:1D5B
cs=0x1e67;eip=0x001d5e; 	T(OR(ax, ax));	// 62277 or      ax, ax ;~ 1E67:1D5E
cs=0x1e67;eip=0x001d60; 	R(JNZ(loc_2e9c7));	// 62278 jnz     short loc_2E9C7 ;~ 1E67:1D60
cs=0x1e67;eip=0x001d62; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 62279 mov     cx, [bp+arg_4] ;~ 1E67:1D62
cs=0x1e67;eip=0x001d65; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 62280 mov     ax, [bp+arg_2] ;~ 1E67:1D65
cs=0x1e67;eip=0x001d68; 	T(XOR(dx, dx));	// 62281 xor     dx, dx ;~ 1E67:1D68
cs=0x1e67;eip=0x001d6a; 	T(DIV2(cx));	// 62282 div     cx ;~ 1E67:1D6A
cs=0x1e67;eip=0x001d6c; 	T(MOV(bx, ax));	// 62283 mov     bx, ax ;~ 1E67:1D6C
cs=0x1e67;eip=0x001d6e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 62284 mov     ax, [bp+arg_0] ;~ 1E67:1D6E
cs=0x1e67;eip=0x001d71; 	T(DIV2(cx));	// 62285 div     cx ;~ 1E67:1D71
cs=0x1e67;eip=0x001d73; 	T(MOV(dx, bx));	// 62286 mov     dx, bx ;~ 1E67:1D73
cs=0x1e67;eip=0x001d75; 	R(JMP(loc_2e9ff));	// 62287 jmp     short loc_2E9FF ;~ 1E67:1D75
loc_2e9c7:
	// 8686 
cs=0x1e67;eip=0x001d77; 	T(MOV(cx, ax));	// 62291 mov     cx, ax ;~ 1E67:1D77
cs=0x1e67;eip=0x001d79; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 62292 mov     bx, [bp+arg_4] ;~ 1E67:1D79
cs=0x1e67;eip=0x001d7c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 62293 mov     dx, [bp+arg_2] ;~ 1E67:1D7C
cs=0x1e67;eip=0x001d7f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 62294 mov     ax, [bp+arg_0] ;~ 1E67:1D7F
loc_2e9d2:
	// 8687 
cs=0x1e67;eip=0x001d82; 	T(SHR(cx, 1));	// 62297 shr     cx, 1 ;~ 1E67:1D82
cs=0x1e67;eip=0x001d84; 	T(RCR(bx, 1));	// 62298 rcr     bx, 1 ;~ 1E67:1D84
cs=0x1e67;eip=0x001d86; 	T(SHR(dx, 1));	// 62299 shr     dx, 1 ;~ 1E67:1D86
cs=0x1e67;eip=0x001d88; 	T(RCR(ax, 1));	// 62300 rcr     ax, 1 ;~ 1E67:1D88
cs=0x1e67;eip=0x001d8a; 	T(OR(cx, cx));	// 62301 or      cx, cx ;~ 1E67:1D8A
cs=0x1e67;eip=0x001d8c; 	R(JNZ(loc_2e9d2));	// 62302 jnz     short loc_2E9D2 ;~ 1E67:1D8C
cs=0x1e67;eip=0x001d8e; 	T(DIV2(bx));	// 62303 div     bx ;~ 1E67:1D8E
cs=0x1e67;eip=0x001d90; 	T(MOV(si, ax));	// 62304 mov     si, ax ;~ 1E67:1D90
cs=0x1e67;eip=0x001d92; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_6))));	// 62305 mul     [bp+arg_6] ;~ 1E67:1D92
cs=0x1e67;eip=0x001d95; 	T(XCHG(ax, cx));	// 62306 xchg    ax, cx ;~ 1E67:1D95
cs=0x1e67;eip=0x001d96; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 62307 mov     ax, [bp+arg_4] ;~ 1E67:1D96
cs=0x1e67;eip=0x001d99; 	T(MUL1_2(si));	// 62308 mul     si ;~ 1E67:1D99
cs=0x1e67;eip=0x001d9b; 	T(ADD(dx, cx));	// 62309 add     dx, cx ;~ 1E67:1D9B
cs=0x1e67;eip=0x001d9d; 	R(JC(loc_2e9fb));	// 62310 jb      short loc_2E9FB ;~ 1E67:1D9D
cs=0x1e67;eip=0x001d9f; 	T(CMP(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 62311 cmp     dx, [bp+arg_2] ;~ 1E67:1D9F
cs=0x1e67;eip=0x001da2; 	R(JA(loc_2e9fb));	// 62312 ja      short loc_2E9FB ;~ 1E67:1DA2
cs=0x1e67;eip=0x001da4; 	R(JC(loc_2e9fc));	// 62313 jb      short loc_2E9FC ;~ 1E67:1DA4
cs=0x1e67;eip=0x001da6; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 62314 cmp     ax, [bp+arg_0] ;~ 1E67:1DA6
cs=0x1e67;eip=0x001da9; 	R(JBE(loc_2e9fc));	// 62315 jbe     short loc_2E9FC ;~ 1E67:1DA9
loc_2e9fb:
	// 8688 
cs=0x1e67;eip=0x001dab; 	T(DEC(si));	// 62319 dec     si ;~ 1E67:1DAB
loc_2e9fc:
	// 8689 
cs=0x1e67;eip=0x001dac; 	T(XOR(dx, dx));	// 62323 xor     dx, dx ;~ 1E67:1DAC
cs=0x1e67;eip=0x001dae; 	T(XCHG(ax, si));	// 62324 xchg    ax, si ;~ 1E67:1DAE
loc_2e9ff:
	// 8690 
cs=0x1e67;eip=0x001daf; 	X(POP(si));	// 62327 pop     si ;~ 1E67:1DAF
cs=0x1e67;eip=0x001db0; 	X(POP(bx));	// 62328 pop     bx ;~ 1E67:1DB0
cs=0x1e67;eip=0x001db1; 	T(MOV(sp, bp));	// 62329 mov     sp, bp ;~ 1E67:1DB1
cs=0x1e67;eip=0x001db3; 	X(POP(bp));	// 62330 pop     bp ;~ 1E67:1DB3
cs=0x1e67;eip=0x001db4; 	R(RETF(8));	// 62331 retf    8 ;~ 1E67:1DB4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::k__affblmul: 	goto __affblmul;
        case m2c::k__afldiv: 	goto __afldiv;
        case m2c::k__aflshr: 	goto __aflshr;
        case m2c::k__afuldiv: 	goto __afuldiv;
        case m2c::k__amalloc: 	goto __amalloc;
        case m2c::k__amallocbrk: 	goto __amallocbrk;
        case m2c::k__amexpand: 	goto __amexpand;
        case m2c::k__amlink: 	goto __amlink;
        case m2c::k__amsg_exit: 	goto __amsg_exit;
        case m2c::k__chkstk: 	goto __chkstk;
        case m2c::k__cintdiv: 	goto __cintdiv;
        case m2c::k__cxtoa: 	goto __cxtoa;
        case m2c::k__dosretax: 	goto __dosretax;
        case m2c::k__dosreturn: 	goto __dosreturn;
        case m2c::k__ff_msgbanner: 	goto __ff_msgbanner;
        case m2c::k__flsbuf: 	goto __flsbuf;
        case m2c::k__fptrap: 	goto __fptrap;
        case m2c::k__maperror: 	goto __maperror;
        case m2c::k__myalloc: 	goto __myalloc;
        case m2c::k__nmsg_text: 	goto __nmsg_text;
        case m2c::k__nmsg_write: 	goto __nmsg_write;
        case m2c::k__nullcheck: 	goto __nullcheck;
        case m2c::k__setargv: 	goto __setargv;
        case m2c::k__setenvp: 	goto __setenvp;
        case m2c::k__sigentry: 	goto __sigentry;
        case m2c::k_abort: 	goto _abort;
        case m2c::k_flushall: 	goto _flushall;
        case m2c::k_int86: 	goto _int86;
        case m2c::k_isatty: 	goto _isatty;
        case m2c::k_itoa_: 	goto _itoa_;
        case m2c::k_no_stack_overflow: 	goto _no_stack_overflow;
        case m2c::k_out: 	goto _out;
        case m2c::k_raise: 	goto _raise;
        case m2c::k_rand: 	goto _rand;
        case m2c::k_signal: 	goto _signal;
        case m2c::k_sprintf: 	goto _sprintf;
        case m2c::k_stackavail: 	goto _stackavail;
        case m2c::k_strcat: 	goto _strcat;
        case m2c::k_stricmp_: 	goto _stricmp_;
        case m2c::k_strrchr: 	goto _strrchr;
        case m2c::kdef_2d739: 	goto def_2d739;
        case m2c::kfprint: 	goto fprint;
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
        case m2c::kloc_2ce06: 	goto loc_2ce06;
        case m2c::kloc_2ce2c: 	goto loc_2ce2c;
        case m2c::kloc_2ce32: 	goto loc_2ce32;
        case m2c::kloc_2ce3d: 	goto loc_2ce3d;
        case m2c::kloc_2ce57: 	goto loc_2ce57;
        case m2c::kloc_2cea1: 	goto loc_2cea1;
        case m2c::kloc_2cec7: 	goto loc_2cec7;
        case m2c::kloc_2ced2: 	goto loc_2ced2;
        case m2c::kloc_2cee1: 	goto loc_2cee1;
        case m2c::kloc_2cefc: 	goto loc_2cefc;
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
        case m2c::kloc_2d0b3: 	goto loc_2d0b3;
        case m2c::kloc_2d0b9: 	goto loc_2d0b9;
        case m2c::kloc_2d0e1: 	goto loc_2d0e1;
        case m2c::kloc_2d0ec: 	goto loc_2d0ec;
        case m2c::kloc_2d0f4: 	goto loc_2d0f4;
        case m2c::kloc_2d10b: 	goto loc_2d10b;
        case m2c::kloc_2d120: 	goto loc_2d120;
        case m2c::kloc_2d14d: 	goto loc_2d14d;
        case m2c::kloc_2d187: 	goto loc_2d187;
        case m2c::kloc_2d191: 	goto loc_2d191;
        case m2c::kloc_2d198: 	goto loc_2d198;
        case m2c::kloc_2d1ab: 	goto loc_2d1ab;
        case m2c::kloc_2d1b2: 	goto loc_2d1b2;
        case m2c::kloc_2d1d7: 	goto loc_2d1d7;
        case m2c::kloc_2d1db: 	goto loc_2d1db;
        case m2c::kloc_2d1dd: 	goto loc_2d1dd;
        case m2c::kloc_2d1e1: 	goto loc_2d1e1;
        case m2c::kloc_2d1e6: 	goto loc_2d1e6;
        case m2c::kloc_2d1fa: 	goto loc_2d1fa;
        case m2c::kloc_2d20d: 	goto loc_2d20d;
        case m2c::kloc_2d210: 	goto loc_2d210;
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
        case m2c::kloc_2d402: 	goto loc_2d402;
        case m2c::kloc_2d418: 	goto loc_2d418;
        case m2c::kloc_2d448: 	goto loc_2d448;
        case m2c::kloc_2d453: 	goto loc_2d453;
        case m2c::kloc_2d472: 	goto loc_2d472;
        case m2c::kloc_2d476: 	goto loc_2d476;
        case m2c::kloc_2d4ab: 	goto loc_2d4ab;
        case m2c::kloc_2d4cb: 	goto loc_2d4cb;
        case m2c::kloc_2d51c: 	goto loc_2d51c;
        case m2c::kloc_2d52d: 	goto loc_2d52d;
        case m2c::kloc_2d549: 	goto loc_2d549;
        case m2c::kloc_2d583: 	goto loc_2d583;
        case m2c::kloc_2d5ac: 	goto loc_2d5ac;
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
        case m2c::kloc_2db28: 	goto loc_2db28;
        case m2c::kloc_2db2c: 	goto loc_2db2c;
        case m2c::kloc_2db2e: 	goto loc_2db2e;
        case m2c::kloc_2db3e: 	goto loc_2db3e;
        case m2c::kloc_2db51: 	goto loc_2db51;
        case m2c::kloc_2db82: 	goto loc_2db82;
        case m2c::kloc_2db9b: 	goto loc_2db9b;
        case m2c::kloc_2dbc2: 	goto loc_2dbc2;
        case m2c::kloc_2dbc4: 	goto loc_2dbc4;
        case m2c::kloc_2dbf0: 	goto loc_2dbf0;
        case m2c::kloc_2dbfc: 	goto loc_2dbfc;
        case m2c::kloc_2dc06: 	goto loc_2dc06;
        case m2c::kloc_2dc0a: 	goto loc_2dc0a;
        case m2c::kloc_2dc26: 	goto loc_2dc26;
        case m2c::kloc_2dc36: 	goto loc_2dc36;
        case m2c::kloc_2dc3d: 	goto loc_2dc3d;
        case m2c::kloc_2dc5a: 	goto loc_2dc5a;
        case m2c::kloc_2dc68: 	goto loc_2dc68;
        case m2c::kloc_2dc82: 	goto loc_2dc82;
        case m2c::kloc_2dc96: 	goto loc_2dc96;
        case m2c::kloc_2dc9d: 	goto loc_2dc9d;
        case m2c::kloc_2dca0: 	goto loc_2dca0;
        case m2c::kloc_2dcc4: 	goto loc_2dcc4;
        case m2c::kloc_2dcd2: 	goto loc_2dcd2;
        case m2c::kloc_2dd05: 	goto loc_2dd05;
        case m2c::kloc_2dd0b: 	goto loc_2dd0b;
        case m2c::kloc_2dd40: 	goto loc_2dd40;
        case m2c::kloc_2dd52: 	goto loc_2dd52;
        case m2c::kloc_2dd5f: 	goto loc_2dd5f;
        case m2c::kloc_2dd6d: 	goto loc_2dd6d;
        case m2c::kloc_2dd8c: 	goto loc_2dd8c;
        case m2c::kloc_2dd9d: 	goto loc_2dd9d;
        case m2c::kloc_2ddbe: 	goto loc_2ddbe;
        case m2c::kloc_2ddd0: 	goto loc_2ddd0;
        case m2c::kloc_2ddd3: 	goto loc_2ddd3;
        case m2c::kloc_2ddfa: 	goto loc_2ddfa;
        case m2c::kloc_2ddfd: 	goto loc_2ddfd;
        case m2c::kloc_2de2a: 	goto loc_2de2a;
        case m2c::kloc_2de35: 	goto loc_2de35;
        case m2c::kloc_2de52: 	goto loc_2de52;
        case m2c::kloc_2de71: 	goto loc_2de71;
        case m2c::kloc_2de96: 	goto loc_2de96;
        case m2c::kloc_2de97: 	goto loc_2de97;
        case m2c::kloc_2dea6: 	goto loc_2dea6;
        case m2c::kloc_2dea8: 	goto loc_2dea8;
        case m2c::kloc_2dec2: 	goto loc_2dec2;
        case m2c::kloc_2dee9: 	goto loc_2dee9;
        case m2c::kloc_2deec: 	goto loc_2deec;
        case m2c::kloc_2deef: 	goto loc_2deef;
        case m2c::kloc_2df11: 	goto loc_2df11;
        case m2c::kloc_2df25: 	goto loc_2df25;
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
        case m2c::kloc_2e05f: 	goto loc_2e05f;
        case m2c::kloc_2e062: 	goto loc_2e062;
        case m2c::kloc_2e074: 	goto loc_2e074;
        case m2c::kloc_2e094: 	goto loc_2e094;
        case m2c::kloc_2e0ae: 	goto loc_2e0ae;
        case m2c::kloc_2e0b8: 	goto loc_2e0b8;
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
        case m2c::kloc_2e1af: 	goto loc_2e1af;
        case m2c::kloc_2e1b4: 	goto loc_2e1b4;
        case m2c::kloc_2e1bf: 	goto loc_2e1bf;
        case m2c::kloc_2e1d6: 	goto loc_2e1d6;
        case m2c::kloc_2e1da: 	goto loc_2e1da;
        case m2c::kloc_2e1dc: 	goto loc_2e1dc;
        case m2c::kloc_2e1fd: 	goto loc_2e1fd;
        case m2c::kloc_2e241: 	goto loc_2e241;
        case m2c::kloc_2e259: 	goto loc_2e259;
        case m2c::kloc_2e266: 	goto loc_2e266;
        case m2c::kloc_2e26c: 	goto loc_2e26c;
        case m2c::kloc_2e289: 	goto loc_2e289;
        case m2c::kloc_2e295: 	goto loc_2e295;
        case m2c::kloc_2e2a6: 	goto loc_2e2a6;
        case m2c::kloc_2e2ba: 	goto loc_2e2ba;
        case m2c::kloc_2e2d2: 	goto loc_2e2d2;
        case m2c::kloc_2e2e0: 	goto loc_2e2e0;
        case m2c::kloc_2e317: 	goto loc_2e317;
        case m2c::kloc_2e34a: 	goto loc_2e34a;
        case m2c::kloc_2e37d: 	goto loc_2e37d;
        case m2c::kloc_2e3b5: 	goto loc_2e3b5;
        case m2c::kloc_2e405: 	goto loc_2e405;
        case m2c::kloc_2e407: 	goto loc_2e407;
        case m2c::kloc_2e42c: 	goto loc_2e42c;
        case m2c::kloc_2e438: 	goto loc_2e438;
        case m2c::kloc_2e476: 	goto loc_2e476;
        case m2c::kloc_2e480: 	goto loc_2e480;
        case m2c::kloc_2e4d2: 	goto loc_2e4d2;
        case m2c::kloc_2e4de: 	goto loc_2e4de;
        case m2c::kloc_2e4f3: 	goto loc_2e4f3;
        case m2c::kloc_2e523: 	goto loc_2e523;
        case m2c::kloc_2e550: 	goto loc_2e550;
        case m2c::kloc_2e552: 	goto loc_2e552;
        case m2c::kloc_2e55b: 	goto loc_2e55b;
        case m2c::kloc_2e569: 	goto loc_2e569;
        case m2c::kloc_2e572: 	goto loc_2e572;
        case m2c::kloc_2e596: 	goto loc_2e596;
        case m2c::kloc_2e59b: 	goto loc_2e59b;
        case m2c::kloc_2e5c1: 	goto loc_2e5c1;
        case m2c::kloc_2e5d0: 	goto loc_2e5d0;
        case m2c::kloc_2e5f2: 	goto loc_2e5f2;
        case m2c::kloc_2e60b: 	goto loc_2e60b;
        case m2c::kloc_2e61e: 	goto loc_2e61e;
        case m2c::kloc_2e626: 	goto loc_2e626;
        case m2c::kloc_2e62f: 	goto loc_2e62f;
        case m2c::kloc_2e635: 	goto loc_2e635;
        case m2c::kloc_2e637: 	goto loc_2e637;
        case m2c::kloc_2e694: 	goto loc_2e694;
        case m2c::kloc_2e69b: 	goto loc_2e69b;
        case m2c::kloc_2e6c8: 	goto loc_2e6c8;
        case m2c::kloc_2e6ec: 	goto loc_2e6ec;
        case m2c::kloc_2e70c: 	goto loc_2e70c;
        case m2c::kloc_2e715: 	goto loc_2e715;
        case m2c::kloc_2e729: 	goto loc_2e729;
        case m2c::kloc_2e735: 	goto loc_2e735;
        case m2c::kloc_2e743: 	goto loc_2e743;
        case m2c::kloc_2e76c: 	goto loc_2e76c;
        case m2c::kloc_2e777: 	goto loc_2e777;
        case m2c::kloc_2e799: 	goto loc_2e799;
        case m2c::kloc_2e7be: 	goto loc_2e7be;
        case m2c::kloc_2e833: 	goto loc_2e833;
        case m2c::kloc_2e835: 	goto loc_2e835;
        case m2c::kloc_2e85c: 	goto loc_2e85c;
        case m2c::kloc_2e874: 	goto loc_2e874;
        case m2c::kloc_2e88d: 	goto loc_2e88d;
        case m2c::kloc_2e898: 	goto loc_2e898;
        case m2c::kloc_2e8c1: 	goto loc_2e8c1;
        case m2c::kloc_2e8c2: 	goto loc_2e8c2;
        case m2c::kloc_2e8c5: 	goto loc_2e8c5;
        case m2c::kloc_2e8cf: 	goto loc_2e8cf;
        case m2c::kloc_2e8f3: 	goto loc_2e8f3;
        case m2c::kloc_2e910: 	goto loc_2e910;
        case m2c::kloc_2e9c7: 	goto loc_2e9c7;
        case m2c::kloc_2e9d2: 	goto loc_2e9d2;
        case m2c::kloc_2e9fb: 	goto loc_2e9fb;
        case m2c::kloc_2e9fc: 	goto loc_2e9fc;
        case m2c::kloc_2e9ff: 	goto loc_2e9ff;
        case m2c::klocret_2ce76: 	goto locret_2ce76;
        case m2c::klocret_2ce89: 	goto locret_2ce89;
        case m2c::klocret_2de05: 	goto locret_2de05;
        case m2c::klocret_2e220: 	goto locret_2e220;
        case m2c::klocret_2e2e5: 	goto locret_2e2e5;
        case m2c::klocret_2e916: 	goto locret_2e916;
        case m2c::kputbuf: 	goto putbuf;
        case m2c::kputprefix: 	goto putprefix;
        case m2c::kputsign: 	goto putsign;
        case m2c::kret_1e67_1179: 	goto ret_1e67_1179;
        case m2c::kret_1e67_118f: 	goto ret_1e67_118f;
        case m2c::kret_1e67_11b6: 	goto ret_1e67_11b6;
        case m2c::kret_1e67_1236: 	goto ret_1e67_1236;
        case m2c::kret_1e67_125e: 	goto ret_1e67_125e;
        case m2c::kret_1e67_12d8: 	goto ret_1e67_12d8;
        case m2c::kret_1e67_1381: 	goto ret_1e67_1381;
        case m2c::kret_1e67_14: 	goto ret_1e67_14;
        case m2c::kret_1e67_1403: 	goto ret_1e67_1403;
        case m2c::kret_1e67_1416: 	goto ret_1e67_1416;
        case m2c::kret_1e67_1472: 	goto ret_1e67_1472;
        case m2c::kret_1e67_1555: 	goto ret_1e67_1555;
        case m2c::kret_1e67_158f: 	goto ret_1e67_158f;
        case m2c::kret_1e67_15b1: 	goto ret_1e67_15b1;
        case m2c::kret_1e67_15d2: 	goto ret_1e67_15d2;
        case m2c::kret_1e67_1643: 	goto ret_1e67_1643;
        case m2c::kret_1e67_16d6: 	goto ret_1e67_16d6;
        case m2c::kret_1e67_1708: 	goto ret_1e67_1708;
        case m2c::kret_1e67_1734: 	goto ret_1e67_1734;
        case m2c::kret_1e67_176c: 	goto ret_1e67_176c;
        case m2c::kret_1e67_1777: 	goto ret_1e67_1777;
        case m2c::kret_1e67_1938: 	goto ret_1e67_1938;
        case m2c::kret_1e67_19d: 	goto ret_1e67_19d;
        case m2c::kret_1e67_19ec: 	goto ret_1e67_19ec;
        case m2c::kret_1e67_1a01: 	goto ret_1e67_1a01;
        case m2c::kret_1e67_1ad0: 	goto ret_1e67_1ad0;
        case m2c::kret_1e67_1af8: 	goto ret_1e67_1af8;
        case m2c::kret_1e67_1b3: 	goto ret_1e67_1b3;
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
        case m2c::kret_1e67_1c88: 	goto ret_1e67_1c88;
        case m2c::kret_1e67_1cbe: 	goto ret_1e67_1cbe;
        case m2c::kret_1e67_1d10: 	goto ret_1e67_1d10;
        case m2c::kret_1e67_229: 	goto ret_1e67_229;
        case m2c::kret_1e67_23b: 	goto ret_1e67_23b;
        case m2c::kret_1e67_261: 	goto ret_1e67_261;
        case m2c::kret_1e67_265: 	goto ret_1e67_265;
        case m2c::kret_1e67_289: 	goto ret_1e67_289;
        case m2c::kret_1e67_2b2: 	goto ret_1e67_2b2;
        case m2c::kret_1e67_506: 	goto ret_1e67_506;
        case m2c::kret_1e67_568: 	goto ret_1e67_568;
        case m2c::kret_1e67_56f: 	goto ret_1e67_56f;
        case m2c::kret_1e67_59b: 	goto ret_1e67_59b;
        case m2c::kret_1e67_5ce: 	goto ret_1e67_5ce;
        case m2c::kret_1e67_76e: 	goto ret_1e67_76e;
        case m2c::kret_1e67_7dc: 	goto ret_1e67_7dc;
        case m2c::kret_1e67_860: 	goto ret_1e67_860;
        case m2c::kret_1e67_8fe: 	goto ret_1e67_8fe;
        case m2c::kret_1e67_96e: 	goto ret_1e67_96e;
        case m2c::kret_1e67_c9a: 	goto ret_1e67_c9a;
        case m2c::kret_1e67_f7e: 	goto ret_1e67_f7e;
        case m2c::kret_1e67_fbe: 	goto ret_1e67_fbe;
        case m2c::kseg010_13ce_proc: 	goto seg010_13ce_proc;
        case m2c::kseg010_146e_proc: 	goto seg010_146e_proc;
        case m2c::kseg010_1794_proc: 	goto seg010_1794_proc;
        case m2c::kseg010_18d8_proc: 	goto seg010_18d8_proc;
        case m2c::kseg010_1af7_proc: 	goto seg010_1af7_proc;
        case m2c::kseg010_546_proc: 	goto seg010_546_proc;
        case m2c::kseg010_f17_proc: 	goto seg010_f17_proc;
        case m2c::ksprint: 	goto sprint;
        case m2c::kstart: 	goto start;
        case m2c::ksub_2cd28: 	goto sub_2cd28;
        case m2c::ksub_2ce4a: 	goto sub_2ce4a;
        case m2c::ksub_2ce77: 	goto sub_2ce77;
        case m2c::ksub_2d1bc: 	goto sub_2d1bc;
        case m2c::ksub_2dfd0: 	goto sub_2dfd0;
        case m2c::ksub_2e290: 	goto sub_2e290;
        case m2c::kunknown_libname_2: 	goto unknown_libname_2;
        case m2c::kunknown_libname_3: 	goto unknown_libname_3;
        case m2c::kunknown_libname_5: 	goto unknown_libname_5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

