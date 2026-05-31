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
	// 79358 var_1A          = word ptr -1Ah ;~ 27E3:0002
#undef var_18
#define var_18 -0x18
	// 79359 var_18          = word ptr -18h ;~ 27E3:0002
#undef var_16
#define var_16 -0x16
	// 79360 var_16          = word ptr -16h ;~ 27E3:0002
#undef var_14
#define var_14 -0x14
	// 79361 var_14          = word ptr -14h ;~ 27E3:0002
#undef var_12
#define var_12 -0x12
	// 79362 var_12          = word ptr -12h ;~ 27E3:0002
#undef var_10
#define var_10 -0x10
	// 79363 var_10          = word ptr -10h ;~ 27E3:0002
#undef var_e
#define var_e -0x0E
	// 79364 var_E           = word ptr -0Eh ;~ 27E3:0002
#undef var_c
#define var_c -0x0C
	// 79365 var_C           = word ptr -0Ch ;~ 27E3:0002
#undef var_a
#define var_a -0x0A
	// 79366 var_A           = word ptr -0Ah ;~ 27E3:0002
#undef var_8
#define var_8 -8
	// 79367 var_8           = word ptr -8 ;~ 27E3:0002
#undef var_6
#define var_6 -6
	// 79368 var_6           = word ptr -6 ;~ 27E3:0002
#undef var_4
#define var_4 -4
	// 79369 var_4           = word ptr -4 ;~ 27E3:0002
#undef var_2
#define var_2 -2
	// 79370 var_2           = word ptr -2 ;~ 27E3:0002
#undef arg_0
#define arg_0 6
	// 79371 arg_0           = word ptr  6 ;~ 27E3:0002
#undef arg_2
#define arg_2 8
	// 79372 arg_2           = word ptr  8 ;~ 27E3:0002
ret_27e3_2:
	// 9937 
