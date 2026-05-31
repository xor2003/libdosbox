/* THIS IS GENERATED FILE */

        
#include "f.exe.h"

                

 bool seg004_1a3_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg004_1a3_proc:
    _begin:
cs=0x75b;eip=0x0001a3; 	X(PUSH(bp));	// 16845                  push    bp ;~ 075B:01A3
cs=0x75b;eip=0x0001a4; 	T(bp = sp;);	// 16846                  mov     bp, sp ;~ 075B:01A4
cs=0x75b;eip=0x0001a6; 	X(PUSH(di));	// 16847                  push    di ;~ 075B:01A6
cs=0x75b;eip=0x0001a7; 	X(PUSH(ds));	// 16848                  push    ds ;~ 075B:01A7
cs=0x75b;eip=0x0001a8; 	T(ax = seg_offset(seg003););	// 16849                  mov     ax, seg seg003 ;~ 075B:01A8
cs=0x75b;eip=0x0001ab; 	T(ds = ax;);	// 16850                  mov     ds, ax ;~ 075B:01AB
cs=0x75b;eip=0x0001ad; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 16852                  mov     di, [bp+8] ;~ 075B:01AD
cs=0x75b;eip=0x0001b0; 	T(SHL(di, 1));	// 16853                  shl     di, 1 ;~ 075B:01B0
cs=0x75b;eip=0x0001b2; 	T(MOV(bx, *(dw*)(raddr(ds,di+0x0E2))));	// 16854                  mov     bx, [di+0E2h] ;~ 075B:01B2
cs=0x75b;eip=0x0001b6; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 16855                  mov     di, [bp+6] ;~ 075B:01B6
cs=0x75b;eip=0x0001b9; 	T(CMP(di, 0x80));	// 16856                  cmp     di, 80h ;~ 075B:01B9
cs=0x75b;eip=0x0001bd; 	J(JC(loc_15d55));	// 16857                  jb      short loc_15D55 ;~ 075B:01BD
cs=0x75b;eip=0x0001bf; 	T(ax = 0;);	// 16858                  mov     ax, 0 ;~ 075B:01BF
cs=0x75b;eip=0x0001c2; 	J(JMP(loc_15d59));	// 16859                  jmp     short loc_15D59 ;~ 075B:01C2
loc_15d55:
	// 4674 
cs=0x75b;eip=0x0001c5; 	T(MOV(al, *(raddr(ds,bx+di))));	// 16865                  mov     al, [bx+di] ;~ 075B:01C5
cs=0x75b;eip=0x0001c7; 	T(SUB(ah, ah));	// 16866                  sub     ah, ah ;~ 075B:01C7
loc_15d59:
	// 4675 
cs=0x75b;eip=0x0001c9; 	X(POP(ds));	// 16869                  pop     ds ;~ 075B:01C9
cs=0x75b;eip=0x0001ca; 	X(POP(di));	// 16871                  pop     di ;~ 075B:01CA
cs=0x75b;eip=0x0001cb; 	T(sp = bp;);	// 16872                  mov     sp, bp ;~ 075B:01CB
cs=0x75b;eip=0x0001cd; 	X(POP(bp));	// 16873                  pop     bp ;~ 075B:01CD
cs=0x75b;eip=0x0001ce; 	J(RETF(0));	// 16874                  retf ;~ 075B:01CE
ret_75b_1cf:
	// 4676 
cs=0x75b;eip=0x0001cf; 	J(RETF(0));	// 16876                  retf ;~ 075B:01CF
ret_75b_1d0:
	// 4677 
cs=0x75b;eip=0x0001d0; 	J(RETF(0));	// 16878                  retf ;~ 075B:01D0
ret_75b_1d1:
	// 4678 
cs=0x75b;eip=0x0001d1; 	J(RETF(0));	// 16881                  retf ;~ 075B:01D1
ret_75b_1e0:
	// 4679 
cs=0x75b;eip=0x0001e0; 	T(ax = word_15d62;);	// 16892                  mov     ax, cs:word_15D62 ;~ 075B:01E0
cs=0x75b;eip=0x0001e4; 	J(RETF(0));	// 16893                  retf ;~ 075B:01E4
ret_75b_1e5:
	// 4680 
cs=0x75b;eip=0x0001e5; 	J(RETF(0));	// 16895                  retf ;~ 075B:01E5
ret_75b_1e6:
	// 4681 
cs=0x75b;eip=0x0001e6; 	T(ax = _unk_15d64;);	// 16897                  mov     ax, cs:_unk_15D64 ;~ 075B:01E6
cs=0x75b;eip=0x0001ea; 	J(RETF(0));	// 16898                  retf ;~ 075B:01EA
ret_75b_1eb:
	// 4682 
cs=0x75b;eip=0x0001eb; 	T(ax = word_15d66;);	// 16900                  mov     ax, cs:word_15D66 ;~ 075B:01EB
cs=0x75b;eip=0x0001ef; 	J(RETF(0));	// 16901                  retf ;~ 075B:01EF
ret_75b_1f0:
	// 4683 
cs=0x75b;eip=0x0001f0; 	T(ax = word_15d68;);	// 16903                  mov     ax, cs:word_15D68 ;~ 075B:01F0
cs=0x75b;eip=0x0001f4; 	J(RETF(0));	// 16904                  retf ;~ 075B:01F4
ret_75b_1f5:
	// 4684 
cs=0x75b;eip=0x0001f5; 	T(ax = word_15d6a;);	// 16907                  mov     ax, cs:word_15D6A ;~ 075B:01F5
cs=0x75b;eip=0x0001f9; 	J(RETF(0));	// 16908                  retf ;~ 075B:01F9
ret_75b_1fa:
	// 4685 
cs=0x75b;eip=0x0001fa; 	T(ax = word_15d6c;);	// 16910                  mov     ax, cs:word_15D6C ;~ 075B:01FA
cs=0x75b;eip=0x0001fe; 	J(RETF(0));	// 16911                  retf ;~ 075B:01FE
ret_75b_1ff:
	// 4686 
cs=0x75b;eip=0x0001ff; 	T(ax = word_15d6e;);	// 16913                  mov     ax, cs:word_15D6E ;~ 075B:01FF
cs=0x75b;eip=0x000203; 	J(RETF(0));	// 16914                  retf ;~ 075B:0203
ret_75b_204:
	// 4687 
cs=0x75b;eip=0x000204; 	T(ah = 0x48;);	// 16916                  mov     ah, 48h ; 'H' ;~ 075B:0204
cs=0x75b;eip=0x000206; 	T(bx = 0x0FFFF;);	// 16917                  mov     bx, 0FFFFh ;~ 075B:0206
cs=0x75b;eip=0x000209; 	S(_INT(0x21));	// 16918                  int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 075B:0209
cs=0x75b;eip=0x00020b; 	T(CMP(ax, 8));	// 16920                  cmp     ax, 8 ;~ 075B:020B
cs=0x75b;eip=0x00020e; 	J(JNZ(loc_15da3));	// 16921                  jnz     short loc_15DA3 ;~ 075B:020E
cs=0x75b;eip=0x000210; 	T(ax = bx;);	// 16922                  mov     ax, bx ;~ 075B:0210
cs=0x75b;eip=0x000212; 	J(RETF(0));	// 16923                  retf ;~ 075B:0212
loc_15da3:
	// 4688 
cs=0x75b;eip=0x000213; 	T(XOR(ax, ax));	// 16927                  xor     ax, ax ;~ 075B:0213
cs=0x75b;eip=0x000215; 	J(RETF(0));	// 16928                  retf ;~ 075B:0215
ret_75b_216:
	// 4689 
cs=0x75b;eip=0x000216; 	T(ax = 0x13;);	// 16930                  mov     ax, 13h ;~ 075B:0216
cs=0x75b;eip=0x000219; 	S(_INT(0x10));	// 16931                  int     10h             ; - VIDEO - SET VIDEO MODE ;~ 075B:0219
cs=0x75b;eip=0x00021b; 	T(ah = 0x0F;);	// 16933                  mov     ah, 0Fh ;~ 075B:021B
cs=0x75b;eip=0x00021d; 	S(_INT(0x10));	// 16934                  int     10h             ; - VIDEO - GET CURRENT VIDEO MODE ;~ 075B:021D
cs=0x75b;eip=0x00021f; 	T(CMP(al, 0x13));	// 16938                  cmp     al, 13h ;~ 075B:021F
cs=0x75b;eip=0x000221; 	J(JNZ(loc_15db4));	// 16939                  jnz     short loc_15DB4 ;~ 075B:0221
cs=0x75b;eip=0x000223; 	J(RETF(0));	// 16940                  retf ;~ 075B:0223
loc_15db4:
	// 4690 
cs=0x75b;eip=0x000224; 	T(dx = 0x1B48;);	// 16944                  mov     dx, 1B48h ;~ 075B:0224
cs=0x75b;eip=0x000227; 	J(return _group4(m2c::kloc_15e13, _state););	// 16945                  jmp     short loc_15E13 ;~ 075B:0227
ret_75b_22a:
	// 4691 
cs=0x75b;eip=0x00022a; 	T(dx = 0x3DA;);	// 16949                  mov     dx, 3DAh ;~ 075B:022A
loc_15dbd:
	// 4692 
cs=0x75b;eip=0x00022d; 	S(IN(al, dx));	// 16952                  in      al, dx          ; Video status bits: ;~ 075B:022D
cs=0x75b;eip=0x00022e; 	T(TEST(al, 8));	// 16957                  test    al, 8 ;~ 075B:022E
cs=0x75b;eip=0x000230; 	J(JZ(loc_15dbd));	// 16958                  jz      short loc_15DBD ;~ 075B:0230
cs=0x75b;eip=0x000232; 	T(dx = 0x3D8;);	// 16959                  mov     dx, 3D8h ;~ 075B:0232
cs=0x75b;eip=0x000235; 	T(al = 2;);	// 16960                  mov     al, 2 ;~ 075B:0235
cs=0x75b;eip=0x000237; 	S(OUT(dx, al));	// 16961                  out     dx, al ;~ 075B:0237
cs=0x75b;eip=0x000238; 	T(dx = 0x3C4;);	// 16962                  mov     dx, 3C4h ;~ 075B:0238
cs=0x75b;eip=0x00023b; 	T(al = 1;);	// 16963                  mov     al, 1 ;~ 075B:023B
cs=0x75b;eip=0x00023d; 	S(OUT(dx, al));	// 16964                  out     dx, al          ; EGA: sequencer address reg ;~ 075B:023D
cs=0x75b;eip=0x00023e; 	T(INC(dx));	// 16970                  inc     dx ;~ 075B:023E
cs=0x75b;eip=0x00023f; 	S(IN(al, dx));	// 16971                  in      al, dx          ; EGA port: sequencer data register ;~ 075B:023F
cs=0x75b;eip=0x000240; 	T(OR(al, 0x20));	// 16972                  or      al, 20h ;~ 075B:0240
cs=0x75b;eip=0x000242; 	S(OUT(dx, al));	// 16973                  out     dx, al          ; EGA port: sequencer data register ;~ 075B:0242
cs=0x75b;eip=0x000243; 	J(RETF(0));	// 16974                  retf ;~ 075B:0243

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15d55: 	goto loc_15d55;
        case m2c::kloc_15d59: 	goto loc_15d59;
        case m2c::kloc_15da3: 	goto loc_15da3;
        case m2c::kloc_15db4: 	goto loc_15db4;
        case m2c::kloc_15dbd: 	goto loc_15dbd;
        case m2c::kret_75b_1cf: 	goto ret_75b_1cf;
        case m2c::kret_75b_1d0: 	goto ret_75b_1d0;
        case m2c::kret_75b_1d1: 	goto ret_75b_1d1;
        case m2c::kret_75b_1e0: 	goto ret_75b_1e0;
        case m2c::kret_75b_1e5: 	goto ret_75b_1e5;
        case m2c::kret_75b_1e6: 	goto ret_75b_1e6;
        case m2c::kret_75b_1eb: 	goto ret_75b_1eb;
        case m2c::kret_75b_1f0: 	goto ret_75b_1f0;
        case m2c::kret_75b_1f5: 	goto ret_75b_1f5;
        case m2c::kret_75b_1fa: 	goto ret_75b_1fa;
        case m2c::kret_75b_1ff: 	goto ret_75b_1ff;
        case m2c::kret_75b_204: 	goto ret_75b_204;
        case m2c::kret_75b_216: 	goto ret_75b_216;
        case m2c::kret_75b_22a: 	goto ret_75b_22a;
        case m2c::kseg004_1a3_proc: 	goto seg004_1a3_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_15dd4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_15dd4:
    _begin:
cs=0x75b;eip=0x000244; 	T(dx = 0x3DA;);	// 16980                  mov     dx, 3DAh ;~ 075B:0244
loc_15dd7:
	// 4693 
cs=0x75b;eip=0x000247; 	S(IN(al, dx));	// 16983                  in      al, dx          ; Video status bits: ;~ 075B:0247
cs=0x75b;eip=0x000248; 	T(TEST(al, 8));	// 16988                  test    al, 8 ;~ 075B:0248
cs=0x75b;eip=0x00024a; 	J(JZ(loc_15dd7));	// 16989                  jz      short loc_15DD7 ;~ 075B:024A
cs=0x75b;eip=0x00024c; 	T(dx = 0x3D8;);	// 16990                  mov     dx, 3D8h ;~ 075B:024C
cs=0x75b;eip=0x00024f; 	T(al = 0x0A;);	// 16991                  mov     al, 0Ah ;~ 075B:024F
cs=0x75b;eip=0x000251; 	S(OUT(dx, al));	// 16992                  out     dx, al ;~ 075B:0251
cs=0x75b;eip=0x000252; 	T(dx = 0x3C4;);	// 16993                  mov     dx, 3C4h ;~ 075B:0252
cs=0x75b;eip=0x000255; 	T(al = 1;);	// 16994                  mov     al, 1 ;~ 075B:0255
cs=0x75b;eip=0x000257; 	S(OUT(dx, al));	// 16995                  out     dx, al          ; EGA: sequencer address reg ;~ 075B:0257
cs=0x75b;eip=0x000258; 	T(INC(dx));	// 17001                  inc     dx ;~ 075B:0258
cs=0x75b;eip=0x000259; 	S(IN(al, dx));	// 17002                  in      al, dx          ; EGA port: sequencer data register ;~ 075B:0259
cs=0x75b;eip=0x00025a; 	T(AND(al, 0x0DF));	// 17003                  and     al, 0DFh ;~ 075B:025A
cs=0x75b;eip=0x00025c; 	S(OUT(dx, al));	// 17004                  out     dx, al          ; EGA port: sequencer data register ;~ 075B:025C
cs=0x75b;eip=0x00025d; 	J(RETF(0));	// 17005                  retf ;~ 075B:025D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15dd7: 	goto loc_15dd7;
        case m2c::ksub_15dd4: 	goto sub_15dd4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group4:
    _begin:
sub_15dee:
	// 17013 
cs=0x75b;eip=0x00025e; 	T(bx = sp;);	// 17014                  mov     bx, sp ;~ 075B:025E
cs=0x75b;eip=0x000260; 	T(CMP(*(dw*)(raddr(ss,bx+4)), 0));	// 17015                  cmp     word ptr ss:[bx+4], 0 ;~ 075B:0260
cs=0x75b;eip=0x000265; 	J(JNZ(loc_15dfc));	// 17016                  jnz     short loc_15DFC ;~ 075B:0265
cs=0x75b;eip=0x000267; 	T(ax = word_16211;);	// 17017                  mov     ax, cs:word_16211 ;~ 075B:0267
cs=0x75b;eip=0x00026b; 	J(RETF(0));	// 17018                  retf ;~ 075B:026B
loc_15dfc:
	// 4694 
cs=0x75b;eip=0x00026c; 	T(ah = 0x48;);	// 17022                  mov     ah, 48h ; 'H' ;~ 075B:026C
cs=0x75b;eip=0x00026e; 	T(bx = _unk_15d64;);	// 17023                  mov     bx, cs:_unk_15D64 ;~ 075B:026E
cs=0x75b;eip=0x000273; 	T(SHR(bx, 1));	// 17024                  shr     bx, 1 ;~ 075B:0273
cs=0x75b;eip=0x000275; 	T(SHR(bx, 1));	// 17025                  shr     bx, 1 ;~ 075B:0275
cs=0x75b;eip=0x000277; 	T(SHR(bx, 1));	// 17026                  shr     bx, 1 ;~ 075B:0277
cs=0x75b;eip=0x000279; 	T(SHR(bx, 1));	// 17027                  shr     bx, 1 ;~ 075B:0279
cs=0x75b;eip=0x00027b; 	S(_INT(0x21));	// 17028                  int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 075B:027B
cs=0x75b;eip=0x00027d; 	J(JC(loc_15e10));	// 17030                  jb      short loc_15E10 ;~ 075B:027D
cs=0x75b;eip=0x00027f; 	J(RETF(0));	// 17031                  retf ;~ 075B:027F
loc_15e10:
	// 4695 
cs=0x75b;eip=0x000280; 	T(dx = 0x1B22;);	// 17035                  mov     dx, 1B22h ;~ 075B:0280
loc_15e13:
	// 4696 
cs=0x75b;eip=0x000283; 	T(ax = 3;);	// 17038                  mov     ax, 3 ;~ 075B:0283
cs=0x75b;eip=0x000286; 	S(_INT(0x10));	// 17039                  int     10h             ; - VIDEO - SET VIDEO MODE ;~ 075B:0286
cs=0x75b;eip=0x000288; 	T(ax = seg_offset(seg003););	// 17041                  mov     ax, seg seg003 ;~ 075B:0288
cs=0x75b;eip=0x00028b; 	T(ds = ax;);	// 17042                  mov     ds, ax ;~ 075B:028B
cs=0x75b;eip=0x00028d; 	T(ah = 9;);	// 17044                  mov     ah, 9 ;~ 075B:028D
cs=0x75b;eip=0x00028f; 	S(_INT(0x21));	// 17045                  int     21h             ; DOS - PRINT STRING ;~ 075B:028F
cs=0x75b;eip=0x000291; 	T(ax = 0x4C00;);	// 17047                  mov     ax, 4C00h ;~ 075B:0291
cs=0x75b;eip=0x000294; 	S(_INT(0x21));	// 17048                  int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 075B:0294
seg004_296_proc:
	// 17053 
cs=0x75b;eip=0x000296; 	T(bx = sp;);	// 17053                  mov     bx, sp ;~ 075B:0296
cs=0x75b;eip=0x000298; 	T(MOV(bx, *(dw*)(raddr(ss,bx+4))));	// 17054                  mov     bx, ss:[bx+4] ;~ 075B:0298
cs=0x75b;eip=0x00029c; 	X(PUSH(es));	// 17055                  push    es ;~ 075B:029C
cs=0x75b;eip=0x00029d; 	T(ax = seg_offset(seg003););	// 17056                  mov     ax, seg seg003 ;~ 075B:029D
cs=0x75b;eip=0x0002a0; 	T(es = ax;);	// 17057                  mov     es, ax ;~ 075B:02A0
cs=0x75b;eip=0x0002a2; 	T(SHL(bx, 1));	// 17059                  shl     bx, 1 ;~ 075B:02A2
cs=0x75b;eip=0x0002a4; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1B7B))));	// 17060                  mov     dx, es:[bx+1B7Bh] ;~ 075B:02A4
cs=0x75b;eip=0x0002a9; 	T(ax = 0x1012;);	// 17061                  mov     ax, 1012h ;~ 075B:02A9
cs=0x75b;eip=0x0002ac; 	T(bx = 0;);	// 17062                  mov     bx, 0 ;~ 075B:02AC
cs=0x75b;eip=0x0002af; 	T(cx = 0x10;);	// 17063                  mov     cx, 10h ;~ 075B:02AF
cs=0x75b;eip=0x0002b2; 	S(_INT(0x10));	// 17064                  int     10h             ; - VIDEO - SET BLOCK OF DAC REGISTERS (EGA, VGA/MCGA) ;~ 075B:02B2
cs=0x75b;eip=0x0002b4; 	X(POP(es));	// 17068                  pop     es ;~ 075B:02B4
cs=0x75b;eip=0x0002b5; 	J(CALLF(sub_15dd4,0));	// 17070                  call    sub_15DD4 ;~ 075B:02B5
cs=0x75b;eip=0x0002ba; 	J(RETF(0));	// 17071                  retf ;~ 075B:02BA
ret_75b_2bb:
	// 4697 
