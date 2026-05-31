/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group3:
    _begin:
audio_add_driver_timer:
	// 44515 
cs=0x185c;eip=0x00000e; 	T(MOV(bx, offset(dseg,audiotimers)));	// 44516 mov     bx, offset audiotimers ;~ 185C:000E
cs=0x185c;eip=0x000011; 	J(JMP(loc_26bb9));	// 44517 jmp     short loc_26BB9 ;~ 185C:0011
loc_26bb3:
	// 7358 
cs=0x185c;eip=0x000013; 	X(MOV(*(raddr(ds,bx)), 0));	// 44521 mov     byte ptr [bx], 0 ;~ 185C:0013
cs=0x185c;eip=0x000016; 	T(ADD(bx, 0x4C));	// 44522 add     bx, 4Ch ; 'L' ;~ 185C:0016
loc_26bb9:
	// 7359 
cs=0x185c;eip=0x000019; 	T(CMP(bx, 0x6AD0));	// 44525 cmp     bx, 6AD0h ;~ 185C:0019
cs=0x185c;eip=0x00001d; 	J(JC(loc_26bb3));	// 44526 jb      short loc_26BB3 ;~ 185C:001D
cs=0x185c;eip=0x00001f; 	X(MOV(word_42240, 0x16));	// 44527 mov     word_42240, 16h ;~ 185C:001F
cs=0x185c;eip=0x000025; 	T(MOV(ax, m2c::kaudio_driver_timer));	// 44528 mov     ax, offset audio_driver_timer ;~ 185C:0025
cs=0x185c;eip=0x000028; 	T(MOV(dx, seg_offset(seg007)));	// 44529 mov     dx, seg seg007 ;~ 185C:0028
cs=0x185c;eip=0x00002b; 	X(PUSH(dx));	// 44530 push    dx ;~ 185C:002B
cs=0x185c;eip=0x00002c; 	X(PUSH(ax));	// 44531 push    ax ;~ 185C:002C
cs=0x185c;eip=0x00002d; 	J(CALLF(timer_reg_callback,0));	// 44532 call    timer_reg_callback ;~ 185C:002D
cs=0x185c;eip=0x000032; 	X(POP(bx));	// 44533 pop     bx ;~ 185C:0032
cs=0x185c;eip=0x000033; 	X(POP(bx));	// 44534 pop     bx ;~ 185C:0033
cs=0x185c;eip=0x000034; 	J(RETF(0));	// 44535 retf ;~ 185C:0034
audio_remove_driver_timer:
	// 44542 
cs=0x185c;eip=0x000035; 	X(PUSH(si));	// 44544 push    si ;~ 185C:0035
cs=0x185c;eip=0x000036; 	T(MOV(si, offset(dseg,audiotimers)));	// 44545 mov     si, offset audiotimers ;~ 185C:0036
cs=0x185c;eip=0x000039; 	J(JMP(loc_26bef));	// 44546 jmp     short loc_26BEF ;~ 185C:0039
loc_26bdb:
	// 7360 
cs=0x185c;eip=0x00003b; 	T(CMP(*(raddr(ds,si)), 1));	// 44550 cmp     byte ptr [si], 1 ;~ 185C:003B
cs=0x185c;eip=0x00003e; 	J(JNZ(loc_26be9));	// 44551 jnz     short loc_26BE9 ;~ 185C:003E
cs=0x185c;eip=0x000040; 	X(PUSH(*(dw*)(raddr(ds,si+2))));	// 44552 push    word ptr [si+2] ;~ 185C:0040
cs=0x185c;eip=0x000043; 	J(CALLF(sub_374de,0));	// 44553 call    sub_374DE ;~ 185C:0043
cs=0x185c;eip=0x000048; 	X(POP(bx));	// 44554 pop     bx ;~ 185C:0048
loc_26be9:
	// 7361 
cs=0x185c;eip=0x000049; 	X(MOV(*(raddr(ds,si)), 0));	// 44557 mov     byte ptr [si], 0 ;~ 185C:0049
cs=0x185c;eip=0x00004c; 	T(ADD(si, 0x4C));	// 44558 add     si, 4Ch ; 'L' ;~ 185C:004C
loc_26bef:
	// 7362 
cs=0x185c;eip=0x00004f; 	T(CMP(si, 0x6AD0));	// 44561 cmp     si, 6AD0h ;~ 185C:004F
cs=0x185c;eip=0x000053; 	J(JC(loc_26bdb));	// 44562 jb      short loc_26BDB ;~ 185C:0053
cs=0x185c;eip=0x000055; 	T(MOV(ax, m2c::kaudio_driver_timer));	// 44563 mov     ax, offset audio_driver_timer ;~ 185C:0055
cs=0x185c;eip=0x000058; 	T(MOV(dx, seg_offset(seg007)));	// 44564 mov     dx, seg seg007 ;~ 185C:0058
cs=0x185c;eip=0x00005b; 	X(PUSH(dx));	// 44565 push    dx ;~ 185C:005B
cs=0x185c;eip=0x00005c; 	X(PUSH(ax));	// 44566 push    ax ;~ 185C:005C
cs=0x185c;eip=0x00005d; 	J(CALLF(timer_remove_callback,0));	// 44567 call    timer_remove_callback ;~ 185C:005D
cs=0x185c;eip=0x000062; 	X(POP(bx));	// 44568 pop     bx ;~ 185C:0062
cs=0x185c;eip=0x000063; 	X(POP(bx));	// 44569 pop     bx ;~ 185C:0063
cs=0x185c;eip=0x000064; 	X(POP(si));	// 44570 pop     si ;~ 185C:0064
cs=0x185c;eip=0x000065; 	J(RETF(0));	// 44571 retf ;~ 185C:0065
audio_driver_timer:
	// 45026 
#undef var_4
#define var_4 -4
	// 45029 var_4           = word ptr -4 ;~ 185C:0403
#undef var_1
#define var_1 -1
	// 45030 var_1           = byte ptr -1 ;~ 185C:0403
cs=0x185c;eip=0x000403; 	X(PUSH(bp));	// 45032 push    bp ;~ 185C:0403
cs=0x185c;eip=0x000404; 	T(MOV(bp, sp));	// 45033 mov     bp, sp ;~ 185C:0404
cs=0x185c;eip=0x000406; 	T(SUB(sp, 4));	// 45034 sub     sp, 4 ;~ 185C:0406
cs=0x185c;eip=0x000409; 	X(PUSH(di));	// 45035 push    di ;~ 185C:0409
cs=0x185c;eip=0x00040a; 	X(PUSH(si));	// 45036 push    si ;~ 185C:040A
cs=0x185c;eip=0x00040b; 	J(CALLF(compare_ds_ss,0));	// 45037 call    compare_ds_ss ;~ 185C:040B
cs=0x185c;eip=0x000410; 	T(OR(ax, ax));	// 45038 or      ax, ax ;~ 185C:0410
cs=0x185c;eip=0x000412; 	J(JNZ(loc_26fb7));	// 45039 jnz     short loc_26FB7 ;~ 185C:0412
cs=0x185c;eip=0x000414; 	J(JMP(loc_27127));	// 45040 jmp     loc_27127 ;~ 185C:0414
loc_26fb7:
	// 7379 
cs=0x185c;eip=0x000417; 	X(INC(word_3eb2a));	// 45044 inc     word_3EB2A ;~ 185C:0417
cs=0x185c;eip=0x00041b; 	T(CMP(word_3eb2a, 2));	// 45045 cmp     word_3EB2A, 2 ;~ 185C:041B
cs=0x185c;eip=0x000420; 	J(JGE(loc_26fcc));	// 45046 jge     short loc_26FCC ;~ 185C:0420
cs=0x185c;eip=0x000422; 	T(CMP(byte_40634, 0));	// 45047 cmp     byte_40634, 0 ;~ 185C:0422
cs=0x185c;eip=0x000427; 	J(JZ(loc_26fcc));	// 45048 jz      short loc_26FCC ;~ 185C:0427
cs=0x185c;eip=0x000429; 	J(JMP(loc_27127));	// 45049 jmp     loc_27127 ;~ 185C:0429
loc_26fcc:
	// 7380 
cs=0x185c;eip=0x00042c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 45054 mov     [bp+var_4], 0 ;~ 185C:042C
cs=0x185c;eip=0x000431; 	T(MOV(si, offset(dseg,audiotimers)));	// 45055 mov     si, offset audiotimers ;~ 185C:0431
loc_26fd4:
	// 7381 
cs=0x185c;eip=0x000434; 	T(CMP(*(raddr(ds,si)), 0));	// 45058 cmp     byte ptr [si], 0 ;~ 185C:0434
cs=0x185c;eip=0x000437; 	J(JNZ(loc_26fdc));	// 45059 jnz     short loc_26FDC ;~ 185C:0437
cs=0x185c;eip=0x000439; 	J(JMP(loc_2710b));	// 45060 jmp     loc_2710B ;~ 185C:0439
loc_26fdc:
	// 7382 
cs=0x185c;eip=0x00043c; 	T(CMP(audioflag6, 0));	// 45064 cmp     audioflag6, 0 ;~ 185C:043C
cs=0x185c;eip=0x000441; 	J(JNZ(loc_26fe6));	// 45065 jnz     short loc_26FE6 ;~ 185C:0441
cs=0x185c;eip=0x000443; 	J(JMP(loc_2710b));	// 45066 jmp     loc_2710B ;~ 185C:0443
loc_26fe6:
	// 7383 
cs=0x185c;eip=0x000446; 	T(MOV(cl, 4));	// 45070 mov     cl, 4 ;~ 185C:0446
cs=0x185c;eip=0x000448; 	T(MOV(al, *(raddr(ds,si+0x0A))));	// 45071 mov     al, [si+0Ah] ;~ 185C:0448
cs=0x185c;eip=0x00044b; 	T(SUB(ah, ah));	// 45072 sub     ah, ah ;~ 185C:044B
cs=0x185c;eip=0x00044d; 	T(SHL(ax, cl));	// 45073 shl     ax, cl ;~ 185C:044D
cs=0x185c;eip=0x00044f; 	T(MOV(dx, *(dw*)(raddr(ds,si+4))));	// 45074 mov     dx, [si+4] ;~ 185C:044F
cs=0x185c;eip=0x000452; 	T(MOV(bx, dx));	// 45075 mov     bx, dx ;~ 185C:0452
cs=0x185c;eip=0x000454; 	T(SHL(dx, 1));	// 45076 shl     dx, 1 ;~ 185C:0454
cs=0x185c;eip=0x000456; 	T(ADD(dx, bx));	// 45077 add     dx, bx ;~ 185C:0456
cs=0x185c;eip=0x000458; 	T(SHL(dx, 1));	// 45078 shl     dx, 1 ;~ 185C:0458
cs=0x185c;eip=0x00045a; 	T(ADD(dx, bx));	// 45079 add     dx, bx ;~ 185C:045A
cs=0x185c;eip=0x00045c; 	T(ADD(ax, dx));	// 45080 add     ax, dx ;~ 185C:045C
cs=0x185c;eip=0x00045e; 	T(MOV(cl, 3));	// 45081 mov     cl, 3 ;~ 185C:045E
cs=0x185c;eip=0x000460; 	T(SHR(ax, cl));	// 45082 shr     ax, cl ;~ 185C:0460
cs=0x185c;eip=0x000462; 	X(MOV(*(dw*)(raddr(ds,si+4)), ax));	// 45083 mov     [si+4], ax ;~ 185C:0462
cs=0x185c;eip=0x000465; 	T(MOV(cl, 4));	// 45084 mov     cl, 4 ;~ 185C:0465
cs=0x185c;eip=0x000467; 	T(SHR(ax, cl));	// 45085 shr     ax, cl ;~ 185C:0467
cs=0x185c;eip=0x000469; 	X(MOV(*(raddr(ss,bp+var_1)), al));	// 45086 mov     [bp+var_1], al ;~ 185C:0469
cs=0x185c;eip=0x00046c; 	T(CMP(al, *(raddr(ds,si+0x0E))));	// 45087 cmp     al, [si+0Eh] ;~ 185C:046C
cs=0x185c;eip=0x00046f; 	J(JNZ(loc_27017));	// 45088 jnz     short loc_27017 ;~ 185C:046F
cs=0x185c;eip=0x000471; 	T(CMP(*(raddr(ds,si+0x1A)), 0));	// 45089 cmp     byte ptr [si+1Ah], 0 ;~ 185C:0471
cs=0x185c;eip=0x000475; 	J(JZ(loc_2705d));	// 45090 jz      short loc_2705D ;~ 185C:0475
loc_27017:
	// 7384 
cs=0x185c;eip=0x000477; 	T(MOV(al, *(raddr(ss,bp+var_1))));	// 45093 mov     al, [bp+var_1] ;~ 185C:0477
cs=0x185c;eip=0x00047a; 	T(SUB(ah, ah));	// 45094 sub     ah, ah ;~ 185C:047A
cs=0x185c;eip=0x00047c; 	X(PUSH(ax));	// 45095 push    ax ;~ 185C:047C
cs=0x185c;eip=0x00047d; 	X(PUSH(*(dw*)(raddr(ds,si+2))));	// 45096 push    word ptr [si+2] ;~ 185C:047D
cs=0x185c;eip=0x000480; 	T(MOV(di, ax));	// 45097 mov     di, ax ;~ 185C:0480
cs=0x185c;eip=0x000482; 	J(CALLF(audio_unk2,0));	// 45098 call    audio_unk2 ;~ 185C:0482
cs=0x185c;eip=0x000487; 	T(ADD(sp, 4));	// 45099 add     sp, 4 ;~ 185C:0487
cs=0x185c;eip=0x00048a; 	T(MOV(ax, di));	// 45100 mov     ax, di ;~ 185C:048A
cs=0x185c;eip=0x00048c; 	T(SUB(di, 0x0A));	// 45101 sub     di, 0Ah ;~ 185C:048C
cs=0x185c;eip=0x00048f; 	J(JNS(loc_27033));	// 45102 jns     short loc_27033 ;~ 185C:048F
cs=0x185c;eip=0x000491; 	T(SUB(di, di));	// 45103 sub     di, di ;~ 185C:0491
loc_27033:
	// 7385 
cs=0x185c;eip=0x000493; 	T(CMP(*(dw*)(raddr(ds,si+0x14)), 0x0FFFF));	// 45106 cmp     word ptr [si+14h], 0FFFFh ;~ 185C:0493
cs=0x185c;eip=0x000497; 	J(JZ(loc_27045));	// 45107 jz      short loc_27045 ;~ 185C:0497
cs=0x185c;eip=0x000499; 	X(PUSH(di));	// 45108 push    di ;~ 185C:0499
cs=0x185c;eip=0x00049a; 	X(PUSH(*(dw*)(raddr(ds,si+0x14))));	// 45109 push    word ptr [si+14h] ;~ 185C:049A
cs=0x185c;eip=0x00049d; 	J(CALLF(audio_unk2,0));	// 45110 call    audio_unk2 ;~ 185C:049D
cs=0x185c;eip=0x0004a2; 	T(ADD(sp, 4));	// 45111 add     sp, 4 ;~ 185C:04A2
loc_27045:
	// 7386 
cs=0x185c;eip=0x0004a5; 	T(CMP(*(dw*)(raddr(ds,si+0x16)), 0x0FFFF));	// 45114 cmp     word ptr [si+16h], 0FFFFh ;~ 185C:04A5
cs=0x185c;eip=0x0004a9; 	J(JZ(loc_27057));	// 45115 jz      short loc_27057 ;~ 185C:04A9
cs=0x185c;eip=0x0004ab; 	X(PUSH(di));	// 45116 push    di ;~ 185C:04AB
cs=0x185c;eip=0x0004ac; 	X(PUSH(*(dw*)(raddr(ds,si+0x16))));	// 45117 push    word ptr [si+16h] ;~ 185C:04AC
cs=0x185c;eip=0x0004af; 	J(CALLF(audio_unk2,0));	// 45118 call    audio_unk2 ;~ 185C:04AF
cs=0x185c;eip=0x0004b4; 	T(ADD(sp, 4));	// 45119 add     sp, 4 ;~ 185C:04B4
loc_27057:
	// 7387 
cs=0x185c;eip=0x0004b7; 	T(MOV(al, *(raddr(ss,bp+var_1))));	// 45122 mov     al, [bp+var_1] ;~ 185C:04B7
cs=0x185c;eip=0x0004ba; 	X(MOV(*(raddr(ds,si+0x0E)), al));	// 45123 mov     [si+0Eh], al ;~ 185C:04BA
loc_2705d:
	// 7388 
