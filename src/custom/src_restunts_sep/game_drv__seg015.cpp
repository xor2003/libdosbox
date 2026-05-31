/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool prerender_sphere_helper2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    prerender_sphere_helper2:
    _begin:
#undef var_1a
#define var_1a -0x1A
	// 79341 var_1A          = word ptr -1Ah ;~ 27E3:0002
#undef var_18
#define var_18 -0x18
	// 79342 var_18          = word ptr -18h ;~ 27E3:0002
#undef var_16
#define var_16 -0x16
	// 79343 var_16          = word ptr -16h ;~ 27E3:0002
#undef var_14
#define var_14 -0x14
	// 79344 var_14          = word ptr -14h ;~ 27E3:0002
#undef var_12
#define var_12 -0x12
	// 79345 var_12          = word ptr -12h ;~ 27E3:0002
#undef var_10
#define var_10 -0x10
	// 79346 var_10          = word ptr -10h ;~ 27E3:0002
#undef var_e
#define var_e -0x0E
	// 79347 var_E           = word ptr -0Eh ;~ 27E3:0002
#undef var_c
#define var_c -0x0C
	// 79348 var_C           = word ptr -0Ch ;~ 27E3:0002
#undef var_a
#define var_a -0x0A
	// 79349 var_A           = word ptr -0Ah ;~ 27E3:0002
#undef var_8
#define var_8 -8
	// 79350 var_8           = word ptr -8 ;~ 27E3:0002
#undef var_6
#define var_6 -6
	// 79351 var_6           = word ptr -6 ;~ 27E3:0002
#undef var_4
#define var_4 -4
	// 79352 var_4           = word ptr -4 ;~ 27E3:0002
#undef var_2
#define var_2 -2
	// 79353 var_2           = word ptr -2 ;~ 27E3:0002
#undef arg_0
#define arg_0 6
	// 79354 arg_0           = word ptr  6 ;~ 27E3:0002
#undef arg_2
#define arg_2 8
	// 79355 arg_2           = word ptr  8 ;~ 27E3:0002