cs=0x75b;eip=0x0002bb; 	T(bx = sp;);	// 17073                  mov     bx, sp ;~ 075B:02BB
cs=0x75b;eip=0x0002bd; 	T(MOV(ah, *(raddr(ss,bx+4))));	// 17074                  mov     ah, ss:[bx+4] ;~ 075B:02BD
sub_15e51:
	// 17079 
cs=0x75b;eip=0x0002c1; 	X(PUSH(ds));	// 17081                  push    ds ;~ 075B:02C1
cs=0x75b;eip=0x0002c2; 	T(dx = seg_offset(seg003););	// 17082                  mov     dx, seg seg003 ;~ 075B:02C2
cs=0x75b;eip=0x0002c5; 	T(ds = dx;);	// 17083                  mov     ds, dx ;~ 075B:02C5
cs=0x75b;eip=0x0002c7; 	X(byte_15a0a = ah;);	// 17085                  mov     byte_15A0A, ah ;~ 075B:02C7
cs=0x75b;eip=0x0002cb; 	X(POP(ds));	// 17086                  pop     ds ;~ 075B:02CB
cs=0x75b;eip=0x0002cc; 	J(RETF(0));	// 17088                  retf ;~ 075B:02CC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15dfc: 	goto loc_15dfc;
        case m2c::kloc_15e10: 	goto loc_15e10;
        case m2c::kloc_15e13: 	goto loc_15e13;
        case m2c::kret_75b_2bb: 	goto ret_75b_2bb;
        case m2c::kseg004_296_proc: 	goto seg004_296_proc;
        case m2c::ksub_15dee: 	goto sub_15dee;
        case m2c::ksub_15e51: 	goto sub_15e51;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group5:
    _begin:
seg004_2cd_proc:
	// 17092 
cs=0x75b;eip=0x0002cd; 	J(RETF(0));	// 17092                  retf ;~ 075B:02CD
ret_75b_2ce:
	// 4698 
cs=0x75b;eip=0x0002ce; 	X(PUSH(ds));	// 17094                  push    ds ;~ 075B:02CE
cs=0x75b;eip=0x0002cf; 	X(PUSH(es));	// 17095                  push    es ;~ 075B:02CF
cs=0x75b;eip=0x0002d0; 	T(ax = seg_offset(seg003););	// 17096                  mov     ax, seg seg003 ;~ 075B:02D0
cs=0x75b;eip=0x0002d3; 	T(ds = ax;);	// 17097                  mov     ds, ax ;~ 075B:02D3
cs=0x75b;eip=0x0002d5; 	T(es = word_15d2e;);	// 17099                  mov     es, cs:word_15D2E ;~ 075B:02D5
loc_15e6a:
	// 4699 
cs=0x75b;eip=0x0002da; 	J(CALL(sub_15e71,0));	// 17103                  call    sub_15E71 ;~ 075B:02DA
cs=0x75b;eip=0x0002dd; 	X(STOSB);	// 17104                  stosb ;~ 075B:02DD
cs=0x75b;eip=0x0002de; 	X(POP(es));	// 17105                  pop     es ;~ 075B:02DE
cs=0x75b;eip=0x0002df; 	X(POP(ds));	// 17106                  pop     ds ;~ 075B:02DF
cs=0x75b;eip=0x0002e0; 	J(RETF(0));	// 17108                  retf ;~ 075B:02E0
seg004_2f9_proc:
	// 17127 
cs=0x75b;eip=0x0002f9; 	X(PUSH(ds));	// 17127                  push    ds ;~ 075B:02F9
cs=0x75b;eip=0x0002fa; 	X(PUSH(es));	// 17128                  push    es ;~ 075B:02FA
cs=0x75b;eip=0x0002fb; 	T(di = seg_offset(seg003););	// 17129                  mov     di, seg seg003 ;~ 075B:02FB
cs=0x75b;eip=0x0002fe; 	T(ds = di;);	// 17130                  mov     ds, di ;~ 075B:02FE
cs=0x75b;eip=0x000300; 	T(es = word_15d2e;);	// 17132                  mov     es, cs:word_15D2E ;~ 075B:0300
cs=0x75b;eip=0x000305; 	T(CMP(ax, cx));	// 17133                  cmp     ax, cx ;~ 075B:0305
cs=0x75b;eip=0x000307; 	J(JBE(loc_15e9c));	// 17134                  jbe     short loc_15E9C ;~ 075B:0307
cs=0x75b;eip=0x000309; 	T(XCHG(ax, cx));	// 17136                  xchg    ax, cx ;~ 075B:0309
cs=0x75b;eip=0x00030a; 	T(XCHG(bx, dx));	// 17137                  xchg    bx, dx ;~ 075B:030A
loc_15e9c:
	// 4700 
cs=0x75b;eip=0x00030c; 	X(word_159fe = ax;);	// 17140                  mov     word_159FE, ax ;~ 075B:030C
cs=0x75b;eip=0x00030f; 	X(word_15a00 = bx;);	// 17141                  mov     word_15A00, bx ;~ 075B:030F
cs=0x75b;eip=0x000313; 	X(word_15a02 = cx;);	// 17142                  mov     word_15A02, cx ;~ 075B:0313
cs=0x75b;eip=0x000317; 	X(word_15a04 = dx;);	// 17143                  mov     word_15A04, dx ;~ 075B:0317
cs=0x75b;eip=0x00031b; 	J(JNZ(loc_15eb1));	// 17144                  jnz     short loc_15EB1 ;~ 075B:031B
cs=0x75b;eip=0x00031d; 	T(CMP(bx, dx));	// 17145                  cmp     bx, dx ;~ 075B:031D
cs=0x75b;eip=0x00031f; 	J(JZ(loc_15e6a));	// 17146                  jz      short loc_15E6A ;~ 075B:031F
loc_15eb1:
	// 4701 
cs=0x75b;eip=0x000321; 	T(si = 1;);	// 17149                  mov     si, 1 ;~ 075B:0321
cs=0x75b;eip=0x000324; 	T(bp = 0x140;);	// 17150                  mov     bp, 140h ;~ 075B:0324
cs=0x75b;eip=0x000327; 	T(SUB(cx, ax));	// 17151                  sub     cx, ax ;~ 075B:0327
cs=0x75b;eip=0x000329; 	T(SUB(dx, bx));	// 17152                  sub     dx, bx ;~ 075B:0329
cs=0x75b;eip=0x00032b; 	J(JNS(loc_15ec1));	// 17153                  jns     short loc_15EC1 ;~ 075B:032B
cs=0x75b;eip=0x00032d; 	T(NEG(bp));	// 17154                  neg     bp ;~ 075B:032D
cs=0x75b;eip=0x00032f; 	T(NEG(dx));	// 17155                  neg     dx ;~ 075B:032F
loc_15ec1:
	// 4702 
cs=0x75b;eip=0x000331; 	T(CMP(cx, dx));	// 17158                  cmp     cx, dx ;~ 075B:0331
cs=0x75b;eip=0x000333; 	J(JNC(loc_15ec9));	// 17159                  jnb     short loc_15EC9 ;~ 075B:0333
cs=0x75b;eip=0x000335; 	T(XCHG(si, bp));	// 17160                  xchg    si, bp ;~ 075B:0335
cs=0x75b;eip=0x000337; 	T(XCHG(cx, dx));	// 17161                  xchg    cx, dx ;~ 075B:0337
loc_15ec9:
	// 4703 
cs=0x75b;eip=0x000339; 	X(word_15a06 = cx;);	// 17164                  mov     word_15A06, cx ;~ 075B:0339
cs=0x75b;eip=0x00033d; 	X(word_15a08 = dx;);	// 17165                  mov     word_15A08, dx ;~ 075B:033D
cs=0x75b;eip=0x000341; 	J(CALL(sub_15e71,0));	// 17166                  call    sub_15E71 ;~ 075B:0341
cs=0x75b;eip=0x000344; 	T(bx = word_15a08;);	// 17167                  mov     bx, word_15A08 ;~ 075B:0344
cs=0x75b;eip=0x000348; 	T(cx = word_15a06;);	// 17168                  mov     cx, word_15A06 ;~ 075B:0348
cs=0x75b;eip=0x00034c; 	T(dx = cx;);	// 17169                  mov     dx, cx ;~ 075B:034C
cs=0x75b;eip=0x00034e; 	T(INC(dx));	// 17170                  inc     dx ;~ 075B:034E
cs=0x75b;eip=0x00034f; 	T(SHR(dx, 1));	// 17171                  shr     dx, 1 ;~ 075B:034F
cs=0x75b;eip=0x000351; 	T(NEG(dx));	// 17172                  neg     dx ;~ 075B:0351
cs=0x75b;eip=0x000353; 	T(DEC(si));	// 17173                  dec     si ;~ 075B:0353
loc_15ee4:
	// 4704 
cs=0x75b;eip=0x000354; 	X(STOSB);	// 17177                  stosb ;~ 075B:0354
cs=0x75b;eip=0x000355; 	T(DEC(cx));	// 17178                  dec     cx ;~ 075B:0355
cs=0x75b;eip=0x000356; 	J(JS(loc_15ef6));	// 17179                  js      short loc_15EF6 ;~ 075B:0356
cs=0x75b;eip=0x000358; 	T(ADD(di, si));	// 17180                  add     di, si ;~ 075B:0358
cs=0x75b;eip=0x00035a; 	T(ADD(dx, bx));	// 17181                  add     dx, bx ;~ 075B:035A
cs=0x75b;eip=0x00035c; 	J(JS(loc_15ee4));	// 17182                  js      short loc_15EE4 ;~ 075B:035C
cs=0x75b;eip=0x00035e; 	T(SUB(dx, word_15a06));	// 17183                  sub     dx, word_15A06 ;~ 075B:035E
cs=0x75b;eip=0x000362; 	T(ADD(di, bp));	// 17184                  add     di, bp ;~ 075B:0362
cs=0x75b;eip=0x000364; 	J(JMP(loc_15ee4));	// 17185                  jmp     short loc_15EE4 ;~ 075B:0364
loc_15ef6:
	// 4705 
cs=0x75b;eip=0x000366; 	X(POP(es));	// 17189                  pop     es ;~ 075B:0366
cs=0x75b;eip=0x000367; 	X(POP(ds));	// 17191                  pop     ds ;~ 075B:0367
cs=0x75b;eip=0x000368; 	J(RETF(0));	// 17193                  retf ;~ 075B:0368
ret_75b_369:
	// 4706 
cs=0x75b;eip=0x000369; 	X(PUSH(bp));	// 17196                  push    bp ;~ 075B:0369
cs=0x75b;eip=0x00036a; 	T(bp = sp;);	// 17197                  mov     bp, sp ;~ 075B:036A
cs=0x75b;eip=0x00036c; 	X(PUSH(si));	// 17198                  push    si ;~ 075B:036C
cs=0x75b;eip=0x00036d; 	X(PUSH(di));	// 17199                  push    di ;~ 075B:036D
cs=0x75b;eip=0x00036e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 17200                  mov     bx, [bp+8] ;~ 075B:036E
cs=0x75b;eip=0x000371; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 17201                  mov     bp, [bp+6] ;~ 075B:0371
cs=0x75b;eip=0x000374; 	J(CALLF(_group8,m2c::kloc_1603b));	// 17202                  call    loc_1603B ;~ 075B:0374
cs=0x75b;eip=0x000379; 	X(POP(di));	// 17203                  pop     di ;~ 075B:0379
cs=0x75b;eip=0x00037a; 	X(POP(si));	// 17204                  pop     si ;~ 075B:037A
cs=0x75b;eip=0x00037b; 	X(POP(bp));	// 17205                  pop     bp ;~ 075B:037B
cs=0x75b;eip=0x00037c; 	J(RETF(0));	// 17206                  retf ;~ 075B:037C
ret_75b_37d:
	// 4707 
cs=0x75b;eip=0x00037d; 	X(PUSH(bp));	// 17208                  push    bp ;~ 075B:037D
cs=0x75b;eip=0x00037e; 	T(bp = sp;);	// 17209                  mov     bp, sp ;~ 075B:037E
cs=0x75b;eip=0x000380; 	X(PUSH(si));	// 17210                  push    si ;~ 075B:0380
cs=0x75b;eip=0x000381; 	X(PUSH(di));	// 17211                  push    di ;~ 075B:0381
cs=0x75b;eip=0x000382; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 17212                  mov     bx, [bp+8] ;~ 075B:0382
cs=0x75b;eip=0x000385; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 17213                  mov     bp, [bp+6] ;~ 075B:0385
cs=0x75b;eip=0x000388; 	J(CALLF(sub_15f5d,0));	// 17214                  call    sub_15F5D ;~ 075B:0388
cs=0x75b;eip=0x00038d; 	X(POP(di));	// 17215                  pop     di ;~ 075B:038D
cs=0x75b;eip=0x00038e; 	X(POP(si));	// 17216                  pop     si ;~ 075B:038E
cs=0x75b;eip=0x00038f; 	X(POP(bp));	// 17217                  pop     bp ;~ 075B:038F
cs=0x75b;eip=0x000390; 	J(RETF(0));	// 17218                  retf ;~ 075B:0390
ret_75b_391:
	// 4708 
cs=0x75b;eip=0x000391; 	X(PUSH(bp));	// 17220                  push    bp ;~ 075B:0391
cs=0x75b;eip=0x000392; 	T(bp = sp;);	// 17221                  mov     bp, sp ;~ 075B:0392
cs=0x75b;eip=0x000394; 	X(PUSH(si));	// 17222                  push    si ;~ 075B:0394
cs=0x75b;eip=0x000395; 	X(PUSH(di));	// 17223                  push    di ;~ 075B:0395
cs=0x75b;eip=0x000396; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 17224                  mov     bx, [bp+8] ;~ 075B:0396
cs=0x75b;eip=0x000399; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 17225                  mov     bp, [bp+6] ;~ 075B:0399
cs=0x75b;eip=0x00039c; 	J(CALLF(sub_15ff1,0));	// 17226                  call    far ptr sub_15FF1 ;~ 075B:039C
cs=0x75b;eip=0x0003a1; 	X(POP(di));	// 17227                  pop     di ;~ 075B:03A1
cs=0x75b;eip=0x0003a2; 	X(POP(si));	// 17228                  pop     si ;~ 075B:03A2
cs=0x75b;eip=0x0003a3; 	X(POP(bp));	// 17229                  pop     bp ;~ 075B:03A3
cs=0x75b;eip=0x0003a4; 	J(RETF(0));	// 17230                  retf ;~ 075B:03A4
ret_75b_3a5:
	// 4709 
cs=0x75b;eip=0x0003a5; 	X(PUSH(bp));	// 17232                  push    bp ;~ 075B:03A5
cs=0x75b;eip=0x0003a6; 	T(bp = sp;);	// 17233                  mov     bp, sp ;~ 075B:03A6
cs=0x75b;eip=0x0003a8; 	X(PUSH(si));	// 17234                  push    si ;~ 075B:03A8
cs=0x75b;eip=0x0003a9; 	X(PUSH(di));	// 17235                  push    di ;~ 075B:03A9
cs=0x75b;eip=0x0003aa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 17236                  mov     bx, [bp+8] ;~ 075B:03AA
cs=0x75b;eip=0x0003ad; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 17237                  mov     bp, [bp+6] ;~ 075B:03AD
cs=0x75b;eip=0x0003b0; 	J(CALLF(sub_15f6c,0));	// 17238                  call    sub_15F6C ;~ 075B:03B0
cs=0x75b;eip=0x0003b5; 	X(POP(di));	// 17239                  pop     di ;~ 075B:03B5
cs=0x75b;eip=0x0003b6; 	X(POP(si));	// 17240                  pop     si ;~ 075B:03B6
cs=0x75b;eip=0x0003b7; 	X(POP(bp));	// 17241                  pop     bp ;~ 075B:03B7
cs=0x75b;eip=0x0003b8; 	J(RETF(0));	// 17242                  retf ;~ 075B:03B8
ret_75b_3b9:
	// 4710 
cs=0x75b;eip=0x0003b9; 	X(PUSH(bp));	// 17244                  push    bp ;~ 075B:03B9
cs=0x75b;eip=0x0003ba; 	T(bp = sp;);	// 17245                  mov     bp, sp ;~ 075B:03BA
cs=0x75b;eip=0x0003bc; 	X(PUSH(si));	// 17246                  push    si ;~ 075B:03BC
cs=0x75b;eip=0x0003bd; 	X(PUSH(di));	// 17247                  push    di ;~ 075B:03BD
cs=0x75b;eip=0x0003be; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 17248                  mov     bx, [bp+8] ;~ 075B:03BE
cs=0x75b;eip=0x0003c1; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 17249                  mov     bp, [bp+6] ;~ 075B:03C1
cs=0x75b;eip=0x0003c4; 	J(CALLF(sub_15fa8,0));	// 17250                  call    far ptr sub_15FA8 ;~ 075B:03C4
cs=0x75b;eip=0x0003c9; 	X(POP(di));	// 17251                  pop     di ;~ 075B:03C9
cs=0x75b;eip=0x0003ca; 	X(POP(si));	// 17252                  pop     si ;~ 075B:03CA
cs=0x75b;eip=0x0003cb; 	X(POP(bp));	// 17253                  pop     bp ;~ 075B:03CB
cs=0x75b;eip=0x0003cc; 	J(RETF(0));	// 17254                  retf ;~ 075B:03CC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15e6a: 	goto loc_15e6a;
        case m2c::kloc_15e9c: 	goto loc_15e9c;
        case m2c::kloc_15eb1: 	goto loc_15eb1;
        case m2c::kloc_15ec1: 	goto loc_15ec1;
        case m2c::kloc_15ec9: 	goto loc_15ec9;
        case m2c::kloc_15ee4: 	goto loc_15ee4;
        case m2c::kloc_15ef6: 	goto loc_15ef6;
        case m2c::kret_75b_2ce: 	goto ret_75b_2ce;
        case m2c::kret_75b_369: 	goto ret_75b_369;
        case m2c::kret_75b_37d: 	goto ret_75b_37d;
        case m2c::kret_75b_391: 	goto ret_75b_391;
        case m2c::kret_75b_3a5: 	goto ret_75b_3a5;
        case m2c::kret_75b_3b9: 	goto ret_75b_3b9;
        case m2c::kseg004_2cd_proc: 	goto seg004_2cd_proc;
        case m2c::kseg004_2f9_proc: 	goto seg004_2f9_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_15e71(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_15e71:
    _begin:
cs=0x75b;eip=0x0002e1; 	T(al = byte_15a0a;);	// 17116                  mov     al, byte_15A0A ;~ 075B:02E1
cs=0x75b;eip=0x0002e4; 	T(di = word_15a00;);	// 17117                  mov     di, word_15A00 ;~ 075B:02E4
cs=0x75b;eip=0x0002e8; 	T(SHL(di, 1));	// 17118                  shl     di, 1 ;~ 075B:02E8
cs=0x75b;eip=0x0002ea; 	T(MOV(di, *(dw*)(raddr(cs,di+0x0E))));	// 17119                  mov     di, cs:[di+0Eh] ;~ 075B:02EA
cs=0x75b;eip=0x0002ef; 	T(ADD(di, word_15d30));	// 17120                  add     di, cs:word_15D30 ;~ 075B:02EF
cs=0x75b;eip=0x0002f4; 	T(ADD(di, word_159fe));	// 17121                  add     di, word_159FE ;~ 075B:02F4
cs=0x75b;eip=0x0002f8; 	J(RETN(0));	// 17122                  retn ;~ 075B:02F8

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_15e71: 	goto sub_15e71;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_15f5d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_15f5d:
    _begin:
cs=0x75b;eip=0x0003cd; 	J(CALL(sub_1614b,0));	// 17260                  call    sub_1614B ;~ 075B:03CD
cs=0x75b;eip=0x0003d0; 	J(CALL(sub_15f75,0));	// 17261                  call    near ptr sub_15F75 ;~ 075B:03D0
cs=0x75b;eip=0x0003d3; 	J(CALL(sub_15fb1,0));	// 17262                  call    near ptr sub_15FB1 ;~ 075B:03D3
cs=0x75b;eip=0x0003d6; 	J(CALL(sub_15ffa,0));	// 17263                  call    near ptr sub_15FFA ;~ 075B:03D6
cs=0x75b;eip=0x0003d9; 	J(return _group8(m2c::kloc_1603e, _state););	// 17264                  jmp     loc_1603E ;~ 075B:03D9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_15f5d: 	goto sub_15f5d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_15f6c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_15f6c:
    _begin:
cs=0x75b;eip=0x0003dc; 	J(CALL(sub_1614b,0));	// 17272                  call    sub_1614B ;~ 075B:03DC
loc_15f6f:
	// 4711 
cs=0x75b;eip=0x0003df; 	J(CALL(sub_15f75,0));	// 17276                  call    near ptr sub_15F75 ;~ 075B:03DF
cs=0x75b;eip=0x0003e2; 	J(return _group8(m2c::kloc_1603e, _state););	// 17277                  jmp     loc_1603E ;~ 075B:03E2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15f6f: 	goto loc_15f6f;
        case m2c::ksub_15f6c: 	goto sub_15f6c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_15f75(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_15f75:
    _begin:
cs=0x75b;eip=0x0003e5; 	T(CMP(byte_15b0c, 0x0FF));	// 17286                  cmp     byte_15B0C, 0FFh ;~ 075B:03E5
cs=0x75b;eip=0x0003ea; 	J(JZ(locret_15fa7));	// 17287                  jz      short locret_15FA7 ;~ 075B:03EA
cs=0x75b;eip=0x0003ec; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x12))));	// 17288                  mov     ax, [bp+12h] ;~ 075B:03EC
cs=0x75b;eip=0x0003ef; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 17289                  mov     dx, [bp+8] ;~ 075B:03EF
cs=0x75b;eip=0x0003f2; 	T(CMP(dx, ax));	// 17290                  cmp     dx, ax ;~ 075B:03F2
cs=0x75b;eip=0x0003f4; 	J(JNC(locret_15fa7));	// 17291                  jnb     short locret_15FA7 ;~ 075B:03F4
cs=0x75b;eip=0x0003f6; 	X(MOV(*(dw*)(raddr(ss,bp+8)), ax));	// 17292                  mov     [bp+8], ax ;~ 075B:03F6
cs=0x75b;eip=0x0003f9; 	T(SUB(ax, dx));	// 17293                  sub     ax, dx ;~ 075B:03F9
cs=0x75b;eip=0x0003fb; 	X(DIV1(byte_15b0c));	// 17294                  div     byte_15B0C ;~ 075B:03FB
cs=0x75b;eip=0x0003ff; 	X(byte_15b0d = ah;);	// 17295                  mov     byte_15B0D, ah ;~ 075B:03FF
cs=0x75b;eip=0x000403; 	X(SUB(byte_15b06, ah));	// 17296                  sub     byte_15B06, ah ;~ 075B:0403
cs=0x75b;eip=0x000407; 	T(INC(al));	// 17297                  inc     al ;~ 075B:0407
loc_15f99:
	// 4712 
