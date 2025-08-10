/* THIS IS GENERATED FILE */

        
#include "cfix.exe.h"

                

 bool sub_1e052(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1e052:
    _begin:
cs=0xf9f;eip=0x000082; 	X(PUSH(sp));	// 36566                  push    sp ;~ 0F9F:0082
cs=0xf9f;eip=0x000083; 	X(POP(ax));	// 36567                  pop     ax ;~ 0F9F:0083
cs=0xf9f;eip=0x000084; 	T(SUB(ax, sp));	// 36568                  sub     ax, sp ;~ 0F9F:0084
cs=0xf9f;eip=0x000086; 	X(word_6b85a = ax;);	// 36569                  mov     word_6B85A, ax ;~ 0F9F:0086
cs=0xf9f;eip=0x000089; 	J(RETN(0));	// 36570                  retn ;~ 0F9F:0089

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1e052: 	goto sub_1e052;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_45a_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_45a_proc:
    _begin:
loc_1e42a:
	// 6520 
cs=0xf9f;eip=0x00045a; 	X(PUSH(bp));	// 36848                  push    bp ;~ 0F9F:045A
cs=0xf9f;eip=0x00045b; 	T(bp = sp;);	// 36849                  mov     bp, sp ;~ 0F9F:045B
cs=0xf9f;eip=0x00045d; 	T(SUB(sp, 0x14));	// 36850                  sub     sp, 14h ;~ 0F9F:045D
cs=0xf9f;eip=0x000460; 	X(PUSH(di));	// 36851                  push    di ;~ 0F9F:0460
cs=0xf9f;eip=0x000461; 	X(PUSH(si));	// 36852                  push    si ;~ 0F9F:0461
cs=0xf9f;eip=0x000462; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0E))));	// 36853                  mov     si, [bp+0Eh] ;~ 0F9F:0462
cs=0xf9f;eip=0x000465; 	X(*(dw*)(&byte_6b85c) = si;);	// 36854                  mov     word ptr byte_6B85C, si ;~ 0F9F:0465
cs=0xf9f;eip=0x000469; 	X(PUSH(ds));	// 36855                  push    ds ;~ 0F9F:0469
cs=0xf9f;eip=0x00046a; 	T(MOV(ds, *(dw*)(raddr(ss,bp+0x10))));	// 36856                  mov     ds, word ptr [bp+10h] ;~ 0F9F:046A
cs=0xf9f;eip=0x00046d; 	T(LES(ax, *(dw*)(raddr(ss,bp+0x16))));	// 36858                  les     ax, [bp+16h] ;~ 0F9F:046D
cs=0xf9f;eip=0x000470; 	X(MOV(*(dw*)(raddr(ds,si+0x9A0)), ax));	// 36859                  mov     [si+9A0h], ax ;~ 0F9F:0470
cs=0xf9f;eip=0x000474; 	X(MOV(*(dw*)(raddr(ds,si+0x9A2)), es));	// 36860                  mov     word ptr [si+9A2h], es ;~ 0F9F:0474
cs=0xf9f;eip=0x000478; 	T(LES(ax, *(dw*)(raddr(ss,bp+0x12))));	// 36861                  les     ax, [bp+12h] ;~ 0F9F:0478
cs=0xf9f;eip=0x00047b; 	X(MOV(*(dw*)(raddr(ds,si+0x9A4)), ax));	// 36862                  mov     [si+9A4h], ax ;~ 0F9F:047B
cs=0xf9f;eip=0x00047f; 	X(MOV(*(dw*)(raddr(ds,si+0x9A6)), es));	// 36863                  mov     word ptr [si+9A6h], es ;~ 0F9F:047F
cs=0xf9f;eip=0x000483; 	T(LES(di, *(dw*)(raddr(ss,bp+6))));	// 36864                  les     di, [bp+6] ;~ 0F9F:0483
cs=0xf9f;eip=0x000486; 	T(MOV(ax, *(dw*)(raddr(es,di))));	// 36865                  mov     ax, es:[di] ;~ 0F9F:0486
cs=0xf9f;eip=0x000489; 	X(MOV(*(dw*)(raddr(ds,si+0x0C)), ax));	// 36866                  mov     [si+0Ch], ax ;~ 0F9F:0489
cs=0xf9f;eip=0x00048c; 	T(LES(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 36867                  les     bx, [bp+0Ah] ;~ 0F9F:048C
cs=0xf9f;eip=0x00048f; 	T(MOV(cx, *(dw*)(raddr(es,bx))));	// 36868                  mov     cx, es:[bx] ;~ 0F9F:048F
cs=0xf9f;eip=0x000492; 	X(MOV(*(dw*)(raddr(ds,si+0x0A)), cx));	// 36869                  mov     [si+0Ah], cx ;~ 0F9F:0492
cs=0xf9f;eip=0x000495; 	X(MOV(*(dw*)(raddr(ds,si+6)), 4));	// 36870                  mov     word ptr [si+6], 4 ;~ 0F9F:0495
cs=0xf9f;eip=0x00049a; 	X(MOV(*(dw*)(raddr(ds,si+8)), 0x0F));	// 36871                  mov     word ptr [si+8], 0Fh ;~ 0F9F:049A
cs=0xf9f;eip=0x00049f; 	X(POP(es));	// 36872                  pop     es ;~ 0F9F:049F
cs=0xf9f;eip=0x0004a0; 	X(MOV(*(dw*)(raddr(es,0x0E)), ds));	// 36873                  mov     word ptr es:0Eh, ds ;~ 0F9F:04A0
cs=0xf9f;eip=0x0004a5; 	X(PUSH(ds));	// 36874                  push    ds ;~ 0F9F:04A5
cs=0xf9f;eip=0x0004a6; 	X(POP(es));	// 36875                  pop     es ;~ 0F9F:04A6
cs=0xf9f;eip=0x0004a7; 	T(SUB(ax, 0x400));	// 36876                  sub     ax, 400h ;~ 0F9F:04A7
cs=0xf9f;eip=0x0004aa; 	J(JZ(loc_1e4ad));	// 36877                  jz      short loc_1E4AD ;~ 0F9F:04AA
cs=0xf9f;eip=0x0004ac; 	T(SUB(ax, 0x400));	// 36878                  sub     ax, 400h ;~ 0F9F:04AC
cs=0xf9f;eip=0x0004af; 	J(JZ(loc_1e4a6));	// 36879                  jz      short loc_1E4A6 ;~ 0F9F:04AF
cs=0xf9f;eip=0x0004b1; 	T(SUB(ax, 0x800));	// 36880                  sub     ax, 800h ;~ 0F9F:04B1
cs=0xf9f;eip=0x0004b4; 	J(JZ(loc_1e49f));	// 36881                  jz      short loc_1E49F ;~ 0F9F:04B4
cs=0xf9f;eip=0x0004b6; 	T(ax = 1;);	// 36882                  mov     ax, 1 ;~ 0F9F:04B6
loc_1e489:
	// 6521 
cs=0xf9f;eip=0x0004b9; 	T(bx = seg_offset(seg045););	// 36885                  mov     bx, seg seg045 ;~ 0F9F:04B9
cs=0xf9f;eip=0x0004bc; 	T(ds = bx;);	// 36886                  mov     ds, bx ;~ 0F9F:04BC
cs=0xf9f;eip=0x0004be; 	J(JMP(loc_1e569));	// 36888                  jmp     loc_1E569 ;~ 0F9F:04BE
ret_f9f_4c5:
	// 6522 
cs=0xf9f;eip=0x0004c5; 	X(PUSH(ax));	// 36894                  push    ax ;~ 0F9F:04C5
cs=0xf9f;eip=0x0004c6; 	T(ax = m2c::kloc_1e42a;);	// 36895                  mov     ax, offset loc_1E42A ;~ 0F9F:04C6
cs=0xf9f;eip=0x0004c9; 	X(PUSH(ax));	// 36896                  push    ax ;~ 0F9F:04C9
cs=0xf9f;eip=0x0004ca; 	J(CALL(sub_1e052,0));	// 36897                  call    sub_1E052 ;~ 0F9F:04CA
cs=0xf9f;eip=0x0004cd; 	J(RETF(0));	// 36898                  retf ;~ 0F9F:04CD
loc_1e49f:
	// 6523 
cs=0xf9f;eip=0x0004cf; 	X(INC(*(dw*)(raddr(ds,si+6))));	// 36904                  inc     word ptr [si+6] ;~ 0F9F:04CF
cs=0xf9f;eip=0x0004d2; 	X(OR(*(raddr(ds,si+8)), 0x20));	// 36905                  or      byte ptr [si+8], 20h ;~ 0F9F:04D2
loc_1e4a6:
	// 6524 
cs=0xf9f;eip=0x0004d6; 	X(INC(*(dw*)(raddr(ds,si+6))));	// 36908                  inc     word ptr [si+6] ;~ 0F9F:04D6
cs=0xf9f;eip=0x0004d9; 	X(OR(*(raddr(ds,si+8)), 0x10));	// 36909                  or      byte ptr [si+8], 10h ;~ 0F9F:04D9
loc_1e4ad:
	// 6525 
cs=0xf9f;eip=0x0004dd; 	J(JCXZ(loc_1e4b7));	// 36912                  jcxz    short loc_1E4B7 ;~ 0F9F:04DD
cs=0xf9f;eip=0x0004df; 	T(DEC(cx));	// 36913                  dec     cx ;~ 0F9F:04DF
cs=0xf9f;eip=0x0004e0; 	J(JZ(loc_1e4d5));	// 36914                  jz      short loc_1E4D5 ;~ 0F9F:04E0
cs=0xf9f;eip=0x0004e2; 	T(ax = 2;);	// 36915                  mov     ax, 2 ;~ 0F9F:04E2
cs=0xf9f;eip=0x0004e5; 	J(JMP(loc_1e489));	// 36916                  jmp     short loc_1E489 ;~ 0F9F:04E5
loc_1e4b7:
	// 6526 
cs=0xf9f;eip=0x0004e7; 	T(CLD);	// 36920                  cld ;~ 0F9F:04E7
cs=0xf9f;eip=0x0004e8; 	T(di = si+0x8E);	// 36921                  lea     di, [si+8Eh] ;~ 0F9F:04E8
cs=0xf9f;eip=0x0004ec; 	T(ax = 0x909;);	// 36922                  mov     ax, 909h ;~ 0F9F:04EC
cs=0xf9f;eip=0x0004ef; 	T(cx = 0x80;);	// 36923                  mov     cx, 80h ;~ 0F9F:04EF
	// 36924                  rep stosw ;~ 0F9F:04F2
cs=0xf9f;eip=0x0004f2; 	X(	REP STOSW);	// 36924                  rep stosw ;~ 0F9F:04F2
cs=0xf9f;eip=0x0004f4; 	T(cx = 0x100;);	// 36925                  mov     cx, 100h ;~ 0F9F:04F4
cs=0xf9f;eip=0x0004f7; 	T(di = si+0x394);	// 36926                  lea     di, [si+394h] ;~ 0F9F:04F7
cs=0xf9f;eip=0x0004fb; 	T(XOR(ax, ax));	// 36927                  xor     ax, ax ;~ 0F9F:04FB
loc_1e4cd:
	// 6527 
cs=0xf9f;eip=0x0004fd; 	X(STOSW);	// 36930                  stosw ;~ 0F9F:04FD
cs=0xf9f;eip=0x0004fe; 	T(INC(ax));	// 36931                  inc     ax ;~ 0F9F:04FE
cs=0xf9f;eip=0x0004ff; 	T(INC(ax));	// 36932                  inc     ax ;~ 0F9F:04FF
cs=0xf9f;eip=0x000500; 	J(LOOP(loc_1e4cd));	// 36933                  loop    loc_1E4CD ;~ 0F9F:0500
cs=0xf9f;eip=0x000502; 	J(JMP(loc_1e4f5));	// 36934                  jmp     short loc_1E4F5 ;~ 0F9F:0502
loc_1e4d5:
	// 6528 
cs=0xf9f;eip=0x000505; 	T(bx = 0x0FF;);	// 36940                  mov     bx, 0FFh ;~ 0F9F:0505
loc_1e4d8:
	// 6529 
cs=0xf9f;eip=0x000508; 	T(MOV(al, *(raddr(cs,bx+0x15A))));	// 36943                  mov     al, cs:[bx+15Ah] ;~ 0F9F:0508
cs=0xf9f;eip=0x00050d; 	T(INC(al));	// 36944                  inc     al ;~ 0F9F:050D
cs=0xf9f;eip=0x00050f; 	X(MOV(*(raddr(ds,bx+si+0x8E)), al));	// 36945                  mov     [bx+si+8Eh], al ;~ 0F9F:050F
cs=0xf9f;eip=0x000513; 	T(SHL(bx, 1));	// 36946                  shl     bx, 1 ;~ 0F9F:0513
cs=0xf9f;eip=0x000515; 	T(MOV(ax, *(dw*)(raddr(cs,bx+0x25A))));	// 36947                  mov     ax, cs:[bx+25Ah] ;~ 0F9F:0515
cs=0xf9f;eip=0x00051a; 	T(SHL(ax, 1));	// 36948                  shl     ax, 1 ;~ 0F9F:051A
cs=0xf9f;eip=0x00051c; 	X(MOV(*(dw*)(raddr(ds,bx+si+0x394)), ax));	// 36949                  mov     [bx+si+394h], ax ;~ 0F9F:051C
cs=0xf9f;eip=0x000520; 	T(SHR(bx, 1));	// 36950                  shr     bx, 1 ;~ 0F9F:0520
cs=0xf9f;eip=0x000522; 	T(DEC(bx));	// 36951                  dec     bx ;~ 0F9F:0522
cs=0xf9f;eip=0x000523; 	J(JGE(loc_1e4d8));	// 36952                  jge     short loc_1E4D8 ;~ 0F9F:0523
loc_1e4f5:
	// 6530 
cs=0xf9f;eip=0x000525; 	T(XOR(di, di));	// 36955                  xor     di, di ;~ 0F9F:0525
cs=0xf9f;eip=0x000527; 	T(bx = 0x100;);	// 36956                  mov     bx, 100h ;~ 0F9F:0527
loc_1e4fa:
	// 6531 
cs=0xf9f;eip=0x00052a; 	T(MOV(cl, *(raddr(cs,di+0x10A))));	// 36959                  mov     cl, cs:[di+10Ah] ;~ 0F9F:052A
cs=0xf9f;eip=0x00052f; 	T(dx = 1;);	// 36960                  mov     dx, 1 ;~ 0F9F:052F
cs=0xf9f;eip=0x000532; 	T(SHL(dx, cl));	// 36961                  shl     dx, cl ;~ 0F9F:0532
cs=0xf9f;eip=0x000534; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), dx));	// 36962                  mov     [bp-0Ah], dx ;~ 0F9F:0534
cs=0xf9f;eip=0x000537; 	T(XOR(dx, dx));	// 36963                  xor     dx, dx ;~ 0F9F:0537
loc_1e509:
	// 6532 
cs=0xf9f;eip=0x000539; 	T(MOV(al, *(raddr(cs,di+0x13A))));	// 36966                  mov     al, cs:[di+13Ah] ;~ 0F9F:0539
cs=0xf9f;eip=0x00053e; 	T(cl = al;);	// 36967                  mov     cl, al ;~ 0F9F:053E
cs=0xf9f;eip=0x000540; 	T(INC(al));	// 36968                  inc     al ;~ 0F9F:0540
cs=0xf9f;eip=0x000542; 	T(ADD(al, *(raddr(cs,di+0x10A))));	// 36969                  add     al, cs:[di+10Ah] ;~ 0F9F:0542
cs=0xf9f;eip=0x000547; 	X(MOV(*(raddr(ds,bx+si+0x8E)), al));	// 36970                  mov     [bx+si+8Eh], al ;~ 0F9F:0547
cs=0xf9f;eip=0x00054b; 	T(ax = dx;);	// 36971                  mov     ax, dx ;~ 0F9F:054B
cs=0xf9f;eip=0x00054d; 	T(SHL(ax, cl));	// 36972                  shl     ax, cl ;~ 0F9F:054D
cs=0xf9f;eip=0x00054f; 	T(OR(al, *(raddr(cs,di+0x14A))));	// 36973                  or      al, cs:[di+14Ah] ;~ 0F9F:054F
cs=0xf9f;eip=0x000554; 	T(SHL(ax, 1));	// 36974                  shl     ax, 1 ;~ 0F9F:0554
cs=0xf9f;eip=0x000556; 	T(INC(ax));	// 36975                  inc     ax ;~ 0F9F:0556
cs=0xf9f;eip=0x000557; 	T(SHL(bx, 1));	// 36976                  shl     bx, 1 ;~ 0F9F:0557
cs=0xf9f;eip=0x000559; 	X(MOV(*(dw*)(raddr(ds,bx+si+0x394)), ax));	// 36977                  mov     [bx+si+394h], ax ;~ 0F9F:0559
cs=0xf9f;eip=0x00055d; 	T(SHR(bx, 1));	// 36978                  shr     bx, 1 ;~ 0F9F:055D
cs=0xf9f;eip=0x00055f; 	T(INC(bx));	// 36979                  inc     bx ;~ 0F9F:055F
cs=0xf9f;eip=0x000560; 	T(INC(dx));	// 36980                  inc     dx ;~ 0F9F:0560
cs=0xf9f;eip=0x000561; 	T(CMP(*(dw*)(raddr(ss,bp-0x0A)), dx));	// 36981                  cmp     [bp-0Ah], dx ;~ 0F9F:0561
cs=0xf9f;eip=0x000564; 	J(JA(loc_1e509));	// 36982                  ja      short loc_1E509 ;~ 0F9F:0564
cs=0xf9f;eip=0x000566; 	T(INC(di));	// 36983                  inc     di ;~ 0F9F:0566
cs=0xf9f;eip=0x000567; 	T(CMP(di, 0x10));	// 36984                  cmp     di, 10h ;~ 0F9F:0567
cs=0xf9f;eip=0x00056a; 	J(JC(loc_1e4fa));	// 36985                  jb      short loc_1E4FA ;~ 0F9F:056A
cs=0xf9f;eip=0x00056c; 	T(ax = seg_offset(seg045););	// 36986                  mov     ax, seg seg045 ;~ 0F9F:056C
cs=0xf9f;eip=0x00056f; 	T(ds = ax;);	// 36987                  mov     ds, ax ;~ 0F9F:056F
cs=0xf9f;eip=0x000571; 	T(ax = si+0x4E);	// 36988                  lea     ax, [si+4Eh] ;~ 0F9F:0571
cs=0xf9f;eip=0x000574; 	X(PUSH(es));	// 36989                  push    es ;~ 0F9F:0574
cs=0xf9f;eip=0x000575; 	X(PUSH(ax));	// 36990                  push    ax ;~ 0F9F:0575
cs=0xf9f;eip=0x000576; 	T(ax = 0x0CA;);	// 36991                  mov     ax, 0CAh ;~ 0F9F:0576
cs=0xf9f;eip=0x000579; 	X(PUSH(cs));	// 36992                  push    cs ;~ 0F9F:0579
cs=0xf9f;eip=0x00057a; 	X(PUSH(ax));	// 36993                  push    ax ;~ 0F9F:057A
cs=0xf9f;eip=0x00057b; 	T(ax = 0x40;);	// 36994                  mov     ax, 40h ; '@' ;~ 0F9F:057B
cs=0xf9f;eip=0x00057e; 	J(CALL(sub_1eba2,0));	// 36995                  call    sub_1EBA2 ;~ 0F9F:057E
cs=0xf9f;eip=0x000581; 	T(ax = si+0x0E);	// 36996                  lea     ax, [si+0Eh] ;~ 0F9F:0581
cs=0xf9f;eip=0x000584; 	X(PUSH(*(dw*)(&byte_6b85e)));	// 36997                  push    word ptr byte_6B85E ;~ 0F9F:0584
cs=0xf9f;eip=0x000588; 	X(PUSH(ax));	// 36998                  push    ax ;~ 0F9F:0588
cs=0xf9f;eip=0x000589; 	T(ax = 0x8A;);	// 36999                  mov     ax, 8Ah ;~ 0F9F:0589
cs=0xf9f;eip=0x00058c; 	X(PUSH(cs));	// 37000                  push    cs ;~ 0F9F:058C
cs=0xf9f;eip=0x00058d; 	X(PUSH(ax));	// 37001                  push    ax ;~ 0F9F:058D
cs=0xf9f;eip=0x00058e; 	T(ax = 0x40;);	// 37002                  mov     ax, 40h ; '@' ;~ 0F9F:058E
cs=0xf9f;eip=0x000591; 	J(CALL(sub_1eba2,0));	// 37003                  call    sub_1EBA2 ;~ 0F9F:0591
cs=0xf9f;eip=0x000594; 	J(CALL(sub_1e572,0));	// 37004                  call    sub_1E572 ;~ 0F9F:0594
cs=0xf9f;eip=0x000597; 	T(SUB(ax, ax));	// 37005                  sub     ax, ax ;~ 0F9F:0597
loc_1e569:
	// 6533 
cs=0xf9f;eip=0x000599; 	X(POP(si));	// 37008                  pop     si ;~ 0F9F:0599
cs=0xf9f;eip=0x00059a; 	X(POP(di));	// 37009                  pop     di ;~ 0F9F:059A
cs=0xf9f;eip=0x00059b; 	T(sp = bp;);	// 37010                  mov     sp, bp ;~ 0F9F:059B
cs=0xf9f;eip=0x00059d; 	X(POP(bp));	// 37011                  pop     bp ;~ 0F9F:059D
cs=0xf9f;eip=0x00059e; 	J(RETF(0x14));	// 37012                  retf    14h ;~ 0F9F:059E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1e489: 	goto loc_1e489;
        case m2c::kloc_1e49f: 	goto loc_1e49f;
        case m2c::kloc_1e4a6: 	goto loc_1e4a6;
        case m2c::kloc_1e4ad: 	goto loc_1e4ad;
        case m2c::kloc_1e4b7: 	goto loc_1e4b7;
        case m2c::kloc_1e4cd: 	goto loc_1e4cd;
        case m2c::kloc_1e4d5: 	goto loc_1e4d5;
        case m2c::kloc_1e4d8: 	goto loc_1e4d8;
        case m2c::kloc_1e4f5: 	goto loc_1e4f5;
        case m2c::kloc_1e4fa: 	goto loc_1e4fa;
        case m2c::kloc_1e509: 	goto loc_1e509;
        case m2c::kloc_1e569: 	goto loc_1e569;
        case m2c::kret_f9f_4c5: 	goto ret_f9f_4c5;
        case m2c::kseg001_45a_proc: 	goto seg001_45a_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1e572(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1e572:
    _begin:
#undef var_e
#define var_e -0x0E
	// 37022 var_E           = word ptr -0Eh ;~ 0F9F:05A2
#undef var_c
#define var_c -0x0C
	// 37023 var_C           = word ptr -0Ch ;~ 0F9F:05A2
#undef var_a
#define var_a -0x0A
	// 37024 var_A           = word ptr -0Ah ;~ 0F9F:05A2
#undef var_8
#define var_8 -8
	// 37025 var_8           = word ptr -8 ;~ 0F9F:05A2
#undef var_6
#define var_6 -6
	// 37026 var_6           = word ptr -6 ;~ 0F9F:05A2
#undef var_4
#define var_4 -4
	// 37027 var_4           = word ptr -4 ;~ 0F9F:05A2
#undef var_2
#define var_2 -2
	// 37028 var_2           = word ptr -2 ;~ 0F9F:05A2
cs=0xf9f;eip=0x0005a2; 	X(PUSH(bp));	// 37030                  push    bp ;~ 0F9F:05A2
cs=0xf9f;eip=0x0005a3; 	T(bp = sp;);	// 37031                  mov     bp, sp ;~ 0F9F:05A3
cs=0xf9f;eip=0x0005a5; 	T(SUB(sp, 0x0E));	// 37032                  sub     sp, 0Eh ;~ 0F9F:05A5
cs=0xf9f;eip=0x0005a8; 	X(PUSH(di));	// 37033                  push    di ;~ 0F9F:05A8
cs=0xf9f;eip=0x0005a9; 	X(PUSH(si));	// 37034                  push    si ;~ 0F9F:05A9
cs=0xf9f;eip=0x0005aa; 	T(LES(bx, *(dd*)(&byte_6b85c)));	// 37035                  les     bx, dword ptr byte_6B85C ;~ 0F9F:05AA
cs=0xf9f;eip=0x0005ae; 	T(ADD(bx, *(dw*)(raddr(es,bx+0x0C))));	// 37036                  add     bx, es:[bx+0Ch] ;~ 0F9F:05AE
cs=0xf9f;eip=0x0005b2; 	T(ax = bx+0x25B0);	// 37037                  lea     ax, [bx+25B0h] ;~ 0F9F:05B2
cs=0xf9f;eip=0x0005b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 37038                  mov     [bp+var_6], ax ;~ 0F9F:05B6
cs=0xf9f;eip=0x0005b9; 	T(bx = *(dw*)(&byte_6b85c););	// 37039                  mov     bx, word ptr byte_6B85C ;~ 0F9F:05B9
cs=0xf9f;eip=0x0005bd; 	T(MOV(al, *(raddr(es,bx+0x0A))));	// 37040                  mov     al, es:[bx+0Ah] ;~ 0F9F:05BD
cs=0xf9f;eip=0x0005c1; 	X(MOV(*(raddr(es,bx+0x1BAA)), al));	// 37041                  mov     es:[bx+1BAAh], al ;~ 0F9F:05C1
cs=0xf9f;eip=0x0005c6; 	T(MOV(al, *(raddr(es,bx+6))));	// 37042                  mov     al, es:[bx+6] ;~ 0F9F:05C6
cs=0xf9f;eip=0x0005ca; 	X(MOV(*(raddr(es,bx+0x1BAB)), al));	// 37043                  mov     es:[bx+1BABh], al ;~ 0F9F:05CA
cs=0xf9f;eip=0x0005cf; 	X(MOV(*(dw*)(raddr(es,bx+2)), 2));	// 37044                  mov     word ptr es:[bx+2], 2 ;~ 0F9F:05CF
cs=0xf9f;eip=0x0005d5; 	T(ax = bx+0x1BAC);	// 37045                  lea     ax, [bx+1BACh] ;~ 0F9F:05D5
cs=0xf9f;eip=0x0005d9; 	X(PUSH(es));	// 37046                  push    es ;~ 0F9F:05D9
cs=0xf9f;eip=0x0005da; 	X(PUSH(ax));	// 37047                  push    ax ;~ 0F9F:05DA
cs=0xf9f;eip=0x0005db; 	T(SUB(ax, ax));	// 37048                  sub     ax, ax ;~ 0F9F:05DB
cs=0xf9f;eip=0x0005dd; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 37049                  mov     [bp+var_E], ax ;~ 0F9F:05DD
cs=0xf9f;eip=0x0005e0; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 37050                  mov     [bp+var_C], ax ;~ 0F9F:05E0
cs=0xf9f;eip=0x0005e3; 	T(dx = 0x800;);	// 37051                  mov     dx, 800h ;~ 0F9F:05E3
cs=0xf9f;eip=0x0005e6; 	J(CALL(sub_1ebca,0));	// 37052                  call    sub_1EBCA ;~ 0F9F:05E6
cs=0xf9f;eip=0x0005e9; 	T(LES(bx, *(dd*)(&byte_6b85c)));	// 37053                  les     bx, dword ptr byte_6B85C ;~ 0F9F:05E9
cs=0xf9f;eip=0x0005ed; 	X(MOV(*(dw*)(raddr(es,bx+4)), 0));	// 37054                  mov     word ptr es:[bx+4], 0 ;~ 0F9F:05ED
loc_1e5c3:
	// 6534 
cs=0xf9f;eip=0x0005f3; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x1000));	// 37057                  mov     [bp+var_A], 1000h ;~ 0F9F:05F3
cs=0xf9f;eip=0x0005f8; 	T(SUB(si, si));	// 37058                  sub     si, si ;~ 0F9F:05F8
loc_1e5ca:
	// 6535 
