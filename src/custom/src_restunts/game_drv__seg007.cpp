/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group8:
    _begin:
audio_add_driver_timer:
	// 44532 
cs=0x185c;eip=0x00000e; 	T(MOV(bx, offset(dseg,audiotimers)));	// 44533 mov     bx, offset audiotimers ;~ 185C:000E
ret_185c_11:
	// 7478 
cs=0x185c;eip=0x000011; 	R(JMP(loc_26bb9));	// 44534 jmp     short loc_26BB9 ;~ 185C:0011
loc_26bb3:
	// 7479 
cs=0x185c;eip=0x000013; 	X(MOV(*(raddr(ds,bx)), 0));	// 44538 mov     byte ptr [bx], 0 ;~ 185C:0013
cs=0x185c;eip=0x000016; 	T(ADD(bx, 0x4C));	// 44539 add     bx, 4Ch ; 'L' ;~ 185C:0016
loc_26bb9:
	// 7480 
cs=0x185c;eip=0x000019; 	T(CMP(bx, 0x6AD0));	// 44542 cmp     bx, 6AD0h ;~ 185C:0019
cs=0x185c;eip=0x00001d; 	R(JC(loc_26bb3));	// 44543 jb      short loc_26BB3 ;~ 185C:001D
cs=0x185c;eip=0x00001f; 	X(MOV(word_42240, 0x16));	// 44544 mov     word_42240, 16h ;~ 185C:001F
cs=0x185c;eip=0x000025; 	T(MOV(ax, m2c::kaudio_driver_timer));	// 44545 mov     ax, offset audio_driver_timer ;~ 185C:0025
cs=0x185c;eip=0x000028; 	T(MOV(dx, seg_offset(seg007)));	// 44546 mov     dx, seg seg007 ;~ 185C:0028
cs=0x185c;eip=0x00002b; 	X(PUSH(dx));	// 44547 push    dx ;~ 185C:002B
cs=0x185c;eip=0x00002c; 	X(PUSH(ax));	// 44548 push    ax ;~ 185C:002C
cs=0x185c;eip=0x00002d; 	R(CALLF(timer_reg_callback,0));	// 44549 call    timer_reg_callback ;~ 185C:002D
cs=0x185c;eip=0x000032; 	X(POP(bx));	// 44550 pop     bx ;~ 185C:0032
cs=0x185c;eip=0x000033; 	X(POP(bx));	// 44551 pop     bx ;~ 185C:0033
cs=0x185c;eip=0x000034; 	R(RETF(0));	// 44552 retf ;~ 185C:0034
audio_remove_driver_timer:
	// 44559 
cs=0x185c;eip=0x000035; 	X(PUSH(si));	// 44561 push    si ;~ 185C:0035
ret_185c_36:
	// 7481 
cs=0x185c;eip=0x000036; 	T(MOV(si, offset(dseg,audiotimers)));	// 44562 mov     si, offset audiotimers ;~ 185C:0036
cs=0x185c;eip=0x000039; 	R(JMP(loc_26bef));	// 44563 jmp     short loc_26BEF ;~ 185C:0039
loc_26bdb:
	// 7482 
cs=0x185c;eip=0x00003b; 	T(CMP(*(raddr(ds,si)), 1));	// 44567 cmp     byte ptr [si], 1 ;~ 185C:003B
cs=0x185c;eip=0x00003e; 	R(JNZ(loc_26be9));	// 44568 jnz     short loc_26BE9 ;~ 185C:003E
cs=0x185c;eip=0x000040; 	X(PUSH(*(dw*)(raddr(ds,si+2))));	// 44569 push    word ptr [si+2] ;~ 185C:0040
cs=0x185c;eip=0x000043; 	R(CALLF(sub_374de,0));	// 44570 call    sub_374DE ;~ 185C:0043
cs=0x185c;eip=0x000048; 	X(POP(bx));	// 44571 pop     bx ;~ 185C:0048
loc_26be9:
	// 7483 
cs=0x185c;eip=0x000049; 	X(MOV(*(raddr(ds,si)), 0));	// 44574 mov     byte ptr [si], 0 ;~ 185C:0049
cs=0x185c;eip=0x00004c; 	T(ADD(si, 0x4C));	// 44575 add     si, 4Ch ; 'L' ;~ 185C:004C
loc_26bef:
	// 7484 
cs=0x185c;eip=0x00004f; 	T(CMP(si, 0x6AD0));	// 44578 cmp     si, 6AD0h ;~ 185C:004F
cs=0x185c;eip=0x000053; 	R(JC(loc_26bdb));	// 44579 jb      short loc_26BDB ;~ 185C:0053
cs=0x185c;eip=0x000055; 	T(MOV(ax, m2c::kaudio_driver_timer));	// 44580 mov     ax, offset audio_driver_timer ;~ 185C:0055
cs=0x185c;eip=0x000058; 	T(MOV(dx, seg_offset(seg007)));	// 44581 mov     dx, seg seg007 ;~ 185C:0058
cs=0x185c;eip=0x00005b; 	X(PUSH(dx));	// 44582 push    dx ;~ 185C:005B
cs=0x185c;eip=0x00005c; 	X(PUSH(ax));	// 44583 push    ax ;~ 185C:005C
cs=0x185c;eip=0x00005d; 	R(CALLF(timer_remove_callback,0));	// 44584 call    timer_remove_callback ;~ 185C:005D
cs=0x185c;eip=0x000062; 	X(POP(bx));	// 44585 pop     bx ;~ 185C:0062
cs=0x185c;eip=0x000063; 	X(POP(bx));	// 44586 pop     bx ;~ 185C:0063
cs=0x185c;eip=0x000064; 	X(POP(si));	// 44587 pop     si ;~ 185C:0064
cs=0x185c;eip=0x000065; 	R(RETF(0));	// 44588 retf ;~ 185C:0065
pad_id:
	// 44596 
#undef arg_0
#define arg_0 6
	// 44599 arg_0           = dword ptr  6 ;~ 185C:0066
ret_185c_66:
	// 7485 
cs=0x185c;eip=0x000066; 	X(PUSH(bp));	// 44601 push    bp ;~ 185C:0066
cs=0x185c;eip=0x000067; 	T(MOV(bp, sp));	// 44602 mov     bp, sp ;~ 185C:0067
cs=0x185c;eip=0x000069; 	X(PUSH(si));	// 44603 push    si ;~ 185C:0069
cs=0x185c;eip=0x00006a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 44604 les     bx, [bp+arg_0] ;~ 185C:006A
cs=0x185c;eip=0x00006d; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 44605 mov     ax, es:[bx] ;~ 185C:006D
cs=0x185c;eip=0x000070; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 44606 mov     dx, es:[bx+2] ;~ 185C:0070
cs=0x185c;eip=0x000074; 	X(MOV(word_42242, ax));	// 44607 mov     word_42242, ax ;~ 185C:0074
cs=0x185c;eip=0x000077; 	X(MOV(word_42244, dx));	// 44608 mov     word_42244, dx ;~ 185C:0077
cs=0x185c;eip=0x00007b; 	X(MOV(byte_42246, 0));	// 44609 mov     byte_42246, 0 ;~ 185C:007B
cs=0x185c;eip=0x000080; 	T(SUB(si, si));	// 44610 sub     si, si ;~ 185C:0080
loc_26c22:
	// 7486 
cs=0x185c;eip=0x000082; 	T(CMP(*(db*)(((db*)&word_42242)+si), 0));	// 44613 cmp     byte ptr word_42242[si], 0 ;~ 185C:0082
cs=0x185c;eip=0x000087; 	R(JNZ(loc_26c2e));	// 44614 jnz     short loc_26C2E ;~ 185C:0087
cs=0x185c;eip=0x000089; 	X(MOV(*(db*)(((db*)&word_42242)+si), 0x20));	// 44615 mov     byte ptr word_42242[si], 20h ; ' ' ;~ 185C:0089
loc_26c2e:
	// 7487 
cs=0x185c;eip=0x00008e; 	T(INC(si));	// 44618 inc     si ;~ 185C:008E
cs=0x185c;eip=0x00008f; 	T(CMP(si, 4));	// 44619 cmp     si, 4 ;~ 185C:008F
cs=0x185c;eip=0x000092; 	R(JL(loc_26c22));	// 44620 jl      short loc_26C22 ;~ 185C:0092
cs=0x185c;eip=0x000094; 	T(MOV(ax, offset(dseg,word_42242)));	// 44621 mov     ax, offset word_42242 ;~ 185C:0094
cs=0x185c;eip=0x000097; 	X(POP(si));	// 44622 pop     si ;~ 185C:0097
cs=0x185c;eip=0x000098; 	T(MOV(sp, bp));	// 44623 mov     sp, bp ;~ 185C:0098
cs=0x185c;eip=0x00009a; 	X(POP(bp));	// 44624 pop     bp ;~ 185C:009A
cs=0x185c;eip=0x00009b; 	R(RETF(0));	// 44625 retf ;~ 185C:009B
audio_init_engine:
	// 44633 
#undef var_18
#define var_18 -0x18
	// 44636 var_18          = dword ptr -18h ;~ 185C:009C
#undef var_14
#define var_14 -0x14
	// 44637 var_14          = word ptr -14h ;~ 185C:009C
#undef var_12
#define var_12 -0x12
	// 44638 var_12          = word ptr -12h ;~ 185C:009C
#undef var_10
#define var_10 -0x10
	// 44639 var_10          = word ptr -10h ;~ 185C:009C
#undef var_e
#define var_e -0x0E
	// 44640 var_E           = word ptr -0Eh ;~ 185C:009C
#undef var_8
#define var_8 -8
	// 44641 var_8           = dword ptr -8 ;~ 185C:009C
#undef var_4
#define var_4 -4
	// 44642 var_4           = word ptr -4 ;~ 185C:009C
#undef var_2
#define var_2 -2
	// 44643 var_2           = word ptr -2 ;~ 185C:009C
#undef arg_2
#define arg_2 8
	// 44644 arg_2           = word ptr  8 ;~ 185C:009C
#undef arg_4
#define arg_4 0x0A
	// 44645 arg_4           = word ptr  0Ah ;~ 185C:009C
#undef arg_6
#define arg_6 0x0C
	// 44646 arg_6           = word ptr  0Ch ;~ 185C:009C
#undef arg_8
#define arg_8 0x0E
	// 44647 arg_8           = word ptr  0Eh ;~ 185C:009C
#undef arg_a
#define arg_a 0x10
	// 44648 arg_A           = word ptr  10h ;~ 185C:009C
#undef arg_c
#define arg_c 0x12
	// 44649 arg_C           = word ptr  12h ;~ 185C:009C
ret_185c_9c:
	// 7488 
cs=0x185c;eip=0x00009c; 	X(PUSH(bp));	// 44651 push    bp ;~ 185C:009C
cs=0x185c;eip=0x00009d; 	T(MOV(bp, sp));	// 44652 mov     bp, sp ;~ 185C:009D
cs=0x185c;eip=0x00009f; 	T(SUB(sp, 0x18));	// 44653 sub     sp, 18h ;~ 185C:009F
cs=0x185c;eip=0x0000a2; 	X(PUSH(di));	// 44654 push    di ;~ 185C:00A2
cs=0x185c;eip=0x0000a3; 	X(PUSH(si));	// 44655 push    si ;~ 185C:00A3
cs=0x185c;eip=0x0000a4; 	T(MOV(di, 0x0FFFF));	// 44656 mov     di, 0FFFFh ;~ 185C:00A4
cs=0x185c;eip=0x0000a7; 	T(SUB(dx, dx));	// 44657 sub     dx, dx ;~ 185C:00A7
cs=0x185c;eip=0x0000a9; 	T(MOV(bx, offset(dseg,audiotimers)));	// 44658 mov     bx, offset audiotimers ;~ 185C:00A9
cs=0x185c;eip=0x0000ac; 	R(JMP(loc_26c5d));	// 44659 jmp     short loc_26C5D ;~ 185C:00AC
loc_26c4e:
	// 7489 
cs=0x185c;eip=0x0000ae; 	T(OR(di, di));	// 44663 or      di, di ;~ 185C:00AE
cs=0x185c;eip=0x0000b0; 	R(JGE(loc_26c63));	// 44664 jge     short loc_26C63 ;~ 185C:00B0
cs=0x185c;eip=0x0000b2; 	T(CMP(*(raddr(ds,bx)), 0));	// 44665 cmp     byte ptr [bx], 0 ;~ 185C:00B2
cs=0x185c;eip=0x0000b5; 	R(JNZ(loc_26c59));	// 44666 jnz     short loc_26C59 ;~ 185C:00B5
cs=0x185c;eip=0x0000b7; 	T(MOV(di, dx));	// 44667 mov     di, dx ;~ 185C:00B7
loc_26c59:
	// 7490 
cs=0x185c;eip=0x0000b9; 	T(ADD(bx, 0x4C));	// 44670 add     bx, 4Ch ; 'L' ;~ 185C:00B9
cs=0x185c;eip=0x0000bc; 	T(INC(dx));	// 44671 inc     dx ;~ 185C:00BC
loc_26c5d:
	// 7491 
cs=0x185c;eip=0x0000bd; 	T(CMP(bx, offset(dseg,word_42240)));	// 44674 cmp     bx, offset word_42240 ; end of audiotimer ;~ 185C:00BD
cs=0x185c;eip=0x0000c1; 	R(JC(loc_26c4e));	// 44675 jb      short loc_26C4E ;~ 185C:00C1
loc_26c63:
	// 7492 
cs=0x185c;eip=0x0000c3; 	T(OR(di, di));	// 44678 or      di, di ;~ 185C:00C3
cs=0x185c;eip=0x0000c5; 	R(JGE(loc_26c6a));	// 44679 jge     short loc_26C6A ;~ 185C:00C5
cs=0x185c;eip=0x0000c7; 	R(JMP(loc_26ee4));	// 44680 jmp     loc_26EE4 ;~ 185C:00C7
loc_26c6a:
	// 7493 
cs=0x185c;eip=0x0000ca; 	T(MOV(ax, di));	// 44684 mov     ax, di ;~ 185C:00CA
cs=0x185c;eip=0x0000cc; 	T(MOV(cx, 0x4C));	// 44685 mov     cx, 4Ch ; 'L' ;~ 185C:00CC
cs=0x185c;eip=0x0000cf; 	T(IMUL1_2(cx));	// 44686 imul    cx ;~ 185C:00CF
cs=0x185c;eip=0x0000d1; 	T(ADD(ax, offset(dseg,audiotimers)));	// 44687 add     ax, offset audiotimers ;~ 185C:00D1
cs=0x185c;eip=0x0000d4; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 44688 mov     [bp+var_14], ax ;~ 185C:00D4
cs=0x185c;eip=0x0000d7; 	T(ADD(ax, 0x1C));	// 44689 add     ax, 1Ch ;~ 185C:00D7
cs=0x185c;eip=0x0000da; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 44690 mov     [bp+var_12], ax ;~ 185C:00DA
cs=0x185c;eip=0x0000dd; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ds));	// 44691 mov     [bp+var_10], ds ;~ 185C:00DD
cs=0x185c;eip=0x0000e0; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 44692 mov     cx, [bp+arg_2] ;~ 185C:00E0
cs=0x185c;eip=0x0000e3; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 44693 mov     dx, [bp+arg_4] ;~ 185C:00E3
cs=0x185c;eip=0x0000e6; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), cx));	// 44694 mov     word ptr [bp+var_8], cx ;~ 185C:00E6
cs=0x185c;eip=0x0000e9; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 44695 mov     word ptr [bp+var_8+2], dx ;~ 185C:00E9
cs=0x185c;eip=0x0000ec; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 44696 mov     [bp+var_4], ax ;~ 185C:00EC
cs=0x185c;eip=0x0000ef; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 44697 mov     [bp+var_2], 0 ;~ 185C:00EF
cs=0x185c;eip=0x0000f4; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), di));	// 44698 mov     [bp+var_E], di ;~ 185C:00F4
cs=0x185c;eip=0x0000f7; 	R(JMP(loc_26cb5));	// 44699 jmp     short loc_26CB5 ;~ 185C:00F7
loc_26c99:
	// 7494 
cs=0x185c;eip=0x0000f9; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 44703 les     bx, [bp+var_8] ;~ 185C:00F9
cs=0x185c;eip=0x0000fc; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_8))), 1));	// 44704 add     word ptr [bp+var_8], 1 ;~ 185C:00FC
cs=0x185c;eip=0x000100; 	R(JNC(loc_26ca7));	// 44705 jnb     short loc_26CA7 ;~ 185C:0100
cs=0x185c;eip=0x000102; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), 0x1000));	// 44706 add     word ptr [bp+var_8+2], 1000h ;~ 185C:0102
loc_26ca7:
	// 7495 
cs=0x185c;eip=0x000107; 	T(MOV(al, *(raddr(es,bx))));	// 44709 mov     al, es:[bx] ;~ 185C:0107
cs=0x185c;eip=0x00010a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 44710 mov     bx, [bp+var_4] ;~ 185C:010A
cs=0x185c;eip=0x00010d; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 44711 inc     [bp+var_4] ;~ 185C:010D
cs=0x185c;eip=0x000110; 	X(MOV(*(raddr(ds,bx)), al));	// 44712 mov     [bx], al ;~ 185C:0110
cs=0x185c;eip=0x000112; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 44713 inc     [bp+var_2] ;~ 185C:0112
loc_26cb5:
	// 7496 