cs=0x75b;eip=0x000409; 	T(DEC(al));	// 17300                  dec     al ;~ 075B:0409
cs=0x75b;eip=0x00040b; 	J(JZ(locret_15fa7));	// 17301                  jz      short locret_15FA7 ;~ 075B:040B
cs=0x75b;eip=0x00040d; 	T(INC(bx));	// 17302                  inc     bx ;~ 075B:040D
cs=0x75b;eip=0x00040e; 	T(CMP(*(raddr(ss,bx)), 0));	// 17303                  cmp     byte ptr ss:[bx], 0 ;~ 075B:040E
cs=0x75b;eip=0x000412; 	J(JNZ(loc_15f99));	// 17304                  jnz     short loc_15F99 ;~ 075B:0412
cs=0x75b;eip=0x000414; 	J(return _group8(m2c::kloc_16147, _state););	// 17305                  jmp     loc_16147 ;~ 075B:0414
locret_15fa7:
	// 4713 
cs=0x75b;eip=0x000417; 	J(RETN(0));	// 17310                  retn ;~ 075B:0417

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15f99: 	goto loc_15f99;
        case m2c::klocret_15fa7: 	goto locret_15fa7;
        case m2c::ksub_15f75: 	goto sub_15f75;
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
sub_15fa8:
	// 17318 
cs=0x75b;eip=0x000418; 	J(CALL(sub_1614b,0));	// 17319                  call    sub_1614B ;~ 075B:0418
sub_15fab:
	// 17327 
cs=0x75b;eip=0x00041b; 	J(CALL(sub_15fb1,0));	// 17328                  call    near ptr sub_15FB1 ;~ 075B:041B
cs=0x75b;eip=0x00041e; 	J(return _group8(m2c::kloc_1603e, _state););	// 17329                  jmp     loc_1603E ;~ 075B:041E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_15fa8: 	goto sub_15fa8;
        case m2c::ksub_15fab: 	goto sub_15fab;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_15fb1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_15fb1:
    _begin:
cs=0x75b;eip=0x000421; 	T(CMP(byte_15b0c, 0x0FF));	// 17338                  cmp     byte_15B0C, 0FFh ;~ 075B:0421
cs=0x75b;eip=0x000426; 	J(JZ(locret_15fed));	// 17339                  jz      short locret_15FED ;~ 075B:0426
cs=0x75b;eip=0x000428; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x14))));	// 17340                  mov     cx, [bp+14h] ;~ 075B:0428
cs=0x75b;eip=0x00042b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 17341                  mov     dx, [bp+8] ;~ 075B:042B
cs=0x75b;eip=0x00042e; 	T(CMP(dx, cx));	// 17342                  cmp     dx, cx ;~ 075B:042E
cs=0x75b;eip=0x000430; 	J(JNC(loc_15fee));	// 17343                  jnb     short loc_15FEE ;~ 075B:0430
cs=0x75b;eip=0x000432; 	T(di = 0x0FFFF;);	// 17344                  mov     di, 0FFFFh ;~ 075B:0432
loc_15fc5:
	// 4714 
cs=0x75b;eip=0x000435; 	T(INC(di));	// 17347                  inc     di ;~ 075B:0435
cs=0x75b;eip=0x000436; 	T(CMP(*(raddr(ss,bx+di)), 0));	// 17348                  cmp     byte ptr ss:[bx+di], 0 ;~ 075B:0436
cs=0x75b;eip=0x00043a; 	J(JNZ(loc_15fc5));	// 17349                  jnz     short loc_15FC5 ;~ 075B:043A
cs=0x75b;eip=0x00043c; 	T(ax = di;);	// 17350                  mov     ax, di ;~ 075B:043C
cs=0x75b;eip=0x00043e; 	X(MUL1_1(byte_15b0c));	// 17351                  mul     byte_15B0C ;~ 075B:043E
cs=0x75b;eip=0x000442; 	T(ADD(ax, dx));	// 17352                  add     ax, dx ;~ 075B:0442
cs=0x75b;eip=0x000444; 	T(DEC(ax));	// 17353                  dec     ax ;~ 075B:0444
cs=0x75b;eip=0x000445; 	T(SUB(ax, cx));	// 17354                  sub     ax, cx ;~ 075B:0445
cs=0x75b;eip=0x000447; 	J(JBE(locret_15fed));	// 17355                  jbe     short locret_15FED ;~ 075B:0447
cs=0x75b;eip=0x000449; 	T(cl = byte_15b0c;);	// 17356                  mov     cl, byte_15B0C ;~ 075B:0449
cs=0x75b;eip=0x00044d; 	T(DIV1(cl));	// 17357                  div     cl ;~ 075B:044D
cs=0x75b;eip=0x00044f; 	T(SUB(cl, ah));	// 17358                  sub     cl, ah ;~ 075B:044F
cs=0x75b;eip=0x000451; 	X(byte_15b0e = cl;);	// 17359                  mov     byte_15B0E, cl ;~ 075B:0451
cs=0x75b;eip=0x000455; 	T(dx = di;);	// 17360                  mov     dx, di ;~ 075B:0455
cs=0x75b;eip=0x000457; 	T(SUB(dl, al));	// 17361                  sub     dl, al ;~ 075B:0457
cs=0x75b;eip=0x000459; 	X(byte_15b07 = dl;);	// 17362                  mov     byte_15B07, dl ;~ 075B:0459
locret_15fed:
	// 4715 
cs=0x75b;eip=0x00045d; 	J(RETN(0));	// 17366                  retn ;~ 075B:045D
loc_15fee:
	// 4716 
cs=0x75b;eip=0x00045e; 	J(return _group8(m2c::kloc_16147, _state););	// 17370                  jmp     loc_16147 ;~ 075B:045E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15fc5: 	goto loc_15fc5;
        case m2c::kloc_15fee: 	goto loc_15fee;
        case m2c::klocret_15fed: 	goto locret_15fed;
        case m2c::ksub_15fb1: 	goto sub_15fb1;
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
sub_15ff1:
	// 17378 
cs=0x75b;eip=0x000461; 	J(CALL(sub_1614b,0));	// 17379                  call    sub_1614B ;~ 075B:0461
sub_15ff4:
	// 17387 
cs=0x75b;eip=0x000464; 	J(CALL(sub_15ffa,0));	// 17388                  call    near ptr sub_15FFA ;~ 075B:0464
cs=0x75b;eip=0x000467; 	J(return _group8(m2c::kloc_1603e, _state););	// 17389                  jmp     short loc_1603E ;~ 075B:0467

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_15ff1: 	goto sub_15ff1;
        case m2c::ksub_15ff4: 	goto sub_15ff4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group8:
    _begin:
sub_15ffa:
	// 17398 
cs=0x75b;eip=0x00046a; 	T(MOV(cl, *(raddr(ss,bp+0x0E))));	// 17400                  mov     cl, [bp+0Eh] ;~ 075B:046A
cs=0x75b;eip=0x00046d; 	T(MOV(ch, *(raddr(ss,bp+0x10))));	// 17401                  mov     ch, [bp+10h] ;~ 075B:046D
cs=0x75b;eip=0x000470; 	T(dh = byte_15b0f;);	// 17402                  mov     dh, byte_15B0F ;~ 075B:0470
cs=0x75b;eip=0x000474; 	T(DEC(dh));	// 17403                  dec     dh ;~ 075B:0474
cs=0x75b;eip=0x000476; 	T(MOV(dl, *(raddr(ss,bp+0x0A))));	// 17404                  mov     dl, [bp+0Ah] ;~ 075B:0476
cs=0x75b;eip=0x000479; 	T(ADD(dh, dl));	// 17405                  add     dh, dl ;~ 075B:0479
cs=0x75b;eip=0x00047b; 	T(CMP(dl, ch));	// 17406                  cmp     dl, ch ;~ 075B:047B
cs=0x75b;eip=0x00047d; 	J(JA(loc_16038));	// 17407                  ja      short loc_16038 ;~ 075B:047D
cs=0x75b;eip=0x00047f; 	T(CMP(dh, cl));	// 17408                  cmp     dh, cl ;~ 075B:047F
cs=0x75b;eip=0x000481; 	J(JC(loc_16038));	// 17409                  jb      short loc_16038 ;~ 075B:0481
cs=0x75b;eip=0x000483; 	T(CMP(dl, cl));	// 17410                  cmp     dl, cl ;~ 075B:0483
cs=0x75b;eip=0x000485; 	J(JNC(loc_1602b));	// 17411                  jnb     short loc_1602B ;~ 075B:0485
cs=0x75b;eip=0x000487; 	T(al = dh;);	// 17412                  mov     al, dh ;~ 075B:0487
cs=0x75b;eip=0x000489; 	T(SUB(al, cl));	// 17413                  sub     al, cl ;~ 075B:0489
cs=0x75b;eip=0x00048b; 	T(INC(al));	// 17414                  inc     al ;~ 075B:048B
cs=0x75b;eip=0x00048d; 	X(byte_15b0f = al;);	// 17415                  mov     byte_15B0F, al ;~ 075B:048D
cs=0x75b;eip=0x000490; 	X(MOV(*(raddr(ss,bp+0x0A)), cl));	// 17416                  mov     [bp+0Ah], cl ;~ 075B:0490
cs=0x75b;eip=0x000493; 	T(SUB(cl, dl));	// 17417                  sub     cl, dl ;~ 075B:0493
cs=0x75b;eip=0x000495; 	T(SHL(cl, 1));	// 17418                  shl     cl, 1 ;~ 075B:0495
cs=0x75b;eip=0x000497; 	X(*(db*)(&word_15b10) = cl;);	// 17419                  mov     byte ptr word_15B10, cl ;~ 075B:0497
loc_1602b:
	// 4717 
cs=0x75b;eip=0x00049b; 	T(CMP(dh, ch));	// 17422                  cmp     dh, ch ;~ 075B:049B
cs=0x75b;eip=0x00049d; 	J(JBE(locret_16037));	// 17423                  jbe     short locret_16037 ;~ 075B:049D
cs=0x75b;eip=0x00049f; 	T(SUB(ch, dl));	// 17424                  sub     ch, dl ;~ 075B:049F
cs=0x75b;eip=0x0004a1; 	T(INC(ch));	// 17425                  inc     ch ;~ 075B:04A1
cs=0x75b;eip=0x0004a3; 	X(byte_15b0f = ch;);	// 17426                  mov     byte_15B0F, ch ;~ 075B:04A3
locret_16037:
	// 4718 
cs=0x75b;eip=0x0004a7; 	J(RETN(0));	// 17429                  retn ;~ 075B:04A7
loc_16038:
	// 4719 
cs=0x75b;eip=0x0004a8; 	J(JMP(loc_16147));	// 17434                  jmp     loc_16147 ;~ 075B:04A8
loc_1603b:
	// 4720 
cs=0x75b;eip=0x0004ab; 	J(CALL(sub_1614b,0));	// 17439                  call    sub_1614B ;~ 075B:04AB
loc_1603e:
	// 4721 
cs=0x75b;eip=0x0004ae; 	T(MOV(ah, *(raddr(ss,bp+4))));	// 17444                  mov     ah, [bp+4] ;~ 075B:04AE
cs=0x75b;eip=0x0004b1; 	J(CALLF(sub_15e51,0));	// 17445                  call    sub_15E51 ;~ 075B:04B1
cs=0x75b;eip=0x0004b6; 	T(di = word_15b10;);	// 17446                  mov     di, word_15B10 ;~ 075B:04B6
cs=0x75b;eip=0x0004ba; 	T(MOV(di, *(dw*)(raddr(ds,di+0x112))));	// 17447                  mov     di, [di+112h] ;~ 075B:04BA
cs=0x75b;eip=0x0004be; 	T(ADD(di, word_15b0a));	// 17448                  add     di, word_15B0A ;~ 075B:04BE
cs=0x75b;eip=0x0004c2; 	X(word_15b08 = di;);	// 17449                  mov     word_15B08, di ;~ 075B:04C2
cs=0x75b;eip=0x0004c6; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0A))));	// 17450                  mov     di, [bp+0Ah] ;~ 075B:04C6
cs=0x75b;eip=0x0004c9; 	T(SHL(di, 1));	// 17451                  shl     di, 1 ;~ 075B:04C9
cs=0x75b;eip=0x0004cb; 	T(si = bx;);	// 17452                  mov     si, bx ;~ 075B:04CB
loc_1605d:
	// 4722 
cs=0x75b;eip=0x0004cd; 	T(CMP(byte_15b07, 1));	// 17455                  cmp     byte_15B07, 1 ;~ 075B:04CD
cs=0x75b;eip=0x0004d2; 	J(JNZ(loc_1606a));	// 17456                  jnz     short loc_1606A ;~ 075B:04D2
cs=0x75b;eip=0x0004d4; 	T(al = byte_15b0e;);	// 17458                  mov     al, byte_15B0E ;~ 075B:04D4
cs=0x75b;eip=0x0004d7; 	X(byte_15b06 = al;);	// 17459                  mov     byte_15B06, al ;~ 075B:04D7
loc_1606a:
	// 4723 
cs=0x75b;eip=0x0004da; 	T(MOV(al, *(raddr(ss,si))));	// 17462                  mov     al, ss:[si] ;~ 075B:04DA
cs=0x75b;eip=0x0004dd; 	T(INC(si));	// 17463                  inc     si ;~ 075B:04DD
cs=0x75b;eip=0x0004de; 	T(OR(al, al));	// 17464                  or      al, al ;~ 075B:04DE
cs=0x75b;eip=0x0004e0; 	J(JNZ(loc_16075));	// 17465                  jnz     short loc_16075 ;~ 075B:04E0
cs=0x75b;eip=0x0004e2; 	J(JMP(loc_16148));	// 17466                  jmp     loc_16148 ;~ 075B:04E2
loc_16075:
	// 4724 
cs=0x75b;eip=0x0004e5; 	T(TEST(al, 0x80));	// 17470                  test    al, 80h ;~ 075B:04E5
cs=0x75b;eip=0x0004e7; 	J(JZ(loc_1608d));	// 17471                  jz      short loc_1608D ;~ 075B:04E7
cs=0x75b;eip=0x0004e9; 	T(AND(al, 0x7F));	// 17472                  and     al, 7Fh ;~ 075B:04E9
cs=0x75b;eip=0x0004eb; 	X(MOV(*(raddr(ss,bp+4)), al));	// 17473                  mov     [bp+4], al ;~ 075B:04EB
cs=0x75b;eip=0x0004ee; 	T(ah = al;);	// 17474                  mov     ah, al ;~ 075B:04EE
cs=0x75b;eip=0x0004f0; 	J(CALLF(sub_15e51,0));	// 17475                  call    sub_15E51 ;~ 075B:04F0
cs=0x75b;eip=0x0004f5; 	X(byte_15b06 = 0;);	// 17476                  mov     byte_15B06, 0 ;~ 075B:04F5
cs=0x75b;eip=0x0004fa; 	J(JMP(loc_1612b));	// 17477                  jmp     loc_1612B ;~ 075B:04FA
loc_1608d:
	// 4725 
cs=0x75b;eip=0x0004fd; 	X(PUSH(si));	// 17481                  push    si ;~ 075B:04FD
cs=0x75b;eip=0x0004fe; 	X(PUSH(di));	// 17482                  push    di ;~ 075B:04FE
cs=0x75b;eip=0x0004ff; 	T(XOR(ah, ah));	// 17483                  xor     ah, ah ;~ 075B:04FF
cs=0x75b;eip=0x000501; 	T(si = ax;);	// 17484                  mov     si, ax ;~ 075B:0501
cs=0x75b;eip=0x000503; 	T(MOV(dl, *(raddr(ss,bp+4))));	// 17485                  mov     dl, [bp+4] ;~ 075B:0503
cs=0x75b;eip=0x000506; 	T(MOV(dh, *(raddr(ss,bp+6))));	// 17486                  mov     dh, [bp+6] ;~ 075B:0506
cs=0x75b;eip=0x000509; 	T(CMP(byte_15b0c, 0x0FF));	// 17487                  cmp     byte_15B0C, 0FFh ;~ 075B:0509
cs=0x75b;eip=0x00050e; 	J(JNZ(loc_160a9));	// 17488                  jnz     short loc_160A9 ;~ 075B:050E
cs=0x75b;eip=0x000510; 	T(bx = word_15b12;);	// 17489                  mov     bx, word_15B12 ;~ 075B:0510
cs=0x75b;eip=0x000514; 	T(MOV(al, *(raddr(ds,bx+si))));	// 17490                  mov     al, [bx+si] ;~ 075B:0514
cs=0x75b;eip=0x000516; 	X(byte_15b06 = al;);	// 17491                  mov     byte_15B06, al ;~ 075B:0516
loc_160a9:
	// 4726 
cs=0x75b;eip=0x000519; 	T(CMP(*(raddr(ss,bp+2)), 1));	// 17494                  cmp     byte ptr [bp+2], 1 ;~ 075B:0519
cs=0x75b;eip=0x00051d; 	J(JZ(loc_160ed));	// 17495                  jz      short loc_160ED ;~ 075B:051D
cs=0x75b;eip=0x00051f; 	T(ch = byte_15b0f;);	// 17496                  mov     ch, byte_15B0F ;~ 075B:051F
loc_160b3:
	// 4727 