cs=0x185c;eip=0x0004bd; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 45126 mov     ax, [si+6] ;~ 185C:04BD
cs=0x185c;eip=0x0004c0; 	T(MOV(dx, *(dw*)(raddr(ds,si+8))));	// 45127 mov     dx, [si+8] ;~ 185C:04C0
cs=0x185c;eip=0x0004c3; 	T(MOV(cx, ax));	// 45128 mov     cx, ax ;~ 185C:04C3
cs=0x185c;eip=0x0004c5; 	T(MOV(bx, dx));	// 45129 mov     bx, dx ;~ 185C:04C5
cs=0x185c;eip=0x0004c7; 	T(SHL(ax, 1));	// 45130 shl     ax, 1 ;~ 185C:04C7
cs=0x185c;eip=0x0004c9; 	T(RCL(dx, 1));	// 45131 rcl     dx, 1 ;~ 185C:04C9
cs=0x185c;eip=0x0004cb; 	T(ADD(ax, cx));	// 45132 add     ax, cx ;~ 185C:04CB
cs=0x185c;eip=0x0004cd; 	T(ADC(dx, bx));	// 45133 adc     dx, bx ;~ 185C:04CD
cs=0x185c;eip=0x0004cf; 	T(SHL(ax, 1));	// 45134 shl     ax, 1 ;~ 185C:04CF
cs=0x185c;eip=0x0004d1; 	T(RCL(dx, 1));	// 45135 rcl     dx, 1 ;~ 185C:04D1
cs=0x185c;eip=0x0004d3; 	T(ADD(ax, cx));	// 45136 add     ax, cx ;~ 185C:04D3
cs=0x185c;eip=0x0004d5; 	T(ADC(dx, bx));	// 45137 adc     dx, bx ;~ 185C:04D5
cs=0x185c;eip=0x0004d7; 	T(MOV(cx, *(dw*)(raddr(ds,si+0x0C))));	// 45138 mov     cx, [si+0Ch] ;~ 185C:04D7
cs=0x185c;eip=0x0004da; 	T(SUB(bx, bx));	// 45139 sub     bx, bx ;~ 185C:04DA
cs=0x185c;eip=0x0004dc; 	T(SHL(cx, 1));	// 45140 shl     cx, 1 ;~ 185C:04DC
cs=0x185c;eip=0x0004de; 	T(RCL(bx, 1));	// 45141 rcl     bx, 1 ;~ 185C:04DE
cs=0x185c;eip=0x0004e0; 	T(SHL(cx, 1));	// 45142 shl     cx, 1 ;~ 185C:04E0
cs=0x185c;eip=0x0004e2; 	T(RCL(bx, 1));	// 45143 rcl     bx, 1 ;~ 185C:04E2
cs=0x185c;eip=0x0004e4; 	T(SHL(cx, 1));	// 45144 shl     cx, 1 ;~ 185C:04E4
cs=0x185c;eip=0x0004e6; 	T(RCL(bx, 1));	// 45145 rcl     bx, 1 ;~ 185C:04E6
cs=0x185c;eip=0x0004e8; 	T(SHL(cx, 1));	// 45146 shl     cx, 1 ;~ 185C:04E8
cs=0x185c;eip=0x0004ea; 	T(RCL(bx, 1));	// 45147 rcl     bx, 1 ;~ 185C:04EA
cs=0x185c;eip=0x0004ec; 	T(ADD(cx, ax));	// 45148 add     cx, ax ;~ 185C:04EC
cs=0x185c;eip=0x0004ee; 	T(ADC(bx, dx));	// 45149 adc     bx, dx ;~ 185C:04EE
cs=0x185c;eip=0x0004f0; 	T(SHR(bx, 1));	// 45150 shr     bx, 1 ;~ 185C:04F0
cs=0x185c;eip=0x0004f2; 	T(RCR(cx, 1));	// 45151 rcr     cx, 1 ;~ 185C:04F2
cs=0x185c;eip=0x0004f4; 	T(SHR(bx, 1));	// 45152 shr     bx, 1 ;~ 185C:04F4
cs=0x185c;eip=0x0004f6; 	T(RCR(cx, 1));	// 45153 rcr     cx, 1 ;~ 185C:04F6
cs=0x185c;eip=0x0004f8; 	T(SHR(bx, 1));	// 45154 shr     bx, 1 ;~ 185C:04F8
cs=0x185c;eip=0x0004fa; 	T(RCR(cx, 1));	// 45155 rcr     cx, 1 ;~ 185C:04FA
cs=0x185c;eip=0x0004fc; 	X(MOV(*(dw*)(raddr(ds,si+6)), cx));	// 45156 mov     [si+6], cx ;~ 185C:04FC
cs=0x185c;eip=0x0004ff; 	X(MOV(*(dw*)(raddr(ds,si+8)), bx));	// 45157 mov     [si+8], bx ;~ 185C:04FF
cs=0x185c;eip=0x000502; 	T(SHR(bx, 1));	// 45158 shr     bx, 1 ;~ 185C:0502
cs=0x185c;eip=0x000504; 	T(RCR(cx, 1));	// 45159 rcr     cx, 1 ;~ 185C:0504
cs=0x185c;eip=0x000506; 	T(SHR(bx, 1));	// 45160 shr     bx, 1 ;~ 185C:0506
cs=0x185c;eip=0x000508; 	T(RCR(cx, 1));	// 45161 rcr     cx, 1 ;~ 185C:0508
cs=0x185c;eip=0x00050a; 	T(SHR(bx, 1));	// 45162 shr     bx, 1 ;~ 185C:050A
cs=0x185c;eip=0x00050c; 	T(RCR(cx, 1));	// 45163 rcr     cx, 1 ;~ 185C:050C
cs=0x185c;eip=0x00050e; 	T(SHR(bx, 1));	// 45164 shr     bx, 1 ;~ 185C:050E
cs=0x185c;eip=0x000510; 	T(RCR(cx, 1));	// 45165 rcr     cx, 1 ;~ 185C:0510
cs=0x185c;eip=0x000512; 	T(MOV(di, cx));	// 45166 mov     di, cx ;~ 185C:0512
cs=0x185c;eip=0x000514; 	T(CMP(cx, *(dw*)(raddr(ds,si+0x10))));	// 45167 cmp     cx, [si+10h] ;~ 185C:0514
cs=0x185c;eip=0x000517; 	J(JNZ(loc_270bf));	// 45168 jnz     short loc_270BF ;~ 185C:0517
cs=0x185c;eip=0x000519; 	T(CMP(*(raddr(ds,si+0x1A)), 0));	// 45169 cmp     byte ptr [si+1Ah], 0 ;~ 185C:0519
cs=0x185c;eip=0x00051d; 	J(JZ(loc_270d4));	// 45170 jz      short loc_270D4 ;~ 185C:051D
loc_270bf:
	// 7389 
cs=0x185c;eip=0x00051f; 	T(CMP(*(dw*)(raddr(ds,si+0x12)), 0x0FFFF));	// 45173 cmp     word ptr [si+12h], 0FFFFh ;~ 185C:051F
cs=0x185c;eip=0x000523; 	J(JZ(loc_270d4));	// 45174 jz      short loc_270D4 ;~ 185C:0523
cs=0x185c;eip=0x000525; 	X(PUSH(di));	// 45175 push    di ;~ 185C:0525
cs=0x185c;eip=0x000526; 	X(PUSH(*(dw*)(raddr(ds,si+0x12))));	// 45176 push    word ptr [si+12h] ;~ 185C:0526
cs=0x185c;eip=0x000529; 	J(CALLF(sub_39088,0));	// 45177 call    sub_39088 ;~ 185C:0529
cs=0x185c;eip=0x00052e; 	T(ADD(sp, 4));	// 45178 add     sp, 4 ;~ 185C:052E
cs=0x185c;eip=0x000531; 	X(MOV(*(dw*)(raddr(ds,si+0x10)), di));	// 45179 mov     [si+10h], di ;~ 185C:0531
loc_270d4:
	// 7390 
cs=0x185c;eip=0x000534; 	X(MOV(*(raddr(ds,si+0x1A)), 0));	// 45183 mov     byte ptr [si+1Ah], 0 ;~ 185C:0534
cs=0x185c;eip=0x000538; 	T(CMP(*(raddr(ds,si+0x1B)), 0));	// 45184 cmp     byte ptr [si+1Bh], 0 ;~ 185C:0538
cs=0x185c;eip=0x00053c; 	J(JZ(loc_2710b));	// 45185 jz      short loc_2710B ;~ 185C:053C
cs=0x185c;eip=0x00053e; 	T(CMP(*(raddr(ds,si+1)), 0));	// 45186 cmp     byte ptr [si+1], 0 ;~ 185C:053E
cs=0x185c;eip=0x000542; 	J(JZ(loc_270ee));	// 45187 jz      short loc_270EE ;~ 185C:0542
cs=0x185c;eip=0x000544; 	X(PUSH(*(dw*)(raddr(ds,si+0x14))));	// 45188 push    word ptr [si+14h] ;~ 185C:0544
cs=0x185c;eip=0x000547; 	J(CALLF(audio_init_chunk2,0));	// 45189 call    audio_init_chunk2 ;~ 185C:0547
cs=0x185c;eip=0x00054c; 	J(JMP(loc_27104));	// 45190 jmp     short loc_27104 ;~ 185C:054C
loc_270ee:
	// 7391 
cs=0x185c;eip=0x00054e; 	X(PUSH(*(dw*)(raddr(ds,si+0x14))));	// 45194 push    word ptr [si+14h] ;~ 185C:054E
cs=0x185c;eip=0x000551; 	J(CALLF(sub_3771e,0));	// 45195 call    sub_3771E ;~ 185C:0551
cs=0x185c;eip=0x000556; 	T(ADD(sp, 2));	// 45196 add     sp, 2 ;~ 185C:0556
cs=0x185c;eip=0x000559; 	T(OR(ax, ax));	// 45197 or      ax, ax ;~ 185C:0559
cs=0x185c;eip=0x00055b; 	J(JZ(loc_2710b));	// 45198 jz      short loc_2710B ;~ 185C:055B
cs=0x185c;eip=0x00055d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 45199 push    [bp+var_4] ;~ 185C:055D
cs=0x185c;eip=0x000560; 	X(PUSH(cs));	// 45200 push    cs ;~ 185C:0560
cs=0x185c;eip=0x000561; 	J(CALL(audio_op_unk,0));	// 45201 call    near ptr audio_op_unk ;~ 185C:0561
loc_27104:
	// 7392 
cs=0x185c;eip=0x000564; 	T(ADD(sp, 2));	// 45204 add     sp, 2 ;~ 185C:0564
cs=0x185c;eip=0x000567; 	X(MOV(*(raddr(ds,si+0x1B)), 0));	// 45205 mov     byte ptr [si+1Bh], 0 ;~ 185C:0567
loc_2710b:
	// 7393 
cs=0x185c;eip=0x00056b; 	T(ADD(si, 0x4C));	// 45209 add     si, 4Ch ; 'L' ;~ 185C:056B
cs=0x185c;eip=0x00056e; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 45210 inc     [bp+var_4] ;~ 185C:056E
cs=0x185c;eip=0x000571; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x19));	// 45211 cmp     [bp+var_4], 19h ;~ 185C:0571
cs=0x185c;eip=0x000575; 	J(JGE(loc_2711a));	// 45212 jge     short loc_2711A ;~ 185C:0575
cs=0x185c;eip=0x000577; 	J(JMP(loc_26fd4));	// 45213 jmp     loc_26FD4 ;~ 185C:0577
loc_2711a:
	// 7394 
cs=0x185c;eip=0x00057a; 	T(CMP(word_3eb2a, 2));	// 45217 cmp     word_3EB2A, 2 ;~ 185C:057A
cs=0x185c;eip=0x00057f; 	J(JL(loc_27127));	// 45218 jl      short loc_27127 ;~ 185C:057F
cs=0x185c;eip=0x000581; 	X(MOV(word_3eb2a, 0));	// 45219 mov     word_3EB2A, 0 ;~ 185C:0581
loc_27127:
	// 7395 
cs=0x185c;eip=0x000587; 	X(POP(si));	// 45223 pop     si ;~ 185C:0587
cs=0x185c;eip=0x000588; 	X(POP(di));	// 45224 pop     di ;~ 185C:0588
cs=0x185c;eip=0x000589; 	T(MOV(sp, bp));	// 45225 mov     sp, bp ;~ 185C:0589
cs=0x185c;eip=0x00058b; 	X(POP(bp));	// 45226 pop     bp ;~ 185C:058B
cs=0x185c;eip=0x00058c; 	J(RETF(0));	// 45227 retf ;~ 185C:058C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_add_driver_timer: 	goto audio_add_driver_timer;
        case m2c::kaudio_driver_timer: 	goto audio_driver_timer;
        case m2c::kaudio_remove_driver_timer: 	goto audio_remove_driver_timer;
        case m2c::kloc_26bb3: 	goto loc_26bb3;
        case m2c::kloc_26bb9: 	goto loc_26bb9;
        case m2c::kloc_26bdb: 	goto loc_26bdb;
        case m2c::kloc_26be9: 	goto loc_26be9;
        case m2c::kloc_26bef: 	goto loc_26bef;
        case m2c::kloc_26fb7: 	goto loc_26fb7;
        case m2c::kloc_26fcc: 	goto loc_26fcc;
        case m2c::kloc_26fd4: 	goto loc_26fd4;
        case m2c::kloc_26fdc: 	goto loc_26fdc;
        case m2c::kloc_26fe6: 	goto loc_26fe6;
        case m2c::kloc_27017: 	goto loc_27017;
        case m2c::kloc_27033: 	goto loc_27033;
        case m2c::kloc_27045: 	goto loc_27045;
        case m2c::kloc_27057: 	goto loc_27057;
        case m2c::kloc_2705d: 	goto loc_2705d;
        case m2c::kloc_270bf: 	goto loc_270bf;
        case m2c::kloc_270d4: 	goto loc_270d4;
        case m2c::kloc_270ee: 	goto loc_270ee;
        case m2c::kloc_27104: 	goto loc_27104;
        case m2c::kloc_2710b: 	goto loc_2710b;
        case m2c::kloc_2711a: 	goto loc_2711a;
        case m2c::kloc_27127: 	goto loc_27127;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool pad_id(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    pad_id:
    _begin:
#undef arg_0
#define arg_0 6
	// 44582 arg_0           = dword ptr  6 ;~ 185C:0066
cs=0x185c;eip=0x000066; 	X(PUSH(bp));	// 44584 push    bp ;~ 185C:0066
cs=0x185c;eip=0x000067; 	T(MOV(bp, sp));	// 44585 mov     bp, sp ;~ 185C:0067
cs=0x185c;eip=0x000069; 	X(PUSH(si));	// 44586 push    si ;~ 185C:0069
cs=0x185c;eip=0x00006a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 44587 les     bx, [bp+arg_0] ;~ 185C:006A
cs=0x185c;eip=0x00006d; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 44588 mov     ax, es:[bx] ;~ 185C:006D
cs=0x185c;eip=0x000070; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 44589 mov     dx, es:[bx+2] ;~ 185C:0070
cs=0x185c;eip=0x000074; 	X(MOV(word_42242, ax));	// 44590 mov     word_42242, ax ;~ 185C:0074
cs=0x185c;eip=0x000077; 	X(MOV(word_42244, dx));	// 44591 mov     word_42244, dx ;~ 185C:0077
cs=0x185c;eip=0x00007b; 	X(MOV(byte_42246, 0));	// 44592 mov     byte_42246, 0 ;~ 185C:007B
cs=0x185c;eip=0x000080; 	T(SUB(si, si));	// 44593 sub     si, si ;~ 185C:0080
loc_26c22:
	// 7363 
cs=0x185c;eip=0x000082; 	T(CMP(*(db*)(((db*)&word_42242)+si), 0));	// 44596 cmp     byte ptr word_42242[si], 0 ;~ 185C:0082
cs=0x185c;eip=0x000087; 	J(JNZ(loc_26c2e));	// 44597 jnz     short loc_26C2E ;~ 185C:0087
cs=0x185c;eip=0x000089; 	X(MOV(*(db*)(((db*)&word_42242)+si), 0x20));	// 44598 mov     byte ptr word_42242[si], 20h ; ' ' ;~ 185C:0089
loc_26c2e:
	// 7364 
cs=0x185c;eip=0x00008e; 	T(INC(si));	// 44601 inc     si ;~ 185C:008E
cs=0x185c;eip=0x00008f; 	T(CMP(si, 4));	// 44602 cmp     si, 4 ;~ 185C:008F
cs=0x185c;eip=0x000092; 	J(JL(loc_26c22));	// 44603 jl      short loc_26C22 ;~ 185C:0092
cs=0x185c;eip=0x000094; 	T(MOV(ax, offset(dseg,word_42242)));	// 44604 mov     ax, offset word_42242 ;~ 185C:0094
cs=0x185c;eip=0x000097; 	X(POP(si));	// 44605 pop     si ;~ 185C:0097
cs=0x185c;eip=0x000098; 	T(MOV(sp, bp));	// 44606 mov     sp, bp ;~ 185C:0098
cs=0x185c;eip=0x00009a; 	X(POP(bp));	// 44607 pop     bp ;~ 185C:009A
cs=0x185c;eip=0x00009b; 	J(RETF(0));	// 44608 retf ;~ 185C:009B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_26c22: 	goto loc_26c22;
        case m2c::kloc_26c2e: 	goto loc_26c2e;
        case m2c::kpad_id: 	goto pad_id;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_init_engine(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_init_engine:
    _begin:
#undef var_18
#define var_18 -0x18
	// 44619 var_18          = dword ptr -18h ;~ 185C:009C
#undef var_14
#define var_14 -0x14
	// 44620 var_14          = word ptr -14h ;~ 185C:009C
#undef var_12
#define var_12 -0x12
	// 44621 var_12          = word ptr -12h ;~ 185C:009C
#undef var_10
#define var_10 -0x10
	// 44622 var_10          = word ptr -10h ;~ 185C:009C
#undef var_e
#define var_e -0x0E
	// 44623 var_E           = word ptr -0Eh ;~ 185C:009C
#undef var_8
#define var_8 -8
	// 44624 var_8           = dword ptr -8 ;~ 185C:009C
#undef var_4
#define var_4 -4
	// 44625 var_4           = word ptr -4 ;~ 185C:009C
#undef var_2
#define var_2 -2
	// 44626 var_2           = word ptr -2 ;~ 185C:009C
#undef arg_2
#define arg_2 8
	// 44627 arg_2           = word ptr  8 ;~ 185C:009C
#undef arg_4
#define arg_4 0x0A
	// 44628 arg_4           = word ptr  0Ah ;~ 185C:009C
#undef arg_6
#define arg_6 0x0C
	// 44629 arg_6           = word ptr  0Ch ;~ 185C:009C
#undef arg_8
#define arg_8 0x0E
	// 44630 arg_8           = word ptr  0Eh ;~ 185C:009C
#undef arg_a
#define arg_a 0x10
	// 44631 arg_A           = word ptr  10h ;~ 185C:009C
#undef arg_c
#define arg_c 0x12
	// 44632 arg_C           = word ptr  12h ;~ 185C:009C
cs=0x185c;eip=0x00009c; 	X(PUSH(bp));	// 44634 push    bp ;~ 185C:009C
cs=0x185c;eip=0x00009d; 	T(MOV(bp, sp));	// 44635 mov     bp, sp ;~ 185C:009D
cs=0x185c;eip=0x00009f; 	T(SUB(sp, 0x18));	// 44636 sub     sp, 18h ;~ 185C:009F
cs=0x185c;eip=0x0000a2; 	X(PUSH(di));	// 44637 push    di ;~ 185C:00A2
cs=0x185c;eip=0x0000a3; 	X(PUSH(si));	// 44638 push    si ;~ 185C:00A3
cs=0x185c;eip=0x0000a4; 	T(MOV(di, 0x0FFFF));	// 44639 mov     di, 0FFFFh ;~ 185C:00A4
cs=0x185c;eip=0x0000a7; 	T(SUB(dx, dx));	// 44640 sub     dx, dx ;~ 185C:00A7
cs=0x185c;eip=0x0000a9; 	T(MOV(bx, offset(dseg,audiotimers)));	// 44641 mov     bx, offset audiotimers ;~ 185C:00A9
cs=0x185c;eip=0x0000ac; 	J(JMP(loc_26c5d));	// 44642 jmp     short loc_26C5D ;~ 185C:00AC
loc_26c4e:
	// 7365 
cs=0x185c;eip=0x0000ae; 	T(OR(di, di));	// 44646 or      di, di ;~ 185C:00AE
cs=0x185c;eip=0x0000b0; 	J(JGE(loc_26c63));	// 44647 jge     short loc_26C63 ;~ 185C:00B0
cs=0x185c;eip=0x0000b2; 	T(CMP(*(raddr(ds,bx)), 0));	// 44648 cmp     byte ptr [bx], 0 ;~ 185C:00B2
cs=0x185c;eip=0x0000b5; 	J(JNZ(loc_26c59));	// 44649 jnz     short loc_26C59 ;~ 185C:00B5
cs=0x185c;eip=0x0000b7; 	T(MOV(di, dx));	// 44650 mov     di, dx ;~ 185C:00B7
loc_26c59:
	// 7366 
cs=0x185c;eip=0x0000b9; 	T(ADD(bx, 0x4C));	// 44653 add     bx, 4Ch ; 'L' ;~ 185C:00B9
cs=0x185c;eip=0x0000bc; 	T(INC(dx));	// 44654 inc     dx ;~ 185C:00BC
loc_26c5d:
	// 7367 
cs=0x185c;eip=0x0000bd; 	T(CMP(bx, offset(dseg,word_42240)));	// 44657 cmp     bx, offset word_42240 ; end of audiotimer ;~ 185C:00BD
cs=0x185c;eip=0x0000c1; 	J(JC(loc_26c4e));	// 44658 jb      short loc_26C4E ;~ 185C:00C1
loc_26c63:
	// 7368 
cs=0x185c;eip=0x0000c3; 	T(OR(di, di));	// 44661 or      di, di ;~ 185C:00C3
cs=0x185c;eip=0x0000c5; 	J(JGE(loc_26c6a));	// 44662 jge     short loc_26C6A ;~ 185C:00C5
cs=0x185c;eip=0x0000c7; 	J(JMP(loc_26ee4));	// 44663 jmp     loc_26EE4 ;~ 185C:00C7
loc_26c6a:
	// 7369 
cs=0x185c;eip=0x0000ca; 	T(MOV(ax, di));	// 44667 mov     ax, di ;~ 185C:00CA
cs=0x185c;eip=0x0000cc; 	T(MOV(cx, 0x4C));	// 44668 mov     cx, 4Ch ; 'L' ;~ 185C:00CC
cs=0x185c;eip=0x0000cf; 	T(IMUL1_2(cx));	// 44669 imul    cx ;~ 185C:00CF
cs=0x185c;eip=0x0000d1; 	T(ADD(ax, offset(dseg,audiotimers)));	// 44670 add     ax, offset audiotimers ;~ 185C:00D1
cs=0x185c;eip=0x0000d4; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 44671 mov     [bp+var_14], ax ;~ 185C:00D4
cs=0x185c;eip=0x0000d7; 	T(ADD(ax, 0x1C));	// 44672 add     ax, 1Ch ;~ 185C:00D7
cs=0x185c;eip=0x0000da; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 44673 mov     [bp+var_12], ax ;~ 185C:00DA
cs=0x185c;eip=0x0000dd; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ds));	// 44674 mov     [bp+var_10], ds ;~ 185C:00DD
cs=0x185c;eip=0x0000e0; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 44675 mov     cx, [bp+arg_2] ;~ 185C:00E0
cs=0x185c;eip=0x0000e3; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 44676 mov     dx, [bp+arg_4] ;~ 185C:00E3
cs=0x185c;eip=0x0000e6; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), cx));	// 44677 mov     word ptr [bp+var_8], cx ;~ 185C:00E6
cs=0x185c;eip=0x0000e9; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 44678 mov     word ptr [bp+var_8+2], dx ;~ 185C:00E9
cs=0x185c;eip=0x0000ec; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 44679 mov     [bp+var_4], ax ;~ 185C:00EC
cs=0x185c;eip=0x0000ef; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 44680 mov     [bp+var_2], 0 ;~ 185C:00EF
cs=0x185c;eip=0x0000f4; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), di));	// 44681 mov     [bp+var_E], di ;~ 185C:00F4
cs=0x185c;eip=0x0000f7; 	J(JMP(loc_26cb5));	// 44682 jmp     short loc_26CB5 ;~ 185C:00F7
loc_26c99:
	// 7370 
