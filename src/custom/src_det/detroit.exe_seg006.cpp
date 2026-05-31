/* THIS IS GENERATED FILE */

        
#include "detroit.exe.h"

                

 bool seg006_3_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg006_3_proc:
    _begin:
cs=0x9cc;eip=0x000003; 	X(PUSH(bp));	// 21721                  push    bp ;~ 09CC:0003
cs=0x9cc;eip=0x000004; 	T(bp = sp;);	// 21722                  mov     bp, sp ;~ 09CC:0004
cs=0x9cc;eip=0x000006; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 21723                  mov     ax, [bp+6] ;~ 09CC:0006
cs=0x9cc;eip=0x000009; 	T(XCHG(al, ah));	// 21724                  xchg    al, ah ;~ 09CC:0009
cs=0x9cc;eip=0x00000b; 	X(POP(bp));	// 21725                  pop     bp ;~ 09CC:000B
cs=0x9cc;eip=0x00000c; 	J(RETF(0));	// 21726                  retf ;~ 09CC:000C
ret_9cc_d:
	// 5495 
cs=0x9cc;eip=0x00000d; 	X(PUSH(bp));	// 21728                  push    bp ;~ 09CC:000D
cs=0x9cc;eip=0x00000e; 	T(bp = sp;);	// 21729                  mov     bp, sp ;~ 09CC:000E
cs=0x9cc;eip=0x000010; 	X(PUSH(si));	// 21730                  push    si ;~ 09CC:0010
cs=0x9cc;eip=0x000011; 	X(PUSH(di));	// 21731                  push    di ;~ 09CC:0011
cs=0x9cc;eip=0x000012; 	T(CMP(*(dw*)(&byte_18e8c), 0));	// 21732                  cmp     word ptr byte_18E8C, 0 ;~ 09CC:0012
cs=0x9cc;eip=0x000017; 	J(JNZ(loc_182bc));	// 21733                  jnz     short loc_182BC ;~ 09CC:0017
cs=0x9cc;eip=0x000019; 	J(JMP(loc_1838e));	// 21734                  jmp     loc_1838E ;~ 09CC:0019
loc_182bc:
	// 5496 
cs=0x9cc;eip=0x00001c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0E))));	// 21738                  mov     ax, [bp+0Eh] ;~ 09CC:001C
cs=0x9cc;eip=0x00001f; 	T(SHL(ax, 1));	// 21739                  shl     ax, 1 ;~ 09CC:001F
cs=0x9cc;eip=0x000021; 	X(PUSH(ax));	// 21740                  push    ax ;~ 09CC:0021
cs=0x9cc;eip=0x000022; 	J(CALLF(___malloc,0));	// 21741                  call    ___malloc ;~ 09CC:0022
cs=0x9cc;eip=0x000027; 	X(POP(cx));	// 21742                  pop     cx ;~ 09CC:0027
cs=0x9cc;eip=0x000028; 	X(*(dw*)(((db*)&dword_1937e)+2) = dx;);	// 21743                  mov     word ptr dword_1937E+2, dx ;~ 09CC:0028
cs=0x9cc;eip=0x00002c; 	X(*(dw*)(&dword_1937e) = ax;);	// 21744                  mov     word ptr dword_1937E, ax ;~ 09CC:002C
cs=0x9cc;eip=0x00002f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0E))));	// 21745                  mov     ax, [bp+0Eh] ;~ 09CC:002F
cs=0x9cc;eip=0x000032; 	T(SHL(ax, 1));	// 21746                  shl     ax, 1 ;~ 09CC:0032
cs=0x9cc;eip=0x000034; 	X(PUSH(ax));	// 21747                  push    ax ;~ 09CC:0034
cs=0x9cc;eip=0x000035; 	J(CALLF(___malloc,0));	// 21748                  call    ___malloc ;~ 09CC:0035
cs=0x9cc;eip=0x00003a; 	X(POP(cx));	// 21749                  pop     cx ;~ 09CC:003A
cs=0x9cc;eip=0x00003b; 	X(*(dw*)(((db*)&dword_19382)+2) = dx;);	// 21750                  mov     word ptr dword_19382+2, dx ;~ 09CC:003B
cs=0x9cc;eip=0x00003f; 	X(*(dw*)(&dword_19382) = ax;);	// 21751                  mov     word ptr dword_19382, ax ;~ 09CC:003F
cs=0x9cc;eip=0x000042; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0E))));	// 21752                  mov     ax, [bp+0Eh] ;~ 09CC:0042
cs=0x9cc;eip=0x000045; 	T(SHL(ax, 1));	// 21753                  shl     ax, 1 ;~ 09CC:0045
cs=0x9cc;eip=0x000047; 	X(PUSH(ax));	// 21754                  push    ax ;~ 09CC:0047
cs=0x9cc;eip=0x000048; 	J(CALLF(___malloc,0));	// 21755                  call    ___malloc ;~ 09CC:0048
cs=0x9cc;eip=0x00004d; 	X(POP(cx));	// 21756                  pop     cx ;~ 09CC:004D
cs=0x9cc;eip=0x00004e; 	X(*(dw*)(((db*)&dword_19386)+2) = dx;);	// 21757                  mov     word ptr dword_19386+2, dx ;~ 09CC:004E
cs=0x9cc;eip=0x000052; 	X(*(dw*)(&dword_19386) = ax;);	// 21758                  mov     word ptr dword_19386, ax ;~ 09CC:0052
cs=0x9cc;eip=0x000055; 	X(word_1938a = 0;);	// 21759                  mov     word_1938A, 0 ;~ 09CC:0055
cs=0x9cc;eip=0x00005b; 	T(XOR(si, si));	// 21760                  xor     si, si ;~ 09CC:005B
cs=0x9cc;eip=0x00005d; 	J(JMP(loc_1835b));	// 21761                  jmp     short loc_1835B ;~ 09CC:005D
loc_182ff:
	// 5497 
