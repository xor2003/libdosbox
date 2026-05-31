/* THIS IS GENERATED FILE */

        
#include "detroit.exe.h"

                

 bool seg004_2_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg004_2_proc:
    _begin:
cs=0x8a6;eip=0x000002; 	T(ax = 0x13;);	// 18871                  mov     ax, 13h ;~ 08A6:0002
cs=0x8a6;eip=0x000005; 	S(_INT(0x10));	// 18872                  int     10h             ; - VIDEO - SET VIDEO MODE ;~ 08A6:0005
cs=0x8a6;eip=0x000007; 	T(dx = 0x3C4;);	// 18874                  mov     dx, 3C4h ;~ 08A6:0007
cs=0x8a6;eip=0x00000a; 	T(al = 4;);	// 18875                  mov     al, 4 ;~ 08A6:000A
cs=0x8a6;eip=0x00000c; 	S(OUT(dx, al));	// 18876                  out     dx, al          ; EGA: sequencer address reg ;~ 08A6:000C
cs=0x8a6;eip=0x00000d; 	T(INC(dx));	// 18881                  inc     dx ;~ 08A6:000D
cs=0x8a6;eip=0x00000e; 	S(IN(al, dx));	// 18882                  in      al, dx          ; EGA port: sequencer data register ;~ 08A6:000E
cs=0x8a6;eip=0x00000f; 	T(AND(al, 0x0F7));	// 18883                  and     al, 0F7h ;~ 08A6:000F
cs=0x8a6;eip=0x000011; 	T(OR(al, 4));	// 18884                  or      al, 4 ;~ 08A6:0011
cs=0x8a6;eip=0x000013; 	S(OUT(dx, al));	// 18885                  out     dx, al          ; EGA port: sequencer data register ;~ 08A6:0013
cs=0x8a6;eip=0x000014; 	T(dx = 0x3CE;);	// 18886                  mov     dx, 3CEh ;~ 08A6:0014
cs=0x8a6;eip=0x000017; 	T(al = 5;);	// 18887                  mov     al, 5 ;~ 08A6:0017
cs=0x8a6;eip=0x000019; 	S(OUT(dx, al));	// 18888                  out     dx, al          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0019
cs=0x8a6;eip=0x00001a; 	T(INC(dx));	// 18895                  inc     dx ;~ 08A6:001A
cs=0x8a6;eip=0x00001b; 	S(IN(al, dx));	// 18896                  in      al, dx          ; EGA port: graphics controller data register ;~ 08A6:001B
cs=0x8a6;eip=0x00001c; 	T(AND(al, 0x0EF));	// 18897                  and     al, 0EFh ;~ 08A6:001C
cs=0x8a6;eip=0x00001e; 	S(OUT(dx, al));	// 18898                  out     dx, al          ; EGA port: graphics controller data register ;~ 08A6:001E
cs=0x8a6;eip=0x00001f; 	T(DEC(dx));	// 18899                  dec     dx ;~ 08A6:001F
cs=0x8a6;eip=0x000020; 	T(al = 6;);	// 18900                  mov     al, 6 ;~ 08A6:0020
cs=0x8a6;eip=0x000022; 	S(OUT(dx, al));	// 18901                  out     dx, al          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0022
cs=0x8a6;eip=0x000023; 	T(INC(dx));	// 18908                  inc     dx ;~ 08A6:0023
cs=0x8a6;eip=0x000024; 	S(IN(al, dx));	// 18909                  in      al, dx          ; EGA port: graphics controller data register ;~ 08A6:0024
cs=0x8a6;eip=0x000025; 	T(AND(al, 0x0FD));	// 18910                  and     al, 0FDh ;~ 08A6:0025
cs=0x8a6;eip=0x000027; 	S(OUT(dx, al));	// 18911                  out     dx, al          ; EGA port: graphics controller data register ;~ 08A6:0027
cs=0x8a6;eip=0x000028; 	T(dx = 0x3D4;);	// 18912                  mov     dx, 3D4h ;~ 08A6:0028
cs=0x8a6;eip=0x00002b; 	T(al = 9;);	// 18913                  mov     al, 9 ;~ 08A6:002B
cs=0x8a6;eip=0x00002d; 	S(OUT(dx, al));	// 18914                  out     dx, al          ; Video: CRT cntrlr addr ;~ 08A6:002D
cs=0x8a6;eip=0x00002e; 	T(INC(dx));	// 18916                  inc     dx ;~ 08A6:002E
cs=0x8a6;eip=0x00002f; 	S(IN(al, dx));	// 18917                  in      al, dx          ; Video: CRT controller internal registers ;~ 08A6:002F
cs=0x8a6;eip=0x000030; 	T(AND(al, 0x0E0));	// 18918                  and     al, 0E0h ;~ 08A6:0030
cs=0x8a6;eip=0x000032; 	S(OUT(dx, al));	// 18919                  out     dx, al          ; Video: CRT controller internal registers ;~ 08A6:0032
cs=0x8a6;eip=0x000033; 	T(DEC(dx));	// 18920                  dec     dx ;~ 08A6:0033
cs=0x8a6;eip=0x000034; 	T(al = 0x14;);	// 18921                  mov     al, 14h ;~ 08A6:0034
cs=0x8a6;eip=0x000036; 	S(OUT(dx, al));	// 18922                  out     dx, al          ; Video: CRT cntrlr addr ;~ 08A6:0036
cs=0x8a6;eip=0x000037; 	T(INC(dx));	// 18924                  inc     dx ;~ 08A6:0037
cs=0x8a6;eip=0x000038; 	S(IN(al, dx));	// 18925                  in      al, dx          ; Video: CRT controller internal registers ;~ 08A6:0038
cs=0x8a6;eip=0x000039; 	T(AND(al, 0x0BF));	// 18926                  and     al, 0BFh ;~ 08A6:0039
cs=0x8a6;eip=0x00003b; 	S(OUT(dx, al));	// 18927                  out     dx, al          ; Video: CRT controller internal registers ;~ 08A6:003B
cs=0x8a6;eip=0x00003c; 	T(DEC(dx));	// 18928                  dec     dx ;~ 08A6:003C
cs=0x8a6;eip=0x00003d; 	T(al = 0x17;);	// 18929                  mov     al, 17h ;~ 08A6:003D
cs=0x8a6;eip=0x00003f; 	S(OUT(dx, al));	// 18930                  out     dx, al          ; Video: CRT cntrlr addr ;~ 08A6:003F
cs=0x8a6;eip=0x000040; 	T(INC(dx));	// 18940                  inc     dx ;~ 08A6:0040
cs=0x8a6;eip=0x000041; 	S(IN(al, dx));	// 18941                  in      al, dx          ; Video: CRT controller internal registers ;~ 08A6:0041
cs=0x8a6;eip=0x000042; 	T(OR(al, 0x40));	// 18942                  or      al, 40h ;~ 08A6:0042
cs=0x8a6;eip=0x000044; 	S(OUT(dx, al));	// 18943                  out     dx, al          ; Video: CRT controller internal registers ;~ 08A6:0044
cs=0x8a6;eip=0x000045; 	J(RETF(0));	// 18944                  retf ;~ 08A6:0045

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg004_2_proc: 	goto seg004_2_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_17086(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_17086:
    _begin:
#undef arg_0
#define arg_0 6
	// 18953 arg_0           = word ptr  6 ;~ 08A6:0046
cs=0x8a6;eip=0x000046; 	X(ENTER(0, 0));	// 18955                  enter   0, 0 ;~ 08A6:0046
cs=0x8a6;eip=0x00004a; 	X(PUSH(ax));	// 18956                  push    ax ;~ 08A6:004A
cs=0x8a6;eip=0x00004b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 18957                  mov     ax, [bp+arg_0] ;~ 08A6:004B
cs=0x8a6;eip=0x00004e; 	X(PUSH(ax));	// 18958                  push    ax ;~ 08A6:004E
cs=0x8a6;eip=0x00004f; 	T(dx = 0x3D4;);	// 18959                  mov     dx, 3D4h ;~ 08A6:004F
cs=0x8a6;eip=0x000052; 	T(ah = al;);	// 18960                  mov     ah, al ;~ 08A6:0052
cs=0x8a6;eip=0x000054; 	T(al = 0x0D;);	// 18961                  mov     al, 0Dh ;~ 08A6:0054
cs=0x8a6;eip=0x000056; 	S(OUT(dx, ax));	// 18962                  out     dx, ax          ; Video: CRT cntrlr addr ;~ 08A6:0056
cs=0x8a6;eip=0x000057; 	X(POP(ax));	// 18964                  pop     ax ;~ 08A6:0057
cs=0x8a6;eip=0x000058; 	T(al = ah;);	// 18965                  mov     al, ah ;~ 08A6:0058
cs=0x8a6;eip=0x00005a; 	T(dx = 0x3D4;);	// 18966                  mov     dx, 3D4h ;~ 08A6:005A
cs=0x8a6;eip=0x00005d; 	T(ah = al;);	// 18967                  mov     ah, al ;~ 08A6:005D
cs=0x8a6;eip=0x00005f; 	T(al = 0x0C;);	// 18968                  mov     al, 0Ch ;~ 08A6:005F
cs=0x8a6;eip=0x000061; 	S(OUT(dx, ax));	// 18969                  out     dx, ax          ; Video: CRT cntrlr addr ;~ 08A6:0061
cs=0x8a6;eip=0x000062; 	X(POP(ax));	// 18971                  pop     ax ;~ 08A6:0062
cs=0x8a6;eip=0x000063; 	T(LEAVE);	// 18972                  leave ;~ 08A6:0063
cs=0x8a6;eip=0x000064; 	J(RETF(0));	// 18973                  retf ;~ 08A6:0064

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_17086: 	goto sub_17086;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_170a5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_170a5:
    _begin:
#undef arg_0
#define arg_0 6
	// 18983 arg_0           = word ptr  6 ;~ 08A6:0065
#undef arg_2
#define arg_2 8
	// 18984 arg_2           = word ptr  8 ;~ 08A6:0065
cs=0x8a6;eip=0x000065; 	X(ENTER(0, 0));	// 18986                  enter   0, 0 ;~ 08A6:0065
cs=0x8a6;eip=0x000069; 	X(PUSH(bx));	// 18987                  push    bx ;~ 08A6:0069
cs=0x8a6;eip=0x00006a; 	X(PUSH(cx));	// 18988                  push    cx ;~ 08A6:006A
cs=0x8a6;eip=0x00006b; 	X(PUSH(dx));	// 18989                  push    dx ;~ 08A6:006B
cs=0x8a6;eip=0x00006c; 	X(PUSH(si));	// 18990                  push    si ;~ 08A6:006C
cs=0x8a6;eip=0x00006d; 	X(PUSH(di));	// 18991                  push    di ;~ 08A6:006D
cs=0x8a6;eip=0x00006e; 	X(PUSH(bp));	// 18992                  push    bp ;~ 08A6:006E
cs=0x8a6;eip=0x00006f; 	X(PUSH(ds));	// 18993                  push    ds ;~ 08A6:006F
cs=0x8a6;eip=0x000070; 	X(PUSH(es));	// 18994                  push    es ;~ 08A6:0070
cs=0x8a6;eip=0x000071; 	T(ax = 0x0A000;);	// 18995                  mov     ax, 0A000h ;~ 08A6:0071
cs=0x8a6;eip=0x000074; 	T(ds = ax;);	// 18996                  mov     ds, ax ;~ 08A6:0074
cs=0x8a6;eip=0x000076; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 18998                  mov     si, [bp+arg_0] ;~ 08A6:0076
cs=0x8a6;eip=0x000079; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 18999                  mov     ax, [bp+arg_2] ;~ 08A6:0079
cs=0x8a6;eip=0x00007c; 	T(dh = al;);	// 19000                  mov     dh, al ;~ 08A6:007C
cs=0x8a6;eip=0x00007e; 	T(SHR(ax, 2));	// 19001                  shr     ax, 2 ;~ 08A6:007E
cs=0x8a6;eip=0x000081; 	T(AND(dh, 3));	// 19002                  and     dh, 3 ;~ 08A6:0081
cs=0x8a6;eip=0x000084; 	T(ADD(si, ax));	// 19003                  add     si, ax ;~ 08A6:0084
cs=0x8a6;eip=0x000086; 	T(ah = dh;);	// 19004                  mov     ah, dh ;~ 08A6:0086
cs=0x8a6;eip=0x000088; 	X(PUSH(cx));	// 19005                  push    cx ;~ 08A6:0088
cs=0x8a6;eip=0x000089; 	X(PUSH(dx));	// 19006                  push    dx ;~ 08A6:0089
cs=0x8a6;eip=0x00008a; 	T(dx = 0x3CE;);	// 19007                  mov     dx, 3CEh ;~ 08A6:008A
cs=0x8a6;eip=0x00008d; 	T(al = 4;);	// 19008                  mov     al, 4 ;~ 08A6:008D
cs=0x8a6;eip=0x00008f; 	T(CLI);	// 19009                  cli ;~ 08A6:008F
cs=0x8a6;eip=0x000090; 	S(OUT(dx, ax));	// 19010                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0090
cs=0x8a6;eip=0x000091; 	T(dx = 0x3CE;);	// 19013                  mov     dx, 3CEh ;~ 08A6:0091
cs=0x8a6;eip=0x000094; 	T(ax = 0x4005;);	// 19014                  mov     ax, 4005h ;~ 08A6:0094
cs=0x8a6;eip=0x000097; 	S(OUT(dx, ax));	// 19015                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0097
cs=0x8a6;eip=0x000098; 	T(STI);	// 19017                  sti ;~ 08A6:0098
cs=0x8a6;eip=0x000099; 	X(POP(dx));	// 19018                  pop     dx ;~ 08A6:0099
cs=0x8a6;eip=0x00009a; 	X(POP(cx));	// 19019                  pop     cx ;~ 08A6:009A
cs=0x8a6;eip=0x00009b; 	T(LODSB);	// 19020                  lodsb ;~ 08A6:009B
cs=0x8a6;eip=0x00009c; 	T(XOR(ah, ah));	// 19021                  xor     ah, ah ;~ 08A6:009C
cs=0x8a6;eip=0x00009e; 	X(POP(es));	// 19022                  pop     es ;~ 08A6:009E
cs=0x8a6;eip=0x00009f; 	X(POP(ds));	// 19023                  pop     ds ;~ 08A6:009F
cs=0x8a6;eip=0x0000a0; 	X(POP(bp));	// 19025                  pop     bp ;~ 08A6:00A0
cs=0x8a6;eip=0x0000a1; 	X(POP(di));	// 19026                  pop     di ;~ 08A6:00A1
cs=0x8a6;eip=0x0000a2; 	X(POP(si));	// 19027                  pop     si ;~ 08A6:00A2
cs=0x8a6;eip=0x0000a3; 	X(POP(dx));	// 19028                  pop     dx ;~ 08A6:00A3
cs=0x8a6;eip=0x0000a4; 	X(POP(cx));	// 19029                  pop     cx ;~ 08A6:00A4
cs=0x8a6;eip=0x0000a5; 	X(POP(bx));	// 19030                  pop     bx ;~ 08A6:00A5
cs=0x8a6;eip=0x0000a6; 	T(LEAVE);	// 19031                  leave ;~ 08A6:00A6
cs=0x8a6;eip=0x0000a7; 	J(RETF(0));	// 19032                  retf ;~ 08A6:00A7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_170a5: 	goto sub_170a5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_170e8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_170e8:
    _begin:
#undef arg_0
#define arg_0 6
	// 19042 arg_0           = word ptr  6 ;~ 08A6:00A8
#undef arg_2
#define arg_2 8
	// 19043 arg_2           = word ptr  8 ;~ 08A6:00A8
#undef arg_4
#define arg_4 0x0A
	// 19044 arg_4           = word ptr  0Ah ;~ 08A6:00A8
cs=0x8a6;eip=0x0000a8; 	X(ENTER(0, 0));	// 19046                  enter   0, 0 ;~ 08A6:00A8
cs=0x8a6;eip=0x0000ac; 	X(PUSH(bx));	// 19047                  push    bx ;~ 08A6:00AC
cs=0x8a6;eip=0x0000ad; 	X(PUSH(cx));	// 19048                  push    cx ;~ 08A6:00AD
cs=0x8a6;eip=0x0000ae; 	X(PUSH(dx));	// 19049                  push    dx ;~ 08A6:00AE
cs=0x8a6;eip=0x0000af; 	X(PUSH(si));	// 19050                  push    si ;~ 08A6:00AF
cs=0x8a6;eip=0x0000b0; 	X(PUSH(di));	// 19051                  push    di ;~ 08A6:00B0
cs=0x8a6;eip=0x0000b1; 	X(PUSH(bp));	// 19052                  push    bp ;~ 08A6:00B1
cs=0x8a6;eip=0x0000b2; 	X(PUSH(ds));	// 19053                  push    ds ;~ 08A6:00B2
cs=0x8a6;eip=0x0000b3; 	X(PUSH(es));	// 19054                  push    es ;~ 08A6:00B3
cs=0x8a6;eip=0x0000b4; 	T(ax = 0x0A000;);	// 19055                  mov     ax, 0A000h ;~ 08A6:00B4
cs=0x8a6;eip=0x0000b7; 	T(es = ax;);	// 19056                  mov     es, ax ;~ 08A6:00B7
cs=0x8a6;eip=0x0000b9; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 19058                  mov     di, [bp+arg_0] ;~ 08A6:00B9
cs=0x8a6;eip=0x0000bc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 19059                  mov     ax, [bp+arg_2] ;~ 08A6:00BC
cs=0x8a6;eip=0x0000bf; 	T(dh = al;);	// 19060                  mov     dh, al ;~ 08A6:00BF
cs=0x8a6;eip=0x0000c1; 	T(SHR(ax, 2));	// 19061                  shr     ax, 2 ;~ 08A6:00C1
cs=0x8a6;eip=0x0000c4; 	T(AND(dh, 3));	// 19062                  and     dh, 3 ;~ 08A6:00C4
cs=0x8a6;eip=0x0000c7; 	T(ADD(di, ax));	// 19063                  add     di, ax ;~ 08A6:00C7
cs=0x8a6;eip=0x0000c9; 	T(ah = dh;);	// 19064                  mov     ah, dh ;~ 08A6:00C9
cs=0x8a6;eip=0x0000cb; 	X(PUSH(cx));	// 19065                  push    cx ;~ 08A6:00CB
cs=0x8a6;eip=0x0000cc; 	X(PUSH(dx));	// 19066                  push    dx ;~ 08A6:00CC
cs=0x8a6;eip=0x0000cd; 	T(cl = ah;);	// 19067                  mov     cl, ah ;~ 08A6:00CD
cs=0x8a6;eip=0x0000cf; 	T(ax = 1;);	// 19068                  mov     ax, 1 ;~ 08A6:00CF
cs=0x8a6;eip=0x0000d2; 	T(SHL(ax, cl));	// 19069                  shl     ax, cl ;~ 08A6:00D2
cs=0x8a6;eip=0x0000d4; 	T(ah = al;);	// 19070                  mov     ah, al ;~ 08A6:00D4
cs=0x8a6;eip=0x0000d6; 	T(dx = 0x3C4;);	// 19071                  mov     dx, 3C4h ;~ 08A6:00D6
cs=0x8a6;eip=0x0000d9; 	T(al = 2;);	// 19072                  mov     al, 2 ;~ 08A6:00D9
cs=0x8a6;eip=0x0000db; 	T(CLI);	// 19073                  cli ;~ 08A6:00DB
cs=0x8a6;eip=0x0000dc; 	S(OUT(dx, ax));	// 19074                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:00DC
cs=0x8a6;eip=0x0000dd; 	T(dx = 0x3CE;);	// 19077                  mov     dx, 3CEh ;~ 08A6:00DD
cs=0x8a6;eip=0x0000e0; 	T(ax = 0x4005;);	// 19078                  mov     ax, 4005h ;~ 08A6:00E0
cs=0x8a6;eip=0x0000e3; 	S(OUT(dx, ax));	// 19079                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:00E3
cs=0x8a6;eip=0x0000e4; 	T(STI);	// 19081                  sti ;~ 08A6:00E4
cs=0x8a6;eip=0x0000e5; 	X(POP(dx));	// 19082                  pop     dx ;~ 08A6:00E5
cs=0x8a6;eip=0x0000e6; 	X(POP(cx));	// 19083                  pop     cx ;~ 08A6:00E6
cs=0x8a6;eip=0x0000e7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 19084                  mov     ax, [bp+arg_4] ;~ 08A6:00E7
cs=0x8a6;eip=0x0000ea; 	X(STOSB);	// 19085                  stosb ;~ 08A6:00EA
cs=0x8a6;eip=0x0000eb; 	X(POP(es));	// 19086                  pop     es ;~ 08A6:00EB
cs=0x8a6;eip=0x0000ec; 	X(POP(ds));	// 19088                  pop     ds ;~ 08A6:00EC
cs=0x8a6;eip=0x0000ed; 	X(POP(bp));	// 19089                  pop     bp ;~ 08A6:00ED
cs=0x8a6;eip=0x0000ee; 	X(POP(di));	// 19090                  pop     di ;~ 08A6:00EE
cs=0x8a6;eip=0x0000ef; 	X(POP(si));	// 19091                  pop     si ;~ 08A6:00EF
cs=0x8a6;eip=0x0000f0; 	X(POP(dx));	// 19092                  pop     dx ;~ 08A6:00F0
cs=0x8a6;eip=0x0000f1; 	X(POP(cx));	// 19093                  pop     cx ;~ 08A6:00F1
cs=0x8a6;eip=0x0000f2; 	X(POP(bx));	// 19094                  pop     bx ;~ 08A6:00F2
cs=0x8a6;eip=0x0000f3; 	T(LEAVE);	// 19095                  leave ;~ 08A6:00F3
cs=0x8a6;eip=0x0000f4; 	J(RETF(0));	// 19096                  retf ;~ 08A6:00F4

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_170e8: 	goto sub_170e8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg004_f5_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg004_f5_proc:
    _begin:
cs=0x8a6;eip=0x0000f5; 	X(*(dw*)(&byte_17180) = 1;);	// 19100                  mov     word ptr cs:byte_17180, 1 ;~ 08A6:00F5
cs=0x8a6;eip=0x0000fc; 	X(*(dw*)(&byte_1718c) = bp;);	// 19101                  mov     word ptr cs:byte_1718C, bp ;~ 08A6:00FC
cs=0x8a6;eip=0x000101; 	X(*(dw*)(&byte_1717e) = sp;);	// 19102                  mov     word ptr cs:byte_1717E, sp ;~ 08A6:0101
cs=0x8a6;eip=0x000106; 	T(bp = sp;);	// 19103                  mov     bp, sp ;~ 08A6:0106
cs=0x8a6;eip=0x000108; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 19104                  mov     ax, [bp+0] ;~ 08A6:0108
cs=0x8a6;eip=0x00010b; 	X(*(dw*)(&byte_1717a) = ax;);	// 19105                  mov     word ptr cs:byte_1717A, ax ;~ 08A6:010B
cs=0x8a6;eip=0x00010f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+2))));	// 19106                  mov     ax, [bp+2] ;~ 08A6:010F
cs=0x8a6;eip=0x000112; 	X(*(dw*)(&byte_1717c) = ax;);	// 19107                  mov     word ptr cs:byte_1717C, ax ;~ 08A6:0112
cs=0x8a6;eip=0x000116; 	X(*(dw*)(&byte_17182) = ds;);	// 19108                  mov     word ptr cs:byte_17182, ds ;~ 08A6:0116
cs=0x8a6;eip=0x00011b; 	X(*(dw*)(&byte_17184) = es;);	// 19109                  mov     word ptr cs:byte_17184, es ;~ 08A6:011B
cs=0x8a6;eip=0x000120; 	X(*(dw*)(&byte_17186) = ss;);	// 19110                  mov     word ptr cs:byte_17186, ss ;~ 08A6:0120
cs=0x8a6;eip=0x000125; 	X(*(dw*)(&byte_17188) = di;);	// 19111                  mov     word ptr cs:byte_17188, di ;~ 08A6:0125
cs=0x8a6;eip=0x00012a; 	X(*(dw*)(&byte_1718a) = si;);	// 19112                  mov     word ptr cs:byte_1718A, si ;~ 08A6:012A
cs=0x8a6;eip=0x00012f; 	X(PUSHF);	// 19113                  pushf ;~ 08A6:012F
cs=0x8a6;eip=0x000130; 	X(POP(*(dw*)(&byte_1718e)));	// 19114                  pop     word ptr cs:byte_1718E ;~ 08A6:0130
cs=0x8a6;eip=0x000135; 	T(ax = 0;);	// 19115                  mov     ax, 0 ;~ 08A6:0135
cs=0x8a6;eip=0x000138; 	J(RETF(0));	// 19116                  retf ;~ 08A6:0138
ret_8a6_150:
	// 5345 
cs=0x8a6;eip=0x000150; 	T(CMP(*(dw*)(&byte_17180), 0));	// 19153                  cmp     word ptr cs:byte_17180, 0 ;~ 08A6:0150
cs=0x8a6;eip=0x000156; 	J(JZ(locret_171db));	// 19154                  jz      short locret_171DB ;~ 08A6:0156
cs=0x8a6;eip=0x000158; 	X(*(dw*)(&byte_17180) = 0;);	// 19155                  mov     word ptr cs:byte_17180, 0 ;~ 08A6:0158
cs=0x8a6;eip=0x00015f; 	T(sp = *(dw*)(&byte_1717e););	// 19156                  mov     sp, word ptr cs:byte_1717E ;~ 08A6:015F
cs=0x8a6;eip=0x000164; 	T(bp = sp;);	// 19157                  mov     bp, sp ;~ 08A6:0164
cs=0x8a6;eip=0x000166; 	T(ax = *(dw*)(&byte_1717a););	// 19158                  mov     ax, word ptr cs:byte_1717A ;~ 08A6:0166
cs=0x8a6;eip=0x00016a; 	X(MOV(*(dw*)(raddr(ss,bp+0)), ax));	// 19159                  mov     [bp+0], ax ;~ 08A6:016A
cs=0x8a6;eip=0x00016d; 	T(ax = *(dw*)(&byte_1717c););	// 19160                  mov     ax, word ptr cs:byte_1717C ;~ 08A6:016D
cs=0x8a6;eip=0x000171; 	X(MOV(*(dw*)(raddr(ss,bp+2)), ax));	// 19161                  mov     [bp+2], ax ;~ 08A6:0171
cs=0x8a6;eip=0x000174; 	T(ds = *(dw*)(&byte_17182););	// 19162                  mov     ds, word ptr cs:byte_17182 ;~ 08A6:0174
cs=0x8a6;eip=0x000179; 	T(es = *(dw*)(&byte_17184););	// 19163                  mov     es, word ptr cs:byte_17184 ;~ 08A6:0179
cs=0x8a6;eip=0x00017e; 	S(ss = *(dw*)(&byte_17186););	// 19164                  mov     ss, word ptr cs:byte_17186 ;~ 08A6:017E
cs=0x8a6;eip=0x000183; 	T(di = *(dw*)(&byte_17188););	// 19165                  mov     di, word ptr cs:byte_17188 ;~ 08A6:0183
cs=0x8a6;eip=0x000188; 	T(si = *(dw*)(&byte_1718a););	// 19166                  mov     si, word ptr cs:byte_1718A ;~ 08A6:0188
cs=0x8a6;eip=0x00018d; 	T(bp = *(dw*)(&byte_1718c););	// 19167                  mov     bp, word ptr cs:byte_1718C ;~ 08A6:018D
cs=0x8a6;eip=0x000192; 	X(PUSH(*(dw*)(&byte_1718e)));	// 19168                  push    word ptr cs:byte_1718E ;~ 08A6:0192
cs=0x8a6;eip=0x000197; 	X(POPF);	// 19169                  popf ;~ 08A6:0197
cs=0x8a6;eip=0x000198; 	T(ax = 1;);	// 19170                  mov     ax, 1 ;~ 08A6:0198
locret_171db:
	// 5346 
cs=0x8a6;eip=0x00019b; 	J(RETF(0));	// 19173                  retf ;~ 08A6:019B
ret_8a6_19c:
	// 5347 
cs=0x8a6;eip=0x00019c; 	X(ENTER(0, 0));	// 19175                  enter   0, 0 ;~ 08A6:019C
cs=0x8a6;eip=0x0001a0; 	X(PUSHA);	// 19176                  pusha ;~ 08A6:01A0
cs=0x8a6;eip=0x0001a1; 	X(PUSH(es));	// 19177                  push    es ;~ 08A6:01A1
cs=0x8a6;eip=0x0001a2; 	X(PUSH(ds));	// 19178                  push    ds ;~ 08A6:01A2
cs=0x8a6;eip=0x0001a3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 19179                  mov     ax, [bp+0Ah] ;~ 08A6:01A3
cs=0x8a6;eip=0x0001a6; 	T(SHL(ax, 4));	// 19180                  shl     ax, 4 ;~ 08A6:01A6
cs=0x8a6;eip=0x0001a9; 	T(bx = ax;);	// 19181                  mov     bx, ax ;~ 08A6:01A9
cs=0x8a6;eip=0x0001ab; 	T(SHL(bx, 2));	// 19182                  shl     bx, 2 ;~ 08A6:01AB
cs=0x8a6;eip=0x0001ae; 	T(ADD(ax, bx));	// 19183                  add     ax, bx ;~ 08A6:01AE
cs=0x8a6;eip=0x0001b0; 	X(ADD(*(dw*)(raddr(ss,bp+6)), ax));	// 19184                  add     [bp+6], ax ;~ 08A6:01B0
cs=0x8a6;eip=0x0001b3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 19185                  mov     ax, [bp+8] ;~ 08A6:01B3
cs=0x8a6;eip=0x0001b6; 	T(SHR(ax, 2));	// 19186                  shr     ax, 2 ;~ 08A6:01B6
cs=0x8a6;eip=0x0001b9; 	X(ADD(*(dw*)(raddr(ss,bp+6)), ax));	// 19187                  add     [bp+6], ax ;~ 08A6:01B9
cs=0x8a6;eip=0x0001bc; 	X(SHR(*(dw*)(raddr(ss,bp+0x0C)), 2));	// 19188                  shr     word ptr [bp+0Ch], 2 ;~ 08A6:01BC
cs=0x8a6;eip=0x0001c0; 	T(ax = 0x0A000;);	// 19189                  mov     ax, 0A000h ;~ 08A6:01C0
cs=0x8a6;eip=0x0001c3; 	T(es = ax;);	// 19190                  mov     es, ax ;~ 08A6:01C3
cs=0x8a6;eip=0x0001c5; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 19192                  mov     di, [bp+6] ;~ 08A6:01C5
cs=0x8a6;eip=0x0001c8; 	X(byte_18e7b = 4;);	// 19193                  mov     cs:byte_18E7B, 4 ;~ 08A6:01C8
cs=0x8a6;eip=0x0001ce; 	T(dx = 0x3C4;);	// 19194                  mov     dx, 3C4h ;~ 08A6:01CE
cs=0x8a6;eip=0x0001d1; 	T(MOV(cx, *(dw*)(raddr(ss,bp+8))));	// 19195                  mov     cx, [bp+8] ;~ 08A6:01D1
cs=0x8a6;eip=0x0001d4; 	T(AND(cl, 3));	// 19196                  and     cl, 3 ;~ 08A6:01D4
cs=0x8a6;eip=0x0001d7; 	X(byte_18e74 = cl;);	// 19197                  mov     cs:byte_18E74, cl ;~ 08A6:01D7
cs=0x8a6;eip=0x0001dc; 	T(ah = 1;);	// 19198                  mov     ah, 1 ;~ 08A6:01DC
cs=0x8a6;eip=0x0001de; 	T(SHL(ah, cl));	// 19199                  shl     ah, cl ;~ 08A6:01DE
cs=0x8a6;eip=0x0001e0; 	T(al = 2;);	// 19200                  mov     al, 2 ;~ 08A6:01E0
loc_17222:
	// 5348 