cs=0x185c;eip=0x0000f9; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 44686 les     bx, [bp+var_8] ;~ 185C:00F9
cs=0x185c;eip=0x0000fc; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_8))), 1));	// 44687 add     word ptr [bp+var_8], 1 ;~ 185C:00FC
cs=0x185c;eip=0x000100; 	J(JNC(loc_26ca7));	// 44688 jnb     short loc_26CA7 ;~ 185C:0100
cs=0x185c;eip=0x000102; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), 0x1000));	// 44689 add     word ptr [bp+var_8+2], 1000h ;~ 185C:0102
loc_26ca7:
	// 7371 
cs=0x185c;eip=0x000107; 	T(MOV(al, *(raddr(es,bx))));	// 44692 mov     al, es:[bx] ;~ 185C:0107
cs=0x185c;eip=0x00010a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 44693 mov     bx, [bp+var_4] ;~ 185C:010A
cs=0x185c;eip=0x00010d; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 44694 inc     [bp+var_4] ;~ 185C:010D
cs=0x185c;eip=0x000110; 	X(MOV(*(raddr(ds,bx)), al));	// 44695 mov     [bx], al ;~ 185C:0110
cs=0x185c;eip=0x000112; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 44696 inc     [bp+var_2] ;~ 185C:0112
loc_26cb5:
	// 7372 
cs=0x185c;eip=0x000115; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x30));	// 44699 cmp     [bp+var_2], 30h ; '0' ;~ 185C:0115
cs=0x185c;eip=0x000119; 	J(JL(loc_26c99));	// 44700 jl      short loc_26C99 ;~ 185C:0119
cs=0x185c;eip=0x00011b; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_12))));	// 44701 mov     di, [bp+var_12] ;~ 185C:011B
cs=0x185c;eip=0x00011e; 	T(MOV(es, *(dw*)(raddr(ss,bp+var_10))));	// 44702 mov     es, [bp+var_10] ;~ 185C:011E
cs=0x185c;eip=0x000121; 	T(CMP(*(raddr(es,di+6)), 0));	// 44703 cmp     byte ptr es:[di+6], 0 ;~ 185C:0121
cs=0x185c;eip=0x000126; 	J(JZ(loc_26ccb));	// 44704 jz      short loc_26CCB ;~ 185C:0126
cs=0x185c;eip=0x000128; 	J(JMP(loc_26e61));	// 44705 jmp     loc_26E61 ;~ 185C:0128
loc_26ccb:
	// 7373 