cs=0x9cc;eip=0x00005f; 	T(ax = si;);	// 21765                  mov     ax, si ;~ 09CC:005F
cs=0x9cc;eip=0x000061; 	T(SHL(ax, 1));	// 21766                  shl     ax, 1 ;~ 09CC:0061
cs=0x9cc;eip=0x000063; 	T(LES(bx, *(dw*)(raddr(ss,bp+6))));	// 21767                  les     bx, [bp+6] ;~ 09CC:0063
cs=0x9cc;eip=0x000066; 	T(ADD(bx, ax));	// 21768                  add     bx, ax ;~ 09CC:0066
cs=0x9cc;eip=0x000068; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 21769                  mov     ax, es:[bx] ;~ 09CC:0068
cs=0x9cc;eip=0x00006b; 	T(dx = si;);	// 21770                  mov     dx, si ;~ 09CC:006B
cs=0x9cc;eip=0x00006d; 	T(SHL(dx, 1));	// 21771                  shl     dx, 1 ;~ 09CC:006D
cs=0x9cc;eip=0x00006f; 	T(LES(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 21772                  les     bx, [bp+0Ah] ;~ 09CC:006F
cs=0x9cc;eip=0x000072; 	T(ADD(bx, dx));	// 21773                  add     bx, dx ;~ 09CC:0072
cs=0x9cc;eip=0x000074; 	T(SUB(ax, *(dw*)(raddr(es,bx))));	// 21774                  sub     ax, es:[bx] ;~ 09CC:0074
cs=0x9cc;eip=0x000077; 	T(di = ax;);	// 21775                  mov     di, ax ;~ 09CC:0077
cs=0x9cc;eip=0x000079; 	T(OR(di, di));	// 21776                  or      di, di ;~ 09CC:0079
cs=0x9cc;eip=0x00007b; 	J(JGE(loc_18334));	// 21777                  jge     short loc_18334 ;~ 09CC:007B
cs=0x9cc;eip=0x00007d; 	T(ax = di;);	// 21778                  mov     ax, di ;~ 09CC:007D
cs=0x9cc;eip=0x00007f; 	T(NEG(ax));	// 21779                  neg     ax ;~ 09CC:007F
cs=0x9cc;eip=0x000081; 	T(di = ax;);	// 21780                  mov     di, ax ;~ 09CC:0081
cs=0x9cc;eip=0x000083; 	T(ax = si;);	// 21781                  mov     ax, si ;~ 09CC:0083
cs=0x9cc;eip=0x000085; 	T(SHL(ax, 1));	// 21782                  shl     ax, 1 ;~ 09CC:0085
cs=0x9cc;eip=0x000087; 	T(LES(bx, dword_19386));	// 21783                  les     bx, dword_19386 ;~ 09CC:0087
cs=0x9cc;eip=0x00008b; 	T(ADD(bx, ax));	// 21784                  add     bx, ax ;~ 09CC:008B
cs=0x9cc;eip=0x00008d; 	X(MOV(*(dw*)(raddr(es,bx)), 1));	// 21785                  mov     word ptr es:[bx], 1 ;~ 09CC:008D
cs=0x9cc;eip=0x000092; 	J(JMP(loc_18343));	// 21786                  jmp     short loc_18343 ;~ 09CC:0092
loc_18334:
	// 5498 
cs=0x9cc;eip=0x000094; 	T(ax = si;);	// 21790                  mov     ax, si ;~ 09CC:0094
cs=0x9cc;eip=0x000096; 	T(SHL(ax, 1));	// 21791                  shl     ax, 1 ;~ 09CC:0096
cs=0x9cc;eip=0x000098; 	T(LES(bx, dword_19386));	// 21792                  les     bx, dword_19386 ;~ 09CC:0098
cs=0x9cc;eip=0x00009c; 	T(ADD(bx, ax));	// 21793                  add     bx, ax ;~ 09CC:009C
cs=0x9cc;eip=0x00009e; 	X(MOV(*(dw*)(raddr(es,bx)), 0x0FFFF));	// 21794                  mov     word ptr es:[bx], 0FFFFh ;~ 09CC:009E
loc_18343:
	// 5499 
cs=0x9cc;eip=0x0000a3; 	T(ax = si;);	// 21797                  mov     ax, si ;~ 09CC:00A3
cs=0x9cc;eip=0x0000a5; 	T(SHL(ax, 1));	// 21798                  shl     ax, 1 ;~ 09CC:00A5
cs=0x9cc;eip=0x0000a7; 	T(LES(bx, dword_19382));	// 21799                  les     bx, dword_19382 ;~ 09CC:00A7
cs=0x9cc;eip=0x0000ab; 	T(ADD(bx, ax));	// 21800                  add     bx, ax ;~ 09CC:00AB
cs=0x9cc;eip=0x0000ad; 	X(MOV(*(dw*)(raddr(es,bx)), di));	// 21801                  mov     es:[bx], di ;~ 09CC:00AD
cs=0x9cc;eip=0x0000b0; 	T(CMP(di, word_1938a));	// 21802                  cmp     di, word_1938A ;~ 09CC:00B0
cs=0x9cc;eip=0x0000b4; 	J(JLE(loc_1835a));	// 21803                  jle     short loc_1835A ;~ 09CC:00B4
cs=0x9cc;eip=0x0000b6; 	X(word_1938a = di;);	// 21804                  mov     word_1938A, di ;~ 09CC:00B6
loc_1835a:
	// 5500 
cs=0x9cc;eip=0x0000ba; 	T(INC(si));	// 21807                  inc     si ;~ 09CC:00BA
loc_1835b:
	// 5501 
cs=0x9cc;eip=0x0000bb; 	T(CMP(si, *(dw*)(raddr(ss,bp+0x0E))));	// 21810                  cmp     si, [bp+0Eh] ;~ 09CC:00BB
cs=0x9cc;eip=0x0000be; 	J(JL(loc_182ff));	// 21811                  jl      short loc_182FF ;~ 09CC:00BE
cs=0x9cc;eip=0x0000c0; 	T(ax = word_1938a;);	// 21812                  mov     ax, word_1938A ;~ 09CC:00C0
cs=0x9cc;eip=0x0000c3; 	T(bx = 2;);	// 21813                  mov     bx, 2 ;~ 09CC:00C3
cs=0x9cc;eip=0x0000c6; 	T(CWD);	// 21814                  cwd ;~ 09CC:00C6
cs=0x9cc;eip=0x0000c7; 	T(IDIV2(bx));	// 21815                  idiv    bx ;~ 09CC:00C7
cs=0x9cc;eip=0x0000c9; 	T(di = ax;);	// 21816                  mov     di, ax ;~ 09CC:00C9
cs=0x9cc;eip=0x0000cb; 	T(XOR(si, si));	// 21817                  xor     si, si ;~ 09CC:00CB
cs=0x9cc;eip=0x0000cd; 	J(JMP(loc_1837d));	// 21818                  jmp     short loc_1837D ;~ 09CC:00CD
loc_1836f:
	// 5502 
cs=0x9cc;eip=0x0000cf; 	T(ax = si;);	// 21822                  mov     ax, si ;~ 09CC:00CF
cs=0x9cc;eip=0x0000d1; 	T(SHL(ax, 1));	// 21823                  shl     ax, 1 ;~ 09CC:00D1
cs=0x9cc;eip=0x0000d3; 	T(LES(bx, dword_1937e));	// 21824                  les     bx, dword_1937E ;~ 09CC:00D3
cs=0x9cc;eip=0x0000d7; 	T(ADD(bx, ax));	// 21825                  add     bx, ax ;~ 09CC:00D7
cs=0x9cc;eip=0x0000d9; 	X(MOV(*(dw*)(raddr(es,bx)), di));	// 21826                  mov     es:[bx], di ;~ 09CC:00D9
cs=0x9cc;eip=0x0000dc; 	T(INC(si));	// 21827                  inc     si ;~ 09CC:00DC
loc_1837d:
	// 5503 
cs=0x9cc;eip=0x0000dd; 	T(CMP(si, *(dw*)(raddr(ss,bp+0x0E))));	// 21830                  cmp     si, [bp+0Eh] ;~ 09CC:00DD
cs=0x9cc;eip=0x0000e0; 	J(JL(loc_1836f));	// 21831                  jl      short loc_1836F ;~ 09CC:00E0
cs=0x9cc;eip=0x0000e2; 	T(ax = word_1938a;);	// 21832                  mov     ax, word_1938A ;~ 09CC:00E2
cs=0x9cc;eip=0x0000e5; 	X(word_1938c = ax;);	// 21833                  mov     word_1938C, ax ;~ 09CC:00E5
cs=0x9cc;eip=0x0000e8; 	X(*(dw*)(&byte_18e8c) = 0;);	// 21834                  mov     word ptr byte_18E8C, 0 ;~ 09CC:00E8
loc_1838e:
	// 5504 
cs=0x9cc;eip=0x0000ee; 	T(ax = word_1938c;);	// 21837                  mov     ax, word_1938C ;~ 09CC:00EE
cs=0x9cc;eip=0x0000f1; 	X(DEC(word_1938c));	// 21838                  dec     word_1938C ;~ 09CC:00F1
cs=0x9cc;eip=0x0000f5; 	T(OR(ax, ax));	// 21839                  or      ax, ax ;~ 09CC:00F5
cs=0x9cc;eip=0x0000f7; 	J(JNZ(loc_183d0));	// 21840                  jnz     short loc_183D0 ;~ 09CC:00F7
cs=0x9cc;eip=0x0000f9; 	X(PUSH(*(dw*)(((db*)&dword_1937e)+2)));	// 21841                  push    word ptr dword_1937E+2 ;~ 09CC:00F9
cs=0x9cc;eip=0x0000fd; 	X(PUSH(*(dw*)(&dword_1937e)));	// 21842                  push    word ptr dword_1937E ;~ 09CC:00FD
cs=0x9cc;eip=0x000101; 	J(CALLF(___farfree,0));	// 21843                  call    ___farfree ;~ 09CC:0101
cs=0x9cc;eip=0x000106; 	X(POP(cx));	// 21844                  pop     cx ;~ 09CC:0106
cs=0x9cc;eip=0x000107; 	X(POP(cx));	// 21845                  pop     cx ;~ 09CC:0107
cs=0x9cc;eip=0x000108; 	X(PUSH(*(dw*)(((db*)&dword_19382)+2)));	// 21846                  push    word ptr dword_19382+2 ;~ 09CC:0108
cs=0x9cc;eip=0x00010c; 	X(PUSH(*(dw*)(&dword_19382)));	// 21847                  push    word ptr dword_19382 ;~ 09CC:010C
cs=0x9cc;eip=0x000110; 	J(CALLF(___farfree,0));	// 21848                  call    ___farfree ;~ 09CC:0110
cs=0x9cc;eip=0x000115; 	X(POP(cx));	// 21849                  pop     cx ;~ 09CC:0115
cs=0x9cc;eip=0x000116; 	X(POP(cx));	// 21850                  pop     cx ;~ 09CC:0116
cs=0x9cc;eip=0x000117; 	X(PUSH(*(dw*)(((db*)&dword_19386)+2)));	// 21851                  push    word ptr dword_19386+2 ;~ 09CC:0117
cs=0x9cc;eip=0x00011b; 	X(PUSH(*(dw*)(&dword_19386)));	// 21852                  push    word ptr dword_19386 ;~ 09CC:011B
cs=0x9cc;eip=0x00011f; 	J(CALLF(___farfree,0));	// 21853                  call    ___farfree ;~ 09CC:011F
cs=0x9cc;eip=0x000124; 	X(POP(cx));	// 21854                  pop     cx ;~ 09CC:0124
cs=0x9cc;eip=0x000125; 	X(POP(cx));	// 21855                  pop     cx ;~ 09CC:0125
cs=0x9cc;eip=0x000126; 	X(*(dw*)(&byte_18e8c) = 1;);	// 21856                  mov     word ptr byte_18E8C, 1 ;~ 09CC:0126
cs=0x9cc;eip=0x00012c; 	T(XOR(ax, ax));	// 21857                  xor     ax, ax ;~ 09CC:012C
cs=0x9cc;eip=0x00012e; 	J(JMP(loc_1842b));	// 21858                  jmp     short loc_1842B ;~ 09CC:012E
loc_183d0:
	// 5505 
cs=0x9cc;eip=0x000130; 	T(XOR(si, si));	// 21862                  xor     si, si ;~ 09CC:0130
cs=0x9cc;eip=0x000132; 	J(JMP(loc_18421));	// 21863                  jmp     short loc_18421 ;~ 09CC:0132
loc_183d4:
	// 5506 
cs=0x9cc;eip=0x000134; 	T(ax = si;);	// 21867                  mov     ax, si ;~ 09CC:0134
cs=0x9cc;eip=0x000136; 	T(SHL(ax, 1));	// 21868                  shl     ax, 1 ;~ 09CC:0136
cs=0x9cc;eip=0x000138; 	T(LES(bx, dword_19382));	// 21869                  les     bx, dword_19382 ;~ 09CC:0138
cs=0x9cc;eip=0x00013c; 	T(ADD(bx, ax));	// 21870                  add     bx, ax ;~ 09CC:013C
cs=0x9cc;eip=0x00013e; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 21871                  mov     ax, es:[bx] ;~ 09CC:013E
cs=0x9cc;eip=0x000141; 	T(dx = si;);	// 21872                  mov     dx, si ;~ 09CC:0141
cs=0x9cc;eip=0x000143; 	T(SHL(dx, 1));	// 21873                  shl     dx, 1 ;~ 09CC:0143
cs=0x9cc;eip=0x000145; 	T(LES(bx, dword_1937e));	// 21874                  les     bx, dword_1937E ;~ 09CC:0145
cs=0x9cc;eip=0x000149; 	T(ADD(bx, dx));	// 21875                  add     bx, dx ;~ 09CC:0149
cs=0x9cc;eip=0x00014b; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 21876                  add     es:[bx], ax ;~ 09CC:014B
cs=0x9cc;eip=0x00014e; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 21877                  mov     ax, es:[bx] ;~ 09CC:014E
cs=0x9cc;eip=0x000151; 	T(CMP(ax, word_1938a));	// 21878                  cmp     ax, word_1938A ;~ 09CC:0151
cs=0x9cc;eip=0x000155; 	J(JLE(loc_18420));	// 21879                  jle     short loc_18420 ;~ 09CC:0155
cs=0x9cc;eip=0x000157; 	T(ax = si;);	// 21880                  mov     ax, si ;~ 09CC:0157
cs=0x9cc;eip=0x000159; 	T(SHL(ax, 1));	// 21881                  shl     ax, 1 ;~ 09CC:0159
cs=0x9cc;eip=0x00015b; 	T(LES(bx, dword_1937e));	// 21882                  les     bx, dword_1937E ;~ 09CC:015B
cs=0x9cc;eip=0x00015f; 	T(ADD(bx, ax));	// 21883                  add     bx, ax ;~ 09CC:015F
cs=0x9cc;eip=0x000161; 	T(ax = word_1938a;);	// 21884                  mov     ax, word_1938A ;~ 09CC:0161
cs=0x9cc;eip=0x000164; 	X(SUB(*(dw*)(raddr(es,bx)), ax));	// 21885                  sub     es:[bx], ax ;~ 09CC:0164
cs=0x9cc;eip=0x000167; 	T(ax = si;);	// 21886                  mov     ax, si ;~ 09CC:0167
cs=0x9cc;eip=0x000169; 	T(SHL(ax, 1));	// 21887                  shl     ax, 1 ;~ 09CC:0169
cs=0x9cc;eip=0x00016b; 	T(LES(bx, dword_19386));	// 21888                  les     bx, dword_19386 ;~ 09CC:016B
cs=0x9cc;eip=0x00016f; 	T(ADD(bx, ax));	// 21889                  add     bx, ax ;~ 09CC:016F
cs=0x9cc;eip=0x000171; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 21890                  mov     ax, es:[bx] ;~ 09CC:0171
cs=0x9cc;eip=0x000174; 	T(dx = si;);	// 21891                  mov     dx, si ;~ 09CC:0174
cs=0x9cc;eip=0x000176; 	T(SHL(dx, 1));	// 21892                  shl     dx, 1 ;~ 09CC:0176
cs=0x9cc;eip=0x000178; 	T(LES(bx, *(dw*)(raddr(ss,bp+6))));	// 21893                  les     bx, [bp+6] ;~ 09CC:0178
cs=0x9cc;eip=0x00017b; 	T(ADD(bx, dx));	// 21894                  add     bx, dx ;~ 09CC:017B
cs=0x9cc;eip=0x00017d; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 21895                  add     es:[bx], ax ;~ 09CC:017D
loc_18420:
	// 5507 
cs=0x9cc;eip=0x000180; 	T(INC(si));	// 21898                  inc     si ;~ 09CC:0180
loc_18421:
	// 5508 
cs=0x9cc;eip=0x000181; 	T(CMP(si, *(dw*)(raddr(ss,bp+0x0E))));	// 21901                  cmp     si, [bp+0Eh] ;~ 09CC:0181
cs=0x9cc;eip=0x000184; 	J(JL(loc_183d4));	// 21902                  jl      short loc_183D4 ;~ 09CC:0184
cs=0x9cc;eip=0x000186; 	T(ax = 1;);	// 21903                  mov     ax, 1 ;~ 09CC:0186
cs=0x9cc;eip=0x000189; 	J({;});	// 21904                  jmp     short $+2 ;~ 09CC:0189
loc_1842b:
	// 5509 
cs=0x9cc;eip=0x00018b; 	X(POP(di));	// 21909                  pop     di ;~ 09CC:018B
cs=0x9cc;eip=0x00018c; 	X(POP(si));	// 21910                  pop     si ;~ 09CC:018C
cs=0x9cc;eip=0x00018d; 	X(POP(bp));	// 21911                  pop     bp ;~ 09CC:018D
cs=0x9cc;eip=0x00018e; 	J(RETF(0));	// 21912                  retf ;~ 09CC:018E
ret_9cc_18f:
	// 5510 
cs=0x9cc;eip=0x00018f; 	X(PUSH(bp));	// 21914                  push    bp ;~ 09CC:018F
cs=0x9cc;eip=0x000190; 	T(bp = sp;);	// 21915                  mov     bp, sp ;~ 09CC:0190
cs=0x9cc;eip=0x000192; 	T(SUB(sp, 4));	// 21916                  sub     sp, 4 ;~ 09CC:0192
cs=0x9cc;eip=0x000195; 	X(PUSH(si));	// 21917                  push    si ;~ 09CC:0195
cs=0x9cc;eip=0x000196; 	X(PUSH(di));	// 21918                  push    di ;~ 09CC:0196
cs=0x9cc;eip=0x000197; 	X(MOV(*(dw*)(raddr(ss,bp-2)), 0));	// 21919                  mov     word ptr [bp-2], 0 ;~ 09CC:0197
cs=0x9cc;eip=0x00019c; 	X(MOV(*(dw*)(raddr(ss,bp-4)), 0));	// 21920                  mov     word ptr [bp-4], 0 ;~ 09CC:019C
cs=0x9cc;eip=0x0001a1; 	T(XOR(di, di));	// 21921                  xor     di, di ;~ 09CC:01A1
cs=0x9cc;eip=0x0001a3; 	J(JMP(loc_1849c));	// 21922                  jmp     short loc_1849C ;~ 09CC:01A3
loc_18445:
	// 5511 
cs=0x9cc;eip=0x0001a5; 	T(XOR(si, si));	// 21926                  xor     si, si ;~ 09CC:01A5
cs=0x9cc;eip=0x0001a7; 	J(JMP(loc_18489));	// 21927                  jmp     short loc_18489 ;~ 09CC:01A7
loc_18449:
	// 5512 
cs=0x9cc;eip=0x0001a9; 	T(LES(bx, *(dw*)(raddr(ss,bp+6))));	// 21931                  les     bx, [bp+6] ;~ 09CC:01A9
cs=0x9cc;eip=0x0001ac; 	T(MOV(al, *(raddr(es,bx+di))));	// 21932                  mov     al, es:[bx+di] ;~ 09CC:01AC
cs=0x9cc;eip=0x0001af; 	T(CBW);	// 21933                  cbw ;~ 09CC:01AF
cs=0x9cc;eip=0x0001b0; 	X(PUSH(ax));	// 21934                  push    ax ;~ 09CC:01B0
cs=0x9cc;eip=0x0001b1; 	J(CALLF(___toupper,0));	// 21935                  call    ___toupper ;~ 09CC:01B1
cs=0x9cc;eip=0x0001b6; 	X(POP(cx));	// 21936                  pop     cx ;~ 09CC:01B6
cs=0x9cc;eip=0x0001b7; 	X(PUSH(ax));	// 21937                  push    ax ;~ 09CC:01B7
cs=0x9cc;eip=0x0001b8; 	T(MOV(al, *(raddr(ds,si+0x5AE))));	// 21938                  mov     al, [si+5AEh] ;~ 09CC:01B8
cs=0x9cc;eip=0x0001bc; 	T(CBW);	// 21939                  cbw ;~ 09CC:01BC
cs=0x9cc;eip=0x0001bd; 	X(POP(dx));	// 21940                  pop     dx ;~ 09CC:01BD
cs=0x9cc;eip=0x0001be; 	T(CMP(dx, ax));	// 21941                  cmp     dx, ax ;~ 09CC:01BE
cs=0x9cc;eip=0x0001c0; 	J(JNZ(loc_18488));	// 21942                  jnz     short loc_18488 ;~ 09CC:01C0
cs=0x9cc;eip=0x0001c2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 21943                  mov     ax, [bp+0Ah] ;~ 09CC:01C2
cs=0x9cc;eip=0x0001c5; 	T(CWD);	// 21944                  cwd ;~ 09CC:01C5
cs=0x9cc;eip=0x0001c6; 	X(PUSH(ax));	// 21945                  push    ax ;~ 09CC:01C6
cs=0x9cc;eip=0x0001c7; 	X(PUSH(dx));	// 21946                  push    dx ;~ 09CC:01C7
cs=0x9cc;eip=0x0001c8; 	T(MOV(dx, *(dw*)(raddr(ss,bp-2))));	// 21947                  mov     dx, [bp-2] ;~ 09CC:01C8
cs=0x9cc;eip=0x0001cb; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 21948                  mov     ax, [bp-4] ;~ 09CC:01CB
cs=0x9cc;eip=0x0001ce; 	X(POP(cx));	// 21949                  pop     cx ;~ 09CC:01CE
cs=0x9cc;eip=0x0001cf; 	X(POP(bx));	// 21950                  pop     bx ;~ 09CC:01CF
cs=0x9cc;eip=0x0001d0; 	J(CALLF(__lxmularb,0));	// 21951                  call    __LXMUL@ ;~ 09CC:01D0
cs=0x9cc;eip=0x0001d5; 	X(PUSH(ax));	// 21952                  push    ax ;~ 09CC:01D5
cs=0x9cc;eip=0x0001d6; 	T(ax = si;);	// 21953                  mov     ax, si ;~ 09CC:01D6
cs=0x9cc;eip=0x0001d8; 	X(PUSH(dx));	// 21954                  push    dx ;~ 09CC:01D8
cs=0x9cc;eip=0x0001d9; 	T(CWD);	// 21955                  cwd ;~ 09CC:01D9
cs=0x9cc;eip=0x0001da; 	X(POP(bx));	// 21956                  pop     bx ;~ 09CC:01DA
cs=0x9cc;eip=0x0001db; 	X(POP(cx));	// 21957                  pop     cx ;~ 09CC:01DB
cs=0x9cc;eip=0x0001dc; 	T(ADD(cx, ax));	// 21958                  add     cx, ax ;~ 09CC:01DC
cs=0x9cc;eip=0x0001de; 	T(ADC(bx, dx));	// 21959                  adc     bx, dx ;~ 09CC:01DE
cs=0x9cc;eip=0x0001e0; 	X(MOV(*(dw*)(raddr(ss,bp-2)), bx));	// 21960                  mov     [bp-2], bx ;~ 09CC:01E0
cs=0x9cc;eip=0x0001e3; 	X(MOV(*(dw*)(raddr(ss,bp-4)), cx));	// 21961                  mov     [bp-4], cx ;~ 09CC:01E3
cs=0x9cc;eip=0x0001e6; 	J(JMP(loc_1848e));	// 21962                  jmp     short loc_1848E ;~ 09CC:01E6
loc_18488:
	// 5513 
cs=0x9cc;eip=0x0001e8; 	T(INC(si));	// 21966                  inc     si ;~ 09CC:01E8
loc_18489:
	// 5514 
cs=0x9cc;eip=0x0001e9; 	T(CMP(si, *(dw*)(raddr(ss,bp+0x0A))));	// 21969                  cmp     si, [bp+0Ah] ;~ 09CC:01E9
cs=0x9cc;eip=0x0001ec; 	J(JL(loc_18449));	// 21970                  jl      short loc_18449 ;~ 09CC:01EC
loc_1848e:
	// 5515 
cs=0x9cc;eip=0x0001ee; 	T(CMP(si, *(dw*)(raddr(ss,bp+0x0A))));	// 21973                  cmp     si, [bp+0Ah] ;~ 09CC:01EE
cs=0x9cc;eip=0x0001f1; 	J(JNZ(loc_1849b));	// 21974                  jnz     short loc_1849B ;~ 09CC:01F1
cs=0x9cc;eip=0x0001f3; 	T(dx = 0x0FFFF;);	// 21975                  mov     dx, 0FFFFh ;~ 09CC:01F3
cs=0x9cc;eip=0x0001f6; 	T(ax = 0x0FFFF;);	// 21976                  mov     ax, 0FFFFh ;~ 09CC:01F6
cs=0x9cc;eip=0x0001f9; 	J(JMP(loc_184b5));	// 21977                  jmp     short loc_184B5 ;~ 09CC:01F9
loc_1849b:
	// 5516 
cs=0x9cc;eip=0x0001fb; 	T(INC(di));	// 21981                  inc     di ;~ 09CC:01FB
loc_1849c:
	// 5517 
cs=0x9cc;eip=0x0001fc; 	X(PUSH(*(dw*)(raddr(ss,bp+8))));	// 21984                  push    word ptr [bp+8] ;~ 09CC:01FC
cs=0x9cc;eip=0x0001ff; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 21985                  push    word ptr [bp+6] ;~ 09CC:01FF
cs=0x9cc;eip=0x000202; 	J(CALLF(___strlen,0));	// 21986                  call    ___strlen ;~ 09CC:0202
cs=0x9cc;eip=0x000207; 	X(POP(cx));	// 21987                  pop     cx ;~ 09CC:0207
cs=0x9cc;eip=0x000208; 	X(POP(cx));	// 21988                  pop     cx ;~ 09CC:0208
cs=0x9cc;eip=0x000209; 	T(CMP(ax, di));	// 21989                  cmp     ax, di ;~ 09CC:0209
cs=0x9cc;eip=0x00020b; 	J(JA(loc_18445));	// 21990                  ja      short loc_18445 ;~ 09CC:020B
cs=0x9cc;eip=0x00020d; 	T(MOV(dx, *(dw*)(raddr(ss,bp-2))));	// 21991                  mov     dx, [bp-2] ;~ 09CC:020D
cs=0x9cc;eip=0x000210; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 21992                  mov     ax, [bp-4] ;~ 09CC:0210
cs=0x9cc;eip=0x000213; 	J({;});	// 21993                  jmp     short $+2 ;~ 09CC:0213
loc_184b5:
	// 5518 
cs=0x9cc;eip=0x000215; 	X(POP(di));	// 21998                  pop     di ;~ 09CC:0215
cs=0x9cc;eip=0x000216; 	X(POP(si));	// 21999                  pop     si ;~ 09CC:0216
cs=0x9cc;eip=0x000217; 	T(sp = bp;);	// 22000                  mov     sp, bp ;~ 09CC:0217
cs=0x9cc;eip=0x000219; 	X(POP(bp));	// 22001                  pop     bp ;~ 09CC:0219
cs=0x9cc;eip=0x00021a; 	J(RETF(0));	// 22002                  retf ;~ 09CC:021A
ret_9cc_21b:
	// 5519 
cs=0x9cc;eip=0x00021b; 	X(PUSH(bp));	// 22004                  push    bp ;~ 09CC:021B
cs=0x9cc;eip=0x00021c; 	T(bp = sp;);	// 22005                  mov     bp, sp ;~ 09CC:021C
cs=0x9cc;eip=0x00021e; 	T(ax = word_18e8a;);	// 22006                  mov     ax, word_18E8A ;~ 09CC:021E
cs=0x9cc;eip=0x000221; 	J({;});	// 22007                  jmp     short $+2 ;~ 09CC:0221
loc_184c3:
	// 5520 
cs=0x9cc;eip=0x000223; 	X(POP(bp));	// 22011                  pop     bp ;~ 09CC:0223
cs=0x9cc;eip=0x000224; 	J(RETF(0));	// 22012                  retf ;~ 09CC:0224

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_182bc: 	goto loc_182bc;
        case m2c::kloc_182ff: 	goto loc_182ff;
        case m2c::kloc_18334: 	goto loc_18334;
        case m2c::kloc_18343: 	goto loc_18343;
        case m2c::kloc_1835a: 	goto loc_1835a;
        case m2c::kloc_1835b: 	goto loc_1835b;
        case m2c::kloc_1836f: 	goto loc_1836f;
        case m2c::kloc_1837d: 	goto loc_1837d;
        case m2c::kloc_1838e: 	goto loc_1838e;
        case m2c::kloc_183d0: 	goto loc_183d0;
        case m2c::kloc_183d4: 	goto loc_183d4;
        case m2c::kloc_18420: 	goto loc_18420;
        case m2c::kloc_18421: 	goto loc_18421;
        case m2c::kloc_1842b: 	goto loc_1842b;
        case m2c::kloc_18445: 	goto loc_18445;
        case m2c::kloc_18449: 	goto loc_18449;
        case m2c::kloc_18488: 	goto loc_18488;
        case m2c::kloc_18489: 	goto loc_18489;
        case m2c::kloc_1848e: 	goto loc_1848e;
        case m2c::kloc_1849b: 	goto loc_1849b;
        case m2c::kloc_1849c: 	goto loc_1849c;
        case m2c::kloc_184b5: 	goto loc_184b5;
        case m2c::kloc_184c3: 	goto loc_184c3;
        case m2c::kret_9cc_18f: 	goto ret_9cc_18f;
        case m2c::kret_9cc_21b: 	goto ret_9cc_21b;
        case m2c::kret_9cc_d: 	goto ret_9cc_d;
        case m2c::kseg006_3_proc: 	goto seg006_3_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_184c5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_184c5:
    _begin:
#undef var_4
#define var_4 -4
	// 22023 var_4           = word ptr -4 ;~ 09CC:0225
#undef var_2
#define var_2 -2
	// 22024 var_2           = word ptr -2 ;~ 09CC:0225
#undef path
#define path 6
	// 22025 path            = dword ptr  6 ;~ 09CC:0225
cs=0x9cc;eip=0x000225; 	X(PUSH(bp));	// 22027                  push    bp ;~ 09CC:0225
cs=0x9cc;eip=0x000226; 	T(bp = sp;);	// 22028                  mov     bp, sp ;~ 09CC:0226
cs=0x9cc;eip=0x000228; 	T(SUB(sp, 4));	// 22029                  sub     sp, 4 ;~ 09CC:0228
cs=0x9cc;eip=0x00022b; 	X(PUSH(si));	// 22030                  push    si ;~ 09CC:022B
cs=0x9cc;eip=0x00022c; 	X(word_18e8a = 0;);	// 22031                  mov     word_18E8A, 0 ;~ 09CC:022C
cs=0x9cc;eip=0x000232; 	T(ax = 0x8001;);	// 22032                  mov     ax, 8001h ;~ 09CC:0232
cs=0x9cc;eip=0x000235; 	X(PUSH(ax));	// 22033                  push    ax              ; access ;~ 09CC:0235
cs=0x9cc;eip=0x000236; 	X(PUSH(*(dw*)(raddr(ss,bp+path+2))));	// 22034                  push    word ptr [bp+path+2] ;~ 09CC:0236
cs=0x9cc;eip=0x000239; 	X(PUSH(*(dw*)(raddr(ss,bp+path))));	// 22035                  push    word ptr [bp+path] ; path ;~ 09CC:0239
cs=0x9cc;eip=0x00023c; 	J(CALLF(___open_0,0));	// 22036                  call    ___open_0 ;~ 09CC:023C
cs=0x9cc;eip=0x000241; 	T(ADD(sp, 6));	// 22037                  add     sp, 6 ;~ 09CC:0241
cs=0x9cc;eip=0x000244; 	T(si = ax;);	// 22038                  mov     si, ax ;~ 09CC:0244
cs=0x9cc;eip=0x000246; 	T(CMP(si, 0x0FFFF));	// 22039                  cmp     si, 0FFFFh ;~ 09CC:0246
cs=0x9cc;eip=0x000249; 	J(JNZ(loc_184f9));	// 22040                  jnz     short loc_184F9 ;~ 09CC:0249
cs=0x9cc;eip=0x00024b; 	X(word_18e8a = 3;);	// 22041                  mov     word_18E8A, 3 ;~ 09CC:024B
cs=0x9cc;eip=0x000251; 	T(dx = 0x0FFFF;);	// 22042                  mov     dx, 0FFFFh ;~ 09CC:0251
cs=0x9cc;eip=0x000254; 	T(ax = 0x0FFFF;);	// 22043                  mov     ax, 0FFFFh ;~ 09CC:0254
cs=0x9cc;eip=0x000257; 	J(JMP(loc_18527));	// 22044                  jmp     short loc_18527 ;~ 09CC:0257
loc_184f9:
	// 5521 
cs=0x9cc;eip=0x000259; 	X(PUSH(si));	// 22048                  push    si              ; handle ;~ 09CC:0259
cs=0x9cc;eip=0x00025a; 	J(CALLF(___filelength,0));	// 22049                  call    ___filelength ;~ 09CC:025A
cs=0x9cc;eip=0x00025f; 	X(POP(cx));	// 22050                  pop     cx ;~ 09CC:025F
cs=0x9cc;eip=0x000260; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 22051                  mov     [bp+var_2], dx ;~ 09CC:0260
cs=0x9cc;eip=0x000263; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 22052                  mov     [bp+var_4], ax ;~ 09CC:0263
cs=0x9cc;eip=0x000266; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x0FFFF));	// 22053                  cmp     [bp+var_2], 0FFFFh ;~ 09CC:0266
cs=0x9cc;eip=0x00026a; 	J(JNZ(loc_18518));	// 22054                  jnz     short loc_18518 ;~ 09CC:026A
cs=0x9cc;eip=0x00026c; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x0FFFF));	// 22055                  cmp     [bp+var_4], 0FFFFh ;~ 09CC:026C
cs=0x9cc;eip=0x000270; 	J(JNZ(loc_18518));	// 22056                  jnz     short loc_18518 ;~ 09CC:0270
cs=0x9cc;eip=0x000272; 	X(word_18e8a = 5;);	// 22057                  mov     word_18E8A, 5 ;~ 09CC:0272
loc_18518:
	// 5522 
