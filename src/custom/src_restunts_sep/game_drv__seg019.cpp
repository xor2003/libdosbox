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
	// 80287 var_C           = word ptr -0Ch ;~ 2853:0006
#undef var_a
#define var_a -0x0A
	// 80288 var_A           = word ptr -0Ah ;~ 2853:0006
#undef var_8
#define var_8 -8
	// 80289 var_8           = word ptr -8 ;~ 2853:0006
#undef var_6
#define var_6 -6
	// 80290 var_6           = word ptr -6 ;~ 2853:0006
#undef var_4
#define var_4 -4
	// 80291 var_4           = word ptr -4 ;~ 2853:0006
#undef var_2
#define var_2 -2
	// 80292 var_2           = word ptr -2 ;~ 2853:0006
#undef arg_0
#define arg_0 6
	// 80293 arg_0           = word ptr  6 ;~ 2853:0006
#undef arg_2
#define arg_2 8
	// 80294 arg_2           = word ptr  8 ;~ 2853:0006
#undef arg_4
#define arg_4 0x0A
	// 80295 arg_4           = word ptr  0Ah ;~ 2853:0006
cs=0x2853;eip=0x000006; 	X(PUSH(bp));	// 80297 push    bp ;~ 2853:0006
cs=0x2853;eip=0x000007; 	T(MOV(bp, sp));	// 80298 mov     bp, sp ;~ 2853:0007
cs=0x2853;eip=0x000009; 	T(SUB(sp, 0x0C));	// 80299 sub     sp, 0Ch ;~ 2853:0009
cs=0x2853;eip=0x00000c; 	X(PUSH(si));	// 80300 push    si ;~ 2853:000C
cs=0x2853;eip=0x00000d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 80301 mov     bx, [bp+arg_0] ;~ 2853:000D
cs=0x2853;eip=0x000010; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 80302 mov     ax, [bx] ;~ 2853:0010
cs=0x2853;eip=0x000012; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 80303 mov     dx, [bx+2] ;~ 2853:0012
cs=0x2853;eip=0x000015; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 80304 mov     [bp+var_C], ax ;~ 2853:0015
cs=0x2853;eip=0x000018; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 80305 mov     [bp+var_A], dx ;~ 2853:0018
cs=0x2853;eip=0x00001b; 	T(MOV(si, ax));	// 80306 mov     si, ax ;~ 2853:001B
cs=0x2853;eip=0x00001d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 80307 push    [bp+arg_4] ;~ 2853:001D
cs=0x2853;eip=0x000020; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 80308 mov     ax, [bx+4] ;~ 2853:0020
cs=0x2853;eip=0x000023; 	T(SUB(ax, si));	// 80309 sub     ax, si ;~ 2853:0023
cs=0x2853;eip=0x000025; 	X(PUSH(ax));	// 80310 push    ax ;~ 2853:0025
cs=0x2853;eip=0x000026; 	J(CALLF(multiply_and_scale,0));	// 80311 call    multiply_and_scale ;~ 2853:0026
cs=0x2853;eip=0x00002b; 	T(ADD(sp, 4));	// 80312 add     sp, 4 ;~ 2853:002B
cs=0x2853;eip=0x00002e; 	T(ADD(ax, si));	// 80313 add     ax, si ;~ 2853:002E
cs=0x2853;eip=0x000030; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 80314 mov     [bp+var_8], ax ;~ 2853:0030
cs=0x2853;eip=0x000033; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 80315 push    [bp+arg_4] ;~ 2853:0033
cs=0x2853;eip=0x000036; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 80316 mov     bx, [bp+arg_0] ;~ 2853:0036
cs=0x2853;eip=0x000039; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 80317 mov     ax, [bx+6] ;~ 2853:0039
cs=0x2853;eip=0x00003c; 	T(SUB(ax, *(dw*)(raddr(ds,bx+2))));	// 80318 sub     ax, [bx+2] ;~ 2853:003C
cs=0x2853;eip=0x00003f; 	X(PUSH(ax));	// 80319 push    ax ;~ 2853:003F
cs=0x2853;eip=0x000040; 	J(CALLF(multiply_and_scale,0));	// 80320 call    multiply_and_scale ;~ 2853:0040
cs=0x2853;eip=0x000045; 	T(ADD(sp, 4));	// 80321 add     sp, 4 ;~ 2853:0045
cs=0x2853;eip=0x000048; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 80322 mov     bx, [bp+arg_0] ;~ 2853:0048
cs=0x2853;eip=0x00004b; 	T(MOV(cx, *(dw*)(raddr(ds,bx+2))));	// 80323 mov     cx, [bx+2] ;~ 2853:004B
cs=0x2853;eip=0x00004e; 	T(ADD(cx, ax));	// 80324 add     cx, ax ;~ 2853:004E
cs=0x2853;eip=0x000050; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), cx));	// 80325 mov     [bp+var_6], cx ;~ 2853:0050
cs=0x2853;eip=0x000053; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 80326 push    [bp+arg_4] ;~ 2853:0053
cs=0x2853;eip=0x000056; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 80327 mov     ax, [bx+8] ;~ 2853:0056
cs=0x2853;eip=0x000059; 	T(SUB(ax, si));	// 80328 sub     ax, si ;~ 2853:0059
cs=0x2853;eip=0x00005b; 	X(PUSH(ax));	// 80329 push    ax ;~ 2853:005B
cs=0x2853;eip=0x00005c; 	J(CALLF(multiply_and_scale,0));	// 80330 call    multiply_and_scale ;~ 2853:005C
cs=0x2853;eip=0x000061; 	T(ADD(sp, 4));	// 80331 add     sp, 4 ;~ 2853:0061
cs=0x2853;eip=0x000064; 	T(ADD(ax, si));	// 80332 add     ax, si ;~ 2853:0064
cs=0x2853;eip=0x000066; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 80333 mov     [bp+var_4], ax ;~ 2853:0066
cs=0x2853;eip=0x000069; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 80334 push    [bp+arg_4] ;~ 2853:0069
cs=0x2853;eip=0x00006c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 80335 mov     bx, [bp+arg_0] ;~ 2853:006C
cs=0x2853;eip=0x00006f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 80336 mov     ax, [bx+0Ah] ;~ 2853:006F
cs=0x2853;eip=0x000072; 	T(SUB(ax, *(dw*)(raddr(ds,bx+2))));	// 80337 sub     ax, [bx+2] ;~ 2853:0072
cs=0x2853;eip=0x000075; 	X(PUSH(ax));	// 80338 push    ax ;~ 2853:0075
cs=0x2853;eip=0x000076; 	J(CALLF(multiply_and_scale,0));	// 80339 call    multiply_and_scale ;~ 2853:0076
cs=0x2853;eip=0x00007b; 	T(ADD(sp, 4));	// 80340 add     sp, 4 ;~ 2853:007B
cs=0x2853;eip=0x00007e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 80341 mov     bx, [bp+arg_0] ;~ 2853:007E
cs=0x2853;eip=0x000081; 	T(MOV(cx, *(dw*)(raddr(ds,bx+2))));	// 80342 mov     cx, [bx+2] ;~ 2853:0081
cs=0x2853;eip=0x000084; 	T(ADD(cx, ax));	// 80343 add     cx, ax ;~ 2853:0084
cs=0x2853;eip=0x000086; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), cx));	// 80344 mov     [bp+var_2], cx ;~ 2853:0086
cs=0x2853;eip=0x000089; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 80345 push    [bp+arg_2] ;~ 2853:0089
cs=0x2853;eip=0x00008c; 	X(PUSH(bx));	// 80346 push    bx ;~ 2853:008C
cs=0x2853;eip=0x00008d; 	J(CALLF(prerender_wheel_helper3,0));	// 80347 call    preRender_wheel_helper3 ;~ 2853:008D
cs=0x2853;eip=0x000092; 	T(ADD(sp, 4));	// 80348 add     sp, 4 ;~ 2853:0092
cs=0x2853;eip=0x000095; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 80349 mov     ax, [bp+arg_2] ;~ 2853:0095
cs=0x2853;eip=0x000098; 	T(ADD(ax, 0x40));	// 80350 add     ax, 40h ; '@' ;~ 2853:0098
cs=0x2853;eip=0x00009b; 	X(PUSH(ax));	// 80351 push    ax ;~ 2853:009B
cs=0x2853;eip=0x00009c; 	T(ax = bp+var_c);	// 80352 lea     ax, [bp+var_C] ;~ 2853:009C
cs=0x2853;eip=0x00009f; 	X(PUSH(ax));	// 80353 push    ax ;~ 2853:009F
cs=0x2853;eip=0x0000a0; 	J(CALLF(prerender_wheel_helper3,0));	// 80354 call    preRender_wheel_helper3 ;~ 2853:00A0
cs=0x2853;eip=0x0000a5; 	T(ADD(sp, 4));	// 80355 add     sp, 4 ;~ 2853:00A5
cs=0x2853;eip=0x0000a8; 	X(POP(si));	// 80356 pop     si ;~ 2853:00A8
cs=0x2853;eip=0x0000a9; 	T(MOV(sp, bp));	// 80357 mov     sp, bp ;~ 2853:00A9
cs=0x2853;eip=0x0000ab; 	X(POP(bp));	// 80358 pop     bp ;~ 2853:00AB
cs=0x2853;eip=0x0000ac; 	J(RETF(0));	// 80359 retf ;~ 2853:00AC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kprerender_wheel_helper2: 	goto prerender_wheel_helper2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