cs=0x185c;eip=0x00012b; 	X(PUSH(*(dw*)(raddr(es,di+0x0A))));	// 44709 push    word ptr es:[di+0Ah] ;~ 185C:012B
cs=0x185c;eip=0x00012f; 	X(PUSH(*(dw*)(raddr(es,di+8))));	// 44710 push    word ptr es:[di+8] ;~ 185C:012F
cs=0x185c;eip=0x000133; 	T(MOV(si, es));	// 44711 mov     si, es ;~ 185C:0133
cs=0x185c;eip=0x000135; 	X(PUSH(cs));	// 44712 push    cs ;~ 185C:0135
cs=0x185c;eip=0x000136; 	J(CALL(pad_id,0));	// 44713 call    near ptr pad_id ;~ 185C:0136
cs=0x185c;eip=0x000139; 	X(POP(bx));	// 44714 pop     bx ;~ 185C:0139
cs=0x185c;eip=0x00013a; 	X(POP(bx));	// 44715 pop     bx ;~ 185C:013A
cs=0x185c;eip=0x00013b; 	X(PUSH(ax));	// 44716 push    ax ;~ 185C:013B
cs=0x185c;eip=0x00013c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 44717 push    [bp+arg_8] ;~ 185C:013C
cs=0x185c;eip=0x00013f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 44718 push    [bp+arg_6] ;~ 185C:013F
cs=0x185c;eip=0x000142; 	J(CALLF(locate_shape_fatal,0));	// 44719 call    locate_shape_fatal ;~ 185C:0142
cs=0x185c;eip=0x000147; 	T(ADD(sp, 6));	// 44720 add     sp, 6 ;~ 185C:0147
cs=0x185c;eip=0x00014a; 	T(MOV(es, si));	// 44721 mov     es, si ;~ 185C:014A
cs=0x185c;eip=0x00014c; 	X(MOV(*(dw*)(raddr(es,di+8)), ax));	// 44722 mov     es:[di+8], ax ;~ 185C:014C
cs=0x185c;eip=0x000150; 	X(MOV(*(dw*)(raddr(es,di+0x0A)), dx));	// 44723 mov     es:[di+0Ah], dx ;~ 185C:0150
cs=0x185c;eip=0x000154; 	X(PUSH(*(dw*)(raddr(es,di+0x12))));	// 44724 push    word ptr es:[di+12h] ;~ 185C:0154
cs=0x185c;eip=0x000158; 	X(PUSH(*(dw*)(raddr(es,di+0x10))));	// 44725 push    word ptr es:[di+10h] ;~ 185C:0158
cs=0x185c;eip=0x00015c; 	X(PUSH(cs));	// 44726 push    cs ;~ 185C:015C
cs=0x185c;eip=0x00015d; 	J(CALL(pad_id,0));	// 44727 call    near ptr pad_id ;~ 185C:015D
cs=0x185c;eip=0x000160; 	X(POP(bx));	// 44728 pop     bx ;~ 185C:0160
cs=0x185c;eip=0x000161; 	X(POP(bx));	// 44729 pop     bx ;~ 185C:0161
cs=0x185c;eip=0x000162; 	X(PUSH(ax));	// 44730 push    ax ;~ 185C:0162
cs=0x185c;eip=0x000163; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 44731 push    [bp+arg_8] ;~ 185C:0163
cs=0x185c;eip=0x000166; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 44732 push    [bp+arg_6] ;~ 185C:0166
cs=0x185c;eip=0x000169; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 44733 push    [bp+arg_C] ;~ 185C:0169
cs=0x185c;eip=0x00016c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 44734 push    [bp+arg_A] ;~ 185C:016C
cs=0x185c;eip=0x00016f; 	J(CALLF(init_audio_resources,0));	// 44735 call    init_audio_resources ;~ 185C:016F
cs=0x185c;eip=0x000174; 	T(ADD(sp, 0x0A));	// 44736 add     sp, 0Ah ;~ 185C:0174
cs=0x185c;eip=0x000177; 	T(MOV(es, si));	// 44737 mov     es, si ;~ 185C:0177
cs=0x185c;eip=0x000179; 	X(MOV(*(dw*)(raddr(es,di+0x10)), ax));	// 44738 mov     es:[di+10h], ax ;~ 185C:0179
cs=0x185c;eip=0x00017d; 	X(MOV(*(dw*)(raddr(es,di+0x12)), dx));	// 44739 mov     es:[di+12h], dx ;~ 185C:017D
cs=0x185c;eip=0x000181; 	X(PUSH(*(dw*)(raddr(es,di+0x16))));	// 44740 push    word ptr es:[di+16h] ;~ 185C:0181
cs=0x185c;eip=0x000185; 	X(PUSH(*(dw*)(raddr(es,di+0x14))));	// 44741 push    word ptr es:[di+14h] ;~ 185C:0185
cs=0x185c;eip=0x000189; 	X(PUSH(cs));	// 44742 push    cs ;~ 185C:0189
cs=0x185c;eip=0x00018a; 	J(CALL(pad_id,0));	// 44743 call    near ptr pad_id ;~ 185C:018A
cs=0x185c;eip=0x00018d; 	X(POP(bx));	// 44744 pop     bx ;~ 185C:018D
cs=0x185c;eip=0x00018e; 	X(POP(bx));	// 44745 pop     bx ;~ 185C:018E
cs=0x185c;eip=0x00018f; 	X(PUSH(ax));	// 44746 push    ax ;~ 185C:018F
cs=0x185c;eip=0x000190; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 44747 push    [bp+arg_8] ;~ 185C:0190
cs=0x185c;eip=0x000193; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 44748 push    [bp+arg_6] ;~ 185C:0193
cs=0x185c;eip=0x000196; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 44749 push    [bp+arg_C] ;~ 185C:0196
cs=0x185c;eip=0x000199; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 44750 push    [bp+arg_A] ;~ 185C:0199
cs=0x185c;eip=0x00019c; 	J(CALLF(init_audio_resources,0));	// 44751 call    init_audio_resources ;~ 185C:019C
cs=0x185c;eip=0x0001a1; 	T(ADD(sp, 0x0A));	// 44752 add     sp, 0Ah ;~ 185C:01A1
cs=0x185c;eip=0x0001a4; 	T(MOV(es, si));	// 44753 mov     es, si ;~ 185C:01A4
cs=0x185c;eip=0x0001a6; 	X(MOV(*(dw*)(raddr(es,di+0x14)), ax));	// 44754 mov     es:[di+14h], ax ;~ 185C:01A6
cs=0x185c;eip=0x0001aa; 	X(MOV(*(dw*)(raddr(es,di+0x16)), dx));	// 44755 mov     es:[di+16h], dx ;~ 185C:01AA
cs=0x185c;eip=0x0001ae; 	X(PUSH(*(dw*)(raddr(es,di+0x1A))));	// 44756 push    word ptr es:[di+1Ah] ;~ 185C:01AE
cs=0x185c;eip=0x0001b2; 	X(PUSH(*(dw*)(raddr(es,di+0x18))));	// 44757 push    word ptr es:[di+18h] ;~ 185C:01B2
cs=0x185c;eip=0x0001b6; 	X(PUSH(cs));	// 44758 push    cs ;~ 185C:01B6
cs=0x185c;eip=0x0001b7; 	J(CALL(pad_id,0));	// 44759 call    near ptr pad_id ;~ 185C:01B7
cs=0x185c;eip=0x0001ba; 	X(POP(bx));	// 44760 pop     bx ;~ 185C:01BA
cs=0x185c;eip=0x0001bb; 	X(POP(bx));	// 44761 pop     bx ;~ 185C:01BB
cs=0x185c;eip=0x0001bc; 	X(PUSH(ax));	// 44762 push    ax ;~ 185C:01BC
cs=0x185c;eip=0x0001bd; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 44763 push    [bp+arg_8] ;~ 185C:01BD
cs=0x185c;eip=0x0001c0; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 44764 push    [bp+arg_6] ;~ 185C:01C0
cs=0x185c;eip=0x0001c3; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 44765 push    [bp+arg_C] ;~ 185C:01C3
cs=0x185c;eip=0x0001c6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 44766 push    [bp+arg_A] ;~ 185C:01C6
cs=0x185c;eip=0x0001c9; 	J(CALLF(init_audio_resources,0));	// 44767 call    init_audio_resources ;~ 185C:01C9
cs=0x185c;eip=0x0001ce; 	T(ADD(sp, 0x0A));	// 44768 add     sp, 0Ah ;~ 185C:01CE
cs=0x185c;eip=0x0001d1; 	T(MOV(es, si));	// 44769 mov     es, si ;~ 185C:01D1
cs=0x185c;eip=0x0001d3; 	X(MOV(*(dw*)(raddr(es,di+0x18)), ax));	// 44770 mov     es:[di+18h], ax ;~ 185C:01D3
cs=0x185c;eip=0x0001d7; 	X(MOV(*(dw*)(raddr(es,di+0x1A)), dx));	// 44771 mov     es:[di+1Ah], dx ;~ 185C:01D7
cs=0x185c;eip=0x0001db; 	X(PUSH(*(dw*)(raddr(es,di+0x1E))));	// 44772 push    word ptr es:[di+1Eh] ;~ 185C:01DB
cs=0x185c;eip=0x0001df; 	X(PUSH(*(dw*)(raddr(es,di+0x1C))));	// 44773 push    word ptr es:[di+1Ch] ;~ 185C:01DF
cs=0x185c;eip=0x0001e3; 	X(PUSH(cs));	// 44774 push    cs ;~ 185C:01E3
cs=0x185c;eip=0x0001e4; 	J(CALL(pad_id,0));	// 44775 call    near ptr pad_id ;~ 185C:01E4
cs=0x185c;eip=0x0001e7; 	X(POP(bx));	// 44776 pop     bx ;~ 185C:01E7
cs=0x185c;eip=0x0001e8; 	X(POP(bx));	// 44777 pop     bx ;~ 185C:01E8
cs=0x185c;eip=0x0001e9; 	X(PUSH(ax));	// 44778 push    ax ;~ 185C:01E9
cs=0x185c;eip=0x0001ea; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 44779 push    [bp+arg_8] ;~ 185C:01EA
cs=0x185c;eip=0x0001ed; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 44780 push    [bp+arg_6] ;~ 185C:01ED
cs=0x185c;eip=0x0001f0; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 44781 push    [bp+arg_C] ;~ 185C:01F0
cs=0x185c;eip=0x0001f3; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 44782 push    [bp+arg_A] ;~ 185C:01F3
cs=0x185c;eip=0x0001f6; 	J(CALLF(init_audio_resources,0));	// 44783 call    init_audio_resources ;~ 185C:01F6
cs=0x185c;eip=0x0001fb; 	T(ADD(sp, 0x0A));	// 44784 add     sp, 0Ah ;~ 185C:01FB
cs=0x185c;eip=0x0001fe; 	T(MOV(es, si));	// 44785 mov     es, si ;~ 185C:01FE
cs=0x185c;eip=0x000200; 	X(MOV(*(dw*)(raddr(es,di+0x1C)), ax));	// 44786 mov     es:[di+1Ch], ax ;~ 185C:0200
cs=0x185c;eip=0x000204; 	X(MOV(*(dw*)(raddr(es,di+0x1E)), dx));	// 44787 mov     es:[di+1Eh], dx ;~ 185C:0204
cs=0x185c;eip=0x000208; 	X(PUSH(*(dw*)(raddr(es,di+0x22))));	// 44788 push    word ptr es:[di+22h] ;~ 185C:0208
cs=0x185c;eip=0x00020c; 	X(PUSH(*(dw*)(raddr(es,di+0x20))));	// 44789 push    word ptr es:[di+20h] ;~ 185C:020C
cs=0x185c;eip=0x000210; 	X(PUSH(cs));	// 44790 push    cs ;~ 185C:0210
cs=0x185c;eip=0x000211; 	J(CALL(pad_id,0));	// 44791 call    near ptr pad_id ;~ 185C:0211
cs=0x185c;eip=0x000214; 	X(POP(bx));	// 44792 pop     bx ;~ 185C:0214
cs=0x185c;eip=0x000215; 	X(POP(bx));	// 44793 pop     bx ;~ 185C:0215
cs=0x185c;eip=0x000216; 	X(PUSH(ax));	// 44794 push    ax ;~ 185C:0216
cs=0x185c;eip=0x000217; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 44795 push    [bp+arg_8] ;~ 185C:0217
cs=0x185c;eip=0x00021a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 44796 push    [bp+arg_6] ;~ 185C:021A
cs=0x185c;eip=0x00021d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 44797 push    [bp+arg_C] ;~ 185C:021D
cs=0x185c;eip=0x000220; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 44798 push    [bp+arg_A] ;~ 185C:0220
cs=0x185c;eip=0x000223; 	J(CALLF(init_audio_resources,0));	// 44799 call    init_audio_resources ;~ 185C:0223
cs=0x185c;eip=0x000228; 	T(ADD(sp, 0x0A));	// 44800 add     sp, 0Ah ;~ 185C:0228
cs=0x185c;eip=0x00022b; 	T(MOV(es, si));	// 44801 mov     es, si ;~ 185C:022B
cs=0x185c;eip=0x00022d; 	X(MOV(*(dw*)(raddr(es,di+0x20)), ax));	// 44802 mov     es:[di+20h], ax ;~ 185C:022D
cs=0x185c;eip=0x000231; 	X(MOV(*(dw*)(raddr(es,di+0x22)), dx));	// 44803 mov     es:[di+22h], dx ;~ 185C:0231
cs=0x185c;eip=0x000235; 	X(PUSH(*(dw*)(raddr(es,di+0x26))));	// 44804 push    word ptr es:[di+26h] ;~ 185C:0235
cs=0x185c;eip=0x000239; 	X(PUSH(*(dw*)(raddr(es,di+0x24))));	// 44805 push    word ptr es:[di+24h] ;~ 185C:0239
cs=0x185c;eip=0x00023d; 	X(PUSH(cs));	// 44806 push    cs ;~ 185C:023D
cs=0x185c;eip=0x00023e; 	J(CALL(pad_id,0));	// 44807 call    near ptr pad_id ;~ 185C:023E
cs=0x185c;eip=0x000241; 	X(POP(bx));	// 44808 pop     bx ;~ 185C:0241
cs=0x185c;eip=0x000242; 	X(POP(bx));	// 44809 pop     bx ;~ 185C:0242
cs=0x185c;eip=0x000243; 	X(PUSH(ax));	// 44810 push    ax ;~ 185C:0243
cs=0x185c;eip=0x000244; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 44811 push    [bp+arg_8] ;~ 185C:0244
cs=0x185c;eip=0x000247; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 44812 push    [bp+arg_6] ;~ 185C:0247
cs=0x185c;eip=0x00024a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 44813 push    [bp+arg_C] ;~ 185C:024A
cs=0x185c;eip=0x00024d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 44814 push    [bp+arg_A] ;~ 185C:024D
cs=0x185c;eip=0x000250; 	J(CALLF(init_audio_resources,0));	// 44815 call    init_audio_resources ;~ 185C:0250
cs=0x185c;eip=0x000255; 	T(ADD(sp, 0x0A));	// 44816 add     sp, 0Ah ;~ 185C:0255
cs=0x185c;eip=0x000258; 	T(MOV(es, si));	// 44817 mov     es, si ;~ 185C:0258
cs=0x185c;eip=0x00025a; 	X(MOV(*(dw*)(raddr(es,di+0x24)), ax));	// 44818 mov     es:[di+24h], ax ;~ 185C:025A
cs=0x185c;eip=0x00025e; 	X(MOV(*(dw*)(raddr(es,di+0x26)), dx));	// 44819 mov     es:[di+26h], dx ;~ 185C:025E
cs=0x185c;eip=0x000262; 	X(PUSH(*(dw*)(raddr(es,di+0x2A))));	// 44820 push    word ptr es:[di+2Ah] ;~ 185C:0262
cs=0x185c;eip=0x000266; 	X(PUSH(*(dw*)(raddr(es,di+0x28))));	// 44821 push    word ptr es:[di+28h] ;~ 185C:0266
cs=0x185c;eip=0x00026a; 	X(PUSH(cs));	// 44822 push    cs ;~ 185C:026A
cs=0x185c;eip=0x00026b; 	J(CALL(pad_id,0));	// 44823 call    near ptr pad_id ;~ 185C:026B
cs=0x185c;eip=0x00026e; 	X(POP(bx));	// 44824 pop     bx ;~ 185C:026E
cs=0x185c;eip=0x00026f; 	X(POP(bx));	// 44825 pop     bx ;~ 185C:026F
cs=0x185c;eip=0x000270; 	X(PUSH(ax));	// 44826 push    ax ;~ 185C:0270
cs=0x185c;eip=0x000271; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 44827 push    [bp+arg_8] ;~ 185C:0271
cs=0x185c;eip=0x000274; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 44828 push    [bp+arg_6] ;~ 185C:0274
cs=0x185c;eip=0x000277; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 44829 push    [bp+arg_C] ;~ 185C:0277
cs=0x185c;eip=0x00027a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 44830 push    [bp+arg_A] ;~ 185C:027A
cs=0x185c;eip=0x00027d; 	J(CALLF(init_audio_resources,0));	// 44831 call    init_audio_resources ;~ 185C:027D
cs=0x185c;eip=0x000282; 	T(ADD(sp, 0x0A));	// 44832 add     sp, 0Ah ;~ 185C:0282
cs=0x185c;eip=0x000285; 	T(MOV(es, si));	// 44833 mov     es, si ;~ 185C:0285
cs=0x185c;eip=0x000287; 	X(MOV(*(dw*)(raddr(es,di+0x28)), ax));	// 44834 mov     es:[di+28h], ax ;~ 185C:0287
cs=0x185c;eip=0x00028b; 	X(MOV(*(dw*)(raddr(es,di+0x2A)), dx));	// 44835 mov     es:[di+2Ah], dx ;~ 185C:028B
cs=0x185c;eip=0x00028f; 	X(PUSH(*(dw*)(raddr(es,di+0x2E))));	// 44836 push    word ptr es:[di+2Eh] ;~ 185C:028F
cs=0x185c;eip=0x000293; 	X(PUSH(*(dw*)(raddr(es,di+0x2C))));	// 44837 push    word ptr es:[di+2Ch] ;~ 185C:0293
cs=0x185c;eip=0x000297; 	X(PUSH(cs));	// 44838 push    cs ;~ 185C:0297
cs=0x185c;eip=0x000298; 	J(CALL(pad_id,0));	// 44839 call    near ptr pad_id ;~ 185C:0298
cs=0x185c;eip=0x00029b; 	X(POP(bx));	// 44840 pop     bx ;~ 185C:029B
cs=0x185c;eip=0x00029c; 	X(POP(bx));	// 44841 pop     bx ;~ 185C:029C
cs=0x185c;eip=0x00029d; 	X(PUSH(ax));	// 44842 push    ax ;~ 185C:029D
cs=0x185c;eip=0x00029e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 44843 push    [bp+arg_8] ;~ 185C:029E
cs=0x185c;eip=0x0002a1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 44844 push    [bp+arg_6] ;~ 185C:02A1
cs=0x185c;eip=0x0002a4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 44845 push    [bp+arg_C] ;~ 185C:02A4
cs=0x185c;eip=0x0002a7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 44846 push    [bp+arg_A] ;~ 185C:02A7
cs=0x185c;eip=0x0002aa; 	J(CALLF(init_audio_resources,0));	// 44847 call    init_audio_resources ;~ 185C:02AA
cs=0x185c;eip=0x0002af; 	T(ADD(sp, 0x0A));	// 44848 add     sp, 0Ah ;~ 185C:02AF
cs=0x185c;eip=0x0002b2; 	T(MOV(es, si));	// 44849 mov     es, si ;~ 185C:02B2
cs=0x185c;eip=0x0002b4; 	X(MOV(*(dw*)(raddr(es,di+0x2C)), ax));	// 44850 mov     es:[di+2Ch], ax ;~ 185C:02B4
cs=0x185c;eip=0x0002b8; 	X(MOV(*(dw*)(raddr(es,di+0x2E)), dx));	// 44851 mov     es:[di+2Eh], dx ;~ 185C:02B8
cs=0x185c;eip=0x0002bc; 	X(MOV(*(raddr(es,di+6)), 1));	// 44852 mov     byte ptr es:[di+6], 1 ;~ 185C:02BC
loc_26e61:
	// 7374 
cs=0x185c;eip=0x0002c1; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_14))));	// 44855 mov     si, [bp+var_14] ;~ 185C:02C1
cs=0x185c;eip=0x0002c4; 	T(MOV(ax, 0x7F));	// 44856 mov     ax, 7Fh ;~ 185C:02C4
cs=0x185c;eip=0x0002c7; 	X(PUSH(ax));	// 44857 push    ax ;~ 185C:02C7
cs=0x185c;eip=0x0002c8; 	T(MOV(ax, 0x0FFFF));	// 44858 mov     ax, 0FFFFh ;~ 185C:02C8
cs=0x185c;eip=0x0002cb; 	X(PUSH(ax));	// 44859 push    ax ;~ 185C:02CB
cs=0x185c;eip=0x0002cc; 	J(CALLF(sub_37470,0));	// 44860 call    sub_37470 ;~ 185C:02CC
cs=0x185c;eip=0x0002d1; 	X(POP(bx));	// 44861 pop     bx ;~ 185C:02D1
cs=0x185c;eip=0x0002d2; 	X(POP(bx));	// 44862 pop     bx ;~ 185C:02D2
cs=0x185c;eip=0x0002d3; 	X(MOV(*(dw*)(raddr(ds,si+2)), ax));	// 44863 mov     [si+2], ax ;~ 185C:02D3
cs=0x185c;eip=0x0002d6; 	X(MOV(*(raddr(ds,si+1)), 0));	// 44864 mov     byte ptr [si+1], 0 ;~ 185C:02D6
cs=0x185c;eip=0x0002da; 	X(MOV(*(dw*)(raddr(ds,si+4)), 0));	// 44865 mov     word ptr [si+4], 0 ;~ 185C:02DA
cs=0x185c;eip=0x0002df; 	T(SUB(ax, ax));	// 44866 sub     ax, ax ;~ 185C:02DF
cs=0x185c;eip=0x0002e1; 	X(MOV(*(dw*)(raddr(ds,si+8)), ax));	// 44867 mov     [si+8], ax ;~ 185C:02E1
cs=0x185c;eip=0x0002e4; 	X(MOV(*(dw*)(raddr(ds,si+6)), ax));	// 44868 mov     [si+6], ax ;~ 185C:02E4
cs=0x185c;eip=0x0002e7; 	X(MOV(*(raddr(ds,si+0x0A)), 0));	// 44869 mov     byte ptr [si+0Ah], 0 ;~ 185C:02E7
cs=0x185c;eip=0x0002eb; 	T(MOV(es, *(dw*)(raddr(ss,bp+var_10))));	// 44870 mov     es, [bp+var_10] ;~ 185C:02EB
cs=0x185c;eip=0x0002ee; 	T(MOV(ax, *(dw*)(raddr(es,di))));	// 44871 mov     ax, es:[di] ;~ 185C:02EE
cs=0x185c;eip=0x0002f1; 	T(MOV(cx, es));	// 44872 mov     cx, es ;~ 185C:02F1
cs=0x185c;eip=0x0002f3; 	T(LES(bx, *(dw*)(raddr(es,di+8))));	// 44873 les     bx, es:[di+8] ;~ 185C:02F3
cs=0x185c;eip=0x0002f7; 	T(MOV(dl, *(raddr(es,bx+0x0F))));	// 44874 mov     dl, es:[bx+0Fh] ;~ 185C:02F7
cs=0x185c;eip=0x0002fb; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_18))), di));	// 44875 mov     word ptr [bp+var_18], di ;~ 185C:02FB
cs=0x185c;eip=0x0002fe; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_18+2))), cx));	// 44876 mov     word ptr [bp+var_18+2], cx ;~ 185C:02FE
cs=0x185c;eip=0x000301; 	T(MOV(cl, *(raddr(es,bx+0x0E))));	// 44877 mov     cl, es:[bx+0Eh] ;~ 185C:0301
cs=0x185c;eip=0x000305; 	T(SUB(ch, ch));	// 44878 sub     ch, ch ;~ 185C:0305
cs=0x185c;eip=0x000307; 	T(MOV(bx, dx));	// 44879 mov     bx, dx ;~ 185C:0307
cs=0x185c;eip=0x000309; 	T(SUB(dx, dx));	// 44880 sub     dx, dx ;~ 185C:0309
cs=0x185c;eip=0x00030b; 	T(DIV2(cx));	// 44881 div     cx ;~ 185C:030B
cs=0x185c;eip=0x00030d; 	T(MOV(cl, 4));	// 44882 mov     cl, 4 ;~ 185C:030D
cs=0x185c;eip=0x00030f; 	T(SUB(bh, bh));	// 44883 sub     bh, bh ;~ 185C:030F
cs=0x185c;eip=0x000311; 	T(SHL(bx, cl));	// 44884 shl     bx, cl ;~ 185C:0311
cs=0x185c;eip=0x000313; 	T(ADD(ax, bx));	// 44885 add     ax, bx ;~ 185C:0313
cs=0x185c;eip=0x000315; 	X(MOV(*(dw*)(raddr(ds,si+0x0C)), ax));	// 44886 mov     [si+0Ch], ax ;~ 185C:0315
cs=0x185c;eip=0x000318; 	X(MOV(*(raddr(ds,si+0x0E)), 0x0FF));	// 44887 mov     byte ptr [si+0Eh], 0FFh ;~ 185C:0318
cs=0x185c;eip=0x00031c; 	T(MOV(ax, 0x0FFFF));	// 44888 mov     ax, 0FFFFh ;~ 185C:031C
cs=0x185c;eip=0x00031f; 	X(MOV(*(dw*)(raddr(ds,si+0x10)), ax));	// 44889 mov     [si+10h], ax ;~ 185C:031F
cs=0x185c;eip=0x000322; 	X(MOV(*(dw*)(raddr(ds,si+0x12)), ax));	// 44890 mov     [si+12h], ax ;~ 185C:0322
cs=0x185c;eip=0x000325; 	X(MOV(*(dw*)(raddr(ds,si+0x14)), ax));	// 44891 mov     [si+14h], ax ;~ 185C:0325
cs=0x185c;eip=0x000328; 	X(MOV(*(dw*)(raddr(ds,si+0x16)), ax));	// 44892 mov     [si+16h], ax ;~ 185C:0328
cs=0x185c;eip=0x00032b; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_18))));	// 44893 les     bx, [bp+var_18] ;~ 185C:032B
cs=0x185c;eip=0x00032e; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 44894 mov     ax, es:[bx] ;~ 185C:032E
cs=0x185c;eip=0x000331; 	X(MOV(*(dw*)(raddr(ds,si+0x18)), ax));	// 44895 mov     [si+18h], ax ;~ 185C:0331
cs=0x185c;eip=0x000334; 	T(SUB(al, al));	// 44896 sub     al, al ;~ 185C:0334
cs=0x185c;eip=0x000336; 	X(MOV(*(raddr(ds,si+0x1A)), al));	// 44897 mov     [si+1Ah], al ;~ 185C:0336
cs=0x185c;eip=0x000339; 	X(MOV(*(raddr(ds,si+0x1B)), al));	// 44898 mov     [si+1Bh], al ;~ 185C:0339
cs=0x185c;eip=0x00033c; 	X(MOV(*(raddr(ds,si)), 1));	// 44899 mov     byte ptr [si], 1 ;~ 185C:033C
cs=0x185c;eip=0x00033f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 44900 mov     ax, [bp+var_E] ;~ 185C:033F
cs=0x185c;eip=0x000342; 	J(JMP(loc_26eee));	// 44901 jmp     short loc_26EEE ;~ 185C:0342
loc_26ee4:
	// 7375 
