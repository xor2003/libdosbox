/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool run_game(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    run_game:
    _begin:
#undef var_16
#define var_16 -0x16
	// 34341 var_16          = byte ptr -16h ;~ 1359:000A
#undef var_14
#define var_14 -0x14
	// 34342 var_14          = word ptr -14h ;~ 1359:000A
#undef var_12
#define var_12 -0x12
	// 34343 var_12          = word ptr -12h ;~ 1359:000A
#undef var_e
#define var_e -0x0E
	// 34344 var_E           = word ptr -0Eh ;~ 1359:000A
#undef var_c
#define var_c -0x0C
	// 34345 var_C           = word ptr -0Ch ;~ 1359:000A
#undef var_a
#define var_a -0x0A
	// 34346 var_A           = word ptr -0Ah ;~ 1359:000A
#undef var_8
#define var_8 -8
	// 34347 var_8           = word ptr -8 ;~ 1359:000A
#undef var_6
#define var_6 -6
	// 34348 var_6           = word ptr -6 ;~ 1359:000A
#undef var_4
#define var_4 -4
	// 34349 var_4           = word ptr -4 ;~ 1359:000A
#undef var_2
#define var_2 -2
	// 34350 var_2           = word ptr -2 ;~ 1359:000A
cs=0x1359;eip=0x00000a; 	X(PUSH(bp));	// 34352 push    bp ;~ 1359:000A
cs=0x1359;eip=0x00000b; 	T(MOV(bp, sp));	// 34353 mov     bp, sp ;~ 1359:000B
cs=0x1359;eip=0x00000d; 	T(SUB(sp, 0x16));	// 34354 sub     sp, 16h ;~ 1359:000D
cs=0x1359;eip=0x000010; 	X(PUSH(si));	// 34355 push    si ;~ 1359:0010
cs=0x1359;eip=0x000011; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0x0FFFF));	// 34356 mov     [bp+var_C], 0FFFFh ;~ 1359:0011
cs=0x1359;eip=0x000016; 	X(MOV(rect_windshield, 0));	// 34357 mov     rect_windshield, 0 ;~ 1359:0016
cs=0x1359;eip=0x00001c; 	X(MOV(word_43936, 0x140));	// 34358 mov     word_43936, 140h ;~ 1359:001C
cs=0x1359;eip=0x000022; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0FFFF));	// 34359 mov     [bp+var_2], 0FFFFh ;~ 1359:0022
cs=0x1359;eip=0x000027; 	X(MOV(word_449ea, 0x0FFFF));	// 34360 mov     word_449EA, 0FFFFh ;~ 1359:0027
cs=0x1359;eip=0x00002d; 	J(CALLF(get_kevinrandom,0));	// 34361 call    get_kevinrandom ;~ 1359:002D
cs=0x1359;eip=0x000032; 	T(MOV(cl, 3));	// 34362 mov     cl, 3 ;~ 1359:0032
cs=0x1359;eip=0x000034; 	T(SHL(ax, cl));	// 34363 shl     ax, cl ;~ 1359:0034
cs=0x1359;eip=0x000036; 	X(MOV(run_game_random, ax));	// 34364 mov     run_game_random, ax ;~ 1359:0036
cs=0x1359;eip=0x000039; 	X(MOV(replaybar_toggle, 1));	// 34365 mov     replaybar_toggle, 1 ;~ 1359:0039
cs=0x1359;eip=0x00003e; 	X(MOV(is_in_replay, 0));	// 34366 mov     is_in_replay, 0 ;~ 1359:003E
cs=0x1359;eip=0x000043; 	T(CMP(idle_expired, 0));	// 34367 cmp     idle_expired, 0 ;~ 1359:0043
cs=0x1359;eip=0x000048; 	J(JZ(loc_21bec));	// 34368 jz      short loc_21BEC ;~ 1359:0048
cs=0x1359;eip=0x00004a; 	X(INC(cameramode));	// 34369 inc     cameramode ;~ 1359:004A
cs=0x1359;eip=0x00004e; 	T(CMP(cameramode, 4));	// 34370 cmp     cameramode, 4 ;~ 1359:004E
cs=0x1359;eip=0x000053; 	J(JNZ(loc_21bca));	// 34371 jnz     short loc_21BCA ;~ 1359:0053
cs=0x1359;eip=0x000055; 	X(MOV(cameramode, 0));	// 34372 mov     cameramode, 0 ;~ 1359:0055
loc_21bca:
	// 6658 
cs=0x1359;eip=0x00005a; 	X(MOV(game_replay_mode, 2));	// 34375 mov     game_replay_mode, 2 ;~ 1359:005A
cs=0x1359;eip=0x00005f; 	T(MOV(ax, offset(dseg,adefault)));	// 34376 mov     ax, offset aDefault ; "default" ;~ 1359:005F
cs=0x1359;eip=0x000062; 	X(PUSH(ax));	// 34377 push    ax ;~ 1359:0062
cs=0x1359;eip=0x000063; 	T(SUB(ax, ax));	// 34378 sub     ax, ax ;~ 1359:0063
cs=0x1359;eip=0x000065; 	X(PUSH(ax));	// 34379 push    ax              ; char * ;~ 1359:0065
cs=0x1359;eip=0x000066; 	X(PUSH(cs));	// 34380 push    cs ;~ 1359:0066
cs=0x1359;eip=0x000067; 	J(CALL(file_load_replay,0));	// 34381 call    near ptr file_load_replay ;~ 1359:0067
cs=0x1359;eip=0x00006a; 	T(ADD(sp, 4));	// 34382 add     sp, 4 ;~ 1359:006A
cs=0x1359;eip=0x00006d; 	T(OR(al, al));	// 34383 or      al, al ;~ 1359:006D
cs=0x1359;eip=0x00006f; 	J(JZ(loc_21be4));	// 34384 jz      short loc_21BE4 ;~ 1359:006F
cs=0x1359;eip=0x000071; 	J(JMP(loc_223f4));	// 34385 jmp     loc_223F4 ;~ 1359:0071
loc_21be4:
	// 6659 
cs=0x1359;eip=0x000074; 	J(CALLF(track_setup,0));	// 34389 call    track_setup ;~ 1359:0074
cs=0x1359;eip=0x000079; 	J(JMP(loc_21c0f));	// 34390 jmp     short loc_21C0F ;~ 1359:0079
loc_21bec:
	// 6660 
cs=0x1359;eip=0x00007c; 	T(CMP(word_449bc, 0));	// 34395 cmp     word_449BC, 0 ;~ 1359:007C
cs=0x1359;eip=0x000081; 	J(JNZ(loc_21c00));	// 34396 jnz     short loc_21C00 ;~ 1359:0081
cs=0x1359;eip=0x000083; 	X(MOV(cameramode, 0));	// 34397 mov     cameramode, 0 ;~ 1359:0083
cs=0x1359;eip=0x000088; 	X(MOV(game_replay_mode, 1));	// 34398 mov     game_replay_mode, 1 ;~ 1359:0088
cs=0x1359;eip=0x00008d; 	J(JMP(loc_21c0f));	// 34399 jmp     short loc_21C0F ;~ 1359:008D
loc_21c00:
	// 6661 
cs=0x1359;eip=0x000090; 	X(MOV(cameramode, 0));	// 34404 mov     cameramode, 0 ;~ 1359:0090
cs=0x1359;eip=0x000095; 	X(MOV(game_replay_mode, 2));	// 34405 mov     game_replay_mode, 2 ;~ 1359:0095
cs=0x1359;eip=0x00009a; 	X(MOV(is_in_replay, 1));	// 34406 mov     is_in_replay, 1 ;~ 1359:009A
loc_21c0f:
	// 6662 
cs=0x1359;eip=0x00009f; 	X(PUSH(cs));	// 34410 push    cs ;~ 1359:009F
cs=0x1359;eip=0x0000a0; 	J(CALL(setup_player_cars,0));	// 34411 call    near ptr setup_player_cars ;~ 1359:00A0
cs=0x1359;eip=0x0000a3; 	T(OR(ax, ax));	// 34412 or      ax, ax ;~ 1359:00A3
cs=0x1359;eip=0x0000a5; 	J(JZ(loc_21c24));	// 34413 jz      short loc_21C24 ;~ 1359:00A5
cs=0x1359;eip=0x0000a7; 	X(PUSH(cs));	// 34414 push    cs ;~ 1359:00A7
cs=0x1359;eip=0x0000a8; 	J(CALL(free_player_cars,0));	// 34415 call    near ptr free_player_cars ;~ 1359:00A8
cs=0x1359;eip=0x0000ab; 	J(CALLF(do_mer_restext,0));	// 34416 call    do_mer_restext ;~ 1359:00AB
cs=0x1359;eip=0x0000b0; 	J(JMP(loc_223e4));	// 34417 jmp     loc_223E4 ;~ 1359:00B0
loc_21c24:
	// 6663 
cs=0x1359;eip=0x0000b4; 	X(MOV(kbormouse, 0));	// 34422 mov     kbormouse, 0 ;~ 1359:00B4
cs=0x1359;eip=0x0000b9; 	X(MOV(byte_449e6, 0));	// 34423 mov     byte_449E6, 0 ;~ 1359:00B9
cs=0x1359;eip=0x0000be; 	X(MOV(byte_449da, 1));	// 34424 mov     byte_449DA, 1 ;~ 1359:00BE
cs=0x1359;eip=0x0000c3; 	X(PUSH(cs));	// 34425 push    cs ;~ 1359:00C3
cs=0x1359;eip=0x0000c4; 	J(CALL(set_frame_callback,0));	// 34426 call    near ptr set_frame_callback ;~ 1359:00C4
cs=0x1359;eip=0x0000c7; 	X(MOV(game_replay_mode_copy, 0x0FF));	// 34427 mov     game_replay_mode_copy, 0FFh ;~ 1359:00C7
cs=0x1359;eip=0x0000cc; 	X(MOV(byte_44346, 0));	// 34428 mov     byte_44346, 0 ;~ 1359:00CC
cs=0x1359;eip=0x0000d1; 	X(MOV(byte_4432a, 0));	// 34429 mov     byte_4432A, 0 ;~ 1359:00D1
cs=0x1359;eip=0x0000d6; 	X(MOV(byte_46467, 0));	// 34430 mov     byte_46467, 0 ;~ 1359:00D6
cs=0x1359;eip=0x0000db; 	X(MOV(dashb_toggle, 0));	// 34431 mov     dashb_toggle, 0 ;~ 1359:00DB
cs=0x1359;eip=0x0000e0; 	T(CMP(idle_expired, 0));	// 34432 cmp     idle_expired, 0 ;~ 1359:00E0
cs=0x1359;eip=0x0000e5; 	J(JZ(loc_21c6e));	// 34433 jz      short loc_21C6E ;~ 1359:00E5
cs=0x1359;eip=0x0000e7; 	T(MOV(al, byte_449ba));	// 34434 mov     al, byte_449BA ;~ 1359:00E7
cs=0x1359;eip=0x0000ea; 	T(CBW);	// 34435 cbw ;~ 1359:00EA
cs=0x1359;eip=0x0000eb; 	X(MOV(framespersec, ax));	// 34436 mov     framespersec, ax ;~ 1359:00EB
loc_21c5e:
	// 6664 
cs=0x1359;eip=0x0000ee; 	T(MOV(ax, 0x0FFFF));	// 34439 mov     ax, 0FFFFh ;~ 1359:00EE
cs=0x1359;eip=0x0000f1; 	X(PUSH(ax));	// 34440 push    ax ;~ 1359:00F1
cs=0x1359;eip=0x0000f2; 	J(CALLF(init_game_state,0));	// 34441 call    init_game_state ;~ 1359:00F2
cs=0x1359;eip=0x0000f7; 	T(ADD(sp, 2));	// 34442 add     sp, 2 ;~ 1359:00F7
cs=0x1359;eip=0x0000fa; 	J(JMP(loc_21da2));	// 34443 jmp     loc_21DA2 ;~ 1359:00FA
loc_21c6e:
	// 6665 
cs=0x1359;eip=0x0000fe; 	T(CMP(is_in_replay, 0));	// 34448 cmp     is_in_replay, 0 ;~ 1359:00FE
cs=0x1359;eip=0x000103; 	J(JZ(loc_21c78));	// 34449 jz      short loc_21C78 ;~ 1359:0103
cs=0x1359;eip=0x000105; 	J(JMP(loc_21d2c));	// 34450 jmp     loc_21D2C ;~ 1359:0105
loc_21c78:
	// 6666 
cs=0x1359;eip=0x000108; 	X(MOV(cameramode, 0));	// 34454 mov     cameramode, 0 ;~ 1359:0108
cs=0x1359;eip=0x00010d; 	X(MOV(dashb_toggle, 1));	// 34455 mov     dashb_toggle, 1 ;~ 1359:010D
cs=0x1359;eip=0x000112; 	X(MOV(show_penalty_counter, 0));	// 34456 mov     show_penalty_counter, 0 ;~ 1359:0112
cs=0x1359;eip=0x000117; 	T(MOV(ax, framespersec2));	// 34457 mov     ax, framespersec2 ;~ 1359:0117
cs=0x1359;eip=0x00011a; 	X(MOV(framespersec, ax));	// 34458 mov     framespersec, ax ;~ 1359:011A
cs=0x1359;eip=0x00011d; 	T(MOV(al, *(db*)(((db*)&framespersec2))));	// 34459 mov     al, byte ptr framespersec2 ;~ 1359:011D
cs=0x1359;eip=0x000120; 	X(MOV(byte_449ba, al));	// 34460 mov     byte_449BA, al ;~ 1359:0120
cs=0x1359;eip=0x000123; 	T(MOV(ax, 0x0FFFF));	// 34461 mov     ax, 0FFFFh ;~ 1359:0123
cs=0x1359;eip=0x000126; 	X(PUSH(ax));	// 34462 push    ax ;~ 1359:0126
cs=0x1359;eip=0x000127; 	J(CALLF(init_game_state,0));	// 34463 call    init_game_state ;~ 1359:0127
cs=0x1359;eip=0x00012c; 	T(ADD(sp, 2));	// 34464 add     sp, 2 ;~ 1359:012C
cs=0x1359;eip=0x00012f; 	X(MOV(word_45d94, 0));	// 34465 mov     word_45D94, 0 ;~ 1359:012F
cs=0x1359;eip=0x000135; 	X(MOV(*(db*)(((db*)&word_45d3e)), 0));	// 34466 mov     byte ptr word_45D3E, 0 ;~ 1359:0135
cs=0x1359;eip=0x00013a; 	X(MOV(byte_4393c, 1));	// 34467 mov     byte_4393C, 1 ;~ 1359:013A
cs=0x1359;eip=0x00013f; 	T(MOV(al, byte_3b8f2));	// 34468 mov     al, byte_3B8F2 ;~ 1359:013F
cs=0x1359;eip=0x000142; 	T(CBW);	// 34469 cbw ;~ 1359:0142
cs=0x1359;eip=0x000143; 	X(PUSH(ax));	// 34470 push    ax ;~ 1359:0143
cs=0x1359;eip=0x000144; 	X(PUSH(cs));	// 34471 push    cs ;~ 1359:0144
cs=0x1359;eip=0x000145; 	J(CALL(mouse_minmax_position,0));	// 34472 call    near ptr mouse_minmax_position ;~ 1359:0145
cs=0x1359;eip=0x000148; 	T(ADD(sp, 2));	// 34473 add     sp, 2 ;~ 1359:0148
cs=0x1359;eip=0x00014b; 	X(MOV(game_replay_mode, 1));	// 34474 mov     game_replay_mode, 1 ;~ 1359:014B
cs=0x1359;eip=0x000150; 	T(MOV(ax, 0x0FF10));	// 34475 mov     ax, 0FF10h ;~ 1359:0150
cs=0x1359;eip=0x000153; 	X(PUSH(ax));	// 34476 push    ax ;~ 1359:0153
cs=0x1359;eip=0x000154; 	X(PUSH(track_angle));	// 34477 push    track_angle ;~ 1359:0154
cs=0x1359;eip=0x000158; 	J(CALLF(sin_fast,0));	// 34478 call    sin_fast ;~ 1359:0158
cs=0x1359;eip=0x00015d; 	T(ADD(sp, 2));	// 34479 add     sp, 2 ;~ 1359:015D
cs=0x1359;eip=0x000160; 	X(PUSH(ax));	// 34480 push    ax ;~ 1359:0160
cs=0x1359;eip=0x000161; 	J(CALLF(multiply_and_scale,0));	// 34481 call    multiply_and_scale ;~ 1359:0161
cs=0x1359;eip=0x000166; 	T(ADD(sp, 4));	// 34482 add     sp, 4 ;~ 1359:0166
cs=0x1359;eip=0x000169; 	T(CWD);	// 34483 cwd ;~ 1359:0169
cs=0x1359;eip=0x00016a; 	T(MOV(cl, 6));	// 34484 mov     cl, 6 ;~ 1359:016A
loc_21cdc:
	// 6667 
cs=0x1359;eip=0x00016c; 	T(SHL(ax, 1));	// 34487 shl     ax, 1 ;~ 1359:016C
cs=0x1359;eip=0x00016e; 	T(RCL(dx, 1));	// 34488 rcl     dx, 1 ;~ 1359:016E
cs=0x1359;eip=0x000170; 	T(DEC(cl));	// 34489 dec     cl ;~ 1359:0170
cs=0x1359;eip=0x000172; 	J(JNZ(loc_21cdc));	// 34490 jnz     short loc_21CDC ;~ 1359:0172
cs=0x1359;eip=0x000174; 	X(ADD(word_445e6, ax));	// 34491 add     word_445E6, ax ;~ 1359:0174
cs=0x1359;eip=0x000178; 	X(ADC(word_445e8, dx));	// 34492 adc     word_445E8, dx ;~ 1359:0178
cs=0x1359;eip=0x00017c; 	T(MOV(ax, 0x0FF10));	// 34493 mov     ax, 0FF10h      ; -240 ;~ 1359:017C
cs=0x1359;eip=0x00017f; 	X(PUSH(ax));	// 34494 push    ax ;~ 1359:017F
cs=0x1359;eip=0x000180; 	X(PUSH(track_angle));	// 34495 push    track_angle ;~ 1359:0180
cs=0x1359;eip=0x000184; 	J(CALLF(cos_fast,0));	// 34496 call    cos_fast ;~ 1359:0184
cs=0x1359;eip=0x000189; 	T(ADD(sp, 2));	// 34497 add     sp, 2 ;~ 1359:0189
cs=0x1359;eip=0x00018c; 	X(PUSH(ax));	// 34498 push    ax ;~ 1359:018C
cs=0x1359;eip=0x00018d; 	J(CALLF(multiply_and_scale,0));	// 34499 call    multiply_and_scale ;~ 1359:018D
cs=0x1359;eip=0x000192; 	T(ADD(sp, 4));	// 34500 add     sp, 4 ;~ 1359:0192
cs=0x1359;eip=0x000195; 	T(CWD);	// 34501 cwd ;~ 1359:0195
cs=0x1359;eip=0x000196; 	T(MOV(cl, 6));	// 34502 mov     cl, 6 ;~ 1359:0196
loc_21d08:
	// 6668 
cs=0x1359;eip=0x000198; 	T(SHL(ax, 1));	// 34505 shl     ax, 1 ;~ 1359:0198
cs=0x1359;eip=0x00019a; 	T(RCL(dx, 1));	// 34506 rcl     dx, 1 ;~ 1359:019A
cs=0x1359;eip=0x00019c; 	T(DEC(cl));	// 34507 dec     cl ;~ 1359:019C
cs=0x1359;eip=0x00019e; 	J(JNZ(loc_21d08));	// 34508 jnz     short loc_21D08 ;~ 1359:019E
cs=0x1359;eip=0x0001a0; 	X(ADD(word_445ee, ax));	// 34509 add     word_445EE, ax ;~ 1359:01A0
cs=0x1359;eip=0x0001a4; 	X(ADC(word_445f0, dx));	// 34510 adc     word_445F0, dx ;~ 1359:01A4
cs=0x1359;eip=0x0001a8; 	X(ADD(word_445ea, 0x580));	// 34511 add     word_445EA, 580h ;~ 1359:01A8
cs=0x1359;eip=0x0001ae; 	X(ADC(word_445ec, 0));	// 34512 adc     word_445EC, 0 ;~ 1359:01AE
cs=0x1359;eip=0x0001b3; 	X(MOV(byte_43966, 1));	// 34513 mov     byte_43966, 1 ;~ 1359:01B3
cs=0x1359;eip=0x0001b8; 	J(JMP(loc_21da2));	// 34514 jmp     short loc_21DA2 ;~ 1359:01B8
loc_21d2c:
	// 6669 
cs=0x1359;eip=0x0001bc; 	X(MOV(cameramode, 0));	// 34520 mov     cameramode, 0 ;~ 1359:01BC
cs=0x1359;eip=0x0001c1; 	X(MOV(game_replay_mode, 2));	// 34521 mov     game_replay_mode, 2 ;~ 1359:01C1
cs=0x1359;eip=0x0001c6; 	X(MOV(word_44dca, 0x1F4));	// 34522 mov     word_44DCA, 1F4h ;~ 1359:01C6
cs=0x1359;eip=0x0001cc; 	T(MOV(al, byte_449ba));	// 34523 mov     al, byte_449BA ;~ 1359:01CC
cs=0x1359;eip=0x0001cf; 	T(CBW);	// 34524 cbw ;~ 1359:01CF
cs=0x1359;eip=0x0001d0; 	X(MOV(framespersec, ax));	// 34525 mov     framespersec, ax ;~ 1359:01D0
cs=0x1359;eip=0x0001d3; 	T(SUB(ax, ax));	// 34526 sub     ax, ax ;~ 1359:01D3
cs=0x1359;eip=0x0001d5; 	X(PUSH(ax));	// 34527 push    ax ;~ 1359:01D5
cs=0x1359;eip=0x0001d6; 	J(CALLF(restore_gamestate,0));	// 34528 call    restore_gamestate ;~ 1359:01D6
cs=0x1359;eip=0x0001db; 	T(ADD(sp, 2));	// 34529 add     sp, 2 ;~ 1359:01DB
cs=0x1359;eip=0x0001de; 	X(PUSH(word_449bc));	// 34530 push    word_449BC ;~ 1359:01DE
cs=0x1359;eip=0x0001e2; 	J(CALLF(restore_gamestate,0));	// 34531 call    restore_gamestate ;~ 1359:01E2
cs=0x1359;eip=0x0001e7; 	T(ADD(sp, 2));	// 34532 add     sp, 2 ;~ 1359:01E7
cs=0x1359;eip=0x0001ea; 	J(JMP(loc_21d72));	// 34533 jmp     short loc_21D72 ;~ 1359:01EA
loc_21d5c:
	// 6670 
cs=0x1359;eip=0x0001ec; 	T(MOV(ax, 1));	// 34537 mov     ax, 1 ;~ 1359:01EC
cs=0x1359;eip=0x0001ef; 	X(PUSH(ax));	// 34538 push    ax ;~ 1359:01EF
cs=0x1359;eip=0x0001f0; 	J(CALLF(input_do_checking,0));	// 34539 call    input_do_checking ;~ 1359:01F0
cs=0x1359;eip=0x0001f5; 	T(ADD(sp, 2));	// 34540 add     sp, 2 ;~ 1359:01F5
cs=0x1359;eip=0x0001f8; 	T(CMP(ax, 0x1B));	// 34541 cmp     ax, 1Bh ;~ 1359:01F8
cs=0x1359;eip=0x0001fb; 	J(JZ(loc_21d7b));	// 34542 jz      short loc_21D7B ;~ 1359:01FB
cs=0x1359;eip=0x0001fd; 	J(CALLF(update_gamestate,0));	// 34543 call    update_gamestate ;~ 1359:01FD
loc_21d72:
	// 6671 
cs=0x1359;eip=0x000202; 	T(MOV(ax, word_445d4));	// 34546 mov     ax, word_445D4 ;~ 1359:0202
cs=0x1359;eip=0x000205; 	T(CMP(word_449bc, ax));	// 34547 cmp     word_449BC, ax ;~ 1359:0205
cs=0x1359;eip=0x000209; 	J(JNZ(loc_21d5c));	// 34548 jnz     short loc_21D5C ;~ 1359:0209
loc_21d7b:
	// 6672 
cs=0x1359;eip=0x00020b; 	T(MOV(ax, word_449bc));	// 34551 mov     ax, word_449BC ;~ 1359:020B
cs=0x1359;eip=0x00020e; 	X(MOV(elapsed_time2, ax));	// 34552 mov     elapsed_time2, ax ;~ 1359:020E
cs=0x1359;eip=0x000211; 	J(JMP(loc_21da2));	// 34553 jmp     short loc_21DA2 ;~ 1359:0211
loc_21d84:
	// 6673 
cs=0x1359;eip=0x000214; 	T(CMP(byte_3b8f2, 0));	// 34558 cmp     byte_3B8F2, 0 ;~ 1359:0214
cs=0x1359;eip=0x000219; 	J(JNZ(loc_21d92));	// 34559 jnz     short loc_21D92 ;~ 1359:0219
cs=0x1359;eip=0x00021b; 	T(CMP(byte_3fe00, 0));	// 34560 cmp     byte_3FE00, 0 ;~ 1359:021B
cs=0x1359;eip=0x000220; 	J(JZ(loc_21d9d));	// 34561 jz      short loc_21D9D ;~ 1359:0220
loc_21d92:
	// 6674 
cs=0x1359;eip=0x000222; 	T(CMP(game_replay_mode, 0));	// 34564 cmp     game_replay_mode, 0 ;~ 1359:0222
cs=0x1359;eip=0x000227; 	J(JNZ(loc_21d9d));	// 34565 jnz     short loc_21D9D ;~ 1359:0227
cs=0x1359;eip=0x000229; 	X(PUSH(cs));	// 34566 push    cs ;~ 1359:0229
cs=0x1359;eip=0x00022a; 	J(CALL(replay_unk,0));	// 34567 call    near ptr replay_unk ;~ 1359:022A
loc_21d9d:
	// 6675 
cs=0x1359;eip=0x00022d; 	J(CALLF(update_gamestate,0));	// 34571 call    update_gamestate ;~ 1359:022D
loc_21da2:
	// 6676 
cs=0x1359;eip=0x000232; 	T(MOV(ax, elapsed_time2));	// 34575 mov     ax, elapsed_time2 ;~ 1359:0232
cs=0x1359;eip=0x000235; 	T(CMP(word_445d4, ax));	// 34576 cmp     word_445D4, ax ;~ 1359:0235
cs=0x1359;eip=0x000239; 	J(JNZ(loc_21d84));	// 34577 jnz     short loc_21D84 ;~ 1359:0239
cs=0x1359;eip=0x00023b; 	T(CMP(game_replay_mode, 0));	// 34578 cmp     game_replay_mode, 0 ;~ 1359:023B
cs=0x1359;eip=0x000240; 	J(JNZ(loc_21dcb));	// 34579 jnz     short loc_21DCB ;~ 1359:0240
cs=0x1359;eip=0x000242; 	T(CMP(byte_449da, 0));	// 34580 cmp     byte_449DA, 0 ;~ 1359:0242
cs=0x1359;eip=0x000247; 	J(JNZ(loc_21dcb));	// 34581 jnz     short loc_21DCB ;~ 1359:0247
cs=0x1359;eip=0x000249; 	T(CMP(byte_44889, 0));	// 34582 cmp     byte_44889, 0 ;~ 1359:0249
cs=0x1359;eip=0x00024e; 	J(JZ(loc_21dcb));	// 34583 jz      short loc_21DCB ;~ 1359:024E
cs=0x1359;eip=0x000250; 	T(MOV(ax, word_445d4));	// 34584 mov     ax, word_445D4 ;~ 1359:0250
cs=0x1359;eip=0x000253; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), ax));	// 34585 cmp     [bp+var_C], ax ;~ 1359:0253
cs=0x1359;eip=0x000256; 	J(JZ(loc_21da2));	// 34586 jz      short loc_21DA2 ;~ 1359:0256
cs=0x1359;eip=0x000258; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 34587 mov     [bp+var_C], ax ;~ 1359:0258
loc_21dcb:
	// 6677 
cs=0x1359;eip=0x00025b; 	T(CMP(byte_44889, 0));	// 34591 cmp     byte_44889, 0 ;~ 1359:025B
cs=0x1359;eip=0x000260; 	J(JNZ(loc_21deb));	// 34592 jnz     short loc_21DEB ;~ 1359:0260
cs=0x1359;eip=0x000262; 	T(CMP(game_replay_mode, 0));	// 34593 cmp     game_replay_mode, 0 ;~ 1359:0262
cs=0x1359;eip=0x000267; 	J(JNZ(loc_21deb));	// 34594 jnz     short loc_21DEB ;~ 1359:0267
cs=0x1359;eip=0x000269; 	X(MOV(elapsed_time2, 0));	// 34595 mov     elapsed_time2, 0 ;~ 1359:0269
cs=0x1359;eip=0x00026f; 	X(MOV(word_449bc, 0));	// 34596 mov     word_449BC, 0 ;~ 1359:026F
cs=0x1359;eip=0x000275; 	X(MOV(word_445d4, 0));	// 34597 mov     word_445D4, 0 ;~ 1359:0275
loc_21deb:
	// 6678 
cs=0x1359;eip=0x00027b; 	T(MOV(ax, timertestflag));	// 34601 mov     ax, timertestflag ;~ 1359:027B
cs=0x1359;eip=0x00027e; 	T(CMP(timertestflag_copy, ax));	// 34602 cmp     timertestflag_copy, ax ;~ 1359:027E
cs=0x1359;eip=0x000282; 	J(JZ(loc_21dfc));	// 34603 jz      short loc_21DFC ;~ 1359:0282
cs=0x1359;eip=0x000284; 	X(MOV(timertestflag_copy, ax));	// 34604 mov     timertestflag_copy, ax ;~ 1359:0284
cs=0x1359;eip=0x000287; 	J(CALLF(init_rect_arrays,0));	// 34605 call    init_rect_arrays ;~ 1359:0287
loc_21dfc:
	// 6679 
cs=0x1359;eip=0x00028c; 	T(CMP(byte_46467, 0));	// 34608 cmp     byte_46467, 0 ;~ 1359:028C
cs=0x1359;eip=0x000291; 	J(JZ(loc_21e76));	// 34609 jz      short loc_21E76 ;~ 1359:0291
cs=0x1359;eip=0x000293; 	J(CALLF(input_push_status,0));	// 34610 call    input_push_status ;~ 1359:0293
cs=0x1359;eip=0x000298; 	J(CALLF(audio_unk,0));	// 34611 call    audio_unk ;~ 1359:0298
cs=0x1359;eip=0x00029d; 	T(SUB(ax, ax));	// 34612 sub     ax, ax ;~ 1359:029D
cs=0x1359;eip=0x00029f; 	X(PUSH(ax));	// 34613 push    ax ;~ 1359:029F
cs=0x1359;eip=0x0002a0; 	X(PUSH(ax));	// 34614 push    ax ;~ 1359:02A0
cs=0x1359;eip=0x0002a1; 	X(PUSH(dialogarg2));	// 34615 push    dialogarg2 ;~ 1359:02A1
cs=0x1359;eip=0x0002a5; 	T(MOV(ax, 0x0FFFF));	// 34616 mov     ax, 0FFFFh ;~ 1359:02A5
cs=0x1359;eip=0x0002a8; 	X(PUSH(ax));	// 34617 push    ax ;~ 1359:02A8
cs=0x1359;eip=0x0002a9; 	X(PUSH(ax));	// 34618 push    ax ;~ 1359:02A9
cs=0x1359;eip=0x0002aa; 	T(MOV(ax, offset(dseg,arbf)));	// 34619 mov     ax, offset aRbf ; "rbf" ;~ 1359:02AA
cs=0x1359;eip=0x0002ad; 	X(PUSH(ax));	// 34620 push    ax ;~ 1359:02AD
cs=0x1359;eip=0x0002ae; 	X(PUSH(word_449a2));	// 34621 push    word_449A2 ;~ 1359:02AE
cs=0x1359;eip=0x0002b2; 	X(PUSH(gameresptr));	// 34622 push    gameresptr ;~ 1359:02B2
cs=0x1359;eip=0x0002b6; 	J(CALLF(locate_text_res,0));	// 34623 call    locate_text_res ;~ 1359:02B6
cs=0x1359;eip=0x0002bb; 	T(ADD(sp, 6));	// 34624 add     sp, 6 ;~ 1359:02BB
cs=0x1359;eip=0x0002be; 	X(PUSH(dx));	// 34625 push    dx ;~ 1359:02BE
cs=0x1359;eip=0x0002bf; 	X(PUSH(ax));	// 34626 push    ax ;~ 1359:02BF
cs=0x1359;eip=0x0002c0; 	T(MOV(ax, 1));	// 34627 mov     ax, 1 ;~ 1359:02C0
cs=0x1359;eip=0x0002c3; 	X(PUSH(ax));	// 34628 push    ax ;~ 1359:02C3
cs=0x1359;eip=0x0002c4; 	T(MOV(ax, 2));	// 34629 mov     ax, 2 ;~ 1359:02C4
cs=0x1359;eip=0x0002c7; 	X(PUSH(ax));	// 34630 push    ax ;~ 1359:02C7
cs=0x1359;eip=0x0002c8; 	J(CALLF(show_dialog,0));	// 34631 call    show_dialog ;~ 1359:02C8
cs=0x1359;eip=0x0002cd; 	T(ADD(sp, 0x12));	// 34632 add     sp, 12h ;~ 1359:02CD
cs=0x1359;eip=0x0002d0; 	T(MOV(si, ax));	// 34633 mov     si, ax ;~ 1359:02D0
cs=0x1359;eip=0x0002d2; 	T(CMP(si, 0x0FFFF));	// 34634 cmp     si, 0FFFFh ;~ 1359:02D2
cs=0x1359;eip=0x0002d5; 	J(JNZ(loc_21e49));	// 34635 jnz     short loc_21E49 ;~ 1359:02D5
cs=0x1359;eip=0x0002d7; 	T(SUB(si, si));	// 34636 sub     si, si ;~ 1359:02D7
loc_21e49:
	// 6680 
cs=0x1359;eip=0x0002d9; 	J(CALLF(sub_372f4,0));	// 34639 call    sub_372F4 ;~ 1359:02D9
cs=0x1359;eip=0x0002de; 	X(MOV(word_3f88e, 0));	// 34640 mov     word_3F88E, 0 ;~ 1359:02DE
cs=0x1359;eip=0x0002e4; 	J(CALLF(input_pop_status,0));	// 34641 call    input_pop_status ;~ 1359:02E4
cs=0x1359;eip=0x0002e9; 	T(OR(si, si));	// 34642 or      si, si ;~ 1359:02E9
cs=0x1359;eip=0x0002eb; 	J(JZ(loc_21e71));	// 34643 jz      short loc_21E71 ;~ 1359:02EB
cs=0x1359;eip=0x0002ed; 	T(SUB(ax, ax));	// 34644 sub     ax, ax ;~ 1359:02ED
cs=0x1359;eip=0x0002ef; 	X(PUSH(ax));	// 34645 push    ax ;~ 1359:02EF
cs=0x1359;eip=0x0002f0; 	T(MOV(ax, 4));	// 34646 mov     ax, 4 ;~ 1359:02F0
cs=0x1359;eip=0x0002f3; 	X(PUSH(ax));	// 34647 push    ax ;~ 1359:02F3
cs=0x1359;eip=0x0002f4; 	J(CALLF(update_crash_state,0));	// 34648 call    update_crash_state ;~ 1359:02F4
cs=0x1359;eip=0x0002f9; 	T(ADD(sp, 4));	// 34649 add     sp, 4 ;~ 1359:02F9
cs=0x1359;eip=0x0002fc; 	X(MOV(byte_449da, 1));	// 34650 mov     byte_449DA, 1 ;~ 1359:02FC
loc_21e71:
	// 6681 
cs=0x1359;eip=0x000301; 	X(MOV(byte_46467, 0));	// 34653 mov     byte_46467, 0 ;~ 1359:0301
loc_21e76:
	// 6682 
cs=0x1359;eip=0x000306; 	T(CMP(video_flag5_is0, 0));	// 34656 cmp     video_flag5_is0, 0 ;~ 1359:0306
cs=0x1359;eip=0x00030b; 	J(JZ(loc_21e8a));	// 34657 jz      short loc_21E8A ;~ 1359:030B
cs=0x1359;eip=0x00030d; 	J(CALLF(setup_mcgawnd2,0));	// 34658 call    setup_mcgawnd2 ;~ 1359:030D
cs=0x1359;eip=0x000312; 	T(MOV(al, byte_44346));	// 34659 mov     al, byte_44346 ;~ 1359:0312
cs=0x1359;eip=0x000315; 	X(MOV(byte_4432a, al));	// 34660 mov     byte_4432A, al ;~ 1359:0315
cs=0x1359;eip=0x000318; 	J(JMP(loc_21e8f));	// 34661 jmp     short loc_21E8F ;~ 1359:0318
loc_21e8a:
	// 6683 
cs=0x1359;eip=0x00031a; 	J(CALLF(sprite_copy_wnd_to_1,0));	// 34665 call    sprite_copy_wnd_to_1 ;~ 1359:031A
loc_21e8f:
	// 6684 
cs=0x1359;eip=0x00031f; 	T(MOV(al, game_replay_mode_copy));	// 34668 mov     al, game_replay_mode_copy ;~ 1359:031F
cs=0x1359;eip=0x000322; 	T(CMP(game_replay_mode, al));	// 34669 cmp     game_replay_mode, al ;~ 1359:0322
cs=0x1359;eip=0x000326; 	J(JNZ(loc_21ebf));	// 34670 jnz     short loc_21EBF ;~ 1359:0326
cs=0x1359;eip=0x000328; 	T(MOV(al, dashb_toggle_copy));	// 34671 mov     al, dashb_toggle_copy ;~ 1359:0328
cs=0x1359;eip=0x00032b; 	T(CMP(dashb_toggle, al));	// 34672 cmp     dashb_toggle, al ;~ 1359:032B
cs=0x1359;eip=0x00032f; 	J(JNZ(loc_21ebf));	// 34673 jnz     short loc_21EBF ;~ 1359:032F
cs=0x1359;eip=0x000331; 	T(MOV(al, replaybar_toggle_copy));	// 34674 mov     al, replaybar_toggle_copy ;~ 1359:0331
cs=0x1359;eip=0x000334; 	T(CMP(replaybar_toggle, al));	// 34675 cmp     replaybar_toggle, al ;~ 1359:0334
cs=0x1359;eip=0x000338; 	J(JNZ(loc_21ebf));	// 34676 jnz     short loc_21EBF ;~ 1359:0338
cs=0x1359;eip=0x00033a; 	T(MOV(al, is_in_replay_copy));	// 34677 mov     al, is_in_replay_copy ;~ 1359:033A
cs=0x1359;eip=0x00033d; 	T(CMP(is_in_replay, al));	// 34678 cmp     is_in_replay, al ;~ 1359:033D
cs=0x1359;eip=0x000341; 	J(JNZ(loc_21ebf));	// 34679 jnz     short loc_21EBF ;~ 1359:0341
cs=0x1359;eip=0x000343; 	T(MOV(al, followopponentflag_copy));	// 34680 mov     al, followOpponentFlag_copy ;~ 1359:0343
cs=0x1359;eip=0x000346; 	T(CMP(followopponentflag, al));	// 34681 cmp     followOpponentFlag, al ;~ 1359:0346
cs=0x1359;eip=0x00034a; 	J(JNZ(loc_21ebf));	// 34682 jnz     short loc_21EBF ;~ 1359:034A
cs=0x1359;eip=0x00034c; 	J(JMP(loc_21f7a));	// 34683 jmp     loc_21F7A ;~ 1359:034C
loc_21ebf:
	// 6685 
cs=0x1359;eip=0x00034f; 	T(MOV(al, game_replay_mode));	// 34688 mov     al, game_replay_mode ;~ 1359:034F
cs=0x1359;eip=0x000352; 	X(MOV(game_replay_mode_copy, al));	// 34689 mov     game_replay_mode_copy, al ;~ 1359:0352
cs=0x1359;eip=0x000355; 	T(MOV(al, dashb_toggle));	// 34690 mov     al, dashb_toggle ;~ 1359:0355
cs=0x1359;eip=0x000358; 	X(MOV(dashb_toggle_copy, al));	// 34691 mov     dashb_toggle_copy, al ;~ 1359:0358
cs=0x1359;eip=0x00035b; 	T(MOV(al, replaybar_toggle));	// 34692 mov     al, replaybar_toggle ;~ 1359:035B
cs=0x1359;eip=0x00035e; 	X(MOV(replaybar_toggle_copy, al));	// 34693 mov     replaybar_toggle_copy, al ;~ 1359:035E
cs=0x1359;eip=0x000361; 	T(MOV(al, is_in_replay));	// 34694 mov     al, is_in_replay ;~ 1359:0361
cs=0x1359;eip=0x000364; 	X(MOV(is_in_replay_copy, al));	// 34695 mov     is_in_replay_copy, al ;~ 1359:0364
cs=0x1359;eip=0x000367; 	T(MOV(al, followopponentflag));	// 34696 mov     al, followOpponentFlag ;~ 1359:0367
cs=0x1359;eip=0x00036a; 	X(MOV(followopponentflag_copy, al));	// 34697 mov     followOpponentFlag_copy, al ;~ 1359:036A
cs=0x1359;eip=0x00036d; 	X(MOV(roofbmpheight_copy, 0));	// 34698 mov     roofbmpheight_copy, 0 ;~ 1359:036D
cs=0x1359;eip=0x000373; 	X(MOV(byte_449e2, 0));	// 34699 mov     byte_449E2, 0 ;~ 1359:0373
cs=0x1359;eip=0x000378; 	T(CMP(game_replay_mode, 2));	// 34700 cmp     game_replay_mode, 2 ;~ 1359:0378
cs=0x1359;eip=0x00037d; 	J(JNZ(loc_21f0a));	// 34701 jnz     short loc_21F0A ;~ 1359:037D
cs=0x1359;eip=0x00037f; 	T(CMP(idle_expired, 0));	// 34702 cmp     idle_expired, 0 ;~ 1359:037F
cs=0x1359;eip=0x000384; 	J(JNZ(loc_21f0a));	// 34703 jnz     short loc_21F0A ;~ 1359:0384
cs=0x1359;eip=0x000386; 	T(CMP(replaybar_toggle, 0));	// 34704 cmp     replaybar_toggle, 0 ;~ 1359:0386
cs=0x1359;eip=0x00038b; 	J(JZ(loc_21f00));	// 34705 jz      short loc_21F00 ;~ 1359:038B
cs=0x1359;eip=0x00038d; 	J(JMP(loc_21fee));	// 34706 jmp     loc_21FEE ;~ 1359:038D
loc_21f00:
	// 6686 
cs=0x1359;eip=0x000390; 	T(CMP(is_in_replay, 0));	// 34710 cmp     is_in_replay, 0 ;~ 1359:0390
cs=0x1359;eip=0x000395; 	J(JZ(loc_21f0a));	// 34711 jz      short loc_21F0A ;~ 1359:0395
cs=0x1359;eip=0x000397; 	J(JMP(loc_21fee));	// 34712 jmp     loc_21FEE ;~ 1359:0397
loc_21f0a:
	// 6687 
cs=0x1359;eip=0x00039a; 	X(MOV(replaybar_enabled, 0));	// 34717 mov     replaybar_enabled, 0 ;~ 1359:039A
loc_21f0f:
	// 6688 
cs=0x1359;eip=0x00039f; 	T(CMP(idle_expired, 0));	// 34720 cmp     idle_expired, 0 ;~ 1359:039F
cs=0x1359;eip=0x0003a4; 	J(JNZ(loc_21f19));	// 34721 jnz     short loc_21F19 ;~ 1359:03A4
cs=0x1359;eip=0x0003a6; 	J(JMP(loc_21ff6));	// 34722 jmp     loc_21FF6 ;~ 1359:03A6
loc_21f19:
	// 6689 
cs=0x1359;eip=0x0003a9; 	X(MOV(dashbmp_y_copy, 0x0C8));	// 34727 mov     dashbmp_y_copy, 0C8h ; 'È' ;~ 1359:03A9
loc_21f1f:
	// 6690 
cs=0x1359;eip=0x0003af; 	T(MOV(ax, roofbmpheight_copy));	// 34731 mov     ax, roofbmpheight_copy ;~ 1359:03AF
cs=0x1359;eip=0x0003b2; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 34732 cmp     [bp+var_2], ax ;~ 1359:03B2
cs=0x1359;eip=0x0003b5; 	J(JNZ(loc_21f38));	// 34733 jnz     short loc_21F38 ;~ 1359:03B5
cs=0x1359;eip=0x0003b7; 	T(MOV(ax, word_449ea));	// 34734 mov     ax, word_449EA ;~ 1359:03B7
cs=0x1359;eip=0x0003ba; 	T(CMP(dashbmp_y_copy, ax));	// 34735 cmp     dashbmp_y_copy, ax ;~ 1359:03BA
cs=0x1359;eip=0x0003be; 	J(JNZ(loc_21f38));	// 34736 jnz     short loc_21F38 ;~ 1359:03BE
cs=0x1359;eip=0x0003c0; 	T(MOV(ax, height_above_replaybar));	// 34737 mov     ax, height_above_replaybar ;~ 1359:03C0
cs=0x1359;eip=0x0003c3; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), ax));	// 34738 cmp     [bp+var_E], ax ;~ 1359:03C3
cs=0x1359;eip=0x0003c6; 	J(JZ(loc_21f7a));	// 34739 jz      short loc_21F7A ;~ 1359:03C6
loc_21f38:
	// 6691 
cs=0x1359;eip=0x0003c8; 	T(MOV(al, video_flag6_is1));	// 34743 mov     al, video_flag6_is1 ;~ 1359:03C8
cs=0x1359;eip=0x0003cb; 	X(MOV(byte_454a4, al));	// 34744 mov     byte_454A4, al ;~ 1359:03CB
cs=0x1359;eip=0x0003ce; 	X(PUSH(dashbmp_y_copy));	// 34745 push    dashbmp_y_copy ;~ 1359:03CE
cs=0x1359;eip=0x0003d2; 	T(MOV(ax, 0x140));	// 34746 mov     ax, 140h ;~ 1359:03D2
cs=0x1359;eip=0x0003d5; 	X(PUSH(ax));	// 34747 push    ax ;~ 1359:03D5
cs=0x1359;eip=0x0003d6; 	T(MOV(ax, dashbmp_y_copy));	// 34748 mov     ax, dashbmp_y_copy ;~ 1359:03D6
cs=0x1359;eip=0x0003d9; 	T(CWD);	// 34749 cwd ;~ 1359:03D9
cs=0x1359;eip=0x0003da; 	T(MOV(cx, 6));	// 34750 mov     cx, 6 ;~ 1359:03DA
cs=0x1359;eip=0x0003dd; 	T(IDIV2(cx));	// 34751 idiv    cx ;~ 1359:03DD
cs=0x1359;eip=0x0003df; 	X(PUSH(ax));	// 34752 push    ax ;~ 1359:03DF
cs=0x1359;eip=0x0003e0; 	T(MOV(ax, 0x23));	// 34753 mov     ax, 23h ; '#' ;~ 1359:03E0
cs=0x1359;eip=0x0003e3; 	X(PUSH(ax));	// 34754 push    ax ;~ 1359:03E3
cs=0x1359;eip=0x0003e4; 	J(CALLF(set_projection,0));	// 34755 call    set_projection ;~ 1359:03E4
cs=0x1359;eip=0x0003e9; 	T(ADD(sp, 8));	// 34756 add     sp, 8 ;~ 1359:03E9
cs=0x1359;eip=0x0003ec; 	T(MOV(ax, roofbmpheight_copy));	// 34757 mov     ax, roofbmpheight_copy ;~ 1359:03EC
cs=0x1359;eip=0x0003ef; 	X(MOV(word_43938, ax));	// 34758 mov     word_43938, ax ;~ 1359:03EF
cs=0x1359;eip=0x0003f2; 	T(MOV(ax, dashbmp_y_copy));	// 34759 mov     ax, dashbmp_y_copy ;~ 1359:03F2
cs=0x1359;eip=0x0003f5; 	X(MOV(word_4393a, ax));	// 34760 mov     word_4393A, ax ;~ 1359:03F5
cs=0x1359;eip=0x0003f8; 	T(MOV(ax, roofbmpheight_copy));	// 34761 mov     ax, roofbmpheight_copy ;~ 1359:03F8
cs=0x1359;eip=0x0003fb; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 34762 mov     [bp+var_2], ax ;~ 1359:03FB
cs=0x1359;eip=0x0003fe; 	T(MOV(ax, dashbmp_y_copy));	// 34763 mov     ax, dashbmp_y_copy ;~ 1359:03FE
cs=0x1359;eip=0x000401; 	X(MOV(word_449ea, ax));	// 34764 mov     word_449EA, ax ;~ 1359:0401
cs=0x1359;eip=0x000404; 	T(MOV(ax, height_above_replaybar));	// 34765 mov     ax, height_above_replaybar ;~ 1359:0404
cs=0x1359;eip=0x000407; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 34766 mov     [bp+var_E], ax ;~ 1359:0407
loc_21f7a:
	// 6692 
cs=0x1359;eip=0x00040a; 	T(CMP(byte_454a4, 0));	// 34770 cmp     byte_454A4, 0 ;~ 1359:040A
cs=0x1359;eip=0x00040f; 	J(JNZ(loc_21f84));	// 34771 jnz     short loc_21F84 ;~ 1359:040F
cs=0x1359;eip=0x000411; 	J(JMP(loc_22052));	// 34772 jmp     loc_22052 ;~ 1359:0411
loc_21f84:
	// 6693 
cs=0x1359;eip=0x000414; 	T(MOV(al, byte_4432a));	// 34776 mov     al, byte_4432A ;~ 1359:0414
cs=0x1359;eip=0x000417; 	T(CBW);	// 34777 cbw ;~ 1359:0417
cs=0x1359;eip=0x000418; 	T(MOV(bx, ax));	// 34778 mov     bx, ax ;~ 1359:0418
cs=0x1359;eip=0x00041a; 	X(MOV(*((&byte_449d8)+bx), 0));	// 34779 mov     byte_449D8[bx], 0 ;~ 1359:041A
cs=0x1359;eip=0x00041f; 	T(CMP(byte_449e2, 0));	// 34780 cmp     byte_449E2, 0 ;~ 1359:041F
cs=0x1359;eip=0x000424; 	J(JZ(loc_21fb8));	// 34781 jz      short loc_21FB8 ;~ 1359:0424
cs=0x1359;eip=0x000426; 	X(PUSH(height_above_replaybar));	// 34782 push    height_above_replaybar ;~ 1359:0426
cs=0x1359;eip=0x00042a; 	X(PUSH(dashbmp_y_copy));	// 34783 push    dashbmp_y_copy ;~ 1359:042A
cs=0x1359;eip=0x00042e; 	T(MOV(ax, 0x140));	// 34784 mov     ax, 140h ;~ 1359:042E
cs=0x1359;eip=0x000431; 	X(PUSH(ax));	// 34785 push    ax ;~ 1359:0431
cs=0x1359;eip=0x000432; 	T(SUB(ax, ax));	// 34786 sub     ax, ax ;~ 1359:0432
cs=0x1359;eip=0x000434; 	X(PUSH(ax));	// 34787 push    ax ;~ 1359:0434
cs=0x1359;eip=0x000435; 	J(CALLF(sprite_set_1_size,0));	// 34788 call    sprite_set_1_size ;~ 1359:0435
cs=0x1359;eip=0x00043a; 	T(ADD(sp, 8));	// 34789 add     sp, 8 ;~ 1359:043A
cs=0x1359;eip=0x00043d; 	T(MOV(ax, 1));	// 34790 mov     ax, 1 ;~ 1359:043D
cs=0x1359;eip=0x000440; 	X(PUSH(ax));	// 34791 push    ax ;~ 1359:0440
cs=0x1359;eip=0x000441; 	X(PUSH(cs));	// 34792 push    cs ;~ 1359:0441
cs=0x1359;eip=0x000442; 	J(CALL(setup_car_shapes,0));	// 34793 call    near ptr setup_car_shapes ;~ 1359:0442
cs=0x1359;eip=0x000445; 	T(ADD(sp, 2));	// 34794 add     sp, 2 ;~ 1359:0445
loc_21fb8:
	// 6694 
cs=0x1359;eip=0x000448; 	T(CMP(replaybar_enabled, 0));	// 34797 cmp     replaybar_enabled, 0 ;~ 1359:0448
cs=0x1359;eip=0x00044d; 	J(JNZ(loc_21fc2));	// 34798 jnz     short loc_21FC2 ;~ 1359:044D
cs=0x1359;eip=0x00044f; 	J(JMP(loc_22064));	// 34799 jmp     loc_22064 ;~ 1359:044F
loc_21fc2:
	// 6695 
cs=0x1359;eip=0x000452; 	T(MOV(ax, 0x0C8));	// 34803 mov     ax, 0C8h ; 'È' ;~ 1359:0452
cs=0x1359;eip=0x000455; 	X(PUSH(ax));	// 34804 push    ax ;~ 1359:0455
cs=0x1359;eip=0x000456; 	T(SUB(ax, ax));	// 34805 sub     ax, ax ;~ 1359:0456
cs=0x1359;eip=0x000458; 	X(PUSH(ax));	// 34806 push    ax ;~ 1359:0458
cs=0x1359;eip=0x000459; 	T(MOV(ax, 0x140));	// 34807 mov     ax, 140h ;~ 1359:0459
cs=0x1359;eip=0x00045c; 	X(PUSH(ax));	// 34808 push    ax ;~ 1359:045C
cs=0x1359;eip=0x00045d; 	T(SUB(ax, ax));	// 34809 sub     ax, ax ;~ 1359:045D
cs=0x1359;eip=0x00045f; 	X(PUSH(ax));	// 34810 push    ax ;~ 1359:045F
cs=0x1359;eip=0x000460; 	J(CALLF(sprite_set_1_size,0));	// 34811 call    sprite_set_1_size ;~ 1359:0460
cs=0x1359;eip=0x000465; 	T(ADD(sp, 8));	// 34812 add     sp, 8 ;~ 1359:0465
cs=0x1359;eip=0x000468; 	X(PUSH(word_445d4));	// 34813 push    word_445D4 ;~ 1359:0468
cs=0x1359;eip=0x00046c; 	X(PUSH(word_445d4));	// 34814 push    word_445D4 ;~ 1359:046C
cs=0x1359;eip=0x000470; 	T(MOV(ax, 1));	// 34815 mov     ax, 1 ;~ 1359:0470
cs=0x1359;eip=0x000473; 	X(PUSH(ax));	// 34816 push    ax ;~ 1359:0473
cs=0x1359;eip=0x000474; 	X(PUSH(cs));	// 34817 push    cs ;~ 1359:0474
cs=0x1359;eip=0x000475; 	J(CALL(loop_game,0));	// 34818 call    near ptr loop_game ;~ 1359:0475
cs=0x1359;eip=0x000478; 	T(ADD(sp, 6));	// 34819 add     sp, 6 ;~ 1359:0478
cs=0x1359;eip=0x00047b; 	J(JMP(loc_22064));	// 34820 jmp     short loc_22064 ;~ 1359:047B
loc_21fee:
	// 6696 
cs=0x1359;eip=0x00047e; 	X(MOV(replaybar_enabled, 1));	// 34826 mov     replaybar_enabled, 1 ;~ 1359:047E
cs=0x1359;eip=0x000483; 	J(JMP(loc_21f0f));	// 34827 jmp     loc_21F0F ;~ 1359:0483
loc_21ff6:
	// 6697 
cs=0x1359;eip=0x000486; 	T(CMP(dashb_toggle, 0));	// 34831 cmp     dashb_toggle, 0 ;~ 1359:0486
cs=0x1359;eip=0x00048b; 	J(JZ(loc_22034));	// 34832 jz      short loc_22034 ;~ 1359:048B
cs=0x1359;eip=0x00048d; 	T(CMP(followopponentflag, 0));	// 34833 cmp     followOpponentFlag, 0 ;~ 1359:048D
cs=0x1359;eip=0x000492; 	J(JNZ(loc_22034));	// 34834 jnz     short loc_22034 ;~ 1359:0492
cs=0x1359;eip=0x000494; 	T(CMP(game_replay_mode, 2));	// 34835 cmp     game_replay_mode, 2 ;~ 1359:0494
cs=0x1359;eip=0x000499; 	J(JNZ(loc_2201a));	// 34836 jnz     short loc_2201A ;~ 1359:0499
cs=0x1359;eip=0x00049b; 	T(CMP(replaybar_enabled, 0));	// 34837 cmp     replaybar_enabled, 0 ;~ 1359:049B
cs=0x1359;eip=0x0004a0; 	J(JZ(loc_2201a));	// 34838 jz      short loc_2201A ;~ 1359:04A0
cs=0x1359;eip=0x0004a2; 	X(MOV(height_above_replaybar, 0x97));	// 34839 mov     height_above_replaybar, 97h ; '—' ; 151 = height of render area above the replay menu bar ;~ 1359:04A2
cs=0x1359;eip=0x0004a8; 	J(JMP(loc_22020));	// 34840 jmp     short loc_22020 ;~ 1359:04A8
loc_2201a:
	// 6698 
cs=0x1359;eip=0x0004aa; 	X(MOV(height_above_replaybar, 0x0C8));	// 34845 mov     height_above_replaybar, 0C8h ; 'È' ; 200 = height of render area without the replay menu bar ;~ 1359:04AA
loc_22020:
	// 6699 
cs=0x1359;eip=0x0004b0; 	X(MOV(byte_449e2, 1));	// 34848 mov     byte_449E2, 1 ;~ 1359:04B0
cs=0x1359;eip=0x0004b5; 	T(MOV(ax, roofbmpheight));	// 34849 mov     ax, roofbmpheight ;~ 1359:04B5
cs=0x1359;eip=0x0004b8; 	X(MOV(roofbmpheight_copy, ax));	// 34850 mov     roofbmpheight_copy, ax ;~ 1359:04B8
cs=0x1359;eip=0x0004bb; 	T(MOV(ax, dashbmp_y));	// 34851 mov     ax, dashbmp_y ;~ 1359:04BB
cs=0x1359;eip=0x0004be; 	X(MOV(dashbmp_y_copy, ax));	// 34852 mov     dashbmp_y_copy, ax ;~ 1359:04BE
cs=0x1359;eip=0x0004c1; 	J(JMP(loc_21f1f));	// 34853 jmp     loc_21F1F ;~ 1359:04C1
loc_22034:
	// 6700 
cs=0x1359;eip=0x0004c4; 	T(CMP(game_replay_mode, 2));	// 34858 cmp     game_replay_mode, 2 ;~ 1359:04C4
cs=0x1359;eip=0x0004c9; 	J(JZ(loc_2203e));	// 34859 jz      short loc_2203E ;~ 1359:04C9
cs=0x1359;eip=0x0004cb; 	J(JMP(loc_21f19));	// 34860 jmp     loc_21F19 ;~ 1359:04CB
loc_2203e:
	// 6701 
cs=0x1359;eip=0x0004ce; 	T(CMP(replaybar_enabled, 0));	// 34864 cmp     replaybar_enabled, 0 ;~ 1359:04CE
cs=0x1359;eip=0x0004d3; 	J(JNZ(loc_22048));	// 34865 jnz     short loc_22048 ;~ 1359:04D3
cs=0x1359;eip=0x0004d5; 	J(JMP(loc_21f19));	// 34866 jmp     loc_21F19 ;~ 1359:04D5
loc_22048:
	// 6702 
cs=0x1359;eip=0x0004d8; 	X(MOV(dashbmp_y_copy, 0x97));	// 34870 mov     dashbmp_y_copy, 97h ; '—' ;~ 1359:04D8
cs=0x1359;eip=0x0004de; 	J(JMP(loc_21f1f));	// 34871 jmp     loc_21F1F ;~ 1359:04DE
loc_22052:
	// 6703 
cs=0x1359;eip=0x0004e2; 	T(CMP(replaybar_enabled, 0));	// 34876 cmp     replaybar_enabled, 0 ;~ 1359:04E2
cs=0x1359;eip=0x0004e7; 	J(JNZ(loc_22064));	// 34877 jnz     short loc_22064 ;~ 1359:04E7
cs=0x1359;eip=0x0004e9; 	T(MOV(al, byte_4432a));	// 34878 mov     al, byte_4432A ;~ 1359:04E9
cs=0x1359;eip=0x0004ec; 	T(CBW);	// 34879 cbw ;~ 1359:04EC
cs=0x1359;eip=0x0004ed; 	T(MOV(bx, ax));	// 34880 mov     bx, ax ;~ 1359:04ED
cs=0x1359;eip=0x0004ef; 	X(MOV(*((&byte_449d8)+bx), 0));	// 34881 mov     byte_449D8[bx], 0 ;~ 1359:04EF
loc_22064:
	// 6704 
cs=0x1359;eip=0x0004f4; 	T(MOV(ax, offset(dseg,rect_windshield)));	// 34885 mov     ax, offset rect_windshield ;~ 1359:04F4
cs=0x1359;eip=0x0004f7; 	X(PUSH(ax));	// 34886 push    ax ;~ 1359:04F7
cs=0x1359;eip=0x0004f8; 	T(MOV(al, byte_44346));	// 34887 mov     al, byte_44346 ;~ 1359:04F8
cs=0x1359;eip=0x0004fb; 	T(CBW);	// 34888 cbw ;~ 1359:04FB
cs=0x1359;eip=0x0004fc; 	X(PUSH(ax));	// 34889 push    ax ;~ 1359:04FC
cs=0x1359;eip=0x0004fd; 	J(CALLF(update_frame,0));	// 34890 call    update_frame ;~ 1359:04FD
cs=0x1359;eip=0x000502; 	T(ADD(sp, 4));	// 34891 add     sp, 4 ;~ 1359:0502
cs=0x1359;eip=0x000505; 	T(CMP(dastbmp_y, 0));	// 34892 cmp     dastbmp_y, 0 ;~ 1359:0505
cs=0x1359;eip=0x00050a; 	J(JZ(loc_220db));	// 34893 jz      short loc_220DB ;~ 1359:050A
cs=0x1359;eip=0x00050c; 	T(CMP(byte_449e2, 0));	// 34894 cmp     byte_449E2, 0 ;~ 1359:050C
cs=0x1359;eip=0x000511; 	J(JZ(loc_220db));	// 34895 jz      short loc_220DB ;~ 1359:0511
cs=0x1359;eip=0x000513; 	T(CMP(timertestflag_copy, 0));	// 34896 cmp     timertestflag_copy, 0 ;~ 1359:0513
cs=0x1359;eip=0x000518; 	J(JZ(loc_220bb));	// 34897 jz      short loc_220BB ;~ 1359:0518
cs=0x1359;eip=0x00051a; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 34898 mov     [bp+var_A], 0 ;~ 1359:051A
cs=0x1359;eip=0x00051f; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x140));	// 34899 mov     [bp+var_8], 140h ;~ 1359:051F
cs=0x1359;eip=0x000524; 	T(MOV(ax, dastbmp_y));	// 34900 mov     ax, dastbmp_y ;~ 1359:0524
cs=0x1359;eip=0x000527; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 34901 mov     [bp+var_6], ax ;~ 1359:0527
cs=0x1359;eip=0x00052a; 	T(MOV(ax, dashbmp_y_copy));	// 34902 mov     ax, dashbmp_y_copy ;~ 1359:052A
cs=0x1359;eip=0x00052d; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 34903 mov     [bp+var_4], ax ;~ 1359:052D
cs=0x1359;eip=0x000530; 	T(CMP(rectptr_unk, 0));	// 34904 cmp     rectptr_unk, 0 ;~ 1359:0530
cs=0x1359;eip=0x000535; 	J(JZ(loc_220bb));	// 34905 jz      short loc_220BB ;~ 1359:0535
cs=0x1359;eip=0x000537; 	X(PUSH(rectptr_unk));	// 34906 push    rectptr_unk ;~ 1359:0537
cs=0x1359;eip=0x00053b; 	T(ax = bp+var_a);	// 34907 lea     ax, [bp+var_A] ;~ 1359:053B
cs=0x1359;eip=0x00053e; 	X(PUSH(ax));	// 34908 push    ax ;~ 1359:053E
cs=0x1359;eip=0x00053f; 	X(PUSH(rectptr_unk));	// 34909 push    rectptr_unk ;~ 1359:053F
cs=0x1359;eip=0x000543; 	J(CALLF(rect_union,0));	// 34910 call    rect_union ;~ 1359:0543
cs=0x1359;eip=0x000548; 	T(ADD(sp, 6));	// 34911 add     sp, 6 ;~ 1359:0548
loc_220bb:
	// 6705 
cs=0x1359;eip=0x00054b; 	X(PUSH(word_454a2));	// 34915 push    word_454A2 ;~ 1359:054B
cs=0x1359;eip=0x00054f; 	X(PUSH(dasmshapeptr));	// 34916 push    dasmshapeptr ;~ 1359:054F
cs=0x1359;eip=0x000553; 	J(CALLF(shape2d_render_bmp_as_mask,0));	// 34917 call    shape2d_render_bmp_as_mask ;~ 1359:0553
cs=0x1359;eip=0x000558; 	T(ADD(sp, 4));	// 34918 add     sp, 4 ;~ 1359:0558
cs=0x1359;eip=0x00055b; 	X(PUSH(dastseg));	// 34919 push    dastseg ;~ 1359:055B
cs=0x1359;eip=0x00055f; 	X(PUSH(dastbmp_y2));	// 34920 push    dastbmp_y2 ;~ 1359:055F
cs=0x1359;eip=0x000563; 	J(CALLF(shape2d_op_unk4,0));	// 34921 call    shape2d_op_unk4 ;~ 1359:0563
cs=0x1359;eip=0x000568; 	T(ADD(sp, 4));	// 34922 add     sp, 4 ;~ 1359:0568
loc_220db:
	// 6706 
cs=0x1359;eip=0x00056b; 	T(MOV(ax, offset(dseg,rect_windshield)));	// 34926 mov     ax, offset rect_windshield ;~ 1359:056B
cs=0x1359;eip=0x00056e; 	X(PUSH(ax));	// 34927 push    ax ;~ 1359:056E
cs=0x1359;eip=0x00056f; 	J(CALLF(sub_19f14,0));	// 34928 call    sub_19F14 ;~ 1359:056F
cs=0x1359;eip=0x000574; 	T(ADD(sp, 2));	// 34929 add     sp, 2 ;~ 1359:0574
cs=0x1359;eip=0x000577; 	T(CMP(byte_449e2, 0));	// 34930 cmp     byte_449E2, 0 ;~ 1359:0577
cs=0x1359;eip=0x00057c; 	J(JZ(loc_22126));	// 34931 jz      short loc_22126 ;~ 1359:057C
cs=0x1359;eip=0x00057e; 	X(PUSH(height_above_replaybar));	// 34932 push    height_above_replaybar ;~ 1359:057E
cs=0x1359;eip=0x000582; 	X(PUSH(dashbmp_y_copy));	// 34933 push    dashbmp_y_copy ;~ 1359:0582
cs=0x1359;eip=0x000586; 	T(MOV(ax, 0x140));	// 34934 mov     ax, 140h ;~ 1359:0586
cs=0x1359;eip=0x000589; 	X(PUSH(ax));	// 34935 push    ax ;~ 1359:0589
cs=0x1359;eip=0x00058a; 	T(SUB(ax, ax));	// 34936 sub     ax, ax ;~ 1359:058A
cs=0x1359;eip=0x00058c; 	X(PUSH(ax));	// 34937 push    ax ;~ 1359:058C
cs=0x1359;eip=0x00058d; 	J(CALLF(sprite_set_1_size,0));	// 34938 call    sprite_set_1_size ;~ 1359:058D
cs=0x1359;eip=0x000592; 	T(ADD(sp, 8));	// 34939 add     sp, 8 ;~ 1359:0592
cs=0x1359;eip=0x000595; 	T(MOV(ax, 2));	// 34940 mov     ax, 2 ;~ 1359:0595
cs=0x1359;eip=0x000598; 	X(PUSH(ax));	// 34941 push    ax ;~ 1359:0598
cs=0x1359;eip=0x000599; 	X(PUSH(cs));	// 34942 push    cs ;~ 1359:0599
cs=0x1359;eip=0x00059a; 	J(CALL(setup_car_shapes,0));	// 34943 call    near ptr setup_car_shapes ;~ 1359:059A
cs=0x1359;eip=0x00059d; 	T(ADD(sp, 2));	// 34944 add     sp, 2 ;~ 1359:059D
cs=0x1359;eip=0x0005a0; 	T(MOV(ax, 0x0C8));	// 34945 mov     ax, 0C8h ; 'È' ;~ 1359:05A0
cs=0x1359;eip=0x0005a3; 	X(PUSH(ax));	// 34946 push    ax ;~ 1359:05A3
cs=0x1359;eip=0x0005a4; 	T(SUB(ax, ax));	// 34947 sub     ax, ax ;~ 1359:05A4
cs=0x1359;eip=0x0005a6; 	X(PUSH(ax));	// 34948 push    ax ;~ 1359:05A6
cs=0x1359;eip=0x0005a7; 	T(MOV(ax, 0x140));	// 34949 mov     ax, 140h ;~ 1359:05A7
cs=0x1359;eip=0x0005aa; 	X(PUSH(ax));	// 34950 push    ax ;~ 1359:05AA
cs=0x1359;eip=0x0005ab; 	T(SUB(ax, ax));	// 34951 sub     ax, ax ;~ 1359:05AB
cs=0x1359;eip=0x0005ad; 	X(PUSH(ax));	// 34952 push    ax ;~ 1359:05AD
cs=0x1359;eip=0x0005ae; 	J(CALLF(sprite_set_1_size,0));	// 34953 call    sprite_set_1_size ;~ 1359:05AE
cs=0x1359;eip=0x0005b3; 	T(ADD(sp, 8));	// 34954 add     sp, 8 ;~ 1359:05B3
loc_22126:
	// 6707 
cs=0x1359;eip=0x0005b6; 	T(CMP(byte_454a4, 0));	// 34957 cmp     byte_454A4, 0 ;~ 1359:05B6
cs=0x1359;eip=0x0005bb; 	J(JZ(loc_22131));	// 34958 jz      short loc_22131 ;~ 1359:05BB
cs=0x1359;eip=0x0005bd; 	X(DEC(byte_454a4));	// 34959 dec     byte_454A4 ;~ 1359:05BD
loc_22131:
	// 6708 
cs=0x1359;eip=0x0005c1; 	T(CMP(video_flag5_is0, 0));	// 34962 cmp     video_flag5_is0, 0 ;~ 1359:05C1
cs=0x1359;eip=0x0005c6; 	J(JZ(loc_22152));	// 34963 jz      short loc_22152 ;~ 1359:05C6
cs=0x1359;eip=0x0005c8; 	J(CALLF(mouse_draw_opaque_check,0));	// 34964 call    mouse_draw_opaque_check ;~ 1359:05C8
cs=0x1359;eip=0x0005cd; 	J(CALLF(setup_mcgawnd1,0));	// 34965 call    setup_mcgawnd1 ;~ 1359:05CD
cs=0x1359;eip=0x0005d2; 	X(XOR(byte_44346, 1));	// 34966 xor     byte_44346, 1 ;~ 1359:05D2
cs=0x1359;eip=0x0005d7; 	T(MOV(al, byte_44346));	// 34967 mov     al, byte_44346 ;~ 1359:05D7
cs=0x1359;eip=0x0005da; 	X(MOV(byte_4432a, al));	// 34968 mov     byte_4432A, al ;~ 1359:05DA
cs=0x1359;eip=0x0005dd; 	J(CALLF(mouse_draw_transparent_check,0));	// 34969 call    mouse_draw_transparent_check ;~ 1359:05DD
loc_22152:
	// 6709 
cs=0x1359;eip=0x0005e2; 	T(CMP(game_replay_mode, 1));	// 34972 cmp     game_replay_mode, 1 ;~ 1359:05E2
cs=0x1359;eip=0x0005e7; 	J(JNZ(loc_2217d));	// 34973 jnz     short loc_2217D ;~ 1359:05E7
cs=0x1359;eip=0x0005e9; 	T(CMP(byte_4393c, 0));	// 34974 cmp     byte_4393C, 0 ;~ 1359:05E9
cs=0x1359;eip=0x0005ee; 	J(JNZ(loc_2217d));	// 34975 jnz     short loc_2217D ;~ 1359:05EE
cs=0x1359;eip=0x0005f0; 	X(MOV(game_replay_mode, 0));	// 34976 mov     game_replay_mode, 0 ;~ 1359:05F0
cs=0x1359;eip=0x0005f5; 	T(MOV(ax, framespersec2));	// 34977 mov     ax, framespersec2 ;~ 1359:05F5
cs=0x1359;eip=0x0005f8; 	X(MOV(framespersec, ax));	// 34978 mov     framespersec, ax ;~ 1359:05F8
cs=0x1359;eip=0x0005fb; 	T(MOV(al, *(db*)(((db*)&framespersec2))));	// 34979 mov     al, byte ptr framespersec2 ;~ 1359:05FB
cs=0x1359;eip=0x0005fe; 	X(MOV(byte_449ba, al));	// 34980 mov     byte_449BA, al ;~ 1359:05FE
cs=0x1359;eip=0x000601; 	T(MOV(ax, 0x0FFFF));	// 34981 mov     ax, 0FFFFh ;~ 1359:0601
cs=0x1359;eip=0x000604; 	X(PUSH(ax));	// 34982 push    ax ;~ 1359:0604
cs=0x1359;eip=0x000605; 	J(CALLF(init_game_state,0));	// 34983 call    init_game_state ;~ 1359:0605
cs=0x1359;eip=0x00060a; 	T(ADD(sp, 2));	// 34984 add     sp, 2 ;~ 1359:060A
loc_2217d:
	// 6710 
cs=0x1359;eip=0x00060d; 	T(CMP(idle_expired, 0));	// 34988 cmp     idle_expired, 0 ;~ 1359:060D
cs=0x1359;eip=0x000612; 	J(JZ(loc_221aa));	// 34989 jz      short loc_221AA ;~ 1359:0612
cs=0x1359;eip=0x000614; 	J(CALLF(kb_get_char,0));	// 34990 call    kb_get_char ;~ 1359:0614
cs=0x1359;eip=0x000619; 	T(OR(ax, ax));	// 34991 or      ax, ax ;~ 1359:0619
cs=0x1359;eip=0x00061b; 	J(JZ(loc_22190));	// 34992 jz      short loc_22190 ;~ 1359:061B
cs=0x1359;eip=0x00061d; 	J(JMP(loc_22298));	// 34993 jmp     loc_22298 ;~ 1359:061D
loc_22190:
	// 6711 
cs=0x1359;eip=0x000620; 	T(CMP(byte_449da, 0));	// 34997 cmp     byte_449DA, 0 ;~ 1359:0620
cs=0x1359;eip=0x000625; 	J(JZ(loc_2219a));	// 34998 jz      short loc_2219A ;~ 1359:0625
cs=0x1359;eip=0x000627; 	J(JMP(loc_22298));	// 34999 jmp     loc_22298 ;~ 1359:0627
loc_2219a:
	// 6712 
cs=0x1359;eip=0x00062a; 	J(CALLF(get_kb_or_joy_flags,0));	// 35003 call    get_kb_or_joy_flags ;~ 1359:062A
cs=0x1359;eip=0x00062f; 	T(OR(ax, ax));	// 35004 or      ax, ax ;~ 1359:062F
cs=0x1359;eip=0x000631; 	J(JNZ(loc_221a6));	// 35005 jnz     short loc_221A6 ;~ 1359:0631
cs=0x1359;eip=0x000633; 	J(JMP(loc_21da2));	// 35006 jmp     loc_21DA2 ;~ 1359:0633
loc_221a6:
	// 6713 
cs=0x1359;eip=0x000636; 	J(JMP(loc_22298));	// 35010 jmp     loc_22298 ;~ 1359:0636
loc_221aa:
	// 6714 
cs=0x1359;eip=0x00063a; 	T(CMP(byte_449da, 0));	// 35015 cmp     byte_449DA, 0 ;~ 1359:063A
cs=0x1359;eip=0x00063f; 	J(JZ(loc_22208));	// 35016 jz      short loc_22208 ;~ 1359:063F
cs=0x1359;eip=0x000641; 	T(CMP(game_replay_mode, 0));	// 35017 cmp     game_replay_mode, 0 ;~ 1359:0641
cs=0x1359;eip=0x000646; 	J(JNZ(loc_221c2));	// 35018 jnz     short loc_221C2 ;~ 1359:0646
cs=0x1359;eip=0x000648; 	T(CMP(byte_4488a, 4));	// 35019 cmp     byte_4488A, 4 ;~ 1359:0648
cs=0x1359;eip=0x00064d; 	J(JZ(loc_221c2));	// 35020 jz      short loc_221C2 ;~ 1359:064D
cs=0x1359;eip=0x00064f; 	J(JMP(loc_22298));	// 35021 jmp     loc_22298 ;~ 1359:064F
loc_221c2:
	// 6715 
cs=0x1359;eip=0x000652; 	T(CMP(byte_449da, 2));	// 35026 cmp     byte_449DA, 2 ;~ 1359:0652
cs=0x1359;eip=0x000657; 	J(JNZ(loc_221cc));	// 35027 jnz     short loc_221CC ;~ 1359:0657
cs=0x1359;eip=0x000659; 	J(JMP(loc_22298));	// 35028 jmp     loc_22298 ;~ 1359:0659
loc_221cc:
	// 6716 
cs=0x1359;eip=0x00065c; 	X(MOV(byte_449da, 0));	// 35032 mov     byte_449DA, 0 ;~ 1359:065C
cs=0x1359;eip=0x000661; 	X(MOV(game_replay_mode, 2));	// 35033 mov     game_replay_mode, 2 ;~ 1359:0661
cs=0x1359;eip=0x000666; 	T(SUB(ax, ax));	// 35034 sub     ax, ax ;~ 1359:0666
cs=0x1359;eip=0x000668; 	X(PUSH(ax));	// 35035 push    ax ;~ 1359:0668
cs=0x1359;eip=0x000669; 	X(PUSH(cs));	// 35036 push    cs ;~ 1359:0669
cs=0x1359;eip=0x00066a; 	J(CALL(mouse_minmax_position,0));	// 35037 call    near ptr mouse_minmax_position ;~ 1359:066A
cs=0x1359;eip=0x00066d; 	T(ADD(sp, 2));	// 35038 add     sp, 2 ;~ 1359:066D
cs=0x1359;eip=0x000670; 	T(SUB(ax, ax));	// 35039 sub     ax, ax ;~ 1359:0670
cs=0x1359;eip=0x000672; 	X(PUSH(ax));	// 35040 push    ax ;~ 1359:0672
cs=0x1359;eip=0x000673; 	X(PUSH(ax));	// 35041 push    ax ;~ 1359:0673
cs=0x1359;eip=0x000674; 	X(PUSH(ax));	// 35042 push    ax ;~ 1359:0674
cs=0x1359;eip=0x000675; 	X(PUSH(cs));	// 35043 push    cs ;~ 1359:0675
cs=0x1359;eip=0x000676; 	J(CALL(loop_game,0));	// 35044 call    near ptr loop_game ;~ 1359:0676
cs=0x1359;eip=0x000679; 	T(ADD(sp, 6));	// 35045 add     sp, 6 ;~ 1359:0679
cs=0x1359;eip=0x00067c; 	T(SUB(ax, ax));	// 35046 sub     ax, ax ;~ 1359:067C
cs=0x1359;eip=0x00067e; 	X(PUSH(ax));	// 35047 push    ax ;~ 1359:067E
cs=0x1359;eip=0x00067f; 	T(MOV(ax, 4));	// 35048 mov     ax, 4 ;~ 1359:067F
cs=0x1359;eip=0x000682; 	X(PUSH(ax));	// 35049 push    ax ;~ 1359:0682
cs=0x1359;eip=0x000683; 	T(MOV(ax, 2));	// 35050 mov     ax, 2 ;~ 1359:0683
cs=0x1359;eip=0x000686; 	X(PUSH(ax));	// 35051 push    ax ;~ 1359:0686
cs=0x1359;eip=0x000687; 	X(PUSH(cs));	// 35052 push    cs ;~ 1359:0687
cs=0x1359;eip=0x000688; 	J(CALL(loop_game,0));	// 35053 call    near ptr loop_game ;~ 1359:0688
cs=0x1359;eip=0x00068b; 	T(ADD(sp, 6));	// 35054 add     sp, 6 ;~ 1359:068B
cs=0x1359;eip=0x00068e; 	X(MOV(is_in_replay, 1));	// 35055 mov     is_in_replay, 1 ;~ 1359:068E
cs=0x1359;eip=0x000693; 	J(CALLF(audio_carstate,0));	// 35056 call    audio_carstate ;~ 1359:0693
loc_22208:
	// 6717 
cs=0x1359;eip=0x000698; 	T(CMP(game_replay_mode, 2));	// 35059 cmp     game_replay_mode, 2 ;~ 1359:0698
cs=0x1359;eip=0x00069d; 	J(JNZ(loc_22222));	// 35060 jnz     short loc_22222 ;~ 1359:069D
cs=0x1359;eip=0x00069f; 	T(SUB(ax, ax));	// 35061 sub     ax, ax ;~ 1359:069F
cs=0x1359;eip=0x0006a1; 	X(PUSH(ax));	// 35062 push    ax ;~ 1359:06A1
cs=0x1359;eip=0x0006a2; 	X(PUSH(ax));	// 35063 push    ax ;~ 1359:06A2
cs=0x1359;eip=0x0006a3; 	T(MOV(ax, 3));	// 35064 mov     ax, 3 ;~ 1359:06A3
cs=0x1359;eip=0x0006a6; 	X(PUSH(ax));	// 35065 push    ax ;~ 1359:06A6
cs=0x1359;eip=0x0006a7; 	X(PUSH(cs));	// 35066 push    cs ;~ 1359:06A7
cs=0x1359;eip=0x0006a8; 	J(CALL(loop_game,0));	// 35067 call    near ptr loop_game ;~ 1359:06A8
cs=0x1359;eip=0x0006ab; 	T(ADD(sp, 6));	// 35068 add     sp, 6 ;~ 1359:06AB
cs=0x1359;eip=0x0006ae; 	J(JMP(loc_21da2));	// 35069 jmp     loc_21DA2 ;~ 1359:06AE
loc_22222:
	// 6718 
cs=0x1359;eip=0x0006b2; 	J(CALLF(kb_get_char,0));	// 35075 call    kb_get_char ;~ 1359:06B2
cs=0x1359;eip=0x0006b7; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 35076 mov     [bp+var_12], ax ;~ 1359:06B7
cs=0x1359;eip=0x0006ba; 	T(OR(ax, ax));	// 35077 or      ax, ax ;~ 1359:06BA
cs=0x1359;eip=0x0006bc; 	J(JZ(loc_22236));	// 35078 jz      short loc_22236 ;~ 1359:06BC
cs=0x1359;eip=0x0006be; 	X(PUSH(ax));	// 35079 push    ax ;~ 1359:06BE
cs=0x1359;eip=0x0006bf; 	X(PUSH(cs));	// 35080 push    cs ;~ 1359:06BF
cs=0x1359;eip=0x0006c0; 	J(CALL(handle_ingame_kb_shortcuts,0));	// 35081 call    near ptr handle_ingame_kb_shortcuts ;~ 1359:06C0
cs=0x1359;eip=0x0006c3; 	T(ADD(sp, 2));	// 35082 add     sp, 2 ;~ 1359:06C3
loc_22236:
	// 6719 
cs=0x1359;eip=0x0006c6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 35085 mov     ax, [bp+var_12] ;~ 1359:06C6
cs=0x1359;eip=0x0006c9; 	T(CMP(ax, 0x4800));	// 35086 cmp     ax, 4800h ;~ 1359:06C9
cs=0x1359;eip=0x0006cc; 	J(JZ(loc_22222));	// 35087 jz      short loc_22222 ;~ 1359:06CC
cs=0x1359;eip=0x0006ce; 	T(CMP(ax, 0x4B00));	// 35088 cmp     ax, 4B00h ;~ 1359:06CE
cs=0x1359;eip=0x0006d1; 	J(JZ(loc_22222));	// 35089 jz      short loc_22222 ;~ 1359:06D1
cs=0x1359;eip=0x0006d3; 	T(CMP(ax, 0x4D00));	// 35090 cmp     ax, 4D00h ;~ 1359:06D3
cs=0x1359;eip=0x0006d6; 	J(JZ(loc_22222));	// 35091 jz      short loc_22222 ;~ 1359:06D6
cs=0x1359;eip=0x0006d8; 	T(CMP(ax, 0x5000));	// 35092 cmp     ax, 5000h ;~ 1359:06D8
cs=0x1359;eip=0x0006db; 	J(JZ(loc_22222));	// 35093 jz      short loc_22222 ;~ 1359:06DB
cs=0x1359;eip=0x0006dd; 	T(CMP(game_replay_mode, 1));	// 35094 cmp     game_replay_mode, 1 ;~ 1359:06DD
cs=0x1359;eip=0x0006e2; 	J(JZ(loc_22257));	// 35095 jz      short loc_22257 ;~ 1359:06E2
cs=0x1359;eip=0x0006e4; 	J(JMP(loc_21da2));	// 35096 jmp     loc_21DA2 ;~ 1359:06E4
loc_22257:
	// 6720 
cs=0x1359;eip=0x0006e7; 	T(MOV(ax, offset(dseg,mouse_ypos)));	// 35100 mov     ax, offset mouse_ypos ;~ 1359:06E7
cs=0x1359;eip=0x0006ea; 	X(PUSH(ax));	// 35101 push    ax ;~ 1359:06EA
cs=0x1359;eip=0x0006eb; 	T(MOV(ax, offset(dseg,mouse_xpos)));	// 35102 mov     ax, offset mouse_xpos ;~ 1359:06EB
cs=0x1359;eip=0x0006ee; 	X(PUSH(ax));	// 35103 push    ax ;~ 1359:06EE
cs=0x1359;eip=0x0006ef; 	T(MOV(ax, offset(dseg,mouse_butstate)));	// 35104 mov     ax, offset mouse_butstate ;~ 1359:06EF
cs=0x1359;eip=0x0006f2; 	X(PUSH(ax));	// 35105 push    ax ;~ 1359:06F2
cs=0x1359;eip=0x0006f3; 	J(CALLF(mouse_get_state,0));	// 35106 call    mouse_get_state ;~ 1359:06F3
cs=0x1359;eip=0x0006f8; 	T(ADD(sp, 6));	// 35107 add     sp, 6 ;~ 1359:06F8
cs=0x1359;eip=0x0006fb; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 3));	// 35108 test    byte ptr mouse_butstate, 3 ;~ 1359:06FB
cs=0x1359;eip=0x000700; 	J(JNZ(loc_2227e));	// 35109 jnz     short loc_2227E ;~ 1359:0700
cs=0x1359;eip=0x000702; 	J(CALLF(get_kb_or_joy_flags,0));	// 35110 call    get_kb_or_joy_flags ;~ 1359:0702
cs=0x1359;eip=0x000707; 	T(TEST(al, 0x30));	// 35111 test    al, 30h ;~ 1359:0707
cs=0x1359;eip=0x000709; 	J(JNZ(loc_2227e));	// 35112 jnz     short loc_2227E ;~ 1359:0709
cs=0x1359;eip=0x00070b; 	J(JMP(loc_21da2));	// 35113 jmp     loc_21DA2 ;~ 1359:070B
loc_2227e:
	// 6721 
cs=0x1359;eip=0x00070e; 	X(MOV(game_replay_mode, 0));	// 35118 mov     game_replay_mode, 0 ;~ 1359:070E
cs=0x1359;eip=0x000713; 	X(MOV(byte_4393c, 0));	// 35119 mov     byte_4393C, 0 ;~ 1359:0713
cs=0x1359;eip=0x000718; 	T(MOV(ax, framespersec2));	// 35120 mov     ax, framespersec2 ;~ 1359:0718
cs=0x1359;eip=0x00071b; 	X(MOV(framespersec, ax));	// 35121 mov     framespersec, ax ;~ 1359:071B
cs=0x1359;eip=0x00071e; 	T(MOV(al, *(db*)(((db*)&framespersec2))));	// 35122 mov     al, byte ptr framespersec2 ;~ 1359:071E
cs=0x1359;eip=0x000721; 	X(MOV(byte_449ba, al));	// 35123 mov     byte_449BA, al ;~ 1359:0721
cs=0x1359;eip=0x000724; 	J(JMP(loc_21c5e));	// 35124 jmp     loc_21C5E ;~ 1359:0724
loc_22298:
	// 6722 
cs=0x1359;eip=0x000728; 	T(CMP(video_flag5_is0, 0));	// 35130 cmp     video_flag5_is0, 0 ;~ 1359:0728
cs=0x1359;eip=0x00072d; 	J(JZ(loc_222d3));	// 35131 jz      short loc_222D3 ;~ 1359:072D
cs=0x1359;eip=0x00072f; 	J(CALLF(get_0,0));	// 35132 call    get_0 ;~ 1359:072F
cs=0x1359;eip=0x000734; 	T(OR(ax, ax));	// 35133 or      ax, ax ;~ 1359:0734
cs=0x1359;eip=0x000736; 	J(JZ(loc_222d3));	// 35134 jz      short loc_222D3 ;~ 1359:0736
cs=0x1359;eip=0x000738; 	J(CALLF(mouse_draw_opaque_check,0));	// 35135 call    mouse_draw_opaque_check ;~ 1359:0738
cs=0x1359;eip=0x00073d; 	J(CALLF(setup_mcgawnd2,0));	// 35136 call    setup_mcgawnd2 ;~ 1359:073D
cs=0x1359;eip=0x000742; 	T(SUB(ax, ax));	// 35137 sub     ax, ax ;~ 1359:0742
cs=0x1359;eip=0x000744; 	X(PUSH(ax));	// 35138 push    ax ;~ 1359:0744
cs=0x1359;eip=0x000745; 	T(MOV(ax, 0x0C8));	// 35139 mov     ax, 0C8h ; 'È'  ; 200 ;~ 1359:0745
cs=0x1359;eip=0x000748; 	X(PUSH(ax));	// 35140 push    ax ;~ 1359:0748
cs=0x1359;eip=0x000749; 	T(MOV(ax, 0x140));	// 35141 mov     ax, 140h        ; 320 ;~ 1359:0749
cs=0x1359;eip=0x00074c; 	X(PUSH(ax));	// 35142 push    ax ;~ 1359:074C
cs=0x1359;eip=0x00074d; 	T(SUB(ax, ax));	// 35143 sub     ax, ax ;~ 1359:074D
cs=0x1359;eip=0x00074f; 	X(PUSH(ax));	// 35144 push    ax ;~ 1359:074F
cs=0x1359;eip=0x000750; 	X(PUSH(ax));	// 35145 push    ax ;~ 1359:0750
cs=0x1359;eip=0x000751; 	J(CALLF(sub_35c4e,0));	// 35146 call    sub_35C4E ;~ 1359:0751
cs=0x1359;eip=0x000756; 	T(ADD(sp, 0x0A));	// 35147 add     sp, 0Ah ;~ 1359:0756
cs=0x1359;eip=0x000759; 	J(CALLF(setup_mcgawnd1,0));	// 35148 call    setup_mcgawnd1 ;~ 1359:0759
cs=0x1359;eip=0x00075e; 	J(CALLF(mouse_draw_transparent_check,0));	// 35149 call    mouse_draw_transparent_check ;~ 1359:075E
loc_222d3:
	// 6723 
cs=0x1359;eip=0x000763; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 35153 call    sprite_copy_2_to_1_2 ;~ 1359:0763
cs=0x1359;eip=0x000768; 	X(MOV(is_in_replay, 1));	// 35154 mov     is_in_replay, 1 ;~ 1359:0768
cs=0x1359;eip=0x00076d; 	J(CALLF(audio_carstate,0));	// 35155 call    audio_carstate ;~ 1359:076D
cs=0x1359;eip=0x000772; 	J(CALLF(audio_remove_driver_timer,0));	// 35156 call    audio_remove_driver_timer ;~ 1359:0772
cs=0x1359;eip=0x000777; 	T(CMP(game_replay_mode, 0));	// 35157 cmp     game_replay_mode, 0 ;~ 1359:0777
cs=0x1359;eip=0x00077c; 	J(JZ(loc_222f1));	// 35158 jz      short loc_222F1 ;~ 1359:077C
cs=0x1359;eip=0x00077e; 	J(JMP(loc_223cd));	// 35159 jmp     loc_223CD ;~ 1359:077E
loc_222f1:
	// 6724 
cs=0x1359;eip=0x000781; 	T(CMP(byte_449aa, 0));	// 35163 cmp     byte_449AA, 0 ;~ 1359:0781
cs=0x1359;eip=0x000786; 	J(JNZ(loc_222fb));	// 35164 jnz     short loc_222FB ;~ 1359:0786
cs=0x1359;eip=0x000788; 	J(JMP(loc_223cd));	// 35165 jmp     loc_223CD ;~ 1359:0788
loc_222fb:
	// 6725 
cs=0x1359;eip=0x00078b; 	T(CMP(byte_4477f, 0));	// 35169 cmp     byte_4477F, 0 ;~ 1359:078B
cs=0x1359;eip=0x000790; 	J(JZ(loc_22305));	// 35170 jz      short loc_22305 ;~ 1359:0790
cs=0x1359;eip=0x000792; 	J(JMP(loc_223cd));	// 35171 jmp     loc_223CD ;~ 1359:0792
loc_22305:
	// 6726 
cs=0x1359;eip=0x000795; 	T(SUB(ax, ax));	// 35175 sub     ax, ax ;~ 1359:0795
cs=0x1359;eip=0x000797; 	X(PUSH(ax));	// 35176 push    ax ;~ 1359:0797
cs=0x1359;eip=0x000798; 	T(ax = bp+var_16);	// 35177 lea     ax, [bp+var_16] ;~ 1359:0798
cs=0x1359;eip=0x00079b; 	X(PUSH(ax));	// 35178 push    ax ;~ 1359:079B
cs=0x1359;eip=0x00079c; 	X(PUSH(performgraphcolor));	// 35179 push    performGraphColor ;~ 1359:079C
cs=0x1359;eip=0x0007a0; 	T(MOV(ax, 0x50));	// 35180 mov     ax, 50h ; 'P' ;~ 1359:07A0
cs=0x1359;eip=0x0007a3; 	X(PUSH(ax));	// 35181 push    ax ;~ 1359:07A3
cs=0x1359;eip=0x0007a4; 	T(MOV(ax, 0x0FFFF));	// 35182 mov     ax, 0FFFFh ;~ 1359:07A4
cs=0x1359;eip=0x0007a7; 	X(PUSH(ax));	// 35183 push    ax ;~ 1359:07A7
cs=0x1359;eip=0x0007a8; 	T(MOV(ax, offset(dseg,acop)));	// 35184 mov     ax, offset aCop ; "cop" ;~ 1359:07A8
cs=0x1359;eip=0x0007ab; 	X(PUSH(ax));	// 35185 push    ax ;~ 1359:07AB
cs=0x1359;eip=0x0007ac; 	X(PUSH(word_449a2));	// 35186 push    word_449A2 ;~ 1359:07AC
cs=0x1359;eip=0x0007b0; 	X(PUSH(gameresptr));	// 35187 push    gameresptr ;~ 1359:07B0
cs=0x1359;eip=0x0007b4; 	J(CALLF(locate_text_res,0));	// 35188 call    locate_text_res ;~ 1359:07B4
cs=0x1359;eip=0x0007b9; 	T(ADD(sp, 6));	// 35189 add     sp, 6 ;~ 1359:07B9
cs=0x1359;eip=0x0007bc; 	X(PUSH(dx));	// 35190 push    dx ;~ 1359:07BC
cs=0x1359;eip=0x0007bd; 	X(PUSH(ax));	// 35191 push    ax ;~ 1359:07BD
cs=0x1359;eip=0x0007be; 	T(SUB(ax, ax));	// 35192 sub     ax, ax ;~ 1359:07BE
cs=0x1359;eip=0x0007c0; 	X(PUSH(ax));	// 35193 push    ax ;~ 1359:07C0
cs=0x1359;eip=0x0007c1; 	T(MOV(ax, 3));	// 35194 mov     ax, 3 ;~ 1359:07C1
cs=0x1359;eip=0x0007c4; 	X(PUSH(ax));	// 35195 push    ax ;~ 1359:07C4
cs=0x1359;eip=0x0007c5; 	J(CALLF(show_dialog,0));	// 35196 call    show_dialog ;~ 1359:07C5
cs=0x1359;eip=0x0007ca; 	T(ADD(sp, 0x12));	// 35197 add     sp, 12h ;~ 1359:07CA
cs=0x1359;eip=0x0007cd; 	X(MOV(*(db*)(((db*)&word_45d3e)), 1));	// 35198 mov     byte ptr word_45D3E, 1 ;~ 1359:07CD
cs=0x1359;eip=0x0007d2; 	T(MOV(si, framespersec));	// 35199 mov     si, framespersec ;~ 1359:07D2
cs=0x1359;eip=0x0007d6; 	T(DEC(si));	// 35200 dec     si ;~ 1359:07D6
loc_22347:
	// 6727 
cs=0x1359;eip=0x0007d7; 	T(MOV(ax, 1));	// 35203 mov     ax, 1 ;~ 1359:07D7
cs=0x1359;eip=0x0007da; 	X(PUSH(ax));	// 35204 push    ax ;~ 1359:07DA
cs=0x1359;eip=0x0007db; 	X(PUSH(cs));	// 35205 push    cs ;~ 1359:07DB
cs=0x1359;eip=0x0007dc; 	J(CALL(replay_unk2,0));	// 35206 call    near ptr replay_unk2 ;~ 1359:07DC
cs=0x1359;eip=0x0007df; 	T(ADD(sp, 2));	// 35207 add     sp, 2 ;~ 1359:07DF
cs=0x1359;eip=0x0007e2; 	J(CALLF(update_gamestate,0));	// 35208 call    update_gamestate ;~ 1359:07E2
cs=0x1359;eip=0x0007e7; 	T(INC(si));	// 35209 inc     si ;~ 1359:07E7
cs=0x1359;eip=0x0007e8; 	T(MOV(ax, framespersec));	// 35210 mov     ax, framespersec ;~ 1359:07E8
cs=0x1359;eip=0x0007eb; 	T(CMP(si, ax));	// 35211 cmp     si, ax ;~ 1359:07EB
cs=0x1359;eip=0x0007ed; 	J(JNZ(loc_2239f));	// 35212 jnz     short loc_2239F ;~ 1359:07ED
cs=0x1359;eip=0x0007ef; 	T(SUB(si, si));	// 35213 sub     si, si ;~ 1359:07EF
cs=0x1359;eip=0x0007f1; 	T(MOV(ax, 1));	// 35214 mov     ax, 1 ;~ 1359:07F1
cs=0x1359;eip=0x0007f4; 	X(PUSH(ax));	// 35215 push    ax              ; int ;~ 1359:07F4
cs=0x1359;eip=0x0007f5; 	T(MOV(ax, word_445d4));	// 35216 mov     ax, word_445D4 ;~ 1359:07F5
cs=0x1359;eip=0x0007f8; 	T(ADD(ax, elapsed_time1));	// 35217 add     ax, elapsed_time1 ;~ 1359:07F8
cs=0x1359;eip=0x0007fc; 	X(PUSH(ax));	// 35218 push    ax ;~ 1359:07FC
cs=0x1359;eip=0x0007fd; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 35219 mov     ax, offset resID_byte1 ;~ 1359:07FD
cs=0x1359;eip=0x000800; 	X(PUSH(ax));	// 35220 push    ax              ; char * ;~ 1359:0800
cs=0x1359;eip=0x000801; 	J(CALLF(format_frame_as_string,0));	// 35221 call    format_frame_as_string ;~ 1359:0801
cs=0x1359;eip=0x000806; 	T(ADD(sp, 6));	// 35222 add     sp, 6 ;~ 1359:0806
cs=0x1359;eip=0x000809; 	J(CALLF(mouse_draw_opaque_check,0));	// 35223 call    mouse_draw_opaque_check ;~ 1359:0809
cs=0x1359;eip=0x00080e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 35224 push    [bp+var_14] ;~ 1359:080E
cs=0x1359;eip=0x000811; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 35225 mov     ax, offset resID_byte1 ;~ 1359:0811
cs=0x1359;eip=0x000814; 	X(PUSH(ax));	// 35226 push    ax ;~ 1359:0814
cs=0x1359;eip=0x000815; 	J(CALLF(font_op2_alt,0));	// 35227 call    font_op2_alt ;~ 1359:0815
cs=0x1359;eip=0x00081a; 	T(ADD(sp, 2));	// 35228 add     sp, 2 ;~ 1359:081A
cs=0x1359;eip=0x00081d; 	X(PUSH(ax));	// 35229 push    ax ;~ 1359:081D
cs=0x1359;eip=0x00081e; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 35230 mov     ax, offset resID_byte1 ;~ 1359:081E
cs=0x1359;eip=0x000821; 	X(PUSH(ax));	// 35231 push    ax ;~ 1359:0821
cs=0x1359;eip=0x000822; 	J(CALLF(sub_345bc,0));	// 35232 call    sub_345BC ;~ 1359:0822
cs=0x1359;eip=0x000827; 	T(ADD(sp, 6));	// 35233 add     sp, 6 ;~ 1359:0827
cs=0x1359;eip=0x00082a; 	J(CALLF(mouse_draw_transparent_check,0));	// 35234 call    mouse_draw_transparent_check ;~ 1359:082A
loc_2239f:
	// 6728 
cs=0x1359;eip=0x00082f; 	T(MOV(ax, 1));	// 35237 mov     ax, 1 ;~ 1359:082F
cs=0x1359;eip=0x000832; 	X(PUSH(ax));	// 35238 push    ax ;~ 1359:0832
cs=0x1359;eip=0x000833; 	J(CALLF(input_do_checking,0));	// 35239 call    input_do_checking ;~ 1359:0833
cs=0x1359;eip=0x000838; 	T(ADD(sp, 2));	// 35240 add     sp, 2 ;~ 1359:0838
cs=0x1359;eip=0x00083b; 	T(CMP(ax, 0x1B));	// 35241 cmp     ax, 1Bh ;~ 1359:083B
cs=0x1359;eip=0x00083e; 	J(JZ(loc_223cd));	// 35242 jz      short loc_223CD ;~ 1359:083E
cs=0x1359;eip=0x000840; 	T(CMP(byte_4477f, 0));	// 35243 cmp     byte_4477F, 0 ;~ 1359:0840
cs=0x1359;eip=0x000845; 	J(JNZ(loc_223cd));	// 35244 jnz     short loc_223CD ;~ 1359:0845
cs=0x1359;eip=0x000847; 	T(MOV(ax, 0x5DC));	// 35245 mov     ax, 5DCh ;~ 1359:0847
cs=0x1359;eip=0x00084a; 	X(IMUL1_2(framespersec));	// 35246 imul    framespersec ;~ 1359:084A
cs=0x1359;eip=0x00084e; 	T(MOV(cx, word_445d4));	// 35247 mov     cx, word_445D4 ;~ 1359:084E
cs=0x1359;eip=0x000852; 	T(ADD(cx, elapsed_time1));	// 35248 add     cx, elapsed_time1 ;~ 1359:0852
cs=0x1359;eip=0x000856; 	T(CMP(ax, cx));	// 35249 cmp     ax, cx ;~ 1359:0856
cs=0x1359;eip=0x000858; 	J(JZ(loc_223cd));	// 35250 jz      short loc_223CD ;~ 1359:0858
cs=0x1359;eip=0x00085a; 	J(JMP(loc_22347));	// 35251 jmp     loc_22347 ;~ 1359:085A
loc_223cd:
	// 6729 
cs=0x1359;eip=0x00085d; 	X(MOV(*(db*)(((db*)&word_45d3e)), 0));	// 35256 mov     byte ptr word_45D3E, 0 ;~ 1359:085D
cs=0x1359;eip=0x000862; 	T(SUB(ax, ax));	// 35257 sub     ax, ax ;~ 1359:0862
cs=0x1359;eip=0x000864; 	X(PUSH(ax));	// 35258 push    ax ;~ 1359:0864
cs=0x1359;eip=0x000865; 	X(PUSH(cs));	// 35259 push    cs ;~ 1359:0865
cs=0x1359;eip=0x000866; 	J(CALL(mouse_minmax_position,0));	// 35260 call    near ptr mouse_minmax_position ;~ 1359:0866
cs=0x1359;eip=0x000869; 	T(ADD(sp, 2));	// 35261 add     sp, 2 ;~ 1359:0869
cs=0x1359;eip=0x00086c; 	X(PUSH(cs));	// 35262 push    cs ;~ 1359:086C
cs=0x1359;eip=0x00086d; 	J(CALL(remove_frame_callback,0));	// 35263 call    near ptr remove_frame_callback ;~ 1359:086D
cs=0x1359;eip=0x000870; 	X(PUSH(cs));	// 35264 push    cs ;~ 1359:0870
cs=0x1359;eip=0x000871; 	J(CALL(free_player_cars,0));	// 35265 call    near ptr free_player_cars ;~ 1359:0871
loc_223e4:
	// 6730 
cs=0x1359;eip=0x000874; 	X(MOV(waitflag, 0x64));	// 35268 mov     waitflag, 64h ; 'd' ;~ 1359:0874
cs=0x1359;eip=0x00087a; 	J(CALLF(check_input,0));	// 35269 call    check_input ;~ 1359:087A
cs=0x1359;eip=0x00087f; 	J(CALLF(show_waiting,0));	// 35270 call    show_waiting ;~ 1359:087F
loc_223f4:
	// 6731 
cs=0x1359;eip=0x000884; 	X(POP(si));	// 35273 pop     si ;~ 1359:0884
cs=0x1359;eip=0x000885; 	T(MOV(sp, bp));	// 35274 mov     sp, bp ;~ 1359:0885
cs=0x1359;eip=0x000887; 	X(POP(bp));	// 35275 pop     bp ;~ 1359:0887
cs=0x1359;eip=0x000888; 	J(RETF(0));	// 35276 retf ;~ 1359:0888

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_21bca: 	goto loc_21bca;
        case m2c::kloc_21be4: 	goto loc_21be4;
        case m2c::kloc_21bec: 	goto loc_21bec;
        case m2c::kloc_21c00: 	goto loc_21c00;
        case m2c::kloc_21c0f: 	goto loc_21c0f;
        case m2c::kloc_21c24: 	goto loc_21c24;
        case m2c::kloc_21c5e: 	goto loc_21c5e;
        case m2c::kloc_21c6e: 	goto loc_21c6e;
        case m2c::kloc_21c78: 	goto loc_21c78;
        case m2c::kloc_21cdc: 	goto loc_21cdc;
        case m2c::kloc_21d08: 	goto loc_21d08;
        case m2c::kloc_21d2c: 	goto loc_21d2c;
        case m2c::kloc_21d5c: 	goto loc_21d5c;
        case m2c::kloc_21d72: 	goto loc_21d72;
        case m2c::kloc_21d7b: 	goto loc_21d7b;
        case m2c::kloc_21d84: 	goto loc_21d84;
        case m2c::kloc_21d92: 	goto loc_21d92;
        case m2c::kloc_21d9d: 	goto loc_21d9d;
        case m2c::kloc_21da2: 	goto loc_21da2;
        case m2c::kloc_21dcb: 	goto loc_21dcb;
        case m2c::kloc_21deb: 	goto loc_21deb;
        case m2c::kloc_21dfc: 	goto loc_21dfc;
        case m2c::kloc_21e49: 	goto loc_21e49;
        case m2c::kloc_21e71: 	goto loc_21e71;
        case m2c::kloc_21e76: 	goto loc_21e76;
        case m2c::kloc_21e8a: 	goto loc_21e8a;
        case m2c::kloc_21e8f: 	goto loc_21e8f;
        case m2c::kloc_21ebf: 	goto loc_21ebf;
        case m2c::kloc_21f00: 	goto loc_21f00;
        case m2c::kloc_21f0a: 	goto loc_21f0a;
        case m2c::kloc_21f0f: 	goto loc_21f0f;
        case m2c::kloc_21f19: 	goto loc_21f19;
        case m2c::kloc_21f1f: 	goto loc_21f1f;
        case m2c::kloc_21f38: 	goto loc_21f38;
        case m2c::kloc_21f7a: 	goto loc_21f7a;
        case m2c::kloc_21f84: 	goto loc_21f84;
        case m2c::kloc_21fb8: 	goto loc_21fb8;
        case m2c::kloc_21fc2: 	goto loc_21fc2;
        case m2c::kloc_21fee: 	goto loc_21fee;
        case m2c::kloc_21ff6: 	goto loc_21ff6;
        case m2c::kloc_2201a: 	goto loc_2201a;
        case m2c::kloc_22020: 	goto loc_22020;
        case m2c::kloc_22034: 	goto loc_22034;
        case m2c::kloc_2203e: 	goto loc_2203e;
        case m2c::kloc_22048: 	goto loc_22048;
        case m2c::kloc_22052: 	goto loc_22052;
        case m2c::kloc_22064: 	goto loc_22064;
        case m2c::kloc_220bb: 	goto loc_220bb;
        case m2c::kloc_220db: 	goto loc_220db;
        case m2c::kloc_22126: 	goto loc_22126;
        case m2c::kloc_22131: 	goto loc_22131;
        case m2c::kloc_22152: 	goto loc_22152;
        case m2c::kloc_2217d: 	goto loc_2217d;
        case m2c::kloc_22190: 	goto loc_22190;
        case m2c::kloc_2219a: 	goto loc_2219a;
        case m2c::kloc_221a6: 	goto loc_221a6;
        case m2c::kloc_221aa: 	goto loc_221aa;
        case m2c::kloc_221c2: 	goto loc_221c2;
        case m2c::kloc_221cc: 	goto loc_221cc;
        case m2c::kloc_22208: 	goto loc_22208;
        case m2c::kloc_22222: 	goto loc_22222;
        case m2c::kloc_22236: 	goto loc_22236;
        case m2c::kloc_22257: 	goto loc_22257;
        case m2c::kloc_2227e: 	goto loc_2227e;
        case m2c::kloc_22298: 	goto loc_22298;
        case m2c::kloc_222d3: 	goto loc_222d3;
        case m2c::kloc_222f1: 	goto loc_222f1;
        case m2c::kloc_222fb: 	goto loc_222fb;
        case m2c::kloc_22305: 	goto loc_22305;
        case m2c::kloc_22347: 	goto loc_22347;
        case m2c::kloc_2239f: 	goto loc_2239f;
        case m2c::kloc_223cd: 	goto loc_223cd;
        case m2c::kloc_223e4: 	goto loc_223e4;
        case m2c::kloc_223f4: 	goto loc_223f4;
        case m2c::krun_game: 	goto run_game;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool handle_ingame_kb_shortcuts(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    handle_ingame_kb_shortcuts:
    _begin:
#undef arg_0
#define arg_0 6
	// 35289 arg_0           = word ptr  6 ;~ 1359:088A
cs=0x1359;eip=0x00088a; 	X(PUSH(bp));	// 35291 push    bp ;~ 1359:088A
cs=0x1359;eip=0x00088b; 	T(MOV(bp, sp));	// 35292 mov     bp, sp ;~ 1359:088B
cs=0x1359;eip=0x00088d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 35293 mov     ax, [bp+arg_0] ;~ 1359:088D
cs=0x1359;eip=0x000890; 	T(CMP(ax, 0x64));	// 35294 cmp     ax, 64h ; 'd' ;~ 1359:0890
cs=0x1359;eip=0x000893; 	J(JZ(loc_22470));	// 35295 jz      short loc_22470 ;~ 1359:0893
cs=0x1359;eip=0x000895; 	J(JBE(loc_2240a));	// 35296 jbe     short loc_2240A ;~ 1359:0895
cs=0x1359;eip=0x000897; 	J(JMP(loc_224ee));	// 35297 jmp     loc_224EE ;~ 1359:0897
loc_2240a:
	// 6732 
cs=0x1359;eip=0x00089a; 	T(CMP(ax, 0x44));	// 35301 cmp     ax, 44h ; 'D' ;~ 1359:089A
cs=0x1359;eip=0x00089d; 	J(JZ(loc_22470));	// 35302 jz      short loc_22470 ;~ 1359:089D
cs=0x1359;eip=0x00089f; 	J(JBE(loc_22414));	// 35303 jbe     short loc_22414 ;~ 1359:089F
cs=0x1359;eip=0x0008a1; 	J(JMP(loc_224ac));	// 35304 jmp     loc_224AC ;~ 1359:08A1
loc_22414:
	// 6733 
cs=0x1359;eip=0x0008a4; 	T(CMP(ax, 0x1B));	// 35308 cmp     ax, 1Bh         ; ESC ;~ 1359:08A4
cs=0x1359;eip=0x0008a7; 	J(JZ(loc_22420));	// 35309 jz      short loc_22420 ;~ 1359:08A7
cs=0x1359;eip=0x0008a9; 	T(CMP(ax, 0x43));	// 35310 cmp     ax, 43h ; 'C' ;~ 1359:08A9
cs=0x1359;eip=0x0008ac; 	J(JMP(loc_224be));	// 35311 jmp     loc_224BE ;~ 1359:08AC
loc_22420:
	// 6734 
cs=0x1359;eip=0x0008b0; 	T(CMP(game_replay_mode, 0));	// 35316 cmp     game_replay_mode, 0 ;~ 1359:08B0
cs=0x1359;eip=0x0008b5; 	J(JNZ(loc_22436));	// 35317 jnz     short loc_22436 ;~ 1359:08B5
cs=0x1359;eip=0x0008b7; 	T(SUB(ax, ax));	// 35318 sub     ax, ax ;~ 1359:08B7
cs=0x1359;eip=0x0008b9; 	X(PUSH(ax));	// 35319 push    ax ;~ 1359:08B9
cs=0x1359;eip=0x0008ba; 	T(MOV(ax, 4));	// 35320 mov     ax, 4 ;~ 1359:08BA
cs=0x1359;eip=0x0008bd; 	X(PUSH(ax));	// 35321 push    ax ;~ 1359:08BD
cs=0x1359;eip=0x0008be; 	J(CALLF(update_crash_state,0));	// 35322 call    update_crash_state ;~ 1359:08BE
cs=0x1359;eip=0x0008c3; 	T(ADD(sp, 4));	// 35323 add     sp, 4 ;~ 1359:08C3
loc_22436:
	// 6735 
cs=0x1359;eip=0x0008c6; 	X(MOV(byte_449da, 1));	// 35326 mov     byte_449DA, 1 ;~ 1359:08C6
cs=0x1359;eip=0x0008cb; 	J(JMP(loc_224e9));	// 35327 jmp     loc_224E9 ;~ 1359:08CB
loc_2243e:
	// 6736 
cs=0x1359;eip=0x0008ce; 	X(MOV(cameramode, 1));	// 35331 mov     cameramode, 1 ;~ 1359:08CE
cs=0x1359;eip=0x0008d3; 	J(JMP(loc_224e9));	// 35332 jmp     loc_224E9 ;~ 1359:08D3
loc_22446:
	// 6737 
cs=0x1359;eip=0x0008d6; 	X(MOV(cameramode, 2));	// 35336 mov     cameramode, 2 ;~ 1359:08D6
cs=0x1359;eip=0x0008db; 	J(JMP(loc_224e9));	// 35337 jmp     loc_224E9 ;~ 1359:08DB
loc_2244e:
	// 6738 
cs=0x1359;eip=0x0008de; 	X(MOV(cameramode, 3));	// 35341 mov     cameramode, 3 ;~ 1359:08DE
cs=0x1359;eip=0x0008e3; 	J(JMP(loc_224e9));	// 35342 jmp     loc_224E9 ;~ 1359:08E3
loc_22456:
	// 6739 
cs=0x1359;eip=0x0008e6; 	X(XOR(hkeyflag, 1));	// 35347 xor     HKeyFlag, 1 ;~ 1359:08E6
cs=0x1359;eip=0x0008eb; 	J(JMP(loc_224e9));	// 35348 jmp     loc_224E9 ;~ 1359:08EB
loc_2245e:
	// 6740 
cs=0x1359;eip=0x0008ee; 	J(CALLF(do_mou_restext,0));	// 35353 call    do_mou_restext ;~ 1359:08EE
cs=0x1359;eip=0x0008f3; 	T(MOV(al, byte_3b8f2));	// 35354 mov     al, byte_3B8F2 ;~ 1359:08F3
cs=0x1359;eip=0x0008f6; 	T(CBW);	// 35355 cbw ;~ 1359:08F6
cs=0x1359;eip=0x0008f7; 	X(PUSH(ax));	// 35356 push    ax ;~ 1359:08F7
cs=0x1359;eip=0x0008f8; 	X(PUSH(cs));	// 35357 push    cs ;~ 1359:08F8
cs=0x1359;eip=0x0008f9; 	J(CALL(mouse_minmax_position,0));	// 35358 call    near ptr mouse_minmax_position ;~ 1359:08F9
cs=0x1359;eip=0x0008fc; 	J(JMP(loc_224e6));	// 35359 jmp     short loc_224E6 ;~ 1359:08FC
loc_22470:
	// 6741 
cs=0x1359;eip=0x000900; 	X(XOR(dashb_toggle, 1));	// 35366 xor     dashb_toggle, 1 ;~ 1359:0900
cs=0x1359;eip=0x000905; 	J(JMP(loc_224e9));	// 35367 jmp     short loc_224E9 ;~ 1359:0905
loc_22478:
	// 6742 
cs=0x1359;eip=0x000908; 	X(XOR(replaybar_toggle, 1));	// 35373 xor     replaybar_toggle, 1 ;~ 1359:0908
cs=0x1359;eip=0x00090d; 	J(JMP(loc_224e9));	// 35374 jmp     short loc_224E9 ;~ 1359:090D
loc_22480:
	// 6743 
cs=0x1359;eip=0x000910; 	T(CMP(game_replay_mode, 1));	// 35379 cmp     game_replay_mode, 1 ;~ 1359:0910
cs=0x1359;eip=0x000915; 	J(JZ(loc_224e9));	// 35380 jz      short loc_224E9 ;~ 1359:0915
cs=0x1359;eip=0x000917; 	X(INC(cameramode));	// 35381 inc     cameramode ;~ 1359:0917
cs=0x1359;eip=0x00091b; 	T(CMP(cameramode, 4));	// 35382 cmp     cameramode, 4 ;~ 1359:091B
cs=0x1359;eip=0x000920; 	J(JNZ(loc_224e9));	// 35383 jnz     short loc_224E9 ;~ 1359:0920
loc_22492:
	// 6744 
cs=0x1359;eip=0x000922; 	X(MOV(cameramode, 0));	// 35386 mov     cameramode, 0 ;~ 1359:0922
cs=0x1359;eip=0x000927; 	J(JMP(loc_224e9));	// 35387 jmp     short loc_224E9 ;~ 1359:0927
loc_2249a:
	// 6745 
cs=0x1359;eip=0x00092a; 	T(CMP(byte_449aa, 0));	// 35392 cmp     byte_449AA, 0 ;~ 1359:092A
cs=0x1359;eip=0x00092f; 	J(JZ(loc_224e9));	// 35393 jz      short loc_224E9 ;~ 1359:092F
cs=0x1359;eip=0x000931; 	X(XOR(followopponentflag, 1));	// 35394 xor     followOpponentFlag, 1 ;~ 1359:0931
cs=0x1359;eip=0x000936; 	J(JMP(loc_224e9));	// 35395 jmp     short loc_224E9 ;~ 1359:0936
loc_224a8:
	// 6746 
cs=0x1359;eip=0x000938; 	T(SUB(ax, ax));	// 35399 sub     ax, ax ;~ 1359:0938
cs=0x1359;eip=0x00093a; 	X(POP(bp));	// 35400 pop     bp ;~ 1359:093A
cs=0x1359;eip=0x00093b; 	J(RETF(0));	// 35401 retf ;~ 1359:093B
loc_224ac:
	// 6747 
cs=0x1359;eip=0x00093c; 	T(CMP(ax, 0x48));	// 35405 cmp     ax, 48h ; 'H' ;~ 1359:093C
cs=0x1359;eip=0x00093f; 	J(JZ(loc_22456));	// 35406 jz      short loc_22456 ;~ 1359:093F
cs=0x1359;eip=0x000941; 	T(CMP(ax, 0x4D));	// 35407 cmp     ax, 4Dh ; 'M' ;~ 1359:0941
cs=0x1359;eip=0x000944; 	J(JZ(loc_2245e));	// 35408 jz      short loc_2245E ;~ 1359:0944
cs=0x1359;eip=0x000946; 	T(CMP(ax, 0x52));	// 35409 cmp     ax, 52h ; 'R' ;~ 1359:0946
cs=0x1359;eip=0x000949; 	J(JZ(loc_22478));	// 35410 jz      short loc_22478 ;~ 1359:0949
cs=0x1359;eip=0x00094b; 	T(CMP(ax, 0x63));	// 35411 cmp     ax, 63h ; 'c' ;~ 1359:094B
loc_224be:
	// 6748 
cs=0x1359;eip=0x00094e; 	J(JZ(loc_22480));	// 35414 jz      short loc_22480 ;~ 1359:094E
loc_224c0:
	// 6749 
cs=0x1359;eip=0x000950; 	T(CMP(game_replay_mode, 1));	// 35418 cmp     game_replay_mode, 1 ;~ 1359:0950
cs=0x1359;eip=0x000955; 	J(JNZ(loc_224a8));	// 35419 jnz     short loc_224A8 ;~ 1359:0955
cs=0x1359;eip=0x000957; 	X(MOV(game_replay_mode, 0));	// 35420 mov     game_replay_mode, 0 ;~ 1359:0957
cs=0x1359;eip=0x00095c; 	X(MOV(byte_4393c, 0));	// 35421 mov     byte_4393C, 0 ;~ 1359:095C
cs=0x1359;eip=0x000961; 	T(MOV(ax, framespersec2));	// 35422 mov     ax, framespersec2 ;~ 1359:0961
cs=0x1359;eip=0x000964; 	X(MOV(framespersec, ax));	// 35423 mov     framespersec, ax ;~ 1359:0964
cs=0x1359;eip=0x000967; 	T(MOV(al, *(db*)(((db*)&framespersec2))));	// 35424 mov     al, byte ptr framespersec2 ;~ 1359:0967
cs=0x1359;eip=0x00096a; 	X(MOV(byte_449ba, al));	// 35425 mov     byte_449BA, al ;~ 1359:096A
cs=0x1359;eip=0x00096d; 	T(MOV(ax, 0x0FFFF));	// 35426 mov     ax, 0FFFFh ;~ 1359:096D
cs=0x1359;eip=0x000970; 	X(PUSH(ax));	// 35427 push    ax ;~ 1359:0970
cs=0x1359;eip=0x000971; 	J(CALLF(init_game_state,0));	// 35428 call    init_game_state ;~ 1359:0971
loc_224e6:
	// 6750 
cs=0x1359;eip=0x000976; 	T(ADD(sp, 2));	// 35431 add     sp, 2 ;~ 1359:0976
loc_224e9:
	// 6751 
cs=0x1359;eip=0x000979; 	T(MOV(ax, 1));	// 35435 mov     ax, 1 ;~ 1359:0979
cs=0x1359;eip=0x00097c; 	X(POP(bp));	// 35436 pop     bp ;~ 1359:097C
cs=0x1359;eip=0x00097d; 	J(RETF(0));	// 35437 retf ;~ 1359:097D
loc_224ee:
	// 6752 
cs=0x1359;eip=0x00097e; 	T(CMP(ax, 0x74));	// 35441 cmp     ax, 74h ; 't' ;~ 1359:097E
cs=0x1359;eip=0x000981; 	J(JZ(loc_2249a));	// 35442 jz      short loc_2249A ;~ 1359:0981
cs=0x1359;eip=0x000983; 	J(JA(loc_22510));	// 35443 ja      short loc_22510 ;~ 1359:0983
cs=0x1359;eip=0x000985; 	T(CMP(ax, 0x68));	// 35444 cmp     ax, 68h ; 'h' ;~ 1359:0985
cs=0x1359;eip=0x000988; 	J(JNZ(loc_224fd));	// 35445 jnz     short loc_224FD ;~ 1359:0988
cs=0x1359;eip=0x00098a; 	J(JMP(loc_22456));	// 35446 jmp     loc_22456 ;~ 1359:098A
loc_224fd:
	// 6753 
cs=0x1359;eip=0x00098d; 	T(CMP(ax, 0x6D));	// 35450 cmp     ax, 6Dh ; 'm' ;~ 1359:098D
cs=0x1359;eip=0x000990; 	J(JNZ(loc_22505));	// 35451 jnz     short loc_22505 ;~ 1359:0990
cs=0x1359;eip=0x000992; 	J(JMP(loc_2245e));	// 35452 jmp     loc_2245E ;~ 1359:0992
loc_22505:
	// 6754 
cs=0x1359;eip=0x000995; 	T(CMP(ax, 0x72));	// 35456 cmp     ax, 72h ; 'r' ;~ 1359:0995
cs=0x1359;eip=0x000998; 	J(JNZ(loc_2250d));	// 35457 jnz     short loc_2250D ;~ 1359:0998
cs=0x1359;eip=0x00099a; 	J(JMP(loc_22478));	// 35458 jmp     loc_22478 ;~ 1359:099A
loc_2250d:
	// 6755 
cs=0x1359;eip=0x00099d; 	J(JMP(loc_224c0));	// 35462 jmp     short loc_224C0 ;~ 1359:099D
loc_22510:
	// 6756 
cs=0x1359;eip=0x0009a0; 	T(CMP(ax, 0x3B00));	// 35467 cmp     ax, 3B00h ;~ 1359:09A0
cs=0x1359;eip=0x0009a3; 	J(JNZ(loc_22518));	// 35468 jnz     short loc_22518 ;~ 1359:09A3
cs=0x1359;eip=0x0009a5; 	J(JMP(loc_22492));	// 35469 jmp     loc_22492 ;~ 1359:09A5
loc_22518:
	// 6757 
cs=0x1359;eip=0x0009a8; 	T(CMP(ax, 0x3C00));	// 35473 cmp     ax, 3C00h ;~ 1359:09A8
cs=0x1359;eip=0x0009ab; 	J(JNZ(loc_22520));	// 35474 jnz     short loc_22520 ;~ 1359:09AB
cs=0x1359;eip=0x0009ad; 	J(JMP(loc_2243e));	// 35475 jmp     loc_2243E ;~ 1359:09AD
loc_22520:
	// 6758 
cs=0x1359;eip=0x0009b0; 	T(CMP(ax, 0x3D00));	// 35479 cmp     ax, 3D00h ;~ 1359:09B0
cs=0x1359;eip=0x0009b3; 	J(JNZ(loc_22528));	// 35480 jnz     short loc_22528 ;~ 1359:09B3
cs=0x1359;eip=0x0009b5; 	J(JMP(loc_22446));	// 35481 jmp     loc_22446 ;~ 1359:09B5
loc_22528:
	// 6759 
cs=0x1359;eip=0x0009b8; 	T(CMP(ax, 0x3E00));	// 35485 cmp     ax, 3E00h ;~ 1359:09B8
cs=0x1359;eip=0x0009bb; 	J(JNZ(loc_22530));	// 35486 jnz     short loc_22530 ;~ 1359:09BB
cs=0x1359;eip=0x0009bd; 	J(JMP(loc_2244e));	// 35487 jmp     loc_2244E ;~ 1359:09BD
loc_22530:
	// 6760 
cs=0x1359;eip=0x0009c0; 	J(JMP(loc_224c0));	// 35491 jmp     short loc_224C0 ;~ 1359:09C0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::khandle_ingame_kb_shortcuts: 	goto handle_ingame_kb_shortcuts;
        case m2c::kloc_2240a: 	goto loc_2240a;
        case m2c::kloc_22414: 	goto loc_22414;
        case m2c::kloc_22420: 	goto loc_22420;
        case m2c::kloc_22436: 	goto loc_22436;
        case m2c::kloc_2243e: 	goto loc_2243e;
        case m2c::kloc_22446: 	goto loc_22446;
        case m2c::kloc_2244e: 	goto loc_2244e;
        case m2c::kloc_22456: 	goto loc_22456;
        case m2c::kloc_2245e: 	goto loc_2245e;
        case m2c::kloc_22470: 	goto loc_22470;
        case m2c::kloc_22478: 	goto loc_22478;
        case m2c::kloc_22480: 	goto loc_22480;
        case m2c::kloc_22492: 	goto loc_22492;
        case m2c::kloc_2249a: 	goto loc_2249a;
        case m2c::kloc_224a8: 	goto loc_224a8;
        case m2c::kloc_224ac: 	goto loc_224ac;
        case m2c::kloc_224be: 	goto loc_224be;
        case m2c::kloc_224c0: 	goto loc_224c0;
        case m2c::kloc_224e6: 	goto loc_224e6;
        case m2c::kloc_224e9: 	goto loc_224e9;
        case m2c::kloc_224ee: 	goto loc_224ee;
        case m2c::kloc_224fd: 	goto loc_224fd;
        case m2c::kloc_22505: 	goto loc_22505;
        case m2c::kloc_2250d: 	goto loc_2250d;
        case m2c::kloc_22510: 	goto loc_22510;
        case m2c::kloc_22518: 	goto loc_22518;
        case m2c::kloc_22520: 	goto loc_22520;
        case m2c::kloc_22528: 	goto loc_22528;
        case m2c::kloc_22530: 	goto loc_22530;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool init_unknown(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    init_unknown:
    _begin:
cs=0x1359;eip=0x0009c2; 	X(PUSH(bp));	// 35501 push    bp ;~ 1359:09C2
cs=0x1359;eip=0x0009c3; 	T(MOV(bp, sp));	// 35502 mov     bp, sp ;~ 1359:09C3
cs=0x1359;eip=0x0009c5; 	T(SUB(sp, 2));	// 35503 sub     sp, 2 ;~ 1359:09C5
cs=0x1359;eip=0x0009c8; 	X(PUSH(si));	// 35504 push    si ;~ 1359:09C8
cs=0x1359;eip=0x0009c9; 	X(MOV(byte_44a8a, 1));	// 35505 mov     byte_44A8A, 1 ;~ 1359:09C9
cs=0x1359;eip=0x0009ce; 	X(MOV(byte_4552f, 2));	// 35506 mov     byte_4552F, 2 ;~ 1359:09CE
cs=0x1359;eip=0x0009d3; 	T(SUB(si, si));	// 35507 sub     si, si ;~ 1359:09D3
cs=0x1359;eip=0x0009d5; 	X(MOV(elapsed_time2, si));	// 35508 mov     elapsed_time2, si ;~ 1359:09D5
cs=0x1359;eip=0x0009d9; 	T(SUB(al, al));	// 35509 sub     al, al ;~ 1359:09D9
cs=0x1359;eip=0x0009db; 	X(MOV(byte_449da, al));	// 35510 mov     byte_449DA, al ;~ 1359:09DB
cs=0x1359;eip=0x0009de; 	X(MOV(byte_4393c, al));	// 35511 mov     byte_4393C, al ;~ 1359:09DE
cs=0x1359;eip=0x0009e1; 	X(MOV(word_44dca, si));	// 35512 mov     word_44DCA, si ;~ 1359:09E1
cs=0x1359;eip=0x0009e5; 	X(POP(si));	// 35513 pop     si ;~ 1359:09E5
cs=0x1359;eip=0x0009e6; 	T(MOV(sp, bp));	// 35514 mov     sp, bp ;~ 1359:09E6
cs=0x1359;eip=0x0009e8; 	X(POP(bp));	// 35515 pop     bp ;~ 1359:09E8
cs=0x1359;eip=0x0009e9; 	J(RETF(0));	// 35516 retf ;~ 1359:09E9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kinit_unknown: 	goto init_unknown;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group2:
    _begin:
set_frame_callback:
	// 35523 
cs=0x1359;eip=0x0009ea; 	X(MOV(word_46468, 0));	// 35524 mov     word_46468, 0 ;~ 1359:09EA
cs=0x1359;eip=0x0009f0; 	T(MOV(ax, m2c::kframe_callback));	// 35525 mov     ax, offset frame_callback ;~ 1359:09F0
cs=0x1359;eip=0x0009f3; 	T(MOV(dx, seg_offset(seg005)));	// 35526 mov     dx, seg seg005 ;~ 1359:09F3
cs=0x1359;eip=0x0009f6; 	X(PUSH(dx));	// 35527 push    dx ;~ 1359:09F6
cs=0x1359;eip=0x0009f7; 	X(PUSH(ax));	// 35528 push    ax ;~ 1359:09F7
cs=0x1359;eip=0x0009f8; 	J(CALLF(timer_reg_callback,0));	// 35529 call    timer_reg_callback ;~ 1359:09F8
cs=0x1359;eip=0x0009fd; 	T(ADD(sp, 4));	// 35530 add     sp, 4 ;~ 1359:09FD
cs=0x1359;eip=0x000a00; 	X(MOV(byte_442e4, 0));	// 35531 mov     byte_442E4, 0 ;~ 1359:0A00
cs=0x1359;eip=0x000a05; 	J(RETF(0));	// 35532 retf ;~ 1359:0A05
remove_frame_callback:
	// 35539 
cs=0x1359;eip=0x000a06; 	T(MOV(ax, 0x0A));	// 35540 mov     ax, 0Ah ;~ 1359:0A06
cs=0x1359;eip=0x000a09; 	T(CWD);	// 35541 cwd ;~ 1359:0A09
cs=0x1359;eip=0x000a0a; 	X(PUSH(dx));	// 35542 push    dx ;~ 1359:0A0A
cs=0x1359;eip=0x000a0b; 	X(PUSH(ax));	// 35543 push    ax ;~ 1359:0A0B
cs=0x1359;eip=0x000a0c; 	J(CALLF(timer_get_counter_unk,0));	// 35544 call    timer_get_counter_unk ;~ 1359:0A0C
cs=0x1359;eip=0x000a11; 	T(ADD(sp, 4));	// 35545 add     sp, 4 ;~ 1359:0A11
cs=0x1359;eip=0x000a14; 	T(MOV(ax, m2c::kframe_callback));	// 35546 mov     ax, offset frame_callback ;~ 1359:0A14
cs=0x1359;eip=0x000a17; 	T(MOV(dx, seg_offset(seg005)));	// 35547 mov     dx, seg seg005 ;~ 1359:0A17
cs=0x1359;eip=0x000a1a; 	X(PUSH(dx));	// 35548 push    dx ;~ 1359:0A1A
cs=0x1359;eip=0x000a1b; 	X(PUSH(ax));	// 35549 push    ax ;~ 1359:0A1B
cs=0x1359;eip=0x000a1c; 	J(CALLF(timer_remove_callback,0));	// 35550 call    timer_remove_callback ;~ 1359:0A1C
cs=0x1359;eip=0x000a21; 	T(ADD(sp, 4));	// 35551 add     sp, 4 ;~ 1359:0A21
cs=0x1359;eip=0x000a24; 	J(RETF(0));	// 35552 retf ;~ 1359:0A24
frame_callback:
	// 35561 
cs=0x1359;eip=0x000a26; 	J(CALLF(compare_ds_ss,0));	// 35563 call    compare_ds_ss ;~ 1359:0A26
cs=0x1359;eip=0x000a2b; 	T(OR(ax, ax));	// 35564 or      ax, ax ;~ 1359:0A2B
cs=0x1359;eip=0x000a2d; 	J(JNZ(loc_225a2));	// 35565 jnz     short loc_225A2 ;~ 1359:0A2D
cs=0x1359;eip=0x000a2f; 	J(JMP(locret_22696));	// 35566 jmp     locret_22696 ;~ 1359:0A2F
loc_225a2:
	// 6761 
cs=0x1359;eip=0x000a32; 	T(CMP(byte_442e4, 0));	// 35570 cmp     byte_442E4, 0 ;~ 1359:0A32
cs=0x1359;eip=0x000a37; 	J(JZ(loc_225ac));	// 35571 jz      short loc_225AC ;~ 1359:0A37
cs=0x1359;eip=0x000a39; 	J(JMP(locret_22696));	// 35572 jmp     locret_22696 ;~ 1359:0A39
loc_225ac:
	// 6762 
cs=0x1359;eip=0x000a3c; 	X(INC(byte_442e4));	// 35576 inc     byte_442E4 ;~ 1359:0A3C
cs=0x1359;eip=0x000a40; 	T(CMP(byte_442e4, 1));	// 35577 cmp     byte_442E4, 1 ;~ 1359:0A40
cs=0x1359;eip=0x000a45; 	J(JZ(loc_225ba));	// 35578 jz      short loc_225BA ;~ 1359:0A45
cs=0x1359;eip=0x000a47; 	J(JMP(loc_22692));	// 35579 jmp     loc_22692 ;~ 1359:0A47
loc_225ba:
	// 6763 
cs=0x1359;eip=0x000a4a; 	X(INC(word_443f4));	// 35583 inc     word_443F4 ;~ 1359:0A4A
cs=0x1359;eip=0x000a4e; 	T(MOV(ax, word_4499c));	// 35584 mov     ax, word_4499C ;~ 1359:0A4E
cs=0x1359;eip=0x000a51; 	T(CMP(word_443f4, ax));	// 35585 cmp     word_443F4, ax ;~ 1359:0A51
cs=0x1359;eip=0x000a55; 	J(JL(loc_225fe));	// 35586 jl      short loc_225FE ;~ 1359:0A55
cs=0x1359;eip=0x000a57; 	T(MOV(ax, word_449e4));	// 35587 mov     ax, word_449E4 ;~ 1359:0A57
cs=0x1359;eip=0x000a5a; 	T(CMP(word_44d1e, ax));	// 35588 cmp     word_44D1E, ax ;~ 1359:0A5A
cs=0x1359;eip=0x000a5e; 	J(JZ(loc_225fe));	// 35589 jz      short loc_225FE ;~ 1359:0A5E
cs=0x1359;eip=0x000a60; 	X(PUSH(word_443f4));	// 35590 push    word_443F4 ;~ 1359:0A60
cs=0x1359;eip=0x000a64; 	T(MOV(ax, 0x22));	// 35591 mov     ax, 22h ; '"' ;~ 1359:0A64
cs=0x1359;eip=0x000a67; 	X(IMUL1_2(word_44d1e));	// 35592 imul    word_44D1E ;~ 1359:0A67
cs=0x1359;eip=0x000a6b; 	T(ADD(ax, 0x97DC));	// 35593 add     ax, 97DCh ;~ 1359:0A6B
cs=0x1359;eip=0x000a6e; 	X(PUSH(ax));	// 35594 push    ax ;~ 1359:0A6E
cs=0x1359;eip=0x000a6f; 	J(CALLF(sub_18d06,0));	// 35595 call    sub_18D06 ;~ 1359:0A6F
cs=0x1359;eip=0x000a74; 	T(ADD(sp, 4));	// 35596 add     sp, 4 ;~ 1359:0A74
cs=0x1359;eip=0x000a77; 	X(MOV(word_443f4, 0));	// 35597 mov     word_443F4, 0 ;~ 1359:0A77
cs=0x1359;eip=0x000a7d; 	X(INC(word_44d1e));	// 35598 inc     word_44D1E ;~ 1359:0A7D
cs=0x1359;eip=0x000a81; 	T(CMP(word_44d1e, 0x28));	// 35599 cmp     word_44D1E, 28h ; '(' ;~ 1359:0A81
cs=0x1359;eip=0x000a86; 	J(JNZ(loc_225fe));	// 35600 jnz     short loc_225FE ;~ 1359:0A86
cs=0x1359;eip=0x000a88; 	X(MOV(word_44d1e, 0));	// 35601 mov     word_44D1E, 0 ;~ 1359:0A88
loc_225fe:
	// 6764 
cs=0x1359;eip=0x000a8e; 	T(CMP(byte_449da, 0));	// 35605 cmp     byte_449DA, 0 ;~ 1359:0A8E
cs=0x1359;eip=0x000a93; 	J(JZ(loc_22608));	// 35606 jz      short loc_22608 ;~ 1359:0A93
cs=0x1359;eip=0x000a95; 	J(JMP(loc_22692));	// 35607 jmp     loc_22692 ;~ 1359:0A95
loc_22608:
	// 6765 
cs=0x1359;eip=0x000a98; 	T(CMP(byte_46467, 0));	// 35611 cmp     byte_46467, 0 ;~ 1359:0A98
cs=0x1359;eip=0x000a9d; 	J(JZ(loc_22612));	// 35612 jz      short loc_22612 ;~ 1359:0A9D
cs=0x1359;eip=0x000a9f; 	J(JMP(loc_22692));	// 35613 jmp     loc_22692 ;~ 1359:0A9F
loc_22612:
	// 6766 
cs=0x1359;eip=0x000aa2; 	T(CMP(is_in_replay, 0));	// 35617 cmp     is_in_replay, 0 ;~ 1359:0AA2
cs=0x1359;eip=0x000aa7; 	J(JZ(loc_22620));	// 35618 jz      short loc_22620 ;~ 1359:0AA7
cs=0x1359;eip=0x000aa9; 	T(CMP(game_replay_mode, 2));	// 35619 cmp     game_replay_mode, 2 ;~ 1359:0AA9
cs=0x1359;eip=0x000aae; 	J(JZ(loc_22692));	// 35620 jz      short loc_22692 ;~ 1359:0AAE
loc_22620:
	// 6767 
cs=0x1359;eip=0x000ab0; 	T(CMP(game_replay_mode, 0));	// 35623 cmp     game_replay_mode, 0 ;~ 1359:0AB0
cs=0x1359;eip=0x000ab5; 	J(JNZ(loc_2263e));	// 35624 jnz     short loc_2263E ;~ 1359:0AB5
cs=0x1359;eip=0x000ab7; 	T(MOV(ax, word_445ce));	// 35625 mov     ax, word_445CE ;~ 1359:0AB7
cs=0x1359;eip=0x000aba; 	T(CMP(word_445cc, ax));	// 35626 cmp     word_445CC, ax ;~ 1359:0ABA
cs=0x1359;eip=0x000abe; 	J(JL(loc_2263e));	// 35627 jl      short loc_2263E ;~ 1359:0ABE
cs=0x1359;eip=0x000ac0; 	X(MOV(is_in_replay, 1));	// 35628 mov     is_in_replay, 1 ;~ 1359:0AC0
cs=0x1359;eip=0x000ac5; 	J(CALLF(audio_carstate,0));	// 35629 call    audio_carstate ;~ 1359:0AC5
cs=0x1359;eip=0x000aca; 	J(JMP(loc_22692));	// 35630 jmp     short loc_22692 ;~ 1359:0ACA
loc_2263e:
	// 6768 
cs=0x1359;eip=0x000ace; 	X(DEC(byte_44a8a));	// 35637 dec     byte_44A8A ;~ 1359:0ACE
cs=0x1359;eip=0x000ad2; 	J(JNZ(loc_22692));	// 35638 jnz     short loc_22692 ;~ 1359:0AD2
cs=0x1359;eip=0x000ad4; 	T(MOV(al, *(db*)(((db*)&word_4499c))));	// 35639 mov     al, byte ptr word_4499C ;~ 1359:0AD4
cs=0x1359;eip=0x000ad7; 	X(MOV(byte_44a8a, al));	// 35640 mov     byte_44A8A, al ;~ 1359:0AD7
cs=0x1359;eip=0x000ada; 	X(INC(word_46468));	// 35641 inc     word_46468 ;~ 1359:0ADA
cs=0x1359;eip=0x000ade; 	T(CMP(game_replay_mode, 2));	// 35642 cmp     game_replay_mode, 2 ;~ 1359:0ADE
cs=0x1359;eip=0x000ae3; 	J(JNZ(loc_22688));	// 35643 jnz     short loc_22688 ;~ 1359:0AE3
cs=0x1359;eip=0x000ae5; 	T(MOV(al, byte_449e6));	// 35644 mov     al, byte_449E6 ;~ 1359:0AE5
cs=0x1359;eip=0x000ae8; 	T(CBW);	// 35645 cbw ;~ 1359:0AE8
cs=0x1359;eip=0x000ae9; 	T(CMP(ax, 2));	// 35646 cmp     ax, 2 ;~ 1359:0AE9
cs=0x1359;eip=0x000aec; 	J(JZ(loc_22666));	// 35647 jz      short loc_22666 ;~ 1359:0AEC
cs=0x1359;eip=0x000aee; 	T(CMP(ax, 3));	// 35648 cmp     ax, 3 ;~ 1359:0AEE
cs=0x1359;eip=0x000af1; 	J(JZ(loc_2267e));	// 35649 jz      short loc_2267E ;~ 1359:0AF1
cs=0x1359;eip=0x000af3; 	J(JMP(loc_22688));	// 35650 jmp     short loc_22688 ;~ 1359:0AF3
loc_22666:
	// 6769 
cs=0x1359;eip=0x000af6; 	X(DEC(byte_4552f));	// 35655 dec     byte_4552F ;~ 1359:0AF6
cs=0x1359;eip=0x000afa; 	J(JNZ(loc_22692));	// 35656 jnz     short loc_22692 ;~ 1359:0AFA
cs=0x1359;eip=0x000afc; 	T(SUB(ax, ax));	// 35657 sub     ax, ax ;~ 1359:0AFC
cs=0x1359;eip=0x000afe; 	X(PUSH(ax));	// 35658 push    ax ;~ 1359:0AFE
cs=0x1359;eip=0x000aff; 	X(PUSH(cs));	// 35659 push    cs ;~ 1359:0AFF
cs=0x1359;eip=0x000b00; 	J(CALL(replay_unk2,0));	// 35660 call    near ptr replay_unk2 ;~ 1359:0B00
cs=0x1359;eip=0x000b03; 	T(ADD(sp, 2));	// 35661 add     sp, 2 ;~ 1359:0B03
cs=0x1359;eip=0x000b06; 	X(MOV(byte_4552f, 2));	// 35662 mov     byte_4552F, 2 ;~ 1359:0B06
cs=0x1359;eip=0x000b0b; 	J(JMP(loc_22692));	// 35663 jmp     short loc_22692 ;~ 1359:0B0B
loc_2267e:
	// 6770 
cs=0x1359;eip=0x000b0e; 	T(SUB(ax, ax));	// 35668 sub     ax, ax ;~ 1359:0B0E
cs=0x1359;eip=0x000b10; 	X(PUSH(ax));	// 35669 push    ax ;~ 1359:0B10
cs=0x1359;eip=0x000b11; 	X(PUSH(cs));	// 35670 push    cs ;~ 1359:0B11
cs=0x1359;eip=0x000b12; 	J(CALL(replay_unk2,0));	// 35671 call    near ptr replay_unk2 ;~ 1359:0B12
cs=0x1359;eip=0x000b15; 	T(ADD(sp, 2));	// 35672 add     sp, 2 ;~ 1359:0B15
loc_22688:
	// 6771 
cs=0x1359;eip=0x000b18; 	T(SUB(ax, ax));	// 35676 sub     ax, ax ;~ 1359:0B18
cs=0x1359;eip=0x000b1a; 	X(PUSH(ax));	// 35677 push    ax ;~ 1359:0B1A
cs=0x1359;eip=0x000b1b; 	X(PUSH(cs));	// 35678 push    cs ;~ 1359:0B1B
cs=0x1359;eip=0x000b1c; 	J(CALL(replay_unk2,0));	// 35679 call    near ptr replay_unk2 ;~ 1359:0B1C
cs=0x1359;eip=0x000b1f; 	T(ADD(sp, 2));	// 35680 add     sp, 2 ;~ 1359:0B1F
loc_22692:
	// 6772 
cs=0x1359;eip=0x000b22; 	X(DEC(byte_442e4));	// 35684 dec     byte_442E4 ;~ 1359:0B22
locret_22696:
	// 6773 
cs=0x1359;eip=0x000b26; 	J(RETF(0));	// 35688 retf ;~ 1359:0B26

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kframe_callback: 	goto frame_callback;
        case m2c::kloc_225a2: 	goto loc_225a2;
        case m2c::kloc_225ac: 	goto loc_225ac;
        case m2c::kloc_225ba: 	goto loc_225ba;
        case m2c::kloc_225fe: 	goto loc_225fe;
        case m2c::kloc_22608: 	goto loc_22608;
        case m2c::kloc_22612: 	goto loc_22612;
        case m2c::kloc_22620: 	goto loc_22620;
        case m2c::kloc_2263e: 	goto loc_2263e;
        case m2c::kloc_22666: 	goto loc_22666;
        case m2c::kloc_2267e: 	goto loc_2267e;
        case m2c::kloc_22688: 	goto loc_22688;
        case m2c::kloc_22692: 	goto loc_22692;
        case m2c::klocret_22696: 	goto locret_22696;
        case m2c::kremove_frame_callback: 	goto remove_frame_callback;
        case m2c::kset_frame_callback: 	goto set_frame_callback;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool replay_unk2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    replay_unk2:
    _begin:
#undef var_a
#define var_a -0x0A
	// 35701 var_A           = word ptr -0Ah ;~ 1359:0B28
#undef var_8
#define var_8 -8
	// 35702 var_8           = word ptr -8 ;~ 1359:0B28
#undef var_6
#define var_6 -6
	// 35703 var_6           = word ptr -6 ;~ 1359:0B28
#undef arg_0
#define arg_0 6
	// 35704 arg_0           = word ptr  6 ;~ 1359:0B28
cs=0x1359;eip=0x000b28; 	X(PUSH(bp));	// 35706 push    bp ;~ 1359:0B28
cs=0x1359;eip=0x000b29; 	T(MOV(bp, sp));	// 35707 mov     bp, sp ;~ 1359:0B29
cs=0x1359;eip=0x000b2b; 	T(SUB(sp, 0x0A));	// 35708 sub     sp, 0Ah ;~ 1359:0B2B
cs=0x1359;eip=0x000b2e; 	X(PUSH(di));	// 35709 push    di ;~ 1359:0B2E
cs=0x1359;eip=0x000b2f; 	X(PUSH(si));	// 35710 push    si ;~ 1359:0B2F
cs=0x1359;eip=0x000b30; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 35711 cmp     [bp+arg_0], 0 ;~ 1359:0B30
cs=0x1359;eip=0x000b34; 	J(JZ(loc_226ac));	// 35712 jz      short loc_226AC ;~ 1359:0B34
loc_226a6:
	// 6774 
cs=0x1359;eip=0x000b36; 	T(SUB(si, si));	// 35716 sub     si, si ;~ 1359:0B36
cs=0x1359;eip=0x000b38; 	J(JMP(loc_22817));	// 35717 jmp     loc_22817 ;~ 1359:0B38
loc_226ac:
	// 6775 
cs=0x1359;eip=0x000b3c; 	T(CMP(game_replay_mode, 2));	// 35722 cmp     game_replay_mode, 2 ;~ 1359:0B3C
cs=0x1359;eip=0x000b41; 	J(JNZ(loc_226e6));	// 35723 jnz     short loc_226E6 ;~ 1359:0B41
cs=0x1359;eip=0x000b43; 	T(MOV(ax, elapsed_time2));	// 35724 mov     ax, elapsed_time2 ;~ 1359:0B43
cs=0x1359;eip=0x000b46; 	T(CMP(word_449bc, ax));	// 35725 cmp     word_449BC, ax ;~ 1359:0B46
cs=0x1359;eip=0x000b4a; 	J(JBE(loc_226c6));	// 35726 jbe     short loc_226C6 ;~ 1359:0B4A
cs=0x1359;eip=0x000b4c; 	X(INC(elapsed_time2));	// 35727 inc     elapsed_time2 ;~ 1359:0B4C
cs=0x1359;eip=0x000b50; 	X(POP(si));	// 35728 pop     si ;~ 1359:0B50
cs=0x1359;eip=0x000b51; 	X(POP(di));	// 35729 pop     di ;~ 1359:0B51
cs=0x1359;eip=0x000b52; 	T(MOV(sp, bp));	// 35730 mov     sp, bp ;~ 1359:0B52
cs=0x1359;eip=0x000b54; 	X(POP(bp));	// 35731 pop     bp ;~ 1359:0B54
cs=0x1359;eip=0x000b55; 	J(RETF(0));	// 35732 retf ;~ 1359:0B55
loc_226c6:
	// 6776 
cs=0x1359;eip=0x000b56; 	T(CMP(byte_449da, 0));	// 35736 cmp     byte_449DA, 0 ;~ 1359:0B56
cs=0x1359;eip=0x000b5b; 	J(JZ(loc_226d0));	// 35737 jz      short loc_226D0 ;~ 1359:0B5B
cs=0x1359;eip=0x000b5d; 	J(JMP(loc_22985));	// 35738 jmp     loc_22985 ;~ 1359:0B5D
loc_226d0:
	// 6777 
cs=0x1359;eip=0x000b60; 	X(MOV(is_in_replay, 1));	// 35742 mov     is_in_replay, 1 ;~ 1359:0B60
cs=0x1359;eip=0x000b65; 	J(CALLF(audio_carstate,0));	// 35743 call    audio_carstate ;~ 1359:0B65
loc_226da:
	// 6778 
cs=0x1359;eip=0x000b6a; 	X(MOV(byte_449da, 1));	// 35746 mov     byte_449DA, 1 ;~ 1359:0B6A
cs=0x1359;eip=0x000b6f; 	X(POP(si));	// 35747 pop     si ;~ 1359:0B6F
cs=0x1359;eip=0x000b70; 	X(POP(di));	// 35748 pop     di ;~ 1359:0B70
cs=0x1359;eip=0x000b71; 	T(MOV(sp, bp));	// 35749 mov     sp, bp ;~ 1359:0B71
cs=0x1359;eip=0x000b73; 	X(POP(bp));	// 35750 pop     bp ;~ 1359:0B73
cs=0x1359;eip=0x000b74; 	J(RETF(0));	// 35751 retf ;~ 1359:0B74
loc_226e6:
	// 6779 
cs=0x1359;eip=0x000b76; 	T(CMP(byte_449da, 0));	// 35756 cmp     byte_449DA, 0 ;~ 1359:0B76
cs=0x1359;eip=0x000b7b; 	J(JNZ(loc_226a6));	// 35757 jnz     short loc_226A6 ;~ 1359:0B7B
cs=0x1359;eip=0x000b7d; 	T(CMP(byte_4488a, 0));	// 35758 cmp     byte_4488A, 0 ;~ 1359:0B7D
cs=0x1359;eip=0x000b82; 	J(JNZ(loc_226a6));	// 35759 jnz     short loc_226A6 ;~ 1359:0B82
cs=0x1359;eip=0x000b84; 	T(CMP(game_replay_mode, 1));	// 35760 cmp     game_replay_mode, 1 ;~ 1359:0B84
cs=0x1359;eip=0x000b89; 	J(JZ(loc_226a6));	// 35761 jz      short loc_226A6 ;~ 1359:0B89
cs=0x1359;eip=0x000b8b; 	T(CMP(passed_security, 0));	// 35762 cmp     passed_security, 0 ;~ 1359:0B8B
cs=0x1359;eip=0x000b90; 	J(JNZ(loc_22725));	// 35763 jnz     short loc_22725 ;~ 1359:0B90
cs=0x1359;eip=0x000b92; 	T(CMP(byte_4393c, 0));	// 35764 cmp     byte_4393C, 0 ;~ 1359:0B92
cs=0x1359;eip=0x000b97; 	J(JNZ(loc_22725));	// 35765 jnz     short loc_22725 ;~ 1359:0B97
cs=0x1359;eip=0x000b99; 	T(MOV(ax, framespersec));	// 35766 mov     ax, framespersec ;~ 1359:0B99
cs=0x1359;eip=0x000b9c; 	T(SHL(ax, 1));	// 35767 shl     ax, 1 ;~ 1359:0B9C
cs=0x1359;eip=0x000b9e; 	T(SHL(ax, 1));	// 35768 shl     ax, 1 ;~ 1359:0B9E
cs=0x1359;eip=0x000ba0; 	T(CMP(ax, word_445d4));	// 35769 cmp     ax, word_445D4 ;~ 1359:0BA0
cs=0x1359;eip=0x000ba4; 	J(JNC(loc_22725));	// 35770 jnb     short loc_22725 ;~ 1359:0BA4
cs=0x1359;eip=0x000ba6; 	T(SUB(ax, ax));	// 35771 sub     ax, ax ;~ 1359:0BA6
cs=0x1359;eip=0x000ba8; 	X(PUSH(ax));	// 35772 push    ax ;~ 1359:0BA8
cs=0x1359;eip=0x000ba9; 	T(MOV(ax, 1));	// 35773 mov     ax, 1 ;~ 1359:0BA9
cs=0x1359;eip=0x000bac; 	X(PUSH(ax));	// 35774 push    ax ;~ 1359:0BAC
cs=0x1359;eip=0x000bad; 	J(CALLF(update_crash_state,0));	// 35775 call    update_crash_state ;~ 1359:0BAD
cs=0x1359;eip=0x000bb2; 	T(ADD(sp, 4));	// 35776 add     sp, 4 ;~ 1359:0BB2
loc_22725:
	// 6780 
cs=0x1359;eip=0x000bb5; 	T(CMP(byte_3b8f2, 0));	// 35780 cmp     byte_3B8F2, 0 ;~ 1359:0BB5
cs=0x1359;eip=0x000bba; 	J(JNZ(loc_22736));	// 35781 jnz     short loc_22736 ;~ 1359:0BBA
cs=0x1359;eip=0x000bbc; 	T(CMP(byte_3fe00, 0));	// 35782 cmp     byte_3FE00, 0 ;~ 1359:0BBC
cs=0x1359;eip=0x000bc1; 	J(JNZ(loc_22736));	// 35783 jnz     short loc_22736 ;~ 1359:0BC1
cs=0x1359;eip=0x000bc3; 	J(JMP(loc_227e8));	// 35784 jmp     loc_227E8 ;~ 1359:0BC3
loc_22736:
	// 6781 
cs=0x1359;eip=0x000bc6; 	T(CMP(byte_3b8f2, 0));	// 35789 cmp     byte_3B8F2, 0 ;~ 1359:0BC6
cs=0x1359;eip=0x000bcb; 	J(JZ(loc_2279a));	// 35790 jz      short loc_2279A ;~ 1359:0BCB
cs=0x1359;eip=0x000bcd; 	T(MOV(ax, 0x0AA5E));	// 35791 mov     ax, 0AA5Eh ;~ 1359:0BCD
cs=0x1359;eip=0x000bd0; 	X(PUSH(ax));	// 35792 push    ax ;~ 1359:0BD0
cs=0x1359;eip=0x000bd1; 	T(MOV(ax, 0x0A9FC));	// 35793 mov     ax, 0A9FCh ;~ 1359:0BD1
cs=0x1359;eip=0x000bd4; 	X(PUSH(ax));	// 35794 push    ax ;~ 1359:0BD4
cs=0x1359;eip=0x000bd5; 	T(MOV(ax, 0x8B78));	// 35795 mov     ax, 8B78h ;~ 1359:0BD5
cs=0x1359;eip=0x000bd8; 	X(PUSH(ax));	// 35796 push    ax ;~ 1359:0BD8
cs=0x1359;eip=0x000bd9; 	J(CALLF(mouse_get_state,0));	// 35797 call    mouse_get_state ;~ 1359:0BD9
cs=0x1359;eip=0x000bde; 	T(ADD(sp, 6));	// 35798 add     sp, 6 ;~ 1359:0BDE
cs=0x1359;eip=0x000be1; 	T(MOV(di, mouse_xpos));	// 35799 mov     di, mouse_xpos ;~ 1359:0BE1
cs=0x1359;eip=0x000be5; 	T(SUB(di, 0x0A0));	// 35800 sub     di, 0A0h ; ' ' ;~ 1359:0BE5
cs=0x1359;eip=0x000be9; 	X(PUSH(di));	// 35801 push    di              ; int ;~ 1359:0BE9
cs=0x1359;eip=0x000bea; 	J(CALLF(_abs,0));	// 35802 call    _abs ;~ 1359:0BEA
cs=0x1359;eip=0x000bef; 	T(ADD(sp, 2));	// 35803 add     sp, 2 ;~ 1359:0BEF
cs=0x1359;eip=0x000bf2; 	T(CMP(ax, 0x12));	// 35804 cmp     ax, 12h ;~ 1359:0BF2
cs=0x1359;eip=0x000bf5; 	J(JGE(loc_2276c));	// 35805 jge     short loc_2276C ;~ 1359:0BF5
cs=0x1359;eip=0x000bf7; 	T(SUB(di, di));	// 35806 sub     di, di ;~ 1359:0BF7
cs=0x1359;eip=0x000bf9; 	J(JMP(loc_22779));	// 35807 jmp     short loc_22779 ;~ 1359:0BF9
loc_2276c:
	// 6782 
cs=0x1359;eip=0x000bfc; 	T(OR(di, di));	// 35812 or      di, di ;~ 1359:0BFC
cs=0x1359;eip=0x000bfe; 	J(JLE(loc_22776));	// 35813 jle     short loc_22776 ;~ 1359:0BFE
cs=0x1359;eip=0x000c00; 	T(SUB(di, 0x12));	// 35814 sub     di, 12h ;~ 1359:0C00
cs=0x1359;eip=0x000c03; 	J(JMP(loc_22779));	// 35815 jmp     short loc_22779 ;~ 1359:0C03
loc_22776:
	// 6783 
cs=0x1359;eip=0x000c06; 	T(ADD(di, 0x12));	// 35820 add     di, 12h ;~ 1359:0C06
loc_22779:
	// 6784 
cs=0x1359;eip=0x000c09; 	T(MOV(ax, di));	// 35824 mov     ax, di ;~ 1359:0C09
cs=0x1359;eip=0x000c0b; 	X(MOV(byte_40d6a, al));	// 35825 mov     byte_40D6A, al ;~ 1359:0C0B
cs=0x1359;eip=0x000c0e; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 1));	// 35826 test    byte ptr mouse_butstate, 1 ;~ 1359:0C0E
cs=0x1359;eip=0x000c13; 	J(JZ(loc_2278a));	// 35827 jz      short loc_2278A ;~ 1359:0C13
cs=0x1359;eip=0x000c15; 	T(MOV(si, 2));	// 35828 mov     si, 2 ;~ 1359:0C15
cs=0x1359;eip=0x000c18; 	J(JMP(loc_227d2));	// 35829 jmp     short loc_227D2 ;~ 1359:0C18
loc_2278a:
	// 6785 
cs=0x1359;eip=0x000c1a; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 2));	// 35833 test    byte ptr mouse_butstate, 2 ;~ 1359:0C1A
cs=0x1359;eip=0x000c1f; 	J(JZ(loc_22796));	// 35834 jz      short loc_22796 ;~ 1359:0C1F
cs=0x1359;eip=0x000c21; 	T(MOV(si, 1));	// 35835 mov     si, 1 ;~ 1359:0C21
cs=0x1359;eip=0x000c24; 	J(JMP(loc_227d2));	// 35836 jmp     short loc_227D2 ;~ 1359:0C24
loc_22796:
	// 6786 
cs=0x1359;eip=0x000c26; 	T(SUB(si, si));	// 35840 sub     si, si ;~ 1359:0C26
cs=0x1359;eip=0x000c28; 	J(JMP(loc_227d2));	// 35841 jmp     short loc_227D2 ;~ 1359:0C28
loc_2279a:
	// 6787 
cs=0x1359;eip=0x000c2a; 	J(CALLF(sub_307e3,0));	// 35845 call    sub_307E3 ;~ 1359:0C2A
cs=0x1359;eip=0x000c2f; 	X(MOV(byte_40d6a, al));	// 35846 mov     byte_40D6A, al ;~ 1359:0C2F
cs=0x1359;eip=0x000c32; 	T(OR(al, al));	// 35847 or      al, al ;~ 1359:0C32
cs=0x1359;eip=0x000c34; 	J(JLE(loc_227b0));	// 35848 jle     short loc_227B0 ;~ 1359:0C34
cs=0x1359;eip=0x000c36; 	T(CBW);	// 35849 cbw ;~ 1359:0C36
cs=0x1359;eip=0x000c37; 	T(MOV(bx, ax));	// 35850 mov     bx, ax ;~ 1359:0C37
cs=0x1359;eip=0x000c39; 	T(MOV(al, *((&byte_3e85c)+bx)));	// 35851 mov     al, byte_3E85C[bx] ;~ 1359:0C39
cs=0x1359;eip=0x000c3d; 	J(JMP(loc_227c5));	// 35852 jmp     short loc_227C5 ;~ 1359:0C3D
loc_227b0:
	// 6788 
cs=0x1359;eip=0x000c40; 	T(CMP(byte_40d6a, 0));	// 35857 cmp     byte_40D6A, 0 ;~ 1359:0C40
cs=0x1359;eip=0x000c45; 	J(JGE(loc_227c8));	// 35858 jge     short loc_227C8 ;~ 1359:0C45
cs=0x1359;eip=0x000c47; 	T(MOV(al, byte_40d6a));	// 35859 mov     al, byte_40D6A ;~ 1359:0C47
cs=0x1359;eip=0x000c4a; 	T(CBW);	// 35860 cbw ;~ 1359:0C4A
cs=0x1359;eip=0x000c4b; 	T(MOV(bx, ax));	// 35861 mov     bx, ax ;~ 1359:0C4B
cs=0x1359;eip=0x000c4d; 	T(NEG(bx));	// 35862 neg     bx ;~ 1359:0C4D
cs=0x1359;eip=0x000c4f; 	T(MOV(al, *((&byte_3e85c)+bx)));	// 35863 mov     al, byte_3E85C[bx] ;~ 1359:0C4F
cs=0x1359;eip=0x000c53; 	T(NEG(al));	// 35864 neg     al ;~ 1359:0C53
loc_227c5:
	// 6789 
cs=0x1359;eip=0x000c55; 	X(MOV(byte_40d6a, al));	// 35867 mov     byte_40D6A, al ;~ 1359:0C55
loc_227c8:
	// 6790 
cs=0x1359;eip=0x000c58; 	J(CALLF(get_kb_or_joy_flags,0));	// 35870 call    get_kb_or_joy_flags ;~ 1359:0C58
cs=0x1359;eip=0x000c5d; 	T(MOV(si, ax));	// 35871 mov     si, ax ;~ 1359:0C5D
cs=0x1359;eip=0x000c5f; 	T(AND(si, 0x33));	// 35872 and     si, 33h ;~ 1359:0C5F
loc_227d2:
	// 6791 
cs=0x1359;eip=0x000c62; 	T(MOV(di, elapsed_time2));	// 35876 mov     di, elapsed_time2 ;~ 1359:0C62
cs=0x1359;eip=0x000c66; 	T(AND(di, 0x3F));	// 35877 and     di, 3Fh ;~ 1359:0C66
cs=0x1359;eip=0x000c69; 	T(MOV(al, byte_40d6a));	// 35878 mov     al, byte_40D6A ;~ 1359:0C69
cs=0x1359;eip=0x000c6c; 	X(MOV(*((&byte_44292)+di), al));	// 35879 mov     byte_44292[di], al ;~ 1359:0C6C
cs=0x1359;eip=0x000c70; 	X(MOV(*((&byte_442ea)+di), 1));	// 35880 mov     byte_442EA[di], 1 ;~ 1359:0C70
cs=0x1359;eip=0x000c75; 	J(JMP(loc_227ef));	// 35881 jmp     short loc_227EF ;~ 1359:0C75
loc_227e8:
	// 6792 
cs=0x1359;eip=0x000c78; 	J(CALLF(get_kb_or_joy_flags,0));	// 35886 call    get_kb_or_joy_flags ;~ 1359:0C78
cs=0x1359;eip=0x000c7d; 	T(MOV(si, ax));	// 35887 mov     si, ax ;~ 1359:0C7D
loc_227ef:
	// 6793 
cs=0x1359;eip=0x000c7f; 	T(MOV(ax, 0x1E));	// 35890 mov     ax, 1Eh ;~ 1359:0C7F
cs=0x1359;eip=0x000c82; 	X(PUSH(ax));	// 35891 push    ax ;~ 1359:0C82
cs=0x1359;eip=0x000c83; 	J(CALLF(kb_get_key_state,0));	// 35892 call    kb_get_key_state ;~ 1359:0C83
cs=0x1359;eip=0x000c88; 	T(ADD(sp, 2));	// 35893 add     sp, 2 ;~ 1359:0C88
cs=0x1359;eip=0x000c8b; 	T(OR(ax, ax));	// 35894 or      ax, ax ;~ 1359:0C8B
cs=0x1359;eip=0x000c8d; 	J(JZ(loc_22803));	// 35895 jz      short loc_22803 ;~ 1359:0C8D
cs=0x1359;eip=0x000c8f; 	T(OR(si, 0x10));	// 35896 or      si, 10h ;~ 1359:0C8F
loc_22803:
	// 6794 
cs=0x1359;eip=0x000c93; 	T(MOV(ax, 0x2C));	// 35899 mov     ax, 2Ch ; ',' ;~ 1359:0C93
cs=0x1359;eip=0x000c96; 	X(PUSH(ax));	// 35900 push    ax ;~ 1359:0C96
cs=0x1359;eip=0x000c97; 	J(CALLF(kb_get_key_state,0));	// 35901 call    kb_get_key_state ;~ 1359:0C97
cs=0x1359;eip=0x000c9c; 	T(ADD(sp, 2));	// 35902 add     sp, 2 ;~ 1359:0C9C
cs=0x1359;eip=0x000c9f; 	T(OR(ax, ax));	// 35903 or      ax, ax ;~ 1359:0C9F
cs=0x1359;eip=0x000ca1; 	J(JZ(loc_22817));	// 35904 jz      short loc_22817 ;~ 1359:0CA1
cs=0x1359;eip=0x000ca3; 	T(OR(si, 0x20));	// 35905 or      si, 20h ;~ 1359:0CA3
loc_22817:
	// 6795 
cs=0x1359;eip=0x000ca7; 	T(MOV(ax, 0x5DC));	// 35909 mov     ax, 5DCh ;~ 1359:0CA7
cs=0x1359;eip=0x000caa; 	X(IMUL1_2(framespersec));	// 35910 imul    framespersec ;~ 1359:0CAA
cs=0x1359;eip=0x000cae; 	T(MOV(cx, elapsed_time2));	// 35911 mov     cx, elapsed_time2 ;~ 1359:0CAE
cs=0x1359;eip=0x000cb2; 	T(ADD(cx, elapsed_time1));	// 35912 add     cx, elapsed_time1 ;~ 1359:0CB2
cs=0x1359;eip=0x000cb6; 	T(CMP(ax, cx));	// 35913 cmp     ax, cx ;~ 1359:0CB6
cs=0x1359;eip=0x000cb8; 	J(JA(loc_2283c));	// 35914 ja      short loc_2283C ;~ 1359:0CB8
cs=0x1359;eip=0x000cba; 	T(SUB(ax, ax));	// 35915 sub     ax, ax ;~ 1359:0CBA
cs=0x1359;eip=0x000cbc; 	X(PUSH(ax));	// 35916 push    ax ;~ 1359:0CBC
cs=0x1359;eip=0x000cbd; 	T(MOV(ax, 4));	// 35917 mov     ax, 4 ;~ 1359:0CBD
cs=0x1359;eip=0x000cc0; 	X(PUSH(ax));	// 35918 push    ax ;~ 1359:0CC0
cs=0x1359;eip=0x000cc1; 	J(CALLF(update_crash_state,0));	// 35919 call    update_crash_state ;~ 1359:0CC1
cs=0x1359;eip=0x000cc6; 	T(ADD(sp, 4));	// 35920 add     sp, 4 ;~ 1359:0CC6
cs=0x1359;eip=0x000cc9; 	J(JMP(loc_226da));	// 35921 jmp     loc_226DA ;~ 1359:0CC9
loc_2283c:
	// 6796 
cs=0x1359;eip=0x000ccc; 	T(CMP(elapsed_time2, 0x2EE0));	// 35925 cmp     elapsed_time2, 2EE0h ;~ 1359:0CCC
cs=0x1359;eip=0x000cd2; 	J(JZ(loc_22847));	// 35926 jz      short loc_22847 ;~ 1359:0CD2
cs=0x1359;eip=0x000cd4; 	J(JMP(loc_2296c));	// 35927 jmp     loc_2296C ;~ 1359:0CD4
loc_22847:
	// 6797 
cs=0x1359;eip=0x000cd7; 	T(CMP(elapsed_time1, 0));	// 35931 cmp     elapsed_time1, 0 ;~ 1359:0CD7
cs=0x1359;eip=0x000cdc; 	J(JNZ(loc_22866));	// 35932 jnz     short loc_22866 ;~ 1359:0CDC
cs=0x1359;eip=0x000cde; 	T(CMP(*(db*)(((db*)&word_45d3e)), 0));	// 35933 cmp     byte ptr word_45D3E, 0 ;~ 1359:0CDE
cs=0x1359;eip=0x000ce3; 	J(JNZ(loc_22866));	// 35934 jnz     short loc_22866 ;~ 1359:0CE3
cs=0x1359;eip=0x000ce5; 	X(MOV(*(db*)(((db*)&word_45d3e)), 1));	// 35935 mov     byte ptr word_45D3E, 1 ;~ 1359:0CE5
cs=0x1359;eip=0x000cea; 	X(MOV(byte_46467, 1));	// 35936 mov     byte_46467, 1 ;~ 1359:0CEA
cs=0x1359;eip=0x000cef; 	X(POP(si));	// 35937 pop     si ;~ 1359:0CEF
cs=0x1359;eip=0x000cf0; 	X(POP(di));	// 35938 pop     di ;~ 1359:0CF0
cs=0x1359;eip=0x000cf1; 	T(MOV(sp, bp));	// 35939 mov     sp, bp ;~ 1359:0CF1
cs=0x1359;eip=0x000cf3; 	X(POP(bp));	// 35940 pop     bp ;~ 1359:0CF3
cs=0x1359;eip=0x000cf4; 	J(RETF(0));	// 35941 retf ;~ 1359:0CF4
loc_22866:
	// 6798 
cs=0x1359;eip=0x000cf6; 	T(SUB(di, di));	// 35947 sub     di, di ;~ 1359:0CF6
cs=0x1359;eip=0x000cf8; 	J(JMP(loc_22909));	// 35948 jmp     loc_22909 ;~ 1359:0CF8
loc_2286c:
	// 6799 
cs=0x1359;eip=0x000cfc; 	T(MOV(ax, 0x460));	// 35953 mov     ax, 460h ;~ 1359:0CFC
cs=0x1359;eip=0x000cff; 	T(CWD);	// 35954 cwd ;~ 1359:0CFF
cs=0x1359;eip=0x000d00; 	X(PUSH(dx));	// 35955 push    dx ;~ 1359:0D00
cs=0x1359;eip=0x000d01; 	X(PUSH(ax));	// 35956 push    ax ;~ 1359:0D01
cs=0x1359;eip=0x000d02; 	T(MOV(ax, di));	// 35957 mov     ax, di ;~ 1359:0D02
cs=0x1359;eip=0x000d04; 	T(CWD);	// 35958 cwd ;~ 1359:0D04
cs=0x1359;eip=0x000d05; 	X(PUSH(dx));	// 35959 push    dx ;~ 1359:0D05
cs=0x1359;eip=0x000d06; 	X(PUSH(ax));	// 35960 push    ax ;~ 1359:0D06
cs=0x1359;eip=0x000d07; 	J(CALLF(__aflmul,0));	// 35961 call    __aFlmul ;~ 1359:0D07
cs=0x1359;eip=0x000d0c; 	T(ADD(ax, 0x5A0));	// 35962 add     ax, 5A0h ;~ 1359:0D0C
cs=0x1359;eip=0x000d0f; 	T(ADC(dx, 0));	// 35963 adc     dx, 0 ;~ 1359:0D0F
cs=0x1359;eip=0x000d12; 	T(ADD(ax, cvxptr));	// 35964 add     ax, cvxptr ;~ 1359:0D12
cs=0x1359;eip=0x000d16; 	T(ADC(dx, 0));	// 35965 adc     dx, 0 ;~ 1359:0D16
cs=0x1359;eip=0x000d19; 	T(MOV(cx, 0x0C));	// 35966 mov     cx, 0Ch ;~ 1359:0D19
cs=0x1359;eip=0x000d1c; 	T(SHL(dx, cl));	// 35967 shl     dx, cl ;~ 1359:0D1C
cs=0x1359;eip=0x000d1e; 	T(ADD(dx, word_45a22));	// 35968 add     dx, word_45A22 ;~ 1359:0D1E
cs=0x1359;eip=0x000d22; 	T(MOV(es, dx));	// 35969 mov     es, dx ;~ 1359:0D22
cs=0x1359;eip=0x000d24; 	T(MOV(bx, ax));	// 35970 mov     bx, ax ;~ 1359:0D24
cs=0x1359;eip=0x000d26; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 35971 mov     ax, [bp+var_6] ;~ 1359:0D26
cs=0x1359;eip=0x000d29; 	X(SUB(*(dw*)(raddr(es,bx)), ax));	// 35972 sub     es:[bx], ax ;~ 1359:0D29
cs=0x1359;eip=0x000d2c; 	T(MOV(ax, 0x460));	// 35973 mov     ax, 460h ;~ 1359:0D2C
cs=0x1359;eip=0x000d2f; 	T(CWD);	// 35974 cwd ;~ 1359:0D2F
cs=0x1359;eip=0x000d30; 	X(PUSH(dx));	// 35975 push    dx ;~ 1359:0D30
cs=0x1359;eip=0x000d31; 	X(PUSH(ax));	// 35976 push    ax ;~ 1359:0D31
cs=0x1359;eip=0x000d32; 	T(MOV(ax, di));	// 35977 mov     ax, di ;~ 1359:0D32
cs=0x1359;eip=0x000d34; 	T(CWD);	// 35978 cwd ;~ 1359:0D34
cs=0x1359;eip=0x000d35; 	X(PUSH(dx));	// 35979 push    dx ;~ 1359:0D35
cs=0x1359;eip=0x000d36; 	X(PUSH(ax));	// 35980 push    ax ;~ 1359:0D36
cs=0x1359;eip=0x000d37; 	J(CALLF(__aflmul,0));	// 35981 call    __aFlmul ;~ 1359:0D37
cs=0x1359;eip=0x000d3c; 	T(ADD(ax, 0x460));	// 35982 add     ax, 460h ;~ 1359:0D3C
cs=0x1359;eip=0x000d3f; 	T(ADC(dx, 0));	// 35983 adc     dx, 0 ;~ 1359:0D3F
cs=0x1359;eip=0x000d42; 	T(ADD(ax, cvxptr));	// 35984 add     ax, cvxptr ;~ 1359:0D42
cs=0x1359;eip=0x000d46; 	T(ADC(dx, 0));	// 35985 adc     dx, 0 ;~ 1359:0D46
cs=0x1359;eip=0x000d49; 	T(MOV(cx, 0x0C));	// 35986 mov     cx, 0Ch ;~ 1359:0D49
cs=0x1359;eip=0x000d4c; 	T(SHL(dx, cl));	// 35987 shl     dx, cl ;~ 1359:0D4C
cs=0x1359;eip=0x000d4e; 	T(ADD(dx, word_45a22));	// 35988 add     dx, word_45A22 ;~ 1359:0D4E
cs=0x1359;eip=0x000d52; 	T(MOV(cx, 0x460));	// 35989 mov     cx, 460h ;~ 1359:0D52
cs=0x1359;eip=0x000d55; 	T(SUB(bx, bx));	// 35990 sub     bx, bx ;~ 1359:0D55
cs=0x1359;eip=0x000d57; 	X(PUSH(bx));	// 35991 push    bx ;~ 1359:0D57
cs=0x1359;eip=0x000d58; 	X(PUSH(cx));	// 35992 push    cx ;~ 1359:0D58
cs=0x1359;eip=0x000d59; 	T(MOV(cx, ax));	// 35993 mov     cx, ax ;~ 1359:0D59
cs=0x1359;eip=0x000d5b; 	T(MOV(ax, di));	// 35994 mov     ax, di ;~ 1359:0D5B
cs=0x1359;eip=0x000d5d; 	T(MOV(bx, dx));	// 35995 mov     bx, dx ;~ 1359:0D5D
cs=0x1359;eip=0x000d5f; 	T(CWD);	// 35996 cwd ;~ 1359:0D5F
cs=0x1359;eip=0x000d60; 	X(PUSH(dx));	// 35997 push    dx ;~ 1359:0D60
cs=0x1359;eip=0x000d61; 	X(PUSH(ax));	// 35998 push    ax ;~ 1359:0D61
cs=0x1359;eip=0x000d62; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), cx));	// 35999 mov     [bp+var_A], cx ;~ 1359:0D62
cs=0x1359;eip=0x000d65; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), bx));	// 36000 mov     [bp+var_8], bx ;~ 1359:0D65
cs=0x1359;eip=0x000d68; 	J(CALLF(__aflmul,0));	// 36001 call    __aFlmul ;~ 1359:0D68
cs=0x1359;eip=0x000d6d; 	T(ADD(ax, cvxptr));	// 36002 add     ax, cvxptr ;~ 1359:0D6D
cs=0x1359;eip=0x000d71; 	T(ADC(dx, 0));	// 36003 adc     dx, 0 ;~ 1359:0D71
cs=0x1359;eip=0x000d74; 	T(MOV(cx, 0x0C));	// 36004 mov     cx, 0Ch ;~ 1359:0D74
cs=0x1359;eip=0x000d77; 	T(SHL(dx, cl));	// 36005 shl     dx, cl ;~ 1359:0D77
cs=0x1359;eip=0x000d79; 	T(ADD(dx, word_45a22));	// 36006 add     dx, word_45A22 ;~ 1359:0D79
cs=0x1359;eip=0x000d7d; 	T(MOV(bx, ax));	// 36007 mov     bx, ax ;~ 1359:0D7D
cs=0x1359;eip=0x000d7f; 	T(MOV(es, dx));	// 36008 mov     es, dx ;~ 1359:0D7F
cs=0x1359;eip=0x000d81; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 36009 mov     ax, [bp+var_A] ;~ 1359:0D81
cs=0x1359;eip=0x000d84; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 36010 mov     dx, [bp+var_8] ;~ 1359:0D84
cs=0x1359;eip=0x000d87; 	X(PUSH(si));	// 36011 push    si ;~ 1359:0D87
cs=0x1359;eip=0x000d88; 	X(PUSH(di));	// 36012 push    di ;~ 1359:0D88
cs=0x1359;eip=0x000d89; 	T(MOV(di, bx));	// 36013 mov     di, bx ;~ 1359:0D89
cs=0x1359;eip=0x000d8b; 	T(MOV(si, ax));	// 36014 mov     si, ax ;~ 1359:0D8B
cs=0x1359;eip=0x000d8d; 	X(PUSH(ds));	// 36015 push    ds ;~ 1359:0D8D
cs=0x1359;eip=0x000d8e; 	T(MOV(ds, dx));	// 36016 mov     ds, dx ;~ 1359:0D8E
cs=0x1359;eip=0x000d90; 	T(MOV(cx, 0x230));	// 36017 mov     cx, 230h ;~ 1359:0D90
	// 36018 repne movsw ;~ 1359:0D93
cs=0x1359;eip=0x000d93; 	X(	REPNE MOVSW);	// 36018 repne movsw ;~ 1359:0D93
cs=0x1359;eip=0x000d95; 	X(POP(ds));	// 36019 pop     ds ;~ 1359:0D95
cs=0x1359;eip=0x000d96; 	X(POP(di));	// 36020 pop     di ;~ 1359:0D96
cs=0x1359;eip=0x000d97; 	X(POP(si));	// 36021 pop     si ;~ 1359:0D97
cs=0x1359;eip=0x000d98; 	T(INC(di));	// 36022 inc     di ;~ 1359:0D98
loc_22909:
	// 6800 
cs=0x1359;eip=0x000d99; 	T(MOV(ax, 0x1E));	// 36025 mov     ax, 1Eh ;~ 1359:0D99
cs=0x1359;eip=0x000d9c; 	X(IMUL1_2(framespersec));	// 36026 imul    framespersec ;~ 1359:0D9C
cs=0x1359;eip=0x000da0; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 36027 mov     [bp+var_6], ax ;~ 1359:0DA0
cs=0x1359;eip=0x000da3; 	T(MOV(ax, 0x2EE0));	// 36028 mov     ax, 2EE0h ;~ 1359:0DA3
cs=0x1359;eip=0x000da6; 	T(CWD);	// 36029 cwd ;~ 1359:0DA6
cs=0x1359;eip=0x000da7; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_6))));	// 36030 mov     cx, [bp+var_6] ;~ 1359:0DA7
cs=0x1359;eip=0x000daa; 	T(IDIV2(cx));	// 36031 idiv    cx ;~ 1359:0DAA
cs=0x1359;eip=0x000dac; 	T(DEC(ax));	// 36032 dec     ax ;~ 1359:0DAC
cs=0x1359;eip=0x000dad; 	T(CMP(ax, di));	// 36033 cmp     ax, di ;~ 1359:0DAD
cs=0x1359;eip=0x000daf; 	J(JLE(loc_22924));	// 36034 jle     short loc_22924 ;~ 1359:0DAF
cs=0x1359;eip=0x000db1; 	J(JMP(loc_2286c));	// 36035 jmp     loc_2286C ;~ 1359:0DB1
loc_22924:
	// 6801 
cs=0x1359;eip=0x000db4; 	T(SUB(di, di));	// 36039 sub     di, di ;~ 1359:0DB4
cs=0x1359;eip=0x000db6; 	J(JMP(loc_2293e));	// 36040 jmp     short loc_2293E ;~ 1359:0DB6
loc_22928:
	// 6802 
cs=0x1359;eip=0x000db8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 36044 mov     bx, [bp+var_A] ;~ 1359:0DB8
cs=0x1359;eip=0x000dbb; 	T(ADD(bx, *(dw*)(((db*)&td16_rpl_buffer))));	// 36045 add     bx, word ptr td16_rpl_buffer ;~ 1359:0DBB
cs=0x1359;eip=0x000dbf; 	T(MOV(es, *(dw*)(((db*)&td16_rpl_buffer)+2)));	// 36046 mov     es, word ptr td16_rpl_buffer+2 ;~ 1359:0DBF
cs=0x1359;eip=0x000dc3; 	T(MOV(al, *(raddr(es,bx+di))));	// 36047 mov     al, es:[bx+di] ;~ 1359:0DC3
cs=0x1359;eip=0x000dc6; 	T(MOV(bx, *(dw*)(((db*)&td16_rpl_buffer))));	// 36048 mov     bx, word ptr td16_rpl_buffer ;~ 1359:0DC6
cs=0x1359;eip=0x000dca; 	X(MOV(*(raddr(es,bx+di)), al));	// 36049 mov     es:[bx+di], al ;~ 1359:0DCA
cs=0x1359;eip=0x000dcd; 	T(INC(di));	// 36050 inc     di ;~ 1359:0DCD
loc_2293e:
	// 6803 
cs=0x1359;eip=0x000dce; 	T(MOV(ax, 0x1E));	// 36053 mov     ax, 1Eh ;~ 1359:0DCE
cs=0x1359;eip=0x000dd1; 	X(IMUL1_2(framespersec));	// 36054 imul    framespersec ;~ 1359:0DD1
cs=0x1359;eip=0x000dd5; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 36055 mov     [bp+var_A], ax ;~ 1359:0DD5
cs=0x1359;eip=0x000dd8; 	T(MOV(ax, 0x2EE0));	// 36056 mov     ax, 2EE0h ;~ 1359:0DD8
cs=0x1359;eip=0x000ddb; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_a))));	// 36057 sub     ax, [bp+var_A] ;~ 1359:0DDB
cs=0x1359;eip=0x000dde; 	T(CMP(ax, di));	// 36058 cmp     ax, di ;~ 1359:0DDE
cs=0x1359;eip=0x000de0; 	J(JG(loc_22928));	// 36059 jg      short loc_22928 ;~ 1359:0DE0
cs=0x1359;eip=0x000de2; 	T(MOV(ax, 0x1E));	// 36060 mov     ax, 1Eh ;~ 1359:0DE2
cs=0x1359;eip=0x000de5; 	X(IMUL1_2(framespersec));	// 36061 imul    framespersec ;~ 1359:0DE5
cs=0x1359;eip=0x000de9; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 36062 mov     [bp+var_A], ax ;~ 1359:0DE9
cs=0x1359;eip=0x000dec; 	X(SUB(elapsed_time2, ax));	// 36063 sub     elapsed_time2, ax ;~ 1359:0DEC
cs=0x1359;eip=0x000df0; 	X(SUB(word_449bc, ax));	// 36064 sub     word_449BC, ax ;~ 1359:0DF0
cs=0x1359;eip=0x000df4; 	X(ADD(elapsed_time1, ax));	// 36065 add     elapsed_time1, ax ;~ 1359:0DF4
cs=0x1359;eip=0x000df8; 	X(SUB(word_445d4, ax));	// 36066 sub     word_445D4, ax ;~ 1359:0DF8
loc_2296c:
	// 6804 
cs=0x1359;eip=0x000dfc; 	T(MOV(bx, elapsed_time2));	// 36069 mov     bx, elapsed_time2 ;~ 1359:0DFC
cs=0x1359;eip=0x000e00; 	X(INC(elapsed_time2));	// 36070 inc     elapsed_time2 ;~ 1359:0E00
cs=0x1359;eip=0x000e04; 	T(ADD(bx, *(dw*)(((db*)&td16_rpl_buffer))));	// 36071 add     bx, word ptr td16_rpl_buffer ;~ 1359:0E04
cs=0x1359;eip=0x000e08; 	T(MOV(es, *(dw*)(((db*)&td16_rpl_buffer)+2)));	// 36072 mov     es, word ptr td16_rpl_buffer+2 ;~ 1359:0E08
cs=0x1359;eip=0x000e0c; 	T(MOV(ax, si));	// 36073 mov     ax, si ;~ 1359:0E0C
cs=0x1359;eip=0x000e0e; 	X(MOV(*(raddr(es,bx)), al));	// 36074 mov     es:[bx], al ;~ 1359:0E0E
cs=0x1359;eip=0x000e11; 	X(INC(word_449bc));	// 36075 inc     word_449BC ;~ 1359:0E11
loc_22985:
	// 6805 
cs=0x1359;eip=0x000e15; 	X(POP(si));	// 36078 pop     si ;~ 1359:0E15
cs=0x1359;eip=0x000e16; 	X(POP(di));	// 36079 pop     di ;~ 1359:0E16
cs=0x1359;eip=0x000e17; 	T(MOV(sp, bp));	// 36080 mov     sp, bp ;~ 1359:0E17
cs=0x1359;eip=0x000e19; 	X(POP(bp));	// 36081 pop     bp ;~ 1359:0E19
cs=0x1359;eip=0x000e1a; 	J(RETF(0));	// 36082 retf ;~ 1359:0E1A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_226a6: 	goto loc_226a6;
        case m2c::kloc_226ac: 	goto loc_226ac;
        case m2c::kloc_226c6: 	goto loc_226c6;
        case m2c::kloc_226d0: 	goto loc_226d0;
        case m2c::kloc_226da: 	goto loc_226da;
        case m2c::kloc_226e6: 	goto loc_226e6;
        case m2c::kloc_22725: 	goto loc_22725;
        case m2c::kloc_22736: 	goto loc_22736;
        case m2c::kloc_2276c: 	goto loc_2276c;
        case m2c::kloc_22776: 	goto loc_22776;
        case m2c::kloc_22779: 	goto loc_22779;
        case m2c::kloc_2278a: 	goto loc_2278a;
        case m2c::kloc_22796: 	goto loc_22796;
        case m2c::kloc_2279a: 	goto loc_2279a;
        case m2c::kloc_227b0: 	goto loc_227b0;
        case m2c::kloc_227c5: 	goto loc_227c5;
        case m2c::kloc_227c8: 	goto loc_227c8;
        case m2c::kloc_227d2: 	goto loc_227d2;
        case m2c::kloc_227e8: 	goto loc_227e8;
        case m2c::kloc_227ef: 	goto loc_227ef;
        case m2c::kloc_22803: 	goto loc_22803;
        case m2c::kloc_22817: 	goto loc_22817;
        case m2c::kloc_2283c: 	goto loc_2283c;
        case m2c::kloc_22847: 	goto loc_22847;
        case m2c::kloc_22866: 	goto loc_22866;
        case m2c::kloc_2286c: 	goto loc_2286c;
        case m2c::kloc_22909: 	goto loc_22909;
        case m2c::kloc_22924: 	goto loc_22924;
        case m2c::kloc_22928: 	goto loc_22928;
        case m2c::kloc_2293e: 	goto loc_2293e;
        case m2c::kloc_2296c: 	goto loc_2296c;
        case m2c::kloc_22985: 	goto loc_22985;
        case m2c::kreplay_unk2: 	goto replay_unk2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2298c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2298c:
    _begin:
#undef var_34
#define var_34 -0x34
	// 36094 var_34          = dword ptr -34h ;~ 1359:0E1C
#undef var_30
#define var_30 -0x30
	// 36095 var_30          = word ptr -30h ;~ 1359:0E1C
#undef var_2e
#define var_2e -0x2E
	// 36096 var_2E          = word ptr -2Eh ;~ 1359:0E1C
#undef var_2c
#define var_2c -0x2C
	// 36097 var_2C          = word ptr -2Ch ;~ 1359:0E1C
#undef var_2a
#define var_2a -0x2A
	// 36098 var_2A          = word ptr -2Ah ;~ 1359:0E1C
#undef var_28
#define var_28 -0x28
	// 36099 var_28          = word ptr -28h ;~ 1359:0E1C
#undef var_26
#define var_26 -0x26
	// 36100 var_26          = word ptr -26h ;~ 1359:0E1C
#undef var_24
#define var_24 -0x24
	// 36101 var_24          = word ptr -24h ;~ 1359:0E1C
#undef var_22
#define var_22 -0x22
	// 36102 var_22          = word ptr -22h ;~ 1359:0E1C
#undef var_20
#define var_20 -0x20
	// 36103 var_20          = word ptr -20h ;~ 1359:0E1C
#undef var_1e
#define var_1e -0x1E
	// 36104 var_1E          = word ptr -1Eh ;~ 1359:0E1C
#undef var_1c
#define var_1c -0x1C
	// 36105 var_1C          = word ptr -1Ch ;~ 1359:0E1C
#undef var_1a
#define var_1a -0x1A
	// 36106 var_1A          = word ptr -1Ah ;~ 1359:0E1C
#undef var_18
#define var_18 -0x18
	// 36107 var_18          = word ptr -18h ;~ 1359:0E1C
#undef var_14
#define var_14 -0x14
	// 36108 var_14          = word ptr -14h ;~ 1359:0E1C
#undef var_10
#define var_10 -0x10
	// 36109 var_10          = word ptr -10h ;~ 1359:0E1C
#undef var_e
#define var_e -0x0E
	// 36110 var_E           = word ptr -0Eh ;~ 1359:0E1C
#undef var_c
#define var_c -0x0C
	// 36111 var_C           = word ptr -0Ch ;~ 1359:0E1C
#undef var_a
#define var_a -0x0A
	// 36112 var_A           = byte ptr -0Ah ;~ 1359:0E1C
#undef var_8
#define var_8 -8
	// 36113 var_8           = word ptr -8 ;~ 1359:0E1C
#undef var_6
#define var_6 -6
	// 36114 var_6           = word ptr -6 ;~ 1359:0E1C
#undef var_2
#define var_2 -2
	// 36115 var_2           = word ptr -2 ;~ 1359:0E1C
cs=0x1359;eip=0x000e1c; 	X(PUSH(bp));	// 36117 push    bp ;~ 1359:0E1C
cs=0x1359;eip=0x000e1d; 	T(MOV(bp, sp));	// 36118 mov     bp, sp ;~ 1359:0E1D
cs=0x1359;eip=0x000e1f; 	T(SUB(sp, 0x34));	// 36119 sub     sp, 34h ;~ 1359:0E1F
cs=0x1359;eip=0x000e22; 	X(PUSH(di));	// 36120 push    di ;~ 1359:0E22
cs=0x1359;eip=0x000e23; 	X(PUSH(si));	// 36121 push    si ;~ 1359:0E23
cs=0x1359;eip=0x000e24; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), 1));	// 36122 mov     [bp+var_2A], 1 ;~ 1359:0E24
cs=0x1359;eip=0x000e29; 	T(CMP(byte_449aa, 0));	// 36123 cmp     byte_449AA, 0 ;~ 1359:0E29
cs=0x1359;eip=0x000e2e; 	J(JZ(loc_229a5));	// 36124 jz      short loc_229A5 ;~ 1359:0E2E
cs=0x1359;eip=0x000e30; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), 2));	// 36125 mov     [bp+var_2A], 2 ;~ 1359:0E30
loc_229a5:
	// 6806 
cs=0x1359;eip=0x000e35; 	T(SUB(si, si));	// 36128 sub     si, si ;~ 1359:0E35
cs=0x1359;eip=0x000e37; 	J(JMP(loc_22c53));	// 36129 jmp     loc_22C53 ;~ 1359:0E37
loc_229aa:
	// 6807 
cs=0x1359;eip=0x000e3a; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), offset(dseg,word_446b6)));	// 36133 mov     [bp+var_24], offset word_446B6 ;~ 1359:0E3A
loc_229af:
	// 6808 
cs=0x1359;eip=0x000e3f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_24))));	// 36136 mov     bx, [bp+var_24] ;~ 1359:0E3F
cs=0x1359;eip=0x000e42; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 36137 mov     ax, [bx+4] ;~ 1359:0E42
cs=0x1359;eip=0x000e45; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 36138 mov     dx, [bx+6] ;~ 1359:0E45
cs=0x1359;eip=0x000e48; 	T(MOV(cl, 6));	// 36139 mov     cl, 6 ;~ 1359:0E48
loc_229ba:
	// 6809 
cs=0x1359;eip=0x000e4a; 	T(SAR(dx, 1));	// 36142 sar     dx, 1 ;~ 1359:0E4A
cs=0x1359;eip=0x000e4c; 	T(RCR(ax, 1));	// 36143 rcr     ax, 1 ;~ 1359:0E4C
cs=0x1359;eip=0x000e4e; 	T(DEC(cl));	// 36144 dec     cl ;~ 1359:0E4E
cs=0x1359;eip=0x000e50; 	J(JNZ(loc_229ba));	// 36145 jnz     short loc_229BA ;~ 1359:0E50
cs=0x1359;eip=0x000e52; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 36146 mov     [bp+var_1A], ax ;~ 1359:0E52
cs=0x1359;eip=0x000e55; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_24))));	// 36147 mov     bx, [bp+var_24] ;~ 1359:0E55
cs=0x1359;eip=0x000e58; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 36148 mov     ax, [bx+0] ;~ 1359:0E58
cs=0x1359;eip=0x000e5a; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 36149 mov     dx, [bx+2] ;~ 1359:0E5A
cs=0x1359;eip=0x000e5d; 	T(MOV(cl, 6));	// 36150 mov     cl, 6 ;~ 1359:0E5D
loc_229cf:
	// 6810 
cs=0x1359;eip=0x000e5f; 	T(SAR(dx, 1));	// 36153 sar     dx, 1 ;~ 1359:0E5F
cs=0x1359;eip=0x000e61; 	T(RCR(ax, 1));	// 36154 rcr     ax, 1 ;~ 1359:0E61
cs=0x1359;eip=0x000e63; 	T(DEC(cl));	// 36155 dec     cl ;~ 1359:0E63
cs=0x1359;eip=0x000e65; 	J(JNZ(loc_229cf));	// 36156 jnz     short loc_229CF ;~ 1359:0E65
cs=0x1359;eip=0x000e67; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 36157 mov     [bp+var_1C], ax ;~ 1359:0E67
cs=0x1359;eip=0x000e6a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_24))));	// 36158 mov     bx, [bp+var_24] ;~ 1359:0E6A
cs=0x1359;eip=0x000e6d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 36159 mov     ax, [bx+8] ;~ 1359:0E6D
cs=0x1359;eip=0x000e70; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 36160 mov     dx, [bx+0Ah] ;~ 1359:0E70
cs=0x1359;eip=0x000e73; 	T(MOV(cl, 6));	// 36161 mov     cl, 6 ;~ 1359:0E73
loc_229e5:
	// 6811 
cs=0x1359;eip=0x000e75; 	T(SAR(dx, 1));	// 36164 sar     dx, 1 ;~ 1359:0E75
cs=0x1359;eip=0x000e77; 	T(RCR(ax, 1));	// 36165 rcr     ax, 1 ;~ 1359:0E77
cs=0x1359;eip=0x000e79; 	T(DEC(cl));	// 36166 dec     cl ;~ 1359:0E79
cs=0x1359;eip=0x000e7b; 	J(JNZ(loc_229e5));	// 36167 jnz     short loc_229E5 ;~ 1359:0E7B
cs=0x1359;eip=0x000e7d; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 36168 mov     [bp+var_18], ax ;~ 1359:0E7D
cs=0x1359;eip=0x000e80; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_24))));	// 36169 mov     bx, [bp+var_24] ;~ 1359:0E80
cs=0x1359;eip=0x000e83; 	X(PUSH(si));	// 36170 push    si ;~ 1359:0E83
cs=0x1359;eip=0x000e84; 	X(PUSH(di));	// 36171 push    di ;~ 1359:0E84
cs=0x1359;eip=0x000e85; 	T(di = bp+var_6);	// 36172 lea     di, [bp+var_6] ;~ 1359:0E85
cs=0x1359;eip=0x000e88; 	T(si = bx+0x0A4);	// 36173 lea     si, [bx+0A4h] ;~ 1359:0E88
cs=0x1359;eip=0x000e8c; 	X(PUSH(ss));	// 36174 push    ss ;~ 1359:0E8C
cs=0x1359;eip=0x000e8d; 	X(POP(es));	// 36175 pop     es ;~ 1359:0E8D
cs=0x1359;eip=0x000e8e; 	X(MOVSW);	// 36176 movsw ;~ 1359:0E8E
cs=0x1359;eip=0x000e8f; 	X(MOVSW);	// 36177 movsw ;~ 1359:0E8F
cs=0x1359;eip=0x000e90; 	X(MOVSW);	// 36178 movsw ;~ 1359:0E90
cs=0x1359;eip=0x000e91; 	X(POP(di));	// 36179 pop     di ;~ 1359:0E91
cs=0x1359;eip=0x000e92; 	X(POP(si));	// 36180 pop     si ;~ 1359:0E92
cs=0x1359;eip=0x000e93; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_24))));	// 36181 mov     bx, [bp+var_24] ;~ 1359:0E93
cs=0x1359;eip=0x000e96; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x48))));	// 36182 mov     ax, [bx+48h] ;~ 1359:0E96
cs=0x1359;eip=0x000e99; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 36183 mov     [bp+var_E], ax ;~ 1359:0E99
cs=0x1359;eip=0x000e9c; 	T(OR(si, si));	// 36184 or      si, si ;~ 1359:0E9C
cs=0x1359;eip=0x000e9e; 	J(JNZ(loc_22a1e));	// 36185 jnz     short loc_22A1E ;~ 1359:0E9E
cs=0x1359;eip=0x000ea0; 	T(CMP(byte_448ef, 0));	// 36186 cmp     byte_448EF, 0 ;~ 1359:0EA0
cs=0x1359;eip=0x000ea5; 	J(JNZ(loc_22a40));	// 36187 jnz     short loc_22A40 ;~ 1359:0EA5
cs=0x1359;eip=0x000ea7; 	T(CMP(byte_448f0, 0));	// 36188 cmp     byte_448F0, 0 ;~ 1359:0EA7
cs=0x1359;eip=0x000eac; 	J(JNZ(loc_22a40));	// 36189 jnz     short loc_22A40 ;~ 1359:0EAC
loc_22a1e:
	// 6812 
cs=0x1359;eip=0x000eae; 	T(CMP(*(dw*)(raddr(ds,bx+0x0B6)), 0));	// 36192 cmp     word ptr [bx+0B6h], 0 ;~ 1359:0EAE
cs=0x1359;eip=0x000eb3; 	J(JNZ(loc_22a40));	// 36193 jnz     short loc_22A40 ;~ 1359:0EB3
cs=0x1359;eip=0x000eb5; 	T(CMP(*(raddr(ds,bx+0x0C9)), 0));	// 36194 cmp     byte ptr [bx+0C9h], 0 ;~ 1359:0EB5
cs=0x1359;eip=0x000eba; 	J(JNZ(loc_22a40));	// 36195 jnz     short loc_22A40 ;~ 1359:0EBA
cs=0x1359;eip=0x000ebc; 	T(CMP(*(dw*)(raddr(ds,bx+0x4A)), 0x0FFFF));	// 36196 cmp     word ptr [bx+4Ah], 0FFFFh ;~ 1359:0EBC
cs=0x1359;eip=0x000ec0; 	J(JZ(loc_22a40));	// 36197 jz      short loc_22A40 ;~ 1359:0EC0
cs=0x1359;eip=0x000ec2; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0x80));	// 36198 cmp     [bp+var_E], 80h ; '€' ;~ 1359:0EC2
cs=0x1359;eip=0x000ec7; 	J(JLE(loc_22a4d));	// 36199 jle     short loc_22A4D ;~ 1359:0EC7
cs=0x1359;eip=0x000ec9; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0x380));	// 36200 cmp     [bp+var_E], 380h ;~ 1359:0EC9
cs=0x1359;eip=0x000ece; 	J(JGE(loc_22a4d));	// 36201 jge     short loc_22A4D ;~ 1359:0ECE
loc_22a40:
	// 6813 
cs=0x1359;eip=0x000ed0; 	X(PUSH(si));	// 36205 push    si ;~ 1359:0ED0
cs=0x1359;eip=0x000ed1; 	X(PUSH(di));	// 36206 push    di ;~ 1359:0ED1
cs=0x1359;eip=0x000ed2; 	T(di = bp+var_6);	// 36207 lea     di, [bp+var_6] ;~ 1359:0ED2
cs=0x1359;eip=0x000ed5; 	T(si = bp+var_1c);	// 36208 lea     si, [bp+var_1C] ;~ 1359:0ED5
cs=0x1359;eip=0x000ed8; 	X(MOVSW);	// 36209 movsw ;~ 1359:0ED8
cs=0x1359;eip=0x000ed9; 	X(MOVSW);	// 36210 movsw ;~ 1359:0ED9
cs=0x1359;eip=0x000eda; 	X(MOVSW);	// 36211 movsw ;~ 1359:0EDA
cs=0x1359;eip=0x000edb; 	X(POP(di));	// 36212 pop     di ;~ 1359:0EDB
cs=0x1359;eip=0x000edc; 	X(POP(si));	// 36213 pop     si ;~ 1359:0EDC
loc_22a4d:
	// 6814 
cs=0x1359;eip=0x000edd; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 0x1C2));	// 36217 mov     [bp+var_22], 1C2h ;~ 1359:0EDD
cs=0x1359;eip=0x000ee2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 36218 mov     ax, [bp+var_1A] ;~ 1359:0EE2
cs=0x1359;eip=0x000ee5; 	T(ADD(ax, 0x10E));	// 36219 add     ax, 10Eh ;~ 1359:0EE5
cs=0x1359;eip=0x000ee8; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 36220 mov     [bp+var_14], ax ;~ 1359:0EE8
cs=0x1359;eip=0x000eeb; 	T(MOV(bx, si));	// 36221 mov     bx, si ;~ 1359:0EEB
cs=0x1359;eip=0x000eed; 	T(MOV(ax, bx));	// 36222 mov     ax, bx ;~ 1359:0EED
cs=0x1359;eip=0x000eef; 	T(SHL(bx, 1));	// 36223 shl     bx, 1 ;~ 1359:0EEF
cs=0x1359;eip=0x000ef1; 	T(ADD(bx, ax));	// 36224 add     bx, ax ;~ 1359:0EF1
cs=0x1359;eip=0x000ef3; 	T(SHL(bx, 1));	// 36225 shl     bx, 1 ;~ 1359:0EF3
cs=0x1359;eip=0x000ef5; 	T(MOV(ax, *(dw*)(((db*)&word_445b6)+bx)));	// 36226 mov     ax, word_445B6[bx] ;~ 1359:0EF5
cs=0x1359;eip=0x000ef9; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_14))));	// 36227 sub     ax, [bp+var_14] ;~ 1359:0EF9
cs=0x1359;eip=0x000efc; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 36228 mov     [bp+var_C], ax ;~ 1359:0EFC
cs=0x1359;eip=0x000eff; 	T(OR(ax, ax));	// 36229 or      ax, ax ;~ 1359:0EFF
cs=0x1359;eip=0x000f01; 	J(JZ(loc_22a96));	// 36230 jz      short loc_22A96 ;~ 1359:0F01
cs=0x1359;eip=0x000f03; 	T(MOV(di, ax));	// 36231 mov     di, ax ;~ 1359:0F03
cs=0x1359;eip=0x000f05; 	T(CMP(di, 0x1E));	// 36232 cmp     di, 1Eh ;~ 1359:0F05
cs=0x1359;eip=0x000f08; 	J(JLE(loc_22a80));	// 36233 jle     short loc_22A80 ;~ 1359:0F08
cs=0x1359;eip=0x000f0a; 	T(MOV(di, 0x1E));	// 36234 mov     di, 1Eh ;~ 1359:0F0A
cs=0x1359;eip=0x000f0d; 	J(JMP(loc_22a88));	// 36235 jmp     short loc_22A88 ;~ 1359:0F0D
loc_22a80:
	// 6815 
cs=0x1359;eip=0x000f10; 	T(CMP(di, 0x0FFE2));	// 36240 cmp     di, 0FFE2h ;~ 1359:0F10
cs=0x1359;eip=0x000f13; 	J(JGE(loc_22a88));	// 36241 jge     short loc_22A88 ;~ 1359:0F13
cs=0x1359;eip=0x000f15; 	T(MOV(di, 0x0FFE2));	// 36242 mov     di, 0FFE2h ;~ 1359:0F15
loc_22a88:
	// 6816 
cs=0x1359;eip=0x000f18; 	T(MOV(bx, si));	// 36246 mov     bx, si ;~ 1359:0F18
cs=0x1359;eip=0x000f1a; 	T(MOV(ax, bx));	// 36247 mov     ax, bx ;~ 1359:0F1A
cs=0x1359;eip=0x000f1c; 	T(SHL(bx, 1));	// 36248 shl     bx, 1 ;~ 1359:0F1C
cs=0x1359;eip=0x000f1e; 	T(ADD(bx, ax));	// 36249 add     bx, ax ;~ 1359:0F1E
cs=0x1359;eip=0x000f20; 	T(SHL(bx, 1));	// 36250 shl     bx, 1 ;~ 1359:0F20
cs=0x1359;eip=0x000f22; 	X(SUB(*(dw*)(((db*)&word_445b6)+bx), di));	// 36251 sub     word_445B6[bx], di ;~ 1359:0F22
loc_22a96:
	// 6817 
cs=0x1359;eip=0x000f26; 	T(MOV(ax, si));	// 36254 mov     ax, si ;~ 1359:0F26
cs=0x1359;eip=0x000f28; 	T(MOV(cx, ax));	// 36255 mov     cx, ax ;~ 1359:0F28
cs=0x1359;eip=0x000f2a; 	T(SHL(ax, 1));	// 36256 shl     ax, 1 ;~ 1359:0F2A
cs=0x1359;eip=0x000f2c; 	T(ADD(ax, cx));	// 36257 add     ax, cx ;~ 1359:0F2C
cs=0x1359;eip=0x000f2e; 	T(SHL(ax, 1));	// 36258 shl     ax, 1 ;~ 1359:0F2E
cs=0x1359;eip=0x000f30; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 36259 mov     [bp+var_2E], ax ;~ 1359:0F30
cs=0x1359;eip=0x000f33; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 36260 mov     ax, [bp+var_2] ;~ 1359:0F33
cs=0x1359;eip=0x000f36; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2e))));	// 36261 mov     bx, [bp+var_2E] ;~ 1359:0F36
cs=0x1359;eip=0x000f39; 	T(SUB(ax, *(dw*)(((db*)&word_445b8)+bx)));	// 36262 sub     ax, word_445B8[bx] ;~ 1359:0F39
cs=0x1359;eip=0x000f3d; 	X(PUSH(ax));	// 36263 push    ax ;~ 1359:0F3D
cs=0x1359;eip=0x000f3e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 36264 mov     ax, [bp+var_6] ;~ 1359:0F3E
cs=0x1359;eip=0x000f41; 	T(SUB(ax, *(dw*)(((db*)&word_445b4)+bx)));	// 36265 sub     ax, word_445B4[bx] ;~ 1359:0F41
cs=0x1359;eip=0x000f45; 	X(PUSH(ax));	// 36266 push    ax ;~ 1359:0F45
cs=0x1359;eip=0x000f46; 	J(CALLF(polarangle,0));	// 36267 call    polarAngle ;~ 1359:0F46
cs=0x1359;eip=0x000f4b; 	T(ADD(sp, 4));	// 36268 add     sp, 4 ;~ 1359:0F4B
cs=0x1359;eip=0x000f4e; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 36269 mov     [bp+var_10], ax ;~ 1359:0F4E
cs=0x1359;eip=0x000f51; 	T(MOV(ax, si));	// 36270 mov     ax, si ;~ 1359:0F51
cs=0x1359;eip=0x000f53; 	T(MOV(cx, ax));	// 36271 mov     cx, ax ;~ 1359:0F53
cs=0x1359;eip=0x000f55; 	T(SHL(ax, 1));	// 36272 shl     ax, 1 ;~ 1359:0F55
cs=0x1359;eip=0x000f57; 	T(ADD(ax, cx));	// 36273 add     ax, cx ;~ 1359:0F57
cs=0x1359;eip=0x000f59; 	T(SHL(ax, 1));	// 36274 shl     ax, 1 ;~ 1359:0F59
cs=0x1359;eip=0x000f5b; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 36275 mov     [bp+var_30], ax ;~ 1359:0F5B
cs=0x1359;eip=0x000f5e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 36276 mov     ax, [bp+var_18] ;~ 1359:0F5E
cs=0x1359;eip=0x000f61; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_30))));	// 36277 mov     bx, [bp+var_30] ;~ 1359:0F61
cs=0x1359;eip=0x000f64; 	T(SUB(ax, *(dw*)(((db*)&word_445b8)+bx)));	// 36278 sub     ax, word_445B8[bx] ;~ 1359:0F64
cs=0x1359;eip=0x000f68; 	X(PUSH(ax));	// 36279 push    ax ;~ 1359:0F68
cs=0x1359;eip=0x000f69; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 36280 mov     ax, [bp+var_1C] ;~ 1359:0F69
cs=0x1359;eip=0x000f6c; 	T(SUB(ax, *(dw*)(((db*)&word_445b4)+bx)));	// 36281 sub     ax, word_445B4[bx] ;~ 1359:0F6C
cs=0x1359;eip=0x000f70; 	X(PUSH(ax));	// 36282 push    ax ;~ 1359:0F70
cs=0x1359;eip=0x000f71; 	J(CALLF(polarradius2d,0));	// 36283 call    polarRadius2D ;~ 1359:0F71
cs=0x1359;eip=0x000f76; 	T(ADD(sp, 4));	// 36284 add     sp, 4 ;~ 1359:0F76
cs=0x1359;eip=0x000f79; 	T(MOV(di, ax));	// 36285 mov     di, ax ;~ 1359:0F79
cs=0x1359;eip=0x000f7b; 	T(CMP(*(dw*)(raddr(ss,bp+var_22)), di));	// 36286 cmp     [bp+var_22], di ;~ 1359:0F7B
cs=0x1359;eip=0x000f7e; 	J(JGE(loc_22b53));	// 36287 jge     short loc_22B53 ;~ 1359:0F7E
cs=0x1359;eip=0x000f80; 	T(SUB(di, *(dw*)(raddr(ss,bp+var_22))));	// 36288 sub     di, [bp+var_22] ;~ 1359:0F80
cs=0x1359;eip=0x000f83; 	T(CMP(framespersec, 0x14));	// 36289 cmp     framespersec, 14h ;~ 1359:0F83
cs=0x1359;eip=0x000f88; 	J(JNZ(loc_22b04));	// 36290 jnz     short loc_22B04 ;~ 1359:0F88
cs=0x1359;eip=0x000f8a; 	T(CMP(di, 0x78));	// 36291 cmp     di, 78h ; 'x' ;~ 1359:0F8A
cs=0x1359;eip=0x000f8d; 	J(JLE(loc_22b0d));	// 36292 jle     short loc_22B0D ;~ 1359:0F8D
cs=0x1359;eip=0x000f8f; 	T(MOV(di, 0x78));	// 36293 mov     di, 78h ; 'x' ;~ 1359:0F8F
cs=0x1359;eip=0x000f92; 	J(JMP(loc_22b0d));	// 36294 jmp     short loc_22B0D ;~ 1359:0F92
loc_22b04:
	// 6818 
cs=0x1359;eip=0x000f94; 	T(CMP(di, 0x0F0));	// 36298 cmp     di, 0F0h ; 'ğ' ;~ 1359:0F94
cs=0x1359;eip=0x000f98; 	J(JLE(loc_22b0d));	// 36299 jle     short loc_22B0D ;~ 1359:0F98
cs=0x1359;eip=0x000f9a; 	T(MOV(di, 0x0F0));	// 36300 mov     di, 0F0h ; 'ğ' ;~ 1359:0F9A
loc_22b0d:
	// 6819 
cs=0x1359;eip=0x000f9d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10))));	// 36304 push    [bp+var_10] ;~ 1359:0F9D
cs=0x1359;eip=0x000fa0; 	J(CALLF(sin_fast,0));	// 36305 call    sin_fast ;~ 1359:0FA0
cs=0x1359;eip=0x000fa5; 	T(ADD(sp, 2));	// 36306 add     sp, 2 ;~ 1359:0FA5
cs=0x1359;eip=0x000fa8; 	X(PUSH(ax));	// 36307 push    ax ;~ 1359:0FA8
cs=0x1359;eip=0x000fa9; 	X(PUSH(di));	// 36308 push    di ;~ 1359:0FA9
cs=0x1359;eip=0x000faa; 	J(CALLF(multiply_and_scale,0));	// 36309 call    multiply_and_scale ;~ 1359:0FAA
cs=0x1359;eip=0x000faf; 	T(ADD(sp, 4));	// 36310 add     sp, 4 ;~ 1359:0FAF
cs=0x1359;eip=0x000fb2; 	T(MOV(bx, si));	// 36311 mov     bx, si ;~ 1359:0FB2
cs=0x1359;eip=0x000fb4; 	T(MOV(cx, bx));	// 36312 mov     cx, bx ;~ 1359:0FB4
cs=0x1359;eip=0x000fb6; 	T(SHL(bx, 1));	// 36313 shl     bx, 1 ;~ 1359:0FB6
cs=0x1359;eip=0x000fb8; 	T(ADD(bx, cx));	// 36314 add     bx, cx ;~ 1359:0FB8
cs=0x1359;eip=0x000fba; 	T(SHL(bx, 1));	// 36315 shl     bx, 1 ;~ 1359:0FBA
cs=0x1359;eip=0x000fbc; 	X(ADD(*(dw*)(((db*)&word_445b4)+bx), ax));	// 36316 add     word_445B4[bx], ax ;~ 1359:0FBC
cs=0x1359;eip=0x000fc0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10))));	// 36317 push    [bp+var_10] ;~ 1359:0FC0
cs=0x1359;eip=0x000fc3; 	J(CALLF(cos_fast,0));	// 36318 call    cos_fast ;~ 1359:0FC3
cs=0x1359;eip=0x000fc8; 	T(ADD(sp, 2));	// 36319 add     sp, 2 ;~ 1359:0FC8
cs=0x1359;eip=0x000fcb; 	X(PUSH(ax));	// 36320 push    ax ;~ 1359:0FCB
cs=0x1359;eip=0x000fcc; 	X(PUSH(di));	// 36321 push    di ;~ 1359:0FCC
cs=0x1359;eip=0x000fcd; 	J(CALLF(multiply_and_scale,0));	// 36322 call    multiply_and_scale ;~ 1359:0FCD
cs=0x1359;eip=0x000fd2; 	T(ADD(sp, 4));	// 36323 add     sp, 4 ;~ 1359:0FD2
cs=0x1359;eip=0x000fd5; 	T(MOV(bx, si));	// 36324 mov     bx, si ;~ 1359:0FD5
cs=0x1359;eip=0x000fd7; 	T(MOV(cx, bx));	// 36325 mov     cx, bx ;~ 1359:0FD7
cs=0x1359;eip=0x000fd9; 	T(SHL(bx, 1));	// 36326 shl     bx, 1 ;~ 1359:0FD9
cs=0x1359;eip=0x000fdb; 	T(ADD(bx, cx));	// 36327 add     bx, cx ;~ 1359:0FDB
cs=0x1359;eip=0x000fdd; 	T(SHL(bx, 1));	// 36328 shl     bx, 1 ;~ 1359:0FDD
cs=0x1359;eip=0x000fdf; 	X(ADD(*(dw*)(((db*)&word_445b8)+bx), ax));	// 36329 add     word_445B8[bx], ax ;~ 1359:0FDF
loc_22b53:
	// 6820 
cs=0x1359;eip=0x000fe3; 	T(MOV(ax, word_445d4));	// 36332 mov     ax, word_445D4 ;~ 1359:0FE3
cs=0x1359;eip=0x000fe6; 	T(SUB(dx, dx));	// 36333 sub     dx, dx ;~ 1359:0FE6
cs=0x1359;eip=0x000fe8; 	T(MOV(cx, framespersec));	// 36334 mov     cx, framespersec ;~ 1359:0FE8
cs=0x1359;eip=0x000fec; 	T(SAR(cx, 1));	// 36335 sar     cx, 1 ;~ 1359:0FEC
cs=0x1359;eip=0x000fee; 	T(DIV2(cx));	// 36336 div     cx ;~ 1359:0FEE
cs=0x1359;eip=0x000ff0; 	T(OR(dx, dx));	// 36337 or      dx, dx ;~ 1359:0FF0
cs=0x1359;eip=0x000ff2; 	J(JZ(loc_22b67));	// 36338 jz      short loc_22B67 ;~ 1359:0FF2
cs=0x1359;eip=0x000ff4; 	J(JMP(loc_22c52));	// 36339 jmp     loc_22C52 ;~ 1359:0FF4
loc_22b67:
	// 6821 
cs=0x1359;eip=0x000ff7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), 0x2710));	// 36343 mov     [bp+var_2C], 2710h ;~ 1359:0FF7
cs=0x1359;eip=0x000ffc; 	X(MOV(*(raddr(ss,bp+var_a)), 0));	// 36344 mov     [bp+var_A], 0 ;~ 1359:0FFC
cs=0x1359;eip=0x001000; 	J(JMP(loc_22be3));	// 36345 jmp     short loc_22BE3 ;~ 1359:1000
loc_22b74:
	// 6822 
cs=0x1359;eip=0x001004; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_20))));	// 36351 mov     ax, [bp+var_20] ;~ 1359:1004
cs=0x1359;eip=0x001007; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_1e))));	// 36352 mov     dx, [bp+var_1E] ;~ 1359:1007
loc_22b7a:
	// 6823 
cs=0x1359;eip=0x00100a; 	T(MOV(cx, ax));	// 36355 mov     cx, ax ;~ 1359:100A
cs=0x1359;eip=0x00100c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 36356 mov     ax, [bp+var_2C] ;~ 1359:100C
cs=0x1359;eip=0x00100f; 	T(MOV(bx, dx));	// 36357 mov     bx, dx ;~ 1359:100F
cs=0x1359;eip=0x001011; 	T(CWD);	// 36358 cwd ;~ 1359:1011
cs=0x1359;eip=0x001012; 	T(CMP(bx, dx));	// 36359 cmp     bx, dx ;~ 1359:1012
cs=0x1359;eip=0x001014; 	J(JG(loc_22be0));	// 36360 jg      short loc_22BE0 ;~ 1359:1014
cs=0x1359;eip=0x001016; 	J(JL(loc_22b8c));	// 36361 jl      short loc_22B8C ;~ 1359:1016
cs=0x1359;eip=0x001018; 	T(CMP(cx, ax));	// 36362 cmp     cx, ax ;~ 1359:1018
cs=0x1359;eip=0x00101a; 	J(JNC(loc_22be0));	// 36363 jnb     short loc_22BE0 ;~ 1359:101A
loc_22b8c:
	// 6824 
cs=0x1359;eip=0x00101c; 	T(CMP(*(dw*)(raddr(ss,bp+var_26)), 0));	// 36366 cmp     [bp+var_26], 0 ;~ 1359:101C
cs=0x1359;eip=0x001020; 	J(JGE(loc_22ba2));	// 36367 jge     short loc_22BA2 ;~ 1359:1020
cs=0x1359;eip=0x001022; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 36368 mov     ax, [bp+var_28] ;~ 1359:1022
cs=0x1359;eip=0x001025; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_26))));	// 36369 mov     dx, [bp+var_26] ;~ 1359:1025
cs=0x1359;eip=0x001028; 	T(NEG(ax));	// 36370 neg     ax ;~ 1359:1028
cs=0x1359;eip=0x00102a; 	T(ADC(dx, 0));	// 36371 adc     dx, 0 ;~ 1359:102A
cs=0x1359;eip=0x00102d; 	T(NEG(dx));	// 36372 neg     dx ;~ 1359:102D
cs=0x1359;eip=0x00102f; 	J(JMP(loc_22ba8));	// 36373 jmp     short loc_22BA8 ;~ 1359:102F
loc_22ba2:
	// 6825 
cs=0x1359;eip=0x001032; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 36378 mov     ax, [bp+var_28] ;~ 1359:1032
cs=0x1359;eip=0x001035; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_26))));	// 36379 mov     dx, [bp+var_26] ;~ 1359:1035
loc_22ba8:
	// 6826 
cs=0x1359;eip=0x001038; 	T(MOV(cx, ax));	// 36382 mov     cx, ax ;~ 1359:1038
cs=0x1359;eip=0x00103a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 36383 mov     ax, [bp+var_2C] ;~ 1359:103A
cs=0x1359;eip=0x00103d; 	T(MOV(bx, dx));	// 36384 mov     bx, dx ;~ 1359:103D
cs=0x1359;eip=0x00103f; 	T(CWD);	// 36385 cwd ;~ 1359:103F
cs=0x1359;eip=0x001040; 	T(CMP(bx, dx));	// 36386 cmp     bx, dx ;~ 1359:1040
cs=0x1359;eip=0x001042; 	J(JG(loc_22be0));	// 36387 jg      short loc_22BE0 ;~ 1359:1042
cs=0x1359;eip=0x001044; 	J(JL(loc_22bba));	// 36388 jl      short loc_22BBA ;~ 1359:1044
cs=0x1359;eip=0x001046; 	T(CMP(cx, ax));	// 36389 cmp     cx, ax ;~ 1359:1046
cs=0x1359;eip=0x001048; 	J(JNC(loc_22be0));	// 36390 jnb     short loc_22BE0 ;~ 1359:1048
loc_22bba:
	// 6827 
cs=0x1359;eip=0x00104a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_28))));	// 36393 push    [bp+var_28] ;~ 1359:104A
cs=0x1359;eip=0x00104d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_20))));	// 36394 push    [bp+var_20] ;~ 1359:104D
cs=0x1359;eip=0x001050; 	J(CALLF(polarradius2d,0));	// 36395 call    polarRadius2D ;~ 1359:1050
cs=0x1359;eip=0x001055; 	T(ADD(sp, 4));	// 36396 add     sp, 4 ;~ 1359:1055
cs=0x1359;eip=0x001058; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 36397 mov     [bp+var_8], ax ;~ 1359:1058
cs=0x1359;eip=0x00105b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 36398 mov     ax, [bp+var_2C] ;~ 1359:105B
cs=0x1359;eip=0x00105e; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), ax));	// 36399 cmp     [bp+var_8], ax ;~ 1359:105E
cs=0x1359;eip=0x001061; 	J(JGE(loc_22be0));	// 36400 jge     short loc_22BE0 ;~ 1359:1061
cs=0x1359;eip=0x001063; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 36401 mov     al, [bp+var_A] ;~ 1359:1063
cs=0x1359;eip=0x001066; 	X(MOV(*((&byte_4488b)+si), al));	// 36402 mov     byte_4488B[si], al ;~ 1359:1066
cs=0x1359;eip=0x00106a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 36403 mov     ax, [bp+var_8] ;~ 1359:106A
cs=0x1359;eip=0x00106d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 36404 mov     [bp+var_2C], ax ;~ 1359:106D
loc_22be0:
	// 6828 
cs=0x1359;eip=0x001070; 	X(INC(*(raddr(ss,bp+var_a))));	// 36408 inc     [bp+var_A] ;~ 1359:1070
loc_22be3:
	// 6829 
cs=0x1359;eip=0x001073; 	T(MOV(al, byte_4616e));	// 36411 mov     al, byte_4616E ;~ 1359:1073
cs=0x1359;eip=0x001076; 	T(CMP(*(raddr(ss,bp+var_a)), al));	// 36412 cmp     [bp+var_A], al ;~ 1359:1076
cs=0x1359;eip=0x001079; 	J(JGE(loc_22c52));	// 36413 jge     short loc_22C52 ;~ 1359:1079
cs=0x1359;eip=0x00107b; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 36414 mov     al, [bp+var_A] ;~ 1359:107B
cs=0x1359;eip=0x00107e; 	T(CBW);	// 36415 cbw ;~ 1359:107E
cs=0x1359;eip=0x00107f; 	T(MOV(cx, ax));	// 36416 mov     cx, ax ;~ 1359:107F
cs=0x1359;eip=0x001081; 	T(SHL(ax, 1));	// 36417 shl     ax, 1 ;~ 1359:1081
cs=0x1359;eip=0x001083; 	T(ADD(ax, cx));	// 36418 add     ax, cx ;~ 1359:1083
cs=0x1359;eip=0x001085; 	T(SHL(ax, 1));	// 36419 shl     ax, 1 ;~ 1359:1085
cs=0x1359;eip=0x001087; 	T(ADD(ax, trackdata9));	// 36420 add     ax, trackdata9 ;~ 1359:1087
cs=0x1359;eip=0x00108b; 	T(MOV(dx, word_449de));	// 36421 mov     dx, word_449DE ;~ 1359:108B
cs=0x1359;eip=0x00108f; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_34))), ax));	// 36422 mov     word ptr [bp+var_34], ax ;~ 1359:108F
cs=0x1359;eip=0x001092; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_34+2))), dx));	// 36423 mov     word ptr [bp+var_34+2], dx ;~ 1359:1092
cs=0x1359;eip=0x001095; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 36424 mov     ax, [bp+var_1C] ;~ 1359:1095
cs=0x1359;eip=0x001098; 	T(CWD);	// 36425 cwd ;~ 1359:1098
cs=0x1359;eip=0x001099; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_34))));	// 36426 les     bx, [bp+var_34] ;~ 1359:1099
cs=0x1359;eip=0x00109c; 	T(MOV(cx, ax));	// 36427 mov     cx, ax ;~ 1359:109C
cs=0x1359;eip=0x00109e; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 36428 mov     ax, es:[bx] ;~ 1359:109E
cs=0x1359;eip=0x0010a1; 	T(MOV(bx, dx));	// 36429 mov     bx, dx ;~ 1359:10A1
cs=0x1359;eip=0x0010a3; 	T(CWD);	// 36430 cwd ;~ 1359:10A3
cs=0x1359;eip=0x0010a4; 	T(SUB(ax, cx));	// 36431 sub     ax, cx ;~ 1359:10A4
cs=0x1359;eip=0x0010a6; 	T(SBB(dx, bx));	// 36432 sbb     dx, bx ;~ 1359:10A6
cs=0x1359;eip=0x0010a8; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 36433 mov     [bp+var_20], ax ;~ 1359:10A8
cs=0x1359;eip=0x0010ab; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), dx));	// 36434 mov     [bp+var_1E], dx ;~ 1359:10AB
cs=0x1359;eip=0x0010ae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 36435 mov     ax, [bp+var_18] ;~ 1359:10AE
cs=0x1359;eip=0x0010b1; 	T(CWD);	// 36436 cwd ;~ 1359:10B1
cs=0x1359;eip=0x0010b2; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_34)))));	// 36437 mov     bx, word ptr [bp+var_34] ;~ 1359:10B2
cs=0x1359;eip=0x0010b5; 	T(MOV(cx, ax));	// 36438 mov     cx, ax ;~ 1359:10B5
cs=0x1359;eip=0x0010b7; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 36439 mov     ax, es:[bx+4] ;~ 1359:10B7
cs=0x1359;eip=0x0010bb; 	T(MOV(bx, dx));	// 36440 mov     bx, dx ;~ 1359:10BB
cs=0x1359;eip=0x0010bd; 	T(CWD);	// 36441 cwd ;~ 1359:10BD
cs=0x1359;eip=0x0010be; 	T(SUB(ax, cx));	// 36442 sub     ax, cx ;~ 1359:10BE
cs=0x1359;eip=0x0010c0; 	T(SBB(dx, bx));	// 36443 sbb     dx, bx ;~ 1359:10C0
cs=0x1359;eip=0x0010c2; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 36444 mov     [bp+var_28], ax ;~ 1359:10C2
cs=0x1359;eip=0x0010c5; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), dx));	// 36445 mov     [bp+var_26], dx ;~ 1359:10C5
cs=0x1359;eip=0x0010c8; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 36446 cmp     [bp+var_1E], 0 ;~ 1359:10C8
cs=0x1359;eip=0x0010cc; 	J(JL(loc_22c41));	// 36447 jl      short loc_22C41 ;~ 1359:10CC
cs=0x1359;eip=0x0010ce; 	J(JMP(loc_22b74));	// 36448 jmp     loc_22B74 ;~ 1359:10CE
loc_22c41:
	// 6830 
cs=0x1359;eip=0x0010d1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_20))));	// 36452 mov     ax, [bp+var_20] ;~ 1359:10D1
cs=0x1359;eip=0x0010d4; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_1e))));	// 36453 mov     dx, [bp+var_1E] ;~ 1359:10D4
cs=0x1359;eip=0x0010d7; 	T(NEG(ax));	// 36454 neg     ax ;~ 1359:10D7
cs=0x1359;eip=0x0010d9; 	T(ADC(dx, 0));	// 36455 adc     dx, 0 ;~ 1359:10D9
cs=0x1359;eip=0x0010dc; 	T(NEG(dx));	// 36456 neg     dx ;~ 1359:10DC
cs=0x1359;eip=0x0010de; 	J(JMP(loc_22b7a));	// 36457 jmp     loc_22B7A ;~ 1359:10DE
loc_22c52:
	// 6831 
cs=0x1359;eip=0x0010e2; 	T(INC(si));	// 36463 inc     si ;~ 1359:10E2
loc_22c53:
	// 6832 
cs=0x1359;eip=0x0010e3; 	T(CMP(*(dw*)(raddr(ss,bp+var_2a)), si));	// 36466 cmp     [bp+var_2A], si ;~ 1359:10E3
cs=0x1359;eip=0x0010e6; 	J(JLE(loc_22c8c));	// 36467 jle     short loc_22C8C ;~ 1359:10E6
cs=0x1359;eip=0x0010e8; 	T(MOV(ax, si));	// 36468 mov     ax, si ;~ 1359:10E8
cs=0x1359;eip=0x0010ea; 	T(MOV(cx, ax));	// 36469 mov     cx, ax ;~ 1359:10EA
cs=0x1359;eip=0x0010ec; 	T(SHL(ax, 1));	// 36470 shl     ax, 1 ;~ 1359:10EC
cs=0x1359;eip=0x0010ee; 	T(ADD(ax, cx));	// 36471 add     ax, cx ;~ 1359:10EE
cs=0x1359;eip=0x0010f0; 	T(SHL(ax, 1));	// 36472 shl     ax, 1 ;~ 1359:10F0
cs=0x1359;eip=0x0010f2; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 36473 mov     [bp+var_2E], ax ;~ 1359:10F2
cs=0x1359;eip=0x0010f5; 	T(MOV(bx, ax));	// 36474 mov     bx, ax ;~ 1359:10F5
cs=0x1359;eip=0x0010f7; 	T(ax = offset(dseg,word_445b4)+bx);	// 36475 lea     ax, word_445B4[bx] ;~ 1359:10F7
cs=0x1359;eip=0x0010fb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2e))));	// 36476 mov     bx, [bp+var_2E] ;~ 1359:10FB
cs=0x1359;eip=0x0010fe; 	X(PUSH(si));	// 36477 push    si ;~ 1359:10FE
cs=0x1359;eip=0x0010ff; 	X(PUSH(di));	// 36478 push    di ;~ 1359:10FF
cs=0x1359;eip=0x001100; 	T(di = offset(dseg,unk_445c0)+bx);	// 36479 lea     di, unk_445C0[bx] ;~ 1359:1100
cs=0x1359;eip=0x001104; 	T(MOV(si, ax));	// 36480 mov     si, ax ;~ 1359:1104
cs=0x1359;eip=0x001106; 	X(PUSH(ds));	// 36481 push    ds ;~ 1359:1106
cs=0x1359;eip=0x001107; 	X(POP(es));	// 36482 pop     es ;~ 1359:1107
cs=0x1359;eip=0x001108; 	X(MOVSW);	// 36484 movsw ;~ 1359:1108
cs=0x1359;eip=0x001109; 	X(MOVSW);	// 36485 movsw ;~ 1359:1109
cs=0x1359;eip=0x00110a; 	X(MOVSW);	// 36486 movsw ;~ 1359:110A
cs=0x1359;eip=0x00110b; 	X(POP(di));	// 36487 pop     di ;~ 1359:110B
cs=0x1359;eip=0x00110c; 	X(POP(si));	// 36488 pop     si ;~ 1359:110C
cs=0x1359;eip=0x00110d; 	T(OR(si, si));	// 36489 or      si, si ;~ 1359:110D
cs=0x1359;eip=0x00110f; 	J(JZ(loc_22c84));	// 36490 jz      short loc_22C84 ;~ 1359:110F
cs=0x1359;eip=0x001111; 	J(JMP(loc_229aa));	// 36491 jmp     loc_229AA ;~ 1359:1111
loc_22c84:
	// 6833 
cs=0x1359;eip=0x001114; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), offset(dseg,word_445e6)));	// 36495 mov     [bp+var_24], offset word_445E6 ;~ 1359:1114
cs=0x1359;eip=0x001119; 	J(JMP(loc_229af));	// 36496 jmp     loc_229AF ;~ 1359:1119
loc_22c8c:
	// 6834 
cs=0x1359;eip=0x00111c; 	X(POP(si));	// 36500 pop     si ;~ 1359:111C
cs=0x1359;eip=0x00111d; 	X(POP(di));	// 36501 pop     di ;~ 1359:111D
cs=0x1359;eip=0x00111e; 	T(MOV(sp, bp));	// 36502 mov     sp, bp ;~ 1359:111E
cs=0x1359;eip=0x001120; 	X(POP(bp));	// 36503 pop     bp ;~ 1359:1120
cs=0x1359;eip=0x001121; 	J(RETF(0));	// 36504 retf ;~ 1359:1121

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_229a5: 	goto loc_229a5;
        case m2c::kloc_229aa: 	goto loc_229aa;
        case m2c::kloc_229af: 	goto loc_229af;
        case m2c::kloc_229ba: 	goto loc_229ba;
        case m2c::kloc_229cf: 	goto loc_229cf;
        case m2c::kloc_229e5: 	goto loc_229e5;
        case m2c::kloc_22a1e: 	goto loc_22a1e;
        case m2c::kloc_22a40: 	goto loc_22a40;
        case m2c::kloc_22a4d: 	goto loc_22a4d;
        case m2c::kloc_22a80: 	goto loc_22a80;
        case m2c::kloc_22a88: 	goto loc_22a88;
        case m2c::kloc_22a96: 	goto loc_22a96;
        case m2c::kloc_22b04: 	goto loc_22b04;
        case m2c::kloc_22b0d: 	goto loc_22b0d;
        case m2c::kloc_22b53: 	goto loc_22b53;
        case m2c::kloc_22b67: 	goto loc_22b67;
        case m2c::kloc_22b74: 	goto loc_22b74;
        case m2c::kloc_22b7a: 	goto loc_22b7a;
        case m2c::kloc_22b8c: 	goto loc_22b8c;
        case m2c::kloc_22ba2: 	goto loc_22ba2;
        case m2c::kloc_22ba8: 	goto loc_22ba8;
        case m2c::kloc_22bba: 	goto loc_22bba;
        case m2c::kloc_22be0: 	goto loc_22be0;
        case m2c::kloc_22be3: 	goto loc_22be3;
        case m2c::kloc_22c41: 	goto loc_22c41;
        case m2c::kloc_22c52: 	goto loc_22c52;
        case m2c::kloc_22c53: 	goto loc_22c53;
        case m2c::kloc_22c84: 	goto loc_22c84;
        case m2c::kloc_22c8c: 	goto loc_22c8c;
        case m2c::ksub_2298c: 	goto sub_2298c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool file_load_replay(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    file_load_replay:
    _begin:
#undef arg_0
#define arg_0 6
	// 36516 arg_0           = dword ptr  6 ;~ 1359:1122
cs=0x1359;eip=0x001122; 	X(PUSH(bp));	// 36518 push    bp ;~ 1359:1122
cs=0x1359;eip=0x001123; 	T(MOV(bp, sp));	// 36519 mov     bp, sp ;~ 1359:1123
cs=0x1359;eip=0x001125; 	X(PUSH(di));	// 36520 push    di ;~ 1359:1125
cs=0x1359;eip=0x001126; 	X(PUSH(si));	// 36521 push    si              ; char * ;~ 1359:1126
cs=0x1359;eip=0x001127; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 36522 mov     ax, offset g_path_buf ;~ 1359:1127
cs=0x1359;eip=0x00112a; 	X(PUSH(ax));	// 36523 push    ax              ; char * ;~ 1359:112A
cs=0x1359;eip=0x00112b; 	T(MOV(ax, offset(dseg,a_rpl)));	// 36524 mov     ax, offset a_rpl ; ".rpl" ;~ 1359:112B
cs=0x1359;eip=0x00112e; 	X(PUSH(ax));	// 36525 push    ax              ; int ;~ 1359:112E
cs=0x1359;eip=0x00112f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 36526 push    word ptr [bp+arg_0+2] ;~ 1359:112F
cs=0x1359;eip=0x001132; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 36527 push    word ptr [bp+arg_0] ; char * ;~ 1359:1132
cs=0x1359;eip=0x001135; 	J(CALLF(file_build_path,0));	// 36528 call    file_build_path ;~ 1359:1135
cs=0x1359;eip=0x00113a; 	T(ADD(sp, 8));	// 36529 add     sp, 8 ;~ 1359:113A
cs=0x1359;eip=0x00113d; 	X(MOV(g_is_busy, 1));	// 36530 mov     g_is_busy, 1 ;~ 1359:113D
cs=0x1359;eip=0x001142; 	X(PUSH(*(dw*)(((db*)&td13_rpl_header)+2)));	// 36531 push    word ptr td13_rpl_header+2 ;~ 1359:1142
cs=0x1359;eip=0x001146; 	X(PUSH(*(dw*)(((db*)&td13_rpl_header))));	// 36532 push    word ptr td13_rpl_header ;~ 1359:1146
cs=0x1359;eip=0x00114a; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 36533 mov     ax, offset g_path_buf ;~ 1359:114A
cs=0x1359;eip=0x00114d; 	X(PUSH(ax));	// 36534 push    ax ;~ 1359:114D
cs=0x1359;eip=0x00114e; 	J(CALLF(file_read_fatal,0));	// 36535 call    file_read_fatal ;~ 1359:114E
cs=0x1359;eip=0x001153; 	T(ADD(sp, 6));	// 36536 add     sp, 6 ;~ 1359:1153
cs=0x1359;eip=0x001156; 	T(MOV(ax, *(dw*)(((db*)&td13_rpl_header))));	// 36537 mov     ax, word ptr td13_rpl_header ;~ 1359:1156
cs=0x1359;eip=0x001159; 	T(MOV(dx, *(dw*)(((db*)&td13_rpl_header)+2)));	// 36538 mov     dx, word ptr td13_rpl_header+2 ;~ 1359:1159
cs=0x1359;eip=0x00115d; 	T(MOV(di, offset(dseg,gameconfig)));	// 36539 mov     di, offset gameconfig ;~ 1359:115D
cs=0x1359;eip=0x001160; 	T(MOV(si, ax));	// 36540 mov     si, ax ;~ 1359:1160
cs=0x1359;eip=0x001162; 	X(PUSH(ds));	// 36541 push    ds ;~ 1359:1162
cs=0x1359;eip=0x001163; 	X(POP(es));	// 36542 pop     es ;~ 1359:1163
cs=0x1359;eip=0x001164; 	X(PUSH(ds));	// 36543 push    ds ;~ 1359:1164
cs=0x1359;eip=0x001165; 	T(MOV(ds, dx));	// 36544 mov     ds, dx ;~ 1359:1165
cs=0x1359;eip=0x001167; 	T(MOV(cx, 0x0D));	// 36545 mov     cx, 0Dh         ; copies 13 words from the rpl to gameconfig ;~ 1359:1167
	// 36546 repne movsw ;~ 1359:116A
cs=0x1359;eip=0x00116a; 	X(	REPNE MOVSW);	// 36546 repne movsw ;~ 1359:116A
cs=0x1359;eip=0x00116c; 	X(POP(ds));	// 36547 pop     ds ;~ 1359:116C
cs=0x1359;eip=0x00116d; 	X(MOV(g_is_busy, 0));	// 36548 mov     g_is_busy, 0 ;~ 1359:116D
cs=0x1359;eip=0x001172; 	T(SUB(ax, ax));	// 36549 sub     ax, ax ;~ 1359:1172
cs=0x1359;eip=0x001174; 	X(POP(si));	// 36550 pop     si ;~ 1359:1174
cs=0x1359;eip=0x001175; 	X(POP(di));	// 36551 pop     di ;~ 1359:1175
cs=0x1359;eip=0x001176; 	X(POP(bp));	// 36552 pop     bp ;~ 1359:1176
cs=0x1359;eip=0x001177; 	J(RETF(0));	// 36553 retf ;~ 1359:1177

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfile_load_replay: 	goto file_load_replay;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool file_write_replay(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    file_write_replay:
    _begin:
#undef var_6
#define var_6 -6
	// 36563 var_6           = word ptr -6 ;~ 1359:1178
#undef var_4
#define var_4 -4
	// 36564 var_4           = word ptr -4 ;~ 1359:1178
#undef arg_0
#define arg_0 6
	// 36565 arg_0           = word ptr  6 ;~ 1359:1178
cs=0x1359;eip=0x001178; 	X(PUSH(bp));	// 36567 push    bp ;~ 1359:1178
cs=0x1359;eip=0x001179; 	T(MOV(bp, sp));	// 36568 mov     bp, sp ;~ 1359:1179
cs=0x1359;eip=0x00117b; 	T(SUB(sp, 6));	// 36569 sub     sp, 6 ;~ 1359:117B
cs=0x1359;eip=0x00117e; 	X(PUSH(di));	// 36570 push    di ;~ 1359:117E
cs=0x1359;eip=0x00117f; 	X(PUSH(si));	// 36571 push    si ;~ 1359:117F
cs=0x1359;eip=0x001180; 	T(LES(bx, td13_rpl_header));	// 36572 les     bx, td13_rpl_header ;~ 1359:1180
cs=0x1359;eip=0x001184; 	X(PUSH(si));	// 36574 push    si ;~ 1359:1184
cs=0x1359;eip=0x001185; 	T(MOV(di, bx));	// 36575 mov     di, bx ;~ 1359:1185
cs=0x1359;eip=0x001187; 	T(MOV(si, offset(dseg,gameconfig)));	// 36576 mov     si, offset gameconfig ;~ 1359:1187
cs=0x1359;eip=0x00118a; 	T(MOV(cx, 0x0D));	// 36577 mov     cx, 0Dh ;~ 1359:118A
	// 36578 repne movsw ;~ 1359:118D
cs=0x1359;eip=0x00118d; 	X(	REPNE MOVSW);	// 36578 repne movsw ;~ 1359:118D
cs=0x1359;eip=0x00118f; 	X(POP(si));	// 36579 pop     si ;~ 1359:118F
cs=0x1359;eip=0x001190; 	T(MOV(ax, word_449bc));	// 36580 mov     ax, word_449BC ;~ 1359:1190
cs=0x1359;eip=0x001193; 	T(ADD(ax, 0x724));	// 36581 add     ax, 724h        ; offset of .rpl kb. event block ;~ 1359:1193
cs=0x1359;eip=0x001196; 	T(CWD);	// 36582 cwd ;~ 1359:1196
cs=0x1359;eip=0x001197; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 36583 mov     [bp+var_6], ax ;~ 1359:1197
cs=0x1359;eip=0x00119a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 36584 mov     [bp+var_4], dx ;~ 1359:119A
cs=0x1359;eip=0x00119d; 	X(MOV(g_is_busy, 1));	// 36585 mov     g_is_busy, 1 ;~ 1359:119D
cs=0x1359;eip=0x0011a2; 	X(PUSH(dx));	// 36586 push    dx ;~ 1359:11A2
cs=0x1359;eip=0x0011a3; 	X(PUSH(ax));	// 36587 push    ax ;~ 1359:11A3
cs=0x1359;eip=0x0011a4; 	X(PUSH(es));	// 36588 push    es ;~ 1359:11A4
cs=0x1359;eip=0x0011a5; 	X(PUSH(bx));	// 36589 push    bx ;~ 1359:11A5
cs=0x1359;eip=0x0011a6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 36590 push    [bp+arg_0] ;~ 1359:11A6
cs=0x1359;eip=0x0011a9; 	J(CALLF(file_write_fatal,0));	// 36591 call    file_write_fatal ;~ 1359:11A9
cs=0x1359;eip=0x0011ae; 	T(ADD(sp, 0x0A));	// 36592 add     sp, 0Ah ;~ 1359:11AE
cs=0x1359;eip=0x0011b1; 	X(MOV(g_is_busy, 0));	// 36593 mov     g_is_busy, 0 ;~ 1359:11B1
cs=0x1359;eip=0x0011b6; 	T(CBW);	// 36594 cbw ;~ 1359:11B6
cs=0x1359;eip=0x0011b7; 	X(POP(si));	// 36595 pop     si ;~ 1359:11B7
cs=0x1359;eip=0x0011b8; 	X(POP(di));	// 36596 pop     di ;~ 1359:11B8
cs=0x1359;eip=0x0011b9; 	T(MOV(sp, bp));	// 36597 mov     sp, bp ;~ 1359:11B9
cs=0x1359;eip=0x0011bb; 	X(POP(bp));	// 36598 pop     bp ;~ 1359:11BB
cs=0x1359;eip=0x0011bc; 	J(RETF(0));	// 36599 retf ;~ 1359:11BC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfile_write_replay: 	goto file_write_replay;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool setup_car_shapes(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    setup_car_shapes:
    _begin:
#undef var_20
#define var_20 -0x20
	// 36612 var_20          = word ptr -20h ;~ 1359:11BE
#undef var_1e
#define var_1e -0x1E
	// 36613 var_1E          = word ptr -1Eh ;~ 1359:11BE
#undef var_1c
#define var_1c -0x1C
	// 36614 var_1C          = byte ptr -1Ch ;~ 1359:11BE
#undef var_1a
#define var_1a -0x1A
	// 36615 var_1A          = byte ptr -1Ah ;~ 1359:11BE
#undef var_18
#define var_18 -0x18
	// 36616 var_18          = byte ptr -18h ;~ 1359:11BE
#undef var_16
#define var_16 -0x16
	// 36617 var_16          = byte ptr -16h ;~ 1359:11BE
#undef var_14
#define var_14 -0x14
	// 36618 var_14          = byte ptr -14h ;~ 1359:11BE
#undef var_e
#define var_e -0x0E
	// 36619 var_E           = word ptr -0Eh ;~ 1359:11BE
#undef var_c
#define var_c -0x0C
	// 36620 var_C           = dword ptr -0Ch ;~ 1359:11BE
#undef var_8
#define var_8 -8
	// 36621 var_8           = word ptr -8 ;~ 1359:11BE
#undef var_6
#define var_6 -6
	// 36622 var_6           = byte ptr -6 ;~ 1359:11BE
#undef var_4
#define var_4 -4
	// 36623 var_4           = word ptr -4 ;~ 1359:11BE
#undef var_2
#define var_2 -2
	// 36624 var_2           = byte ptr -2 ;~ 1359:11BE
#undef arg_0
#define arg_0 6
	// 36625 arg_0           = word ptr  6 ;~ 1359:11BE
cs=0x1359;eip=0x0011be; 	X(PUSH(bp));	// 36627 push    bp ;~ 1359:11BE
cs=0x1359;eip=0x0011bf; 	T(MOV(bp, sp));	// 36628 mov     bp, sp ;~ 1359:11BF
cs=0x1359;eip=0x0011c1; 	T(SUB(sp, 0x20));	// 36629 sub     sp, 20h ;~ 1359:11C1
cs=0x1359;eip=0x0011c4; 	X(PUSH(di));	// 36630 push    di ;~ 1359:11C4
cs=0x1359;eip=0x0011c5; 	X(PUSH(si));	// 36631 push    si              ; char * ;~ 1359:11C5
cs=0x1359;eip=0x0011c6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 36632 mov     ax, [bp+arg_0] ;~ 1359:11C6
cs=0x1359;eip=0x0011c9; 	T(OR(ax, ax));	// 36633 or      ax, ax ;~ 1359:11C9
cs=0x1359;eip=0x0011cb; 	J(JZ(loc_22d5c));	// 36634 jz      short loc_22D5C ;~ 1359:11CB
cs=0x1359;eip=0x0011cd; 	T(CMP(ax, 1));	// 36635 cmp     ax, 1 ;~ 1359:11CD
cs=0x1359;eip=0x0011d0; 	J(JNZ(loc_22d45));	// 36636 jnz     short loc_22D45 ;~ 1359:11D0
cs=0x1359;eip=0x0011d2; 	J(JMP(loc_22f76));	// 36637 jmp     loc_22F76 ;~ 1359:11D2
loc_22d45:
	// 6835 
cs=0x1359;eip=0x0011d5; 	T(CMP(ax, 2));	// 36641 cmp     ax, 2 ;~ 1359:11D5
cs=0x1359;eip=0x0011d8; 	J(JNZ(loc_22d4d));	// 36642 jnz     short loc_22D4D ;~ 1359:11D8
cs=0x1359;eip=0x0011da; 	J(JMP(loc_23030));	// 36643 jmp     loc_23030 ;~ 1359:11DA
loc_22d4d:
	// 6836 
cs=0x1359;eip=0x0011dd; 	T(CMP(ax, 3));	// 36647 cmp     ax, 3 ;~ 1359:11DD
cs=0x1359;eip=0x0011e0; 	J(JNZ(loc_22d55));	// 36648 jnz     short loc_22D55 ;~ 1359:11E0
cs=0x1359;eip=0x0011e2; 	J(JMP(loc_236ac));	// 36649 jmp     loc_236AC ;~ 1359:11E2
loc_22d55:
	// 6837 
cs=0x1359;eip=0x0011e5; 	X(POP(si));	// 36653 pop     si ;~ 1359:11E5
cs=0x1359;eip=0x0011e6; 	X(POP(di));	// 36654 pop     di ;~ 1359:11E6
cs=0x1359;eip=0x0011e7; 	T(MOV(sp, bp));	// 36655 mov     sp, bp ;~ 1359:11E7
cs=0x1359;eip=0x0011e9; 	X(POP(bp));	// 36656 pop     bp ;~ 1359:11E9
cs=0x1359;eip=0x0011ea; 	J(RETF(0));	// 36657 retf ;~ 1359:11EA
loc_22d5c:
	// 6838 
cs=0x1359;eip=0x0011ec; 	T(MOV(al, gameconfig));	// 36662 mov     al, gameconfig ;~ 1359:11EC
cs=0x1359;eip=0x0011ef; 	X(MOV(byte_3e916, al));	// 36663 mov     byte_3E916, al ;~ 1359:11EF
cs=0x1359;eip=0x0011f2; 	T(MOV(al, byte_449a5));	// 36664 mov     al, byte_449A5 ;~ 1359:11F2
cs=0x1359;eip=0x0011f5; 	X(MOV(byte_3e917, al));	// 36665 mov     byte_3E917, al ;~ 1359:11F5
cs=0x1359;eip=0x0011f8; 	T(MOV(al, byte_449a6));	// 36666 mov     al, byte_449A6 ;~ 1359:11F8
cs=0x1359;eip=0x0011fb; 	X(MOV(byte_3e918, al));	// 36667 mov     byte_3E918, al ;~ 1359:11FB
cs=0x1359;eip=0x0011fe; 	T(MOV(al, byte_449a7));	// 36668 mov     al, byte_449A7 ;~ 1359:11FE
cs=0x1359;eip=0x001201; 	X(MOV(byte_3e919, al));	// 36669 mov     byte_3E919, al ;~ 1359:1201
cs=0x1359;eip=0x001204; 	T(MOV(al, gameconfig));	// 36670 mov     al, gameconfig ;~ 1359:1204
cs=0x1359;eip=0x001207; 	X(MOV(byte_3e920, al));	// 36671 mov     byte_3E920, al ;~ 1359:1207
cs=0x1359;eip=0x00120a; 	T(MOV(al, byte_449a5));	// 36672 mov     al, byte_449A5 ;~ 1359:120A
cs=0x1359;eip=0x00120d; 	X(MOV(byte_3e921, al));	// 36673 mov     byte_3E921, al ;~ 1359:120D
cs=0x1359;eip=0x001210; 	T(MOV(al, byte_449a6));	// 36674 mov     al, byte_449A6 ;~ 1359:1210
cs=0x1359;eip=0x001213; 	X(MOV(byte_3e922, al));	// 36675 mov     byte_3E922, al ;~ 1359:1213
cs=0x1359;eip=0x001216; 	T(MOV(al, byte_449a7));	// 36676 mov     al, byte_449A7 ;~ 1359:1216
cs=0x1359;eip=0x001219; 	X(MOV(byte_3e923, al));	// 36677 mov     byte_3E923, al ;~ 1359:1219
cs=0x1359;eip=0x00121c; 	T(MOV(ax, offset(dseg,astdaxxxx)));	// 36678 mov     ax, offset aStdaxxxx ;~ 1359:121C
cs=0x1359;eip=0x00121f; 	X(PUSH(ax));	// 36679 push    ax              ; char * ;~ 1359:121F
cs=0x1359;eip=0x001220; 	T(MOV(ax, 3));	// 36680 mov     ax, 3 ;~ 1359:1220
cs=0x1359;eip=0x001223; 	X(PUSH(ax));	// 36681 push    ax              ; int ;~ 1359:1223
cs=0x1359;eip=0x001224; 	J(CALLF(file_load_resource,0));	// 36682 call    file_load_resource ;~ 1359:1224
cs=0x1359;eip=0x001229; 	T(ADD(sp, 4));	// 36683 add     sp, 4 ;~ 1359:1229
cs=0x1359;eip=0x00122c; 	X(MOV(stdaresptr, ax));	// 36684 mov     stdaresptr, ax ;~ 1359:122C
cs=0x1359;eip=0x00122f; 	X(MOV(word_40d7e, dx));	// 36685 mov     word_40D7E, dx ;~ 1359:122F
cs=0x1359;eip=0x001233; 	T(MOV(ax, offset(dseg,astdbxxxx)));	// 36686 mov     ax, offset aStdbxxxx ;~ 1359:1233
cs=0x1359;eip=0x001236; 	X(PUSH(ax));	// 36687 push    ax              ; char * ;~ 1359:1236
cs=0x1359;eip=0x001237; 	T(MOV(ax, 2));	// 36688 mov     ax, 2 ;~ 1359:1237
cs=0x1359;eip=0x00123a; 	X(PUSH(ax));	// 36689 push    ax              ; int ;~ 1359:123A
cs=0x1359;eip=0x00123b; 	J(CALLF(file_load_resource,0));	// 36690 call    file_load_resource ;~ 1359:123B
cs=0x1359;eip=0x001240; 	T(ADD(sp, 4));	// 36691 add     sp, 4 ;~ 1359:1240
cs=0x1359;eip=0x001243; 	X(MOV(stdbresptr, ax));	// 36692 mov     stdbresptr, ax ;~ 1359:1243
cs=0x1359;eip=0x001246; 	X(MOV(word_40d86, dx));	// 36693 mov     word_40D86, dx ;~ 1359:1246
cs=0x1359;eip=0x00124a; 	T(MOV(ax, offset(dseg,whlshapes)));	// 36694 mov     ax, offset whlshapes ;~ 1359:124A
cs=0x1359;eip=0x00124d; 	X(PUSH(ax));	// 36695 push    ax ;~ 1359:124D
cs=0x1359;eip=0x00124e; 	T(MOV(ax, offset(dseg,awhl1whl2whl3ins2gboxins1i)));	// 36696 mov     ax, offset aWhl1whl2whl3ins2gboxins1i ; "whl1whl2whl3ins2gboxins1ins3inm1inm3" ;~ 1359:124E
cs=0x1359;eip=0x001251; 	X(PUSH(ax));	// 36697 push    ax ;~ 1359:1251
cs=0x1359;eip=0x001252; 	X(PUSH(word_40d7e));	// 36698 push    word_40D7E ;~ 1359:1252
cs=0x1359;eip=0x001256; 	X(PUSH(stdaresptr));	// 36699 push    stdaresptr ;~ 1359:1256
cs=0x1359;eip=0x00125a; 	J(CALLF(locate_many_resources,0));	// 36700 call    locate_many_resources ;~ 1359:125A
cs=0x1359;eip=0x00125f; 	T(ADD(sp, 8));	// 36701 add     sp, 8 ;~ 1359:125F
cs=0x1359;eip=0x001262; 	T(MOV(ax, offset(dseg,gnobshapes)));	// 36702 mov     ax, offset gnobshapes ;~ 1359:1262
cs=0x1359;eip=0x001265; 	X(PUSH(ax));	// 36703 push    ax ;~ 1359:1265
cs=0x1359;eip=0x001266; 	T(MOV(ax, offset(dseg,agnobgnabdotdotadot1dot2)));	// 36704 mov     ax, offset aGnobgnabdotDotadot1dot2 ; "gnobgnabdot dotadot1dot2" ;~ 1359:1266
cs=0x1359;eip=0x001269; 	X(PUSH(ax));	// 36705 push    ax ;~ 1359:1269
cs=0x1359;eip=0x00126a; 	X(PUSH(word_40d86));	// 36706 push    word_40D86 ;~ 1359:126A
cs=0x1359;eip=0x00126e; 	X(PUSH(stdbresptr));	// 36707 push    stdbresptr ;~ 1359:126E
cs=0x1359;eip=0x001272; 	J(CALLF(locate_many_resources,0));	// 36708 call    locate_many_resources ;~ 1359:1272
cs=0x1359;eip=0x001277; 	T(ADD(sp, 8));	// 36709 add     sp, 8 ;~ 1359:1277
cs=0x1359;eip=0x00127a; 	T(CMP(word_45f84, 0));	// 36710 cmp     word_45F84, 0 ;~ 1359:127A
cs=0x1359;eip=0x00127f; 	J(JNZ(loc_22e09));	// 36711 jnz     short loc_22E09 ;~ 1359:127F
cs=0x1359;eip=0x001281; 	T(MOV(ax, offset(dseg,digshapes)));	// 36712 mov     ax, offset digshapes ;~ 1359:1281
cs=0x1359;eip=0x001284; 	X(PUSH(ax));	// 36713 push    ax ;~ 1359:1284
cs=0x1359;eip=0x001285; 	T(MOV(ax, offset(dseg,adig0dig1dig2dig3dig4dig5d)));	// 36714 mov     ax, offset aDig0dig1dig2dig3dig4dig5d ; "dig0dig1dig2dig3dig4dig5dig6dig7dig8dig"... ;~ 1359:1285
cs=0x1359;eip=0x001288; 	X(PUSH(ax));	// 36715 push    ax ;~ 1359:1288
cs=0x1359;eip=0x001289; 	X(PUSH(word_40d86));	// 36716 push    word_40D86 ;~ 1359:1289
cs=0x1359;eip=0x00128d; 	X(PUSH(stdbresptr));	// 36717 push    stdbresptr ;~ 1359:128D
cs=0x1359;eip=0x001291; 	J(CALLF(locate_many_resources,0));	// 36718 call    locate_many_resources ;~ 1359:1291
cs=0x1359;eip=0x001296; 	T(ADD(sp, 8));	// 36719 add     sp, 8 ;~ 1359:1296
loc_22e09:
	// 6839 
cs=0x1359;eip=0x001299; 	T(MOV(ax, 0x0F));	// 36722 mov     ax, 0Fh ;~ 1359:1299
cs=0x1359;eip=0x00129c; 	X(PUSH(ax));	// 36723 push    ax ;~ 1359:129C
cs=0x1359;eip=0x00129d; 	T(LES(bx, dword_40dbc));	// 36724 les     bx, dword_40DBC ;~ 1359:129D
cs=0x1359;eip=0x0012a1; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 36725 push    word ptr es:[bx+2] ;~ 1359:12A1
cs=0x1359;eip=0x0012a5; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 36726 mov     ax, es:[bx] ;~ 1359:12A5
cs=0x1359;eip=0x0012a8; 	X(IMUL1_2(video_flag1_is1));	// 36727 imul    video_flag1_is1 ;~ 1359:12A8
cs=0x1359;eip=0x0012ac; 	X(PUSH(ax));	// 36728 push    ax ;~ 1359:12AC
cs=0x1359;eip=0x0012ad; 	J(CALLF(sprite_make_wnd,0));	// 36729 call    sprite_make_wnd ;~ 1359:12AD
cs=0x1359;eip=0x0012b2; 	T(ADD(sp, 6));	// 36730 add     sp, 6 ;~ 1359:12B2
cs=0x1359;eip=0x0012b5; 	X(MOV(*(dw*)(((db*)&whlsprite1)), ax));	// 36731 mov     word ptr whlsprite1, ax ;~ 1359:12B5
cs=0x1359;eip=0x0012b8; 	X(MOV(*(dw*)(((db*)&whlsprite1)+2), dx));	// 36732 mov     word ptr whlsprite1+2, dx ;~ 1359:12B8
cs=0x1359;eip=0x0012bc; 	T(MOV(ax, 0x0F));	// 36733 mov     ax, 0Fh ;~ 1359:12BC
cs=0x1359;eip=0x0012bf; 	X(PUSH(ax));	// 36734 push    ax ;~ 1359:12BF
cs=0x1359;eip=0x0012c0; 	T(LES(bx, dword_40dc0));	// 36735 les     bx, dword_40DC0 ;~ 1359:12C0
cs=0x1359;eip=0x0012c4; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 36736 push    word ptr es:[bx+2] ;~ 1359:12C4
cs=0x1359;eip=0x0012c8; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 36737 mov     ax, es:[bx] ;~ 1359:12C8
cs=0x1359;eip=0x0012cb; 	X(IMUL1_2(video_flag1_is1));	// 36738 imul    video_flag1_is1 ;~ 1359:12CB
cs=0x1359;eip=0x0012cf; 	X(PUSH(ax));	// 36739 push    ax ;~ 1359:12CF
cs=0x1359;eip=0x0012d0; 	J(CALLF(sprite_make_wnd,0));	// 36740 call    sprite_make_wnd ;~ 1359:12D0
cs=0x1359;eip=0x0012d5; 	T(ADD(sp, 6));	// 36741 add     sp, 6 ;~ 1359:12D5
cs=0x1359;eip=0x0012d8; 	X(MOV(*(dw*)(((db*)&whlsprite2)), ax));	// 36742 mov     word ptr whlsprite2, ax ;~ 1359:12D8
cs=0x1359;eip=0x0012db; 	X(MOV(*(dw*)(((db*)&whlsprite2)+2), dx));	// 36743 mov     word ptr whlsprite2+2, dx ;~ 1359:12DB
cs=0x1359;eip=0x0012df; 	T(MOV(ax, 0x0F));	// 36744 mov     ax, 0Fh ;~ 1359:12DF
cs=0x1359;eip=0x0012e2; 	X(PUSH(ax));	// 36745 push    ax ;~ 1359:12E2
cs=0x1359;eip=0x0012e3; 	T(LES(bx, dword_40dc0));	// 36746 les     bx, dword_40DC0 ;~ 1359:12E3
cs=0x1359;eip=0x0012e7; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 36747 push    word ptr es:[bx+2] ;~ 1359:12E7
cs=0x1359;eip=0x0012eb; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 36748 mov     ax, es:[bx] ;~ 1359:12EB
cs=0x1359;eip=0x0012ee; 	X(IMUL1_2(video_flag1_is1));	// 36749 imul    video_flag1_is1 ;~ 1359:12EE
cs=0x1359;eip=0x0012f2; 	X(PUSH(ax));	// 36750 push    ax ;~ 1359:12F2
cs=0x1359;eip=0x0012f3; 	J(CALLF(sprite_make_wnd,0));	// 36751 call    sprite_make_wnd ;~ 1359:12F3
cs=0x1359;eip=0x0012f8; 	T(ADD(sp, 6));	// 36752 add     sp, 6 ;~ 1359:12F8
cs=0x1359;eip=0x0012fb; 	X(MOV(*(dw*)(((db*)&whlsprite3)), ax));	// 36753 mov     word ptr whlsprite3, ax ;~ 1359:12FB
cs=0x1359;eip=0x0012fe; 	X(MOV(*(dw*)(((db*)&whlsprite3)+2), dx));	// 36754 mov     word ptr whlsprite3+2, dx ;~ 1359:12FE
cs=0x1359;eip=0x001302; 	T(MOV(ax, offset(dseg,adash)));	// 36755 mov     ax, offset aDash ; "dash" ;~ 1359:1302
cs=0x1359;eip=0x001305; 	X(PUSH(ax));	// 36756 push    ax ;~ 1359:1305
cs=0x1359;eip=0x001306; 	X(PUSH(word_40d7e));	// 36757 push    word_40D7E ;~ 1359:1306
cs=0x1359;eip=0x00130a; 	X(PUSH(stdaresptr));	// 36758 push    stdaresptr ;~ 1359:130A
cs=0x1359;eip=0x00130e; 	J(CALLF(locate_shape_fatal,0));	// 36759 call    locate_shape_fatal ;~ 1359:130E
cs=0x1359;eip=0x001313; 	T(ADD(sp, 6));	// 36760 add     sp, 6 ;~ 1359:1313
cs=0x1359;eip=0x001316; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 36761 mov     word ptr [bp+var_C], ax ;~ 1359:1316
cs=0x1359;eip=0x001319; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 36762 mov     word ptr [bp+var_C+2], dx ;~ 1359:1319
cs=0x1359;eip=0x00131c; 	X(PUSH(*(dw*)(((db*)&whlsprite3)+2)));	// 36763 push    word ptr whlsprite3+2 ;~ 1359:131C
cs=0x1359;eip=0x001320; 	X(PUSH(*(dw*)(((db*)&whlsprite3))));	// 36764 push    word ptr whlsprite3 ;~ 1359:1320
cs=0x1359;eip=0x001324; 	J(CALLF(sprite_set_1_from_argptr,0));	// 36765 call    sprite_set_1_from_argptr ;~ 1359:1324
cs=0x1359;eip=0x001329; 	T(ADD(sp, 4));	// 36766 add     sp, 4 ;~ 1359:1329
cs=0x1359;eip=0x00132c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_c))));	// 36767 les     bx, [bp+var_C] ;~ 1359:132C
cs=0x1359;eip=0x00132f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 36768 mov     ax, es:[bx+0Ah] ;~ 1359:132F
cs=0x1359;eip=0x001333; 	T(LES(bx, dword_40dc0));	// 36769 les     bx, dword_40DC0 ;~ 1359:1333
cs=0x1359;eip=0x001337; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x0A))));	// 36770 sub     ax, es:[bx+0Ah] ;~ 1359:1337
cs=0x1359;eip=0x00133b; 	X(PUSH(ax));	// 36771 push    ax ;~ 1359:133B
cs=0x1359;eip=0x00133c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_c))));	// 36772 les     bx, [bp+var_C] ;~ 1359:133C
cs=0x1359;eip=0x00133f; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 36773 mov     ax, es:[bx+8] ;~ 1359:133F
cs=0x1359;eip=0x001343; 	T(LES(bx, dword_40dc0));	// 36774 les     bx, dword_40DC0 ;~ 1359:1343
cs=0x1359;eip=0x001347; 	T(SUB(ax, *(dw*)(raddr(es,bx+8))));	// 36775 sub     ax, es:[bx+8] ;~ 1359:1347
cs=0x1359;eip=0x00134b; 	X(PUSH(ax));	// 36776 push    ax ;~ 1359:134B
cs=0x1359;eip=0x00134c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_c+2)))));	// 36777 push    word ptr [bp+var_C+2] ;~ 1359:134C
cs=0x1359;eip=0x00134f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_c)))));	// 36778 push    word ptr [bp+var_C] ;~ 1359:134F
cs=0x1359;eip=0x001352; 	J(CALLF(shape2d_op_unk2,0));	// 36779 call    shape2d_op_unk2 ;~ 1359:1352
cs=0x1359;eip=0x001357; 	T(ADD(sp, 8));	// 36780 add     sp, 8 ;~ 1359:1357
cs=0x1359;eip=0x00135a; 	J(CALLF(sprite_copy_2_to_1,0));	// 36781 call    sprite_copy_2_to_1 ;~ 1359:135A
cs=0x1359;eip=0x00135f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_c))));	// 36782 les     bx, [bp+var_C] ;~ 1359:135F
cs=0x1359;eip=0x001362; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 36783 mov     ax, es:[bx+0Ah] ;~ 1359:1362
cs=0x1359;eip=0x001366; 	X(MOV(dashbmp_y, ax));	// 36784 mov     dashbmp_y, ax ;~ 1359:1366
cs=0x1359;eip=0x001369; 	T(MOV(ax, offset(dseg,aroof)));	// 36785 mov     ax, offset aRoof ; "roof" ;~ 1359:1369
cs=0x1359;eip=0x00136c; 	X(PUSH(ax));	// 36786 push    ax ;~ 1359:136C
cs=0x1359;eip=0x00136d; 	X(PUSH(word_40d7e));	// 36787 push    word_40D7E ;~ 1359:136D
cs=0x1359;eip=0x001371; 	X(PUSH(stdaresptr));	// 36788 push    stdaresptr ;~ 1359:1371
cs=0x1359;eip=0x001375; 	J(CALLF(locate_shape_nofatal,0));	// 36789 call    locate_shape_nofatal ;~ 1359:1375
cs=0x1359;eip=0x00137a; 	T(ADD(sp, 6));	// 36790 add     sp, 6 ;~ 1359:137A
cs=0x1359;eip=0x00137d; 	T(OR(dx, ax));	// 36791 or      dx, ax ;~ 1359:137D
cs=0x1359;eip=0x00137f; 	J(JZ(loc_22f12));	// 36792 jz      short loc_22F12 ;~ 1359:137F
cs=0x1359;eip=0x001381; 	T(MOV(ax, offset(dseg,aroof_0)));	// 36793 mov     ax, offset aRoof_0 ; "roof" ;~ 1359:1381
cs=0x1359;eip=0x001384; 	X(PUSH(ax));	// 36794 push    ax ;~ 1359:1384
cs=0x1359;eip=0x001385; 	X(PUSH(word_40d7e));	// 36795 push    word_40D7E ;~ 1359:1385
cs=0x1359;eip=0x001389; 	X(PUSH(stdaresptr));	// 36796 push    stdaresptr ;~ 1359:1389
cs=0x1359;eip=0x00138d; 	J(CALLF(locate_shape_fatal,0));	// 36797 call    locate_shape_fatal ;~ 1359:138D
cs=0x1359;eip=0x001392; 	T(ADD(sp, 6));	// 36798 add     sp, 6 ;~ 1359:1392
cs=0x1359;eip=0x001395; 	T(MOV(bx, ax));	// 36799 mov     bx, ax ;~ 1359:1395
cs=0x1359;eip=0x001397; 	T(MOV(es, dx));	// 36800 mov     es, dx ;~ 1359:1397
cs=0x1359;eip=0x001399; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 36801 mov     ax, es:[bx+2] ;~ 1359:1399
cs=0x1359;eip=0x00139d; 	X(MOV(roofbmpheight, ax));	// 36802 mov     roofbmpheight, ax ;~ 1359:139D
cs=0x1359;eip=0x0013a0; 	J(JMP(loc_22f18));	// 36803 jmp     short loc_22F18 ;~ 1359:13A0
loc_22f12:
	// 6840 
cs=0x1359;eip=0x0013a2; 	X(MOV(roofbmpheight, 0));	// 36807 mov     roofbmpheight, 0 ;~ 1359:13A2
loc_22f18:
	// 6841 
cs=0x1359;eip=0x0013a8; 	T(MOV(ax, offset(dseg,adast)));	// 36810 mov     ax, offset aDast ; "dast" ;~ 1359:13A8
cs=0x1359;eip=0x0013ab; 	X(PUSH(ax));	// 36811 push    ax ;~ 1359:13AB
cs=0x1359;eip=0x0013ac; 	X(PUSH(word_40d7e));	// 36812 push    word_40D7E ;~ 1359:13AC
cs=0x1359;eip=0x0013b0; 	X(PUSH(stdaresptr));	// 36813 push    stdaresptr ;~ 1359:13B0
cs=0x1359;eip=0x0013b4; 	J(CALLF(locate_shape_nofatal,0));	// 36814 call    locate_shape_nofatal ;~ 1359:13B4
cs=0x1359;eip=0x0013b9; 	T(ADD(sp, 6));	// 36815 add     sp, 6 ;~ 1359:13B9
cs=0x1359;eip=0x0013bc; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 36816 mov     word ptr [bp+var_C], ax ;~ 1359:13BC
cs=0x1359;eip=0x0013bf; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 36817 mov     word ptr [bp+var_C+2], dx ;~ 1359:13BF
cs=0x1359;eip=0x0013c2; 	T(OR(ax, dx));	// 36818 or      ax, dx ;~ 1359:13C2
cs=0x1359;eip=0x0013c4; 	J(JZ(loc_22f6a));	// 36819 jz      short loc_22F6A ;~ 1359:13C4
cs=0x1359;eip=0x0013c6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_c))));	// 36820 les     bx, [bp+var_C] ;~ 1359:13C6
cs=0x1359;eip=0x0013c9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 36821 mov     ax, es:[bx+0Ah] ;~ 1359:13C9
cs=0x1359;eip=0x0013cd; 	X(MOV(dastbmp_y, ax));	// 36822 mov     dastbmp_y, ax ;~ 1359:13CD
cs=0x1359;eip=0x0013d0; 	T(MOV(ax, bx));	// 36823 mov     ax, bx ;~ 1359:13D0
cs=0x1359;eip=0x0013d2; 	X(MOV(dastbmp_y2, ax));	// 36824 mov     dastbmp_y2, ax ;~ 1359:13D2
cs=0x1359;eip=0x0013d5; 	X(MOV(dastseg, dx));	// 36825 mov     dastseg, dx ;~ 1359:13D5
cs=0x1359;eip=0x0013d9; 	T(MOV(ax, offset(dseg,adasm)));	// 36826 mov     ax, offset aDasm ; "dasm" ;~ 1359:13D9
cs=0x1359;eip=0x0013dc; 	X(PUSH(ax));	// 36827 push    ax ;~ 1359:13DC
cs=0x1359;eip=0x0013dd; 	X(PUSH(word_40d7e));	// 36828 push    word_40D7E ;~ 1359:13DD
cs=0x1359;eip=0x0013e1; 	X(PUSH(stdaresptr));	// 36829 push    stdaresptr ;~ 1359:13E1
cs=0x1359;eip=0x0013e5; 	J(CALLF(locate_shape_fatal,0));	// 36830 call    locate_shape_fatal ;~ 1359:13E5
cs=0x1359;eip=0x0013ea; 	T(ADD(sp, 6));	// 36831 add     sp, 6 ;~ 1359:13EA
cs=0x1359;eip=0x0013ed; 	X(MOV(dasmshapeptr, ax));	// 36832 mov     dasmshapeptr, ax ;~ 1359:13ED
cs=0x1359;eip=0x0013f0; 	X(MOV(word_454a2, dx));	// 36833 mov     word_454A2, dx ;~ 1359:13F0
cs=0x1359;eip=0x0013f4; 	X(POP(si));	// 36834 pop     si ;~ 1359:13F4
cs=0x1359;eip=0x0013f5; 	X(POP(di));	// 36835 pop     di ;~ 1359:13F5
cs=0x1359;eip=0x0013f6; 	T(MOV(sp, bp));	// 36836 mov     sp, bp ;~ 1359:13F6
cs=0x1359;eip=0x0013f8; 	X(POP(bp));	// 36837 pop     bp ;~ 1359:13F8
cs=0x1359;eip=0x0013f9; 	J(RETF(0));	// 36838 retf ;~ 1359:13F9
loc_22f6a:
	// 6842 
cs=0x1359;eip=0x0013fa; 	X(MOV(dastbmp_y, 0));	// 36842 mov     dastbmp_y, 0 ;~ 1359:13FA
cs=0x1359;eip=0x001400; 	X(POP(si));	// 36843 pop     si ;~ 1359:1400
cs=0x1359;eip=0x001401; 	X(POP(di));	// 36844 pop     di ;~ 1359:1401
cs=0x1359;eip=0x001402; 	T(MOV(sp, bp));	// 36845 mov     sp, bp ;~ 1359:1402
cs=0x1359;eip=0x001404; 	X(POP(bp));	// 36846 pop     bp ;~ 1359:1404
cs=0x1359;eip=0x001405; 	J(RETF(0));	// 36847 retf ;~ 1359:1405
loc_22f76:
	// 6843 
cs=0x1359;eip=0x001406; 	J(CALLF(mouse_draw_opaque_check,0));	// 36851 call    mouse_draw_opaque_check ;~ 1359:1406
cs=0x1359;eip=0x00140b; 	T(MOV(ax, offset(dseg,aroof_1)));	// 36852 mov     ax, offset aRoof_1 ; "roof" ;~ 1359:140B
cs=0x1359;eip=0x00140e; 	X(PUSH(ax));	// 36853 push    ax ;~ 1359:140E
cs=0x1359;eip=0x00140f; 	X(PUSH(word_40d7e));	// 36854 push    word_40D7E ;~ 1359:140F
cs=0x1359;eip=0x001413; 	X(PUSH(stdaresptr));	// 36855 push    stdaresptr ;~ 1359:1413
cs=0x1359;eip=0x001417; 	J(CALLF(locate_shape_nofatal,0));	// 36856 call    locate_shape_nofatal ;~ 1359:1417
cs=0x1359;eip=0x00141c; 	T(ADD(sp, 6));	// 36857 add     sp, 6 ;~ 1359:141C
cs=0x1359;eip=0x00141f; 	T(OR(dx, ax));	// 36858 or      dx, ax ;~ 1359:141F
cs=0x1359;eip=0x001421; 	J(JZ(loc_22fb1));	// 36859 jz      short loc_22FB1 ;~ 1359:1421
cs=0x1359;eip=0x001423; 	T(MOV(ax, offset(dseg,aroof_2)));	// 36860 mov     ax, offset aRoof_2 ; "roof" ;~ 1359:1423
cs=0x1359;eip=0x001426; 	X(PUSH(ax));	// 36861 push    ax ;~ 1359:1426
cs=0x1359;eip=0x001427; 	X(PUSH(word_40d7e));	// 36862 push    word_40D7E ;~ 1359:1427
cs=0x1359;eip=0x00142b; 	X(PUSH(stdaresptr));	// 36863 push    stdaresptr ;~ 1359:142B
cs=0x1359;eip=0x00142f; 	J(CALLF(locate_shape_fatal,0));	// 36864 call    locate_shape_fatal ;~ 1359:142F
cs=0x1359;eip=0x001434; 	T(ADD(sp, 6));	// 36865 add     sp, 6 ;~ 1359:1434
cs=0x1359;eip=0x001437; 	X(PUSH(dx));	// 36866 push    dx ;~ 1359:1437
cs=0x1359;eip=0x001438; 	X(PUSH(ax));	// 36867 push    ax ;~ 1359:1438
cs=0x1359;eip=0x001439; 	J(CALLF(shape2d_op_unk,0));	// 36868 call    shape2d_op_unk ;~ 1359:1439
cs=0x1359;eip=0x00143e; 	T(ADD(sp, 4));	// 36869 add     sp, 4 ;~ 1359:143E
loc_22fb1:
	// 6844 
cs=0x1359;eip=0x001441; 	T(MOV(ax, offset(dseg,adash_0)));	// 36872 mov     ax, offset aDash_0 ; "dash" ;~ 1359:1441
cs=0x1359;eip=0x001444; 	X(PUSH(ax));	// 36873 push    ax ;~ 1359:1444
cs=0x1359;eip=0x001445; 	X(PUSH(word_40d7e));	// 36874 push    word_40D7E ;~ 1359:1445
cs=0x1359;eip=0x001449; 	X(PUSH(stdaresptr));	// 36875 push    stdaresptr ;~ 1359:1449
cs=0x1359;eip=0x00144d; 	J(CALLF(locate_shape_fatal,0));	// 36876 call    locate_shape_fatal ;~ 1359:144D
cs=0x1359;eip=0x001452; 	T(ADD(sp, 6));	// 36877 add     sp, 6 ;~ 1359:1452
cs=0x1359;eip=0x001455; 	X(PUSH(dx));	// 36878 push    dx ;~ 1359:1455
cs=0x1359;eip=0x001456; 	X(PUSH(ax));	// 36879 push    ax ;~ 1359:1456
cs=0x1359;eip=0x001457; 	J(CALLF(shape2d_op_unk3,0));	// 36880 call    shape2d_op_unk3 ;~ 1359:1457
cs=0x1359;eip=0x00145c; 	T(ADD(sp, 4));	// 36881 add     sp, 4 ;~ 1359:145C
cs=0x1359;eip=0x00145f; 	X(PUSH(word_40db6));	// 36882 push    word_40DB6 ;~ 1359:145F
cs=0x1359;eip=0x001463; 	X(PUSH(word_40db4));	// 36883 push    word_40DB4 ;~ 1359:1463
cs=0x1359;eip=0x001467; 	J(CALLF(shape2d_op_unk3,0));	// 36884 call    shape2d_op_unk3 ;~ 1359:1467
cs=0x1359;eip=0x00146c; 	T(ADD(sp, 4));	// 36885 add     sp, 4 ;~ 1359:146C
cs=0x1359;eip=0x00146f; 	J(CALLF(mouse_draw_transparent_check,0));	// 36886 call    mouse_draw_transparent_check ;~ 1359:146F
cs=0x1359;eip=0x001474; 	T(SUB(si, si));	// 36887 sub     si, si ;~ 1359:1474
cs=0x1359;eip=0x001476; 	T(MOV(al, byte_4432a));	// 36888 mov     al, byte_4432A ;~ 1359:1476
cs=0x1359;eip=0x001479; 	T(CBW);	// 36889 cbw ;~ 1359:1479
cs=0x1359;eip=0x00147a; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 36890 mov     [bp+var_1E], ax ;~ 1359:147A
cs=0x1359;eip=0x00147d; 	T(MOV(bx, ax));	// 36891 mov     bx, ax ;~ 1359:147D
cs=0x1359;eip=0x00147f; 	T(SUB(al, al));	// 36892 sub     al, al ;~ 1359:147F
cs=0x1359;eip=0x001481; 	X(MOV(*((&byte_449d8)+bx), al));	// 36893 mov     byte_449D8[bx], al ;~ 1359:1481
cs=0x1359;eip=0x001485; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_1e))));	// 36894 mov     bx, [bp+var_1E] ;~ 1359:1485
cs=0x1359;eip=0x001488; 	X(MOV(*((&byte_40dfa)+bx), al));	// 36895 mov     byte_40DFA[bx], al ;~ 1359:1488
cs=0x1359;eip=0x00148c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 36896 mov     ax, [bp+var_1E] ;~ 1359:148C
cs=0x1359;eip=0x00148f; 	T(SHL(ax, 1));	// 36897 shl     ax, 1 ;~ 1359:148F
cs=0x1359;eip=0x001491; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 36898 mov     [bp+var_20], ax ;~ 1359:1491
cs=0x1359;eip=0x001494; 	T(MOV(bx, ax));	// 36899 mov     bx, ax ;~ 1359:1494
cs=0x1359;eip=0x001496; 	X(MOV(*(dw*)(((db*)&word_40df6)+bx), si));	// 36900 mov     word_40DF6[bx], si ;~ 1359:1496
cs=0x1359;eip=0x00149a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_1e))));	// 36901 mov     bx, [bp+var_1E] ;~ 1359:149A
cs=0x1359;eip=0x00149d; 	T(SUB(al, al));	// 36902 sub     al, al ;~ 1359:149D
cs=0x1359;eip=0x00149f; 	X(MOV(*((&byte_40df0)+bx), al));	// 36903 mov     byte_40DF0[bx], al ;~ 1359:149F
cs=0x1359;eip=0x0014a3; 	T(DEC(si));	// 36904 dec     si ;~ 1359:14A3
cs=0x1359;eip=0x0014a4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_20))));	// 36905 mov     bx, [bp+var_20] ;~ 1359:14A4
cs=0x1359;eip=0x0014a7; 	X(MOV(*(dw*)(((db*)&word_40e00)+bx), si));	// 36906 mov     word_40E00[bx], si ;~ 1359:14A7
cs=0x1359;eip=0x0014ab; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_20))));	// 36907 mov     bx, [bp+var_20] ;~ 1359:14AB
cs=0x1359;eip=0x0014ae; 	X(MOV(*(dw*)(((db*)&word_40d78)+bx), si));	// 36908 mov     word_40D78[bx], si ;~ 1359:14AE
cs=0x1359;eip=0x0014b2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_20))));	// 36909 mov     bx, [bp+var_20] ;~ 1359:14B2
cs=0x1359;eip=0x0014b5; 	X(MOV(*(dw*)(((db*)&word_40d6c)+bx), si));	// 36910 mov     word_40D6C[bx], si ;~ 1359:14B5
cs=0x1359;eip=0x0014b9; 	X(POP(si));	// 36911 pop     si ;~ 1359:14B9
cs=0x1359;eip=0x0014ba; 	X(POP(di));	// 36912 pop     di ;~ 1359:14BA
cs=0x1359;eip=0x0014bb; 	T(MOV(sp, bp));	// 36913 mov     sp, bp ;~ 1359:14BB
cs=0x1359;eip=0x0014bd; 	X(POP(bp));	// 36914 pop     bp ;~ 1359:14BD
cs=0x1359;eip=0x0014be; 	J(RETF(0));	// 36915 retf ;~ 1359:14BE
loc_23030:
	// 6845 
cs=0x1359;eip=0x0014c0; 	T(MOV(al, byte_446b1));	// 36920 mov     al, byte_446B1 ;~ 1359:14C0
cs=0x1359;eip=0x0014c3; 	T(CBW);	// 36921 cbw ;~ 1359:14C3
cs=0x1359;eip=0x0014c4; 	T(MOV(cx, ax));	// 36922 mov     cx, ax ;~ 1359:14C4
cs=0x1359;eip=0x0014c6; 	T(MOV(al, byte_446b0));	// 36923 mov     al, byte_446B0 ;~ 1359:14C6
cs=0x1359;eip=0x0014c9; 	T(CBW);	// 36924 cbw ;~ 1359:14C9
cs=0x1359;eip=0x0014ca; 	T(OR(ax, cx));	// 36925 or      ax, cx ;~ 1359:14CA
cs=0x1359;eip=0x0014cc; 	J(JNZ(loc_2309a));	// 36926 jnz     short loc_2309A ;~ 1359:14CC
cs=0x1359;eip=0x0014ce; 	T(MOV(al, byte_4432a));	// 36927 mov     al, byte_4432A ;~ 1359:14CE
cs=0x1359;eip=0x0014d1; 	T(CBW);	// 36928 cbw ;~ 1359:14D1
cs=0x1359;eip=0x0014d2; 	T(MOV(bx, ax));	// 36929 mov     bx, ax ;~ 1359:14D2
cs=0x1359;eip=0x0014d4; 	T(CMP(*((&byte_40dfa)+bx), 0));	// 36930 cmp     byte_40DFA[bx], 0 ;~ 1359:14D4
cs=0x1359;eip=0x0014d9; 	J(JZ(loc_2309a));	// 36931 jz      short loc_2309A ;~ 1359:14D9
cs=0x1359;eip=0x0014db; 	T(CMP(video_flag5_is0, 0));	// 36932 cmp     video_flag5_is0, 0 ;~ 1359:14DB
cs=0x1359;eip=0x0014e0; 	J(JNZ(loc_23057));	// 36933 jnz     short loc_23057 ;~ 1359:14E0
cs=0x1359;eip=0x0014e2; 	J(CALLF(mouse_draw_opaque_check,0));	// 36934 call    mouse_draw_opaque_check ;~ 1359:14E2
loc_23057:
	// 6846 
cs=0x1359;eip=0x0014e7; 	X(PUSH(height_above_replaybar));	// 36937 push    height_above_replaybar ;~ 1359:14E7
cs=0x1359;eip=0x0014eb; 	T(SUB(ax, ax));	// 36938 sub     ax, ax ;~ 1359:14EB
cs=0x1359;eip=0x0014ed; 	X(PUSH(ax));	// 36939 push    ax ;~ 1359:14ED
cs=0x1359;eip=0x0014ee; 	T(MOV(ax, 0x140));	// 36940 mov     ax, 140h ;~ 1359:14EE
cs=0x1359;eip=0x0014f1; 	X(PUSH(ax));	// 36941 push    ax ;~ 1359:14F1
cs=0x1359;eip=0x0014f2; 	T(SUB(ax, ax));	// 36942 sub     ax, ax ;~ 1359:14F2
cs=0x1359;eip=0x0014f4; 	X(PUSH(ax));	// 36943 push    ax ;~ 1359:14F4
cs=0x1359;eip=0x0014f5; 	J(CALLF(sprite_set_1_size,0));	// 36944 call    sprite_set_1_size ;~ 1359:14F5
cs=0x1359;eip=0x0014fa; 	T(ADD(sp, 8));	// 36945 add     sp, 8 ;~ 1359:14FA
cs=0x1359;eip=0x0014fd; 	T(LES(bx, dword_40dc0));	// 36946 les     bx, dword_40DC0 ;~ 1359:14FD
cs=0x1359;eip=0x001501; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 36947 push    word ptr es:[bx+0Ah] ;~ 1359:1501
cs=0x1359;eip=0x001505; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 36948 push    word ptr es:[bx+8] ;~ 1359:1505
cs=0x1359;eip=0x001509; 	T(LES(bx, whlsprite3));	// 36949 les     bx, whlsprite3 ;~ 1359:1509
cs=0x1359;eip=0x00150d; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 36950 push    word ptr es:[bx+2] ;~ 1359:150D
cs=0x1359;eip=0x001511; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 36951 push    word ptr es:[bx] ;~ 1359:1511
cs=0x1359;eip=0x001514; 	J(CALLF(sprite_putimage_and_alt,0));	// 36952 call    sprite_putimage_and_alt ;~ 1359:1514
cs=0x1359;eip=0x001519; 	T(ADD(sp, 8));	// 36953 add     sp, 8 ;~ 1359:1519
cs=0x1359;eip=0x00151c; 	T(MOV(al, byte_4432a));	// 36954 mov     al, byte_4432A ;~ 1359:151C
cs=0x1359;eip=0x00151f; 	T(CBW);	// 36955 cbw ;~ 1359:151F
cs=0x1359;eip=0x001520; 	T(MOV(bx, ax));	// 36956 mov     bx, ax ;~ 1359:1520
cs=0x1359;eip=0x001522; 	X(MOV(*((&byte_40dfa)+bx), 0));	// 36957 mov     byte_40DFA[bx], 0 ;~ 1359:1522
cs=0x1359;eip=0x001527; 	J(JMP(loc_2319d));	// 36958 jmp     loc_2319D ;~ 1359:1527
loc_2309a:
	// 6847 
cs=0x1359;eip=0x00152a; 	T(MOV(al, byte_4432a));	// 36963 mov     al, byte_4432A ;~ 1359:152A
cs=0x1359;eip=0x00152d; 	T(CBW);	// 36964 cbw ;~ 1359:152D
cs=0x1359;eip=0x00152e; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 36965 mov     [bp+var_20], ax ;~ 1359:152E
cs=0x1359;eip=0x001531; 	T(MOV(bx, ax));	// 36966 mov     bx, ax ;~ 1359:1531
cs=0x1359;eip=0x001533; 	T(MOV(al, byte_446b0));	// 36967 mov     al, byte_446B0 ;~ 1359:1533
cs=0x1359;eip=0x001536; 	T(CMP(*((&byte_40dfa)+bx), al));	// 36968 cmp     byte_40DFA[bx], al ;~ 1359:1536
cs=0x1359;eip=0x00153a; 	J(JNZ(loc_230de));	// 36969 jnz     short loc_230DE ;~ 1359:153A
cs=0x1359;eip=0x00153c; 	T(MOV(ax, bx));	// 36970 mov     ax, bx ;~ 1359:153C
cs=0x1359;eip=0x00153e; 	T(SHL(ax, 1));	// 36971 shl     ax, 1 ;~ 1359:153E
cs=0x1359;eip=0x001540; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 36972 mov     [bp+var_1E], ax ;~ 1359:1540
cs=0x1359;eip=0x001543; 	T(MOV(bx, ax));	// 36973 mov     bx, ax ;~ 1359:1543
cs=0x1359;eip=0x001545; 	T(MOV(ax, word_4461a));	// 36974 mov     ax, word_4461A ;~ 1359:1545
cs=0x1359;eip=0x001548; 	T(CMP(*(dw*)(((db*)&word_40d70)+bx), ax));	// 36975 cmp     word_40D70[bx], ax ;~ 1359:1548
cs=0x1359;eip=0x00154c; 	J(JNZ(loc_230de));	// 36976 jnz     short loc_230DE ;~ 1359:154C
cs=0x1359;eip=0x00154e; 	T(MOV(ax, word_4461e));	// 36977 mov     ax, word_4461E ;~ 1359:154E
cs=0x1359;eip=0x001551; 	T(CMP(*(dw*)(((db*)&word_40d74)+bx), ax));	// 36978 cmp     word_40D74[bx], ax ;~ 1359:1551
cs=0x1359;eip=0x001555; 	J(JNZ(loc_230de));	// 36979 jnz     short loc_230DE ;~ 1359:1555
cs=0x1359;eip=0x001557; 	T(CMP(byte_446b1, 0));	// 36980 cmp     byte_446B1, 0 ;~ 1359:1557
cs=0x1359;eip=0x00155c; 	J(JNZ(loc_230d1));	// 36981 jnz     short loc_230D1 ;~ 1359:155C
cs=0x1359;eip=0x00155e; 	J(JMP(loc_2319d));	// 36982 jmp     loc_2319D ;~ 1359:155E
loc_230d1:
	// 6848 
cs=0x1359;eip=0x001561; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_20))));	// 36986 mov     bx, [bp+var_20] ;~ 1359:1561
cs=0x1359;eip=0x001564; 	T(CMP(*((&byte_40dfa)+bx), 0));	// 36987 cmp     byte_40DFA[bx], 0 ;~ 1359:1564
cs=0x1359;eip=0x001569; 	J(JZ(loc_230de));	// 36988 jz      short loc_230DE ;~ 1359:1569
cs=0x1359;eip=0x00156b; 	J(JMP(loc_2319d));	// 36989 jmp     loc_2319D ;~ 1359:156B
loc_230de:
	// 6849 
cs=0x1359;eip=0x00156e; 	X(PUSH(*(dw*)(((db*)&whlsprite2)+2)));	// 36994 push    word ptr whlsprite2+2 ;~ 1359:156E
cs=0x1359;eip=0x001572; 	X(PUSH(*(dw*)(((db*)&whlsprite2))));	// 36995 push    word ptr whlsprite2 ;~ 1359:1572
cs=0x1359;eip=0x001576; 	J(CALLF(sprite_set_1_from_argptr,0));	// 36996 call    sprite_set_1_from_argptr ;~ 1359:1576
cs=0x1359;eip=0x00157b; 	T(ADD(sp, 4));	// 36997 add     sp, 4 ;~ 1359:157B
cs=0x1359;eip=0x00157e; 	T(MOV(al, byte_4432a));	// 36998 mov     al, byte_4432A ;~ 1359:157E
cs=0x1359;eip=0x001581; 	T(CBW);	// 36999 cbw ;~ 1359:1581
cs=0x1359;eip=0x001582; 	T(MOV(bx, ax));	// 37000 mov     bx, ax ;~ 1359:1582
cs=0x1359;eip=0x001584; 	X(MOV(*((&byte_40dfa)+bx), 1));	// 37001 mov     byte_40DFA[bx], 1 ;~ 1359:1584
cs=0x1359;eip=0x001589; 	T(SUB(ax, ax));	// 37002 sub     ax, ax ;~ 1359:1589
cs=0x1359;eip=0x00158b; 	X(PUSH(ax));	// 37003 push    ax ;~ 1359:158B
cs=0x1359;eip=0x00158c; 	X(PUSH(ax));	// 37004 push    ax ;~ 1359:158C
cs=0x1359;eip=0x00158d; 	X(PUSH(*(dw*)(((db*)&dword_40dc0)+2)));	// 37005 push    word ptr dword_40DC0+2 ;~ 1359:158D
cs=0x1359;eip=0x001591; 	X(PUSH(*(dw*)(((db*)&dword_40dc0))));	// 37006 push    word ptr dword_40DC0 ;~ 1359:1591
cs=0x1359;eip=0x001595; 	J(CALLF(shape2d_op_unk2,0));	// 37007 call    shape2d_op_unk2 ;~ 1359:1595
cs=0x1359;eip=0x00159a; 	T(ADD(sp, 8));	// 37008 add     sp, 8 ;~ 1359:159A
cs=0x1359;eip=0x00159d; 	T(MOV(si, word_4461a));	// 37009 mov     si, word_4461A ;~ 1359:159D
cs=0x1359;eip=0x0015a1; 	T(MOV(di, word_4461e));	// 37010 mov     di, word_4461E ;~ 1359:15A1
cs=0x1359;eip=0x0015a5; 	T(MOV(al, byte_4432a));	// 37011 mov     al, byte_4432A ;~ 1359:15A5
cs=0x1359;eip=0x0015a8; 	T(CBW);	// 37012 cbw ;~ 1359:15A8
cs=0x1359;eip=0x0015a9; 	T(SHL(ax, 1));	// 37013 shl     ax, 1 ;~ 1359:15A9
cs=0x1359;eip=0x0015ab; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 37014 mov     [bp+var_20], ax ;~ 1359:15AB
cs=0x1359;eip=0x0015ae; 	T(MOV(bx, ax));	// 37015 mov     bx, ax ;~ 1359:15AE
cs=0x1359;eip=0x0015b0; 	X(MOV(*(dw*)(((db*)&word_40d70)+bx), si));	// 37016 mov     word_40D70[bx], si ;~ 1359:15B0
cs=0x1359;eip=0x0015b4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_20))));	// 37017 mov     bx, [bp+var_20] ;~ 1359:15B4
cs=0x1359;eip=0x0015b7; 	X(MOV(*(dw*)(((db*)&word_40d74)+bx), di));	// 37018 mov     word_40D74[bx], di ;~ 1359:15B7
cs=0x1359;eip=0x0015bb; 	X(PUSH(di));	// 37019 push    di ;~ 1359:15BB
cs=0x1359;eip=0x0015bc; 	X(PUSH(si));	// 37020 push    si ;~ 1359:15BC
cs=0x1359;eip=0x0015bd; 	X(PUSH(word_40dda));	// 37021 push    word_40DDA ;~ 1359:15BD
cs=0x1359;eip=0x0015c1; 	X(PUSH(word_40dd8));	// 37022 push    word_40DD8 ;~ 1359:15C1
cs=0x1359;eip=0x0015c5; 	J(CALLF(sprite_putimage_and_alt2,0));	// 37023 call    sprite_putimage_and_alt2 ;~ 1359:15C5
cs=0x1359;eip=0x0015ca; 	T(ADD(sp, 8));	// 37024 add     sp, 8 ;~ 1359:15CA
cs=0x1359;eip=0x0015cd; 	X(PUSH(di));	// 37025 push    di ;~ 1359:15CD
cs=0x1359;eip=0x0015ce; 	X(PUSH(si));	// 37026 push    si ;~ 1359:15CE
cs=0x1359;eip=0x0015cf; 	X(PUSH(word_40dd6));	// 37027 push    word_40DD6 ;~ 1359:15CF
cs=0x1359;eip=0x0015d3; 	X(PUSH(gnobshapes));	// 37028 push    gnobshapes ;~ 1359:15D3
cs=0x1359;eip=0x0015d7; 	J(CALLF(sprite_putimage_or_alt,0));	// 37029 call    sprite_putimage_or_alt ;~ 1359:15D7
cs=0x1359;eip=0x0015dc; 	T(ADD(sp, 8));	// 37030 add     sp, 8 ;~ 1359:15DC
cs=0x1359;eip=0x0015df; 	T(CMP(video_flag5_is0, 0));	// 37031 cmp     video_flag5_is0, 0 ;~ 1359:15DF
cs=0x1359;eip=0x0015e4; 	J(JZ(loc_2315e));	// 37032 jz      short loc_2315E ;~ 1359:15E4
cs=0x1359;eip=0x0015e6; 	J(CALLF(setup_mcgawnd2,0));	// 37033 call    setup_mcgawnd2 ;~ 1359:15E6
cs=0x1359;eip=0x0015eb; 	J(JMP(loc_23168));	// 37034 jmp     short loc_23168 ;~ 1359:15EB
loc_2315e:
	// 6850 
cs=0x1359;eip=0x0015ee; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 37039 call    sprite_copy_2_to_1_2 ;~ 1359:15EE
cs=0x1359;eip=0x0015f3; 	J(CALLF(mouse_draw_opaque_check,0));	// 37040 call    mouse_draw_opaque_check ;~ 1359:15F3
loc_23168:
	// 6851 
cs=0x1359;eip=0x0015f8; 	X(PUSH(height_above_replaybar));	// 37043 push    height_above_replaybar ;~ 1359:15F8
cs=0x1359;eip=0x0015fc; 	T(SUB(ax, ax));	// 37044 sub     ax, ax ;~ 1359:15FC
cs=0x1359;eip=0x0015fe; 	X(PUSH(ax));	// 37045 push    ax ;~ 1359:15FE
cs=0x1359;eip=0x0015ff; 	T(MOV(ax, 0x140));	// 37046 mov     ax, 140h ;~ 1359:15FF
cs=0x1359;eip=0x001602; 	X(PUSH(ax));	// 37047 push    ax ;~ 1359:1602
cs=0x1359;eip=0x001603; 	T(SUB(ax, ax));	// 37048 sub     ax, ax ;~ 1359:1603
cs=0x1359;eip=0x001605; 	X(PUSH(ax));	// 37049 push    ax ;~ 1359:1605
cs=0x1359;eip=0x001606; 	J(CALLF(sprite_set_1_size,0));	// 37050 call    sprite_set_1_size ;~ 1359:1606
cs=0x1359;eip=0x00160b; 	T(ADD(sp, 8));	// 37051 add     sp, 8 ;~ 1359:160B
cs=0x1359;eip=0x00160e; 	T(LES(bx, dword_40dc0));	// 37052 les     bx, dword_40DC0 ;~ 1359:160E
cs=0x1359;eip=0x001612; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 37053 push    word ptr es:[bx+0Ah] ;~ 1359:1612
cs=0x1359;eip=0x001616; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 37054 push    word ptr es:[bx+8] ;~ 1359:1616
cs=0x1359;eip=0x00161a; 	T(LES(bx, whlsprite2));	// 37055 les     bx, whlsprite2 ;~ 1359:161A
cs=0x1359;eip=0x00161e; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 37056 push    word ptr es:[bx+2] ;~ 1359:161E
cs=0x1359;eip=0x001622; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 37057 push    word ptr es:[bx] ;~ 1359:1622
cs=0x1359;eip=0x001625; 	J(CALLF(sprite_putimage_and_alt,0));	// 37058 call    sprite_putimage_and_alt ;~ 1359:1625
cs=0x1359;eip=0x00162a; 	T(ADD(sp, 8));	// 37059 add     sp, 8 ;~ 1359:162A
loc_2319d:
	// 6852 
cs=0x1359;eip=0x00162d; 	X(MOV(*(raddr(ss,bp+var_1a)), 0));	// 37063 mov     [bp+var_1A], 0 ;~ 1359:162D
cs=0x1359;eip=0x001631; 	T(MOV(ax, word_44606));	// 37064 mov     ax, word_44606 ;~ 1359:1631
cs=0x1359;eip=0x001634; 	T(CWD);	// 37065 cwd ;~ 1359:1634
cs=0x1359;eip=0x001635; 	T(XOR(ax, dx));	// 37066 xor     ax, dx ;~ 1359:1635
cs=0x1359;eip=0x001637; 	T(SUB(ax, dx));	// 37067 sub     ax, dx ;~ 1359:1637
cs=0x1359;eip=0x001639; 	T(MOV(cx, 3));	// 37068 mov     cx, 3 ;~ 1359:1639
cs=0x1359;eip=0x00163c; 	T(SAR(ax, cl));	// 37069 sar     ax, cl ;~ 1359:163C
cs=0x1359;eip=0x00163e; 	T(XOR(ax, dx));	// 37070 xor     ax, dx ;~ 1359:163E
cs=0x1359;eip=0x001640; 	T(SUB(ax, dx));	// 37071 sub     ax, dx ;~ 1359:1640
cs=0x1359;eip=0x001642; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 37072 mov     [bp+var_4], ax ;~ 1359:1642
cs=0x1359;eip=0x001645; 	X(MOV(*(raddr(ss,bp+var_2)), 1));	// 37073 mov     [bp+var_2], 1 ;~ 1359:1645
cs=0x1359;eip=0x001649; 	T(CMP(ax, 0x0FFF6));	// 37074 cmp     ax, 0FFF6h ;~ 1359:1649
cs=0x1359;eip=0x00164c; 	J(JGE(loc_231c4));	// 37075 jge     short loc_231C4 ;~ 1359:164C
cs=0x1359;eip=0x00164e; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 37076 mov     [bp+var_2], 0 ;~ 1359:164E
cs=0x1359;eip=0x001652; 	J(JMP(loc_231ce));	// 37077 jmp     short loc_231CE ;~ 1359:1652
loc_231c4:
	// 6853 
cs=0x1359;eip=0x001654; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x0A));	// 37081 cmp     [bp+var_4], 0Ah ;~ 1359:1654
cs=0x1359;eip=0x001658; 	J(JLE(loc_231ce));	// 37082 jle     short loc_231CE ;~ 1359:1658
cs=0x1359;eip=0x00165a; 	X(MOV(*(raddr(ss,bp+var_2)), 2));	// 37083 mov     [bp+var_2], 2 ;~ 1359:165A
loc_231ce:
	// 6854 
cs=0x1359;eip=0x00165e; 	T(MOV(al, byte_4432a));	// 37087 mov     al, byte_4432A ;~ 1359:165E
cs=0x1359;eip=0x001661; 	T(CBW);	// 37088 cbw ;~ 1359:1661
cs=0x1359;eip=0x001662; 	T(MOV(bx, ax));	// 37089 mov     bx, ax ;~ 1359:1662
cs=0x1359;eip=0x001664; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 37090 mov     al, [bp+var_2] ;~ 1359:1664
cs=0x1359;eip=0x001667; 	T(CMP(*((&byte_40df0)+bx), al));	// 37091 cmp     byte_40DF0[bx], al ;~ 1359:1667
cs=0x1359;eip=0x00166b; 	J(JNZ(loc_231e7));	// 37092 jnz     short loc_231E7 ;~ 1359:166B
cs=0x1359;eip=0x00166d; 	T(CMP(byte_454a4, 0));	// 37093 cmp     byte_454A4, 0 ;~ 1359:166D
cs=0x1359;eip=0x001672; 	J(JNZ(loc_231e7));	// 37094 jnz     short loc_231E7 ;~ 1359:1672
cs=0x1359;eip=0x001674; 	J(JMP(loc_23286));	// 37095 jmp     loc_23286 ;~ 1359:1674
loc_231e7:
	// 6855 
cs=0x1359;eip=0x001677; 	T(CMP(video_flag5_is0, 0));	// 37100 cmp     video_flag5_is0, 0 ;~ 1359:1677
cs=0x1359;eip=0x00167c; 	J(JNZ(loc_231f3));	// 37101 jnz     short loc_231F3 ;~ 1359:167C
cs=0x1359;eip=0x00167e; 	J(CALLF(mouse_draw_opaque_check,0));	// 37102 call    mouse_draw_opaque_check ;~ 1359:167E
loc_231f3:
	// 6856 
cs=0x1359;eip=0x001683; 	T(MOV(al, byte_4432a));	// 37105 mov     al, byte_4432A ;~ 1359:1683
cs=0x1359;eip=0x001686; 	T(CBW);	// 37106 cbw ;~ 1359:1686
cs=0x1359;eip=0x001687; 	T(SHL(ax, 1));	// 37107 shl     ax, 1 ;~ 1359:1687
cs=0x1359;eip=0x001689; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 37108 mov     [bp+var_20], ax ;~ 1359:1689
cs=0x1359;eip=0x00168c; 	T(MOV(bx, ax));	// 37109 mov     bx, ax ;~ 1359:168C
cs=0x1359;eip=0x00168e; 	T(CMP(*(dw*)(((db*)&word_40df6)+bx), 0));	// 37110 cmp     word_40DF6[bx], 0 ;~ 1359:168E
cs=0x1359;eip=0x001693; 	J(JZ(loc_23239));	// 37111 jz      short loc_23239 ;~ 1359:1693
cs=0x1359;eip=0x001695; 	X(PUSH(*(dw*)(((db*)&word_40df6)+bx)));	// 37112 push    word_40DF6[bx] ;~ 1359:1695
cs=0x1359;eip=0x001699; 	X(PUSH(*(dw*)(((db*)&word_40df2)+bx)));	// 37113 push    word_40DF2[bx] ;~ 1359:1699
cs=0x1359;eip=0x00169d; 	T(MOV(al, byte_44346));	// 37114 mov     al, byte_44346 ;~ 1359:169D
cs=0x1359;eip=0x0016a0; 	T(CBW);	// 37115 cbw ;~ 1359:16A0
cs=0x1359;eip=0x0016a1; 	T(MOV(bx, ax));	// 37116 mov     bx, ax ;~ 1359:16A1
cs=0x1359;eip=0x0016a3; 	T(SHL(bx, 1));	// 37117 shl     bx, 1 ;~ 1359:16A3
cs=0x1359;eip=0x0016a5; 	T(SHL(bx, 1));	// 37118 shl     bx, 1 ;~ 1359:16A5
cs=0x1359;eip=0x0016a7; 	X(PUSH(*(dw*)(((db*)&word_40de6)+bx)));	// 37119 push    word_40DE6[bx] ;~ 1359:16A7
cs=0x1359;eip=0x0016ab; 	X(PUSH(*(dw*)(((db*)&word_40de4)+bx)));	// 37120 push    word_40DE4[bx] ;~ 1359:16AB
cs=0x1359;eip=0x0016af; 	J(CALLF(sprite_putimage_and_alt,0));	// 37121 call    sprite_putimage_and_alt ;~ 1359:16AF
cs=0x1359;eip=0x0016b4; 	T(ADD(sp, 8));	// 37122 add     sp, 8 ;~ 1359:16B4
cs=0x1359;eip=0x0016b7; 	T(MOV(al, byte_4432a));	// 37123 mov     al, byte_4432A ;~ 1359:16B7
cs=0x1359;eip=0x0016ba; 	T(CBW);	// 37124 cbw ;~ 1359:16BA
cs=0x1359;eip=0x0016bb; 	T(MOV(bx, ax));	// 37125 mov     bx, ax ;~ 1359:16BB
cs=0x1359;eip=0x0016bd; 	T(SHL(bx, 1));	// 37126 shl     bx, 1 ;~ 1359:16BD
cs=0x1359;eip=0x0016bf; 	X(MOV(*(dw*)(((db*)&word_40df6)+bx), 0));	// 37127 mov     word_40DF6[bx], 0 ;~ 1359:16BF
cs=0x1359;eip=0x0016c5; 	X(MOV(*(raddr(ss,bp+var_1a)), 1));	// 37128 mov     [bp+var_1A], 1 ;~ 1359:16C5
loc_23239:
	// 6857 
cs=0x1359;eip=0x0016c9; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 37131 mov     al, [bp+var_2] ;~ 1359:16C9
cs=0x1359;eip=0x0016cc; 	T(CBW);	// 37132 cbw ;~ 1359:16CC
cs=0x1359;eip=0x0016cd; 	T(OR(ax, ax));	// 37133 or      ax, ax ;~ 1359:16CD
cs=0x1359;eip=0x0016cf; 	J(JZ(loc_2324e));	// 37134 jz      short loc_2324E ;~ 1359:16CF
cs=0x1359;eip=0x0016d1; 	T(CMP(ax, 1));	// 37135 cmp     ax, 1 ;~ 1359:16D1
cs=0x1359;eip=0x0016d4; 	J(JZ(loc_23272));	// 37136 jz      short loc_23272 ;~ 1359:16D4
cs=0x1359;eip=0x0016d6; 	T(CMP(ax, 2));	// 37137 cmp     ax, 2 ;~ 1359:16D6
cs=0x1359;eip=0x0016d9; 	J(JZ(loc_2327c));	// 37138 jz      short loc_2327C ;~ 1359:16D9
cs=0x1359;eip=0x0016db; 	J(JMP(loc_2325e));	// 37139 jmp     short loc_2325E ;~ 1359:16DB
loc_2324e:
	// 6858 
cs=0x1359;eip=0x0016de; 	X(PUSH(word_40db2));	// 37144 push    word_40DB2 ;~ 1359:16DE
cs=0x1359;eip=0x0016e2; 	X(PUSH(whlshapes));	// 37145 push    whlshapes ;~ 1359:16E2
loc_23256:
	// 6859 
cs=0x1359;eip=0x0016e6; 	J(CALLF(shape2d_op_unk3,0));	// 37149 call    shape2d_op_unk3 ;~ 1359:16E6
cs=0x1359;eip=0x0016eb; 	T(ADD(sp, 4));	// 37150 add     sp, 4 ;~ 1359:16EB
loc_2325e:
	// 6860 
cs=0x1359;eip=0x0016ee; 	T(MOV(al, byte_4432a));	// 37153 mov     al, byte_4432A ;~ 1359:16EE
cs=0x1359;eip=0x0016f1; 	T(CBW);	// 37154 cbw ;~ 1359:16F1
cs=0x1359;eip=0x0016f2; 	T(MOV(bx, ax));	// 37155 mov     bx, ax ;~ 1359:16F2
cs=0x1359;eip=0x0016f4; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 37156 mov     al, [bp+var_2] ;~ 1359:16F4
cs=0x1359;eip=0x0016f7; 	X(MOV(*((&byte_40df0)+bx), al));	// 37157 mov     byte_40DF0[bx], al ;~ 1359:16F7
cs=0x1359;eip=0x0016fb; 	X(MOV(*(raddr(ss,bp+var_18)), 1));	// 37158 mov     [bp+var_18], 1 ;~ 1359:16FB
cs=0x1359;eip=0x0016ff; 	J(JMP(loc_2328a));	// 37159 jmp     short loc_2328A ;~ 1359:16FF
loc_23272:
	// 6861 
cs=0x1359;eip=0x001702; 	X(PUSH(word_40db6));	// 37164 push    word_40DB6 ;~ 1359:1702
cs=0x1359;eip=0x001706; 	X(PUSH(word_40db4));	// 37165 push    word_40DB4 ;~ 1359:1706
cs=0x1359;eip=0x00170a; 	J(JMP(loc_23256));	// 37166 jmp     short loc_23256 ;~ 1359:170A
loc_2327c:
	// 6862 
cs=0x1359;eip=0x00170c; 	X(PUSH(word_40dba));	// 37170 push    word_40DBA ;~ 1359:170C
cs=0x1359;eip=0x001710; 	X(PUSH(word_40db8));	// 37171 push    word_40DB8 ;~ 1359:1710
cs=0x1359;eip=0x001714; 	J(JMP(loc_23256));	// 37172 jmp     short loc_23256 ;~ 1359:1714
loc_23286:
	// 6863 
cs=0x1359;eip=0x001716; 	X(MOV(*(raddr(ss,bp+var_18)), 0));	// 37176 mov     [bp+var_18], 0 ;~ 1359:1716
loc_2328a:
	// 6864 
cs=0x1359;eip=0x00171a; 	T(MOV(ax, word_45f84));	// 37179 mov     ax, word_45F84 ;~ 1359:171A
cs=0x1359;eip=0x00171d; 	T(CMP(ax, 0x0FFFF));	// 37180 cmp     ax, 0FFFFh ;~ 1359:171D
cs=0x1359;eip=0x001720; 	J(JZ(loc_232b6));	// 37181 jz      short loc_232B6 ;~ 1359:1720
cs=0x1359;eip=0x001722; 	T(OR(ax, ax));	// 37182 or      ax, ax ;~ 1359:1722
cs=0x1359;eip=0x001724; 	J(JNZ(loc_23299));	// 37183 jnz     short loc_23299 ;~ 1359:1724
cs=0x1359;eip=0x001726; 	J(JMP(loc_233a2));	// 37184 jmp     loc_233A2 ;~ 1359:1726
loc_23299:
	// 6865 
cs=0x1359;eip=0x001729; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 37188 mov     [bp+var_6], 0 ;~ 1359:1729
cs=0x1359;eip=0x00172d; 	T(MOV(ax, word_44610));	// 37189 mov     ax, word_44610 ;~ 1359:172D
cs=0x1359;eip=0x001730; 	T(SUB(dx, dx));	// 37190 sub     dx, dx ;~ 1359:1730
cs=0x1359;eip=0x001732; 	T(MOV(cx, 0x280));	// 37191 mov     cx, 280h ;~ 1359:1732
cs=0x1359;eip=0x001735; 	T(DIV2(cx));	// 37192 div     cx ;~ 1359:1735
cs=0x1359;eip=0x001737; 	T(MOV(si, ax));	// 37193 mov     si, ax ;~ 1359:1737
cs=0x1359;eip=0x001739; 	T(CMP(word_45f86, si));	// 37194 cmp     word_45F86, si ;~ 1359:1739
cs=0x1359;eip=0x00173d; 	J(JG(loc_232bc));	// 37195 jg      short loc_232BC ;~ 1359:173D
cs=0x1359;eip=0x00173f; 	T(MOV(si, word_45f86));	// 37196 mov     si, word_45F86 ;~ 1359:173F
cs=0x1359;eip=0x001743; 	T(DEC(si));	// 37197 dec     si ;~ 1359:1743
cs=0x1359;eip=0x001744; 	J(JMP(loc_232bc));	// 37198 jmp     short loc_232BC ;~ 1359:1744
loc_232b6:
	// 6866 
cs=0x1359;eip=0x001746; 	T(SUB(si, si));	// 37202 sub     si, si ;~ 1359:1746
cs=0x1359;eip=0x001748; 	X(MOV(*(raddr(ss,bp+var_6)), 2));	// 37203 mov     [bp+var_6], 2 ;~ 1359:1748
loc_232bc:
	// 6867 
cs=0x1359;eip=0x00174c; 	T(MOV(ax, word_44608));	// 37207 mov     ax, word_44608 ;~ 1359:174C
cs=0x1359;eip=0x00174f; 	T(MOV(cl, 7));	// 37208 mov     cl, 7 ;~ 1359:174F
cs=0x1359;eip=0x001751; 	T(SHR(ax, cl));	// 37209 shr     ax, cl ;~ 1359:1751
cs=0x1359;eip=0x001753; 	T(MOV(di, ax));	// 37210 mov     di, ax ;~ 1359:1753
cs=0x1359;eip=0x001755; 	T(CMP(word_4605c, di));	// 37211 cmp     word_4605C, di ;~ 1359:1755
cs=0x1359;eip=0x001759; 	J(JG(loc_232d0));	// 37212 jg      short loc_232D0 ;~ 1359:1759
cs=0x1359;eip=0x00175b; 	T(MOV(di, word_4605c));	// 37213 mov     di, word_4605C ;~ 1359:175B
cs=0x1359;eip=0x00175f; 	T(DEC(di));	// 37214 dec     di ;~ 1359:175F
loc_232d0:
	// 6868 
cs=0x1359;eip=0x001760; 	T(CMP(*(raddr(ss,bp+var_18)), 0));	// 37217 cmp     [bp+var_18], 0 ;~ 1359:1760
cs=0x1359;eip=0x001764; 	J(JNZ(loc_232f7));	// 37218 jnz     short loc_232F7 ;~ 1359:1764
cs=0x1359;eip=0x001766; 	T(CMP(byte_454a4, 0));	// 37219 cmp     byte_454A4, 0 ;~ 1359:1766
cs=0x1359;eip=0x00176b; 	J(JNZ(loc_232f7));	// 37220 jnz     short loc_232F7 ;~ 1359:176B
cs=0x1359;eip=0x00176d; 	T(MOV(al, byte_4432a));	// 37221 mov     al, byte_4432A ;~ 1359:176D
cs=0x1359;eip=0x001770; 	T(CBW);	// 37222 cbw ;~ 1359:1770
cs=0x1359;eip=0x001771; 	T(SHL(ax, 1));	// 37223 shl     ax, 1 ;~ 1359:1771
cs=0x1359;eip=0x001773; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 37224 mov     [bp+var_20], ax ;~ 1359:1773
cs=0x1359;eip=0x001776; 	T(MOV(bx, ax));	// 37225 mov     bx, ax ;~ 1359:1776
cs=0x1359;eip=0x001778; 	T(CMP(*(dw*)(((db*)&word_40d78)+bx), si));	// 37226 cmp     word_40D78[bx], si ;~ 1359:1778
cs=0x1359;eip=0x00177c; 	J(JNZ(loc_232f7));	// 37227 jnz     short loc_232F7 ;~ 1359:177C
cs=0x1359;eip=0x00177e; 	T(CMP(*(dw*)(((db*)&word_40d6c)+bx), di));	// 37228 cmp     word_40D6C[bx], di ;~ 1359:177E
cs=0x1359;eip=0x001782; 	J(JNZ(loc_232f7));	// 37229 jnz     short loc_232F7 ;~ 1359:1782
cs=0x1359;eip=0x001784; 	J(JMP(loc_23540));	// 37230 jmp     loc_23540 ;~ 1359:1784
loc_232f7:
	// 6869 
cs=0x1359;eip=0x001787; 	T(CMP(video_flag5_is0, 0));	// 37235 cmp     video_flag5_is0, 0 ;~ 1359:1787
cs=0x1359;eip=0x00178c; 	J(JNZ(loc_23303));	// 37236 jnz     short loc_23303 ;~ 1359:178C
cs=0x1359;eip=0x00178e; 	J(CALLF(mouse_draw_opaque_check,0));	// 37237 call    mouse_draw_opaque_check ;~ 1359:178E
loc_23303:
	// 6870 
cs=0x1359;eip=0x001793; 	T(MOV(al, byte_4432a));	// 37240 mov     al, byte_4432A ;~ 1359:1793
cs=0x1359;eip=0x001796; 	T(CBW);	// 37241 cbw ;~ 1359:1796
cs=0x1359;eip=0x001797; 	T(SHL(ax, 1));	// 37242 shl     ax, 1 ;~ 1359:1797
cs=0x1359;eip=0x001799; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 37243 mov     [bp+var_20], ax ;~ 1359:1799
cs=0x1359;eip=0x00179c; 	T(MOV(bx, ax));	// 37244 mov     bx, ax ;~ 1359:179C
cs=0x1359;eip=0x00179e; 	T(CMP(*(dw*)(((db*)&word_40df6)+bx), 0));	// 37245 cmp     word_40DF6[bx], 0 ;~ 1359:179E
cs=0x1359;eip=0x0017a3; 	J(JZ(loc_23349));	// 37246 jz      short loc_23349 ;~ 1359:17A3
cs=0x1359;eip=0x0017a5; 	X(PUSH(*(dw*)(((db*)&word_40df6)+bx)));	// 37247 push    word_40DF6[bx] ;~ 1359:17A5
cs=0x1359;eip=0x0017a9; 	X(PUSH(*(dw*)(((db*)&word_40df2)+bx)));	// 37248 push    word_40DF2[bx] ;~ 1359:17A9
cs=0x1359;eip=0x0017ad; 	T(MOV(al, byte_44346));	// 37249 mov     al, byte_44346 ;~ 1359:17AD
cs=0x1359;eip=0x0017b0; 	T(CBW);	// 37250 cbw ;~ 1359:17B0
cs=0x1359;eip=0x0017b1; 	T(MOV(bx, ax));	// 37251 mov     bx, ax ;~ 1359:17B1
cs=0x1359;eip=0x0017b3; 	T(SHL(bx, 1));	// 37252 shl     bx, 1 ;~ 1359:17B3
cs=0x1359;eip=0x0017b5; 	T(SHL(bx, 1));	// 37253 shl     bx, 1 ;~ 1359:17B5
cs=0x1359;eip=0x0017b7; 	X(PUSH(*(dw*)(((db*)&word_40de6)+bx)));	// 37254 push    word_40DE6[bx] ;~ 1359:17B7
cs=0x1359;eip=0x0017bb; 	X(PUSH(*(dw*)(((db*)&word_40de4)+bx)));	// 37255 push    word_40DE4[bx] ;~ 1359:17BB
cs=0x1359;eip=0x0017bf; 	J(CALLF(sprite_putimage_and_alt,0));	// 37256 call    sprite_putimage_and_alt ;~ 1359:17BF
cs=0x1359;eip=0x0017c4; 	T(ADD(sp, 8));	// 37257 add     sp, 8 ;~ 1359:17C4
cs=0x1359;eip=0x0017c7; 	T(MOV(al, byte_4432a));	// 37258 mov     al, byte_4432A ;~ 1359:17C7
cs=0x1359;eip=0x0017ca; 	T(CBW);	// 37259 cbw ;~ 1359:17CA
cs=0x1359;eip=0x0017cb; 	T(MOV(bx, ax));	// 37260 mov     bx, ax ;~ 1359:17CB
cs=0x1359;eip=0x0017cd; 	T(SHL(bx, 1));	// 37261 shl     bx, 1 ;~ 1359:17CD
cs=0x1359;eip=0x0017cf; 	X(MOV(*(dw*)(((db*)&word_40df6)+bx), 0));	// 37262 mov     word_40DF6[bx], 0 ;~ 1359:17CF
cs=0x1359;eip=0x0017d5; 	X(MOV(*(raddr(ss,bp+var_1a)), 1));	// 37263 mov     [bp+var_1A], 1 ;~ 1359:17D5
loc_23349:
	// 6871 
cs=0x1359;eip=0x0017d9; 	X(PUSH(*(dw*)(((db*)&whlsprite1)+2)));	// 37266 push    word ptr whlsprite1+2 ;~ 1359:17D9
cs=0x1359;eip=0x0017dd; 	X(PUSH(*(dw*)(((db*)&whlsprite1))));	// 37267 push    word ptr whlsprite1 ;~ 1359:17DD
cs=0x1359;eip=0x0017e1; 	J(CALLF(sprite_set_1_from_argptr,0));	// 37268 call    sprite_set_1_from_argptr ;~ 1359:17E1
cs=0x1359;eip=0x0017e6; 	T(ADD(sp, 4));	// 37269 add     sp, 4 ;~ 1359:17E6
cs=0x1359;eip=0x0017e9; 	T(SUB(ax, ax));	// 37270 sub     ax, ax ;~ 1359:17E9
cs=0x1359;eip=0x0017eb; 	X(PUSH(ax));	// 37271 push    ax ;~ 1359:17EB
cs=0x1359;eip=0x0017ec; 	X(PUSH(ax));	// 37272 push    ax ;~ 1359:17EC
cs=0x1359;eip=0x0017ed; 	X(PUSH(*(dw*)(((db*)&dword_40dbc)+2)));	// 37273 push    word ptr dword_40DBC+2 ;~ 1359:17ED
cs=0x1359;eip=0x0017f1; 	X(PUSH(*(dw*)(((db*)&dword_40dbc))));	// 37274 push    word ptr dword_40DBC ;~ 1359:17F1
cs=0x1359;eip=0x0017f5; 	J(CALLF(shape2d_op_unk5,0));	// 37275 call    shape2d_op_unk5 ;~ 1359:17F5
cs=0x1359;eip=0x0017fa; 	T(ADD(sp, 8));	// 37276 add     sp, 8 ;~ 1359:17FA
cs=0x1359;eip=0x0017fd; 	T(MOV(al, byte_4432a));	// 37277 mov     al, byte_4432A ;~ 1359:17FD
cs=0x1359;eip=0x001800; 	T(CBW);	// 37278 cbw ;~ 1359:1800
cs=0x1359;eip=0x001801; 	T(SHL(ax, 1));	// 37279 shl     ax, 1 ;~ 1359:1801
cs=0x1359;eip=0x001803; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 37280 mov     [bp+var_20], ax ;~ 1359:1803
cs=0x1359;eip=0x001806; 	T(MOV(bx, ax));	// 37281 mov     bx, ax ;~ 1359:1806
cs=0x1359;eip=0x001808; 	X(MOV(*(dw*)(((db*)&word_40d78)+bx), si));	// 37282 mov     word_40D78[bx], si ;~ 1359:1808
cs=0x1359;eip=0x00180c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_20))));	// 37283 mov     bx, [bp+var_20] ;~ 1359:180C
cs=0x1359;eip=0x00180f; 	X(MOV(*(dw*)(((db*)&word_40d6c)+bx), di));	// 37284 mov     word_40D6C[bx], di ;~ 1359:180F
cs=0x1359;eip=0x001813; 	T(CMP(*(raddr(ss,bp+var_6)), 1));	// 37285 cmp     [bp+var_6], 1 ;~ 1359:1813
cs=0x1359;eip=0x001817; 	J(JZ(loc_2338c));	// 37286 jz      short loc_2338C ;~ 1359:1817
cs=0x1359;eip=0x001819; 	J(JMP(loc_23456));	// 37287 jmp     loc_23456 ;~ 1359:1819
loc_2338c:
	// 6872 
cs=0x1359;eip=0x00181c; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 37291 mov     [bp+var_8], 0 ;~ 1359:181C
cs=0x1359;eip=0x001821; 	T(CMP(si, 0x0C8));	// 37292 cmp     si, 0C8h ; 'È' ;~ 1359:1821
cs=0x1359;eip=0x001825; 	J(JL(loc_233b2));	// 37293 jl      short loc_233B2 ;~ 1359:1825
cs=0x1359;eip=0x001827; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 2));	// 37294 mov     [bp+var_8], 2 ;~ 1359:1827
cs=0x1359;eip=0x00182c; 	T(SUB(si, 0x0C8));	// 37295 sub     si, 0C8h ; 'È' ;~ 1359:182C
cs=0x1359;eip=0x001830; 	J(JMP(loc_233bf));	// 37296 jmp     short loc_233BF ;~ 1359:1830
loc_233a2:
	// 6873 
cs=0x1359;eip=0x001832; 	X(MOV(*(raddr(ss,bp+var_6)), 1));	// 37300 mov     [bp+var_6], 1 ;~ 1359:1832
cs=0x1359;eip=0x001836; 	T(MOV(ax, word_44610));	// 37301 mov     ax, word_44610 ;~ 1359:1836
cs=0x1359;eip=0x001839; 	T(MOV(cl, 8));	// 37302 mov     cl, 8 ;~ 1359:1839
cs=0x1359;eip=0x00183b; 	T(SHR(ax, cl));	// 37303 shr     ax, cl ;~ 1359:183B
cs=0x1359;eip=0x00183d; 	T(MOV(si, ax));	// 37304 mov     si, ax ;~ 1359:183D
cs=0x1359;eip=0x00183f; 	J(JMP(loc_232bc));	// 37305 jmp     loc_232BC ;~ 1359:183F
loc_233b2:
	// 6874 
cs=0x1359;eip=0x001842; 	T(CMP(si, 0x64));	// 37309 cmp     si, 64h ; 'd' ;~ 1359:1842
cs=0x1359;eip=0x001845; 	J(JL(loc_233bf));	// 37310 jl      short loc_233BF ;~ 1359:1845
cs=0x1359;eip=0x001847; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 1));	// 37311 mov     [bp+var_8], 1 ;~ 1359:1847
cs=0x1359;eip=0x00184c; 	T(SUB(si, 0x64));	// 37312 sub     si, 64h ; 'd' ;~ 1359:184C
loc_233bf:
	// 6875 
cs=0x1359;eip=0x00184f; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 37316 cmp     [bp+var_8], 0 ;~ 1359:184F
cs=0x1359;eip=0x001853; 	J(JZ(loc_233ea));	// 37317 jz      short loc_233EA ;~ 1359:1853
cs=0x1359;eip=0x001855; 	T(MOV(al, byte_45f89));	// 37318 mov     al, byte_45F89 ;~ 1359:1855
cs=0x1359;eip=0x001858; 	T(SUB(ah, ah));	// 37319 sub     ah, ah ;~ 1359:1858
cs=0x1359;eip=0x00185a; 	X(PUSH(ax));	// 37320 push    ax ;~ 1359:185A
cs=0x1359;eip=0x00185b; 	T(MOV(al, byte_45f88));	// 37321 mov     al, byte_45F88 ;~ 1359:185B
cs=0x1359;eip=0x00185e; 	X(PUSH(ax));	// 37322 push    ax ;~ 1359:185E
cs=0x1359;eip=0x00185f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 37323 mov     bx, [bp+var_8] ;~ 1359:185F
cs=0x1359;eip=0x001862; 	T(SHL(bx, 1));	// 37324 shl     bx, 1 ;~ 1359:1862
cs=0x1359;eip=0x001864; 	T(SHL(bx, 1));	// 37325 shl     bx, 1 ;~ 1359:1864
cs=0x1359;eip=0x001866; 	X(PUSH(*(dw*)((((db*)digshapes)+2)+bx)));	// 37326 push    word ptr (digshapes+2)[bx] ;~ 1359:1866
cs=0x1359;eip=0x00186a; 	X(PUSH(*(dw*)(((db*)digshapes)+bx)));	// 37327 push    word ptr digshapes[bx] ;~ 1359:186A
cs=0x1359;eip=0x00186e; 	J(CALLF(sprite_putimage_or,0));	// 37328 call    sprite_putimage_or ;~ 1359:186E
cs=0x1359;eip=0x001873; 	T(ADD(sp, 8));	// 37329 add     sp, 8 ;~ 1359:1873
cs=0x1359;eip=0x001876; 	X(MOV(*(raddr(ss,bp+var_1c)), 1));	// 37330 mov     [bp+var_1C], 1 ;~ 1359:1876
loc_233ea:
	// 6876 
cs=0x1359;eip=0x00187a; 	T(MOV(ax, si));	// 37333 mov     ax, si ;~ 1359:187A
cs=0x1359;eip=0x00187c; 	T(CWD);	// 37334 cwd ;~ 1359:187C
cs=0x1359;eip=0x00187d; 	T(MOV(cx, 0x0A));	// 37335 mov     cx, 0Ah ;~ 1359:187D
cs=0x1359;eip=0x001880; 	T(IDIV2(cx));	// 37336 idiv    cx ;~ 1359:1880
cs=0x1359;eip=0x001882; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 37337 mov     [bp+var_8], ax ;~ 1359:1882
cs=0x1359;eip=0x001885; 	T(OR(ax, ax));	// 37338 or      ax, ax ;~ 1359:1885
cs=0x1359;eip=0x001887; 	J(JNZ(loc_233ff));	// 37339 jnz     short loc_233FF ;~ 1359:1887
cs=0x1359;eip=0x001889; 	T(CMP(*(raddr(ss,bp+var_1c)), 0));	// 37340 cmp     [bp+var_1C], 0 ;~ 1359:1889
cs=0x1359;eip=0x00188d; 	J(JZ(loc_23433));	// 37341 jz      short loc_23433 ;~ 1359:188D
loc_233ff:
	// 6877 
cs=0x1359;eip=0x00188f; 	T(MOV(al, byte_45f8b));	// 37344 mov     al, byte_45F8B ;~ 1359:188F
cs=0x1359;eip=0x001892; 	T(SUB(ah, ah));	// 37345 sub     ah, ah ;~ 1359:1892
cs=0x1359;eip=0x001894; 	X(PUSH(ax));	// 37346 push    ax ;~ 1359:1894
cs=0x1359;eip=0x001895; 	T(MOV(al, byte_45f8a));	// 37347 mov     al, byte_45F8A ;~ 1359:1895
cs=0x1359;eip=0x001898; 	X(PUSH(ax));	// 37348 push    ax ;~ 1359:1898
cs=0x1359;eip=0x001899; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 37349 mov     bx, [bp+var_8] ;~ 1359:1899
cs=0x1359;eip=0x00189c; 	T(SHL(bx, 1));	// 37350 shl     bx, 1 ;~ 1359:189C
cs=0x1359;eip=0x00189e; 	T(SHL(bx, 1));	// 37351 shl     bx, 1 ;~ 1359:189E
cs=0x1359;eip=0x0018a0; 	X(PUSH(*(dw*)((((db*)digshapes)+2)+bx)));	// 37352 push    word ptr (digshapes+2)[bx] ;~ 1359:18A0
cs=0x1359;eip=0x0018a4; 	X(PUSH(*(dw*)(((db*)digshapes)+bx)));	// 37353 push    word ptr digshapes[bx] ;~ 1359:18A4
cs=0x1359;eip=0x0018a8; 	J(CALLF(sprite_putimage_or,0));	// 37354 call    sprite_putimage_or ;~ 1359:18A8
cs=0x1359;eip=0x0018ad; 	T(ADD(sp, 8));	// 37355 add     sp, 8 ;~ 1359:18AD
cs=0x1359;eip=0x0018b0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 37356 mov     ax, [bp+var_8] ;~ 1359:18B0
cs=0x1359;eip=0x0018b3; 	T(MOV(cx, ax));	// 37357 mov     cx, ax ;~ 1359:18B3
cs=0x1359;eip=0x0018b5; 	T(SHL(ax, 1));	// 37358 shl     ax, 1 ;~ 1359:18B5
cs=0x1359;eip=0x0018b7; 	T(SHL(ax, 1));	// 37359 shl     ax, 1 ;~ 1359:18B7
cs=0x1359;eip=0x0018b9; 	T(ADD(ax, cx));	// 37360 add     ax, cx ;~ 1359:18B9
cs=0x1359;eip=0x0018bb; 	T(SHL(ax, 1));	// 37361 shl     ax, 1 ;~ 1359:18BB
cs=0x1359;eip=0x0018bd; 	T(SUB(si, ax));	// 37362 sub     si, ax ;~ 1359:18BD
cs=0x1359;eip=0x0018bf; 	X(MOV(*(raddr(ss,bp+var_1c)), 1));	// 37363 mov     [bp+var_1C], 1 ;~ 1359:18BF
loc_23433:
	// 6878 
cs=0x1359;eip=0x0018c3; 	T(MOV(al, byte_45f8d));	// 37366 mov     al, byte_45F8D ;~ 1359:18C3
cs=0x1359;eip=0x0018c6; 	T(SUB(ah, ah));	// 37367 sub     ah, ah ;~ 1359:18C6
cs=0x1359;eip=0x0018c8; 	X(PUSH(ax));	// 37368 push    ax ;~ 1359:18C8
cs=0x1359;eip=0x0018c9; 	T(MOV(al, byte_45f8c));	// 37369 mov     al, byte_45F8C ;~ 1359:18C9
cs=0x1359;eip=0x0018cc; 	X(PUSH(ax));	// 37370 push    ax ;~ 1359:18CC
cs=0x1359;eip=0x0018cd; 	T(MOV(bx, si));	// 37371 mov     bx, si ;~ 1359:18CD
cs=0x1359;eip=0x0018cf; 	T(SHL(bx, 1));	// 37372 shl     bx, 1 ;~ 1359:18CF
cs=0x1359;eip=0x0018d1; 	T(SHL(bx, 1));	// 37373 shl     bx, 1 ;~ 1359:18D1
cs=0x1359;eip=0x0018d3; 	X(PUSH(*(dw*)((((db*)digshapes)+2)+bx)));	// 37374 push    word ptr (digshapes+2)[bx] ;~ 1359:18D3
cs=0x1359;eip=0x0018d7; 	X(PUSH(*(dw*)(((db*)digshapes)+bx)));	// 37375 push    word ptr digshapes[bx] ;~ 1359:18D7
cs=0x1359;eip=0x0018db; 	J(CALLF(sprite_putimage_or,0));	// 37376 call    sprite_putimage_or ;~ 1359:18DB
cs=0x1359;eip=0x0018e0; 	T(ADD(sp, 8));	// 37377 add     sp, 8 ;~ 1359:18E0
cs=0x1359;eip=0x0018e3; 	J(JMP(loc_23485));	// 37378 jmp     short loc_23485 ;~ 1359:18E3
loc_23456:
	// 6879 
cs=0x1359;eip=0x0018e6; 	T(CMP(*(raddr(ss,bp+var_6)), 0));	// 37383 cmp     [bp+var_6], 0 ;~ 1359:18E6
cs=0x1359;eip=0x0018ea; 	J(JNZ(loc_23485));	// 37384 jnz     short loc_23485 ;~ 1359:18EA
cs=0x1359;eip=0x0018ec; 	T(MOV(ax, si));	// 37385 mov     ax, si ;~ 1359:18EC
cs=0x1359;eip=0x0018ee; 	T(SHL(ax, 1));	// 37386 shl     ax, 1 ;~ 1359:18EE
cs=0x1359;eip=0x0018f0; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 37387 mov     [bp+var_20], ax ;~ 1359:18F0
cs=0x1359;eip=0x0018f3; 	X(PUSH(meter_needle_color));	// 37388 push    meter_needle_color ;~ 1359:18F3
cs=0x1359;eip=0x0018f7; 	T(MOV(bx, ax));	// 37389 mov     bx, ax ;~ 1359:18F7
cs=0x1359;eip=0x0018f9; 	T(MOV(al, *((&byte_45f89)+bx)));	// 37390 mov     al, byte_45F89[bx] ;~ 1359:18F9
cs=0x1359;eip=0x0018fd; 	T(SUB(ah, ah));	// 37391 sub     ah, ah ;~ 1359:18FD
cs=0x1359;eip=0x0018ff; 	X(PUSH(ax));	// 37392 push    ax ;~ 1359:18FF
cs=0x1359;eip=0x001900; 	T(MOV(al, *((&byte_45f88)+bx)));	// 37393 mov     al, byte_45F88[bx] ;~ 1359:1900
cs=0x1359;eip=0x001904; 	X(PUSH(ax));	// 37394 push    ax ;~ 1359:1904
cs=0x1359;eip=0x001905; 	X(PUSH(word_45f84));	// 37395 push    word_45F84 ;~ 1359:1905
cs=0x1359;eip=0x001909; 	X(PUSH(word_45f82));	// 37396 push    word_45F82 ;~ 1359:1909
cs=0x1359;eip=0x00190d; 	J(CALLF(prerender_line,0));	// 37397 call    preRender_line ;~ 1359:190D
cs=0x1359;eip=0x001912; 	T(ADD(sp, 0x0A));	// 37398 add     sp, 0Ah ;~ 1359:1912
loc_23485:
	// 6880 
cs=0x1359;eip=0x001915; 	T(MOV(ax, di));	// 37402 mov     ax, di ;~ 1359:1915
cs=0x1359;eip=0x001917; 	T(SHL(ax, 1));	// 37403 shl     ax, 1 ;~ 1359:1917
cs=0x1359;eip=0x001919; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 37404 mov     [bp+var_20], ax ;~ 1359:1919
cs=0x1359;eip=0x00191c; 	X(PUSH(meter_needle_color));	// 37405 push    meter_needle_color ;~ 1359:191C
cs=0x1359;eip=0x001920; 	T(MOV(bx, ax));	// 37406 mov     bx, ax ;~ 1359:1920
cs=0x1359;eip=0x001922; 	T(MOV(al, *((&byte_4605f)+bx)));	// 37407 mov     al, byte_4605F[bx] ;~ 1359:1922
cs=0x1359;eip=0x001926; 	T(SUB(ah, ah));	// 37408 sub     ah, ah ;~ 1359:1926
cs=0x1359;eip=0x001928; 	X(PUSH(ax));	// 37409 push    ax ;~ 1359:1928
cs=0x1359;eip=0x001929; 	T(MOV(al, *((&byte_4605e)+bx)));	// 37410 mov     al, byte_4605E[bx] ;~ 1359:1929
cs=0x1359;eip=0x00192d; 	X(PUSH(ax));	// 37411 push    ax ;~ 1359:192D
cs=0x1359;eip=0x00192e; 	X(PUSH(word_4605a));	// 37412 push    word_4605A ;~ 1359:192E
cs=0x1359;eip=0x001932; 	X(PUSH(word_46058));	// 37413 push    word_46058 ;~ 1359:1932
cs=0x1359;eip=0x001936; 	J(CALLF(prerender_line,0));	// 37414 call    preRender_line ;~ 1359:1936
cs=0x1359;eip=0x00193b; 	T(ADD(sp, 0x0A));	// 37415 add     sp, 0Ah ;~ 1359:193B
cs=0x1359;eip=0x00193e; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 37416 mov     al, [bp+var_2] ;~ 1359:193E
cs=0x1359;eip=0x001941; 	T(CBW);	// 37417 cbw ;~ 1359:1941
cs=0x1359;eip=0x001942; 	T(OR(ax, ax));	// 37418 or      ax, ax ;~ 1359:1942
cs=0x1359;eip=0x001944; 	J(JZ(loc_234be));	// 37419 jz      short loc_234BE ;~ 1359:1944
cs=0x1359;eip=0x001946; 	T(CMP(ax, 2));	// 37420 cmp     ax, 2           ; st. whl. position flag ;~ 1359:1946
cs=0x1359;eip=0x001949; 	J(JZ(loc_234ec));	// 37421 jz      short loc_234EC ;~ 1359:1949
cs=0x1359;eip=0x00194b; 	J(JMP(loc_234de));	// 37422 jmp     short loc_234DE ;~ 1359:194B
loc_234be:
	// 6881 
cs=0x1359;eip=0x00194e; 	X(PUSH(word_40dce));	// 37427 push    word_40DCE ;~ 1359:194E
cs=0x1359;eip=0x001952; 	X(PUSH(word_40dcc));	// 37428 push    word_40DCC ;~ 1359:1952
cs=0x1359;eip=0x001956; 	J(CALLF(shape2d_render_bmp_as_mask,0));	// 37429 call    shape2d_render_bmp_as_mask ;~ 1359:1956
cs=0x1359;eip=0x00195b; 	T(ADD(sp, 4));	// 37430 add     sp, 4 ;~ 1359:195B
cs=0x1359;eip=0x00195e; 	X(PUSH(word_40dc6));	// 37431 push    word_40DC6 ;~ 1359:195E
cs=0x1359;eip=0x001962; 	X(PUSH(word_40dc4));	// 37432 push    word_40DC4 ;~ 1359:1962
loc_234d6:
	// 6882 
cs=0x1359;eip=0x001966; 	J(CALLF(shape2d_op_unk4,0));	// 37435 call    shape2d_op_unk4 ;~ 1359:1966
cs=0x1359;eip=0x00196b; 	T(ADD(sp, 4));	// 37436 add     sp, 4 ;~ 1359:196B
loc_234de:
	// 6883 
cs=0x1359;eip=0x00196e; 	T(CMP(video_flag5_is0, 0));	// 37439 cmp     video_flag5_is0, 0 ;~ 1359:196E
cs=0x1359;eip=0x001973; 	J(JZ(loc_23506));	// 37440 jz      short loc_23506 ;~ 1359:1973
cs=0x1359;eip=0x001975; 	J(CALLF(setup_mcgawnd2,0));	// 37441 call    setup_mcgawnd2 ;~ 1359:1975
cs=0x1359;eip=0x00197a; 	J(JMP(loc_2350b));	// 37442 jmp     short loc_2350B ;~ 1359:197A
loc_234ec:
	// 6884 
cs=0x1359;eip=0x00197c; 	X(PUSH(word_40dd2));	// 37446 push    word_40DD2 ;~ 1359:197C
cs=0x1359;eip=0x001980; 	X(PUSH(word_40dd0));	// 37447 push    word_40DD0 ;~ 1359:1980
cs=0x1359;eip=0x001984; 	J(CALLF(shape2d_render_bmp_as_mask,0));	// 37448 call    shape2d_render_bmp_as_mask ;~ 1359:1984
cs=0x1359;eip=0x001989; 	T(ADD(sp, 4));	// 37449 add     sp, 4 ;~ 1359:1989
cs=0x1359;eip=0x00198c; 	X(PUSH(word_40dca));	// 37450 push    word_40DCA ;~ 1359:198C
cs=0x1359;eip=0x001990; 	X(PUSH(word_40dc8));	// 37451 push    word_40DC8 ;~ 1359:1990
cs=0x1359;eip=0x001994; 	J(JMP(loc_234d6));	// 37452 jmp     short loc_234D6 ;~ 1359:1994
loc_23506:
	// 6885 
cs=0x1359;eip=0x001996; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 37456 call    sprite_copy_2_to_1_2 ;~ 1359:1996
loc_2350b:
	// 6886 
cs=0x1359;eip=0x00199b; 	X(PUSH(height_above_replaybar));	// 37459 push    height_above_replaybar ;~ 1359:199B
cs=0x1359;eip=0x00199f; 	T(SUB(ax, ax));	// 37460 sub     ax, ax ;~ 1359:199F
cs=0x1359;eip=0x0019a1; 	X(PUSH(ax));	// 37461 push    ax ;~ 1359:19A1
cs=0x1359;eip=0x0019a2; 	T(MOV(ax, 0x140));	// 37462 mov     ax, 140h ;~ 1359:19A2
cs=0x1359;eip=0x0019a5; 	X(PUSH(ax));	// 37463 push    ax ;~ 1359:19A5
cs=0x1359;eip=0x0019a6; 	T(SUB(ax, ax));	// 37464 sub     ax, ax ;~ 1359:19A6
cs=0x1359;eip=0x0019a8; 	X(PUSH(ax));	// 37465 push    ax ;~ 1359:19A8
cs=0x1359;eip=0x0019a9; 	J(CALLF(sprite_set_1_size,0));	// 37466 call    sprite_set_1_size ;~ 1359:19A9
cs=0x1359;eip=0x0019ae; 	T(ADD(sp, 8));	// 37467 add     sp, 8 ;~ 1359:19AE
cs=0x1359;eip=0x0019b1; 	T(LES(bx, dword_40dbc));	// 37468 les     bx, dword_40DBC ;~ 1359:19B1
cs=0x1359;eip=0x0019b5; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 37469 push    word ptr es:[bx+0Ah] ;~ 1359:19B5
cs=0x1359;eip=0x0019b9; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 37470 push    word ptr es:[bx+8] ;~ 1359:19B9
cs=0x1359;eip=0x0019bd; 	T(LES(bx, whlsprite1));	// 37471 les     bx, whlsprite1 ;~ 1359:19BD
cs=0x1359;eip=0x0019c1; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 37472 push    word ptr es:[bx+2] ;~ 1359:19C1
cs=0x1359;eip=0x0019c5; 	X(PUSH(*(dw*)(raddr(es,bx+0))));	// 37473 push    word ptr es:[bx+0] ;~ 1359:19C5
cs=0x1359;eip=0x0019c8; 	J(CALLF(sprite_putimage_and_alt,0));	// 37474 call    sprite_putimage_and_alt ;~ 1359:19C8
cs=0x1359;eip=0x0019cd; 	T(ADD(sp, 8));	// 37475 add     sp, 8 ;~ 1359:19CD
loc_23540:
	// 6887 
cs=0x1359;eip=0x0019d0; 	T(MOV(al, byte_4432a));	// 37478 mov     al, byte_4432A ;~ 1359:19D0
cs=0x1359;eip=0x0019d3; 	T(CBW);	// 37479 cbw ;~ 1359:19D3
cs=0x1359;eip=0x0019d4; 	T(MOV(bx, ax));	// 37480 mov     bx, ax ;~ 1359:19D4
cs=0x1359;eip=0x0019d6; 	T(SHL(bx, 1));	// 37481 shl     bx, 1 ;~ 1359:19D6
cs=0x1359;eip=0x0019d8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 37482 mov     ax, [bp+var_4] ;~ 1359:19D8
cs=0x1359;eip=0x0019db; 	T(CMP(*(dw*)(((db*)&word_40e00)+bx), ax));	// 37483 cmp     word_40E00[bx], ax ;~ 1359:19DB
cs=0x1359;eip=0x0019df; 	J(JNZ(loc_23561));	// 37484 jnz     short loc_23561 ;~ 1359:19DF
cs=0x1359;eip=0x0019e1; 	T(CMP(byte_454a4, 0));	// 37485 cmp     byte_454A4, 0 ;~ 1359:19E1
cs=0x1359;eip=0x0019e6; 	J(JNZ(loc_23561));	// 37486 jnz     short loc_23561 ;~ 1359:19E6
cs=0x1359;eip=0x0019e8; 	T(CMP(*(raddr(ss,bp+var_1a)), 0));	// 37487 cmp     [bp+var_1A], 0 ;~ 1359:19E8
cs=0x1359;eip=0x0019ec; 	J(JNZ(loc_23561));	// 37488 jnz     short loc_23561 ;~ 1359:19EC
cs=0x1359;eip=0x0019ee; 	J(JMP(loc_236a0));	// 37489 jmp     loc_236A0 ;~ 1359:19EE
loc_23561:
	// 6888 
cs=0x1359;eip=0x0019f1; 	T(CMP(video_flag5_is0, 0));	// 37494 cmp     video_flag5_is0, 0 ;~ 1359:19F1
cs=0x1359;eip=0x0019f6; 	J(JNZ(loc_2356d));	// 37495 jnz     short loc_2356D ;~ 1359:19F6
cs=0x1359;eip=0x0019f8; 	J(CALLF(mouse_draw_opaque_check,0));	// 37496 call    mouse_draw_opaque_check ;~ 1359:19F8
loc_2356d:
	// 6889 
cs=0x1359;eip=0x0019fd; 	X(PUSH(height_above_replaybar));	// 37499 push    height_above_replaybar ;~ 1359:19FD
cs=0x1359;eip=0x001a01; 	T(SUB(ax, ax));	// 37500 sub     ax, ax ;~ 1359:1A01
cs=0x1359;eip=0x001a03; 	X(PUSH(ax));	// 37501 push    ax ;~ 1359:1A03
cs=0x1359;eip=0x001a04; 	T(MOV(ax, 0x140));	// 37502 mov     ax, 140h ;~ 1359:1A04
cs=0x1359;eip=0x001a07; 	X(PUSH(ax));	// 37503 push    ax ;~ 1359:1A07
cs=0x1359;eip=0x001a08; 	T(SUB(ax, ax));	// 37504 sub     ax, ax ;~ 1359:1A08
cs=0x1359;eip=0x001a0a; 	X(PUSH(ax));	// 37505 push    ax ;~ 1359:1A0A
cs=0x1359;eip=0x001a0b; 	J(CALLF(sprite_set_1_size,0));	// 37506 call    sprite_set_1_size ;~ 1359:1A0B
cs=0x1359;eip=0x001a10; 	T(ADD(sp, 8));	// 37507 add     sp, 8 ;~ 1359:1A10
cs=0x1359;eip=0x001a13; 	T(MOV(al, byte_4432a));	// 37508 mov     al, byte_4432A ;~ 1359:1A13
cs=0x1359;eip=0x001a16; 	T(CBW);	// 37509 cbw ;~ 1359:1A16
cs=0x1359;eip=0x001a17; 	T(SHL(ax, 1));	// 37510 shl     ax, 1 ;~ 1359:1A17
cs=0x1359;eip=0x001a19; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 37511 mov     [bp+var_20], ax ;~ 1359:1A19
cs=0x1359;eip=0x001a1c; 	T(MOV(bx, ax));	// 37512 mov     bx, ax ;~ 1359:1A1C
cs=0x1359;eip=0x001a1e; 	T(CMP(*(dw*)(((db*)&word_40df6)+bx), 0));	// 37513 cmp     word_40DF6[bx], 0 ;~ 1359:1A1E
cs=0x1359;eip=0x001a23; 	J(JZ(loc_235c5));	// 37514 jz      short loc_235C5 ;~ 1359:1A23
cs=0x1359;eip=0x001a25; 	X(PUSH(*(dw*)(((db*)&word_40df6)+bx)));	// 37515 push    word_40DF6[bx] ;~ 1359:1A25
cs=0x1359;eip=0x001a29; 	X(PUSH(*(dw*)(((db*)&word_40df2)+bx)));	// 37516 push    word_40DF2[bx] ;~ 1359:1A29
cs=0x1359;eip=0x001a2d; 	T(MOV(al, byte_44346));	// 37517 mov     al, byte_44346 ;~ 1359:1A2D
cs=0x1359;eip=0x001a30; 	T(CBW);	// 37518 cbw ;~ 1359:1A30
cs=0x1359;eip=0x001a31; 	T(MOV(bx, ax));	// 37519 mov     bx, ax ;~ 1359:1A31
cs=0x1359;eip=0x001a33; 	T(SHL(bx, 1));	// 37520 shl     bx, 1 ;~ 1359:1A33
cs=0x1359;eip=0x001a35; 	T(SHL(bx, 1));	// 37521 shl     bx, 1 ;~ 1359:1A35
cs=0x1359;eip=0x001a37; 	X(PUSH(*(dw*)(((db*)&word_40de6)+bx)));	// 37522 push    word_40DE6[bx] ;~ 1359:1A37
cs=0x1359;eip=0x001a3b; 	X(PUSH(*(dw*)(((db*)&word_40de4)+bx)));	// 37523 push    word_40DE4[bx] ;~ 1359:1A3B
cs=0x1359;eip=0x001a3f; 	J(CALLF(sprite_putimage_and_alt,0));	// 37524 call    sprite_putimage_and_alt ;~ 1359:1A3F
cs=0x1359;eip=0x001a44; 	T(ADD(sp, 8));	// 37525 add     sp, 8 ;~ 1359:1A44
cs=0x1359;eip=0x001a47; 	T(MOV(al, byte_4432a));	// 37526 mov     al, byte_4432A ;~ 1359:1A47
cs=0x1359;eip=0x001a4a; 	T(CBW);	// 37527 cbw ;~ 1359:1A4A
cs=0x1359;eip=0x001a4b; 	T(MOV(bx, ax));	// 37528 mov     bx, ax ;~ 1359:1A4B
cs=0x1359;eip=0x001a4d; 	T(SHL(bx, 1));	// 37529 shl     bx, 1 ;~ 1359:1A4D
cs=0x1359;eip=0x001a4f; 	X(MOV(*(dw*)(((db*)&word_40df6)+bx), 0));	// 37530 mov     word_40DF6[bx], 0 ;~ 1359:1A4F
loc_235c5:
	// 6890 
cs=0x1359;eip=0x001a55; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 37533 cmp     [bp+var_4], 0 ;~ 1359:1A55
cs=0x1359;eip=0x001a59; 	J(JGE(loc_235d2));	// 37534 jge     short loc_235D2 ;~ 1359:1A59
cs=0x1359;eip=0x001a5b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 37535 mov     ax, [bp+var_4] ;~ 1359:1A5B
cs=0x1359;eip=0x001a5e; 	T(NEG(ax));	// 37536 neg     ax ;~ 1359:1A5E
cs=0x1359;eip=0x001a60; 	J(JMP(loc_235d5));	// 37537 jmp     short loc_235D5 ;~ 1359:1A60
loc_235d2:
	// 6891 
cs=0x1359;eip=0x001a62; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 37541 mov     ax, [bp+var_4] ;~ 1359:1A62
loc_235d5:
	// 6892 
cs=0x1359;eip=0x001a65; 	T(SHL(ax, 1));	// 37544 shl     ax, 1 ;~ 1359:1A65
cs=0x1359;eip=0x001a67; 	T(ADD(ax, offset(dseg,byte_45f44)));	// 37545 add     ax, offset byte_45F44 ;~ 1359:1A67
cs=0x1359;eip=0x001a6a; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 37546 mov     [bp+var_E], ax ;~ 1359:1A6A
cs=0x1359;eip=0x001a6d; 	T(MOV(bx, ax));	// 37547 mov     bx, ax ;~ 1359:1A6D
cs=0x1359;eip=0x001a6f; 	T(MOV(al, *(raddr(ds,bx+1))));	// 37548 mov     al, [bx+1] ;~ 1359:1A6F
cs=0x1359;eip=0x001a72; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 37549 mov     [bp+var_16], al ;~ 1359:1A72
cs=0x1359;eip=0x001a75; 	T(MOV(al, *(raddr(ds,bx))));	// 37550 mov     al, [bx] ;~ 1359:1A75
cs=0x1359;eip=0x001a77; 	X(MOV(*(raddr(ss,bp+var_14)), al));	// 37551 mov     [bp+var_14], al ;~ 1359:1A77
cs=0x1359;eip=0x001a7a; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 37552 cmp     [bp+var_4], 0 ;~ 1359:1A7A
cs=0x1359;eip=0x001a7e; 	J(JGE(loc_235f9));	// 37553 jge     short loc_235F9 ;~ 1359:1A7E
cs=0x1359;eip=0x001a80; 	T(SUB(al, byte_45f44));	// 37554 sub     al, byte_45F44 ;~ 1359:1A80
cs=0x1359;eip=0x001a84; 	T(SHL(al, 1));	// 37555 shl     al, 1 ;~ 1359:1A84
cs=0x1359;eip=0x001a86; 	X(SUB(*(raddr(ss,bp+var_14)), al));	// 37556 sub     [bp+var_14], al ;~ 1359:1A86
loc_235f9:
	// 6893 
cs=0x1359;eip=0x001a89; 	T(MOV(al, byte_4432a));	// 37559 mov     al, byte_4432A ;~ 1359:1A89
cs=0x1359;eip=0x001a8c; 	T(CBW);	// 37560 cbw ;~ 1359:1A8C
cs=0x1359;eip=0x001a8d; 	T(SHL(ax, 1));	// 37561 shl     ax, 1 ;~ 1359:1A8D
cs=0x1359;eip=0x001a8f; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 37562 mov     [bp+var_20], ax ;~ 1359:1A8F
cs=0x1359;eip=0x001a92; 	T(MOV(al, *(raddr(ss,bp+var_14))));	// 37563 mov     al, [bp+var_14] ;~ 1359:1A92
cs=0x1359;eip=0x001a95; 	T(SUB(ah, ah));	// 37564 sub     ah, ah ;~ 1359:1A95
cs=0x1359;eip=0x001a97; 	T(LES(bx, dword_40ddc));	// 37565 les     bx, dword_40DDC ;~ 1359:1A97
cs=0x1359;eip=0x001a9b; 	T(SUB(ax, *(dw*)(raddr(es,bx+4))));	// 37566 sub     ax, es:[bx+4] ;~ 1359:1A9B
cs=0x1359;eip=0x001a9f; 	T(AND(ax, video_flag3_isffff));	// 37567 and     ax, video_flag3_isFFFF ;~ 1359:1A9F
cs=0x1359;eip=0x001aa3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_20))));	// 37568 mov     bx, [bp+var_20] ;~ 1359:1AA3
cs=0x1359;eip=0x001aa6; 	X(MOV(*(dw*)(((db*)&word_40df2)+bx), ax));	// 37569 mov     word_40DF2[bx], ax ;~ 1359:1AA6
cs=0x1359;eip=0x001aaa; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 37570 mov     al, [bp+var_16] ;~ 1359:1AAA
cs=0x1359;eip=0x001aad; 	T(SUB(ah, ah));	// 37571 sub     ah, ah ;~ 1359:1AAD
cs=0x1359;eip=0x001aaf; 	T(LES(bx, dword_40ddc));	// 37572 les     bx, dword_40DDC ;~ 1359:1AAF
cs=0x1359;eip=0x001ab3; 	T(SUB(ax, *(dw*)(raddr(es,bx+6))));	// 37573 sub     ax, es:[bx+6] ;~ 1359:1AB3
cs=0x1359;eip=0x001ab7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_20))));	// 37574 mov     bx, [bp+var_20] ;~ 1359:1AB7
cs=0x1359;eip=0x001aba; 	X(MOV(*(dw*)(((db*)&word_40df6)+bx), ax));	// 37575 mov     word_40DF6[bx], ax ;~ 1359:1ABA
cs=0x1359;eip=0x001abe; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 37576 mov     al, [bp+var_16] ;~ 1359:1ABE
cs=0x1359;eip=0x001ac1; 	T(SUB(ah, ah));	// 37577 sub     ah, ah ;~ 1359:1AC1
cs=0x1359;eip=0x001ac3; 	T(LES(bx, dword_40ddc));	// 37578 les     bx, dword_40DDC ;~ 1359:1AC3
cs=0x1359;eip=0x001ac7; 	T(SUB(ax, *(dw*)(raddr(es,bx+6))));	// 37579 sub     ax, es:[bx+6] ;~ 1359:1AC7
cs=0x1359;eip=0x001acb; 	X(PUSH(ax));	// 37580 push    ax ;~ 1359:1ACB
cs=0x1359;eip=0x001acc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_20))));	// 37581 mov     bx, [bp+var_20] ;~ 1359:1ACC
cs=0x1359;eip=0x001acf; 	X(PUSH(*(dw*)(((db*)&word_40df2)+bx)));	// 37582 push    word_40DF2[bx] ;~ 1359:1ACF
cs=0x1359;eip=0x001ad3; 	T(MOV(al, byte_44346));	// 37583 mov     al, byte_44346 ;~ 1359:1AD3
cs=0x1359;eip=0x001ad6; 	T(CBW);	// 37584 cbw ;~ 1359:1AD6
cs=0x1359;eip=0x001ad7; 	T(MOV(bx, ax));	// 37585 mov     bx, ax ;~ 1359:1AD7
cs=0x1359;eip=0x001ad9; 	T(SHL(bx, 1));	// 37586 shl     bx, 1 ;~ 1359:1AD9
cs=0x1359;eip=0x001adb; 	T(SHL(bx, 1));	// 37587 shl     bx, 1 ;~ 1359:1ADB
cs=0x1359;eip=0x001add; 	X(PUSH(*(dw*)(((db*)&word_40de6)+bx)));	// 37588 push    word_40DE6[bx] ;~ 1359:1ADD
cs=0x1359;eip=0x001ae1; 	X(PUSH(*(dw*)(((db*)&word_40de4)+bx)));	// 37589 push    word_40DE4[bx] ;~ 1359:1AE1
cs=0x1359;eip=0x001ae5; 	J(CALLF(sprite_clear_shape_alt,0));	// 37590 call    sprite_clear_shape_alt ;~ 1359:1AE5
cs=0x1359;eip=0x001aea; 	T(ADD(sp, 8));	// 37591 add     sp, 8 ;~ 1359:1AEA
cs=0x1359;eip=0x001aed; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 37592 mov     al, [bp+var_16] ;~ 1359:1AED
cs=0x1359;eip=0x001af0; 	T(SUB(ah, ah));	// 37593 sub     ah, ah ;~ 1359:1AF0
cs=0x1359;eip=0x001af2; 	X(PUSH(ax));	// 37594 push    ax ;~ 1359:1AF2
cs=0x1359;eip=0x001af3; 	T(MOV(al, *(raddr(ss,bp+var_14))));	// 37595 mov     al, [bp+var_14] ;~ 1359:1AF3
cs=0x1359;eip=0x001af6; 	X(PUSH(ax));	// 37596 push    ax ;~ 1359:1AF6
cs=0x1359;eip=0x001af7; 	X(PUSH(word_40de2));	// 37597 push    word_40DE2 ;~ 1359:1AF7
cs=0x1359;eip=0x001afb; 	X(PUSH(word_40de0));	// 37598 push    word_40DE0 ;~ 1359:1AFB
cs=0x1359;eip=0x001aff; 	J(CALLF(sprite_putimage_and_alt2,0));	// 37599 call    sprite_putimage_and_alt2 ;~ 1359:1AFF
cs=0x1359;eip=0x001b04; 	T(ADD(sp, 8));	// 37600 add     sp, 8 ;~ 1359:1B04
cs=0x1359;eip=0x001b07; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 37601 mov     al, [bp+var_16] ;~ 1359:1B07
cs=0x1359;eip=0x001b0a; 	T(SUB(ah, ah));	// 37602 sub     ah, ah ;~ 1359:1B0A
cs=0x1359;eip=0x001b0c; 	X(PUSH(ax));	// 37603 push    ax ;~ 1359:1B0C
cs=0x1359;eip=0x001b0d; 	T(MOV(al, *(raddr(ss,bp+var_14))));	// 37604 mov     al, [bp+var_14] ;~ 1359:1B0D
cs=0x1359;eip=0x001b10; 	X(PUSH(ax));	// 37605 push    ax ;~ 1359:1B10
cs=0x1359;eip=0x001b11; 	X(PUSH(*(dw*)(((db*)&dword_40ddc)+2)));	// 37606 push    word ptr dword_40DDC+2 ;~ 1359:1B11
cs=0x1359;eip=0x001b15; 	X(PUSH(*(dw*)(((db*)&dword_40ddc))));	// 37607 push    word ptr dword_40DDC ;~ 1359:1B15
cs=0x1359;eip=0x001b19; 	J(CALLF(sprite_putimage_or_alt,0));	// 37608 call    sprite_putimage_or_alt ;~ 1359:1B19
cs=0x1359;eip=0x001b1e; 	T(ADD(sp, 8));	// 37609 add     sp, 8 ;~ 1359:1B1E
cs=0x1359;eip=0x001b21; 	T(MOV(al, byte_4432a));	// 37610 mov     al, byte_4432A ;~ 1359:1B21
cs=0x1359;eip=0x001b24; 	T(CBW);	// 37611 cbw ;~ 1359:1B24
cs=0x1359;eip=0x001b25; 	T(MOV(bx, ax));	// 37612 mov     bx, ax ;~ 1359:1B25
cs=0x1359;eip=0x001b27; 	T(SHL(bx, 1));	// 37613 shl     bx, 1 ;~ 1359:1B27
cs=0x1359;eip=0x001b29; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 37614 mov     ax, [bp+var_4] ;~ 1359:1B29
cs=0x1359;eip=0x001b2c; 	X(MOV(*(dw*)(((db*)&word_40e00)+bx), ax));	// 37615 mov     word_40E00[bx], ax ;~ 1359:1B2C
loc_236a0:
	// 6894 
cs=0x1359;eip=0x001b30; 	J(CALLF(mouse_draw_transparent_check,0));	// 37618 call    mouse_draw_transparent_check ;~ 1359:1B30
cs=0x1359;eip=0x001b35; 	X(POP(si));	// 37619 pop     si ;~ 1359:1B35
cs=0x1359;eip=0x001b36; 	X(POP(di));	// 37620 pop     di ;~ 1359:1B36
cs=0x1359;eip=0x001b37; 	T(MOV(sp, bp));	// 37621 mov     sp, bp ;~ 1359:1B37
cs=0x1359;eip=0x001b39; 	X(POP(bp));	// 37622 pop     bp ;~ 1359:1B39
cs=0x1359;eip=0x001b3a; 	J(RETF(0));	// 37623 retf ;~ 1359:1B3A
loc_236ac:
	// 6895 
cs=0x1359;eip=0x001b3c; 	X(PUSH(*(dw*)(((db*)&whlsprite3)+2)));	// 37628 push    word ptr whlsprite3+2 ;~ 1359:1B3C
cs=0x1359;eip=0x001b40; 	X(PUSH(*(dw*)(((db*)&whlsprite3))));	// 37629 push    word ptr whlsprite3 ;~ 1359:1B40
cs=0x1359;eip=0x001b44; 	J(CALLF(sprite_free_wnd,0));	// 37630 call    sprite_free_wnd ;~ 1359:1B44
cs=0x1359;eip=0x001b49; 	T(ADD(sp, 4));	// 37631 add     sp, 4 ;~ 1359:1B49
cs=0x1359;eip=0x001b4c; 	X(PUSH(*(dw*)(((db*)&whlsprite2)+2)));	// 37632 push    word ptr whlsprite2+2 ;~ 1359:1B4C
cs=0x1359;eip=0x001b50; 	X(PUSH(*(dw*)(((db*)&whlsprite2))));	// 37633 push    word ptr whlsprite2 ;~ 1359:1B50
cs=0x1359;eip=0x001b54; 	J(CALLF(sprite_free_wnd,0));	// 37634 call    sprite_free_wnd ;~ 1359:1B54
cs=0x1359;eip=0x001b59; 	T(ADD(sp, 4));	// 37635 add     sp, 4 ;~ 1359:1B59
cs=0x1359;eip=0x001b5c; 	X(PUSH(*(dw*)(((db*)&whlsprite1)+2)));	// 37636 push    word ptr whlsprite1+2 ;~ 1359:1B5C
cs=0x1359;eip=0x001b60; 	X(PUSH(*(dw*)(((db*)&whlsprite1))));	// 37637 push    word ptr whlsprite1 ;~ 1359:1B60
cs=0x1359;eip=0x001b64; 	J(CALLF(sprite_free_wnd,0));	// 37638 call    sprite_free_wnd ;~ 1359:1B64
cs=0x1359;eip=0x001b69; 	T(ADD(sp, 4));	// 37639 add     sp, 4 ;~ 1359:1B69
cs=0x1359;eip=0x001b6c; 	X(PUSH(word_40d86));	// 37640 push    word_40D86 ;~ 1359:1B6C
cs=0x1359;eip=0x001b70; 	X(PUSH(stdbresptr));	// 37641 push    stdbresptr ;~ 1359:1B70
cs=0x1359;eip=0x001b74; 	J(CALLF(mmgr_free,0));	// 37642 call    mmgr_free ;~ 1359:1B74
cs=0x1359;eip=0x001b79; 	T(ADD(sp, 4));	// 37643 add     sp, 4 ;~ 1359:1B79
cs=0x1359;eip=0x001b7c; 	X(PUSH(word_40d7e));	// 37644 push    word_40D7E ;~ 1359:1B7C
cs=0x1359;eip=0x001b80; 	X(PUSH(stdaresptr));	// 37645 push    stdaresptr ;~ 1359:1B80
cs=0x1359;eip=0x001b84; 	J(CALLF(mmgr_free,0));	// 37646 call    mmgr_free ;~ 1359:1B84
cs=0x1359;eip=0x001b89; 	T(ADD(sp, 4));	// 37647 add     sp, 4 ;~ 1359:1B89
cs=0x1359;eip=0x001b8c; 	X(POP(si));	// 37648 pop     si ;~ 1359:1B8C
cs=0x1359;eip=0x001b8d; 	X(POP(di));	// 37649 pop     di ;~ 1359:1B8D
cs=0x1359;eip=0x001b8e; 	T(MOV(sp, bp));	// 37650 mov     sp, bp ;~ 1359:1B8E
cs=0x1359;eip=0x001b90; 	X(POP(bp));	// 37651 pop     bp ;~ 1359:1B90
cs=0x1359;eip=0x001b91; 	J(RETF(0));	// 37652 retf ;~ 1359:1B91

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_22d45: 	goto loc_22d45;
        case m2c::kloc_22d4d: 	goto loc_22d4d;
        case m2c::kloc_22d55: 	goto loc_22d55;
        case m2c::kloc_22d5c: 	goto loc_22d5c;
        case m2c::kloc_22e09: 	goto loc_22e09;
        case m2c::kloc_22f12: 	goto loc_22f12;
        case m2c::kloc_22f18: 	goto loc_22f18;
        case m2c::kloc_22f6a: 	goto loc_22f6a;
        case m2c::kloc_22f76: 	goto loc_22f76;
        case m2c::kloc_22fb1: 	goto loc_22fb1;
        case m2c::kloc_23030: 	goto loc_23030;
        case m2c::kloc_23057: 	goto loc_23057;
        case m2c::kloc_2309a: 	goto loc_2309a;
        case m2c::kloc_230d1: 	goto loc_230d1;
        case m2c::kloc_230de: 	goto loc_230de;
        case m2c::kloc_2315e: 	goto loc_2315e;
        case m2c::kloc_23168: 	goto loc_23168;
        case m2c::kloc_2319d: 	goto loc_2319d;
        case m2c::kloc_231c4: 	goto loc_231c4;
        case m2c::kloc_231ce: 	goto loc_231ce;
        case m2c::kloc_231e7: 	goto loc_231e7;
        case m2c::kloc_231f3: 	goto loc_231f3;
        case m2c::kloc_23239: 	goto loc_23239;
        case m2c::kloc_2324e: 	goto loc_2324e;
        case m2c::kloc_23256: 	goto loc_23256;
        case m2c::kloc_2325e: 	goto loc_2325e;
        case m2c::kloc_23272: 	goto loc_23272;
        case m2c::kloc_2327c: 	goto loc_2327c;
        case m2c::kloc_23286: 	goto loc_23286;
        case m2c::kloc_2328a: 	goto loc_2328a;
        case m2c::kloc_23299: 	goto loc_23299;
        case m2c::kloc_232b6: 	goto loc_232b6;
        case m2c::kloc_232bc: 	goto loc_232bc;
        case m2c::kloc_232d0: 	goto loc_232d0;
        case m2c::kloc_232f7: 	goto loc_232f7;
        case m2c::kloc_23303: 	goto loc_23303;
        case m2c::kloc_23349: 	goto loc_23349;
        case m2c::kloc_2338c: 	goto loc_2338c;
        case m2c::kloc_233a2: 	goto loc_233a2;
        case m2c::kloc_233b2: 	goto loc_233b2;
        case m2c::kloc_233bf: 	goto loc_233bf;
        case m2c::kloc_233ea: 	goto loc_233ea;
        case m2c::kloc_233ff: 	goto loc_233ff;
        case m2c::kloc_23433: 	goto loc_23433;
        case m2c::kloc_23456: 	goto loc_23456;
        case m2c::kloc_23485: 	goto loc_23485;
        case m2c::kloc_234be: 	goto loc_234be;
        case m2c::kloc_234d6: 	goto loc_234d6;
        case m2c::kloc_234de: 	goto loc_234de;
        case m2c::kloc_234ec: 	goto loc_234ec;
        case m2c::kloc_23506: 	goto loc_23506;
        case m2c::kloc_2350b: 	goto loc_2350b;
        case m2c::kloc_23540: 	goto loc_23540;
        case m2c::kloc_23561: 	goto loc_23561;
        case m2c::kloc_2356d: 	goto loc_2356d;
        case m2c::kloc_235c5: 	goto loc_235c5;
        case m2c::kloc_235d2: 	goto loc_235d2;
        case m2c::kloc_235d5: 	goto loc_235d5;
        case m2c::kloc_235f9: 	goto loc_235f9;
        case m2c::kloc_236a0: 	goto loc_236a0;
        case m2c::kloc_236ac: 	goto loc_236ac;
        case m2c::ksetup_car_shapes: 	goto setup_car_shapes;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool setup_player_cars(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    setup_player_cars:
    _begin:
#undef var_8
#define var_8 -8
	// 37663 var_8           = word ptr -8 ;~ 1359:1B92
#undef var_6
#define var_6 -6
	// 37664 var_6           = word ptr -6 ;~ 1359:1B92
#undef var_4
#define var_4 -4
	// 37665 var_4           = word ptr -4 ;~ 1359:1B92
#undef var_2
#define var_2 -2
	// 37666 var_2           = word ptr -2 ;~ 1359:1B92
cs=0x1359;eip=0x001b92; 	X(PUSH(bp));	// 37668 push    bp ;~ 1359:1B92
cs=0x1359;eip=0x001b93; 	T(MOV(bp, sp));	// 37669 mov     bp, sp ;~ 1359:1B93
cs=0x1359;eip=0x001b95; 	T(SUB(sp, 8));	// 37670 sub     sp, 8 ;~ 1359:1B95
cs=0x1359;eip=0x001b98; 	T(SUB(ax, ax));	// 37671 sub     ax, ax ;~ 1359:1B98
cs=0x1359;eip=0x001b9a; 	X(MOV(*(dw*)(((db*)&wndsprite)+2), ax));	// 37672 mov     word ptr wndsprite+2, ax ;~ 1359:1B9A
cs=0x1359;eip=0x001b9d; 	X(MOV(*(dw*)(((db*)&wndsprite)), ax));	// 37673 mov     word ptr wndsprite, ax ;~ 1359:1B9D
cs=0x1359;eip=0x001ba0; 	T(MOV(ax, 2));	// 37674 mov     ax, 2 ;~ 1359:1BA0
cs=0x1359;eip=0x001ba3; 	X(PUSH(ax));	// 37675 push    ax ;~ 1359:1BA3
cs=0x1359;eip=0x001ba4; 	J(CALLF(ensure_file_exists,0));	// 37676 call    ensure_file_exists ;~ 1359:1BA4
cs=0x1359;eip=0x001ba9; 	T(ADD(sp, 2));	// 37677 add     sp, 2 ;~ 1359:1BA9
cs=0x1359;eip=0x001bac; 	T(MOV(ax, offset(dseg,byte_449ab)));	// 37678 mov     ax, offset byte_449AB ;~ 1359:1BAC
cs=0x1359;eip=0x001baf; 	X(PUSH(ax));	// 37679 push    ax ;~ 1359:1BAF
cs=0x1359;eip=0x001bb0; 	T(MOV(ax, offset(dseg,gameconfig)));	// 37680 mov     ax, offset gameconfig ;~ 1359:1BB0
cs=0x1359;eip=0x001bb3; 	X(PUSH(ax));	// 37681 push    ax ;~ 1359:1BB3
cs=0x1359;eip=0x001bb4; 	J(CALLF(shape3d_load_car_shapes,0));	// 37682 call    shape3d_load_car_shapes ;~ 1359:1BB4
cs=0x1359;eip=0x001bb9; 	T(ADD(sp, 4));	// 37683 add     sp, 4 ;~ 1359:1BB9
cs=0x1359;eip=0x001bbc; 	T(MOV(al, gameconfig));	// 37684 mov     al, gameconfig ;~ 1359:1BBC
cs=0x1359;eip=0x001bbf; 	X(MOV(byte_3b90d, al));	// 37685 mov     byte_3B90D, al ;~ 1359:1BBF
cs=0x1359;eip=0x001bc2; 	T(MOV(al, byte_449a5));	// 37686 mov     al, byte_449A5 ;~ 1359:1BC2
cs=0x1359;eip=0x001bc5; 	X(MOV(byte_3b90e, al));	// 37687 mov     byte_3B90E, al ;~ 1359:1BC5
cs=0x1359;eip=0x001bc8; 	T(MOV(al, byte_449a6));	// 37688 mov     al, byte_449A6 ;~ 1359:1BC8
cs=0x1359;eip=0x001bcb; 	X(MOV(byte_3b90f, al));	// 37689 mov     byte_3B90F, al ;~ 1359:1BCB
cs=0x1359;eip=0x001bce; 	T(MOV(al, byte_449a7));	// 37690 mov     al, byte_449A7 ;~ 1359:1BCE
cs=0x1359;eip=0x001bd1; 	X(MOV(byte_3b910, al));	// 37691 mov     byte_3B910, al ;~ 1359:1BD1
cs=0x1359;eip=0x001bd4; 	T(MOV(ax, offset(dseg,acarcoun)));	// 37692 mov     ax, offset aCarcoun ;~ 1359:1BD4
cs=0x1359;eip=0x001bd7; 	X(PUSH(ax));	// 37693 push    ax ;~ 1359:1BD7
cs=0x1359;eip=0x001bd8; 	J(CALLF(file_load_resfile,0));	// 37694 call    file_load_resfile ;~ 1359:1BD8
cs=0x1359;eip=0x001bdd; 	T(ADD(sp, 2));	// 37695 add     sp, 2 ;~ 1359:1BDD
cs=0x1359;eip=0x001be0; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 37696 mov     [bp+var_4], ax ;~ 1359:1BE0
cs=0x1359;eip=0x001be3; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 37697 mov     [bp+var_2], dx ;~ 1359:1BE3
cs=0x1359;eip=0x001be6; 	T(SUB(ax, ax));	// 37698 sub     ax, ax ;~ 1359:1BE6
cs=0x1359;eip=0x001be8; 	X(PUSH(ax));	// 37699 push    ax ;~ 1359:1BE8
cs=0x1359;eip=0x001be9; 	X(PUSH(dx));	// 37700 push    dx ;~ 1359:1BE9
cs=0x1359;eip=0x001bea; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 37701 push    [bp+var_4] ;~ 1359:1BEA
cs=0x1359;eip=0x001bed; 	J(CALLF(setup_aero_trackdata,0));	// 37702 call    setup_aero_trackdata ;~ 1359:1BED
cs=0x1359;eip=0x001bf2; 	T(ADD(sp, 6));	// 37703 add     sp, 6 ;~ 1359:1BF2
cs=0x1359;eip=0x001bf5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 37704 push    [bp+var_2] ;~ 1359:1BF5
cs=0x1359;eip=0x001bf8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 37705 push    [bp+var_4] ;~ 1359:1BF8
cs=0x1359;eip=0x001bfb; 	J(CALLF(unload_resource,0));	// 37706 call    unload_resource ;~ 1359:1BFB
cs=0x1359;eip=0x001c00; 	T(ADD(sp, 4));	// 37707 add     sp, 4 ;~ 1359:1C00
cs=0x1359;eip=0x001c03; 	T(CMP(byte_449aa, 0));	// 37708 cmp     byte_449AA, 0 ;~ 1359:1C03
cs=0x1359;eip=0x001c08; 	J(JZ(loc_237d3));	// 37709 jz      short loc_237D3 ;~ 1359:1C08
cs=0x1359;eip=0x001c0a; 	T(MOV(al, byte_449ab));	// 37710 mov     al, byte_449AB ;~ 1359:1C0A
cs=0x1359;eip=0x001c0d; 	X(MOV(byte_3b90d, al));	// 37711 mov     byte_3B90D, al ;~ 1359:1C0D
cs=0x1359;eip=0x001c10; 	T(MOV(al, byte_449ac));	// 37712 mov     al, byte_449AC ;~ 1359:1C10
cs=0x1359;eip=0x001c13; 	X(MOV(byte_3b90e, al));	// 37713 mov     byte_3B90E, al ;~ 1359:1C13
cs=0x1359;eip=0x001c16; 	T(MOV(al, byte_449ad));	// 37714 mov     al, byte_449AD ;~ 1359:1C16
cs=0x1359;eip=0x001c19; 	X(MOV(byte_3b90f, al));	// 37715 mov     byte_3B90F, al ;~ 1359:1C19
cs=0x1359;eip=0x001c1c; 	T(MOV(al, byte_449ae));	// 37716 mov     al, byte_449AE ;~ 1359:1C1C
cs=0x1359;eip=0x001c1f; 	X(MOV(byte_3b910, al));	// 37717 mov     byte_3B910, al ;~ 1359:1C1F
cs=0x1359;eip=0x001c22; 	T(MOV(ax, offset(dseg,acarcoun)));	// 37718 mov     ax, offset aCarcoun ;~ 1359:1C22
cs=0x1359;eip=0x001c25; 	X(PUSH(ax));	// 37719 push    ax ;~ 1359:1C25
cs=0x1359;eip=0x001c26; 	J(CALLF(file_load_resfile,0));	// 37720 call    file_load_resfile ;~ 1359:1C26
cs=0x1359;eip=0x001c2b; 	T(ADD(sp, 2));	// 37721 add     sp, 2 ;~ 1359:1C2B
cs=0x1359;eip=0x001c2e; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 37722 mov     [bp+var_4], ax ;~ 1359:1C2E
cs=0x1359;eip=0x001c31; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 37723 mov     [bp+var_2], dx ;~ 1359:1C31
cs=0x1359;eip=0x001c34; 	T(MOV(ax, 1));	// 37724 mov     ax, 1 ;~ 1359:1C34
cs=0x1359;eip=0x001c37; 	X(PUSH(ax));	// 37725 push    ax ;~ 1359:1C37
cs=0x1359;eip=0x001c38; 	X(PUSH(dx));	// 37726 push    dx ;~ 1359:1C38
cs=0x1359;eip=0x001c39; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 37727 push    [bp+var_4] ;~ 1359:1C39
cs=0x1359;eip=0x001c3c; 	J(CALLF(setup_aero_trackdata,0));	// 37728 call    setup_aero_trackdata ;~ 1359:1C3C
cs=0x1359;eip=0x001c41; 	T(ADD(sp, 6));	// 37729 add     sp, 6 ;~ 1359:1C41
cs=0x1359;eip=0x001c44; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 37730 push    [bp+var_2] ;~ 1359:1C44
cs=0x1359;eip=0x001c47; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 37731 push    [bp+var_4] ;~ 1359:1C47
cs=0x1359;eip=0x001c4a; 	J(CALLF(unload_resource,0));	// 37732 call    unload_resource ;~ 1359:1C4A
cs=0x1359;eip=0x001c4f; 	T(ADD(sp, 4));	// 37733 add     sp, 4 ;~ 1359:1C4F
cs=0x1359;eip=0x001c52; 	T(MOV(ax, 4));	// 37734 mov     ax, 4 ;~ 1359:1C52
cs=0x1359;eip=0x001c55; 	X(PUSH(ax));	// 37735 push    ax ;~ 1359:1C55
cs=0x1359;eip=0x001c56; 	J(CALLF(ensure_file_exists,0));	// 37736 call    ensure_file_exists ;~ 1359:1C56
cs=0x1359;eip=0x001c5b; 	T(ADD(sp, 2));	// 37737 add     sp, 2 ;~ 1359:1C5B
cs=0x1359;eip=0x001c5e; 	J(CALLF(load_opponent_data,0));	// 37738 call    load_opponent_data ;~ 1359:1C5E
loc_237d3:
	// 6896 
cs=0x1359;eip=0x001c63; 	T(MOV(ax, 3));	// 37741 mov     ax, 3 ;~ 1359:1C63
cs=0x1359;eip=0x001c66; 	X(PUSH(ax));	// 37742 push    ax ;~ 1359:1C66
cs=0x1359;eip=0x001c67; 	J(CALLF(ensure_file_exists,0));	// 37743 call    ensure_file_exists ;~ 1359:1C67
cs=0x1359;eip=0x001c6c; 	T(ADD(sp, 2));	// 37744 add     sp, 2 ;~ 1359:1C6C
cs=0x1359;eip=0x001c6f; 	T(MOV(ax, offset(dseg,aeng1)));	// 37745 mov     ax, offset aEng1 ; "eng1" ;~ 1359:1C6F
cs=0x1359;eip=0x001c72; 	X(PUSH(ax));	// 37746 push    ax              ; char * ;~ 1359:1C72
cs=0x1359;eip=0x001c73; 	T(MOV(ax, 5));	// 37747 mov     ax, 5 ;~ 1359:1C73
cs=0x1359;eip=0x001c76; 	X(PUSH(ax));	// 37748 push    ax              ; int ;~ 1359:1C76
cs=0x1359;eip=0x001c77; 	J(CALLF(file_load_resource,0));	// 37749 call    file_load_resource ;~ 1359:1C77
cs=0x1359;eip=0x001c7c; 	T(ADD(sp, 4));	// 37750 add     sp, 4 ;~ 1359:1C7C
cs=0x1359;eip=0x001c7f; 	X(MOV(eng1ptr, ax));	// 37751 mov     eng1ptr, ax ;~ 1359:1C7F
cs=0x1359;eip=0x001c82; 	X(MOV(word_454a8, dx));	// 37752 mov     word_454A8, dx ;~ 1359:1C82
cs=0x1359;eip=0x001c86; 	T(MOV(ax, offset(dseg,aeng)));	// 37753 mov     ax, offset aEng ; "eng" ;~ 1359:1C86
cs=0x1359;eip=0x001c89; 	X(PUSH(ax));	// 37754 push    ax              ; char * ;~ 1359:1C89
cs=0x1359;eip=0x001c8a; 	T(MOV(ax, 6));	// 37755 mov     ax, 6 ;~ 1359:1C8A
cs=0x1359;eip=0x001c8d; 	X(PUSH(ax));	// 37756 push    ax              ; int ;~ 1359:1C8D
cs=0x1359;eip=0x001c8e; 	J(CALLF(file_load_resource,0));	// 37757 call    file_load_resource ;~ 1359:1C8E
cs=0x1359;eip=0x001c93; 	T(ADD(sp, 4));	// 37758 add     sp, 4 ;~ 1359:1C93
cs=0x1359;eip=0x001c96; 	X(MOV(engptr, ax));	// 37759 mov     engptr, ax ;~ 1359:1C96
cs=0x1359;eip=0x001c99; 	X(MOV(word_45e10, dx));	// 37760 mov     word_45E10, dx ;~ 1359:1C99
cs=0x1359;eip=0x001c9d; 	J(CALLF(audio_add_driver_timer,0));	// 37761 call    audio_add_driver_timer ;~ 1359:1C9D
cs=0x1359;eip=0x001ca2; 	X(PUSH(word_45e10));	// 37762 push    word_45E10 ;~ 1359:1CA2
cs=0x1359;eip=0x001ca6; 	X(PUSH(engptr));	// 37763 push    engptr ;~ 1359:1CA6
cs=0x1359;eip=0x001caa; 	X(PUSH(word_454a8));	// 37764 push    word_454A8 ;~ 1359:1CAA
cs=0x1359;eip=0x001cae; 	X(PUSH(eng1ptr));	// 37765 push    eng1ptr ;~ 1359:1CAE
cs=0x1359;eip=0x001cb2; 	T(MOV(ax, offset(dseg,unk_3e7fc)));	// 37766 mov     ax, offset unk_3E7FC ;~ 1359:1CB2
cs=0x1359;eip=0x001cb5; 	X(PUSH(ds));	// 37767 push    ds ;~ 1359:1CB5
cs=0x1359;eip=0x001cb6; 	X(PUSH(ax));	// 37768 push    ax ;~ 1359:1CB6
cs=0x1359;eip=0x001cb7; 	T(MOV(ax, 0x21));	// 37769 mov     ax, 21h ; '!' ;~ 1359:1CB7
cs=0x1359;eip=0x001cba; 	X(PUSH(ax));	// 37770 push    ax ;~ 1359:1CBA
cs=0x1359;eip=0x001cbb; 	J(CALLF(audio_init_engine,0));	// 37771 call    audio_init_engine ;~ 1359:1CBB
cs=0x1359;eip=0x001cc0; 	T(ADD(sp, 0x0E));	// 37772 add     sp, 0Eh ;~ 1359:1CC0
cs=0x1359;eip=0x001cc3; 	X(MOV(word_43964, ax));	// 37773 mov     word_43964, ax ;~ 1359:1CC3
cs=0x1359;eip=0x001cc6; 	X(MOV(byte_459d8, 0));	// 37774 mov     byte_459D8, 0 ;~ 1359:1CC6
cs=0x1359;eip=0x001ccb; 	X(MOV(byte_42d26, 0));	// 37775 mov     byte_42D26, 0 ;~ 1359:1CCB
cs=0x1359;eip=0x001cd0; 	X(MOV(byte_42d2a, 0));	// 37776 mov     byte_42D2A, 0 ;~ 1359:1CD0
cs=0x1359;eip=0x001cd5; 	T(CMP(byte_449aa, 0));	// 37777 cmp     byte_449AA, 0 ;~ 1359:1CD5
cs=0x1359;eip=0x001cda; 	J(JZ(loc_23870));	// 37778 jz      short loc_23870 ;~ 1359:1CDA
cs=0x1359;eip=0x001cdc; 	X(PUSH(word_45e10));	// 37779 push    word_45E10 ;~ 1359:1CDC
cs=0x1359;eip=0x001ce0; 	X(PUSH(engptr));	// 37780 push    engptr ;~ 1359:1CE0
cs=0x1359;eip=0x001ce4; 	X(PUSH(word_454a8));	// 37781 push    word_454A8 ;~ 1359:1CE4
cs=0x1359;eip=0x001ce8; 	X(PUSH(eng1ptr));	// 37782 push    eng1ptr ;~ 1359:1CE8
cs=0x1359;eip=0x001cec; 	T(MOV(ax, offset(dseg,unk_3e82c)));	// 37783 mov     ax, offset unk_3E82C ;~ 1359:1CEC
cs=0x1359;eip=0x001cef; 	X(PUSH(ds));	// 37784 push    ds ;~ 1359:1CEF
cs=0x1359;eip=0x001cf0; 	X(PUSH(ax));	// 37785 push    ax ;~ 1359:1CF0
cs=0x1359;eip=0x001cf1; 	T(MOV(ax, 0x20));	// 37786 mov     ax, 20h ; ' ' ;~ 1359:1CF1
cs=0x1359;eip=0x001cf4; 	X(PUSH(ax));	// 37787 push    ax ;~ 1359:1CF4
cs=0x1359;eip=0x001cf5; 	J(CALLF(audio_init_engine,0));	// 37788 call    audio_init_engine ;~ 1359:1CF5
cs=0x1359;eip=0x001cfa; 	T(ADD(sp, 0x0E));	// 37789 add     sp, 0Eh ;~ 1359:1CFA
cs=0x1359;eip=0x001cfd; 	X(MOV(word_4408c, ax));	// 37790 mov     word_4408C, ax ;~ 1359:1CFD
loc_23870:
	// 6897 
cs=0x1359;eip=0x001d00; 	X(MOV(word_44d1e, 0));	// 37793 mov     word_44D1E, 0 ;~ 1359:1D00
cs=0x1359;eip=0x001d06; 	X(MOV(word_449e4, 0));	// 37794 mov     word_449E4, 0 ;~ 1359:1D06
cs=0x1359;eip=0x001d0c; 	X(MOV(word_443f4, 0));	// 37795 mov     word_443F4, 0 ;~ 1359:1D0C
cs=0x1359;eip=0x001d12; 	T(MOV(ax, offset(dseg,afontled_fnt)));	// 37796 mov     ax, offset aFontled_fnt ; "fontled.fnt" ;~ 1359:1D12
cs=0x1359;eip=0x001d15; 	X(PUSH(ax));	// 37797 push    ax              ; char * ;~ 1359:1D15
cs=0x1359;eip=0x001d16; 	T(SUB(ax, ax));	// 37798 sub     ax, ax ;~ 1359:1D16
cs=0x1359;eip=0x001d18; 	X(PUSH(ax));	// 37799 push    ax              ; int ;~ 1359:1D18
cs=0x1359;eip=0x001d19; 	J(CALLF(file_load_resource,0));	// 37800 call    file_load_resource ;~ 1359:1D19
cs=0x1359;eip=0x001d1e; 	T(ADD(sp, 4));	// 37801 add     sp, 4 ;~ 1359:1D1E
cs=0x1359;eip=0x001d21; 	X(MOV(fontledresptr, ax));	// 37802 mov     fontledresptr, ax ;~ 1359:1D21
cs=0x1359;eip=0x001d24; 	X(MOV(word_459f6, dx));	// 37803 mov     word_459F6, dx ;~ 1359:1D24
cs=0x1359;eip=0x001d28; 	T(MOV(ax, timertestflag));	// 37804 mov     ax, timertestflag ;~ 1359:1D28
cs=0x1359;eip=0x001d2b; 	X(MOV(timertestflag_copy, ax));	// 37805 mov     timertestflag_copy, ax ;~ 1359:1D2B
cs=0x1359;eip=0x001d2e; 	J(CALLF(init_rect_arrays,0));	// 37806 call    init_rect_arrays ;~ 1359:1D2E
cs=0x1359;eip=0x001d33; 	T(CMP(idle_expired, 0));	// 37807 cmp     idle_expired, 0 ;~ 1359:1D33
cs=0x1359;eip=0x001d38; 	J(JNZ(loc_238b4));	// 37808 jnz     short loc_238B4 ;~ 1359:1D38
cs=0x1359;eip=0x001d3a; 	T(SUB(ax, ax));	// 37809 sub     ax, ax ;~ 1359:1D3A
cs=0x1359;eip=0x001d3c; 	X(PUSH(ax));	// 37810 push    ax ;~ 1359:1D3C
cs=0x1359;eip=0x001d3d; 	X(PUSH(cs));	// 37811 push    cs ;~ 1359:1D3D
cs=0x1359;eip=0x001d3e; 	J(CALL(setup_car_shapes,0));	// 37812 call    near ptr setup_car_shapes ;~ 1359:1D3E
cs=0x1359;eip=0x001d41; 	T(ADD(sp, 2));	// 37813 add     sp, 2 ;~ 1359:1D41
loc_238b4:
	// 6898 
cs=0x1359;eip=0x001d44; 	T(CMP(idle_expired, 0));	// 37816 cmp     idle_expired, 0 ;~ 1359:1D44
cs=0x1359;eip=0x001d49; 	J(JNZ(loc_238de));	// 37817 jnz     short loc_238DE ;~ 1359:1D49
cs=0x1359;eip=0x001d4b; 	T(MOV(ax, offset(dseg,asdgame)));	// 37818 mov     ax, offset aSdgame ; "sdgame" ;~ 1359:1D4B
cs=0x1359;eip=0x001d4e; 	X(PUSH(ax));	// 37819 push    ax              ; char * ;~ 1359:1D4E
cs=0x1359;eip=0x001d4f; 	T(MOV(ax, 3));	// 37820 mov     ax, 3 ;~ 1359:1D4F
cs=0x1359;eip=0x001d52; 	X(PUSH(ax));	// 37821 push    ax              ; int ;~ 1359:1D52
cs=0x1359;eip=0x001d53; 	J(CALLF(file_load_resource,0));	// 37822 call    file_load_resource ;~ 1359:1D53
cs=0x1359;eip=0x001d58; 	T(ADD(sp, 4));	// 37823 add     sp, 4 ;~ 1359:1D58
cs=0x1359;eip=0x001d5b; 	X(MOV(sdgameresptr, ax));	// 37824 mov     sdgameresptr, ax ;~ 1359:1D5B
cs=0x1359;eip=0x001d5e; 	X(MOV(word_45d0a, dx));	// 37825 mov     word_45D0A, dx ;~ 1359:1D5E
cs=0x1359;eip=0x001d62; 	T(SUB(ax, ax));	// 37826 sub     ax, ax ;~ 1359:1D62
cs=0x1359;eip=0x001d64; 	X(PUSH(ax));	// 37827 push    ax ;~ 1359:1D64
cs=0x1359;eip=0x001d65; 	X(PUSH(ax));	// 37828 push    ax ;~ 1359:1D65
cs=0x1359;eip=0x001d66; 	X(PUSH(ax));	// 37829 push    ax ;~ 1359:1D66
cs=0x1359;eip=0x001d67; 	X(PUSH(cs));	// 37830 push    cs ;~ 1359:1D67
cs=0x1359;eip=0x001d68; 	J(CALL(loop_game,0));	// 37831 call    near ptr loop_game ;~ 1359:1D68
cs=0x1359;eip=0x001d6b; 	T(ADD(sp, 6));	// 37832 add     sp, 6 ;~ 1359:1D6B
loc_238de:
	// 6899 
cs=0x1359;eip=0x001d6e; 	T(MOV(ax, offset(dseg,agame)));	// 37835 mov     ax, offset aGame ; "game" ;~ 1359:1D6E
cs=0x1359;eip=0x001d71; 	X(PUSH(ax));	// 37836 push    ax ;~ 1359:1D71
cs=0x1359;eip=0x001d72; 	J(CALLF(file_load_resfile,0));	// 37837 call    file_load_resfile ;~ 1359:1D72
cs=0x1359;eip=0x001d77; 	T(ADD(sp, 2));	// 37838 add     sp, 2 ;~ 1359:1D77
cs=0x1359;eip=0x001d7a; 	X(MOV(gameresptr, ax));	// 37839 mov     gameresptr, ax ;~ 1359:1D7A
cs=0x1359;eip=0x001d7d; 	X(MOV(word_449a2, dx));	// 37840 mov     word_449A2, dx ;~ 1359:1D7D
cs=0x1359;eip=0x001d81; 	T(MOV(ax, offset(dseg,aplan)));	// 37841 mov     ax, offset aPlan ; "plan" ;~ 1359:1D81
cs=0x1359;eip=0x001d84; 	X(PUSH(ax));	// 37842 push    ax ;~ 1359:1D84
cs=0x1359;eip=0x001d85; 	X(PUSH(dx));	// 37843 push    dx ;~ 1359:1D85
cs=0x1359;eip=0x001d86; 	X(PUSH(gameresptr));	// 37844 push    gameresptr ;~ 1359:1D86
cs=0x1359;eip=0x001d8a; 	J(CALLF(locate_shape_alt,0));	// 37845 call    locate_shape_alt ;~ 1359:1D8A
cs=0x1359;eip=0x001d8f; 	T(ADD(sp, 6));	// 37846 add     sp, 6 ;~ 1359:1D8F
cs=0x1359;eip=0x001d92; 	X(MOV(planptr, ax));	// 37847 mov     planptr, ax ;~ 1359:1D92
cs=0x1359;eip=0x001d95; 	X(MOV(word_454c4, dx));	// 37848 mov     word_454C4, dx ;~ 1359:1D95
cs=0x1359;eip=0x001d99; 	T(MOV(ax, offset(dseg,awall)));	// 37849 mov     ax, offset aWall ; "wall" ;~ 1359:1D99
cs=0x1359;eip=0x001d9c; 	X(PUSH(ax));	// 37850 push    ax ;~ 1359:1D9C
cs=0x1359;eip=0x001d9d; 	X(PUSH(word_449a2));	// 37851 push    word_449A2 ;~ 1359:1D9D
cs=0x1359;eip=0x001da1; 	X(PUSH(gameresptr));	// 37852 push    gameresptr ;~ 1359:1DA1
cs=0x1359;eip=0x001da5; 	J(CALLF(locate_shape_alt,0));	// 37853 call    locate_shape_alt ;~ 1359:1DA5
cs=0x1359;eip=0x001daa; 	T(ADD(sp, 6));	// 37854 add     sp, 6 ;~ 1359:1DAA
cs=0x1359;eip=0x001dad; 	X(MOV(*(dw*)(((db*)&wallptr)), ax));	// 37855 mov     word ptr wallptr, ax ;~ 1359:1DAD
cs=0x1359;eip=0x001db0; 	X(MOV(*(dw*)(((db*)&wallptr)+2), dx));	// 37856 mov     word ptr wallptr+2, dx ;~ 1359:1DB0
cs=0x1359;eip=0x001db4; 	J(CALLF(load_sdgame2_shapes,0));	// 37857 call    load_sdgame2_shapes ;~ 1359:1DB4
cs=0x1359;eip=0x001db9; 	T(LES(bx, td14_elem_map_main));	// 37858 les     bx, td14_elem_map_main ;~ 1359:1DB9
cs=0x1359;eip=0x001dbd; 	T(MOV(al, *(raddr(es,bx+0x384))));	// 37859 mov     al, es:[bx+384h] ; 384h = sky box position in track data ;~ 1359:1DBD
cs=0x1359;eip=0x001dc2; 	T(SUB(ah, ah));	// 37860 sub     ah, ah ;~ 1359:1DC2
cs=0x1359;eip=0x001dc4; 	X(PUSH(ax));	// 37861 push    ax ;~ 1359:1DC4
cs=0x1359;eip=0x001dc5; 	J(CALLF(load_skybox,0));	// 37862 call    load_skybox ;~ 1359:1DC5
cs=0x1359;eip=0x001dca; 	T(ADD(sp, 2));	// 37863 add     sp, 2 ;~ 1359:1DCA
cs=0x1359;eip=0x001dcd; 	J(CALLF(shape3d_load_all,0));	// 37864 call    shape3d_load_all ;~ 1359:1DCD
cs=0x1359;eip=0x001dd2; 	T(OR(ax, ax));	// 37865 or      ax, ax ;~ 1359:1DD2
cs=0x1359;eip=0x001dd4; 	J(JZ(loc_2394e));	// 37866 jz      short loc_2394E ;~ 1359:1DD4
loc_23946:
	// 6900 
cs=0x1359;eip=0x001dd6; 	T(MOV(ax, 1));	// 37870 mov     ax, 1 ;~ 1359:1DD6
cs=0x1359;eip=0x001dd9; 	T(MOV(sp, bp));	// 37871 mov     sp, bp ;~ 1359:1DD9
cs=0x1359;eip=0x001ddb; 	X(POP(bp));	// 37872 pop     bp ;~ 1359:1DDB
cs=0x1359;eip=0x001ddc; 	J(RETF(0));	// 37873 retf ;~ 1359:1DDC
loc_2394e:
	// 6901 
cs=0x1359;eip=0x001dde; 	T(CMP(video_flag5_is0, 0));	// 37878 cmp     video_flag5_is0, 0 ;~ 1359:1DDE
cs=0x1359;eip=0x001de3; 	J(JNZ(loc_239a3));	// 37879 jnz     short loc_239A3 ;~ 1359:1DE3
cs=0x1359;eip=0x001de5; 	T(MOV(ax, video_flag1_is1));	// 37880 mov     ax, video_flag1_is1 ;~ 1359:1DE5
cs=0x1359;eip=0x001de8; 	X(IMUL1_2(video_flag4_is1));	// 37881 imul    video_flag4_is1 ;~ 1359:1DE8
cs=0x1359;eip=0x001dec; 	T(CWD);	// 37882 cwd ;~ 1359:1DEC
cs=0x1359;eip=0x001ded; 	X(PUSH(dx));	// 37883 push    dx ;~ 1359:1DED
cs=0x1359;eip=0x001dee; 	X(PUSH(ax));	// 37884 push    ax ;~ 1359:1DEE
cs=0x1359;eip=0x001def; 	T(MOV(ax, 0x0FA00));	// 37885 mov     ax, 0FA00h ;~ 1359:1DEF
cs=0x1359;eip=0x001df2; 	T(SUB(dx, dx));	// 37886 sub     dx, dx ;~ 1359:1DF2
cs=0x1359;eip=0x001df4; 	X(PUSH(dx));	// 37887 push    dx ;~ 1359:1DF4
cs=0x1359;eip=0x001df5; 	X(PUSH(ax));	// 37888 push    ax ;~ 1359:1DF5
cs=0x1359;eip=0x001df6; 	J(CALLF(__afldiv,0));	// 37889 call    __aFldiv ;~ 1359:1DF6
cs=0x1359;eip=0x001dfb; 	T(ADD(ax, 0x12));	// 37890 add     ax, 12h ;~ 1359:1DFB
cs=0x1359;eip=0x001dfe; 	T(ADC(dx, 0));	// 37891 adc     dx, 0 ;~ 1359:1DFE
cs=0x1359;eip=0x001e01; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 37892 mov     [bp+var_8], ax ;~ 1359:1E01
cs=0x1359;eip=0x001e04; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 37893 mov     [bp+var_6], dx ;~ 1359:1E04
cs=0x1359;eip=0x001e07; 	J(CALLF(mmgr_get_res_ofs_diff_scaled,0));	// 37894 call    mmgr_get_res_ofs_diff_scaled ;~ 1359:1E07
cs=0x1359;eip=0x001e0c; 	T(CMP(dx, *(dw*)(raddr(ss,bp+var_6))));	// 37895 cmp     dx, [bp+var_6] ;~ 1359:1E0C
cs=0x1359;eip=0x001e0f; 	J(JG(loc_23988));	// 37896 jg      short loc_23988 ;~ 1359:1E0F
cs=0x1359;eip=0x001e11; 	J(JL(loc_23946));	// 37897 jl      short loc_23946 ;~ 1359:1E11
cs=0x1359;eip=0x001e13; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_8))));	// 37898 cmp     ax, [bp+var_8] ;~ 1359:1E13
cs=0x1359;eip=0x001e16; 	J(JBE(loc_23946));	// 37899 jbe     short loc_23946 ;~ 1359:1E16
loc_23988:
	// 6902 
cs=0x1359;eip=0x001e18; 	T(MOV(ax, 0x0F));	// 37902 mov     ax, 0Fh ;~ 1359:1E18
cs=0x1359;eip=0x001e1b; 	X(PUSH(ax));	// 37903 push    ax ;~ 1359:1E1B
cs=0x1359;eip=0x001e1c; 	T(MOV(ax, 0x0C8));	// 37904 mov     ax, 0C8h ; 'È' ;~ 1359:1E1C
cs=0x1359;eip=0x001e1f; 	X(PUSH(ax));	// 37905 push    ax ;~ 1359:1E1F
cs=0x1359;eip=0x001e20; 	T(MOV(ax, 0x140));	// 37906 mov     ax, 140h ;~ 1359:1E20
cs=0x1359;eip=0x001e23; 	X(PUSH(ax));	// 37907 push    ax ;~ 1359:1E23
cs=0x1359;eip=0x001e24; 	J(CALLF(sprite_make_wnd,0));	// 37908 call    sprite_make_wnd ;~ 1359:1E24
cs=0x1359;eip=0x001e29; 	T(ADD(sp, 6));	// 37909 add     sp, 6 ;~ 1359:1E29
cs=0x1359;eip=0x001e2c; 	X(MOV(*(dw*)(((db*)&wndsprite)), ax));	// 37910 mov     word ptr wndsprite, ax ;~ 1359:1E2C
cs=0x1359;eip=0x001e2f; 	X(MOV(*(dw*)(((db*)&wndsprite)+2), dx));	// 37911 mov     word ptr wndsprite+2, dx ;~ 1359:1E2F
loc_239a3:
	// 6903 
cs=0x1359;eip=0x001e33; 	X(MOV(followopponentflag, 0));	// 37914 mov     followOpponentFlag, 0 ;~ 1359:1E33
cs=0x1359;eip=0x001e38; 	X(MOV(is_in_replay_copy, 0x0FF));	// 37915 mov     is_in_replay_copy, 0FFh ;~ 1359:1E38
cs=0x1359;eip=0x001e3d; 	T(SUB(ax, ax));	// 37916 sub     ax, ax ;~ 1359:1E3D
cs=0x1359;eip=0x001e3f; 	T(MOV(sp, bp));	// 37917 mov     sp, bp ;~ 1359:1E3F
cs=0x1359;eip=0x001e41; 	X(POP(bp));	// 37918 pop     bp ;~ 1359:1E41
cs=0x1359;eip=0x001e42; 	J(RETF(0));	// 37919 retf ;~ 1359:1E42

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_237d3: 	goto loc_237d3;
        case m2c::kloc_23870: 	goto loc_23870;
        case m2c::kloc_238b4: 	goto loc_238b4;
        case m2c::kloc_238de: 	goto loc_238de;
        case m2c::kloc_23946: 	goto loc_23946;
        case m2c::kloc_2394e: 	goto loc_2394e;
        case m2c::kloc_23988: 	goto loc_23988;
        case m2c::kloc_239a3: 	goto loc_239a3;
        case m2c::ksetup_player_cars: 	goto setup_player_cars;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool free_player_cars(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    free_player_cars:
    _begin:
cs=0x1359;eip=0x001e44; 	T(CMP(video_flag5_is0, 0));	// 37930 cmp     video_flag5_is0, 0 ;~ 1359:1E44
cs=0x1359;eip=0x001e49; 	J(JNZ(loc_239d4));	// 37931 jnz     short loc_239D4 ;~ 1359:1E49
cs=0x1359;eip=0x001e4b; 	T(MOV(ax, *(dw*)(((db*)&wndsprite))));	// 37932 mov     ax, word ptr wndsprite ;~ 1359:1E4B
cs=0x1359;eip=0x001e4e; 	T(OR(ax, *(dw*)(((db*)&wndsprite)+2)));	// 37933 or      ax, word ptr wndsprite+2 ;~ 1359:1E4E
cs=0x1359;eip=0x001e52; 	J(JZ(loc_239d4));	// 37934 jz      short loc_239D4 ;~ 1359:1E52
cs=0x1359;eip=0x001e54; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 37935 push    word ptr wndsprite+2 ;~ 1359:1E54
cs=0x1359;eip=0x001e58; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 37936 push    word ptr wndsprite ;~ 1359:1E58
cs=0x1359;eip=0x001e5c; 	J(CALLF(sprite_free_wnd,0));	// 37937 call    sprite_free_wnd ;~ 1359:1E5C
cs=0x1359;eip=0x001e61; 	T(ADD(sp, 4));	// 37938 add     sp, 4 ;~ 1359:1E61
loc_239d4:
	// 6904 
cs=0x1359;eip=0x001e64; 	J(CALLF(shape3d_free_all,0));	// 37942 call    shape3d_free_all ;~ 1359:1E64
cs=0x1359;eip=0x001e69; 	J(CALLF(unload_skybox,0));	// 37943 call    unload_skybox ;~ 1359:1E69
cs=0x1359;eip=0x001e6e; 	J(CALLF(free_sdgame2,0));	// 37944 call    free_sdgame2 ;~ 1359:1E6E
cs=0x1359;eip=0x001e73; 	X(PUSH(word_449a2));	// 37945 push    word_449A2 ;~ 1359:1E73
cs=0x1359;eip=0x001e77; 	X(PUSH(gameresptr));	// 37946 push    gameresptr ;~ 1359:1E77
cs=0x1359;eip=0x001e7b; 	J(CALLF(unload_resource,0));	// 37947 call    unload_resource ;~ 1359:1E7B
cs=0x1359;eip=0x001e80; 	T(ADD(sp, 4));	// 37948 add     sp, 4 ;~ 1359:1E80
cs=0x1359;eip=0x001e83; 	T(CMP(idle_expired, 0));	// 37949 cmp     idle_expired, 0 ;~ 1359:1E83
cs=0x1359;eip=0x001e88; 	J(JNZ(loc_23a15));	// 37950 jnz     short loc_23A15 ;~ 1359:1E88
cs=0x1359;eip=0x001e8a; 	X(PUSH(word_45d0a));	// 37951 push    word_45D0A ;~ 1359:1E8A
cs=0x1359;eip=0x001e8e; 	X(PUSH(sdgameresptr));	// 37952 push    sdgameresptr ;~ 1359:1E8E
cs=0x1359;eip=0x001e92; 	J(CALLF(mmgr_free,0));	// 37953 call    mmgr_free ;~ 1359:1E92
cs=0x1359;eip=0x001e97; 	T(ADD(sp, 4));	// 37954 add     sp, 4 ;~ 1359:1E97
cs=0x1359;eip=0x001e9a; 	T(MOV(ax, 3));	// 37955 mov     ax, 3 ;~ 1359:1E9A
cs=0x1359;eip=0x001e9d; 	X(PUSH(ax));	// 37956 push    ax ;~ 1359:1E9D
cs=0x1359;eip=0x001e9e; 	X(PUSH(cs));	// 37957 push    cs ;~ 1359:1E9E
cs=0x1359;eip=0x001e9f; 	J(CALL(setup_car_shapes,0));	// 37958 call    near ptr setup_car_shapes ;~ 1359:1E9F
cs=0x1359;eip=0x001ea2; 	T(ADD(sp, 2));	// 37959 add     sp, 2 ;~ 1359:1EA2
loc_23a15:
	// 6905 
cs=0x1359;eip=0x001ea5; 	X(PUSH(word_459f6));	// 37962 push    word_459F6 ;~ 1359:1EA5
cs=0x1359;eip=0x001ea9; 	X(PUSH(fontledresptr));	// 37963 push    fontledresptr ;~ 1359:1EA9
cs=0x1359;eip=0x001ead; 	J(CALLF(mmgr_free,0));	// 37964 call    mmgr_free ;~ 1359:1EAD
cs=0x1359;eip=0x001eb2; 	T(ADD(sp, 4));	// 37965 add     sp, 4 ;~ 1359:1EB2
cs=0x1359;eip=0x001eb5; 	J(CALLF(audio_remove_driver_timer,0));	// 37966 call    audio_remove_driver_timer ;~ 1359:1EB5
cs=0x1359;eip=0x001eba; 	X(PUSH(word_45e10));	// 37967 push    word_45E10 ;~ 1359:1EBA
cs=0x1359;eip=0x001ebe; 	X(PUSH(engptr));	// 37968 push    engptr ;~ 1359:1EBE
cs=0x1359;eip=0x001ec2; 	J(CALLF(mmgr_free,0));	// 37969 call    mmgr_free ;~ 1359:1EC2
cs=0x1359;eip=0x001ec7; 	T(ADD(sp, 4));	// 37970 add     sp, 4 ;~ 1359:1EC7
cs=0x1359;eip=0x001eca; 	X(PUSH(word_454a8));	// 37971 push    word_454A8 ;~ 1359:1ECA
cs=0x1359;eip=0x001ece; 	X(PUSH(eng1ptr));	// 37972 push    eng1ptr ;~ 1359:1ECE
cs=0x1359;eip=0x001ed2; 	J(CALLF(mmgr_free,0));	// 37973 call    mmgr_free ;~ 1359:1ED2
cs=0x1359;eip=0x001ed7; 	T(ADD(sp, 4));	// 37974 add     sp, 4 ;~ 1359:1ED7
cs=0x1359;eip=0x001eda; 	J(CALLF(shape3d_free_car_shapes,0));	// 37975 call    shape3d_free_car_shapes ;~ 1359:1EDA
cs=0x1359;eip=0x001edf; 	J(RETF(0));	// 37976 retf ;~ 1359:1EDF

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfree_player_cars: 	goto free_player_cars;
        case m2c::kloc_239d4: 	goto loc_239d4;
        case m2c::kloc_23a15: 	goto loc_23a15;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool mouse_minmax_position(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mouse_minmax_position:
    _begin:
#undef arg_0
#define arg_0 6
	// 37987 arg_0           = word ptr  6 ;~ 1359:1EE0
cs=0x1359;eip=0x001ee0; 	X(PUSH(bp));	// 37989 push    bp ;~ 1359:1EE0
cs=0x1359;eip=0x001ee1; 	T(MOV(bp, sp));	// 37990 mov     bp, sp ;~ 1359:1EE1
cs=0x1359;eip=0x001ee3; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 37991 cmp     [bp+arg_0], 0 ;~ 1359:1EE3
cs=0x1359;eip=0x001ee7; 	J(JZ(loc_23a82));	// 37992 jz      short loc_23A82 ;~ 1359:1EE7
cs=0x1359;eip=0x001ee9; 	T(MOV(ax, 0x0C8));	// 37993 mov     ax, 0C8h ; 'È' ;~ 1359:1EE9
cs=0x1359;eip=0x001eec; 	X(PUSH(ax));	// 37994 push    ax ;~ 1359:1EEC
cs=0x1359;eip=0x001eed; 	T(MOV(ax, 0x131));	// 37995 mov     ax, 131h ;~ 1359:1EED
cs=0x1359;eip=0x001ef0; 	X(PUSH(ax));	// 37996 push    ax ;~ 1359:1EF0
cs=0x1359;eip=0x001ef1; 	T(SUB(ax, ax));	// 37997 sub     ax, ax ;~ 1359:1EF1
cs=0x1359;eip=0x001ef3; 	X(PUSH(ax));	// 37998 push    ax ;~ 1359:1EF3
cs=0x1359;eip=0x001ef4; 	T(MOV(ax, 0x0F));	// 37999 mov     ax, 0Fh ;~ 1359:1EF4
cs=0x1359;eip=0x001ef7; 	X(PUSH(ax));	// 38000 push    ax ;~ 1359:1EF7
cs=0x1359;eip=0x001ef8; 	J(CALLF(mouse_set_minmax,0));	// 38001 call    mouse_set_minmax ;~ 1359:1EF8
cs=0x1359;eip=0x001efd; 	T(ADD(sp, 8));	// 38002 add     sp, 8 ;~ 1359:1EFD
cs=0x1359;eip=0x001f00; 	T(MOV(ax, 0x64));	// 38003 mov     ax, 64h ; 'd' ;~ 1359:1F00
cs=0x1359;eip=0x001f03; 	X(PUSH(ax));	// 38004 push    ax ;~ 1359:1F03
cs=0x1359;eip=0x001f04; 	T(MOV(ax, 0x0A0));	// 38005 mov     ax, 0A0h ; ' ' ;~ 1359:1F04
cs=0x1359;eip=0x001f07; 	X(PUSH(ax));	// 38006 push    ax ;~ 1359:1F07
cs=0x1359;eip=0x001f08; 	J(CALLF(mouse_set_position,0));	// 38007 call    mouse_set_position ;~ 1359:1F08
cs=0x1359;eip=0x001f0d; 	T(ADD(sp, 4));	// 38008 add     sp, 4 ;~ 1359:1F0D
cs=0x1359;eip=0x001f10; 	X(POP(bp));	// 38009 pop     bp ;~ 1359:1F10
cs=0x1359;eip=0x001f11; 	J(RETF(0));	// 38010 retf ;~ 1359:1F11
loc_23a82:
	// 6906 
cs=0x1359;eip=0x001f12; 	T(MOV(ax, 0x0C8));	// 38014 mov     ax, 0C8h ; 'È' ;~ 1359:1F12
cs=0x1359;eip=0x001f15; 	X(PUSH(ax));	// 38015 push    ax ;~ 1359:1F15
cs=0x1359;eip=0x001f16; 	T(MOV(ax, 0x140));	// 38016 mov     ax, 140h ;~ 1359:1F16
cs=0x1359;eip=0x001f19; 	X(PUSH(ax));	// 38017 push    ax ;~ 1359:1F19
cs=0x1359;eip=0x001f1a; 	T(SUB(ax, ax));	// 38018 sub     ax, ax ;~ 1359:1F1A
cs=0x1359;eip=0x001f1c; 	X(PUSH(ax));	// 38019 push    ax ;~ 1359:1F1C
cs=0x1359;eip=0x001f1d; 	X(PUSH(ax));	// 38020 push    ax ;~ 1359:1F1D
cs=0x1359;eip=0x001f1e; 	J(CALLF(mouse_set_minmax,0));	// 38021 call    mouse_set_minmax ;~ 1359:1F1E
cs=0x1359;eip=0x001f23; 	T(ADD(sp, 8));	// 38022 add     sp, 8 ;~ 1359:1F23
cs=0x1359;eip=0x001f26; 	X(POP(bp));	// 38023 pop     bp ;~ 1359:1F26
cs=0x1359;eip=0x001f27; 	J(RETF(0));	// 38024 retf ;~ 1359:1F27

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_23a82: 	goto loc_23a82;
        case m2c::kmouse_minmax_position: 	goto mouse_minmax_position;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool replay_unk(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    replay_unk:
    _begin:
#undef var_a
#define var_a -0x0A
	// 38034 var_A           = byte ptr -0Ah ;~ 1359:1F28
#undef var_8
#define var_8 -8
	// 38035 var_8           = byte ptr -8 ;~ 1359:1F28
#undef var_6
#define var_6 -6
	// 38036 var_6           = byte ptr -6 ;~ 1359:1F28
cs=0x1359;eip=0x001f28; 	X(PUSH(bp));	// 38038 push    bp ;~ 1359:1F28
cs=0x1359;eip=0x001f29; 	T(MOV(bp, sp));	// 38039 mov     bp, sp ;~ 1359:1F29
cs=0x1359;eip=0x001f2b; 	T(SUB(sp, 0x0A));	// 38040 sub     sp, 0Ah ;~ 1359:1F2B
cs=0x1359;eip=0x001f2e; 	X(PUSH(di));	// 38041 push    di ;~ 1359:1F2E
cs=0x1359;eip=0x001f2f; 	X(PUSH(si));	// 38042 push    si ;~ 1359:1F2F
cs=0x1359;eip=0x001f30; 	T(MOV(si, word_445d4));	// 38043 mov     si, word_445D4 ;~ 1359:1F30
cs=0x1359;eip=0x001f34; 	T(AND(si, 0x3F));	// 38044 and     si, 3Fh ;~ 1359:1F34
cs=0x1359;eip=0x001f37; 	T(CMP(*((&byte_442ea)+si), 0));	// 38045 cmp     byte_442EA[si], 0 ;~ 1359:1F37
cs=0x1359;eip=0x001f3c; 	J(JNZ(loc_23ab1));	// 38046 jnz     short loc_23AB1 ;~ 1359:1F3C
cs=0x1359;eip=0x001f3e; 	J(JMP(loc_23b45));	// 38047 jmp     loc_23B45 ;~ 1359:1F3E
loc_23ab1:
	// 6907 
cs=0x1359;eip=0x001f41; 	T(MOV(al, *((&byte_44292)+si)));	// 38051 mov     al, byte_44292[si] ;~ 1359:1F41
cs=0x1359;eip=0x001f45; 	T(CBW);	// 38052 cbw ;~ 1359:1F45
cs=0x1359;eip=0x001f46; 	T(MOV(di, ax));	// 38053 mov     di, ax ;~ 1359:1F46
cs=0x1359;eip=0x001f48; 	T(MOV(ax, word_44612));	// 38054 mov     ax, word_44612 ;~ 1359:1F48
cs=0x1359;eip=0x001f4b; 	T(MOV(cl, 0x0A));	// 38055 mov     cl, 0Ah ;~ 1359:1F4B
cs=0x1359;eip=0x001f4d; 	T(SHR(ax, cl));	// 38056 shr     ax, cl ;~ 1359:1F4D
cs=0x1359;eip=0x001f4f; 	T(AND(al, 0x0FC));	// 38057 and     al, 0FCh ;~ 1359:1F4F
cs=0x1359;eip=0x001f51; 	X(MOV(*(raddr(ss,bp+var_8)), al));	// 38058 mov     [bp+var_8], al ;~ 1359:1F51
cs=0x1359;eip=0x001f54; 	T(CBW);	// 38059 cbw ;~ 1359:1F54
cs=0x1359;eip=0x001f55; 	T(MOV(bx, ax));	// 38060 mov     bx, ax ;~ 1359:1F55
cs=0x1359;eip=0x001f57; 	T(ADD(bx, steerwhlresptable_ptr));	// 38061 add     bx, steerWhlRespTable_ptr ;~ 1359:1F57
cs=0x1359;eip=0x001f5b; 	T(MOV(al, *(raddr(ds,bx+1))));	// 38062 mov     al, [bx+1] ;~ 1359:1F5B
cs=0x1359;eip=0x001f5e; 	X(MOV(*(raddr(ss,bp+var_a)), al));	// 38063 mov     [bp+var_A], al ;~ 1359:1F5E
cs=0x1359;eip=0x001f61; 	T(CMP(word_44606, di));	// 38064 cmp     word_44606, di ;~ 1359:1F61
cs=0x1359;eip=0x001f65; 	J(JGE(loc_23ae0));	// 38065 jge     short loc_23AE0 ;~ 1359:1F65
cs=0x1359;eip=0x001f67; 	T(CMP(word_44606, 0x0FFFF));	// 38066 cmp     word_44606, 0FFFFh ;~ 1359:1F67
cs=0x1359;eip=0x001f6c; 	J(JGE(loc_23af2));	// 38067 jge     short loc_23AF2 ;~ 1359:1F6C
cs=0x1359;eip=0x001f6e; 	J(JMP(loc_23aed));	// 38068 jmp     short loc_23AED ;~ 1359:1F6E
loc_23ae0:
	// 6908 
cs=0x1359;eip=0x001f70; 	T(CMP(word_44606, di));	// 38072 cmp     word_44606, di ;~ 1359:1F70
cs=0x1359;eip=0x001f74; 	J(JLE(loc_23af2));	// 38073 jle     short loc_23AF2 ;~ 1359:1F74
cs=0x1359;eip=0x001f76; 	T(CMP(word_44606, 1));	// 38074 cmp     word_44606, 1 ;~ 1359:1F76
cs=0x1359;eip=0x001f7b; 	J(JLE(loc_23af2));	// 38075 jle     short loc_23AF2 ;~ 1359:1F7B
loc_23aed:
	// 6909 
cs=0x1359;eip=0x001f7d; 	T(MOV(cl, 2));	// 38078 mov     cl, 2 ;~ 1359:1F7D
cs=0x1359;eip=0x001f7f; 	X(SHL(*(raddr(ss,bp+var_a)), cl));	// 38079 shl     [bp+var_A], cl ;~ 1359:1F7F
loc_23af2:
	// 6910 
cs=0x1359;eip=0x001f82; 	T(CMP(word_44606, di));	// 38083 cmp     word_44606, di ;~ 1359:1F82
cs=0x1359;eip=0x001f86; 	J(JLE(loc_23b0c));	// 38084 jle     short loc_23B0C ;~ 1359:1F86
cs=0x1359;eip=0x001f88; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 38085 mov     al, [bp+var_A] ;~ 1359:1F88
cs=0x1359;eip=0x001f8b; 	T(CBW);	// 38086 cbw ;~ 1359:1F8B
cs=0x1359;eip=0x001f8c; 	T(MOV(cx, word_44606));	// 38087 mov     cx, word_44606 ;~ 1359:1F8C
cs=0x1359;eip=0x001f90; 	T(SUB(cx, ax));	// 38088 sub     cx, ax ;~ 1359:1F90
cs=0x1359;eip=0x001f92; 	T(CMP(cx, di));	// 38089 cmp     cx, di ;~ 1359:1F92
cs=0x1359;eip=0x001f94; 	J(JL(loc_23b0c));	// 38090 jl      short loc_23B0C ;~ 1359:1F94
cs=0x1359;eip=0x001f96; 	X(MOV(*(raddr(ss,bp+var_6)), 8));	// 38091 mov     [bp+var_6], 8 ;~ 1359:1F96
cs=0x1359;eip=0x001f9a; 	J(JMP(loc_23b28));	// 38092 jmp     short loc_23B28 ;~ 1359:1F9A
loc_23b0c:
	// 6911 
cs=0x1359;eip=0x001f9c; 	T(CMP(word_44606, di));	// 38097 cmp     word_44606, di ;~ 1359:1F9C
cs=0x1359;eip=0x001fa0; 	J(JGE(loc_23b24));	// 38098 jge     short loc_23B24 ;~ 1359:1FA0
cs=0x1359;eip=0x001fa2; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 38099 mov     al, [bp+var_A] ;~ 1359:1FA2
cs=0x1359;eip=0x001fa5; 	T(CBW);	// 38100 cbw ;~ 1359:1FA5
cs=0x1359;eip=0x001fa6; 	T(ADD(ax, word_44606));	// 38101 add     ax, word_44606 ;~ 1359:1FA6
cs=0x1359;eip=0x001faa; 	T(CMP(ax, di));	// 38102 cmp     ax, di ;~ 1359:1FAA
cs=0x1359;eip=0x001fac; 	J(JG(loc_23b24));	// 38103 jg      short loc_23B24 ;~ 1359:1FAC
cs=0x1359;eip=0x001fae; 	X(MOV(*(raddr(ss,bp+var_6)), 4));	// 38104 mov     [bp+var_6], 4 ;~ 1359:1FAE
cs=0x1359;eip=0x001fb2; 	J(JMP(loc_23b28));	// 38105 jmp     short loc_23B28 ;~ 1359:1FB2
loc_23b24:
	// 6912 
cs=0x1359;eip=0x001fb4; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 38110 mov     [bp+var_6], 0 ;~ 1359:1FB4
loc_23b28:
	// 6913 
cs=0x1359;eip=0x001fb8; 	T(CMP(*(raddr(ss,bp+var_6)), 0));	// 38114 cmp     [bp+var_6], 0 ;~ 1359:1FB8
cs=0x1359;eip=0x001fbc; 	J(JZ(loc_23b40));	// 38115 jz      short loc_23B40 ;~ 1359:1FBC
cs=0x1359;eip=0x001fbe; 	T(MOV(bx, word_445d4));	// 38116 mov     bx, word_445D4 ;~ 1359:1FBE
cs=0x1359;eip=0x001fc2; 	T(ADD(bx, *(dw*)(((db*)&td16_rpl_buffer))));	// 38117 add     bx, word ptr td16_rpl_buffer ;~ 1359:1FC2
cs=0x1359;eip=0x001fc6; 	T(MOV(es, *(dw*)(((db*)&td16_rpl_buffer)+2)));	// 38118 mov     es, word ptr td16_rpl_buffer+2 ;~ 1359:1FC6
cs=0x1359;eip=0x001fca; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 38119 mov     al, [bp+var_6] ;~ 1359:1FCA
cs=0x1359;eip=0x001fcd; 	X(OR(*(raddr(es,bx)), al));	// 38120 or      es:[bx], al     ; writing action into rpl buff?! ;~ 1359:1FCD
loc_23b40:
	// 6914 
cs=0x1359;eip=0x001fd0; 	X(MOV(*((&byte_442ea)+si), 0));	// 38123 mov     byte_442EA[si], 0 ;~ 1359:1FD0
loc_23b45:
	// 6915 
cs=0x1359;eip=0x001fd5; 	X(POP(si));	// 38126 pop     si ;~ 1359:1FD5
cs=0x1359;eip=0x001fd6; 	X(POP(di));	// 38127 pop     di ;~ 1359:1FD6
cs=0x1359;eip=0x001fd7; 	T(MOV(sp, bp));	// 38128 mov     sp, bp ;~ 1359:1FD7
cs=0x1359;eip=0x001fd9; 	X(POP(bp));	// 38129 pop     bp ;~ 1359:1FD9
cs=0x1359;eip=0x001fda; 	J(RETF(0));	// 38130 retf ;~ 1359:1FDA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_23ab1: 	goto loc_23ab1;
        case m2c::kloc_23ae0: 	goto loc_23ae0;
        case m2c::kloc_23aed: 	goto loc_23aed;
        case m2c::kloc_23af2: 	goto loc_23af2;
        case m2c::kloc_23b0c: 	goto loc_23b0c;
        case m2c::kloc_23b24: 	goto loc_23b24;
        case m2c::kloc_23b28: 	goto loc_23b28;
        case m2c::kloc_23b40: 	goto loc_23b40;
        case m2c::kloc_23b45: 	goto loc_23b45;
        case m2c::kreplay_unk: 	goto replay_unk;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool loop_game(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    loop_game:
    _begin:
#undef var_44
#define var_44 -0x44
	// 38143 var_44          = word ptr -44h ;~ 1359:1FDC
#undef var_42
#define var_42 -0x42
	// 38144 var_42          = word ptr -42h ;~ 1359:1FDC
#undef var_40
#define var_40 -0x40
	// 38145 var_40          = byte ptr -40h ;~ 1359:1FDC
#undef var_3e
#define var_3e -0x3E
	// 38146 var_3E          = byte ptr -3Eh ;~ 1359:1FDC
#undef var_3d
#define var_3d -0x3D
	// 38147 var_3D          = byte ptr -3Dh ;~ 1359:1FDC
#undef var_3c
#define var_3c -0x3C
	// 38148 var_3C          = byte ptr -3Ch ;~ 1359:1FDC
#undef var_3b
#define var_3b -0x3B
	// 38149 var_3B          = byte ptr -3Bh ;~ 1359:1FDC
#undef var_38
#define var_38 -0x38
	// 38150 var_38          = byte ptr -38h ;~ 1359:1FDC
#undef var_37
#define var_37 -0x37
	// 38151 var_37          = byte ptr -37h ;~ 1359:1FDC
#undef var_36
#define var_36 -0x36
	// 38152 var_36          = byte ptr -36h ;~ 1359:1FDC
#undef var_35
#define var_35 -0x35
	// 38153 var_35          = byte ptr -35h ;~ 1359:1FDC
#undef var_34
#define var_34 -0x34
	// 38154 var_34          = byte ptr -34h ;~ 1359:1FDC
#undef var_24
#define var_24 -0x24
	// 38155 var_24          = word ptr -24h ;~ 1359:1FDC
#undef var_22
#define var_22 -0x22
	// 38156 var_22          = word ptr -22h ;~ 1359:1FDC
#undef var_20
#define var_20 -0x20
	// 38157 var_20          = byte ptr -20h ;~ 1359:1FDC
#undef var_1e
#define var_1e -0x1E
	// 38158 var_1E          = byte ptr -1Eh ;~ 1359:1FDC
#undef var_18
#define var_18 -0x18
	// 38159 var_18          = word ptr -18h ;~ 1359:1FDC
#undef var_16
#define var_16 -0x16
	// 38160 var_16          = word ptr -16h ;~ 1359:1FDC
#undef var_14
#define var_14 -0x14
	// 38161 var_14          = byte ptr -14h ;~ 1359:1FDC
#undef var_12
#define var_12 -0x12
	// 38162 var_12          = word ptr -12h ;~ 1359:1FDC
#undef var_10
#define var_10 -0x10
	// 38163 var_10          = word ptr -10h ;~ 1359:1FDC
#undef var_e
#define var_e -0x0E
	// 38164 var_E           = word ptr -0Eh ;~ 1359:1FDC
#undef var_c
#define var_c -0x0C
	// 38165 var_C           = word ptr -0Ch ;~ 1359:1FDC
#undef var_a
#define var_a -0x0A
	// 38166 var_A           = word ptr -0Ah ;~ 1359:1FDC
#undef var_4
#define var_4 -4
	// 38167 var_4           = word ptr -4 ;~ 1359:1FDC
#undef var_2
#define var_2 -2
	// 38168 var_2           = byte ptr -2 ;~ 1359:1FDC
#undef arg_0
#define arg_0 6
	// 38169 arg_0           = word ptr  6 ;~ 1359:1FDC
#undef arg_2
#define arg_2 8
	// 38170 arg_2           = word ptr  8 ;~ 1359:1FDC
#undef arg_4
#define arg_4 0x0A
	// 38171 arg_4           = word ptr  0Ah ;~ 1359:1FDC
cs=0x1359;eip=0x001fdc; 	X(PUSH(bp));	// 38173 push    bp ;~ 1359:1FDC
cs=0x1359;eip=0x001fdd; 	T(MOV(bp, sp));	// 38174 mov     bp, sp ;~ 1359:1FDD
cs=0x1359;eip=0x001fdf; 	T(SUB(sp, 0x44));	// 38175 sub     sp, 44h ;~ 1359:1FDF
cs=0x1359;eip=0x001fe2; 	X(PUSH(di));	// 38176 push    di              ; int ;~ 1359:1FE2
cs=0x1359;eip=0x001fe3; 	X(PUSH(si));	// 38177 push    si              ; char * ;~ 1359:1FE3
cs=0x1359;eip=0x001fe4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 38178 mov     ax, [bp+arg_0] ;~ 1359:1FE4
cs=0x1359;eip=0x001fe7; 	T(OR(ax, ax));	// 38179 or      ax, ax ;~ 1359:1FE7
cs=0x1359;eip=0x001fe9; 	J(JZ(loc_23b70));	// 38180 jz      short loc_23B70 ;~ 1359:1FE9
cs=0x1359;eip=0x001feb; 	T(CMP(ax, 1));	// 38181 cmp     ax, 1 ;~ 1359:1FEB
cs=0x1359;eip=0x001fee; 	J(JZ(loc_23ba6));	// 38182 jz      short loc_23BA6 ;~ 1359:1FEE
cs=0x1359;eip=0x001ff0; 	T(CMP(ax, 2));	// 38183 cmp     ax, 2 ;~ 1359:1FF0
cs=0x1359;eip=0x001ff3; 	J(JZ(loc_23b8d));	// 38184 jz      short loc_23B8D ;~ 1359:1FF3
cs=0x1359;eip=0x001ff5; 	T(CMP(ax, 3));	// 38185 cmp     ax, 3 ;~ 1359:1FF5
cs=0x1359;eip=0x001ff8; 	J(JNZ(loc_23b6d));	// 38186 jnz     short loc_23B6D ;~ 1359:1FF8
cs=0x1359;eip=0x001ffa; 	J(JMP(loc_23fb8));	// 38187 jmp     loc_23FB8 ;~ 1359:1FFA
loc_23b6d:
	// 6916 
cs=0x1359;eip=0x001ffd; 	J(JMP(loc_24d5e));	// 38191 jmp     loc_24D5E ;~ 1359:1FFD
loc_23b70:
	// 6917 
cs=0x1359;eip=0x002000; 	T(MOV(ax, offset(dseg,rplyshapes)));	// 38195 mov     ax, offset rplyshapes ;~ 1359:2000
cs=0x1359;eip=0x002003; 	X(PUSH(ax));	// 38196 push    ax ;~ 1359:2003
cs=0x1359;eip=0x002004; 	T(MOV(ax, offset(dseg,arplyrpicrpacrpmcrptcbof6bof5b)));	// 38197 mov     ax, offset aRplyrpicrpacrpmcrptcbof6bof5b ; "rplyrpicrpacrpmcrptcbof6bof5bof4bof3bof"... ;~ 1359:2004
cs=0x1359;eip=0x002007; 	X(PUSH(ax));	// 38198 push    ax ;~ 1359:2007
cs=0x1359;eip=0x002008; 	X(PUSH(word_45d0a));	// 38199 push    word_45D0A ;~ 1359:2008
cs=0x1359;eip=0x00200c; 	X(PUSH(sdgameresptr));	// 38200 push    sdgameresptr ;~ 1359:200C
cs=0x1359;eip=0x002010; 	J(CALLF(locate_many_resources,0));	// 38201 call    locate_many_resources ;~ 1359:2010
cs=0x1359;eip=0x002015; 	T(ADD(sp, 8));	// 38202 add     sp, 8 ;~ 1359:2015
cs=0x1359;eip=0x002018; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), 4));	// 38203 mov     [bp+arg_2], 4 ;~ 1359:2018
loc_23b8d:
	// 6918 
cs=0x1359;eip=0x00201d; 	T(SUB(si, si));	// 38206 sub     si, si ;~ 1359:201D
loc_23b8f:
	// 6919 
cs=0x1359;eip=0x00201f; 	X(MOV(*((&byte_40e6a)+si), 0));	// 38209 mov     byte_40E6A[si], 0 ;~ 1359:201F
cs=0x1359;eip=0x002024; 	T(INC(si));	// 38210 inc     si ;~ 1359:2024
cs=0x1359;eip=0x002025; 	T(CMP(si, 9));	// 38211 cmp     si, 9 ;~ 1359:2025
cs=0x1359;eip=0x002028; 	J(JL(loc_23b8f));	// 38212 jl      short loc_23B8F ;~ 1359:2028
cs=0x1359;eip=0x00202a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 38213 mov     bx, [bp+arg_2] ;~ 1359:202A
cs=0x1359;eip=0x00202d; 	X(MOV(*((&byte_40e6a)+bx), 1));	// 38214 mov     byte_40E6A[bx], 1 ;~ 1359:202D
cs=0x1359;eip=0x002032; 	J(JMP(loc_24d5e));	// 38215 jmp     loc_24D5E ;~ 1359:2032
loc_23ba6:
	// 6920 
cs=0x1359;eip=0x002036; 	T(MOV(al, byte_4432a));	// 38220 mov     al, byte_4432A ;~ 1359:2036
cs=0x1359;eip=0x002039; 	T(CBW);	// 38221 cbw ;~ 1359:2039
cs=0x1359;eip=0x00203a; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), ax));	// 38222 mov     [bp+var_42], ax ;~ 1359:203A
cs=0x1359;eip=0x00203d; 	T(MOV(bx, ax));	// 38223 mov     bx, ax ;~ 1359:203D
cs=0x1359;eip=0x00203f; 	T(CMP(*((&byte_449d8)+bx), 0));	// 38224 cmp     byte_449D8[bx], 0 ;~ 1359:203F
cs=0x1359;eip=0x002044; 	J(JZ(loc_23bb9));	// 38225 jz      short loc_23BB9 ;~ 1359:2044
cs=0x1359;eip=0x002046; 	J(JMP(loc_23c66));	// 38226 jmp     loc_23C66 ;~ 1359:2046
loc_23bb9:
	// 6921 
cs=0x1359;eip=0x002049; 	X(MOV(*((&byte_449d8)+bx), 1));	// 38230 mov     byte_449D8[bx], 1 ;~ 1359:2049
cs=0x1359;eip=0x00204e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_42))));	// 38231 mov     bx, [bp+var_42] ;~ 1359:204E
cs=0x1359;eip=0x002051; 	X(MOV(*((&byte_40e74)+bx), 0x0FF));	// 38232 mov     byte_40E74[bx], 0FFh ;~ 1359:2051
cs=0x1359;eip=0x002056; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_42))));	// 38233 mov     bx, [bp+var_42] ;~ 1359:2056
cs=0x1359;eip=0x002059; 	X(MOV(*((&byte_40e08)+bx), 0x0FF));	// 38234 mov     byte_40E08[bx], 0FFh ;~ 1359:2059
cs=0x1359;eip=0x00205e; 	T(SUB(si, si));	// 38235 sub     si, si ;~ 1359:205E
loc_23bd0:
	// 6922 
cs=0x1359;eip=0x002060; 	T(MOV(al, byte_4432a));	// 38238 mov     al, byte_4432A ;~ 1359:2060
cs=0x1359;eip=0x002063; 	T(CBW);	// 38239 cbw ;~ 1359:2063
cs=0x1359;eip=0x002064; 	T(MOV(bx, ax));	// 38240 mov     bx, ax ;~ 1359:2064
cs=0x1359;eip=0x002066; 	T(MOV(ax, si));	// 38241 mov     ax, si ;~ 1359:2066
cs=0x1359;eip=0x002068; 	T(SHL(ax, 1));	// 38242 shl     ax, 1 ;~ 1359:2068
cs=0x1359;eip=0x00206a; 	T(ADD(bx, ax));	// 38243 add     bx, ax ;~ 1359:206A
cs=0x1359;eip=0x00206c; 	X(MOV(*((&byte_40e7a)+bx), 0));	// 38244 mov     byte_40E7A[bx], 0 ;~ 1359:206C
cs=0x1359;eip=0x002071; 	T(INC(si));	// 38245 inc     si ;~ 1359:2071
cs=0x1359;eip=0x002072; 	T(CMP(si, 9));	// 38246 cmp     si, 9 ;~ 1359:2072
cs=0x1359;eip=0x002075; 	J(JL(loc_23bd0));	// 38247 jl      short loc_23BD0 ;~ 1359:2075
cs=0x1359;eip=0x002077; 	J(CALLF(mouse_draw_opaque_check,0));	// 38248 call    mouse_draw_opaque_check ;~ 1359:2077
cs=0x1359;eip=0x00207c; 	X(PUSH(*(dw*)(((db*)rplyshapes)+2)));	// 38249 push    rplyshapes+2 ;~ 1359:207C
cs=0x1359;eip=0x002080; 	X(PUSH(*(rplyshapes)));	// 38250 push    rplyshapes ;~ 1359:2080
cs=0x1359;eip=0x002084; 	J(CALLF(shape2d_op_unk,0));	// 38251 call    shape2d_op_unk ;~ 1359:2084
cs=0x1359;eip=0x002089; 	T(ADD(sp, 4));	// 38252 add     sp, 4 ;~ 1359:2089
cs=0x1359;eip=0x00208c; 	T(MOV(al, byte_4432a));	// 38253 mov     al, byte_4432A ;~ 1359:208C
cs=0x1359;eip=0x00208f; 	T(CBW);	// 38254 cbw ;~ 1359:208F
cs=0x1359;eip=0x002090; 	T(SHL(ax, 1));	// 38255 shl     ax, 1 ;~ 1359:2090
cs=0x1359;eip=0x002092; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), ax));	// 38256 mov     [bp+var_42], ax ;~ 1359:2092
cs=0x1359;eip=0x002095; 	T(MOV(bx, ax));	// 38257 mov     bx, ax ;~ 1359:2095
cs=0x1359;eip=0x002097; 	X(MOV(*(dw*)(((db*)&word_40e0a)+bx), 0x0FFFF));	// 38258 mov     word_40E0A[bx], 0FFFFh ;~ 1359:2097
cs=0x1359;eip=0x00209d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_42))));	// 38259 mov     bx, [bp+var_42] ;~ 1359:209D
cs=0x1359;eip=0x0020a0; 	X(MOV(*(dw*)(((db*)&word_40e76)+bx), 0x0FFFF));	// 38260 mov     word_40E76[bx], 0FFFFh ;~ 1359:20A0
cs=0x1359;eip=0x0020a6; 	T(MOV(ax, 1));	// 38261 mov     ax, 1 ;~ 1359:20A6
cs=0x1359;eip=0x0020a9; 	X(PUSH(ax));	// 38262 push    ax              ; int ;~ 1359:20A9
cs=0x1359;eip=0x0020aa; 	T(MOV(ax, word_449bc));	// 38263 mov     ax, word_449BC ;~ 1359:20AA
cs=0x1359;eip=0x0020ad; 	T(ADD(ax, elapsed_time1));	// 38264 add     ax, elapsed_time1 ;~ 1359:20AD
cs=0x1359;eip=0x0020b1; 	X(PUSH(ax));	// 38265 push    ax ;~ 1359:20B1
cs=0x1359;eip=0x0020b2; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 38266 mov     ax, offset resID_byte1 ;~ 1359:20B2
cs=0x1359;eip=0x0020b5; 	X(PUSH(ax));	// 38267 push    ax              ; char * ;~ 1359:20B5
cs=0x1359;eip=0x0020b6; 	J(CALLF(format_frame_as_string,0));	// 38268 call    format_frame_as_string ;~ 1359:20B6
cs=0x1359;eip=0x0020bb; 	T(ADD(sp, 6));	// 38269 add     sp, 6 ;~ 1359:20BB
cs=0x1359;eip=0x0020be; 	T(SUB(ax, ax));	// 38270 sub     ax, ax ;~ 1359:20BE
cs=0x1359;eip=0x0020c0; 	X(PUSH(ax));	// 38271 push    ax ;~ 1359:20C0
cs=0x1359;eip=0x0020c1; 	X(PUSH(dialog_fnt_colour));	// 38272 push    dialog_fnt_colour ;~ 1359:20C1
cs=0x1359;eip=0x0020c5; 	J(CALLF(font_set_unk,0));	// 38273 call    font_set_unk ;~ 1359:20C5
cs=0x1359;eip=0x0020ca; 	T(ADD(sp, 4));	// 38274 add     sp, 4 ;~ 1359:20CA
cs=0x1359;eip=0x0020cd; 	X(PUSH(word_459f6));	// 38275 push    word_459F6 ;~ 1359:20CD
cs=0x1359;eip=0x0020d1; 	X(PUSH(fontledresptr));	// 38276 push    fontledresptr ;~ 1359:20D1
cs=0x1359;eip=0x0020d5; 	J(CALLF(font_set_fontdef2,0));	// 38277 call    font_set_fontdef2 ;~ 1359:20D5
cs=0x1359;eip=0x0020da; 	T(ADD(sp, 4));	// 38278 add     sp, 4 ;~ 1359:20DA
cs=0x1359;eip=0x0020dd; 	T(MOV(ax, 0x0BB));	// 38279 mov     ax, 0BBh ; '»' ;~ 1359:20DD
cs=0x1359;eip=0x0020e0; 	X(PUSH(ax));	// 38280 push    ax ;~ 1359:20E0
cs=0x1359;eip=0x0020e1; 	T(MOV(ax, 0x0D8));	// 38281 mov     ax, 0D8h ; 'Ø' ;~ 1359:20E1
cs=0x1359;eip=0x0020e4; 	X(PUSH(ax));	// 38282 push    ax ;~ 1359:20E4
cs=0x1359;eip=0x0020e5; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 38283 mov     ax, offset resID_byte1 ;~ 1359:20E5
cs=0x1359;eip=0x0020e8; 	X(PUSH(ax));	// 38284 push    ax ;~ 1359:20E8
cs=0x1359;eip=0x0020e9; 	J(CALLF(sub_345bc,0));	// 38285 call    sub_345BC ;~ 1359:20E9
cs=0x1359;eip=0x0020ee; 	T(ADD(sp, 6));	// 38286 add     sp, 6 ;~ 1359:20EE
cs=0x1359;eip=0x0020f1; 	J(CALLF(font_set_fontdef,0));	// 38287 call    font_set_fontdef ;~ 1359:20F1
loc_23c66:
	// 6923 
cs=0x1359;eip=0x0020f6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 38290 mov     ax, [bp+arg_4] ;~ 1359:20F6
cs=0x1359;eip=0x0020f9; 	T(ADD(ax, elapsed_time1));	// 38291 add     ax, elapsed_time1 ;~ 1359:20F9
cs=0x1359;eip=0x0020fd; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), ax));	// 38292 mov     [bp+var_42], ax ;~ 1359:20FD
cs=0x1359;eip=0x002100; 	T(MOV(al, byte_4432a));	// 38293 mov     al, byte_4432A ;~ 1359:2100
cs=0x1359;eip=0x002103; 	T(CBW);	// 38294 cbw ;~ 1359:2103
cs=0x1359;eip=0x002104; 	T(SHL(ax, 1));	// 38295 shl     ax, 1 ;~ 1359:2104
cs=0x1359;eip=0x002106; 	T(ADD(ax, offset(dseg,word_40e0a)));	// 38296 add     ax, offset word_40E0A ;~ 1359:2106
cs=0x1359;eip=0x002109; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 38297 mov     [bp+var_44], ax ;~ 1359:2109
cs=0x1359;eip=0x00210c; 	T(MOV(bx, ax));	// 38298 mov     bx, ax ;~ 1359:210C
cs=0x1359;eip=0x00210e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_42))));	// 38299 mov     ax, [bp+var_42] ;~ 1359:210E
cs=0x1359;eip=0x002111; 	T(CMP(*(dw*)(raddr(ds,bx)), ax));	// 38300 cmp     [bx], ax ;~ 1359:2111
cs=0x1359;eip=0x002113; 	J(JZ(loc_23cd7));	// 38301 jz      short loc_23CD7 ;~ 1359:2113
cs=0x1359;eip=0x002115; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 38302 mov     [bx], ax ;~ 1359:2115
cs=0x1359;eip=0x002117; 	T(MOV(ax, 1));	// 38303 mov     ax, 1 ;~ 1359:2117
cs=0x1359;eip=0x00211a; 	X(PUSH(ax));	// 38304 push    ax              ; int ;~ 1359:211A
cs=0x1359;eip=0x00211b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_42))));	// 38305 push    [bp+var_42] ;~ 1359:211B
cs=0x1359;eip=0x00211e; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 38306 mov     ax, offset resID_byte1 ;~ 1359:211E
cs=0x1359;eip=0x002121; 	X(PUSH(ax));	// 38307 push    ax              ; char * ;~ 1359:2121
cs=0x1359;eip=0x002122; 	J(CALLF(format_frame_as_string,0));	// 38308 call    format_frame_as_string ;~ 1359:2122
cs=0x1359;eip=0x002127; 	T(ADD(sp, 6));	// 38309 add     sp, 6 ;~ 1359:2127
cs=0x1359;eip=0x00212a; 	T(SUB(ax, ax));	// 38310 sub     ax, ax ;~ 1359:212A
cs=0x1359;eip=0x00212c; 	X(PUSH(ax));	// 38311 push    ax ;~ 1359:212C
cs=0x1359;eip=0x00212d; 	X(PUSH(dialog_fnt_colour));	// 38312 push    dialog_fnt_colour ;~ 1359:212D
cs=0x1359;eip=0x002131; 	J(CALLF(font_set_unk,0));	// 38313 call    font_set_unk ;~ 1359:2131
cs=0x1359;eip=0x002136; 	T(ADD(sp, 4));	// 38314 add     sp, 4 ;~ 1359:2136
cs=0x1359;eip=0x002139; 	J(CALLF(mouse_draw_opaque_check,0));	// 38315 call    mouse_draw_opaque_check ;~ 1359:2139
cs=0x1359;eip=0x00213e; 	X(PUSH(word_459f6));	// 38316 push    word_459F6 ;~ 1359:213E
cs=0x1359;eip=0x002142; 	X(PUSH(fontledresptr));	// 38317 push    fontledresptr ;~ 1359:2142
cs=0x1359;eip=0x002146; 	J(CALLF(font_set_fontdef2,0));	// 38318 call    font_set_fontdef2 ;~ 1359:2146
cs=0x1359;eip=0x00214b; 	T(ADD(sp, 4));	// 38319 add     sp, 4 ;~ 1359:214B
cs=0x1359;eip=0x00214e; 	T(MOV(ax, 0x0BB));	// 38320 mov     ax, 0BBh ; '»' ;~ 1359:214E
cs=0x1359;eip=0x002151; 	X(PUSH(ax));	// 38321 push    ax ;~ 1359:2151
cs=0x1359;eip=0x002152; 	T(MOV(ax, 0x98));	// 38322 mov     ax, 98h ;~ 1359:2152
cs=0x1359;eip=0x002155; 	X(PUSH(ax));	// 38323 push    ax ;~ 1359:2155
cs=0x1359;eip=0x002156; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 38324 mov     ax, offset resID_byte1 ;~ 1359:2156
cs=0x1359;eip=0x002159; 	X(PUSH(ax));	// 38325 push    ax ;~ 1359:2159
cs=0x1359;eip=0x00215a; 	J(CALLF(sub_345bc,0));	// 38326 call    sub_345BC ;~ 1359:215A
cs=0x1359;eip=0x00215f; 	T(ADD(sp, 6));	// 38327 add     sp, 6 ;~ 1359:215F
cs=0x1359;eip=0x002162; 	J(CALLF(font_set_fontdef,0));	// 38328 call    font_set_fontdef ;~ 1359:2162
loc_23cd7:
	// 6924 
cs=0x1359;eip=0x002167; 	T(MOV(al, byte_4432a));	// 38331 mov     al, byte_4432A ;~ 1359:2167
cs=0x1359;eip=0x00216a; 	T(CBW);	// 38332 cbw ;~ 1359:216A
cs=0x1359;eip=0x00216b; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 38333 mov     [bp+var_44], ax ;~ 1359:216B
cs=0x1359;eip=0x00216e; 	T(MOV(bx, ax));	// 38334 mov     bx, ax ;~ 1359:216E
cs=0x1359;eip=0x002170; 	T(MOV(al, cameramode));	// 38335 mov     al, cameramode ;~ 1359:2170
cs=0x1359;eip=0x002173; 	T(CMP(*((&byte_40e74)+bx), al));	// 38336 cmp     byte_40E74[bx], al ;~ 1359:2173
cs=0x1359;eip=0x002177; 	J(JZ(loc_23d46));	// 38337 jz      short loc_23D46 ;~ 1359:2177
cs=0x1359;eip=0x002179; 	X(MOV(*((&byte_40e74)+bx), al));	// 38338 mov     byte_40E74[bx], al ;~ 1359:2179
cs=0x1359;eip=0x00217d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_44))));	// 38339 mov     bx, [bp+var_44] ;~ 1359:217D
cs=0x1359;eip=0x002180; 	T(SHL(bx, 1));	// 38340 shl     bx, 1 ;~ 1359:2180
cs=0x1359;eip=0x002182; 	X(MOV(*(dw*)(((db*)&word_40e76)+bx), 0x0FFFF));	// 38341 mov     word_40E76[bx], 0FFFFh ;~ 1359:2182
cs=0x1359;eip=0x002188; 	J(CALLF(mouse_draw_opaque_check,0));	// 38342 call    mouse_draw_opaque_check ;~ 1359:2188
cs=0x1359;eip=0x00218d; 	T(MOV(al, cameramode));	// 38343 mov     al, cameramode ;~ 1359:218D
cs=0x1359;eip=0x002190; 	T(CBW);	// 38344 cbw ;~ 1359:2190
cs=0x1359;eip=0x002191; 	T(MOV(bx, ax));	// 38345 mov     bx, ax ;~ 1359:2191
cs=0x1359;eip=0x002193; 	T(SHL(bx, 1));	// 38346 shl     bx, 1 ;~ 1359:2193
cs=0x1359;eip=0x002195; 	T(SHL(bx, 1));	// 38347 shl     bx, 1 ;~ 1359:2195
cs=0x1359;eip=0x002197; 	X(PUSH(*(dw*)((((db*)rplyshapes)+6)+bx)));	// 38348 push    (rplyshapes+6)[bx] ;~ 1359:2197
cs=0x1359;eip=0x00219b; 	X(PUSH(*(dw*)((((db*)rplyshapes)+4)+bx)));	// 38349 push    (rplyshapes+4)[bx] ;~ 1359:219B
cs=0x1359;eip=0x00219f; 	J(CALLF(shape2d_op_unk,0));	// 38350 call    shape2d_op_unk ;~ 1359:219F
cs=0x1359;eip=0x0021a4; 	T(ADD(sp, 4));	// 38351 add     sp, 4 ;~ 1359:21A4
cs=0x1359;eip=0x0021a7; 	T(MOV(al, cameramode));	// 38352 mov     al, cameramode ;~ 1359:21A7
cs=0x1359;eip=0x0021aa; 	T(CBW);	// 38353 cbw ;~ 1359:21AA
cs=0x1359;eip=0x0021ab; 	T(MOV(bx, ax));	// 38354 mov     bx, ax ;~ 1359:21AB
cs=0x1359;eip=0x0021ad; 	T(MOV(al, *((&game_camera_buttons_count)+bx)));	// 38355 mov     al, game_camera_buttons_count[bx] ;~ 1359:21AD
cs=0x1359;eip=0x0021b1; 	X(MOV(*(db*)(raddr(ss,bp+var_42)), al));	// 38356 mov     byte ptr [bp+var_42], al ;~ 1359:21B1
cs=0x1359;eip=0x0021b4; 	T(MOV(al, byte_3e9db));	// 38357 mov     al, byte_3E9DB ;~ 1359:21B4
cs=0x1359;eip=0x0021b7; 	T(CMP(*(db*)(raddr(ss,bp+var_42)), al));	// 38358 cmp     byte ptr [bp+var_42], al ;~ 1359:21B7
cs=0x1359;eip=0x0021ba; 	J(JGE(loc_23d32));	// 38359 jge     short loc_23D32 ;~ 1359:21BA
cs=0x1359;eip=0x0021bc; 	T(MOV(al, *(db*)(raddr(ss,bp+var_42))));	// 38360 mov     al, byte ptr [bp+var_42] ;~ 1359:21BC
cs=0x1359;eip=0x0021bf; 	X(MOV(byte_3e9db, al));	// 38361 mov     byte_3E9DB, al ;~ 1359:21BF
loc_23d32:
	// 6925 
cs=0x1359;eip=0x0021c2; 	T(MOV(al, byte_4432a));	// 38364 mov     al, byte_4432A ;~ 1359:21C2
cs=0x1359;eip=0x0021c5; 	T(CBW);	// 38365 cbw ;~ 1359:21C5
cs=0x1359;eip=0x0021c6; 	T(ADD(ax, offset(dseg,byte_40e08)));	// 38366 add     ax, offset byte_40E08 ;~ 1359:21C6
cs=0x1359;eip=0x0021c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 38367 mov     [bp+var_44], ax ;~ 1359:21C9
cs=0x1359;eip=0x0021cc; 	T(MOV(bx, ax));	// 38368 mov     bx, ax ;~ 1359:21CC
cs=0x1359;eip=0x0021ce; 	T(CMP(*(raddr(ds,bx)), 6));	// 38369 cmp     byte ptr [bx], 6 ;~ 1359:21CE
cs=0x1359;eip=0x0021d1; 	J(JLE(loc_23d46));	// 38370 jle     short loc_23D46 ;~ 1359:21D1
cs=0x1359;eip=0x0021d3; 	X(MOV(*(raddr(ds,bx)), 0x0FF));	// 38371 mov     byte ptr [bx], 0FFh ;~ 1359:21D3
loc_23d46:
	// 6926 
cs=0x1359;eip=0x0021d6; 	T(CMP(word_449bc, 0));	// 38375 cmp     word_449BC, 0 ;~ 1359:21D6
cs=0x1359;eip=0x0021db; 	J(JNZ(loc_23d54));	// 38376 jnz     short loc_23D54 ;~ 1359:21DB
cs=0x1359;eip=0x0021dd; 	T(SUB(si, si));	// 38377 sub     si, si ;~ 1359:21DD
cs=0x1359;eip=0x0021df; 	T(SUB(di, di));	// 38378 sub     di, di ;~ 1359:21DF
cs=0x1359;eip=0x0021e1; 	J(JMP(loc_23d94));	// 38379 jmp     short loc_23D94 ;~ 1359:21E1
loc_23d54:
	// 6927 
cs=0x1359;eip=0x0021e4; 	T(MOV(ax, word_449bc));	// 38384 mov     ax, word_449BC ;~ 1359:21E4
cs=0x1359;eip=0x0021e7; 	T(CWD);	// 38385 cwd ;~ 1359:21E7
cs=0x1359;eip=0x0021e8; 	X(PUSH(dx));	// 38386 push    dx ;~ 1359:21E8
cs=0x1359;eip=0x0021e9; 	X(PUSH(ax));	// 38387 push    ax ;~ 1359:21E9
cs=0x1359;eip=0x0021ea; 	T(MOV(ax, 0x6E));	// 38388 mov     ax, 6Eh ; 'n' ;~ 1359:21EA
cs=0x1359;eip=0x0021ed; 	T(CWD);	// 38389 cwd ;~ 1359:21ED
cs=0x1359;eip=0x0021ee; 	X(PUSH(dx));	// 38390 push    dx ;~ 1359:21EE
cs=0x1359;eip=0x0021ef; 	X(PUSH(ax));	// 38391 push    ax ;~ 1359:21EF
cs=0x1359;eip=0x0021f0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 38392 mov     ax, [bp+arg_2] ;~ 1359:21F0
cs=0x1359;eip=0x0021f3; 	T(CWD);	// 38393 cwd ;~ 1359:21F3
cs=0x1359;eip=0x0021f4; 	X(PUSH(dx));	// 38394 push    dx ;~ 1359:21F4
cs=0x1359;eip=0x0021f5; 	X(PUSH(ax));	// 38395 push    ax ;~ 1359:21F5
cs=0x1359;eip=0x0021f6; 	J(CALLF(__aflmul,0));	// 38396 call    __aFlmul ;~ 1359:21F6
cs=0x1359;eip=0x0021fb; 	X(PUSH(dx));	// 38397 push    dx ;~ 1359:21FB
cs=0x1359;eip=0x0021fc; 	X(PUSH(ax));	// 38398 push    ax ;~ 1359:21FC
cs=0x1359;eip=0x0021fd; 	J(CALLF(__afldiv,0));	// 38399 call    __aFldiv ;~ 1359:21FD
cs=0x1359;eip=0x002202; 	T(MOV(si, ax));	// 38400 mov     si, ax ;~ 1359:2202
cs=0x1359;eip=0x002204; 	T(MOV(ax, word_449bc));	// 38401 mov     ax, word_449BC ;~ 1359:2204
cs=0x1359;eip=0x002207; 	T(CWD);	// 38402 cwd ;~ 1359:2207
cs=0x1359;eip=0x002208; 	X(PUSH(dx));	// 38403 push    dx ;~ 1359:2208
cs=0x1359;eip=0x002209; 	X(PUSH(ax));	// 38404 push    ax ;~ 1359:2209
cs=0x1359;eip=0x00220a; 	T(MOV(ax, 0x6E));	// 38405 mov     ax, 6Eh ; 'n' ;~ 1359:220A
cs=0x1359;eip=0x00220d; 	T(CWD);	// 38406 cwd ;~ 1359:220D
cs=0x1359;eip=0x00220e; 	X(PUSH(dx));	// 38407 push    dx ;~ 1359:220E
cs=0x1359;eip=0x00220f; 	X(PUSH(ax));	// 38408 push    ax ;~ 1359:220F
cs=0x1359;eip=0x002210; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 38409 mov     ax, [bp+arg_4] ;~ 1359:2210
cs=0x1359;eip=0x002213; 	T(CWD);	// 38410 cwd ;~ 1359:2213
cs=0x1359;eip=0x002214; 	X(PUSH(dx));	// 38411 push    dx ;~ 1359:2214
cs=0x1359;eip=0x002215; 	X(PUSH(ax));	// 38412 push    ax ;~ 1359:2215
cs=0x1359;eip=0x002216; 	J(CALLF(__aflmul,0));	// 38413 call    __aFlmul ;~ 1359:2216
cs=0x1359;eip=0x00221b; 	X(PUSH(dx));	// 38414 push    dx ;~ 1359:221B
cs=0x1359;eip=0x00221c; 	X(PUSH(ax));	// 38415 push    ax ;~ 1359:221C
cs=0x1359;eip=0x00221d; 	J(CALLF(__afldiv,0));	// 38416 call    __aFldiv ;~ 1359:221D
cs=0x1359;eip=0x002222; 	T(MOV(di, ax));	// 38417 mov     di, ax ;~ 1359:2222
loc_23d94:
	// 6928 
cs=0x1359;eip=0x002224; 	T(MOV(al, byte_4432a));	// 38420 mov     al, byte_4432A ;~ 1359:2224
cs=0x1359;eip=0x002227; 	T(CBW);	// 38421 cbw ;~ 1359:2227
cs=0x1359;eip=0x002228; 	T(SHL(ax, 1));	// 38422 shl     ax, 1 ;~ 1359:2228
cs=0x1359;eip=0x00222a; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 38423 mov     [bp+var_44], ax ;~ 1359:222A
cs=0x1359;eip=0x00222d; 	T(MOV(bx, ax));	// 38424 mov     bx, ax ;~ 1359:222D
cs=0x1359;eip=0x00222f; 	T(CMP(*(dw*)(((db*)&word_40e76)+bx), si));	// 38425 cmp     word_40E76[bx], si ;~ 1359:222F
cs=0x1359;eip=0x002233; 	J(JNZ(loc_23dab));	// 38426 jnz     short loc_23DAB ;~ 1359:2233
cs=0x1359;eip=0x002235; 	T(CMP(*(dw*)(((db*)&word_40e04)+bx), di));	// 38427 cmp     word_40E04[bx], di ;~ 1359:2235
cs=0x1359;eip=0x002239; 	J(JZ(loc_23e1a));	// 38428 jz      short loc_23E1A ;~ 1359:2239
loc_23dab:
	// 6929 
cs=0x1359;eip=0x00223b; 	J(CALLF(mouse_draw_opaque_check,0));	// 38431 call    mouse_draw_opaque_check ;~ 1359:223B
cs=0x1359;eip=0x002240; 	T(MOV(al, byte_4432a));	// 38432 mov     al, byte_4432A ;~ 1359:2240
cs=0x1359;eip=0x002243; 	T(CBW);	// 38433 cbw ;~ 1359:2243
cs=0x1359;eip=0x002244; 	T(SHL(ax, 1));	// 38434 shl     ax, 1 ;~ 1359:2244
cs=0x1359;eip=0x002246; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 38435 mov     [bp+var_44], ax ;~ 1359:2246
cs=0x1359;eip=0x002249; 	T(MOV(bx, ax));	// 38436 mov     bx, ax ;~ 1359:2249
cs=0x1359;eip=0x00224b; 	X(MOV(*(dw*)(((db*)&word_40e76)+bx), si));	// 38437 mov     word_40E76[bx], si ;~ 1359:224B
cs=0x1359;eip=0x00224f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_44))));	// 38438 mov     bx, [bp+var_44] ;~ 1359:224F
cs=0x1359;eip=0x002252; 	X(MOV(*(dw*)(((db*)&word_40e04)+bx), di));	// 38439 mov     word_40E04[bx], di ;~ 1359:2252
cs=0x1359;eip=0x002256; 	X(PUSH(word_407fc));	// 38440 push    word_407FC ;~ 1359:2256
cs=0x1359;eip=0x00225a; 	T(MOV(ax, 6));	// 38441 mov     ax, 6 ;~ 1359:225A
cs=0x1359;eip=0x00225d; 	X(PUSH(ax));	// 38442 push    ax ;~ 1359:225D
cs=0x1359;eip=0x00225e; 	T(MOV(ax, 0x74));	// 38443 mov     ax, 74h ; 't' ;~ 1359:225E
cs=0x1359;eip=0x002261; 	X(PUSH(ax));	// 38444 push    ax ;~ 1359:2261
cs=0x1359;eip=0x002262; 	T(MOV(ax, 0x0B1));	// 38445 mov     ax, 0B1h ; '±' ;~ 1359:2262
cs=0x1359;eip=0x002265; 	X(PUSH(ax));	// 38446 push    ax ;~ 1359:2265
cs=0x1359;eip=0x002266; 	T(MOV(ax, 0x9A));	// 38447 mov     ax, 9Ah ; 'š' ;~ 1359:2266
cs=0x1359;eip=0x002269; 	X(PUSH(ax));	// 38448 push    ax ;~ 1359:2269
cs=0x1359;eip=0x00226a; 	J(CALLF(sprite_1_unk,0));	// 38449 call    sprite_1_unk ;~ 1359:226A
cs=0x1359;eip=0x00226f; 	T(ADD(sp, 0x0A));	// 38450 add     sp, 0Ah ;~ 1359:226F
cs=0x1359;eip=0x002272; 	X(PUSH(dialog_fnt_colour));	// 38451 push    dialog_fnt_colour ;~ 1359:2272
cs=0x1359;eip=0x002276; 	T(MOV(ax, 6));	// 38452 mov     ax, 6 ;~ 1359:2276
cs=0x1359;eip=0x002279; 	X(PUSH(ax));	// 38453 push    ax ;~ 1359:2279
cs=0x1359;eip=0x00227a; 	X(PUSH(ax));	// 38454 push    ax ;~ 1359:227A
cs=0x1359;eip=0x00227b; 	T(MOV(ax, 0x0B1));	// 38455 mov     ax, 0B1h ; '±' ;~ 1359:227B
cs=0x1359;eip=0x00227e; 	X(PUSH(ax));	// 38456 push    ax ;~ 1359:227E
cs=0x1359;eip=0x00227f; 	T(ax = si+0x9A);	// 38457 lea     ax, [si+9Ah] ;~ 1359:227F
cs=0x1359;eip=0x002283; 	X(PUSH(ax));	// 38458 push    ax ;~ 1359:2283
cs=0x1359;eip=0x002284; 	J(CALLF(sprite_1_unk,0));	// 38459 call    sprite_1_unk ;~ 1359:2284
cs=0x1359;eip=0x002289; 	T(ADD(sp, 0x0A));	// 38460 add     sp, 0Ah ;~ 1359:2289
cs=0x1359;eip=0x00228c; 	X(PUSH(word_407fe));	// 38461 push    word_407FE ;~ 1359:228C
cs=0x1359;eip=0x002290; 	T(MOV(ax, 0x0B6));	// 38462 mov     ax, 0B6h ; '¶' ;~ 1359:2290
cs=0x1359;eip=0x002293; 	X(PUSH(ax));	// 38463 push    ax ;~ 1359:2293
cs=0x1359;eip=0x002294; 	T(ax = di+0x9F);	// 38464 lea     ax, [di+9Fh] ;~ 1359:2294
cs=0x1359;eip=0x002298; 	X(PUSH(ax));	// 38465 push    ax ;~ 1359:2298
cs=0x1359;eip=0x002299; 	T(MOV(ax, 0x0B1));	// 38466 mov     ax, 0B1h ; '±' ;~ 1359:2299
cs=0x1359;eip=0x00229c; 	X(PUSH(ax));	// 38467 push    ax ;~ 1359:229C
cs=0x1359;eip=0x00229d; 	T(ax = di+0x9A);	// 38468 lea     ax, [di+9Ah] ;~ 1359:229D
cs=0x1359;eip=0x0022a1; 	X(PUSH(ax));	// 38469 push    ax ;~ 1359:22A1
cs=0x1359;eip=0x0022a2; 	J(CALLF(sprite_1_unk4,0));	// 38470 call    sprite_1_unk4 ;~ 1359:22A2
cs=0x1359;eip=0x0022a7; 	T(ADD(sp, 0x0A));	// 38471 add     sp, 0Ah ;~ 1359:22A7
loc_23e1a:
	// 6930 
cs=0x1359;eip=0x0022aa; 	T(MOV(al, byte_4432a));	// 38474 mov     al, byte_4432A ;~ 1359:22AA
cs=0x1359;eip=0x0022ad; 	T(CBW);	// 38475 cbw ;~ 1359:22AD
cs=0x1359;eip=0x0022ae; 	T(MOV(bx, ax));	// 38476 mov     bx, ax ;~ 1359:22AE
cs=0x1359;eip=0x0022b0; 	T(MOV(al, byte_3e9db));	// 38477 mov     al, byte_3E9DB ;~ 1359:22B0
cs=0x1359;eip=0x0022b3; 	T(CMP(*((&byte_40e08)+bx), al));	// 38478 cmp     byte_40E08[bx], al ;~ 1359:22B3
cs=0x1359;eip=0x0022b7; 	J(JZ(loc_23e68));	// 38479 jz      short loc_23E68 ;~ 1359:22B7
loc_23e29:
	// 6931 
cs=0x1359;eip=0x0022b9; 	J(CALLF(mouse_draw_opaque_check,0));	// 38482 call    mouse_draw_opaque_check ;~ 1359:22B9
cs=0x1359;eip=0x0022be; 	T(MOV(al, byte_4432a));	// 38483 mov     al, byte_4432A ;~ 1359:22BE
cs=0x1359;eip=0x0022c1; 	T(CBW);	// 38484 cbw ;~ 1359:22C1
cs=0x1359;eip=0x0022c2; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 38485 mov     [bp+var_44], ax ;~ 1359:22C2
cs=0x1359;eip=0x0022c5; 	T(MOV(bx, ax));	// 38486 mov     bx, ax ;~ 1359:22C5
cs=0x1359;eip=0x0022c7; 	T(CMP(*((&byte_40e08)+bx), 0x0FF));	// 38487 cmp     byte_40E08[bx], 0FFh ;~ 1359:22C7
cs=0x1359;eip=0x0022cc; 	J(JNZ(loc_23e41));	// 38488 jnz     short loc_23E41 ;~ 1359:22CC
cs=0x1359;eip=0x0022ce; 	J(JMP(loc_23ec6));	// 38489 jmp     loc_23EC6 ;~ 1359:22CE
loc_23e41:
	// 6932 
cs=0x1359;eip=0x0022d1; 	T(MOV(al, *((&byte_40e08)+bx)));	// 38493 mov     al, byte_40E08[bx] ;~ 1359:22D1
cs=0x1359;eip=0x0022d5; 	T(CBW);	// 38494 cbw ;~ 1359:22D5
cs=0x1359;eip=0x0022d6; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), ax));	// 38495 mov     [bp+var_42], ax ;~ 1359:22D6
cs=0x1359;eip=0x0022d9; 	T(MOV(bx, ax));	// 38496 mov     bx, ax ;~ 1359:22D9
cs=0x1359;eip=0x0022db; 	T(SHL(bx, 1));	// 38497 shl     bx, 1 ;~ 1359:22DB
cs=0x1359;eip=0x0022dd; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_44))));	// 38498 add     bx, [bp+var_44] ;~ 1359:22DD
cs=0x1359;eip=0x0022e0; 	T(CMP(*((&byte_40e7a)+bx), 0));	// 38499 cmp     byte_40E7A[bx], 0 ;~ 1359:22E0
cs=0x1359;eip=0x0022e5; 	J(JZ(loc_23e9a));	// 38500 jz      short loc_23E9A ;~ 1359:22E5
cs=0x1359;eip=0x0022e7; 	T(MOV(bx, ax));	// 38501 mov     bx, ax ;~ 1359:22E7
cs=0x1359;eip=0x0022e9; 	T(SHL(bx, 1));	// 38502 shl     bx, 1 ;~ 1359:22E9
cs=0x1359;eip=0x0022eb; 	T(SHL(bx, 1));	// 38503 shl     bx, 1 ;~ 1359:22EB
cs=0x1359;eip=0x0022ed; 	X(PUSH(*(dw*)(((db*)&word_40e48)+bx)));	// 38504 push    word_40E48[bx] ;~ 1359:22ED
cs=0x1359;eip=0x0022f1; 	X(PUSH(*(dw*)(((db*)&word_40e46)+bx)));	// 38505 push    word_40E46[bx] ;~ 1359:22F1
cs=0x1359;eip=0x0022f5; 	J(JMP(loc_23eb3));	// 38506 jmp     short loc_23EB3 ;~ 1359:22F5
loc_23e68:
	// 6933 
cs=0x1359;eip=0x0022f8; 	X(MOV(*(raddr(ss,bp+var_20)), 0));	// 38511 mov     [bp+var_20], 0 ;~ 1359:22F8
cs=0x1359;eip=0x0022fc; 	J(JMP(loc_23e71));	// 38512 jmp     short loc_23E71 ;~ 1359:22FC
loc_23e6e:
	// 6934 
cs=0x1359;eip=0x0022fe; 	X(INC(*(raddr(ss,bp+var_20))));	// 38516 inc     [bp+var_20] ;~ 1359:22FE
loc_23e71:
	// 6935 
cs=0x1359;eip=0x002301; 	T(CMP(*(raddr(ss,bp+var_20)), 7));	// 38519 cmp     [bp+var_20], 7 ;~ 1359:2301
cs=0x1359;eip=0x002305; 	J(JL(loc_23e7a));	// 38520 jl      short loc_23E7A ;~ 1359:2305
cs=0x1359;eip=0x002307; 	J(JMP(loc_23fb0));	// 38521 jmp     loc_23FB0 ;~ 1359:2307
loc_23e7a:
	// 6936 
cs=0x1359;eip=0x00230a; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 38525 mov     al, [bp+var_20] ;~ 1359:230A
cs=0x1359;eip=0x00230d; 	T(CBW);	// 38526 cbw ;~ 1359:230D
cs=0x1359;eip=0x00230e; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 38527 mov     [bp+var_44], ax ;~ 1359:230E
cs=0x1359;eip=0x002311; 	T(MOV(bx, ax));	// 38528 mov     bx, ax ;~ 1359:2311
cs=0x1359;eip=0x002313; 	T(MOV(al, *((&byte_40e6a)+bx)));	// 38529 mov     al, byte_40E6A[bx] ;~ 1359:2313
cs=0x1359;eip=0x002317; 	T(MOV(cx, ax));	// 38530 mov     cx, ax ;~ 1359:2317
cs=0x1359;eip=0x002319; 	T(MOV(al, byte_4432a));	// 38531 mov     al, byte_4432A ;~ 1359:2319
cs=0x1359;eip=0x00231c; 	T(CBW);	// 38532 cbw ;~ 1359:231C
cs=0x1359;eip=0x00231d; 	T(SHL(bx, 1));	// 38533 shl     bx, 1 ;~ 1359:231D
cs=0x1359;eip=0x00231f; 	T(ADD(bx, ax));	// 38534 add     bx, ax ;~ 1359:231F
cs=0x1359;eip=0x002321; 	T(CMP(*((&byte_40e7a)+bx), cl));	// 38535 cmp     byte_40E7A[bx], cl ;~ 1359:2321
cs=0x1359;eip=0x002325; 	J(JZ(loc_23e6e));	// 38536 jz      short loc_23E6E ;~ 1359:2325
cs=0x1359;eip=0x002327; 	J(JMP(loc_23e29));	// 38537 jmp     short loc_23E29 ;~ 1359:2327
loc_23e9a:
	// 6937 
cs=0x1359;eip=0x00232a; 	T(MOV(al, byte_4432a));	// 38542 mov     al, byte_4432A ;~ 1359:232A
cs=0x1359;eip=0x00232d; 	T(CBW);	// 38543 cbw ;~ 1359:232D
cs=0x1359;eip=0x00232e; 	T(MOV(bx, ax));	// 38544 mov     bx, ax ;~ 1359:232E
cs=0x1359;eip=0x002330; 	T(MOV(al, *((&byte_40e08)+bx)));	// 38545 mov     al, byte_40E08[bx] ;~ 1359:2330
cs=0x1359;eip=0x002334; 	T(CBW);	// 38546 cbw ;~ 1359:2334
cs=0x1359;eip=0x002335; 	T(MOV(bx, ax));	// 38547 mov     bx, ax ;~ 1359:2335
cs=0x1359;eip=0x002337; 	T(SHL(bx, 1));	// 38548 shl     bx, 1 ;~ 1359:2337
cs=0x1359;eip=0x002339; 	T(SHL(bx, 1));	// 38549 shl     bx, 1 ;~ 1359:2339
cs=0x1359;eip=0x00233b; 	X(PUSH(*(dw*)((((db*)rplyshapes)+0x16)+bx)));	// 38550 push    (rplyshapes+16h)[bx] ;~ 1359:233B
cs=0x1359;eip=0x00233f; 	X(PUSH(*(dw*)((((db*)rplyshapes)+0x14)+bx)));	// 38551 push    (rplyshapes+14h)[bx] ;~ 1359:233F
loc_23eb3:
	// 6938 
cs=0x1359;eip=0x002343; 	J(CALLF(shape2d_op_unk,0));	// 38554 call    shape2d_op_unk ;~ 1359:2343
cs=0x1359;eip=0x002348; 	T(ADD(sp, 4));	// 38555 add     sp, 4 ;~ 1359:2348
cs=0x1359;eip=0x00234b; 	T(MOV(al, byte_4432a));	// 38556 mov     al, byte_4432A ;~ 1359:234B
cs=0x1359;eip=0x00234e; 	T(CBW);	// 38557 cbw ;~ 1359:234E
cs=0x1359;eip=0x00234f; 	T(MOV(bx, ax));	// 38558 mov     bx, ax ;~ 1359:234F
cs=0x1359;eip=0x002351; 	X(MOV(*((&byte_40e08)+bx), 0x0FF));	// 38559 mov     byte_40E08[bx], 0FFh ;~ 1359:2351
loc_23ec6:
	// 6939 
cs=0x1359;eip=0x002356; 	X(MOV(*(raddr(ss,bp+var_20)), 0));	// 38562 mov     [bp+var_20], 0 ;~ 1359:2356
loc_23eca:
	// 6940 
cs=0x1359;eip=0x00235a; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 38565 mov     al, [bp+var_20] ;~ 1359:235A
cs=0x1359;eip=0x00235d; 	T(CBW);	// 38566 cbw ;~ 1359:235D
cs=0x1359;eip=0x00235e; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 38567 mov     [bp+var_44], ax ;~ 1359:235E
cs=0x1359;eip=0x002361; 	T(MOV(bx, ax));	// 38568 mov     bx, ax ;~ 1359:2361
cs=0x1359;eip=0x002363; 	T(CMP(*((&byte_40e6a)+bx), 0));	// 38569 cmp     byte_40E6A[bx], 0 ;~ 1359:2363
cs=0x1359;eip=0x002368; 	J(JNZ(loc_23f18));	// 38570 jnz     short loc_23F18 ;~ 1359:2368
cs=0x1359;eip=0x00236a; 	T(MOV(al, *((&byte_40e6a)+bx)));	// 38571 mov     al, byte_40E6A[bx] ;~ 1359:236A
cs=0x1359;eip=0x00236e; 	T(MOV(cx, ax));	// 38572 mov     cx, ax ;~ 1359:236E
cs=0x1359;eip=0x002370; 	T(MOV(al, byte_4432a));	// 38573 mov     al, byte_4432A ;~ 1359:2370
cs=0x1359;eip=0x002373; 	T(CBW);	// 38574 cbw ;~ 1359:2373
cs=0x1359;eip=0x002374; 	T(SHL(bx, 1));	// 38575 shl     bx, 1 ;~ 1359:2374
cs=0x1359;eip=0x002376; 	T(ADD(bx, ax));	// 38576 add     bx, ax ;~ 1359:2376
cs=0x1359;eip=0x002378; 	T(CMP(*((&byte_40e7a)+bx), cl));	// 38577 cmp     byte_40E7A[bx], cl ;~ 1359:2378
cs=0x1359;eip=0x00237c; 	J(JZ(loc_23f18));	// 38578 jz      short loc_23F18 ;~ 1359:237C
cs=0x1359;eip=0x00237e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_44))));	// 38579 mov     bx, [bp+var_44] ;~ 1359:237E
cs=0x1359;eip=0x002381; 	T(SHL(bx, 1));	// 38580 shl     bx, 1 ;~ 1359:2381
cs=0x1359;eip=0x002383; 	T(SHL(bx, 1));	// 38581 shl     bx, 1 ;~ 1359:2383
cs=0x1359;eip=0x002385; 	X(PUSH(*(dw*)((((db*)rplyshapes)+0x16)+bx)));	// 38582 push    (rplyshapes+16h)[bx] ;~ 1359:2385
cs=0x1359;eip=0x002389; 	X(PUSH(*(dw*)((((db*)rplyshapes)+0x14)+bx)));	// 38583 push    (rplyshapes+14h)[bx] ;~ 1359:2389
cs=0x1359;eip=0x00238d; 	J(CALLF(shape2d_op_unk,0));	// 38584 call    shape2d_op_unk ;~ 1359:238D
cs=0x1359;eip=0x002392; 	T(ADD(sp, 4));	// 38585 add     sp, 4 ;~ 1359:2392
cs=0x1359;eip=0x002395; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 38586 mov     al, [bp+var_20] ;~ 1359:2395
cs=0x1359;eip=0x002398; 	T(CBW);	// 38587 cbw ;~ 1359:2398
cs=0x1359;eip=0x002399; 	T(MOV(bx, ax));	// 38588 mov     bx, ax ;~ 1359:2399
cs=0x1359;eip=0x00239b; 	T(SHL(bx, 1));	// 38589 shl     bx, 1 ;~ 1359:239B
cs=0x1359;eip=0x00239d; 	T(MOV(al, byte_4432a));	// 38590 mov     al, byte_4432A ;~ 1359:239D
cs=0x1359;eip=0x0023a0; 	T(CBW);	// 38591 cbw ;~ 1359:23A0
cs=0x1359;eip=0x0023a1; 	T(ADD(bx, ax));	// 38592 add     bx, ax ;~ 1359:23A1
cs=0x1359;eip=0x0023a3; 	X(MOV(*((&byte_40e7a)+bx), 0));	// 38593 mov     byte_40E7A[bx], 0 ;~ 1359:23A3
loc_23f18:
	// 6941 
cs=0x1359;eip=0x0023a8; 	X(INC(*(raddr(ss,bp+var_20))));	// 38597 inc     [bp+var_20] ;~ 1359:23A8
cs=0x1359;eip=0x0023ab; 	T(CMP(*(raddr(ss,bp+var_20)), 7));	// 38598 cmp     [bp+var_20], 7 ;~ 1359:23AB
cs=0x1359;eip=0x0023af; 	J(JL(loc_23eca));	// 38599 jl      short loc_23ECA ;~ 1359:23AF
cs=0x1359;eip=0x0023b1; 	X(MOV(*(raddr(ss,bp+var_20)), 0));	// 38600 mov     [bp+var_20], 0 ;~ 1359:23B1
loc_23f25:
	// 6942 
cs=0x1359;eip=0x0023b5; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 38603 mov     al, [bp+var_20] ;~ 1359:23B5
cs=0x1359;eip=0x0023b8; 	T(CBW);	// 38604 cbw ;~ 1359:23B8
cs=0x1359;eip=0x0023b9; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 38605 mov     [bp+var_44], ax ;~ 1359:23B9
cs=0x1359;eip=0x0023bc; 	T(MOV(bx, ax));	// 38606 mov     bx, ax ;~ 1359:23BC
cs=0x1359;eip=0x0023be; 	T(CMP(*((&byte_40e6a)+bx), 0));	// 38607 cmp     byte_40E6A[bx], 0 ;~ 1359:23BE
cs=0x1359;eip=0x0023c3; 	J(JZ(loc_23f6c));	// 38608 jz      short loc_23F6C ;~ 1359:23C3
cs=0x1359;eip=0x0023c5; 	T(MOV(al, byte_4432a));	// 38609 mov     al, byte_4432A ;~ 1359:23C5
cs=0x1359;eip=0x0023c8; 	T(CBW);	// 38610 cbw ;~ 1359:23C8
cs=0x1359;eip=0x0023c9; 	T(SHL(bx, 1));	// 38611 shl     bx, 1 ;~ 1359:23C9
cs=0x1359;eip=0x0023cb; 	T(ADD(bx, ax));	// 38612 add     bx, ax ;~ 1359:23CB
cs=0x1359;eip=0x0023cd; 	X(MOV(*((&byte_40e7a)+bx), 1));	// 38613 mov     byte_40E7A[bx], 1 ;~ 1359:23CD
cs=0x1359;eip=0x0023d2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_44))));	// 38614 mov     bx, [bp+var_44] ;~ 1359:23D2
cs=0x1359;eip=0x0023d5; 	T(SHL(bx, 1));	// 38615 shl     bx, 1 ;~ 1359:23D5
cs=0x1359;eip=0x0023d7; 	T(SHL(bx, 1));	// 38616 shl     bx, 1 ;~ 1359:23D7
cs=0x1359;eip=0x0023d9; 	X(PUSH(*(dw*)(((db*)&word_40e48)+bx)));	// 38617 push    word_40E48[bx] ;~ 1359:23D9
cs=0x1359;eip=0x0023dd; 	X(PUSH(*(dw*)(((db*)&word_40e46)+bx)));	// 38618 push    word_40E46[bx] ;~ 1359:23DD
cs=0x1359;eip=0x0023e1; 	J(CALLF(shape2d_op_unk,0));	// 38619 call    shape2d_op_unk ;~ 1359:23E1
cs=0x1359;eip=0x0023e6; 	T(ADD(sp, 4));	// 38620 add     sp, 4 ;~ 1359:23E6
cs=0x1359;eip=0x0023e9; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 38621 mov     al, [bp+var_20] ;~ 1359:23E9
cs=0x1359;eip=0x0023ec; 	T(CBW);	// 38622 cbw ;~ 1359:23EC
cs=0x1359;eip=0x0023ed; 	T(MOV(bx, ax));	// 38623 mov     bx, ax ;~ 1359:23ED
cs=0x1359;eip=0x0023ef; 	T(SHL(bx, 1));	// 38624 shl     bx, 1 ;~ 1359:23EF
cs=0x1359;eip=0x0023f1; 	T(MOV(al, byte_4432a));	// 38625 mov     al, byte_4432A ;~ 1359:23F1
cs=0x1359;eip=0x0023f4; 	T(CBW);	// 38626 cbw ;~ 1359:23F4
cs=0x1359;eip=0x0023f5; 	T(ADD(bx, ax));	// 38627 add     bx, ax ;~ 1359:23F5
cs=0x1359;eip=0x0023f7; 	X(MOV(*((&byte_40e7a)+bx), 1));	// 38628 mov     byte_40E7A[bx], 1 ;~ 1359:23F7
loc_23f6c:
	// 6943 
cs=0x1359;eip=0x0023fc; 	X(INC(*(raddr(ss,bp+var_20))));	// 38631 inc     [bp+var_20] ;~ 1359:23FC
cs=0x1359;eip=0x0023ff; 	T(CMP(*(raddr(ss,bp+var_20)), 7));	// 38632 cmp     [bp+var_20], 7 ;~ 1359:23FF
cs=0x1359;eip=0x002403; 	J(JL(loc_23f25));	// 38633 jl      short loc_23F25 ;~ 1359:2403
cs=0x1359;eip=0x002405; 	T(MOV(al, byte_4432a));	// 38634 mov     al, byte_4432A ;~ 1359:2405
cs=0x1359;eip=0x002408; 	T(CBW);	// 38635 cbw ;~ 1359:2408
cs=0x1359;eip=0x002409; 	T(MOV(bx, ax));	// 38636 mov     bx, ax ;~ 1359:2409
cs=0x1359;eip=0x00240b; 	T(MOV(al, byte_3e9db));	// 38637 mov     al, byte_3E9DB ;~ 1359:240B
cs=0x1359;eip=0x00240e; 	X(MOV(*((&byte_40e08)+bx), al));	// 38638 mov     byte_40E08[bx], al ;~ 1359:240E
cs=0x1359;eip=0x002412; 	T(CMP(byte_3e9db, 0x0FF));	// 38639 cmp     byte_3E9DB, 0FFh ;~ 1359:2412
cs=0x1359;eip=0x002417; 	J(JZ(loc_23fb0));	// 38640 jz      short loc_23FB0 ;~ 1359:2417
cs=0x1359;eip=0x002419; 	T(MOV(al, byte_3e9db));	// 38641 mov     al, byte_3E9DB ;~ 1359:2419
cs=0x1359;eip=0x00241c; 	T(CBW);	// 38642 cbw ;~ 1359:241C
cs=0x1359;eip=0x00241d; 	T(SHL(ax, 1));	// 38643 shl     ax, 1 ;~ 1359:241D
cs=0x1359;eip=0x00241f; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 38644 mov     [bp+var_44], ax ;~ 1359:241F
cs=0x1359;eip=0x002422; 	X(PUSH(word_407fe));	// 38645 push    word_407FE ;~ 1359:2422
cs=0x1359;eip=0x002426; 	T(MOV(bx, ax));	// 38646 mov     bx, ax ;~ 1359:2426
cs=0x1359;eip=0x002428; 	X(PUSH(*(dw*)(((db*)&game_camera_buttons_y2)+bx)));	// 38647 push    game_camera_buttons_y2[bx] ;~ 1359:2428
cs=0x1359;eip=0x00242c; 	X(PUSH(*(dw*)(((db*)&game_camera_buttons_x2)+bx)));	// 38648 push    game_camera_buttons_x2[bx] ;~ 1359:242C
cs=0x1359;eip=0x002430; 	X(PUSH(*(dw*)(((db*)&game_camera_buttons_y1)+bx)));	// 38649 push    game_camera_buttons_y1[bx] ;~ 1359:2430
cs=0x1359;eip=0x002434; 	X(PUSH(*(dw*)(((db*)&game_camera_buttons_x1)+bx)));	// 38650 push    game_camera_buttons_x1[bx] ;~ 1359:2434
cs=0x1359;eip=0x002438; 	J(CALLF(sprite_1_unk4,0));	// 38651 call    sprite_1_unk4 ;~ 1359:2438
cs=0x1359;eip=0x00243d; 	T(ADD(sp, 0x0A));	// 38652 add     sp, 0Ah ;~ 1359:243D
loc_23fb0:
	// 6944 
cs=0x1359;eip=0x002440; 	J(CALLF(mouse_draw_transparent_check,0));	// 38656 call    mouse_draw_transparent_check ;~ 1359:2440
cs=0x1359;eip=0x002445; 	J(JMP(loc_24d5e));	// 38657 jmp     loc_24D5E ;~ 1359:2445
loc_23fb8:
	// 6945 
cs=0x1359;eip=0x002448; 	T(MOV(al, cameramode));	// 38661 mov     al, cameramode ;~ 1359:2448
cs=0x1359;eip=0x00244b; 	T(CBW);	// 38662 cbw ;~ 1359:244B
cs=0x1359;eip=0x00244c; 	T(MOV(bx, ax));	// 38663 mov     bx, ax ;~ 1359:244C
cs=0x1359;eip=0x00244e; 	T(MOV(al, *((&game_camera_buttons_count)+bx)));	// 38664 mov     al, game_camera_buttons_count[bx] ;~ 1359:244E
cs=0x1359;eip=0x002452; 	X(MOV(*(db*)(raddr(ss,bp+var_44)), al));	// 38665 mov     byte ptr [bp+var_44], al ;~ 1359:2452
cs=0x1359;eip=0x002455; 	T(MOV(al, byte_3e9db));	// 38666 mov     al, byte_3E9DB ;~ 1359:2455
cs=0x1359;eip=0x002458; 	T(CMP(*(db*)(raddr(ss,bp+var_44)), al));	// 38667 cmp     byte ptr [bp+var_44], al ;~ 1359:2458
cs=0x1359;eip=0x00245b; 	J(JGE(loc_23fda));	// 38668 jge     short loc_23FDA ;~ 1359:245B
cs=0x1359;eip=0x00245d; 	T(CMP(cameramode, 2));	// 38669 cmp     cameramode, 2 ;~ 1359:245D
cs=0x1359;eip=0x002462; 	J(JZ(loc_23fda));	// 38670 jz      short loc_23FDA ;~ 1359:2462
cs=0x1359;eip=0x002464; 	T(MOV(al, *(db*)(raddr(ss,bp+var_44))));	// 38671 mov     al, byte ptr [bp+var_44] ;~ 1359:2464
cs=0x1359;eip=0x002467; 	X(MOV(byte_3e9db, al));	// 38672 mov     byte_3E9DB, al ;~ 1359:2467
loc_23fda:
	// 6946 
cs=0x1359;eip=0x00246a; 	J(CALLF(sprite_copy_2_to_1,0));	// 38676 call    sprite_copy_2_to_1 ;~ 1359:246A
cs=0x1359;eip=0x00246f; 	T(CMP(video_flag5_is0, 0));	// 38677 cmp     video_flag5_is0, 0 ;~ 1359:246F
cs=0x1359;eip=0x002474; 	J(JZ(loc_23fee));	// 38678 jz      short loc_23FEE ;~ 1359:2474
cs=0x1359;eip=0x002476; 	T(MOV(al, byte_44346));	// 38679 mov     al, byte_44346 ;~ 1359:2476
cs=0x1359;eip=0x002479; 	T(XOR(al, 1));	// 38680 xor     al, 1 ;~ 1359:2479
cs=0x1359;eip=0x00247b; 	X(MOV(byte_4432a, al));	// 38681 mov     byte_4432A, al ;~ 1359:247B
loc_23fee:
	// 6947 
cs=0x1359;eip=0x00247e; 	J(CALLF(timer_get_delta_alt,0));	// 38685 call    timer_get_delta_alt ;~ 1359:247E
cs=0x1359;eip=0x002483; 	X(PUSH(ax));	// 38686 push    ax ;~ 1359:2483
cs=0x1359;eip=0x002484; 	J(CALLF(input_checking,0));	// 38687 call    input_checking ;~ 1359:2484
cs=0x1359;eip=0x002489; 	T(ADD(sp, 2));	// 38688 add     sp, 2 ;~ 1359:2489
cs=0x1359;eip=0x00248c; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 38689 mov     [bp+var_16], ax ;~ 1359:248C
cs=0x1359;eip=0x00248f; 	T(MOV(ax, offset(dseg,game_camera_buttons_y2)));	// 38690 mov     ax, offset game_camera_buttons_y2 ;~ 1359:248F
cs=0x1359;eip=0x002492; 	X(PUSH(ax));	// 38691 push    ax ;~ 1359:2492
cs=0x1359;eip=0x002493; 	T(MOV(ax, offset(dseg,game_camera_buttons_y1)));	// 38692 mov     ax, offset game_camera_buttons_y1 ;~ 1359:2493
cs=0x1359;eip=0x002496; 	X(PUSH(ax));	// 38693 push    ax ;~ 1359:2496
cs=0x1359;eip=0x002497; 	T(MOV(ax, offset(dseg,game_camera_buttons_x2)));	// 38694 mov     ax, offset game_camera_buttons_x2 ;~ 1359:2497
cs=0x1359;eip=0x00249a; 	X(PUSH(ax));	// 38695 push    ax ;~ 1359:249A
cs=0x1359;eip=0x00249b; 	T(MOV(ax, offset(dseg,game_camera_buttons_x1)));	// 38696 mov     ax, offset game_camera_buttons_x1 ;~ 1359:249B
cs=0x1359;eip=0x00249e; 	X(PUSH(ax));	// 38697 push    ax ;~ 1359:249E
cs=0x1359;eip=0x00249f; 	T(MOV(al, cameramode));	// 38698 mov     al, cameramode ;~ 1359:249F
cs=0x1359;eip=0x0024a2; 	T(CBW);	// 38699 cbw ;~ 1359:24A2
cs=0x1359;eip=0x0024a3; 	T(MOV(bx, ax));	// 38700 mov     bx, ax ;~ 1359:24A3
cs=0x1359;eip=0x0024a5; 	T(MOV(al, *((&game_camera_buttons_count)+bx)));	// 38701 mov     al, game_camera_buttons_count[bx] ; get number of buttons by cameramode ;~ 1359:24A5
cs=0x1359;eip=0x0024a9; 	T(CBW);	// 38702 cbw ;~ 1359:24A9
cs=0x1359;eip=0x0024aa; 	T(INC(ax));	// 38703 inc     ax ;~ 1359:24AA
cs=0x1359;eip=0x0024ab; 	X(PUSH(ax));	// 38704 push    ax ;~ 1359:24AB
cs=0x1359;eip=0x0024ac; 	J(CALLF(mouse_multi_hittest,0));	// 38705 call    mouse_multi_hittest ;~ 1359:24AC
cs=0x1359;eip=0x0024b1; 	T(ADD(sp, 0x0A));	// 38706 add     sp, 0Ah ;~ 1359:24B1
cs=0x1359;eip=0x0024b4; 	X(MOV(*(raddr(ss,bp+var_20)), al));	// 38707 mov     [bp+var_20], al ;~ 1359:24B4
cs=0x1359;eip=0x0024b7; 	T(CMP(al, 0x0FF));	// 38708 cmp     al, 0FFh ;~ 1359:24B7
cs=0x1359;eip=0x0024b9; 	J(JNZ(loc_2402e));	// 38709 jnz     short loc_2402E ;~ 1359:24B9
cs=0x1359;eip=0x0024bb; 	J(JMP(loc_240d8));	// 38710 jmp     loc_240D8 ;~ 1359:24BB
loc_2402e:
	// 6948 
cs=0x1359;eip=0x0024be; 	T(MOV(al, byte_3e9db));	// 38714 mov     al, byte_3E9DB ;~ 1359:24BE
cs=0x1359;eip=0x0024c1; 	T(CMP(*(raddr(ss,bp+var_20)), al));	// 38715 cmp     [bp+var_20], al ;~ 1359:24C1
cs=0x1359;eip=0x0024c4; 	J(JZ(loc_24041));	// 38716 jz      short loc_24041 ;~ 1359:24C4
cs=0x1359;eip=0x0024c6; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0));	// 38717 cmp     [bp+var_16], 0 ;~ 1359:24C6
cs=0x1359;eip=0x0024ca; 	J(JNZ(loc_24041));	// 38718 jnz     short loc_24041 ;~ 1359:24CA
cs=0x1359;eip=0x0024cc; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 1));	// 38719 mov     [bp+var_16], 1 ;~ 1359:24CC
loc_24041:
	// 6949 
cs=0x1359;eip=0x0024d1; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 38723 mov     al, [bp+var_20] ;~ 1359:24D1
cs=0x1359;eip=0x0024d4; 	X(MOV(byte_3e9db, al));	// 38724 mov     byte_3E9DB, al ;~ 1359:24D4
cs=0x1359;eip=0x0024d7; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x20));	// 38725 cmp     [bp+var_16], 20h ; ' ' ;~ 1359:24D7
cs=0x1359;eip=0x0024db; 	J(JZ(loc_24056));	// 38726 jz      short loc_24056 ;~ 1359:24DB
cs=0x1359;eip=0x0024dd; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x0D));	// 38727 cmp     [bp+var_16], 0Dh ;~ 1359:24DD
cs=0x1359;eip=0x0024e1; 	J(JZ(loc_24056));	// 38728 jz      short loc_24056 ;~ 1359:24E1
cs=0x1359;eip=0x0024e3; 	J(JMP(loc_2410c));	// 38729 jmp     loc_2410C ;~ 1359:24E3
loc_24056:
	// 6950 
cs=0x1359;eip=0x0024e6; 	T(CMP(byte_3e9db, 7));	// 38734 cmp     byte_3E9DB, 7 ;~ 1359:24E6
cs=0x1359;eip=0x0024eb; 	J(JGE(loc_24060));	// 38735 jge     short loc_24060 ;~ 1359:24EB
cs=0x1359;eip=0x0024ed; 	J(JMP(loc_2410c));	// 38736 jmp     loc_2410C ;~ 1359:24ED
loc_24060:
	// 6951 
cs=0x1359;eip=0x0024f0; 	J(JNZ(loc_24082));	// 38740 jnz     short loc_24082 ;~ 1359:24F0
cs=0x1359;eip=0x0024f2; 	T(MOV(ax, word_3ea3a));	// 38741 mov     ax, word_3EA3A ;~ 1359:24F2
cs=0x1359;eip=0x0024f5; 	T(ADD(ax, word_3ea4c));	// 38742 add     ax, word_3EA4C ;~ 1359:24F5
cs=0x1359;eip=0x0024f9; 	T(SAR(ax, 1));	// 38743 sar     ax, 1 ;~ 1359:24F9
cs=0x1359;eip=0x0024fb; 	T(CMP(ax, mouse_ypos));	// 38744 cmp     ax, mouse_ypos ;~ 1359:24FB
cs=0x1359;eip=0x0024ff; 	J(JGE(loc_2407a));	// 38745 jge     short loc_2407A ;~ 1359:24FF
loc_24071:
	// 6952 
cs=0x1359;eip=0x002501; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0x5000));	// 38748 mov     [bp+var_16], 5000h ;~ 1359:2501
cs=0x1359;eip=0x002506; 	J(JMP(loc_2410c));	// 38749 jmp     loc_2410C ;~ 1359:2506
loc_2407a:
	// 6953 
cs=0x1359;eip=0x00250a; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0x4800));	// 38755 mov     [bp+var_16], 4800h ;~ 1359:250A
cs=0x1359;eip=0x00250f; 	J(JMP(loc_2410c));	// 38756 jmp     loc_2410C ;~ 1359:250F
loc_24082:
	// 6954 
cs=0x1359;eip=0x002512; 	T(MOV(ax, word_3ea3c));	// 38760 mov     ax, word_3EA3C ;~ 1359:2512
cs=0x1359;eip=0x002515; 	T(ADD(ax, word_3ea4e));	// 38761 add     ax, word_3EA4E ;~ 1359:2515
cs=0x1359;eip=0x002519; 	T(SAR(ax, 1));	// 38762 sar     ax, 1 ;~ 1359:2519
cs=0x1359;eip=0x00251b; 	T(SUB(ax, mouse_ypos));	// 38763 sub     ax, mouse_ypos ;~ 1359:251B
cs=0x1359;eip=0x00251f; 	X(PUSH(ax));	// 38764 push    ax ;~ 1359:251F
cs=0x1359;eip=0x002520; 	T(MOV(ax, mouse_xpos));	// 38765 mov     ax, mouse_xpos ;~ 1359:2520
cs=0x1359;eip=0x002523; 	T(MOV(cx, word_3ea18));	// 38766 mov     cx, word_3EA18 ;~ 1359:2523
cs=0x1359;eip=0x002527; 	T(ADD(cx, word_3ea2a));	// 38767 add     cx, word_3EA2A ;~ 1359:2527
cs=0x1359;eip=0x00252b; 	T(SAR(cx, 1));	// 38768 sar     cx, 1 ;~ 1359:252B
cs=0x1359;eip=0x00252d; 	T(SUB(ax, cx));	// 38769 sub     ax, cx ;~ 1359:252D
cs=0x1359;eip=0x00252f; 	X(PUSH(ax));	// 38770 push    ax ;~ 1359:252F
cs=0x1359;eip=0x002530; 	J(CALLF(polarangle,0));	// 38771 call    polarAngle ;~ 1359:2530
cs=0x1359;eip=0x002535; 	T(ADD(sp, 4));	// 38772 add     sp, 4 ;~ 1359:2535
cs=0x1359;eip=0x002538; 	T(ADD(ax, 0x80));	// 38773 add     ax, 80h ; '€' ;~ 1359:2538
cs=0x1359;eip=0x00253b; 	T(AND(ah, 3));	// 38774 and     ah, 3 ;~ 1359:253B
cs=0x1359;eip=0x00253e; 	T(MOV(cl, 8));	// 38775 mov     cl, 8 ;~ 1359:253E
cs=0x1359;eip=0x002540; 	T(SHR(ax, cl));	// 38776 shr     ax, cl ;~ 1359:2540
cs=0x1359;eip=0x002542; 	T(OR(ax, ax));	// 38777 or      ax, ax ;~ 1359:2542
cs=0x1359;eip=0x002544; 	J(JZ(loc_2407a));	// 38778 jz      short loc_2407A ;~ 1359:2544
cs=0x1359;eip=0x002546; 	T(CMP(ax, 1));	// 38779 cmp     ax, 1 ;~ 1359:2546
cs=0x1359;eip=0x002549; 	J(JZ(loc_240c8));	// 38780 jz      short loc_240C8 ;~ 1359:2549
cs=0x1359;eip=0x00254b; 	T(CMP(ax, 2));	// 38781 cmp     ax, 2 ;~ 1359:254B
cs=0x1359;eip=0x00254e; 	J(JZ(loc_24071));	// 38782 jz      short loc_24071 ;~ 1359:254E
cs=0x1359;eip=0x002550; 	T(CMP(ax, 3));	// 38783 cmp     ax, 3 ;~ 1359:2550
cs=0x1359;eip=0x002553; 	J(JZ(loc_240d0));	// 38784 jz      short loc_240D0 ;~ 1359:2553
cs=0x1359;eip=0x002555; 	J(JMP(loc_2410c));	// 38785 jmp     short loc_2410C ;~ 1359:2555
loc_240c8:
	// 6955 
cs=0x1359;eip=0x002558; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0x4D00));	// 38790 mov     [bp+var_16], 4D00h ;~ 1359:2558
cs=0x1359;eip=0x00255d; 	J(JMP(loc_2410c));	// 38791 jmp     short loc_2410C ;~ 1359:255D
loc_240d0:
	// 6956 
cs=0x1359;eip=0x002560; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0x4B00));	// 38796 mov     [bp+var_16], 4B00h ;~ 1359:2560
cs=0x1359;eip=0x002565; 	J(JMP(loc_2410c));	// 38797 jmp     short loc_2410C ;~ 1359:2565
loc_240d8:
	// 6957 
cs=0x1359;eip=0x002568; 	T(MOV(ax, offset(dseg,gameunk_button_y2)));	// 38802 mov     ax, offset gameunk_button_y2 ;~ 1359:2568
cs=0x1359;eip=0x00256b; 	X(PUSH(ax));	// 38803 push    ax ;~ 1359:256B
cs=0x1359;eip=0x00256c; 	T(MOV(ax, offset(dseg,gameunk_button_y1)));	// 38804 mov     ax, offset gameunk_button_y1 ;~ 1359:256C
cs=0x1359;eip=0x00256f; 	X(PUSH(ax));	// 38805 push    ax ;~ 1359:256F
cs=0x1359;eip=0x002570; 	T(MOV(ax, offset(dseg,gameunk_button_x2)));	// 38806 mov     ax, offset gameunk_button_x2 ;~ 1359:2570
cs=0x1359;eip=0x002573; 	X(PUSH(ax));	// 38807 push    ax ;~ 1359:2573
cs=0x1359;eip=0x002574; 	T(MOV(ax, offset(dseg,gameunk_button_x1)));	// 38808 mov     ax, offset gameunk_button_x1 ;~ 1359:2574
cs=0x1359;eip=0x002577; 	X(PUSH(ax));	// 38809 push    ax ;~ 1359:2577
cs=0x1359;eip=0x002578; 	T(MOV(ax, 1));	// 38810 mov     ax, 1 ;~ 1359:2578
cs=0x1359;eip=0x00257b; 	X(PUSH(ax));	// 38811 push    ax ;~ 1359:257B
cs=0x1359;eip=0x00257c; 	J(CALLF(mouse_multi_hittest,0));	// 38812 call    mouse_multi_hittest ;~ 1359:257C
cs=0x1359;eip=0x002581; 	T(ADD(sp, 0x0A));	// 38813 add     sp, 0Ah ;~ 1359:2581
cs=0x1359;eip=0x002584; 	X(MOV(*(raddr(ss,bp+var_20)), al));	// 38814 mov     [bp+var_20], al ;~ 1359:2584
cs=0x1359;eip=0x002587; 	T(OR(al, al));	// 38815 or      al, al ;~ 1359:2587
cs=0x1359;eip=0x002589; 	J(JNZ(loc_2410c));	// 38816 jnz     short loc_2410C ;~ 1359:2589
cs=0x1359;eip=0x00258b; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x20));	// 38817 cmp     [bp+var_16], 20h ; ' ' ;~ 1359:258B
cs=0x1359;eip=0x00258f; 	J(JZ(loc_24107));	// 38818 jz      short loc_24107 ;~ 1359:258F
cs=0x1359;eip=0x002591; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x0D));	// 38819 cmp     [bp+var_16], 0Dh ;~ 1359:2591
cs=0x1359;eip=0x002595; 	J(JNZ(loc_2410c));	// 38820 jnz     short loc_2410C ;~ 1359:2595
loc_24107:
	// 6958 
cs=0x1359;eip=0x002597; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0x63));	// 38823 mov     [bp+var_16], 63h ; 'c' ;~ 1359:2597
loc_2410c:
	// 6959 
cs=0x1359;eip=0x00259c; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0));	// 38827 cmp     [bp+var_16], 0 ;~ 1359:259C
cs=0x1359;eip=0x0025a0; 	J(JZ(loc_24129));	// 38828 jz      short loc_24129 ;~ 1359:25A0
cs=0x1359;eip=0x0025a2; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x1B));	// 38829 cmp     [bp+var_16], 1Bh ;~ 1359:25A2
cs=0x1359;eip=0x0025a6; 	J(JZ(loc_24129));	// 38830 jz      short loc_24129 ;~ 1359:25A6
cs=0x1359;eip=0x0025a8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 38831 push    [bp+var_16] ;~ 1359:25A8
cs=0x1359;eip=0x0025ab; 	X(PUSH(cs));	// 38832 push    cs ;~ 1359:25AB
cs=0x1359;eip=0x0025ac; 	J(CALL(handle_ingame_kb_shortcuts,0));	// 38833 call    near ptr handle_ingame_kb_shortcuts ;~ 1359:25AC
cs=0x1359;eip=0x0025af; 	T(ADD(sp, 2));	// 38834 add     sp, 2 ;~ 1359:25AF
cs=0x1359;eip=0x0025b2; 	T(OR(al, al));	// 38835 or      al, al ;~ 1359:25B2
cs=0x1359;eip=0x0025b4; 	J(JZ(loc_24129));	// 38836 jz      short loc_24129 ;~ 1359:25B4
cs=0x1359;eip=0x0025b6; 	J(JMP(loc_24d5e));	// 38837 jmp     loc_24D5E ;~ 1359:25B6
loc_24129:
	// 6960 
cs=0x1359;eip=0x0025b9; 	T(CMP(is_in_replay, 0));	// 38842 cmp     is_in_replay, 0 ;~ 1359:25B9
cs=0x1359;eip=0x0025be; 	J(JNZ(loc_2415a));	// 38843 jnz     short loc_2415A ;~ 1359:25BE
cs=0x1359;eip=0x0025c0; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0));	// 38844 cmp     [bp+var_16], 0 ;~ 1359:25C0
cs=0x1359;eip=0x0025c4; 	J(JNZ(loc_2415a));	// 38845 jnz     short loc_2415A ;~ 1359:25C4
cs=0x1359;eip=0x0025c6; 	T(CMP(replaybar_enabled, 0));	// 38846 cmp     replaybar_enabled, 0 ;~ 1359:25C6
cs=0x1359;eip=0x0025cb; 	J(JNZ(loc_24140));	// 38847 jnz     short loc_24140 ;~ 1359:25CB
cs=0x1359;eip=0x0025cd; 	J(JMP(loc_24d5e));	// 38848 jmp     loc_24D5E ;~ 1359:25CD
loc_24140:
	// 6961 
cs=0x1359;eip=0x0025d0; 	X(PUSH(word_445d4));	// 38853 push    word_445D4 ;~ 1359:25D0
cs=0x1359;eip=0x0025d4; 	X(PUSH(word_445d4));	// 38854 push    word_445D4 ;~ 1359:25D4
cs=0x1359;eip=0x0025d8; 	T(MOV(ax, 1));	// 38855 mov     ax, 1 ;~ 1359:25D8
cs=0x1359;eip=0x0025db; 	X(PUSH(ax));	// 38856 push    ax ;~ 1359:25DB
cs=0x1359;eip=0x0025dc; 	X(PUSH(cs));	// 38857 push    cs ;~ 1359:25DC
cs=0x1359;eip=0x0025dd; 	J(CALL(loop_game,0));	// 38858 call    near ptr loop_game ;~ 1359:25DD
cs=0x1359;eip=0x0025e0; 	T(ADD(sp, 6));	// 38859 add     sp, 6 ;~ 1359:25E0
cs=0x1359;eip=0x0025e3; 	X(POP(si));	// 38860 pop     si ;~ 1359:25E3
cs=0x1359;eip=0x0025e4; 	X(POP(di));	// 38861 pop     di ;~ 1359:25E4
cs=0x1359;eip=0x0025e5; 	T(MOV(sp, bp));	// 38862 mov     sp, bp ;~ 1359:25E5
cs=0x1359;eip=0x0025e7; 	X(POP(bp));	// 38863 pop     bp ;~ 1359:25E7
cs=0x1359;eip=0x0025e8; 	J(RETF(0));	// 38864 retf ;~ 1359:25E8
loc_2415a:
	// 6962 
cs=0x1359;eip=0x0025ea; 	T(CMP(replaybar_enabled, 0));	// 38870 cmp     replaybar_enabled, 0 ;~ 1359:25EA
cs=0x1359;eip=0x0025ef; 	J(JNZ(loc_2416c));	// 38871 jnz     short loc_2416C ;~ 1359:25EF
cs=0x1359;eip=0x0025f1; 	X(MOV(is_in_replay_copy, 0x0FF));	// 38872 mov     is_in_replay_copy, 0FFh ;~ 1359:25F1
cs=0x1359;eip=0x0025f6; 	X(MOV(word_449ea, 0x0FFFF));	// 38873 mov     word_449EA, 0FFFFh ;~ 1359:25F6
loc_2416c:
	// 6963 
cs=0x1359;eip=0x0025fc; 	T(CMP(is_in_replay, 0));	// 38876 cmp     is_in_replay, 0 ;~ 1359:25FC
cs=0x1359;eip=0x002601; 	J(JZ(loc_24193));	// 38877 jz      short loc_24193 ;~ 1359:2601
cs=0x1359;eip=0x002603; 	T(CMP(byte_40e6d, 0));	// 38878 cmp     byte_40E6D, 0 ;~ 1359:2603
cs=0x1359;eip=0x002608; 	J(JNZ(loc_24181));	// 38879 jnz     short loc_24181 ;~ 1359:2608
cs=0x1359;eip=0x00260a; 	T(CMP(byte_40e6c, 0));	// 38880 cmp     byte_40E6C, 0 ;~ 1359:260A
cs=0x1359;eip=0x00260f; 	J(JZ(loc_24193));	// 38881 jz      short loc_24193 ;~ 1359:260F
loc_24181:
	// 6964 
cs=0x1359;eip=0x002611; 	T(SUB(ax, ax));	// 38884 sub     ax, ax ;~ 1359:2611
cs=0x1359;eip=0x002613; 	X(PUSH(ax));	// 38885 push    ax ;~ 1359:2613
cs=0x1359;eip=0x002614; 	T(MOV(ax, 4));	// 38886 mov     ax, 4 ;~ 1359:2614
cs=0x1359;eip=0x002617; 	X(PUSH(ax));	// 38887 push    ax ;~ 1359:2617
cs=0x1359;eip=0x002618; 	T(MOV(ax, 2));	// 38888 mov     ax, 2 ;~ 1359:2618
cs=0x1359;eip=0x00261b; 	X(PUSH(ax));	// 38889 push    ax ;~ 1359:261B
cs=0x1359;eip=0x00261c; 	X(PUSH(cs));	// 38890 push    cs ;~ 1359:261C
cs=0x1359;eip=0x00261d; 	J(CALL(loop_game,0));	// 38891 call    near ptr loop_game ;~ 1359:261D
cs=0x1359;eip=0x002620; 	T(ADD(sp, 6));	// 38892 add     sp, 6 ;~ 1359:2620
loc_24193:
	// 6965 
cs=0x1359;eip=0x002623; 	X(PUSH(word_445d4));	// 38896 push    word_445D4 ;~ 1359:2623
cs=0x1359;eip=0x002627; 	X(PUSH(word_445d4));	// 38897 push    word_445D4 ;~ 1359:2627
cs=0x1359;eip=0x00262b; 	T(MOV(ax, 1));	// 38898 mov     ax, 1 ;~ 1359:262B
cs=0x1359;eip=0x00262e; 	X(PUSH(ax));	// 38899 push    ax ;~ 1359:262E
cs=0x1359;eip=0x00262f; 	X(PUSH(cs));	// 38900 push    cs ;~ 1359:262F
cs=0x1359;eip=0x002630; 	J(CALL(loop_game,0));	// 38901 call    near ptr loop_game ;~ 1359:2630
cs=0x1359;eip=0x002633; 	T(ADD(sp, 6));	// 38902 add     sp, 6 ;~ 1359:2633
cs=0x1359;eip=0x002636; 	X(MOV(*(raddr(ss,bp+var_40)), 0));	// 38903 mov     [bp+var_40], 0 ;~ 1359:2636
cs=0x1359;eip=0x00263a; 	T(MOV(ax, 0x1D));	// 38904 mov     ax, 1Dh ;~ 1359:263A
cs=0x1359;eip=0x00263d; 	X(PUSH(ax));	// 38905 push    ax ;~ 1359:263D
cs=0x1359;eip=0x00263e; 	J(CALLF(kb_get_key_state,0));	// 38906 call    kb_get_key_state ;~ 1359:263E
cs=0x1359;eip=0x002643; 	T(ADD(sp, 2));	// 38907 add     sp, 2 ;~ 1359:2643
cs=0x1359;eip=0x002646; 	T(OR(ax, ax));	// 38908 or      ax, ax ;~ 1359:2646
cs=0x1359;eip=0x002648; 	J(JNZ(loc_241c8));	// 38909 jnz     short loc_241C8 ;~ 1359:2648
cs=0x1359;eip=0x00264a; 	T(CMP(byte_3e9db, 8));	// 38910 cmp     byte_3E9DB, 8 ;~ 1359:264A
cs=0x1359;eip=0x00264f; 	J(JNZ(loc_241cc));	// 38911 jnz     short loc_241CC ;~ 1359:264F
cs=0x1359;eip=0x002651; 	T(TEST(*(db*)(((db*)&kbjoyflags)), 0x30));	// 38912 test    byte ptr kbjoyflags, 30h ;~ 1359:2651
cs=0x1359;eip=0x002656; 	J(JZ(loc_241cc));	// 38913 jz      short loc_241CC ;~ 1359:2656
loc_241c8:
	// 6966 
cs=0x1359;eip=0x002658; 	X(MOV(*(raddr(ss,bp+var_40)), 1));	// 38916 mov     [bp+var_40], 1 ;~ 1359:2658
loc_241cc:
	// 6967 
cs=0x1359;eip=0x00265c; 	T(CMP(*(raddr(ss,bp+var_40)), 0));	// 38920 cmp     [bp+var_40], 0 ;~ 1359:265C
cs=0x1359;eip=0x002660; 	J(JZ(loc_241fe));	// 38921 jz      short loc_241FE ;~ 1359:2660
cs=0x1359;eip=0x002662; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 38922 mov     ax, [bp+var_16] ;~ 1359:2662
cs=0x1359;eip=0x002665; 	T(CMP(ax, 0x2B));	// 38923 cmp     ax, 2Bh ; '+' ;~ 1359:2665
cs=0x1359;eip=0x002668; 	J(JNZ(loc_241dd));	// 38924 jnz     short loc_241DD ;~ 1359:2668
cs=0x1359;eip=0x00266a; 	J(JMP(loc_2429c));	// 38925 jmp     loc_2429C ;~ 1359:266A
loc_241dd:
	// 6968 
cs=0x1359;eip=0x00266d; 	T(CMP(ax, 0x2D));	// 38929 cmp     ax, 2Dh ; '-' ;~ 1359:266D
cs=0x1359;eip=0x002670; 	J(JNZ(loc_241e5));	// 38930 jnz     short loc_241E5 ;~ 1359:2670
cs=0x1359;eip=0x002672; 	J(JMP(loc_2426e));	// 38931 jmp     loc_2426E ;~ 1359:2672
loc_241e5:
	// 6969 
cs=0x1359;eip=0x002675; 	T(CMP(ax, 0x4800));	// 38935 cmp     ax, 4800h ;~ 1359:2675
cs=0x1359;eip=0x002678; 	J(JZ(loc_24242));	// 38936 jz      short loc_24242 ;~ 1359:2678
cs=0x1359;eip=0x00267a; 	T(CMP(ax, 0x4B00));	// 38937 cmp     ax, 4B00h ;~ 1359:267A
cs=0x1359;eip=0x00267d; 	J(JZ(loc_24236));	// 38938 jz      short loc_24236 ;~ 1359:267D
cs=0x1359;eip=0x00267f; 	T(CMP(ax, 0x4D00));	// 38939 cmp     ax, 4D00h ;~ 1359:267F
cs=0x1359;eip=0x002682; 	J(JZ(loc_2422a));	// 38940 jz      short loc_2422A ;~ 1359:2682
cs=0x1359;eip=0x002684; 	T(CMP(ax, 0x5000));	// 38941 cmp     ax, 5000h ;~ 1359:2684
cs=0x1359;eip=0x002687; 	J(JZ(loc_24258));	// 38942 jz      short loc_24258 ;~ 1359:2687
loc_241f9:
	// 6970 
cs=0x1359;eip=0x002689; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0));	// 38946 mov     [bp+var_16], 0 ;~ 1359:2689
loc_241fe:
	// 6971 
cs=0x1359;eip=0x00268e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 38949 mov     ax, [bp+var_16] ;~ 1359:268E
cs=0x1359;eip=0x002691; 	T(CMP(ax, 0x2B));	// 38950 cmp     ax, 2Bh ; '+' ;~ 1359:2691
cs=0x1359;eip=0x002694; 	J(JNZ(loc_24209));	// 38951 jnz     short loc_24209 ;~ 1359:2694
cs=0x1359;eip=0x002696; 	J(JMP(loc_2429c));	// 38952 jmp     loc_2429C ;~ 1359:2696
loc_24209:
	// 6972 
cs=0x1359;eip=0x002699; 	J(JBE(loc_2420e));	// 38956 jbe     short loc_2420E ;~ 1359:2699
cs=0x1359;eip=0x00269b; 	J(JMP(loc_24d32));	// 38957 jmp     loc_24D32 ;~ 1359:269B
loc_2420e:
	// 6973 
cs=0x1359;eip=0x00269e; 	T(CMP(ax, 0x0D));	// 38961 cmp     ax, 0Dh ;~ 1359:269E
cs=0x1359;eip=0x0026a1; 	J(JNZ(loc_24216));	// 38962 jnz     short loc_24216 ;~ 1359:26A1
cs=0x1359;eip=0x0026a3; 	J(JMP(loc_24334));	// 38963 jmp     loc_24334 ;~ 1359:26A3
loc_24216:
	// 6974 
cs=0x1359;eip=0x0026a6; 	T(CMP(ax, 0x1B));	// 38967 cmp     ax, 1Bh ;~ 1359:26A6
cs=0x1359;eip=0x0026a9; 	J(JNZ(loc_2421e));	// 38968 jnz     short loc_2421E ;~ 1359:26A9
cs=0x1359;eip=0x0026ab; 	J(JMP(loc_24346));	// 38969 jmp     loc_24346       ; jumptable 00024340 case 6 ;~ 1359:26AB
loc_2421e:
	// 6975 
cs=0x1359;eip=0x0026ae; 	T(CMP(ax, 0x20));	// 38973 cmp     ax, 20h ; ' ' ;~ 1359:26AE
cs=0x1359;eip=0x0026b1; 	J(JNZ(loc_24226));	// 38974 jnz     short loc_24226 ;~ 1359:26B1
cs=0x1359;eip=0x0026b3; 	J(JMP(loc_24334));	// 38975 jmp     loc_24334 ;~ 1359:26B3
loc_24226:
	// 6976 
cs=0x1359;eip=0x0026b6; 	J(JMP(def_24340));	// 38979 jmp     def_24340       ; jumptable 00024340 default case ;~ 1359:26B6
loc_2422a:
	// 6977 
cs=0x1359;eip=0x0026ba; 	X(ADD(word_3b8ee, 0x10));	// 38984 add     word_3B8EE, 10h ;~ 1359:26BA
cs=0x1359;eip=0x0026bf; 	X(POP(si));	// 38985 pop     si ;~ 1359:26BF
cs=0x1359;eip=0x0026c0; 	X(POP(di));	// 38986 pop     di ;~ 1359:26C0
cs=0x1359;eip=0x0026c1; 	T(MOV(sp, bp));	// 38987 mov     sp, bp ;~ 1359:26C1
cs=0x1359;eip=0x0026c3; 	X(POP(bp));	// 38988 pop     bp ;~ 1359:26C3
cs=0x1359;eip=0x0026c4; 	J(RETF(0));	// 38989 retf ;~ 1359:26C4
loc_24236:
	// 6978 
cs=0x1359;eip=0x0026c6; 	X(SUB(word_3b8ee, 0x10));	// 38994 sub     word_3B8EE, 10h ;~ 1359:26C6
cs=0x1359;eip=0x0026cb; 	X(POP(si));	// 38995 pop     si ;~ 1359:26CB
cs=0x1359;eip=0x0026cc; 	X(POP(di));	// 38996 pop     di ;~ 1359:26CC
cs=0x1359;eip=0x0026cd; 	T(MOV(sp, bp));	// 38997 mov     sp, bp ;~ 1359:26CD
cs=0x1359;eip=0x0026cf; 	X(POP(bp));	// 38998 pop     bp ;~ 1359:26CF
cs=0x1359;eip=0x0026d0; 	J(RETF(0));	// 38999 retf ;~ 1359:26D0
loc_24242:
	// 6979 
cs=0x1359;eip=0x0026d2; 	T(MOV(ax, word_3b8f0));	// 39004 mov     ax, word_3B8F0 ;~ 1359:26D2
cs=0x1359;eip=0x0026d5; 	T(ADD(ax, 0x10));	// 39005 add     ax, 10h ;~ 1359:26D5
cs=0x1359;eip=0x0026d8; 	T(CMP(ax, 0x100));	// 39006 cmp     ax, 100h ;~ 1359:26D8
cs=0x1359;eip=0x0026db; 	J(JGE(loc_241f9));	// 39007 jge     short loc_241F9 ;~ 1359:26DB
cs=0x1359;eip=0x0026dd; 	X(ADD(word_3b8f0, 0x10));	// 39008 add     word_3B8F0, 10h ;~ 1359:26DD
cs=0x1359;eip=0x0026e2; 	X(POP(si));	// 39009 pop     si ;~ 1359:26E2
cs=0x1359;eip=0x0026e3; 	X(POP(di));	// 39010 pop     di ;~ 1359:26E3
cs=0x1359;eip=0x0026e4; 	T(MOV(sp, bp));	// 39011 mov     sp, bp ;~ 1359:26E4
cs=0x1359;eip=0x0026e6; 	X(POP(bp));	// 39012 pop     bp ;~ 1359:26E6
cs=0x1359;eip=0x0026e7; 	J(RETF(0));	// 39013 retf ;~ 1359:26E7
loc_24258:
	// 6980 
cs=0x1359;eip=0x0026e8; 	T(MOV(ax, word_3b8f0));	// 39017 mov     ax, word_3B8F0 ;~ 1359:26E8
cs=0x1359;eip=0x0026eb; 	T(SUB(ax, 0x10));	// 39018 sub     ax, 10h ;~ 1359:26EB
cs=0x1359;eip=0x0026ee; 	T(CMP(ax, 0x0FF00));	// 39019 cmp     ax, 0FF00h ;~ 1359:26EE
cs=0x1359;eip=0x0026f1; 	J(JLE(loc_241f9));	// 39020 jle     short loc_241F9 ;~ 1359:26F1
cs=0x1359;eip=0x0026f3; 	X(SUB(word_3b8f0, 0x10));	// 39021 sub     word_3B8F0, 10h ;~ 1359:26F3
cs=0x1359;eip=0x0026f8; 	X(POP(si));	// 39022 pop     si ;~ 1359:26F8
cs=0x1359;eip=0x0026f9; 	X(POP(di));	// 39023 pop     di ;~ 1359:26F9
cs=0x1359;eip=0x0026fa; 	T(MOV(sp, bp));	// 39024 mov     sp, bp ;~ 1359:26FA
cs=0x1359;eip=0x0026fc; 	X(POP(bp));	// 39025 pop     bp ;~ 1359:26FC
cs=0x1359;eip=0x0026fd; 	J(RETF(0));	// 39026 retf ;~ 1359:26FD
loc_2426e:
	// 6981 
cs=0x1359;eip=0x0026fe; 	T(CMP(cameramode, 3));	// 39031 cmp     cameramode, 3 ;~ 1359:26FE
cs=0x1359;eip=0x002703; 	J(JNZ(loc_24288));	// 39032 jnz     short loc_24288 ;~ 1359:2703
cs=0x1359;eip=0x002705; 	T(CMP(word_44d20, 0));	// 39033 cmp     word_44D20, 0 ;~ 1359:2705
cs=0x1359;eip=0x00270a; 	J(JG(loc_2427f));	// 39034 jg      short loc_2427F ;~ 1359:270A
cs=0x1359;eip=0x00270c; 	J(JMP(loc_241f9));	// 39035 jmp     loc_241F9 ;~ 1359:270C
loc_2427f:
	// 6982 
cs=0x1359;eip=0x00270f; 	X(SUB(word_44d20, 0x1E));	// 39039 sub     word_44D20, 1Eh ;~ 1359:270F
cs=0x1359;eip=0x002714; 	J(JMP(loc_24d5e));	// 39040 jmp     loc_24D5E ;~ 1359:2714
loc_24288:
	// 6983 
cs=0x1359;eip=0x002718; 	T(CMP(word_3b8ec, 0x5DC));	// 39045 cmp     word_3B8EC, 5DCh ;~ 1359:2718
cs=0x1359;eip=0x00271e; 	J(JL(loc_24293));	// 39046 jl      short loc_24293 ;~ 1359:271E
cs=0x1359;eip=0x002720; 	J(JMP(loc_241f9));	// 39047 jmp     loc_241F9 ;~ 1359:2720
loc_24293:
	// 6984 
cs=0x1359;eip=0x002723; 	X(ADD(word_3b8ec, 0x1E));	// 39051 add     word_3B8EC, 1Eh ;~ 1359:2723
cs=0x1359;eip=0x002728; 	J(JMP(loc_24d5e));	// 39052 jmp     loc_24D5E ;~ 1359:2728
loc_2429c:
	// 6985 
cs=0x1359;eip=0x00272c; 	T(CMP(cameramode, 3));	// 39058 cmp     cameramode, 3 ;~ 1359:272C
cs=0x1359;eip=0x002731; 	J(JNZ(loc_242b6));	// 39059 jnz     short loc_242B6 ;~ 1359:2731
cs=0x1359;eip=0x002733; 	T(CMP(word_44d20, 0x384));	// 39060 cmp     word_44D20, 384h ;~ 1359:2733
cs=0x1359;eip=0x002739; 	J(JL(loc_242ae));	// 39061 jl      short loc_242AE ;~ 1359:2739
cs=0x1359;eip=0x00273b; 	J(JMP(loc_241f9));	// 39062 jmp     loc_241F9 ;~ 1359:273B
loc_242ae:
	// 6986 
cs=0x1359;eip=0x00273e; 	X(ADD(word_44d20, 0x1E));	// 39066 add     word_44D20, 1Eh ;~ 1359:273E
cs=0x1359;eip=0x002743; 	J(JMP(loc_24d5e));	// 39067 jmp     loc_24D5E ;~ 1359:2743
loc_242b6:
	// 6987 
cs=0x1359;eip=0x002746; 	T(CMP(word_3b8ec, 0x78));	// 39071 cmp     word_3B8EC, 78h ; 'x' ;~ 1359:2746
cs=0x1359;eip=0x00274b; 	J(JG(loc_242c0));	// 39072 jg      short loc_242C0 ;~ 1359:274B
cs=0x1359;eip=0x00274d; 	J(JMP(loc_241f9));	// 39073 jmp     loc_241F9 ;~ 1359:274D
loc_242c0:
	// 6988 
cs=0x1359;eip=0x002750; 	X(SUB(word_3b8ec, 0x1E));	// 39077 sub     word_3B8EC, 1Eh ;~ 1359:2750
cs=0x1359;eip=0x002755; 	J(JMP(loc_24d5e));	// 39078 jmp     loc_24D5E ;~ 1359:2755
loc_242c8:
	// 6989 
cs=0x1359;eip=0x002758; 	T(MOV(al, byte_3e9db));	// 39082 mov     al, byte_3E9DB ;~ 1359:2758
cs=0x1359;eip=0x00275b; 	T(CBW);	// 39083 cbw ;~ 1359:275B
cs=0x1359;eip=0x00275c; 	T(MOV(bx, ax));	// 39084 mov     bx, ax ;~ 1359:275C
cs=0x1359;eip=0x00275e; 	T(MOV(al, *((&byte_3e9dc)+bx)));	// 39085 mov     al, byte_3E9DC[bx] ;~ 1359:275E
cs=0x1359;eip=0x002762; 	X(MOV(*(db*)(raddr(ss,bp+var_44)), al));	// 39086 mov     byte ptr [bp+var_44], al ;~ 1359:2762
cs=0x1359;eip=0x002765; 	T(MOV(al, cameramode));	// 39087 mov     al, cameramode ;~ 1359:2765
cs=0x1359;eip=0x002768; 	T(CBW);	// 39088 cbw ;~ 1359:2768
cs=0x1359;eip=0x002769; 	T(MOV(bx, ax));	// 39089 mov     bx, ax ;~ 1359:2769
cs=0x1359;eip=0x00276b; 	T(MOV(al, *(db*)(raddr(ss,bp+var_44))));	// 39090 mov     al, byte ptr [bp+var_44] ;~ 1359:276B
cs=0x1359;eip=0x00276e; 	T(CMP(*((&game_camera_buttons_count)+bx), al));	// 39091 cmp     game_camera_buttons_count[bx], al ;~ 1359:276E
cs=0x1359;eip=0x002772; 	J(JL(def_24340));	// 39092 jl      short def_24340 ; jumptable 00024340 default case ;~ 1359:2772
loc_242e4:
	// 6990 
cs=0x1359;eip=0x002774; 	X(MOV(byte_3e9db, al));	// 39096 mov     byte_3E9DB, al ;~ 1359:2774
def_24340:
	// 6991 
cs=0x1359;eip=0x002777; 	X(PUSH(word_445d4));	// 39100 push    word_445D4      ; jumptable 00024340 default case ;~ 1359:2777
cs=0x1359;eip=0x00277b; 	X(PUSH(word_445d4));	// 39101 push    word_445D4 ;~ 1359:277B
cs=0x1359;eip=0x00277f; 	T(MOV(ax, 1));	// 39102 mov     ax, 1 ;~ 1359:277F
cs=0x1359;eip=0x002782; 	X(PUSH(ax));	// 39103 push    ax ;~ 1359:2782
cs=0x1359;eip=0x002783; 	X(PUSH(cs));	// 39104 push    cs ;~ 1359:2783
cs=0x1359;eip=0x002784; 	J(CALL(loop_game,0));	// 39105 call    near ptr loop_game ;~ 1359:2784
cs=0x1359;eip=0x002787; 	T(ADD(sp, 6));	// 39106 add     sp, 6 ;~ 1359:2787
cs=0x1359;eip=0x00278a; 	J(JMP(loc_23fee));	// 39107 jmp     loc_23FEE ;~ 1359:278A
loc_242fe:
	// 6992 
cs=0x1359;eip=0x00278e; 	T(MOV(al, byte_3e9db));	// 39112 mov     al, byte_3E9DB ;~ 1359:278E
cs=0x1359;eip=0x002791; 	T(CBW);	// 39113 cbw ;~ 1359:2791
cs=0x1359;eip=0x002792; 	T(MOV(bx, ax));	// 39114 mov     bx, ax ;~ 1359:2792
cs=0x1359;eip=0x002794; 	T(MOV(al, *((&byte_3e9e6)+bx)));	// 39115 mov     al, byte_3E9E6[bx] ;~ 1359:2794
cs=0x1359;eip=0x002798; 	J(JMP(loc_242e4));	// 39116 jmp     short loc_242E4 ;~ 1359:2798
loc_2430a:
	// 6993 
cs=0x1359;eip=0x00279a; 	T(CMP(byte_3e9db, 7));	// 39120 cmp     byte_3E9DB, 7 ;~ 1359:279A
cs=0x1359;eip=0x00279f; 	J(JZ(loc_2429c));	// 39121 jz      short loc_2429C ;~ 1359:279F
cs=0x1359;eip=0x0027a1; 	T(MOV(al, byte_3e9db));	// 39122 mov     al, byte_3E9DB ;~ 1359:27A1
cs=0x1359;eip=0x0027a4; 	T(CBW);	// 39123 cbw ;~ 1359:27A4
cs=0x1359;eip=0x0027a5; 	T(MOV(bx, ax));	// 39124 mov     bx, ax ;~ 1359:27A5
cs=0x1359;eip=0x0027a7; 	T(MOV(al, *((&byte_3e9f0)+bx)));	// 39125 mov     al, byte_3E9F0[bx] ;~ 1359:27A7
cs=0x1359;eip=0x0027ab; 	J(JMP(loc_242e4));	// 39126 jmp     short loc_242E4 ;~ 1359:27AB
loc_2431e:
	// 6994 
cs=0x1359;eip=0x0027ae; 	T(CMP(byte_3e9db, 7));	// 39131 cmp     byte_3E9DB, 7 ;~ 1359:27AE
cs=0x1359;eip=0x0027b3; 	J(JNZ(loc_24328));	// 39132 jnz     short loc_24328 ;~ 1359:27B3
cs=0x1359;eip=0x0027b5; 	J(JMP(loc_2426e));	// 39133 jmp     loc_2426E ;~ 1359:27B5
loc_24328:
	// 6995 
cs=0x1359;eip=0x0027b8; 	T(MOV(al, byte_3e9db));	// 39137 mov     al, byte_3E9DB ;~ 1359:27B8
cs=0x1359;eip=0x0027bb; 	T(CBW);	// 39138 cbw ;~ 1359:27BB
cs=0x1359;eip=0x0027bc; 	T(MOV(bx, ax));	// 39139 mov     bx, ax ;~ 1359:27BC
cs=0x1359;eip=0x0027be; 	T(MOV(al, *((&byte_3e9fa)+bx)));	// 39140 mov     al, byte_3E9FA[bx] ;~ 1359:27BE
cs=0x1359;eip=0x0027c2; 	J(JMP(loc_242e4));	// 39141 jmp     short loc_242E4 ;~ 1359:27C2
loc_24334:
	// 6996 
cs=0x1359;eip=0x0027c4; 	T(MOV(al, byte_3e9db));	// 39146 mov     al, byte_3E9DB ;~ 1359:27C4
cs=0x1359;eip=0x0027c7; 	T(CBW);	// 39147 cbw ;~ 1359:27C7
cs=0x1359;eip=0x0027c8; 	T(CMP(ax, 6));	// 39148 cmp     ax, 6           ; switch 7 cases ;~ 1359:27C8
cs=0x1359;eip=0x0027cb; 	J(JA(def_24340));	// 39149 ja      short def_24340 ; jumptable 00024340 default case ;~ 1359:27CB
cs=0x1359;eip=0x0027cd; 	T(ADD(ax, ax));	// 39150 add     ax, ax ;~ 1359:27CD
cs=0x1359;eip=0x0027cf; 	T(XCHG(ax, bx));	// 39151 xchg    ax, bx ;~ 1359:27CF
	cs=seg_offset(seg005);
cs=0x1359;eip=0x0027d0; __disp=*(dw*)(((db*)&jpt_24340)+bx);
	J(return __dispatch_call(__disp, _state););	// 39152 jmp     cs:jpt_24340[bx] ; switch jump ;~ 1359:27D0
loc_24346:
	// 6997 
cs=0x1359;eip=0x0027d6; 	X(MOV(is_in_replay, 1));	// 39159 mov     is_in_replay, 1 ; jumptable 00024340 case 6 ;~ 1359:27D6
cs=0x1359;eip=0x0027db; 	J(CALLF(audio_carstate,0));	// 39160 call    audio_carstate ;~ 1359:27DB
cs=0x1359;eip=0x0027e0; 	T(SUB(ax, ax));	// 39161 sub     ax, ax ;~ 1359:27E0
cs=0x1359;eip=0x0027e2; 	X(PUSH(ax));	// 39162 push    ax ;~ 1359:27E2
cs=0x1359;eip=0x0027e3; 	T(MOV(ax, 4));	// 39163 mov     ax, 4 ;~ 1359:27E3
cs=0x1359;eip=0x0027e6; 	X(PUSH(ax));	// 39164 push    ax ;~ 1359:27E6
cs=0x1359;eip=0x0027e7; 	T(MOV(ax, 2));	// 39165 mov     ax, 2 ;~ 1359:27E7
cs=0x1359;eip=0x0027ea; 	X(PUSH(ax));	// 39166 push    ax ;~ 1359:27EA
cs=0x1359;eip=0x0027eb; 	X(PUSH(cs));	// 39167 push    cs ;~ 1359:27EB
cs=0x1359;eip=0x0027ec; 	J(CALL(loop_game,0));	// 39168 call    near ptr loop_game ;~ 1359:27EC
cs=0x1359;eip=0x0027ef; 	T(ADD(sp, 6));	// 39169 add     sp, 6 ;~ 1359:27EF
cs=0x1359;eip=0x0027f2; 	X(PUSH(word_445d4));	// 39170 push    word_445D4 ;~ 1359:27F2
cs=0x1359;eip=0x0027f6; 	X(PUSH(word_445d4));	// 39171 push    word_445D4 ;~ 1359:27F6
cs=0x1359;eip=0x0027fa; 	T(MOV(ax, 1));	// 39172 mov     ax, 1 ;~ 1359:27FA
cs=0x1359;eip=0x0027fd; 	X(PUSH(ax));	// 39173 push    ax ;~ 1359:27FD
cs=0x1359;eip=0x0027fe; 	X(PUSH(cs));	// 39174 push    cs ;~ 1359:27FE
cs=0x1359;eip=0x0027ff; 	J(CALL(loop_game,0));	// 39175 call    near ptr loop_game ;~ 1359:27FF
cs=0x1359;eip=0x002802; 	T(ADD(sp, 6));	// 39176 add     sp, 6 ;~ 1359:2802
cs=0x1359;eip=0x002805; 	T(SUB(si, si));	// 39177 sub     si, si ;~ 1359:2805
loc_24377:
	// 6998 
cs=0x1359;eip=0x002807; 	T(MOV(bx, si));	// 39180 mov     bx, si ;~ 1359:2807
cs=0x1359;eip=0x002809; 	T(SHL(bx, 1));	// 39181 shl     bx, 1 ;~ 1359:2809
cs=0x1359;eip=0x00280b; 	T(ADD(bx, bp));	// 39182 add     bx, bp ;~ 1359:280B
cs=0x1359;eip=0x00280d; 	X(MOV(*(dw*)(raddr(ds,bx-0x14)), 0));	// 39183 mov     word ptr [bx-14h], 0 ;~ 1359:280D
cs=0x1359;eip=0x002812; 	T(INC(si));	// 39184 inc     si ;~ 1359:2812
cs=0x1359;eip=0x002813; 	T(CMP(si, 8));	// 39185 cmp     si, 8 ;~ 1359:2813
cs=0x1359;eip=0x002816; 	J(JL(loc_24377));	// 39186 jl      short loc_24377 ;~ 1359:2816
cs=0x1359;eip=0x002818; 	T(CMP(byte_446af, 0));	// 39187 cmp     byte_446AF, 0 ;~ 1359:2818
cs=0x1359;eip=0x00281d; 	J(JZ(loc_24394));	// 39188 jz      short loc_24394 ;~ 1359:281D
cs=0x1359;eip=0x00281f; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 1));	// 39189 mov     [bp+var_E], 1 ;~ 1359:281F
loc_24394:
	// 6999 
cs=0x1359;eip=0x002824; 	T(CMP(word_449bc, 0));	// 39192 cmp     word_449BC, 0 ;~ 1359:2824
cs=0x1359;eip=0x002829; 	J(JZ(loc_243a2));	// 39193 jz      short loc_243A2 ;~ 1359:2829
cs=0x1359;eip=0x00282b; 	T(CMP(elapsed_time1, 0));	// 39194 cmp     elapsed_time1, 0 ;~ 1359:282B
cs=0x1359;eip=0x002830; 	J(JZ(loc_243a7));	// 39195 jz      short loc_243A7 ;~ 1359:2830
loc_243a2:
	// 7000 
cs=0x1359;eip=0x002832; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 1));	// 39198 mov     [bp+var_A], 1 ;~ 1359:2832
loc_243a7:
	// 7001 
cs=0x1359;eip=0x002837; 	T(CMP(passed_security, 0));	// 39201 cmp     passed_security, 0 ;~ 1359:2837
cs=0x1359;eip=0x00283c; 	J(JNZ(loc_243b8));	// 39202 jnz     short loc_243B8 ;~ 1359:283C
cs=0x1359;eip=0x00283e; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 1));	// 39203 mov     [bp+var_10], 1 ;~ 1359:283E
cs=0x1359;eip=0x002843; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 1));	// 39204 mov     [bp+var_E], 1 ;~ 1359:2843
loc_243b8:
	// 7002 
cs=0x1359;eip=0x002848; 	T(TEST(byte_43966, 4));	// 39207 test    byte_43966, 4 ;~ 1359:2848
cs=0x1359;eip=0x00284d; 	J(JNZ(loc_243c4));	// 39208 jnz     short loc_243C4 ;~ 1359:284D
cs=0x1359;eip=0x00284f; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 1));	// 39209 mov     [bp+var_12], 1 ;~ 1359:284F
loc_243c4:
	// 7003 
cs=0x1359;eip=0x002854; 	T(MOV(al, video_flag6_is1));	// 39212 mov     al, video_flag6_is1 ; pause menu ;~ 1359:2854
cs=0x1359;eip=0x002857; 	X(MOV(byte_454a4, al));	// 39213 mov     byte_454A4, al ;~ 1359:2857
cs=0x1359;eip=0x00285a; 	T(SUB(ax, ax));	// 39214 sub     ax, ax ;~ 1359:285A
cs=0x1359;eip=0x00285c; 	X(PUSH(ax));	// 39215 push    ax ;~ 1359:285C
cs=0x1359;eip=0x00285d; 	T(ax = bp+var_14);	// 39216 lea     ax, [bp+var_14] ;~ 1359:285D
cs=0x1359;eip=0x002860; 	X(PUSH(ax));	// 39217 push    ax ;~ 1359:2860
cs=0x1359;eip=0x002861; 	X(PUSH(dialogarg2));	// 39218 push    dialogarg2 ;~ 1359:2861
cs=0x1359;eip=0x002865; 	T(MOV(ax, 0x0FFFF));	// 39219 mov     ax, 0FFFFh ;~ 1359:2865
cs=0x1359;eip=0x002868; 	X(PUSH(ax));	// 39220 push    ax ;~ 1359:2868
cs=0x1359;eip=0x002869; 	X(PUSH(ax));	// 39221 push    ax ;~ 1359:2869
cs=0x1359;eip=0x00286a; 	T(MOV(ax, offset(dseg,amen_0)));	// 39222 mov     ax, offset aMen_0 ; "men" ;~ 1359:286A
cs=0x1359;eip=0x00286d; 	X(PUSH(ax));	// 39223 push    ax ;~ 1359:286D
cs=0x1359;eip=0x00286e; 	X(PUSH(word_449a2));	// 39224 push    word_449A2 ;~ 1359:286E
cs=0x1359;eip=0x002872; 	X(PUSH(gameresptr));	// 39225 push    gameresptr ;~ 1359:2872
cs=0x1359;eip=0x002876; 	J(CALLF(locate_text_res,0));	// 39226 call    locate_text_res ;~ 1359:2876
cs=0x1359;eip=0x00287b; 	T(ADD(sp, 6));	// 39227 add     sp, 6 ;~ 1359:287B
cs=0x1359;eip=0x00287e; 	X(PUSH(dx));	// 39228 push    dx ;~ 1359:287E
cs=0x1359;eip=0x00287f; 	X(PUSH(ax));	// 39229 push    ax ;~ 1359:287F
cs=0x1359;eip=0x002880; 	T(SUB(ax, ax));	// 39230 sub     ax, ax ;~ 1359:2880
cs=0x1359;eip=0x002882; 	X(PUSH(ax));	// 39231 push    ax ;~ 1359:2882
cs=0x1359;eip=0x002883; 	T(MOV(ax, 2));	// 39232 mov     ax, 2 ;~ 1359:2883
cs=0x1359;eip=0x002886; 	X(PUSH(ax));	// 39233 push    ax ;~ 1359:2886
cs=0x1359;eip=0x002887; 	J(CALLF(show_dialog,0));	// 39234 call    show_dialog ;~ 1359:2887
cs=0x1359;eip=0x00288c; 	T(ADD(sp, 0x12));	// 39235 add     sp, 12h ;~ 1359:288C
cs=0x1359;eip=0x00288f; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 39236 mov     [bp+var_2], al ;~ 1359:288F
cs=0x1359;eip=0x002892; 	T(CBW);	// 39237 cbw ;~ 1359:2892
cs=0x1359;eip=0x002893; 	T(SUB(ax, 1));	// 39238 sub     ax, 1           ; switch 7 cases ;~ 1359:2893
cs=0x1359;eip=0x002896; 	T(CMP(ax, 6));	// 39239 cmp     ax, 6 ;~ 1359:2896
cs=0x1359;eip=0x002899; 	J(JBE(loc_2440e));	// 39240 jbe     short loc_2440E ;~ 1359:2899
cs=0x1359;eip=0x00289b; 	J(JMP(def_24411));	// 39241 jmp     def_24411       ; jumptable 00024411 default case ;~ 1359:289B
loc_2440e:
	// 7004 
cs=0x1359;eip=0x00289e; 	T(ADD(ax, ax));	// 39245 add     ax, ax ;~ 1359:289E
cs=0x1359;eip=0x0028a0; 	T(XCHG(ax, bx));	// 39246 xchg    ax, bx ;~ 1359:28A0
	cs=seg_offset(seg005);
cs=0x1359;eip=0x0028a1; __disp=*(dw*)(((db*)&jpt_24411)+bx);
	J(return __dispatch_call(__disp, _state););	// 39247 jmp     cs:jpt_24411[bx] ; switch jump ;~ 1359:28A1
loc_24416:
	// 7005 
cs=0x1359;eip=0x0028a6; 	J(CALLF(check_input,0));	// 39252 call    check_input     ; jumptable 00024411 case 2 ;~ 1359:28A6
cs=0x1359;eip=0x0028ab; 	T(MOV(ax, framespersec2));	// 39253 mov     ax, framespersec2 ;~ 1359:28AB
cs=0x1359;eip=0x0028ae; 	X(MOV(framespersec, ax));	// 39254 mov     framespersec, ax ;~ 1359:28AE
cs=0x1359;eip=0x0028b1; 	T(MOV(al, *(db*)(((db*)&framespersec2))));	// 39255 mov     al, byte ptr framespersec2 ;~ 1359:28B1
cs=0x1359;eip=0x0028b4; 	X(MOV(byte_449ba, al));	// 39256 mov     byte_449BA, al ;~ 1359:28B4
cs=0x1359;eip=0x0028b7; 	T(MOV(ax, 0x0FFFF));	// 39257 mov     ax, 0FFFFh ;~ 1359:28B7
cs=0x1359;eip=0x0028ba; 	X(PUSH(ax));	// 39258 push    ax ;~ 1359:28BA
cs=0x1359;eip=0x0028bb; 	J(CALLF(init_game_state,0));	// 39259 call    init_game_state ;~ 1359:28BB
cs=0x1359;eip=0x0028c0; 	T(ADD(sp, 2));	// 39260 add     sp, 2 ;~ 1359:28C0
cs=0x1359;eip=0x0028c3; 	X(MOV(elapsed_time2, 0));	// 39261 mov     elapsed_time2, 0 ;~ 1359:28C3
cs=0x1359;eip=0x0028c9; 	X(MOV(word_449bc, 0));	// 39262 mov     word_449BC, 0 ;~ 1359:28C9
cs=0x1359;eip=0x0028cf; 	X(MOV(*(db*)(((db*)&word_45d3e)), 0));	// 39263 mov     byte ptr word_45D3E, 0 ;~ 1359:28CF
cs=0x1359;eip=0x0028d4; 	X(MOV(byte_43966, 1));	// 39264 mov     byte_43966, 1 ;~ 1359:28D4
cs=0x1359;eip=0x0028d9; 	J(JMP(loc_244b0));	// 39265 jmp     short loc_244B0 ;~ 1359:28D9
loc_2444c:
	// 7006 
cs=0x1359;eip=0x0028dc; 	T(TEST(byte_43966, 2));	// 39271 test    byte_43966, 2   ; jumptable 00024411 case 3 ;~ 1359:28DC
cs=0x1359;eip=0x0028e1; 	J(JZ(loc_2445a));	// 39272 jz      short loc_2445A ;~ 1359:28E1
loc_24453:
	// 7007 
cs=0x1359;eip=0x0028e3; 	X(MOV(byte_43966, 3));	// 39275 mov     byte_43966, 3 ;~ 1359:28E3
cs=0x1359;eip=0x0028e8; 	J(JMP(loc_244a7));	// 39276 jmp     short loc_244A7 ;~ 1359:28E8
loc_2445a:
	// 7008 
cs=0x1359;eip=0x0028ea; 	T(MOV(ax, elapsed_time2));	// 39280 mov     ax, elapsed_time2 ;~ 1359:28EA
cs=0x1359;eip=0x0028ed; 	T(CMP(word_449bc, ax));	// 39281 cmp     word_449BC, ax ;~ 1359:28ED
cs=0x1359;eip=0x0028f1; 	J(JZ(loc_244a2));	// 39282 jz      short loc_244A2 ;~ 1359:28F1
cs=0x1359;eip=0x0028f3; 	T(SUB(ax, ax));	// 39283 sub     ax, ax ;~ 1359:28F3
cs=0x1359;eip=0x0028f5; 	X(PUSH(ax));	// 39284 push    ax ;~ 1359:28F5
cs=0x1359;eip=0x0028f6; 	X(PUSH(ax));	// 39285 push    ax ;~ 1359:28F6
cs=0x1359;eip=0x0028f7; 	X(PUSH(performgraphcolor));	// 39286 push    performGraphColor ;~ 1359:28F7
cs=0x1359;eip=0x0028fb; 	T(MOV(ax, 0x0FFFF));	// 39287 mov     ax, 0FFFFh ;~ 1359:28FB
cs=0x1359;eip=0x0028fe; 	X(PUSH(ax));	// 39288 push    ax ;~ 1359:28FE
cs=0x1359;eip=0x0028ff; 	X(PUSH(ax));	// 39289 push    ax ;~ 1359:28FF
cs=0x1359;eip=0x002900; 	T(MOV(ax, offset(dseg,acon_0)));	// 39290 mov     ax, offset aCon_0 ; RH warning ;~ 1359:2900
cs=0x1359;eip=0x002903; 	X(PUSH(ax));	// 39291 push    ax ;~ 1359:2903
cs=0x1359;eip=0x002904; 	X(PUSH(word_449a2));	// 39292 push    word_449A2 ;~ 1359:2904
cs=0x1359;eip=0x002908; 	X(PUSH(gameresptr));	// 39293 push    gameresptr ;~ 1359:2908
cs=0x1359;eip=0x00290c; 	J(CALLF(locate_text_res,0));	// 39294 call    locate_text_res ;~ 1359:290C
cs=0x1359;eip=0x002911; 	T(ADD(sp, 6));	// 39295 add     sp, 6 ;~ 1359:2911
cs=0x1359;eip=0x002914; 	X(PUSH(dx));	// 39296 push    dx ;~ 1359:2914
cs=0x1359;eip=0x002915; 	X(PUSH(ax));	// 39297 push    ax ;~ 1359:2915
cs=0x1359;eip=0x002916; 	T(SUB(ax, ax));	// 39298 sub     ax, ax ;~ 1359:2916
cs=0x1359;eip=0x002918; 	X(PUSH(ax));	// 39299 push    ax ;~ 1359:2918
cs=0x1359;eip=0x002919; 	T(MOV(ax, 2));	// 39300 mov     ax, 2 ;~ 1359:2919
cs=0x1359;eip=0x00291c; 	X(PUSH(ax));	// 39301 push    ax ;~ 1359:291C
cs=0x1359;eip=0x00291d; 	J(CALLF(show_dialog,0));	// 39302 call    show_dialog ;~ 1359:291D
cs=0x1359;eip=0x002922; 	T(ADD(sp, 0x12));	// 39303 add     sp, 12h ;~ 1359:2922
cs=0x1359;eip=0x002925; 	T(MOV(si, ax));	// 39304 mov     si, ax ;~ 1359:2925
cs=0x1359;eip=0x002927; 	T(CMP(si, 1));	// 39305 cmp     si, 1 ;~ 1359:2927
cs=0x1359;eip=0x00292a; 	J(JGE(loc_2449f));	// 39306 jge     short loc_2449F ;~ 1359:292A
cs=0x1359;eip=0x00292c; 	J(JMP(def_24411));	// 39307 jmp     def_24411       ; jumptable 00024411 default case ;~ 1359:292C
loc_2449f:
	// 7009 
cs=0x1359;eip=0x00292f; 	J(JMP(loc_24453));	// 39311 jmp     short loc_24453 ;~ 1359:292F
loc_244a2:
	// 7010 
cs=0x1359;eip=0x002932; 	X(MOV(byte_43966, 1));	// 39316 mov     byte_43966, 1 ;~ 1359:2932
loc_244a7:
	// 7011 
cs=0x1359;eip=0x002937; 	T(MOV(ax, word_445d4));	// 39319 mov     ax, word_445D4 ;~ 1359:2937
cs=0x1359;eip=0x00293a; 	X(MOV(elapsed_time2, ax));	// 39320 mov     elapsed_time2, ax ;~ 1359:293A
cs=0x1359;eip=0x00293d; 	X(MOV(word_449bc, ax));	// 39321 mov     word_449BC, ax ;~ 1359:293D
loc_244b0:
	// 7012 
cs=0x1359;eip=0x002940; 	X(MOV(dashb_toggle, 1));	// 39324 mov     dashb_toggle, 1 ;~ 1359:2940
cs=0x1359;eip=0x002945; 	X(MOV(show_penalty_counter, 0));	// 39325 mov     show_penalty_counter, 0 ;~ 1359:2945
cs=0x1359;eip=0x00294a; 	X(MOV(followopponentflag, 0));	// 39326 mov     followOpponentFlag, 0 ;~ 1359:294A
cs=0x1359;eip=0x00294f; 	X(MOV(game_replay_mode, 0));	// 39327 mov     game_replay_mode, 0 ;~ 1359:294F
cs=0x1359;eip=0x002954; 	X(MOV(cameramode, 0));	// 39328 mov     cameramode, 0 ;~ 1359:2954
cs=0x1359;eip=0x002959; 	X(MOV(byte_4488a, 0));	// 39329 mov     byte_4488A, 0 ;~ 1359:2959
cs=0x1359;eip=0x00295e; 	X(MOV(word_445cc, 0));	// 39330 mov     word_445CC, 0 ;~ 1359:295E
cs=0x1359;eip=0x002964; 	X(MOV(byte_449e6, 0));	// 39331 mov     byte_449E6, 0 ;~ 1359:2964
cs=0x1359;eip=0x002969; 	T(SUB(ax, ax));	// 39332 sub     ax, ax ;~ 1359:2969
cs=0x1359;eip=0x00296b; 	X(PUSH(ax));	// 39333 push    ax ;~ 1359:296B
cs=0x1359;eip=0x00296c; 	T(MOV(ax, 3));	// 39334 mov     ax, 3 ;~ 1359:296C
cs=0x1359;eip=0x00296f; 	X(PUSH(ax));	// 39335 push    ax ;~ 1359:296F
cs=0x1359;eip=0x002970; 	T(MOV(ax, 2));	// 39336 mov     ax, 2 ;~ 1359:2970
cs=0x1359;eip=0x002973; 	X(PUSH(ax));	// 39337 push    ax ;~ 1359:2973
cs=0x1359;eip=0x002974; 	X(PUSH(cs));	// 39338 push    cs ;~ 1359:2974
cs=0x1359;eip=0x002975; 	J(CALL(loop_game,0));	// 39339 call    near ptr loop_game ;~ 1359:2975
cs=0x1359;eip=0x002978; 	T(ADD(sp, 6));	// 39340 add     sp, 6 ;~ 1359:2978
cs=0x1359;eip=0x00297b; 	X(MOV(is_in_replay, 0));	// 39341 mov     is_in_replay, 0 ;~ 1359:297B
cs=0x1359;eip=0x002980; 	T(MOV(al, byte_3b8f2));	// 39342 mov     al, byte_3B8F2 ;~ 1359:2980
cs=0x1359;eip=0x002983; 	T(CBW);	// 39343 cbw ;~ 1359:2983
cs=0x1359;eip=0x002984; 	X(PUSH(ax));	// 39344 push    ax ;~ 1359:2984
cs=0x1359;eip=0x002985; 	X(PUSH(cs));	// 39345 push    cs ;~ 1359:2985
cs=0x1359;eip=0x002986; 	J(CALL(mouse_minmax_position,0));	// 39346 call    near ptr mouse_minmax_position ;~ 1359:2986
cs=0x1359;eip=0x002989; 	T(ADD(sp, 2));	// 39347 add     sp, 2 ;~ 1359:2989
cs=0x1359;eip=0x00298c; 	J(CALLF(check_input,0));	// 39348 call    check_input ;~ 1359:298C
cs=0x1359;eip=0x002991; 	X(MOV(kbormouse, 0));	// 39349 mov     kbormouse, 0 ;~ 1359:2991
cs=0x1359;eip=0x002996; 	J(JMP(def_24411));	// 39350 jmp     def_24411       ; jumptable 00024411 default case ;~ 1359:2996
loc_2450a:
	// 7013 
cs=0x1359;eip=0x00299a; 	X(MOV(byte_43966, 0));	// 39356 mov     byte_43966, 0   ; jumptable 00024411 case 4 ;~ 1359:299A
cs=0x1359;eip=0x00299f; 	J(CALLF(audio_carstate,0));	// 39357 call    audio_carstate ;~ 1359:299F
cs=0x1359;eip=0x0029a4; 	T(MOV(ax, offset(dseg,arep)));	// 39358 mov     ax, offset aRep ; "rep" ;~ 1359:29A4
cs=0x1359;eip=0x0029a7; 	X(PUSH(ax));	// 39359 push    ax ;~ 1359:29A7
cs=0x1359;eip=0x0029a8; 	X(PUSH(word_44cee));	// 39360 push    word_44CEE ;~ 1359:29A8
cs=0x1359;eip=0x0029ac; 	X(PUSH(mainresptr));	// 39361 push    mainresptr ;~ 1359:29AC
cs=0x1359;eip=0x0029b0; 	J(CALLF(locate_text_res,0));	// 39362 call    locate_text_res ;~ 1359:29B0
cs=0x1359;eip=0x0029b5; 	T(ADD(sp, 6));	// 39363 add     sp, 6 ;~ 1359:29B5
cs=0x1359;eip=0x0029b8; 	X(PUSH(dx));	// 39364 push    dx              ; int ;~ 1359:29B8
cs=0x1359;eip=0x0029b9; 	X(PUSH(ax));	// 39365 push    ax              ; int ;~ 1359:29B9
cs=0x1359;eip=0x0029ba; 	T(MOV(ax, offset(dseg,a_rpl_1)));	// 39366 mov     ax, offset a_rpl_1 ; ".rpl" ;~ 1359:29BA
cs=0x1359;eip=0x0029bd; 	X(PUSH(ax));	// 39367 push    ax              ; int ;~ 1359:29BD
cs=0x1359;eip=0x0029be; 	T(MOV(ax, 0x140));	// 39368 mov     ax, 140h ;~ 1359:29BE
cs=0x1359;eip=0x0029c1; 	X(PUSH(ax));	// 39369 push    ax ;~ 1359:29C1
cs=0x1359;eip=0x0029c2; 	T(MOV(ax, offset(dseg,byte_3b85e)));	// 39370 mov     ax, offset byte_3B85E ;~ 1359:29C2
cs=0x1359;eip=0x0029c5; 	X(PUSH(ax));	// 39371 push    ax              ; char * ;~ 1359:29C5
cs=0x1359;eip=0x0029c6; 	J(CALLF(do_fileselect_dialog,0));	// 39372 call    do_fileselect_dialog ;~ 1359:29C6
cs=0x1359;eip=0x0029cb; 	T(ADD(sp, 0x0A));	// 39373 add     sp, 0Ah ;~ 1359:29CB
cs=0x1359;eip=0x0029ce; 	T(CBW);	// 39374 cbw ;~ 1359:29CE
cs=0x1359;eip=0x0029cf; 	T(MOV(si, ax));	// 39375 mov     si, ax ;~ 1359:29CF
cs=0x1359;eip=0x0029d1; 	T(OR(si, si));	// 39376 or      si, si ;~ 1359:29D1
cs=0x1359;eip=0x0029d3; 	J(JNZ(loc_24548));	// 39377 jnz     short loc_24548 ;~ 1359:29D3
cs=0x1359;eip=0x0029d5; 	J(JMP(def_24411));	// 39378 jmp     def_24411       ; jumptable 00024411 default case ;~ 1359:29D5
loc_24548:
	// 7014 
cs=0x1359;eip=0x0029d8; 	X(MOV(waitflag, 0x96));	// 39382 mov     waitflag, 96h ; '–' ;~ 1359:29D8
cs=0x1359;eip=0x0029de; 	J(CALLF(show_waiting,0));	// 39383 call    show_waiting ;~ 1359:29DE
cs=0x1359;eip=0x0029e3; 	X(PUSH(si));	// 39384 push    si ;~ 1359:29E3
cs=0x1359;eip=0x0029e4; 	X(PUSH(di));	// 39385 push    di ;~ 1359:29E4
cs=0x1359;eip=0x0029e5; 	T(di = bp+var_3e);	// 39386 lea     di, [bp+var_3E] ;~ 1359:29E5
cs=0x1359;eip=0x0029e8; 	T(MOV(si, 0x9234));	// 39387 mov     si, 9234h ;~ 1359:29E8
cs=0x1359;eip=0x0029eb; 	X(PUSH(ss));	// 39388 push    ss ;~ 1359:29EB
cs=0x1359;eip=0x0029ec; 	X(POP(es));	// 39389 pop     es ;~ 1359:29EC
cs=0x1359;eip=0x0029ed; 	T(MOV(cx, 0x0D));	// 39390 mov     cx, 0Dh ;~ 1359:29ED
	// 39391 repne movsw ;~ 1359:29F0
cs=0x1359;eip=0x0029f0; 	X(	REPNE MOVSW);	// 39391 repne movsw ;~ 1359:29F0
cs=0x1359;eip=0x0029f2; 	X(POP(di));	// 39392 pop     di ;~ 1359:29F2
cs=0x1359;eip=0x0029f3; 	X(POP(si));	// 39393 pop     si ;~ 1359:29F3
cs=0x1359;eip=0x0029f4; 	T(LES(bx, td14_elem_map_main));	// 39394 les     bx, td14_elem_map_main ;~ 1359:29F4
cs=0x1359;eip=0x0029f8; 	T(MOV(al, *(raddr(es,bx+0x384))));	// 39395 mov     al, es:[bx+384h] ;~ 1359:29F8
cs=0x1359;eip=0x0029fd; 	T(SUB(ah, ah));	// 39396 sub     ah, ah ;~ 1359:29FD
cs=0x1359;eip=0x0029ff; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 39397 mov     [bp+var_4], ax ;~ 1359:29FF
cs=0x1359;eip=0x002a02; 	T(MOV(ax, 0x140));	// 39398 mov     ax, 140h ;~ 1359:2A02
cs=0x1359;eip=0x002a05; 	X(PUSH(ax));	// 39399 push    ax ;~ 1359:2A05
cs=0x1359;eip=0x002a06; 	T(MOV(ax, 0x0EE));	// 39400 mov     ax, 0EEh ; 'î' ;~ 1359:2A06
cs=0x1359;eip=0x002a09; 	X(PUSH(ax));	// 39401 push    ax              ; char * ;~ 1359:2A09
cs=0x1359;eip=0x002a0a; 	X(PUSH(cs));	// 39402 push    cs ;~ 1359:2A0A
cs=0x1359;eip=0x002a0b; 	J(CALL(file_load_replay,0));	// 39403 call    near ptr file_load_replay ;~ 1359:2A0B
cs=0x1359;eip=0x002a0e; 	T(ADD(sp, 4));	// 39404 add     sp, 4 ;~ 1359:2A0E
cs=0x1359;eip=0x002a11; 	T(OR(al, al));	// 39405 or      al, al ;~ 1359:2A11
cs=0x1359;eip=0x002a13; 	J(JZ(loc_2458b));	// 39406 jz      short loc_2458B ;~ 1359:2A13
cs=0x1359;eip=0x002a15; 	X(MOV(word_449bc, 0));	// 39407 mov     word_449BC, 0 ;~ 1359:2A15
loc_2458b:
	// 7015 
cs=0x1359;eip=0x002a1b; 	X(MOV(dashb_toggle, 0));	// 39410 mov     dashb_toggle, 0 ;~ 1359:2A1B
cs=0x1359;eip=0x002a20; 	J(CALLF(track_setup,0));	// 39411 call    track_setup ;~ 1359:2A20
cs=0x1359;eip=0x002a25; 	T(SUB(si, si));	// 39412 sub     si, si ;~ 1359:2A25
cs=0x1359;eip=0x002a27; 	T(LES(bx, td14_elem_map_main));	// 39413 les     bx, td14_elem_map_main ;~ 1359:2A27
cs=0x1359;eip=0x002a2b; 	T(MOV(al, *(raddr(es,bx+0x384))));	// 39414 mov     al, es:[bx+384h] ;~ 1359:2A2B
cs=0x1359;eip=0x002a30; 	T(SUB(ah, ah));	// 39415 sub     ah, ah ;~ 1359:2A30
cs=0x1359;eip=0x002a32; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4))));	// 39416 cmp     ax, [bp+var_4] ;~ 1359:2A32
cs=0x1359;eip=0x002a35; 	J(JZ(loc_245aa));	// 39417 jz      short loc_245AA ;~ 1359:2A35
cs=0x1359;eip=0x002a37; 	T(MOV(si, 1));	// 39418 mov     si, 1 ;~ 1359:2A37
loc_245aa:
	// 7016 
cs=0x1359;eip=0x002a3a; 	T(MOV(al, gameconfig));	// 39421 mov     al, gameconfig ;~ 1359:2A3A
cs=0x1359;eip=0x002a3d; 	T(CMP(*(raddr(ss,bp+var_3e)), al));	// 39422 cmp     [bp+var_3E], al ;~ 1359:2A3D
cs=0x1359;eip=0x002a40; 	J(JNZ(loc_245ca));	// 39423 jnz     short loc_245CA ;~ 1359:2A40
cs=0x1359;eip=0x002a42; 	T(MOV(al, byte_449a5));	// 39424 mov     al, byte_449A5 ;~ 1359:2A42
cs=0x1359;eip=0x002a45; 	T(CMP(*(raddr(ss,bp+var_3d)), al));	// 39425 cmp     [bp+var_3D], al ;~ 1359:2A45
cs=0x1359;eip=0x002a48; 	J(JNZ(loc_245ca));	// 39426 jnz     short loc_245CA ;~ 1359:2A48
cs=0x1359;eip=0x002a4a; 	T(MOV(al, byte_449a6));	// 39427 mov     al, byte_449A6 ;~ 1359:2A4A
cs=0x1359;eip=0x002a4d; 	T(CMP(*(raddr(ss,bp+var_3c)), al));	// 39428 cmp     [bp+var_3C], al ;~ 1359:2A4D
cs=0x1359;eip=0x002a50; 	J(JNZ(loc_245ca));	// 39429 jnz     short loc_245CA ;~ 1359:2A50
cs=0x1359;eip=0x002a52; 	T(MOV(al, byte_449a7));	// 39430 mov     al, byte_449A7 ;~ 1359:2A52
cs=0x1359;eip=0x002a55; 	T(CMP(*(raddr(ss,bp+var_3b)), al));	// 39431 cmp     [bp+var_3B], al ;~ 1359:2A55
cs=0x1359;eip=0x002a58; 	J(JZ(loc_245d0));	// 39432 jz      short loc_245D0 ;~ 1359:2A58
loc_245ca:
	// 7017 
cs=0x1359;eip=0x002a5a; 	T(MOV(si, 1));	// 39436 mov     si, 1 ;~ 1359:2A5A
cs=0x1359;eip=0x002a5d; 	J(JMP(loc_2460d));	// 39437 jmp     short loc_2460D ;~ 1359:2A5D
loc_245d0:
	// 7018 
cs=0x1359;eip=0x002a60; 	T(MOV(al, byte_449aa));	// 39442 mov     al, byte_449AA ;~ 1359:2A60
cs=0x1359;eip=0x002a63; 	T(CMP(*(raddr(ss,bp+var_38)), al));	// 39443 cmp     [bp+var_38], al ;~ 1359:2A63
cs=0x1359;eip=0x002a66; 	J(JNZ(loc_245ca));	// 39444 jnz     short loc_245CA ;~ 1359:2A66
cs=0x1359;eip=0x002a68; 	T(OR(al, al));	// 39445 or      al, al ;~ 1359:2A68
cs=0x1359;eip=0x002a6a; 	J(JZ(loc_2460d));	// 39446 jz      short loc_2460D ;~ 1359:2A6A
cs=0x1359;eip=0x002a6c; 	T(MOV(al, byte_449ab));	// 39447 mov     al, byte_449AB ;~ 1359:2A6C
cs=0x1359;eip=0x002a6f; 	T(CMP(*(raddr(ss,bp+var_37)), al));	// 39448 cmp     [bp+var_37], al ;~ 1359:2A6F
cs=0x1359;eip=0x002a72; 	J(JNZ(loc_245ca));	// 39449 jnz     short loc_245CA ;~ 1359:2A72
cs=0x1359;eip=0x002a74; 	T(MOV(al, byte_449ac));	// 39450 mov     al, byte_449AC ;~ 1359:2A74
cs=0x1359;eip=0x002a77; 	T(CMP(*(raddr(ss,bp+var_36)), al));	// 39451 cmp     [bp+var_36], al ;~ 1359:2A77
cs=0x1359;eip=0x002a7a; 	J(JNZ(loc_245ca));	// 39452 jnz     short loc_245CA ;~ 1359:2A7A
cs=0x1359;eip=0x002a7c; 	T(MOV(al, byte_449ad));	// 39453 mov     al, byte_449AD ;~ 1359:2A7C
cs=0x1359;eip=0x002a7f; 	T(CMP(*(raddr(ss,bp+var_35)), al));	// 39454 cmp     [bp+var_35], al ;~ 1359:2A7F
cs=0x1359;eip=0x002a82; 	J(JNZ(loc_245ca));	// 39455 jnz     short loc_245CA ;~ 1359:2A82
cs=0x1359;eip=0x002a84; 	T(MOV(al, byte_449ae));	// 39456 mov     al, byte_449AE ;~ 1359:2A84
cs=0x1359;eip=0x002a87; 	T(CMP(*(raddr(ss,bp+var_34)), al));	// 39457 cmp     [bp+var_34], al ;~ 1359:2A87
cs=0x1359;eip=0x002a8a; 	J(JNZ(loc_245ca));	// 39458 jnz     short loc_245CA ;~ 1359:2A8A
cs=0x1359;eip=0x002a8c; 	T(MOV(ax, 2));	// 39459 mov     ax, 2 ;~ 1359:2A8C
cs=0x1359;eip=0x002a8f; 	X(PUSH(ax));	// 39460 push    ax ;~ 1359:2A8F
cs=0x1359;eip=0x002a90; 	J(CALLF(ensure_file_exists,0));	// 39461 call    ensure_file_exists ;~ 1359:2A90
cs=0x1359;eip=0x002a95; 	T(ADD(sp, 2));	// 39462 add     sp, 2 ;~ 1359:2A95
cs=0x1359;eip=0x002a98; 	J(CALLF(load_opponent_data,0));	// 39463 call    load_opponent_data ;~ 1359:2A98
loc_2460d:
	// 7019 
cs=0x1359;eip=0x002a9d; 	T(OR(si, si));	// 39467 or      si, si ;~ 1359:2A9D
cs=0x1359;eip=0x002a9f; 	J(JZ(loc_24619));	// 39468 jz      short loc_24619 ;~ 1359:2A9F
cs=0x1359;eip=0x002aa1; 	X(PUSH(cs));	// 39469 push    cs ;~ 1359:2AA1
cs=0x1359;eip=0x002aa2; 	J(CALL(free_player_cars,0));	// 39470 call    near ptr free_player_cars ;~ 1359:2AA2
cs=0x1359;eip=0x002aa5; 	X(PUSH(cs));	// 39471 push    cs ;~ 1359:2AA5
cs=0x1359;eip=0x002aa6; 	J(CALL(setup_player_cars,0));	// 39472 call    near ptr setup_player_cars ;~ 1359:2AA6
loc_24619:
	// 7020 
cs=0x1359;eip=0x002aa9; 	T(MOV(al, byte_449ba));	// 39475 mov     al, byte_449BA ;~ 1359:2AA9
cs=0x1359;eip=0x002aac; 	T(CBW);	// 39476 cbw ;~ 1359:2AAC
cs=0x1359;eip=0x002aad; 	X(MOV(framespersec, ax));	// 39477 mov     framespersec, ax ;~ 1359:2AAD
cs=0x1359;eip=0x002ab0; 	T(MOV(ax, 0x0FFFF));	// 39478 mov     ax, 0FFFFh ;~ 1359:2AB0
cs=0x1359;eip=0x002ab3; 	X(PUSH(ax));	// 39479 push    ax ;~ 1359:2AB3
cs=0x1359;eip=0x002ab4; 	J(CALLF(init_game_state,0));	// 39480 call    init_game_state ;~ 1359:2AB4
cs=0x1359;eip=0x002ab9; 	T(ADD(sp, 2));	// 39481 add     sp, 2 ;~ 1359:2AB9
cs=0x1359;eip=0x002abc; 	J(JMP(def_24411));	// 39482 jmp     def_24411       ; jumptable 00024411 default case ;~ 1359:2ABC
loc_24630:
	// 7021 
cs=0x1359;eip=0x002ac0; 	J(CALLF(audio_carstate,0));	// 39488 call    audio_carstate  ; jumptable 00024411 case 5 ;~ 1359:2AC0
loc_24635:
	// 7022 
cs=0x1359;eip=0x002ac5; 	X(MOV(*(raddr(ss,bp+var_1e)), 0));	// 39491 mov     [bp+var_1E], 0 ;~ 1359:2AC5
loc_24639:
	// 7023 
cs=0x1359;eip=0x002ac9; 	T(CMP(*(raddr(ss,bp+var_1e)), 0));	// 39495 cmp     [bp+var_1E], 0 ;~ 1359:2AC9
cs=0x1359;eip=0x002acd; 	J(JZ(loc_24642));	// 39496 jz      short loc_24642 ;~ 1359:2ACD
cs=0x1359;eip=0x002acf; 	J(JMP(def_24411));	// 39497 jmp     def_24411       ; jumptable 00024411 default case ;~ 1359:2ACF
loc_24642:
	// 7024 
cs=0x1359;eip=0x002ad2; 	T(MOV(ax, offset(dseg,arep_1)));	// 39501 mov     ax, offset aRep_1 ; "rep" ;~ 1359:2AD2
cs=0x1359;eip=0x002ad5; 	X(PUSH(ax));	// 39502 push    ax ;~ 1359:2AD5
cs=0x1359;eip=0x002ad6; 	X(PUSH(word_44cee));	// 39503 push    word_44CEE ;~ 1359:2AD6
cs=0x1359;eip=0x002ada; 	X(PUSH(mainresptr));	// 39504 push    mainresptr ;~ 1359:2ADA
cs=0x1359;eip=0x002ade; 	J(CALLF(locate_text_res,0));	// 39505 call    locate_text_res ;~ 1359:2ADE
cs=0x1359;eip=0x002ae3; 	T(ADD(sp, 6));	// 39506 add     sp, 6 ;~ 1359:2AE3
cs=0x1359;eip=0x002ae6; 	X(PUSH(dx));	// 39507 push    dx              ; int ;~ 1359:2AE6
cs=0x1359;eip=0x002ae7; 	X(PUSH(ax));	// 39508 push    ax              ; int ;~ 1359:2AE7
cs=0x1359;eip=0x002ae8; 	T(MOV(ax, 0x140));	// 39509 mov     ax, 140h ;~ 1359:2AE8
cs=0x1359;eip=0x002aeb; 	X(PUSH(ax));	// 39510 push    ax ;~ 1359:2AEB
cs=0x1359;eip=0x002aec; 	T(MOV(ax, 0x0EE));	// 39511 mov     ax, 0EEh ; 'î' ;~ 1359:2AEC
cs=0x1359;eip=0x002aef; 	X(PUSH(ax));	// 39512 push    ax              ; char * ;~ 1359:2AEF
cs=0x1359;eip=0x002af0; 	J(CALLF(do_savefile_dialog,0));	// 39513 call    do_savefile_dialog ;~ 1359:2AF0
cs=0x1359;eip=0x002af5; 	T(ADD(sp, 8));	// 39514 add     sp, 8 ;~ 1359:2AF5
cs=0x1359;eip=0x002af8; 	T(OR(al, al));	// 39515 or      al, al ;~ 1359:2AF8
cs=0x1359;eip=0x002afa; 	J(JNZ(loc_2466f));	// 39516 jnz     short loc_2466F ;~ 1359:2AFA
cs=0x1359;eip=0x002afc; 	J(JMP(loc_246f0));	// 39517 jmp     loc_246F0 ;~ 1359:2AFC
loc_2466f:
	// 7025 
cs=0x1359;eip=0x002aff; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 39521 mov     ax, offset g_path_buf ;~ 1359:2AFF
cs=0x1359;eip=0x002b02; 	X(PUSH(ax));	// 39522 push    ax              ; char * ;~ 1359:2B02
cs=0x1359;eip=0x002b03; 	T(MOV(ax, offset(dseg,a_rpl_2)));	// 39523 mov     ax, offset a_rpl_2 ; ".rpl" ;~ 1359:2B03
cs=0x1359;eip=0x002b06; 	X(PUSH(ax));	// 39524 push    ax              ; int ;~ 1359:2B06
cs=0x1359;eip=0x002b07; 	T(MOV(ax, 0x140));	// 39525 mov     ax, 140h ;~ 1359:2B07
cs=0x1359;eip=0x002b0a; 	X(PUSH(ax));	// 39526 push    ax ;~ 1359:2B0A
cs=0x1359;eip=0x002b0b; 	T(MOV(ax, 0x0EE));	// 39527 mov     ax, 0EEh ; 'î' ;~ 1359:2B0B
cs=0x1359;eip=0x002b0e; 	X(PUSH(ax));	// 39528 push    ax              ; char * ;~ 1359:2B0E
cs=0x1359;eip=0x002b0f; 	J(CALLF(file_build_path,0));	// 39529 call    file_build_path ;~ 1359:2B0F
cs=0x1359;eip=0x002b14; 	T(ADD(sp, 8));	// 39530 add     sp, 8 ;~ 1359:2B14
cs=0x1359;eip=0x002b17; 	X(MOV(*(raddr(ss,bp+var_1e)), 1));	// 39531 mov     [bp+var_1E], 1 ;~ 1359:2B17
cs=0x1359;eip=0x002b1b; 	X(MOV(g_is_busy, 1));	// 39532 mov     g_is_busy, 1 ;~ 1359:2B1B
cs=0x1359;eip=0x002b20; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 39533 mov     ax, offset g_path_buf ;~ 1359:2B20
cs=0x1359;eip=0x002b23; 	X(PUSH(ax));	// 39534 push    ax ;~ 1359:2B23
cs=0x1359;eip=0x002b24; 	J(CALLF(file_find,0));	// 39535 call    file_find ;~ 1359:2B24
cs=0x1359;eip=0x002b29; 	T(ADD(sp, 2));	// 39536 add     sp, 2 ;~ 1359:2B29
cs=0x1359;eip=0x002b2c; 	T(OR(ax, ax));	// 39537 or      ax, ax ;~ 1359:2B2C
cs=0x1359;eip=0x002b2e; 	J(JZ(loc_246e8));	// 39538 jz      short loc_246E8 ;~ 1359:2B2E
cs=0x1359;eip=0x002b30; 	T(SUB(ax, ax));	// 39539 sub     ax, ax ;~ 1359:2B30
cs=0x1359;eip=0x002b32; 	X(PUSH(ax));	// 39540 push    ax ;~ 1359:2B32
cs=0x1359;eip=0x002b33; 	X(PUSH(ax));	// 39541 push    ax ;~ 1359:2B33
cs=0x1359;eip=0x002b34; 	X(PUSH(performgraphcolor));	// 39542 push    performGraphColor ;~ 1359:2B34
cs=0x1359;eip=0x002b38; 	T(MOV(ax, 0x0FFFF));	// 39543 mov     ax, 0FFFFh ;~ 1359:2B38
cs=0x1359;eip=0x002b3b; 	X(PUSH(ax));	// 39544 push    ax ;~ 1359:2B3B
cs=0x1359;eip=0x002b3c; 	X(PUSH(ax));	// 39545 push    ax ;~ 1359:2B3C
cs=0x1359;eip=0x002b3d; 	T(MOV(ax, offset(dseg,afex_0)));	// 39546 mov     ax, offset aFex_0 ; "fex" ;~ 1359:2B3D
cs=0x1359;eip=0x002b40; 	X(PUSH(ax));	// 39547 push    ax ;~ 1359:2B40
cs=0x1359;eip=0x002b41; 	X(PUSH(word_44cee));	// 39548 push    word_44CEE ;~ 1359:2B41
cs=0x1359;eip=0x002b45; 	X(PUSH(mainresptr));	// 39549 push    mainresptr ;~ 1359:2B45
cs=0x1359;eip=0x002b49; 	J(CALLF(locate_text_res,0));	// 39550 call    locate_text_res ;~ 1359:2B49
cs=0x1359;eip=0x002b4e; 	T(ADD(sp, 6));	// 39551 add     sp, 6 ;~ 1359:2B4E
cs=0x1359;eip=0x002b51; 	X(PUSH(dx));	// 39552 push    dx ;~ 1359:2B51
cs=0x1359;eip=0x002b52; 	X(PUSH(ax));	// 39553 push    ax ;~ 1359:2B52
cs=0x1359;eip=0x002b53; 	T(SUB(ax, ax));	// 39554 sub     ax, ax ;~ 1359:2B53
cs=0x1359;eip=0x002b55; 	X(PUSH(ax));	// 39555 push    ax ;~ 1359:2B55
cs=0x1359;eip=0x002b56; 	T(MOV(ax, 2));	// 39556 mov     ax, 2 ;~ 1359:2B56
cs=0x1359;eip=0x002b59; 	X(PUSH(ax));	// 39557 push    ax ;~ 1359:2B59
cs=0x1359;eip=0x002b5a; 	J(CALLF(show_dialog,0));	// 39558 call    show_dialog ;~ 1359:2B5A
cs=0x1359;eip=0x002b5f; 	T(ADD(sp, 0x12));	// 39559 add     sp, 12h ;~ 1359:2B5F
cs=0x1359;eip=0x002b62; 	T(MOV(si, ax));	// 39560 mov     si, ax ;~ 1359:2B62
cs=0x1359;eip=0x002b64; 	T(CMP(si, 0x0FFFF));	// 39561 cmp     si, 0FFFFh ;~ 1359:2B64
cs=0x1359;eip=0x002b67; 	J(JNZ(loc_246e0));	// 39562 jnz     short loc_246E0 ;~ 1359:2B67
cs=0x1359;eip=0x002b69; 	X(MOV(*(raddr(ss,bp+var_1e)), 0x0FF));	// 39563 mov     [bp+var_1E], 0FFh ;~ 1359:2B69
cs=0x1359;eip=0x002b6d; 	J(JMP(loc_246e8));	// 39564 jmp     short loc_246E8 ;~ 1359:2B6D
loc_246e0:
	// 7026 
cs=0x1359;eip=0x002b70; 	T(OR(si, si));	// 39569 or      si, si ;~ 1359:2B70
cs=0x1359;eip=0x002b72; 	J(JNZ(loc_246e8));	// 39570 jnz     short loc_246E8 ;~ 1359:2B72
cs=0x1359;eip=0x002b74; 	X(MOV(*(raddr(ss,bp+var_1e)), 0));	// 39571 mov     [bp+var_1E], 0 ;~ 1359:2B74
loc_246e8:
	// 7027 
cs=0x1359;eip=0x002b78; 	X(MOV(g_is_busy, 0));	// 39575 mov     g_is_busy, 0 ;~ 1359:2B78
cs=0x1359;eip=0x002b7d; 	J(JMP(loc_246f4));	// 39576 jmp     short loc_246F4 ;~ 1359:2B7D
loc_246f0:
	// 7028 
cs=0x1359;eip=0x002b80; 	X(MOV(*(raddr(ss,bp+var_1e)), 0x0FF));	// 39581 mov     [bp+var_1E], 0FFh ;~ 1359:2B80
loc_246f4:
	// 7029 
cs=0x1359;eip=0x002b84; 	T(CMP(*(raddr(ss,bp+var_1e)), 1));	// 39584 cmp     [bp+var_1E], 1 ;~ 1359:2B84
cs=0x1359;eip=0x002b88; 	J(JZ(loc_246fd));	// 39585 jz      short loc_246FD ;~ 1359:2B88
cs=0x1359;eip=0x002b8a; 	J(JMP(loc_24639));	// 39586 jmp     loc_24639 ;~ 1359:2B8A
loc_246fd:
	// 7030 
cs=0x1359;eip=0x002b8d; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 39590 mov     ax, offset g_path_buf ;~ 1359:2B8D
cs=0x1359;eip=0x002b90; 	X(PUSH(ax));	// 39591 push    ax ;~ 1359:2B90
cs=0x1359;eip=0x002b91; 	X(PUSH(cs));	// 39592 push    cs ;~ 1359:2B91
cs=0x1359;eip=0x002b92; 	J(CALL(file_write_replay,0));	// 39593 call    near ptr file_write_replay ;~ 1359:2B92
cs=0x1359;eip=0x002b95; 	T(ADD(sp, 2));	// 39594 add     sp, 2 ;~ 1359:2B95
cs=0x1359;eip=0x002b98; 	X(MOV(*(raddr(ss,bp+var_20)), al));	// 39595 mov     [bp+var_20], al ;~ 1359:2B98
cs=0x1359;eip=0x002b9b; 	T(OR(al, al));	// 39596 or      al, al ;~ 1359:2B9B
cs=0x1359;eip=0x002b9d; 	J(JNZ(loc_24712));	// 39597 jnz     short loc_24712 ;~ 1359:2B9D
cs=0x1359;eip=0x002b9f; 	J(JMP(loc_24639));	// 39598 jmp     loc_24639 ;~ 1359:2B9F
loc_24712:
	// 7031 
cs=0x1359;eip=0x002ba2; 	T(SUB(ax, ax));	// 39602 sub     ax, ax ;~ 1359:2BA2
cs=0x1359;eip=0x002ba4; 	X(PUSH(ax));	// 39603 push    ax ;~ 1359:2BA4
cs=0x1359;eip=0x002ba5; 	X(PUSH(ax));	// 39604 push    ax ;~ 1359:2BA5
cs=0x1359;eip=0x002ba6; 	X(PUSH(performgraphcolor));	// 39605 push    performGraphColor ;~ 1359:2BA6
cs=0x1359;eip=0x002baa; 	T(MOV(ax, 0x0FFFF));	// 39606 mov     ax, 0FFFFh ;~ 1359:2BAA
cs=0x1359;eip=0x002bad; 	X(PUSH(ax));	// 39607 push    ax ;~ 1359:2BAD
cs=0x1359;eip=0x002bae; 	X(PUSH(ax));	// 39608 push    ax ;~ 1359:2BAE
cs=0x1359;eip=0x002baf; 	T(MOV(ax, offset(dseg,aser_0)));	// 39609 mov     ax, offset aSer_0 ; "ser" ;~ 1359:2BAF
cs=0x1359;eip=0x002bb2; 	X(PUSH(ax));	// 39610 push    ax ;~ 1359:2BB2
cs=0x1359;eip=0x002bb3; 	X(PUSH(word_44cee));	// 39611 push    word_44CEE ;~ 1359:2BB3
cs=0x1359;eip=0x002bb7; 	X(PUSH(mainresptr));	// 39612 push    mainresptr ;~ 1359:2BB7
cs=0x1359;eip=0x002bbb; 	J(CALLF(locate_text_res,0));	// 39613 call    locate_text_res ;~ 1359:2BBB
cs=0x1359;eip=0x002bc0; 	T(ADD(sp, 6));	// 39614 add     sp, 6 ;~ 1359:2BC0
cs=0x1359;eip=0x002bc3; 	X(PUSH(dx));	// 39615 push    dx ;~ 1359:2BC3
cs=0x1359;eip=0x002bc4; 	X(PUSH(ax));	// 39616 push    ax ;~ 1359:2BC4
cs=0x1359;eip=0x002bc5; 	T(SUB(ax, ax));	// 39617 sub     ax, ax ;~ 1359:2BC5
cs=0x1359;eip=0x002bc7; 	X(PUSH(ax));	// 39618 push    ax ;~ 1359:2BC7
cs=0x1359;eip=0x002bc8; 	T(MOV(ax, 1));	// 39619 mov     ax, 1 ;~ 1359:2BC8
cs=0x1359;eip=0x002bcb; 	X(PUSH(ax));	// 39620 push    ax ;~ 1359:2BCB
cs=0x1359;eip=0x002bcc; 	J(CALLF(show_dialog,0));	// 39621 call    show_dialog ;~ 1359:2BCC
cs=0x1359;eip=0x002bd1; 	T(ADD(sp, 0x12));	// 39622 add     sp, 12h ;~ 1359:2BD1
cs=0x1359;eip=0x002bd4; 	J(JMP(loc_24635));	// 39623 jmp     loc_24635 ;~ 1359:2BD4
loc_24748:
	// 7032 
cs=0x1359;eip=0x002bd8; 	T(SUB(ax, ax));	// 39629 sub     ax, ax          ; jumptable 00024411 case 1 ;~ 1359:2BD8
cs=0x1359;eip=0x002bda; 	X(PUSH(ax));	// 39630 push    ax ;~ 1359:2BDA
cs=0x1359;eip=0x002bdb; 	T(MOV(ax, 4));	// 39631 mov     ax, 4 ;~ 1359:2BDB
cs=0x1359;eip=0x002bde; 	X(PUSH(ax));	// 39632 push    ax ;~ 1359:2BDE
cs=0x1359;eip=0x002bdf; 	J(CALLF(update_crash_state,0));	// 39633 call    update_crash_state ;~ 1359:2BDF
cs=0x1359;eip=0x002be4; 	T(ADD(sp, 4));	// 39634 add     sp, 4 ;~ 1359:2BE4
loc_24757:
	// 7033 
cs=0x1359;eip=0x002be7; 	X(MOV(byte_449da, 2));	// 39637 mov     byte_449DA, 2 ;~ 1359:2BE7
cs=0x1359;eip=0x002bec; 	J(JMP(def_24411));	// 39638 jmp     def_24411       ; jumptable 00024411 default case ;~ 1359:2BEC
loc_24760:
	// 7034 
cs=0x1359;eip=0x002bf0; 	T(SUB(ax, ax));	// 39644 sub     ax, ax          ; jumptable 00024411 case 7 ;~ 1359:2BF0
cs=0x1359;eip=0x002bf2; 	X(PUSH(ax));	// 39645 push    ax ;~ 1359:2BF2
cs=0x1359;eip=0x002bf3; 	T(MOV(ax, 4));	// 39646 mov     ax, 4 ;~ 1359:2BF3
cs=0x1359;eip=0x002bf6; 	X(PUSH(ax));	// 39647 push    ax ;~ 1359:2BF6
cs=0x1359;eip=0x002bf7; 	J(CALLF(update_crash_state,0));	// 39648 call    update_crash_state ;~ 1359:2BF7
cs=0x1359;eip=0x002bfc; 	T(ADD(sp, 4));	// 39649 add     sp, 4 ;~ 1359:2BFC
cs=0x1359;eip=0x002bff; 	X(MOV(byte_43966, 0));	// 39650 mov     byte_43966, 0 ;~ 1359:2BFF
cs=0x1359;eip=0x002c04; 	J(JMP(loc_24757));	// 39651 jmp     short loc_24757 ;~ 1359:2C04
loc_24776:
	// 7035 
cs=0x1359;eip=0x002c06; 	T(SUB(si, si));	// 39656 sub     si, si          ; jumptable 00024411 case 6 ;~ 1359:2C06
loc_24778:
	// 7036 
cs=0x1359;eip=0x002c08; 	T(MOV(bx, si));	// 39659 mov     bx, si ;~ 1359:2C08
cs=0x1359;eip=0x002c0a; 	T(SHL(bx, 1));	// 39660 shl     bx, 1 ;~ 1359:2C0A
cs=0x1359;eip=0x002c0c; 	T(ADD(bx, bp));	// 39661 add     bx, bp ;~ 1359:2C0C
cs=0x1359;eip=0x002c0e; 	X(MOV(*(dw*)(raddr(ds,bx-0x14)), 0));	// 39662 mov     word ptr [bx-14h], 0 ;~ 1359:2C0E
cs=0x1359;eip=0x002c13; 	T(INC(si));	// 39663 inc     si ;~ 1359:2C13
cs=0x1359;eip=0x002c14; 	T(CMP(si, 5));	// 39664 cmp     si, 5 ;~ 1359:2C14
cs=0x1359;eip=0x002c17; 	J(JL(loc_24778));	// 39665 jl      short loc_24778 ;~ 1359:2C17
cs=0x1359;eip=0x002c19; 	T(CMP(byte_449aa, 0));	// 39666 cmp     byte_449AA, 0 ;~ 1359:2C19
cs=0x1359;eip=0x002c1e; 	J(JNZ(loc_24795));	// 39667 jnz     short loc_24795 ;~ 1359:2C1E
cs=0x1359;eip=0x002c20; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 1));	// 39668 mov     [bp+var_C], 1 ;~ 1359:2C20
loc_24795:
	// 7037 
cs=0x1359;eip=0x002c25; 	T(SUB(ax, ax));	// 39671 sub     ax, ax ;~ 1359:2C25
cs=0x1359;eip=0x002c27; 	X(PUSH(ax));	// 39672 push    ax ;~ 1359:2C27
cs=0x1359;eip=0x002c28; 	T(ax = bp+var_14);	// 39673 lea     ax, [bp+var_14] ;~ 1359:2C28
cs=0x1359;eip=0x002c2b; 	X(PUSH(ax));	// 39674 push    ax ;~ 1359:2C2B
cs=0x1359;eip=0x002c2c; 	X(PUSH(dialogarg2));	// 39675 push    dialogarg2 ;~ 1359:2C2C
cs=0x1359;eip=0x002c30; 	T(MOV(ax, 0x0FFFF));	// 39676 mov     ax, 0FFFFh ;~ 1359:2C30
cs=0x1359;eip=0x002c33; 	X(PUSH(ax));	// 39677 push    ax ;~ 1359:2C33
cs=0x1359;eip=0x002c34; 	X(PUSH(ax));	// 39678 push    ax ;~ 1359:2C34
cs=0x1359;eip=0x002c35; 	T(MOV(ax, offset(dseg,amdo)));	// 39679 mov     ax, offset aMdo ; "mdo" ;~ 1359:2C35
cs=0x1359;eip=0x002c38; 	X(PUSH(ax));	// 39680 push    ax ;~ 1359:2C38
cs=0x1359;eip=0x002c39; 	X(PUSH(word_449a2));	// 39681 push    word_449A2 ;~ 1359:2C39
cs=0x1359;eip=0x002c3d; 	X(PUSH(gameresptr));	// 39682 push    gameresptr ;~ 1359:2C3D
cs=0x1359;eip=0x002c41; 	J(CALLF(locate_text_res,0));	// 39683 call    locate_text_res ;~ 1359:2C41
cs=0x1359;eip=0x002c46; 	T(ADD(sp, 6));	// 39684 add     sp, 6 ;~ 1359:2C46
cs=0x1359;eip=0x002c49; 	X(PUSH(dx));	// 39685 push    dx ;~ 1359:2C49
cs=0x1359;eip=0x002c4a; 	X(PUSH(ax));	// 39686 push    ax ;~ 1359:2C4A
cs=0x1359;eip=0x002c4b; 	T(SUB(ax, ax));	// 39687 sub     ax, ax ;~ 1359:2C4B
cs=0x1359;eip=0x002c4d; 	X(PUSH(ax));	// 39688 push    ax ;~ 1359:2C4D
cs=0x1359;eip=0x002c4e; 	T(MOV(ax, 2));	// 39689 mov     ax, 2 ;~ 1359:2C4E
cs=0x1359;eip=0x002c51; 	X(PUSH(ax));	// 39690 push    ax ;~ 1359:2C51
cs=0x1359;eip=0x002c52; 	J(CALLF(show_dialog,0));	// 39691 call    show_dialog ;~ 1359:2C52
cs=0x1359;eip=0x002c57; 	T(ADD(sp, 0x12));	// 39692 add     sp, 12h ;~ 1359:2C57
cs=0x1359;eip=0x002c5a; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 39693 mov     [bp+var_2], al ;~ 1359:2C5A
cs=0x1359;eip=0x002c5d; 	T(CBW);	// 39694 cbw ;~ 1359:2C5D
cs=0x1359;eip=0x002c5e; 	T(OR(ax, ax));	// 39695 or      ax, ax ;~ 1359:2C5E
cs=0x1359;eip=0x002c60; 	J(JZ(loc_247e8));	// 39696 jz      short loc_247E8 ;~ 1359:2C60
cs=0x1359;eip=0x002c62; 	T(CMP(ax, 1));	// 39697 cmp     ax, 1 ;~ 1359:2C62
cs=0x1359;eip=0x002c65; 	J(JZ(loc_247f0));	// 39698 jz      short loc_247F0 ;~ 1359:2C65
cs=0x1359;eip=0x002c67; 	T(CMP(ax, 2));	// 39699 cmp     ax, 2 ;~ 1359:2C67
cs=0x1359;eip=0x002c6a; 	J(JZ(loc_247f8));	// 39700 jz      short loc_247F8 ;~ 1359:2C6A
cs=0x1359;eip=0x002c6c; 	T(CMP(ax, 3));	// 39701 cmp     ax, 3 ;~ 1359:2C6C
cs=0x1359;eip=0x002c6f; 	J(JZ(loc_2480a));	// 39702 jz      short loc_2480A ;~ 1359:2C6F
cs=0x1359;eip=0x002c71; 	T(CMP(ax, 4));	// 39703 cmp     ax, 4 ;~ 1359:2C71
cs=0x1359;eip=0x002c74; 	J(JZ(loc_24812));	// 39704 jz      short loc_24812 ;~ 1359:2C74
cs=0x1359;eip=0x002c76; 	J(JMP(def_24411));	// 39705 jmp     short def_24411 ; jumptable 00024411 default case ;~ 1359:2C76
loc_247e8:
	// 7038 
cs=0x1359;eip=0x002c78; 	X(XOR(dashb_toggle, 1));	// 39709 xor     dashb_toggle, 1 ;~ 1359:2C78
cs=0x1359;eip=0x002c7d; 	J(JMP(def_24411));	// 39710 jmp     short def_24411 ; jumptable 00024411 default case ;~ 1359:2C7D
loc_247f0:
	// 7039 
cs=0x1359;eip=0x002c80; 	X(XOR(replaybar_toggle, 1));	// 39715 xor     replaybar_toggle, 1 ; "replay bar on/off (while driving)" ;~ 1359:2C80
cs=0x1359;eip=0x002c85; 	J(JMP(def_24411));	// 39716 jmp     short def_24411 ; jumptable 00024411 default case ;~ 1359:2C85
loc_247f8:
	// 7040 
cs=0x1359;eip=0x002c88; 	X(INC(cameramode));	// 39721 inc     cameramode ;~ 1359:2C88
cs=0x1359;eip=0x002c8c; 	T(CMP(cameramode, 4));	// 39722 cmp     cameramode, 4 ;~ 1359:2C8C
cs=0x1359;eip=0x002c91; 	J(JNZ(def_24411));	// 39723 jnz     short def_24411 ; jumptable 00024411 default case ;~ 1359:2C91
cs=0x1359;eip=0x002c93; 	X(MOV(cameramode, 0));	// 39724 mov     cameramode, 0 ;~ 1359:2C93
cs=0x1359;eip=0x002c98; 	J(JMP(def_24411));	// 39725 jmp     short def_24411 ; jumptable 00024411 default case ;~ 1359:2C98
loc_2480a:
	// 7041 
cs=0x1359;eip=0x002c9a; 	J(CALLF(do_mrl_textres,0));	// 39729 call    do_mrl_textres ;~ 1359:2C9A
cs=0x1359;eip=0x002c9f; 	J(JMP(def_24411));	// 39730 jmp     short def_24411 ; jumptable 00024411 default case ;~ 1359:2C9F
loc_24812:
	// 7042 
cs=0x1359;eip=0x002ca2; 	X(XOR(followopponentflag, 1));	// 39735 xor     followOpponentFlag, 1 ;~ 1359:2CA2
cs=0x1359;eip=0x002ca7; 	J(JMP(def_24411));	// 39736 jmp     short def_24411 ; jumptable 00024411 default case ;~ 1359:2CA7
def_24411:
	// 7043 
cs=0x1359;eip=0x002cb8; 	J(CALLF(check_input,0));	// 39750 call    check_input     ; jumptable 00024411 default case ;~ 1359:2CB8
cs=0x1359;eip=0x002cbd; 	J(JMP(loc_24d5e));	// 39751 jmp     loc_24D5E ;~ 1359:2CBD
loc_24830:
	// 7044 
cs=0x1359;eip=0x002cc0; 	X(MOV(is_in_replay, 1));	// 39756 mov     is_in_replay, 1 ; jumptable 00024340 case 0 ;~ 1359:2CC0
cs=0x1359;eip=0x002cc5; 	J(CALLF(audio_carstate,0));	// 39757 call    audio_carstate ;~ 1359:2CC5
cs=0x1359;eip=0x002cca; 	T(SUB(ax, ax));	// 39758 sub     ax, ax ;~ 1359:2CCA
cs=0x1359;eip=0x002ccc; 	X(PUSH(ax));	// 39759 push    ax ;~ 1359:2CCC
cs=0x1359;eip=0x002ccd; 	X(PUSH(ax));	// 39760 push    ax ;~ 1359:2CCD
cs=0x1359;eip=0x002cce; 	T(MOV(ax, 2));	// 39761 mov     ax, 2 ;~ 1359:2CCE
cs=0x1359;eip=0x002cd1; 	X(PUSH(ax));	// 39762 push    ax ;~ 1359:2CD1
cs=0x1359;eip=0x002cd2; 	X(PUSH(cs));	// 39763 push    cs ;~ 1359:2CD2
cs=0x1359;eip=0x002cd3; 	J(CALL(loop_game,0));	// 39764 call    near ptr loop_game ;~ 1359:2CD3
cs=0x1359;eip=0x002cd6; 	T(ADD(sp, 6));	// 39765 add     sp, 6 ;~ 1359:2CD6
cs=0x1359;eip=0x002cd9; 	J(CALLF(timer_get_delta_alt,0));	// 39766 call    timer_get_delta_alt ;~ 1359:2CD9
cs=0x1359;eip=0x002cde; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), 0x14));	// 39767 mov     [bp+var_24], 14h ;~ 1359:2CDE
cs=0x1359;eip=0x002ce3; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 0));	// 39768 mov     [bp+var_22], 0 ;~ 1359:2CE3
cs=0x1359;eip=0x002ce8; 	J(JMP(loc_248f4));	// 39769 jmp     loc_248F4 ;~ 1359:2CE8
loc_2485c:
	// 7045 
cs=0x1359;eip=0x002cec; 	T(MOV(ax, 0x32));	// 39774 mov     ax, 32h ; '2' ;~ 1359:2CEC
cs=0x1359;eip=0x002cef; 	T(CWD);	// 39775 cwd ;~ 1359:2CEF
cs=0x1359;eip=0x002cf0; 	X(PUSH(dx));	// 39776 push    dx ;~ 1359:2CF0
cs=0x1359;eip=0x002cf1; 	X(PUSH(ax));	// 39777 push    ax ;~ 1359:2CF1
cs=0x1359;eip=0x002cf2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_22))));	// 39778 push    [bp+var_22] ;~ 1359:2CF2
cs=0x1359;eip=0x002cf5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 39779 push    [bp+var_24] ;~ 1359:2CF5
cs=0x1359;eip=0x002cf8; 	J(CALLF(__afldiv,0));	// 39780 call    __aFldiv ;~ 1359:2CF8
cs=0x1359;eip=0x002cfd; 	T(MOV(di, ax));	// 39781 mov     di, ax ;~ 1359:2CFD
cs=0x1359;eip=0x002cff; 	T(ADD(di, 3));	// 39782 add     di, 3 ;~ 1359:2CFF
cs=0x1359;eip=0x002d02; 	T(CMP(di, 0x64));	// 39783 cmp     di, 64h ; 'd' ;~ 1359:2D02
cs=0x1359;eip=0x002d05; 	J(JLE(loc_2487a));	// 39784 jle     short loc_2487A ;~ 1359:2D05
cs=0x1359;eip=0x002d07; 	T(MOV(di, 0x64));	// 39785 mov     di, 64h ; 'd' ;~ 1359:2D07
loc_2487a:
	// 7046 
cs=0x1359;eip=0x002d0a; 	J(CALLF(timer_get_delta_alt,0));	// 39788 call    timer_get_delta_alt ;~ 1359:2D0A
cs=0x1359;eip=0x002d0f; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 39789 mov     [bp+var_18], ax ;~ 1359:2D0F
cs=0x1359;eip=0x002d12; 	T(IMUL1_2(di));	// 39790 imul    di ;~ 1359:2D12
cs=0x1359;eip=0x002d14; 	T(MOV(si, ax));	// 39791 mov     si, ax ;~ 1359:2D14
cs=0x1359;eip=0x002d16; 	T(CWD);	// 39792 cwd ;~ 1359:2D16
cs=0x1359;eip=0x002d17; 	X(ADD(*(dw*)(raddr(ss,bp+var_24)), ax));	// 39793 add     [bp+var_24], ax ;~ 1359:2D17
cs=0x1359;eip=0x002d1a; 	X(ADC(*(dw*)(raddr(ss,bp+var_22)), dx));	// 39794 adc     [bp+var_22], dx ;~ 1359:2D1A
cs=0x1359;eip=0x002d1d; 	T(MOV(ax, word_449bc));	// 39795 mov     ax, word_449BC ;~ 1359:2D1D
cs=0x1359;eip=0x002d20; 	T(SUB(ax, elapsed_time2));	// 39796 sub     ax, elapsed_time2 ;~ 1359:2D20
cs=0x1359;eip=0x002d24; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 39797 mov     [bp+var_44], ax ;~ 1359:2D24
cs=0x1359;eip=0x002d27; 	T(MOV(ax, 0x14));	// 39798 mov     ax, 14h ;~ 1359:2D27
cs=0x1359;eip=0x002d2a; 	T(CWD);	// 39799 cwd ;~ 1359:2D2A
cs=0x1359;eip=0x002d2b; 	X(PUSH(dx));	// 39800 push    dx ;~ 1359:2D2B
cs=0x1359;eip=0x002d2c; 	X(PUSH(ax));	// 39801 push    ax ;~ 1359:2D2C
cs=0x1359;eip=0x002d2d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_22))));	// 39802 push    [bp+var_22] ;~ 1359:2D2D
cs=0x1359;eip=0x002d30; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 39803 push    [bp+var_24] ;~ 1359:2D30
cs=0x1359;eip=0x002d33; 	J(CALLF(__afldiv,0));	// 39804 call    __aFldiv ;~ 1359:2D33
cs=0x1359;eip=0x002d38; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_44))));	// 39805 cmp     ax, [bp+var_44] ;~ 1359:2D38
cs=0x1359;eip=0x002d3b; 	J(JBE(loc_248c4));	// 39806 jbe     short loc_248C4 ;~ 1359:2D3B
cs=0x1359;eip=0x002d3d; 	T(MOV(ax, 0x14));	// 39807 mov     ax, 14h ;~ 1359:2D3D
cs=0x1359;eip=0x002d40; 	T(CWD);	// 39808 cwd ;~ 1359:2D40
cs=0x1359;eip=0x002d41; 	X(PUSH(dx));	// 39809 push    dx ;~ 1359:2D41
cs=0x1359;eip=0x002d42; 	X(PUSH(ax));	// 39810 push    ax ;~ 1359:2D42
cs=0x1359;eip=0x002d43; 	T(SUB(ax, ax));	// 39811 sub     ax, ax ;~ 1359:2D43
cs=0x1359;eip=0x002d45; 	X(PUSH(ax));	// 39812 push    ax ;~ 1359:2D45
cs=0x1359;eip=0x002d46; 	X(PUSH(*(dw*)(raddr(ss,bp+var_44))));	// 39813 push    [bp+var_44] ;~ 1359:2D46
cs=0x1359;eip=0x002d49; 	J(CALLF(__aflmul,0));	// 39814 call    __aFlmul ;~ 1359:2D49
cs=0x1359;eip=0x002d4e; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 39815 mov     [bp+var_24], ax ;~ 1359:2D4E
cs=0x1359;eip=0x002d51; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), dx));	// 39816 mov     [bp+var_22], dx ;~ 1359:2D51
loc_248c4:
	// 7047 
cs=0x1359;eip=0x002d54; 	T(MOV(ax, 0x14));	// 39819 mov     ax, 14h ;~ 1359:2D54
cs=0x1359;eip=0x002d57; 	T(CWD);	// 39820 cwd ;~ 1359:2D57
cs=0x1359;eip=0x002d58; 	X(PUSH(dx));	// 39821 push    dx ;~ 1359:2D58
cs=0x1359;eip=0x002d59; 	X(PUSH(ax));	// 39822 push    ax ;~ 1359:2D59
cs=0x1359;eip=0x002d5a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_22))));	// 39823 push    [bp+var_22] ;~ 1359:2D5A
cs=0x1359;eip=0x002d5d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 39824 push    [bp+var_24] ;~ 1359:2D5D
cs=0x1359;eip=0x002d60; 	J(CALLF(__afldiv,0));	// 39825 call    __aFldiv ;~ 1359:2D60
cs=0x1359;eip=0x002d65; 	T(ADD(ax, elapsed_time2));	// 39826 add     ax, elapsed_time2 ;~ 1359:2D65
cs=0x1359;eip=0x002d69; 	X(PUSH(ax));	// 39827 push    ax ;~ 1359:2D69
cs=0x1359;eip=0x002d6a; 	X(PUSH(word_445d4));	// 39828 push    word_445D4 ;~ 1359:2D6A
cs=0x1359;eip=0x002d6e; 	T(MOV(ax, 1));	// 39829 mov     ax, 1 ;~ 1359:2D6E
cs=0x1359;eip=0x002d71; 	X(PUSH(ax));	// 39830 push    ax ;~ 1359:2D71
cs=0x1359;eip=0x002d72; 	X(PUSH(cs));	// 39831 push    cs ;~ 1359:2D72
cs=0x1359;eip=0x002d73; 	J(CALL(loop_game,0));	// 39832 call    near ptr loop_game ;~ 1359:2D73
cs=0x1359;eip=0x002d76; 	T(ADD(sp, 6));	// 39833 add     sp, 6 ;~ 1359:2D76
cs=0x1359;eip=0x002d79; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 39834 push    [bp+var_18] ;~ 1359:2D79
cs=0x1359;eip=0x002d7c; 	J(CALLF(input_do_checking,0));	// 39835 call    input_do_checking ;~ 1359:2D7C
cs=0x1359;eip=0x002d81; 	T(ADD(sp, 2));	// 39836 add     sp, 2 ;~ 1359:2D81
loc_248f4:
	// 7048 
cs=0x1359;eip=0x002d84; 	T(TEST(*(db*)(((db*)&kbjoyflags)), 0x30));	// 39839 test    byte ptr kbjoyflags, 30h ;~ 1359:2D84
cs=0x1359;eip=0x002d89; 	J(JZ(loc_248fe));	// 39840 jz      short loc_248FE ;~ 1359:2D89
cs=0x1359;eip=0x002d8b; 	J(JMP(loc_2485c));	// 39841 jmp     loc_2485C ;~ 1359:2D8B
loc_248fe:
	// 7049 
cs=0x1359;eip=0x002d8e; 	T(MOV(ax, word_449bc));	// 39845 mov     ax, word_449BC ;~ 1359:2D8E
cs=0x1359;eip=0x002d91; 	T(SUB(ax, elapsed_time2));	// 39846 sub     ax, elapsed_time2 ;~ 1359:2D91
cs=0x1359;eip=0x002d95; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 39847 mov     [bp+var_44], ax ;~ 1359:2D95
cs=0x1359;eip=0x002d98; 	T(MOV(ax, 0x14));	// 39848 mov     ax, 14h ;~ 1359:2D98
cs=0x1359;eip=0x002d9b; 	T(CWD);	// 39849 cwd ;~ 1359:2D9B
cs=0x1359;eip=0x002d9c; 	X(PUSH(dx));	// 39850 push    dx ;~ 1359:2D9C
cs=0x1359;eip=0x002d9d; 	X(PUSH(ax));	// 39851 push    ax ;~ 1359:2D9D
cs=0x1359;eip=0x002d9e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_22))));	// 39852 push    [bp+var_22] ;~ 1359:2D9E
cs=0x1359;eip=0x002da1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 39853 push    [bp+var_24] ;~ 1359:2DA1
cs=0x1359;eip=0x002da4; 	J(CALLF(__afldiv,0));	// 39854 call    __aFldiv ;~ 1359:2DA4
cs=0x1359;eip=0x002da9; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_44))));	// 39855 cmp     ax, [bp+var_44] ;~ 1359:2DA9
cs=0x1359;eip=0x002dac; 	J(JBE(loc_24935));	// 39856 jbe     short loc_24935 ;~ 1359:2DAC
cs=0x1359;eip=0x002dae; 	T(MOV(ax, 0x14));	// 39857 mov     ax, 14h ;~ 1359:2DAE
cs=0x1359;eip=0x002db1; 	T(CWD);	// 39858 cwd ;~ 1359:2DB1
cs=0x1359;eip=0x002db2; 	X(PUSH(dx));	// 39859 push    dx ;~ 1359:2DB2
cs=0x1359;eip=0x002db3; 	X(PUSH(ax));	// 39860 push    ax ;~ 1359:2DB3
cs=0x1359;eip=0x002db4; 	T(SUB(ax, ax));	// 39861 sub     ax, ax ;~ 1359:2DB4
cs=0x1359;eip=0x002db6; 	X(PUSH(ax));	// 39862 push    ax ;~ 1359:2DB6
cs=0x1359;eip=0x002db7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_44))));	// 39863 push    [bp+var_44] ;~ 1359:2DB7
cs=0x1359;eip=0x002dba; 	J(CALLF(__aflmul,0));	// 39864 call    __aFlmul ;~ 1359:2DBA
cs=0x1359;eip=0x002dbf; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 39865 mov     [bp+var_24], ax ;~ 1359:2DBF
cs=0x1359;eip=0x002dc2; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), dx));	// 39866 mov     [bp+var_22], dx ;~ 1359:2DC2
loc_24935:
	// 7050 
cs=0x1359;eip=0x002dc5; 	T(MOV(ax, 0x14));	// 39869 mov     ax, 14h ;~ 1359:2DC5
cs=0x1359;eip=0x002dc8; 	T(CWD);	// 39870 cwd ;~ 1359:2DC8
cs=0x1359;eip=0x002dc9; 	X(PUSH(dx));	// 39871 push    dx ;~ 1359:2DC9
cs=0x1359;eip=0x002dca; 	X(PUSH(ax));	// 39872 push    ax ;~ 1359:2DCA
cs=0x1359;eip=0x002dcb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_22))));	// 39873 push    [bp+var_22] ;~ 1359:2DCB
cs=0x1359;eip=0x002dce; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 39874 push    [bp+var_24] ;~ 1359:2DCE
cs=0x1359;eip=0x002dd1; 	J(CALLF(__afldiv,0));	// 39875 call    __aFldiv ;~ 1359:2DD1
cs=0x1359;eip=0x002dd6; 	T(MOV(si, ax));	// 39876 mov     si, ax ;~ 1359:2DD6
cs=0x1359;eip=0x002dd8; 	T(ADD(si, elapsed_time2));	// 39877 add     si, elapsed_time2 ;~ 1359:2DD8
cs=0x1359;eip=0x002ddc; 	T(CMP(word_449bc, si));	// 39878 cmp     word_449BC, si ;~ 1359:2DDC
cs=0x1359;eip=0x002de0; 	J(JGE(loc_24956));	// 39879 jge     short loc_24956 ;~ 1359:2DE0
cs=0x1359;eip=0x002de2; 	T(MOV(si, word_449bc));	// 39880 mov     si, word_449BC ;~ 1359:2DE2
loc_24956:
	// 7051 
cs=0x1359;eip=0x002de6; 	X(PUSH(si));	// 39883 push    si ;~ 1359:2DE6
cs=0x1359;eip=0x002de7; 	J(CALLF(restore_gamestate,0));	// 39884 call    restore_gamestate ;~ 1359:2DE7
cs=0x1359;eip=0x002dec; 	T(ADD(sp, 2));	// 39885 add     sp, 2 ;~ 1359:2DEC
cs=0x1359;eip=0x002def; 	X(MOV(elapsed_time2, si));	// 39886 mov     elapsed_time2, si ;~ 1359:2DEF
cs=0x1359;eip=0x002df3; 	T(SUB(ax, ax));	// 39887 sub     ax, ax ;~ 1359:2DF3
cs=0x1359;eip=0x002df5; 	X(PUSH(ax));	// 39888 push    ax ;~ 1359:2DF5
cs=0x1359;eip=0x002df6; 	T(MOV(ax, 4));	// 39889 mov     ax, 4 ;~ 1359:2DF6
cs=0x1359;eip=0x002df9; 	X(PUSH(ax));	// 39890 push    ax ;~ 1359:2DF9
cs=0x1359;eip=0x002dfa; 	T(MOV(ax, 2));	// 39891 mov     ax, 2 ;~ 1359:2DFA
cs=0x1359;eip=0x002dfd; 	X(PUSH(ax));	// 39892 push    ax ;~ 1359:2DFD
cs=0x1359;eip=0x002dfe; 	X(PUSH(cs));	// 39893 push    cs ;~ 1359:2DFE
cs=0x1359;eip=0x002dff; 	J(CALL(loop_game,0));	// 39894 call    near ptr loop_game ;~ 1359:2DFF
cs=0x1359;eip=0x002e02; 	T(ADD(sp, 6));	// 39895 add     sp, 6 ;~ 1359:2E02
cs=0x1359;eip=0x002e05; 	T(MOV(ax, offset(dseg,awai_0)));	// 39896 mov     ax, offset aWai_0 ; "wai" ;~ 1359:2E05
cs=0x1359;eip=0x002e08; 	X(PUSH(ax));	// 39897 push    ax ;~ 1359:2E08
cs=0x1359;eip=0x002e09; 	X(PUSH(word_449a2));	// 39898 push    word_449A2 ;~ 1359:2E09
cs=0x1359;eip=0x002e0d; 	X(PUSH(gameresptr));	// 39899 push    gameresptr ;~ 1359:2E0D
cs=0x1359;eip=0x002e11; 	J(CALLF(locate_text_res,0));	// 39900 call    locate_text_res ;~ 1359:2E11
cs=0x1359;eip=0x002e16; 	T(ADD(sp, 6));	// 39901 add     sp, 6 ;~ 1359:2E16
cs=0x1359;eip=0x002e19; 	X(PUSH(dx));	// 39902 push    dx ;~ 1359:2E19
cs=0x1359;eip=0x002e1a; 	X(PUSH(ax));	// 39903 push    ax ;~ 1359:2E1A
cs=0x1359;eip=0x002e1b; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 39904 mov     ax, offset resID_byte1 ;~ 1359:2E1B
cs=0x1359;eip=0x002e1e; 	X(PUSH(ax));	// 39905 push    ax ;~ 1359:2E1E
cs=0x1359;eip=0x002e1f; 	J(CALLF(copy_string,0));	// 39906 call    copy_string ;~ 1359:2E1F
cs=0x1359;eip=0x002e24; 	T(ADD(sp, 6));	// 39907 add     sp, 6 ;~ 1359:2E24
cs=0x1359;eip=0x002e27; 	T(CMP(timertestflag_copy, 0));	// 39908 cmp     timertestflag_copy, 0 ;~ 1359:2E27
cs=0x1359;eip=0x002e2c; 	J(JZ(loc_249d2));	// 39909 jz      short loc_249D2 ;~ 1359:2E2C
cs=0x1359;eip=0x002e2e; 	X(PUSH(rectptr_unk2));	// 39910 push    rectptr_unk2 ;~ 1359:2E2E
cs=0x1359;eip=0x002e32; 	T(SUB(ax, ax));	// 39911 sub     ax, ax ;~ 1359:2E32
cs=0x1359;eip=0x002e34; 	X(PUSH(ax));	// 39912 push    ax ;~ 1359:2E34
cs=0x1359;eip=0x002e35; 	X(PUSH(dialog_fnt_colour));	// 39913 push    dialog_fnt_colour ;~ 1359:2E35
cs=0x1359;eip=0x002e39; 	T(MOV(ax, 0x64));	// 39914 mov     ax, 64h ; 'd' ;~ 1359:2E39
cs=0x1359;eip=0x002e3c; 	X(PUSH(ax));	// 39915 push    ax ;~ 1359:2E3C
cs=0x1359;eip=0x002e3d; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 39916 mov     ax, offset resID_byte1 ;~ 1359:2E3D
cs=0x1359;eip=0x002e40; 	X(PUSH(ax));	// 39917 push    ax ;~ 1359:2E40
cs=0x1359;eip=0x002e41; 	J(CALLF(font_op2_alt,0));	// 39918 call    font_op2_alt ;~ 1359:2E41
cs=0x1359;eip=0x002e46; 	T(ADD(sp, 2));	// 39919 add     sp, 2 ;~ 1359:2E46
cs=0x1359;eip=0x002e49; 	X(PUSH(ax));	// 39920 push    ax ;~ 1359:2E49
cs=0x1359;eip=0x002e4a; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 39921 mov     ax, offset resID_byte1 ;~ 1359:2E4A
cs=0x1359;eip=0x002e4d; 	X(PUSH(ax));	// 39922 push    ax ;~ 1359:2E4D
cs=0x1359;eip=0x002e4e; 	J(CALLF(intro_draw_text,0));	// 39923 call    intro_draw_text ;~ 1359:2E4E
cs=0x1359;eip=0x002e53; 	T(ADD(sp, 0x0A));	// 39924 add     sp, 0Ah ;~ 1359:2E53
cs=0x1359;eip=0x002e56; 	X(PUSH(ax));	// 39925 push    ax ;~ 1359:2E56
cs=0x1359;eip=0x002e57; 	X(PUSH(rectptr_unk2));	// 39926 push    rectptr_unk2 ;~ 1359:2E57
cs=0x1359;eip=0x002e5b; 	J(CALLF(rect_union,0));	// 39927 call    rect_union ;~ 1359:2E5B
cs=0x1359;eip=0x002e60; 	J(JMP(loc_24a0d));	// 39928 jmp     short loc_24A0D ;~ 1359:2E60
loc_249d2:
	// 7052 
cs=0x1359;eip=0x002e62; 	T(SUB(ax, ax));	// 39932 sub     ax, ax ;~ 1359:2E62
cs=0x1359;eip=0x002e64; 	X(PUSH(ax));	// 39933 push    ax ;~ 1359:2E64
cs=0x1359;eip=0x002e65; 	X(PUSH(dialog_fnt_colour));	// 39934 push    dialog_fnt_colour ;~ 1359:2E65
cs=0x1359;eip=0x002e69; 	T(MOV(ax, 0x64));	// 39935 mov     ax, 64h ; 'd' ;~ 1359:2E69
cs=0x1359;eip=0x002e6c; 	X(PUSH(ax));	// 39936 push    ax ;~ 1359:2E6C
cs=0x1359;eip=0x002e6d; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 39937 mov     ax, offset resID_byte1 ;~ 1359:2E6D
cs=0x1359;eip=0x002e70; 	X(PUSH(ax));	// 39938 push    ax ;~ 1359:2E70
cs=0x1359;eip=0x002e71; 	J(CALLF(font_op2_alt,0));	// 39939 call    font_op2_alt ;~ 1359:2E71
cs=0x1359;eip=0x002e76; 	T(ADD(sp, 2));	// 39940 add     sp, 2 ;~ 1359:2E76
cs=0x1359;eip=0x002e79; 	X(PUSH(ax));	// 39941 push    ax ;~ 1359:2E79
cs=0x1359;eip=0x002e7a; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 39942 mov     ax, offset resID_byte1 ;~ 1359:2E7A
cs=0x1359;eip=0x002e7d; 	X(PUSH(ax));	// 39943 push    ax ;~ 1359:2E7D
cs=0x1359;eip=0x002e7e; 	J(CALLF(intro_draw_text,0));	// 39944 call    intro_draw_text ;~ 1359:2E7E
cs=0x1359;eip=0x002e83; 	T(ADD(sp, 0x0A));	// 39945 add     sp, 0Ah ;~ 1359:2E83
cs=0x1359;eip=0x002e86; 	J(JMP(loc_24a10));	// 39946 jmp     short loc_24A10 ;~ 1359:2E86
loc_249f8:
	// 7053 
cs=0x1359;eip=0x002e88; 	J(CALLF(update_gamestate,0));	// 39950 call    update_gamestate ;~ 1359:2E88
cs=0x1359;eip=0x002e8d; 	X(PUSH(elapsed_time2));	// 39951 push    elapsed_time2 ;~ 1359:2E8D
cs=0x1359;eip=0x002e91; 	X(PUSH(word_445d4));	// 39952 push    word_445D4 ;~ 1359:2E91
cs=0x1359;eip=0x002e95; 	T(MOV(ax, 1));	// 39953 mov     ax, 1 ;~ 1359:2E95
cs=0x1359;eip=0x002e98; 	X(PUSH(ax));	// 39954 push    ax ;~ 1359:2E98
cs=0x1359;eip=0x002e99; 	X(PUSH(cs));	// 39955 push    cs ;~ 1359:2E99
cs=0x1359;eip=0x002e9a; 	J(CALL(loop_game,0));	// 39956 call    near ptr loop_game ;~ 1359:2E9A
loc_24a0d:
	// 7054 
cs=0x1359;eip=0x002e9d; 	T(ADD(sp, 6));	// 39959 add     sp, 6 ;~ 1359:2E9D
loc_24a10:
	// 7055 
cs=0x1359;eip=0x002ea0; 	T(MOV(ax, elapsed_time2));	// 39962 mov     ax, elapsed_time2 ;~ 1359:2EA0
cs=0x1359;eip=0x002ea3; 	T(CMP(word_445d4, ax));	// 39963 cmp     word_445D4, ax ;~ 1359:2EA3
cs=0x1359;eip=0x002ea7; 	J(JNZ(loc_249f8));	// 39964 jnz     short loc_249F8 ;~ 1359:2EA7
loc_24a19:
	// 7056 
cs=0x1359;eip=0x002ea9; 	T(MOV(ax, 0x3E8));	// 39967 mov     ax, 3E8h ;~ 1359:2EA9
cs=0x1359;eip=0x002eac; 	X(PUSH(ax));	// 39968 push    ax ;~ 1359:2EAC
cs=0x1359;eip=0x002ead; 	J(CALLF(input_do_checking,0));	// 39969 call    input_do_checking ;~ 1359:2EAD
cs=0x1359;eip=0x002eb2; 	T(ADD(sp, 2));	// 39970 add     sp, 2 ;~ 1359:2EB2
cs=0x1359;eip=0x002eb5; 	J(JMP(loc_24d5e));	// 39971 jmp     loc_24D5E ;~ 1359:2EB5
loc_24a28:
	// 7057 
cs=0x1359;eip=0x002eb8; 	X(MOV(is_in_replay, 1));	// 39976 mov     is_in_replay, 1 ; jumptable 00024340 case 1 ;~ 1359:2EB8
cs=0x1359;eip=0x002ebd; 	J(CALLF(audio_carstate,0));	// 39977 call    audio_carstate ;~ 1359:2EBD
cs=0x1359;eip=0x002ec2; 	T(SUB(ax, ax));	// 39978 sub     ax, ax ;~ 1359:2EC2
cs=0x1359;eip=0x002ec4; 	X(PUSH(ax));	// 39979 push    ax ;~ 1359:2EC4
cs=0x1359;eip=0x002ec5; 	T(MOV(ax, 1));	// 39980 mov     ax, 1 ;~ 1359:2EC5
cs=0x1359;eip=0x002ec8; 	X(PUSH(ax));	// 39981 push    ax ;~ 1359:2EC8
cs=0x1359;eip=0x002ec9; 	T(MOV(ax, 2));	// 39982 mov     ax, 2 ;~ 1359:2EC9
cs=0x1359;eip=0x002ecc; 	X(PUSH(ax));	// 39983 push    ax ;~ 1359:2ECC
cs=0x1359;eip=0x002ecd; 	X(PUSH(cs));	// 39984 push    cs ;~ 1359:2ECD
cs=0x1359;eip=0x002ece; 	J(CALL(loop_game,0));	// 39985 call    near ptr loop_game ;~ 1359:2ECE
cs=0x1359;eip=0x002ed1; 	T(ADD(sp, 6));	// 39986 add     sp, 6 ;~ 1359:2ED1
cs=0x1359;eip=0x002ed4; 	J(CALLF(timer_get_delta_alt,0));	// 39987 call    timer_get_delta_alt ;~ 1359:2ED4
cs=0x1359;eip=0x002ed9; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), 0x14));	// 39988 mov     [bp+var_24], 14h ;~ 1359:2ED9
cs=0x1359;eip=0x002ede; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 0));	// 39989 mov     [bp+var_22], 0 ;~ 1359:2EDE
cs=0x1359;eip=0x002ee3; 	J(JMP(loc_24aea));	// 39990 jmp     loc_24AEA ;~ 1359:2EE3
loc_24a58:
	// 7058 
cs=0x1359;eip=0x002ee8; 	T(MOV(ax, 0x32));	// 39996 mov     ax, 32h ; '2' ;~ 1359:2EE8
cs=0x1359;eip=0x002eeb; 	T(CWD);	// 39997 cwd ;~ 1359:2EEB
cs=0x1359;eip=0x002eec; 	X(PUSH(dx));	// 39998 push    dx ;~ 1359:2EEC
cs=0x1359;eip=0x002eed; 	X(PUSH(ax));	// 39999 push    ax ;~ 1359:2EED
cs=0x1359;eip=0x002eee; 	X(PUSH(*(dw*)(raddr(ss,bp+var_22))));	// 40000 push    [bp+var_22] ;~ 1359:2EEE
cs=0x1359;eip=0x002ef1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 40001 push    [bp+var_24] ;~ 1359:2EF1
cs=0x1359;eip=0x002ef4; 	J(CALLF(__afldiv,0));	// 40002 call    __aFldiv ;~ 1359:2EF4
cs=0x1359;eip=0x002ef9; 	T(MOV(di, ax));	// 40003 mov     di, ax ;~ 1359:2EF9
cs=0x1359;eip=0x002efb; 	T(ADD(di, 3));	// 40004 add     di, 3 ;~ 1359:2EFB
cs=0x1359;eip=0x002efe; 	T(CMP(di, 0x64));	// 40005 cmp     di, 64h ; 'd' ;~ 1359:2EFE
cs=0x1359;eip=0x002f01; 	J(JLE(loc_24a76));	// 40006 jle     short loc_24A76 ;~ 1359:2F01
cs=0x1359;eip=0x002f03; 	T(MOV(di, 0x64));	// 40007 mov     di, 64h ; 'd' ;~ 1359:2F03
loc_24a76:
	// 7059 
cs=0x1359;eip=0x002f06; 	J(CALLF(timer_get_delta_alt,0));	// 40010 call    timer_get_delta_alt ;~ 1359:2F06
cs=0x1359;eip=0x002f0b; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 40011 mov     [bp+var_18], ax ;~ 1359:2F0B
cs=0x1359;eip=0x002f0e; 	T(IMUL1_2(di));	// 40012 imul    di ;~ 1359:2F0E
cs=0x1359;eip=0x002f10; 	T(MOV(si, ax));	// 40013 mov     si, ax ;~ 1359:2F10
cs=0x1359;eip=0x002f12; 	T(CWD);	// 40014 cwd ;~ 1359:2F12
cs=0x1359;eip=0x002f13; 	X(ADD(*(dw*)(raddr(ss,bp+var_24)), ax));	// 40015 add     [bp+var_24], ax ;~ 1359:2F13
cs=0x1359;eip=0x002f16; 	X(ADC(*(dw*)(raddr(ss,bp+var_22)), dx));	// 40016 adc     [bp+var_22], dx ;~ 1359:2F16
cs=0x1359;eip=0x002f19; 	T(MOV(ax, 0x14));	// 40017 mov     ax, 14h ;~ 1359:2F19
cs=0x1359;eip=0x002f1c; 	T(CWD);	// 40018 cwd ;~ 1359:2F1C
cs=0x1359;eip=0x002f1d; 	X(PUSH(dx));	// 40019 push    dx ;~ 1359:2F1D
cs=0x1359;eip=0x002f1e; 	X(PUSH(ax));	// 40020 push    ax ;~ 1359:2F1E
cs=0x1359;eip=0x002f1f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_22))));	// 40021 push    [bp+var_22] ;~ 1359:2F1F
cs=0x1359;eip=0x002f22; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 40022 push    [bp+var_24] ;~ 1359:2F22
cs=0x1359;eip=0x002f25; 	J(CALLF(__afldiv,0));	// 40023 call    __aFldiv ;~ 1359:2F25
cs=0x1359;eip=0x002f2a; 	T(CMP(ax, elapsed_time2));	// 40024 cmp     ax, elapsed_time2 ;~ 1359:2F2A
cs=0x1359;eip=0x002f2e; 	J(JBE(loc_24ab8));	// 40025 jbe     short loc_24AB8 ;~ 1359:2F2E
cs=0x1359;eip=0x002f30; 	T(MOV(ax, 0x14));	// 40026 mov     ax, 14h ;~ 1359:2F30
cs=0x1359;eip=0x002f33; 	T(CWD);	// 40027 cwd ;~ 1359:2F33
cs=0x1359;eip=0x002f34; 	X(PUSH(dx));	// 40028 push    dx ;~ 1359:2F34
cs=0x1359;eip=0x002f35; 	X(PUSH(ax));	// 40029 push    ax ;~ 1359:2F35
cs=0x1359;eip=0x002f36; 	T(SUB(ax, ax));	// 40030 sub     ax, ax ;~ 1359:2F36
cs=0x1359;eip=0x002f38; 	X(PUSH(ax));	// 40031 push    ax ;~ 1359:2F38
cs=0x1359;eip=0x002f39; 	X(PUSH(elapsed_time2));	// 40032 push    elapsed_time2 ;~ 1359:2F39
cs=0x1359;eip=0x002f3d; 	J(CALLF(__aflmul,0));	// 40033 call    __aFlmul ;~ 1359:2F3D
cs=0x1359;eip=0x002f42; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 40034 mov     [bp+var_24], ax ;~ 1359:2F42
cs=0x1359;eip=0x002f45; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), dx));	// 40035 mov     [bp+var_22], dx ;~ 1359:2F45
loc_24ab8:
	// 7060 
cs=0x1359;eip=0x002f48; 	T(MOV(ax, 0x14));	// 40038 mov     ax, 14h ;~ 1359:2F48
cs=0x1359;eip=0x002f4b; 	T(CWD);	// 40039 cwd ;~ 1359:2F4B
cs=0x1359;eip=0x002f4c; 	X(PUSH(dx));	// 40040 push    dx ;~ 1359:2F4C
cs=0x1359;eip=0x002f4d; 	X(PUSH(ax));	// 40041 push    ax ;~ 1359:2F4D
cs=0x1359;eip=0x002f4e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_22))));	// 40042 push    [bp+var_22] ;~ 1359:2F4E
cs=0x1359;eip=0x002f51; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 40043 push    [bp+var_24] ;~ 1359:2F51
cs=0x1359;eip=0x002f54; 	J(CALLF(__afldiv,0));	// 40044 call    __aFldiv ;~ 1359:2F54
cs=0x1359;eip=0x002f59; 	T(MOV(cx, elapsed_time2));	// 40045 mov     cx, elapsed_time2 ;~ 1359:2F59
cs=0x1359;eip=0x002f5d; 	T(SUB(cx, ax));	// 40046 sub     cx, ax ;~ 1359:2F5D
cs=0x1359;eip=0x002f5f; 	X(PUSH(cx));	// 40047 push    cx ;~ 1359:2F5F
cs=0x1359;eip=0x002f60; 	X(PUSH(word_445d4));	// 40048 push    word_445D4 ;~ 1359:2F60
cs=0x1359;eip=0x002f64; 	T(MOV(ax, 1));	// 40049 mov     ax, 1 ;~ 1359:2F64
cs=0x1359;eip=0x002f67; 	X(PUSH(ax));	// 40050 push    ax ;~ 1359:2F67
cs=0x1359;eip=0x002f68; 	X(PUSH(cs));	// 40051 push    cs ;~ 1359:2F68
cs=0x1359;eip=0x002f69; 	J(CALL(loop_game,0));	// 40052 call    near ptr loop_game ;~ 1359:2F69
cs=0x1359;eip=0x002f6c; 	T(ADD(sp, 6));	// 40053 add     sp, 6 ;~ 1359:2F6C
cs=0x1359;eip=0x002f6f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 40054 push    [bp+var_18] ;~ 1359:2F6F
cs=0x1359;eip=0x002f72; 	J(CALLF(input_do_checking,0));	// 40055 call    input_do_checking ;~ 1359:2F72
cs=0x1359;eip=0x002f77; 	T(ADD(sp, 2));	// 40056 add     sp, 2 ;~ 1359:2F77
loc_24aea:
	// 7061 
cs=0x1359;eip=0x002f7a; 	T(TEST(*(db*)(((db*)&kbjoyflags)), 0x30));	// 40059 test    byte ptr kbjoyflags, 30h ;~ 1359:2F7A
cs=0x1359;eip=0x002f7f; 	J(JZ(loc_24af4));	// 40060 jz      short loc_24AF4 ;~ 1359:2F7F
cs=0x1359;eip=0x002f81; 	J(JMP(loc_24a58));	// 40061 jmp     loc_24A58 ;~ 1359:2F81
loc_24af4:
	// 7062 
cs=0x1359;eip=0x002f84; 	T(MOV(ax, 0x14));	// 40065 mov     ax, 14h ;~ 1359:2F84
cs=0x1359;eip=0x002f87; 	T(CWD);	// 40066 cwd ;~ 1359:2F87
cs=0x1359;eip=0x002f88; 	X(PUSH(dx));	// 40067 push    dx ;~ 1359:2F88
cs=0x1359;eip=0x002f89; 	X(PUSH(ax));	// 40068 push    ax ;~ 1359:2F89
cs=0x1359;eip=0x002f8a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_22))));	// 40069 push    [bp+var_22] ;~ 1359:2F8A
cs=0x1359;eip=0x002f8d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 40070 push    [bp+var_24] ;~ 1359:2F8D
cs=0x1359;eip=0x002f90; 	J(CALLF(__afldiv,0));	// 40071 call    __aFldiv ;~ 1359:2F90
cs=0x1359;eip=0x002f95; 	T(CMP(ax, elapsed_time2));	// 40072 cmp     ax, elapsed_time2 ;~ 1359:2F95
cs=0x1359;eip=0x002f99; 	J(JBE(loc_24b23));	// 40073 jbe     short loc_24B23 ;~ 1359:2F99
cs=0x1359;eip=0x002f9b; 	T(MOV(ax, 0x14));	// 40074 mov     ax, 14h ;~ 1359:2F9B
cs=0x1359;eip=0x002f9e; 	T(CWD);	// 40075 cwd ;~ 1359:2F9E
cs=0x1359;eip=0x002f9f; 	X(PUSH(dx));	// 40076 push    dx ;~ 1359:2F9F
cs=0x1359;eip=0x002fa0; 	X(PUSH(ax));	// 40077 push    ax ;~ 1359:2FA0
cs=0x1359;eip=0x002fa1; 	T(SUB(ax, ax));	// 40078 sub     ax, ax ;~ 1359:2FA1
cs=0x1359;eip=0x002fa3; 	X(PUSH(ax));	// 40079 push    ax ;~ 1359:2FA3
cs=0x1359;eip=0x002fa4; 	X(PUSH(elapsed_time2));	// 40080 push    elapsed_time2 ;~ 1359:2FA4
cs=0x1359;eip=0x002fa8; 	J(CALLF(__aflmul,0));	// 40081 call    __aFlmul ;~ 1359:2FA8
cs=0x1359;eip=0x002fad; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 40082 mov     [bp+var_24], ax ;~ 1359:2FAD
cs=0x1359;eip=0x002fb0; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), dx));	// 40083 mov     [bp+var_22], dx ;~ 1359:2FB0
loc_24b23:
	// 7063 
cs=0x1359;eip=0x002fb3; 	T(MOV(ax, 0x14));	// 40086 mov     ax, 14h ;~ 1359:2FB3
cs=0x1359;eip=0x002fb6; 	T(CWD);	// 40087 cwd ;~ 1359:2FB6
cs=0x1359;eip=0x002fb7; 	X(PUSH(dx));	// 40088 push    dx ;~ 1359:2FB7
cs=0x1359;eip=0x002fb8; 	X(PUSH(ax));	// 40089 push    ax ;~ 1359:2FB8
cs=0x1359;eip=0x002fb9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_22))));	// 40090 push    [bp+var_22] ;~ 1359:2FB9
cs=0x1359;eip=0x002fbc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 40091 push    [bp+var_24] ;~ 1359:2FBC
cs=0x1359;eip=0x002fbf; 	J(CALLF(__afldiv,0));	// 40092 call    __aFldiv ;~ 1359:2FBF
cs=0x1359;eip=0x002fc4; 	T(MOV(di, ax));	// 40093 mov     di, ax ;~ 1359:2FC4
cs=0x1359;eip=0x002fc6; 	T(SUB(ax, ax));	// 40094 sub     ax, ax ;~ 1359:2FC6
cs=0x1359;eip=0x002fc8; 	X(PUSH(ax));	// 40095 push    ax ;~ 1359:2FC8
cs=0x1359;eip=0x002fc9; 	T(MOV(ax, 4));	// 40096 mov     ax, 4 ;~ 1359:2FC9
cs=0x1359;eip=0x002fcc; 	X(PUSH(ax));	// 40097 push    ax ;~ 1359:2FCC
cs=0x1359;eip=0x002fcd; 	T(MOV(ax, 2));	// 40098 mov     ax, 2 ;~ 1359:2FCD
cs=0x1359;eip=0x002fd0; 	X(PUSH(ax));	// 40099 push    ax ;~ 1359:2FD0
cs=0x1359;eip=0x002fd1; 	X(PUSH(cs));	// 40100 push    cs ;~ 1359:2FD1
cs=0x1359;eip=0x002fd2; 	J(CALL(loop_game,0));	// 40101 call    near ptr loop_game ;~ 1359:2FD2
cs=0x1359;eip=0x002fd5; 	T(ADD(sp, 6));	// 40102 add     sp, 6 ;~ 1359:2FD5
cs=0x1359;eip=0x002fd8; 	T(OR(di, di));	// 40103 or      di, di ;~ 1359:2FD8
cs=0x1359;eip=0x002fda; 	J(JNZ(loc_24b4f));	// 40104 jnz     short loc_24B4F ;~ 1359:2FDA
cs=0x1359;eip=0x002fdc; 	J(JMP(loc_24c43));	// 40105 jmp     loc_24C43 ;~ 1359:2FDC
loc_24b4f:
	// 7064 
cs=0x1359;eip=0x002fdf; 	T(MOV(ax, offset(dseg,awai_1)));	// 40109 mov     ax, offset aWai_1 ; "wai" ;~ 1359:2FDF
cs=0x1359;eip=0x002fe2; 	X(PUSH(ax));	// 40110 push    ax ;~ 1359:2FE2
cs=0x1359;eip=0x002fe3; 	X(PUSH(word_449a2));	// 40111 push    word_449A2 ;~ 1359:2FE3
cs=0x1359;eip=0x002fe7; 	X(PUSH(gameresptr));	// 40112 push    gameresptr ;~ 1359:2FE7
cs=0x1359;eip=0x002feb; 	J(CALLF(locate_text_res,0));	// 40113 call    locate_text_res ;~ 1359:2FEB
cs=0x1359;eip=0x002ff0; 	T(ADD(sp, 6));	// 40114 add     sp, 6 ;~ 1359:2FF0
cs=0x1359;eip=0x002ff3; 	X(PUSH(dx));	// 40115 push    dx ;~ 1359:2FF3
cs=0x1359;eip=0x002ff4; 	X(PUSH(ax));	// 40116 push    ax ;~ 1359:2FF4
cs=0x1359;eip=0x002ff5; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 40117 mov     ax, offset resID_byte1 ;~ 1359:2FF5
cs=0x1359;eip=0x002ff8; 	X(PUSH(ax));	// 40118 push    ax ;~ 1359:2FF8
cs=0x1359;eip=0x002ff9; 	J(CALLF(copy_string,0));	// 40119 call    copy_string ;~ 1359:2FF9
cs=0x1359;eip=0x002ffe; 	T(ADD(sp, 6));	// 40120 add     sp, 6 ;~ 1359:2FFE
cs=0x1359;eip=0x003001; 	T(CMP(timertestflag_copy, 0));	// 40121 cmp     timertestflag_copy, 0 ;~ 1359:3001
cs=0x1359;eip=0x003006; 	J(JZ(loc_24bb0));	// 40122 jz      short loc_24BB0 ;~ 1359:3006
cs=0x1359;eip=0x003008; 	X(PUSH(rectptr_unk2));	// 40123 push    rectptr_unk2 ;~ 1359:3008
cs=0x1359;eip=0x00300c; 	T(SUB(ax, ax));	// 40124 sub     ax, ax ;~ 1359:300C
cs=0x1359;eip=0x00300e; 	X(PUSH(ax));	// 40125 push    ax ;~ 1359:300E
cs=0x1359;eip=0x00300f; 	X(PUSH(dialog_fnt_colour));	// 40126 push    dialog_fnt_colour ;~ 1359:300F
cs=0x1359;eip=0x003013; 	T(MOV(ax, 0x64));	// 40127 mov     ax, 64h ; 'd' ;~ 1359:3013
cs=0x1359;eip=0x003016; 	X(PUSH(ax));	// 40128 push    ax ;~ 1359:3016
cs=0x1359;eip=0x003017; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 40129 mov     ax, offset resID_byte1 ;~ 1359:3017
cs=0x1359;eip=0x00301a; 	X(PUSH(ax));	// 40130 push    ax ;~ 1359:301A
cs=0x1359;eip=0x00301b; 	J(CALLF(font_op2_alt,0));	// 40131 call    font_op2_alt ;~ 1359:301B
cs=0x1359;eip=0x003020; 	T(ADD(sp, 2));	// 40132 add     sp, 2 ;~ 1359:3020
cs=0x1359;eip=0x003023; 	X(PUSH(ax));	// 40133 push    ax ;~ 1359:3023
cs=0x1359;eip=0x003024; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 40134 mov     ax, offset resID_byte1 ;~ 1359:3024
cs=0x1359;eip=0x003027; 	X(PUSH(ax));	// 40135 push    ax ;~ 1359:3027
cs=0x1359;eip=0x003028; 	J(CALLF(intro_draw_text,0));	// 40136 call    intro_draw_text ;~ 1359:3028
cs=0x1359;eip=0x00302d; 	T(ADD(sp, 0x0A));	// 40137 add     sp, 0Ah ;~ 1359:302D
cs=0x1359;eip=0x003030; 	X(PUSH(ax));	// 40138 push    ax ;~ 1359:3030
cs=0x1359;eip=0x003031; 	X(PUSH(rectptr_unk2));	// 40139 push    rectptr_unk2 ;~ 1359:3031
cs=0x1359;eip=0x003035; 	J(CALLF(rect_union,0));	// 40140 call    rect_union ;~ 1359:3035
cs=0x1359;eip=0x00303a; 	T(ADD(sp, 6));	// 40141 add     sp, 6 ;~ 1359:303A
cs=0x1359;eip=0x00303d; 	J(JMP(loc_24bd4));	// 40142 jmp     short loc_24BD4 ;~ 1359:303D
loc_24bb0:
	// 7065 
cs=0x1359;eip=0x003040; 	T(SUB(ax, ax));	// 40147 sub     ax, ax ;~ 1359:3040
cs=0x1359;eip=0x003042; 	X(PUSH(ax));	// 40148 push    ax ;~ 1359:3042
cs=0x1359;eip=0x003043; 	X(PUSH(dialog_fnt_colour));	// 40149 push    dialog_fnt_colour ;~ 1359:3043
cs=0x1359;eip=0x003047; 	T(MOV(ax, 0x64));	// 40150 mov     ax, 64h ; 'd' ;~ 1359:3047
cs=0x1359;eip=0x00304a; 	X(PUSH(ax));	// 40151 push    ax ;~ 1359:304A
cs=0x1359;eip=0x00304b; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 40152 mov     ax, offset resID_byte1 ;~ 1359:304B
cs=0x1359;eip=0x00304e; 	X(PUSH(ax));	// 40153 push    ax ;~ 1359:304E
cs=0x1359;eip=0x00304f; 	J(CALLF(font_op2_alt,0));	// 40154 call    font_op2_alt ;~ 1359:304F
cs=0x1359;eip=0x003054; 	T(ADD(sp, 2));	// 40155 add     sp, 2 ;~ 1359:3054
cs=0x1359;eip=0x003057; 	X(PUSH(ax));	// 40156 push    ax ;~ 1359:3057
cs=0x1359;eip=0x003058; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 40157 mov     ax, offset resID_byte1 ;~ 1359:3058
cs=0x1359;eip=0x00305b; 	X(PUSH(ax));	// 40158 push    ax ;~ 1359:305B
cs=0x1359;eip=0x00305c; 	J(CALLF(intro_draw_text,0));	// 40159 call    intro_draw_text ;~ 1359:305C
cs=0x1359;eip=0x003061; 	T(ADD(sp, 0x0A));	// 40160 add     sp, 0Ah ;~ 1359:3061
loc_24bd4:
	// 7066 
cs=0x1359;eip=0x003064; 	T(MOV(si, elapsed_time2));	// 40163 mov     si, elapsed_time2 ;~ 1359:3064
cs=0x1359;eip=0x003068; 	T(SUB(si, di));	// 40164 sub     si, di ;~ 1359:3068
cs=0x1359;eip=0x00306a; 	X(PUSH(si));	// 40165 push    si ;~ 1359:306A
cs=0x1359;eip=0x00306b; 	J(CALLF(restore_gamestate,0));	// 40166 call    restore_gamestate ;~ 1359:306B
cs=0x1359;eip=0x003070; 	T(ADD(sp, 2));	// 40167 add     sp, 2 ;~ 1359:3070
cs=0x1359;eip=0x003073; 	X(MOV(elapsed_time2, si));	// 40168 mov     elapsed_time2, si ;~ 1359:3073
cs=0x1359;eip=0x003077; 	T(MOV(ax, si));	// 40169 mov     ax, si ;~ 1359:3077
cs=0x1359;eip=0x003079; 	T(SUB(ax, word_445d4));	// 40170 sub     ax, word_445D4 ;~ 1359:3079
cs=0x1359;eip=0x00307d; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 40171 mov     [bp+var_4], ax ;~ 1359:307D
cs=0x1359;eip=0x003080; 	T(OR(ax, ax));	// 40172 or      ax, ax ;~ 1359:3080
cs=0x1359;eip=0x003082; 	J(JZ(loc_24c43));	// 40173 jz      short loc_24C43 ;~ 1359:3082
cs=0x1359;eip=0x003084; 	T(MOV(si, ax));	// 40174 mov     si, ax ;~ 1359:3084
cs=0x1359;eip=0x003086; 	J(JMP(loc_24c3a));	// 40175 jmp     short loc_24C3A ;~ 1359:3086
loc_24bf8:
	// 7067 
cs=0x1359;eip=0x003088; 	J(CALLF(update_gamestate,0));	// 40179 call    update_gamestate ;~ 1359:3088
cs=0x1359;eip=0x00308d; 	T(DEC(si));	// 40180 dec     si ;~ 1359:308D
cs=0x1359;eip=0x00308e; 	X(PUSH(elapsed_time2));	// 40181 push    elapsed_time2 ;~ 1359:308E
cs=0x1359;eip=0x003092; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 40182 mov     ax, [bp+var_4] ;~ 1359:3092
cs=0x1359;eip=0x003095; 	T(CWD);	// 40183 cwd ;~ 1359:3095
cs=0x1359;eip=0x003096; 	X(PUSH(dx));	// 40184 push    dx ;~ 1359:3096
cs=0x1359;eip=0x003097; 	X(PUSH(ax));	// 40185 push    ax ;~ 1359:3097
cs=0x1359;eip=0x003098; 	T(MOV(ax, di));	// 40186 mov     ax, di ;~ 1359:3098
cs=0x1359;eip=0x00309a; 	T(CWD);	// 40187 cwd ;~ 1359:309A
cs=0x1359;eip=0x00309b; 	X(PUSH(dx));	// 40188 push    dx ;~ 1359:309B
cs=0x1359;eip=0x00309c; 	X(PUSH(ax));	// 40189 push    ax ;~ 1359:309C
cs=0x1359;eip=0x00309d; 	T(MOV(ax, si));	// 40190 mov     ax, si ;~ 1359:309D
cs=0x1359;eip=0x00309f; 	T(CWD);	// 40191 cwd ;~ 1359:309F
cs=0x1359;eip=0x0030a0; 	X(PUSH(dx));	// 40192 push    dx ;~ 1359:30A0
cs=0x1359;eip=0x0030a1; 	X(PUSH(ax));	// 40193 push    ax ;~ 1359:30A1
cs=0x1359;eip=0x0030a2; 	J(CALLF(__aflmul,0));	// 40194 call    __aFlmul ;~ 1359:30A2
cs=0x1359;eip=0x0030a7; 	X(PUSH(dx));	// 40195 push    dx ;~ 1359:30A7
cs=0x1359;eip=0x0030a8; 	X(PUSH(ax));	// 40196 push    ax ;~ 1359:30A8
cs=0x1359;eip=0x0030a9; 	J(CALLF(__afldiv,0));	// 40197 call    __aFldiv ;~ 1359:30A9
cs=0x1359;eip=0x0030ae; 	T(ADD(ax, elapsed_time2));	// 40198 add     ax, elapsed_time2 ;~ 1359:30AE
cs=0x1359;eip=0x0030b2; 	X(PUSH(ax));	// 40199 push    ax ;~ 1359:30B2
cs=0x1359;eip=0x0030b3; 	T(MOV(ax, 1));	// 40200 mov     ax, 1 ;~ 1359:30B3
cs=0x1359;eip=0x0030b6; 	X(PUSH(ax));	// 40201 push    ax ;~ 1359:30B6
cs=0x1359;eip=0x0030b7; 	X(PUSH(cs));	// 40202 push    cs ;~ 1359:30B7
cs=0x1359;eip=0x0030b8; 	J(CALL(loop_game,0));	// 40203 call    near ptr loop_game ;~ 1359:30B8
cs=0x1359;eip=0x0030bb; 	T(ADD(sp, 6));	// 40204 add     sp, 6 ;~ 1359:30BB
cs=0x1359;eip=0x0030be; 	T(MOV(ax, 1));	// 40205 mov     ax, 1 ;~ 1359:30BE
cs=0x1359;eip=0x0030c1; 	X(PUSH(ax));	// 40206 push    ax ;~ 1359:30C1
cs=0x1359;eip=0x0030c2; 	J(CALLF(input_do_checking,0));	// 40207 call    input_do_checking ;~ 1359:30C2
cs=0x1359;eip=0x0030c7; 	T(ADD(sp, 2));	// 40208 add     sp, 2 ;~ 1359:30C7
loc_24c3a:
	// 7068 
cs=0x1359;eip=0x0030ca; 	T(MOV(ax, elapsed_time2));	// 40211 mov     ax, elapsed_time2 ;~ 1359:30CA
cs=0x1359;eip=0x0030cd; 	T(CMP(word_445d4, ax));	// 40212 cmp     word_445D4, ax ;~ 1359:30CD
cs=0x1359;eip=0x0030d1; 	J(JNZ(loc_24bf8));	// 40213 jnz     short loc_24BF8 ;~ 1359:30D1
loc_24c43:
	// 7069 
cs=0x1359;eip=0x0030d3; 	X(PUSH(word_445d4));	// 40217 push    word_445D4 ;~ 1359:30D3
cs=0x1359;eip=0x0030d7; 	X(PUSH(word_445d4));	// 40218 push    word_445D4 ;~ 1359:30D7
cs=0x1359;eip=0x0030db; 	T(MOV(ax, 1));	// 40219 mov     ax, 1 ;~ 1359:30DB
cs=0x1359;eip=0x0030de; 	X(PUSH(ax));	// 40220 push    ax ;~ 1359:30DE
cs=0x1359;eip=0x0030df; 	X(PUSH(cs));	// 40221 push    cs ;~ 1359:30DF
cs=0x1359;eip=0x0030e0; 	J(CALL(loop_game,0));	// 40222 call    near ptr loop_game ;~ 1359:30E0
cs=0x1359;eip=0x0030e3; 	T(ADD(sp, 6));	// 40223 add     sp, 6 ;~ 1359:30E3
cs=0x1359;eip=0x0030e6; 	J(JMP(loc_24a19));	// 40224 jmp     loc_24A19 ;~ 1359:30E6
loc_24c5a:
	// 7070 
cs=0x1359;eip=0x0030ea; 	X(MOV(byte_449e6, 0));	// 40230 mov     byte_449E6, 0   ; jumptable 00024340 case 3 ;~ 1359:30EA
cs=0x1359;eip=0x0030ef; 	T(SUB(ax, ax));	// 40231 sub     ax, ax ;~ 1359:30EF
cs=0x1359;eip=0x0030f1; 	X(PUSH(ax));	// 40232 push    ax ;~ 1359:30F1
cs=0x1359;eip=0x0030f2; 	T(MOV(ax, 3));	// 40233 mov     ax, 3 ;~ 1359:30F2
cs=0x1359;eip=0x0030f5; 	X(PUSH(ax));	// 40234 push    ax ;~ 1359:30F5
cs=0x1359;eip=0x0030f6; 	T(MOV(ax, 2));	// 40235 mov     ax, 2 ;~ 1359:30F6
cs=0x1359;eip=0x0030f9; 	X(PUSH(ax));	// 40236 push    ax ;~ 1359:30F9
cs=0x1359;eip=0x0030fa; 	X(PUSH(cs));	// 40237 push    cs ;~ 1359:30FA
cs=0x1359;eip=0x0030fb; 	J(CALL(loop_game,0));	// 40238 call    near ptr loop_game ;~ 1359:30FB
cs=0x1359;eip=0x0030fe; 	T(ADD(sp, 6));	// 40239 add     sp, 6 ;~ 1359:30FE
cs=0x1359;eip=0x003101; 	J(JMP(loc_24d18));	// 40240 jmp     loc_24D18 ;~ 1359:3101
loc_24c74:
	// 7071 
cs=0x1359;eip=0x003104; 	X(MOV(is_in_replay, 1));	// 40245 mov     is_in_replay, 1 ; jumptable 00024340 case 4 ;~ 1359:3104
cs=0x1359;eip=0x003109; 	J(CALLF(audio_carstate,0));	// 40246 call    audio_carstate ;~ 1359:3109
cs=0x1359;eip=0x00310e; 	T(SUB(ax, ax));	// 40247 sub     ax, ax ;~ 1359:310E
cs=0x1359;eip=0x003110; 	X(PUSH(ax));	// 40248 push    ax ;~ 1359:3110
cs=0x1359;eip=0x003111; 	T(MOV(ax, 4));	// 40249 mov     ax, 4 ;~ 1359:3111
cs=0x1359;eip=0x003114; 	X(PUSH(ax));	// 40250 push    ax ;~ 1359:3114
cs=0x1359;eip=0x003115; 	T(MOV(ax, 2));	// 40251 mov     ax, 2 ;~ 1359:3115
cs=0x1359;eip=0x003118; 	X(PUSH(ax));	// 40252 push    ax ;~ 1359:3118
cs=0x1359;eip=0x003119; 	X(PUSH(cs));	// 40253 push    cs ;~ 1359:3119
cs=0x1359;eip=0x00311a; 	J(CALL(loop_game,0));	// 40254 call    near ptr loop_game ;~ 1359:311A
cs=0x1359;eip=0x00311d; 	T(ADD(sp, 6));	// 40255 add     sp, 6 ;~ 1359:311D
cs=0x1359;eip=0x003120; 	X(PUSH(word_445d4));	// 40256 push    word_445D4 ;~ 1359:3120
cs=0x1359;eip=0x003124; 	X(PUSH(word_445d4));	// 40257 push    word_445D4 ;~ 1359:3124
cs=0x1359;eip=0x003128; 	T(MOV(ax, 1));	// 40258 mov     ax, 1 ;~ 1359:3128
cs=0x1359;eip=0x00312b; 	X(PUSH(ax));	// 40259 push    ax ;~ 1359:312B
cs=0x1359;eip=0x00312c; 	X(PUSH(cs));	// 40260 push    cs ;~ 1359:312C
cs=0x1359;eip=0x00312d; 	J(CALL(loop_game,0));	// 40261 call    near ptr loop_game ;~ 1359:312D
cs=0x1359;eip=0x003130; 	T(ADD(sp, 6));	// 40262 add     sp, 6 ;~ 1359:3130
cs=0x1359;eip=0x003133; 	J(JMP(def_24340));	// 40263 jmp     def_24340       ; jumptable 00024340 default case ;~ 1359:3133
loc_24ca6:
	// 7072 
cs=0x1359;eip=0x003136; 	X(MOV(is_in_replay, 1));	// 40268 mov     is_in_replay, 1 ; jumptable 00024340 case 5 ;~ 1359:3136
cs=0x1359;eip=0x00313b; 	J(CALLF(audio_carstate,0));	// 40269 call    audio_carstate ;~ 1359:313B
cs=0x1359;eip=0x003140; 	T(SUB(ax, ax));	// 40270 sub     ax, ax ;~ 1359:3140
cs=0x1359;eip=0x003142; 	X(PUSH(ax));	// 40271 push    ax ;~ 1359:3142
cs=0x1359;eip=0x003143; 	T(MOV(ax, 5));	// 40272 mov     ax, 5 ;~ 1359:3143
cs=0x1359;eip=0x003146; 	X(PUSH(ax));	// 40273 push    ax ;~ 1359:3146
cs=0x1359;eip=0x003147; 	T(MOV(ax, 2));	// 40274 mov     ax, 2 ;~ 1359:3147
cs=0x1359;eip=0x00314a; 	X(PUSH(ax));	// 40275 push    ax ;~ 1359:314A
cs=0x1359;eip=0x00314b; 	X(PUSH(cs));	// 40276 push    cs ;~ 1359:314B
cs=0x1359;eip=0x00314c; 	J(CALL(loop_game,0));	// 40277 call    near ptr loop_game ;~ 1359:314C
cs=0x1359;eip=0x00314f; 	T(ADD(sp, 6));	// 40278 add     sp, 6 ;~ 1359:314F
cs=0x1359;eip=0x003152; 	X(PUSH(word_445d4));	// 40279 push    word_445D4 ;~ 1359:3152
cs=0x1359;eip=0x003156; 	X(PUSH(word_445d4));	// 40280 push    word_445D4 ;~ 1359:3156
cs=0x1359;eip=0x00315a; 	T(MOV(ax, 1));	// 40281 mov     ax, 1 ;~ 1359:315A
cs=0x1359;eip=0x00315d; 	X(PUSH(ax));	// 40282 push    ax ;~ 1359:315D
cs=0x1359;eip=0x00315e; 	X(PUSH(cs));	// 40283 push    cs ;~ 1359:315E
cs=0x1359;eip=0x00315f; 	J(CALL(loop_game,0));	// 40284 call    near ptr loop_game ;~ 1359:315F
cs=0x1359;eip=0x003162; 	T(ADD(sp, 6));	// 40285 add     sp, 6 ;~ 1359:3162
cs=0x1359;eip=0x003165; 	T(SUB(ax, ax));	// 40286 sub     ax, ax ;~ 1359:3165
cs=0x1359;eip=0x003167; 	X(PUSH(ax));	// 40287 push    ax ;~ 1359:3167
cs=0x1359;eip=0x003168; 	J(CALLF(restore_gamestate,0));	// 40288 call    restore_gamestate ;~ 1359:3168
cs=0x1359;eip=0x00316d; 	T(ADD(sp, 2));	// 40289 add     sp, 2 ;~ 1359:316D
cs=0x1359;eip=0x003170; 	T(MOV(ax, 0x32));	// 40290 mov     ax, 32h ; '2' ;~ 1359:3170
cs=0x1359;eip=0x003173; 	T(CWD);	// 40291 cwd ;~ 1359:3173
cs=0x1359;eip=0x003174; 	X(PUSH(dx));	// 40292 push    dx ;~ 1359:3174
cs=0x1359;eip=0x003175; 	X(PUSH(ax));	// 40293 push    ax ;~ 1359:3175
cs=0x1359;eip=0x003176; 	J(CALLF(timer_get_counter_unk,0));	// 40294 call    timer_get_counter_unk ;~ 1359:3176
cs=0x1359;eip=0x00317b; 	T(ADD(sp, 4));	// 40295 add     sp, 4 ;~ 1359:317B
cs=0x1359;eip=0x00317e; 	T(SUB(ax, ax));	// 40296 sub     ax, ax ;~ 1359:317E
cs=0x1359;eip=0x003180; 	X(PUSH(ax));	// 40297 push    ax ;~ 1359:3180
cs=0x1359;eip=0x003181; 	T(MOV(ax, 4));	// 40298 mov     ax, 4 ;~ 1359:3181
cs=0x1359;eip=0x003184; 	X(PUSH(ax));	// 40299 push    ax ;~ 1359:3184
cs=0x1359;eip=0x003185; 	T(MOV(ax, 2));	// 40300 mov     ax, 2 ;~ 1359:3185
cs=0x1359;eip=0x003188; 	X(PUSH(ax));	// 40301 push    ax ;~ 1359:3188
cs=0x1359;eip=0x003189; 	X(PUSH(cs));	// 40302 push    cs ;~ 1359:3189
cs=0x1359;eip=0x00318a; 	J(CALL(loop_game,0));	// 40303 call    near ptr loop_game ;~ 1359:318A
cs=0x1359;eip=0x00318d; 	T(ADD(sp, 6));	// 40304 add     sp, 6 ;~ 1359:318D
cs=0x1359;eip=0x003190; 	J(JMP(loc_24140));	// 40305 jmp     loc_24140 ;~ 1359:3190
loc_24d04:
	// 7073 
cs=0x1359;eip=0x003194; 	T(SUB(ax, ax));	// 40311 sub     ax, ax          ; jumptable 00024340 case 2 ;~ 1359:3194
cs=0x1359;eip=0x003196; 	X(PUSH(ax));	// 40312 push    ax ;~ 1359:3196
cs=0x1359;eip=0x003197; 	T(MOV(ax, 2));	// 40313 mov     ax, 2 ;~ 1359:3197
cs=0x1359;eip=0x00319a; 	X(PUSH(ax));	// 40314 push    ax ;~ 1359:319A
cs=0x1359;eip=0x00319b; 	X(PUSH(ax));	// 40315 push    ax ;~ 1359:319B
cs=0x1359;eip=0x00319c; 	X(PUSH(cs));	// 40316 push    cs ;~ 1359:319C
cs=0x1359;eip=0x00319d; 	J(CALL(loop_game,0));	// 40317 call    near ptr loop_game ;~ 1359:319D
cs=0x1359;eip=0x0031a0; 	T(ADD(sp, 6));	// 40318 add     sp, 6 ;~ 1359:31A0
cs=0x1359;eip=0x0031a3; 	X(MOV(byte_449e6, 3));	// 40319 mov     byte_449E6, 3 ;~ 1359:31A3
loc_24d18:
	// 7074 
cs=0x1359;eip=0x0031a8; 	X(MOV(is_in_replay, 0));	// 40322 mov     is_in_replay, 0 ;~ 1359:31A8
cs=0x1359;eip=0x0031ad; 	J(JMP(def_24340));	// 40323 jmp     def_24340       ; jumptable 00024340 default case ;~ 1359:31AD
ret_1359_31be:
	// 7075 
cs=0x1359;eip=0x0031be; 	J(JMP(def_24340));	// 40333 jmp     def_24340       ; jumptable 00024340 default case ;~ 1359:31BE
loc_24d32:
	// 7076 
cs=0x1359;eip=0x0031c2; 	T(CMP(ax, 0x2D));	// 40338 cmp     ax, 2Dh ; '-' ;~ 1359:31C2
cs=0x1359;eip=0x0031c5; 	J(JNZ(loc_24d3a));	// 40339 jnz     short loc_24D3A ;~ 1359:31C5
cs=0x1359;eip=0x0031c7; 	J(JMP(loc_2426e));	// 40340 jmp     loc_2426E ;~ 1359:31C7
loc_24d3a:
	// 7077 
cs=0x1359;eip=0x0031ca; 	T(CMP(ax, 0x4800));	// 40344 cmp     ax, 4800h ;~ 1359:31CA
cs=0x1359;eip=0x0031cd; 	J(JNZ(loc_24d42));	// 40345 jnz     short loc_24D42 ;~ 1359:31CD
cs=0x1359;eip=0x0031cf; 	J(JMP(loc_2430a));	// 40346 jmp     loc_2430A ;~ 1359:31CF
loc_24d42:
	// 7078 
cs=0x1359;eip=0x0031d2; 	T(CMP(ax, 0x4B00));	// 40350 cmp     ax, 4B00h ;~ 1359:31D2
cs=0x1359;eip=0x0031d5; 	J(JNZ(loc_24d4a));	// 40351 jnz     short loc_24D4A ;~ 1359:31D5
cs=0x1359;eip=0x0031d7; 	J(JMP(loc_242c8));	// 40352 jmp     loc_242C8 ;~ 1359:31D7
loc_24d4a:
	// 7079 
cs=0x1359;eip=0x0031da; 	T(CMP(ax, 0x4D00));	// 40356 cmp     ax, 4D00h ;~ 1359:31DA
cs=0x1359;eip=0x0031dd; 	J(JNZ(loc_24d52));	// 40357 jnz     short loc_24D52 ;~ 1359:31DD
cs=0x1359;eip=0x0031df; 	J(JMP(loc_242fe));	// 40358 jmp     loc_242FE ;~ 1359:31DF
loc_24d52:
	// 7080 
cs=0x1359;eip=0x0031e2; 	T(CMP(ax, 0x5000));	// 40362 cmp     ax, 5000h ;~ 1359:31E2
cs=0x1359;eip=0x0031e5; 	J(JNZ(loc_24d5a));	// 40363 jnz     short loc_24D5A ;~ 1359:31E5
cs=0x1359;eip=0x0031e7; 	J(JMP(loc_2431e));	// 40364 jmp     loc_2431E ;~ 1359:31E7
loc_24d5a:
	// 7081 
cs=0x1359;eip=0x0031ea; 	J(JMP(def_24340));	// 40368 jmp     def_24340       ; jumptable 00024340 default case ;~ 1359:31EA
loc_24d5e:
	// 7082 
cs=0x1359;eip=0x0031ee; 	X(POP(si));	// 40374 pop     si ;~ 1359:31EE
cs=0x1359;eip=0x0031ef; 	X(POP(di));	// 40375 pop     di ;~ 1359:31EF
cs=0x1359;eip=0x0031f0; 	T(MOV(sp, bp));	// 40376 mov     sp, bp ;~ 1359:31F0
cs=0x1359;eip=0x0031f2; 	X(POP(bp));	// 40377 pop     bp ;~ 1359:31F2
cs=0x1359;eip=0x0031f3; 	J(RETF(0));	// 40378 retf ;~ 1359:31F3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdef_24340: 	goto def_24340;
        case m2c::kdef_24411: 	goto def_24411;
        case m2c::kloc_23b6d: 	goto loc_23b6d;
        case m2c::kloc_23b70: 	goto loc_23b70;
        case m2c::kloc_23b8d: 	goto loc_23b8d;
        case m2c::kloc_23b8f: 	goto loc_23b8f;
        case m2c::kloc_23ba6: 	goto loc_23ba6;
        case m2c::kloc_23bb9: 	goto loc_23bb9;
        case m2c::kloc_23bd0: 	goto loc_23bd0;
        case m2c::kloc_23c66: 	goto loc_23c66;
        case m2c::kloc_23cd7: 	goto loc_23cd7;
        case m2c::kloc_23d32: 	goto loc_23d32;
        case m2c::kloc_23d46: 	goto loc_23d46;
        case m2c::kloc_23d54: 	goto loc_23d54;
        case m2c::kloc_23d94: 	goto loc_23d94;
        case m2c::kloc_23dab: 	goto loc_23dab;
        case m2c::kloc_23e1a: 	goto loc_23e1a;
        case m2c::kloc_23e29: 	goto loc_23e29;
        case m2c::kloc_23e41: 	goto loc_23e41;
        case m2c::kloc_23e68: 	goto loc_23e68;
        case m2c::kloc_23e6e: 	goto loc_23e6e;
        case m2c::kloc_23e71: 	goto loc_23e71;
        case m2c::kloc_23e7a: 	goto loc_23e7a;
        case m2c::kloc_23e9a: 	goto loc_23e9a;
        case m2c::kloc_23eb3: 	goto loc_23eb3;
        case m2c::kloc_23ec6: 	goto loc_23ec6;
        case m2c::kloc_23eca: 	goto loc_23eca;
        case m2c::kloc_23f18: 	goto loc_23f18;
        case m2c::kloc_23f25: 	goto loc_23f25;
        case m2c::kloc_23f6c: 	goto loc_23f6c;
        case m2c::kloc_23fb0: 	goto loc_23fb0;
        case m2c::kloc_23fb8: 	goto loc_23fb8;
        case m2c::kloc_23fda: 	goto loc_23fda;
        case m2c::kloc_23fee: 	goto loc_23fee;
        case m2c::kloc_2402e: 	goto loc_2402e;
        case m2c::kloc_24041: 	goto loc_24041;
        case m2c::kloc_24056: 	goto loc_24056;
        case m2c::kloc_24060: 	goto loc_24060;
        case m2c::kloc_24071: 	goto loc_24071;
        case m2c::kloc_2407a: 	goto loc_2407a;
        case m2c::kloc_24082: 	goto loc_24082;
        case m2c::kloc_240c8: 	goto loc_240c8;
        case m2c::kloc_240d0: 	goto loc_240d0;
        case m2c::kloc_240d8: 	goto loc_240d8;
        case m2c::kloc_24107: 	goto loc_24107;
        case m2c::kloc_2410c: 	goto loc_2410c;
        case m2c::kloc_24129: 	goto loc_24129;
        case m2c::kloc_24140: 	goto loc_24140;
        case m2c::kloc_2415a: 	goto loc_2415a;
        case m2c::kloc_2416c: 	goto loc_2416c;
        case m2c::kloc_24181: 	goto loc_24181;
        case m2c::kloc_24193: 	goto loc_24193;
        case m2c::kloc_241c8: 	goto loc_241c8;
        case m2c::kloc_241cc: 	goto loc_241cc;
        case m2c::kloc_241dd: 	goto loc_241dd;
        case m2c::kloc_241e5: 	goto loc_241e5;
        case m2c::kloc_241f9: 	goto loc_241f9;
        case m2c::kloc_241fe: 	goto loc_241fe;
        case m2c::kloc_24209: 	goto loc_24209;
        case m2c::kloc_2420e: 	goto loc_2420e;
        case m2c::kloc_24216: 	goto loc_24216;
        case m2c::kloc_2421e: 	goto loc_2421e;
        case m2c::kloc_24226: 	goto loc_24226;
        case m2c::kloc_2422a: 	goto loc_2422a;
        case m2c::kloc_24236: 	goto loc_24236;
        case m2c::kloc_24242: 	goto loc_24242;
        case m2c::kloc_24258: 	goto loc_24258;
        case m2c::kloc_2426e: 	goto loc_2426e;
        case m2c::kloc_2427f: 	goto loc_2427f;
        case m2c::kloc_24288: 	goto loc_24288;
        case m2c::kloc_24293: 	goto loc_24293;
        case m2c::kloc_2429c: 	goto loc_2429c;
        case m2c::kloc_242ae: 	goto loc_242ae;
        case m2c::kloc_242b6: 	goto loc_242b6;
        case m2c::kloc_242c0: 	goto loc_242c0;
        case m2c::kloc_242c8: 	goto loc_242c8;
        case m2c::kloc_242e4: 	goto loc_242e4;
        case m2c::kloc_242fe: 	goto loc_242fe;
        case m2c::kloc_2430a: 	goto loc_2430a;
        case m2c::kloc_2431e: 	goto loc_2431e;
        case m2c::kloc_24328: 	goto loc_24328;
        case m2c::kloc_24334: 	goto loc_24334;
        case m2c::kloc_24346: 	goto loc_24346;
        case m2c::kloc_24377: 	goto loc_24377;
        case m2c::kloc_24394: 	goto loc_24394;
        case m2c::kloc_243a2: 	goto loc_243a2;
        case m2c::kloc_243a7: 	goto loc_243a7;
        case m2c::kloc_243b8: 	goto loc_243b8;
        case m2c::kloc_243c4: 	goto loc_243c4;
        case m2c::kloc_2440e: 	goto loc_2440e;
        case m2c::kloc_24416: 	goto loc_24416;
        case m2c::kloc_2444c: 	goto loc_2444c;
        case m2c::kloc_24453: 	goto loc_24453;
        case m2c::kloc_2445a: 	goto loc_2445a;
        case m2c::kloc_2449f: 	goto loc_2449f;
        case m2c::kloc_244a2: 	goto loc_244a2;
        case m2c::kloc_244a7: 	goto loc_244a7;
        case m2c::kloc_244b0: 	goto loc_244b0;
        case m2c::kloc_2450a: 	goto loc_2450a;
        case m2c::kloc_24548: 	goto loc_24548;
        case m2c::kloc_2458b: 	goto loc_2458b;
        case m2c::kloc_245aa: 	goto loc_245aa;
        case m2c::kloc_245ca: 	goto loc_245ca;
        case m2c::kloc_245d0: 	goto loc_245d0;
        case m2c::kloc_2460d: 	goto loc_2460d;
        case m2c::kloc_24619: 	goto loc_24619;
        case m2c::kloc_24630: 	goto loc_24630;
        case m2c::kloc_24635: 	goto loc_24635;
        case m2c::kloc_24639: 	goto loc_24639;
        case m2c::kloc_24642: 	goto loc_24642;
        case m2c::kloc_2466f: 	goto loc_2466f;
        case m2c::kloc_246e0: 	goto loc_246e0;
        case m2c::kloc_246e8: 	goto loc_246e8;
        case m2c::kloc_246f0: 	goto loc_246f0;
        case m2c::kloc_246f4: 	goto loc_246f4;
        case m2c::kloc_246fd: 	goto loc_246fd;
        case m2c::kloc_24712: 	goto loc_24712;
        case m2c::kloc_24748: 	goto loc_24748;
        case m2c::kloc_24757: 	goto loc_24757;
        case m2c::kloc_24760: 	goto loc_24760;
        case m2c::kloc_24776: 	goto loc_24776;
        case m2c::kloc_24778: 	goto loc_24778;
        case m2c::kloc_24795: 	goto loc_24795;
        case m2c::kloc_247e8: 	goto loc_247e8;
        case m2c::kloc_247f0: 	goto loc_247f0;
        case m2c::kloc_247f8: 	goto loc_247f8;
        case m2c::kloc_2480a: 	goto loc_2480a;
        case m2c::kloc_24812: 	goto loc_24812;
        case m2c::kloc_24830: 	goto loc_24830;
        case m2c::kloc_2485c: 	goto loc_2485c;
        case m2c::kloc_2487a: 	goto loc_2487a;
        case m2c::kloc_248c4: 	goto loc_248c4;
        case m2c::kloc_248f4: 	goto loc_248f4;
        case m2c::kloc_248fe: 	goto loc_248fe;
        case m2c::kloc_24935: 	goto loc_24935;
        case m2c::kloc_24956: 	goto loc_24956;
        case m2c::kloc_249d2: 	goto loc_249d2;
        case m2c::kloc_249f8: 	goto loc_249f8;
        case m2c::kloc_24a0d: 	goto loc_24a0d;
        case m2c::kloc_24a10: 	goto loc_24a10;
        case m2c::kloc_24a19: 	goto loc_24a19;
        case m2c::kloc_24a28: 	goto loc_24a28;
        case m2c::kloc_24a58: 	goto loc_24a58;
        case m2c::kloc_24a76: 	goto loc_24a76;
        case m2c::kloc_24ab8: 	goto loc_24ab8;
        case m2c::kloc_24aea: 	goto loc_24aea;
        case m2c::kloc_24af4: 	goto loc_24af4;
        case m2c::kloc_24b23: 	goto loc_24b23;
        case m2c::kloc_24b4f: 	goto loc_24b4f;
        case m2c::kloc_24bb0: 	goto loc_24bb0;
        case m2c::kloc_24bd4: 	goto loc_24bd4;
        case m2c::kloc_24bf8: 	goto loc_24bf8;
        case m2c::kloc_24c3a: 	goto loc_24c3a;
        case m2c::kloc_24c43: 	goto loc_24c43;
        case m2c::kloc_24c5a: 	goto loc_24c5a;
        case m2c::kloc_24c74: 	goto loc_24c74;
        case m2c::kloc_24ca6: 	goto loc_24ca6;
        case m2c::kloc_24d04: 	goto loc_24d04;
        case m2c::kloc_24d18: 	goto loc_24d18;
        case m2c::kloc_24d32: 	goto loc_24d32;
        case m2c::kloc_24d3a: 	goto loc_24d3a;
        case m2c::kloc_24d42: 	goto loc_24d42;
        case m2c::kloc_24d4a: 	goto loc_24d4a;
        case m2c::kloc_24d52: 	goto loc_24d52;
        case m2c::kloc_24d5a: 	goto loc_24d5a;
        case m2c::kloc_24d5e: 	goto loc_24d5e;
        case m2c::kloop_game: 	goto loop_game;
        case m2c::kret_1359_31be: 	goto ret_1359_31be;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