cs=0x185c;eip=0x000115; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x30));	// 44716 cmp     [bp+var_2], 30h ; '0' ;~ 185C:0115
cs=0x185c;eip=0x000119; 	R(JL(loc_26c99));	// 44717 jl      short loc_26C99 ;~ 185C:0119
cs=0x185c;eip=0x00011b; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_12))));	// 44718 mov     di, [bp+var_12] ;~ 185C:011B
cs=0x185c;eip=0x00011e; 	T(MOV(es, *(dw*)(raddr(ss,bp+var_10))));	// 44719 mov     es, [bp+var_10] ;~ 185C:011E
cs=0x185c;eip=0x000121; 	T(CMP(*(raddr(es,di+6)), 0));	// 44720 cmp     byte ptr es:[di+6], 0 ;~ 185C:0121
cs=0x185c;eip=0x000126; 	R(JZ(loc_26ccb));	// 44721 jz      short loc_26CCB ;~ 185C:0126
cs=0x185c;eip=0x000128; 	R(JMP(loc_26e61));	// 44722 jmp     loc_26E61 ;~ 185C:0128
loc_26ccb:
	// 7497 
cs=0x185c;eip=0x00012b; 	X(PUSH(*(dw*)(raddr(es,di+0x0A))));	// 44726 push    word ptr es:[di+0Ah] ;~ 185C:012B
cs=0x185c;eip=0x00012f; 	X(PUSH(*(dw*)(raddr(es,di+8))));	// 44727 push    word ptr es:[di+8] ;~ 185C:012F
cs=0x185c;eip=0x000133; 	T(MOV(si, es));	// 44728 mov     si, es ;~ 185C:0133
cs=0x185c;eip=0x000135; 	X(PUSH(cs));	// 44729 push    cs ;~ 185C:0135
cs=0x185c;eip=0x000136; 	R(CALL(pad_id,0));	// 44730 call    near ptr pad_id ;~ 185C:0136
cs=0x185c;eip=0x000139; 	X(POP(bx));	// 44731 pop     bx ;~ 185C:0139
cs=0x185c;eip=0x00013a; 	X(POP(bx));	// 44732 pop     bx ;~ 185C:013A
cs=0x185c;eip=0x00013b; 	X(PUSH(ax));	// 44733 push    ax ;~ 185C:013B
cs=0x185c;eip=0x00013c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 44734 push    [bp+arg_8] ;~ 185C:013C
cs=0x185c;eip=0x00013f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 44735 push    [bp+arg_6] ;~ 185C:013F
cs=0x185c;eip=0x000142; 	R(CALLF(locate_shape_fatal,0));	// 44736 call    locate_shape_fatal ;~ 185C:0142
cs=0x185c;eip=0x000147; 	T(ADD(sp, 6));	// 44737 add     sp, 6 ;~ 185C:0147
cs=0x185c;eip=0x00014a; 	T(MOV(es, si));	// 44738 mov     es, si ;~ 185C:014A
cs=0x185c;eip=0x00014c; 	X(MOV(*(dw*)(raddr(es,di+8)), ax));	// 44739 mov     es:[di+8], ax ;~ 185C:014C
cs=0x185c;eip=0x000150; 	X(MOV(*(dw*)(raddr(es,di+0x0A)), dx));	// 44740 mov     es:[di+0Ah], dx ;~ 185C:0150
cs=0x185c;eip=0x000154; 	X(PUSH(*(dw*)(raddr(es,di+0x12))));	// 44741 push    word ptr es:[di+12h] ;~ 185C:0154
cs=0x185c;eip=0x000158; 	X(PUSH(*(dw*)(raddr(es,di+0x10))));	// 44742 push    word ptr es:[di+10h] ;~ 185C:0158
cs=0x185c;eip=0x00015c; 	X(PUSH(cs));	// 44743 push    cs ;~ 185C:015C
cs=0x185c;eip=0x00015d; 	R(CALL(pad_id,0));	// 44744 call    near ptr pad_id ;~ 185C:015D
cs=0x185c;eip=0x000160; 	X(POP(bx));	// 44745 pop     bx ;~ 185C:0160
cs=0x185c;eip=0x000161; 	X(POP(bx));	// 44746 pop     bx ;~ 185C:0161
cs=0x185c;eip=0x000162; 	X(PUSH(ax));	// 44747 push    ax ;~ 185C:0162
cs=0x185c;eip=0x000163; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 44748 push    [bp+arg_8] ;~ 185C:0163
cs=0x185c;eip=0x000166; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 44749 push    [bp+arg_6] ;~ 185C:0166
cs=0x185c;eip=0x000169; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 44750 push    [bp+arg_C] ;~ 185C:0169
cs=0x185c;eip=0x00016c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 44751 push    [bp+arg_A] ;~ 185C:016C
cs=0x185c;eip=0x00016f; 	R(CALLF(init_audio_resources,0));	// 44752 call    init_audio_resources ;~ 185C:016F
cs=0x185c;eip=0x000174; 	T(ADD(sp, 0x0A));	// 44753 add     sp, 0Ah ;~ 185C:0174
cs=0x185c;eip=0x000177; 	T(MOV(es, si));	// 44754 mov     es, si ;~ 185C:0177
cs=0x185c;eip=0x000179; 	X(MOV(*(dw*)(raddr(es,di+0x10)), ax));	// 44755 mov     es:[di+10h], ax ;~ 185C:0179
cs=0x185c;eip=0x00017d; 	X(MOV(*(dw*)(raddr(es,di+0x12)), dx));	// 44756 mov     es:[di+12h], dx ;~ 185C:017D
cs=0x185c;eip=0x000181; 	X(PUSH(*(dw*)(raddr(es,di+0x16))));	// 44757 push    word ptr es:[di+16h] ;~ 185C:0181
cs=0x185c;eip=0x000185; 	X(PUSH(*(dw*)(raddr(es,di+0x14))));	// 44758 push    word ptr es:[di+14h] ;~ 185C:0185
cs=0x185c;eip=0x000189; 	X(PUSH(cs));	// 44759 push    cs ;~ 185C:0189
cs=0x185c;eip=0x00018a; 	R(CALL(pad_id,0));	// 44760 call    near ptr pad_id ;~ 185C:018A
cs=0x185c;eip=0x00018d; 	X(POP(bx));	// 44761 pop     bx ;~ 185C:018D
cs=0x185c;eip=0x00018e; 	X(POP(bx));	// 44762 pop     bx ;~ 185C:018E
cs=0x185c;eip=0x00018f; 	X(PUSH(ax));	// 44763 push    ax ;~ 185C:018F
cs=0x185c;eip=0x000190; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 44764 push    [bp+arg_8] ;~ 185C:0190
cs=0x185c;eip=0x000193; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 44765 push    [bp+arg_6] ;~ 185C:0193
cs=0x185c;eip=0x000196; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 44766 push    [bp+arg_C] ;~ 185C:0196
cs=0x185c;eip=0x000199; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 44767 push    [bp+arg_A] ;~ 185C:0199
cs=0x185c;eip=0x00019c; 	R(CALLF(init_audio_resources,0));	// 44768 call    init_audio_resources ;~ 185C:019C
cs=0x185c;eip=0x0001a1; 	T(ADD(sp, 0x0A));	// 44769 add     sp, 0Ah ;~ 185C:01A1
cs=0x185c;eip=0x0001a4; 	T(MOV(es, si));	// 44770 mov     es, si ;~ 185C:01A4
cs=0x185c;eip=0x0001a6; 	X(MOV(*(dw*)(raddr(es,di+0x14)), ax));	// 44771 mov     es:[di+14h], ax ;~ 185C:01A6
cs=0x185c;eip=0x0001aa; 	X(MOV(*(dw*)(raddr(es,di+0x16)), dx));	// 44772 mov     es:[di+16h], dx ;~ 185C:01AA
cs=0x185c;eip=0x0001ae; 	X(PUSH(*(dw*)(raddr(es,di+0x1A))));	// 44773 push    word ptr es:[di+1Ah] ;~ 185C:01AE
cs=0x185c;eip=0x0001b2; 	X(PUSH(*(dw*)(raddr(es,di+0x18))));	// 44774 push    word ptr es:[di+18h] ;~ 185C:01B2
cs=0x185c;eip=0x0001b6; 	X(PUSH(cs));	// 44775 push    cs ;~ 185C:01B6
cs=0x185c;eip=0x0001b7; 	R(CALL(pad_id,0));	// 44776 call    near ptr pad_id ;~ 185C:01B7
cs=0x185c;eip=0x0001ba; 	X(POP(bx));	// 44777 pop     bx ;~ 185C:01BA
cs=0x185c;eip=0x0001bb; 	X(POP(bx));	// 44778 pop     bx ;~ 185C:01BB
cs=0x185c;eip=0x0001bc; 	X(PUSH(ax));	// 44779 push    ax ;~ 185C:01BC
cs=0x185c;eip=0x0001bd; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 44780 push    [bp+arg_8] ;~ 185C:01BD
cs=0x185c;eip=0x0001c0; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 44781 push    [bp+arg_6] ;~ 185C:01C0
cs=0x185c;eip=0x0001c3; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 44782 push    [bp+arg_C] ;~ 185C:01C3
cs=0x185c;eip=0x0001c6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 44783 push    [bp+arg_A] ;~ 185C:01C6
cs=0x185c;eip=0x0001c9; 	R(CALLF(init_audio_resources,0));	// 44784 call    init_audio_resources ;~ 185C:01C9
cs=0x185c;eip=0x0001ce; 	T(ADD(sp, 0x0A));	// 44785 add     sp, 0Ah ;~ 185C:01CE
cs=0x185c;eip=0x0001d1; 	T(MOV(es, si));	// 44786 mov     es, si ;~ 185C:01D1
cs=0x185c;eip=0x0001d3; 	X(MOV(*(dw*)(raddr(es,di+0x18)), ax));	// 44787 mov     es:[di+18h], ax ;~ 185C:01D3
cs=0x185c;eip=0x0001d7; 	X(MOV(*(dw*)(raddr(es,di+0x1A)), dx));	// 44788 mov     es:[di+1Ah], dx ;~ 185C:01D7
cs=0x185c;eip=0x0001db; 	X(PUSH(*(dw*)(raddr(es,di+0x1E))));	// 44789 push    word ptr es:[di+1Eh] ;~ 185C:01DB
cs=0x185c;eip=0x0001df; 	X(PUSH(*(dw*)(raddr(es,di+0x1C))));	// 44790 push    word ptr es:[di+1Ch] ;~ 185C:01DF
cs=0x185c;eip=0x0001e3; 	X(PUSH(cs));	// 44791 push    cs ;~ 185C:01E3
cs=0x185c;eip=0x0001e4; 	R(CALL(pad_id,0));	// 44792 call    near ptr pad_id ;~ 185C:01E4
cs=0x185c;eip=0x0001e7; 	X(POP(bx));	// 44793 pop     bx ;~ 185C:01E7
cs=0x185c;eip=0x0001e8; 	X(POP(bx));	// 44794 pop     bx ;~ 185C:01E8
cs=0x185c;eip=0x0001e9; 	X(PUSH(ax));	// 44795 push    ax ;~ 185C:01E9
cs=0x185c;eip=0x0001ea; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 44796 push    [bp+arg_8] ;~ 185C:01EA
cs=0x185c;eip=0x0001ed; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 44797 push    [bp+arg_6] ;~ 185C:01ED
cs=0x185c;eip=0x0001f0; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 44798 push    [bp+arg_C] ;~ 185C:01F0
cs=0x185c;eip=0x0001f3; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 44799 push    [bp+arg_A] ;~ 185C:01F3
cs=0x185c;eip=0x0001f6; 	R(CALLF(init_audio_resources,0));	// 44800 call    init_audio_resources ;~ 185C:01F6
cs=0x185c;eip=0x0001fb; 	T(ADD(sp, 0x0A));	// 44801 add     sp, 0Ah ;~ 185C:01FB
cs=0x185c;eip=0x0001fe; 	T(MOV(es, si));	// 44802 mov     es, si ;~ 185C:01FE
cs=0x185c;eip=0x000200; 	X(MOV(*(dw*)(raddr(es,di+0x1C)), ax));	// 44803 mov     es:[di+1Ch], ax ;~ 185C:0200
cs=0x185c;eip=0x000204; 	X(MOV(*(dw*)(raddr(es,di+0x1E)), dx));	// 44804 mov     es:[di+1Eh], dx ;~ 185C:0204
cs=0x185c;eip=0x000208; 	X(PUSH(*(dw*)(raddr(es,di+0x22))));	// 44805 push    word ptr es:[di+22h] ;~ 185C:0208
cs=0x185c;eip=0x00020c; 	X(PUSH(*(dw*)(raddr(es,di+0x20))));	// 44806 push    word ptr es:[di+20h] ;~ 185C:020C
cs=0x185c;eip=0x000210; 	X(PUSH(cs));	// 44807 push    cs ;~ 185C:0210
cs=0x185c;eip=0x000211; 	R(CALL(pad_id,0));	// 44808 call    near ptr pad_id ;~ 185C:0211
cs=0x185c;eip=0x000214; 	X(POP(bx));	// 44809 pop     bx ;~ 185C:0214
cs=0x185c;eip=0x000215; 	X(POP(bx));	// 44810 pop     bx ;~ 185C:0215
cs=0x185c;eip=0x000216; 	X(PUSH(ax));	// 44811 push    ax ;~ 185C:0216
cs=0x185c;eip=0x000217; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 44812 push    [bp+arg_8] ;~ 185C:0217
cs=0x185c;eip=0x00021a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 44813 push    [bp+arg_6] ;~ 185C:021A
cs=0x185c;eip=0x00021d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 44814 push    [bp+arg_C] ;~ 185C:021D
cs=0x185c;eip=0x000220; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 44815 push    [bp+arg_A] ;~ 185C:0220
cs=0x185c;eip=0x000223; 	R(CALLF(init_audio_resources,0));	// 44816 call    init_audio_resources ;~ 185C:0223
cs=0x185c;eip=0x000228; 	T(ADD(sp, 0x0A));	// 44817 add     sp, 0Ah ;~ 185C:0228
cs=0x185c;eip=0x00022b; 	T(MOV(es, si));	// 44818 mov     es, si ;~ 185C:022B
cs=0x185c;eip=0x00022d; 	X(MOV(*(dw*)(raddr(es,di+0x20)), ax));	// 44819 mov     es:[di+20h], ax ;~ 185C:022D
cs=0x185c;eip=0x000231; 	X(MOV(*(dw*)(raddr(es,di+0x22)), dx));	// 44820 mov     es:[di+22h], dx ;~ 185C:0231
cs=0x185c;eip=0x000235; 	X(PUSH(*(dw*)(raddr(es,di+0x26))));	// 44821 push    word ptr es:[di+26h] ;~ 185C:0235
cs=0x185c;eip=0x000239; 	X(PUSH(*(dw*)(raddr(es,di+0x24))));	// 44822 push    word ptr es:[di+24h] ;~ 185C:0239
cs=0x185c;eip=0x00023d; 	X(PUSH(cs));	// 44823 push    cs ;~ 185C:023D
cs=0x185c;eip=0x00023e; 	R(CALL(pad_id,0));	// 44824 call    near ptr pad_id ;~ 185C:023E
cs=0x185c;eip=0x000241; 	X(POP(bx));	// 44825 pop     bx ;~ 185C:0241
cs=0x185c;eip=0x000242; 	X(POP(bx));	// 44826 pop     bx ;~ 185C:0242
cs=0x185c;eip=0x000243; 	X(PUSH(ax));	// 44827 push    ax ;~ 185C:0243
cs=0x185c;eip=0x000244; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 44828 push    [bp+arg_8] ;~ 185C:0244
cs=0x185c;eip=0x000247; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 44829 push    [bp+arg_6] ;~ 185C:0247
cs=0x185c;eip=0x00024a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 44830 push    [bp+arg_C] ;~ 185C:024A
cs=0x185c;eip=0x00024d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 44831 push    [bp+arg_A] ;~ 185C:024D
cs=0x185c;eip=0x000250; 	R(CALLF(init_audio_resources,0));	// 44832 call    init_audio_resources ;~ 185C:0250
cs=0x185c;eip=0x000255; 	T(ADD(sp, 0x0A));	// 44833 add     sp, 0Ah ;~ 185C:0255
cs=0x185c;eip=0x000258; 	T(MOV(es, si));	// 44834 mov     es, si ;~ 185C:0258
cs=0x185c;eip=0x00025a; 	X(MOV(*(dw*)(raddr(es,di+0x24)), ax));	// 44835 mov     es:[di+24h], ax ;~ 185C:025A
cs=0x185c;eip=0x00025e; 	X(MOV(*(dw*)(raddr(es,di+0x26)), dx));	// 44836 mov     es:[di+26h], dx ;~ 185C:025E
cs=0x185c;eip=0x000262; 	X(PUSH(*(dw*)(raddr(es,di+0x2A))));	// 44837 push    word ptr es:[di+2Ah] ;~ 185C:0262
cs=0x185c;eip=0x000266; 	X(PUSH(*(dw*)(raddr(es,di+0x28))));	// 44838 push    word ptr es:[di+28h] ;~ 185C:0266
cs=0x185c;eip=0x00026a; 	X(PUSH(cs));	// 44839 push    cs ;~ 185C:026A
cs=0x185c;eip=0x00026b; 	R(CALL(pad_id,0));	// 44840 call    near ptr pad_id ;~ 185C:026B
cs=0x185c;eip=0x00026e; 	X(POP(bx));	// 44841 pop     bx ;~ 185C:026E
cs=0x185c;eip=0x00026f; 	X(POP(bx));	// 44842 pop     bx ;~ 185C:026F
cs=0x185c;eip=0x000270; 	X(PUSH(ax));	// 44843 push    ax ;~ 185C:0270
cs=0x185c;eip=0x000271; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 44844 push    [bp+arg_8] ;~ 185C:0271
cs=0x185c;eip=0x000274; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 44845 push    [bp+arg_6] ;~ 185C:0274
cs=0x185c;eip=0x000277; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 44846 push    [bp+arg_C] ;~ 185C:0277
cs=0x185c;eip=0x00027a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 44847 push    [bp+arg_A] ;~ 185C:027A
cs=0x185c;eip=0x00027d; 	R(CALLF(init_audio_resources,0));	// 44848 call    init_audio_resources ;~ 185C:027D
cs=0x185c;eip=0x000282; 	T(ADD(sp, 0x0A));	// 44849 add     sp, 0Ah ;~ 185C:0282
cs=0x185c;eip=0x000285; 	T(MOV(es, si));	// 44850 mov     es, si ;~ 185C:0285
cs=0x185c;eip=0x000287; 	X(MOV(*(dw*)(raddr(es,di+0x28)), ax));	// 44851 mov     es:[di+28h], ax ;~ 185C:0287
cs=0x185c;eip=0x00028b; 	X(MOV(*(dw*)(raddr(es,di+0x2A)), dx));	// 44852 mov     es:[di+2Ah], dx ;~ 185C:028B
cs=0x185c;eip=0x00028f; 	X(PUSH(*(dw*)(raddr(es,di+0x2E))));	// 44853 push    word ptr es:[di+2Eh] ;~ 185C:028F
cs=0x185c;eip=0x000293; 	X(PUSH(*(dw*)(raddr(es,di+0x2C))));	// 44854 push    word ptr es:[di+2Ch] ;~ 185C:0293
cs=0x185c;eip=0x000297; 	X(PUSH(cs));	// 44855 push    cs ;~ 185C:0297
cs=0x185c;eip=0x000298; 	R(CALL(pad_id,0));	// 44856 call    near ptr pad_id ;~ 185C:0298
cs=0x185c;eip=0x00029b; 	X(POP(bx));	// 44857 pop     bx ;~ 185C:029B
cs=0x185c;eip=0x00029c; 	X(POP(bx));	// 44858 pop     bx ;~ 185C:029C
cs=0x185c;eip=0x00029d; 	X(PUSH(ax));	// 44859 push    ax ;~ 185C:029D
cs=0x185c;eip=0x00029e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 44860 push    [bp+arg_8] ;~ 185C:029E
cs=0x185c;eip=0x0002a1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 44861 push    [bp+arg_6] ;~ 185C:02A1
cs=0x185c;eip=0x0002a4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 44862 push    [bp+arg_C] ;~ 185C:02A4
cs=0x185c;eip=0x0002a7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 44863 push    [bp+arg_A] ;~ 185C:02A7
cs=0x185c;eip=0x0002aa; 	R(CALLF(init_audio_resources,0));	// 44864 call    init_audio_resources ;~ 185C:02AA
cs=0x185c;eip=0x0002af; 	T(ADD(sp, 0x0A));	// 44865 add     sp, 0Ah ;~ 185C:02AF
cs=0x185c;eip=0x0002b2; 	T(MOV(es, si));	// 44866 mov     es, si ;~ 185C:02B2
cs=0x185c;eip=0x0002b4; 	X(MOV(*(dw*)(raddr(es,di+0x2C)), ax));	// 44867 mov     es:[di+2Ch], ax ;~ 185C:02B4
cs=0x185c;eip=0x0002b8; 	X(MOV(*(dw*)(raddr(es,di+0x2E)), dx));	// 44868 mov     es:[di+2Eh], dx ;~ 185C:02B8
cs=0x185c;eip=0x0002bc; 	X(MOV(*(raddr(es,di+6)), 1));	// 44869 mov     byte ptr es:[di+6], 1 ;~ 185C:02BC
loc_26e61:
	// 7498 