cs=0x185c;eip=0x000344; 	T(MOV(ax, offset(dseg,ainitengineallhandlesused_)));	// 44905 mov     ax, offset aInitengineAllHandlesUsed_ ; "InitEngine: All handles used." ;~ 185C:0344
cs=0x185c;eip=0x000347; 	X(PUSH(ax));	// 44906 push    ax ;~ 185C:0347
cs=0x185c;eip=0x000348; 	J(CALLF(fatal_error,0));	// 44907 call    far ptr fatal_error ;~ 185C:0348
cs=0x185c;eip=0x00034d; 	X(POP(bx));	// 44909 pop     bx ;~ 185C:034D
loc_26eee:
	// 7376 
cs=0x185c;eip=0x00034e; 	X(POP(si));	// 44912 pop     si ;~ 185C:034E
cs=0x185c;eip=0x00034f; 	X(POP(di));	// 44913 pop     di ;~ 185C:034F
cs=0x185c;eip=0x000350; 	T(MOV(sp, bp));	// 44914 mov     sp, bp ;~ 185C:0350
cs=0x185c;eip=0x000352; 	X(POP(bp));	// 44915 pop     bp ;~ 185C:0352
cs=0x185c;eip=0x000353; 	J(RETF(0));	// 44916 retf ;~ 185C:0353

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_init_engine: 	goto audio_init_engine;
        case m2c::kloc_26c4e: 	goto loc_26c4e;
        case m2c::kloc_26c59: 	goto loc_26c59;
        case m2c::kloc_26c5d: 	goto loc_26c5d;
        case m2c::kloc_26c63: 	goto loc_26c63;
        case m2c::kloc_26c6a: 	goto loc_26c6a;
        case m2c::kloc_26c99: 	goto loc_26c99;
        case m2c::kloc_26ca7: 	goto loc_26ca7;
        case m2c::kloc_26cb5: 	goto loc_26cb5;
        case m2c::kloc_26ccb: 	goto loc_26ccb;
        case m2c::kloc_26e61: 	goto loc_26e61;
        case m2c::kloc_26ee4: 	goto loc_26ee4;
        case m2c::kloc_26eee: 	goto loc_26eee;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_op_unk(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_op_unk:
    _begin:
#undef arg_0
#define arg_0 6
	// 44927 arg_0           = word ptr  6 ;~ 185C:0354
cs=0x185c;eip=0x000354; 	X(PUSH(bp));	// 44929 push    bp ;~ 185C:0354
cs=0x185c;eip=0x000355; 	T(MOV(bp, sp));	// 44930 mov     bp, sp ;~ 185C:0355
cs=0x185c;eip=0x000357; 	X(PUSH(di));	// 44931 push    di ;~ 185C:0357
cs=0x185c;eip=0x000358; 	X(PUSH(si));	// 44932 push    si ;~ 185C:0358
cs=0x185c;eip=0x000359; 	T(MOV(ax, 0x4C));	// 44933 mov     ax, 4Ch ; 'L' ;~ 185C:0359
cs=0x185c;eip=0x00035c; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 44934 imul    [bp+arg_0] ;~ 185C:035C
cs=0x185c;eip=0x00035f; 	T(MOV(si, ax));	// 44935 mov     si, ax ;~ 185C:035F
cs=0x185c;eip=0x000361; 	T(ADD(si, offset(dseg,audiotimers)));	// 44936 add     si, offset audiotimers ;~ 185C:0361
cs=0x185c;eip=0x000365; 	T(CMP(*(raddr(ds,si)), 1));	// 44937 cmp     byte ptr [si], 1 ;~ 185C:0365
cs=0x185c;eip=0x000368; 	J(JNZ(loc_26f67));	// 44938 jnz     short loc_26F67 ;~ 185C:0368
cs=0x185c;eip=0x00036a; 	T(CMP(*(raddr(ds,si+1)), 0));	// 44939 cmp     byte ptr [si+1], 0 ;~ 185C:036A
cs=0x185c;eip=0x00036e; 	J(JNZ(loc_26f67));	// 44940 jnz     short loc_26F67 ;~ 185C:036E
cs=0x185c;eip=0x000370; 	T(bx = si+0x1C);	// 44941 lea     bx, [si+1Ch] ;~ 185C:0370
cs=0x185c;eip=0x000373; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0A))));	// 44942 push    word ptr [bx+0Ah] ;~ 185C:0373
cs=0x185c;eip=0x000376; 	X(PUSH(*(dw*)(raddr(ds,bx+8))));	// 44943 push    word ptr [bx+8] ;~ 185C:0376
cs=0x185c;eip=0x000379; 	X(PUSH(*(dw*)(raddr(ds,si+2))));	// 44944 push    word ptr [si+2] ;~ 185C:0379
cs=0x185c;eip=0x00037c; 	T(MOV(di, bx));	// 44945 mov     di, bx ;~ 185C:037C
cs=0x185c;eip=0x00037e; 	J(CALLF(sub_38cf8,0));	// 44946 call    sub_38CF8 ;~ 185C:037E
cs=0x185c;eip=0x000383; 	T(ADD(sp, 6));	// 44947 add     sp, 6 ;~ 185C:0383
cs=0x185c;eip=0x000386; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 44948 mov     ax, [di] ;~ 185C:0386
cs=0x185c;eip=0x000388; 	T(LES(bx, *(dw*)(raddr(ds,di+8))));	// 44949 les     bx, [di+8] ;~ 185C:0388
cs=0x185c;eip=0x00038b; 	T(MOV(cl, *(raddr(es,bx+0x0E))));	// 44950 mov     cl, es:[bx+0Eh] ;~ 185C:038B
cs=0x185c;eip=0x00038f; 	T(SUB(ch, ch));	// 44951 sub     ch, ch ;~ 185C:038F
cs=0x185c;eip=0x000391; 	T(SUB(dx, dx));	// 44952 sub     dx, dx ;~ 185C:0391
cs=0x185c;eip=0x000393; 	T(DIV2(cx));	// 44953 div     cx ;~ 185C:0393
cs=0x185c;eip=0x000395; 	T(MOV(cl, 4));	// 44954 mov     cl, 4 ;~ 185C:0395
cs=0x185c;eip=0x000397; 	T(MOV(dl, *(raddr(es,bx+0x0F))));	// 44955 mov     dl, es:[bx+0Fh] ;~ 185C:0397
cs=0x185c;eip=0x00039b; 	T(SUB(dh, dh));	// 44956 sub     dh, dh ;~ 185C:039B
cs=0x185c;eip=0x00039d; 	T(SHL(dx, cl));	// 44957 shl     dx, cl ;~ 185C:039D
cs=0x185c;eip=0x00039f; 	T(ADD(ax, dx));	// 44958 add     ax, dx ;~ 185C:039F
cs=0x185c;eip=0x0003a1; 	X(MOV(*(dw*)(raddr(ds,si+0x0C)), ax));	// 44959 mov     [si+0Ch], ax ;~ 185C:03A1
cs=0x185c;eip=0x0003a4; 	X(PUSH(*(dw*)(raddr(ds,si+2))));	// 44960 push    word ptr [si+2] ;~ 185C:03A4
cs=0x185c;eip=0x0003a7; 	X(PUSH(ax));	// 44961 push    ax ;~ 185C:03A7
cs=0x185c;eip=0x0003a8; 	J(CALLF(sub_39050,0));	// 44962 call    sub_39050 ;~ 185C:03A8
cs=0x185c;eip=0x0003ad; 	X(POP(bx));	// 44963 pop     bx ;~ 185C:03AD
cs=0x185c;eip=0x0003ae; 	X(POP(bx));	// 44964 pop     bx ;~ 185C:03AE
cs=0x185c;eip=0x0003af; 	X(MOV(*(dw*)(raddr(ds,si+0x12)), ax));	// 44965 mov     [si+12h], ax ;~ 185C:03AF
cs=0x185c;eip=0x0003b2; 	T(MOV(al, 1));	// 44966 mov     al, 1 ;~ 185C:03B2
cs=0x185c;eip=0x0003b4; 	X(MOV(*(raddr(ds,si+1)), al));	// 44967 mov     [si+1], al ;~ 185C:03B4
cs=0x185c;eip=0x0003b7; 	X(MOV(*(raddr(ds,si+0x1A)), al));	// 44968 mov     [si+1Ah], al ;~ 185C:03B7
cs=0x185c;eip=0x0003ba; 	T(SUB(ax, ax));	// 44969 sub     ax, ax ;~ 185C:03BA
cs=0x185c;eip=0x0003bc; 	X(PUSH(ax));	// 44970 push    ax ;~ 185C:03BC
cs=0x185c;eip=0x0003bd; 	X(PUSH(*(dw*)(raddr(ds,si+2))));	// 44971 push    word ptr [si+2] ;~ 185C:03BD
cs=0x185c;eip=0x0003c0; 	J(CALLF(audio_unk2,0));	// 44972 call    audio_unk2 ;~ 185C:03C0
cs=0x185c;eip=0x0003c5; 	X(POP(bx));	// 44973 pop     bx ;~ 185C:03C5
cs=0x185c;eip=0x0003c6; 	X(POP(bx));	// 44974 pop     bx ;~ 185C:03C6
loc_26f67:
	// 7377 
cs=0x185c;eip=0x0003c7; 	X(POP(si));	// 44978 pop     si ;~ 185C:03C7
cs=0x185c;eip=0x0003c8; 	X(POP(di));	// 44979 pop     di ;~ 185C:03C8
cs=0x185c;eip=0x0003c9; 	T(MOV(sp, bp));	// 44980 mov     sp, bp ;~ 185C:03C9
cs=0x185c;eip=0x0003cb; 	X(POP(bp));	// 44981 pop     bp ;~ 185C:03CB
cs=0x185c;eip=0x0003cc; 	J(RETF(0));	// 44982 retf ;~ 185C:03CC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_op_unk: 	goto audio_op_unk;
        case m2c::kloc_26f67: 	goto loc_26f67;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_function2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_function2:
    _begin:
#undef arg_0
#define arg_0 6
	// 44993 arg_0           = word ptr  6 ;~ 185C:03CD
cs=0x185c;eip=0x0003cd; 	X(PUSH(bp));	// 44995 push    bp ;~ 185C:03CD
cs=0x185c;eip=0x0003ce; 	T(MOV(bp, sp));	// 44996 mov     bp, sp ;~ 185C:03CE
cs=0x185c;eip=0x0003d0; 	X(PUSH(si));	// 44997 push    si ;~ 185C:03D0
cs=0x185c;eip=0x0003d1; 	T(MOV(ax, 0x4C));	// 44998 mov     ax, 4Ch ; 'L' ;~ 185C:03D1
cs=0x185c;eip=0x0003d4; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 44999 imul    [bp+arg_0] ;~ 185C:03D4
cs=0x185c;eip=0x0003d7; 	T(MOV(si, ax));	// 45000 mov     si, ax ;~ 185C:03D7
cs=0x185c;eip=0x0003d9; 	T(ADD(si, offset(dseg,audiotimers)));	// 45001 add     si, offset audiotimers ;~ 185C:03D9
cs=0x185c;eip=0x0003dd; 	T(CMP(*(raddr(ds,si)), 1));	// 45002 cmp     byte ptr [si], 1 ;~ 185C:03DD
cs=0x185c;eip=0x0003e0; 	J(JNZ(loc_26f9e));	// 45003 jnz     short loc_26F9E ;~ 185C:03E0
cs=0x185c;eip=0x0003e2; 	T(CMP(*(raddr(ds,si+1)), 1));	// 45004 cmp     byte ptr [si+1], 1 ;~ 185C:03E2
cs=0x185c;eip=0x0003e6; 	J(JNZ(loc_26f9e));	// 45005 jnz     short loc_26F9E ;~ 185C:03E6
cs=0x185c;eip=0x0003e8; 	X(PUSH(*(dw*)(raddr(ds,si+0x12))));	// 45006 push    word ptr [si+12h] ;~ 185C:03E8
cs=0x185c;eip=0x0003eb; 	J(CALLF(sub_38156,0));	// 45007 call    sub_38156 ;~ 185C:03EB
cs=0x185c;eip=0x0003f0; 	X(POP(bx));	// 45008 pop     bx ;~ 185C:03F0
cs=0x185c;eip=0x0003f1; 	X(MOV(*(dw*)(raddr(ds,si+0x12)), 0x0FFFF));	// 45009 mov     word ptr [si+12h], 0FFFFh ;~ 185C:03F1
cs=0x185c;eip=0x0003f6; 	X(MOV(*(raddr(ds,si+1)), 0));	// 45010 mov     byte ptr [si+1], 0 ;~ 185C:03F6
cs=0x185c;eip=0x0003fa; 	X(MOV(*(raddr(ds,si+0x1A)), 1));	// 45011 mov     byte ptr [si+1Ah], 1 ;~ 185C:03FA
loc_26f9e:
	// 7378 
cs=0x185c;eip=0x0003fe; 	X(POP(si));	// 45015 pop     si ;~ 185C:03FE
cs=0x185c;eip=0x0003ff; 	T(MOV(sp, bp));	// 45016 mov     sp, bp ;~ 185C:03FF
cs=0x185c;eip=0x000401; 	X(POP(bp));	// 45017 pop     bp ;~ 185C:0401
cs=0x185c;eip=0x000402; 	J(RETF(0));	// 45018 retf ;~ 185C:0402

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_function2: 	goto audio_function2;
        case m2c::kloc_26f9e: 	goto loc_26f9e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_op_unk2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_op_unk2:
    _begin:
#undef var_16
#define var_16 -0x16
	// 45240 var_16          = word ptr -16h ;~ 185C:058E
#undef var_14
#define var_14 -0x14
	// 45241 var_14          = word ptr -14h ;~ 185C:058E
#undef var_10
#define var_10 -0x10
	// 45242 var_10          = word ptr -10h ;~ 185C:058E
#undef var_e
#define var_e -0x0E
	// 45243 var_E           = word ptr -0Eh ;~ 185C:058E
#undef var_c
#define var_c -0x0C
	// 45244 var_C           = word ptr -0Ch ;~ 185C:058E
#undef var_a
#define var_a -0x0A
	// 45245 var_A           = word ptr -0Ah ;~ 185C:058E
#undef var_8
#define var_8 -8
	// 45246 var_8           = word ptr -8 ;~ 185C:058E
#undef var_6
#define var_6 -6
	// 45247 var_6           = word ptr -6 ;~ 185C:058E
#undef var_2
#define var_2 -2
	// 45248 var_2           = word ptr -2 ;~ 185C:058E
#undef arg_0
#define arg_0 6
	// 45249 arg_0           = word ptr  6 ;~ 185C:058E
#undef arg_2
#define arg_2 8
	// 45250 arg_2           = word ptr  8 ;~ 185C:058E
#undef arg_4
#define arg_4 0x0A
	// 45251 arg_4           = word ptr  0Ah ;~ 185C:058E
#undef arg_6
#define arg_6 0x0C
	// 45252 arg_6           = word ptr  0Ch ;~ 185C:058E
#undef arg_8
#define arg_8 0x0E
	// 45253 arg_8           = word ptr  0Eh ;~ 185C:058E
#undef arg_a
#define arg_a 0x10
	// 45254 arg_A           = word ptr  10h ;~ 185C:058E
#undef arg_c
#define arg_c 0x12
	// 45255 arg_C           = word ptr  12h ;~ 185C:058E
#undef arg_e
#define arg_e 0x14
	// 45256 arg_E           = word ptr  14h ;~ 185C:058E
#undef arg_10
#define arg_10 0x16
	// 45257 arg_10          = word ptr  16h ;~ 185C:058E
cs=0x185c;eip=0x00058e; 	X(PUSH(bp));	// 45259 push    bp ;~ 185C:058E
cs=0x185c;eip=0x00058f; 	T(MOV(bp, sp));	// 45260 mov     bp, sp ;~ 185C:058F
cs=0x185c;eip=0x000591; 	T(SUB(sp, 0x16));	// 45261 sub     sp, 16h ;~ 185C:0591
cs=0x185c;eip=0x000594; 	T(MOV(ax, 0x4C));	// 45262 mov     ax, 4Ch ; 'L' ;~ 185C:0594
cs=0x185c;eip=0x000597; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45263 imul    [bp+arg_0] ;~ 185C:0597
cs=0x185c;eip=0x00059a; 	T(ADD(ax, offset(dseg,audiotimers)));	// 45264 add     ax, offset audiotimers ;~ 185C:059A
cs=0x185c;eip=0x00059d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 45265 mov     [bp+var_2], ax ;~ 185C:059D
cs=0x185c;eip=0x0005a0; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 45266 push    [bp+arg_C] ;~ 185C:05A0
cs=0x185c;eip=0x0005a3; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_e))));	// 45267 push    [bp+arg_E] ;~ 185C:05A3
cs=0x185c;eip=0x0005a6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 45268 push    [bp+arg_A] ;~ 185C:05A6
cs=0x185c;eip=0x0005a9; 	J(CALLF(polarradius2d,0));	// 45269 call    polarRadius2D ;~ 185C:05A9
cs=0x185c;eip=0x0005ae; 	T(ADD(sp, 4));	// 45270 add     sp, 4 ;~ 185C:05AE
cs=0x185c;eip=0x0005b1; 	X(PUSH(ax));	// 45271 push    ax ;~ 185C:05B1
cs=0x185c;eip=0x0005b2; 	J(CALLF(polarradius2d,0));	// 45272 call    polarRadius2D ;~ 185C:05B2
cs=0x185c;eip=0x0005b7; 	T(ADD(sp, 4));	// 45273 add     sp, 4 ;~ 185C:05B7
cs=0x185c;eip=0x0005ba; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 45274 mov     [bp+var_C], ax ;~ 185C:05BA
cs=0x185c;eip=0x0005bd; 	T(CMP(ax, 0x1770));	// 45275 cmp     ax, 1770h ;~ 185C:05BD
cs=0x185c;eip=0x0005c0; 	J(JLE(loc_27172));	// 45276 jle     short loc_27172 ;~ 185C:05C0
cs=0x185c;eip=0x0005c2; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 45277 mov     [bp+var_8], 0 ;~ 185C:05C2
cs=0x185c;eip=0x0005c7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 45278 mov     bx, [bp+var_2] ;~ 185C:05C7
cs=0x185c;eip=0x0005ca; 	X(MOV(*(raddr(ds,bx+0x0A)), 0));	// 45279 mov     byte ptr [bx+0Ah], 0 ;~ 185C:05CA
cs=0x185c;eip=0x0005ce; 	T(MOV(sp, bp));	// 45280 mov     sp, bp ;~ 185C:05CE
cs=0x185c;eip=0x0005d0; 	X(POP(bp));	// 45281 pop     bp ;~ 185C:05D0
cs=0x185c;eip=0x0005d1; 	J(RETF(0));	// 45282 retf ;~ 185C:05D1
loc_27172:
	// 7396 
