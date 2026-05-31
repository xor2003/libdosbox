/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group6:
    _begin:
run_game:
	// 34356 
#undef var_16
#define var_16 -0x16
	// 34358 var_16          = byte ptr -16h ;~ 1359:000A
#undef var_14
#define var_14 -0x14
	// 34359 var_14          = word ptr -14h ;~ 1359:000A
#undef var_12
#define var_12 -0x12
	// 34360 var_12          = word ptr -12h ;~ 1359:000A
#undef var_e
#define var_e -0x0E
	// 34361 var_E           = word ptr -0Eh ;~ 1359:000A
#undef var_c
#define var_c -0x0C
	// 34362 var_C           = word ptr -0Ch ;~ 1359:000A
#undef var_a
#define var_a -0x0A
	// 34363 var_A           = word ptr -0Ah ;~ 1359:000A
#undef var_8
#define var_8 -8
	// 34364 var_8           = word ptr -8 ;~ 1359:000A
#undef var_6
#define var_6 -6
	// 34365 var_6           = word ptr -6 ;~ 1359:000A
#undef var_4
#define var_4 -4
	// 34366 var_4           = word ptr -4 ;~ 1359:000A
#undef var_2
#define var_2 -2
	// 34367 var_2           = word ptr -2 ;~ 1359:000A
ret_1359_a:
	// 6740 
cs=0x1359;eip=0x00000a; 	X(PUSH(bp));	// 34369 push    bp ;~ 1359:000A
cs=0x1359;eip=0x00000b; 	T(MOV(bp, sp));	// 34370 mov     bp, sp ;~ 1359:000B
cs=0x1359;eip=0x00000d; 	T(SUB(sp, 0x16));	// 34371 sub     sp, 16h ;~ 1359:000D
cs=0x1359;eip=0x000010; 	X(PUSH(si));	// 34372 push    si ;~ 1359:0010
cs=0x1359;eip=0x000011; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0x0FFFF));	// 34373 mov     [bp+var_C], 0FFFFh ;~ 1359:0011
cs=0x1359;eip=0x000016; 	X(MOV(rect_windshield, 0));	// 34374 mov     rect_windshield, 0 ;~ 1359:0016
cs=0x1359;eip=0x00001c; 	X(MOV(word_43936, 0x140));	// 34375 mov     word_43936, 140h ;~ 1359:001C
cs=0x1359;eip=0x000022; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0FFFF));	// 34376 mov     [bp+var_2], 0FFFFh ;~ 1359:0022
cs=0x1359;eip=0x000027; 	X(MOV(word_449ea, 0x0FFFF));	// 34377 mov     word_449EA, 0FFFFh ;~ 1359:0027
cs=0x1359;eip=0x00002d; 	R(CALLF(get_kevinrandom,0));	// 34378 call    get_kevinrandom ;~ 1359:002D
cs=0x1359;eip=0x000032; 	T(MOV(cl, 3));	// 34379 mov     cl, 3 ;~ 1359:0032
cs=0x1359;eip=0x000034; 	T(SHL(ax, cl));	// 34380 shl     ax, cl ;~ 1359:0034
cs=0x1359;eip=0x000036; 	X(MOV(run_game_random, ax));	// 34381 mov     run_game_random, ax ;~ 1359:0036
cs=0x1359;eip=0x000039; 	X(MOV(replaybar_toggle, 1));	// 34382 mov     replaybar_toggle, 1 ;~ 1359:0039
cs=0x1359;eip=0x00003e; 	X(MOV(is_in_replay, 0));	// 34383 mov     is_in_replay, 0 ;~ 1359:003E
cs=0x1359;eip=0x000043; 	T(CMP(idle_expired, 0));	// 34384 cmp     idle_expired, 0 ;~ 1359:0043
cs=0x1359;eip=0x000048; 	R(JZ(loc_21bec));	// 34385 jz      short loc_21BEC ;~ 1359:0048
cs=0x1359;eip=0x00004a; 	X(INC(cameramode));	// 34386 inc     cameramode ;~ 1359:004A
cs=0x1359;eip=0x00004e; 	T(CMP(cameramode, 4));	// 34387 cmp     cameramode, 4 ;~ 1359:004E
cs=0x1359;eip=0x000053; 	R(JNZ(loc_21bca));	// 34388 jnz     short loc_21BCA ;~ 1359:0053
cs=0x1359;eip=0x000055; 	X(MOV(cameramode, 0));	// 34389 mov     cameramode, 0 ;~ 1359:0055
loc_21bca:
	// 6741 
cs=0x1359;eip=0x00005a; 	X(MOV(game_replay_mode, 2));	// 34392 mov     game_replay_mode, 2 ;~ 1359:005A
cs=0x1359;eip=0x00005f; 	T(MOV(ax, offset(dseg,adefault)));	// 34393 mov     ax, offset aDefault ; "default" ;~ 1359:005F
cs=0x1359;eip=0x000062; 	X(PUSH(ax));	// 34394 push    ax ;~ 1359:0062
cs=0x1359;eip=0x000063; 	T(SUB(ax, ax));	// 34395 sub     ax, ax ;~ 1359:0063
cs=0x1359;eip=0x000065; 	X(PUSH(ax));	// 34396 push    ax              ; char * ;~ 1359:0065
cs=0x1359;eip=0x000066; 	X(PUSH(cs));	// 34397 push    cs ;~ 1359:0066
cs=0x1359;eip=0x000067; 	R(CALL(file_load_replay,0));	// 34398 call    near ptr file_load_replay ;~ 1359:0067
cs=0x1359;eip=0x00006a; 	T(ADD(sp, 4));	// 34399 add     sp, 4 ;~ 1359:006A
cs=0x1359;eip=0x00006d; 	T(OR(al, al));	// 34400 or      al, al ;~ 1359:006D
cs=0x1359;eip=0x00006f; 	R(JZ(loc_21be4));	// 34401 jz      short loc_21BE4 ;~ 1359:006F
cs=0x1359;eip=0x000071; 	R(JMP(loc_223f4));	// 34402 jmp     loc_223F4 ;~ 1359:0071
loc_21be4:
	// 6742 
cs=0x1359;eip=0x000074; 	R(CALLF(track_setup,0));	// 34406 call    track_setup ;~ 1359:0074
cs=0x1359;eip=0x000079; 	R(JMP(loc_21c0f));	// 34407 jmp     short loc_21C0F ;~ 1359:0079
loc_21bec:
	// 6743 
cs=0x1359;eip=0x00007c; 	T(CMP(word_449bc, 0));	// 34412 cmp     word_449BC, 0 ;~ 1359:007C
cs=0x1359;eip=0x000081; 	R(JNZ(loc_21c00));	// 34413 jnz     short loc_21C00 ;~ 1359:0081
cs=0x1359;eip=0x000083; 	X(MOV(cameramode, 0));	// 34414 mov     cameramode, 0 ;~ 1359:0083
cs=0x1359;eip=0x000088; 	X(MOV(game_replay_mode, 1));	// 34415 mov     game_replay_mode, 1 ;~ 1359:0088
cs=0x1359;eip=0x00008d; 	R(JMP(loc_21c0f));	// 34416 jmp     short loc_21C0F ;~ 1359:008D
loc_21c00:
	// 6744 
cs=0x1359;eip=0x000090; 	X(MOV(cameramode, 0));	// 34421 mov     cameramode, 0 ;~ 1359:0090
cs=0x1359;eip=0x000095; 	X(MOV(game_replay_mode, 2));	// 34422 mov     game_replay_mode, 2 ;~ 1359:0095
cs=0x1359;eip=0x00009a; 	X(MOV(is_in_replay, 1));	// 34423 mov     is_in_replay, 1 ;~ 1359:009A
loc_21c0f:
	// 6745 
cs=0x1359;eip=0x00009f; 	X(PUSH(cs));	// 34427 push    cs ;~ 1359:009F
cs=0x1359;eip=0x0000a0; 	R(CALL(setup_player_cars,0));	// 34428 call    near ptr setup_player_cars ;~ 1359:00A0
cs=0x1359;eip=0x0000a3; 	T(OR(ax, ax));	// 34429 or      ax, ax ;~ 1359:00A3
cs=0x1359;eip=0x0000a5; 	R(JZ(loc_21c24));	// 34430 jz      short loc_21C24 ;~ 1359:00A5
cs=0x1359;eip=0x0000a7; 	X(PUSH(cs));	// 34431 push    cs ;~ 1359:00A7
cs=0x1359;eip=0x0000a8; 	R(CALL(free_player_cars,0));	// 34432 call    near ptr free_player_cars ;~ 1359:00A8
cs=0x1359;eip=0x0000ab; 	R(CALLF(do_mer_restext,0));	// 34433 call    do_mer_restext ;~ 1359:00AB
cs=0x1359;eip=0x0000b0; 	R(JMP(loc_223e4));	// 34434 jmp     loc_223E4 ;~ 1359:00B0
loc_21c24:
	// 6746 
cs=0x1359;eip=0x0000b4; 	X(MOV(kbormouse, 0));	// 34439 mov     kbormouse, 0 ;~ 1359:00B4
cs=0x1359;eip=0x0000b9; 	X(MOV(byte_449e6, 0));	// 34440 mov     byte_449E6, 0 ;~ 1359:00B9
cs=0x1359;eip=0x0000be; 	X(MOV(byte_449da, 1));	// 34441 mov     byte_449DA, 1 ;~ 1359:00BE
cs=0x1359;eip=0x0000c3; 	X(PUSH(cs));	// 34442 push    cs ;~ 1359:00C3
cs=0x1359;eip=0x0000c4; 	R(CALL(set_frame_callback,0));	// 34443 call    near ptr set_frame_callback ;~ 1359:00C4
cs=0x1359;eip=0x0000c7; 	X(MOV(game_replay_mode_copy, 0x0FF));	// 34444 mov     game_replay_mode_copy, 0FFh ;~ 1359:00C7
cs=0x1359;eip=0x0000cc; 	X(MOV(byte_44346, 0));	// 34445 mov     byte_44346, 0 ;~ 1359:00CC
cs=0x1359;eip=0x0000d1; 	X(MOV(byte_4432a, 0));	// 34446 mov     byte_4432A, 0 ;~ 1359:00D1
cs=0x1359;eip=0x0000d6; 	X(MOV(byte_46467, 0));	// 34447 mov     byte_46467, 0 ;~ 1359:00D6
cs=0x1359;eip=0x0000db; 	X(MOV(dashb_toggle, 0));	// 34448 mov     dashb_toggle, 0 ;~ 1359:00DB
cs=0x1359;eip=0x0000e0; 	T(CMP(idle_expired, 0));	// 34449 cmp     idle_expired, 0 ;~ 1359:00E0
cs=0x1359;eip=0x0000e5; 	R(JZ(loc_21c6e));	// 34450 jz      short loc_21C6E ;~ 1359:00E5
cs=0x1359;eip=0x0000e7; 	T(MOV(al, byte_449ba));	// 34451 mov     al, byte_449BA ;~ 1359:00E7
cs=0x1359;eip=0x0000ea; 	T(CBW);	// 34452 cbw ;~ 1359:00EA
cs=0x1359;eip=0x0000eb; 	X(MOV(framespersec, ax));	// 34453 mov     framespersec, ax ;~ 1359:00EB
loc_21c5e:
	// 6747 
cs=0x1359;eip=0x0000ee; 	T(MOV(ax, 0x0FFFF));	// 34456 mov     ax, 0FFFFh ;~ 1359:00EE
cs=0x1359;eip=0x0000f1; 	X(PUSH(ax));	// 34457 push    ax ;~ 1359:00F1
cs=0x1359;eip=0x0000f2; 	R(CALLF(init_game_state,0));	// 34458 call    init_game_state ;~ 1359:00F2
cs=0x1359;eip=0x0000f7; 	T(ADD(sp, 2));	// 34459 add     sp, 2 ;~ 1359:00F7
cs=0x1359;eip=0x0000fa; 	R(JMP(loc_21da2));	// 34460 jmp     loc_21DA2 ;~ 1359:00FA
loc_21c6e:
	// 6748 
cs=0x1359;eip=0x0000fe; 	T(CMP(is_in_replay, 0));	// 34465 cmp     is_in_replay, 0 ;~ 1359:00FE
cs=0x1359;eip=0x000103; 	R(JZ(loc_21c78));	// 34466 jz      short loc_21C78 ;~ 1359:0103
cs=0x1359;eip=0x000105; 	R(JMP(loc_21d2c));	// 34467 jmp     loc_21D2C ;~ 1359:0105
loc_21c78:
	// 6749 
cs=0x1359;eip=0x000108; 	X(MOV(cameramode, 0));	// 34471 mov     cameramode, 0 ;~ 1359:0108
cs=0x1359;eip=0x00010d; 	X(MOV(dashb_toggle, 1));	// 34472 mov     dashb_toggle, 1 ;~ 1359:010D
cs=0x1359;eip=0x000112; 	X(MOV(show_penalty_counter, 0));	// 34473 mov     show_penalty_counter, 0 ;~ 1359:0112
cs=0x1359;eip=0x000117; 	T(MOV(ax, framespersec2));	// 34474 mov     ax, framespersec2 ;~ 1359:0117
cs=0x1359;eip=0x00011a; 	X(MOV(framespersec, ax));	// 34475 mov     framespersec, ax ;~ 1359:011A
cs=0x1359;eip=0x00011d; 	T(MOV(al, *(db*)(((db*)&framespersec2))));	// 34476 mov     al, byte ptr framespersec2 ;~ 1359:011D
cs=0x1359;eip=0x000120; 	X(MOV(byte_449ba, al));	// 34477 mov     byte_449BA, al ;~ 1359:0120
cs=0x1359;eip=0x000123; 	T(MOV(ax, 0x0FFFF));	// 34478 mov     ax, 0FFFFh ;~ 1359:0123
cs=0x1359;eip=0x000126; 	X(PUSH(ax));	// 34479 push    ax ;~ 1359:0126
cs=0x1359;eip=0x000127; 	R(CALLF(init_game_state,0));	// 34480 call    init_game_state ;~ 1359:0127
cs=0x1359;eip=0x00012c; 	T(ADD(sp, 2));	// 34481 add     sp, 2 ;~ 1359:012C
cs=0x1359;eip=0x00012f; 	X(MOV(word_45d94, 0));	// 34482 mov     word_45D94, 0 ;~ 1359:012F
cs=0x1359;eip=0x000135; 	X(MOV(*(db*)(((db*)&word_45d3e)), 0));	// 34483 mov     byte ptr word_45D3E, 0 ;~ 1359:0135
cs=0x1359;eip=0x00013a; 	X(MOV(byte_4393c, 1));	// 34484 mov     byte_4393C, 1 ;~ 1359:013A
cs=0x1359;eip=0x00013f; 	T(MOV(al, byte_3b8f2));	// 34485 mov     al, byte_3B8F2 ;~ 1359:013F
cs=0x1359;eip=0x000142; 	T(CBW);	// 34486 cbw ;~ 1359:0142
cs=0x1359;eip=0x000143; 	X(PUSH(ax));	// 34487 push    ax ;~ 1359:0143
cs=0x1359;eip=0x000144; 	X(PUSH(cs));	// 34488 push    cs ;~ 1359:0144
cs=0x1359;eip=0x000145; 	R(CALL(mouse_minmax_position,0));	// 34489 call    near ptr mouse_minmax_position ;~ 1359:0145
cs=0x1359;eip=0x000148; 	T(ADD(sp, 2));	// 34490 add     sp, 2 ;~ 1359:0148
cs=0x1359;eip=0x00014b; 	X(MOV(game_replay_mode, 1));	// 34491 mov     game_replay_mode, 1 ;~ 1359:014B
cs=0x1359;eip=0x000150; 	T(MOV(ax, 0x0FF10));	// 34492 mov     ax, 0FF10h ;~ 1359:0150
cs=0x1359;eip=0x000153; 	X(PUSH(ax));	// 34493 push    ax ;~ 1359:0153
cs=0x1359;eip=0x000154; 	X(PUSH(track_angle));	// 34494 push    track_angle ;~ 1359:0154
cs=0x1359;eip=0x000158; 	R(CALLF(sin_fast,0));	// 34495 call    sin_fast ;~ 1359:0158
cs=0x1359;eip=0x00015d; 	T(ADD(sp, 2));	// 34496 add     sp, 2 ;~ 1359:015D
cs=0x1359;eip=0x000160; 	X(PUSH(ax));	// 34497 push    ax ;~ 1359:0160
cs=0x1359;eip=0x000161; 	R(CALLF(multiply_and_scale,0));	// 34498 call    multiply_and_scale ;~ 1359:0161
cs=0x1359;eip=0x000166; 	T(ADD(sp, 4));	// 34499 add     sp, 4 ;~ 1359:0166
cs=0x1359;eip=0x000169; 	T(CWD);	// 34500 cwd ;~ 1359:0169
cs=0x1359;eip=0x00016a; 	T(MOV(cl, 6));	// 34501 mov     cl, 6 ;~ 1359:016A
loc_21cdc:
	// 6750 
cs=0x1359;eip=0x00016c; 	T(SHL(ax, 1));	// 34504 shl     ax, 1 ;~ 1359:016C
cs=0x1359;eip=0x00016e; 	T(RCL(dx, 1));	// 34505 rcl     dx, 1 ;~ 1359:016E
cs=0x1359;eip=0x000170; 	T(DEC(cl));	// 34506 dec     cl ;~ 1359:0170
cs=0x1359;eip=0x000172; 	R(JNZ(loc_21cdc));	// 34507 jnz     short loc_21CDC ;~ 1359:0172
cs=0x1359;eip=0x000174; 	X(ADD(word_445e6, ax));	// 34508 add     word_445E6, ax ;~ 1359:0174
cs=0x1359;eip=0x000178; 	X(ADC(word_445e8, dx));	// 34509 adc     word_445E8, dx ;~ 1359:0178
cs=0x1359;eip=0x00017c; 	T(MOV(ax, 0x0FF10));	// 34510 mov     ax, 0FF10h      ; -240 ;~ 1359:017C
cs=0x1359;eip=0x00017f; 	X(PUSH(ax));	// 34511 push    ax ;~ 1359:017F
cs=0x1359;eip=0x000180; 	X(PUSH(track_angle));	// 34512 push    track_angle ;~ 1359:0180
cs=0x1359;eip=0x000184; 	R(CALLF(cos_fast,0));	// 34513 call    cos_fast ;~ 1359:0184
cs=0x1359;eip=0x000189; 	T(ADD(sp, 2));	// 34514 add     sp, 2 ;~ 1359:0189
cs=0x1359;eip=0x00018c; 	X(PUSH(ax));	// 34515 push    ax ;~ 1359:018C
cs=0x1359;eip=0x00018d; 	R(CALLF(multiply_and_scale,0));	// 34516 call    multiply_and_scale ;~ 1359:018D
cs=0x1359;eip=0x000192; 	T(ADD(sp, 4));	// 34517 add     sp, 4 ;~ 1359:0192
cs=0x1359;eip=0x000195; 	T(CWD);	// 34518 cwd ;~ 1359:0195
cs=0x1359;eip=0x000196; 	T(MOV(cl, 6));	// 34519 mov     cl, 6 ;~ 1359:0196
loc_21d08:
	// 6751 
cs=0x1359;eip=0x000198; 	T(SHL(ax, 1));	// 34522 shl     ax, 1 ;~ 1359:0198
cs=0x1359;eip=0x00019a; 	T(RCL(dx, 1));	// 34523 rcl     dx, 1 ;~ 1359:019A
cs=0x1359;eip=0x00019c; 	T(DEC(cl));	// 34524 dec     cl ;~ 1359:019C
cs=0x1359;eip=0x00019e; 	R(JNZ(loc_21d08));	// 34525 jnz     short loc_21D08 ;~ 1359:019E
cs=0x1359;eip=0x0001a0; 	X(ADD(word_445ee, ax));	// 34526 add     word_445EE, ax ;~ 1359:01A0
cs=0x1359;eip=0x0001a4; 	X(ADC(word_445f0, dx));	// 34527 adc     word_445F0, dx ;~ 1359:01A4
cs=0x1359;eip=0x0001a8; 	X(ADD(word_445ea, 0x580));	// 34528 add     word_445EA, 580h ;~ 1359:01A8
cs=0x1359;eip=0x0001ae; 	X(ADC(word_445ec, 0));	// 34529 adc     word_445EC, 0 ;~ 1359:01AE
cs=0x1359;eip=0x0001b3; 	X(MOV(byte_43966, 1));	// 34530 mov     byte_43966, 1 ;~ 1359:01B3
cs=0x1359;eip=0x0001b8; 	R(JMP(loc_21da2));	// 34531 jmp     short loc_21DA2 ;~ 1359:01B8
loc_21d2c:
	// 6752 
cs=0x1359;eip=0x0001bc; 	X(MOV(cameramode, 0));	// 34537 mov     cameramode, 0 ;~ 1359:01BC
cs=0x1359;eip=0x0001c1; 	X(MOV(game_replay_mode, 2));	// 34538 mov     game_replay_mode, 2 ;~ 1359:01C1
cs=0x1359;eip=0x0001c6; 	X(MOV(word_44dca, 0x1F4));	// 34539 mov     word_44DCA, 1F4h ;~ 1359:01C6
cs=0x1359;eip=0x0001cc; 	T(MOV(al, byte_449ba));	// 34540 mov     al, byte_449BA ;~ 1359:01CC
cs=0x1359;eip=0x0001cf; 	T(CBW);	// 34541 cbw ;~ 1359:01CF
cs=0x1359;eip=0x0001d0; 	X(MOV(framespersec, ax));	// 34542 mov     framespersec, ax ;~ 1359:01D0
cs=0x1359;eip=0x0001d3; 	T(SUB(ax, ax));	// 34543 sub     ax, ax ;~ 1359:01D3
cs=0x1359;eip=0x0001d5; 	X(PUSH(ax));	// 34544 push    ax ;~ 1359:01D5
cs=0x1359;eip=0x0001d6; 	R(CALLF(restore_gamestate,0));	// 34545 call    restore_gamestate ;~ 1359:01D6
cs=0x1359;eip=0x0001db; 	T(ADD(sp, 2));	// 34546 add     sp, 2 ;~ 1359:01DB
cs=0x1359;eip=0x0001de; 	X(PUSH(word_449bc));	// 34547 push    word_449BC ;~ 1359:01DE
cs=0x1359;eip=0x0001e2; 	R(CALLF(restore_gamestate,0));	// 34548 call    restore_gamestate ;~ 1359:01E2
cs=0x1359;eip=0x0001e7; 	T(ADD(sp, 2));	// 34549 add     sp, 2 ;~ 1359:01E7
cs=0x1359;eip=0x0001ea; 	R(JMP(loc_21d72));	// 34550 jmp     short loc_21D72 ;~ 1359:01EA
loc_21d5c:
	// 6753 
cs=0x1359;eip=0x0001ec; 	T(MOV(ax, 1));	// 34554 mov     ax, 1 ;~ 1359:01EC
cs=0x1359;eip=0x0001ef; 	X(PUSH(ax));	// 34555 push    ax ;~ 1359:01EF
cs=0x1359;eip=0x0001f0; 	R(CALLF(input_do_checking,0));	// 34556 call    input_do_checking ;~ 1359:01F0
cs=0x1359;eip=0x0001f5; 	T(ADD(sp, 2));	// 34557 add     sp, 2 ;~ 1359:01F5
cs=0x1359;eip=0x0001f8; 	T(CMP(ax, 0x1B));	// 34558 cmp     ax, 1Bh ;~ 1359:01F8
cs=0x1359;eip=0x0001fb; 	R(JZ(loc_21d7b));	// 34559 jz      short loc_21D7B ;~ 1359:01FB
cs=0x1359;eip=0x0001fd; 	R(CALLF(update_gamestate,0));	// 34560 call    update_gamestate ;~ 1359:01FD
loc_21d72:
	// 6754 
cs=0x1359;eip=0x000202; 	T(MOV(ax, word_445d4));	// 34563 mov     ax, word_445D4 ;~ 1359:0202
cs=0x1359;eip=0x000205; 	T(CMP(word_449bc, ax));	// 34564 cmp     word_449BC, ax ;~ 1359:0205
cs=0x1359;eip=0x000209; 	R(JNZ(loc_21d5c));	// 34565 jnz     short loc_21D5C ;~ 1359:0209
loc_21d7b:
	// 6755 
cs=0x1359;eip=0x00020b; 	T(MOV(ax, word_449bc));	// 34568 mov     ax, word_449BC ;~ 1359:020B
cs=0x1359;eip=0x00020e; 	X(MOV(elapsed_time2, ax));	// 34569 mov     elapsed_time2, ax ;~ 1359:020E
cs=0x1359;eip=0x000211; 	R(JMP(loc_21da2));	// 34570 jmp     short loc_21DA2 ;~ 1359:0211
loc_21d84:
	// 6756 
cs=0x1359;eip=0x000214; 	T(CMP(byte_3b8f2, 0));	// 34575 cmp     byte_3B8F2, 0 ;~ 1359:0214
cs=0x1359;eip=0x000219; 	R(JNZ(loc_21d92));	// 34576 jnz     short loc_21D92 ;~ 1359:0219
cs=0x1359;eip=0x00021b; 	T(CMP(byte_3fe00, 0));	// 34577 cmp     byte_3FE00, 0 ;~ 1359:021B
cs=0x1359;eip=0x000220; 	R(JZ(loc_21d9d));	// 34578 jz      short loc_21D9D ;~ 1359:0220
loc_21d92:
	// 6757 
cs=0x1359;eip=0x000222; 	T(CMP(game_replay_mode, 0));	// 34581 cmp     game_replay_mode, 0 ;~ 1359:0222
cs=0x1359;eip=0x000227; 	R(JNZ(loc_21d9d));	// 34582 jnz     short loc_21D9D ;~ 1359:0227
cs=0x1359;eip=0x000229; 	X(PUSH(cs));	// 34583 push    cs ;~ 1359:0229
cs=0x1359;eip=0x00022a; 	R(CALL(replay_unk,0));	// 34584 call    near ptr replay_unk ;~ 1359:022A
loc_21d9d:
	// 6758 
cs=0x1359;eip=0x00022d; 	R(CALLF(update_gamestate,0));	// 34588 call    update_gamestate ;~ 1359:022D
loc_21da2:
	// 6759 
cs=0x1359;eip=0x000232; 	T(MOV(ax, elapsed_time2));	// 34592 mov     ax, elapsed_time2 ;~ 1359:0232
cs=0x1359;eip=0x000235; 	T(CMP(word_445d4, ax));	// 34593 cmp     word_445D4, ax ;~ 1359:0235
cs=0x1359;eip=0x000239; 	R(JNZ(loc_21d84));	// 34594 jnz     short loc_21D84 ;~ 1359:0239
cs=0x1359;eip=0x00023b; 	T(CMP(game_replay_mode, 0));	// 34595 cmp     game_replay_mode, 0 ;~ 1359:023B
cs=0x1359;eip=0x000240; 	R(JNZ(loc_21dcb));	// 34596 jnz     short loc_21DCB ;~ 1359:0240
cs=0x1359;eip=0x000242; 	T(CMP(byte_449da, 0));	// 34597 cmp     byte_449DA, 0 ;~ 1359:0242
cs=0x1359;eip=0x000247; 	R(JNZ(loc_21dcb));	// 34598 jnz     short loc_21DCB ;~ 1359:0247
cs=0x1359;eip=0x000249; 	T(CMP(byte_44889, 0));	// 34599 cmp     byte_44889, 0 ;~ 1359:0249
cs=0x1359;eip=0x00024e; 	R(JZ(loc_21dcb));	// 34600 jz      short loc_21DCB ;~ 1359:024E
cs=0x1359;eip=0x000250; 	T(MOV(ax, word_445d4));	// 34601 mov     ax, word_445D4 ;~ 1359:0250
cs=0x1359;eip=0x000253; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), ax));	// 34602 cmp     [bp+var_C], ax ;~ 1359:0253
cs=0x1359;eip=0x000256; 	R(JZ(loc_21da2));	// 34603 jz      short loc_21DA2 ;~ 1359:0256
cs=0x1359;eip=0x000258; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 34604 mov     [bp+var_C], ax ;~ 1359:0258
loc_21dcb:
	// 6760 
cs=0x1359;eip=0x00025b; 	T(CMP(byte_44889, 0));	// 34608 cmp     byte_44889, 0 ;~ 1359:025B
cs=0x1359;eip=0x000260; 	R(JNZ(loc_21deb));	// 34609 jnz     short loc_21DEB ;~ 1359:0260
cs=0x1359;eip=0x000262; 	T(CMP(game_replay_mode, 0));	// 34610 cmp     game_replay_mode, 0 ;~ 1359:0262
cs=0x1359;eip=0x000267; 	R(JNZ(loc_21deb));	// 34611 jnz     short loc_21DEB ;~ 1359:0267
cs=0x1359;eip=0x000269; 	X(MOV(elapsed_time2, 0));	// 34612 mov     elapsed_time2, 0 ;~ 1359:0269
cs=0x1359;eip=0x00026f; 	X(MOV(word_449bc, 0));	// 34613 mov     word_449BC, 0 ;~ 1359:026F
cs=0x1359;eip=0x000275; 	X(MOV(word_445d4, 0));	// 34614 mov     word_445D4, 0 ;~ 1359:0275
loc_21deb:
	// 6761 
cs=0x1359;eip=0x00027b; 	T(MOV(ax, timertestflag));	// 34618 mov     ax, timertestflag ;~ 1359:027B
cs=0x1359;eip=0x00027e; 	T(CMP(timertestflag_copy, ax));	// 34619 cmp     timertestflag_copy, ax ;~ 1359:027E
cs=0x1359;eip=0x000282; 	R(JZ(loc_21dfc));	// 34620 jz      short loc_21DFC ;~ 1359:0282
cs=0x1359;eip=0x000284; 	X(MOV(timertestflag_copy, ax));	// 34621 mov     timertestflag_copy, ax ;~ 1359:0284
cs=0x1359;eip=0x000287; 	R(CALLF(init_rect_arrays,0));	// 34622 call    init_rect_arrays ;~ 1359:0287
loc_21dfc:
	// 6762 
cs=0x1359;eip=0x00028c; 	T(CMP(byte_46467, 0));	// 34625 cmp     byte_46467, 0 ;~ 1359:028C
cs=0x1359;eip=0x000291; 	R(JZ(loc_21e76));	// 34626 jz      short loc_21E76 ;~ 1359:0291
cs=0x1359;eip=0x000293; 	R(CALLF(input_push_status,0));	// 34627 call    input_push_status ;~ 1359:0293
cs=0x1359;eip=0x000298; 	R(CALLF(audio_unk,0));	// 34628 call    audio_unk ;~ 1359:0298
cs=0x1359;eip=0x00029d; 	T(SUB(ax, ax));	// 34629 sub     ax, ax ;~ 1359:029D
cs=0x1359;eip=0x00029f; 	X(PUSH(ax));	// 34630 push    ax ;~ 1359:029F
cs=0x1359;eip=0x0002a0; 	X(PUSH(ax));	// 34631 push    ax ;~ 1359:02A0
cs=0x1359;eip=0x0002a1; 	X(PUSH(dialogarg2));	// 34632 push    dialogarg2 ;~ 1359:02A1
cs=0x1359;eip=0x0002a5; 	T(MOV(ax, 0x0FFFF));	// 34633 mov     ax, 0FFFFh ;~ 1359:02A5
cs=0x1359;eip=0x0002a8; 	X(PUSH(ax));	// 34634 push    ax ;~ 1359:02A8
cs=0x1359;eip=0x0002a9; 	X(PUSH(ax));	// 34635 push    ax ;~ 1359:02A9
cs=0x1359;eip=0x0002aa; 	T(MOV(ax, offset(dseg,arbf)));	// 34636 mov     ax, offset aRbf ; "rbf" ;~ 1359:02AA
cs=0x1359;eip=0x0002ad; 	X(PUSH(ax));	// 34637 push    ax ;~ 1359:02AD
cs=0x1359;eip=0x0002ae; 	X(PUSH(word_449a2));	// 34638 push    word_449A2 ;~ 1359:02AE
cs=0x1359;eip=0x0002b2; 	X(PUSH(gameresptr));	// 34639 push    gameresptr ;~ 1359:02B2
cs=0x1359;eip=0x0002b6; 	R(CALLF(locate_text_res,0));	// 34640 call    locate_text_res ;~ 1359:02B6
cs=0x1359;eip=0x0002bb; 	T(ADD(sp, 6));	// 34641 add     sp, 6 ;~ 1359:02BB
cs=0x1359;eip=0x0002be; 	X(PUSH(dx));	// 34642 push    dx ;~ 1359:02BE
cs=0x1359;eip=0x0002bf; 	X(PUSH(ax));	// 34643 push    ax ;~ 1359:02BF
cs=0x1359;eip=0x0002c0; 	T(MOV(ax, 1));	// 34644 mov     ax, 1 ;~ 1359:02C0
cs=0x1359;eip=0x0002c3; 	X(PUSH(ax));	// 34645 push    ax ;~ 1359:02C3
cs=0x1359;eip=0x0002c4; 	T(MOV(ax, 2));	// 34646 mov     ax, 2 ;~ 1359:02C4
cs=0x1359;eip=0x0002c7; 	X(PUSH(ax));	// 34647 push    ax ;~ 1359:02C7
cs=0x1359;eip=0x0002c8; 	R(CALLF(show_dialog,0));	// 34648 call    show_dialog ;~ 1359:02C8
cs=0x1359;eip=0x0002cd; 	T(ADD(sp, 0x12));	// 34649 add     sp, 12h ;~ 1359:02CD
cs=0x1359;eip=0x0002d0; 	T(MOV(si, ax));	// 34650 mov     si, ax ;~ 1359:02D0
cs=0x1359;eip=0x0002d2; 	T(CMP(si, 0x0FFFF));	// 34651 cmp     si, 0FFFFh ;~ 1359:02D2
cs=0x1359;eip=0x0002d5; 	R(JNZ(loc_21e49));	// 34652 jnz     short loc_21E49 ;~ 1359:02D5
cs=0x1359;eip=0x0002d7; 	T(SUB(si, si));	// 34653 sub     si, si ;~ 1359:02D7
loc_21e49:
	// 6763 
cs=0x1359;eip=0x0002d9; 	R(CALLF(sub_372f4,0));	// 34656 call    sub_372F4 ;~ 1359:02D9
cs=0x1359;eip=0x0002de; 	X(MOV(word_3f88e, 0));	// 34657 mov     word_3F88E, 0 ;~ 1359:02DE
cs=0x1359;eip=0x0002e4; 	R(CALLF(input_pop_status,0));	// 34658 call    input_pop_status ;~ 1359:02E4
cs=0x1359;eip=0x0002e9; 	T(OR(si, si));	// 34659 or      si, si ;~ 1359:02E9
cs=0x1359;eip=0x0002eb; 	R(JZ(loc_21e71));	// 34660 jz      short loc_21E71 ;~ 1359:02EB
cs=0x1359;eip=0x0002ed; 	T(SUB(ax, ax));	// 34661 sub     ax, ax ;~ 1359:02ED
cs=0x1359;eip=0x0002ef; 	X(PUSH(ax));	// 34662 push    ax ;~ 1359:02EF
cs=0x1359;eip=0x0002f0; 	T(MOV(ax, 4));	// 34663 mov     ax, 4 ;~ 1359:02F0
cs=0x1359;eip=0x0002f3; 	X(PUSH(ax));	// 34664 push    ax ;~ 1359:02F3
cs=0x1359;eip=0x0002f4; 	R(CALLF(update_crash_state,0));	// 34665 call    update_crash_state ;~ 1359:02F4
cs=0x1359;eip=0x0002f9; 	T(ADD(sp, 4));	// 34666 add     sp, 4 ;~ 1359:02F9
cs=0x1359;eip=0x0002fc; 	X(MOV(byte_449da, 1));	// 34667 mov     byte_449DA, 1 ;~ 1359:02FC
loc_21e71:
	// 6764 
cs=0x1359;eip=0x000301; 	X(MOV(byte_46467, 0));	// 34670 mov     byte_46467, 0 ;~ 1359:0301
loc_21e76:
	// 6765 
cs=0x1359;eip=0x000306; 	T(CMP(video_flag5_is0, 0));	// 34673 cmp     video_flag5_is0, 0 ;~ 1359:0306
cs=0x1359;eip=0x00030b; 	R(JZ(loc_21e8a));	// 34674 jz      short loc_21E8A ;~ 1359:030B
cs=0x1359;eip=0x00030d; 	R(CALLF(setup_mcgawnd2,0));	// 34675 call    setup_mcgawnd2 ;~ 1359:030D
cs=0x1359;eip=0x000312; 	T(MOV(al, byte_44346));	// 34676 mov     al, byte_44346 ;~ 1359:0312
cs=0x1359;eip=0x000315; 	X(MOV(byte_4432a, al));	// 34677 mov     byte_4432A, al ;~ 1359:0315
cs=0x1359;eip=0x000318; 	R(JMP(loc_21e8f));	// 34678 jmp     short loc_21E8F ;~ 1359:0318
loc_21e8a:
	// 6766 
cs=0x1359;eip=0x00031a; 	R(CALLF(sprite_copy_wnd_to_1,0));	// 34682 call    sprite_copy_wnd_to_1 ;~ 1359:031A
loc_21e8f:
	// 6767 
cs=0x1359;eip=0x00031f; 	T(MOV(al, game_replay_mode_copy));	// 34685 mov     al, game_replay_mode_copy ;~ 1359:031F
cs=0x1359;eip=0x000322; 	T(CMP(game_replay_mode, al));	// 34686 cmp     game_replay_mode, al ;~ 1359:0322
cs=0x1359;eip=0x000326; 	R(JNZ(loc_21ebf));	// 34687 jnz     short loc_21EBF ;~ 1359:0326
cs=0x1359;eip=0x000328; 	T(MOV(al, dashb_toggle_copy));	// 34688 mov     al, dashb_toggle_copy ;~ 1359:0328
cs=0x1359;eip=0x00032b; 	T(CMP(dashb_toggle, al));	// 34689 cmp     dashb_toggle, al ;~ 1359:032B
cs=0x1359;eip=0x00032f; 	R(JNZ(loc_21ebf));	// 34690 jnz     short loc_21EBF ;~ 1359:032F
cs=0x1359;eip=0x000331; 	T(MOV(al, replaybar_toggle_copy));	// 34691 mov     al, replaybar_toggle_copy ;~ 1359:0331
cs=0x1359;eip=0x000334; 	T(CMP(replaybar_toggle, al));	// 34692 cmp     replaybar_toggle, al ;~ 1359:0334
cs=0x1359;eip=0x000338; 	R(JNZ(loc_21ebf));	// 34693 jnz     short loc_21EBF ;~ 1359:0338
cs=0x1359;eip=0x00033a; 	T(MOV(al, is_in_replay_copy));	// 34694 mov     al, is_in_replay_copy ;~ 1359:033A
cs=0x1359;eip=0x00033d; 	T(CMP(is_in_replay, al));	// 34695 cmp     is_in_replay, al ;~ 1359:033D
cs=0x1359;eip=0x000341; 	R(JNZ(loc_21ebf));	// 34696 jnz     short loc_21EBF ;~ 1359:0341
cs=0x1359;eip=0x000343; 	T(MOV(al, followopponentflag_copy));	// 34697 mov     al, followOpponentFlag_copy ;~ 1359:0343
cs=0x1359;eip=0x000346; 	T(CMP(followopponentflag, al));	// 34698 cmp     followOpponentFlag, al ;~ 1359:0346
cs=0x1359;eip=0x00034a; 	R(JNZ(loc_21ebf));	// 34699 jnz     short loc_21EBF ;~ 1359:034A
cs=0x1359;eip=0x00034c; 	R(JMP(loc_21f7a));	// 34700 jmp     loc_21F7A ;~ 1359:034C
loc_21ebf:
	// 6768 
cs=0x1359;eip=0x00034f; 	T(MOV(al, game_replay_mode));	// 34705 mov     al, game_replay_mode ;~ 1359:034F
cs=0x1359;eip=0x000352; 	X(MOV(game_replay_mode_copy, al));	// 34706 mov     game_replay_mode_copy, al ;~ 1359:0352
cs=0x1359;eip=0x000355; 	T(MOV(al, dashb_toggle));	// 34707 mov     al, dashb_toggle ;~ 1359:0355
cs=0x1359;eip=0x000358; 	X(MOV(dashb_toggle_copy, al));	// 34708 mov     dashb_toggle_copy, al ;~ 1359:0358
cs=0x1359;eip=0x00035b; 	T(MOV(al, replaybar_toggle));	// 34709 mov     al, replaybar_toggle ;~ 1359:035B
cs=0x1359;eip=0x00035e; 	X(MOV(replaybar_toggle_copy, al));	// 34710 mov     replaybar_toggle_copy, al ;~ 1359:035E
cs=0x1359;eip=0x000361; 	T(MOV(al, is_in_replay));	// 34711 mov     al, is_in_replay ;~ 1359:0361
cs=0x1359;eip=0x000364; 	X(MOV(is_in_replay_copy, al));	// 34712 mov     is_in_replay_copy, al ;~ 1359:0364
cs=0x1359;eip=0x000367; 	T(MOV(al, followopponentflag));	// 34713 mov     al, followOpponentFlag ;~ 1359:0367
cs=0x1359;eip=0x00036a; 	X(MOV(followopponentflag_copy, al));	// 34714 mov     followOpponentFlag_copy, al ;~ 1359:036A
cs=0x1359;eip=0x00036d; 	X(MOV(roofbmpheight_copy, 0));	// 34715 mov     roofbmpheight_copy, 0 ;~ 1359:036D
cs=0x1359;eip=0x000373; 	X(MOV(byte_449e2, 0));	// 34716 mov     byte_449E2, 0 ;~ 1359:0373
cs=0x1359;eip=0x000378; 	T(CMP(game_replay_mode, 2));	// 34717 cmp     game_replay_mode, 2 ;~ 1359:0378
cs=0x1359;eip=0x00037d; 	R(JNZ(loc_21f0a));	// 34718 jnz     short loc_21F0A ;~ 1359:037D
cs=0x1359;eip=0x00037f; 	T(CMP(idle_expired, 0));	// 34719 cmp     idle_expired, 0 ;~ 1359:037F
cs=0x1359;eip=0x000384; 	R(JNZ(loc_21f0a));	// 34720 jnz     short loc_21F0A ;~ 1359:0384
cs=0x1359;eip=0x000386; 	T(CMP(replaybar_toggle, 0));	// 34721 cmp     replaybar_toggle, 0 ;~ 1359:0386
cs=0x1359;eip=0x00038b; 	R(JZ(loc_21f00));	// 34722 jz      short loc_21F00 ;~ 1359:038B
cs=0x1359;eip=0x00038d; 	R(JMP(loc_21fee));	// 34723 jmp     loc_21FEE ;~ 1359:038D
loc_21f00:
	// 6769 
cs=0x1359;eip=0x000390; 	T(CMP(is_in_replay, 0));	// 34727 cmp     is_in_replay, 0 ;~ 1359:0390
cs=0x1359;eip=0x000395; 	R(JZ(loc_21f0a));	// 34728 jz      short loc_21F0A ;~ 1359:0395
cs=0x1359;eip=0x000397; 	R(JMP(loc_21fee));	// 34729 jmp     loc_21FEE ;~ 1359:0397
loc_21f0a:
	// 6770 
cs=0x1359;eip=0x00039a; 	X(MOV(replaybar_enabled, 0));	// 34734 mov     replaybar_enabled, 0 ;~ 1359:039A
loc_21f0f:
	// 6771 
cs=0x1359;eip=0x00039f; 	T(CMP(idle_expired, 0));	// 34737 cmp     idle_expired, 0 ;~ 1359:039F
cs=0x1359;eip=0x0003a4; 	R(JNZ(loc_21f19));	// 34738 jnz     short loc_21F19 ;~ 1359:03A4
cs=0x1359;eip=0x0003a6; 	R(JMP(loc_21ff6));	// 34739 jmp     loc_21FF6 ;~ 1359:03A6
loc_21f19:
	// 6772 
cs=0x1359;eip=0x0003a9; 	X(MOV(dashbmp_y_copy, 0x0C8));	// 34744 mov     dashbmp_y_copy, 0C8h ; 'È' ;~ 1359:03A9
loc_21f1f:
	// 6773 
cs=0x1359;eip=0x0003af; 	T(MOV(ax, roofbmpheight_copy));	// 34748 mov     ax, roofbmpheight_copy ;~ 1359:03AF
cs=0x1359;eip=0x0003b2; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 34749 cmp     [bp+var_2], ax ;~ 1359:03B2
cs=0x1359;eip=0x0003b5; 	R(JNZ(loc_21f38));	// 34750 jnz     short loc_21F38 ;~ 1359:03B5
cs=0x1359;eip=0x0003b7; 	T(MOV(ax, word_449ea));	// 34751 mov     ax, word_449EA ;~ 1359:03B7
cs=0x1359;eip=0x0003ba; 	T(CMP(dashbmp_y_copy, ax));	// 34752 cmp     dashbmp_y_copy, ax ;~ 1359:03BA
cs=0x1359;eip=0x0003be; 	R(JNZ(loc_21f38));	// 34753 jnz     short loc_21F38 ;~ 1359:03BE
cs=0x1359;eip=0x0003c0; 	T(MOV(ax, height_above_replaybar));	// 34754 mov     ax, height_above_replaybar ;~ 1359:03C0
cs=0x1359;eip=0x0003c3; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), ax));	// 34755 cmp     [bp+var_E], ax ;~ 1359:03C3
cs=0x1359;eip=0x0003c6; 	R(JZ(loc_21f7a));	// 34756 jz      short loc_21F7A ;~ 1359:03C6
loc_21f38:
	// 6774 
cs=0x1359;eip=0x0003c8; 	T(MOV(al, video_flag6_is1));	// 34760 mov     al, video_flag6_is1 ;~ 1359:03C8
cs=0x1359;eip=0x0003cb; 	X(MOV(byte_454a4, al));	// 34761 mov     byte_454A4, al ;~ 1359:03CB
cs=0x1359;eip=0x0003ce; 	X(PUSH(dashbmp_y_copy));	// 34762 push    dashbmp_y_copy ;~ 1359:03CE
cs=0x1359;eip=0x0003d2; 	T(MOV(ax, 0x140));	// 34763 mov     ax, 140h ;~ 1359:03D2
cs=0x1359;eip=0x0003d5; 	X(PUSH(ax));	// 34764 push    ax ;~ 1359:03D5
cs=0x1359;eip=0x0003d6; 	T(MOV(ax, dashbmp_y_copy));	// 34765 mov     ax, dashbmp_y_copy ;~ 1359:03D6
cs=0x1359;eip=0x0003d9; 	T(CWD);	// 34766 cwd ;~ 1359:03D9
cs=0x1359;eip=0x0003da; 	T(MOV(cx, 6));	// 34767 mov     cx, 6 ;~ 1359:03DA
cs=0x1359;eip=0x0003dd; 	T(IDIV2(cx));	// 34768 idiv    cx ;~ 1359:03DD
cs=0x1359;eip=0x0003df; 	X(PUSH(ax));	// 34769 push    ax ;~ 1359:03DF
cs=0x1359;eip=0x0003e0; 	T(MOV(ax, 0x23));	// 34770 mov     ax, 23h ; '#' ;~ 1359:03E0
cs=0x1359;eip=0x0003e3; 	X(PUSH(ax));	// 34771 push    ax ;~ 1359:03E3
cs=0x1359;eip=0x0003e4; 	R(CALLF(set_projection,0));	// 34772 call    set_projection ;~ 1359:03E4
cs=0x1359;eip=0x0003e9; 	T(ADD(sp, 8));	// 34773 add     sp, 8 ;~ 1359:03E9
cs=0x1359;eip=0x0003ec; 	T(MOV(ax, roofbmpheight_copy));	// 34774 mov     ax, roofbmpheight_copy ;~ 1359:03EC
cs=0x1359;eip=0x0003ef; 	X(MOV(word_43938, ax));	// 34775 mov     word_43938, ax ;~ 1359:03EF
cs=0x1359;eip=0x0003f2; 	T(MOV(ax, dashbmp_y_copy));	// 34776 mov     ax, dashbmp_y_copy ;~ 1359:03F2
cs=0x1359;eip=0x0003f5; 	X(MOV(word_4393a, ax));	// 34777 mov     word_4393A, ax ;~ 1359:03F5
cs=0x1359;eip=0x0003f8; 	T(MOV(ax, roofbmpheight_copy));	// 34778 mov     ax, roofbmpheight_copy ;~ 1359:03F8
cs=0x1359;eip=0x0003fb; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 34779 mov     [bp+var_2], ax ;~ 1359:03FB
cs=0x1359;eip=0x0003fe; 	T(MOV(ax, dashbmp_y_copy));	// 34780 mov     ax, dashbmp_y_copy ;~ 1359:03FE
cs=0x1359;eip=0x000401; 	X(MOV(word_449ea, ax));	// 34781 mov     word_449EA, ax ;~ 1359:0401
cs=0x1359;eip=0x000404; 	T(MOV(ax, height_above_replaybar));	// 34782 mov     ax, height_above_replaybar ;~ 1359:0404
cs=0x1359;eip=0x000407; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 34783 mov     [bp+var_E], ax ;~ 1359:0407
loc_21f7a:
	// 6775 
cs=0x1359;eip=0x00040a; 	T(CMP(byte_454a4, 0));	// 34787 cmp     byte_454A4, 0 ;~ 1359:040A
cs=0x1359;eip=0x00040f; 	R(JNZ(loc_21f84));	// 34788 jnz     short loc_21F84 ;~ 1359:040F
cs=0x1359;eip=0x000411; 	R(JMP(loc_22052));	// 34789 jmp     loc_22052 ;~ 1359:0411
loc_21f84:
	// 6776 
cs=0x1359;eip=0x000414; 	T(MOV(al, byte_4432a));	// 34793 mov     al, byte_4432A ;~ 1359:0414
cs=0x1359;eip=0x000417; 	T(CBW);	// 34794 cbw ;~ 1359:0417
cs=0x1359;eip=0x000418; 	T(MOV(bx, ax));	// 34795 mov     bx, ax ;~ 1359:0418
cs=0x1359;eip=0x00041a; 	X(MOV(*((&byte_449d8)+bx), 0));	// 34796 mov     byte_449D8[bx], 0 ;~ 1359:041A
cs=0x1359;eip=0x00041f; 	T(CMP(byte_449e2, 0));	// 34797 cmp     byte_449E2, 0 ;~ 1359:041F
cs=0x1359;eip=0x000424; 	R(JZ(loc_21fb8));	// 34798 jz      short loc_21FB8 ;~ 1359:0424
cs=0x1359;eip=0x000426; 	X(PUSH(height_above_replaybar));	// 34799 push    height_above_replaybar ;~ 1359:0426
cs=0x1359;eip=0x00042a; 	X(PUSH(dashbmp_y_copy));	// 34800 push    dashbmp_y_copy ;~ 1359:042A
cs=0x1359;eip=0x00042e; 	T(MOV(ax, 0x140));	// 34801 mov     ax, 140h ;~ 1359:042E
cs=0x1359;eip=0x000431; 	X(PUSH(ax));	// 34802 push    ax ;~ 1359:0431
cs=0x1359;eip=0x000432; 	T(SUB(ax, ax));	// 34803 sub     ax, ax ;~ 1359:0432
cs=0x1359;eip=0x000434; 	X(PUSH(ax));	// 34804 push    ax ;~ 1359:0434
cs=0x1359;eip=0x000435; 	R(CALLF(sprite_set_1_size,0));	// 34805 call    sprite_set_1_size ;~ 1359:0435
cs=0x1359;eip=0x00043a; 	T(ADD(sp, 8));	// 34806 add     sp, 8 ;~ 1359:043A
cs=0x1359;eip=0x00043d; 	T(MOV(ax, 1));	// 34807 mov     ax, 1 ;~ 1359:043D
cs=0x1359;eip=0x000440; 	X(PUSH(ax));	// 34808 push    ax ;~ 1359:0440
cs=0x1359;eip=0x000441; 	X(PUSH(cs));	// 34809 push    cs ;~ 1359:0441
cs=0x1359;eip=0x000442; 	R(CALL(setup_car_shapes,0));	// 34810 call    near ptr setup_car_shapes ;~ 1359:0442
cs=0x1359;eip=0x000445; 	T(ADD(sp, 2));	// 34811 add     sp, 2 ;~ 1359:0445
loc_21fb8:
	// 6777 
cs=0x1359;eip=0x000448; 	T(CMP(replaybar_enabled, 0));	// 34814 cmp     replaybar_enabled, 0 ;~ 1359:0448
cs=0x1359;eip=0x00044d; 	R(JNZ(loc_21fc2));	// 34815 jnz     short loc_21FC2 ;~ 1359:044D
cs=0x1359;eip=0x00044f; 	R(JMP(loc_22064));	// 34816 jmp     loc_22064 ;~ 1359:044F
loc_21fc2:
	// 6778 
cs=0x1359;eip=0x000452; 	T(MOV(ax, 0x0C8));	// 34820 mov     ax, 0C8h ; 'È' ;~ 1359:0452
cs=0x1359;eip=0x000455; 	X(PUSH(ax));	// 34821 push    ax ;~ 1359:0455
cs=0x1359;eip=0x000456; 	T(SUB(ax, ax));	// 34822 sub     ax, ax ;~ 1359:0456
cs=0x1359;eip=0x000458; 	X(PUSH(ax));	// 34823 push    ax ;~ 1359:0458
cs=0x1359;eip=0x000459; 	T(MOV(ax, 0x140));	// 34824 mov     ax, 140h ;~ 1359:0459
cs=0x1359;eip=0x00045c; 	X(PUSH(ax));	// 34825 push    ax ;~ 1359:045C
cs=0x1359;eip=0x00045d; 	T(SUB(ax, ax));	// 34826 sub     ax, ax ;~ 1359:045D
cs=0x1359;eip=0x00045f; 	X(PUSH(ax));	// 34827 push    ax ;~ 1359:045F
cs=0x1359;eip=0x000460; 	R(CALLF(sprite_set_1_size,0));	// 34828 call    sprite_set_1_size ;~ 1359:0460
cs=0x1359;eip=0x000465; 	T(ADD(sp, 8));	// 34829 add     sp, 8 ;~ 1359:0465
cs=0x1359;eip=0x000468; 	X(PUSH(word_445d4));	// 34830 push    word_445D4 ;~ 1359:0468
cs=0x1359;eip=0x00046c; 	X(PUSH(word_445d4));	// 34831 push    word_445D4 ;~ 1359:046C
cs=0x1359;eip=0x000470; 	T(MOV(ax, 1));	// 34832 mov     ax, 1 ;~ 1359:0470
cs=0x1359;eip=0x000473; 	X(PUSH(ax));	// 34833 push    ax ;~ 1359:0473
cs=0x1359;eip=0x000474; 	X(PUSH(cs));	// 34834 push    cs ;~ 1359:0474
cs=0x1359;eip=0x000475; 	R(CALL(loop_game,0));	// 34835 call    near ptr loop_game ;~ 1359:0475
cs=0x1359;eip=0x000478; 	T(ADD(sp, 6));	// 34836 add     sp, 6 ;~ 1359:0478
cs=0x1359;eip=0x00047b; 	R(JMP(loc_22064));	// 34837 jmp     short loc_22064 ;~ 1359:047B
loc_21fee:
	// 6779 
cs=0x1359;eip=0x00047e; 	X(MOV(replaybar_enabled, 1));	// 34843 mov     replaybar_enabled, 1 ;~ 1359:047E
cs=0x1359;eip=0x000483; 	R(JMP(loc_21f0f));	// 34844 jmp     loc_21F0F ;~ 1359:0483
loc_21ff6:
	// 6780 
cs=0x1359;eip=0x000486; 	T(CMP(dashb_toggle, 0));	// 34848 cmp     dashb_toggle, 0 ;~ 1359:0486
cs=0x1359;eip=0x00048b; 	R(JZ(loc_22034));	// 34849 jz      short loc_22034 ;~ 1359:048B
cs=0x1359;eip=0x00048d; 	T(CMP(followopponentflag, 0));	// 34850 cmp     followOpponentFlag, 0 ;~ 1359:048D
cs=0x1359;eip=0x000492; 	R(JNZ(loc_22034));	// 34851 jnz     short loc_22034 ;~ 1359:0492
cs=0x1359;eip=0x000494; 	T(CMP(game_replay_mode, 2));	// 34852 cmp     game_replay_mode, 2 ;~ 1359:0494
cs=0x1359;eip=0x000499; 	R(JNZ(loc_2201a));	// 34853 jnz     short loc_2201A ;~ 1359:0499
cs=0x1359;eip=0x00049b; 	T(CMP(replaybar_enabled, 0));	// 34854 cmp     replaybar_enabled, 0 ;~ 1359:049B
cs=0x1359;eip=0x0004a0; 	R(JZ(loc_2201a));	// 34855 jz      short loc_2201A ;~ 1359:04A0
cs=0x1359;eip=0x0004a2; 	X(MOV(height_above_replaybar, 0x97));	// 34856 mov     height_above_replaybar, 97h ; '—' ; 151 = height of render area above the replay menu bar ;~ 1359:04A2
cs=0x1359;eip=0x0004a8; 	R(JMP(loc_22020));	// 34857 jmp     short loc_22020 ;~ 1359:04A8
loc_2201a:
	// 6781 
cs=0x1359;eip=0x0004aa; 	X(MOV(height_above_replaybar, 0x0C8));	// 34862 mov     height_above_replaybar, 0C8h ; 'È' ; 200 = height of render area without the replay menu bar ;~ 1359:04AA
loc_22020:
	// 6782 
cs=0x1359;eip=0x0004b0; 	X(MOV(byte_449e2, 1));	// 34865 mov     byte_449E2, 1 ;~ 1359:04B0
cs=0x1359;eip=0x0004b5; 	T(MOV(ax, roofbmpheight));	// 34866 mov     ax, roofbmpheight ;~ 1359:04B5
cs=0x1359;eip=0x0004b8; 	X(MOV(roofbmpheight_copy, ax));	// 34867 mov     roofbmpheight_copy, ax ;~ 1359:04B8
cs=0x1359;eip=0x0004bb; 	T(MOV(ax, dashbmp_y));	// 34868 mov     ax, dashbmp_y ;~ 1359:04BB
cs=0x1359;eip=0x0004be; 	X(MOV(dashbmp_y_copy, ax));	// 34869 mov     dashbmp_y_copy, ax ;~ 1359:04BE
cs=0x1359;eip=0x0004c1; 	R(JMP(loc_21f1f));	// 34870 jmp     loc_21F1F ;~ 1359:04C1
loc_22034:
	// 6783 
cs=0x1359;eip=0x0004c4; 	T(CMP(game_replay_mode, 2));	// 34875 cmp     game_replay_mode, 2 ;~ 1359:04C4
cs=0x1359;eip=0x0004c9; 	R(JZ(loc_2203e));	// 34876 jz      short loc_2203E ;~ 1359:04C9
cs=0x1359;eip=0x0004cb; 	R(JMP(loc_21f19));	// 34877 jmp     loc_21F19 ;~ 1359:04CB
loc_2203e:
	// 6784 
cs=0x1359;eip=0x0004ce; 	T(CMP(replaybar_enabled, 0));	// 34881 cmp     replaybar_enabled, 0 ;~ 1359:04CE
cs=0x1359;eip=0x0004d3; 	R(JNZ(loc_22048));	// 34882 jnz     short loc_22048 ;~ 1359:04D3
cs=0x1359;eip=0x0004d5; 	R(JMP(loc_21f19));	// 34883 jmp     loc_21F19 ;~ 1359:04D5
loc_22048:
	// 6785 
cs=0x1359;eip=0x0004d8; 	X(MOV(dashbmp_y_copy, 0x97));	// 34887 mov     dashbmp_y_copy, 97h ; '—' ;~ 1359:04D8
cs=0x1359;eip=0x0004de; 	R(JMP(loc_21f1f));	// 34888 jmp     loc_21F1F ;~ 1359:04DE
loc_22052:
	// 6786 
cs=0x1359;eip=0x0004e2; 	T(CMP(replaybar_enabled, 0));	// 34893 cmp     replaybar_enabled, 0 ;~ 1359:04E2
cs=0x1359;eip=0x0004e7; 	R(JNZ(loc_22064));	// 34894 jnz     short loc_22064 ;~ 1359:04E7
cs=0x1359;eip=0x0004e9; 	T(MOV(al, byte_4432a));	// 34895 mov     al, byte_4432A ;~ 1359:04E9
cs=0x1359;eip=0x0004ec; 	T(CBW);	// 34896 cbw ;~ 1359:04EC
cs=0x1359;eip=0x0004ed; 	T(MOV(bx, ax));	// 34897 mov     bx, ax ;~ 1359:04ED
cs=0x1359;eip=0x0004ef; 	X(MOV(*((&byte_449d8)+bx), 0));	// 34898 mov     byte_449D8[bx], 0 ;~ 1359:04EF
loc_22064:
	// 6787 
cs=0x1359;eip=0x0004f4; 	T(MOV(ax, offset(dseg,rect_windshield)));	// 34902 mov     ax, offset rect_windshield ;~ 1359:04F4
cs=0x1359;eip=0x0004f7; 	X(PUSH(ax));	// 34903 push    ax ;~ 1359:04F7
cs=0x1359;eip=0x0004f8; 	T(MOV(al, byte_44346));	// 34904 mov     al, byte_44346 ;~ 1359:04F8
cs=0x1359;eip=0x0004fb; 	T(CBW);	// 34905 cbw ;~ 1359:04FB
cs=0x1359;eip=0x0004fc; 	X(PUSH(ax));	// 34906 push    ax ;~ 1359:04FC
cs=0x1359;eip=0x0004fd; 	R(CALLF(update_frame,0));	// 34907 call    update_frame ;~ 1359:04FD
cs=0x1359;eip=0x000502; 	T(ADD(sp, 4));	// 34908 add     sp, 4 ;~ 1359:0502
cs=0x1359;eip=0x000505; 	T(CMP(dastbmp_y, 0));	// 34909 cmp     dastbmp_y, 0 ;~ 1359:0505
cs=0x1359;eip=0x00050a; 	R(JZ(loc_220db));	// 34910 jz      short loc_220DB ;~ 1359:050A
cs=0x1359;eip=0x00050c; 	T(CMP(byte_449e2, 0));	// 34911 cmp     byte_449E2, 0 ;~ 1359:050C
cs=0x1359;eip=0x000511; 	R(JZ(loc_220db));	// 34912 jz      short loc_220DB ;~ 1359:0511
cs=0x1359;eip=0x000513; 	T(CMP(timertestflag_copy, 0));	// 34913 cmp     timertestflag_copy, 0 ;~ 1359:0513
cs=0x1359;eip=0x000518; 	R(JZ(loc_220bb));	// 34914 jz      short loc_220BB ;~ 1359:0518
cs=0x1359;eip=0x00051a; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 34915 mov     [bp+var_A], 0 ;~ 1359:051A
cs=0x1359;eip=0x00051f; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x140));	// 34916 mov     [bp+var_8], 140h ;~ 1359:051F
cs=0x1359;eip=0x000524; 	T(MOV(ax, dastbmp_y));	// 34917 mov     ax, dastbmp_y ;~ 1359:0524
cs=0x1359;eip=0x000527; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 34918 mov     [bp+var_6], ax ;~ 1359:0527
cs=0x1359;eip=0x00052a; 	T(MOV(ax, dashbmp_y_copy));	// 34919 mov     ax, dashbmp_y_copy ;~ 1359:052A
cs=0x1359;eip=0x00052d; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 34920 mov     [bp+var_4], ax ;~ 1359:052D
cs=0x1359;eip=0x000530; 	T(CMP(rectptr_unk, 0));	// 34921 cmp     rectptr_unk, 0 ;~ 1359:0530
cs=0x1359;eip=0x000535; 	R(JZ(loc_220bb));	// 34922 jz      short loc_220BB ;~ 1359:0535
cs=0x1359;eip=0x000537; 	X(PUSH(rectptr_unk));	// 34923 push    rectptr_unk ;~ 1359:0537
cs=0x1359;eip=0x00053b; 	T(ax = bp+var_a);	// 34924 lea     ax, [bp+var_A] ;~ 1359:053B
cs=0x1359;eip=0x00053e; 	X(PUSH(ax));	// 34925 push    ax ;~ 1359:053E
cs=0x1359;eip=0x00053f; 	X(PUSH(rectptr_unk));	// 34926 push    rectptr_unk ;~ 1359:053F
cs=0x1359;eip=0x000543; 	R(CALLF(rect_union,0));	// 34927 call    rect_union ;~ 1359:0543
cs=0x1359;eip=0x000548; 	T(ADD(sp, 6));	// 34928 add     sp, 6 ;~ 1359:0548
loc_220bb:
	// 6788 
cs=0x1359;eip=0x00054b; 	X(PUSH(word_454a2));	// 34932 push    word_454A2 ;~ 1359:054B
cs=0x1359;eip=0x00054f; 	X(PUSH(dasmshapeptr));	// 34933 push    dasmshapeptr ;~ 1359:054F
cs=0x1359;eip=0x000553; 	R(CALLF(shape2d_render_bmp_as_mask,0));	// 34934 call    shape2d_render_bmp_as_mask ;~ 1359:0553
cs=0x1359;eip=0x000558; 	T(ADD(sp, 4));	// 34935 add     sp, 4 ;~ 1359:0558
cs=0x1359;eip=0x00055b; 	X(PUSH(dastseg));	// 34936 push    dastseg ;~ 1359:055B
cs=0x1359;eip=0x00055f; 	X(PUSH(dastbmp_y2));	// 34937 push    dastbmp_y2 ;~ 1359:055F
cs=0x1359;eip=0x000563; 	R(CALLF(shape2d_op_unk4,0));	// 34938 call    shape2d_op_unk4 ;~ 1359:0563
cs=0x1359;eip=0x000568; 	T(ADD(sp, 4));	// 34939 add     sp, 4 ;~ 1359:0568
loc_220db:
	// 6789 
cs=0x1359;eip=0x00056b; 	T(MOV(ax, offset(dseg,rect_windshield)));	// 34943 mov     ax, offset rect_windshield ;~ 1359:056B
cs=0x1359;eip=0x00056e; 	X(PUSH(ax));	// 34944 push    ax ;~ 1359:056E
cs=0x1359;eip=0x00056f; 	R(CALLF(sub_19f14,0));	// 34945 call    sub_19F14 ;~ 1359:056F
cs=0x1359;eip=0x000574; 	T(ADD(sp, 2));	// 34946 add     sp, 2 ;~ 1359:0574
cs=0x1359;eip=0x000577; 	T(CMP(byte_449e2, 0));	// 34947 cmp     byte_449E2, 0 ;~ 1359:0577
cs=0x1359;eip=0x00057c; 	R(JZ(loc_22126));	// 34948 jz      short loc_22126 ;~ 1359:057C
cs=0x1359;eip=0x00057e; 	X(PUSH(height_above_replaybar));	// 34949 push    height_above_replaybar ;~ 1359:057E
cs=0x1359;eip=0x000582; 	X(PUSH(dashbmp_y_copy));	// 34950 push    dashbmp_y_copy ;~ 1359:0582
cs=0x1359;eip=0x000586; 	T(MOV(ax, 0x140));	// 34951 mov     ax, 140h ;~ 1359:0586
cs=0x1359;eip=0x000589; 	X(PUSH(ax));	// 34952 push    ax ;~ 1359:0589
cs=0x1359;eip=0x00058a; 	T(SUB(ax, ax));	// 34953 sub     ax, ax ;~ 1359:058A
cs=0x1359;eip=0x00058c; 	X(PUSH(ax));	// 34954 push    ax ;~ 1359:058C
cs=0x1359;eip=0x00058d; 	R(CALLF(sprite_set_1_size,0));	// 34955 call    sprite_set_1_size ;~ 1359:058D
cs=0x1359;eip=0x000592; 	T(ADD(sp, 8));	// 34956 add     sp, 8 ;~ 1359:0592
cs=0x1359;eip=0x000595; 	T(MOV(ax, 2));	// 34957 mov     ax, 2 ;~ 1359:0595
cs=0x1359;eip=0x000598; 	X(PUSH(ax));	// 34958 push    ax ;~ 1359:0598
cs=0x1359;eip=0x000599; 	X(PUSH(cs));	// 34959 push    cs ;~ 1359:0599
cs=0x1359;eip=0x00059a; 	R(CALL(setup_car_shapes,0));	// 34960 call    near ptr setup_car_shapes ;~ 1359:059A
cs=0x1359;eip=0x00059d; 	T(ADD(sp, 2));	// 34961 add     sp, 2 ;~ 1359:059D
cs=0x1359;eip=0x0005a0; 	T(MOV(ax, 0x0C8));	// 34962 mov     ax, 0C8h ; 'È' ;~ 1359:05A0
cs=0x1359;eip=0x0005a3; 	X(PUSH(ax));	// 34963 push    ax ;~ 1359:05A3
cs=0x1359;eip=0x0005a4; 	T(SUB(ax, ax));	// 34964 sub     ax, ax ;~ 1359:05A4
cs=0x1359;eip=0x0005a6; 	X(PUSH(ax));	// 34965 push    ax ;~ 1359:05A6
cs=0x1359;eip=0x0005a7; 	T(MOV(ax, 0x140));	// 34966 mov     ax, 140h ;~ 1359:05A7
cs=0x1359;eip=0x0005aa; 	X(PUSH(ax));	// 34967 push    ax ;~ 1359:05AA
cs=0x1359;eip=0x0005ab; 	T(SUB(ax, ax));	// 34968 sub     ax, ax ;~ 1359:05AB
cs=0x1359;eip=0x0005ad; 	X(PUSH(ax));	// 34969 push    ax ;~ 1359:05AD
cs=0x1359;eip=0x0005ae; 	R(CALLF(sprite_set_1_size,0));	// 34970 call    sprite_set_1_size ;~ 1359:05AE
cs=0x1359;eip=0x0005b3; 	T(ADD(sp, 8));	// 34971 add     sp, 8 ;~ 1359:05B3
loc_22126:
	// 6790 
cs=0x1359;eip=0x0005b6; 	T(CMP(byte_454a4, 0));	// 34974 cmp     byte_454A4, 0 ;~ 1359:05B6
cs=0x1359;eip=0x0005bb; 	R(JZ(loc_22131));	// 34975 jz      short loc_22131 ;~ 1359:05BB
cs=0x1359;eip=0x0005bd; 	X(DEC(byte_454a4));	// 34976 dec     byte_454A4 ;~ 1359:05BD
loc_22131:
	// 6791 
cs=0x1359;eip=0x0005c1; 	T(CMP(video_flag5_is0, 0));	// 34979 cmp     video_flag5_is0, 0 ;~ 1359:05C1
cs=0x1359;eip=0x0005c6; 	R(JZ(loc_22152));	// 34980 jz      short loc_22152 ;~ 1359:05C6
cs=0x1359;eip=0x0005c8; 	R(CALLF(mouse_draw_opaque_check,0));	// 34981 call    mouse_draw_opaque_check ;~ 1359:05C8
cs=0x1359;eip=0x0005cd; 	R(CALLF(setup_mcgawnd1,0));	// 34982 call    setup_mcgawnd1 ;~ 1359:05CD
cs=0x1359;eip=0x0005d2; 	X(XOR(byte_44346, 1));	// 34983 xor     byte_44346, 1 ;~ 1359:05D2
cs=0x1359;eip=0x0005d7; 	T(MOV(al, byte_44346));	// 34984 mov     al, byte_44346 ;~ 1359:05D7
cs=0x1359;eip=0x0005da; 	X(MOV(byte_4432a, al));	// 34985 mov     byte_4432A, al ;~ 1359:05DA
cs=0x1359;eip=0x0005dd; 	R(CALLF(mouse_draw_transparent_check,0));	// 34986 call    mouse_draw_transparent_check ;~ 1359:05DD
loc_22152:
	// 6792 
cs=0x1359;eip=0x0005e2; 	T(CMP(game_replay_mode, 1));	// 34989 cmp     game_replay_mode, 1 ;~ 1359:05E2
cs=0x1359;eip=0x0005e7; 	R(JNZ(loc_2217d));	// 34990 jnz     short loc_2217D ;~ 1359:05E7
cs=0x1359;eip=0x0005e9; 	T(CMP(byte_4393c, 0));	// 34991 cmp     byte_4393C, 0 ;~ 1359:05E9
cs=0x1359;eip=0x0005ee; 	R(JNZ(loc_2217d));	// 34992 jnz     short loc_2217D ;~ 1359:05EE
cs=0x1359;eip=0x0005f0; 	X(MOV(game_replay_mode, 0));	// 34993 mov     game_replay_mode, 0 ;~ 1359:05F0
cs=0x1359;eip=0x0005f5; 	T(MOV(ax, framespersec2));	// 34994 mov     ax, framespersec2 ;~ 1359:05F5
cs=0x1359;eip=0x0005f8; 	X(MOV(framespersec, ax));	// 34995 mov     framespersec, ax ;~ 1359:05F8
cs=0x1359;eip=0x0005fb; 	T(MOV(al, *(db*)(((db*)&framespersec2))));	// 34996 mov     al, byte ptr framespersec2 ;~ 1359:05FB
cs=0x1359;eip=0x0005fe; 	X(MOV(byte_449ba, al));	// 34997 mov     byte_449BA, al ;~ 1359:05FE
cs=0x1359;eip=0x000601; 	T(MOV(ax, 0x0FFFF));	// 34998 mov     ax, 0FFFFh ;~ 1359:0601
cs=0x1359;eip=0x000604; 	X(PUSH(ax));	// 34999 push    ax ;~ 1359:0604
cs=0x1359;eip=0x000605; 	R(CALLF(init_game_state,0));	// 35000 call    init_game_state ;~ 1359:0605
cs=0x1359;eip=0x00060a; 	T(ADD(sp, 2));	// 35001 add     sp, 2 ;~ 1359:060A
loc_2217d:
	// 6793 
cs=0x1359;eip=0x00060d; 	T(CMP(idle_expired, 0));	// 35005 cmp     idle_expired, 0 ;~ 1359:060D
cs=0x1359;eip=0x000612; 	R(JZ(loc_221aa));	// 35006 jz      short loc_221AA ;~ 1359:0612
cs=0x1359;eip=0x000614; 	R(CALLF(kb_get_char,0));	// 35007 call    kb_get_char ;~ 1359:0614
cs=0x1359;eip=0x000619; 	T(OR(ax, ax));	// 35008 or      ax, ax ;~ 1359:0619
cs=0x1359;eip=0x00061b; 	R(JZ(loc_22190));	// 35009 jz      short loc_22190 ;~ 1359:061B
cs=0x1359;eip=0x00061d; 	R(JMP(loc_22298));	// 35010 jmp     loc_22298 ;~ 1359:061D
loc_22190:
	// 6794 
cs=0x1359;eip=0x000620; 	T(CMP(byte_449da, 0));	// 35014 cmp     byte_449DA, 0 ;~ 1359:0620
cs=0x1359;eip=0x000625; 	R(JZ(loc_2219a));	// 35015 jz      short loc_2219A ;~ 1359:0625
cs=0x1359;eip=0x000627; 	R(JMP(loc_22298));	// 35016 jmp     loc_22298 ;~ 1359:0627
loc_2219a:
	// 6795 
cs=0x1359;eip=0x00062a; 	R(CALLF(get_kb_or_joy_flags,0));	// 35020 call    get_kb_or_joy_flags ;~ 1359:062A
cs=0x1359;eip=0x00062f; 	T(OR(ax, ax));	// 35021 or      ax, ax ;~ 1359:062F
cs=0x1359;eip=0x000631; 	R(JNZ(loc_221a6));	// 35022 jnz     short loc_221A6 ;~ 1359:0631
cs=0x1359;eip=0x000633; 	R(JMP(loc_21da2));	// 35023 jmp     loc_21DA2 ;~ 1359:0633
loc_221a6:
	// 6796 
cs=0x1359;eip=0x000636; 	R(JMP(loc_22298));	// 35027 jmp     loc_22298 ;~ 1359:0636
loc_221aa:
	// 6797 
cs=0x1359;eip=0x00063a; 	T(CMP(byte_449da, 0));	// 35032 cmp     byte_449DA, 0 ;~ 1359:063A
cs=0x1359;eip=0x00063f; 	R(JZ(loc_22208));	// 35033 jz      short loc_22208 ;~ 1359:063F
cs=0x1359;eip=0x000641; 	T(CMP(game_replay_mode, 0));	// 35034 cmp     game_replay_mode, 0 ;~ 1359:0641
cs=0x1359;eip=0x000646; 	R(JNZ(loc_221c2));	// 35035 jnz     short loc_221C2 ;~ 1359:0646
cs=0x1359;eip=0x000648; 	T(CMP(byte_4488a, 4));	// 35036 cmp     byte_4488A, 4 ;~ 1359:0648
cs=0x1359;eip=0x00064d; 	R(JZ(loc_221c2));	// 35037 jz      short loc_221C2 ;~ 1359:064D
cs=0x1359;eip=0x00064f; 	R(JMP(loc_22298));	// 35038 jmp     loc_22298 ;~ 1359:064F
loc_221c2:
	// 6798 
cs=0x1359;eip=0x000652; 	T(CMP(byte_449da, 2));	// 35043 cmp     byte_449DA, 2 ;~ 1359:0652
cs=0x1359;eip=0x000657; 	R(JNZ(loc_221cc));	// 35044 jnz     short loc_221CC ;~ 1359:0657
cs=0x1359;eip=0x000659; 	R(JMP(loc_22298));	// 35045 jmp     loc_22298 ;~ 1359:0659
loc_221cc:
	// 6799 
cs=0x1359;eip=0x00065c; 	X(MOV(byte_449da, 0));	// 35049 mov     byte_449DA, 0 ;~ 1359:065C
cs=0x1359;eip=0x000661; 	X(MOV(game_replay_mode, 2));	// 35050 mov     game_replay_mode, 2 ;~ 1359:0661
cs=0x1359;eip=0x000666; 	T(SUB(ax, ax));	// 35051 sub     ax, ax ;~ 1359:0666
cs=0x1359;eip=0x000668; 	X(PUSH(ax));	// 35052 push    ax ;~ 1359:0668
cs=0x1359;eip=0x000669; 	X(PUSH(cs));	// 35053 push    cs ;~ 1359:0669
cs=0x1359;eip=0x00066a; 	R(CALL(mouse_minmax_position,0));	// 35054 call    near ptr mouse_minmax_position ;~ 1359:066A
cs=0x1359;eip=0x00066d; 	T(ADD(sp, 2));	// 35055 add     sp, 2 ;~ 1359:066D
cs=0x1359;eip=0x000670; 	T(SUB(ax, ax));	// 35056 sub     ax, ax ;~ 1359:0670
cs=0x1359;eip=0x000672; 	X(PUSH(ax));	// 35057 push    ax ;~ 1359:0672
cs=0x1359;eip=0x000673; 	X(PUSH(ax));	// 35058 push    ax ;~ 1359:0673
cs=0x1359;eip=0x000674; 	X(PUSH(ax));	// 35059 push    ax ;~ 1359:0674
cs=0x1359;eip=0x000675; 	X(PUSH(cs));	// 35060 push    cs ;~ 1359:0675
cs=0x1359;eip=0x000676; 	R(CALL(loop_game,0));	// 35061 call    near ptr loop_game ;~ 1359:0676
cs=0x1359;eip=0x000679; 	T(ADD(sp, 6));	// 35062 add     sp, 6 ;~ 1359:0679
cs=0x1359;eip=0x00067c; 	T(SUB(ax, ax));	// 35063 sub     ax, ax ;~ 1359:067C
cs=0x1359;eip=0x00067e; 	X(PUSH(ax));	// 35064 push    ax ;~ 1359:067E
cs=0x1359;eip=0x00067f; 	T(MOV(ax, 4));	// 35065 mov     ax, 4 ;~ 1359:067F
cs=0x1359;eip=0x000682; 	X(PUSH(ax));	// 35066 push    ax ;~ 1359:0682
cs=0x1359;eip=0x000683; 	T(MOV(ax, 2));	// 35067 mov     ax, 2 ;~ 1359:0683
cs=0x1359;eip=0x000686; 	X(PUSH(ax));	// 35068 push    ax ;~ 1359:0686
cs=0x1359;eip=0x000687; 	X(PUSH(cs));	// 35069 push    cs ;~ 1359:0687
cs=0x1359;eip=0x000688; 	R(CALL(loop_game,0));	// 35070 call    near ptr loop_game ;~ 1359:0688
cs=0x1359;eip=0x00068b; 	T(ADD(sp, 6));	// 35071 add     sp, 6 ;~ 1359:068B
cs=0x1359;eip=0x00068e; 	X(MOV(is_in_replay, 1));	// 35072 mov     is_in_replay, 1 ;~ 1359:068E
cs=0x1359;eip=0x000693; 	R(CALLF(audio_carstate,0));	// 35073 call    audio_carstate ;~ 1359:0693
loc_22208:
	// 6800 
cs=0x1359;eip=0x000698; 	T(CMP(game_replay_mode, 2));	// 35076 cmp     game_replay_mode, 2 ;~ 1359:0698
cs=0x1359;eip=0x00069d; 	R(JNZ(loc_22222));	// 35077 jnz     short loc_22222 ;~ 1359:069D
cs=0x1359;eip=0x00069f; 	T(SUB(ax, ax));	// 35078 sub     ax, ax ;~ 1359:069F
cs=0x1359;eip=0x0006a1; 	X(PUSH(ax));	// 35079 push    ax ;~ 1359:06A1
cs=0x1359;eip=0x0006a2; 	X(PUSH(ax));	// 35080 push    ax ;~ 1359:06A2
cs=0x1359;eip=0x0006a3; 	T(MOV(ax, 3));	// 35081 mov     ax, 3 ;~ 1359:06A3
cs=0x1359;eip=0x0006a6; 	X(PUSH(ax));	// 35082 push    ax ;~ 1359:06A6
cs=0x1359;eip=0x0006a7; 	X(PUSH(cs));	// 35083 push    cs ;~ 1359:06A7
cs=0x1359;eip=0x0006a8; 	R(CALL(loop_game,0));	// 35084 call    near ptr loop_game ;~ 1359:06A8
cs=0x1359;eip=0x0006ab; 	T(ADD(sp, 6));	// 35085 add     sp, 6 ;~ 1359:06AB
cs=0x1359;eip=0x0006ae; 	R(JMP(loc_21da2));	// 35086 jmp     loc_21DA2 ;~ 1359:06AE
loc_22222:
	// 6801 
cs=0x1359;eip=0x0006b2; 	R(CALLF(kb_get_char,0));	// 35092 call    kb_get_char ;~ 1359:06B2
cs=0x1359;eip=0x0006b7; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 35093 mov     [bp+var_12], ax ;~ 1359:06B7
cs=0x1359;eip=0x0006ba; 	T(OR(ax, ax));	// 35094 or      ax, ax ;~ 1359:06BA
cs=0x1359;eip=0x0006bc; 	R(JZ(loc_22236));	// 35095 jz      short loc_22236 ;~ 1359:06BC
cs=0x1359;eip=0x0006be; 	X(PUSH(ax));	// 35096 push    ax ;~ 1359:06BE
cs=0x1359;eip=0x0006bf; 	X(PUSH(cs));	// 35097 push    cs ;~ 1359:06BF
cs=0x1359;eip=0x0006c0; 	R(CALL(handle_ingame_kb_shortcuts,0));	// 35098 call    near ptr handle_ingame_kb_shortcuts ;~ 1359:06C0
cs=0x1359;eip=0x0006c3; 	T(ADD(sp, 2));	// 35099 add     sp, 2 ;~ 1359:06C3
loc_22236:
	// 6802 
cs=0x1359;eip=0x0006c6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 35102 mov     ax, [bp+var_12] ;~ 1359:06C6
cs=0x1359;eip=0x0006c9; 	T(CMP(ax, 0x4800));	// 35103 cmp     ax, 4800h ;~ 1359:06C9
cs=0x1359;eip=0x0006cc; 	R(JZ(loc_22222));	// 35104 jz      short loc_22222 ;~ 1359:06CC
cs=0x1359;eip=0x0006ce; 	T(CMP(ax, 0x4B00));	// 35105 cmp     ax, 4B00h ;~ 1359:06CE
cs=0x1359;eip=0x0006d1; 	R(JZ(loc_22222));	// 35106 jz      short loc_22222 ;~ 1359:06D1
cs=0x1359;eip=0x0006d3; 	T(CMP(ax, 0x4D00));	// 35107 cmp     ax, 4D00h ;~ 1359:06D3
cs=0x1359;eip=0x0006d6; 	R(JZ(loc_22222));	// 35108 jz      short loc_22222 ;~ 1359:06D6
cs=0x1359;eip=0x0006d8; 	T(CMP(ax, 0x5000));	// 35109 cmp     ax, 5000h ;~ 1359:06D8
cs=0x1359;eip=0x0006db; 	R(JZ(loc_22222));	// 35110 jz      short loc_22222 ;~ 1359:06DB
cs=0x1359;eip=0x0006dd; 	T(CMP(game_replay_mode, 1));	// 35111 cmp     game_replay_mode, 1 ;~ 1359:06DD
cs=0x1359;eip=0x0006e2; 	R(JZ(loc_22257));	// 35112 jz      short loc_22257 ;~ 1359:06E2
cs=0x1359;eip=0x0006e4; 	R(JMP(loc_21da2));	// 35113 jmp     loc_21DA2 ;~ 1359:06E4
loc_22257:
	// 6803 
cs=0x1359;eip=0x0006e7; 	T(MOV(ax, offset(dseg,mouse_ypos)));	// 35117 mov     ax, offset mouse_ypos ;~ 1359:06E7
cs=0x1359;eip=0x0006ea; 	X(PUSH(ax));	// 35118 push    ax ;~ 1359:06EA
cs=0x1359;eip=0x0006eb; 	T(MOV(ax, offset(dseg,mouse_xpos)));	// 35119 mov     ax, offset mouse_xpos ;~ 1359:06EB
cs=0x1359;eip=0x0006ee; 	X(PUSH(ax));	// 35120 push    ax ;~ 1359:06EE
cs=0x1359;eip=0x0006ef; 	T(MOV(ax, offset(dseg,mouse_butstate)));	// 35121 mov     ax, offset mouse_butstate ;~ 1359:06EF
cs=0x1359;eip=0x0006f2; 	X(PUSH(ax));	// 35122 push    ax ;~ 1359:06F2
cs=0x1359;eip=0x0006f3; 	R(CALLF(mouse_get_state,0));	// 35123 call    mouse_get_state ;~ 1359:06F3
cs=0x1359;eip=0x0006f8; 	T(ADD(sp, 6));	// 35124 add     sp, 6 ;~ 1359:06F8
cs=0x1359;eip=0x0006fb; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 3));	// 35125 test    byte ptr mouse_butstate, 3 ;~ 1359:06FB
cs=0x1359;eip=0x000700; 	R(JNZ(loc_2227e));	// 35126 jnz     short loc_2227E ;~ 1359:0700
cs=0x1359;eip=0x000702; 	R(CALLF(get_kb_or_joy_flags,0));	// 35127 call    get_kb_or_joy_flags ;~ 1359:0702
cs=0x1359;eip=0x000707; 	T(TEST(al, 0x30));	// 35128 test    al, 30h ;~ 1359:0707
cs=0x1359;eip=0x000709; 	R(JNZ(loc_2227e));	// 35129 jnz     short loc_2227E ;~ 1359:0709
cs=0x1359;eip=0x00070b; 	R(JMP(loc_21da2));	// 35130 jmp     loc_21DA2 ;~ 1359:070B
loc_2227e:
	// 6804 
cs=0x1359;eip=0x00070e; 	X(MOV(game_replay_mode, 0));	// 35135 mov     game_replay_mode, 0 ;~ 1359:070E
cs=0x1359;eip=0x000713; 	X(MOV(byte_4393c, 0));	// 35136 mov     byte_4393C, 0 ;~ 1359:0713
cs=0x1359;eip=0x000718; 	T(MOV(ax, framespersec2));	// 35137 mov     ax, framespersec2 ;~ 1359:0718
cs=0x1359;eip=0x00071b; 	X(MOV(framespersec, ax));	// 35138 mov     framespersec, ax ;~ 1359:071B
cs=0x1359;eip=0x00071e; 	T(MOV(al, *(db*)(((db*)&framespersec2))));	// 35139 mov     al, byte ptr framespersec2 ;~ 1359:071E
cs=0x1359;eip=0x000721; 	X(MOV(byte_449ba, al));	// 35140 mov     byte_449BA, al ;~ 1359:0721
cs=0x1359;eip=0x000724; 	R(JMP(loc_21c5e));	// 35141 jmp     loc_21C5E ;~ 1359:0724
loc_22298:
	// 6805 
cs=0x1359;eip=0x000728; 	T(CMP(video_flag5_is0, 0));	// 35147 cmp     video_flag5_is0, 0 ;~ 1359:0728
cs=0x1359;eip=0x00072d; 	R(JZ(loc_222d3));	// 35148 jz      short loc_222D3 ;~ 1359:072D
cs=0x1359;eip=0x00072f; 	R(CALLF(get_0,0));	// 35149 call    get_0 ;~ 1359:072F
cs=0x1359;eip=0x000734; 	T(OR(ax, ax));	// 35150 or      ax, ax ;~ 1359:0734
cs=0x1359;eip=0x000736; 	R(JZ(loc_222d3));	// 35151 jz      short loc_222D3 ;~ 1359:0736
cs=0x1359;eip=0x000738; 	R(CALLF(mouse_draw_opaque_check,0));	// 35152 call    mouse_draw_opaque_check ;~ 1359:0738
cs=0x1359;eip=0x00073d; 	R(CALLF(setup_mcgawnd2,0));	// 35153 call    setup_mcgawnd2 ;~ 1359:073D
cs=0x1359;eip=0x000742; 	T(SUB(ax, ax));	// 35154 sub     ax, ax ;~ 1359:0742
cs=0x1359;eip=0x000744; 	X(PUSH(ax));	// 35155 push    ax ;~ 1359:0744
cs=0x1359;eip=0x000745; 	T(MOV(ax, 0x0C8));	// 35156 mov     ax, 0C8h ; 'È'  ; 200 ;~ 1359:0745
cs=0x1359;eip=0x000748; 	X(PUSH(ax));	// 35157 push    ax ;~ 1359:0748
cs=0x1359;eip=0x000749; 	T(MOV(ax, 0x140));	// 35158 mov     ax, 140h        ; 320 ;~ 1359:0749
cs=0x1359;eip=0x00074c; 	X(PUSH(ax));	// 35159 push    ax ;~ 1359:074C
cs=0x1359;eip=0x00074d; 	T(SUB(ax, ax));	// 35160 sub     ax, ax ;~ 1359:074D
cs=0x1359;eip=0x00074f; 	X(PUSH(ax));	// 35161 push    ax ;~ 1359:074F
cs=0x1359;eip=0x000750; 	X(PUSH(ax));	// 35162 push    ax ;~ 1359:0750
cs=0x1359;eip=0x000751; 	R(CALLF(sub_35c4e,0));	// 35163 call    sub_35C4E ;~ 1359:0751
cs=0x1359;eip=0x000756; 	T(ADD(sp, 0x0A));	// 35164 add     sp, 0Ah ;~ 1359:0756
cs=0x1359;eip=0x000759; 	R(CALLF(setup_mcgawnd1,0));	// 35165 call    setup_mcgawnd1 ;~ 1359:0759
cs=0x1359;eip=0x00075e; 	R(CALLF(mouse_draw_transparent_check,0));	// 35166 call    mouse_draw_transparent_check ;~ 1359:075E
loc_222d3:
	// 6806 
cs=0x1359;eip=0x000763; 	R(CALLF(sprite_copy_2_to_1_2,0));	// 35170 call    sprite_copy_2_to_1_2 ;~ 1359:0763
cs=0x1359;eip=0x000768; 	X(MOV(is_in_replay, 1));	// 35171 mov     is_in_replay, 1 ;~ 1359:0768
cs=0x1359;eip=0x00076d; 	R(CALLF(audio_carstate,0));	// 35172 call    audio_carstate ;~ 1359:076D
cs=0x1359;eip=0x000772; 	R(CALLF(audio_remove_driver_timer,0));	// 35173 call    audio_remove_driver_timer ;~ 1359:0772
cs=0x1359;eip=0x000777; 	T(CMP(game_replay_mode, 0));	// 35174 cmp     game_replay_mode, 0 ;~ 1359:0777
cs=0x1359;eip=0x00077c; 	R(JZ(loc_222f1));	// 35175 jz      short loc_222F1 ;~ 1359:077C
cs=0x1359;eip=0x00077e; 	R(JMP(loc_223cd));	// 35176 jmp     loc_223CD ;~ 1359:077E
loc_222f1:
	// 6807 
cs=0x1359;eip=0x000781; 	T(CMP(byte_449aa, 0));	// 35180 cmp     byte_449AA, 0 ;~ 1359:0781
cs=0x1359;eip=0x000786; 	R(JNZ(loc_222fb));	// 35181 jnz     short loc_222FB ;~ 1359:0786
cs=0x1359;eip=0x000788; 	R(JMP(loc_223cd));	// 35182 jmp     loc_223CD ;~ 1359:0788
loc_222fb:
	// 6808 
cs=0x1359;eip=0x00078b; 	T(CMP(byte_4477f, 0));	// 35186 cmp     byte_4477F, 0 ;~ 1359:078B
cs=0x1359;eip=0x000790; 	R(JZ(loc_22305));	// 35187 jz      short loc_22305 ;~ 1359:0790
cs=0x1359;eip=0x000792; 	R(JMP(loc_223cd));	// 35188 jmp     loc_223CD ;~ 1359:0792
loc_22305:
	// 6809 
cs=0x1359;eip=0x000795; 	T(SUB(ax, ax));	// 35192 sub     ax, ax ;~ 1359:0795
cs=0x1359;eip=0x000797; 	X(PUSH(ax));	// 35193 push    ax ;~ 1359:0797
cs=0x1359;eip=0x000798; 	T(ax = bp+var_16);	// 35194 lea     ax, [bp+var_16] ;~ 1359:0798
cs=0x1359;eip=0x00079b; 	X(PUSH(ax));	// 35195 push    ax ;~ 1359:079B
cs=0x1359;eip=0x00079c; 	X(PUSH(performgraphcolor));	// 35196 push    performGraphColor ;~ 1359:079C
cs=0x1359;eip=0x0007a0; 	T(MOV(ax, 0x50));	// 35197 mov     ax, 50h ; 'P' ;~ 1359:07A0
cs=0x1359;eip=0x0007a3; 	X(PUSH(ax));	// 35198 push    ax ;~ 1359:07A3
cs=0x1359;eip=0x0007a4; 	T(MOV(ax, 0x0FFFF));	// 35199 mov     ax, 0FFFFh ;~ 1359:07A4
cs=0x1359;eip=0x0007a7; 	X(PUSH(ax));	// 35200 push    ax ;~ 1359:07A7
cs=0x1359;eip=0x0007a8; 	T(MOV(ax, offset(dseg,acop)));	// 35201 mov     ax, offset aCop ; "cop" ;~ 1359:07A8
cs=0x1359;eip=0x0007ab; 	X(PUSH(ax));	// 35202 push    ax ;~ 1359:07AB
cs=0x1359;eip=0x0007ac; 	X(PUSH(word_449a2));	// 35203 push    word_449A2 ;~ 1359:07AC
cs=0x1359;eip=0x0007b0; 	X(PUSH(gameresptr));	// 35204 push    gameresptr ;~ 1359:07B0
cs=0x1359;eip=0x0007b4; 	R(CALLF(locate_text_res,0));	// 35205 call    locate_text_res ;~ 1359:07B4
cs=0x1359;eip=0x0007b9; 	T(ADD(sp, 6));	// 35206 add     sp, 6 ;~ 1359:07B9
cs=0x1359;eip=0x0007bc; 	X(PUSH(dx));	// 35207 push    dx ;~ 1359:07BC
cs=0x1359;eip=0x0007bd; 	X(PUSH(ax));	// 35208 push    ax ;~ 1359:07BD
cs=0x1359;eip=0x0007be; 	T(SUB(ax, ax));	// 35209 sub     ax, ax ;~ 1359:07BE
cs=0x1359;eip=0x0007c0; 	X(PUSH(ax));	// 35210 push    ax ;~ 1359:07C0
cs=0x1359;eip=0x0007c1; 	T(MOV(ax, 3));	// 35211 mov     ax, 3 ;~ 1359:07C1
cs=0x1359;eip=0x0007c4; 	X(PUSH(ax));	// 35212 push    ax ;~ 1359:07C4
cs=0x1359;eip=0x0007c5; 	R(CALLF(show_dialog,0));	// 35213 call    show_dialog ;~ 1359:07C5
cs=0x1359;eip=0x0007ca; 	T(ADD(sp, 0x12));	// 35214 add     sp, 12h ;~ 1359:07CA
cs=0x1359;eip=0x0007cd; 	X(MOV(*(db*)(((db*)&word_45d3e)), 1));	// 35215 mov     byte ptr word_45D3E, 1 ;~ 1359:07CD
cs=0x1359;eip=0x0007d2; 	T(MOV(si, framespersec));	// 35216 mov     si, framespersec ;~ 1359:07D2
cs=0x1359;eip=0x0007d6; 	T(DEC(si));	// 35217 dec     si ;~ 1359:07D6
loc_22347:
	// 6810 
cs=0x1359;eip=0x0007d7; 	T(MOV(ax, 1));	// 35220 mov     ax, 1 ;~ 1359:07D7
cs=0x1359;eip=0x0007da; 	X(PUSH(ax));	// 35221 push    ax ;~ 1359:07DA
cs=0x1359;eip=0x0007db; 	X(PUSH(cs));	// 35222 push    cs ;~ 1359:07DB
cs=0x1359;eip=0x0007dc; 	R(CALL(replay_unk2,0));	// 35223 call    near ptr replay_unk2 ;~ 1359:07DC
cs=0x1359;eip=0x0007df; 	T(ADD(sp, 2));	// 35224 add     sp, 2 ;~ 1359:07DF
cs=0x1359;eip=0x0007e2; 	R(CALLF(update_gamestate,0));	// 35225 call    update_gamestate ;~ 1359:07E2
cs=0x1359;eip=0x0007e7; 	T(INC(si));	// 35226 inc     si ;~ 1359:07E7
cs=0x1359;eip=0x0007e8; 	T(MOV(ax, framespersec));	// 35227 mov     ax, framespersec ;~ 1359:07E8
cs=0x1359;eip=0x0007eb; 	T(CMP(si, ax));	// 35228 cmp     si, ax ;~ 1359:07EB
cs=0x1359;eip=0x0007ed; 	R(JNZ(loc_2239f));	// 35229 jnz     short loc_2239F ;~ 1359:07ED
cs=0x1359;eip=0x0007ef; 	T(SUB(si, si));	// 35230 sub     si, si ;~ 1359:07EF
cs=0x1359;eip=0x0007f1; 	T(MOV(ax, 1));	// 35231 mov     ax, 1 ;~ 1359:07F1
cs=0x1359;eip=0x0007f4; 	X(PUSH(ax));	// 35232 push    ax              ; int ;~ 1359:07F4
cs=0x1359;eip=0x0007f5; 	T(MOV(ax, word_445d4));	// 35233 mov     ax, word_445D4 ;~ 1359:07F5
cs=0x1359;eip=0x0007f8; 	T(ADD(ax, elapsed_time1));	// 35234 add     ax, elapsed_time1 ;~ 1359:07F8
cs=0x1359;eip=0x0007fc; 	X(PUSH(ax));	// 35235 push    ax ;~ 1359:07FC
cs=0x1359;eip=0x0007fd; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 35236 mov     ax, offset resID_byte1 ;~ 1359:07FD
cs=0x1359;eip=0x000800; 	X(PUSH(ax));	// 35237 push    ax              ; char * ;~ 1359:0800
cs=0x1359;eip=0x000801; 	R(CALLF(format_frame_as_string,0));	// 35238 call    format_frame_as_string ;~ 1359:0801
cs=0x1359;eip=0x000806; 	T(ADD(sp, 6));	// 35239 add     sp, 6 ;~ 1359:0806
cs=0x1359;eip=0x000809; 	R(CALLF(mouse_draw_opaque_check,0));	// 35240 call    mouse_draw_opaque_check ;~ 1359:0809
cs=0x1359;eip=0x00080e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 35241 push    [bp+var_14] ;~ 1359:080E
cs=0x1359;eip=0x000811; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 35242 mov     ax, offset resID_byte1 ;~ 1359:0811
cs=0x1359;eip=0x000814; 	X(PUSH(ax));	// 35243 push    ax ;~ 1359:0814
cs=0x1359;eip=0x000815; 	R(CALLF(font_op2_alt,0));	// 35244 call    font_op2_alt ;~ 1359:0815
cs=0x1359;eip=0x00081a; 	T(ADD(sp, 2));	// 35245 add     sp, 2 ;~ 1359:081A
cs=0x1359;eip=0x00081d; 	X(PUSH(ax));	// 35246 push    ax ;~ 1359:081D
cs=0x1359;eip=0x00081e; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 35247 mov     ax, offset resID_byte1 ;~ 1359:081E
cs=0x1359;eip=0x000821; 	X(PUSH(ax));	// 35248 push    ax ;~ 1359:0821
cs=0x1359;eip=0x000822; 	R(CALLF(sub_345bc,0));	// 35249 call    sub_345BC ;~ 1359:0822
cs=0x1359;eip=0x000827; 	T(ADD(sp, 6));	// 35250 add     sp, 6 ;~ 1359:0827
cs=0x1359;eip=0x00082a; 	R(CALLF(mouse_draw_transparent_check,0));	// 35251 call    mouse_draw_transparent_check ;~ 1359:082A
loc_2239f:
	// 6811 
cs=0x1359;eip=0x00082f; 	T(MOV(ax, 1));	// 35254 mov     ax, 1 ;~ 1359:082F
cs=0x1359;eip=0x000832; 	X(PUSH(ax));	// 35255 push    ax ;~ 1359:0832
cs=0x1359;eip=0x000833; 	R(CALLF(input_do_checking,0));	// 35256 call    input_do_checking ;~ 1359:0833
cs=0x1359;eip=0x000838; 	T(ADD(sp, 2));	// 35257 add     sp, 2 ;~ 1359:0838
cs=0x1359;eip=0x00083b; 	T(CMP(ax, 0x1B));	// 35258 cmp     ax, 1Bh ;~ 1359:083B
cs=0x1359;eip=0x00083e; 	R(JZ(loc_223cd));	// 35259 jz      short loc_223CD ;~ 1359:083E
cs=0x1359;eip=0x000840; 	T(CMP(byte_4477f, 0));	// 35260 cmp     byte_4477F, 0 ;~ 1359:0840
cs=0x1359;eip=0x000845; 	R(JNZ(loc_223cd));	// 35261 jnz     short loc_223CD ;~ 1359:0845
cs=0x1359;eip=0x000847; 	T(MOV(ax, 0x5DC));	// 35262 mov     ax, 5DCh ;~ 1359:0847
cs=0x1359;eip=0x00084a; 	X(IMUL1_2(framespersec));	// 35263 imul    framespersec ;~ 1359:084A
cs=0x1359;eip=0x00084e; 	T(MOV(cx, word_445d4));	// 35264 mov     cx, word_445D4 ;~ 1359:084E
cs=0x1359;eip=0x000852; 	T(ADD(cx, elapsed_time1));	// 35265 add     cx, elapsed_time1 ;~ 1359:0852
cs=0x1359;eip=0x000856; 	T(CMP(ax, cx));	// 35266 cmp     ax, cx ;~ 1359:0856
cs=0x1359;eip=0x000858; 	R(JZ(loc_223cd));	// 35267 jz      short loc_223CD ;~ 1359:0858
cs=0x1359;eip=0x00085a; 	R(JMP(loc_22347));	// 35268 jmp     loc_22347 ;~ 1359:085A
loc_223cd:
	// 6812 
cs=0x1359;eip=0x00085d; 	X(MOV(*(db*)(((db*)&word_45d3e)), 0));	// 35273 mov     byte ptr word_45D3E, 0 ;~ 1359:085D
cs=0x1359;eip=0x000862; 	T(SUB(ax, ax));	// 35274 sub     ax, ax ;~ 1359:0862
cs=0x1359;eip=0x000864; 	X(PUSH(ax));	// 35275 push    ax ;~ 1359:0864
cs=0x1359;eip=0x000865; 	X(PUSH(cs));	// 35276 push    cs ;~ 1359:0865
cs=0x1359;eip=0x000866; 	R(CALL(mouse_minmax_position,0));	// 35277 call    near ptr mouse_minmax_position ;~ 1359:0866
cs=0x1359;eip=0x000869; 	T(ADD(sp, 2));	// 35278 add     sp, 2 ;~ 1359:0869
cs=0x1359;eip=0x00086c; 	X(PUSH(cs));	// 35279 push    cs ;~ 1359:086C
cs=0x1359;eip=0x00086d; 	R(CALL(remove_frame_callback,0));	// 35280 call    near ptr remove_frame_callback ;~ 1359:086D
cs=0x1359;eip=0x000870; 	X(PUSH(cs));	// 35281 push    cs ;~ 1359:0870
cs=0x1359;eip=0x000871; 	R(CALL(free_player_cars,0));	// 35282 call    near ptr free_player_cars ;~ 1359:0871
loc_223e4:
	// 6813 
cs=0x1359;eip=0x000874; 	X(MOV(waitflag, 0x64));	// 35285 mov     waitflag, 64h ; 'd' ;~ 1359:0874
cs=0x1359;eip=0x00087a; 	R(CALLF(check_input,0));	// 35286 call    check_input ;~ 1359:087A
cs=0x1359;eip=0x00087f; 	R(CALLF(show_waiting,0));	// 35287 call    show_waiting ;~ 1359:087F
loc_223f4:
	// 6814 
cs=0x1359;eip=0x000884; 	X(POP(si));	// 35290 pop     si ;~ 1359:0884
cs=0x1359;eip=0x000885; 	T(MOV(sp, bp));	// 35291 mov     sp, bp ;~ 1359:0885
cs=0x1359;eip=0x000887; 	X(POP(bp));	// 35292 pop     bp ;~ 1359:0887
cs=0x1359;eip=0x000888; 	R(RETF(0));	// 35293 retf ;~ 1359:0888
handle_ingame_kb_shortcuts:
	// 35303 
#undef arg_0
#define arg_0 6
	// 35306 arg_0           = word ptr  6 ;~ 1359:088A
ret_1359_88a:
	// 6815 
cs=0x1359;eip=0x00088a; 	X(PUSH(bp));	// 35308 push    bp ;~ 1359:088A
cs=0x1359;eip=0x00088b; 	T(MOV(bp, sp));	// 35309 mov     bp, sp ;~ 1359:088B
cs=0x1359;eip=0x00088d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 35310 mov     ax, [bp+arg_0] ;~ 1359:088D
cs=0x1359;eip=0x000890; 	T(CMP(ax, 0x64));	// 35311 cmp     ax, 64h ; 'd' ;~ 1359:0890
cs=0x1359;eip=0x000893; 	R(JZ(loc_22470));	// 35312 jz      short loc_22470 ;~ 1359:0893
cs=0x1359;eip=0x000895; 	R(JBE(loc_2240a));	// 35313 jbe     short loc_2240A ;~ 1359:0895
cs=0x1359;eip=0x000897; 	R(JMP(loc_224ee));	// 35314 jmp     loc_224EE ;~ 1359:0897
loc_2240a:
	// 6816 
cs=0x1359;eip=0x00089a; 	T(CMP(ax, 0x44));	// 35318 cmp     ax, 44h ; 'D' ;~ 1359:089A
cs=0x1359;eip=0x00089d; 	R(JZ(loc_22470));	// 35319 jz      short loc_22470 ;~ 1359:089D
cs=0x1359;eip=0x00089f; 	R(JBE(loc_22414));	// 35320 jbe     short loc_22414 ;~ 1359:089F
cs=0x1359;eip=0x0008a1; 	R(JMP(loc_224ac));	// 35321 jmp     loc_224AC ;~ 1359:08A1
loc_22414:
	// 6817 
cs=0x1359;eip=0x0008a4; 	T(CMP(ax, 0x1B));	// 35325 cmp     ax, 1Bh         ; ESC ;~ 1359:08A4
cs=0x1359;eip=0x0008a7; 	R(JZ(loc_22420));	// 35326 jz      short loc_22420 ;~ 1359:08A7
cs=0x1359;eip=0x0008a9; 	T(CMP(ax, 0x43));	// 35327 cmp     ax, 43h ; 'C' ;~ 1359:08A9
cs=0x1359;eip=0x0008ac; 	R(JMP(loc_224be));	// 35328 jmp     loc_224BE ;~ 1359:08AC
loc_22420:
	// 6818 
cs=0x1359;eip=0x0008b0; 	T(CMP(game_replay_mode, 0));	// 35333 cmp     game_replay_mode, 0 ;~ 1359:08B0
cs=0x1359;eip=0x0008b5; 	R(JNZ(loc_22436));	// 35334 jnz     short loc_22436 ;~ 1359:08B5
cs=0x1359;eip=0x0008b7; 	T(SUB(ax, ax));	// 35335 sub     ax, ax ;~ 1359:08B7
cs=0x1359;eip=0x0008b9; 	X(PUSH(ax));	// 35336 push    ax ;~ 1359:08B9
cs=0x1359;eip=0x0008ba; 	T(MOV(ax, 4));	// 35337 mov     ax, 4 ;~ 1359:08BA
cs=0x1359;eip=0x0008bd; 	X(PUSH(ax));	// 35338 push    ax ;~ 1359:08BD
cs=0x1359;eip=0x0008be; 	R(CALLF(update_crash_state,0));	// 35339 call    update_crash_state ;~ 1359:08BE
cs=0x1359;eip=0x0008c3; 	T(ADD(sp, 4));	// 35340 add     sp, 4 ;~ 1359:08C3
loc_22436:
	// 6819 
cs=0x1359;eip=0x0008c6; 	X(MOV(byte_449da, 1));	// 35343 mov     byte_449DA, 1 ;~ 1359:08C6
cs=0x1359;eip=0x0008cb; 	R(JMP(loc_224e9));	// 35344 jmp     loc_224E9 ;~ 1359:08CB
loc_2243e:
	// 6820 
cs=0x1359;eip=0x0008ce; 	X(MOV(cameramode, 1));	// 35348 mov     cameramode, 1 ;~ 1359:08CE
cs=0x1359;eip=0x0008d3; 	R(JMP(loc_224e9));	// 35349 jmp     loc_224E9 ;~ 1359:08D3
loc_22446:
	// 6821 
cs=0x1359;eip=0x0008d6; 	X(MOV(cameramode, 2));	// 35353 mov     cameramode, 2 ;~ 1359:08D6
cs=0x1359;eip=0x0008db; 	R(JMP(loc_224e9));	// 35354 jmp     loc_224E9 ;~ 1359:08DB
loc_2244e:
	// 6822 
cs=0x1359;eip=0x0008de; 	X(MOV(cameramode, 3));	// 35358 mov     cameramode, 3 ;~ 1359:08DE
cs=0x1359;eip=0x0008e3; 	R(JMP(loc_224e9));	// 35359 jmp     loc_224E9 ;~ 1359:08E3
loc_22456:
	// 6823 
cs=0x1359;eip=0x0008e6; 	X(XOR(hkeyflag, 1));	// 35364 xor     HKeyFlag, 1 ;~ 1359:08E6
cs=0x1359;eip=0x0008eb; 	R(JMP(loc_224e9));	// 35365 jmp     loc_224E9 ;~ 1359:08EB
loc_2245e:
	// 6824 
cs=0x1359;eip=0x0008ee; 	R(CALLF(do_mou_restext,0));	// 35370 call    do_mou_restext ;~ 1359:08EE
cs=0x1359;eip=0x0008f3; 	T(MOV(al, byte_3b8f2));	// 35371 mov     al, byte_3B8F2 ;~ 1359:08F3
cs=0x1359;eip=0x0008f6; 	T(CBW);	// 35372 cbw ;~ 1359:08F6
cs=0x1359;eip=0x0008f7; 	X(PUSH(ax));	// 35373 push    ax ;~ 1359:08F7
cs=0x1359;eip=0x0008f8; 	X(PUSH(cs));	// 35374 push    cs ;~ 1359:08F8
cs=0x1359;eip=0x0008f9; 	R(CALL(mouse_minmax_position,0));	// 35375 call    near ptr mouse_minmax_position ;~ 1359:08F9
cs=0x1359;eip=0x0008fc; 	R(JMP(loc_224e6));	// 35376 jmp     short loc_224E6 ;~ 1359:08FC
loc_22470:
	// 6825 
cs=0x1359;eip=0x000900; 	X(XOR(dashb_toggle, 1));	// 35383 xor     dashb_toggle, 1 ;~ 1359:0900
cs=0x1359;eip=0x000905; 	R(JMP(loc_224e9));	// 35384 jmp     short loc_224E9 ;~ 1359:0905
loc_22478:
	// 6826 
cs=0x1359;eip=0x000908; 	X(XOR(replaybar_toggle, 1));	// 35390 xor     replaybar_toggle, 1 ;~ 1359:0908
cs=0x1359;eip=0x00090d; 	R(JMP(loc_224e9));	// 35391 jmp     short loc_224E9 ;~ 1359:090D
loc_22480:
	// 6827 
cs=0x1359;eip=0x000910; 	T(CMP(game_replay_mode, 1));	// 35396 cmp     game_replay_mode, 1 ;~ 1359:0910
cs=0x1359;eip=0x000915; 	R(JZ(loc_224e9));	// 35397 jz      short loc_224E9 ;~ 1359:0915
cs=0x1359;eip=0x000917; 	X(INC(cameramode));	// 35398 inc     cameramode ;~ 1359:0917
cs=0x1359;eip=0x00091b; 	T(CMP(cameramode, 4));	// 35399 cmp     cameramode, 4 ;~ 1359:091B
cs=0x1359;eip=0x000920; 	R(JNZ(loc_224e9));	// 35400 jnz     short loc_224E9 ;~ 1359:0920
loc_22492:
	// 6828 
cs=0x1359;eip=0x000922; 	X(MOV(cameramode, 0));	// 35403 mov     cameramode, 0 ;~ 1359:0922
cs=0x1359;eip=0x000927; 	R(JMP(loc_224e9));	// 35404 jmp     short loc_224E9 ;~ 1359:0927
loc_2249a:
	// 6829 
cs=0x1359;eip=0x00092a; 	T(CMP(byte_449aa, 0));	// 35409 cmp     byte_449AA, 0 ;~ 1359:092A
cs=0x1359;eip=0x00092f; 	R(JZ(loc_224e9));	// 35410 jz      short loc_224E9 ;~ 1359:092F
cs=0x1359;eip=0x000931; 	X(XOR(followopponentflag, 1));	// 35411 xor     followOpponentFlag, 1 ;~ 1359:0931
cs=0x1359;eip=0x000936; 	R(JMP(loc_224e9));	// 35412 jmp     short loc_224E9 ;~ 1359:0936
loc_224a8:
	// 6830 
cs=0x1359;eip=0x000938; 	T(SUB(ax, ax));	// 35416 sub     ax, ax ;~ 1359:0938
cs=0x1359;eip=0x00093a; 	X(POP(bp));	// 35417 pop     bp ;~ 1359:093A
cs=0x1359;eip=0x00093b; 	R(RETF(0));	// 35418 retf ;~ 1359:093B
loc_224ac:
	// 6831 
cs=0x1359;eip=0x00093c; 	T(CMP(ax, 0x48));	// 35422 cmp     ax, 48h ; 'H' ;~ 1359:093C
cs=0x1359;eip=0x00093f; 	R(JZ(loc_22456));	// 35423 jz      short loc_22456 ;~ 1359:093F
cs=0x1359;eip=0x000941; 	T(CMP(ax, 0x4D));	// 35424 cmp     ax, 4Dh ; 'M' ;~ 1359:0941
cs=0x1359;eip=0x000944; 	R(JZ(loc_2245e));	// 35425 jz      short loc_2245E ;~ 1359:0944
cs=0x1359;eip=0x000946; 	T(CMP(ax, 0x52));	// 35426 cmp     ax, 52h ; 'R' ;~ 1359:0946
cs=0x1359;eip=0x000949; 	R(JZ(loc_22478));	// 35427 jz      short loc_22478 ;~ 1359:0949
cs=0x1359;eip=0x00094b; 	T(CMP(ax, 0x63));	// 35428 cmp     ax, 63h ; 'c' ;~ 1359:094B
loc_224be:
	// 6832 
cs=0x1359;eip=0x00094e; 	R(JZ(loc_22480));	// 35431 jz      short loc_22480 ;~ 1359:094E
loc_224c0:
	// 6833 
cs=0x1359;eip=0x000950; 	T(CMP(game_replay_mode, 1));	// 35435 cmp     game_replay_mode, 1 ;~ 1359:0950
cs=0x1359;eip=0x000955; 	R(JNZ(loc_224a8));	// 35436 jnz     short loc_224A8 ;~ 1359:0955
cs=0x1359;eip=0x000957; 	X(MOV(game_replay_mode, 0));	// 35437 mov     game_replay_mode, 0 ;~ 1359:0957
cs=0x1359;eip=0x00095c; 	X(MOV(byte_4393c, 0));	// 35438 mov     byte_4393C, 0 ;~ 1359:095C
cs=0x1359;eip=0x000961; 	T(MOV(ax, framespersec2));	// 35439 mov     ax, framespersec2 ;~ 1359:0961
cs=0x1359;eip=0x000964; 	X(MOV(framespersec, ax));	// 35440 mov     framespersec, ax ;~ 1359:0964
cs=0x1359;eip=0x000967; 	T(MOV(al, *(db*)(((db*)&framespersec2))));	// 35441 mov     al, byte ptr framespersec2 ;~ 1359:0967
cs=0x1359;eip=0x00096a; 	X(MOV(byte_449ba, al));	// 35442 mov     byte_449BA, al ;~ 1359:096A
cs=0x1359;eip=0x00096d; 	T(MOV(ax, 0x0FFFF));	// 35443 mov     ax, 0FFFFh ;~ 1359:096D
cs=0x1359;eip=0x000970; 	X(PUSH(ax));	// 35444 push    ax ;~ 1359:0970
cs=0x1359;eip=0x000971; 	R(CALLF(init_game_state,0));	// 35445 call    init_game_state ;~ 1359:0971
loc_224e6:
	// 6834 
cs=0x1359;eip=0x000976; 	T(ADD(sp, 2));	// 35448 add     sp, 2 ;~ 1359:0976
loc_224e9:
	// 6835 
cs=0x1359;eip=0x000979; 	T(MOV(ax, 1));	// 35452 mov     ax, 1 ;~ 1359:0979
cs=0x1359;eip=0x00097c; 	X(POP(bp));	// 35453 pop     bp ;~ 1359:097C
cs=0x1359;eip=0x00097d; 	R(RETF(0));	// 35454 retf ;~ 1359:097D
loc_224ee:
	// 6836 
cs=0x1359;eip=0x00097e; 	T(CMP(ax, 0x74));	// 35458 cmp     ax, 74h ; 't' ;~ 1359:097E
cs=0x1359;eip=0x000981; 	R(JZ(loc_2249a));	// 35459 jz      short loc_2249A ;~ 1359:0981
cs=0x1359;eip=0x000983; 	R(JA(loc_22510));	// 35460 ja      short loc_22510 ;~ 1359:0983
cs=0x1359;eip=0x000985; 	T(CMP(ax, 0x68));	// 35461 cmp     ax, 68h ; 'h' ;~ 1359:0985
cs=0x1359;eip=0x000988; 	R(JNZ(loc_224fd));	// 35462 jnz     short loc_224FD ;~ 1359:0988
cs=0x1359;eip=0x00098a; 	R(JMP(loc_22456));	// 35463 jmp     loc_22456 ;~ 1359:098A
loc_224fd:
	// 6837 
cs=0x1359;eip=0x00098d; 	T(CMP(ax, 0x6D));	// 35467 cmp     ax, 6Dh ; 'm' ;~ 1359:098D
cs=0x1359;eip=0x000990; 	R(JNZ(loc_22505));	// 35468 jnz     short loc_22505 ;~ 1359:0990
cs=0x1359;eip=0x000992; 	R(JMP(loc_2245e));	// 35469 jmp     loc_2245E ;~ 1359:0992
loc_22505:
	// 6838 
cs=0x1359;eip=0x000995; 	T(CMP(ax, 0x72));	// 35473 cmp     ax, 72h ; 'r' ;~ 1359:0995
cs=0x1359;eip=0x000998; 	R(JNZ(loc_2250d));	// 35474 jnz     short loc_2250D ;~ 1359:0998
cs=0x1359;eip=0x00099a; 	R(JMP(loc_22478));	// 35475 jmp     loc_22478 ;~ 1359:099A
loc_2250d:
	// 6839 
cs=0x1359;eip=0x00099d; 	R(JMP(loc_224c0));	// 35479 jmp     short loc_224C0 ;~ 1359:099D
loc_22510:
	// 6840 
cs=0x1359;eip=0x0009a0; 	T(CMP(ax, 0x3B00));	// 35484 cmp     ax, 3B00h ;~ 1359:09A0
cs=0x1359;eip=0x0009a3; 	R(JNZ(loc_22518));	// 35485 jnz     short loc_22518 ;~ 1359:09A3
cs=0x1359;eip=0x0009a5; 	R(JMP(loc_22492));	// 35486 jmp     loc_22492 ;~ 1359:09A5
loc_22518:
	// 6841 
cs=0x1359;eip=0x0009a8; 	T(CMP(ax, 0x3C00));	// 35490 cmp     ax, 3C00h ;~ 1359:09A8
cs=0x1359;eip=0x0009ab; 	R(JNZ(loc_22520));	// 35491 jnz     short loc_22520 ;~ 1359:09AB
cs=0x1359;eip=0x0009ad; 	R(JMP(loc_2243e));	// 35492 jmp     loc_2243E ;~ 1359:09AD
loc_22520:
	// 6842 
cs=0x1359;eip=0x0009b0; 	T(CMP(ax, 0x3D00));	// 35496 cmp     ax, 3D00h ;~ 1359:09B0
cs=0x1359;eip=0x0009b3; 	R(JNZ(loc_22528));	// 35497 jnz     short loc_22528 ;~ 1359:09B3
cs=0x1359;eip=0x0009b5; 	R(JMP(loc_22446));	// 35498 jmp     loc_22446 ;~ 1359:09B5
loc_22528:
	// 6843 
cs=0x1359;eip=0x0009b8; 	T(CMP(ax, 0x3E00));	// 35502 cmp     ax, 3E00h ;~ 1359:09B8
cs=0x1359;eip=0x0009bb; 	R(JNZ(loc_22530));	// 35503 jnz     short loc_22530 ;~ 1359:09BB
cs=0x1359;eip=0x0009bd; 	R(JMP(loc_2244e));	// 35504 jmp     loc_2244E ;~ 1359:09BD
loc_22530:
	// 6844 
cs=0x1359;eip=0x0009c0; 	R(JMP(loc_224c0));	// 35508 jmp     short loc_224C0 ;~ 1359:09C0
init_unknown:
	// 35516 
cs=0x1359;eip=0x0009c2; 	X(PUSH(bp));	// 35518 push    bp ;~ 1359:09C2
ret_1359_9c3:
	// 6845 
cs=0x1359;eip=0x0009c3; 	T(MOV(bp, sp));	// 35519 mov     bp, sp ;~ 1359:09C3
cs=0x1359;eip=0x0009c5; 	T(SUB(sp, 2));	// 35520 sub     sp, 2 ;~ 1359:09C5
cs=0x1359;eip=0x0009c8; 	X(PUSH(si));	// 35521 push    si ;~ 1359:09C8
cs=0x1359;eip=0x0009c9; 	X(MOV(byte_44a8a, 1));	// 35522 mov     byte_44A8A, 1 ;~ 1359:09C9
cs=0x1359;eip=0x0009ce; 	X(MOV(byte_4552f, 2));	// 35523 mov     byte_4552F, 2 ;~ 1359:09CE
cs=0x1359;eip=0x0009d3; 	T(SUB(si, si));	// 35524 sub     si, si ;~ 1359:09D3
cs=0x1359;eip=0x0009d5; 	X(MOV(elapsed_time2, si));	// 35525 mov     elapsed_time2, si ;~ 1359:09D5
cs=0x1359;eip=0x0009d9; 	T(SUB(al, al));	// 35526 sub     al, al ;~ 1359:09D9
cs=0x1359;eip=0x0009db; 	X(MOV(byte_449da, al));	// 35527 mov     byte_449DA, al ;~ 1359:09DB
cs=0x1359;eip=0x0009de; 	X(MOV(byte_4393c, al));	// 35528 mov     byte_4393C, al ;~ 1359:09DE
cs=0x1359;eip=0x0009e1; 	X(MOV(word_44dca, si));	// 35529 mov     word_44DCA, si ;~ 1359:09E1
cs=0x1359;eip=0x0009e5; 	X(POP(si));	// 35530 pop     si ;~ 1359:09E5
cs=0x1359;eip=0x0009e6; 	T(MOV(sp, bp));	// 35531 mov     sp, bp ;~ 1359:09E6
cs=0x1359;eip=0x0009e8; 	X(POP(bp));	// 35532 pop     bp ;~ 1359:09E8
cs=0x1359;eip=0x0009e9; 	R(RETF(0));	// 35533 retf ;~ 1359:09E9
set_frame_callback:
	// 35540 
cs=0x1359;eip=0x0009ea; 	X(MOV(word_46468, 0));	// 35541 mov     word_46468, 0 ;~ 1359:09EA
ret_1359_9f0:
	// 6846 
cs=0x1359;eip=0x0009f0; 	T(MOV(ax, m2c::kframe_callback));	// 35542 mov     ax, offset frame_callback ;~ 1359:09F0
cs=0x1359;eip=0x0009f3; 	T(MOV(dx, seg_offset(seg005)));	// 35543 mov     dx, seg seg005 ;~ 1359:09F3
cs=0x1359;eip=0x0009f6; 	X(PUSH(dx));	// 35544 push    dx ;~ 1359:09F6
cs=0x1359;eip=0x0009f7; 	X(PUSH(ax));	// 35545 push    ax ;~ 1359:09F7
cs=0x1359;eip=0x0009f8; 	R(CALLF(timer_reg_callback,0));	// 35546 call    timer_reg_callback ;~ 1359:09F8
cs=0x1359;eip=0x0009fd; 	T(ADD(sp, 4));	// 35547 add     sp, 4 ;~ 1359:09FD
cs=0x1359;eip=0x000a00; 	X(MOV(byte_442e4, 0));	// 35548 mov     byte_442E4, 0 ;~ 1359:0A00
cs=0x1359;eip=0x000a05; 	R(RETF(0));	// 35549 retf ;~ 1359:0A05
remove_frame_callback:
	// 35556 
cs=0x1359;eip=0x000a06; 	T(MOV(ax, 0x0A));	// 35557 mov     ax, 0Ah ;~ 1359:0A06
ret_1359_a09:
	// 6847 
cs=0x1359;eip=0x000a09; 	T(CWD);	// 35558 cwd ;~ 1359:0A09
cs=0x1359;eip=0x000a0a; 	X(PUSH(dx));	// 35559 push    dx ;~ 1359:0A0A
cs=0x1359;eip=0x000a0b; 	X(PUSH(ax));	// 35560 push    ax ;~ 1359:0A0B
cs=0x1359;eip=0x000a0c; 	R(CALLF(timer_get_counter_unk,0));	// 35561 call    timer_get_counter_unk ;~ 1359:0A0C
cs=0x1359;eip=0x000a11; 	T(ADD(sp, 4));	// 35562 add     sp, 4 ;~ 1359:0A11
cs=0x1359;eip=0x000a14; 	T(MOV(ax, m2c::kframe_callback));	// 35563 mov     ax, offset frame_callback ;~ 1359:0A14
cs=0x1359;eip=0x000a17; 	T(MOV(dx, seg_offset(seg005)));	// 35564 mov     dx, seg seg005 ;~ 1359:0A17
cs=0x1359;eip=0x000a1a; 	X(PUSH(dx));	// 35565 push    dx ;~ 1359:0A1A
cs=0x1359;eip=0x000a1b; 	X(PUSH(ax));	// 35566 push    ax ;~ 1359:0A1B
cs=0x1359;eip=0x000a1c; 	R(CALLF(timer_remove_callback,0));	// 35567 call    timer_remove_callback ;~ 1359:0A1C
cs=0x1359;eip=0x000a21; 	T(ADD(sp, 4));	// 35568 add     sp, 4 ;~ 1359:0A21
cs=0x1359;eip=0x000a24; 	R(RETF(0));	// 35569 retf ;~ 1359:0A24
frame_callback:
	// 35578 
cs=0x1359;eip=0x000a26; 	R(CALLF(compare_ds_ss,0));	// 35580 call    compare_ds_ss ;~ 1359:0A26
ret_1359_a2b:
	// 6848 
cs=0x1359;eip=0x000a2b; 	T(OR(ax, ax));	// 35581 or      ax, ax ;~ 1359:0A2B
cs=0x1359;eip=0x000a2d; 	R(JNZ(loc_225a2));	// 35582 jnz     short loc_225A2 ;~ 1359:0A2D
cs=0x1359;eip=0x000a2f; 	R(JMP(locret_22696));	// 35583 jmp     locret_22696 ;~ 1359:0A2F
loc_225a2:
	// 6849 
cs=0x1359;eip=0x000a32; 	T(CMP(byte_442e4, 0));	// 35587 cmp     byte_442E4, 0 ;~ 1359:0A32
cs=0x1359;eip=0x000a37; 	R(JZ(loc_225ac));	// 35588 jz      short loc_225AC ;~ 1359:0A37
cs=0x1359;eip=0x000a39; 	R(JMP(locret_22696));	// 35589 jmp     locret_22696 ;~ 1359:0A39
loc_225ac:
	// 6850 
cs=0x1359;eip=0x000a3c; 	X(INC(byte_442e4));	// 35593 inc     byte_442E4 ;~ 1359:0A3C
cs=0x1359;eip=0x000a40; 	T(CMP(byte_442e4, 1));	// 35594 cmp     byte_442E4, 1 ;~ 1359:0A40
cs=0x1359;eip=0x000a45; 	R(JZ(loc_225ba));	// 35595 jz      short loc_225BA ;~ 1359:0A45
cs=0x1359;eip=0x000a47; 	R(JMP(loc_22692));	// 35596 jmp     loc_22692 ;~ 1359:0A47
loc_225ba:
	// 6851 
cs=0x1359;eip=0x000a4a; 	X(INC(word_443f4));	// 35600 inc     word_443F4 ;~ 1359:0A4A
cs=0x1359;eip=0x000a4e; 	T(MOV(ax, word_4499c));	// 35601 mov     ax, word_4499C ;~ 1359:0A4E
cs=0x1359;eip=0x000a51; 	T(CMP(word_443f4, ax));	// 35602 cmp     word_443F4, ax ;~ 1359:0A51
cs=0x1359;eip=0x000a55; 	R(JL(loc_225fe));	// 35603 jl      short loc_225FE ;~ 1359:0A55
cs=0x1359;eip=0x000a57; 	T(MOV(ax, word_449e4));	// 35604 mov     ax, word_449E4 ;~ 1359:0A57
cs=0x1359;eip=0x000a5a; 	T(CMP(word_44d1e, ax));	// 35605 cmp     word_44D1E, ax ;~ 1359:0A5A
cs=0x1359;eip=0x000a5e; 	R(JZ(loc_225fe));	// 35606 jz      short loc_225FE ;~ 1359:0A5E
cs=0x1359;eip=0x000a60; 	X(PUSH(word_443f4));	// 35607 push    word_443F4 ;~ 1359:0A60
cs=0x1359;eip=0x000a64; 	T(MOV(ax, 0x22));	// 35608 mov     ax, 22h ; '"' ;~ 1359:0A64
cs=0x1359;eip=0x000a67; 	X(IMUL1_2(word_44d1e));	// 35609 imul    word_44D1E ;~ 1359:0A67
cs=0x1359;eip=0x000a6b; 	T(ADD(ax, 0x97DC));	// 35610 add     ax, 97DCh ;~ 1359:0A6B
cs=0x1359;eip=0x000a6e; 	X(PUSH(ax));	// 35611 push    ax ;~ 1359:0A6E
cs=0x1359;eip=0x000a6f; 	R(CALLF(sub_18d06,0));	// 35612 call    sub_18D06 ;~ 1359:0A6F
cs=0x1359;eip=0x000a74; 	T(ADD(sp, 4));	// 35613 add     sp, 4 ;~ 1359:0A74
cs=0x1359;eip=0x000a77; 	X(MOV(word_443f4, 0));	// 35614 mov     word_443F4, 0 ;~ 1359:0A77
cs=0x1359;eip=0x000a7d; 	X(INC(word_44d1e));	// 35615 inc     word_44D1E ;~ 1359:0A7D
cs=0x1359;eip=0x000a81; 	T(CMP(word_44d1e, 0x28));	// 35616 cmp     word_44D1E, 28h ; '(' ;~ 1359:0A81
cs=0x1359;eip=0x000a86; 	R(JNZ(loc_225fe));	// 35617 jnz     short loc_225FE ;~ 1359:0A86
cs=0x1359;eip=0x000a88; 	X(MOV(word_44d1e, 0));	// 35618 mov     word_44D1E, 0 ;~ 1359:0A88
loc_225fe:
	// 6852 
cs=0x1359;eip=0x000a8e; 	T(CMP(byte_449da, 0));	// 35622 cmp     byte_449DA, 0 ;~ 1359:0A8E
cs=0x1359;eip=0x000a93; 	R(JZ(loc_22608));	// 35623 jz      short loc_22608 ;~ 1359:0A93
cs=0x1359;eip=0x000a95; 	R(JMP(loc_22692));	// 35624 jmp     loc_22692 ;~ 1359:0A95
loc_22608:
	// 6853 
cs=0x1359;eip=0x000a98; 	T(CMP(byte_46467, 0));	// 35628 cmp     byte_46467, 0 ;~ 1359:0A98
cs=0x1359;eip=0x000a9d; 	R(JZ(loc_22612));	// 35629 jz      short loc_22612 ;~ 1359:0A9D
cs=0x1359;eip=0x000a9f; 	R(JMP(loc_22692));	// 35630 jmp     loc_22692 ;~ 1359:0A9F
loc_22612:
	// 6854 
cs=0x1359;eip=0x000aa2; 	T(CMP(is_in_replay, 0));	// 35634 cmp     is_in_replay, 0 ;~ 1359:0AA2
cs=0x1359;eip=0x000aa7; 	R(JZ(loc_22620));	// 35635 jz      short loc_22620 ;~ 1359:0AA7
cs=0x1359;eip=0x000aa9; 	T(CMP(game_replay_mode, 2));	// 35636 cmp     game_replay_mode, 2 ;~ 1359:0AA9
cs=0x1359;eip=0x000aae; 	R(JZ(loc_22692));	// 35637 jz      short loc_22692 ;~ 1359:0AAE
loc_22620:
	// 6855 
cs=0x1359;eip=0x000ab0; 	T(CMP(game_replay_mode, 0));	// 35640 cmp     game_replay_mode, 0 ;~ 1359:0AB0
cs=0x1359;eip=0x000ab5; 	R(JNZ(loc_2263e));	// 35641 jnz     short loc_2263E ;~ 1359:0AB5
cs=0x1359;eip=0x000ab7; 	T(MOV(ax, word_445ce));	// 35642 mov     ax, word_445CE ;~ 1359:0AB7
cs=0x1359;eip=0x000aba; 	T(CMP(word_445cc, ax));	// 35643 cmp     word_445CC, ax ;~ 1359:0ABA
cs=0x1359;eip=0x000abe; 	R(JL(loc_2263e));	// 35644 jl      short loc_2263E ;~ 1359:0ABE
cs=0x1359;eip=0x000ac0; 	X(MOV(is_in_replay, 1));	// 35645 mov     is_in_replay, 1 ;~ 1359:0AC0
cs=0x1359;eip=0x000ac5; 	R(CALLF(audio_carstate,0));	// 35646 call    audio_carstate ;~ 1359:0AC5
cs=0x1359;eip=0x000aca; 	R(JMP(loc_22692));	// 35647 jmp     short loc_22692 ;~ 1359:0ACA
loc_2263e:
	// 6856 
cs=0x1359;eip=0x000ace; 	X(DEC(byte_44a8a));	// 35654 dec     byte_44A8A ;~ 1359:0ACE
cs=0x1359;eip=0x000ad2; 	R(JNZ(loc_22692));	// 35655 jnz     short loc_22692 ;~ 1359:0AD2
cs=0x1359;eip=0x000ad4; 	T(MOV(al, *(db*)(((db*)&word_4499c))));	// 35656 mov     al, byte ptr word_4499C ;~ 1359:0AD4
cs=0x1359;eip=0x000ad7; 	X(MOV(byte_44a8a, al));	// 35657 mov     byte_44A8A, al ;~ 1359:0AD7
cs=0x1359;eip=0x000ada; 	X(INC(word_46468));	// 35658 inc     word_46468 ;~ 1359:0ADA
cs=0x1359;eip=0x000ade; 	T(CMP(game_replay_mode, 2));	// 35659 cmp     game_replay_mode, 2 ;~ 1359:0ADE
cs=0x1359;eip=0x000ae3; 	R(JNZ(loc_22688));	// 35660 jnz     short loc_22688 ;~ 1359:0AE3
cs=0x1359;eip=0x000ae5; 	T(MOV(al, byte_449e6));	// 35661 mov     al, byte_449E6 ;~ 1359:0AE5
cs=0x1359;eip=0x000ae8; 	T(CBW);	// 35662 cbw ;~ 1359:0AE8
cs=0x1359;eip=0x000ae9; 	T(CMP(ax, 2));	// 35663 cmp     ax, 2 ;~ 1359:0AE9
cs=0x1359;eip=0x000aec; 	R(JZ(loc_22666));	// 35664 jz      short loc_22666 ;~ 1359:0AEC
cs=0x1359;eip=0x000aee; 	T(CMP(ax, 3));	// 35665 cmp     ax, 3 ;~ 1359:0AEE
cs=0x1359;eip=0x000af1; 	R(JZ(loc_2267e));	// 35666 jz      short loc_2267E ;~ 1359:0AF1
cs=0x1359;eip=0x000af3; 	R(JMP(loc_22688));	// 35667 jmp     short loc_22688 ;~ 1359:0AF3
loc_22666:
	// 6857 
cs=0x1359;eip=0x000af6; 	X(DEC(byte_4552f));	// 35672 dec     byte_4552F ;~ 1359:0AF6
cs=0x1359;eip=0x000afa; 	R(JNZ(loc_22692));	// 35673 jnz     short loc_22692 ;~ 1359:0AFA
cs=0x1359;eip=0x000afc; 	T(SUB(ax, ax));	// 35674 sub     ax, ax ;~ 1359:0AFC
cs=0x1359;eip=0x000afe; 	X(PUSH(ax));	// 35675 push    ax ;~ 1359:0AFE
cs=0x1359;eip=0x000aff; 	X(PUSH(cs));	// 35676 push    cs ;~ 1359:0AFF
cs=0x1359;eip=0x000b00; 	R(CALL(replay_unk2,0));	// 35677 call    near ptr replay_unk2 ;~ 1359:0B00
cs=0x1359;eip=0x000b03; 	T(ADD(sp, 2));	// 35678 add     sp, 2 ;~ 1359:0B03
cs=0x1359;eip=0x000b06; 	X(MOV(byte_4552f, 2));	// 35679 mov     byte_4552F, 2 ;~ 1359:0B06
cs=0x1359;eip=0x000b0b; 	R(JMP(loc_22692));	// 35680 jmp     short loc_22692 ;~ 1359:0B0B
loc_2267e:
	// 6858 
cs=0x1359;eip=0x000b0e; 	T(SUB(ax, ax));	// 35685 sub     ax, ax ;~ 1359:0B0E
cs=0x1359;eip=0x000b10; 	X(PUSH(ax));	// 35686 push    ax ;~ 1359:0B10
cs=0x1359;eip=0x000b11; 	X(PUSH(cs));	// 35687 push    cs ;~ 1359:0B11
cs=0x1359;eip=0x000b12; 	R(CALL(replay_unk2,0));	// 35688 call    near ptr replay_unk2 ;~ 1359:0B12
cs=0x1359;eip=0x000b15; 	T(ADD(sp, 2));	// 35689 add     sp, 2 ;~ 1359:0B15
loc_22688:
	// 6859 
cs=0x1359;eip=0x000b18; 	T(SUB(ax, ax));	// 35693 sub     ax, ax ;~ 1359:0B18
cs=0x1359;eip=0x000b1a; 	X(PUSH(ax));	// 35694 push    ax ;~ 1359:0B1A
cs=0x1359;eip=0x000b1b; 	X(PUSH(cs));	// 35695 push    cs ;~ 1359:0B1B
cs=0x1359;eip=0x000b1c; 	R(CALL(replay_unk2,0));	// 35696 call    near ptr replay_unk2 ;~ 1359:0B1C
cs=0x1359;eip=0x000b1f; 	T(ADD(sp, 2));	// 35697 add     sp, 2 ;~ 1359:0B1F
loc_22692:
	// 6860 
cs=0x1359;eip=0x000b22; 	X(DEC(byte_442e4));	// 35701 dec     byte_442E4 ;~ 1359:0B22
locret_22696:
	// 6861 
cs=0x1359;eip=0x000b26; 	R(RETF(0));	// 35705 retf ;~ 1359:0B26
replay_unk2:
	// 35715 
#undef var_a
#define var_a -0x0A
	// 35718 var_A           = word ptr -0Ah ;~ 1359:0B28
#undef var_8
#define var_8 -8
	// 35719 var_8           = word ptr -8 ;~ 1359:0B28
#undef var_6
#define var_6 -6
	// 35720 var_6           = word ptr -6 ;~ 1359:0B28
#undef arg_0
#define arg_0 6
	// 35721 arg_0           = word ptr  6 ;~ 1359:0B28
ret_1359_b28:
	// 6862 
cs=0x1359;eip=0x000b28; 	X(PUSH(bp));	// 35723 push    bp ;~ 1359:0B28
cs=0x1359;eip=0x000b29; 	T(MOV(bp, sp));	// 35724 mov     bp, sp ;~ 1359:0B29
cs=0x1359;eip=0x000b2b; 	T(SUB(sp, 0x0A));	// 35725 sub     sp, 0Ah ;~ 1359:0B2B
cs=0x1359;eip=0x000b2e; 	X(PUSH(di));	// 35726 push    di ;~ 1359:0B2E
cs=0x1359;eip=0x000b2f; 	X(PUSH(si));	// 35727 push    si ;~ 1359:0B2F
cs=0x1359;eip=0x000b30; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 35728 cmp     [bp+arg_0], 0 ;~ 1359:0B30
cs=0x1359;eip=0x000b34; 	R(JZ(loc_226ac));	// 35729 jz      short loc_226AC ;~ 1359:0B34
loc_226a6:
	// 6863 
cs=0x1359;eip=0x000b36; 	T(SUB(si, si));	// 35733 sub     si, si ;~ 1359:0B36
cs=0x1359;eip=0x000b38; 	R(JMP(loc_22817));	// 35734 jmp     loc_22817 ;~ 1359:0B38
loc_226ac:
	// 6864 
cs=0x1359;eip=0x000b3c; 	T(CMP(game_replay_mode, 2));	// 35739 cmp     game_replay_mode, 2 ;~ 1359:0B3C
cs=0x1359;eip=0x000b41; 	R(JNZ(loc_226e6));	// 35740 jnz     short loc_226E6 ;~ 1359:0B41
cs=0x1359;eip=0x000b43; 	T(MOV(ax, elapsed_time2));	// 35741 mov     ax, elapsed_time2 ;~ 1359:0B43
cs=0x1359;eip=0x000b46; 	T(CMP(word_449bc, ax));	// 35742 cmp     word_449BC, ax ;~ 1359:0B46
cs=0x1359;eip=0x000b4a; 	R(JBE(loc_226c6));	// 35743 jbe     short loc_226C6 ;~ 1359:0B4A
cs=0x1359;eip=0x000b4c; 	X(INC(elapsed_time2));	// 35744 inc     elapsed_time2 ;~ 1359:0B4C
cs=0x1359;eip=0x000b50; 	X(POP(si));	// 35745 pop     si ;~ 1359:0B50
cs=0x1359;eip=0x000b51; 	X(POP(di));	// 35746 pop     di ;~ 1359:0B51
cs=0x1359;eip=0x000b52; 	T(MOV(sp, bp));	// 35747 mov     sp, bp ;~ 1359:0B52
cs=0x1359;eip=0x000b54; 	X(POP(bp));	// 35748 pop     bp ;~ 1359:0B54
cs=0x1359;eip=0x000b55; 	R(RETF(0));	// 35749 retf ;~ 1359:0B55
loc_226c6:
	// 6865 
cs=0x1359;eip=0x000b56; 	T(CMP(byte_449da, 0));	// 35753 cmp     byte_449DA, 0 ;~ 1359:0B56
cs=0x1359;eip=0x000b5b; 	R(JZ(loc_226d0));	// 35754 jz      short loc_226D0 ;~ 1359:0B5B
cs=0x1359;eip=0x000b5d; 	R(JMP(loc_22985));	// 35755 jmp     loc_22985 ;~ 1359:0B5D
loc_226d0:
	// 6866 
cs=0x1359;eip=0x000b60; 	X(MOV(is_in_replay, 1));	// 35759 mov     is_in_replay, 1 ;~ 1359:0B60
cs=0x1359;eip=0x000b65; 	R(CALLF(audio_carstate,0));	// 35760 call    audio_carstate ;~ 1359:0B65
loc_226da:
	// 6867 
cs=0x1359;eip=0x000b6a; 	X(MOV(byte_449da, 1));	// 35763 mov     byte_449DA, 1 ;~ 1359:0B6A
cs=0x1359;eip=0x000b6f; 	X(POP(si));	// 35764 pop     si ;~ 1359:0B6F
cs=0x1359;eip=0x000b70; 	X(POP(di));	// 35765 pop     di ;~ 1359:0B70
cs=0x1359;eip=0x000b71; 	T(MOV(sp, bp));	// 35766 mov     sp, bp ;~ 1359:0B71
cs=0x1359;eip=0x000b73; 	X(POP(bp));	// 35767 pop     bp ;~ 1359:0B73
cs=0x1359;eip=0x000b74; 	R(RETF(0));	// 35768 retf ;~ 1359:0B74
loc_226e6:
	// 6868 
cs=0x1359;eip=0x000b76; 	T(CMP(byte_449da, 0));	// 35773 cmp     byte_449DA, 0 ;~ 1359:0B76
cs=0x1359;eip=0x000b7b; 	R(JNZ(loc_226a6));	// 35774 jnz     short loc_226A6 ;~ 1359:0B7B
cs=0x1359;eip=0x000b7d; 	T(CMP(byte_4488a, 0));	// 35775 cmp     byte_4488A, 0 ;~ 1359:0B7D
cs=0x1359;eip=0x000b82; 	R(JNZ(loc_226a6));	// 35776 jnz     short loc_226A6 ;~ 1359:0B82
cs=0x1359;eip=0x000b84; 	T(CMP(game_replay_mode, 1));	// 35777 cmp     game_replay_mode, 1 ;~ 1359:0B84
cs=0x1359;eip=0x000b89; 	R(JZ(loc_226a6));	// 35778 jz      short loc_226A6 ;~ 1359:0B89
cs=0x1359;eip=0x000b8b; 	T(CMP(passed_security, 0));	// 35779 cmp     passed_security, 0 ;~ 1359:0B8B
cs=0x1359;eip=0x000b90; 	R(JNZ(loc_22725));	// 35780 jnz     short loc_22725 ;~ 1359:0B90
cs=0x1359;eip=0x000b92; 	T(CMP(byte_4393c, 0));	// 35781 cmp     byte_4393C, 0 ;~ 1359:0B92
cs=0x1359;eip=0x000b97; 	R(JNZ(loc_22725));	// 35782 jnz     short loc_22725 ;~ 1359:0B97
cs=0x1359;eip=0x000b99; 	T(MOV(ax, framespersec));	// 35783 mov     ax, framespersec ;~ 1359:0B99
cs=0x1359;eip=0x000b9c; 	T(SHL(ax, 1));	// 35784 shl     ax, 1 ;~ 1359:0B9C
cs=0x1359;eip=0x000b9e; 	T(SHL(ax, 1));	// 35785 shl     ax, 1 ;~ 1359:0B9E
cs=0x1359;eip=0x000ba0; 	T(CMP(ax, word_445d4));	// 35786 cmp     ax, word_445D4 ;~ 1359:0BA0
cs=0x1359;eip=0x000ba4; 	R(JNC(loc_22725));	// 35787 jnb     short loc_22725 ;~ 1359:0BA4
cs=0x1359;eip=0x000ba6; 	T(SUB(ax, ax));	// 35788 sub     ax, ax ;~ 1359:0BA6
cs=0x1359;eip=0x000ba8; 	X(PUSH(ax));	// 35789 push    ax ;~ 1359:0BA8
cs=0x1359;eip=0x000ba9; 	T(MOV(ax, 1));	// 35790 mov     ax, 1 ;~ 1359:0BA9
cs=0x1359;eip=0x000bac; 	X(PUSH(ax));	// 35791 push    ax ;~ 1359:0BAC
cs=0x1359;eip=0x000bad; 	R(CALLF(update_crash_state,0));	// 35792 call    update_crash_state ;~ 1359:0BAD
cs=0x1359;eip=0x000bb2; 	T(ADD(sp, 4));	// 35793 add     sp, 4 ;~ 1359:0BB2
loc_22725:
	// 6869 
cs=0x1359;eip=0x000bb5; 	T(CMP(byte_3b8f2, 0));	// 35797 cmp     byte_3B8F2, 0 ;~ 1359:0BB5
cs=0x1359;eip=0x000bba; 	R(JNZ(loc_22736));	// 35798 jnz     short loc_22736 ;~ 1359:0BBA
cs=0x1359;eip=0x000bbc; 	T(CMP(byte_3fe00, 0));	// 35799 cmp     byte_3FE00, 0 ;~ 1359:0BBC
cs=0x1359;eip=0x000bc1; 	R(JNZ(loc_22736));	// 35800 jnz     short loc_22736 ;~ 1359:0BC1
cs=0x1359;eip=0x000bc3; 	R(JMP(loc_227e8));	// 35801 jmp     loc_227E8 ;~ 1359:0BC3
loc_22736:
	// 6870 
cs=0x1359;eip=0x000bc6; 	T(CMP(byte_3b8f2, 0));	// 35806 cmp     byte_3B8F2, 0 ;~ 1359:0BC6
cs=0x1359;eip=0x000bcb; 	R(JZ(loc_2279a));	// 35807 jz      short loc_2279A ;~ 1359:0BCB
cs=0x1359;eip=0x000bcd; 	T(MOV(ax, 0x0AA5E));	// 35808 mov     ax, 0AA5Eh ;~ 1359:0BCD
cs=0x1359;eip=0x000bd0; 	X(PUSH(ax));	// 35809 push    ax ;~ 1359:0BD0
cs=0x1359;eip=0x000bd1; 	T(MOV(ax, 0x0A9FC));	// 35810 mov     ax, 0A9FCh ;~ 1359:0BD1
cs=0x1359;eip=0x000bd4; 	X(PUSH(ax));	// 35811 push    ax ;~ 1359:0BD4
cs=0x1359;eip=0x000bd5; 	T(MOV(ax, 0x8B78));	// 35812 mov     ax, 8B78h ;~ 1359:0BD5
cs=0x1359;eip=0x000bd8; 	X(PUSH(ax));	// 35813 push    ax ;~ 1359:0BD8
cs=0x1359;eip=0x000bd9; 	R(CALLF(mouse_get_state,0));	// 35814 call    mouse_get_state ;~ 1359:0BD9
cs=0x1359;eip=0x000bde; 	T(ADD(sp, 6));	// 35815 add     sp, 6 ;~ 1359:0BDE
cs=0x1359;eip=0x000be1; 	T(MOV(di, mouse_xpos));	// 35816 mov     di, mouse_xpos ;~ 1359:0BE1
cs=0x1359;eip=0x000be5; 	T(SUB(di, 0x0A0));	// 35817 sub     di, 0A0h ; ' ' ;~ 1359:0BE5
cs=0x1359;eip=0x000be9; 	X(PUSH(di));	// 35818 push    di              ; int ;~ 1359:0BE9
cs=0x1359;eip=0x000bea; 	R(CALLF(_abs,0));	// 35819 call    _abs ;~ 1359:0BEA
cs=0x1359;eip=0x000bef; 	T(ADD(sp, 2));	// 35820 add     sp, 2 ;~ 1359:0BEF
cs=0x1359;eip=0x000bf2; 	T(CMP(ax, 0x12));	// 35821 cmp     ax, 12h ;~ 1359:0BF2
cs=0x1359;eip=0x000bf5; 	R(JGE(loc_2276c));	// 35822 jge     short loc_2276C ;~ 1359:0BF5
cs=0x1359;eip=0x000bf7; 	T(SUB(di, di));	// 35823 sub     di, di ;~ 1359:0BF7
cs=0x1359;eip=0x000bf9; 	R(JMP(loc_22779));	// 35824 jmp     short loc_22779 ;~ 1359:0BF9
loc_2276c:
	// 6871 
cs=0x1359;eip=0x000bfc; 	T(OR(di, di));	// 35829 or      di, di ;~ 1359:0BFC
cs=0x1359;eip=0x000bfe; 	R(JLE(loc_22776));	// 35830 jle     short loc_22776 ;~ 1359:0BFE
cs=0x1359;eip=0x000c00; 	T(SUB(di, 0x12));	// 35831 sub     di, 12h ;~ 1359:0C00
cs=0x1359;eip=0x000c03; 	R(JMP(loc_22779));	// 35832 jmp     short loc_22779 ;~ 1359:0C03
loc_22776:
	// 6872 
cs=0x1359;eip=0x000c06; 	T(ADD(di, 0x12));	// 35837 add     di, 12h ;~ 1359:0C06
loc_22779:
	// 6873 
cs=0x1359;eip=0x000c09; 	T(MOV(ax, di));	// 35841 mov     ax, di ;~ 1359:0C09
cs=0x1359;eip=0x000c0b; 	X(MOV(byte_40d6a, al));	// 35842 mov     byte_40D6A, al ;~ 1359:0C0B
cs=0x1359;eip=0x000c0e; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 1));	// 35843 test    byte ptr mouse_butstate, 1 ;~ 1359:0C0E
cs=0x1359;eip=0x000c13; 	R(JZ(loc_2278a));	// 35844 jz      short loc_2278A ;~ 1359:0C13
cs=0x1359;eip=0x000c15; 	T(MOV(si, 2));	// 35845 mov     si, 2 ;~ 1359:0C15
cs=0x1359;eip=0x000c18; 	R(JMP(loc_227d2));	// 35846 jmp     short loc_227D2 ;~ 1359:0C18
loc_2278a:
	// 6874 
cs=0x1359;eip=0x000c1a; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 2));	// 35850 test    byte ptr mouse_butstate, 2 ;~ 1359:0C1A
cs=0x1359;eip=0x000c1f; 	R(JZ(loc_22796));	// 35851 jz      short loc_22796 ;~ 1359:0C1F
cs=0x1359;eip=0x000c21; 	T(MOV(si, 1));	// 35852 mov     si, 1 ;~ 1359:0C21
cs=0x1359;eip=0x000c24; 	R(JMP(loc_227d2));	// 35853 jmp     short loc_227D2 ;~ 1359:0C24
loc_22796:
	// 6875 
cs=0x1359;eip=0x000c26; 	T(SUB(si, si));	// 35857 sub     si, si ;~ 1359:0C26
cs=0x1359;eip=0x000c28; 	R(JMP(loc_227d2));	// 35858 jmp     short loc_227D2 ;~ 1359:0C28
loc_2279a:
	// 6876 
cs=0x1359;eip=0x000c2a; 	R(CALLF(sub_307e3,0));	// 35862 call    sub_307E3 ;~ 1359:0C2A
cs=0x1359;eip=0x000c2f; 	X(MOV(byte_40d6a, al));	// 35863 mov     byte_40D6A, al ;~ 1359:0C2F
cs=0x1359;eip=0x000c32; 	T(OR(al, al));	// 35864 or      al, al ;~ 1359:0C32
cs=0x1359;eip=0x000c34; 	R(JLE(loc_227b0));	// 35865 jle     short loc_227B0 ;~ 1359:0C34
cs=0x1359;eip=0x000c36; 	T(CBW);	// 35866 cbw ;~ 1359:0C36
cs=0x1359;eip=0x000c37; 	T(MOV(bx, ax));	// 35867 mov     bx, ax ;~ 1359:0C37
cs=0x1359;eip=0x000c39; 	T(MOV(al, *((&byte_3e85c)+bx)));	// 35868 mov     al, byte_3E85C[bx] ;~ 1359:0C39
cs=0x1359;eip=0x000c3d; 	R(JMP(loc_227c5));	// 35869 jmp     short loc_227C5 ;~ 1359:0C3D
loc_227b0:
	// 6877 
cs=0x1359;eip=0x000c40; 	T(CMP(byte_40d6a, 0));	// 35874 cmp     byte_40D6A, 0 ;~ 1359:0C40
cs=0x1359;eip=0x000c45; 	R(JGE(loc_227c8));	// 35875 jge     short loc_227C8 ;~ 1359:0C45
cs=0x1359;eip=0x000c47; 	T(MOV(al, byte_40d6a));	// 35876 mov     al, byte_40D6A ;~ 1359:0C47
cs=0x1359;eip=0x000c4a; 	T(CBW);	// 35877 cbw ;~ 1359:0C4A
cs=0x1359;eip=0x000c4b; 	T(MOV(bx, ax));	// 35878 mov     bx, ax ;~ 1359:0C4B
cs=0x1359;eip=0x000c4d; 	T(NEG(bx));	// 35879 neg     bx ;~ 1359:0C4D
cs=0x1359;eip=0x000c4f; 	T(MOV(al, *((&byte_3e85c)+bx)));	// 35880 mov     al, byte_3E85C[bx] ;~ 1359:0C4F
cs=0x1359;eip=0x000c53; 	T(NEG(al));	// 35881 neg     al ;~ 1359:0C53
loc_227c5:
	// 6878 
cs=0x1359;eip=0x000c55; 	X(MOV(byte_40d6a, al));	// 35884 mov     byte_40D6A, al ;~ 1359:0C55
loc_227c8:
	// 6879 
cs=0x1359;eip=0x000c58; 	R(CALLF(get_kb_or_joy_flags,0));	// 35887 call    get_kb_or_joy_flags ;~ 1359:0C58
cs=0x1359;eip=0x000c5d; 	T(MOV(si, ax));	// 35888 mov     si, ax ;~ 1359:0C5D
cs=0x1359;eip=0x000c5f; 	T(AND(si, 0x33));	// 35889 and     si, 33h ;~ 1359:0C5F
loc_227d2:
	// 6880 
cs=0x1359;eip=0x000c62; 	T(MOV(di, elapsed_time2));	// 35893 mov     di, elapsed_time2 ;~ 1359:0C62
cs=0x1359;eip=0x000c66; 	T(AND(di, 0x3F));	// 35894 and     di, 3Fh ;~ 1359:0C66
cs=0x1359;eip=0x000c69; 	T(MOV(al, byte_40d6a));	// 35895 mov     al, byte_40D6A ;~ 1359:0C69
cs=0x1359;eip=0x000c6c; 	X(MOV(*((&byte_44292)+di), al));	// 35896 mov     byte_44292[di], al ;~ 1359:0C6C
cs=0x1359;eip=0x000c70; 	X(MOV(*((&byte_442ea)+di), 1));	// 35897 mov     byte_442EA[di], 1 ;~ 1359:0C70
cs=0x1359;eip=0x000c75; 	R(JMP(loc_227ef));	// 35898 jmp     short loc_227EF ;~ 1359:0C75
loc_227e8:
	// 6881 
cs=0x1359;eip=0x000c78; 	R(CALLF(get_kb_or_joy_flags,0));	// 35903 call    get_kb_or_joy_flags ;~ 1359:0C78
cs=0x1359;eip=0x000c7d; 	T(MOV(si, ax));	// 35904 mov     si, ax ;~ 1359:0C7D
loc_227ef:
	// 6882 
cs=0x1359;eip=0x000c7f; 	T(MOV(ax, 0x1E));	// 35907 mov     ax, 1Eh ;~ 1359:0C7F
cs=0x1359;eip=0x000c82; 	X(PUSH(ax));	// 35908 push    ax ;~ 1359:0C82
cs=0x1359;eip=0x000c83; 	R(CALLF(kb_get_key_state,0));	// 35909 call    kb_get_key_state ;~ 1359:0C83
cs=0x1359;eip=0x000c88; 	T(ADD(sp, 2));	// 35910 add     sp, 2 ;~ 1359:0C88
cs=0x1359;eip=0x000c8b; 	T(OR(ax, ax));	// 35911 or      ax, ax ;~ 1359:0C8B
cs=0x1359;eip=0x000c8d; 	R(JZ(loc_22803));	// 35912 jz      short loc_22803 ;~ 1359:0C8D
cs=0x1359;eip=0x000c8f; 	T(OR(si, 0x10));	// 35913 or      si, 10h ;~ 1359:0C8F
loc_22803:
	// 6883 
cs=0x1359;eip=0x000c93; 	T(MOV(ax, 0x2C));	// 35916 mov     ax, 2Ch ; ',' ;~ 1359:0C93
cs=0x1359;eip=0x000c96; 	X(PUSH(ax));	// 35917 push    ax ;~ 1359:0C96
cs=0x1359;eip=0x000c97; 	R(CALLF(kb_get_key_state,0));	// 35918 call    kb_get_key_state ;~ 1359:0C97
cs=0x1359;eip=0x000c9c; 	T(ADD(sp, 2));	// 35919 add     sp, 2 ;~ 1359:0C9C
cs=0x1359;eip=0x000c9f; 	T(OR(ax, ax));	// 35920 or      ax, ax ;~ 1359:0C9F
cs=0x1359;eip=0x000ca1; 	R(JZ(loc_22817));	// 35921 jz      short loc_22817 ;~ 1359:0CA1
cs=0x1359;eip=0x000ca3; 	T(OR(si, 0x20));	// 35922 or      si, 20h ;~ 1359:0CA3
loc_22817:
	// 6884 
cs=0x1359;eip=0x000ca7; 	T(MOV(ax, 0x5DC));	// 35926 mov     ax, 5DCh ;~ 1359:0CA7
cs=0x1359;eip=0x000caa; 	X(IMUL1_2(framespersec));	// 35927 imul    framespersec ;~ 1359:0CAA
cs=0x1359;eip=0x000cae; 	T(MOV(cx, elapsed_time2));	// 35928 mov     cx, elapsed_time2 ;~ 1359:0CAE
cs=0x1359;eip=0x000cb2; 	T(ADD(cx, elapsed_time1));	// 35929 add     cx, elapsed_time1 ;~ 1359:0CB2
cs=0x1359;eip=0x000cb6; 	T(CMP(ax, cx));	// 35930 cmp     ax, cx ;~ 1359:0CB6
cs=0x1359;eip=0x000cb8; 	R(JA(loc_2283c));	// 35931 ja      short loc_2283C ;~ 1359:0CB8
cs=0x1359;eip=0x000cba; 	T(SUB(ax, ax));	// 35932 sub     ax, ax ;~ 1359:0CBA
cs=0x1359;eip=0x000cbc; 	X(PUSH(ax));	// 35933 push    ax ;~ 1359:0CBC
cs=0x1359;eip=0x000cbd; 	T(MOV(ax, 4));	// 35934 mov     ax, 4 ;~ 1359:0CBD
cs=0x1359;eip=0x000cc0; 	X(PUSH(ax));	// 35935 push    ax ;~ 1359:0CC0
cs=0x1359;eip=0x000cc1; 	R(CALLF(update_crash_state,0));	// 35936 call    update_crash_state ;~ 1359:0CC1
cs=0x1359;eip=0x000cc6; 	T(ADD(sp, 4));	// 35937 add     sp, 4 ;~ 1359:0CC6
cs=0x1359;eip=0x000cc9; 	R(JMP(loc_226da));	// 35938 jmp     loc_226DA ;~ 1359:0CC9
loc_2283c:
	// 6885 
cs=0x1359;eip=0x000ccc; 	T(CMP(elapsed_time2, 0x2EE0));	// 35942 cmp     elapsed_time2, 2EE0h ;~ 1359:0CCC
cs=0x1359;eip=0x000cd2; 	R(JZ(loc_22847));	// 35943 jz      short loc_22847 ;~ 1359:0CD2
cs=0x1359;eip=0x000cd4; 	R(JMP(loc_2296c));	// 35944 jmp     loc_2296C ;~ 1359:0CD4
loc_22847:
	// 6886 
cs=0x1359;eip=0x000cd7; 	T(CMP(elapsed_time1, 0));	// 35948 cmp     elapsed_time1, 0 ;~ 1359:0CD7
cs=0x1359;eip=0x000cdc; 	R(JNZ(loc_22866));	// 35949 jnz     short loc_22866 ;~ 1359:0CDC
cs=0x1359;eip=0x000cde; 	T(CMP(*(db*)(((db*)&word_45d3e)), 0));	// 35950 cmp     byte ptr word_45D3E, 0 ;~ 1359:0CDE
cs=0x1359;eip=0x000ce3; 	R(JNZ(loc_22866));	// 35951 jnz     short loc_22866 ;~ 1359:0CE3
cs=0x1359;eip=0x000ce5; 	X(MOV(*(db*)(((db*)&word_45d3e)), 1));	// 35952 mov     byte ptr word_45D3E, 1 ;~ 1359:0CE5
cs=0x1359;eip=0x000cea; 	X(MOV(byte_46467, 1));	// 35953 mov     byte_46467, 1 ;~ 1359:0CEA
cs=0x1359;eip=0x000cef; 	X(POP(si));	// 35954 pop     si ;~ 1359:0CEF
cs=0x1359;eip=0x000cf0; 	X(POP(di));	// 35955 pop     di ;~ 1359:0CF0
cs=0x1359;eip=0x000cf1; 	T(MOV(sp, bp));	// 35956 mov     sp, bp ;~ 1359:0CF1
cs=0x1359;eip=0x000cf3; 	X(POP(bp));	// 35957 pop     bp ;~ 1359:0CF3
cs=0x1359;eip=0x000cf4; 	R(RETF(0));	// 35958 retf ;~ 1359:0CF4
loc_22866:
	// 6887 
cs=0x1359;eip=0x000cf6; 	T(SUB(di, di));	// 35964 sub     di, di ;~ 1359:0CF6
cs=0x1359;eip=0x000cf8; 	R(JMP(loc_22909));	// 35965 jmp     loc_22909 ;~ 1359:0CF8
loc_2286c:
	// 6888 
cs=0x1359;eip=0x000cfc; 	T(MOV(ax, 0x460));	// 35970 mov     ax, 460h ;~ 1359:0CFC
cs=0x1359;eip=0x000cff; 	T(CWD);	// 35971 cwd ;~ 1359:0CFF
cs=0x1359;eip=0x000d00; 	X(PUSH(dx));	// 35972 push    dx ;~ 1359:0D00
cs=0x1359;eip=0x000d01; 	X(PUSH(ax));	// 35973 push    ax ;~ 1359:0D01
cs=0x1359;eip=0x000d02; 	T(MOV(ax, di));	// 35974 mov     ax, di ;~ 1359:0D02
cs=0x1359;eip=0x000d04; 	T(CWD);	// 35975 cwd ;~ 1359:0D04
cs=0x1359;eip=0x000d05; 	X(PUSH(dx));	// 35976 push    dx ;~ 1359:0D05
cs=0x1359;eip=0x000d06; 	X(PUSH(ax));	// 35977 push    ax ;~ 1359:0D06
cs=0x1359;eip=0x000d07; 	R(CALLF(__aflmul,0));	// 35978 call    __aFlmul ;~ 1359:0D07
cs=0x1359;eip=0x000d0c; 	T(ADD(ax, 0x5A0));	// 35979 add     ax, 5A0h ;~ 1359:0D0C
cs=0x1359;eip=0x000d0f; 	T(ADC(dx, 0));	// 35980 adc     dx, 0 ;~ 1359:0D0F
cs=0x1359;eip=0x000d12; 	T(ADD(ax, cvxptr));	// 35981 add     ax, cvxptr ;~ 1359:0D12
cs=0x1359;eip=0x000d16; 	T(ADC(dx, 0));	// 35982 adc     dx, 0 ;~ 1359:0D16
cs=0x1359;eip=0x000d19; 	T(MOV(cx, 0x0C));	// 35983 mov     cx, 0Ch ;~ 1359:0D19
cs=0x1359;eip=0x000d1c; 	T(SHL(dx, cl));	// 35984 shl     dx, cl ;~ 1359:0D1C
cs=0x1359;eip=0x000d1e; 	T(ADD(dx, word_45a22));	// 35985 add     dx, word_45A22 ;~ 1359:0D1E
cs=0x1359;eip=0x000d22; 	T(MOV(es, dx));	// 35986 mov     es, dx ;~ 1359:0D22
cs=0x1359;eip=0x000d24; 	T(MOV(bx, ax));	// 35987 mov     bx, ax ;~ 1359:0D24
cs=0x1359;eip=0x000d26; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 35988 mov     ax, [bp+var_6] ;~ 1359:0D26
cs=0x1359;eip=0x000d29; 	X(SUB(*(dw*)(raddr(es,bx)), ax));	// 35989 sub     es:[bx], ax ;~ 1359:0D29
cs=0x1359;eip=0x000d2c; 	T(MOV(ax, 0x460));	// 35990 mov     ax, 460h ;~ 1359:0D2C
cs=0x1359;eip=0x000d2f; 	T(CWD);	// 35991 cwd ;~ 1359:0D2F
cs=0x1359;eip=0x000d30; 	X(PUSH(dx));	// 35992 push    dx ;~ 1359:0D30
cs=0x1359;eip=0x000d31; 	X(PUSH(ax));	// 35993 push    ax ;~ 1359:0D31
cs=0x1359;eip=0x000d32; 	T(MOV(ax, di));	// 35994 mov     ax, di ;~ 1359:0D32
cs=0x1359;eip=0x000d34; 	T(CWD);	// 35995 cwd ;~ 1359:0D34
cs=0x1359;eip=0x000d35; 	X(PUSH(dx));	// 35996 push    dx ;~ 1359:0D35
cs=0x1359;eip=0x000d36; 	X(PUSH(ax));	// 35997 push    ax ;~ 1359:0D36
cs=0x1359;eip=0x000d37; 	R(CALLF(__aflmul,0));	// 35998 call    __aFlmul ;~ 1359:0D37
cs=0x1359;eip=0x000d3c; 	T(ADD(ax, 0x460));	// 35999 add     ax, 460h ;~ 1359:0D3C
cs=0x1359;eip=0x000d3f; 	T(ADC(dx, 0));	// 36000 adc     dx, 0 ;~ 1359:0D3F
cs=0x1359;eip=0x000d42; 	T(ADD(ax, cvxptr));	// 36001 add     ax, cvxptr ;~ 1359:0D42
cs=0x1359;eip=0x000d46; 	T(ADC(dx, 0));	// 36002 adc     dx, 0 ;~ 1359:0D46
cs=0x1359;eip=0x000d49; 	T(MOV(cx, 0x0C));	// 36003 mov     cx, 0Ch ;~ 1359:0D49
cs=0x1359;eip=0x000d4c; 	T(SHL(dx, cl));	// 36004 shl     dx, cl ;~ 1359:0D4C
cs=0x1359;eip=0x000d4e; 	T(ADD(dx, word_45a22));	// 36005 add     dx, word_45A22 ;~ 1359:0D4E
cs=0x1359;eip=0x000d52; 	T(MOV(cx, 0x460));	// 36006 mov     cx, 460h ;~ 1359:0D52
cs=0x1359;eip=0x000d55; 	T(SUB(bx, bx));	// 36007 sub     bx, bx ;~ 1359:0D55
cs=0x1359;eip=0x000d57; 	X(PUSH(bx));	// 36008 push    bx ;~ 1359:0D57
cs=0x1359;eip=0x000d58; 	X(PUSH(cx));	// 36009 push    cx ;~ 1359:0D58
cs=0x1359;eip=0x000d59; 	T(MOV(cx, ax));	// 36010 mov     cx, ax ;~ 1359:0D59
cs=0x1359;eip=0x000d5b; 	T(MOV(ax, di));	// 36011 mov     ax, di ;~ 1359:0D5B
cs=0x1359;eip=0x000d5d; 	T(MOV(bx, dx));	// 36012 mov     bx, dx ;~ 1359:0D5D
cs=0x1359;eip=0x000d5f; 	T(CWD);	// 36013 cwd ;~ 1359:0D5F
cs=0x1359;eip=0x000d60; 	X(PUSH(dx));	// 36014 push    dx ;~ 1359:0D60
cs=0x1359;eip=0x000d61; 	X(PUSH(ax));	// 36015 push    ax ;~ 1359:0D61
cs=0x1359;eip=0x000d62; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), cx));	// 36016 mov     [bp+var_A], cx ;~ 1359:0D62
cs=0x1359;eip=0x000d65; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), bx));	// 36017 mov     [bp+var_8], bx ;~ 1359:0D65
cs=0x1359;eip=0x000d68; 	R(CALLF(__aflmul,0));	// 36018 call    __aFlmul ;~ 1359:0D68
cs=0x1359;eip=0x000d6d; 	T(ADD(ax, cvxptr));	// 36019 add     ax, cvxptr ;~ 1359:0D6D
cs=0x1359;eip=0x000d71; 	T(ADC(dx, 0));	// 36020 adc     dx, 0 ;~ 1359:0D71
cs=0x1359;eip=0x000d74; 	T(MOV(cx, 0x0C));	// 36021 mov     cx, 0Ch ;~ 1359:0D74
cs=0x1359;eip=0x000d77; 	T(SHL(dx, cl));	// 36022 shl     dx, cl ;~ 1359:0D77
cs=0x1359;eip=0x000d79; 	T(ADD(dx, word_45a22));	// 36023 add     dx, word_45A22 ;~ 1359:0D79
cs=0x1359;eip=0x000d7d; 	T(MOV(bx, ax));	// 36024 mov     bx, ax ;~ 1359:0D7D
cs=0x1359;eip=0x000d7f; 	T(MOV(es, dx));	// 36025 mov     es, dx ;~ 1359:0D7F
cs=0x1359;eip=0x000d81; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 36026 mov     ax, [bp+var_A] ;~ 1359:0D81
cs=0x1359;eip=0x000d84; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 36027 mov     dx, [bp+var_8] ;~ 1359:0D84
cs=0x1359;eip=0x000d87; 	X(PUSH(si));	// 36028 push    si ;~ 1359:0D87
cs=0x1359;eip=0x000d88; 	X(PUSH(di));	// 36029 push    di ;~ 1359:0D88
cs=0x1359;eip=0x000d89; 	T(MOV(di, bx));	// 36030 mov     di, bx ;~ 1359:0D89
cs=0x1359;eip=0x000d8b; 	T(MOV(si, ax));	// 36031 mov     si, ax ;~ 1359:0D8B
cs=0x1359;eip=0x000d8d; 	X(PUSH(ds));	// 36032 push    ds ;~ 1359:0D8D
cs=0x1359;eip=0x000d8e; 	T(MOV(ds, dx));	// 36033 mov     ds, dx ;~ 1359:0D8E
cs=0x1359;eip=0x000d90; 	T(MOV(cx, 0x230));	// 36034 mov     cx, 230h ;~ 1359:0D90
	// 36035 repne movsw ;~ 1359:0D93
cs=0x1359;eip=0x000d93; 	X(	REPNE MOVSW);	// 36035 repne movsw ;~ 1359:0D93
cs=0x1359;eip=0x000d95; 	X(POP(ds));	// 36036 pop     ds ;~ 1359:0D95
cs=0x1359;eip=0x000d96; 	X(POP(di));	// 36037 pop     di ;~ 1359:0D96
cs=0x1359;eip=0x000d97; 	X(POP(si));	// 36038 pop     si ;~ 1359:0D97
cs=0x1359;eip=0x000d98; 	T(INC(di));	// 36039 inc     di ;~ 1359:0D98
loc_22909:
	// 6889 
cs=0x1359;eip=0x000d99; 	T(MOV(ax, 0x1E));	// 36042 mov     ax, 1Eh ;~ 1359:0D99
cs=0x1359;eip=0x000d9c; 	X(IMUL1_2(framespersec));	// 36043 imul    framespersec ;~ 1359:0D9C
cs=0x1359;eip=0x000da0; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 36044 mov     [bp+var_6], ax ;~ 1359:0DA0
cs=0x1359;eip=0x000da3; 	T(MOV(ax, 0x2EE0));	// 36045 mov     ax, 2EE0h ;~ 1359:0DA3
cs=0x1359;eip=0x000da6; 	T(CWD);	// 36046 cwd ;~ 1359:0DA6
cs=0x1359;eip=0x000da7; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_6))));	// 36047 mov     cx, [bp+var_6] ;~ 1359:0DA7
cs=0x1359;eip=0x000daa; 	T(IDIV2(cx));	// 36048 idiv    cx ;~ 1359:0DAA
cs=0x1359;eip=0x000dac; 	T(DEC(ax));	// 36049 dec     ax ;~ 1359:0DAC
cs=0x1359;eip=0x000dad; 	T(CMP(ax, di));	// 36050 cmp     ax, di ;~ 1359:0DAD
cs=0x1359;eip=0x000daf; 	R(JLE(loc_22924));	// 36051 jle     short loc_22924 ;~ 1359:0DAF
cs=0x1359;eip=0x000db1; 	R(JMP(loc_2286c));	// 36052 jmp     loc_2286C ;~ 1359:0DB1
loc_22924:
	// 6890 
cs=0x1359;eip=0x000db4; 	T(SUB(di, di));	// 36056 sub     di, di ;~ 1359:0DB4
cs=0x1359;eip=0x000db6; 	R(JMP(loc_2293e));	// 36057 jmp     short loc_2293E ;~ 1359:0DB6
loc_22928:
	// 6891 
cs=0x1359;eip=0x000db8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 36061 mov     bx, [bp+var_A] ;~ 1359:0DB8
cs=0x1359;eip=0x000dbb; 	T(ADD(bx, *(dw*)(((db*)&td16_rpl_buffer))));	// 36062 add     bx, word ptr td16_rpl_buffer ;~ 1359:0DBB
cs=0x1359;eip=0x000dbf; 	T(MOV(es, *(dw*)(((db*)&td16_rpl_buffer)+2)));	// 36063 mov     es, word ptr td16_rpl_buffer+2 ;~ 1359:0DBF
cs=0x1359;eip=0x000dc3; 	T(MOV(al, *(raddr(es,bx+di))));	// 36064 mov     al, es:[bx+di] ;~ 1359:0DC3
cs=0x1359;eip=0x000dc6; 	T(MOV(bx, *(dw*)(((db*)&td16_rpl_buffer))));	// 36065 mov     bx, word ptr td16_rpl_buffer ;~ 1359:0DC6
cs=0x1359;eip=0x000dca; 	X(MOV(*(raddr(es,bx+di)), al));	// 36066 mov     es:[bx+di], al ;~ 1359:0DCA
cs=0x1359;eip=0x000dcd; 	T(INC(di));	// 36067 inc     di ;~ 1359:0DCD
loc_2293e:
	// 6892 
cs=0x1359;eip=0x000dce; 	T(MOV(ax, 0x1E));	// 36070 mov     ax, 1Eh ;~ 1359:0DCE
cs=0x1359;eip=0x000dd1; 	X(IMUL1_2(framespersec));	// 36071 imul    framespersec ;~ 1359:0DD1
cs=0x1359;eip=0x000dd5; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 36072 mov     [bp+var_A], ax ;~ 1359:0DD5
cs=0x1359;eip=0x000dd8; 	T(MOV(ax, 0x2EE0));	// 36073 mov     ax, 2EE0h ;~ 1359:0DD8
cs=0x1359;eip=0x000ddb; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_a))));	// 36074 sub     ax, [bp+var_A] ;~ 1359:0DDB
cs=0x1359;eip=0x000dde; 	T(CMP(ax, di));	// 36075 cmp     ax, di ;~ 1359:0DDE
cs=0x1359;eip=0x000de0; 	R(JG(loc_22928));	// 36076 jg      short loc_22928 ;~ 1359:0DE0
cs=0x1359;eip=0x000de2; 	T(MOV(ax, 0x1E));	// 36077 mov     ax, 1Eh ;~ 1359:0DE2
cs=0x1359;eip=0x000de5; 	X(IMUL1_2(framespersec));	// 36078 imul    framespersec ;~ 1359:0DE5
cs=0x1359;eip=0x000de9; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 36079 mov     [bp+var_A], ax ;~ 1359:0DE9
cs=0x1359;eip=0x000dec; 	X(SUB(elapsed_time2, ax));	// 36080 sub     elapsed_time2, ax ;~ 1359:0DEC
cs=0x1359;eip=0x000df0; 	X(SUB(word_449bc, ax));	// 36081 sub     word_449BC, ax ;~ 1359:0DF0
cs=0x1359;eip=0x000df4; 	X(ADD(elapsed_time1, ax));	// 36082 add     elapsed_time1, ax ;~ 1359:0DF4
cs=0x1359;eip=0x000df8; 	X(SUB(word_445d4, ax));	// 36083 sub     word_445D4, ax ;~ 1359:0DF8
loc_2296c:
	// 6893 
cs=0x1359;eip=0x000dfc; 	T(MOV(bx, elapsed_time2));	// 36086 mov     bx, elapsed_time2 ;~ 1359:0DFC
cs=0x1359;eip=0x000e00; 	X(INC(elapsed_time2));	// 36087 inc     elapsed_time2 ;~ 1359:0E00
cs=0x1359;eip=0x000e04; 	T(ADD(bx, *(dw*)(((db*)&td16_rpl_buffer))));	// 36088 add     bx, word ptr td16_rpl_buffer ;~ 1359:0E04
cs=0x1359;eip=0x000e08; 	T(MOV(es, *(dw*)(((db*)&td16_rpl_buffer)+2)));	// 36089 mov     es, word ptr td16_rpl_buffer+2 ;~ 1359:0E08
cs=0x1359;eip=0x000e0c; 	T(MOV(ax, si));	// 36090 mov     ax, si ;~ 1359:0E0C
cs=0x1359;eip=0x000e0e; 	X(MOV(*(raddr(es,bx)), al));	// 36091 mov     es:[bx], al ;~ 1359:0E0E
cs=0x1359;eip=0x000e11; 	X(INC(word_449bc));	// 36092 inc     word_449BC ;~ 1359:0E11
loc_22985:
	// 6894 
cs=0x1359;eip=0x000e15; 	X(POP(si));	// 36095 pop     si ;~ 1359:0E15
cs=0x1359;eip=0x000e16; 	X(POP(di));	// 36096 pop     di ;~ 1359:0E16
cs=0x1359;eip=0x000e17; 	T(MOV(sp, bp));	// 36097 mov     sp, bp ;~ 1359:0E17
cs=0x1359;eip=0x000e19; 	X(POP(bp));	// 36098 pop     bp ;~ 1359:0E19
cs=0x1359;eip=0x000e1a; 	R(RETF(0));	// 36099 retf ;~ 1359:0E1A
sub_2298c:
	// 36109 
#undef var_34
#define var_34 -0x34
	// 36111 var_34          = dword ptr -34h ;~ 1359:0E1C
#undef var_30
#define var_30 -0x30
	// 36112 var_30          = word ptr -30h ;~ 1359:0E1C
#undef var_2e
#define var_2e -0x2E
	// 36113 var_2E          = word ptr -2Eh ;~ 1359:0E1C
#undef var_2c
#define var_2c -0x2C
	// 36114 var_2C          = word ptr -2Ch ;~ 1359:0E1C
#undef var_2a
#define var_2a -0x2A
	// 36115 var_2A          = word ptr -2Ah ;~ 1359:0E1C
#undef var_28
#define var_28 -0x28
	// 36116 var_28          = word ptr -28h ;~ 1359:0E1C
#undef var_26
#define var_26 -0x26
	// 36117 var_26          = word ptr -26h ;~ 1359:0E1C
#undef var_24
#define var_24 -0x24
	// 36118 var_24          = word ptr -24h ;~ 1359:0E1C
#undef var_22
#define var_22 -0x22
	// 36119 var_22          = word ptr -22h ;~ 1359:0E1C
#undef var_20
#define var_20 -0x20
	// 36120 var_20          = word ptr -20h ;~ 1359:0E1C
#undef var_1e
#define var_1e -0x1E
	// 36121 var_1E          = word ptr -1Eh ;~ 1359:0E1C
#undef var_1c
#define var_1c -0x1C
	// 36122 var_1C          = word ptr -1Ch ;~ 1359:0E1C
#undef var_1a
#define var_1a -0x1A
	// 36123 var_1A          = word ptr -1Ah ;~ 1359:0E1C
#undef var_18
#define var_18 -0x18
	// 36124 var_18          = word ptr -18h ;~ 1359:0E1C
#undef var_14
#define var_14 -0x14
	// 36125 var_14          = word ptr -14h ;~ 1359:0E1C
#undef var_10
#define var_10 -0x10
	// 36126 var_10          = word ptr -10h ;~ 1359:0E1C
#undef var_e
#define var_e -0x0E
	// 36127 var_E           = word ptr -0Eh ;~ 1359:0E1C
#undef var_c
#define var_c -0x0C
	// 36128 var_C           = word ptr -0Ch ;~ 1359:0E1C
#undef var_a
#define var_a -0x0A
	// 36129 var_A           = byte ptr -0Ah ;~ 1359:0E1C
#undef var_8
#define var_8 -8
	// 36130 var_8           = word ptr -8 ;~ 1359:0E1C
#undef var_6
#define var_6 -6
	// 36131 var_6           = word ptr -6 ;~ 1359:0E1C
#undef var_2
#define var_2 -2
	// 36132 var_2           = word ptr -2 ;~ 1359:0E1C
ret_1359_e1c:
	// 6895 
cs=0x1359;eip=0x000e1c; 	X(PUSH(bp));	// 36134 push    bp ;~ 1359:0E1C
cs=0x1359;eip=0x000e1d; 	T(MOV(bp, sp));	// 36135 mov     bp, sp ;~ 1359:0E1D
cs=0x1359;eip=0x000e1f; 	T(SUB(sp, 0x34));	// 36136 sub     sp, 34h ;~ 1359:0E1F
cs=0x1359;eip=0x000e22; 	X(PUSH(di));	// 36137 push    di ;~ 1359:0E22
cs=0x1359;eip=0x000e23; 	X(PUSH(si));	// 36138 push    si ;~ 1359:0E23
cs=0x1359;eip=0x000e24; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), 1));	// 36139 mov     [bp+var_2A], 1 ;~ 1359:0E24
cs=0x1359;eip=0x000e29; 	T(CMP(byte_449aa, 0));	// 36140 cmp     byte_449AA, 0 ;~ 1359:0E29
cs=0x1359;eip=0x000e2e; 	R(JZ(loc_229a5));	// 36141 jz      short loc_229A5 ;~ 1359:0E2E
cs=0x1359;eip=0x000e30; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), 2));	// 36142 mov     [bp+var_2A], 2 ;~ 1359:0E30
loc_229a5:
	// 6896 
cs=0x1359;eip=0x000e35; 	T(SUB(si, si));	// 36145 sub     si, si ;~ 1359:0E35
cs=0x1359;eip=0x000e37; 	R(JMP(loc_22c53));	// 36146 jmp     loc_22C53 ;~ 1359:0E37
loc_229aa:
	// 6897 
cs=0x1359;eip=0x000e3a; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), offset(dseg,word_446b6)));	// 36150 mov     [bp+var_24], offset word_446B6 ;~ 1359:0E3A
loc_229af:
	// 6898 
cs=0x1359;eip=0x000e3f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_24))));	// 36153 mov     bx, [bp+var_24] ;~ 1359:0E3F
cs=0x1359;eip=0x000e42; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 36154 mov     ax, [bx+4] ;~ 1359:0E42
cs=0x1359;eip=0x000e45; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 36155 mov     dx, [bx+6] ;~ 1359:0E45
cs=0x1359;eip=0x000e48; 	T(MOV(cl, 6));	// 36156 mov     cl, 6 ;~ 1359:0E48
loc_229ba:
	// 6899 
cs=0x1359;eip=0x000e4a; 	T(SAR(dx, 1));	// 36159 sar     dx, 1 ;~ 1359:0E4A
cs=0x1359;eip=0x000e4c; 	T(RCR(ax, 1));	// 36160 rcr     ax, 1 ;~ 1359:0E4C
cs=0x1359;eip=0x000e4e; 	T(DEC(cl));	// 36161 dec     cl ;~ 1359:0E4E
cs=0x1359;eip=0x000e50; 	R(JNZ(loc_229ba));	// 36162 jnz     short loc_229BA ;~ 1359:0E50
cs=0x1359;eip=0x000e52; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 36163 mov     [bp+var_1A], ax ;~ 1359:0E52
cs=0x1359;eip=0x000e55; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_24))));	// 36164 mov     bx, [bp+var_24] ;~ 1359:0E55
cs=0x1359;eip=0x000e58; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 36165 mov     ax, [bx+0] ;~ 1359:0E58
cs=0x1359;eip=0x000e5a; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 36166 mov     dx, [bx+2] ;~ 1359:0E5A
cs=0x1359;eip=0x000e5d; 	T(MOV(cl, 6));	// 36167 mov     cl, 6 ;~ 1359:0E5D
loc_229cf:
	// 6900 
cs=0x1359;eip=0x000e5f; 	T(SAR(dx, 1));	// 36170 sar     dx, 1 ;~ 1359:0E5F
cs=0x1359;eip=0x000e61; 	T(RCR(ax, 1));	// 36171 rcr     ax, 1 ;~ 1359:0E61
cs=0x1359;eip=0x000e63; 	T(DEC(cl));	// 36172 dec     cl ;~ 1359:0E63
cs=0x1359;eip=0x000e65; 	R(JNZ(loc_229cf));	// 36173 jnz     short loc_229CF ;~ 1359:0E65
cs=0x1359;eip=0x000e67; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 36174 mov     [bp+var_1C], ax ;~ 1359:0E67
cs=0x1359;eip=0x000e6a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_24))));	// 36175 mov     bx, [bp+var_24] ;~ 1359:0E6A
cs=0x1359;eip=0x000e6d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 36176 mov     ax, [bx+8] ;~ 1359:0E6D
cs=0x1359;eip=0x000e70; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 36177 mov     dx, [bx+0Ah] ;~ 1359:0E70
cs=0x1359;eip=0x000e73; 	T(MOV(cl, 6));	// 36178 mov     cl, 6 ;~ 1359:0E73
loc_229e5:
	// 6901 
cs=0x1359;eip=0x000e75; 	T(SAR(dx, 1));	// 36181 sar     dx, 1 ;~ 1359:0E75
cs=0x1359;eip=0x000e77; 	T(RCR(ax, 1));	// 36182 rcr     ax, 1 ;~ 1359:0E77
cs=0x1359;eip=0x000e79; 	T(DEC(cl));	// 36183 dec     cl ;~ 1359:0E79
cs=0x1359;eip=0x000e7b; 	R(JNZ(loc_229e5));	// 36184 jnz     short loc_229E5 ;~ 1359:0E7B
cs=0x1359;eip=0x000e7d; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 36185 mov     [bp+var_18], ax ;~ 1359:0E7D
cs=0x1359;eip=0x000e80; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_24))));	// 36186 mov     bx, [bp+var_24] ;~ 1359:0E80
cs=0x1359;eip=0x000e83; 	X(PUSH(si));	// 36187 push    si ;~ 1359:0E83
cs=0x1359;eip=0x000e84; 	X(PUSH(di));	// 36188 push    di ;~ 1359:0E84
cs=0x1359;eip=0x000e85; 	T(di = bp+var_6);	// 36189 lea     di, [bp+var_6] ;~ 1359:0E85
cs=0x1359;eip=0x000e88; 	T(si = bx+0x0A4);	// 36190 lea     si, [bx+0A4h] ;~ 1359:0E88
cs=0x1359;eip=0x000e8c; 	X(PUSH(ss));	// 36191 push    ss ;~ 1359:0E8C
cs=0x1359;eip=0x000e8d; 	X(POP(es));	// 36192 pop     es ;~ 1359:0E8D
cs=0x1359;eip=0x000e8e; 	X(MOVSW);	// 36193 movsw ;~ 1359:0E8E
cs=0x1359;eip=0x000e8f; 	X(MOVSW);	// 36194 movsw ;~ 1359:0E8F
cs=0x1359;eip=0x000e90; 	X(MOVSW);	// 36195 movsw ;~ 1359:0E90
cs=0x1359;eip=0x000e91; 	X(POP(di));	// 36196 pop     di ;~ 1359:0E91
cs=0x1359;eip=0x000e92; 	X(POP(si));	// 36197 pop     si ;~ 1359:0E92
cs=0x1359;eip=0x000e93; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_24))));	// 36198 mov     bx, [bp+var_24] ;~ 1359:0E93
cs=0x1359;eip=0x000e96; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x48))));	// 36199 mov     ax, [bx+48h] ;~ 1359:0E96
cs=0x1359;eip=0x000e99; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 36200 mov     [bp+var_E], ax ;~ 1359:0E99
cs=0x1359;eip=0x000e9c; 	T(OR(si, si));	// 36201 or      si, si ;~ 1359:0E9C
cs=0x1359;eip=0x000e9e; 	R(JNZ(loc_22a1e));	// 36202 jnz     short loc_22A1E ;~ 1359:0E9E
cs=0x1359;eip=0x000ea0; 	T(CMP(byte_448ef, 0));	// 36203 cmp     byte_448EF, 0 ;~ 1359:0EA0
cs=0x1359;eip=0x000ea5; 	R(JNZ(loc_22a40));	// 36204 jnz     short loc_22A40 ;~ 1359:0EA5
cs=0x1359;eip=0x000ea7; 	T(CMP(byte_448f0, 0));	// 36205 cmp     byte_448F0, 0 ;~ 1359:0EA7
cs=0x1359;eip=0x000eac; 	R(JNZ(loc_22a40));	// 36206 jnz     short loc_22A40 ;~ 1359:0EAC
loc_22a1e:
	// 6902 
cs=0x1359;eip=0x000eae; 	T(CMP(*(dw*)(raddr(ds,bx+0x0B6)), 0));	// 36209 cmp     word ptr [bx+0B6h], 0 ;~ 1359:0EAE
cs=0x1359;eip=0x000eb3; 	R(JNZ(loc_22a40));	// 36210 jnz     short loc_22A40 ;~ 1359:0EB3
cs=0x1359;eip=0x000eb5; 	T(CMP(*(raddr(ds,bx+0x0C9)), 0));	// 36211 cmp     byte ptr [bx+0C9h], 0 ;~ 1359:0EB5
cs=0x1359;eip=0x000eba; 	R(JNZ(loc_22a40));	// 36212 jnz     short loc_22A40 ;~ 1359:0EBA
cs=0x1359;eip=0x000ebc; 	T(CMP(*(dw*)(raddr(ds,bx+0x4A)), 0x0FFFF));	// 36213 cmp     word ptr [bx+4Ah], 0FFFFh ;~ 1359:0EBC
cs=0x1359;eip=0x000ec0; 	R(JZ(loc_22a40));	// 36214 jz      short loc_22A40 ;~ 1359:0EC0
cs=0x1359;eip=0x000ec2; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0x80));	// 36215 cmp     [bp+var_E], 80h ; '€' ;~ 1359:0EC2
cs=0x1359;eip=0x000ec7; 	R(JLE(loc_22a4d));	// 36216 jle     short loc_22A4D ;~ 1359:0EC7
cs=0x1359;eip=0x000ec9; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0x380));	// 36217 cmp     [bp+var_E], 380h ;~ 1359:0EC9
cs=0x1359;eip=0x000ece; 	R(JGE(loc_22a4d));	// 36218 jge     short loc_22A4D ;~ 1359:0ECE
loc_22a40:
	// 6903 
cs=0x1359;eip=0x000ed0; 	X(PUSH(si));	// 36222 push    si ;~ 1359:0ED0
cs=0x1359;eip=0x000ed1; 	X(PUSH(di));	// 36223 push    di ;~ 1359:0ED1
cs=0x1359;eip=0x000ed2; 	T(di = bp+var_6);	// 36224 lea     di, [bp+var_6] ;~ 1359:0ED2
cs=0x1359;eip=0x000ed5; 	T(si = bp+var_1c);	// 36225 lea     si, [bp+var_1C] ;~ 1359:0ED5
cs=0x1359;eip=0x000ed8; 	X(MOVSW);	// 36226 movsw ;~ 1359:0ED8
cs=0x1359;eip=0x000ed9; 	X(MOVSW);	// 36227 movsw ;~ 1359:0ED9
cs=0x1359;eip=0x000eda; 	X(MOVSW);	// 36228 movsw ;~ 1359:0EDA
cs=0x1359;eip=0x000edb; 	X(POP(di));	// 36229 pop     di ;~ 1359:0EDB
cs=0x1359;eip=0x000edc; 	X(POP(si));	// 36230 pop     si ;~ 1359:0EDC
loc_22a4d:
	// 6904 
cs=0x1359;eip=0x000edd; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 0x1C2));	// 36234 mov     [bp+var_22], 1C2h ;~ 1359:0EDD
cs=0x1359;eip=0x000ee2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 36235 mov     ax, [bp+var_1A] ;~ 1359:0EE2
cs=0x1359;eip=0x000ee5; 	T(ADD(ax, 0x10E));	// 36236 add     ax, 10Eh ;~ 1359:0EE5
cs=0x1359;eip=0x000ee8; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 36237 mov     [bp+var_14], ax ;~ 1359:0EE8
cs=0x1359;eip=0x000eeb; 	T(MOV(bx, si));	// 36238 mov     bx, si ;~ 1359:0EEB
cs=0x1359;eip=0x000eed; 	T(MOV(ax, bx));	// 36239 mov     ax, bx ;~ 1359:0EED
cs=0x1359;eip=0x000eef; 	T(SHL(bx, 1));	// 36240 shl     bx, 1 ;~ 1359:0EEF
cs=0x1359;eip=0x000ef1; 	T(ADD(bx, ax));	// 36241 add     bx, ax ;~ 1359:0EF1
cs=0x1359;eip=0x000ef3; 	T(SHL(bx, 1));	// 36242 shl     bx, 1 ;~ 1359:0EF3
cs=0x1359;eip=0x000ef5; 	T(MOV(ax, *(dw*)(((db*)&word_445b6)+bx)));	// 36243 mov     ax, word_445B6[bx] ;~ 1359:0EF5
cs=0x1359;eip=0x000ef9; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_14))));	// 36244 sub     ax, [bp+var_14] ;~ 1359:0EF9
cs=0x1359;eip=0x000efc; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 36245 mov     [bp+var_C], ax ;~ 1359:0EFC
cs=0x1359;eip=0x000eff; 	T(OR(ax, ax));	// 36246 or      ax, ax ;~ 1359:0EFF
cs=0x1359;eip=0x000f01; 	R(JZ(loc_22a96));	// 36247 jz      short loc_22A96 ;~ 1359:0F01
cs=0x1359;eip=0x000f03; 	T(MOV(di, ax));	// 36248 mov     di, ax ;~ 1359:0F03
cs=0x1359;eip=0x000f05; 	T(CMP(di, 0x1E));	// 36249 cmp     di, 1Eh ;~ 1359:0F05
cs=0x1359;eip=0x000f08; 	R(JLE(loc_22a80));	// 36250 jle     short loc_22A80 ;~ 1359:0F08
cs=0x1359;eip=0x000f0a; 	T(MOV(di, 0x1E));	// 36251 mov     di, 1Eh ;~ 1359:0F0A
cs=0x1359;eip=0x000f0d; 	R(JMP(loc_22a88));	// 36252 jmp     short loc_22A88 ;~ 1359:0F0D
loc_22a80:
	// 6905 
cs=0x1359;eip=0x000f10; 	T(CMP(di, 0x0FFE2));	// 36257 cmp     di, 0FFE2h ;~ 1359:0F10
cs=0x1359;eip=0x000f13; 	R(JGE(loc_22a88));	// 36258 jge     short loc_22A88 ;~ 1359:0F13
cs=0x1359;eip=0x000f15; 	T(MOV(di, 0x0FFE2));	// 36259 mov     di, 0FFE2h ;~ 1359:0F15
loc_22a88:
	// 6906 
cs=0x1359;eip=0x000f18; 	T(MOV(bx, si));	// 36263 mov     bx, si ;~ 1359:0F18
cs=0x1359;eip=0x000f1a; 	T(MOV(ax, bx));	// 36264 mov     ax, bx ;~ 1359:0F1A
cs=0x1359;eip=0x000f1c; 	T(SHL(bx, 1));	// 36265 shl     bx, 1 ;~ 1359:0F1C
cs=0x1359;eip=0x000f1e; 	T(ADD(bx, ax));	// 36266 add     bx, ax ;~ 1359:0F1E
cs=0x1359;eip=0x000f20; 	T(SHL(bx, 1));	// 36267 shl     bx, 1 ;~ 1359:0F20
cs=0x1359;eip=0x000f22; 	X(SUB(*(dw*)(((db*)&word_445b6)+bx), di));	// 36268 sub     word_445B6[bx], di ;~ 1359:0F22
loc_22a96:
	// 6907 
cs=0x1359;eip=0x000f26; 	T(MOV(ax, si));	// 36271 mov     ax, si ;~ 1359:0F26
cs=0x1359;eip=0x000f28; 	T(MOV(cx, ax));	// 36272 mov     cx, ax ;~ 1359:0F28
cs=0x1359;eip=0x000f2a; 	T(SHL(ax, 1));	// 36273 shl     ax, 1 ;~ 1359:0F2A
cs=0x1359;eip=0x000f2c; 	T(ADD(ax, cx));	// 36274 add     ax, cx ;~ 1359:0F2C
cs=0x1359;eip=0x000f2e; 	T(SHL(ax, 1));	// 36275 shl     ax, 1 ;~ 1359:0F2E
cs=0x1359;eip=0x000f30; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 36276 mov     [bp+var_2E], ax ;~ 1359:0F30
cs=0x1359;eip=0x000f33; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 36277 mov     ax, [bp+var_2] ;~ 1359:0F33
cs=0x1359;eip=0x000f36; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2e))));	// 36278 mov     bx, [bp+var_2E] ;~ 1359:0F36
cs=0x1359;eip=0x000f39; 	T(SUB(ax, *(dw*)(((db*)&word_445b8)+bx)));	// 36279 sub     ax, word_445B8[bx] ;~ 1359:0F39
cs=0x1359;eip=0x000f3d; 	X(PUSH(ax));	// 36280 push    ax ;~ 1359:0F3D
cs=0x1359;eip=0x000f3e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 36281 mov     ax, [bp+var_6] ;~ 1359:0F3E
cs=0x1359;eip=0x000f41; 	T(SUB(ax, *(dw*)(((db*)&word_445b4)+bx)));	// 36282 sub     ax, word_445B4[bx] ;~ 1359:0F41
cs=0x1359;eip=0x000f45; 	X(PUSH(ax));	// 36283 push    ax ;~ 1359:0F45
cs=0x1359;eip=0x000f46; 	R(CALLF(polarangle,0));	// 36284 call    polarAngle ;~ 1359:0F46
cs=0x1359;eip=0x000f4b; 	T(ADD(sp, 4));	// 36285 add     sp, 4 ;~ 1359:0F4B
cs=0x1359;eip=0x000f4e; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 36286 mov     [bp+var_10], ax ;~ 1359:0F4E
cs=0x1359;eip=0x000f51; 	T(MOV(ax, si));	// 36287 mov     ax, si ;~ 1359:0F51
cs=0x1359;eip=0x000f53; 	T(MOV(cx, ax));	// 36288 mov     cx, ax ;~ 1359:0F53
cs=0x1359;eip=0x000f55; 	T(SHL(ax, 1));	// 36289 shl     ax, 1 ;~ 1359:0F55
cs=0x1359;eip=0x000f57; 	T(ADD(ax, cx));	// 36290 add     ax, cx ;~ 1359:0F57
cs=0x1359;eip=0x000f59; 	T(SHL(ax, 1));	// 36291 shl     ax, 1 ;~ 1359:0F59
cs=0x1359;eip=0x000f5b; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 36292 mov     [bp+var_30], ax ;~ 1359:0F5B
cs=0x1359;eip=0x000f5e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 36293 mov     ax, [bp+var_18] ;~ 1359:0F5E
cs=0x1359;eip=0x000f61; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_30))));	// 36294 mov     bx, [bp+var_30] ;~ 1359:0F61
cs=0x1359;eip=0x000f64; 	T(SUB(ax, *(dw*)(((db*)&word_445b8)+bx)));	// 36295 sub     ax, word_445B8[bx] ;~ 1359:0F64
cs=0x1359;eip=0x000f68; 	X(PUSH(ax));	// 36296 push    ax ;~ 1359:0F68
cs=0x1359;eip=0x000f69; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 36297 mov     ax, [bp+var_1C] ;~ 1359:0F69
cs=0x1359;eip=0x000f6c; 	T(SUB(ax, *(dw*)(((db*)&word_445b4)+bx)));	// 36298 sub     ax, word_445B4[bx] ;~ 1359:0F6C
cs=0x1359;eip=0x000f70; 	X(PUSH(ax));	// 36299 push    ax ;~ 1359:0F70
cs=0x1359;eip=0x000f71; 	R(CALLF(polarradius2d,0));	// 36300 call    polarRadius2D ;~ 1359:0F71
cs=0x1359;eip=0x000f76; 	T(ADD(sp, 4));	// 36301 add     sp, 4 ;~ 1359:0F76
cs=0x1359;eip=0x000f79; 	T(MOV(di, ax));	// 36302 mov     di, ax ;~ 1359:0F79
cs=0x1359;eip=0x000f7b; 	T(CMP(*(dw*)(raddr(ss,bp+var_22)), di));	// 36303 cmp     [bp+var_22], di ;~ 1359:0F7B
cs=0x1359;eip=0x000f7e; 	R(JGE(loc_22b53));	// 36304 jge     short loc_22B53 ;~ 1359:0F7E
cs=0x1359;eip=0x000f80; 	T(SUB(di, *(dw*)(raddr(ss,bp+var_22))));	// 36305 sub     di, [bp+var_22] ;~ 1359:0F80
cs=0x1359;eip=0x000f83; 	T(CMP(framespersec, 0x14));	// 36306 cmp     framespersec, 14h ;~ 1359:0F83
cs=0x1359;eip=0x000f88; 	R(JNZ(loc_22b04));	// 36307 jnz     short loc_22B04 ;~ 1359:0F88
cs=0x1359;eip=0x000f8a; 	T(CMP(di, 0x78));	// 36308 cmp     di, 78h ; 'x' ;~ 1359:0F8A
cs=0x1359;eip=0x000f8d; 	R(JLE(loc_22b0d));	// 36309 jle     short loc_22B0D ;~ 1359:0F8D
cs=0x1359;eip=0x000f8f; 	T(MOV(di, 0x78));	// 36310 mov     di, 78h ; 'x' ;~ 1359:0F8F
cs=0x1359;eip=0x000f92; 	R(JMP(loc_22b0d));	// 36311 jmp     short loc_22B0D ;~ 1359:0F92
loc_22b04:
	// 6908 
cs=0x1359;eip=0x000f94; 	T(CMP(di, 0x0F0));	// 36315 cmp     di, 0F0h ; 'ð' ;~ 1359:0F94
cs=0x1359;eip=0x000f98; 	R(JLE(loc_22b0d));	// 36316 jle     short loc_22B0D ;~ 1359:0F98
cs=0x1359;eip=0x000f9a; 	T(MOV(di, 0x0F0));	// 36317 mov     di, 0F0h ; 'ð' ;~ 1359:0F9A
loc_22b0d:
	// 6909 
cs=0x1359;eip=0x000f9d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10))));	// 36321 push    [bp+var_10] ;~ 1359:0F9D
cs=0x1359;eip=0x000fa0; 	R(CALLF(sin_fast,0));	// 36322 call    sin_fast ;~ 1359:0FA0
cs=0x1359;eip=0x000fa5; 	T(ADD(sp, 2));	// 36323 add     sp, 2 ;~ 1359:0FA5
cs=0x1359;eip=0x000fa8; 	X(PUSH(ax));	// 36324 push    ax ;~ 1359:0FA8
cs=0x1359;eip=0x000fa9; 	X(PUSH(di));	// 36325 push    di ;~ 1359:0FA9
cs=0x1359;eip=0x000faa; 	R(CALLF(multiply_and_scale,0));	// 36326 call    multiply_and_scale ;~ 1359:0FAA
cs=0x1359;eip=0x000faf; 	T(ADD(sp, 4));	// 36327 add     sp, 4 ;~ 1359:0FAF
cs=0x1359;eip=0x000fb2; 	T(MOV(bx, si));	// 36328 mov     bx, si ;~ 1359:0FB2
cs=0x1359;eip=0x000fb4; 	T(MOV(cx, bx));	// 36329 mov     cx, bx ;~ 1359:0FB4
cs=0x1359;eip=0x000fb6; 	T(SHL(bx, 1));	// 36330 shl     bx, 1 ;~ 1359:0FB6
cs=0x1359;eip=0x000fb8; 	T(ADD(bx, cx));	// 36331 add     bx, cx ;~ 1359:0FB8
cs=0x1359;eip=0x000fba; 	T(SHL(bx, 1));	// 36332 shl     bx, 1 ;~ 1359:0FBA
cs=0x1359;eip=0x000fbc; 	X(ADD(*(dw*)(((db*)&word_445b4)+bx), ax));	// 36333 add     word_445B4[bx], ax ;~ 1359:0FBC
cs=0x1359;eip=0x000fc0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10))));	// 36334 push    [bp+var_10] ;~ 1359:0FC0
cs=0x1359;eip=0x000fc3; 	R(CALLF(cos_fast,0));	// 36335 call    cos_fast ;~ 1359:0FC3
cs=0x1359;eip=0x000fc8; 	T(ADD(sp, 2));	// 36336 add     sp, 2 ;~ 1359:0FC8
cs=0x1359;eip=0x000fcb; 	X(PUSH(ax));	// 36337 push    ax ;~ 1359:0FCB
cs=0x1359;eip=0x000fcc; 	X(PUSH(di));	// 36338 push    di ;~ 1359:0FCC
cs=0x1359;eip=0x000fcd; 	R(CALLF(multiply_and_scale,0));	// 36339 call    multiply_and_scale ;~ 1359:0FCD
cs=0x1359;eip=0x000fd2; 	T(ADD(sp, 4));	// 36340 add     sp, 4 ;~ 1359:0FD2
cs=0x1359;eip=0x000fd5; 	T(MOV(bx, si));	// 36341 mov     bx, si ;~ 1359:0FD5
cs=0x1359;eip=0x000fd7; 	T(MOV(cx, bx));	// 36342 mov     cx, bx ;~ 1359:0FD7
cs=0x1359;eip=0x000fd9; 	T(SHL(bx, 1));	// 36343 shl     bx, 1 ;~ 1359:0FD9
cs=0x1359;eip=0x000fdb; 	T(ADD(bx, cx));	// 36344 add     bx, cx ;~ 1359:0FDB
cs=0x1359;eip=0x000fdd; 	T(SHL(bx, 1));	// 36345 shl     bx, 1 ;~ 1359:0FDD
cs=0x1359;eip=0x000fdf; 	X(ADD(*(dw*)(((db*)&word_445b8)+bx), ax));	// 36346 add     word_445B8[bx], ax ;~ 1359:0FDF
loc_22b53:
	// 6910 
cs=0x1359;eip=0x000fe3; 	T(MOV(ax, word_445d4));	// 36349 mov     ax, word_445D4 ;~ 1359:0FE3
cs=0x1359;eip=0x000fe6; 	T(SUB(dx, dx));	// 36350 sub     dx, dx ;~ 1359:0FE6
cs=0x1359;eip=0x000fe8; 	T(MOV(cx, framespersec));	// 36351 mov     cx, framespersec ;~ 1359:0FE8
cs=0x1359;eip=0x000fec; 	T(SAR(cx, 1));	// 36352 sar     cx, 1 ;~ 1359:0FEC
cs=0x1359;eip=0x000fee; 	T(DIV2(cx));	// 36353 div     cx ;~ 1359:0FEE
cs=0x1359;eip=0x000ff0; 	T(OR(dx, dx));	// 36354 or      dx, dx ;~ 1359:0FF0
cs=0x1359;eip=0x000ff2; 	R(JZ(loc_22b67));	// 36355 jz      short loc_22B67 ;~ 1359:0FF2
cs=0x1359;eip=0x000ff4; 	R(JMP(loc_22c52));	// 36356 jmp     loc_22C52 ;~ 1359:0FF4
loc_22b67:
	// 6911 
cs=0x1359;eip=0x000ff7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), 0x2710));	// 36360 mov     [bp+var_2C], 2710h ;~ 1359:0FF7
cs=0x1359;eip=0x000ffc; 	X(MOV(*(raddr(ss,bp+var_a)), 0));	// 36361 mov     [bp+var_A], 0 ;~ 1359:0FFC
cs=0x1359;eip=0x001000; 	R(JMP(loc_22be3));	// 36362 jmp     short loc_22BE3 ;~ 1359:1000
loc_22b74:
	// 6912 
cs=0x1359;eip=0x001004; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_20))));	// 36368 mov     ax, [bp+var_20] ;~ 1359:1004
cs=0x1359;eip=0x001007; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_1e))));	// 36369 mov     dx, [bp+var_1E] ;~ 1359:1007
loc_22b7a:
	// 6913 
cs=0x1359;eip=0x00100a; 	T(MOV(cx, ax));	// 36372 mov     cx, ax ;~ 1359:100A
cs=0x1359;eip=0x00100c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 36373 mov     ax, [bp+var_2C] ;~ 1359:100C
cs=0x1359;eip=0x00100f; 	T(MOV(bx, dx));	// 36374 mov     bx, dx ;~ 1359:100F
cs=0x1359;eip=0x001011; 	T(CWD);	// 36375 cwd ;~ 1359:1011
cs=0x1359;eip=0x001012; 	T(CMP(bx, dx));	// 36376 cmp     bx, dx ;~ 1359:1012
cs=0x1359;eip=0x001014; 	R(JG(loc_22be0));	// 36377 jg      short loc_22BE0 ;~ 1359:1014
cs=0x1359;eip=0x001016; 	R(JL(loc_22b8c));	// 36378 jl      short loc_22B8C ;~ 1359:1016
cs=0x1359;eip=0x001018; 	T(CMP(cx, ax));	// 36379 cmp     cx, ax ;~ 1359:1018
cs=0x1359;eip=0x00101a; 	R(JNC(loc_22be0));	// 36380 jnb     short loc_22BE0 ;~ 1359:101A
loc_22b8c:
	// 6914 
cs=0x1359;eip=0x00101c; 	T(CMP(*(dw*)(raddr(ss,bp+var_26)), 0));	// 36383 cmp     [bp+var_26], 0 ;~ 1359:101C
cs=0x1359;eip=0x001020; 	R(JGE(loc_22ba2));	// 36384 jge     short loc_22BA2 ;~ 1359:1020
cs=0x1359;eip=0x001022; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 36385 mov     ax, [bp+var_28] ;~ 1359:1022
cs=0x1359;eip=0x001025; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_26))));	// 36386 mov     dx, [bp+var_26] ;~ 1359:1025
cs=0x1359;eip=0x001028; 	T(NEG(ax));	// 36387 neg     ax ;~ 1359:1028
cs=0x1359;eip=0x00102a; 	T(ADC(dx, 0));	// 36388 adc     dx, 0 ;~ 1359:102A
cs=0x1359;eip=0x00102d; 	T(NEG(dx));	// 36389 neg     dx ;~ 1359:102D
cs=0x1359;eip=0x00102f; 	R(JMP(loc_22ba8));	// 36390 jmp     short loc_22BA8 ;~ 1359:102F
loc_22ba2:
	// 6915 
cs=0x1359;eip=0x001032; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 36395 mov     ax, [bp+var_28] ;~ 1359:1032
cs=0x1359;eip=0x001035; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_26))));	// 36396 mov     dx, [bp+var_26] ;~ 1359:1035
loc_22ba8:
	// 6916 
cs=0x1359;eip=0x001038; 	T(MOV(cx, ax));	// 36399 mov     cx, ax ;~ 1359:1038
cs=0x1359;eip=0x00103a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 36400 mov     ax, [bp+var_2C] ;~ 1359:103A
cs=0x1359;eip=0x00103d; 	T(MOV(bx, dx));	// 36401 mov     bx, dx ;~ 1359:103D
cs=0x1359;eip=0x00103f; 	T(CWD);	// 36402 cwd ;~ 1359:103F
cs=0x1359;eip=0x001040; 	T(CMP(bx, dx));	// 36403 cmp     bx, dx ;~ 1359:1040
cs=0x1359;eip=0x001042; 	R(JG(loc_22be0));	// 36404 jg      short loc_22BE0 ;~ 1359:1042
cs=0x1359;eip=0x001044; 	R(JL(loc_22bba));	// 36405 jl      short loc_22BBA ;~ 1359:1044
cs=0x1359;eip=0x001046; 	T(CMP(cx, ax));	// 36406 cmp     cx, ax ;~ 1359:1046
cs=0x1359;eip=0x001048; 	R(JNC(loc_22be0));	// 36407 jnb     short loc_22BE0 ;~ 1359:1048
loc_22bba:
	// 6917 
cs=0x1359;eip=0x00104a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_28))));	// 36410 push    [bp+var_28] ;~ 1359:104A
cs=0x1359;eip=0x00104d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_20))));	// 36411 push    [bp+var_20] ;~ 1359:104D
cs=0x1359;eip=0x001050; 	R(CALLF(polarradius2d,0));	// 36412 call    polarRadius2D ;~ 1359:1050
cs=0x1359;eip=0x001055; 	T(ADD(sp, 4));	// 36413 add     sp, 4 ;~ 1359:1055
cs=0x1359;eip=0x001058; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 36414 mov     [bp+var_8], ax ;~ 1359:1058
cs=0x1359;eip=0x00105b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 36415 mov     ax, [bp+var_2C] ;~ 1359:105B
cs=0x1359;eip=0x00105e; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), ax));	// 36416 cmp     [bp+var_8], ax ;~ 1359:105E
cs=0x1359;eip=0x001061; 	R(JGE(loc_22be0));	// 36417 jge     short loc_22BE0 ;~ 1359:1061
cs=0x1359;eip=0x001063; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 36418 mov     al, [bp+var_A] ;~ 1359:1063
cs=0x1359;eip=0x001066; 	X(MOV(*((&byte_4488b)+si), al));	// 36419 mov     byte_4488B[si], al ;~ 1359:1066
cs=0x1359;eip=0x00106a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 36420 mov     ax, [bp+var_8] ;~ 1359:106A
cs=0x1359;eip=0x00106d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 36421 mov     [bp+var_2C], ax ;~ 1359:106D
loc_22be0:
	// 6918 
cs=0x1359;eip=0x001070; 	X(INC(*(raddr(ss,bp+var_a))));	// 36425 inc     [bp+var_A] ;~ 1359:1070
loc_22be3:
	// 6919 
cs=0x1359;eip=0x001073; 	T(MOV(al, byte_4616e));	// 36428 mov     al, byte_4616E ;~ 1359:1073
cs=0x1359;eip=0x001076; 	T(CMP(*(raddr(ss,bp+var_a)), al));	// 36429 cmp     [bp+var_A], al ;~ 1359:1076
cs=0x1359;eip=0x001079; 	R(JGE(loc_22c52));	// 36430 jge     short loc_22C52 ;~ 1359:1079
cs=0x1359;eip=0x00107b; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 36431 mov     al, [bp+var_A] ;~ 1359:107B
cs=0x1359;eip=0x00107e; 	T(CBW);	// 36432 cbw ;~ 1359:107E
cs=0x1359;eip=0x00107f; 	T(MOV(cx, ax));	// 36433 mov     cx, ax ;~ 1359:107F
cs=0x1359;eip=0x001081; 	T(SHL(ax, 1));	// 36434 shl     ax, 1 ;~ 1359:1081
cs=0x1359;eip=0x001083; 	T(ADD(ax, cx));	// 36435 add     ax, cx ;~ 1359:1083
cs=0x1359;eip=0x001085; 	T(SHL(ax, 1));	// 36436 shl     ax, 1 ;~ 1359:1085
cs=0x1359;eip=0x001087; 	T(ADD(ax, trackdata9));	// 36437 add     ax, trackdata9 ;~ 1359:1087
cs=0x1359;eip=0x00108b; 	T(MOV(dx, word_449de));	// 36438 mov     dx, word_449DE ;~ 1359:108B
cs=0x1359;eip=0x00108f; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_34))), ax));	// 36439 mov     word ptr [bp+var_34], ax ;~ 1359:108F
cs=0x1359;eip=0x001092; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_34+2))), dx));	// 36440 mov     word ptr [bp+var_34+2], dx ;~ 1359:1092
cs=0x1359;eip=0x001095; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 36441 mov     ax, [bp+var_1C] ;~ 1359:1095
cs=0x1359;eip=0x001098; 	T(CWD);	// 36442 cwd ;~ 1359:1098
cs=0x1359;eip=0x001099; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_34))));	// 36443 les     bx, [bp+var_34] ;~ 1359:1099
cs=0x1359;eip=0x00109c; 	T(MOV(cx, ax));	// 36444 mov     cx, ax ;~ 1359:109C
cs=0x1359;eip=0x00109e; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 36445 mov     ax, es:[bx] ;~ 1359:109E
cs=0x1359;eip=0x0010a1; 	T(MOV(bx, dx));	// 36446 mov     bx, dx ;~ 1359:10A1
cs=0x1359;eip=0x0010a3; 	T(CWD);	// 36447 cwd ;~ 1359:10A3
cs=0x1359;eip=0x0010a4; 	T(SUB(ax, cx));	// 36448 sub     ax, cx ;~ 1359:10A4
cs=0x1359;eip=0x0010a6; 	T(SBB(dx, bx));	// 36449 sbb     dx, bx ;~ 1359:10A6
cs=0x1359;eip=0x0010a8; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 36450 mov     [bp+var_20], ax ;~ 1359:10A8
cs=0x1359;eip=0x0010ab; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), dx));	// 36451 mov     [bp+var_1E], dx ;~ 1359:10AB
cs=0x1359;eip=0x0010ae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 36452 mov     ax, [bp+var_18] ;~ 1359:10AE
cs=0x1359;eip=0x0010b1; 	T(CWD);	// 36453 cwd ;~ 1359:10B1
cs=0x1359;eip=0x0010b2; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_34)))));	// 36454 mov     bx, word ptr [bp+var_34] ;~ 1359:10B2
cs=0x1359;eip=0x0010b5; 	T(MOV(cx, ax));	// 36455 mov     cx, ax ;~ 1359:10B5
cs=0x1359;eip=0x0010b7; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 36456 mov     ax, es:[bx+4] ;~ 1359:10B7
cs=0x1359;eip=0x0010bb; 	T(MOV(bx, dx));	// 36457 mov     bx, dx ;~ 1359:10BB
cs=0x1359;eip=0x0010bd; 	T(CWD);	// 36458 cwd ;~ 1359:10BD
cs=0x1359;eip=0x0010be; 	T(SUB(ax, cx));	// 36459 sub     ax, cx ;~ 1359:10BE
cs=0x1359;eip=0x0010c0; 	T(SBB(dx, bx));	// 36460 sbb     dx, bx ;~ 1359:10C0
cs=0x1359;eip=0x0010c2; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 36461 mov     [bp+var_28], ax ;~ 1359:10C2
cs=0x1359;eip=0x0010c5; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), dx));	// 36462 mov     [bp+var_26], dx ;~ 1359:10C5
cs=0x1359;eip=0x0010c8; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 36463 cmp     [bp+var_1E], 0 ;~ 1359:10C8
cs=0x1359;eip=0x0010cc; 	R(JL(loc_22c41));	// 36464 jl      short loc_22C41 ;~ 1359:10CC
cs=0x1359;eip=0x0010ce; 	R(JMP(loc_22b74));	// 36465 jmp     loc_22B74 ;~ 1359:10CE
loc_22c41:
	// 6920 
cs=0x1359;eip=0x0010d1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_20))));	// 36469 mov     ax, [bp+var_20] ;~ 1359:10D1
cs=0x1359;eip=0x0010d4; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_1e))));	// 36470 mov     dx, [bp+var_1E] ;~ 1359:10D4
cs=0x1359;eip=0x0010d7; 	T(NEG(ax));	// 36471 neg     ax ;~ 1359:10D7
cs=0x1359;eip=0x0010d9; 	T(ADC(dx, 0));	// 36472 adc     dx, 0 ;~ 1359:10D9
cs=0x1359;eip=0x0010dc; 	T(NEG(dx));	// 36473 neg     dx ;~ 1359:10DC
cs=0x1359;eip=0x0010de; 	R(JMP(loc_22b7a));	// 36474 jmp     loc_22B7A ;~ 1359:10DE
loc_22c52:
	// 6921 
cs=0x1359;eip=0x0010e2; 	T(INC(si));	// 36480 inc     si ;~ 1359:10E2
loc_22c53:
	// 6922 
cs=0x1359;eip=0x0010e3; 	T(CMP(*(dw*)(raddr(ss,bp+var_2a)), si));	// 36483 cmp     [bp+var_2A], si ;~ 1359:10E3
cs=0x1359;eip=0x0010e6; 	R(JLE(loc_22c8c));	// 36484 jle     short loc_22C8C ;~ 1359:10E6
cs=0x1359;eip=0x0010e8; 	T(MOV(ax, si));	// 36485 mov     ax, si ;~ 1359:10E8
cs=0x1359;eip=0x0010ea; 	T(MOV(cx, ax));	// 36486 mov     cx, ax ;~ 1359:10EA
cs=0x1359;eip=0x0010ec; 	T(SHL(ax, 1));	// 36487 shl     ax, 1 ;~ 1359:10EC
cs=0x1359;eip=0x0010ee; 	T(ADD(ax, cx));	// 36488 add     ax, cx ;~ 1359:10EE
cs=0x1359;eip=0x0010f0; 	T(SHL(ax, 1));	// 36489 shl     ax, 1 ;~ 1359:10F0
cs=0x1359;eip=0x0010f2; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 36490 mov     [bp+var_2E], ax ;~ 1359:10F2
cs=0x1359;eip=0x0010f5; 	T(MOV(bx, ax));	// 36491 mov     bx, ax ;~ 1359:10F5
cs=0x1359;eip=0x0010f7; 	T(ax = offset(dseg,word_445b4)+bx);	// 36492 lea     ax, word_445B4[bx] ;~ 1359:10F7
cs=0x1359;eip=0x0010fb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2e))));	// 36493 mov     bx, [bp+var_2E] ;~ 1359:10FB
cs=0x1359;eip=0x0010fe; 	X(PUSH(si));	// 36494 push    si ;~ 1359:10FE
cs=0x1359;eip=0x0010ff; 	X(PUSH(di));	// 36495 push    di ;~ 1359:10FF
cs=0x1359;eip=0x001100; 	T(di = offset(dseg,unk_445c0)+bx);	// 36496 lea     di, unk_445C0[bx] ;~ 1359:1100
cs=0x1359;eip=0x001104; 	T(MOV(si, ax));	// 36497 mov     si, ax ;~ 1359:1104
cs=0x1359;eip=0x001106; 	X(PUSH(ds));	// 36498 push    ds ;~ 1359:1106
cs=0x1359;eip=0x001107; 	X(POP(es));	// 36499 pop     es ;~ 1359:1107
cs=0x1359;eip=0x001108; 	X(MOVSW);	// 36501 movsw ;~ 1359:1108
cs=0x1359;eip=0x001109; 	X(MOVSW);	// 36502 movsw ;~ 1359:1109
cs=0x1359;eip=0x00110a; 	X(MOVSW);	// 36503 movsw ;~ 1359:110A
cs=0x1359;eip=0x00110b; 	X(POP(di));	// 36504 pop     di ;~ 1359:110B
cs=0x1359;eip=0x00110c; 	X(POP(si));	// 36505 pop     si ;~ 1359:110C
cs=0x1359;eip=0x00110d; 	T(OR(si, si));	// 36506 or      si, si ;~ 1359:110D
cs=0x1359;eip=0x00110f; 	R(JZ(loc_22c84));	// 36507 jz      short loc_22C84 ;~ 1359:110F
cs=0x1359;eip=0x001111; 	R(JMP(loc_229aa));	// 36508 jmp     loc_229AA ;~ 1359:1111
loc_22c84:
	// 6923 
cs=0x1359;eip=0x001114; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), offset(dseg,word_445e6)));	// 36512 mov     [bp+var_24], offset word_445E6 ;~ 1359:1114
cs=0x1359;eip=0x001119; 	R(JMP(loc_229af));	// 36513 jmp     loc_229AF ;~ 1359:1119
loc_22c8c:
	// 6924 
cs=0x1359;eip=0x00111c; 	X(POP(si));	// 36517 pop     si ;~ 1359:111C
cs=0x1359;eip=0x00111d; 	X(POP(di));	// 36518 pop     di ;~ 1359:111D
cs=0x1359;eip=0x00111e; 	T(MOV(sp, bp));	// 36519 mov     sp, bp ;~ 1359:111E
cs=0x1359;eip=0x001120; 	X(POP(bp));	// 36520 pop     bp ;~ 1359:1120
cs=0x1359;eip=0x001121; 	R(RETF(0));	// 36521 retf ;~ 1359:1121
file_load_replay:
	// 36530 
#undef arg_0
#define arg_0 6
	// 36533 arg_0           = dword ptr  6 ;~ 1359:1122
ret_1359_1122:
	// 6925 
cs=0x1359;eip=0x001122; 	X(PUSH(bp));	// 36535 push    bp ;~ 1359:1122
cs=0x1359;eip=0x001123; 	T(MOV(bp, sp));	// 36536 mov     bp, sp ;~ 1359:1123
cs=0x1359;eip=0x001125; 	X(PUSH(di));	// 36537 push    di ;~ 1359:1125
cs=0x1359;eip=0x001126; 	X(PUSH(si));	// 36538 push    si              ; char * ;~ 1359:1126
cs=0x1359;eip=0x001127; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 36539 mov     ax, offset g_path_buf ;~ 1359:1127
cs=0x1359;eip=0x00112a; 	X(PUSH(ax));	// 36540 push    ax              ; char * ;~ 1359:112A
cs=0x1359;eip=0x00112b; 	T(MOV(ax, offset(dseg,a_rpl)));	// 36541 mov     ax, offset a_rpl ; ".rpl" ;~ 1359:112B
cs=0x1359;eip=0x00112e; 	X(PUSH(ax));	// 36542 push    ax              ; int ;~ 1359:112E
cs=0x1359;eip=0x00112f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 36543 push    word ptr [bp+arg_0+2] ;~ 1359:112F
cs=0x1359;eip=0x001132; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 36544 push    word ptr [bp+arg_0] ; char * ;~ 1359:1132
cs=0x1359;eip=0x001135; 	R(CALLF(file_build_path,0));	// 36545 call    file_build_path ;~ 1359:1135
cs=0x1359;eip=0x00113a; 	T(ADD(sp, 8));	// 36546 add     sp, 8 ;~ 1359:113A
cs=0x1359;eip=0x00113d; 	X(MOV(g_is_busy, 1));	// 36547 mov     g_is_busy, 1 ;~ 1359:113D
cs=0x1359;eip=0x001142; 	X(PUSH(*(dw*)(((db*)&td13_rpl_header)+2)));	// 36548 push    word ptr td13_rpl_header+2 ;~ 1359:1142
cs=0x1359;eip=0x001146; 	X(PUSH(*(dw*)(((db*)&td13_rpl_header))));	// 36549 push    word ptr td13_rpl_header ;~ 1359:1146
cs=0x1359;eip=0x00114a; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 36550 mov     ax, offset g_path_buf ;~ 1359:114A
cs=0x1359;eip=0x00114d; 	X(PUSH(ax));	// 36551 push    ax ;~ 1359:114D
cs=0x1359;eip=0x00114e; 	R(CALLF(file_read_fatal,0));	// 36552 call    file_read_fatal ;~ 1359:114E
cs=0x1359;eip=0x001153; 	T(ADD(sp, 6));	// 36553 add     sp, 6 ;~ 1359:1153
cs=0x1359;eip=0x001156; 	T(MOV(ax, *(dw*)(((db*)&td13_rpl_header))));	// 36554 mov     ax, word ptr td13_rpl_header ;~ 1359:1156
cs=0x1359;eip=0x001159; 	T(MOV(dx, *(dw*)(((db*)&td13_rpl_header)+2)));	// 36555 mov     dx, word ptr td13_rpl_header+2 ;~ 1359:1159
cs=0x1359;eip=0x00115d; 	T(MOV(di, offset(dseg,gameconfig)));	// 36556 mov     di, offset gameconfig ;~ 1359:115D
cs=0x1359;eip=0x001160; 	T(MOV(si, ax));	// 36557 mov     si, ax ;~ 1359:1160
cs=0x1359;eip=0x001162; 	X(PUSH(ds));	// 36558 push    ds ;~ 1359:1162
cs=0x1359;eip=0x001163; 	X(POP(es));	// 36559 pop     es ;~ 1359:1163
cs=0x1359;eip=0x001164; 	X(PUSH(ds));	// 36560 push    ds ;~ 1359:1164
cs=0x1359;eip=0x001165; 	T(MOV(ds, dx));	// 36561 mov     ds, dx ;~ 1359:1165
cs=0x1359;eip=0x001167; 	T(MOV(cx, 0x0D));	// 36562 mov     cx, 0Dh         ; copies 13 words from the rpl to gameconfig ;~ 1359:1167
	// 36563 repne movsw ;~ 1359:116A
cs=0x1359;eip=0x00116a; 	X(	REPNE MOVSW);	// 36563 repne movsw ;~ 1359:116A
cs=0x1359;eip=0x00116c; 	X(POP(ds));	// 36564 pop     ds ;~ 1359:116C
cs=0x1359;eip=0x00116d; 	X(MOV(g_is_busy, 0));	// 36565 mov     g_is_busy, 0 ;~ 1359:116D
cs=0x1359;eip=0x001172; 	T(SUB(ax, ax));	// 36566 sub     ax, ax ;~ 1359:1172
cs=0x1359;eip=0x001174; 	X(POP(si));	// 36567 pop     si ;~ 1359:1174
cs=0x1359;eip=0x001175; 	X(POP(di));	// 36568 pop     di ;~ 1359:1175
cs=0x1359;eip=0x001176; 	X(POP(bp));	// 36569 pop     bp ;~ 1359:1176
cs=0x1359;eip=0x001177; 	R(RETF(0));	// 36570 retf ;~ 1359:1177
file_write_replay:
	// 36578 
#undef var_6
#define var_6 -6
	// 36580 var_6           = word ptr -6 ;~ 1359:1178
#undef var_4
#define var_4 -4
	// 36581 var_4           = word ptr -4 ;~ 1359:1178
#undef arg_0
#define arg_0 6
	// 36582 arg_0           = word ptr  6 ;~ 1359:1178
ret_1359_1178:
	// 6926 
cs=0x1359;eip=0x001178; 	X(PUSH(bp));	// 36584 push    bp ;~ 1359:1178
cs=0x1359;eip=0x001179; 	T(MOV(bp, sp));	// 36585 mov     bp, sp ;~ 1359:1179
cs=0x1359;eip=0x00117b; 	T(SUB(sp, 6));	// 36586 sub     sp, 6 ;~ 1359:117B
cs=0x1359;eip=0x00117e; 	X(PUSH(di));	// 36587 push    di ;~ 1359:117E
cs=0x1359;eip=0x00117f; 	X(PUSH(si));	// 36588 push    si ;~ 1359:117F
cs=0x1359;eip=0x001180; 	T(LES(bx, td13_rpl_header));	// 36589 les     bx, td13_rpl_header ;~ 1359:1180
cs=0x1359;eip=0x001184; 	X(PUSH(si));	// 36591 push    si ;~ 1359:1184
cs=0x1359;eip=0x001185; 	T(MOV(di, bx));	// 36592 mov     di, bx ;~ 1359:1185
cs=0x1359;eip=0x001187; 	T(MOV(si, offset(dseg,gameconfig)));	// 36593 mov     si, offset gameconfig ;~ 1359:1187
cs=0x1359;eip=0x00118a; 	T(MOV(cx, 0x0D));	// 36594 mov     cx, 0Dh ;~ 1359:118A
	// 36595 repne movsw ;~ 1359:118D
cs=0x1359;eip=0x00118d; 	X(	REPNE MOVSW);	// 36595 repne movsw ;~ 1359:118D
cs=0x1359;eip=0x00118f; 	X(POP(si));	// 36596 pop     si ;~ 1359:118F
cs=0x1359;eip=0x001190; 	T(MOV(ax, word_449bc));	// 36597 mov     ax, word_449BC ;~ 1359:1190
cs=0x1359;eip=0x001193; 	T(ADD(ax, 0x724));	// 36598 add     ax, 724h        ; offset of .rpl kb. event block ;~ 1359:1193
cs=0x1359;eip=0x001196; 	T(CWD);	// 36599 cwd ;~ 1359:1196
cs=0x1359;eip=0x001197; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 36600 mov     [bp+var_6], ax ;~ 1359:1197
cs=0x1359;eip=0x00119a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 36601 mov     [bp+var_4], dx ;~ 1359:119A
cs=0x1359;eip=0x00119d; 	X(MOV(g_is_busy, 1));	// 36602 mov     g_is_busy, 1 ;~ 1359:119D
cs=0x1359;eip=0x0011a2; 	X(PUSH(dx));	// 36603 push    dx ;~ 1359:11A2
cs=0x1359;eip=0x0011a3; 	X(PUSH(ax));	// 36604 push    ax ;~ 1359:11A3
cs=0x1359;eip=0x0011a4; 	X(PUSH(es));	// 36605 push    es ;~ 1359:11A4
cs=0x1359;eip=0x0011a5; 	X(PUSH(bx));	// 36606 push    bx ;~ 1359:11A5
cs=0x1359;eip=0x0011a6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 36607 push    [bp+arg_0] ;~ 1359:11A6
cs=0x1359;eip=0x0011a9; 	R(CALLF(file_write_fatal,0));	// 36608 call    file_write_fatal ;~ 1359:11A9
cs=0x1359;eip=0x0011ae; 	T(ADD(sp, 0x0A));	// 36609 add     sp, 0Ah ;~ 1359:11AE
cs=0x1359;eip=0x0011b1; 	X(MOV(g_is_busy, 0));	// 36610 mov     g_is_busy, 0 ;~ 1359:11B1
cs=0x1359;eip=0x0011b6; 	T(CBW);	// 36611 cbw ;~ 1359:11B6
cs=0x1359;eip=0x0011b7; 	X(POP(si));	// 36612 pop     si ;~ 1359:11B7
cs=0x1359;eip=0x0011b8; 	X(POP(di));	// 36613 pop     di ;~ 1359:11B8
cs=0x1359;eip=0x0011b9; 	T(MOV(sp, bp));	// 36614 mov     sp, bp ;~ 1359:11B9
cs=0x1359;eip=0x0011bb; 	X(POP(bp));	// 36615 pop     bp ;~ 1359:11BB
cs=0x1359;eip=0x0011bc; 	R(RETF(0));	// 36616 retf ;~ 1359:11BC
setup_car_shapes:
	// 36626 
#undef var_20
#define var_20 -0x20
	// 36629 var_20          = word ptr -20h ;~ 1359:11BE
#undef var_1e
#define var_1e -0x1E
	// 36630 var_1E          = word ptr -1Eh ;~ 1359:11BE
#undef var_1c
#define var_1c -0x1C
	// 36631 var_1C          = byte ptr -1Ch ;~ 1359:11BE
#undef var_1a
#define var_1a -0x1A
	// 36632 var_1A          = byte ptr -1Ah ;~ 1359:11BE
#undef var_18
#define var_18 -0x18
	// 36633 var_18          = byte ptr -18h ;~ 1359:11BE
#undef var_16
#define var_16 -0x16
	// 36634 var_16          = byte ptr -16h ;~ 1359:11BE
#undef var_14
#define var_14 -0x14
	// 36635 var_14          = byte ptr -14h ;~ 1359:11BE
#undef var_e
#define var_e -0x0E
	// 36636 var_E           = word ptr -0Eh ;~ 1359:11BE
#undef var_c
#define var_c -0x0C
	// 36637 var_C           = dword ptr -0Ch ;~ 1359:11BE
#undef var_8
#define var_8 -8
	// 36638 var_8           = word ptr -8 ;~ 1359:11BE
#undef var_6
#define var_6 -6
	// 36639 var_6           = byte ptr -6 ;~ 1359:11BE
#undef var_4
#define var_4 -4
	// 36640 var_4           = word ptr -4 ;~ 1359:11BE
#undef var_2
#define var_2 -2
	// 36641 var_2           = byte ptr -2 ;~ 1359:11BE
#undef arg_0
#define arg_0 6
	// 36642 arg_0           = word ptr  6 ;~ 1359:11BE
ret_1359_11be:
	// 6927 
cs=0x1359;eip=0x0011be; 	X(PUSH(bp));	// 36644 push    bp ;~ 1359:11BE
cs=0x1359;eip=0x0011bf; 	T(MOV(bp, sp));	// 36645 mov     bp, sp ;~ 1359:11BF
cs=0x1359;eip=0x0011c1; 	T(SUB(sp, 0x20));	// 36646 sub     sp, 20h ;~ 1359:11C1
cs=0x1359;eip=0x0011c4; 	X(PUSH(di));	// 36647 push    di ;~ 1359:11C4
cs=0x1359;eip=0x0011c5; 	X(PUSH(si));	// 36648 push    si              ; char * ;~ 1359:11C5
cs=0x1359;eip=0x0011c6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 36649 mov     ax, [bp+arg_0] ;~ 1359:11C6
cs=0x1359;eip=0x0011c9; 	T(OR(ax, ax));	// 36650 or      ax, ax ;~ 1359:11C9
cs=0x1359;eip=0x0011cb; 	R(JZ(loc_22d5c));	// 36651 jz      short loc_22D5C ;~ 1359:11CB
cs=0x1359;eip=0x0011cd; 	T(CMP(ax, 1));	// 36652 cmp     ax, 1 ;~ 1359:11CD
cs=0x1359;eip=0x0011d0; 	R(JNZ(loc_22d45));	// 36653 jnz     short loc_22D45 ;~ 1359:11D0
cs=0x1359;eip=0x0011d2; 	R(JMP(loc_22f76));	// 36654 jmp     loc_22F76 ;~ 1359:11D2
loc_22d45:
	// 6928 
cs=0x1359;eip=0x0011d5; 	T(CMP(ax, 2));	// 36658 cmp     ax, 2 ;~ 1359:11D5
cs=0x1359;eip=0x0011d8; 	R(JNZ(loc_22d4d));	// 36659 jnz     short loc_22D4D ;~ 1359:11D8
cs=0x1359;eip=0x0011da; 	R(JMP(loc_23030));	// 36660 jmp     loc_23030 ;~ 1359:11DA
loc_22d4d:
	// 6929 
cs=0x1359;eip=0x0011dd; 	T(CMP(ax, 3));	// 36664 cmp     ax, 3 ;~ 1359:11DD
cs=0x1359;eip=0x0011e0; 	R(JNZ(loc_22d55));	// 36665 jnz     short loc_22D55 ;~ 1359:11E0
cs=0x1359;eip=0x0011e2; 	R(JMP(loc_236ac));	// 36666 jmp     loc_236AC ;~ 1359:11E2
loc_22d55:
	// 6930 
cs=0x1359;eip=0x0011e5; 	X(POP(si));	// 36670 pop     si ;~ 1359:11E5
cs=0x1359;eip=0x0011e6; 	X(POP(di));	// 36671 pop     di ;~ 1359:11E6
cs=0x1359;eip=0x0011e7; 	T(MOV(sp, bp));	// 36672 mov     sp, bp ;~ 1359:11E7
cs=0x1359;eip=0x0011e9; 	X(POP(bp));	// 36673 pop     bp ;~ 1359:11E9
cs=0x1359;eip=0x0011ea; 	R(RETF(0));	// 36674 retf ;~ 1359:11EA
loc_22d5c:
	// 6931 
cs=0x1359;eip=0x0011ec; 	T(MOV(al, gameconfig));	// 36679 mov     al, gameconfig ;~ 1359:11EC
cs=0x1359;eip=0x0011ef; 	X(MOV(byte_3e916, al));	// 36680 mov     byte_3E916, al ;~ 1359:11EF
cs=0x1359;eip=0x0011f2; 	T(MOV(al, byte_449a5));	// 36681 mov     al, byte_449A5 ;~ 1359:11F2
cs=0x1359;eip=0x0011f5; 	X(MOV(byte_3e917, al));	// 36682 mov     byte_3E917, al ;~ 1359:11F5
cs=0x1359;eip=0x0011f8; 	T(MOV(al, byte_449a6));	// 36683 mov     al, byte_449A6 ;~ 1359:11F8
cs=0x1359;eip=0x0011fb; 	X(MOV(byte_3e918, al));	// 36684 mov     byte_3E918, al ;~ 1359:11FB
cs=0x1359;eip=0x0011fe; 	T(MOV(al, byte_449a7));	// 36685 mov     al, byte_449A7 ;~ 1359:11FE
cs=0x1359;eip=0x001201; 	X(MOV(byte_3e919, al));	// 36686 mov     byte_3E919, al ;~ 1359:1201
cs=0x1359;eip=0x001204; 	T(MOV(al, gameconfig));	// 36687 mov     al, gameconfig ;~ 1359:1204
cs=0x1359;eip=0x001207; 	X(MOV(byte_3e920, al));	// 36688 mov     byte_3E920, al ;~ 1359:1207
cs=0x1359;eip=0x00120a; 	T(MOV(al, byte_449a5));	// 36689 mov     al, byte_449A5 ;~ 1359:120A
cs=0x1359;eip=0x00120d; 	X(MOV(byte_3e921, al));	// 36690 mov     byte_3E921, al ;~ 1359:120D
cs=0x1359;eip=0x001210; 	T(MOV(al, byte_449a6));	// 36691 mov     al, byte_449A6 ;~ 1359:1210
cs=0x1359;eip=0x001213; 	X(MOV(byte_3e922, al));	// 36692 mov     byte_3E922, al ;~ 1359:1213
cs=0x1359;eip=0x001216; 	T(MOV(al, byte_449a7));	// 36693 mov     al, byte_449A7 ;~ 1359:1216
cs=0x1359;eip=0x001219; 	X(MOV(byte_3e923, al));	// 36694 mov     byte_3E923, al ;~ 1359:1219
cs=0x1359;eip=0x00121c; 	T(MOV(ax, offset(dseg,astdaxxxx)));	// 36695 mov     ax, offset aStdaxxxx ;~ 1359:121C
cs=0x1359;eip=0x00121f; 	X(PUSH(ax));	// 36696 push    ax              ; char * ;~ 1359:121F
cs=0x1359;eip=0x001220; 	T(MOV(ax, 3));	// 36697 mov     ax, 3 ;~ 1359:1220
cs=0x1359;eip=0x001223; 	X(PUSH(ax));	// 36698 push    ax              ; int ;~ 1359:1223
cs=0x1359;eip=0x001224; 	R(CALLF(file_load_resource,0));	// 36699 call    file_load_resource ;~ 1359:1224
cs=0x1359;eip=0x001229; 	T(ADD(sp, 4));	// 36700 add     sp, 4 ;~ 1359:1229
cs=0x1359;eip=0x00122c; 	X(MOV(stdaresptr, ax));	// 36701 mov     stdaresptr, ax ;~ 1359:122C
cs=0x1359;eip=0x00122f; 	X(MOV(word_40d7e, dx));	// 36702 mov     word_40D7E, dx ;~ 1359:122F
cs=0x1359;eip=0x001233; 	T(MOV(ax, offset(dseg,astdbxxxx)));	// 36703 mov     ax, offset aStdbxxxx ;~ 1359:1233
cs=0x1359;eip=0x001236; 	X(PUSH(ax));	// 36704 push    ax              ; char * ;~ 1359:1236
cs=0x1359;eip=0x001237; 	T(MOV(ax, 2));	// 36705 mov     ax, 2 ;~ 1359:1237
cs=0x1359;eip=0x00123a; 	X(PUSH(ax));	// 36706 push    ax              ; int ;~ 1359:123A
cs=0x1359;eip=0x00123b; 	R(CALLF(file_load_resource,0));	// 36707 call    file_load_resource ;~ 1359:123B
cs=0x1359;eip=0x001240; 	T(ADD(sp, 4));	// 36708 add     sp, 4 ;~ 1359:1240
cs=0x1359;eip=0x001243; 	X(MOV(stdbresptr, ax));	// 36709 mov     stdbresptr, ax ;~ 1359:1243
cs=0x1359;eip=0x001246; 	X(MOV(word_40d86, dx));	// 36710 mov     word_40D86, dx ;~ 1359:1246
cs=0x1359;eip=0x00124a; 	T(MOV(ax, offset(dseg,whlshapes)));	// 36711 mov     ax, offset whlshapes ;~ 1359:124A
cs=0x1359;eip=0x00124d; 	X(PUSH(ax));	// 36712 push    ax ;~ 1359:124D
cs=0x1359;eip=0x00124e; 	T(MOV(ax, offset(dseg,awhl1whl2whl3ins2gboxins1i)));	// 36713 mov     ax, offset aWhl1whl2whl3ins2gboxins1i ; "whl1whl2whl3ins2gboxins1ins3inm1inm3" ;~ 1359:124E
cs=0x1359;eip=0x001251; 	X(PUSH(ax));	// 36714 push    ax ;~ 1359:1251
cs=0x1359;eip=0x001252; 	X(PUSH(word_40d7e));	// 36715 push    word_40D7E ;~ 1359:1252
cs=0x1359;eip=0x001256; 	X(PUSH(stdaresptr));	// 36716 push    stdaresptr ;~ 1359:1256
cs=0x1359;eip=0x00125a; 	R(CALLF(locate_many_resources,0));	// 36717 call    locate_many_resources ;~ 1359:125A
cs=0x1359;eip=0x00125f; 	T(ADD(sp, 8));	// 36718 add     sp, 8 ;~ 1359:125F
cs=0x1359;eip=0x001262; 	T(MOV(ax, offset(dseg,gnobshapes)));	// 36719 mov     ax, offset gnobshapes ;~ 1359:1262
cs=0x1359;eip=0x001265; 	X(PUSH(ax));	// 36720 push    ax ;~ 1359:1265
cs=0x1359;eip=0x001266; 	T(MOV(ax, offset(dseg,agnobgnabdotdotadot1dot2)));	// 36721 mov     ax, offset aGnobgnabdotDotadot1dot2 ; "gnobgnabdot dotadot1dot2" ;~ 1359:1266
cs=0x1359;eip=0x001269; 	X(PUSH(ax));	// 36722 push    ax ;~ 1359:1269
cs=0x1359;eip=0x00126a; 	X(PUSH(word_40d86));	// 36723 push    word_40D86 ;~ 1359:126A
cs=0x1359;eip=0x00126e; 	X(PUSH(stdbresptr));	// 36724 push    stdbresptr ;~ 1359:126E
cs=0x1359;eip=0x001272; 	R(CALLF(locate_many_resources,0));	// 36725 call    locate_many_resources ;~ 1359:1272
cs=0x1359;eip=0x001277; 	T(ADD(sp, 8));	// 36726 add     sp, 8 ;~ 1359:1277
cs=0x1359;eip=0x00127a; 	T(CMP(word_45f84, 0));	// 36727 cmp     word_45F84, 0 ;~ 1359:127A
cs=0x1359;eip=0x00127f; 	R(JNZ(loc_22e09));	// 36728 jnz     short loc_22E09 ;~ 1359:127F
cs=0x1359;eip=0x001281; 	T(MOV(ax, offset(dseg,digshapes)));	// 36729 mov     ax, offset digshapes ;~ 1359:1281
cs=0x1359;eip=0x001284; 	X(PUSH(ax));	// 36730 push    ax ;~ 1359:1284
cs=0x1359;eip=0x001285; 	T(MOV(ax, offset(dseg,adig0dig1dig2dig3dig4dig5d)));	// 36731 mov     ax, offset aDig0dig1dig2dig3dig4dig5d ; "dig0dig1dig2dig3dig4dig5dig6dig7dig8dig"... ;~ 1359:1285
cs=0x1359;eip=0x001288; 	X(PUSH(ax));	// 36732 push    ax ;~ 1359:1288
cs=0x1359;eip=0x001289; 	X(PUSH(word_40d86));	// 36733 push    word_40D86 ;~ 1359:1289
cs=0x1359;eip=0x00128d; 	X(PUSH(stdbresptr));	// 36734 push    stdbresptr ;~ 1359:128D
cs=0x1359;eip=0x001291; 	R(CALLF(locate_many_resources,0));	// 36735 call    locate_many_resources ;~ 1359:1291
cs=0x1359;eip=0x001296; 	T(ADD(sp, 8));	// 36736 add     sp, 8 ;~ 1359:1296
loc_22e09:
	// 6932 
cs=0x1359;eip=0x001299; 	T(MOV(ax, 0x0F));	// 36739 mov     ax, 0Fh ;~ 1359:1299
cs=0x1359;eip=0x00129c; 	X(PUSH(ax));	// 36740 push    ax ;~ 1359:129C
cs=0x1359;eip=0x00129d; 	T(LES(bx, dword_40dbc));	// 36741 les     bx, dword_40DBC ;~ 1359:129D
cs=0x1359;eip=0x0012a1; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 36742 push    word ptr es:[bx+2] ;~ 1359:12A1
cs=0x1359;eip=0x0012a5; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 36743 mov     ax, es:[bx] ;~ 1359:12A5
cs=0x1359;eip=0x0012a8; 	X(IMUL1_2(video_flag1_is1));	// 36744 imul    video_flag1_is1 ;~ 1359:12A8
cs=0x1359;eip=0x0012ac; 	X(PUSH(ax));	// 36745 push    ax ;~ 1359:12AC
cs=0x1359;eip=0x0012ad; 	R(CALLF(sprite_make_wnd,0));	// 36746 call    sprite_make_wnd ;~ 1359:12AD
cs=0x1359;eip=0x0012b2; 	T(ADD(sp, 6));	// 36747 add     sp, 6 ;~ 1359:12B2
cs=0x1359;eip=0x0012b5; 	X(MOV(*(dw*)(((db*)&whlsprite1)), ax));	// 36748 mov     word ptr whlsprite1, ax ;~ 1359:12B5
cs=0x1359;eip=0x0012b8; 	X(MOV(*(dw*)(((db*)&whlsprite1)+2), dx));	// 36749 mov     word ptr whlsprite1+2, dx ;~ 1359:12B8
cs=0x1359;eip=0x0012bc; 	T(MOV(ax, 0x0F));	// 36750 mov     ax, 0Fh ;~ 1359:12BC
cs=0x1359;eip=0x0012bf; 	X(PUSH(ax));	// 36751 push    ax ;~ 1359:12BF
cs=0x1359;eip=0x0012c0; 	T(LES(bx, dword_40dc0));	// 36752 les     bx, dword_40DC0 ;~ 1359:12C0
cs=0x1359;eip=0x0012c4; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 36753 push    word ptr es:[bx+2] ;~ 1359:12C4
cs=0x1359;eip=0x0012c8; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 36754 mov     ax, es:[bx] ;~ 1359:12C8
cs=0x1359;eip=0x0012cb; 	X(IMUL1_2(video_flag1_is1));	// 36755 imul    video_flag1_is1 ;~ 1359:12CB
cs=0x1359;eip=0x0012cf; 	X(PUSH(ax));	// 36756 push    ax ;~ 1359:12CF
cs=0x1359;eip=0x0012d0; 	R(CALLF(sprite_make_wnd,0));	// 36757 call    sprite_make_wnd ;~ 1359:12D0
cs=0x1359;eip=0x0012d5; 	T(ADD(sp, 6));	// 36758 add     sp, 6 ;~ 1359:12D5
cs=0x1359;eip=0x0012d8; 	X(MOV(*(dw*)(((db*)&whlsprite2)), ax));	// 36759 mov     word ptr whlsprite2, ax ;~ 1359:12D8
cs=0x1359;eip=0x0012db; 	X(MOV(*(dw*)(((db*)&whlsprite2)+2), dx));	// 36760 mov     word ptr whlsprite2+2, dx ;~ 1359:12DB
cs=0x1359;eip=0x0012df; 	T(MOV(ax, 0x0F));	// 36761 mov     ax, 0Fh ;~ 1359:12DF
cs=0x1359;eip=0x0012e2; 	X(PUSH(ax));	// 36762 push    ax ;~ 1359:12E2
cs=0x1359;eip=0x0012e3; 	T(LES(bx, dword_40dc0));	// 36763 les     bx, dword_40DC0 ;~ 1359:12E3
cs=0x1359;eip=0x0012e7; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 36764 push    word ptr es:[bx+2] ;~ 1359:12E7
cs=0x1359;eip=0x0012eb; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 36765 mov     ax, es:[bx] ;~ 1359:12EB
cs=0x1359;eip=0x0012ee; 	X(IMUL1_2(video_flag1_is1));	// 36766 imul    video_flag1_is1 ;~ 1359:12EE
cs=0x1359;eip=0x0012f2; 	X(PUSH(ax));	// 36767 push    ax ;~ 1359:12F2
cs=0x1359;eip=0x0012f3; 	R(CALLF(sprite_make_wnd,0));	// 36768 call    sprite_make_wnd ;~ 1359:12F3
cs=0x1359;eip=0x0012f8; 	T(ADD(sp, 6));	// 36769 add     sp, 6 ;~ 1359:12F8
cs=0x1359;eip=0x0012fb; 	X(MOV(*(dw*)(((db*)&whlsprite3)), ax));	// 36770 mov     word ptr whlsprite3, ax ;~ 1359:12FB
cs=0x1359;eip=0x0012fe; 	X(MOV(*(dw*)(((db*)&whlsprite3)+2), dx));	// 36771 mov     word ptr whlsprite3+2, dx ;~ 1359:12FE
cs=0x1359;eip=0x001302; 	T(MOV(ax, offset(dseg,adash)));	// 36772 mov     ax, offset aDash ; "dash" ;~ 1359:1302
cs=0x1359;eip=0x001305; 	X(PUSH(ax));	// 36773 push    ax ;~ 1359:1305
cs=0x1359;eip=0x001306; 	X(PUSH(word_40d7e));	// 36774 push    word_40D7E ;~ 1359:1306
cs=0x1359;eip=0x00130a; 	X(PUSH(stdaresptr));	// 36775 push    stdaresptr ;~ 1359:130A
cs=0x1359;eip=0x00130e; 	R(CALLF(locate_shape_fatal,0));	// 36776 call    locate_shape_fatal ;~ 1359:130E
cs=0x1359;eip=0x001313; 	T(ADD(sp, 6));	// 36777 add     sp, 6 ;~ 1359:1313
cs=0x1359;eip=0x001316; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 36778 mov     word ptr [bp+var_C], ax ;~ 1359:1316
cs=0x1359;eip=0x001319; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 36779 mov     word ptr [bp+var_C+2], dx ;~ 1359:1319
cs=0x1359;eip=0x00131c; 	X(PUSH(*(dw*)(((db*)&whlsprite3)+2)));	// 36780 push    word ptr whlsprite3+2 ;~ 1359:131C
cs=0x1359;eip=0x001320; 	X(PUSH(*(dw*)(((db*)&whlsprite3))));	// 36781 push    word ptr whlsprite3 ;~ 1359:1320
cs=0x1359;eip=0x001324; 	R(CALLF(sprite_set_1_from_argptr,0));	// 36782 call    sprite_set_1_from_argptr ;~ 1359:1324
cs=0x1359;eip=0x001329; 	T(ADD(sp, 4));	// 36783 add     sp, 4 ;~ 1359:1329
cs=0x1359;eip=0x00132c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_c))));	// 36784 les     bx, [bp+var_C] ;~ 1359:132C
cs=0x1359;eip=0x00132f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 36785 mov     ax, es:[bx+0Ah] ;~ 1359:132F
cs=0x1359;eip=0x001333; 	T(LES(bx, dword_40dc0));	// 36786 les     bx, dword_40DC0 ;~ 1359:1333
cs=0x1359;eip=0x001337; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x0A))));	// 36787 sub     ax, es:[bx+0Ah] ;~ 1359:1337
cs=0x1359;eip=0x00133b; 	X(PUSH(ax));	// 36788 push    ax ;~ 1359:133B
cs=0x1359;eip=0x00133c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_c))));	// 36789 les     bx, [bp+var_C] ;~ 1359:133C
cs=0x1359;eip=0x00133f; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 36790 mov     ax, es:[bx+8] ;~ 1359:133F
cs=0x1359;eip=0x001343; 	T(LES(bx, dword_40dc0));	// 36791 les     bx, dword_40DC0 ;~ 1359:1343
cs=0x1359;eip=0x001347; 	T(SUB(ax, *(dw*)(raddr(es,bx+8))));	// 36792 sub     ax, es:[bx+8] ;~ 1359:1347
cs=0x1359;eip=0x00134b; 	X(PUSH(ax));	// 36793 push    ax ;~ 1359:134B
cs=0x1359;eip=0x00134c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_c+2)))));	// 36794 push    word ptr [bp+var_C+2] ;~ 1359:134C
cs=0x1359;eip=0x00134f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_c)))));	// 36795 push    word ptr [bp+var_C] ;~ 1359:134F
cs=0x1359;eip=0x001352; 	R(CALLF(shape2d_op_unk2,0));	// 36796 call    shape2d_op_unk2 ;~ 1359:1352
cs=0x1359;eip=0x001357; 	T(ADD(sp, 8));	// 36797 add     sp, 8 ;~ 1359:1357
cs=0x1359;eip=0x00135a; 	R(CALLF(sprite_copy_2_to_1,0));	// 36798 call    sprite_copy_2_to_1 ;~ 1359:135A
cs=0x1359;eip=0x00135f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_c))));	// 36799 les     bx, [bp+var_C] ;~ 1359:135F
cs=0x1359;eip=0x001362; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 36800 mov     ax, es:[bx+0Ah] ;~ 1359:1362
cs=0x1359;eip=0x001366; 	X(MOV(dashbmp_y, ax));	// 36801 mov     dashbmp_y, ax ;~ 1359:1366
cs=0x1359;eip=0x001369; 	T(MOV(ax, offset(dseg,aroof)));	// 36802 mov     ax, offset aRoof ; "roof" ;~ 1359:1369
cs=0x1359;eip=0x00136c; 	X(PUSH(ax));	// 36803 push    ax ;~ 1359:136C
cs=0x1359;eip=0x00136d; 	X(PUSH(word_40d7e));	// 36804 push    word_40D7E ;~ 1359:136D
cs=0x1359;eip=0x001371; 	X(PUSH(stdaresptr));	// 36805 push    stdaresptr ;~ 1359:1371
cs=0x1359;eip=0x001375; 	R(CALLF(locate_shape_nofatal,0));	// 36806 call    locate_shape_nofatal ;~ 1359:1375
cs=0x1359;eip=0x00137a; 	T(ADD(sp, 6));	// 36807 add     sp, 6 ;~ 1359:137A
cs=0x1359;eip=0x00137d; 	T(OR(dx, ax));	// 36808 or      dx, ax ;~ 1359:137D
cs=0x1359;eip=0x00137f; 	R(JZ(loc_22f12));	// 36809 jz      short loc_22F12 ;~ 1359:137F
cs=0x1359;eip=0x001381; 	T(MOV(ax, offset(dseg,aroof_0)));	// 36810 mov     ax, offset aRoof_0 ; "roof" ;~ 1359:1381
cs=0x1359;eip=0x001384; 	X(PUSH(ax));	// 36811 push    ax ;~ 1359:1384
cs=0x1359;eip=0x001385; 	X(PUSH(word_40d7e));	// 36812 push    word_40D7E ;~ 1359:1385
cs=0x1359;eip=0x001389; 	X(PUSH(stdaresptr));	// 36813 push    stdaresptr ;~ 1359:1389
cs=0x1359;eip=0x00138d; 	R(CALLF(locate_shape_fatal,0));	// 36814 call    locate_shape_fatal ;~ 1359:138D
cs=0x1359;eip=0x001392; 	T(ADD(sp, 6));	// 36815 add     sp, 6 ;~ 1359:1392
cs=0x1359;eip=0x001395; 	T(MOV(bx, ax));	// 36816 mov     bx, ax ;~ 1359:1395
cs=0x1359;eip=0x001397; 	T(MOV(es, dx));	// 36817 mov     es, dx ;~ 1359:1397
cs=0x1359;eip=0x001399; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 36818 mov     ax, es:[bx+2] ;~ 1359:1399
cs=0x1359;eip=0x00139d; 	X(MOV(roofbmpheight, ax));	// 36819 mov     roofbmpheight, ax ;~ 1359:139D
cs=0x1359;eip=0x0013a0; 	R(JMP(loc_22f18));	// 36820 jmp     short loc_22F18 ;~ 1359:13A0
loc_22f12:
	// 6933 
cs=0x1359;eip=0x0013a2; 	X(MOV(roofbmpheight, 0));	// 36824 mov     roofbmpheight, 0 ;~ 1359:13A2
loc_22f18:
	// 6934 
cs=0x1359;eip=0x0013a8; 	T(MOV(ax, offset(dseg,adast)));	// 36827 mov     ax, offset aDast ; "dast" ;~ 1359:13A8
cs=0x1359;eip=0x0013ab; 	X(PUSH(ax));	// 36828 push    ax ;~ 1359:13AB
cs=0x1359;eip=0x0013ac; 	X(PUSH(word_40d7e));	// 36829 push    word_40D7E ;~ 1359:13AC
cs=0x1359;eip=0x0013b0; 	X(PUSH(stdaresptr));	// 36830 push    stdaresptr ;~ 1359:13B0
cs=0x1359;eip=0x0013b4; 	R(CALLF(locate_shape_nofatal,0));	// 36831 call    locate_shape_nofatal ;~ 1359:13B4
cs=0x1359;eip=0x0013b9; 	T(ADD(sp, 6));	// 36832 add     sp, 6 ;~ 1359:13B9
cs=0x1359;eip=0x0013bc; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 36833 mov     word ptr [bp+var_C], ax ;~ 1359:13BC
cs=0x1359;eip=0x0013bf; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 36834 mov     word ptr [bp+var_C+2], dx ;~ 1359:13BF
cs=0x1359;eip=0x0013c2; 	T(OR(ax, dx));	// 36835 or      ax, dx ;~ 1359:13C2
cs=0x1359;eip=0x0013c4; 	R(JZ(loc_22f6a));	// 36836 jz      short loc_22F6A ;~ 1359:13C4
cs=0x1359;eip=0x0013c6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_c))));	// 36837 les     bx, [bp+var_C] ;~ 1359:13C6
cs=0x1359;eip=0x0013c9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 36838 mov     ax, es:[bx+0Ah] ;~ 1359:13C9
cs=0x1359;eip=0x0013cd; 	X(MOV(dastbmp_y, ax));	// 36839 mov     dastbmp_y, ax ;~ 1359:13CD
cs=0x1359;eip=0x0013d0; 	T(MOV(ax, bx));	// 36840 mov     ax, bx ;~ 1359:13D0
cs=0x1359;eip=0x0013d2; 	X(MOV(dastbmp_y2, ax));	// 36841 mov     dastbmp_y2, ax ;~ 1359:13D2
cs=0x1359;eip=0x0013d5; 	X(MOV(dastseg, dx));	// 36842 mov     dastseg, dx ;~ 1359:13D5
cs=0x1359;eip=0x0013d9; 	T(MOV(ax, offset(dseg,adasm)));	// 36843 mov     ax, offset aDasm ; "dasm" ;~ 1359:13D9
cs=0x1359;eip=0x0013dc; 	X(PUSH(ax));	// 36844 push    ax ;~ 1359:13DC
cs=0x1359;eip=0x0013dd; 	X(PUSH(word_40d7e));	// 36845 push    word_40D7E ;~ 1359:13DD
cs=0x1359;eip=0x0013e1; 	X(PUSH(stdaresptr));	// 36846 push    stdaresptr ;~ 1359:13E1
cs=0x1359;eip=0x0013e5; 	R(CALLF(locate_shape_fatal,0));	// 36847 call    locate_shape_fatal ;~ 1359:13E5
cs=0x1359;eip=0x0013ea; 	T(ADD(sp, 6));	// 36848 add     sp, 6 ;~ 1359:13EA
cs=0x1359;eip=0x0013ed; 	X(MOV(dasmshapeptr, ax));	// 36849 mov     dasmshapeptr, ax ;~ 1359:13ED
cs=0x1359;eip=0x0013f0; 	X(MOV(word_454a2, dx));	// 36850 mov     word_454A2, dx ;~ 1359:13F0
cs=0x1359;eip=0x0013f4; 	X(POP(si));	// 36851 pop     si ;~ 1359:13F4
cs=0x1359;eip=0x0013f5; 	X(POP(di));	// 36852 pop     di ;~ 1359:13F5
cs=0x1359;eip=0x0013f6; 	T(MOV(sp, bp));	// 36853 mov     sp, bp ;~ 1359:13F6
cs=0x1359;eip=0x0013f8; 	X(POP(bp));	// 36854 pop     bp ;~ 1359:13F8
cs=0x1359;eip=0x0013f9; 	R(RETF(0));	// 36855 retf ;~ 1359:13F9
loc_22f6a:
	// 6935 
cs=0x1359;eip=0x0013fa; 	X(MOV(dastbmp_y, 0));	// 36859 mov     dastbmp_y, 0 ;~ 1359:13FA
cs=0x1359;eip=0x001400; 	X(POP(si));	// 36860 pop     si ;~ 1359:1400
cs=0x1359;eip=0x001401; 	X(POP(di));	// 36861 pop     di ;~ 1359:1401
cs=0x1359;eip=0x001402; 	T(MOV(sp, bp));	// 36862 mov     sp, bp ;~ 1359:1402
cs=0x1359;eip=0x001404; 	X(POP(bp));	// 36863 pop     bp ;~ 1359:1404
cs=0x1359;eip=0x001405; 	R(RETF(0));	// 36864 retf ;~ 1359:1405
loc_22f76:
	// 6936 
cs=0x1359;eip=0x001406; 	R(CALLF(mouse_draw_opaque_check,0));	// 36868 call    mouse_draw_opaque_check ;~ 1359:1406
cs=0x1359;eip=0x00140b; 	T(MOV(ax, offset(dseg,aroof_1)));	// 36869 mov     ax, offset aRoof_1 ; "roof" ;~ 1359:140B
cs=0x1359;eip=0x00140e; 	X(PUSH(ax));	// 36870 push    ax ;~ 1359:140E
cs=0x1359;eip=0x00140f; 	X(PUSH(word_40d7e));	// 36871 push    word_40D7E ;~ 1359:140F
cs=0x1359;eip=0x001413; 	X(PUSH(stdaresptr));	// 36872 push    stdaresptr ;~ 1359:1413
cs=0x1359;eip=0x001417; 	R(CALLF(locate_shape_nofatal,0));	// 36873 call    locate_shape_nofatal ;~ 1359:1417
cs=0x1359;eip=0x00141c; 	T(ADD(sp, 6));	// 36874 add     sp, 6 ;~ 1359:141C
cs=0x1359;eip=0x00141f; 	T(OR(dx, ax));	// 36875 or      dx, ax ;~ 1359:141F
cs=0x1359;eip=0x001421; 	R(JZ(loc_22fb1));	// 36876 jz      short loc_22FB1 ;~ 1359:1421
cs=0x1359;eip=0x001423; 	T(MOV(ax, offset(dseg,aroof_2)));	// 36877 mov     ax, offset aRoof_2 ; "roof" ;~ 1359:1423
cs=0x1359;eip=0x001426; 	X(PUSH(ax));	// 36878 push    ax ;~ 1359:1426
cs=0x1359;eip=0x001427; 	X(PUSH(word_40d7e));	// 36879 push    word_40D7E ;~ 1359:1427
cs=0x1359;eip=0x00142b; 	X(PUSH(stdaresptr));	// 36880 push    stdaresptr ;~ 1359:142B
cs=0x1359;eip=0x00142f; 	R(CALLF(locate_shape_fatal,0));	// 36881 call    locate_shape_fatal ;~ 1359:142F
cs=0x1359;eip=0x001434; 	T(ADD(sp, 6));	// 36882 add     sp, 6 ;~ 1359:1434
cs=0x1359;eip=0x001437; 	X(PUSH(dx));	// 36883 push    dx ;~ 1359:1437
cs=0x1359;eip=0x001438; 	X(PUSH(ax));	// 36884 push    ax ;~ 1359:1438
cs=0x1359;eip=0x001439; 	R(CALLF(shape2d_op_unk,0));	// 36885 call    shape2d_op_unk ;~ 1359:1439
cs=0x1359;eip=0x00143e; 	T(ADD(sp, 4));	// 36886 add     sp, 4 ;~ 1359:143E
loc_22fb1:
	// 6937 
cs=0x1359;eip=0x001441; 	T(MOV(ax, offset(dseg,adash_0)));	// 36889 mov     ax, offset aDash_0 ; "dash" ;~ 1359:1441
cs=0x1359;eip=0x001444; 	X(PUSH(ax));	// 36890 push    ax ;~ 1359:1444
cs=0x1359;eip=0x001445; 	X(PUSH(word_40d7e));	// 36891 push    word_40D7E ;~ 1359:1445
cs=0x1359;eip=0x001449; 	X(PUSH(stdaresptr));	// 36892 push    stdaresptr ;~ 1359:1449
cs=0x1359;eip=0x00144d; 	R(CALLF(locate_shape_fatal,0));	// 36893 call    locate_shape_fatal ;~ 1359:144D
cs=0x1359;eip=0x001452; 	T(ADD(sp, 6));	// 36894 add     sp, 6 ;~ 1359:1452
cs=0x1359;eip=0x001455; 	X(PUSH(dx));	// 36895 push    dx ;~ 1359:1455
cs=0x1359;eip=0x001456; 	X(PUSH(ax));	// 36896 push    ax ;~ 1359:1456
cs=0x1359;eip=0x001457; 	R(CALLF(shape2d_op_unk3,0));	// 36897 call    shape2d_op_unk3 ;~ 1359:1457
cs=0x1359;eip=0x00145c; 	T(ADD(sp, 4));	// 36898 add     sp, 4 ;~ 1359:145C
cs=0x1359;eip=0x00145f; 	X(PUSH(word_40db6));	// 36899 push    word_40DB6 ;~ 1359:145F
cs=0x1359;eip=0x001463; 	X(PUSH(word_40db4));	// 36900 push    word_40DB4 ;~ 1359:1463
cs=0x1359;eip=0x001467; 	R(CALLF(shape2d_op_unk3,0));	// 36901 call    shape2d_op_unk3 ;~ 1359:1467
cs=0x1359;eip=0x00146c; 	T(ADD(sp, 4));	// 36902 add     sp, 4 ;~ 1359:146C
cs=0x1359;eip=0x00146f; 	R(CALLF(mouse_draw_transparent_check,0));	// 36903 call    mouse_draw_transparent_check ;~ 1359:146F
cs=0x1359;eip=0x001474; 	T(SUB(si, si));	// 36904 sub     si, si ;~ 1359:1474
cs=0x1359;eip=0x001476; 	T(MOV(al, byte_4432a));	// 36905 mov     al, byte_4432A ;~ 1359:1476
cs=0x1359;eip=0x001479; 	T(CBW);	// 36906 cbw ;~ 1359:1479
cs=0x1359;eip=0x00147a; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 36907 mov     [bp+var_1E], ax ;~ 1359:147A
cs=0x1359;eip=0x00147d; 	T(MOV(bx, ax));	// 36908 mov     bx, ax ;~ 1359:147D
cs=0x1359;eip=0x00147f; 	T(SUB(al, al));	// 36909 sub     al, al ;~ 1359:147F
cs=0x1359;eip=0x001481; 	X(MOV(*((&byte_449d8)+bx), al));	// 36910 mov     byte_449D8[bx], al ;~ 1359:1481
cs=0x1359;eip=0x001485; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_1e))));	// 36911 mov     bx, [bp+var_1E] ;~ 1359:1485
cs=0x1359;eip=0x001488; 	X(MOV(*((&byte_40dfa)+bx), al));	// 36912 mov     byte_40DFA[bx], al ;~ 1359:1488
cs=0x1359;eip=0x00148c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 36913 mov     ax, [bp+var_1E] ;~ 1359:148C
cs=0x1359;eip=0x00148f; 	T(SHL(ax, 1));	// 36914 shl     ax, 1 ;~ 1359:148F
cs=0x1359;eip=0x001491; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 36915 mov     [bp+var_20], ax ;~ 1359:1491
cs=0x1359;eip=0x001494; 	T(MOV(bx, ax));	// 36916 mov     bx, ax ;~ 1359:1494
cs=0x1359;eip=0x001496; 	X(MOV(*(dw*)(((db*)&word_40df6)+bx), si));	// 36917 mov     word_40DF6[bx], si ;~ 1359:1496
cs=0x1359;eip=0x00149a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_1e))));	// 36918 mov     bx, [bp+var_1E] ;~ 1359:149A
cs=0x1359;eip=0x00149d; 	T(SUB(al, al));	// 36919 sub     al, al ;~ 1359:149D
cs=0x1359;eip=0x00149f; 	X(MOV(*((&byte_40df0)+bx), al));	// 36920 mov     byte_40DF0[bx], al ;~ 1359:149F
cs=0x1359;eip=0x0014a3; 	T(DEC(si));	// 36921 dec     si ;~ 1359:14A3
cs=0x1359;eip=0x0014a4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_20))));	// 36922 mov     bx, [bp+var_20] ;~ 1359:14A4
cs=0x1359;eip=0x0014a7; 	X(MOV(*(dw*)(((db*)&word_40e00)+bx), si));	// 36923 mov     word_40E00[bx], si ;~ 1359:14A7
cs=0x1359;eip=0x0014ab; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_20))));	// 36924 mov     bx, [bp+var_20] ;~ 1359:14AB
cs=0x1359;eip=0x0014ae; 	X(MOV(*(dw*)(((db*)&word_40d78)+bx), si));	// 36925 mov     word_40D78[bx], si ;~ 1359:14AE
cs=0x1359;eip=0x0014b2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_20))));	// 36926 mov     bx, [bp+var_20] ;~ 1359:14B2
cs=0x1359;eip=0x0014b5; 	X(MOV(*(dw*)(((db*)&word_40d6c)+bx), si));	// 36927 mov     word_40D6C[bx], si ;~ 1359:14B5
cs=0x1359;eip=0x0014b9; 	X(POP(si));	// 36928 pop     si ;~ 1359:14B9
cs=0x1359;eip=0x0014ba; 	X(POP(di));	// 36929 pop     di ;~ 1359:14BA
cs=0x1359;eip=0x0014bb; 	T(MOV(sp, bp));	// 36930 mov     sp, bp ;~ 1359:14BB
cs=0x1359;eip=0x0014bd; 	X(POP(bp));	// 36931 pop     bp ;~ 1359:14BD
cs=0x1359;eip=0x0014be; 	R(RETF(0));	// 36932 retf ;~ 1359:14BE
loc_23030:
	// 6938 
cs=0x1359;eip=0x0014c0; 	T(MOV(al, byte_446b1));	// 36937 mov     al, byte_446B1 ;~ 1359:14C0
cs=0x1359;eip=0x0014c3; 	T(CBW);	// 36938 cbw ;~ 1359:14C3
cs=0x1359;eip=0x0014c4; 	T(MOV(cx, ax));	// 36939 mov     cx, ax ;~ 1359:14C4
cs=0x1359;eip=0x0014c6; 	T(MOV(al, byte_446b0));	// 36940 mov     al, byte_446B0 ;~ 1359:14C6
cs=0x1359;eip=0x0014c9; 	T(CBW);	// 36941 cbw ;~ 1359:14C9
cs=0x1359;eip=0x0014ca; 	T(OR(ax, cx));	// 36942 or      ax, cx ;~ 1359:14CA
cs=0x1359;eip=0x0014cc; 	R(JNZ(loc_2309a));	// 36943 jnz     short loc_2309A ;~ 1359:14CC
cs=0x1359;eip=0x0014ce; 	T(MOV(al, byte_4432a));	// 36944 mov     al, byte_4432A ;~ 1359:14CE
cs=0x1359;eip=0x0014d1; 	T(CBW);	// 36945 cbw ;~ 1359:14D1
cs=0x1359;eip=0x0014d2; 	T(MOV(bx, ax));	// 36946 mov     bx, ax ;~ 1359:14D2
cs=0x1359;eip=0x0014d4; 	T(CMP(*((&byte_40dfa)+bx), 0));	// 36947 cmp     byte_40DFA[bx], 0 ;~ 1359:14D4
cs=0x1359;eip=0x0014d9; 	R(JZ(loc_2309a));	// 36948 jz      short loc_2309A ;~ 1359:14D9
cs=0x1359;eip=0x0014db; 	T(CMP(video_flag5_is0, 0));	// 36949 cmp     video_flag5_is0, 0 ;~ 1359:14DB
cs=0x1359;eip=0x0014e0; 	R(JNZ(loc_23057));	// 36950 jnz     short loc_23057 ;~ 1359:14E0
cs=0x1359;eip=0x0014e2; 	R(CALLF(mouse_draw_opaque_check,0));	// 36951 call    mouse_draw_opaque_check ;~ 1359:14E2
loc_23057:
	// 6939 
cs=0x1359;eip=0x0014e7; 	X(PUSH(height_above_replaybar));	// 36954 push    height_above_replaybar ;~ 1359:14E7
cs=0x1359;eip=0x0014eb; 	T(SUB(ax, ax));	// 36955 sub     ax, ax ;~ 1359:14EB
cs=0x1359;eip=0x0014ed; 	X(PUSH(ax));	// 36956 push    ax ;~ 1359:14ED
cs=0x1359;eip=0x0014ee; 	T(MOV(ax, 0x140));	// 36957 mov     ax, 140h ;~ 1359:14EE
cs=0x1359;eip=0x0014f1; 	X(PUSH(ax));	// 36958 push    ax ;~ 1359:14F1
cs=0x1359;eip=0x0014f2; 	T(SUB(ax, ax));	// 36959 sub     ax, ax ;~ 1359:14F2
cs=0x1359;eip=0x0014f4; 	X(PUSH(ax));	// 36960 push    ax ;~ 1359:14F4
cs=0x1359;eip=0x0014f5; 	R(CALLF(sprite_set_1_size,0));	// 36961 call    sprite_set_1_size ;~ 1359:14F5
cs=0x1359;eip=0x0014fa; 	T(ADD(sp, 8));	// 36962 add     sp, 8 ;~ 1359:14FA
cs=0x1359;eip=0x0014fd; 	T(LES(bx, dword_40dc0));	// 36963 les     bx, dword_40DC0 ;~ 1359:14FD
cs=0x1359;eip=0x001501; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 36964 push    word ptr es:[bx+0Ah] ;~ 1359:1501
cs=0x1359;eip=0x001505; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 36965 push    word ptr es:[bx+8] ;~ 1359:1505
cs=0x1359;eip=0x001509; 	T(LES(bx, whlsprite3));	// 36966 les     bx, whlsprite3 ;~ 1359:1509
cs=0x1359;eip=0x00150d; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 36967 push    word ptr es:[bx+2] ;~ 1359:150D
cs=0x1359;eip=0x001511; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 36968 push    word ptr es:[bx] ;~ 1359:1511
cs=0x1359;eip=0x001514; 	R(CALLF(sprite_putimage_and_alt,0));	// 36969 call    sprite_putimage_and_alt ;~ 1359:1514
cs=0x1359;eip=0x001519; 	T(ADD(sp, 8));	// 36970 add     sp, 8 ;~ 1359:1519
cs=0x1359;eip=0x00151c; 	T(MOV(al, byte_4432a));	// 36971 mov     al, byte_4432A ;~ 1359:151C
cs=0x1359;eip=0x00151f; 	T(CBW);	// 36972 cbw ;~ 1359:151F
cs=0x1359;eip=0x001520; 	T(MOV(bx, ax));	// 36973 mov     bx, ax ;~ 1359:1520
cs=0x1359;eip=0x001522; 	X(MOV(*((&byte_40dfa)+bx), 0));	// 36974 mov     byte_40DFA[bx], 0 ;~ 1359:1522
cs=0x1359;eip=0x001527; 	R(JMP(loc_2319d));	// 36975 jmp     loc_2319D ;~ 1359:1527
loc_2309a:
	// 6940 
cs=0x1359;eip=0x00152a; 	T(MOV(al, byte_4432a));	// 36980 mov     al, byte_4432A ;~ 1359:152A
cs=0x1359;eip=0x00152d; 	T(CBW);	// 36981 cbw ;~ 1359:152D
cs=0x1359;eip=0x00152e; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 36982 mov     [bp+var_20], ax ;~ 1359:152E
cs=0x1359;eip=0x001531; 	T(MOV(bx, ax));	// 36983 mov     bx, ax ;~ 1359:1531
cs=0x1359;eip=0x001533; 	T(MOV(al, byte_446b0));	// 36984 mov     al, byte_446B0 ;~ 1359:1533
cs=0x1359;eip=0x001536; 	T(CMP(*((&byte_40dfa)+bx), al));	// 36985 cmp     byte_40DFA[bx], al ;~ 1359:1536
cs=0x1359;eip=0x00153a; 	R(JNZ(loc_230de));	// 36986 jnz     short loc_230DE ;~ 1359:153A
cs=0x1359;eip=0x00153c; 	T(MOV(ax, bx));	// 36987 mov     ax, bx ;~ 1359:153C
cs=0x1359;eip=0x00153e; 	T(SHL(ax, 1));	// 36988 shl     ax, 1 ;~ 1359:153E
cs=0x1359;eip=0x001540; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 36989 mov     [bp+var_1E], ax ;~ 1359:1540
cs=0x1359;eip=0x001543; 	T(MOV(bx, ax));	// 36990 mov     bx, ax ;~ 1359:1543
cs=0x1359;eip=0x001545; 	T(MOV(ax, word_4461a));	// 36991 mov     ax, word_4461A ;~ 1359:1545
cs=0x1359;eip=0x001548; 	T(CMP(*(dw*)(((db*)&word_40d70)+bx), ax));	// 36992 cmp     word_40D70[bx], ax ;~ 1359:1548
cs=0x1359;eip=0x00154c; 	R(JNZ(loc_230de));	// 36993 jnz     short loc_230DE ;~ 1359:154C
cs=0x1359;eip=0x00154e; 	T(MOV(ax, word_4461e));	// 36994 mov     ax, word_4461E ;~ 1359:154E
cs=0x1359;eip=0x001551; 	T(CMP(*(dw*)(((db*)&word_40d74)+bx), ax));	// 36995 cmp     word_40D74[bx], ax ;~ 1359:1551
cs=0x1359;eip=0x001555; 	R(JNZ(loc_230de));	// 36996 jnz     short loc_230DE ;~ 1359:1555
cs=0x1359;eip=0x001557; 	T(CMP(byte_446b1, 0));	// 36997 cmp     byte_446B1, 0 ;~ 1359:1557
cs=0x1359;eip=0x00155c; 	R(JNZ(loc_230d1));	// 36998 jnz     short loc_230D1 ;~ 1359:155C
cs=0x1359;eip=0x00155e; 	R(JMP(loc_2319d));	// 36999 jmp     loc_2319D ;~ 1359:155E
loc_230d1:
	// 6941 
cs=0x1359;eip=0x001561; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_20))));	// 37003 mov     bx, [bp+var_20] ;~ 1359:1561
cs=0x1359;eip=0x001564; 	T(CMP(*((&byte_40dfa)+bx), 0));	// 37004 cmp     byte_40DFA[bx], 0 ;~ 1359:1564
cs=0x1359;eip=0x001569; 	R(JZ(loc_230de));	// 37005 jz      short loc_230DE ;~ 1359:1569
cs=0x1359;eip=0x00156b; 	R(JMP(loc_2319d));	// 37006 jmp     loc_2319D ;~ 1359:156B
loc_230de:
	// 6942 
cs=0x1359;eip=0x00156e; 	X(PUSH(*(dw*)(((db*)&whlsprite2)+2)));	// 37011 push    word ptr whlsprite2+2 ;~ 1359:156E
cs=0x1359;eip=0x001572; 	X(PUSH(*(dw*)(((db*)&whlsprite2))));	// 37012 push    word ptr whlsprite2 ;~ 1359:1572
cs=0x1359;eip=0x001576; 	R(CALLF(sprite_set_1_from_argptr,0));	// 37013 call    sprite_set_1_from_argptr ;~ 1359:1576
cs=0x1359;eip=0x00157b; 	T(ADD(sp, 4));	// 37014 add     sp, 4 ;~ 1359:157B
cs=0x1359;eip=0x00157e; 	T(MOV(al, byte_4432a));	// 37015 mov     al, byte_4432A ;~ 1359:157E
cs=0x1359;eip=0x001581; 	T(CBW);	// 37016 cbw ;~ 1359:1581
cs=0x1359;eip=0x001582; 	T(MOV(bx, ax));	// 37017 mov     bx, ax ;~ 1359:1582
cs=0x1359;eip=0x001584; 	X(MOV(*((&byte_40dfa)+bx), 1));	// 37018 mov     byte_40DFA[bx], 1 ;~ 1359:1584
cs=0x1359;eip=0x001589; 	T(SUB(ax, ax));	// 37019 sub     ax, ax ;~ 1359:1589
cs=0x1359;eip=0x00158b; 	X(PUSH(ax));	// 37020 push    ax ;~ 1359:158B
cs=0x1359;eip=0x00158c; 	X(PUSH(ax));	// 37021 push    ax ;~ 1359:158C
cs=0x1359;eip=0x00158d; 	X(PUSH(*(dw*)(((db*)&dword_40dc0)+2)));	// 37022 push    word ptr dword_40DC0+2 ;~ 1359:158D
cs=0x1359;eip=0x001591; 	X(PUSH(*(dw*)(((db*)&dword_40dc0))));	// 37023 push    word ptr dword_40DC0 ;~ 1359:1591
cs=0x1359;eip=0x001595; 	R(CALLF(shape2d_op_unk2,0));	// 37024 call    shape2d_op_unk2 ;~ 1359:1595
cs=0x1359;eip=0x00159a; 	T(ADD(sp, 8));	// 37025 add     sp, 8 ;~ 1359:159A
cs=0x1359;eip=0x00159d; 	T(MOV(si, word_4461a));	// 37026 mov     si, word_4461A ;~ 1359:159D
cs=0x1359;eip=0x0015a1; 	T(MOV(di, word_4461e));	// 37027 mov     di, word_4461E ;~ 1359:15A1
cs=0x1359;eip=0x0015a5; 	T(MOV(al, byte_4432a));	// 37028 mov     al, byte_4432A ;~ 1359:15A5
cs=0x1359;eip=0x0015a8; 	T(CBW);	// 37029 cbw ;~ 1359:15A8
cs=0x1359;eip=0x0015a9; 	T(SHL(ax, 1));	// 37030 shl     ax, 1 ;~ 1359:15A9
cs=0x1359;eip=0x0015ab; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 37031 mov     [bp+var_20], ax ;~ 1359:15AB
cs=0x1359;eip=0x0015ae; 	T(MOV(bx, ax));	// 37032 mov     bx, ax ;~ 1359:15AE
cs=0x1359;eip=0x0015b0; 	X(MOV(*(dw*)(((db*)&word_40d70)+bx), si));	// 37033 mov     word_40D70[bx], si ;~ 1359:15B0
cs=0x1359;eip=0x0015b4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_20))));	// 37034 mov     bx, [bp+var_20] ;~ 1359:15B4
cs=0x1359;eip=0x0015b7; 	X(MOV(*(dw*)(((db*)&word_40d74)+bx), di));	// 37035 mov     word_40D74[bx], di ;~ 1359:15B7
cs=0x1359;eip=0x0015bb; 	X(PUSH(di));	// 37036 push    di ;~ 1359:15BB
cs=0x1359;eip=0x0015bc; 	X(PUSH(si));	// 37037 push    si ;~ 1359:15BC
cs=0x1359;eip=0x0015bd; 	X(PUSH(word_40dda));	// 37038 push    word_40DDA ;~ 1359:15BD
cs=0x1359;eip=0x0015c1; 	X(PUSH(word_40dd8));	// 37039 push    word_40DD8 ;~ 1359:15C1
cs=0x1359;eip=0x0015c5; 	R(CALLF(sprite_putimage_and_alt2,0));	// 37040 call    sprite_putimage_and_alt2 ;~ 1359:15C5
cs=0x1359;eip=0x0015ca; 	T(ADD(sp, 8));	// 37041 add     sp, 8 ;~ 1359:15CA
cs=0x1359;eip=0x0015cd; 	X(PUSH(di));	// 37042 push    di ;~ 1359:15CD
cs=0x1359;eip=0x0015ce; 	X(PUSH(si));	// 37043 push    si ;~ 1359:15CE
cs=0x1359;eip=0x0015cf; 	X(PUSH(word_40dd6));	// 37044 push    word_40DD6 ;~ 1359:15CF
cs=0x1359;eip=0x0015d3; 	X(PUSH(gnobshapes));	// 37045 push    gnobshapes ;~ 1359:15D3
cs=0x1359;eip=0x0015d7; 	R(CALLF(sprite_putimage_or_alt,0));	// 37046 call    sprite_putimage_or_alt ;~ 1359:15D7
cs=0x1359;eip=0x0015dc; 	T(ADD(sp, 8));	// 37047 add     sp, 8 ;~ 1359:15DC
cs=0x1359;eip=0x0015df; 	T(CMP(video_flag5_is0, 0));	// 37048 cmp     video_flag5_is0, 0 ;~ 1359:15DF
cs=0x1359;eip=0x0015e4; 	R(JZ(loc_2315e));	// 37049 jz      short loc_2315E ;~ 1359:15E4
cs=0x1359;eip=0x0015e6; 	R(CALLF(setup_mcgawnd2,0));	// 37050 call    setup_mcgawnd2 ;~ 1359:15E6
cs=0x1359;eip=0x0015eb; 	R(JMP(loc_23168));	// 37051 jmp     short loc_23168 ;~ 1359:15EB
loc_2315e:
	// 6943 
cs=0x1359;eip=0x0015ee; 	R(CALLF(sprite_copy_2_to_1_2,0));	// 37056 call    sprite_copy_2_to_1_2 ;~ 1359:15EE
cs=0x1359;eip=0x0015f3; 	R(CALLF(mouse_draw_opaque_check,0));	// 37057 call    mouse_draw_opaque_check ;~ 1359:15F3
loc_23168:
	// 6944 
cs=0x1359;eip=0x0015f8; 	X(PUSH(height_above_replaybar));	// 37060 push    height_above_replaybar ;~ 1359:15F8
cs=0x1359;eip=0x0015fc; 	T(SUB(ax, ax));	// 37061 sub     ax, ax ;~ 1359:15FC
cs=0x1359;eip=0x0015fe; 	X(PUSH(ax));	// 37062 push    ax ;~ 1359:15FE
cs=0x1359;eip=0x0015ff; 	T(MOV(ax, 0x140));	// 37063 mov     ax, 140h ;~ 1359:15FF
cs=0x1359;eip=0x001602; 	X(PUSH(ax));	// 37064 push    ax ;~ 1359:1602
cs=0x1359;eip=0x001603; 	T(SUB(ax, ax));	// 37065 sub     ax, ax ;~ 1359:1603
cs=0x1359;eip=0x001605; 	X(PUSH(ax));	// 37066 push    ax ;~ 1359:1605
cs=0x1359;eip=0x001606; 	R(CALLF(sprite_set_1_size,0));	// 37067 call    sprite_set_1_size ;~ 1359:1606
cs=0x1359;eip=0x00160b; 	T(ADD(sp, 8));	// 37068 add     sp, 8 ;~ 1359:160B
cs=0x1359;eip=0x00160e; 	T(LES(bx, dword_40dc0));	// 37069 les     bx, dword_40DC0 ;~ 1359:160E
cs=0x1359;eip=0x001612; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 37070 push    word ptr es:[bx+0Ah] ;~ 1359:1612
cs=0x1359;eip=0x001616; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 37071 push    word ptr es:[bx+8] ;~ 1359:1616
cs=0x1359;eip=0x00161a; 	T(LES(bx, whlsprite2));	// 37072 les     bx, whlsprite2 ;~ 1359:161A
cs=0x1359;eip=0x00161e; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 37073 push    word ptr es:[bx+2] ;~ 1359:161E
cs=0x1359;eip=0x001622; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 37074 push    word ptr es:[bx] ;~ 1359:1622
cs=0x1359;eip=0x001625; 	R(CALLF(sprite_putimage_and_alt,0));	// 37075 call    sprite_putimage_and_alt ;~ 1359:1625
cs=0x1359;eip=0x00162a; 	T(ADD(sp, 8));	// 37076 add     sp, 8 ;~ 1359:162A
loc_2319d:
	// 6945 
cs=0x1359;eip=0x00162d; 	X(MOV(*(raddr(ss,bp+var_1a)), 0));	// 37080 mov     [bp+var_1A], 0 ;~ 1359:162D
cs=0x1359;eip=0x001631; 	T(MOV(ax, word_44606));	// 37081 mov     ax, word_44606 ;~ 1359:1631
cs=0x1359;eip=0x001634; 	T(CWD);	// 37082 cwd ;~ 1359:1634
cs=0x1359;eip=0x001635; 	T(XOR(ax, dx));	// 37083 xor     ax, dx ;~ 1359:1635
cs=0x1359;eip=0x001637; 	T(SUB(ax, dx));	// 37084 sub     ax, dx ;~ 1359:1637
cs=0x1359;eip=0x001639; 	T(MOV(cx, 3));	// 37085 mov     cx, 3 ;~ 1359:1639
cs=0x1359;eip=0x00163c; 	T(SAR(ax, cl));	// 37086 sar     ax, cl ;~ 1359:163C
cs=0x1359;eip=0x00163e; 	T(XOR(ax, dx));	// 37087 xor     ax, dx ;~ 1359:163E
cs=0x1359;eip=0x001640; 	T(SUB(ax, dx));	// 37088 sub     ax, dx ;~ 1359:1640
cs=0x1359;eip=0x001642; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 37089 mov     [bp+var_4], ax ;~ 1359:1642
cs=0x1359;eip=0x001645; 	X(MOV(*(raddr(ss,bp+var_2)), 1));	// 37090 mov     [bp+var_2], 1 ;~ 1359:1645
cs=0x1359;eip=0x001649; 	T(CMP(ax, 0x0FFF6));	// 37091 cmp     ax, 0FFF6h ;~ 1359:1649
cs=0x1359;eip=0x00164c; 	R(JGE(loc_231c4));	// 37092 jge     short loc_231C4 ;~ 1359:164C
cs=0x1359;eip=0x00164e; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 37093 mov     [bp+var_2], 0 ;~ 1359:164E
cs=0x1359;eip=0x001652; 	R(JMP(loc_231ce));	// 37094 jmp     short loc_231CE ;~ 1359:1652
loc_231c4:
	// 6946 
cs=0x1359;eip=0x001654; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x0A));	// 37098 cmp     [bp+var_4], 0Ah ;~ 1359:1654
cs=0x1359;eip=0x001658; 	R(JLE(loc_231ce));	// 37099 jle     short loc_231CE ;~ 1359:1658
cs=0x1359;eip=0x00165a; 	X(MOV(*(raddr(ss,bp+var_2)), 2));	// 37100 mov     [bp+var_2], 2 ;~ 1359:165A
loc_231ce:
	// 6947 
cs=0x1359;eip=0x00165e; 	T(MOV(al, byte_4432a));	// 37104 mov     al, byte_4432A ;~ 1359:165E
cs=0x1359;eip=0x001661; 	T(CBW);	// 37105 cbw ;~ 1359:1661
cs=0x1359;eip=0x001662; 	T(MOV(bx, ax));	// 37106 mov     bx, ax ;~ 1359:1662
cs=0x1359;eip=0x001664; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 37107 mov     al, [bp+var_2] ;~ 1359:1664
cs=0x1359;eip=0x001667; 	T(CMP(*((&byte_40df0)+bx), al));	// 37108 cmp     byte_40DF0[bx], al ;~ 1359:1667
cs=0x1359;eip=0x00166b; 	R(JNZ(loc_231e7));	// 37109 jnz     short loc_231E7 ;~ 1359:166B
cs=0x1359;eip=0x00166d; 	T(CMP(byte_454a4, 0));	// 37110 cmp     byte_454A4, 0 ;~ 1359:166D
cs=0x1359;eip=0x001672; 	R(JNZ(loc_231e7));	// 37111 jnz     short loc_231E7 ;~ 1359:1672
cs=0x1359;eip=0x001674; 	R(JMP(loc_23286));	// 37112 jmp     loc_23286 ;~ 1359:1674
loc_231e7:
	// 6948 
cs=0x1359;eip=0x001677; 	T(CMP(video_flag5_is0, 0));	// 37117 cmp     video_flag5_is0, 0 ;~ 1359:1677
cs=0x1359;eip=0x00167c; 	R(JNZ(loc_231f3));	// 37118 jnz     short loc_231F3 ;~ 1359:167C
cs=0x1359;eip=0x00167e; 	R(CALLF(mouse_draw_opaque_check,0));	// 37119 call    mouse_draw_opaque_check ;~ 1359:167E
loc_231f3:
	// 6949 
cs=0x1359;eip=0x001683; 	T(MOV(al, byte_4432a));	// 37122 mov     al, byte_4432A ;~ 1359:1683
cs=0x1359;eip=0x001686; 	T(CBW);	// 37123 cbw ;~ 1359:1686
cs=0x1359;eip=0x001687; 	T(SHL(ax, 1));	// 37124 shl     ax, 1 ;~ 1359:1687
cs=0x1359;eip=0x001689; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 37125 mov     [bp+var_20], ax ;~ 1359:1689
cs=0x1359;eip=0x00168c; 	T(MOV(bx, ax));	// 37126 mov     bx, ax ;~ 1359:168C
cs=0x1359;eip=0x00168e; 	T(CMP(*(dw*)(((db*)&word_40df6)+bx), 0));	// 37127 cmp     word_40DF6[bx], 0 ;~ 1359:168E
cs=0x1359;eip=0x001693; 	R(JZ(loc_23239));	// 37128 jz      short loc_23239 ;~ 1359:1693
cs=0x1359;eip=0x001695; 	X(PUSH(*(dw*)(((db*)&word_40df6)+bx)));	// 37129 push    word_40DF6[bx] ;~ 1359:1695
cs=0x1359;eip=0x001699; 	X(PUSH(*(dw*)(((db*)&word_40df2)+bx)));	// 37130 push    word_40DF2[bx] ;~ 1359:1699
cs=0x1359;eip=0x00169d; 	T(MOV(al, byte_44346));	// 37131 mov     al, byte_44346 ;~ 1359:169D
cs=0x1359;eip=0x0016a0; 	T(CBW);	// 37132 cbw ;~ 1359:16A0
cs=0x1359;eip=0x0016a1; 	T(MOV(bx, ax));	// 37133 mov     bx, ax ;~ 1359:16A1
cs=0x1359;eip=0x0016a3; 	T(SHL(bx, 1));	// 37134 shl     bx, 1 ;~ 1359:16A3
cs=0x1359;eip=0x0016a5; 	T(SHL(bx, 1));	// 37135 shl     bx, 1 ;~ 1359:16A5
cs=0x1359;eip=0x0016a7; 	X(PUSH(*(dw*)(((db*)&word_40de6)+bx)));	// 37136 push    word_40DE6[bx] ;~ 1359:16A7
cs=0x1359;eip=0x0016ab; 	X(PUSH(*(dw*)(((db*)&word_40de4)+bx)));	// 37137 push    word_40DE4[bx] ;~ 1359:16AB
cs=0x1359;eip=0x0016af; 	R(CALLF(sprite_putimage_and_alt,0));	// 37138 call    sprite_putimage_and_alt ;~ 1359:16AF
cs=0x1359;eip=0x0016b4; 	T(ADD(sp, 8));	// 37139 add     sp, 8 ;~ 1359:16B4
cs=0x1359;eip=0x0016b7; 	T(MOV(al, byte_4432a));	// 37140 mov     al, byte_4432A ;~ 1359:16B7
cs=0x1359;eip=0x0016ba; 	T(CBW);	// 37141 cbw ;~ 1359:16BA
cs=0x1359;eip=0x0016bb; 	T(MOV(bx, ax));	// 37142 mov     bx, ax ;~ 1359:16BB
cs=0x1359;eip=0x0016bd; 	T(SHL(bx, 1));	// 37143 shl     bx, 1 ;~ 1359:16BD
cs=0x1359;eip=0x0016bf; 	X(MOV(*(dw*)(((db*)&word_40df6)+bx), 0));	// 37144 mov     word_40DF6[bx], 0 ;~ 1359:16BF
cs=0x1359;eip=0x0016c5; 	X(MOV(*(raddr(ss,bp+var_1a)), 1));	// 37145 mov     [bp+var_1A], 1 ;~ 1359:16C5
loc_23239:
	// 6950 
cs=0x1359;eip=0x0016c9; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 37148 mov     al, [bp+var_2] ;~ 1359:16C9
cs=0x1359;eip=0x0016cc; 	T(CBW);	// 37149 cbw ;~ 1359:16CC
cs=0x1359;eip=0x0016cd; 	T(OR(ax, ax));	// 37150 or      ax, ax ;~ 1359:16CD
cs=0x1359;eip=0x0016cf; 	R(JZ(loc_2324e));	// 37151 jz      short loc_2324E ;~ 1359:16CF
cs=0x1359;eip=0x0016d1; 	T(CMP(ax, 1));	// 37152 cmp     ax, 1 ;~ 1359:16D1
cs=0x1359;eip=0x0016d4; 	R(JZ(loc_23272));	// 37153 jz      short loc_23272 ;~ 1359:16D4
cs=0x1359;eip=0x0016d6; 	T(CMP(ax, 2));	// 37154 cmp     ax, 2 ;~ 1359:16D6
cs=0x1359;eip=0x0016d9; 	R(JZ(loc_2327c));	// 37155 jz      short loc_2327C ;~ 1359:16D9
cs=0x1359;eip=0x0016db; 	R(JMP(loc_2325e));	// 37156 jmp     short loc_2325E ;~ 1359:16DB
loc_2324e:
	// 6951 
cs=0x1359;eip=0x0016de; 	X(PUSH(word_40db2));	// 37161 push    word_40DB2 ;~ 1359:16DE
cs=0x1359;eip=0x0016e2; 	X(PUSH(whlshapes));	// 37162 push    whlshapes ;~ 1359:16E2
loc_23256:
	// 6952 
cs=0x1359;eip=0x0016e6; 	R(CALLF(shape2d_op_unk3,0));	// 37166 call    shape2d_op_unk3 ;~ 1359:16E6
cs=0x1359;eip=0x0016eb; 	T(ADD(sp, 4));	// 37167 add     sp, 4 ;~ 1359:16EB
loc_2325e:
	// 6953 
cs=0x1359;eip=0x0016ee; 	T(MOV(al, byte_4432a));	// 37170 mov     al, byte_4432A ;~ 1359:16EE
cs=0x1359;eip=0x0016f1; 	T(CBW);	// 37171 cbw ;~ 1359:16F1
cs=0x1359;eip=0x0016f2; 	T(MOV(bx, ax));	// 37172 mov     bx, ax ;~ 1359:16F2
cs=0x1359;eip=0x0016f4; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 37173 mov     al, [bp+var_2] ;~ 1359:16F4
cs=0x1359;eip=0x0016f7; 	X(MOV(*((&byte_40df0)+bx), al));	// 37174 mov     byte_40DF0[bx], al ;~ 1359:16F7
cs=0x1359;eip=0x0016fb; 	X(MOV(*(raddr(ss,bp+var_18)), 1));	// 37175 mov     [bp+var_18], 1 ;~ 1359:16FB
cs=0x1359;eip=0x0016ff; 	R(JMP(loc_2328a));	// 37176 jmp     short loc_2328A ;~ 1359:16FF
loc_23272:
	// 6954 
cs=0x1359;eip=0x001702; 	X(PUSH(word_40db6));	// 37181 push    word_40DB6 ;~ 1359:1702
cs=0x1359;eip=0x001706; 	X(PUSH(word_40db4));	// 37182 push    word_40DB4 ;~ 1359:1706
cs=0x1359;eip=0x00170a; 	R(JMP(loc_23256));	// 37183 jmp     short loc_23256 ;~ 1359:170A
loc_2327c:
	// 6955 
cs=0x1359;eip=0x00170c; 	X(PUSH(word_40dba));	// 37187 push    word_40DBA ;~ 1359:170C
cs=0x1359;eip=0x001710; 	X(PUSH(word_40db8));	// 37188 push    word_40DB8 ;~ 1359:1710
cs=0x1359;eip=0x001714; 	R(JMP(loc_23256));	// 37189 jmp     short loc_23256 ;~ 1359:1714
loc_23286:
	// 6956 
cs=0x1359;eip=0x001716; 	X(MOV(*(raddr(ss,bp+var_18)), 0));	// 37193 mov     [bp+var_18], 0 ;~ 1359:1716
loc_2328a:
	// 6957 
cs=0x1359;eip=0x00171a; 	T(MOV(ax, word_45f84));	// 37196 mov     ax, word_45F84 ;~ 1359:171A
cs=0x1359;eip=0x00171d; 	T(CMP(ax, 0x0FFFF));	// 37197 cmp     ax, 0FFFFh ;~ 1359:171D
cs=0x1359;eip=0x001720; 	R(JZ(loc_232b6));	// 37198 jz      short loc_232B6 ;~ 1359:1720
cs=0x1359;eip=0x001722; 	T(OR(ax, ax));	// 37199 or      ax, ax ;~ 1359:1722
cs=0x1359;eip=0x001724; 	R(JNZ(loc_23299));	// 37200 jnz     short loc_23299 ;~ 1359:1724
cs=0x1359;eip=0x001726; 	R(JMP(loc_233a2));	// 37201 jmp     loc_233A2 ;~ 1359:1726
loc_23299:
	// 6958 
cs=0x1359;eip=0x001729; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 37205 mov     [bp+var_6], 0 ;~ 1359:1729
cs=0x1359;eip=0x00172d; 	T(MOV(ax, word_44610));	// 37206 mov     ax, word_44610 ;~ 1359:172D
cs=0x1359;eip=0x001730; 	T(SUB(dx, dx));	// 37207 sub     dx, dx ;~ 1359:1730
cs=0x1359;eip=0x001732; 	T(MOV(cx, 0x280));	// 37208 mov     cx, 280h ;~ 1359:1732
cs=0x1359;eip=0x001735; 	T(DIV2(cx));	// 37209 div     cx ;~ 1359:1735
cs=0x1359;eip=0x001737; 	T(MOV(si, ax));	// 37210 mov     si, ax ;~ 1359:1737
cs=0x1359;eip=0x001739; 	T(CMP(word_45f86, si));	// 37211 cmp     word_45F86, si ;~ 1359:1739
cs=0x1359;eip=0x00173d; 	R(JG(loc_232bc));	// 37212 jg      short loc_232BC ;~ 1359:173D
cs=0x1359;eip=0x00173f; 	T(MOV(si, word_45f86));	// 37213 mov     si, word_45F86 ;~ 1359:173F
cs=0x1359;eip=0x001743; 	T(DEC(si));	// 37214 dec     si ;~ 1359:1743
cs=0x1359;eip=0x001744; 	R(JMP(loc_232bc));	// 37215 jmp     short loc_232BC ;~ 1359:1744
loc_232b6:
	// 6959 
cs=0x1359;eip=0x001746; 	T(SUB(si, si));	// 37219 sub     si, si ;~ 1359:1746
cs=0x1359;eip=0x001748; 	X(MOV(*(raddr(ss,bp+var_6)), 2));	// 37220 mov     [bp+var_6], 2 ;~ 1359:1748
loc_232bc:
	// 6960 
cs=0x1359;eip=0x00174c; 	T(MOV(ax, word_44608));	// 37224 mov     ax, word_44608 ;~ 1359:174C
cs=0x1359;eip=0x00174f; 	T(MOV(cl, 7));	// 37225 mov     cl, 7 ;~ 1359:174F
cs=0x1359;eip=0x001751; 	T(SHR(ax, cl));	// 37226 shr     ax, cl ;~ 1359:1751
cs=0x1359;eip=0x001753; 	T(MOV(di, ax));	// 37227 mov     di, ax ;~ 1359:1753
cs=0x1359;eip=0x001755; 	T(CMP(word_4605c, di));	// 37228 cmp     word_4605C, di ;~ 1359:1755
cs=0x1359;eip=0x001759; 	R(JG(loc_232d0));	// 37229 jg      short loc_232D0 ;~ 1359:1759
cs=0x1359;eip=0x00175b; 	T(MOV(di, word_4605c));	// 37230 mov     di, word_4605C ;~ 1359:175B
cs=0x1359;eip=0x00175f; 	T(DEC(di));	// 37231 dec     di ;~ 1359:175F
loc_232d0:
	// 6961 
cs=0x1359;eip=0x001760; 	T(CMP(*(raddr(ss,bp+var_18)), 0));	// 37234 cmp     [bp+var_18], 0 ;~ 1359:1760
cs=0x1359;eip=0x001764; 	R(JNZ(loc_232f7));	// 37235 jnz     short loc_232F7 ;~ 1359:1764
cs=0x1359;eip=0x001766; 	T(CMP(byte_454a4, 0));	// 37236 cmp     byte_454A4, 0 ;~ 1359:1766
cs=0x1359;eip=0x00176b; 	R(JNZ(loc_232f7));	// 37237 jnz     short loc_232F7 ;~ 1359:176B
cs=0x1359;eip=0x00176d; 	T(MOV(al, byte_4432a));	// 37238 mov     al, byte_4432A ;~ 1359:176D
cs=0x1359;eip=0x001770; 	T(CBW);	// 37239 cbw ;~ 1359:1770
cs=0x1359;eip=0x001771; 	T(SHL(ax, 1));	// 37240 shl     ax, 1 ;~ 1359:1771
cs=0x1359;eip=0x001773; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 37241 mov     [bp+var_20], ax ;~ 1359:1773
cs=0x1359;eip=0x001776; 	T(MOV(bx, ax));	// 37242 mov     bx, ax ;~ 1359:1776
cs=0x1359;eip=0x001778; 	T(CMP(*(dw*)(((db*)&word_40d78)+bx), si));	// 37243 cmp     word_40D78[bx], si ;~ 1359:1778
cs=0x1359;eip=0x00177c; 	R(JNZ(loc_232f7));	// 37244 jnz     short loc_232F7 ;~ 1359:177C
cs=0x1359;eip=0x00177e; 	T(CMP(*(dw*)(((db*)&word_40d6c)+bx), di));	// 37245 cmp     word_40D6C[bx], di ;~ 1359:177E
cs=0x1359;eip=0x001782; 	R(JNZ(loc_232f7));	// 37246 jnz     short loc_232F7 ;~ 1359:1782
cs=0x1359;eip=0x001784; 	R(JMP(loc_23540));	// 37247 jmp     loc_23540 ;~ 1359:1784
loc_232f7:
	// 6962 
cs=0x1359;eip=0x001787; 	T(CMP(video_flag5_is0, 0));	// 37252 cmp     video_flag5_is0, 0 ;~ 1359:1787
cs=0x1359;eip=0x00178c; 	R(JNZ(loc_23303));	// 37253 jnz     short loc_23303 ;~ 1359:178C
cs=0x1359;eip=0x00178e; 	R(CALLF(mouse_draw_opaque_check,0));	// 37254 call    mouse_draw_opaque_check ;~ 1359:178E
loc_23303:
	// 6963 
cs=0x1359;eip=0x001793; 	T(MOV(al, byte_4432a));	// 37257 mov     al, byte_4432A ;~ 1359:1793
cs=0x1359;eip=0x001796; 	T(CBW);	// 37258 cbw ;~ 1359:1796
cs=0x1359;eip=0x001797; 	T(SHL(ax, 1));	// 37259 shl     ax, 1 ;~ 1359:1797
cs=0x1359;eip=0x001799; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 37260 mov     [bp+var_20], ax ;~ 1359:1799
cs=0x1359;eip=0x00179c; 	T(MOV(bx, ax));	// 37261 mov     bx, ax ;~ 1359:179C
cs=0x1359;eip=0x00179e; 	T(CMP(*(dw*)(((db*)&word_40df6)+bx), 0));	// 37262 cmp     word_40DF6[bx], 0 ;~ 1359:179E
cs=0x1359;eip=0x0017a3; 	R(JZ(loc_23349));	// 37263 jz      short loc_23349 ;~ 1359:17A3
cs=0x1359;eip=0x0017a5; 	X(PUSH(*(dw*)(((db*)&word_40df6)+bx)));	// 37264 push    word_40DF6[bx] ;~ 1359:17A5
cs=0x1359;eip=0x0017a9; 	X(PUSH(*(dw*)(((db*)&word_40df2)+bx)));	// 37265 push    word_40DF2[bx] ;~ 1359:17A9
cs=0x1359;eip=0x0017ad; 	T(MOV(al, byte_44346));	// 37266 mov     al, byte_44346 ;~ 1359:17AD
cs=0x1359;eip=0x0017b0; 	T(CBW);	// 37267 cbw ;~ 1359:17B0
cs=0x1359;eip=0x0017b1; 	T(MOV(bx, ax));	// 37268 mov     bx, ax ;~ 1359:17B1
cs=0x1359;eip=0x0017b3; 	T(SHL(bx, 1));	// 37269 shl     bx, 1 ;~ 1359:17B3
cs=0x1359;eip=0x0017b5; 	T(SHL(bx, 1));	// 37270 shl     bx, 1 ;~ 1359:17B5
cs=0x1359;eip=0x0017b7; 	X(PUSH(*(dw*)(((db*)&word_40de6)+bx)));	// 37271 push    word_40DE6[bx] ;~ 1359:17B7
cs=0x1359;eip=0x0017bb; 	X(PUSH(*(dw*)(((db*)&word_40de4)+bx)));	// 37272 push    word_40DE4[bx] ;~ 1359:17BB
cs=0x1359;eip=0x0017bf; 	R(CALLF(sprite_putimage_and_alt,0));	// 37273 call    sprite_putimage_and_alt ;~ 1359:17BF
cs=0x1359;eip=0x0017c4; 	T(ADD(sp, 8));	// 37274 add     sp, 8 ;~ 1359:17C4
cs=0x1359;eip=0x0017c7; 	T(MOV(al, byte_4432a));	// 37275 mov     al, byte_4432A ;~ 1359:17C7
cs=0x1359;eip=0x0017ca; 	T(CBW);	// 37276 cbw ;~ 1359:17CA
cs=0x1359;eip=0x0017cb; 	T(MOV(bx, ax));	// 37277 mov     bx, ax ;~ 1359:17CB
cs=0x1359;eip=0x0017cd; 	T(SHL(bx, 1));	// 37278 shl     bx, 1 ;~ 1359:17CD
cs=0x1359;eip=0x0017cf; 	X(MOV(*(dw*)(((db*)&word_40df6)+bx), 0));	// 37279 mov     word_40DF6[bx], 0 ;~ 1359:17CF
cs=0x1359;eip=0x0017d5; 	X(MOV(*(raddr(ss,bp+var_1a)), 1));	// 37280 mov     [bp+var_1A], 1 ;~ 1359:17D5
loc_23349:
	// 6964 
cs=0x1359;eip=0x0017d9; 	X(PUSH(*(dw*)(((db*)&whlsprite1)+2)));	// 37283 push    word ptr whlsprite1+2 ;~ 1359:17D9
cs=0x1359;eip=0x0017dd; 	X(PUSH(*(dw*)(((db*)&whlsprite1))));	// 37284 push    word ptr whlsprite1 ;~ 1359:17DD
cs=0x1359;eip=0x0017e1; 	R(CALLF(sprite_set_1_from_argptr,0));	// 37285 call    sprite_set_1_from_argptr ;~ 1359:17E1
cs=0x1359;eip=0x0017e6; 	T(ADD(sp, 4));	// 37286 add     sp, 4 ;~ 1359:17E6
cs=0x1359;eip=0x0017e9; 	T(SUB(ax, ax));	// 37287 sub     ax, ax ;~ 1359:17E9
cs=0x1359;eip=0x0017eb; 	X(PUSH(ax));	// 37288 push    ax ;~ 1359:17EB
cs=0x1359;eip=0x0017ec; 	X(PUSH(ax));	// 37289 push    ax ;~ 1359:17EC
cs=0x1359;eip=0x0017ed; 	X(PUSH(*(dw*)(((db*)&dword_40dbc)+2)));	// 37290 push    word ptr dword_40DBC+2 ;~ 1359:17ED
cs=0x1359;eip=0x0017f1; 	X(PUSH(*(dw*)(((db*)&dword_40dbc))));	// 37291 push    word ptr dword_40DBC ;~ 1359:17F1
cs=0x1359;eip=0x0017f5; 	R(CALLF(shape2d_op_unk5,0));	// 37292 call    shape2d_op_unk5 ;~ 1359:17F5
cs=0x1359;eip=0x0017fa; 	T(ADD(sp, 8));	// 37293 add     sp, 8 ;~ 1359:17FA
cs=0x1359;eip=0x0017fd; 	T(MOV(al, byte_4432a));	// 37294 mov     al, byte_4432A ;~ 1359:17FD
cs=0x1359;eip=0x001800; 	T(CBW);	// 37295 cbw ;~ 1359:1800
cs=0x1359;eip=0x001801; 	T(SHL(ax, 1));	// 37296 shl     ax, 1 ;~ 1359:1801
cs=0x1359;eip=0x001803; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 37297 mov     [bp+var_20], ax ;~ 1359:1803
cs=0x1359;eip=0x001806; 	T(MOV(bx, ax));	// 37298 mov     bx, ax ;~ 1359:1806
cs=0x1359;eip=0x001808; 	X(MOV(*(dw*)(((db*)&word_40d78)+bx), si));	// 37299 mov     word_40D78[bx], si ;~ 1359:1808
cs=0x1359;eip=0x00180c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_20))));	// 37300 mov     bx, [bp+var_20] ;~ 1359:180C
cs=0x1359;eip=0x00180f; 	X(MOV(*(dw*)(((db*)&word_40d6c)+bx), di));	// 37301 mov     word_40D6C[bx], di ;~ 1359:180F
cs=0x1359;eip=0x001813; 	T(CMP(*(raddr(ss,bp+var_6)), 1));	// 37302 cmp     [bp+var_6], 1 ;~ 1359:1813
cs=0x1359;eip=0x001817; 	R(JZ(loc_2338c));	// 37303 jz      short loc_2338C ;~ 1359:1817
cs=0x1359;eip=0x001819; 	R(JMP(loc_23456));	// 37304 jmp     loc_23456 ;~ 1359:1819
loc_2338c:
	// 6965 
cs=0x1359;eip=0x00181c; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 37308 mov     [bp+var_8], 0 ;~ 1359:181C
cs=0x1359;eip=0x001821; 	T(CMP(si, 0x0C8));	// 37309 cmp     si, 0C8h ; 'È' ;~ 1359:1821
cs=0x1359;eip=0x001825; 	R(JL(loc_233b2));	// 37310 jl      short loc_233B2 ;~ 1359:1825
cs=0x1359;eip=0x001827; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 2));	// 37311 mov     [bp+var_8], 2 ;~ 1359:1827
cs=0x1359;eip=0x00182c; 	T(SUB(si, 0x0C8));	// 37312 sub     si, 0C8h ; 'È' ;~ 1359:182C
cs=0x1359;eip=0x001830; 	R(JMP(loc_233bf));	// 37313 jmp     short loc_233BF ;~ 1359:1830
loc_233a2:
	// 6966 
cs=0x1359;eip=0x001832; 	X(MOV(*(raddr(ss,bp+var_6)), 1));	// 37317 mov     [bp+var_6], 1 ;~ 1359:1832
cs=0x1359;eip=0x001836; 	T(MOV(ax, word_44610));	// 37318 mov     ax, word_44610 ;~ 1359:1836
cs=0x1359;eip=0x001839; 	T(MOV(cl, 8));	// 37319 mov     cl, 8 ;~ 1359:1839
cs=0x1359;eip=0x00183b; 	T(SHR(ax, cl));	// 37320 shr     ax, cl ;~ 1359:183B
cs=0x1359;eip=0x00183d; 	T(MOV(si, ax));	// 37321 mov     si, ax ;~ 1359:183D
cs=0x1359;eip=0x00183f; 	R(JMP(loc_232bc));	// 37322 jmp     loc_232BC ;~ 1359:183F
loc_233b2:
	// 6967 
cs=0x1359;eip=0x001842; 	T(CMP(si, 0x64));	// 37326 cmp     si, 64h ; 'd' ;~ 1359:1842
cs=0x1359;eip=0x001845; 	R(JL(loc_233bf));	// 37327 jl      short loc_233BF ;~ 1359:1845
cs=0x1359;eip=0x001847; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 1));	// 37328 mov     [bp+var_8], 1 ;~ 1359:1847
cs=0x1359;eip=0x00184c; 	T(SUB(si, 0x64));	// 37329 sub     si, 64h ; 'd' ;~ 1359:184C
loc_233bf:
	// 6968 
cs=0x1359;eip=0x00184f; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 37333 cmp     [bp+var_8], 0 ;~ 1359:184F
cs=0x1359;eip=0x001853; 	R(JZ(loc_233ea));	// 37334 jz      short loc_233EA ;~ 1359:1853
cs=0x1359;eip=0x001855; 	T(MOV(al, byte_45f89));	// 37335 mov     al, byte_45F89 ;~ 1359:1855
cs=0x1359;eip=0x001858; 	T(SUB(ah, ah));	// 37336 sub     ah, ah ;~ 1359:1858
cs=0x1359;eip=0x00185a; 	X(PUSH(ax));	// 37337 push    ax ;~ 1359:185A
cs=0x1359;eip=0x00185b; 	T(MOV(al, byte_45f88));	// 37338 mov     al, byte_45F88 ;~ 1359:185B
cs=0x1359;eip=0x00185e; 	X(PUSH(ax));	// 37339 push    ax ;~ 1359:185E
cs=0x1359;eip=0x00185f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 37340 mov     bx, [bp+var_8] ;~ 1359:185F
cs=0x1359;eip=0x001862; 	T(SHL(bx, 1));	// 37341 shl     bx, 1 ;~ 1359:1862
cs=0x1359;eip=0x001864; 	T(SHL(bx, 1));	// 37342 shl     bx, 1 ;~ 1359:1864
cs=0x1359;eip=0x001866; 	X(PUSH(*(dw*)((((db*)digshapes)+2)+bx)));	// 37343 push    word ptr (digshapes+2)[bx] ;~ 1359:1866
cs=0x1359;eip=0x00186a; 	X(PUSH(*(dw*)(((db*)digshapes)+bx)));	// 37344 push    word ptr digshapes[bx] ;~ 1359:186A
cs=0x1359;eip=0x00186e; 	R(CALLF(sprite_putimage_or,0));	// 37345 call    sprite_putimage_or ;~ 1359:186E
cs=0x1359;eip=0x001873; 	T(ADD(sp, 8));	// 37346 add     sp, 8 ;~ 1359:1873
cs=0x1359;eip=0x001876; 	X(MOV(*(raddr(ss,bp+var_1c)), 1));	// 37347 mov     [bp+var_1C], 1 ;~ 1359:1876
loc_233ea:
	// 6969 
cs=0x1359;eip=0x00187a; 	T(MOV(ax, si));	// 37350 mov     ax, si ;~ 1359:187A
cs=0x1359;eip=0x00187c; 	T(CWD);	// 37351 cwd ;~ 1359:187C
cs=0x1359;eip=0x00187d; 	T(MOV(cx, 0x0A));	// 37352 mov     cx, 0Ah ;~ 1359:187D
cs=0x1359;eip=0x001880; 	T(IDIV2(cx));	// 37353 idiv    cx ;~ 1359:1880
cs=0x1359;eip=0x001882; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 37354 mov     [bp+var_8], ax ;~ 1359:1882
cs=0x1359;eip=0x001885; 	T(OR(ax, ax));	// 37355 or      ax, ax ;~ 1359:1885
cs=0x1359;eip=0x001887; 	R(JNZ(loc_233ff));	// 37356 jnz     short loc_233FF ;~ 1359:1887
cs=0x1359;eip=0x001889; 	T(CMP(*(raddr(ss,bp+var_1c)), 0));	// 37357 cmp     [bp+var_1C], 0 ;~ 1359:1889
cs=0x1359;eip=0x00188d; 	R(JZ(loc_23433));	// 37358 jz      short loc_23433 ;~ 1359:188D
loc_233ff:
	// 6970 
cs=0x1359;eip=0x00188f; 	T(MOV(al, byte_45f8b));	// 37361 mov     al, byte_45F8B ;~ 1359:188F
cs=0x1359;eip=0x001892; 	T(SUB(ah, ah));	// 37362 sub     ah, ah ;~ 1359:1892
cs=0x1359;eip=0x001894; 	X(PUSH(ax));	// 37363 push    ax ;~ 1359:1894
cs=0x1359;eip=0x001895; 	T(MOV(al, byte_45f8a));	// 37364 mov     al, byte_45F8A ;~ 1359:1895
cs=0x1359;eip=0x001898; 	X(PUSH(ax));	// 37365 push    ax ;~ 1359:1898
cs=0x1359;eip=0x001899; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 37366 mov     bx, [bp+var_8] ;~ 1359:1899
cs=0x1359;eip=0x00189c; 	T(SHL(bx, 1));	// 37367 shl     bx, 1 ;~ 1359:189C
cs=0x1359;eip=0x00189e; 	T(SHL(bx, 1));	// 37368 shl     bx, 1 ;~ 1359:189E
cs=0x1359;eip=0x0018a0; 	X(PUSH(*(dw*)((((db*)digshapes)+2)+bx)));	// 37369 push    word ptr (digshapes+2)[bx] ;~ 1359:18A0
cs=0x1359;eip=0x0018a4; 	X(PUSH(*(dw*)(((db*)digshapes)+bx)));	// 37370 push    word ptr digshapes[bx] ;~ 1359:18A4
cs=0x1359;eip=0x0018a8; 	R(CALLF(sprite_putimage_or,0));	// 37371 call    sprite_putimage_or ;~ 1359:18A8
cs=0x1359;eip=0x0018ad; 	T(ADD(sp, 8));	// 37372 add     sp, 8 ;~ 1359:18AD
cs=0x1359;eip=0x0018b0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 37373 mov     ax, [bp+var_8] ;~ 1359:18B0
cs=0x1359;eip=0x0018b3; 	T(MOV(cx, ax));	// 37374 mov     cx, ax ;~ 1359:18B3
cs=0x1359;eip=0x0018b5; 	T(SHL(ax, 1));	// 37375 shl     ax, 1 ;~ 1359:18B5
cs=0x1359;eip=0x0018b7; 	T(SHL(ax, 1));	// 37376 shl     ax, 1 ;~ 1359:18B7
cs=0x1359;eip=0x0018b9; 	T(ADD(ax, cx));	// 37377 add     ax, cx ;~ 1359:18B9
cs=0x1359;eip=0x0018bb; 	T(SHL(ax, 1));	// 37378 shl     ax, 1 ;~ 1359:18BB
cs=0x1359;eip=0x0018bd; 	T(SUB(si, ax));	// 37379 sub     si, ax ;~ 1359:18BD
cs=0x1359;eip=0x0018bf; 	X(MOV(*(raddr(ss,bp+var_1c)), 1));	// 37380 mov     [bp+var_1C], 1 ;~ 1359:18BF
loc_23433:
	// 6971 
cs=0x1359;eip=0x0018c3; 	T(MOV(al, byte_45f8d));	// 37383 mov     al, byte_45F8D ;~ 1359:18C3
cs=0x1359;eip=0x0018c6; 	T(SUB(ah, ah));	// 37384 sub     ah, ah ;~ 1359:18C6
cs=0x1359;eip=0x0018c8; 	X(PUSH(ax));	// 37385 push    ax ;~ 1359:18C8
cs=0x1359;eip=0x0018c9; 	T(MOV(al, byte_45f8c));	// 37386 mov     al, byte_45F8C ;~ 1359:18C9
cs=0x1359;eip=0x0018cc; 	X(PUSH(ax));	// 37387 push    ax ;~ 1359:18CC
cs=0x1359;eip=0x0018cd; 	T(MOV(bx, si));	// 37388 mov     bx, si ;~ 1359:18CD
cs=0x1359;eip=0x0018cf; 	T(SHL(bx, 1));	// 37389 shl     bx, 1 ;~ 1359:18CF
cs=0x1359;eip=0x0018d1; 	T(SHL(bx, 1));	// 37390 shl     bx, 1 ;~ 1359:18D1
cs=0x1359;eip=0x0018d3; 	X(PUSH(*(dw*)((((db*)digshapes)+2)+bx)));	// 37391 push    word ptr (digshapes+2)[bx] ;~ 1359:18D3
cs=0x1359;eip=0x0018d7; 	X(PUSH(*(dw*)(((db*)digshapes)+bx)));	// 37392 push    word ptr digshapes[bx] ;~ 1359:18D7
cs=0x1359;eip=0x0018db; 	R(CALLF(sprite_putimage_or,0));	// 37393 call    sprite_putimage_or ;~ 1359:18DB
cs=0x1359;eip=0x0018e0; 	T(ADD(sp, 8));	// 37394 add     sp, 8 ;~ 1359:18E0
cs=0x1359;eip=0x0018e3; 	R(JMP(loc_23485));	// 37395 jmp     short loc_23485 ;~ 1359:18E3
loc_23456:
	// 6972 
cs=0x1359;eip=0x0018e6; 	T(CMP(*(raddr(ss,bp+var_6)), 0));	// 37400 cmp     [bp+var_6], 0 ;~ 1359:18E6
cs=0x1359;eip=0x0018ea; 	R(JNZ(loc_23485));	// 37401 jnz     short loc_23485 ;~ 1359:18EA
cs=0x1359;eip=0x0018ec; 	T(MOV(ax, si));	// 37402 mov     ax, si ;~ 1359:18EC
cs=0x1359;eip=0x0018ee; 	T(SHL(ax, 1));	// 37403 shl     ax, 1 ;~ 1359:18EE
cs=0x1359;eip=0x0018f0; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 37404 mov     [bp+var_20], ax ;~ 1359:18F0
cs=0x1359;eip=0x0018f3; 	X(PUSH(meter_needle_color));	// 37405 push    meter_needle_color ;~ 1359:18F3
cs=0x1359;eip=0x0018f7; 	T(MOV(bx, ax));	// 37406 mov     bx, ax ;~ 1359:18F7
cs=0x1359;eip=0x0018f9; 	T(MOV(al, *((&byte_45f89)+bx)));	// 37407 mov     al, byte_45F89[bx] ;~ 1359:18F9
cs=0x1359;eip=0x0018fd; 	T(SUB(ah, ah));	// 37408 sub     ah, ah ;~ 1359:18FD
cs=0x1359;eip=0x0018ff; 	X(PUSH(ax));	// 37409 push    ax ;~ 1359:18FF
cs=0x1359;eip=0x001900; 	T(MOV(al, *((&byte_45f88)+bx)));	// 37410 mov     al, byte_45F88[bx] ;~ 1359:1900
cs=0x1359;eip=0x001904; 	X(PUSH(ax));	// 37411 push    ax ;~ 1359:1904
cs=0x1359;eip=0x001905; 	X(PUSH(word_45f84));	// 37412 push    word_45F84 ;~ 1359:1905
cs=0x1359;eip=0x001909; 	X(PUSH(word_45f82));	// 37413 push    word_45F82 ;~ 1359:1909
cs=0x1359;eip=0x00190d; 	R(CALLF(prerender_line,0));	// 37414 call    preRender_line ;~ 1359:190D
cs=0x1359;eip=0x001912; 	T(ADD(sp, 0x0A));	// 37415 add     sp, 0Ah ;~ 1359:1912
loc_23485:
	// 6973 
cs=0x1359;eip=0x001915; 	T(MOV(ax, di));	// 37419 mov     ax, di ;~ 1359:1915
cs=0x1359;eip=0x001917; 	T(SHL(ax, 1));	// 37420 shl     ax, 1 ;~ 1359:1917
cs=0x1359;eip=0x001919; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 37421 mov     [bp+var_20], ax ;~ 1359:1919
cs=0x1359;eip=0x00191c; 	X(PUSH(meter_needle_color));	// 37422 push    meter_needle_color ;~ 1359:191C
cs=0x1359;eip=0x001920; 	T(MOV(bx, ax));	// 37423 mov     bx, ax ;~ 1359:1920
cs=0x1359;eip=0x001922; 	T(MOV(al, *((&byte_4605f)+bx)));	// 37424 mov     al, byte_4605F[bx] ;~ 1359:1922
cs=0x1359;eip=0x001926; 	T(SUB(ah, ah));	// 37425 sub     ah, ah ;~ 1359:1926
cs=0x1359;eip=0x001928; 	X(PUSH(ax));	// 37426 push    ax ;~ 1359:1928
cs=0x1359;eip=0x001929; 	T(MOV(al, *((&byte_4605e)+bx)));	// 37427 mov     al, byte_4605E[bx] ;~ 1359:1929
cs=0x1359;eip=0x00192d; 	X(PUSH(ax));	// 37428 push    ax ;~ 1359:192D
cs=0x1359;eip=0x00192e; 	X(PUSH(word_4605a));	// 37429 push    word_4605A ;~ 1359:192E
cs=0x1359;eip=0x001932; 	X(PUSH(word_46058));	// 37430 push    word_46058 ;~ 1359:1932
cs=0x1359;eip=0x001936; 	R(CALLF(prerender_line,0));	// 37431 call    preRender_line ;~ 1359:1936
cs=0x1359;eip=0x00193b; 	T(ADD(sp, 0x0A));	// 37432 add     sp, 0Ah ;~ 1359:193B
cs=0x1359;eip=0x00193e; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 37433 mov     al, [bp+var_2] ;~ 1359:193E
cs=0x1359;eip=0x001941; 	T(CBW);	// 37434 cbw ;~ 1359:1941
cs=0x1359;eip=0x001942; 	T(OR(ax, ax));	// 37435 or      ax, ax ;~ 1359:1942
cs=0x1359;eip=0x001944; 	R(JZ(loc_234be));	// 37436 jz      short loc_234BE ;~ 1359:1944
cs=0x1359;eip=0x001946; 	T(CMP(ax, 2));	// 37437 cmp     ax, 2           ; st. whl. position flag ;~ 1359:1946
cs=0x1359;eip=0x001949; 	R(JZ(loc_234ec));	// 37438 jz      short loc_234EC ;~ 1359:1949
cs=0x1359;eip=0x00194b; 	R(JMP(loc_234de));	// 37439 jmp     short loc_234DE ;~ 1359:194B
loc_234be:
	// 6974 
cs=0x1359;eip=0x00194e; 	X(PUSH(word_40dce));	// 37444 push    word_40DCE ;~ 1359:194E
cs=0x1359;eip=0x001952; 	X(PUSH(word_40dcc));	// 37445 push    word_40DCC ;~ 1359:1952
cs=0x1359;eip=0x001956; 	R(CALLF(shape2d_render_bmp_as_mask,0));	// 37446 call    shape2d_render_bmp_as_mask ;~ 1359:1956
cs=0x1359;eip=0x00195b; 	T(ADD(sp, 4));	// 37447 add     sp, 4 ;~ 1359:195B
cs=0x1359;eip=0x00195e; 	X(PUSH(word_40dc6));	// 37448 push    word_40DC6 ;~ 1359:195E
cs=0x1359;eip=0x001962; 	X(PUSH(word_40dc4));	// 37449 push    word_40DC4 ;~ 1359:1962
loc_234d6:
	// 6975 
cs=0x1359;eip=0x001966; 	R(CALLF(shape2d_op_unk4,0));	// 37452 call    shape2d_op_unk4 ;~ 1359:1966
cs=0x1359;eip=0x00196b; 	T(ADD(sp, 4));	// 37453 add     sp, 4 ;~ 1359:196B
loc_234de:
	// 6976 
cs=0x1359;eip=0x00196e; 	T(CMP(video_flag5_is0, 0));	// 37456 cmp     video_flag5_is0, 0 ;~ 1359:196E
cs=0x1359;eip=0x001973; 	R(JZ(loc_23506));	// 37457 jz      short loc_23506 ;~ 1359:1973
cs=0x1359;eip=0x001975; 	R(CALLF(setup_mcgawnd2,0));	// 37458 call    setup_mcgawnd2 ;~ 1359:1975
cs=0x1359;eip=0x00197a; 	R(JMP(loc_2350b));	// 37459 jmp     short loc_2350B ;~ 1359:197A
loc_234ec:
	// 6977 
cs=0x1359;eip=0x00197c; 	X(PUSH(word_40dd2));	// 37463 push    word_40DD2 ;~ 1359:197C
cs=0x1359;eip=0x001980; 	X(PUSH(word_40dd0));	// 37464 push    word_40DD0 ;~ 1359:1980
cs=0x1359;eip=0x001984; 	R(CALLF(shape2d_render_bmp_as_mask,0));	// 37465 call    shape2d_render_bmp_as_mask ;~ 1359:1984
cs=0x1359;eip=0x001989; 	T(ADD(sp, 4));	// 37466 add     sp, 4 ;~ 1359:1989
cs=0x1359;eip=0x00198c; 	X(PUSH(word_40dca));	// 37467 push    word_40DCA ;~ 1359:198C
cs=0x1359;eip=0x001990; 	X(PUSH(word_40dc8));	// 37468 push    word_40DC8 ;~ 1359:1990
cs=0x1359;eip=0x001994; 	R(JMP(loc_234d6));	// 37469 jmp     short loc_234D6 ;~ 1359:1994
loc_23506:
	// 6978 
cs=0x1359;eip=0x001996; 	R(CALLF(sprite_copy_2_to_1_2,0));	// 37473 call    sprite_copy_2_to_1_2 ;~ 1359:1996
loc_2350b:
	// 6979 
cs=0x1359;eip=0x00199b; 	X(PUSH(height_above_replaybar));	// 37476 push    height_above_replaybar ;~ 1359:199B
cs=0x1359;eip=0x00199f; 	T(SUB(ax, ax));	// 37477 sub     ax, ax ;~ 1359:199F
cs=0x1359;eip=0x0019a1; 	X(PUSH(ax));	// 37478 push    ax ;~ 1359:19A1
cs=0x1359;eip=0x0019a2; 	T(MOV(ax, 0x140));	// 37479 mov     ax, 140h ;~ 1359:19A2
cs=0x1359;eip=0x0019a5; 	X(PUSH(ax));	// 37480 push    ax ;~ 1359:19A5
cs=0x1359;eip=0x0019a6; 	T(SUB(ax, ax));	// 37481 sub     ax, ax ;~ 1359:19A6
cs=0x1359;eip=0x0019a8; 	X(PUSH(ax));	// 37482 push    ax ;~ 1359:19A8
cs=0x1359;eip=0x0019a9; 	R(CALLF(sprite_set_1_size,0));	// 37483 call    sprite_set_1_size ;~ 1359:19A9
cs=0x1359;eip=0x0019ae; 	T(ADD(sp, 8));	// 37484 add     sp, 8 ;~ 1359:19AE
cs=0x1359;eip=0x0019b1; 	T(LES(bx, dword_40dbc));	// 37485 les     bx, dword_40DBC ;~ 1359:19B1
cs=0x1359;eip=0x0019b5; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 37486 push    word ptr es:[bx+0Ah] ;~ 1359:19B5
cs=0x1359;eip=0x0019b9; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 37487 push    word ptr es:[bx+8] ;~ 1359:19B9
cs=0x1359;eip=0x0019bd; 	T(LES(bx, whlsprite1));	// 37488 les     bx, whlsprite1 ;~ 1359:19BD
cs=0x1359;eip=0x0019c1; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 37489 push    word ptr es:[bx+2] ;~ 1359:19C1
cs=0x1359;eip=0x0019c5; 	X(PUSH(*(dw*)(raddr(es,bx+0))));	// 37490 push    word ptr es:[bx+0] ;~ 1359:19C5
cs=0x1359;eip=0x0019c8; 	R(CALLF(sprite_putimage_and_alt,0));	// 37491 call    sprite_putimage_and_alt ;~ 1359:19C8
cs=0x1359;eip=0x0019cd; 	T(ADD(sp, 8));	// 37492 add     sp, 8 ;~ 1359:19CD
loc_23540:
	// 6980 
cs=0x1359;eip=0x0019d0; 	T(MOV(al, byte_4432a));	// 37495 mov     al, byte_4432A ;~ 1359:19D0
cs=0x1359;eip=0x0019d3; 	T(CBW);	// 37496 cbw ;~ 1359:19D3
cs=0x1359;eip=0x0019d4; 	T(MOV(bx, ax));	// 37497 mov     bx, ax ;~ 1359:19D4
cs=0x1359;eip=0x0019d6; 	T(SHL(bx, 1));	// 37498 shl     bx, 1 ;~ 1359:19D6
cs=0x1359;eip=0x0019d8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 37499 mov     ax, [bp+var_4] ;~ 1359:19D8
cs=0x1359;eip=0x0019db; 	T(CMP(*(dw*)(((db*)&word_40e00)+bx), ax));	// 37500 cmp     word_40E00[bx], ax ;~ 1359:19DB
cs=0x1359;eip=0x0019df; 	R(JNZ(loc_23561));	// 37501 jnz     short loc_23561 ;~ 1359:19DF
cs=0x1359;eip=0x0019e1; 	T(CMP(byte_454a4, 0));	// 37502 cmp     byte_454A4, 0 ;~ 1359:19E1
cs=0x1359;eip=0x0019e6; 	R(JNZ(loc_23561));	// 37503 jnz     short loc_23561 ;~ 1359:19E6
cs=0x1359;eip=0x0019e8; 	T(CMP(*(raddr(ss,bp+var_1a)), 0));	// 37504 cmp     [bp+var_1A], 0 ;~ 1359:19E8
cs=0x1359;eip=0x0019ec; 	R(JNZ(loc_23561));	// 37505 jnz     short loc_23561 ;~ 1359:19EC
cs=0x1359;eip=0x0019ee; 	R(JMP(loc_236a0));	// 37506 jmp     loc_236A0 ;~ 1359:19EE
loc_23561:
	// 6981 
cs=0x1359;eip=0x0019f1; 	T(CMP(video_flag5_is0, 0));	// 37511 cmp     video_flag5_is0, 0 ;~ 1359:19F1
cs=0x1359;eip=0x0019f6; 	R(JNZ(loc_2356d));	// 37512 jnz     short loc_2356D ;~ 1359:19F6
cs=0x1359;eip=0x0019f8; 	R(CALLF(mouse_draw_opaque_check,0));	// 37513 call    mouse_draw_opaque_check ;~ 1359:19F8
loc_2356d:
	// 6982 
cs=0x1359;eip=0x0019fd; 	X(PUSH(height_above_replaybar));	// 37516 push    height_above_replaybar ;~ 1359:19FD
cs=0x1359;eip=0x001a01; 	T(SUB(ax, ax));	// 37517 sub     ax, ax ;~ 1359:1A01
cs=0x1359;eip=0x001a03; 	X(PUSH(ax));	// 37518 push    ax ;~ 1359:1A03
cs=0x1359;eip=0x001a04; 	T(MOV(ax, 0x140));	// 37519 mov     ax, 140h ;~ 1359:1A04
cs=0x1359;eip=0x001a07; 	X(PUSH(ax));	// 37520 push    ax ;~ 1359:1A07
cs=0x1359;eip=0x001a08; 	T(SUB(ax, ax));	// 37521 sub     ax, ax ;~ 1359:1A08
cs=0x1359;eip=0x001a0a; 	X(PUSH(ax));	// 37522 push    ax ;~ 1359:1A0A
cs=0x1359;eip=0x001a0b; 	R(CALLF(sprite_set_1_size,0));	// 37523 call    sprite_set_1_size ;~ 1359:1A0B
cs=0x1359;eip=0x001a10; 	T(ADD(sp, 8));	// 37524 add     sp, 8 ;~ 1359:1A10
cs=0x1359;eip=0x001a13; 	T(MOV(al, byte_4432a));	// 37525 mov     al, byte_4432A ;~ 1359:1A13
cs=0x1359;eip=0x001a16; 	T(CBW);	// 37526 cbw ;~ 1359:1A16
cs=0x1359;eip=0x001a17; 	T(SHL(ax, 1));	// 37527 shl     ax, 1 ;~ 1359:1A17
cs=0x1359;eip=0x001a19; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 37528 mov     [bp+var_20], ax ;~ 1359:1A19
cs=0x1359;eip=0x001a1c; 	T(MOV(bx, ax));	// 37529 mov     bx, ax ;~ 1359:1A1C
cs=0x1359;eip=0x001a1e; 	T(CMP(*(dw*)(((db*)&word_40df6)+bx), 0));	// 37530 cmp     word_40DF6[bx], 0 ;~ 1359:1A1E
cs=0x1359;eip=0x001a23; 	R(JZ(loc_235c5));	// 37531 jz      short loc_235C5 ;~ 1359:1A23
cs=0x1359;eip=0x001a25; 	X(PUSH(*(dw*)(((db*)&word_40df6)+bx)));	// 37532 push    word_40DF6[bx] ;~ 1359:1A25
cs=0x1359;eip=0x001a29; 	X(PUSH(*(dw*)(((db*)&word_40df2)+bx)));	// 37533 push    word_40DF2[bx] ;~ 1359:1A29
cs=0x1359;eip=0x001a2d; 	T(MOV(al, byte_44346));	// 37534 mov     al, byte_44346 ;~ 1359:1A2D
cs=0x1359;eip=0x001a30; 	T(CBW);	// 37535 cbw ;~ 1359:1A30
cs=0x1359;eip=0x001a31; 	T(MOV(bx, ax));	// 37536 mov     bx, ax ;~ 1359:1A31
cs=0x1359;eip=0x001a33; 	T(SHL(bx, 1));	// 37537 shl     bx, 1 ;~ 1359:1A33
cs=0x1359;eip=0x001a35; 	T(SHL(bx, 1));	// 37538 shl     bx, 1 ;~ 1359:1A35
cs=0x1359;eip=0x001a37; 	X(PUSH(*(dw*)(((db*)&word_40de6)+bx)));	// 37539 push    word_40DE6[bx] ;~ 1359:1A37
cs=0x1359;eip=0x001a3b; 	X(PUSH(*(dw*)(((db*)&word_40de4)+bx)));	// 37540 push    word_40DE4[bx] ;~ 1359:1A3B
cs=0x1359;eip=0x001a3f; 	R(CALLF(sprite_putimage_and_alt,0));	// 37541 call    sprite_putimage_and_alt ;~ 1359:1A3F
cs=0x1359;eip=0x001a44; 	T(ADD(sp, 8));	// 37542 add     sp, 8 ;~ 1359:1A44
cs=0x1359;eip=0x001a47; 	T(MOV(al, byte_4432a));	// 37543 mov     al, byte_4432A ;~ 1359:1A47
cs=0x1359;eip=0x001a4a; 	T(CBW);	// 37544 cbw ;~ 1359:1A4A
cs=0x1359;eip=0x001a4b; 	T(MOV(bx, ax));	// 37545 mov     bx, ax ;~ 1359:1A4B
cs=0x1359;eip=0x001a4d; 	T(SHL(bx, 1));	// 37546 shl     bx, 1 ;~ 1359:1A4D
cs=0x1359;eip=0x001a4f; 	X(MOV(*(dw*)(((db*)&word_40df6)+bx), 0));	// 37547 mov     word_40DF6[bx], 0 ;~ 1359:1A4F
loc_235c5:
	// 6983 
cs=0x1359;eip=0x001a55; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 37550 cmp     [bp+var_4], 0 ;~ 1359:1A55
cs=0x1359;eip=0x001a59; 	R(JGE(loc_235d2));	// 37551 jge     short loc_235D2 ;~ 1359:1A59
cs=0x1359;eip=0x001a5b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 37552 mov     ax, [bp+var_4] ;~ 1359:1A5B
cs=0x1359;eip=0x001a5e; 	T(NEG(ax));	// 37553 neg     ax ;~ 1359:1A5E
cs=0x1359;eip=0x001a60; 	R(JMP(loc_235d5));	// 37554 jmp     short loc_235D5 ;~ 1359:1A60
loc_235d2:
	// 6984 
cs=0x1359;eip=0x001a62; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 37558 mov     ax, [bp+var_4] ;~ 1359:1A62
loc_235d5:
	// 6985 
cs=0x1359;eip=0x001a65; 	T(SHL(ax, 1));	// 37561 shl     ax, 1 ;~ 1359:1A65
cs=0x1359;eip=0x001a67; 	T(ADD(ax, offset(dseg,byte_45f44)));	// 37562 add     ax, offset byte_45F44 ;~ 1359:1A67
cs=0x1359;eip=0x001a6a; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 37563 mov     [bp+var_E], ax ;~ 1359:1A6A
cs=0x1359;eip=0x001a6d; 	T(MOV(bx, ax));	// 37564 mov     bx, ax ;~ 1359:1A6D
cs=0x1359;eip=0x001a6f; 	T(MOV(al, *(raddr(ds,bx+1))));	// 37565 mov     al, [bx+1] ;~ 1359:1A6F
cs=0x1359;eip=0x001a72; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 37566 mov     [bp+var_16], al ;~ 1359:1A72
cs=0x1359;eip=0x001a75; 	T(MOV(al, *(raddr(ds,bx))));	// 37567 mov     al, [bx] ;~ 1359:1A75
cs=0x1359;eip=0x001a77; 	X(MOV(*(raddr(ss,bp+var_14)), al));	// 37568 mov     [bp+var_14], al ;~ 1359:1A77
cs=0x1359;eip=0x001a7a; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 37569 cmp     [bp+var_4], 0 ;~ 1359:1A7A
cs=0x1359;eip=0x001a7e; 	R(JGE(loc_235f9));	// 37570 jge     short loc_235F9 ;~ 1359:1A7E
cs=0x1359;eip=0x001a80; 	T(SUB(al, byte_45f44));	// 37571 sub     al, byte_45F44 ;~ 1359:1A80
cs=0x1359;eip=0x001a84; 	T(SHL(al, 1));	// 37572 shl     al, 1 ;~ 1359:1A84
cs=0x1359;eip=0x001a86; 	X(SUB(*(raddr(ss,bp+var_14)), al));	// 37573 sub     [bp+var_14], al ;~ 1359:1A86
loc_235f9:
	// 6986 
cs=0x1359;eip=0x001a89; 	T(MOV(al, byte_4432a));	// 37576 mov     al, byte_4432A ;~ 1359:1A89
cs=0x1359;eip=0x001a8c; 	T(CBW);	// 37577 cbw ;~ 1359:1A8C
cs=0x1359;eip=0x001a8d; 	T(SHL(ax, 1));	// 37578 shl     ax, 1 ;~ 1359:1A8D
cs=0x1359;eip=0x001a8f; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 37579 mov     [bp+var_20], ax ;~ 1359:1A8F
cs=0x1359;eip=0x001a92; 	T(MOV(al, *(raddr(ss,bp+var_14))));	// 37580 mov     al, [bp+var_14] ;~ 1359:1A92
cs=0x1359;eip=0x001a95; 	T(SUB(ah, ah));	// 37581 sub     ah, ah ;~ 1359:1A95
cs=0x1359;eip=0x001a97; 	T(LES(bx, dword_40ddc));	// 37582 les     bx, dword_40DDC ;~ 1359:1A97
cs=0x1359;eip=0x001a9b; 	T(SUB(ax, *(dw*)(raddr(es,bx+4))));	// 37583 sub     ax, es:[bx+4] ;~ 1359:1A9B
cs=0x1359;eip=0x001a9f; 	T(AND(ax, video_flag3_isffff));	// 37584 and     ax, video_flag3_isFFFF ;~ 1359:1A9F
cs=0x1359;eip=0x001aa3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_20))));	// 37585 mov     bx, [bp+var_20] ;~ 1359:1AA3
cs=0x1359;eip=0x001aa6; 	X(MOV(*(dw*)(((db*)&word_40df2)+bx), ax));	// 37586 mov     word_40DF2[bx], ax ;~ 1359:1AA6
cs=0x1359;eip=0x001aaa; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 37587 mov     al, [bp+var_16] ;~ 1359:1AAA
cs=0x1359;eip=0x001aad; 	T(SUB(ah, ah));	// 37588 sub     ah, ah ;~ 1359:1AAD
cs=0x1359;eip=0x001aaf; 	T(LES(bx, dword_40ddc));	// 37589 les     bx, dword_40DDC ;~ 1359:1AAF
cs=0x1359;eip=0x001ab3; 	T(SUB(ax, *(dw*)(raddr(es,bx+6))));	// 37590 sub     ax, es:[bx+6] ;~ 1359:1AB3
cs=0x1359;eip=0x001ab7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_20))));	// 37591 mov     bx, [bp+var_20] ;~ 1359:1AB7
cs=0x1359;eip=0x001aba; 	X(MOV(*(dw*)(((db*)&word_40df6)+bx), ax));	// 37592 mov     word_40DF6[bx], ax ;~ 1359:1ABA
cs=0x1359;eip=0x001abe; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 37593 mov     al, [bp+var_16] ;~ 1359:1ABE
cs=0x1359;eip=0x001ac1; 	T(SUB(ah, ah));	// 37594 sub     ah, ah ;~ 1359:1AC1
cs=0x1359;eip=0x001ac3; 	T(LES(bx, dword_40ddc));	// 37595 les     bx, dword_40DDC ;~ 1359:1AC3
cs=0x1359;eip=0x001ac7; 	T(SUB(ax, *(dw*)(raddr(es,bx+6))));	// 37596 sub     ax, es:[bx+6] ;~ 1359:1AC7
cs=0x1359;eip=0x001acb; 	X(PUSH(ax));	// 37597 push    ax ;~ 1359:1ACB
cs=0x1359;eip=0x001acc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_20))));	// 37598 mov     bx, [bp+var_20] ;~ 1359:1ACC
cs=0x1359;eip=0x001acf; 	X(PUSH(*(dw*)(((db*)&word_40df2)+bx)));	// 37599 push    word_40DF2[bx] ;~ 1359:1ACF
cs=0x1359;eip=0x001ad3; 	T(MOV(al, byte_44346));	// 37600 mov     al, byte_44346 ;~ 1359:1AD3
cs=0x1359;eip=0x001ad6; 	T(CBW);	// 37601 cbw ;~ 1359:1AD6
cs=0x1359;eip=0x001ad7; 	T(MOV(bx, ax));	// 37602 mov     bx, ax ;~ 1359:1AD7
cs=0x1359;eip=0x001ad9; 	T(SHL(bx, 1));	// 37603 shl     bx, 1 ;~ 1359:1AD9
cs=0x1359;eip=0x001adb; 	T(SHL(bx, 1));	// 37604 shl     bx, 1 ;~ 1359:1ADB
cs=0x1359;eip=0x001add; 	X(PUSH(*(dw*)(((db*)&word_40de6)+bx)));	// 37605 push    word_40DE6[bx] ;~ 1359:1ADD
cs=0x1359;eip=0x001ae1; 	X(PUSH(*(dw*)(((db*)&word_40de4)+bx)));	// 37606 push    word_40DE4[bx] ;~ 1359:1AE1
cs=0x1359;eip=0x001ae5; 	R(CALLF(sprite_clear_shape_alt,0));	// 37607 call    sprite_clear_shape_alt ;~ 1359:1AE5
cs=0x1359;eip=0x001aea; 	T(ADD(sp, 8));	// 37608 add     sp, 8 ;~ 1359:1AEA
cs=0x1359;eip=0x001aed; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 37609 mov     al, [bp+var_16] ;~ 1359:1AED
cs=0x1359;eip=0x001af0; 	T(SUB(ah, ah));	// 37610 sub     ah, ah ;~ 1359:1AF0
cs=0x1359;eip=0x001af2; 	X(PUSH(ax));	// 37611 push    ax ;~ 1359:1AF2
cs=0x1359;eip=0x001af3; 	T(MOV(al, *(raddr(ss,bp+var_14))));	// 37612 mov     al, [bp+var_14] ;~ 1359:1AF3
cs=0x1359;eip=0x001af6; 	X(PUSH(ax));	// 37613 push    ax ;~ 1359:1AF6
cs=0x1359;eip=0x001af7; 	X(PUSH(word_40de2));	// 37614 push    word_40DE2 ;~ 1359:1AF7
cs=0x1359;eip=0x001afb; 	X(PUSH(word_40de0));	// 37615 push    word_40DE0 ;~ 1359:1AFB
cs=0x1359;eip=0x001aff; 	R(CALLF(sprite_putimage_and_alt2,0));	// 37616 call    sprite_putimage_and_alt2 ;~ 1359:1AFF
cs=0x1359;eip=0x001b04; 	T(ADD(sp, 8));	// 37617 add     sp, 8 ;~ 1359:1B04
cs=0x1359;eip=0x001b07; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 37618 mov     al, [bp+var_16] ;~ 1359:1B07
cs=0x1359;eip=0x001b0a; 	T(SUB(ah, ah));	// 37619 sub     ah, ah ;~ 1359:1B0A
cs=0x1359;eip=0x001b0c; 	X(PUSH(ax));	// 37620 push    ax ;~ 1359:1B0C
cs=0x1359;eip=0x001b0d; 	T(MOV(al, *(raddr(ss,bp+var_14))));	// 37621 mov     al, [bp+var_14] ;~ 1359:1B0D
cs=0x1359;eip=0x001b10; 	X(PUSH(ax));	// 37622 push    ax ;~ 1359:1B10
cs=0x1359;eip=0x001b11; 	X(PUSH(*(dw*)(((db*)&dword_40ddc)+2)));	// 37623 push    word ptr dword_40DDC+2 ;~ 1359:1B11
cs=0x1359;eip=0x001b15; 	X(PUSH(*(dw*)(((db*)&dword_40ddc))));	// 37624 push    word ptr dword_40DDC ;~ 1359:1B15
cs=0x1359;eip=0x001b19; 	R(CALLF(sprite_putimage_or_alt,0));	// 37625 call    sprite_putimage_or_alt ;~ 1359:1B19
cs=0x1359;eip=0x001b1e; 	T(ADD(sp, 8));	// 37626 add     sp, 8 ;~ 1359:1B1E
cs=0x1359;eip=0x001b21; 	T(MOV(al, byte_4432a));	// 37627 mov     al, byte_4432A ;~ 1359:1B21
cs=0x1359;eip=0x001b24; 	T(CBW);	// 37628 cbw ;~ 1359:1B24
cs=0x1359;eip=0x001b25; 	T(MOV(bx, ax));	// 37629 mov     bx, ax ;~ 1359:1B25
cs=0x1359;eip=0x001b27; 	T(SHL(bx, 1));	// 37630 shl     bx, 1 ;~ 1359:1B27
cs=0x1359;eip=0x001b29; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 37631 mov     ax, [bp+var_4] ;~ 1359:1B29
cs=0x1359;eip=0x001b2c; 	X(MOV(*(dw*)(((db*)&word_40e00)+bx), ax));	// 37632 mov     word_40E00[bx], ax ;~ 1359:1B2C
loc_236a0:
	// 6987 
cs=0x1359;eip=0x001b30; 	R(CALLF(mouse_draw_transparent_check,0));	// 37635 call    mouse_draw_transparent_check ;~ 1359:1B30
cs=0x1359;eip=0x001b35; 	X(POP(si));	// 37636 pop     si ;~ 1359:1B35
cs=0x1359;eip=0x001b36; 	X(POP(di));	// 37637 pop     di ;~ 1359:1B36
cs=0x1359;eip=0x001b37; 	T(MOV(sp, bp));	// 37638 mov     sp, bp ;~ 1359:1B37
cs=0x1359;eip=0x001b39; 	X(POP(bp));	// 37639 pop     bp ;~ 1359:1B39
cs=0x1359;eip=0x001b3a; 	R(RETF(0));	// 37640 retf ;~ 1359:1B3A
loc_236ac:
	// 6988 
cs=0x1359;eip=0x001b3c; 	X(PUSH(*(dw*)(((db*)&whlsprite3)+2)));	// 37645 push    word ptr whlsprite3+2 ;~ 1359:1B3C
cs=0x1359;eip=0x001b40; 	X(PUSH(*(dw*)(((db*)&whlsprite3))));	// 37646 push    word ptr whlsprite3 ;~ 1359:1B40
cs=0x1359;eip=0x001b44; 	R(CALLF(sprite_free_wnd,0));	// 37647 call    sprite_free_wnd ;~ 1359:1B44
cs=0x1359;eip=0x001b49; 	T(ADD(sp, 4));	// 37648 add     sp, 4 ;~ 1359:1B49
cs=0x1359;eip=0x001b4c; 	X(PUSH(*(dw*)(((db*)&whlsprite2)+2)));	// 37649 push    word ptr whlsprite2+2 ;~ 1359:1B4C
cs=0x1359;eip=0x001b50; 	X(PUSH(*(dw*)(((db*)&whlsprite2))));	// 37650 push    word ptr whlsprite2 ;~ 1359:1B50
cs=0x1359;eip=0x001b54; 	R(CALLF(sprite_free_wnd,0));	// 37651 call    sprite_free_wnd ;~ 1359:1B54
cs=0x1359;eip=0x001b59; 	T(ADD(sp, 4));	// 37652 add     sp, 4 ;~ 1359:1B59
cs=0x1359;eip=0x001b5c; 	X(PUSH(*(dw*)(((db*)&whlsprite1)+2)));	// 37653 push    word ptr whlsprite1+2 ;~ 1359:1B5C
cs=0x1359;eip=0x001b60; 	X(PUSH(*(dw*)(((db*)&whlsprite1))));	// 37654 push    word ptr whlsprite1 ;~ 1359:1B60
cs=0x1359;eip=0x001b64; 	R(CALLF(sprite_free_wnd,0));	// 37655 call    sprite_free_wnd ;~ 1359:1B64
cs=0x1359;eip=0x001b69; 	T(ADD(sp, 4));	// 37656 add     sp, 4 ;~ 1359:1B69
cs=0x1359;eip=0x001b6c; 	X(PUSH(word_40d86));	// 37657 push    word_40D86 ;~ 1359:1B6C
cs=0x1359;eip=0x001b70; 	X(PUSH(stdbresptr));	// 37658 push    stdbresptr ;~ 1359:1B70
cs=0x1359;eip=0x001b74; 	R(CALLF(mmgr_free,0));	// 37659 call    mmgr_free ;~ 1359:1B74
cs=0x1359;eip=0x001b79; 	T(ADD(sp, 4));	// 37660 add     sp, 4 ;~ 1359:1B79
cs=0x1359;eip=0x001b7c; 	X(PUSH(word_40d7e));	// 37661 push    word_40D7E ;~ 1359:1B7C
cs=0x1359;eip=0x001b80; 	X(PUSH(stdaresptr));	// 37662 push    stdaresptr ;~ 1359:1B80
cs=0x1359;eip=0x001b84; 	R(CALLF(mmgr_free,0));	// 37663 call    mmgr_free ;~ 1359:1B84
cs=0x1359;eip=0x001b89; 	T(ADD(sp, 4));	// 37664 add     sp, 4 ;~ 1359:1B89
cs=0x1359;eip=0x001b8c; 	X(POP(si));	// 37665 pop     si ;~ 1359:1B8C
cs=0x1359;eip=0x001b8d; 	X(POP(di));	// 37666 pop     di ;~ 1359:1B8D
cs=0x1359;eip=0x001b8e; 	T(MOV(sp, bp));	// 37667 mov     sp, bp ;~ 1359:1B8E
cs=0x1359;eip=0x001b90; 	X(POP(bp));	// 37668 pop     bp ;~ 1359:1B90
cs=0x1359;eip=0x001b91; 	R(RETF(0));	// 37669 retf ;~ 1359:1B91
setup_player_cars:
	// 37677 
#undef var_8
#define var_8 -8
	// 37680 var_8           = word ptr -8 ;~ 1359:1B92
#undef var_6
#define var_6 -6
	// 37681 var_6           = word ptr -6 ;~ 1359:1B92
#undef var_4
#define var_4 -4
	// 37682 var_4           = word ptr -4 ;~ 1359:1B92
#undef var_2
#define var_2 -2
	// 37683 var_2           = word ptr -2 ;~ 1359:1B92
ret_1359_1b92:
	// 6989 
cs=0x1359;eip=0x001b92; 	X(PUSH(bp));	// 37685 push    bp ;~ 1359:1B92
cs=0x1359;eip=0x001b93; 	T(MOV(bp, sp));	// 37686 mov     bp, sp ;~ 1359:1B93
cs=0x1359;eip=0x001b95; 	T(SUB(sp, 8));	// 37687 sub     sp, 8 ;~ 1359:1B95
cs=0x1359;eip=0x001b98; 	T(SUB(ax, ax));	// 37688 sub     ax, ax ;~ 1359:1B98
cs=0x1359;eip=0x001b9a; 	X(MOV(*(dw*)(((db*)&wndsprite)+2), ax));	// 37689 mov     word ptr wndsprite+2, ax ;~ 1359:1B9A
cs=0x1359;eip=0x001b9d; 	X(MOV(*(dw*)(((db*)&wndsprite)), ax));	// 37690 mov     word ptr wndsprite, ax ;~ 1359:1B9D
cs=0x1359;eip=0x001ba0; 	T(MOV(ax, 2));	// 37691 mov     ax, 2 ;~ 1359:1BA0
cs=0x1359;eip=0x001ba3; 	X(PUSH(ax));	// 37692 push    ax ;~ 1359:1BA3
cs=0x1359;eip=0x001ba4; 	R(CALLF(ensure_file_exists,0));	// 37693 call    ensure_file_exists ;~ 1359:1BA4
cs=0x1359;eip=0x001ba9; 	T(ADD(sp, 2));	// 37694 add     sp, 2 ;~ 1359:1BA9
cs=0x1359;eip=0x001bac; 	T(MOV(ax, offset(dseg,byte_449ab)));	// 37695 mov     ax, offset byte_449AB ;~ 1359:1BAC
cs=0x1359;eip=0x001baf; 	X(PUSH(ax));	// 37696 push    ax ;~ 1359:1BAF
cs=0x1359;eip=0x001bb0; 	T(MOV(ax, offset(dseg,gameconfig)));	// 37697 mov     ax, offset gameconfig ;~ 1359:1BB0
cs=0x1359;eip=0x001bb3; 	X(PUSH(ax));	// 37698 push    ax ;~ 1359:1BB3
cs=0x1359;eip=0x001bb4; 	R(CALLF(shape3d_load_car_shapes,0));	// 37699 call    shape3d_load_car_shapes ;~ 1359:1BB4
cs=0x1359;eip=0x001bb9; 	T(ADD(sp, 4));	// 37700 add     sp, 4 ;~ 1359:1BB9
cs=0x1359;eip=0x001bbc; 	T(MOV(al, gameconfig));	// 37701 mov     al, gameconfig ;~ 1359:1BBC
cs=0x1359;eip=0x001bbf; 	X(MOV(byte_3b90d, al));	// 37702 mov     byte_3B90D, al ;~ 1359:1BBF
cs=0x1359;eip=0x001bc2; 	T(MOV(al, byte_449a5));	// 37703 mov     al, byte_449A5 ;~ 1359:1BC2
cs=0x1359;eip=0x001bc5; 	X(MOV(byte_3b90e, al));	// 37704 mov     byte_3B90E, al ;~ 1359:1BC5
cs=0x1359;eip=0x001bc8; 	T(MOV(al, byte_449a6));	// 37705 mov     al, byte_449A6 ;~ 1359:1BC8
cs=0x1359;eip=0x001bcb; 	X(MOV(byte_3b90f, al));	// 37706 mov     byte_3B90F, al ;~ 1359:1BCB
cs=0x1359;eip=0x001bce; 	T(MOV(al, byte_449a7));	// 37707 mov     al, byte_449A7 ;~ 1359:1BCE
cs=0x1359;eip=0x001bd1; 	X(MOV(byte_3b910, al));	// 37708 mov     byte_3B910, al ;~ 1359:1BD1
cs=0x1359;eip=0x001bd4; 	T(MOV(ax, offset(dseg,acarcoun)));	// 37709 mov     ax, offset aCarcoun ;~ 1359:1BD4
cs=0x1359;eip=0x001bd7; 	X(PUSH(ax));	// 37710 push    ax ;~ 1359:1BD7
cs=0x1359;eip=0x001bd8; 	R(CALLF(file_load_resfile,0));	// 37711 call    file_load_resfile ;~ 1359:1BD8
cs=0x1359;eip=0x001bdd; 	T(ADD(sp, 2));	// 37712 add     sp, 2 ;~ 1359:1BDD
cs=0x1359;eip=0x001be0; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 37713 mov     [bp+var_4], ax ;~ 1359:1BE0
cs=0x1359;eip=0x001be3; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 37714 mov     [bp+var_2], dx ;~ 1359:1BE3
cs=0x1359;eip=0x001be6; 	T(SUB(ax, ax));	// 37715 sub     ax, ax ;~ 1359:1BE6
cs=0x1359;eip=0x001be8; 	X(PUSH(ax));	// 37716 push    ax ;~ 1359:1BE8
cs=0x1359;eip=0x001be9; 	X(PUSH(dx));	// 37717 push    dx ;~ 1359:1BE9
cs=0x1359;eip=0x001bea; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 37718 push    [bp+var_4] ;~ 1359:1BEA
cs=0x1359;eip=0x001bed; 	R(CALLF(setup_aero_trackdata,0));	// 37719 call    setup_aero_trackdata ;~ 1359:1BED
cs=0x1359;eip=0x001bf2; 	T(ADD(sp, 6));	// 37720 add     sp, 6 ;~ 1359:1BF2
cs=0x1359;eip=0x001bf5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 37721 push    [bp+var_2] ;~ 1359:1BF5
cs=0x1359;eip=0x001bf8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 37722 push    [bp+var_4] ;~ 1359:1BF8
cs=0x1359;eip=0x001bfb; 	R(CALLF(unload_resource,0));	// 37723 call    unload_resource ;~ 1359:1BFB
cs=0x1359;eip=0x001c00; 	T(ADD(sp, 4));	// 37724 add     sp, 4 ;~ 1359:1C00
cs=0x1359;eip=0x001c03; 	T(CMP(byte_449aa, 0));	// 37725 cmp     byte_449AA, 0 ;~ 1359:1C03
cs=0x1359;eip=0x001c08; 	R(JZ(loc_237d3));	// 37726 jz      short loc_237D3 ;~ 1359:1C08
cs=0x1359;eip=0x001c0a; 	T(MOV(al, byte_449ab));	// 37727 mov     al, byte_449AB ;~ 1359:1C0A
cs=0x1359;eip=0x001c0d; 	X(MOV(byte_3b90d, al));	// 37728 mov     byte_3B90D, al ;~ 1359:1C0D
cs=0x1359;eip=0x001c10; 	T(MOV(al, byte_449ac));	// 37729 mov     al, byte_449AC ;~ 1359:1C10
cs=0x1359;eip=0x001c13; 	X(MOV(byte_3b90e, al));	// 37730 mov     byte_3B90E, al ;~ 1359:1C13
cs=0x1359;eip=0x001c16; 	T(MOV(al, byte_449ad));	// 37731 mov     al, byte_449AD ;~ 1359:1C16
cs=0x1359;eip=0x001c19; 	X(MOV(byte_3b90f, al));	// 37732 mov     byte_3B90F, al ;~ 1359:1C19
cs=0x1359;eip=0x001c1c; 	T(MOV(al, byte_449ae));	// 37733 mov     al, byte_449AE ;~ 1359:1C1C
cs=0x1359;eip=0x001c1f; 	X(MOV(byte_3b910, al));	// 37734 mov     byte_3B910, al ;~ 1359:1C1F
cs=0x1359;eip=0x001c22; 	T(MOV(ax, offset(dseg,acarcoun)));	// 37735 mov     ax, offset aCarcoun ;~ 1359:1C22
cs=0x1359;eip=0x001c25; 	X(PUSH(ax));	// 37736 push    ax ;~ 1359:1C25
cs=0x1359;eip=0x001c26; 	R(CALLF(file_load_resfile,0));	// 37737 call    file_load_resfile ;~ 1359:1C26
cs=0x1359;eip=0x001c2b; 	T(ADD(sp, 2));	// 37738 add     sp, 2 ;~ 1359:1C2B
cs=0x1359;eip=0x001c2e; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 37739 mov     [bp+var_4], ax ;~ 1359:1C2E
cs=0x1359;eip=0x001c31; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 37740 mov     [bp+var_2], dx ;~ 1359:1C31
cs=0x1359;eip=0x001c34; 	T(MOV(ax, 1));	// 37741 mov     ax, 1 ;~ 1359:1C34
cs=0x1359;eip=0x001c37; 	X(PUSH(ax));	// 37742 push    ax ;~ 1359:1C37
cs=0x1359;eip=0x001c38; 	X(PUSH(dx));	// 37743 push    dx ;~ 1359:1C38
cs=0x1359;eip=0x001c39; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 37744 push    [bp+var_4] ;~ 1359:1C39
cs=0x1359;eip=0x001c3c; 	R(CALLF(setup_aero_trackdata,0));	// 37745 call    setup_aero_trackdata ;~ 1359:1C3C
cs=0x1359;eip=0x001c41; 	T(ADD(sp, 6));	// 37746 add     sp, 6 ;~ 1359:1C41
cs=0x1359;eip=0x001c44; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 37747 push    [bp+var_2] ;~ 1359:1C44
cs=0x1359;eip=0x001c47; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 37748 push    [bp+var_4] ;~ 1359:1C47
cs=0x1359;eip=0x001c4a; 	R(CALLF(unload_resource,0));	// 37749 call    unload_resource ;~ 1359:1C4A
cs=0x1359;eip=0x001c4f; 	T(ADD(sp, 4));	// 37750 add     sp, 4 ;~ 1359:1C4F
cs=0x1359;eip=0x001c52; 	T(MOV(ax, 4));	// 37751 mov     ax, 4 ;~ 1359:1C52
cs=0x1359;eip=0x001c55; 	X(PUSH(ax));	// 37752 push    ax ;~ 1359:1C55
cs=0x1359;eip=0x001c56; 	R(CALLF(ensure_file_exists,0));	// 37753 call    ensure_file_exists ;~ 1359:1C56
cs=0x1359;eip=0x001c5b; 	T(ADD(sp, 2));	// 37754 add     sp, 2 ;~ 1359:1C5B
cs=0x1359;eip=0x001c5e; 	R(CALLF(load_opponent_data,0));	// 37755 call    load_opponent_data ;~ 1359:1C5E
loc_237d3:
	// 6990 
cs=0x1359;eip=0x001c63; 	T(MOV(ax, 3));	// 37758 mov     ax, 3 ;~ 1359:1C63
cs=0x1359;eip=0x001c66; 	X(PUSH(ax));	// 37759 push    ax ;~ 1359:1C66
cs=0x1359;eip=0x001c67; 	R(CALLF(ensure_file_exists,0));	// 37760 call    ensure_file_exists ;~ 1359:1C67
cs=0x1359;eip=0x001c6c; 	T(ADD(sp, 2));	// 37761 add     sp, 2 ;~ 1359:1C6C
cs=0x1359;eip=0x001c6f; 	T(MOV(ax, offset(dseg,aeng1)));	// 37762 mov     ax, offset aEng1 ; "eng1" ;~ 1359:1C6F
cs=0x1359;eip=0x001c72; 	X(PUSH(ax));	// 37763 push    ax              ; char * ;~ 1359:1C72
cs=0x1359;eip=0x001c73; 	T(MOV(ax, 5));	// 37764 mov     ax, 5 ;~ 1359:1C73
cs=0x1359;eip=0x001c76; 	X(PUSH(ax));	// 37765 push    ax              ; int ;~ 1359:1C76
cs=0x1359;eip=0x001c77; 	R(CALLF(file_load_resource,0));	// 37766 call    file_load_resource ;~ 1359:1C77
cs=0x1359;eip=0x001c7c; 	T(ADD(sp, 4));	// 37767 add     sp, 4 ;~ 1359:1C7C
cs=0x1359;eip=0x001c7f; 	X(MOV(eng1ptr, ax));	// 37768 mov     eng1ptr, ax ;~ 1359:1C7F
cs=0x1359;eip=0x001c82; 	X(MOV(word_454a8, dx));	// 37769 mov     word_454A8, dx ;~ 1359:1C82
cs=0x1359;eip=0x001c86; 	T(MOV(ax, offset(dseg,aeng)));	// 37770 mov     ax, offset aEng ; "eng" ;~ 1359:1C86
cs=0x1359;eip=0x001c89; 	X(PUSH(ax));	// 37771 push    ax              ; char * ;~ 1359:1C89
cs=0x1359;eip=0x001c8a; 	T(MOV(ax, 6));	// 37772 mov     ax, 6 ;~ 1359:1C8A
cs=0x1359;eip=0x001c8d; 	X(PUSH(ax));	// 37773 push    ax              ; int ;~ 1359:1C8D
cs=0x1359;eip=0x001c8e; 	R(CALLF(file_load_resource,0));	// 37774 call    file_load_resource ;~ 1359:1C8E
cs=0x1359;eip=0x001c93; 	T(ADD(sp, 4));	// 37775 add     sp, 4 ;~ 1359:1C93
cs=0x1359;eip=0x001c96; 	X(MOV(engptr, ax));	// 37776 mov     engptr, ax ;~ 1359:1C96
cs=0x1359;eip=0x001c99; 	X(MOV(word_45e10, dx));	// 37777 mov     word_45E10, dx ;~ 1359:1C99
cs=0x1359;eip=0x001c9d; 	R(CALLF(audio_add_driver_timer,0));	// 37778 call    audio_add_driver_timer ;~ 1359:1C9D
cs=0x1359;eip=0x001ca2; 	X(PUSH(word_45e10));	// 37779 push    word_45E10 ;~ 1359:1CA2
cs=0x1359;eip=0x001ca6; 	X(PUSH(engptr));	// 37780 push    engptr ;~ 1359:1CA6
cs=0x1359;eip=0x001caa; 	X(PUSH(word_454a8));	// 37781 push    word_454A8 ;~ 1359:1CAA
cs=0x1359;eip=0x001cae; 	X(PUSH(eng1ptr));	// 37782 push    eng1ptr ;~ 1359:1CAE
cs=0x1359;eip=0x001cb2; 	T(MOV(ax, offset(dseg,unk_3e7fc)));	// 37783 mov     ax, offset unk_3E7FC ;~ 1359:1CB2
cs=0x1359;eip=0x001cb5; 	X(PUSH(ds));	// 37784 push    ds ;~ 1359:1CB5
cs=0x1359;eip=0x001cb6; 	X(PUSH(ax));	// 37785 push    ax ;~ 1359:1CB6
cs=0x1359;eip=0x001cb7; 	T(MOV(ax, 0x21));	// 37786 mov     ax, 21h ; '!' ;~ 1359:1CB7
cs=0x1359;eip=0x001cba; 	X(PUSH(ax));	// 37787 push    ax ;~ 1359:1CBA
cs=0x1359;eip=0x001cbb; 	R(CALLF(audio_init_engine,0));	// 37788 call    audio_init_engine ;~ 1359:1CBB
cs=0x1359;eip=0x001cc0; 	T(ADD(sp, 0x0E));	// 37789 add     sp, 0Eh ;~ 1359:1CC0
cs=0x1359;eip=0x001cc3; 	X(MOV(word_43964, ax));	// 37790 mov     word_43964, ax ;~ 1359:1CC3
cs=0x1359;eip=0x001cc6; 	X(MOV(byte_459d8, 0));	// 37791 mov     byte_459D8, 0 ;~ 1359:1CC6
cs=0x1359;eip=0x001ccb; 	X(MOV(byte_42d26, 0));	// 37792 mov     byte_42D26, 0 ;~ 1359:1CCB
cs=0x1359;eip=0x001cd0; 	X(MOV(byte_42d2a, 0));	// 37793 mov     byte_42D2A, 0 ;~ 1359:1CD0
cs=0x1359;eip=0x001cd5; 	T(CMP(byte_449aa, 0));	// 37794 cmp     byte_449AA, 0 ;~ 1359:1CD5
cs=0x1359;eip=0x001cda; 	R(JZ(loc_23870));	// 37795 jz      short loc_23870 ;~ 1359:1CDA
cs=0x1359;eip=0x001cdc; 	X(PUSH(word_45e10));	// 37796 push    word_45E10 ;~ 1359:1CDC
cs=0x1359;eip=0x001ce0; 	X(PUSH(engptr));	// 37797 push    engptr ;~ 1359:1CE0
cs=0x1359;eip=0x001ce4; 	X(PUSH(word_454a8));	// 37798 push    word_454A8 ;~ 1359:1CE4
cs=0x1359;eip=0x001ce8; 	X(PUSH(eng1ptr));	// 37799 push    eng1ptr ;~ 1359:1CE8
cs=0x1359;eip=0x001cec; 	T(MOV(ax, offset(dseg,unk_3e82c)));	// 37800 mov     ax, offset unk_3E82C ;~ 1359:1CEC
cs=0x1359;eip=0x001cef; 	X(PUSH(ds));	// 37801 push    ds ;~ 1359:1CEF
cs=0x1359;eip=0x001cf0; 	X(PUSH(ax));	// 37802 push    ax ;~ 1359:1CF0
cs=0x1359;eip=0x001cf1; 	T(MOV(ax, 0x20));	// 37803 mov     ax, 20h ; ' ' ;~ 1359:1CF1
cs=0x1359;eip=0x001cf4; 	X(PUSH(ax));	// 37804 push    ax ;~ 1359:1CF4
cs=0x1359;eip=0x001cf5; 	R(CALLF(audio_init_engine,0));	// 37805 call    audio_init_engine ;~ 1359:1CF5
cs=0x1359;eip=0x001cfa; 	T(ADD(sp, 0x0E));	// 37806 add     sp, 0Eh ;~ 1359:1CFA
cs=0x1359;eip=0x001cfd; 	X(MOV(word_4408c, ax));	// 37807 mov     word_4408C, ax ;~ 1359:1CFD
loc_23870:
	// 6991 
cs=0x1359;eip=0x001d00; 	X(MOV(word_44d1e, 0));	// 37810 mov     word_44D1E, 0 ;~ 1359:1D00
cs=0x1359;eip=0x001d06; 	X(MOV(word_449e4, 0));	// 37811 mov     word_449E4, 0 ;~ 1359:1D06
cs=0x1359;eip=0x001d0c; 	X(MOV(word_443f4, 0));	// 37812 mov     word_443F4, 0 ;~ 1359:1D0C
cs=0x1359;eip=0x001d12; 	T(MOV(ax, offset(dseg,afontled_fnt)));	// 37813 mov     ax, offset aFontled_fnt ; "fontled.fnt" ;~ 1359:1D12
cs=0x1359;eip=0x001d15; 	X(PUSH(ax));	// 37814 push    ax              ; char * ;~ 1359:1D15
cs=0x1359;eip=0x001d16; 	T(SUB(ax, ax));	// 37815 sub     ax, ax ;~ 1359:1D16
cs=0x1359;eip=0x001d18; 	X(PUSH(ax));	// 37816 push    ax              ; int ;~ 1359:1D18
cs=0x1359;eip=0x001d19; 	R(CALLF(file_load_resource,0));	// 37817 call    file_load_resource ;~ 1359:1D19
cs=0x1359;eip=0x001d1e; 	T(ADD(sp, 4));	// 37818 add     sp, 4 ;~ 1359:1D1E
cs=0x1359;eip=0x001d21; 	X(MOV(fontledresptr, ax));	// 37819 mov     fontledresptr, ax ;~ 1359:1D21
cs=0x1359;eip=0x001d24; 	X(MOV(word_459f6, dx));	// 37820 mov     word_459F6, dx ;~ 1359:1D24
cs=0x1359;eip=0x001d28; 	T(MOV(ax, timertestflag));	// 37821 mov     ax, timertestflag ;~ 1359:1D28
cs=0x1359;eip=0x001d2b; 	X(MOV(timertestflag_copy, ax));	// 37822 mov     timertestflag_copy, ax ;~ 1359:1D2B
cs=0x1359;eip=0x001d2e; 	R(CALLF(init_rect_arrays,0));	// 37823 call    init_rect_arrays ;~ 1359:1D2E
cs=0x1359;eip=0x001d33; 	T(CMP(idle_expired, 0));	// 37824 cmp     idle_expired, 0 ;~ 1359:1D33
cs=0x1359;eip=0x001d38; 	R(JNZ(loc_238b4));	// 37825 jnz     short loc_238B4 ;~ 1359:1D38
cs=0x1359;eip=0x001d3a; 	T(SUB(ax, ax));	// 37826 sub     ax, ax ;~ 1359:1D3A
cs=0x1359;eip=0x001d3c; 	X(PUSH(ax));	// 37827 push    ax ;~ 1359:1D3C
cs=0x1359;eip=0x001d3d; 	X(PUSH(cs));	// 37828 push    cs ;~ 1359:1D3D
cs=0x1359;eip=0x001d3e; 	R(CALL(setup_car_shapes,0));	// 37829 call    near ptr setup_car_shapes ;~ 1359:1D3E
cs=0x1359;eip=0x001d41; 	T(ADD(sp, 2));	// 37830 add     sp, 2 ;~ 1359:1D41
loc_238b4:
	// 6992 
cs=0x1359;eip=0x001d44; 	T(CMP(idle_expired, 0));	// 37833 cmp     idle_expired, 0 ;~ 1359:1D44
cs=0x1359;eip=0x001d49; 	R(JNZ(loc_238de));	// 37834 jnz     short loc_238DE ;~ 1359:1D49
cs=0x1359;eip=0x001d4b; 	T(MOV(ax, offset(dseg,asdgame)));	// 37835 mov     ax, offset aSdgame ; "sdgame" ;~ 1359:1D4B
cs=0x1359;eip=0x001d4e; 	X(PUSH(ax));	// 37836 push    ax              ; char * ;~ 1359:1D4E
cs=0x1359;eip=0x001d4f; 	T(MOV(ax, 3));	// 37837 mov     ax, 3 ;~ 1359:1D4F
cs=0x1359;eip=0x001d52; 	X(PUSH(ax));	// 37838 push    ax              ; int ;~ 1359:1D52
cs=0x1359;eip=0x001d53; 	R(CALLF(file_load_resource,0));	// 37839 call    file_load_resource ;~ 1359:1D53
cs=0x1359;eip=0x001d58; 	T(ADD(sp, 4));	// 37840 add     sp, 4 ;~ 1359:1D58
cs=0x1359;eip=0x001d5b; 	X(MOV(sdgameresptr, ax));	// 37841 mov     sdgameresptr, ax ;~ 1359:1D5B
cs=0x1359;eip=0x001d5e; 	X(MOV(word_45d0a, dx));	// 37842 mov     word_45D0A, dx ;~ 1359:1D5E
cs=0x1359;eip=0x001d62; 	T(SUB(ax, ax));	// 37843 sub     ax, ax ;~ 1359:1D62
cs=0x1359;eip=0x001d64; 	X(PUSH(ax));	// 37844 push    ax ;~ 1359:1D64
cs=0x1359;eip=0x001d65; 	X(PUSH(ax));	// 37845 push    ax ;~ 1359:1D65
cs=0x1359;eip=0x001d66; 	X(PUSH(ax));	// 37846 push    ax ;~ 1359:1D66
cs=0x1359;eip=0x001d67; 	X(PUSH(cs));	// 37847 push    cs ;~ 1359:1D67
cs=0x1359;eip=0x001d68; 	R(CALL(loop_game,0));	// 37848 call    near ptr loop_game ;~ 1359:1D68
cs=0x1359;eip=0x001d6b; 	T(ADD(sp, 6));	// 37849 add     sp, 6 ;~ 1359:1D6B
loc_238de:
	// 6993 
cs=0x1359;eip=0x001d6e; 	T(MOV(ax, offset(dseg,agame)));	// 37852 mov     ax, offset aGame ; "game" ;~ 1359:1D6E
cs=0x1359;eip=0x001d71; 	X(PUSH(ax));	// 37853 push    ax ;~ 1359:1D71
cs=0x1359;eip=0x001d72; 	R(CALLF(file_load_resfile,0));	// 37854 call    file_load_resfile ;~ 1359:1D72
cs=0x1359;eip=0x001d77; 	T(ADD(sp, 2));	// 37855 add     sp, 2 ;~ 1359:1D77
cs=0x1359;eip=0x001d7a; 	X(MOV(gameresptr, ax));	// 37856 mov     gameresptr, ax ;~ 1359:1D7A
cs=0x1359;eip=0x001d7d; 	X(MOV(word_449a2, dx));	// 37857 mov     word_449A2, dx ;~ 1359:1D7D
cs=0x1359;eip=0x001d81; 	T(MOV(ax, offset(dseg,aplan)));	// 37858 mov     ax, offset aPlan ; "plan" ;~ 1359:1D81
cs=0x1359;eip=0x001d84; 	X(PUSH(ax));	// 37859 push    ax ;~ 1359:1D84
cs=0x1359;eip=0x001d85; 	X(PUSH(dx));	// 37860 push    dx ;~ 1359:1D85
cs=0x1359;eip=0x001d86; 	X(PUSH(gameresptr));	// 37861 push    gameresptr ;~ 1359:1D86
cs=0x1359;eip=0x001d8a; 	R(CALLF(locate_shape_alt,0));	// 37862 call    locate_shape_alt ;~ 1359:1D8A
cs=0x1359;eip=0x001d8f; 	T(ADD(sp, 6));	// 37863 add     sp, 6 ;~ 1359:1D8F
cs=0x1359;eip=0x001d92; 	X(MOV(planptr, ax));	// 37864 mov     planptr, ax ;~ 1359:1D92
cs=0x1359;eip=0x001d95; 	X(MOV(word_454c4, dx));	// 37865 mov     word_454C4, dx ;~ 1359:1D95
cs=0x1359;eip=0x001d99; 	T(MOV(ax, offset(dseg,awall)));	// 37866 mov     ax, offset aWall ; "wall" ;~ 1359:1D99
cs=0x1359;eip=0x001d9c; 	X(PUSH(ax));	// 37867 push    ax ;~ 1359:1D9C
cs=0x1359;eip=0x001d9d; 	X(PUSH(word_449a2));	// 37868 push    word_449A2 ;~ 1359:1D9D
cs=0x1359;eip=0x001da1; 	X(PUSH(gameresptr));	// 37869 push    gameresptr ;~ 1359:1DA1
cs=0x1359;eip=0x001da5; 	R(CALLF(locate_shape_alt,0));	// 37870 call    locate_shape_alt ;~ 1359:1DA5
cs=0x1359;eip=0x001daa; 	T(ADD(sp, 6));	// 37871 add     sp, 6 ;~ 1359:1DAA
cs=0x1359;eip=0x001dad; 	X(MOV(*(dw*)(((db*)&wallptr)), ax));	// 37872 mov     word ptr wallptr, ax ;~ 1359:1DAD
cs=0x1359;eip=0x001db0; 	X(MOV(*(dw*)(((db*)&wallptr)+2), dx));	// 37873 mov     word ptr wallptr+2, dx ;~ 1359:1DB0
cs=0x1359;eip=0x001db4; 	R(CALLF(load_sdgame2_shapes,0));	// 37874 call    load_sdgame2_shapes ;~ 1359:1DB4
cs=0x1359;eip=0x001db9; 	T(LES(bx, td14_elem_map_main));	// 37875 les     bx, td14_elem_map_main ;~ 1359:1DB9
cs=0x1359;eip=0x001dbd; 	T(MOV(al, *(raddr(es,bx+0x384))));	// 37876 mov     al, es:[bx+384h] ; 384h = sky box position in track data ;~ 1359:1DBD
cs=0x1359;eip=0x001dc2; 	T(SUB(ah, ah));	// 37877 sub     ah, ah ;~ 1359:1DC2
cs=0x1359;eip=0x001dc4; 	X(PUSH(ax));	// 37878 push    ax ;~ 1359:1DC4
cs=0x1359;eip=0x001dc5; 	R(CALLF(load_skybox,0));	// 37879 call    load_skybox ;~ 1359:1DC5
cs=0x1359;eip=0x001dca; 	T(ADD(sp, 2));	// 37880 add     sp, 2 ;~ 1359:1DCA
cs=0x1359;eip=0x001dcd; 	R(CALLF(shape3d_load_all,0));	// 37881 call    shape3d_load_all ;~ 1359:1DCD
cs=0x1359;eip=0x001dd2; 	T(OR(ax, ax));	// 37882 or      ax, ax ;~ 1359:1DD2
cs=0x1359;eip=0x001dd4; 	R(JZ(loc_2394e));	// 37883 jz      short loc_2394E ;~ 1359:1DD4
loc_23946:
	// 6994 
cs=0x1359;eip=0x001dd6; 	T(MOV(ax, 1));	// 37887 mov     ax, 1 ;~ 1359:1DD6
cs=0x1359;eip=0x001dd9; 	T(MOV(sp, bp));	// 37888 mov     sp, bp ;~ 1359:1DD9
cs=0x1359;eip=0x001ddb; 	X(POP(bp));	// 37889 pop     bp ;~ 1359:1DDB
cs=0x1359;eip=0x001ddc; 	R(RETF(0));	// 37890 retf ;~ 1359:1DDC
loc_2394e:
	// 6995 
cs=0x1359;eip=0x001dde; 	T(CMP(video_flag5_is0, 0));	// 37895 cmp     video_flag5_is0, 0 ;~ 1359:1DDE
cs=0x1359;eip=0x001de3; 	R(JNZ(loc_239a3));	// 37896 jnz     short loc_239A3 ;~ 1359:1DE3
cs=0x1359;eip=0x001de5; 	T(MOV(ax, video_flag1_is1));	// 37897 mov     ax, video_flag1_is1 ;~ 1359:1DE5
cs=0x1359;eip=0x001de8; 	X(IMUL1_2(video_flag4_is1));	// 37898 imul    video_flag4_is1 ;~ 1359:1DE8
cs=0x1359;eip=0x001dec; 	T(CWD);	// 37899 cwd ;~ 1359:1DEC
cs=0x1359;eip=0x001ded; 	X(PUSH(dx));	// 37900 push    dx ;~ 1359:1DED
cs=0x1359;eip=0x001dee; 	X(PUSH(ax));	// 37901 push    ax ;~ 1359:1DEE
cs=0x1359;eip=0x001def; 	T(MOV(ax, 0x0FA00));	// 37902 mov     ax, 0FA00h ;~ 1359:1DEF
cs=0x1359;eip=0x001df2; 	T(SUB(dx, dx));	// 37903 sub     dx, dx ;~ 1359:1DF2
cs=0x1359;eip=0x001df4; 	X(PUSH(dx));	// 37904 push    dx ;~ 1359:1DF4
cs=0x1359;eip=0x001df5; 	X(PUSH(ax));	// 37905 push    ax ;~ 1359:1DF5
cs=0x1359;eip=0x001df6; 	R(CALLF(__afldiv,0));	// 37906 call    __aFldiv ;~ 1359:1DF6
cs=0x1359;eip=0x001dfb; 	T(ADD(ax, 0x12));	// 37907 add     ax, 12h ;~ 1359:1DFB
cs=0x1359;eip=0x001dfe; 	T(ADC(dx, 0));	// 37908 adc     dx, 0 ;~ 1359:1DFE
cs=0x1359;eip=0x001e01; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 37909 mov     [bp+var_8], ax ;~ 1359:1E01
cs=0x1359;eip=0x001e04; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 37910 mov     [bp+var_6], dx ;~ 1359:1E04
cs=0x1359;eip=0x001e07; 	R(CALLF(mmgr_get_res_ofs_diff_scaled,0));	// 37911 call    mmgr_get_res_ofs_diff_scaled ;~ 1359:1E07
cs=0x1359;eip=0x001e0c; 	T(CMP(dx, *(dw*)(raddr(ss,bp+var_6))));	// 37912 cmp     dx, [bp+var_6] ;~ 1359:1E0C
cs=0x1359;eip=0x001e0f; 	R(JG(loc_23988));	// 37913 jg      short loc_23988 ;~ 1359:1E0F
cs=0x1359;eip=0x001e11; 	R(JL(loc_23946));	// 37914 jl      short loc_23946 ;~ 1359:1E11
cs=0x1359;eip=0x001e13; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_8))));	// 37915 cmp     ax, [bp+var_8] ;~ 1359:1E13
cs=0x1359;eip=0x001e16; 	R(JBE(loc_23946));	// 37916 jbe     short loc_23946 ;~ 1359:1E16
loc_23988:
	// 6996 
cs=0x1359;eip=0x001e18; 	T(MOV(ax, 0x0F));	// 37919 mov     ax, 0Fh ;~ 1359:1E18
cs=0x1359;eip=0x001e1b; 	X(PUSH(ax));	// 37920 push    ax ;~ 1359:1E1B
cs=0x1359;eip=0x001e1c; 	T(MOV(ax, 0x0C8));	// 37921 mov     ax, 0C8h ; 'È' ;~ 1359:1E1C
cs=0x1359;eip=0x001e1f; 	X(PUSH(ax));	// 37922 push    ax ;~ 1359:1E1F
cs=0x1359;eip=0x001e20; 	T(MOV(ax, 0x140));	// 37923 mov     ax, 140h ;~ 1359:1E20
cs=0x1359;eip=0x001e23; 	X(PUSH(ax));	// 37924 push    ax ;~ 1359:1E23
cs=0x1359;eip=0x001e24; 	R(CALLF(sprite_make_wnd,0));	// 37925 call    sprite_make_wnd ;~ 1359:1E24
cs=0x1359;eip=0x001e29; 	T(ADD(sp, 6));	// 37926 add     sp, 6 ;~ 1359:1E29
cs=0x1359;eip=0x001e2c; 	X(MOV(*(dw*)(((db*)&wndsprite)), ax));	// 37927 mov     word ptr wndsprite, ax ;~ 1359:1E2C
cs=0x1359;eip=0x001e2f; 	X(MOV(*(dw*)(((db*)&wndsprite)+2), dx));	// 37928 mov     word ptr wndsprite+2, dx ;~ 1359:1E2F
loc_239a3:
	// 6997 
cs=0x1359;eip=0x001e33; 	X(MOV(followopponentflag, 0));	// 37931 mov     followOpponentFlag, 0 ;~ 1359:1E33
cs=0x1359;eip=0x001e38; 	X(MOV(is_in_replay_copy, 0x0FF));	// 37932 mov     is_in_replay_copy, 0FFh ;~ 1359:1E38
cs=0x1359;eip=0x001e3d; 	T(SUB(ax, ax));	// 37933 sub     ax, ax ;~ 1359:1E3D
cs=0x1359;eip=0x001e3f; 	T(MOV(sp, bp));	// 37934 mov     sp, bp ;~ 1359:1E3F
cs=0x1359;eip=0x001e41; 	X(POP(bp));	// 37935 pop     bp ;~ 1359:1E41
cs=0x1359;eip=0x001e42; 	R(RETF(0));	// 37936 retf ;~ 1359:1E42
free_player_cars:
	// 37945 
cs=0x1359;eip=0x001e44; 	T(CMP(video_flag5_is0, 0));	// 37947 cmp     video_flag5_is0, 0 ;~ 1359:1E44
ret_1359_1e49:
	// 6998 
cs=0x1359;eip=0x001e49; 	R(JNZ(loc_239d4));	// 37948 jnz     short loc_239D4 ;~ 1359:1E49
cs=0x1359;eip=0x001e4b; 	T(MOV(ax, *(dw*)(((db*)&wndsprite))));	// 37949 mov     ax, word ptr wndsprite ;~ 1359:1E4B
cs=0x1359;eip=0x001e4e; 	T(OR(ax, *(dw*)(((db*)&wndsprite)+2)));	// 37950 or      ax, word ptr wndsprite+2 ;~ 1359:1E4E
cs=0x1359;eip=0x001e52; 	R(JZ(loc_239d4));	// 37951 jz      short loc_239D4 ;~ 1359:1E52
cs=0x1359;eip=0x001e54; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 37952 push    word ptr wndsprite+2 ;~ 1359:1E54
cs=0x1359;eip=0x001e58; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 37953 push    word ptr wndsprite ;~ 1359:1E58
cs=0x1359;eip=0x001e5c; 	R(CALLF(sprite_free_wnd,0));	// 37954 call    sprite_free_wnd ;~ 1359:1E5C
cs=0x1359;eip=0x001e61; 	T(ADD(sp, 4));	// 37955 add     sp, 4 ;~ 1359:1E61
loc_239d4:
	// 6999 
cs=0x1359;eip=0x001e64; 	R(CALLF(shape3d_free_all,0));	// 37959 call    shape3d_free_all ;~ 1359:1E64
cs=0x1359;eip=0x001e69; 	R(CALLF(unload_skybox,0));	// 37960 call    unload_skybox ;~ 1359:1E69
cs=0x1359;eip=0x001e6e; 	R(CALLF(free_sdgame2,0));	// 37961 call    free_sdgame2 ;~ 1359:1E6E
cs=0x1359;eip=0x001e73; 	X(PUSH(word_449a2));	// 37962 push    word_449A2 ;~ 1359:1E73
cs=0x1359;eip=0x001e77; 	X(PUSH(gameresptr));	// 37963 push    gameresptr ;~ 1359:1E77
cs=0x1359;eip=0x001e7b; 	R(CALLF(unload_resource,0));	// 37964 call    unload_resource ;~ 1359:1E7B
cs=0x1359;eip=0x001e80; 	T(ADD(sp, 4));	// 37965 add     sp, 4 ;~ 1359:1E80
cs=0x1359;eip=0x001e83; 	T(CMP(idle_expired, 0));	// 37966 cmp     idle_expired, 0 ;~ 1359:1E83
cs=0x1359;eip=0x001e88; 	R(JNZ(loc_23a15));	// 37967 jnz     short loc_23A15 ;~ 1359:1E88
cs=0x1359;eip=0x001e8a; 	X(PUSH(word_45d0a));	// 37968 push    word_45D0A ;~ 1359:1E8A
cs=0x1359;eip=0x001e8e; 	X(PUSH(sdgameresptr));	// 37969 push    sdgameresptr ;~ 1359:1E8E
cs=0x1359;eip=0x001e92; 	R(CALLF(mmgr_free,0));	// 37970 call    mmgr_free ;~ 1359:1E92
cs=0x1359;eip=0x001e97; 	T(ADD(sp, 4));	// 37971 add     sp, 4 ;~ 1359:1E97
cs=0x1359;eip=0x001e9a; 	T(MOV(ax, 3));	// 37972 mov     ax, 3 ;~ 1359:1E9A
cs=0x1359;eip=0x001e9d; 	X(PUSH(ax));	// 37973 push    ax ;~ 1359:1E9D
cs=0x1359;eip=0x001e9e; 	X(PUSH(cs));	// 37974 push    cs ;~ 1359:1E9E
cs=0x1359;eip=0x001e9f; 	R(CALL(setup_car_shapes,0));	// 37975 call    near ptr setup_car_shapes ;~ 1359:1E9F
cs=0x1359;eip=0x001ea2; 	T(ADD(sp, 2));	// 37976 add     sp, 2 ;~ 1359:1EA2
loc_23a15:
	// 7000 
cs=0x1359;eip=0x001ea5; 	X(PUSH(word_459f6));	// 37979 push    word_459F6 ;~ 1359:1EA5
cs=0x1359;eip=0x001ea9; 	X(PUSH(fontledresptr));	// 37980 push    fontledresptr ;~ 1359:1EA9
cs=0x1359;eip=0x001ead; 	R(CALLF(mmgr_free,0));	// 37981 call    mmgr_free ;~ 1359:1EAD
cs=0x1359;eip=0x001eb2; 	T(ADD(sp, 4));	// 37982 add     sp, 4 ;~ 1359:1EB2
cs=0x1359;eip=0x001eb5; 	R(CALLF(audio_remove_driver_timer,0));	// 37983 call    audio_remove_driver_timer ;~ 1359:1EB5
cs=0x1359;eip=0x001eba; 	X(PUSH(word_45e10));	// 37984 push    word_45E10 ;~ 1359:1EBA
cs=0x1359;eip=0x001ebe; 	X(PUSH(engptr));	// 37985 push    engptr ;~ 1359:1EBE
cs=0x1359;eip=0x001ec2; 	R(CALLF(mmgr_free,0));	// 37986 call    mmgr_free ;~ 1359:1EC2
cs=0x1359;eip=0x001ec7; 	T(ADD(sp, 4));	// 37987 add     sp, 4 ;~ 1359:1EC7
cs=0x1359;eip=0x001eca; 	X(PUSH(word_454a8));	// 37988 push    word_454A8 ;~ 1359:1ECA
cs=0x1359;eip=0x001ece; 	X(PUSH(eng1ptr));	// 37989 push    eng1ptr ;~ 1359:1ECE
cs=0x1359;eip=0x001ed2; 	R(CALLF(mmgr_free,0));	// 37990 call    mmgr_free ;~ 1359:1ED2
cs=0x1359;eip=0x001ed7; 	T(ADD(sp, 4));	// 37991 add     sp, 4 ;~ 1359:1ED7
cs=0x1359;eip=0x001eda; 	R(CALLF(shape3d_free_car_shapes,0));	// 37992 call    shape3d_free_car_shapes ;~ 1359:1EDA
cs=0x1359;eip=0x001edf; 	R(RETF(0));	// 37993 retf ;~ 1359:1EDF
mouse_minmax_position:
	// 38001 
#undef arg_0
#define arg_0 6
	// 38004 arg_0           = word ptr  6 ;~ 1359:1EE0
ret_1359_1ee0:
	// 7001 
cs=0x1359;eip=0x001ee0; 	X(PUSH(bp));	// 38006 push    bp ;~ 1359:1EE0
cs=0x1359;eip=0x001ee1; 	T(MOV(bp, sp));	// 38007 mov     bp, sp ;~ 1359:1EE1
cs=0x1359;eip=0x001ee3; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 38008 cmp     [bp+arg_0], 0 ;~ 1359:1EE3
cs=0x1359;eip=0x001ee7; 	R(JZ(loc_23a82));	// 38009 jz      short loc_23A82 ;~ 1359:1EE7
cs=0x1359;eip=0x001ee9; 	T(MOV(ax, 0x0C8));	// 38010 mov     ax, 0C8h ; 'È' ;~ 1359:1EE9
cs=0x1359;eip=0x001eec; 	X(PUSH(ax));	// 38011 push    ax ;~ 1359:1EEC
cs=0x1359;eip=0x001eed; 	T(MOV(ax, 0x131));	// 38012 mov     ax, 131h ;~ 1359:1EED
cs=0x1359;eip=0x001ef0; 	X(PUSH(ax));	// 38013 push    ax ;~ 1359:1EF0
cs=0x1359;eip=0x001ef1; 	T(SUB(ax, ax));	// 38014 sub     ax, ax ;~ 1359:1EF1
cs=0x1359;eip=0x001ef3; 	X(PUSH(ax));	// 38015 push    ax ;~ 1359:1EF3
cs=0x1359;eip=0x001ef4; 	T(MOV(ax, 0x0F));	// 38016 mov     ax, 0Fh ;~ 1359:1EF4
cs=0x1359;eip=0x001ef7; 	X(PUSH(ax));	// 38017 push    ax ;~ 1359:1EF7
cs=0x1359;eip=0x001ef8; 	R(CALLF(mouse_set_minmax,0));	// 38018 call    mouse_set_minmax ;~ 1359:1EF8
cs=0x1359;eip=0x001efd; 	T(ADD(sp, 8));	// 38019 add     sp, 8 ;~ 1359:1EFD
cs=0x1359;eip=0x001f00; 	T(MOV(ax, 0x64));	// 38020 mov     ax, 64h ; 'd' ;~ 1359:1F00
cs=0x1359;eip=0x001f03; 	X(PUSH(ax));	// 38021 push    ax ;~ 1359:1F03
cs=0x1359;eip=0x001f04; 	T(MOV(ax, 0x0A0));	// 38022 mov     ax, 0A0h ; ' ' ;~ 1359:1F04
cs=0x1359;eip=0x001f07; 	X(PUSH(ax));	// 38023 push    ax ;~ 1359:1F07
cs=0x1359;eip=0x001f08; 	R(CALLF(mouse_set_position,0));	// 38024 call    mouse_set_position ;~ 1359:1F08
cs=0x1359;eip=0x001f0d; 	T(ADD(sp, 4));	// 38025 add     sp, 4 ;~ 1359:1F0D
cs=0x1359;eip=0x001f10; 	X(POP(bp));	// 38026 pop     bp ;~ 1359:1F10
cs=0x1359;eip=0x001f11; 	R(RETF(0));	// 38027 retf ;~ 1359:1F11
loc_23a82:
	// 7002 
cs=0x1359;eip=0x001f12; 	T(MOV(ax, 0x0C8));	// 38031 mov     ax, 0C8h ; 'È' ;~ 1359:1F12
cs=0x1359;eip=0x001f15; 	X(PUSH(ax));	// 38032 push    ax ;~ 1359:1F15
cs=0x1359;eip=0x001f16; 	T(MOV(ax, 0x140));	// 38033 mov     ax, 140h ;~ 1359:1F16
cs=0x1359;eip=0x001f19; 	X(PUSH(ax));	// 38034 push    ax ;~ 1359:1F19
cs=0x1359;eip=0x001f1a; 	T(SUB(ax, ax));	// 38035 sub     ax, ax ;~ 1359:1F1A
cs=0x1359;eip=0x001f1c; 	X(PUSH(ax));	// 38036 push    ax ;~ 1359:1F1C
cs=0x1359;eip=0x001f1d; 	X(PUSH(ax));	// 38037 push    ax ;~ 1359:1F1D
cs=0x1359;eip=0x001f1e; 	R(CALLF(mouse_set_minmax,0));	// 38038 call    mouse_set_minmax ;~ 1359:1F1E
cs=0x1359;eip=0x001f23; 	T(ADD(sp, 8));	// 38039 add     sp, 8 ;~ 1359:1F23
cs=0x1359;eip=0x001f26; 	X(POP(bp));	// 38040 pop     bp ;~ 1359:1F26
cs=0x1359;eip=0x001f27; 	R(RETF(0));	// 38041 retf ;~ 1359:1F27
replay_unk:
	// 38049 
#undef var_a
#define var_a -0x0A
	// 38051 var_A           = byte ptr -0Ah ;~ 1359:1F28
#undef var_8
#define var_8 -8
	// 38052 var_8           = byte ptr -8 ;~ 1359:1F28
#undef var_6
#define var_6 -6
	// 38053 var_6           = byte ptr -6 ;~ 1359:1F28
ret_1359_1f28:
	// 7003 
cs=0x1359;eip=0x001f28; 	X(PUSH(bp));	// 38055 push    bp ;~ 1359:1F28
cs=0x1359;eip=0x001f29; 	T(MOV(bp, sp));	// 38056 mov     bp, sp ;~ 1359:1F29
cs=0x1359;eip=0x001f2b; 	T(SUB(sp, 0x0A));	// 38057 sub     sp, 0Ah ;~ 1359:1F2B
cs=0x1359;eip=0x001f2e; 	X(PUSH(di));	// 38058 push    di ;~ 1359:1F2E
cs=0x1359;eip=0x001f2f; 	X(PUSH(si));	// 38059 push    si ;~ 1359:1F2F
cs=0x1359;eip=0x001f30; 	T(MOV(si, word_445d4));	// 38060 mov     si, word_445D4 ;~ 1359:1F30
cs=0x1359;eip=0x001f34; 	T(AND(si, 0x3F));	// 38061 and     si, 3Fh ;~ 1359:1F34
cs=0x1359;eip=0x001f37; 	T(CMP(*((&byte_442ea)+si), 0));	// 38062 cmp     byte_442EA[si], 0 ;~ 1359:1F37
cs=0x1359;eip=0x001f3c; 	R(JNZ(loc_23ab1));	// 38063 jnz     short loc_23AB1 ;~ 1359:1F3C
cs=0x1359;eip=0x001f3e; 	R(JMP(loc_23b45));	// 38064 jmp     loc_23B45 ;~ 1359:1F3E
loc_23ab1:
	// 7004 
cs=0x1359;eip=0x001f41; 	T(MOV(al, *((&byte_44292)+si)));	// 38068 mov     al, byte_44292[si] ;~ 1359:1F41
cs=0x1359;eip=0x001f45; 	T(CBW);	// 38069 cbw ;~ 1359:1F45
cs=0x1359;eip=0x001f46; 	T(MOV(di, ax));	// 38070 mov     di, ax ;~ 1359:1F46
cs=0x1359;eip=0x001f48; 	T(MOV(ax, word_44612));	// 38071 mov     ax, word_44612 ;~ 1359:1F48
cs=0x1359;eip=0x001f4b; 	T(MOV(cl, 0x0A));	// 38072 mov     cl, 0Ah ;~ 1359:1F4B
cs=0x1359;eip=0x001f4d; 	T(SHR(ax, cl));	// 38073 shr     ax, cl ;~ 1359:1F4D
cs=0x1359;eip=0x001f4f; 	T(AND(al, 0x0FC));	// 38074 and     al, 0FCh ;~ 1359:1F4F
cs=0x1359;eip=0x001f51; 	X(MOV(*(raddr(ss,bp+var_8)), al));	// 38075 mov     [bp+var_8], al ;~ 1359:1F51
cs=0x1359;eip=0x001f54; 	T(CBW);	// 38076 cbw ;~ 1359:1F54
cs=0x1359;eip=0x001f55; 	T(MOV(bx, ax));	// 38077 mov     bx, ax ;~ 1359:1F55
cs=0x1359;eip=0x001f57; 	T(ADD(bx, steerwhlresptable_ptr));	// 38078 add     bx, steerWhlRespTable_ptr ;~ 1359:1F57
cs=0x1359;eip=0x001f5b; 	T(MOV(al, *(raddr(ds,bx+1))));	// 38079 mov     al, [bx+1] ;~ 1359:1F5B
cs=0x1359;eip=0x001f5e; 	X(MOV(*(raddr(ss,bp+var_a)), al));	// 38080 mov     [bp+var_A], al ;~ 1359:1F5E
cs=0x1359;eip=0x001f61; 	T(CMP(word_44606, di));	// 38081 cmp     word_44606, di ;~ 1359:1F61
cs=0x1359;eip=0x001f65; 	R(JGE(loc_23ae0));	// 38082 jge     short loc_23AE0 ;~ 1359:1F65
cs=0x1359;eip=0x001f67; 	T(CMP(word_44606, 0x0FFFF));	// 38083 cmp     word_44606, 0FFFFh ;~ 1359:1F67
cs=0x1359;eip=0x001f6c; 	R(JGE(loc_23af2));	// 38084 jge     short loc_23AF2 ;~ 1359:1F6C
cs=0x1359;eip=0x001f6e; 	R(JMP(loc_23aed));	// 38085 jmp     short loc_23AED ;~ 1359:1F6E
loc_23ae0:
	// 7005 
cs=0x1359;eip=0x001f70; 	T(CMP(word_44606, di));	// 38089 cmp     word_44606, di ;~ 1359:1F70
cs=0x1359;eip=0x001f74; 	R(JLE(loc_23af2));	// 38090 jle     short loc_23AF2 ;~ 1359:1F74
cs=0x1359;eip=0x001f76; 	T(CMP(word_44606, 1));	// 38091 cmp     word_44606, 1 ;~ 1359:1F76
cs=0x1359;eip=0x001f7b; 	R(JLE(loc_23af2));	// 38092 jle     short loc_23AF2 ;~ 1359:1F7B
loc_23aed:
	// 7006 
cs=0x1359;eip=0x001f7d; 	T(MOV(cl, 2));	// 38095 mov     cl, 2 ;~ 1359:1F7D
cs=0x1359;eip=0x001f7f; 	X(SHL(*(raddr(ss,bp+var_a)), cl));	// 38096 shl     [bp+var_A], cl ;~ 1359:1F7F
loc_23af2:
	// 7007 
cs=0x1359;eip=0x001f82; 	T(CMP(word_44606, di));	// 38100 cmp     word_44606, di ;~ 1359:1F82
cs=0x1359;eip=0x001f86; 	R(JLE(loc_23b0c));	// 38101 jle     short loc_23B0C ;~ 1359:1F86
cs=0x1359;eip=0x001f88; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 38102 mov     al, [bp+var_A] ;~ 1359:1F88
cs=0x1359;eip=0x001f8b; 	T(CBW);	// 38103 cbw ;~ 1359:1F8B
cs=0x1359;eip=0x001f8c; 	T(MOV(cx, word_44606));	// 38104 mov     cx, word_44606 ;~ 1359:1F8C
cs=0x1359;eip=0x001f90; 	T(SUB(cx, ax));	// 38105 sub     cx, ax ;~ 1359:1F90
cs=0x1359;eip=0x001f92; 	T(CMP(cx, di));	// 38106 cmp     cx, di ;~ 1359:1F92
cs=0x1359;eip=0x001f94; 	R(JL(loc_23b0c));	// 38107 jl      short loc_23B0C ;~ 1359:1F94
cs=0x1359;eip=0x001f96; 	X(MOV(*(raddr(ss,bp+var_6)), 8));	// 38108 mov     [bp+var_6], 8 ;~ 1359:1F96
cs=0x1359;eip=0x001f9a; 	R(JMP(loc_23b28));	// 38109 jmp     short loc_23B28 ;~ 1359:1F9A
loc_23b0c:
	// 7008 
cs=0x1359;eip=0x001f9c; 	T(CMP(word_44606, di));	// 38114 cmp     word_44606, di ;~ 1359:1F9C
cs=0x1359;eip=0x001fa0; 	R(JGE(loc_23b24));	// 38115 jge     short loc_23B24 ;~ 1359:1FA0
cs=0x1359;eip=0x001fa2; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 38116 mov     al, [bp+var_A] ;~ 1359:1FA2
cs=0x1359;eip=0x001fa5; 	T(CBW);	// 38117 cbw ;~ 1359:1FA5
cs=0x1359;eip=0x001fa6; 	T(ADD(ax, word_44606));	// 38118 add     ax, word_44606 ;~ 1359:1FA6
cs=0x1359;eip=0x001faa; 	T(CMP(ax, di));	// 38119 cmp     ax, di ;~ 1359:1FAA
cs=0x1359;eip=0x001fac; 	R(JG(loc_23b24));	// 38120 jg      short loc_23B24 ;~ 1359:1FAC
cs=0x1359;eip=0x001fae; 	X(MOV(*(raddr(ss,bp+var_6)), 4));	// 38121 mov     [bp+var_6], 4 ;~ 1359:1FAE
cs=0x1359;eip=0x001fb2; 	R(JMP(loc_23b28));	// 38122 jmp     short loc_23B28 ;~ 1359:1FB2
loc_23b24:
	// 7009 
cs=0x1359;eip=0x001fb4; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 38127 mov     [bp+var_6], 0 ;~ 1359:1FB4
loc_23b28:
	// 7010 
cs=0x1359;eip=0x001fb8; 	T(CMP(*(raddr(ss,bp+var_6)), 0));	// 38131 cmp     [bp+var_6], 0 ;~ 1359:1FB8
cs=0x1359;eip=0x001fbc; 	R(JZ(loc_23b40));	// 38132 jz      short loc_23B40 ;~ 1359:1FBC
cs=0x1359;eip=0x001fbe; 	T(MOV(bx, word_445d4));	// 38133 mov     bx, word_445D4 ;~ 1359:1FBE
cs=0x1359;eip=0x001fc2; 	T(ADD(bx, *(dw*)(((db*)&td16_rpl_buffer))));	// 38134 add     bx, word ptr td16_rpl_buffer ;~ 1359:1FC2
cs=0x1359;eip=0x001fc6; 	T(MOV(es, *(dw*)(((db*)&td16_rpl_buffer)+2)));	// 38135 mov     es, word ptr td16_rpl_buffer+2 ;~ 1359:1FC6
cs=0x1359;eip=0x001fca; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 38136 mov     al, [bp+var_6] ;~ 1359:1FCA
cs=0x1359;eip=0x001fcd; 	X(OR(*(raddr(es,bx)), al));	// 38137 or      es:[bx], al     ; writing action into rpl buff?! ;~ 1359:1FCD
loc_23b40:
	// 7011 
cs=0x1359;eip=0x001fd0; 	X(MOV(*((&byte_442ea)+si), 0));	// 38140 mov     byte_442EA[si], 0 ;~ 1359:1FD0
loc_23b45:
	// 7012 
cs=0x1359;eip=0x001fd5; 	X(POP(si));	// 38143 pop     si ;~ 1359:1FD5
cs=0x1359;eip=0x001fd6; 	X(POP(di));	// 38144 pop     di ;~ 1359:1FD6
cs=0x1359;eip=0x001fd7; 	T(MOV(sp, bp));	// 38145 mov     sp, bp ;~ 1359:1FD7
cs=0x1359;eip=0x001fd9; 	X(POP(bp));	// 38146 pop     bp ;~ 1359:1FD9
cs=0x1359;eip=0x001fda; 	R(RETF(0));	// 38147 retf ;~ 1359:1FDA
loop_game:
	// 38157 
#undef var_44
#define var_44 -0x44
	// 38160 var_44          = word ptr -44h ;~ 1359:1FDC
#undef var_42
#define var_42 -0x42
	// 38161 var_42          = word ptr -42h ;~ 1359:1FDC
#undef var_40
#define var_40 -0x40
	// 38162 var_40          = byte ptr -40h ;~ 1359:1FDC
#undef var_3e
#define var_3e -0x3E
	// 38163 var_3E          = byte ptr -3Eh ;~ 1359:1FDC
#undef var_3d
#define var_3d -0x3D
	// 38164 var_3D          = byte ptr -3Dh ;~ 1359:1FDC
#undef var_3c
#define var_3c -0x3C
	// 38165 var_3C          = byte ptr -3Ch ;~ 1359:1FDC
#undef var_3b
#define var_3b -0x3B
	// 38166 var_3B          = byte ptr -3Bh ;~ 1359:1FDC
#undef var_38
#define var_38 -0x38
	// 38167 var_38          = byte ptr -38h ;~ 1359:1FDC
#undef var_37
#define var_37 -0x37
	// 38168 var_37          = byte ptr -37h ;~ 1359:1FDC
#undef var_36
#define var_36 -0x36
	// 38169 var_36          = byte ptr -36h ;~ 1359:1FDC
#undef var_35
#define var_35 -0x35
	// 38170 var_35          = byte ptr -35h ;~ 1359:1FDC
#undef var_34
#define var_34 -0x34
	// 38171 var_34          = byte ptr -34h ;~ 1359:1FDC
#undef var_24
#define var_24 -0x24
	// 38172 var_24          = word ptr -24h ;~ 1359:1FDC
#undef var_22
#define var_22 -0x22
	// 38173 var_22          = word ptr -22h ;~ 1359:1FDC
#undef var_20
#define var_20 -0x20
	// 38174 var_20          = byte ptr -20h ;~ 1359:1FDC
#undef var_1e
#define var_1e -0x1E
	// 38175 var_1E          = byte ptr -1Eh ;~ 1359:1FDC
#undef var_18
#define var_18 -0x18
	// 38176 var_18          = word ptr -18h ;~ 1359:1FDC
#undef var_16
#define var_16 -0x16
	// 38177 var_16          = word ptr -16h ;~ 1359:1FDC
#undef var_14
#define var_14 -0x14
	// 38178 var_14          = byte ptr -14h ;~ 1359:1FDC
#undef var_12
#define var_12 -0x12
	// 38179 var_12          = word ptr -12h ;~ 1359:1FDC
#undef var_10
#define var_10 -0x10
	// 38180 var_10          = word ptr -10h ;~ 1359:1FDC
#undef var_e
#define var_e -0x0E
	// 38181 var_E           = word ptr -0Eh ;~ 1359:1FDC
#undef var_c
#define var_c -0x0C
	// 38182 var_C           = word ptr -0Ch ;~ 1359:1FDC
#undef var_a
#define var_a -0x0A
	// 38183 var_A           = word ptr -0Ah ;~ 1359:1FDC
#undef var_4
#define var_4 -4
	// 38184 var_4           = word ptr -4 ;~ 1359:1FDC
#undef var_2
#define var_2 -2
	// 38185 var_2           = byte ptr -2 ;~ 1359:1FDC
#undef arg_0
#define arg_0 6
	// 38186 arg_0           = word ptr  6 ;~ 1359:1FDC
#undef arg_2
#define arg_2 8
	// 38187 arg_2           = word ptr  8 ;~ 1359:1FDC
#undef arg_4
#define arg_4 0x0A
	// 38188 arg_4           = word ptr  0Ah ;~ 1359:1FDC
ret_1359_1fdc:
	// 7013 
cs=0x1359;eip=0x001fdc; 	X(PUSH(bp));	// 38190 push    bp ;~ 1359:1FDC
cs=0x1359;eip=0x001fdd; 	T(MOV(bp, sp));	// 38191 mov     bp, sp ;~ 1359:1FDD
cs=0x1359;eip=0x001fdf; 	T(SUB(sp, 0x44));	// 38192 sub     sp, 44h ;~ 1359:1FDF
cs=0x1359;eip=0x001fe2; 	X(PUSH(di));	// 38193 push    di              ; int ;~ 1359:1FE2
cs=0x1359;eip=0x001fe3; 	X(PUSH(si));	// 38194 push    si              ; char * ;~ 1359:1FE3
cs=0x1359;eip=0x001fe4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 38195 mov     ax, [bp+arg_0] ;~ 1359:1FE4
cs=0x1359;eip=0x001fe7; 	T(OR(ax, ax));	// 38196 or      ax, ax ;~ 1359:1FE7
cs=0x1359;eip=0x001fe9; 	R(JZ(loc_23b70));	// 38197 jz      short loc_23B70 ;~ 1359:1FE9
cs=0x1359;eip=0x001feb; 	T(CMP(ax, 1));	// 38198 cmp     ax, 1 ;~ 1359:1FEB
cs=0x1359;eip=0x001fee; 	R(JZ(loc_23ba6));	// 38199 jz      short loc_23BA6 ;~ 1359:1FEE
cs=0x1359;eip=0x001ff0; 	T(CMP(ax, 2));	// 38200 cmp     ax, 2 ;~ 1359:1FF0
cs=0x1359;eip=0x001ff3; 	R(JZ(loc_23b8d));	// 38201 jz      short loc_23B8D ;~ 1359:1FF3
cs=0x1359;eip=0x001ff5; 	T(CMP(ax, 3));	// 38202 cmp     ax, 3 ;~ 1359:1FF5
cs=0x1359;eip=0x001ff8; 	R(JNZ(loc_23b6d));	// 38203 jnz     short loc_23B6D ;~ 1359:1FF8
cs=0x1359;eip=0x001ffa; 	R(JMP(loc_23fb8));	// 38204 jmp     loc_23FB8 ;~ 1359:1FFA
loc_23b6d:
	// 7014 
cs=0x1359;eip=0x001ffd; 	R(JMP(loc_24d5e));	// 38208 jmp     loc_24D5E ;~ 1359:1FFD
loc_23b70:
	// 7015 
cs=0x1359;eip=0x002000; 	T(MOV(ax, offset(dseg,rplyshapes)));	// 38212 mov     ax, offset rplyshapes ;~ 1359:2000
cs=0x1359;eip=0x002003; 	X(PUSH(ax));	// 38213 push    ax ;~ 1359:2003
cs=0x1359;eip=0x002004; 	T(MOV(ax, offset(dseg,arplyrpicrpacrpmcrptcbof6bof5b)));	// 38214 mov     ax, offset aRplyrpicrpacrpmcrptcbof6bof5b ; "rplyrpicrpacrpmcrptcbof6bof5bof4bof3bof"... ;~ 1359:2004
cs=0x1359;eip=0x002007; 	X(PUSH(ax));	// 38215 push    ax ;~ 1359:2007
cs=0x1359;eip=0x002008; 	X(PUSH(word_45d0a));	// 38216 push    word_45D0A ;~ 1359:2008
cs=0x1359;eip=0x00200c; 	X(PUSH(sdgameresptr));	// 38217 push    sdgameresptr ;~ 1359:200C
cs=0x1359;eip=0x002010; 	R(CALLF(locate_many_resources,0));	// 38218 call    locate_many_resources ;~ 1359:2010
cs=0x1359;eip=0x002015; 	T(ADD(sp, 8));	// 38219 add     sp, 8 ;~ 1359:2015
cs=0x1359;eip=0x002018; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), 4));	// 38220 mov     [bp+arg_2], 4 ;~ 1359:2018
loc_23b8d:
	// 7016 
cs=0x1359;eip=0x00201d; 	T(SUB(si, si));	// 38223 sub     si, si ;~ 1359:201D
loc_23b8f:
	// 7017 
cs=0x1359;eip=0x00201f; 	X(MOV(*((&byte_40e6a)+si), 0));	// 38226 mov     byte_40E6A[si], 0 ;~ 1359:201F
cs=0x1359;eip=0x002024; 	T(INC(si));	// 38227 inc     si ;~ 1359:2024
cs=0x1359;eip=0x002025; 	T(CMP(si, 9));	// 38228 cmp     si, 9 ;~ 1359:2025
cs=0x1359;eip=0x002028; 	R(JL(loc_23b8f));	// 38229 jl      short loc_23B8F ;~ 1359:2028
cs=0x1359;eip=0x00202a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 38230 mov     bx, [bp+arg_2] ;~ 1359:202A
cs=0x1359;eip=0x00202d; 	X(MOV(*((&byte_40e6a)+bx), 1));	// 38231 mov     byte_40E6A[bx], 1 ;~ 1359:202D
cs=0x1359;eip=0x002032; 	R(JMP(loc_24d5e));	// 38232 jmp     loc_24D5E ;~ 1359:2032
loc_23ba6:
	// 7018 
cs=0x1359;eip=0x002036; 	T(MOV(al, byte_4432a));	// 38237 mov     al, byte_4432A ;~ 1359:2036
cs=0x1359;eip=0x002039; 	T(CBW);	// 38238 cbw ;~ 1359:2039
cs=0x1359;eip=0x00203a; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), ax));	// 38239 mov     [bp+var_42], ax ;~ 1359:203A
cs=0x1359;eip=0x00203d; 	T(MOV(bx, ax));	// 38240 mov     bx, ax ;~ 1359:203D
cs=0x1359;eip=0x00203f; 	T(CMP(*((&byte_449d8)+bx), 0));	// 38241 cmp     byte_449D8[bx], 0 ;~ 1359:203F
cs=0x1359;eip=0x002044; 	R(JZ(loc_23bb9));	// 38242 jz      short loc_23BB9 ;~ 1359:2044
cs=0x1359;eip=0x002046; 	R(JMP(loc_23c66));	// 38243 jmp     loc_23C66 ;~ 1359:2046
loc_23bb9:
	// 7019 
cs=0x1359;eip=0x002049; 	X(MOV(*((&byte_449d8)+bx), 1));	// 38247 mov     byte_449D8[bx], 1 ;~ 1359:2049
cs=0x1359;eip=0x00204e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_42))));	// 38248 mov     bx, [bp+var_42] ;~ 1359:204E
cs=0x1359;eip=0x002051; 	X(MOV(*((&byte_40e74)+bx), 0x0FF));	// 38249 mov     byte_40E74[bx], 0FFh ;~ 1359:2051
cs=0x1359;eip=0x002056; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_42))));	// 38250 mov     bx, [bp+var_42] ;~ 1359:2056
cs=0x1359;eip=0x002059; 	X(MOV(*((&byte_40e08)+bx), 0x0FF));	// 38251 mov     byte_40E08[bx], 0FFh ;~ 1359:2059
cs=0x1359;eip=0x00205e; 	T(SUB(si, si));	// 38252 sub     si, si ;~ 1359:205E
loc_23bd0:
	// 7020 
cs=0x1359;eip=0x002060; 	T(MOV(al, byte_4432a));	// 38255 mov     al, byte_4432A ;~ 1359:2060
cs=0x1359;eip=0x002063; 	T(CBW);	// 38256 cbw ;~ 1359:2063
cs=0x1359;eip=0x002064; 	T(MOV(bx, ax));	// 38257 mov     bx, ax ;~ 1359:2064
cs=0x1359;eip=0x002066; 	T(MOV(ax, si));	// 38258 mov     ax, si ;~ 1359:2066
cs=0x1359;eip=0x002068; 	T(SHL(ax, 1));	// 38259 shl     ax, 1 ;~ 1359:2068
cs=0x1359;eip=0x00206a; 	T(ADD(bx, ax));	// 38260 add     bx, ax ;~ 1359:206A
cs=0x1359;eip=0x00206c; 	X(MOV(*((&byte_40e7a)+bx), 0));	// 38261 mov     byte_40E7A[bx], 0 ;~ 1359:206C
cs=0x1359;eip=0x002071; 	T(INC(si));	// 38262 inc     si ;~ 1359:2071
cs=0x1359;eip=0x002072; 	T(CMP(si, 9));	// 38263 cmp     si, 9 ;~ 1359:2072
cs=0x1359;eip=0x002075; 	R(JL(loc_23bd0));	// 38264 jl      short loc_23BD0 ;~ 1359:2075
cs=0x1359;eip=0x002077; 	R(CALLF(mouse_draw_opaque_check,0));	// 38265 call    mouse_draw_opaque_check ;~ 1359:2077
cs=0x1359;eip=0x00207c; 	X(PUSH(*(dw*)(((db*)rplyshapes)+2)));	// 38266 push    rplyshapes+2 ;~ 1359:207C
cs=0x1359;eip=0x002080; 	X(PUSH(*(rplyshapes)));	// 38267 push    rplyshapes ;~ 1359:2080
cs=0x1359;eip=0x002084; 	R(CALLF(shape2d_op_unk,0));	// 38268 call    shape2d_op_unk ;~ 1359:2084
cs=0x1359;eip=0x002089; 	T(ADD(sp, 4));	// 38269 add     sp, 4 ;~ 1359:2089
cs=0x1359;eip=0x00208c; 	T(MOV(al, byte_4432a));	// 38270 mov     al, byte_4432A ;~ 1359:208C
cs=0x1359;eip=0x00208f; 	T(CBW);	// 38271 cbw ;~ 1359:208F
cs=0x1359;eip=0x002090; 	T(SHL(ax, 1));	// 38272 shl     ax, 1 ;~ 1359:2090
cs=0x1359;eip=0x002092; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), ax));	// 38273 mov     [bp+var_42], ax ;~ 1359:2092
cs=0x1359;eip=0x002095; 	T(MOV(bx, ax));	// 38274 mov     bx, ax ;~ 1359:2095
cs=0x1359;eip=0x002097; 	X(MOV(*(dw*)(((db*)&word_40e0a)+bx), 0x0FFFF));	// 38275 mov     word_40E0A[bx], 0FFFFh ;~ 1359:2097
cs=0x1359;eip=0x00209d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_42))));	// 38276 mov     bx, [bp+var_42] ;~ 1359:209D
cs=0x1359;eip=0x0020a0; 	X(MOV(*(dw*)(((db*)&word_40e76)+bx), 0x0FFFF));	// 38277 mov     word_40E76[bx], 0FFFFh ;~ 1359:20A0
cs=0x1359;eip=0x0020a6; 	T(MOV(ax, 1));	// 38278 mov     ax, 1 ;~ 1359:20A6
cs=0x1359;eip=0x0020a9; 	X(PUSH(ax));	// 38279 push    ax              ; int ;~ 1359:20A9
cs=0x1359;eip=0x0020aa; 	T(MOV(ax, word_449bc));	// 38280 mov     ax, word_449BC ;~ 1359:20AA
cs=0x1359;eip=0x0020ad; 	T(ADD(ax, elapsed_time1));	// 38281 add     ax, elapsed_time1 ;~ 1359:20AD
cs=0x1359;eip=0x0020b1; 	X(PUSH(ax));	// 38282 push    ax ;~ 1359:20B1
cs=0x1359;eip=0x0020b2; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 38283 mov     ax, offset resID_byte1 ;~ 1359:20B2
cs=0x1359;eip=0x0020b5; 	X(PUSH(ax));	// 38284 push    ax              ; char * ;~ 1359:20B5
cs=0x1359;eip=0x0020b6; 	R(CALLF(format_frame_as_string,0));	// 38285 call    format_frame_as_string ;~ 1359:20B6
cs=0x1359;eip=0x0020bb; 	T(ADD(sp, 6));	// 38286 add     sp, 6 ;~ 1359:20BB
cs=0x1359;eip=0x0020be; 	T(SUB(ax, ax));	// 38287 sub     ax, ax ;~ 1359:20BE
cs=0x1359;eip=0x0020c0; 	X(PUSH(ax));	// 38288 push    ax ;~ 1359:20C0
cs=0x1359;eip=0x0020c1; 	X(PUSH(dialog_fnt_colour));	// 38289 push    dialog_fnt_colour ;~ 1359:20C1
cs=0x1359;eip=0x0020c5; 	R(CALLF(font_set_unk,0));	// 38290 call    font_set_unk ;~ 1359:20C5
cs=0x1359;eip=0x0020ca; 	T(ADD(sp, 4));	// 38291 add     sp, 4 ;~ 1359:20CA
cs=0x1359;eip=0x0020cd; 	X(PUSH(word_459f6));	// 38292 push    word_459F6 ;~ 1359:20CD
cs=0x1359;eip=0x0020d1; 	X(PUSH(fontledresptr));	// 38293 push    fontledresptr ;~ 1359:20D1
cs=0x1359;eip=0x0020d5; 	R(CALLF(font_set_fontdef2,0));	// 38294 call    font_set_fontdef2 ;~ 1359:20D5
cs=0x1359;eip=0x0020da; 	T(ADD(sp, 4));	// 38295 add     sp, 4 ;~ 1359:20DA
cs=0x1359;eip=0x0020dd; 	T(MOV(ax, 0x0BB));	// 38296 mov     ax, 0BBh ; '»' ;~ 1359:20DD
cs=0x1359;eip=0x0020e0; 	X(PUSH(ax));	// 38297 push    ax ;~ 1359:20E0
cs=0x1359;eip=0x0020e1; 	T(MOV(ax, 0x0D8));	// 38298 mov     ax, 0D8h ; 'Ø' ;~ 1359:20E1
cs=0x1359;eip=0x0020e4; 	X(PUSH(ax));	// 38299 push    ax ;~ 1359:20E4
cs=0x1359;eip=0x0020e5; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 38300 mov     ax, offset resID_byte1 ;~ 1359:20E5
cs=0x1359;eip=0x0020e8; 	X(PUSH(ax));	// 38301 push    ax ;~ 1359:20E8
cs=0x1359;eip=0x0020e9; 	R(CALLF(sub_345bc,0));	// 38302 call    sub_345BC ;~ 1359:20E9
cs=0x1359;eip=0x0020ee; 	T(ADD(sp, 6));	// 38303 add     sp, 6 ;~ 1359:20EE
cs=0x1359;eip=0x0020f1; 	R(CALLF(font_set_fontdef,0));	// 38304 call    font_set_fontdef ;~ 1359:20F1
loc_23c66:
	// 7021 
cs=0x1359;eip=0x0020f6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 38307 mov     ax, [bp+arg_4] ;~ 1359:20F6
cs=0x1359;eip=0x0020f9; 	T(ADD(ax, elapsed_time1));	// 38308 add     ax, elapsed_time1 ;~ 1359:20F9
cs=0x1359;eip=0x0020fd; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), ax));	// 38309 mov     [bp+var_42], ax ;~ 1359:20FD
cs=0x1359;eip=0x002100; 	T(MOV(al, byte_4432a));	// 38310 mov     al, byte_4432A ;~ 1359:2100
cs=0x1359;eip=0x002103; 	T(CBW);	// 38311 cbw ;~ 1359:2103
cs=0x1359;eip=0x002104; 	T(SHL(ax, 1));	// 38312 shl     ax, 1 ;~ 1359:2104
cs=0x1359;eip=0x002106; 	T(ADD(ax, offset(dseg,word_40e0a)));	// 38313 add     ax, offset word_40E0A ;~ 1359:2106
cs=0x1359;eip=0x002109; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 38314 mov     [bp+var_44], ax ;~ 1359:2109
cs=0x1359;eip=0x00210c; 	T(MOV(bx, ax));	// 38315 mov     bx, ax ;~ 1359:210C
cs=0x1359;eip=0x00210e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_42))));	// 38316 mov     ax, [bp+var_42] ;~ 1359:210E
cs=0x1359;eip=0x002111; 	T(CMP(*(dw*)(raddr(ds,bx)), ax));	// 38317 cmp     [bx], ax ;~ 1359:2111
cs=0x1359;eip=0x002113; 	R(JZ(loc_23cd7));	// 38318 jz      short loc_23CD7 ;~ 1359:2113
cs=0x1359;eip=0x002115; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 38319 mov     [bx], ax ;~ 1359:2115
cs=0x1359;eip=0x002117; 	T(MOV(ax, 1));	// 38320 mov     ax, 1 ;~ 1359:2117
cs=0x1359;eip=0x00211a; 	X(PUSH(ax));	// 38321 push    ax              ; int ;~ 1359:211A
cs=0x1359;eip=0x00211b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_42))));	// 38322 push    [bp+var_42] ;~ 1359:211B
cs=0x1359;eip=0x00211e; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 38323 mov     ax, offset resID_byte1 ;~ 1359:211E
cs=0x1359;eip=0x002121; 	X(PUSH(ax));	// 38324 push    ax              ; char * ;~ 1359:2121
cs=0x1359;eip=0x002122; 	R(CALLF(format_frame_as_string,0));	// 38325 call    format_frame_as_string ;~ 1359:2122
cs=0x1359;eip=0x002127; 	T(ADD(sp, 6));	// 38326 add     sp, 6 ;~ 1359:2127
cs=0x1359;eip=0x00212a; 	T(SUB(ax, ax));	// 38327 sub     ax, ax ;~ 1359:212A
cs=0x1359;eip=0x00212c; 	X(PUSH(ax));	// 38328 push    ax ;~ 1359:212C
cs=0x1359;eip=0x00212d; 	X(PUSH(dialog_fnt_colour));	// 38329 push    dialog_fnt_colour ;~ 1359:212D
cs=0x1359;eip=0x002131; 	R(CALLF(font_set_unk,0));	// 38330 call    font_set_unk ;~ 1359:2131
cs=0x1359;eip=0x002136; 	T(ADD(sp, 4));	// 38331 add     sp, 4 ;~ 1359:2136
cs=0x1359;eip=0x002139; 	R(CALLF(mouse_draw_opaque_check,0));	// 38332 call    mouse_draw_opaque_check ;~ 1359:2139
cs=0x1359;eip=0x00213e; 	X(PUSH(word_459f6));	// 38333 push    word_459F6 ;~ 1359:213E
cs=0x1359;eip=0x002142; 	X(PUSH(fontledresptr));	// 38334 push    fontledresptr ;~ 1359:2142
cs=0x1359;eip=0x002146; 	R(CALLF(font_set_fontdef2,0));	// 38335 call    font_set_fontdef2 ;~ 1359:2146
cs=0x1359;eip=0x00214b; 	T(ADD(sp, 4));	// 38336 add     sp, 4 ;~ 1359:214B
cs=0x1359;eip=0x00214e; 	T(MOV(ax, 0x0BB));	// 38337 mov     ax, 0BBh ; '»' ;~ 1359:214E
cs=0x1359;eip=0x002151; 	X(PUSH(ax));	// 38338 push    ax ;~ 1359:2151
cs=0x1359;eip=0x002152; 	T(MOV(ax, 0x98));	// 38339 mov     ax, 98h ;~ 1359:2152
cs=0x1359;eip=0x002155; 	X(PUSH(ax));	// 38340 push    ax ;~ 1359:2155
cs=0x1359;eip=0x002156; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 38341 mov     ax, offset resID_byte1 ;~ 1359:2156
cs=0x1359;eip=0x002159; 	X(PUSH(ax));	// 38342 push    ax ;~ 1359:2159
cs=0x1359;eip=0x00215a; 	R(CALLF(sub_345bc,0));	// 38343 call    sub_345BC ;~ 1359:215A
cs=0x1359;eip=0x00215f; 	T(ADD(sp, 6));	// 38344 add     sp, 6 ;~ 1359:215F
cs=0x1359;eip=0x002162; 	R(CALLF(font_set_fontdef,0));	// 38345 call    font_set_fontdef ;~ 1359:2162
loc_23cd7:
	// 7022 
cs=0x1359;eip=0x002167; 	T(MOV(al, byte_4432a));	// 38348 mov     al, byte_4432A ;~ 1359:2167
cs=0x1359;eip=0x00216a; 	T(CBW);	// 38349 cbw ;~ 1359:216A
cs=0x1359;eip=0x00216b; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 38350 mov     [bp+var_44], ax ;~ 1359:216B
cs=0x1359;eip=0x00216e; 	T(MOV(bx, ax));	// 38351 mov     bx, ax ;~ 1359:216E
cs=0x1359;eip=0x002170; 	T(MOV(al, cameramode));	// 38352 mov     al, cameramode ;~ 1359:2170
cs=0x1359;eip=0x002173; 	T(CMP(*((&byte_40e74)+bx), al));	// 38353 cmp     byte_40E74[bx], al ;~ 1359:2173
cs=0x1359;eip=0x002177; 	R(JZ(loc_23d46));	// 38354 jz      short loc_23D46 ;~ 1359:2177
cs=0x1359;eip=0x002179; 	X(MOV(*((&byte_40e74)+bx), al));	// 38355 mov     byte_40E74[bx], al ;~ 1359:2179
cs=0x1359;eip=0x00217d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_44))));	// 38356 mov     bx, [bp+var_44] ;~ 1359:217D
cs=0x1359;eip=0x002180; 	T(SHL(bx, 1));	// 38357 shl     bx, 1 ;~ 1359:2180
cs=0x1359;eip=0x002182; 	X(MOV(*(dw*)(((db*)&word_40e76)+bx), 0x0FFFF));	// 38358 mov     word_40E76[bx], 0FFFFh ;~ 1359:2182
cs=0x1359;eip=0x002188; 	R(CALLF(mouse_draw_opaque_check,0));	// 38359 call    mouse_draw_opaque_check ;~ 1359:2188
cs=0x1359;eip=0x00218d; 	T(MOV(al, cameramode));	// 38360 mov     al, cameramode ;~ 1359:218D
cs=0x1359;eip=0x002190; 	T(CBW);	// 38361 cbw ;~ 1359:2190
cs=0x1359;eip=0x002191; 	T(MOV(bx, ax));	// 38362 mov     bx, ax ;~ 1359:2191
cs=0x1359;eip=0x002193; 	T(SHL(bx, 1));	// 38363 shl     bx, 1 ;~ 1359:2193
cs=0x1359;eip=0x002195; 	T(SHL(bx, 1));	// 38364 shl     bx, 1 ;~ 1359:2195
cs=0x1359;eip=0x002197; 	X(PUSH(*(dw*)((((db*)rplyshapes)+6)+bx)));	// 38365 push    (rplyshapes+6)[bx] ;~ 1359:2197
cs=0x1359;eip=0x00219b; 	X(PUSH(*(dw*)((((db*)rplyshapes)+4)+bx)));	// 38366 push    (rplyshapes+4)[bx] ;~ 1359:219B
cs=0x1359;eip=0x00219f; 	R(CALLF(shape2d_op_unk,0));	// 38367 call    shape2d_op_unk ;~ 1359:219F
cs=0x1359;eip=0x0021a4; 	T(ADD(sp, 4));	// 38368 add     sp, 4 ;~ 1359:21A4
cs=0x1359;eip=0x0021a7; 	T(MOV(al, cameramode));	// 38369 mov     al, cameramode ;~ 1359:21A7
cs=0x1359;eip=0x0021aa; 	T(CBW);	// 38370 cbw ;~ 1359:21AA
cs=0x1359;eip=0x0021ab; 	T(MOV(bx, ax));	// 38371 mov     bx, ax ;~ 1359:21AB
cs=0x1359;eip=0x0021ad; 	T(MOV(al, *((&game_camera_buttons_count)+bx)));	// 38372 mov     al, game_camera_buttons_count[bx] ;~ 1359:21AD
cs=0x1359;eip=0x0021b1; 	X(MOV(*(db*)(raddr(ss,bp+var_42)), al));	// 38373 mov     byte ptr [bp+var_42], al ;~ 1359:21B1
cs=0x1359;eip=0x0021b4; 	T(MOV(al, byte_3e9db));	// 38374 mov     al, byte_3E9DB ;~ 1359:21B4
cs=0x1359;eip=0x0021b7; 	T(CMP(*(db*)(raddr(ss,bp+var_42)), al));	// 38375 cmp     byte ptr [bp+var_42], al ;~ 1359:21B7
cs=0x1359;eip=0x0021ba; 	R(JGE(loc_23d32));	// 38376 jge     short loc_23D32 ;~ 1359:21BA
cs=0x1359;eip=0x0021bc; 	T(MOV(al, *(db*)(raddr(ss,bp+var_42))));	// 38377 mov     al, byte ptr [bp+var_42] ;~ 1359:21BC
cs=0x1359;eip=0x0021bf; 	X(MOV(byte_3e9db, al));	// 38378 mov     byte_3E9DB, al ;~ 1359:21BF
loc_23d32:
	// 7023 
cs=0x1359;eip=0x0021c2; 	T(MOV(al, byte_4432a));	// 38381 mov     al, byte_4432A ;~ 1359:21C2
cs=0x1359;eip=0x0021c5; 	T(CBW);	// 38382 cbw ;~ 1359:21C5
cs=0x1359;eip=0x0021c6; 	T(ADD(ax, offset(dseg,byte_40e08)));	// 38383 add     ax, offset byte_40E08 ;~ 1359:21C6
cs=0x1359;eip=0x0021c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 38384 mov     [bp+var_44], ax ;~ 1359:21C9
cs=0x1359;eip=0x0021cc; 	T(MOV(bx, ax));	// 38385 mov     bx, ax ;~ 1359:21CC
cs=0x1359;eip=0x0021ce; 	T(CMP(*(raddr(ds,bx)), 6));	// 38386 cmp     byte ptr [bx], 6 ;~ 1359:21CE
cs=0x1359;eip=0x0021d1; 	R(JLE(loc_23d46));	// 38387 jle     short loc_23D46 ;~ 1359:21D1
cs=0x1359;eip=0x0021d3; 	X(MOV(*(raddr(ds,bx)), 0x0FF));	// 38388 mov     byte ptr [bx], 0FFh ;~ 1359:21D3
loc_23d46:
	// 7024 
cs=0x1359;eip=0x0021d6; 	T(CMP(word_449bc, 0));	// 38392 cmp     word_449BC, 0 ;~ 1359:21D6
cs=0x1359;eip=0x0021db; 	R(JNZ(loc_23d54));	// 38393 jnz     short loc_23D54 ;~ 1359:21DB
cs=0x1359;eip=0x0021dd; 	T(SUB(si, si));	// 38394 sub     si, si ;~ 1359:21DD
cs=0x1359;eip=0x0021df; 	T(SUB(di, di));	// 38395 sub     di, di ;~ 1359:21DF
cs=0x1359;eip=0x0021e1; 	R(JMP(loc_23d94));	// 38396 jmp     short loc_23D94 ;~ 1359:21E1
loc_23d54:
	// 7025 
cs=0x1359;eip=0x0021e4; 	T(MOV(ax, word_449bc));	// 38401 mov     ax, word_449BC ;~ 1359:21E4
cs=0x1359;eip=0x0021e7; 	T(CWD);	// 38402 cwd ;~ 1359:21E7
cs=0x1359;eip=0x0021e8; 	X(PUSH(dx));	// 38403 push    dx ;~ 1359:21E8
cs=0x1359;eip=0x0021e9; 	X(PUSH(ax));	// 38404 push    ax ;~ 1359:21E9
cs=0x1359;eip=0x0021ea; 	T(MOV(ax, 0x6E));	// 38405 mov     ax, 6Eh ; 'n' ;~ 1359:21EA
cs=0x1359;eip=0x0021ed; 	T(CWD);	// 38406 cwd ;~ 1359:21ED
cs=0x1359;eip=0x0021ee; 	X(PUSH(dx));	// 38407 push    dx ;~ 1359:21EE
cs=0x1359;eip=0x0021ef; 	X(PUSH(ax));	// 38408 push    ax ;~ 1359:21EF
cs=0x1359;eip=0x0021f0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 38409 mov     ax, [bp+arg_2] ;~ 1359:21F0
cs=0x1359;eip=0x0021f3; 	T(CWD);	// 38410 cwd ;~ 1359:21F3
cs=0x1359;eip=0x0021f4; 	X(PUSH(dx));	// 38411 push    dx ;~ 1359:21F4
cs=0x1359;eip=0x0021f5; 	X(PUSH(ax));	// 38412 push    ax ;~ 1359:21F5
cs=0x1359;eip=0x0021f6; 	R(CALLF(__aflmul,0));	// 38413 call    __aFlmul ;~ 1359:21F6
cs=0x1359;eip=0x0021fb; 	X(PUSH(dx));	// 38414 push    dx ;~ 1359:21FB
cs=0x1359;eip=0x0021fc; 	X(PUSH(ax));	// 38415 push    ax ;~ 1359:21FC
cs=0x1359;eip=0x0021fd; 	R(CALLF(__afldiv,0));	// 38416 call    __aFldiv ;~ 1359:21FD
cs=0x1359;eip=0x002202; 	T(MOV(si, ax));	// 38417 mov     si, ax ;~ 1359:2202
cs=0x1359;eip=0x002204; 	T(MOV(ax, word_449bc));	// 38418 mov     ax, word_449BC ;~ 1359:2204
cs=0x1359;eip=0x002207; 	T(CWD);	// 38419 cwd ;~ 1359:2207
cs=0x1359;eip=0x002208; 	X(PUSH(dx));	// 38420 push    dx ;~ 1359:2208
cs=0x1359;eip=0x002209; 	X(PUSH(ax));	// 38421 push    ax ;~ 1359:2209
cs=0x1359;eip=0x00220a; 	T(MOV(ax, 0x6E));	// 38422 mov     ax, 6Eh ; 'n' ;~ 1359:220A
cs=0x1359;eip=0x00220d; 	T(CWD);	// 38423 cwd ;~ 1359:220D
cs=0x1359;eip=0x00220e; 	X(PUSH(dx));	// 38424 push    dx ;~ 1359:220E
cs=0x1359;eip=0x00220f; 	X(PUSH(ax));	// 38425 push    ax ;~ 1359:220F
cs=0x1359;eip=0x002210; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 38426 mov     ax, [bp+arg_4] ;~ 1359:2210
cs=0x1359;eip=0x002213; 	T(CWD);	// 38427 cwd ;~ 1359:2213
cs=0x1359;eip=0x002214; 	X(PUSH(dx));	// 38428 push    dx ;~ 1359:2214
cs=0x1359;eip=0x002215; 	X(PUSH(ax));	// 38429 push    ax ;~ 1359:2215
cs=0x1359;eip=0x002216; 	R(CALLF(__aflmul,0));	// 38430 call    __aFlmul ;~ 1359:2216
cs=0x1359;eip=0x00221b; 	X(PUSH(dx));	// 38431 push    dx ;~ 1359:221B
cs=0x1359;eip=0x00221c; 	X(PUSH(ax));	// 38432 push    ax ;~ 1359:221C
cs=0x1359;eip=0x00221d; 	R(CALLF(__afldiv,0));	// 38433 call    __aFldiv ;~ 1359:221D
cs=0x1359;eip=0x002222; 	T(MOV(di, ax));	// 38434 mov     di, ax ;~ 1359:2222
loc_23d94:
	// 7026 
cs=0x1359;eip=0x002224; 	T(MOV(al, byte_4432a));	// 38437 mov     al, byte_4432A ;~ 1359:2224
cs=0x1359;eip=0x002227; 	T(CBW);	// 38438 cbw ;~ 1359:2227
cs=0x1359;eip=0x002228; 	T(SHL(ax, 1));	// 38439 shl     ax, 1 ;~ 1359:2228
cs=0x1359;eip=0x00222a; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 38440 mov     [bp+var_44], ax ;~ 1359:222A
cs=0x1359;eip=0x00222d; 	T(MOV(bx, ax));	// 38441 mov     bx, ax ;~ 1359:222D
cs=0x1359;eip=0x00222f; 	T(CMP(*(dw*)(((db*)&word_40e76)+bx), si));	// 38442 cmp     word_40E76[bx], si ;~ 1359:222F
cs=0x1359;eip=0x002233; 	R(JNZ(loc_23dab));	// 38443 jnz     short loc_23DAB ;~ 1359:2233
cs=0x1359;eip=0x002235; 	T(CMP(*(dw*)(((db*)&word_40e04)+bx), di));	// 38444 cmp     word_40E04[bx], di ;~ 1359:2235
cs=0x1359;eip=0x002239; 	R(JZ(loc_23e1a));	// 38445 jz      short loc_23E1A ;~ 1359:2239
loc_23dab:
	// 7027 
cs=0x1359;eip=0x00223b; 	R(CALLF(mouse_draw_opaque_check,0));	// 38448 call    mouse_draw_opaque_check ;~ 1359:223B
cs=0x1359;eip=0x002240; 	T(MOV(al, byte_4432a));	// 38449 mov     al, byte_4432A ;~ 1359:2240
cs=0x1359;eip=0x002243; 	T(CBW);	// 38450 cbw ;~ 1359:2243
cs=0x1359;eip=0x002244; 	T(SHL(ax, 1));	// 38451 shl     ax, 1 ;~ 1359:2244
cs=0x1359;eip=0x002246; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 38452 mov     [bp+var_44], ax ;~ 1359:2246
cs=0x1359;eip=0x002249; 	T(MOV(bx, ax));	// 38453 mov     bx, ax ;~ 1359:2249
cs=0x1359;eip=0x00224b; 	X(MOV(*(dw*)(((db*)&word_40e76)+bx), si));	// 38454 mov     word_40E76[bx], si ;~ 1359:224B
cs=0x1359;eip=0x00224f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_44))));	// 38455 mov     bx, [bp+var_44] ;~ 1359:224F
cs=0x1359;eip=0x002252; 	X(MOV(*(dw*)(((db*)&word_40e04)+bx), di));	// 38456 mov     word_40E04[bx], di ;~ 1359:2252
cs=0x1359;eip=0x002256; 	X(PUSH(word_407fc));	// 38457 push    word_407FC ;~ 1359:2256
cs=0x1359;eip=0x00225a; 	T(MOV(ax, 6));	// 38458 mov     ax, 6 ;~ 1359:225A
cs=0x1359;eip=0x00225d; 	X(PUSH(ax));	// 38459 push    ax ;~ 1359:225D
cs=0x1359;eip=0x00225e; 	T(MOV(ax, 0x74));	// 38460 mov     ax, 74h ; 't' ;~ 1359:225E
cs=0x1359;eip=0x002261; 	X(PUSH(ax));	// 38461 push    ax ;~ 1359:2261
cs=0x1359;eip=0x002262; 	T(MOV(ax, 0x0B1));	// 38462 mov     ax, 0B1h ; '±' ;~ 1359:2262
cs=0x1359;eip=0x002265; 	X(PUSH(ax));	// 38463 push    ax ;~ 1359:2265
cs=0x1359;eip=0x002266; 	T(MOV(ax, 0x9A));	// 38464 mov     ax, 9Ah ; 'š' ;~ 1359:2266
cs=0x1359;eip=0x002269; 	X(PUSH(ax));	// 38465 push    ax ;~ 1359:2269
cs=0x1359;eip=0x00226a; 	R(CALLF(sprite_1_unk,0));	// 38466 call    sprite_1_unk ;~ 1359:226A
cs=0x1359;eip=0x00226f; 	T(ADD(sp, 0x0A));	// 38467 add     sp, 0Ah ;~ 1359:226F
cs=0x1359;eip=0x002272; 	X(PUSH(dialog_fnt_colour));	// 38468 push    dialog_fnt_colour ;~ 1359:2272
cs=0x1359;eip=0x002276; 	T(MOV(ax, 6));	// 38469 mov     ax, 6 ;~ 1359:2276
cs=0x1359;eip=0x002279; 	X(PUSH(ax));	// 38470 push    ax ;~ 1359:2279
cs=0x1359;eip=0x00227a; 	X(PUSH(ax));	// 38471 push    ax ;~ 1359:227A
cs=0x1359;eip=0x00227b; 	T(MOV(ax, 0x0B1));	// 38472 mov     ax, 0B1h ; '±' ;~ 1359:227B
cs=0x1359;eip=0x00227e; 	X(PUSH(ax));	// 38473 push    ax ;~ 1359:227E
cs=0x1359;eip=0x00227f; 	T(ax = si+0x9A);	// 38474 lea     ax, [si+9Ah] ;~ 1359:227F
cs=0x1359;eip=0x002283; 	X(PUSH(ax));	// 38475 push    ax ;~ 1359:2283
cs=0x1359;eip=0x002284; 	R(CALLF(sprite_1_unk,0));	// 38476 call    sprite_1_unk ;~ 1359:2284
cs=0x1359;eip=0x002289; 	T(ADD(sp, 0x0A));	// 38477 add     sp, 0Ah ;~ 1359:2289
cs=0x1359;eip=0x00228c; 	X(PUSH(word_407fe));	// 38478 push    word_407FE ;~ 1359:228C
cs=0x1359;eip=0x002290; 	T(MOV(ax, 0x0B6));	// 38479 mov     ax, 0B6h ; '¶' ;~ 1359:2290
cs=0x1359;eip=0x002293; 	X(PUSH(ax));	// 38480 push    ax ;~ 1359:2293
cs=0x1359;eip=0x002294; 	T(ax = di+0x9F);	// 38481 lea     ax, [di+9Fh] ;~ 1359:2294
cs=0x1359;eip=0x002298; 	X(PUSH(ax));	// 38482 push    ax ;~ 1359:2298
cs=0x1359;eip=0x002299; 	T(MOV(ax, 0x0B1));	// 38483 mov     ax, 0B1h ; '±' ;~ 1359:2299
cs=0x1359;eip=0x00229c; 	X(PUSH(ax));	// 38484 push    ax ;~ 1359:229C
cs=0x1359;eip=0x00229d; 	T(ax = di+0x9A);	// 38485 lea     ax, [di+9Ah] ;~ 1359:229D
cs=0x1359;eip=0x0022a1; 	X(PUSH(ax));	// 38486 push    ax ;~ 1359:22A1
cs=0x1359;eip=0x0022a2; 	R(CALLF(sprite_1_unk4,0));	// 38487 call    sprite_1_unk4 ;~ 1359:22A2
cs=0x1359;eip=0x0022a7; 	T(ADD(sp, 0x0A));	// 38488 add     sp, 0Ah ;~ 1359:22A7
loc_23e1a:
	// 7028 
cs=0x1359;eip=0x0022aa; 	T(MOV(al, byte_4432a));	// 38491 mov     al, byte_4432A ;~ 1359:22AA
cs=0x1359;eip=0x0022ad; 	T(CBW);	// 38492 cbw ;~ 1359:22AD
cs=0x1359;eip=0x0022ae; 	T(MOV(bx, ax));	// 38493 mov     bx, ax ;~ 1359:22AE
cs=0x1359;eip=0x0022b0; 	T(MOV(al, byte_3e9db));	// 38494 mov     al, byte_3E9DB ;~ 1359:22B0
cs=0x1359;eip=0x0022b3; 	T(CMP(*((&byte_40e08)+bx), al));	// 38495 cmp     byte_40E08[bx], al ;~ 1359:22B3
cs=0x1359;eip=0x0022b7; 	R(JZ(loc_23e68));	// 38496 jz      short loc_23E68 ;~ 1359:22B7
loc_23e29:
	// 7029 
cs=0x1359;eip=0x0022b9; 	R(CALLF(mouse_draw_opaque_check,0));	// 38499 call    mouse_draw_opaque_check ;~ 1359:22B9
cs=0x1359;eip=0x0022be; 	T(MOV(al, byte_4432a));	// 38500 mov     al, byte_4432A ;~ 1359:22BE
cs=0x1359;eip=0x0022c1; 	T(CBW);	// 38501 cbw ;~ 1359:22C1
cs=0x1359;eip=0x0022c2; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 38502 mov     [bp+var_44], ax ;~ 1359:22C2
cs=0x1359;eip=0x0022c5; 	T(MOV(bx, ax));	// 38503 mov     bx, ax ;~ 1359:22C5
cs=0x1359;eip=0x0022c7; 	T(CMP(*((&byte_40e08)+bx), 0x0FF));	// 38504 cmp     byte_40E08[bx], 0FFh ;~ 1359:22C7
cs=0x1359;eip=0x0022cc; 	R(JNZ(loc_23e41));	// 38505 jnz     short loc_23E41 ;~ 1359:22CC
cs=0x1359;eip=0x0022ce; 	R(JMP(loc_23ec6));	// 38506 jmp     loc_23EC6 ;~ 1359:22CE
loc_23e41:
	// 7030 
cs=0x1359;eip=0x0022d1; 	T(MOV(al, *((&byte_40e08)+bx)));	// 38510 mov     al, byte_40E08[bx] ;~ 1359:22D1
cs=0x1359;eip=0x0022d5; 	T(CBW);	// 38511 cbw ;~ 1359:22D5
cs=0x1359;eip=0x0022d6; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), ax));	// 38512 mov     [bp+var_42], ax ;~ 1359:22D6
cs=0x1359;eip=0x0022d9; 	T(MOV(bx, ax));	// 38513 mov     bx, ax ;~ 1359:22D9
cs=0x1359;eip=0x0022db; 	T(SHL(bx, 1));	// 38514 shl     bx, 1 ;~ 1359:22DB
cs=0x1359;eip=0x0022dd; 	T(ADD(bx, *(dw*)(raddr(ss,bp+var_44))));	// 38515 add     bx, [bp+var_44] ;~ 1359:22DD
cs=0x1359;eip=0x0022e0; 	T(CMP(*((&byte_40e7a)+bx), 0));	// 38516 cmp     byte_40E7A[bx], 0 ;~ 1359:22E0
cs=0x1359;eip=0x0022e5; 	R(JZ(loc_23e9a));	// 38517 jz      short loc_23E9A ;~ 1359:22E5
cs=0x1359;eip=0x0022e7; 	T(MOV(bx, ax));	// 38518 mov     bx, ax ;~ 1359:22E7
cs=0x1359;eip=0x0022e9; 	T(SHL(bx, 1));	// 38519 shl     bx, 1 ;~ 1359:22E9
cs=0x1359;eip=0x0022eb; 	T(SHL(bx, 1));	// 38520 shl     bx, 1 ;~ 1359:22EB
cs=0x1359;eip=0x0022ed; 	X(PUSH(*(dw*)(((db*)&word_40e48)+bx)));	// 38521 push    word_40E48[bx] ;~ 1359:22ED
cs=0x1359;eip=0x0022f1; 	X(PUSH(*(dw*)(((db*)&word_40e46)+bx)));	// 38522 push    word_40E46[bx] ;~ 1359:22F1
cs=0x1359;eip=0x0022f5; 	R(JMP(loc_23eb3));	// 38523 jmp     short loc_23EB3 ;~ 1359:22F5
loc_23e68:
	// 7031 
cs=0x1359;eip=0x0022f8; 	X(MOV(*(raddr(ss,bp+var_20)), 0));	// 38528 mov     [bp+var_20], 0 ;~ 1359:22F8
cs=0x1359;eip=0x0022fc; 	R(JMP(loc_23e71));	// 38529 jmp     short loc_23E71 ;~ 1359:22FC
loc_23e6e:
	// 7032 
cs=0x1359;eip=0x0022fe; 	X(INC(*(raddr(ss,bp+var_20))));	// 38533 inc     [bp+var_20] ;~ 1359:22FE
loc_23e71:
	// 7033 
cs=0x1359;eip=0x002301; 	T(CMP(*(raddr(ss,bp+var_20)), 7));	// 38536 cmp     [bp+var_20], 7 ;~ 1359:2301
cs=0x1359;eip=0x002305; 	R(JL(loc_23e7a));	// 38537 jl      short loc_23E7A ;~ 1359:2305
cs=0x1359;eip=0x002307; 	R(JMP(loc_23fb0));	// 38538 jmp     loc_23FB0 ;~ 1359:2307
loc_23e7a:
	// 7034 
cs=0x1359;eip=0x00230a; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 38542 mov     al, [bp+var_20] ;~ 1359:230A
cs=0x1359;eip=0x00230d; 	T(CBW);	// 38543 cbw ;~ 1359:230D
cs=0x1359;eip=0x00230e; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 38544 mov     [bp+var_44], ax ;~ 1359:230E
cs=0x1359;eip=0x002311; 	T(MOV(bx, ax));	// 38545 mov     bx, ax ;~ 1359:2311
cs=0x1359;eip=0x002313; 	T(MOV(al, *((&byte_40e6a)+bx)));	// 38546 mov     al, byte_40E6A[bx] ;~ 1359:2313
cs=0x1359;eip=0x002317; 	T(MOV(cx, ax));	// 38547 mov     cx, ax ;~ 1359:2317
cs=0x1359;eip=0x002319; 	T(MOV(al, byte_4432a));	// 38548 mov     al, byte_4432A ;~ 1359:2319
cs=0x1359;eip=0x00231c; 	T(CBW);	// 38549 cbw ;~ 1359:231C
cs=0x1359;eip=0x00231d; 	T(SHL(bx, 1));	// 38550 shl     bx, 1 ;~ 1359:231D
cs=0x1359;eip=0x00231f; 	T(ADD(bx, ax));	// 38551 add     bx, ax ;~ 1359:231F
cs=0x1359;eip=0x002321; 	T(CMP(*((&byte_40e7a)+bx), cl));	// 38552 cmp     byte_40E7A[bx], cl ;~ 1359:2321
cs=0x1359;eip=0x002325; 	R(JZ(loc_23e6e));	// 38553 jz      short loc_23E6E ;~ 1359:2325
cs=0x1359;eip=0x002327; 	R(JMP(loc_23e29));	// 38554 jmp     short loc_23E29 ;~ 1359:2327
loc_23e9a:
	// 7035 
cs=0x1359;eip=0x00232a; 	T(MOV(al, byte_4432a));	// 38559 mov     al, byte_4432A ;~ 1359:232A
cs=0x1359;eip=0x00232d; 	T(CBW);	// 38560 cbw ;~ 1359:232D
cs=0x1359;eip=0x00232e; 	T(MOV(bx, ax));	// 38561 mov     bx, ax ;~ 1359:232E
cs=0x1359;eip=0x002330; 	T(MOV(al, *((&byte_40e08)+bx)));	// 38562 mov     al, byte_40E08[bx] ;~ 1359:2330
cs=0x1359;eip=0x002334; 	T(CBW);	// 38563 cbw ;~ 1359:2334
cs=0x1359;eip=0x002335; 	T(MOV(bx, ax));	// 38564 mov     bx, ax ;~ 1359:2335
cs=0x1359;eip=0x002337; 	T(SHL(bx, 1));	// 38565 shl     bx, 1 ;~ 1359:2337
cs=0x1359;eip=0x002339; 	T(SHL(bx, 1));	// 38566 shl     bx, 1 ;~ 1359:2339
cs=0x1359;eip=0x00233b; 	X(PUSH(*(dw*)((((db*)rplyshapes)+0x16)+bx)));	// 38567 push    (rplyshapes+16h)[bx] ;~ 1359:233B
cs=0x1359;eip=0x00233f; 	X(PUSH(*(dw*)((((db*)rplyshapes)+0x14)+bx)));	// 38568 push    (rplyshapes+14h)[bx] ;~ 1359:233F
loc_23eb3:
	// 7036 
cs=0x1359;eip=0x002343; 	R(CALLF(shape2d_op_unk,0));	// 38571 call    shape2d_op_unk ;~ 1359:2343
cs=0x1359;eip=0x002348; 	T(ADD(sp, 4));	// 38572 add     sp, 4 ;~ 1359:2348
cs=0x1359;eip=0x00234b; 	T(MOV(al, byte_4432a));	// 38573 mov     al, byte_4432A ;~ 1359:234B
cs=0x1359;eip=0x00234e; 	T(CBW);	// 38574 cbw ;~ 1359:234E
cs=0x1359;eip=0x00234f; 	T(MOV(bx, ax));	// 38575 mov     bx, ax ;~ 1359:234F
cs=0x1359;eip=0x002351; 	X(MOV(*((&byte_40e08)+bx), 0x0FF));	// 38576 mov     byte_40E08[bx], 0FFh ;~ 1359:2351
loc_23ec6:
	// 7037 
cs=0x1359;eip=0x002356; 	X(MOV(*(raddr(ss,bp+var_20)), 0));	// 38579 mov     [bp+var_20], 0 ;~ 1359:2356
loc_23eca:
	// 7038 
cs=0x1359;eip=0x00235a; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 38582 mov     al, [bp+var_20] ;~ 1359:235A
cs=0x1359;eip=0x00235d; 	T(CBW);	// 38583 cbw ;~ 1359:235D
cs=0x1359;eip=0x00235e; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 38584 mov     [bp+var_44], ax ;~ 1359:235E
cs=0x1359;eip=0x002361; 	T(MOV(bx, ax));	// 38585 mov     bx, ax ;~ 1359:2361
cs=0x1359;eip=0x002363; 	T(CMP(*((&byte_40e6a)+bx), 0));	// 38586 cmp     byte_40E6A[bx], 0 ;~ 1359:2363
cs=0x1359;eip=0x002368; 	R(JNZ(loc_23f18));	// 38587 jnz     short loc_23F18 ;~ 1359:2368
cs=0x1359;eip=0x00236a; 	T(MOV(al, *((&byte_40e6a)+bx)));	// 38588 mov     al, byte_40E6A[bx] ;~ 1359:236A
cs=0x1359;eip=0x00236e; 	T(MOV(cx, ax));	// 38589 mov     cx, ax ;~ 1359:236E
cs=0x1359;eip=0x002370; 	T(MOV(al, byte_4432a));	// 38590 mov     al, byte_4432A ;~ 1359:2370
cs=0x1359;eip=0x002373; 	T(CBW);	// 38591 cbw ;~ 1359:2373
cs=0x1359;eip=0x002374; 	T(SHL(bx, 1));	// 38592 shl     bx, 1 ;~ 1359:2374
cs=0x1359;eip=0x002376; 	T(ADD(bx, ax));	// 38593 add     bx, ax ;~ 1359:2376
cs=0x1359;eip=0x002378; 	T(CMP(*((&byte_40e7a)+bx), cl));	// 38594 cmp     byte_40E7A[bx], cl ;~ 1359:2378
cs=0x1359;eip=0x00237c; 	R(JZ(loc_23f18));	// 38595 jz      short loc_23F18 ;~ 1359:237C
cs=0x1359;eip=0x00237e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_44))));	// 38596 mov     bx, [bp+var_44] ;~ 1359:237E
cs=0x1359;eip=0x002381; 	T(SHL(bx, 1));	// 38597 shl     bx, 1 ;~ 1359:2381
cs=0x1359;eip=0x002383; 	T(SHL(bx, 1));	// 38598 shl     bx, 1 ;~ 1359:2383
cs=0x1359;eip=0x002385; 	X(PUSH(*(dw*)((((db*)rplyshapes)+0x16)+bx)));	// 38599 push    (rplyshapes+16h)[bx] ;~ 1359:2385
cs=0x1359;eip=0x002389; 	X(PUSH(*(dw*)((((db*)rplyshapes)+0x14)+bx)));	// 38600 push    (rplyshapes+14h)[bx] ;~ 1359:2389
cs=0x1359;eip=0x00238d; 	R(CALLF(shape2d_op_unk,0));	// 38601 call    shape2d_op_unk ;~ 1359:238D
cs=0x1359;eip=0x002392; 	T(ADD(sp, 4));	// 38602 add     sp, 4 ;~ 1359:2392
cs=0x1359;eip=0x002395; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 38603 mov     al, [bp+var_20] ;~ 1359:2395
cs=0x1359;eip=0x002398; 	T(CBW);	// 38604 cbw ;~ 1359:2398
cs=0x1359;eip=0x002399; 	T(MOV(bx, ax));	// 38605 mov     bx, ax ;~ 1359:2399
cs=0x1359;eip=0x00239b; 	T(SHL(bx, 1));	// 38606 shl     bx, 1 ;~ 1359:239B
cs=0x1359;eip=0x00239d; 	T(MOV(al, byte_4432a));	// 38607 mov     al, byte_4432A ;~ 1359:239D
cs=0x1359;eip=0x0023a0; 	T(CBW);	// 38608 cbw ;~ 1359:23A0
cs=0x1359;eip=0x0023a1; 	T(ADD(bx, ax));	// 38609 add     bx, ax ;~ 1359:23A1
cs=0x1359;eip=0x0023a3; 	X(MOV(*((&byte_40e7a)+bx), 0));	// 38610 mov     byte_40E7A[bx], 0 ;~ 1359:23A3
loc_23f18:
	// 7039 
cs=0x1359;eip=0x0023a8; 	X(INC(*(raddr(ss,bp+var_20))));	// 38614 inc     [bp+var_20] ;~ 1359:23A8
cs=0x1359;eip=0x0023ab; 	T(CMP(*(raddr(ss,bp+var_20)), 7));	// 38615 cmp     [bp+var_20], 7 ;~ 1359:23AB
cs=0x1359;eip=0x0023af; 	R(JL(loc_23eca));	// 38616 jl      short loc_23ECA ;~ 1359:23AF
cs=0x1359;eip=0x0023b1; 	X(MOV(*(raddr(ss,bp+var_20)), 0));	// 38617 mov     [bp+var_20], 0 ;~ 1359:23B1
loc_23f25:
	// 7040 
cs=0x1359;eip=0x0023b5; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 38620 mov     al, [bp+var_20] ;~ 1359:23B5
cs=0x1359;eip=0x0023b8; 	T(CBW);	// 38621 cbw ;~ 1359:23B8
cs=0x1359;eip=0x0023b9; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 38622 mov     [bp+var_44], ax ;~ 1359:23B9
cs=0x1359;eip=0x0023bc; 	T(MOV(bx, ax));	// 38623 mov     bx, ax ;~ 1359:23BC
cs=0x1359;eip=0x0023be; 	T(CMP(*((&byte_40e6a)+bx), 0));	// 38624 cmp     byte_40E6A[bx], 0 ;~ 1359:23BE
cs=0x1359;eip=0x0023c3; 	R(JZ(loc_23f6c));	// 38625 jz      short loc_23F6C ;~ 1359:23C3
cs=0x1359;eip=0x0023c5; 	T(MOV(al, byte_4432a));	// 38626 mov     al, byte_4432A ;~ 1359:23C5
cs=0x1359;eip=0x0023c8; 	T(CBW);	// 38627 cbw ;~ 1359:23C8
cs=0x1359;eip=0x0023c9; 	T(SHL(bx, 1));	// 38628 shl     bx, 1 ;~ 1359:23C9
cs=0x1359;eip=0x0023cb; 	T(ADD(bx, ax));	// 38629 add     bx, ax ;~ 1359:23CB
cs=0x1359;eip=0x0023cd; 	X(MOV(*((&byte_40e7a)+bx), 1));	// 38630 mov     byte_40E7A[bx], 1 ;~ 1359:23CD
cs=0x1359;eip=0x0023d2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_44))));	// 38631 mov     bx, [bp+var_44] ;~ 1359:23D2
cs=0x1359;eip=0x0023d5; 	T(SHL(bx, 1));	// 38632 shl     bx, 1 ;~ 1359:23D5
cs=0x1359;eip=0x0023d7; 	T(SHL(bx, 1));	// 38633 shl     bx, 1 ;~ 1359:23D7
cs=0x1359;eip=0x0023d9; 	X(PUSH(*(dw*)(((db*)&word_40e48)+bx)));	// 38634 push    word_40E48[bx] ;~ 1359:23D9
cs=0x1359;eip=0x0023dd; 	X(PUSH(*(dw*)(((db*)&word_40e46)+bx)));	// 38635 push    word_40E46[bx] ;~ 1359:23DD
cs=0x1359;eip=0x0023e1; 	R(CALLF(shape2d_op_unk,0));	// 38636 call    shape2d_op_unk ;~ 1359:23E1
cs=0x1359;eip=0x0023e6; 	T(ADD(sp, 4));	// 38637 add     sp, 4 ;~ 1359:23E6
cs=0x1359;eip=0x0023e9; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 38638 mov     al, [bp+var_20] ;~ 1359:23E9
cs=0x1359;eip=0x0023ec; 	T(CBW);	// 38639 cbw ;~ 1359:23EC
cs=0x1359;eip=0x0023ed; 	T(MOV(bx, ax));	// 38640 mov     bx, ax ;~ 1359:23ED
cs=0x1359;eip=0x0023ef; 	T(SHL(bx, 1));	// 38641 shl     bx, 1 ;~ 1359:23EF
cs=0x1359;eip=0x0023f1; 	T(MOV(al, byte_4432a));	// 38642 mov     al, byte_4432A ;~ 1359:23F1
cs=0x1359;eip=0x0023f4; 	T(CBW);	// 38643 cbw ;~ 1359:23F4
cs=0x1359;eip=0x0023f5; 	T(ADD(bx, ax));	// 38644 add     bx, ax ;~ 1359:23F5
cs=0x1359;eip=0x0023f7; 	X(MOV(*((&byte_40e7a)+bx), 1));	// 38645 mov     byte_40E7A[bx], 1 ;~ 1359:23F7
loc_23f6c:
	// 7041 
cs=0x1359;eip=0x0023fc; 	X(INC(*(raddr(ss,bp+var_20))));	// 38648 inc     [bp+var_20] ;~ 1359:23FC
cs=0x1359;eip=0x0023ff; 	T(CMP(*(raddr(ss,bp+var_20)), 7));	// 38649 cmp     [bp+var_20], 7 ;~ 1359:23FF
cs=0x1359;eip=0x002403; 	R(JL(loc_23f25));	// 38650 jl      short loc_23F25 ;~ 1359:2403
cs=0x1359;eip=0x002405; 	T(MOV(al, byte_4432a));	// 38651 mov     al, byte_4432A ;~ 1359:2405
cs=0x1359;eip=0x002408; 	T(CBW);	// 38652 cbw ;~ 1359:2408
cs=0x1359;eip=0x002409; 	T(MOV(bx, ax));	// 38653 mov     bx, ax ;~ 1359:2409
cs=0x1359;eip=0x00240b; 	T(MOV(al, byte_3e9db));	// 38654 mov     al, byte_3E9DB ;~ 1359:240B
cs=0x1359;eip=0x00240e; 	X(MOV(*((&byte_40e08)+bx), al));	// 38655 mov     byte_40E08[bx], al ;~ 1359:240E
cs=0x1359;eip=0x002412; 	T(CMP(byte_3e9db, 0x0FF));	// 38656 cmp     byte_3E9DB, 0FFh ;~ 1359:2412
cs=0x1359;eip=0x002417; 	R(JZ(loc_23fb0));	// 38657 jz      short loc_23FB0 ;~ 1359:2417
cs=0x1359;eip=0x002419; 	T(MOV(al, byte_3e9db));	// 38658 mov     al, byte_3E9DB ;~ 1359:2419
cs=0x1359;eip=0x00241c; 	T(CBW);	// 38659 cbw ;~ 1359:241C
cs=0x1359;eip=0x00241d; 	T(SHL(ax, 1));	// 38660 shl     ax, 1 ;~ 1359:241D
cs=0x1359;eip=0x00241f; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 38661 mov     [bp+var_44], ax ;~ 1359:241F
cs=0x1359;eip=0x002422; 	X(PUSH(word_407fe));	// 38662 push    word_407FE ;~ 1359:2422
cs=0x1359;eip=0x002426; 	T(MOV(bx, ax));	// 38663 mov     bx, ax ;~ 1359:2426
cs=0x1359;eip=0x002428; 	X(PUSH(*(dw*)(((db*)&game_camera_buttons_y2)+bx)));	// 38664 push    game_camera_buttons_y2[bx] ;~ 1359:2428
cs=0x1359;eip=0x00242c; 	X(PUSH(*(dw*)(((db*)&game_camera_buttons_x2)+bx)));	// 38665 push    game_camera_buttons_x2[bx] ;~ 1359:242C
cs=0x1359;eip=0x002430; 	X(PUSH(*(dw*)(((db*)&game_camera_buttons_y1)+bx)));	// 38666 push    game_camera_buttons_y1[bx] ;~ 1359:2430
cs=0x1359;eip=0x002434; 	X(PUSH(*(dw*)(((db*)&game_camera_buttons_x1)+bx)));	// 38667 push    game_camera_buttons_x1[bx] ;~ 1359:2434
cs=0x1359;eip=0x002438; 	R(CALLF(sprite_1_unk4,0));	// 38668 call    sprite_1_unk4 ;~ 1359:2438
cs=0x1359;eip=0x00243d; 	T(ADD(sp, 0x0A));	// 38669 add     sp, 0Ah ;~ 1359:243D
loc_23fb0:
	// 7042 
cs=0x1359;eip=0x002440; 	R(CALLF(mouse_draw_transparent_check,0));	// 38673 call    mouse_draw_transparent_check ;~ 1359:2440
cs=0x1359;eip=0x002445; 	R(JMP(loc_24d5e));	// 38674 jmp     loc_24D5E ;~ 1359:2445
loc_23fb8:
	// 7043 
cs=0x1359;eip=0x002448; 	T(MOV(al, cameramode));	// 38678 mov     al, cameramode ;~ 1359:2448
cs=0x1359;eip=0x00244b; 	T(CBW);	// 38679 cbw ;~ 1359:244B
cs=0x1359;eip=0x00244c; 	T(MOV(bx, ax));	// 38680 mov     bx, ax ;~ 1359:244C
cs=0x1359;eip=0x00244e; 	T(MOV(al, *((&game_camera_buttons_count)+bx)));	// 38681 mov     al, game_camera_buttons_count[bx] ;~ 1359:244E
cs=0x1359;eip=0x002452; 	X(MOV(*(db*)(raddr(ss,bp+var_44)), al));	// 38682 mov     byte ptr [bp+var_44], al ;~ 1359:2452
cs=0x1359;eip=0x002455; 	T(MOV(al, byte_3e9db));	// 38683 mov     al, byte_3E9DB ;~ 1359:2455
cs=0x1359;eip=0x002458; 	T(CMP(*(db*)(raddr(ss,bp+var_44)), al));	// 38684 cmp     byte ptr [bp+var_44], al ;~ 1359:2458
cs=0x1359;eip=0x00245b; 	R(JGE(loc_23fda));	// 38685 jge     short loc_23FDA ;~ 1359:245B
cs=0x1359;eip=0x00245d; 	T(CMP(cameramode, 2));	// 38686 cmp     cameramode, 2 ;~ 1359:245D
cs=0x1359;eip=0x002462; 	R(JZ(loc_23fda));	// 38687 jz      short loc_23FDA ;~ 1359:2462
cs=0x1359;eip=0x002464; 	T(MOV(al, *(db*)(raddr(ss,bp+var_44))));	// 38688 mov     al, byte ptr [bp+var_44] ;~ 1359:2464
cs=0x1359;eip=0x002467; 	X(MOV(byte_3e9db, al));	// 38689 mov     byte_3E9DB, al ;~ 1359:2467
loc_23fda:
	// 7044 
cs=0x1359;eip=0x00246a; 	R(CALLF(sprite_copy_2_to_1,0));	// 38693 call    sprite_copy_2_to_1 ;~ 1359:246A
cs=0x1359;eip=0x00246f; 	T(CMP(video_flag5_is0, 0));	// 38694 cmp     video_flag5_is0, 0 ;~ 1359:246F
cs=0x1359;eip=0x002474; 	R(JZ(loc_23fee));	// 38695 jz      short loc_23FEE ;~ 1359:2474
cs=0x1359;eip=0x002476; 	T(MOV(al, byte_44346));	// 38696 mov     al, byte_44346 ;~ 1359:2476
cs=0x1359;eip=0x002479; 	T(XOR(al, 1));	// 38697 xor     al, 1 ;~ 1359:2479
cs=0x1359;eip=0x00247b; 	X(MOV(byte_4432a, al));	// 38698 mov     byte_4432A, al ;~ 1359:247B
loc_23fee:
	// 7045 
cs=0x1359;eip=0x00247e; 	R(CALLF(timer_get_delta_alt,0));	// 38702 call    timer_get_delta_alt ;~ 1359:247E
cs=0x1359;eip=0x002483; 	X(PUSH(ax));	// 38703 push    ax ;~ 1359:2483
cs=0x1359;eip=0x002484; 	R(CALLF(input_checking,0));	// 38704 call    input_checking ;~ 1359:2484
cs=0x1359;eip=0x002489; 	T(ADD(sp, 2));	// 38705 add     sp, 2 ;~ 1359:2489
cs=0x1359;eip=0x00248c; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 38706 mov     [bp+var_16], ax ;~ 1359:248C
cs=0x1359;eip=0x00248f; 	T(MOV(ax, offset(dseg,game_camera_buttons_y2)));	// 38707 mov     ax, offset game_camera_buttons_y2 ;~ 1359:248F
cs=0x1359;eip=0x002492; 	X(PUSH(ax));	// 38708 push    ax ;~ 1359:2492
cs=0x1359;eip=0x002493; 	T(MOV(ax, offset(dseg,game_camera_buttons_y1)));	// 38709 mov     ax, offset game_camera_buttons_y1 ;~ 1359:2493
cs=0x1359;eip=0x002496; 	X(PUSH(ax));	// 38710 push    ax ;~ 1359:2496
cs=0x1359;eip=0x002497; 	T(MOV(ax, offset(dseg,game_camera_buttons_x2)));	// 38711 mov     ax, offset game_camera_buttons_x2 ;~ 1359:2497
cs=0x1359;eip=0x00249a; 	X(PUSH(ax));	// 38712 push    ax ;~ 1359:249A
cs=0x1359;eip=0x00249b; 	T(MOV(ax, offset(dseg,game_camera_buttons_x1)));	// 38713 mov     ax, offset game_camera_buttons_x1 ;~ 1359:249B
cs=0x1359;eip=0x00249e; 	X(PUSH(ax));	// 38714 push    ax ;~ 1359:249E
cs=0x1359;eip=0x00249f; 	T(MOV(al, cameramode));	// 38715 mov     al, cameramode ;~ 1359:249F
cs=0x1359;eip=0x0024a2; 	T(CBW);	// 38716 cbw ;~ 1359:24A2
cs=0x1359;eip=0x0024a3; 	T(MOV(bx, ax));	// 38717 mov     bx, ax ;~ 1359:24A3
cs=0x1359;eip=0x0024a5; 	T(MOV(al, *((&game_camera_buttons_count)+bx)));	// 38718 mov     al, game_camera_buttons_count[bx] ; get number of buttons by cameramode ;~ 1359:24A5
cs=0x1359;eip=0x0024a9; 	T(CBW);	// 38719 cbw ;~ 1359:24A9
cs=0x1359;eip=0x0024aa; 	T(INC(ax));	// 38720 inc     ax ;~ 1359:24AA
cs=0x1359;eip=0x0024ab; 	X(PUSH(ax));	// 38721 push    ax ;~ 1359:24AB
cs=0x1359;eip=0x0024ac; 	R(CALLF(mouse_multi_hittest,0));	// 38722 call    mouse_multi_hittest ;~ 1359:24AC
cs=0x1359;eip=0x0024b1; 	T(ADD(sp, 0x0A));	// 38723 add     sp, 0Ah ;~ 1359:24B1
cs=0x1359;eip=0x0024b4; 	X(MOV(*(raddr(ss,bp+var_20)), al));	// 38724 mov     [bp+var_20], al ;~ 1359:24B4
cs=0x1359;eip=0x0024b7; 	T(CMP(al, 0x0FF));	// 38725 cmp     al, 0FFh ;~ 1359:24B7
cs=0x1359;eip=0x0024b9; 	R(JNZ(loc_2402e));	// 38726 jnz     short loc_2402E ;~ 1359:24B9
cs=0x1359;eip=0x0024bb; 	R(JMP(loc_240d8));	// 38727 jmp     loc_240D8 ;~ 1359:24BB
loc_2402e:
	// 7046 
cs=0x1359;eip=0x0024be; 	T(MOV(al, byte_3e9db));	// 38731 mov     al, byte_3E9DB ;~ 1359:24BE
cs=0x1359;eip=0x0024c1; 	T(CMP(*(raddr(ss,bp+var_20)), al));	// 38732 cmp     [bp+var_20], al ;~ 1359:24C1
cs=0x1359;eip=0x0024c4; 	R(JZ(loc_24041));	// 38733 jz      short loc_24041 ;~ 1359:24C4
cs=0x1359;eip=0x0024c6; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0));	// 38734 cmp     [bp+var_16], 0 ;~ 1359:24C6
cs=0x1359;eip=0x0024ca; 	R(JNZ(loc_24041));	// 38735 jnz     short loc_24041 ;~ 1359:24CA
cs=0x1359;eip=0x0024cc; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 1));	// 38736 mov     [bp+var_16], 1 ;~ 1359:24CC
loc_24041:
	// 7047 
cs=0x1359;eip=0x0024d1; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 38740 mov     al, [bp+var_20] ;~ 1359:24D1
cs=0x1359;eip=0x0024d4; 	X(MOV(byte_3e9db, al));	// 38741 mov     byte_3E9DB, al ;~ 1359:24D4
cs=0x1359;eip=0x0024d7; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x20));	// 38742 cmp     [bp+var_16], 20h ; ' ' ;~ 1359:24D7
cs=0x1359;eip=0x0024db; 	R(JZ(loc_24056));	// 38743 jz      short loc_24056 ;~ 1359:24DB
cs=0x1359;eip=0x0024dd; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x0D));	// 38744 cmp     [bp+var_16], 0Dh ;~ 1359:24DD
cs=0x1359;eip=0x0024e1; 	R(JZ(loc_24056));	// 38745 jz      short loc_24056 ;~ 1359:24E1
cs=0x1359;eip=0x0024e3; 	R(JMP(loc_2410c));	// 38746 jmp     loc_2410C ;~ 1359:24E3
loc_24056:
	// 7048 
cs=0x1359;eip=0x0024e6; 	T(CMP(byte_3e9db, 7));	// 38751 cmp     byte_3E9DB, 7 ;~ 1359:24E6
cs=0x1359;eip=0x0024eb; 	R(JGE(loc_24060));	// 38752 jge     short loc_24060 ;~ 1359:24EB
cs=0x1359;eip=0x0024ed; 	R(JMP(loc_2410c));	// 38753 jmp     loc_2410C ;~ 1359:24ED
loc_24060:
	// 7049 
cs=0x1359;eip=0x0024f0; 	R(JNZ(loc_24082));	// 38757 jnz     short loc_24082 ;~ 1359:24F0
cs=0x1359;eip=0x0024f2; 	T(MOV(ax, word_3ea3a));	// 38758 mov     ax, word_3EA3A ;~ 1359:24F2
cs=0x1359;eip=0x0024f5; 	T(ADD(ax, word_3ea4c));	// 38759 add     ax, word_3EA4C ;~ 1359:24F5
cs=0x1359;eip=0x0024f9; 	T(SAR(ax, 1));	// 38760 sar     ax, 1 ;~ 1359:24F9
cs=0x1359;eip=0x0024fb; 	T(CMP(ax, mouse_ypos));	// 38761 cmp     ax, mouse_ypos ;~ 1359:24FB
cs=0x1359;eip=0x0024ff; 	R(JGE(loc_2407a));	// 38762 jge     short loc_2407A ;~ 1359:24FF
loc_24071:
	// 7050 
cs=0x1359;eip=0x002501; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0x5000));	// 38765 mov     [bp+var_16], 5000h ;~ 1359:2501
cs=0x1359;eip=0x002506; 	R(JMP(loc_2410c));	// 38766 jmp     loc_2410C ;~ 1359:2506
loc_2407a:
	// 7051 
cs=0x1359;eip=0x00250a; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0x4800));	// 38772 mov     [bp+var_16], 4800h ;~ 1359:250A
cs=0x1359;eip=0x00250f; 	R(JMP(loc_2410c));	// 38773 jmp     loc_2410C ;~ 1359:250F
loc_24082:
	// 7052 
cs=0x1359;eip=0x002512; 	T(MOV(ax, word_3ea3c));	// 38777 mov     ax, word_3EA3C ;~ 1359:2512
cs=0x1359;eip=0x002515; 	T(ADD(ax, word_3ea4e));	// 38778 add     ax, word_3EA4E ;~ 1359:2515
cs=0x1359;eip=0x002519; 	T(SAR(ax, 1));	// 38779 sar     ax, 1 ;~ 1359:2519
cs=0x1359;eip=0x00251b; 	T(SUB(ax, mouse_ypos));	// 38780 sub     ax, mouse_ypos ;~ 1359:251B
cs=0x1359;eip=0x00251f; 	X(PUSH(ax));	// 38781 push    ax ;~ 1359:251F
cs=0x1359;eip=0x002520; 	T(MOV(ax, mouse_xpos));	// 38782 mov     ax, mouse_xpos ;~ 1359:2520
cs=0x1359;eip=0x002523; 	T(MOV(cx, word_3ea18));	// 38783 mov     cx, word_3EA18 ;~ 1359:2523
cs=0x1359;eip=0x002527; 	T(ADD(cx, word_3ea2a));	// 38784 add     cx, word_3EA2A ;~ 1359:2527
cs=0x1359;eip=0x00252b; 	T(SAR(cx, 1));	// 38785 sar     cx, 1 ;~ 1359:252B
cs=0x1359;eip=0x00252d; 	T(SUB(ax, cx));	// 38786 sub     ax, cx ;~ 1359:252D
cs=0x1359;eip=0x00252f; 	X(PUSH(ax));	// 38787 push    ax ;~ 1359:252F
cs=0x1359;eip=0x002530; 	R(CALLF(polarangle,0));	// 38788 call    polarAngle ;~ 1359:2530
cs=0x1359;eip=0x002535; 	T(ADD(sp, 4));	// 38789 add     sp, 4 ;~ 1359:2535
cs=0x1359;eip=0x002538; 	T(ADD(ax, 0x80));	// 38790 add     ax, 80h ; '€' ;~ 1359:2538
cs=0x1359;eip=0x00253b; 	T(AND(ah, 3));	// 38791 and     ah, 3 ;~ 1359:253B
cs=0x1359;eip=0x00253e; 	T(MOV(cl, 8));	// 38792 mov     cl, 8 ;~ 1359:253E
cs=0x1359;eip=0x002540; 	T(SHR(ax, cl));	// 38793 shr     ax, cl ;~ 1359:2540
cs=0x1359;eip=0x002542; 	T(OR(ax, ax));	// 38794 or      ax, ax ;~ 1359:2542
cs=0x1359;eip=0x002544; 	R(JZ(loc_2407a));	// 38795 jz      short loc_2407A ;~ 1359:2544
cs=0x1359;eip=0x002546; 	T(CMP(ax, 1));	// 38796 cmp     ax, 1 ;~ 1359:2546
cs=0x1359;eip=0x002549; 	R(JZ(loc_240c8));	// 38797 jz      short loc_240C8 ;~ 1359:2549
cs=0x1359;eip=0x00254b; 	T(CMP(ax, 2));	// 38798 cmp     ax, 2 ;~ 1359:254B
cs=0x1359;eip=0x00254e; 	R(JZ(loc_24071));	// 38799 jz      short loc_24071 ;~ 1359:254E
cs=0x1359;eip=0x002550; 	T(CMP(ax, 3));	// 38800 cmp     ax, 3 ;~ 1359:2550
cs=0x1359;eip=0x002553; 	R(JZ(loc_240d0));	// 38801 jz      short loc_240D0 ;~ 1359:2553
cs=0x1359;eip=0x002555; 	R(JMP(loc_2410c));	// 38802 jmp     short loc_2410C ;~ 1359:2555
loc_240c8:
	// 7053 
cs=0x1359;eip=0x002558; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0x4D00));	// 38807 mov     [bp+var_16], 4D00h ;~ 1359:2558
cs=0x1359;eip=0x00255d; 	R(JMP(loc_2410c));	// 38808 jmp     short loc_2410C ;~ 1359:255D
loc_240d0:
	// 7054 
cs=0x1359;eip=0x002560; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0x4B00));	// 38813 mov     [bp+var_16], 4B00h ;~ 1359:2560
cs=0x1359;eip=0x002565; 	R(JMP(loc_2410c));	// 38814 jmp     short loc_2410C ;~ 1359:2565
loc_240d8:
	// 7055 
cs=0x1359;eip=0x002568; 	T(MOV(ax, offset(dseg,gameunk_button_y2)));	// 38819 mov     ax, offset gameunk_button_y2 ;~ 1359:2568
cs=0x1359;eip=0x00256b; 	X(PUSH(ax));	// 38820 push    ax ;~ 1359:256B
cs=0x1359;eip=0x00256c; 	T(MOV(ax, offset(dseg,gameunk_button_y1)));	// 38821 mov     ax, offset gameunk_button_y1 ;~ 1359:256C
cs=0x1359;eip=0x00256f; 	X(PUSH(ax));	// 38822 push    ax ;~ 1359:256F
cs=0x1359;eip=0x002570; 	T(MOV(ax, offset(dseg,gameunk_button_x2)));	// 38823 mov     ax, offset gameunk_button_x2 ;~ 1359:2570
cs=0x1359;eip=0x002573; 	X(PUSH(ax));	// 38824 push    ax ;~ 1359:2573
cs=0x1359;eip=0x002574; 	T(MOV(ax, offset(dseg,gameunk_button_x1)));	// 38825 mov     ax, offset gameunk_button_x1 ;~ 1359:2574
cs=0x1359;eip=0x002577; 	X(PUSH(ax));	// 38826 push    ax ;~ 1359:2577
cs=0x1359;eip=0x002578; 	T(MOV(ax, 1));	// 38827 mov     ax, 1 ;~ 1359:2578
cs=0x1359;eip=0x00257b; 	X(PUSH(ax));	// 38828 push    ax ;~ 1359:257B
cs=0x1359;eip=0x00257c; 	R(CALLF(mouse_multi_hittest,0));	// 38829 call    mouse_multi_hittest ;~ 1359:257C
cs=0x1359;eip=0x002581; 	T(ADD(sp, 0x0A));	// 38830 add     sp, 0Ah ;~ 1359:2581
cs=0x1359;eip=0x002584; 	X(MOV(*(raddr(ss,bp+var_20)), al));	// 38831 mov     [bp+var_20], al ;~ 1359:2584
cs=0x1359;eip=0x002587; 	T(OR(al, al));	// 38832 or      al, al ;~ 1359:2587
cs=0x1359;eip=0x002589; 	R(JNZ(loc_2410c));	// 38833 jnz     short loc_2410C ;~ 1359:2589
cs=0x1359;eip=0x00258b; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x20));	// 38834 cmp     [bp+var_16], 20h ; ' ' ;~ 1359:258B
cs=0x1359;eip=0x00258f; 	R(JZ(loc_24107));	// 38835 jz      short loc_24107 ;~ 1359:258F
cs=0x1359;eip=0x002591; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x0D));	// 38836 cmp     [bp+var_16], 0Dh ;~ 1359:2591
cs=0x1359;eip=0x002595; 	R(JNZ(loc_2410c));	// 38837 jnz     short loc_2410C ;~ 1359:2595
loc_24107:
	// 7056 
cs=0x1359;eip=0x002597; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0x63));	// 38840 mov     [bp+var_16], 63h ; 'c' ;~ 1359:2597
loc_2410c:
	// 7057 
cs=0x1359;eip=0x00259c; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0));	// 38844 cmp     [bp+var_16], 0 ;~ 1359:259C
cs=0x1359;eip=0x0025a0; 	R(JZ(loc_24129));	// 38845 jz      short loc_24129 ;~ 1359:25A0
cs=0x1359;eip=0x0025a2; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x1B));	// 38846 cmp     [bp+var_16], 1Bh ;~ 1359:25A2
cs=0x1359;eip=0x0025a6; 	R(JZ(loc_24129));	// 38847 jz      short loc_24129 ;~ 1359:25A6
cs=0x1359;eip=0x0025a8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 38848 push    [bp+var_16] ;~ 1359:25A8
cs=0x1359;eip=0x0025ab; 	X(PUSH(cs));	// 38849 push    cs ;~ 1359:25AB
cs=0x1359;eip=0x0025ac; 	R(CALL(handle_ingame_kb_shortcuts,0));	// 38850 call    near ptr handle_ingame_kb_shortcuts ;~ 1359:25AC
cs=0x1359;eip=0x0025af; 	T(ADD(sp, 2));	// 38851 add     sp, 2 ;~ 1359:25AF
cs=0x1359;eip=0x0025b2; 	T(OR(al, al));	// 38852 or      al, al ;~ 1359:25B2
cs=0x1359;eip=0x0025b4; 	R(JZ(loc_24129));	// 38853 jz      short loc_24129 ;~ 1359:25B4
cs=0x1359;eip=0x0025b6; 	R(JMP(loc_24d5e));	// 38854 jmp     loc_24D5E ;~ 1359:25B6
loc_24129:
	// 7058 
cs=0x1359;eip=0x0025b9; 	T(CMP(is_in_replay, 0));	// 38859 cmp     is_in_replay, 0 ;~ 1359:25B9
cs=0x1359;eip=0x0025be; 	R(JNZ(loc_2415a));	// 38860 jnz     short loc_2415A ;~ 1359:25BE
cs=0x1359;eip=0x0025c0; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0));	// 38861 cmp     [bp+var_16], 0 ;~ 1359:25C0
cs=0x1359;eip=0x0025c4; 	R(JNZ(loc_2415a));	// 38862 jnz     short loc_2415A ;~ 1359:25C4
cs=0x1359;eip=0x0025c6; 	T(CMP(replaybar_enabled, 0));	// 38863 cmp     replaybar_enabled, 0 ;~ 1359:25C6
cs=0x1359;eip=0x0025cb; 	R(JNZ(loc_24140));	// 38864 jnz     short loc_24140 ;~ 1359:25CB
cs=0x1359;eip=0x0025cd; 	R(JMP(loc_24d5e));	// 38865 jmp     loc_24D5E ;~ 1359:25CD
loc_24140:
	// 7059 
cs=0x1359;eip=0x0025d0; 	X(PUSH(word_445d4));	// 38870 push    word_445D4 ;~ 1359:25D0
cs=0x1359;eip=0x0025d4; 	X(PUSH(word_445d4));	// 38871 push    word_445D4 ;~ 1359:25D4
cs=0x1359;eip=0x0025d8; 	T(MOV(ax, 1));	// 38872 mov     ax, 1 ;~ 1359:25D8
cs=0x1359;eip=0x0025db; 	X(PUSH(ax));	// 38873 push    ax ;~ 1359:25DB
cs=0x1359;eip=0x0025dc; 	X(PUSH(cs));	// 38874 push    cs ;~ 1359:25DC
cs=0x1359;eip=0x0025dd; 	R(CALL(loop_game,0));	// 38875 call    near ptr loop_game ;~ 1359:25DD
cs=0x1359;eip=0x0025e0; 	T(ADD(sp, 6));	// 38876 add     sp, 6 ;~ 1359:25E0
cs=0x1359;eip=0x0025e3; 	X(POP(si));	// 38877 pop     si ;~ 1359:25E3
cs=0x1359;eip=0x0025e4; 	X(POP(di));	// 38878 pop     di ;~ 1359:25E4
cs=0x1359;eip=0x0025e5; 	T(MOV(sp, bp));	// 38879 mov     sp, bp ;~ 1359:25E5
cs=0x1359;eip=0x0025e7; 	X(POP(bp));	// 38880 pop     bp ;~ 1359:25E7
cs=0x1359;eip=0x0025e8; 	R(RETF(0));	// 38881 retf ;~ 1359:25E8
loc_2415a:
	// 7060 
cs=0x1359;eip=0x0025ea; 	T(CMP(replaybar_enabled, 0));	// 38887 cmp     replaybar_enabled, 0 ;~ 1359:25EA
cs=0x1359;eip=0x0025ef; 	R(JNZ(loc_2416c));	// 38888 jnz     short loc_2416C ;~ 1359:25EF
cs=0x1359;eip=0x0025f1; 	X(MOV(is_in_replay_copy, 0x0FF));	// 38889 mov     is_in_replay_copy, 0FFh ;~ 1359:25F1
cs=0x1359;eip=0x0025f6; 	X(MOV(word_449ea, 0x0FFFF));	// 38890 mov     word_449EA, 0FFFFh ;~ 1359:25F6
loc_2416c:
	// 7061 
cs=0x1359;eip=0x0025fc; 	T(CMP(is_in_replay, 0));	// 38893 cmp     is_in_replay, 0 ;~ 1359:25FC
cs=0x1359;eip=0x002601; 	R(JZ(loc_24193));	// 38894 jz      short loc_24193 ;~ 1359:2601
cs=0x1359;eip=0x002603; 	T(CMP(byte_40e6d, 0));	// 38895 cmp     byte_40E6D, 0 ;~ 1359:2603
cs=0x1359;eip=0x002608; 	R(JNZ(loc_24181));	// 38896 jnz     short loc_24181 ;~ 1359:2608
cs=0x1359;eip=0x00260a; 	T(CMP(byte_40e6c, 0));	// 38897 cmp     byte_40E6C, 0 ;~ 1359:260A
cs=0x1359;eip=0x00260f; 	R(JZ(loc_24193));	// 38898 jz      short loc_24193 ;~ 1359:260F
loc_24181:
	// 7062 
cs=0x1359;eip=0x002611; 	T(SUB(ax, ax));	// 38901 sub     ax, ax ;~ 1359:2611
cs=0x1359;eip=0x002613; 	X(PUSH(ax));	// 38902 push    ax ;~ 1359:2613
cs=0x1359;eip=0x002614; 	T(MOV(ax, 4));	// 38903 mov     ax, 4 ;~ 1359:2614
cs=0x1359;eip=0x002617; 	X(PUSH(ax));	// 38904 push    ax ;~ 1359:2617
cs=0x1359;eip=0x002618; 	T(MOV(ax, 2));	// 38905 mov     ax, 2 ;~ 1359:2618
cs=0x1359;eip=0x00261b; 	X(PUSH(ax));	// 38906 push    ax ;~ 1359:261B
cs=0x1359;eip=0x00261c; 	X(PUSH(cs));	// 38907 push    cs ;~ 1359:261C
cs=0x1359;eip=0x00261d; 	R(CALL(loop_game,0));	// 38908 call    near ptr loop_game ;~ 1359:261D
cs=0x1359;eip=0x002620; 	T(ADD(sp, 6));	// 38909 add     sp, 6 ;~ 1359:2620
loc_24193:
	// 7063 
cs=0x1359;eip=0x002623; 	X(PUSH(word_445d4));	// 38913 push    word_445D4 ;~ 1359:2623
cs=0x1359;eip=0x002627; 	X(PUSH(word_445d4));	// 38914 push    word_445D4 ;~ 1359:2627
cs=0x1359;eip=0x00262b; 	T(MOV(ax, 1));	// 38915 mov     ax, 1 ;~ 1359:262B
cs=0x1359;eip=0x00262e; 	X(PUSH(ax));	// 38916 push    ax ;~ 1359:262E
cs=0x1359;eip=0x00262f; 	X(PUSH(cs));	// 38917 push    cs ;~ 1359:262F
cs=0x1359;eip=0x002630; 	R(CALL(loop_game,0));	// 38918 call    near ptr loop_game ;~ 1359:2630
cs=0x1359;eip=0x002633; 	T(ADD(sp, 6));	// 38919 add     sp, 6 ;~ 1359:2633
cs=0x1359;eip=0x002636; 	X(MOV(*(raddr(ss,bp+var_40)), 0));	// 38920 mov     [bp+var_40], 0 ;~ 1359:2636
cs=0x1359;eip=0x00263a; 	T(MOV(ax, 0x1D));	// 38921 mov     ax, 1Dh ;~ 1359:263A
cs=0x1359;eip=0x00263d; 	X(PUSH(ax));	// 38922 push    ax ;~ 1359:263D
cs=0x1359;eip=0x00263e; 	R(CALLF(kb_get_key_state,0));	// 38923 call    kb_get_key_state ;~ 1359:263E
cs=0x1359;eip=0x002643; 	T(ADD(sp, 2));	// 38924 add     sp, 2 ;~ 1359:2643
cs=0x1359;eip=0x002646; 	T(OR(ax, ax));	// 38925 or      ax, ax ;~ 1359:2646
cs=0x1359;eip=0x002648; 	R(JNZ(loc_241c8));	// 38926 jnz     short loc_241C8 ;~ 1359:2648
cs=0x1359;eip=0x00264a; 	T(CMP(byte_3e9db, 8));	// 38927 cmp     byte_3E9DB, 8 ;~ 1359:264A
cs=0x1359;eip=0x00264f; 	R(JNZ(loc_241cc));	// 38928 jnz     short loc_241CC ;~ 1359:264F
cs=0x1359;eip=0x002651; 	T(TEST(*(db*)(((db*)&kbjoyflags)), 0x30));	// 38929 test    byte ptr kbjoyflags, 30h ;~ 1359:2651
cs=0x1359;eip=0x002656; 	R(JZ(loc_241cc));	// 38930 jz      short loc_241CC ;~ 1359:2656
loc_241c8:
	// 7064 
cs=0x1359;eip=0x002658; 	X(MOV(*(raddr(ss,bp+var_40)), 1));	// 38933 mov     [bp+var_40], 1 ;~ 1359:2658
loc_241cc:
	// 7065 
cs=0x1359;eip=0x00265c; 	T(CMP(*(raddr(ss,bp+var_40)), 0));	// 38937 cmp     [bp+var_40], 0 ;~ 1359:265C
cs=0x1359;eip=0x002660; 	R(JZ(loc_241fe));	// 38938 jz      short loc_241FE ;~ 1359:2660
cs=0x1359;eip=0x002662; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 38939 mov     ax, [bp+var_16] ;~ 1359:2662
cs=0x1359;eip=0x002665; 	T(CMP(ax, 0x2B));	// 38940 cmp     ax, 2Bh ; '+' ;~ 1359:2665
cs=0x1359;eip=0x002668; 	R(JNZ(loc_241dd));	// 38941 jnz     short loc_241DD ;~ 1359:2668
cs=0x1359;eip=0x00266a; 	R(JMP(loc_2429c));	// 38942 jmp     loc_2429C ;~ 1359:266A
loc_241dd:
	// 7066 
cs=0x1359;eip=0x00266d; 	T(CMP(ax, 0x2D));	// 38946 cmp     ax, 2Dh ; '-' ;~ 1359:266D
cs=0x1359;eip=0x002670; 	R(JNZ(loc_241e5));	// 38947 jnz     short loc_241E5 ;~ 1359:2670
cs=0x1359;eip=0x002672; 	R(JMP(loc_2426e));	// 38948 jmp     loc_2426E ;~ 1359:2672
loc_241e5:
	// 7067 
cs=0x1359;eip=0x002675; 	T(CMP(ax, 0x4800));	// 38952 cmp     ax, 4800h ;~ 1359:2675
cs=0x1359;eip=0x002678; 	R(JZ(loc_24242));	// 38953 jz      short loc_24242 ;~ 1359:2678
cs=0x1359;eip=0x00267a; 	T(CMP(ax, 0x4B00));	// 38954 cmp     ax, 4B00h ;~ 1359:267A
cs=0x1359;eip=0x00267d; 	R(JZ(loc_24236));	// 38955 jz      short loc_24236 ;~ 1359:267D
cs=0x1359;eip=0x00267f; 	T(CMP(ax, 0x4D00));	// 38956 cmp     ax, 4D00h ;~ 1359:267F
cs=0x1359;eip=0x002682; 	R(JZ(loc_2422a));	// 38957 jz      short loc_2422A ;~ 1359:2682
cs=0x1359;eip=0x002684; 	T(CMP(ax, 0x5000));	// 38958 cmp     ax, 5000h ;~ 1359:2684
cs=0x1359;eip=0x002687; 	R(JZ(loc_24258));	// 38959 jz      short loc_24258 ;~ 1359:2687
loc_241f9:
	// 7068 
cs=0x1359;eip=0x002689; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0));	// 38963 mov     [bp+var_16], 0 ;~ 1359:2689
loc_241fe:
	// 7069 
cs=0x1359;eip=0x00268e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 38966 mov     ax, [bp+var_16] ;~ 1359:268E
cs=0x1359;eip=0x002691; 	T(CMP(ax, 0x2B));	// 38967 cmp     ax, 2Bh ; '+' ;~ 1359:2691
cs=0x1359;eip=0x002694; 	R(JNZ(loc_24209));	// 38968 jnz     short loc_24209 ;~ 1359:2694
cs=0x1359;eip=0x002696; 	R(JMP(loc_2429c));	// 38969 jmp     loc_2429C ;~ 1359:2696
loc_24209:
	// 7070 
cs=0x1359;eip=0x002699; 	R(JBE(loc_2420e));	// 38973 jbe     short loc_2420E ;~ 1359:2699
cs=0x1359;eip=0x00269b; 	R(JMP(loc_24d32));	// 38974 jmp     loc_24D32 ;~ 1359:269B
loc_2420e:
	// 7071 
cs=0x1359;eip=0x00269e; 	T(CMP(ax, 0x0D));	// 38978 cmp     ax, 0Dh ;~ 1359:269E
cs=0x1359;eip=0x0026a1; 	R(JNZ(loc_24216));	// 38979 jnz     short loc_24216 ;~ 1359:26A1
cs=0x1359;eip=0x0026a3; 	R(JMP(loc_24334));	// 38980 jmp     loc_24334 ;~ 1359:26A3
loc_24216:
	// 7072 
cs=0x1359;eip=0x0026a6; 	T(CMP(ax, 0x1B));	// 38984 cmp     ax, 1Bh ;~ 1359:26A6
cs=0x1359;eip=0x0026a9; 	R(JNZ(loc_2421e));	// 38985 jnz     short loc_2421E ;~ 1359:26A9
cs=0x1359;eip=0x0026ab; 	R(JMP(loc_24346));	// 38986 jmp     loc_24346       ; jumptable 00024340 case 6 ;~ 1359:26AB
loc_2421e:
	// 7073 
cs=0x1359;eip=0x0026ae; 	T(CMP(ax, 0x20));	// 38990 cmp     ax, 20h ; ' ' ;~ 1359:26AE
cs=0x1359;eip=0x0026b1; 	R(JNZ(loc_24226));	// 38991 jnz     short loc_24226 ;~ 1359:26B1
cs=0x1359;eip=0x0026b3; 	R(JMP(loc_24334));	// 38992 jmp     loc_24334 ;~ 1359:26B3
loc_24226:
	// 7074 
cs=0x1359;eip=0x0026b6; 	R(JMP(def_24340));	// 38996 jmp     def_24340       ; jumptable 00024340 default case ;~ 1359:26B6
loc_2422a:
	// 7075 
cs=0x1359;eip=0x0026ba; 	X(ADD(word_3b8ee, 0x10));	// 39001 add     word_3B8EE, 10h ;~ 1359:26BA
cs=0x1359;eip=0x0026bf; 	X(POP(si));	// 39002 pop     si ;~ 1359:26BF
cs=0x1359;eip=0x0026c0; 	X(POP(di));	// 39003 pop     di ;~ 1359:26C0
cs=0x1359;eip=0x0026c1; 	T(MOV(sp, bp));	// 39004 mov     sp, bp ;~ 1359:26C1
cs=0x1359;eip=0x0026c3; 	X(POP(bp));	// 39005 pop     bp ;~ 1359:26C3
cs=0x1359;eip=0x0026c4; 	R(RETF(0));	// 39006 retf ;~ 1359:26C4
loc_24236:
	// 7076 
cs=0x1359;eip=0x0026c6; 	X(SUB(word_3b8ee, 0x10));	// 39011 sub     word_3B8EE, 10h ;~ 1359:26C6
cs=0x1359;eip=0x0026cb; 	X(POP(si));	// 39012 pop     si ;~ 1359:26CB
cs=0x1359;eip=0x0026cc; 	X(POP(di));	// 39013 pop     di ;~ 1359:26CC
cs=0x1359;eip=0x0026cd; 	T(MOV(sp, bp));	// 39014 mov     sp, bp ;~ 1359:26CD
cs=0x1359;eip=0x0026cf; 	X(POP(bp));	// 39015 pop     bp ;~ 1359:26CF
cs=0x1359;eip=0x0026d0; 	R(RETF(0));	// 39016 retf ;~ 1359:26D0
loc_24242:
	// 7077 
cs=0x1359;eip=0x0026d2; 	T(MOV(ax, word_3b8f0));	// 39021 mov     ax, word_3B8F0 ;~ 1359:26D2
cs=0x1359;eip=0x0026d5; 	T(ADD(ax, 0x10));	// 39022 add     ax, 10h ;~ 1359:26D5
cs=0x1359;eip=0x0026d8; 	T(CMP(ax, 0x100));	// 39023 cmp     ax, 100h ;~ 1359:26D8
cs=0x1359;eip=0x0026db; 	R(JGE(loc_241f9));	// 39024 jge     short loc_241F9 ;~ 1359:26DB
cs=0x1359;eip=0x0026dd; 	X(ADD(word_3b8f0, 0x10));	// 39025 add     word_3B8F0, 10h ;~ 1359:26DD
cs=0x1359;eip=0x0026e2; 	X(POP(si));	// 39026 pop     si ;~ 1359:26E2
cs=0x1359;eip=0x0026e3; 	X(POP(di));	// 39027 pop     di ;~ 1359:26E3
cs=0x1359;eip=0x0026e4; 	T(MOV(sp, bp));	// 39028 mov     sp, bp ;~ 1359:26E4
cs=0x1359;eip=0x0026e6; 	X(POP(bp));	// 39029 pop     bp ;~ 1359:26E6
cs=0x1359;eip=0x0026e7; 	R(RETF(0));	// 39030 retf ;~ 1359:26E7
loc_24258:
	// 7078 
cs=0x1359;eip=0x0026e8; 	T(MOV(ax, word_3b8f0));	// 39034 mov     ax, word_3B8F0 ;~ 1359:26E8
cs=0x1359;eip=0x0026eb; 	T(SUB(ax, 0x10));	// 39035 sub     ax, 10h ;~ 1359:26EB
cs=0x1359;eip=0x0026ee; 	T(CMP(ax, 0x0FF00));	// 39036 cmp     ax, 0FF00h ;~ 1359:26EE
cs=0x1359;eip=0x0026f1; 	R(JLE(loc_241f9));	// 39037 jle     short loc_241F9 ;~ 1359:26F1
cs=0x1359;eip=0x0026f3; 	X(SUB(word_3b8f0, 0x10));	// 39038 sub     word_3B8F0, 10h ;~ 1359:26F3
cs=0x1359;eip=0x0026f8; 	X(POP(si));	// 39039 pop     si ;~ 1359:26F8
cs=0x1359;eip=0x0026f9; 	X(POP(di));	// 39040 pop     di ;~ 1359:26F9
cs=0x1359;eip=0x0026fa; 	T(MOV(sp, bp));	// 39041 mov     sp, bp ;~ 1359:26FA
cs=0x1359;eip=0x0026fc; 	X(POP(bp));	// 39042 pop     bp ;~ 1359:26FC
cs=0x1359;eip=0x0026fd; 	R(RETF(0));	// 39043 retf ;~ 1359:26FD
loc_2426e:
	// 7079 
cs=0x1359;eip=0x0026fe; 	T(CMP(cameramode, 3));	// 39048 cmp     cameramode, 3 ;~ 1359:26FE
cs=0x1359;eip=0x002703; 	R(JNZ(loc_24288));	// 39049 jnz     short loc_24288 ;~ 1359:2703
cs=0x1359;eip=0x002705; 	T(CMP(word_44d20, 0));	// 39050 cmp     word_44D20, 0 ;~ 1359:2705
cs=0x1359;eip=0x00270a; 	R(JG(loc_2427f));	// 39051 jg      short loc_2427F ;~ 1359:270A
cs=0x1359;eip=0x00270c; 	R(JMP(loc_241f9));	// 39052 jmp     loc_241F9 ;~ 1359:270C
loc_2427f:
	// 7080 
cs=0x1359;eip=0x00270f; 	X(SUB(word_44d20, 0x1E));	// 39056 sub     word_44D20, 1Eh ;~ 1359:270F
cs=0x1359;eip=0x002714; 	R(JMP(loc_24d5e));	// 39057 jmp     loc_24D5E ;~ 1359:2714
loc_24288:
	// 7081 
cs=0x1359;eip=0x002718; 	T(CMP(word_3b8ec, 0x5DC));	// 39062 cmp     word_3B8EC, 5DCh ;~ 1359:2718
cs=0x1359;eip=0x00271e; 	R(JL(loc_24293));	// 39063 jl      short loc_24293 ;~ 1359:271E
cs=0x1359;eip=0x002720; 	R(JMP(loc_241f9));	// 39064 jmp     loc_241F9 ;~ 1359:2720
loc_24293:
	// 7082 
cs=0x1359;eip=0x002723; 	X(ADD(word_3b8ec, 0x1E));	// 39068 add     word_3B8EC, 1Eh ;~ 1359:2723
cs=0x1359;eip=0x002728; 	R(JMP(loc_24d5e));	// 39069 jmp     loc_24D5E ;~ 1359:2728
loc_2429c:
	// 7083 
cs=0x1359;eip=0x00272c; 	T(CMP(cameramode, 3));	// 39075 cmp     cameramode, 3 ;~ 1359:272C
cs=0x1359;eip=0x002731; 	R(JNZ(loc_242b6));	// 39076 jnz     short loc_242B6 ;~ 1359:2731
cs=0x1359;eip=0x002733; 	T(CMP(word_44d20, 0x384));	// 39077 cmp     word_44D20, 384h ;~ 1359:2733
cs=0x1359;eip=0x002739; 	R(JL(loc_242ae));	// 39078 jl      short loc_242AE ;~ 1359:2739
cs=0x1359;eip=0x00273b; 	R(JMP(loc_241f9));	// 39079 jmp     loc_241F9 ;~ 1359:273B
loc_242ae:
	// 7084 
cs=0x1359;eip=0x00273e; 	X(ADD(word_44d20, 0x1E));	// 39083 add     word_44D20, 1Eh ;~ 1359:273E
cs=0x1359;eip=0x002743; 	R(JMP(loc_24d5e));	// 39084 jmp     loc_24D5E ;~ 1359:2743
loc_242b6:
	// 7085 
cs=0x1359;eip=0x002746; 	T(CMP(word_3b8ec, 0x78));	// 39088 cmp     word_3B8EC, 78h ; 'x' ;~ 1359:2746
cs=0x1359;eip=0x00274b; 	R(JG(loc_242c0));	// 39089 jg      short loc_242C0 ;~ 1359:274B
cs=0x1359;eip=0x00274d; 	R(JMP(loc_241f9));	// 39090 jmp     loc_241F9 ;~ 1359:274D
loc_242c0:
	// 7086 
cs=0x1359;eip=0x002750; 	X(SUB(word_3b8ec, 0x1E));	// 39094 sub     word_3B8EC, 1Eh ;~ 1359:2750
cs=0x1359;eip=0x002755; 	R(JMP(loc_24d5e));	// 39095 jmp     loc_24D5E ;~ 1359:2755
loc_242c8:
	// 7087 
cs=0x1359;eip=0x002758; 	T(MOV(al, byte_3e9db));	// 39099 mov     al, byte_3E9DB ;~ 1359:2758
cs=0x1359;eip=0x00275b; 	T(CBW);	// 39100 cbw ;~ 1359:275B
cs=0x1359;eip=0x00275c; 	T(MOV(bx, ax));	// 39101 mov     bx, ax ;~ 1359:275C
cs=0x1359;eip=0x00275e; 	T(MOV(al, *((&byte_3e9dc)+bx)));	// 39102 mov     al, byte_3E9DC[bx] ;~ 1359:275E
cs=0x1359;eip=0x002762; 	X(MOV(*(db*)(raddr(ss,bp+var_44)), al));	// 39103 mov     byte ptr [bp+var_44], al ;~ 1359:2762
cs=0x1359;eip=0x002765; 	T(MOV(al, cameramode));	// 39104 mov     al, cameramode ;~ 1359:2765
cs=0x1359;eip=0x002768; 	T(CBW);	// 39105 cbw ;~ 1359:2768
cs=0x1359;eip=0x002769; 	T(MOV(bx, ax));	// 39106 mov     bx, ax ;~ 1359:2769
cs=0x1359;eip=0x00276b; 	T(MOV(al, *(db*)(raddr(ss,bp+var_44))));	// 39107 mov     al, byte ptr [bp+var_44] ;~ 1359:276B
cs=0x1359;eip=0x00276e; 	T(CMP(*((&game_camera_buttons_count)+bx), al));	// 39108 cmp     game_camera_buttons_count[bx], al ;~ 1359:276E
cs=0x1359;eip=0x002772; 	R(JL(def_24340));	// 39109 jl      short def_24340 ; jumptable 00024340 default case ;~ 1359:2772
loc_242e4:
	// 7088 
cs=0x1359;eip=0x002774; 	X(MOV(byte_3e9db, al));	// 39113 mov     byte_3E9DB, al ;~ 1359:2774
def_24340:
	// 7089 
cs=0x1359;eip=0x002777; 	X(PUSH(word_445d4));	// 39117 push    word_445D4      ; jumptable 00024340 default case ;~ 1359:2777
cs=0x1359;eip=0x00277b; 	X(PUSH(word_445d4));	// 39118 push    word_445D4 ;~ 1359:277B
cs=0x1359;eip=0x00277f; 	T(MOV(ax, 1));	// 39119 mov     ax, 1 ;~ 1359:277F
cs=0x1359;eip=0x002782; 	X(PUSH(ax));	// 39120 push    ax ;~ 1359:2782
cs=0x1359;eip=0x002783; 	X(PUSH(cs));	// 39121 push    cs ;~ 1359:2783
cs=0x1359;eip=0x002784; 	R(CALL(loop_game,0));	// 39122 call    near ptr loop_game ;~ 1359:2784
cs=0x1359;eip=0x002787; 	T(ADD(sp, 6));	// 39123 add     sp, 6 ;~ 1359:2787
cs=0x1359;eip=0x00278a; 	R(JMP(loc_23fee));	// 39124 jmp     loc_23FEE ;~ 1359:278A
loc_242fe:
	// 7090 
cs=0x1359;eip=0x00278e; 	T(MOV(al, byte_3e9db));	// 39129 mov     al, byte_3E9DB ;~ 1359:278E
cs=0x1359;eip=0x002791; 	T(CBW);	// 39130 cbw ;~ 1359:2791
cs=0x1359;eip=0x002792; 	T(MOV(bx, ax));	// 39131 mov     bx, ax ;~ 1359:2792
cs=0x1359;eip=0x002794; 	T(MOV(al, *((&byte_3e9e6)+bx)));	// 39132 mov     al, byte_3E9E6[bx] ;~ 1359:2794
cs=0x1359;eip=0x002798; 	R(JMP(loc_242e4));	// 39133 jmp     short loc_242E4 ;~ 1359:2798
loc_2430a:
	// 7091 
cs=0x1359;eip=0x00279a; 	T(CMP(byte_3e9db, 7));	// 39137 cmp     byte_3E9DB, 7 ;~ 1359:279A
cs=0x1359;eip=0x00279f; 	R(JZ(loc_2429c));	// 39138 jz      short loc_2429C ;~ 1359:279F
cs=0x1359;eip=0x0027a1; 	T(MOV(al, byte_3e9db));	// 39139 mov     al, byte_3E9DB ;~ 1359:27A1
cs=0x1359;eip=0x0027a4; 	T(CBW);	// 39140 cbw ;~ 1359:27A4
cs=0x1359;eip=0x0027a5; 	T(MOV(bx, ax));	// 39141 mov     bx, ax ;~ 1359:27A5
cs=0x1359;eip=0x0027a7; 	T(MOV(al, *((&byte_3e9f0)+bx)));	// 39142 mov     al, byte_3E9F0[bx] ;~ 1359:27A7
cs=0x1359;eip=0x0027ab; 	R(JMP(loc_242e4));	// 39143 jmp     short loc_242E4 ;~ 1359:27AB
loc_2431e:
	// 7092 
cs=0x1359;eip=0x0027ae; 	T(CMP(byte_3e9db, 7));	// 39148 cmp     byte_3E9DB, 7 ;~ 1359:27AE
cs=0x1359;eip=0x0027b3; 	R(JNZ(loc_24328));	// 39149 jnz     short loc_24328 ;~ 1359:27B3
cs=0x1359;eip=0x0027b5; 	R(JMP(loc_2426e));	// 39150 jmp     loc_2426E ;~ 1359:27B5
loc_24328:
	// 7093 
cs=0x1359;eip=0x0027b8; 	T(MOV(al, byte_3e9db));	// 39154 mov     al, byte_3E9DB ;~ 1359:27B8
cs=0x1359;eip=0x0027bb; 	T(CBW);	// 39155 cbw ;~ 1359:27BB
cs=0x1359;eip=0x0027bc; 	T(MOV(bx, ax));	// 39156 mov     bx, ax ;~ 1359:27BC
cs=0x1359;eip=0x0027be; 	T(MOV(al, *((&byte_3e9fa)+bx)));	// 39157 mov     al, byte_3E9FA[bx] ;~ 1359:27BE
cs=0x1359;eip=0x0027c2; 	R(JMP(loc_242e4));	// 39158 jmp     short loc_242E4 ;~ 1359:27C2
loc_24334:
	// 7094 
cs=0x1359;eip=0x0027c4; 	T(MOV(al, byte_3e9db));	// 39163 mov     al, byte_3E9DB ;~ 1359:27C4
cs=0x1359;eip=0x0027c7; 	T(CBW);	// 39164 cbw ;~ 1359:27C7
cs=0x1359;eip=0x0027c8; 	T(CMP(ax, 6));	// 39165 cmp     ax, 6           ; switch 7 cases ;~ 1359:27C8
cs=0x1359;eip=0x0027cb; 	R(JA(def_24340));	// 39166 ja      short def_24340 ; jumptable 00024340 default case ;~ 1359:27CB
cs=0x1359;eip=0x0027cd; 	T(ADD(ax, ax));	// 39167 add     ax, ax ;~ 1359:27CD
cs=0x1359;eip=0x0027cf; 	T(XCHG(ax, bx));	// 39168 xchg    ax, bx ;~ 1359:27CF
	cs=seg_offset(seg005);
cs=0x1359;eip=0x0027d0; __disp=*(dw*)(((db*)&jpt_24340)+bx);
	R(JMP(__dispatch_call));	// 39169 jmp     cs:jpt_24340[bx] ; switch jump ;~ 1359:27D0
loc_24346:
	// 7095 
cs=0x1359;eip=0x0027d6; 	X(MOV(is_in_replay, 1));	// 39176 mov     is_in_replay, 1 ; jumptable 00024340 case 6 ;~ 1359:27D6
cs=0x1359;eip=0x0027db; 	R(CALLF(audio_carstate,0));	// 39177 call    audio_carstate ;~ 1359:27DB
cs=0x1359;eip=0x0027e0; 	T(SUB(ax, ax));	// 39178 sub     ax, ax ;~ 1359:27E0
cs=0x1359;eip=0x0027e2; 	X(PUSH(ax));	// 39179 push    ax ;~ 1359:27E2
cs=0x1359;eip=0x0027e3; 	T(MOV(ax, 4));	// 39180 mov     ax, 4 ;~ 1359:27E3
cs=0x1359;eip=0x0027e6; 	X(PUSH(ax));	// 39181 push    ax ;~ 1359:27E6
cs=0x1359;eip=0x0027e7; 	T(MOV(ax, 2));	// 39182 mov     ax, 2 ;~ 1359:27E7
cs=0x1359;eip=0x0027ea; 	X(PUSH(ax));	// 39183 push    ax ;~ 1359:27EA
cs=0x1359;eip=0x0027eb; 	X(PUSH(cs));	// 39184 push    cs ;~ 1359:27EB
cs=0x1359;eip=0x0027ec; 	R(CALL(loop_game,0));	// 39185 call    near ptr loop_game ;~ 1359:27EC
cs=0x1359;eip=0x0027ef; 	T(ADD(sp, 6));	// 39186 add     sp, 6 ;~ 1359:27EF
cs=0x1359;eip=0x0027f2; 	X(PUSH(word_445d4));	// 39187 push    word_445D4 ;~ 1359:27F2
cs=0x1359;eip=0x0027f6; 	X(PUSH(word_445d4));	// 39188 push    word_445D4 ;~ 1359:27F6
cs=0x1359;eip=0x0027fa; 	T(MOV(ax, 1));	// 39189 mov     ax, 1 ;~ 1359:27FA
cs=0x1359;eip=0x0027fd; 	X(PUSH(ax));	// 39190 push    ax ;~ 1359:27FD
cs=0x1359;eip=0x0027fe; 	X(PUSH(cs));	// 39191 push    cs ;~ 1359:27FE
cs=0x1359;eip=0x0027ff; 	R(CALL(loop_game,0));	// 39192 call    near ptr loop_game ;~ 1359:27FF
cs=0x1359;eip=0x002802; 	T(ADD(sp, 6));	// 39193 add     sp, 6 ;~ 1359:2802
cs=0x1359;eip=0x002805; 	T(SUB(si, si));	// 39194 sub     si, si ;~ 1359:2805
loc_24377:
	// 7096 
cs=0x1359;eip=0x002807; 	T(MOV(bx, si));	// 39197 mov     bx, si ;~ 1359:2807
cs=0x1359;eip=0x002809; 	T(SHL(bx, 1));	// 39198 shl     bx, 1 ;~ 1359:2809
cs=0x1359;eip=0x00280b; 	T(ADD(bx, bp));	// 39199 add     bx, bp ;~ 1359:280B
cs=0x1359;eip=0x00280d; 	X(MOV(*(dw*)(raddr(ds,bx-0x14)), 0));	// 39200 mov     word ptr [bx-14h], 0 ;~ 1359:280D
cs=0x1359;eip=0x002812; 	T(INC(si));	// 39201 inc     si ;~ 1359:2812
cs=0x1359;eip=0x002813; 	T(CMP(si, 8));	// 39202 cmp     si, 8 ;~ 1359:2813
cs=0x1359;eip=0x002816; 	R(JL(loc_24377));	// 39203 jl      short loc_24377 ;~ 1359:2816
cs=0x1359;eip=0x002818; 	T(CMP(byte_446af, 0));	// 39204 cmp     byte_446AF, 0 ;~ 1359:2818
cs=0x1359;eip=0x00281d; 	R(JZ(loc_24394));	// 39205 jz      short loc_24394 ;~ 1359:281D
cs=0x1359;eip=0x00281f; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 1));	// 39206 mov     [bp+var_E], 1 ;~ 1359:281F
loc_24394:
	// 7097 
cs=0x1359;eip=0x002824; 	T(CMP(word_449bc, 0));	// 39209 cmp     word_449BC, 0 ;~ 1359:2824
cs=0x1359;eip=0x002829; 	R(JZ(loc_243a2));	// 39210 jz      short loc_243A2 ;~ 1359:2829
cs=0x1359;eip=0x00282b; 	T(CMP(elapsed_time1, 0));	// 39211 cmp     elapsed_time1, 0 ;~ 1359:282B
cs=0x1359;eip=0x002830; 	R(JZ(loc_243a7));	// 39212 jz      short loc_243A7 ;~ 1359:2830
loc_243a2:
	// 7098 
cs=0x1359;eip=0x002832; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 1));	// 39215 mov     [bp+var_A], 1 ;~ 1359:2832
loc_243a7:
	// 7099 
cs=0x1359;eip=0x002837; 	T(CMP(passed_security, 0));	// 39218 cmp     passed_security, 0 ;~ 1359:2837
cs=0x1359;eip=0x00283c; 	R(JNZ(loc_243b8));	// 39219 jnz     short loc_243B8 ;~ 1359:283C
cs=0x1359;eip=0x00283e; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 1));	// 39220 mov     [bp+var_10], 1 ;~ 1359:283E
cs=0x1359;eip=0x002843; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 1));	// 39221 mov     [bp+var_E], 1 ;~ 1359:2843
loc_243b8:
	// 7100 
cs=0x1359;eip=0x002848; 	T(TEST(byte_43966, 4));	// 39224 test    byte_43966, 4 ;~ 1359:2848
cs=0x1359;eip=0x00284d; 	R(JNZ(loc_243c4));	// 39225 jnz     short loc_243C4 ;~ 1359:284D
cs=0x1359;eip=0x00284f; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 1));	// 39226 mov     [bp+var_12], 1 ;~ 1359:284F
loc_243c4:
	// 7101 
cs=0x1359;eip=0x002854; 	T(MOV(al, video_flag6_is1));	// 39229 mov     al, video_flag6_is1 ; pause menu ;~ 1359:2854
cs=0x1359;eip=0x002857; 	X(MOV(byte_454a4, al));	// 39230 mov     byte_454A4, al ;~ 1359:2857
cs=0x1359;eip=0x00285a; 	T(SUB(ax, ax));	// 39231 sub     ax, ax ;~ 1359:285A
cs=0x1359;eip=0x00285c; 	X(PUSH(ax));	// 39232 push    ax ;~ 1359:285C
cs=0x1359;eip=0x00285d; 	T(ax = bp+var_14);	// 39233 lea     ax, [bp+var_14] ;~ 1359:285D
cs=0x1359;eip=0x002860; 	X(PUSH(ax));	// 39234 push    ax ;~ 1359:2860
cs=0x1359;eip=0x002861; 	X(PUSH(dialogarg2));	// 39235 push    dialogarg2 ;~ 1359:2861
cs=0x1359;eip=0x002865; 	T(MOV(ax, 0x0FFFF));	// 39236 mov     ax, 0FFFFh ;~ 1359:2865
cs=0x1359;eip=0x002868; 	X(PUSH(ax));	// 39237 push    ax ;~ 1359:2868
cs=0x1359;eip=0x002869; 	X(PUSH(ax));	// 39238 push    ax ;~ 1359:2869
cs=0x1359;eip=0x00286a; 	T(MOV(ax, offset(dseg,amen_0)));	// 39239 mov     ax, offset aMen_0 ; "men" ;~ 1359:286A
cs=0x1359;eip=0x00286d; 	X(PUSH(ax));	// 39240 push    ax ;~ 1359:286D
cs=0x1359;eip=0x00286e; 	X(PUSH(word_449a2));	// 39241 push    word_449A2 ;~ 1359:286E
cs=0x1359;eip=0x002872; 	X(PUSH(gameresptr));	// 39242 push    gameresptr ;~ 1359:2872
cs=0x1359;eip=0x002876; 	R(CALLF(locate_text_res,0));	// 39243 call    locate_text_res ;~ 1359:2876
cs=0x1359;eip=0x00287b; 	T(ADD(sp, 6));	// 39244 add     sp, 6 ;~ 1359:287B
cs=0x1359;eip=0x00287e; 	X(PUSH(dx));	// 39245 push    dx ;~ 1359:287E
cs=0x1359;eip=0x00287f; 	X(PUSH(ax));	// 39246 push    ax ;~ 1359:287F
cs=0x1359;eip=0x002880; 	T(SUB(ax, ax));	// 39247 sub     ax, ax ;~ 1359:2880
cs=0x1359;eip=0x002882; 	X(PUSH(ax));	// 39248 push    ax ;~ 1359:2882
cs=0x1359;eip=0x002883; 	T(MOV(ax, 2));	// 39249 mov     ax, 2 ;~ 1359:2883
cs=0x1359;eip=0x002886; 	X(PUSH(ax));	// 39250 push    ax ;~ 1359:2886
cs=0x1359;eip=0x002887; 	R(CALLF(show_dialog,0));	// 39251 call    show_dialog ;~ 1359:2887
cs=0x1359;eip=0x00288c; 	T(ADD(sp, 0x12));	// 39252 add     sp, 12h ;~ 1359:288C
cs=0x1359;eip=0x00288f; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 39253 mov     [bp+var_2], al ;~ 1359:288F
cs=0x1359;eip=0x002892; 	T(CBW);	// 39254 cbw ;~ 1359:2892
cs=0x1359;eip=0x002893; 	T(SUB(ax, 1));	// 39255 sub     ax, 1           ; switch 7 cases ;~ 1359:2893
cs=0x1359;eip=0x002896; 	T(CMP(ax, 6));	// 39256 cmp     ax, 6 ;~ 1359:2896
cs=0x1359;eip=0x002899; 	R(JBE(loc_2440e));	// 39257 jbe     short loc_2440E ;~ 1359:2899
cs=0x1359;eip=0x00289b; 	R(JMP(def_24411));	// 39258 jmp     def_24411       ; jumptable 00024411 default case ;~ 1359:289B
loc_2440e:
	// 7102 
cs=0x1359;eip=0x00289e; 	T(ADD(ax, ax));	// 39262 add     ax, ax ;~ 1359:289E
cs=0x1359;eip=0x0028a0; 	T(XCHG(ax, bx));	// 39263 xchg    ax, bx ;~ 1359:28A0
	cs=seg_offset(seg005);
cs=0x1359;eip=0x0028a1; __disp=*(dw*)(((db*)&jpt_24411)+bx);
	R(JMP(__dispatch_call));	// 39264 jmp     cs:jpt_24411[bx] ; switch jump ;~ 1359:28A1
loc_24416:
	// 7103 
cs=0x1359;eip=0x0028a6; 	R(CALLF(check_input,0));	// 39269 call    check_input     ; jumptable 00024411 case 2 ;~ 1359:28A6
cs=0x1359;eip=0x0028ab; 	T(MOV(ax, framespersec2));	// 39270 mov     ax, framespersec2 ;~ 1359:28AB
cs=0x1359;eip=0x0028ae; 	X(MOV(framespersec, ax));	// 39271 mov     framespersec, ax ;~ 1359:28AE
cs=0x1359;eip=0x0028b1; 	T(MOV(al, *(db*)(((db*)&framespersec2))));	// 39272 mov     al, byte ptr framespersec2 ;~ 1359:28B1
cs=0x1359;eip=0x0028b4; 	X(MOV(byte_449ba, al));	// 39273 mov     byte_449BA, al ;~ 1359:28B4
cs=0x1359;eip=0x0028b7; 	T(MOV(ax, 0x0FFFF));	// 39274 mov     ax, 0FFFFh ;~ 1359:28B7
cs=0x1359;eip=0x0028ba; 	X(PUSH(ax));	// 39275 push    ax ;~ 1359:28BA
cs=0x1359;eip=0x0028bb; 	R(CALLF(init_game_state,0));	// 39276 call    init_game_state ;~ 1359:28BB
cs=0x1359;eip=0x0028c0; 	T(ADD(sp, 2));	// 39277 add     sp, 2 ;~ 1359:28C0
cs=0x1359;eip=0x0028c3; 	X(MOV(elapsed_time2, 0));	// 39278 mov     elapsed_time2, 0 ;~ 1359:28C3
cs=0x1359;eip=0x0028c9; 	X(MOV(word_449bc, 0));	// 39279 mov     word_449BC, 0 ;~ 1359:28C9
cs=0x1359;eip=0x0028cf; 	X(MOV(*(db*)(((db*)&word_45d3e)), 0));	// 39280 mov     byte ptr word_45D3E, 0 ;~ 1359:28CF
cs=0x1359;eip=0x0028d4; 	X(MOV(byte_43966, 1));	// 39281 mov     byte_43966, 1 ;~ 1359:28D4
cs=0x1359;eip=0x0028d9; 	R(JMP(loc_244b0));	// 39282 jmp     short loc_244B0 ;~ 1359:28D9
loc_2444c:
	// 7104 
cs=0x1359;eip=0x0028dc; 	T(TEST(byte_43966, 2));	// 39288 test    byte_43966, 2   ; jumptable 00024411 case 3 ;~ 1359:28DC
cs=0x1359;eip=0x0028e1; 	R(JZ(loc_2445a));	// 39289 jz      short loc_2445A ;~ 1359:28E1
loc_24453:
	// 7105 
cs=0x1359;eip=0x0028e3; 	X(MOV(byte_43966, 3));	// 39292 mov     byte_43966, 3 ;~ 1359:28E3
cs=0x1359;eip=0x0028e8; 	R(JMP(loc_244a7));	// 39293 jmp     short loc_244A7 ;~ 1359:28E8
loc_2445a:
	// 7106 
cs=0x1359;eip=0x0028ea; 	T(MOV(ax, elapsed_time2));	// 39297 mov     ax, elapsed_time2 ;~ 1359:28EA
cs=0x1359;eip=0x0028ed; 	T(CMP(word_449bc, ax));	// 39298 cmp     word_449BC, ax ;~ 1359:28ED
cs=0x1359;eip=0x0028f1; 	R(JZ(loc_244a2));	// 39299 jz      short loc_244A2 ;~ 1359:28F1
cs=0x1359;eip=0x0028f3; 	T(SUB(ax, ax));	// 39300 sub     ax, ax ;~ 1359:28F3
cs=0x1359;eip=0x0028f5; 	X(PUSH(ax));	// 39301 push    ax ;~ 1359:28F5
cs=0x1359;eip=0x0028f6; 	X(PUSH(ax));	// 39302 push    ax ;~ 1359:28F6
cs=0x1359;eip=0x0028f7; 	X(PUSH(performgraphcolor));	// 39303 push    performGraphColor ;~ 1359:28F7
cs=0x1359;eip=0x0028fb; 	T(MOV(ax, 0x0FFFF));	// 39304 mov     ax, 0FFFFh ;~ 1359:28FB
cs=0x1359;eip=0x0028fe; 	X(PUSH(ax));	// 39305 push    ax ;~ 1359:28FE
cs=0x1359;eip=0x0028ff; 	X(PUSH(ax));	// 39306 push    ax ;~ 1359:28FF
cs=0x1359;eip=0x002900; 	T(MOV(ax, offset(dseg,acon_0)));	// 39307 mov     ax, offset aCon_0 ; RH warning ;~ 1359:2900
cs=0x1359;eip=0x002903; 	X(PUSH(ax));	// 39308 push    ax ;~ 1359:2903
cs=0x1359;eip=0x002904; 	X(PUSH(word_449a2));	// 39309 push    word_449A2 ;~ 1359:2904
cs=0x1359;eip=0x002908; 	X(PUSH(gameresptr));	// 39310 push    gameresptr ;~ 1359:2908
cs=0x1359;eip=0x00290c; 	R(CALLF(locate_text_res,0));	// 39311 call    locate_text_res ;~ 1359:290C
cs=0x1359;eip=0x002911; 	T(ADD(sp, 6));	// 39312 add     sp, 6 ;~ 1359:2911
cs=0x1359;eip=0x002914; 	X(PUSH(dx));	// 39313 push    dx ;~ 1359:2914
cs=0x1359;eip=0x002915; 	X(PUSH(ax));	// 39314 push    ax ;~ 1359:2915
cs=0x1359;eip=0x002916; 	T(SUB(ax, ax));	// 39315 sub     ax, ax ;~ 1359:2916
cs=0x1359;eip=0x002918; 	X(PUSH(ax));	// 39316 push    ax ;~ 1359:2918
cs=0x1359;eip=0x002919; 	T(MOV(ax, 2));	// 39317 mov     ax, 2 ;~ 1359:2919
cs=0x1359;eip=0x00291c; 	X(PUSH(ax));	// 39318 push    ax ;~ 1359:291C
cs=0x1359;eip=0x00291d; 	R(CALLF(show_dialog,0));	// 39319 call    show_dialog ;~ 1359:291D
cs=0x1359;eip=0x002922; 	T(ADD(sp, 0x12));	// 39320 add     sp, 12h ;~ 1359:2922
cs=0x1359;eip=0x002925; 	T(MOV(si, ax));	// 39321 mov     si, ax ;~ 1359:2925
cs=0x1359;eip=0x002927; 	T(CMP(si, 1));	// 39322 cmp     si, 1 ;~ 1359:2927
cs=0x1359;eip=0x00292a; 	R(JGE(loc_2449f));	// 39323 jge     short loc_2449F ;~ 1359:292A
cs=0x1359;eip=0x00292c; 	R(JMP(def_24411));	// 39324 jmp     def_24411       ; jumptable 00024411 default case ;~ 1359:292C
loc_2449f:
	// 7107 
cs=0x1359;eip=0x00292f; 	R(JMP(loc_24453));	// 39328 jmp     short loc_24453 ;~ 1359:292F
loc_244a2:
	// 7108 
cs=0x1359;eip=0x002932; 	X(MOV(byte_43966, 1));	// 39333 mov     byte_43966, 1 ;~ 1359:2932
loc_244a7:
	// 7109 
cs=0x1359;eip=0x002937; 	T(MOV(ax, word_445d4));	// 39336 mov     ax, word_445D4 ;~ 1359:2937
cs=0x1359;eip=0x00293a; 	X(MOV(elapsed_time2, ax));	// 39337 mov     elapsed_time2, ax ;~ 1359:293A
cs=0x1359;eip=0x00293d; 	X(MOV(word_449bc, ax));	// 39338 mov     word_449BC, ax ;~ 1359:293D
loc_244b0:
	// 7110 
cs=0x1359;eip=0x002940; 	X(MOV(dashb_toggle, 1));	// 39341 mov     dashb_toggle, 1 ;~ 1359:2940
cs=0x1359;eip=0x002945; 	X(MOV(show_penalty_counter, 0));	// 39342 mov     show_penalty_counter, 0 ;~ 1359:2945
cs=0x1359;eip=0x00294a; 	X(MOV(followopponentflag, 0));	// 39343 mov     followOpponentFlag, 0 ;~ 1359:294A
cs=0x1359;eip=0x00294f; 	X(MOV(game_replay_mode, 0));	// 39344 mov     game_replay_mode, 0 ;~ 1359:294F
cs=0x1359;eip=0x002954; 	X(MOV(cameramode, 0));	// 39345 mov     cameramode, 0 ;~ 1359:2954
cs=0x1359;eip=0x002959; 	X(MOV(byte_4488a, 0));	// 39346 mov     byte_4488A, 0 ;~ 1359:2959
cs=0x1359;eip=0x00295e; 	X(MOV(word_445cc, 0));	// 39347 mov     word_445CC, 0 ;~ 1359:295E
cs=0x1359;eip=0x002964; 	X(MOV(byte_449e6, 0));	// 39348 mov     byte_449E6, 0 ;~ 1359:2964
cs=0x1359;eip=0x002969; 	T(SUB(ax, ax));	// 39349 sub     ax, ax ;~ 1359:2969
cs=0x1359;eip=0x00296b; 	X(PUSH(ax));	// 39350 push    ax ;~ 1359:296B
cs=0x1359;eip=0x00296c; 	T(MOV(ax, 3));	// 39351 mov     ax, 3 ;~ 1359:296C
cs=0x1359;eip=0x00296f; 	X(PUSH(ax));	// 39352 push    ax ;~ 1359:296F
cs=0x1359;eip=0x002970; 	T(MOV(ax, 2));	// 39353 mov     ax, 2 ;~ 1359:2970
cs=0x1359;eip=0x002973; 	X(PUSH(ax));	// 39354 push    ax ;~ 1359:2973
cs=0x1359;eip=0x002974; 	X(PUSH(cs));	// 39355 push    cs ;~ 1359:2974
cs=0x1359;eip=0x002975; 	R(CALL(loop_game,0));	// 39356 call    near ptr loop_game ;~ 1359:2975
cs=0x1359;eip=0x002978; 	T(ADD(sp, 6));	// 39357 add     sp, 6 ;~ 1359:2978
cs=0x1359;eip=0x00297b; 	X(MOV(is_in_replay, 0));	// 39358 mov     is_in_replay, 0 ;~ 1359:297B
cs=0x1359;eip=0x002980; 	T(MOV(al, byte_3b8f2));	// 39359 mov     al, byte_3B8F2 ;~ 1359:2980
cs=0x1359;eip=0x002983; 	T(CBW);	// 39360 cbw ;~ 1359:2983
cs=0x1359;eip=0x002984; 	X(PUSH(ax));	// 39361 push    ax ;~ 1359:2984
cs=0x1359;eip=0x002985; 	X(PUSH(cs));	// 39362 push    cs ;~ 1359:2985
cs=0x1359;eip=0x002986; 	R(CALL(mouse_minmax_position,0));	// 39363 call    near ptr mouse_minmax_position ;~ 1359:2986
cs=0x1359;eip=0x002989; 	T(ADD(sp, 2));	// 39364 add     sp, 2 ;~ 1359:2989
cs=0x1359;eip=0x00298c; 	R(CALLF(check_input,0));	// 39365 call    check_input ;~ 1359:298C
cs=0x1359;eip=0x002991; 	X(MOV(kbormouse, 0));	// 39366 mov     kbormouse, 0 ;~ 1359:2991
cs=0x1359;eip=0x002996; 	R(JMP(def_24411));	// 39367 jmp     def_24411       ; jumptable 00024411 default case ;~ 1359:2996
loc_2450a:
	// 7111 
cs=0x1359;eip=0x00299a; 	X(MOV(byte_43966, 0));	// 39373 mov     byte_43966, 0   ; jumptable 00024411 case 4 ;~ 1359:299A
cs=0x1359;eip=0x00299f; 	R(CALLF(audio_carstate,0));	// 39374 call    audio_carstate ;~ 1359:299F
cs=0x1359;eip=0x0029a4; 	T(MOV(ax, offset(dseg,arep)));	// 39375 mov     ax, offset aRep ; "rep" ;~ 1359:29A4
cs=0x1359;eip=0x0029a7; 	X(PUSH(ax));	// 39376 push    ax ;~ 1359:29A7
cs=0x1359;eip=0x0029a8; 	X(PUSH(word_44cee));	// 39377 push    word_44CEE ;~ 1359:29A8
cs=0x1359;eip=0x0029ac; 	X(PUSH(mainresptr));	// 39378 push    mainresptr ;~ 1359:29AC
cs=0x1359;eip=0x0029b0; 	R(CALLF(locate_text_res,0));	// 39379 call    locate_text_res ;~ 1359:29B0
cs=0x1359;eip=0x0029b5; 	T(ADD(sp, 6));	// 39380 add     sp, 6 ;~ 1359:29B5
cs=0x1359;eip=0x0029b8; 	X(PUSH(dx));	// 39381 push    dx              ; int ;~ 1359:29B8
cs=0x1359;eip=0x0029b9; 	X(PUSH(ax));	// 39382 push    ax              ; int ;~ 1359:29B9
cs=0x1359;eip=0x0029ba; 	T(MOV(ax, offset(dseg,a_rpl_1)));	// 39383 mov     ax, offset a_rpl_1 ; ".rpl" ;~ 1359:29BA
cs=0x1359;eip=0x0029bd; 	X(PUSH(ax));	// 39384 push    ax              ; int ;~ 1359:29BD
cs=0x1359;eip=0x0029be; 	T(MOV(ax, 0x140));	// 39385 mov     ax, 140h ;~ 1359:29BE
cs=0x1359;eip=0x0029c1; 	X(PUSH(ax));	// 39386 push    ax ;~ 1359:29C1
cs=0x1359;eip=0x0029c2; 	T(MOV(ax, offset(dseg,byte_3b85e)));	// 39387 mov     ax, offset byte_3B85E ;~ 1359:29C2
cs=0x1359;eip=0x0029c5; 	X(PUSH(ax));	// 39388 push    ax              ; char * ;~ 1359:29C5
cs=0x1359;eip=0x0029c6; 	R(CALLF(do_fileselect_dialog,0));	// 39389 call    do_fileselect_dialog ;~ 1359:29C6
cs=0x1359;eip=0x0029cb; 	T(ADD(sp, 0x0A));	// 39390 add     sp, 0Ah ;~ 1359:29CB
cs=0x1359;eip=0x0029ce; 	T(CBW);	// 39391 cbw ;~ 1359:29CE
cs=0x1359;eip=0x0029cf; 	T(MOV(si, ax));	// 39392 mov     si, ax ;~ 1359:29CF
cs=0x1359;eip=0x0029d1; 	T(OR(si, si));	// 39393 or      si, si ;~ 1359:29D1
cs=0x1359;eip=0x0029d3; 	R(JNZ(loc_24548));	// 39394 jnz     short loc_24548 ;~ 1359:29D3
cs=0x1359;eip=0x0029d5; 	R(JMP(def_24411));	// 39395 jmp     def_24411       ; jumptable 00024411 default case ;~ 1359:29D5
loc_24548:
	// 7112 
cs=0x1359;eip=0x0029d8; 	X(MOV(waitflag, 0x96));	// 39399 mov     waitflag, 96h ; '–' ;~ 1359:29D8
cs=0x1359;eip=0x0029de; 	R(CALLF(show_waiting,0));	// 39400 call    show_waiting ;~ 1359:29DE
cs=0x1359;eip=0x0029e3; 	X(PUSH(si));	// 39401 push    si ;~ 1359:29E3
cs=0x1359;eip=0x0029e4; 	X(PUSH(di));	// 39402 push    di ;~ 1359:29E4
cs=0x1359;eip=0x0029e5; 	T(di = bp+var_3e);	// 39403 lea     di, [bp+var_3E] ;~ 1359:29E5
cs=0x1359;eip=0x0029e8; 	T(MOV(si, 0x9234));	// 39404 mov     si, 9234h ;~ 1359:29E8
cs=0x1359;eip=0x0029eb; 	X(PUSH(ss));	// 39405 push    ss ;~ 1359:29EB
cs=0x1359;eip=0x0029ec; 	X(POP(es));	// 39406 pop     es ;~ 1359:29EC
cs=0x1359;eip=0x0029ed; 	T(MOV(cx, 0x0D));	// 39407 mov     cx, 0Dh ;~ 1359:29ED
	// 39408 repne movsw ;~ 1359:29F0
cs=0x1359;eip=0x0029f0; 	X(	REPNE MOVSW);	// 39408 repne movsw ;~ 1359:29F0
cs=0x1359;eip=0x0029f2; 	X(POP(di));	// 39409 pop     di ;~ 1359:29F2
cs=0x1359;eip=0x0029f3; 	X(POP(si));	// 39410 pop     si ;~ 1359:29F3
cs=0x1359;eip=0x0029f4; 	T(LES(bx, td14_elem_map_main));	// 39411 les     bx, td14_elem_map_main ;~ 1359:29F4
cs=0x1359;eip=0x0029f8; 	T(MOV(al, *(raddr(es,bx+0x384))));	// 39412 mov     al, es:[bx+384h] ;~ 1359:29F8
cs=0x1359;eip=0x0029fd; 	T(SUB(ah, ah));	// 39413 sub     ah, ah ;~ 1359:29FD
cs=0x1359;eip=0x0029ff; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 39414 mov     [bp+var_4], ax ;~ 1359:29FF
cs=0x1359;eip=0x002a02; 	T(MOV(ax, 0x140));	// 39415 mov     ax, 140h ;~ 1359:2A02
cs=0x1359;eip=0x002a05; 	X(PUSH(ax));	// 39416 push    ax ;~ 1359:2A05
cs=0x1359;eip=0x002a06; 	T(MOV(ax, 0x0EE));	// 39417 mov     ax, 0EEh ; 'î' ;~ 1359:2A06
cs=0x1359;eip=0x002a09; 	X(PUSH(ax));	// 39418 push    ax              ; char * ;~ 1359:2A09
cs=0x1359;eip=0x002a0a; 	X(PUSH(cs));	// 39419 push    cs ;~ 1359:2A0A
cs=0x1359;eip=0x002a0b; 	R(CALL(file_load_replay,0));	// 39420 call    near ptr file_load_replay ;~ 1359:2A0B
cs=0x1359;eip=0x002a0e; 	T(ADD(sp, 4));	// 39421 add     sp, 4 ;~ 1359:2A0E
cs=0x1359;eip=0x002a11; 	T(OR(al, al));	// 39422 or      al, al ;~ 1359:2A11
cs=0x1359;eip=0x002a13; 	R(JZ(loc_2458b));	// 39423 jz      short loc_2458B ;~ 1359:2A13
cs=0x1359;eip=0x002a15; 	X(MOV(word_449bc, 0));	// 39424 mov     word_449BC, 0 ;~ 1359:2A15
loc_2458b:
	// 7113 
cs=0x1359;eip=0x002a1b; 	X(MOV(dashb_toggle, 0));	// 39427 mov     dashb_toggle, 0 ;~ 1359:2A1B
cs=0x1359;eip=0x002a20; 	R(CALLF(track_setup,0));	// 39428 call    track_setup ;~ 1359:2A20
cs=0x1359;eip=0x002a25; 	T(SUB(si, si));	// 39429 sub     si, si ;~ 1359:2A25
cs=0x1359;eip=0x002a27; 	T(LES(bx, td14_elem_map_main));	// 39430 les     bx, td14_elem_map_main ;~ 1359:2A27
cs=0x1359;eip=0x002a2b; 	T(MOV(al, *(raddr(es,bx+0x384))));	// 39431 mov     al, es:[bx+384h] ;~ 1359:2A2B
cs=0x1359;eip=0x002a30; 	T(SUB(ah, ah));	// 39432 sub     ah, ah ;~ 1359:2A30
cs=0x1359;eip=0x002a32; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4))));	// 39433 cmp     ax, [bp+var_4] ;~ 1359:2A32
cs=0x1359;eip=0x002a35; 	R(JZ(loc_245aa));	// 39434 jz      short loc_245AA ;~ 1359:2A35
cs=0x1359;eip=0x002a37; 	T(MOV(si, 1));	// 39435 mov     si, 1 ;~ 1359:2A37
loc_245aa:
	// 7114 
cs=0x1359;eip=0x002a3a; 	T(MOV(al, gameconfig));	// 39438 mov     al, gameconfig ;~ 1359:2A3A
cs=0x1359;eip=0x002a3d; 	T(CMP(*(raddr(ss,bp+var_3e)), al));	// 39439 cmp     [bp+var_3E], al ;~ 1359:2A3D
cs=0x1359;eip=0x002a40; 	R(JNZ(loc_245ca));	// 39440 jnz     short loc_245CA ;~ 1359:2A40
cs=0x1359;eip=0x002a42; 	T(MOV(al, byte_449a5));	// 39441 mov     al, byte_449A5 ;~ 1359:2A42
cs=0x1359;eip=0x002a45; 	T(CMP(*(raddr(ss,bp+var_3d)), al));	// 39442 cmp     [bp+var_3D], al ;~ 1359:2A45
cs=0x1359;eip=0x002a48; 	R(JNZ(loc_245ca));	// 39443 jnz     short loc_245CA ;~ 1359:2A48
cs=0x1359;eip=0x002a4a; 	T(MOV(al, byte_449a6));	// 39444 mov     al, byte_449A6 ;~ 1359:2A4A
cs=0x1359;eip=0x002a4d; 	T(CMP(*(raddr(ss,bp+var_3c)), al));	// 39445 cmp     [bp+var_3C], al ;~ 1359:2A4D
cs=0x1359;eip=0x002a50; 	R(JNZ(loc_245ca));	// 39446 jnz     short loc_245CA ;~ 1359:2A50
cs=0x1359;eip=0x002a52; 	T(MOV(al, byte_449a7));	// 39447 mov     al, byte_449A7 ;~ 1359:2A52
cs=0x1359;eip=0x002a55; 	T(CMP(*(raddr(ss,bp+var_3b)), al));	// 39448 cmp     [bp+var_3B], al ;~ 1359:2A55
cs=0x1359;eip=0x002a58; 	R(JZ(loc_245d0));	// 39449 jz      short loc_245D0 ;~ 1359:2A58
loc_245ca:
	// 7115 
cs=0x1359;eip=0x002a5a; 	T(MOV(si, 1));	// 39453 mov     si, 1 ;~ 1359:2A5A
cs=0x1359;eip=0x002a5d; 	R(JMP(loc_2460d));	// 39454 jmp     short loc_2460D ;~ 1359:2A5D
loc_245d0:
	// 7116 
cs=0x1359;eip=0x002a60; 	T(MOV(al, byte_449aa));	// 39459 mov     al, byte_449AA ;~ 1359:2A60
cs=0x1359;eip=0x002a63; 	T(CMP(*(raddr(ss,bp+var_38)), al));	// 39460 cmp     [bp+var_38], al ;~ 1359:2A63
cs=0x1359;eip=0x002a66; 	R(JNZ(loc_245ca));	// 39461 jnz     short loc_245CA ;~ 1359:2A66
cs=0x1359;eip=0x002a68; 	T(OR(al, al));	// 39462 or      al, al ;~ 1359:2A68
cs=0x1359;eip=0x002a6a; 	R(JZ(loc_2460d));	// 39463 jz      short loc_2460D ;~ 1359:2A6A
cs=0x1359;eip=0x002a6c; 	T(MOV(al, byte_449ab));	// 39464 mov     al, byte_449AB ;~ 1359:2A6C
cs=0x1359;eip=0x002a6f; 	T(CMP(*(raddr(ss,bp+var_37)), al));	// 39465 cmp     [bp+var_37], al ;~ 1359:2A6F
cs=0x1359;eip=0x002a72; 	R(JNZ(loc_245ca));	// 39466 jnz     short loc_245CA ;~ 1359:2A72
cs=0x1359;eip=0x002a74; 	T(MOV(al, byte_449ac));	// 39467 mov     al, byte_449AC ;~ 1359:2A74
cs=0x1359;eip=0x002a77; 	T(CMP(*(raddr(ss,bp+var_36)), al));	// 39468 cmp     [bp+var_36], al ;~ 1359:2A77
cs=0x1359;eip=0x002a7a; 	R(JNZ(loc_245ca));	// 39469 jnz     short loc_245CA ;~ 1359:2A7A
cs=0x1359;eip=0x002a7c; 	T(MOV(al, byte_449ad));	// 39470 mov     al, byte_449AD ;~ 1359:2A7C
cs=0x1359;eip=0x002a7f; 	T(CMP(*(raddr(ss,bp+var_35)), al));	// 39471 cmp     [bp+var_35], al ;~ 1359:2A7F
cs=0x1359;eip=0x002a82; 	R(JNZ(loc_245ca));	// 39472 jnz     short loc_245CA ;~ 1359:2A82
cs=0x1359;eip=0x002a84; 	T(MOV(al, byte_449ae));	// 39473 mov     al, byte_449AE ;~ 1359:2A84
cs=0x1359;eip=0x002a87; 	T(CMP(*(raddr(ss,bp+var_34)), al));	// 39474 cmp     [bp+var_34], al ;~ 1359:2A87
cs=0x1359;eip=0x002a8a; 	R(JNZ(loc_245ca));	// 39475 jnz     short loc_245CA ;~ 1359:2A8A
cs=0x1359;eip=0x002a8c; 	T(MOV(ax, 2));	// 39476 mov     ax, 2 ;~ 1359:2A8C
cs=0x1359;eip=0x002a8f; 	X(PUSH(ax));	// 39477 push    ax ;~ 1359:2A8F
cs=0x1359;eip=0x002a90; 	R(CALLF(ensure_file_exists,0));	// 39478 call    ensure_file_exists ;~ 1359:2A90
cs=0x1359;eip=0x002a95; 	T(ADD(sp, 2));	// 39479 add     sp, 2 ;~ 1359:2A95
cs=0x1359;eip=0x002a98; 	R(CALLF(load_opponent_data,0));	// 39480 call    load_opponent_data ;~ 1359:2A98
loc_2460d:
	// 7117 
cs=0x1359;eip=0x002a9d; 	T(OR(si, si));	// 39484 or      si, si ;~ 1359:2A9D
cs=0x1359;eip=0x002a9f; 	R(JZ(loc_24619));	// 39485 jz      short loc_24619 ;~ 1359:2A9F
cs=0x1359;eip=0x002aa1; 	X(PUSH(cs));	// 39486 push    cs ;~ 1359:2AA1
cs=0x1359;eip=0x002aa2; 	R(CALL(free_player_cars,0));	// 39487 call    near ptr free_player_cars ;~ 1359:2AA2
cs=0x1359;eip=0x002aa5; 	X(PUSH(cs));	// 39488 push    cs ;~ 1359:2AA5
cs=0x1359;eip=0x002aa6; 	R(CALL(setup_player_cars,0));	// 39489 call    near ptr setup_player_cars ;~ 1359:2AA6
loc_24619:
	// 7118 
cs=0x1359;eip=0x002aa9; 	T(MOV(al, byte_449ba));	// 39492 mov     al, byte_449BA ;~ 1359:2AA9
cs=0x1359;eip=0x002aac; 	T(CBW);	// 39493 cbw ;~ 1359:2AAC
cs=0x1359;eip=0x002aad; 	X(MOV(framespersec, ax));	// 39494 mov     framespersec, ax ;~ 1359:2AAD
cs=0x1359;eip=0x002ab0; 	T(MOV(ax, 0x0FFFF));	// 39495 mov     ax, 0FFFFh ;~ 1359:2AB0
cs=0x1359;eip=0x002ab3; 	X(PUSH(ax));	// 39496 push    ax ;~ 1359:2AB3
cs=0x1359;eip=0x002ab4; 	R(CALLF(init_game_state,0));	// 39497 call    init_game_state ;~ 1359:2AB4
cs=0x1359;eip=0x002ab9; 	T(ADD(sp, 2));	// 39498 add     sp, 2 ;~ 1359:2AB9
cs=0x1359;eip=0x002abc; 	R(JMP(def_24411));	// 39499 jmp     def_24411       ; jumptable 00024411 default case ;~ 1359:2ABC
loc_24630:
	// 7119 
cs=0x1359;eip=0x002ac0; 	R(CALLF(audio_carstate,0));	// 39505 call    audio_carstate  ; jumptable 00024411 case 5 ;~ 1359:2AC0
loc_24635:
	// 7120 
cs=0x1359;eip=0x002ac5; 	X(MOV(*(raddr(ss,bp+var_1e)), 0));	// 39508 mov     [bp+var_1E], 0 ;~ 1359:2AC5
loc_24639:
	// 7121 
cs=0x1359;eip=0x002ac9; 	T(CMP(*(raddr(ss,bp+var_1e)), 0));	// 39512 cmp     [bp+var_1E], 0 ;~ 1359:2AC9
cs=0x1359;eip=0x002acd; 	R(JZ(loc_24642));	// 39513 jz      short loc_24642 ;~ 1359:2ACD
cs=0x1359;eip=0x002acf; 	R(JMP(def_24411));	// 39514 jmp     def_24411       ; jumptable 00024411 default case ;~ 1359:2ACF
loc_24642:
	// 7122 
cs=0x1359;eip=0x002ad2; 	T(MOV(ax, offset(dseg,arep_1)));	// 39518 mov     ax, offset aRep_1 ; "rep" ;~ 1359:2AD2
cs=0x1359;eip=0x002ad5; 	X(PUSH(ax));	// 39519 push    ax ;~ 1359:2AD5
cs=0x1359;eip=0x002ad6; 	X(PUSH(word_44cee));	// 39520 push    word_44CEE ;~ 1359:2AD6
cs=0x1359;eip=0x002ada; 	X(PUSH(mainresptr));	// 39521 push    mainresptr ;~ 1359:2ADA
cs=0x1359;eip=0x002ade; 	R(CALLF(locate_text_res,0));	// 39522 call    locate_text_res ;~ 1359:2ADE
cs=0x1359;eip=0x002ae3; 	T(ADD(sp, 6));	// 39523 add     sp, 6 ;~ 1359:2AE3
cs=0x1359;eip=0x002ae6; 	X(PUSH(dx));	// 39524 push    dx              ; int ;~ 1359:2AE6
cs=0x1359;eip=0x002ae7; 	X(PUSH(ax));	// 39525 push    ax              ; int ;~ 1359:2AE7
cs=0x1359;eip=0x002ae8; 	T(MOV(ax, 0x140));	// 39526 mov     ax, 140h ;~ 1359:2AE8
cs=0x1359;eip=0x002aeb; 	X(PUSH(ax));	// 39527 push    ax ;~ 1359:2AEB
cs=0x1359;eip=0x002aec; 	T(MOV(ax, 0x0EE));	// 39528 mov     ax, 0EEh ; 'î' ;~ 1359:2AEC
cs=0x1359;eip=0x002aef; 	X(PUSH(ax));	// 39529 push    ax              ; char * ;~ 1359:2AEF
cs=0x1359;eip=0x002af0; 	R(CALLF(do_savefile_dialog,0));	// 39530 call    do_savefile_dialog ;~ 1359:2AF0
cs=0x1359;eip=0x002af5; 	T(ADD(sp, 8));	// 39531 add     sp, 8 ;~ 1359:2AF5
cs=0x1359;eip=0x002af8; 	T(OR(al, al));	// 39532 or      al, al ;~ 1359:2AF8
cs=0x1359;eip=0x002afa; 	R(JNZ(loc_2466f));	// 39533 jnz     short loc_2466F ;~ 1359:2AFA
cs=0x1359;eip=0x002afc; 	R(JMP(loc_246f0));	// 39534 jmp     loc_246F0 ;~ 1359:2AFC
loc_2466f:
	// 7123 
cs=0x1359;eip=0x002aff; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 39538 mov     ax, offset g_path_buf ;~ 1359:2AFF
cs=0x1359;eip=0x002b02; 	X(PUSH(ax));	// 39539 push    ax              ; char * ;~ 1359:2B02
cs=0x1359;eip=0x002b03; 	T(MOV(ax, offset(dseg,a_rpl_2)));	// 39540 mov     ax, offset a_rpl_2 ; ".rpl" ;~ 1359:2B03
cs=0x1359;eip=0x002b06; 	X(PUSH(ax));	// 39541 push    ax              ; int ;~ 1359:2B06
cs=0x1359;eip=0x002b07; 	T(MOV(ax, 0x140));	// 39542 mov     ax, 140h ;~ 1359:2B07
cs=0x1359;eip=0x002b0a; 	X(PUSH(ax));	// 39543 push    ax ;~ 1359:2B0A
cs=0x1359;eip=0x002b0b; 	T(MOV(ax, 0x0EE));	// 39544 mov     ax, 0EEh ; 'î' ;~ 1359:2B0B
cs=0x1359;eip=0x002b0e; 	X(PUSH(ax));	// 39545 push    ax              ; char * ;~ 1359:2B0E
cs=0x1359;eip=0x002b0f; 	R(CALLF(file_build_path,0));	// 39546 call    file_build_path ;~ 1359:2B0F
cs=0x1359;eip=0x002b14; 	T(ADD(sp, 8));	// 39547 add     sp, 8 ;~ 1359:2B14
cs=0x1359;eip=0x002b17; 	X(MOV(*(raddr(ss,bp+var_1e)), 1));	// 39548 mov     [bp+var_1E], 1 ;~ 1359:2B17
cs=0x1359;eip=0x002b1b; 	X(MOV(g_is_busy, 1));	// 39549 mov     g_is_busy, 1 ;~ 1359:2B1B
cs=0x1359;eip=0x002b20; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 39550 mov     ax, offset g_path_buf ;~ 1359:2B20
cs=0x1359;eip=0x002b23; 	X(PUSH(ax));	// 39551 push    ax ;~ 1359:2B23
cs=0x1359;eip=0x002b24; 	R(CALLF(file_find,0));	// 39552 call    file_find ;~ 1359:2B24
cs=0x1359;eip=0x002b29; 	T(ADD(sp, 2));	// 39553 add     sp, 2 ;~ 1359:2B29
cs=0x1359;eip=0x002b2c; 	T(OR(ax, ax));	// 39554 or      ax, ax ;~ 1359:2B2C
cs=0x1359;eip=0x002b2e; 	R(JZ(loc_246e8));	// 39555 jz      short loc_246E8 ;~ 1359:2B2E
cs=0x1359;eip=0x002b30; 	T(SUB(ax, ax));	// 39556 sub     ax, ax ;~ 1359:2B30
cs=0x1359;eip=0x002b32; 	X(PUSH(ax));	// 39557 push    ax ;~ 1359:2B32
cs=0x1359;eip=0x002b33; 	X(PUSH(ax));	// 39558 push    ax ;~ 1359:2B33
cs=0x1359;eip=0x002b34; 	X(PUSH(performgraphcolor));	// 39559 push    performGraphColor ;~ 1359:2B34
cs=0x1359;eip=0x002b38; 	T(MOV(ax, 0x0FFFF));	// 39560 mov     ax, 0FFFFh ;~ 1359:2B38
cs=0x1359;eip=0x002b3b; 	X(PUSH(ax));	// 39561 push    ax ;~ 1359:2B3B
cs=0x1359;eip=0x002b3c; 	X(PUSH(ax));	// 39562 push    ax ;~ 1359:2B3C
cs=0x1359;eip=0x002b3d; 	T(MOV(ax, offset(dseg,afex_0)));	// 39563 mov     ax, offset aFex_0 ; "fex" ;~ 1359:2B3D
cs=0x1359;eip=0x002b40; 	X(PUSH(ax));	// 39564 push    ax ;~ 1359:2B40
cs=0x1359;eip=0x002b41; 	X(PUSH(word_44cee));	// 39565 push    word_44CEE ;~ 1359:2B41
cs=0x1359;eip=0x002b45; 	X(PUSH(mainresptr));	// 39566 push    mainresptr ;~ 1359:2B45
cs=0x1359;eip=0x002b49; 	R(CALLF(locate_text_res,0));	// 39567 call    locate_text_res ;~ 1359:2B49
cs=0x1359;eip=0x002b4e; 	T(ADD(sp, 6));	// 39568 add     sp, 6 ;~ 1359:2B4E
cs=0x1359;eip=0x002b51; 	X(PUSH(dx));	// 39569 push    dx ;~ 1359:2B51
cs=0x1359;eip=0x002b52; 	X(PUSH(ax));	// 39570 push    ax ;~ 1359:2B52
cs=0x1359;eip=0x002b53; 	T(SUB(ax, ax));	// 39571 sub     ax, ax ;~ 1359:2B53
cs=0x1359;eip=0x002b55; 	X(PUSH(ax));	// 39572 push    ax ;~ 1359:2B55
cs=0x1359;eip=0x002b56; 	T(MOV(ax, 2));	// 39573 mov     ax, 2 ;~ 1359:2B56
cs=0x1359;eip=0x002b59; 	X(PUSH(ax));	// 39574 push    ax ;~ 1359:2B59
cs=0x1359;eip=0x002b5a; 	R(CALLF(show_dialog,0));	// 39575 call    show_dialog ;~ 1359:2B5A
cs=0x1359;eip=0x002b5f; 	T(ADD(sp, 0x12));	// 39576 add     sp, 12h ;~ 1359:2B5F
cs=0x1359;eip=0x002b62; 	T(MOV(si, ax));	// 39577 mov     si, ax ;~ 1359:2B62
cs=0x1359;eip=0x002b64; 	T(CMP(si, 0x0FFFF));	// 39578 cmp     si, 0FFFFh ;~ 1359:2B64
cs=0x1359;eip=0x002b67; 	R(JNZ(loc_246e0));	// 39579 jnz     short loc_246E0 ;~ 1359:2B67
cs=0x1359;eip=0x002b69; 	X(MOV(*(raddr(ss,bp+var_1e)), 0x0FF));	// 39580 mov     [bp+var_1E], 0FFh ;~ 1359:2B69
cs=0x1359;eip=0x002b6d; 	R(JMP(loc_246e8));	// 39581 jmp     short loc_246E8 ;~ 1359:2B6D
loc_246e0:
	// 7124 
cs=0x1359;eip=0x002b70; 	T(OR(si, si));	// 39586 or      si, si ;~ 1359:2B70
cs=0x1359;eip=0x002b72; 	R(JNZ(loc_246e8));	// 39587 jnz     short loc_246E8 ;~ 1359:2B72
cs=0x1359;eip=0x002b74; 	X(MOV(*(raddr(ss,bp+var_1e)), 0));	// 39588 mov     [bp+var_1E], 0 ;~ 1359:2B74
loc_246e8:
	// 7125 
cs=0x1359;eip=0x002b78; 	X(MOV(g_is_busy, 0));	// 39592 mov     g_is_busy, 0 ;~ 1359:2B78
cs=0x1359;eip=0x002b7d; 	R(JMP(loc_246f4));	// 39593 jmp     short loc_246F4 ;~ 1359:2B7D
loc_246f0:
	// 7126 
cs=0x1359;eip=0x002b80; 	X(MOV(*(raddr(ss,bp+var_1e)), 0x0FF));	// 39598 mov     [bp+var_1E], 0FFh ;~ 1359:2B80
loc_246f4:
	// 7127 
cs=0x1359;eip=0x002b84; 	T(CMP(*(raddr(ss,bp+var_1e)), 1));	// 39601 cmp     [bp+var_1E], 1 ;~ 1359:2B84
cs=0x1359;eip=0x002b88; 	R(JZ(loc_246fd));	// 39602 jz      short loc_246FD ;~ 1359:2B88
cs=0x1359;eip=0x002b8a; 	R(JMP(loc_24639));	// 39603 jmp     loc_24639 ;~ 1359:2B8A
loc_246fd:
	// 7128 
cs=0x1359;eip=0x002b8d; 	T(MOV(ax, offset(dseg,g_path_buf)));	// 39607 mov     ax, offset g_path_buf ;~ 1359:2B8D
cs=0x1359;eip=0x002b90; 	X(PUSH(ax));	// 39608 push    ax ;~ 1359:2B90
cs=0x1359;eip=0x002b91; 	X(PUSH(cs));	// 39609 push    cs ;~ 1359:2B91
cs=0x1359;eip=0x002b92; 	R(CALL(file_write_replay,0));	// 39610 call    near ptr file_write_replay ;~ 1359:2B92
cs=0x1359;eip=0x002b95; 	T(ADD(sp, 2));	// 39611 add     sp, 2 ;~ 1359:2B95
cs=0x1359;eip=0x002b98; 	X(MOV(*(raddr(ss,bp+var_20)), al));	// 39612 mov     [bp+var_20], al ;~ 1359:2B98
cs=0x1359;eip=0x002b9b; 	T(OR(al, al));	// 39613 or      al, al ;~ 1359:2B9B
cs=0x1359;eip=0x002b9d; 	R(JNZ(loc_24712));	// 39614 jnz     short loc_24712 ;~ 1359:2B9D
cs=0x1359;eip=0x002b9f; 	R(JMP(loc_24639));	// 39615 jmp     loc_24639 ;~ 1359:2B9F
loc_24712:
	// 7129 
cs=0x1359;eip=0x002ba2; 	T(SUB(ax, ax));	// 39619 sub     ax, ax ;~ 1359:2BA2
cs=0x1359;eip=0x002ba4; 	X(PUSH(ax));	// 39620 push    ax ;~ 1359:2BA4
cs=0x1359;eip=0x002ba5; 	X(PUSH(ax));	// 39621 push    ax ;~ 1359:2BA5
cs=0x1359;eip=0x002ba6; 	X(PUSH(performgraphcolor));	// 39622 push    performGraphColor ;~ 1359:2BA6
cs=0x1359;eip=0x002baa; 	T(MOV(ax, 0x0FFFF));	// 39623 mov     ax, 0FFFFh ;~ 1359:2BAA
cs=0x1359;eip=0x002bad; 	X(PUSH(ax));	// 39624 push    ax ;~ 1359:2BAD
cs=0x1359;eip=0x002bae; 	X(PUSH(ax));	// 39625 push    ax ;~ 1359:2BAE
cs=0x1359;eip=0x002baf; 	T(MOV(ax, offset(dseg,aser_0)));	// 39626 mov     ax, offset aSer_0 ; "ser" ;~ 1359:2BAF
cs=0x1359;eip=0x002bb2; 	X(PUSH(ax));	// 39627 push    ax ;~ 1359:2BB2
cs=0x1359;eip=0x002bb3; 	X(PUSH(word_44cee));	// 39628 push    word_44CEE ;~ 1359:2BB3
cs=0x1359;eip=0x002bb7; 	X(PUSH(mainresptr));	// 39629 push    mainresptr ;~ 1359:2BB7
cs=0x1359;eip=0x002bbb; 	R(CALLF(locate_text_res,0));	// 39630 call    locate_text_res ;~ 1359:2BBB
cs=0x1359;eip=0x002bc0; 	T(ADD(sp, 6));	// 39631 add     sp, 6 ;~ 1359:2BC0
cs=0x1359;eip=0x002bc3; 	X(PUSH(dx));	// 39632 push    dx ;~ 1359:2BC3
cs=0x1359;eip=0x002bc4; 	X(PUSH(ax));	// 39633 push    ax ;~ 1359:2BC4
cs=0x1359;eip=0x002bc5; 	T(SUB(ax, ax));	// 39634 sub     ax, ax ;~ 1359:2BC5
cs=0x1359;eip=0x002bc7; 	X(PUSH(ax));	// 39635 push    ax ;~ 1359:2BC7
cs=0x1359;eip=0x002bc8; 	T(MOV(ax, 1));	// 39636 mov     ax, 1 ;~ 1359:2BC8
cs=0x1359;eip=0x002bcb; 	X(PUSH(ax));	// 39637 push    ax ;~ 1359:2BCB
cs=0x1359;eip=0x002bcc; 	R(CALLF(show_dialog,0));	// 39638 call    show_dialog ;~ 1359:2BCC
cs=0x1359;eip=0x002bd1; 	T(ADD(sp, 0x12));	// 39639 add     sp, 12h ;~ 1359:2BD1
cs=0x1359;eip=0x002bd4; 	R(JMP(loc_24635));	// 39640 jmp     loc_24635 ;~ 1359:2BD4
loc_24748:
	// 7130 
cs=0x1359;eip=0x002bd8; 	T(SUB(ax, ax));	// 39646 sub     ax, ax          ; jumptable 00024411 case 1 ;~ 1359:2BD8
cs=0x1359;eip=0x002bda; 	X(PUSH(ax));	// 39647 push    ax ;~ 1359:2BDA
cs=0x1359;eip=0x002bdb; 	T(MOV(ax, 4));	// 39648 mov     ax, 4 ;~ 1359:2BDB
cs=0x1359;eip=0x002bde; 	X(PUSH(ax));	// 39649 push    ax ;~ 1359:2BDE
cs=0x1359;eip=0x002bdf; 	R(CALLF(update_crash_state,0));	// 39650 call    update_crash_state ;~ 1359:2BDF
cs=0x1359;eip=0x002be4; 	T(ADD(sp, 4));	// 39651 add     sp, 4 ;~ 1359:2BE4
loc_24757:
	// 7131 
cs=0x1359;eip=0x002be7; 	X(MOV(byte_449da, 2));	// 39654 mov     byte_449DA, 2 ;~ 1359:2BE7
cs=0x1359;eip=0x002bec; 	R(JMP(def_24411));	// 39655 jmp     def_24411       ; jumptable 00024411 default case ;~ 1359:2BEC
loc_24760:
	// 7132 
cs=0x1359;eip=0x002bf0; 	T(SUB(ax, ax));	// 39661 sub     ax, ax          ; jumptable 00024411 case 7 ;~ 1359:2BF0
cs=0x1359;eip=0x002bf2; 	X(PUSH(ax));	// 39662 push    ax ;~ 1359:2BF2
cs=0x1359;eip=0x002bf3; 	T(MOV(ax, 4));	// 39663 mov     ax, 4 ;~ 1359:2BF3
cs=0x1359;eip=0x002bf6; 	X(PUSH(ax));	// 39664 push    ax ;~ 1359:2BF6
cs=0x1359;eip=0x002bf7; 	R(CALLF(update_crash_state,0));	// 39665 call    update_crash_state ;~ 1359:2BF7
cs=0x1359;eip=0x002bfc; 	T(ADD(sp, 4));	// 39666 add     sp, 4 ;~ 1359:2BFC
cs=0x1359;eip=0x002bff; 	X(MOV(byte_43966, 0));	// 39667 mov     byte_43966, 0 ;~ 1359:2BFF
cs=0x1359;eip=0x002c04; 	R(JMP(loc_24757));	// 39668 jmp     short loc_24757 ;~ 1359:2C04
loc_24776:
	// 7133 
cs=0x1359;eip=0x002c06; 	T(SUB(si, si));	// 39673 sub     si, si          ; jumptable 00024411 case 6 ;~ 1359:2C06
loc_24778:
	// 7134 
cs=0x1359;eip=0x002c08; 	T(MOV(bx, si));	// 39676 mov     bx, si ;~ 1359:2C08
cs=0x1359;eip=0x002c0a; 	T(SHL(bx, 1));	// 39677 shl     bx, 1 ;~ 1359:2C0A
cs=0x1359;eip=0x002c0c; 	T(ADD(bx, bp));	// 39678 add     bx, bp ;~ 1359:2C0C
cs=0x1359;eip=0x002c0e; 	X(MOV(*(dw*)(raddr(ds,bx-0x14)), 0));	// 39679 mov     word ptr [bx-14h], 0 ;~ 1359:2C0E
cs=0x1359;eip=0x002c13; 	T(INC(si));	// 39680 inc     si ;~ 1359:2C13
cs=0x1359;eip=0x002c14; 	T(CMP(si, 5));	// 39681 cmp     si, 5 ;~ 1359:2C14
cs=0x1359;eip=0x002c17; 	R(JL(loc_24778));	// 39682 jl      short loc_24778 ;~ 1359:2C17
cs=0x1359;eip=0x002c19; 	T(CMP(byte_449aa, 0));	// 39683 cmp     byte_449AA, 0 ;~ 1359:2C19
cs=0x1359;eip=0x002c1e; 	R(JNZ(loc_24795));	// 39684 jnz     short loc_24795 ;~ 1359:2C1E
cs=0x1359;eip=0x002c20; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 1));	// 39685 mov     [bp+var_C], 1 ;~ 1359:2C20
loc_24795:
	// 7135 
cs=0x1359;eip=0x002c25; 	T(SUB(ax, ax));	// 39688 sub     ax, ax ;~ 1359:2C25
cs=0x1359;eip=0x002c27; 	X(PUSH(ax));	// 39689 push    ax ;~ 1359:2C27
cs=0x1359;eip=0x002c28; 	T(ax = bp+var_14);	// 39690 lea     ax, [bp+var_14] ;~ 1359:2C28
cs=0x1359;eip=0x002c2b; 	X(PUSH(ax));	// 39691 push    ax ;~ 1359:2C2B
cs=0x1359;eip=0x002c2c; 	X(PUSH(dialogarg2));	// 39692 push    dialogarg2 ;~ 1359:2C2C
cs=0x1359;eip=0x002c30; 	T(MOV(ax, 0x0FFFF));	// 39693 mov     ax, 0FFFFh ;~ 1359:2C30
cs=0x1359;eip=0x002c33; 	X(PUSH(ax));	// 39694 push    ax ;~ 1359:2C33
cs=0x1359;eip=0x002c34; 	X(PUSH(ax));	// 39695 push    ax ;~ 1359:2C34
cs=0x1359;eip=0x002c35; 	T(MOV(ax, offset(dseg,amdo)));	// 39696 mov     ax, offset aMdo ; "mdo" ;~ 1359:2C35
cs=0x1359;eip=0x002c38; 	X(PUSH(ax));	// 39697 push    ax ;~ 1359:2C38
cs=0x1359;eip=0x002c39; 	X(PUSH(word_449a2));	// 39698 push    word_449A2 ;~ 1359:2C39
cs=0x1359;eip=0x002c3d; 	X(PUSH(gameresptr));	// 39699 push    gameresptr ;~ 1359:2C3D
cs=0x1359;eip=0x002c41; 	R(CALLF(locate_text_res,0));	// 39700 call    locate_text_res ;~ 1359:2C41
cs=0x1359;eip=0x002c46; 	T(ADD(sp, 6));	// 39701 add     sp, 6 ;~ 1359:2C46
cs=0x1359;eip=0x002c49; 	X(PUSH(dx));	// 39702 push    dx ;~ 1359:2C49
cs=0x1359;eip=0x002c4a; 	X(PUSH(ax));	// 39703 push    ax ;~ 1359:2C4A
cs=0x1359;eip=0x002c4b; 	T(SUB(ax, ax));	// 39704 sub     ax, ax ;~ 1359:2C4B
cs=0x1359;eip=0x002c4d; 	X(PUSH(ax));	// 39705 push    ax ;~ 1359:2C4D
cs=0x1359;eip=0x002c4e; 	T(MOV(ax, 2));	// 39706 mov     ax, 2 ;~ 1359:2C4E
cs=0x1359;eip=0x002c51; 	X(PUSH(ax));	// 39707 push    ax ;~ 1359:2C51
cs=0x1359;eip=0x002c52; 	R(CALLF(show_dialog,0));	// 39708 call    show_dialog ;~ 1359:2C52
cs=0x1359;eip=0x002c57; 	T(ADD(sp, 0x12));	// 39709 add     sp, 12h ;~ 1359:2C57
cs=0x1359;eip=0x002c5a; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 39710 mov     [bp+var_2], al ;~ 1359:2C5A
cs=0x1359;eip=0x002c5d; 	T(CBW);	// 39711 cbw ;~ 1359:2C5D
cs=0x1359;eip=0x002c5e; 	T(OR(ax, ax));	// 39712 or      ax, ax ;~ 1359:2C5E
cs=0x1359;eip=0x002c60; 	R(JZ(loc_247e8));	// 39713 jz      short loc_247E8 ;~ 1359:2C60
cs=0x1359;eip=0x002c62; 	T(CMP(ax, 1));	// 39714 cmp     ax, 1 ;~ 1359:2C62
cs=0x1359;eip=0x002c65; 	R(JZ(loc_247f0));	// 39715 jz      short loc_247F0 ;~ 1359:2C65
cs=0x1359;eip=0x002c67; 	T(CMP(ax, 2));	// 39716 cmp     ax, 2 ;~ 1359:2C67
cs=0x1359;eip=0x002c6a; 	R(JZ(loc_247f8));	// 39717 jz      short loc_247F8 ;~ 1359:2C6A
cs=0x1359;eip=0x002c6c; 	T(CMP(ax, 3));	// 39718 cmp     ax, 3 ;~ 1359:2C6C
cs=0x1359;eip=0x002c6f; 	R(JZ(loc_2480a));	// 39719 jz      short loc_2480A ;~ 1359:2C6F
cs=0x1359;eip=0x002c71; 	T(CMP(ax, 4));	// 39720 cmp     ax, 4 ;~ 1359:2C71
cs=0x1359;eip=0x002c74; 	R(JZ(loc_24812));	// 39721 jz      short loc_24812 ;~ 1359:2C74
cs=0x1359;eip=0x002c76; 	R(JMP(def_24411));	// 39722 jmp     short def_24411 ; jumptable 00024411 default case ;~ 1359:2C76
loc_247e8:
	// 7136 
cs=0x1359;eip=0x002c78; 	X(XOR(dashb_toggle, 1));	// 39726 xor     dashb_toggle, 1 ;~ 1359:2C78
cs=0x1359;eip=0x002c7d; 	R(JMP(def_24411));	// 39727 jmp     short def_24411 ; jumptable 00024411 default case ;~ 1359:2C7D
loc_247f0:
	// 7137 
cs=0x1359;eip=0x002c80; 	X(XOR(replaybar_toggle, 1));	// 39732 xor     replaybar_toggle, 1 ; "replay bar on/off (while driving)" ;~ 1359:2C80
cs=0x1359;eip=0x002c85; 	R(JMP(def_24411));	// 39733 jmp     short def_24411 ; jumptable 00024411 default case ;~ 1359:2C85
loc_247f8:
	// 7138 
cs=0x1359;eip=0x002c88; 	X(INC(cameramode));	// 39738 inc     cameramode ;~ 1359:2C88
cs=0x1359;eip=0x002c8c; 	T(CMP(cameramode, 4));	// 39739 cmp     cameramode, 4 ;~ 1359:2C8C
cs=0x1359;eip=0x002c91; 	R(JNZ(def_24411));	// 39740 jnz     short def_24411 ; jumptable 00024411 default case ;~ 1359:2C91
cs=0x1359;eip=0x002c93; 	X(MOV(cameramode, 0));	// 39741 mov     cameramode, 0 ;~ 1359:2C93
cs=0x1359;eip=0x002c98; 	R(JMP(def_24411));	// 39742 jmp     short def_24411 ; jumptable 00024411 default case ;~ 1359:2C98
loc_2480a:
	// 7139 
cs=0x1359;eip=0x002c9a; 	R(CALLF(do_mrl_textres,0));	// 39746 call    do_mrl_textres ;~ 1359:2C9A
cs=0x1359;eip=0x002c9f; 	R(JMP(def_24411));	// 39747 jmp     short def_24411 ; jumptable 00024411 default case ;~ 1359:2C9F
loc_24812:
	// 7140 
cs=0x1359;eip=0x002ca2; 	X(XOR(followopponentflag, 1));	// 39752 xor     followOpponentFlag, 1 ;~ 1359:2CA2
cs=0x1359;eip=0x002ca7; 	R(JMP(def_24411));	// 39753 jmp     short def_24411 ; jumptable 00024411 default case ;~ 1359:2CA7
def_24411:
	// 7141 
cs=0x1359;eip=0x002cb8; 	R(CALLF(check_input,0));	// 39767 call    check_input     ; jumptable 00024411 default case ;~ 1359:2CB8
cs=0x1359;eip=0x002cbd; 	R(JMP(loc_24d5e));	// 39768 jmp     loc_24D5E ;~ 1359:2CBD
loc_24830:
	// 7142 
cs=0x1359;eip=0x002cc0; 	X(MOV(is_in_replay, 1));	// 39773 mov     is_in_replay, 1 ; jumptable 00024340 case 0 ;~ 1359:2CC0
cs=0x1359;eip=0x002cc5; 	R(CALLF(audio_carstate,0));	// 39774 call    audio_carstate ;~ 1359:2CC5
cs=0x1359;eip=0x002cca; 	T(SUB(ax, ax));	// 39775 sub     ax, ax ;~ 1359:2CCA
cs=0x1359;eip=0x002ccc; 	X(PUSH(ax));	// 39776 push    ax ;~ 1359:2CCC
cs=0x1359;eip=0x002ccd; 	X(PUSH(ax));	// 39777 push    ax ;~ 1359:2CCD
cs=0x1359;eip=0x002cce; 	T(MOV(ax, 2));	// 39778 mov     ax, 2 ;~ 1359:2CCE
cs=0x1359;eip=0x002cd1; 	X(PUSH(ax));	// 39779 push    ax ;~ 1359:2CD1
cs=0x1359;eip=0x002cd2; 	X(PUSH(cs));	// 39780 push    cs ;~ 1359:2CD2
cs=0x1359;eip=0x002cd3; 	R(CALL(loop_game,0));	// 39781 call    near ptr loop_game ;~ 1359:2CD3
cs=0x1359;eip=0x002cd6; 	T(ADD(sp, 6));	// 39782 add     sp, 6 ;~ 1359:2CD6
cs=0x1359;eip=0x002cd9; 	R(CALLF(timer_get_delta_alt,0));	// 39783 call    timer_get_delta_alt ;~ 1359:2CD9
cs=0x1359;eip=0x002cde; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), 0x14));	// 39784 mov     [bp+var_24], 14h ;~ 1359:2CDE
cs=0x1359;eip=0x002ce3; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 0));	// 39785 mov     [bp+var_22], 0 ;~ 1359:2CE3
cs=0x1359;eip=0x002ce8; 	R(JMP(loc_248f4));	// 39786 jmp     loc_248F4 ;~ 1359:2CE8
loc_2485c:
	// 7143 
cs=0x1359;eip=0x002cec; 	T(MOV(ax, 0x32));	// 39791 mov     ax, 32h ; '2' ;~ 1359:2CEC
cs=0x1359;eip=0x002cef; 	T(CWD);	// 39792 cwd ;~ 1359:2CEF
cs=0x1359;eip=0x002cf0; 	X(PUSH(dx));	// 39793 push    dx ;~ 1359:2CF0
cs=0x1359;eip=0x002cf1; 	X(PUSH(ax));	// 39794 push    ax ;~ 1359:2CF1
cs=0x1359;eip=0x002cf2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_22))));	// 39795 push    [bp+var_22] ;~ 1359:2CF2
cs=0x1359;eip=0x002cf5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 39796 push    [bp+var_24] ;~ 1359:2CF5
cs=0x1359;eip=0x002cf8; 	R(CALLF(__afldiv,0));	// 39797 call    __aFldiv ;~ 1359:2CF8
cs=0x1359;eip=0x002cfd; 	T(MOV(di, ax));	// 39798 mov     di, ax ;~ 1359:2CFD
cs=0x1359;eip=0x002cff; 	T(ADD(di, 3));	// 39799 add     di, 3 ;~ 1359:2CFF
cs=0x1359;eip=0x002d02; 	T(CMP(di, 0x64));	// 39800 cmp     di, 64h ; 'd' ;~ 1359:2D02
cs=0x1359;eip=0x002d05; 	R(JLE(loc_2487a));	// 39801 jle     short loc_2487A ;~ 1359:2D05
cs=0x1359;eip=0x002d07; 	T(MOV(di, 0x64));	// 39802 mov     di, 64h ; 'd' ;~ 1359:2D07
loc_2487a:
	// 7144 
cs=0x1359;eip=0x002d0a; 	R(CALLF(timer_get_delta_alt,0));	// 39805 call    timer_get_delta_alt ;~ 1359:2D0A
cs=0x1359;eip=0x002d0f; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 39806 mov     [bp+var_18], ax ;~ 1359:2D0F
cs=0x1359;eip=0x002d12; 	T(IMUL1_2(di));	// 39807 imul    di ;~ 1359:2D12
cs=0x1359;eip=0x002d14; 	T(MOV(si, ax));	// 39808 mov     si, ax ;~ 1359:2D14
cs=0x1359;eip=0x002d16; 	T(CWD);	// 39809 cwd ;~ 1359:2D16
cs=0x1359;eip=0x002d17; 	X(ADD(*(dw*)(raddr(ss,bp+var_24)), ax));	// 39810 add     [bp+var_24], ax ;~ 1359:2D17
cs=0x1359;eip=0x002d1a; 	X(ADC(*(dw*)(raddr(ss,bp+var_22)), dx));	// 39811 adc     [bp+var_22], dx ;~ 1359:2D1A
cs=0x1359;eip=0x002d1d; 	T(MOV(ax, word_449bc));	// 39812 mov     ax, word_449BC ;~ 1359:2D1D
cs=0x1359;eip=0x002d20; 	T(SUB(ax, elapsed_time2));	// 39813 sub     ax, elapsed_time2 ;~ 1359:2D20
cs=0x1359;eip=0x002d24; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 39814 mov     [bp+var_44], ax ;~ 1359:2D24
cs=0x1359;eip=0x002d27; 	T(MOV(ax, 0x14));	// 39815 mov     ax, 14h ;~ 1359:2D27
cs=0x1359;eip=0x002d2a; 	T(CWD);	// 39816 cwd ;~ 1359:2D2A
cs=0x1359;eip=0x002d2b; 	X(PUSH(dx));	// 39817 push    dx ;~ 1359:2D2B
cs=0x1359;eip=0x002d2c; 	X(PUSH(ax));	// 39818 push    ax ;~ 1359:2D2C
cs=0x1359;eip=0x002d2d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_22))));	// 39819 push    [bp+var_22] ;~ 1359:2D2D
cs=0x1359;eip=0x002d30; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 39820 push    [bp+var_24] ;~ 1359:2D30
cs=0x1359;eip=0x002d33; 	R(CALLF(__afldiv,0));	// 39821 call    __aFldiv ;~ 1359:2D33
cs=0x1359;eip=0x002d38; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_44))));	// 39822 cmp     ax, [bp+var_44] ;~ 1359:2D38
cs=0x1359;eip=0x002d3b; 	R(JBE(loc_248c4));	// 39823 jbe     short loc_248C4 ;~ 1359:2D3B
cs=0x1359;eip=0x002d3d; 	T(MOV(ax, 0x14));	// 39824 mov     ax, 14h ;~ 1359:2D3D
cs=0x1359;eip=0x002d40; 	T(CWD);	// 39825 cwd ;~ 1359:2D40
cs=0x1359;eip=0x002d41; 	X(PUSH(dx));	// 39826 push    dx ;~ 1359:2D41
cs=0x1359;eip=0x002d42; 	X(PUSH(ax));	// 39827 push    ax ;~ 1359:2D42
cs=0x1359;eip=0x002d43; 	T(SUB(ax, ax));	// 39828 sub     ax, ax ;~ 1359:2D43
cs=0x1359;eip=0x002d45; 	X(PUSH(ax));	// 39829 push    ax ;~ 1359:2D45
cs=0x1359;eip=0x002d46; 	X(PUSH(*(dw*)(raddr(ss,bp+var_44))));	// 39830 push    [bp+var_44] ;~ 1359:2D46
cs=0x1359;eip=0x002d49; 	R(CALLF(__aflmul,0));	// 39831 call    __aFlmul ;~ 1359:2D49
cs=0x1359;eip=0x002d4e; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 39832 mov     [bp+var_24], ax ;~ 1359:2D4E
cs=0x1359;eip=0x002d51; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), dx));	// 39833 mov     [bp+var_22], dx ;~ 1359:2D51
loc_248c4:
	// 7145 
cs=0x1359;eip=0x002d54; 	T(MOV(ax, 0x14));	// 39836 mov     ax, 14h ;~ 1359:2D54
cs=0x1359;eip=0x002d57; 	T(CWD);	// 39837 cwd ;~ 1359:2D57
cs=0x1359;eip=0x002d58; 	X(PUSH(dx));	// 39838 push    dx ;~ 1359:2D58
cs=0x1359;eip=0x002d59; 	X(PUSH(ax));	// 39839 push    ax ;~ 1359:2D59
cs=0x1359;eip=0x002d5a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_22))));	// 39840 push    [bp+var_22] ;~ 1359:2D5A
cs=0x1359;eip=0x002d5d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 39841 push    [bp+var_24] ;~ 1359:2D5D
cs=0x1359;eip=0x002d60; 	R(CALLF(__afldiv,0));	// 39842 call    __aFldiv ;~ 1359:2D60
cs=0x1359;eip=0x002d65; 	T(ADD(ax, elapsed_time2));	// 39843 add     ax, elapsed_time2 ;~ 1359:2D65
cs=0x1359;eip=0x002d69; 	X(PUSH(ax));	// 39844 push    ax ;~ 1359:2D69
cs=0x1359;eip=0x002d6a; 	X(PUSH(word_445d4));	// 39845 push    word_445D4 ;~ 1359:2D6A
cs=0x1359;eip=0x002d6e; 	T(MOV(ax, 1));	// 39846 mov     ax, 1 ;~ 1359:2D6E
cs=0x1359;eip=0x002d71; 	X(PUSH(ax));	// 39847 push    ax ;~ 1359:2D71
cs=0x1359;eip=0x002d72; 	X(PUSH(cs));	// 39848 push    cs ;~ 1359:2D72
cs=0x1359;eip=0x002d73; 	R(CALL(loop_game,0));	// 39849 call    near ptr loop_game ;~ 1359:2D73
cs=0x1359;eip=0x002d76; 	T(ADD(sp, 6));	// 39850 add     sp, 6 ;~ 1359:2D76
cs=0x1359;eip=0x002d79; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 39851 push    [bp+var_18] ;~ 1359:2D79
cs=0x1359;eip=0x002d7c; 	R(CALLF(input_do_checking,0));	// 39852 call    input_do_checking ;~ 1359:2D7C
cs=0x1359;eip=0x002d81; 	T(ADD(sp, 2));	// 39853 add     sp, 2 ;~ 1359:2D81
loc_248f4:
	// 7146 
cs=0x1359;eip=0x002d84; 	T(TEST(*(db*)(((db*)&kbjoyflags)), 0x30));	// 39856 test    byte ptr kbjoyflags, 30h ;~ 1359:2D84
cs=0x1359;eip=0x002d89; 	R(JZ(loc_248fe));	// 39857 jz      short loc_248FE ;~ 1359:2D89
cs=0x1359;eip=0x002d8b; 	R(JMP(loc_2485c));	// 39858 jmp     loc_2485C ;~ 1359:2D8B
loc_248fe:
	// 7147 
cs=0x1359;eip=0x002d8e; 	T(MOV(ax, word_449bc));	// 39862 mov     ax, word_449BC ;~ 1359:2D8E
cs=0x1359;eip=0x002d91; 	T(SUB(ax, elapsed_time2));	// 39863 sub     ax, elapsed_time2 ;~ 1359:2D91
cs=0x1359;eip=0x002d95; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 39864 mov     [bp+var_44], ax ;~ 1359:2D95
cs=0x1359;eip=0x002d98; 	T(MOV(ax, 0x14));	// 39865 mov     ax, 14h ;~ 1359:2D98
cs=0x1359;eip=0x002d9b; 	T(CWD);	// 39866 cwd ;~ 1359:2D9B
cs=0x1359;eip=0x002d9c; 	X(PUSH(dx));	// 39867 push    dx ;~ 1359:2D9C
cs=0x1359;eip=0x002d9d; 	X(PUSH(ax));	// 39868 push    ax ;~ 1359:2D9D
cs=0x1359;eip=0x002d9e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_22))));	// 39869 push    [bp+var_22] ;~ 1359:2D9E
cs=0x1359;eip=0x002da1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 39870 push    [bp+var_24] ;~ 1359:2DA1
cs=0x1359;eip=0x002da4; 	R(CALLF(__afldiv,0));	// 39871 call    __aFldiv ;~ 1359:2DA4
cs=0x1359;eip=0x002da9; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_44))));	// 39872 cmp     ax, [bp+var_44] ;~ 1359:2DA9
cs=0x1359;eip=0x002dac; 	R(JBE(loc_24935));	// 39873 jbe     short loc_24935 ;~ 1359:2DAC
cs=0x1359;eip=0x002dae; 	T(MOV(ax, 0x14));	// 39874 mov     ax, 14h ;~ 1359:2DAE
cs=0x1359;eip=0x002db1; 	T(CWD);	// 39875 cwd ;~ 1359:2DB1
cs=0x1359;eip=0x002db2; 	X(PUSH(dx));	// 39876 push    dx ;~ 1359:2DB2
cs=0x1359;eip=0x002db3; 	X(PUSH(ax));	// 39877 push    ax ;~ 1359:2DB3
cs=0x1359;eip=0x002db4; 	T(SUB(ax, ax));	// 39878 sub     ax, ax ;~ 1359:2DB4
cs=0x1359;eip=0x002db6; 	X(PUSH(ax));	// 39879 push    ax ;~ 1359:2DB6
cs=0x1359;eip=0x002db7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_44))));	// 39880 push    [bp+var_44] ;~ 1359:2DB7
cs=0x1359;eip=0x002dba; 	R(CALLF(__aflmul,0));	// 39881 call    __aFlmul ;~ 1359:2DBA
cs=0x1359;eip=0x002dbf; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 39882 mov     [bp+var_24], ax ;~ 1359:2DBF
cs=0x1359;eip=0x002dc2; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), dx));	// 39883 mov     [bp+var_22], dx ;~ 1359:2DC2
loc_24935:
	// 7148 
cs=0x1359;eip=0x002dc5; 	T(MOV(ax, 0x14));	// 39886 mov     ax, 14h ;~ 1359:2DC5
cs=0x1359;eip=0x002dc8; 	T(CWD);	// 39887 cwd ;~ 1359:2DC8
cs=0x1359;eip=0x002dc9; 	X(PUSH(dx));	// 39888 push    dx ;~ 1359:2DC9
cs=0x1359;eip=0x002dca; 	X(PUSH(ax));	// 39889 push    ax ;~ 1359:2DCA
cs=0x1359;eip=0x002dcb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_22))));	// 39890 push    [bp+var_22] ;~ 1359:2DCB
cs=0x1359;eip=0x002dce; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 39891 push    [bp+var_24] ;~ 1359:2DCE
cs=0x1359;eip=0x002dd1; 	R(CALLF(__afldiv,0));	// 39892 call    __aFldiv ;~ 1359:2DD1
cs=0x1359;eip=0x002dd6; 	T(MOV(si, ax));	// 39893 mov     si, ax ;~ 1359:2DD6
cs=0x1359;eip=0x002dd8; 	T(ADD(si, elapsed_time2));	// 39894 add     si, elapsed_time2 ;~ 1359:2DD8
cs=0x1359;eip=0x002ddc; 	T(CMP(word_449bc, si));	// 39895 cmp     word_449BC, si ;~ 1359:2DDC
cs=0x1359;eip=0x002de0; 	R(JGE(loc_24956));	// 39896 jge     short loc_24956 ;~ 1359:2DE0
cs=0x1359;eip=0x002de2; 	T(MOV(si, word_449bc));	// 39897 mov     si, word_449BC ;~ 1359:2DE2
loc_24956:
	// 7149 
cs=0x1359;eip=0x002de6; 	X(PUSH(si));	// 39900 push    si ;~ 1359:2DE6
cs=0x1359;eip=0x002de7; 	R(CALLF(restore_gamestate,0));	// 39901 call    restore_gamestate ;~ 1359:2DE7
cs=0x1359;eip=0x002dec; 	T(ADD(sp, 2));	// 39902 add     sp, 2 ;~ 1359:2DEC
cs=0x1359;eip=0x002def; 	X(MOV(elapsed_time2, si));	// 39903 mov     elapsed_time2, si ;~ 1359:2DEF
cs=0x1359;eip=0x002df3; 	T(SUB(ax, ax));	// 39904 sub     ax, ax ;~ 1359:2DF3
cs=0x1359;eip=0x002df5; 	X(PUSH(ax));	// 39905 push    ax ;~ 1359:2DF5
cs=0x1359;eip=0x002df6; 	T(MOV(ax, 4));	// 39906 mov     ax, 4 ;~ 1359:2DF6
cs=0x1359;eip=0x002df9; 	X(PUSH(ax));	// 39907 push    ax ;~ 1359:2DF9
cs=0x1359;eip=0x002dfa; 	T(MOV(ax, 2));	// 39908 mov     ax, 2 ;~ 1359:2DFA
cs=0x1359;eip=0x002dfd; 	X(PUSH(ax));	// 39909 push    ax ;~ 1359:2DFD
cs=0x1359;eip=0x002dfe; 	X(PUSH(cs));	// 39910 push    cs ;~ 1359:2DFE
cs=0x1359;eip=0x002dff; 	R(CALL(loop_game,0));	// 39911 call    near ptr loop_game ;~ 1359:2DFF
cs=0x1359;eip=0x002e02; 	T(ADD(sp, 6));	// 39912 add     sp, 6 ;~ 1359:2E02
cs=0x1359;eip=0x002e05; 	T(MOV(ax, offset(dseg,awai_0)));	// 39913 mov     ax, offset aWai_0 ; "wai" ;~ 1359:2E05
cs=0x1359;eip=0x002e08; 	X(PUSH(ax));	// 39914 push    ax ;~ 1359:2E08
cs=0x1359;eip=0x002e09; 	X(PUSH(word_449a2));	// 39915 push    word_449A2 ;~ 1359:2E09
cs=0x1359;eip=0x002e0d; 	X(PUSH(gameresptr));	// 39916 push    gameresptr ;~ 1359:2E0D
cs=0x1359;eip=0x002e11; 	R(CALLF(locate_text_res,0));	// 39917 call    locate_text_res ;~ 1359:2E11
cs=0x1359;eip=0x002e16; 	T(ADD(sp, 6));	// 39918 add     sp, 6 ;~ 1359:2E16
cs=0x1359;eip=0x002e19; 	X(PUSH(dx));	// 39919 push    dx ;~ 1359:2E19
cs=0x1359;eip=0x002e1a; 	X(PUSH(ax));	// 39920 push    ax ;~ 1359:2E1A
cs=0x1359;eip=0x002e1b; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 39921 mov     ax, offset resID_byte1 ;~ 1359:2E1B
cs=0x1359;eip=0x002e1e; 	X(PUSH(ax));	// 39922 push    ax ;~ 1359:2E1E
cs=0x1359;eip=0x002e1f; 	R(CALLF(copy_string,0));	// 39923 call    copy_string ;~ 1359:2E1F
cs=0x1359;eip=0x002e24; 	T(ADD(sp, 6));	// 39924 add     sp, 6 ;~ 1359:2E24
cs=0x1359;eip=0x002e27; 	T(CMP(timertestflag_copy, 0));	// 39925 cmp     timertestflag_copy, 0 ;~ 1359:2E27
cs=0x1359;eip=0x002e2c; 	R(JZ(loc_249d2));	// 39926 jz      short loc_249D2 ;~ 1359:2E2C
cs=0x1359;eip=0x002e2e; 	X(PUSH(rectptr_unk2));	// 39927 push    rectptr_unk2 ;~ 1359:2E2E
cs=0x1359;eip=0x002e32; 	T(SUB(ax, ax));	// 39928 sub     ax, ax ;~ 1359:2E32
cs=0x1359;eip=0x002e34; 	X(PUSH(ax));	// 39929 push    ax ;~ 1359:2E34
cs=0x1359;eip=0x002e35; 	X(PUSH(dialog_fnt_colour));	// 39930 push    dialog_fnt_colour ;~ 1359:2E35
cs=0x1359;eip=0x002e39; 	T(MOV(ax, 0x64));	// 39931 mov     ax, 64h ; 'd' ;~ 1359:2E39
cs=0x1359;eip=0x002e3c; 	X(PUSH(ax));	// 39932 push    ax ;~ 1359:2E3C
cs=0x1359;eip=0x002e3d; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 39933 mov     ax, offset resID_byte1 ;~ 1359:2E3D
cs=0x1359;eip=0x002e40; 	X(PUSH(ax));	// 39934 push    ax ;~ 1359:2E40
cs=0x1359;eip=0x002e41; 	R(CALLF(font_op2_alt,0));	// 39935 call    font_op2_alt ;~ 1359:2E41
cs=0x1359;eip=0x002e46; 	T(ADD(sp, 2));	// 39936 add     sp, 2 ;~ 1359:2E46
cs=0x1359;eip=0x002e49; 	X(PUSH(ax));	// 39937 push    ax ;~ 1359:2E49
cs=0x1359;eip=0x002e4a; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 39938 mov     ax, offset resID_byte1 ;~ 1359:2E4A
cs=0x1359;eip=0x002e4d; 	X(PUSH(ax));	// 39939 push    ax ;~ 1359:2E4D
cs=0x1359;eip=0x002e4e; 	R(CALLF(intro_draw_text,0));	// 39940 call    intro_draw_text ;~ 1359:2E4E
cs=0x1359;eip=0x002e53; 	T(ADD(sp, 0x0A));	// 39941 add     sp, 0Ah ;~ 1359:2E53
cs=0x1359;eip=0x002e56; 	X(PUSH(ax));	// 39942 push    ax ;~ 1359:2E56
cs=0x1359;eip=0x002e57; 	X(PUSH(rectptr_unk2));	// 39943 push    rectptr_unk2 ;~ 1359:2E57
cs=0x1359;eip=0x002e5b; 	R(CALLF(rect_union,0));	// 39944 call    rect_union ;~ 1359:2E5B
cs=0x1359;eip=0x002e60; 	R(JMP(loc_24a0d));	// 39945 jmp     short loc_24A0D ;~ 1359:2E60
loc_249d2:
	// 7150 
cs=0x1359;eip=0x002e62; 	T(SUB(ax, ax));	// 39949 sub     ax, ax ;~ 1359:2E62
cs=0x1359;eip=0x002e64; 	X(PUSH(ax));	// 39950 push    ax ;~ 1359:2E64
cs=0x1359;eip=0x002e65; 	X(PUSH(dialog_fnt_colour));	// 39951 push    dialog_fnt_colour ;~ 1359:2E65
cs=0x1359;eip=0x002e69; 	T(MOV(ax, 0x64));	// 39952 mov     ax, 64h ; 'd' ;~ 1359:2E69
cs=0x1359;eip=0x002e6c; 	X(PUSH(ax));	// 39953 push    ax ;~ 1359:2E6C
cs=0x1359;eip=0x002e6d; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 39954 mov     ax, offset resID_byte1 ;~ 1359:2E6D
cs=0x1359;eip=0x002e70; 	X(PUSH(ax));	// 39955 push    ax ;~ 1359:2E70
cs=0x1359;eip=0x002e71; 	R(CALLF(font_op2_alt,0));	// 39956 call    font_op2_alt ;~ 1359:2E71
cs=0x1359;eip=0x002e76; 	T(ADD(sp, 2));	// 39957 add     sp, 2 ;~ 1359:2E76
cs=0x1359;eip=0x002e79; 	X(PUSH(ax));	// 39958 push    ax ;~ 1359:2E79
cs=0x1359;eip=0x002e7a; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 39959 mov     ax, offset resID_byte1 ;~ 1359:2E7A
cs=0x1359;eip=0x002e7d; 	X(PUSH(ax));	// 39960 push    ax ;~ 1359:2E7D
cs=0x1359;eip=0x002e7e; 	R(CALLF(intro_draw_text,0));	// 39961 call    intro_draw_text ;~ 1359:2E7E
cs=0x1359;eip=0x002e83; 	T(ADD(sp, 0x0A));	// 39962 add     sp, 0Ah ;~ 1359:2E83
cs=0x1359;eip=0x002e86; 	R(JMP(loc_24a10));	// 39963 jmp     short loc_24A10 ;~ 1359:2E86
loc_249f8:
	// 7151 
cs=0x1359;eip=0x002e88; 	R(CALLF(update_gamestate,0));	// 39967 call    update_gamestate ;~ 1359:2E88
cs=0x1359;eip=0x002e8d; 	X(PUSH(elapsed_time2));	// 39968 push    elapsed_time2 ;~ 1359:2E8D
cs=0x1359;eip=0x002e91; 	X(PUSH(word_445d4));	// 39969 push    word_445D4 ;~ 1359:2E91
cs=0x1359;eip=0x002e95; 	T(MOV(ax, 1));	// 39970 mov     ax, 1 ;~ 1359:2E95
cs=0x1359;eip=0x002e98; 	X(PUSH(ax));	// 39971 push    ax ;~ 1359:2E98
cs=0x1359;eip=0x002e99; 	X(PUSH(cs));	// 39972 push    cs ;~ 1359:2E99
cs=0x1359;eip=0x002e9a; 	R(CALL(loop_game,0));	// 39973 call    near ptr loop_game ;~ 1359:2E9A
loc_24a0d:
	// 7152 
cs=0x1359;eip=0x002e9d; 	T(ADD(sp, 6));	// 39976 add     sp, 6 ;~ 1359:2E9D
loc_24a10:
	// 7153 
cs=0x1359;eip=0x002ea0; 	T(MOV(ax, elapsed_time2));	// 39979 mov     ax, elapsed_time2 ;~ 1359:2EA0
cs=0x1359;eip=0x002ea3; 	T(CMP(word_445d4, ax));	// 39980 cmp     word_445D4, ax ;~ 1359:2EA3
cs=0x1359;eip=0x002ea7; 	R(JNZ(loc_249f8));	// 39981 jnz     short loc_249F8 ;~ 1359:2EA7
loc_24a19:
	// 7154 
cs=0x1359;eip=0x002ea9; 	T(MOV(ax, 0x3E8));	// 39984 mov     ax, 3E8h ;~ 1359:2EA9
cs=0x1359;eip=0x002eac; 	X(PUSH(ax));	// 39985 push    ax ;~ 1359:2EAC
cs=0x1359;eip=0x002ead; 	R(CALLF(input_do_checking,0));	// 39986 call    input_do_checking ;~ 1359:2EAD
cs=0x1359;eip=0x002eb2; 	T(ADD(sp, 2));	// 39987 add     sp, 2 ;~ 1359:2EB2
cs=0x1359;eip=0x002eb5; 	R(JMP(loc_24d5e));	// 39988 jmp     loc_24D5E ;~ 1359:2EB5
loc_24a28:
	// 7155 
cs=0x1359;eip=0x002eb8; 	X(MOV(is_in_replay, 1));	// 39993 mov     is_in_replay, 1 ; jumptable 00024340 case 1 ;~ 1359:2EB8
cs=0x1359;eip=0x002ebd; 	R(CALLF(audio_carstate,0));	// 39994 call    audio_carstate ;~ 1359:2EBD
cs=0x1359;eip=0x002ec2; 	T(SUB(ax, ax));	// 39995 sub     ax, ax ;~ 1359:2EC2
cs=0x1359;eip=0x002ec4; 	X(PUSH(ax));	// 39996 push    ax ;~ 1359:2EC4
cs=0x1359;eip=0x002ec5; 	T(MOV(ax, 1));	// 39997 mov     ax, 1 ;~ 1359:2EC5
cs=0x1359;eip=0x002ec8; 	X(PUSH(ax));	// 39998 push    ax ;~ 1359:2EC8
cs=0x1359;eip=0x002ec9; 	T(MOV(ax, 2));	// 39999 mov     ax, 2 ;~ 1359:2EC9
cs=0x1359;eip=0x002ecc; 	X(PUSH(ax));	// 40000 push    ax ;~ 1359:2ECC
cs=0x1359;eip=0x002ecd; 	X(PUSH(cs));	// 40001 push    cs ;~ 1359:2ECD
cs=0x1359;eip=0x002ece; 	R(CALL(loop_game,0));	// 40002 call    near ptr loop_game ;~ 1359:2ECE
cs=0x1359;eip=0x002ed1; 	T(ADD(sp, 6));	// 40003 add     sp, 6 ;~ 1359:2ED1
cs=0x1359;eip=0x002ed4; 	R(CALLF(timer_get_delta_alt,0));	// 40004 call    timer_get_delta_alt ;~ 1359:2ED4
cs=0x1359;eip=0x002ed9; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), 0x14));	// 40005 mov     [bp+var_24], 14h ;~ 1359:2ED9
cs=0x1359;eip=0x002ede; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), 0));	// 40006 mov     [bp+var_22], 0 ;~ 1359:2EDE
cs=0x1359;eip=0x002ee3; 	R(JMP(loc_24aea));	// 40007 jmp     loc_24AEA ;~ 1359:2EE3
loc_24a58:
	// 7156 
cs=0x1359;eip=0x002ee8; 	T(MOV(ax, 0x32));	// 40013 mov     ax, 32h ; '2' ;~ 1359:2EE8
cs=0x1359;eip=0x002eeb; 	T(CWD);	// 40014 cwd ;~ 1359:2EEB
cs=0x1359;eip=0x002eec; 	X(PUSH(dx));	// 40015 push    dx ;~ 1359:2EEC
cs=0x1359;eip=0x002eed; 	X(PUSH(ax));	// 40016 push    ax ;~ 1359:2EED
cs=0x1359;eip=0x002eee; 	X(PUSH(*(dw*)(raddr(ss,bp+var_22))));	// 40017 push    [bp+var_22] ;~ 1359:2EEE
cs=0x1359;eip=0x002ef1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 40018 push    [bp+var_24] ;~ 1359:2EF1
cs=0x1359;eip=0x002ef4; 	R(CALLF(__afldiv,0));	// 40019 call    __aFldiv ;~ 1359:2EF4
cs=0x1359;eip=0x002ef9; 	T(MOV(di, ax));	// 40020 mov     di, ax ;~ 1359:2EF9
cs=0x1359;eip=0x002efb; 	T(ADD(di, 3));	// 40021 add     di, 3 ;~ 1359:2EFB
cs=0x1359;eip=0x002efe; 	T(CMP(di, 0x64));	// 40022 cmp     di, 64h ; 'd' ;~ 1359:2EFE
cs=0x1359;eip=0x002f01; 	R(JLE(loc_24a76));	// 40023 jle     short loc_24A76 ;~ 1359:2F01
cs=0x1359;eip=0x002f03; 	T(MOV(di, 0x64));	// 40024 mov     di, 64h ; 'd' ;~ 1359:2F03
loc_24a76:
	// 7157 
cs=0x1359;eip=0x002f06; 	R(CALLF(timer_get_delta_alt,0));	// 40027 call    timer_get_delta_alt ;~ 1359:2F06
cs=0x1359;eip=0x002f0b; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 40028 mov     [bp+var_18], ax ;~ 1359:2F0B
cs=0x1359;eip=0x002f0e; 	T(IMUL1_2(di));	// 40029 imul    di ;~ 1359:2F0E
cs=0x1359;eip=0x002f10; 	T(MOV(si, ax));	// 40030 mov     si, ax ;~ 1359:2F10
cs=0x1359;eip=0x002f12; 	T(CWD);	// 40031 cwd ;~ 1359:2F12
cs=0x1359;eip=0x002f13; 	X(ADD(*(dw*)(raddr(ss,bp+var_24)), ax));	// 40032 add     [bp+var_24], ax ;~ 1359:2F13
cs=0x1359;eip=0x002f16; 	X(ADC(*(dw*)(raddr(ss,bp+var_22)), dx));	// 40033 adc     [bp+var_22], dx ;~ 1359:2F16
cs=0x1359;eip=0x002f19; 	T(MOV(ax, 0x14));	// 40034 mov     ax, 14h ;~ 1359:2F19
cs=0x1359;eip=0x002f1c; 	T(CWD);	// 40035 cwd ;~ 1359:2F1C
cs=0x1359;eip=0x002f1d; 	X(PUSH(dx));	// 40036 push    dx ;~ 1359:2F1D
cs=0x1359;eip=0x002f1e; 	X(PUSH(ax));	// 40037 push    ax ;~ 1359:2F1E
cs=0x1359;eip=0x002f1f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_22))));	// 40038 push    [bp+var_22] ;~ 1359:2F1F
cs=0x1359;eip=0x002f22; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 40039 push    [bp+var_24] ;~ 1359:2F22
cs=0x1359;eip=0x002f25; 	R(CALLF(__afldiv,0));	// 40040 call    __aFldiv ;~ 1359:2F25
cs=0x1359;eip=0x002f2a; 	T(CMP(ax, elapsed_time2));	// 40041 cmp     ax, elapsed_time2 ;~ 1359:2F2A
cs=0x1359;eip=0x002f2e; 	R(JBE(loc_24ab8));	// 40042 jbe     short loc_24AB8 ;~ 1359:2F2E
cs=0x1359;eip=0x002f30; 	T(MOV(ax, 0x14));	// 40043 mov     ax, 14h ;~ 1359:2F30
cs=0x1359;eip=0x002f33; 	T(CWD);	// 40044 cwd ;~ 1359:2F33
cs=0x1359;eip=0x002f34; 	X(PUSH(dx));	// 40045 push    dx ;~ 1359:2F34
cs=0x1359;eip=0x002f35; 	X(PUSH(ax));	// 40046 push    ax ;~ 1359:2F35
cs=0x1359;eip=0x002f36; 	T(SUB(ax, ax));	// 40047 sub     ax, ax ;~ 1359:2F36
cs=0x1359;eip=0x002f38; 	X(PUSH(ax));	// 40048 push    ax ;~ 1359:2F38
cs=0x1359;eip=0x002f39; 	X(PUSH(elapsed_time2));	// 40049 push    elapsed_time2 ;~ 1359:2F39
cs=0x1359;eip=0x002f3d; 	R(CALLF(__aflmul,0));	// 40050 call    __aFlmul ;~ 1359:2F3D
cs=0x1359;eip=0x002f42; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 40051 mov     [bp+var_24], ax ;~ 1359:2F42
cs=0x1359;eip=0x002f45; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), dx));	// 40052 mov     [bp+var_22], dx ;~ 1359:2F45
loc_24ab8:
	// 7158 
cs=0x1359;eip=0x002f48; 	T(MOV(ax, 0x14));	// 40055 mov     ax, 14h ;~ 1359:2F48
cs=0x1359;eip=0x002f4b; 	T(CWD);	// 40056 cwd ;~ 1359:2F4B
cs=0x1359;eip=0x002f4c; 	X(PUSH(dx));	// 40057 push    dx ;~ 1359:2F4C
cs=0x1359;eip=0x002f4d; 	X(PUSH(ax));	// 40058 push    ax ;~ 1359:2F4D
cs=0x1359;eip=0x002f4e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_22))));	// 40059 push    [bp+var_22] ;~ 1359:2F4E
cs=0x1359;eip=0x002f51; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 40060 push    [bp+var_24] ;~ 1359:2F51
cs=0x1359;eip=0x002f54; 	R(CALLF(__afldiv,0));	// 40061 call    __aFldiv ;~ 1359:2F54
cs=0x1359;eip=0x002f59; 	T(MOV(cx, elapsed_time2));	// 40062 mov     cx, elapsed_time2 ;~ 1359:2F59
cs=0x1359;eip=0x002f5d; 	T(SUB(cx, ax));	// 40063 sub     cx, ax ;~ 1359:2F5D
cs=0x1359;eip=0x002f5f; 	X(PUSH(cx));	// 40064 push    cx ;~ 1359:2F5F
cs=0x1359;eip=0x002f60; 	X(PUSH(word_445d4));	// 40065 push    word_445D4 ;~ 1359:2F60
cs=0x1359;eip=0x002f64; 	T(MOV(ax, 1));	// 40066 mov     ax, 1 ;~ 1359:2F64
cs=0x1359;eip=0x002f67; 	X(PUSH(ax));	// 40067 push    ax ;~ 1359:2F67
cs=0x1359;eip=0x002f68; 	X(PUSH(cs));	// 40068 push    cs ;~ 1359:2F68
cs=0x1359;eip=0x002f69; 	R(CALL(loop_game,0));	// 40069 call    near ptr loop_game ;~ 1359:2F69
cs=0x1359;eip=0x002f6c; 	T(ADD(sp, 6));	// 40070 add     sp, 6 ;~ 1359:2F6C
cs=0x1359;eip=0x002f6f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 40071 push    [bp+var_18] ;~ 1359:2F6F
cs=0x1359;eip=0x002f72; 	R(CALLF(input_do_checking,0));	// 40072 call    input_do_checking ;~ 1359:2F72
cs=0x1359;eip=0x002f77; 	T(ADD(sp, 2));	// 40073 add     sp, 2 ;~ 1359:2F77
loc_24aea:
	// 7159 
cs=0x1359;eip=0x002f7a; 	T(TEST(*(db*)(((db*)&kbjoyflags)), 0x30));	// 40076 test    byte ptr kbjoyflags, 30h ;~ 1359:2F7A
cs=0x1359;eip=0x002f7f; 	R(JZ(loc_24af4));	// 40077 jz      short loc_24AF4 ;~ 1359:2F7F
cs=0x1359;eip=0x002f81; 	R(JMP(loc_24a58));	// 40078 jmp     loc_24A58 ;~ 1359:2F81
loc_24af4:
	// 7160 
cs=0x1359;eip=0x002f84; 	T(MOV(ax, 0x14));	// 40082 mov     ax, 14h ;~ 1359:2F84
cs=0x1359;eip=0x002f87; 	T(CWD);	// 40083 cwd ;~ 1359:2F87
cs=0x1359;eip=0x002f88; 	X(PUSH(dx));	// 40084 push    dx ;~ 1359:2F88
cs=0x1359;eip=0x002f89; 	X(PUSH(ax));	// 40085 push    ax ;~ 1359:2F89
cs=0x1359;eip=0x002f8a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_22))));	// 40086 push    [bp+var_22] ;~ 1359:2F8A
cs=0x1359;eip=0x002f8d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 40087 push    [bp+var_24] ;~ 1359:2F8D
cs=0x1359;eip=0x002f90; 	R(CALLF(__afldiv,0));	// 40088 call    __aFldiv ;~ 1359:2F90
cs=0x1359;eip=0x002f95; 	T(CMP(ax, elapsed_time2));	// 40089 cmp     ax, elapsed_time2 ;~ 1359:2F95
cs=0x1359;eip=0x002f99; 	R(JBE(loc_24b23));	// 40090 jbe     short loc_24B23 ;~ 1359:2F99
cs=0x1359;eip=0x002f9b; 	T(MOV(ax, 0x14));	// 40091 mov     ax, 14h ;~ 1359:2F9B
cs=0x1359;eip=0x002f9e; 	T(CWD);	// 40092 cwd ;~ 1359:2F9E
cs=0x1359;eip=0x002f9f; 	X(PUSH(dx));	// 40093 push    dx ;~ 1359:2F9F
cs=0x1359;eip=0x002fa0; 	X(PUSH(ax));	// 40094 push    ax ;~ 1359:2FA0
cs=0x1359;eip=0x002fa1; 	T(SUB(ax, ax));	// 40095 sub     ax, ax ;~ 1359:2FA1
cs=0x1359;eip=0x002fa3; 	X(PUSH(ax));	// 40096 push    ax ;~ 1359:2FA3
cs=0x1359;eip=0x002fa4; 	X(PUSH(elapsed_time2));	// 40097 push    elapsed_time2 ;~ 1359:2FA4
cs=0x1359;eip=0x002fa8; 	R(CALLF(__aflmul,0));	// 40098 call    __aFlmul ;~ 1359:2FA8
cs=0x1359;eip=0x002fad; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 40099 mov     [bp+var_24], ax ;~ 1359:2FAD
cs=0x1359;eip=0x002fb0; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), dx));	// 40100 mov     [bp+var_22], dx ;~ 1359:2FB0
loc_24b23:
	// 7161 
cs=0x1359;eip=0x002fb3; 	T(MOV(ax, 0x14));	// 40103 mov     ax, 14h ;~ 1359:2FB3
cs=0x1359;eip=0x002fb6; 	T(CWD);	// 40104 cwd ;~ 1359:2FB6
cs=0x1359;eip=0x002fb7; 	X(PUSH(dx));	// 40105 push    dx ;~ 1359:2FB7
cs=0x1359;eip=0x002fb8; 	X(PUSH(ax));	// 40106 push    ax ;~ 1359:2FB8
cs=0x1359;eip=0x002fb9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_22))));	// 40107 push    [bp+var_22] ;~ 1359:2FB9
cs=0x1359;eip=0x002fbc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 40108 push    [bp+var_24] ;~ 1359:2FBC
cs=0x1359;eip=0x002fbf; 	R(CALLF(__afldiv,0));	// 40109 call    __aFldiv ;~ 1359:2FBF
cs=0x1359;eip=0x002fc4; 	T(MOV(di, ax));	// 40110 mov     di, ax ;~ 1359:2FC4
cs=0x1359;eip=0x002fc6; 	T(SUB(ax, ax));	// 40111 sub     ax, ax ;~ 1359:2FC6
cs=0x1359;eip=0x002fc8; 	X(PUSH(ax));	// 40112 push    ax ;~ 1359:2FC8
cs=0x1359;eip=0x002fc9; 	T(MOV(ax, 4));	// 40113 mov     ax, 4 ;~ 1359:2FC9
cs=0x1359;eip=0x002fcc; 	X(PUSH(ax));	// 40114 push    ax ;~ 1359:2FCC
cs=0x1359;eip=0x002fcd; 	T(MOV(ax, 2));	// 40115 mov     ax, 2 ;~ 1359:2FCD
cs=0x1359;eip=0x002fd0; 	X(PUSH(ax));	// 40116 push    ax ;~ 1359:2FD0
cs=0x1359;eip=0x002fd1; 	X(PUSH(cs));	// 40117 push    cs ;~ 1359:2FD1
cs=0x1359;eip=0x002fd2; 	R(CALL(loop_game,0));	// 40118 call    near ptr loop_game ;~ 1359:2FD2
cs=0x1359;eip=0x002fd5; 	T(ADD(sp, 6));	// 40119 add     sp, 6 ;~ 1359:2FD5
cs=0x1359;eip=0x002fd8; 	T(OR(di, di));	// 40120 or      di, di ;~ 1359:2FD8
cs=0x1359;eip=0x002fda; 	R(JNZ(loc_24b4f));	// 40121 jnz     short loc_24B4F ;~ 1359:2FDA
cs=0x1359;eip=0x002fdc; 	R(JMP(loc_24c43));	// 40122 jmp     loc_24C43 ;~ 1359:2FDC
loc_24b4f:
	// 7162 
cs=0x1359;eip=0x002fdf; 	T(MOV(ax, offset(dseg,awai_1)));	// 40126 mov     ax, offset aWai_1 ; "wai" ;~ 1359:2FDF
cs=0x1359;eip=0x002fe2; 	X(PUSH(ax));	// 40127 push    ax ;~ 1359:2FE2
cs=0x1359;eip=0x002fe3; 	X(PUSH(word_449a2));	// 40128 push    word_449A2 ;~ 1359:2FE3
cs=0x1359;eip=0x002fe7; 	X(PUSH(gameresptr));	// 40129 push    gameresptr ;~ 1359:2FE7
cs=0x1359;eip=0x002feb; 	R(CALLF(locate_text_res,0));	// 40130 call    locate_text_res ;~ 1359:2FEB
cs=0x1359;eip=0x002ff0; 	T(ADD(sp, 6));	// 40131 add     sp, 6 ;~ 1359:2FF0
cs=0x1359;eip=0x002ff3; 	X(PUSH(dx));	// 40132 push    dx ;~ 1359:2FF3
cs=0x1359;eip=0x002ff4; 	X(PUSH(ax));	// 40133 push    ax ;~ 1359:2FF4
cs=0x1359;eip=0x002ff5; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 40134 mov     ax, offset resID_byte1 ;~ 1359:2FF5
cs=0x1359;eip=0x002ff8; 	X(PUSH(ax));	// 40135 push    ax ;~ 1359:2FF8
cs=0x1359;eip=0x002ff9; 	R(CALLF(copy_string,0));	// 40136 call    copy_string ;~ 1359:2FF9
cs=0x1359;eip=0x002ffe; 	T(ADD(sp, 6));	// 40137 add     sp, 6 ;~ 1359:2FFE
cs=0x1359;eip=0x003001; 	T(CMP(timertestflag_copy, 0));	// 40138 cmp     timertestflag_copy, 0 ;~ 1359:3001
cs=0x1359;eip=0x003006; 	R(JZ(loc_24bb0));	// 40139 jz      short loc_24BB0 ;~ 1359:3006
cs=0x1359;eip=0x003008; 	X(PUSH(rectptr_unk2));	// 40140 push    rectptr_unk2 ;~ 1359:3008
cs=0x1359;eip=0x00300c; 	T(SUB(ax, ax));	// 40141 sub     ax, ax ;~ 1359:300C
cs=0x1359;eip=0x00300e; 	X(PUSH(ax));	// 40142 push    ax ;~ 1359:300E
cs=0x1359;eip=0x00300f; 	X(PUSH(dialog_fnt_colour));	// 40143 push    dialog_fnt_colour ;~ 1359:300F
cs=0x1359;eip=0x003013; 	T(MOV(ax, 0x64));	// 40144 mov     ax, 64h ; 'd' ;~ 1359:3013
cs=0x1359;eip=0x003016; 	X(PUSH(ax));	// 40145 push    ax ;~ 1359:3016
cs=0x1359;eip=0x003017; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 40146 mov     ax, offset resID_byte1 ;~ 1359:3017
cs=0x1359;eip=0x00301a; 	X(PUSH(ax));	// 40147 push    ax ;~ 1359:301A
cs=0x1359;eip=0x00301b; 	R(CALLF(font_op2_alt,0));	// 40148 call    font_op2_alt ;~ 1359:301B
cs=0x1359;eip=0x003020; 	T(ADD(sp, 2));	// 40149 add     sp, 2 ;~ 1359:3020
cs=0x1359;eip=0x003023; 	X(PUSH(ax));	// 40150 push    ax ;~ 1359:3023
cs=0x1359;eip=0x003024; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 40151 mov     ax, offset resID_byte1 ;~ 1359:3024
cs=0x1359;eip=0x003027; 	X(PUSH(ax));	// 40152 push    ax ;~ 1359:3027
cs=0x1359;eip=0x003028; 	R(CALLF(intro_draw_text,0));	// 40153 call    intro_draw_text ;~ 1359:3028
cs=0x1359;eip=0x00302d; 	T(ADD(sp, 0x0A));	// 40154 add     sp, 0Ah ;~ 1359:302D
cs=0x1359;eip=0x003030; 	X(PUSH(ax));	// 40155 push    ax ;~ 1359:3030
cs=0x1359;eip=0x003031; 	X(PUSH(rectptr_unk2));	// 40156 push    rectptr_unk2 ;~ 1359:3031
cs=0x1359;eip=0x003035; 	R(CALLF(rect_union,0));	// 40157 call    rect_union ;~ 1359:3035
cs=0x1359;eip=0x00303a; 	T(ADD(sp, 6));	// 40158 add     sp, 6 ;~ 1359:303A
cs=0x1359;eip=0x00303d; 	R(JMP(loc_24bd4));	// 40159 jmp     short loc_24BD4 ;~ 1359:303D
loc_24bb0:
	// 7163 
cs=0x1359;eip=0x003040; 	T(SUB(ax, ax));	// 40164 sub     ax, ax ;~ 1359:3040
cs=0x1359;eip=0x003042; 	X(PUSH(ax));	// 40165 push    ax ;~ 1359:3042
cs=0x1359;eip=0x003043; 	X(PUSH(dialog_fnt_colour));	// 40166 push    dialog_fnt_colour ;~ 1359:3043
cs=0x1359;eip=0x003047; 	T(MOV(ax, 0x64));	// 40167 mov     ax, 64h ; 'd' ;~ 1359:3047
cs=0x1359;eip=0x00304a; 	X(PUSH(ax));	// 40168 push    ax ;~ 1359:304A
cs=0x1359;eip=0x00304b; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 40169 mov     ax, offset resID_byte1 ;~ 1359:304B
cs=0x1359;eip=0x00304e; 	X(PUSH(ax));	// 40170 push    ax ;~ 1359:304E
cs=0x1359;eip=0x00304f; 	R(CALLF(font_op2_alt,0));	// 40171 call    font_op2_alt ;~ 1359:304F
cs=0x1359;eip=0x003054; 	T(ADD(sp, 2));	// 40172 add     sp, 2 ;~ 1359:3054
cs=0x1359;eip=0x003057; 	X(PUSH(ax));	// 40173 push    ax ;~ 1359:3057
cs=0x1359;eip=0x003058; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 40174 mov     ax, offset resID_byte1 ;~ 1359:3058
cs=0x1359;eip=0x00305b; 	X(PUSH(ax));	// 40175 push    ax ;~ 1359:305B
cs=0x1359;eip=0x00305c; 	R(CALLF(intro_draw_text,0));	// 40176 call    intro_draw_text ;~ 1359:305C
cs=0x1359;eip=0x003061; 	T(ADD(sp, 0x0A));	// 40177 add     sp, 0Ah ;~ 1359:3061
loc_24bd4:
	// 7164 
cs=0x1359;eip=0x003064; 	T(MOV(si, elapsed_time2));	// 40180 mov     si, elapsed_time2 ;~ 1359:3064
cs=0x1359;eip=0x003068; 	T(SUB(si, di));	// 40181 sub     si, di ;~ 1359:3068
cs=0x1359;eip=0x00306a; 	X(PUSH(si));	// 40182 push    si ;~ 1359:306A
cs=0x1359;eip=0x00306b; 	R(CALLF(restore_gamestate,0));	// 40183 call    restore_gamestate ;~ 1359:306B
cs=0x1359;eip=0x003070; 	T(ADD(sp, 2));	// 40184 add     sp, 2 ;~ 1359:3070
cs=0x1359;eip=0x003073; 	X(MOV(elapsed_time2, si));	// 40185 mov     elapsed_time2, si ;~ 1359:3073
cs=0x1359;eip=0x003077; 	T(MOV(ax, si));	// 40186 mov     ax, si ;~ 1359:3077
cs=0x1359;eip=0x003079; 	T(SUB(ax, word_445d4));	// 40187 sub     ax, word_445D4 ;~ 1359:3079
cs=0x1359;eip=0x00307d; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 40188 mov     [bp+var_4], ax ;~ 1359:307D
cs=0x1359;eip=0x003080; 	T(OR(ax, ax));	// 40189 or      ax, ax ;~ 1359:3080
cs=0x1359;eip=0x003082; 	R(JZ(loc_24c43));	// 40190 jz      short loc_24C43 ;~ 1359:3082
cs=0x1359;eip=0x003084; 	T(MOV(si, ax));	// 40191 mov     si, ax ;~ 1359:3084
cs=0x1359;eip=0x003086; 	R(JMP(loc_24c3a));	// 40192 jmp     short loc_24C3A ;~ 1359:3086
loc_24bf8:
	// 7165 
cs=0x1359;eip=0x003088; 	R(CALLF(update_gamestate,0));	// 40196 call    update_gamestate ;~ 1359:3088
cs=0x1359;eip=0x00308d; 	T(DEC(si));	// 40197 dec     si ;~ 1359:308D
cs=0x1359;eip=0x00308e; 	X(PUSH(elapsed_time2));	// 40198 push    elapsed_time2 ;~ 1359:308E
cs=0x1359;eip=0x003092; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 40199 mov     ax, [bp+var_4] ;~ 1359:3092
cs=0x1359;eip=0x003095; 	T(CWD);	// 40200 cwd ;~ 1359:3095
cs=0x1359;eip=0x003096; 	X(PUSH(dx));	// 40201 push    dx ;~ 1359:3096
cs=0x1359;eip=0x003097; 	X(PUSH(ax));	// 40202 push    ax ;~ 1359:3097
cs=0x1359;eip=0x003098; 	T(MOV(ax, di));	// 40203 mov     ax, di ;~ 1359:3098
cs=0x1359;eip=0x00309a; 	T(CWD);	// 40204 cwd ;~ 1359:309A
cs=0x1359;eip=0x00309b; 	X(PUSH(dx));	// 40205 push    dx ;~ 1359:309B
cs=0x1359;eip=0x00309c; 	X(PUSH(ax));	// 40206 push    ax ;~ 1359:309C
cs=0x1359;eip=0x00309d; 	T(MOV(ax, si));	// 40207 mov     ax, si ;~ 1359:309D
cs=0x1359;eip=0x00309f; 	T(CWD);	// 40208 cwd ;~ 1359:309F
cs=0x1359;eip=0x0030a0; 	X(PUSH(dx));	// 40209 push    dx ;~ 1359:30A0
cs=0x1359;eip=0x0030a1; 	X(PUSH(ax));	// 40210 push    ax ;~ 1359:30A1
cs=0x1359;eip=0x0030a2; 	R(CALLF(__aflmul,0));	// 40211 call    __aFlmul ;~ 1359:30A2
cs=0x1359;eip=0x0030a7; 	X(PUSH(dx));	// 40212 push    dx ;~ 1359:30A7
cs=0x1359;eip=0x0030a8; 	X(PUSH(ax));	// 40213 push    ax ;~ 1359:30A8
cs=0x1359;eip=0x0030a9; 	R(CALLF(__afldiv,0));	// 40214 call    __aFldiv ;~ 1359:30A9
cs=0x1359;eip=0x0030ae; 	T(ADD(ax, elapsed_time2));	// 40215 add     ax, elapsed_time2 ;~ 1359:30AE
cs=0x1359;eip=0x0030b2; 	X(PUSH(ax));	// 40216 push    ax ;~ 1359:30B2
cs=0x1359;eip=0x0030b3; 	T(MOV(ax, 1));	// 40217 mov     ax, 1 ;~ 1359:30B3
cs=0x1359;eip=0x0030b6; 	X(PUSH(ax));	// 40218 push    ax ;~ 1359:30B6
cs=0x1359;eip=0x0030b7; 	X(PUSH(cs));	// 40219 push    cs ;~ 1359:30B7
cs=0x1359;eip=0x0030b8; 	R(CALL(loop_game,0));	// 40220 call    near ptr loop_game ;~ 1359:30B8
cs=0x1359;eip=0x0030bb; 	T(ADD(sp, 6));	// 40221 add     sp, 6 ;~ 1359:30BB
cs=0x1359;eip=0x0030be; 	T(MOV(ax, 1));	// 40222 mov     ax, 1 ;~ 1359:30BE
cs=0x1359;eip=0x0030c1; 	X(PUSH(ax));	// 40223 push    ax ;~ 1359:30C1
cs=0x1359;eip=0x0030c2; 	R(CALLF(input_do_checking,0));	// 40224 call    input_do_checking ;~ 1359:30C2
cs=0x1359;eip=0x0030c7; 	T(ADD(sp, 2));	// 40225 add     sp, 2 ;~ 1359:30C7
loc_24c3a:
	// 7166 
cs=0x1359;eip=0x0030ca; 	T(MOV(ax, elapsed_time2));	// 40228 mov     ax, elapsed_time2 ;~ 1359:30CA
cs=0x1359;eip=0x0030cd; 	T(CMP(word_445d4, ax));	// 40229 cmp     word_445D4, ax ;~ 1359:30CD
cs=0x1359;eip=0x0030d1; 	R(JNZ(loc_24bf8));	// 40230 jnz     short loc_24BF8 ;~ 1359:30D1
loc_24c43:
	// 7167 
cs=0x1359;eip=0x0030d3; 	X(PUSH(word_445d4));	// 40234 push    word_445D4 ;~ 1359:30D3
cs=0x1359;eip=0x0030d7; 	X(PUSH(word_445d4));	// 40235 push    word_445D4 ;~ 1359:30D7
cs=0x1359;eip=0x0030db; 	T(MOV(ax, 1));	// 40236 mov     ax, 1 ;~ 1359:30DB
cs=0x1359;eip=0x0030de; 	X(PUSH(ax));	// 40237 push    ax ;~ 1359:30DE
cs=0x1359;eip=0x0030df; 	X(PUSH(cs));	// 40238 push    cs ;~ 1359:30DF
cs=0x1359;eip=0x0030e0; 	R(CALL(loop_game,0));	// 40239 call    near ptr loop_game ;~ 1359:30E0
cs=0x1359;eip=0x0030e3; 	T(ADD(sp, 6));	// 40240 add     sp, 6 ;~ 1359:30E3
cs=0x1359;eip=0x0030e6; 	R(JMP(loc_24a19));	// 40241 jmp     loc_24A19 ;~ 1359:30E6
loc_24c5a:
	// 7168 
cs=0x1359;eip=0x0030ea; 	X(MOV(byte_449e6, 0));	// 40247 mov     byte_449E6, 0   ; jumptable 00024340 case 3 ;~ 1359:30EA
cs=0x1359;eip=0x0030ef; 	T(SUB(ax, ax));	// 40248 sub     ax, ax ;~ 1359:30EF
cs=0x1359;eip=0x0030f1; 	X(PUSH(ax));	// 40249 push    ax ;~ 1359:30F1
cs=0x1359;eip=0x0030f2; 	T(MOV(ax, 3));	// 40250 mov     ax, 3 ;~ 1359:30F2
cs=0x1359;eip=0x0030f5; 	X(PUSH(ax));	// 40251 push    ax ;~ 1359:30F5
cs=0x1359;eip=0x0030f6; 	T(MOV(ax, 2));	// 40252 mov     ax, 2 ;~ 1359:30F6
cs=0x1359;eip=0x0030f9; 	X(PUSH(ax));	// 40253 push    ax ;~ 1359:30F9
cs=0x1359;eip=0x0030fa; 	X(PUSH(cs));	// 40254 push    cs ;~ 1359:30FA
cs=0x1359;eip=0x0030fb; 	R(CALL(loop_game,0));	// 40255 call    near ptr loop_game ;~ 1359:30FB
cs=0x1359;eip=0x0030fe; 	T(ADD(sp, 6));	// 40256 add     sp, 6 ;~ 1359:30FE
cs=0x1359;eip=0x003101; 	R(JMP(loc_24d18));	// 40257 jmp     loc_24D18 ;~ 1359:3101
loc_24c74:
	// 7169 
cs=0x1359;eip=0x003104; 	X(MOV(is_in_replay, 1));	// 40262 mov     is_in_replay, 1 ; jumptable 00024340 case 4 ;~ 1359:3104
cs=0x1359;eip=0x003109; 	R(CALLF(audio_carstate,0));	// 40263 call    audio_carstate ;~ 1359:3109
cs=0x1359;eip=0x00310e; 	T(SUB(ax, ax));	// 40264 sub     ax, ax ;~ 1359:310E
cs=0x1359;eip=0x003110; 	X(PUSH(ax));	// 40265 push    ax ;~ 1359:3110
cs=0x1359;eip=0x003111; 	T(MOV(ax, 4));	// 40266 mov     ax, 4 ;~ 1359:3111
cs=0x1359;eip=0x003114; 	X(PUSH(ax));	// 40267 push    ax ;~ 1359:3114
cs=0x1359;eip=0x003115; 	T(MOV(ax, 2));	// 40268 mov     ax, 2 ;~ 1359:3115
cs=0x1359;eip=0x003118; 	X(PUSH(ax));	// 40269 push    ax ;~ 1359:3118
cs=0x1359;eip=0x003119; 	X(PUSH(cs));	// 40270 push    cs ;~ 1359:3119
cs=0x1359;eip=0x00311a; 	R(CALL(loop_game,0));	// 40271 call    near ptr loop_game ;~ 1359:311A
cs=0x1359;eip=0x00311d; 	T(ADD(sp, 6));	// 40272 add     sp, 6 ;~ 1359:311D
cs=0x1359;eip=0x003120; 	X(PUSH(word_445d4));	// 40273 push    word_445D4 ;~ 1359:3120
cs=0x1359;eip=0x003124; 	X(PUSH(word_445d4));	// 40274 push    word_445D4 ;~ 1359:3124
cs=0x1359;eip=0x003128; 	T(MOV(ax, 1));	// 40275 mov     ax, 1 ;~ 1359:3128
cs=0x1359;eip=0x00312b; 	X(PUSH(ax));	// 40276 push    ax ;~ 1359:312B
cs=0x1359;eip=0x00312c; 	X(PUSH(cs));	// 40277 push    cs ;~ 1359:312C
cs=0x1359;eip=0x00312d; 	R(CALL(loop_game,0));	// 40278 call    near ptr loop_game ;~ 1359:312D
cs=0x1359;eip=0x003130; 	T(ADD(sp, 6));	// 40279 add     sp, 6 ;~ 1359:3130
cs=0x1359;eip=0x003133; 	R(JMP(def_24340));	// 40280 jmp     def_24340       ; jumptable 00024340 default case ;~ 1359:3133
loc_24ca6:
	// 7170 
cs=0x1359;eip=0x003136; 	X(MOV(is_in_replay, 1));	// 40285 mov     is_in_replay, 1 ; jumptable 00024340 case 5 ;~ 1359:3136
cs=0x1359;eip=0x00313b; 	R(CALLF(audio_carstate,0));	// 40286 call    audio_carstate ;~ 1359:313B
cs=0x1359;eip=0x003140; 	T(SUB(ax, ax));	// 40287 sub     ax, ax ;~ 1359:3140
cs=0x1359;eip=0x003142; 	X(PUSH(ax));	// 40288 push    ax ;~ 1359:3142
cs=0x1359;eip=0x003143; 	T(MOV(ax, 5));	// 40289 mov     ax, 5 ;~ 1359:3143
cs=0x1359;eip=0x003146; 	X(PUSH(ax));	// 40290 push    ax ;~ 1359:3146
cs=0x1359;eip=0x003147; 	T(MOV(ax, 2));	// 40291 mov     ax, 2 ;~ 1359:3147
cs=0x1359;eip=0x00314a; 	X(PUSH(ax));	// 40292 push    ax ;~ 1359:314A
cs=0x1359;eip=0x00314b; 	X(PUSH(cs));	// 40293 push    cs ;~ 1359:314B
cs=0x1359;eip=0x00314c; 	R(CALL(loop_game,0));	// 40294 call    near ptr loop_game ;~ 1359:314C
cs=0x1359;eip=0x00314f; 	T(ADD(sp, 6));	// 40295 add     sp, 6 ;~ 1359:314F
cs=0x1359;eip=0x003152; 	X(PUSH(word_445d4));	// 40296 push    word_445D4 ;~ 1359:3152
cs=0x1359;eip=0x003156; 	X(PUSH(word_445d4));	// 40297 push    word_445D4 ;~ 1359:3156
cs=0x1359;eip=0x00315a; 	T(MOV(ax, 1));	// 40298 mov     ax, 1 ;~ 1359:315A
cs=0x1359;eip=0x00315d; 	X(PUSH(ax));	// 40299 push    ax ;~ 1359:315D
cs=0x1359;eip=0x00315e; 	X(PUSH(cs));	// 40300 push    cs ;~ 1359:315E
cs=0x1359;eip=0x00315f; 	R(CALL(loop_game,0));	// 40301 call    near ptr loop_game ;~ 1359:315F
cs=0x1359;eip=0x003162; 	T(ADD(sp, 6));	// 40302 add     sp, 6 ;~ 1359:3162
cs=0x1359;eip=0x003165; 	T(SUB(ax, ax));	// 40303 sub     ax, ax ;~ 1359:3165
cs=0x1359;eip=0x003167; 	X(PUSH(ax));	// 40304 push    ax ;~ 1359:3167
cs=0x1359;eip=0x003168; 	R(CALLF(restore_gamestate,0));	// 40305 call    restore_gamestate ;~ 1359:3168
cs=0x1359;eip=0x00316d; 	T(ADD(sp, 2));	// 40306 add     sp, 2 ;~ 1359:316D
cs=0x1359;eip=0x003170; 	T(MOV(ax, 0x32));	// 40307 mov     ax, 32h ; '2' ;~ 1359:3170
cs=0x1359;eip=0x003173; 	T(CWD);	// 40308 cwd ;~ 1359:3173
cs=0x1359;eip=0x003174; 	X(PUSH(dx));	// 40309 push    dx ;~ 1359:3174
cs=0x1359;eip=0x003175; 	X(PUSH(ax));	// 40310 push    ax ;~ 1359:3175
cs=0x1359;eip=0x003176; 	R(CALLF(timer_get_counter_unk,0));	// 40311 call    timer_get_counter_unk ;~ 1359:3176
cs=0x1359;eip=0x00317b; 	T(ADD(sp, 4));	// 40312 add     sp, 4 ;~ 1359:317B
cs=0x1359;eip=0x00317e; 	T(SUB(ax, ax));	// 40313 sub     ax, ax ;~ 1359:317E
cs=0x1359;eip=0x003180; 	X(PUSH(ax));	// 40314 push    ax ;~ 1359:3180
cs=0x1359;eip=0x003181; 	T(MOV(ax, 4));	// 40315 mov     ax, 4 ;~ 1359:3181
cs=0x1359;eip=0x003184; 	X(PUSH(ax));	// 40316 push    ax ;~ 1359:3184
cs=0x1359;eip=0x003185; 	T(MOV(ax, 2));	// 40317 mov     ax, 2 ;~ 1359:3185
cs=0x1359;eip=0x003188; 	X(PUSH(ax));	// 40318 push    ax ;~ 1359:3188
cs=0x1359;eip=0x003189; 	X(PUSH(cs));	// 40319 push    cs ;~ 1359:3189
cs=0x1359;eip=0x00318a; 	R(CALL(loop_game,0));	// 40320 call    near ptr loop_game ;~ 1359:318A
cs=0x1359;eip=0x00318d; 	T(ADD(sp, 6));	// 40321 add     sp, 6 ;~ 1359:318D
cs=0x1359;eip=0x003190; 	R(JMP(loc_24140));	// 40322 jmp     loc_24140 ;~ 1359:3190
loc_24d04:
	// 7171 
cs=0x1359;eip=0x003194; 	T(SUB(ax, ax));	// 40328 sub     ax, ax          ; jumptable 00024340 case 2 ;~ 1359:3194
cs=0x1359;eip=0x003196; 	X(PUSH(ax));	// 40329 push    ax ;~ 1359:3196
cs=0x1359;eip=0x003197; 	T(MOV(ax, 2));	// 40330 mov     ax, 2 ;~ 1359:3197
cs=0x1359;eip=0x00319a; 	X(PUSH(ax));	// 40331 push    ax ;~ 1359:319A
cs=0x1359;eip=0x00319b; 	X(PUSH(ax));	// 40332 push    ax ;~ 1359:319B
cs=0x1359;eip=0x00319c; 	X(PUSH(cs));	// 40333 push    cs ;~ 1359:319C
cs=0x1359;eip=0x00319d; 	R(CALL(loop_game,0));	// 40334 call    near ptr loop_game ;~ 1359:319D
cs=0x1359;eip=0x0031a0; 	T(ADD(sp, 6));	// 40335 add     sp, 6 ;~ 1359:31A0
cs=0x1359;eip=0x0031a3; 	X(MOV(byte_449e6, 3));	// 40336 mov     byte_449E6, 3 ;~ 1359:31A3
loc_24d18:
	// 7172 
cs=0x1359;eip=0x0031a8; 	X(MOV(is_in_replay, 0));	// 40339 mov     is_in_replay, 0 ;~ 1359:31A8
cs=0x1359;eip=0x0031ad; 	R(JMP(def_24340));	// 40340 jmp     def_24340       ; jumptable 00024340 default case ;~ 1359:31AD
ret_1359_31be:
	// 7173 
cs=0x1359;eip=0x0031be; 	R(JMP(def_24340));	// 40350 jmp     def_24340       ; jumptable 00024340 default case ;~ 1359:31BE
loc_24d32:
	// 7174 
cs=0x1359;eip=0x0031c2; 	T(CMP(ax, 0x2D));	// 40355 cmp     ax, 2Dh ; '-' ;~ 1359:31C2
cs=0x1359;eip=0x0031c5; 	R(JNZ(loc_24d3a));	// 40356 jnz     short loc_24D3A ;~ 1359:31C5
cs=0x1359;eip=0x0031c7; 	R(JMP(loc_2426e));	// 40357 jmp     loc_2426E ;~ 1359:31C7
loc_24d3a:
	// 7175 
cs=0x1359;eip=0x0031ca; 	T(CMP(ax, 0x4800));	// 40361 cmp     ax, 4800h ;~ 1359:31CA
cs=0x1359;eip=0x0031cd; 	R(JNZ(loc_24d42));	// 40362 jnz     short loc_24D42 ;~ 1359:31CD
cs=0x1359;eip=0x0031cf; 	R(JMP(loc_2430a));	// 40363 jmp     loc_2430A ;~ 1359:31CF
loc_24d42:
	// 7176 
cs=0x1359;eip=0x0031d2; 	T(CMP(ax, 0x4B00));	// 40367 cmp     ax, 4B00h ;~ 1359:31D2
cs=0x1359;eip=0x0031d5; 	R(JNZ(loc_24d4a));	// 40368 jnz     short loc_24D4A ;~ 1359:31D5
cs=0x1359;eip=0x0031d7; 	R(JMP(loc_242c8));	// 40369 jmp     loc_242C8 ;~ 1359:31D7
loc_24d4a:
	// 7177 
cs=0x1359;eip=0x0031da; 	T(CMP(ax, 0x4D00));	// 40373 cmp     ax, 4D00h ;~ 1359:31DA
cs=0x1359;eip=0x0031dd; 	R(JNZ(loc_24d52));	// 40374 jnz     short loc_24D52 ;~ 1359:31DD
cs=0x1359;eip=0x0031df; 	R(JMP(loc_242fe));	// 40375 jmp     loc_242FE ;~ 1359:31DF
loc_24d52:
	// 7178 
cs=0x1359;eip=0x0031e2; 	T(CMP(ax, 0x5000));	// 40379 cmp     ax, 5000h ;~ 1359:31E2
cs=0x1359;eip=0x0031e5; 	R(JNZ(loc_24d5a));	// 40380 jnz     short loc_24D5A ;~ 1359:31E5
cs=0x1359;eip=0x0031e7; 	R(JMP(loc_2431e));	// 40381 jmp     loc_2431E ;~ 1359:31E7
loc_24d5a:
	// 7179 
cs=0x1359;eip=0x0031ea; 	R(JMP(def_24340));	// 40385 jmp     def_24340       ; jumptable 00024340 default case ;~ 1359:31EA
loc_24d5e:
	// 7180 
cs=0x1359;eip=0x0031ee; 	X(POP(si));	// 40391 pop     si ;~ 1359:31EE
cs=0x1359;eip=0x0031ef; 	X(POP(di));	// 40392 pop     di ;~ 1359:31EF
cs=0x1359;eip=0x0031f0; 	T(MOV(sp, bp));	// 40393 mov     sp, bp ;~ 1359:31F0
cs=0x1359;eip=0x0031f2; 	X(POP(bp));	// 40394 pop     bp ;~ 1359:31F2
cs=0x1359;eip=0x0031f3; 	R(RETF(0));	// 40395 retf ;~ 1359:31F3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kdef_24340: 	goto def_24340;
        case m2c::kdef_24411: 	goto def_24411;
        case m2c::kframe_callback: 	goto frame_callback;
        case m2c::kfree_player_cars: 	goto free_player_cars;
        case m2c::khandle_ingame_kb_shortcuts: 	goto handle_ingame_kb_shortcuts;
        case m2c::kinit_unknown: 	goto init_unknown;
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
        case m2c::kloc_237d3: 	goto loc_237d3;
        case m2c::kloc_23870: 	goto loc_23870;
        case m2c::kloc_238b4: 	goto loc_238b4;
        case m2c::kloc_238de: 	goto loc_238de;
        case m2c::kloc_23946: 	goto loc_23946;
        case m2c::kloc_2394e: 	goto loc_2394e;
        case m2c::kloc_23988: 	goto loc_23988;
        case m2c::kloc_239a3: 	goto loc_239a3;
        case m2c::kloc_239d4: 	goto loc_239d4;
        case m2c::kloc_23a15: 	goto loc_23a15;
        case m2c::kloc_23a82: 	goto loc_23a82;
        case m2c::kloc_23ab1: 	goto loc_23ab1;
        case m2c::kloc_23ae0: 	goto loc_23ae0;
        case m2c::kloc_23aed: 	goto loc_23aed;
        case m2c::kloc_23af2: 	goto loc_23af2;
        case m2c::kloc_23b0c: 	goto loc_23b0c;
        case m2c::kloc_23b24: 	goto loc_23b24;
        case m2c::kloc_23b28: 	goto loc_23b28;
        case m2c::kloc_23b40: 	goto loc_23b40;
        case m2c::kloc_23b45: 	goto loc_23b45;
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
        case m2c::klocret_22696: 	goto locret_22696;
        case m2c::kmouse_minmax_position: 	goto mouse_minmax_position;
        case m2c::kremove_frame_callback: 	goto remove_frame_callback;
        case m2c::kreplay_unk2: 	goto replay_unk2;
        case m2c::kret_1359_1122: 	goto ret_1359_1122;
        case m2c::kret_1359_1178: 	goto ret_1359_1178;
        case m2c::kret_1359_11be: 	goto ret_1359_11be;
        case m2c::kret_1359_1b92: 	goto ret_1359_1b92;
        case m2c::kret_1359_1e49: 	goto ret_1359_1e49;
        case m2c::kret_1359_1f28: 	goto ret_1359_1f28;
        case m2c::kret_1359_1fdc: 	goto ret_1359_1fdc;
        case m2c::kret_1359_31be: 	goto ret_1359_31be;
        case m2c::kret_1359_9c3: 	goto ret_1359_9c3;
        case m2c::kret_1359_9f0: 	goto ret_1359_9f0;
        case m2c::kret_1359_a09: 	goto ret_1359_a09;
        case m2c::kret_1359_a2b: 	goto ret_1359_a2b;
        case m2c::krun_game: 	goto run_game;
        case m2c::kset_frame_callback: 	goto set_frame_callback;
        case m2c::ksub_2298c: 	goto sub_2298c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