cs=0xf9f;eip=0x0005fa; 	T(LES(bx, *(dd*)(&byte_6b85c)));	// 37061                  les     bx, dword ptr byte_6B85C ;~ 0F9F:05FA
cs=0xf9f;eip=0x0005fe; 	T(ADD(bx, *(dw*)(raddr(es,bx+0x0C))));	// 37062                  add     bx, es:[bx+0Ch] ;~ 0F9F:05FE
cs=0xf9f;eip=0x000602; 	T(di = bp+var_a);	// 37063                  lea     di, [bp+var_A] ;~ 0F9F:0602
cs=0xf9f;eip=0x000605; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 37064                  push    [bp+var_A] ;~ 0F9F:0605
cs=0xf9f;eip=0x000608; 	X(PUSH(si));	// 37065                  push    si ;~ 0F9F:0608
cs=0xf9f;eip=0x000609; 	T(bx = bx+si+0x25B0);	// 37066                  lea     bx, [bx+si+25B0h] ;~ 0F9F:0609
cs=0xf9f;eip=0x00060d; 	X(PUSH(es));	// 37067                  push    es ;~ 0F9F:060D
cs=0xf9f;eip=0x00060e; 	X(PUSH(bx));	// 37068                  push    bx ;~ 0F9F:060E
cs=0xf9f;eip=0x00060f; 	X(PUSH(ss));	// 37069                  push    ss ;~ 0F9F:060F
cs=0xf9f;eip=0x000610; 	X(PUSH(di));	// 37070                  push    di ;~ 0F9F:0610
cs=0xf9f;eip=0x000611; 	T(bx = *(dw*)(&byte_6b85c););	// 37071                  mov     bx, word ptr byte_6B85C ;~ 0F9F:0611
cs=0xf9f;eip=0x000615; 	J(CALLF(__dispatch_call,*(dd*)(raddr(es,bx+0x9A0))));	// 37072                  call    dword ptr es:[bx+9A0h] ;~ 0F9F:0615
cs=0xf9f;eip=0x00061a; 	X(POP(si));	// 37073                  pop     si ;~ 0F9F:061A
cs=0xf9f;eip=0x00061b; 	X(POP(*(dw*)(raddr(ss,bp+var_a))));	// 37074                  pop     [bp+var_A] ;~ 0F9F:061B
cs=0xf9f;eip=0x00061e; 	T(di = ax;);	// 37075                  mov     di, ax ;~ 0F9F:061E
cs=0xf9f;eip=0x000620; 	T(OR(di, di));	// 37076                  or      di, di ;~ 0F9F:0620
cs=0xf9f;eip=0x000622; 	J(JZ(loc_1e604));	// 37077                  jz      short loc_1E604 ;~ 0F9F:0622
cs=0xf9f;eip=0x000624; 	T(ADD(si, di));	// 37078                  add     si, di ;~ 0F9F:0624
cs=0xf9f;eip=0x000626; 	X(SUB(*(dw*)(raddr(ss,bp+var_a)), di));	// 37079                  sub     [bp+var_A], di ;~ 0F9F:0626
cs=0xf9f;eip=0x000629; 	J(JNZ(loc_1e5ca));	// 37080                  jnz     short loc_1E5CA ;~ 0F9F:0629
cs=0xf9f;eip=0x00062b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 37081                  mov     [bp+var_2], si ;~ 0F9F:062B
cs=0xf9f;eip=0x00062e; 	T(cx = si;);	// 37082                  mov     cx, si ;~ 0F9F:062E
cs=0xf9f;eip=0x000630; 	J(JMP(loc_1e788));	// 37083                  jmp     loc_1E788 ;~ 0F9F:0630
loc_1e604:
	// 6536 
cs=0xf9f;eip=0x000634; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 37089                  mov     [bp+var_2], si ;~ 0F9F:0634
cs=0xf9f;eip=0x000637; 	T(cx = si;);	// 37090                  mov     cx, si ;~ 0F9F:0637
cs=0xf9f;eip=0x000639; 	T(OR(cx, cx));	// 37091                  or      cx, cx ;~ 0F9F:0639
cs=0xf9f;eip=0x00063b; 	J(JZ(loc_1e610));	// 37092                  jz      short loc_1E610 ;~ 0F9F:063B
cs=0xf9f;eip=0x00063d; 	J(JMP(loc_1e783));	// 37093                  jmp     loc_1E783 ;~ 0F9F:063D
loc_1e610:
	// 6537 
cs=0xf9f;eip=0x000640; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0));	// 37097                  cmp     [bp+var_E], 0 ;~ 0F9F:0640
cs=0xf9f;eip=0x000644; 	J(JZ(loc_1e619));	// 37098                  jz      short loc_1E619 ;~ 0F9F:0644
cs=0xf9f;eip=0x000646; 	J(JMP(loc_1e783));	// 37099                  jmp     loc_1E783 ;~ 0F9F:0646
loc_1e619:
	// 6538 
cs=0xf9f;eip=0x000649; 	T(LES(bx, *(dd*)(&byte_6b85c)));	// 37104                  les     bx, dword ptr byte_6B85C ;~ 0F9F:0649
cs=0xf9f;eip=0x00064d; 	X(PUSH(es));	// 37105                  push    es ;~ 0F9F:064D
cs=0xf9f;eip=0x00064e; 	X(PUSH(bx));	// 37106                  push    bx ;~ 0F9F:064E
cs=0xf9f;eip=0x00064f; 	T(MOV(al, *(raddr(es,bx+0x393))));	// 37107                  mov     al, es:[bx+393h] ;~ 0F9F:064F
cs=0xf9f;eip=0x000654; 	T(SUB(ah, ah));	// 37108                  sub     ah, ah ;~ 0F9F:0654
cs=0xf9f;eip=0x000656; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x99E))));	// 37109                  mov     dx, es:[bx+99Eh] ;~ 0F9F:0656
cs=0xf9f;eip=0x00065b; 	J(CALL(sub_1ea9e,0));	// 37110                  call    sub_1EA9E ;~ 0F9F:065B
cs=0xf9f;eip=0x00065e; 	X(POP(bx));	// 37111                  pop     bx ;~ 0F9F:065E
cs=0xf9f;eip=0x00065f; 	X(POP(es));	// 37112                  pop     es ;~ 0F9F:065F
cs=0xf9f;eip=0x000660; 	T(CMP(*(dw*)(raddr(es,bx+4)), 0));	// 37113                  cmp     word ptr es:[bx+4], 0 ;~ 0F9F:0660
cs=0xf9f;eip=0x000665; 	J(JZ(loc_1e63b));	// 37114                  jz      short loc_1E63B ;~ 0F9F:0665
cs=0xf9f;eip=0x000667; 	X(INC(*(dw*)(raddr(es,bx+2))));	// 37115                  inc     word ptr es:[bx+2] ;~ 0F9F:0667
loc_1e63b:
	// 6539 
cs=0xf9f;eip=0x00066b; 	T(ax = bx+0x1BAA);	// 37118                  lea     ax, [bx+1BAAh] ;~ 0F9F:066B
cs=0xf9f;eip=0x00066f; 	X(PUSH(es));	// 37119                  push    es ;~ 0F9F:066F
cs=0xf9f;eip=0x000670; 	X(PUSH(ax));	// 37120                  push    ax ;~ 0F9F:0670
cs=0xf9f;eip=0x000671; 	T(ax = bx+2);	// 37121                  lea     ax, [bx+2] ;~ 0F9F:0671
cs=0xf9f;eip=0x000674; 	X(PUSH(es));	// 37122                  push    es ;~ 0F9F:0674
cs=0xf9f;eip=0x000675; 	X(PUSH(ax));	// 37123                  push    ax ;~ 0F9F:0675
cs=0xf9f;eip=0x000676; 	J(CALLF(__dispatch_call,*(dd*)(raddr(es,bx+0x9A4))));	// 37124                  call    dword ptr es:[bx+9A4h] ;~ 0F9F:0676
cs=0xf9f;eip=0x00067b; 	X(POP(si));	// 37125                  pop     si ;~ 0F9F:067B
cs=0xf9f;eip=0x00067c; 	X(POP(di));	// 37126                  pop     di ;~ 0F9F:067C
cs=0xf9f;eip=0x00067d; 	T(sp = bp;);	// 37127                  mov     sp, bp ;~ 0F9F:067D
cs=0xf9f;eip=0x00067f; 	X(POP(bp));	// 37128                  pop     bp ;~ 0F9F:067F
cs=0xf9f;eip=0x000680; 	J(RETN(0));	// 37129                  retn ;~ 0F9F:0680
loc_1e651:
	// 6540 
cs=0xf9f;eip=0x000681; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), di));	// 37133                  mov     [bp+var_8], di ;~ 0F9F:0681
loc_1e654:
	// 6541 
cs=0xf9f;eip=0x000684; 	T(bx = si;);	// 37136                  mov     bx, si ;~ 0F9F:0684
cs=0xf9f;eip=0x000686; 	J(CALL(sub_1e830,0));	// 37137                  call    sub_1E830 ;~ 0F9F:0686
cs=0xf9f;eip=0x000689; 	T(di = ax;);	// 37138                  mov     di, ax ;~ 0F9F:0689
loc_1e65b:
	// 6542 
cs=0xf9f;eip=0x00068b; 	T(LES(bx, *(dd*)(&byte_6b85c)));	// 37141                  les     bx, dword ptr byte_6B85C ;~ 0F9F:068B
cs=0xf9f;eip=0x00068f; 	T(OR(di, di));	// 37142                  or      di, di ;~ 0F9F:068F
cs=0xf9f;eip=0x000691; 	J(JZ(loc_1e691));	// 37143                  jz      short loc_1E691 ;~ 0F9F:0691
cs=0xf9f;eip=0x000693; 	T(CMP(di, 2));	// 37144                  cmp     di, 2 ;~ 0F9F:0693
cs=0xf9f;eip=0x000696; 	J(JNZ(loc_1e66f));	// 37145                  jnz     short loc_1E66F ;~ 0F9F:0696
cs=0xf9f;eip=0x000698; 	T(CMP(*(dw*)(raddr(es,bx)), 0x100));	// 37146                  cmp     word ptr es:[bx], 100h ;~ 0F9F:0698
cs=0xf9f;eip=0x00069d; 	J(JNC(loc_1e691));	// 37147                  jnb     short loc_1E691 ;~ 0F9F:069D
loc_1e66f:
	// 6543 
cs=0xf9f;eip=0x00069f; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 0));	// 37150                  cmp     [bp+var_C], 0 ;~ 0F9F:069F
cs=0xf9f;eip=0x0006a3; 	J(JZ(loc_1e6ad));	// 37151                  jz      short loc_1E6AD ;~ 0F9F:06A3
cs=0xf9f;eip=0x0006a5; 	T(ax = si;);	// 37152                  mov     ax, si ;~ 0F9F:06A5
cs=0xf9f;eip=0x0006a7; 	T(ADD(ax, di));	// 37153                  add     ax, di ;~ 0F9F:06A7
cs=0xf9f;eip=0x0006a9; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_8))));	// 37154                  cmp     ax, [bp+var_8] ;~ 0F9F:06A9
cs=0xf9f;eip=0x0006ac; 	J(JBE(loc_1e6ad));	// 37155                  jbe     short loc_1E6AD ;~ 0F9F:06AC
cs=0xf9f;eip=0x0006ae; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_8))));	// 37156                  mov     di, [bp+var_8] ;~ 0F9F:06AE
cs=0xf9f;eip=0x0006b1; 	T(SUB(di, si));	// 37157                  sub     di, si ;~ 0F9F:06B1
cs=0xf9f;eip=0x0006b3; 	T(CMP(di, 2));	// 37158                  cmp     di, 2 ;~ 0F9F:06B3
cs=0xf9f;eip=0x0006b6; 	J(JC(loc_1e691));	// 37159                  jb      short loc_1E691 ;~ 0F9F:06B6
cs=0xf9f;eip=0x0006b8; 	J(JNZ(loc_1e705));	// 37160                  jnz     short loc_1E705 ;~ 0F9F:06B8
cs=0xf9f;eip=0x0006ba; 	T(CMP(*(dw*)(raddr(es,bx)), 0x100));	// 37161                  cmp     word ptr es:[bx], 100h ;~ 0F9F:06BA
cs=0xf9f;eip=0x0006bf; 	J(JC(loc_1e705));	// 37162                  jb      short loc_1E705 ;~ 0F9F:06BF
loc_1e691:
	// 6544 
cs=0xf9f;eip=0x0006c1; 	T(di = bx;);	// 37166                  mov     di, bx ;~ 0F9F:06C1
cs=0xf9f;eip=0x0006c3; 	T(MOV(bl, *(raddr(es,si))));	// 37167                  mov     bl, es:[si] ;~ 0F9F:06C3
cs=0xf9f;eip=0x0006c6; 	T(SUB(bh, bh));	// 37168                  sub     bh, bh ;~ 0F9F:06C6
cs=0xf9f;eip=0x0006c8; 	T(MOV(al, *(raddr(es,bx+di+0x8E))));	// 37169                  mov     al, es:[bx+di+8Eh] ;~ 0F9F:06C8
cs=0xf9f;eip=0x0006cd; 	T(SUB(ah, ah));	// 37170                  sub     ah, ah ;~ 0F9F:06CD
cs=0xf9f;eip=0x0006cf; 	T(SHL(bx, 1));	// 37171                  shl     bx, 1 ;~ 0F9F:06CF
cs=0xf9f;eip=0x0006d1; 	T(MOV(dx, *(dw*)(raddr(es,bx+di+0x394))));	// 37172                  mov     dx, es:[bx+di+394h] ;~ 0F9F:06D1
cs=0xf9f;eip=0x0006d6; 	T(di = 1;);	// 37173                  mov     di, 1 ;~ 0F9F:06D6
cs=0xf9f;eip=0x0006d9; 	J(JMP(loc_1e775));	// 37174                  jmp     loc_1E775 ;~ 0F9F:06D9
loc_1e6ad:
	// 6545 
cs=0xf9f;eip=0x0006dd; 	T(CMP(di, 8));	// 37181                  cmp     di, 8 ;~ 0F9F:06DD
cs=0xf9f;eip=0x0006e0; 	J(JNC(loc_1e705));	// 37182                  jnb     short loc_1E705 ;~ 0F9F:06E0
cs=0xf9f;eip=0x0006e2; 	T(INC(si));	// 37183                  inc     si ;~ 0F9F:06E2
cs=0xf9f;eip=0x0006e3; 	T(CMP(si, *(dw*)(raddr(ss,bp+var_8))));	// 37184                  cmp     si, [bp+var_8] ;~ 0F9F:06E3
cs=0xf9f;eip=0x0006e6; 	T(DEC(si));	// 37185                  dec     si ;~ 0F9F:06E6
cs=0xf9f;eip=0x0006e7; 	J(JNC(loc_1e705));	// 37186                  jnb     short loc_1E705 ;~ 0F9F:06E7
cs=0xf9f;eip=0x0006e9; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 37187                  mov     ax, es:[bx] ;~ 0F9F:06E9
cs=0xf9f;eip=0x0006ec; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 37188                  mov     [bp+var_4], ax ;~ 0F9F:06EC
cs=0xf9f;eip=0x0006ef; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), di));	// 37189                  mov     [bp+var_2], di ;~ 0F9F:06EF
cs=0xf9f;eip=0x0006f2; 	X(PUSH(es));	// 37190                  push    es ;~ 0F9F:06F2
cs=0xf9f;eip=0x0006f3; 	X(PUSH(bx));	// 37191                  push    bx ;~ 0F9F:06F3
cs=0xf9f;eip=0x0006f4; 	T(bx = si+1);	// 37192                  lea     bx, [si+1] ;~ 0F9F:06F4
cs=0xf9f;eip=0x0006f7; 	J(CALL(sub_1e830,0));	// 37193                  call    sub_1E830 ;~ 0F9F:06F7
cs=0xf9f;eip=0x0006fa; 	X(POP(bx));	// 37194                  pop     bx ;~ 0F9F:06FA
cs=0xf9f;eip=0x0006fb; 	X(POP(es));	// 37195                  pop     es ;~ 0F9F:06FB
cs=0xf9f;eip=0x0006fc; 	T(XCHG(ax, di));	// 37196                  xchg    ax, di ;~ 0F9F:06FC
cs=0xf9f;eip=0x0006fd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 37197                  mov     ax, [bp+var_2] ;~ 0F9F:06FD
cs=0xf9f;eip=0x000700; 	T(CMP(di, ax));	// 37198                  cmp     di, ax ;~ 0F9F:0700
cs=0xf9f;eip=0x000702; 	J(JBE(loc_1e6fc));	// 37199                  jbe     short loc_1E6FC ;~ 0F9F:0702
cs=0xf9f;eip=0x000704; 	T(INC(ax));	// 37200                  inc     ax ;~ 0F9F:0704
cs=0xf9f;eip=0x000705; 	T(CMP(ax, di));	// 37201                  cmp     ax, di ;~ 0F9F:0705
cs=0xf9f;eip=0x000707; 	J(JC(loc_1e6e0));	// 37202                  jb      short loc_1E6E0 ;~ 0F9F:0707
cs=0xf9f;eip=0x000709; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x80));	// 37203                  cmp     [bp+var_4], 80h ;~ 0F9F:0709
cs=0xf9f;eip=0x00070e; 	J(JBE(loc_1e6fc));	// 37204                  jbe     short loc_1E6FC ;~ 0F9F:070E
loc_1e6e0:
	// 6546 
cs=0xf9f;eip=0x000710; 	T(MOV(cl, *(raddr(es,si))));	// 37207                  mov     cl, es:[si] ;~ 0F9F:0710
cs=0xf9f;eip=0x000713; 	T(SUB(ch, ch));	// 37208                  sub     ch, ch ;~ 0F9F:0713
cs=0xf9f;eip=0x000715; 	T(ADD(bx, cx));	// 37209                  add     bx, cx ;~ 0F9F:0715
cs=0xf9f;eip=0x000717; 	T(MOV(al, *(raddr(es,bx+0x8E))));	// 37210                  mov     al, es:[bx+8Eh] ;~ 0F9F:0717
cs=0xf9f;eip=0x00071c; 	T(SUB(ah, ah));	// 37211                  sub     ah, ah ;~ 0F9F:071C
cs=0xf9f;eip=0x00071e; 	T(ADD(bx, cx));	// 37212                  add     bx, cx ;~ 0F9F:071E
cs=0xf9f;eip=0x000720; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x394))));	// 37213                  mov     dx, es:[bx+394h] ;~ 0F9F:0720
cs=0xf9f;eip=0x000725; 	J(CALL(sub_1ea9e,0));	// 37214                  call    sub_1EA9E ;~ 0F9F:0725
cs=0xf9f;eip=0x000728; 	T(INC(si));	// 37215                  inc     si ;~ 0F9F:0728
cs=0xf9f;eip=0x000729; 	J(JMP(loc_1e65b));	// 37216                  jmp     loc_1E65B ;~ 0F9F:0729
loc_1e6fc:
	// 6547 
cs=0xf9f;eip=0x00072c; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_2))));	// 37221                  mov     di, [bp+var_2] ;~ 0F9F:072C
cs=0xf9f;eip=0x00072f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 37222                  mov     ax, [bp+var_4] ;~ 0F9F:072F
cs=0xf9f;eip=0x000732; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 37223                  mov     es:[bx], ax ;~ 0F9F:0732
loc_1e705:
	// 6548 
cs=0xf9f;eip=0x000735; 	X(PUSH(es));	// 37227                  push    es ;~ 0F9F:0735
cs=0xf9f;eip=0x000736; 	X(PUSH(bx));	// 37228                  push    bx ;~ 0F9F:0736
cs=0xf9f;eip=0x000737; 	T(ax = di;);	// 37229                  mov     ax, di ;~ 0F9F:0737
cs=0xf9f;eip=0x000739; 	T(SHL(ax, 1));	// 37230                  shl     ax, 1 ;~ 0F9F:0739
cs=0xf9f;eip=0x00073b; 	T(ADD(bx, ax));	// 37231                  add     bx, ax ;~ 0F9F:073B
cs=0xf9f;eip=0x00073d; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x590))));	// 37232                  mov     dx, es:[bx+590h] ;~ 0F9F:073D
cs=0xf9f;eip=0x000742; 	X(POP(bx));	// 37233                  pop     bx ;~ 0F9F:0742
cs=0xf9f;eip=0x000743; 	X(PUSH(bx));	// 37234                  push    bx ;~ 0F9F:0743
cs=0xf9f;eip=0x000744; 	T(MOV(al, *(raddr(es,bx+di+0x18C))));	// 37235                  mov     al, es:[bx+di+18Ch] ;~ 0F9F:0744
cs=0xf9f;eip=0x000749; 	T(SUB(ah, ah));	// 37236                  sub     ah, ah ;~ 0F9F:0749
cs=0xf9f;eip=0x00074b; 	J(CALL(sub_1ea9e,0));	// 37237                  call    sub_1EA9E ;~ 0F9F:074B
cs=0xf9f;eip=0x00074e; 	X(POP(bx));	// 37238                  pop     bx ;~ 0F9F:074E
cs=0xf9f;eip=0x00074f; 	X(POP(es));	// 37239                  pop     es ;~ 0F9F:074F
cs=0xf9f;eip=0x000750; 	T(CMP(di, 2));	// 37240                  cmp     di, 2 ;~ 0F9F:0750
cs=0xf9f;eip=0x000753; 	J(JNZ(loc_1e74c));	// 37241                  jnz     short loc_1E74C ;~ 0F9F:0753
cs=0xf9f;eip=0x000755; 	X(PUSH(es));	// 37242                  push    es ;~ 0F9F:0755
cs=0xf9f;eip=0x000756; 	X(PUSH(bx));	// 37243                  push    bx ;~ 0F9F:0756
cs=0xf9f;eip=0x000757; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 37244                  mov     ax, es:[bx] ;~ 0F9F:0757
cs=0xf9f;eip=0x00075a; 	T(SHR(ax, 1));	// 37245                  shr     ax, 1 ;~ 0F9F:075A
cs=0xf9f;eip=0x00075c; 	T(SHR(ax, 1));	// 37246                  shr     ax, 1 ;~ 0F9F:075C
cs=0xf9f;eip=0x00075e; 	T(ADD(bx, ax));	// 37247                  add     bx, ax ;~ 0F9F:075E
cs=0xf9f;eip=0x000760; 	T(MOV(dl, *(raddr(es,bx+0x4E))));	// 37248                  mov     dl, es:[bx+4Eh] ;~ 0F9F:0760
cs=0xf9f;eip=0x000764; 	T(MOV(al, *(raddr(es,bx+0x0E))));	// 37249                  mov     al, es:[bx+0Eh] ;~ 0F9F:0764
cs=0xf9f;eip=0x000768; 	T(SUB(ah, ah));	// 37250                  sub     ah, ah ;~ 0F9F:0768
cs=0xf9f;eip=0x00076a; 	T(SUB(dh, dh));	// 37251                  sub     dh, dh ;~ 0F9F:076A
cs=0xf9f;eip=0x00076c; 	J(CALL(sub_1ea9e,0));	// 37252                  call    sub_1EA9E ;~ 0F9F:076C
cs=0xf9f;eip=0x00076f; 	X(POP(bx));	// 37253                  pop     bx ;~ 0F9F:076F
cs=0xf9f;eip=0x000770; 	X(POP(es));	// 37254                  pop     es ;~ 0F9F:0770
cs=0xf9f;eip=0x000771; 	T(MOV(dl, *(raddr(es,bx))));	// 37255                  mov     dl, es:[bx] ;~ 0F9F:0771
cs=0xf9f;eip=0x000774; 	T(AND(dx, 3));	// 37256                  and     dx, 3 ;~ 0F9F:0774
cs=0xf9f;eip=0x000777; 	T(ax = di;);	// 37257                  mov     ax, di ;~ 0F9F:0777
cs=0xf9f;eip=0x000779; 	J(JMP(loc_1e775));	// 37258                  jmp     short loc_1E775 ;~ 0F9F:0779
loc_1e74c:
	// 6549 
cs=0xf9f;eip=0x00077c; 	X(PUSH(es));	// 37264                  push    es ;~ 0F9F:077C
cs=0xf9f;eip=0x00077d; 	X(PUSH(bx));	// 37265                  push    bx ;~ 0F9F:077D
cs=0xf9f;eip=0x00077e; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 37266                  mov     ax, es:[bx] ;~ 0F9F:077E
cs=0xf9f;eip=0x000781; 	T(MOV(cl, *(raddr(es,bx+6))));	// 37267                  mov     cl, es:[bx+6] ;~ 0F9F:0781
cs=0xf9f;eip=0x000785; 	T(SHR(ax, cl));	// 37268                  shr     ax, cl ;~ 0F9F:0785
cs=0xf9f;eip=0x000787; 	T(ADD(bx, ax));	// 37269                  add     bx, ax ;~ 0F9F:0787
cs=0xf9f;eip=0x000789; 	T(MOV(dl, *(raddr(es,bx+0x4E))));	// 37270                  mov     dl, es:[bx+4Eh] ;~ 0F9F:0789
cs=0xf9f;eip=0x00078d; 	T(MOV(al, *(raddr(es,bx+0x0E))));	// 37271                  mov     al, es:[bx+0Eh] ;~ 0F9F:078D
cs=0xf9f;eip=0x000791; 	T(SUB(ah, ah));	// 37272                  sub     ah, ah ;~ 0F9F:0791
cs=0xf9f;eip=0x000793; 	T(SUB(dh, dh));	// 37273                  sub     dh, dh ;~ 0F9F:0793
cs=0xf9f;eip=0x000795; 	J(CALL(sub_1ea9e,0));	// 37274                  call    sub_1EA9E ;~ 0F9F:0795
cs=0xf9f;eip=0x000798; 	X(POP(bx));	// 37275                  pop     bx ;~ 0F9F:0798
cs=0xf9f;eip=0x000799; 	X(POP(es));	// 37276                  pop     es ;~ 0F9F:0799
cs=0xf9f;eip=0x00079a; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 37277                  mov     dx, es:[bx+8] ;~ 0F9F:079A
cs=0xf9f;eip=0x00079e; 	T(AND(dx, *(dw*)(raddr(es,bx))));	// 37278                  and     dx, es:[bx] ;~ 0F9F:079E
cs=0xf9f;eip=0x0007a1; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 37279                  mov     ax, es:[bx+6] ;~ 0F9F:07A1
loc_1e775:
	// 6550 
cs=0xf9f;eip=0x0007a5; 	J(CALL(sub_1ea9e,0));	// 37283                  call    sub_1EA9E ;~ 0F9F:07A5
cs=0xf9f;eip=0x0007a8; 	T(ADD(si, di));	// 37284                  add     si, di ;~ 0F9F:07A8
cs=0xf9f;eip=0x0007aa; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), si));	// 37285                  cmp     [bp+var_8], si ;~ 0F9F:07AA
cs=0xf9f;eip=0x0007ad; 	J(JBE(loc_1e7fc));	// 37286                  jbe     short loc_1E7FC ;~ 0F9F:07AD
cs=0xf9f;eip=0x0007af; 	J(JMP(loc_1e654));	// 37287                  jmp     loc_1E654 ;~ 0F9F:07AF
loc_1e783:
	// 6551 
cs=0xf9f;eip=0x0007b3; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 1));	// 37294                  mov     [bp+var_C], 1 ;~ 0F9F:07B3
loc_1e788:
	// 6552 
cs=0xf9f;eip=0x0007b8; 	T(di = cx;);	// 37297                  mov     di, cx ;~ 0F9F:07B8
cs=0xf9f;eip=0x0007ba; 	T(LES(bx, *(dd*)(&byte_6b85c)));	// 37298                  les     bx, dword ptr byte_6B85C ;~ 0F9F:07BA
cs=0xf9f;eip=0x0007be; 	T(ADD(di, *(dw*)(raddr(es,bx+0x0C))));	// 37299                  add     di, es:[bx+0Ch] ;~ 0F9F:07BE
cs=0xf9f;eip=0x0007c2; 	T(di = bx+di+0x23AC);	// 37300                  lea     di, [bx+di+23ACh] ;~ 0F9F:07C2
cs=0xf9f;eip=0x0007c6; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 0));	// 37301                  cmp     [bp+var_C], 0 ;~ 0F9F:07C6
cs=0xf9f;eip=0x0007ca; 	J(JZ(loc_1e7a0));	// 37302                  jz      short loc_1E7A0 ;~ 0F9F:07CA
cs=0xf9f;eip=0x0007cc; 	T(ADD(di, 0x204));	// 37303                  add     di, 204h ;~ 0F9F:07CC
loc_1e7a0:
	// 6553 
cs=0xf9f;eip=0x0007d0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 37306                  mov     ax, [bp+var_E] ;~ 0F9F:07D0
cs=0xf9f;eip=0x0007d3; 	T(OR(ax, ax));	// 37307                  or      ax, ax ;~ 0F9F:07D3
cs=0xf9f;eip=0x0007d5; 	J(JZ(loc_1e7c1));	// 37308                  jz      short loc_1E7C1 ;~ 0F9F:07D5
cs=0xf9f;eip=0x0007d7; 	T(DEC(ax));	// 37309                  dec     ax ;~ 0F9F:07D7
cs=0xf9f;eip=0x0007d8; 	J(JZ(loc_1e7db));	// 37310                  jz      short loc_1E7DB ;~ 0F9F:07D8
cs=0xf9f;eip=0x0007da; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_6))));	// 37311                  mov     si, [bp+var_6] ;~ 0F9F:07DA
cs=0xf9f;eip=0x0007dd; 	T(ax = di+1);	// 37312                  lea     ax, [di+1] ;~ 0F9F:07DD
cs=0xf9f;eip=0x0007e0; 	T(bx = *(dw*)(&byte_6b85c););	// 37313                  mov     bx, word ptr byte_6B85C ;~ 0F9F:07E0
cs=0xf9f;eip=0x0007e4; 	T(MOV(cx, *(dw*)(raddr(es,bx+0x0C))));	// 37314                  mov     cx, es:[bx+0Ch] ;~ 0F9F:07E4
cs=0xf9f;eip=0x0007e8; 	T(bx = si;);	// 37315                  mov     bx, si ;~ 0F9F:07E8
cs=0xf9f;eip=0x0007ea; 	T(SUB(bx, cx));	// 37316                  sub     bx, cx ;~ 0F9F:07EA
cs=0xf9f;eip=0x0007ec; 	J(CALL(sub_1eb15,0));	// 37317                  call    sub_1EB15 ;~ 0F9F:07EC
cs=0xf9f;eip=0x0007ef; 	J(JMP(loc_1e7f5));	// 37318                  jmp     short loc_1E7F5 ;~ 0F9F:07EF
loc_1e7c1:
	// 6554 