cs=0x185c;eip=0x0005d2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 45286 push    [bp+arg_6] ;~ 185C:05D2
cs=0x185c;eip=0x0005d5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 45287 push    [bp+arg_8] ;~ 185C:05D5
cs=0x185c;eip=0x0005d8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 45288 push    [bp+arg_4] ;~ 185C:05D8
cs=0x185c;eip=0x0005db; 	J(CALLF(polarradius2d,0));	// 45289 call    polarRadius2D ;~ 185C:05DB
cs=0x185c;eip=0x0005e0; 	T(ADD(sp, 4));	// 45290 add     sp, 4 ;~ 185C:05E0
cs=0x185c;eip=0x0005e3; 	X(PUSH(ax));	// 45291 push    ax ;~ 185C:05E3
cs=0x185c;eip=0x0005e4; 	J(CALLF(polarradius2d,0));	// 45292 call    polarRadius2D ;~ 185C:05E4
cs=0x185c;eip=0x0005e9; 	T(ADD(sp, 4));	// 45293 add     sp, 4 ;~ 185C:05E9
cs=0x185c;eip=0x0005ec; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 45294 mov     [bp+var_A], ax ;~ 185C:05EC
cs=0x185c;eip=0x0005ef; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_c))));	// 45295 sub     ax, [bp+var_C] ;~ 185C:05EF
cs=0x185c;eip=0x0005f2; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 45296 mov     [bp+var_16], ax ;~ 185C:05F2
cs=0x185c;eip=0x0005f5; 	T(MOV(ax, 0x64));	// 45297 mov     ax, 64h ; 'd' ;~ 185C:05F5
cs=0x185c;eip=0x0005f8; 	T(XOR(dx, dx));	// 45298 xor     dx, dx ;~ 185C:05F8
cs=0x185c;eip=0x0005fa; 	X(DIV2(*(dw*)(raddr(ss,bp+arg_10))));	// 45299 div     [bp+arg_10] ;~ 185C:05FA
cs=0x185c;eip=0x0005fd; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_16))));	// 45300 imul    [bp+var_16] ;~ 185C:05FD
cs=0x185c;eip=0x000600; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 45301 mov     [bp+var_16], ax ;~ 185C:0600
cs=0x185c;eip=0x000603; 	T(MOV(ax, 0x7F));	// 45302 mov     ax, 7Fh ;~ 185C:0603
cs=0x185c;eip=0x000606; 	X(MUL1_2(*(dw*)(raddr(ss,bp+var_c))));	// 45303 mul     [bp+var_C] ;~ 185C:0606
cs=0x185c;eip=0x000609; 	T(MOV(cx, 0x1770));	// 45304 mov     cx, 1770h ;~ 185C:0609
cs=0x185c;eip=0x00060c; 	T(DIV2(cx));	// 45305 div     cx ;~ 185C:060C
cs=0x185c;eip=0x00060e; 	T(NEG(ax));	// 45306 neg     ax ;~ 185C:060E
cs=0x185c;eip=0x000610; 	T(ADD(ax, 0x7F));	// 45307 add     ax, 7Fh ;~ 185C:0610
cs=0x185c;eip=0x000613; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 45308 mov     [bp+var_8], ax ;~ 185C:0613
cs=0x185c;eip=0x000616; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0));	// 45309 cmp     [bp+var_16], 0 ;~ 185C:0616
cs=0x185c;eip=0x00061a; 	J(JLE(loc_271c6));	// 45310 jle     short loc_271C6 ;~ 185C:061A
cs=0x185c;eip=0x00061c; 	T(MOV(cl, 4));	// 45311 mov     cl, 4 ;~ 185C:061C
cs=0x185c;eip=0x00061e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 45312 mov     ax, [bp+var_8] ;~ 185C:061E
cs=0x185c;eip=0x000621; 	T(SHR(ax, cl));	// 45313 shr     ax, cl ;~ 185C:0621
cs=0x185c;eip=0x000623; 	X(SUB(*(dw*)(raddr(ss,bp+var_8)), ax));	// 45314 sub     [bp+var_8], ax ;~ 185C:0623
loc_271c6:
	// 7397 
cs=0x185c;eip=0x000626; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 45317 mov     ax, [bp+arg_2] ;~ 185C:0626
cs=0x185c;eip=0x000629; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 45318 mov     bx, [bp+var_2] ;~ 185C:0629
cs=0x185c;eip=0x00062c; 	T(ADD(bx, 0x1C));	// 45319 add     bx, 1Ch ;~ 185C:062C
cs=0x185c;eip=0x00062f; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), bx));	// 45320 mov     [bp+var_10], bx ;~ 185C:062F
cs=0x185c;eip=0x000632; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ds));	// 45321 mov     [bp+var_E], ds ;~ 185C:0632
cs=0x185c;eip=0x000635; 	T(LES(bx, *(dw*)(raddr(ds,bx+8))));	// 45322 les     bx, [bx+8] ;~ 185C:0635
cs=0x185c;eip=0x000638; 	T(MOV(cl, *(raddr(es,bx+0x0E))));	// 45323 mov     cl, es:[bx+0Eh] ;~ 185C:0638
cs=0x185c;eip=0x00063c; 	T(SUB(ch, ch));	// 45324 sub     ch, ch ;~ 185C:063C
cs=0x185c;eip=0x00063e; 	T(SUB(dx, dx));	// 45325 sub     dx, dx ;~ 185C:063E
cs=0x185c;eip=0x000640; 	T(DIV2(cx));	// 45326 div     cx ;~ 185C:0640
cs=0x185c;eip=0x000642; 	T(MOV(cl, 4));	// 45327 mov     cl, 4 ;~ 185C:0642
cs=0x185c;eip=0x000644; 	T(MOV(dl, *(raddr(es,bx+0x0F))));	// 45328 mov     dl, es:[bx+0Fh] ;~ 185C:0644
cs=0x185c;eip=0x000648; 	T(SUB(dh, dh));	// 45329 sub     dh, dh ;~ 185C:0648
cs=0x185c;eip=0x00064a; 	T(SHL(dx, cl));	// 45330 shl     dx, cl ;~ 185C:064A
cs=0x185c;eip=0x00064c; 	T(ADD(ax, dx));	// 45331 add     ax, dx ;~ 185C:064C
cs=0x185c;eip=0x00064e; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 45332 mov     [bp+var_14], ax ;~ 185C:064E
cs=0x185c;eip=0x000651; 	T(MOV(ax, 0x1770));	// 45333 mov     ax, 1770h ;~ 185C:0651
cs=0x185c;eip=0x000654; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_16))));	// 45334 sub     ax, [bp+var_16] ;~ 185C:0654
cs=0x185c;eip=0x000657; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 45335 mov     [bp+var_6], ax ;~ 185C:0657
cs=0x185c;eip=0x00065a; 	T(OR(ax, ax));	// 45336 or      ax, ax ;~ 185C:065A
cs=0x185c;eip=0x00065c; 	J(JZ(loc_27213));	// 45337 jz      short loc_27213 ;~ 185C:065C
cs=0x185c;eip=0x00065e; 	T(MOV(ax, 0x1770));	// 45338 mov     ax, 1770h ;~ 185C:065E
cs=0x185c;eip=0x000661; 	X(MUL1_2(*(dw*)(raddr(ss,bp+var_14))));	// 45339 mul     [bp+var_14] ;~ 185C:0661
cs=0x185c;eip=0x000664; 	X(DIV2(*(dw*)(raddr(ss,bp+var_6))));	// 45340 div     [bp+var_6] ;~ 185C:0664
cs=0x185c;eip=0x000667; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 45341 mov     [bp+var_6], ax ;~ 185C:0667
cs=0x185c;eip=0x00066a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 45342 mov     ax, [bp+var_6] ;~ 185C:066A
cs=0x185c;eip=0x00066d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 45343 mov     bx, [bp+var_2] ;~ 185C:066D
cs=0x185c;eip=0x000670; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 45344 mov     [bx+0Ch], ax ;~ 185C:0670
loc_27213:
	// 7398 