cs=0x185c;eip=0x0002c1; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_14))));	// 44872 mov     si, [bp+var_14] ;~ 185C:02C1
cs=0x185c;eip=0x0002c4; 	T(MOV(ax, 0x7F));	// 44873 mov     ax, 7Fh ;~ 185C:02C4
cs=0x185c;eip=0x0002c7; 	X(PUSH(ax));	// 44874 push    ax ;~ 185C:02C7
cs=0x185c;eip=0x0002c8; 	T(MOV(ax, 0x0FFFF));	// 44875 mov     ax, 0FFFFh ;~ 185C:02C8
cs=0x185c;eip=0x0002cb; 	X(PUSH(ax));	// 44876 push    ax ;~ 185C:02CB
cs=0x185c;eip=0x0002cc; 	R(CALLF(sub_37470,0));	// 44877 call    sub_37470 ;~ 185C:02CC
cs=0x185c;eip=0x0002d1; 	X(POP(bx));	// 44878 pop     bx ;~ 185C:02D1
cs=0x185c;eip=0x0002d2; 	X(POP(bx));	// 44879 pop     bx ;~ 185C:02D2
cs=0x185c;eip=0x0002d3; 	X(MOV(*(dw*)(raddr(ds,si+2)), ax));	// 44880 mov     [si+2], ax ;~ 185C:02D3
cs=0x185c;eip=0x0002d6; 	X(MOV(*(raddr(ds,si+1)), 0));	// 44881 mov     byte ptr [si+1], 0 ;~ 185C:02D6
cs=0x185c;eip=0x0002da; 	X(MOV(*(dw*)(raddr(ds,si+4)), 0));	// 44882 mov     word ptr [si+4], 0 ;~ 185C:02DA
cs=0x185c;eip=0x0002df; 	T(SUB(ax, ax));	// 44883 sub     ax, ax ;~ 185C:02DF
cs=0x185c;eip=0x0002e1; 	X(MOV(*(dw*)(raddr(ds,si+8)), ax));	// 44884 mov     [si+8], ax ;~ 185C:02E1
cs=0x185c;eip=0x0002e4; 	X(MOV(*(dw*)(raddr(ds,si+6)), ax));	// 44885 mov     [si+6], ax ;~ 185C:02E4
cs=0x185c;eip=0x0002e7; 	X(MOV(*(raddr(ds,si+0x0A)), 0));	// 44886 mov     byte ptr [si+0Ah], 0 ;~ 185C:02E7
cs=0x185c;eip=0x0002eb; 	T(MOV(es, *(dw*)(raddr(ss,bp+var_10))));	// 44887 mov     es, [bp+var_10] ;~ 185C:02EB
cs=0x185c;eip=0x0002ee; 	T(MOV(ax, *(dw*)(raddr(es,di))));	// 44888 mov     ax, es:[di] ;~ 185C:02EE
cs=0x185c;eip=0x0002f1; 	T(MOV(cx, es));	// 44889 mov     cx, es ;~ 185C:02F1
cs=0x185c;eip=0x0002f3; 	T(LES(bx, *(dw*)(raddr(es,di+8))));	// 44890 les     bx, es:[di+8] ;~ 185C:02F3
cs=0x185c;eip=0x0002f7; 	T(MOV(dl, *(raddr(es,bx+0x0F))));	// 44891 mov     dl, es:[bx+0Fh] ;~ 185C:02F7
cs=0x185c;eip=0x0002fb; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_18))), di));	// 44892 mov     word ptr [bp+var_18], di ;~ 185C:02FB
cs=0x185c;eip=0x0002fe; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_18+2))), cx));	// 44893 mov     word ptr [bp+var_18+2], cx ;~ 185C:02FE
cs=0x185c;eip=0x000301; 	T(MOV(cl, *(raddr(es,bx+0x0E))));	// 44894 mov     cl, es:[bx+0Eh] ;~ 185C:0301
cs=0x185c;eip=0x000305; 	T(SUB(ch, ch));	// 44895 sub     ch, ch ;~ 185C:0305
cs=0x185c;eip=0x000307; 	T(MOV(bx, dx));	// 44896 mov     bx, dx ;~ 185C:0307
cs=0x185c;eip=0x000309; 	T(SUB(dx, dx));	// 44897 sub     dx, dx ;~ 185C:0309
cs=0x185c;eip=0x00030b; 	T(DIV2(cx));	// 44898 div     cx ;~ 185C:030B
cs=0x185c;eip=0x00030d; 	T(MOV(cl, 4));	// 44899 mov     cl, 4 ;~ 185C:030D
cs=0x185c;eip=0x00030f; 	T(SUB(bh, bh));	// 44900 sub     bh, bh ;~ 185C:030F
cs=0x185c;eip=0x000311; 	T(SHL(bx, cl));	// 44901 shl     bx, cl ;~ 185C:0311
cs=0x185c;eip=0x000313; 	T(ADD(ax, bx));	// 44902 add     ax, bx ;~ 185C:0313
cs=0x185c;eip=0x000315; 	X(MOV(*(dw*)(raddr(ds,si+0x0C)), ax));	// 44903 mov     [si+0Ch], ax ;~ 185C:0315
cs=0x185c;eip=0x000318; 	X(MOV(*(raddr(ds,si+0x0E)), 0x0FF));	// 44904 mov     byte ptr [si+0Eh], 0FFh ;~ 185C:0318
cs=0x185c;eip=0x00031c; 	T(MOV(ax, 0x0FFFF));	// 44905 mov     ax, 0FFFFh ;~ 185C:031C
cs=0x185c;eip=0x00031f; 	X(MOV(*(dw*)(raddr(ds,si+0x10)), ax));	// 44906 mov     [si+10h], ax ;~ 185C:031F
cs=0x185c;eip=0x000322; 	X(MOV(*(dw*)(raddr(ds,si+0x12)), ax));	// 44907 mov     [si+12h], ax ;~ 185C:0322
cs=0x185c;eip=0x000325; 	X(MOV(*(dw*)(raddr(ds,si+0x14)), ax));	// 44908 mov     [si+14h], ax ;~ 185C:0325
cs=0x185c;eip=0x000328; 	X(MOV(*(dw*)(raddr(ds,si+0x16)), ax));	// 44909 mov     [si+16h], ax ;~ 185C:0328
cs=0x185c;eip=0x00032b; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_18))));	// 44910 les     bx, [bp+var_18] ;~ 185C:032B
cs=0x185c;eip=0x00032e; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 44911 mov     ax, es:[bx] ;~ 185C:032E
cs=0x185c;eip=0x000331; 	X(MOV(*(dw*)(raddr(ds,si+0x18)), ax));	// 44912 mov     [si+18h], ax ;~ 185C:0331
cs=0x185c;eip=0x000334; 	T(SUB(al, al));	// 44913 sub     al, al ;~ 185C:0334
cs=0x185c;eip=0x000336; 	X(MOV(*(raddr(ds,si+0x1A)), al));	// 44914 mov     [si+1Ah], al ;~ 185C:0336
cs=0x185c;eip=0x000339; 	X(MOV(*(raddr(ds,si+0x1B)), al));	// 44915 mov     [si+1Bh], al ;~ 185C:0339
cs=0x185c;eip=0x00033c; 	X(MOV(*(raddr(ds,si)), 1));	// 44916 mov     byte ptr [si], 1 ;~ 185C:033C
cs=0x185c;eip=0x00033f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 44917 mov     ax, [bp+var_E] ;~ 185C:033F
cs=0x185c;eip=0x000342; 	R(JMP(loc_26eee));	// 44918 jmp     short loc_26EEE ;~ 185C:0342
loc_26ee4:
	// 7499 
cs=0x185c;eip=0x000344; 	T(MOV(ax, offset(dseg,ainitengineallhandlesused_)));	// 44922 mov     ax, offset aInitengineAllHandlesUsed_ ; "InitEngine: All handles used." ;~ 185C:0344
cs=0x185c;eip=0x000347; 	X(PUSH(ax));	// 44923 push    ax ;~ 185C:0347
cs=0x185c;eip=0x000348; 	R(CALLF(fatal_error,0));	// 44924 call    far ptr fatal_error ;~ 185C:0348
cs=0x185c;eip=0x00034d; 	X(POP(bx));	// 44926 pop     bx ;~ 185C:034D
loc_26eee:
	// 7500 
cs=0x185c;eip=0x00034e; 	X(POP(si));	// 44929 pop     si ;~ 185C:034E
cs=0x185c;eip=0x00034f; 	X(POP(di));	// 44930 pop     di ;~ 185C:034F
cs=0x185c;eip=0x000350; 	T(MOV(sp, bp));	// 44931 mov     sp, bp ;~ 185C:0350
cs=0x185c;eip=0x000352; 	X(POP(bp));	// 44932 pop     bp ;~ 185C:0352
cs=0x185c;eip=0x000353; 	R(RETF(0));	// 44933 retf ;~ 185C:0353
audio_op_unk:
	// 44941 
#undef arg_0
#define arg_0 6
	// 44944 arg_0           = word ptr  6 ;~ 185C:0354
ret_185c_354:
	// 7501 
cs=0x185c;eip=0x000354; 	X(PUSH(bp));	// 44946 push    bp ;~ 185C:0354
cs=0x185c;eip=0x000355; 	T(MOV(bp, sp));	// 44947 mov     bp, sp ;~ 185C:0355
cs=0x185c;eip=0x000357; 	X(PUSH(di));	// 44948 push    di ;~ 185C:0357
cs=0x185c;eip=0x000358; 	X(PUSH(si));	// 44949 push    si ;~ 185C:0358
cs=0x185c;eip=0x000359; 	T(MOV(ax, 0x4C));	// 44950 mov     ax, 4Ch ; 'L' ;~ 185C:0359
cs=0x185c;eip=0x00035c; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 44951 imul    [bp+arg_0] ;~ 185C:035C
cs=0x185c;eip=0x00035f; 	T(MOV(si, ax));	// 44952 mov     si, ax ;~ 185C:035F
cs=0x185c;eip=0x000361; 	T(ADD(si, offset(dseg,audiotimers)));	// 44953 add     si, offset audiotimers ;~ 185C:0361
cs=0x185c;eip=0x000365; 	T(CMP(*(raddr(ds,si)), 1));	// 44954 cmp     byte ptr [si], 1 ;~ 185C:0365
cs=0x185c;eip=0x000368; 	R(JNZ(loc_26f67));	// 44955 jnz     short loc_26F67 ;~ 185C:0368
cs=0x185c;eip=0x00036a; 	T(CMP(*(raddr(ds,si+1)), 0));	// 44956 cmp     byte ptr [si+1], 0 ;~ 185C:036A
cs=0x185c;eip=0x00036e; 	R(JNZ(loc_26f67));	// 44957 jnz     short loc_26F67 ;~ 185C:036E
cs=0x185c;eip=0x000370; 	T(bx = si+0x1C);	// 44958 lea     bx, [si+1Ch] ;~ 185C:0370
cs=0x185c;eip=0x000373; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0A))));	// 44959 push    word ptr [bx+0Ah] ;~ 185C:0373
cs=0x185c;eip=0x000376; 	X(PUSH(*(dw*)(raddr(ds,bx+8))));	// 44960 push    word ptr [bx+8] ;~ 185C:0376
cs=0x185c;eip=0x000379; 	X(PUSH(*(dw*)(raddr(ds,si+2))));	// 44961 push    word ptr [si+2] ;~ 185C:0379
cs=0x185c;eip=0x00037c; 	T(MOV(di, bx));	// 44962 mov     di, bx ;~ 185C:037C
cs=0x185c;eip=0x00037e; 	R(CALLF(sub_38cf8,0));	// 44963 call    sub_38CF8 ;~ 185C:037E
cs=0x185c;eip=0x000383; 	T(ADD(sp, 6));	// 44964 add     sp, 6 ;~ 185C:0383
cs=0x185c;eip=0x000386; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 44965 mov     ax, [di] ;~ 185C:0386
cs=0x185c;eip=0x000388; 	T(LES(bx, *(dw*)(raddr(ds,di+8))));	// 44966 les     bx, [di+8] ;~ 185C:0388
cs=0x185c;eip=0x00038b; 	T(MOV(cl, *(raddr(es,bx+0x0E))));	// 44967 mov     cl, es:[bx+0Eh] ;~ 185C:038B
cs=0x185c;eip=0x00038f; 	T(SUB(ch, ch));	// 44968 sub     ch, ch ;~ 185C:038F
cs=0x185c;eip=0x000391; 	T(SUB(dx, dx));	// 44969 sub     dx, dx ;~ 185C:0391
cs=0x185c;eip=0x000393; 	T(DIV2(cx));	// 44970 div     cx ;~ 185C:0393
cs=0x185c;eip=0x000395; 	T(MOV(cl, 4));	// 44971 mov     cl, 4 ;~ 185C:0395
cs=0x185c;eip=0x000397; 	T(MOV(dl, *(raddr(es,bx+0x0F))));	// 44972 mov     dl, es:[bx+0Fh] ;~ 185C:0397
cs=0x185c;eip=0x00039b; 	T(SUB(dh, dh));	// 44973 sub     dh, dh ;~ 185C:039B
cs=0x185c;eip=0x00039d; 	T(SHL(dx, cl));	// 44974 shl     dx, cl ;~ 185C:039D
cs=0x185c;eip=0x00039f; 	T(ADD(ax, dx));	// 44975 add     ax, dx ;~ 185C:039F
cs=0x185c;eip=0x0003a1; 	X(MOV(*(dw*)(raddr(ds,si+0x0C)), ax));	// 44976 mov     [si+0Ch], ax ;~ 185C:03A1
cs=0x185c;eip=0x0003a4; 	X(PUSH(*(dw*)(raddr(ds,si+2))));	// 44977 push    word ptr [si+2] ;~ 185C:03A4
cs=0x185c;eip=0x0003a7; 	X(PUSH(ax));	// 44978 push    ax ;~ 185C:03A7
cs=0x185c;eip=0x0003a8; 	R(CALLF(sub_39050,0));	// 44979 call    sub_39050 ;~ 185C:03A8
cs=0x185c;eip=0x0003ad; 	X(POP(bx));	// 44980 pop     bx ;~ 185C:03AD
cs=0x185c;eip=0x0003ae; 	X(POP(bx));	// 44981 pop     bx ;~ 185C:03AE
cs=0x185c;eip=0x0003af; 	X(MOV(*(dw*)(raddr(ds,si+0x12)), ax));	// 44982 mov     [si+12h], ax ;~ 185C:03AF
cs=0x185c;eip=0x0003b2; 	T(MOV(al, 1));	// 44983 mov     al, 1 ;~ 185C:03B2
cs=0x185c;eip=0x0003b4; 	X(MOV(*(raddr(ds,si+1)), al));	// 44984 mov     [si+1], al ;~ 185C:03B4
cs=0x185c;eip=0x0003b7; 	X(MOV(*(raddr(ds,si+0x1A)), al));	// 44985 mov     [si+1Ah], al ;~ 185C:03B7
cs=0x185c;eip=0x0003ba; 	T(SUB(ax, ax));	// 44986 sub     ax, ax ;~ 185C:03BA
cs=0x185c;eip=0x0003bc; 	X(PUSH(ax));	// 44987 push    ax ;~ 185C:03BC
cs=0x185c;eip=0x0003bd; 	X(PUSH(*(dw*)(raddr(ds,si+2))));	// 44988 push    word ptr [si+2] ;~ 185C:03BD
cs=0x185c;eip=0x0003c0; 	R(CALLF(audio_unk2,0));	// 44989 call    audio_unk2 ;~ 185C:03C0
cs=0x185c;eip=0x0003c5; 	X(POP(bx));	// 44990 pop     bx ;~ 185C:03C5
cs=0x185c;eip=0x0003c6; 	X(POP(bx));	// 44991 pop     bx ;~ 185C:03C6
loc_26f67:
	// 7502 