cs=0x27e3;eip=0x000002; 	X(PUSH(bp));	// 79374 push    bp ;~ 27E3:0002
cs=0x27e3;eip=0x000003; 	T(MOV(bp, sp));	// 79375 mov     bp, sp ;~ 27E3:0003
cs=0x27e3;eip=0x000005; 	T(SUB(sp, 0x1A));	// 79376 sub     sp, 1Ah ;~ 27E3:0005
cs=0x27e3;eip=0x000008; 	X(PUSH(di));	// 79377 push    di ;~ 27E3:0008
cs=0x27e3;eip=0x000009; 	X(PUSH(si));	// 79378 push    si ;~ 27E3:0009
cs=0x27e3;eip=0x00000a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 79379 mov     bx, [bp+arg_0] ;~ 27E3:000A
cs=0x27e3;eip=0x00000d; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 79380 mov     si, [bx] ;~ 27E3:000D
cs=0x27e3;eip=0x00000f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 79381 mov     ax, [bx+4] ;~ 27E3:000F
cs=0x27e3;eip=0x000012; 	T(SUB(ax, si));	// 79382 sub     ax, si ;~ 27E3:0012
cs=0x27e3;eip=0x000014; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79383 mov     bx, [bp+arg_2] ;~ 27E3:0014
cs=0x27e3;eip=0x000017; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 79384 mov     [bx], ax ;~ 27E3:0017
cs=0x27e3;eip=0x000019; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 79385 mov     bx, [bp+arg_0] ;~ 27E3:0019
cs=0x27e3;eip=0x00001c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 79386 mov     ax, [bx+6] ;~ 27E3:001C
cs=0x27e3;eip=0x00001f; 	T(SUB(ax, *(dw*)(raddr(ds,bx+2))));	// 79387 sub     ax, [bx+2] ;~ 27E3:001F
cs=0x27e3;eip=0x000022; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79388 mov     bx, [bp+arg_2] ;~ 27E3:0022
cs=0x27e3;eip=0x000025; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 79389 mov     [bx+2], ax ;~ 27E3:0025
cs=0x27e3;eip=0x000028; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 79390 mov     bx, [bp+arg_0] ;~ 27E3:0028
cs=0x27e3;eip=0x00002b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 79391 mov     ax, [bx+8] ;~ 27E3:002B
cs=0x27e3;eip=0x00002e; 	T(SUB(ax, si));	// 79392 sub     ax, si ;~ 27E3:002E
cs=0x27e3;eip=0x000030; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79393 mov     bx, [bp+arg_2] ;~ 27E3:0030
cs=0x27e3;eip=0x000033; 	X(MOV(*(dw*)(raddr(ds,bx+0x20)), ax));	// 79394 mov     [bx+20h], ax ;~ 27E3:0033
cs=0x27e3;eip=0x000036; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 79395 mov     bx, [bp+arg_0] ;~ 27E3:0036
cs=0x27e3;eip=0x000039; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 79396 mov     ax, [bx+0Ah] ;~ 27E3:0039
cs=0x27e3;eip=0x00003c; 	T(SUB(ax, *(dw*)(raddr(ds,bx+2))));	// 79397 sub     ax, [bx+2] ;~ 27E3:003C
cs=0x27e3;eip=0x00003f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79398 mov     bx, [bp+arg_2] ;~ 27E3:003F
cs=0x27e3;eip=0x000042; 	X(MOV(*(dw*)(raddr(ds,bx+0x22)), ax));	// 79399 mov     [bx+22h], ax ;~ 27E3:0042
cs=0x27e3;eip=0x000045; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 79400 mov     ax, [bx] ;~ 27E3:0045
cs=0x27e3;eip=0x000047; 	T(SAR(ax, 1));	// 79401 sar     ax, 1 ;~ 27E3:0047
cs=0x27e3;eip=0x000049; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 79402 mov     [bp+var_2], ax ;~ 27E3:0049
cs=0x27e3;eip=0x00004c; 	T(SAR(ax, 1));	// 79403 sar     ax, 1 ;~ 27E3:004C
cs=0x27e3;eip=0x00004e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 79404 mov     [bp+var_A], ax ;~ 27E3:004E
cs=0x27e3;eip=0x000051; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 79405 mov     ax, [bp+var_2] ;~ 27E3:0051
cs=0x27e3;eip=0x000054; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 79406 add     ax, [bp+var_A] ;~ 27E3:0054
cs=0x27e3;eip=0x000057; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 79407 mov     [bp+var_6], ax ;~ 27E3:0057
cs=0x27e3;eip=0x00005a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79408 mov     ax, [bx+2] ;~ 27E3:005A
cs=0x27e3;eip=0x00005d; 	T(SAR(ax, 1));	// 79409 sar     ax, 1 ;~ 27E3:005D
cs=0x27e3;eip=0x00005f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 79410 mov     [bp+var_4], ax ;~ 27E3:005F
cs=0x27e3;eip=0x000062; 	T(SAR(ax, 1));	// 79411 sar     ax, 1 ;~ 27E3:0062
cs=0x27e3;eip=0x000064; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 79412 mov     [bp+var_C], ax ;~ 27E3:0064
cs=0x27e3;eip=0x000067; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 79413 mov     ax, [bp+var_4] ;~ 27E3:0067
cs=0x27e3;eip=0x00006a; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_c))));	// 79414 add     ax, [bp+var_C] ;~ 27E3:006A
cs=0x27e3;eip=0x00006d; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 79415 mov     [bp+var_8], ax ;~ 27E3:006D
cs=0x27e3;eip=0x000070; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 79416 mov     ax, [bx+20h] ;~ 27E3:0070
cs=0x27e3;eip=0x000073; 	T(SAR(ax, 1));	// 79417 sar     ax, 1 ;~ 27E3:0073
cs=0x27e3;eip=0x000075; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 79418 mov     [bp+var_10], ax ;~ 27E3:0075
cs=0x27e3;eip=0x000078; 	T(SAR(ax, 1));	// 79419 sar     ax, 1 ;~ 27E3:0078
cs=0x27e3;eip=0x00007a; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 79420 mov     [bp+var_18], ax ;~ 27E3:007A
cs=0x27e3;eip=0x00007d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 79421 mov     ax, [bp+var_10] ;~ 27E3:007D
cs=0x27e3;eip=0x000080; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_18))));	// 79422 add     ax, [bp+var_18] ;~ 27E3:0080
cs=0x27e3;eip=0x000083; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 79423 mov     [bp+var_14], ax ;~ 27E3:0083
cs=0x27e3;eip=0x000086; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 79424 mov     ax, [bx+22h] ;~ 27E3:0086
cs=0x27e3;eip=0x000089; 	T(SAR(ax, 1));	// 79425 sar     ax, 1 ;~ 27E3:0089
cs=0x27e3;eip=0x00008b; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 79426 mov     [bp+var_12], ax ;~ 27E3:008B
cs=0x27e3;eip=0x00008e; 	T(SAR(ax, 1));	// 79427 sar     ax, 1 ;~ 27E3:008E
cs=0x27e3;eip=0x000090; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 79428 mov     [bp+var_1A], ax ;~ 27E3:0090
cs=0x27e3;eip=0x000093; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 79429 mov     ax, [bp+var_12] ;~ 27E3:0093
cs=0x27e3;eip=0x000096; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 79430 add     ax, [bp+var_1A] ;~ 27E3:0096
cs=0x27e3;eip=0x000099; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 79431 mov     [bp+var_16], ax ;~ 27E3:0099
cs=0x27e3;eip=0x00009c; 	T(MOV(ax, 0x2D41));	// 79432 mov     ax, 2D41h ;~ 27E3:009C
cs=0x27e3;eip=0x00009f; 	X(PUSH(ax));	// 79433 push    ax ;~ 27E3:009F
cs=0x27e3;eip=0x0000a0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 79434 mov     ax, [bx+20h] ;~ 27E3:00A0
cs=0x27e3;eip=0x0000a3; 	T(ADD(ax, *(dw*)(raddr(ds,bx))));	// 79435 add     ax, [bx] ;~ 27E3:00A3
cs=0x27e3;eip=0x0000a5; 	X(PUSH(ax));	// 79436 push    ax ;~ 27E3:00A5
cs=0x27e3;eip=0x0000a6; 	R(CALLF(multiply_and_scale,0));	// 79437 call    multiply_and_scale ;~ 27E3:00A6
cs=0x27e3;eip=0x0000ab; 	T(ADD(sp, 4));	// 79438 add     sp, 4 ;~ 27E3:00AB
cs=0x27e3;eip=0x0000ae; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79439 mov     bx, [bp+arg_2] ;~ 27E3:00AE
cs=0x27e3;eip=0x0000b1; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), ax));	// 79440 mov     [bx+10h], ax ;~ 27E3:00B1
cs=0x27e3;eip=0x0000b4; 	T(MOV(ax, 0x2D41));	// 79441 mov     ax, 2D41h ;~ 27E3:00B4
cs=0x27e3;eip=0x0000b7; 	X(PUSH(ax));	// 79442 push    ax ;~ 27E3:00B7
cs=0x27e3;eip=0x0000b8; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79443 mov     ax, [bx+2] ;~ 27E3:00B8
cs=0x27e3;eip=0x0000bb; 	T(ADD(ax, *(dw*)(raddr(ds,bx+0x22))));	// 79444 add     ax, [bx+22h] ;~ 27E3:00BB
cs=0x27e3;eip=0x0000be; 	X(PUSH(ax));	// 79445 push    ax ;~ 27E3:00BE
cs=0x27e3;eip=0x0000bf; 	R(CALLF(multiply_and_scale,0));	// 79446 call    multiply_and_scale ;~ 27E3:00BF
cs=0x27e3;eip=0x0000c4; 	T(ADD(sp, 4));	// 79447 add     sp, 4 ;~ 27E3:00C4
cs=0x27e3;eip=0x0000c7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79448 mov     bx, [bp+arg_2] ;~ 27E3:00C7
cs=0x27e3;eip=0x0000ca; 	X(MOV(*(dw*)(raddr(ds,bx+0x12)), ax));	// 79449 mov     [bx+12h], ax ;~ 27E3:00CA
cs=0x27e3;eip=0x0000cd; 	T(MOV(ax, 0x393E));	// 79450 mov     ax, 393Eh ;~ 27E3:00CD
cs=0x27e3;eip=0x0000d0; 	X(PUSH(ax));	// 79451 push    ax ;~ 27E3:00D0
cs=0x27e3;eip=0x0000d1; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 79452 mov     ax, [bx] ;~ 27E3:00D1
cs=0x27e3;eip=0x0000d3; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_10))));	// 79453 add     ax, [bp+var_10] ;~ 27E3:00D3
cs=0x27e3;eip=0x0000d6; 	X(PUSH(ax));	// 79454 push    ax ;~ 27E3:00D6
cs=0x27e3;eip=0x0000d7; 	R(CALLF(multiply_and_scale,0));	// 79455 call    multiply_and_scale ;~ 27E3:00D7
cs=0x27e3;eip=0x0000dc; 	T(ADD(sp, 4));	// 79456 add     sp, 4 ;~ 27E3:00DC
cs=0x27e3;eip=0x0000df; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79457 mov     bx, [bp+arg_2] ;~ 27E3:00DF
cs=0x27e3;eip=0x0000e2; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 79458 mov     [bx+8], ax ;~ 27E3:00E2
cs=0x27e3;eip=0x0000e5; 	T(MOV(ax, 0x393E));	// 79459 mov     ax, 393Eh ;~ 27E3:00E5
cs=0x27e3;eip=0x0000e8; 	X(PUSH(ax));	// 79460 push    ax ;~ 27E3:00E8
cs=0x27e3;eip=0x0000e9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79461 mov     ax, [bx+2] ;~ 27E3:00E9
cs=0x27e3;eip=0x0000ec; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_12))));	// 79462 add     ax, [bp+var_12] ;~ 27E3:00EC
cs=0x27e3;eip=0x0000ef; 	X(PUSH(ax));	// 79463 push    ax ;~ 27E3:00EF
cs=0x27e3;eip=0x0000f0; 	R(CALLF(multiply_and_scale,0));	// 79464 call    multiply_and_scale ;~ 27E3:00F0
cs=0x27e3;eip=0x0000f5; 	T(ADD(sp, 4));	// 79465 add     sp, 4 ;~ 27E3:00F5
cs=0x27e3;eip=0x0000f8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79466 mov     bx, [bp+arg_2] ;~ 27E3:00F8
cs=0x27e3;eip=0x0000fb; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), ax));	// 79467 mov     [bx+0Ah], ax ;~ 27E3:00FB
cs=0x27e3;eip=0x0000fe; 	T(MOV(ax, 0x393E));	// 79468 mov     ax, 393Eh ;~ 27E3:00FE
cs=0x27e3;eip=0x000101; 	X(PUSH(ax));	// 79469 push    ax ;~ 27E3:0101
cs=0x27e3;eip=0x000102; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 79470 mov     ax, [bx+20h] ;~ 27E3:0102
cs=0x27e3;eip=0x000105; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2))));	// 79471 add     ax, [bp+var_2] ;~ 27E3:0105
cs=0x27e3;eip=0x000108; 	X(PUSH(ax));	// 79472 push    ax ;~ 27E3:0108
cs=0x27e3;eip=0x000109; 	R(CALLF(multiply_and_scale,0));	// 79473 call    multiply_and_scale ;~ 27E3:0109
cs=0x27e3;eip=0x00010e; 	T(ADD(sp, 4));	// 79474 add     sp, 4 ;~ 27E3:010E
cs=0x27e3;eip=0x000111; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79475 mov     bx, [bp+arg_2] ;~ 27E3:0111
cs=0x27e3;eip=0x000114; 	X(MOV(*(dw*)(raddr(ds,bx+0x18)), ax));	// 79476 mov     [bx+18h], ax ;~ 27E3:0114
cs=0x27e3;eip=0x000117; 	T(MOV(ax, 0x393E));	// 79477 mov     ax, 393Eh ;~ 27E3:0117
cs=0x27e3;eip=0x00011a; 	X(PUSH(ax));	// 79478 push    ax ;~ 27E3:011A
cs=0x27e3;eip=0x00011b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 79479 mov     ax, [bx+22h] ;~ 27E3:011B
cs=0x27e3;eip=0x00011e; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 79480 add     ax, [bp+var_4] ;~ 27E3:011E
cs=0x27e3;eip=0x000121; 	X(PUSH(ax));	// 79481 push    ax ;~ 27E3:0121
cs=0x27e3;eip=0x000122; 	R(CALLF(multiply_and_scale,0));	// 79482 call    multiply_and_scale ;~ 27E3:0122
cs=0x27e3;eip=0x000127; 	T(ADD(sp, 4));	// 79483 add     sp, 4 ;~ 27E3:0127
cs=0x27e3;eip=0x00012a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79484 mov     bx, [bp+arg_2] ;~ 27E3:012A
cs=0x27e3;eip=0x00012d; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A)), ax));	// 79485 mov     [bx+1Ah], ax ;~ 27E3:012D
cs=0x27e3;eip=0x000130; 	T(MOV(ax, 0x3E17));	// 79486 mov     ax, 3E17h ;~ 27E3:0130
cs=0x27e3;eip=0x000133; 	X(PUSH(ax));	// 79487 push    ax ;~ 27E3:0133
cs=0x27e3;eip=0x000134; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 79488 mov     ax, [bx] ;~ 27E3:0134
cs=0x27e3;eip=0x000136; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_18))));	// 79489 add     ax, [bp+var_18] ;~ 27E3:0136
cs=0x27e3;eip=0x000139; 	X(PUSH(ax));	// 79490 push    ax ;~ 27E3:0139
cs=0x27e3;eip=0x00013a; 	R(CALLF(multiply_and_scale,0));	// 79491 call    multiply_and_scale ;~ 27E3:013A
cs=0x27e3;eip=0x00013f; 	T(ADD(sp, 4));	// 79492 add     sp, 4 ;~ 27E3:013F
cs=0x27e3;eip=0x000142; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79493 mov     bx, [bp+arg_2] ;~ 27E3:0142
cs=0x27e3;eip=0x000145; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 79494 mov     [bx+4], ax ;~ 27E3:0145
cs=0x27e3;eip=0x000148; 	T(MOV(ax, 0x3E17));	// 79495 mov     ax, 3E17h ;~ 27E3:0148
cs=0x27e3;eip=0x00014b; 	X(PUSH(ax));	// 79496 push    ax ;~ 27E3:014B
cs=0x27e3;eip=0x00014c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79497 mov     ax, [bx+2] ;~ 27E3:014C
cs=0x27e3;eip=0x00014f; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 79498 add     ax, [bp+var_1A] ;~ 27E3:014F
cs=0x27e3;eip=0x000152; 	X(PUSH(ax));	// 79499 push    ax ;~ 27E3:0152
cs=0x27e3;eip=0x000153; 	R(CALLF(multiply_and_scale,0));	// 79500 call    multiply_and_scale ;~ 27E3:0153
cs=0x27e3;eip=0x000158; 	T(ADD(sp, 4));	// 79501 add     sp, 4 ;~ 27E3:0158
cs=0x27e3;eip=0x00015b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79502 mov     bx, [bp+arg_2] ;~ 27E3:015B
cs=0x27e3;eip=0x00015e; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 79503 mov     [bx+6], ax ;~ 27E3:015E
cs=0x27e3;eip=0x000161; 	T(MOV(ax, 0x3E17));	// 79504 mov     ax, 3E17h ;~ 27E3:0161
cs=0x27e3;eip=0x000164; 	X(PUSH(ax));	// 79505 push    ax ;~ 27E3:0164
cs=0x27e3;eip=0x000165; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 79506 mov     ax, [bx+20h] ;~ 27E3:0165
cs=0x27e3;eip=0x000168; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_a))));	// 79507 add     ax, [bp+var_A] ;~ 27E3:0168
cs=0x27e3;eip=0x00016b; 	X(PUSH(ax));	// 79508 push    ax ;~ 27E3:016B
cs=0x27e3;eip=0x00016c; 	R(CALLF(multiply_and_scale,0));	// 79509 call    multiply_and_scale ;~ 27E3:016C
cs=0x27e3;eip=0x000171; 	T(ADD(sp, 4));	// 79510 add     sp, 4 ;~ 27E3:0171
cs=0x27e3;eip=0x000174; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79511 mov     bx, [bp+arg_2] ;~ 27E3:0174
cs=0x27e3;eip=0x000177; 	X(MOV(*(dw*)(raddr(ds,bx+0x1C)), ax));	// 79512 mov     [bx+1Ch], ax ;~ 27E3:0177
cs=0x27e3;eip=0x00017a; 	T(MOV(ax, 0x3E17));	// 79513 mov     ax, 3E17h ;~ 27E3:017A
cs=0x27e3;eip=0x00017d; 	X(PUSH(ax));	// 79514 push    ax ;~ 27E3:017D
cs=0x27e3;eip=0x00017e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 79515 mov     ax, [bx+22h] ;~ 27E3:017E
cs=0x27e3;eip=0x000181; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_c))));	// 79516 add     ax, [bp+var_C] ;~ 27E3:0181
cs=0x27e3;eip=0x000184; 	X(PUSH(ax));	// 79517 push    ax ;~ 27E3:0184
cs=0x27e3;eip=0x000185; 	R(CALLF(multiply_and_scale,0));	// 79518 call    multiply_and_scale ;~ 27E3:0185
cs=0x27e3;eip=0x00018a; 	T(ADD(sp, 4));	// 79519 add     sp, 4 ;~ 27E3:018A
cs=0x27e3;eip=0x00018d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79520 mov     bx, [bp+arg_2] ;~ 27E3:018D
cs=0x27e3;eip=0x000190; 	X(MOV(*(dw*)(raddr(ds,bx+0x1E)), ax));	// 79521 mov     [bx+1Eh], ax ;~ 27E3:0190
cs=0x27e3;eip=0x000193; 	T(MOV(ax, 0x3333));	// 79522 mov     ax, 3333h ;~ 27E3:0193
cs=0x27e3;eip=0x000196; 	X(PUSH(ax));	// 79523 push    ax ;~ 27E3:0196
cs=0x27e3;eip=0x000197; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 79524 mov     ax, [bx] ;~ 27E3:0197
cs=0x27e3;eip=0x000199; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_14))));	// 79525 add     ax, [bp+var_14] ;~ 27E3:0199
cs=0x27e3;eip=0x00019c; 	X(PUSH(ax));	// 79526 push    ax ;~ 27E3:019C
cs=0x27e3;eip=0x00019d; 	R(CALLF(multiply_and_scale,0));	// 79527 call    multiply_and_scale ;~ 27E3:019D
cs=0x27e3;eip=0x0001a2; 	T(ADD(sp, 4));	// 79528 add     sp, 4 ;~ 27E3:01A2
cs=0x27e3;eip=0x0001a5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79529 mov     bx, [bp+arg_2] ;~ 27E3:01A5
cs=0x27e3;eip=0x0001a8; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 79530 mov     [bx+0Ch], ax ;~ 27E3:01A8
cs=0x27e3;eip=0x0001ab; 	T(MOV(ax, 0x3333));	// 79531 mov     ax, 3333h ;~ 27E3:01AB
cs=0x27e3;eip=0x0001ae; 	X(PUSH(ax));	// 79532 push    ax ;~ 27E3:01AE
cs=0x27e3;eip=0x0001af; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79533 mov     ax, [bx+2] ;~ 27E3:01AF
cs=0x27e3;eip=0x0001b2; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_16))));	// 79534 add     ax, [bp+var_16] ;~ 27E3:01B2
cs=0x27e3;eip=0x0001b5; 	X(PUSH(ax));	// 79535 push    ax ;~ 27E3:01B5
cs=0x27e3;eip=0x0001b6; 	R(CALLF(multiply_and_scale,0));	// 79536 call    multiply_and_scale ;~ 27E3:01B6
cs=0x27e3;eip=0x0001bb; 	T(ADD(sp, 4));	// 79537 add     sp, 4 ;~ 27E3:01BB
cs=0x27e3;eip=0x0001be; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79538 mov     bx, [bp+arg_2] ;~ 27E3:01BE
cs=0x27e3;eip=0x0001c1; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), ax));	// 79539 mov     [bx+0Eh], ax ;~ 27E3:01C1
cs=0x27e3;eip=0x0001c4; 	T(MOV(ax, 0x3333));	// 79540 mov     ax, 3333h ;~ 27E3:01C4
cs=0x27e3;eip=0x0001c7; 	X(PUSH(ax));	// 79541 push    ax ;~ 27E3:01C7
cs=0x27e3;eip=0x0001c8; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 79542 mov     ax, [bx+20h] ;~ 27E3:01C8
cs=0x27e3;eip=0x0001cb; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_6))));	// 79543 add     ax, [bp+var_6] ;~ 27E3:01CB
cs=0x27e3;eip=0x0001ce; 	X(PUSH(ax));	// 79544 push    ax ;~ 27E3:01CE
cs=0x27e3;eip=0x0001cf; 	R(CALLF(multiply_and_scale,0));	// 79545 call    multiply_and_scale ;~ 27E3:01CF
cs=0x27e3;eip=0x0001d4; 	T(ADD(sp, 4));	// 79546 add     sp, 4 ;~ 27E3:01D4
cs=0x27e3;eip=0x0001d7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79547 mov     bx, [bp+arg_2] ;~ 27E3:01D7
cs=0x27e3;eip=0x0001da; 	X(MOV(*(dw*)(raddr(ds,bx+0x14)), ax));	// 79548 mov     [bx+14h], ax ;~ 27E3:01DA
cs=0x27e3;eip=0x0001dd; 	T(MOV(ax, 0x3333));	// 79549 mov     ax, 3333h ;~ 27E3:01DD
cs=0x27e3;eip=0x0001e0; 	X(PUSH(ax));	// 79550 push    ax ;~ 27E3:01E0
cs=0x27e3;eip=0x0001e1; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 79551 mov     ax, [bx+22h] ;~ 27E3:01E1
cs=0x27e3;eip=0x0001e4; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_8))));	// 79552 add     ax, [bp+var_8] ;~ 27E3:01E4
cs=0x27e3;eip=0x0001e7; 	X(PUSH(ax));	// 79553 push    ax ;~ 27E3:01E7
cs=0x27e3;eip=0x0001e8; 	R(CALLF(multiply_and_scale,0));	// 79554 call    multiply_and_scale ;~ 27E3:01E8
cs=0x27e3;eip=0x0001ed; 	T(ADD(sp, 4));	// 79555 add     sp, 4 ;~ 27E3:01ED
cs=0x27e3;eip=0x0001f0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79556 mov     bx, [bp+arg_2] ;~ 27E3:01F0
cs=0x27e3;eip=0x0001f3; 	X(MOV(*(dw*)(raddr(ds,bx+0x16)), ax));	// 79557 mov     [bx+16h], ax ;~ 27E3:01F3
cs=0x27e3;eip=0x0001f6; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 79558 mov     ax, [bx] ;~ 27E3:01F6
cs=0x27e3;eip=0x0001f8; 	T(NEG(ax));	// 79559 neg     ax ;~ 27E3:01F8
cs=0x27e3;eip=0x0001fa; 	T(MOV(si, ax));	// 79560 mov     si, ax ;~ 27E3:01FA
cs=0x27e3;eip=0x0001fc; 	T(MOV(ax, 0x2D41));	// 79561 mov     ax, 2D41h ;~ 27E3:01FC
cs=0x27e3;eip=0x0001ff; 	X(PUSH(ax));	// 79562 push    ax ;~ 27E3:01FF
cs=0x27e3;eip=0x000200; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 79563 mov     ax, [bx+20h] ;~ 27E3:0200
cs=0x27e3;eip=0x000203; 	T(ADD(ax, si));	// 79564 add     ax, si ;~ 27E3:0203
cs=0x27e3;eip=0x000205; 	X(PUSH(ax));	// 79565 push    ax ;~ 27E3:0205
cs=0x27e3;eip=0x000206; 	R(CALLF(multiply_and_scale,0));	// 79566 call    multiply_and_scale ;~ 27E3:0206
cs=0x27e3;eip=0x00020b; 	T(ADD(sp, 4));	// 79567 add     sp, 4 ;~ 27E3:020B
cs=0x27e3;eip=0x00020e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79568 mov     bx, [bp+arg_2] ;~ 27E3:020E
cs=0x27e3;eip=0x000211; 	X(MOV(*(dw*)(raddr(ds,bx+0x30)), ax));	// 79569 mov     [bx+30h], ax ;~ 27E3:0211
cs=0x27e3;eip=0x000214; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79570 mov     ax, [bx+2] ;~ 27E3:0214
cs=0x27e3;eip=0x000217; 	T(NEG(ax));	// 79571 neg     ax ;~ 27E3:0217
cs=0x27e3;eip=0x000219; 	T(MOV(di, ax));	// 79572 mov     di, ax ;~ 27E3:0219
cs=0x27e3;eip=0x00021b; 	T(MOV(ax, 0x2D41));	// 79573 mov     ax, 2D41h ;~ 27E3:021B
cs=0x27e3;eip=0x00021e; 	X(PUSH(ax));	// 79574 push    ax ;~ 27E3:021E
cs=0x27e3;eip=0x00021f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 79575 mov     ax, [bx+22h] ;~ 27E3:021F
cs=0x27e3;eip=0x000222; 	T(ADD(ax, di));	// 79576 add     ax, di ;~ 27E3:0222
cs=0x27e3;eip=0x000224; 	X(PUSH(ax));	// 79577 push    ax ;~ 27E3:0224
cs=0x27e3;eip=0x000225; 	R(CALLF(multiply_and_scale,0));	// 79578 call    multiply_and_scale ;~ 27E3:0225
cs=0x27e3;eip=0x00022a; 	T(ADD(sp, 4));	// 79579 add     sp, 4 ;~ 27E3:022A
cs=0x27e3;eip=0x00022d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79580 mov     bx, [bp+arg_2] ;~ 27E3:022D
cs=0x27e3;eip=0x000230; 	X(MOV(*(dw*)(raddr(ds,bx+0x32)), ax));	// 79581 mov     [bx+32h], ax ;~ 27E3:0230
cs=0x27e3;eip=0x000233; 	T(MOV(ax, 0x393E));	// 79582 mov     ax, 393Eh ;~ 27E3:0233
cs=0x27e3;eip=0x000236; 	X(PUSH(ax));	// 79583 push    ax ;~ 27E3:0236
cs=0x27e3;eip=0x000237; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 79584 mov     ax, [bp+var_10] ;~ 27E3:0237
cs=0x27e3;eip=0x00023a; 	T(ADD(ax, si));	// 79585 add     ax, si ;~ 27E3:023A
cs=0x27e3;eip=0x00023c; 	X(PUSH(ax));	// 79586 push    ax ;~ 27E3:023C
cs=0x27e3;eip=0x00023d; 	R(CALLF(multiply_and_scale,0));	// 79587 call    multiply_and_scale ;~ 27E3:023D
cs=0x27e3;eip=0x000242; 	T(ADD(sp, 4));	// 79588 add     sp, 4 ;~ 27E3:0242
cs=0x27e3;eip=0x000245; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79589 mov     bx, [bp+arg_2] ;~ 27E3:0245
cs=0x27e3;eip=0x000248; 	X(MOV(*(dw*)(raddr(ds,bx+0x38)), ax));	// 79590 mov     [bx+38h], ax ;~ 27E3:0248
cs=0x27e3;eip=0x00024b; 	T(MOV(ax, 0x393E));	// 79591 mov     ax, 393Eh ;~ 27E3:024B
cs=0x27e3;eip=0x00024e; 	X(PUSH(ax));	// 79592 push    ax ;~ 27E3:024E
cs=0x27e3;eip=0x00024f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 79593 mov     ax, [bp+var_12] ;~ 27E3:024F
cs=0x27e3;eip=0x000252; 	T(ADD(ax, di));	// 79594 add     ax, di ;~ 27E3:0252
cs=0x27e3;eip=0x000254; 	X(PUSH(ax));	// 79595 push    ax ;~ 27E3:0254
cs=0x27e3;eip=0x000255; 	R(CALLF(multiply_and_scale,0));	// 79596 call    multiply_and_scale ;~ 27E3:0255
cs=0x27e3;eip=0x00025a; 	T(ADD(sp, 4));	// 79597 add     sp, 4 ;~ 27E3:025A
cs=0x27e3;eip=0x00025d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79598 mov     bx, [bp+arg_2] ;~ 27E3:025D
cs=0x27e3;eip=0x000260; 	X(MOV(*(dw*)(raddr(ds,bx+0x3A)), ax));	// 79599 mov     [bx+3Ah], ax ;~ 27E3:0260
cs=0x27e3;eip=0x000263; 	T(MOV(ax, 0x393E));	// 79600 mov     ax, 393Eh ;~ 27E3:0263
cs=0x27e3;eip=0x000266; 	X(PUSH(ax));	// 79601 push    ax ;~ 27E3:0266
cs=0x27e3;eip=0x000267; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 79602 mov     ax, [bx+20h] ;~ 27E3:0267
cs=0x27e3;eip=0x00026a; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2))));	// 79603 sub     ax, [bp+var_2] ;~ 27E3:026A
cs=0x27e3;eip=0x00026d; 	X(PUSH(ax));	// 79604 push    ax ;~ 27E3:026D
cs=0x27e3;eip=0x00026e; 	R(CALLF(multiply_and_scale,0));	// 79605 call    multiply_and_scale ;~ 27E3:026E
cs=0x27e3;eip=0x000273; 	T(ADD(sp, 4));	// 79606 add     sp, 4 ;~ 27E3:0273
cs=0x27e3;eip=0x000276; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79607 mov     bx, [bp+arg_2] ;~ 27E3:0276
cs=0x27e3;eip=0x000279; 	X(MOV(*(dw*)(raddr(ds,bx+0x28)), ax));	// 79608 mov     [bx+28h], ax ;~ 27E3:0279
cs=0x27e3;eip=0x00027c; 	T(MOV(ax, 0x393E));	// 79609 mov     ax, 393Eh ;~ 27E3:027C
cs=0x27e3;eip=0x00027f; 	X(PUSH(ax));	// 79610 push    ax ;~ 27E3:027F
cs=0x27e3;eip=0x000280; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 79611 mov     ax, [bx+22h] ;~ 27E3:0280
cs=0x27e3;eip=0x000283; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 79612 sub     ax, [bp+var_4] ;~ 27E3:0283
cs=0x27e3;eip=0x000286; 	X(PUSH(ax));	// 79613 push    ax ;~ 27E3:0286
cs=0x27e3;eip=0x000287; 	R(CALLF(multiply_and_scale,0));	// 79614 call    multiply_and_scale ;~ 27E3:0287
cs=0x27e3;eip=0x00028c; 	T(ADD(sp, 4));	// 79615 add     sp, 4 ;~ 27E3:028C
cs=0x27e3;eip=0x00028f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79616 mov     bx, [bp+arg_2] ;~ 27E3:028F
cs=0x27e3;eip=0x000292; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), ax));	// 79617 mov     [bx+2Ah], ax ;~ 27E3:0292
cs=0x27e3;eip=0x000295; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 79618 mov     ax, [bx] ;~ 27E3:0295
cs=0x27e3;eip=0x000297; 	T(NEG(ax));	// 79619 neg     ax ;~ 27E3:0297
cs=0x27e3;eip=0x000299; 	T(MOV(si, ax));	// 79620 mov     si, ax ;~ 27E3:0299
cs=0x27e3;eip=0x00029b; 	T(MOV(ax, 0x3E17));	// 79621 mov     ax, 3E17h ;~ 27E3:029B
cs=0x27e3;eip=0x00029e; 	X(PUSH(ax));	// 79622 push    ax ;~ 27E3:029E
cs=0x27e3;eip=0x00029f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 79623 mov     ax, [bp+var_18] ;~ 27E3:029F
cs=0x27e3;eip=0x0002a2; 	T(ADD(ax, si));	// 79624 add     ax, si ;~ 27E3:02A2
cs=0x27e3;eip=0x0002a4; 	X(PUSH(ax));	// 79625 push    ax ;~ 27E3:02A4
cs=0x27e3;eip=0x0002a5; 	R(CALLF(multiply_and_scale,0));	// 79626 call    multiply_and_scale ;~ 27E3:02A5
cs=0x27e3;eip=0x0002aa; 	T(ADD(sp, 4));	// 79627 add     sp, 4 ;~ 27E3:02AA
cs=0x27e3;eip=0x0002ad; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79628 mov     bx, [bp+arg_2] ;~ 27E3:02AD
cs=0x27e3;eip=0x0002b0; 	X(MOV(*(dw*)(raddr(ds,bx+0x3C)), ax));	// 79629 mov     [bx+3Ch], ax ;~ 27E3:02B0
cs=0x27e3;eip=0x0002b3; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79630 mov     ax, [bx+2] ;~ 27E3:02B3
cs=0x27e3;eip=0x0002b6; 	T(NEG(ax));	// 79631 neg     ax ;~ 27E3:02B6
cs=0x27e3;eip=0x0002b8; 	T(MOV(di, ax));	// 79632 mov     di, ax ;~ 27E3:02B8
cs=0x27e3;eip=0x0002ba; 	T(MOV(ax, 0x3E17));	// 79633 mov     ax, 3E17h ;~ 27E3:02BA
cs=0x27e3;eip=0x0002bd; 	X(PUSH(ax));	// 79634 push    ax ;~ 27E3:02BD
cs=0x27e3;eip=0x0002be; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 79635 mov     ax, [bp+var_1A] ;~ 27E3:02BE
cs=0x27e3;eip=0x0002c1; 	T(ADD(ax, di));	// 79636 add     ax, di ;~ 27E3:02C1
cs=0x27e3;eip=0x0002c3; 	X(PUSH(ax));	// 79637 push    ax ;~ 27E3:02C3
cs=0x27e3;eip=0x0002c4; 	R(CALLF(multiply_and_scale,0));	// 79638 call    multiply_and_scale ;~ 27E3:02C4
cs=0x27e3;eip=0x0002c9; 	T(ADD(sp, 4));	// 79639 add     sp, 4 ;~ 27E3:02C9
cs=0x27e3;eip=0x0002cc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79640 mov     bx, [bp+arg_2] ;~ 27E3:02CC
cs=0x27e3;eip=0x0002cf; 	X(MOV(*(dw*)(raddr(ds,bx+0x3E)), ax));	// 79641 mov     [bx+3Eh], ax ;~ 27E3:02CF
cs=0x27e3;eip=0x0002d2; 	T(MOV(ax, 0x3E17));	// 79642 mov     ax, 3E17h ;~ 27E3:02D2
cs=0x27e3;eip=0x0002d5; 	X(PUSH(ax));	// 79643 push    ax ;~ 27E3:02D5
cs=0x27e3;eip=0x0002d6; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 79644 mov     ax, [bx+20h] ;~ 27E3:02D6
cs=0x27e3;eip=0x0002d9; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_a))));	// 79645 sub     ax, [bp+var_A] ;~ 27E3:02D9
cs=0x27e3;eip=0x0002dc; 	X(PUSH(ax));	// 79646 push    ax ;~ 27E3:02DC
cs=0x27e3;eip=0x0002dd; 	R(CALLF(multiply_and_scale,0));	// 79647 call    multiply_and_scale ;~ 27E3:02DD
cs=0x27e3;eip=0x0002e2; 	T(ADD(sp, 4));	// 79648 add     sp, 4 ;~ 27E3:02E2
cs=0x27e3;eip=0x0002e5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79649 mov     bx, [bp+arg_2] ;~ 27E3:02E5
cs=0x27e3;eip=0x0002e8; 	X(MOV(*(dw*)(raddr(ds,bx+0x24)), ax));	// 79650 mov     [bx+24h], ax ;~ 27E3:02E8
cs=0x27e3;eip=0x0002eb; 	T(MOV(ax, 0x3E17));	// 79651 mov     ax, 3E17h ;~ 27E3:02EB
cs=0x27e3;eip=0x0002ee; 	X(PUSH(ax));	// 79652 push    ax ;~ 27E3:02EE
cs=0x27e3;eip=0x0002ef; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 79653 mov     ax, [bx+22h] ;~ 27E3:02EF
cs=0x27e3;eip=0x0002f2; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_c))));	// 79654 sub     ax, [bp+var_C] ;~ 27E3:02F2
cs=0x27e3;eip=0x0002f5; 	X(PUSH(ax));	// 79655 push    ax ;~ 27E3:02F5
cs=0x27e3;eip=0x0002f6; 	R(CALLF(multiply_and_scale,0));	// 79656 call    multiply_and_scale ;~ 27E3:02F6
cs=0x27e3;eip=0x0002fb; 	T(ADD(sp, 4));	// 79657 add     sp, 4 ;~ 27E3:02FB
cs=0x27e3;eip=0x0002fe; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79658 mov     bx, [bp+arg_2] ;~ 27E3:02FE
cs=0x27e3;eip=0x000301; 	X(MOV(*(dw*)(raddr(ds,bx+0x26)), ax));	// 79659 mov     [bx+26h], ax ;~ 27E3:0301
cs=0x27e3;eip=0x000304; 	T(MOV(ax, 0x3333));	// 79660 mov     ax, 3333h ;~ 27E3:0304
cs=0x27e3;eip=0x000307; 	X(PUSH(ax));	// 79661 push    ax ;~ 27E3:0307
cs=0x27e3;eip=0x000308; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 79662 mov     ax, [bp+var_14] ;~ 27E3:0308
cs=0x27e3;eip=0x00030b; 	T(ADD(ax, si));	// 79663 add     ax, si ;~ 27E3:030B
cs=0x27e3;eip=0x00030d; 	X(PUSH(ax));	// 79664 push    ax ;~ 27E3:030D
cs=0x27e3;eip=0x00030e; 	R(CALLF(multiply_and_scale,0));	// 79665 call    multiply_and_scale ;~ 27E3:030E
cs=0x27e3;eip=0x000313; 	T(ADD(sp, 4));	// 79666 add     sp, 4 ;~ 27E3:0313
cs=0x27e3;eip=0x000316; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79667 mov     bx, [bp+arg_2] ;~ 27E3:0316
cs=0x27e3;eip=0x000319; 	X(MOV(*(dw*)(raddr(ds,bx+0x34)), ax));	// 79668 mov     [bx+34h], ax ;~ 27E3:0319
cs=0x27e3;eip=0x00031c; 	T(MOV(ax, 0x3333));	// 79669 mov     ax, 3333h ;~ 27E3:031C
cs=0x27e3;eip=0x00031f; 	X(PUSH(ax));	// 79670 push    ax ;~ 27E3:031F
cs=0x27e3;eip=0x000320; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 79671 mov     ax, [bp+var_16] ;~ 27E3:0320
cs=0x27e3;eip=0x000323; 	T(ADD(ax, di));	// 79672 add     ax, di ;~ 27E3:0323
cs=0x27e3;eip=0x000325; 	X(PUSH(ax));	// 79673 push    ax ;~ 27E3:0325
cs=0x27e3;eip=0x000326; 	R(CALLF(multiply_and_scale,0));	// 79674 call    multiply_and_scale ;~ 27E3:0326
cs=0x27e3;eip=0x00032b; 	T(ADD(sp, 4));	// 79675 add     sp, 4 ;~ 27E3:032B
cs=0x27e3;eip=0x00032e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79676 mov     bx, [bp+arg_2] ;~ 27E3:032E
cs=0x27e3;eip=0x000331; 	X(MOV(*(dw*)(raddr(ds,bx+0x36)), ax));	// 79677 mov     [bx+36h], ax ;~ 27E3:0331
cs=0x27e3;eip=0x000334; 	T(MOV(ax, 0x3333));	// 79678 mov     ax, 3333h ;~ 27E3:0334
cs=0x27e3;eip=0x000337; 	X(PUSH(ax));	// 79679 push    ax ;~ 27E3:0337
cs=0x27e3;eip=0x000338; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x20))));	// 79680 mov     ax, [bx+20h] ;~ 27E3:0338
cs=0x27e3;eip=0x00033b; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_6))));	// 79681 sub     ax, [bp+var_6] ;~ 27E3:033B
cs=0x27e3;eip=0x00033e; 	X(PUSH(ax));	// 79682 push    ax ;~ 27E3:033E
cs=0x27e3;eip=0x00033f; 	R(CALLF(multiply_and_scale,0));	// 79683 call    multiply_and_scale ;~ 27E3:033F
cs=0x27e3;eip=0x000344; 	T(ADD(sp, 4));	// 79684 add     sp, 4 ;~ 27E3:0344
cs=0x27e3;eip=0x000347; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79685 mov     bx, [bp+arg_2] ;~ 27E3:0347
cs=0x27e3;eip=0x00034a; 	X(MOV(*(dw*)(raddr(ds,bx+0x2C)), ax));	// 79686 mov     [bx+2Ch], ax ;~ 27E3:034A
cs=0x27e3;eip=0x00034d; 	T(MOV(ax, 0x3333));	// 79687 mov     ax, 3333h ;~ 27E3:034D
cs=0x27e3;eip=0x000350; 	X(PUSH(ax));	// 79688 push    ax ;~ 27E3:0350
cs=0x27e3;eip=0x000351; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x22))));	// 79689 mov     ax, [bx+22h] ;~ 27E3:0351
cs=0x27e3;eip=0x000354; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_8))));	// 79690 sub     ax, [bp+var_8] ;~ 27E3:0354
cs=0x27e3;eip=0x000357; 	X(PUSH(ax));	// 79691 push    ax ;~ 27E3:0357
cs=0x27e3;eip=0x000358; 	R(CALLF(multiply_and_scale,0));	// 79692 call    multiply_and_scale ;~ 27E3:0358
cs=0x27e3;eip=0x00035d; 	T(ADD(sp, 4));	// 79693 add     sp, 4 ;~ 27E3:035D
cs=0x27e3;eip=0x000360; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 79694 mov     bx, [bp+arg_2] ;~ 27E3:0360
cs=0x27e3;eip=0x000363; 	X(MOV(*(dw*)(raddr(ds,bx+0x2E)), ax));	// 79695 mov     [bx+2Eh], ax ;~ 27E3:0363
cs=0x27e3;eip=0x000366; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 79696 mov     [bp+var_E], 0 ;~ 27E3:0366
loc_3677b:
	// 9938 