cs=0x8a6;eip=0x0001e2; 	T(MOV(bl, *(raddr(ss,bp+0x0E))));	// 19203                  mov     bl, [bp+0Eh] ;~ 08A6:01E2
cs=0x8a6;eip=0x0001e5; 	S(OUT(dx, ax));	// 19204                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:01E5
loc_17226:
	// 5349 
cs=0x8a6;eip=0x0001e6; 	X(PUSH(di));	// 19209                  push    di ;~ 08A6:01E6
cs=0x8a6;eip=0x0001e7; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0C))));	// 19210                  mov     cx, [bp+0Ch] ;~ 08A6:01E7
cs=0x8a6;eip=0x0001ea; 	X(PUSH(ax));	// 19211                  push    ax ;~ 08A6:01EA
cs=0x8a6;eip=0x0001eb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x10))));	// 19212                  mov     ax, [bp+10h] ;~ 08A6:01EB
	// 19213                  rep stosb ;~ 08A6:01EE
cs=0x8a6;eip=0x0001ee; 	X(	REP STOSB);	// 19213                  rep stosb ;~ 08A6:01EE
cs=0x8a6;eip=0x0001f0; 	X(POP(ax));	// 19214                  pop     ax ;~ 08A6:01F0
cs=0x8a6;eip=0x0001f1; 	X(POP(di));	// 19215                  pop     di ;~ 08A6:01F1
cs=0x8a6;eip=0x0001f2; 	T(ADD(di, 0x50));	// 19216                  add     di, 50h ; 'P' ;~ 08A6:01F2
cs=0x8a6;eip=0x0001f5; 	T(DEC(bl));	// 19217                  dec     bl ;~ 08A6:01F5
cs=0x8a6;eip=0x0001f7; 	J(JNZ(loc_17226));	// 19218                  jnz     short loc_17226 ;~ 08A6:01F7
cs=0x8a6;eip=0x0001f9; 	X(DEC(byte_18e7b));	// 19219                  dec     cs:byte_18E7B ;~ 08A6:01F9
cs=0x8a6;eip=0x0001fe; 	J(JZ(loc_17251));	// 19220                  jz      short loc_17251 ;~ 08A6:01FE
cs=0x8a6;eip=0x000200; 	T(SHL(ah, 1));	// 19221                  shl     ah, 1 ;~ 08A6:0200
cs=0x8a6;eip=0x000202; 	T(CMP(ah, 0x10));	// 19222                  cmp     ah, 10h ;~ 08A6:0202
cs=0x8a6;eip=0x000205; 	J(JNZ(loc_1724c));	// 19223                  jnz     short loc_1724C ;~ 08A6:0205
cs=0x8a6;eip=0x000207; 	T(ah = 1;);	// 19224                  mov     ah, 1 ;~ 08A6:0207
cs=0x8a6;eip=0x000209; 	X(INC(*(dw*)(raddr(ss,bp+6))));	// 19225                  inc     word ptr [bp+6] ;~ 08A6:0209
loc_1724c:
	// 5350 
cs=0x8a6;eip=0x00020c; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 19228                  mov     di, [bp+6] ;~ 08A6:020C
cs=0x8a6;eip=0x00020f; 	J(JMP(loc_17222));	// 19229                  jmp     short loc_17222 ;~ 08A6:020F
loc_17251:
	// 5351 
cs=0x8a6;eip=0x000211; 	X(POP(ds));	// 19233                  pop     ds ;~ 08A6:0211
cs=0x8a6;eip=0x000212; 	X(POP(es));	// 19234                  pop     es ;~ 08A6:0212
cs=0x8a6;eip=0x000213; 	X(POPA);	// 19236                  popa ;~ 08A6:0213
cs=0x8a6;eip=0x000214; 	T(LEAVE);	// 19237                  leave ;~ 08A6:0214
cs=0x8a6;eip=0x000215; 	J(RETF(0));	// 19238                  retf ;~ 08A6:0215

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_17222: 	goto loc_17222;
        case m2c::kloc_17226: 	goto loc_17226;
        case m2c::kloc_1724c: 	goto loc_1724c;
        case m2c::kloc_17251: 	goto loc_17251;
        case m2c::klocret_171db: 	goto locret_171db;
        case m2c::kret_8a6_150: 	goto ret_8a6_150;
        case m2c::kret_8a6_19c: 	goto ret_8a6_19c;
        case m2c::kseg004_f5_proc: 	goto seg004_f5_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_17256(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_17256:
    _begin:
#undef arg_0
#define arg_0 6
	// 19247 arg_0           = dword ptr  6 ;~ 08A6:0216
cs=0x8a6;eip=0x000216; 	X(ENTER(0, 0));	// 19249                  enter   0, 0 ;~ 08A6:0216
cs=0x8a6;eip=0x00021a; 	X(PUSHA);	// 19250                  pusha ;~ 08A6:021A
cs=0x8a6;eip=0x00021b; 	X(PUSH(es));	// 19251                  push    es ;~ 08A6:021B
cs=0x8a6;eip=0x00021c; 	X(PUSH(ds));	// 19252                  push    ds ;~ 08A6:021C
cs=0x8a6;eip=0x00021d; 	T(dx = 0x3DA;);	// 19253                  mov     dx, 3DAh ;~ 08A6:021D
loc_17260:
	// 5352 
cs=0x8a6;eip=0x000220; 	S(IN(ax, dx));	// 19256                  in      ax, dx          ; Video status bits: ;~ 08A6:0220
cs=0x8a6;eip=0x000221; 	T(AND(al, 9));	// 19261                  and     al, 9 ;~ 08A6:0221
cs=0x8a6;eip=0x000223; 	T(CMP(al, 9));	// 19262                  cmp     al, 9 ;~ 08A6:0223
cs=0x8a6;eip=0x000225; 	J(JNZ(loc_17260));	// 19263                  jnz     short loc_17260 ;~ 08A6:0225
cs=0x8a6;eip=0x000227; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_0))));	// 19264                  lds     si, [bp+arg_0] ;~ 08A6:0227
cs=0x8a6;eip=0x00022a; 	T(XOR(bx, bx));	// 19265                  xor     bx, bx ;~ 08A6:022A
loc_1726c:
	// 5353 
cs=0x8a6;eip=0x00022c; 	T(dx = 0x3C8;);	// 19268                  mov     dx, 3C8h ;~ 08A6:022C
cs=0x8a6;eip=0x00022f; 	T(al = bl;);	// 19269                  mov     al, bl ;~ 08A6:022F
cs=0x8a6;eip=0x000231; 	S(OUT(dx, al));	// 19270                  out     dx, al ;~ 08A6:0231
cs=0x8a6;eip=0x000232; 	T(INC(dx));	// 19271                  inc     dx ;~ 08A6:0232
cs=0x8a6;eip=0x000233; 	T(LODSB);	// 19272                  lodsb ;~ 08A6:0233
cs=0x8a6;eip=0x000234; 	S(OUT(dx, al));	// 19273                  out     dx, al ;~ 08A6:0234
cs=0x8a6;eip=0x000235; 	T(LODSB);	// 19274                  lodsb ;~ 08A6:0235
cs=0x8a6;eip=0x000236; 	S(OUT(dx, al));	// 19275                  out     dx, al ;~ 08A6:0236
cs=0x8a6;eip=0x000237; 	T(LODSB);	// 19276                  lodsb ;~ 08A6:0237
cs=0x8a6;eip=0x000238; 	S(OUT(dx, al));	// 19277                  out     dx, al ;~ 08A6:0238
cs=0x8a6;eip=0x000239; 	T(INC(bx));	// 19278                  inc     bx ;~ 08A6:0239
cs=0x8a6;eip=0x00023a; 	T(CMP(bx, 0x100));	// 19279                  cmp     bx, 100h ;~ 08A6:023A
cs=0x8a6;eip=0x00023e; 	J(JNZ(loc_1726c));	// 19280                  jnz     short loc_1726C ;~ 08A6:023E
cs=0x8a6;eip=0x000240; 	X(POP(ds));	// 19281                  pop     ds ;~ 08A6:0240
cs=0x8a6;eip=0x000241; 	X(POP(es));	// 19282                  pop     es ;~ 08A6:0241
cs=0x8a6;eip=0x000242; 	X(POPA);	// 19283                  popa ;~ 08A6:0242
cs=0x8a6;eip=0x000243; 	T(LEAVE);	// 19284                  leave ;~ 08A6:0243
cs=0x8a6;eip=0x000244; 	J(RETF(0));	// 19285                  retf ;~ 08A6:0244

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_17260: 	goto loc_17260;
        case m2c::kloc_1726c: 	goto loc_1726c;
        case m2c::ksub_17256: 	goto sub_17256;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_17285(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_17285:
    _begin:
cs=0x8a6;eip=0x000245; 	X(PUSHA);	// 19294                  pusha ;~ 08A6:0245
cs=0x8a6;eip=0x000246; 	X(PUSH(es));	// 19295                  push    es ;~ 08A6:0246
cs=0x8a6;eip=0x000247; 	X(PUSH(ds));	// 19296                  push    ds ;~ 08A6:0247
cs=0x8a6;eip=0x000248; 	T(ax = 0x0A000;);	// 19297                  mov     ax, 0A000h ;~ 08A6:0248
cs=0x8a6;eip=0x00024b; 	T(es = ax;);	// 19298                  mov     es, ax ;~ 08A6:024B
cs=0x8a6;eip=0x00024d; 	T(di = 0;);	// 19300                  mov     di, 0 ;~ 08A6:024D
cs=0x8a6;eip=0x000250; 	T(dx = 0x3C4;);	// 19301                  mov     dx, 3C4h ;~ 08A6:0250
cs=0x8a6;eip=0x000253; 	T(ax = 0x0F02;);	// 19302                  mov     ax, 0F02h ;~ 08A6:0253
cs=0x8a6;eip=0x000256; 	S(OUT(dx, ax));	// 19303                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0256
cs=0x8a6;eip=0x000257; 	T(ax = 0;);	// 19305                  mov     ax, 0 ;~ 08A6:0257
cs=0x8a6;eip=0x00025a; 	T(cx = 0x0FA00;);	// 19306                  mov     cx, 0FA00h ;~ 08A6:025A
	// 19307                  rep stosb ;~ 08A6:025D
cs=0x8a6;eip=0x00025d; 	X(	REP STOSB);	// 19307                  rep stosb ;~ 08A6:025D
cs=0x8a6;eip=0x00025f; 	X(POP(ds));	// 19308                  pop     ds ;~ 08A6:025F
cs=0x8a6;eip=0x000260; 	X(POP(es));	// 19309                  pop     es ;~ 08A6:0260
cs=0x8a6;eip=0x000261; 	X(POPA);	// 19311                  popa ;~ 08A6:0261
cs=0x8a6;eip=0x000262; 	J(RETF(0));	// 19312                  retf ;~ 08A6:0262

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_17285: 	goto sub_17285;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_172a3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_172a3:
    _begin:
#undef arg_0
#define arg_0 6
	// 19323 arg_0           = word ptr  6 ;~ 08A6:0263
#undef arg_2
#define arg_2 8
	// 19324 arg_2           = word ptr  8 ;~ 08A6:0263
cs=0x8a6;eip=0x000263; 	X(ENTER(0, 0));	// 19326                  enter   0, 0 ;~ 08A6:0263
cs=0x8a6;eip=0x000267; 	X(PUSHA);	// 19327                  pusha ;~ 08A6:0267
cs=0x8a6;eip=0x000268; 	X(PUSH(es));	// 19328                  push    es ;~ 08A6:0268
cs=0x8a6;eip=0x000269; 	X(PUSH(ds));	// 19329                  push    ds ;~ 08A6:0269
cs=0x8a6;eip=0x00026a; 	T(ax = 0x0A000;);	// 19330                  mov     ax, 0A000h ;~ 08A6:026A
cs=0x8a6;eip=0x00026d; 	T(es = ax;);	// 19331                  mov     es, ax ;~ 08A6:026D
cs=0x8a6;eip=0x00026f; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 19333                  mov     di, [bp+arg_0] ;~ 08A6:026F
cs=0x8a6;eip=0x000272; 	T(dx = 0x3C4;);	// 19334                  mov     dx, 3C4h ;~ 08A6:0272
cs=0x8a6;eip=0x000275; 	T(ax = 0x0F02;);	// 19335                  mov     ax, 0F02h ;~ 08A6:0275
cs=0x8a6;eip=0x000278; 	S(OUT(dx, ax));	// 19336                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0278
cs=0x8a6;eip=0x000279; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 19338                  mov     ax, [bp+arg_2] ;~ 08A6:0279
cs=0x8a6;eip=0x00027c; 	T(cx = 0x3E80;);	// 19339                  mov     cx, 3E80h ;~ 08A6:027C
	// 19340                  rep stosb ;~ 08A6:027F
cs=0x8a6;eip=0x00027f; 	X(	REP STOSB);	// 19340                  rep stosb ;~ 08A6:027F
cs=0x8a6;eip=0x000281; 	X(POP(ds));	// 19341                  pop     ds ;~ 08A6:0281
cs=0x8a6;eip=0x000282; 	X(POP(es));	// 19342                  pop     es ;~ 08A6:0282
cs=0x8a6;eip=0x000283; 	X(POPA);	// 19344                  popa ;~ 08A6:0283
cs=0x8a6;eip=0x000284; 	T(LEAVE);	// 19345                  leave ;~ 08A6:0284
cs=0x8a6;eip=0x000285; 	J(RETF(0));	// 19346                  retf ;~ 08A6:0285

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_172a3: 	goto sub_172a3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_172c6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_172c6:
    _begin:
#undef arg_0
#define arg_0 6
	// 19357 arg_0           = dword ptr  6 ;~ 08A6:0286
#undef arg_4
#define arg_4 0x0A
	// 19358 arg_4           = word ptr  0Ah ;~ 08A6:0286
cs=0x8a6;eip=0x000286; 	X(ENTER(0, 0));	// 19360                  enter   0, 0 ;~ 08A6:0286
cs=0x8a6;eip=0x00028a; 	X(PUSHA);	// 19361                  pusha ;~ 08A6:028A
cs=0x8a6;eip=0x00028b; 	X(PUSH(es));	// 19362                  push    es ;~ 08A6:028B
cs=0x8a6;eip=0x00028c; 	X(PUSH(ds));	// 19363                  push    ds ;~ 08A6:028C
cs=0x8a6;eip=0x00028d; 	T(ax = 0x0A000;);	// 19364                  mov     ax, 0A000h ;~ 08A6:028D
cs=0x8a6;eip=0x000290; 	T(es = ax;);	// 19365                  mov     es, ax ;~ 08A6:0290
cs=0x8a6;eip=0x000292; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 19367                  mov     di, [bp+arg_4] ;~ 08A6:0292
cs=0x8a6;eip=0x000295; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_0))));	// 19368                  lds     si, [bp+arg_0] ;~ 08A6:0295
cs=0x8a6;eip=0x000298; 	T(dx = 0x3C4;);	// 19369                  mov     dx, 3C4h ;~ 08A6:0298
cs=0x8a6;eip=0x00029b; 	T(ax = 0x102;);	// 19370                  mov     ax, 102h ;~ 08A6:029B
cs=0x8a6;eip=0x00029e; 	S(OUT(dx, ax));	// 19371                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:029E
cs=0x8a6;eip=0x00029f; 	T(cx = 0x1F40;);	// 19373                  mov     cx, 1F40h ;~ 08A6:029F
	// 19374                  rep movsw ;~ 08A6:02A2
cs=0x8a6;eip=0x0002a2; 	X(	REP MOVSW);	// 19374                  rep movsw ;~ 08A6:02A2
cs=0x8a6;eip=0x0002a4; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 19375                  mov     di, [bp+arg_4] ;~ 08A6:02A4
cs=0x8a6;eip=0x0002a7; 	T(ax = 0x202;);	// 19376                  mov     ax, 202h ;~ 08A6:02A7
cs=0x8a6;eip=0x0002aa; 	S(OUT(dx, ax));	// 19377                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:02AA
cs=0x8a6;eip=0x0002ab; 	T(cx = 0x1F40;);	// 19379                  mov     cx, 1F40h ;~ 08A6:02AB
	// 19380                  rep movsw ;~ 08A6:02AE
cs=0x8a6;eip=0x0002ae; 	X(	REP MOVSW);	// 19380                  rep movsw ;~ 08A6:02AE
cs=0x8a6;eip=0x0002b0; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 19381                  mov     di, [bp+arg_4] ;~ 08A6:02B0
cs=0x8a6;eip=0x0002b3; 	T(ax = 0x402;);	// 19382                  mov     ax, 402h ;~ 08A6:02B3
cs=0x8a6;eip=0x0002b6; 	S(OUT(dx, ax));	// 19383                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:02B6
cs=0x8a6;eip=0x0002b7; 	T(cx = 0x1F40;);	// 19385                  mov     cx, 1F40h ;~ 08A6:02B7
	// 19386                  rep movsw ;~ 08A6:02BA
cs=0x8a6;eip=0x0002ba; 	X(	REP MOVSW);	// 19386                  rep movsw ;~ 08A6:02BA
cs=0x8a6;eip=0x0002bc; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 19387                  mov     di, [bp+arg_4] ;~ 08A6:02BC
cs=0x8a6;eip=0x0002bf; 	T(ax = 0x802;);	// 19388                  mov     ax, 802h ;~ 08A6:02BF
cs=0x8a6;eip=0x0002c2; 	S(OUT(dx, ax));	// 19389                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:02C2
cs=0x8a6;eip=0x0002c3; 	T(cx = 0x1F40;);	// 19391                  mov     cx, 1F40h ;~ 08A6:02C3
	// 19392                  rep movsw ;~ 08A6:02C6
cs=0x8a6;eip=0x0002c6; 	X(	REP MOVSW);	// 19392                  rep movsw ;~ 08A6:02C6
cs=0x8a6;eip=0x0002c8; 	X(POP(ds));	// 19393                  pop     ds ;~ 08A6:02C8
cs=0x8a6;eip=0x0002c9; 	X(POP(es));	// 19394                  pop     es ;~ 08A6:02C9
cs=0x8a6;eip=0x0002ca; 	X(POPA);	// 19396                  popa ;~ 08A6:02CA
cs=0x8a6;eip=0x0002cb; 	T(LEAVE);	// 19397                  leave ;~ 08A6:02CB
cs=0x8a6;eip=0x0002cc; 	J(RETF(0));	// 19398                  retf ;~ 08A6:02CC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_172c6: 	goto sub_172c6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1730d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1730d:
    _begin:
#undef arg_0
#define arg_0 6
	// 19409 arg_0           = word ptr  6 ;~ 08A6:02CD
#undef arg_2
#define arg_2 8
	// 19410 arg_2           = word ptr  8 ;~ 08A6:02CD
cs=0x8a6;eip=0x0002cd; 	X(ENTER(0, 0));	// 19412                  enter   0, 0 ;~ 08A6:02CD
cs=0x8a6;eip=0x0002d1; 	X(PUSHA);	// 19413                  pusha ;~ 08A6:02D1
cs=0x8a6;eip=0x0002d2; 	X(PUSH(es));	// 19414                  push    es ;~ 08A6:02D2
cs=0x8a6;eip=0x0002d3; 	X(PUSH(ds));	// 19415                  push    ds ;~ 08A6:02D3
cs=0x8a6;eip=0x0002d4; 	T(ax = 0x0A000;);	// 19416                  mov     ax, 0A000h ;~ 08A6:02D4
cs=0x8a6;eip=0x0002d7; 	T(es = ax;);	// 19417                  mov     es, ax ;~ 08A6:02D7
cs=0x8a6;eip=0x0002d9; 	T(ds = ax;);	// 19419                  mov     ds, ax ;~ 08A6:02D9
cs=0x8a6;eip=0x0002db; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 19421                  mov     di, [bp+arg_2] ;~ 08A6:02DB
cs=0x8a6;eip=0x0002de; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 19422                  mov     si, [bp+arg_0] ;~ 08A6:02DE
cs=0x8a6;eip=0x0002e1; 	T(ax = 8;);	// 19423                  mov     ax, 8 ;~ 08A6:02E1
cs=0x8a6;eip=0x0002e4; 	T(dx = 0x3CE;);	// 19424                  mov     dx, 3CEh ;~ 08A6:02E4
cs=0x8a6;eip=0x0002e7; 	S(OUT(dx, ax));	// 19425                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:02E7
cs=0x8a6;eip=0x0002e8; 	T(dx = 0x3C4;);	// 19428                  mov     dx, 3C4h ;~ 08A6:02E8
cs=0x8a6;eip=0x0002eb; 	T(ax = 0x0F02;);	// 19429                  mov     ax, 0F02h ;~ 08A6:02EB
cs=0x8a6;eip=0x0002ee; 	S(OUT(dx, ax));	// 19430                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:02EE
cs=0x8a6;eip=0x0002ef; 	T(cx = 0x3E80;);	// 19432                  mov     cx, 3E80h ;~ 08A6:02EF
	// 19433                  rep movsb ;~ 08A6:02F2
cs=0x8a6;eip=0x0002f2; 	X(	REP MOVSB);	// 19433                  rep movsb ;~ 08A6:02F2
cs=0x8a6;eip=0x0002f4; 	T(ax = 0x0FF08;);	// 19434                  mov     ax, 0FF08h ;~ 08A6:02F4
cs=0x8a6;eip=0x0002f7; 	T(dx = 0x3CE;);	// 19435                  mov     dx, 3CEh ;~ 08A6:02F7
cs=0x8a6;eip=0x0002fa; 	S(OUT(dx, ax));	// 19436                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:02FA
cs=0x8a6;eip=0x0002fb; 	X(POP(ds));	// 19438                  pop     ds ;~ 08A6:02FB
cs=0x8a6;eip=0x0002fc; 	X(POP(es));	// 19440                  pop     es ;~ 08A6:02FC
cs=0x8a6;eip=0x0002fd; 	X(POPA);	// 19442                  popa ;~ 08A6:02FD
cs=0x8a6;eip=0x0002fe; 	T(LEAVE);	// 19443                  leave ;~ 08A6:02FE
cs=0x8a6;eip=0x0002ff; 	J(RETF(0));	// 19444                  retf ;~ 08A6:02FF

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1730d: 	goto sub_1730d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg004_300_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg004_300_proc:
    _begin:
cs=0x8a6;eip=0x000300; 	X(ENTER(0, 0));	// 19448                  enter   0, 0 ;~ 08A6:0300
cs=0x8a6;eip=0x000304; 	X(PUSHA);	// 19449                  pusha ;~ 08A6:0304
cs=0x8a6;eip=0x000305; 	X(PUSH(es));	// 19450                  push    es ;~ 08A6:0305
cs=0x8a6;eip=0x000306; 	X(PUSH(ds));	// 19451                  push    ds ;~ 08A6:0306
cs=0x8a6;eip=0x000307; 	T(ax = 0x0A000;);	// 19452                  mov     ax, 0A000h ;~ 08A6:0307
cs=0x8a6;eip=0x00030a; 	T(es = ax;);	// 19453                  mov     es, ax ;~ 08A6:030A
cs=0x8a6;eip=0x00030c; 	T(ds = ax;);	// 19455                  mov     ds, ax ;~ 08A6:030C
cs=0x8a6;eip=0x00030e; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 19457                  mov     di, [bp+8] ;~ 08A6:030E
cs=0x8a6;eip=0x000311; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 19458                  mov     si, [bp+6] ;~ 08A6:0311
cs=0x8a6;eip=0x000314; 	T(ax = 4;);	// 19459                  mov     ax, 4 ;~ 08A6:0314
cs=0x8a6;eip=0x000317; 	T(dx = 0x3CE;);	// 19460                  mov     dx, 3CEh ;~ 08A6:0317
cs=0x8a6;eip=0x00031a; 	S(OUT(dx, ax));	// 19461                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:031A
cs=0x8a6;eip=0x00031b; 	T(dx = 0x3C4;);	// 19464                  mov     dx, 3C4h ;~ 08A6:031B
cs=0x8a6;eip=0x00031e; 	T(ax = 0x102;);	// 19465                  mov     ax, 102h ;~ 08A6:031E
cs=0x8a6;eip=0x000321; 	S(OUT(dx, ax));	// 19466                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0321
cs=0x8a6;eip=0x000322; 	T(cx = 0x3E80;);	// 19468                  mov     cx, 3E80h ;~ 08A6:0322
	// 19469                  rep movsb ;~ 08A6:0325
cs=0x8a6;eip=0x000325; 	X(	REP MOVSB);	// 19469                  rep movsb ;~ 08A6:0325
cs=0x8a6;eip=0x000327; 	T(cx = 0x0FFFF;);	// 19470                  mov     cx, 0FFFFh ;~ 08A6:0327
loc_1736a:
	// 5354 
cs=0x8a6;eip=0x00032a; 	T(NOP);	// 19473                  nop ;~ 08A6:032A
cs=0x8a6;eip=0x00032b; 	J(LOOP(loc_1736a));	// 19474                  loop    loc_1736A ;~ 08A6:032B
cs=0x8a6;eip=0x00032d; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 19475                  mov     di, [bp+8] ;~ 08A6:032D
cs=0x8a6;eip=0x000330; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 19476                  mov     si, [bp+6] ;~ 08A6:0330
cs=0x8a6;eip=0x000333; 	T(ax = 0x104;);	// 19477                  mov     ax, 104h ;~ 08A6:0333
cs=0x8a6;eip=0x000336; 	T(dx = 0x3CE;);	// 19478                  mov     dx, 3CEh ;~ 08A6:0336
cs=0x8a6;eip=0x000339; 	S(OUT(dx, ax));	// 19479                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0339
cs=0x8a6;eip=0x00033a; 	T(dx = 0x3C4;);	// 19481                  mov     dx, 3C4h ;~ 08A6:033A
cs=0x8a6;eip=0x00033d; 	T(ax = 0x202;);	// 19482                  mov     ax, 202h ;~ 08A6:033D
cs=0x8a6;eip=0x000340; 	S(OUT(dx, ax));	// 19483                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0340
cs=0x8a6;eip=0x000341; 	T(cx = 0x3E80;);	// 19485                  mov     cx, 3E80h ;~ 08A6:0341
	// 19486                  rep movsb ;~ 08A6:0344
cs=0x8a6;eip=0x000344; 	X(	REP MOVSB);	// 19486                  rep movsb ;~ 08A6:0344
cs=0x8a6;eip=0x000346; 	T(cx = 0x0FFFF;);	// 19487                  mov     cx, 0FFFFh ;~ 08A6:0346
loc_17389:
	// 5355 
cs=0x8a6;eip=0x000349; 	T(NOP);	// 19490                  nop ;~ 08A6:0349
cs=0x8a6;eip=0x00034a; 	J(LOOP(loc_17389));	// 19491                  loop    loc_17389 ;~ 08A6:034A
cs=0x8a6;eip=0x00034c; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 19492                  mov     di, [bp+8] ;~ 08A6:034C
cs=0x8a6;eip=0x00034f; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 19493                  mov     si, [bp+6] ;~ 08A6:034F
cs=0x8a6;eip=0x000352; 	T(ax = 0x204;);	// 19494                  mov     ax, 204h ;~ 08A6:0352
cs=0x8a6;eip=0x000355; 	T(dx = 0x3CE;);	// 19495                  mov     dx, 3CEh ;~ 08A6:0355
cs=0x8a6;eip=0x000358; 	S(OUT(dx, ax));	// 19496                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0358
cs=0x8a6;eip=0x000359; 	T(dx = 0x3C4;);	// 19498                  mov     dx, 3C4h ;~ 08A6:0359
cs=0x8a6;eip=0x00035c; 	T(ax = 0x402;);	// 19499                  mov     ax, 402h ;~ 08A6:035C
cs=0x8a6;eip=0x00035f; 	S(OUT(dx, ax));	// 19500                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:035F
cs=0x8a6;eip=0x000360; 	T(cx = 0x3E80;);	// 19502                  mov     cx, 3E80h ;~ 08A6:0360
	// 19503                  rep movsb ;~ 08A6:0363
cs=0x8a6;eip=0x000363; 	X(	REP MOVSB);	// 19503                  rep movsb ;~ 08A6:0363
cs=0x8a6;eip=0x000365; 	T(cx = 0x0FFFF;);	// 19504                  mov     cx, 0FFFFh ;~ 08A6:0365
loc_173a8:
	// 5356 
cs=0x8a6;eip=0x000368; 	T(NOP);	// 19507                  nop ;~ 08A6:0368
cs=0x8a6;eip=0x000369; 	J(LOOP(loc_173a8));	// 19508                  loop    loc_173A8 ;~ 08A6:0369
cs=0x8a6;eip=0x00036b; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 19509                  mov     di, [bp+8] ;~ 08A6:036B
cs=0x8a6;eip=0x00036e; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 19510                  mov     si, [bp+6] ;~ 08A6:036E
cs=0x8a6;eip=0x000371; 	T(ax = 0x304;);	// 19511                  mov     ax, 304h ;~ 08A6:0371
cs=0x8a6;eip=0x000374; 	T(dx = 0x3CE;);	// 19512                  mov     dx, 3CEh ;~ 08A6:0374
cs=0x8a6;eip=0x000377; 	S(OUT(dx, ax));	// 19513                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0377
cs=0x8a6;eip=0x000378; 	T(dx = 0x3C4;);	// 19515                  mov     dx, 3C4h ;~ 08A6:0378
cs=0x8a6;eip=0x00037b; 	T(ax = 0x802;);	// 19516                  mov     ax, 802h ;~ 08A6:037B
cs=0x8a6;eip=0x00037e; 	S(OUT(dx, ax));	// 19517                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:037E
cs=0x8a6;eip=0x00037f; 	T(cx = 0x3E80;);	// 19519                  mov     cx, 3E80h ;~ 08A6:037F
	// 19520                  rep movsb ;~ 08A6:0382
cs=0x8a6;eip=0x000382; 	X(	REP MOVSB);	// 19520                  rep movsb ;~ 08A6:0382
cs=0x8a6;eip=0x000384; 	T(ax = 0x0FF08;);	// 19521                  mov     ax, 0FF08h ;~ 08A6:0384
cs=0x8a6;eip=0x000387; 	T(dx = 0x3CE;);	// 19522                  mov     dx, 3CEh ;~ 08A6:0387
cs=0x8a6;eip=0x00038a; 	S(OUT(dx, ax));	// 19523                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:038A
cs=0x8a6;eip=0x00038b; 	X(POP(ds));	// 19525                  pop     ds ;~ 08A6:038B
cs=0x8a6;eip=0x00038c; 	X(POP(es));	// 19527                  pop     es ;~ 08A6:038C
cs=0x8a6;eip=0x00038d; 	X(POPA);	// 19529                  popa ;~ 08A6:038D
cs=0x8a6;eip=0x00038e; 	T(LEAVE);	// 19530                  leave ;~ 08A6:038E
cs=0x8a6;eip=0x00038f; 	J(RETF(0));	// 19531                  retf ;~ 08A6:038F
ret_8a6_390:
	// 5357 