cs=0xf9f;eip=0x0007f1; 	T(bx = *(dw*)(&byte_6b85c););	// 37322                  mov     bx, word ptr byte_6B85C ;~ 0F9F:07F1
cs=0xf9f;eip=0x0007f5; 	T(CMP(*(dw*)(raddr(es,bx+0x0C)), 0x1000));	// 37323                  cmp     word ptr es:[bx+0Ch], 1000h ;~ 0F9F:07F5
cs=0xf9f;eip=0x0007fb; 	J(JZ(loc_1e7d0));	// 37324                  jz      short loc_1E7D0 ;~ 0F9F:07FB
cs=0xf9f;eip=0x0007fd; 	X(INC(*(dw*)(raddr(ss,bp+var_e))));	// 37325                  inc     [bp+var_E] ;~ 0F9F:07FD
loc_1e7d0:
	// 6555 
cs=0xf9f;eip=0x000800; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_6))));	// 37328                  mov     si, [bp+var_6] ;~ 0F9F:0800
cs=0xf9f;eip=0x000803; 	T(ax = di+1);	// 37329                  lea     ax, [di+1] ;~ 0F9F:0803
cs=0xf9f;eip=0x000806; 	T(bx = si;);	// 37330                  mov     bx, si ;~ 0F9F:0806
cs=0xf9f;eip=0x000808; 	J(JMP(loc_1e7ef));	// 37331                  jmp     short loc_1E7EF ;~ 0F9F:0808
loc_1e7db:
	// 6556 
cs=0xf9f;eip=0x00080b; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_6))));	// 37337                  mov     si, [bp+var_6] ;~ 0F9F:080B
cs=0xf9f;eip=0x00080e; 	T(ax = di+1);	// 37338                  lea     ax, [di+1] ;~ 0F9F:080E
cs=0xf9f;eip=0x000811; 	T(bx = *(dw*)(&byte_6b85c););	// 37339                  mov     bx, word ptr byte_6B85C ;~ 0F9F:0811
cs=0xf9f;eip=0x000815; 	T(MOV(cx, *(dw*)(raddr(es,bx+0x0C))));	// 37340                  mov     cx, es:[bx+0Ch] ;~ 0F9F:0815
cs=0xf9f;eip=0x000819; 	T(bx = si+0x204);	// 37341                  lea     bx, [si+204h] ;~ 0F9F:0819
cs=0xf9f;eip=0x00081d; 	T(SUB(bx, cx));	// 37342                  sub     bx, cx ;~ 0F9F:081D
loc_1e7ef:
	// 6557 
cs=0xf9f;eip=0x00081f; 	J(CALL(sub_1eb15,0));	// 37345                  call    sub_1EB15 ;~ 0F9F:081F
cs=0xf9f;eip=0x000822; 	X(INC(*(dw*)(raddr(ss,bp+var_e))));	// 37346                  inc     [bp+var_E] ;~ 0F9F:0822
loc_1e7f5:
	// 6558 
cs=0xf9f;eip=0x000825; 	T(CMP(di, si));	// 37349                  cmp     di, si ;~ 0F9F:0825
cs=0xf9f;eip=0x000827; 	J(JBE(loc_1e7fc));	// 37350                  jbe     short loc_1E7FC ;~ 0F9F:0827
cs=0xf9f;eip=0x000829; 	J(JMP(loc_1e651));	// 37351                  jmp     loc_1E651 ;~ 0F9F:0829
loc_1e7fc:
	// 6559 
cs=0xf9f;eip=0x00082c; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 0));	// 37356                  cmp     [bp+var_C], 0 ;~ 0F9F:082C
cs=0xf9f;eip=0x000830; 	J(JNZ(loc_1e820));	// 37357                  jnz     short loc_1E820 ;~ 0F9F:0830
cs=0xf9f;eip=0x000832; 	T(LES(bx, *(dd*)(&byte_6b85c)));	// 37358                  les     bx, dword ptr byte_6B85C ;~ 0F9F:0832
cs=0xf9f;eip=0x000836; 	T(ax = bx+0x23AC);	// 37359                  lea     ax, [bx+23ACh] ;~ 0F9F:0836
cs=0xf9f;eip=0x00083a; 	X(PUSH(es));	// 37360                  push    es ;~ 0F9F:083A
cs=0xf9f;eip=0x00083b; 	X(PUSH(ax));	// 37361                  push    ax ;~ 0F9F:083B
cs=0xf9f;eip=0x00083c; 	T(ax = bx+0x33AC);	// 37362                  lea     ax, [bx+33ACh] ;~ 0F9F:083C
cs=0xf9f;eip=0x000840; 	X(PUSH(es));	// 37363                  push    es ;~ 0F9F:0840
cs=0xf9f;eip=0x000841; 	X(PUSH(ax));	// 37364                  push    ax ;~ 0F9F:0841
cs=0xf9f;eip=0x000842; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 37365                  mov     ax, es:[bx+0Ch] ;~ 0F9F:0842
cs=0xf9f;eip=0x000846; 	T(ADD(ax, 0x204));	// 37366                  add     ax, 204h ;~ 0F9F:0846
cs=0xf9f;eip=0x000849; 	J(CALL(sub_1eba2,0));	// 37367                  call    sub_1EBA2 ;~ 0F9F:0849
cs=0xf9f;eip=0x00084c; 	T(SUB(si, 0x1000));	// 37368                  sub     si, 1000h ;~ 0F9F:084C
loc_1e820:
	// 6560 
cs=0xf9f;eip=0x000850; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), si));	// 37371                  mov     [bp+var_6], si ;~ 0F9F:0850
cs=0xf9f;eip=0x000853; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 0));	// 37372                  cmp     [bp+var_C], 0 ;~ 0F9F:0853
cs=0xf9f;eip=0x000857; 	J(JNZ(loc_1e82c));	// 37373                  jnz     short loc_1E82C ;~ 0F9F:0857
cs=0xf9f;eip=0x000859; 	J(JMP(loc_1e5c3));	// 37374                  jmp     loc_1E5C3 ;~ 0F9F:0859
loc_1e82c:
	// 6561 
cs=0xf9f;eip=0x00085c; 	J(JMP(loc_1e619));	// 37378                  jmp     loc_1E619 ;~ 0F9F:085C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1e5c3: 	goto loc_1e5c3;
        case m2c::kloc_1e5ca: 	goto loc_1e5ca;
        case m2c::kloc_1e604: 	goto loc_1e604;
        case m2c::kloc_1e610: 	goto loc_1e610;
        case m2c::kloc_1e619: 	goto loc_1e619;
        case m2c::kloc_1e63b: 	goto loc_1e63b;
        case m2c::kloc_1e651: 	goto loc_1e651;
        case m2c::kloc_1e654: 	goto loc_1e654;
        case m2c::kloc_1e65b: 	goto loc_1e65b;
        case m2c::kloc_1e66f: 	goto loc_1e66f;
        case m2c::kloc_1e691: 	goto loc_1e691;
        case m2c::kloc_1e6ad: 	goto loc_1e6ad;
        case m2c::kloc_1e6e0: 	goto loc_1e6e0;
        case m2c::kloc_1e6fc: 	goto loc_1e6fc;
        case m2c::kloc_1e705: 	goto loc_1e705;
        case m2c::kloc_1e74c: 	goto loc_1e74c;
        case m2c::kloc_1e775: 	goto loc_1e775;
        case m2c::kloc_1e783: 	goto loc_1e783;
        case m2c::kloc_1e788: 	goto loc_1e788;
        case m2c::kloc_1e7a0: 	goto loc_1e7a0;
        case m2c::kloc_1e7c1: 	goto loc_1e7c1;
        case m2c::kloc_1e7d0: 	goto loc_1e7d0;
        case m2c::kloc_1e7db: 	goto loc_1e7db;
        case m2c::kloc_1e7ef: 	goto loc_1e7ef;
        case m2c::kloc_1e7f5: 	goto loc_1e7f5;
        case m2c::kloc_1e7fc: 	goto loc_1e7fc;
        case m2c::kloc_1e820: 	goto loc_1e820;
        case m2c::kloc_1e82c: 	goto loc_1e82c;
        case m2c::ksub_1e572: 	goto sub_1e572;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1e830(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1e830:
    _begin:
cs=0xf9f;eip=0x000860; 	X(*(dw*)(&byte_6c06e) = ss;);	// 37389                  mov     word ptr byte_6C06E, ss ;~ 0F9F:0860
cs=0xf9f;eip=0x000864; 	X(*(dw*)(&byte_6c070) = sp;);	// 37390                  mov     word ptr byte_6C070, sp ;~ 0F9F:0864
cs=0xf9f;eip=0x000868; 	T(ax = ds;);	// 37391                  mov     ax, ds ;~ 0F9F:0868
cs=0xf9f;eip=0x00086a; 	T(CMP(word_6b85a, 0));	// 37392                  cmp     word_6B85A, 0 ;~ 0F9F:086A
cs=0xf9f;eip=0x00086f; 	J(JZ(loc_1e84b));	// 37393                  jz      short loc_1E84B ;~ 0F9F:086F
cs=0xf9f;eip=0x000871; 	T(CLI);	// 37394                  cli ;~ 0F9F:0871
cs=0xf9f;eip=0x000872; 	S(ss = ax;);	// 37395                  mov     ss, ax ;~ 0F9F:0872
cs=0xf9f;eip=0x000874; 	T(sp = 0x81E;);	// 37397                  mov     sp, 81Eh ;~ 0F9F:0874
cs=0xf9f;eip=0x000877; 	T(STI);	// 37398                  sti ;~ 0F9F:0877
cs=0xf9f;eip=0x000878; 	J(JMP(loc_1e850));	// 37399                  jmp     short loc_1E850 ;~ 0F9F:0878
loc_1e84b:
	// 6562 
cs=0xf9f;eip=0x00087b; 	S(ss = ax;);	// 37405                  mov     ss, ax ;~ 0F9F:087B
cs=0xf9f;eip=0x00087d; 	T(sp = 0x81E;);	// 37406                  mov     sp, 81Eh ;~ 0F9F:087D
loc_1e850:
	// 6563 
cs=0xf9f;eip=0x000880; 	X(PUSH(bp));	// 37409                  push    bp ;~ 0F9F:0880
cs=0xf9f;eip=0x000881; 	T(bp = sp;);	// 37410                  mov     bp, sp ;~ 0F9F:0881
cs=0xf9f;eip=0x000883; 	T(SUB(sp, 0x0E));	// 37411                  sub     sp, 0Eh ;~ 0F9F:0883
cs=0xf9f;eip=0x000886; 	X(PUSH(bx));	// 37412                  push    bx ;~ 0F9F:0886
cs=0xf9f;eip=0x000887; 	X(PUSH(di));	// 37413                  push    di ;~ 0F9F:0887
cs=0xf9f;eip=0x000888; 	X(PUSH(si));	// 37414                  push    si ;~ 0F9F:0888
cs=0xf9f;eip=0x000889; 	X(MOV(*(dw*)(raddr(ss,bp-6)), 1));	// 37415                  mov     word ptr [bp-6], 1 ;~ 0F9F:0889
cs=0xf9f;eip=0x00088e; 	X(PUSH(ds));	// 37416                  push    ds ;~ 0F9F:088E
cs=0xf9f;eip=0x00088f; 	T(ds = *(dw*)(&byte_6b85e););	// 37417                  mov     ds, word ptr byte_6B85E ;~ 0F9F:088F
cs=0xf9f;eip=0x000893; 	T(CLD);	// 37419                  cld ;~ 0F9F:0893
cs=0xf9f;eip=0x000894; 	T(di = bx;);	// 37420                  mov     di, bx ;~ 0F9F:0894
cs=0xf9f;eip=0x000896; 	T(MOV(al, *(raddr(ds,bx+1))));	// 37421                  mov     al, [bx+1] ;~ 0F9F:0896
cs=0xf9f;eip=0x000899; 	T(MOV(bl, *(raddr(ds,bx))));	// 37422                  mov     bl, [bx] ;~ 0F9F:0899
cs=0xf9f;eip=0x00089b; 	T(SUB(bh, bh));	// 37423                  sub     bh, bh ;~ 0F9F:089B
cs=0xf9f;eip=0x00089d; 	T(SUB(ah, ah));	// 37424                  sub     ah, ah ;~ 0F9F:089D
cs=0xf9f;eip=0x00089f; 	T(cl = 3;);	// 37425                  mov     cl, 3 ;~ 0F9F:089F
cs=0xf9f;eip=0x0008a1; 	T(SHL(bx, cl));	// 37426                  shl     bx, cl ;~ 0F9F:08A1
cs=0xf9f;eip=0x0008a3; 	T(ADD(bx, ax));	// 37427                  add     bx, ax ;~ 0F9F:08A3
cs=0xf9f;eip=0x0008a5; 	T(SHL(bx, 1));	// 37428                  shl     bx, 1 ;~ 0F9F:08A5
cs=0xf9f;eip=0x0008a7; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), bx));	// 37429                  mov     [bp-0Ah], bx ;~ 0F9F:08A7
cs=0xf9f;eip=0x0008aa; 	X(POP(es));	// 37430                  pop     es ;~ 0F9F:08AA
cs=0xf9f;eip=0x0008ab; 	X(PUSH(es));	// 37431                  push    es ;~ 0F9F:08AB
cs=0xf9f;eip=0x0008ac; 	T(MOV(si, *(dw*)(raddr(es,0x0C))));	// 37432                  mov     si, es:0Ch ;~ 0F9F:08AC
cs=0xf9f;eip=0x0008b1; 	T(MOV(bx, *(dw*)(raddr(ds,bx+si+0x9A8))));	// 37433                  mov     bx, [bx+si+9A8h] ;~ 0F9F:08B1
cs=0xf9f;eip=0x0008b5; 	X(MOV(*(dw*)(raddr(ss,bp-8)), bx));	// 37434                  mov     [bp-8], bx ;~ 0F9F:08B5
cs=0xf9f;eip=0x0008b8; 	T(SUB(di, *(dw*)(raddr(ds,si+0x0C))));	// 37435                  sub     di, [si+0Ch] ;~ 0F9F:08B8
cs=0xf9f;eip=0x0008bb; 	T(INC(di));	// 37436                  inc     di ;~ 0F9F:08BB
cs=0xf9f;eip=0x0008bc; 	X(PUSH(ds));	// 37437                  push    ds ;~ 0F9F:08BC
cs=0xf9f;eip=0x0008bd; 	X(POP(es));	// 37438                  pop     es ;~ 0F9F:08BD
cs=0xf9f;eip=0x0008be; 	T(CMP(*(dw*)(raddr(ds,bx)), di));	// 37440                  cmp     [bx], di ;~ 0F9F:08BE
cs=0xf9f;eip=0x0008c0; 	J(JNC(loc_1e8a3));	// 37441                  jnb     short loc_1E8A3 ;~ 0F9F:08C0
loc_1e892:
	// 6564 
cs=0xf9f;eip=0x0008c2; 	T(INC(bx));	// 37444                  inc     bx ;~ 0F9F:08C2
cs=0xf9f;eip=0x0008c3; 	T(INC(bx));	// 37445                  inc     bx ;~ 0F9F:08C3
cs=0xf9f;eip=0x0008c4; 	T(CMP(*(dw*)(raddr(ds,bx)), di));	// 37446                  cmp     [bx], di ;~ 0F9F:08C4
cs=0xf9f;eip=0x0008c6; 	J(JC(loc_1e892));	// 37447                  jb      short loc_1E892 ;~ 0F9F:08C6
cs=0xf9f;eip=0x0008c8; 	X(MOV(*(dw*)(raddr(ss,bp-8)), bx));	// 37448                  mov     [bp-8], bx ;~ 0F9F:08C8
cs=0xf9f;eip=0x0008cb; 	T(XCHG(ax, bx));	// 37449                  xchg    ax, bx ;~ 0F9F:08CB
cs=0xf9f;eip=0x0008cc; 	T(MOV(bx, *(dw*)(raddr(ss,bp-0x0A))));	// 37450                  mov     bx, [bp-0Ah] ;~ 0F9F:08CC
cs=0xf9f;eip=0x0008cf; 	X(MOV(*(dw*)(raddr(ds,bx+si+0x9A8)), ax));	// 37451                  mov     [bx+si+9A8h], ax ;~ 0F9F:08CF
loc_1e8a3:
	// 6565 
cs=0xf9f;eip=0x0008d3; 	T(MOV(bx, *(dw*)(raddr(ss,bp-8))));	// 37454                  mov     bx, [bp-8] ;~ 0F9F:08D3
cs=0xf9f;eip=0x0008d6; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 37455                  mov     di, [bx] ;~ 0F9F:08D6
cs=0xf9f;eip=0x0008d8; 	T(MOV(dx, *(dw*)(raddr(ss,bp-0x10))));	// 37456                  mov     dx, [bp-10h] ;~ 0F9F:08D8
cs=0xf9f;eip=0x0008db; 	T(DEC(dx));	// 37457                  dec     dx ;~ 0F9F:08DB
cs=0xf9f;eip=0x0008dc; 	T(CMP(di, dx));	// 37458                  cmp     di, dx ;~ 0F9F:08DC
cs=0xf9f;eip=0x0008de; 	J(JC(loc_1e8b6));	// 37459                  jb      short loc_1E8B6 ;~ 0F9F:08DE
cs=0xf9f;eip=0x0008e0; 	T(SUB(ax, ax));	// 37460                  sub     ax, ax ;~ 0F9F:08E0
cs=0xf9f;eip=0x0008e2; 	J(JMP(loc_1ea7b));	// 37461                  jmp     loc_1EA7B ;~ 0F9F:08E2
loc_1e8b6:
	// 6566 
cs=0xf9f;eip=0x0008e6; 	T(MOV(si, *(dw*)(raddr(ss,bp-0x10))));	// 37467                  mov     si, [bp-10h] ;~ 0F9F:08E6
cs=0xf9f;eip=0x0008e9; 	T(cx = si;);	// 37468                  mov     cx, si ;~ 0F9F:08E9
cs=0xf9f;eip=0x0008eb; 	X(MOV(*(dw*)(raddr(ss,bp-4)), si));	// 37469                  mov     [bp-4], si ;~ 0F9F:08EB
cs=0xf9f;eip=0x0008ee; 	T(MOV(bx, *(dw*)(raddr(ss,bp-6))));	// 37470                  mov     bx, [bp-6] ;~ 0F9F:08EE
cs=0xf9f;eip=0x0008f1; 	T(DEC(bx));	// 37471                  dec     bx ;~ 0F9F:08F1
cs=0xf9f;eip=0x0008f2; 	T(MOV(al, *(raddr(ds,bx+si))));	// 37472                  mov     al, [bx+si] ;~ 0F9F:08F2
cs=0xf9f;eip=0x0008f4; 	J(JMP(loc_1e8f2));	// 37473                  jmp     short loc_1E8F2 ;~ 0F9F:08F4
loc_1e8c6:
	// 6567 
cs=0xf9f;eip=0x0008f6; 	T(MOV(ax, *(dw*)(raddr(ss,bp-6))));	// 37477                  mov     ax, [bp-6] ;~ 0F9F:08F6
cs=0xf9f;eip=0x0008f9; 	T(CMP(ax, 2));	// 37478                  cmp     ax, 2 ;~ 0F9F:08F9
cs=0xf9f;eip=0x0008fc; 	J(JC(loc_1e8d1));	// 37479                  jb      short loc_1E8D1 ;~ 0F9F:08FC
cs=0xf9f;eip=0x0008fe; 	J(JMP(loc_1ea7b));	// 37480                  jmp     loc_1EA7B ;~ 0F9F:08FE
loc_1e8d1:
	// 6568 
cs=0xf9f;eip=0x000901; 	T(XOR(ax, ax));	// 37484                  xor     ax, ax ;~ 0F9F:0901
cs=0xf9f;eip=0x000903; 	J(JMP(loc_1ea7b));	// 37485                  jmp     loc_1EA7B ;~ 0F9F:0903
loc_1e8d6:
	// 6569 
cs=0xf9f;eip=0x000906; 	T(MOV(bx, *(dw*)(raddr(ss,bp-6))));	// 37490                  mov     bx, [bp-6] ;~ 0F9F:0906
cs=0xf9f;eip=0x000909; 	T(DEC(bx));	// 37491                  dec     bx ;~ 0F9F:0909
cs=0xf9f;eip=0x00090a; 	T(MOV(si, *(dw*)(raddr(ss,bp-4))));	// 37492                  mov     si, [bp-4] ;~ 0F9F:090A
cs=0xf9f;eip=0x00090d; 	T(MOV(al, *(raddr(ds,bx+si))));	// 37493                  mov     al, [bx+si] ;~ 0F9F:090D
cs=0xf9f;eip=0x00090f; 	T(cx = si;);	// 37494                  mov     cx, si ;~ 0F9F:090F
cs=0xf9f;eip=0x000911; 	T(NOP);	// 37495                  nop ;~ 0F9F:0911
loc_1e8e2:
	// 6570 
cs=0xf9f;eip=0x000912; 	T(si = cx;);	// 37498                  mov     si, cx ;~ 0F9F:0912
loc_1e8e4:
	// 6571 
cs=0xf9f;eip=0x000914; 	T(MOV(di, *(dw*)(raddr(ss,bp-8))));	// 37501                  mov     di, [bp-8] ;~ 0F9F:0914
cs=0xf9f;eip=0x000917; 	T(INC(di));	// 37502                  inc     di ;~ 0F9F:0917
cs=0xf9f;eip=0x000918; 	T(INC(di));	// 37503                  inc     di ;~ 0F9F:0918
cs=0xf9f;eip=0x000919; 	X(MOV(*(dw*)(raddr(ss,bp-8)), di));	// 37504                  mov     [bp-8], di ;~ 0F9F:0919
cs=0xf9f;eip=0x00091c; 	T(MOV(di, *(dw*)(raddr(ds,di))));	// 37505                  mov     di, [di] ;~ 0F9F:091C
cs=0xf9f;eip=0x00091e; 	T(CMP(di, dx));	// 37506                  cmp     di, dx ;~ 0F9F:091E
cs=0xf9f;eip=0x000920; 	J(JNC(loc_1e8c6));	// 37507                  jnb     short loc_1E8C6 ;~ 0F9F:0920
loc_1e8f2:
	// 6572 
cs=0xf9f;eip=0x000922; 	T(CMP(*(raddr(ds,bx+di)), al));	// 37510                  cmp     [bx+di], al ;~ 0F9F:0922
cs=0xf9f;eip=0x000924; 	J(JNZ(loc_1e8e4));	// 37511                  jnz     short loc_1E8E4 ;~ 0F9F:0924
cs=0xf9f;eip=0x000926; 	T(CMPSB);	// 37512                  cmpsb ;~ 0F9F:0926
cs=0xf9f;eip=0x000927; 	J(JNZ(loc_1e8e2));	// 37513                  jnz     short loc_1E8E2 ;~ 0F9F:0927
cs=0xf9f;eip=0x000929; 	T(cx = 0x202;);	// 37514                  mov     cx, 202h ;~ 0F9F:0929
cs=0xf9f;eip=0x00092c; 	T(INC(si));	// 37515                  inc     si ;~ 0F9F:092C
cs=0xf9f;eip=0x00092d; 	T(INC(di));	// 37516                  inc     di ;~ 0F9F:092D
	// 37517                  repe cmpsb ;~ 0F9F:092E
cs=0xf9f;eip=0x00092e; 	T(	REPE CMPSB);	// 37517                  repe cmpsb ;~ 0F9F:092E
cs=0xf9f;eip=0x000930; 	J(JZ(loc_1e903));	// 37518                  jz      short loc_1E903 ;~ 0F9F:0930
cs=0xf9f;eip=0x000932; 	T(INC(cx));	// 37519                  inc     cx ;~ 0F9F:0932
loc_1e903:
	// 6573 
cs=0xf9f;eip=0x000933; 	T(SUB(cx, 0x205));	// 37522                  sub     cx, 205h ;~ 0F9F:0933
cs=0xf9f;eip=0x000937; 	T(NOT(cx));	// 37523                  not     cx ;~ 0F9F:0937
cs=0xf9f;eip=0x000939; 	T(CMP(*(dw*)(raddr(ss,bp-6)), cx));	// 37524                  cmp     [bp-6], cx ;~ 0F9F:0939
cs=0xf9f;eip=0x00093c; 	J(JA(loc_1e8d6));	// 37525                  ja      short loc_1E8D6 ;~ 0F9F:093C
cs=0xf9f;eip=0x00093e; 	T(ax = si-1);	// 37526                  lea     ax, [si-1] ;~ 0F9F:093E
cs=0xf9f;eip=0x000941; 	T(SUB(ax, di));	// 37527                  sub     ax, di ;~ 0F9F:0941
cs=0xf9f;eip=0x000943; 	T(bx = *(dw*)(&byte_6b85c););	// 37528                  mov     bx, word ptr ss:byte_6B85C ;~ 0F9F:0943
cs=0xf9f;eip=0x000948; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 37529                  mov     [bx], ax ;~ 0F9F:0948
cs=0xf9f;eip=0x00094a; 	X(MOV(*(dw*)(raddr(ss,bp-6)), cx));	// 37530                  mov     [bp-6], cx ;~ 0F9F:094A
cs=0xf9f;eip=0x00094d; 	T(CMP(cx, 0x0E));	// 37531                  cmp     cx, 0Eh ;~ 0F9F:094D
cs=0xf9f;eip=0x000950; 	J(JC(loc_1e8d6));	// 37532                  jb      short loc_1E8D6 ;~ 0F9F:0950
cs=0xf9f;eip=0x000952; 	T(CMP(cx, 0x204));	// 37533                  cmp     cx, 204h ;~ 0F9F:0952
cs=0xf9f;eip=0x000956; 	J(JNZ(loc_1e934));	// 37534                  jnz     short loc_1E934 ;~ 0F9F:0956
loc_1e928:
	// 6574 
cs=0xf9f;eip=0x000958; 	T(XCHG(ax, cx));	// 37537                  xchg    ax, cx ;~ 0F9F:0958
cs=0xf9f;eip=0x000959; 	J(JMP(loc_1ea7b));	// 37538                  jmp     loc_1EA7B ;~ 0F9F:0959
loc_1e92d:
	// 6575 
cs=0xf9f;eip=0x00095d; 	T(MOV(ax, *(dw*)(raddr(ss,bp-6))));	// 37545                  mov     ax, [bp-6] ;~ 0F9F:095D
cs=0xf9f;eip=0x000960; 	J(JMP(loc_1ea7b));	// 37546                  jmp     loc_1EA7B ;~ 0F9F:0960
loc_1e934:
	// 6576 
cs=0xf9f;eip=0x000964; 	T(MOV(bx, *(dw*)(raddr(ss,bp-8))));	// 37552                  mov     bx, [bp-8] ;~ 0F9F:0964
cs=0xf9f;eip=0x000967; 	T(CMP(*(dw*)(raddr(ds,bx+2)), dx));	// 37553                  cmp     [bx+2], dx ;~ 0F9F:0967
cs=0xf9f;eip=0x00096a; 	J(JNC(loc_1e92d));	// 37554                  jnb     short loc_1E92D ;~ 0F9F:096A
cs=0xf9f;eip=0x00096c; 	T(CMP(*(dw*)(raddr(ds,bx+4)), dx));	// 37555                  cmp     [bx+4], dx ;~ 0F9F:096C
cs=0xf9f;eip=0x00096f; 	J(JNC(loc_1e8d6));	// 37556                  jnb     short loc_1E8D6 ;~ 0F9F:096F
cs=0xf9f;eip=0x000971; 	T(SUB(si, si));	// 37557                  sub     si, si ;~ 0F9F:0971
cs=0xf9f;eip=0x000973; 	X(*(dw*)(&byte_6b866) = si;);	// 37558                  mov     word ptr ss:byte_6B866, si ;~ 0F9F:0973
cs=0xf9f;eip=0x000978; 	X(*(dw*)(&byte_6b864) = 0x0FFFF;);	// 37559                  mov     word ptr ss:byte_6B864, 0FFFFh ;~ 0F9F:0978
cs=0xf9f;eip=0x00097f; 	T(di = 1;);	// 37560                  mov     di, 1 ;~ 0F9F:097F
cs=0xf9f;eip=0x000982; 	T(MOV(bx, *(dw*)(raddr(ss,bp-4))));	// 37561                  mov     bx, [bp-4] ;~ 0F9F:0982
cs=0xf9f;eip=0x000985; 	T(MOV(cx, *(dw*)(raddr(ss,bp-6))));	// 37562                  mov     cx, [bp-6] ;~ 0F9F:0985
loc_1e958:
	// 6577 