cs=0x75b;eip=0x000523; 	T(bx = word_15b08;);	// 17499                  mov     bx, word_15B08 ;~ 075B:0523
cs=0x75b;eip=0x000527; 	T(MOV(bx, *(dw*)(raddr(ds,bx+si))));	// 17500                  mov     bx, [bx+si] ;~ 075B:0527
cs=0x75b;eip=0x000529; 	T(XCHG(bh, bl));	// 17501                  xchg    bh, bl ;~ 075B:0529
cs=0x75b;eip=0x00052b; 	T(cl = byte_15b0d;);	// 17502                  mov     cl, byte_15B0D ;~ 075B:052B
cs=0x75b;eip=0x00052f; 	T(SHL(bx, cl));	// 17503                  shl     bx, cl ;~ 075B:052F
cs=0x75b;eip=0x000531; 	X(PUSH(di));	// 17504                  push    di ;~ 075B:0531
cs=0x75b;eip=0x000532; 	T(MOV(di, *(dw*)(raddr(cs,di+0x0E))));	// 17505                  mov     di, cs:[di+0Eh] ;~ 075B:0532
cs=0x75b;eip=0x000537; 	T(ADD(di, *(dw*)(raddr(ss,bp+8))));	// 17506                  add     di, [bp+8] ;~ 075B:0537
cs=0x75b;eip=0x00053a; 	T(cl = byte_15b06;);	// 17507                  mov     cl, byte_15B06 ;~ 075B:053A
cs=0x75b;eip=0x00053e; 	T(DEC(cl));	// 17508                  dec     cl ;~ 075B:053E
cs=0x75b;eip=0x000540; 	J(JZ(loc_160de));	// 17509                  jz      short loc_160DE ;~ 075B:0540
loc_160d2:
	// 4728 
cs=0x75b;eip=0x000542; 	T(SHL(bx, 1));	// 17512                  shl     bx, 1 ;~ 075B:0542
cs=0x75b;eip=0x000544; 	J(JNC(loc_160d9));	// 17513                  jnb     short loc_160D9 ;~ 075B:0544
cs=0x75b;eip=0x000546; 	X(MOV(*(raddr(es,di)), dl));	// 17514                  mov     es:[di], dl ;~ 075B:0546
loc_160d9:
	// 4729 
cs=0x75b;eip=0x000549; 	T(INC(di));	// 17517                  inc     di ;~ 075B:0549
cs=0x75b;eip=0x00054a; 	T(DEC(cl));	// 17518                  dec     cl ;~ 075B:054A
cs=0x75b;eip=0x00054c; 	J(JNZ(loc_160d2));	// 17519                  jnz     short loc_160D2 ;~ 075B:054C
loc_160de:
	// 4730 
cs=0x75b;eip=0x00054e; 	X(POP(di));	// 17522                  pop     di ;~ 075B:054E
cs=0x75b;eip=0x00054f; 	T(ADD(di, 2));	// 17523                  add     di, 2 ;~ 075B:054F
cs=0x75b;eip=0x000552; 	T(ADD(si, 0x100));	// 17524                  add     si, 100h ;~ 075B:0552
cs=0x75b;eip=0x000556; 	T(DEC(ch));	// 17525                  dec     ch ;~ 075B:0556
cs=0x75b;eip=0x000558; 	J(JNZ(loc_160b3));	// 17526                  jnz     short loc_160B3 ;~ 075B:0558
cs=0x75b;eip=0x00055a; 	J(JMP(loc_16129));	// 17527                  jmp     short loc_16129 ;~ 075B:055A
loc_160ed:
	// 4731 
cs=0x75b;eip=0x00055d; 	T(ch = byte_15b0f;);	// 17533                  mov     ch, byte_15B0F ;~ 075B:055D
loc_160f1:
	// 4732 
cs=0x75b;eip=0x000561; 	T(bx = word_15b08;);	// 17536                  mov     bx, word_15B08 ;~ 075B:0561
cs=0x75b;eip=0x000565; 	T(MOV(bx, *(dw*)(raddr(ds,bx+si))));	// 17537                  mov     bx, [bx+si] ;~ 075B:0565
cs=0x75b;eip=0x000567; 	T(XCHG(bh, bl));	// 17538                  xchg    bh, bl ;~ 075B:0567
cs=0x75b;eip=0x000569; 	T(cl = byte_15b0d;);	// 17539                  mov     cl, byte_15B0D ;~ 075B:0569
cs=0x75b;eip=0x00056d; 	T(SHL(bx, cl));	// 17540                  shl     bx, cl ;~ 075B:056D
cs=0x75b;eip=0x00056f; 	X(PUSH(di));	// 17541                  push    di ;~ 075B:056F
cs=0x75b;eip=0x000570; 	T(MOV(di, *(dw*)(raddr(cs,di+0x0E))));	// 17542                  mov     di, cs:[di+0Eh] ;~ 075B:0570
cs=0x75b;eip=0x000575; 	T(ADD(di, *(dw*)(raddr(ss,bp+8))));	// 17543                  add     di, [bp+8] ;~ 075B:0575
cs=0x75b;eip=0x000578; 	T(cl = byte_15b06;);	// 17544                  mov     cl, byte_15B06 ;~ 075B:0578
cs=0x75b;eip=0x00057c; 	T(OR(cl, cl));	// 17545                  or      cl, cl ;~ 075B:057C
cs=0x75b;eip=0x00057e; 	J(JZ(loc_1611d));	// 17546                  jz      short loc_1611D ;~ 075B:057E
loc_16110:
	// 4733 
cs=0x75b;eip=0x000580; 	T(ax = dx;);	// 17549                  mov     ax, dx ;~ 075B:0580
cs=0x75b;eip=0x000582; 	T(SHL(bx, 1));	// 17550                  shl     bx, 1 ;~ 075B:0582
cs=0x75b;eip=0x000584; 	J(JC(loc_16118));	// 17551                  jb      short loc_16118 ;~ 075B:0584
cs=0x75b;eip=0x000586; 	T(XCHG(ah, al));	// 17552                  xchg    ah, al ;~ 075B:0586
loc_16118:
	// 4734 
cs=0x75b;eip=0x000588; 	X(STOSB);	// 17555                  stosb ;~ 075B:0588
cs=0x75b;eip=0x000589; 	T(DEC(cl));	// 17556                  dec     cl ;~ 075B:0589
cs=0x75b;eip=0x00058b; 	J(JNZ(loc_16110));	// 17557                  jnz     short loc_16110 ;~ 075B:058B
loc_1611d:
	// 4735 
cs=0x75b;eip=0x00058d; 	X(POP(di));	// 17560                  pop     di ;~ 075B:058D
cs=0x75b;eip=0x00058e; 	T(ADD(di, 2));	// 17561                  add     di, 2 ;~ 075B:058E
cs=0x75b;eip=0x000591; 	T(ADD(si, 0x100));	// 17562                  add     si, 100h ;~ 075B:0591
cs=0x75b;eip=0x000595; 	T(DEC(ch));	// 17563                  dec     ch ;~ 075B:0595
cs=0x75b;eip=0x000597; 	J(JNZ(loc_160f1));	// 17564                  jnz     short loc_160F1 ;~ 075B:0597
loc_16129:
	// 4736 
cs=0x75b;eip=0x000599; 	X(POP(di));	// 17567                  pop     di ;~ 075B:0599
cs=0x75b;eip=0x00059a; 	X(POP(si));	// 17568                  pop     si ;~ 075B:059A
loc_1612b:
	// 4737 
cs=0x75b;eip=0x00059b; 	X(DEC(byte_15b07));	// 17571                  dec     byte_15B07 ;~ 075B:059B
cs=0x75b;eip=0x00059f; 	J(JZ(loc_16148));	// 17572                  jz      short loc_16148 ;~ 075B:059F
cs=0x75b;eip=0x0005a1; 	X(byte_15b0d = 0;);	// 17573                  mov     byte_15B0D, 0 ;~ 075B:05A1
cs=0x75b;eip=0x0005a6; 	T(XOR(ah, ah));	// 17574                  xor     ah, ah ;~ 075B:05A6
cs=0x75b;eip=0x0005a8; 	T(al = byte_15b06;);	// 17575                  mov     al, byte_15B06 ;~ 075B:05A8
cs=0x75b;eip=0x0005ab; 	X(ADD(*(dw*)(raddr(ss,bp+8)), ax));	// 17576                  add     [bp+8], ax ;~ 075B:05AB
cs=0x75b;eip=0x0005ae; 	T(al = byte_15b0c;);	// 17577                  mov     al, byte_15B0C ;~ 075B:05AE
cs=0x75b;eip=0x0005b1; 	X(byte_15b06 = al;);	// 17578                  mov     byte_15B06, al ;~ 075B:05B1
cs=0x75b;eip=0x0005b4; 	J(JMP(loc_1605d));	// 17579                  jmp     loc_1605D ;~ 075B:05B4
loc_16147:
	// 4738 
cs=0x75b;eip=0x0005b7; 	X(POP(ax));	// 17584                  pop     ax ;~ 075B:05B7
loc_16148_:
cs=0x75b;eip=0x0005b8; 	X(POP(es));	// 17588                  pop     es ;~ 075B:05B8
cs=0x75b;eip=0x0005b9; 	X(POP(ds));	// 17590                  pop     ds ;~ 075B:05B9
POP(ip);
POP(cs);
		last_ip = cpu_regs.ip.dword[0];
throw m2c::StackPop(1);
loc_16148:
	// 4739 
cs=0x75b;eip=0x0005b8; 	X(POP(es));	// 17588                  pop     es ;~ 075B:05B8
cs=0x75b;eip=0x0005b9; 	X(POP(ds));	// 17590                  pop     ds ;~ 075B:05B9
cs=0x75b;eip=0x0005ba; 	J(RETF(0));	// 17592                  retf ;~ 075B:05BA
sub_1614b:
	// 17599 
cs=0x75b;eip=0x0005bb; 	X(POP(cx));	// 17601                  pop     cx ;~ 075B:05BB
cs=0x75b;eip=0x0005bc; 	X(PUSH(ds));	// 17602                  push    ds ;~ 075B:05BC
cs=0x75b;eip=0x0005bd; 	X(PUSH(es));	// 17603                  push    es ;~ 075B:05BD
cs=0x75b;eip=0x0005be; 	T(CMP(*(raddr(ss,bx)), 0));	// 17604                  cmp     byte ptr ss:[bx], 0 ;~ 075B:05BE
cs=0x75b;eip=0x0005c2; 	J(JZ(loc_16148_));	// 17605                  jz      short loc_16148 ;~ 075B:05C2
cs=0x75b;eip=0x0005c4; 	T(ax = seg_offset(seg003););	// 17606                  mov     ax, seg seg003 ;~ 075B:05C4
cs=0x75b;eip=0x0005c7; 	T(ds = ax;);	// 17607                  mov     ds, ax ;~ 075B:05C7
cs=0x75b;eip=0x0005c9; 	T(MOV(di, *(dw*)(raddr(ss,bp+0))));	// 17609                  mov     di, [bp+0] ;~ 075B:05C9
cs=0x75b;eip=0x0005cc; 	T(SHL(di, 1));	// 17610                  shl     di, 1 ;~ 075B:05CC
cs=0x75b;eip=0x0005ce; 	T(MOV(es, *(dw*)(raddr(cs,di+0x681))));	// 17611                  mov     es, word ptr cs:[di+681h] ;~ 075B:05CE
cs=0x75b;eip=0x0005d3; 	X(byte_15b07 = 0x0FF;);	// 17613                  mov     byte_15B07, 0FFh ;~ 075B:05D3
cs=0x75b;eip=0x0005d8; 	X(word_15b10 = 0;);	// 17614                  mov     word_15B10, 0 ;~ 075B:05D8
cs=0x75b;eip=0x0005de; 	X(byte_15b0d = 0;);	// 17615                  mov     byte_15B0D, 0 ;~ 075B:05DE
cs=0x75b;eip=0x0005e3; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 17616                  mov     di, [bp+0Ch] ;~ 075B:05E3
cs=0x75b;eip=0x0005e6; 	T(SHL(di, 1));	// 17617                  shl     di, 1 ;~ 075B:05E6
cs=0x75b;eip=0x0005e8; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0EE))));	// 17618                  mov     ax, [di+0EEh] ;~ 075B:05E8
cs=0x75b;eip=0x0005ec; 	X(word_15b0a = ax;);	// 17619                  mov     word_15B0A, ax ;~ 075B:05EC
cs=0x75b;eip=0x0005ef; 	T(MOV(al, *(raddr(ds,di+0x106))));	// 17620                  mov     al, [di+106h] ;~ 075B:05EF
cs=0x75b;eip=0x0005f3; 	X(byte_15b0c = al;);	// 17621                  mov     byte_15B0C, al ;~ 075B:05F3
cs=0x75b;eip=0x0005f6; 	X(byte_15b06 = al;);	// 17622                  mov     byte_15B06, al ;~ 075B:05F6
cs=0x75b;eip=0x0005f9; 	X(byte_15b0e = al;);	// 17623                  mov     byte_15B0E, al ;~ 075B:05F9
cs=0x75b;eip=0x0005fc; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0E2))));	// 17624                  mov     ax, [di+0E2h] ;~ 075B:05FC
cs=0x75b;eip=0x000600; 	X(word_15b12 = ax;);	// 17625                  mov     word_15B12, ax ;~ 075B:0600
cs=0x75b;eip=0x000603; 	T(MOV(ax, *(dw*)(raddr(ss,bp+2))));	// 17626                  mov     ax, [bp+2] ;~ 075B:0603
cs=0x75b;eip=0x000606; 	T(AND(ax, 1));	// 17627                  and     ax, 1 ;~ 075B:0606
cs=0x75b;eip=0x000609; 	T(ADD(di, ax));	// 17628                  add     di, ax ;~ 075B:0609
cs=0x75b;eip=0x00060b; 	T(MOV(ah, *(raddr(ds,di+0x0FA))));	// 17629                  mov     ah, [di+0FAh] ;~ 075B:060B
cs=0x75b;eip=0x00060f; 	X(byte_15b0f = ah;);	// 17630                  mov     byte_15B0F, ah ;~ 075B:060F
cs=0x75b;eip=0x000613; __disp=cx;
	J(return true;);	// 17631                  jmp     cx ;~ 075B:0613

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1602b: 	goto loc_1602b;
        case m2c::kloc_16038: 	goto loc_16038;
        case m2c::kloc_1603b: 	goto loc_1603b;
        case m2c::kloc_1603e: 	goto loc_1603e;
        case m2c::kloc_1605d: 	goto loc_1605d;
        case m2c::kloc_1606a: 	goto loc_1606a;
        case m2c::kloc_16075: 	goto loc_16075;
        case m2c::kloc_1608d: 	goto loc_1608d;
        case m2c::kloc_160a9: 	goto loc_160a9;
        case m2c::kloc_160b3: 	goto loc_160b3;
        case m2c::kloc_160d2: 	goto loc_160d2;
        case m2c::kloc_160d9: 	goto loc_160d9;
        case m2c::kloc_160de: 	goto loc_160de;
        case m2c::kloc_160ed: 	goto loc_160ed;
        case m2c::kloc_160f1: 	goto loc_160f1;
        case m2c::kloc_16110: 	goto loc_16110;
        case m2c::kloc_16118: 	goto loc_16118;
        case m2c::kloc_1611d: 	goto loc_1611d;
        case m2c::kloc_16129: 	goto loc_16129;
        case m2c::kloc_1612b: 	goto loc_1612b;
        case m2c::kloc_16147: 	goto loc_16147;
        case m2c::kloc_16148: 	goto loc_16148;
        case m2c::klocret_16037: 	goto locret_16037;
        case m2c::ksub_15ffa: 	goto sub_15ffa;
        case m2c::ksub_1614b: 	goto sub_1614b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg004_615_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg004_615_proc:
    _begin:
cs=0x75b;eip=0x000615; 	X(PUSH(ds));	// 17636                  push    ds ;~ 075B:0615
cs=0x75b;eip=0x000616; 	X(PUSH(es));	// 17637                  push    es ;~ 075B:0616
cs=0x75b;eip=0x000617; 	T(ax = seg_offset(seg003););	// 17638                  mov     ax, seg seg003 ;~ 075B:0617
cs=0x75b;eip=0x00061a; 	T(ds = ax;);	// 17639                  mov     ds, ax ;~ 075B:061A
cs=0x75b;eip=0x00061c; 	T(es = word_15d2e;);	// 17641                  mov     es, cs:word_15D2E ;~ 075B:061C
cs=0x75b;eip=0x000621; 	T(STD);	// 17643                  std ;~ 075B:0621
cs=0x75b;eip=0x000622; 	T(OR(si, si));	// 17644                  or      si, si ;~ 075B:0622
cs=0x75b;eip=0x000624; 	J(JZ(loc_161b7));	// 17645                  jz      short loc_161B7 ;~ 075B:0624
cs=0x75b;eip=0x000626; 	T(CLD);	// 17646                  cld ;~ 075B:0626
loc_161b7:
	// 4740 
cs=0x75b;eip=0x000627; 	T(DEC(bx));	// 17649                  dec     bx ;~ 075B:0627
cs=0x75b;eip=0x000628; 	T(CMP(dl, 1));	// 17650                  cmp     dl, 1 ;~ 075B:0628
cs=0x75b;eip=0x00062b; 	J(JL(loc_161c0));	// 17651                  jl      short loc_161C0 ;~ 075B:062B
cs=0x75b;eip=0x00062d; 	T(ADD(bx, 0x14));	// 17652                  add     bx, 14h ;~ 075B:062D
loc_161c0:
	// 4741 
cs=0x75b;eip=0x000630; 	T(OR(cl, cl));	// 17655                  or      cl, cl ;~ 075B:0630
cs=0x75b;eip=0x000632; 	J(JZ(loc_161c8));	// 17656                  jz      short loc_161C8 ;~ 075B:0632
cs=0x75b;eip=0x000634; 	T(ADD(si, 4));	// 17657                  add     si, 4 ;~ 075B:0634
cs=0x75b;eip=0x000637; 	T(INC(bx));	// 17658                  inc     bx ;~ 075B:0637
loc_161c8:
	// 4742 
cs=0x75b;eip=0x000638; 	T(al = 0x0F;);	// 17661                  mov     al, 0Fh ;~ 075B:0638
cs=0x75b;eip=0x00063a; 	T(ah = al;);	// 17662                  mov     ah, al ;~ 075B:063A
cs=0x75b;eip=0x00063c; 	T(MOV(dx, *(dw*)(raddr(ds,si+0x1C84))));	// 17663                  mov     dx, [si+1C84h] ;~ 075B:063C
cs=0x75b;eip=0x000640; 	T(ch = 0x0A;);	// 17664                  mov     ch, 0Ah ;~ 075B:0640
loc_161d2:
	// 4743 
cs=0x75b;eip=0x000642; 	T(CMP(bx, *(dw*)(raddr(ds,si+0x1C8C))));	// 17667                  cmp     bx, [si+1C8Ch] ;~ 075B:0642
cs=0x75b;eip=0x000646; 	J(JC(loc_1620d));	// 17668                  jb      short loc_1620D ;~ 075B:0646
cs=0x75b;eip=0x000648; 	T(CMP(bx, *(dw*)(raddr(ds,si+0x1C94))));	// 17669                  cmp     bx, [si+1C94h] ;~ 075B:0648
cs=0x75b;eip=0x00064c; 	J(JA(loc_161ff));	// 17670                  ja      short loc_161FF ;~ 075B:064C
cs=0x75b;eip=0x00064e; 	T(di = bx;);	// 17671                  mov     di, bx ;~ 075B:064E
cs=0x75b;eip=0x000650; 	T(SHL(di, 1));	// 17672                  shl     di, 1 ;~ 075B:0650
cs=0x75b;eip=0x000652; 	T(MOV(di, *(dw*)(raddr(cs,di+0x0E))));	// 17673                  mov     di, cs:[di+0Eh] ;~ 075B:0652
cs=0x75b;eip=0x000657; 	T(ADD(di, dx));	// 17674                  add     di, dx ;~ 075B:0657
cs=0x75b;eip=0x000659; 	T(CMP(ch, 5));	// 17675                  cmp     ch, 5 ;~ 075B:0659
cs=0x75b;eip=0x00065c; 	J(JNZ(loc_161f3));	// 17676                  jnz     short loc_161F3 ;~ 075B:065C
cs=0x75b;eip=0x00065e; 	X(STOSB);	// 17677                  stosb ;~ 075B:065E
cs=0x75b;eip=0x00065f; 	X(STOSB);	// 17678                  stosb ;~ 075B:065F
cs=0x75b;eip=0x000660; 	J(JMP(loc_161ff));	// 17679                  jmp     short loc_161FF ;~ 075B:0660
loc_161f3:
	// 4744 