cs=0x8a6;eip=0x000390; 	X(ENTER(0, 0));	// 19533                  enter   0, 0 ;~ 08A6:0390
cs=0x8a6;eip=0x000394; 	X(PUSHA);	// 19534                  pusha ;~ 08A6:0394
cs=0x8a6;eip=0x000395; 	X(PUSH(es));	// 19535                  push    es ;~ 08A6:0395
cs=0x8a6;eip=0x000396; 	X(PUSH(ds));	// 19536                  push    ds ;~ 08A6:0396
cs=0x8a6;eip=0x000397; 	T(ax = 0x0A000;);	// 19537                  mov     ax, 0A000h ;~ 08A6:0397
cs=0x8a6;eip=0x00039a; 	T(es = ax;);	// 19538                  mov     es, ax ;~ 08A6:039A
cs=0x8a6;eip=0x00039c; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 19540                  mov     di, [bp+0Ch] ;~ 08A6:039C
cs=0x8a6;eip=0x00039f; 	T(LDS(si, *(dw*)(raddr(ss,bp+6))));	// 19541                  lds     si, [bp+6] ;~ 08A6:039F
cs=0x8a6;eip=0x0003a2; 	T(ADD(si, *(dw*)(raddr(ss,bp+0x0A))));	// 19542                  add     si, [bp+0Ah] ;~ 08A6:03A2
cs=0x8a6;eip=0x0003a5; 	T(dx = 0x3C4;);	// 19543                  mov     dx, 3C4h ;~ 08A6:03A5
cs=0x8a6;eip=0x0003a8; 	T(ax = 0x102;);	// 19544                  mov     ax, 102h ;~ 08A6:03A8
cs=0x8a6;eip=0x0003ab; 	S(OUT(dx, ax));	// 19545                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:03AB
cs=0x8a6;eip=0x0003ac; 	T(bx = 0x10;);	// 19547                  mov     bx, 10h ;~ 08A6:03AC
loc_173ef:
	// 5358 
cs=0x8a6;eip=0x0003af; 	T(cx = 2;);	// 19550                  mov     cx, 2 ;~ 08A6:03AF
	// 19551                  rep movsw ;~ 08A6:03B2
cs=0x8a6;eip=0x0003b2; 	X(	REP MOVSW);	// 19551                  rep movsw ;~ 08A6:03B2
cs=0x8a6;eip=0x0003b4; 	T(ADD(di, 0x4C));	// 19552                  add     di, 4Ch ; 'L' ;~ 08A6:03B4
cs=0x8a6;eip=0x0003b7; 	T(ADD(si, 0x4C));	// 19553                  add     si, 4Ch ; 'L' ;~ 08A6:03B7
cs=0x8a6;eip=0x0003ba; 	T(DEC(bx));	// 19554                  dec     bx ;~ 08A6:03BA
cs=0x8a6;eip=0x0003bb; 	T(CMP(bx, 0));	// 19555                  cmp     bx, 0 ;~ 08A6:03BB
cs=0x8a6;eip=0x0003be; 	J(JNZ(loc_173ef));	// 19556                  jnz     short loc_173EF ;~ 08A6:03BE
cs=0x8a6;eip=0x0003c0; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 19557                  mov     di, [bp+0Ch] ;~ 08A6:03C0
cs=0x8a6;eip=0x0003c3; 	T(ADD(si, 0x3980));	// 19558                  add     si, 3980h ;~ 08A6:03C3
cs=0x8a6;eip=0x0003c7; 	T(ax = 0x202;);	// 19559                  mov     ax, 202h ;~ 08A6:03C7
cs=0x8a6;eip=0x0003ca; 	S(OUT(dx, ax));	// 19560                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:03CA
cs=0x8a6;eip=0x0003cb; 	T(bx = 0x10;);	// 19562                  mov     bx, 10h ;~ 08A6:03CB
loc_1740e:
	// 5359 
cs=0x8a6;eip=0x0003ce; 	T(cx = 2;);	// 19565                  mov     cx, 2 ;~ 08A6:03CE
	// 19566                  rep movsw ;~ 08A6:03D1
cs=0x8a6;eip=0x0003d1; 	X(	REP MOVSW);	// 19566                  rep movsw ;~ 08A6:03D1
cs=0x8a6;eip=0x0003d3; 	T(ADD(di, 0x4C));	// 19567                  add     di, 4Ch ; 'L' ;~ 08A6:03D3
cs=0x8a6;eip=0x0003d6; 	T(ADD(si, 0x4C));	// 19568                  add     si, 4Ch ; 'L' ;~ 08A6:03D6
cs=0x8a6;eip=0x0003d9; 	T(DEC(bx));	// 19569                  dec     bx ;~ 08A6:03D9
cs=0x8a6;eip=0x0003da; 	T(CMP(bx, 0));	// 19570                  cmp     bx, 0 ;~ 08A6:03DA
cs=0x8a6;eip=0x0003dd; 	J(JNZ(loc_1740e));	// 19571                  jnz     short loc_1740E ;~ 08A6:03DD
cs=0x8a6;eip=0x0003df; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 19572                  mov     di, [bp+0Ch] ;~ 08A6:03DF
cs=0x8a6;eip=0x0003e2; 	T(ADD(si, 0x3980));	// 19573                  add     si, 3980h ;~ 08A6:03E2
cs=0x8a6;eip=0x0003e6; 	T(ax = 0x402;);	// 19574                  mov     ax, 402h ;~ 08A6:03E6
cs=0x8a6;eip=0x0003e9; 	S(OUT(dx, ax));	// 19575                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:03E9
cs=0x8a6;eip=0x0003ea; 	T(bx = 0x10;);	// 19577                  mov     bx, 10h ;~ 08A6:03EA
loc_1742d:
	// 5360 
cs=0x8a6;eip=0x0003ed; 	T(cx = 2;);	// 19580                  mov     cx, 2 ;~ 08A6:03ED
	// 19581                  rep movsw ;~ 08A6:03F0
cs=0x8a6;eip=0x0003f0; 	X(	REP MOVSW);	// 19581                  rep movsw ;~ 08A6:03F0
cs=0x8a6;eip=0x0003f2; 	T(ADD(di, 0x4C));	// 19582                  add     di, 4Ch ; 'L' ;~ 08A6:03F2
cs=0x8a6;eip=0x0003f5; 	T(ADD(si, 0x4C));	// 19583                  add     si, 4Ch ; 'L' ;~ 08A6:03F5
cs=0x8a6;eip=0x0003f8; 	T(DEC(bx));	// 19584                  dec     bx ;~ 08A6:03F8
cs=0x8a6;eip=0x0003f9; 	T(CMP(bx, 0));	// 19585                  cmp     bx, 0 ;~ 08A6:03F9
cs=0x8a6;eip=0x0003fc; 	J(JNZ(loc_1742d));	// 19586                  jnz     short loc_1742D ;~ 08A6:03FC
cs=0x8a6;eip=0x0003fe; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 19587                  mov     di, [bp+0Ch] ;~ 08A6:03FE
cs=0x8a6;eip=0x000401; 	T(ADD(si, 0x3980));	// 19588                  add     si, 3980h ;~ 08A6:0401
cs=0x8a6;eip=0x000405; 	T(ax = 0x802;);	// 19589                  mov     ax, 802h ;~ 08A6:0405
cs=0x8a6;eip=0x000408; 	S(OUT(dx, ax));	// 19590                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0408
cs=0x8a6;eip=0x000409; 	T(bx = 0x10;);	// 19592                  mov     bx, 10h ;~ 08A6:0409
loc_1744c:
	// 5361 
cs=0x8a6;eip=0x00040c; 	T(cx = 2;);	// 19595                  mov     cx, 2 ;~ 08A6:040C
	// 19596                  rep movsw ;~ 08A6:040F
cs=0x8a6;eip=0x00040f; 	X(	REP MOVSW);	// 19596                  rep movsw ;~ 08A6:040F
cs=0x8a6;eip=0x000411; 	T(ADD(di, 0x4C));	// 19597                  add     di, 4Ch ; 'L' ;~ 08A6:0411
cs=0x8a6;eip=0x000414; 	T(ADD(si, 0x4C));	// 19598                  add     si, 4Ch ; 'L' ;~ 08A6:0414
cs=0x8a6;eip=0x000417; 	T(DEC(bx));	// 19599                  dec     bx ;~ 08A6:0417
cs=0x8a6;eip=0x000418; 	T(CMP(bx, 0));	// 19600                  cmp     bx, 0 ;~ 08A6:0418
cs=0x8a6;eip=0x00041b; 	J(JNZ(loc_1744c));	// 19601                  jnz     short loc_1744C ;~ 08A6:041B
cs=0x8a6;eip=0x00041d; 	X(POP(ds));	// 19602                  pop     ds ;~ 08A6:041D
cs=0x8a6;eip=0x00041e; 	X(POP(es));	// 19603                  pop     es ;~ 08A6:041E
cs=0x8a6;eip=0x00041f; 	X(POPA);	// 19605                  popa ;~ 08A6:041F
cs=0x8a6;eip=0x000420; 	T(LEAVE);	// 19606                  leave ;~ 08A6:0420
cs=0x8a6;eip=0x000421; 	J(RETF(0));	// 19607                  retf ;~ 08A6:0421
ret_8a6_422:
	// 5362 
cs=0x8a6;eip=0x000422; 	X(ENTER(0, 0));	// 19609                  enter   0, 0 ;~ 08A6:0422
cs=0x8a6;eip=0x000426; 	X(PUSHA);	// 19610                  pusha ;~ 08A6:0426
cs=0x8a6;eip=0x000427; 	X(PUSH(es));	// 19611                  push    es ;~ 08A6:0427
cs=0x8a6;eip=0x000428; 	X(PUSH(ds));	// 19612                  push    ds ;~ 08A6:0428
cs=0x8a6;eip=0x000429; 	T(ax = 0x0A000;);	// 19613                  mov     ax, 0A000h ;~ 08A6:0429
cs=0x8a6;eip=0x00042c; 	T(es = ax;);	// 19614                  mov     es, ax ;~ 08A6:042C
cs=0x8a6;eip=0x00042e; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 19616                  mov     di, [bp+0Ch] ;~ 08A6:042E
cs=0x8a6;eip=0x000431; 	T(LDS(si, *(dw*)(raddr(ss,bp+6))));	// 19617                  lds     si, [bp+6] ;~ 08A6:0431
cs=0x8a6;eip=0x000434; 	T(ADD(si, *(dw*)(raddr(ss,bp+0x0A))));	// 19618                  add     si, [bp+0Ah] ;~ 08A6:0434
cs=0x8a6;eip=0x000437; 	T(dx = 0x3C4;);	// 19619                  mov     dx, 3C4h ;~ 08A6:0437
cs=0x8a6;eip=0x00043a; 	T(ax = 0x102;);	// 19620                  mov     ax, 102h ;~ 08A6:043A
cs=0x8a6;eip=0x00043d; 	S(OUT(dx, ax));	// 19621                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:043D
cs=0x8a6;eip=0x00043e; 	T(bx = 8;);	// 19623                  mov     bx, 8 ;~ 08A6:043E
loc_17481:
	// 5363 
cs=0x8a6;eip=0x000441; 	T(cx = 2;);	// 19626                  mov     cx, 2 ;~ 08A6:0441
	// 19627                  rep movsw ;~ 08A6:0444
cs=0x8a6;eip=0x000444; 	X(	REP MOVSW);	// 19627                  rep movsw ;~ 08A6:0444
cs=0x8a6;eip=0x000446; 	T(ADD(di, 0x4C));	// 19628                  add     di, 4Ch ; 'L' ;~ 08A6:0446
cs=0x8a6;eip=0x000449; 	T(ADD(si, 0x4C));	// 19629                  add     si, 4Ch ; 'L' ;~ 08A6:0449
cs=0x8a6;eip=0x00044c; 	T(DEC(bx));	// 19630                  dec     bx ;~ 08A6:044C
cs=0x8a6;eip=0x00044d; 	T(CMP(bx, 0));	// 19631                  cmp     bx, 0 ;~ 08A6:044D
cs=0x8a6;eip=0x000450; 	J(JNZ(loc_17481));	// 19632                  jnz     short loc_17481 ;~ 08A6:0450
cs=0x8a6;eip=0x000452; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 19633                  mov     di, [bp+0Ch] ;~ 08A6:0452
cs=0x8a6;eip=0x000455; 	T(ADD(si, 0x3C00));	// 19634                  add     si, 3C00h ;~ 08A6:0455
cs=0x8a6;eip=0x000459; 	T(ax = 0x202;);	// 19635                  mov     ax, 202h ;~ 08A6:0459
cs=0x8a6;eip=0x00045c; 	S(OUT(dx, ax));	// 19636                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:045C
cs=0x8a6;eip=0x00045d; 	T(bx = 8;);	// 19638                  mov     bx, 8 ;~ 08A6:045D
loc_174a0:
	// 5364 
cs=0x8a6;eip=0x000460; 	T(cx = 2;);	// 19641                  mov     cx, 2 ;~ 08A6:0460
	// 19642                  rep movsw ;~ 08A6:0463
cs=0x8a6;eip=0x000463; 	X(	REP MOVSW);	// 19642                  rep movsw ;~ 08A6:0463
cs=0x8a6;eip=0x000465; 	T(ADD(di, 0x4C));	// 19643                  add     di, 4Ch ; 'L' ;~ 08A6:0465
cs=0x8a6;eip=0x000468; 	T(ADD(si, 0x4C));	// 19644                  add     si, 4Ch ; 'L' ;~ 08A6:0468
cs=0x8a6;eip=0x00046b; 	T(DEC(bx));	// 19645                  dec     bx ;~ 08A6:046B
cs=0x8a6;eip=0x00046c; 	T(CMP(bx, 0));	// 19646                  cmp     bx, 0 ;~ 08A6:046C
cs=0x8a6;eip=0x00046f; 	J(JNZ(loc_174a0));	// 19647                  jnz     short loc_174A0 ;~ 08A6:046F
cs=0x8a6;eip=0x000471; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 19648                  mov     di, [bp+0Ch] ;~ 08A6:0471
cs=0x8a6;eip=0x000474; 	T(ADD(si, 0x3C00));	// 19649                  add     si, 3C00h ;~ 08A6:0474
cs=0x8a6;eip=0x000478; 	T(ax = 0x402;);	// 19650                  mov     ax, 402h ;~ 08A6:0478
cs=0x8a6;eip=0x00047b; 	S(OUT(dx, ax));	// 19651                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:047B
cs=0x8a6;eip=0x00047c; 	T(bx = 8;);	// 19653                  mov     bx, 8 ;~ 08A6:047C
loc_174bf:
	// 5365 
cs=0x8a6;eip=0x00047f; 	T(cx = 2;);	// 19656                  mov     cx, 2 ;~ 08A6:047F
	// 19657                  rep movsw ;~ 08A6:0482
cs=0x8a6;eip=0x000482; 	X(	REP MOVSW);	// 19657                  rep movsw ;~ 08A6:0482
cs=0x8a6;eip=0x000484; 	T(ADD(di, 0x4C));	// 19658                  add     di, 4Ch ; 'L' ;~ 08A6:0484
cs=0x8a6;eip=0x000487; 	T(ADD(si, 0x4C));	// 19659                  add     si, 4Ch ; 'L' ;~ 08A6:0487
cs=0x8a6;eip=0x00048a; 	T(DEC(bx));	// 19660                  dec     bx ;~ 08A6:048A
cs=0x8a6;eip=0x00048b; 	T(CMP(bx, 0));	// 19661                  cmp     bx, 0 ;~ 08A6:048B
cs=0x8a6;eip=0x00048e; 	J(JNZ(loc_174bf));	// 19662                  jnz     short loc_174BF ;~ 08A6:048E
cs=0x8a6;eip=0x000490; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 19663                  mov     di, [bp+0Ch] ;~ 08A6:0490
cs=0x8a6;eip=0x000493; 	T(ADD(si, 0x3C00));	// 19664                  add     si, 3C00h ;~ 08A6:0493
cs=0x8a6;eip=0x000497; 	T(ax = 0x802;);	// 19665                  mov     ax, 802h ;~ 08A6:0497
cs=0x8a6;eip=0x00049a; 	S(OUT(dx, ax));	// 19666                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:049A
cs=0x8a6;eip=0x00049b; 	T(bx = 8;);	// 19668                  mov     bx, 8 ;~ 08A6:049B
loc_174de:
	// 5366 
cs=0x8a6;eip=0x00049e; 	T(cx = 2;);	// 19671                  mov     cx, 2 ;~ 08A6:049E
	// 19672                  rep movsw ;~ 08A6:04A1
cs=0x8a6;eip=0x0004a1; 	X(	REP MOVSW);	// 19672                  rep movsw ;~ 08A6:04A1
cs=0x8a6;eip=0x0004a3; 	T(ADD(di, 0x4C));	// 19673                  add     di, 4Ch ; 'L' ;~ 08A6:04A3
cs=0x8a6;eip=0x0004a6; 	T(ADD(si, 0x4C));	// 19674                  add     si, 4Ch ; 'L' ;~ 08A6:04A6
cs=0x8a6;eip=0x0004a9; 	T(DEC(bx));	// 19675                  dec     bx ;~ 08A6:04A9
cs=0x8a6;eip=0x0004aa; 	T(CMP(bx, 0));	// 19676                  cmp     bx, 0 ;~ 08A6:04AA
cs=0x8a6;eip=0x0004ad; 	J(JNZ(loc_174de));	// 19677                  jnz     short loc_174DE ;~ 08A6:04AD
cs=0x8a6;eip=0x0004af; 	X(POP(ds));	// 19678                  pop     ds ;~ 08A6:04AF
cs=0x8a6;eip=0x0004b0; 	X(POP(es));	// 19679                  pop     es ;~ 08A6:04B0
cs=0x8a6;eip=0x0004b1; 	X(POPA);	// 19681                  popa ;~ 08A6:04B1
cs=0x8a6;eip=0x0004b2; 	T(LEAVE);	// 19682                  leave ;~ 08A6:04B2
cs=0x8a6;eip=0x0004b3; 	J(RETF(0));	// 19683                  retf ;~ 08A6:04B3
ret_8a6_4b4:
	// 5367 
cs=0x8a6;eip=0x0004b4; 	X(ENTER(0, 0));	// 19685                  enter   0, 0 ;~ 08A6:04B4
cs=0x8a6;eip=0x0004b8; 	X(PUSHA);	// 19686                  pusha ;~ 08A6:04B8
cs=0x8a6;eip=0x0004b9; 	X(PUSH(es));	// 19687                  push    es ;~ 08A6:04B9
cs=0x8a6;eip=0x0004ba; 	X(PUSH(ds));	// 19688                  push    ds ;~ 08A6:04BA
cs=0x8a6;eip=0x0004bb; 	T(ax = 0x0A000;);	// 19689                  mov     ax, 0A000h ;~ 08A6:04BB
cs=0x8a6;eip=0x0004be; 	T(ds = ax;);	// 19690                  mov     ds, ax ;~ 08A6:04BE
cs=0x8a6;eip=0x0004c0; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0C))));	// 19692                  mov     si, [bp+0Ch] ;~ 08A6:04C0
cs=0x8a6;eip=0x0004c3; 	T(LES(di, *(dw*)(raddr(ss,bp+6))));	// 19693                  les     di, [bp+6] ;~ 08A6:04C3
cs=0x8a6;eip=0x0004c6; 	T(ADD(di, *(dw*)(raddr(ss,bp+0x0A))));	// 19694                  add     di, [bp+0Ah] ;~ 08A6:04C6
cs=0x8a6;eip=0x0004c9; 	T(dx = 0x3CE;);	// 19695                  mov     dx, 3CEh ;~ 08A6:04C9
cs=0x8a6;eip=0x0004cc; 	T(ax = 4;);	// 19696                  mov     ax, 4 ;~ 08A6:04CC
cs=0x8a6;eip=0x0004cf; 	S(OUT(dx, ax));	// 19697                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:04CF
cs=0x8a6;eip=0x0004d0; 	T(bx = 0x10;);	// 19700                  mov     bx, 10h ;~ 08A6:04D0
loc_17513:
	// 5368 
cs=0x8a6;eip=0x0004d3; 	T(cx = 2;);	// 19703                  mov     cx, 2 ;~ 08A6:04D3
	// 19704                  rep movsw ;~ 08A6:04D6
cs=0x8a6;eip=0x0004d6; 	X(	REP MOVSW);	// 19704                  rep movsw ;~ 08A6:04D6
cs=0x8a6;eip=0x0004d8; 	T(ADD(di, 0x4C));	// 19705                  add     di, 4Ch ; 'L' ;~ 08A6:04D8
cs=0x8a6;eip=0x0004db; 	T(ADD(si, 0x4C));	// 19706                  add     si, 4Ch ; 'L' ;~ 08A6:04DB
cs=0x8a6;eip=0x0004de; 	T(DEC(bx));	// 19707                  dec     bx ;~ 08A6:04DE
cs=0x8a6;eip=0x0004df; 	T(CMP(bx, 0));	// 19708                  cmp     bx, 0 ;~ 08A6:04DF
cs=0x8a6;eip=0x0004e2; 	J(JNZ(loc_17513));	// 19709                  jnz     short loc_17513 ;~ 08A6:04E2
cs=0x8a6;eip=0x0004e4; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0C))));	// 19710                  mov     si, [bp+0Ch] ;~ 08A6:04E4
cs=0x8a6;eip=0x0004e7; 	T(ADD(di, 0x3980));	// 19711                  add     di, 3980h ;~ 08A6:04E7
cs=0x8a6;eip=0x0004eb; 	T(ax = 0x104;);	// 19712                  mov     ax, 104h ;~ 08A6:04EB
cs=0x8a6;eip=0x0004ee; 	S(OUT(dx, ax));	// 19713                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:04EE
cs=0x8a6;eip=0x0004ef; 	T(bx = 0x10;);	// 19715                  mov     bx, 10h ;~ 08A6:04EF
loc_17532:
	// 5369 
cs=0x8a6;eip=0x0004f2; 	T(cx = 2;);	// 19718                  mov     cx, 2 ;~ 08A6:04F2
	// 19719                  rep movsw ;~ 08A6:04F5
cs=0x8a6;eip=0x0004f5; 	X(	REP MOVSW);	// 19719                  rep movsw ;~ 08A6:04F5
cs=0x8a6;eip=0x0004f7; 	T(ADD(di, 0x4C));	// 19720                  add     di, 4Ch ; 'L' ;~ 08A6:04F7
cs=0x8a6;eip=0x0004fa; 	T(ADD(si, 0x4C));	// 19721                  add     si, 4Ch ; 'L' ;~ 08A6:04FA
cs=0x8a6;eip=0x0004fd; 	T(DEC(bx));	// 19722                  dec     bx ;~ 08A6:04FD
cs=0x8a6;eip=0x0004fe; 	T(CMP(bx, 0));	// 19723                  cmp     bx, 0 ;~ 08A6:04FE
cs=0x8a6;eip=0x000501; 	J(JNZ(loc_17532));	// 19724                  jnz     short loc_17532 ;~ 08A6:0501
cs=0x8a6;eip=0x000503; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0C))));	// 19725                  mov     si, [bp+0Ch] ;~ 08A6:0503
cs=0x8a6;eip=0x000506; 	T(ADD(di, 0x3980));	// 19726                  add     di, 3980h ;~ 08A6:0506
cs=0x8a6;eip=0x00050a; 	T(ax = 0x204;);	// 19727                  mov     ax, 204h ;~ 08A6:050A
cs=0x8a6;eip=0x00050d; 	S(OUT(dx, ax));	// 19728                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:050D
cs=0x8a6;eip=0x00050e; 	T(bx = 0x10;);	// 19730                  mov     bx, 10h ;~ 08A6:050E
loc_17551:
	// 5370 
cs=0x8a6;eip=0x000511; 	T(cx = 2;);	// 19733                  mov     cx, 2 ;~ 08A6:0511
	// 19734                  rep movsw ;~ 08A6:0514
cs=0x8a6;eip=0x000514; 	X(	REP MOVSW);	// 19734                  rep movsw ;~ 08A6:0514
cs=0x8a6;eip=0x000516; 	T(ADD(di, 0x4C));	// 19735                  add     di, 4Ch ; 'L' ;~ 08A6:0516
cs=0x8a6;eip=0x000519; 	T(ADD(si, 0x4C));	// 19736                  add     si, 4Ch ; 'L' ;~ 08A6:0519
cs=0x8a6;eip=0x00051c; 	T(DEC(bx));	// 19737                  dec     bx ;~ 08A6:051C
cs=0x8a6;eip=0x00051d; 	T(CMP(bx, 0));	// 19738                  cmp     bx, 0 ;~ 08A6:051D
cs=0x8a6;eip=0x000520; 	J(JNZ(loc_17551));	// 19739                  jnz     short loc_17551 ;~ 08A6:0520
cs=0x8a6;eip=0x000522; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0C))));	// 19740                  mov     si, [bp+0Ch] ;~ 08A6:0522
cs=0x8a6;eip=0x000525; 	T(ADD(di, 0x3980));	// 19741                  add     di, 3980h ;~ 08A6:0525
cs=0x8a6;eip=0x000529; 	T(ax = 0x304;);	// 19742                  mov     ax, 304h ;~ 08A6:0529
cs=0x8a6;eip=0x00052c; 	S(OUT(dx, ax));	// 19743                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:052C
cs=0x8a6;eip=0x00052d; 	T(bx = 0x10;);	// 19745                  mov     bx, 10h ;~ 08A6:052D
loc_17570:
	// 5371 
cs=0x8a6;eip=0x000530; 	T(cx = 2;);	// 19748                  mov     cx, 2 ;~ 08A6:0530
	// 19749                  rep movsw ;~ 08A6:0533
cs=0x8a6;eip=0x000533; 	X(	REP MOVSW);	// 19749                  rep movsw ;~ 08A6:0533
cs=0x8a6;eip=0x000535; 	T(ADD(di, 0x4C));	// 19750                  add     di, 4Ch ; 'L' ;~ 08A6:0535
cs=0x8a6;eip=0x000538; 	T(ADD(si, 0x4C));	// 19751                  add     si, 4Ch ; 'L' ;~ 08A6:0538
cs=0x8a6;eip=0x00053b; 	T(DEC(bx));	// 19752                  dec     bx ;~ 08A6:053B
cs=0x8a6;eip=0x00053c; 	T(CMP(bx, 0));	// 19753                  cmp     bx, 0 ;~ 08A6:053C
cs=0x8a6;eip=0x00053f; 	J(JNZ(loc_17570));	// 19754                  jnz     short loc_17570 ;~ 08A6:053F
cs=0x8a6;eip=0x000541; 	X(POP(ds));	// 19755                  pop     ds ;~ 08A6:0541
cs=0x8a6;eip=0x000542; 	X(POP(es));	// 19757                  pop     es ;~ 08A6:0542
cs=0x8a6;eip=0x000543; 	X(POPA);	// 19758                  popa ;~ 08A6:0543
cs=0x8a6;eip=0x000544; 	T(LEAVE);	// 19759                  leave ;~ 08A6:0544
cs=0x8a6;eip=0x000545; 	J(RETF(0));	// 19760                  retf ;~ 08A6:0545
ret_8a6_546:
	// 5372 
cs=0x8a6;eip=0x000546; 	X(ENTER(0, 0));	// 19762                  enter   0, 0 ;~ 08A6:0546
cs=0x8a6;eip=0x00054a; 	X(PUSHA);	// 19763                  pusha ;~ 08A6:054A
cs=0x8a6;eip=0x00054b; 	X(PUSH(es));	// 19764                  push    es ;~ 08A6:054B
cs=0x8a6;eip=0x00054c; 	X(PUSH(ds));	// 19765                  push    ds ;~ 08A6:054C
cs=0x8a6;eip=0x00054d; 	T(ax = 0x0A000;);	// 19766                  mov     ax, 0A000h ;~ 08A6:054D
cs=0x8a6;eip=0x000550; 	T(es = ax;);	// 19767                  mov     es, ax ;~ 08A6:0550
cs=0x8a6;eip=0x000552; 	T(LDS(si, *(dw*)(raddr(ss,bp+6))));	// 19769                  lds     si, [bp+6] ;~ 08A6:0552
cs=0x8a6;eip=0x000555; 	T(ADD(si, *(dw*)(raddr(ss,bp+0x0A))));	// 19770                  add     si, [bp+0Ah] ;~ 08A6:0555
cs=0x8a6;eip=0x000558; 	T(dx = 0x3C4;);	// 19771                  mov     dx, 3C4h ;~ 08A6:0558
cs=0x8a6;eip=0x00055b; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 19772                  mov     di, [bp+0Ch] ;~ 08A6:055B
cs=0x8a6;eip=0x00055e; 	T(ax = 0x102;);	// 19773                  mov     ax, 102h ;~ 08A6:055E
cs=0x8a6;eip=0x000561; 	S(OUT(dx, ax));	// 19774                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0561
cs=0x8a6;eip=0x000562; 	T(bx = 0x10;);	// 19776                  mov     bx, 10h ;~ 08A6:0562
loc_175a5:
	// 5373 
cs=0x8a6;eip=0x000565; 	T(cx = 4;);	// 19779                  mov     cx, 4 ;~ 08A6:0565
loc_175a8:
	// 5374 
cs=0x8a6;eip=0x000568; 	T(MOV(al, *(raddr(ds,si))));	// 19782                  mov     al, [si] ;~ 08A6:0568
cs=0x8a6;eip=0x00056a; 	T(CMP(al, 0));	// 19783                  cmp     al, 0 ;~ 08A6:056A
cs=0x8a6;eip=0x00056c; 	J(JZ(loc_175b1));	// 19784                  jz      short loc_175B1 ;~ 08A6:056C
cs=0x8a6;eip=0x00056e; 	X(MOV(*(raddr(es,di)), al));	// 19785                  mov     es:[di], al ;~ 08A6:056E
loc_175b1:
	// 5375 
cs=0x8a6;eip=0x000571; 	T(INC(si));	// 19788                  inc     si ;~ 08A6:0571
cs=0x8a6;eip=0x000572; 	T(INC(di));	// 19789                  inc     di ;~ 08A6:0572
cs=0x8a6;eip=0x000573; 	J(LOOP(loc_175a8));	// 19790                  loop    loc_175A8 ;~ 08A6:0573
cs=0x8a6;eip=0x000575; 	T(ADD(di, 0x4C));	// 19791                  add     di, 4Ch ; 'L' ;~ 08A6:0575
cs=0x8a6;eip=0x000578; 	T(ADD(si, 0x4C));	// 19792                  add     si, 4Ch ; 'L' ;~ 08A6:0578
cs=0x8a6;eip=0x00057b; 	T(DEC(bx));	// 19793                  dec     bx ;~ 08A6:057B
cs=0x8a6;eip=0x00057c; 	T(CMP(bx, 0));	// 19794                  cmp     bx, 0 ;~ 08A6:057C
cs=0x8a6;eip=0x00057f; 	J(JNZ(loc_175a5));	// 19795                  jnz     short loc_175A5 ;~ 08A6:057F
cs=0x8a6;eip=0x000581; 	T(ADD(si, 0x3980));	// 19796                  add     si, 3980h ;~ 08A6:0581
cs=0x8a6;eip=0x000585; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 19797                  mov     di, [bp+0Ch] ;~ 08A6:0585
cs=0x8a6;eip=0x000588; 	T(ax = 0x202;);	// 19798                  mov     ax, 202h ;~ 08A6:0588
cs=0x8a6;eip=0x00058b; 	S(OUT(dx, ax));	// 19799                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:058B
cs=0x8a6;eip=0x00058c; 	T(bx = 0x10;);	// 19801                  mov     bx, 10h ;~ 08A6:058C
loc_175cf:
	// 5376 
cs=0x8a6;eip=0x00058f; 	T(cx = 4;);	// 19804                  mov     cx, 4 ;~ 08A6:058F
loc_175d2:
	// 5377 