cs=0xf9f;eip=0x000988; 	T(MOV(al, *(raddr(ds,bx+di))));	// 37565                  mov     al, [bx+di] ;~ 0F9F:0988
cs=0xf9f;eip=0x00098a; 	T(CMP(*(raddr(ds,bx+si)), al));	// 37566                  cmp     [bx+si], al ;~ 0F9F:098A
cs=0xf9f;eip=0x00098c; 	J(JZ(loc_1e969));	// 37567                  jz      short loc_1E969 ;~ 0F9F:098C
cs=0xf9f;eip=0x00098e; 	T(SHL(si, 1));	// 37568                  shl     si, 1 ;~ 0F9F:098E
cs=0xf9f;eip=0x000990; 	T(MOV(si, *(dw*)(raddr(ss,si+0x14))));	// 37569                  mov     si, ss:[si+14h] ;~ 0F9F:0990
cs=0xf9f;eip=0x000995; 	T(TEST(si, si));	// 37570                  test    si, si ;~ 0F9F:0995
cs=0xf9f;eip=0x000997; 	J(JNS(loc_1e974));	// 37571                  jns     short loc_1E974 ;~ 0F9F:0997
loc_1e969:
	// 6578 
cs=0xf9f;eip=0x000999; 	T(INC(si));	// 37574                  inc     si ;~ 0F9F:0999
cs=0xf9f;eip=0x00099a; 	T(INC(di));	// 37575                  inc     di ;~ 0F9F:099A
cs=0xf9f;eip=0x00099b; 	T(SHL(di, 1));	// 37576                  shl     di, 1 ;~ 0F9F:099B
cs=0xf9f;eip=0x00099d; 	X(MOV(*(dw*)(raddr(ss,di+0x14)), si));	// 37577                  mov     ss:[di+14h], si ;~ 0F9F:099D
cs=0xf9f;eip=0x0009a2; 	T(SHR(di, 1));	// 37578                  shr     di, 1 ;~ 0F9F:09A2
loc_1e974:
	// 6579 
cs=0xf9f;eip=0x0009a4; 	T(CMP(cx, di));	// 37581                  cmp     cx, di ;~ 0F9F:09A4
cs=0xf9f;eip=0x0009a6; 	J(JA(loc_1e958));	// 37582                  ja      short loc_1E958 ;~ 0F9F:09A6
cs=0xf9f;eip=0x0009a8; 	X(MOV(*(dw*)(raddr(ss,bp-0x0E)), si));	// 37583                  mov     [bp-0Eh], si ;~ 0F9F:09A8
cs=0xf9f;eip=0x0009ab; 	X(MOV(*(dw*)(raddr(ss,bp-0x0C)), di));	// 37584                  mov     [bp-0Ch], di ;~ 0F9F:09AB
cs=0xf9f;eip=0x0009ae; 	T(MOV(bx, *(dw*)(raddr(ss,bp-8))));	// 37585                  mov     bx, [bp-8] ;~ 0F9F:09AE
cs=0xf9f;eip=0x0009b1; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 37586                  mov     di, [bx] ;~ 0F9F:09B1
cs=0xf9f;eip=0x0009b3; 	T(ADD(di, cx));	// 37587                  add     di, cx ;~ 0F9F:09B3
cs=0xf9f;eip=0x0009b5; 	T(INC(di));	// 37588                  inc     di ;~ 0F9F:09B5
loc_1e986:
	// 6580 
cs=0xf9f;eip=0x0009b6; 	T(DEC(di));	// 37592                  dec     di ;~ 0F9F:09B6
cs=0xf9f;eip=0x0009b7; 	T(si = cx;);	// 37593                  mov     si, cx ;~ 0F9F:09B7
cs=0xf9f;eip=0x0009b9; 	T(bx = si;);	// 37594                  mov     bx, si ;~ 0F9F:09B9
cs=0xf9f;eip=0x0009bb; 	T(MOV(si, *(dw*)(raddr(ss,bx+si+0x14))));	// 37595                  mov     si, ss:[bx+si+14h] ;~ 0F9F:09BB
cs=0xf9f;eip=0x0009c0; 	T(CMP(si, 0x0FFFF));	// 37596                  cmp     si, 0FFFFh ;~ 0F9F:09C0
cs=0xf9f;eip=0x0009c3; 	J(JNZ(loc_1e996));	// 37597                  jnz     short loc_1E996 ;~ 0F9F:09C3
cs=0xf9f;eip=0x0009c5; 	T(INC(si));	// 37598                  inc     si ;~ 0F9F:09C5
loc_1e996:
	// 6581 
cs=0xf9f;eip=0x0009c6; 	X(ADD(*(dw*)(raddr(ss,bp-8)), 2));	// 37602                  add     word ptr [bp-8], 2 ;~ 0F9F:09C6
cs=0xf9f;eip=0x0009ca; 	T(MOV(bx, *(dw*)(raddr(ss,bp-8))));	// 37603                  mov     bx, [bp-8] ;~ 0F9F:09CA
cs=0xf9f;eip=0x0009cd; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 37604                  mov     ax, [bx] ;~ 0F9F:09CD
cs=0xf9f;eip=0x0009cf; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), ax));	// 37605                  mov     [bp-0Ah], ax ;~ 0F9F:09CF
cs=0xf9f;eip=0x0009d2; 	T(CMP(ax, dx));	// 37606                  cmp     ax, dx ;~ 0F9F:09D2
cs=0xf9f;eip=0x0009d4; 	J(JNC(loc_1e92d));	// 37607                  jnb     short loc_1E92D ;~ 0F9F:09D4
cs=0xf9f;eip=0x0009d6; 	T(ADD(ax, si));	// 37608                  add     ax, si ;~ 0F9F:09D6
cs=0xf9f;eip=0x0009d8; 	T(CMP(ax, di));	// 37609                  cmp     ax, di ;~ 0F9F:09D8
cs=0xf9f;eip=0x0009da; 	J(JC(loc_1e996));	// 37610                  jb      short loc_1E996 ;~ 0F9F:09DA
cs=0xf9f;eip=0x0009dc; 	T(MOV(bx, *(dw*)(raddr(ss,bp-6))));	// 37611                  mov     bx, [bp-6] ;~ 0F9F:09DC
cs=0xf9f;eip=0x0009df; 	T(ADD(bx, *(dw*)(raddr(ss,bp-0x0A))));	// 37612                  add     bx, [bp-0Ah] ;~ 0F9F:09DF
cs=0xf9f;eip=0x0009e2; 	T(MOV(ax, *(dw*)(raddr(ds,bx-2))));	// 37613                  mov     ax, [bx-2] ;~ 0F9F:09E2
cs=0xf9f;eip=0x0009e5; 	T(MOV(bx, *(dw*)(raddr(ss,bp-4))));	// 37614                  mov     bx, [bp-4] ;~ 0F9F:09E5
cs=0xf9f;eip=0x0009e8; 	T(ADD(bx, *(dw*)(raddr(ss,bp-6))));	// 37615                  add     bx, [bp-6] ;~ 0F9F:09E8
cs=0xf9f;eip=0x0009eb; 	T(CMP(*(dw*)(raddr(ds,bx-2)), ax));	// 37616                  cmp     [bx-2], ax ;~ 0F9F:09EB
cs=0xf9f;eip=0x0009ee; 	J(JZ(loc_1e9f0));	// 37617                  jz      short loc_1E9F0 ;~ 0F9F:09EE
cs=0xf9f;eip=0x0009f0; 	T(MOV(bx, *(dw*)(raddr(ss,bp-6))));	// 37618                  mov     bx, [bp-6] ;~ 0F9F:09F0
cs=0xf9f;eip=0x0009f3; 	T(DEC(bx));	// 37619                  dec     bx ;~ 0F9F:09F3
cs=0xf9f;eip=0x0009f4; 	T(DEC(bx));	// 37620                  dec     bx ;~ 0F9F:09F4
cs=0xf9f;eip=0x0009f5; 	T(MOV(si, *(dw*)(raddr(ss,bp-4))));	// 37621                  mov     si, [bp-4] ;~ 0F9F:09F5
loc_1e9c8:
	// 6582 
cs=0xf9f;eip=0x0009f8; 	T(MOV(di, *(dw*)(raddr(ss,bp-8))));	// 37625                  mov     di, [bp-8] ;~ 0F9F:09F8
cs=0xf9f;eip=0x0009fb; 	T(INC(di));	// 37626                  inc     di ;~ 0F9F:09FB
cs=0xf9f;eip=0x0009fc; 	T(INC(di));	// 37627                  inc     di ;~ 0F9F:09FC
cs=0xf9f;eip=0x0009fd; 	X(MOV(*(dw*)(raddr(ss,bp-8)), di));	// 37628                  mov     [bp-8], di ;~ 0F9F:09FD
cs=0xf9f;eip=0x000a00; 	T(MOV(di, *(dw*)(raddr(ds,di))));	// 37629                  mov     di, [di] ;~ 0F9F:0A00
cs=0xf9f;eip=0x000a02; 	T(CMP(di, dx));	// 37630                  cmp     di, dx ;~ 0F9F:0A02
cs=0xf9f;eip=0x000a04; 	J(JC(loc_1e9da));	// 37631                  jb      short loc_1E9DA ;~ 0F9F:0A04
cs=0xf9f;eip=0x000a06; 	J(JMP(loc_1e92d));	// 37632                  jmp     loc_1E92D ;~ 0F9F:0A06
loc_1e9da:
	// 6583 
cs=0xf9f;eip=0x000a0a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+di))));	// 37638                  mov     ax, [bx+di] ;~ 0F9F:0A0A
cs=0xf9f;eip=0x000a0c; 	T(CMP(*(dw*)(raddr(ds,bx+si)), ax));	// 37639                  cmp     [bx+si], ax ;~ 0F9F:0A0C
cs=0xf9f;eip=0x000a0e; 	J(JNZ(loc_1e9c8));	// 37640                  jnz     short loc_1E9C8 ;~ 0F9F:0A0E
cs=0xf9f;eip=0x000a10; 	T(MOV(al, *(raddr(ds,di))));	// 37641                  mov     al, [di] ;~ 0F9F:0A10
cs=0xf9f;eip=0x000a12; 	T(CMP(*(raddr(ds,si)), al));	// 37642                  cmp     [si], al ;~ 0F9F:0A12
cs=0xf9f;eip=0x000a14; 	J(JNZ(loc_1e9c8));	// 37643                  jnz     short loc_1E9C8 ;~ 0F9F:0A14
cs=0xf9f;eip=0x000a16; 	T(cx = 2;);	// 37644                  mov     cx, 2 ;~ 0F9F:0A16
cs=0xf9f;eip=0x000a19; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), di));	// 37645                  mov     [bp-0Ah], di ;~ 0F9F:0A19
cs=0xf9f;eip=0x000a1c; 	T(ADD(di, cx));	// 37646                  add     di, cx ;~ 0F9F:0A1C
cs=0xf9f;eip=0x000a1e; 	J(JMP(loc_1ea00));	// 37647                  jmp     short loc_1EA00 ;~ 0F9F:0A1E
loc_1e9f0:
	// 6584 
cs=0xf9f;eip=0x000a20; 	T(cx = si;);	// 37651                  mov     cx, si ;~ 0F9F:0A20
cs=0xf9f;eip=0x000a22; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x0A))));	// 37652                  mov     ax, [bp-0Ah] ;~ 0F9F:0A22
cs=0xf9f;eip=0x000a25; 	T(ADD(ax, cx));	// 37653                  add     ax, cx ;~ 0F9F:0A25
cs=0xf9f;eip=0x000a27; 	T(CMP(ax, di));	// 37654                  cmp     ax, di ;~ 0F9F:0A27
cs=0xf9f;eip=0x000a29; 	J(JZ(loc_1ea00));	// 37655                  jz      short loc_1EA00 ;~ 0F9F:0A29
cs=0xf9f;eip=0x000a2b; 	T(SUB(cx, cx));	// 37656                  sub     cx, cx ;~ 0F9F:0A2B
cs=0xf9f;eip=0x000a2d; 	T(MOV(di, *(dw*)(raddr(ss,bp-0x0A))));	// 37657                  mov     di, [bp-0Ah] ;~ 0F9F:0A2D
loc_1ea00:
	// 6585 
cs=0xf9f;eip=0x000a30; 	T(MOV(si, *(dw*)(raddr(ss,bp-4))));	// 37661                  mov     si, [bp-4] ;~ 0F9F:0A30
cs=0xf9f;eip=0x000a33; 	T(ADD(si, cx));	// 37662                  add     si, cx ;~ 0F9F:0A33
cs=0xf9f;eip=0x000a35; 	T(SUB(cx, 0x205));	// 37663                  sub     cx, 205h ;~ 0F9F:0A35
cs=0xf9f;eip=0x000a39; 	T(NOT(cx));	// 37664                  not     cx ;~ 0F9F:0A39
	// 37665                  repe cmpsb ;~ 0F9F:0A3B
cs=0xf9f;eip=0x000a3b; 	T(	REPE CMPSB);	// 37665                  repe cmpsb ;~ 0F9F:0A3B
cs=0xf9f;eip=0x000a3d; 	J(JZ(loc_1ea10));	// 37666                  jz      short loc_1EA10 ;~ 0F9F:0A3D
cs=0xf9f;eip=0x000a3f; 	T(INC(cx));	// 37667                  inc     cx ;~ 0F9F:0A3F
loc_1ea10:
	// 6586 
cs=0xf9f;eip=0x000a40; 	T(SUB(cx, 0x205));	// 37670                  sub     cx, 205h ;~ 0F9F:0A40
cs=0xf9f;eip=0x000a44; 	T(NOT(cx));	// 37671                  not     cx ;~ 0F9F:0A44
cs=0xf9f;eip=0x000a46; 	T(CMP(cx, 0x204));	// 37672                  cmp     cx, 204h ;~ 0F9F:0A46
cs=0xf9f;eip=0x000a4a; 	J(JBE(loc_1ea1d));	// 37673                  jbe     short loc_1EA1D ;~ 0F9F:0A4A
cs=0xf9f;eip=0x000a4c; 	S(_INT(3));	// 37674                  int     3               ; Trap to Debugger ;~ 0F9F:0A4C
loc_1ea1d:
	// 6587 
cs=0xf9f;eip=0x000a4d; 	T(CMP(*(dw*)(raddr(ss,bp-6)), cx));	// 37677                  cmp     [bp-6], cx ;~ 0F9F:0A4D
cs=0xf9f;eip=0x000a50; 	J(JBE(loc_1ea26));	// 37678                  jbe     short loc_1EA26 ;~ 0F9F:0A50
cs=0xf9f;eip=0x000a52; 	J(JMP(loc_1e986));	// 37679                  jmp     loc_1E986 ;~ 0F9F:0A52
loc_1ea26:
	// 6588 
cs=0xf9f;eip=0x000a56; 	T(ax = si-1);	// 37685                  lea     ax, [si-1] ;~ 0F9F:0A56
cs=0xf9f;eip=0x000a59; 	T(SUB(ax, di));	// 37686                  sub     ax, di ;~ 0F9F:0A59
cs=0xf9f;eip=0x000a5b; 	T(bx = *(dw*)(&byte_6b85c););	// 37687                  mov     bx, word ptr ss:byte_6B85C ;~ 0F9F:0A5B
cs=0xf9f;eip=0x000a60; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 37688                  mov     [bx], ax ;~ 0F9F:0A60
cs=0xf9f;eip=0x000a62; 	T(CMP(*(dw*)(raddr(ss,bp-6)), cx));	// 37689                  cmp     [bp-6], cx ;~ 0F9F:0A62
cs=0xf9f;eip=0x000a65; 	J(JC(loc_1ea3a));	// 37690                  jb      short loc_1EA3A ;~ 0F9F:0A65
cs=0xf9f;eip=0x000a67; 	J(JMP(loc_1e986));	// 37691                  jmp     loc_1E986 ;~ 0F9F:0A67
loc_1ea3a:
	// 6589 
cs=0xf9f;eip=0x000a6a; 	T(CMP(cx, 0x204));	// 37695                  cmp     cx, 204h ;~ 0F9F:0A6A
cs=0xf9f;eip=0x000a6e; 	J(JNZ(loc_1ea43));	// 37696                  jnz     short loc_1EA43 ;~ 0F9F:0A6E
cs=0xf9f;eip=0x000a70; 	J(JMP(loc_1e928));	// 37697                  jmp     loc_1E928 ;~ 0F9F:0A70
loc_1ea43:
	// 6590 
cs=0xf9f;eip=0x000a73; 	X(MOV(*(dw*)(raddr(ss,bp-6)), cx));	// 37701                  mov     [bp-6], cx ;~ 0F9F:0A73
loc_1ea46:
	// 6591 
cs=0xf9f;eip=0x000a76; 	T(MOV(si, *(dw*)(raddr(ss,bp-4))));	// 37704                  mov     si, [bp-4] ;~ 0F9F:0A76
cs=0xf9f;eip=0x000a79; 	T(MOV(bx, *(dw*)(raddr(ss,bp-0x0C))));	// 37705                  mov     bx, [bp-0Ch] ;~ 0F9F:0A79
cs=0xf9f;eip=0x000a7c; 	T(MOV(al, *(raddr(ds,bx+si))));	// 37706                  mov     al, [bx+si] ;~ 0F9F:0A7C
cs=0xf9f;eip=0x000a7e; 	T(MOV(bx, *(dw*)(raddr(ss,bp-0x0E))));	// 37707                  mov     bx, [bp-0Eh] ;~ 0F9F:0A7E
cs=0xf9f;eip=0x000a81; 	T(CMP(*(raddr(ds,bx+si)), al));	// 37708                  cmp     [bx+si], al ;~ 0F9F:0A81
cs=0xf9f;eip=0x000a83; 	J(JZ(loc_1ea60));	// 37709                  jz      short loc_1EA60 ;~ 0F9F:0A83
cs=0xf9f;eip=0x000a85; 	T(SHL(bx, 1));	// 37710                  shl     bx, 1 ;~ 0F9F:0A85
cs=0xf9f;eip=0x000a87; 	T(MOV(bx, *(dw*)(raddr(ss,bx+0x14))));	// 37711                  mov     bx, ss:[bx+14h] ;~ 0F9F:0A87
cs=0xf9f;eip=0x000a8c; 	T(TEST(bx, bx));	// 37712                  test    bx, bx ;~ 0F9F:0A8C
cs=0xf9f;eip=0x000a8e; 	J(JNS(loc_1ea6e));	// 37713                  jns     short loc_1EA6E ;~ 0F9F:0A8E
loc_1ea60:
	// 6592 
cs=0xf9f;eip=0x000a90; 	T(INC(bx));	// 37716                  inc     bx ;~ 0F9F:0A90
cs=0xf9f;eip=0x000a91; 	X(INC(*(dw*)(raddr(ss,bp-0x0C))));	// 37717                  inc     word ptr [bp-0Ch] ;~ 0F9F:0A91
cs=0xf9f;eip=0x000a94; 	T(MOV(si, *(dw*)(raddr(ss,bp-0x0C))));	// 37718                  mov     si, [bp-0Ch] ;~ 0F9F:0A94
cs=0xf9f;eip=0x000a97; 	T(SHL(si, 1));	// 37719                  shl     si, 1 ;~ 0F9F:0A97
cs=0xf9f;eip=0x000a99; 	X(MOV(*(dw*)(raddr(ss,si+0x14)), bx));	// 37720                  mov     ss:[si+14h], bx ;~ 0F9F:0A99
loc_1ea6e:
	// 6593 
cs=0xf9f;eip=0x000a9e; 	X(MOV(*(dw*)(raddr(ss,bp-0x0E)), bx));	// 37723                  mov     [bp-0Eh], bx ;~ 0F9F:0A9E
cs=0xf9f;eip=0x000aa1; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x0C))));	// 37724                  mov     ax, [bp-0Ch] ;~ 0F9F:0AA1
cs=0xf9f;eip=0x000aa4; 	T(CMP(cx, ax));	// 37725                  cmp     cx, ax ;~ 0F9F:0AA4
cs=0xf9f;eip=0x000aa6; 	J(JA(loc_1ea46));	// 37726                  ja      short loc_1EA46 ;~ 0F9F:0AA6
cs=0xf9f;eip=0x000aa8; 	J(JMP(loc_1e986));	// 37727                  jmp     loc_1E986 ;~ 0F9F:0AA8
loc_1ea7b:
	// 6594 
cs=0xf9f;eip=0x000aab; 	X(POP(ds));	// 37732                  pop     ds ;~ 0F9F:0AAB
cs=0xf9f;eip=0x000aac; 	X(POP(si));	// 37734                  pop     si ;~ 0F9F:0AAC
cs=0xf9f;eip=0x000aad; 	X(POP(di));	// 37735                  pop     di ;~ 0F9F:0AAD
cs=0xf9f;eip=0x000aae; 	T(sp = bp;);	// 37736                  mov     sp, bp ;~ 0F9F:0AAE
cs=0xf9f;eip=0x000ab0; 	X(POP(bp));	// 37737                  pop     bp ;~ 0F9F:0AB0
cs=0xf9f;eip=0x000ab1; 	T(CMP(*(dw*)(raddr(ds,0x0A)), 0));	// 37738                  cmp     word ptr ds:0Ah, 0 ;~ 0F9F:0AB1
cs=0xf9f;eip=0x000ab6; 	J(JZ(loc_1ea93));	// 37739                  jz      short loc_1EA93 ;~ 0F9F:0AB6
cs=0xf9f;eip=0x000ab8; 	T(CLI);	// 37740                  cli ;~ 0F9F:0AB8
cs=0xf9f;eip=0x000ab9; 	S(MOV(ss, *(dw*)(raddr(ds,0x81E))));	// 37741                  mov     ss, word ptr ds:81Eh ;~ 0F9F:0AB9
cs=0xf9f;eip=0x000abd; 	T(MOV(sp, *(dw*)(raddr(ds,0x820))));	// 37743                  mov     sp, ds:820h ;~ 0F9F:0ABD
cs=0xf9f;eip=0x000ac1; 	T(STI);	// 37744                  sti ;~ 0F9F:0AC1
cs=0xf9f;eip=0x000ac2; 	J(RETN(0));	// 37745                  retn ;~ 0F9F:0AC2
loc_1ea93:
	// 6595 
cs=0xf9f;eip=0x000ac3; 	S(MOV(ss, *(dw*)(raddr(ds,0x81E))));	// 37749                  mov     ss, word ptr ds:81Eh ;~ 0F9F:0AC3
cs=0xf9f;eip=0x000ac7; 	T(MOV(sp, *(dw*)(raddr(ds,0x820))));	// 37750                  mov     sp, ds:820h ;~ 0F9F:0AC7
cs=0xf9f;eip=0x000acb; 	J(RETN(0));	// 37751                  retn ;~ 0F9F:0ACB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1e84b: 	goto loc_1e84b;
        case m2c::kloc_1e850: 	goto loc_1e850;
        case m2c::kloc_1e892: 	goto loc_1e892;
        case m2c::kloc_1e8a3: 	goto loc_1e8a3;
        case m2c::kloc_1e8b6: 	goto loc_1e8b6;
        case m2c::kloc_1e8c6: 	goto loc_1e8c6;
        case m2c::kloc_1e8d1: 	goto loc_1e8d1;
        case m2c::kloc_1e8d6: 	goto loc_1e8d6;
        case m2c::kloc_1e8e2: 	goto loc_1e8e2;
        case m2c::kloc_1e8e4: 	goto loc_1e8e4;
        case m2c::kloc_1e8f2: 	goto loc_1e8f2;
        case m2c::kloc_1e903: 	goto loc_1e903;
        case m2c::kloc_1e928: 	goto loc_1e928;
        case m2c::kloc_1e92d: 	goto loc_1e92d;
        case m2c::kloc_1e934: 	goto loc_1e934;
        case m2c::kloc_1e958: 	goto loc_1e958;
        case m2c::kloc_1e969: 	goto loc_1e969;
        case m2c::kloc_1e974: 	goto loc_1e974;
        case m2c::kloc_1e986: 	goto loc_1e986;
        case m2c::kloc_1e996: 	goto loc_1e996;
        case m2c::kloc_1e9c8: 	goto loc_1e9c8;
        case m2c::kloc_1e9da: 	goto loc_1e9da;
        case m2c::kloc_1e9f0: 	goto loc_1e9f0;
        case m2c::kloc_1ea00: 	goto loc_1ea00;
        case m2c::kloc_1ea10: 	goto loc_1ea10;
        case m2c::kloc_1ea1d: 	goto loc_1ea1d;
        case m2c::kloc_1ea26: 	goto loc_1ea26;
        case m2c::kloc_1ea3a: 	goto loc_1ea3a;
        case m2c::kloc_1ea43: 	goto loc_1ea43;
        case m2c::kloc_1ea46: 	goto loc_1ea46;
        case m2c::kloc_1ea60: 	goto loc_1ea60;
        case m2c::kloc_1ea6e: 	goto loc_1ea6e;
        case m2c::kloc_1ea7b: 	goto loc_1ea7b;
        case m2c::kloc_1ea93: 	goto loc_1ea93;
        case m2c::ksub_1e830: 	goto sub_1e830;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1ea9e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1ea9e:
    _begin:
#undef var_4
#define var_4 -4
	// 37765 var_4           = word ptr -4 ;~ 0F9F:0ACE
#undef var_2
#define var_2 -2
	// 37766 var_2           = word ptr -2 ;~ 0F9F:0ACE
cs=0xf9f;eip=0x000ace; 	X(PUSH(bp));	// 37768                  push    bp ;~ 0F9F:0ACE
cs=0xf9f;eip=0x000acf; 	T(bp = sp;);	// 37769                  mov     bp, sp ;~ 0F9F:0ACF
cs=0xf9f;eip=0x000ad1; 	T(SUB(sp, 2));	// 37770                  sub     sp, 2 ;~ 0F9F:0AD1
cs=0xf9f;eip=0x000ad4; 	X(PUSH(ax));	// 37771                  push    ax ;~ 0F9F:0AD4
cs=0xf9f;eip=0x000ad5; 	X(PUSH(di));	// 37772                  push    di ;~ 0F9F:0AD5
cs=0xf9f;eip=0x000ad6; 	X(PUSH(si));	// 37773                  push    si ;~ 0F9F:0AD6
cs=0xf9f;eip=0x000ad7; 	T(di = dx;);	// 37774                  mov     di, dx ;~ 0F9F:0AD7
cs=0xf9f;eip=0x000ad9; 	T(CMP(ax, 8));	// 37775                  cmp     ax, 8 ;~ 0F9F:0AD9
cs=0xf9f;eip=0x000adc; 	J(JBE(loc_1eabc));	// 37776                  jbe     short loc_1EABC ;~ 0F9F:0ADC
cs=0xf9f;eip=0x000ade; 	T(ax = 8;);	// 37777                  mov     ax, 8 ;~ 0F9F:0ADE
cs=0xf9f;eip=0x000ae1; 	J(CALL(sub_1ea9e,0));	// 37778                  call    sub_1EA9E ;~ 0F9F:0AE1
cs=0xf9f;eip=0x000ae4; 	X(SUB(*(dw*)(raddr(ss,bp+var_4)), 8));	// 37779                  sub     [bp+var_4], 8 ;~ 0F9F:0AE4
cs=0xf9f;eip=0x000ae8; 	T(cl = 8;);	// 37780                  mov     cl, 8 ;~ 0F9F:0AE8
cs=0xf9f;eip=0x000aea; 	T(SHR(di, cl));	// 37781                  shr     di, cl ;~ 0F9F:0AEA
loc_1eabc:
	// 6596 