cs=0x75b;eip=0x000663; 	T(CMP(ch, 0x0A));	// 17685                  cmp     ch, 0Ah ;~ 075B:0663
cs=0x75b;eip=0x000666; 	J(JNZ(loc_161fe));	// 17686                  jnz     short loc_161FE ;~ 075B:0666
cs=0x75b;eip=0x000668; 	X(STOSB);	// 17687                  stosb ;~ 075B:0668
cs=0x75b;eip=0x000669; 	X(STOSB);	// 17688                  stosb ;~ 075B:0669
cs=0x75b;eip=0x00066a; 	T(OR(cl, cl));	// 17689                  or      cl, cl ;~ 075B:066A
cs=0x75b;eip=0x00066c; 	J(JNZ(loc_161ff));	// 17690                  jnz     short loc_161FF ;~ 075B:066C
loc_161fe:
	// 4745 
cs=0x75b;eip=0x00066e; 	X(STOSB);	// 17693                  stosb ;~ 075B:066E
loc_161ff:
	// 4746 
cs=0x75b;eip=0x00066f; 	T(SUB(bx, 2));	// 17697                  sub     bx, 2 ;~ 075B:066F
cs=0x75b;eip=0x000672; 	T(CMP(ch, 0x0A));	// 17698                  cmp     ch, 0Ah ;~ 075B:0672
cs=0x75b;eip=0x000675; 	J(JNZ(loc_16209));	// 17699                  jnz     short loc_16209 ;~ 075B:0675
cs=0x75b;eip=0x000677; 	T(XOR(ch, ch));	// 17700                  xor     ch, ch ;~ 075B:0677
loc_16209:
	// 4747 
cs=0x75b;eip=0x000679; 	T(INC(ch));	// 17703                  inc     ch ;~ 075B:0679
cs=0x75b;eip=0x00067b; 	J(JMP(loc_161d2));	// 17704                  jmp     short loc_161D2 ;~ 075B:067B
loc_1620d:
	// 4748 
cs=0x75b;eip=0x00067d; 	T(CLD);	// 17708                  cld ;~ 075B:067D
cs=0x75b;eip=0x00067e; 	X(POP(es));	// 17709                  pop     es ;~ 075B:067E
cs=0x75b;eip=0x00067f; 	X(POP(ds));	// 17711                  pop     ds ;~ 075B:067F
cs=0x75b;eip=0x000680; 	J(RETF(0));	// 17713                  retf ;~ 075B:0680

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_161b7: 	goto loc_161b7;
        case m2c::kloc_161c0: 	goto loc_161c0;
        case m2c::kloc_161c8: 	goto loc_161c8;
        case m2c::kloc_161d2: 	goto loc_161d2;
        case m2c::kloc_161f3: 	goto loc_161f3;
        case m2c::kloc_161fe: 	goto loc_161fe;
        case m2c::kloc_161ff: 	goto loc_161ff;
        case m2c::kloc_16209: 	goto loc_16209;
        case m2c::kloc_1620d: 	goto loc_1620d;
        case m2c::kseg004_615_proc: 	goto seg004_615_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1621b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1621b:
    _begin:
cs=0x75b;eip=0x00068b; 	T(bx = sp;);	// 17730                  mov     bx, sp ;~ 075B:068B
cs=0x75b;eip=0x00068d; 	T(MOV(ax, *(dw*)(raddr(ss,bx+4))));	// 17731                  mov     ax, ss:[bx+4] ;~ 075B:068D
cs=0x75b;eip=0x000691; 	T(MOV(bx, *(dw*)(raddr(ss,bx+6))));	// 17732                  mov     bx, ss:[bx+6] ;~ 075B:0691
cs=0x75b;eip=0x000695; 	T(SHL(bx, 1));	// 17733                  shl     bx, 1 ;~ 075B:0695
cs=0x75b;eip=0x000697; 	X(MOV(*(dw*)(raddr(cs,bx+0x681)), ax));	// 17734                  mov     cs:[bx+681h], ax ;~ 075B:0697
cs=0x75b;eip=0x00069c; 	J(RETF(0));	// 17735                  retf ;~ 075B:069C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1621b: 	goto sub_1621b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1622d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1622d:
    _begin:
cs=0x75b;eip=0x00069d; 	T(ax = seg_16213;);	// 17743                  mov     ax, cs:seg_16213 ;~ 075B:069D
cs=0x75b;eip=0x0006a1; 	X(word_15d2e = ax;);	// 17744                  mov     cs:word_15D2E, ax ;~ 075B:06A1
cs=0x75b;eip=0x0006a5; 	J(RETF(0));	// 17745                  retf ;~ 075B:06A5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1622d: 	goto sub_1622d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_16236(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_16236:
    _begin:
cs=0x75b;eip=0x0006a6; 	T(bx = sp;);	// 17754                  mov     bx, sp ;~ 075B:06A6
cs=0x75b;eip=0x0006a8; 	T(MOV(ax, *(dw*)(raddr(ss,bx+4))));	// 17755                  mov     ax, ss:[bx+4] ;~ 075B:06A8
cs=0x75b;eip=0x0006ac; 	X(PUSH(bx));	// 17756                  push    bx ;~ 075B:06AC
cs=0x75b;eip=0x0006ad; 	T(bx = ax;);	// 17757                  mov     bx, ax ;~ 075B:06AD
cs=0x75b;eip=0x0006af; 	T(SHL(bx, 1));	// 17758                  shl     bx, 1 ;~ 075B:06AF
cs=0x75b;eip=0x0006b1; 	T(MOV(ax, *(dw*)(raddr(cs,bx+0x681))));	// 17759                  mov     ax, cs:[bx+681h] ;~ 075B:06B1
cs=0x75b;eip=0x0006b6; 	X(word_15d2e = ax;);	// 17760                  mov     cs:word_15D2E, ax ;~ 075B:06B6
cs=0x75b;eip=0x0006ba; 	X(POP(bx));	// 17761                  pop     bx ;~ 075B:06BA
cs=0x75b;eip=0x0006bb; 	J(RETF(0));	// 17762                  retf ;~ 075B:06BB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_16236: 	goto sub_16236;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg004_6bc_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg004_6bc_proc:
    _begin:
cs=0x75b;eip=0x0006bc; 	J(RETF(0));	// 17766                  retf ;~ 075B:06BC
ret_75b_6bd:
	// 4749 
cs=0x75b;eip=0x0006bd; 	X(word_15d2e = ax;);	// 17768                  mov     cs:word_15D2E, ax ;~ 075B:06BD
cs=0x75b;eip=0x0006c1; 	J(RETF(0));	// 17769                  retf ;~ 075B:06C1
ret_75b_6c2:
	// 4750 
cs=0x75b;eip=0x0006c2; 	T(ax = word_15d2e;);	// 17771                  mov     ax, cs:word_15D2E ;~ 075B:06C2
cs=0x75b;eip=0x0006c6; 	J(RETF(0));	// 17772                  retf ;~ 075B:06C6
ret_75b_6c7:
	// 4751 
cs=0x75b;eip=0x0006c7; 	X(word_15d30 = 0;);	// 17774                  mov     cs:word_15D30, 0 ;~ 075B:06C7
cs=0x75b;eip=0x0006ce; 	J(RETF(0));	// 17775                  retf ;~ 075B:06CE
ret_75b_6cf:
	// 4752 
cs=0x75b;eip=0x0006cf; 	T(bx = sp;);	// 17777                  mov     bx, sp ;~ 075B:06CF
cs=0x75b;eip=0x0006d1; 	T(MOV(ax, *(dw*)(raddr(ss,bx+4))));	// 17778                  mov     ax, ss:[bx+4] ;~ 075B:06D1
cs=0x75b;eip=0x0006d5; 	X(word_15d30 = ax;);	// 17779                  mov     cs:word_15D30, ax ;~ 075B:06D5
cs=0x75b;eip=0x0006d9; 	J(RETF(0));	// 17780                  retf ;~ 075B:06D9
ret_75b_6da:
	// 4753 
cs=0x75b;eip=0x0006da; 	T(ax = 0x5580;);	// 17782                  mov     ax, 5580h ;~ 075B:06DA
cs=0x75b;eip=0x0006dd; 	J(RETF(0));	// 17783                  retf ;~ 075B:06DD
ret_75b_6de:
	// 4754 
cs=0x75b;eip=0x0006de; 	T(ax = 0x1950;);	// 17786                  mov     ax, 1950h ;~ 075B:06DE
cs=0x75b;eip=0x0006e1; 	J(RETF(0));	// 17787                  retf ;~ 075B:06E1
ret_75b_6e2:
	// 4755 
cs=0x75b;eip=0x0006e2; 	T(ax = word_15d30;);	// 17789                  mov     ax, cs:word_15D30 ;~ 075B:06E2
cs=0x75b;eip=0x0006e6; 	J(RETF(0));	// 17790                  retf ;~ 075B:06E6
ret_75b_6e7:
	// 4756 
cs=0x75b;eip=0x0006e7; 	T(bx = sp;);	// 17792                  mov     bx, sp ;~ 075B:06E7
cs=0x75b;eip=0x0006e9; 	T(MOV(ax, *(dw*)(raddr(ss,bx+4))));	// 17793                  mov     ax, ss:[bx+4] ;~ 075B:06E9
cs=0x75b;eip=0x0006ed; 	X(PUSH(ds));	// 17794                  push    ds ;~ 075B:06ED
cs=0x75b;eip=0x0006ee; 	T(dx = seg_offset(seg003););	// 17795                  mov     dx, seg seg003 ;~ 075B:06EE
cs=0x75b;eip=0x0006f1; 	T(ds = dx;);	// 17796                  mov     ds, dx ;~ 075B:06F1
cs=0x75b;eip=0x0006f3; 	X(word_13f5c = ax;);	// 17798                  mov     word_13F5C, ax ;~ 075B:06F3
cs=0x75b;eip=0x0006f6; 	X(POP(ds));	// 17799                  pop     ds ;~ 075B:06F6
cs=0x75b;eip=0x0006f7; 	J(RETF(0));	// 17801                  retf ;~ 075B:06F7
ret_75b_6f8:
	// 4757 
cs=0x75b;eip=0x0006f8; 	T(bx = sp;);	// 17803                  mov     bx, sp ;~ 075B:06F8
cs=0x75b;eip=0x0006fa; 	T(MOV(ax, *(dw*)(raddr(ss,bx+4))));	// 17804                  mov     ax, ss:[bx+4] ;~ 075B:06FA
cs=0x75b;eip=0x0006fe; 	X(PUSH(ds));	// 17805                  push    ds ;~ 075B:06FE
cs=0x75b;eip=0x0006ff; 	T(dx = seg_offset(seg003););	// 17806                  mov     dx, seg seg003 ;~ 075B:06FF
cs=0x75b;eip=0x000702; 	T(ds = dx;);	// 17807                  mov     ds, dx ;~ 075B:0702
cs=0x75b;eip=0x000704; 	X(word_13f5e = ax;);	// 17809                  mov     word_13F5E, ax ;~ 075B:0704
cs=0x75b;eip=0x000707; 	X(POP(ds));	// 17810                  pop     ds ;~ 075B:0707
cs=0x75b;eip=0x000708; 	J(RETF(0));	// 17812                  retf ;~ 075B:0708
ret_75b_709:
	// 4758 
cs=0x75b;eip=0x000709; 	T(al = byte_15d32;);	// 17814                  mov     al, cs:byte_15D32 ;~ 075B:0709
cs=0x75b;eip=0x00070d; 	J(RETF(0));	// 17815                  retf ;~ 075B:070D
ret_75b_70e:
	// 4759 
cs=0x75b;eip=0x00070e; 	T(bx = sp;);	// 17817                  mov     bx, sp ;~ 075B:070E
cs=0x75b;eip=0x000710; 	T(MOV(ax, *(dw*)(raddr(ss,bx+4))));	// 17818                  mov     ax, ss:[bx+4] ;~ 075B:0710
cs=0x75b;eip=0x000714; 	T(MOV(bx, *(dw*)(raddr(ss,bx+6))));	// 17819                  mov     bx, ss:[bx+6] ;~ 075B:0714
cs=0x75b;eip=0x000718; 	T(SHL(bx, 1));	// 17820                  shl     bx, 1 ;~ 075B:0718
cs=0x75b;eip=0x00071a; 	T(ADD(ax, *(dw*)(raddr(cs,bx+0x0E))));	// 17821                  add     ax, cs:[bx+0Eh] ;~ 075B:071A
cs=0x75b;eip=0x00071f; 	J(RETF(0));	// 17822                  retf ;~ 075B:071F
ret_75b_720:
	// 4760 
cs=0x75b;eip=0x000720; 	T(ax = 3;);	// 17824                  mov     ax, 3 ;~ 075B:0720
cs=0x75b;eip=0x000723; 	J(RETF(0));	// 17825                  retf ;~ 075B:0723
ret_75b_724:
	// 4761 
cs=0x75b;eip=0x000724; 	J(RETF(0));	// 17827                  retf ;~ 075B:0724
ret_75b_725:
	// 4762 
cs=0x75b;eip=0x000725; 	X(PUSH(bp));	// 17829                  push    bp ;~ 075B:0725
cs=0x75b;eip=0x000726; 	T(bp = sp;);	// 17830                  mov     bp, sp ;~ 075B:0726
cs=0x75b;eip=0x000728; 	X(PUSH(si));	// 17831                  push    si ;~ 075B:0728
cs=0x75b;eip=0x000729; 	X(PUSH(di));	// 17832                  push    di ;~ 075B:0729
cs=0x75b;eip=0x00072a; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 17833                  mov     bp, [bp+6] ;~ 075B:072A
cs=0x75b;eip=0x00072d; 	J(CALLF(sub_162c6,0));	// 17834                  call    sub_162C6 ;~ 075B:072D
cs=0x75b;eip=0x000732; 	X(POP(di));	// 17835                  pop     di ;~ 075B:0732
cs=0x75b;eip=0x000733; 	X(POP(si));	// 17836                  pop     si ;~ 075B:0733
cs=0x75b;eip=0x000734; 	X(POP(bp));	// 17837                  pop     bp ;~ 075B:0734
cs=0x75b;eip=0x000735; 	J(RETF(0));	// 17838                  retf ;~ 075B:0735

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_75b_6bd: 	goto ret_75b_6bd;
        case m2c::kret_75b_6c2: 	goto ret_75b_6c2;
        case m2c::kret_75b_6c7: 	goto ret_75b_6c7;
        case m2c::kret_75b_6cf: 	goto ret_75b_6cf;
        case m2c::kret_75b_6da: 	goto ret_75b_6da;
        case m2c::kret_75b_6de: 	goto ret_75b_6de;
        case m2c::kret_75b_6e2: 	goto ret_75b_6e2;
        case m2c::kret_75b_6e7: 	goto ret_75b_6e7;
        case m2c::kret_75b_6f8: 	goto ret_75b_6f8;
        case m2c::kret_75b_709: 	goto ret_75b_709;
        case m2c::kret_75b_70e: 	goto ret_75b_70e;
        case m2c::kret_75b_720: 	goto ret_75b_720;
        case m2c::kret_75b_724: 	goto ret_75b_724;
        case m2c::kret_75b_725: 	goto ret_75b_725;
        case m2c::kseg004_6bc_proc: 	goto seg004_6bc_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_162c6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_162c6:
    _begin:
cs=0x75b;eip=0x000736; 	X(PUSH(ds));	// 17844                  push    ds ;~ 075B:0736
cs=0x75b;eip=0x000737; 	X(PUSH(es));	// 17845                  push    es ;~ 075B:0737
cs=0x75b;eip=0x000738; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 17846                  push    word ptr [bp+0Ch] ;~ 075B:0738
cs=0x75b;eip=0x00073b; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0E))));	// 17847                  push    word ptr [bp+0Eh] ;~ 075B:073B
cs=0x75b;eip=0x00073e; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x14))));	// 17848                  mov     cx, [bp+14h] ;~ 075B:073E
cs=0x75b;eip=0x000741; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 17849                  mov     ax, [bp+8] ;~ 075B:0741
cs=0x75b;eip=0x000744; 	T(CMP(ax, cx));	// 17850                  cmp     ax, cx ;~ 075B:0744
cs=0x75b;eip=0x000746; 	J(JGE(loc_162f3));	// 17851                  jge     short loc_162F3 ;~ 075B:0746
cs=0x75b;eip=0x000748; 	T(bx = ax;);	// 17852                  mov     bx, ax ;~ 075B:0748
cs=0x75b;eip=0x00074a; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 17853                  add     bx, [bp+0Ch] ;~ 075B:074A
cs=0x75b;eip=0x00074d; 	T(DEC(bx));	// 17854                  dec     bx ;~ 075B:074D
cs=0x75b;eip=0x00074e; 	T(CMP(bx, cx));	// 17855                  cmp     bx, cx ;~ 075B:074E
cs=0x75b;eip=0x000750; 	J(JGE(loc_162e5));	// 17856                  jge     short loc_162E5 ;~ 075B:0750
cs=0x75b;eip=0x000752; 	J(JMP(loc_16351));	// 17857                  jmp     short loc_16351 ;~ 075B:0752
loc_162e5:
	// 4763 
cs=0x75b;eip=0x000755; 	T(SUB(cx, ax));	// 17863                  sub     cx, ax ;~ 075B:0755
cs=0x75b;eip=0x000757; 	X(ADD(*(dw*)(raddr(ss,bp+8)), cx));	// 17864                  add     [bp+8], cx ;~ 075B:0757
cs=0x75b;eip=0x00075a; 	X(ADD(*(dw*)(raddr(ss,bp+2)), cx));	// 17865                  add     [bp+2], cx ;~ 075B:075A
cs=0x75b;eip=0x00075d; 	X(SUB(*(dw*)(raddr(ss,bp+0x0C)), cx));	// 17866                  sub     [bp+0Ch], cx ;~ 075B:075D
cs=0x75b;eip=0x000760; 	J(JMP(loc_162f9));	// 17867                  jmp     short loc_162F9 ;~ 075B:0760
loc_162f3:
	// 4764 
cs=0x75b;eip=0x000763; 	T(bx = ax;);	// 17873                  mov     bx, ax ;~ 075B:0763
cs=0x75b;eip=0x000765; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 17874                  add     bx, [bp+0Ch] ;~ 075B:0765
cs=0x75b;eip=0x000768; 	T(DEC(bx));	// 17875                  dec     bx ;~ 075B:0768
loc_162f9:
	// 4765 
cs=0x75b;eip=0x000769; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x16))));	// 17878                  mov     cx, [bp+16h] ;~ 075B:0769
cs=0x75b;eip=0x00076c; 	T(CMP(bx, cx));	// 17879                  cmp     bx, cx ;~ 075B:076C
cs=0x75b;eip=0x00076e; 	J(JLE(loc_1630c));	// 17880                  jle     short loc_1630C ;~ 075B:076E
cs=0x75b;eip=0x000770; 	T(CMP(ax, cx));	// 17881                  cmp     ax, cx ;~ 075B:0770
cs=0x75b;eip=0x000772; 	J(JLE(loc_16307));	// 17882                  jle     short loc_16307 ;~ 075B:0772
cs=0x75b;eip=0x000774; 	J(JMP(loc_16351));	// 17883                  jmp     short loc_16351 ;~ 075B:0774
loc_16307:
	// 4766 
cs=0x75b;eip=0x000777; 	T(SUB(bx, cx));	// 17889                  sub     bx, cx ;~ 075B:0777
cs=0x75b;eip=0x000779; 	X(SUB(*(dw*)(raddr(ss,bp+0x0C)), bx));	// 17890                  sub     [bp+0Ch], bx ;~ 075B:0779
loc_1630c:
	// 4767 