cs=0x185c;eip=0x0003c7; 	X(POP(si));	// 44995 pop     si ;~ 185C:03C7
cs=0x185c;eip=0x0003c8; 	X(POP(di));	// 44996 pop     di ;~ 185C:03C8
cs=0x185c;eip=0x0003c9; 	T(MOV(sp, bp));	// 44997 mov     sp, bp ;~ 185C:03C9
cs=0x185c;eip=0x0003cb; 	X(POP(bp));	// 44998 pop     bp ;~ 185C:03CB
cs=0x185c;eip=0x0003cc; 	R(RETF(0));	// 44999 retf ;~ 185C:03CC
audio_function2:
	// 45007 
#undef arg_0
#define arg_0 6
	// 45010 arg_0           = word ptr  6 ;~ 185C:03CD
ret_185c_3cd:
	// 7503 
cs=0x185c;eip=0x0003cd; 	X(PUSH(bp));	// 45012 push    bp ;~ 185C:03CD
cs=0x185c;eip=0x0003ce; 	T(MOV(bp, sp));	// 45013 mov     bp, sp ;~ 185C:03CE
cs=0x185c;eip=0x0003d0; 	X(PUSH(si));	// 45014 push    si ;~ 185C:03D0
cs=0x185c;eip=0x0003d1; 	T(MOV(ax, 0x4C));	// 45015 mov     ax, 4Ch ; 'L' ;~ 185C:03D1
cs=0x185c;eip=0x0003d4; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45016 imul    [bp+arg_0] ;~ 185C:03D4
cs=0x185c;eip=0x0003d7; 	T(MOV(si, ax));	// 45017 mov     si, ax ;~ 185C:03D7
cs=0x185c;eip=0x0003d9; 	T(ADD(si, offset(dseg,audiotimers)));	// 45018 add     si, offset audiotimers ;~ 185C:03D9
cs=0x185c;eip=0x0003dd; 	T(CMP(*(raddr(ds,si)), 1));	// 45019 cmp     byte ptr [si], 1 ;~ 185C:03DD
cs=0x185c;eip=0x0003e0; 	R(JNZ(loc_26f9e));	// 45020 jnz     short loc_26F9E ;~ 185C:03E0
cs=0x185c;eip=0x0003e2; 	T(CMP(*(raddr(ds,si+1)), 1));	// 45021 cmp     byte ptr [si+1], 1 ;~ 185C:03E2
cs=0x185c;eip=0x0003e6; 	R(JNZ(loc_26f9e));	// 45022 jnz     short loc_26F9E ;~ 185C:03E6
cs=0x185c;eip=0x0003e8; 	X(PUSH(*(dw*)(raddr(ds,si+0x12))));	// 45023 push    word ptr [si+12h] ;~ 185C:03E8
cs=0x185c;eip=0x0003eb; 	R(CALLF(sub_38156,0));	// 45024 call    sub_38156 ;~ 185C:03EB
cs=0x185c;eip=0x0003f0; 	X(POP(bx));	// 45025 pop     bx ;~ 185C:03F0
cs=0x185c;eip=0x0003f1; 	X(MOV(*(dw*)(raddr(ds,si+0x12)), 0x0FFFF));	// 45026 mov     word ptr [si+12h], 0FFFFh ;~ 185C:03F1
cs=0x185c;eip=0x0003f6; 	X(MOV(*(raddr(ds,si+1)), 0));	// 45027 mov     byte ptr [si+1], 0 ;~ 185C:03F6
cs=0x185c;eip=0x0003fa; 	X(MOV(*(raddr(ds,si+0x1A)), 1));	// 45028 mov     byte ptr [si+1Ah], 1 ;~ 185C:03FA
loc_26f9e:
	// 7504 
cs=0x185c;eip=0x0003fe; 	X(POP(si));	// 45032 pop     si ;~ 185C:03FE
cs=0x185c;eip=0x0003ff; 	T(MOV(sp, bp));	// 45033 mov     sp, bp ;~ 185C:03FF
cs=0x185c;eip=0x000401; 	X(POP(bp));	// 45034 pop     bp ;~ 185C:0401
cs=0x185c;eip=0x000402; 	R(RETF(0));	// 45035 retf ;~ 185C:0402
audio_driver_timer:
	// 45043 
#undef var_4
#define var_4 -4
	// 45046 var_4           = word ptr -4 ;~ 185C:0403
#undef var_1
#define var_1 -1
	// 45047 var_1           = byte ptr -1 ;~ 185C:0403
ret_185c_403:
	// 7505 
cs=0x185c;eip=0x000403; 	X(PUSH(bp));	// 45049 push    bp ;~ 185C:0403
cs=0x185c;eip=0x000404; 	T(MOV(bp, sp));	// 45050 mov     bp, sp ;~ 185C:0404
cs=0x185c;eip=0x000406; 	T(SUB(sp, 4));	// 45051 sub     sp, 4 ;~ 185C:0406
cs=0x185c;eip=0x000409; 	X(PUSH(di));	// 45052 push    di ;~ 185C:0409
cs=0x185c;eip=0x00040a; 	X(PUSH(si));	// 45053 push    si ;~ 185C:040A
cs=0x185c;eip=0x00040b; 	R(CALLF(compare_ds_ss,0));	// 45054 call    compare_ds_ss ;~ 185C:040B
cs=0x185c;eip=0x000410; 	T(OR(ax, ax));	// 45055 or      ax, ax ;~ 185C:0410
cs=0x185c;eip=0x000412; 	R(JNZ(loc_26fb7));	// 45056 jnz     short loc_26FB7 ;~ 185C:0412
cs=0x185c;eip=0x000414; 	R(JMP(loc_27127));	// 45057 jmp     loc_27127 ;~ 185C:0414
loc_26fb7:
	// 7506 
cs=0x185c;eip=0x000417; 	X(INC(word_3eb2a));	// 45061 inc     word_3EB2A ;~ 185C:0417
cs=0x185c;eip=0x00041b; 	T(CMP(word_3eb2a, 2));	// 45062 cmp     word_3EB2A, 2 ;~ 185C:041B
cs=0x185c;eip=0x000420; 	R(JGE(loc_26fcc));	// 45063 jge     short loc_26FCC ;~ 185C:0420
cs=0x185c;eip=0x000422; 	T(CMP(byte_40634, 0));	// 45064 cmp     byte_40634, 0 ;~ 185C:0422
cs=0x185c;eip=0x000427; 	R(JZ(loc_26fcc));	// 45065 jz      short loc_26FCC ;~ 185C:0427
cs=0x185c;eip=0x000429; 	R(JMP(loc_27127));	// 45066 jmp     loc_27127 ;~ 185C:0429
loc_26fcc:
	// 7507 
cs=0x185c;eip=0x00042c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 45071 mov     [bp+var_4], 0 ;~ 185C:042C
cs=0x185c;eip=0x000431; 	T(MOV(si, offset(dseg,audiotimers)));	// 45072 mov     si, offset audiotimers ;~ 185C:0431
loc_26fd4:
	// 7508 
cs=0x185c;eip=0x000434; 	T(CMP(*(raddr(ds,si)), 0));	// 45075 cmp     byte ptr [si], 0 ;~ 185C:0434
cs=0x185c;eip=0x000437; 	R(JNZ(loc_26fdc));	// 45076 jnz     short loc_26FDC ;~ 185C:0437
cs=0x185c;eip=0x000439; 	R(JMP(loc_2710b));	// 45077 jmp     loc_2710B ;~ 185C:0439
loc_26fdc:
	// 7509 
cs=0x185c;eip=0x00043c; 	T(CMP(audioflag6, 0));	// 45081 cmp     audioflag6, 0 ;~ 185C:043C
cs=0x185c;eip=0x000441; 	R(JNZ(loc_26fe6));	// 45082 jnz     short loc_26FE6 ;~ 185C:0441
cs=0x185c;eip=0x000443; 	R(JMP(loc_2710b));	// 45083 jmp     loc_2710B ;~ 185C:0443
loc_26fe6:
	// 7510 
cs=0x185c;eip=0x000446; 	T(MOV(cl, 4));	// 45087 mov     cl, 4 ;~ 185C:0446
cs=0x185c;eip=0x000448; 	T(MOV(al, *(raddr(ds,si+0x0A))));	// 45088 mov     al, [si+0Ah] ;~ 185C:0448
cs=0x185c;eip=0x00044b; 	T(SUB(ah, ah));	// 45089 sub     ah, ah ;~ 185C:044B
cs=0x185c;eip=0x00044d; 	T(SHL(ax, cl));	// 45090 shl     ax, cl ;~ 185C:044D
cs=0x185c;eip=0x00044f; 	T(MOV(dx, *(dw*)(raddr(ds,si+4))));	// 45091 mov     dx, [si+4] ;~ 185C:044F
cs=0x185c;eip=0x000452; 	T(MOV(bx, dx));	// 45092 mov     bx, dx ;~ 185C:0452
cs=0x185c;eip=0x000454; 	T(SHL(dx, 1));	// 45093 shl     dx, 1 ;~ 185C:0454
cs=0x185c;eip=0x000456; 	T(ADD(dx, bx));	// 45094 add     dx, bx ;~ 185C:0456
cs=0x185c;eip=0x000458; 	T(SHL(dx, 1));	// 45095 shl     dx, 1 ;~ 185C:0458
cs=0x185c;eip=0x00045a; 	T(ADD(dx, bx));	// 45096 add     dx, bx ;~ 185C:045A
cs=0x185c;eip=0x00045c; 	T(ADD(ax, dx));	// 45097 add     ax, dx ;~ 185C:045C
cs=0x185c;eip=0x00045e; 	T(MOV(cl, 3));	// 45098 mov     cl, 3 ;~ 185C:045E
cs=0x185c;eip=0x000460; 	T(SHR(ax, cl));	// 45099 shr     ax, cl ;~ 185C:0460
cs=0x185c;eip=0x000462; 	X(MOV(*(dw*)(raddr(ds,si+4)), ax));	// 45100 mov     [si+4], ax ;~ 185C:0462
cs=0x185c;eip=0x000465; 	T(MOV(cl, 4));	// 45101 mov     cl, 4 ;~ 185C:0465
cs=0x185c;eip=0x000467; 	T(SHR(ax, cl));	// 45102 shr     ax, cl ;~ 185C:0467
cs=0x185c;eip=0x000469; 	X(MOV(*(raddr(ss,bp+var_1)), al));	// 45103 mov     [bp+var_1], al ;~ 185C:0469
cs=0x185c;eip=0x00046c; 	T(CMP(al, *(raddr(ds,si+0x0E))));	// 45104 cmp     al, [si+0Eh] ;~ 185C:046C
cs=0x185c;eip=0x00046f; 	R(JNZ(loc_27017));	// 45105 jnz     short loc_27017 ;~ 185C:046F
cs=0x185c;eip=0x000471; 	T(CMP(*(raddr(ds,si+0x1A)), 0));	// 45106 cmp     byte ptr [si+1Ah], 0 ;~ 185C:0471
cs=0x185c;eip=0x000475; 	R(JZ(loc_2705d));	// 45107 jz      short loc_2705D ;~ 185C:0475
loc_27017:
	// 7511 
cs=0x185c;eip=0x000477; 	T(MOV(al, *(raddr(ss,bp+var_1))));	// 45110 mov     al, [bp+var_1] ;~ 185C:0477
cs=0x185c;eip=0x00047a; 	T(SUB(ah, ah));	// 45111 sub     ah, ah ;~ 185C:047A
cs=0x185c;eip=0x00047c; 	X(PUSH(ax));	// 45112 push    ax ;~ 185C:047C
cs=0x185c;eip=0x00047d; 	X(PUSH(*(dw*)(raddr(ds,si+2))));	// 45113 push    word ptr [si+2] ;~ 185C:047D
cs=0x185c;eip=0x000480; 	T(MOV(di, ax));	// 45114 mov     di, ax ;~ 185C:0480
cs=0x185c;eip=0x000482; 	R(CALLF(audio_unk2,0));	// 45115 call    audio_unk2 ;~ 185C:0482
cs=0x185c;eip=0x000487; 	T(ADD(sp, 4));	// 45116 add     sp, 4 ;~ 185C:0487
cs=0x185c;eip=0x00048a; 	T(MOV(ax, di));	// 45117 mov     ax, di ;~ 185C:048A
cs=0x185c;eip=0x00048c; 	T(SUB(di, 0x0A));	// 45118 sub     di, 0Ah ;~ 185C:048C
cs=0x185c;eip=0x00048f; 	R(JNS(loc_27033));	// 45119 jns     short loc_27033 ;~ 185C:048F
cs=0x185c;eip=0x000491; 	T(SUB(di, di));	// 45120 sub     di, di ;~ 185C:0491
loc_27033:
	// 7512 
cs=0x185c;eip=0x000493; 	T(CMP(*(dw*)(raddr(ds,si+0x14)), 0x0FFFF));	// 45123 cmp     word ptr [si+14h], 0FFFFh ;~ 185C:0493
cs=0x185c;eip=0x000497; 	R(JZ(loc_27045));	// 45124 jz      short loc_27045 ;~ 185C:0497
cs=0x185c;eip=0x000499; 	X(PUSH(di));	// 45125 push    di ;~ 185C:0499
cs=0x185c;eip=0x00049a; 	X(PUSH(*(dw*)(raddr(ds,si+0x14))));	// 45126 push    word ptr [si+14h] ;~ 185C:049A
cs=0x185c;eip=0x00049d; 	R(CALLF(audio_unk2,0));	// 45127 call    audio_unk2 ;~ 185C:049D
cs=0x185c;eip=0x0004a2; 	T(ADD(sp, 4));	// 45128 add     sp, 4 ;~ 185C:04A2
loc_27045:
	// 7513 
cs=0x185c;eip=0x0004a5; 	T(CMP(*(dw*)(raddr(ds,si+0x16)), 0x0FFFF));	// 45131 cmp     word ptr [si+16h], 0FFFFh ;~ 185C:04A5
cs=0x185c;eip=0x0004a9; 	R(JZ(loc_27057));	// 45132 jz      short loc_27057 ;~ 185C:04A9
cs=0x185c;eip=0x0004ab; 	X(PUSH(di));	// 45133 push    di ;~ 185C:04AB
cs=0x185c;eip=0x0004ac; 	X(PUSH(*(dw*)(raddr(ds,si+0x16))));	// 45134 push    word ptr [si+16h] ;~ 185C:04AC
cs=0x185c;eip=0x0004af; 	R(CALLF(audio_unk2,0));	// 45135 call    audio_unk2 ;~ 185C:04AF
cs=0x185c;eip=0x0004b4; 	T(ADD(sp, 4));	// 45136 add     sp, 4 ;~ 185C:04B4
loc_27057:
	// 7514 
cs=0x185c;eip=0x0004b7; 	T(MOV(al, *(raddr(ss,bp+var_1))));	// 45139 mov     al, [bp+var_1] ;~ 185C:04B7
cs=0x185c;eip=0x0004ba; 	X(MOV(*(raddr(ds,si+0x0E)), al));	// 45140 mov     [si+0Eh], al ;~ 185C:04BA
loc_2705d:
	// 7515 