cs=0xf9f;eip=0x000aec; 	T(LES(bx, *(dw*)(raddr(ds,0x0C))));	// 37784                  les     bx, ds:0Ch ;~ 0F9F:0AEC
cs=0xf9f;eip=0x000af0; 	T(MOV(cx, *(dw*)(raddr(es,bx+4))));	// 37786                  mov     cx, es:[bx+4] ;~ 0F9F:0AF0
cs=0xf9f;eip=0x000af4; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), cx));	// 37787                  mov     [bp+var_2], cx ;~ 0F9F:0AF4
cs=0xf9f;eip=0x000af7; 	T(ax = di;);	// 37788                  mov     ax, di ;~ 0F9F:0AF7
cs=0xf9f;eip=0x000af9; 	T(SHL(al, cl));	// 37789                  shl     al, cl ;~ 0F9F:0AF9
cs=0xf9f;eip=0x000afb; 	T(MOV(si, *(dw*)(raddr(es,bx+2))));	// 37790                  mov     si, es:[bx+2] ;~ 0F9F:0AFB
cs=0xf9f;eip=0x000aff; 	X(OR(*(raddr(es,bx+si+0x1BAA)), al));	// 37791                  or      es:[bx+si+1BAAh], al ;~ 0F9F:0AFF
cs=0xf9f;eip=0x000b04; 	T(ax = cx;);	// 37792                  mov     ax, cx ;~ 0F9F:0B04
cs=0xf9f;eip=0x000b06; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 37793                  add     ax, [bp+var_4] ;~ 0F9F:0B06
cs=0xf9f;eip=0x000b09; 	X(MOV(*(dw*)(raddr(es,bx+4)), ax));	// 37794                  mov     es:[bx+4], ax ;~ 0F9F:0B09
cs=0xf9f;eip=0x000b0d; 	T(CMP(ax, 8));	// 37795                  cmp     ax, 8 ;~ 0F9F:0B0D
cs=0xf9f;eip=0x000b10; 	J(JBE(loc_1eaf9));	// 37796                  jbe     short loc_1EAF9 ;~ 0F9F:0B10
cs=0xf9f;eip=0x000b12; 	T(INC(si));	// 37797                  inc     si ;~ 0F9F:0B12
cs=0xf9f;eip=0x000b13; 	T(cl = 8;);	// 37798                  mov     cl, 8 ;~ 0F9F:0B13
cs=0xf9f;eip=0x000b15; 	T(SUB(cl, *(raddr(ss,bp+var_2))));	// 37799                  sub     cl, byte ptr [bp+var_2] ;~ 0F9F:0B15
cs=0xf9f;eip=0x000b18; 	T(SHR(di, cl));	// 37800                  shr     di, cl ;~ 0F9F:0B18
cs=0xf9f;eip=0x000b1a; 	T(ax = di;);	// 37801                  mov     ax, di ;~ 0F9F:0B1A
cs=0xf9f;eip=0x000b1c; 	X(MOV(*(raddr(es,bx+si+0x1BAA)), al));	// 37802                  mov     es:[bx+si+1BAAh], al ;~ 0F9F:0B1C
cs=0xf9f;eip=0x000b21; 	X(AND(*(dw*)(raddr(es,bx+4)), 7));	// 37803                  and     word ptr es:[bx+4], 7 ;~ 0F9F:0B21
cs=0xf9f;eip=0x000b26; 	J(JMP(loc_1eb01));	// 37804                  jmp     short loc_1EB01 ;~ 0F9F:0B26
loc_1eaf9:
	// 6597 
cs=0xf9f;eip=0x000b29; 	X(AND(*(dw*)(raddr(es,bx+4)), 7));	// 37810                  and     word ptr es:[bx+4], 7 ;~ 0F9F:0B29
cs=0xf9f;eip=0x000b2e; 	J(JNZ(loc_1eb01));	// 37811                  jnz     short loc_1EB01 ;~ 0F9F:0B2E
cs=0xf9f;eip=0x000b30; 	T(INC(si));	// 37812                  inc     si ;~ 0F9F:0B30
loc_1eb01:
	// 6598 
cs=0xf9f;eip=0x000b31; 	X(MOV(*(dw*)(raddr(es,bx+2)), si));	// 37816                  mov     es:[bx+2], si ;~ 0F9F:0B31
cs=0xf9f;eip=0x000b35; 	T(CMP(si, 0x800));	// 37817                  cmp     si, 800h ;~ 0F9F:0B35
cs=0xf9f;eip=0x000b39; 	J(JC(loc_1eb0e));	// 37818                  jb      short loc_1EB0E ;~ 0F9F:0B39
cs=0xf9f;eip=0x000b3b; 	J(CALL(sub_1ebed,0));	// 37819                  call    sub_1EBED ;~ 0F9F:0B3B
loc_1eb0e:
	// 6599 
cs=0xf9f;eip=0x000b3e; 	X(POP(si));	// 37822                  pop     si ;~ 0F9F:0B3E
cs=0xf9f;eip=0x000b3f; 	X(POP(di));	// 37823                  pop     di ;~ 0F9F:0B3F
cs=0xf9f;eip=0x000b40; 	T(sp = bp;);	// 37824                  mov     sp, bp ;~ 0F9F:0B40
cs=0xf9f;eip=0x000b42; 	X(POP(bp));	// 37825                  pop     bp ;~ 0F9F:0B42
cs=0xf9f;eip=0x000b43; 	J(RETN(0));	// 37826                  retn ;~ 0F9F:0B43

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1eabc: 	goto loc_1eabc;
        case m2c::kloc_1eaf9: 	goto loc_1eaf9;
        case m2c::kloc_1eb01: 	goto loc_1eb01;
        case m2c::kloc_1eb0e: 	goto loc_1eb0e;
        case m2c::ksub_1ea9e: 	goto sub_1ea9e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1eb15(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1eb15:
    _begin:
#undef var_8
#define var_8 -8
	// 37839 var_8           = word ptr -8 ;~ 0F9F:0B45
#undef var_6
#define var_6 -6
	// 37840 var_6           = word ptr -6 ;~ 0F9F:0B45
#undef var_2
#define var_2 -2
	// 37841 var_2           = word ptr -2 ;~ 0F9F:0B45
cs=0xf9f;eip=0x000b45; 	X(PUSH(bp));	// 37843                  push    bp ;~ 0F9F:0B45
cs=0xf9f;eip=0x000b46; 	T(bp = sp;);	// 37844                  mov     bp, sp ;~ 0F9F:0B46
cs=0xf9f;eip=0x000b48; 	T(SUB(sp, 4));	// 37845                  sub     sp, 4 ;~ 0F9F:0B48
cs=0xf9f;eip=0x000b4b; 	X(PUSH(ax));	// 37846                  push    ax ;~ 0F9F:0B4B
cs=0xf9f;eip=0x000b4c; 	X(PUSH(bx));	// 37847                  push    bx ;~ 0F9F:0B4C
cs=0xf9f;eip=0x000b4d; 	X(PUSH(di));	// 37848                  push    di ;~ 0F9F:0B4D
cs=0xf9f;eip=0x000b4e; 	X(PUSH(si));	// 37849                  push    si ;~ 0F9F:0B4E
cs=0xf9f;eip=0x000b4f; 	T(CLD);	// 37850                  cld ;~ 0F9F:0B4F
cs=0xf9f;eip=0x000b50; 	T(MOV(si, *(dw*)(raddr(ds,0x0C))));	// 37851                  mov     si, ds:0Ch ;~ 0F9F:0B50
cs=0xf9f;eip=0x000b54; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 37852                  mov     [bp+var_2], si ;~ 0F9F:0B54
cs=0xf9f;eip=0x000b57; 	T(SUB(ax, ax));	// 37853                  sub     ax, ax ;~ 0F9F:0B57
cs=0xf9f;eip=0x000b59; 	T(MOV(es, *(dw*)(raddr(ds,0x0E))));	// 37854                  mov     es, word ptr ds:0Eh ;~ 0F9F:0B59
cs=0xf9f;eip=0x000b5d; 	T(cx = 0x900;);	// 37855                  mov     cx, 900h ;~ 0F9F:0B5D
cs=0xf9f;eip=0x000b60; 	T(di = si+0x9A8);	// 37856                  lea     di, [si+9A8h] ;~ 0F9F:0B60
	// 37857                  rep stosw ;~ 0F9F:0B64
cs=0xf9f;eip=0x000b64; 	X(	REP STOSW);	// 37857                  rep stosw ;~ 0F9F:0B64
cs=0xf9f;eip=0x000b66; 	T(di = si+0x9A8);	// 37858                  lea     di, [si+9A8h] ;~ 0F9F:0B66
cs=0xf9f;eip=0x000b6a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 37859                  mov     dx, [bp+var_6] ;~ 0F9F:0B6A
cs=0xf9f;eip=0x000b6d; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_8))));	// 37860                  mov     si, [bp+var_8] ;~ 0F9F:0B6D
cs=0xf9f;eip=0x000b70; 	T(SUB(dx, si));	// 37861                  sub     dx, si ;~ 0F9F:0B70
cs=0xf9f;eip=0x000b72; 	T(cl = 3;);	// 37862                  mov     cl, 3 ;~ 0F9F:0B72
cs=0xf9f;eip=0x000b74; 	T(SUB(ah, ah));	// 37863                  sub     ah, ah ;~ 0F9F:0B74
cs=0xf9f;eip=0x000b76; 	X(PUSH(ds));	// 37864                  push    ds ;~ 0F9F:0B76
cs=0xf9f;eip=0x000b77; 	X(PUSH(es));	// 37865                  push    es ;~ 0F9F:0B77
cs=0xf9f;eip=0x000b78; 	X(POP(ds));	// 37866                  pop     ds ;~ 0F9F:0B78
cs=0xf9f;eip=0x000b79; 	T(NOP);	// 37867                  nop ;~ 0F9F:0B79
loc_1eb4a:
	// 6600 
cs=0xf9f;eip=0x000b7a; 	T(LODSB);	// 37870                  lodsb ;~ 0F9F:0B7A
cs=0xf9f;eip=0x000b7b; 	T(MOV(bl, *(raddr(ds,si))));	// 37871                  mov     bl, [si] ;~ 0F9F:0B7B
cs=0xf9f;eip=0x000b7d; 	T(SUB(bh, bh));	// 37872                  sub     bh, bh ;~ 0F9F:0B7D
cs=0xf9f;eip=0x000b7f; 	T(XCHG(ax, bx));	// 37873                  xchg    ax, bx ;~ 0F9F:0B7F
cs=0xf9f;eip=0x000b80; 	T(SHL(bx, cl));	// 37874                  shl     bx, cl ;~ 0F9F:0B80
cs=0xf9f;eip=0x000b82; 	T(ADD(bx, ax));	// 37875                  add     bx, ax ;~ 0F9F:0B82
cs=0xf9f;eip=0x000b84; 	T(SHL(bx, 1));	// 37876                  shl     bx, 1 ;~ 0F9F:0B84
cs=0xf9f;eip=0x000b86; 	X(ADD(*(dw*)(raddr(ds,bx+di)), 2));	// 37877                  add     word ptr [bx+di], 2 ;~ 0F9F:0B86
cs=0xf9f;eip=0x000b89; 	T(DEC(dx));	// 37878                  dec     dx ;~ 0F9F:0B89
cs=0xf9f;eip=0x000b8a; 	J(JNZ(loc_1eb4a));	// 37879                  jnz     short loc_1EB4A ;~ 0F9F:0B8A
cs=0xf9f;eip=0x000b8c; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2))));	// 37880                  mov     si, [bp+var_2] ;~ 0F9F:0B8C
cs=0xf9f;eip=0x000b8f; 	T(ax = si+0x45B0);	// 37881                  lea     ax, [si+45B0h] ;~ 0F9F:0B8F
cs=0xf9f;eip=0x000b93; 	T(cx = 0x480;);	// 37882                  mov     cx, 480h ;~ 0F9F:0B93
cs=0xf9f;eip=0x000b96; 	T(di = si+0x9A8);	// 37883                  lea     di, [si+9A8h] ;~ 0F9F:0B96
loc_1eb6a:
	// 6601 
cs=0xf9f;eip=0x000b9a; 	T(ADD(ax, *(dw*)(raddr(ds,di))));	// 37886                  add     ax, [di] ;~ 0F9F:0B9A
cs=0xf9f;eip=0x000b9c; 	X(STOSW);	// 37887                  stosw ;~ 0F9F:0B9C
cs=0xf9f;eip=0x000b9d; 	T(ADD(ax, *(dw*)(raddr(ds,di))));	// 37888                  add     ax, [di] ;~ 0F9F:0B9D
cs=0xf9f;eip=0x000b9f; 	X(STOSW);	// 37889                  stosw ;~ 0F9F:0B9F
cs=0xf9f;eip=0x000ba0; 	J(LOOP(loc_1eb6a));	// 37890                  loop    loc_1EB6A ;~ 0F9F:0BA0
cs=0xf9f;eip=0x000ba2; 	T(di = si+0x9A8);	// 37891                  lea     di, [si+9A8h] ;~ 0F9F:0BA2
cs=0xf9f;eip=0x000ba6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 37892                  mov     dx, [bp+var_6] ;~ 0F9F:0BA6
cs=0xf9f;eip=0x000ba9; 	T(si = dx;);	// 37893                  mov     si, dx ;~ 0F9F:0BA9
cs=0xf9f;eip=0x000bab; 	T(SUB(dx, *(dw*)(raddr(ss,bp+var_8))));	// 37894                  sub     dx, [bp+var_8] ;~ 0F9F:0BAB
cs=0xf9f;eip=0x000bae; 	T(cl = 3;);	// 37895                  mov     cl, 3 ;~ 0F9F:0BAE
cs=0xf9f;eip=0x000bb0; 	T(SUB(ah, ah));	// 37896                  sub     ah, ah ;~ 0F9F:0BB0
cs=0xf9f;eip=0x000bb2; 	T(STD);	// 37897                  std ;~ 0F9F:0BB2
cs=0xf9f;eip=0x000bb3; 	T(NOP);	// 37898                  nop ;~ 0F9F:0BB3
loc_1eb84:
	// 6602 
cs=0xf9f;eip=0x000bb4; 	T(LODSB);	// 37901                  lodsb ;~ 0F9F:0BB4
cs=0xf9f;eip=0x000bb5; 	T(MOV(bl, *(raddr(ds,si))));	// 37902                  mov     bl, [si] ;~ 0F9F:0BB5
cs=0xf9f;eip=0x000bb7; 	T(SUB(bh, bh));	// 37903                  sub     bh, bh ;~ 0F9F:0BB7
cs=0xf9f;eip=0x000bb9; 	T(SHL(bx, cl));	// 37904                  shl     bx, cl ;~ 0F9F:0BB9
cs=0xf9f;eip=0x000bbb; 	T(ADD(bx, ax));	// 37905                  add     bx, ax ;~ 0F9F:0BBB
cs=0xf9f;eip=0x000bbd; 	T(SHL(bx, 1));	// 37906                  shl     bx, 1 ;~ 0F9F:0BBD
cs=0xf9f;eip=0x000bbf; 	X(SUB(*(dw*)(raddr(ds,bx+di)), 2));	// 37907                  sub     word ptr [bx+di], 2 ;~ 0F9F:0BBF
cs=0xf9f;eip=0x000bc2; 	T(MOV(bx, *(dw*)(raddr(ds,bx+di))));	// 37908                  mov     bx, [bx+di] ;~ 0F9F:0BC2
cs=0xf9f;eip=0x000bc4; 	X(MOV(*(dw*)(raddr(ds,bx)), si));	// 37909                  mov     [bx], si ;~ 0F9F:0BC4
cs=0xf9f;eip=0x000bc6; 	T(DEC(dx));	// 37910                  dec     dx ;~ 0F9F:0BC6
cs=0xf9f;eip=0x000bc7; 	J(JNZ(loc_1eb84));	// 37911                  jnz     short loc_1EB84 ;~ 0F9F:0BC7
cs=0xf9f;eip=0x000bc9; 	T(CLD);	// 37912                  cld ;~ 0F9F:0BC9
cs=0xf9f;eip=0x000bca; 	X(POP(ds));	// 37913                  pop     ds ;~ 0F9F:0BCA
cs=0xf9f;eip=0x000bcb; 	X(POP(si));	// 37914                  pop     si ;~ 0F9F:0BCB
cs=0xf9f;eip=0x000bcc; 	X(POP(di));	// 37915                  pop     di ;~ 0F9F:0BCC
cs=0xf9f;eip=0x000bcd; 	T(sp = bp;);	// 37916                  mov     sp, bp ;~ 0F9F:0BCD
cs=0xf9f;eip=0x000bcf; 	X(POP(bp));	// 37917                  pop     bp ;~ 0F9F:0BCF
cs=0xf9f;eip=0x000bd0; 	J(RETN(0));	// 37918                  retn ;~ 0F9F:0BD0

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1eb4a: 	goto loc_1eb4a;
        case m2c::kloc_1eb6a: 	goto loc_1eb6a;
        case m2c::kloc_1eb84: 	goto loc_1eb84;
        case m2c::ksub_1eb15: 	goto sub_1eb15;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1eba2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1eba2:
    _begin:
#undef arg_0
#define arg_0 4
	// 37932 arg_0           = dword ptr  4 ;~ 0F9F:0BD2
#undef arg_4
#define arg_4 8
	// 37933 arg_4           = dword ptr  8 ;~ 0F9F:0BD2
cs=0xf9f;eip=0x000bd2; 	X(PUSH(bp));	// 37935                  push    bp ;~ 0F9F:0BD2
cs=0xf9f;eip=0x000bd3; 	T(bp = sp;);	// 37936                  mov     bp, sp ;~ 0F9F:0BD3
cs=0xf9f;eip=0x000bd5; 	X(PUSH(di));	// 37937                  push    di ;~ 0F9F:0BD5
cs=0xf9f;eip=0x000bd6; 	X(PUSH(si));	// 37938                  push    si ;~ 0F9F:0BD6
cs=0xf9f;eip=0x000bd7; 	T(XCHG(ax, cx));	// 37939                  xchg    ax, cx ;~ 0F9F:0BD7
cs=0xf9f;eip=0x000bd8; 	J(JCXZ(loc_1ebc3));	// 37940                  jcxz    short loc_1EBC3 ;~ 0F9F:0BD8
cs=0xf9f;eip=0x000bda; 	X(PUSH(ds));	// 37941                  push    ds ;~ 0F9F:0BDA
cs=0xf9f;eip=0x000bdb; 	T(CLD);	// 37942                  cld ;~ 0F9F:0BDB
cs=0xf9f;eip=0x000bdc; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_0))));	// 37943                  lds     si, [bp+arg_0] ;~ 0F9F:0BDC
cs=0xf9f;eip=0x000bdf; 	T(LES(di, *(dd*)(raddr(ss,bp+arg_4))));	// 37945                  les     di, [bp+arg_4] ;~ 0F9F:0BDF
cs=0xf9f;eip=0x000be2; 	T(TEST(di, 1));	// 37946                  test    di, 1 ;~ 0F9F:0BE2
cs=0xf9f;eip=0x000be6; 	J(JZ(loc_1ebba));	// 37947                  jz      short loc_1EBBA ;~ 0F9F:0BE6
cs=0xf9f;eip=0x000be8; 	X(MOVSB);	// 37948                  movsb ;~ 0F9F:0BE8
cs=0xf9f;eip=0x000be9; 	T(DEC(cx));	// 37949                  dec     cx ;~ 0F9F:0BE9
loc_1ebba:
	// 6603 
cs=0xf9f;eip=0x000bea; 	T(SHR(cx, 1));	// 37952                  shr     cx, 1 ;~ 0F9F:0BEA
	// 37953                  rep movsw ;~ 0F9F:0BEC
cs=0xf9f;eip=0x000bec; 	X(	REP MOVSW);	// 37953                  rep movsw ;~ 0F9F:0BEC
cs=0xf9f;eip=0x000bee; 	T(RCL(cx, 1));	// 37954                  rcl     cx, 1 ;~ 0F9F:0BEE
	// 37955                  rep movsb ;~ 0F9F:0BF0
cs=0xf9f;eip=0x000bf0; 	X(	REP MOVSB);	// 37955                  rep movsb ;~ 0F9F:0BF0
cs=0xf9f;eip=0x000bf2; 	X(POP(ds));	// 37956                  pop     ds ;~ 0F9F:0BF2
loc_1ebc3:
	// 6604 
cs=0xf9f;eip=0x000bf3; 	X(POP(si));	// 37960                  pop     si ;~ 0F9F:0BF3
cs=0xf9f;eip=0x000bf4; 	X(POP(di));	// 37961                  pop     di ;~ 0F9F:0BF4
cs=0xf9f;eip=0x000bf5; 	X(POP(bp));	// 37962                  pop     bp ;~ 0F9F:0BF5
cs=0xf9f;eip=0x000bf6; 	J(RETN(8));	// 37963                  retn    8 ;~ 0F9F:0BF6

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1ebba: 	goto loc_1ebba;
        case m2c::kloc_1ebc3: 	goto loc_1ebc3;
        case m2c::ksub_1eba2: 	goto sub_1eba2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1ebca(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1ebca:
    _begin:
#undef arg_0
#define arg_0 4
	// 37976 arg_0           = dword ptr  4 ;~ 0F9F:0BFA
cs=0xf9f;eip=0x000bfa; 	X(PUSH(bp));	// 37978                  push    bp ;~ 0F9F:0BFA
cs=0xf9f;eip=0x000bfb; 	T(bp = sp;);	// 37979                  mov     bp, sp ;~ 0F9F:0BFB
cs=0xf9f;eip=0x000bfd; 	X(PUSH(di));	// 37980                  push    di ;~ 0F9F:0BFD
cs=0xf9f;eip=0x000bfe; 	T(XCHG(cx, dx));	// 37981                  xchg    cx, dx ;~ 0F9F:0BFE
cs=0xf9f;eip=0x000c00; 	J(JCXZ(loc_1ebe7));	// 37982                  jcxz    short loc_1EBE7 ;~ 0F9F:0C00
cs=0xf9f;eip=0x000c02; 	T(LES(di, *(dd*)(raddr(ss,bp+arg_0))));	// 37983                  les     di, [bp+arg_0] ;~ 0F9F:0C02
cs=0xf9f;eip=0x000c05; 	T(ah = al;);	// 37985                  mov     ah, al ;~ 0F9F:0C05
cs=0xf9f;eip=0x000c07; 	T(TEST(di, 1));	// 37986                  test    di, 1 ;~ 0F9F:0C07
cs=0xf9f;eip=0x000c0b; 	J(JZ(loc_1ebdf));	// 37987                  jz      short loc_1EBDF ;~ 0F9F:0C0B
cs=0xf9f;eip=0x000c0d; 	X(STOSB);	// 37988                  stosb ;~ 0F9F:0C0D
cs=0xf9f;eip=0x000c0e; 	T(DEC(cx));	// 37989                  dec     cx ;~ 0F9F:0C0E
loc_1ebdf:
	// 6605 
cs=0xf9f;eip=0x000c0f; 	T(SHR(cx, 1));	// 37992                  shr     cx, 1 ;~ 0F9F:0C0F
	// 37993                  rep stosw ;~ 0F9F:0C11
cs=0xf9f;eip=0x000c11; 	X(	REP STOSW);	// 37993                  rep stosw ;~ 0F9F:0C11
cs=0xf9f;eip=0x000c13; 	T(SHL(cx, 1));	// 37994                  shl     cx, 1 ;~ 0F9F:0C13
	// 37995                  rep stosb ;~ 0F9F:0C15
cs=0xf9f;eip=0x000c15; 	X(	REP STOSB);	// 37995                  rep stosb ;~ 0F9F:0C15
loc_1ebe7:
	// 6606 
cs=0xf9f;eip=0x000c17; 	X(POP(di));	// 37998                  pop     di ;~ 0F9F:0C17
cs=0xf9f;eip=0x000c18; 	X(POP(bp));	// 37999                  pop     bp ;~ 0F9F:0C18
cs=0xf9f;eip=0x000c19; 	J(RETN(4));	// 38000                  retn    4 ;~ 0F9F:0C19

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1ebdf: 	goto loc_1ebdf;
        case m2c::kloc_1ebe7: 	goto loc_1ebe7;
        case m2c::ksub_1ebca: 	goto sub_1ebca;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1ebed(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1ebed:
    _begin:
#undef var_4
#define var_4 -4
	// 38012 var_4           = word ptr -4 ;~ 0F9F:0C1D
#undef var_2
#define var_2 -2
	// 38013 var_2           = byte ptr -2 ;~ 0F9F:0C1D
#undef var_1
#define var_1 -1
	// 38014 var_1           = byte ptr -1 ;~ 0F9F:0C1D
cs=0xf9f;eip=0x000c1d; 	X(PUSH(bp));	// 38016                  push    bp ;~ 0F9F:0C1D
cs=0xf9f;eip=0x000c1e; 	T(bp = sp;);	// 38017                  mov     bp, sp ;~ 0F9F:0C1E
cs=0xf9f;eip=0x000c20; 	T(SUB(sp, 4));	// 38018                  sub     sp, 4 ;~ 0F9F:0C20
cs=0xf9f;eip=0x000c23; 	X(PUSH(si));	// 38019                  push    si ;~ 0F9F:0C23
cs=0xf9f;eip=0x000c24; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0x800));	// 38020                  mov     [bp+var_4], 800h ;~ 0F9F:0C24
cs=0xf9f;eip=0x000c29; 	X(PUSH(si));	// 38021                  push    si ;~ 0F9F:0C29
cs=0xf9f;eip=0x000c2a; 	X(PUSH(di));	// 38022                  push    di ;~ 0F9F:0C2A
cs=0xf9f;eip=0x000c2b; 	T(ax = *(dw*)(&byte_6b85c););	// 38023                  mov     ax, word ptr byte_6B85C ;~ 0F9F:0C2B
cs=0xf9f;eip=0x000c2e; 	T(ADD(ax, 0x1BAA));	// 38024                  add     ax, 1BAAh ;~ 0F9F:0C2E
cs=0xf9f;eip=0x000c31; 	X(PUSH(*(dw*)(&byte_6b85e)));	// 38025                  push    word ptr byte_6B85E ;~ 0F9F:0C31
cs=0xf9f;eip=0x000c35; 	X(PUSH(ax));	// 38026                  push    ax ;~ 0F9F:0C35
cs=0xf9f;eip=0x000c36; 	T(ax = bp+var_4);	// 38027                  lea     ax, [bp+var_4] ;~ 0F9F:0C36
cs=0xf9f;eip=0x000c39; 	X(PUSH(ss));	// 38028                  push    ss ;~ 0F9F:0C39
cs=0xf9f;eip=0x000c3a; 	X(PUSH(ax));	// 38029                  push    ax ;~ 0F9F:0C3A
cs=0xf9f;eip=0x000c3b; 	T(LES(bx, *(dd*)(&byte_6b85c)));	// 38030                  les     bx, dword ptr byte_6B85C ;~ 0F9F:0C3B
cs=0xf9f;eip=0x000c3f; 	J(CALLF(__dispatch_call,*(dd*)(raddr(es,bx+0x9A4))));	// 38031                  call    dword ptr es:[bx+9A4h] ;~ 0F9F:0C3F
cs=0xf9f;eip=0x000c44; 	X(POP(di));	// 38032                  pop     di ;~ 0F9F:0C44
cs=0xf9f;eip=0x000c45; 	X(POP(si));	// 38033                  pop     si ;~ 0F9F:0C45
cs=0xf9f;eip=0x000c46; 	T(LES(bx, *(dd*)(&byte_6b85c)));	// 38034                  les     bx, dword ptr byte_6B85C ;~ 0F9F:0C46
cs=0xf9f;eip=0x000c4a; 	T(ADD(bx, *(dw*)(raddr(es,bx+2))));	// 38035                  add     bx, es:[bx+2] ;~ 0F9F:0C4A
cs=0xf9f;eip=0x000c4e; 	T(MOV(al, *(raddr(es,bx+0x1BAA))));	// 38036                  mov     al, es:[bx+1BAAh] ;~ 0F9F:0C4E
cs=0xf9f;eip=0x000c53; 	X(MOV(*(raddr(ss,bp+var_1)), al));	// 38037                  mov     [bp+var_1], al ;~ 0F9F:0C53
cs=0xf9f;eip=0x000c56; 	T(bx = *(dw*)(&byte_6b85c););	// 38038                  mov     bx, word ptr byte_6B85C ;~ 0F9F:0C56
cs=0xf9f;eip=0x000c5a; 	T(MOV(al, *(raddr(es,bx+0x23AA))));	// 38039                  mov     al, es:[bx+23AAh] ;~ 0F9F:0C5A
cs=0xf9f;eip=0x000c5f; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 38040                  mov     [bp+var_2], al ;~ 0F9F:0C5F
cs=0xf9f;eip=0x000c62; 	X(SUB(*(dw*)(raddr(es,bx+2)), 0x800));	// 38041                  sub     word ptr es:[bx+2], 800h ;~ 0F9F:0C62
cs=0xf9f;eip=0x000c68; 	T(ax = bx+0x1BAA);	// 38042                  lea     ax, [bx+1BAAh] ;~ 0F9F:0C68
cs=0xf9f;eip=0x000c6c; 	X(PUSH(es));	// 38043                  push    es ;~ 0F9F:0C6C
cs=0xf9f;eip=0x000c6d; 	X(PUSH(ax));	// 38044                  push    ax ;~ 0F9F:0C6D
cs=0xf9f;eip=0x000c6e; 	T(SUB(ax, ax));	// 38045                  sub     ax, ax ;~ 0F9F:0C6E
cs=0xf9f;eip=0x000c70; 	T(dx = 0x802;);	// 38046                  mov     dx, 802h ;~ 0F9F:0C70
cs=0xf9f;eip=0x000c73; 	J(CALL(sub_1ebca,0));	// 38047                  call    sub_1EBCA ;~ 0F9F:0C73
cs=0xf9f;eip=0x000c76; 	T(LES(bx, *(dd*)(&byte_6b85c)));	// 38048                  les     bx, dword ptr byte_6B85C ;~ 0F9F:0C76
cs=0xf9f;eip=0x000c7a; 	T(CMP(*(dw*)(raddr(es,bx+2)), 0));	// 38049                  cmp     word ptr es:[bx+2], 0 ;~ 0F9F:0C7A
cs=0xf9f;eip=0x000c7f; 	J(JNZ(loc_1ec56));	// 38050                  jnz     short loc_1EC56 ;~ 0F9F:0C7F
cs=0xf9f;eip=0x000c81; 	T(si = bx;);	// 38051                  mov     si, bx ;~ 0F9F:0C81
cs=0xf9f;eip=0x000c83; 	J(JMP(loc_1ec60));	// 38052                  jmp     short loc_1EC60 ;~ 0F9F:0C83
loc_1ec56:
	// 6607 
