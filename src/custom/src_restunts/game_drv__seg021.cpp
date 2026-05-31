/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool heapsort_by_order(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    heapsort_by_order:
    _begin:
#undef var_8
#define var_8 -8
	// 80436 var_8           = word ptr -8 ;~ 2860:0008
#undef var_6
#define var_6 -6
	// 80437 var_6           = word ptr -6 ;~ 2860:0008
#undef var_4
#define var_4 -4
	// 80438 var_4           = word ptr -4 ;~ 2860:0008
#undef var_2
#define var_2 -2
	// 80439 var_2           = word ptr -2 ;~ 2860:0008
#undef arg_0
#define arg_0 6
	// 80440 arg_0           = word ptr  6 ;~ 2860:0008
#undef arg_2
#define arg_2 8
	// 80441 arg_2           = word ptr  8 ;~ 2860:0008
#undef arg_4
#define arg_4 0x0A
	// 80442 arg_4           = word ptr  0Ah ;~ 2860:0008
ret_2860_8:
	// 9970 
cs=0x2860;eip=0x000008; 	X(PUSH(bp));	// 80444 push    bp ;~ 2860:0008
cs=0x2860;eip=0x000009; 	T(MOV(bp, sp));	// 80445 mov     bp, sp ;~ 2860:0009
cs=0x2860;eip=0x00000b; 	T(SUB(sp, 8));	// 80446 sub     sp, 8 ;~ 2860:000B
cs=0x2860;eip=0x00000e; 	X(PUSH(di));	// 80447 push    di ;~ 2860:000E
cs=0x2860;eip=0x00000f; 	X(PUSH(si));	// 80448 push    si ;~ 2860:000F
cs=0x2860;eip=0x000010; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 80449 mov     ax, [bp+arg_0] ;~ 2860:0010
cs=0x2860;eip=0x000013; 	T(CWD);	// 80450 cwd ;~ 2860:0013
cs=0x2860;eip=0x000014; 	T(SUB(ax, dx));	// 80451 sub     ax, dx ;~ 2860:0014
cs=0x2860;eip=0x000016; 	T(SAR(ax, 1));	// 80452 sar     ax, 1 ;~ 2860:0016
cs=0x2860;eip=0x000018; 	R(JMP(loc_36c6b));	// 80453 jmp     short loc_36C6B ;~ 2860:0018
loc_36bfa:
	// 9971 
cs=0x2860;eip=0x00001a; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_8))));	// 80457 mov     si, [bp+var_8] ;~ 2860:001A
cs=0x2860;eip=0x00001d; 	T(SHL(si, 1));	// 80458 shl     si, 1 ;~ 2860:001D
cs=0x2860;eip=0x00001f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 80459 mov     bx, [bp+arg_2] ;~ 2860:001F
cs=0x2860;eip=0x000022; 	T(MOV(ax, *(dw*)(raddr(ds,bx+si))));	// 80460 mov     ax, [bx+si] ;~ 2860:0022
cs=0x2860;eip=0x000024; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 80461 mov     [bp+var_2], ax ;~ 2860:0024
cs=0x2860;eip=0x000027; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_8))));	// 80462 mov     di, [bp+var_8] ;~ 2860:0027
cs=0x2860;eip=0x00002a; 	T(ADD(di, *(dw*)(raddr(ss,bp+var_4))));	// 80463 add     di, [bp+var_4] ;~ 2860:002A
cs=0x2860;eip=0x00002d; 	T(SHL(di, 1));	// 80464 shl     di, 1 ;~ 2860:002D
cs=0x2860;eip=0x00002f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+di))));	// 80465 mov     ax, [bx+di] ;~ 2860:002F
cs=0x2860;eip=0x000031; 	X(MOV(*(dw*)(raddr(ds,bx+si)), ax));	// 80466 mov     [bx+si], ax ;~ 2860:0031
cs=0x2860;eip=0x000033; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 80467 mov     ax, [bp+var_2] ;~ 2860:0033
cs=0x2860;eip=0x000036; 	X(MOV(*(dw*)(raddr(ds,bx+di)), ax));	// 80468 mov     [bx+di], ax ;~ 2860:0036
cs=0x2860;eip=0x000038; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 80469 mov     bx, [bp+arg_4] ;~ 2860:0038
cs=0x2860;eip=0x00003b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+si))));	// 80470 mov     ax, [bx+si] ;~ 2860:003B
cs=0x2860;eip=0x00003d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 80471 mov     [bp+var_2], ax ;~ 2860:003D
cs=0x2860;eip=0x000040; 	T(MOV(ax, *(dw*)(raddr(ds,bx+di))));	// 80472 mov     ax, [bx+di] ;~ 2860:0040
cs=0x2860;eip=0x000042; 	X(MOV(*(dw*)(raddr(ds,bx+si)), ax));	// 80473 mov     [bx+si], ax ;~ 2860:0042
cs=0x2860;eip=0x000044; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 80474 mov     ax, [bp+var_2] ;~ 2860:0044
cs=0x2860;eip=0x000047; 	X(MOV(*(dw*)(raddr(ds,bx+di)), ax));	// 80475 mov     [bx+di], ax ;~ 2860:0047
cs=0x2860;eip=0x000049; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 80476 mov     ax, [bp+var_4] ;~ 2860:0049
cs=0x2860;eip=0x00004c; 	X(SUB(*(dw*)(raddr(ss,bp+var_8)), ax));	// 80477 sub     [bp+var_8], ax ;~ 2860:004C
loc_36c2f:
	// 9972 