cs=0x185c;eip=0x0004bd; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 45143 mov     ax, [si+6] ;~ 185C:04BD
cs=0x185c;eip=0x0004c0; 	T(MOV(dx, *(dw*)(raddr(ds,si+8))));	// 45144 mov     dx, [si+8] ;~ 185C:04C0
cs=0x185c;eip=0x0004c3; 	T(MOV(cx, ax));	// 45145 mov     cx, ax ;~ 185C:04C3
cs=0x185c;eip=0x0004c5; 	T(MOV(bx, dx));	// 45146 mov     bx, dx ;~ 185C:04C5
cs=0x185c;eip=0x0004c7; 	T(SHL(ax, 1));	// 45147 shl     ax, 1 ;~ 185C:04C7
cs=0x185c;eip=0x0004c9; 	T(RCL(dx, 1));	// 45148 rcl     dx, 1 ;~ 185C:04C9
cs=0x185c;eip=0x0004cb; 	T(ADD(ax, cx));	// 45149 add     ax, cx ;~ 185C:04CB
cs=0x185c;eip=0x0004cd; 	T(ADC(dx, bx));	// 45150 adc     dx, bx ;~ 185C:04CD
cs=0x185c;eip=0x0004cf; 	T(SHL(ax, 1));	// 45151 shl     ax, 1 ;~ 185C:04CF
cs=0x185c;eip=0x0004d1; 	T(RCL(dx, 1));	// 45152 rcl     dx, 1 ;~ 185C:04D1
cs=0x185c;eip=0x0004d3; 	T(ADD(ax, cx));	// 45153 add     ax, cx ;~ 185C:04D3
cs=0x185c;eip=0x0004d5; 	T(ADC(dx, bx));	// 45154 adc     dx, bx ;~ 185C:04D5
cs=0x185c;eip=0x0004d7; 	T(MOV(cx, *(dw*)(raddr(ds,si+0x0C))));	// 45155 mov     cx, [si+0Ch] ;~ 185C:04D7
cs=0x185c;eip=0x0004da; 	T(SUB(bx, bx));	// 45156 sub     bx, bx ;~ 185C:04DA
cs=0x185c;eip=0x0004dc; 	T(SHL(cx, 1));	// 45157 shl     cx, 1 ;~ 185C:04DC
cs=0x185c;eip=0x0004de; 	T(RCL(bx, 1));	// 45158 rcl     bx, 1 ;~ 185C:04DE
cs=0x185c;eip=0x0004e0; 	T(SHL(cx, 1));	// 45159 shl     cx, 1 ;~ 185C:04E0
cs=0x185c;eip=0x0004e2; 	T(RCL(bx, 1));	// 45160 rcl     bx, 1 ;~ 185C:04E2
cs=0x185c;eip=0x0004e4; 	T(SHL(cx, 1));	// 45161 shl     cx, 1 ;~ 185C:04E4
cs=0x185c;eip=0x0004e6; 	T(RCL(bx, 1));	// 45162 rcl     bx, 1 ;~ 185C:04E6
cs=0x185c;eip=0x0004e8; 	T(SHL(cx, 1));	// 45163 shl     cx, 1 ;~ 185C:04E8
cs=0x185c;eip=0x0004ea; 	T(RCL(bx, 1));	// 45164 rcl     bx, 1 ;~ 185C:04EA
cs=0x185c;eip=0x0004ec; 	T(ADD(cx, ax));	// 45165 add     cx, ax ;~ 185C:04EC
cs=0x185c;eip=0x0004ee; 	T(ADC(bx, dx));	// 45166 adc     bx, dx ;~ 185C:04EE
cs=0x185c;eip=0x0004f0; 	T(SHR(bx, 1));	// 45167 shr     bx, 1 ;~ 185C:04F0
cs=0x185c;eip=0x0004f2; 	T(RCR(cx, 1));	// 45168 rcr     cx, 1 ;~ 185C:04F2
cs=0x185c;eip=0x0004f4; 	T(SHR(bx, 1));	// 45169 shr     bx, 1 ;~ 185C:04F4
cs=0x185c;eip=0x0004f6; 	T(RCR(cx, 1));	// 45170 rcr     cx, 1 ;~ 185C:04F6
cs=0x185c;eip=0x0004f8; 	T(SHR(bx, 1));	// 45171 shr     bx, 1 ;~ 185C:04F8
cs=0x185c;eip=0x0004fa; 	T(RCR(cx, 1));	// 45172 rcr     cx, 1 ;~ 185C:04FA
cs=0x185c;eip=0x0004fc; 	X(MOV(*(dw*)(raddr(ds,si+6)), cx));	// 45173 mov     [si+6], cx ;~ 185C:04FC
cs=0x185c;eip=0x0004ff; 	X(MOV(*(dw*)(raddr(ds,si+8)), bx));	// 45174 mov     [si+8], bx ;~ 185C:04FF
cs=0x185c;eip=0x000502; 	T(SHR(bx, 1));	// 45175 shr     bx, 1 ;~ 185C:0502
cs=0x185c;eip=0x000504; 	T(RCR(cx, 1));	// 45176 rcr     cx, 1 ;~ 185C:0504
cs=0x185c;eip=0x000506; 	T(SHR(bx, 1));	// 45177 shr     bx, 1 ;~ 185C:0506
cs=0x185c;eip=0x000508; 	T(RCR(cx, 1));	// 45178 rcr     cx, 1 ;~ 185C:0508
cs=0x185c;eip=0x00050a; 	T(SHR(bx, 1));	// 45179 shr     bx, 1 ;~ 185C:050A
cs=0x185c;eip=0x00050c; 	T(RCR(cx, 1));	// 45180 rcr     cx, 1 ;~ 185C:050C
cs=0x185c;eip=0x00050e; 	T(SHR(bx, 1));	// 45181 shr     bx, 1 ;~ 185C:050E
cs=0x185c;eip=0x000510; 	T(RCR(cx, 1));	// 45182 rcr     cx, 1 ;~ 185C:0510
cs=0x185c;eip=0x000512; 	T(MOV(di, cx));	// 45183 mov     di, cx ;~ 185C:0512
cs=0x185c;eip=0x000514; 	T(CMP(cx, *(dw*)(raddr(ds,si+0x10))));	// 45184 cmp     cx, [si+10h] ;~ 185C:0514
cs=0x185c;eip=0x000517; 	R(JNZ(loc_270bf));	// 45185 jnz     short loc_270BF ;~ 185C:0517
cs=0x185c;eip=0x000519; 	T(CMP(*(raddr(ds,si+0x1A)), 0));	// 45186 cmp     byte ptr [si+1Ah], 0 ;~ 185C:0519
cs=0x185c;eip=0x00051d; 	R(JZ(loc_270d4));	// 45187 jz      short loc_270D4 ;~ 185C:051D
loc_270bf:
	// 7516 
cs=0x185c;eip=0x00051f; 	T(CMP(*(dw*)(raddr(ds,si+0x12)), 0x0FFFF));	// 45190 cmp     word ptr [si+12h], 0FFFFh ;~ 185C:051F
cs=0x185c;eip=0x000523; 	R(JZ(loc_270d4));	// 45191 jz      short loc_270D4 ;~ 185C:0523
cs=0x185c;eip=0x000525; 	X(PUSH(di));	// 45192 push    di ;~ 185C:0525
cs=0x185c;eip=0x000526; 	X(PUSH(*(dw*)(raddr(ds,si+0x12))));	// 45193 push    word ptr [si+12h] ;~ 185C:0526
cs=0x185c;eip=0x000529; 	R(CALLF(sub_39088,0));	// 45194 call    sub_39088 ;~ 185C:0529
cs=0x185c;eip=0x00052e; 	T(ADD(sp, 4));	// 45195 add     sp, 4 ;~ 185C:052E
cs=0x185c;eip=0x000531; 	X(MOV(*(dw*)(raddr(ds,si+0x10)), di));	// 45196 mov     [si+10h], di ;~ 185C:0531
loc_270d4:
	// 7517 
cs=0x185c;eip=0x000534; 	X(MOV(*(raddr(ds,si+0x1A)), 0));	// 45200 mov     byte ptr [si+1Ah], 0 ;~ 185C:0534
cs=0x185c;eip=0x000538; 	T(CMP(*(raddr(ds,si+0x1B)), 0));	// 45201 cmp     byte ptr [si+1Bh], 0 ;~ 185C:0538
cs=0x185c;eip=0x00053c; 	R(JZ(loc_2710b));	// 45202 jz      short loc_2710B ;~ 185C:053C
cs=0x185c;eip=0x00053e; 	T(CMP(*(raddr(ds,si+1)), 0));	// 45203 cmp     byte ptr [si+1], 0 ;~ 185C:053E
cs=0x185c;eip=0x000542; 	R(JZ(loc_270ee));	// 45204 jz      short loc_270EE ;~ 185C:0542
cs=0x185c;eip=0x000544; 	X(PUSH(*(dw*)(raddr(ds,si+0x14))));	// 45205 push    word ptr [si+14h] ;~ 185C:0544
cs=0x185c;eip=0x000547; 	R(CALLF(audio_init_chunk2,0));	// 45206 call    audio_init_chunk2 ;~ 185C:0547
cs=0x185c;eip=0x00054c; 	R(JMP(loc_27104));	// 45207 jmp     short loc_27104 ;~ 185C:054C
loc_270ee:
	// 7518 
cs=0x185c;eip=0x00054e; 	X(PUSH(*(dw*)(raddr(ds,si+0x14))));	// 45211 push    word ptr [si+14h] ;~ 185C:054E
cs=0x185c;eip=0x000551; 	R(CALLF(sub_3771e,0));	// 45212 call    sub_3771E ;~ 185C:0551
cs=0x185c;eip=0x000556; 	T(ADD(sp, 2));	// 45213 add     sp, 2 ;~ 185C:0556
cs=0x185c;eip=0x000559; 	T(OR(ax, ax));	// 45214 or      ax, ax ;~ 185C:0559
cs=0x185c;eip=0x00055b; 	R(JZ(loc_2710b));	// 45215 jz      short loc_2710B ;~ 185C:055B
cs=0x185c;eip=0x00055d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 45216 push    [bp+var_4] ;~ 185C:055D
cs=0x185c;eip=0x000560; 	X(PUSH(cs));	// 45217 push    cs ;~ 185C:0560
cs=0x185c;eip=0x000561; 	R(CALL(audio_op_unk,0));	// 45218 call    near ptr audio_op_unk ;~ 185C:0561
loc_27104:
	// 7519 
cs=0x185c;eip=0x000564; 	T(ADD(sp, 2));	// 45221 add     sp, 2 ;~ 185C:0564
cs=0x185c;eip=0x000567; 	X(MOV(*(raddr(ds,si+0x1B)), 0));	// 45222 mov     byte ptr [si+1Bh], 0 ;~ 185C:0567
loc_2710b:
	// 7520 
cs=0x185c;eip=0x00056b; 	T(ADD(si, 0x4C));	// 45226 add     si, 4Ch ; 'L' ;~ 185C:056B
cs=0x185c;eip=0x00056e; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 45227 inc     [bp+var_4] ;~ 185C:056E
cs=0x185c;eip=0x000571; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x19));	// 45228 cmp     [bp+var_4], 19h ;~ 185C:0571
cs=0x185c;eip=0x000575; 	R(JGE(loc_2711a));	// 45229 jge     short loc_2711A ;~ 185C:0575
cs=0x185c;eip=0x000577; 	R(JMP(loc_26fd4));	// 45230 jmp     loc_26FD4 ;~ 185C:0577
loc_2711a:
	// 7521 
cs=0x185c;eip=0x00057a; 	T(CMP(word_3eb2a, 2));	// 45234 cmp     word_3EB2A, 2 ;~ 185C:057A
cs=0x185c;eip=0x00057f; 	R(JL(loc_27127));	// 45235 jl      short loc_27127 ;~ 185C:057F
cs=0x185c;eip=0x000581; 	X(MOV(word_3eb2a, 0));	// 45236 mov     word_3EB2A, 0 ;~ 185C:0581
loc_27127:
	// 7522 
cs=0x185c;eip=0x000587; 	X(POP(si));	// 45240 pop     si ;~ 185C:0587
cs=0x185c;eip=0x000588; 	X(POP(di));	// 45241 pop     di ;~ 185C:0588
cs=0x185c;eip=0x000589; 	T(MOV(sp, bp));	// 45242 mov     sp, bp ;~ 185C:0589
cs=0x185c;eip=0x00058b; 	X(POP(bp));	// 45243 pop     bp ;~ 185C:058B
cs=0x185c;eip=0x00058c; 	R(RETF(0));	// 45244 retf ;~ 185C:058C
audio_op_unk2:
	// 45254 
#undef var_16
#define var_16 -0x16
	// 45257 var_16          = word ptr -16h ;~ 185C:058E
#undef var_14
#define var_14 -0x14
	// 45258 var_14          = word ptr -14h ;~ 185C:058E
#undef var_10
#define var_10 -0x10
	// 45259 var_10          = word ptr -10h ;~ 185C:058E
#undef var_e
#define var_e -0x0E
	// 45260 var_E           = word ptr -0Eh ;~ 185C:058E
#undef var_c
#define var_c -0x0C
	// 45261 var_C           = word ptr -0Ch ;~ 185C:058E
#undef var_a
#define var_a -0x0A
	// 45262 var_A           = word ptr -0Ah ;~ 185C:058E
#undef var_8
#define var_8 -8
	// 45263 var_8           = word ptr -8 ;~ 185C:058E
#undef var_6
#define var_6 -6
	// 45264 var_6           = word ptr -6 ;~ 185C:058E
#undef var_2
#define var_2 -2
	// 45265 var_2           = word ptr -2 ;~ 185C:058E
#undef arg_0
#define arg_0 6
	// 45266 arg_0           = word ptr  6 ;~ 185C:058E
#undef arg_2
#define arg_2 8
	// 45267 arg_2           = word ptr  8 ;~ 185C:058E
#undef arg_4
#define arg_4 0x0A
	// 45268 arg_4           = word ptr  0Ah ;~ 185C:058E
#undef arg_6
#define arg_6 0x0C
	// 45269 arg_6           = word ptr  0Ch ;~ 185C:058E
#undef arg_8
#define arg_8 0x0E
	// 45270 arg_8           = word ptr  0Eh ;~ 185C:058E
#undef arg_a
#define arg_a 0x10
	// 45271 arg_A           = word ptr  10h ;~ 185C:058E
#undef arg_c
#define arg_c 0x12
	// 45272 arg_C           = word ptr  12h ;~ 185C:058E
#undef arg_e
#define arg_e 0x14
	// 45273 arg_E           = word ptr  14h ;~ 185C:058E
#undef arg_10
#define arg_10 0x16
	// 45274 arg_10          = word ptr  16h ;~ 185C:058E
ret_185c_58e:
	// 7523 
cs=0x185c;eip=0x00058e; 	X(PUSH(bp));	// 45276 push    bp ;~ 185C:058E
cs=0x185c;eip=0x00058f; 	T(MOV(bp, sp));	// 45277 mov     bp, sp ;~ 185C:058F
cs=0x185c;eip=0x000591; 	T(SUB(sp, 0x16));	// 45278 sub     sp, 16h ;~ 185C:0591
cs=0x185c;eip=0x000594; 	T(MOV(ax, 0x4C));	// 45279 mov     ax, 4Ch ; 'L' ;~ 185C:0594
cs=0x185c;eip=0x000597; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45280 imul    [bp+arg_0] ;~ 185C:0597
cs=0x185c;eip=0x00059a; 	T(ADD(ax, offset(dseg,audiotimers)));	// 45281 add     ax, offset audiotimers ;~ 185C:059A
cs=0x185c;eip=0x00059d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 45282 mov     [bp+var_2], ax ;~ 185C:059D
cs=0x185c;eip=0x0005a0; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 45283 push    [bp+arg_C] ;~ 185C:05A0
cs=0x185c;eip=0x0005a3; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_e))));	// 45284 push    [bp+arg_E] ;~ 185C:05A3
cs=0x185c;eip=0x0005a6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 45285 push    [bp+arg_A] ;~ 185C:05A6
cs=0x185c;eip=0x0005a9; 	R(CALLF(polarradius2d,0));	// 45286 call    polarRadius2D ;~ 185C:05A9
cs=0x185c;eip=0x0005ae; 	T(ADD(sp, 4));	// 45287 add     sp, 4 ;~ 185C:05AE
cs=0x185c;eip=0x0005b1; 	X(PUSH(ax));	// 45288 push    ax ;~ 185C:05B1
cs=0x185c;eip=0x0005b2; 	R(CALLF(polarradius2d,0));	// 45289 call    polarRadius2D ;~ 185C:05B2
cs=0x185c;eip=0x0005b7; 	T(ADD(sp, 4));	// 45290 add     sp, 4 ;~ 185C:05B7
cs=0x185c;eip=0x0005ba; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 45291 mov     [bp+var_C], ax ;~ 185C:05BA
cs=0x185c;eip=0x0005bd; 	T(CMP(ax, 0x1770));	// 45292 cmp     ax, 1770h ;~ 185C:05BD
cs=0x185c;eip=0x0005c0; 	R(JLE(loc_27172));	// 45293 jle     short loc_27172 ;~ 185C:05C0
cs=0x185c;eip=0x0005c2; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 45294 mov     [bp+var_8], 0 ;~ 185C:05C2
cs=0x185c;eip=0x0005c7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 45295 mov     bx, [bp+var_2] ;~ 185C:05C7
cs=0x185c;eip=0x0005ca; 	X(MOV(*(raddr(ds,bx+0x0A)), 0));	// 45296 mov     byte ptr [bx+0Ah], 0 ;~ 185C:05CA
cs=0x185c;eip=0x0005ce; 	T(MOV(sp, bp));	// 45297 mov     sp, bp ;~ 185C:05CE
cs=0x185c;eip=0x0005d0; 	X(POP(bp));	// 45298 pop     bp ;~ 185C:05D0
cs=0x185c;eip=0x0005d1; 	R(RETF(0));	// 45299 retf ;~ 185C:05D1
loc_27172:
	// 7524 