cs=0xf9f;eip=0x000c86; 	T(si = bx;);	// 38058                  mov     si, bx ;~ 0F9F:0C86
cs=0xf9f;eip=0x000c88; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 38059                  mov     al, [bp+var_2] ;~ 0F9F:0C88
cs=0xf9f;eip=0x000c8b; 	X(MOV(*(raddr(es,si+0x1BAA)), al));	// 38060                  mov     es:[si+1BAAh], al ;~ 0F9F:0C8B
loc_1ec60:
	// 6608 
cs=0xf9f;eip=0x000c90; 	T(CMP(*(dw*)(raddr(es,si+4)), 0));	// 38063                  cmp     word ptr es:[si+4], 0 ;~ 0F9F:0C90
cs=0xf9f;eip=0x000c95; 	J(JZ(loc_1ec75));	// 38064                  jz      short loc_1EC75 ;~ 0F9F:0C95
cs=0xf9f;eip=0x000c97; 	T(MOV(bx, *(dw*)(raddr(es,si+2))));	// 38065                  mov     bx, es:[si+2] ;~ 0F9F:0C97
cs=0xf9f;eip=0x000c9b; 	T(ADD(bx, si));	// 38066                  add     bx, si ;~ 0F9F:0C9B
cs=0xf9f;eip=0x000c9d; 	T(MOV(al, *(raddr(ss,bp+var_1))));	// 38067                  mov     al, [bp+var_1] ;~ 0F9F:0C9D
cs=0xf9f;eip=0x000ca0; 	X(MOV(*(raddr(es,bx+0x1BAA)), al));	// 38068                  mov     es:[bx+1BAAh], al ;~ 0F9F:0CA0
loc_1ec75:
	// 6609 
cs=0xf9f;eip=0x000ca5; 	X(POP(si));	// 38071                  pop     si ;~ 0F9F:0CA5
cs=0xf9f;eip=0x000ca6; 	T(sp = bp;);	// 38072                  mov     sp, bp ;~ 0F9F:0CA6
cs=0xf9f;eip=0x000ca8; 	X(POP(bp));	// 38073                  pop     bp ;~ 0F9F:0CA8
cs=0xf9f;eip=0x000ca9; 	J(RETN(0));	// 38074                  retn ;~ 0F9F:0CA9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1ec56: 	goto loc_1ec56;
        case m2c::kloc_1ec60: 	goto loc_1ec60;
        case m2c::kloc_1ec75: 	goto loc_1ec75;
        case m2c::ksub_1ebed: 	goto sub_1ebed;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group38(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group38:
    _begin:
seg001_caa_proc:
	// 38079 
loc_1ec7a:
	// 6610 
cs=0xf9f;eip=0x000caa; 	X(PUSH(bp));	// 38080                  push    bp ;~ 0F9F:0CAA
cs=0xf9f;eip=0x000cab; 	T(bp = sp;);	// 38081                  mov     bp, sp ;~ 0F9F:0CAB
cs=0xf9f;eip=0x000cad; 	X(PUSH(si));	// 38082                  push    si ;~ 0F9F:0CAD
cs=0xf9f;eip=0x000cae; 	X(PUSH(di));	// 38083                  push    di ;~ 0F9F:0CAE
cs=0xf9f;eip=0x000caf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 38084                  mov     ax, [bp+0Ah] ;~ 0F9F:0CAF
cs=0xf9f;eip=0x000cb2; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x0C))));	// 38085                  mov     dx, [bp+0Ch] ;~ 0F9F:0CB2
cs=0xf9f;eip=0x000cb5; 	T(LES(si, *(dw*)(raddr(ss,bp+6))));	// 38086                  les     si, [bp+6] ;~ 0F9F:0CB5
cs=0xf9f;eip=0x000cb8; 	T(di = es;);	// 38088                  mov     di, es ;~ 0F9F:0CB8
cs=0xf9f;eip=0x000cba; 	X(*(dw*)(&off_6b860) = si;);	// 38089                  mov     word ptr off_6B860, si ;~ 0F9F:0CBA
cs=0xf9f;eip=0x000cbe; 	X(*(dw*)(((db*)&off_6b860)+2) = es;);	// 38090                  mov     word ptr off_6B860+2, es ;~ 0F9F:0CBE
cs=0xf9f;eip=0x000cc2; 	X(MOV(*(dw*)(raddr(es,si+0x16)), ax));	// 38091                  mov     es:[si+16h], ax ;~ 0F9F:0CC2
cs=0xf9f;eip=0x000cc6; 	X(MOV(*(dw*)(raddr(es,si+0x18)), dx));	// 38092                  mov     es:[si+18h], dx ;~ 0F9F:0CC6
cs=0xf9f;eip=0x000cca; 	X(MOV(*(dw*)(raddr(es,si+0x0E)), 0x800));	// 38093                  mov     word ptr es:[si+0Eh], 800h ;~ 0F9F:0CCA
cs=0xf9f;eip=0x000cd0; 	X(PUSH(si));	// 38094                  push    si ;~ 0F9F:0CD0
cs=0xf9f;eip=0x000cd1; 	X(PUSH(di));	// 38095                  push    di ;~ 0F9F:0CD1
cs=0xf9f;eip=0x000cd2; 	T(ax = si+0x221E);	// 38096                  lea     ax, [si+221Eh] ;~ 0F9F:0CD2
cs=0xf9f;eip=0x000cd6; 	X(PUSH(es));	// 38097                  push    es ;~ 0F9F:0CD6
cs=0xf9f;eip=0x000cd7; 	X(PUSH(ax));	// 38098                  push    ax ;~ 0F9F:0CD7
cs=0xf9f;eip=0x000cd8; 	T(ax = si+0x0E);	// 38099                  lea     ax, [si+0Eh] ;~ 0F9F:0CD8
cs=0xf9f;eip=0x000cdb; 	X(PUSH(es));	// 38100                  push    es ;~ 0F9F:0CDB
cs=0xf9f;eip=0x000cdc; 	X(PUSH(ax));	// 38101                  push    ax ;~ 0F9F:0CDC
cs=0xf9f;eip=0x000cdd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0E))));	// 38102                  mov     ax, [bp+0Eh] ;~ 0F9F:0CDD
cs=0xf9f;eip=0x000ce0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x10))));	// 38103                  mov     dx, [bp+10h] ;~ 0F9F:0CE0
cs=0xf9f;eip=0x000ce3; 	X(MOV(*(dw*)(raddr(es,si+0x12)), ax));	// 38104                  mov     es:[si+12h], ax ;~ 0F9F:0CE3
cs=0xf9f;eip=0x000ce7; 	X(MOV(*(dw*)(raddr(es,si+0x14)), dx));	// 38105                  mov     es:[si+14h], dx ;~ 0F9F:0CE7
cs=0xf9f;eip=0x000ceb; 	J(CALLF(__dispatch_call,*(dd*)(raddr(es,si+0x12))));	// 38106                  call    dword ptr es:[si+12h] ;~ 0F9F:0CEB
cs=0xf9f;eip=0x000cef; 	X(POP(di));	// 38107                  pop     di ;~ 0F9F:0CEF
cs=0xf9f;eip=0x000cf0; 	X(POP(si));	// 38108                  pop     si ;~ 0F9F:0CF0
cs=0xf9f;eip=0x000cf1; 	T(es = di;);	// 38109                  mov     es, di ;~ 0F9F:0CF1
cs=0xf9f;eip=0x000cf3; 	X(MOV(*(dw*)(raddr(es,si+0x10)), ax));	// 38110                  mov     es:[si+10h], ax ;~ 0F9F:0CF3
cs=0xf9f;eip=0x000cf7; 	T(CMP(ax, 4));	// 38111                  cmp     ax, 4 ;~ 0F9F:0CF7
cs=0xf9f;eip=0x000cfa; 	J(JA(loc_1ece0));	// 38112                  ja      short loc_1ECE0 ;~ 0F9F:0CFA
cs=0xf9f;eip=0x000cfc; 	T(ax = 3;);	// 38113                  mov     ax, 3 ;~ 0F9F:0CFC
cs=0xf9f;eip=0x000cff; 	J(JMP(loc_1edc6));	// 38114                  jmp     loc_1EDC6 ;~ 0F9F:0CFF
sub_1ecd3:
	// 38121 
cs=0xf9f;eip=0x000d03; 	T(ax = seg_offset(seg001););	// 38122                  mov     ax, seg seg001 ;~ 0F9F:0D03
cs=0xf9f;eip=0x000d06; 	X(PUSH(ax));	// 38123                  push    ax ;~ 0F9F:0D06
cs=0xf9f;eip=0x000d07; 	T(ax = m2c::kloc_1ec7a;);	// 38124                  mov     ax, offset loc_1EC7A ;~ 0F9F:0D07
cs=0xf9f;eip=0x000d0a; 	X(PUSH(ax));	// 38125                  push    ax ;~ 0F9F:0D0A
cs=0xf9f;eip=0x000d0b; 	J(CALL(sub_1e052,0));	// 38126                  call    sub_1E052 ;~ 0F9F:0D0B
cs=0xf9f;eip=0x000d0e; 	J(RETF(0));	// 38127                  retf ;~ 0F9F:0D0E
seg001_d10_proc:
	// 38134 
loc_1ece0:
	// 6611 
cs=0xf9f;eip=0x000d10; 	T(MOV(al, *(raddr(es,si+0x221E))));	// 38135                  mov     al, es:[si+221Eh] ;~ 0F9F:0D10
cs=0xf9f;eip=0x000d15; 	T(SUB(ah, ah));	// 38136                  sub     ah, ah ;~ 0F9F:0D15
cs=0xf9f;eip=0x000d17; 	X(MOV(*(dw*)(raddr(es,si+2)), ax));	// 38137                  mov     es:[si+2], ax ;~ 0F9F:0D17
cs=0xf9f;eip=0x000d1b; 	T(MOV(al, *(raddr(es,si+0x2220))));	// 38138                  mov     al, es:[si+2220h] ;~ 0F9F:0D1B
cs=0xf9f;eip=0x000d20; 	X(MOV(*(dw*)(raddr(es,si+0x0A)), ax));	// 38139                  mov     es:[si+0Ah], ax ;~ 0F9F:0D20
cs=0xf9f;eip=0x000d24; 	T(MOV(al, *(raddr(es,si+0x221F))));	// 38140                  mov     al, es:[si+221Fh] ;~ 0F9F:0D24
cs=0xf9f;eip=0x000d29; 	X(MOV(*(dw*)(raddr(es,si+6)), ax));	// 38141                  mov     es:[si+6], ax ;~ 0F9F:0D29
cs=0xf9f;eip=0x000d2d; 	X(MOV(*(dw*)(raddr(es,si+0x0C)), 0));	// 38142                  mov     word ptr es:[si+0Ch], 0 ;~ 0F9F:0D2D
cs=0xf9f;eip=0x000d33; 	X(MOV(*(dw*)(raddr(es,si+0x0E)), 3));	// 38143                  mov     word ptr es:[si+0Eh], 3 ;~ 0F9F:0D33
cs=0xf9f;eip=0x000d39; 	T(CMP(ax, 4));	// 38144                  cmp     ax, 4 ;~ 0F9F:0D39
cs=0xf9f;eip=0x000d3c; 	J(JNC(loc_1ed11));	// 38145                  jnb     short loc_1ED11 ;~ 0F9F:0D3C
cs=0xf9f;eip=0x000d3e; 	J(JMP(loc_1edc3));	// 38146                  jmp     loc_1EDC3 ;~ 0F9F:0D3E
loc_1ed11:
	// 6612 
cs=0xf9f;eip=0x000d41; 	T(CMP(ax, 6));	// 38150                  cmp     ax, 6 ;~ 0F9F:0D41
cs=0xf9f;eip=0x000d44; 	J(JBE(loc_1ed19));	// 38151                  jbe     short loc_1ED19 ;~ 0F9F:0D44
cs=0xf9f;eip=0x000d46; 	J(JMP(loc_1edc3));	// 38152                  jmp     loc_1EDC3 ;~ 0F9F:0D46
loc_1ed19:
	// 6613 
cs=0xf9f;eip=0x000d49; 	T(cl = 0x10;);	// 38156                  mov     cl, 10h ;~ 0F9F:0D49
cs=0xf9f;eip=0x000d4b; 	T(SUB(cl, al));	// 38157                  sub     cl, al ;~ 0F9F:0D4B
cs=0xf9f;eip=0x000d4d; 	T(ax = 0x0FFFF;);	// 38158                  mov     ax, 0FFFFh ;~ 0F9F:0D4D
cs=0xf9f;eip=0x000d50; 	T(SHR(ax, cl));	// 38159                  shr     ax, cl ;~ 0F9F:0D50
cs=0xf9f;eip=0x000d52; 	X(MOV(*(dw*)(raddr(es,si+8)), ax));	// 38160                  mov     es:[si+8], ax ;~ 0F9F:0D52
cs=0xf9f;eip=0x000d56; 	T(MOV(ax, *(dw*)(raddr(es,si+2))));	// 38161                  mov     ax, es:[si+2] ;~ 0F9F:0D56
cs=0xf9f;eip=0x000d5a; 	T(OR(ax, ax));	// 38162                  or      ax, ax ;~ 0F9F:0D5A
cs=0xf9f;eip=0x000d5c; 	J(JZ(loc_1ed4b));	// 38163                  jz      short loc_1ED4B ;~ 0F9F:0D5C
cs=0xf9f;eip=0x000d5e; 	T(DEC(ax));	// 38164                  dec     ax ;~ 0F9F:0D5E
cs=0xf9f;eip=0x000d5f; 	J(JZ(loc_1ed37));	// 38165                  jz      short loc_1ED37 ;~ 0F9F:0D5F
cs=0xf9f;eip=0x000d61; 	T(ax = 2;);	// 38166                  mov     ax, 2 ;~ 0F9F:0D61
cs=0xf9f;eip=0x000d64; 	J(JMP(loc_1edc6));	// 38167                  jmp     loc_1EDC6 ;~ 0F9F:0D64
loc_1ed37:
	// 6614 
cs=0xf9f;eip=0x000d67; 	T(ax = si+0x2F9E);	// 38171                  lea     ax, [si+2F9Eh] ;~ 0F9F:0D67
cs=0xf9f;eip=0x000d6b; 	X(PUSH(es));	// 38172                  push    es ;~ 0F9F:0D6B
cs=0xf9f;eip=0x000d6c; 	X(PUSH(ax));	// 38173                  push    ax ;~ 0F9F:0D6C
cs=0xf9f;eip=0x000d6d; 	T(ax = 0x15A;);	// 38174                  mov     ax, 15Ah ;~ 0F9F:0D6D
cs=0xf9f;eip=0x000d70; 	X(PUSH(cs));	// 38175                  push    cs ;~ 0F9F:0D70
cs=0xf9f;eip=0x000d71; 	X(PUSH(ax));	// 38176                  push    ax ;~ 0F9F:0D71
cs=0xf9f;eip=0x000d72; 	T(ax = 0x100;);	// 38177                  mov     ax, 100h ;~ 0F9F:0D72
cs=0xf9f;eip=0x000d75; 	J(CALL(sub_1eba2,0));	// 38178                  call    sub_1EBA2 ;~ 0F9F:0D75
cs=0xf9f;eip=0x000d78; 	J(CALL(sub_1f0f7,0));	// 38179                  call    sub_1F0F7 ;~ 0F9F:0D78
loc_1ed4b:
	// 6615 
cs=0xf9f;eip=0x000d7b; 	X(PUSH(di));	// 38182                  push    di ;~ 0F9F:0D7B
cs=0xf9f;eip=0x000d7c; 	T(ax = si+0x30DE);	// 38183                  lea     ax, [si+30DEh] ;~ 0F9F:0D7C
cs=0xf9f;eip=0x000d80; 	X(PUSH(ax));	// 38184                  push    ax ;~ 0F9F:0D80
cs=0xf9f;eip=0x000d81; 	T(ax = 0x13A;);	// 38185                  mov     ax, 13Ah ;~ 0F9F:0D81
cs=0xf9f;eip=0x000d84; 	X(PUSH(cs));	// 38186                  push    cs ;~ 0F9F:0D84
cs=0xf9f;eip=0x000d85; 	X(PUSH(ax));	// 38187                  push    ax ;~ 0F9F:0D85
cs=0xf9f;eip=0x000d86; 	T(ax = 0x10;);	// 38188                  mov     ax, 10h ;~ 0F9F:0D86
cs=0xf9f;eip=0x000d89; 	J(CALL(sub_1eba2,0));	// 38189                  call    sub_1EBA2 ;~ 0F9F:0D89
cs=0xf9f;eip=0x000d8c; 	T(bx = si+0x30DE);	// 38190                  lea     bx, [si+30DEh] ;~ 0F9F:0D8C
cs=0xf9f;eip=0x000d90; 	T(cx = 0x14A;);	// 38191                  mov     cx, 14Ah ;~ 0F9F:0D90
cs=0xf9f;eip=0x000d93; 	T(dx = si+0x2B1E);	// 38192                  lea     dx, [si+2B1Eh] ;~ 0F9F:0D93
cs=0xf9f;eip=0x000d97; 	T(ax = 0x10;);	// 38193                  mov     ax, 10h ;~ 0F9F:0D97
cs=0xf9f;eip=0x000d9a; 	J(CALL(sub_1f0c1,0));	// 38194                  call    sub_1F0C1 ;~ 0F9F:0D9A
cs=0xf9f;eip=0x000d9d; 	X(PUSH(di));	// 38195                  push    di ;~ 0F9F:0D9D
cs=0xf9f;eip=0x000d9e; 	T(ax = si+0x30EE);	// 38196                  lea     ax, [si+30EEh] ;~ 0F9F:0D9E
cs=0xf9f;eip=0x000da2; 	X(PUSH(ax));	// 38197                  push    ax ;~ 0F9F:0DA2
cs=0xf9f;eip=0x000da3; 	T(ax = 0x10A;);	// 38198                  mov     ax, 10Ah ;~ 0F9F:0DA3
cs=0xf9f;eip=0x000da6; 	X(PUSH(cs));	// 38199                  push    cs ;~ 0F9F:0DA6
cs=0xf9f;eip=0x000da7; 	X(PUSH(ax));	// 38200                  push    ax ;~ 0F9F:0DA7
cs=0xf9f;eip=0x000da8; 	T(ax = 0x10;);	// 38201                  mov     ax, 10h ;~ 0F9F:0DA8
cs=0xf9f;eip=0x000dab; 	J(CALL(sub_1eba2,0));	// 38202                  call    sub_1EBA2 ;~ 0F9F:0DAB
cs=0xf9f;eip=0x000dae; 	X(PUSH(di));	// 38203                  push    di ;~ 0F9F:0DAE
cs=0xf9f;eip=0x000daf; 	T(ax = si+0x30FE);	// 38204                  lea     ax, [si+30FEh] ;~ 0F9F:0DAF
cs=0xf9f;eip=0x000db3; 	X(PUSH(ax));	// 38205                  push    ax ;~ 0F9F:0DB3
cs=0xf9f;eip=0x000db4; 	T(ax = 0x11A;);	// 38206                  mov     ax, 11Ah ;~ 0F9F:0DB4
cs=0xf9f;eip=0x000db7; 	X(PUSH(cs));	// 38207                  push    cs ;~ 0F9F:0DB7
cs=0xf9f;eip=0x000db8; 	X(PUSH(ax));	// 38208                  push    ax ;~ 0F9F:0DB8
cs=0xf9f;eip=0x000db9; 	T(ax = 0x20;);	// 38209                  mov     ax, 20h ; ' ' ;~ 0F9F:0DB9
cs=0xf9f;eip=0x000dbc; 	J(CALL(sub_1eba2,0));	// 38210                  call    sub_1EBA2 ;~ 0F9F:0DBC
cs=0xf9f;eip=0x000dbf; 	X(PUSH(di));	// 38211                  push    di ;~ 0F9F:0DBF
cs=0xf9f;eip=0x000dc0; 	T(ax = si+0x309E);	// 38212                  lea     ax, [si+309Eh] ;~ 0F9F:0DC0
cs=0xf9f;eip=0x000dc4; 	X(PUSH(ax));	// 38213                  push    ax ;~ 0F9F:0DC4
cs=0xf9f;eip=0x000dc5; 	T(ax = 0x8A;);	// 38214                  mov     ax, 8Ah ;~ 0F9F:0DC5
cs=0xf9f;eip=0x000dc8; 	X(PUSH(cs));	// 38215                  push    cs ;~ 0F9F:0DC8
cs=0xf9f;eip=0x000dc9; 	X(PUSH(ax));	// 38216                  push    ax ;~ 0F9F:0DC9
cs=0xf9f;eip=0x000dca; 	T(ax = 0x40;);	// 38217                  mov     ax, 40h ; '@' ;~ 0F9F:0DCA
cs=0xf9f;eip=0x000dcd; 	J(CALL(sub_1eba2,0));	// 38218                  call    sub_1EBA2 ;~ 0F9F:0DCD
cs=0xf9f;eip=0x000dd0; 	T(bx = si+0x309E);	// 38219                  lea     bx, [si+309Eh] ;~ 0F9F:0DD0
cs=0xf9f;eip=0x000dd4; 	T(cx = 0x0CA;);	// 38220                  mov     cx, 0CAh ;~ 0F9F:0DD4
cs=0xf9f;eip=0x000dd7; 	T(dx = si+0x2A1E);	// 38221                  lea     dx, [si+2A1Eh] ;~ 0F9F:0DD7
cs=0xf9f;eip=0x000ddb; 	T(ax = 0x40;);	// 38222                  mov     ax, 40h ; '@' ;~ 0F9F:0DDB
cs=0xf9f;eip=0x000dde; 	J(CALL(sub_1f0c1,0));	// 38223                  call    sub_1F0C1 ;~ 0F9F:0DDE
cs=0xf9f;eip=0x000de1; 	J(CALL(sub_1edcd,0));	// 38224                  call    sub_1EDCD ;~ 0F9F:0DE1
cs=0xf9f;eip=0x000de4; 	T(CMP(ax, 0x306));	// 38226                  cmp     ax, 306h ;~ 0F9F:0DE4
cs=0xf9f;eip=0x000de7; 	J(JNZ(loc_1edbf));	// 38227                  jnz     short loc_1EDBF ;~ 0F9F:0DE7
cs=0xf9f;eip=0x000de9; 	T(ax = 4;);	// 38228                  mov     ax, 4 ;~ 0F9F:0DE9
cs=0xf9f;eip=0x000dec; 	J(JMP(loc_1edc6));	// 38229                  jmp     short loc_1EDC6 ;~ 0F9F:0DEC
loc_1edbf:
	// 6616 
cs=0xf9f;eip=0x000def; 	T(SUB(ax, ax));	// 38235                  sub     ax, ax ;~ 0F9F:0DEF
cs=0xf9f;eip=0x000df1; 	J(JMP(loc_1edc6));	// 38236                  jmp     short loc_1EDC6 ;~ 0F9F:0DF1
loc_1edc3:
	// 6617 
cs=0xf9f;eip=0x000df3; 	T(ax = 1;);	// 38241                  mov     ax, 1 ;~ 0F9F:0DF3
loc_1edc6:
	// 6618 