cs=0x2860;eip=0x00004f; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 80480 cmp     [bp+var_8], 0 ;~ 2860:004F
cs=0x2860;eip=0x000053; 	R(JL(loc_36c4b));	// 80481 jl      short loc_36C4B ;~ 2860:0053
cs=0x2860;eip=0x000055; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 80482 mov     bx, [bp+var_8] ;~ 2860:0055
cs=0x2860;eip=0x000058; 	T(SHL(bx, 1));	// 80483 shl     bx, 1 ;~ 2860:0058
cs=0x2860;eip=0x00005a; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 80484 mov     si, [bp+arg_2] ;~ 2860:005A
cs=0x2860;eip=0x00005d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+si))));	// 80485 mov     ax, [bx+si] ;~ 2860:005D
cs=0x2860;eip=0x00005f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 80486 mov     bx, [bp+var_8] ;~ 2860:005F
cs=0x2860;eip=0x000062; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_4))));	// 80487 add     bx, [bp+var_4] ;~ 2860:0062
cs=0x2860;eip=0x000065; 	T(SHL(bx, 1));	// 80488 shl     bx, 1 ;~ 2860:0065
cs=0x2860;eip=0x000067; 	T(CMP(*(dw*)(raddr(ds,bx+si)), ax));	// 80489 cmp     [bx+si], ax ;~ 2860:0067
cs=0x2860;eip=0x000069; 	R(JG(loc_36bfa));	// 80490 jg      short loc_36BFA ;~ 2860:0069
loc_36c4b:
	// 9973 
cs=0x2860;eip=0x00006b; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 80493 inc     [bp+var_6] ;~ 2860:006B
loc_36c4e:
	// 9974 
cs=0x2860;eip=0x00006e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 80496 mov     ax, [bp+arg_0] ;~ 2860:006E
cs=0x2860;eip=0x000071; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 80497 cmp     [bp+var_6], ax ;~ 2860:0071
cs=0x2860;eip=0x000074; 	R(JGE(loc_36c62));	// 80498 jge     short loc_36C62 ;~ 2860:0074
cs=0x2860;eip=0x000076; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 80499 mov     ax, [bp+var_6] ;~ 2860:0076
cs=0x2860;eip=0x000079; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 80500 sub     ax, [bp+var_4] ;~ 2860:0079
cs=0x2860;eip=0x00007c; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 80501 mov     [bp+var_8], ax ;~ 2860:007C
cs=0x2860;eip=0x00007f; 	R(JMP(loc_36c2f));	// 80502 jmp     short loc_36C2F ;~ 2860:007F
loc_36c62:
	// 9975 
cs=0x2860;eip=0x000082; 	T(MOV(cx, 2));	// 80507 mov     cx, 2 ;~ 2860:0082
cs=0x2860;eip=0x000085; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 80508 mov     ax, [bp+var_4] ;~ 2860:0085
cs=0x2860;eip=0x000088; 	T(CWD);	// 80509 cwd ;~ 2860:0088
cs=0x2860;eip=0x000089; 	T(IDIV2(cx));	// 80510 idiv    cx ;~ 2860:0089
loc_36c6b:
	// 9976 
cs=0x2860;eip=0x00008b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 80513 mov     [bp+var_4], ax ;~ 2860:008B
cs=0x2860;eip=0x00008e; 	T(OR(ax, ax));	// 80514 or      ax, ax ;~ 2860:008E
cs=0x2860;eip=0x000090; 	R(JLE(loc_36c78));	// 80515 jle     short loc_36C78 ;~ 2860:0090
cs=0x2860;eip=0x000092; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 80516 mov     [bp+var_6], ax ;~ 2860:0092
cs=0x2860;eip=0x000095; 	R(JMP(loc_36c4e));	// 80517 jmp     short loc_36C4E ;~ 2860:0095
loc_36c78:
	// 9977 
cs=0x2860;eip=0x000098; 	X(POP(si));	// 80522 pop     si ;~ 2860:0098
cs=0x2860;eip=0x000099; 	X(POP(di));	// 80523 pop     di ;~ 2860:0099
cs=0x2860;eip=0x00009a; 	T(MOV(sp, bp));	// 80524 mov     sp, bp ;~ 2860:009A
cs=0x2860;eip=0x00009c; 	X(POP(bp));	// 80525 pop     bp ;~ 2860:009C
cs=0x2860;eip=0x00009d; 	R(RETF(0));	// 80526 retf ;~ 2860:009D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_36bfa: 	goto loc_36bfa;
        case m2c::kloc_36c2f: 	goto loc_36c2f;
        case m2c::kloc_36c4b: 	goto loc_36c4b;
        case m2c::kloc_36c4e: 	goto loc_36c4e;
        case m2c::kloc_36c62: 	goto loc_36c62;
        case m2c::kloc_36c6b: 	goto loc_36c6b;
        case m2c::kloc_36c78: 	goto loc_36c78;
        case m2c::kret_2860_8: 	goto ret_2860_8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

