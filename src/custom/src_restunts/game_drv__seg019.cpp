/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool prerender_wheel_helper2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    prerender_wheel_helper2:
    _begin:
#undef var_c
#define var_c -0x0C
	// 80304 var_C           = word ptr -0Ch ;~ 2853:0006
#undef var_a
#define var_a -0x0A
	// 80305 var_A           = word ptr -0Ah ;~ 2853:0006
#undef var_8
#define var_8 -8
	// 80306 var_8           = word ptr -8 ;~ 2853:0006
#undef var_6
#define var_6 -6
	// 80307 var_6           = word ptr -6 ;~ 2853:0006
#undef var_4
#define var_4 -4
	// 80308 var_4           = word ptr -4 ;~ 2853:0006
#undef var_2
#define var_2 -2
	// 80309 var_2           = word ptr -2 ;~ 2853:0006
#undef arg_0
#define arg_0 6
	// 80310 arg_0           = word ptr  6 ;~ 2853:0006
#undef arg_2
#define arg_2 8
	// 80311 arg_2           = word ptr  8 ;~ 2853:0006
#undef arg_4
#define arg_4 0x0A
	// 80312 arg_4           = word ptr  0Ah ;~ 2853:0006
ret_2853_6:
	// 9968 
cs=0x2853;eip=0x000006; 	X(PUSH(bp));	// 80314 push    bp ;~ 2853:0006
cs=0x2853;eip=0x000007; 	T(MOV(bp, sp));	// 80315 mov     bp, sp ;~ 2853:0007
cs=0x2853;eip=0x000009; 	T(SUB(sp, 0x0C));	// 80316 sub     sp, 0Ch ;~ 2853:0009
cs=0x2853;eip=0x00000c; 	X(PUSH(si));	// 80317 push    si ;~ 2853:000C
cs=0x2853;eip=0x00000d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 80318 mov     bx, [bp+arg_0] ;~ 2853:000D
cs=0x2853;eip=0x000010; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 80319 mov     ax, [bx] ;~ 2853:0010
cs=0x2853;eip=0x000012; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 80320 mov     dx, [bx+2] ;~ 2853:0012
cs=0x2853;eip=0x000015; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 80321 mov     [bp+var_C], ax ;~ 2853:0015
cs=0x2853;eip=0x000018; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 80322 mov     [bp+var_A], dx ;~ 2853:0018
cs=0x2853;eip=0x00001b; 	T(MOV(si, ax));	// 80323 mov     si, ax ;~ 2853:001B
cs=0x2853;eip=0x00001d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 80324 push    [bp+arg_4] ;~ 2853:001D
cs=0x2853;eip=0x000020; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 80325 mov     ax, [bx+4] ;~ 2853:0020
cs=0x2853;eip=0x000023; 	T(SUB(ax, si));	// 80326 sub     ax, si ;~ 2853:0023
cs=0x2853;eip=0x000025; 	X(PUSH(ax));	// 80327 push    ax ;~ 2853:0025
cs=0x2853;eip=0x000026; 	R(CALLF(multiply_and_scale,0));	// 80328 call    multiply_and_scale ;~ 2853:0026
cs=0x2853;eip=0x00002b; 	T(ADD(sp, 4));	// 80329 add     sp, 4 ;~ 2853:002B
cs=0x2853;eip=0x00002e; 	T(ADD(ax, si));	// 80330 add     ax, si ;~ 2853:002E
cs=0x2853;eip=0x000030; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 80331 mov     [bp+var_8], ax ;~ 2853:0030
cs=0x2853;eip=0x000033; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 80332 push    [bp+arg_4] ;~ 2853:0033
cs=0x2853;eip=0x000036; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 80333 mov     bx, [bp+arg_0] ;~ 2853:0036
cs=0x2853;eip=0x000039; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 80334 mov     ax, [bx+6] ;~ 2853:0039
cs=0x2853;eip=0x00003c; 	T(SUB(ax, *(dw*)(raddr(ds,bx+2))));	// 80335 sub     ax, [bx+2] ;~ 2853:003C
cs=0x2853;eip=0x00003f; 	X(PUSH(ax));	// 80336 push    ax ;~ 2853:003F
cs=0x2853;eip=0x000040; 	R(CALLF(multiply_and_scale,0));	// 80337 call    multiply_and_scale ;~ 2853:0040
cs=0x2853;eip=0x000045; 	T(ADD(sp, 4));	// 80338 add     sp, 4 ;~ 2853:0045
cs=0x2853;eip=0x000048; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 80339 mov     bx, [bp+arg_0] ;~ 2853:0048
cs=0x2853;eip=0x00004b; 	T(MOV(cx, *(dw*)(raddr(ds,bx+2))));	// 80340 mov     cx, [bx+2] ;~ 2853:004B
cs=0x2853;eip=0x00004e; 	T(ADD(cx, ax));	// 80341 add     cx, ax ;~ 2853:004E
cs=0x2853;eip=0x000050; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), cx));	// 80342 mov     [bp+var_6], cx ;~ 2853:0050
cs=0x2853;eip=0x000053; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 80343 push    [bp+arg_4] ;~ 2853:0053
cs=0x2853;eip=0x000056; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 80344 mov     ax, [bx+8] ;~ 2853:0056
cs=0x2853;eip=0x000059; 	T(SUB(ax, si));	// 80345 sub     ax, si ;~ 2853:0059
cs=0x2853;eip=0x00005b; 	X(PUSH(ax));	// 80346 push    ax ;~ 2853:005B
cs=0x2853;eip=0x00005c; 	R(CALLF(multiply_and_scale,0));	// 80347 call    multiply_and_scale ;~ 2853:005C
cs=0x2853;eip=0x000061; 	T(ADD(sp, 4));	// 80348 add     sp, 4 ;~ 2853:0061
cs=0x2853;eip=0x000064; 	T(ADD(ax, si));	// 80349 add     ax, si ;~ 2853:0064
cs=0x2853;eip=0x000066; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 80350 mov     [bp+var_4], ax ;~ 2853:0066
cs=0x2853;eip=0x000069; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 80351 push    [bp+arg_4] ;~ 2853:0069
cs=0x2853;eip=0x00006c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 80352 mov     bx, [bp+arg_0] ;~ 2853:006C
cs=0x2853;eip=0x00006f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 80353 mov     ax, [bx+0Ah] ;~ 2853:006F
cs=0x2853;eip=0x000072; 	T(SUB(ax, *(dw*)(raddr(ds,bx+2))));	// 80354 sub     ax, [bx+2] ;~ 2853:0072
cs=0x2853;eip=0x000075; 	X(PUSH(ax));	// 80355 push    ax ;~ 2853:0075
cs=0x2853;eip=0x000076; 	R(CALLF(multiply_and_scale,0));	// 80356 call    multiply_and_scale ;~ 2853:0076
cs=0x2853;eip=0x00007b; 	T(ADD(sp, 4));	// 80357 add     sp, 4 ;~ 2853:007B
cs=0x2853;eip=0x00007e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 80358 mov     bx, [bp+arg_0] ;~ 2853:007E
cs=0x2853;eip=0x000081; 	T(MOV(cx, *(dw*)(raddr(ds,bx+2))));	// 80359 mov     cx, [bx+2] ;~ 2853:0081
cs=0x2853;eip=0x000084; 	T(ADD(cx, ax));	// 80360 add     cx, ax ;~ 2853:0084
cs=0x2853;eip=0x000086; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), cx));	// 80361 mov     [bp+var_2], cx ;~ 2853:0086
cs=0x2853;eip=0x000089; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 80362 push    [bp+arg_2] ;~ 2853:0089
cs=0x2853;eip=0x00008c; 	X(PUSH(bx));	// 80363 push    bx ;~ 2853:008C
cs=0x2853;eip=0x00008d; 	R(CALLF(prerender_wheel_helper3,0));	// 80364 call    preRender_wheel_helper3 ;~ 2853:008D
cs=0x2853;eip=0x000092; 	T(ADD(sp, 4));	// 80365 add     sp, 4 ;~ 2853:0092
cs=0x2853;eip=0x000095; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 80366 mov     ax, [bp+arg_2] ;~ 2853:0095
cs=0x2853;eip=0x000098; 	T(ADD(ax, 0x40));	// 80367 add     ax, 40h ; '@' ;~ 2853:0098
cs=0x2853;eip=0x00009b; 	X(PUSH(ax));	// 80368 push    ax ;~ 2853:009B
cs=0x2853;eip=0x00009c; 	T(ax = bp+var_c);	// 80369 lea     ax, [bp+var_C] ;~ 2853:009C
cs=0x2853;eip=0x00009f; 	X(PUSH(ax));	// 80370 push    ax ;~ 2853:009F
cs=0x2853;eip=0x0000a0; 	R(CALLF(prerender_wheel_helper3,0));	// 80371 call    preRender_wheel_helper3 ;~ 2853:00A0
cs=0x2853;eip=0x0000a5; 	T(ADD(sp, 4));	// 80372 add     sp, 4 ;~ 2853:00A5
cs=0x2853;eip=0x0000a8; 	X(POP(si));	// 80373 pop     si ;~ 2853:00A8
cs=0x2853;eip=0x0000a9; 	T(MOV(sp, bp));	// 80374 mov     sp, bp ;~ 2853:00A9
cs=0x2853;eip=0x0000ab; 	X(POP(bp));	// 80375 pop     bp ;~ 2853:00AB
cs=0x2853;eip=0x0000ac; 	R(RETF(0));	// 80376 retf ;~ 2853:00AC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kprerender_wheel_helper2: 	goto prerender_wheel_helper2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