cs=0x9cc;eip=0x000278; 	X(PUSH(si));	// 22061                  push    si              ; handle ;~ 09CC:0278
cs=0x9cc;eip=0x000279; 	J(CALLF(___close_0,0));	// 22062                  call    ___close_0 ;~ 09CC:0279
cs=0x9cc;eip=0x00027e; 	X(POP(cx));	// 22063                  pop     cx ;~ 09CC:027E
cs=0x9cc;eip=0x00027f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 22064                  mov     dx, [bp+var_2] ;~ 09CC:027F
cs=0x9cc;eip=0x000282; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 22065                  mov     ax, [bp+var_4] ;~ 09CC:0282
cs=0x9cc;eip=0x000285; 	J({;});	// 22066                  jmp     short $+2 ;~ 09CC:0285
loc_18527:
	// 5523 
cs=0x9cc;eip=0x000287; 	X(POP(si));	// 22071                  pop     si ;~ 09CC:0287
cs=0x9cc;eip=0x000288; 	T(sp = bp;);	// 22072                  mov     sp, bp ;~ 09CC:0288
cs=0x9cc;eip=0x00028a; 	X(POP(bp));	// 22073                  pop     bp ;~ 09CC:028A
cs=0x9cc;eip=0x00028b; 	J(RETF(0));	// 22074                  retf ;~ 09CC:028B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_184f9: 	goto loc_184f9;
        case m2c::kloc_18518: 	goto loc_18518;
        case m2c::kloc_18527: 	goto loc_18527;
        case m2c::ksub_184c5: 	goto sub_184c5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1852c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1852c:
    _begin:
