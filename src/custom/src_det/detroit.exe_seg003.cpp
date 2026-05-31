/* THIS IS GENERATED FILE */

        
#include "detroit.exe.h"

                

 bool sub_15af8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_15af8:
    _begin:
cs=0x715;eip=0x0003c8; 	T(CMP(bx, 0x10));	// 15510                  cmp     bx, 10h ;~ 0715:03C8
cs=0x715;eip=0x0003cb; 	J(JNC(loc_15b22));	// 15511                  jnb     short loc_15B22 ;~ 0715:03CB
cs=0x715;eip=0x0003cd; 	T(SHL(bx, 1));	// 15512                  shl     bx, 1 ;~ 0715:03CD
cs=0x715;eip=0x0003cf; 	T(SHL(bx, 1));	// 15513                  shl     bx, 1 ;~ 0715:03CF
cs=0x715;eip=0x0003d1; 	T(LES(bx, *(dw*)(raddr(cs,bx+0x132))));	// 15514                  les     bx, cs:[bx+132h] ;~ 0715:03D1
cs=0x715;eip=0x0003d6; 	T(cx = es;);	// 15515                  mov     cx, es ;~ 0715:03D6
cs=0x715;eip=0x0003d8; 	T(OR(cx, bx));	// 15516                  or      cx, bx ;~ 0715:03D8
cs=0x715;eip=0x0003da; 	J(JZ(loc_15b22));	// 15517                  jz      short loc_15B22 ;~ 0715:03DA
loc_15b0c:
	// 5198 
cs=0x715;eip=0x0003dc; 	T(MOV(cx, *(dw*)(raddr(es,bx))));	// 15520                  mov     cx, es:[bx] ;~ 0715:03DC
cs=0x715;eip=0x0003df; 	T(CMP(cx, ax));	// 15521                  cmp     cx, ax ;~ 0715:03DF
cs=0x715;eip=0x0003e1; 	J(JZ(loc_15b29));	// 15522                  jz      short loc_15B29 ;~ 0715:03E1
cs=0x715;eip=0x0003e3; 	T(ADD(bx, 4));	// 15523                  add     bx, 4 ;~ 0715:03E3
cs=0x715;eip=0x0003e6; 	T(CMP(cx, 0x0FFFF));	// 15524                  cmp     cx, 0FFFFh ;~ 0715:03E6
cs=0x715;eip=0x0003e9; 	J(JNZ(loc_15b0c));	// 15525                  jnz     short loc_15B0C ;~ 0715:03E9
cs=0x715;eip=0x0003eb; 	T(ax = 0;);	// 15526                  mov     ax, 0 ;~ 0715:03EB
cs=0x715;eip=0x0003ee; 	T(dx = 0;);	// 15527                  mov     dx, 0 ;~ 0715:03EE
cs=0x715;eip=0x0003f1; 	J(RETF(0));	// 15528                  retf ;~ 0715:03F1
loc_15b22:
	// 5199 
cs=0x715;eip=0x0003f2; 	T(ax = 0;);	// 15533                  mov     ax, 0 ;~ 0715:03F2
cs=0x715;eip=0x0003f5; 	T(dx = 0;);	// 15534                  mov     dx, 0 ;~ 0715:03F5
cs=0x715;eip=0x0003f8; 	J(RETF(0));	// 15535                  retf ;~ 0715:03F8
loc_15b29:
	// 5200 
cs=0x715;eip=0x0003f9; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 15539                  mov     ax, es:[bx+2] ;~ 0715:03F9
cs=0x715;eip=0x0003fd; 	T(dx = es;);	// 15540                  mov     dx, es ;~ 0715:03FD
cs=0x715;eip=0x0003ff; 	J(RETF(0));	// 15541                  retf ;~ 0715:03FF

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15b0c: 	goto loc_15b0c;
        case m2c::kloc_15b22: 	goto loc_15b22;
        case m2c::kloc_15b29: 	goto loc_15b29;
        case m2c::ksub_15af8: 	goto sub_15af8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_15b30(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_15b30:
    _begin:
cs=0x715;eip=0x000400; 	T(bx = sp;);	// 15550                  mov     bx, sp ;~ 0715:0400
cs=0x715;eip=0x000402; 	T(MOV(bx, *(dw*)(raddr(ss,bx+4))));	// 15551                  mov     bx, ss:[bx+4] ;~ 0715:0402
cs=0x715;eip=0x000406; 	X(PUSH(cs));	// 15552                  push    cs ;~ 0715:0406
cs=0x715;eip=0x000407; 	J(CALL(sub_15af8,0));	// 15553                  call    near ptr sub_15AF8 ;~ 0715:0407
cs=0x715;eip=0x00040a; 	T(CMP(ax, 0));	// 15554                  cmp     ax, 0 ;~ 0715:040A
cs=0x715;eip=0x00040d; 	J(JNZ(loc_15b44));	// 15555                  jnz     short loc_15B44 ;~ 0715:040D
cs=0x715;eip=0x00040f; 	T(CMP(dx, 0));	// 15556                  cmp     dx, 0 ;~ 0715:040F
cs=0x715;eip=0x000412; 	J(JZ(locret_15b47));	// 15557                  jz      short locret_15B47 ;~ 0715:0412
loc_15b44:
	// 5201 
cs=0x715;eip=0x000414;
	R(return __dispatch_call((ax<<16)+dx, _state););	// 2990                  jmp     word ptr cs:__jpt_10F7D[bx] ; switch jump ;~ 01A2:0F7D
//cs=0x715;eip=0x000414; 	X(PUSH(dx));	// 15560                  push    dx ;~ 0715:0414
//cs=0x715;eip=0x000415; 	X(PUSH(ax));	// 15561                  push    ax ;~ 0715:0415
//cs=0x715;eip=0x000416; 	J(RETF(0));	// 15562                  retf ;~ 0715:0416
locret_15b47:
	// 5202 
cs=0x715;eip=0x000417; 	J(RETF(0));	// 15566                  retf ;~ 0715:0417

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15b44: 	goto loc_15b44;
        case m2c::klocret_15b47: 	goto locret_15b47;
        case m2c::ksub_15b30: 	goto sub_15b30;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg003_418_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg003_418_proc:
    _begin:
cs=0x715;eip=0x000418; 	X(INC(word_15740));	// 15570                  inc     cs:word_15740 ;~ 0715:0418
cs=0x715;eip=0x00041d; 	T(CLD);	// 15571                  cld ;~ 0715:041D
cs=0x715;eip=0x00041e; 	X(PUSH(ax));	// 15572                  push    ax ;~ 0715:041E
cs=0x715;eip=0x00041f; 	X(PUSH(bx));	// 15573                  push    bx ;~ 0715:041F
cs=0x715;eip=0x000420; 	X(PUSH(cx));	// 15574                  push    cx ;~ 0715:0420
cs=0x715;eip=0x000421; 	X(PUSH(dx));	// 15575                  push    dx ;~ 0715:0421
cs=0x715;eip=0x000422; 	X(PUSH(si));	// 15576                  push    si ;~ 0715:0422
cs=0x715;eip=0x000423; 	X(PUSH(di));	// 15577                  push    di ;~ 0715:0423
cs=0x715;eip=0x000424; 	X(PUSH(bp));	// 15578                  push    bp ;~ 0715:0424
cs=0x715;eip=0x000425; 	X(PUSH(es));	// 15579                  push    es ;~ 0715:0425
cs=0x715;eip=0x000426; 	X(PUSH(ds));	// 15580                  push    ds ;~ 0715:0426
cs=0x715;eip=0x000427; 	T(CMP(word_15740, 1));	// 15581                  cmp     cs:word_15740, 1 ;~ 0715:0427
cs=0x715;eip=0x00042d; 	J(JZ(loc_15b62));	// 15582                  jz      short loc_15B62 ;~ 0715:042D
cs=0x715;eip=0x00042f; 	J(JMP(loc_15bf0));	// 15583                  jmp     loc_15BF0 ;~ 0715:042F
loc_15b62:
	// 5203 
cs=0x715;eip=0x000432; 	X(*(dw*)(&byte_15af2) = ss;);	// 15587                  mov     word ptr cs:byte_15AF2, ss ;~ 0715:0432
cs=0x715;eip=0x000437; 	X(*(dw*)(&byte_15af4) = sp;);	// 15588                  mov     word ptr cs:byte_15AF4, sp ;~ 0715:0437
cs=0x715;eip=0x00043c; 	T(ax = cs;);	// 15589                  mov     ax, cs ;~ 0715:043C
cs=0x715;eip=0x00043e; 	S(ss = ax;);	// 15590                  mov     ss, ax ;~ 0715:043E
cs=0x715;eip=0x000440; 	T(sp = 0x3C2;);	// 15592                  mov     sp, 3C2h ;~ 0715:0440
cs=0x715;eip=0x000443; 	X(*(dw*)(&byte_1585a) = 0;);	// 15593                  mov     word ptr cs:byte_1585A, 0 ;~ 0715:0443
loc_15b7a:
	// 5204 
cs=0x715;eip=0x00044a; 	T(si = *(dw*)(&byte_1585a););	// 15596                  mov     si, word ptr cs:byte_1585A ;~ 0715:044A
cs=0x715;eip=0x00044f; 	T(SHL(si, 1));	// 15597                  shl     si, 1 ;~ 0715:044F
cs=0x715;eip=0x000451; 	T(CMP(*(dw*)(raddr(cs,si+0x78)), 2));	// 15598                  cmp     word ptr cs:[si+78h], 2 ;~ 0715:0451
cs=0x715;eip=0x000457; 	J(JNZ(loc_15bd9));	// 15599                  jnz     short loc_15BD9 ;~ 0715:0457
cs=0x715;eip=0x000459; 	T(MOV(ds, *(dw*)(raddr(cs,si+0x56))));	// 15600                  mov     ds, word ptr cs:[si+56h] ;~ 0715:0459
cs=0x715;eip=0x00045e; 	T(SHL(si, 1));	// 15601                  shl     si, 1 ;~ 0715:045E
cs=0x715;eip=0x000460; 	T(MOV(ax, *(dw*)(raddr(cs,si+0x9A))));	// 15602                  mov     ax, cs:[si+9Ah] ;~ 0715:0460
cs=0x715;eip=0x000465; 	T(MOV(dx, *(dw*)(raddr(cs,si+0x9C))));	// 15603                  mov     dx, cs:[si+9Ch] ;~ 0715:0465
cs=0x715;eip=0x00046a; 	T(ADD(ax, *(dw*)(&byte_15852)));	// 15604                  add     ax, word ptr cs:byte_15852 ;~ 0715:046A
cs=0x715;eip=0x00046f; 	T(ADC(dx, *(dw*)(&byte_15854)));	// 15605                  adc     dx, word ptr cs:byte_15854 ;~ 0715:046F
cs=0x715;eip=0x000474; 	T(CMP(dx, *(dw*)(raddr(cs,si+0x0E0))));	// 15606                  cmp     dx, cs:[si+0E0h] ;~ 0715:0474
cs=0x715;eip=0x000479; 	J(JC(loc_15bb4));	// 15607                  jb      short loc_15BB4 ;~ 0715:0479
cs=0x715;eip=0x00047b; 	J(JA(loc_15bc0));	// 15608                  ja      short loc_15BC0 ;~ 0715:047B
cs=0x715;eip=0x00047d; 	T(CMP(ax, *(dw*)(raddr(cs,si+0x0DE))));	// 15609                  cmp     ax, cs:[si+0DEh] ;~ 0715:047D
cs=0x715;eip=0x000482; 	J(JNC(loc_15bc0));	// 15610                  jnb     short loc_15BC0 ;~ 0715:0482
loc_15bb4:
	// 5205 
cs=0x715;eip=0x000484; 	X(MOV(*(dw*)(raddr(cs,si+0x9A)), ax));	// 15613                  mov     cs:[si+9Ah], ax ;~ 0715:0484
cs=0x715;eip=0x000489; 	X(MOV(*(dw*)(raddr(cs,si+0x9C)), dx));	// 15614                  mov     cs:[si+9Ch], dx ;~ 0715:0489
cs=0x715;eip=0x00048e; 	J(JMP(loc_15bd9));	// 15615                  jmp     short loc_15BD9 ;~ 0715:048E
loc_15bc0:
	// 5206 
cs=0x715;eip=0x000490; 	T(SUB(ax, *(dw*)(raddr(cs,si+0x0DE))));	// 15620                  sub     ax, cs:[si+0DEh] ;~ 0715:0490
cs=0x715;eip=0x000495; 	T(SBB(dx, *(dw*)(raddr(cs,si+0x0E0))));	// 15621                  sbb     dx, cs:[si+0E0h] ;~ 0715:0495
cs=0x715;eip=0x00049a; 	X(MOV(*(dw*)(raddr(cs,si+0x9A)), ax));	// 15622                  mov     cs:[si+9Ah], ax ;~ 0715:049A
cs=0x715;eip=0x00049f; 	X(MOV(*(dw*)(raddr(cs,si+0x9C)), dx));	// 15623                  mov     cs:[si+9Ch], dx ;~ 0715:049F
cs=0x715;eip=0x0004a4; 	J(CALLF(__dispatch_call,*(dd*)(raddr(cs,si+0x12))));	// 15624                  call    dword ptr cs:[si+12h] ;~ 0715:04A4
loc_15bd9:
	// 5207 
cs=0x715;eip=0x0004a9; 	X(INC(*(dw*)(&byte_1585a)));	// 15628                  inc     word ptr cs:byte_1585A ;~ 0715:04A9
cs=0x715;eip=0x0004ae; 	T(CMP(*(dw*)(&byte_1585a), 0x10));	// 15629                  cmp     word ptr cs:byte_1585A, 10h ;~ 0715:04AE
cs=0x715;eip=0x0004b4; 	J(JBE(loc_15b7a));	// 15630                  jbe     short loc_15B7A ;~ 0715:04B4
cs=0x715;eip=0x0004b6; 	S(ss = *(dw*)(&byte_15af2););	// 15631                  mov     ss, word ptr cs:byte_15AF2 ;~ 0715:04B6
cs=0x715;eip=0x0004bb; 	T(sp = *(dw*)(&byte_15af4););	// 15633                  mov     sp, word ptr cs:byte_15AF4 ;~ 0715:04BB
loc_15bf0:
	// 5208 
cs=0x715;eip=0x0004c0; 	X(POP(ds));	// 15636                  pop     ds ;~ 0715:04C0
cs=0x715;eip=0x0004c1; 	X(POP(es));	// 15637                  pop     es ;~ 0715:04C1
cs=0x715;eip=0x0004c2; 	X(POP(bp));	// 15639                  pop     bp ;~ 0715:04C2
cs=0x715;eip=0x0004c3; 	X(POP(di));	// 15640                  pop     di ;~ 0715:04C3
cs=0x715;eip=0x0004c4; 	X(POP(si));	// 15641                  pop     si ;~ 0715:04C4
cs=0x715;eip=0x0004c5; 	X(POP(dx));	// 15642                  pop     dx ;~ 0715:04C5
cs=0x715;eip=0x0004c6; 	X(POP(cx));	// 15643                  pop     cx ;~ 0715:04C6
cs=0x715;eip=0x0004c7; 	X(POP(bx));	// 15644                  pop     bx ;~ 0715:04C7
cs=0x715;eip=0x0004c8; 	T(al = 0x20;);	// 15645                  mov     al, 20h ; ' ' ;~ 0715:04C8
cs=0x715;eip=0x0004ca; 	S(OUT(0x20, al));	// 15646                  out     20h, al         ; Interrupt controller, 8259A. ;~ 0715:04CA
cs=0x715;eip=0x0004cc; 	X(POP(ax));	// 15647                  pop     ax ;~ 0715:04CC
cs=0x715;eip=0x0004cd; 	T(CMP(*(dw*)(&__atest), 0x6554));	// 15648                  cmp     word ptr cs:__aTest, 6554h ;~ 0715:04CD
cs=0x715;eip=0x0004d4; 	J(JNZ(loc_15c15));	// 15649                  jnz     short loc_15C15 ;~ 0715:04D4
cs=0x715;eip=0x0004d6; 	T(CMP(*(dw*)(&byte_158f0), 0x7473));	// 15650                  cmp     word ptr cs:byte_158F0, 7473h ;~ 0715:04D6
cs=0x715;eip=0x0004dd; 	J(JNZ(loc_15c15));	// 15651                  jnz     short loc_15C15 ;~ 0715:04DD
cs=0x715;eip=0x0004df; 	X(DEC(word_15740));	// 15652                  dec     cs:word_15740 ;~ 0715:04DF
cs=0x715;eip=0x0004e4; 	J(IRET);	// 15653                  iret ;~ 0715:04E4
loc_15c15:
	// 5209 
cs=0x715;eip=0x0004e5; 	T(STI);	// 15658                  sti ;~ 0715:04E5
cs=0x715;eip=0x0004e6; 	S(_INT(3));	// 15659                  int     3               ; Trap to Debugger ;~ 0715:04E6
cs=0x715;eip=0x0004e7; 	J(JMP(loc_15c15));	// 15660                  jmp     short loc_15C15 ;~ 0715:04E7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15b62: 	goto loc_15b62;
        case m2c::kloc_15b7a: 	goto loc_15b7a;
        case m2c::kloc_15bb4: 	goto loc_15bb4;
        case m2c::kloc_15bc0: 	goto loc_15bc0;
        case m2c::kloc_15bd9: 	goto loc_15bd9;
        case m2c::kloc_15bf0: 	goto loc_15bf0;
        case m2c::kloc_15c15: 	goto loc_15c15;
        case m2c::kseg003_418_proc: 	goto seg003_418_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group11(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group11:
    _begin:
sub_15c19:
	// 15665 
cs=0x715;eip=0x0004e9; 	X(PUSH(ds));	// 15666                  push    ds ;~ 0715:04E9
cs=0x715;eip=0x0004ea; 	X(PUSH(si));	// 15667                  push    si ;~ 0715:04EA
cs=0x715;eip=0x0004eb; 	X(PUSH(di));	// 15668                  push    di ;~ 0715:04EB
cs=0x715;eip=0x0004ec; 	X(PUSHF);	// 15669                  pushf ;~ 0715:04EC
cs=0x715;eip=0x0004ed; 	T(CLI);	// 15670                  cli ;~ 0715:04ED
cs=0x715;eip=0x0004ee; 	T(CLD);	// 15671                  cld ;~ 0715:04EE
cs=0x715;eip=0x0004ef; 	X(*(dw*)(&byte_15852) = 0x0FFFF;);	// 15672                  mov     word ptr cs:byte_15852, 0FFFFh ;~ 0715:04EF
cs=0x715;eip=0x0004f6; 	X(*(dw*)(&byte_15854) = 0x0FFFF;);	// 15673                  mov     word ptr cs:byte_15854, 0FFFFh ;~ 0715:04F6
cs=0x715;eip=0x0004fd; 	X(PUSH(cs));	// 15674                  push    cs ;~ 0715:04FD
cs=0x715;eip=0x0004fe; 	X(POP(es));	// 15675                  pop     es ;~ 0715:04FE
cs=0x715;eip=0x0004ff; 	T(di = 0x78;);	// 15677                  mov     di, 78h ; 'x' ;~ 0715:04FF
cs=0x715;eip=0x000502; 	T(cx = 0x11;);	// 15678                  mov     cx, 11h ;~ 0715:0502
cs=0x715;eip=0x000505; 	T(ax = 0;);	// 15679                  mov     ax, 0 ;~ 0715:0505
	// 15680                  rep stosw ;~ 0715:0508
cs=0x715;eip=0x000508; 	X(	REP STOSW);	// 15680                  rep stosw ;~ 0715:0508
cs=0x715;eip=0x00050a; 	T(di = 0x9A;);	// 15681                  mov     di, 9Ah ; '
cs=0x715;eip=0x00050d; 	T(cx = 0x22;);	// 15682                  mov     cx, 22h ; '"' ;~ 0715:050D
	// 15683                  rep stosw ;~ 0715:0510
cs=0x715;eip=0x000510; 	X(	REP STOSW);	// 15683                  rep stosw ;~ 0715:0510
cs=0x715;eip=0x000512; 	T(di = 0x0DE;);	// 15684                  mov     di, 0DEh ; '
cs=0x715;eip=0x000515; 	T(cx = 0x22;);	// 15685                  mov     cx, 22h ; '"' ;~ 0715:0515
	// 15686                  rep stosw ;~ 0715:0518
cs=0x715;eip=0x000518; 	X(	REP STOSW);	// 15686                  rep stosw ;~ 0715:0518
loc_15c4a:
	// 5210 
	R(POPF);seg003_51d_proc:
	// 15692 
cs=0x715;eip=0x000521; 	X(POP(di));	// 15694                  pop     di ;~ 0715:0521
cs=0x715;eip=0x000522; 	X(POP(si));	// 15695                  pop     si ;~ 0715:0522
cs=0x715;eip=0x000523; 	X(POP(ds));	// 15696                  pop     ds ;~ 0715:0523
cs=0x715;eip=0x000524; 	J(RETF(0));	// 15697                  retf ;~ 0715:0524
ret_715_525:
	// 5211 
cs=0x715;eip=0x000525; 	X(PUSHF);	// 15699                  pushf ;~ 0715:0525
cs=0x715;eip=0x000526; 	J(CALLF(__dispatch_call,*(dd*)(&byte_15856)));	// 15700                  call    dword ptr cs:byte_15856 ;~ 0715:0526
cs=0x715;eip=0x00052b; 	J(RETF(0));	// 15701                  retf ;~ 0715:052B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15c4a: 	goto loc_15c4a;
        case m2c::kret_715_525: 	goto ret_715_525;
        case m2c::kseg003_51d_proc: 	goto seg003_51d_proc;
        case m2c::ksub_15c19: 	goto sub_15c19;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group12(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group12:
    _begin:
sub_15c5c:
	// 15706 
cs=0x715;eip=0x00052c; 	X(PUSH(ds));	// 15708                  push    ds ;~ 0715:052C
cs=0x715;eip=0x00052d; 	X(PUSH(si));	// 15709                  push    si ;~ 0715:052D
cs=0x715;eip=0x00052e; 	X(PUSH(di));	// 15710                  push    di ;~ 0715:052E
cs=0x715;eip=0x00052f; 	X(PUSHF);	// 15711                  pushf ;~ 0715:052F
cs=0x715;eip=0x000530; 	T(CLI);	// 15712                  cli ;~ 0715:0530
cs=0x715;eip=0x000531; 	T(ax = 0;);	// 15713                  mov     ax, 0 ;~ 0715:0531
cs=0x715;eip=0x000534; 	T(es = ax;);	// 15714                  mov     es, ax ;~ 0715:0534
cs=0x715;eip=0x000536; 	T(MOV(bx, *(dw*)(raddr(es,0x20))));	// 15716                  mov     bx, es:20h ;~ 0715:0536
cs=0x715;eip=0x00053b; 	T(MOV(es, *(dw*)(raddr(es,0x22))));	// 15717                  mov     es, word ptr es:22h ;~ 0715:053B
cs=0x715;eip=0x000540; 	X(*(dw*)(&byte_15856) = bx;);	// 15719                  mov     word ptr cs:byte_15856, bx ;~ 0715:0540
cs=0x715;eip=0x000545; 	X(*(dw*)(&byte_15858) = es;);	// 15720                  mov     word ptr cs:byte_15858, es ;~ 0715:0545
cs=0x715;eip=0x00054a; 	T(bx = 0x525;);	// 15721                  mov     bx, 525h ;~ 0715:054A
cs=0x715;eip=0x00054d; 	X(*(dw*)(&byte_15782) = bx;);	// 15722                  mov     word ptr cs:byte_15782, bx ;~ 0715:054D
cs=0x715;eip=0x000552; 	X(*(dw*)(&byte_15784) = cs;);	// 15723                  mov     word ptr cs:byte_15784, cs ;~ 0715:0552
cs=0x715;eip=0x000557; 	T(ax = cs;);	// 15724                  mov     ax, cs ;~ 0715:0557
cs=0x715;eip=0x000559; 	T(ds = ax;);	// 15725                  mov     ds, ax ;~ 0715:0559
cs=0x715;eip=0x00055b; 	T(dx = 0x418;);	// 15727                  mov     dx, 418h ;~ 0715:055B
cs=0x715;eip=0x00055e; 	T(ax = 0;);	// 15728                  mov     ax, 0 ;~ 0715:055E
cs=0x715;eip=0x000561; 	T(es = ax;);	// 15729                  mov     es, ax ;~ 0715:0561
cs=0x715;eip=0x000563; 	X(MOV(*(dw*)(raddr(es,0x20)), dx));	// 15731                  mov     es:20h, dx ;~ 0715:0563
cs=0x715;eip=0x000568; 	X(MOV(*(dw*)(raddr(es,0x22)), ds));	// 15732                  mov     word ptr es:22h, ds ;~ 0715:0568
loc_15c9d:
	// 5212 
	R(POPF);seg003_570_proc:
	// 15738 
cs=0x715;eip=0x000574; 	X(POP(di));	// 15740                  pop     di ;~ 0715:0574
cs=0x715;eip=0x000575; 	X(POP(si));	// 15741                  pop     si ;~ 0715:0575
cs=0x715;eip=0x000576; 	X(POP(ds));	// 15742                  pop     ds ;~ 0715:0576
cs=0x715;eip=0x000577; 	J(RETF(0));	// 15744                  retf ;~ 0715:0577

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15c9d: 	goto loc_15c9d;
        case m2c::kseg003_570_proc: 	goto seg003_570_proc;
        case m2c::ksub_15c5c: 	goto sub_15c5c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group13(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group13:
    _begin:
sub_15ca8:
	// 15749 
cs=0x715;eip=0x000578; 	X(PUSH(ds));	// 15751                  push    ds ;~ 0715:0578
cs=0x715;eip=0x000579; 	X(PUSH(si));	// 15752                  push    si ;~ 0715:0579
cs=0x715;eip=0x00057a; 	X(PUSH(di));	// 15753                  push    di ;~ 0715:057A
cs=0x715;eip=0x00057b; 	X(PUSHF);	// 15754                  pushf ;~ 0715:057B
cs=0x715;eip=0x00057c; 	T(CLI);	// 15755                  cli ;~ 0715:057C
cs=0x715;eip=0x00057d; 	X(*(dw*)(&byte_1585a) = 0x0FFFF;);	// 15756                  mov     word ptr cs:byte_1585A, 0FFFFh ;~ 0715:057D
cs=0x715;eip=0x000584; 	T(dx = *(dw*)(&byte_15856););	// 15757                  mov     dx, word ptr cs:byte_15856 ;~ 0715:0584
cs=0x715;eip=0x000589; 	T(ds = *(dw*)(&byte_15858););	// 15758                  mov     ds, word ptr cs:byte_15858 ;~ 0715:0589
cs=0x715;eip=0x00058e; 	T(ax = 0;);	// 15759                  mov     ax, 0 ;~ 0715:058E
cs=0x715;eip=0x000591; 	T(es = ax;);	// 15760                  mov     es, ax ;~ 0715:0591
cs=0x715;eip=0x000593; 	X(MOV(*(dw*)(raddr(es,0x20)), dx));	// 15761                  mov     es:20h, dx ;~ 0715:0593
cs=0x715;eip=0x000598; 	X(MOV(*(dw*)(raddr(es,0x22)), ds));	// 15762                  mov     word ptr es:22h, ds ;~ 0715:0598
loc_15ccd:
	// 5213 
	R(POPF);seg003_5a0_proc:
	// 15768 
cs=0x715;eip=0x0005a4; 	X(POP(di));	// 15770                  pop     di ;~ 0715:05A4
cs=0x715;eip=0x0005a5; 	X(POP(si));	// 15771                  pop     si ;~ 0715:05A5
cs=0x715;eip=0x0005a6; 	X(POP(ds));	// 15772                  pop     ds ;~ 0715:05A6
cs=0x715;eip=0x0005a7; 	J(RETF(0));	// 15773                  retf ;~ 0715:05A7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15ccd: 	goto loc_15ccd;
        case m2c::kseg003_5a0_proc: 	goto seg003_5a0_proc;
        case m2c::ksub_15ca8: 	goto sub_15ca8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group14(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group14:
    _begin:
sub_15cd8:
	// 15779 
#undef arg_2
#define arg_2 6
	// 15782 arg_2           = word ptr  6 ;~ 0715:05A8
cs=0x715;eip=0x0005a8; 	X(PUSH(bp));	// 15784                  push    bp ;~ 0715:05A8
cs=0x715;eip=0x0005a9; 	T(bp = sp;);	// 15785                  mov     bp, sp ;~ 0715:05A9
cs=0x715;eip=0x0005ab; 	X(PUSH(ds));	// 15786                  push    ds ;~ 0715:05AB
cs=0x715;eip=0x0005ac; 	X(PUSH(si));	// 15787                  push    si ;~ 0715:05AC
cs=0x715;eip=0x0005ad; 	X(PUSH(di));	// 15788                  push    di ;~ 0715:05AD
cs=0x715;eip=0x0005ae; 	X(PUSHF);	// 15789                  pushf ;~ 0715:05AE
cs=0x715;eip=0x0005af; 	T(CLI);	// 15790                  cli ;~ 0715:05AF
cs=0x715;eip=0x0005b0; 	T(al = 0x36;);	// 15791                  mov     al, 36h ; '6' ;~ 0715:05B0
cs=0x715;eip=0x0005b2; 	S(OUT(0x43, al));	// 15792                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0715:05B2
cs=0x715;eip=0x0005b4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 15793                  mov     ax, [bp+arg_2] ;~ 0715:05B4
cs=0x715;eip=0x0005b7; 	X(*(dw*)(&byte_15860) = ax;);	// 15794                  mov     word ptr cs:byte_15860, ax ;~ 0715:05B7
cs=0x715;eip=0x0005bb; 	J({;});	// 15795                  jmp     short $+2 ;~ 0715:05BB
loc_15ced:
	// 5214 
cs=0x715;eip=0x0005bd; 	S(OUT(0x40, al));	// 15799                  out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0715:05BD
cs=0x715;eip=0x0005bf; 	T(al = ah;);	// 15800                  mov     al, ah ;~ 0715:05BF
cs=0x715;eip=0x0005c1; 	J({;});	// 15801                  jmp     short $+2 ;~ 0715:05C1
loc_15cf3:
	// 5215 
cs=0x715;eip=0x0005c3; 	S(OUT(0x40, al));	// 15805                  out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0715:05C3
loc_15cf5:
	// 5216 
	R(POPF);seg003_5c8_proc:
	// 15811 
cs=0x715;eip=0x0005cc; 	X(POP(di));	// 15813                  pop     di ;~ 0715:05CC
cs=0x715;eip=0x0005cd; 	X(POP(si));	// 15814                  pop     si ;~ 0715:05CD
cs=0x715;eip=0x0005ce; 	X(POP(ds));	// 15815                  pop     ds ;~ 0715:05CE
cs=0x715;eip=0x0005cf; 	X(POP(bp));	// 15816                  pop     bp ;~ 0715:05CF
cs=0x715;eip=0x0005d0; 	J(RETF(0));	// 15817                  retf ;~ 0715:05D0

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15ced: 	goto loc_15ced;
        case m2c::kloc_15cf3: 	goto loc_15cf3;
        case m2c::kloc_15cf5: 	goto loc_15cf5;
        case m2c::kseg003_5c8_proc: 	goto seg003_5c8_proc;
        case m2c::ksub_15cd8: 	goto sub_15cd8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_15d01(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_15d01:
    _begin:
#undef arg_0
#define arg_0 6
	// 15825 arg_0           = word ptr  6 ;~ 0715:05D1
cs=0x715;eip=0x0005d1; 	X(PUSH(bp));	// 15827                  push    bp ;~ 0715:05D1
cs=0x715;eip=0x0005d2; 	T(bp = sp;);	// 15828                  mov     bp, sp ;~ 0715:05D2
cs=0x715;eip=0x0005d4; 	X(PUSH(ds));	// 15829                  push    ds ;~ 0715:05D4
cs=0x715;eip=0x0005d5; 	X(PUSH(si));	// 15830                  push    si ;~ 0715:05D5
cs=0x715;eip=0x0005d6; 	X(PUSH(di));	// 15831                  push    di ;~ 0715:05D6
cs=0x715;eip=0x0005d7; 	T(ax = 0;);	// 15832                  mov     ax, 0 ;~ 0715:05D7
cs=0x715;eip=0x0005da; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0D68D));	// 15833                  cmp     [bp+arg_0], 0D68Dh ;~ 0715:05DA
cs=0x715;eip=0x0005df; 	J(JNC(loc_15d1e));	// 15834                  jnb     short loc_15D1E ;~ 0715:05DF
cs=0x715;eip=0x0005e1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 15835                  mov     ax, [bp+arg_0] ;~ 0715:05E1
cs=0x715;eip=0x0005e4; 	T(bx = 0x20BC;);	// 15836                  mov     bx, 20BCh ;~ 0715:05E4
cs=0x715;eip=0x0005e7; 	T(cx = 0x2710;);	// 15837                  mov     cx, 2710h ;~ 0715:05E7
cs=0x715;eip=0x0005ea; 	T(MUL1_2(cx));	// 15838                  mul     cx ;~ 0715:05EA
cs=0x715;eip=0x0005ec; 	T(DIV2(bx));	// 15839                  div     bx ;~ 0715:05EC
loc_15d1e:
	// 5217 
cs=0x715;eip=0x0005ee; 	X(PUSH(ax));	// 15842                  push    ax ;~ 0715:05EE
cs=0x715;eip=0x0005ef; 	X(PUSH(cs));	// 15843                  push    cs ;~ 0715:05EF
cs=0x715;eip=0x0005f0; 	J(CALL(sub_15cd8,0));	// 15844                  call    sub_15CD8 ;~ 0715:05F0
cs=0x715;eip=0x0005f3; 	T(ADD(sp, 2));	// 15845                  add     sp, 2 ;~ 0715:05F3
cs=0x715;eip=0x0005f6; 	X(POP(di));	// 15846                  pop     di ;~ 0715:05F6
cs=0x715;eip=0x0005f7; 	X(POP(si));	// 15847                  pop     si ;~ 0715:05F7
cs=0x715;eip=0x0005f8; 	X(POP(ds));	// 15848                  pop     ds ;~ 0715:05F8
cs=0x715;eip=0x0005f9; 	X(POP(bp));	// 15849                  pop     bp ;~ 0715:05F9
cs=0x715;eip=0x0005fa; 	J(RETF(0));	// 15850                  retf ;~ 0715:05FA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15d1e: 	goto loc_15d1e;
        case m2c::ksub_15d01: 	goto sub_15d01;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_15d2b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_15d2b:
    _begin:
#undef arg_0
#define arg_0 6
	// 15861 arg_0           = word ptr  6 ;~ 0715:05FB
#undef arg_2
#define arg_2 8
	// 15862 arg_2           = word ptr  8 ;~ 0715:05FB
#undef arg_4
#define arg_4 0x0A
	// 15863 arg_4           = word ptr  0Ah ;~ 0715:05FB
#undef arg_6
#define arg_6 0x0C
	// 15864 arg_6           = word ptr  0Ch ;~ 0715:05FB
cs=0x715;eip=0x0005fb; 	X(PUSH(bp));	// 15866                  push    bp ;~ 0715:05FB
cs=0x715;eip=0x0005fc; 	T(bp = sp;);	// 15867                  mov     bp, sp ;~ 0715:05FC
cs=0x715;eip=0x0005fe; 	X(PUSH(ds));	// 15868                  push    ds ;~ 0715:05FE
cs=0x715;eip=0x0005ff; 	X(PUSH(si));	// 15869                  push    si ;~ 0715:05FF
cs=0x715;eip=0x000600; 	X(PUSH(di));	// 15870                  push    di ;~ 0715:0600
cs=0x715;eip=0x000601; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 15871                  mov     ax, [bp+arg_0] ;~ 0715:0601
cs=0x715;eip=0x000604; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 15872                  mov     dx, [bp+arg_2] ;~ 0715:0604
cs=0x715;eip=0x000607; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 15873                  mov     bx, [bp+arg_4] ;~ 0715:0607
cs=0x715;eip=0x00060a; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_6))));	// 15874                  mov     cx, [bp+arg_6] ;~ 0715:060A
cs=0x715;eip=0x00060d; 	T(OR(cx, cx));	// 15875                  or      cx, cx ;~ 0715:060D
cs=0x715;eip=0x00060f; 	J(JNZ(loc_15d49));	// 15876                  jnz     short loc_15D49 ;~ 0715:060F
cs=0x715;eip=0x000611; 	T(OR(dx, dx));	// 15877                  or      dx, dx ;~ 0715:0611
cs=0x715;eip=0x000613; 	J(JZ(loc_15d6d));	// 15878                  jz      short loc_15D6D ;~ 0715:0613
cs=0x715;eip=0x000615; 	T(OR(bx, bx));	// 15879                  or      bx, bx ;~ 0715:0615
cs=0x715;eip=0x000617; 	J(JZ(loc_15d6d));	// 15880                  jz      short loc_15D6D ;~ 0715:0617
loc_15d49:
	// 5218 
cs=0x715;eip=0x000619; 	T(bp = cx;);	// 15883                  mov     bp, cx ;~ 0715:0619
cs=0x715;eip=0x00061b; 	T(cx = 0x20;);	// 15884                  mov     cx, 20h ; ' ' ;~ 0715:061B
cs=0x715;eip=0x00061e; 	T(XOR(di, di));	// 15885                  xor     di, di ;~ 0715:061E
cs=0x715;eip=0x000620; 	T(XOR(si, si));	// 15886                  xor     si, si ;~ 0715:0620
loc_15d52:
	// 5219 
cs=0x715;eip=0x000622; 	T(SHL(ax, 1));	// 15889                  shl     ax, 1 ;~ 0715:0622
cs=0x715;eip=0x000624; 	T(RCL(dx, 1));	// 15890                  rcl     dx, 1 ;~ 0715:0624
cs=0x715;eip=0x000626; 	T(RCL(si, 1));	// 15891                  rcl     si, 1 ;~ 0715:0626
cs=0x715;eip=0x000628; 	T(RCL(di, 1));	// 15892                  rcl     di, 1 ;~ 0715:0628
cs=0x715;eip=0x00062a; 	T(CMP(di, bp));	// 15893                  cmp     di, bp ;~ 0715:062A
cs=0x715;eip=0x00062c; 	J(JC(loc_15d69));	// 15894                  jb      short loc_15D69 ;~ 0715:062C
cs=0x715;eip=0x00062e; 	J(JA(loc_15d64));	// 15895                  ja      short loc_15D64 ;~ 0715:062E
cs=0x715;eip=0x000630; 	T(CMP(si, bx));	// 15896                  cmp     si, bx ;~ 0715:0630
cs=0x715;eip=0x000632; 	J(JC(loc_15d69));	// 15897                  jb      short loc_15D69 ;~ 0715:0632
loc_15d64:
	// 5220 
cs=0x715;eip=0x000634; 	T(SUB(si, bx));	// 15900                  sub     si, bx ;~ 0715:0634
cs=0x715;eip=0x000636; 	T(SBB(di, bp));	// 15901                  sbb     di, bp ;~ 0715:0636
cs=0x715;eip=0x000638; 	T(INC(ax));	// 15902                  inc     ax ;~ 0715:0638
loc_15d69:
	// 5221 
cs=0x715;eip=0x000639; 	J(LOOP(loc_15d52));	// 15906                  loop    loc_15D52 ;~ 0715:0639
cs=0x715;eip=0x00063b; 	J(JMP(loc_15d71));	// 15907                  jmp     short loc_15D71 ;~ 0715:063B
loc_15d6d:
	// 5222 
cs=0x715;eip=0x00063d; 	T(DIV2(bx));	// 15912                  div     bx ;~ 0715:063D
cs=0x715;eip=0x00063f; 	T(XOR(dx, dx));	// 15913                  xor     dx, dx ;~ 0715:063F
loc_15d71:
	// 5223 
cs=0x715;eip=0x000641; 	X(POP(di));	// 15916                  pop     di ;~ 0715:0641
cs=0x715;eip=0x000642; 	X(POP(si));	// 15917                  pop     si ;~ 0715:0642
cs=0x715;eip=0x000643; 	X(POP(ds));	// 15918                  pop     ds ;~ 0715:0643
cs=0x715;eip=0x000644; 	X(POP(bp));	// 15919                  pop     bp ;~ 0715:0644
cs=0x715;eip=0x000645; 	J(RETF(0));	// 15920                  retf ;~ 0715:0645

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15d49: 	goto loc_15d49;
        case m2c::kloc_15d52: 	goto loc_15d52;
        case m2c::kloc_15d64: 	goto loc_15d64;
        case m2c::kloc_15d69: 	goto loc_15d69;
        case m2c::kloc_15d6d: 	goto loc_15d6d;
        case m2c::kloc_15d71: 	goto loc_15d71;
        case m2c::ksub_15d2b: 	goto sub_15d2b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group15(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group15:
    _begin:
sub_15d76:
	// 15927 
cs=0x715;eip=0x000646; 	X(PUSH(ds));	// 15928                  push    ds ;~ 0715:0646
cs=0x715;eip=0x000647; 	X(PUSH(si));	// 15929                  push    si ;~ 0715:0647
cs=0x715;eip=0x000648; 	X(PUSH(di));	// 15930                  push    di ;~ 0715:0648
cs=0x715;eip=0x000649; 	X(PUSHF);	// 15931                  pushf ;~ 0715:0649
cs=0x715;eip=0x00064a; 	T(CLI);	// 15932                  cli ;~ 0715:064A
cs=0x715;eip=0x00064b; 	T(CLD);	// 15933                  cld ;~ 0715:064B
cs=0x715;eip=0x00064c; 	X(*(dw*)(&byte_1585c) = 0x0FFFF;);	// 15934                  mov     word ptr cs:byte_1585C, 0FFFFh ;~ 0715:064C
cs=0x715;eip=0x000653; 	X(*(dw*)(&byte_1585e) = 0x0FFFF;);	// 15935                  mov     word ptr cs:byte_1585E, 0FFFFh ;~ 0715:0653
cs=0x715;eip=0x00065a; 	T(si = 0;);	// 15936                  mov     si, 0 ;~ 0715:065A
loc_15d8d:
	// 5224 
cs=0x715;eip=0x00065d; 	T(bx = si;);	// 15939                  mov     bx, si ;~ 0715:065D
cs=0x715;eip=0x00065f; 	T(SHL(bx, 1));	// 15940                  shl     bx, 1 ;~ 0715:065F
cs=0x715;eip=0x000661; 	T(CMP(*(dw*)(raddr(cs,bx+0x78)), 0));	// 15941                  cmp     word ptr cs:[bx+78h], 0 ;~ 0715:0661
cs=0x715;eip=0x000667; 	J(JZ(loc_15dbe));	// 15942                  jz      short loc_15DBE ;~ 0715:0667
cs=0x715;eip=0x000669; 	T(SHL(bx, 1));	// 15943                  shl     bx, 1 ;~ 0715:0669
cs=0x715;eip=0x00066b; 	T(MOV(ax, *(dw*)(raddr(cs,bx+0x0DE))));	// 15944                  mov     ax, cs:[bx+0DEh] ;~ 0715:066B
cs=0x715;eip=0x000670; 	T(MOV(dx, *(dw*)(raddr(cs,bx+0x0E0))));	// 15945                  mov     dx, cs:[bx+0E0h] ;~ 0715:0670
cs=0x715;eip=0x000675; 	T(CMP(dx, *(dw*)(&byte_1585e)));	// 15946                  cmp     dx, word ptr cs:byte_1585E ;~ 0715:0675
cs=0x715;eip=0x00067a; 	J(JC(loc_15db5));	// 15947                  jb      short loc_15DB5 ;~ 0715:067A
cs=0x715;eip=0x00067c; 	J(JA(loc_15dbe));	// 15948                  ja      short loc_15DBE ;~ 0715:067C
cs=0x715;eip=0x00067e; 	T(CMP(ax, *(dw*)(&byte_1585c)));	// 15949                  cmp     ax, word ptr cs:byte_1585C ;~ 0715:067E
cs=0x715;eip=0x000683; 	J(JNC(loc_15dbe));	// 15950                  jnb     short loc_15DBE ;~ 0715:0683
loc_15db5:
	// 5225 
cs=0x715;eip=0x000685; 	X(*(dw*)(&byte_1585c) = ax;);	// 15953                  mov     word ptr cs:byte_1585C, ax ;~ 0715:0685
cs=0x715;eip=0x000689; 	X(*(dw*)(&byte_1585e) = dx;);	// 15954                  mov     word ptr cs:byte_1585E, dx ;~ 0715:0689
loc_15dbe:
	// 5226 
cs=0x715;eip=0x00068e; 	T(INC(si));	// 15958                  inc     si ;~ 0715:068E
cs=0x715;eip=0x00068f; 	T(CMP(si, 0x10));	// 15959                  cmp     si, 10h ;~ 0715:068F
cs=0x715;eip=0x000692; 	J(JBE(loc_15d8d));	// 15960                  jbe     short loc_15D8D ;~ 0715:0692
cs=0x715;eip=0x000694; 	T(ax = *(dw*)(&byte_1585c););	// 15961                  mov     ax, word ptr cs:byte_1585C ;~ 0715:0694
cs=0x715;eip=0x000698; 	T(dx = *(dw*)(&byte_1585e););	// 15962                  mov     dx, word ptr cs:byte_1585E ;~ 0715:0698
cs=0x715;eip=0x00069d; 	T(CMP(ax, *(dw*)(&byte_15852)));	// 15963                  cmp     ax, word ptr cs:byte_15852 ;~ 0715:069D
cs=0x715;eip=0x0006a2; 	J(JNZ(loc_15ddb));	// 15964                  jnz     short loc_15DDB ;~ 0715:06A2
cs=0x715;eip=0x0006a4; 	T(CMP(dx, *(dw*)(&byte_15854)));	// 15965                  cmp     dx, word ptr cs:byte_15854 ;~ 0715:06A4
cs=0x715;eip=0x0006a9; 	J(JZ(loc_15e00));	// 15966                  jz      short loc_15E00 ;~ 0715:06A9
loc_15ddb:
	// 5227 
cs=0x715;eip=0x0006ab; 	X(*(dw*)(&byte_1585a) = 0x0FFFF;);	// 15969                  mov     word ptr cs:byte_1585A, 0FFFFh ;~ 0715:06AB
cs=0x715;eip=0x0006b2; 	X(*(dw*)(&byte_15852) = ax;);	// 15970                  mov     word ptr cs:byte_15852, ax ;~ 0715:06B2
cs=0x715;eip=0x0006b6; 	X(*(dw*)(&byte_15854) = dx;);	// 15971                  mov     word ptr cs:byte_15854, dx ;~ 0715:06B6
cs=0x715;eip=0x0006bb; 	X(PUSH(ax));	// 15972                  push    ax ;~ 0715:06BB
cs=0x715;eip=0x0006bc; 	X(PUSH(cs));	// 15973                  push    cs ;~ 0715:06BC
cs=0x715;eip=0x0006bd; 	J(CALL(sub_15d01,0));	// 15974                  call    near ptr sub_15D01 ;~ 0715:06BD
cs=0x715;eip=0x0006c0; 	T(ADD(sp, 2));	// 15975                  add     sp, 2 ;~ 0715:06C0
cs=0x715;eip=0x0006c3; 	X(PUSH(cs));	// 15976                  push    cs ;~ 0715:06C3
cs=0x715;eip=0x0006c4; 	X(POP(es));	// 15977                  pop     es ;~ 0715:06C4
cs=0x715;eip=0x0006c5; 	T(di = 0x9A;);	// 15979                  mov     di, 9Ah ; '
cs=0x715;eip=0x0006c8; 	T(cx = 0x22;);	// 15980                  mov     cx, 22h ; '"' ;~ 0715:06C8
cs=0x715;eip=0x0006cb; 	T(ax = 0;);	// 15981                  mov     ax, 0 ;~ 0715:06CB
	// 15982                  rep stosw ;~ 0715:06CE
cs=0x715;eip=0x0006ce; 	X(	REP STOSW);	// 15982                  rep stosw ;~ 0715:06CE
loc_15e00:
	// 5228 
	R(POPF);seg003_6d3_proc:
	// 15989 
cs=0x715;eip=0x0006d7; 	X(POP(di));	// 15991                  pop     di ;~ 0715:06D7
cs=0x715;eip=0x0006d8; 	X(POP(si));	// 15992                  pop     si ;~ 0715:06D8
cs=0x715;eip=0x0006d9; 	X(POP(ds));	// 15993                  pop     ds ;~ 0715:06D9
cs=0x715;eip=0x0006da; 	J(RETF(0));	// 15994                  retf ;~ 0715:06DA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15d8d: 	goto loc_15d8d;
        case m2c::kloc_15db5: 	goto loc_15db5;
        case m2c::kloc_15dbe: 	goto loc_15dbe;
        case m2c::kloc_15ddb: 	goto loc_15ddb;
        case m2c::kloc_15e00: 	goto loc_15e00;
        case m2c::kseg003_6d3_proc: 	goto seg003_6d3_proc;
        case m2c::ksub_15d76: 	goto sub_15d76;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group16(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group16:
    _begin:
sub_15e0b:
	// 16000 
cs=0x715;eip=0x0006db; 	X(PUSH(ds));	// 16001                  push    ds ;~ 0715:06DB
cs=0x715;eip=0x0006dc; 	X(PUSH(si));	// 16002                  push    si ;~ 0715:06DC
cs=0x715;eip=0x0006dd; 	X(PUSH(di));	// 16003                  push    di ;~ 0715:06DD
cs=0x715;eip=0x0006de; 	X(PUSHF);	// 16004                  pushf ;~ 0715:06DE
cs=0x715;eip=0x0006df; 	T(CLI);	// 16005                  cli ;~ 0715:06DF
cs=0x715;eip=0x0006e0; 	X(word_1573e = 0;);	// 16006                  mov     cs:word_1573E, 0 ;~ 0715:06E0
cs=0x715;eip=0x0006e7; 	X(word_15740 = 0;);	// 16007                  mov     cs:word_15740, 0 ;~ 0715:06E7
cs=0x715;eip=0x0006ee; 	X(word_1655e = 0;);	// 16008                  mov     cs:word_1655E, 0 ;~ 0715:06EE
cs=0x715;eip=0x0006f5; 	T(CLD);	// 16009                  cld ;~ 0715:06F5
cs=0x715;eip=0x0006f6; 	T(ax = cs;);	// 16010                  mov     ax, cs ;~ 0715:06F6
cs=0x715;eip=0x0006f8; 	T(es = ax;);	// 16011                  mov     es, ax ;~ 0715:06F8
cs=0x715;eip=0x0006fa; 	T(di = 0x132;);	// 16013                  mov     di, 132h ;~ 0715:06FA
cs=0x715;eip=0x0006fd; 	T(cx = 0x20;);	// 16014                  mov     cx, 20h ; ' ' ;~ 0715:06FD
cs=0x715;eip=0x000700; 	T(ax = 0;);	// 16015                  mov     ax, 0 ;~ 0715:0700
	// 16016                  rep stosw ;~ 0715:0703
cs=0x715;eip=0x000703; 	X(	REP STOSW);	// 16016                  rep stosw ;~ 0715:0703
cs=0x715;eip=0x000705; 	T(di = 0x172;);	// 16017                  mov     di, 172h ;~ 0715:0705
cs=0x715;eip=0x000708; 	T(cx = 0x10;);	// 16018                  mov     cx, 10h ;~ 0715:0708
cs=0x715;eip=0x00070b; 	T(ax = 0x0FFFF;);	// 16019                  mov     ax, 0FFFFh ;~ 0715:070B
	// 16020                  rep stosw ;~ 0715:070E
cs=0x715;eip=0x00070e; 	X(	REP STOSW);	// 16020                  rep stosw ;~ 0715:070E
cs=0x715;eip=0x000710; 	T(di = 0x192;);	// 16021                  mov     di, 192h ;~ 0715:0710
cs=0x715;eip=0x000713; 	T(cx = 0x10;);	// 16022                  mov     cx, 10h ;~ 0715:0713
cs=0x715;eip=0x000716; 	T(ax = 0;);	// 16023                  mov     ax, 0 ;~ 0715:0716
	// 16024                  rep stosw ;~ 0715:0719
cs=0x715;eip=0x000719; 	X(	REP STOSW);	// 16024                  rep stosw ;~ 0715:0719
loc_15e4b:
	// 5229 
	R(POPF);seg003_71e_proc:
	// 16030 
cs=0x715;eip=0x000722; 	X(POP(di));	// 16032                  pop     di ;~ 0715:0722
cs=0x715;eip=0x000723; 	X(POP(si));	// 16033                  pop     si ;~ 0715:0723
cs=0x715;eip=0x000724; 	X(POP(ds));	// 16034                  pop     ds ;~ 0715:0724
cs=0x715;eip=0x000725; 	J(RETF(0));	// 16035                  retf ;~ 0715:0725

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15e4b: 	goto loc_15e4b;
        case m2c::kseg003_71e_proc: 	goto seg003_71e_proc;
        case m2c::ksub_15e0b: 	goto sub_15e0b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group17(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group17:
    _begin:
sub_15e56:
	// 16041 
#undef arg_2
#define arg_2 6
	// 16044 arg_2           = word ptr  6 ;~ 0715:0726
#undef arg_4
#define arg_4 8
	// 16045 arg_4           = word ptr  8 ;~ 0715:0726
cs=0x715;eip=0x000726; 	X(PUSH(bp));	// 16047                  push    bp ;~ 0715:0726
cs=0x715;eip=0x000727; 	T(bp = sp;);	// 16048                  mov     bp, sp ;~ 0715:0727
cs=0x715;eip=0x000729; 	X(PUSH(ds));	// 16049                  push    ds ;~ 0715:0729
cs=0x715;eip=0x00072a; 	X(PUSH(si));	// 16050                  push    si ;~ 0715:072A
cs=0x715;eip=0x00072b; 	X(PUSH(di));	// 16051                  push    di ;~ 0715:072B
cs=0x715;eip=0x00072c; 	X(PUSHF);	// 16052                  pushf ;~ 0715:072C
cs=0x715;eip=0x00072d; 	T(CLI);	// 16053                  cli ;~ 0715:072D
cs=0x715;eip=0x00072e; 	X(word_158e6 = 0;);	// 16054                  mov     cs:word_158E6, 0 ;~ 0715:072E
loc_15e65:
	// 5230 
cs=0x715;eip=0x000735; 	T(si = word_158e6;);	// 16057                  mov     si, cs:word_158E6 ;~ 0715:0735
cs=0x715;eip=0x00073a; 	T(SHL(si, 1));	// 16058                  shl     si, 1 ;~ 0715:073A
cs=0x715;eip=0x00073c; 	T(MOV(dx, *(dw*)(raddr(cs,si+0x172))));	// 16059                  mov     dx, cs:[si+172h] ;~ 0715:073C
cs=0x715;eip=0x000741; 	T(SHL(si, 1));	// 16060                  shl     si, 1 ;~ 0715:0741
cs=0x715;eip=0x000743; 	T(MOV(ax, *(dw*)(raddr(cs,si+0x132))));	// 16061                  mov     ax, cs:[si+132h] ;~ 0715:0743
cs=0x715;eip=0x000748; 	T(OR(ax, *(dw*)(raddr(cs,si+0x134))));	// 16062                  or      ax, cs:[si+134h] ;~ 0715:0748
cs=0x715;eip=0x00074d; 	J(JZ(loc_15e9e));	// 16063                  jz      short loc_15E9E ;~ 0715:074D
cs=0x715;eip=0x00074f; 	T(CMP(dx, 0x0FFFF));	// 16064                  cmp     dx, 0FFFFh ;~ 0715:074F
cs=0x715;eip=0x000752; 	J(JZ(loc_15e8c));	// 16065                  jz      short loc_15E8C ;~ 0715:0752
cs=0x715;eip=0x000754; 	X(PUSH(dx));	// 16066                  push    dx ;~ 0715:0754
cs=0x715;eip=0x000755; 	X(PUSH(cs));	// 16067                  push    cs ;~ 0715:0755
cs=0x715;eip=0x000756; 	J(CALL(sub_15f86,0));	// 16068                  call    sub_15F86 ;~ 0715:0756
cs=0x715;eip=0x000759; 	T(ADD(sp, 2));	// 16069                  add     sp, 2 ;~ 0715:0759
loc_15e8c:
	// 5231 
cs=0x715;eip=0x00075c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 16072                  push    [bp+arg_4] ;~ 0715:075C
cs=0x715;eip=0x00075f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 16073                  push    [bp+arg_2] ;~ 0715:075F
cs=0x715;eip=0x000762; 	X(PUSH(word_158e6));	// 16074                  push    cs:word_158E6 ;~ 0715:0762
cs=0x715;eip=0x000767; 	X(PUSH(cs));	// 16075                  push    cs ;~ 0715:0767
cs=0x715;eip=0x000768; 	J(CALL(sub_16367,0));	// 16076                  call    near ptr sub_16367 ;~ 0715:0768
cs=0x715;eip=0x00076b; 	T(ADD(sp, 6));	// 16077                  add     sp, 6 ;~ 0715:076B
loc_15e9e:
	// 5232 
cs=0x715;eip=0x00076e; 	X(INC(word_158e6));	// 16080                  inc     cs:word_158E6 ;~ 0715:076E
cs=0x715;eip=0x000773; 	T(CMP(word_158e6, 0x10));	// 16081                  cmp     cs:word_158E6, 10h ;~ 0715:0773
cs=0x715;eip=0x000779; 	J(JNZ(loc_15e65));	// 16082                  jnz     short loc_15E65 ;~ 0715:0779
cs=0x715;eip=0x00077b; 	X(PUSH(cs));	// 16083                  push    cs ;~ 0715:077B
cs=0x715;eip=0x00077c; 	J(CALL(sub_15fcf,0));	// 16084                  call    sub_15FCF ;~ 0715:077C
loc_15eaf:
	// 5233 
	R(POPF);seg003_782_proc:
	// 16090 
cs=0x715;eip=0x000786; 	X(POP(di));	// 16092                  pop     di ;~ 0715:0786
cs=0x715;eip=0x000787; 	X(POP(si));	// 16093                  pop     si ;~ 0715:0787
cs=0x715;eip=0x000788; 	X(POP(ds));	// 16094                  pop     ds ;~ 0715:0788
cs=0x715;eip=0x000789; 	X(POP(bp));	// 16095                  pop     bp ;~ 0715:0789
cs=0x715;eip=0x00078a; 	J(RETF(0));	// 16096                  retf ;~ 0715:078A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15e65: 	goto loc_15e65;
        case m2c::kloc_15e8c: 	goto loc_15e8c;
        case m2c::kloc_15e9e: 	goto loc_15e9e;
        case m2c::kloc_15eaf: 	goto loc_15eaf;
        case m2c::kseg003_782_proc: 	goto seg003_782_proc;
        case m2c::ksub_15e56: 	goto sub_15e56;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group18(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group18:
    _begin:
sub_15ebb:
	// 16102 
#undef arg_2
#define arg_2 6
	// 16105 arg_2           = dword ptr  6 ;~ 0715:078B
cs=0x715;eip=0x00078b; 	X(PUSH(bp));	// 16107                  push    bp ;~ 0715:078B
cs=0x715;eip=0x00078c; 	T(bp = sp;);	// 16108                  mov     bp, sp ;~ 0715:078C
cs=0x715;eip=0x00078e; 	X(PUSH(ds));	// 16109                  push    ds ;~ 0715:078E
cs=0x715;eip=0x00078f; 	X(PUSH(si));	// 16110                  push    si ;~ 0715:078F
cs=0x715;eip=0x000790; 	X(PUSH(di));	// 16111                  push    di ;~ 0715:0790
cs=0x715;eip=0x000791; 	X(PUSHF);	// 16112                  pushf ;~ 0715:0791
cs=0x715;eip=0x000792; 	T(CLI);	// 16113                  cli ;~ 0715:0792
cs=0x715;eip=0x000793; 	T(cx = ds;);	// 16114                  mov     cx, ds ;~ 0715:0793
cs=0x715;eip=0x000795; 	T(bx = 0;);	// 16115                  mov     bx, 0 ;~ 0715:0795
loc_15ec8:
	// 5234 
cs=0x715;eip=0x000798; 	T(CMP(*(dw*)(raddr(cs,bx+0x78)), 0));	// 16118                  cmp     word ptr cs:[bx+78h], 0 ;~ 0715:0798
cs=0x715;eip=0x00079e; 	J(JZ(loc_15ede));	// 16119                  jz      short loc_15EDE ;~ 0715:079E
cs=0x715;eip=0x0007a0; 	T(ADD(bx, 2));	// 16120                  add     bx, 2 ;~ 0715:07A0
cs=0x715;eip=0x0007a3; 	T(CMP(bx, 0x20));	// 16121                  cmp     bx, 20h ; ' ' ;~ 0715:07A3
cs=0x715;eip=0x0007a6; 	J(JC(loc_15ec8));	// 16122                  jb      short loc_15EC8 ;~ 0715:07A6
cs=0x715;eip=0x0007a8; 	T(ax = 0x0FFFF;);	// 16123                  mov     ax, 0FFFFh ;~ 0715:07A8
cs=0x715;eip=0x0007ab; 	J(JMP(loc_15f7a));	// 16124                  jmp     loc_15F7A ;~ 0715:07AB
loc_15ede:
	// 5235 
cs=0x715;eip=0x0007ae; 	T(ax = bx;);	// 16128                  mov     ax, bx ;~ 0715:07AE
cs=0x715;eip=0x0007b0; 	T(SHR(ax, 1));	// 16129                  shr     ax, 1 ;~ 0715:07B0
cs=0x715;eip=0x0007b2; 	X(MOV(*(dw*)(raddr(cs,bx+0x78)), 1));	// 16130                  mov     word ptr cs:[bx+78h], 1 ;~ 0715:07B2
cs=0x715;eip=0x0007b9; 	X(MOV(*(dw*)(raddr(cs,bx+0x56)), cx));	// 16131                  mov     cs:[bx+56h], cx ;~ 0715:07B9
cs=0x715;eip=0x0007be; 	T(SHL(bx, 1));	// 16132                  shl     bx, 1 ;~ 0715:07BE
cs=0x715;eip=0x0007c0; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_2))));	// 16133                  lds     si, [bp+arg_2] ;~ 0715:07C0
cs=0x715;eip=0x0007c3; 	X(MOV(*(dw*)(raddr(cs,bx+0x12)), si));	// 16134                  mov     cs:[bx+12h], si ;~ 0715:07C3
cs=0x715;eip=0x0007c8; 	X(MOV(*(dw*)(raddr(cs,bx+0x14)), ds));	// 16135                  mov     word ptr cs:[bx+14h], ds ;~ 0715:07C8
cs=0x715;eip=0x0007cd; 	X(MOV(*(dw*)(raddr(cs,bx+0x0DE)), 0x0FFFF));	// 16136                  mov     word ptr cs:[bx+0DEh], 0FFFFh ;~ 0715:07CD
cs=0x715;eip=0x0007d4; 	X(MOV(*(dw*)(raddr(cs,bx+0x0E0)), 0x0FFFF));	// 16137                  mov     word ptr cs:[bx+0E0h], 0FFFFh ;~ 0715:07D4
cs=0x715;eip=0x0007db; 	X(INC(word_1573e));	// 16138                  inc     cs:word_1573E ;~ 0715:07DB
cs=0x715;eip=0x0007e0; 	T(CMP(word_1573e, 1));	// 16139                  cmp     cs:word_1573E, 1 ;~ 0715:07E0
cs=0x715;eip=0x0007e6; 	J(JNZ(loc_15f7a));	// 16140                  jnz     short loc_15F7A ;~ 0715:07E6
cs=0x715;eip=0x0007e8; 	X(PUSH(ax));	// 16141                  push    ax ;~ 0715:07E8
cs=0x715;eip=0x0007e9; 	X(PUSH(cs));	// 16142                  push    cs ;~ 0715:07E9
cs=0x715;eip=0x0007ea; 	J(CALL(sub_15c19,0));	// 16143                  call    sub_15C19 ;~ 0715:07EA
cs=0x715;eip=0x0007ed; 	X(*(dw*)(&byte_157c8) = 1;);	// 16144                  mov     word ptr cs:byte_157C8, 1 ;~ 0715:07ED
cs=0x715;eip=0x0007f4; 	X(PUSH(cs));	// 16145                  push    cs ;~ 0715:07F4
cs=0x715;eip=0x0007f5; 	J(CALL(sub_15c5c,0));	// 16146                  call    sub_15C5C ;~ 0715:07F5
cs=0x715;eip=0x0007f8; 	X(PUSH(ax));	// 16147                  push    ax ;~ 0715:07F8
cs=0x715;eip=0x0007f9; 	X(PUSH(bp));	// 16148                  push    bp ;~ 0715:07F9
cs=0x715;eip=0x0007fa; 	T(bp = sp;);	// 16149                  mov     bp, sp ;~ 0715:07FA
cs=0x715;eip=0x0007fc; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0));	// 16150                  mov     word ptr [bp+2], 0 ;~ 0715:07FC
cs=0x715;eip=0x000801; 	X(POP(bp));	// 16151                  pop     bp ;~ 0715:0801
cs=0x715;eip=0x000802; 	X(PUSH(ax));	// 16152                  push    ax ;~ 0715:0802
cs=0x715;eip=0x000803; 	X(PUSH(bp));	// 16153                  push    bp ;~ 0715:0803
cs=0x715;eip=0x000804; 	T(bp = sp;);	// 16154                  mov     bp, sp ;~ 0715:0804
cs=0x715;eip=0x000806; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x0D68D));	// 16155                  mov     word ptr [bp+2], 0D68Dh ;~ 0715:0806
cs=0x715;eip=0x00080b; 	X(POP(bp));	// 16156                  pop     bp ;~ 0715:080B
cs=0x715;eip=0x00080c; 	X(PUSH(ax));	// 16157                  push    ax ;~ 0715:080C
cs=0x715;eip=0x00080d; 	X(PUSH(bp));	// 16158                  push    bp ;~ 0715:080D
cs=0x715;eip=0x00080e; 	T(bp = sp;);	// 16159                  mov     bp, sp ;~ 0715:080E
cs=0x715;eip=0x000810; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x10));	// 16160                  mov     word ptr [bp+2], 10h ;~ 0715:0810
cs=0x715;eip=0x000815; 	X(POP(bp));	// 16161                  pop     bp ;~ 0715:0815
cs=0x715;eip=0x000816; 	X(PUSH(cs));	// 16162                  push    cs ;~ 0715:0816
cs=0x715;eip=0x000817; 	J(CALL(sub_16079,0));	// 16163                  call    sub_16079 ;~ 0715:0817
cs=0x715;eip=0x00081a; 	T(ADD(sp, 6));	// 16164                  add     sp, 6 ;~ 0715:081A
cs=0x715;eip=0x00081d; 	X(PUSH(ax));	// 16165                  push    ax ;~ 0715:081D
cs=0x715;eip=0x00081e; 	X(PUSH(bp));	// 16166                  push    bp ;~ 0715:081E
cs=0x715;eip=0x00081f; 	T(bp = sp;);	// 16167                  mov     bp, sp ;~ 0715:081F
cs=0x715;eip=0x000821; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x10));	// 16168                  mov     word ptr [bp+2], 10h ;~ 0715:0821
cs=0x715;eip=0x000826; 	X(POP(bp));	// 16169                  pop     bp ;~ 0715:0826
cs=0x715;eip=0x000827; 	X(PUSH(cs));	// 16170                  push    cs ;~ 0715:0827
cs=0x715;eip=0x000828; 	J(CALL(sub_15fed,0));	// 16171                  call    sub_15FED ;~ 0715:0828
cs=0x715;eip=0x00082b; 	T(ADD(sp, 2));	// 16172                  add     sp, 2 ;~ 0715:082B
cs=0x715;eip=0x00082e; 	X(POP(ax));	// 16173                  pop     ax ;~ 0715:082E
cs=0x715;eip=0x00082f; 	T(bx = ax;);	// 16174                  mov     bx, ax ;~ 0715:082F
cs=0x715;eip=0x000831; 	T(SHL(bx, 1));	// 16175                  shl     bx, 1 ;~ 0715:0831
cs=0x715;eip=0x000833; 	X(MOV(*(dw*)(raddr(cs,bx+0x78)), 1));	// 16176                  mov     word ptr cs:[bx+78h], 1 ;~ 0715:0833
cs=0x715;eip=0x00083a; 	T(SHL(bx, 1));	// 16177                  shl     bx, 1 ;~ 0715:083A
cs=0x715;eip=0x00083c; 	X(MOV(*(dw*)(raddr(cs,bx+0x0DE)), 0x0FFFF));	// 16178                  mov     word ptr cs:[bx+0DEh], 0FFFFh ;~ 0715:083C
cs=0x715;eip=0x000843; 	X(MOV(*(dw*)(raddr(cs,bx+0x0E0)), 0x0FFFF));	// 16179                  mov     word ptr cs:[bx+0E0h], 0FFFFh ;~ 0715:0843
loc_15f7a:
	// 5236 
	R(POPF);seg003_84d_proc:
	// 16186 
cs=0x715;eip=0x000851; 	X(POP(di));	// 16188                  pop     di ;~ 0715:0851
cs=0x715;eip=0x000852; 	X(POP(si));	// 16189                  pop     si ;~ 0715:0852
cs=0x715;eip=0x000853; 	X(POP(ds));	// 16190                  pop     ds ;~ 0715:0853
cs=0x715;eip=0x000854; 	X(POP(bp));	// 16191                  pop     bp ;~ 0715:0854
cs=0x715;eip=0x000855; 	J(RETF(0));	// 16192                  retf ;~ 0715:0855

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15ec8: 	goto loc_15ec8;
        case m2c::kloc_15ede: 	goto loc_15ede;
        case m2c::kloc_15f7a: 	goto loc_15f7a;
        case m2c::kseg003_84d_proc: 	goto seg003_84d_proc;
        case m2c::ksub_15ebb: 	goto sub_15ebb;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group19(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group19:
    _begin:
sub_15f86:
	// 16198 
#undef arg_2
#define arg_2 6
	// 16201 arg_2           = word ptr  6 ;~ 0715:0856
cs=0x715;eip=0x000856; 	X(PUSH(bp));	// 16203                  push    bp ;~ 0715:0856
cs=0x715;eip=0x000857; 	T(bp = sp;);	// 16204                  mov     bp, sp ;~ 0715:0857
cs=0x715;eip=0x000859; 	X(PUSH(ds));	// 16205                  push    ds ;~ 0715:0859
cs=0x715;eip=0x00085a; 	X(PUSH(si));	// 16206                  push    si ;~ 0715:085A
cs=0x715;eip=0x00085b; 	X(PUSH(di));	// 16207                  push    di ;~ 0715:085B
cs=0x715;eip=0x00085c; 	X(PUSHF);	// 16208                  pushf ;~ 0715:085C
cs=0x715;eip=0x00085d; 	T(CLI);	// 16209                  cli ;~ 0715:085D
cs=0x715;eip=0x00085e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 16210                  mov     bx, [bp+arg_2] ;~ 0715:085E
cs=0x715;eip=0x000861; 	T(CMP(bx, 0x0FFFF));	// 16211                  cmp     bx, 0FFFFh ;~ 0715:0861
cs=0x715;eip=0x000864; 	J(JZ(loc_15fc3));	// 16212                  jz      short loc_15FC3 ;~ 0715:0864
cs=0x715;eip=0x000866; 	T(SHL(bx, 1));	// 16213                  shl     bx, 1 ;~ 0715:0866
cs=0x715;eip=0x000868; 	T(CMP(*(dw*)(raddr(cs,bx+0x78)), 0));	// 16214                  cmp     word ptr cs:[bx+78h], 0 ;~ 0715:0868
cs=0x715;eip=0x00086e; 	J(JZ(loc_15fc3));	// 16215                  jz      short loc_15FC3 ;~ 0715:086E
cs=0x715;eip=0x000870; 	X(MOV(*(dw*)(raddr(cs,bx+0x78)), 0));	// 16216                  mov     word ptr cs:[bx+78h], 0 ;~ 0715:0870
cs=0x715;eip=0x000877; 	X(DEC(word_1573e));	// 16217                  dec     cs:word_1573E ;~ 0715:0877
cs=0x715;eip=0x00087c; 	J(JNZ(loc_15fc3));	// 16218                  jnz     short loc_15FC3 ;~ 0715:087C
cs=0x715;eip=0x00087e; 	X(PUSH(ax));	// 16219                  push    ax ;~ 0715:087E
cs=0x715;eip=0x00087f; 	X(PUSH(bp));	// 16220                  push    bp ;~ 0715:087F
cs=0x715;eip=0x000880; 	T(bp = sp;);	// 16221                  mov     bp, sp ;~ 0715:0880
cs=0x715;eip=0x000882; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0));	// 16222                  mov     word ptr [bp+2], 0 ;~ 0715:0882
cs=0x715;eip=0x000887; 	X(POP(bp));	// 16223                  pop     bp ;~ 0715:0887
cs=0x715;eip=0x000888; 	X(PUSH(cs));	// 16224                  push    cs ;~ 0715:0888
cs=0x715;eip=0x000889; 	J(CALL(sub_15cd8,0));	// 16225                  call    sub_15CD8 ;~ 0715:0889
cs=0x715;eip=0x00088c; 	T(ADD(sp, 2));	// 16226                  add     sp, 2 ;~ 0715:088C
cs=0x715;eip=0x00088f; 	X(PUSH(cs));	// 16227                  push    cs ;~ 0715:088F
cs=0x715;eip=0x000890; 	J(CALL(sub_15ca8,0));	// 16228                  call    sub_15CA8 ;~ 0715:0890
loc_15fc3:
	// 5237 
	R(POPF);seg003_896_proc:
	// 16235 
cs=0x715;eip=0x00089a; 	X(POP(di));	// 16237                  pop     di ;~ 0715:089A
cs=0x715;eip=0x00089b; 	X(POP(si));	// 16238                  pop     si ;~ 0715:089B
cs=0x715;eip=0x00089c; 	X(POP(ds));	// 16239                  pop     ds ;~ 0715:089C
cs=0x715;eip=0x00089d; 	X(POP(bp));	// 16240                  pop     bp ;~ 0715:089D
cs=0x715;eip=0x00089e; 	J(RETF(0));	// 16241                  retf ;~ 0715:089E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15fc3: 	goto loc_15fc3;
        case m2c::kseg003_896_proc: 	goto seg003_896_proc;
        case m2c::ksub_15f86: 	goto sub_15f86;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group20(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group20:
    _begin:
sub_15fcf:
	// 16246 
cs=0x715;eip=0x00089f; 	X(PUSH(ds));	// 16247                  push    ds ;~ 0715:089F
cs=0x715;eip=0x0008a0; 	X(PUSH(si));	// 16248                  push    si ;~ 0715:08A0
cs=0x715;eip=0x0008a1; 	X(PUSH(di));	// 16249                  push    di ;~ 0715:08A1
cs=0x715;eip=0x0008a2; 	X(PUSHF);	// 16250                  pushf ;~ 0715:08A2
cs=0x715;eip=0x0008a3; 	T(CLI);	// 16251                  cli ;~ 0715:08A3
cs=0x715;eip=0x0008a4; 	T(si = 0x0F;);	// 16252                  mov     si, 0Fh ;~ 0715:08A4
loc_15fd7:
	// 5238 
cs=0x715;eip=0x0008a7; 	X(PUSH(si));	// 16255                  push    si ;~ 0715:08A7
cs=0x715;eip=0x0008a8; 	X(PUSH(cs));	// 16256                  push    cs ;~ 0715:08A8
cs=0x715;eip=0x0008a9; 	J(CALL(sub_15f86,0));	// 16257                  call    sub_15F86 ;~ 0715:08A9
cs=0x715;eip=0x0008ac; 	T(ADD(sp, 2));	// 16258                  add     sp, 2 ;~ 0715:08AC
cs=0x715;eip=0x0008af; 	T(DEC(si));	// 16259                  dec     si ;~ 0715:08AF
cs=0x715;eip=0x0008b0; 	J(JGE(loc_15fd7));	// 16260                  jge     short loc_15FD7 ;~ 0715:08B0
loc_15fe2:
	// 5239 
	R(POPF);seg003_8b5_proc:
	// 16266 
cs=0x715;eip=0x0008b9; 	X(POP(di));	// 16268                  pop     di ;~ 0715:08B9
cs=0x715;eip=0x0008ba; 	X(POP(si));	// 16269                  pop     si ;~ 0715:08BA
cs=0x715;eip=0x0008bb; 	X(POP(ds));	// 16270                  pop     ds ;~ 0715:08BB
cs=0x715;eip=0x0008bc; 	J(RETF(0));	// 16271                  retf ;~ 0715:08BC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15fd7: 	goto loc_15fd7;
        case m2c::kloc_15fe2: 	goto loc_15fe2;
        case m2c::kseg003_8b5_proc: 	goto seg003_8b5_proc;
        case m2c::ksub_15fcf: 	goto sub_15fcf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group21(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group21:
    _begin:
sub_15fed:
	// 16277 
#undef arg_2
#define arg_2 6
	// 16280 arg_2           = word ptr  6 ;~ 0715:08BD
cs=0x715;eip=0x0008bd; 	X(PUSH(bp));	// 16282                  push    bp ;~ 0715:08BD
cs=0x715;eip=0x0008be; 	T(bp = sp;);	// 16283                  mov     bp, sp ;~ 0715:08BE
cs=0x715;eip=0x0008c0; 	X(PUSH(ds));	// 16284                  push    ds ;~ 0715:08C0
cs=0x715;eip=0x0008c1; 	X(PUSH(si));	// 16285                  push    si ;~ 0715:08C1
cs=0x715;eip=0x0008c2; 	X(PUSH(di));	// 16286                  push    di ;~ 0715:08C2
cs=0x715;eip=0x0008c3; 	X(PUSHF);	// 16287                  pushf ;~ 0715:08C3
cs=0x715;eip=0x0008c4; 	T(CLI);	// 16288                  cli ;~ 0715:08C4
cs=0x715;eip=0x0008c5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 16289                  mov     bx, [bp+arg_2] ;~ 0715:08C5
cs=0x715;eip=0x0008c8; 	T(SHL(bx, 1));	// 16290                  shl     bx, 1 ;~ 0715:08C8
cs=0x715;eip=0x0008ca; 	T(CMP(*(dw*)(raddr(cs,bx+0x78)), 1));	// 16291                  cmp     word ptr cs:[bx+78h], 1 ;~ 0715:08CA
cs=0x715;eip=0x0008d0; 	J(JNZ(loc_16009));	// 16292                  jnz     short loc_16009 ;~ 0715:08D0
cs=0x715;eip=0x0008d2; 	X(MOV(*(dw*)(raddr(cs,bx+0x78)), 2));	// 16293                  mov     word ptr cs:[bx+78h], 2 ;~ 0715:08D2
loc_16009:
	// 5240 
	R(POPF);seg003_8dc_proc:
	// 16300 
cs=0x715;eip=0x0008e0; 	X(POP(di));	// 16302                  pop     di ;~ 0715:08E0
cs=0x715;eip=0x0008e1; 	X(POP(si));	// 16303                  pop     si ;~ 0715:08E1
cs=0x715;eip=0x0008e2; 	X(POP(ds));	// 16304                  pop     ds ;~ 0715:08E2
cs=0x715;eip=0x0008e3; 	X(POP(bp));	// 16305                  pop     bp ;~ 0715:08E3
cs=0x715;eip=0x0008e4; 	J(RETF(0));	// 16306                  retf ;~ 0715:08E4

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_16009: 	goto loc_16009;
        case m2c::kseg003_8dc_proc: 	goto seg003_8dc_proc;
        case m2c::ksub_15fed: 	goto sub_15fed;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_16033(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_16033:
    _begin:
#undef arg_0
#define arg_0 6
	// 16345 arg_0           = word ptr  6 ;~ 0715:0903
cs=0x715;eip=0x000903; 	X(PUSH(bp));	// 16347                  push    bp ;~ 0715:0903
cs=0x715;eip=0x000904; 	T(bp = sp;);	// 16348                  mov     bp, sp ;~ 0715:0904
cs=0x715;eip=0x000906; 	X(PUSH(ds));	// 16349                  push    ds ;~ 0715:0906
cs=0x715;eip=0x000907; 	X(PUSH(si));	// 16350                  push    si ;~ 0715:0907
cs=0x715;eip=0x000908; 	X(PUSH(di));	// 16351                  push    di ;~ 0715:0908
cs=0x715;eip=0x000909; 	X(PUSHF);	// 16352                  pushf ;~ 0715:0909
cs=0x715;eip=0x00090a; 	T(CLI);	// 16353                  cli ;~ 0715:090A
cs=0x715;eip=0x00090b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 16354                  mov     bx, [bp+arg_0] ;~ 0715:090B
cs=0x715;eip=0x00090e; 	T(SHL(bx, 1));	// 16355                  shl     bx, 1 ;~ 0715:090E
cs=0x715;eip=0x000910; 	T(CMP(*(dw*)(raddr(cs,bx+0x78)), 2));	// 16356                  cmp     word ptr cs:[bx+78h], 2 ;~ 0715:0910
cs=0x715;eip=0x000916; 	J(JNZ(loc_1604f));	// 16357                  jnz     short loc_1604F ;~ 0715:0916
cs=0x715;eip=0x000918; 	X(MOV(*(dw*)(raddr(cs,bx+0x78)), 1));	// 16358                  mov     word ptr cs:[bx+78h], 1 ;~ 0715:0918
loc_1604f:
	// 5241 
	R(POPF);cs=0x715;eip=0x000926; 	X(POP(di));	// 16365                  pop     di ;~ 0715:0926
cs=0x715;eip=0x000927; 	X(POP(si));	// 16366                  pop     si ;~ 0715:0927
cs=0x715;eip=0x000928; 	X(POP(ds));	// 16367                  pop     ds ;~ 0715:0928
cs=0x715;eip=0x000929; 	X(POP(bp));	// 16368                  pop     bp ;~ 0715:0929
cs=0x715;eip=0x00092a; 	J(RETF(0));	// 16369                  retf ;~ 0715:092A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1604f: 	goto loc_1604f;
        case m2c::ksub_16033: 	goto sub_16033;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group22(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group22:
    _begin:
sub_16079:
	// 16408 
#undef arg_2
#define arg_2 6
	// 16411 arg_2           = word ptr  6 ;~ 0715:0949
#undef arg_4
#define arg_4 8
	// 16412 arg_4           = word ptr  8 ;~ 0715:0949
#undef arg_6
#define arg_6 0x0A
	// 16413 arg_6           = word ptr  0Ah ;~ 0715:0949
cs=0x715;eip=0x000949; 	X(PUSH(bp));	// 16415                  push    bp ;~ 0715:0949
cs=0x715;eip=0x00094a; 	T(bp = sp;);	// 16416                  mov     bp, sp ;~ 0715:094A
cs=0x715;eip=0x00094c; 	X(PUSH(ds));	// 16417                  push    ds ;~ 0715:094C
cs=0x715;eip=0x00094d; 	X(PUSH(si));	// 16418                  push    si ;~ 0715:094D
cs=0x715;eip=0x00094e; 	X(PUSH(di));	// 16419                  push    di ;~ 0715:094E
cs=0x715;eip=0x00094f; 	X(PUSHF);	// 16420                  pushf ;~ 0715:094F
cs=0x715;eip=0x000950; 	T(CLI);	// 16421                  cli ;~ 0715:0950
cs=0x715;eip=0x000951; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 16422                  mov     bx, [bp+arg_2] ;~ 0715:0951
cs=0x715;eip=0x000954; 	T(SHL(bx, 1));	// 16423                  shl     bx, 1 ;~ 0715:0954
cs=0x715;eip=0x000956; 	T(MOV(ax, *(dw*)(raddr(cs,bx+0x78))));	// 16424                  mov     ax, cs:[bx+78h] ;~ 0715:0956
cs=0x715;eip=0x00095b; 	X(PUSH(ax));	// 16425                  push    ax ;~ 0715:095B
cs=0x715;eip=0x00095c; 	X(MOV(*(dw*)(raddr(cs,bx+0x78)), 1));	// 16426                  mov     word ptr cs:[bx+78h], 1 ;~ 0715:095C
cs=0x715;eip=0x000963; 	T(SHL(bx, 1));	// 16427                  shl     bx, 1 ;~ 0715:0963
cs=0x715;eip=0x000965; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 16428                  mov     ax, [bp+arg_4] ;~ 0715:0965
cs=0x715;eip=0x000968; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 16429                  mov     dx, [bp+arg_6] ;~ 0715:0968
cs=0x715;eip=0x00096b; 	X(MOV(*(dw*)(raddr(cs,bx+0x0DE)), ax));	// 16430                  mov     cs:[bx+0DEh], ax ;~ 0715:096B
cs=0x715;eip=0x000970; 	X(MOV(*(dw*)(raddr(cs,bx+0x0E0)), dx));	// 16431                  mov     cs:[bx+0E0h], dx ;~ 0715:0970
cs=0x715;eip=0x000975; 	X(MOV(*(dw*)(raddr(cs,bx+0x9A)), 0));	// 16432                  mov     word ptr cs:[bx+9Ah], 0 ;~ 0715:0975
cs=0x715;eip=0x00097c; 	X(MOV(*(dw*)(raddr(cs,bx+0x9C)), 0));	// 16433                  mov     word ptr cs:[bx+9Ch], 0 ;~ 0715:097C
cs=0x715;eip=0x000983; 	X(PUSH(cs));	// 16434                  push    cs ;~ 0715:0983
cs=0x715;eip=0x000984; 	J(CALL(sub_15d76,0));	// 16435                  call    sub_15D76 ;~ 0715:0984
cs=0x715;eip=0x000987; 	X(POP(ax));	// 16436                  pop     ax ;~ 0715:0987
cs=0x715;eip=0x000988; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 16437                  mov     bx, [bp+arg_2] ;~ 0715:0988
cs=0x715;eip=0x00098b; 	T(SHL(bx, 1));	// 16438                  shl     bx, 1 ;~ 0715:098B
cs=0x715;eip=0x00098d; 	X(MOV(*(dw*)(raddr(cs,bx+0x78)), ax));	// 16439                  mov     cs:[bx+78h], ax ;~ 0715:098D
loc_160c2:
	// 5242 
	R(POPF);seg003_995_proc:
	// 16445 
cs=0x715;eip=0x000999; 	X(POP(di));	// 16447                  pop     di ;~ 0715:0999
cs=0x715;eip=0x00099a; 	X(POP(si));	// 16448                  pop     si ;~ 0715:099A
cs=0x715;eip=0x00099b; 	X(POP(ds));	// 16449                  pop     ds ;~ 0715:099B
cs=0x715;eip=0x00099c; 	X(POP(bp));	// 16450                  pop     bp ;~ 0715:099C
cs=0x715;eip=0x00099d; 	J(RETF(0));	// 16451                  retf ;~ 0715:099D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_160c2: 	goto loc_160c2;
        case m2c::kseg003_995_proc: 	goto seg003_995_proc;
        case m2c::ksub_16079: 	goto sub_16079;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group23(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group23:
    _begin:
sub_160ce:
	// 16457 
#undef arg_2
#define arg_2 6
	// 16459 arg_2           = word ptr  6 ;~ 0715:099E
#undef arg_4
#define arg_4 8
	// 16460 arg_4           = word ptr  8 ;~ 0715:099E
#undef arg_6
#define arg_6 0x0A
	// 16461 arg_6           = word ptr  0Ah ;~ 0715:099E
cs=0x715;eip=0x00099e; 	X(PUSH(bp));	// 16463                  push    bp ;~ 0715:099E
cs=0x715;eip=0x00099f; 	T(bp = sp;);	// 16464                  mov     bp, sp ;~ 0715:099F
cs=0x715;eip=0x0009a1; 	X(PUSH(ds));	// 16465                  push    ds ;~ 0715:09A1
cs=0x715;eip=0x0009a2; 	X(PUSH(si));	// 16466                  push    si ;~ 0715:09A2
cs=0x715;eip=0x0009a3; 	X(PUSH(di));	// 16467                  push    di ;~ 0715:09A3
cs=0x715;eip=0x0009a4; 	X(PUSHF);	// 16468                  pushf ;~ 0715:09A4
cs=0x715;eip=0x0009a5; 	T(CLI);	// 16469                  cli ;~ 0715:09A5
cs=0x715;eip=0x0009a6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 16470                  push    [bp+arg_6] ;~ 0715:09A6
cs=0x715;eip=0x0009a9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 16471                  push    [bp+arg_4] ;~ 0715:09A9
cs=0x715;eip=0x0009ac; 	X(PUSH(ax));	// 16472                  push    ax ;~ 0715:09AC
cs=0x715;eip=0x0009ad; 	X(PUSH(bp));	// 16473                  push    bp ;~ 0715:09AD
cs=0x715;eip=0x0009ae; 	T(bp = sp;);	// 16474                  mov     bp, sp ;~ 0715:09AE
cs=0x715;eip=0x0009b0; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x0F));	// 16475                  mov     word ptr [bp+2], 0Fh ;~ 0715:09B0
cs=0x715;eip=0x0009b5; 	X(POP(bp));	// 16476                  pop     bp ;~ 0715:09B5
cs=0x715;eip=0x0009b6; 	X(PUSH(ax));	// 16477                  push    ax ;~ 0715:09B6
cs=0x715;eip=0x0009b7; 	X(PUSH(bp));	// 16478                  push    bp ;~ 0715:09B7
cs=0x715;eip=0x0009b8; 	T(bp = sp;);	// 16479                  mov     bp, sp ;~ 0715:09B8
cs=0x715;eip=0x0009ba; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x4240));	// 16480                  mov     word ptr [bp+2], 4240h ;~ 0715:09BA
cs=0x715;eip=0x0009bf; 	X(POP(bp));	// 16481                  pop     bp ;~ 0715:09BF
cs=0x715;eip=0x0009c0; 	X(PUSH(cs));	// 16482                  push    cs ;~ 0715:09C0
cs=0x715;eip=0x0009c1; 	J(CALL(sub_15d2b,0));	// 16483                  call    near ptr sub_15D2B ;~ 0715:09C1
cs=0x715;eip=0x0009c4; 	T(ADD(sp, 8));	// 16484                  add     sp, 8 ;~ 0715:09C4
cs=0x715;eip=0x0009c7; 	X(PUSH(dx));	// 16485                  push    dx ;~ 0715:09C7
cs=0x715;eip=0x0009c8; 	X(PUSH(ax));	// 16486                  push    ax ;~ 0715:09C8
cs=0x715;eip=0x0009c9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 16487                  push    [bp+arg_2] ;~ 0715:09C9
cs=0x715;eip=0x0009cc; 	X(PUSH(cs));	// 16488                  push    cs ;~ 0715:09CC
cs=0x715;eip=0x0009cd; 	J(CALL(sub_16079,0));	// 16489                  call    sub_16079 ;~ 0715:09CD
cs=0x715;eip=0x0009d0; 	T(ADD(sp, 6));	// 16490                  add     sp, 6 ;~ 0715:09D0
loc_16103:
	// 5243 
	R(POPF);seg003_9d6_proc:
	// 16496 
cs=0x715;eip=0x0009da; 	X(POP(di));	// 16498                  pop     di ;~ 0715:09DA
cs=0x715;eip=0x0009db; 	X(POP(si));	// 16499                  pop     si ;~ 0715:09DB
cs=0x715;eip=0x0009dc; 	X(POP(ds));	// 16500                  pop     ds ;~ 0715:09DC
cs=0x715;eip=0x0009dd; 	X(POP(bp));	// 16501                  pop     bp ;~ 0715:09DD
cs=0x715;eip=0x0009de; 	J(RETF(0));	// 16502                  retf ;~ 0715:09DE
ret_715_9df:
	// 5244 
cs=0x715;eip=0x0009df; 	X(PUSH(bp));	// 16504                  push    bp ;~ 0715:09DF
cs=0x715;eip=0x0009e0; 	T(bp = sp;);	// 16505                  mov     bp, sp ;~ 0715:09E0
cs=0x715;eip=0x0009e2; 	X(PUSH(ds));	// 16506                  push    ds ;~ 0715:09E2
cs=0x715;eip=0x0009e3; 	X(PUSH(si));	// 16507                  push    si ;~ 0715:09E3
cs=0x715;eip=0x0009e4; 	X(PUSH(di));	// 16508                  push    di ;~ 0715:09E4
cs=0x715;eip=0x0009e5; 	X(PUSHF);	// 16509                  pushf ;~ 0715:09E5
cs=0x715;eip=0x0009e6; 	T(CLI);	// 16510                  cli ;~ 0715:09E6
cs=0x715;eip=0x0009e7; 	T(CMP(*(dw*)(raddr(ss,bp+8)), 0));	// 16511                  cmp     word ptr [bp+8], 0 ;~ 0715:09E7
cs=0x715;eip=0x0009eb; 	J(JNZ(loc_16125));	// 16512                  jnz     short loc_16125 ;~ 0715:09EB
cs=0x715;eip=0x0009ed; 	T(ax = 0x0D68D;);	// 16513                  mov     ax, 0D68Dh ;~ 0715:09ED
cs=0x715;eip=0x0009f0; 	T(dx = 0;);	// 16514                  mov     dx, 0 ;~ 0715:09F0
cs=0x715;eip=0x0009f3; 	J(JMP(loc_16133));	// 16515                  jmp     short loc_16133 ;~ 0715:09F3
loc_16125:
	// 5245 
cs=0x715;eip=0x0009f5; 	T(ax = 0x2710;);	// 16519                  mov     ax, 2710h ;~ 0715:09F5
cs=0x715;eip=0x0009f8; 	T(bx = 0x2E9C;);	// 16520                  mov     bx, 2E9Ch ;~ 0715:09F8
cs=0x715;eip=0x0009fb; 	X(MUL1_2(*(dw*)(raddr(ss,bp+8))));	// 16521                  mul     word ptr [bp+8] ;~ 0715:09FB
cs=0x715;eip=0x0009fe; 	T(DIV2(bx));	// 16522                  div     bx ;~ 0715:09FE
cs=0x715;eip=0x000a00; 	T(dx = 0;);	// 16523                  mov     dx, 0 ;~ 0715:0A00
loc_16133:
	// 5246 
cs=0x715;eip=0x000a03; 	X(PUSH(dx));	// 16526                  push    dx ;~ 0715:0A03
cs=0x715;eip=0x000a04; 	X(PUSH(ax));	// 16527                  push    ax ;~ 0715:0A04
cs=0x715;eip=0x000a05; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 16528                  push    word ptr [bp+6] ;~ 0715:0A05
cs=0x715;eip=0x000a08; 	X(PUSH(cs));	// 16529                  push    cs ;~ 0715:0A08
cs=0x715;eip=0x000a09; 	J(CALL(sub_16079,0));	// 16530                  call    sub_16079 ;~ 0715:0A09
cs=0x715;eip=0x000a0c; 	T(ADD(sp, 6));	// 16531                  add     sp, 6 ;~ 0715:0A0C
loc_1613f:
	// 5247 
	R(POPF);cs=0x715;eip=0x000a16; 	X(POP(di));	// 16537                  pop     di ;~ 0715:0A16
cs=0x715;eip=0x000a17; 	X(POP(si));	// 16538                  pop     si ;~ 0715:0A17
cs=0x715;eip=0x000a18; 	X(POP(ds));	// 16539                  pop     ds ;~ 0715:0A18
cs=0x715;eip=0x000a19; 	X(POP(bp));	// 16540                  pop     bp ;~ 0715:0A19
cs=0x715;eip=0x000a1a; 	J(RETF(0));	// 16541                  retf ;~ 0715:0A1A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_16103: 	goto loc_16103;
        case m2c::kloc_16125: 	goto loc_16125;
        case m2c::kloc_16133: 	goto loc_16133;
        case m2c::kloc_1613f: 	goto loc_1613f;
        case m2c::kret_715_9df: 	goto ret_715_9df;
        case m2c::kseg003_9d6_proc: 	goto seg003_9d6_proc;
        case m2c::ksub_160ce: 	goto sub_160ce;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group24(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group24:
    _begin:
sub_1614b:
	// 16546 
cs=0x715;eip=0x000a1b; 	X(PUSH(ds));	// 16547                  push    ds ;~ 0715:0A1B
cs=0x715;eip=0x000a1c; 	X(PUSH(si));	// 16548                  push    si ;~ 0715:0A1C
cs=0x715;eip=0x000a1d; 	X(PUSH(di));	// 16549                  push    di ;~ 0715:0A1D
cs=0x715;eip=0x000a1e; 	X(PUSHF);	// 16550                  pushf ;~ 0715:0A1E
cs=0x715;eip=0x000a1f; 	T(CLI);	// 16551                  cli ;~ 0715:0A1F
cs=0x715;eip=0x000a20; 	T(ax = *(dw*)(&byte_15860););	// 16552                  mov     ax, word ptr cs:byte_15860 ;~ 0715:0A20
loc_16154:
	// 5248 
	R(POPF);seg003_a27_proc:
	// 16558 
cs=0x715;eip=0x000a2b; 	X(POP(di));	// 16560                  pop     di ;~ 0715:0A2B
cs=0x715;eip=0x000a2c; 	X(POP(si));	// 16561                  pop     si ;~ 0715:0A2C
cs=0x715;eip=0x000a2d; 	X(POP(ds));	// 16562                  pop     ds ;~ 0715:0A2D
cs=0x715;eip=0x000a2e; 	J(RETF(0));	// 16563                  retf ;~ 0715:0A2E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_16154: 	goto loc_16154;
        case m2c::kseg003_a27_proc: 	goto seg003_a27_proc;
        case m2c::ksub_1614b: 	goto sub_1614b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group25(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group25:
    _begin:
sub_1615f:
	// 16569 
#undef arg_2
#define arg_2 6
	// 16572 arg_2           = dword ptr  6 ;~ 0715:0A2F
cs=0x715;eip=0x000a2f; 	X(PUSH(bp));	// 16576                  push    bp ;~ 0715:0A2F
cs=0x715;eip=0x000a30; 	T(bp = sp;);	// 16577                  mov     bp, sp ;~ 0715:0A30
cs=0x715;eip=0x000a32; 	X(PUSH(ds));	// 16578                  push    ds ;~ 0715:0A32
cs=0x715;eip=0x000a33; 	X(PUSH(si));	// 16579                  push    si ;~ 0715:0A33
cs=0x715;eip=0x000a34; 	X(PUSH(di));	// 16580                  push    di ;~ 0715:0A34
cs=0x715;eip=0x000a35; 	X(PUSHF);	// 16581                  pushf ;~ 0715:0A35
cs=0x715;eip=0x000a36; 	T(CLI);	// 16582                  cli ;~ 0715:0A36
cs=0x715;eip=0x000a37; 	X(word_158e6 = 0;);	// 16583                  mov     cs:word_158E6, 0 ;~ 0715:0A37
loc_1616e:
	// 5249 
cs=0x715;eip=0x000a3e; 	T(si = word_158e6;);	// 16586                  mov     si, cs:word_158E6 ;~ 0715:0A3E
cs=0x715;eip=0x000a43; 	T(SHL(si, 1));	// 16587                  shl     si, 1 ;~ 0715:0A43
cs=0x715;eip=0x000a45; 	T(SHL(si, 1));	// 16588                  shl     si, 1 ;~ 0715:0A45
cs=0x715;eip=0x000a47; 	T(MOV(ax, *(dw*)(raddr(cs,si+0x132))));	// 16589                  mov     ax, cs:[si+132h] ;~ 0715:0A47
cs=0x715;eip=0x000a4c; 	T(OR(ax, *(dw*)(raddr(cs,si+0x134))));	// 16590                  or      ax, cs:[si+134h] ;~ 0715:0A4C
cs=0x715;eip=0x000a51; 	J(JZ(loc_16195));	// 16591                  jz      short loc_16195 ;~ 0715:0A51
cs=0x715;eip=0x000a53; 	X(INC(word_158e6));	// 16592                  inc     cs:word_158E6 ;~ 0715:0A53
cs=0x715;eip=0x000a58; 	T(CMP(word_158e6, 0x10));	// 16593                  cmp     cs:word_158E6, 10h ;~ 0715:0A58
cs=0x715;eip=0x000a5e; 	J(JNZ(loc_1616e));	// 16594                  jnz     short loc_1616E ;~ 0715:0A5E
cs=0x715;eip=0x000a60; 	T(ax = 0x0FFFF;);	// 16595                  mov     ax, 0FFFFh ;~ 0715:0A60
cs=0x715;eip=0x000a63; 	J(JMP(loc_161f5));	// 16596                  jmp     short loc_161F5 ;~ 0715:0A63
loc_16195:
	// 5250 
cs=0x715;eip=0x000a65; 	T(LES(di, *(dd*)(raddr(ss,bp+arg_2))));	// 16600                  les     di, [bp+arg_2] ;~ 0715:0A65
cs=0x715;eip=0x000a68; 	T(CMP(*(dw*)(raddr(es,di+3)), 0x4944));	// 16602                  cmp     word ptr es:[di+3], 4944h ;~ 0715:0A68
cs=0x715;eip=0x000a6e; 	J(JNZ(loc_161b0));	// 16603                  jnz     short loc_161B0 ;~ 0715:0A6E
cs=0x715;eip=0x000a70; 	T(CMP(*(dw*)(raddr(es,di+5)), 0x5047));	// 16604                  cmp     word ptr es:[di+5], 5047h ;~ 0715:0A70
cs=0x715;eip=0x000a76; 	J(JNZ(loc_161b0));	// 16605                  jnz     short loc_161B0 ;~ 0715:0A76
cs=0x715;eip=0x000a78; 	T(CMP(*(dw*)(raddr(es,di+7)), 0x4B41));	// 16606                  cmp     word ptr es:[di+7], 4B41h ;~ 0715:0A78
cs=0x715;eip=0x000a7e; 	J(JZ(loc_16201));	// 16607                  jz      short loc_16201 ;~ 0715:0A7E
loc_161b0:
	// 5251 
cs=0x715;eip=0x000a80; 	T(ax = 0x0FFFF;);	// 16611                  mov     ax, 0FFFFh ;~ 0715:0A80
cs=0x715;eip=0x000a83; 	T(CMP(*(dw*)(raddr(es,di+2)), 0x6F43));	// 16612                  cmp     word ptr es:[di+2], 6F43h ;~ 0715:0A83
cs=0x715;eip=0x000a89; 	J(JNZ(loc_161f5));	// 16613                  jnz     short loc_161F5 ;~ 0715:0A89
cs=0x715;eip=0x000a8b; 	T(CMP(*(dw*)(raddr(es,di+4)), 0x7970));	// 16614                  cmp     word ptr es:[di+4], 7970h ;~ 0715:0A8B
cs=0x715;eip=0x000a91; 	J(JNZ(loc_161f5));	// 16615                  jnz     short loc_161F5 ;~ 0715:0A91
cs=0x715;eip=0x000a93; 	T(ADD(di, *(dw*)(raddr(es,di))));	// 16616                  add     di, es:[di] ;~ 0715:0A93
cs=0x715;eip=0x000a96; 	X(MOV(*(dw*)(raddr(cs,si+0x132)), di));	// 16617                  mov     cs:[si+132h], di ;~ 0715:0A96
cs=0x715;eip=0x000a9b; 	X(MOV(*(dw*)(raddr(cs,si+0x134)), es));	// 16618                  mov     word ptr cs:[si+134h], es ;~ 0715:0A9B
cs=0x715;eip=0x000aa0; 	X(PUSH(word_158e6));	// 16619                  push    cs:word_158E6 ;~ 0715:0AA0
cs=0x715;eip=0x000aa5; 	X(PUSH(cs));	// 16620                  push    cs ;~ 0715:0AA5
cs=0x715;eip=0x000aa6; 	J(CALL(sub_16289,0));	// 16621                  call    near ptr sub_16289 ;~ 0715:0AA6
cs=0x715;eip=0x000aa9; 	T(ADD(sp, 2));	// 16622                  add     sp, 2 ;~ 0715:0AA9
cs=0x715;eip=0x000aac; 	T(es = dx;);	// 16623                  mov     es, dx ;~ 0715:0AAC
cs=0x715;eip=0x000aae; 	T(di = ax;);	// 16625                  mov     di, ax ;~ 0715:0AAE
cs=0x715;eip=0x000ab0; 	T(OR(dx, ax));	// 16626                  or      dx, ax ;~ 0715:0AB0
cs=0x715;eip=0x000ab2; 	T(ax = 0x0FFFF;);	// 16627                  mov     ax, 0FFFFh ;~ 0715:0AB2
cs=0x715;eip=0x000ab5; 	J(JZ(loc_161f5));	// 16628                  jz      short loc_161F5 ;~ 0715:0AB5
cs=0x715;eip=0x000ab7; 	T(MOV(dx, *(dw*)(raddr(es,di))));	// 16629                  mov     dx, es:[di] ;~ 0715:0AB7
cs=0x715;eip=0x000aba; 	T(CMP(dx, *(dw*)(&byte_15af6)));	// 16630                  cmp     dx, word ptr cs:byte_15AF6 ;~ 0715:0ABA
cs=0x715;eip=0x000abf; 	J(JA(loc_161f5));	// 16631                  ja      short loc_161F5 ;~ 0715:0ABF
loc_161f1:
	// 5252 
cs=0x715;eip=0x000ac1; 	T(ax = word_158e6;);	// 16634                  mov     ax, cs:word_158E6 ;~ 0715:0AC1
loc_161f5:
	// 5253 
	R(POPF);seg003_ac8_proc:
	// 16641 
cs=0x715;eip=0x000acc; 	X(POP(di));	// 16643                  pop     di ;~ 0715:0ACC
cs=0x715;eip=0x000acd; 	X(POP(si));	// 16644                  pop     si ;~ 0715:0ACD
cs=0x715;eip=0x000ace; 	X(POP(ds));	// 16645                  pop     ds ;~ 0715:0ACE
cs=0x715;eip=0x000acf; 	X(POP(bp));	// 16646                  pop     bp ;~ 0715:0ACF
cs=0x715;eip=0x000ad0; 	J(RETF(0));	// 16647                  retf ;~ 0715:0AD0
loc_16201:
	// 5254 
cs=0x715;eip=0x000ad1; 	T(ax = 0x0FFFF;);	// 16652                  mov     ax, 0FFFFh ;~ 0715:0AD1
cs=0x715;eip=0x000ad4; 	T(CMP(word_1655e, 0));	// 16653                  cmp     cs:word_1655E, 0 ;~ 0715:0AD4
cs=0x715;eip=0x000ada; 	J(JNZ(loc_161f5));	// 16654                  jnz     short loc_161F5 ;~ 0715:0ADA
cs=0x715;eip=0x000adc; 	X(word_1655e = 1;);	// 16655                  mov     cs:word_1655E, 1 ;~ 0715:0ADC
cs=0x715;eip=0x000ae3; 	T(ax = word_158e6;);	// 16656                  mov     ax, cs:word_158E6 ;~ 0715:0AE3
cs=0x715;eip=0x000ae7; 	X(*(dw*)(&byte_1655c) = ax;);	// 16657                  mov     word ptr cs:byte_1655C, ax ;~ 0715:0AE7
cs=0x715;eip=0x000aeb; 	T(ax = es;);	// 16658                  mov     ax, es ;~ 0715:0AEB
cs=0x715;eip=0x000aed; 	T(SUB(ax, 0x10));	// 16659                  sub     ax, 10h ;~ 0715:0AED
cs=0x715;eip=0x000af0; 	T(ADD(di, 0x100));	// 16660                  add     di, 100h ;~ 0715:0AF0
cs=0x715;eip=0x000af4; 	X(*(dw*)(&byte_16564) = ax;);	// 16661                  mov     word ptr cs:byte_16564, ax ;~ 0715:0AF4
cs=0x715;eip=0x000af8; 	X(*(dw*)(&byte_16562) = di;);	// 16662                  mov     word ptr cs:byte_16562, di ;~ 0715:0AF8
cs=0x715;eip=0x000afd; 	X(MOV(*(dw*)(raddr(cs,si+0x132)), offset(seg003,byte_164ba)));	// 16663                  mov     word ptr cs:[si+132h], offset byte_164BA ;~ 0715:0AFD
cs=0x715;eip=0x000b04; 	X(MOV(*(dw*)(raddr(cs,si+0x134)), cs));	// 16664                  mov     word ptr cs:[si+134h], cs ;~ 0715:0B04
cs=0x715;eip=0x000b09; 	X(*(dw*)(&byte_16560) = 0;);	// 16665                  mov     word ptr cs:byte_16560, 0 ;~ 0715:0B09
cs=0x715;eip=0x000b10; 	J(JMP(loc_161f1));	// 16666                  jmp     short loc_161F1 ;~ 0715:0B10
ret_715_b12:
	// 5255 
cs=0x715;eip=0x000b12; 	X(PUSH(bp));	// 16669                  push    bp ;~ 0715:0B12
cs=0x715;eip=0x000b13; 	T(bp = sp;);	// 16670                  mov     bp, sp ;~ 0715:0B13
cs=0x715;eip=0x000b15; 	X(PUSH(ds));	// 16671                  push    ds ;~ 0715:0B15
cs=0x715;eip=0x000b16; 	X(PUSH(si));	// 16672                  push    si ;~ 0715:0B16
cs=0x715;eip=0x000b17; 	X(PUSH(di));	// 16673                  push    di ;~ 0715:0B17
cs=0x715;eip=0x000b18; 	X(PUSHF);	// 16674                  pushf ;~ 0715:0B18
cs=0x715;eip=0x000b19; 	T(CLI);	// 16675                  cli ;~ 0715:0B19
cs=0x715;eip=0x000b1a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 16676                  mov     bx, [bp+6] ;~ 0715:0B1A
cs=0x715;eip=0x000b1d; 	T(CMP(bx, 0x10));	// 16677                  cmp     bx, 10h ;~ 0715:0B1D
cs=0x715;eip=0x000b20; 	J(JNC(loc_1627d));	// 16678                  jnb     short loc_1627D ;~ 0715:0B20
cs=0x715;eip=0x000b22; 	T(SHL(bx, 1));	// 16679                  shl     bx, 1 ;~ 0715:0B22
cs=0x715;eip=0x000b24; 	T(SHL(bx, 1));	// 16680                  shl     bx, 1 ;~ 0715:0B24
cs=0x715;eip=0x000b26; 	X(MOV(*(dw*)(raddr(cs,bx+0x132)), 0));	// 16681                  mov     word ptr cs:[bx+132h], 0 ;~ 0715:0B26
cs=0x715;eip=0x000b2d; 	X(MOV(*(dw*)(raddr(cs,bx+0x134)), 0));	// 16682                  mov     word ptr cs:[bx+134h], 0 ;~ 0715:0B2D
cs=0x715;eip=0x000b34; 	T(CMP(word_1655e, 0));	// 16683                  cmp     cs:word_1655E, 0 ;~ 0715:0B34
cs=0x715;eip=0x000b3a; 	J(JZ(loc_1627d));	// 16684                  jz      short loc_1627D ;~ 0715:0B3A
cs=0x715;eip=0x000b3c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 16685                  mov     ax, [bp+6] ;~ 0715:0B3C
cs=0x715;eip=0x000b3f; 	T(CMP(ax, *(dw*)(&byte_1655c)));	// 16686                  cmp     ax, word ptr cs:byte_1655C ;~ 0715:0B3F
cs=0x715;eip=0x000b44; 	J(JNZ(loc_1627d));	// 16687                  jnz     short loc_1627D ;~ 0715:0B44
cs=0x715;eip=0x000b46; 	X(word_1655e = 0;);	// 16688                  mov     cs:word_1655E, 0 ;~ 0715:0B46
loc_1627d:
	// 5256 
	R(POPF);cs=0x715;eip=0x000b54; 	X(POP(di));	// 16695                  pop     di ;~ 0715:0B54
cs=0x715;eip=0x000b55; 	X(POP(si));	// 16696                  pop     si ;~ 0715:0B55
cs=0x715;eip=0x000b56; 	X(POP(ds));	// 16697                  pop     ds ;~ 0715:0B56
cs=0x715;eip=0x000b57; 	X(POP(bp));	// 16698                  pop     bp ;~ 0715:0B57
cs=0x715;eip=0x000b58; 	J(RETF(0));	// 16699                  retf ;~ 0715:0B58

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1616e: 	goto loc_1616e;
        case m2c::kloc_16195: 	goto loc_16195;
        case m2c::kloc_161b0: 	goto loc_161b0;
        case m2c::kloc_161f1: 	goto loc_161f1;
        case m2c::kloc_161f5: 	goto loc_161f5;
        case m2c::kloc_16201: 	goto loc_16201;
        case m2c::kloc_1627d: 	goto loc_1627d;
        case m2c::kret_715_b12: 	goto ret_715_b12;
        case m2c::kseg003_ac8_proc: 	goto seg003_ac8_proc;
        case m2c::ksub_1615f: 	goto sub_1615f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_16289(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_16289:
    _begin:
#undef arg_0
#define arg_0 6
	// 16709 arg_0           = word ptr  6 ;~ 0715:0B59
cs=0x715;eip=0x000b59; 	X(PUSH(bp));	// 16711                  push    bp ;~ 0715:0B59
cs=0x715;eip=0x000b5a; 	T(bp = sp;);	// 16712                  mov     bp, sp ;~ 0715:0B5A
cs=0x715;eip=0x000b5c; 	X(PUSH(ax));	// 16713                  push    ax ;~ 0715:0B5C
cs=0x715;eip=0x000b5d; 	X(PUSH(bp));	// 16714                  push    bp ;~ 0715:0B5D
cs=0x715;eip=0x000b5e; 	T(bp = sp;);	// 16715                  mov     bp, sp ;~ 0715:0B5E
cs=0x715;eip=0x000b60; 	X(MOV(*(dw*)(raddr(ss,bp+2)), seg_offset(seg003)));	// 16716                  mov     word ptr [bp+2], seg seg003 ;~ 0715:0B60
cs=0x715;eip=0x000b65; 	X(POP(bp));	// 16717                  pop     bp ;~ 0715:0B65
cs=0x715;eip=0x000b66; 	X(PUSH(ax));	// 16718                  push    ax ;~ 0715:0B66
cs=0x715;eip=0x000b67; 	X(PUSH(bp));	// 16719                  push    bp ;~ 0715:0B67
cs=0x715;eip=0x000b68; 	T(bp = sp;);	// 16720                  mov     bp, sp ;~ 0715:0B68
cs=0x715;eip=0x000b6a; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x0A1B));	// 16721                  mov     word ptr [bp+2], 0A1Bh ;~ 0715:0B6A
cs=0x715;eip=0x000b6f; 	X(POP(bp));	// 16722                  pop     bp ;~ 0715:0B6F
cs=0x715;eip=0x000b70; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 16723                  push    [bp+arg_0] ;~ 0715:0B70
cs=0x715;eip=0x000b73; 	T(ax = 0x64;);	// 16724                  mov     ax, 64h ; 'd' ;~ 0715:0B73
cs=0x715;eip=0x000b76; 	X(PUSH(cs));	// 16725                  push    cs ;~ 0715:0B76
cs=0x715;eip=0x000b77; 	J(CALL(sub_15b30,0));	// 16726                  call    near ptr sub_15B30 ;~ 0715:0B77
cs=0x715;eip=0x000b7a; 	T(ADD(sp, 6));	// 16727                  add     sp, 6 ;~ 0715:0B7A
cs=0x715;eip=0x000b7d; 	X(POP(bp));	// 16728                  pop     bp ;~ 0715:0B7D
cs=0x715;eip=0x000b7e; 	J(RETF(0));	// 16729                  retf ;~ 0715:0B7E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_16289: 	goto sub_16289;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_162af(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_162af:
    _begin:
cs=0x715;eip=0x000b7f; 	T(ax = 0x65;);	// 16738                  mov     ax, 65h ; 'e' ;~ 0715:0B7F
cs=0x715;eip=0x000b82; 	J(return sub_15b30(0, _state););	// 16739                  jmp     near ptr sub_15B30 ;~ 0715:0B82

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_162af: 	goto sub_162af;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group26(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group26:
    _begin:
sub_162b5:
	// 16747 
#undef arg_2
#define arg_2 6
	// 16750 arg_2           = word ptr  6 ;~ 0715:0B85
#undef arg_4
#define arg_4 8
	// 16751 arg_4           = word ptr  8 ;~ 0715:0B85
#undef arg_6
#define arg_6 0x0A
	// 16752 arg_6           = word ptr  0Ah ;~ 0715:0B85
#undef arg_8
#define arg_8 0x0C
	// 16753 arg_8           = word ptr  0Ch ;~ 0715:0B85
#undef arg_a
#define arg_a 0x0E
	// 16754 arg_A           = word ptr  0Eh ;~ 0715:0B85
cs=0x715;eip=0x000b85; 	X(PUSH(bp));	// 16756                  push    bp ;~ 0715:0B85
cs=0x715;eip=0x000b86; 	T(bp = sp;);	// 16757                  mov     bp, sp ;~ 0715:0B86
cs=0x715;eip=0x000b88; 	X(PUSH(ds));	// 16758                  push    ds ;~ 0715:0B88
cs=0x715;eip=0x000b89; 	X(PUSH(si));	// 16759                  push    si ;~ 0715:0B89
cs=0x715;eip=0x000b8a; 	X(PUSH(di));	// 16760                  push    di ;~ 0715:0B8A
cs=0x715;eip=0x000b8b; 	X(PUSHF);	// 16761                  pushf ;~ 0715:0B8B
cs=0x715;eip=0x000b8c; 	T(CLI);	// 16762                  cli ;~ 0715:0B8C
cs=0x715;eip=0x000b8d; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0x10));	// 16763                  cmp     [bp+arg_2], 10h ;~ 0715:0B8D
cs=0x715;eip=0x000b91; 	J(JC(loc_162c6));	// 16764                  jb      short loc_162C6 ;~ 0715:0B91
cs=0x715;eip=0x000b93; 	J(JMP(loc_1635b));	// 16765                  jmp     loc_1635B ;~ 0715:0B93
loc_162c6:
	// 5257 
cs=0x715;eip=0x000b96; 	X(*(dw*)(&byte_158ec) = 0x0FFFF;);	// 16769                  mov     word ptr cs:byte_158EC, 0FFFFh ;~ 0715:0B96
cs=0x715;eip=0x000b9d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 16770                  push    [bp+arg_2] ;~ 0715:0B9D
cs=0x715;eip=0x000ba0; 	X(PUSH(cs));	// 16771                  push    cs ;~ 0715:0BA0
cs=0x715;eip=0x000ba1; 	J(CALL(sub_16289,0));	// 16772                  call    near ptr sub_16289 ;~ 0715:0BA1
cs=0x715;eip=0x000ba4; 	T(ADD(sp, 2));	// 16773                  add     sp, 2 ;~ 0715:0BA4
cs=0x715;eip=0x000ba7; 	T(es = dx;);	// 16774                  mov     es, dx ;~ 0715:0BA7
cs=0x715;eip=0x000ba9; 	T(di = ax;);	// 16776                  mov     di, ax ;~ 0715:0BA9
cs=0x715;eip=0x000bab; 	T(MOV(si, *(dw*)(raddr(es,di+0x14))));	// 16777                  mov     si, es:[di+14h] ;~ 0715:0BAB
cs=0x715;eip=0x000baf; 	T(CMP(si, 0x0FFFF));	// 16778                  cmp     si, 0FFFFh ;~ 0715:0BAF
cs=0x715;eip=0x000bb2; 	J(JZ(loc_16322));	// 16779                  jz      short loc_16322 ;~ 0715:0BB2
cs=0x715;eip=0x000bb4; 	T(ax = 0x67;);	// 16780                  mov     ax, 67h ; 'g' ;~ 0715:0BB4
cs=0x715;eip=0x000bb7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 16781                  mov     bx, [bp+arg_2] ;~ 0715:0BB7
cs=0x715;eip=0x000bba; 	X(PUSH(cs));	// 16782                  push    cs ;~ 0715:0BBA
cs=0x715;eip=0x000bbb; 	J(CALL(sub_15af8,0));	// 16783                  call    near ptr sub_15AF8 ;~ 0715:0BBB
cs=0x715;eip=0x000bbe; 	T(bx = ax;);	// 16784                  mov     bx, ax ;~ 0715:0BBE
cs=0x715;eip=0x000bc0; 	T(OR(bx, dx));	// 16785                  or      bx, dx ;~ 0715:0BC0
cs=0x715;eip=0x000bc2; 	J(JZ(loc_16322));	// 16786                  jz      short loc_16322 ;~ 0715:0BC2
cs=0x715;eip=0x000bc4; 	T(es = dx;);	// 16787                  mov     es, dx ;~ 0715:0BC4
cs=0x715;eip=0x000bc6; 	T(bx = ax;);	// 16788                  mov     bx, ax ;~ 0715:0BC6
cs=0x715;eip=0x000bc8; 	X(PUSH(es));	// 16789                  push    es ;~ 0715:0BC8
cs=0x715;eip=0x000bc9; 	X(PUSH(bx));	// 16790                  push    bx ;~ 0715:0BC9
cs=0x715;eip=0x000bca; 	X(PUSH(cs));	// 16791                  push    cs ;~ 0715:0BCA
cs=0x715;eip=0x000bcb; 	J(CALL(sub_15ebb,0));	// 16792                  call    sub_15EBB ;~ 0715:0BCB
cs=0x715;eip=0x000bce; 	T(ADD(sp, 4));	// 16793                  add     sp, 4 ;~ 0715:0BCE
cs=0x715;eip=0x000bd1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 16794                  mov     bx, [bp+arg_2] ;~ 0715:0BD1
cs=0x715;eip=0x000bd4; 	T(SHL(bx, 1));	// 16795                  shl     bx, 1 ;~ 0715:0BD4
cs=0x715;eip=0x000bd6; 	X(MOV(*(dw*)(raddr(cs,bx+0x172)), ax));	// 16796                  mov     cs:[bx+172h], ax ;~ 0715:0BD6
cs=0x715;eip=0x000bdb; 	X(*(dw*)(&byte_158ec) = ax;);	// 16797                  mov     word ptr cs:byte_158EC, ax ;~ 0715:0BDB
cs=0x715;eip=0x000bdf; 	X(PUSH(ax));	// 16798                  push    ax ;~ 0715:0BDF
cs=0x715;eip=0x000be0; 	X(PUSH(bp));	// 16799                  push    bp ;~ 0715:0BE0
cs=0x715;eip=0x000be1; 	T(bp = sp;);	// 16800                  mov     bp, sp ;~ 0715:0BE1
cs=0x715;eip=0x000be3; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0));	// 16801                  mov     word ptr [bp+2], 0 ;~ 0715:0BE3
cs=0x715;eip=0x000be8; 	X(POP(bp));	// 16802                  pop     bp ;~ 0715:0BE8
cs=0x715;eip=0x000be9; 	X(PUSH(si));	// 16803                  push    si ;~ 0715:0BE9
cs=0x715;eip=0x000bea; 	X(PUSH(ax));	// 16804                  push    ax ;~ 0715:0BEA
cs=0x715;eip=0x000beb; 	X(PUSH(cs));	// 16805                  push    cs ;~ 0715:0BEB
cs=0x715;eip=0x000bec; 	J(CALL(sub_160ce,0));	// 16806                  call    sub_160CE ;~ 0715:0BEC
cs=0x715;eip=0x000bef; 	T(ADD(sp, 6));	// 16807                  add     sp, 6 ;~ 0715:0BEF
loc_16322:
	// 5258 
cs=0x715;eip=0x000bf2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 16811                  push    [bp+arg_A] ;~ 0715:0BF2
cs=0x715;eip=0x000bf5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 16812                  push    [bp+arg_8] ;~ 0715:0BF5
cs=0x715;eip=0x000bf8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 16813                  push    [bp+arg_6] ;~ 0715:0BF8
cs=0x715;eip=0x000bfb; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 16814                  push    [bp+arg_4] ;~ 0715:0BFB
cs=0x715;eip=0x000bfe; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 16815                  push    [bp+arg_2] ;~ 0715:0BFE
cs=0x715;eip=0x000c01; 	T(ax = 0x66;);	// 16816                  mov     ax, 66h ; 'f' ;~ 0715:0C01
cs=0x715;eip=0x000c04; 	X(PUSH(cs));	// 16817                  push    cs ;~ 0715:0C04
cs=0x715;eip=0x000c05; 	J(CALL(sub_15b30,0));	// 16818                  call    near ptr sub_15B30 ;~ 0715:0C05
cs=0x715;eip=0x000c08; 	T(ADD(sp, 0x0A));	// 16819                  add     sp, 0Ah ;~ 0715:0C08
cs=0x715;eip=0x000c0b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 16820                  mov     bx, [bp+arg_2] ;~ 0715:0C0B
cs=0x715;eip=0x000c0e; 	T(SHL(bx, 1));	// 16821                  shl     bx, 1 ;~ 0715:0C0E
cs=0x715;eip=0x000c10; 	X(MOV(*(dw*)(raddr(cs,bx+0x192)), 1));	// 16822                  mov     word ptr cs:[bx+192h], 1 ;~ 0715:0C10
cs=0x715;eip=0x000c17; 	T(CMP(*(dw*)(&byte_158ec), 0x0FFFF));	// 16823                  cmp     word ptr cs:byte_158EC, 0FFFFh ;~ 0715:0C17
cs=0x715;eip=0x000c1d; 	J(JZ(loc_1635b));	// 16824                  jz      short loc_1635B ;~ 0715:0C1D
cs=0x715;eip=0x000c1f; 	X(PUSH(*(dw*)(&byte_158ec)));	// 16825                  push    word ptr cs:byte_158EC ;~ 0715:0C1F
cs=0x715;eip=0x000c24; 	X(PUSH(cs));	// 16826                  push    cs ;~ 0715:0C24
cs=0x715;eip=0x000c25; 	J(CALL(sub_15fed,0));	// 16827                  call    sub_15FED ;~ 0715:0C25
cs=0x715;eip=0x000c28; 	T(ADD(sp, 2));	// 16828                  add     sp, 2 ;~ 0715:0C28
loc_1635b:
	// 5259 
	R(POPF);seg003_c2e_proc:
	// 16835 
cs=0x715;eip=0x000c32; 	X(POP(di));	// 16837                  pop     di ;~ 0715:0C32
cs=0x715;eip=0x000c33; 	X(POP(si));	// 16838                  pop     si ;~ 0715:0C33
cs=0x715;eip=0x000c34; 	X(POP(ds));	// 16839                  pop     ds ;~ 0715:0C34
cs=0x715;eip=0x000c35; 	X(POP(bp));	// 16840                  pop     bp ;~ 0715:0C35
cs=0x715;eip=0x000c36; 	J(RETF(0));	// 16841                  retf ;~ 0715:0C36

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_162c6: 	goto loc_162c6;
        case m2c::kloc_16322: 	goto loc_16322;
        case m2c::kloc_1635b: 	goto loc_1635b;
        case m2c::kseg003_c2e_proc: 	goto seg003_c2e_proc;
        case m2c::ksub_162b5: 	goto sub_162b5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_16367(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_16367:
    _begin:
cs=0x715;eip=0x000c37; 	T(bx = sp;);	// 16847                  mov     bx, sp ;~ 0715:0C37
cs=0x715;eip=0x000c39; 	T(MOV(bx, *(dw*)(raddr(ss,bx+4))));	// 16848                  mov     bx, ss:[bx+4] ;~ 0715:0C39
cs=0x715;eip=0x000c3d; 	T(CMP(bx, 0x10));	// 16849                  cmp     bx, 10h ;~ 0715:0C3D
cs=0x715;eip=0x000c40; 	J(JNC(locret_16399));	// 16850                  jnb     short locret_16399 ;~ 0715:0C40
cs=0x715;eip=0x000c42; 	T(SHL(bx, 1));	// 16851                  shl     bx, 1 ;~ 0715:0C42
cs=0x715;eip=0x000c44; 	T(dx = 0;);	// 16852                  mov     dx, 0 ;~ 0715:0C44
cs=0x715;eip=0x000c47; 	X(XCHG(dx, *(dw*)(raddr(cs,bx+0x192))));	// 16853                  xchg    dx, cs:[bx+192h] ;~ 0715:0C47
cs=0x715;eip=0x000c4c; 	T(CMP(dx, 0));	// 16854                  cmp     dx, 0 ;~ 0715:0C4C
cs=0x715;eip=0x000c4f; 	J(JZ(locret_16399));	// 16855                  jz      short locret_16399 ;~ 0715:0C4F
cs=0x715;eip=0x000c51; 	T(MOV(dx, *(dw*)(raddr(cs,bx+0x172))));	// 16856                  mov     dx, cs:[bx+172h] ;~ 0715:0C51
cs=0x715;eip=0x000c56; 	T(CMP(dx, 0x0FFFF));	// 16857                  cmp     dx, 0FFFFh ;~ 0715:0C56
cs=0x715;eip=0x000c59; 	J(JZ(loc_16393));	// 16858                  jz      short loc_16393 ;~ 0715:0C59
cs=0x715;eip=0x000c5b; 	X(PUSH(dx));	// 16859                  push    dx ;~ 0715:0C5B
cs=0x715;eip=0x000c5c; 	X(PUSH(cs));	// 16860                  push    cs ;~ 0715:0C5C
cs=0x715;eip=0x000c5d; 	J(CALL(sub_15f86,0));	// 16861                  call    sub_15F86 ;~ 0715:0C5D
cs=0x715;eip=0x000c60; 	T(ADD(sp, 2));	// 16862                  add     sp, 2 ;~ 0715:0C60
loc_16393:
	// 5260 
cs=0x715;eip=0x000c63; 	T(ax = 0x68;);	// 16865                  mov     ax, 68h ; 'h' ;~ 0715:0C63
cs=0x715;eip=0x000c66; 	J(return sub_15b30(0, _state););	// 16866                  jmp     near ptr sub_15B30 ;~ 0715:0C66
locret_16399:
	// 5261 
cs=0x715;eip=0x000c69; 	J(RETF(0));	// 16871                  retf ;~ 0715:0C69

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_16393: 	goto loc_16393;
        case m2c::klocret_16399: 	goto locret_16399;
        case m2c::ksub_16367: 	goto sub_16367;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg003_c6a_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg003_c6a_proc:
    _begin:
cs=0x715;eip=0x000c6a; 	T(ax = 0x78;);	// 16875                  mov     ax, 78h ; 'x' ;~ 0715:0C6A
cs=0x715;eip=0x000c6d; 	J(return sub_15b30(0, _state););	// 16876                  jmp     near ptr sub_15B30 ;~ 0715:0C6D
ret_715_c70:
	// 5262 
cs=0x715;eip=0x000c70; 	T(ax = 0x79;);	// 16878                  mov     ax, 79h ; 'y' ;~ 0715:0C70
cs=0x715;eip=0x000c73; 	J(return sub_15b30(0, _state););	// 16879                  jmp     near ptr sub_15B30 ;~ 0715:0C73
ret_715_c76:
	// 5263 
cs=0x715;eip=0x000c76; 	T(ax = 0x86;);	// 16881                  mov     ax, 86h ; '
cs=0x715;eip=0x000c79; 	J(return sub_15b30(0, _state););	// 16882                  jmp     near ptr sub_15B30 ;~ 0715:0C79
ret_715_c7c:
	// 5264 
cs=0x715;eip=0x000c7c; 	T(ax = 0x7A;);	// 16884                  mov     ax, 7Ah ; 'z' ;~ 0715:0C7C
cs=0x715;eip=0x000c7f; 	J(return sub_15b30(0, _state););	// 16885                  jmp     near ptr sub_15B30 ;~ 0715:0C7F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_715_c70: 	goto ret_715_c70;
        case m2c::kret_715_c76: 	goto ret_715_c76;
        case m2c::kret_715_c7c: 	goto ret_715_c7c;
        case m2c::kseg003_c6a_proc: 	goto seg003_c6a_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_163b2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_163b2:
    _begin:
cs=0x715;eip=0x000c82; 	T(ax = 0x7B;);	// 16891                  mov     ax, 7Bh ; '{' ;~ 0715:0C82
cs=0x715;eip=0x000c85; 	J(return sub_15b30(0, _state););	// 16892                  jmp     near ptr sub_15B30 ;~ 0715:0C85

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_163b2: 	goto sub_163b2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_163b8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_163b8:
    _begin:
cs=0x715;eip=0x000c88; 	T(ax = 0x85;);	// 16900                  mov     ax, 85h ; '
cs=0x715;eip=0x000c8b; 	J(return sub_15b30(0, _state););	// 16901                  jmp     near ptr sub_15B30 ;~ 0715:0C8B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_163b8: 	goto sub_163b8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_163be(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_163be:
    _begin:
cs=0x715;eip=0x000c8e; 	T(ax = 0x7C;);	// 16909                  mov     ax, 7Ch ; '|' ;~ 0715:0C8E
cs=0x715;eip=0x000c91; 	J(return sub_15b30(0, _state););	// 16910                  jmp     near ptr sub_15B30 ;~ 0715:0C91

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_163be: 	goto sub_163be;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_163c4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_163c4:
    _begin:
cs=0x715;eip=0x000c94; 	T(ax = 0x7D;);	// 16918                  mov     ax, 7Dh ; '}' ;~ 0715:0C94
cs=0x715;eip=0x000c97; 	J(return sub_15b30(0, _state););	// 16919                  jmp     near ptr sub_15B30 ;~ 0715:0C97

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_163c4: 	goto sub_163c4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_163ca(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_163ca:
    _begin:
cs=0x715;eip=0x000c9a; 	T(ax = 0x7E;);	// 16927                  mov     ax, 7Eh ; '~' ;~ 0715:0C9A
cs=0x715;eip=0x000c9d; 	J(return sub_15b30(0, _state););	// 16928                  jmp     near ptr sub_15B30 ;~ 0715:0C9D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_163ca: 	goto sub_163ca;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg003_ca0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg003_ca0_proc:
    _begin:
cs=0x715;eip=0x000ca0; 	T(ax = 0x7F;);	// 16932                  mov     ax, 7Fh ;~ 0715:0CA0
cs=0x715;eip=0x000ca3; 	J(return sub_15b30(0, _state););	// 16933                  jmp     near ptr sub_15B30 ;~ 0715:0CA3
ret_715_ca6:
	// 5265 
cs=0x715;eip=0x000ca6; 	T(ax = 0x80;);	// 16935                  mov     ax, 80h ; '
cs=0x715;eip=0x000ca9; 	J(return sub_15b30(0, _state););	// 16936                  jmp     near ptr sub_15B30 ;~ 0715:0CA9
ret_715_cac:
	// 5266 
cs=0x715;eip=0x000cac; 	T(ax = 0x81;);	// 16938                  mov     ax, 81h ; '
cs=0x715;eip=0x000caf; 	J(return sub_15b30(0, _state););	// 16939                  jmp     near ptr sub_15B30 ;~ 0715:0CAF
ret_715_cb2:
	// 5267 
cs=0x715;eip=0x000cb2; 	T(ax = 0x82;);	// 16941                  mov     ax, 82h ; '
cs=0x715;eip=0x000cb5; 	J(return sub_15b30(0, _state););	// 16942                  jmp     near ptr sub_15B30 ;~ 0715:0CB5
ret_715_cb8:
	// 5268 
cs=0x715;eip=0x000cb8; 	T(ax = 0x83;);	// 16944                  mov     ax, 83h ; '
cs=0x715;eip=0x000cbb; 	J(return sub_15b30(0, _state););	// 16945                  jmp     near ptr sub_15B30 ;~ 0715:0CBB
ret_715_cbe:
	// 5269 
cs=0x715;eip=0x000cbe; 	T(ax = 0x84;);	// 16947                  mov     ax, 84h ; '
cs=0x715;eip=0x000cc1; 	J(return sub_15b30(0, _state););	// 16948                  jmp     near ptr sub_15B30 ;~ 0715:0CC1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_715_ca6: 	goto ret_715_ca6;
        case m2c::kret_715_cac: 	goto ret_715_cac;
        case m2c::kret_715_cb2: 	goto ret_715_cb2;
        case m2c::kret_715_cb8: 	goto ret_715_cb8;
        case m2c::kret_715_cbe: 	goto ret_715_cbe;
        case m2c::kseg003_ca0_proc: 	goto seg003_ca0_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_163f4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_163f4:
    _begin:
cs=0x715;eip=0x000cc4; 	T(ax = 0x96;);	// 16954                  mov     ax, 96h ; '
cs=0x715;eip=0x000cc7; 	J(return sub_15b30(0, _state););	// 16955                  jmp     near ptr sub_15B30 ;~ 0715:0CC7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_163f4: 	goto sub_163f4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_163fa(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_163fa:
    _begin:
cs=0x715;eip=0x000cca; 	T(ax = 0x97;);	// 16963                  mov     ax, 97h ; '
cs=0x715;eip=0x000ccd; 	J(return sub_15b30(0, _state););	// 16964                  jmp     near ptr sub_15B30 ;~ 0715:0CCD

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_163fa: 	goto sub_163fa;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_16400(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_16400:
    _begin:
cs=0x715;eip=0x000cd0; 	T(ax = 0x98;);	// 16972                  mov     ax, 98h ;~ 0715:0CD0
cs=0x715;eip=0x000cd3; 	J(return sub_15b30(0, _state););	// 16973                  jmp     near ptr sub_15B30 ;~ 0715:0CD3

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_16400: 	goto sub_16400;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_16406(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_16406:
    _begin:
cs=0x715;eip=0x000cd6; 	T(ax = 0x99;);	// 16981                  mov     ax, 99h ; '
cs=0x715;eip=0x000cd9; 	J(return sub_15b30(0, _state););	// 16982                  jmp     near ptr sub_15B30 ;~ 0715:0CD9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_16406: 	goto sub_16406;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1640c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1640c:
    _begin:
cs=0x715;eip=0x000cdc; 	T(ax = 0x9A;);	// 16990                  mov     ax, 9Ah ; '
cs=0x715;eip=0x000cdf; 	J(return sub_15b30(0, _state););	// 16991                  jmp     near ptr sub_15B30 ;~ 0715:0CDF

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1640c: 	goto sub_1640c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_16412(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_16412:
    _begin:
cs=0x715;eip=0x000ce2; 	T(ax = 0x9B;);	// 16999                  mov     ax, 9Bh ; '
cs=0x715;eip=0x000ce5; 	J(return sub_15b30(0, _state););	// 17000                  jmp     near ptr sub_15B30 ;~ 0715:0CE5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_16412: 	goto sub_16412;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_16418(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_16418:
    _begin:
cs=0x715;eip=0x000ce8; 	T(ax = 0x9C;);	// 17008                  mov     ax, 9Ch ; '
cs=0x715;eip=0x000ceb; 	J(return sub_15b30(0, _state););	// 17009                  jmp     near ptr sub_15B30 ;~ 0715:0CEB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_16418: 	goto sub_16418;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg003_cee_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg003_cee_proc:
    _begin:
cs=0x715;eip=0x000cee; 	T(ax = 0x9D;);	// 17013                  mov     ax, 9Dh ; '
cs=0x715;eip=0x000cf1; 	J(return sub_15b30(0, _state););	// 17014                  jmp     near ptr sub_15B30 ;~ 0715:0CF1
ret_715_cf4:
	// 5270 
cs=0x715;eip=0x000cf4; 	T(ax = 0x9E;);	// 17016                  mov     ax, 9Eh ; '
cs=0x715;eip=0x000cf7; 	J(return sub_15b30(0, _state););	// 17017                  jmp     near ptr sub_15B30 ;~ 0715:0CF7
ret_715_cfa:
	// 5271 
cs=0x715;eip=0x000cfa; 	T(ax = 0x9F;);	// 17019                  mov     ax, 9Fh ; '
cs=0x715;eip=0x000cfd; 	J(return sub_15b30(0, _state););	// 17020                  jmp     near ptr sub_15B30 ;~ 0715:0CFD

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_715_cf4: 	goto ret_715_cf4;
        case m2c::kret_715_cfa: 	goto ret_715_cfa;
        case m2c::kseg003_cee_proc: 	goto seg003_cee_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_16430(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_16430:
    _begin:
cs=0x715;eip=0x000d00; 	T(ax = 0x0AA;);	// 17026                  mov     ax, 0AAh ; '
cs=0x715;eip=0x000d03; 	J(return sub_15b30(0, _state););	// 17027                  jmp     near ptr sub_15B30 ;~ 0715:0D03

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_16430: 	goto sub_16430;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_16436(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_16436:
    _begin:
cs=0x715;eip=0x000d06; 	T(ax = 0x0AB;);	// 17035                  mov     ax, 0ABh ; '
cs=0x715;eip=0x000d09; 	J(return sub_15b30(0, _state););	// 17036                  jmp     near ptr sub_15B30 ;~ 0715:0D09

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_16436: 	goto sub_16436;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg003_d0c_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg003_d0c_proc:
    _begin:
cs=0x715;eip=0x000d0c; 	T(ax = 0x0AD;);	// 17040                  mov     ax, 0ADh ; '
cs=0x715;eip=0x000d0f; 	J(return sub_15b30(0, _state););	// 17041                  jmp     near ptr sub_15B30 ;~ 0715:0D0F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg003_d0c_proc: 	goto seg003_d0c_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_16442(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_16442:
    _begin:
cs=0x715;eip=0x000d12; 	T(ax = 0x0AE;);	// 17047                  mov     ax, 0AEh ; '
cs=0x715;eip=0x000d15; 	J(return sub_15b30(0, _state););	// 17048                  jmp     near ptr sub_15B30 ;~ 0715:0D15

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_16442: 	goto sub_16442;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg003_d18_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg003_d18_proc:
    _begin:
cs=0x715;eip=0x000d18; 	T(ax = 0x0AF;);	// 17052                  mov     ax, 0AFh ; '
cs=0x715;eip=0x000d1b; 	J(return sub_15b30(0, _state););	// 17053                  jmp     near ptr sub_15B30 ;~ 0715:0D1B
ret_715_d1e:
	// 5272 
cs=0x715;eip=0x000d1e; 	T(ax = 0x0B0;);	// 17055                  mov     ax, 0B0h ; '
cs=0x715;eip=0x000d21; 	J(return sub_15b30(0, _state););	// 17056                  jmp     near ptr sub_15B30 ;~ 0715:0D21

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_715_d1e: 	goto ret_715_d1e;
        case m2c::kseg003_d18_proc: 	goto seg003_d18_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_16454(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_16454:
    _begin:
cs=0x715;eip=0x000d24; 	T(ax = 0x0B1;);	// 17062                  mov     ax, 0B1h ; '
cs=0x715;eip=0x000d27; 	J(return sub_15b30(0, _state););	// 17063                  jmp     near ptr sub_15B30 ;~ 0715:0D27

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_16454: 	goto sub_16454;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg003_d2a_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg003_d2a_proc:
    _begin:
cs=0x715;eip=0x000d2a; 	T(ax = 0x0B2;);	// 17067                  mov     ax, 0B2h ; '
cs=0x715;eip=0x000d2d; 	J(return sub_15b30(0, _state););	// 17068                  jmp     near ptr sub_15B30 ;~ 0715:0D2D
ret_715_d30:
	// 5273 
cs=0x715;eip=0x000d30; 	T(ax = 0x0B3;);	// 17070                  mov     ax, 0B3h ; '
cs=0x715;eip=0x000d33; 	J(return sub_15b30(0, _state););	// 17071                  jmp     near ptr sub_15B30 ;~ 0715:0D33
ret_715_d36:
	// 5274 
cs=0x715;eip=0x000d36; 	T(ax = 0x0B4;);	// 17073                  mov     ax, 0B4h ; '
cs=0x715;eip=0x000d39; 	J(return sub_15b30(0, _state););	// 17074                  jmp     near ptr sub_15B30 ;~ 0715:0D39
ret_715_d3c:
	// 5275 
cs=0x715;eip=0x000d3c; 	T(ax = 0x0B5;);	// 17076                  mov     ax, 0B5h ; '
cs=0x715;eip=0x000d3f; 	J(return sub_15b30(0, _state););	// 17077                  jmp     near ptr sub_15B30 ;~ 0715:0D3F
ret_715_d42:
	// 5276 
cs=0x715;eip=0x000d42; 	T(ax = 0x0B6;);	// 17079                  mov     ax, 0B6h ; '
cs=0x715;eip=0x000d45; 	J(return sub_15b30(0, _state););	// 17080                  jmp     near ptr sub_15B30 ;~ 0715:0D45
ret_715_d48:
	// 5277 
cs=0x715;eip=0x000d48; 	T(ax = 0x0B7;);	// 17082                  mov     ax, 0B7h ; '
cs=0x715;eip=0x000d4b; 	J(return sub_15b30(0, _state););	// 17083                  jmp     near ptr sub_15B30 ;~ 0715:0D4B
ret_715_d4e:
	// 5278 
cs=0x715;eip=0x000d4e; 	T(ax = 0x0B9;);	// 17085                  mov     ax, 0B9h ; '
cs=0x715;eip=0x000d51; 	J(return sub_15b30(0, _state););	// 17086                  jmp     near ptr sub_15B30 ;~ 0715:0D51
ret_715_d54:
	// 5279 
cs=0x715;eip=0x000d54; 	T(ax = 0x0BA;);	// 17088                  mov     ax, 0BAh ; '
cs=0x715;eip=0x000d57; 	J(return sub_15b30(0, _state););	// 17089                  jmp     near ptr sub_15B30 ;~ 0715:0D57
ret_715_d5a:
	// 5280 
cs=0x715;eip=0x000d5a; 	T(ax = 0x0BB;);	// 17091                  mov     ax, 0BBh ; '
cs=0x715;eip=0x000d5d; 	J(return sub_15b30(0, _state););	// 17092                  jmp     near ptr sub_15B30 ;~ 0715:0D5D
ret_715_d60:
	// 5281 
cs=0x715;eip=0x000d60; 	T(ax = 0x0BC;);	// 17094                  mov     ax, 0BCh ; '
cs=0x715;eip=0x000d63; 	J(return sub_15b30(0, _state););	// 17095                  jmp     near ptr sub_15B30 ;~ 0715:0D63
ret_715_d66:
	// 5282 
cs=0x715;eip=0x000d66; 	T(ax = 0x0BD;);	// 17097                  mov     ax, 0BDh ; '
cs=0x715;eip=0x000d69; 	J(return sub_15b30(0, _state););	// 17098                  jmp     near ptr sub_15B30 ;~ 0715:0D69
ret_715_d6c:
	// 5283 
cs=0x715;eip=0x000d6c; 	T(ax = 0x0BE;);	// 17100                  mov     ax, 0BEh ; '
cs=0x715;eip=0x000d6f; 	J(return sub_15b30(0, _state););	// 17101                  jmp     near ptr sub_15B30 ;~ 0715:0D6F
ret_715_d72:
	// 5284 
cs=0x715;eip=0x000d72; 	T(ax = 0x0BF;);	// 17103                  mov     ax, 0BFh ; '
cs=0x715;eip=0x000d75; 	J(return sub_15b30(0, _state););	// 17104                  jmp     near ptr sub_15B30 ;~ 0715:0D75
ret_715_d78:
	// 5285 
cs=0x715;eip=0x000d78; 	T(ax = 0x0C0;);	// 17106                  mov     ax, 0C0h ; '
cs=0x715;eip=0x000d7b; 	J(return sub_15b30(0, _state););	// 17107                  jmp     near ptr sub_15B30 ;~ 0715:0D7B
ret_715_d7e:
	// 5286 
cs=0x715;eip=0x000d7e; 	T(ax = 0x0C1;);	// 17109                  mov     ax, 0C1h ; '
cs=0x715;eip=0x000d81; 	J(return sub_15b30(0, _state););	// 17110                  jmp     near ptr sub_15B30 ;~ 0715:0D81
ret_715_d84:
	// 5287 
cs=0x715;eip=0x000d84; 	T(ax = 0x0C2;);	// 17112                  mov     ax, 0C2h ; '
cs=0x715;eip=0x000d87; 	J(return sub_15b30(0, _state););	// 17113                  jmp     near ptr sub_15B30 ;~ 0715:0D87

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_715_d30: 	goto ret_715_d30;
        case m2c::kret_715_d36: 	goto ret_715_d36;
        case m2c::kret_715_d3c: 	goto ret_715_d3c;
        case m2c::kret_715_d42: 	goto ret_715_d42;
        case m2c::kret_715_d48: 	goto ret_715_d48;
        case m2c::kret_715_d4e: 	goto ret_715_d4e;
        case m2c::kret_715_d54: 	goto ret_715_d54;
        case m2c::kret_715_d5a: 	goto ret_715_d5a;
        case m2c::kret_715_d60: 	goto ret_715_d60;
        case m2c::kret_715_d66: 	goto ret_715_d66;
        case m2c::kret_715_d6c: 	goto ret_715_d6c;
        case m2c::kret_715_d72: 	goto ret_715_d72;
        case m2c::kret_715_d78: 	goto ret_715_d78;
        case m2c::kret_715_d7e: 	goto ret_715_d7e;
        case m2c::kret_715_d84: 	goto ret_715_d84;
        case m2c::kseg003_d2a_proc: 	goto seg003_d2a_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_165b8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_165b8:
    _begin:
cs=0x715;eip=0x000e88; 	X(PUSH(ds));	// 17398                  push    ds ;~ 0715:0E88
cs=0x715;eip=0x000e89; 	X(PUSH(si));	// 17399                  push    si ;~ 0715:0E89
cs=0x715;eip=0x000e8a; 	X(PUSH(di));	// 17400                  push    di ;~ 0715:0E8A
cs=0x715;eip=0x000e8b; 	T(TEST(*(dw*)(&byte_16566), 8));	// 17401                  test    word ptr cs:byte_16566, 8 ;~ 0715:0E8B
cs=0x715;eip=0x000e92; 	J(JZ(loc_165eb));	// 17402                  jz      short loc_165EB ;~ 0715:0E92
cs=0x715;eip=0x000e94; 	T(CMP(word_1573e, 0));	// 17403                  cmp     cs:word_1573E, 0 ;~ 0715:0E94
cs=0x715;eip=0x000e9a; 	J(JZ(loc_165eb));	// 17404                  jz      short loc_165EB ;~ 0715:0E9A
cs=0x715;eip=0x000e9c; 	T(CMP(*(dw*)(&byte_165b6), 0));	// 17405                  cmp     word ptr cs:byte_165B6, 0 ;~ 0715:0E9C
cs=0x715;eip=0x000ea2; 	J(JZ(loc_165eb));	// 17406                  jz      short loc_165EB ;~ 0715:0EA2
cs=0x715;eip=0x000ea4; 	X(PUSH(cs));	// 17407                  push    cs ;~ 0715:0EA4
cs=0x715;eip=0x000ea5; 	J(CALL(sub_15ca8,0));	// 17408                  call    sub_15CA8 ;~ 0715:0EA5
cs=0x715;eip=0x000ea8; 	X(*(dw*)(&byte_165b6) = 0;);	// 17409                  mov     word ptr cs:byte_165B6, 0 ;~ 0715:0EA8
cs=0x715;eip=0x000eaf; 	J(JMP(loc_165eb));	// 17410                  jmp     short loc_165EB ;~ 0715:0EAF
ret_715_eb1:
	// 5288 
cs=0x715;eip=0x000eb1; 	T(ax = 0x693;);	// 17412                  mov     ax, 693h ;~ 0715:0EB1
cs=0x715;eip=0x000eb4; 	T(dx = *(dw*)(&byte_15860););	// 17413                  mov     dx, word ptr cs:byte_15860 ;~ 0715:0EB4
cs=0x715;eip=0x000eb9; 	S(_INT(0x66));	// 17414                  int     66h             ; reserved for user interrupt ;~ 0715:0EB9
loc_165eb:
	// 5289 
cs=0x715;eip=0x000ebb; 	X(POP(di));	// 17418                  pop     di ;~ 0715:0EBB
cs=0x715;eip=0x000ebc; 	X(POP(si));	// 17419                  pop     si ;~ 0715:0EBC
cs=0x715;eip=0x000ebd; 	X(POP(ds));	// 17420                  pop     ds ;~ 0715:0EBD
cs=0x715;eip=0x000ebe; 	J(RETF(0));	// 17421                  retf ;~ 0715:0EBE

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_165eb: 	goto loc_165eb;
        case m2c::kret_715_eb1: 	goto ret_715_eb1;
        case m2c::ksub_165b8: 	goto sub_165b8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_165ef(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_165ef:
    _begin:
cs=0x715;eip=0x000ebf; 	X(PUSH(ds));	// 17430                  push    ds ;~ 0715:0EBF
cs=0x715;eip=0x000ec0; 	X(PUSH(si));	// 17431                  push    si ;~ 0715:0EC0
cs=0x715;eip=0x000ec1; 	X(PUSH(di));	// 17432                  push    di ;~ 0715:0EC1
cs=0x715;eip=0x000ec2; 	T(TEST(*(dw*)(&byte_16566), 8));	// 17433                  test    word ptr cs:byte_16566, 8 ;~ 0715:0EC2
cs=0x715;eip=0x000ec9; 	J(JZ(loc_16622));	// 17434                  jz      short loc_16622 ;~ 0715:0EC9
cs=0x715;eip=0x000ecb; 	T(CMP(word_1573e, 0));	// 17435                  cmp     cs:word_1573E, 0 ;~ 0715:0ECB
cs=0x715;eip=0x000ed1; 	J(JZ(loc_16622));	// 17436                  jz      short loc_16622 ;~ 0715:0ED1
cs=0x715;eip=0x000ed3; 	T(CMP(*(dw*)(&byte_165b6), 0));	// 17437                  cmp     word ptr cs:byte_165B6, 0 ;~ 0715:0ED3
cs=0x715;eip=0x000ed9; 	J(JNZ(loc_16622));	// 17438                  jnz     short loc_16622 ;~ 0715:0ED9
cs=0x715;eip=0x000edb; 	X(PUSH(cs));	// 17439                  push    cs ;~ 0715:0EDB
cs=0x715;eip=0x000edc; 	J(CALL(sub_1614b,0));	// 17440                  call    sub_1614B ;~ 0715:0EDC
cs=0x715;eip=0x000edf; 	X(PUSH(ax));	// 17441                  push    ax ;~ 0715:0EDF
cs=0x715;eip=0x000ee0; 	X(PUSH(cs));	// 17442                  push    cs ;~ 0715:0EE0
cs=0x715;eip=0x000ee1; 	J(CALL(sub_15cd8,0));	// 17443                  call    sub_15CD8 ;~ 0715:0EE1
cs=0x715;eip=0x000ee4; 	T(ADD(sp, 2));	// 17444                  add     sp, 2 ;~ 0715:0EE4
cs=0x715;eip=0x000ee7; 	X(PUSH(cs));	// 17445                  push    cs ;~ 0715:0EE7
cs=0x715;eip=0x000ee8; 	J(CALL(sub_15c5c,0));	// 17446                  call    sub_15C5C ;~ 0715:0EE8
cs=0x715;eip=0x000eeb; 	X(*(dw*)(&byte_165b6) = 1;);	// 17447                  mov     word ptr cs:byte_165B6, 1 ;~ 0715:0EEB
loc_16622:
	// 5290 
cs=0x715;eip=0x000ef2; 	X(POP(di));	// 17451                  pop     di ;~ 0715:0EF2
cs=0x715;eip=0x000ef3; 	X(POP(si));	// 17452                  pop     si ;~ 0715:0EF3
cs=0x715;eip=0x000ef4; 	X(POP(ds));	// 17453                  pop     ds ;~ 0715:0EF4
cs=0x715;eip=0x000ef5; 	J(RETF(0));	// 17454                  retf ;~ 0715:0EF5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_16622: 	goto loc_16622;
        case m2c::ksub_165ef: 	goto sub_165ef;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg003_ef6_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg003_ef6_proc:
    _begin:
cs=0x715;eip=0x000ef6; 	X(PUSH(bp));	// 17458                  push    bp ;~ 0715:0EF6
cs=0x715;eip=0x000ef7; 	T(bp = sp;);	// 17459                  mov     bp, sp ;~ 0715:0EF7
cs=0x715;eip=0x000ef9; 	X(PUSH(ds));	// 17460                  push    ds ;~ 0715:0EF9
cs=0x715;eip=0x000efa; 	X(PUSH(si));	// 17461                  push    si ;~ 0715:0EFA
cs=0x715;eip=0x000efb; 	X(PUSH(di));	// 17462                  push    di ;~ 0715:0EFB
cs=0x715;eip=0x000efc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0C))));	// 17463                  mov     ax, [bp+0Ch] ;~ 0715:0EFC
cs=0x715;eip=0x000eff; 	T(dx = 0;);	// 17464                  mov     dx, 0 ;~ 0715:0EFF
cs=0x715;eip=0x000f02; 	T(SHL(ax, 1));	// 17465                  shl     ax, 1 ;~ 0715:0F02
cs=0x715;eip=0x000f04; 	T(RCL(dx, 1));	// 17466                  rcl     dx, 1 ;~ 0715:0F04
cs=0x715;eip=0x000f06; 	T(SHL(ax, 1));	// 17467                  shl     ax, 1 ;~ 0715:0F06
cs=0x715;eip=0x000f08; 	T(RCL(dx, 1));	// 17468                  rcl     dx, 1 ;~ 0715:0F08
cs=0x715;eip=0x000f0a; 	T(SHL(ax, 1));	// 17469                  shl     ax, 1 ;~ 0715:0F0A
cs=0x715;eip=0x000f0c; 	T(RCL(dx, 1));	// 17470                  rcl     dx, 1 ;~ 0715:0F0C
cs=0x715;eip=0x000f0e; 	T(SHL(ax, 1));	// 17471                  shl     ax, 1 ;~ 0715:0F0E
cs=0x715;eip=0x000f10; 	T(RCL(dx, 1));	// 17472                  rcl     dx, 1 ;~ 0715:0F10
cs=0x715;eip=0x000f12; 	T(ADD(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 17473                  add     ax, [bp+0Ah] ;~ 0715:0F12
cs=0x715;eip=0x000f15; 	T(ADC(dx, 0));	// 17474                  adc     dx, 0 ;~ 0715:0F15
cs=0x715;eip=0x000f18; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 17475                  mov     bx, [bp+8] ;~ 0715:0F18
cs=0x715;eip=0x000f1b; 	T(cx = 0;);	// 17476                  mov     cx, 0 ;~ 0715:0F1B
cs=0x715;eip=0x000f1e; 	T(SHL(bx, 1));	// 17477                  shl     bx, 1 ;~ 0715:0F1E
cs=0x715;eip=0x000f20; 	T(RCL(cx, 1));	// 17478                  rcl     cx, 1 ;~ 0715:0F20
cs=0x715;eip=0x000f22; 	T(SHL(bx, 1));	// 17479                  shl     bx, 1 ;~ 0715:0F22
cs=0x715;eip=0x000f24; 	T(RCL(cx, 1));	// 17480                  rcl     cx, 1 ;~ 0715:0F24
cs=0x715;eip=0x000f26; 	T(SHL(bx, 1));	// 17481                  shl     bx, 1 ;~ 0715:0F26
cs=0x715;eip=0x000f28; 	T(RCL(cx, 1));	// 17482                  rcl     cx, 1 ;~ 0715:0F28
cs=0x715;eip=0x000f2a; 	T(SHL(bx, 1));	// 17483                  shl     bx, 1 ;~ 0715:0F2A
cs=0x715;eip=0x000f2c; 	T(RCL(cx, 1));	// 17484                  rcl     cx, 1 ;~ 0715:0F2C
cs=0x715;eip=0x000f2e; 	T(ADD(bx, *(dw*)(raddr(ss,bp+6))));	// 17485                  add     bx, [bp+6] ;~ 0715:0F2E
cs=0x715;eip=0x000f31; 	T(ADC(cx, 0));	// 17486                  adc     cx, 0 ;~ 0715:0F31
cs=0x715;eip=0x000f34; 	T(SUB(ax, bx));	// 17487                  sub     ax, bx ;~ 0715:0F34
cs=0x715;eip=0x000f36; 	T(SBB(dx, cx));	// 17488                  sbb     dx, cx ;~ 0715:0F36
cs=0x715;eip=0x000f38; 	X(POP(di));	// 17489                  pop     di ;~ 0715:0F38
cs=0x715;eip=0x000f39; 	X(POP(si));	// 17490                  pop     si ;~ 0715:0F39
cs=0x715;eip=0x000f3a; 	X(POP(ds));	// 17491                  pop     ds ;~ 0715:0F3A
cs=0x715;eip=0x000f3b; 	X(POP(bp));	// 17492                  pop     bp ;~ 0715:0F3B
cs=0x715;eip=0x000f3c; 	J(RETF(0));	// 17493                  retf ;~ 0715:0F3C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg003_ef6_proc: 	goto seg003_ef6_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1666d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1666d:
    _begin:
cs=0x715;eip=0x000f3d; 	X(PUSH(ds));	// 17500                  push    ds ;~ 0715:0F3D
cs=0x715;eip=0x000f3e; 	X(PUSH(si));	// 17501                  push    si ;~ 0715:0F3E
cs=0x715;eip=0x000f3f; 	X(PUSH(di));	// 17502                  push    di ;~ 0715:0F3F
cs=0x715;eip=0x000f40; 	T(LDS(si, *(dd*)(&byte_1659e)));	// 17503                  lds     si, dword ptr cs:byte_1659E ;~ 0715:0F40
cs=0x715;eip=0x000f45; 	T(LODSB);	// 17504                  lodsb ;~ 0715:0F45
cs=0x715;eip=0x000f46; 	T(ah = 0;);	// 17505                  mov     ah, 0 ;~ 0715:0F46
cs=0x715;eip=0x000f48; 	X(POP(di));	// 17506                  pop     di ;~ 0715:0F48
cs=0x715;eip=0x000f49; 	X(POP(si));	// 17507                  pop     si ;~ 0715:0F49
cs=0x715;eip=0x000f4a; 	X(POP(ds));	// 17508                  pop     ds ;~ 0715:0F4A
cs=0x715;eip=0x000f4b; 	J(RETF(0));	// 17509                  retf ;~ 0715:0F4B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1666d: 	goto sub_1666d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1667c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1667c:
    _begin:
cs=0x715;eip=0x000f4c; 	X(PUSH(ds));	// 17518                  push    ds ;~ 0715:0F4C
cs=0x715;eip=0x000f4d; 	X(PUSH(si));	// 17519                  push    si ;~ 0715:0F4D
cs=0x715;eip=0x000f4e; 	X(PUSH(di));	// 17520                  push    di ;~ 0715:0F4E
cs=0x715;eip=0x000f4f; 	T(LDS(si, *(dd*)(&byte_1659e)));	// 17521                  lds     si, dword ptr cs:byte_1659E ;~ 0715:0F4F
cs=0x715;eip=0x000f54; 	T(CMP(*(raddr(ds,si)), 4));	// 17522                  cmp     byte ptr [si], 4 ;~ 0715:0F54
cs=0x715;eip=0x000f57; 	T(ax = 0x0FFFF;);	// 17523                  mov     ax, 0FFFFh ;~ 0715:0F57
cs=0x715;eip=0x000f5a; 	J(JNZ(loc_1668f));	// 17524                  jnz     short loc_1668F ;~ 0715:0F5A
cs=0x715;eip=0x000f5c; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 17525                  mov     ax, [si+4] ;~ 0715:0F5C
loc_1668f:
	// 5291 
cs=0x715;eip=0x000f5f; 	X(POP(di));	// 17528                  pop     di ;~ 0715:0F5F
cs=0x715;eip=0x000f60; 	X(POP(si));	// 17529                  pop     si ;~ 0715:0F60
cs=0x715;eip=0x000f61; 	X(POP(ds));	// 17530                  pop     ds ;~ 0715:0F61
cs=0x715;eip=0x000f62; 	J(RETF(0));	// 17531                  retf ;~ 0715:0F62

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1668f: 	goto loc_1668f;
        case m2c::ksub_1667c: 	goto sub_1667c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_16693(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_16693:
    _begin:
#undef arg_0
#define arg_0 6
	// 17542 arg_0           = word ptr  6 ;~ 0715:0F63
cs=0x715;eip=0x000f63; 	X(PUSH(bp));	// 17544                  push    bp ;~ 0715:0F63
cs=0x715;eip=0x000f64; 	T(bp = sp;);	// 17545                  mov     bp, sp ;~ 0715:0F64
cs=0x715;eip=0x000f66; 	X(PUSH(ds));	// 17546                  push    ds ;~ 0715:0F66
cs=0x715;eip=0x000f67; 	X(PUSH(si));	// 17547                  push    si ;~ 0715:0F67
cs=0x715;eip=0x000f68; 	X(PUSH(di));	// 17548                  push    di ;~ 0715:0F68
cs=0x715;eip=0x000f69; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 17549                  mov     bx, [bp+arg_0] ;~ 0715:0F69
cs=0x715;eip=0x000f6c; 	T(bh = 0;);	// 17550                  mov     bh, 0 ;~ 0715:0F6C
cs=0x715;eip=0x000f6e; 	T(ax = 0x100;);	// 17551                  mov     ax, 100h ;~ 0715:0F6E
cs=0x715;eip=0x000f71; 	T(SUB(ax, bx));	// 17552                  sub     ax, bx ;~ 0715:0F71
cs=0x715;eip=0x000f73; 	X(PUSH(ax));	// 17553                  push    ax ;~ 0715:0F73
cs=0x715;eip=0x000f74; 	X(PUSH(bp));	// 17554                  push    bp ;~ 0715:0F74
cs=0x715;eip=0x000f75; 	T(bp = sp;);	// 17555                  mov     bp, sp ;~ 0715:0F75
cs=0x715;eip=0x000f77; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0));	// 17556                  mov     word ptr [bp+2], 0 ;~ 0715:0F77
cs=0x715;eip=0x000f7c; 	X(POP(bp));	// 17557                  pop     bp ;~ 0715:0F7C
cs=0x715;eip=0x000f7d; 	X(PUSH(ax));	// 17558                  push    ax ;~ 0715:0F7D
cs=0x715;eip=0x000f7e; 	X(PUSH(ax));	// 17559                  push    ax ;~ 0715:0F7E
cs=0x715;eip=0x000f7f; 	X(PUSH(bp));	// 17560                  push    bp ;~ 0715:0F7F
cs=0x715;eip=0x000f80; 	T(bp = sp;);	// 17561                  mov     bp, sp ;~ 0715:0F80
cs=0x715;eip=0x000f82; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x0F));	// 17562                  mov     word ptr [bp+2], 0Fh ;~ 0715:0F82
cs=0x715;eip=0x000f87; 	X(POP(bp));	// 17563                  pop     bp ;~ 0715:0F87
cs=0x715;eip=0x000f88; 	X(PUSH(ax));	// 17564                  push    ax ;~ 0715:0F88
cs=0x715;eip=0x000f89; 	X(PUSH(bp));	// 17565                  push    bp ;~ 0715:0F89
cs=0x715;eip=0x000f8a; 	T(bp = sp;);	// 17566                  mov     bp, sp ;~ 0715:0F8A
cs=0x715;eip=0x000f8c; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x4240));	// 17567                  mov     word ptr [bp+2], 4240h ;~ 0715:0F8C
cs=0x715;eip=0x000f91; 	X(POP(bp));	// 17568                  pop     bp ;~ 0715:0F91
cs=0x715;eip=0x000f92; 	X(PUSH(cs));	// 17569                  push    cs ;~ 0715:0F92
cs=0x715;eip=0x000f93; 	J(CALL(sub_15d2b,0));	// 17570                  call    near ptr sub_15D2B ;~ 0715:0F93
cs=0x715;eip=0x000f96; 	T(ADD(sp, 8));	// 17571                  add     sp, 8 ;~ 0715:0F96
cs=0x715;eip=0x000f99; 	X(POP(di));	// 17572                  pop     di ;~ 0715:0F99
cs=0x715;eip=0x000f9a; 	X(POP(si));	// 17573                  pop     si ;~ 0715:0F9A
cs=0x715;eip=0x000f9b; 	X(POP(ds));	// 17574                  pop     ds ;~ 0715:0F9B
cs=0x715;eip=0x000f9c; 	X(POP(bp));	// 17575                  pop     bp ;~ 0715:0F9C
cs=0x715;eip=0x000f9d; 	J(RETF(0));	// 17576                  retf ;~ 0715:0F9D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_16693: 	goto sub_16693;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_166ce(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_166ce:
    _begin:
#undef arg_0
#define arg_0 6
	// 17587 arg_0           = word ptr  6 ;~ 0715:0F9E
#undef arg_2
#define arg_2 8
	// 17588 arg_2           = dword ptr  8 ;~ 0715:0F9E
#undef arg_6
#define arg_6 0x0C
	// 17589 arg_6           = word ptr  0Ch ;~ 0715:0F9E
#undef arg_8
#define arg_8 0x0E
	// 17590 arg_8           = word ptr  0Eh ;~ 0715:0F9E
cs=0x715;eip=0x000f9e; 	X(PUSH(bp));	// 17592                  push    bp ;~ 0715:0F9E
cs=0x715;eip=0x000f9f; 	T(bp = sp;);	// 17593                  mov     bp, sp ;~ 0715:0F9F
cs=0x715;eip=0x000fa1; 	X(PUSH(ds));	// 17594                  push    ds ;~ 0715:0FA1
cs=0x715;eip=0x000fa2; 	X(PUSH(si));	// 17595                  push    si ;~ 0715:0FA2
cs=0x715;eip=0x000fa3; 	X(PUSH(di));	// 17596                  push    di ;~ 0715:0FA3
cs=0x715;eip=0x000fa4; 	T(TEST(*(dw*)(&byte_16566), 2));	// 17597                  test    word ptr cs:byte_16566, 2 ;~ 0715:0FA4
cs=0x715;eip=0x000fab; 	J(JNZ(loc_166e0));	// 17598                  jnz     short loc_166E0 ;~ 0715:0FAB
cs=0x715;eip=0x000fad; 	J(JMP(loc_1677c));	// 17599                  jmp     loc_1677C ;~ 0715:0FAD
loc_166e0:
	// 5292 
cs=0x715;eip=0x000fb0; 	X(*(dw*)(&byte_1657a) = offset(seg003,byte_165b2););	// 17603                  mov     word ptr cs:byte_1657A, offset byte_165B2 ;~ 0715:0FB0
cs=0x715;eip=0x000fb7; 	X(*(dw*)(&byte_1657c) = cs;);	// 17604                  mov     word ptr cs:byte_1657C, cs ;~ 0715:0FB7
cs=0x715;eip=0x000fbc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 17605                  mov     ax, [bp+arg_0] ;~ 0715:0FBC
cs=0x715;eip=0x000fbf; 	X(*(dw*)(&byte_1657e) = ax;);	// 17606                  mov     word ptr cs:byte_1657E, ax ;~ 0715:0FBF
cs=0x715;eip=0x000fc3; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_2))));	// 17607                  lds     si, [bp+arg_2] ;~ 0715:0FC3
loc_166f6:
	// 5293 
cs=0x715;eip=0x000fc6; 	X(*(dw*)(&byte_16574) = si;);	// 17610                  mov     word ptr cs:byte_16574, si ;~ 0715:0FC6
cs=0x715;eip=0x000fcb; 	X(*(dw*)(&byte_16576) = ds;);	// 17611                  mov     word ptr cs:byte_16576, ds ;~ 0715:0FCB
cs=0x715;eip=0x000fd0; 	T(CMP(*(dw*)(raddr(ss,bp+arg_8)), 0));	// 17612                  cmp     [bp+arg_8], 0 ;~ 0715:0FD0
cs=0x715;eip=0x000fd4; 	J(JA(loc_1670d));	// 17613                  ja      short loc_1670D ;~ 0715:0FD4
cs=0x715;eip=0x000fd6; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0x8000));	// 17614                  cmp     [bp+arg_6], 8000h ;~ 0715:0FD6
cs=0x715;eip=0x000fdb; 	J(JBE(loc_16768));	// 17615                  jbe     short loc_16768 ;~ 0715:0FDB
loc_1670d:
	// 5294 
cs=0x715;eip=0x000fdd; 	X(*(dw*)(&byte_16578) = 0x8000;);	// 17618                  mov     word ptr cs:byte_16578, 8000h ;~ 0715:0FDD
cs=0x715;eip=0x000fe4; 	X(PUSH(ds));	// 17619                  push    ds ;~ 0715:0FE4
cs=0x715;eip=0x000fe5; 	X(PUSH(si));	// 17620                  push    si ;~ 0715:0FE5
cs=0x715;eip=0x000fe6; 	X(PUSH(cs));	// 17621                  push    cs ;~ 0715:0FE6
cs=0x715;eip=0x000fe7; 	X(POP(ds));	// 17622                  pop     ds ;~ 0715:0FE7
cs=0x715;eip=0x000fe8; 	T(si = 0x0E44;);	// 17624                  mov     si, 0E44h ;~ 0715:0FE8
cs=0x715;eip=0x000feb; 	T(ax = 0x68A;);	// 17625                  mov     ax, 68Ah ;~ 0715:0FEB
cs=0x715;eip=0x000fee; 	S(_INT(0x66));	// 17626                  int     66h             ; reserved for user interrupt ;~ 0715:0FEE
cs=0x715;eip=0x000ff0; 	X(POP(si));	// 17627                  pop     si ;~ 0715:0FF0
cs=0x715;eip=0x000ff1; 	X(POP(ds));	// 17628                  pop     ds ;~ 0715:0FF1
cs=0x715;eip=0x000ff2; 	X(PUSH(bx));	// 17630                  push    bx ;~ 0715:0FF2
cs=0x715;eip=0x000ff3; 	X(PUSH(cx));	// 17631                  push    cx ;~ 0715:0FF3
cs=0x715;eip=0x000ff4; 	T(bx = ds;);	// 17632                  mov     bx, ds ;~ 0715:0FF4
cs=0x715;eip=0x000ff6; 	T(XOR(cx, cx));	// 17633                  xor     cx, cx ;~ 0715:0FF6
cs=0x715;eip=0x000ff8; 	T(SHL(bx, 1));	// 17634                  shl     bx, 1 ;~ 0715:0FF8
cs=0x715;eip=0x000ffa; 	T(RCL(cx, 1));	// 17635                  rcl     cx, 1 ;~ 0715:0FFA
cs=0x715;eip=0x000ffc; 	T(SHL(bx, 1));	// 17636                  shl     bx, 1 ;~ 0715:0FFC
cs=0x715;eip=0x000ffe; 	T(RCL(cx, 1));	// 17637                  rcl     cx, 1 ;~ 0715:0FFE
cs=0x715;eip=0x001000; 	T(SHL(bx, 1));	// 17638                  shl     bx, 1 ;~ 0715:1000
cs=0x715;eip=0x001002; 	T(RCL(cx, 1));	// 17639                  rcl     cx, 1 ;~ 0715:1002
cs=0x715;eip=0x001004; 	T(SHL(bx, 1));	// 17640                  shl     bx, 1 ;~ 0715:1004
cs=0x715;eip=0x001006; 	T(RCL(cx, 1));	// 17641                  rcl     cx, 1 ;~ 0715:1006
cs=0x715;eip=0x001008; 	T(ADD(bx, si));	// 17642                  add     bx, si ;~ 0715:1008
cs=0x715;eip=0x00100a; 	T(ADC(cx, 0));	// 17643                  adc     cx, 0 ;~ 0715:100A
cs=0x715;eip=0x00100d; 	T(ADD(bx, 0x8000));	// 17644                  add     bx, 8000h ;~ 0715:100D
cs=0x715;eip=0x001011; 	T(ADC(cx, 0));	// 17645                  adc     cx, 0 ;~ 0715:1011
cs=0x715;eip=0x001014; 	T(si = bx;);	// 17646                  mov     si, bx ;~ 0715:1014
cs=0x715;eip=0x001016; 	T(AND(si, 0x0F));	// 17647                  and     si, 0Fh ;~ 0715:1016
cs=0x715;eip=0x001019; 	T(SHR(cx, 1));	// 17648                  shr     cx, 1 ;~ 0715:1019
cs=0x715;eip=0x00101b; 	T(RCR(bx, 1));	// 17649                  rcr     bx, 1 ;~ 0715:101B
cs=0x715;eip=0x00101d; 	T(SHR(cx, 1));	// 17650                  shr     cx, 1 ;~ 0715:101D
cs=0x715;eip=0x00101f; 	T(RCR(bx, 1));	// 17651                  rcr     bx, 1 ;~ 0715:101F
cs=0x715;eip=0x001021; 	T(SHR(cx, 1));	// 17652                  shr     cx, 1 ;~ 0715:1021
cs=0x715;eip=0x001023; 	T(RCR(bx, 1));	// 17653                  rcr     bx, 1 ;~ 0715:1023
cs=0x715;eip=0x001025; 	T(SHR(cx, 1));	// 17654                  shr     cx, 1 ;~ 0715:1025
cs=0x715;eip=0x001027; 	T(RCR(bx, 1));	// 17655                  rcr     bx, 1 ;~ 0715:1027
cs=0x715;eip=0x001029; 	T(ds = bx;);	// 17656                  mov     ds, bx ;~ 0715:1029
cs=0x715;eip=0x00102b; 	X(POP(cx));	// 17657                  pop     cx ;~ 0715:102B
cs=0x715;eip=0x00102c; 	X(POP(bx));	// 17658                  pop     bx ;~ 0715:102C
cs=0x715;eip=0x00102d; 	X(SUB(*(dw*)(raddr(ss,bp+arg_6)), 0x8000));	// 17659                  sub     [bp+arg_6], 8000h ;~ 0715:102D
cs=0x715;eip=0x001032; 	X(SBB(*(dw*)(raddr(ss,bp+arg_8)), 0));	// 17660                  sbb     [bp+arg_8], 0 ;~ 0715:1032
cs=0x715;eip=0x001036; 	J(JMP(loc_166f6));	// 17661                  jmp     short loc_166F6 ;~ 0715:1036
loc_16768:
	// 5295 
cs=0x715;eip=0x001038; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_6))));	// 17665                  mov     cx, [bp+arg_6] ;~ 0715:1038
cs=0x715;eip=0x00103b; 	J(JCXZ(loc_1677c));	// 17666                  jcxz    short loc_1677C ;~ 0715:103B
cs=0x715;eip=0x00103d; 	X(*(dw*)(&byte_16578) = cx;);	// 17667                  mov     word ptr cs:byte_16578, cx ;~ 0715:103D
cs=0x715;eip=0x001042; 	X(PUSH(cs));	// 17668                  push    cs ;~ 0715:1042
cs=0x715;eip=0x001043; 	X(POP(ds));	// 17669                  pop     ds ;~ 0715:1043
cs=0x715;eip=0x001044; 	T(si = 0x0E44;);	// 17671                  mov     si, 0E44h ;~ 0715:1044
cs=0x715;eip=0x001047; 	T(ax = 0x68A;);	// 17672                  mov     ax, 68Ah ;~ 0715:1047
cs=0x715;eip=0x00104a; 	S(_INT(0x66));	// 17673                  int     66h             ; reserved for user interrupt ;~ 0715:104A
loc_1677c:
	// 5296 
cs=0x715;eip=0x00104c; 	X(POP(di));	// 17677                  pop     di ;~ 0715:104C
cs=0x715;eip=0x00104d; 	X(POP(si));	// 17678                  pop     si ;~ 0715:104D
cs=0x715;eip=0x00104e; 	X(POP(ds));	// 17679                  pop     ds ;~ 0715:104E
cs=0x715;eip=0x00104f; 	X(POP(bp));	// 17681                  pop     bp ;~ 0715:104F
cs=0x715;eip=0x001050; 	J(RETF(0));	// 17682                  retf ;~ 0715:1050

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_166e0: 	goto loc_166e0;
        case m2c::kloc_166f6: 	goto loc_166f6;
        case m2c::kloc_1670d: 	goto loc_1670d;
        case m2c::kloc_16768: 	goto loc_16768;
        case m2c::kloc_1677c: 	goto loc_1677c;
        case m2c::ksub_166ce: 	goto sub_166ce;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_16781(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_16781:
    _begin:
#undef arg_0
#define arg_0 6
	// 17693 arg_0           = word ptr  6 ;~ 0715:1051
#undef arg_2
#define arg_2 8
	// 17694 arg_2           = word ptr  8 ;~ 0715:1051
cs=0x715;eip=0x001051; 	X(PUSH(bp));	// 17696                  push    bp ;~ 0715:1051
cs=0x715;eip=0x001052; 	T(bp = sp;);	// 17697                  mov     bp, sp ;~ 0715:1052
cs=0x715;eip=0x001054; 	X(PUSH(ds));	// 17698                  push    ds ;~ 0715:1054
cs=0x715;eip=0x001055; 	X(PUSH(si));	// 17699                  push    si ;~ 0715:1055
cs=0x715;eip=0x001056; 	X(PUSH(di));	// 17700                  push    di ;~ 0715:1056
cs=0x715;eip=0x001057; 	T(ax = cs;);	// 17701                  mov     ax, cs ;~ 0715:1057
cs=0x715;eip=0x001059; 	T(ds = ax;);	// 17702                  mov     ds, ax ;~ 0715:1059
cs=0x715;eip=0x00105b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 17704                  mov     bx, [bp+arg_0] ;~ 0715:105B
cs=0x715;eip=0x00105e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 17705                  mov     dx, [bp+arg_2] ;~ 0715:105E
cs=0x715;eip=0x001061; 	T(ax = 0x68E;);	// 17706                  mov     ax, 68Eh ;~ 0715:1061
cs=0x715;eip=0x001064; 	S(_INT(0x66));	// 17707                  int     66h             ; reserved for user interrupt ;~ 0715:1064
cs=0x715;eip=0x001066; 	X(POP(di));	// 17708                  pop     di ;~ 0715:1066
cs=0x715;eip=0x001067; 	X(POP(si));	// 17709                  pop     si ;~ 0715:1067
cs=0x715;eip=0x001068; 	X(POP(ds));	// 17710                  pop     ds ;~ 0715:1068
cs=0x715;eip=0x001069; 	X(POP(bp));	// 17712                  pop     bp ;~ 0715:1069
cs=0x715;eip=0x00106a; 	J(RETF(0));	// 17713                  retf ;~ 0715:106A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_16781: 	goto sub_16781;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg003_106b_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg003_106b_proc:
    _begin:
cs=0x715;eip=0x00106b; 	T(CLD);	// 17717                  cld ;~ 0715:106B
cs=0x715;eip=0x00106c; 	X(PUSH(cs));	// 17718                  push    cs ;~ 0715:106C
cs=0x715;eip=0x00106d; 	J(CALL(sub_165ef,0));	// 17719                  call    near ptr sub_165EF ;~ 0715:106D
cs=0x715;eip=0x001070; 	T(ax = *(dw*)(&byte_165ac););	// 17720                  mov     ax, word ptr cs:byte_165AC ;~ 0715:1070
cs=0x715;eip=0x001074; 	T(OR(ax, *(dw*)(&byte_165ae)));	// 17721                  or      ax, word ptr cs:byte_165AE ;~ 0715:1074
cs=0x715;eip=0x001079; 	J(JZ(loc_167b1));	// 17722                  jz      short loc_167B1 ;~ 0715:1079
cs=0x715;eip=0x00107b; 	X(PUSH(cs));	// 17723                  push    cs ;~ 0715:107B
cs=0x715;eip=0x00107c; 	J(CALL(sub_16a3f,0));	// 17724                  call    near ptr sub_16A3F ;~ 0715:107C
cs=0x715;eip=0x00107f; 	J(JMP(locret_167b9));	// 17725                  jmp     short locret_167B9 ;~ 0715:107F
loc_167b1:
	// 5297 
cs=0x715;eip=0x001081; 	X(PUSH(cs));	// 17729                  push    cs ;~ 0715:1081
cs=0x715;eip=0x001082; 	J(CALL(sub_167ee,0));	// 17730                  call    near ptr sub_167EE ;~ 0715:1082
cs=0x715;eip=0x001085; 	X(PUSH(cs));	// 17731                  push    cs ;~ 0715:1085
cs=0x715;eip=0x001086; 	J(CALL(sub_1686a,0));	// 17732                  call    near ptr sub_1686A ;~ 0715:1086
locret_167b9:
	// 5298 
cs=0x715;eip=0x001089; 	J(RETF(0));	// 17735                  retf ;~ 0715:1089
ret_715_108a:
	// 5299 
cs=0x715;eip=0x00108a; 	T(CLD);	// 17737                  cld ;~ 0715:108A
cs=0x715;eip=0x00108b; 	X(PUSH(cs));	// 17738                  push    cs ;~ 0715:108B
cs=0x715;eip=0x00108c; 	J(CALL(sub_165ef,0));	// 17739                  call    near ptr sub_165EF ;~ 0715:108C
cs=0x715;eip=0x00108f; 	T(ax = *(dw*)(&byte_165ac););	// 17740                  mov     ax, word ptr cs:byte_165AC ;~ 0715:108F
cs=0x715;eip=0x001093; 	T(OR(ax, *(dw*)(&byte_165ae)));	// 17741                  or      ax, word ptr cs:byte_165AE ;~ 0715:1093
cs=0x715;eip=0x001098; 	J(JZ(loc_167d0));	// 17742                  jz      short loc_167D0 ;~ 0715:1098
cs=0x715;eip=0x00109a; 	X(PUSH(cs));	// 17743                  push    cs ;~ 0715:109A
cs=0x715;eip=0x00109b; 	J(CALL(sub_16a3f,0));	// 17744                  call    near ptr sub_16A3F ;~ 0715:109B
cs=0x715;eip=0x00109e; 	J(JMP(locret_167ed));	// 17745                  jmp     short locret_167ED ;~ 0715:109E
loc_167d0:
	// 5300 
cs=0x715;eip=0x0010a0; 	T(bx = *(dw*)(&byte_1659c););	// 17749                  mov     bx, word ptr cs:byte_1659C ;~ 0715:10A0
cs=0x715;eip=0x0010a5; 	X(MOV(*(dw*)(raddr(cs,bx+0x0E64)), 3));	// 17750                  mov     word ptr cs:[bx+0E64h], 3 ;~ 0715:10A5
cs=0x715;eip=0x0010ac; 	X(PUSH(cs));	// 17751                  push    cs ;~ 0715:10AC
cs=0x715;eip=0x0010ad; 	J(CALL(sub_16843,0));	// 17752                  call    near ptr sub_16843 ;~ 0715:10AD
cs=0x715;eip=0x0010b0; 	T(CMP(ax, 0x0FFFF));	// 17753                  cmp     ax, 0FFFFh ;~ 0715:10B0
cs=0x715;eip=0x0010b3; 	J(JZ(locret_167ed));	// 17754                  jz      short locret_167ED ;~ 0715:10B3
cs=0x715;eip=0x0010b5; 	X(PUSH(ax));	// 17755                  push    ax ;~ 0715:10B5
cs=0x715;eip=0x0010b6; 	X(PUSH(cs));	// 17756                  push    cs ;~ 0715:10B6
cs=0x715;eip=0x0010b7; 	J(CALL(sub_169c1,0));	// 17757                  call    near ptr sub_169C1 ;~ 0715:10B7
cs=0x715;eip=0x0010ba; 	T(ADD(sp, 2));	// 17758                  add     sp, 2 ;~ 0715:10BA
locret_167ed:
	// 5301 
cs=0x715;eip=0x0010bd; 	J(RETF(0));	// 17762                  retf ;~ 0715:10BD

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_167b1: 	goto loc_167b1;
        case m2c::kloc_167d0: 	goto loc_167d0;
        case m2c::klocret_167b9: 	goto locret_167b9;
        case m2c::klocret_167ed: 	goto locret_167ed;
        case m2c::kret_715_108a: 	goto ret_715_108a;
        case m2c::kseg003_106b_proc: 	goto seg003_106b_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_167ee(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_167ee:
    _begin:
cs=0x715;eip=0x0010be; 	X(PUSH(ds));	// 17769                  push    ds ;~ 0715:10BE
cs=0x715;eip=0x0010bf; 	X(PUSH(si));	// 17770                  push    si ;~ 0715:10BF
cs=0x715;eip=0x0010c0; 	X(PUSH(di));	// 17771                  push    di ;~ 0715:10C0
cs=0x715;eip=0x0010c1; 	T(LDS(si, *(dd*)(&byte_1659e)));	// 17772                  lds     si, dword ptr cs:byte_1659E ;~ 0715:10C1
cs=0x715;eip=0x0010c6; 	T(INC(si));	// 17773                  inc     si ;~ 0715:10C6
cs=0x715;eip=0x0010c7; 	T(LODSW);	// 17774                  lodsw ;~ 0715:10C7
cs=0x715;eip=0x0010c8; 	T(MOV(dl, *(raddr(ds,si))));	// 17775                  mov     dl, [si] ;~ 0715:10C8
cs=0x715;eip=0x0010ca; 	T(dh = 0;);	// 17776                  mov     dh, 0 ;~ 0715:10CA
cs=0x715;eip=0x0010cc; 	T(INC(si));	// 17777                  inc     si ;~ 0715:10CC
cs=0x715;eip=0x0010cd; 	X(PUSH(bx));	// 17778                  push    bx ;~ 0715:10CD
cs=0x715;eip=0x0010ce; 	X(PUSH(cx));	// 17779                  push    cx ;~ 0715:10CE
cs=0x715;eip=0x0010cf; 	T(bx = ds;);	// 17780                  mov     bx, ds ;~ 0715:10CF
cs=0x715;eip=0x0010d1; 	T(XOR(cx, cx));	// 17781                  xor     cx, cx ;~ 0715:10D1
cs=0x715;eip=0x0010d3; 	T(SHL(bx, 1));	// 17782                  shl     bx, 1 ;~ 0715:10D3
cs=0x715;eip=0x0010d5; 	T(RCL(cx, 1));	// 17783                  rcl     cx, 1 ;~ 0715:10D5
cs=0x715;eip=0x0010d7; 	T(SHL(bx, 1));	// 17784                  shl     bx, 1 ;~ 0715:10D7
cs=0x715;eip=0x0010d9; 	T(RCL(cx, 1));	// 17785                  rcl     cx, 1 ;~ 0715:10D9
cs=0x715;eip=0x0010db; 	T(SHL(bx, 1));	// 17786                  shl     bx, 1 ;~ 0715:10DB
cs=0x715;eip=0x0010dd; 	T(RCL(cx, 1));	// 17787                  rcl     cx, 1 ;~ 0715:10DD
cs=0x715;eip=0x0010df; 	T(SHL(bx, 1));	// 17788                  shl     bx, 1 ;~ 0715:10DF
cs=0x715;eip=0x0010e1; 	T(RCL(cx, 1));	// 17789                  rcl     cx, 1 ;~ 0715:10E1
cs=0x715;eip=0x0010e3; 	T(ADD(bx, si));	// 17790                  add     bx, si ;~ 0715:10E3
cs=0x715;eip=0x0010e5; 	T(ADC(cx, 0));	// 17791                  adc     cx, 0 ;~ 0715:10E5
cs=0x715;eip=0x0010e8; 	T(ADD(bx, ax));	// 17792                  add     bx, ax ;~ 0715:10E8
cs=0x715;eip=0x0010ea; 	T(ADC(cx, dx));	// 17793                  adc     cx, dx ;~ 0715:10EA
cs=0x715;eip=0x0010ec; 	T(si = bx;);	// 17794                  mov     si, bx ;~ 0715:10EC
cs=0x715;eip=0x0010ee; 	T(AND(si, 0x0F));	// 17795                  and     si, 0Fh ;~ 0715:10EE
cs=0x715;eip=0x0010f1; 	T(SHR(cx, 1));	// 17796                  shr     cx, 1 ;~ 0715:10F1
cs=0x715;eip=0x0010f3; 	T(RCR(bx, 1));	// 17797                  rcr     bx, 1 ;~ 0715:10F3
cs=0x715;eip=0x0010f5; 	T(SHR(cx, 1));	// 17798                  shr     cx, 1 ;~ 0715:10F5
cs=0x715;eip=0x0010f7; 	T(RCR(bx, 1));	// 17799                  rcr     bx, 1 ;~ 0715:10F7
cs=0x715;eip=0x0010f9; 	T(SHR(cx, 1));	// 17800                  shr     cx, 1 ;~ 0715:10F9
cs=0x715;eip=0x0010fb; 	T(RCR(bx, 1));	// 17801                  rcr     bx, 1 ;~ 0715:10FB
cs=0x715;eip=0x0010fd; 	T(SHR(cx, 1));	// 17802                  shr     cx, 1 ;~ 0715:10FD
cs=0x715;eip=0x0010ff; 	T(RCR(bx, 1));	// 17803                  rcr     bx, 1 ;~ 0715:10FF
cs=0x715;eip=0x001101; 	T(ds = bx;);	// 17804                  mov     ds, bx ;~ 0715:1101
cs=0x715;eip=0x001103; 	X(POP(cx));	// 17805                  pop     cx ;~ 0715:1103
cs=0x715;eip=0x001104; 	X(POP(bx));	// 17806                  pop     bx ;~ 0715:1104
cs=0x715;eip=0x001105; 	X(*(dw*)(&byte_1659e) = si;);	// 17807                  mov     word ptr cs:byte_1659E, si ;~ 0715:1105
cs=0x715;eip=0x00110a; 	X(*(dw*)(&byte_165a0) = ds;);	// 17808                  mov     word ptr cs:byte_165A0, ds ;~ 0715:110A
cs=0x715;eip=0x00110f; 	X(POP(di));	// 17809                  pop     di ;~ 0715:110F
cs=0x715;eip=0x001110; 	X(POP(si));	// 17810                  pop     si ;~ 0715:1110
cs=0x715;eip=0x001111; 	X(POP(ds));	// 17811                  pop     ds ;~ 0715:1111
cs=0x715;eip=0x001112; 	J(RETF(0));	// 17812                  retf ;~ 0715:1112

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_167ee: 	goto sub_167ee;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_16843(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_16843:
    _begin:
cs=0x715;eip=0x001113; 	X(PUSH(ds));	// 17821                  push    ds ;~ 0715:1113
cs=0x715;eip=0x001114; 	X(PUSH(si));	// 17822                  push    si ;~ 0715:1114
cs=0x715;eip=0x001115; 	X(PUSH(di));	// 17823                  push    di ;~ 0715:1115
cs=0x715;eip=0x001116; 	T(ax = 0;);	// 17824                  mov     ax, 0 ;~ 0715:1116
cs=0x715;eip=0x001119; 	T(CMP(*(dw*)(&byte_16594), 0));	// 17825                  cmp     word ptr cs:byte_16594, 0 ;~ 0715:1119
cs=0x715;eip=0x00111f; 	J(JZ(loc_16866));	// 17826                  jz      short loc_16866 ;~ 0715:111F
cs=0x715;eip=0x001121; 	T(ax = 1;);	// 17827                  mov     ax, 1 ;~ 0715:1121
cs=0x715;eip=0x001124; 	T(CMP(*(dw*)(&byte_16596), 0));	// 17828                  cmp     word ptr cs:byte_16596, 0 ;~ 0715:1124
cs=0x715;eip=0x00112a; 	J(JZ(loc_16866));	// 17829                  jz      short loc_16866 ;~ 0715:112A
cs=0x715;eip=0x00112c; 	X(*(dw*)(&byte_1659a) = 3;);	// 17830                  mov     word ptr cs:byte_1659A, 3 ;~ 0715:112C
cs=0x715;eip=0x001133; 	T(ax = 0x0FFFF;);	// 17831                  mov     ax, 0FFFFh ;~ 0715:1133
loc_16866:
	// 5302 
cs=0x715;eip=0x001136; 	X(POP(di));	// 17835                  pop     di ;~ 0715:1136
cs=0x715;eip=0x001137; 	X(POP(si));	// 17836                  pop     si ;~ 0715:1137
cs=0x715;eip=0x001138; 	X(POP(ds));	// 17837                  pop     ds ;~ 0715:1138
cs=0x715;eip=0x001139; 	J(RETF(0));	// 17838                  retf ;~ 0715:1139

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_16866: 	goto loc_16866;
        case m2c::ksub_16843: 	goto sub_16843;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1686a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1686a:
    _begin:
cs=0x715;eip=0x00113a; 	X(PUSH(ds));	// 17847                  push    ds ;~ 0715:113A
cs=0x715;eip=0x00113b; 	X(PUSH(si));	// 17848                  push    si ;~ 0715:113B
cs=0x715;eip=0x00113c; 	X(PUSH(di));	// 17849                  push    di ;~ 0715:113C
loc_1686d:
	// 5303 
cs=0x715;eip=0x00113d; 	X(PUSH(cs));	// 17853                  push    cs ;~ 0715:113D
cs=0x715;eip=0x00113e; 	J(CALL(sub_1666d,0));	// 17854                  call    near ptr sub_1666D ;~ 0715:113E
cs=0x715;eip=0x001141; 	T(CMP(ax, 0));	// 17855                  cmp     ax, 0 ;~ 0715:1141
cs=0x715;eip=0x001144; 	J(JZ(loc_16894));	// 17856                  jz      short loc_16894 ;~ 0715:1144
cs=0x715;eip=0x001146; 	T(CMP(ax, 1));	// 17857                  cmp     ax, 1 ;~ 0715:1146
cs=0x715;eip=0x001149; 	J(JNZ(loc_1687e));	// 17858                  jnz     short loc_1687E ;~ 0715:1149
cs=0x715;eip=0x00114b; 	J(JMP(loc_1694b));	// 17859                  jmp     loc_1694B ;~ 0715:114B
loc_1687e:
	// 5304 
cs=0x715;eip=0x00114e; 	T(CMP(ax, 2));	// 17863                  cmp     ax, 2 ;~ 0715:114E
cs=0x715;eip=0x001151; 	J(JZ(loc_168eb));	// 17864                  jz      short loc_168EB ;~ 0715:1151
cs=0x715;eip=0x001153; 	T(CMP(ax, 4));	// 17865                  cmp     ax, 4 ;~ 0715:1153
cs=0x715;eip=0x001156; 	J(JZ(loc_16894));	// 17866                  jz      short loc_16894 ;~ 0715:1156
cs=0x715;eip=0x001158; 	T(CMP(ax, 6));	// 17867                  cmp     ax, 6 ;~ 0715:1158
cs=0x715;eip=0x00115b; 	J(JZ(loc_168a4));	// 17868                  jz      short loc_168A4 ;~ 0715:115B
cs=0x715;eip=0x00115d; 	T(CMP(ax, 7));	// 17869                  cmp     ax, 7 ;~ 0715:115D
cs=0x715;eip=0x001160; 	J(JZ(loc_168c5));	// 17870                  jz      short loc_168C5 ;~ 0715:1160
cs=0x715;eip=0x001162; 	J(JMP(loc_1689e));	// 17871                  jmp     short loc_1689E ;~ 0715:1162
loc_16894:
	// 5305 
cs=0x715;eip=0x001164; 	X(*(dw*)(&byte_1659a) = 3;);	// 17876                  mov     word ptr cs:byte_1659A, 3 ;~ 0715:1164
cs=0x715;eip=0x00116b; 	J(JMP(loc_169bd));	// 17877                  jmp     loc_169BD ;~ 0715:116B
loc_1689e:
	// 5306 
cs=0x715;eip=0x00116e; 	X(PUSH(cs));	// 17882                  push    cs ;~ 0715:116E
cs=0x715;eip=0x00116f; 	J(CALL(sub_167ee,0));	// 17883                  call    near ptr sub_167EE ;~ 0715:116F
cs=0x715;eip=0x001172; 	J(JMP(loc_1686d));	// 17884                  jmp     short loc_1686D ;~ 0715:1172
loc_168a4:
	// 5307 
cs=0x715;eip=0x001174; 	T(LDS(si, *(dd*)(&byte_1659e)));	// 17888                  lds     si, dword ptr cs:byte_1659E ;~ 0715:1174
cs=0x715;eip=0x001179; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 17889                  mov     ax, [si+4] ;~ 0715:1179
cs=0x715;eip=0x00117c; 	X(*(dw*)(&byte_165a6) = ax;);	// 17890                  mov     word ptr cs:byte_165A6, ax ;~ 0715:117C
cs=0x715;eip=0x001180; 	X(PUSH(cs));	// 17891                  push    cs ;~ 0715:1180
cs=0x715;eip=0x001181; 	J(CALL(sub_167ee,0));	// 17892                  call    near ptr sub_167EE ;~ 0715:1181
cs=0x715;eip=0x001184; 	T(LDS(si, *(dd*)(&byte_1659e)));	// 17893                  lds     si, dword ptr cs:byte_1659E ;~ 0715:1184
cs=0x715;eip=0x001189; 	X(*(dw*)(&byte_165a2) = si;);	// 17894                  mov     word ptr cs:byte_165A2, si ;~ 0715:1189
cs=0x715;eip=0x00118e; 	X(*(dw*)(&byte_165a4) = ds;);	// 17895                  mov     word ptr cs:byte_165A4, ds ;~ 0715:118E
cs=0x715;eip=0x001193; 	J(JMP(loc_1686d));	// 17896                  jmp     short loc_1686D ;~ 0715:1193
loc_168c5:
	// 5308 
cs=0x715;eip=0x001195; 	T(CMP(*(dw*)(&byte_165a6), 0));	// 17900                  cmp     word ptr cs:byte_165A6, 0 ;~ 0715:1195
cs=0x715;eip=0x00119b; 	J(JZ(loc_1689e));	// 17901                  jz      short loc_1689E ;~ 0715:119B
cs=0x715;eip=0x00119d; 	T(LDS(si, *(dd*)(&byte_165a2)));	// 17902                  lds     si, dword ptr cs:byte_165A2 ;~ 0715:119D
cs=0x715;eip=0x0011a2; 	X(*(dw*)(&byte_1659e) = si;);	// 17903                  mov     word ptr cs:byte_1659E, si ;~ 0715:11A2
cs=0x715;eip=0x0011a7; 	X(*(dw*)(&byte_165a0) = ds;);	// 17904                  mov     word ptr cs:byte_165A0, ds ;~ 0715:11A7
cs=0x715;eip=0x0011ac; 	T(CMP(*(dw*)(&byte_165a6), 0x0FFFF));	// 17905                  cmp     word ptr cs:byte_165A6, 0FFFFh ;~ 0715:11AC
cs=0x715;eip=0x0011b2; 	J(JZ(loc_1686d));	// 17906                  jz      short loc_1686D ;~ 0715:11B2
cs=0x715;eip=0x0011b4; 	X(DEC(*(dw*)(&byte_165a6)));	// 17907                  dec     word ptr cs:byte_165A6 ;~ 0715:11B4
cs=0x715;eip=0x0011b9; 	J(JMP(loc_1686d));	// 17908                  jmp     short loc_1686D ;~ 0715:11B9
loc_168eb:
	// 5309 
cs=0x715;eip=0x0011bb; 	T(LDS(si, *(dd*)(&byte_1659e)));	// 17912                  lds     si, dword ptr cs:byte_1659E ;~ 0715:11BB
cs=0x715;eip=0x0011c0; 	T(ax = 0x106B;);	// 17913                  mov     ax, 106Bh ;~ 0715:11C0
cs=0x715;eip=0x0011c3; 	X(PUSH(cs));	// 17914                  push    cs ;~ 0715:11C3
cs=0x715;eip=0x0011c4; 	X(PUSH(ax));	// 17915                  push    ax ;~ 0715:11C4
cs=0x715;eip=0x0011c5; 	X(PUSH(cs));	// 17916                  push    cs ;~ 0715:11C5
cs=0x715;eip=0x0011c6; 	J(CALL(sub_16781,0));	// 17917                  call    near ptr sub_16781 ;~ 0715:11C6
cs=0x715;eip=0x0011c9; 	T(ADD(sp, 4));	// 17918                  add     sp, 4 ;~ 0715:11C9
cs=0x715;eip=0x0011cc; 	T(MOV(ax, *(dw*)(raddr(ds,si+1))));	// 17919                  mov     ax, [si+1] ;~ 0715:11CC
cs=0x715;eip=0x0011cf; 	T(MOV(dl, *(raddr(ds,si+3))));	// 17920                  mov     dl, [si+3] ;~ 0715:11CF
cs=0x715;eip=0x0011d2; 	T(dh = 0;);	// 17921                  mov     dh, 0 ;~ 0715:11D2
cs=0x715;eip=0x0011d4; 	X(PUSH(bx));	// 17922                  push    bx ;~ 0715:11D4
cs=0x715;eip=0x0011d5; 	X(PUSH(cx));	// 17923                  push    cx ;~ 0715:11D5
cs=0x715;eip=0x0011d6; 	T(bx = ds;);	// 17924                  mov     bx, ds ;~ 0715:11D6
cs=0x715;eip=0x0011d8; 	T(XOR(cx, cx));	// 17925                  xor     cx, cx ;~ 0715:11D8
cs=0x715;eip=0x0011da; 	T(SHL(bx, 1));	// 17926                  shl     bx, 1 ;~ 0715:11DA
cs=0x715;eip=0x0011dc; 	T(RCL(cx, 1));	// 17927                  rcl     cx, 1 ;~ 0715:11DC
cs=0x715;eip=0x0011de; 	T(SHL(bx, 1));	// 17928                  shl     bx, 1 ;~ 0715:11DE
cs=0x715;eip=0x0011e0; 	T(RCL(cx, 1));	// 17929                  rcl     cx, 1 ;~ 0715:11E0
cs=0x715;eip=0x0011e2; 	T(SHL(bx, 1));	// 17930                  shl     bx, 1 ;~ 0715:11E2
cs=0x715;eip=0x0011e4; 	T(RCL(cx, 1));	// 17931                  rcl     cx, 1 ;~ 0715:11E4
cs=0x715;eip=0x0011e6; 	T(SHL(bx, 1));	// 17932                  shl     bx, 1 ;~ 0715:11E6
cs=0x715;eip=0x0011e8; 	T(RCL(cx, 1));	// 17933                  rcl     cx, 1 ;~ 0715:11E8
cs=0x715;eip=0x0011ea; 	T(ADD(bx, si));	// 17934                  add     bx, si ;~ 0715:11EA
cs=0x715;eip=0x0011ec; 	T(ADC(cx, 0));	// 17935                  adc     cx, 0 ;~ 0715:11EC
cs=0x715;eip=0x0011ef; 	T(ADD(bx, 4));	// 17936                  add     bx, 4 ;~ 0715:11EF
cs=0x715;eip=0x0011f2; 	T(ADC(cx, 0));	// 17937                  adc     cx, 0 ;~ 0715:11F2
cs=0x715;eip=0x0011f5; 	T(si = bx;);	// 17938                  mov     si, bx ;~ 0715:11F5
cs=0x715;eip=0x0011f7; 	T(AND(si, 0x0F));	// 17939                  and     si, 0Fh ;~ 0715:11F7
cs=0x715;eip=0x0011fa; 	T(SHR(cx, 1));	// 17940                  shr     cx, 1 ;~ 0715:11FA
cs=0x715;eip=0x0011fc; 	T(RCR(bx, 1));	// 17941                  rcr     bx, 1 ;~ 0715:11FC
cs=0x715;eip=0x0011fe; 	T(SHR(cx, 1));	// 17942                  shr     cx, 1 ;~ 0715:11FE
cs=0x715;eip=0x001200; 	T(RCR(bx, 1));	// 17943                  rcr     bx, 1 ;~ 0715:1200
cs=0x715;eip=0x001202; 	T(SHR(cx, 1));	// 17944                  shr     cx, 1 ;~ 0715:1202
cs=0x715;eip=0x001204; 	T(RCR(bx, 1));	// 17945                  rcr     bx, 1 ;~ 0715:1204
cs=0x715;eip=0x001206; 	T(SHR(cx, 1));	// 17946                  shr     cx, 1 ;~ 0715:1206
cs=0x715;eip=0x001208; 	T(RCR(bx, 1));	// 17947                  rcr     bx, 1 ;~ 0715:1208
cs=0x715;eip=0x00120a; 	T(ds = bx;);	// 17948                  mov     ds, bx ;~ 0715:120A
cs=0x715;eip=0x00120c; 	X(POP(cx));	// 17949                  pop     cx ;~ 0715:120C
cs=0x715;eip=0x00120d; 	X(POP(bx));	// 17950                  pop     bx ;~ 0715:120D
cs=0x715;eip=0x00120e; 	X(PUSH(dx));	// 17951                  push    dx ;~ 0715:120E
cs=0x715;eip=0x00120f; 	X(PUSH(ax));	// 17952                  push    ax ;~ 0715:120F
cs=0x715;eip=0x001210; 	X(PUSH(ds));	// 17953                  push    ds ;~ 0715:1210
cs=0x715;eip=0x001211; 	X(PUSH(si));	// 17954                  push    si ;~ 0715:1211
cs=0x715;eip=0x001212; 	X(PUSH(cs));	// 17955                  push    cs ;~ 0715:1212
cs=0x715;eip=0x001213; 	J(CALL(sub_16a14,0));	// 17956                  call    near ptr sub_16A14 ;~ 0715:1213
cs=0x715;eip=0x001216; 	T(ADD(sp, 8));	// 17957                  add     sp, 8 ;~ 0715:1216
cs=0x715;eip=0x001219; 	J(JMP(loc_169bd));	// 17958                  jmp     short loc_169BD ;~ 0715:1219
loc_1694b:
	// 5310 
cs=0x715;eip=0x00121b; 	T(LDS(si, *(dd*)(&byte_1659e)));	// 17962                  lds     si, dword ptr cs:byte_1659E ;~ 0715:121B
cs=0x715;eip=0x001220; 	X(PUSH(*(dw*)(raddr(ds,si+4))));	// 17963                  push    word ptr [si+4] ;~ 0715:1220
cs=0x715;eip=0x001223; 	X(PUSH(cs));	// 17964                  push    cs ;~ 0715:1223
cs=0x715;eip=0x001224; 	J(CALL(sub_16693,0));	// 17965                  call    near ptr sub_16693 ;~ 0715:1224
cs=0x715;eip=0x001227; 	T(ADD(sp, 2));	// 17966                  add     sp, 2 ;~ 0715:1227
cs=0x715;eip=0x00122a; 	X(*(dw*)(&byte_16572) = ax;);	// 17967                  mov     word ptr cs:byte_16572, ax ;~ 0715:122A
cs=0x715;eip=0x00122e; 	T(ax = 0x106B;);	// 17968                  mov     ax, 106Bh ;~ 0715:122E
cs=0x715;eip=0x001231; 	X(PUSH(cs));	// 17969                  push    cs ;~ 0715:1231
cs=0x715;eip=0x001232; 	X(PUSH(ax));	// 17970                  push    ax ;~ 0715:1232
cs=0x715;eip=0x001233; 	X(PUSH(cs));	// 17971                  push    cs ;~ 0715:1233
cs=0x715;eip=0x001234; 	J(CALL(sub_16781,0));	// 17972                  call    near ptr sub_16781 ;~ 0715:1234
cs=0x715;eip=0x001237; 	T(ADD(sp, 4));	// 17973                  add     sp, 4 ;~ 0715:1237
cs=0x715;eip=0x00123a; 	T(MOV(ax, *(dw*)(raddr(ds,si+1))));	// 17974                  mov     ax, [si+1] ;~ 0715:123A
cs=0x715;eip=0x00123d; 	T(MOV(dl, *(raddr(ds,si+3))));	// 17975                  mov     dl, [si+3] ;~ 0715:123D
cs=0x715;eip=0x001240; 	T(dh = 0;);	// 17976                  mov     dh, 0 ;~ 0715:1240
cs=0x715;eip=0x001242; 	T(SUB(ax, 2));	// 17977                  sub     ax, 2 ;~ 0715:1242
cs=0x715;eip=0x001245; 	T(SBB(dx, 0));	// 17978                  sbb     dx, 0 ;~ 0715:1245
cs=0x715;eip=0x001248; 	X(PUSH(bx));	// 17979                  push    bx ;~ 0715:1248
cs=0x715;eip=0x001249; 	X(PUSH(cx));	// 17980                  push    cx ;~ 0715:1249
cs=0x715;eip=0x00124a; 	T(bx = ds;);	// 17981                  mov     bx, ds ;~ 0715:124A
cs=0x715;eip=0x00124c; 	T(XOR(cx, cx));	// 17982                  xor     cx, cx ;~ 0715:124C
cs=0x715;eip=0x00124e; 	T(SHL(bx, 1));	// 17983                  shl     bx, 1 ;~ 0715:124E
cs=0x715;eip=0x001250; 	T(RCL(cx, 1));	// 17984                  rcl     cx, 1 ;~ 0715:1250
cs=0x715;eip=0x001252; 	T(SHL(bx, 1));	// 17985                  shl     bx, 1 ;~ 0715:1252
cs=0x715;eip=0x001254; 	T(RCL(cx, 1));	// 17986                  rcl     cx, 1 ;~ 0715:1254
cs=0x715;eip=0x001256; 	T(SHL(bx, 1));	// 17987                  shl     bx, 1 ;~ 0715:1256
cs=0x715;eip=0x001258; 	T(RCL(cx, 1));	// 17988                  rcl     cx, 1 ;~ 0715:1258
cs=0x715;eip=0x00125a; 	T(SHL(bx, 1));	// 17989                  shl     bx, 1 ;~ 0715:125A
cs=0x715;eip=0x00125c; 	T(RCL(cx, 1));	// 17990                  rcl     cx, 1 ;~ 0715:125C
cs=0x715;eip=0x00125e; 	T(ADD(bx, si));	// 17991                  add     bx, si ;~ 0715:125E
cs=0x715;eip=0x001260; 	T(ADC(cx, 0));	// 17992                  adc     cx, 0 ;~ 0715:1260
cs=0x715;eip=0x001263; 	T(ADD(bx, 6));	// 17993                  add     bx, 6 ;~ 0715:1263
cs=0x715;eip=0x001266; 	T(ADC(cx, 0));	// 17994                  adc     cx, 0 ;~ 0715:1266
cs=0x715;eip=0x001269; 	T(si = bx;);	// 17995                  mov     si, bx ;~ 0715:1269
cs=0x715;eip=0x00126b; 	T(AND(si, 0x0F));	// 17996                  and     si, 0Fh ;~ 0715:126B
cs=0x715;eip=0x00126e; 	T(SHR(cx, 1));	// 17997                  shr     cx, 1 ;~ 0715:126E
cs=0x715;eip=0x001270; 	T(RCR(bx, 1));	// 17998                  rcr     bx, 1 ;~ 0715:1270
cs=0x715;eip=0x001272; 	T(SHR(cx, 1));	// 17999                  shr     cx, 1 ;~ 0715:1272
cs=0x715;eip=0x001274; 	T(RCR(bx, 1));	// 18000                  rcr     bx, 1 ;~ 0715:1274
cs=0x715;eip=0x001276; 	T(SHR(cx, 1));	// 18001                  shr     cx, 1 ;~ 0715:1276
cs=0x715;eip=0x001278; 	T(RCR(bx, 1));	// 18002                  rcr     bx, 1 ;~ 0715:1278
cs=0x715;eip=0x00127a; 	T(SHR(cx, 1));	// 18003                  shr     cx, 1 ;~ 0715:127A
cs=0x715;eip=0x00127c; 	T(RCR(bx, 1));	// 18004                  rcr     bx, 1 ;~ 0715:127C
cs=0x715;eip=0x00127e; 	T(ds = bx;);	// 18005                  mov     ds, bx ;~ 0715:127E
cs=0x715;eip=0x001280; 	X(POP(cx));	// 18006                  pop     cx ;~ 0715:1280
cs=0x715;eip=0x001281; 	X(POP(bx));	// 18007                  pop     bx ;~ 0715:1281
cs=0x715;eip=0x001282; 	X(PUSH(dx));	// 18008                  push    dx ;~ 0715:1282
cs=0x715;eip=0x001283; 	X(PUSH(ax));	// 18009                  push    ax ;~ 0715:1283
cs=0x715;eip=0x001284; 	X(PUSH(ds));	// 18010                  push    ds ;~ 0715:1284
cs=0x715;eip=0x001285; 	X(PUSH(si));	// 18011                  push    si ;~ 0715:1285
cs=0x715;eip=0x001286; 	X(PUSH(cs));	// 18012                  push    cs ;~ 0715:1286
cs=0x715;eip=0x001287; 	J(CALL(sub_16a14,0));	// 18013                  call    near ptr sub_16A14 ;~ 0715:1287
cs=0x715;eip=0x00128a; 	T(ADD(sp, 8));	// 18014                  add     sp, 8 ;~ 0715:128A
loc_169bd:
	// 5311 
cs=0x715;eip=0x00128d; 	X(POP(di));	// 18018                  pop     di ;~ 0715:128D
cs=0x715;eip=0x00128e; 	X(POP(si));	// 18019                  pop     si ;~ 0715:128E
cs=0x715;eip=0x00128f; 	X(POP(ds));	// 18020                  pop     ds ;~ 0715:128F
cs=0x715;eip=0x001290; 	J(RETF(0));	// 18021                  retf ;~ 0715:1290

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1686d: 	goto loc_1686d;
        case m2c::kloc_1687e: 	goto loc_1687e;
        case m2c::kloc_16894: 	goto loc_16894;
        case m2c::kloc_1689e: 	goto loc_1689e;
        case m2c::kloc_168a4: 	goto loc_168a4;
        case m2c::kloc_168c5: 	goto loc_168c5;
        case m2c::kloc_168eb: 	goto loc_168eb;
        case m2c::kloc_1694b: 	goto loc_1694b;
        case m2c::kloc_169bd: 	goto loc_169bd;
        case m2c::ksub_1686a: 	goto sub_1686a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_169c1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_169c1:
    _begin:
#undef arg_0
#define arg_0 6
	// 18032 arg_0           = word ptr  6 ;~ 0715:1291
cs=0x715;eip=0x001291; 	X(PUSH(bp));	// 18034                  push    bp ;~ 0715:1291
cs=0x715;eip=0x001292; 	T(bp = sp;);	// 18035                  mov     bp, sp ;~ 0715:1292
cs=0x715;eip=0x001294; 	X(PUSH(ds));	// 18036                  push    ds ;~ 0715:1294
cs=0x715;eip=0x001295; 	X(PUSH(si));	// 18037                  push    si ;~ 0715:1295
cs=0x715;eip=0x001296; 	X(PUSH(di));	// 18038                  push    di ;~ 0715:1296
cs=0x715;eip=0x001297; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 18039                  mov     si, [bp+arg_0] ;~ 0715:1297
cs=0x715;eip=0x00129a; 	T(SHL(si, 1));	// 18040                  shl     si, 1 ;~ 0715:129A
cs=0x715;eip=0x00129c; 	X(MOV(*(dw*)(raddr(cs,si+0x0E64)), 2));	// 18041                  mov     word ptr cs:[si+0E64h], 2 ;~ 0715:129C
cs=0x715;eip=0x0012a3; 	X(*(dw*)(&byte_1659c) = si;);	// 18042                  mov     word ptr cs:byte_1659C, si ;~ 0715:12A3
cs=0x715;eip=0x0012a8; 	X(PUSH(*(dw*)(raddr(cs,si+0x0E60))));	// 18043                  push    word ptr cs:[si+0E60h] ;~ 0715:12A8
cs=0x715;eip=0x0012ad; 	X(PUSH(cs));	// 18044                  push    cs ;~ 0715:12AD
cs=0x715;eip=0x0012ae; 	J(CALL(sub_16693,0));	// 18045                  call    near ptr sub_16693 ;~ 0715:12AE
cs=0x715;eip=0x0012b1; 	T(ADD(sp, 2));	// 18046                  add     sp, 2 ;~ 0715:12B1
cs=0x715;eip=0x0012b4; 	X(*(dw*)(&byte_16572) = ax;);	// 18047                  mov     word ptr cs:byte_16572, ax ;~ 0715:12B4
cs=0x715;eip=0x0012b8; 	T(ax = 0x108A;);	// 18048                  mov     ax, 108Ah ;~ 0715:12B8
cs=0x715;eip=0x0012bb; 	X(PUSH(cs));	// 18049                  push    cs ;~ 0715:12BB
cs=0x715;eip=0x0012bc; 	X(PUSH(ax));	// 18050                  push    ax ;~ 0715:12BC
cs=0x715;eip=0x0012bd; 	X(PUSH(cs));	// 18051                  push    cs ;~ 0715:12BD
cs=0x715;eip=0x0012be; 	J(CALL(sub_16781,0));	// 18052                  call    near ptr sub_16781 ;~ 0715:12BE
cs=0x715;eip=0x0012c1; 	T(ADD(sp, 4));	// 18053                  add     sp, 4 ;~ 0715:12C1
cs=0x715;eip=0x0012c4; 	X(PUSH(*(dw*)(raddr(cs,si+0x0E5C))));	// 18054                  push    word ptr cs:[si+0E5Ch] ;~ 0715:12C4
cs=0x715;eip=0x0012c9; 	X(PUSH(*(dw*)(raddr(cs,si+0x0E58))));	// 18055                  push    word ptr cs:[si+0E58h] ;~ 0715:12C9
cs=0x715;eip=0x0012ce; 	X(PUSH(*(dw*)(raddr(cs,si+0x0E54))));	// 18056                  push    word ptr cs:[si+0E54h] ;~ 0715:12CE
cs=0x715;eip=0x0012d3; 	X(PUSH(*(dw*)(raddr(cs,si+0x0E50))));	// 18057                  push    word ptr cs:[si+0E50h] ;~ 0715:12D3
cs=0x715;eip=0x0012d8; 	X(PUSH(cs));	// 18058                  push    cs ;~ 0715:12D8
cs=0x715;eip=0x0012d9; 	J(CALL(sub_16a14,0));	// 18059                  call    near ptr sub_16A14 ;~ 0715:12D9
cs=0x715;eip=0x0012dc; 	T(ADD(sp, 8));	// 18060                  add     sp, 8 ;~ 0715:12DC
cs=0x715;eip=0x0012df; 	X(POP(di));	// 18061                  pop     di ;~ 0715:12DF
cs=0x715;eip=0x0012e0; 	X(POP(si));	// 18062                  pop     si ;~ 0715:12E0
cs=0x715;eip=0x0012e1; 	X(POP(ds));	// 18063                  pop     ds ;~ 0715:12E1
cs=0x715;eip=0x0012e2; 	X(POP(bp));	// 18064                  pop     bp ;~ 0715:12E2
cs=0x715;eip=0x0012e3; 	J(RETF(0));	// 18065                  retf ;~ 0715:12E3

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_169c1: 	goto sub_169c1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_16a14(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_16a14:
    _begin:
#undef arg_0
#define arg_0 6
	// 18076 arg_0           = dword ptr  6 ;~ 0715:12E4
#undef arg_4
#define arg_4 0x0A
	// 18077 arg_4           = word ptr  0Ah ;~ 0715:12E4
#undef arg_6
#define arg_6 0x0C
	// 18078 arg_6           = word ptr  0Ch ;~ 0715:12E4
cs=0x715;eip=0x0012e4; 	X(PUSH(bp));	// 18080                  push    bp ;~ 0715:12E4
cs=0x715;eip=0x0012e5; 	T(bp = sp;);	// 18081                  mov     bp, sp ;~ 0715:12E5
cs=0x715;eip=0x0012e7; 	X(PUSH(ds));	// 18082                  push    ds ;~ 0715:12E7
cs=0x715;eip=0x0012e8; 	X(PUSH(si));	// 18083                  push    si ;~ 0715:12E8
cs=0x715;eip=0x0012e9; 	X(PUSH(di));	// 18084                  push    di ;~ 0715:12E9
cs=0x715;eip=0x0012ea; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_0))));	// 18085                  lds     si, [bp+arg_0] ;~ 0715:12EA
cs=0x715;eip=0x0012ed; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 18086                  mov     ax, [bp+arg_4] ;~ 0715:12ED
cs=0x715;eip=0x0012f0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 18087                  mov     dx, [bp+arg_6] ;~ 0715:12F0
cs=0x715;eip=0x0012f3; 	X(*(dw*)(&byte_165a8) = si;);	// 18088                  mov     word ptr cs:byte_165A8, si ;~ 0715:12F3
cs=0x715;eip=0x0012f8; 	X(*(dw*)(&byte_165aa) = ds;);	// 18089                  mov     word ptr cs:byte_165AA, ds ;~ 0715:12F8
cs=0x715;eip=0x0012fd; 	X(*(dw*)(&byte_165ac) = ax;);	// 18090                  mov     word ptr cs:byte_165AC, ax ;~ 0715:12FD
cs=0x715;eip=0x001301; 	X(*(dw*)(&byte_165ae) = dx;);	// 18091                  mov     word ptr cs:byte_165AE, dx ;~ 0715:1301
cs=0x715;eip=0x001306; 	X(PUSH(cs));	// 18092                  push    cs ;~ 0715:1306
cs=0x715;eip=0x001307; 	J(CALL(sub_16a3f,0));	// 18093                  call    near ptr sub_16A3F ;~ 0715:1307
cs=0x715;eip=0x00130a; 	X(POP(di));	// 18094                  pop     di ;~ 0715:130A
cs=0x715;eip=0x00130b; 	X(POP(si));	// 18095                  pop     si ;~ 0715:130B
cs=0x715;eip=0x00130c; 	X(POP(ds));	// 18096                  pop     ds ;~ 0715:130C
cs=0x715;eip=0x00130d; 	X(POP(bp));	// 18097                  pop     bp ;~ 0715:130D
cs=0x715;eip=0x00130e; 	J(RETF(0));	// 18098                  retf ;~ 0715:130E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_16a14: 	goto sub_16a14;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_16a3f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_16a3f:
    _begin:
#undef var_2
#define var_2 -2
	// 18109 var_2           = word ptr -2 ;~ 0715:130F
cs=0x715;eip=0x00130f; 	X(PUSH(bp));	// 18111                  push    bp ;~ 0715:130F
cs=0x715;eip=0x001310; 	T(bp = sp;);	// 18112                  mov     bp, sp ;~ 0715:1310
cs=0x715;eip=0x001312; 	T(SUB(sp, 2));	// 18113                  sub     sp, 2 ;~ 0715:1312
cs=0x715;eip=0x001315; 	X(PUSH(ds));	// 18114                  push    ds ;~ 0715:1315
cs=0x715;eip=0x001316; 	X(PUSH(si));	// 18115                  push    si ;~ 0715:1316
cs=0x715;eip=0x001317; 	X(PUSH(di));	// 18116                  push    di ;~ 0715:1317
cs=0x715;eip=0x001318; 	T(ax = 0x8000;);	// 18117                  mov     ax, 8000h ;~ 0715:1318
cs=0x715;eip=0x00131b; 	T(CMP(*(dw*)(&byte_165ae), 0));	// 18118                  cmp     word ptr cs:byte_165AE, 0 ;~ 0715:131B
cs=0x715;eip=0x001321; 	J(JA(loc_16a5e));	// 18119                  ja      short loc_16A5E ;~ 0715:1321
cs=0x715;eip=0x001323; 	T(CMP(*(dw*)(&byte_165ac), ax));	// 18120                  cmp     word ptr cs:byte_165AC, ax ;~ 0715:1323
cs=0x715;eip=0x001328; 	J(JA(loc_16a5e));	// 18121                  ja      short loc_16A5E ;~ 0715:1328
cs=0x715;eip=0x00132a; 	T(ax = *(dw*)(&byte_165ac););	// 18122                  mov     ax, word ptr cs:byte_165AC ;~ 0715:132A
loc_16a5e:
	// 5312 
cs=0x715;eip=0x00132e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 18126                  mov     [bp+var_2], ax ;~ 0715:132E
cs=0x715;eip=0x001331; 	X(*(dw*)(&byte_1656c) = ax;);	// 18127                  mov     word ptr cs:byte_1656C, ax ;~ 0715:1331
cs=0x715;eip=0x001335; 	X(*(dw*)(&byte_1656e) = offset(seg003,byte_165b2););	// 18128                  mov     word ptr cs:byte_1656E, offset byte_165B2 ;~ 0715:1335
cs=0x715;eip=0x00133c; 	X(*(dw*)(&byte_16570) = cs;);	// 18129                  mov     word ptr cs:byte_16570, cs ;~ 0715:133C
cs=0x715;eip=0x001341; 	T(LDS(si, *(dd*)(&byte_165a8)));	// 18130                  lds     si, dword ptr cs:byte_165A8 ;~ 0715:1341
cs=0x715;eip=0x001346; 	X(PUSH(ax));	// 18131                  push    ax ;~ 0715:1346
cs=0x715;eip=0x001347; 	X(PUSH(bx));	// 18132                  push    bx ;~ 0715:1347
cs=0x715;eip=0x001348; 	T(ax = ds;);	// 18133                  mov     ax, ds ;~ 0715:1348
cs=0x715;eip=0x00134a; 	T(bx = si;);	// 18134                  mov     bx, si ;~ 0715:134A
cs=0x715;eip=0x00134c; 	T(SHR(bx, 1));	// 18135                  shr     bx, 1 ;~ 0715:134C
cs=0x715;eip=0x00134e; 	T(SHR(bx, 1));	// 18136                  shr     bx, 1 ;~ 0715:134E
cs=0x715;eip=0x001350; 	T(SHR(bx, 1));	// 18137                  shr     bx, 1 ;~ 0715:1350
cs=0x715;eip=0x001352; 	T(SHR(bx, 1));	// 18138                  shr     bx, 1 ;~ 0715:1352
cs=0x715;eip=0x001354; 	T(ADD(ax, bx));	// 18139                  add     ax, bx ;~ 0715:1354
cs=0x715;eip=0x001356; 	T(ds = ax;);	// 18140                  mov     ds, ax ;~ 0715:1356
cs=0x715;eip=0x001358; 	T(AND(si, 0x0F));	// 18141                  and     si, 0Fh ;~ 0715:1358
cs=0x715;eip=0x00135b; 	X(POP(bx));	// 18142                  pop     bx ;~ 0715:135B
cs=0x715;eip=0x00135c; 	X(POP(ax));	// 18143                  pop     ax ;~ 0715:135C
cs=0x715;eip=0x00135d; 	X(*(dw*)(&byte_16568) = si;);	// 18144                  mov     word ptr cs:byte_16568, si ;~ 0715:135D
cs=0x715;eip=0x001362; 	X(*(dw*)(&byte_1656a) = ds;);	// 18145                  mov     word ptr cs:byte_1656A, ds ;~ 0715:1362
cs=0x715;eip=0x001367; 	X(PUSH(bx));	// 18146                  push    bx ;~ 0715:1367
cs=0x715;eip=0x001368; 	X(PUSH(cx));	// 18147                  push    cx ;~ 0715:1368
cs=0x715;eip=0x001369; 	T(bx = ds;);	// 18148                  mov     bx, ds ;~ 0715:1369
cs=0x715;eip=0x00136b; 	T(XOR(cx, cx));	// 18149                  xor     cx, cx ;~ 0715:136B
cs=0x715;eip=0x00136d; 	T(SHL(bx, 1));	// 18150                  shl     bx, 1 ;~ 0715:136D
cs=0x715;eip=0x00136f; 	T(RCL(cx, 1));	// 18151                  rcl     cx, 1 ;~ 0715:136F
cs=0x715;eip=0x001371; 	T(SHL(bx, 1));	// 18152                  shl     bx, 1 ;~ 0715:1371
cs=0x715;eip=0x001373; 	T(RCL(cx, 1));	// 18153                  rcl     cx, 1 ;~ 0715:1373
cs=0x715;eip=0x001375; 	T(SHL(bx, 1));	// 18154                  shl     bx, 1 ;~ 0715:1375
cs=0x715;eip=0x001377; 	T(RCL(cx, 1));	// 18155                  rcl     cx, 1 ;~ 0715:1377
cs=0x715;eip=0x001379; 	T(SHL(bx, 1));	// 18156                  shl     bx, 1 ;~ 0715:1379
cs=0x715;eip=0x00137b; 	T(RCL(cx, 1));	// 18157                  rcl     cx, 1 ;~ 0715:137B
cs=0x715;eip=0x00137d; 	T(ADD(bx, si));	// 18158                  add     bx, si ;~ 0715:137D
cs=0x715;eip=0x00137f; 	T(ADC(cx, 0));	// 18159                  adc     cx, 0 ;~ 0715:137F
cs=0x715;eip=0x001382; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_2))));	// 18160                  add     bx, [bp+var_2] ;~ 0715:1382
cs=0x715;eip=0x001385; 	T(ADC(cx, 0));	// 18161                  adc     cx, 0 ;~ 0715:1385
cs=0x715;eip=0x001388; 	T(si = bx;);	// 18162                  mov     si, bx ;~ 0715:1388
cs=0x715;eip=0x00138a; 	T(AND(si, 0x0F));	// 18163                  and     si, 0Fh ;~ 0715:138A
cs=0x715;eip=0x00138d; 	T(SHR(cx, 1));	// 18164                  shr     cx, 1 ;~ 0715:138D
cs=0x715;eip=0x00138f; 	T(RCR(bx, 1));	// 18165                  rcr     bx, 1 ;~ 0715:138F
cs=0x715;eip=0x001391; 	T(SHR(cx, 1));	// 18166                  shr     cx, 1 ;~ 0715:1391
cs=0x715;eip=0x001393; 	T(RCR(bx, 1));	// 18167                  rcr     bx, 1 ;~ 0715:1393
cs=0x715;eip=0x001395; 	T(SHR(cx, 1));	// 18168                  shr     cx, 1 ;~ 0715:1395
cs=0x715;eip=0x001397; 	T(RCR(bx, 1));	// 18169                  rcr     bx, 1 ;~ 0715:1397
cs=0x715;eip=0x001399; 	T(SHR(cx, 1));	// 18170                  shr     cx, 1 ;~ 0715:1399
cs=0x715;eip=0x00139b; 	T(RCR(bx, 1));	// 18171                  rcr     bx, 1 ;~ 0715:139B
cs=0x715;eip=0x00139d; 	T(ds = bx;);	// 18172                  mov     ds, bx ;~ 0715:139D
cs=0x715;eip=0x00139f; 	X(POP(cx));	// 18173                  pop     cx ;~ 0715:139F
cs=0x715;eip=0x0013a0; 	X(POP(bx));	// 18174                  pop     bx ;~ 0715:13A0
cs=0x715;eip=0x0013a1; 	X(*(dw*)(&byte_165a8) = si;);	// 18175                  mov     word ptr cs:byte_165A8, si ;~ 0715:13A1
cs=0x715;eip=0x0013a6; 	X(*(dw*)(&byte_165aa) = ds;);	// 18176                  mov     word ptr cs:byte_165AA, ds ;~ 0715:13A6
cs=0x715;eip=0x0013ab; 	T(ax = *(dw*)(&byte_165ac););	// 18177                  mov     ax, word ptr cs:byte_165AC ;~ 0715:13AB
cs=0x715;eip=0x0013af; 	T(dx = *(dw*)(&byte_165ae););	// 18178                  mov     dx, word ptr cs:byte_165AE ;~ 0715:13AF
cs=0x715;eip=0x0013b4; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2))));	// 18179                  sub     ax, [bp+var_2] ;~ 0715:13B4
cs=0x715;eip=0x0013b7; 	T(SBB(dx, 0));	// 18180                  sbb     dx, 0 ;~ 0715:13B7
cs=0x715;eip=0x0013ba; 	X(*(dw*)(&byte_165ae) = dx;);	// 18181                  mov     word ptr cs:byte_165AE, dx ;~ 0715:13BA
cs=0x715;eip=0x0013bf; 	X(*(dw*)(&byte_165ac) = ax;);	// 18182                  mov     word ptr cs:byte_165AC, ax ;~ 0715:13BF
cs=0x715;eip=0x0013c3; 	X(PUSH(cs));	// 18183                  push    cs ;~ 0715:13C3
cs=0x715;eip=0x0013c4; 	J(CALL(sub_165b8,0));	// 18184                  call    near ptr sub_165B8 ;~ 0715:13C4
cs=0x715;eip=0x0013c7; 	T(ax = cs;);	// 18185                  mov     ax, cs ;~ 0715:13C7
cs=0x715;eip=0x0013c9; 	T(ds = ax;);	// 18186                  mov     ds, ax ;~ 0715:13C9
cs=0x715;eip=0x0013cb; 	T(si = 0x0E38;);	// 18188                  mov     si, 0E38h ;~ 0715:13CB
cs=0x715;eip=0x0013ce; 	T(ax = 0x688;);	// 18189                  mov     ax, 688h ;~ 0715:13CE
cs=0x715;eip=0x0013d1; 	T(TEST(*(dw*)(&byte_16566), 2));	// 18190                  test    word ptr cs:byte_16566, 2 ;~ 0715:13D1
cs=0x715;eip=0x0013d8; 	J(JZ(loc_16b0d));	// 18191                  jz      short loc_16B0D ;~ 0715:13D8
cs=0x715;eip=0x0013da; 	T(ax = 0x68B;);	// 18192                  mov     ax, 68Bh ;~ 0715:13DA
loc_16b0d:
	// 5313 
cs=0x715;eip=0x0013dd; 	S(_INT(0x66));	// 18195                  int     66h             ; reserved for user interrupt ;~ 0715:13DD
cs=0x715;eip=0x0013df; 	X(POP(di));	// 18196                  pop     di ;~ 0715:13DF
cs=0x715;eip=0x0013e0; 	X(POP(si));	// 18197                  pop     si ;~ 0715:13E0
cs=0x715;eip=0x0013e1; 	X(POP(ds));	// 18198                  pop     ds ;~ 0715:13E1
cs=0x715;eip=0x0013e2; 	T(sp = bp;);	// 18200                  mov     sp, bp ;~ 0715:13E2
cs=0x715;eip=0x0013e4; 	X(POP(bp));	// 18201                  pop     bp ;~ 0715:13E4
cs=0x715;eip=0x0013e5; 	J(RETF(0));	// 18202                  retf ;~ 0715:13E5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_16a5e: 	goto loc_16a5e;
        case m2c::kloc_16b0d: 	goto loc_16b0d;
        case m2c::ksub_16a3f: 	goto sub_16a3f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_16b16(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_16b16:
    _begin:
cs=0x715;eip=0x0013e6; 	X(PUSH(bp));	// 18211                  push    bp ;~ 0715:13E6
cs=0x715;eip=0x0013e7; 	T(bp = sp;);	// 18212                  mov     bp, sp ;~ 0715:13E7
cs=0x715;eip=0x0013e9; 	X(PUSH(ds));	// 18213                  push    ds ;~ 0715:13E9
cs=0x715;eip=0x0013ea; 	X(PUSH(si));	// 18214                  push    si ;~ 0715:13EA
cs=0x715;eip=0x0013eb; 	X(PUSH(di));	// 18215                  push    di ;~ 0715:13EB
cs=0x715;eip=0x0013ec; 	T(CMP(*(dw*)(&byte_16560), 0));	// 18216                  cmp     word ptr cs:byte_16560, 0 ;~ 0715:13EC
cs=0x715;eip=0x0013f2; 	J(JNZ(loc_16b5f));	// 18217                  jnz     short loc_16B5F ;~ 0715:13F2
cs=0x715;eip=0x0013f4; 	T(LES(di, *(dd*)(&byte_16562)));	// 18218                  les     di, dword ptr cs:byte_16562 ;~ 0715:13F4
cs=0x715;eip=0x0013f9; 	X(*(dw*)(&byte_1655a) = es;);	// 18219                  mov     word ptr cs:byte_1655A, es ;~ 0715:13F9
cs=0x715;eip=0x0013fe; 	T(ADD(di, 0x100));	// 18220                  add     di, 100h ;~ 0715:13FE
cs=0x715;eip=0x001402; 	X(*(dw*)(&byte_16558) = di;);	// 18221                  mov     word ptr cs:byte_16558, di ;~ 0715:1402
cs=0x715;eip=0x001407; 	J(CALLF(__dispatch_call,*(dd*)(&byte_16558)));	// 18222                  call    dword ptr cs:byte_16558 ;~ 0715:1407
cs=0x715;eip=0x00140c; 	T(ax = 0x68C;);	// 18223                  mov     ax, 68Ch ;~ 0715:140C
cs=0x715;eip=0x00140f; 	S(_INT(0x66));	// 18224                  int     66h             ; reserved for user interrupt ;~ 0715:140F
cs=0x715;eip=0x001411; 	X(*(dw*)(&byte_16566) = ax;);	// 18225                  mov     word ptr cs:byte_16566, ax ;~ 0715:1411
cs=0x715;eip=0x001415; 	T(ax = 0x0FFFF;);	// 18226                  mov     ax, 0FFFFh ;~ 0715:1415
cs=0x715;eip=0x001418; 	T(TEST(*(dw*)(&byte_16566), 8));	// 18227                  test    word ptr cs:byte_16566, 8 ;~ 0715:1418
cs=0x715;eip=0x00141f; 	J(JZ(loc_16b54));	// 18228                  jz      short loc_16B54 ;~ 0715:141F
cs=0x715;eip=0x001421; 	T(ax = 0;);	// 18229                  mov     ax, 0 ;~ 0715:1421
loc_16b54:
	// 5314 
cs=0x715;eip=0x001424; 	X(*(dw*)(&byte_16504) = ax;);	// 18232                  mov     word ptr cs:byte_16504, ax ;~ 0715:1424
cs=0x715;eip=0x001428; 	X(*(dw*)(&byte_16560) = 1;);	// 18233                  mov     word ptr cs:byte_16560, 1 ;~ 0715:1428
loc_16b5f:
	// 5315 
cs=0x715;eip=0x00142f; 	T(LES(di, *(dd*)(&byte_16562)));	// 18236                  les     di, dword ptr cs:byte_16562 ;~ 0715:142F
cs=0x715;eip=0x001434; 	T(si = 0;);	// 18237                  mov     si, 0 ;~ 0715:1434
cs=0x715;eip=0x001437; 	T(cx = 0x4E;);	// 18238                  mov     cx, 4Eh ; 'N' ;~ 0715:1437
loc_16b6a:
	// 5316 
cs=0x715;eip=0x00143a; 	T(MOV(al, *(raddr(es,di+0x0C))));	// 18241                  mov     al, es:[di+0Ch] ;~ 0715:143A
cs=0x715;eip=0x00143e; 	T(CMP(al, 0x20));	// 18242                  cmp     al, 20h ; ' ' ;~ 0715:143E
cs=0x715;eip=0x001440; 	J(JC(loc_16b7b));	// 18243                  jb      short loc_16B7B ;~ 0715:1440
cs=0x715;eip=0x001442; 	X(MOV(*(raddr(cs,si+0x0DD8)), al));	// 18244                  mov     cs:[si+0DD8h], al ;~ 0715:1442
cs=0x715;eip=0x001447; 	T(INC(si));	// 18245                  inc     si ;~ 0715:1447
cs=0x715;eip=0x001448; 	T(INC(di));	// 18246                  inc     di ;~ 0715:1448
cs=0x715;eip=0x001449; 	J(LOOP(loc_16b6a));	// 18247                  loop    loc_16B6A ;~ 0715:1449
loc_16b7b:
	// 5317 
cs=0x715;eip=0x00144b; 	X(MOV(*(raddr(cs,si+0x0DD8)), 0));	// 18250                  mov     byte ptr cs:[si+0DD8h], 0 ;~ 0715:144B
cs=0x715;eip=0x001451; 	X(MOV(*(raddr(cs,si+0x0DD9)), 0));	// 18251                  mov     byte ptr cs:[si+0DD9h], 0 ;~ 0715:1451
cs=0x715;eip=0x001457; 	T(dx = cs;);	// 18252                  mov     dx, cs ;~ 0715:1457
cs=0x715;eip=0x001459; 	X(*(dw*)(&byte_164fa) = dx;);	// 18253                  mov     word ptr cs:byte_164FA, dx ;~ 0715:1459
cs=0x715;eip=0x00145e; 	T(ax = 0x0DC0;);	// 18254                  mov     ax, 0DC0h ;~ 0715:145E
cs=0x715;eip=0x001461; 	X(POP(di));	// 18255                  pop     di ;~ 0715:1461
cs=0x715;eip=0x001462; 	X(POP(si));	// 18256                  pop     si ;~ 0715:1462
cs=0x715;eip=0x001463; 	X(POP(ds));	// 18257                  pop     ds ;~ 0715:1463
cs=0x715;eip=0x001464; 	X(POP(bp));	// 18258                  pop     bp ;~ 0715:1464
cs=0x715;eip=0x001465; 	J(RETF(0));	// 18259                  retf ;~ 0715:1465

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_16b54: 	goto loc_16b54;
        case m2c::kloc_16b5f: 	goto loc_16b5f;
        case m2c::kloc_16b6a: 	goto loc_16b6a;
        case m2c::kloc_16b7b: 	goto loc_16b7b;
        case m2c::ksub_16b16: 	goto sub_16b16;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg003_1466_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg003_1466_proc:
    _begin:
cs=0x715;eip=0x001466; 	X(PUSH(bp));	// 18263                  push    bp ;~ 0715:1466
cs=0x715;eip=0x001467; 	T(bp = sp;);	// 18264                  mov     bp, sp ;~ 0715:1467
cs=0x715;eip=0x001469; 	X(PUSH(ds));	// 18265                  push    ds ;~ 0715:1469
cs=0x715;eip=0x00146a; 	X(PUSH(si));	// 18266                  push    si ;~ 0715:146A
cs=0x715;eip=0x00146b; 	X(PUSH(di));	// 18267                  push    di ;~ 0715:146B
cs=0x715;eip=0x00146c; 	T(ax = 1;);	// 18268                  mov     ax, 1 ;~ 0715:146C
cs=0x715;eip=0x00146f; 	X(POP(di));	// 18269                  pop     di ;~ 0715:146F
cs=0x715;eip=0x001470; 	X(POP(si));	// 18270                  pop     si ;~ 0715:1470
cs=0x715;eip=0x001471; 	X(POP(ds));	// 18271                  pop     ds ;~ 0715:1471
cs=0x715;eip=0x001472; 	X(POP(bp));	// 18272                  pop     bp ;~ 0715:1472
cs=0x715;eip=0x001473; 	J(RETF(0));	// 18273                  retf ;~ 0715:1473
ret_715_1474:
	// 5318 
cs=0x715;eip=0x001474; 	X(PUSH(bp));	// 18275                  push    bp ;~ 0715:1474
cs=0x715;eip=0x001475; 	T(bp = sp;);	// 18276                  mov     bp, sp ;~ 0715:1475
cs=0x715;eip=0x001477; 	X(PUSH(ds));	// 18277                  push    ds ;~ 0715:1477
cs=0x715;eip=0x001478; 	X(PUSH(si));	// 18278                  push    si ;~ 0715:1478
cs=0x715;eip=0x001479; 	X(PUSH(di));	// 18279                  push    di ;~ 0715:1479
cs=0x715;eip=0x00147a; 	X(PUSH(ax));	// 18280                  push    ax ;~ 0715:147A
cs=0x715;eip=0x00147b; 	X(PUSH(bp));	// 18281                  push    bp ;~ 0715:147B
cs=0x715;eip=0x00147c; 	T(bp = sp;);	// 18282                  mov     bp, sp ;~ 0715:147C
cs=0x715;eip=0x00147e; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0));	// 18283                  mov     word ptr [bp+2], 0 ;~ 0715:147E
cs=0x715;eip=0x001483; 	X(POP(bp));	// 18284                  pop     bp ;~ 0715:1483
cs=0x715;eip=0x001484; 	X(PUSH(ax));	// 18285                  push    ax ;~ 0715:1484
cs=0x715;eip=0x001485; 	X(PUSH(bp));	// 18286                  push    bp ;~ 0715:1485
cs=0x715;eip=0x001486; 	T(bp = sp;);	// 18287                  mov     bp, sp ;~ 0715:1486
cs=0x715;eip=0x001488; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0));	// 18288                  mov     word ptr [bp+2], 0 ;~ 0715:1488
cs=0x715;eip=0x00148d; 	X(POP(bp));	// 18289                  pop     bp ;~ 0715:148D
cs=0x715;eip=0x00148e; 	X(PUSH(cs));	// 18290                  push    cs ;~ 0715:148E
cs=0x715;eip=0x00148f; 	J(CALL(sub_15ebb,0));	// 18291                  call    sub_15EBB ;~ 0715:148F
cs=0x715;eip=0x001492; 	T(ADD(sp, 4));	// 18292                  add     sp, 4 ;~ 0715:1492
cs=0x715;eip=0x001495; 	X(*(dw*)(&byte_165b4) = ax;);	// 18293                  mov     word ptr cs:byte_165B4, ax ;~ 0715:1495
cs=0x715;eip=0x001499; 	X(*(dw*)(&byte_165b6) = 1;);	// 18294                  mov     word ptr cs:byte_165B6, 1 ;~ 0715:1499
cs=0x715;eip=0x0014a0; 	X(PUSH(ax));	// 18295                  push    ax ;~ 0715:14A0
cs=0x715;eip=0x0014a1; 	X(PUSH(bp));	// 18296                  push    bp ;~ 0715:14A1
cs=0x715;eip=0x0014a2; 	T(bp = sp;);	// 18297                  mov     bp, sp ;~ 0715:14A2
cs=0x715;eip=0x0014a4; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0));	// 18298                  mov     word ptr [bp+2], 0 ;~ 0715:14A4
cs=0x715;eip=0x0014a9; 	X(POP(bp));	// 18299                  pop     bp ;~ 0715:14A9
cs=0x715;eip=0x0014aa; 	X(PUSH(cs));	// 18300                  push    cs ;~ 0715:14AA
cs=0x715;eip=0x0014ab; 	J(CALL(sub_16b16,0));	// 18301                  call    near ptr sub_16B16 ;~ 0715:14AB
cs=0x715;eip=0x0014ae; 	T(ADD(sp, 2));	// 18302                  add     sp, 2 ;~ 0715:14AE
cs=0x715;eip=0x0014b1; 	X(*(dw*)(&byte_165a6) = 0;);	// 18303                  mov     word ptr cs:byte_165A6, 0 ;~ 0715:14B1
cs=0x715;eip=0x0014b8; 	X(*(dw*)(&byte_1659a) = 0;);	// 18304                  mov     word ptr cs:byte_1659A, 0 ;~ 0715:14B8
cs=0x715;eip=0x0014bf; 	X(*(dw*)(&byte_16598) = 1;);	// 18305                  mov     word ptr cs:byte_16598, 1 ;~ 0715:14BF
cs=0x715;eip=0x0014c6; 	X(*(dw*)(&byte_16594) = 3;);	// 18306                  mov     word ptr cs:byte_16594, 3 ;~ 0715:14C6
cs=0x715;eip=0x0014cd; 	X(*(dw*)(&byte_16596) = 3;);	// 18307                  mov     word ptr cs:byte_16596, 3 ;~ 0715:14CD
cs=0x715;eip=0x0014d4; 	X(POP(di));	// 18308                  pop     di ;~ 0715:14D4
cs=0x715;eip=0x0014d5; 	X(POP(si));	// 18309                  pop     si ;~ 0715:14D5
cs=0x715;eip=0x0014d6; 	X(POP(ds));	// 18310                  pop     ds ;~ 0715:14D6
cs=0x715;eip=0x0014d7; 	X(POP(bp));	// 18311                  pop     bp ;~ 0715:14D7
cs=0x715;eip=0x0014d8; 	J(RETF(0));	// 18312                  retf ;~ 0715:14D8
ret_715_14d9:
	// 5319 
cs=0x715;eip=0x0014d9; 	X(PUSH(bp));	// 18314                  push    bp ;~ 0715:14D9
cs=0x715;eip=0x0014da; 	T(bp = sp;);	// 18315                  mov     bp, sp ;~ 0715:14DA
cs=0x715;eip=0x0014dc; 	X(PUSH(ds));	// 18316                  push    ds ;~ 0715:14DC
cs=0x715;eip=0x0014dd; 	X(PUSH(si));	// 18317                  push    si ;~ 0715:14DD
cs=0x715;eip=0x0014de; 	X(PUSH(di));	// 18318                  push    di ;~ 0715:14DE
cs=0x715;eip=0x0014df; 	X(PUSH(cs));	// 18319                  push    cs ;~ 0715:14DF
cs=0x715;eip=0x0014e0; 	J(CALL(sub_16fef,0));	// 18320                  call    near ptr sub_16FEF ;~ 0715:14E0
cs=0x715;eip=0x0014e3; 	T(LES(di, *(dd*)(&byte_16562)));	// 18321                  les     di, dword ptr cs:byte_16562 ;~ 0715:14E3
cs=0x715;eip=0x0014e8; 	X(*(dw*)(&byte_1655a) = es;);	// 18322                  mov     word ptr cs:byte_1655A, es ;~ 0715:14E8
cs=0x715;eip=0x0014ed; 	T(ADD(di, 0x103));	// 18323                  add     di, 103h ;~ 0715:14ED
cs=0x715;eip=0x0014f1; 	X(*(dw*)(&byte_16558) = di;);	// 18324                  mov     word ptr cs:byte_16558, di ;~ 0715:14F1
cs=0x715;eip=0x0014f6; 	J(CALLF(__dispatch_call,*(dd*)(&byte_16558)));	// 18325                  call    dword ptr cs:byte_16558 ;~ 0715:14F6
cs=0x715;eip=0x0014fb; 	X(PUSH(*(dw*)(&byte_165b4)));	// 18326                  push    word ptr cs:byte_165B4 ;~ 0715:14FB
cs=0x715;eip=0x001500; 	X(PUSH(cs));	// 18327                  push    cs ;~ 0715:1500
cs=0x715;eip=0x001501; 	J(CALL(sub_15f86,0));	// 18328                  call    sub_15F86 ;~ 0715:1501
cs=0x715;eip=0x001504; 	T(ADD(sp, 2));	// 18329                  add     sp, 2 ;~ 0715:1504
cs=0x715;eip=0x001507; 	X(POP(di));	// 18330                  pop     di ;~ 0715:1507
cs=0x715;eip=0x001508; 	X(POP(si));	// 18331                  pop     si ;~ 0715:1508
cs=0x715;eip=0x001509; 	X(POP(ds));	// 18332                  pop     ds ;~ 0715:1509
cs=0x715;eip=0x00150a; 	X(POP(bp));	// 18333                  pop     bp ;~ 0715:150A
cs=0x715;eip=0x00150b; 	J(RETF(0));	// 18334                  retf ;~ 0715:150B
ret_715_150c:
	// 5320 
cs=0x715;eip=0x00150c; 	X(PUSH(bp));	// 18336                  push    bp ;~ 0715:150C
cs=0x715;eip=0x00150d; 	T(bp = sp;);	// 18337                  mov     bp, sp ;~ 0715:150D
cs=0x715;eip=0x00150f; 	X(PUSH(ds));	// 18338                  push    ds ;~ 0715:150F
cs=0x715;eip=0x001510; 	X(PUSH(si));	// 18339                  push    si ;~ 0715:1510
cs=0x715;eip=0x001511; 	X(PUSH(di));	// 18340                  push    di ;~ 0715:1511
cs=0x715;eip=0x001512; 	T(LDS(si, *(dw*)(raddr(ss,bp+8))));	// 18341                  lds     si, [bp+8] ;~ 0715:1512
cs=0x715;eip=0x001515; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x14))));	// 18342                  mov     ax, [si+14h] ;~ 0715:1515
cs=0x715;eip=0x001518; 	X(PUSH(bx));	// 18343                  push    bx ;~ 0715:1518
cs=0x715;eip=0x001519; 	X(PUSH(cx));	// 18344                  push    cx ;~ 0715:1519
cs=0x715;eip=0x00151a; 	T(bx = ds;);	// 18345                  mov     bx, ds ;~ 0715:151A
cs=0x715;eip=0x00151c; 	T(XOR(cx, cx));	// 18346                  xor     cx, cx ;~ 0715:151C
cs=0x715;eip=0x00151e; 	T(SHL(bx, 1));	// 18347                  shl     bx, 1 ;~ 0715:151E
cs=0x715;eip=0x001520; 	T(RCL(cx, 1));	// 18348                  rcl     cx, 1 ;~ 0715:1520
cs=0x715;eip=0x001522; 	T(SHL(bx, 1));	// 18349                  shl     bx, 1 ;~ 0715:1522
cs=0x715;eip=0x001524; 	T(RCL(cx, 1));	// 18350                  rcl     cx, 1 ;~ 0715:1524
cs=0x715;eip=0x001526; 	T(SHL(bx, 1));	// 18351                  shl     bx, 1 ;~ 0715:1526
cs=0x715;eip=0x001528; 	T(RCL(cx, 1));	// 18352                  rcl     cx, 1 ;~ 0715:1528
cs=0x715;eip=0x00152a; 	T(SHL(bx, 1));	// 18353                  shl     bx, 1 ;~ 0715:152A
cs=0x715;eip=0x00152c; 	T(RCL(cx, 1));	// 18354                  rcl     cx, 1 ;~ 0715:152C
cs=0x715;eip=0x00152e; 	T(ADD(bx, si));	// 18355                  add     bx, si ;~ 0715:152E
cs=0x715;eip=0x001530; 	T(ADC(cx, 0));	// 18356                  adc     cx, 0 ;~ 0715:1530
cs=0x715;eip=0x001533; 	T(ADD(bx, ax));	// 18357                  add     bx, ax ;~ 0715:1533
cs=0x715;eip=0x001535; 	T(ADC(cx, 0));	// 18358                  adc     cx, 0 ;~ 0715:1535
cs=0x715;eip=0x001538; 	T(si = bx;);	// 18359                  mov     si, bx ;~ 0715:1538
cs=0x715;eip=0x00153a; 	T(AND(si, 0x0F));	// 18360                  and     si, 0Fh ;~ 0715:153A
cs=0x715;eip=0x00153d; 	T(SHR(cx, 1));	// 18361                  shr     cx, 1 ;~ 0715:153D
cs=0x715;eip=0x00153f; 	T(RCR(bx, 1));	// 18362                  rcr     bx, 1 ;~ 0715:153F
cs=0x715;eip=0x001541; 	T(SHR(cx, 1));	// 18363                  shr     cx, 1 ;~ 0715:1541
cs=0x715;eip=0x001543; 	T(RCR(bx, 1));	// 18364                  rcr     bx, 1 ;~ 0715:1543
cs=0x715;eip=0x001545; 	T(SHR(cx, 1));	// 18365                  shr     cx, 1 ;~ 0715:1545
cs=0x715;eip=0x001547; 	T(RCR(bx, 1));	// 18366                  rcr     bx, 1 ;~ 0715:1547
cs=0x715;eip=0x001549; 	T(SHR(cx, 1));	// 18367                  shr     cx, 1 ;~ 0715:1549
cs=0x715;eip=0x00154b; 	T(RCR(bx, 1));	// 18368                  rcr     bx, 1 ;~ 0715:154B
cs=0x715;eip=0x00154d; 	T(ds = bx;);	// 18369                  mov     ds, bx ;~ 0715:154D
cs=0x715;eip=0x00154f; 	X(POP(cx));	// 18370                  pop     cx ;~ 0715:154F
cs=0x715;eip=0x001550; 	X(POP(bx));	// 18371                  pop     bx ;~ 0715:1550
cs=0x715;eip=0x001551; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 18372                  mov     bx, [bp+0Ch] ;~ 0715:1551
loc_16c84:
	// 5321 
cs=0x715;eip=0x001554; 	T(MOV(al, *(raddr(ds,si))));	// 18375                  mov     al, [si] ;~ 0715:1554
cs=0x715;eip=0x001556; 	T(ah = 0;);	// 18376                  mov     ah, 0 ;~ 0715:1556
cs=0x715;eip=0x001558; 	T(CMP(ax, 0));	// 18377                  cmp     ax, 0 ;~ 0715:1558
cs=0x715;eip=0x00155b; 	J(JNZ(loc_16c90));	// 18378                  jnz     short loc_16C90 ;~ 0715:155B
cs=0x715;eip=0x00155d; 	J(JMP(loc_16d5d));	// 18379                  jmp     loc_16D5D ;~ 0715:155D
loc_16c90:
	// 5322 
cs=0x715;eip=0x001560; 	T(CMP(ax, 1));	// 18383                  cmp     ax, 1 ;~ 0715:1560
cs=0x715;eip=0x001563; 	J(JNZ(loc_16c9c));	// 18384                  jnz     short loc_16C9C ;~ 0715:1563
cs=0x715;eip=0x001565; 	T(CMP(bx, 0x0FFFF));	// 18385                  cmp     bx, 0FFFFh ;~ 0715:1565
cs=0x715;eip=0x001568; 	J(JZ(loc_16cea));	// 18386                  jz      short loc_16CEA ;~ 0715:1568
cs=0x715;eip=0x00156a; 	J(JMP(loc_16ca9));	// 18387                  jmp     short loc_16CA9 ;~ 0715:156A
loc_16c9c:
	// 5323 
cs=0x715;eip=0x00156c; 	T(CMP(ax, 4));	// 18391                  cmp     ax, 4 ;~ 0715:156C
cs=0x715;eip=0x00156f; 	J(JNZ(loc_16ca9));	// 18392                  jnz     short loc_16CA9 ;~ 0715:156F
cs=0x715;eip=0x001571; 	T(CMP(bx, *(dw*)(raddr(ds,si+4))));	// 18393                  cmp     bx, [si+4] ;~ 0715:1571
cs=0x715;eip=0x001574; 	J(JNZ(loc_16ca9));	// 18394                  jnz     short loc_16CA9 ;~ 0715:1574
cs=0x715;eip=0x001576; 	T(bx = 0x0FFFF;);	// 18395                  mov     bx, 0FFFFh ;~ 0715:1576
loc_16ca9:
	// 5324 
cs=0x715;eip=0x001579; 	T(INC(si));	// 18399                  inc     si ;~ 0715:1579
cs=0x715;eip=0x00157a; 	T(LODSW);	// 18400                  lodsw ;~ 0715:157A
cs=0x715;eip=0x00157b; 	T(MOV(dl, *(raddr(ds,si))));	// 18401                  mov     dl, [si] ;~ 0715:157B
cs=0x715;eip=0x00157d; 	T(dh = 0;);	// 18402                  mov     dh, 0 ;~ 0715:157D
cs=0x715;eip=0x00157f; 	T(INC(si));	// 18403                  inc     si ;~ 0715:157F
cs=0x715;eip=0x001580; 	X(PUSH(bx));	// 18404                  push    bx ;~ 0715:1580
cs=0x715;eip=0x001581; 	X(PUSH(cx));	// 18405                  push    cx ;~ 0715:1581
cs=0x715;eip=0x001582; 	T(bx = ds;);	// 18406                  mov     bx, ds ;~ 0715:1582
cs=0x715;eip=0x001584; 	T(XOR(cx, cx));	// 18407                  xor     cx, cx ;~ 0715:1584
cs=0x715;eip=0x001586; 	T(SHL(bx, 1));	// 18408                  shl     bx, 1 ;~ 0715:1586
cs=0x715;eip=0x001588; 	T(RCL(cx, 1));	// 18409                  rcl     cx, 1 ;~ 0715:1588
cs=0x715;eip=0x00158a; 	T(SHL(bx, 1));	// 18410                  shl     bx, 1 ;~ 0715:158A
cs=0x715;eip=0x00158c; 	T(RCL(cx, 1));	// 18411                  rcl     cx, 1 ;~ 0715:158C
cs=0x715;eip=0x00158e; 	T(SHL(bx, 1));	// 18412                  shl     bx, 1 ;~ 0715:158E
cs=0x715;eip=0x001590; 	T(RCL(cx, 1));	// 18413                  rcl     cx, 1 ;~ 0715:1590
cs=0x715;eip=0x001592; 	T(SHL(bx, 1));	// 18414                  shl     bx, 1 ;~ 0715:1592
cs=0x715;eip=0x001594; 	T(RCL(cx, 1));	// 18415                  rcl     cx, 1 ;~ 0715:1594
cs=0x715;eip=0x001596; 	T(ADD(bx, si));	// 18416                  add     bx, si ;~ 0715:1596
cs=0x715;eip=0x001598; 	T(ADC(cx, 0));	// 18417                  adc     cx, 0 ;~ 0715:1598
cs=0x715;eip=0x00159b; 	T(ADD(bx, ax));	// 18418                  add     bx, ax ;~ 0715:159B
cs=0x715;eip=0x00159d; 	T(ADC(cx, dx));	// 18419                  adc     cx, dx ;~ 0715:159D
cs=0x715;eip=0x00159f; 	T(si = bx;);	// 18420                  mov     si, bx ;~ 0715:159F
cs=0x715;eip=0x0015a1; 	T(AND(si, 0x0F));	// 18421                  and     si, 0Fh ;~ 0715:15A1
cs=0x715;eip=0x0015a4; 	T(SHR(cx, 1));	// 18422                  shr     cx, 1 ;~ 0715:15A4
cs=0x715;eip=0x0015a6; 	T(RCR(bx, 1));	// 18423                  rcr     bx, 1 ;~ 0715:15A6
cs=0x715;eip=0x0015a8; 	T(SHR(cx, 1));	// 18424                  shr     cx, 1 ;~ 0715:15A8
cs=0x715;eip=0x0015aa; 	T(RCR(bx, 1));	// 18425                  rcr     bx, 1 ;~ 0715:15AA
cs=0x715;eip=0x0015ac; 	T(SHR(cx, 1));	// 18426                  shr     cx, 1 ;~ 0715:15AC
cs=0x715;eip=0x0015ae; 	T(RCR(bx, 1));	// 18427                  rcr     bx, 1 ;~ 0715:15AE
cs=0x715;eip=0x0015b0; 	T(SHR(cx, 1));	// 18428                  shr     cx, 1 ;~ 0715:15B0
cs=0x715;eip=0x0015b2; 	T(RCR(bx, 1));	// 18429                  rcr     bx, 1 ;~ 0715:15B2
cs=0x715;eip=0x0015b4; 	T(ds = bx;);	// 18430                  mov     ds, bx ;~ 0715:15B4
cs=0x715;eip=0x0015b6; 	X(POP(cx));	// 18431                  pop     cx ;~ 0715:15B6
cs=0x715;eip=0x0015b7; 	X(POP(bx));	// 18432                  pop     bx ;~ 0715:15B7
cs=0x715;eip=0x0015b8; 	J(JMP(loc_16c84));	// 18433                  jmp     short loc_16C84 ;~ 0715:15B8
loc_16cea:
	// 5325 
cs=0x715;eip=0x0015ba; 	T(LES(di, *(dw*)(raddr(ss,bp+0x0E))));	// 18437                  les     di, [bp+0Eh] ;~ 0715:15BA
cs=0x715;eip=0x0015bd; 	T(MOV(al, *(raddr(ds,si+4))));	// 18438                  mov     al, [si+4] ;~ 0715:15BD
cs=0x715;eip=0x0015c0; 	T(ah = 0;);	// 18439                  mov     ah, 0 ;~ 0715:15C0
cs=0x715;eip=0x0015c2; 	X(MOV(*(dw*)(raddr(es,di+2)), ax));	// 18440                  mov     es:[di+2], ax ;~ 0715:15C2
cs=0x715;eip=0x0015c6; 	T(MOV(al, *(raddr(ds,si+5))));	// 18441                  mov     al, [si+5] ;~ 0715:15C6
cs=0x715;eip=0x0015c9; 	T(ah = 0;);	// 18442                  mov     ah, 0 ;~ 0715:15C9
cs=0x715;eip=0x0015cb; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 18443                  mov     es:[di], ax ;~ 0715:15CB
cs=0x715;eip=0x0015ce; 	T(MOV(ax, *(dw*)(raddr(ds,si+1))));	// 18444                  mov     ax, [si+1] ;~ 0715:15CE
cs=0x715;eip=0x0015d1; 	T(MOV(dl, *(raddr(ds,si+3))));	// 18445                  mov     dl, [si+3] ;~ 0715:15D1
cs=0x715;eip=0x0015d4; 	T(dh = 0;);	// 18446                  mov     dh, 0 ;~ 0715:15D4
cs=0x715;eip=0x0015d6; 	T(SUB(ax, 2));	// 18447                  sub     ax, 2 ;~ 0715:15D6
cs=0x715;eip=0x0015d9; 	T(SBB(dx, 0));	// 18448                  sbb     dx, 0 ;~ 0715:15D9
cs=0x715;eip=0x0015dc; 	X(MOV(*(dw*)(raddr(es,di+8)), ax));	// 18449                  mov     es:[di+8], ax ;~ 0715:15DC
cs=0x715;eip=0x0015e0; 	X(MOV(*(dw*)(raddr(es,di+0x0A)), dx));	// 18450                  mov     es:[di+0Ah], dx ;~ 0715:15E0
cs=0x715;eip=0x0015e4; 	T(dx = ds;);	// 18451                  mov     dx, ds ;~ 0715:15E4
cs=0x715;eip=0x0015e6; 	T(ax = si;);	// 18452                  mov     ax, si ;~ 0715:15E6
cs=0x715;eip=0x0015e8; 	X(PUSH(bx));	// 18453                  push    bx ;~ 0715:15E8
cs=0x715;eip=0x0015e9; 	X(PUSH(cx));	// 18454                  push    cx ;~ 0715:15E9
cs=0x715;eip=0x0015ea; 	T(bx = dx;);	// 18455                  mov     bx, dx ;~ 0715:15EA
cs=0x715;eip=0x0015ec; 	T(XOR(cx, cx));	// 18456                  xor     cx, cx ;~ 0715:15EC
cs=0x715;eip=0x0015ee; 	T(SHL(bx, 1));	// 18457                  shl     bx, 1 ;~ 0715:15EE
cs=0x715;eip=0x0015f0; 	T(RCL(cx, 1));	// 18458                  rcl     cx, 1 ;~ 0715:15F0
cs=0x715;eip=0x0015f2; 	T(SHL(bx, 1));	// 18459                  shl     bx, 1 ;~ 0715:15F2
cs=0x715;eip=0x0015f4; 	T(RCL(cx, 1));	// 18460                  rcl     cx, 1 ;~ 0715:15F4
cs=0x715;eip=0x0015f6; 	T(SHL(bx, 1));	// 18461                  shl     bx, 1 ;~ 0715:15F6
cs=0x715;eip=0x0015f8; 	T(RCL(cx, 1));	// 18462                  rcl     cx, 1 ;~ 0715:15F8
cs=0x715;eip=0x0015fa; 	T(SHL(bx, 1));	// 18463                  shl     bx, 1 ;~ 0715:15FA
cs=0x715;eip=0x0015fc; 	T(RCL(cx, 1));	// 18464                  rcl     cx, 1 ;~ 0715:15FC
cs=0x715;eip=0x0015fe; 	T(ADD(bx, ax));	// 18465                  add     bx, ax ;~ 0715:15FE
cs=0x715;eip=0x001600; 	T(ADC(cx, 0));	// 18466                  adc     cx, 0 ;~ 0715:1600
cs=0x715;eip=0x001603; 	T(ADD(bx, 6));	// 18467                  add     bx, 6 ;~ 0715:1603
cs=0x715;eip=0x001606; 	T(ADC(cx, 0));	// 18468                  adc     cx, 0 ;~ 0715:1606
cs=0x715;eip=0x001609; 	T(ax = bx;);	// 18469                  mov     ax, bx ;~ 0715:1609
cs=0x715;eip=0x00160b; 	T(AND(ax, 0x0F));	// 18470                  and     ax, 0Fh ;~ 0715:160B
cs=0x715;eip=0x00160e; 	T(SHR(cx, 1));	// 18471                  shr     cx, 1 ;~ 0715:160E
cs=0x715;eip=0x001610; 	T(RCR(bx, 1));	// 18472                  rcr     bx, 1 ;~ 0715:1610
cs=0x715;eip=0x001612; 	T(SHR(cx, 1));	// 18473                  shr     cx, 1 ;~ 0715:1612
cs=0x715;eip=0x001614; 	T(RCR(bx, 1));	// 18474                  rcr     bx, 1 ;~ 0715:1614
cs=0x715;eip=0x001616; 	T(SHR(cx, 1));	// 18475                  shr     cx, 1 ;~ 0715:1616
cs=0x715;eip=0x001618; 	T(RCR(bx, 1));	// 18476                  rcr     bx, 1 ;~ 0715:1618
cs=0x715;eip=0x00161a; 	T(SHR(cx, 1));	// 18477                  shr     cx, 1 ;~ 0715:161A
cs=0x715;eip=0x00161c; 	T(RCR(bx, 1));	// 18478                  rcr     bx, 1 ;~ 0715:161C
cs=0x715;eip=0x00161e; 	T(dx = bx;);	// 18479                  mov     dx, bx ;~ 0715:161E
cs=0x715;eip=0x001620; 	X(POP(cx));	// 18480                  pop     cx ;~ 0715:1620
cs=0x715;eip=0x001621; 	X(POP(bx));	// 18481                  pop     bx ;~ 0715:1621
cs=0x715;eip=0x001622; 	X(MOV(*(dw*)(raddr(es,di+4)), ax));	// 18482                  mov     es:[di+4], ax ;~ 0715:1622
cs=0x715;eip=0x001626; 	X(MOV(*(dw*)(raddr(es,di+6)), dx));	// 18483                  mov     es:[di+6], dx ;~ 0715:1626
cs=0x715;eip=0x00162a; 	T(ax = 1;);	// 18484                  mov     ax, 1 ;~ 0715:162A
loc_16d5d:
	// 5326 
cs=0x715;eip=0x00162d; 	X(POP(di));	// 18487                  pop     di ;~ 0715:162D
cs=0x715;eip=0x00162e; 	X(POP(si));	// 18488                  pop     si ;~ 0715:162E
cs=0x715;eip=0x00162f; 	X(POP(ds));	// 18489                  pop     ds ;~ 0715:162F
cs=0x715;eip=0x001630; 	X(POP(bp));	// 18490                  pop     bp ;~ 0715:1630
cs=0x715;eip=0x001631; 	J(RETF(0));	// 18491                  retf ;~ 0715:1631
ret_715_1632:
	// 5327 
cs=0x715;eip=0x001632; 	X(PUSH(bp));	// 18493                  push    bp ;~ 0715:1632
cs=0x715;eip=0x001633; 	T(bp = sp;);	// 18494                  mov     bp, sp ;~ 0715:1633
cs=0x715;eip=0x001635; 	X(PUSH(ds));	// 18495                  push    ds ;~ 0715:1635
cs=0x715;eip=0x001636; 	X(PUSH(si));	// 18496                  push    si ;~ 0715:1636
cs=0x715;eip=0x001637; 	X(PUSH(di));	// 18497                  push    di ;~ 0715:1637
cs=0x715;eip=0x001638; 	T(CMP(*(dw*)(&byte_16598), 0));	// 18498                  cmp     word ptr cs:byte_16598, 0 ;~ 0715:1638
cs=0x715;eip=0x00163e; 	J(JNZ(loc_16d88));	// 18499                  jnz     short loc_16D88 ;~ 0715:163E
cs=0x715;eip=0x001640; 	X(PUSH(ax));	// 18500                  push    ax ;~ 0715:1640
cs=0x715;eip=0x001641; 	X(PUSH(bp));	// 18501                  push    bp ;~ 0715:1641
cs=0x715;eip=0x001642; 	T(bp = sp;);	// 18502                  mov     bp, sp ;~ 0715:1642
cs=0x715;eip=0x001644; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0));	// 18503                  mov     word ptr [bp+2], 0 ;~ 0715:1644
cs=0x715;eip=0x001649; 	X(POP(bp));	// 18504                  pop     bp ;~ 0715:1649
cs=0x715;eip=0x00164a; 	X(PUSH(cs));	// 18505                  push    cs ;~ 0715:164A
cs=0x715;eip=0x00164b; 	J(CALL(sub_16fef,0));	// 18506                  call    near ptr sub_16FEF ;~ 0715:164B
cs=0x715;eip=0x00164e; 	T(ADD(sp, 2));	// 18507                  add     sp, 2 ;~ 0715:164E
cs=0x715;eip=0x001651; 	X(*(dw*)(&byte_16598) = 1;);	// 18508                  mov     word ptr cs:byte_16598, 1 ;~ 0715:1651
loc_16d88:
	// 5328 
cs=0x715;eip=0x001658; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 18511                  mov     di, [bp+8] ;~ 0715:1658
cs=0x715;eip=0x00165b; 	T(SHL(di, 1));	// 18512                  shl     di, 1 ;~ 0715:165B
cs=0x715;eip=0x00165d; 	T(LDS(si, *(dw*)(raddr(ss,bp+0x0A))));	// 18513                  lds     si, [bp+0Ah] ;~ 0715:165D
cs=0x715;eip=0x001660; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 18514                  mov     ax, [si+2] ;~ 0715:1660
cs=0x715;eip=0x001663; 	X(MOV(*(dw*)(raddr(cs,di+0x0E60)), ax));	// 18515                  mov     cs:[di+0E60h], ax ;~ 0715:1663
cs=0x715;eip=0x001668; 	T(LES(bx, *(dw*)(raddr(ds,si+4))));	// 18516                  les     bx, [si+4] ;~ 0715:1668
cs=0x715;eip=0x00166b; 	X(MOV(*(dw*)(raddr(cs,di+0x0E50)), bx));	// 18517                  mov     cs:[di+0E50h], bx ;~ 0715:166B
cs=0x715;eip=0x001670; 	X(MOV(*(dw*)(raddr(cs,di+0x0E54)), es));	// 18518                  mov     word ptr cs:[di+0E54h], es ;~ 0715:1670
cs=0x715;eip=0x001675; 	T(MOV(ax, *(dw*)(raddr(ds,si+8))));	// 18519                  mov     ax, [si+8] ;~ 0715:1675
cs=0x715;eip=0x001678; 	X(MOV(*(dw*)(raddr(cs,di+0x0E58)), ax));	// 18520                  mov     cs:[di+0E58h], ax ;~ 0715:1678
cs=0x715;eip=0x00167d; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x0A))));	// 18521                  mov     ax, [si+0Ah] ;~ 0715:167D
cs=0x715;eip=0x001680; 	X(MOV(*(dw*)(raddr(cs,di+0x0E5C)), ax));	// 18522                  mov     cs:[di+0E5Ch], ax ;~ 0715:1680
cs=0x715;eip=0x001685; 	X(MOV(*(dw*)(raddr(cs,di+0x0E64)), 0));	// 18523                  mov     word ptr cs:[di+0E64h], 0 ;~ 0715:1685
cs=0x715;eip=0x00168c; 	X(POP(di));	// 18524                  pop     di ;~ 0715:168C
cs=0x715;eip=0x00168d; 	X(POP(si));	// 18525                  pop     si ;~ 0715:168D
cs=0x715;eip=0x00168e; 	X(POP(ds));	// 18526                  pop     ds ;~ 0715:168E
cs=0x715;eip=0x00168f; 	X(POP(bp));	// 18527                  pop     bp ;~ 0715:168F
cs=0x715;eip=0x001690; 	J(RETF(0));	// 18528                  retf ;~ 0715:1690
ret_715_1691:
	// 5329 
cs=0x715;eip=0x001691; 	X(PUSH(bp));	// 18530                  push    bp ;~ 0715:1691
cs=0x715;eip=0x001692; 	T(bp = sp;);	// 18531                  mov     bp, sp ;~ 0715:1692
cs=0x715;eip=0x001694; 	X(PUSH(ds));	// 18532                  push    ds ;~ 0715:1694
cs=0x715;eip=0x001695; 	X(PUSH(si));	// 18533                  push    si ;~ 0715:1695
cs=0x715;eip=0x001696; 	X(PUSH(di));	// 18534                  push    di ;~ 0715:1696
cs=0x715;eip=0x001697; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 18535                  mov     bx, [bp+8] ;~ 0715:1697
cs=0x715;eip=0x00169a; 	T(SHL(bx, 1));	// 18536                  shl     bx, 1 ;~ 0715:169A
cs=0x715;eip=0x00169c; 	T(MOV(ax, *(dw*)(raddr(cs,bx+0x0E64))));	// 18537                  mov     ax, cs:[bx+0E64h] ;~ 0715:169C
cs=0x715;eip=0x0016a1; 	X(POP(di));	// 18538                  pop     di ;~ 0715:16A1
cs=0x715;eip=0x0016a2; 	X(POP(si));	// 18539                  pop     si ;~ 0715:16A2
cs=0x715;eip=0x0016a3; 	X(POP(ds));	// 18540                  pop     ds ;~ 0715:16A3
cs=0x715;eip=0x0016a4; 	X(POP(bp));	// 18541                  pop     bp ;~ 0715:16A4
cs=0x715;eip=0x0016a5; 	J(RETF(0));	// 18542                  retf ;~ 0715:16A5
ret_715_16a6:
	// 5330 
cs=0x715;eip=0x0016a6; 	X(PUSH(bp));	// 18544                  push    bp ;~ 0715:16A6
cs=0x715;eip=0x0016a7; 	T(bp = sp;);	// 18545                  mov     bp, sp ;~ 0715:16A7
cs=0x715;eip=0x0016a9; 	T(SUB(sp, 4));	// 18546                  sub     sp, 4 ;~ 0715:16A9
cs=0x715;eip=0x0016ac; 	X(PUSH(ds));	// 18547                  push    ds ;~ 0715:16AC
cs=0x715;eip=0x0016ad; 	X(PUSH(si));	// 18548                  push    si ;~ 0715:16AD
cs=0x715;eip=0x0016ae; 	X(PUSH(di));	// 18549                  push    di ;~ 0715:16AE
cs=0x715;eip=0x0016af; 	X(PUSH(ax));	// 18550                  push    ax ;~ 0715:16AF
cs=0x715;eip=0x0016b0; 	X(PUSH(bp));	// 18551                  push    bp ;~ 0715:16B0
cs=0x715;eip=0x0016b1; 	T(bp = sp;);	// 18552                  mov     bp, sp ;~ 0715:16B1
cs=0x715;eip=0x0016b3; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0));	// 18553                  mov     word ptr [bp+2], 0 ;~ 0715:16B3
cs=0x715;eip=0x0016b8; 	X(POP(bp));	// 18554                  pop     bp ;~ 0715:16B8
cs=0x715;eip=0x0016b9; 	X(PUSH(cs));	// 18555                  push    cs ;~ 0715:16B9
cs=0x715;eip=0x0016ba; 	J(CALL(sub_16fef,0));	// 18556                  call    near ptr sub_16FEF ;~ 0715:16BA
cs=0x715;eip=0x0016bd; 	T(ADD(sp, 2));	// 18557                  add     sp, 2 ;~ 0715:16BD
cs=0x715;eip=0x0016c0; 	X(*(dw*)(&byte_16598) = 0;);	// 18558                  mov     word ptr cs:byte_16598, 0 ;~ 0715:16C0
cs=0x715;eip=0x0016c7; 	T(LES(di, *(dw*)(raddr(ss,bp+8))));	// 18559                  les     di, [bp+8] ;~ 0715:16C7
cs=0x715;eip=0x0016ca; 	X(MOV(*(dw*)(raddr(ss,bp-4)), di));	// 18560                  mov     [bp-4], di ;~ 0715:16CA
cs=0x715;eip=0x0016cd; 	X(MOV(*(dw*)(raddr(ss,bp-2)), es));	// 18561                  mov     word ptr [bp-2], es ;~ 0715:16CD
cs=0x715;eip=0x0016d0; 	X(*(dw*)(&byte_1659a) = 3;);	// 18562                  mov     word ptr cs:byte_1659A, 3 ;~ 0715:16D0
cs=0x715;eip=0x0016d7; 	T(LDS(si, *(dw*)(raddr(ss,bp-4))));	// 18563                  lds     si, [bp-4] ;~ 0715:16D7
cs=0x715;eip=0x0016da; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x14))));	// 18564                  mov     ax, [si+14h] ;~ 0715:16DA
cs=0x715;eip=0x0016dd; 	X(PUSH(bx));	// 18565                  push    bx ;~ 0715:16DD
cs=0x715;eip=0x0016de; 	X(PUSH(cx));	// 18566                  push    cx ;~ 0715:16DE
cs=0x715;eip=0x0016df; 	T(bx = ds;);	// 18567                  mov     bx, ds ;~ 0715:16DF
cs=0x715;eip=0x0016e1; 	T(XOR(cx, cx));	// 18568                  xor     cx, cx ;~ 0715:16E1
cs=0x715;eip=0x0016e3; 	T(SHL(bx, 1));	// 18569                  shl     bx, 1 ;~ 0715:16E3
cs=0x715;eip=0x0016e5; 	T(RCL(cx, 1));	// 18570                  rcl     cx, 1 ;~ 0715:16E5
cs=0x715;eip=0x0016e7; 	T(SHL(bx, 1));	// 18571                  shl     bx, 1 ;~ 0715:16E7
cs=0x715;eip=0x0016e9; 	T(RCL(cx, 1));	// 18572                  rcl     cx, 1 ;~ 0715:16E9
cs=0x715;eip=0x0016eb; 	T(SHL(bx, 1));	// 18573                  shl     bx, 1 ;~ 0715:16EB
cs=0x715;eip=0x0016ed; 	T(RCL(cx, 1));	// 18574                  rcl     cx, 1 ;~ 0715:16ED
cs=0x715;eip=0x0016ef; 	T(SHL(bx, 1));	// 18575                  shl     bx, 1 ;~ 0715:16EF
cs=0x715;eip=0x0016f1; 	T(RCL(cx, 1));	// 18576                  rcl     cx, 1 ;~ 0715:16F1
cs=0x715;eip=0x0016f3; 	T(ADD(bx, si));	// 18577                  add     bx, si ;~ 0715:16F3
cs=0x715;eip=0x0016f5; 	T(ADC(cx, 0));	// 18578                  adc     cx, 0 ;~ 0715:16F5
cs=0x715;eip=0x0016f8; 	T(ADD(bx, ax));	// 18579                  add     bx, ax ;~ 0715:16F8
cs=0x715;eip=0x0016fa; 	T(ADC(cx, 0));	// 18580                  adc     cx, 0 ;~ 0715:16FA
cs=0x715;eip=0x0016fd; 	T(si = bx;);	// 18581                  mov     si, bx ;~ 0715:16FD
cs=0x715;eip=0x0016ff; 	T(AND(si, 0x0F));	// 18582                  and     si, 0Fh ;~ 0715:16FF
cs=0x715;eip=0x001702; 	T(SHR(cx, 1));	// 18583                  shr     cx, 1 ;~ 0715:1702
cs=0x715;eip=0x001704; 	T(RCR(bx, 1));	// 18584                  rcr     bx, 1 ;~ 0715:1704
cs=0x715;eip=0x001706; 	T(SHR(cx, 1));	// 18585                  shr     cx, 1 ;~ 0715:1706
cs=0x715;eip=0x001708; 	T(RCR(bx, 1));	// 18586                  rcr     bx, 1 ;~ 0715:1708
cs=0x715;eip=0x00170a; 	T(SHR(cx, 1));	// 18587                  shr     cx, 1 ;~ 0715:170A
cs=0x715;eip=0x00170c; 	T(RCR(bx, 1));	// 18588                  rcr     bx, 1 ;~ 0715:170C
cs=0x715;eip=0x00170e; 	T(SHR(cx, 1));	// 18589                  shr     cx, 1 ;~ 0715:170E
cs=0x715;eip=0x001710; 	T(RCR(bx, 1));	// 18590                  rcr     bx, 1 ;~ 0715:1710
cs=0x715;eip=0x001712; 	T(ds = bx;);	// 18591                  mov     ds, bx ;~ 0715:1712
cs=0x715;eip=0x001714; 	X(POP(cx));	// 18592                  pop     cx ;~ 0715:1714
cs=0x715;eip=0x001715; 	X(POP(bx));	// 18593                  pop     bx ;~ 0715:1715
cs=0x715;eip=0x001716; 	X(*(dw*)(&byte_1659e) = si;);	// 18594                  mov     word ptr cs:byte_1659E, si ;~ 0715:1716
cs=0x715;eip=0x00171b; 	X(*(dw*)(&byte_165a0) = ds;);	// 18595                  mov     word ptr cs:byte_165A0, ds ;~ 0715:171B
cs=0x715;eip=0x001720; 	T(CMP(*(dw*)(raddr(ss,bp+0x0C)), 0x0FFFF));	// 18596                  cmp     word ptr [bp+0Ch], 0FFFFh ;~ 0715:1720
cs=0x715;eip=0x001724; 	J(JZ(loc_16e6e));	// 18597                  jz      short loc_16E6E ;~ 0715:1724
loc_16e56:
	// 5331 
cs=0x715;eip=0x001726; 	X(PUSH(cs));	// 18600                  push    cs ;~ 0715:1726
cs=0x715;eip=0x001727; 	J(CALL(sub_1666d,0));	// 18601                  call    near ptr sub_1666D ;~ 0715:1727
cs=0x715;eip=0x00172a; 	T(CMP(ax, 0));	// 18602                  cmp     ax, 0 ;~ 0715:172A
cs=0x715;eip=0x00172d; 	J(JZ(loc_16e75));	// 18603                  jz      short loc_16E75 ;~ 0715:172D
cs=0x715;eip=0x00172f; 	X(PUSH(cs));	// 18604                  push    cs ;~ 0715:172F
cs=0x715;eip=0x001730; 	J(CALL(sub_1667c,0));	// 18605                  call    near ptr sub_1667C ;~ 0715:1730
cs=0x715;eip=0x001733; 	T(si = ax;);	// 18606                  mov     si, ax ;~ 0715:1733
cs=0x715;eip=0x001735; 	X(PUSH(cs));	// 18607                  push    cs ;~ 0715:1735
cs=0x715;eip=0x001736; 	J(CALL(sub_167ee,0));	// 18608                  call    near ptr sub_167EE ;~ 0715:1736
cs=0x715;eip=0x001739; 	T(CMP(si, *(dw*)(raddr(ss,bp+0x0C))));	// 18609                  cmp     si, [bp+0Ch] ;~ 0715:1739
cs=0x715;eip=0x00173c; 	J(JNZ(loc_16e56));	// 18610                  jnz     short loc_16E56 ;~ 0715:173C
loc_16e6e:
	// 5332 
cs=0x715;eip=0x00173e; 	X(*(dw*)(&byte_1659a) = 0;);	// 18613                  mov     word ptr cs:byte_1659A, 0 ;~ 0715:173E
loc_16e75:
	// 5333 
cs=0x715;eip=0x001745; 	X(POP(di));	// 18616                  pop     di ;~ 0715:1745
cs=0x715;eip=0x001746; 	X(POP(si));	// 18617                  pop     si ;~ 0715:1746
cs=0x715;eip=0x001747; 	X(POP(ds));	// 18618                  pop     ds ;~ 0715:1747
cs=0x715;eip=0x001748; 	T(sp = bp;);	// 18619                  mov     sp, bp ;~ 0715:1748
cs=0x715;eip=0x00174a; 	X(POP(bp));	// 18620                  pop     bp ;~ 0715:174A
cs=0x715;eip=0x00174b; 	J(RETF(0));	// 18621                  retf ;~ 0715:174B
ret_715_174c:
	// 5334 
cs=0x715;eip=0x00174c; 	X(PUSH(bp));	// 18623                  push    bp ;~ 0715:174C
cs=0x715;eip=0x00174d; 	T(bp = sp;);	// 18624                  mov     bp, sp ;~ 0715:174D
cs=0x715;eip=0x00174f; 	T(SUB(sp, 8));	// 18625                  sub     sp, 8 ;~ 0715:174F
cs=0x715;eip=0x001752; 	X(PUSH(ds));	// 18626                  push    ds ;~ 0715:1752
cs=0x715;eip=0x001753; 	X(PUSH(si));	// 18627                  push    si ;~ 0715:1753
cs=0x715;eip=0x001754; 	X(PUSH(di));	// 18628                  push    di ;~ 0715:1754
cs=0x715;eip=0x001755; 	X(MOV(*(raddr(ss,bp-6)), 0x0FF));	// 18629                  mov     byte ptr [bp-6], 0FFh ;~ 0715:1755
cs=0x715;eip=0x001759; 	T(LES(di, *(dw*)(raddr(ss,bp+8))));	// 18630                  les     di, [bp+8] ;~ 0715:1759
cs=0x715;eip=0x00175c; 	X(MOV(*(dw*)(raddr(ss,bp-4)), di));	// 18631                  mov     [bp-4], di ;~ 0715:175C
cs=0x715;eip=0x00175f; 	X(MOV(*(dw*)(raddr(ss,bp-2)), es));	// 18632                  mov     word ptr [bp-2], es ;~ 0715:175F
cs=0x715;eip=0x001762; 	T(LDS(si, *(dw*)(raddr(ss,bp-4))));	// 18633                  lds     si, [bp-4] ;~ 0715:1762
cs=0x715;eip=0x001765; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x14))));	// 18634                  mov     ax, [si+14h] ;~ 0715:1765
cs=0x715;eip=0x001768; 	X(PUSH(bx));	// 18635                  push    bx ;~ 0715:1768
cs=0x715;eip=0x001769; 	X(PUSH(cx));	// 18636                  push    cx ;~ 0715:1769
cs=0x715;eip=0x00176a; 	T(bx = ds;);	// 18637                  mov     bx, ds ;~ 0715:176A
cs=0x715;eip=0x00176c; 	T(XOR(cx, cx));	// 18638                  xor     cx, cx ;~ 0715:176C
cs=0x715;eip=0x00176e; 	T(SHL(bx, 1));	// 18639                  shl     bx, 1 ;~ 0715:176E
cs=0x715;eip=0x001770; 	T(RCL(cx, 1));	// 18640                  rcl     cx, 1 ;~ 0715:1770
cs=0x715;eip=0x001772; 	T(SHL(bx, 1));	// 18641                  shl     bx, 1 ;~ 0715:1772
cs=0x715;eip=0x001774; 	T(RCL(cx, 1));	// 18642                  rcl     cx, 1 ;~ 0715:1774
cs=0x715;eip=0x001776; 	T(SHL(bx, 1));	// 18643                  shl     bx, 1 ;~ 0715:1776
cs=0x715;eip=0x001778; 	T(RCL(cx, 1));	// 18644                  rcl     cx, 1 ;~ 0715:1778
cs=0x715;eip=0x00177a; 	T(SHL(bx, 1));	// 18645                  shl     bx, 1 ;~ 0715:177A
cs=0x715;eip=0x00177c; 	T(RCL(cx, 1));	// 18646                  rcl     cx, 1 ;~ 0715:177C
cs=0x715;eip=0x00177e; 	T(ADD(bx, si));	// 18647                  add     bx, si ;~ 0715:177E
cs=0x715;eip=0x001780; 	T(ADC(cx, 0));	// 18648                  adc     cx, 0 ;~ 0715:1780
cs=0x715;eip=0x001783; 	T(ADD(bx, ax));	// 18649                  add     bx, ax ;~ 0715:1783
cs=0x715;eip=0x001785; 	T(ADC(cx, 0));	// 18650                  adc     cx, 0 ;~ 0715:1785
cs=0x715;eip=0x001788; 	T(si = bx;);	// 18651                  mov     si, bx ;~ 0715:1788
cs=0x715;eip=0x00178a; 	T(AND(si, 0x0F));	// 18652                  and     si, 0Fh ;~ 0715:178A
cs=0x715;eip=0x00178d; 	T(SHR(cx, 1));	// 18653                  shr     cx, 1 ;~ 0715:178D
cs=0x715;eip=0x00178f; 	T(RCR(bx, 1));	// 18654                  rcr     bx, 1 ;~ 0715:178F
cs=0x715;eip=0x001791; 	T(SHR(cx, 1));	// 18655                  shr     cx, 1 ;~ 0715:1791
cs=0x715;eip=0x001793; 	T(RCR(bx, 1));	// 18656                  rcr     bx, 1 ;~ 0715:1793
cs=0x715;eip=0x001795; 	T(SHR(cx, 1));	// 18657                  shr     cx, 1 ;~ 0715:1795
cs=0x715;eip=0x001797; 	T(RCR(bx, 1));	// 18658                  rcr     bx, 1 ;~ 0715:1797
cs=0x715;eip=0x001799; 	T(SHR(cx, 1));	// 18659                  shr     cx, 1 ;~ 0715:1799
cs=0x715;eip=0x00179b; 	T(RCR(bx, 1));	// 18660                  rcr     bx, 1 ;~ 0715:179B
cs=0x715;eip=0x00179d; 	T(ds = bx;);	// 18661                  mov     ds, bx ;~ 0715:179D
cs=0x715;eip=0x00179f; 	X(POP(cx));	// 18662                  pop     cx ;~ 0715:179F
cs=0x715;eip=0x0017a0; 	X(POP(bx));	// 18663                  pop     bx ;~ 0715:17A0
cs=0x715;eip=0x0017a1; 	X(*(dw*)(&byte_1659e) = si;);	// 18664                  mov     word ptr cs:byte_1659E, si ;~ 0715:17A1
cs=0x715;eip=0x0017a6; 	X(*(dw*)(&byte_165a0) = ds;);	// 18665                  mov     word ptr cs:byte_165A0, ds ;~ 0715:17A6
cs=0x715;eip=0x0017ab; 	T(CMP(*(dw*)(raddr(ss,bp+0x0C)), 0x0FFFF));	// 18666                  cmp     word ptr [bp+0Ch], 0FFFFh ;~ 0715:17AB
cs=0x715;eip=0x0017af; 	J(JZ(loc_16ef9));	// 18667                  jz      short loc_16EF9 ;~ 0715:17AF
loc_16ee1:
	// 5335 
cs=0x715;eip=0x0017b1; 	X(PUSH(cs));	// 18670                  push    cs ;~ 0715:17B1
cs=0x715;eip=0x0017b2; 	J(CALL(sub_1666d,0));	// 18671                  call    near ptr sub_1666D ;~ 0715:17B2
cs=0x715;eip=0x0017b5; 	T(CMP(ax, 0));	// 18672                  cmp     ax, 0 ;~ 0715:17B5
cs=0x715;eip=0x0017b8; 	J(JZ(loc_16f63));	// 18673                  jz      short loc_16F63 ;~ 0715:17B8
cs=0x715;eip=0x0017ba; 	X(PUSH(cs));	// 18674                  push    cs ;~ 0715:17BA
cs=0x715;eip=0x0017bb; 	J(CALL(sub_1667c,0));	// 18675                  call    near ptr sub_1667C ;~ 0715:17BB
cs=0x715;eip=0x0017be; 	T(si = ax;);	// 18676                  mov     si, ax ;~ 0715:17BE
cs=0x715;eip=0x0017c0; 	X(PUSH(cs));	// 18677                  push    cs ;~ 0715:17C0
cs=0x715;eip=0x0017c1; 	J(CALL(sub_167ee,0));	// 18678                  call    near ptr sub_167EE ;~ 0715:17C1
cs=0x715;eip=0x0017c4; 	T(CMP(si, *(dw*)(raddr(ss,bp+0x0C))));	// 18679                  cmp     si, [bp+0Ch] ;~ 0715:17C4
cs=0x715;eip=0x0017c7; 	J(JNZ(loc_16ee1));	// 18680                  jnz     short loc_16EE1 ;~ 0715:17C7
loc_16ef9:
	// 5336 
cs=0x715;eip=0x0017c9; 	X(PUSH(cs));	// 18684                  push    cs ;~ 0715:17C9
cs=0x715;eip=0x0017ca; 	J(CALL(sub_1666d,0));	// 18685                  call    near ptr sub_1666D ;~ 0715:17CA
cs=0x715;eip=0x0017cd; 	T(CMP(ax, 0));	// 18686                  cmp     ax, 0 ;~ 0715:17CD
cs=0x715;eip=0x0017d0; 	J(JZ(loc_16f63));	// 18687                  jz      short loc_16F63 ;~ 0715:17D0
cs=0x715;eip=0x0017d2; 	T(CMP(ax, 1));	// 18688                  cmp     ax, 1 ;~ 0715:17D2
cs=0x715;eip=0x0017d5; 	J(JNZ(loc_16f34));	// 18689                  jnz     short loc_16F34 ;~ 0715:17D5
cs=0x715;eip=0x0017d7; 	T(LDS(si, *(dd*)(&byte_1659e)));	// 18690                  lds     si, dword ptr cs:byte_1659E ;~ 0715:17D7
cs=0x715;eip=0x0017dc; 	X(PUSH(*(dw*)(raddr(ds,si+4))));	// 18691                  push    word ptr [si+4] ;~ 0715:17DC
cs=0x715;eip=0x0017df; 	X(PUSH(cs));	// 18692                  push    cs ;~ 0715:17DF
cs=0x715;eip=0x0017e0; 	J(CALL(sub_16693,0));	// 18693                  call    near ptr sub_16693 ;~ 0715:17E0
cs=0x715;eip=0x0017e3; 	T(ADD(sp, 2));	// 18694                  add     sp, 2 ;~ 0715:17E3
cs=0x715;eip=0x0017e6; 	X(MOV(*(dw*)(raddr(ss,bp-8)), ax));	// 18695                  mov     [bp-8], ax ;~ 0715:17E6
cs=0x715;eip=0x0017e9; 	T(MOV(al, *(raddr(ds,si+5))));	// 18696                  mov     al, [si+5] ;~ 0715:17E9
cs=0x715;eip=0x0017ec; 	T(AND(al, 0x0F));	// 18697                  and     al, 0Fh ;~ 0715:17EC
cs=0x715;eip=0x0017ee; 	X(MOV(*(raddr(ss,bp-6)), al));	// 18698                  mov     [bp-6], al ;~ 0715:17EE
cs=0x715;eip=0x0017f1; 	T(MOV(ax, *(dw*)(raddr(ds,si+1))));	// 18699                  mov     ax, [si+1] ;~ 0715:17F1
cs=0x715;eip=0x0017f4; 	T(MOV(dx, *(dw*)(raddr(ds,si+3))));	// 18700                  mov     dx, [si+3] ;~ 0715:17F4
cs=0x715;eip=0x0017f7; 	T(dh = 0;);	// 18701                  mov     dh, 0 ;~ 0715:17F7
cs=0x715;eip=0x0017f9; 	T(SUB(ax, 2));	// 18702                  sub     ax, 2 ;~ 0715:17F9
cs=0x715;eip=0x0017fc; 	T(SBB(dx, 0));	// 18703                  sbb     dx, 0 ;~ 0715:17FC
cs=0x715;eip=0x0017ff; 	T(ADD(si, 6));	// 18704                  add     si, 6 ;~ 0715:17FF
cs=0x715;eip=0x001802; 	J(JMP(loc_16f49));	// 18705                  jmp     short loc_16F49 ;~ 0715:1802
loc_16f34:
	// 5337 
cs=0x715;eip=0x001804; 	T(CMP(ax, 2));	// 18709                  cmp     ax, 2 ;~ 0715:1804
cs=0x715;eip=0x001807; 	J(JNZ(loc_16f5d));	// 18710                  jnz     short loc_16F5D ;~ 0715:1807
cs=0x715;eip=0x001809; 	T(LDS(si, *(dd*)(&byte_1659e)));	// 18711                  lds     si, dword ptr cs:byte_1659E ;~ 0715:1809
cs=0x715;eip=0x00180e; 	T(MOV(ax, *(dw*)(raddr(ds,si+1))));	// 18712                  mov     ax, [si+1] ;~ 0715:180E
cs=0x715;eip=0x001811; 	T(MOV(dx, *(dw*)(raddr(ds,si+3))));	// 18713                  mov     dx, [si+3] ;~ 0715:1811
cs=0x715;eip=0x001814; 	T(dh = 0;);	// 18714                  mov     dh, 0 ;~ 0715:1814
cs=0x715;eip=0x001816; 	T(ADD(si, 4));	// 18715                  add     si, 4 ;~ 0715:1816
loc_16f49:
	// 5338 
cs=0x715;eip=0x001819; 	T(CMP(*(raddr(ss,bp-6)), 0));	// 18718                  cmp     byte ptr [bp-6], 0 ;~ 0715:1819
cs=0x715;eip=0x00181d; 	J(JNZ(loc_16f5d));	// 18719                  jnz     short loc_16F5D ;~ 0715:181D
cs=0x715;eip=0x00181f; 	X(PUSH(dx));	// 18720                  push    dx ;~ 0715:181F
cs=0x715;eip=0x001820; 	X(PUSH(ax));	// 18721                  push    ax ;~ 0715:1820
cs=0x715;eip=0x001821; 	X(PUSH(ds));	// 18722                  push    ds ;~ 0715:1821
cs=0x715;eip=0x001822; 	X(PUSH(si));	// 18723                  push    si ;~ 0715:1822
cs=0x715;eip=0x001823; 	X(PUSH(*(dw*)(raddr(ss,bp-8))));	// 18724                  push    word ptr [bp-8] ;~ 0715:1823
cs=0x715;eip=0x001826; 	X(PUSH(cs));	// 18725                  push    cs ;~ 0715:1826
cs=0x715;eip=0x001827; 	J(CALL(sub_166ce,0));	// 18726                  call    near ptr sub_166CE ;~ 0715:1827
cs=0x715;eip=0x00182a; 	T(ADD(sp, 0x0A));	// 18727                  add     sp, 0Ah ;~ 0715:182A
loc_16f5d:
	// 5339 
cs=0x715;eip=0x00182d; 	X(PUSH(cs));	// 18731                  push    cs ;~ 0715:182D
cs=0x715;eip=0x00182e; 	J(CALL(sub_167ee,0));	// 18732                  call    near ptr sub_167EE ;~ 0715:182E
cs=0x715;eip=0x001831; 	J(JMP(loc_16ef9));	// 18733                  jmp     short loc_16EF9 ;~ 0715:1831
loc_16f63:
	// 5340 
cs=0x715;eip=0x001833; 	X(POP(di));	// 18738                  pop     di ;~ 0715:1833
cs=0x715;eip=0x001834; 	X(POP(si));	// 18739                  pop     si ;~ 0715:1834
cs=0x715;eip=0x001835; 	X(POP(ds));	// 18740                  pop     ds ;~ 0715:1835
cs=0x715;eip=0x001836; 	T(sp = bp;);	// 18741                  mov     sp, bp ;~ 0715:1836
cs=0x715;eip=0x001838; 	X(POP(bp));	// 18742                  pop     bp ;~ 0715:1838
cs=0x715;eip=0x001839; 	J(RETF(0));	// 18743                  retf ;~ 0715:1839
ret_715_183a:
	// 5341 
cs=0x715;eip=0x00183a; 	X(PUSH(bp));	// 18745                  push    bp ;~ 0715:183A
cs=0x715;eip=0x00183b; 	T(bp = sp;);	// 18746                  mov     bp, sp ;~ 0715:183B
cs=0x715;eip=0x00183d; 	T(SUB(sp, 4));	// 18747                  sub     sp, 4 ;~ 0715:183D
cs=0x715;eip=0x001840; 	X(PUSH(ds));	// 18748                  push    ds ;~ 0715:1840
cs=0x715;eip=0x001841; 	X(PUSH(si));	// 18749                  push    si ;~ 0715:1841
cs=0x715;eip=0x001842; 	X(PUSH(di));	// 18750                  push    di ;~ 0715:1842
cs=0x715;eip=0x001843; 	T(LDS(si, *(dw*)(raddr(ss,bp+8))));	// 18751                  lds     si, [bp+8] ;~ 0715:1843
cs=0x715;eip=0x001846; 	T(MOV(ax, *(dw*)(raddr(ds,si+8))));	// 18752                  mov     ax, [si+8] ;~ 0715:1846
cs=0x715;eip=0x001849; 	T(MOV(dx, *(dw*)(raddr(ds,si+0x0A))));	// 18753                  mov     dx, [si+0Ah] ;~ 0715:1849
cs=0x715;eip=0x00184c; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 18754                  mov     [bp-4], ax ;~ 0715:184C
cs=0x715;eip=0x00184f; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 18755                  mov     [bp-2], dx ;~ 0715:184F
cs=0x715;eip=0x001852; 	X(PUSH(*(dw*)(raddr(ds,si+2))));	// 18756                  push    word ptr [si+2] ;~ 0715:1852
cs=0x715;eip=0x001855; 	X(PUSH(cs));	// 18757                  push    cs ;~ 0715:1855
cs=0x715;eip=0x001856; 	J(CALL(sub_16693,0));	// 18758                  call    near ptr sub_16693 ;~ 0715:1856
cs=0x715;eip=0x001859; 	T(ADD(sp, 4));	// 18759                  add     sp, 4 ;~ 0715:1859
cs=0x715;eip=0x00185c; 	X(PUSH(*(dw*)(raddr(ss,bp-2))));	// 18760                  push    word ptr [bp-2] ;~ 0715:185C
cs=0x715;eip=0x00185f; 	X(PUSH(*(dw*)(raddr(ss,bp-4))));	// 18761                  push    word ptr [bp-4] ;~ 0715:185F
cs=0x715;eip=0x001862; 	X(PUSH(*(dw*)(raddr(ds,si+6))));	// 18762                  push    word ptr [si+6] ;~ 0715:1862
cs=0x715;eip=0x001865; 	X(PUSH(*(dw*)(raddr(ds,si+4))));	// 18763                  push    word ptr [si+4] ;~ 0715:1865
cs=0x715;eip=0x001868; 	X(PUSH(ax));	// 18764                  push    ax ;~ 0715:1868
cs=0x715;eip=0x001869; 	X(PUSH(cs));	// 18765                  push    cs ;~ 0715:1869
cs=0x715;eip=0x00186a; 	J(CALL(sub_166ce,0));	// 18766                  call    near ptr sub_166CE ;~ 0715:186A
cs=0x715;eip=0x00186d; 	T(ADD(sp, 0x0A));	// 18767                  add     sp, 0Ah ;~ 0715:186D
cs=0x715;eip=0x001870; 	X(POP(di));	// 18768                  pop     di ;~ 0715:1870
cs=0x715;eip=0x001871; 	X(POP(si));	// 18769                  pop     si ;~ 0715:1871
cs=0x715;eip=0x001872; 	X(POP(ds));	// 18770                  pop     ds ;~ 0715:1872
cs=0x715;eip=0x001873; 	T(sp = bp;);	// 18771                  mov     sp, bp ;~ 0715:1873
cs=0x715;eip=0x001875; 	X(POP(bp));	// 18772                  pop     bp ;~ 0715:1875
cs=0x715;eip=0x001876; 	J(RETF(0));	// 18773                  retf ;~ 0715:1876
ret_715_1877:
	// 5342 
cs=0x715;eip=0x001877; 	X(PUSH(bp));	// 18775                  push    bp ;~ 0715:1877
cs=0x715;eip=0x001878; 	T(bp = sp;);	// 18776                  mov     bp, sp ;~ 0715:1878
cs=0x715;eip=0x00187a; 	X(PUSH(ds));	// 18777                  push    ds ;~ 0715:187A
cs=0x715;eip=0x00187b; 	X(PUSH(si));	// 18778                  push    si ;~ 0715:187B
cs=0x715;eip=0x00187c; 	X(PUSH(di));	// 18779                  push    di ;~ 0715:187C
cs=0x715;eip=0x00187d; 	T(CMP(*(dw*)(&byte_16598), 0));	// 18780                  cmp     word ptr cs:byte_16598, 0 ;~ 0715:187D
cs=0x715;eip=0x001883; 	J(JZ(loc_16fd7));	// 18781                  jz      short loc_16FD7 ;~ 0715:1883
cs=0x715;eip=0x001885; 	T(CMP(*(dw*)(&byte_1659a), 2));	// 18782                  cmp     word ptr cs:byte_1659A, 2 ;~ 0715:1885
cs=0x715;eip=0x00188b; 	J(JZ(loc_16fea));	// 18783                  jz      short loc_16FEA ;~ 0715:188B
cs=0x715;eip=0x00188d; 	X(PUSH(cs));	// 18784                  push    cs ;~ 0715:188D
cs=0x715;eip=0x00188e; 	J(CALL(sub_16843,0));	// 18785                  call    near ptr sub_16843 ;~ 0715:188E
cs=0x715;eip=0x001891; 	T(CMP(ax, 0x0FFFF));	// 18786                  cmp     ax, 0FFFFh ;~ 0715:1891
cs=0x715;eip=0x001894; 	J(JZ(loc_16fea));	// 18787                  jz      short loc_16FEA ;~ 0715:1894
cs=0x715;eip=0x001896; 	X(*(dw*)(&byte_1659a) = 2;);	// 18788                  mov     word ptr cs:byte_1659A, 2 ;~ 0715:1896
cs=0x715;eip=0x00189d; 	X(PUSH(ax));	// 18789                  push    ax ;~ 0715:189D
cs=0x715;eip=0x00189e; 	X(PUSH(cs));	// 18790                  push    cs ;~ 0715:189E
cs=0x715;eip=0x00189f; 	J(CALL(sub_169c1,0));	// 18791                  call    near ptr sub_169C1 ;~ 0715:189F
cs=0x715;eip=0x0018a2; 	T(ADD(sp, 2));	// 18792                  add     sp, 2 ;~ 0715:18A2
cs=0x715;eip=0x0018a5; 	J(JMP(loc_16fea));	// 18793                  jmp     short loc_16FEA ;~ 0715:18A5
loc_16fd7:
	// 5343 
cs=0x715;eip=0x0018a7; 	T(CMP(*(dw*)(&byte_1659a), 0));	// 18797                  cmp     word ptr cs:byte_1659A, 0 ;~ 0715:18A7
cs=0x715;eip=0x0018ad; 	J(JNZ(loc_16fea));	// 18798                  jnz     short loc_16FEA ;~ 0715:18AD
cs=0x715;eip=0x0018af; 	X(*(dw*)(&byte_1659a) = 2;);	// 18799                  mov     word ptr cs:byte_1659A, 2 ;~ 0715:18AF
cs=0x715;eip=0x0018b6; 	X(PUSH(cs));	// 18800                  push    cs ;~ 0715:18B6
cs=0x715;eip=0x0018b7; 	J(CALL(sub_1686a,0));	// 18801                  call    near ptr sub_1686A ;~ 0715:18B7
loc_16fea:
	// 5344 
cs=0x715;eip=0x0018ba; 	X(POP(di));	// 18805                  pop     di ;~ 0715:18BA
cs=0x715;eip=0x0018bb; 	X(POP(si));	// 18806                  pop     si ;~ 0715:18BB
cs=0x715;eip=0x0018bc; 	X(POP(ds));	// 18807                  pop     ds ;~ 0715:18BC
cs=0x715;eip=0x0018bd; 	X(POP(bp));	// 18808                  pop     bp ;~ 0715:18BD
cs=0x715;eip=0x0018be; 	J(RETF(0));	// 18809                  retf ;~ 0715:18BE

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_16c84: 	goto loc_16c84;
        case m2c::kloc_16c90: 	goto loc_16c90;
        case m2c::kloc_16c9c: 	goto loc_16c9c;
        case m2c::kloc_16ca9: 	goto loc_16ca9;
        case m2c::kloc_16cea: 	goto loc_16cea;
        case m2c::kloc_16d5d: 	goto loc_16d5d;
        case m2c::kloc_16d88: 	goto loc_16d88;
        case m2c::kloc_16e56: 	goto loc_16e56;
        case m2c::kloc_16e6e: 	goto loc_16e6e;
        case m2c::kloc_16e75: 	goto loc_16e75;
        case m2c::kloc_16ee1: 	goto loc_16ee1;
        case m2c::kloc_16ef9: 	goto loc_16ef9;
        case m2c::kloc_16f34: 	goto loc_16f34;
        case m2c::kloc_16f49: 	goto loc_16f49;
        case m2c::kloc_16f5d: 	goto loc_16f5d;
        case m2c::kloc_16f63: 	goto loc_16f63;
        case m2c::kloc_16fd7: 	goto loc_16fd7;
        case m2c::kloc_16fea: 	goto loc_16fea;
        case m2c::kret_715_1474: 	goto ret_715_1474;
        case m2c::kret_715_14d9: 	goto ret_715_14d9;
        case m2c::kret_715_150c: 	goto ret_715_150c;
        case m2c::kret_715_1632: 	goto ret_715_1632;
        case m2c::kret_715_1691: 	goto ret_715_1691;
        case m2c::kret_715_16a6: 	goto ret_715_16a6;
        case m2c::kret_715_174c: 	goto ret_715_174c;
        case m2c::kret_715_183a: 	goto ret_715_183a;
        case m2c::kret_715_1877: 	goto ret_715_1877;
        case m2c::kseg003_1466_proc: 	goto seg003_1466_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_16fef(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_16fef:
    _begin:
cs=0x715;eip=0x0018bf; 	X(PUSH(bp));	// 18817                  push    bp ;~ 0715:18BF
cs=0x715;eip=0x0018c0; 	T(bp = sp;);	// 18818                  mov     bp, sp ;~ 0715:18C0
cs=0x715;eip=0x0018c2; 	X(PUSH(ds));	// 18819                  push    ds ;~ 0715:18C2
cs=0x715;eip=0x0018c3; 	X(PUSH(si));	// 18820                  push    si ;~ 0715:18C3
cs=0x715;eip=0x0018c4; 	X(PUSH(di));	// 18821                  push    di ;~ 0715:18C4
cs=0x715;eip=0x0018c5; 	X(*(dw*)(&byte_1659a) = 0;);	// 18822                  mov     word ptr cs:byte_1659A, 0 ;~ 0715:18C5
cs=0x715;eip=0x0018cc; 	X(PUSH(ax));	// 18823                  push    ax ;~ 0715:18CC
cs=0x715;eip=0x0018cd; 	X(PUSH(bp));	// 18824                  push    bp ;~ 0715:18CD
cs=0x715;eip=0x0018ce; 	T(bp = sp;);	// 18825                  mov     bp, sp ;~ 0715:18CE
cs=0x715;eip=0x0018d0; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0));	// 18826                  mov     word ptr [bp+2], 0 ;~ 0715:18D0
cs=0x715;eip=0x0018d5; 	X(POP(bp));	// 18827                  pop     bp ;~ 0715:18D5
cs=0x715;eip=0x0018d6; 	X(PUSH(ax));	// 18828                  push    ax ;~ 0715:18D6
cs=0x715;eip=0x0018d7; 	X(PUSH(bp));	// 18829                  push    bp ;~ 0715:18D7
cs=0x715;eip=0x0018d8; 	T(bp = sp;);	// 18830                  mov     bp, sp ;~ 0715:18D8
cs=0x715;eip=0x0018da; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0));	// 18831                  mov     word ptr [bp+2], 0 ;~ 0715:18DA
cs=0x715;eip=0x0018df; 	X(POP(bp));	// 18832                  pop     bp ;~ 0715:18DF
cs=0x715;eip=0x0018e0; 	X(PUSH(cs));	// 18833                  push    cs ;~ 0715:18E0
cs=0x715;eip=0x0018e1; 	J(CALL(sub_16781,0));	// 18834                  call    near ptr sub_16781 ;~ 0715:18E1
cs=0x715;eip=0x0018e4; 	T(ADD(sp, 4));	// 18835                  add     sp, 4 ;~ 0715:18E4
cs=0x715;eip=0x0018e7; 	T(ax = 0x68F;);	// 18836                  mov     ax, 68Fh ;~ 0715:18E7
cs=0x715;eip=0x0018ea; 	S(_INT(0x66));	// 18837                  int     66h             ; reserved for user interrupt ;~ 0715:18EA
cs=0x715;eip=0x0018ec; 	X(*(dw*)(&byte_16594) = 3;);	// 18838                  mov     word ptr cs:byte_16594, 3 ;~ 0715:18EC
cs=0x715;eip=0x0018f3; 	X(*(dw*)(&byte_16596) = 3;);	// 18839                  mov     word ptr cs:byte_16596, 3 ;~ 0715:18F3
cs=0x715;eip=0x0018fa; 	X(PUSH(cs));	// 18840                  push    cs ;~ 0715:18FA
cs=0x715;eip=0x0018fb; 	J(CALL(sub_165ef,0));	// 18841                  call    near ptr sub_165EF ;~ 0715:18FB
cs=0x715;eip=0x0018fe; 	X(POP(di));	// 18842                  pop     di ;~ 0715:18FE
cs=0x715;eip=0x0018ff; 	X(POP(si));	// 18843                  pop     si ;~ 0715:18FF
cs=0x715;eip=0x001900; 	X(POP(ds));	// 18844                  pop     ds ;~ 0715:1900
cs=0x715;eip=0x001901; 	X(POP(bp));	// 18845                  pop     bp ;~ 0715:1901
cs=0x715;eip=0x001902; 	J(RETF(0));	// 18846                  retf ;~ 0715:1902

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_16fef: 	goto sub_16fef;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg003_1903_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg003_1903_proc:
    _begin:
cs=0x715;eip=0x001903; 	X(PUSH(bp));	// 18850                  push    bp ;~ 0715:1903
cs=0x715;eip=0x001904; 	T(bp = sp;);	// 18851                  mov     bp, sp ;~ 0715:1904
cs=0x715;eip=0x001906; 	X(PUSH(ds));	// 18852                  push    ds ;~ 0715:1906
cs=0x715;eip=0x001907; 	X(PUSH(si));	// 18853                  push    si ;~ 0715:1907
cs=0x715;eip=0x001908; 	X(PUSH(di));	// 18854                  push    di ;~ 0715:1908
cs=0x715;eip=0x001909; 	T(ax = *(dw*)(&byte_1659a););	// 18855                  mov     ax, word ptr cs:byte_1659A ;~ 0715:1909
cs=0x715;eip=0x00190d; 	X(POP(di));	// 18856                  pop     di ;~ 0715:190D
cs=0x715;eip=0x00190e; 	X(POP(si));	// 18857                  pop     si ;~ 0715:190E
cs=0x715;eip=0x00190f; 	X(POP(ds));	// 18858                  pop     ds ;~ 0715:190F
cs=0x715;eip=0x001910; 	X(POP(bp));	// 18859                  pop     bp ;~ 0715:1910
cs=0x715;eip=0x001911; 	J(RETF(0));	// 18860                  retf ;~ 0715:1911

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg003_1903_proc: 	goto seg003_1903_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