cs=0x8a6;eip=0x000592; 	T(MOV(al, *(raddr(ds,si))));	// 19807                  mov     al, [si] ;~ 08A6:0592
cs=0x8a6;eip=0x000594; 	T(CMP(al, 0));	// 19808                  cmp     al, 0 ;~ 08A6:0594
cs=0x8a6;eip=0x000596; 	J(JZ(loc_175db));	// 19809                  jz      short loc_175DB ;~ 08A6:0596
cs=0x8a6;eip=0x000598; 	X(MOV(*(raddr(es,di)), al));	// 19810                  mov     es:[di], al ;~ 08A6:0598
loc_175db:
	// 5378 
cs=0x8a6;eip=0x00059b; 	T(INC(di));	// 19813                  inc     di ;~ 08A6:059B
cs=0x8a6;eip=0x00059c; 	T(INC(si));	// 19814                  inc     si ;~ 08A6:059C
cs=0x8a6;eip=0x00059d; 	J(LOOP(loc_175d2));	// 19815                  loop    loc_175D2 ;~ 08A6:059D
cs=0x8a6;eip=0x00059f; 	T(ADD(di, 0x4C));	// 19816                  add     di, 4Ch ; 'L' ;~ 08A6:059F
cs=0x8a6;eip=0x0005a2; 	T(ADD(si, 0x4C));	// 19817                  add     si, 4Ch ; 'L' ;~ 08A6:05A2
cs=0x8a6;eip=0x0005a5; 	T(DEC(bx));	// 19818                  dec     bx ;~ 08A6:05A5
cs=0x8a6;eip=0x0005a6; 	T(CMP(bx, 0));	// 19819                  cmp     bx, 0 ;~ 08A6:05A6
cs=0x8a6;eip=0x0005a9; 	J(JNZ(loc_175cf));	// 19820                  jnz     short loc_175CF ;~ 08A6:05A9
cs=0x8a6;eip=0x0005ab; 	T(ADD(si, 0x3980));	// 19821                  add     si, 3980h ;~ 08A6:05AB
cs=0x8a6;eip=0x0005af; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 19822                  mov     di, [bp+0Ch] ;~ 08A6:05AF
cs=0x8a6;eip=0x0005b2; 	T(ax = 0x402;);	// 19823                  mov     ax, 402h ;~ 08A6:05B2
cs=0x8a6;eip=0x0005b5; 	S(OUT(dx, ax));	// 19824                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:05B5
cs=0x8a6;eip=0x0005b6; 	T(bx = 0x10;);	// 19826                  mov     bx, 10h ;~ 08A6:05B6
loc_175f9:
	// 5379 
cs=0x8a6;eip=0x0005b9; 	T(cx = 4;);	// 19829                  mov     cx, 4 ;~ 08A6:05B9
loc_175fc:
	// 5380 
cs=0x8a6;eip=0x0005bc; 	T(MOV(al, *(raddr(ds,si))));	// 19832                  mov     al, [si] ;~ 08A6:05BC
cs=0x8a6;eip=0x0005be; 	T(CMP(al, 0));	// 19833                  cmp     al, 0 ;~ 08A6:05BE
cs=0x8a6;eip=0x0005c0; 	J(JZ(loc_17605));	// 19834                  jz      short loc_17605 ;~ 08A6:05C0
cs=0x8a6;eip=0x0005c2; 	X(MOV(*(raddr(es,di)), al));	// 19835                  mov     es:[di], al ;~ 08A6:05C2
loc_17605:
	// 5381 
cs=0x8a6;eip=0x0005c5; 	T(INC(di));	// 19838                  inc     di ;~ 08A6:05C5
cs=0x8a6;eip=0x0005c6; 	T(INC(si));	// 19839                  inc     si ;~ 08A6:05C6
cs=0x8a6;eip=0x0005c7; 	J(LOOP(loc_175fc));	// 19840                  loop    loc_175FC ;~ 08A6:05C7
cs=0x8a6;eip=0x0005c9; 	T(ADD(di, 0x4C));	// 19841                  add     di, 4Ch ; 'L' ;~ 08A6:05C9
cs=0x8a6;eip=0x0005cc; 	T(ADD(si, 0x4C));	// 19842                  add     si, 4Ch ; 'L' ;~ 08A6:05CC
cs=0x8a6;eip=0x0005cf; 	T(DEC(bx));	// 19843                  dec     bx ;~ 08A6:05CF
cs=0x8a6;eip=0x0005d0; 	T(CMP(bx, 0));	// 19844                  cmp     bx, 0 ;~ 08A6:05D0
cs=0x8a6;eip=0x0005d3; 	J(JNZ(loc_175f9));	// 19845                  jnz     short loc_175F9 ;~ 08A6:05D3
cs=0x8a6;eip=0x0005d5; 	T(ADD(si, 0x3980));	// 19846                  add     si, 3980h ;~ 08A6:05D5
cs=0x8a6;eip=0x0005d9; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 19847                  mov     di, [bp+0Ch] ;~ 08A6:05D9
cs=0x8a6;eip=0x0005dc; 	T(ax = 0x802;);	// 19848                  mov     ax, 802h ;~ 08A6:05DC
cs=0x8a6;eip=0x0005df; 	S(OUT(dx, ax));	// 19849                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:05DF
cs=0x8a6;eip=0x0005e0; 	T(bx = 0x10;);	// 19851                  mov     bx, 10h ;~ 08A6:05E0
loc_17623:
	// 5382 
cs=0x8a6;eip=0x0005e3; 	T(cx = 4;);	// 19854                  mov     cx, 4 ;~ 08A6:05E3
loc_17626:
	// 5383 
cs=0x8a6;eip=0x0005e6; 	T(MOV(al, *(raddr(ds,si))));	// 19857                  mov     al, [si] ;~ 08A6:05E6
cs=0x8a6;eip=0x0005e8; 	T(CMP(al, 0));	// 19858                  cmp     al, 0 ;~ 08A6:05E8
cs=0x8a6;eip=0x0005ea; 	J(JZ(loc_1762f));	// 19859                  jz      short loc_1762F ;~ 08A6:05EA
cs=0x8a6;eip=0x0005ec; 	X(MOV(*(raddr(es,di)), al));	// 19860                  mov     es:[di], al ;~ 08A6:05EC
loc_1762f:
	// 5384 
cs=0x8a6;eip=0x0005ef; 	T(INC(di));	// 19863                  inc     di ;~ 08A6:05EF
cs=0x8a6;eip=0x0005f0; 	T(INC(si));	// 19864                  inc     si ;~ 08A6:05F0
cs=0x8a6;eip=0x0005f1; 	J(LOOP(loc_17626));	// 19865                  loop    loc_17626 ;~ 08A6:05F1
cs=0x8a6;eip=0x0005f3; 	T(ADD(di, 0x4C));	// 19866                  add     di, 4Ch ; 'L' ;~ 08A6:05F3
cs=0x8a6;eip=0x0005f6; 	T(ADD(si, 0x4C));	// 19867                  add     si, 4Ch ; 'L' ;~ 08A6:05F6
cs=0x8a6;eip=0x0005f9; 	T(DEC(bx));	// 19868                  dec     bx ;~ 08A6:05F9
cs=0x8a6;eip=0x0005fa; 	T(CMP(bx, 0));	// 19869                  cmp     bx, 0 ;~ 08A6:05FA
cs=0x8a6;eip=0x0005fd; 	J(JNZ(loc_17623));	// 19870                  jnz     short loc_17623 ;~ 08A6:05FD
cs=0x8a6;eip=0x0005ff; 	X(POP(ds));	// 19871                  pop     ds ;~ 08A6:05FF
cs=0x8a6;eip=0x000600; 	X(POP(es));	// 19872                  pop     es ;~ 08A6:0600
cs=0x8a6;eip=0x000601; 	X(POPA);	// 19874                  popa ;~ 08A6:0601
cs=0x8a6;eip=0x000602; 	T(LEAVE);	// 19875                  leave ;~ 08A6:0602
cs=0x8a6;eip=0x000603; 	J(RETF(0));	// 19876                  retf ;~ 08A6:0603
ret_8a6_604:
	// 5385 
cs=0x8a6;eip=0x000604; 	X(ENTER(0, 0));	// 19878                  enter   0, 0 ;~ 08A6:0604
cs=0x8a6;eip=0x000608; 	X(PUSHA);	// 19879                  pusha ;~ 08A6:0608
cs=0x8a6;eip=0x000609; 	X(PUSH(es));	// 19880                  push    es ;~ 08A6:0609
cs=0x8a6;eip=0x00060a; 	X(PUSH(ds));	// 19881                  push    ds ;~ 08A6:060A
cs=0x8a6;eip=0x00060b; 	T(ax = 0x0A000;);	// 19882                  mov     ax, 0A000h ;~ 08A6:060B
cs=0x8a6;eip=0x00060e; 	T(es = ax;);	// 19883                  mov     es, ax ;~ 08A6:060E
cs=0x8a6;eip=0x000610; 	T(LDS(si, *(dw*)(raddr(ss,bp+6))));	// 19885                  lds     si, [bp+6] ;~ 08A6:0610
cs=0x8a6;eip=0x000613; 	T(ADD(si, *(dw*)(raddr(ss,bp+0x0A))));	// 19886                  add     si, [bp+0Ah] ;~ 08A6:0613
cs=0x8a6;eip=0x000616; 	T(dx = 0x3C4;);	// 19887                  mov     dx, 3C4h ;~ 08A6:0616
cs=0x8a6;eip=0x000619; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 19888                  mov     di, [bp+0Ch] ;~ 08A6:0619
cs=0x8a6;eip=0x00061c; 	T(ax = 0x102;);	// 19889                  mov     ax, 102h ;~ 08A6:061C
cs=0x8a6;eip=0x00061f; 	S(OUT(dx, ax));	// 19890                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:061F
cs=0x8a6;eip=0x000620; 	T(bx = 8;);	// 19892                  mov     bx, 8 ;~ 08A6:0620
loc_17663:
	// 5386 
cs=0x8a6;eip=0x000623; 	T(cx = 4;);	// 19895                  mov     cx, 4 ;~ 08A6:0623
loc_17666:
	// 5387 
cs=0x8a6;eip=0x000626; 	T(MOV(al, *(raddr(ds,si))));	// 19898                  mov     al, [si] ;~ 08A6:0626
cs=0x8a6;eip=0x000628; 	T(CMP(al, 0));	// 19899                  cmp     al, 0 ;~ 08A6:0628
cs=0x8a6;eip=0x00062a; 	J(JZ(loc_1766f));	// 19900                  jz      short loc_1766F ;~ 08A6:062A
cs=0x8a6;eip=0x00062c; 	X(MOV(*(raddr(es,di)), al));	// 19901                  mov     es:[di], al ;~ 08A6:062C
loc_1766f:
	// 5388 
cs=0x8a6;eip=0x00062f; 	T(INC(si));	// 19904                  inc     si ;~ 08A6:062F
cs=0x8a6;eip=0x000630; 	T(INC(di));	// 19905                  inc     di ;~ 08A6:0630
cs=0x8a6;eip=0x000631; 	J(LOOP(loc_17666));	// 19906                  loop    loc_17666 ;~ 08A6:0631
cs=0x8a6;eip=0x000633; 	T(ADD(di, 0x4C));	// 19907                  add     di, 4Ch ; 'L' ;~ 08A6:0633
cs=0x8a6;eip=0x000636; 	T(ADD(si, 0x4C));	// 19908                  add     si, 4Ch ; 'L' ;~ 08A6:0636
cs=0x8a6;eip=0x000639; 	T(DEC(bx));	// 19909                  dec     bx ;~ 08A6:0639
cs=0x8a6;eip=0x00063a; 	T(CMP(bx, 0));	// 19910                  cmp     bx, 0 ;~ 08A6:063A
cs=0x8a6;eip=0x00063d; 	J(JNZ(loc_17663));	// 19911                  jnz     short loc_17663 ;~ 08A6:063D
cs=0x8a6;eip=0x00063f; 	T(ADD(si, 0x3C00));	// 19912                  add     si, 3C00h ;~ 08A6:063F
cs=0x8a6;eip=0x000643; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 19913                  mov     di, [bp+0Ch] ;~ 08A6:0643
cs=0x8a6;eip=0x000646; 	T(ax = 0x202;);	// 19914                  mov     ax, 202h ;~ 08A6:0646
cs=0x8a6;eip=0x000649; 	S(OUT(dx, ax));	// 19915                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0649
cs=0x8a6;eip=0x00064a; 	T(bx = 8;);	// 19917                  mov     bx, 8 ;~ 08A6:064A
loc_1768d:
	// 5389 
cs=0x8a6;eip=0x00064d; 	T(cx = 4;);	// 19920                  mov     cx, 4 ;~ 08A6:064D
loc_17690:
	// 5390 
cs=0x8a6;eip=0x000650; 	T(MOV(al, *(raddr(ds,si))));	// 19923                  mov     al, [si] ;~ 08A6:0650
cs=0x8a6;eip=0x000652; 	T(CMP(al, 0));	// 19924                  cmp     al, 0 ;~ 08A6:0652
cs=0x8a6;eip=0x000654; 	J(JZ(loc_17699));	// 19925                  jz      short loc_17699 ;~ 08A6:0654
cs=0x8a6;eip=0x000656; 	X(MOV(*(raddr(es,di)), al));	// 19926                  mov     es:[di], al ;~ 08A6:0656
loc_17699:
	// 5391 
cs=0x8a6;eip=0x000659; 	T(INC(di));	// 19929                  inc     di ;~ 08A6:0659
cs=0x8a6;eip=0x00065a; 	T(INC(si));	// 19930                  inc     si ;~ 08A6:065A
cs=0x8a6;eip=0x00065b; 	J(LOOP(loc_17690));	// 19931                  loop    loc_17690 ;~ 08A6:065B
cs=0x8a6;eip=0x00065d; 	T(ADD(di, 0x4C));	// 19932                  add     di, 4Ch ; 'L' ;~ 08A6:065D
cs=0x8a6;eip=0x000660; 	T(ADD(si, 0x4C));	// 19933                  add     si, 4Ch ; 'L' ;~ 08A6:0660
cs=0x8a6;eip=0x000663; 	T(DEC(bx));	// 19934                  dec     bx ;~ 08A6:0663
cs=0x8a6;eip=0x000664; 	T(CMP(bx, 0));	// 19935                  cmp     bx, 0 ;~ 08A6:0664
cs=0x8a6;eip=0x000667; 	J(JNZ(loc_1768d));	// 19936                  jnz     short loc_1768D ;~ 08A6:0667
cs=0x8a6;eip=0x000669; 	T(ADD(si, 0x3C00));	// 19937                  add     si, 3C00h ;~ 08A6:0669
cs=0x8a6;eip=0x00066d; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 19938                  mov     di, [bp+0Ch] ;~ 08A6:066D
cs=0x8a6;eip=0x000670; 	T(ax = 0x402;);	// 19939                  mov     ax, 402h ;~ 08A6:0670
cs=0x8a6;eip=0x000673; 	S(OUT(dx, ax));	// 19940                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0673
cs=0x8a6;eip=0x000674; 	T(bx = 8;);	// 19942                  mov     bx, 8 ;~ 08A6:0674
loc_176b7:
	// 5392 
cs=0x8a6;eip=0x000677; 	T(cx = 4;);	// 19945                  mov     cx, 4 ;~ 08A6:0677
loc_176ba:
	// 5393 
cs=0x8a6;eip=0x00067a; 	T(MOV(al, *(raddr(ds,si))));	// 19948                  mov     al, [si] ;~ 08A6:067A
cs=0x8a6;eip=0x00067c; 	T(CMP(al, 0));	// 19949                  cmp     al, 0 ;~ 08A6:067C
cs=0x8a6;eip=0x00067e; 	J(JZ(loc_176c3));	// 19950                  jz      short loc_176C3 ;~ 08A6:067E
cs=0x8a6;eip=0x000680; 	X(MOV(*(raddr(es,di)), al));	// 19951                  mov     es:[di], al ;~ 08A6:0680
loc_176c3:
	// 5394 
cs=0x8a6;eip=0x000683; 	T(INC(di));	// 19954                  inc     di ;~ 08A6:0683
cs=0x8a6;eip=0x000684; 	T(INC(si));	// 19955                  inc     si ;~ 08A6:0684
cs=0x8a6;eip=0x000685; 	J(LOOP(loc_176ba));	// 19956                  loop    loc_176BA ;~ 08A6:0685
cs=0x8a6;eip=0x000687; 	T(ADD(di, 0x4C));	// 19957                  add     di, 4Ch ; 'L' ;~ 08A6:0687
cs=0x8a6;eip=0x00068a; 	T(ADD(si, 0x4C));	// 19958                  add     si, 4Ch ; 'L' ;~ 08A6:068A
cs=0x8a6;eip=0x00068d; 	T(DEC(bx));	// 19959                  dec     bx ;~ 08A6:068D
cs=0x8a6;eip=0x00068e; 	T(CMP(bx, 0));	// 19960                  cmp     bx, 0 ;~ 08A6:068E
cs=0x8a6;eip=0x000691; 	J(JNZ(loc_176b7));	// 19961                  jnz     short loc_176B7 ;~ 08A6:0691
cs=0x8a6;eip=0x000693; 	T(ADD(si, 0x3C00));	// 19962                  add     si, 3C00h ;~ 08A6:0693
cs=0x8a6;eip=0x000697; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 19963                  mov     di, [bp+0Ch] ;~ 08A6:0697
cs=0x8a6;eip=0x00069a; 	T(ax = 0x802;);	// 19964                  mov     ax, 802h ;~ 08A6:069A
cs=0x8a6;eip=0x00069d; 	S(OUT(dx, ax));	// 19965                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:069D
cs=0x8a6;eip=0x00069e; 	T(bx = 8;);	// 19967                  mov     bx, 8 ;~ 08A6:069E
loc_176e1:
	// 5395 
cs=0x8a6;eip=0x0006a1; 	T(cx = 4;);	// 19970                  mov     cx, 4 ;~ 08A6:06A1
loc_176e4:
	// 5396 
cs=0x8a6;eip=0x0006a4; 	T(MOV(al, *(raddr(ds,si))));	// 19973                  mov     al, [si] ;~ 08A6:06A4
cs=0x8a6;eip=0x0006a6; 	T(CMP(al, 0));	// 19974                  cmp     al, 0 ;~ 08A6:06A6
cs=0x8a6;eip=0x0006a8; 	J(JZ(loc_176ed));	// 19975                  jz      short loc_176ED ;~ 08A6:06A8
cs=0x8a6;eip=0x0006aa; 	X(MOV(*(raddr(es,di)), al));	// 19976                  mov     es:[di], al ;~ 08A6:06AA
loc_176ed:
	// 5397 
cs=0x8a6;eip=0x0006ad; 	T(INC(di));	// 19979                  inc     di ;~ 08A6:06AD
cs=0x8a6;eip=0x0006ae; 	T(INC(si));	// 19980                  inc     si ;~ 08A6:06AE
cs=0x8a6;eip=0x0006af; 	J(LOOP(loc_176e4));	// 19981                  loop    loc_176E4 ;~ 08A6:06AF
cs=0x8a6;eip=0x0006b1; 	T(ADD(di, 0x4C));	// 19982                  add     di, 4Ch ; 'L' ;~ 08A6:06B1
cs=0x8a6;eip=0x0006b4; 	T(ADD(si, 0x4C));	// 19983                  add     si, 4Ch ; 'L' ;~ 08A6:06B4
cs=0x8a6;eip=0x0006b7; 	T(DEC(bx));	// 19984                  dec     bx ;~ 08A6:06B7
cs=0x8a6;eip=0x0006b8; 	T(CMP(bx, 0));	// 19985                  cmp     bx, 0 ;~ 08A6:06B8
cs=0x8a6;eip=0x0006bb; 	J(JNZ(loc_176e1));	// 19986                  jnz     short loc_176E1 ;~ 08A6:06BB
cs=0x8a6;eip=0x0006bd; 	X(POP(ds));	// 19987                  pop     ds ;~ 08A6:06BD
cs=0x8a6;eip=0x0006be; 	X(POP(es));	// 19988                  pop     es ;~ 08A6:06BE
cs=0x8a6;eip=0x0006bf; 	X(POPA);	// 19990                  popa ;~ 08A6:06BF
cs=0x8a6;eip=0x0006c0; 	T(LEAVE);	// 19991                  leave ;~ 08A6:06C0
cs=0x8a6;eip=0x0006c1; 	J(RETF(0));	// 19992                  retf ;~ 08A6:06C1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1736a: 	goto loc_1736a;
        case m2c::kloc_17389: 	goto loc_17389;
        case m2c::kloc_173a8: 	goto loc_173a8;
        case m2c::kloc_173ef: 	goto loc_173ef;
        case m2c::kloc_1740e: 	goto loc_1740e;
        case m2c::kloc_1742d: 	goto loc_1742d;
        case m2c::kloc_1744c: 	goto loc_1744c;
        case m2c::kloc_17481: 	goto loc_17481;
        case m2c::kloc_174a0: 	goto loc_174a0;
        case m2c::kloc_174bf: 	goto loc_174bf;
        case m2c::kloc_174de: 	goto loc_174de;
        case m2c::kloc_17513: 	goto loc_17513;
        case m2c::kloc_17532: 	goto loc_17532;
        case m2c::kloc_17551: 	goto loc_17551;
        case m2c::kloc_17570: 	goto loc_17570;
        case m2c::kloc_175a5: 	goto loc_175a5;
        case m2c::kloc_175a8: 	goto loc_175a8;
        case m2c::kloc_175b1: 	goto loc_175b1;
        case m2c::kloc_175cf: 	goto loc_175cf;
        case m2c::kloc_175d2: 	goto loc_175d2;
        case m2c::kloc_175db: 	goto loc_175db;
        case m2c::kloc_175f9: 	goto loc_175f9;
        case m2c::kloc_175fc: 	goto loc_175fc;
        case m2c::kloc_17605: 	goto loc_17605;
        case m2c::kloc_17623: 	goto loc_17623;
        case m2c::kloc_17626: 	goto loc_17626;
        case m2c::kloc_1762f: 	goto loc_1762f;
        case m2c::kloc_17663: 	goto loc_17663;
        case m2c::kloc_17666: 	goto loc_17666;
        case m2c::kloc_1766f: 	goto loc_1766f;
        case m2c::kloc_1768d: 	goto loc_1768d;
        case m2c::kloc_17690: 	goto loc_17690;
        case m2c::kloc_17699: 	goto loc_17699;
        case m2c::kloc_176b7: 	goto loc_176b7;
        case m2c::kloc_176ba: 	goto loc_176ba;
        case m2c::kloc_176c3: 	goto loc_176c3;
        case m2c::kloc_176e1: 	goto loc_176e1;
        case m2c::kloc_176e4: 	goto loc_176e4;
        case m2c::kloc_176ed: 	goto loc_176ed;
        case m2c::kret_8a6_390: 	goto ret_8a6_390;
        case m2c::kret_8a6_422: 	goto ret_8a6_422;
        case m2c::kret_8a6_4b4: 	goto ret_8a6_4b4;
        case m2c::kret_8a6_546: 	goto ret_8a6_546;
        case m2c::kret_8a6_604: 	goto ret_8a6_604;
        case m2c::kseg004_300_proc: 	goto seg004_300_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_17702(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_17702:
    _begin:
#undef arg_0
#define arg_0 6
	// 20001 arg_0           = dword ptr  6 ;~ 08A6:06C2
#undef arg_4
#define arg_4 0x0A
	// 20002 arg_4           = word ptr  0Ah ;~ 08A6:06C2
#undef arg_6
#define arg_6 0x0C
	// 20003 arg_6           = word ptr  0Ch ;~ 08A6:06C2
#undef arg_8
#define arg_8 0x0E
	// 20004 arg_8           = word ptr  0Eh ;~ 08A6:06C2
#undef arg_a
#define arg_a 0x10
	// 20005 arg_A           = word ptr  10h ;~ 08A6:06C2
#undef arg_c
#define arg_c 0x12
	// 20006 arg_C           = word ptr  12h ;~ 08A6:06C2
#undef arg_e
#define arg_e 0x14
	// 20007 arg_E           = word ptr  14h ;~ 08A6:06C2
#undef arg_10
#define arg_10 0x16
	// 20008 arg_10          = byte ptr  16h ;~ 08A6:06C2
cs=0x8a6;eip=0x0006c2; 	X(ENTER(0, 0));	// 20010                  enter   0, 0 ;~ 08A6:06C2
cs=0x8a6;eip=0x0006c6; 	X(PUSHA);	// 20011                  pusha ;~ 08A6:06C6
cs=0x8a6;eip=0x0006c7; 	X(PUSH(es));	// 20012                  push    es ;~ 08A6:06C7
cs=0x8a6;eip=0x0006c8; 	X(PUSH(ds));	// 20013                  push    ds ;~ 08A6:06C8
cs=0x8a6;eip=0x0006c9; 	X(*(dw*)(&byte_18e75) = 0;);	// 20014                  mov     word ptr cs:byte_18E75, 0 ;~ 08A6:06C9
cs=0x8a6;eip=0x0006d0; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 20015                  mov     cx, [bp+arg_4] ;~ 08A6:06D0
cs=0x8a6;eip=0x0006d3; 	T(AND(cl, 3));	// 20016                  and     cl, 3 ;~ 08A6:06D3
cs=0x8a6;eip=0x0006d6; 	T(CMP(cl, 0));	// 20017                  cmp     cl, 0 ;~ 08A6:06D6
cs=0x8a6;eip=0x0006d9; 	J(JZ(loc_17740));	// 20018                  jz      short loc_17740 ;~ 08A6:06D9
cs=0x8a6;eip=0x0006db; 	T(CMP(cl, 1));	// 20019                  cmp     cl, 1 ;~ 08A6:06DB
cs=0x8a6;eip=0x0006de; 	J(JNZ(loc_1772a));	// 20020                  jnz     short loc_1772A ;~ 08A6:06DE
cs=0x8a6;eip=0x0006e0; 	X(*(dw*)(&byte_18e75) = 0x3E80;);	// 20021                  mov     word ptr cs:byte_18E75, 3E80h ;~ 08A6:06E0
cs=0x8a6;eip=0x0006e7; 	J(JMP(loc_17740));	// 20022                  jmp     short loc_17740 ;~ 08A6:06E7
loc_1772a:
	// 5398 
cs=0x8a6;eip=0x0006ea; 	T(CMP(cl, 2));	// 20028                  cmp     cl, 2 ;~ 08A6:06EA
cs=0x8a6;eip=0x0006ed; 	J(JNZ(loc_17739));	// 20029                  jnz     short loc_17739 ;~ 08A6:06ED
cs=0x8a6;eip=0x0006ef; 	X(*(dw*)(&byte_18e75) = 0x7D00;);	// 20030                  mov     word ptr cs:byte_18E75, 7D00h ;~ 08A6:06EF
cs=0x8a6;eip=0x0006f6; 	J(JMP(loc_17740));	// 20031                  jmp     short loc_17740 ;~ 08A6:06F6
loc_17739:
	// 5399 
cs=0x8a6;eip=0x0006f9; 	X(*(dw*)(&byte_18e75) = 0x0BB80;);	// 20037                  mov     word ptr cs:byte_18E75, 0BB80h ;~ 08A6:06F9
loc_17740:
	// 5400 
cs=0x8a6;eip=0x000700; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 20041                  mov     ax, [bp+arg_6] ;~ 08A6:0700
cs=0x8a6;eip=0x000703; 	T(SHL(ax, 4));	// 20042                  shl     ax, 4 ;~ 08A6:0703
cs=0x8a6;eip=0x000706; 	T(bx = ax;);	// 20043                  mov     bx, ax ;~ 08A6:0706
cs=0x8a6;eip=0x000708; 	T(SHL(bx, 2));	// 20044                  shl     bx, 2 ;~ 08A6:0708
cs=0x8a6;eip=0x00070b; 	T(ADD(ax, bx));	// 20045                  add     ax, bx ;~ 08A6:070B
cs=0x8a6;eip=0x00070d; 	X(*(dw*)(&byte_18e79) = ax;);	// 20046                  mov     word ptr cs:byte_18E79, ax ;~ 08A6:070D
cs=0x8a6;eip=0x000711; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 20047                  mov     ax, [bp+arg_4] ;~ 08A6:0711
cs=0x8a6;eip=0x000714; 	T(SHR(ax, 2));	// 20048                  shr     ax, 2 ;~ 08A6:0714
cs=0x8a6;eip=0x000717; 	X(ADD(*(dw*)(&byte_18e79), ax));	// 20049                  add     word ptr cs:byte_18E79, ax ;~ 08A6:0717
cs=0x8a6;eip=0x00071c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_c))));	// 20050                  mov     ax, [bp+arg_C] ;~ 08A6:071C
cs=0x8a6;eip=0x00071f; 	T(SHL(ax, 4));	// 20051                  shl     ax, 4 ;~ 08A6:071F
cs=0x8a6;eip=0x000722; 	T(bx = ax;);	// 20052                  mov     bx, ax ;~ 08A6:0722
cs=0x8a6;eip=0x000724; 	T(SHL(bx, 2));	// 20053                  shl     bx, 2 ;~ 08A6:0724
cs=0x8a6;eip=0x000727; 	T(ADD(ax, bx));	// 20054                  add     ax, bx ;~ 08A6:0727
cs=0x8a6;eip=0x000729; 	X(ADD(*(dw*)(raddr(ss,bp+arg_8)), ax));	// 20055                  add     [bp+arg_8], ax ;~ 08A6:0729
cs=0x8a6;eip=0x00072c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 20056                  mov     ax, [bp+arg_A] ;~ 08A6:072C
cs=0x8a6;eip=0x00072f; 	T(SHR(ax, 2));	// 20057                  shr     ax, 2 ;~ 08A6:072F
cs=0x8a6;eip=0x000732; 	X(ADD(*(dw*)(raddr(ss,bp+arg_8)), ax));	// 20058                  add     [bp+arg_8], ax ;~ 08A6:0732
cs=0x8a6;eip=0x000735; 	X(SHR(*(dw*)(raddr(ss,bp+arg_e)), 2));	// 20059                  shr     [bp+arg_E], 2 ;~ 08A6:0735
cs=0x8a6;eip=0x000739; 	T(ax = 0x0A000;);	// 20060                  mov     ax, 0A000h ;~ 08A6:0739
cs=0x8a6;eip=0x00073c; 	T(es = ax;);	// 20061                  mov     es, ax ;~ 08A6:073C
cs=0x8a6;eip=0x00073e; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_8))));	// 20063                  mov     di, [bp+arg_8] ;~ 08A6:073E
cs=0x8a6;eip=0x000741; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_0))));	// 20064                  lds     si, [bp+arg_0] ;~ 08A6:0741
cs=0x8a6;eip=0x000744; 	X(*(dw*)(&byte_18e77) = si;);	// 20065                  mov     word ptr cs:byte_18E77, si ;~ 08A6:0744
cs=0x8a6;eip=0x000749; 	T(ADD(si, *(dw*)(&byte_18e75)));	// 20066                  add     si, word ptr cs:byte_18E75 ;~ 08A6:0749
cs=0x8a6;eip=0x00074e; 	T(ADD(si, *(dw*)(&byte_18e79)));	// 20067                  add     si, word ptr cs:byte_18E79 ;~ 08A6:074E
cs=0x8a6;eip=0x000753; 	X(byte_18e7b = 4;);	// 20068                  mov     cs:byte_18E7B, 4 ;~ 08A6:0753
cs=0x8a6;eip=0x000759; 	T(dx = 0x3C4;);	// 20069                  mov     dx, 3C4h ;~ 08A6:0759
cs=0x8a6;eip=0x00075c; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_a))));	// 20070                  mov     cx, [bp+arg_A] ;~ 08A6:075C
cs=0x8a6;eip=0x00075f; 	T(AND(cl, 3));	// 20071                  and     cl, 3 ;~ 08A6:075F
cs=0x8a6;eip=0x000762; 	T(ah = 1;);	// 20072                  mov     ah, 1 ;~ 08A6:0762
cs=0x8a6;eip=0x000764; 	T(SHL(ah, cl));	// 20073                  shl     ah, cl ;~ 08A6:0764
cs=0x8a6;eip=0x000766; 	T(al = 2;);	// 20074                  mov     al, 2 ;~ 08A6:0766
loc_177a8:
	// 5401 