#undef block
#define block -0x0C
	// 22086 block           = dword ptr -0Ch ;~ 09CC:028C
#undef buf
#define buf -8
	// 22087 buf             = dword ptr -8 ;~ 09CC:028C
#undef nbytes
#define nbytes -4
	// 22088 nbytes          = dword ptr -4 ;~ 09CC:028C
#undef path
#define path 6
	// 22089 path            = dword ptr  6 ;~ 09CC:028C
#undef arg_4
#define arg_4 0x0A
	// 22090 arg_4           = word ptr  0Ah ;~ 09CC:028C
#undef arg_6
#define arg_6 0x0C
	// 22091 arg_6           = word ptr  0Ch ;~ 09CC:028C
cs=0x9cc;eip=0x00028c; 	X(PUSH(bp));	// 22093                  push    bp ;~ 09CC:028C
cs=0x9cc;eip=0x00028d; 	T(bp = sp;);	// 22094                  mov     bp, sp ;~ 09CC:028D
cs=0x9cc;eip=0x00028f; 	T(SUB(sp, 0x0C));	// 22095                  sub     sp, 0Ch ;~ 09CC:028F
cs=0x9cc;eip=0x000292; 	X(PUSH(si));	// 22096                  push    si ;~ 09CC:0292
cs=0x9cc;eip=0x000293; 	X(PUSH(di));	// 22097                  push    di ;~ 09CC:0293
cs=0x9cc;eip=0x000294; 	X(word_18e8a = 0;);	// 22098                  mov     word_18E8A, 0 ;~ 09CC:0294
cs=0x9cc;eip=0x00029a; 	X(PUSH(*(dw*)(raddr(ss,bp+path+2))));	// 22099                  push    word ptr [bp+path+2] ;~ 09CC:029A
cs=0x9cc;eip=0x00029d; 	X(PUSH(*(dw*)(raddr(ss,bp+path))));	// 22100                  push    word ptr [bp+path] ; path ;~ 09CC:029D
cs=0x9cc;eip=0x0002a0; 	X(PUSH(cs));	// 22101                  push    cs ;~ 09CC:02A0
cs=0x9cc;eip=0x0002a1; 	J(CALL(sub_184c5,0));	// 22102                  call    near ptr sub_184C5 ;~ 09CC:02A1
cs=0x9cc;eip=0x0002a4; 	X(POP(cx));	// 22103                  pop     cx ;~ 09CC:02A4
cs=0x9cc;eip=0x0002a5; 	X(POP(cx));	// 22104                  pop     cx ;~ 09CC:02A5
cs=0x9cc;eip=0x0002a6; 	X(MOV(*(dw*)(raddr(ss,bp+nbytes+2)), dx));	// 22105                  mov     word ptr [bp+nbytes+2], dx ;~ 09CC:02A6
cs=0x9cc;eip=0x0002a9; 	X(MOV(*(dw*)(raddr(ss,bp+nbytes)), ax));	// 22106                  mov     word ptr [bp+nbytes], ax ;~ 09CC:02A9
cs=0x9cc;eip=0x0002ac; 	T(CMP(*(dw*)(raddr(ss,bp+nbytes+2)), 0x0FFFF));	// 22107                  cmp     word ptr [bp+nbytes+2], 0FFFFh ;~ 09CC:02AC
cs=0x9cc;eip=0x0002b0; 	J(JNZ(loc_18565));	// 22108                  jnz     short loc_18565 ;~ 09CC:02B0
cs=0x9cc;eip=0x0002b2; 	T(CMP(*(dw*)(raddr(ss,bp+nbytes)), 0x0FFFF));	// 22109                  cmp     word ptr [bp+nbytes], 0FFFFh ;~ 09CC:02B2
cs=0x9cc;eip=0x0002b6; 	J(JNZ(loc_18565));	// 22110                  jnz     short loc_18565 ;~ 09CC:02B6
cs=0x9cc;eip=0x0002b8; 	X(word_18e8a = 3;);	// 22111                  mov     word_18E8A, 3 ;~ 09CC:02B8
cs=0x9cc;eip=0x0002be; 	T(XOR(dx, dx));	// 22112                  xor     dx, dx ;~ 09CC:02BE
cs=0x9cc;eip=0x0002c0; 	T(XOR(ax, ax));	// 22113                  xor     ax, ax ;~ 09CC:02C0
cs=0x9cc;eip=0x0002c2; 	J(JMP(loc_18680));	// 22114                  jmp     loc_18680 ;~ 09CC:02C2
loc_18565:
	// 5524 