cs=0x75b;eip=0x00077c; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x10))));	// 17893                  mov     cx, [bp+10h] ;~ 075B:077C
cs=0x75b;eip=0x00077f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 17894                  mov     ax, [bp+0Ah] ;~ 075B:077F
cs=0x75b;eip=0x000782; 	T(CMP(ax, cx));	// 17895                  cmp     ax, cx ;~ 075B:0782
cs=0x75b;eip=0x000784; 	J(JGE(loc_16331));	// 17896                  jge     short loc_16331 ;~ 075B:0784
cs=0x75b;eip=0x000786; 	T(bx = ax;);	// 17897                  mov     bx, ax ;~ 075B:0786
cs=0x75b;eip=0x000788; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0E))));	// 17898                  add     bx, [bp+0Eh] ;~ 075B:0788
cs=0x75b;eip=0x00078b; 	T(DEC(bx));	// 17899                  dec     bx ;~ 075B:078B
cs=0x75b;eip=0x00078c; 	T(CMP(bx, cx));	// 17900                  cmp     bx, cx ;~ 075B:078C
cs=0x75b;eip=0x00078e; 	J(JGE(loc_16323));	// 17901                  jge     short loc_16323 ;~ 075B:078E
cs=0x75b;eip=0x000790; 	J(JMP(loc_16351));	// 17902                  jmp     short loc_16351 ;~ 075B:0790
loc_16323:
	// 4768 
cs=0x75b;eip=0x000793; 	T(SUB(cx, ax));	// 17908                  sub     cx, ax ;~ 075B:0793
cs=0x75b;eip=0x000795; 	X(ADD(*(dw*)(raddr(ss,bp+0x0A)), cx));	// 17909                  add     [bp+0Ah], cx ;~ 075B:0795
cs=0x75b;eip=0x000798; 	X(ADD(*(dw*)(raddr(ss,bp+4)), cx));	// 17910                  add     [bp+4], cx ;~ 075B:0798
cs=0x75b;eip=0x00079b; 	X(SUB(*(dw*)(raddr(ss,bp+0x0E)), cx));	// 17911                  sub     [bp+0Eh], cx ;~ 075B:079B
cs=0x75b;eip=0x00079e; 	J(JMP(loc_16337));	// 17912                  jmp     short loc_16337 ;~ 075B:079E
loc_16331:
	// 4769 
cs=0x75b;eip=0x0007a1; 	T(bx = ax;);	// 17918                  mov     bx, ax ;~ 075B:07A1
cs=0x75b;eip=0x0007a3; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0E))));	// 17919                  add     bx, [bp+0Eh] ;~ 075B:07A3
cs=0x75b;eip=0x0007a6; 	T(DEC(bx));	// 17920                  dec     bx ;~ 075B:07A6
loc_16337:
	// 4770 
cs=0x75b;eip=0x0007a7; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x12))));	// 17923                  mov     cx, [bp+12h] ;~ 075B:07A7
cs=0x75b;eip=0x0007aa; 	T(CMP(bx, cx));	// 17924                  cmp     bx, cx ;~ 075B:07AA
cs=0x75b;eip=0x0007ac; 	J(JLE(loc_1634a));	// 17925                  jle     short loc_1634A ;~ 075B:07AC
cs=0x75b;eip=0x0007ae; 	T(CMP(ax, cx));	// 17926                  cmp     ax, cx ;~ 075B:07AE
cs=0x75b;eip=0x0007b0; 	J(JLE(loc_16345));	// 17927                  jle     short loc_16345 ;~ 075B:07B0
cs=0x75b;eip=0x0007b2; 	J(JMP(loc_16351));	// 17928                  jmp     short loc_16351 ;~ 075B:07B2
loc_16345:
	// 4771 
cs=0x75b;eip=0x0007b5; 	T(SUB(bx, cx));	// 17934                  sub     bx, cx ;~ 075B:07B5
cs=0x75b;eip=0x0007b7; 	X(SUB(*(dw*)(raddr(ss,bp+0x0E)), bx));	// 17935                  sub     [bp+0Eh], bx ;~ 075B:07B7
loc_1634a:
	// 4772 
cs=0x75b;eip=0x0007ba; 	X(PUSH(bp));	// 17938                  push    bp ;~ 075B:07BA
cs=0x75b;eip=0x0007bb; 	J(CALLF(sub_1636b,0));	// 17939                  call    sub_1636B ;~ 075B:07BB
cs=0x75b;eip=0x0007c0; 	X(POP(bp));	// 17940                  pop     bp ;~ 075B:07C0
loc_16351:
	// 4773 
cs=0x75b;eip=0x0007c1; 	X(POP(*(dw*)(raddr(ss,bp+0x0E))));	// 17944                  pop     word ptr [bp+0Eh] ;~ 075B:07C1
cs=0x75b;eip=0x0007c4; 	X(POP(*(dw*)(raddr(ss,bp+0x0C))));	// 17945                  pop     word ptr [bp+0Ch] ;~ 075B:07C4
cs=0x75b;eip=0x0007c7; 	X(POP(es));	// 17946                  pop     es ;~ 075B:07C7
cs=0x75b;eip=0x0007c8; 	X(POP(ds));	// 17948                  pop     ds ;~ 075B:07C8
cs=0x75b;eip=0x0007c9; 	J(RETF(0));	// 17949                  retf ;~ 075B:07C9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_162e5: 	goto loc_162e5;
        case m2c::kloc_162f3: 	goto loc_162f3;
        case m2c::kloc_162f9: 	goto loc_162f9;
        case m2c::kloc_16307: 	goto loc_16307;
        case m2c::kloc_1630c: 	goto loc_1630c;
        case m2c::kloc_16323: 	goto loc_16323;
        case m2c::kloc_16331: 	goto loc_16331;
        case m2c::kloc_16337: 	goto loc_16337;
        case m2c::kloc_16345: 	goto loc_16345;
        case m2c::kloc_1634a: 	goto loc_1634a;
        case m2c::kloc_16351: 	goto loc_16351;
        case m2c::ksub_162c6: 	goto sub_162c6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg004_7ca_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg004_7ca_proc:
    _begin:
cs=0x75b;eip=0x0007ca; 	X(PUSH(bp));	// 17953                  push    bp ;~ 075B:07CA
cs=0x75b;eip=0x0007cb; 	T(bp = sp;);	// 17954                  mov     bp, sp ;~ 075B:07CB
cs=0x75b;eip=0x0007cd; 	X(PUSH(si));	// 17955                  push    si ;~ 075B:07CD
cs=0x75b;eip=0x0007ce; 	X(PUSH(di));	// 17956                  push    di ;~ 075B:07CE
cs=0x75b;eip=0x0007cf; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 17957                  mov     bp, [bp+6] ;~ 075B:07CF
cs=0x75b;eip=0x0007d2; 	J(CALLF(sub_1636b,0));	// 17958                  call    sub_1636B ;~ 075B:07D2
cs=0x75b;eip=0x0007d7; 	X(POP(di));	// 17959                  pop     di ;~ 075B:07D7
cs=0x75b;eip=0x0007d8; 	X(POP(si));	// 17960                  pop     si ;~ 075B:07D8
cs=0x75b;eip=0x0007d9; 	X(POP(bp));	// 17961                  pop     bp ;~ 075B:07D9
cs=0x75b;eip=0x0007da; 	J(RETF(0));	// 17962                  retf ;~ 075B:07DA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg004_7ca_proc: 	goto seg004_7ca_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1636b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1636b:
    _begin:
cs=0x75b;eip=0x0007db; 	X(PUSH(ds));	// 17969                  push    ds ;~ 075B:07DB
cs=0x75b;eip=0x0007dc; 	X(PUSH(es));	// 17970                  push    es ;~ 075B:07DC
cs=0x75b;eip=0x0007dd; 	X(PUSH(bp));	// 17971                  push    bp ;~ 075B:07DD
cs=0x75b;eip=0x0007de; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 17972                  mov     ax, [bp+0] ;~ 075B:07DE
cs=0x75b;eip=0x0007e1; 	T(ds = ax;);	// 17973                  mov     ds, ax ;~ 075B:07E1
cs=0x75b;eip=0x0007e3; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 17975                  mov     di, [bp+6] ;~ 075B:07E3
cs=0x75b;eip=0x0007e6; 	T(SHL(di, 1));	// 17976                  shl     di, 1 ;~ 075B:07E6
cs=0x75b;eip=0x0007e8; 	T(MOV(es, *(dw*)(raddr(cs,di+0x681))));	// 17977                  mov     es, word ptr cs:[di+681h] ;~ 075B:07E8
cs=0x75b;eip=0x0007ed; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 17978                  mov     bx, [bp+0Ch] ;~ 075B:07ED
cs=0x75b;eip=0x0007f0; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0E))));	// 17979                  mov     cx, [bp+0Eh] ;~ 075B:07F0
cs=0x75b;eip=0x0007f3; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 17980                  mov     dx, [bp+8] ;~ 075B:07F3
cs=0x75b;eip=0x0007f6; 	T(MOV(si, *(dw*)(raddr(ss,bp+4))));	// 17981                  mov     si, [bp+4] ;~ 075B:07F6
cs=0x75b;eip=0x0007f9; 	T(SHL(si, 1));	// 17982                  shl     si, 1 ;~ 075B:07F9
cs=0x75b;eip=0x0007fb; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0A))));	// 17983                  mov     di, [bp+0Ah] ;~ 075B:07FB
cs=0x75b;eip=0x0007fe; 	T(SHL(di, 1));	// 17984                  shl     di, 1 ;~ 075B:07FE
cs=0x75b;eip=0x000800; 	T(MOV(bp, *(dw*)(raddr(ss,bp+2))));	// 17985                  mov     bp, [bp+2] ;~ 075B:0800
loc_16393:
	// 4774 
cs=0x75b;eip=0x000803; 	X(PUSH(si));	// 17988                  push    si ;~ 075B:0803
cs=0x75b;eip=0x000804; 	X(PUSH(di));	// 17989                  push    di ;~ 075B:0804
cs=0x75b;eip=0x000805; 	X(PUSH(cx));	// 17990                  push    cx ;~ 075B:0805
cs=0x75b;eip=0x000806; 	T(cx = bx;);	// 17991                  mov     cx, bx ;~ 075B:0806
cs=0x75b;eip=0x000808; 	T(MOV(si, *(dw*)(raddr(cs,si+0x0E))));	// 17992                  mov     si, cs:[si+0Eh] ;~ 075B:0808
cs=0x75b;eip=0x00080d; 	T(ADD(si, bp));	// 17993                  add     si, bp ;~ 075B:080D
cs=0x75b;eip=0x00080f; 	T(MOV(di, *(dw*)(raddr(cs,di+0x0E))));	// 17994                  mov     di, cs:[di+0Eh] ;~ 075B:080F
cs=0x75b;eip=0x000814; 	T(ADD(di, dx));	// 17995                  add     di, dx ;~ 075B:0814
loc_163a6:
	// 4775 
cs=0x75b;eip=0x000816; 	T(LODSB);	// 17998                  lodsb ;~ 075B:0816
cs=0x75b;eip=0x000817; 	T(OR(al, al));	// 17999                  or      al, al ;~ 075B:0817
cs=0x75b;eip=0x000819; 	J(JZ(loc_163ae));	// 18000                  jz      short loc_163AE ;~ 075B:0819
cs=0x75b;eip=0x00081b; 	X(MOV(*(raddr(es,di)), al));	// 18001                  mov     es:[di], al ;~ 075B:081B
loc_163ae:
	// 4776 
cs=0x75b;eip=0x00081e; 	T(INC(di));	// 18004                  inc     di ;~ 075B:081E
cs=0x75b;eip=0x00081f; 	J(LOOP(loc_163a6));	// 18005                  loop    loc_163A6 ;~ 075B:081F
cs=0x75b;eip=0x000821; 	X(POP(cx));	// 18006                  pop     cx ;~ 075B:0821
cs=0x75b;eip=0x000822; 	X(POP(di));	// 18007                  pop     di ;~ 075B:0822
cs=0x75b;eip=0x000823; 	X(POP(si));	// 18008                  pop     si ;~ 075B:0823
cs=0x75b;eip=0x000824; 	T(ADD(di, 2));	// 18009                  add     di, 2 ;~ 075B:0824
cs=0x75b;eip=0x000827; 	T(ADD(si, 2));	// 18010                  add     si, 2 ;~ 075B:0827
cs=0x75b;eip=0x00082a; 	J(LOOP(loc_16393));	// 18011                  loop    loc_16393 ;~ 075B:082A
cs=0x75b;eip=0x00082c; 	X(POP(bp));	// 18012                  pop     bp ;~ 075B:082C
cs=0x75b;eip=0x00082d; 	X(POP(es));	// 18013                  pop     es ;~ 075B:082D
cs=0x75b;eip=0x00082e; 	X(POP(ds));	// 18014                  pop     ds ;~ 075B:082E
cs=0x75b;eip=0x00082f; 	J(RETF(0));	// 18016                  retf ;~ 075B:082F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_16393: 	goto loc_16393;
        case m2c::kloc_163a6: 	goto loc_163a6;
        case m2c::kloc_163ae: 	goto loc_163ae;
        case m2c::ksub_1636b: 	goto sub_1636b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg004_830_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg004_830_proc:
    _begin:
cs=0x75b;eip=0x000830; 	X(PUSH(ds));	// 18020                  push    ds ;~ 075B:0830
cs=0x75b;eip=0x000831; 	X(PUSH(es));	// 18021                  push    es ;~ 075B:0831
cs=0x75b;eip=0x000832; 	T(dx = seg_offset(seg003););	// 18022                  mov     dx, seg seg003 ;~ 075B:0832
cs=0x75b;eip=0x000835; 	T(ds = dx;);	// 18023                  mov     ds, dx ;~ 075B:0835
cs=0x75b;eip=0x000837; 	T(es = word_15d2e;);	// 18025                  mov     es, cs:word_15D2E ;~ 075B:0837
cs=0x75b;eip=0x00083c; 	T(OR(ax, ax));	// 18026                  or      ax, ax ;~ 075B:083C
cs=0x75b;eip=0x00083e; 	J(JS(loc_1641c));	// 18027                  js      short loc_1641C ;~ 075B:083E
cs=0x75b;eip=0x000840; 	T(dx = ax;);	// 18028                  mov     dx, ax ;~ 075B:0840
cs=0x75b;eip=0x000842; 	T(SHL(dx, 1));	// 18029                  shl     dx, 1 ;~ 075B:0842
cs=0x75b;eip=0x000844; 	T(si = cx;);	// 18030                  mov     si, cx ;~ 075B:0844
cs=0x75b;eip=0x000846; 	T(SHL(si, 1));	// 18031                  shl     si, 1 ;~ 075B:0846
cs=0x75b;eip=0x000848; 	T(al = byte_15a0a;);	// 18032                  mov     al, byte_15A0A ;~ 075B:0848
cs=0x75b;eip=0x00084b; 	T(ah = al;);	// 18033                  mov     ah, al ;~ 075B:084B
loc_163dd:
	// 4777 
cs=0x75b;eip=0x00084d; 	T(MOV(bp, *(dw*)(raddr(ss,bx+si))));	// 18036                  mov     bp, ss:[bx+si] ;~ 075B:084D
cs=0x75b;eip=0x000850; 	T(MOV(cx, *(dw*)(raddr(ss,bx+si+0x1B8))));	// 18037                  mov     cx, ss:[bx+si+1B8h] ;~ 075B:0850
cs=0x75b;eip=0x000855; 	T(CMP(cx, bp));	// 18038                  cmp     cx, bp ;~ 075B:0855
cs=0x75b;eip=0x000857; 	J(JC(loc_16415));	// 18039                  jb      short loc_16415 ;~ 075B:0857
cs=0x75b;eip=0x000859; 	J(JA(loc_163f5));	// 18040                  ja      short loc_163F5 ;~ 075B:0859
cs=0x75b;eip=0x00085b; 	T(OR(cx, cx));	// 18042                  or      cx, cx ;~ 075B:085B
cs=0x75b;eip=0x00085d; 	J(JZ(loc_16415));	// 18043                  jz      short loc_16415 ;~ 075B:085D
cs=0x75b;eip=0x00085f; 	T(CMP(cx, 0x13F));	// 18044                  cmp     cx, 13Fh ;~ 075B:085F
cs=0x75b;eip=0x000863; 	J(JZ(loc_16415));	// 18045                  jz      short loc_16415 ;~ 075B:0863
loc_163f5:
	// 4778 
cs=0x75b;eip=0x000865; 	T(SUB(cx, bp));	// 18048                  sub     cx, bp ;~ 075B:0865
cs=0x75b;eip=0x000867; 	T(INC(cx));	// 18049                  inc     cx ;~ 075B:0867
cs=0x75b;eip=0x000868; 	T(MOV(di, *(dw*)(raddr(cs,si+0x0E))));	// 18050                  mov     di, cs:[si+0Eh] ;~ 075B:0868
cs=0x75b;eip=0x00086d; 	T(ADD(di, word_15d30));	// 18051                  add     di, cs:word_15D30 ;~ 075B:086D
cs=0x75b;eip=0x000872; 	T(ADD(di, bp));	// 18052                  add     di, bp ;~ 075B:0872
cs=0x75b;eip=0x000874; 	T(TEST(di, 1));	// 18053                  test    di, 1 ;~ 075B:0874
cs=0x75b;eip=0x000878; 	J(JZ(loc_1640e));	// 18054                  jz      short loc_1640E ;~ 075B:0878
cs=0x75b;eip=0x00087a; 	X(STOSB);	// 18055                  stosb ;~ 075B:087A
cs=0x75b;eip=0x00087b; 	T(DEC(cx));	// 18056                  dec     cx ;~ 075B:087B
cs=0x75b;eip=0x00087c; 	J(JZ(loc_16415));	// 18057                  jz      short loc_16415 ;~ 075B:087C
loc_1640e:
	// 4779 
cs=0x75b;eip=0x00087e; 	T(SHR(cx, 1));	// 18060                  shr     cx, 1 ;~ 075B:087E
	// 18061                  rep stosw ;~ 075B:0880
cs=0x75b;eip=0x000880; 	X(	REP STOSW);	// 18061                  rep stosw ;~ 075B:0880
cs=0x75b;eip=0x000882; 	J(JNC(loc_16415));	// 18062                  jnb     short loc_16415 ;~ 075B:0882
cs=0x75b;eip=0x000884; 	X(STOSB);	// 18063                  stosb ;~ 075B:0884
loc_16415:
	// 4780 
cs=0x75b;eip=0x000885; 	T(SUB(si, 2));	// 18067                  sub     si, 2 ;~ 075B:0885
cs=0x75b;eip=0x000888; 	T(CMP(si, dx));	// 18068                  cmp     si, dx ;~ 075B:0888
cs=0x75b;eip=0x00088a; 	J(JGE(loc_163dd));	// 18069                  jge     short loc_163DD ;~ 075B:088A
loc_1641c:
	// 4781 
cs=0x75b;eip=0x00088c; 	X(POP(es));	// 18072                  pop     es ;~ 075B:088C
cs=0x75b;eip=0x00088d; 	X(POP(ds));	// 18074                  pop     ds ;~ 075B:088D
cs=0x75b;eip=0x00088e; 	J(RETF(0));	// 18076                  retf ;~ 075B:088E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_163dd: 	goto loc_163dd;
        case m2c::kloc_163f5: 	goto loc_163f5;
        case m2c::kloc_1640e: 	goto loc_1640e;
        case m2c::kloc_16415: 	goto loc_16415;
        case m2c::kloc_1641c: 	goto loc_1641c;
        case m2c::kseg004_830_proc: 	goto seg004_830_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1641f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1641f:
    _begin:
cs=0x75b;eip=0x00088f; 	T(cx = 0x7D00;);	// 18082                  mov     cx, 7D00h ;~ 075B:088F
cs=0x75b;eip=0x000892; 	T(XOR(ax, ax));	// 18083                  xor     ax, ax ;~ 075B:0892
cs=0x75b;eip=0x000894; 	T(XOR(di, di));	// 18084                  xor     di, di ;~ 075B:0894
	// 18085                  rep stosw ;~ 075B:0896
cs=0x75b;eip=0x000896; 	X(	REP STOSW);	// 18085                  rep stosw ;~ 075B:0896
cs=0x75b;eip=0x000898; 	J(RETF(0));	// 18086                  retf ;~ 075B:0898

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1641f: 	goto sub_1641f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg004_899_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg004_899_proc:
    _begin:
cs=0x75b;eip=0x000899; 	X(PUSH(es));	// 18090                  push    es ;~ 075B:0899
cs=0x75b;eip=0x00089a; 	X(PUSH(di));	// 18091                  push    di ;~ 075B:089A
cs=0x75b;eip=0x00089b; 	T(ax = 0x0A000;);	// 18092                  mov     ax, 0A000h ;~ 075B:089B
cs=0x75b;eip=0x00089e; 	T(es = ax;);	// 18093                  mov     es, ax ;~ 075B:089E
cs=0x75b;eip=0x0008a0; 	J(CALLF(sub_1641f,0));	// 18095                  call    sub_1641F ;~ 075B:08A0
cs=0x75b;eip=0x0008a5; 	X(POP(di));	// 18096                  pop     di ;~ 075B:08A5
cs=0x75b;eip=0x0008a6; 	X(POP(es));	// 18097                  pop     es ;~ 075B:08A6
cs=0x75b;eip=0x0008a7; 	J(RETF(0));	// 18099                  retf ;~ 075B:08A7
ret_75b_8a8:
	// 4782 
cs=0x75b;eip=0x0008a8; 	X(PUSH(bp));	// 18101                  push    bp ;~ 075B:08A8
cs=0x75b;eip=0x0008a9; 	T(bp = sp;);	// 18102                  mov     bp, sp ;~ 075B:08A9
cs=0x75b;eip=0x0008ab; 	X(PUSH(ds));	// 18103                  push    ds ;~ 075B:08AB
cs=0x75b;eip=0x0008ac; 	X(PUSH(es));	// 18104                  push    es ;~ 075B:08AC
cs=0x75b;eip=0x0008ad; 	X(PUSH(si));	// 18105                  push    si ;~ 075B:08AD
cs=0x75b;eip=0x0008ae; 	X(PUSH(di));	// 18106                  push    di ;~ 075B:08AE
cs=0x75b;eip=0x0008af; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 18107                  mov     bx, [bp+6] ;~ 075B:08AF
cs=0x75b;eip=0x0008b2; 	T(SHL(bx, 1));	// 18108                  shl     bx, 1 ;~ 075B:08B2
cs=0x75b;eip=0x0008b4; 	T(MOV(ds, *(dw*)(raddr(cs,bx+0x681))));	// 18109                  mov     ds, word ptr cs:[bx+681h] ;~ 075B:08B4
cs=0x75b;eip=0x0008b9; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0A))));	// 18110                  mov     si, [bp+0Ah] ;~ 075B:08B9
cs=0x75b;eip=0x0008bc; 	T(SHL(si, 1));	// 18111                  shl     si, 1 ;~ 075B:08BC
cs=0x75b;eip=0x0008be; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 18112                  mov     bx, [bp+0Ch] ;~ 075B:08BE
cs=0x75b;eip=0x0008c1; 	T(SHL(bx, 1));	// 18113                  shl     bx, 1 ;~ 075B:08C1
cs=0x75b;eip=0x0008c3; 	T(MOV(es, *(dw*)(raddr(cs,bx+0x681))));	// 18114                  mov     es, word ptr cs:[bx+681h] ;~ 075B:08C3
cs=0x75b;eip=0x0008c8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x0E))));	// 18115                  mov     dx, [bp+0Eh] ;~ 075B:08C8
cs=0x75b;eip=0x0008cb; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x10))));	// 18116                  mov     di, [bp+10h] ;~ 075B:08CB
cs=0x75b;eip=0x0008ce; 	T(SHL(di, 1));	// 18117                  shl     di, 1 ;~ 075B:08CE
cs=0x75b;eip=0x0008d0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x12))));	// 18118                  mov     bx, [bp+12h] ;~ 075B:08D0
cs=0x75b;eip=0x0008d3; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x14))));	// 18119                  mov     cx, [bp+14h] ;~ 075B:08D3
cs=0x75b;eip=0x0008d6; 	T(MOV(bp, *(dw*)(raddr(ss,bp+8))));	// 18120                  mov     bp, [bp+8] ;~ 075B:08D6
loc_16469:
	// 4783 
cs=0x75b;eip=0x0008d9; 	X(PUSH(si));	// 18123                  push    si ;~ 075B:08D9
cs=0x75b;eip=0x0008da; 	X(PUSH(di));	// 18124                  push    di ;~ 075B:08DA
cs=0x75b;eip=0x0008db; 	X(PUSH(cx));	// 18125                  push    cx ;~ 075B:08DB
cs=0x75b;eip=0x0008dc; 	T(MOV(si, *(dw*)(raddr(cs,si+0x0E))));	// 18126                  mov     si, cs:[si+0Eh] ;~ 075B:08DC
cs=0x75b;eip=0x0008e1; 	T(ADD(si, bp));	// 18127                  add     si, bp ;~ 075B:08E1
cs=0x75b;eip=0x0008e3; 	T(MOV(di, *(dw*)(raddr(cs,di+0x0E))));	// 18128                  mov     di, cs:[di+0Eh] ;~ 075B:08E3
cs=0x75b;eip=0x0008e8; 	T(ADD(di, dx));	// 18129                  add     di, dx ;~ 075B:08E8
cs=0x75b;eip=0x0008ea; 	T(cx = bx;);	// 18130                  mov     cx, bx ;~ 075B:08EA
	// 18131                  rep movsb ;~ 075B:08EC
cs=0x75b;eip=0x0008ec; 	X(	REP MOVSB);	// 18131                  rep movsb ;~ 075B:08EC
cs=0x75b;eip=0x0008ee; 	X(POP(cx));	// 18132                  pop     cx ;~ 075B:08EE
cs=0x75b;eip=0x0008ef; 	X(POP(di));	// 18133                  pop     di ;~ 075B:08EF
cs=0x75b;eip=0x0008f0; 	X(POP(si));	// 18134                  pop     si ;~ 075B:08F0
cs=0x75b;eip=0x0008f1; 	T(ADD(di, 2));	// 18135                  add     di, 2 ;~ 075B:08F1
cs=0x75b;eip=0x0008f4; 	T(ADD(si, 2));	// 18136                  add     si, 2 ;~ 075B:08F4
cs=0x75b;eip=0x0008f7; 	J(LOOP(loc_16469));	// 18137                  loop    loc_16469 ;~ 075B:08F7
cs=0x75b;eip=0x0008f9; 	X(POP(di));	// 18138                  pop     di ;~ 075B:08F9
cs=0x75b;eip=0x0008fa; 	X(POP(si));	// 18139                  pop     si ;~ 075B:08FA
cs=0x75b;eip=0x0008fb; 	X(POP(es));	// 18140                  pop     es ;~ 075B:08FB
cs=0x75b;eip=0x0008fc; 	X(POP(ds));	// 18141                  pop     ds ;~ 075B:08FC
cs=0x75b;eip=0x0008fd; 	X(POP(bp));	// 18142                  pop     bp ;~ 075B:08FD
cs=0x75b;eip=0x0008fe; 	J(RETF(0));	// 18143                  retf ;~ 075B:08FE
ret_75b_8ff:
	// 4784 
cs=0x75b;eip=0x0008ff; 	X(PUSH(bp));	// 18146                  push    bp ;~ 075B:08FF
cs=0x75b;eip=0x000900; 	T(bp = sp;);	// 18147                  mov     bp, sp ;~ 075B:0900
cs=0x75b;eip=0x000902; 	X(PUSH(ds));	// 18148                  push    ds ;~ 075B:0902
cs=0x75b;eip=0x000903; 	X(PUSH(es));	// 18149                  push    es ;~ 075B:0903
cs=0x75b;eip=0x000904; 	X(PUSH(si));	// 18150                  push    si ;~ 075B:0904
cs=0x75b;eip=0x000905; 	X(PUSH(di));	// 18151                  push    di ;~ 075B:0905
cs=0x75b;eip=0x000906; 	T(dx = seg_offset(seg003););	// 18152                  mov     dx, seg seg003 ;~ 075B:0906
cs=0x75b;eip=0x000909; 	T(ds = dx;);	// 18153                  mov     ds, dx ;~ 075B:0909
cs=0x75b;eip=0x00090b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 18155                  mov     bx, [bp+6] ;~ 075B:090B
cs=0x75b;eip=0x00090e; 	T(MOV(bx, *(dw*)(raddr(ss,bx))));	// 18156                  mov     bx, ss:[bx] ;~ 075B:090E
cs=0x75b;eip=0x000911; 	T(SHL(bx, 1));	// 18157                  shl     bx, 1 ;~ 075B:0911
cs=0x75b;eip=0x000913; 	T(MOV(es, *(dw*)(raddr(cs,bx+0x681))));	// 18158                  mov     es, word ptr cs:[bx+681h] ;~ 075B:0913
cs=0x75b;eip=0x000918; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0A))));	// 18160                  mov     si, [bp+0Ah] ;~ 075B:0918
cs=0x75b;eip=0x00091b; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0E))));	// 18161                  mov     cx, [bp+0Eh] ;~ 075B:091B
cs=0x75b;eip=0x00091e; 	T(SUB(cx, si));	// 18162                  sub     cx, si ;~ 075B:091E
cs=0x75b;eip=0x000920; 	T(INC(cx));	// 18163                  inc     cx ;~ 075B:0920
cs=0x75b;eip=0x000921; 	T(SHL(si, 1));	// 18164                  shl     si, 1 ;~ 075B:0921
cs=0x75b;eip=0x000923; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 18165                  mov     di, [bp+8] ;~ 075B:0923
cs=0x75b;eip=0x000926; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 18166                  mov     bx, [bp+0Ch] ;~ 075B:0926
cs=0x75b;eip=0x000929; 	T(SUB(bx, di));	// 18167                  sub     bx, di ;~ 075B:0929
cs=0x75b;eip=0x00092b; 	T(INC(bx));	// 18168                  inc     bx ;~ 075B:092B
cs=0x75b;eip=0x00092c; 	T(MOV(ah, *(raddr(ss,bp+0x10))));	// 18169                  mov     ah, [bp+10h] ;~ 075B:092C
cs=0x75b;eip=0x00092f; 	T(MOV(al, *(raddr(ss,bp+0x12))));	// 18170                  mov     al, [bp+12h] ;~ 075B:092F
loc_164c2:
	// 4785 
cs=0x75b;eip=0x000932; 	X(PUSH(cx));	// 18173                  push    cx ;~ 075B:0932
cs=0x75b;eip=0x000933; 	X(PUSH(di));	// 18174                  push    di ;~ 075B:0933
cs=0x75b;eip=0x000934; 	T(ADD(di, *(dw*)(raddr(cs,si+0x0E))));	// 18175                  add     di, cs:[si+0Eh] ;~ 075B:0934
cs=0x75b;eip=0x000939; 	T(cx = bx;);	// 18176                  mov     cx, bx ;~ 075B:0939
loc_164cb:
	// 4786 
cs=0x75b;eip=0x00093b; 	T(CMP(ah, *(raddr(es,di))));	// 18179                  cmp     ah, es:[di] ;~ 075B:093B
cs=0x75b;eip=0x00093e; 	J(JNZ(loc_164d3));	// 18180                  jnz     short loc_164D3 ;~ 075B:093E
cs=0x75b;eip=0x000940; 	X(MOV(*(raddr(es,di)), al));	// 18181                  mov     es:[di], al ;~ 075B:0940
loc_164d3:
	// 4787 
cs=0x75b;eip=0x000943; 	T(INC(di));	// 18184                  inc     di ;~ 075B:0943
cs=0x75b;eip=0x000944; 	J(LOOP(loc_164cb));	// 18185                  loop    loc_164CB ;~ 075B:0944
cs=0x75b;eip=0x000946; 	X(POP(di));	// 18186                  pop     di ;~ 075B:0946
cs=0x75b;eip=0x000947; 	X(POP(cx));	// 18187                  pop     cx ;~ 075B:0947
cs=0x75b;eip=0x000948; 	T(ADD(si, 2));	// 18188                  add     si, 2 ;~ 075B:0948
cs=0x75b;eip=0x00094b; 	J(LOOP(loc_164c2));	// 18189                  loop    loc_164C2 ;~ 075B:094B
cs=0x75b;eip=0x00094d; 	X(POP(di));	// 18190                  pop     di ;~ 075B:094D
cs=0x75b;eip=0x00094e; 	X(POP(si));	// 18191                  pop     si ;~ 075B:094E
cs=0x75b;eip=0x00094f; 	X(POP(es));	// 18192                  pop     es ;~ 075B:094F
cs=0x75b;eip=0x000950; 	X(POP(ds));	// 18194                  pop     ds ;~ 075B:0950
cs=0x75b;eip=0x000951; 	X(POP(bp));	// 18196                  pop     bp ;~ 075B:0951
cs=0x75b;eip=0x000952; 	J(RETF(0));	// 18197                  retf ;~ 075B:0952
ret_75b_953:
	// 4788 
cs=0x75b;eip=0x000953; 	T(bx = sp;);	// 18199                  mov     bx, sp ;~ 075B:0953
cs=0x75b;eip=0x000955; 	X(PUSH(ds));	// 18200                  push    ds ;~ 075B:0955
cs=0x75b;eip=0x000956; 	X(PUSH(es));	// 18201                  push    es ;~ 075B:0956
cs=0x75b;eip=0x000957; 	T(MOV(ds, *(dw*)(raddr(ss,bx+4))));	// 18202                  mov     ds, word ptr ss:[bx+4] ;~ 075B:0957
cs=0x75b;eip=0x00095b; 	T(es = word_15d2e;);	// 18203                  mov     es, cs:word_15D2E ;~ 075B:095B
cs=0x75b;eip=0x000960; 	J(JMP(loc_16505));	// 18205                  jmp     short loc_16505 ;~ 075B:0960
ret_75b_963:
	// 4789 
cs=0x75b;eip=0x000963; 	X(PUSH(ds));	// 18209                  push    ds ;~ 075B:0963
cs=0x75b;eip=0x000964; 	X(PUSH(es));	// 18210                  push    es ;~ 075B:0964
cs=0x75b;eip=0x000965; 	X(byte_15d32 = 1;);	// 18211                  mov     cs:byte_15D32, 1 ;~ 075B:0965
cs=0x75b;eip=0x00096b; 	T(ds = seg_16213;);	// 18212                  mov     ds, cs:seg_16213 ;~ 075B:096B
cs=0x75b;eip=0x000970; 	T(es = word_16211;);	// 18214                  mov     es, cs:word_16211 ;~ 075B:0970
loc_16505:
	// 4790 
cs=0x75b;eip=0x000975; 	X(PUSH(si));	// 18218                  push    si ;~ 075B:0975
cs=0x75b;eip=0x000976; 	X(PUSH(di));	// 18219                  push    di ;~ 075B:0976
cs=0x75b;eip=0x000977; 	T(XOR(si, si));	// 18220                  xor     si, si ;~ 075B:0977
cs=0x75b;eip=0x000979; 	T(XOR(di, di));	// 18221                  xor     di, di ;~ 075B:0979
cs=0x75b;eip=0x00097b; 	T(cx = 0x7D00;);	// 18222                  mov     cx, 7D00h ;~ 075B:097B
	// 18223                  rep movsw ;~ 075B:097E
cs=0x75b;eip=0x00097e; 	X(	REP MOVSW);	// 18223                  rep movsw ;~ 075B:097E
cs=0x75b;eip=0x000980; 	X(POP(di));	// 18224                  pop     di ;~ 075B:0980
cs=0x75b;eip=0x000981; 	X(POP(si));	// 18225                  pop     si ;~ 075B:0981
cs=0x75b;eip=0x000982; 	X(POP(es));	// 18226                  pop     es ;~ 075B:0982
cs=0x75b;eip=0x000983; 	X(POP(ds));	// 18228                  pop     ds ;~ 075B:0983
cs=0x75b;eip=0x000984; 	J(RETF(0));	// 18230                  retf ;~ 075B:0984
ret_75b_985:
	// 4791 
cs=0x75b;eip=0x000985; 	T(bx = sp;);	// 18232                  mov     bx, sp ;~ 075B:0985
cs=0x75b;eip=0x000987; 	X(PUSH(ds));	// 18233                  push    ds ;~ 075B:0987
cs=0x75b;eip=0x000988; 	X(PUSH(es));	// 18234                  push    es ;~ 075B:0988
cs=0x75b;eip=0x000989; 	T(MOV(ds, *(dw*)(raddr(ss,bx+4))));	// 18235                  mov     ds, word ptr ss:[bx+4] ;~ 075B:0989
cs=0x75b;eip=0x00098d; 	T(es = word_15d2e;);	// 18236                  mov     es, cs:word_15D2E ;~ 075B:098D
cs=0x75b;eip=0x000992; 	T(bx = 1;);	// 18237                  mov     bx, 1 ;~ 075B:0992
cs=0x75b;eip=0x000995; 	T(cx = 0x0FA00;);	// 18238                  mov     cx, 0FA00h ;~ 075B:0995
loc_16528:
	// 4792 
cs=0x75b;eip=0x000998; 	T(SHR(bx, 1));	// 18242                  shr     bx, 1 ;~ 075B:0998
cs=0x75b;eip=0x00099a; 	J(JNC(loc_16530));	// 18243                  jnb     short loc_16530 ;~ 075B:099A
cs=0x75b;eip=0x00099c; 	T(XOR(bx, 0x0B400));	// 18244                  xor     bx, 0B400h ;~ 075B:099C
loc_16530:
	// 4793 
cs=0x75b;eip=0x0009a0; 	T(CMP(bx, 0x0FA00));	// 18247                  cmp     bx, 0FA00h ;~ 075B:09A0
cs=0x75b;eip=0x0009a4; 	J(JA(loc_16528));	// 18248                  ja      short loc_16528 ;~ 075B:09A4
cs=0x75b;eip=0x0009a6; 	T(DEC(bx));	// 18249                  dec     bx ;~ 075B:09A6
cs=0x75b;eip=0x0009a7; 	T(MOV(al, *(raddr(ds,bx))));	// 18250                  mov     al, [bx] ;~ 075B:09A7
cs=0x75b;eip=0x0009a9; 	X(MOV(*(raddr(es,bx)), al));	// 18251                  mov     es:[bx], al ;~ 075B:09A9
cs=0x75b;eip=0x0009ac; 	T(INC(bx));	// 18252                  inc     bx ;~ 075B:09AC
cs=0x75b;eip=0x0009ad; 	J(LOOP(loc_16528));	// 18253                  loop    loc_16528 ;~ 075B:09AD
cs=0x75b;eip=0x0009af; 	X(POP(es));	// 18254                  pop     es ;~ 075B:09AF
cs=0x75b;eip=0x0009b0; 	X(POP(ds));	// 18255                  pop     ds ;~ 075B:09B0
cs=0x75b;eip=0x0009b1; 	J(RETF(0));	// 18256                  retf ;~ 075B:09B1
ret_75b_9b3:
	// 4794 
cs=0x75b;eip=0x0009b3; 	T(bx = sp;);	// 18262                  mov     bx, sp ;~ 075B:09B3
cs=0x75b;eip=0x0009b5; 	T(MOV(al, *(raddr(ss,bx+4))));	// 18263                  mov     al, ss:[bx+4] ;~ 075B:09B5
cs=0x75b;eip=0x0009b9; 	X(byte_16542 = al;);	// 18264                  mov     cs:byte_16542, al ;~ 075B:09B9
cs=0x75b;eip=0x0009bd; 	J(RETF(0));	// 18265                  retf ;~ 075B:09BD
ret_75b_9be:
	// 4795 