cs=0x8a6;eip=0x000768; 	T(MOV(bl, *(raddr(ss,bp+arg_10))));	// 20077                  mov     bl, [bp+arg_10] ;~ 08A6:0768
cs=0x8a6;eip=0x00076b; 	S(OUT(dx, ax));	// 20078                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:076B
loc_177ac:
	// 5402 
cs=0x8a6;eip=0x00076c; 	X(PUSH(si));	// 20083                  push    si ;~ 08A6:076C
cs=0x8a6;eip=0x00076d; 	X(PUSH(di));	// 20084                  push    di ;~ 08A6:076D
cs=0x8a6;eip=0x00076e; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_e))));	// 20085                  mov     cx, [bp+arg_E] ;~ 08A6:076E
loc_177b1:
	// 5403 
cs=0x8a6;eip=0x000771; 	T(MOV(bh, *(raddr(ds,si))));	// 20088                  mov     bh, [si] ;~ 08A6:0771
cs=0x8a6;eip=0x000773; 	T(CMP(bh, 0));	// 20089                  cmp     bh, 0 ;~ 08A6:0773
cs=0x8a6;eip=0x000776; 	J(JZ(loc_177bb));	// 20090                  jz      short loc_177BB ;~ 08A6:0776
cs=0x8a6;eip=0x000778; 	X(MOV(*(raddr(es,di)), bh));	// 20091                  mov     es:[di], bh ;~ 08A6:0778
loc_177bb:
	// 5404 
cs=0x8a6;eip=0x00077b; 	T(INC(di));	// 20094                  inc     di ;~ 08A6:077B
cs=0x8a6;eip=0x00077c; 	T(INC(si));	// 20095                  inc     si ;~ 08A6:077C
cs=0x8a6;eip=0x00077d; 	J(LOOP(loc_177b1));	// 20096                  loop    loc_177B1 ;~ 08A6:077D
cs=0x8a6;eip=0x00077f; 	X(POP(di));	// 20097                  pop     di ;~ 08A6:077F
cs=0x8a6;eip=0x000780; 	X(POP(si));	// 20098                  pop     si ;~ 08A6:0780
cs=0x8a6;eip=0x000781; 	T(ADD(si, 0x50));	// 20099                  add     si, 50h ; 'P' ;~ 08A6:0781
cs=0x8a6;eip=0x000784; 	T(ADD(di, 0x50));	// 20100                  add     di, 50h ; 'P' ;~ 08A6:0784
cs=0x8a6;eip=0x000787; 	T(DEC(bl));	// 20101                  dec     bl ;~ 08A6:0787
cs=0x8a6;eip=0x000789; 	J(JNZ(loc_177ac));	// 20102                  jnz     short loc_177AC ;~ 08A6:0789
cs=0x8a6;eip=0x00078b; 	X(DEC(byte_18e7b));	// 20103                  dec     cs:byte_18E7B ;~ 08A6:078B
cs=0x8a6;eip=0x000790; 	J(JZ(loc_1780e));	// 20104                  jz      short loc_1780E ;~ 08A6:0790
cs=0x8a6;eip=0x000792; 	T(SHL(ah, 1));	// 20105                  shl     ah, 1 ;~ 08A6:0792
cs=0x8a6;eip=0x000794; 	T(CMP(ah, 0x10));	// 20106                  cmp     ah, 10h ;~ 08A6:0794
cs=0x8a6;eip=0x000797; 	J(JNZ(loc_177de));	// 20107                  jnz     short loc_177DE ;~ 08A6:0797
cs=0x8a6;eip=0x000799; 	T(ah = 1;);	// 20108                  mov     ah, 1 ;~ 08A6:0799
cs=0x8a6;eip=0x00079b; 	X(INC(*(dw*)(raddr(ss,bp+arg_8))));	// 20109                  inc     [bp+arg_8] ;~ 08A6:079B
loc_177de:
	// 5405 
cs=0x8a6;eip=0x00079e; 	X(ADD(*(dw*)(&byte_18e75), 0x3E80));	// 20112                  add     word ptr cs:byte_18E75, 3E80h ;~ 08A6:079E
cs=0x8a6;eip=0x0007a5; 	T(CMP(*(dw*)(&byte_18e75), 0x0FA00));	// 20113                  cmp     word ptr cs:byte_18E75, 0FA00h ;~ 08A6:07A5
cs=0x8a6;eip=0x0007ac; 	J(JNZ(loc_177fa));	// 20114                  jnz     short loc_177FA ;~ 08A6:07AC
cs=0x8a6;eip=0x0007ae; 	X(*(dw*)(&byte_18e75) = 0;);	// 20115                  mov     word ptr cs:byte_18E75, 0 ;~ 08A6:07AE
cs=0x8a6;eip=0x0007b5; 	X(INC(*(dw*)(&byte_18e79)));	// 20116                  inc     word ptr cs:byte_18E79 ;~ 08A6:07B5
loc_177fa:
	// 5406 
cs=0x8a6;eip=0x0007ba; 	T(si = *(dw*)(&byte_18e77););	// 20119                  mov     si, word ptr cs:byte_18E77 ;~ 08A6:07BA
cs=0x8a6;eip=0x0007bf; 	T(ADD(si, *(dw*)(&byte_18e75)));	// 20120                  add     si, word ptr cs:byte_18E75 ;~ 08A6:07BF
cs=0x8a6;eip=0x0007c4; 	T(ADD(si, *(dw*)(&byte_18e79)));	// 20121                  add     si, word ptr cs:byte_18E79 ;~ 08A6:07C4
cs=0x8a6;eip=0x0007c9; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_8))));	// 20122                  mov     di, [bp+arg_8] ;~ 08A6:07C9
cs=0x8a6;eip=0x0007cc; 	J(JMP(loc_177a8));	// 20123                  jmp     short loc_177A8 ;~ 08A6:07CC
loc_1780e:
	// 5407 
cs=0x8a6;eip=0x0007ce; 	X(POP(ds));	// 20127                  pop     ds ;~ 08A6:07CE
cs=0x8a6;eip=0x0007cf; 	X(POP(es));	// 20128                  pop     es ;~ 08A6:07CF
cs=0x8a6;eip=0x0007d0; 	X(POPA);	// 20130                  popa ;~ 08A6:07D0
cs=0x8a6;eip=0x0007d1; 	T(LEAVE);	// 20131                  leave ;~ 08A6:07D1
cs=0x8a6;eip=0x0007d2; 	J(RETF(0));	// 20132                  retf ;~ 08A6:07D2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1772a: 	goto loc_1772a;
        case m2c::kloc_17739: 	goto loc_17739;
        case m2c::kloc_17740: 	goto loc_17740;
        case m2c::kloc_177a8: 	goto loc_177a8;
        case m2c::kloc_177ac: 	goto loc_177ac;
        case m2c::kloc_177b1: 	goto loc_177b1;
        case m2c::kloc_177bb: 	goto loc_177bb;
        case m2c::kloc_177de: 	goto loc_177de;
        case m2c::kloc_177fa: 	goto loc_177fa;
        case m2c::kloc_1780e: 	goto loc_1780e;
        case m2c::ksub_17702: 	goto sub_17702;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg004_7d3_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg004_7d3_proc:
    _begin:
cs=0x8a6;eip=0x0007d3; 	X(ENTER(0, 0));	// 20136                  enter   0, 0 ;~ 08A6:07D3
cs=0x8a6;eip=0x0007d7; 	X(PUSHA);	// 20137                  pusha ;~ 08A6:07D7
cs=0x8a6;eip=0x0007d8; 	X(PUSH(es));	// 20138                  push    es ;~ 08A6:07D8
cs=0x8a6;eip=0x0007d9; 	X(PUSH(ds));	// 20139                  push    ds ;~ 08A6:07D9
cs=0x8a6;eip=0x0007da; 	X(*(dw*)(&byte_18e75) = 0;);	// 20140                  mov     word ptr cs:byte_18E75, 0 ;~ 08A6:07DA
cs=0x8a6;eip=0x0007e1; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0A))));	// 20141                  mov     cx, [bp+0Ah] ;~ 08A6:07E1
cs=0x8a6;eip=0x0007e4; 	T(AND(cl, 3));	// 20142                  and     cl, 3 ;~ 08A6:07E4
cs=0x8a6;eip=0x0007e7; 	T(CMP(cl, 0));	// 20143                  cmp     cl, 0 ;~ 08A6:07E7
cs=0x8a6;eip=0x0007ea; 	J(JZ(loc_17851));	// 20144                  jz      short loc_17851 ;~ 08A6:07EA
cs=0x8a6;eip=0x0007ec; 	T(CMP(cl, 1));	// 20145                  cmp     cl, 1 ;~ 08A6:07EC
cs=0x8a6;eip=0x0007ef; 	J(JNZ(loc_1783b));	// 20146                  jnz     short loc_1783B ;~ 08A6:07EF
cs=0x8a6;eip=0x0007f1; 	X(*(dw*)(&byte_18e75) = 0x3E80;);	// 20147                  mov     word ptr cs:byte_18E75, 3E80h ;~ 08A6:07F1
cs=0x8a6;eip=0x0007f8; 	J(JMP(loc_17851));	// 20148                  jmp     short loc_17851 ;~ 08A6:07F8
loc_1783b:
	// 5408 
cs=0x8a6;eip=0x0007fb; 	T(CMP(cl, 2));	// 20154                  cmp     cl, 2 ;~ 08A6:07FB
cs=0x8a6;eip=0x0007fe; 	J(JNZ(loc_1784a));	// 20155                  jnz     short loc_1784A ;~ 08A6:07FE
cs=0x8a6;eip=0x000800; 	X(*(dw*)(&byte_18e75) = 0x7D00;);	// 20156                  mov     word ptr cs:byte_18E75, 7D00h ;~ 08A6:0800
cs=0x8a6;eip=0x000807; 	J(JMP(loc_17851));	// 20157                  jmp     short loc_17851 ;~ 08A6:0807
loc_1784a:
	// 5409 
cs=0x8a6;eip=0x00080a; 	X(*(dw*)(&byte_18e75) = 0x0BB80;);	// 20163                  mov     word ptr cs:byte_18E75, 0BB80h ;~ 08A6:080A
loc_17851:
	// 5410 
cs=0x8a6;eip=0x000811; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0C))));	// 20167                  mov     ax, [bp+0Ch] ;~ 08A6:0811
cs=0x8a6;eip=0x000814; 	T(SHL(ax, 4));	// 20168                  shl     ax, 4 ;~ 08A6:0814
cs=0x8a6;eip=0x000817; 	T(bx = ax;);	// 20169                  mov     bx, ax ;~ 08A6:0817
cs=0x8a6;eip=0x000819; 	T(SHL(bx, 2));	// 20170                  shl     bx, 2 ;~ 08A6:0819
cs=0x8a6;eip=0x00081c; 	T(ADD(ax, bx));	// 20171                  add     ax, bx ;~ 08A6:081C
cs=0x8a6;eip=0x00081e; 	X(*(dw*)(&byte_18e79) = ax;);	// 20172                  mov     word ptr cs:byte_18E79, ax ;~ 08A6:081E
cs=0x8a6;eip=0x000822; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 20173                  mov     ax, [bp+0Ah] ;~ 08A6:0822
cs=0x8a6;eip=0x000825; 	T(SHR(ax, 2));	// 20174                  shr     ax, 2 ;~ 08A6:0825
cs=0x8a6;eip=0x000828; 	X(ADD(*(dw*)(&byte_18e79), ax));	// 20175                  add     word ptr cs:byte_18E79, ax ;~ 08A6:0828
cs=0x8a6;eip=0x00082d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x12))));	// 20176                  mov     ax, [bp+12h] ;~ 08A6:082D
cs=0x8a6;eip=0x000830; 	T(SHL(ax, 4));	// 20177                  shl     ax, 4 ;~ 08A6:0830
cs=0x8a6;eip=0x000833; 	T(bx = ax;);	// 20178                  mov     bx, ax ;~ 08A6:0833
cs=0x8a6;eip=0x000835; 	T(SHL(bx, 2));	// 20179                  shl     bx, 2 ;~ 08A6:0835
cs=0x8a6;eip=0x000838; 	T(ADD(ax, bx));	// 20180                  add     ax, bx ;~ 08A6:0838
cs=0x8a6;eip=0x00083a; 	X(ADD(*(dw*)(raddr(ss,bp+0x0E)), ax));	// 20181                  add     [bp+0Eh], ax ;~ 08A6:083A
cs=0x8a6;eip=0x00083d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x10))));	// 20182                  mov     ax, [bp+10h] ;~ 08A6:083D
cs=0x8a6;eip=0x000840; 	T(SHR(ax, 2));	// 20183                  shr     ax, 2 ;~ 08A6:0840
cs=0x8a6;eip=0x000843; 	X(ADD(*(dw*)(raddr(ss,bp+0x0E)), ax));	// 20184                  add     [bp+0Eh], ax ;~ 08A6:0843
cs=0x8a6;eip=0x000846; 	T(ax = 0x0A000;);	// 20185                  mov     ax, 0A000h ;~ 08A6:0846
cs=0x8a6;eip=0x000849; 	T(es = ax;);	// 20186                  mov     es, ax ;~ 08A6:0849
cs=0x8a6;eip=0x00084b; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0E))));	// 20188                  mov     di, [bp+0Eh] ;~ 08A6:084B
cs=0x8a6;eip=0x00084e; 	T(LDS(si, *(dw*)(raddr(ss,bp+6))));	// 20189                  lds     si, [bp+6] ;~ 08A6:084E
cs=0x8a6;eip=0x000851; 	X(*(dw*)(&byte_18e77) = si;);	// 20190                  mov     word ptr cs:byte_18E77, si ;~ 08A6:0851
cs=0x8a6;eip=0x000856; 	T(ADD(si, *(dw*)(&byte_18e75)));	// 20191                  add     si, word ptr cs:byte_18E75 ;~ 08A6:0856
cs=0x8a6;eip=0x00085b; 	T(ADD(si, *(dw*)(&byte_18e79)));	// 20192                  add     si, word ptr cs:byte_18E79 ;~ 08A6:085B
cs=0x8a6;eip=0x000860; 	X(byte_18e7b = 4;);	// 20193                  mov     cs:byte_18E7B, 4 ;~ 08A6:0860
cs=0x8a6;eip=0x000866; 	T(dx = 0x3C4;);	// 20194                  mov     dx, 3C4h ;~ 08A6:0866
cs=0x8a6;eip=0x000869; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x10))));	// 20195                  mov     cx, [bp+10h] ;~ 08A6:0869
cs=0x8a6;eip=0x00086c; 	T(AND(cl, 3));	// 20196                  and     cl, 3 ;~ 08A6:086C
cs=0x8a6;eip=0x00086f; 	T(ah = 1;);	// 20197                  mov     ah, 1 ;~ 08A6:086F
cs=0x8a6;eip=0x000871; 	T(SHL(ah, cl));	// 20198                  shl     ah, cl ;~ 08A6:0871
cs=0x8a6;eip=0x000873; 	T(al = 2;);	// 20199                  mov     al, 2 ;~ 08A6:0873
loc_178b5:
	// 5411 
cs=0x8a6;eip=0x000875; 	T(bl = 8;);	// 20202                  mov     bl, 8 ;~ 08A6:0875
cs=0x8a6;eip=0x000877; 	S(OUT(dx, ax));	// 20203                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0877
loc_178b8:
	// 5412 
cs=0x8a6;eip=0x000878; 	X(PUSH(si));	// 20208                  push    si ;~ 08A6:0878
cs=0x8a6;eip=0x000879; 	X(PUSH(di));	// 20209                  push    di ;~ 08A6:0879
cs=0x8a6;eip=0x00087a; 	T(cx = 2;);	// 20210                  mov     cx, 2 ;~ 08A6:087A
loc_178bd:
	// 5413 
cs=0x8a6;eip=0x00087d; 	T(MOV(bh, *(raddr(ds,si))));	// 20213                  mov     bh, [si] ;~ 08A6:087D
cs=0x8a6;eip=0x00087f; 	T(CMP(bh, 0));	// 20214                  cmp     bh, 0 ;~ 08A6:087F
cs=0x8a6;eip=0x000882; 	J(JZ(loc_178ca));	// 20215                  jz      short loc_178CA ;~ 08A6:0882
cs=0x8a6;eip=0x000884; 	T(MOV(bh, *(raddr(ss,bp+0x14))));	// 20216                  mov     bh, [bp+14h] ;~ 08A6:0884
cs=0x8a6;eip=0x000887; 	X(MOV(*(raddr(es,di)), bh));	// 20217                  mov     es:[di], bh ;~ 08A6:0887
loc_178ca:
	// 5414 
cs=0x8a6;eip=0x00088a; 	T(INC(di));	// 20220                  inc     di ;~ 08A6:088A
cs=0x8a6;eip=0x00088b; 	T(INC(si));	// 20221                  inc     si ;~ 08A6:088B
cs=0x8a6;eip=0x00088c; 	J(LOOP(loc_178bd));	// 20222                  loop    loc_178BD ;~ 08A6:088C
cs=0x8a6;eip=0x00088e; 	X(POP(di));	// 20223                  pop     di ;~ 08A6:088E
cs=0x8a6;eip=0x00088f; 	X(POP(si));	// 20224                  pop     si ;~ 08A6:088F
cs=0x8a6;eip=0x000890; 	T(ADD(si, 0x50));	// 20225                  add     si, 50h ; 'P' ;~ 08A6:0890
cs=0x8a6;eip=0x000893; 	T(ADD(di, 0x50));	// 20226                  add     di, 50h ; 'P' ;~ 08A6:0893
cs=0x8a6;eip=0x000896; 	T(DEC(bl));	// 20227                  dec     bl ;~ 08A6:0896
cs=0x8a6;eip=0x000898; 	J(JNZ(loc_178b8));	// 20228                  jnz     short loc_178B8 ;~ 08A6:0898
cs=0x8a6;eip=0x00089a; 	X(DEC(byte_18e7b));	// 20229                  dec     cs:byte_18E7B ;~ 08A6:089A
cs=0x8a6;eip=0x00089f; 	J(JZ(loc_1791d));	// 20230                  jz      short loc_1791D ;~ 08A6:089F
cs=0x8a6;eip=0x0008a1; 	T(SHL(ah, 1));	// 20231                  shl     ah, 1 ;~ 08A6:08A1
cs=0x8a6;eip=0x0008a3; 	T(CMP(ah, 0x10));	// 20232                  cmp     ah, 10h ;~ 08A6:08A3
cs=0x8a6;eip=0x0008a6; 	J(JNZ(loc_178ed));	// 20233                  jnz     short loc_178ED ;~ 08A6:08A6
cs=0x8a6;eip=0x0008a8; 	T(ah = 1;);	// 20234                  mov     ah, 1 ;~ 08A6:08A8
cs=0x8a6;eip=0x0008aa; 	X(INC(*(dw*)(raddr(ss,bp+0x0E))));	// 20235                  inc     word ptr [bp+0Eh] ;~ 08A6:08AA
loc_178ed:
	// 5415 
cs=0x8a6;eip=0x0008ad; 	X(ADD(*(dw*)(&byte_18e75), 0x3E80));	// 20238                  add     word ptr cs:byte_18E75, 3E80h ;~ 08A6:08AD
cs=0x8a6;eip=0x0008b4; 	T(CMP(*(dw*)(&byte_18e75), 0x0FA00));	// 20239                  cmp     word ptr cs:byte_18E75, 0FA00h ;~ 08A6:08B4
cs=0x8a6;eip=0x0008bb; 	J(JNZ(loc_17909));	// 20240                  jnz     short loc_17909 ;~ 08A6:08BB
cs=0x8a6;eip=0x0008bd; 	X(*(dw*)(&byte_18e75) = 0;);	// 20241                  mov     word ptr cs:byte_18E75, 0 ;~ 08A6:08BD
cs=0x8a6;eip=0x0008c4; 	X(INC(*(dw*)(&byte_18e79)));	// 20242                  inc     word ptr cs:byte_18E79 ;~ 08A6:08C4
loc_17909:
	// 5416 
cs=0x8a6;eip=0x0008c9; 	T(si = *(dw*)(&byte_18e77););	// 20245                  mov     si, word ptr cs:byte_18E77 ;~ 08A6:08C9
cs=0x8a6;eip=0x0008ce; 	T(ADD(si, *(dw*)(&byte_18e75)));	// 20246                  add     si, word ptr cs:byte_18E75 ;~ 08A6:08CE
cs=0x8a6;eip=0x0008d3; 	T(ADD(si, *(dw*)(&byte_18e79)));	// 20247                  add     si, word ptr cs:byte_18E79 ;~ 08A6:08D3
cs=0x8a6;eip=0x0008d8; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0E))));	// 20248                  mov     di, [bp+0Eh] ;~ 08A6:08D8
cs=0x8a6;eip=0x0008db; 	J(JMP(loc_178b5));	// 20249                  jmp     short loc_178B5 ;~ 08A6:08DB
loc_1791d:
	// 5417 
cs=0x8a6;eip=0x0008dd; 	X(POP(ds));	// 20253                  pop     ds ;~ 08A6:08DD
cs=0x8a6;eip=0x0008de; 	X(POP(es));	// 20254                  pop     es ;~ 08A6:08DE
cs=0x8a6;eip=0x0008df; 	X(POPA);	// 20256                  popa ;~ 08A6:08DF
cs=0x8a6;eip=0x0008e0; 	T(LEAVE);	// 20257                  leave ;~ 08A6:08E0
cs=0x8a6;eip=0x0008e1; 	J(RETF(0));	// 20258                  retf ;~ 08A6:08E1
ret_8a6_8e2:
	// 5418 
cs=0x8a6;eip=0x0008e2; 	X(ENTER(0, 0));	// 20260                  enter   0, 0 ;~ 08A6:08E2
cs=0x8a6;eip=0x0008e6; 	X(PUSHA);	// 20261                  pusha ;~ 08A6:08E6
cs=0x8a6;eip=0x0008e7; 	X(PUSH(es));	// 20262                  push    es ;~ 08A6:08E7
cs=0x8a6;eip=0x0008e8; 	X(PUSH(ds));	// 20263                  push    ds ;~ 08A6:08E8
cs=0x8a6;eip=0x0008e9; 	X(*(dw*)(&byte_18e75) = 0;);	// 20264                  mov     word ptr cs:byte_18E75, 0 ;~ 08A6:08E9
cs=0x8a6;eip=0x0008f0; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0A))));	// 20265                  mov     cx, [bp+0Ah] ;~ 08A6:08F0
cs=0x8a6;eip=0x0008f3; 	T(AND(cl, 3));	// 20266                  and     cl, 3 ;~ 08A6:08F3
cs=0x8a6;eip=0x0008f6; 	T(CMP(cl, 0));	// 20267                  cmp     cl, 0 ;~ 08A6:08F6
cs=0x8a6;eip=0x0008f9; 	J(JZ(loc_17960));	// 20268                  jz      short loc_17960 ;~ 08A6:08F9
cs=0x8a6;eip=0x0008fb; 	T(CMP(cl, 1));	// 20269                  cmp     cl, 1 ;~ 08A6:08FB
cs=0x8a6;eip=0x0008fe; 	J(JNZ(loc_1794a));	// 20270                  jnz     short loc_1794A ;~ 08A6:08FE
cs=0x8a6;eip=0x000900; 	X(*(dw*)(&byte_18e75) = 0x3E80;);	// 20271                  mov     word ptr cs:byte_18E75, 3E80h ;~ 08A6:0900
cs=0x8a6;eip=0x000907; 	J(JMP(loc_17960));	// 20272                  jmp     short loc_17960 ;~ 08A6:0907
loc_1794a:
	// 5419 
cs=0x8a6;eip=0x00090a; 	T(CMP(cl, 2));	// 20278                  cmp     cl, 2 ;~ 08A6:090A
cs=0x8a6;eip=0x00090d; 	J(JNZ(loc_17959));	// 20279                  jnz     short loc_17959 ;~ 08A6:090D
cs=0x8a6;eip=0x00090f; 	X(*(dw*)(&byte_18e75) = 0x7D00;);	// 20280                  mov     word ptr cs:byte_18E75, 7D00h ;~ 08A6:090F
cs=0x8a6;eip=0x000916; 	J(JMP(loc_17960));	// 20281                  jmp     short loc_17960 ;~ 08A6:0916
loc_17959:
	// 5420 
cs=0x8a6;eip=0x000919; 	X(*(dw*)(&byte_18e75) = 0x0BB80;);	// 20287                  mov     word ptr cs:byte_18E75, 0BB80h ;~ 08A6:0919
loc_17960:
	// 5421 
cs=0x8a6;eip=0x000920; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0C))));	// 20291                  mov     ax, [bp+0Ch] ;~ 08A6:0920
cs=0x8a6;eip=0x000923; 	T(SHL(ax, 4));	// 20292                  shl     ax, 4 ;~ 08A6:0923
cs=0x8a6;eip=0x000926; 	T(bx = ax;);	// 20293                  mov     bx, ax ;~ 08A6:0926
cs=0x8a6;eip=0x000928; 	T(SHL(bx, 2));	// 20294                  shl     bx, 2 ;~ 08A6:0928
cs=0x8a6;eip=0x00092b; 	T(ADD(ax, bx));	// 20295                  add     ax, bx ;~ 08A6:092B
cs=0x8a6;eip=0x00092d; 	X(*(dw*)(&byte_18e79) = ax;);	// 20296                  mov     word ptr cs:byte_18E79, ax ;~ 08A6:092D
cs=0x8a6;eip=0x000931; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 20297                  mov     ax, [bp+0Ah] ;~ 08A6:0931
cs=0x8a6;eip=0x000934; 	T(SHR(ax, 2));	// 20298                  shr     ax, 2 ;~ 08A6:0934
cs=0x8a6;eip=0x000937; 	X(ADD(*(dw*)(&byte_18e79), ax));	// 20299                  add     word ptr cs:byte_18E79, ax ;~ 08A6:0937
cs=0x8a6;eip=0x00093c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x12))));	// 20300                  mov     ax, [bp+12h] ;~ 08A6:093C
cs=0x8a6;eip=0x00093f; 	T(SHL(ax, 4));	// 20301                  shl     ax, 4 ;~ 08A6:093F
cs=0x8a6;eip=0x000942; 	T(bx = ax;);	// 20302                  mov     bx, ax ;~ 08A6:0942
cs=0x8a6;eip=0x000944; 	T(SHL(bx, 2));	// 20303                  shl     bx, 2 ;~ 08A6:0944
cs=0x8a6;eip=0x000947; 	T(ADD(ax, bx));	// 20304                  add     ax, bx ;~ 08A6:0947
cs=0x8a6;eip=0x000949; 	X(ADD(*(dw*)(raddr(ss,bp+0x0E)), ax));	// 20305                  add     [bp+0Eh], ax ;~ 08A6:0949
cs=0x8a6;eip=0x00094c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x10))));	// 20306                  mov     ax, [bp+10h] ;~ 08A6:094C
cs=0x8a6;eip=0x00094f; 	T(SHR(ax, 2));	// 20307                  shr     ax, 2 ;~ 08A6:094F
cs=0x8a6;eip=0x000952; 	X(ADD(*(dw*)(raddr(ss,bp+0x0E)), ax));	// 20308                  add     [bp+0Eh], ax ;~ 08A6:0952
cs=0x8a6;eip=0x000955; 	X(SHR(*(dw*)(raddr(ss,bp+0x14)), 2));	// 20309                  shr     word ptr [bp+14h], 2 ;~ 08A6:0955
cs=0x8a6;eip=0x000959; 	T(ax = 0x0A000;);	// 20310                  mov     ax, 0A000h ;~ 08A6:0959
cs=0x8a6;eip=0x00095c; 	T(es = ax;);	// 20311                  mov     es, ax ;~ 08A6:095C
cs=0x8a6;eip=0x00095e; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0E))));	// 20313                  mov     di, [bp+0Eh] ;~ 08A6:095E
cs=0x8a6;eip=0x000961; 	T(LDS(si, *(dw*)(raddr(ss,bp+6))));	// 20314                  lds     si, [bp+6] ;~ 08A6:0961
cs=0x8a6;eip=0x000964; 	X(*(dw*)(&byte_18e77) = si;);	// 20315                  mov     word ptr cs:byte_18E77, si ;~ 08A6:0964
cs=0x8a6;eip=0x000969; 	T(ADD(si, *(dw*)(&byte_18e75)));	// 20316                  add     si, word ptr cs:byte_18E75 ;~ 08A6:0969
cs=0x8a6;eip=0x00096e; 	T(ADD(si, *(dw*)(&byte_18e79)));	// 20317                  add     si, word ptr cs:byte_18E79 ;~ 08A6:096E
cs=0x8a6;eip=0x000973; 	X(byte_18e7b = 4;);	// 20318                  mov     cs:byte_18E7B, 4 ;~ 08A6:0973
cs=0x8a6;eip=0x000979; 	T(dx = 0x3C4;);	// 20319                  mov     dx, 3C4h ;~ 08A6:0979
cs=0x8a6;eip=0x00097c; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x10))));	// 20320                  mov     cx, [bp+10h] ;~ 08A6:097C
cs=0x8a6;eip=0x00097f; 	T(AND(cl, 3));	// 20321                  and     cl, 3 ;~ 08A6:097F
cs=0x8a6;eip=0x000982; 	X(byte_18e74 = cl;);	// 20322                  mov     cs:byte_18E74, cl ;~ 08A6:0982
cs=0x8a6;eip=0x000987; 	T(ah = 1;);	// 20323                  mov     ah, 1 ;~ 08A6:0987
cs=0x8a6;eip=0x000989; 	T(SHL(ah, cl));	// 20324                  shl     ah, cl ;~ 08A6:0989
cs=0x8a6;eip=0x00098b; 	T(al = 2;);	// 20325                  mov     al, 2 ;~ 08A6:098B
loc_179cd:
	// 5422 
cs=0x8a6;eip=0x00098d; 	T(MOV(bl, *(raddr(ss,bp+0x16))));	// 20328                  mov     bl, [bp+16h] ;~ 08A6:098D
cs=0x8a6;eip=0x000990; 	S(OUT(dx, ax));	// 20329                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0990
loc_179d1:
	// 5423 
cs=0x8a6;eip=0x000991; 	X(PUSH(si));	// 20334                  push    si ;~ 08A6:0991
cs=0x8a6;eip=0x000992; 	X(PUSH(di));	// 20335                  push    di ;~ 08A6:0992
cs=0x8a6;eip=0x000993; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x14))));	// 20336                  mov     cx, [bp+14h] ;~ 08A6:0993
loc_179d6:
	// 5424 