cs=0x27e3;eip=0x000002; 	X(PUSH(bp));	// 79357 push    bp ;~ 27E3:0002
cs=0x27e3;eip=0x000003; 	T(MOV(bp, sp));	// 79358 mov     bp, sp ;~ 27E3:0003
cs=0x27e3;eip=0x000005; 	T(SUB(sp, 0x1A));	// 79359 sub     sp, 1Ah ;~ 27E3:0005
cs=0x27e3;eip=0x000008; 	X(PUSH(di));	// 79360 push    di ;~ 27E3:0008
cs=0x27e3;eip=0x000009; 	X(PUSH(si));	// 79361 push    si ;~ 27E3:0009
cs=0x27e3;eip=0x00000a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 79362 mov     bx, [bp+arg_0] ;~ 27E3:000A
cs=0x27e3;eip=0x00000d; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 79363 mov     si, [bx] ;~ 27E3:000D
cs=0x27e3;eip=0x00000f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 79364 mov     ax, [bx+4] ;~ 27E3:000F
cs=0x27e3;eip=0x000012; 	T(SUB(ax, si));	// 79365 sub     ax, si ;~ 27E3:0012
cs=0x27e3;eip=0x000014; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79366 mov     bx, [bp+arg_2] ;~ 27E3:0014
cs=0x27e3;eip=0x000017; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 79367 mov     [bx], ax ;~ 27E3:0017
cs=0x27e3;eip=0x000019; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 79368 mov     bx, [bp+arg_0] ;~ 27E3:0019
cs=0x27e3;eip=0x00001c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 79369 mov     ax, [bx+6] ;~ 27E3:001C
cs=0x27e3;eip=0x00001f; 	T(SUB(ax, *(dw*)(raddr(ds,bx+2))));	// 79370 sub     ax, [bx+2] ;~ 27E3:001F
cs=0x27e3;eip=0x000022; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79371 mov     bx, [bp+arg_2] ;~ 27E3:0022
cs=0x27e3;eip=0x000025; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 79372 mov     [bx+2], ax ;~ 27E3:0025
cs=0x27e3;eip=0x000028; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 79373 mov     bx, [bp+arg_0] ;~ 27E3:0028
cs=0x27e3;eip=0x00002b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 79374 mov     ax, [bx+8] ;~ 27E3:002B
cs=0x27e3;eip=0x00002e; 	T(SUB(ax, si));	// 79375 sub     ax, si ;~ 27E3:002E
cs=0x27e3;eip=0x000030; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79376 mov     bx, [bp+arg_2] ;~ 27E3:0030
cs=0x27e3;eip=0x000033; 	X(MOV(*(dw*)(raddr(ds,bx+0x20)), ax));	// 79377 mov     [bx+20h], ax ;~ 27E3:0033
cs=0x27e3;eip=0x000036; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 79378 mov     bx, [bp+arg_0] ;~ 27E3:0036
cs=0x27e3;eip=0x000039; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 79379 mov     ax, [bx+0Ah] ;~ 27E3:0039
cs=0x27e3;eip=0x00003c; 	T(SUB(ax, *(dw*)(raddr(ds,bx+2))));	// 79380 sub     ax, [bx+2] ;~ 27E3:003C
cs=0x27e3;eip=0x00003f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79381 mov     bx, [bp+arg_2] ;~ 27E3:003F
cs=0x27e3;eip=0x000042; 	X(MOV(*(dw*)(raddr(ds,bx+0x22)), ax));	// 79382 mov     [bx+22h], ax ;~ 27E3:0042
cs=0x27e3;eip=0x000045; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 79383 mov     ax, [bx] ;~ 27E3:0045
cs=0x27e3;eip=0x000047; 	T(SAR(ax, 1));	// 79384 sar     ax, 1 ;~ 27E3:0047
cs=0x27e3;eip=0x000049; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 79385 mov     [bp+var_2], ax ;~ 27E3:0049
cs=0x27e3;eip=0x00004c; 	T(SAR(ax, 1));	// 79386 sar     ax, 1 ;~ 27E3:004C
cs=0x27e3;eip=0x00004e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 79387 mov     [bp+var_A], ax ;~ 27E3:004E
cs=0x27e3;eip=0x000051; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 79388 mov     ax, [bp+var_2] ;~ 27E3:0051
cs=0x27e3;eip=0x000054; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 79389 add     ax, [bp+var_A] ;~ 27E3:0054
cs=0x27e3;eip=0x000057; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 79390 mov     [bp+var_6], ax ;~ 27E3:0057
cs=0x27e3;eip=0x00005a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79391 mov     ax, [bx+2] ;~ 27E3:005A
cs=0x27e3;eip=0x00005d; 	T(SAR(ax, 1));	// 79392 sar     ax, 1 ;~ 27E3:005D
cs=0x27e3;eip=0x00005f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 79393 mov     [bp+var_4], ax ;~ 27E3:005F
cs=0x27e3;eip=0x000062; 	T(SAR(ax, 1));	// 79394 sar     ax, 1 ;~ 27E3:0062
cs=0x27e3;eip=0x000064; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 79395 mov     [bp+var_C], ax ;~ 27E3:0064
cs=0x27e3;eip=0x000067; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 79396 mov     ax, [bp+var_4] ;~ 27E3:0067
cs=0x27e3;eip=0x00006a; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_c))));	// 79397 add     ax, [bp+var_C] ;~ 27E3:006A
cs=0x27e3;eip=0x00006d; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 79398 mov     [bp+var_8], ax ;~ 27E3:006D
cs=0x27e3;eip=0x000070; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 79399 mov     ax, [bx+20h] ;~ 27E3:0070
cs=0x27e3;eip=0x000073; 	T(SAR(ax, 1));	// 79400 sar     ax, 1 ;~ 27E3:0073
cs=0x27e3;eip=0x000075; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 79401 mov     [bp+var_10], ax ;~ 27E3:0075
cs=0x27e3;eip=0x000078; 	T(SAR(ax, 1));	// 79402 sar     ax, 1 ;~ 27E3:0078
cs=0x27e3;eip=0x00007a; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 79403 mov     [bp+var_18], ax ;~ 27E3:007A
cs=0x27e3;eip=0x00007d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 79404 mov     ax, [bp+var_10] ;~ 27E3:007D
cs=0x27e3;eip=0x000080; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_18))));	// 79405 add     ax, [bp+var_18] ;~ 27E3:0080
cs=0x27e3;eip=0x000083; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 79406 mov     [bp+var_14], ax ;~ 27E3:0083
cs=0x27e3;eip=0x000086; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 79407 mov     ax, [bx+22h] ;~ 27E3:0086
cs=0x27e3;eip=0x000089; 	T(SAR(ax, 1));	// 79408 sar     ax, 1 ;~ 27E3:0089
cs=0x27e3;eip=0x00008b; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 79409 mov     [bp+var_12], ax ;~ 27E3:008B
cs=0x27e3;eip=0x00008e; 	T(SAR(ax, 1));	// 79410 sar     ax, 1 ;~ 27E3:008E
cs=0x27e3;eip=0x000090; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 79411 mov     [bp+var_1A], ax ;~ 27E3:0090
cs=0x27e3;eip=0x000093; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 79412 mov     ax, [bp+var_12] ;~ 27E3:0093
cs=0x27e3;eip=0x000096; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 79413 add     ax, [bp+var_1A] ;~ 27E3:0096
cs=0x27e3;eip=0x000099; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 79414 mov     [bp+var_16], ax ;~ 27E3:0099
cs=0x27e3;eip=0x00009c; 	T(MOV(ax, 0x2D41));	// 79415 mov     ax, 2D41h ;~ 27E3:009C
cs=0x27e3;eip=0x00009f; 	X(PUSH(ax));	// 79416 push    ax ;~ 27E3:009F
cs=0x27e3;eip=0x0000a0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 79417 mov     ax, [bx+20h] ;~ 27E3:00A0
cs=0x27e3;eip=0x0000a3; 	T(ADD(ax, *(dw*)(raddr(ds,bx))));	// 79418 add     ax, [bx] ;~ 27E3:00A3
cs=0x27e3;eip=0x0000a5; 	X(PUSH(ax));	// 79419 push    ax ;~ 27E3:00A5
cs=0x27e3;eip=0x0000a6; 	J(CALLF(multiply_and_scale,0));	// 79420 call    multiply_and_scale ;~ 27E3:00A6
cs=0x27e3;eip=0x0000ab; 	T(ADD(sp, 4));	// 79421 add     sp, 4 ;~ 27E3:00AB
cs=0x27e3;eip=0x0000ae; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79422 mov     bx, [bp+arg_2] ;~ 27E3:00AE
cs=0x27e3;eip=0x0000b1; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), ax));	// 79423 mov     [bx+10h], ax ;~ 27E3:00B1
cs=0x27e3;eip=0x0000b4; 	T(MOV(ax, 0x2D41));	// 79424 mov     ax, 2D41h ;~ 27E3:00B4
cs=0x27e3;eip=0x0000b7; 	X(PUSH(ax));	// 79425 push    ax ;~ 27E3:00B7
cs=0x27e3;eip=0x0000b8; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79426 mov     ax, [bx+2] ;~ 27E3:00B8
cs=0x27e3;eip=0x0000bb; 	T(ADD(ax, *(dw*)(raddr(ds,bx+0x22))));	// 79427 add     ax, [bx+22h] ;~ 27E3:00BB
cs=0x27e3;eip=0x0000be; 	X(PUSH(ax));	// 79428 push    ax ;~ 27E3:00BE
cs=0x27e3;eip=0x0000bf; 	J(CALLF(multiply_and_scale,0));	// 79429 call    multiply_and_scale ;~ 27E3:00BF
cs=0x27e3;eip=0x0000c4; 	T(ADD(sp, 4));	// 79430 add     sp, 4 ;~ 27E3:00C4
cs=0x27e3;eip=0x0000c7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79431 mov     bx, [bp+arg_2] ;~ 27E3:00C7
cs=0x27e3;eip=0x0000ca; 	X(MOV(*(dw*)(raddr(ds,bx+0x12)), ax));	// 79432 mov     [bx+12h], ax ;~ 27E3:00CA
cs=0x27e3;eip=0x0000cd; 	T(MOV(ax, 0x393E));	// 79433 mov     ax, 393Eh ;~ 27E3:00CD
cs=0x27e3;eip=0x0000d0; 	X(PUSH(ax));	// 79434 push    ax ;~ 27E3:00D0
cs=0x27e3;eip=0x0000d1; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 79435 mov     ax, [bx] ;~ 27E3:00D1
cs=0x27e3;eip=0x0000d3; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_10))));	// 79436 add     ax, [bp+var_10] ;~ 27E3:00D3
cs=0x27e3;eip=0x0000d6; 	X(PUSH(ax));	// 79437 push    ax ;~ 27E3:00D6
cs=0x27e3;eip=0x0000d7; 	J(CALLF(multiply_and_scale,0));	// 79438 call    multiply_and_scale ;~ 27E3:00D7
cs=0x27e3;eip=0x0000dc; 	T(ADD(sp, 4));	// 79439 add     sp, 4 ;~ 27E3:00DC
cs=0x27e3;eip=0x0000df; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79440 mov     bx, [bp+arg_2] ;~ 27E3:00DF
cs=0x27e3;eip=0x0000e2; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 79441 mov     [bx+8], ax ;~ 27E3:00E2
cs=0x27e3;eip=0x0000e5; 	T(MOV(ax, 0x393E));	// 79442 mov     ax, 393Eh ;~ 27E3:00E5
cs=0x27e3;eip=0x0000e8; 	X(PUSH(ax));	// 79443 push    ax ;~ 27E3:00E8
cs=0x27e3;eip=0x0000e9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79444 mov     ax, [bx+2] ;~ 27E3:00E9
cs=0x27e3;eip=0x0000ec; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_12))));	// 79445 add     ax, [bp+var_12] ;~ 27E3:00EC
cs=0x27e3;eip=0x0000ef; 	X(PUSH(ax));	// 79446 push    ax ;~ 27E3:00EF
cs=0x27e3;eip=0x0000f0; 	J(CALLF(multiply_and_scale,0));	// 79447 call    multiply_and_scale ;~ 27E3:00F0
cs=0x27e3;eip=0x0000f5; 	T(ADD(sp, 4));	// 79448 add     sp, 4 ;~ 27E3:00F5
cs=0x27e3;eip=0x0000f8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79449 mov     bx, [bp+arg_2] ;~ 27E3:00F8
cs=0x27e3;eip=0x0000fb; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), ax));	// 79450 mov     [bx+0Ah], ax ;~ 27E3:00FB
cs=0x27e3;eip=0x0000fe; 	T(MOV(ax, 0x393E));	// 79451 mov     ax, 393Eh ;~ 27E3:00FE
cs=0x27e3;eip=0x000101; 	X(PUSH(ax));	// 79452 push    ax ;~ 27E3:0101
cs=0x27e3;eip=0x000102; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 79453 mov     ax, [bx+20h] ;~ 27E3:0102
cs=0x27e3;eip=0x000105; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2))));	// 79454 add     ax, [bp+var_2] ;~ 27E3:0105
cs=0x27e3;eip=0x000108; 	X(PUSH(ax));	// 79455 push    ax ;~ 27E3:0108
cs=0x27e3;eip=0x000109; 	J(CALLF(multiply_and_scale,0));	// 79456 call    multiply_and_scale ;~ 27E3:0109
cs=0x27e3;eip=0x00010e; 	T(ADD(sp, 4));	// 79457 add     sp, 4 ;~ 27E3:010E
cs=0x27e3;eip=0x000111; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79458 mov     bx, [bp+arg_2] ;~ 27E3:0111
cs=0x27e3;eip=0x000114; 	X(MOV(*(dw*)(raddr(ds,bx+0x18)), ax));	// 79459 mov     [bx+18h], ax ;~ 27E3:0114
cs=0x27e3;eip=0x000117; 	T(MOV(ax, 0x393E));	// 79460 mov     ax, 393Eh ;~ 27E3:0117
cs=0x27e3;eip=0x00011a; 	X(PUSH(ax));	// 79461 push    ax ;~ 27E3:011A
cs=0x27e3;eip=0x00011b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 79462 mov     ax, [bx+22h] ;~ 27E3:011B
cs=0x27e3;eip=0x00011e; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 79463 add     ax, [bp+var_4] ;~ 27E3:011E
cs=0x27e3;eip=0x000121; 	X(PUSH(ax));	// 79464 push    ax ;~ 27E3:0121
cs=0x27e3;eip=0x000122; 	J(CALLF(multiply_and_scale,0));	// 79465 call    multiply_and_scale ;~ 27E3:0122
cs=0x27e3;eip=0x000127; 	T(ADD(sp, 4));	// 79466 add     sp, 4 ;~ 27E3:0127
cs=0x27e3;eip=0x00012a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79467 mov     bx, [bp+arg_2] ;~ 27E3:012A
cs=0x27e3;eip=0x00012d; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A)), ax));	// 79468 mov     [bx+1Ah], ax ;~ 27E3:012D
cs=0x27e3;eip=0x000130; 	T(MOV(ax, 0x3E17));	// 79469 mov     ax, 3E17h ;~ 27E3:0130
cs=0x27e3;eip=0x000133; 	X(PUSH(ax));	// 79470 push    ax ;~ 27E3:0133
cs=0x27e3;eip=0x000134; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 79471 mov     ax, [bx] ;~ 27E3:0134
cs=0x27e3;eip=0x000136; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_18))));	// 79472 add     ax, [bp+var_18] ;~ 27E3:0136
cs=0x27e3;eip=0x000139; 	X(PUSH(ax));	// 79473 push    ax ;~ 27E3:0139
cs=0x27e3;eip=0x00013a; 	J(CALLF(multiply_and_scale,0));	// 79474 call    multiply_and_scale ;~ 27E3:013A
cs=0x27e3;eip=0x00013f; 	T(ADD(sp, 4));	// 79475 add     sp, 4 ;~ 27E3:013F
cs=0x27e3;eip=0x000142; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79476 mov     bx, [bp+arg_2] ;~ 27E3:0142
cs=0x27e3;eip=0x000145; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 79477 mov     [bx+4], ax ;~ 27E3:0145
cs=0x27e3;eip=0x000148; 	T(MOV(ax, 0x3E17));	// 79478 mov     ax, 3E17h ;~ 27E3:0148
cs=0x27e3;eip=0x00014b; 	X(PUSH(ax));	// 79479 push    ax ;~ 27E3:014B
cs=0x27e3;eip=0x00014c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79480 mov     ax, [bx+2] ;~ 27E3:014C
cs=0x27e3;eip=0x00014f; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 79481 add     ax, [bp+var_1A] ;~ 27E3:014F
cs=0x27e3;eip=0x000152; 	X(PUSH(ax));	// 79482 push    ax ;~ 27E3:0152
cs=0x27e3;eip=0x000153; 	J(CALLF(multiply_and_scale,0));	// 79483 call    multiply_and_scale ;~ 27E3:0153
cs=0x27e3;eip=0x000158; 	T(ADD(sp, 4));	// 79484 add     sp, 4 ;~ 27E3:0158
cs=0x27e3;eip=0x00015b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79485 mov     bx, [bp+arg_2] ;~ 27E3:015B
cs=0x27e3;eip=0x00015e; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 79486 mov     [bx+6], ax ;~ 27E3:015E
cs=0x27e3;eip=0x000161; 	T(MOV(ax, 0x3E17));	// 79487 mov     ax, 3E17h ;~ 27E3:0161
cs=0x27e3;eip=0x000164; 	X(PUSH(ax));	// 79488 push    ax ;~ 27E3:0164
cs=0x27e3;eip=0x000165; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 79489 mov     ax, [bx+20h] ;~ 27E3:0165
cs=0x27e3;eip=0x000168; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 79490 add     ax, [bp+var_A] ;~ 27E3:0168
cs=0x27e3;eip=0x00016b; 	X(PUSH(ax));	// 79491 push    ax ;~ 27E3:016B
cs=0x27e3;eip=0x00016c; 	J(CALLF(multiply_and_scale,0));	// 79492 call    multiply_and_scale ;~ 27E3:016C
cs=0x27e3;eip=0x000171; 	T(ADD(sp, 4));	// 79493 add     sp, 4 ;~ 27E3:0171
cs=0x27e3;eip=0x000174; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79494 mov     bx, [bp+arg_2] ;~ 27E3:0174
cs=0x27e3;eip=0x000177; 	X(MOV(*(dw*)(raddr(ds,bx+0x1C)), ax));	// 79495 mov     [bx+1Ch], ax ;~ 27E3:0177
cs=0x27e3;eip=0x00017a; 	T(MOV(ax, 0x3E17));	// 79496 mov     ax, 3E17h ;~ 27E3:017A
cs=0x27e3;eip=0x00017d; 	X(PUSH(ax));	// 79497 push    ax ;~ 27E3:017D
cs=0x27e3;eip=0x00017e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 79498 mov     ax, [bx+22h] ;~ 27E3:017E
cs=0x27e3;eip=0x000181; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_c))));	// 79499 add     ax, [bp+var_C] ;~ 27E3:0181
cs=0x27e3;eip=0x000184; 	X(PUSH(ax));	// 79500 push    ax ;~ 27E3:0184
cs=0x27e3;eip=0x000185; 	J(CALLF(multiply_and_scale,0));	// 79501 call    multiply_and_scale ;~ 27E3:0185
cs=0x27e3;eip=0x00018a; 	T(ADD(sp, 4));	// 79502 add     sp, 4 ;~ 27E3:018A
cs=0x27e3;eip=0x00018d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79503 mov     bx, [bp+arg_2] ;~ 27E3:018D
cs=0x27e3;eip=0x000190; 	X(MOV(*(dw*)(raddr(ds,bx+0x1E)), ax));	// 79504 mov     [bx+1Eh], ax ;~ 27E3:0190
cs=0x27e3;eip=0x000193; 	T(MOV(ax, 0x3333));	// 79505 mov     ax, 3333h ;~ 27E3:0193
cs=0x27e3;eip=0x000196; 	X(PUSH(ax));	// 79506 push    ax ;~ 27E3:0196
cs=0x27e3;eip=0x000197; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 79507 mov     ax, [bx] ;~ 27E3:0197
cs=0x27e3;eip=0x000199; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_14))));	// 79508 add     ax, [bp+var_14] ;~ 27E3:0199
cs=0x27e3;eip=0x00019c; 	X(PUSH(ax));	// 79509 push    ax ;~ 27E3:019C
cs=0x27e3;eip=0x00019d; 	J(CALLF(multiply_and_scale,0));	// 79510 call    multiply_and_scale ;~ 27E3:019D
cs=0x27e3;eip=0x0001a2; 	T(ADD(sp, 4));	// 79511 add     sp, 4 ;~ 27E3:01A2
cs=0x27e3;eip=0x0001a5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79512 mov     bx, [bp+arg_2] ;~ 27E3:01A5
cs=0x27e3;eip=0x0001a8; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 79513 mov     [bx+0Ch], ax ;~ 27E3:01A8
cs=0x27e3;eip=0x0001ab; 	T(MOV(ax, 0x3333));	// 79514 mov     ax, 3333h ;~ 27E3:01AB
cs=0x27e3;eip=0x0001ae; 	X(PUSH(ax));	// 79515 push    ax ;~ 27E3:01AE
cs=0x27e3;eip=0x0001af; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79516 mov     ax, [bx+2] ;~ 27E3:01AF
cs=0x27e3;eip=0x0001b2; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_16))));	// 79517 add     ax, [bp+var_16] ;~ 27E3:01B2
cs=0x27e3;eip=0x0001b5; 	X(PUSH(ax));	// 79518 push    ax ;~ 27E3:01B5
cs=0x27e3;eip=0x0001b6; 	J(CALLF(multiply_and_scale,0));	// 79519 call    multiply_and_scale ;~ 27E3:01B6
cs=0x27e3;eip=0x0001bb; 	T(ADD(sp, 4));	// 79520 add     sp, 4 ;~ 27E3:01BB
cs=0x27e3;eip=0x0001be; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79521 mov     bx, [bp+arg_2] ;~ 27E3:01BE
cs=0x27e3;eip=0x0001c1; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), ax));	// 79522 mov     [bx+0Eh], ax ;~ 27E3:01C1
cs=0x27e3;eip=0x0001c4; 	T(MOV(ax, 0x3333));	// 79523 mov     ax, 3333h ;~ 27E3:01C4
cs=0x27e3;eip=0x0001c7; 	X(PUSH(ax));	// 79524 push    ax ;~ 27E3:01C7
cs=0x27e3;eip=0x0001c8; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 79525 mov     ax, [bx+20h] ;~ 27E3:01C8
cs=0x27e3;eip=0x0001cb; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_6))));	// 79526 add     ax, [bp+var_6] ;~ 27E3:01CB
cs=0x27e3;eip=0x0001ce; 	X(PUSH(ax));	// 79527 push    ax ;~ 27E3:01CE
cs=0x27e3;eip=0x0001cf; 	J(CALLF(multiply_and_scale,0));	// 79528 call    multiply_and_scale ;~ 27E3:01CF
cs=0x27e3;eip=0x0001d4; 	T(ADD(sp, 4));	// 79529 add     sp, 4 ;~ 27E3:01D4
cs=0x27e3;eip=0x0001d7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79530 mov     bx, [bp+arg_2] ;~ 27E3:01D7
cs=0x27e3;eip=0x0001da; 	X(MOV(*(dw*)(raddr(ds,bx+0x14)), ax));	// 79531 mov     [bx+14h], ax ;~ 27E3:01DA
cs=0x27e3;eip=0x0001dd; 	T(MOV(ax, 0x3333));	// 79532 mov     ax, 3333h ;~ 27E3:01DD
cs=0x27e3;eip=0x0001e0; 	X(PUSH(ax));	// 79533 push    ax ;~ 27E3:01E0
cs=0x27e3;eip=0x0001e1; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 79534 mov     ax, [bx+22h] ;~ 27E3:01E1
cs=0x27e3;eip=0x0001e4; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_8))));	// 79535 add     ax, [bp+var_8] ;~ 27E3:01E4
cs=0x27e3;eip=0x0001e7; 	X(PUSH(ax));	// 79536 push    ax ;~ 27E3:01E7
cs=0x27e3;eip=0x0001e8; 	J(CALLF(multiply_and_scale,0));	// 79537 call    multiply_and_scale ;~ 27E3:01E8
cs=0x27e3;eip=0x0001ed; 	T(ADD(sp, 4));	// 79538 add     sp, 4 ;~ 27E3:01ED
cs=0x27e3;eip=0x0001f0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79539 mov     bx, [bp+arg_2] ;~ 27E3:01F0
cs=0x27e3;eip=0x0001f3; 	X(MOV(*(dw*)(raddr(ds,bx+0x16)), ax));	// 79540 mov     [bx+16h], ax ;~ 27E3:01F3
cs=0x27e3;eip=0x0001f6; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 79541 mov     ax, [bx] ;~ 27E3:01F6
cs=0x27e3;eip=0x0001f8; 	T(NEG(ax));	// 79542 neg     ax ;~ 27E3:01F8
cs=0x27e3;eip=0x0001fa; 	T(MOV(si, ax));	// 79543 mov     si, ax ;~ 27E3:01FA
cs=0x27e3;eip=0x0001fc; 	T(MOV(ax, 0x2D41));	// 79544 mov     ax, 2D41h ;~ 27E3:01FC
cs=0x27e3;eip=0x0001ff; 	X(PUSH(ax));	// 79545 push    ax ;~ 27E3:01FF
cs=0x27e3;eip=0x000200; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 79546 mov     ax, [bx+20h] ;~ 27E3:0200
cs=0x27e3;eip=0x000203; 	T(ADD(ax, si));	// 79547 add     ax, si ;~ 27E3:0203
cs=0x27e3;eip=0x000205; 	X(PUSH(ax));	// 79548 push    ax ;~ 27E3:0205
cs=0x27e3;eip=0x000206; 	J(CALLF(multiply_and_scale,0));	// 79549 call    multiply_and_scale ;~ 27E3:0206
cs=0x27e3;eip=0x00020b; 	T(ADD(sp, 4));	// 79550 add     sp, 4 ;~ 27E3:020B
cs=0x27e3;eip=0x00020e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79551 mov     bx, [bp+arg_2] ;~ 27E3:020E
cs=0x27e3;eip=0x000211; 	X(MOV(*(dw*)(raddr(ds,bx+0x30)), ax));	// 79552 mov     [bx+30h], ax ;~ 27E3:0211
cs=0x27e3;eip=0x000214; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79553 mov     ax, [bx+2] ;~ 27E3:0214
cs=0x27e3;eip=0x000217; 	T(NEG(ax));	// 79554 neg     ax ;~ 27E3:0217
cs=0x27e3;eip=0x000219; 	T(MOV(di, ax));	// 79555 mov     di, ax ;~ 27E3:0219
cs=0x27e3;eip=0x00021b; 	T(MOV(ax, 0x2D41));	// 79556 mov     ax, 2D41h ;~ 27E3:021B
cs=0x27e3;eip=0x00021e; 	X(PUSH(ax));	// 79557 push    ax ;~ 27E3:021E
cs=0x27e3;eip=0x00021f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 79558 mov     ax, [bx+22h] ;~ 27E3:021F
cs=0x27e3;eip=0x000222; 	T(ADD(ax, di));	// 79559 add     ax, di ;~ 27E3:0222
cs=0x27e3;eip=0x000224; 	X(PUSH(ax));	// 79560 push    ax ;~ 27E3:0224
cs=0x27e3;eip=0x000225; 	J(CALLF(multiply_and_scale,0));	// 79561 call    multiply_and_scale ;~ 27E3:0225
cs=0x27e3;eip=0x00022a; 	T(ADD(sp, 4));	// 79562 add     sp, 4 ;~ 27E3:022A
cs=0x27e3;eip=0x00022d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79563 mov     bx, [bp+arg_2] ;~ 27E3:022D
cs=0x27e3;eip=0x000230; 	X(MOV(*(dw*)(raddr(ds,bx+0x32)), ax));	// 79564 mov     [bx+32h], ax ;~ 27E3:0230
cs=0x27e3;eip=0x000233; 	T(MOV(ax, 0x393E));	// 79565 mov     ax, 393Eh ;~ 27E3:0233
cs=0x27e3;eip=0x000236; 	X(PUSH(ax));	// 79566 push    ax ;~ 27E3:0236
cs=0x27e3;eip=0x000237; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 79567 mov     ax, [bp+var_10] ;~ 27E3:0237
cs=0x27e3;eip=0x00023a; 	T(ADD(ax, si));	// 79568 add     ax, si ;~ 27E3:023A
cs=0x27e3;eip=0x00023c; 	X(PUSH(ax));	// 79569 push    ax ;~ 27E3:023C
cs=0x27e3;eip=0x00023d; 	J(CALLF(multiply_and_scale,0));	// 79570 call    multiply_and_scale ;~ 27E3:023D
cs=0x27e3;eip=0x000242; 	T(ADD(sp, 4));	// 79571 add     sp, 4 ;~ 27E3:0242
cs=0x27e3;eip=0x000245; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79572 mov     bx, [bp+arg_2] ;~ 27E3:0245
cs=0x27e3;eip=0x000248; 	X(MOV(*(dw*)(raddr(ds,bx+0x38)), ax));	// 79573 mov     [bx+38h], ax ;~ 27E3:0248
cs=0x27e3;eip=0x00024b; 	T(MOV(ax, 0x393E));	// 79574 mov     ax, 393Eh ;~ 27E3:024B
cs=0x27e3;eip=0x00024e; 	X(PUSH(ax));	// 79575 push    ax ;~ 27E3:024E
cs=0x27e3;eip=0x00024f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 79576 mov     ax, [bp+var_12] ;~ 27E3:024F
cs=0x27e3;eip=0x000252; 	T(ADD(ax, di));	// 79577 add     ax, di ;~ 27E3:0252
cs=0x27e3;eip=0x000254; 	X(PUSH(ax));	// 79578 push    ax ;~ 27E3:0254
cs=0x27e3;eip=0x000255; 	J(CALLF(multiply_and_scale,0));	// 79579 call    multiply_and_scale ;~ 27E3:0255
cs=0x27e3;eip=0x00025a; 	T(ADD(sp, 4));	// 79580 add     sp, 4 ;~ 27E3:025A
cs=0x27e3;eip=0x00025d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79581 mov     bx, [bp+arg_2] ;~ 27E3:025D
cs=0x27e3;eip=0x000260; 	X(MOV(*(dw*)(raddr(ds,bx+0x3A)), ax));	// 79582 mov     [bx+3Ah], ax ;~ 27E3:0260
cs=0x27e3;eip=0x000263; 	T(MOV(ax, 0x393E));	// 79583 mov     ax, 393Eh ;~ 27E3:0263
cs=0x27e3;eip=0x000266; 	X(PUSH(ax));	// 79584 push    ax ;~ 27E3:0266
cs=0x27e3;eip=0x000267; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 79585 mov     ax, [bx+20h] ;~ 27E3:0267
cs=0x27e3;eip=0x00026a; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2))));	// 79586 sub     ax, [bp+var_2] ;~ 27E3:026A
cs=0x27e3;eip=0x00026d; 	X(PUSH(ax));	// 79587 push    ax ;~ 27E3:026D
cs=0x27e3;eip=0x00026e; 	J(CALLF(multiply_and_scale,0));	// 79588 call    multiply_and_scale ;~ 27E3:026E
cs=0x27e3;eip=0x000273; 	T(ADD(sp, 4));	// 79589 add     sp, 4 ;~ 27E3:0273
cs=0x27e3;eip=0x000276; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79590 mov     bx, [bp+arg_2] ;~ 27E3:0276
cs=0x27e3;eip=0x000279; 	X(MOV(*(dw*)(raddr(ds,bx+0x28)), ax));	// 79591 mov     [bx+28h], ax ;~ 27E3:0279
cs=0x27e3;eip=0x00027c; 	T(MOV(ax, 0x393E));	// 79592 mov     ax, 393Eh ;~ 27E3:027C
cs=0x27e3;eip=0x00027f; 	X(PUSH(ax));	// 79593 push    ax ;~ 27E3:027F
cs=0x27e3;eip=0x000280; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 79594 mov     ax, [bx+22h] ;~ 27E3:0280
cs=0x27e3;eip=0x000283; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 79595 sub     ax, [bp+var_4] ;~ 27E3:0283
cs=0x27e3;eip=0x000286; 	X(PUSH(ax));	// 79596 push    ax ;~ 27E3:0286
cs=0x27e3;eip=0x000287; 	J(CALLF(multiply_and_scale,0));	// 79597 call    multiply_and_scale ;~ 27E3:0287
cs=0x27e3;eip=0x00028c; 	T(ADD(sp, 4));	// 79598 add     sp, 4 ;~ 27E3:028C
cs=0x27e3;eip=0x00028f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79599 mov     bx, [bp+arg_2] ;~ 27E3:028F
cs=0x27e3;eip=0x000292; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), ax));	// 79600 mov     [bx+2Ah], ax ;~ 27E3:0292
cs=0x27e3;eip=0x000295; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 79601 mov     ax, [bx] ;~ 27E3:0295
cs=0x27e3;eip=0x000297; 	T(NEG(ax));	// 79602 neg     ax ;~ 27E3:0297
cs=0x27e3;eip=0x000299; 	T(MOV(si, ax));	// 79603 mov     si, ax ;~ 27E3:0299
cs=0x27e3;eip=0x00029b; 	T(MOV(ax, 0x3E17));	// 79604 mov     ax, 3E17h ;~ 27E3:029B
cs=0x27e3;eip=0x00029e; 	X(PUSH(ax));	// 79605 push    ax ;~ 27E3:029E
cs=0x27e3;eip=0x00029f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 79606 mov     ax, [bp+var_18] ;~ 27E3:029F
cs=0x27e3;eip=0x0002a2; 	T(ADD(ax, si));	// 79607 add     ax, si ;~ 27E3:02A2
cs=0x27e3;eip=0x0002a4; 	X(PUSH(ax));	// 79608 push    ax ;~ 27E3:02A4
cs=0x27e3;eip=0x0002a5; 	J(CALLF(multiply_and_scale,0));	// 79609 call    multiply_and_scale ;~ 27E3:02A5
cs=0x27e3;eip=0x0002aa; 	T(ADD(sp, 4));	// 79610 add     sp, 4 ;~ 27E3:02AA
cs=0x27e3;eip=0x0002ad; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79611 mov     bx, [bp+arg_2] ;~ 27E3:02AD
cs=0x27e3;eip=0x0002b0; 	X(MOV(*(dw*)(raddr(ds,bx+0x3C)), ax));	// 79612 mov     [bx+3Ch], ax ;~ 27E3:02B0
cs=0x27e3;eip=0x0002b3; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79613 mov     ax, [bx+2] ;~ 27E3:02B3
cs=0x27e3;eip=0x0002b6; 	T(NEG(ax));	// 79614 neg     ax ;~ 27E3:02B6
cs=0x27e3;eip=0x0002b8; 	T(MOV(di, ax));	// 79615 mov     di, ax ;~ 27E3:02B8
cs=0x27e3;eip=0x0002ba; 	T(MOV(ax, 0x3E17));	// 79616 mov     ax, 3E17h ;~ 27E3:02BA
cs=0x27e3;eip=0x0002bd; 	X(PUSH(ax));	// 79617 push    ax ;~ 27E3:02BD
cs=0x27e3;eip=0x0002be; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 79618 mov     ax, [bp+var_1A] ;~ 27E3:02BE
cs=0x27e3;eip=0x0002c1; 	T(ADD(ax, di));	// 79619 add     ax, di ;~ 27E3:02C1
cs=0x27e3;eip=0x0002c3; 	X(PUSH(ax));	// 79620 push    ax ;~ 27E3:02C3
cs=0x27e3;eip=0x0002c4; 	J(CALLF(multiply_and_scale,0));	// 79621 call    multiply_and_scale ;~ 27E3:02C4
cs=0x27e3;eip=0x0002c9; 	T(ADD(sp, 4));	// 79622 add     sp, 4 ;~ 27E3:02C9
cs=0x27e3;eip=0x0002cc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79623 mov     bx, [bp+arg_2] ;~ 27E3:02CC
cs=0x27e3;eip=0x0002cf; 	X(MOV(*(dw*)(raddr(ds,bx+0x3E)), ax));	// 79624 mov     [bx+3Eh], ax ;~ 27E3:02CF
cs=0x27e3;eip=0x0002d2; 	T(MOV(ax, 0x3E17));	// 79625 mov     ax, 3E17h ;~ 27E3:02D2
cs=0x27e3;eip=0x0002d5; 	X(PUSH(ax));	// 79626 push    ax ;~ 27E3:02D5
cs=0x27e3;eip=0x0002d6; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 79627 mov     ax, [bx+20h] ;~ 27E3:02D6
cs=0x27e3;eip=0x0002d9; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_a))));	// 79628 sub     ax, [bp+var_A] ;~ 27E3:02D9
cs=0x27e3;eip=0x0002dc; 	X(PUSH(ax));	// 79629 push    ax ;~ 27E3:02DC
cs=0x27e3;eip=0x0002dd; 	J(CALLF(multiply_and_scale,0));	// 79630 call    multiply_and_scale ;~ 27E3:02DD
cs=0x27e3;eip=0x0002e2; 	T(ADD(sp, 4));	// 79631 add     sp, 4 ;~ 27E3:02E2
cs=0x27e3;eip=0x0002e5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79632 mov     bx, [bp+arg_2] ;~ 27E3:02E5
cs=0x27e3;eip=0x0002e8; 	X(MOV(*(dw*)(raddr(ds,bx+0x24)), ax));	// 79633 mov     [bx+24h], ax ;~ 27E3:02E8
cs=0x27e3;eip=0x0002eb; 	T(MOV(ax, 0x3E17));	// 79634 mov     ax, 3E17h ;~ 27E3:02EB
cs=0x27e3;eip=0x0002ee; 	X(PUSH(ax));	// 79635 push    ax ;~ 27E3:02EE
cs=0x27e3;eip=0x0002ef; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 79636 mov     ax, [bx+22h] ;~ 27E3:02EF
cs=0x27e3;eip=0x0002f2; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_c))));	// 79637 sub     ax, [bp+var_C] ;~ 27E3:02F2
cs=0x27e3;eip=0x0002f5; 	X(PUSH(ax));	// 79638 push    ax ;~ 27E3:02F5
cs=0x27e3;eip=0x0002f6; 	J(CALLF(multiply_and_scale,0));	// 79639 call    multiply_and_scale ;~ 27E3:02F6
cs=0x27e3;eip=0x0002fb; 	T(ADD(sp, 4));	// 79640 add     sp, 4 ;~ 27E3:02FB
cs=0x27e3;eip=0x0002fe; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79641 mov     bx, [bp+arg_2] ;~ 27E3:02FE
cs=0x27e3;eip=0x000301; 	X(MOV(*(dw*)(raddr(ds,bx+0x26)), ax));	// 79642 mov     [bx+26h], ax ;~ 27E3:0301
cs=0x27e3;eip=0x000304; 	T(MOV(ax, 0x3333));	// 79643 mov     ax, 3333h ;~ 27E3:0304
cs=0x27e3;eip=0x000307; 	X(PUSH(ax));	// 79644 push    ax ;~ 27E3:0307
cs=0x27e3;eip=0x000308; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 79645 mov     ax, [bp+var_14] ;~ 27E3:0308
cs=0x27e3;eip=0x00030b; 	T(ADD(ax, si));	// 79646 add     ax, si ;~ 27E3:030B
cs=0x27e3;eip=0x00030d; 	X(PUSH(ax));	// 79647 push    ax ;~ 27E3:030D
cs=0x27e3;eip=0x00030e; 	J(CALLF(multiply_and_scale,0));	// 79648 call    multiply_and_scale ;~ 27E3:030E
cs=0x27e3;eip=0x000313; 	T(ADD(sp, 4));	// 79649 add     sp, 4 ;~ 27E3:0313
cs=0x27e3;eip=0x000316; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79650 mov     bx, [bp+arg_2] ;~ 27E3:0316
cs=0x27e3;eip=0x000319; 	X(MOV(*(dw*)(raddr(ds,bx+0x34)), ax));	// 79651 mov     [bx+34h], ax ;~ 27E3:0319
cs=0x27e3;eip=0x00031c; 	T(MOV(ax, 0x3333));	// 79652 mov     ax, 3333h ;~ 27E3:031C
cs=0x27e3;eip=0x00031f; 	X(PUSH(ax));	// 79653 push    ax ;~ 27E3:031F
cs=0x27e3;eip=0x000320; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 79654 mov     ax, [bp+var_16] ;~ 27E3:0320
cs=0x27e3;eip=0x000323; 	T(ADD(ax, di));	// 79655 add     ax, di ;~ 27E3:0323
cs=0x27e3;eip=0x000325; 	X(PUSH(ax));	// 79656 push    ax ;~ 27E3:0325
cs=0x27e3;eip=0x000326; 	J(CALLF(multiply_and_scale,0));	// 79657 call    multiply_and_scale ;~ 27E3:0326
cs=0x27e3;eip=0x00032b; 	T(ADD(sp, 4));	// 79658 add     sp, 4 ;~ 27E3:032B
cs=0x27e3;eip=0x00032e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79659 mov     bx, [bp+arg_2] ;~ 27E3:032E
cs=0x27e3;eip=0x000331; 	X(MOV(*(dw*)(raddr(ds,bx+0x36)), ax));	// 79660 mov     [bx+36h], ax ;~ 27E3:0331
cs=0x27e3;eip=0x000334; 	T(MOV(ax, 0x3333));	// 79661 mov     ax, 3333h ;~ 27E3:0334
cs=0x27e3;eip=0x000337; 	X(PUSH(ax));	// 79662 push    ax ;~ 27E3:0337
cs=0x27e3;eip=0x000338; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 79663 mov     ax, [bx+20h] ;~ 27E3:0338
cs=0x27e3;eip=0x00033b; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_6))));	// 79664 sub     ax, [bp+var_6] ;~ 27E3:033B
cs=0x27e3;eip=0x00033e; 	X(PUSH(ax));	// 79665 push    ax ;~ 27E3:033E
cs=0x27e3;eip=0x00033f; 	J(CALLF(multiply_and_scale,0));	// 79666 call    multiply_and_scale ;~ 27E3:033F
cs=0x27e3;eip=0x000344; 	T(ADD(sp, 4));	// 79667 add     sp, 4 ;~ 27E3:0344
cs=0x27e3;eip=0x000347; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79668 mov     bx, [bp+arg_2] ;~ 27E3:0347
cs=0x27e3;eip=0x00034a; 	X(MOV(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 79669 mov     [bx+2Ch], ax ;~ 27E3:034A
cs=0x27e3;eip=0x00034d; 	T(MOV(ax, 0x3333));	// 79670 mov     ax, 3333h ;~ 27E3:034D
cs=0x27e3;eip=0x000350; 	X(PUSH(ax));	// 79671 push    ax ;~ 27E3:0350
cs=0x27e3;eip=0x000351; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 79672 mov     ax, [bx+22h] ;~ 27E3:0351
cs=0x27e3;eip=0x000354; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_8))));	// 79673 sub     ax, [bp+var_8] ;~ 27E3:0354
cs=0x27e3;eip=0x000357; 	X(PUSH(ax));	// 79674 push    ax ;~ 27E3:0357
cs=0x27e3;eip=0x000358; 	J(CALLF(multiply_and_scale,0));	// 79675 call    multiply_and_scale ;~ 27E3:0358
cs=0x27e3;eip=0x00035d; 	T(ADD(sp, 4));	// 79676 add     sp, 4 ;~ 27E3:035D
cs=0x27e3;eip=0x000360; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79677 mov     bx, [bp+arg_2] ;~ 27E3:0360
cs=0x27e3;eip=0x000363; 	X(MOV(*(dw*)(raddr(ds,bx+0x2E)), ax));	// 79678 mov     [bx+2Eh], ax ;~ 27E3:0363
cs=0x27e3;eip=0x000366; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 79679 mov     [bp+var_E], 0 ;~ 27E3:0366
loc_3677b:
	// 9442 