cs=0x9cc;eip=0x0002c5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 22119                  mov     ax, [bp+arg_4] ;~ 09CC:02C5
cs=0x9cc;eip=0x0002c8; 	T(OR(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 22120                  or      ax, [bp+arg_6] ;~ 09CC:02C8
cs=0x9cc;eip=0x0002cb; 	J(JNZ(loc_1857c));	// 22121                  jnz     short loc_1857C ;~ 09CC:02CB
cs=0x9cc;eip=0x0002cd; 	X(PUSH(*(dw*)(raddr(ss,bp+nbytes+2))));	// 22122                  push    word ptr [bp+nbytes+2] ;~ 09CC:02CD
cs=0x9cc;eip=0x0002d0; 	X(PUSH(*(dw*)(raddr(ss,bp+nbytes))));	// 22123                  push    word ptr [bp+nbytes] ; nbytes ;~ 09CC:02D0
cs=0x9cc;eip=0x0002d3; 	J(CALLF(___farmalloc,0));	// 22124                  call    ___farmalloc ;~ 09CC:02D3
cs=0x9cc;eip=0x0002d8; 	X(POP(cx));	// 22125                  pop     cx ;~ 09CC:02D8
cs=0x9cc;eip=0x0002d9; 	X(POP(cx));	// 22126                  pop     cx ;~ 09CC:02D9
cs=0x9cc;eip=0x0002da; 	J(JMP(loc_18582));	// 22127                  jmp     short loc_18582 ;~ 09CC:02DA
loc_1857c:
	// 5525 
cs=0x9cc;eip=0x0002dc; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 22131                  mov     dx, [bp+arg_6] ;~ 09CC:02DC
cs=0x9cc;eip=0x0002df; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 22132                  mov     ax, [bp+arg_4] ;~ 09CC:02DF
loc_18582:
	// 5526 
cs=0x9cc;eip=0x0002e2; 	X(MOV(*(dw*)(raddr(ss,bp+block+2)), dx));	// 22135                  mov     word ptr [bp+block+2], dx ;~ 09CC:02E2
cs=0x9cc;eip=0x0002e5; 	X(MOV(*(dw*)(raddr(ss,bp+block)), ax));	// 22136                  mov     word ptr [bp+block], ax ;~ 09CC:02E5
cs=0x9cc;eip=0x0002e8; 	X(MOV(*(dw*)(raddr(ss,bp+buf+2)), dx));	// 22137                  mov     word ptr [bp+buf+2], dx ;~ 09CC:02E8
cs=0x9cc;eip=0x0002eb; 	X(MOV(*(dw*)(raddr(ss,bp+buf)), ax));	// 22138                  mov     word ptr [bp+buf], ax ;~ 09CC:02EB
cs=0x9cc;eip=0x0002ee; 	T(MOV(ax, *(dw*)(raddr(ss,bp+buf))));	// 22139                  mov     ax, word ptr [bp+buf] ;~ 09CC:02EE
cs=0x9cc;eip=0x0002f1; 	T(OR(ax, *(dw*)(raddr(ss,bp+buf+2))));	// 22140                  or      ax, word ptr [bp+buf+2] ;~ 09CC:02F1
cs=0x9cc;eip=0x0002f4; 	J(JNZ(loc_185a3));	// 22141                  jnz     short loc_185A3 ;~ 09CC:02F4
cs=0x9cc;eip=0x0002f6; 	X(word_18e8a = 2;);	// 22142                  mov     word_18E8A, 2 ;~ 09CC:02F6
cs=0x9cc;eip=0x0002fc; 	T(XOR(dx, dx));	// 22143                  xor     dx, dx ;~ 09CC:02FC
cs=0x9cc;eip=0x0002fe; 	T(XOR(ax, ax));	// 22144                  xor     ax, ax ;~ 09CC:02FE
cs=0x9cc;eip=0x000300; 	J(JMP(loc_18680));	// 22145                  jmp     loc_18680 ;~ 09CC:0300
loc_185a3:
	// 5527 
cs=0x9cc;eip=0x000303; 	T(ax = 0x8001;);	// 22149                  mov     ax, 8001h ;~ 09CC:0303
cs=0x9cc;eip=0x000306; 	X(PUSH(ax));	// 22150                  push    ax              ; access ;~ 09CC:0306
cs=0x9cc;eip=0x000307; 	X(PUSH(*(dw*)(raddr(ss,bp+path+2))));	// 22151                  push    word ptr [bp+path+2] ;~ 09CC:0307
cs=0x9cc;eip=0x00030a; 	X(PUSH(*(dw*)(raddr(ss,bp+path))));	// 22152                  push    word ptr [bp+path] ; path ;~ 09CC:030A
cs=0x9cc;eip=0x00030d; 	J(CALLF(___open_0,0));	// 22153                  call    ___open_0 ;~ 09CC:030D
cs=0x9cc;eip=0x000312; 	T(ADD(sp, 6));	// 22154                  add     sp, 6 ;~ 09CC:0312
cs=0x9cc;eip=0x000315; 	T(si = ax;);	// 22155                  mov     si, ax ;~ 09CC:0315
cs=0x9cc;eip=0x000317; 	T(CMP(si, 0x0FFFF));	// 22156                  cmp     si, 0FFFFh ;~ 09CC:0317
cs=0x9cc;eip=0x00031a; 	J(JNZ(loc_185d6));	// 22157                  jnz     short loc_185D6 ;~ 09CC:031A
cs=0x9cc;eip=0x00031c; 	X(PUSH(*(dw*)(raddr(ss,bp+block+2))));	// 22158                  push    word ptr [bp+block+2] ;~ 09CC:031C
cs=0x9cc;eip=0x00031f; 	X(PUSH(*(dw*)(raddr(ss,bp+block))));	// 22159                  push    word ptr [bp+block] ; block ;~ 09CC:031F
cs=0x9cc;eip=0x000322; 	J(CALLF(___farfree,0));	// 22160                  call    ___farfree ;~ 09CC:0322
cs=0x9cc;eip=0x000327; 	X(POP(cx));	// 22161                  pop     cx ;~ 09CC:0327
cs=0x9cc;eip=0x000328; 	X(POP(cx));	// 22162                  pop     cx ;~ 09CC:0328
cs=0x9cc;eip=0x000329; 	X(word_18e8a = 3;);	// 22163                  mov     word_18E8A, 3 ;~ 09CC:0329
cs=0x9cc;eip=0x00032f; 	T(XOR(dx, dx));	// 22164                  xor     dx, dx ;~ 09CC:032F
cs=0x9cc;eip=0x000331; 	T(XOR(ax, ax));	// 22165                  xor     ax, ax ;~ 09CC:0331
cs=0x9cc;eip=0x000333; 	J(JMP(loc_18680));	// 22166                  jmp     loc_18680 ;~ 09CC:0333
loc_185d6:
	// 5528 
cs=0x9cc;eip=0x000336; 	J(JMP(loc_18630));	// 22170                  jmp     short loc_18630 ;~ 09CC:0336
loc_185d8:
	// 5529 
cs=0x9cc;eip=0x000338; 	T(ax = 0x1000;);	// 22175                  mov     ax, 1000h ;~ 09CC:0338
cs=0x9cc;eip=0x00033b; 	X(PUSH(ax));	// 22176                  push    ax              ; len ;~ 09CC:033B
cs=0x9cc;eip=0x00033c; 	X(PUSH(*(dw*)(raddr(ss,bp+buf+2))));	// 22177                  push    word ptr [bp+buf+2] ;~ 09CC:033C
cs=0x9cc;eip=0x00033f; 	X(PUSH(*(dw*)(raddr(ss,bp+buf))));	// 22178                  push    word ptr [bp+buf] ; buf ;~ 09CC:033F
cs=0x9cc;eip=0x000342; 	X(PUSH(si));	// 22179                  push    si              ; handle ;~ 09CC:0342
cs=0x9cc;eip=0x000343; 	J(CALLF(__j____read,0));	// 22180                  call    __j____read ;~ 09CC:0343
cs=0x9cc;eip=0x000348; 	T(ADD(sp, 8));	// 22181                  add     sp, 8 ;~ 09CC:0348
cs=0x9cc;eip=0x00034b; 	T(di = ax;);	// 22182                  mov     di, ax ;~ 09CC:034B
cs=0x9cc;eip=0x00034d; 	T(CMP(di, 0x1000));	// 22183                  cmp     di, 1000h ;~ 09CC:034D
cs=0x9cc;eip=0x000351; 	J(JZ(loc_1860c));	// 22184                  jz      short loc_1860C ;~ 09CC:0351
cs=0x9cc;eip=0x000353; 	X(PUSH(*(dw*)(raddr(ss,bp+block+2))));	// 22185                  push    word ptr [bp+block+2] ;~ 09CC:0353
cs=0x9cc;eip=0x000356; 	X(PUSH(*(dw*)(raddr(ss,bp+block))));	// 22186                  push    word ptr [bp+block] ; block ;~ 09CC:0356
cs=0x9cc;eip=0x000359; 	J(CALLF(___farfree,0));	// 22187                  call    ___farfree ;~ 09CC:0359
cs=0x9cc;eip=0x00035e; 	X(POP(cx));	// 22188                  pop     cx ;~ 09CC:035E
cs=0x9cc;eip=0x00035f; 	X(POP(cx));	// 22189                  pop     cx ;~ 09CC:035F
cs=0x9cc;eip=0x000360; 	X(word_18e8a = 5;);	// 22190                  mov     word_18E8A, 5 ;~ 09CC:0360
cs=0x9cc;eip=0x000366; 	T(XOR(dx, dx));	// 22191                  xor     dx, dx ;~ 09CC:0366
cs=0x9cc;eip=0x000368; 	T(XOR(ax, ax));	// 22192                  xor     ax, ax ;~ 09CC:0368
cs=0x9cc;eip=0x00036a; 	J(JMP(loc_18680));	// 22193                  jmp     short loc_18680 ;~ 09CC:036A
loc_1860c:
	// 5530 
cs=0x9cc;eip=0x00036c; 	X(SUB(*(dw*)(raddr(ss,bp+nbytes)), 0x1000));	// 22197                  sub     word ptr [bp+nbytes], 1000h ;~ 09CC:036C
cs=0x9cc;eip=0x000371; 	X(SBB(*(dw*)(raddr(ss,bp+nbytes+2)), 0));	// 22198                  sbb     word ptr [bp+nbytes+2], 0 ;~ 09CC:0371
cs=0x9cc;eip=0x000375; 	T(XOR(ax, ax));	// 22199                  xor     ax, ax ;~ 09CC:0375
cs=0x9cc;eip=0x000377; 	T(dx = 0x1000;);	// 22200                  mov     dx, 1000h ;~ 09CC:0377
cs=0x9cc;eip=0x00037a; 	X(PUSH(ax));	// 22201                  push    ax ;~ 09CC:037A
cs=0x9cc;eip=0x00037b; 	X(PUSH(dx));	// 22202                  push    dx ;~ 09CC:037B
cs=0x9cc;eip=0x00037c; 	X(PUSH(*(dw*)(raddr(ss,bp+buf+2))));	// 22203                  push    word ptr [bp+buf+2] ;~ 09CC:037C
cs=0x9cc;eip=0x00037f; 	X(PUSH(*(dw*)(raddr(ss,bp+buf))));	// 22204                  push    word ptr [bp+buf] ;~ 09CC:037F
cs=0x9cc;eip=0x000382; 	J(CALLF(sub_17f4d,0));	// 22205                  call    sub_17F4D ;~ 09CC:0382
cs=0x9cc;eip=0x000387; 	T(ADD(sp, 8));	// 22206                  add     sp, 8 ;~ 09CC:0387
cs=0x9cc;eip=0x00038a; 	X(MOV(*(dw*)(raddr(ss,bp+buf+2)), dx));	// 22207                  mov     word ptr [bp+buf+2], dx ;~ 09CC:038A
cs=0x9cc;eip=0x00038d; 	X(MOV(*(dw*)(raddr(ss,bp+buf)), ax));	// 22208                  mov     word ptr [bp+buf], ax ;~ 09CC:038D
loc_18630:
	// 5531 
cs=0x9cc;eip=0x000390; 	T(CMP(*(dw*)(raddr(ss,bp+nbytes+2)), 0));	// 22211                  cmp     word ptr [bp+nbytes+2], 0 ;~ 09CC:0390
cs=0x9cc;eip=0x000394; 	J(JA(loc_185d8));	// 22212                  ja      short loc_185D8 ;~ 09CC:0394
cs=0x9cc;eip=0x000396; 	J(JC(loc_1863f));	// 22213                  jb      short loc_1863F ;~ 09CC:0396
cs=0x9cc;eip=0x000398; 	T(CMP(*(dw*)(raddr(ss,bp+nbytes)), 0x1000));	// 22214                  cmp     word ptr [bp+nbytes], 1000h ;~ 09CC:0398
cs=0x9cc;eip=0x00039d; 	J(JNC(loc_185d8));	// 22215                  jnb     short loc_185D8 ;~ 09CC:039D
loc_1863f:
	// 5532 
cs=0x9cc;eip=0x00039f; 	X(PUSH(*(dw*)(raddr(ss,bp+nbytes))));	// 22218                  push    word ptr [bp+nbytes] ; len ;~ 09CC:039F
cs=0x9cc;eip=0x0003a2; 	X(PUSH(*(dw*)(raddr(ss,bp+buf+2))));	// 22219                  push    word ptr [bp+buf+2] ;~ 09CC:03A2
cs=0x9cc;eip=0x0003a5; 	X(PUSH(*(dw*)(raddr(ss,bp+buf))));	// 22220                  push    word ptr [bp+buf] ; buf ;~ 09CC:03A5
cs=0x9cc;eip=0x0003a8; 	X(PUSH(si));	// 22221                  push    si              ; handle ;~ 09CC:03A8
cs=0x9cc;eip=0x0003a9; 	J(CALLF(__j____read,0));	// 22222                  call    __j____read ;~ 09CC:03A9
cs=0x9cc;eip=0x0003ae; 	T(ADD(sp, 8));	// 22223                  add     sp, 8 ;~ 09CC:03AE
cs=0x9cc;eip=0x0003b1; 	T(di = ax;);	// 22224                  mov     di, ax ;~ 09CC:03B1
cs=0x9cc;eip=0x0003b3; 	T(CMP(di, *(dw*)(raddr(ss,bp+nbytes))));	// 22225                  cmp     di, word ptr [bp+nbytes] ;~ 09CC:03B3
cs=0x9cc;eip=0x0003b6; 	J(JZ(loc_18671));	// 22226                  jz      short loc_18671 ;~ 09CC:03B6
cs=0x9cc;eip=0x0003b8; 	X(PUSH(*(dw*)(raddr(ss,bp+block+2))));	// 22227                  push    word ptr [bp+block+2] ;~ 09CC:03B8
cs=0x9cc;eip=0x0003bb; 	X(PUSH(*(dw*)(raddr(ss,bp+block))));	// 22228                  push    word ptr [bp+block] ; block ;~ 09CC:03BB
cs=0x9cc;eip=0x0003be; 	J(CALLF(___farfree,0));	// 22229                  call    ___farfree ;~ 09CC:03BE
cs=0x9cc;eip=0x0003c3; 	X(POP(cx));	// 22230                  pop     cx ;~ 09CC:03C3
cs=0x9cc;eip=0x0003c4; 	X(POP(cx));	// 22231                  pop     cx ;~ 09CC:03C4
cs=0x9cc;eip=0x0003c5; 	X(word_18e8a = 5;);	// 22232                  mov     word_18E8A, 5 ;~ 09CC:03C5
cs=0x9cc;eip=0x0003cb; 	T(XOR(dx, dx));	// 22233                  xor     dx, dx ;~ 09CC:03CB
cs=0x9cc;eip=0x0003cd; 	T(XOR(ax, ax));	// 22234                  xor     ax, ax ;~ 09CC:03CD
cs=0x9cc;eip=0x0003cf; 	J(JMP(loc_18680));	// 22235                  jmp     short loc_18680 ;~ 09CC:03CF
loc_18671:
	// 5533 
cs=0x9cc;eip=0x0003d1; 	X(PUSH(si));	// 22239                  push    si              ; handle ;~ 09CC:03D1
cs=0x9cc;eip=0x0003d2; 	J(CALLF(___close_0,0));	// 22240                  call    ___close_0 ;~ 09CC:03D2
cs=0x9cc;eip=0x0003d7; 	X(POP(cx));	// 22241                  pop     cx ;~ 09CC:03D7
cs=0x9cc;eip=0x0003d8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+block+2))));	// 22242                  mov     dx, word ptr [bp+block+2] ;~ 09CC:03D8
cs=0x9cc;eip=0x0003db; 	T(MOV(ax, *(dw*)(raddr(ss,bp+block))));	// 22243                  mov     ax, word ptr [bp+block] ;~ 09CC:03DB
cs=0x9cc;eip=0x0003de; 	J({;});	// 22244                  jmp     short $+2 ;~ 09CC:03DE
loc_18680:
	// 5534 