cs=0xf9f;eip=0x000df6; 	X(POP(di));	// 38245                  pop     di ;~ 0F9F:0DF6
cs=0xf9f;eip=0x000df7; 	X(POP(si));	// 38246                  pop     si ;~ 0F9F:0DF7
cs=0xf9f;eip=0x000df8; 	X(POP(bp));	// 38247                  pop     bp ;~ 0F9F:0DF8
cs=0xf9f;eip=0x000df9; 	J(RETF(0x0C));	// 38248                  retf    0Ch ;~ 0F9F:0DF9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1ec7a: 	goto loc_1ec7a;
        case m2c::kloc_1ece0: 	goto loc_1ece0;
        case m2c::kloc_1ed11: 	goto loc_1ed11;
        case m2c::kloc_1ed19: 	goto loc_1ed19;
        case m2c::kloc_1ed37: 	goto loc_1ed37;
        case m2c::kloc_1ed4b: 	goto loc_1ed4b;
        case m2c::kloc_1edbf: 	goto loc_1edbf;
        case m2c::kloc_1edc3: 	goto loc_1edc3;
        case m2c::kloc_1edc6: 	goto loc_1edc6;
        case m2c::ksub_1ecd3: 	goto sub_1ecd3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1edcd(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1edcd:
    _begin:
#undef var_2
#define var_2 -2
	// 38259 var_2           = word ptr -2 ;~ 0F9F:0DFD
cs=0xf9f;eip=0x000dfd; 	X(PUSH(bp));	// 38261                  push    bp ;~ 0F9F:0DFD
cs=0xf9f;eip=0x000dfe; 	T(bp = sp;);	// 38262                  mov     bp, sp ;~ 0F9F:0DFE
cs=0xf9f;eip=0x000e00; 	T(SUB(sp, 2));	// 38263                  sub     sp, 2 ;~ 0F9F:0E00
cs=0xf9f;eip=0x000e03; 	X(PUSH(si));	// 38264                  push    si ;~ 0F9F:0E03
cs=0xf9f;eip=0x000e04; 	X(PUSH(di));	// 38265                  push    di ;~ 0F9F:0E04
cs=0xf9f;eip=0x000e05; 	T(LES(si, off_6b860));	// 38266                  les     si, off_6B860 ;~ 0F9F:0E05
cs=0xf9f;eip=0x000e09; 	X(MOV(*(dw*)(raddr(es,si+4)), 0x1000));	// 38267                  mov     word ptr es:[si+4], 1000h ;~ 0F9F:0E09
loc_1eddf:
	// 6619 
cs=0xf9f;eip=0x000e0f; 	X(PUSH(es));	// 38271                  push    es ;~ 0F9F:0E0F
cs=0xf9f;eip=0x000e10; 	J(CALL(sub_1ee98,0));	// 38272                  call    sub_1EE98 ;~ 0F9F:0E10
cs=0xf9f;eip=0x000e13; 	X(POP(es));	// 38273                  pop     es ;~ 0F9F:0E13
cs=0xf9f;eip=0x000e14; 	T(CMP(ax, 0x305));	// 38274                  cmp     ax, 305h ;~ 0F9F:0E14
cs=0xf9f;eip=0x000e17; 	J(JC(loc_1edec));	// 38275                  jb      short loc_1EDEC ;~ 0F9F:0E17
cs=0xf9f;eip=0x000e19; 	J(JMP(loc_1ee75));	// 38276                  jmp     loc_1EE75 ;~ 0F9F:0E19
loc_1edec:
	// 6620 
cs=0xf9f;eip=0x000e1c; 	T(CMP(ax, 0x100));	// 38280                  cmp     ax, 100h ;~ 0F9F:0E1C
cs=0xf9f;eip=0x000e1f; 	J(JNC(loc_1ee02));	// 38281                  jnb     short loc_1EE02 ;~ 0F9F:0E1F
cs=0xf9f;eip=0x000e21; 	T(bx = si+0x1A);	// 38282                  lea     bx, [si+1Ah] ;~ 0F9F:0E21
cs=0xf9f;eip=0x000e24; 	T(MOV(di, *(dw*)(raddr(es,si+4))));	// 38283                  mov     di, es:[si+4] ;~ 0F9F:0E24
cs=0xf9f;eip=0x000e28; 	X(MOV(*(raddr(es,bx+di)), al));	// 38284                  mov     es:[bx+di], al ;~ 0F9F:0E28
cs=0xf9f;eip=0x000e2b; 	T(INC(di));	// 38285                  inc     di ;~ 0F9F:0E2B
cs=0xf9f;eip=0x000e2c; 	X(MOV(*(dw*)(raddr(es,si+4)), di));	// 38286                  mov     es:[si+4], di ;~ 0F9F:0E2C
cs=0xf9f;eip=0x000e30; 	J(JMP(loc_1ee32));	// 38287                  jmp     short loc_1EE32 ;~ 0F9F:0E30
loc_1ee02:
	// 6621 
cs=0xf9f;eip=0x000e32; 	T(SUB(ax, 0x0FE));	// 38291                  sub     ax, 0FEh ;~ 0F9F:0E32
cs=0xf9f;eip=0x000e35; 	T(di = ax;);	// 38292                  mov     di, ax ;~ 0F9F:0E35
cs=0xf9f;eip=0x000e37; 	X(PUSH(es));	// 38293                  push    es ;~ 0F9F:0E37
cs=0xf9f;eip=0x000e38; 	J(CALL(sub_1efd6,0));	// 38294                  call    sub_1EFD6 ;~ 0F9F:0E38
cs=0xf9f;eip=0x000e3b; 	X(POP(es));	// 38295                  pop     es ;~ 0F9F:0E3B
cs=0xf9f;eip=0x000e3c; 	T(OR(ax, ax));	// 38296                  or      ax, ax ;~ 0F9F:0E3C
cs=0xf9f;eip=0x000e3e; 	J(JZ(loc_1ee70));	// 38297                  jz      short loc_1EE70 ;~ 0F9F:0E3E
cs=0xf9f;eip=0x000e40; 	T(cx = di;);	// 38298                  mov     cx, di ;~ 0F9F:0E40
cs=0xf9f;eip=0x000e42; 	T(bx = si+0x1A);	// 38299                  lea     bx, [si+1Ah] ;~ 0F9F:0E42
cs=0xf9f;eip=0x000e45; 	T(MOV(di, *(dw*)(raddr(es,si+4))));	// 38300                  mov     di, es:[si+4] ;~ 0F9F:0E45
cs=0xf9f;eip=0x000e49; 	T(ADD(di, bx));	// 38301                  add     di, bx ;~ 0F9F:0E49
cs=0xf9f;eip=0x000e4b; 	T(dx = si;);	// 38302                  mov     dx, si ;~ 0F9F:0E4B
cs=0xf9f;eip=0x000e4d; 	T(si = di;);	// 38303                  mov     si, di ;~ 0F9F:0E4D
cs=0xf9f;eip=0x000e4f; 	T(SUB(si, ax));	// 38304                  sub     si, ax ;~ 0F9F:0E4F
cs=0xf9f;eip=0x000e51; 	T(CLD);	// 38305                  cld ;~ 0F9F:0E51
cs=0xf9f;eip=0x000e52; 	X(PUSH(ds));	// 38306                  push    ds ;~ 0F9F:0E52
cs=0xf9f;eip=0x000e53; 	T(ax = es;);	// 38307                  mov     ax, es ;~ 0F9F:0E53
cs=0xf9f;eip=0x000e55; 	T(ds = ax;);	// 38308                  mov     ds, ax ;~ 0F9F:0E55
	// 38310                  rep movsb ;~ 0F9F:0E57
cs=0xf9f;eip=0x000e57; 	X(	REP MOVSB);	// 38310                  rep movsb ;~ 0F9F:0E57
cs=0xf9f;eip=0x000e59; 	X(POP(ds));	// 38311                  pop     ds ;~ 0F9F:0E59
cs=0xf9f;eip=0x000e5a; 	T(si = dx;);	// 38313                  mov     si, dx ;~ 0F9F:0E5A
cs=0xf9f;eip=0x000e5c; 	T(SUB(di, bx));	// 38314                  sub     di, bx ;~ 0F9F:0E5C
cs=0xf9f;eip=0x000e5e; 	X(MOV(*(dw*)(raddr(es,si+4)), di));	// 38315                  mov     es:[si+4], di ;~ 0F9F:0E5E
loc_1ee32:
	// 6622 
cs=0xf9f;eip=0x000e62; 	T(CMP(di, 0x2000));	// 38318                  cmp     di, 2000h ;~ 0F9F:0E62
cs=0xf9f;eip=0x000e66; 	J(JC(loc_1eddf));	// 38319                  jb      short loc_1EDDF ;~ 0F9F:0E66
cs=0xf9f;eip=0x000e68; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x1000));	// 38320                  mov     [bp+var_2], 1000h ;~ 0F9F:0E68
cs=0xf9f;eip=0x000e6d; 	X(PUSH(si));	// 38321                  push    si ;~ 0F9F:0E6D
cs=0xf9f;eip=0x000e6e; 	X(PUSH(di));	// 38322                  push    di ;~ 0F9F:0E6E
cs=0xf9f;eip=0x000e6f; 	T(ax = si+0x101A);	// 38323                  lea     ax, [si+101Ah] ;~ 0F9F:0E6F
cs=0xf9f;eip=0x000e73; 	X(PUSH(es));	// 38324                  push    es ;~ 0F9F:0E73
cs=0xf9f;eip=0x000e74; 	X(PUSH(ax));	// 38325                  push    ax ;~ 0F9F:0E74
cs=0xf9f;eip=0x000e75; 	T(ax = bp+var_2);	// 38326                  lea     ax, [bp+var_2] ;~ 0F9F:0E75
cs=0xf9f;eip=0x000e78; 	X(PUSH(ss));	// 38327                  push    ss ;~ 0F9F:0E78
cs=0xf9f;eip=0x000e79; 	X(PUSH(ax));	// 38328                  push    ax ;~ 0F9F:0E79
cs=0xf9f;eip=0x000e7a; 	J(CALLF(__dispatch_call,*(dd*)(raddr(es,si+0x16))));	// 38329                  call    dword ptr es:[si+16h] ;~ 0F9F:0E7A
cs=0xf9f;eip=0x000e7e; 	X(POP(di));	// 38330                  pop     di ;~ 0F9F:0E7E
cs=0xf9f;eip=0x000e7f; 	X(POP(si));	// 38331                  pop     si ;~ 0F9F:0E7F
cs=0xf9f;eip=0x000e80; 	T(es = *(dw*)(((db*)&off_6b860)+2););	// 38332                  mov     es, word ptr off_6B860+2 ;~ 0F9F:0E80
cs=0xf9f;eip=0x000e84; 	T(ax = si+0x1A);	// 38333                  lea     ax, [si+1Ah] ;~ 0F9F:0E84
cs=0xf9f;eip=0x000e87; 	X(PUSH(es));	// 38334                  push    es ;~ 0F9F:0E87
cs=0xf9f;eip=0x000e88; 	X(PUSH(ax));	// 38335                  push    ax ;~ 0F9F:0E88
cs=0xf9f;eip=0x000e89; 	T(ADD(ax, 0x1000));	// 38336                  add     ax, 1000h ;~ 0F9F:0E89
cs=0xf9f;eip=0x000e8c; 	X(PUSH(es));	// 38337                  push    es ;~ 0F9F:0E8C
cs=0xf9f;eip=0x000e8d; 	X(PUSH(ax));	// 38338                  push    ax ;~ 0F9F:0E8D
cs=0xf9f;eip=0x000e8e; 	T(MOV(ax, *(dw*)(raddr(es,si+4))));	// 38339                  mov     ax, es:[si+4] ;~ 0F9F:0E8E
cs=0xf9f;eip=0x000e92; 	T(SUB(ax, 0x1000));	// 38340                  sub     ax, 1000h ;~ 0F9F:0E92
cs=0xf9f;eip=0x000e95; 	X(MOV(*(dw*)(raddr(es,si+4)), ax));	// 38341                  mov     es:[si+4], ax ;~ 0F9F:0E95
cs=0xf9f;eip=0x000e99; 	J(CALL(sub_1eba2,0));	// 38342                  call    sub_1EBA2 ;~ 0F9F:0E99
cs=0xf9f;eip=0x000e9c; 	J(JMP(loc_1eddf));	// 38343                  jmp     loc_1EDDF ;~ 0F9F:0E9C
loc_1ee70:
	// 6623 
cs=0xf9f;eip=0x000ea0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x306));	// 38349                  mov     [bp+var_2], 306h ;~ 0F9F:0EA0
loc_1ee75:
	// 6624 