cs=0x8a6;eip=0x000996; 	T(MOV(bh, *(raddr(ds,si))));	// 20339                  mov     bh, [si] ;~ 08A6:0996
cs=0x8a6;eip=0x000998; 	T(CMP(bh, 0));	// 20340                  cmp     bh, 0 ;~ 08A6:0998
cs=0x8a6;eip=0x00099b; 	J(JZ(loc_179ff));	// 20341                  jz      short loc_179FF ;~ 08A6:099B
cs=0x8a6;eip=0x00099d; 	X(PUSH(ax));	// 20342                  push    ax ;~ 08A6:099D
cs=0x8a6;eip=0x00099e; 	X(PUSH(bx));	// 20343                  push    bx ;~ 08A6:099E
cs=0x8a6;eip=0x00099f; 	X(PUSH(dx));	// 20344                  push    dx ;~ 08A6:099F
cs=0x8a6;eip=0x0009a0; 	T(dx = 0x3CE;);	// 20345                  mov     dx, 3CEh ;~ 08A6:09A0
cs=0x8a6;eip=0x0009a3; 	T(al = 4;);	// 20346                  mov     al, 4 ;~ 08A6:09A3
cs=0x8a6;eip=0x0009a5; 	T(ah = byte_18e74;);	// 20347                  mov     ah, cs:byte_18E74 ;~ 08A6:09A5
cs=0x8a6;eip=0x0009aa; 	S(OUT(dx, ax));	// 20348                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:09AA
cs=0x8a6;eip=0x0009ab; 	T(MOV(bl, *(raddr(es,di))));	// 20351                  mov     bl, es:[di] ;~ 08A6:09AB
cs=0x8a6;eip=0x0009ae; 	T(CMP(bl, 0));	// 20352                  cmp     bl, 0 ;~ 08A6:09AE
cs=0x8a6;eip=0x0009b1; 	J(JZ(loc_179f9));	// 20353                  jz      short loc_179F9 ;~ 08A6:09B1
cs=0x8a6;eip=0x0009b3; 	T(SHR(bl, 1));	// 20354                  shr     bl, 1 ;~ 08A6:09B3
cs=0x8a6;eip=0x0009b5; 	T(SHR(bh, 1));	// 20355                  shr     bh, 1 ;~ 08A6:09B5
cs=0x8a6;eip=0x0009b7; 	T(ADD(bh, bl));	// 20356                  add     bh, bl ;~ 08A6:09B7
loc_179f9:
	// 5425 
cs=0x8a6;eip=0x0009b9; 	X(MOV(*(raddr(es,di)), bh));	// 20359                  mov     es:[di], bh ;~ 08A6:09B9
cs=0x8a6;eip=0x0009bc; 	X(POP(dx));	// 20360                  pop     dx ;~ 08A6:09BC
cs=0x8a6;eip=0x0009bd; 	X(POP(bx));	// 20361                  pop     bx ;~ 08A6:09BD
cs=0x8a6;eip=0x0009be; 	X(POP(ax));	// 20362                  pop     ax ;~ 08A6:09BE
loc_179ff:
	// 5426 
cs=0x8a6;eip=0x0009bf; 	T(INC(di));	// 20365                  inc     di ;~ 08A6:09BF
cs=0x8a6;eip=0x0009c0; 	T(INC(si));	// 20366                  inc     si ;~ 08A6:09C0
cs=0x8a6;eip=0x0009c1; 	J(LOOP(loc_179d6));	// 20367                  loop    loc_179D6 ;~ 08A6:09C1
cs=0x8a6;eip=0x0009c3; 	X(POP(di));	// 20368                  pop     di ;~ 08A6:09C3
cs=0x8a6;eip=0x0009c4; 	X(POP(si));	// 20369                  pop     si ;~ 08A6:09C4
cs=0x8a6;eip=0x0009c5; 	T(ADD(si, 0x50));	// 20370                  add     si, 50h ; 'P' ;~ 08A6:09C5
cs=0x8a6;eip=0x0009c8; 	T(ADD(di, 0x50));	// 20371                  add     di, 50h ; 'P' ;~ 08A6:09C8
cs=0x8a6;eip=0x0009cb; 	T(DEC(bl));	// 20372                  dec     bl ;~ 08A6:09CB
cs=0x8a6;eip=0x0009cd; 	J(JNZ(loc_179d1));	// 20373                  jnz     short loc_179D1 ;~ 08A6:09CD
cs=0x8a6;eip=0x0009cf; 	X(DEC(byte_18e7b));	// 20374                  dec     cs:byte_18E7B ;~ 08A6:09CF
cs=0x8a6;eip=0x0009d4; 	J(JZ(loc_17a5e));	// 20375                  jz      short loc_17A5E ;~ 08A6:09D4
cs=0x8a6;eip=0x0009d6; 	X(INC(byte_18e74));	// 20376                  inc     cs:byte_18E74 ;~ 08A6:09D6
cs=0x8a6;eip=0x0009db; 	T(SHL(ah, 1));	// 20377                  shl     ah, 1 ;~ 08A6:09DB
cs=0x8a6;eip=0x0009dd; 	T(CMP(ah, 0x10));	// 20378                  cmp     ah, 10h ;~ 08A6:09DD
cs=0x8a6;eip=0x0009e0; 	J(JNZ(loc_17a2d));	// 20379                  jnz     short loc_17A2D ;~ 08A6:09E0
cs=0x8a6;eip=0x0009e2; 	X(byte_18e74 = 0;);	// 20380                  mov     cs:byte_18E74, 0 ;~ 08A6:09E2
cs=0x8a6;eip=0x0009e8; 	T(ah = 1;);	// 20381                  mov     ah, 1 ;~ 08A6:09E8
cs=0x8a6;eip=0x0009ea; 	X(INC(*(dw*)(raddr(ss,bp+0x0E))));	// 20382                  inc     word ptr [bp+0Eh] ;~ 08A6:09EA
loc_17a2d:
	// 5427 
cs=0x8a6;eip=0x0009ed; 	X(ADD(*(dw*)(&byte_18e75), 0x3E80));	// 20385                  add     word ptr cs:byte_18E75, 3E80h ;~ 08A6:09ED
cs=0x8a6;eip=0x0009f4; 	T(CMP(*(dw*)(&byte_18e75), 0x0FA00));	// 20386                  cmp     word ptr cs:byte_18E75, 0FA00h ;~ 08A6:09F4
cs=0x8a6;eip=0x0009fb; 	J(JNZ(loc_17a49));	// 20387                  jnz     short loc_17A49 ;~ 08A6:09FB
cs=0x8a6;eip=0x0009fd; 	X(*(dw*)(&byte_18e75) = 0;);	// 20388                  mov     word ptr cs:byte_18E75, 0 ;~ 08A6:09FD
cs=0x8a6;eip=0x000a04; 	X(INC(*(dw*)(&byte_18e79)));	// 20389                  inc     word ptr cs:byte_18E79 ;~ 08A6:0A04
loc_17a49:
	// 5428 
cs=0x8a6;eip=0x000a09; 	T(si = *(dw*)(&byte_18e77););	// 20392                  mov     si, word ptr cs:byte_18E77 ;~ 08A6:0A09
cs=0x8a6;eip=0x000a0e; 	T(ADD(si, *(dw*)(&byte_18e75)));	// 20393                  add     si, word ptr cs:byte_18E75 ;~ 08A6:0A0E
cs=0x8a6;eip=0x000a13; 	T(ADD(si, *(dw*)(&byte_18e79)));	// 20394                  add     si, word ptr cs:byte_18E79 ;~ 08A6:0A13
cs=0x8a6;eip=0x000a18; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0E))));	// 20395                  mov     di, [bp+0Eh] ;~ 08A6:0A18
cs=0x8a6;eip=0x000a1b; 	J(JMP(loc_179cd));	// 20396                  jmp     loc_179CD ;~ 08A6:0A1B
loc_17a5e:
	// 5429 
cs=0x8a6;eip=0x000a1e; 	X(POP(ds));	// 20400                  pop     ds ;~ 08A6:0A1E
cs=0x8a6;eip=0x000a1f; 	X(POP(es));	// 20401                  pop     es ;~ 08A6:0A1F
cs=0x8a6;eip=0x000a20; 	X(POPA);	// 20403                  popa ;~ 08A6:0A20
cs=0x8a6;eip=0x000a21; 	T(LEAVE);	// 20404                  leave ;~ 08A6:0A21
cs=0x8a6;eip=0x000a22; 	J(RETF(0));	// 20405                  retf ;~ 08A6:0A22
ret_8a6_a23:
	// 5430 
cs=0x8a6;eip=0x000a23; 	X(ENTER(0, 0));	// 20407                  enter   0, 0 ;~ 08A6:0A23
cs=0x8a6;eip=0x000a27; 	X(PUSHA);	// 20408                  pusha ;~ 08A6:0A27
cs=0x8a6;eip=0x000a28; 	X(PUSH(es));	// 20409                  push    es ;~ 08A6:0A28
cs=0x8a6;eip=0x000a29; 	X(PUSH(ds));	// 20410                  push    ds ;~ 08A6:0A29
cs=0x8a6;eip=0x000a2a; 	T(ax = 0x0A000;);	// 20411                  mov     ax, 0A000h ;~ 08A6:0A2A
cs=0x8a6;eip=0x000a2d; 	T(es = ax;);	// 20412                  mov     es, ax ;~ 08A6:0A2D
cs=0x8a6;eip=0x000a2f; 	T(ds = ax;);	// 20414                  mov     ds, ax ;~ 08A6:0A2F
cs=0x8a6;eip=0x000a31; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 20416                  mov     si, [bp+6] ;~ 08A6:0A31
cs=0x8a6;eip=0x000a34; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 20417                  mov     di, [bp+8] ;~ 08A6:0A34
cs=0x8a6;eip=0x000a37; 	T(ax = 8;);	// 20418                  mov     ax, 8 ;~ 08A6:0A37
cs=0x8a6;eip=0x000a3a; 	T(dx = 0x3CE;);	// 20419                  mov     dx, 3CEh ;~ 08A6:0A3A
cs=0x8a6;eip=0x000a3d; 	S(OUT(dx, ax));	// 20420                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0A3D
cs=0x8a6;eip=0x000a3e; 	T(dx = 0x3C4;);	// 20423                  mov     dx, 3C4h ;~ 08A6:0A3E
cs=0x8a6;eip=0x000a41; 	T(ax = 0x0F02;);	// 20424                  mov     ax, 0F02h ;~ 08A6:0A41
cs=0x8a6;eip=0x000a44; 	S(OUT(dx, ax));	// 20425                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0A44
cs=0x8a6;eip=0x000a45; 	T(bx = 0x10;);	// 20427                  mov     bx, 10h ;~ 08A6:0A45
loc_17a88:
	// 5431 
cs=0x8a6;eip=0x000a48; 	T(cx = 5;);	// 20430                  mov     cx, 5 ;~ 08A6:0A48
	// 20431                  rep movsb ;~ 08A6:0A4B
cs=0x8a6;eip=0x000a4b; 	X(	REP MOVSB);	// 20431                  rep movsb ;~ 08A6:0A4B
cs=0x8a6;eip=0x000a4d; 	T(ADD(si, 0x4B));	// 20432                  add     si, 4Bh ; 'K' ;~ 08A6:0A4D
cs=0x8a6;eip=0x000a50; 	T(ADD(di, 0x4B));	// 20433                  add     di, 4Bh ; 'K' ;~ 08A6:0A50
cs=0x8a6;eip=0x000a53; 	T(DEC(bx));	// 20434                  dec     bx ;~ 08A6:0A53
cs=0x8a6;eip=0x000a54; 	J(JNZ(loc_17a88));	// 20435                  jnz     short loc_17A88 ;~ 08A6:0A54
cs=0x8a6;eip=0x000a56; 	T(ax = 0x0FF08;);	// 20436                  mov     ax, 0FF08h ;~ 08A6:0A56
cs=0x8a6;eip=0x000a59; 	T(dx = 0x3CE;);	// 20437                  mov     dx, 3CEh ;~ 08A6:0A59
cs=0x8a6;eip=0x000a5c; 	S(OUT(dx, ax));	// 20438                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0A5C
cs=0x8a6;eip=0x000a5d; 	X(POP(ds));	// 20440                  pop     ds ;~ 08A6:0A5D
cs=0x8a6;eip=0x000a5e; 	X(POP(es));	// 20442                  pop     es ;~ 08A6:0A5E
cs=0x8a6;eip=0x000a5f; 	X(POPA);	// 20444                  popa ;~ 08A6:0A5F
cs=0x8a6;eip=0x000a60; 	T(LEAVE);	// 20445                  leave ;~ 08A6:0A60
cs=0x8a6;eip=0x000a61; 	J(RETF(0));	// 20446                  retf ;~ 08A6:0A61
ret_8a6_a62:
	// 5432 
cs=0x8a6;eip=0x000a62; 	X(ENTER(0, 0));	// 20448                  enter   0, 0 ;~ 08A6:0A62
cs=0x8a6;eip=0x000a66; 	X(PUSHA);	// 20449                  pusha ;~ 08A6:0A66
cs=0x8a6;eip=0x000a67; 	X(PUSH(es));	// 20450                  push    es ;~ 08A6:0A67
cs=0x8a6;eip=0x000a68; 	X(PUSH(ds));	// 20451                  push    ds ;~ 08A6:0A68
cs=0x8a6;eip=0x000a69; 	T(ax = 0x0A000;);	// 20452                  mov     ax, 0A000h ;~ 08A6:0A69
cs=0x8a6;eip=0x000a6c; 	T(es = ax;);	// 20453                  mov     es, ax ;~ 08A6:0A6C
cs=0x8a6;eip=0x000a6e; 	T(ds = ax;);	// 20455                  mov     ds, ax ;~ 08A6:0A6E
cs=0x8a6;eip=0x000a70; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 20457                  mov     si, [bp+6] ;~ 08A6:0A70
cs=0x8a6;eip=0x000a73; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 20458                  mov     di, [bp+8] ;~ 08A6:0A73
cs=0x8a6;eip=0x000a76; 	T(dx = 0x3C4;);	// 20459                  mov     dx, 3C4h ;~ 08A6:0A76
cs=0x8a6;eip=0x000a79; 	T(ax = 0x102;);	// 20460                  mov     ax, 102h ;~ 08A6:0A79
cs=0x8a6;eip=0x000a7c; 	S(OUT(dx, ax));	// 20461                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0A7C
cs=0x8a6;eip=0x000a7d; 	T(dx = 0x3CE;);	// 20463                  mov     dx, 3CEh ;~ 08A6:0A7D
cs=0x8a6;eip=0x000a80; 	T(ax = 4;);	// 20464                  mov     ax, 4 ;~ 08A6:0A80
cs=0x8a6;eip=0x000a83; 	S(OUT(dx, ax));	// 20465                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0A83
cs=0x8a6;eip=0x000a84; 	T(bx = 0x10;);	// 20468                  mov     bx, 10h ;~ 08A6:0A84
loc_17ac7:
	// 5433 
cs=0x8a6;eip=0x000a87; 	T(cx = 4;);	// 20471                  mov     cx, 4 ;~ 08A6:0A87
loc_17aca:
	// 5434 
cs=0x8a6;eip=0x000a8a; 	T(MOV(al, *(raddr(ds,si))));	// 20474                  mov     al, [si] ;~ 08A6:0A8A
cs=0x8a6;eip=0x000a8c; 	T(CMP(al, 0));	// 20475                  cmp     al, 0 ;~ 08A6:0A8C
cs=0x8a6;eip=0x000a8e; 	J(JZ(loc_17ad3));	// 20476                  jz      short loc_17AD3 ;~ 08A6:0A8E
cs=0x8a6;eip=0x000a90; 	X(MOV(*(raddr(es,di)), al));	// 20477                  mov     es:[di], al ;~ 08A6:0A90
loc_17ad3:
	// 5435 
cs=0x8a6;eip=0x000a93; 	T(INC(si));	// 20480                  inc     si ;~ 08A6:0A93
cs=0x8a6;eip=0x000a94; 	T(INC(di));	// 20481                  inc     di ;~ 08A6:0A94
cs=0x8a6;eip=0x000a95; 	J(LOOP(loc_17aca));	// 20482                  loop    loc_17ACA ;~ 08A6:0A95
cs=0x8a6;eip=0x000a97; 	T(ADD(si, 0x4C));	// 20483                  add     si, 4Ch ; 'L' ;~ 08A6:0A97
cs=0x8a6;eip=0x000a9a; 	T(ADD(di, 0x4C));	// 20484                  add     di, 4Ch ; 'L' ;~ 08A6:0A9A
cs=0x8a6;eip=0x000a9d; 	T(DEC(bx));	// 20485                  dec     bx ;~ 08A6:0A9D
cs=0x8a6;eip=0x000a9e; 	T(CMP(bx, 0));	// 20486                  cmp     bx, 0 ;~ 08A6:0A9E
cs=0x8a6;eip=0x000aa1; 	J(JNZ(loc_17ac7));	// 20487                  jnz     short loc_17AC7 ;~ 08A6:0AA1
cs=0x8a6;eip=0x000aa3; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 20488                  mov     si, [bp+6] ;~ 08A6:0AA3
cs=0x8a6;eip=0x000aa6; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 20489                  mov     di, [bp+8] ;~ 08A6:0AA6
cs=0x8a6;eip=0x000aa9; 	T(dx = 0x3C4;);	// 20490                  mov     dx, 3C4h ;~ 08A6:0AA9
cs=0x8a6;eip=0x000aac; 	T(ax = 0x202;);	// 20491                  mov     ax, 202h ;~ 08A6:0AAC
cs=0x8a6;eip=0x000aaf; 	S(OUT(dx, ax));	// 20492                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0AAF
cs=0x8a6;eip=0x000ab0; 	T(dx = 0x3CE;);	// 20494                  mov     dx, 3CEh ;~ 08A6:0AB0
cs=0x8a6;eip=0x000ab3; 	T(ax = 0x104;);	// 20495                  mov     ax, 104h ;~ 08A6:0AB3
cs=0x8a6;eip=0x000ab6; 	S(OUT(dx, ax));	// 20496                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0AB6
cs=0x8a6;eip=0x000ab7; 	T(bx = 0x10;);	// 20498                  mov     bx, 10h ;~ 08A6:0AB7
loc_17afa:
	// 5436 
cs=0x8a6;eip=0x000aba; 	T(cx = 4;);	// 20501                  mov     cx, 4 ;~ 08A6:0ABA
loc_17afd:
	// 5437 
cs=0x8a6;eip=0x000abd; 	T(MOV(al, *(raddr(ds,si))));	// 20504                  mov     al, [si] ;~ 08A6:0ABD
cs=0x8a6;eip=0x000abf; 	T(CMP(al, 0));	// 20505                  cmp     al, 0 ;~ 08A6:0ABF
cs=0x8a6;eip=0x000ac1; 	J(JZ(loc_17b06));	// 20506                  jz      short loc_17B06 ;~ 08A6:0AC1
cs=0x8a6;eip=0x000ac3; 	X(MOV(*(raddr(es,di)), al));	// 20507                  mov     es:[di], al ;~ 08A6:0AC3
loc_17b06:
	// 5438 
cs=0x8a6;eip=0x000ac6; 	T(INC(si));	// 20510                  inc     si ;~ 08A6:0AC6
cs=0x8a6;eip=0x000ac7; 	T(INC(di));	// 20511                  inc     di ;~ 08A6:0AC7
cs=0x8a6;eip=0x000ac8; 	J(LOOP(loc_17afd));	// 20512                  loop    loc_17AFD ;~ 08A6:0AC8
cs=0x8a6;eip=0x000aca; 	T(ADD(si, 0x4C));	// 20513                  add     si, 4Ch ; 'L' ;~ 08A6:0ACA
cs=0x8a6;eip=0x000acd; 	T(ADD(di, 0x4C));	// 20514                  add     di, 4Ch ; 'L' ;~ 08A6:0ACD
cs=0x8a6;eip=0x000ad0; 	T(DEC(bx));	// 20515                  dec     bx ;~ 08A6:0AD0
cs=0x8a6;eip=0x000ad1; 	T(CMP(bx, 0));	// 20516                  cmp     bx, 0 ;~ 08A6:0AD1
cs=0x8a6;eip=0x000ad4; 	J(JNZ(loc_17afa));	// 20517                  jnz     short loc_17AFA ;~ 08A6:0AD4
cs=0x8a6;eip=0x000ad6; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 20518                  mov     si, [bp+6] ;~ 08A6:0AD6
cs=0x8a6;eip=0x000ad9; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 20519                  mov     di, [bp+8] ;~ 08A6:0AD9
cs=0x8a6;eip=0x000adc; 	T(dx = 0x3C4;);	// 20520                  mov     dx, 3C4h ;~ 08A6:0ADC
cs=0x8a6;eip=0x000adf; 	T(ax = 0x402;);	// 20521                  mov     ax, 402h ;~ 08A6:0ADF
cs=0x8a6;eip=0x000ae2; 	S(OUT(dx, ax));	// 20522                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0AE2
cs=0x8a6;eip=0x000ae3; 	T(dx = 0x3CE;);	// 20524                  mov     dx, 3CEh ;~ 08A6:0AE3
cs=0x8a6;eip=0x000ae6; 	T(ax = 0x204;);	// 20525                  mov     ax, 204h ;~ 08A6:0AE6
cs=0x8a6;eip=0x000ae9; 	S(OUT(dx, ax));	// 20526                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0AE9
cs=0x8a6;eip=0x000aea; 	T(bx = 0x10;);	// 20528                  mov     bx, 10h ;~ 08A6:0AEA
loc_17b2d:
	// 5439 
cs=0x8a6;eip=0x000aed; 	T(cx = 4;);	// 20531                  mov     cx, 4 ;~ 08A6:0AED
loc_17b30:
	// 5440 
cs=0x8a6;eip=0x000af0; 	T(MOV(al, *(raddr(ds,si))));	// 20534                  mov     al, [si] ;~ 08A6:0AF0
cs=0x8a6;eip=0x000af2; 	T(CMP(al, 0));	// 20535                  cmp     al, 0 ;~ 08A6:0AF2
cs=0x8a6;eip=0x000af4; 	J(JZ(loc_17b39));	// 20536                  jz      short loc_17B39 ;~ 08A6:0AF4
cs=0x8a6;eip=0x000af6; 	X(MOV(*(raddr(es,di)), al));	// 20537                  mov     es:[di], al ;~ 08A6:0AF6
loc_17b39:
	// 5441 
cs=0x8a6;eip=0x000af9; 	T(INC(si));	// 20540                  inc     si ;~ 08A6:0AF9
cs=0x8a6;eip=0x000afa; 	T(INC(di));	// 20541                  inc     di ;~ 08A6:0AFA
cs=0x8a6;eip=0x000afb; 	J(LOOP(loc_17b30));	// 20542                  loop    loc_17B30 ;~ 08A6:0AFB
cs=0x8a6;eip=0x000afd; 	T(ADD(si, 0x4C));	// 20543                  add     si, 4Ch ; 'L' ;~ 08A6:0AFD
cs=0x8a6;eip=0x000b00; 	T(ADD(di, 0x4C));	// 20544                  add     di, 4Ch ; 'L' ;~ 08A6:0B00
cs=0x8a6;eip=0x000b03; 	T(DEC(bx));	// 20545                  dec     bx ;~ 08A6:0B03
cs=0x8a6;eip=0x000b04; 	T(CMP(bx, 0));	// 20546                  cmp     bx, 0 ;~ 08A6:0B04
cs=0x8a6;eip=0x000b07; 	J(JNZ(loc_17b2d));	// 20547                  jnz     short loc_17B2D ;~ 08A6:0B07
cs=0x8a6;eip=0x000b09; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 20548                  mov     si, [bp+6] ;~ 08A6:0B09
cs=0x8a6;eip=0x000b0c; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 20549                  mov     di, [bp+8] ;~ 08A6:0B0C
cs=0x8a6;eip=0x000b0f; 	T(dx = 0x3C4;);	// 20550                  mov     dx, 3C4h ;~ 08A6:0B0F
cs=0x8a6;eip=0x000b12; 	T(ax = 0x802;);	// 20551                  mov     ax, 802h ;~ 08A6:0B12
cs=0x8a6;eip=0x000b15; 	S(OUT(dx, ax));	// 20552                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0B15
cs=0x8a6;eip=0x000b16; 	T(dx = 0x3CE;);	// 20554                  mov     dx, 3CEh ;~ 08A6:0B16
cs=0x8a6;eip=0x000b19; 	T(ax = 0x304;);	// 20555                  mov     ax, 304h ;~ 08A6:0B19
cs=0x8a6;eip=0x000b1c; 	S(OUT(dx, ax));	// 20556                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0B1C
cs=0x8a6;eip=0x000b1d; 	T(bx = 0x10;);	// 20558                  mov     bx, 10h ;~ 08A6:0B1D
loc_17b60:
	// 5442 
cs=0x8a6;eip=0x000b20; 	T(cx = 4;);	// 20561                  mov     cx, 4 ;~ 08A6:0B20
loc_17b63:
	// 5443 
cs=0x8a6;eip=0x000b23; 	T(MOV(al, *(raddr(ds,si))));	// 20564                  mov     al, [si] ;~ 08A6:0B23
cs=0x8a6;eip=0x000b25; 	T(CMP(al, 0));	// 20565                  cmp     al, 0 ;~ 08A6:0B25
cs=0x8a6;eip=0x000b27; 	J(JZ(loc_17b6c));	// 20566                  jz      short loc_17B6C ;~ 08A6:0B27
cs=0x8a6;eip=0x000b29; 	X(MOV(*(raddr(es,di)), al));	// 20567                  mov     es:[di], al ;~ 08A6:0B29
loc_17b6c:
	// 5444 
cs=0x8a6;eip=0x000b2c; 	T(INC(si));	// 20570                  inc     si ;~ 08A6:0B2C
cs=0x8a6;eip=0x000b2d; 	T(INC(di));	// 20571                  inc     di ;~ 08A6:0B2D
cs=0x8a6;eip=0x000b2e; 	J(LOOP(loc_17b63));	// 20572                  loop    loc_17B63 ;~ 08A6:0B2E
cs=0x8a6;eip=0x000b30; 	T(ADD(si, 0x4C));	// 20573                  add     si, 4Ch ; 'L' ;~ 08A6:0B30
cs=0x8a6;eip=0x000b33; 	T(ADD(di, 0x4C));	// 20574                  add     di, 4Ch ; 'L' ;~ 08A6:0B33
cs=0x8a6;eip=0x000b36; 	T(DEC(bx));	// 20575                  dec     bx ;~ 08A6:0B36
cs=0x8a6;eip=0x000b37; 	T(CMP(bx, 0));	// 20576                  cmp     bx, 0 ;~ 08A6:0B37
cs=0x8a6;eip=0x000b3a; 	J(JNZ(loc_17b60));	// 20577                  jnz     short loc_17B60 ;~ 08A6:0B3A
cs=0x8a6;eip=0x000b3c; 	X(POP(ds));	// 20578                  pop     ds ;~ 08A6:0B3C
cs=0x8a6;eip=0x000b3d; 	X(POP(es));	// 20580                  pop     es ;~ 08A6:0B3D
cs=0x8a6;eip=0x000b3e; 	X(POPA);	// 20582                  popa ;~ 08A6:0B3E
cs=0x8a6;eip=0x000b3f; 	T(LEAVE);	// 20583                  leave ;~ 08A6:0B3F
cs=0x8a6;eip=0x000b40; 	J(RETF(0));	// 20584                  retf ;~ 08A6:0B40
ret_8a6_b41:
	// 5445 
cs=0x8a6;eip=0x000b41; 	X(ENTER(0, 0));	// 20586                  enter   0, 0 ;~ 08A6:0B41
cs=0x8a6;eip=0x000b45; 	X(PUSHA);	// 20587                  pusha ;~ 08A6:0B45
cs=0x8a6;eip=0x000b46; 	X(PUSH(es));	// 20588                  push    es ;~ 08A6:0B46
cs=0x8a6;eip=0x000b47; 	X(PUSH(ds));	// 20589                  push    ds ;~ 08A6:0B47
cs=0x8a6;eip=0x000b48; 	T(ax = 0x0A000;);	// 20590                  mov     ax, 0A000h ;~ 08A6:0B48
cs=0x8a6;eip=0x000b4b; 	T(es = ax;);	// 20591                  mov     es, ax ;~ 08A6:0B4B
cs=0x8a6;eip=0x000b4d; 	T(ds = ax;);	// 20593                  mov     ds, ax ;~ 08A6:0B4D
cs=0x8a6;eip=0x000b4f; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 20595                  mov     si, [bp+6] ;~ 08A6:0B4F
cs=0x8a6;eip=0x000b52; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 20596                  mov     di, [bp+8] ;~ 08A6:0B52
cs=0x8a6;eip=0x000b55; 	T(dx = 0x3C4;);	// 20597                  mov     dx, 3C4h ;~ 08A6:0B55
cs=0x8a6;eip=0x000b58; 	T(ax = 0x102;);	// 20598                  mov     ax, 102h ;~ 08A6:0B58
cs=0x8a6;eip=0x000b5b; 	S(OUT(dx, ax));	// 20599                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0B5B
cs=0x8a6;eip=0x000b5c; 	T(dx = 0x3CE;);	// 20601                  mov     dx, 3CEh ;~ 08A6:0B5C
cs=0x8a6;eip=0x000b5f; 	T(ax = 4;);	// 20602                  mov     ax, 4 ;~ 08A6:0B5F
cs=0x8a6;eip=0x000b62; 	S(OUT(dx, ax));	// 20603                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0B62
cs=0x8a6;eip=0x000b63; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 20606                  mov     bx, [bp+0Ch] ;~ 08A6:0B63
loc_17ba6:
	// 5446 
cs=0x8a6;eip=0x000b66; 	X(PUSH(si));	// 20609                  push    si ;~ 08A6:0B66
cs=0x8a6;eip=0x000b67; 	X(PUSH(di));	// 20610                  push    di ;~ 08A6:0B67
cs=0x8a6;eip=0x000b68; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0A))));	// 20611                  mov     cx, [bp+0Ah] ;~ 08A6:0B68
loc_17bab:
	// 5447 
cs=0x8a6;eip=0x000b6b; 	T(MOV(al, *(raddr(ds,si))));	// 20614                  mov     al, [si] ;~ 08A6:0B6B
cs=0x8a6;eip=0x000b6d; 	T(CMP(al, 0));	// 20615                  cmp     al, 0 ;~ 08A6:0B6D
cs=0x8a6;eip=0x000b6f; 	J(JZ(loc_17bb4));	// 20616                  jz      short loc_17BB4 ;~ 08A6:0B6F
cs=0x8a6;eip=0x000b71; 	X(MOV(*(raddr(es,di)), al));	// 20617                  mov     es:[di], al ;~ 08A6:0B71
loc_17bb4:
	// 5448 