cs=0x9cc;eip=0x0003e0; 	X(POP(di));	// 22249                  pop     di ;~ 09CC:03E0
cs=0x9cc;eip=0x0003e1; 	X(POP(si));	// 22250                  pop     si ;~ 09CC:03E1
cs=0x9cc;eip=0x0003e2; 	T(sp = bp;);	// 22251                  mov     sp, bp ;~ 09CC:03E2
cs=0x9cc;eip=0x0003e4; 	X(POP(bp));	// 22252                  pop     bp ;~ 09CC:03E4
cs=0x9cc;eip=0x0003e5; 	J(RETF(0));	// 22253                  retf ;~ 09CC:03E5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_18565: 	goto loc_18565;
        case m2c::kloc_1857c: 	goto loc_1857c;
        case m2c::kloc_18582: 	goto loc_18582;
        case m2c::kloc_185a3: 	goto loc_185a3;
        case m2c::kloc_185d6: 	goto loc_185d6;
        case m2c::kloc_185d8: 	goto loc_185d8;
        case m2c::kloc_1860c: 	goto loc_1860c;
        case m2c::kloc_18630: 	goto loc_18630;
        case m2c::kloc_1863f: 	goto loc_1863f;
        case m2c::kloc_18671: 	goto loc_18671;
        case m2c::kloc_18680: 	goto loc_18680;
        case m2c::ksub_1852c: 	goto sub_1852c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_18686(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_18686:
    _begin:
#undef var_8
#define var_8 -8
	// 22266 var_8           = word ptr -8 ;~ 09CC:03E6
#undef var_6
#define var_6 -6
	// 22267 var_6           = word ptr -6 ;~ 09CC:03E6
#undef nbytes
#define nbytes -4
	// 22268 nbytes          = dword ptr -4 ;~ 09CC:03E6
#undef path
#define path 6
	// 22269 path            = dword ptr  6 ;~ 09CC:03E6
cs=0x9cc;eip=0x0003e6; 	X(PUSH(bp));	// 22271                  push    bp ;~ 09CC:03E6
cs=0x9cc;eip=0x0003e7; 	T(bp = sp;);	// 22272                  mov     bp, sp ;~ 09CC:03E7
cs=0x9cc;eip=0x0003e9; 	T(SUB(sp, 8));	// 22273                  sub     sp, 8 ;~ 09CC:03E9
cs=0x9cc;eip=0x0003ec; 	X(PUSH(*(dw*)(raddr(ss,bp+path+2))));	// 22274                  push    word ptr [bp+path+2] ;~ 09CC:03EC
cs=0x9cc;eip=0x0003ef; 	X(PUSH(*(dw*)(raddr(ss,bp+path))));	// 22275                  push    word ptr [bp+path] ; path ;~ 09CC:03EF
cs=0x9cc;eip=0x0003f2; 	X(PUSH(cs));	// 22276                  push    cs ;~ 09CC:03F2
cs=0x9cc;eip=0x0003f3; 	J(CALL(sub_184c5,0));	// 22277                  call    near ptr sub_184C5 ;~ 09CC:03F3
cs=0x9cc;eip=0x0003f6; 	X(POP(cx));	// 22278                  pop     cx ;~ 09CC:03F6
cs=0x9cc;eip=0x0003f7; 	X(POP(cx));	// 22279                  pop     cx ;~ 09CC:03F7
cs=0x9cc;eip=0x0003f8; 	X(MOV(*(dw*)(raddr(ss,bp+nbytes+2)), dx));	// 22280                  mov     word ptr [bp+nbytes+2], dx ;~ 09CC:03F8
cs=0x9cc;eip=0x0003fb; 	X(MOV(*(dw*)(raddr(ss,bp+nbytes)), ax));	// 22281                  mov     word ptr [bp+nbytes], ax ;~ 09CC:03FB
cs=0x9cc;eip=0x0003fe; 	T(CMP(*(dw*)(raddr(ss,bp+nbytes+2)), 0x0FFFF));	// 22282                  cmp     word ptr [bp+nbytes+2], 0FFFFh ;~ 09CC:03FE
cs=0x9cc;eip=0x000402; 	J(JNZ(loc_186b6));	// 22283                  jnz     short loc_186B6 ;~ 09CC:0402
cs=0x9cc;eip=0x000404; 	T(CMP(*(dw*)(raddr(ss,bp+nbytes)), 0x0FFFF));	// 22284                  cmp     word ptr [bp+nbytes], 0FFFFh ;~ 09CC:0404
cs=0x9cc;eip=0x000408; 	J(JNZ(loc_186b6));	// 22285                  jnz     short loc_186B6 ;~ 09CC:0408
cs=0x9cc;eip=0x00040a; 	X(word_18e8a = 3;);	// 22286                  mov     word_18E8A, 3 ;~ 09CC:040A
cs=0x9cc;eip=0x000410; 	T(XOR(dx, dx));	// 22287                  xor     dx, dx ;~ 09CC:0410
cs=0x9cc;eip=0x000412; 	T(XOR(ax, ax));	// 22288                  xor     ax, ax ;~ 09CC:0412
cs=0x9cc;eip=0x000414; 	J(JMP(loc_18716));	// 22289                  jmp     short loc_18716 ;~ 09CC:0414
loc_186b6:
	// 5535 
cs=0x9cc;eip=0x000416; 	X(ADD(*(dw*)(raddr(ss,bp+nbytes)), 0x10));	// 22294                  add     word ptr [bp+nbytes], 10h ;~ 09CC:0416
cs=0x9cc;eip=0x00041a; 	X(ADC(*(dw*)(raddr(ss,bp+nbytes+2)), 0));	// 22295                  adc     word ptr [bp+nbytes+2], 0 ;~ 09CC:041A
cs=0x9cc;eip=0x00041e; 	J(CALLF(sub_120a6,0));	// 22296                  call    sub_120A6 ;~ 09CC:041E
cs=0x9cc;eip=0x000423; 	T(CMP(dx, *(dw*)(raddr(ss,bp+nbytes+2))));	// 22298                  cmp     dx, word ptr [bp+nbytes+2] ;~ 09CC:0423
cs=0x9cc;eip=0x000426; 	J(JA(loc_186db));	// 22299                  ja      short loc_186DB ;~ 09CC:0426
cs=0x9cc;eip=0x000428; 	J(JC(loc_186cf));	// 22300                  jb      short loc_186CF ;~ 09CC:0428
cs=0x9cc;eip=0x00042a; 	T(CMP(ax, *(dw*)(raddr(ss,bp+nbytes))));	// 22301                  cmp     ax, word ptr [bp+nbytes] ;~ 09CC:042A
cs=0x9cc;eip=0x00042d; 	J(JNC(loc_186db));	// 22302                  jnb     short loc_186DB ;~ 09CC:042D
loc_186cf:
	// 5536 
cs=0x9cc;eip=0x00042f; 	X(word_18e8a = 2;);	// 22305                  mov     word_18E8A, 2 ;~ 09CC:042F
cs=0x9cc;eip=0x000435; 	T(XOR(dx, dx));	// 22306                  xor     dx, dx ;~ 09CC:0435
cs=0x9cc;eip=0x000437; 	T(XOR(ax, ax));	// 22307                  xor     ax, ax ;~ 09CC:0437
cs=0x9cc;eip=0x000439; 	J(JMP(loc_18716));	// 22308                  jmp     short loc_18716 ;~ 09CC:0439
loc_186db:
	// 5537 
cs=0x9cc;eip=0x00043b; 	X(PUSH(*(dw*)(raddr(ss,bp+nbytes+2))));	// 22313                  push    word ptr [bp+nbytes+2] ;~ 09CC:043B
cs=0x9cc;eip=0x00043e; 	X(PUSH(*(dw*)(raddr(ss,bp+nbytes))));	// 22314                  push    word ptr [bp+nbytes] ; nbytes ;~ 09CC:043E
cs=0x9cc;eip=0x000441; 	J(CALLF(___farmalloc,0));	// 22315                  call    ___farmalloc ;~ 09CC:0441
cs=0x9cc;eip=0x000446; 	X(POP(cx));	// 22317                  pop     cx ;~ 09CC:0446
cs=0x9cc;eip=0x000447; 	X(POP(cx));	// 22318                  pop     cx ;~ 09CC:0447
cs=0x9cc;eip=0x000448; 	T(INC(dx));	// 22319                  inc     dx ;~ 09CC:0448
cs=0x9cc;eip=0x000449; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 22320                  mov     [bp+var_6], dx ;~ 09CC:0449
cs=0x9cc;eip=0x00044c; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 22321                  mov     [bp+var_8], 0 ;~ 09CC:044C
cs=0x9cc;eip=0x000451; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 22322                  push    [bp+var_6]      ; int ;~ 09CC:0451
cs=0x9cc;eip=0x000454; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 22323                  push    [bp+var_8]      ; int ;~ 09CC:0454
cs=0x9cc;eip=0x000457; 	X(PUSH(*(dw*)(raddr(ss,bp+path+2))));	// 22324                  push    word ptr [bp+path+2] ;~ 09CC:0457
cs=0x9cc;eip=0x00045a; 	X(PUSH(*(dw*)(raddr(ss,bp+path))));	// 22325                  push    word ptr [bp+path] ; path ;~ 09CC:045A
cs=0x9cc;eip=0x00045d; 	X(PUSH(cs));	// 22326                  push    cs ;~ 09CC:045D
cs=0x9cc;eip=0x00045e; 	J(CALL(sub_1852c,0));	// 22327                  call    near ptr sub_1852C ;~ 09CC:045E
cs=0x9cc;eip=0x000461; 	T(ADD(sp, 8));	// 22328                  add     sp, 8 ;~ 09CC:0461
cs=0x9cc;eip=0x000464; 	T(OR(ax, dx));	// 22329                  or      ax, dx ;~ 09CC:0464
cs=0x9cc;eip=0x000466; 	J(JNZ(loc_1870e));	// 22330                  jnz     short loc_1870E ;~ 09CC:0466
cs=0x9cc;eip=0x000468; 	T(XOR(dx, dx));	// 22331                  xor     dx, dx ;~ 09CC:0468
cs=0x9cc;eip=0x00046a; 	T(XOR(ax, ax));	// 22332                  xor     ax, ax ;~ 09CC:046A
cs=0x9cc;eip=0x00046c; 	J(JMP(loc_18716));	// 22333                  jmp     short loc_18716 ;~ 09CC:046C
loc_1870e:
	// 5538 
cs=0x9cc;eip=0x00046e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 22337                  mov     dx, [bp+var_6] ;~ 09CC:046E
cs=0x9cc;eip=0x000471; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 22338                  mov     ax, [bp+var_8] ;~ 09CC:0471
cs=0x9cc;eip=0x000474; 	J({;});	// 22339                  jmp     short $+2 ;~ 09CC:0474
loc_18716:
	// 5539 
cs=0x9cc;eip=0x000476; 	T(sp = bp;);	// 22344                  mov     sp, bp ;~ 09CC:0476
cs=0x9cc;eip=0x000478; 	X(POP(bp));	// 22345                  pop     bp ;~ 09CC:0478
cs=0x9cc;eip=0x000479; 	J(RETF(0));	// 22346                  retf ;~ 09CC:0479

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_186b6: 	goto loc_186b6;
        case m2c::kloc_186cf: 	goto loc_186cf;
        case m2c::kloc_186db: 	goto loc_186db;
        case m2c::kloc_1870e: 	goto loc_1870e;
        case m2c::kloc_18716: 	goto loc_18716;
        case m2c::ksub_18686: 	goto sub_18686;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg006_47a_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg006_47a_proc:
    _begin:
cs=0x9cc;eip=0x00047a; 	X(PUSH(bp));	// 22350                  push    bp ;~ 09CC:047A
cs=0x9cc;eip=0x00047b; 	T(bp = sp;);	// 22351                  mov     bp, sp ;~ 09CC:047B
cs=0x9cc;eip=0x00047d; 	X(PUSH(si));	// 22352                  push    si ;~ 09CC:047D
cs=0x9cc;eip=0x00047e; 	X(PUSH(di));	// 22353                  push    di ;~ 09CC:047E
cs=0x9cc;eip=0x00047f; 	X(word_18e8a = 0;);	// 22354                  mov     word_18E8A, 0 ;~ 09CC:047F
cs=0x9cc;eip=0x000485; 	T(ax = 0x180;);	// 22355                  mov     ax, 180h ;~ 09CC:0485
cs=0x9cc;eip=0x000488; 	X(PUSH(ax));	// 22356                  push    ax ;~ 09CC:0488
cs=0x9cc;eip=0x000489; 	T(ax = 0x8304;);	// 22357                  mov     ax, 8304h ;~ 09CC:0489
cs=0x9cc;eip=0x00048c; 	X(PUSH(ax));	// 22358                  push    ax ;~ 09CC:048C
cs=0x9cc;eip=0x00048d; 	X(PUSH(*(dw*)(raddr(ss,bp+8))));	// 22359                  push    word ptr [bp+8] ;~ 09CC:048D
cs=0x9cc;eip=0x000490; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 22360                  push    word ptr [bp+6] ;~ 09CC:0490
cs=0x9cc;eip=0x000493; 	J(CALLF(___open_0,0));	// 22361                  call    ___open_0 ;~ 09CC:0493
cs=0x9cc;eip=0x000498; 	T(ADD(sp, 8));	// 22362                  add     sp, 8 ;~ 09CC:0498
cs=0x9cc;eip=0x00049b; 	T(di = ax;);	// 22363                  mov     di, ax ;~ 09CC:049B
cs=0x9cc;eip=0x00049d; 	T(CMP(di, 0x0FFFF));	// 22364                  cmp     di, 0FFFFh ;~ 09CC:049D
cs=0x9cc;eip=0x0004a0; 	J(JNZ(loc_1874d));	// 22365                  jnz     short loc_1874D ;~ 09CC:04A0
cs=0x9cc;eip=0x0004a2; 	X(word_18e8a = 4;);	// 22366                  mov     word_18E8A, 4 ;~ 09CC:04A2
cs=0x9cc;eip=0x0004a8; 	T(XOR(ax, ax));	// 22367                  xor     ax, ax ;~ 09CC:04A8
cs=0x9cc;eip=0x0004aa; 	J(JMP(loc_187f5));	// 22368                  jmp     loc_187F5 ;~ 09CC:04AA
loc_1874d:
	// 5540 
cs=0x9cc;eip=0x0004ad; 	J(JMP(loc_187a8));	// 22372                  jmp     short loc_187A8 ;~ 09CC:04AD
loc_1874f:
	// 5541 
cs=0x9cc;eip=0x0004af; 	T(ax = 0x1000;);	// 22377                  mov     ax, 1000h ;~ 09CC:04AF
cs=0x9cc;eip=0x0004b2; 	X(PUSH(ax));	// 22378                  push    ax ;~ 09CC:04B2
cs=0x9cc;eip=0x0004b3; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 22379                  push    word ptr [bp+0Ch] ;~ 09CC:04B3
cs=0x9cc;eip=0x0004b6; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0A))));	// 22380                  push    word ptr [bp+0Ah] ;~ 09CC:04B6
cs=0x9cc;eip=0x0004b9; 	X(PUSH(di));	// 22381                  push    di ;~ 09CC:04B9
cs=0x9cc;eip=0x0004ba; 	J(CALLF(__j____write,0));	// 22382                  call    __j____write ;~ 09CC:04BA
cs=0x9cc;eip=0x0004bf; 	T(ADD(sp, 8));	// 22383                  add     sp, 8 ;~ 09CC:04BF
cs=0x9cc;eip=0x0004c2; 	T(si = ax;);	// 22384                  mov     si, ax ;~ 09CC:04C2
cs=0x9cc;eip=0x0004c4; 	T(CMP(si, 0x0FFFF));	// 22385                  cmp     si, 0FFFFh ;~ 09CC:04C4
cs=0x9cc;eip=0x0004c7; 	J(JNZ(loc_18774));	// 22386                  jnz     short loc_18774 ;~ 09CC:04C7
cs=0x9cc;eip=0x0004c9; 	X(word_18e8a = 4;);	// 22387                  mov     word_18E8A, 4 ;~ 09CC:04C9
cs=0x9cc;eip=0x0004cf; 	T(XOR(ax, ax));	// 22388                  xor     ax, ax ;~ 09CC:04CF
cs=0x9cc;eip=0x0004d1; 	J(JMP(loc_187f5));	// 22389                  jmp     loc_187F5 ;~ 09CC:04D1
loc_18774:
	// 5542 