cs=0x185c;eip=0x000673; 	T(MOV(al, *(db*)(raddr(ss,bp+var_8))));	// 45347 mov     al, byte ptr [bp+var_8] ;~ 185C:0673
cs=0x185c;eip=0x000676; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 45348 mov     bx, [bp+var_2] ;~ 185C:0676
cs=0x185c;eip=0x000679; 	X(MOV(*(raddr(ds,bx+0x0A)), al));	// 45349 mov     [bx+0Ah], al ;~ 185C:0679
cs=0x185c;eip=0x00067c; 	T(MOV(sp, bp));	// 45350 mov     sp, bp ;~ 185C:067C
cs=0x185c;eip=0x00067e; 	X(POP(bp));	// 45351 pop     bp ;~ 185C:067E
cs=0x185c;eip=0x00067f; 	J(RETF(0));	// 45352 retf ;~ 185C:067F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_op_unk2: 	goto audio_op_unk2;
        case m2c::kloc_27172: 	goto loc_27172;
        case m2c::kloc_271c6: 	goto loc_271c6;
        case m2c::kloc_27213: 	goto loc_27213;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_27220(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_27220:
    _begin:
#undef arg_0
#define arg_0 6
	// 45362 arg_0           = word ptr  6 ;~ 185C:0680
cs=0x185c;eip=0x000680; 	X(PUSH(bp));	// 45364 push    bp ;~ 185C:0680
cs=0x185c;eip=0x000681; 	T(MOV(bp, sp));	// 45365 mov     bp, sp ;~ 185C:0681
cs=0x185c;eip=0x000683; 	X(PUSH(si));	// 45366 push    si ;~ 185C:0683
cs=0x185c;eip=0x000684; 	T(MOV(ax, 0x4C));	// 45367 mov     ax, 4Ch ; 'L' ;~ 185C:0684
cs=0x185c;eip=0x000687; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45368 imul    [bp+arg_0] ;~ 185C:0687
cs=0x185c;eip=0x00068a; 	T(MOV(bx, ax));	// 45369 mov     bx, ax ;~ 185C:068A
cs=0x185c;eip=0x00068c; 	T(ADD(bx, 0x6364));	// 45370 add     bx, 6364h ;~ 185C:068C
cs=0x185c;eip=0x000690; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 45371 mov     ax, [bx+4] ;~ 185C:0690
cs=0x185c;eip=0x000693; 	T(MOV(cl, 4));	// 45372 mov     cl, 4 ;~ 185C:0693
cs=0x185c;eip=0x000695; 	T(SHR(ax, cl));	// 45373 shr     ax, cl ;~ 185C:0695
cs=0x185c;eip=0x000697; 	X(PUSH(ax));	// 45374 push    ax ;~ 185C:0697
cs=0x185c;eip=0x000698; 	T(MOV(ax, 0x40));	// 45375 mov     ax, 40h ; '@' ;~ 185C:0698
cs=0x185c;eip=0x00069b; 	X(PUSH(ax));	// 45376 push    ax ;~ 185C:069B
cs=0x185c;eip=0x00069c; 	T(MOV(ax, 0x0FFFF));	// 45377 mov     ax, 0FFFFh ;~ 185C:069C
cs=0x185c;eip=0x00069f; 	X(PUSH(ax));	// 45378 push    ax ;~ 185C:069F
cs=0x185c;eip=0x0006a0; 	X(PUSH(*(dw*)(raddr(ds,bx+0x2E))));	// 45379 push    word ptr [bx+2Eh] ;~ 185C:06A0
cs=0x185c;eip=0x0006a3; 	X(PUSH(*(dw*)(raddr(ds,bx+0x2C))));	// 45380 push    word ptr [bx+2Ch] ;~ 185C:06A3
cs=0x185c;eip=0x0006a6; 	T(MOV(si, bx));	// 45381 mov     si, bx ;~ 185C:06A6
cs=0x185c;eip=0x0006a8; 	J(CALLF(audio_check_flag,0));	// 45382 call    audio_check_flag ;~ 185C:06A8
cs=0x185c;eip=0x0006ad; 	T(ADD(sp, 0x0A));	// 45383 add     sp, 0Ah ;~ 185C:06AD
cs=0x185c;eip=0x0006b0; 	X(MOV(*(dw*)(raddr(ds,si+0x14)), ax));	// 45384 mov     [si+14h], ax ;~ 185C:06B0
cs=0x185c;eip=0x0006b3; 	X(PUSH(ax));	// 45385 push    ax ;~ 185C:06B3
cs=0x185c;eip=0x0006b4; 	T(MOV(ax, 0x33BC));	// 45386 mov     ax, 33BCh ;~ 185C:06B4
cs=0x185c;eip=0x0006b7; 	X(PUSH(ax));	// 45387 push    ax ;~ 185C:06B7
cs=0x185c;eip=0x0006b8; 	J(CALLF(nopsub_3219d,0));	// 45388 call    nopsub_3219D ;~ 185C:06B8
cs=0x185c;eip=0x0006bd; 	X(POP(bx));	// 45389 pop     bx ;~ 185C:06BD
cs=0x185c;eip=0x0006be; 	X(POP(bx));	// 45390 pop     bx ;~ 185C:06BE
cs=0x185c;eip=0x0006bf; 	T(MOV(al, 1));	// 45391 mov     al, 1 ;~ 185C:06BF
cs=0x185c;eip=0x0006c1; 	X(MOV(*(raddr(ds,si+0x1A)), al));	// 45392 mov     [si+1Ah], al ;~ 185C:06C1
cs=0x185c;eip=0x0006c4; 	X(MOV(*(raddr(ds,si+0x1B)), al));	// 45393 mov     [si+1Bh], al ;~ 185C:06C4
cs=0x185c;eip=0x0006c7; 	X(POP(si));	// 45394 pop     si ;~ 185C:06C7
cs=0x185c;eip=0x0006c8; 	T(MOV(sp, bp));	// 45395 mov     sp, bp ;~ 185C:06C8
cs=0x185c;eip=0x0006ca; 	X(POP(bp));	// 45396 pop     bp ;~ 185C:06CA
cs=0x185c;eip=0x0006cb; 	J(RETF(0));	// 45397 retf ;~ 185C:06CB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knopsub_27220: 	goto nopsub_27220;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_2726c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_2726c:
    _begin:
#undef arg_0
#define arg_0 6
	// 45407 arg_0           = word ptr  6 ;~ 185C:06CC
cs=0x185c;eip=0x0006cc; 	X(PUSH(bp));	// 45409 push    bp ;~ 185C:06CC
cs=0x185c;eip=0x0006cd; 	T(MOV(bp, sp));	// 45410 mov     bp, sp ;~ 185C:06CD
cs=0x185c;eip=0x0006cf; 	X(PUSH(si));	// 45411 push    si ;~ 185C:06CF
cs=0x185c;eip=0x0006d0; 	T(MOV(ax, 0x4C));	// 45412 mov     ax, 4Ch ; 'L' ;~ 185C:06D0
cs=0x185c;eip=0x0006d3; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45413 imul    [bp+arg_0] ;~ 185C:06D3
cs=0x185c;eip=0x0006d6; 	T(MOV(bx, ax));	// 45414 mov     bx, ax ;~ 185C:06D6
cs=0x185c;eip=0x0006d8; 	T(ADD(bx, 0x6364));	// 45415 add     bx, 6364h ;~ 185C:06D8
cs=0x185c;eip=0x0006dc; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 45416 mov     ax, [bx+4] ;~ 185C:06DC
cs=0x185c;eip=0x0006df; 	T(MOV(cl, 4));	// 45417 mov     cl, 4 ;~ 185C:06DF
cs=0x185c;eip=0x0006e1; 	T(SHR(ax, cl));	// 45418 shr     ax, cl ;~ 185C:06E1
cs=0x185c;eip=0x0006e3; 	X(PUSH(ax));	// 45419 push    ax ;~ 185C:06E3
cs=0x185c;eip=0x0006e4; 	T(MOV(ax, 0x40));	// 45420 mov     ax, 40h ; '@' ;~ 185C:06E4
cs=0x185c;eip=0x0006e7; 	X(PUSH(ax));	// 45421 push    ax ;~ 185C:06E7
cs=0x185c;eip=0x0006e8; 	T(MOV(ax, 0x0FFFF));	// 45422 mov     ax, 0FFFFh ;~ 185C:06E8
cs=0x185c;eip=0x0006eb; 	X(PUSH(ax));	// 45423 push    ax ;~ 185C:06EB
cs=0x185c;eip=0x0006ec; 	X(PUSH(*(dw*)(raddr(ds,bx+0x32))));	// 45424 push    word ptr [bx+32h] ;~ 185C:06EC
cs=0x185c;eip=0x0006ef; 	X(PUSH(*(dw*)(raddr(ds,bx+0x30))));	// 45425 push    word ptr [bx+30h] ;~ 185C:06EF
cs=0x185c;eip=0x0006f2; 	T(MOV(si, bx));	// 45426 mov     si, bx ;~ 185C:06F2
cs=0x185c;eip=0x0006f4; 	J(CALLF(audio_check_flag,0));	// 45427 call    audio_check_flag ;~ 185C:06F4
cs=0x185c;eip=0x0006f9; 	T(ADD(sp, 0x0A));	// 45428 add     sp, 0Ah ;~ 185C:06F9
cs=0x185c;eip=0x0006fc; 	X(MOV(*(dw*)(raddr(ds,si+0x14)), ax));	// 45429 mov     [si+14h], ax ;~ 185C:06FC
cs=0x185c;eip=0x0006ff; 	X(MOV(*(raddr(ds,si+0x1A)), 1));	// 45430 mov     byte ptr [si+1Ah], 1 ;~ 185C:06FF
cs=0x185c;eip=0x000703; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 45431 push    [bp+arg_0] ;~ 185C:0703
cs=0x185c;eip=0x000706; 	X(PUSH(cs));	// 45432 push    cs ;~ 185C:0706
cs=0x185c;eip=0x000707; 	J(CALL(audio_function2,0));	// 45433 call    near ptr audio_function2 ;~ 185C:0707
cs=0x185c;eip=0x00070a; 	X(POP(bx));	// 45434 pop     bx ;~ 185C:070A
cs=0x185c;eip=0x00070b; 	X(POP(si));	// 45435 pop     si ;~ 185C:070B
cs=0x185c;eip=0x00070c; 	T(MOV(sp, bp));	// 45436 mov     sp, bp ;~ 185C:070C
cs=0x185c;eip=0x00070e; 	X(POP(bp));	// 45437 pop     bp ;~ 185C:070E
cs=0x185c;eip=0x00070f; 	J(RETF(0));	// 45438 retf ;~ 185C:070F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knopsub_2726c: 	goto nopsub_2726c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_272b0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_272b0:
    _begin:
#undef arg_0
#define arg_0 6
	// 45448 arg_0           = word ptr  6 ;~ 185C:0710
cs=0x185c;eip=0x000710; 	X(PUSH(bp));	// 45450 push    bp ;~ 185C:0710
cs=0x185c;eip=0x000711; 	T(MOV(bp, sp));	// 45451 mov     bp, sp ;~ 185C:0711
cs=0x185c;eip=0x000713; 	X(PUSH(si));	// 45452 push    si ;~ 185C:0713
cs=0x185c;eip=0x000714; 	T(MOV(ax, 0x4C));	// 45453 mov     ax, 4Ch ; 'L' ;~ 185C:0714
cs=0x185c;eip=0x000717; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45454 imul    [bp+arg_0] ;~ 185C:0717
cs=0x185c;eip=0x00071a; 	T(MOV(bx, ax));	// 45455 mov     bx, ax ;~ 185C:071A
cs=0x185c;eip=0x00071c; 	T(ADD(bx, 0x6364));	// 45456 add     bx, 6364h ;~ 185C:071C
cs=0x185c;eip=0x000720; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 45457 mov     ax, [bx+4] ;~ 185C:0720
cs=0x185c;eip=0x000723; 	T(MOV(cl, 4));	// 45458 mov     cl, 4 ;~ 185C:0723
cs=0x185c;eip=0x000725; 	T(SHR(ax, cl));	// 45459 shr     ax, cl ;~ 185C:0725
cs=0x185c;eip=0x000727; 	X(PUSH(ax));	// 45460 push    ax ;~ 185C:0727
cs=0x185c;eip=0x000728; 	T(MOV(ax, 0x40));	// 45461 mov     ax, 40h ; '@' ;~ 185C:0728
cs=0x185c;eip=0x00072b; 	X(PUSH(ax));	// 45462 push    ax ;~ 185C:072B
cs=0x185c;eip=0x00072c; 	T(MOV(ax, 0x0FFFF));	// 45463 mov     ax, 0FFFFh ;~ 185C:072C
cs=0x185c;eip=0x00072f; 	X(PUSH(ax));	// 45464 push    ax ;~ 185C:072F
cs=0x185c;eip=0x000730; 	X(PUSH(*(dw*)(raddr(ds,bx+0x36))));	// 45465 push    word ptr [bx+36h] ;~ 185C:0730
cs=0x185c;eip=0x000733; 	X(PUSH(*(dw*)(raddr(ds,bx+0x34))));	// 45466 push    word ptr [bx+34h] ;~ 185C:0733
cs=0x185c;eip=0x000736; 	T(MOV(si, bx));	// 45467 mov     si, bx ;~ 185C:0736
cs=0x185c;eip=0x000738; 	J(CALLF(audio_check_flag,0));	// 45468 call    audio_check_flag ;~ 185C:0738
cs=0x185c;eip=0x00073d; 	T(ADD(sp, 0x0A));	// 45469 add     sp, 0Ah ;~ 185C:073D
cs=0x185c;eip=0x000740; 	X(MOV(*(dw*)(raddr(ds,si+0x14)), ax));	// 45470 mov     [si+14h], ax ;~ 185C:0740
cs=0x185c;eip=0x000743; 	X(MOV(*(raddr(ds,si+0x1A)), 1));	// 45471 mov     byte ptr [si+1Ah], 1 ;~ 185C:0743
cs=0x185c;eip=0x000747; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 45472 push    [bp+arg_0] ;~ 185C:0747
cs=0x185c;eip=0x00074a; 	X(PUSH(cs));	// 45473 push    cs ;~ 185C:074A
cs=0x185c;eip=0x00074b; 	J(CALL(audio_function2,0));	// 45474 call    near ptr audio_function2 ;~ 185C:074B
cs=0x185c;eip=0x00074e; 	X(POP(bx));	// 45475 pop     bx ;~ 185C:074E
cs=0x185c;eip=0x00074f; 	X(POP(si));	// 45476 pop     si ;~ 185C:074F
cs=0x185c;eip=0x000750; 	T(MOV(sp, bp));	// 45477 mov     sp, bp ;~ 185C:0750
cs=0x185c;eip=0x000752; 	X(POP(bp));	// 45478 pop     bp ;~ 185C:0752
cs=0x185c;eip=0x000753; 	J(RETF(0));	// 45479 retf ;~ 185C:0753

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knopsub_272b0: 	goto nopsub_272b0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_function2_wrap(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_function2_wrap:
    _begin:
#undef arg_0
#define arg_0 6
	// 45490 arg_0           = word ptr  6 ;~ 185C:0754
cs=0x185c;eip=0x000754; 	X(PUSH(bp));	// 45492 push    bp ;~ 185C:0754
cs=0x185c;eip=0x000755; 	T(MOV(bp, sp));	// 45493 mov     bp, sp ;~ 185C:0755
cs=0x185c;eip=0x000757; 	X(PUSH(si));	// 45494 push    si ;~ 185C:0757
cs=0x185c;eip=0x000758; 	T(MOV(ax, 0x4C));	// 45495 mov     ax, 4Ch ; 'L' ;~ 185C:0758
cs=0x185c;eip=0x00075b; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45496 imul    [bp+arg_0] ;~ 185C:075B
cs=0x185c;eip=0x00075e; 	T(MOV(bx, ax));	// 45497 mov     bx, ax ;~ 185C:075E
cs=0x185c;eip=0x000760; 	T(ADD(bx, offset(dseg,audiotimers)));	// 45498 add     bx, offset audiotimers ;~ 185C:0760
cs=0x185c;eip=0x000764; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 45499 mov     ax, [bx+4] ;~ 185C:0764
cs=0x185c;eip=0x000767; 	T(MOV(cl, 4));	// 45500 mov     cl, 4 ;~ 185C:0767
cs=0x185c;eip=0x000769; 	T(SHR(ax, cl));	// 45501 shr     ax, cl ;~ 185C:0769
cs=0x185c;eip=0x00076b; 	X(PUSH(ax));	// 45502 push    ax ;~ 185C:076B
cs=0x185c;eip=0x00076c; 	T(MOV(ax, 0x64));	// 45503 mov     ax, 64h ; 'd' ;~ 185C:076C
cs=0x185c;eip=0x00076f; 	X(PUSH(ax));	// 45504 push    ax ;~ 185C:076F
cs=0x185c;eip=0x000770; 	T(MOV(ax, 0x0FFFF));	// 45505 mov     ax, 0FFFFh ;~ 185C:0770
cs=0x185c;eip=0x000773; 	X(PUSH(ax));	// 45506 push    ax ;~ 185C:0773
cs=0x185c;eip=0x000774; 	X(PUSH(*(dw*)(raddr(ds,bx+0x3A))));	// 45507 push    word ptr [bx+3Ah] ;~ 185C:0774
cs=0x185c;eip=0x000777; 	X(PUSH(*(dw*)(raddr(ds,bx+0x38))));	// 45508 push    word ptr [bx+38h] ;~ 185C:0777
cs=0x185c;eip=0x00077a; 	T(MOV(si, bx));	// 45509 mov     si, bx ;~ 185C:077A
cs=0x185c;eip=0x00077c; 	J(CALLF(audio_check_flag,0));	// 45510 call    audio_check_flag ;~ 185C:077C
cs=0x185c;eip=0x000781; 	T(ADD(sp, 0x0A));	// 45511 add     sp, 0Ah ;~ 185C:0781
cs=0x185c;eip=0x000784; 	X(MOV(*(dw*)(raddr(ds,si+0x14)), ax));	// 45512 mov     [si+14h], ax ;~ 185C:0784
cs=0x185c;eip=0x000787; 	X(MOV(*(raddr(ds,si+0x1A)), 1));	// 45513 mov     byte ptr [si+1Ah], 1 ;~ 185C:0787
cs=0x185c;eip=0x00078b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 45514 push    [bp+arg_0] ;~ 185C:078B
cs=0x185c;eip=0x00078e; 	X(PUSH(cs));	// 45515 push    cs ;~ 185C:078E
cs=0x185c;eip=0x00078f; 	J(CALL(audio_function2,0));	// 45516 call    near ptr audio_function2 ;~ 185C:078F
cs=0x185c;eip=0x000792; 	X(POP(bx));	// 45517 pop     bx ;~ 185C:0792
cs=0x185c;eip=0x000793; 	X(POP(si));	// 45518 pop     si ;~ 185C:0793
cs=0x185c;eip=0x000794; 	T(MOV(sp, bp));	// 45519 mov     sp, bp ;~ 185C:0794
cs=0x185c;eip=0x000796; 	X(POP(bp));	// 45520 pop     bp ;~ 185C:0796
cs=0x185c;eip=0x000797; 	J(RETF(0));	// 45521 retf ;~ 185C:0797

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_function2_wrap: 	goto audio_function2_wrap;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_op_unk3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_op_unk3:
    _begin:
#undef arg_0
#define arg_0 6
	// 45531 arg_0           = word ptr  6 ;~ 185C:0798
cs=0x185c;eip=0x000798; 	X(PUSH(bp));	// 45533 push    bp ;~ 185C:0798
cs=0x185c;eip=0x000799; 	T(MOV(bp, sp));	// 45534 mov     bp, sp ;~ 185C:0799
cs=0x185c;eip=0x00079b; 	X(PUSH(si));	// 45535 push    si ;~ 185C:079B
cs=0x185c;eip=0x00079c; 	T(MOV(ax, 0x4C));	// 45536 mov     ax, 4Ch ; 'L' ;~ 185C:079C
cs=0x185c;eip=0x00079f; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45537 imul    [bp+arg_0] ;~ 185C:079F
cs=0x185c;eip=0x0007a2; 	T(MOV(bx, ax));	// 45538 mov     bx, ax ;~ 185C:07A2
cs=0x185c;eip=0x0007a4; 	T(ADD(bx, offset(dseg,audiotimers)));	// 45539 add     bx, offset audiotimers ;~ 185C:07A4
cs=0x185c;eip=0x0007a8; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 45540 mov     ax, [bx+4] ;~ 185C:07A8
cs=0x185c;eip=0x0007ab; 	T(MOV(cl, 4));	// 45541 mov     cl, 4 ;~ 185C:07AB
cs=0x185c;eip=0x0007ad; 	T(SHR(ax, cl));	// 45542 shr     ax, cl ;~ 185C:07AD
cs=0x185c;eip=0x0007af; 	X(PUSH(ax));	// 45543 push    ax ;~ 185C:07AF
cs=0x185c;eip=0x0007b0; 	T(MOV(ax, 0x40));	// 45544 mov     ax, 40h ; '@' ;~ 185C:07B0
cs=0x185c;eip=0x0007b3; 	X(PUSH(ax));	// 45545 push    ax ;~ 185C:07B3
cs=0x185c;eip=0x0007b4; 	T(MOV(ax, 0x0FFFF));	// 45546 mov     ax, 0FFFFh ;~ 185C:07B4
cs=0x185c;eip=0x0007b7; 	X(PUSH(ax));	// 45547 push    ax ;~ 185C:07B7
cs=0x185c;eip=0x0007b8; 	X(PUSH(*(dw*)(raddr(ds,bx+0x46))));	// 45548 push    word ptr [bx+46h] ;~ 185C:07B8
cs=0x185c;eip=0x0007bb; 	X(PUSH(*(dw*)(raddr(ds,bx+0x44))));	// 45549 push    word ptr [bx+44h] ;~ 185C:07BB
cs=0x185c;eip=0x0007be; 	T(MOV(si, bx));	// 45550 mov     si, bx ;~ 185C:07BE
cs=0x185c;eip=0x0007c0; 	J(CALLF(audio_check_flag,0));	// 45551 call    audio_check_flag ;~ 185C:07C0
cs=0x185c;eip=0x0007c5; 	T(ADD(sp, 0x0A));	// 45552 add     sp, 0Ah ;~ 185C:07C5
cs=0x185c;eip=0x0007c8; 	X(MOV(*(dw*)(raddr(ds,si+0x14)), ax));	// 45553 mov     [si+14h], ax ;~ 185C:07C8
cs=0x185c;eip=0x0007cb; 	X(MOV(*(raddr(ds,si+0x1A)), 1));	// 45554 mov     byte ptr [si+1Ah], 1 ;~ 185C:07CB
cs=0x185c;eip=0x0007cf; 	X(POP(si));	// 45555 pop     si ;~ 185C:07CF
cs=0x185c;eip=0x0007d0; 	T(MOV(sp, bp));	// 45556 mov     sp, bp ;~ 185C:07D0
cs=0x185c;eip=0x0007d2; 	X(POP(bp));	// 45557 pop     bp ;~ 185C:07D2
cs=0x185c;eip=0x0007d3; 	J(RETF(0));	// 45558 retf ;~ 185C:07D3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_op_unk3: 	goto audio_op_unk3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_op_unk4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_op_unk4:
    _begin:
#undef arg_0
#define arg_0 6
	// 45568 arg_0           = word ptr  6 ;~ 185C:07D4
cs=0x185c;eip=0x0007d4; 	X(PUSH(bp));	// 45570 push    bp ;~ 185C:07D4
cs=0x185c;eip=0x0007d5; 	T(MOV(bp, sp));	// 45571 mov     bp, sp ;~ 185C:07D5
cs=0x185c;eip=0x0007d7; 	X(PUSH(si));	// 45572 push    si ;~ 185C:07D7
cs=0x185c;eip=0x0007d8; 	T(MOV(ax, 0x4C));	// 45573 mov     ax, 4Ch ; 'L' ;~ 185C:07D8
cs=0x185c;eip=0x0007db; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45574 imul    [bp+arg_0] ;~ 185C:07DB
cs=0x185c;eip=0x0007de; 	T(MOV(bx, ax));	// 45575 mov     bx, ax ;~ 185C:07DE
cs=0x185c;eip=0x0007e0; 	T(ADD(bx, offset(dseg,audiotimers)));	// 45576 add     bx, offset audiotimers ;~ 185C:07E0
cs=0x185c;eip=0x0007e4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 45577 mov     ax, [bx+4] ;~ 185C:07E4
cs=0x185c;eip=0x0007e7; 	T(MOV(cl, 4));	// 45578 mov     cl, 4 ;~ 185C:07E7
cs=0x185c;eip=0x0007e9; 	T(SHR(ax, cl));	// 45579 shr     ax, cl ;~ 185C:07E9
cs=0x185c;eip=0x0007eb; 	X(PUSH(ax));	// 45580 push    ax ;~ 185C:07EB
cs=0x185c;eip=0x0007ec; 	T(MOV(ax, 0x40));	// 45581 mov     ax, 40h ; '@' ;~ 185C:07EC
cs=0x185c;eip=0x0007ef; 	X(PUSH(ax));	// 45582 push    ax ;~ 185C:07EF
cs=0x185c;eip=0x0007f0; 	T(MOV(ax, 0x0FFFF));	// 45583 mov     ax, 0FFFFh ;~ 185C:07F0
cs=0x185c;eip=0x0007f3; 	X(PUSH(ax));	// 45584 push    ax ;~ 185C:07F3
cs=0x185c;eip=0x0007f4; 	X(PUSH(*(dw*)(raddr(ds,bx+0x4A))));	// 45585 push    word ptr [bx+4Ah] ;~ 185C:07F4
cs=0x185c;eip=0x0007f7; 	X(PUSH(*(dw*)(raddr(ds,bx+0x48))));	// 45586 push    word ptr [bx+48h] ;~ 185C:07F7
cs=0x185c;eip=0x0007fa; 	T(MOV(si, bx));	// 45587 mov     si, bx ;~ 185C:07FA
cs=0x185c;eip=0x0007fc; 	J(CALLF(audio_check_flag,0));	// 45588 call    audio_check_flag ;~ 185C:07FC
cs=0x185c;eip=0x000801; 	T(ADD(sp, 0x0A));	// 45589 add     sp, 0Ah ;~ 185C:0801
cs=0x185c;eip=0x000804; 	X(MOV(*(dw*)(raddr(ds,si+0x14)), ax));	// 45590 mov     [si+14h], ax ;~ 185C:0804
cs=0x185c;eip=0x000807; 	X(MOV(*(raddr(ds,si+0x1A)), 1));	// 45591 mov     byte ptr [si+1Ah], 1 ;~ 185C:0807
cs=0x185c;eip=0x00080b; 	X(POP(si));	// 45592 pop     si ;~ 185C:080B
cs=0x185c;eip=0x00080c; 	T(MOV(sp, bp));	// 45593 mov     sp, bp ;~ 185C:080C
cs=0x185c;eip=0x00080e; 	X(POP(bp));	// 45594 pop     bp ;~ 185C:080E
cs=0x185c;eip=0x00080f; 	J(RETF(0));	// 45595 retf ;~ 185C:080F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_op_unk4: 	goto audio_op_unk4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_op_unk5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_op_unk5:
    _begin:
#undef var_2
#define var_2 -2
	// 45605 var_2           = word ptr -2 ;~ 185C:0810
#undef arg_0
#define arg_0 6
	// 45606 arg_0           = word ptr  6 ;~ 185C:0810
cs=0x185c;eip=0x000810; 	X(PUSH(bp));	// 45608 push    bp ;~ 185C:0810
cs=0x185c;eip=0x000811; 	T(MOV(bp, sp));	// 45609 mov     bp, sp ;~ 185C:0811
cs=0x185c;eip=0x000813; 	T(SUB(sp, 4));	// 45610 sub     sp, 4 ;~ 185C:0813
cs=0x185c;eip=0x000816; 	X(PUSH(di));	// 45611 push    di ;~ 185C:0816
cs=0x185c;eip=0x000817; 	X(PUSH(si));	// 45612 push    si ;~ 185C:0817
cs=0x185c;eip=0x000818; 	T(MOV(ax, 0x4C));	// 45613 mov     ax, 4Ch ; 'L' ;~ 185C:0818
cs=0x185c;eip=0x00081b; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45614 imul    [bp+arg_0] ;~ 185C:081B
cs=0x185c;eip=0x00081e; 	T(MOV(si, ax));	// 45615 mov     si, ax ;~ 185C:081E
cs=0x185c;eip=0x000820; 	T(ADD(si, offset(dseg,audiotimers)));	// 45616 add     si, offset audiotimers ;~ 185C:0820
cs=0x185c;eip=0x000824; 	T(ax = si+0x1C);	// 45617 lea     ax, [si+1Ch] ;~ 185C:0824
cs=0x185c;eip=0x000827; 	T(MOV(di, ax));	// 45618 mov     di, ax ;~ 185C:0827
cs=0x185c;eip=0x000829; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ds));	// 45619 mov     [bp+var_2], ds ;~ 185C:0829
cs=0x185c;eip=0x00082c; 	T(CMP(*(dw*)(raddr(ds,si+0x16)), 0x0FFFF));	// 45620 cmp     word ptr [si+16h], 0FFFFh ;~ 185C:082C
cs=0x185c;eip=0x000830; 	J(JZ(loc_273db));	// 45621 jz      short loc_273DB ;~ 185C:0830
cs=0x185c;eip=0x000832; 	X(PUSH(*(dw*)(raddr(ds,si+0x16))));	// 45622 push    word ptr [si+16h] ;~ 185C:0832
cs=0x185c;eip=0x000835; 	J(CALLF(audio_init_chunk2,0));	// 45623 call    audio_init_chunk2 ;~ 185C:0835
cs=0x185c;eip=0x00083a; 	X(POP(bx));	// 45624 pop     bx ;~ 185C:083A
loc_273db:
	// 7399 