cs=0x8a6;eip=0x000b74; 	T(INC(si));	// 20620                  inc     si ;~ 08A6:0B74
cs=0x8a6;eip=0x000b75; 	T(INC(di));	// 20621                  inc     di ;~ 08A6:0B75
cs=0x8a6;eip=0x000b76; 	J(LOOP(loc_17bab));	// 20622                  loop    loc_17BAB ;~ 08A6:0B76
cs=0x8a6;eip=0x000b78; 	X(POP(di));	// 20623                  pop     di ;~ 08A6:0B78
cs=0x8a6;eip=0x000b79; 	X(POP(si));	// 20624                  pop     si ;~ 08A6:0B79
cs=0x8a6;eip=0x000b7a; 	T(ADD(si, 0x50));	// 20625                  add     si, 50h ; 'P' ;~ 08A6:0B7A
cs=0x8a6;eip=0x000b7d; 	T(ADD(di, 0x50));	// 20626                  add     di, 50h ; 'P' ;~ 08A6:0B7D
cs=0x8a6;eip=0x000b80; 	T(DEC(bx));	// 20627                  dec     bx ;~ 08A6:0B80
cs=0x8a6;eip=0x000b81; 	T(CMP(bx, 0));	// 20628                  cmp     bx, 0 ;~ 08A6:0B81
cs=0x8a6;eip=0x000b84; 	J(JNZ(loc_17ba6));	// 20629                  jnz     short loc_17BA6 ;~ 08A6:0B84
cs=0x8a6;eip=0x000b86; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 20630                  mov     si, [bp+6] ;~ 08A6:0B86
cs=0x8a6;eip=0x000b89; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 20631                  mov     di, [bp+8] ;~ 08A6:0B89
cs=0x8a6;eip=0x000b8c; 	T(dx = 0x3C4;);	// 20632                  mov     dx, 3C4h ;~ 08A6:0B8C
cs=0x8a6;eip=0x000b8f; 	T(ax = 0x202;);	// 20633                  mov     ax, 202h ;~ 08A6:0B8F
cs=0x8a6;eip=0x000b92; 	S(OUT(dx, ax));	// 20634                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0B92
cs=0x8a6;eip=0x000b93; 	T(dx = 0x3CE;);	// 20636                  mov     dx, 3CEh ;~ 08A6:0B93
cs=0x8a6;eip=0x000b96; 	T(ax = 0x104;);	// 20637                  mov     ax, 104h ;~ 08A6:0B96
cs=0x8a6;eip=0x000b99; 	S(OUT(dx, ax));	// 20638                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0B99
cs=0x8a6;eip=0x000b9a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 20640                  mov     bx, [bp+0Ch] ;~ 08A6:0B9A
loc_17bdd:
	// 5449 
cs=0x8a6;eip=0x000b9d; 	X(PUSH(si));	// 20643                  push    si ;~ 08A6:0B9D
cs=0x8a6;eip=0x000b9e; 	X(PUSH(di));	// 20644                  push    di ;~ 08A6:0B9E
cs=0x8a6;eip=0x000b9f; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0A))));	// 20645                  mov     cx, [bp+0Ah] ;~ 08A6:0B9F
loc_17be2:
	// 5450 
cs=0x8a6;eip=0x000ba2; 	T(MOV(al, *(raddr(ds,si))));	// 20648                  mov     al, [si] ;~ 08A6:0BA2
cs=0x8a6;eip=0x000ba4; 	T(CMP(al, 0));	// 20649                  cmp     al, 0 ;~ 08A6:0BA4
cs=0x8a6;eip=0x000ba6; 	J(JZ(loc_17beb));	// 20650                  jz      short loc_17BEB ;~ 08A6:0BA6
cs=0x8a6;eip=0x000ba8; 	X(MOV(*(raddr(es,di)), al));	// 20651                  mov     es:[di], al ;~ 08A6:0BA8
loc_17beb:
	// 5451 
cs=0x8a6;eip=0x000bab; 	T(INC(si));	// 20654                  inc     si ;~ 08A6:0BAB
cs=0x8a6;eip=0x000bac; 	T(INC(di));	// 20655                  inc     di ;~ 08A6:0BAC
cs=0x8a6;eip=0x000bad; 	J(LOOP(loc_17be2));	// 20656                  loop    loc_17BE2 ;~ 08A6:0BAD
cs=0x8a6;eip=0x000baf; 	X(POP(di));	// 20657                  pop     di ;~ 08A6:0BAF
cs=0x8a6;eip=0x000bb0; 	X(POP(si));	// 20658                  pop     si ;~ 08A6:0BB0
cs=0x8a6;eip=0x000bb1; 	T(ADD(si, 0x50));	// 20659                  add     si, 50h ; 'P' ;~ 08A6:0BB1
cs=0x8a6;eip=0x000bb4; 	T(ADD(di, 0x50));	// 20660                  add     di, 50h ; 'P' ;~ 08A6:0BB4
cs=0x8a6;eip=0x000bb7; 	T(DEC(bx));	// 20661                  dec     bx ;~ 08A6:0BB7
cs=0x8a6;eip=0x000bb8; 	T(CMP(bx, 0));	// 20662                  cmp     bx, 0 ;~ 08A6:0BB8
cs=0x8a6;eip=0x000bbb; 	J(JNZ(loc_17bdd));	// 20663                  jnz     short loc_17BDD ;~ 08A6:0BBB
cs=0x8a6;eip=0x000bbd; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 20664                  mov     si, [bp+6] ;~ 08A6:0BBD
cs=0x8a6;eip=0x000bc0; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 20665                  mov     di, [bp+8] ;~ 08A6:0BC0
cs=0x8a6;eip=0x000bc3; 	T(dx = 0x3C4;);	// 20666                  mov     dx, 3C4h ;~ 08A6:0BC3
cs=0x8a6;eip=0x000bc6; 	T(ax = 0x402;);	// 20667                  mov     ax, 402h ;~ 08A6:0BC6
cs=0x8a6;eip=0x000bc9; 	S(OUT(dx, ax));	// 20668                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0BC9
cs=0x8a6;eip=0x000bca; 	T(dx = 0x3CE;);	// 20670                  mov     dx, 3CEh ;~ 08A6:0BCA
cs=0x8a6;eip=0x000bcd; 	T(ax = 0x204;);	// 20671                  mov     ax, 204h ;~ 08A6:0BCD
cs=0x8a6;eip=0x000bd0; 	S(OUT(dx, ax));	// 20672                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0BD0
cs=0x8a6;eip=0x000bd1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 20674                  mov     bx, [bp+0Ch] ;~ 08A6:0BD1
loc_17c14:
	// 5452 
cs=0x8a6;eip=0x000bd4; 	X(PUSH(si));	// 20677                  push    si ;~ 08A6:0BD4
cs=0x8a6;eip=0x000bd5; 	X(PUSH(di));	// 20678                  push    di ;~ 08A6:0BD5
cs=0x8a6;eip=0x000bd6; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0A))));	// 20679                  mov     cx, [bp+0Ah] ;~ 08A6:0BD6
loc_17c19:
	// 5453 
cs=0x8a6;eip=0x000bd9; 	T(MOV(al, *(raddr(ds,si))));	// 20682                  mov     al, [si] ;~ 08A6:0BD9
cs=0x8a6;eip=0x000bdb; 	T(CMP(al, 0));	// 20683                  cmp     al, 0 ;~ 08A6:0BDB
cs=0x8a6;eip=0x000bdd; 	J(JZ(loc_17c22));	// 20684                  jz      short loc_17C22 ;~ 08A6:0BDD
cs=0x8a6;eip=0x000bdf; 	X(MOV(*(raddr(es,di)), al));	// 20685                  mov     es:[di], al ;~ 08A6:0BDF
loc_17c22:
	// 5454 
cs=0x8a6;eip=0x000be2; 	T(INC(si));	// 20688                  inc     si ;~ 08A6:0BE2
cs=0x8a6;eip=0x000be3; 	T(INC(di));	// 20689                  inc     di ;~ 08A6:0BE3
cs=0x8a6;eip=0x000be4; 	J(LOOP(loc_17c19));	// 20690                  loop    loc_17C19 ;~ 08A6:0BE4
cs=0x8a6;eip=0x000be6; 	X(POP(di));	// 20691                  pop     di ;~ 08A6:0BE6
cs=0x8a6;eip=0x000be7; 	X(POP(si));	// 20692                  pop     si ;~ 08A6:0BE7
cs=0x8a6;eip=0x000be8; 	T(ADD(si, 0x50));	// 20693                  add     si, 50h ; 'P' ;~ 08A6:0BE8
cs=0x8a6;eip=0x000beb; 	T(ADD(di, 0x50));	// 20694                  add     di, 50h ; 'P' ;~ 08A6:0BEB
cs=0x8a6;eip=0x000bee; 	T(DEC(bx));	// 20695                  dec     bx ;~ 08A6:0BEE
cs=0x8a6;eip=0x000bef; 	T(CMP(bx, 0));	// 20696                  cmp     bx, 0 ;~ 08A6:0BEF
cs=0x8a6;eip=0x000bf2; 	J(JNZ(loc_17c14));	// 20697                  jnz     short loc_17C14 ;~ 08A6:0BF2
cs=0x8a6;eip=0x000bf4; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 20698                  mov     si, [bp+6] ;~ 08A6:0BF4
cs=0x8a6;eip=0x000bf7; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 20699                  mov     di, [bp+8] ;~ 08A6:0BF7
cs=0x8a6;eip=0x000bfa; 	T(dx = 0x3C4;);	// 20700                  mov     dx, 3C4h ;~ 08A6:0BFA
cs=0x8a6;eip=0x000bfd; 	T(ax = 0x802;);	// 20701                  mov     ax, 802h ;~ 08A6:0BFD
cs=0x8a6;eip=0x000c00; 	S(OUT(dx, ax));	// 20702                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0C00
cs=0x8a6;eip=0x000c01; 	T(dx = 0x3CE;);	// 20704                  mov     dx, 3CEh ;~ 08A6:0C01
cs=0x8a6;eip=0x000c04; 	T(ax = 0x304;);	// 20705                  mov     ax, 304h ;~ 08A6:0C04
cs=0x8a6;eip=0x000c07; 	S(OUT(dx, ax));	// 20706                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0C07
cs=0x8a6;eip=0x000c08; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 20708                  mov     bx, [bp+0Ch] ;~ 08A6:0C08
loc_17c4b:
	// 5455 
cs=0x8a6;eip=0x000c0b; 	X(PUSH(si));	// 20711                  push    si ;~ 08A6:0C0B
cs=0x8a6;eip=0x000c0c; 	X(PUSH(di));	// 20712                  push    di ;~ 08A6:0C0C
cs=0x8a6;eip=0x000c0d; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0A))));	// 20713                  mov     cx, [bp+0Ah] ;~ 08A6:0C0D
loc_17c50:
	// 5456 
cs=0x8a6;eip=0x000c10; 	T(MOV(al, *(raddr(ds,si))));	// 20716                  mov     al, [si] ;~ 08A6:0C10
cs=0x8a6;eip=0x000c12; 	T(CMP(al, 0));	// 20717                  cmp     al, 0 ;~ 08A6:0C12
cs=0x8a6;eip=0x000c14; 	J(JZ(loc_17c59));	// 20718                  jz      short loc_17C59 ;~ 08A6:0C14
cs=0x8a6;eip=0x000c16; 	X(MOV(*(raddr(es,di)), al));	// 20719                  mov     es:[di], al ;~ 08A6:0C16
loc_17c59:
	// 5457 
cs=0x8a6;eip=0x000c19; 	T(INC(si));	// 20722                  inc     si ;~ 08A6:0C19
cs=0x8a6;eip=0x000c1a; 	T(INC(di));	// 20723                  inc     di ;~ 08A6:0C1A
cs=0x8a6;eip=0x000c1b; 	J(LOOP(loc_17c50));	// 20724                  loop    loc_17C50 ;~ 08A6:0C1B
cs=0x8a6;eip=0x000c1d; 	X(POP(di));	// 20725                  pop     di ;~ 08A6:0C1D
cs=0x8a6;eip=0x000c1e; 	X(POP(si));	// 20726                  pop     si ;~ 08A6:0C1E
cs=0x8a6;eip=0x000c1f; 	T(ADD(si, 0x50));	// 20727                  add     si, 50h ; 'P' ;~ 08A6:0C1F
cs=0x8a6;eip=0x000c22; 	T(ADD(di, 0x50));	// 20728                  add     di, 50h ; 'P' ;~ 08A6:0C22
cs=0x8a6;eip=0x000c25; 	T(DEC(bx));	// 20729                  dec     bx ;~ 08A6:0C25
cs=0x8a6;eip=0x000c26; 	T(CMP(bx, 0));	// 20730                  cmp     bx, 0 ;~ 08A6:0C26
cs=0x8a6;eip=0x000c29; 	J(JNZ(loc_17c4b));	// 20731                  jnz     short loc_17C4B ;~ 08A6:0C29
cs=0x8a6;eip=0x000c2b; 	X(POP(ds));	// 20732                  pop     ds ;~ 08A6:0C2B
cs=0x8a6;eip=0x000c2c; 	X(POP(es));	// 20734                  pop     es ;~ 08A6:0C2C
cs=0x8a6;eip=0x000c2d; 	X(POPA);	// 20736                  popa ;~ 08A6:0C2D
cs=0x8a6;eip=0x000c2e; 	T(LEAVE);	// 20737                  leave ;~ 08A6:0C2E
cs=0x8a6;eip=0x000c2f; 	J(RETF(0));	// 20738                  retf ;~ 08A6:0C2F
ret_8a6_c30:
	// 5458 
cs=0x8a6;eip=0x000c30; 	X(ENTER(0, 0));	// 20740                  enter   0, 0 ;~ 08A6:0C30
cs=0x8a6;eip=0x000c34; 	X(PUSHA);	// 20741                  pusha ;~ 08A6:0C34
cs=0x8a6;eip=0x000c35; 	X(PUSH(es));	// 20742                  push    es ;~ 08A6:0C35
cs=0x8a6;eip=0x000c36; 	X(PUSH(ds));	// 20743                  push    ds ;~ 08A6:0C36
cs=0x8a6;eip=0x000c37; 	T(ax = 0x0A000;);	// 20744                  mov     ax, 0A000h ;~ 08A6:0C37
cs=0x8a6;eip=0x000c3a; 	T(es = ax;);	// 20745                  mov     es, ax ;~ 08A6:0C3A
cs=0x8a6;eip=0x000c3c; 	T(ds = ax;);	// 20747                  mov     ds, ax ;~ 08A6:0C3C
cs=0x8a6;eip=0x000c3e; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 20749                  mov     si, [bp+6] ;~ 08A6:0C3E
cs=0x8a6;eip=0x000c41; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 20750                  mov     di, [bp+8] ;~ 08A6:0C41
cs=0x8a6;eip=0x000c44; 	T(dx = 0x3C4;);	// 20751                  mov     dx, 3C4h ;~ 08A6:0C44
cs=0x8a6;eip=0x000c47; 	T(ax = 0x102;);	// 20752                  mov     ax, 102h ;~ 08A6:0C47
cs=0x8a6;eip=0x000c4a; 	S(OUT(dx, ax));	// 20753                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0C4A
cs=0x8a6;eip=0x000c4b; 	T(dx = 0x3CE;);	// 20755                  mov     dx, 3CEh ;~ 08A6:0C4B
cs=0x8a6;eip=0x000c4e; 	T(ax = 4;);	// 20756                  mov     ax, 4 ;~ 08A6:0C4E
cs=0x8a6;eip=0x000c51; 	S(OUT(dx, ax));	// 20757                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0C51
cs=0x8a6;eip=0x000c52; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 20760                  mov     bx, [bp+0Ch] ;~ 08A6:0C52
loc_17c95:
	// 5459 
cs=0x8a6;eip=0x000c55; 	X(PUSH(si));	// 20763                  push    si ;~ 08A6:0C55
cs=0x8a6;eip=0x000c56; 	X(PUSH(di));	// 20764                  push    di ;~ 08A6:0C56
cs=0x8a6;eip=0x000c57; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0A))));	// 20765                  mov     cx, [bp+0Ah] ;~ 08A6:0C57
loc_17c9a:
	// 5460 
cs=0x8a6;eip=0x000c5a; 	X(MOVSB);	// 20768                  movsb ;~ 08A6:0C5A
cs=0x8a6;eip=0x000c5b; 	J(LOOP(loc_17c9a));	// 20769                  loop    loc_17C9A ;~ 08A6:0C5B
cs=0x8a6;eip=0x000c5d; 	X(POP(di));	// 20770                  pop     di ;~ 08A6:0C5D
cs=0x8a6;eip=0x000c5e; 	X(POP(si));	// 20771                  pop     si ;~ 08A6:0C5E
cs=0x8a6;eip=0x000c5f; 	T(ADD(si, 0x50));	// 20772                  add     si, 50h ; 'P' ;~ 08A6:0C5F
cs=0x8a6;eip=0x000c62; 	T(ADD(di, 0x50));	// 20773                  add     di, 50h ; 'P' ;~ 08A6:0C62
cs=0x8a6;eip=0x000c65; 	T(DEC(bx));	// 20774                  dec     bx ;~ 08A6:0C65
cs=0x8a6;eip=0x000c66; 	T(CMP(bx, 0));	// 20775                  cmp     bx, 0 ;~ 08A6:0C66
cs=0x8a6;eip=0x000c69; 	J(JNZ(loc_17c95));	// 20776                  jnz     short loc_17C95 ;~ 08A6:0C69
cs=0x8a6;eip=0x000c6b; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 20777                  mov     si, [bp+6] ;~ 08A6:0C6B
cs=0x8a6;eip=0x000c6e; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 20778                  mov     di, [bp+8] ;~ 08A6:0C6E
cs=0x8a6;eip=0x000c71; 	T(dx = 0x3C4;);	// 20779                  mov     dx, 3C4h ;~ 08A6:0C71
cs=0x8a6;eip=0x000c74; 	T(ax = 0x202;);	// 20780                  mov     ax, 202h ;~ 08A6:0C74
cs=0x8a6;eip=0x000c77; 	S(OUT(dx, ax));	// 20781                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0C77
cs=0x8a6;eip=0x000c78; 	T(dx = 0x3CE;);	// 20783                  mov     dx, 3CEh ;~ 08A6:0C78
cs=0x8a6;eip=0x000c7b; 	T(ax = 0x104;);	// 20784                  mov     ax, 104h ;~ 08A6:0C7B
cs=0x8a6;eip=0x000c7e; 	S(OUT(dx, ax));	// 20785                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0C7E
cs=0x8a6;eip=0x000c7f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 20787                  mov     bx, [bp+0Ch] ;~ 08A6:0C7F
loc_17cc2:
	// 5461 
cs=0x8a6;eip=0x000c82; 	X(PUSH(si));	// 20790                  push    si ;~ 08A6:0C82
cs=0x8a6;eip=0x000c83; 	X(PUSH(di));	// 20791                  push    di ;~ 08A6:0C83
cs=0x8a6;eip=0x000c84; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0A))));	// 20792                  mov     cx, [bp+0Ah] ;~ 08A6:0C84
loc_17cc7:
	// 5462 
cs=0x8a6;eip=0x000c87; 	X(MOVSB);	// 20795                  movsb ;~ 08A6:0C87
cs=0x8a6;eip=0x000c88; 	J(LOOP(loc_17cc7));	// 20796                  loop    loc_17CC7 ;~ 08A6:0C88
cs=0x8a6;eip=0x000c8a; 	X(POP(di));	// 20797                  pop     di ;~ 08A6:0C8A
cs=0x8a6;eip=0x000c8b; 	X(POP(si));	// 20798                  pop     si ;~ 08A6:0C8B
cs=0x8a6;eip=0x000c8c; 	T(ADD(si, 0x50));	// 20799                  add     si, 50h ; 'P' ;~ 08A6:0C8C
cs=0x8a6;eip=0x000c8f; 	T(ADD(di, 0x50));	// 20800                  add     di, 50h ; 'P' ;~ 08A6:0C8F
cs=0x8a6;eip=0x000c92; 	T(DEC(bx));	// 20801                  dec     bx ;~ 08A6:0C92
cs=0x8a6;eip=0x000c93; 	T(CMP(bx, 0));	// 20802                  cmp     bx, 0 ;~ 08A6:0C93
cs=0x8a6;eip=0x000c96; 	J(JNZ(loc_17cc2));	// 20803                  jnz     short loc_17CC2 ;~ 08A6:0C96
cs=0x8a6;eip=0x000c98; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 20804                  mov     si, [bp+6] ;~ 08A6:0C98
cs=0x8a6;eip=0x000c9b; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 20805                  mov     di, [bp+8] ;~ 08A6:0C9B
cs=0x8a6;eip=0x000c9e; 	T(dx = 0x3C4;);	// 20806                  mov     dx, 3C4h ;~ 08A6:0C9E
cs=0x8a6;eip=0x000ca1; 	T(ax = 0x402;);	// 20807                  mov     ax, 402h ;~ 08A6:0CA1
cs=0x8a6;eip=0x000ca4; 	S(OUT(dx, ax));	// 20808                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0CA4
cs=0x8a6;eip=0x000ca5; 	T(dx = 0x3CE;);	// 20810                  mov     dx, 3CEh ;~ 08A6:0CA5
cs=0x8a6;eip=0x000ca8; 	T(ax = 0x204;);	// 20811                  mov     ax, 204h ;~ 08A6:0CA8
cs=0x8a6;eip=0x000cab; 	S(OUT(dx, ax));	// 20812                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0CAB
cs=0x8a6;eip=0x000cac; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 20814                  mov     bx, [bp+0Ch] ;~ 08A6:0CAC
loc_17cef:
	// 5463 
cs=0x8a6;eip=0x000caf; 	X(PUSH(si));	// 20817                  push    si ;~ 08A6:0CAF
cs=0x8a6;eip=0x000cb0; 	X(PUSH(di));	// 20818                  push    di ;~ 08A6:0CB0
cs=0x8a6;eip=0x000cb1; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0A))));	// 20819                  mov     cx, [bp+0Ah] ;~ 08A6:0CB1
loc_17cf4:
	// 5464 
cs=0x8a6;eip=0x000cb4; 	X(MOVSB);	// 20822                  movsb ;~ 08A6:0CB4
cs=0x8a6;eip=0x000cb5; 	J(LOOP(loc_17cf4));	// 20823                  loop    loc_17CF4 ;~ 08A6:0CB5
cs=0x8a6;eip=0x000cb7; 	X(POP(di));	// 20824                  pop     di ;~ 08A6:0CB7
cs=0x8a6;eip=0x000cb8; 	X(POP(si));	// 20825                  pop     si ;~ 08A6:0CB8
cs=0x8a6;eip=0x000cb9; 	T(ADD(si, 0x50));	// 20826                  add     si, 50h ; 'P' ;~ 08A6:0CB9
cs=0x8a6;eip=0x000cbc; 	T(ADD(di, 0x50));	// 20827                  add     di, 50h ; 'P' ;~ 08A6:0CBC
cs=0x8a6;eip=0x000cbf; 	T(DEC(bx));	// 20828                  dec     bx ;~ 08A6:0CBF
cs=0x8a6;eip=0x000cc0; 	T(CMP(bx, 0));	// 20829                  cmp     bx, 0 ;~ 08A6:0CC0
cs=0x8a6;eip=0x000cc3; 	J(JNZ(loc_17cef));	// 20830                  jnz     short loc_17CEF ;~ 08A6:0CC3
cs=0x8a6;eip=0x000cc5; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 20831                  mov     si, [bp+6] ;~ 08A6:0CC5
cs=0x8a6;eip=0x000cc8; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 20832                  mov     di, [bp+8] ;~ 08A6:0CC8
cs=0x8a6;eip=0x000ccb; 	T(dx = 0x3C4;);	// 20833                  mov     dx, 3C4h ;~ 08A6:0CCB
cs=0x8a6;eip=0x000cce; 	T(ax = 0x802;);	// 20834                  mov     ax, 802h ;~ 08A6:0CCE
cs=0x8a6;eip=0x000cd1; 	S(OUT(dx, ax));	// 20835                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0CD1
cs=0x8a6;eip=0x000cd2; 	T(dx = 0x3CE;);	// 20837                  mov     dx, 3CEh ;~ 08A6:0CD2
cs=0x8a6;eip=0x000cd5; 	T(ax = 0x304;);	// 20838                  mov     ax, 304h ;~ 08A6:0CD5
cs=0x8a6;eip=0x000cd8; 	S(OUT(dx, ax));	// 20839                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0CD8
cs=0x8a6;eip=0x000cd9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 20841                  mov     bx, [bp+0Ch] ;~ 08A6:0CD9
loc_17d1c:
	// 5465 
cs=0x8a6;eip=0x000cdc; 	X(PUSH(si));	// 20844                  push    si ;~ 08A6:0CDC
cs=0x8a6;eip=0x000cdd; 	X(PUSH(di));	// 20845                  push    di ;~ 08A6:0CDD
cs=0x8a6;eip=0x000cde; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0A))));	// 20846                  mov     cx, [bp+0Ah] ;~ 08A6:0CDE
loc_17d21:
	// 5466 
cs=0x8a6;eip=0x000ce1; 	X(MOVSB);	// 20849                  movsb ;~ 08A6:0CE1
cs=0x8a6;eip=0x000ce2; 	J(LOOP(loc_17d21));	// 20850                  loop    loc_17D21 ;~ 08A6:0CE2
cs=0x8a6;eip=0x000ce4; 	X(POP(di));	// 20851                  pop     di ;~ 08A6:0CE4
cs=0x8a6;eip=0x000ce5; 	X(POP(si));	// 20852                  pop     si ;~ 08A6:0CE5
cs=0x8a6;eip=0x000ce6; 	T(ADD(si, 0x50));	// 20853                  add     si, 50h ; 'P' ;~ 08A6:0CE6
cs=0x8a6;eip=0x000ce9; 	T(ADD(di, 0x50));	// 20854                  add     di, 50h ; 'P' ;~ 08A6:0CE9
cs=0x8a6;eip=0x000cec; 	T(DEC(bx));	// 20855                  dec     bx ;~ 08A6:0CEC
cs=0x8a6;eip=0x000ced; 	T(CMP(bx, 0));	// 20856                  cmp     bx, 0 ;~ 08A6:0CED
cs=0x8a6;eip=0x000cf0; 	J(JNZ(loc_17d1c));	// 20857                  jnz     short loc_17D1C ;~ 08A6:0CF0
cs=0x8a6;eip=0x000cf2; 	X(POP(ds));	// 20858                  pop     ds ;~ 08A6:0CF2
cs=0x8a6;eip=0x000cf3; 	X(POP(es));	// 20860                  pop     es ;~ 08A6:0CF3
cs=0x8a6;eip=0x000cf4; 	X(POPA);	// 20862                  popa ;~ 08A6:0CF4
cs=0x8a6;eip=0x000cf5; 	T(LEAVE);	// 20863                  leave ;~ 08A6:0CF5
cs=0x8a6;eip=0x000cf6; 	J(RETF(0));	// 20864                  retf ;~ 08A6:0CF6
ret_8a6_cf7:
	// 5467 
cs=0x8a6;eip=0x000cf7; 	X(PUSHA);	// 20866                  pusha ;~ 08A6:0CF7
cs=0x8a6;eip=0x000cf8; 	X(PUSH(es));	// 20867                  push    es ;~ 08A6:0CF8
cs=0x8a6;eip=0x000cf9; 	X(PUSH(ds));	// 20868                  push    ds ;~ 08A6:0CF9
cs=0x8a6;eip=0x000cfa; 	T(ax = 0x1200;);	// 20869                  mov     ax, 1200h ;~ 08A6:0CFA
cs=0x8a6;eip=0x000cfd; 	T(bl = 0x36;);	// 20870                  mov     bl, 36h ; '6' ;~ 08A6:0CFD
cs=0x8a6;eip=0x000cff; 	S(_INT(0x10));	// 20871                  int     10h             ; - VIDEO - ALTERNATE FUNCTION SELECT (PS, VGA) - VIDEO REFRESH CONTROL: enable refresh ;~ 08A6:0CFF
cs=0x8a6;eip=0x000d01; 	T(CMP(al, 0x12));	// 20872                  cmp     al, 12h ;~ 08A6:0D01
cs=0x8a6;eip=0x000d03; 	J(JZ(loc_17d4a));	// 20873                  jz      short loc_17D4A ;~ 08A6:0D03
cs=0x8a6;eip=0x000d05; 	X(byte_18e88 = 0;);	// 20874                  mov     byte_18E88, 0 ;~ 08A6:0D05
loc_17d4a:
	// 5468 
cs=0x8a6;eip=0x000d0a; 	X(POP(ds));	// 20877                  pop     ds ;~ 08A6:0D0A
cs=0x8a6;eip=0x000d0b; 	X(POP(es));	// 20878                  pop     es ;~ 08A6:0D0B
cs=0x8a6;eip=0x000d0c; 	X(POPA);	// 20879                  popa ;~ 08A6:0D0C
cs=0x8a6;eip=0x000d0d; 	J(RETF(0));	// 20880                  retf ;~ 08A6:0D0D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1783b: 	goto loc_1783b;
        case m2c::kloc_1784a: 	goto loc_1784a;
        case m2c::kloc_17851: 	goto loc_17851;
        case m2c::kloc_178b5: 	goto loc_178b5;
        case m2c::kloc_178b8: 	goto loc_178b8;
        case m2c::kloc_178bd: 	goto loc_178bd;
        case m2c::kloc_178ca: 	goto loc_178ca;
        case m2c::kloc_178ed: 	goto loc_178ed;
        case m2c::kloc_17909: 	goto loc_17909;
        case m2c::kloc_1791d: 	goto loc_1791d;
        case m2c::kloc_1794a: 	goto loc_1794a;
        case m2c::kloc_17959: 	goto loc_17959;
        case m2c::kloc_17960: 	goto loc_17960;
        case m2c::kloc_179cd: 	goto loc_179cd;
        case m2c::kloc_179d1: 	goto loc_179d1;
        case m2c::kloc_179d6: 	goto loc_179d6;
        case m2c::kloc_179f9: 	goto loc_179f9;
        case m2c::kloc_179ff: 	goto loc_179ff;
        case m2c::kloc_17a2d: 	goto loc_17a2d;
        case m2c::kloc_17a49: 	goto loc_17a49;
        case m2c::kloc_17a5e: 	goto loc_17a5e;
        case m2c::kloc_17a88: 	goto loc_17a88;
        case m2c::kloc_17ac7: 	goto loc_17ac7;
        case m2c::kloc_17aca: 	goto loc_17aca;
        case m2c::kloc_17ad3: 	goto loc_17ad3;
        case m2c::kloc_17afa: 	goto loc_17afa;
        case m2c::kloc_17afd: 	goto loc_17afd;
        case m2c::kloc_17b06: 	goto loc_17b06;
        case m2c::kloc_17b2d: 	goto loc_17b2d;
        case m2c::kloc_17b30: 	goto loc_17b30;
        case m2c::kloc_17b39: 	goto loc_17b39;
        case m2c::kloc_17b60: 	goto loc_17b60;
        case m2c::kloc_17b63: 	goto loc_17b63;
        case m2c::kloc_17b6c: 	goto loc_17b6c;
        case m2c::kloc_17ba6: 	goto loc_17ba6;
        case m2c::kloc_17bab: 	goto loc_17bab;
        case m2c::kloc_17bb4: 	goto loc_17bb4;
        case m2c::kloc_17bdd: 	goto loc_17bdd;
        case m2c::kloc_17be2: 	goto loc_17be2;
        case m2c::kloc_17beb: 	goto loc_17beb;
        case m2c::kloc_17c14: 	goto loc_17c14;
        case m2c::kloc_17c19: 	goto loc_17c19;
        case m2c::kloc_17c22: 	goto loc_17c22;
        case m2c::kloc_17c4b: 	goto loc_17c4b;
        case m2c::kloc_17c50: 	goto loc_17c50;
        case m2c::kloc_17c59: 	goto loc_17c59;
        case m2c::kloc_17c95: 	goto loc_17c95;
        case m2c::kloc_17c9a: 	goto loc_17c9a;
        case m2c::kloc_17cc2: 	goto loc_17cc2;
        case m2c::kloc_17cc7: 	goto loc_17cc7;
        case m2c::kloc_17cef: 	goto loc_17cef;
        case m2c::kloc_17cf4: 	goto loc_17cf4;
        case m2c::kloc_17d1c: 	goto loc_17d1c;
        case m2c::kloc_17d21: 	goto loc_17d21;
        case m2c::kloc_17d4a: 	goto loc_17d4a;
        case m2c::kret_8a6_8e2: 	goto ret_8a6_8e2;
        case m2c::kret_8a6_a23: 	goto ret_8a6_a23;
        case m2c::kret_8a6_a62: 	goto ret_8a6_a62;
        case m2c::kret_8a6_b41: 	goto ret_8a6_b41;
        case m2c::kret_8a6_c30: 	goto ret_8a6_c30;
        case m2c::kret_8a6_cf7: 	goto ret_8a6_cf7;
        case m2c::kseg004_7d3_proc: 	goto seg004_7d3_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_17d4e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_17d4e:
    _begin:
cs=0x8a6;eip=0x000d0e; 	X(PUSHA);	// 20886                  pusha ;~ 08A6:0D0E
cs=0x8a6;eip=0x000d0f; 	X(PUSH(es));	// 20887                  push    es ;~ 08A6:0D0F
cs=0x8a6;eip=0x000d10; 	X(PUSH(ds));	// 20888                  push    ds ;~ 08A6:0D10
cs=0x8a6;eip=0x000d11; 	T(ax = 0x13;);	// 20889                  mov     ax, 13h ;~ 08A6:0D11
cs=0x8a6;eip=0x000d14; 	S(_INT(0x10));	// 20890                  int     10h             ; - VIDEO - SET VIDEO MODE ;~ 08A6:0D14
cs=0x8a6;eip=0x000d16; 	T(dx = 0x3C4;);	// 20892                  mov     dx, 3C4h ;~ 08A6:0D16
cs=0x8a6;eip=0x000d19; 	T(al = 4;);	// 20893                  mov     al, 4 ;~ 08A6:0D19
cs=0x8a6;eip=0x000d1b; 	S(OUT(dx, al));	// 20894                  out     dx, al          ; EGA: sequencer address reg ;~ 08A6:0D1B
cs=0x8a6;eip=0x000d1c; 	T(INC(dx));	// 20899                  inc     dx ;~ 08A6:0D1C
cs=0x8a6;eip=0x000d1d; 	S(IN(al, dx));	// 20900                  in      al, dx          ; EGA port: sequencer data register ;~ 08A6:0D1D
cs=0x8a6;eip=0x000d1e; 	T(AND(al, 0x0F7));	// 20901                  and     al, 0F7h ;~ 08A6:0D1E
cs=0x8a6;eip=0x000d20; 	T(OR(al, 4));	// 20902                  or      al, 4 ;~ 08A6:0D20
cs=0x8a6;eip=0x000d22; 	S(OUT(dx, al));	// 20903                  out     dx, al          ; EGA port: sequencer data register ;~ 08A6:0D22
cs=0x8a6;eip=0x000d23; 	T(dx = 0x3CE;);	// 20904                  mov     dx, 3CEh ;~ 08A6:0D23
cs=0x8a6;eip=0x000d26; 	T(al = 5;);	// 20905                  mov     al, 5 ;~ 08A6:0D26
cs=0x8a6;eip=0x000d28; 	S(OUT(dx, al));	// 20906                  out     dx, al          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0D28
cs=0x8a6;eip=0x000d29; 	T(INC(dx));	// 20913                  inc     dx ;~ 08A6:0D29
cs=0x8a6;eip=0x000d2a; 	S(IN(al, dx));	// 20914                  in      al, dx          ; EGA port: graphics controller data register ;~ 08A6:0D2A
cs=0x8a6;eip=0x000d2b; 	T(AND(al, 0x0EF));	// 20915                  and     al, 0EFh ;~ 08A6:0D2B
cs=0x8a6;eip=0x000d2d; 	S(OUT(dx, al));	// 20916                  out     dx, al          ; EGA port: graphics controller data register ;~ 08A6:0D2D
cs=0x8a6;eip=0x000d2e; 	T(DEC(dx));	// 20917                  dec     dx ;~ 08A6:0D2E
cs=0x8a6;eip=0x000d2f; 	T(al = 6;);	// 20918                  mov     al, 6 ;~ 08A6:0D2F
cs=0x8a6;eip=0x000d31; 	S(OUT(dx, al));	// 20919                  out     dx, al          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0D31
cs=0x8a6;eip=0x000d32; 	T(INC(dx));	// 20926                  inc     dx ;~ 08A6:0D32
cs=0x8a6;eip=0x000d33; 	S(IN(al, dx));	// 20927                  in      al, dx          ; EGA port: graphics controller data register ;~ 08A6:0D33
cs=0x8a6;eip=0x000d34; 	T(AND(al, 0x0FD));	// 20928                  and     al, 0FDh ;~ 08A6:0D34
cs=0x8a6;eip=0x000d36; 	S(OUT(dx, al));	// 20929                  out     dx, al          ; EGA port: graphics controller data register ;~ 08A6:0D36
cs=0x8a6;eip=0x000d37; 	T(dx = 0x3D4;);	// 20930                  mov     dx, 3D4h ;~ 08A6:0D37
cs=0x8a6;eip=0x000d3a; 	T(al = 0x14;);	// 20931                  mov     al, 14h ;~ 08A6:0D3A
cs=0x8a6;eip=0x000d3c; 	S(OUT(dx, al));	// 20932                  out     dx, al          ; Video: CRT cntrlr addr ;~ 08A6:0D3C
cs=0x8a6;eip=0x000d3d; 	T(INC(dx));	// 20934                  inc     dx ;~ 08A6:0D3D
cs=0x8a6;eip=0x000d3e; 	S(IN(al, dx));	// 20935                  in      al, dx          ; Video: CRT controller internal registers ;~ 08A6:0D3E
cs=0x8a6;eip=0x000d3f; 	T(AND(al, 0x0BF));	// 20936                  and     al, 0BFh ;~ 08A6:0D3F
cs=0x8a6;eip=0x000d41; 	S(OUT(dx, al));	// 20937                  out     dx, al          ; Video: CRT controller internal registers ;~ 08A6:0D41
cs=0x8a6;eip=0x000d42; 	T(DEC(dx));	// 20938                  dec     dx ;~ 08A6:0D42
cs=0x8a6;eip=0x000d43; 	T(al = 0x17;);	// 20939                  mov     al, 17h ;~ 08A6:0D43
cs=0x8a6;eip=0x000d45; 	S(OUT(dx, al));	// 20940                  out     dx, al          ; Video: CRT cntrlr addr ;~ 08A6:0D45
cs=0x8a6;eip=0x000d46; 	T(INC(dx));	// 20950                  inc     dx ;~ 08A6:0D46
cs=0x8a6;eip=0x000d47; 	S(IN(al, dx));	// 20951                  in      al, dx          ; Video: CRT controller internal registers ;~ 08A6:0D47
cs=0x8a6;eip=0x000d48; 	T(OR(al, 0x40));	// 20952                  or      al, 40h ;~ 08A6:0D48
cs=0x8a6;eip=0x000d4a; 	S(OUT(dx, al));	// 20953                  out     dx, al          ; Video: CRT controller internal registers ;~ 08A6:0D4A
cs=0x8a6;eip=0x000d4b; 	X(POP(ds));	// 20954                  pop     ds ;~ 08A6:0D4B
cs=0x8a6;eip=0x000d4c; 	X(POP(es));	// 20955                  pop     es ;~ 08A6:0D4C
cs=0x8a6;eip=0x000d4d; 	X(POPA);	// 20956                  popa ;~ 08A6:0D4D
cs=0x8a6;eip=0x000d4e; 	J(RETF(0));	// 20957                  retf ;~ 08A6:0D4E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_17d4e: 	goto sub_17d4e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg004_d4f_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg004_d4f_proc:
    _begin:
cs=0x8a6;eip=0x000d4f; 	X(PUSHA);	// 20961                  pusha ;~ 08A6:0D4F
cs=0x8a6;eip=0x000d50; 	T(ax = 3;);	// 20962                  mov     ax, 3 ;~ 08A6:0D50
cs=0x8a6;eip=0x000d53; 	S(_INT(0x10));	// 20963                  int     10h             ; - VIDEO - SET VIDEO MODE ;~ 08A6:0D53
cs=0x8a6;eip=0x000d55; 	X(POPA);	// 20965                  popa ;~ 08A6:0D55
cs=0x8a6;eip=0x000d56; 	J(RETF(0));	// 20966                  retf ;~ 08A6:0D56

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg004_d4f_proc: 	goto seg004_d4f_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_17d97(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_17d97:
    _begin:
cs=0x8a6;eip=0x000d57; 	X(PUSHA);	// 20972                  pusha ;~ 08A6:0D57
cs=0x8a6;eip=0x000d58; 	X(PUSH(ds));	// 20973                  push    ds ;~ 08A6:0D58
cs=0x8a6;eip=0x000d59; 	X(PUSH(es));	// 20974                  push    es ;~ 08A6:0D59
cs=0x8a6;eip=0x000d5a; 	T(ax = 0;);	// 20975                  mov     ax, 0 ;~ 08A6:0D5A
cs=0x8a6;eip=0x000d5d; 	S(_INT(0x33));	// 20976                  int     33h             ; - MS MOUSE - RESET DRIVER AND READ STATUS ;~ 08A6:0D5D
cs=0x8a6;eip=0x000d5f; 	X(byte_18e88 = al;);	// 20979                  mov     byte_18E88, al ;~ 08A6:0D5F
cs=0x8a6;eip=0x000d62; 	X(POP(es));	// 20980                  pop     es ;~ 08A6:0D62
cs=0x8a6;eip=0x000d63; 	X(POP(ds));	// 20981                  pop     ds ;~ 08A6:0D63
cs=0x8a6;eip=0x000d64; 	X(POPA);	// 20982                  popa ;~ 08A6:0D64
cs=0x8a6;eip=0x000d65; 	J(RETF(0));	// 20983                  retf ;~ 08A6:0D65

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_17d97: 	goto sub_17d97;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg004_d66_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg004_d66_proc:
    _begin:
cs=0x8a6;eip=0x000d66; 	X(ENTER(0, 0));	// 20987                  enter   0, 0 ;~ 08A6:0D66
cs=0x8a6;eip=0x000d6a; 	X(PUSHA);	// 20988                  pusha ;~ 08A6:0D6A
cs=0x8a6;eip=0x000d6b; 	X(PUSH(es));	// 20989                  push    es ;~ 08A6:0D6B
cs=0x8a6;eip=0x000d6c; 	X(PUSH(ds));	// 20990                  push    ds ;~ 08A6:0D6C
cs=0x8a6;eip=0x000d6d; 	T(ax = 7;);	// 20991                  mov     ax, 7 ;~ 08A6:0D6D
cs=0x8a6;eip=0x000d70; 	T(MOV(cx, *(dw*)(raddr(ss,bp+6))));	// 20992                  mov     cx, [bp+6] ;~ 08A6:0D70
cs=0x8a6;eip=0x000d73; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x0A))));	// 20993                  mov     dx, [bp+0Ah] ;~ 08A6:0D73
cs=0x8a6;eip=0x000d76; 	S(_INT(0x33));	// 20994                  int     33h             ; - MS MOUSE - DEFINE HORIZONTAL CURSOR RANGE ;~ 08A6:0D76
cs=0x8a6;eip=0x000d78; 	T(ax = 8;);	// 20996                  mov     ax, 8 ;~ 08A6:0D78
cs=0x8a6;eip=0x000d7b; 	T(MOV(cx, *(dw*)(raddr(ss,bp+8))));	// 20997                  mov     cx, [bp+8] ;~ 08A6:0D7B
cs=0x8a6;eip=0x000d7e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x0C))));	// 20998                  mov     dx, [bp+0Ch] ;~ 08A6:0D7E
cs=0x8a6;eip=0x000d81; 	S(_INT(0x33));	// 20999                  int     33h             ; - MS MOUSE - DEFINE VERTICAL CURSOR RANGE ;~ 08A6:0D81
cs=0x8a6;eip=0x000d83; 	X(POP(ds));	// 21001                  pop     ds ;~ 08A6:0D83
cs=0x8a6;eip=0x000d84; 	X(POP(es));	// 21002                  pop     es ;~ 08A6:0D84
cs=0x8a6;eip=0x000d85; 	X(POPA);	// 21003                  popa ;~ 08A6:0D85
cs=0x8a6;eip=0x000d86; 	T(LEAVE);	// 21004                  leave ;~ 08A6:0D86
cs=0x8a6;eip=0x000d87; 	J(RETF(0));	// 21005                  retf ;~ 08A6:0D87
ret_8a6_d88:
	// 5469 
cs=0x8a6;eip=0x000d88; 	X(ENTER(0, 0));	// 21007                  enter   0, 0 ;~ 08A6:0D88
cs=0x8a6;eip=0x000d8c; 	X(PUSHA);	// 21008                  pusha ;~ 08A6:0D8C
cs=0x8a6;eip=0x000d8d; 	T(ax = 4;);	// 21009                  mov     ax, 4 ;~ 08A6:0D8D
cs=0x8a6;eip=0x000d90; 	T(MOV(cx, *(dw*)(raddr(ss,bp+6))));	// 21010                  mov     cx, [bp+6] ;~ 08A6:0D90
cs=0x8a6;eip=0x000d93; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 21011                  mov     dx, [bp+8] ;~ 08A6:0D93
cs=0x8a6;eip=0x000d96; 	S(_INT(0x33));	// 21012                  int     33h             ; - MS MOUSE - POSITION MOUSE CURSOR ;~ 08A6:0D96
cs=0x8a6;eip=0x000d98; 	X(*(dw*)(&byte_18e7c) = cx;);	// 21014                  mov     word ptr byte_18E7C, cx ;~ 08A6:0D98
cs=0x8a6;eip=0x000d9c; 	X(*(dw*)(&byte_18e7e) = dx;);	// 21015                  mov     word ptr byte_18E7E, dx ;~ 08A6:0D9C
cs=0x8a6;eip=0x000da0; 	X(POPA);	// 21016                  popa ;~ 08A6:0DA0
cs=0x8a6;eip=0x000da1; 	T(LEAVE);	// 21017                  leave ;~ 08A6:0DA1
cs=0x8a6;eip=0x000da2; 	J(RETF(0));	// 21018                  retf ;~ 08A6:0DA2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_8a6_d88: 	goto ret_8a6_d88;
        case m2c::kseg004_d66_proc: 	goto seg004_d66_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_17de3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_17de3:
    _begin:
cs=0x8a6;eip=0x000da3; 	X(PUSHA);	// 21024                  pusha ;~ 08A6:0DA3
cs=0x8a6;eip=0x000da4; 	X(PUSH(es));	// 21025                  push    es ;~ 08A6:0DA4
cs=0x8a6;eip=0x000da5; 	X(PUSH(ds));	// 21026                  push    ds ;~ 08A6:0DA5
cs=0x8a6;eip=0x000da6; 	T(ax = *(dw*)(&byte_18e7c););	// 21027                  mov     ax, word ptr byte_18E7C ;~ 08A6:0DA6
cs=0x8a6;eip=0x000da9; 	T(bx = *(dw*)(&byte_18e7e););	// 21028                  mov     bx, word ptr byte_18E7E ;~ 08A6:0DA9
cs=0x8a6;eip=0x000dad; 	X(*(dw*)(&byte_18e84) = ax;);	// 21029                  mov     word ptr byte_18E84, ax ;~ 08A6:0DAD
cs=0x8a6;eip=0x000db0; 	X(*(dw*)(&byte_18e86) = bx;);	// 21030                  mov     word ptr byte_18E86, bx ;~ 08A6:0DB0
cs=0x8a6;eip=0x000db4; 	T(ax = 3;);	// 21031                  mov     ax, 3 ;~ 08A6:0DB4
cs=0x8a6;eip=0x000db7; 	S(_INT(0x33));	// 21032                  int     33h             ; - MS MOUSE - RETURN POSITION AND BUTTON STATUS ;~ 08A6:0DB7
cs=0x8a6;eip=0x000db9; 	X(byte_18e88 = bl;);	// 21034                  mov     byte_18E88, bl ;~ 08A6:0DB9
cs=0x8a6;eip=0x000dbd; 	X(*(dw*)(&byte_18e7c) = cx;);	// 21035                  mov     word ptr byte_18E7C, cx ;~ 08A6:0DBD
cs=0x8a6;eip=0x000dc1; 	X(*(dw*)(&byte_18e80) = cx;);	// 21036                  mov     word ptr byte_18E80, cx ;~ 08A6:0DC1
cs=0x8a6;eip=0x000dc5; 	X(ADD(*(dw*)(&byte_18e80), 0x0C));	// 21037                  add     word ptr byte_18E80, 0Ch ;~ 08A6:0DC5
cs=0x8a6;eip=0x000dca; 	X(*(dw*)(&byte_18e7e) = dx;);	// 21038                  mov     word ptr byte_18E7E, dx ;~ 08A6:0DCA
cs=0x8a6;eip=0x000dce; 	X(*(dw*)(&byte_18e82) = dx;);	// 21039                  mov     word ptr byte_18E82, dx ;~ 08A6:0DCE
cs=0x8a6;eip=0x000dd2; 	X(ADD(*(dw*)(&byte_18e82), 2));	// 21040                  add     word ptr byte_18E82, 2 ;~ 08A6:0DD2
cs=0x8a6;eip=0x000dd7; 	X(POP(ds));	// 21041                  pop     ds ;~ 08A6:0DD7
cs=0x8a6;eip=0x000dd8; 	X(POP(es));	// 21042                  pop     es ;~ 08A6:0DD8
cs=0x8a6;eip=0x000dd9; 	X(POPA);	// 21043                  popa ;~ 08A6:0DD9
cs=0x8a6;eip=0x000dda; 	J(RETF(0));	// 21044                  retf ;~ 08A6:0DDA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_17de3: 	goto sub_17de3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_17e1b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_17e1b:
    _begin:
cs=0x8a6;eip=0x000ddb; 	X(PUSHA);	// 21053                  pusha ;~ 08A6:0DDB
cs=0x8a6;eip=0x000ddc; 	T(ax = 0;);	// 21054                  mov     ax, 0 ;~ 08A6:0DDC
cs=0x8a6;eip=0x000ddf; 	S(_INT(0x33));	// 21055                  int     33h             ; - MS MOUSE - RESET DRIVER AND READ STATUS ;~ 08A6:0DDF
cs=0x8a6;eip=0x000de1; 	X(POPA);	// 21058                  popa ;~ 08A6:0DE1
cs=0x8a6;eip=0x000de2; 	J(RETF(0));	// 21059                  retf ;~ 08A6:0DE2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_17e1b: 	goto sub_17e1b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg004_de3_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg004_de3_proc:
    _begin:
cs=0x8a6;eip=0x000de3; 	X(ENTER(0, 0));	// 21063                  enter   0, 0 ;~ 08A6:0DE3
cs=0x8a6;eip=0x000de7; 	X(PUSHA);	// 21064                  pusha ;~ 08A6:0DE7
cs=0x8a6;eip=0x000de8; 	X(PUSH(es));	// 21065                  push    es ;~ 08A6:0DE8
cs=0x8a6;eip=0x000de9; 	X(PUSH(ds));	// 21066                  push    ds ;~ 08A6:0DE9
cs=0x8a6;eip=0x000dea; 	T(ax = *(dw*)(&byte_18e7e););	// 21067                  mov     ax, word ptr byte_18E7E ;~ 08A6:0DEA
cs=0x8a6;eip=0x000ded; 	T(SHL(ax, 4));	// 21068                  shl     ax, 4 ;~ 08A6:0DED
cs=0x8a6;eip=0x000df0; 	T(bx = ax;);	// 21069                  mov     bx, ax ;~ 08A6:0DF0
cs=0x8a6;eip=0x000df2; 	T(SHL(bx, 2));	// 21070                  shl     bx, 2 ;~ 08A6:0DF2
cs=0x8a6;eip=0x000df5; 	T(ADD(ax, bx));	// 21071                  add     ax, bx ;~ 08A6:0DF5
cs=0x8a6;eip=0x000df7; 	X(ADD(*(dw*)(raddr(ss,bp+0x0C)), ax));	// 21072                  add     [bp+0Ch], ax ;~ 08A6:0DF7
cs=0x8a6;eip=0x000dfa; 	T(ax = *(dw*)(&byte_18e7c););	// 21073                  mov     ax, word ptr byte_18E7C ;~ 08A6:0DFA
cs=0x8a6;eip=0x000dfd; 	T(SHR(ax, 2));	// 21074                  shr     ax, 2 ;~ 08A6:0DFD
cs=0x8a6;eip=0x000e00; 	X(ADD(*(dw*)(raddr(ss,bp+0x0C)), ax));	// 21075                  add     [bp+0Ch], ax ;~ 08A6:0E00
cs=0x8a6;eip=0x000e03; 	T(ax = 0x0A000;);	// 21076                  mov     ax, 0A000h ;~ 08A6:0E03
cs=0x8a6;eip=0x000e06; 	T(es = ax;);	// 21077                  mov     es, ax ;~ 08A6:0E06
cs=0x8a6;eip=0x000e08; 	T(LDS(si, *(dw*)(raddr(ss,bp+6))));	// 21079                  lds     si, [bp+6] ;~ 08A6:0E08
cs=0x8a6;eip=0x000e0b; 	T(ADD(si, *(dw*)(raddr(ss,bp+0x0A))));	// 21080                  add     si, [bp+0Ah] ;~ 08A6:0E0B
cs=0x8a6;eip=0x000e0e; 	T(bh = 4;);	// 21081                  mov     bh, 4 ;~ 08A6:0E0E
cs=0x8a6;eip=0x000e10; 	T(dx = 0x3C4;);	// 21082                  mov     dx, 3C4h ;~ 08A6:0E10
cs=0x8a6;eip=0x000e13; 	T(cx = *(dw*)(&byte_18e7c););	// 21083                  mov     cx, word ptr cs:byte_18E7C ;~ 08A6:0E13
cs=0x8a6;eip=0x000e18; 	T(AND(cl, 3));	// 21084                  and     cl, 3 ;~ 08A6:0E18
cs=0x8a6;eip=0x000e1b; 	T(ah = 1;);	// 21085                  mov     ah, 1 ;~ 08A6:0E1B
cs=0x8a6;eip=0x000e1d; 	T(SHL(ah, cl));	// 21086                  shl     ah, cl ;~ 08A6:0E1D
loc_17e5f:
	// 5470 
cs=0x8a6;eip=0x000e1f; 	T(bl = 0x10;);	// 21089                  mov     bl, 10h ;~ 08A6:0E1F
cs=0x8a6;eip=0x000e21; 	T(al = 2;);	// 21090                  mov     al, 2 ;~ 08A6:0E21
cs=0x8a6;eip=0x000e23; 	S(OUT(dx, ax));	// 21091                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0E23
cs=0x8a6;eip=0x000e24; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 21094                  mov     di, [bp+0Ch] ;~ 08A6:0E24
loc_17e67:
	// 5471 
cs=0x8a6;eip=0x000e27; 	T(cx = 4;);	// 21097                  mov     cx, 4 ;~ 08A6:0E27
loc_17e6a:
	// 5472 
cs=0x8a6;eip=0x000e2a; 	T(LODSB);	// 21100                  lodsb ;~ 08A6:0E2A
cs=0x8a6;eip=0x000e2b; 	T(OR(al, al));	// 21101                  or      al, al ;~ 08A6:0E2B
cs=0x8a6;eip=0x000e2d; 	J(JZ(loc_17e72));	// 21102                  jz      short loc_17E72 ;~ 08A6:0E2D
cs=0x8a6;eip=0x000e2f; 	X(STOSB);	// 21103                  stosb ;~ 08A6:0E2F
cs=0x8a6;eip=0x000e30; 	J(JMP(loc_17e73));	// 21104                  jmp     short loc_17E73 ;~ 08A6:0E30
loc_17e72:
	// 5473 
cs=0x8a6;eip=0x000e32; 	T(INC(di));	// 21108                  inc     di ;~ 08A6:0E32
loc_17e73:
	// 5474 
cs=0x8a6;eip=0x000e33; 	J(LOOP(loc_17e6a));	// 21111                  loop    loc_17E6A ;~ 08A6:0E33
cs=0x8a6;eip=0x000e35; 	T(ADD(di, 0x4C));	// 21112                  add     di, 4Ch ; 'L' ;~ 08A6:0E35
cs=0x8a6;eip=0x000e38; 	T(ADD(si, 0x4C));	// 21113                  add     si, 4Ch ; 'L' ;~ 08A6:0E38
cs=0x8a6;eip=0x000e3b; 	T(DEC(bl));	// 21114                  dec     bl ;~ 08A6:0E3B
cs=0x8a6;eip=0x000e3d; 	J(JNZ(loc_17e67));	// 21115                  jnz     short loc_17E67 ;~ 08A6:0E3D
cs=0x8a6;eip=0x000e3f; 	T(DEC(bh));	// 21116                  dec     bh ;~ 08A6:0E3F
cs=0x8a6;eip=0x000e41; 	J(JZ(loc_17e95));	// 21117                  jz      short loc_17E95 ;~ 08A6:0E41
cs=0x8a6;eip=0x000e43; 	T(SHL(ah, 1));	// 21118                  shl     ah, 1 ;~ 08A6:0E43
cs=0x8a6;eip=0x000e45; 	T(CMP(ah, 0x10));	// 21119                  cmp     ah, 10h ;~ 08A6:0E45
cs=0x8a6;eip=0x000e48; 	J(JNZ(loc_17e8f));	// 21120                  jnz     short loc_17E8F ;~ 08A6:0E48
cs=0x8a6;eip=0x000e4a; 	T(ah = 1;);	// 21121                  mov     ah, 1 ;~ 08A6:0E4A
cs=0x8a6;eip=0x000e4c; 	X(INC(*(dw*)(raddr(ss,bp+0x0C))));	// 21122                  inc     word ptr [bp+0Ch] ;~ 08A6:0E4C
loc_17e8f:
	// 5475 
cs=0x8a6;eip=0x000e4f; 	T(ADD(si, 0x3980));	// 21125                  add     si, 3980h ;~ 08A6:0E4F
cs=0x8a6;eip=0x000e53; 	J(JMP(loc_17e5f));	// 21126                  jmp     short loc_17E5F ;~ 08A6:0E53
loc_17e95:
	// 5476 
cs=0x8a6;eip=0x000e55; 	X(POP(ds));	// 21130                  pop     ds ;~ 08A6:0E55
cs=0x8a6;eip=0x000e56; 	X(POP(es));	// 21131                  pop     es ;~ 08A6:0E56
cs=0x8a6;eip=0x000e57; 	X(POPA);	// 21133                  popa ;~ 08A6:0E57
cs=0x8a6;eip=0x000e58; 	T(LEAVE);	// 21134                  leave ;~ 08A6:0E58
cs=0x8a6;eip=0x000e59; 	J(RETF(0));	// 21135                  retf ;~ 08A6:0E59
ret_8a6_e5a:
	// 5477 
cs=0x8a6;eip=0x000e5a; 	X(ENTER(0, 0));	// 21137                  enter   0, 0 ;~ 08A6:0E5A
cs=0x8a6;eip=0x000e5e; 	X(PUSHA);	// 21138                  pusha ;~ 08A6:0E5E
cs=0x8a6;eip=0x000e5f; 	X(PUSH(es));	// 21139                  push    es ;~ 08A6:0E5F
cs=0x8a6;eip=0x000e60; 	X(PUSH(ds));	// 21140                  push    ds ;~ 08A6:0E60
cs=0x8a6;eip=0x000e61; 	T(ax = 0x0A000;);	// 21141                  mov     ax, 0A000h ;~ 08A6:0E61
cs=0x8a6;eip=0x000e64; 	T(es = ax;);	// 21142                  mov     es, ax ;~ 08A6:0E64
cs=0x8a6;eip=0x000e66; 	T(ds = ax;);	// 21144                  mov     ds, ax ;~ 08A6:0E66
cs=0x8a6;eip=0x000e68; 	T(di = 0;);	// 21146                  mov     di, 0 ;~ 08A6:0E68
cs=0x8a6;eip=0x000e6b; 	T(MOV(si, *(dw*)(raddr(ss,bp+8))));	// 21147                  mov     si, [bp+8] ;~ 08A6:0E6B
cs=0x8a6;eip=0x000e6e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 21148                  mov     ax, [bp+6] ;~ 08A6:0E6E
cs=0x8a6;eip=0x000e71; 	T(SHR(ax, 2));	// 21149                  shr     ax, 2 ;~ 08A6:0E71
cs=0x8a6;eip=0x000e74; 	T(ADD(si, ax));	// 21150                  add     si, ax ;~ 08A6:0E74
cs=0x8a6;eip=0x000e76; 	T(ADD(di, ax));	// 21151                  add     di, ax ;~ 08A6:0E76
cs=0x8a6;eip=0x000e78; 	T(MOV(cx, *(dw*)(raddr(ss,bp+6))));	// 21152                  mov     cx, [bp+6] ;~ 08A6:0E78
cs=0x8a6;eip=0x000e7b; 	T(AND(cl, 3));	// 21153                  and     cl, 3 ;~ 08A6:0E7B
cs=0x8a6;eip=0x000e7e; 	T(dx = 0x3CE;);	// 21154                  mov     dx, 3CEh ;~ 08A6:0E7E
cs=0x8a6;eip=0x000e81; 	T(al = 4;);	// 21155                  mov     al, 4 ;~ 08A6:0E81
cs=0x8a6;eip=0x000e83; 	T(ah = cl;);	// 21156                  mov     ah, cl ;~ 08A6:0E83
cs=0x8a6;eip=0x000e85; 	S(OUT(dx, ax));	// 21157                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0E85
cs=0x8a6;eip=0x000e86; 	T(ah = 1;);	// 21160                  mov     ah, 1 ;~ 08A6:0E86
cs=0x8a6;eip=0x000e88; 	T(SHL(ah, cl));	// 21161                  shl     ah, cl ;~ 08A6:0E88
cs=0x8a6;eip=0x000e8a; 	T(dx = 0x3C4;);	// 21162                  mov     dx, 3C4h ;~ 08A6:0E8A
cs=0x8a6;eip=0x000e8d; 	T(al = 2;);	// 21163                  mov     al, 2 ;~ 08A6:0E8D
cs=0x8a6;eip=0x000e8f; 	S(OUT(dx, ax));	// 21164                  out     dx, ax          ; EGA: sequencer address reg ;~ 08A6:0E8F
cs=0x8a6;eip=0x000e90; 	X(MOVSB);	// 21167                  movsb ;~ 08A6:0E90
cs=0x8a6;eip=0x000e91; 	T(ax = 0x0FF08;);	// 21168                  mov     ax, 0FF08h ;~ 08A6:0E91
cs=0x8a6;eip=0x000e94; 	T(dx = 0x3CE;);	// 21169                  mov     dx, 3CEh ;~ 08A6:0E94
cs=0x8a6;eip=0x000e97; 	S(OUT(dx, ax));	// 21170                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 08A6:0E97
cs=0x8a6;eip=0x000e98; 	X(POP(ds));	// 21172                  pop     ds ;~ 08A6:0E98
cs=0x8a6;eip=0x000e99; 	X(POP(es));	// 21174                  pop     es ;~ 08A6:0E99
cs=0x8a6;eip=0x000e9a; 	X(POPA);	// 21176                  popa ;~ 08A6:0E9A
cs=0x8a6;eip=0x000e9b; 	T(LEAVE);	// 21177                  leave ;~ 08A6:0E9B
cs=0x8a6;eip=0x000e9c; 	J(RETF(0));	// 21178                  retf ;~ 08A6:0E9C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_17e5f: 	goto loc_17e5f;
        case m2c::kloc_17e67: 	goto loc_17e67;
        case m2c::kloc_17e6a: 	goto loc_17e6a;
        case m2c::kloc_17e72: 	goto loc_17e72;
        case m2c::kloc_17e73: 	goto loc_17e73;
        case m2c::kloc_17e8f: 	goto loc_17e8f;
        case m2c::kloc_17e95: 	goto loc_17e95;
        case m2c::kret_8a6_e5a: 	goto ret_8a6_e5a;
        case m2c::kseg004_de3_proc: 	goto seg004_de3_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