cs=0x9cc;eip=0x0004d4; 	T(CMP(si, 0x1000));	// 22393                  cmp     si, 1000h ;~ 09CC:04D4
cs=0x9cc;eip=0x0004d8; 	J(JZ(loc_18784));	// 22394                  jz      short loc_18784 ;~ 09CC:04D8
cs=0x9cc;eip=0x0004da; 	X(word_18e8a = 6;);	// 22395                  mov     word_18E8A, 6 ;~ 09CC:04DA
cs=0x9cc;eip=0x0004e0; 	T(XOR(ax, ax));	// 22396                  xor     ax, ax ;~ 09CC:04E0
cs=0x9cc;eip=0x0004e2; 	J(JMP(loc_187f5));	// 22397                  jmp     short loc_187F5 ;~ 09CC:04E2
loc_18784:
	// 5543 
cs=0x9cc;eip=0x0004e4; 	X(SUB(*(dw*)(raddr(ss,bp+0x0E)), 0x1000));	// 22401                  sub     word ptr [bp+0Eh], 1000h ;~ 09CC:04E4
cs=0x9cc;eip=0x0004e9; 	X(SBB(*(dw*)(raddr(ss,bp+0x10)), 0));	// 22402                  sbb     word ptr [bp+10h], 0 ;~ 09CC:04E9
cs=0x9cc;eip=0x0004ed; 	T(XOR(ax, ax));	// 22403                  xor     ax, ax ;~ 09CC:04ED
cs=0x9cc;eip=0x0004ef; 	T(dx = 0x1000;);	// 22404                  mov     dx, 1000h ;~ 09CC:04EF
cs=0x9cc;eip=0x0004f2; 	X(PUSH(ax));	// 22405                  push    ax ;~ 09CC:04F2
cs=0x9cc;eip=0x0004f3; 	X(PUSH(dx));	// 22406                  push    dx ;~ 09CC:04F3
cs=0x9cc;eip=0x0004f4; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 22407                  push    word ptr [bp+0Ch] ;~ 09CC:04F4
cs=0x9cc;eip=0x0004f7; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0A))));	// 22408                  push    word ptr [bp+0Ah] ;~ 09CC:04F7
cs=0x9cc;eip=0x0004fa; 	J(CALLF(sub_17f4d,0));	// 22409                  call    sub_17F4D ;~ 09CC:04FA
cs=0x9cc;eip=0x0004ff; 	T(ADD(sp, 8));	// 22410                  add     sp, 8 ;~ 09CC:04FF
cs=0x9cc;eip=0x000502; 	X(MOV(*(dw*)(raddr(ss,bp+0x0C)), dx));	// 22411                  mov     [bp+0Ch], dx ;~ 09CC:0502
cs=0x9cc;eip=0x000505; 	X(MOV(*(dw*)(raddr(ss,bp+0x0A)), ax));	// 22412                  mov     [bp+0Ah], ax ;~ 09CC:0505
loc_187a8:
	// 5544 
cs=0x9cc;eip=0x000508; 	T(CMP(*(dw*)(raddr(ss,bp+0x10)), 0));	// 22415                  cmp     word ptr [bp+10h], 0 ;~ 09CC:0508
cs=0x9cc;eip=0x00050c; 	J(JA(loc_1874f));	// 22416                  ja      short loc_1874F ;~ 09CC:050C
cs=0x9cc;eip=0x00050e; 	J(JC(loc_187b7));	// 22417                  jb      short loc_187B7 ;~ 09CC:050E
cs=0x9cc;eip=0x000510; 	T(CMP(*(dw*)(raddr(ss,bp+0x0E)), 0x1000));	// 22418                  cmp     word ptr [bp+0Eh], 1000h ;~ 09CC:0510
cs=0x9cc;eip=0x000515; 	J(JNC(loc_1874f));	// 22419                  jnb     short loc_1874F ;~ 09CC:0515
loc_187b7:
	// 5545 
cs=0x9cc;eip=0x000517; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0E))));	// 22422                  push    word ptr [bp+0Eh] ;~ 09CC:0517
cs=0x9cc;eip=0x00051a; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 22423                  push    word ptr [bp+0Ch] ;~ 09CC:051A
cs=0x9cc;eip=0x00051d; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0A))));	// 22424                  push    word ptr [bp+0Ah] ;~ 09CC:051D
cs=0x9cc;eip=0x000520; 	X(PUSH(di));	// 22425                  push    di ;~ 09CC:0520
cs=0x9cc;eip=0x000521; 	J(CALLF(__j____write,0));	// 22426                  call    __j____write ;~ 09CC:0521
cs=0x9cc;eip=0x000526; 	T(ADD(sp, 8));	// 22427                  add     sp, 8 ;~ 09CC:0526
cs=0x9cc;eip=0x000529; 	T(si = ax;);	// 22428                  mov     si, ax ;~ 09CC:0529
cs=0x9cc;eip=0x00052b; 	T(CMP(si, 0x0FFFF));	// 22429                  cmp     si, 0FFFFh ;~ 09CC:052B
cs=0x9cc;eip=0x00052e; 	J(JNZ(loc_187da));	// 22430                  jnz     short loc_187DA ;~ 09CC:052E
cs=0x9cc;eip=0x000530; 	X(word_18e8a = 4;);	// 22431                  mov     word_18E8A, 4 ;~ 09CC:0530
cs=0x9cc;eip=0x000536; 	T(XOR(ax, ax));	// 22432                  xor     ax, ax ;~ 09CC:0536
cs=0x9cc;eip=0x000538; 	J(JMP(loc_187f5));	// 22433                  jmp     short loc_187F5 ;~ 09CC:0538
loc_187da:
	// 5546 
cs=0x9cc;eip=0x00053a; 	T(CMP(si, *(dw*)(raddr(ss,bp+0x0E))));	// 22437                  cmp     si, [bp+0Eh] ;~ 09CC:053A
cs=0x9cc;eip=0x00053d; 	J(JZ(loc_187e9));	// 22438                  jz      short loc_187E9 ;~ 09CC:053D
cs=0x9cc;eip=0x00053f; 	X(word_18e8a = 6;);	// 22439                  mov     word_18E8A, 6 ;~ 09CC:053F
cs=0x9cc;eip=0x000545; 	T(XOR(ax, ax));	// 22440                  xor     ax, ax ;~ 09CC:0545
cs=0x9cc;eip=0x000547; 	J(JMP(loc_187f5));	// 22441                  jmp     short loc_187F5 ;~ 09CC:0547
loc_187e9:
	// 5547 
cs=0x9cc;eip=0x000549; 	X(PUSH(di));	// 22445                  push    di ;~ 09CC:0549
cs=0x9cc;eip=0x00054a; 	J(CALLF(___close_0,0));	// 22446                  call    ___close_0 ;~ 09CC:054A
cs=0x9cc;eip=0x00054f; 	X(POP(cx));	// 22447                  pop     cx ;~ 09CC:054F
cs=0x9cc;eip=0x000550; 	T(ax = 1;);	// 22448                  mov     ax, 1 ;~ 09CC:0550
cs=0x9cc;eip=0x000553; 	J({;});	// 22449                  jmp     short $+2 ;~ 09CC:0553
loc_187f5:
	// 5548 
cs=0x9cc;eip=0x000555; 	X(POP(di));	// 22454                  pop     di ;~ 09CC:0555
cs=0x9cc;eip=0x000556; 	X(POP(si));	// 22455                  pop     si ;~ 09CC:0556
cs=0x9cc;eip=0x000557; 	X(POP(bp));	// 22456                  pop     bp ;~ 09CC:0557
cs=0x9cc;eip=0x000558; 	J(RETF(0));	// 22457                  retf ;~ 09CC:0558
ret_9cc_559:
	// 5549 