cs=0xf9f;eip=0x000ea5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 38352                  push    [bp+var_2] ;~ 0F9F:0EA5
cs=0xf9f;eip=0x000ea8; 	T(MOV(ax, *(dw*)(raddr(es,si+4))));	// 38353                  mov     ax, es:[si+4] ;~ 0F9F:0EA8
cs=0xf9f;eip=0x000eac; 	T(SUB(ax, 0x1000));	// 38354                  sub     ax, 1000h ;~ 0F9F:0EAC
cs=0xf9f;eip=0x000eaf; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 38355                  mov     [bp+var_2], ax ;~ 0F9F:0EAF
cs=0xf9f;eip=0x000eb2; 	T(ax = si+0x101A);	// 38356                  lea     ax, [si+101Ah] ;~ 0F9F:0EB2
cs=0xf9f;eip=0x000eb6; 	X(PUSH(es));	// 38357                  push    es ;~ 0F9F:0EB6
cs=0xf9f;eip=0x000eb7; 	X(PUSH(ax));	// 38358                  push    ax ;~ 0F9F:0EB7
cs=0xf9f;eip=0x000eb8; 	T(ax = bp+var_2);	// 38359                  lea     ax, [bp+var_2] ;~ 0F9F:0EB8
cs=0xf9f;eip=0x000ebb; 	X(PUSH(ss));	// 38360                  push    ss ;~ 0F9F:0EBB
cs=0xf9f;eip=0x000ebc; 	X(PUSH(ax));	// 38361                  push    ax ;~ 0F9F:0EBC
cs=0xf9f;eip=0x000ebd; 	J(CALLF(__dispatch_call,*(dd*)(raddr(es,si+0x16))));	// 38362                  call    dword ptr es:[si+16h] ;~ 0F9F:0EBD
cs=0xf9f;eip=0x000ec1; 	X(POP(ax));	// 38364                  pop     ax ;~ 0F9F:0EC1
cs=0xf9f;eip=0x000ec2; 	X(POP(di));	// 38365                  pop     di ;~ 0F9F:0EC2
cs=0xf9f;eip=0x000ec3; 	X(POP(si));	// 38366                  pop     si ;~ 0F9F:0EC3
cs=0xf9f;eip=0x000ec4; 	T(sp = bp;);	// 38367                  mov     sp, bp ;~ 0F9F:0EC4
cs=0xf9f;eip=0x000ec6; 	X(POP(bp));	// 38368                  pop     bp ;~ 0F9F:0EC6
cs=0xf9f;eip=0x000ec7; 	J(RETN(0));	// 38369                  retn ;~ 0F9F:0EC7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1eddf: 	goto loc_1eddf;
        case m2c::kloc_1edec: 	goto loc_1edec;
        case m2c::kloc_1ee02: 	goto loc_1ee02;
        case m2c::kloc_1ee32: 	goto loc_1ee32;
        case m2c::kloc_1ee70: 	goto loc_1ee70;
        case m2c::kloc_1ee75: 	goto loc_1ee75;
        case m2c::ksub_1edcd: 	goto sub_1edcd;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1ee98(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1ee98:
    _begin:
cs=0xf9f;eip=0x000ec8; 	X(PUSH(di));	// 38378                  push    di ;~ 0F9F:0EC8
cs=0xf9f;eip=0x000ec9; 	X(PUSH(si));	// 38379                  push    si ;~ 0F9F:0EC9
cs=0xf9f;eip=0x000eca; 	T(LES(bx, off_6b860));	// 38380                  les     bx, off_6B860 ;~ 0F9F:0ECA
cs=0xf9f;eip=0x000ece; 	T(TEST(*(raddr(es,bx+0x0A)), 1));	// 38381                  test    byte ptr es:[bx+0Ah], 1 ;~ 0F9F:0ECE
cs=0xf9f;eip=0x000ed3; 	J(JZ(loc_1ef0f));	// 38382                  jz      short loc_1EF0F ;~ 0F9F:0ED3
cs=0xf9f;eip=0x000ed5; 	T(ax = 1;);	// 38383                  mov     ax, 1 ;~ 0F9F:0ED5
cs=0xf9f;eip=0x000ed8; 	J(CALL(sub_1f03e,0));	// 38384                  call    sub_1F03E ;~ 0F9F:0ED8
cs=0xf9f;eip=0x000edb; 	T(OR(ax, ax));	// 38385                  or      ax, ax ;~ 0F9F:0EDB
cs=0xf9f;eip=0x000edd; 	J(JZ(loc_1eeb5));	// 38386                  jz      short loc_1EEB5 ;~ 0F9F:0EDD
loc_1eeaf:
	// 6625 
cs=0xf9f;eip=0x000edf; 	T(ax = 0x306;);	// 38390                  mov     ax, 306h ;~ 0F9F:0EDF
cs=0xf9f;eip=0x000ee2; 	J(JMP(loc_1efd2));	// 38391                  jmp     loc_1EFD2 ;~ 0F9F:0EE2
loc_1eeb5:
	// 6626 
cs=0xf9f;eip=0x000ee5; 	T(LES(bx, off_6b860));	// 38395                  les     bx, off_6B860 ;~ 0F9F:0EE5
cs=0xf9f;eip=0x000ee9; 	T(MOV(si, *(dw*)(raddr(es,bx+0x0A))));	// 38396                  mov     si, es:[bx+0Ah] ;~ 0F9F:0EE9
cs=0xf9f;eip=0x000eed; 	T(AND(si, 0x0FF));	// 38397                  and     si, 0FFh ;~ 0F9F:0EED
cs=0xf9f;eip=0x000ef1; 	T(MOV(al, *(raddr(es,bx+si+0x2B1E))));	// 38398                  mov     al, es:[bx+si+2B1Eh] ;~ 0F9F:0EF1
cs=0xf9f;eip=0x000ef6; 	T(SUB(ah, ah));	// 38399                  sub     ah, ah ;~ 0F9F:0EF6
cs=0xf9f;eip=0x000ef8; 	T(di = ax;);	// 38400                  mov     di, ax ;~ 0F9F:0EF8
cs=0xf9f;eip=0x000efa; 	T(si = bx+0x30DE);	// 38401                  lea     si, [bx+30DEh] ;~ 0F9F:0EFA
cs=0xf9f;eip=0x000efe; 	T(bx = ax;);	// 38402                  mov     bx, ax ;~ 0F9F:0EFE
cs=0xf9f;eip=0x000f00; 	T(MOV(al, *(raddr(es,bx+si))));	// 38403                  mov     al, es:[bx+si] ;~ 0F9F:0F00
cs=0xf9f;eip=0x000f03; 	T(SUB(ah, ah));	// 38404                  sub     ah, ah ;~ 0F9F:0F03
cs=0xf9f;eip=0x000f05; 	J(CALL(sub_1f03e,0));	// 38405                  call    sub_1F03E ;~ 0F9F:0F05
cs=0xf9f;eip=0x000f08; 	T(OR(ax, ax));	// 38406                  or      ax, ax ;~ 0F9F:0F08
cs=0xf9f;eip=0x000f0a; 	J(JNZ(loc_1eeaf));	// 38407                  jnz     short loc_1EEAF ;~ 0F9F:0F0A
cs=0xf9f;eip=0x000f0c; 	T(LES(bx, off_6b860));	// 38408                  les     bx, off_6B860 ;~ 0F9F:0F0C
cs=0xf9f;eip=0x000f10; 	T(MOV(cl, *(raddr(es,bx+di+0x30EE))));	// 38409                  mov     cl, es:[bx+di+30EEh] ;~ 0F9F:0F10
cs=0xf9f;eip=0x000f15; 	T(TEST(cl, cl));	// 38410                  test    cl, cl ;~ 0F9F:0F15
cs=0xf9f;eip=0x000f17; 	J(JZ(loc_1ef07));	// 38411                  jz      short loc_1EF07 ;~ 0F9F:0F17
cs=0xf9f;eip=0x000f19; 	T(si = 1;);	// 38412                  mov     si, 1 ;~ 0F9F:0F19
cs=0xf9f;eip=0x000f1c; 	T(SHL(si, cl));	// 38413                  shl     si, cl ;~ 0F9F:0F1C
cs=0xf9f;eip=0x000f1e; 	T(DEC(si));	// 38414                  dec     si ;~ 0F9F:0F1E
cs=0xf9f;eip=0x000f1f; 	T(AND(si, *(dw*)(raddr(es,bx+0x0A))));	// 38415                  and     si, es:[bx+0Ah] ;~ 0F9F:0F1F
cs=0xf9f;eip=0x000f23; 	T(SHL(di, 1));	// 38416                  shl     di, 1 ;~ 0F9F:0F23
cs=0xf9f;eip=0x000f25; 	T(ADD(si, *(dw*)(raddr(es,bx+di+0x30FE))));	// 38417                  add     si, es:[bx+di+30FEh] ;~ 0F9F:0F25
cs=0xf9f;eip=0x000f2a; 	T(al = cl;);	// 38418                  mov     al, cl ;~ 0F9F:0F2A
cs=0xf9f;eip=0x000f2c; 	T(SUB(ah, ah));	// 38419                  sub     ah, ah ;~ 0F9F:0F2C
cs=0xf9f;eip=0x000f2e; 	J(CALL(sub_1f03e,0));	// 38420                  call    sub_1F03E ;~ 0F9F:0F2E
cs=0xf9f;eip=0x000f31; 	T(OR(ax, ax));	// 38421                  or      ax, ax ;~ 0F9F:0F31
cs=0xf9f;eip=0x000f33; 	J(JNZ(loc_1eeaf));	// 38422                  jnz     short loc_1EEAF ;~ 0F9F:0F33
cs=0xf9f;eip=0x000f35; 	T(di = si;);	// 38423                  mov     di, si ;~ 0F9F:0F35
loc_1ef07:
	// 6627 
cs=0xf9f;eip=0x000f37; 	T(ADD(di, 0x100));	// 38426                  add     di, 100h ;~ 0F9F:0F37
cs=0xf9f;eip=0x000f3b; 	J(JMP(loc_1efd0));	// 38427                  jmp     loc_1EFD0 ;~ 0F9F:0F3B
loc_1ef0f:
	// 6628 
cs=0xf9f;eip=0x000f3f; 	T(ax = 1;);	// 38433                  mov     ax, 1 ;~ 0F9F:0F3F
cs=0xf9f;eip=0x000f42; 	J(CALL(sub_1f03e,0));	// 38434                  call    sub_1F03E ;~ 0F9F:0F42
cs=0xf9f;eip=0x000f45; 	T(OR(ax, ax));	// 38435                  or      ax, ax ;~ 0F9F:0F45
cs=0xf9f;eip=0x000f47; 	J(JZ(loc_1ef1b));	// 38436                  jz      short loc_1EF1B ;~ 0F9F:0F47
cs=0xf9f;eip=0x000f49; 	J(JMP(loc_1eeaf));	// 38437                  jmp     short loc_1EEAF ;~ 0F9F:0F49
loc_1ef1b:
	// 6629 
cs=0xf9f;eip=0x000f4b; 	T(LES(si, off_6b860));	// 38441                  les     si, off_6B860 ;~ 0F9F:0F4B
cs=0xf9f;eip=0x000f4f; 	T(CMP(*(dw*)(raddr(es,si+2)), ax));	// 38442                  cmp     es:[si+2], ax ;~ 0F9F:0F4F
cs=0xf9f;eip=0x000f53; 	J(JNZ(loc_1ef3f));	// 38443                  jnz     short loc_1EF3F ;~ 0F9F:0F53
cs=0xf9f;eip=0x000f55; 	T(bx = si;);	// 38444                  mov     bx, si ;~ 0F9F:0F55
cs=0xf9f;eip=0x000f57; 	T(MOV(di, *(dw*)(raddr(es,bx+0x0A))));	// 38445                  mov     di, es:[bx+0Ah] ;~ 0F9F:0F57
cs=0xf9f;eip=0x000f5b; 	T(AND(di, 0x0FF));	// 38446                  and     di, 0FFh ;~ 0F9F:0F5B
cs=0xf9f;eip=0x000f5f; 	T(ax = 8;);	// 38447                  mov     ax, 8 ;~ 0F9F:0F5F
loc_1ef32:
	// 6630 
cs=0xf9f;eip=0x000f62; 	J(CALL(sub_1f03e,0));	// 38450                  call    sub_1F03E ;~ 0F9F:0F62
cs=0xf9f;eip=0x000f65; 	T(OR(ax, ax));	// 38451                  or      ax, ax ;~ 0F9F:0F65
cs=0xf9f;eip=0x000f67; 	J(JNZ(loc_1ef3c));	// 38452                  jnz     short loc_1EF3C ;~ 0F9F:0F67
cs=0xf9f;eip=0x000f69; 	J(JMP(loc_1efd0));	// 38453                  jmp     loc_1EFD0 ;~ 0F9F:0F69
loc_1ef3c:
	// 6631 
cs=0xf9f;eip=0x000f6c; 	J(JMP(loc_1eeaf));	// 38457                  jmp     loc_1EEAF ;~ 0F9F:0F6C
loc_1ef3f:
	// 6632 
cs=0xf9f;eip=0x000f6f; 	T(MOV(al, *(raddr(es,si+0x0A))));	// 38461                  mov     al, es:[si+0Ah] ;~ 0F9F:0F6F
cs=0xf9f;eip=0x000f73; 	T(SUB(ah, ah));	// 38462                  sub     ah, ah ;~ 0F9F:0F73
cs=0xf9f;eip=0x000f75; 	T(OR(ax, ax));	// 38463                  or      ax, ax ;~ 0F9F:0F75
cs=0xf9f;eip=0x000f77; 	J(JZ(loc_1efa0));	// 38464                  jz      short loc_1EFA0 ;~ 0F9F:0F77
cs=0xf9f;eip=0x000f79; 	T(bx = si;);	// 38465                  mov     bx, si ;~ 0F9F:0F79
cs=0xf9f;eip=0x000f7b; 	T(ADD(bx, ax));	// 38466                  add     bx, ax ;~ 0F9F:0F7B
cs=0xf9f;eip=0x000f7d; 	T(MOV(al, *(raddr(es,bx+0x2C1E))));	// 38467                  mov     al, es:[bx+2C1Eh] ;~ 0F9F:0F7D
cs=0xf9f;eip=0x000f82; 	T(di = ax;);	// 38468                  mov     di, ax ;~ 0F9F:0F82
cs=0xf9f;eip=0x000f84; 	T(CMP(ax, 0x0FF));	// 38469                  cmp     ax, 0FFh ;~ 0F9F:0F84
cs=0xf9f;eip=0x000f87; 	J(JNZ(loc_1efc2));	// 38470                  jnz     short loc_1EFC2 ;~ 0F9F:0F87
cs=0xf9f;eip=0x000f89; 	T(TEST(*(raddr(es,si+0x0A)), 0x3F));	// 38471                  test    byte ptr es:[si+0Ah], 3Fh ;~ 0F9F:0F89
cs=0xf9f;eip=0x000f8e; 	J(JZ(loc_1ef80));	// 38472                  jz      short loc_1EF80 ;~ 0F9F:0F8E
cs=0xf9f;eip=0x000f90; 	T(ax = 4;);	// 38473                  mov     ax, 4 ;~ 0F9F:0F90
cs=0xf9f;eip=0x000f93; 	J(CALL(sub_1f03e,0));	// 38474                  call    sub_1F03E ;~ 0F9F:0F93
cs=0xf9f;eip=0x000f96; 	T(OR(ax, ax));	// 38475                  or      ax, ax ;~ 0F9F:0F96
cs=0xf9f;eip=0x000f98; 	J(JZ(loc_1ef6d));	// 38476                  jz      short loc_1EF6D ;~ 0F9F:0F98
cs=0xf9f;eip=0x000f9a; 	J(JMP(loc_1eeaf));	// 38477                  jmp     loc_1EEAF ;~ 0F9F:0F9A
loc_1ef6d:
	// 6633 
cs=0xf9f;eip=0x000f9d; 	T(LES(bx, off_6b860));	// 38481                  les     bx, off_6B860 ;~ 0F9F:0F9D
cs=0xf9f;eip=0x000fa1; 	T(MOV(si, *(dw*)(raddr(es,bx+0x0A))));	// 38483                  mov     si, es:[bx+0Ah] ;~ 0F9F:0FA1
cs=0xf9f;eip=0x000fa5; 	T(AND(si, 0x0FF));	// 38484                  and     si, 0FFh ;~ 0F9F:0FA5
cs=0xf9f;eip=0x000fa9; 	T(MOV(di, *(dw*)(raddr(es,bx+si+0x2D1E))));	// 38485                  mov     di, es:[bx+si+2D1Eh] ;~ 0F9F:0FA9
cs=0xf9f;eip=0x000fae; 	J(JMP(loc_1efbe));	// 38486                  jmp     short loc_1EFBE ;~ 0F9F:0FAE
loc_1ef80:
	// 6634 
cs=0xf9f;eip=0x000fb0; 	T(ax = 6;);	// 38490                  mov     ax, 6 ;~ 0F9F:0FB0
cs=0xf9f;eip=0x000fb3; 	J(CALL(sub_1f03e,0));	// 38491                  call    sub_1F03E ;~ 0F9F:0FB3
cs=0xf9f;eip=0x000fb6; 	T(OR(ax, ax));	// 38492                  or      ax, ax ;~ 0F9F:0FB6
cs=0xf9f;eip=0x000fb8; 	J(JZ(loc_1ef8e));	// 38493                  jz      short loc_1EF8E ;~ 0F9F:0FB8
cs=0xf9f;eip=0x000fba; 	J(JMP(loc_1eeaf));	// 38494                  jmp     loc_1EEAF ;~ 0F9F:0FBA
loc_1ef8e:
	// 6635 
cs=0xf9f;eip=0x000fbe; 	T(LES(bx, off_6b860));	// 38500                  les     bx, off_6B860 ;~ 0F9F:0FBE
cs=0xf9f;eip=0x000fc2; 	T(MOV(si, *(dw*)(raddr(es,bx+0x0A))));	// 38501                  mov     si, es:[bx+0Ah] ;~ 0F9F:0FC2
cs=0xf9f;eip=0x000fc6; 	T(AND(si, 0x7F));	// 38502                  and     si, 7Fh ;~ 0F9F:0FC6
cs=0xf9f;eip=0x000fc9; 	T(MOV(di, *(dw*)(raddr(es,bx+si+0x2E1E))));	// 38503                  mov     di, es:[bx+si+2E1Eh] ;~ 0F9F:0FC9
cs=0xf9f;eip=0x000fce; 	J(JMP(loc_1efbe));	// 38504                  jmp     short loc_1EFBE ;~ 0F9F:0FCE
loc_1efa0:
	// 6636 
cs=0xf9f;eip=0x000fd0; 	T(ax = 8;);	// 38508                  mov     ax, 8 ;~ 0F9F:0FD0
cs=0xf9f;eip=0x000fd3; 	J(CALL(sub_1f03e,0));	// 38509                  call    sub_1F03E ;~ 0F9F:0FD3
cs=0xf9f;eip=0x000fd6; 	T(OR(ax, ax));	// 38510                  or      ax, ax ;~ 0F9F:0FD6
cs=0xf9f;eip=0x000fd8; 	J(JZ(loc_1efad));	// 38511                  jz      short loc_1EFAD ;~ 0F9F:0FD8
cs=0xf9f;eip=0x000fda; 	J(JMP(loc_1eeaf));	// 38512                  jmp     loc_1EEAF ;~ 0F9F:0FDA
loc_1efad:
	// 6637 
cs=0xf9f;eip=0x000fdd; 	T(LES(bx, off_6b860));	// 38516                  les     bx, off_6B860 ;~ 0F9F:0FDD
cs=0xf9f;eip=0x000fe1; 	T(MOV(si, *(dw*)(raddr(es,bx+0x0A))));	// 38517                  mov     si, es:[bx+0Ah] ;~ 0F9F:0FE1
cs=0xf9f;eip=0x000fe5; 	T(AND(si, 0x0FF));	// 38518                  and     si, 0FFh ;~ 0F9F:0FE5
cs=0xf9f;eip=0x000fe9; 	T(MOV(di, *(dw*)(raddr(es,bx+si+0x2E9E))));	// 38519                  mov     di, es:[bx+si+2E9Eh] ;~ 0F9F:0FE9
loc_1efbe:
	// 6638 
cs=0xf9f;eip=0x000fee; 	T(AND(di, 0x0FF));	// 38523                  and     di, 0FFh ;~ 0F9F:0FEE
loc_1efc2:
	// 6639 
cs=0xf9f;eip=0x000ff2; 	T(bx = *(dw*)(&off_6b860););	// 38526                  mov     bx, word ptr off_6B860 ;~ 0F9F:0FF2
cs=0xf9f;eip=0x000ff6; 	T(MOV(al, *(raddr(es,bx+di+0x2F9E))));	// 38527                  mov     al, es:[bx+di+2F9Eh] ;~ 0F9F:0FF6
cs=0xf9f;eip=0x000ffb; 	T(SUB(ah, ah));	// 38528                  sub     ah, ah ;~ 0F9F:0FFB
cs=0xf9f;eip=0x000ffd; 	J(JMP(loc_1ef32));	// 38529                  jmp     loc_1EF32 ;~ 0F9F:0FFD
loc_1efd0:
	// 6640 
cs=0xf9f;eip=0x001000; 	T(ax = di;);	// 38535                  mov     ax, di ;~ 0F9F:1000
loc_1efd2:
	// 6641 
cs=0xf9f;eip=0x001002; 	X(POP(si));	// 38538                  pop     si ;~ 0F9F:1002
cs=0xf9f;eip=0x001003; 	X(POP(di));	// 38539                  pop     di ;~ 0F9F:1003
cs=0xf9f;eip=0x001004; 	J(RETN(0));	// 38540                  retn ;~ 0F9F:1004

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1eeaf: 	goto loc_1eeaf;
        case m2c::kloc_1eeb5: 	goto loc_1eeb5;
        case m2c::kloc_1ef07: 	goto loc_1ef07;
        case m2c::kloc_1ef0f: 	goto loc_1ef0f;
        case m2c::kloc_1ef1b: 	goto loc_1ef1b;
        case m2c::kloc_1ef32: 	goto loc_1ef32;
        case m2c::kloc_1ef3c: 	goto loc_1ef3c;
        case m2c::kloc_1ef3f: 	goto loc_1ef3f;
        case m2c::kloc_1ef6d: 	goto loc_1ef6d;
        case m2c::kloc_1ef80: 	goto loc_1ef80;
        case m2c::kloc_1ef8e: 	goto loc_1ef8e;
        case m2c::kloc_1efa0: 	goto loc_1efa0;
        case m2c::kloc_1efad: 	goto loc_1efad;
        case m2c::kloc_1efbe: 	goto loc_1efbe;
        case m2c::kloc_1efc2: 	goto loc_1efc2;
        case m2c::kloc_1efd0: 	goto loc_1efd0;
        case m2c::kloc_1efd2: 	goto loc_1efd2;
        case m2c::ksub_1ee98: 	goto sub_1ee98;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1efd6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1efd6:
    _begin:
cs=0xf9f;eip=0x001006; 	X(PUSH(di));	// 38550                  push    di ;~ 0F9F:1006
cs=0xf9f;eip=0x001007; 	X(PUSH(si));	// 38551                  push    si ;~ 0F9F:1007
cs=0xf9f;eip=0x001008; 	T(di = ax;);	// 38552                  mov     di, ax ;~ 0F9F:1008
cs=0xf9f;eip=0x00100a; 	T(LES(si, off_6b860));	// 38553                  les     si, off_6B860 ;~ 0F9F:100A
cs=0xf9f;eip=0x00100e; 	T(MOV(bl, *(raddr(es,si+0x0A))));	// 38554                  mov     bl, es:[si+0Ah] ;~ 0F9F:100E
cs=0xf9f;eip=0x001012; 	T(SUB(bh, bh));	// 38555                  sub     bh, bh ;~ 0F9F:1012
cs=0xf9f;eip=0x001014; 	T(MOV(bl, *(raddr(es,bx+si+0x2A1E))));	// 38556                  mov     bl, es:[bx+si+2A1Eh] ;~ 0F9F:1014
cs=0xf9f;eip=0x001019; 	T(SUB(bh, bh));	// 38557                  sub     bh, bh ;~ 0F9F:1019
cs=0xf9f;eip=0x00101b; 	T(XCHG(bx, si));	// 38558                  xchg    bx, si ;~ 0F9F:101B
cs=0xf9f;eip=0x00101d; 	T(MOV(al, *(raddr(es,bx+si+0x309E))));	// 38559                  mov     al, es:[bx+si+309Eh] ;~ 0F9F:101D
cs=0xf9f;eip=0x001022; 	T(SUB(ah, ah));	// 38560                  sub     ah, ah ;~ 0F9F:1022
cs=0xf9f;eip=0x001024; 	J(CALL(sub_1f03e,0));	// 38561                  call    sub_1F03E ;~ 0F9F:1024
cs=0xf9f;eip=0x001027; 	T(OR(ax, ax));	// 38562                  or      ax, ax ;~ 0F9F:1027
cs=0xf9f;eip=0x001029; 	J(JZ(loc_1efff));	// 38563                  jz      short loc_1EFFF ;~ 0F9F:1029
loc_1effb:
	// 6642 
cs=0xf9f;eip=0x00102b; 	T(SUB(ax, ax));	// 38566                  sub     ax, ax ;~ 0F9F:102B
cs=0xf9f;eip=0x00102d; 	J(JMP(loc_1f039));	// 38567                  jmp     short loc_1F039 ;~ 0F9F:102D
loc_1efff:
	// 6643 
cs=0xf9f;eip=0x00102f; 	T(LES(bx, off_6b860));	// 38571                  les     bx, off_6B860 ;~ 0F9F:102F
cs=0xf9f;eip=0x001033; 	T(CMP(di, 2));	// 38572                  cmp     di, 2 ;~ 0F9F:1033
cs=0xf9f;eip=0x001036; 	J(JNZ(loc_1f020));	// 38573                  jnz     short loc_1F020 ;~ 0F9F:1036
cs=0xf9f;eip=0x001038; 	T(SHL(si, 1));	// 38574                  shl     si, 1 ;~ 0F9F:1038
cs=0xf9f;eip=0x00103a; 	T(SHL(si, 1));	// 38575                  shl     si, 1 ;~ 0F9F:103A
cs=0xf9f;eip=0x00103c; 	T(MOV(al, *(raddr(es,bx+0x0A))));	// 38576                  mov     al, es:[bx+0Ah] ;~ 0F9F:103C
cs=0xf9f;eip=0x001040; 	T(AND(ax, 3));	// 38577                  and     ax, 3 ;~ 0F9F:1040
cs=0xf9f;eip=0x001043; 	T(OR(si, ax));	// 38578                  or      si, ax ;~ 0F9F:1043
cs=0xf9f;eip=0x001045; 	T(ax = di;);	// 38579                  mov     ax, di ;~ 0F9F:1045
loc_1f017:
	// 6644 
cs=0xf9f;eip=0x001047; 	J(CALL(sub_1f03e,0));	// 38582                  call    sub_1F03E ;~ 0F9F:1047
cs=0xf9f;eip=0x00104a; 	T(OR(ax, ax));	// 38583                  or      ax, ax ;~ 0F9F:104A
cs=0xf9f;eip=0x00104c; 	J(JZ(loc_1f037));	// 38584                  jz      short loc_1F037 ;~ 0F9F:104C
cs=0xf9f;eip=0x00104e; 	J(JMP(loc_1effb));	// 38585                  jmp     short loc_1EFFB ;~ 0F9F:104E
loc_1f020:
	// 6645 
cs=0xf9f;eip=0x001050; 	T(MOV(cl, *(raddr(es,bx+6))));	// 38589                  mov     cl, es:[bx+6] ;~ 0F9F:1050
cs=0xf9f;eip=0x001054; 	T(SHL(si, cl));	// 38590                  shl     si, cl ;~ 0F9F:1054
cs=0xf9f;eip=0x001056; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 38591                  mov     ax, es:[bx+8] ;~ 0F9F:1056
cs=0xf9f;eip=0x00105a; 	T(AND(ax, *(dw*)(raddr(es,bx+0x0A))));	// 38592                  and     ax, es:[bx+0Ah] ;~ 0F9F:105A
cs=0xf9f;eip=0x00105e; 	T(OR(si, ax));	// 38593                  or      si, ax ;~ 0F9F:105E
cs=0xf9f;eip=0x001060; 	T(al = cl;);	// 38594                  mov     al, cl ;~ 0F9F:1060
cs=0xf9f;eip=0x001062; 	T(XOR(ch, ch));	// 38595                  xor     ch, ch ;~ 0F9F:1062
cs=0xf9f;eip=0x001064; 	J(JMP(loc_1f017));	// 38596                  jmp     short loc_1F017 ;~ 0F9F:1064
loc_1f037:
	// 6646 
cs=0xf9f;eip=0x001067; 	T(XCHG(ax, si));	// 38602                  xchg    ax, si ;~ 0F9F:1067
cs=0xf9f;eip=0x001068; 	T(INC(ax));	// 38603                  inc     ax ;~ 0F9F:1068
loc_1f039:
	// 6647 
cs=0xf9f;eip=0x001069; 	X(POP(si));	// 38606                  pop     si ;~ 0F9F:1069
cs=0xf9f;eip=0x00106a; 	X(POP(di));	// 38607                  pop     di ;~ 0F9F:106A
cs=0xf9f;eip=0x00106b; 	J(RETN(0));	// 38608                  retn ;~ 0F9F:106B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1effb: 	goto loc_1effb;
        case m2c::kloc_1efff: 	goto loc_1efff;
        case m2c::kloc_1f017: 	goto loc_1f017;
        case m2c::kloc_1f020: 	goto loc_1f020;
        case m2c::kloc_1f037: 	goto loc_1f037;
        case m2c::kloc_1f039: 	goto loc_1f039;
        case m2c::ksub_1efd6: 	goto sub_1efd6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1f03e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1f03e:
    _begin:
cs=0xf9f;eip=0x00106e; 	T(XCHG(ax, cx));	// 38620                  xchg    ax, cx ;~ 0F9F:106E
cs=0xf9f;eip=0x00106f; 	T(LES(bx, off_6b860));	// 38621                  les     bx, off_6B860 ;~ 0F9F:106F
cs=0xf9f;eip=0x001073; 	T(MOV(ch, *(raddr(es,bx+0x0C))));	// 38622                  mov     ch, es:[bx+0Ch] ;~ 0F9F:1073
cs=0xf9f;eip=0x001077; 	T(CMP(ch, cl));	// 38623                  cmp     ch, cl ;~ 0F9F:1077
cs=0xf9f;eip=0x001079; 	J(JC(loc_1f058));	// 38624                  jb      short loc_1F058 ;~ 0F9F:1079
cs=0xf9f;eip=0x00107b; 	X(SHR(*(dw*)(raddr(es,bx+0x0A)), cl));	// 38625                  shr     word ptr es:[bx+0Ah], cl ;~ 0F9F:107B
cs=0xf9f;eip=0x00107f; 	T(SUB(ch, cl));	// 38626                  sub     ch, cl ;~ 0F9F:107F
cs=0xf9f;eip=0x001081; 	X(MOV(*(raddr(es,bx+0x0C)), ch));	// 38627                  mov     es:[bx+0Ch], ch ;~ 0F9F:1081
cs=0xf9f;eip=0x001085; 	T(XOR(ax, ax));	// 38628                  xor     ax, ax ;~ 0F9F:1085
cs=0xf9f;eip=0x001087; 	J(RETN(0));	// 38629                  retn ;~ 0F9F:1087
loc_1f058:
	// 6648 
cs=0xf9f;eip=0x001088; 	X(PUSH(di));	// 38633                  push    di ;~ 0F9F:1088
cs=0xf9f;eip=0x001089; 	X(PUSH(si));	// 38634                  push    si ;~ 0F9F:1089
cs=0xf9f;eip=0x00108a; 	T(si = bx;);	// 38635                  mov     si, bx ;~ 0F9F:108A
cs=0xf9f;eip=0x00108c; 	T(XCHG(ch, cl));	// 38636                  xchg    ch, cl ;~ 0F9F:108C
cs=0xf9f;eip=0x00108e; 	X(SHR(*(dw*)(raddr(es,si+0x0A)), cl));	// 38637                  shr     word ptr es:[si+0Ah], cl ;~ 0F9F:108E
cs=0xf9f;eip=0x001092; 	T(MOV(di, *(dw*)(raddr(es,si+0x0E))));	// 38638                  mov     di, es:[si+0Eh] ;~ 0F9F:1092
cs=0xf9f;eip=0x001096; 	T(CMP(*(dw*)(raddr(es,si+0x10)), di));	// 38639                  cmp     es:[si+10h], di ;~ 0F9F:1096
cs=0xf9f;eip=0x00109a; 	J(JA(loc_1f098));	// 38640                  ja      short loc_1F098 ;~ 0F9F:109A
cs=0xf9f;eip=0x00109c; 	X(MOV(*(dw*)(raddr(es,si+0x0E)), 0x800));	// 38641                  mov     word ptr es:[si+0Eh], 800h ;~ 0F9F:109C
cs=0xf9f;eip=0x0010a2; 	X(PUSH(cx));	// 38642                  push    cx ;~ 0F9F:10A2
cs=0xf9f;eip=0x0010a3; 	X(PUSH(si));	// 38643                  push    si ;~ 0F9F:10A3
cs=0xf9f;eip=0x0010a4; 	X(PUSH(di));	// 38644                  push    di ;~ 0F9F:10A4
cs=0xf9f;eip=0x0010a5; 	T(ax = si+0x221E);	// 38645                  lea     ax, [si+221Eh] ;~ 0F9F:10A5
cs=0xf9f;eip=0x0010a9; 	X(PUSH(es));	// 38646                  push    es ;~ 0F9F:10A9
cs=0xf9f;eip=0x0010aa; 	X(PUSH(ax));	// 38647                  push    ax ;~ 0F9F:10AA
cs=0xf9f;eip=0x0010ab; 	T(ax = si+0x0E);	// 38648                  lea     ax, [si+0Eh] ;~ 0F9F:10AB
cs=0xf9f;eip=0x0010ae; 	X(PUSH(es));	// 38649                  push    es ;~ 0F9F:10AE
cs=0xf9f;eip=0x0010af; 	X(PUSH(ax));	// 38650                  push    ax ;~ 0F9F:10AF
cs=0xf9f;eip=0x0010b0; 	J(CALLF(__dispatch_call,*(dd*)(raddr(es,si+0x12))));	// 38651                  call    dword ptr es:[si+12h] ;~ 0F9F:10B0
cs=0xf9f;eip=0x0010b4; 	X(POP(di));	// 38652                  pop     di ;~ 0F9F:10B4
cs=0xf9f;eip=0x0010b5; 	X(POP(si));	// 38653                  pop     si ;~ 0F9F:10B5
cs=0xf9f;eip=0x0010b6; 	X(POP(cx));	// 38654                  pop     cx ;~ 0F9F:10B6
cs=0xf9f;eip=0x0010b7; 	T(es = *(dw*)(((db*)&off_6b860)+2););	// 38655                  mov     es, word ptr off_6B860+2 ;~ 0F9F:10B7
cs=0xf9f;eip=0x0010bb; 	X(MOV(*(dw*)(raddr(es,si+0x10)), ax));	// 38656                  mov     es:[si+10h], ax ;~ 0F9F:10BB
cs=0xf9f;eip=0x0010bf; 	T(TEST(ax, ax));	// 38657                  test    ax, ax ;~ 0F9F:10BF
cs=0xf9f;eip=0x0010c1; 	T(ax = 1;);	// 38658                  mov     ax, 1 ;~ 0F9F:10C1
cs=0xf9f;eip=0x0010c4; 	J(JZ(loc_1f0bd));	// 38659                  jz      short loc_1F0BD ;~ 0F9F:10C4
cs=0xf9f;eip=0x0010c6; 	T(XOR(di, di));	// 38660                  xor     di, di ;~ 0F9F:10C6
loc_1f098:
	// 6649 
cs=0xf9f;eip=0x0010c8; 	T(bx = di;);	// 38663                  mov     bx, di ;~ 0F9F:10C8
cs=0xf9f;eip=0x0010ca; 	T(MOV(ah, *(raddr(es,bx+si+0x221E))));	// 38664                  mov     ah, es:[bx+si+221Eh] ;~ 0F9F:10CA
cs=0xf9f;eip=0x0010cf; 	T(SUB(al, al));	// 38665                  sub     al, al ;~ 0F9F:10CF
cs=0xf9f;eip=0x0010d1; 	X(OR(*(dw*)(raddr(es,si+0x0A)), ax));	// 38666                  or      es:[si+0Ah], ax ;~ 0F9F:10D1
cs=0xf9f;eip=0x0010d5; 	T(INC(di));	// 38667                  inc     di ;~ 0F9F:10D5
cs=0xf9f;eip=0x0010d6; 	T(SUB(ch, cl));	// 38668                  sub     ch, cl ;~ 0F9F:10D6
cs=0xf9f;eip=0x0010d8; 	T(cl = ch;);	// 38669                  mov     cl, ch ;~ 0F9F:10D8
cs=0xf9f;eip=0x0010da; 	X(SHR(*(dw*)(raddr(es,si+0x0A)), cl));	// 38670                  shr     word ptr es:[si+0Ah], cl ;~ 0F9F:10DA
cs=0xf9f;eip=0x0010de; 	T(SUB(cl, 8));	// 38671                  sub     cl, 8 ;~ 0F9F:10DE
cs=0xf9f;eip=0x0010e1; 	T(NEG(cl));	// 38672                  neg     cl ;~ 0F9F:10E1
cs=0xf9f;eip=0x0010e3; 	X(MOV(*(raddr(es,si+0x0C)), cl));	// 38673                  mov     es:[si+0Ch], cl ;~ 0F9F:10E3
cs=0xf9f;eip=0x0010e7; 	T(SUB(ax, ax));	// 38674                  sub     ax, ax ;~ 0F9F:10E7
cs=0xf9f;eip=0x0010e9; 	X(MOV(*(dw*)(raddr(es,si+0x0E)), di));	// 38675                  mov     es:[si+0Eh], di ;~ 0F9F:10E9
loc_1f0bd:
	// 6650 
cs=0xf9f;eip=0x0010ed; 	X(POP(si));	// 38678                  pop     si ;~ 0F9F:10ED
cs=0xf9f;eip=0x0010ee; 	X(POP(di));	// 38679                  pop     di ;~ 0F9F:10EE
cs=0xf9f;eip=0x0010ef; 	J(RETN(0));	// 38680                  retn ;~ 0F9F:10EF

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1f058: 	goto loc_1f058;
        case m2c::kloc_1f098: 	goto loc_1f098;
        case m2c::kloc_1f0bd: 	goto loc_1f0bd;
        case m2c::ksub_1f03e: 	goto sub_1f03e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1f0c1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1f0c1:
    _begin:
cs=0xf9f;eip=0x0010f1; 	X(PUSH(bp));	// 38691                  push    bp ;~ 0F9F:10F1
cs=0xf9f;eip=0x0010f2; 	X(PUSH(di));	// 38692                  push    di ;~ 0F9F:10F2
cs=0xf9f;eip=0x0010f3; 	X(PUSH(si));	// 38693                  push    si ;~ 0F9F:10F3
cs=0xf9f;eip=0x0010f4; 	T(es = *(dw*)(((db*)&off_6b860)+2););	// 38694                  mov     es, word ptr off_6B860+2 ;~ 0F9F:10F4
cs=0xf9f;eip=0x0010f8; 	T(si = cx;);	// 38695                  mov     si, cx ;~ 0F9F:10F8
cs=0xf9f;eip=0x0010fa; 	T(di = dx;);	// 38696                  mov     di, dx ;~ 0F9F:10FA
cs=0xf9f;eip=0x0010fc; 	T(dx = bx;);	// 38697                  mov     dx, bx ;~ 0F9F:10FC
cs=0xf9f;eip=0x0010fe; 	T(bx = ax;);	// 38698                  mov     bx, ax ;~ 0F9F:10FE
cs=0xf9f;eip=0x001100; 	T(DEC(bx));	// 38699                  dec     bx ;~ 0F9F:1100
loc_1f0d1:
	// 6651 
cs=0xf9f;eip=0x001101; 	T(ADD(bx, dx));	// 38702                  add     bx, dx ;~ 0F9F:1101
cs=0xf9f;eip=0x001103; 	T(MOV(cl, *(raddr(es,bx))));	// 38703                  mov     cl, es:[bx] ;~ 0F9F:1103
cs=0xf9f;eip=0x001106; 	T(SUB(bx, dx));	// 38704                  sub     bx, dx ;~ 0F9F:1106
cs=0xf9f;eip=0x001108; 	T(ax = 1;);	// 38705                  mov     ax, 1 ;~ 0F9F:1108
cs=0xf9f;eip=0x00110b; 	T(SHL(ax, cl));	// 38706                  shl     ax, cl ;~ 0F9F:110B
cs=0xf9f;eip=0x00110d; 	T(MOV(bp, *(dw*)(raddr(cs,bx+si))));	// 38707                  mov     bp, cs:[bx+si] ;~ 0F9F:110D
cs=0xf9f;eip=0x001110; 	T(AND(bp, 0x0FF));	// 38708                  and     bp, 0FFh ;~ 0F9F:1110
loc_1f0e4:
	// 6652 
cs=0xf9f;eip=0x001114; 	X(MOV(*(raddr(es,bp+di)), bl));	// 38711                  mov     es:[bp+di], bl ;~ 0F9F:1114
cs=0xf9f;eip=0x001117; 	T(ADD(bp, ax));	// 38712                  add     bp, ax ;~ 0F9F:1117
cs=0xf9f;eip=0x001119; 	T(CMP(bp, 0x0FF));	// 38713                  cmp     bp, 0FFh ;~ 0F9F:1119
cs=0xf9f;eip=0x00111d; 	J(JBE(loc_1f0e4));	// 38714                  jbe     short loc_1F0E4 ;~ 0F9F:111D
cs=0xf9f;eip=0x00111f; 	T(DEC(bx));	// 38715                  dec     bx ;~ 0F9F:111F
cs=0xf9f;eip=0x001120; 	J(JGE(loc_1f0d1));	// 38716                  jge     short loc_1F0D1 ;~ 0F9F:1120
cs=0xf9f;eip=0x001122; 	X(POP(si));	// 38717                  pop     si ;~ 0F9F:1122
cs=0xf9f;eip=0x001123; 	X(POP(di));	// 38718                  pop     di ;~ 0F9F:1123
cs=0xf9f;eip=0x001124; 	X(POP(bp));	// 38719                  pop     bp ;~ 0F9F:1124
cs=0xf9f;eip=0x001125; 	J(RETN(0));	// 38720                  retn ;~ 0F9F:1125

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1f0d1: 	goto loc_1f0d1;
        case m2c::kloc_1f0e4: 	goto loc_1f0e4;
        case m2c::ksub_1f0c1: 	goto sub_1f0c1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1f0f7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1f0f7:
    _begin:
cs=0xf9f;eip=0x001127; 	X(PUSH(bp));	// 38730                  push    bp ;~ 0F9F:1127
cs=0xf9f;eip=0x001128; 	X(PUSH(di));	// 38731                  push    di ;~ 0F9F:1128
cs=0xf9f;eip=0x001129; 	X(PUSH(si));	// 38732                  push    si ;~ 0F9F:1129
cs=0xf9f;eip=0x00112a; 	X(PUSH(ds));	// 38733                  push    ds ;~ 0F9F:112A
cs=0xf9f;eip=0x00112b; 	T(LDS(si, off_6b860));	// 38734                  lds     si, off_6B860 ;~ 0F9F:112B
cs=0xf9f;eip=0x00112f; 	T(dx = 0x0FF;);	// 38736                  mov     dx, 0FFh ;~ 0F9F:112F
cs=0xf9f;eip=0x001132; 	T(bx = dx;);	// 38737                  mov     bx, dx ;~ 0F9F:1132
loc_1f104:
	// 6653 
cs=0xf9f;eip=0x001134; 	T(SHL(bx, 1));	// 38740                  shl     bx, 1 ;~ 0F9F:1134
cs=0xf9f;eip=0x001136; 	T(MOV(di, *(dw*)(raddr(cs,bx+0x25A))));	// 38741                  mov     di, cs:[bx+25Ah] ;~ 0F9F:1136
cs=0xf9f;eip=0x00113b; 	T(SHR(bx, 1));	// 38742                  shr     bx, 1 ;~ 0F9F:113B
cs=0xf9f;eip=0x00113d; 	T(XOR(cl, cl));	// 38743                  xor     cl, cl ;~ 0F9F:113D
cs=0xf9f;eip=0x00113f; 	T(bp = 0x2C1E;);	// 38744                  mov     bp, 2C1Eh ;~ 0F9F:113F
cs=0xf9f;eip=0x001142; 	T(MOV(al, *(raddr(ds,bx+si+0x2F9E))));	// 38745                  mov     al, [bx+si+2F9Eh] ;~ 0F9F:1142
cs=0xf9f;eip=0x001146; 	T(CMP(al, 8));	// 38746                  cmp     al, 8 ;~ 0F9F:1146
cs=0xf9f;eip=0x001148; 	J(JBE(loc_1f142));	// 38747                  jbe     short loc_1F142 ;~ 0F9F:1148
cs=0xf9f;eip=0x00114a; 	T(TEST(di, dx));	// 38748                  test    di, dx ;~ 0F9F:114A
cs=0xf9f;eip=0x00114c; 	J(JZ(loc_1f13d));	// 38749                  jz      short loc_1F13D ;~ 0F9F:114C
cs=0xf9f;eip=0x00114e; 	T(bp = di;);	// 38750                  mov     bp, di ;~ 0F9F:114E
cs=0xf9f;eip=0x001150; 	T(AND(bp, dx));	// 38751                  and     bp, dx ;~ 0F9F:1150
cs=0xf9f;eip=0x001152; 	X(MOV(*(raddr(ds,bp+si+0x2C1E)), dl));	// 38752                  mov     ds:[bp+si+2C1Eh], dl ;~ 0F9F:1152
cs=0xf9f;eip=0x001157; 	T(cl = 4;);	// 38753                  mov     cl, 4 ;~ 0F9F:1157
cs=0xf9f;eip=0x001159; 	T(bp = 0x2D1E;);	// 38754                  mov     bp, 2D1Eh ;~ 0F9F:1159
cs=0xf9f;eip=0x00115c; 	T(TEST(di, 0x3F));	// 38755                  test    di, 3Fh ;~ 0F9F:115C
cs=0xf9f;eip=0x001160; 	J(JNZ(loc_1f142));	// 38756                  jnz     short loc_1F142 ;~ 0F9F:1160
cs=0xf9f;eip=0x001162; 	T(cl = 6;);	// 38757                  mov     cl, 6 ;~ 0F9F:1162
cs=0xf9f;eip=0x001164; 	T(bp = 0x2E1E;);	// 38758                  mov     bp, 2E1Eh ;~ 0F9F:1164
cs=0xf9f;eip=0x001167; 	T(dx = 0x7F;);	// 38759                  mov     dx, 7Fh ;~ 0F9F:1167
cs=0xf9f;eip=0x00116a; 	J(JMP(loc_1f142));	// 38760                  jmp     short loc_1F142 ;~ 0F9F:116A
loc_1f13d:
	// 6654 
cs=0xf9f;eip=0x00116d; 	T(cl = 8;);	// 38766                  mov     cl, 8 ;~ 0F9F:116D
cs=0xf9f;eip=0x00116f; 	T(bp = 0x2E9E;);	// 38767                  mov     bp, 2E9Eh ;~ 0F9F:116F
loc_1f142:
	// 6655 
cs=0xf9f;eip=0x001172; 	T(SHR(di, cl));	// 38771                  shr     di, cl ;~ 0F9F:1172
cs=0xf9f;eip=0x001174; 	T(SUB(al, cl));	// 38772                  sub     al, cl ;~ 0F9F:1174
cs=0xf9f;eip=0x001176; 	X(MOV(*(raddr(ds,bx+si+0x2F9E)), al));	// 38773                  mov     [bx+si+2F9Eh], al ;~ 0F9F:1176
cs=0xf9f;eip=0x00117a; 	T(XCHG(ax, cx));	// 38774                  xchg    ax, cx ;~ 0F9F:117A
cs=0xf9f;eip=0x00117b; 	T(ax = 1;);	// 38775                  mov     ax, 1 ;~ 0F9F:117B
cs=0xf9f;eip=0x00117e; 	T(SHL(ax, cl));	// 38776                  shl     ax, cl ;~ 0F9F:117E
cs=0xf9f;eip=0x001180; 	T(ADD(bp, si));	// 38777                  add     bp, si ;~ 0F9F:1180
loc_1f152:
	// 6656 
cs=0xf9f;eip=0x001182; 	X(MOV(*(raddr(ds,bp+di)), bl));	// 38780                  mov     ds:[bp+di], bl ;~ 0F9F:1182
cs=0xf9f;eip=0x001185; 	T(ADD(di, ax));	// 38781                  add     di, ax ;~ 0F9F:1185
cs=0xf9f;eip=0x001187; 	T(CMP(di, dx));	// 38782                  cmp     di, dx ;~ 0F9F:1187
cs=0xf9f;eip=0x001189; 	J(JBE(loc_1f152));	// 38783                  jbe     short loc_1F152 ;~ 0F9F:1189
cs=0xf9f;eip=0x00118b; 	T(dx = 0x0FF;);	// 38784                  mov     dx, 0FFh ;~ 0F9F:118B
cs=0xf9f;eip=0x00118e; 	T(DEC(bx));	// 38785                  dec     bx ;~ 0F9F:118E
cs=0xf9f;eip=0x00118f; 	J(JGE(loc_1f104));	// 38786                  jge     short loc_1F104 ;~ 0F9F:118F
cs=0xf9f;eip=0x001191; 	X(POP(ds));	// 38787                  pop     ds ;~ 0F9F:1191
cs=0xf9f;eip=0x001192; 	X(POP(si));	// 38788                  pop     si ;~ 0F9F:1192
cs=0xf9f;eip=0x001193; 	X(POP(di));	// 38789                  pop     di ;~ 0F9F:1193
cs=0xf9f;eip=0x001194; 	X(POP(bp));	// 38790                  pop     bp ;~ 0F9F:1194
cs=0xf9f;eip=0x001195; 	J(RETN(0));	// 38791                  retn ;~ 0F9F:1195

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1f104: 	goto loc_1f104;
        case m2c::kloc_1f13d: 	goto loc_1f13d;
        case m2c::kloc_1f142: 	goto loc_1f142;
        case m2c::kloc_1f152: 	goto loc_1f152;
        case m2c::ksub_1f0f7: 	goto sub_1f0f7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