cs=0x75b;eip=0x0009be; 	X(PUSH(ds));	// 18267                  push    ds ;~ 075B:09BE
cs=0x75b;eip=0x0009bf; 	X(PUSH(si));	// 18268                  push    si ;~ 075B:09BF
cs=0x75b;eip=0x0009c0; 	T(ax = seg_offset(seg003););	// 18269                  mov     ax, seg seg003 ;~ 075B:09C0
cs=0x75b;eip=0x0009c3; 	T(ds = ax;);	// 18270                  mov     ds, ax ;~ 075B:09C3
cs=0x75b;eip=0x0009c5; 	T(ax = *(dw*)((byte_15b58)+4););	// 18272                  mov     ax, word ptr byte_15B58+4 ;~ 075B:09C5
cs=0x75b;eip=0x0009c8; 	T(SHL(ax, 1));	// 18273                  shl     ax, 1 ;~ 075B:09C8
cs=0x75b;eip=0x0009ca; 	T(SHL(ax, 1));	// 18274                  shl     ax, 1 ;~ 075B:09CA
cs=0x75b;eip=0x0009cc; 	T(ADD(ax, *(dw*)((byte_15b58)+4)));	// 18275                  add     ax, word ptr byte_15B58+4 ;~ 075B:09CC
cs=0x75b;eip=0x0009d0; 	T(INC(ax));	// 18276                  inc     ax ;~ 075B:09D0
cs=0x75b;eip=0x0009d1; 	X(*(dw*)((byte_15b58)+4) = ax;);	// 18277                  mov     word ptr byte_15B58+4, ax ;~ 075B:09D1
cs=0x75b;eip=0x0009d4; 	T(bl = al;);	// 18278                  mov     bl, al ;~ 075B:09D4
cs=0x75b;eip=0x0009d6; 	T(AND(bx, 3));	// 18279                  and     bx, 3 ;~ 075B:09D6
cs=0x75b;eip=0x0009d9; 	T(MOV(bl, *(raddr(ds,bx+0x1CC8))));	// 18280                  mov     bl, [bx+1CC8h] ;~ 075B:09D9
cs=0x75b;eip=0x0009dd; 	T(si = 0x1B85;);	// 18281                  mov     si, 1B85h ;~ 075B:09DD
cs=0x75b;eip=0x0009e0; 	T(ADD(si, bx));	// 18282                  add     si, bx ;~ 075B:09E0
cs=0x75b;eip=0x0009e2; 	T(ADD(si, bx));	// 18283                  add     si, bx ;~ 075B:09E2
cs=0x75b;eip=0x0009e4; 	T(ADD(si, bx));	// 18284                  add     si, bx ;~ 075B:09E4
cs=0x75b;eip=0x0009e6; 	T(LODSB);	// 18285                  lodsb ;~ 075B:09E6
cs=0x75b;eip=0x0009e7; 	T(ch = al;);	// 18286                  mov     ch, al ;~ 075B:09E7
cs=0x75b;eip=0x0009e9; 	T(LODSB);	// 18287                  lodsb ;~ 075B:09E9
cs=0x75b;eip=0x0009ea; 	T(cl = al;);	// 18288                  mov     cl, al ;~ 075B:09EA
cs=0x75b;eip=0x0009ec; 	T(LODSB);	// 18289                  lodsb ;~ 075B:09EC
cs=0x75b;eip=0x0009ed; 	T(bh = al;);	// 18290                  mov     bh, al ;~ 075B:09ED
cs=0x75b;eip=0x0009ef; 	T(bl = 0x8D;);	// 18291                  mov     bl, 8Dh ;~ 075B:09EF
loc_16581:
	// 4796 
cs=0x75b;eip=0x0009f1; 	T(dx = 0x3C8;);	// 18294                  mov     dx, 3C8h ;~ 075B:09F1
cs=0x75b;eip=0x0009f4; 	T(al = bl;);	// 18295                  mov     al, bl ;~ 075B:09F4
cs=0x75b;eip=0x0009f6; 	S(OUT(dx, al));	// 18296                  out     dx, al ;~ 075B:09F6
cs=0x75b;eip=0x0009f7; 	T(INC(dx));	// 18297                  inc     dx ;~ 075B:09F7
cs=0x75b;eip=0x0009f8; 	T(al = ch;);	// 18298                  mov     al, ch ;~ 075B:09F8
cs=0x75b;eip=0x0009fa; 	S(OUT(dx, al));	// 18299                  out     dx, al ;~ 075B:09FA
cs=0x75b;eip=0x0009fb; 	T(al = cl;);	// 18300                  mov     al, cl ;~ 075B:09FB
cs=0x75b;eip=0x0009fd; 	S(OUT(dx, al));	// 18301                  out     dx, al ;~ 075B:09FD
cs=0x75b;eip=0x0009fe; 	T(al = bh;);	// 18302                  mov     al, bh ;~ 075B:09FE
cs=0x75b;eip=0x000a00; 	S(OUT(dx, al));	// 18303                  out     dx, al ;~ 075B:0A00
cs=0x75b;eip=0x000a01; 	T(ADD(bl, 0x10));	// 18304                  add     bl, 10h ;~ 075B:0A01
cs=0x75b;eip=0x000a04; 	T(CMP(bl, 0x1D));	// 18305                  cmp     bl, 1Dh ;~ 075B:0A04
cs=0x75b;eip=0x000a07; 	J(JNZ(loc_16581));	// 18306                  jnz     short loc_16581 ;~ 075B:0A07
cs=0x75b;eip=0x000a09; 	T(CMP(byte_16542, 0));	// 18307                  cmp     cs:byte_16542, 0 ;~ 075B:0A09
cs=0x75b;eip=0x000a0f; 	J(JZ(loc_165b3));	// 18308                  jz      short loc_165B3 ;~ 075B:0A0F
cs=0x75b;eip=0x000a11; 	T(AND(ah, 3));	// 18309                  and     ah, 3 ;~ 075B:0A11
cs=0x75b;eip=0x000a14; 	X(DEC(byte_16542));	// 18310                  dec     cs:byte_16542 ;~ 075B:0A14
cs=0x75b;eip=0x000a19; 	J(JNZ(loc_165ad));	// 18311                  jnz     short loc_165AD ;~ 075B:0A19
cs=0x75b;eip=0x000a1b; 	T(XOR(ah, ah));	// 18312                  xor     ah, ah ;~ 075B:0A1B
loc_165ad:
	// 4797 
cs=0x75b;eip=0x000a1d; 	T(dx = 0x3D4;);	// 18315                  mov     dx, 3D4h ;~ 075B:0A1D
cs=0x75b;eip=0x000a20; 	T(al = 0x0D;);	// 18316                  mov     al, 0Dh ;~ 075B:0A20
cs=0x75b;eip=0x000a22; 	S(OUT(dx, ax));	// 18317                  out     dx, ax          ; Video: CRT cntrlr addr ;~ 075B:0A22
loc_165b3:
	// 4798 
cs=0x75b;eip=0x000a23; 	X(POP(si));	// 18321                  pop     si ;~ 075B:0A23
cs=0x75b;eip=0x000a24; 	X(POP(ds));	// 18322                  pop     ds ;~ 075B:0A24
cs=0x75b;eip=0x000a25; 	J(RETF(0));	// 18324                  retf ;~ 075B:0A25
ret_75b_a26:
	// 4799 
cs=0x75b;eip=0x000a26; 	T(SHL(di, 1));	// 18326                  shl     di, 1 ;~ 075B:0A26
cs=0x75b;eip=0x000a28; 	T(MOV(ax, *(dw*)(raddr(cs,di+0x0E))));	// 18327                  mov     ax, cs:[di+0Eh] ;~ 075B:0A28
cs=0x75b;eip=0x000a2d; 	J(RETF(0));	// 18328                  retf ;~ 075B:0A2D
ret_75b_a2e:
	// 4800 
cs=0x75b;eip=0x000a2e; 	T(bx = sp;);	// 18330                  mov     bx, sp ;~ 075B:0A2E
cs=0x75b;eip=0x000a30; 	T(MOV(ax, *(dw*)(raddr(ss,bx+6))));	// 18331                  mov     ax, ss:[bx+6] ;~ 075B:0A30
cs=0x75b;eip=0x000a34; 	T(MOV(bx, *(dw*)(raddr(ss,bx+4))));	// 18332                  mov     bx, ss:[bx+4] ;~ 075B:0A34
cs=0x75b;eip=0x000a38; 	T(SHL(bx, 1));	// 18333                  shl     bx, 1 ;~ 075B:0A38
cs=0x75b;eip=0x000a3a; 	X(MOV(*(dw*)(raddr(cs,bx+0x681)), ax));	// 18334                  mov     cs:[bx+681h], ax ;~ 075B:0A3A
cs=0x75b;eip=0x000a3f; 	J(RETF(0));	// 18335                  retf ;~ 075B:0A3F
ret_75b_a40:
	// 4801 
cs=0x75b;eip=0x000a40; 	J(RETF(0));	// 18337                  retf ;~ 075B:0A40
ret_75b_a41:
	// 4802 
cs=0x75b;eip=0x000a41; 	T(SHL(si, 1));	// 18339                  shl     si, 1 ;~ 075B:0A41
cs=0x75b;eip=0x000a43; 	T(MOV(es, *(dw*)(raddr(cs,si+0x681))));	// 18340                  mov     es, word ptr cs:[si+681h] ;~ 075B:0A43
cs=0x75b;eip=0x000a48; 	J(RETF(0));	// 18342                  retf ;~ 075B:0A48
ret_75b_a49:
	// 4803 
cs=0x75b;eip=0x000a49; 	J(RETF(0));	// 18344                  retf ;~ 075B:0A49
ret_75b_a4a:
	// 4804 
cs=0x75b;eip=0x000a4a; 	J(RETF(0));	// 18346                  retf ;~ 075B:0A4A
ret_75b_a4b:
	// 4805 
cs=0x75b;eip=0x000a4b; 	J(RETF(0));	// 18348                  retf ;~ 075B:0A4B
ret_75b_a4c:
	// 4806 
cs=0x75b;eip=0x000a4c; 	X(PUSH(ds));	// 18350                  push    ds ;~ 075B:0A4C
cs=0x75b;eip=0x000a4d; 	T(ax = ss;);	// 18351                  mov     ax, ss ;~ 075B:0A4D
cs=0x75b;eip=0x000a4f; 	T(ds = ax;);	// 18352                  mov     ds, ax ;~ 075B:0A4F
cs=0x75b;eip=0x000a51; 	T(si = bp;);	// 18353                  mov     si, bp ;~ 075B:0A51
cs=0x75b;eip=0x000a53; 	T(cx = 0x0A0;);	// 18354                  mov     cx, 0A0h ;~ 075B:0A53
	// 18355                  rep movsw ;~ 075B:0A56
cs=0x75b;eip=0x000a56; 	X(	REP MOVSW);	// 18355                  rep movsw ;~ 075B:0A56
cs=0x75b;eip=0x000a58; 	X(POP(ds));	// 18356                  pop     ds ;~ 075B:0A58
cs=0x75b;eip=0x000a59; 	J(RETF(0));	// 18357                  retf ;~ 075B:0A59
ret_75b_a5a:
	// 4807 
cs=0x75b;eip=0x000a5a; 	T(ADC(al, *(raddr(ds,bx+si))));	// 18359                  adc     al, [bx+si] ;~ 075B:0A5A
cs=0x75b;eip=0x000a5c; __disp=unk_166e1;
	J(return __dispatch_call(__disp, _state););	// 18360                  jmp     near ptr unk_166E1 ;~ 075B:0A5C
ret_75b_a5f:
	// 4808 
cs=0x75b;eip=0x000a5f; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0A))));	// 18362                  mov     ax, [di+0Ah] ;~ 075B:0A5F
cs=0x75b;eip=0x000a62; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 18363                  mov     [bp-4], ax ;~ 075B:0A62
cs=0x75b;eip=0x000a65; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0C))));	// 18364                  mov     ax, [di+0Ch] ;~ 075B:0A65
cs=0x75b;eip=0x000a68; 	X(MOV(*(dw*)(raddr(ss,bp-6)), ax));	// 18365                  mov     [bp-6], ax ;~ 075B:0A68
cs=0x75b;eip=0x000a6b; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), si));	// 18366                  mov     [di+0Ah], si ;~ 075B:0A6B
cs=0x75b;eip=0x000a6e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0C))));	// 18367                  mov     ax, [bp+0Ch] ;~ 075B:0A6E
cs=0x75b;eip=0x000a71; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), ax));	// 18368                  mov     [di+0Ch], ax ;~ 075B:0A71
cs=0x75b;eip=0x000a74; 	T(MOV(bx, *(dw*)(raddr(ds,di+0x16))));	// 18369                  mov     bx, [di+16h] ;~ 075B:0A74
cs=0x75b;eip=0x000a77; 	T(MOV(si, *(dw*)(raddr(ds,bx+0x1A))));	// 18370                  mov     si, [bx+1Ah] ;~ 075B:0A77
cs=0x75b;eip=0x000a7a; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 18371                  mov     ax, [si+2] ;~ 075B:0A7A
cs=0x75b;eip=0x000a7d; 	T(CMP(ax, *(dw*)(raddr(ss,bp-4))));	// 18372                  cmp     ax, [bp-4] ;~ 075B:0A7D
cs=0x75b;eip=0x000a80; 	J(JGE(loc_16631));	// 18373                  jge     short loc_16631 ;~ 075B:0A80
cs=0x75b;eip=0x000a82; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 18374                  mov     ax, [bp+8] ;~ 075B:0A82
cs=0x75b;eip=0x000a85; 	T(MOV(dx, *(dw*)(raddr(ss,bp+6))));	// 18375                  mov     dx, [bp+6] ;~ 075B:0A85
cs=0x75b;eip=0x000a88; 	T(ADD(dx, *(dw*)(raddr(ds,si+0x12))));	// 18376                  add     dx, [si+12h] ;~ 075B:0A88
cs=0x75b;eip=0x000a8b; 	T(ADC(ax, 0));	// 18377                  adc     ax, 0 ;~ 075B:0A8B
cs=0x75b;eip=0x000a8e; 	T(MOV(bx, *(dw*)(raddr(ds,si+0x12))));	// 18378                  mov     bx, [si+12h] ;~ 075B:0A8E
cs=0x75b;eip=0x000a91; 	T(XOR(cx, cx));	// 18379                  xor     cx, cx ;~ 075B:0A91
cs=0x75b;eip=0x000a93; 	T(NOT(bx));	// 18380                  not     bx ;~ 075B:0A93
cs=0x75b;eip=0x000a95; 	T(NOT(cx));	// 18381                  not     cx ;~ 075B:0A95
cs=0x75b;eip=0x000a97; 	T(AND(dx, bx));	// 18382                  and     dx, bx ;~ 075B:0A97
cs=0x75b;eip=0x000a99; 	T(AND(ax, cx));	// 18383                  and     ax, cx ;~ 075B:0A99
cs=0x75b;eip=0x000a9b; 	X(SUB(*(dw*)(raddr(ds,si+0x0E)), dx));	// 18384                  sub     [si+0Eh], dx ;~ 075B:0A9B
cs=0x75b;eip=0x000a9e; 	X(SBB(*(dw*)(raddr(ds,si+0x10)), ax));	// 18385                  sbb     [si+10h], ax ;~ 075B:0A9E
loc_16631:
	// 4809 
cs=0x75b;eip=0x000aa1; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0A))));	// 18388                  mov     ax, [di+0Ah] ;~ 075B:0AA1
cs=0x75b;eip=0x000aa4; 	T(CMP(ax, *(dw*)(raddr(ds,si+2))));	// 18389                  cmp     ax, [si+2] ;~ 075B:0AA4
cs=0x75b;eip=0x000aa7; 	J(JLE(loc_16658));	// 18390                  jle     short loc_16658 ;~ 075B:0AA7
cs=0x75b;eip=0x000aa9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 18391                  mov     ax, [bp+8] ;~ 075B:0AA9
cs=0x75b;eip=0x000aac; 	T(MOV(dx, *(dw*)(raddr(ss,bp+6))));	// 18392                  mov     dx, [bp+6] ;~ 075B:0AAC
cs=0x75b;eip=0x000aaf; 	T(ADD(dx, *(dw*)(raddr(ds,si+0x12))));	// 18393                  add     dx, [si+12h] ;~ 075B:0AAF
cs=0x75b;eip=0x000ab2; 	T(ADC(ax, 0));	// 18394                  adc     ax, 0 ;~ 075B:0AB2
cs=0x75b;eip=0x000ab5; 	T(MOV(bx, *(dw*)(raddr(ds,si+0x12))));	// 18395                  mov     bx, [si+12h] ;~ 075B:0AB5
cs=0x75b;eip=0x000ab8; 	T(XOR(cx, cx));	// 18396                  xor     cx, cx ;~ 075B:0AB8
cs=0x75b;eip=0x000aba; 	T(NOT(bx));	// 18397                  not     bx ;~ 075B:0ABA
cs=0x75b;eip=0x000abc; 	T(NOT(cx));	// 18398                  not     cx ;~ 075B:0ABC
cs=0x75b;eip=0x000abe; 	T(AND(dx, bx));	// 18399                  and     dx, bx ;~ 075B:0ABE
cs=0x75b;eip=0x000ac0; 	T(AND(ax, cx));	// 18400                  and     ax, cx ;~ 075B:0AC0
cs=0x75b;eip=0x000ac2; 	X(ADD(*(dw*)(raddr(ds,si+0x0E)), dx));	// 18401                  add     [si+0Eh], dx ;~ 075B:0AC2
cs=0x75b;eip=0x000ac5; 	X(ADC(*(dw*)(raddr(ds,si+0x10)), ax));	// 18402                  adc     [si+10h], ax ;~ 075B:0AC5
loc_16658:
	// 4810 
cs=0x75b;eip=0x000ac8; 	X(PUSH(0x0F));	// 18405                  push    0Fh ;~ 075B:0AC8
cs=0x75b;eip=0x000aca; 	J(CALL(__dispatch_call,unk_25563));	// 18406                  call    near ptr unk_25563 ;~ 075B:0ACA
cs=0x75b;eip=0x000acd; 	X(POP(cx));	// 18407                  pop     cx ;~ 075B:0ACD
cs=0x75b;eip=0x000ace; 	X(PUSH(*(dw*)(raddr(ss,bp+0x4D))));	// 18408                  push    word ptr [bp+4Dh] ;~ 075B:0ACE
cs=0x75b;eip=0x000ad1; 	T(LOCK);	// 18409                  lock jmp word ptr [bx+si+760Fh] ;~ 075B:0AD1
cs=0x75b;eip=0x000ad1; __disp=*(dw*)(raddr(ds,bx+si+0x760F));
	J(return __dispatch_call(__disp, _state););	// 18409                  lock jmp word ptr [bx+si+760Fh] ;~ 075B:0AD1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_16469: 	goto loc_16469;
        case m2c::kloc_164c2: 	goto loc_164c2;
        case m2c::kloc_164cb: 	goto loc_164cb;
        case m2c::kloc_164d3: 	goto loc_164d3;
        case m2c::kloc_16505: 	goto loc_16505;
        case m2c::kloc_16528: 	goto loc_16528;
        case m2c::kloc_16530: 	goto loc_16530;
        case m2c::kloc_16581: 	goto loc_16581;
        case m2c::kloc_165ad: 	goto loc_165ad;
        case m2c::kloc_165b3: 	goto loc_165b3;
        case m2c::kloc_16631: 	goto loc_16631;
        case m2c::kloc_16658: 	goto loc_16658;
        case m2c::kret_75b_8a8: 	goto ret_75b_8a8;
        case m2c::kret_75b_8ff: 	goto ret_75b_8ff;
        case m2c::kret_75b_953: 	goto ret_75b_953;
        case m2c::kret_75b_963: 	goto ret_75b_963;
        case m2c::kret_75b_985: 	goto ret_75b_985;
        case m2c::kret_75b_9b3: 	goto ret_75b_9b3;
        case m2c::kret_75b_9be: 	goto ret_75b_9be;
        case m2c::kret_75b_a26: 	goto ret_75b_a26;
        case m2c::kret_75b_a2e: 	goto ret_75b_a2e;
        case m2c::kret_75b_a40: 	goto ret_75b_a40;
        case m2c::kret_75b_a41: 	goto ret_75b_a41;
        case m2c::kret_75b_a49: 	goto ret_75b_a49;
        case m2c::kret_75b_a4a: 	goto ret_75b_a4a;
        case m2c::kret_75b_a4b: 	goto ret_75b_a4b;
        case m2c::kret_75b_a4c: 	goto ret_75b_a4c;
        case m2c::kret_75b_a5a: 	goto ret_75b_a5a;
        case m2c::kret_75b_a5f: 	goto ret_75b_a5f;
        case m2c::kseg004_899_proc: 	goto seg004_899_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