cs=0x9cc;eip=0x000559; 	X(PUSH(bp));	// 22459                  push    bp ;~ 09CC:0559
cs=0x9cc;eip=0x00055a; 	T(bp = sp;);	// 22460                  mov     bp, sp ;~ 09CC:055A
cs=0x9cc;eip=0x00055c; 	X(PUSH(si));	// 22461                  push    si ;~ 09CC:055C
cs=0x9cc;eip=0x00055d; 	X(PUSH(di));	// 22462                  push    di ;~ 09CC:055D
cs=0x9cc;eip=0x00055e; 	X(word_18e8a = 0;);	// 22463                  mov     word_18E8A, 0 ;~ 09CC:055E
cs=0x9cc;eip=0x000564; 	T(ax = 0x8804;);	// 22464                  mov     ax, 8804h ;~ 09CC:0564
cs=0x9cc;eip=0x000567; 	X(PUSH(ax));	// 22465                  push    ax ;~ 09CC:0567
cs=0x9cc;eip=0x000568; 	X(PUSH(*(dw*)(raddr(ss,bp+8))));	// 22466                  push    word ptr [bp+8] ;~ 09CC:0568
cs=0x9cc;eip=0x00056b; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 22467                  push    word ptr [bp+6] ;~ 09CC:056B
cs=0x9cc;eip=0x00056e; 	J(CALLF(___open_0,0));	// 22468                  call    ___open_0 ;~ 09CC:056E
cs=0x9cc;eip=0x000573; 	T(ADD(sp, 6));	// 22469                  add     sp, 6 ;~ 09CC:0573
cs=0x9cc;eip=0x000576; 	T(di = ax;);	// 22470                  mov     di, ax ;~ 09CC:0576
cs=0x9cc;eip=0x000578; 	T(CMP(di, 0x0FFFF));	// 22471                  cmp     di, 0FFFFh ;~ 09CC:0578
cs=0x9cc;eip=0x00057b; 	J(JNZ(loc_18828));	// 22472                  jnz     short loc_18828 ;~ 09CC:057B
cs=0x9cc;eip=0x00057d; 	X(word_18e8a = 3;);	// 22473                  mov     word_18E8A, 3 ;~ 09CC:057D
cs=0x9cc;eip=0x000583; 	T(XOR(ax, ax));	// 22474                  xor     ax, ax ;~ 09CC:0583
cs=0x9cc;eip=0x000585; 	J(JMP(loc_188d0));	// 22475                  jmp     loc_188D0 ;~ 09CC:0585
loc_18828:
	// 5550 
cs=0x9cc;eip=0x000588; 	J(JMP(loc_18883));	// 22479                  jmp     short loc_18883 ;~ 09CC:0588
loc_1882a:
	// 5551 
cs=0x9cc;eip=0x00058a; 	T(ax = 0x1000;);	// 22484                  mov     ax, 1000h ;~ 09CC:058A
cs=0x9cc;eip=0x00058d; 	X(PUSH(ax));	// 22485                  push    ax ;~ 09CC:058D
cs=0x9cc;eip=0x00058e; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 22486                  push    word ptr [bp+0Ch] ;~ 09CC:058E
cs=0x9cc;eip=0x000591; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0A))));	// 22487                  push    word ptr [bp+0Ah] ;~ 09CC:0591
cs=0x9cc;eip=0x000594; 	X(PUSH(di));	// 22488                  push    di ;~ 09CC:0594
cs=0x9cc;eip=0x000595; 	J(CALLF(__j____write,0));	// 22489                  call    __j____write ;~ 09CC:0595
cs=0x9cc;eip=0x00059a; 	T(ADD(sp, 8));	// 22490                  add     sp, 8 ;~ 09CC:059A
cs=0x9cc;eip=0x00059d; 	T(si = ax;);	// 22491                  mov     si, ax ;~ 09CC:059D
cs=0x9cc;eip=0x00059f; 	T(CMP(si, 0x0FFFF));	// 22492                  cmp     si, 0FFFFh ;~ 09CC:059F
cs=0x9cc;eip=0x0005a2; 	J(JNZ(loc_1884f));	// 22493                  jnz     short loc_1884F ;~ 09CC:05A2
cs=0x9cc;eip=0x0005a4; 	X(word_18e8a = 4;);	// 22494                  mov     word_18E8A, 4 ;~ 09CC:05A4
cs=0x9cc;eip=0x0005aa; 	T(XOR(ax, ax));	// 22495                  xor     ax, ax ;~ 09CC:05AA
cs=0x9cc;eip=0x0005ac; 	J(JMP(loc_188d0));	// 22496                  jmp     loc_188D0 ;~ 09CC:05AC
loc_1884f:
	// 5552 
cs=0x9cc;eip=0x0005af; 	T(CMP(si, 0x1000));	// 22500                  cmp     si, 1000h ;~ 09CC:05AF
cs=0x9cc;eip=0x0005b3; 	J(JZ(loc_1885f));	// 22501                  jz      short loc_1885F ;~ 09CC:05B3
cs=0x9cc;eip=0x0005b5; 	X(word_18e8a = 6;);	// 22502                  mov     word_18E8A, 6 ;~ 09CC:05B5
cs=0x9cc;eip=0x0005bb; 	T(XOR(ax, ax));	// 22503                  xor     ax, ax ;~ 09CC:05BB
cs=0x9cc;eip=0x0005bd; 	J(JMP(loc_188d0));	// 22504                  jmp     short loc_188D0 ;~ 09CC:05BD
loc_1885f:
	// 5553 
cs=0x9cc;eip=0x0005bf; 	X(SUB(*(dw*)(raddr(ss,bp+0x0E)), 0x1000));	// 22508                  sub     word ptr [bp+0Eh], 1000h ;~ 09CC:05BF
cs=0x9cc;eip=0x0005c4; 	X(SBB(*(dw*)(raddr(ss,bp+0x10)), 0));	// 22509                  sbb     word ptr [bp+10h], 0 ;~ 09CC:05C4
cs=0x9cc;eip=0x0005c8; 	T(XOR(ax, ax));	// 22510                  xor     ax, ax ;~ 09CC:05C8
cs=0x9cc;eip=0x0005ca; 	T(dx = 0x1000;);	// 22511                  mov     dx, 1000h ;~ 09CC:05CA
cs=0x9cc;eip=0x0005cd; 	X(PUSH(ax));	// 22512                  push    ax ;~ 09CC:05CD
cs=0x9cc;eip=0x0005ce; 	X(PUSH(dx));	// 22513                  push    dx ;~ 09CC:05CE
cs=0x9cc;eip=0x0005cf; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 22514                  push    word ptr [bp+0Ch] ;~ 09CC:05CF
cs=0x9cc;eip=0x0005d2; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0A))));	// 22515                  push    word ptr [bp+0Ah] ;~ 09CC:05D2
cs=0x9cc;eip=0x0005d5; 	J(CALLF(sub_17f4d,0));	// 22516                  call    sub_17F4D ;~ 09CC:05D5
cs=0x9cc;eip=0x0005da; 	T(ADD(sp, 8));	// 22517                  add     sp, 8 ;~ 09CC:05DA
cs=0x9cc;eip=0x0005dd; 	X(MOV(*(dw*)(raddr(ss,bp+0x0C)), dx));	// 22518                  mov     [bp+0Ch], dx ;~ 09CC:05DD
cs=0x9cc;eip=0x0005e0; 	X(MOV(*(dw*)(raddr(ss,bp+0x0A)), ax));	// 22519                  mov     [bp+0Ah], ax ;~ 09CC:05E0
loc_18883:
	// 5554 
cs=0x9cc;eip=0x0005e3; 	T(CMP(*(dw*)(raddr(ss,bp+0x10)), 0));	// 22522                  cmp     word ptr [bp+10h], 0 ;~ 09CC:05E3
cs=0x9cc;eip=0x0005e7; 	J(JA(loc_1882a));	// 22523                  ja      short loc_1882A ;~ 09CC:05E7
cs=0x9cc;eip=0x0005e9; 	J(JC(loc_18892));	// 22524                  jb      short loc_18892 ;~ 09CC:05E9
cs=0x9cc;eip=0x0005eb; 	T(CMP(*(dw*)(raddr(ss,bp+0x0E)), 0x1000));	// 22525                  cmp     word ptr [bp+0Eh], 1000h ;~ 09CC:05EB
cs=0x9cc;eip=0x0005f0; 	J(JNC(loc_1882a));	// 22526                  jnb     short loc_1882A ;~ 09CC:05F0
loc_18892:
	// 5555 
cs=0x9cc;eip=0x0005f2; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0E))));	// 22529                  push    word ptr [bp+0Eh] ;~ 09CC:05F2
cs=0x9cc;eip=0x0005f5; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 22530                  push    word ptr [bp+0Ch] ;~ 09CC:05F5
cs=0x9cc;eip=0x0005f8; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0A))));	// 22531                  push    word ptr [bp+0Ah] ;~ 09CC:05F8
cs=0x9cc;eip=0x0005fb; 	X(PUSH(di));	// 22532                  push    di ;~ 09CC:05FB
cs=0x9cc;eip=0x0005fc; 	J(CALLF(__j____write,0));	// 22533                  call    __j____write ;~ 09CC:05FC
cs=0x9cc;eip=0x000601; 	T(ADD(sp, 8));	// 22534                  add     sp, 8 ;~ 09CC:0601
cs=0x9cc;eip=0x000604; 	T(si = ax;);	// 22535                  mov     si, ax ;~ 09CC:0604
cs=0x9cc;eip=0x000606; 	T(CMP(si, 0x0FFFF));	// 22536                  cmp     si, 0FFFFh ;~ 09CC:0606
cs=0x9cc;eip=0x000609; 	J(JNZ(loc_188b5));	// 22537                  jnz     short loc_188B5 ;~ 09CC:0609
cs=0x9cc;eip=0x00060b; 	X(word_18e8a = 4;);	// 22538                  mov     word_18E8A, 4 ;~ 09CC:060B
cs=0x9cc;eip=0x000611; 	T(XOR(ax, ax));	// 22539                  xor     ax, ax ;~ 09CC:0611
cs=0x9cc;eip=0x000613; 	J(JMP(loc_188d0));	// 22540                  jmp     short loc_188D0 ;~ 09CC:0613
loc_188b5:
	// 5556 
cs=0x9cc;eip=0x000615; 	T(CMP(si, *(dw*)(raddr(ss,bp+0x0E))));	// 22544                  cmp     si, [bp+0Eh] ;~ 09CC:0615
cs=0x9cc;eip=0x000618; 	J(JZ(loc_188c4));	// 22545                  jz      short loc_188C4 ;~ 09CC:0618
cs=0x9cc;eip=0x00061a; 	X(word_18e8a = 6;);	// 22546                  mov     word_18E8A, 6 ;~ 09CC:061A
cs=0x9cc;eip=0x000620; 	T(XOR(ax, ax));	// 22547                  xor     ax, ax ;~ 09CC:0620
cs=0x9cc;eip=0x000622; 	J(JMP(loc_188d0));	// 22548                  jmp     short loc_188D0 ;~ 09CC:0622
loc_188c4:
	// 5557 
cs=0x9cc;eip=0x000624; 	X(PUSH(di));	// 22552                  push    di ;~ 09CC:0624
cs=0x9cc;eip=0x000625; 	J(CALLF(___close_0,0));	// 22553                  call    ___close_0 ;~ 09CC:0625
cs=0x9cc;eip=0x00062a; 	X(POP(cx));	// 22554                  pop     cx ;~ 09CC:062A
cs=0x9cc;eip=0x00062b; 	T(ax = 1;);	// 22555                  mov     ax, 1 ;~ 09CC:062B
cs=0x9cc;eip=0x00062e; 	J({;});	// 22556                  jmp     short $+2 ;~ 09CC:062E
loc_188d0:
	// 5558 
cs=0x9cc;eip=0x000630; 	X(POP(di));	// 22561                  pop     di ;~ 09CC:0630
cs=0x9cc;eip=0x000631; 	X(POP(si));	// 22562                  pop     si ;~ 09CC:0631
cs=0x9cc;eip=0x000632; 	X(POP(bp));	// 22563                  pop     bp ;~ 09CC:0632
cs=0x9cc;eip=0x000633; 	J(RETF(0));	// 22564                  retf ;~ 09CC:0633

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1874d: 	goto loc_1874d;
        case m2c::kloc_1874f: 	goto loc_1874f;
        case m2c::kloc_18774: 	goto loc_18774;
        case m2c::kloc_18784: 	goto loc_18784;
        case m2c::kloc_187a8: 	goto loc_187a8;
        case m2c::kloc_187b7: 	goto loc_187b7;
        case m2c::kloc_187da: 	goto loc_187da;
        case m2c::kloc_187e9: 	goto loc_187e9;
        case m2c::kloc_187f5: 	goto loc_187f5;
        case m2c::kloc_18828: 	goto loc_18828;
        case m2c::kloc_1882a: 	goto loc_1882a;
        case m2c::kloc_1884f: 	goto loc_1884f;
        case m2c::kloc_1885f: 	goto loc_1885f;
        case m2c::kloc_18883: 	goto loc_18883;
        case m2c::kloc_18892: 	goto loc_18892;
        case m2c::kloc_188b5: 	goto loc_188b5;
        case m2c::kloc_188c4: 	goto loc_188c4;
        case m2c::kloc_188d0: 	goto loc_188d0;
        case m2c::kret_9cc_559: 	goto ret_9cc_559;
        case m2c::kseg006_47a_proc: 	goto seg006_47a_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