cs=0x27e3;eip=0x00036b; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_e))));	// 79699 mov     si, [bp+var_E] ;~ 27E3:036B
cs=0x27e3;eip=0x00036e; 	T(MOV(cl, 2));	// 79700 mov     cl, 2 ;~ 27E3:036E
cs=0x27e3;eip=0x000370; 	T(SHL(si, cl));	// 79701 shl     si, cl ;~ 27E3:0370
cs=0x27e3;eip=0x000372; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_2))));	// 79702 add     si, [bp+arg_2] ;~ 27E3:0372
cs=0x27e3;eip=0x000375; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 79703 mov     bx, [bp+arg_0] ;~ 27E3:0375
cs=0x27e3;eip=0x000378; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 79704 mov     di, [bx] ;~ 27E3:0378
cs=0x27e3;eip=0x00037a; 	T(MOV(ax, di));	// 79705 mov     ax, di ;~ 27E3:037A
cs=0x27e3;eip=0x00037c; 	T(SUB(ax, *(dw*)(raddr(ds,si))));	// 79706 sub     ax, [si] ;~ 27E3:037C
cs=0x27e3;eip=0x00037e; 	X(MOV(*(dw*)(raddr(ds,si+0x40)), ax));	// 79707 mov     [si+40h], ax ;~ 27E3:037E
cs=0x27e3;eip=0x000381; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79708 mov     ax, [bx+2] ;~ 27E3:0381
cs=0x27e3;eip=0x000384; 	T(SUB(ax, *(dw*)(raddr(ds,si+2))));	// 79709 sub     ax, [si+2] ;~ 27E3:0384
cs=0x27e3;eip=0x000387; 	X(MOV(*(dw*)(raddr(ds,si+0x42)), ax));	// 79710 mov     [si+42h], ax ;~ 27E3:0387
cs=0x27e3;eip=0x00038a; 	X(ADD(*(dw*)(raddr(ds,si)), di));	// 79711 add     [si], di ;~ 27E3:038A
cs=0x27e3;eip=0x00038c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 79712 mov     ax, [bx+2] ;~ 27E3:038C
cs=0x27e3;eip=0x00038f; 	X(ADD(*(dw*)(raddr(ds,si+2)), ax));	// 79713 add     [si+2], ax ;~ 27E3:038F
cs=0x27e3;eip=0x000392; 	X(INC(*(dw*)(raddr(ss,bp+var_e))));	// 79714 inc     [bp+var_E] ;~ 27E3:0392
cs=0x27e3;eip=0x000395; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0x10));	// 79715 cmp     [bp+var_E], 10h ;~ 27E3:0395
cs=0x27e3;eip=0x000399; 	R(JL(loc_3677b));	// 79716 jl      short loc_3677B ;~ 27E3:0399
cs=0x27e3;eip=0x00039b; 	X(POP(si));	// 79717 pop     si ;~ 27E3:039B
cs=0x27e3;eip=0x00039c; 	X(POP(di));	// 79718 pop     di ;~ 27E3:039C
cs=0x27e3;eip=0x00039d; 	T(MOV(sp, bp));	// 79719 mov     sp, bp ;~ 27E3:039D
cs=0x27e3;eip=0x00039f; 	X(POP(bp));	// 79720 pop     bp ;~ 27E3:039F
cs=0x27e3;eip=0x0003a0; 	R(RETF(0));	// 79721 retf ;~ 27E3:03A0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_3677b: 	goto loc_3677b;
        case m2c::kret_27e3_2: 	goto ret_27e3_2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