cs=0x185c;eip=0x0005d2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 45303 push    [bp+arg_6] ;~ 185C:05D2
cs=0x185c;eip=0x0005d5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 45304 push    [bp+arg_8] ;~ 185C:05D5
cs=0x185c;eip=0x0005d8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 45305 push    [bp+arg_4] ;~ 185C:05D8
cs=0x185c;eip=0x0005db; 	R(CALLF(polarradius2d,0));	// 45306 call    polarRadius2D ;~ 185C:05DB
cs=0x185c;eip=0x0005e0; 	T(ADD(sp, 4));	// 45307 add     sp, 4 ;~ 185C:05E0
cs=0x185c;eip=0x0005e3; 	X(PUSH(ax));	// 45308 push    ax ;~ 185C:05E3
cs=0x185c;eip=0x0005e4; 	R(CALLF(polarradius2d,0));	// 45309 call    polarRadius2D ;~ 185C:05E4
cs=0x185c;eip=0x0005e9; 	T(ADD(sp, 4));	// 45310 add     sp, 4 ;~ 185C:05E9
cs=0x185c;eip=0x0005ec; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 45311 mov     [bp+var_A], ax ;~ 185C:05EC
cs=0x185c;eip=0x0005ef; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_c))));	// 45312 sub     ax, [bp+var_C] ;~ 185C:05EF
cs=0x185c;eip=0x0005f2; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 45313 mov     [bp+var_16], ax ;~ 185C:05F2
cs=0x185c;eip=0x0005f5; 	T(MOV(ax, 0x64));	// 45314 mov     ax, 64h ; 'd' ;~ 185C:05F5
cs=0x185c;eip=0x0005f8; 	T(XOR(dx, dx));	// 45315 xor     dx, dx ;~ 185C:05F8
cs=0x185c;eip=0x0005fa; 	X(DIV2(*(dw*)(raddr(ss,bp+arg_10))));	// 45316 div     [bp+arg_10] ;~ 185C:05FA
cs=0x185c;eip=0x0005fd; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_16))));	// 45317 imul    [bp+var_16] ;~ 185C:05FD
cs=0x185c;eip=0x000600; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 45318 mov     [bp+var_16], ax ;~ 185C:0600
cs=0x185c;eip=0x000603; 	T(MOV(ax, 0x7F));	// 45319 mov     ax, 7Fh ;~ 185C:0603
cs=0x185c;eip=0x000606; 	X(MUL1_2(*(dw*)(raddr(ss,bp+var_c))));	// 45320 mul     [bp+var_C] ;~ 185C:0606
cs=0x185c;eip=0x000609; 	T(MOV(cx, 0x1770));	// 45321 mov     cx, 1770h ;~ 185C:0609
cs=0x185c;eip=0x00060c; 	T(DIV2(cx));	// 45322 div     cx ;~ 185C:060C
cs=0x185c;eip=0x00060e; 	T(NEG(ax));	// 45323 neg     ax ;~ 185C:060E
cs=0x185c;eip=0x000610; 	T(ADD(ax, 0x7F));	// 45324 add     ax, 7Fh ;~ 185C:0610
cs=0x185c;eip=0x000613; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 45325 mov     [bp+var_8], ax ;~ 185C:0613
cs=0x185c;eip=0x000616; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0));	// 45326 cmp     [bp+var_16], 0 ;~ 185C:0616
cs=0x185c;eip=0x00061a; 	R(JLE(loc_271c6));	// 45327 jle     short loc_271C6 ;~ 185C:061A
cs=0x185c;eip=0x00061c; 	T(MOV(cl, 4));	// 45328 mov     cl, 4 ;~ 185C:061C
cs=0x185c;eip=0x00061e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 45329 mov     ax, [bp+var_8] ;~ 185C:061E
cs=0x185c;eip=0x000621; 	T(SHR(ax, cl));	// 45330 shr     ax, cl ;~ 185C:0621
cs=0x185c;eip=0x000623; 	X(SUB(*(dw*)(raddr(ss,bp+var_8)), ax));	// 45331 sub     [bp+var_8], ax ;~ 185C:0623
loc_271c6:
	// 7525 
cs=0x185c;eip=0x000626; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 45334 mov     ax, [bp+arg_2] ;~ 185C:0626
cs=0x185c;eip=0x000629; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 45335 mov     bx, [bp+var_2] ;~ 185C:0629
cs=0x185c;eip=0x00062c; 	T(ADD(bx, 0x1C));	// 45336 add     bx, 1Ch ;~ 185C:062C
cs=0x185c;eip=0x00062f; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), bx));	// 45337 mov     [bp+var_10], bx ;~ 185C:062F
cs=0x185c;eip=0x000632; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ds));	// 45338 mov     [bp+var_E], ds ;~ 185C:0632
cs=0x185c;eip=0x000635; 	T(LES(bx, *(dw*)(raddr(ds,bx+8))));	// 45339 les     bx, [bx+8] ;~ 185C:0635
cs=0x185c;eip=0x000638; 	T(MOV(cl, *(raddr(es,bx+0x0E))));	// 45340 mov     cl, es:[bx+0Eh] ;~ 185C:0638
cs=0x185c;eip=0x00063c; 	T(SUB(ch, ch));	// 45341 sub     ch, ch ;~ 185C:063C
cs=0x185c;eip=0x00063e; 	T(SUB(dx, dx));	// 45342 sub     dx, dx ;~ 185C:063E
cs=0x185c;eip=0x000640; 	T(DIV2(cx));	// 45343 div     cx ;~ 185C:0640
cs=0x185c;eip=0x000642; 	T(MOV(cl, 4));	// 45344 mov     cl, 4 ;~ 185C:0642
cs=0x185c;eip=0x000644; 	T(MOV(dl, *(raddr(es,bx+0x0F))));	// 45345 mov     dl, es:[bx+0Fh] ;~ 185C:0644
cs=0x185c;eip=0x000648; 	T(SUB(dh, dh));	// 45346 sub     dh, dh ;~ 185C:0648
cs=0x185c;eip=0x00064a; 	T(SHL(dx, cl));	// 45347 shl     dx, cl ;~ 185C:064A
cs=0x185c;eip=0x00064c; 	T(ADD(ax, dx));	// 45348 add     ax, dx ;~ 185C:064C
cs=0x185c;eip=0x00064e; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 45349 mov     [bp+var_14], ax ;~ 185C:064E
cs=0x185c;eip=0x000651; 	T(MOV(ax, 0x1770));	// 45350 mov     ax, 1770h ;~ 185C:0651
cs=0x185c;eip=0x000654; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_16))));	// 45351 sub     ax, [bp+var_16] ;~ 185C:0654
cs=0x185c;eip=0x000657; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 45352 mov     [bp+var_6], ax ;~ 185C:0657
cs=0x185c;eip=0x00065a; 	T(OR(ax, ax));	// 45353 or      ax, ax ;~ 185C:065A
cs=0x185c;eip=0x00065c; 	R(JZ(loc_27213));	// 45354 jz      short loc_27213 ;~ 185C:065C
cs=0x185c;eip=0x00065e; 	T(MOV(ax, 0x1770));	// 45355 mov     ax, 1770h ;~ 185C:065E
cs=0x185c;eip=0x000661; 	X(MUL1_2(*(dw*)(raddr(ss,bp+var_14))));	// 45356 mul     [bp+var_14] ;~ 185C:0661
cs=0x185c;eip=0x000664; 	X(DIV2(*(dw*)(raddr(ss,bp+var_6))));	// 45357 div     [bp+var_6] ;~ 185C:0664
cs=0x185c;eip=0x000667; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 45358 mov     [bp+var_6], ax ;~ 185C:0667
cs=0x185c;eip=0x00066a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 45359 mov     ax, [bp+var_6] ;~ 185C:066A
cs=0x185c;eip=0x00066d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 45360 mov     bx, [bp+var_2] ;~ 185C:066D
cs=0x185c;eip=0x000670; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 45361 mov     [bx+0Ch], ax ;~ 185C:0670
loc_27213:
	// 7526 
cs=0x185c;eip=0x000673; 	T(MOV(al, *(db*)(raddr(ss,bp+var_8))));	// 45364 mov     al, byte ptr [bp+var_8] ;~ 185C:0673
cs=0x185c;eip=0x000676; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 45365 mov     bx, [bp+var_2] ;~ 185C:0676
cs=0x185c;eip=0x000679; 	X(MOV(*(raddr(ds,bx+0x0A)), al));	// 45366 mov     [bx+0Ah], al ;~ 185C:0679
cs=0x185c;eip=0x00067c; 	T(MOV(sp, bp));	// 45367 mov     sp, bp ;~ 185C:067C
cs=0x185c;eip=0x00067e; 	X(POP(bp));	// 45368 pop     bp ;~ 185C:067E
cs=0x185c;eip=0x00067f; 	R(RETF(0));	// 45369 retf ;~ 185C:067F
nopsub_27220:
	// 45377 
#undef arg_0
#define arg_0 6
	// 45379 arg_0           = word ptr  6 ;~ 185C:0680
ret_185c_680:
	// 7527 
cs=0x185c;eip=0x000680; 	X(PUSH(bp));	// 45381 push    bp ;~ 185C:0680
cs=0x185c;eip=0x000681; 	T(MOV(bp, sp));	// 45382 mov     bp, sp ;~ 185C:0681
cs=0x185c;eip=0x000683; 	X(PUSH(si));	// 45383 push    si ;~ 185C:0683
cs=0x185c;eip=0x000684; 	T(MOV(ax, 0x4C));	// 45384 mov     ax, 4Ch ; 'L' ;~ 185C:0684
cs=0x185c;eip=0x000687; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45385 imul    [bp+arg_0] ;~ 185C:0687
cs=0x185c;eip=0x00068a; 	T(MOV(bx, ax));	// 45386 mov     bx, ax ;~ 185C:068A
cs=0x185c;eip=0x00068c; 	T(ADD(bx, 0x6364));	// 45387 add     bx, 6364h ;~ 185C:068C
cs=0x185c;eip=0x000690; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 45388 mov     ax, [bx+4] ;~ 185C:0690
cs=0x185c;eip=0x000693; 	T(MOV(cl, 4));	// 45389 mov     cl, 4 ;~ 185C:0693
cs=0x185c;eip=0x000695; 	T(SHR(ax, cl));	// 45390 shr     ax, cl ;~ 185C:0695
cs=0x185c;eip=0x000697; 	X(PUSH(ax));	// 45391 push    ax ;~ 185C:0697
cs=0x185c;eip=0x000698; 	T(MOV(ax, 0x40));	// 45392 mov     ax, 40h ; '@' ;~ 185C:0698
cs=0x185c;eip=0x00069b; 	X(PUSH(ax));	// 45393 push    ax ;~ 185C:069B
cs=0x185c;eip=0x00069c; 	T(MOV(ax, 0x0FFFF));	// 45394 mov     ax, 0FFFFh ;~ 185C:069C
cs=0x185c;eip=0x00069f; 	X(PUSH(ax));	// 45395 push    ax ;~ 185C:069F
cs=0x185c;eip=0x0006a0; 	X(PUSH(*(dw*)(raddr(ds,bx+0x2E))));	// 45396 push    word ptr [bx+2Eh] ;~ 185C:06A0
cs=0x185c;eip=0x0006a3; 	X(PUSH(*(dw*)(raddr(ds,bx+0x2C))));	// 45397 push    word ptr [bx+2Ch] ;~ 185C:06A3
cs=0x185c;eip=0x0006a6; 	T(MOV(si, bx));	// 45398 mov     si, bx ;~ 185C:06A6
cs=0x185c;eip=0x0006a8; 	R(CALLF(audio_check_flag,0));	// 45399 call    audio_check_flag ;~ 185C:06A8
cs=0x185c;eip=0x0006ad; 	T(ADD(sp, 0x0A));	// 45400 add     sp, 0Ah ;~ 185C:06AD
cs=0x185c;eip=0x0006b0; 	X(MOV(*(dw*)(raddr(ds,si+0x14)), ax));	// 45401 mov     [si+14h], ax ;~ 185C:06B0
cs=0x185c;eip=0x0006b3; 	X(PUSH(ax));	// 45402 push    ax ;~ 185C:06B3
cs=0x185c;eip=0x0006b4; 	T(MOV(ax, 0x33BC));	// 45403 mov     ax, 33BCh ;~ 185C:06B4
cs=0x185c;eip=0x0006b7; 	X(PUSH(ax));	// 45404 push    ax ;~ 185C:06B7
cs=0x185c;eip=0x0006b8; 	R(CALLF(nopsub_3219d,0));	// 45405 call    nopsub_3219D ;~ 185C:06B8
cs=0x185c;eip=0x0006bd; 	X(POP(bx));	// 45406 pop     bx ;~ 185C:06BD
cs=0x185c;eip=0x0006be; 	X(POP(bx));	// 45407 pop     bx ;~ 185C:06BE
cs=0x185c;eip=0x0006bf; 	T(MOV(al, 1));	// 45408 mov     al, 1 ;~ 185C:06BF
cs=0x185c;eip=0x0006c1; 	X(MOV(*(raddr(ds,si+0x1A)), al));	// 45409 mov     [si+1Ah], al ;~ 185C:06C1
cs=0x185c;eip=0x0006c4; 	X(MOV(*(raddr(ds,si+0x1B)), al));	// 45410 mov     [si+1Bh], al ;~ 185C:06C4
cs=0x185c;eip=0x0006c7; 	X(POP(si));	// 45411 pop     si ;~ 185C:06C7
cs=0x185c;eip=0x0006c8; 	T(MOV(sp, bp));	// 45412 mov     sp, bp ;~ 185C:06C8
cs=0x185c;eip=0x0006ca; 	X(POP(bp));	// 45413 pop     bp ;~ 185C:06CA
cs=0x185c;eip=0x0006cb; 	R(RETF(0));	// 45414 retf ;~ 185C:06CB
nopsub_2726c:
	// 45422 
#undef arg_0
#define arg_0 6
	// 45424 arg_0           = word ptr  6 ;~ 185C:06CC
ret_185c_6cc:
	// 7528 
cs=0x185c;eip=0x0006cc; 	X(PUSH(bp));	// 45426 push    bp ;~ 185C:06CC
cs=0x185c;eip=0x0006cd; 	T(MOV(bp, sp));	// 45427 mov     bp, sp ;~ 185C:06CD
cs=0x185c;eip=0x0006cf; 	X(PUSH(si));	// 45428 push    si ;~ 185C:06CF
cs=0x185c;eip=0x0006d0; 	T(MOV(ax, 0x4C));	// 45429 mov     ax, 4Ch ; 'L' ;~ 185C:06D0
cs=0x185c;eip=0x0006d3; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45430 imul    [bp+arg_0] ;~ 185C:06D3
cs=0x185c;eip=0x0006d6; 	T(MOV(bx, ax));	// 45431 mov     bx, ax ;~ 185C:06D6
cs=0x185c;eip=0x0006d8; 	T(ADD(bx, 0x6364));	// 45432 add     bx, 6364h ;~ 185C:06D8
cs=0x185c;eip=0x0006dc; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 45433 mov     ax, [bx+4] ;~ 185C:06DC
cs=0x185c;eip=0x0006df; 	T(MOV(cl, 4));	// 45434 mov     cl, 4 ;~ 185C:06DF
cs=0x185c;eip=0x0006e1; 	T(SHR(ax, cl));	// 45435 shr     ax, cl ;~ 185C:06E1
cs=0x185c;eip=0x0006e3; 	X(PUSH(ax));	// 45436 push    ax ;~ 185C:06E3
cs=0x185c;eip=0x0006e4; 	T(MOV(ax, 0x40));	// 45437 mov     ax, 40h ; '@' ;~ 185C:06E4
cs=0x185c;eip=0x0006e7; 	X(PUSH(ax));	// 45438 push    ax ;~ 185C:06E7
cs=0x185c;eip=0x0006e8; 	T(MOV(ax, 0x0FFFF));	// 45439 mov     ax, 0FFFFh ;~ 185C:06E8
cs=0x185c;eip=0x0006eb; 	X(PUSH(ax));	// 45440 push    ax ;~ 185C:06EB
cs=0x185c;eip=0x0006ec; 	X(PUSH(*(dw*)(raddr(ds,bx+0x32))));	// 45441 push    word ptr [bx+32h] ;~ 185C:06EC
cs=0x185c;eip=0x0006ef; 	X(PUSH(*(dw*)(raddr(ds,bx+0x30))));	// 45442 push    word ptr [bx+30h] ;~ 185C:06EF
cs=0x185c;eip=0x0006f2; 	T(MOV(si, bx));	// 45443 mov     si, bx ;~ 185C:06F2
cs=0x185c;eip=0x0006f4; 	R(CALLF(audio_check_flag,0));	// 45444 call    audio_check_flag ;~ 185C:06F4
cs=0x185c;eip=0x0006f9; 	T(ADD(sp, 0x0A));	// 45445 add     sp, 0Ah ;~ 185C:06F9
cs=0x185c;eip=0x0006fc; 	X(MOV(*(dw*)(raddr(ds,si+0x14)), ax));	// 45446 mov     [si+14h], ax ;~ 185C:06FC
cs=0x185c;eip=0x0006ff; 	X(MOV(*(raddr(ds,si+0x1A)), 1));	// 45447 mov     byte ptr [si+1Ah], 1 ;~ 185C:06FF
cs=0x185c;eip=0x000703; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 45448 push    [bp+arg_0] ;~ 185C:0703
cs=0x185c;eip=0x000706; 	X(PUSH(cs));	// 45449 push    cs ;~ 185C:0706
cs=0x185c;eip=0x000707; 	R(CALL(audio_function2,0));	// 45450 call    near ptr audio_function2 ;~ 185C:0707
cs=0x185c;eip=0x00070a; 	X(POP(bx));	// 45451 pop     bx ;~ 185C:070A
cs=0x185c;eip=0x00070b; 	X(POP(si));	// 45452 pop     si ;~ 185C:070B
cs=0x185c;eip=0x00070c; 	T(MOV(sp, bp));	// 45453 mov     sp, bp ;~ 185C:070C
cs=0x185c;eip=0x00070e; 	X(POP(bp));	// 45454 pop     bp ;~ 185C:070E
cs=0x185c;eip=0x00070f; 	R(RETF(0));	// 45455 retf ;~ 185C:070F
nopsub_272b0:
	// 45463 
#undef arg_0
#define arg_0 6
	// 45465 arg_0           = word ptr  6 ;~ 185C:0710
ret_185c_710:
	// 7529 