cs=0x27e3;eip=0x00036b; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_e))));	// 79682 mov     si, [bp+var_E] ;~ 27E3:036B
cs=0x27e3;eip=0x00036e; 	T(MOV(cl, 2));	// 79683 mov     cl, 2 ;~ 27E3:036E
cs=0x27e3;eip=0x000370; 	T(SHL(si, cl));	// 79684 shl     si, cl ;~ 27E3:0370
cs=0x27e3;eip=0x000372; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_2))));	// 79685 add     si, [bp+arg_2] ;~ 27E3:0372
cs=0x27e3;eip=0x000375; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 79686 mov     bx, [bp+arg_0] ;~ 27E3:0375
cs=0x27e3;eip=0x000378; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 79687 mov     di, [bx] ;~ 27E3:0378
cs=0x27e3;eip=0x00037a; 	T(MOV(ax, di));	// 79688 mov     ax, di ;~ 27E3:037A
cs=0x27e3;eip=0x00037c; 	T(SUB(ax, *(dw*)(raddr(ds,si))));	// 79689 sub     ax, [si] ;~ 27E3:037C
cs=0x27e3;eip=0x00037e; 	X(MOV(*(dw*)(raddr(ds,si+0x40)), ax));	// 79690 mov     [si+40h], ax ;~ 27E3:037E
cs=0x27e3;eip=0x000381; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79691 mov     ax, [bx+2] ;~ 27E3:0381
cs=0x27e3;eip=0x000384; 	T(SUB(ax, *(dw*)(raddr(ds,si+2))));	// 79692 sub     ax, [si+2] ;~ 27E3:0384
cs=0x27e3;eip=0x000387; 	X(MOV(*(dw*)(raddr(ds,si+0x42)), ax));	// 79693 mov     [si+42h], ax ;~ 27E3:0387
cs=0x27e3;eip=0x00038a; 	X(ADD(*(dw*)(raddr(ds,si)), di));	// 79694 add     [si], di ;~ 27E3:038A
cs=0x27e3;eip=0x00038c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79695 mov     ax, [bx+2] ;~ 27E3:038C
cs=0x27e3;eip=0x00038f; 	X(ADD(*(dw*)(raddr(ds,si+2)), ax));	// 79696 add     [si+2], ax ;~ 27E3:038F
cs=0x27e3;eip=0x000392; 	X(INC(*(dw*)(raddr(ss,bp+var_e))));	// 79697 inc     [bp+var_E] ;~ 27E3:0392
cs=0x27e3;eip=0x000395; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0x10));	// 79698 cmp     [bp+var_E], 10h ;~ 27E3:0395
cs=0x27e3;eip=0x000399; 	J(JL(loc_3677b));	// 79699 jl      short loc_3677B ;~ 27E3:0399
cs=0x27e3;eip=0x00039b; 	X(POP(si));	// 79700 pop     si ;~ 27E3:039B
cs=0x27e3;eip=0x00039c; 	X(POP(di));	// 79701 pop     di ;~ 27E3:039C
cs=0x27e3;eip=0x00039d; 	T(MOV(sp, bp));	// 79702 mov     sp, bp ;~ 27E3:039D
cs=0x27e3;eip=0x00039f; 	X(POP(bp));	// 79703 pop     bp ;~ 27E3:039F
cs=0x27e3;eip=0x0003a0; 	J(RETF(0));	// 79704 retf ;~ 27E3:03A0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3677b: 	goto loc_3677b;
        case m2c::kprerender_sphere_helper2: 	goto prerender_sphere_helper2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