cs=0x185c;eip=0x00083b; 	T(MOV(cl, 4));	// 45627 mov     cl, 4 ;~ 185C:083B
cs=0x185c;eip=0x00083d; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 45628 mov     ax, [si+4] ;~ 185C:083D
cs=0x185c;eip=0x000840; 	T(SHR(ax, cl));	// 45629 shr     ax, cl ;~ 185C:0840
cs=0x185c;eip=0x000842; 	X(PUSH(ax));	// 45630 push    ax ;~ 185C:0842
cs=0x185c;eip=0x000843; 	T(MOV(ax, 0x40));	// 45631 mov     ax, 40h ; '@' ;~ 185C:0843
cs=0x185c;eip=0x000846; 	X(PUSH(ax));	// 45632 push    ax ;~ 185C:0846
cs=0x185c;eip=0x000847; 	T(MOV(ax, 0x0FFFF));	// 45633 mov     ax, 0FFFFh ;~ 185C:0847
cs=0x185c;eip=0x00084a; 	X(PUSH(ax));	// 45634 push    ax ;~ 185C:084A
cs=0x185c;eip=0x00084b; 	T(MOV(es, *(dw*)(raddr(ss,bp+var_2))));	// 45635 mov     es, [bp+var_2] ;~ 185C:084B
cs=0x185c;eip=0x00084e; 	X(PUSH(*(dw*)(raddr(es,di+0x22))));	// 45636 push    word ptr es:[di+22h] ;~ 185C:084E
cs=0x185c;eip=0x000852; 	X(PUSH(*(dw*)(raddr(es,di+0x20))));	// 45637 push    word ptr es:[di+20h] ;~ 185C:0852
cs=0x185c;eip=0x000856; 	J(CALLF(audio_check_flag,0));	// 45638 call    audio_check_flag ;~ 185C:0856
cs=0x185c;eip=0x00085b; 	T(ADD(sp, 0x0A));	// 45639 add     sp, 0Ah ;~ 185C:085B
cs=0x185c;eip=0x00085e; 	X(MOV(*(dw*)(raddr(ds,si+0x16)), ax));	// 45640 mov     [si+16h], ax ;~ 185C:085E
cs=0x185c;eip=0x000861; 	X(MOV(*(raddr(ds,si+0x1A)), 1));	// 45641 mov     byte ptr [si+1Ah], 1 ;~ 185C:0861
cs=0x185c;eip=0x000865; 	X(POP(si));	// 45642 pop     si ;~ 185C:0865
cs=0x185c;eip=0x000866; 	X(POP(di));	// 45643 pop     di ;~ 185C:0866
cs=0x185c;eip=0x000867; 	T(MOV(sp, bp));	// 45644 mov     sp, bp ;~ 185C:0867
cs=0x185c;eip=0x000869; 	X(POP(bp));	// 45645 pop     bp ;~ 185C:0869
cs=0x185c;eip=0x00086a; 	J(RETF(0));	// 45646 retf ;~ 185C:086A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_op_unk5: 	goto audio_op_unk5;
        case m2c::kloc_273db: 	goto loc_273db;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_op_unk6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_op_unk6:
    _begin:
#undef var_2
#define var_2 -2
	// 45656 var_2           = word ptr -2 ;~ 185C:086B
#undef arg_0
#define arg_0 6
	// 45657 arg_0           = word ptr  6 ;~ 185C:086B
cs=0x185c;eip=0x00086b; 	X(PUSH(bp));	// 45659 push    bp ;~ 185C:086B
cs=0x185c;eip=0x00086c; 	T(MOV(bp, sp));	// 45660 mov     bp, sp ;~ 185C:086C
cs=0x185c;eip=0x00086e; 	T(SUB(sp, 4));	// 45661 sub     sp, 4 ;~ 185C:086E
cs=0x185c;eip=0x000871; 	X(PUSH(di));	// 45662 push    di ;~ 185C:0871
cs=0x185c;eip=0x000872; 	X(PUSH(si));	// 45663 push    si ;~ 185C:0872
cs=0x185c;eip=0x000873; 	T(MOV(ax, 0x4C));	// 45664 mov     ax, 4Ch ; 'L' ;~ 185C:0873
cs=0x185c;eip=0x000876; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45665 imul    [bp+arg_0] ;~ 185C:0876
cs=0x185c;eip=0x000879; 	T(MOV(si, ax));	// 45666 mov     si, ax ;~ 185C:0879
cs=0x185c;eip=0x00087b; 	T(ADD(si, offset(dseg,audiotimers)));	// 45667 add     si, offset audiotimers ;~ 185C:087B
cs=0x185c;eip=0x00087f; 	T(ax = si+0x1C);	// 45668 lea     ax, [si+1Ch] ;~ 185C:087F
cs=0x185c;eip=0x000882; 	T(MOV(di, ax));	// 45669 mov     di, ax ;~ 185C:0882
cs=0x185c;eip=0x000884; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ds));	// 45670 mov     [bp+var_2], ds ;~ 185C:0884
cs=0x185c;eip=0x000887; 	T(CMP(*(dw*)(raddr(ds,si+0x16)), 0x0FFFF));	// 45671 cmp     word ptr [si+16h], 0FFFFh ;~ 185C:0887
cs=0x185c;eip=0x00088b; 	J(JZ(loc_27436));	// 45672 jz      short loc_27436 ;~ 185C:088B
cs=0x185c;eip=0x00088d; 	X(PUSH(*(dw*)(raddr(ds,si+0x16))));	// 45673 push    word ptr [si+16h] ;~ 185C:088D
cs=0x185c;eip=0x000890; 	J(CALLF(audio_init_chunk2,0));	// 45674 call    audio_init_chunk2 ;~ 185C:0890
cs=0x185c;eip=0x000895; 	X(POP(bx));	// 45675 pop     bx ;~ 185C:0895
loc_27436:
	// 7400 
cs=0x185c;eip=0x000896; 	T(MOV(cl, 4));	// 45678 mov     cl, 4 ;~ 185C:0896
cs=0x185c;eip=0x000898; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 45679 mov     ax, [si+4] ;~ 185C:0898
cs=0x185c;eip=0x00089b; 	T(SHR(ax, cl));	// 45680 shr     ax, cl ;~ 185C:089B
cs=0x185c;eip=0x00089d; 	X(PUSH(ax));	// 45681 push    ax ;~ 185C:089D
cs=0x185c;eip=0x00089e; 	T(MOV(ax, 0x40));	// 45682 mov     ax, 40h ; '@' ;~ 185C:089E
cs=0x185c;eip=0x0008a1; 	X(PUSH(ax));	// 45683 push    ax ;~ 185C:08A1
cs=0x185c;eip=0x0008a2; 	T(MOV(ax, 0x0FFFF));	// 45684 mov     ax, 0FFFFh ;~ 185C:08A2
cs=0x185c;eip=0x0008a5; 	X(PUSH(ax));	// 45685 push    ax ;~ 185C:08A5
cs=0x185c;eip=0x0008a6; 	T(MOV(es, *(dw*)(raddr(ss,bp+var_2))));	// 45686 mov     es, [bp+var_2] ;~ 185C:08A6
cs=0x185c;eip=0x0008a9; 	X(PUSH(*(dw*)(raddr(es,di+0x26))));	// 45687 push    word ptr es:[di+26h] ;~ 185C:08A9
cs=0x185c;eip=0x0008ad; 	X(PUSH(*(dw*)(raddr(es,di+0x24))));	// 45688 push    word ptr es:[di+24h] ;~ 185C:08AD
cs=0x185c;eip=0x0008b1; 	J(CALLF(audio_check_flag,0));	// 45689 call    audio_check_flag ;~ 185C:08B1
cs=0x185c;eip=0x0008b6; 	T(ADD(sp, 0x0A));	// 45690 add     sp, 0Ah ;~ 185C:08B6
cs=0x185c;eip=0x0008b9; 	X(MOV(*(dw*)(raddr(ds,si+0x16)), ax));	// 45691 mov     [si+16h], ax ;~ 185C:08B9
cs=0x185c;eip=0x0008bc; 	X(MOV(*(raddr(ds,si+0x1A)), 1));	// 45692 mov     byte ptr [si+1Ah], 1 ;~ 185C:08BC
cs=0x185c;eip=0x0008c0; 	X(POP(si));	// 45693 pop     si ;~ 185C:08C0
cs=0x185c;eip=0x0008c1; 	X(POP(di));	// 45694 pop     di ;~ 185C:08C1
cs=0x185c;eip=0x0008c2; 	T(MOV(sp, bp));	// 45695 mov     sp, bp ;~ 185C:08C2
cs=0x185c;eip=0x0008c4; 	X(POP(bp));	// 45696 pop     bp ;~ 185C:08C4
cs=0x185c;eip=0x0008c5; 	J(RETF(0));	// 45697 retf ;~ 185C:08C5

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_op_unk6: 	goto audio_op_unk6;
        case m2c::kloc_27436: 	goto loc_27436;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_op_unk7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_op_unk7:
    _begin:
#undef arg_0
#define arg_0 6
	// 45708 arg_0           = word ptr  6 ;~ 185C:08C6
cs=0x185c;eip=0x0008c6; 	X(PUSH(bp));	// 45710 push    bp ;~ 185C:08C6
cs=0x185c;eip=0x0008c7; 	T(MOV(bp, sp));	// 45711 mov     bp, sp ;~ 185C:08C7
cs=0x185c;eip=0x0008c9; 	X(PUSH(si));	// 45712 push    si ;~ 185C:08C9
cs=0x185c;eip=0x0008ca; 	T(MOV(ax, 0x4C));	// 45713 mov     ax, 4Ch ; 'L' ;~ 185C:08CA
cs=0x185c;eip=0x0008cd; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45714 imul    [bp+arg_0] ;~ 185C:08CD
cs=0x185c;eip=0x0008d0; 	T(MOV(bx, ax));	// 45715 mov     bx, ax ;~ 185C:08D0
cs=0x185c;eip=0x0008d2; 	X(PUSH(*(dw*)(((audiotimers)+0x16)+bx)));	// 45716 push    word ptr (audiotimers+16h)[bx] ;~ 185C:08D2
cs=0x185c;eip=0x0008d6; 	T(MOV(si, ax));	// 45717 mov     si, ax ;~ 185C:08D6
cs=0x185c;eip=0x0008d8; 	J(CALLF(audio_init_chunk2,0));	// 45718 call    audio_init_chunk2 ;~ 185C:08D8
cs=0x185c;eip=0x0008dd; 	X(POP(bx));	// 45719 pop     bx ;~ 185C:08DD
cs=0x185c;eip=0x0008de; 	X(MOV(*(dw*)(((audiotimers)+0x16)+si), 0x0FFFF));	// 45720 mov     word ptr (audiotimers+16h)[si], 0FFFFh ;~ 185C:08DE
cs=0x185c;eip=0x0008e4; 	X(POP(si));	// 45721 pop     si ;~ 185C:08E4
cs=0x185c;eip=0x0008e5; 	T(MOV(sp, bp));	// 45722 mov     sp, bp ;~ 185C:08E5
cs=0x185c;eip=0x0008e7; 	X(POP(bp));	// 45723 pop     bp ;~ 185C:08E7
cs=0x185c;eip=0x0008e8; 	J(RETF(0));	// 45724 retf ;~ 185C:08E8

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_op_unk7: 	goto audio_op_unk7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_27489(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_27489:
    _begin:
#undef arg_0
#define arg_0 6
	// 45734 arg_0           = word ptr  6 ;~ 185C:08E9
cs=0x185c;eip=0x0008e9; 	X(PUSH(bp));	// 45736 push    bp ;~ 185C:08E9
cs=0x185c;eip=0x0008ea; 	T(MOV(bp, sp));	// 45737 mov     bp, sp ;~ 185C:08EA
cs=0x185c;eip=0x0008ec; 	X(PUSH(si));	// 45738 push    si ;~ 185C:08EC
cs=0x185c;eip=0x0008ed; 	T(MOV(ax, 0x4C));	// 45739 mov     ax, 4Ch ; 'L' ;~ 185C:08ED
cs=0x185c;eip=0x0008f0; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45740 imul    [bp+arg_0] ;~ 185C:08F0
cs=0x185c;eip=0x0008f3; 	T(MOV(bx, ax));	// 45741 mov     bx, ax ;~ 185C:08F3
cs=0x185c;eip=0x0008f5; 	T(MOV(si, *(dw*)(raddr(ds,bx+0x6378))));	// 45742 mov     si, [bx+6378h] ;~ 185C:08F5
cs=0x185c;eip=0x0008f9; 	T(CMP(si, 0x0FFFF));	// 45743 cmp     si, 0FFFFh ;~ 185C:08F9
cs=0x185c;eip=0x0008fc; 	J(JLE(loc_274a7));	// 45744 jle     short loc_274A7 ;~ 185C:08FC
cs=0x185c;eip=0x0008fe; 	X(PUSH(si));	// 45745 push    si ;~ 185C:08FE
cs=0x185c;eip=0x0008ff; 	J(CALLF(sub_3771e,0));	// 45746 call    sub_3771E ;~ 185C:08FF
cs=0x185c;eip=0x000904; 	X(POP(bx));	// 45747 pop     bx ;~ 185C:0904
cs=0x185c;eip=0x000905; 	J(JMP(loc_274aa));	// 45748 jmp     short loc_274AA ;~ 185C:0905
loc_274a7:
	// 7401 
cs=0x185c;eip=0x000907; 	T(MOV(ax, 1));	// 45752 mov     ax, 1 ;~ 185C:0907
loc_274aa:
	// 7402 
cs=0x185c;eip=0x00090a; 	X(POP(si));	// 45755 pop     si ;~ 185C:090A
cs=0x185c;eip=0x00090b; 	T(MOV(sp, bp));	// 45756 mov     sp, bp ;~ 185C:090B
cs=0x185c;eip=0x00090d; 	X(POP(bp));	// 45757 pop     bp ;~ 185C:090D
cs=0x185c;eip=0x00090e; 	J(RETF(0));	// 45758 retf ;~ 185C:090E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_274a7: 	goto loc_274a7;
        case m2c::kloc_274aa: 	goto loc_274aa;
        case m2c::knopsub_27489: 	goto nopsub_27489;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