cs=0x185c;eip=0x000710; 	X(PUSH(bp));	// 45467 push    bp ;~ 185C:0710
cs=0x185c;eip=0x000711; 	T(MOV(bp, sp));	// 45468 mov     bp, sp ;~ 185C:0711
cs=0x185c;eip=0x000713; 	X(PUSH(si));	// 45469 push    si ;~ 185C:0713
cs=0x185c;eip=0x000714; 	T(MOV(ax, 0x4C));	// 45470 mov     ax, 4Ch ; 'L' ;~ 185C:0714
cs=0x185c;eip=0x000717; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45471 imul    [bp+arg_0] ;~ 185C:0717
cs=0x185c;eip=0x00071a; 	T(MOV(bx, ax));	// 45472 mov     bx, ax ;~ 185C:071A
cs=0x185c;eip=0x00071c; 	T(ADD(bx, 0x6364));	// 45473 add     bx, 6364h ;~ 185C:071C
cs=0x185c;eip=0x000720; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 45474 mov     ax, [bx+4] ;~ 185C:0720
cs=0x185c;eip=0x000723; 	T(MOV(cl, 4));	// 45475 mov     cl, 4 ;~ 185C:0723
cs=0x185c;eip=0x000725; 	T(SHR(ax, cl));	// 45476 shr     ax, cl ;~ 185C:0725
cs=0x185c;eip=0x000727; 	X(PUSH(ax));	// 45477 push    ax ;~ 185C:0727
cs=0x185c;eip=0x000728; 	T(MOV(ax, 0x40));	// 45478 mov     ax, 40h ; '@' ;~ 185C:0728
cs=0x185c;eip=0x00072b; 	X(PUSH(ax));	// 45479 push    ax ;~ 185C:072B
cs=0x185c;eip=0x00072c; 	T(MOV(ax, 0x0FFFF));	// 45480 mov     ax, 0FFFFh ;~ 185C:072C
cs=0x185c;eip=0x00072f; 	X(PUSH(ax));	// 45481 push    ax ;~ 185C:072F
cs=0x185c;eip=0x000730; 	X(PUSH(*(dw*)(raddr(ds,bx+0x36))));	// 45482 push    word ptr [bx+36h] ;~ 185C:0730
cs=0x185c;eip=0x000733; 	X(PUSH(*(dw*)(raddr(ds,bx+0x34))));	// 45483 push    word ptr [bx+34h] ;~ 185C:0733
cs=0x185c;eip=0x000736; 	T(MOV(si, bx));	// 45484 mov     si, bx ;~ 185C:0736
cs=0x185c;eip=0x000738; 	R(CALLF(audio_check_flag,0));	// 45485 call    audio_check_flag ;~ 185C:0738
cs=0x185c;eip=0x00073d; 	T(ADD(sp, 0x0A));	// 45486 add     sp, 0Ah ;~ 185C:073D
cs=0x185c;eip=0x000740; 	X(MOV(*(dw*)(raddr(ds,si+0x14)), ax));	// 45487 mov     [si+14h], ax ;~ 185C:0740
cs=0x185c;eip=0x000743; 	X(MOV(*(raddr(ds,si+0x1A)), 1));	// 45488 mov     byte ptr [si+1Ah], 1 ;~ 185C:0743
cs=0x185c;eip=0x000747; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 45489 push    [bp+arg_0] ;~ 185C:0747
cs=0x185c;eip=0x00074a; 	X(PUSH(cs));	// 45490 push    cs ;~ 185C:074A
cs=0x185c;eip=0x00074b; 	R(CALL(audio_function2,0));	// 45491 call    near ptr audio_function2 ;~ 185C:074B
cs=0x185c;eip=0x00074e; 	X(POP(bx));	// 45492 pop     bx ;~ 185C:074E
cs=0x185c;eip=0x00074f; 	X(POP(si));	// 45493 pop     si ;~ 185C:074F
cs=0x185c;eip=0x000750; 	T(MOV(sp, bp));	// 45494 mov     sp, bp ;~ 185C:0750
cs=0x185c;eip=0x000752; 	X(POP(bp));	// 45495 pop     bp ;~ 185C:0752
cs=0x185c;eip=0x000753; 	R(RETF(0));	// 45496 retf ;~ 185C:0753
audio_function2_wrap:
	// 45504 
#undef arg_0
#define arg_0 6
	// 45507 arg_0           = word ptr  6 ;~ 185C:0754
ret_185c_754:
	// 7530 
cs=0x185c;eip=0x000754; 	X(PUSH(bp));	// 45509 push    bp ;~ 185C:0754
cs=0x185c;eip=0x000755; 	T(MOV(bp, sp));	// 45510 mov     bp, sp ;~ 185C:0755
cs=0x185c;eip=0x000757; 	X(PUSH(si));	// 45511 push    si ;~ 185C:0757
cs=0x185c;eip=0x000758; 	T(MOV(ax, 0x4C));	// 45512 mov     ax, 4Ch ; 'L' ;~ 185C:0758
cs=0x185c;eip=0x00075b; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45513 imul    [bp+arg_0] ;~ 185C:075B
cs=0x185c;eip=0x00075e; 	T(MOV(bx, ax));	// 45514 mov     bx, ax ;~ 185C:075E
cs=0x185c;eip=0x000760; 	T(ADD(bx, offset(dseg,audiotimers)));	// 45515 add     bx, offset audiotimers ;~ 185C:0760
cs=0x185c;eip=0x000764; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 45516 mov     ax, [bx+4] ;~ 185C:0764
cs=0x185c;eip=0x000767; 	T(MOV(cl, 4));	// 45517 mov     cl, 4 ;~ 185C:0767
cs=0x185c;eip=0x000769; 	T(SHR(ax, cl));	// 45518 shr     ax, cl ;~ 185C:0769
cs=0x185c;eip=0x00076b; 	X(PUSH(ax));	// 45519 push    ax ;~ 185C:076B
cs=0x185c;eip=0x00076c; 	T(MOV(ax, 0x64));	// 45520 mov     ax, 64h ; 'd' ;~ 185C:076C
cs=0x185c;eip=0x00076f; 	X(PUSH(ax));	// 45521 push    ax ;~ 185C:076F
cs=0x185c;eip=0x000770; 	T(MOV(ax, 0x0FFFF));	// 45522 mov     ax, 0FFFFh ;~ 185C:0770
cs=0x185c;eip=0x000773; 	X(PUSH(ax));	// 45523 push    ax ;~ 185C:0773
cs=0x185c;eip=0x000774; 	X(PUSH(*(dw*)(raddr(ds,bx+0x3A))));	// 45524 push    word ptr [bx+3Ah] ;~ 185C:0774
cs=0x185c;eip=0x000777; 	X(PUSH(*(dw*)(raddr(ds,bx+0x38))));	// 45525 push    word ptr [bx+38h] ;~ 185C:0777
cs=0x185c;eip=0x00077a; 	T(MOV(si, bx));	// 45526 mov     si, bx ;~ 185C:077A
cs=0x185c;eip=0x00077c; 	R(CALLF(audio_check_flag,0));	// 45527 call    audio_check_flag ;~ 185C:077C
cs=0x185c;eip=0x000781; 	T(ADD(sp, 0x0A));	// 45528 add     sp, 0Ah ;~ 185C:0781
cs=0x185c;eip=0x000784; 	X(MOV(*(dw*)(raddr(ds,si+0x14)), ax));	// 45529 mov     [si+14h], ax ;~ 185C:0784
cs=0x185c;eip=0x000787; 	X(MOV(*(raddr(ds,si+0x1A)), 1));	// 45530 mov     byte ptr [si+1Ah], 1 ;~ 185C:0787
cs=0x185c;eip=0x00078b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 45531 push    [bp+arg_0] ;~ 185C:078B
cs=0x185c;eip=0x00078e; 	X(PUSH(cs));	// 45532 push    cs ;~ 185C:078E
cs=0x185c;eip=0x00078f; 	R(CALL(audio_function2,0));	// 45533 call    near ptr audio_function2 ;~ 185C:078F
cs=0x185c;eip=0x000792; 	X(POP(bx));	// 45534 pop     bx ;~ 185C:0792
cs=0x185c;eip=0x000793; 	X(POP(si));	// 45535 pop     si ;~ 185C:0793
cs=0x185c;eip=0x000794; 	T(MOV(sp, bp));	// 45536 mov     sp, bp ;~ 185C:0794
cs=0x185c;eip=0x000796; 	X(POP(bp));	// 45537 pop     bp ;~ 185C:0796
cs=0x185c;eip=0x000797; 	R(RETF(0));	// 45538 retf ;~ 185C:0797
audio_op_unk3:
	// 45546 
#undef arg_0
#define arg_0 6
	// 45548 arg_0           = word ptr  6 ;~ 185C:0798
ret_185c_798:
	// 7531 
cs=0x185c;eip=0x000798; 	X(PUSH(bp));	// 45550 push    bp ;~ 185C:0798
cs=0x185c;eip=0x000799; 	T(MOV(bp, sp));	// 45551 mov     bp, sp ;~ 185C:0799
cs=0x185c;eip=0x00079b; 	X(PUSH(si));	// 45552 push    si ;~ 185C:079B
cs=0x185c;eip=0x00079c; 	T(MOV(ax, 0x4C));	// 45553 mov     ax, 4Ch ; 'L' ;~ 185C:079C
cs=0x185c;eip=0x00079f; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45554 imul    [bp+arg_0] ;~ 185C:079F
cs=0x185c;eip=0x0007a2; 	T(MOV(bx, ax));	// 45555 mov     bx, ax ;~ 185C:07A2
cs=0x185c;eip=0x0007a4; 	T(ADD(bx, offset(dseg,audiotimers)));	// 45556 add     bx, offset audiotimers ;~ 185C:07A4
cs=0x185c;eip=0x0007a8; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 45557 mov     ax, [bx+4] ;~ 185C:07A8
cs=0x185c;eip=0x0007ab; 	T(MOV(cl, 4));	// 45558 mov     cl, 4 ;~ 185C:07AB
cs=0x185c;eip=0x0007ad; 	T(SHR(ax, cl));	// 45559 shr     ax, cl ;~ 185C:07AD
cs=0x185c;eip=0x0007af; 	X(PUSH(ax));	// 45560 push    ax ;~ 185C:07AF
cs=0x185c;eip=0x0007b0; 	T(MOV(ax, 0x40));	// 45561 mov     ax, 40h ; '@' ;~ 185C:07B0
cs=0x185c;eip=0x0007b3; 	X(PUSH(ax));	// 45562 push    ax ;~ 185C:07B3
cs=0x185c;eip=0x0007b4; 	T(MOV(ax, 0x0FFFF));	// 45563 mov     ax, 0FFFFh ;~ 185C:07B4
cs=0x185c;eip=0x0007b7; 	X(PUSH(ax));	// 45564 push    ax ;~ 185C:07B7
cs=0x185c;eip=0x0007b8; 	X(PUSH(*(dw*)(raddr(ds,bx+0x46))));	// 45565 push    word ptr [bx+46h] ;~ 185C:07B8
cs=0x185c;eip=0x0007bb; 	X(PUSH(*(dw*)(raddr(ds,bx+0x44))));	// 45566 push    word ptr [bx+44h] ;~ 185C:07BB
cs=0x185c;eip=0x0007be; 	T(MOV(si, bx));	// 45567 mov     si, bx ;~ 185C:07BE
cs=0x185c;eip=0x0007c0; 	R(CALLF(audio_check_flag,0));	// 45568 call    audio_check_flag ;~ 185C:07C0
cs=0x185c;eip=0x0007c5; 	T(ADD(sp, 0x0A));	// 45569 add     sp, 0Ah ;~ 185C:07C5
cs=0x185c;eip=0x0007c8; 	X(MOV(*(dw*)(raddr(ds,si+0x14)), ax));	// 45570 mov     [si+14h], ax ;~ 185C:07C8
cs=0x185c;eip=0x0007cb; 	X(MOV(*(raddr(ds,si+0x1A)), 1));	// 45571 mov     byte ptr [si+1Ah], 1 ;~ 185C:07CB
cs=0x185c;eip=0x0007cf; 	X(POP(si));	// 45572 pop     si ;~ 185C:07CF
cs=0x185c;eip=0x0007d0; 	T(MOV(sp, bp));	// 45573 mov     sp, bp ;~ 185C:07D0
cs=0x185c;eip=0x0007d2; 	X(POP(bp));	// 45574 pop     bp ;~ 185C:07D2
cs=0x185c;eip=0x0007d3; 	R(RETF(0));	// 45575 retf ;~ 185C:07D3
audio_op_unk4:
	// 45583 
#undef arg_0
#define arg_0 6
	// 45585 arg_0           = word ptr  6 ;~ 185C:07D4
ret_185c_7d4:
	// 7532 
cs=0x185c;eip=0x0007d4; 	X(PUSH(bp));	// 45587 push    bp ;~ 185C:07D4
cs=0x185c;eip=0x0007d5; 	T(MOV(bp, sp));	// 45588 mov     bp, sp ;~ 185C:07D5
cs=0x185c;eip=0x0007d7; 	X(PUSH(si));	// 45589 push    si ;~ 185C:07D7
cs=0x185c;eip=0x0007d8; 	T(MOV(ax, 0x4C));	// 45590 mov     ax, 4Ch ; 'L' ;~ 185C:07D8
cs=0x185c;eip=0x0007db; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45591 imul    [bp+arg_0] ;~ 185C:07DB
cs=0x185c;eip=0x0007de; 	T(MOV(bx, ax));	// 45592 mov     bx, ax ;~ 185C:07DE
cs=0x185c;eip=0x0007e0; 	T(ADD(bx, offset(dseg,audiotimers)));	// 45593 add     bx, offset audiotimers ;~ 185C:07E0
cs=0x185c;eip=0x0007e4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 45594 mov     ax, [bx+4] ;~ 185C:07E4
cs=0x185c;eip=0x0007e7; 	T(MOV(cl, 4));	// 45595 mov     cl, 4 ;~ 185C:07E7
cs=0x185c;eip=0x0007e9; 	T(SHR(ax, cl));	// 45596 shr     ax, cl ;~ 185C:07E9
cs=0x185c;eip=0x0007eb; 	X(PUSH(ax));	// 45597 push    ax ;~ 185C:07EB
cs=0x185c;eip=0x0007ec; 	T(MOV(ax, 0x40));	// 45598 mov     ax, 40h ; '@' ;~ 185C:07EC
cs=0x185c;eip=0x0007ef; 	X(PUSH(ax));	// 45599 push    ax ;~ 185C:07EF
cs=0x185c;eip=0x0007f0; 	T(MOV(ax, 0x0FFFF));	// 45600 mov     ax, 0FFFFh ;~ 185C:07F0
cs=0x185c;eip=0x0007f3; 	X(PUSH(ax));	// 45601 push    ax ;~ 185C:07F3
cs=0x185c;eip=0x0007f4; 	X(PUSH(*(dw*)(raddr(ds,bx+0x4A))));	// 45602 push    word ptr [bx+4Ah] ;~ 185C:07F4
cs=0x185c;eip=0x0007f7; 	X(PUSH(*(dw*)(raddr(ds,bx+0x48))));	// 45603 push    word ptr [bx+48h] ;~ 185C:07F7
cs=0x185c;eip=0x0007fa; 	T(MOV(si, bx));	// 45604 mov     si, bx ;~ 185C:07FA
cs=0x185c;eip=0x0007fc; 	R(CALLF(audio_check_flag,0));	// 45605 call    audio_check_flag ;~ 185C:07FC
cs=0x185c;eip=0x000801; 	T(ADD(sp, 0x0A));	// 45606 add     sp, 0Ah ;~ 185C:0801
cs=0x185c;eip=0x000804; 	X(MOV(*(dw*)(raddr(ds,si+0x14)), ax));	// 45607 mov     [si+14h], ax ;~ 185C:0804
cs=0x185c;eip=0x000807; 	X(MOV(*(raddr(ds,si+0x1A)), 1));	// 45608 mov     byte ptr [si+1Ah], 1 ;~ 185C:0807
cs=0x185c;eip=0x00080b; 	X(POP(si));	// 45609 pop     si ;~ 185C:080B
cs=0x185c;eip=0x00080c; 	T(MOV(sp, bp));	// 45610 mov     sp, bp ;~ 185C:080C
cs=0x185c;eip=0x00080e; 	X(POP(bp));	// 45611 pop     bp ;~ 185C:080E
cs=0x185c;eip=0x00080f; 	R(RETF(0));	// 45612 retf ;~ 185C:080F
audio_op_unk5:
	// 45620 
#undef var_2
#define var_2 -2
	// 45622 var_2           = word ptr -2 ;~ 185C:0810
#undef arg_0
#define arg_0 6
	// 45623 arg_0           = word ptr  6 ;~ 185C:0810
ret_185c_810:
	// 7533 
cs=0x185c;eip=0x000810; 	X(PUSH(bp));	// 45625 push    bp ;~ 185C:0810
cs=0x185c;eip=0x000811; 	T(MOV(bp, sp));	// 45626 mov     bp, sp ;~ 185C:0811
cs=0x185c;eip=0x000813; 	T(SUB(sp, 4));	// 45627 sub     sp, 4 ;~ 185C:0813
cs=0x185c;eip=0x000816; 	X(PUSH(di));	// 45628 push    di ;~ 185C:0816
cs=0x185c;eip=0x000817; 	X(PUSH(si));	// 45629 push    si ;~ 185C:0817
cs=0x185c;eip=0x000818; 	T(MOV(ax, 0x4C));	// 45630 mov     ax, 4Ch ; 'L' ;~ 185C:0818
cs=0x185c;eip=0x00081b; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45631 imul    [bp+arg_0] ;~ 185C:081B
cs=0x185c;eip=0x00081e; 	T(MOV(si, ax));	// 45632 mov     si, ax ;~ 185C:081E
cs=0x185c;eip=0x000820; 	T(ADD(si, offset(dseg,audiotimers)));	// 45633 add     si, offset audiotimers ;~ 185C:0820
cs=0x185c;eip=0x000824; 	T(ax = si+0x1C);	// 45634 lea     ax, [si+1Ch] ;~ 185C:0824
cs=0x185c;eip=0x000827; 	T(MOV(di, ax));	// 45635 mov     di, ax ;~ 185C:0827
cs=0x185c;eip=0x000829; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ds));	// 45636 mov     [bp+var_2], ds ;~ 185C:0829
cs=0x185c;eip=0x00082c; 	T(CMP(*(dw*)(raddr(ds,si+0x16)), 0x0FFFF));	// 45637 cmp     word ptr [si+16h], 0FFFFh ;~ 185C:082C
cs=0x185c;eip=0x000830; 	R(JZ(loc_273db));	// 45638 jz      short loc_273DB ;~ 185C:0830
cs=0x185c;eip=0x000832; 	X(PUSH(*(dw*)(raddr(ds,si+0x16))));	// 45639 push    word ptr [si+16h] ;~ 185C:0832
cs=0x185c;eip=0x000835; 	R(CALLF(audio_init_chunk2,0));	// 45640 call    audio_init_chunk2 ;~ 185C:0835
cs=0x185c;eip=0x00083a; 	X(POP(bx));	// 45641 pop     bx ;~ 185C:083A
loc_273db:
	// 7534 
cs=0x185c;eip=0x00083b; 	T(MOV(cl, 4));	// 45644 mov     cl, 4 ;~ 185C:083B
cs=0x185c;eip=0x00083d; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 45645 mov     ax, [si+4] ;~ 185C:083D
cs=0x185c;eip=0x000840; 	T(SHR(ax, cl));	// 45646 shr     ax, cl ;~ 185C:0840
cs=0x185c;eip=0x000842; 	X(PUSH(ax));	// 45647 push    ax ;~ 185C:0842
cs=0x185c;eip=0x000843; 	T(MOV(ax, 0x40));	// 45648 mov     ax, 40h ; '@' ;~ 185C:0843
cs=0x185c;eip=0x000846; 	X(PUSH(ax));	// 45649 push    ax ;~ 185C:0846
cs=0x185c;eip=0x000847; 	T(MOV(ax, 0x0FFFF));	// 45650 mov     ax, 0FFFFh ;~ 185C:0847
cs=0x185c;eip=0x00084a; 	X(PUSH(ax));	// 45651 push    ax ;~ 185C:084A
cs=0x185c;eip=0x00084b; 	T(MOV(es, *(dw*)(raddr(ss,bp+var_2))));	// 45652 mov     es, [bp+var_2] ;~ 185C:084B
cs=0x185c;eip=0x00084e; 	X(PUSH(*(dw*)(raddr(es,di+0x22))));	// 45653 push    word ptr es:[di+22h] ;~ 185C:084E
cs=0x185c;eip=0x000852; 	X(PUSH(*(dw*)(raddr(es,di+0x20))));	// 45654 push    word ptr es:[di+20h] ;~ 185C:0852
cs=0x185c;eip=0x000856; 	R(CALLF(audio_check_flag,0));	// 45655 call    audio_check_flag ;~ 185C:0856
cs=0x185c;eip=0x00085b; 	T(ADD(sp, 0x0A));	// 45656 add     sp, 0Ah ;~ 185C:085B
cs=0x185c;eip=0x00085e; 	X(MOV(*(dw*)(raddr(ds,si+0x16)), ax));	// 45657 mov     [si+16h], ax ;~ 185C:085E
cs=0x185c;eip=0x000861; 	X(MOV(*(raddr(ds,si+0x1A)), 1));	// 45658 mov     byte ptr [si+1Ah], 1 ;~ 185C:0861
cs=0x185c;eip=0x000865; 	X(POP(si));	// 45659 pop     si ;~ 185C:0865
cs=0x185c;eip=0x000866; 	X(POP(di));	// 45660 pop     di ;~ 185C:0866
cs=0x185c;eip=0x000867; 	T(MOV(sp, bp));	// 45661 mov     sp, bp ;~ 185C:0867
cs=0x185c;eip=0x000869; 	X(POP(bp));	// 45662 pop     bp ;~ 185C:0869
cs=0x185c;eip=0x00086a; 	R(RETF(0));	// 45663 retf ;~ 185C:086A
audio_op_unk6:
	// 45671 
#undef var_2
#define var_2 -2
	// 45673 var_2           = word ptr -2 ;~ 185C:086B
#undef arg_0
#define arg_0 6
	// 45674 arg_0           = word ptr  6 ;~ 185C:086B
ret_185c_86b:
	// 7535 
cs=0x185c;eip=0x00086b; 	X(PUSH(bp));	// 45676 push    bp ;~ 185C:086B
cs=0x185c;eip=0x00086c; 	T(MOV(bp, sp));	// 45677 mov     bp, sp ;~ 185C:086C
cs=0x185c;eip=0x00086e; 	T(SUB(sp, 4));	// 45678 sub     sp, 4 ;~ 185C:086E
cs=0x185c;eip=0x000871; 	X(PUSH(di));	// 45679 push    di ;~ 185C:0871
cs=0x185c;eip=0x000872; 	X(PUSH(si));	// 45680 push    si ;~ 185C:0872
cs=0x185c;eip=0x000873; 	T(MOV(ax, 0x4C));	// 45681 mov     ax, 4Ch ; 'L' ;~ 185C:0873
cs=0x185c;eip=0x000876; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45682 imul    [bp+arg_0] ;~ 185C:0876
cs=0x185c;eip=0x000879; 	T(MOV(si, ax));	// 45683 mov     si, ax ;~ 185C:0879
cs=0x185c;eip=0x00087b; 	T(ADD(si, offset(dseg,audiotimers)));	// 45684 add     si, offset audiotimers ;~ 185C:087B
cs=0x185c;eip=0x00087f; 	T(ax = si+0x1C);	// 45685 lea     ax, [si+1Ch] ;~ 185C:087F
cs=0x185c;eip=0x000882; 	T(MOV(di, ax));	// 45686 mov     di, ax ;~ 185C:0882
cs=0x185c;eip=0x000884; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ds));	// 45687 mov     [bp+var_2], ds ;~ 185C:0884
cs=0x185c;eip=0x000887; 	T(CMP(*(dw*)(raddr(ds,si+0x16)), 0x0FFFF));	// 45688 cmp     word ptr [si+16h], 0FFFFh ;~ 185C:0887
cs=0x185c;eip=0x00088b; 	R(JZ(loc_27436));	// 45689 jz      short loc_27436 ;~ 185C:088B
cs=0x185c;eip=0x00088d; 	X(PUSH(*(dw*)(raddr(ds,si+0x16))));	// 45690 push    word ptr [si+16h] ;~ 185C:088D
cs=0x185c;eip=0x000890; 	R(CALLF(audio_init_chunk2,0));	// 45691 call    audio_init_chunk2 ;~ 185C:0890
cs=0x185c;eip=0x000895; 	X(POP(bx));	// 45692 pop     bx ;~ 185C:0895
loc_27436:
	// 7536 
cs=0x185c;eip=0x000896; 	T(MOV(cl, 4));	// 45695 mov     cl, 4 ;~ 185C:0896
cs=0x185c;eip=0x000898; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 45696 mov     ax, [si+4] ;~ 185C:0898
cs=0x185c;eip=0x00089b; 	T(SHR(ax, cl));	// 45697 shr     ax, cl ;~ 185C:089B
cs=0x185c;eip=0x00089d; 	X(PUSH(ax));	// 45698 push    ax ;~ 185C:089D
cs=0x185c;eip=0x00089e; 	T(MOV(ax, 0x40));	// 45699 mov     ax, 40h ; '@' ;~ 185C:089E
cs=0x185c;eip=0x0008a1; 	X(PUSH(ax));	// 45700 push    ax ;~ 185C:08A1
cs=0x185c;eip=0x0008a2; 	T(MOV(ax, 0x0FFFF));	// 45701 mov     ax, 0FFFFh ;~ 185C:08A2
cs=0x185c;eip=0x0008a5; 	X(PUSH(ax));	// 45702 push    ax ;~ 185C:08A5
cs=0x185c;eip=0x0008a6; 	T(MOV(es, *(dw*)(raddr(ss,bp+var_2))));	// 45703 mov     es, [bp+var_2] ;~ 185C:08A6
cs=0x185c;eip=0x0008a9; 	X(PUSH(*(dw*)(raddr(es,di+0x26))));	// 45704 push    word ptr es:[di+26h] ;~ 185C:08A9
cs=0x185c;eip=0x0008ad; 	X(PUSH(*(dw*)(raddr(es,di+0x24))));	// 45705 push    word ptr es:[di+24h] ;~ 185C:08AD
cs=0x185c;eip=0x0008b1; 	R(CALLF(audio_check_flag,0));	// 45706 call    audio_check_flag ;~ 185C:08B1
cs=0x185c;eip=0x0008b6; 	T(ADD(sp, 0x0A));	// 45707 add     sp, 0Ah ;~ 185C:08B6
cs=0x185c;eip=0x0008b9; 	X(MOV(*(dw*)(raddr(ds,si+0x16)), ax));	// 45708 mov     [si+16h], ax ;~ 185C:08B9
cs=0x185c;eip=0x0008bc; 	X(MOV(*(raddr(ds,si+0x1A)), 1));	// 45709 mov     byte ptr [si+1Ah], 1 ;~ 185C:08BC
cs=0x185c;eip=0x0008c0; 	X(POP(si));	// 45710 pop     si ;~ 185C:08C0
cs=0x185c;eip=0x0008c1; 	X(POP(di));	// 45711 pop     di ;~ 185C:08C1
cs=0x185c;eip=0x0008c2; 	T(MOV(sp, bp));	// 45712 mov     sp, bp ;~ 185C:08C2
cs=0x185c;eip=0x0008c4; 	X(POP(bp));	// 45713 pop     bp ;~ 185C:08C4
cs=0x185c;eip=0x0008c5; 	R(RETF(0));	// 45714 retf ;~ 185C:08C5
audio_op_unk7:
	// 45722 
#undef arg_0
#define arg_0 6
	// 45725 arg_0           = word ptr  6 ;~ 185C:08C6
ret_185c_8c6:
	// 7537 
cs=0x185c;eip=0x0008c6; 	X(PUSH(bp));	// 45727 push    bp ;~ 185C:08C6
cs=0x185c;eip=0x0008c7; 	T(MOV(bp, sp));	// 45728 mov     bp, sp ;~ 185C:08C7
cs=0x185c;eip=0x0008c9; 	X(PUSH(si));	// 45729 push    si ;~ 185C:08C9
cs=0x185c;eip=0x0008ca; 	T(MOV(ax, 0x4C));	// 45730 mov     ax, 4Ch ; 'L' ;~ 185C:08CA
cs=0x185c;eip=0x0008cd; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45731 imul    [bp+arg_0] ;~ 185C:08CD
cs=0x185c;eip=0x0008d0; 	T(MOV(bx, ax));	// 45732 mov     bx, ax ;~ 185C:08D0
cs=0x185c;eip=0x0008d2; 	X(PUSH(*(dw*)(((audiotimers)+0x16)+bx)));	// 45733 push    word ptr (audiotimers+16h)[bx] ;~ 185C:08D2
cs=0x185c;eip=0x0008d6; 	T(MOV(si, ax));	// 45734 mov     si, ax ;~ 185C:08D6
cs=0x185c;eip=0x0008d8; 	R(CALLF(audio_init_chunk2,0));	// 45735 call    audio_init_chunk2 ;~ 185C:08D8
cs=0x185c;eip=0x0008dd; 	X(POP(bx));	// 45736 pop     bx ;~ 185C:08DD
cs=0x185c;eip=0x0008de; 	X(MOV(*(dw*)(((audiotimers)+0x16)+si), 0x0FFFF));	// 45737 mov     word ptr (audiotimers+16h)[si], 0FFFFh ;~ 185C:08DE
cs=0x185c;eip=0x0008e4; 	X(POP(si));	// 45738 pop     si ;~ 185C:08E4
cs=0x185c;eip=0x0008e5; 	T(MOV(sp, bp));	// 45739 mov     sp, bp ;~ 185C:08E5
cs=0x185c;eip=0x0008e7; 	X(POP(bp));	// 45740 pop     bp ;~ 185C:08E7
cs=0x185c;eip=0x0008e8; 	R(RETF(0));	// 45741 retf ;~ 185C:08E8
nopsub_27489:
	// 45749 
#undef arg_0
#define arg_0 6
	// 45751 arg_0           = word ptr  6 ;~ 185C:08E9
ret_185c_8e9:
	// 7538 
cs=0x185c;eip=0x0008e9; 	X(PUSH(bp));	// 45753 push    bp ;~ 185C:08E9
cs=0x185c;eip=0x0008ea; 	T(MOV(bp, sp));	// 45754 mov     bp, sp ;~ 185C:08EA
cs=0x185c;eip=0x0008ec; 	X(PUSH(si));	// 45755 push    si ;~ 185C:08EC
cs=0x185c;eip=0x0008ed; 	T(MOV(ax, 0x4C));	// 45756 mov     ax, 4Ch ; 'L' ;~ 185C:08ED
cs=0x185c;eip=0x0008f0; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 45757 imul    [bp+arg_0] ;~ 185C:08F0
cs=0x185c;eip=0x0008f3; 	T(MOV(bx, ax));	// 45758 mov     bx, ax ;~ 185C:08F3
cs=0x185c;eip=0x0008f5; 	T(MOV(si, *(dw*)(raddr(ds,bx+0x6378))));	// 45759 mov     si, [bx+6378h] ;~ 185C:08F5
cs=0x185c;eip=0x0008f9; 	T(CMP(si, 0x0FFFF));	// 45760 cmp     si, 0FFFFh ;~ 185C:08F9
cs=0x185c;eip=0x0008fc; 	R(JLE(loc_274a7));	// 45761 jle     short loc_274A7 ;~ 185C:08FC
cs=0x185c;eip=0x0008fe; 	X(PUSH(si));	// 45762 push    si ;~ 185C:08FE
cs=0x185c;eip=0x0008ff; 	R(CALLF(sub_3771e,0));	// 45763 call    sub_3771E ;~ 185C:08FF
cs=0x185c;eip=0x000904; 	X(POP(bx));	// 45764 pop     bx ;~ 185C:0904
cs=0x185c;eip=0x000905; 	R(JMP(loc_274aa));	// 45765 jmp     short loc_274AA ;~ 185C:0905
loc_274a7:
	// 7539 
cs=0x185c;eip=0x000907; 	T(MOV(ax, 1));	// 45769 mov     ax, 1 ;~ 185C:0907
loc_274aa:
	// 7540 
cs=0x185c;eip=0x00090a; 	X(POP(si));	// 45772 pop     si ;~ 185C:090A
cs=0x185c;eip=0x00090b; 	T(MOV(sp, bp));	// 45773 mov     sp, bp ;~ 185C:090B
cs=0x185c;eip=0x00090d; 	X(POP(bp));	// 45774 pop     bp ;~ 185C:090D
cs=0x185c;eip=0x00090e; 	R(RETF(0));	// 45775 retf ;~ 185C:090E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kaudio_add_driver_timer: 	goto audio_add_driver_timer;
        case m2c::kaudio_op_unk3: 	goto audio_op_unk3;
        case m2c::kaudio_op_unk4: 	goto audio_op_unk4;
        case m2c::kaudio_op_unk5: 	goto audio_op_unk5;
        case m2c::kaudio_op_unk6: 	goto audio_op_unk6;
        case m2c::kaudio_remove_driver_timer: 	goto audio_remove_driver_timer;
        case m2c::kloc_26bb3: 	goto loc_26bb3;
        case m2c::kloc_26bb9: 	goto loc_26bb9;
        case m2c::kloc_26bdb: 	goto loc_26bdb;
        case m2c::kloc_26be9: 	goto loc_26be9;
        case m2c::kloc_26bef: 	goto loc_26bef;
        case m2c::kloc_26c22: 	goto loc_26c22;
        case m2c::kloc_26c2e: 	goto loc_26c2e;
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
        case m2c::kloc_26f67: 	goto loc_26f67;
        case m2c::kloc_26f9e: 	goto loc_26f9e;
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
        case m2c::kloc_27172: 	goto loc_27172;
        case m2c::kloc_271c6: 	goto loc_271c6;
        case m2c::kloc_27213: 	goto loc_27213;
        case m2c::kloc_273db: 	goto loc_273db;
        case m2c::kloc_27436: 	goto loc_27436;
        case m2c::kloc_274a7: 	goto loc_274a7;
        case m2c::kloc_274aa: 	goto loc_274aa;
        case m2c::knopsub_272b0: 	goto nopsub_272b0;
        case m2c::knopsub_27489: 	goto nopsub_27489;
        case m2c::kret_185c_11: 	goto ret_185c_11;
        case m2c::kret_185c_354: 	goto ret_185c_354;
        case m2c::kret_185c_36: 	goto ret_185c_36;
        case m2c::kret_185c_3cd: 	goto ret_185c_3cd;
        case m2c::kret_185c_403: 	goto ret_185c_403;
        case m2c::kret_185c_58e: 	goto ret_185c_58e;
        case m2c::kret_185c_66: 	goto ret_185c_66;
        case m2c::kret_185c_680: 	goto ret_185c_680;
        case m2c::kret_185c_6cc: 	goto ret_185c_6cc;
        case m2c::kret_185c_754: 	goto ret_185c_754;
        case m2c::kret_185c_8c6: 	goto ret_185c_8c6;
        case m2c::kret_185c_9c: 	goto ret_185c_9c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

