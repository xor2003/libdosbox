/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool file_get_unflip_size(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    file_get_unflip_size:
    _begin:
#undef var_c
#define var_c -0x0C
	// 90160 var_C           = word ptr -0Ch ;~ 2CAD:000A
#undef var_a
#define var_a -0x0A
	// 90161 var_A           = word ptr -0Ah ;~ 2CAD:000A
#undef var_8
#define var_8 -8
	// 90162 var_8           = word ptr -8 ;~ 2CAD:000A
#undef var_6
#define var_6 -6
	// 90163 var_6           = word ptr -6 ;~ 2CAD:000A
#undef var_4
#define var_4 -4
	// 90164 var_4           = dword ptr -4 ;~ 2CAD:000A
#undef arg_0
#define arg_0 6
	// 90165 arg_0           = word ptr  6 ;~ 2CAD:000A
#undef arg_2
#define arg_2 8
	// 90166 arg_2           = word ptr  8 ;~ 2CAD:000A
ret_2cad_a:
	// 10566 
cs=0x2cad;eip=0x00000a; 	X(PUSH(bp));	// 90168 push    bp ;~ 2CAD:000A
cs=0x2cad;eip=0x00000b; 	T(MOV(bp, sp));	// 90169 mov     bp, sp ;~ 2CAD:000B
cs=0x2cad;eip=0x00000d; 	T(SUB(sp, 0x0C));	// 90170 sub     sp, 0Ch ;~ 2CAD:000D
cs=0x2cad;eip=0x000010; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 90171 push    [bp+arg_2] ;~ 2CAD:0010
cs=0x2cad;eip=0x000013; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 90172 push    [bp+arg_0] ;~ 2CAD:0013
cs=0x2cad;eip=0x000016; 	R(CALLF(file_get_res_shape_count,0));	// 90173 call    file_get_res_shape_count ;~ 2CAD:0016
cs=0x2cad;eip=0x00001b; 	T(ADD(sp, 4));	// 90174 add     sp, 4 ;~ 2CAD:001B
cs=0x2cad;eip=0x00001e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 90175 mov     [bp+var_A], ax ;~ 2CAD:001E
cs=0x2cad;eip=0x000021; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 90176 mov     [bp+var_6], 0 ;~ 2CAD:0021
cs=0x2cad;eip=0x000026; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 90177 mov     [bp+var_8], 0 ;~ 2CAD:0026
cs=0x2cad;eip=0x00002b; 	R(JMP(loc_3b11b));	// 90178 jmp     short loc_3B11B ;~ 2CAD:002B
loc_3b0de:
	// 10567 
cs=0x2cad;eip=0x00002e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 90183 push    [bp+var_8] ;~ 2CAD:002E
cs=0x2cad;eip=0x000031; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 90184 push    [bp+arg_2] ;~ 2CAD:0031
cs=0x2cad;eip=0x000034; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 90185 push    [bp+arg_0] ;~ 2CAD:0034
cs=0x2cad;eip=0x000037; 	R(CALLF(file_get_shape2d,0));	// 90186 call    file_get_shape2d ;~ 2CAD:0037
cs=0x2cad;eip=0x00003c; 	T(ADD(sp, 6));	// 90187 add     sp, 6 ;~ 2CAD:003C
cs=0x2cad;eip=0x00003f; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 90188 mov     word ptr [bp+var_4], ax ;~ 2CAD:003F
cs=0x2cad;eip=0x000042; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 90189 mov     word ptr [bp+var_4+2], dx ;~ 2CAD:0042
cs=0x2cad;eip=0x000045; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 90190 les     bx, [bp+var_4] ;~ 2CAD:0045
cs=0x2cad;eip=0x000048; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 90191 mov     ax, es:[bx+2] ;~ 2CAD:0048
cs=0x2cad;eip=0x00004c; 	X(IMUL1_2(*(dw*)(raddr(es,bx+0))));	// 90192 imul    word ptr es:[bx+0] ;~ 2CAD:004C
cs=0x2cad;eip=0x00004f; 	T(ADD(ax, 0x20));	// 90193 add     ax, 20h ; ' ' ;~ 2CAD:004F
cs=0x2cad;eip=0x000052; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 90194 mov     [bp+var_C], ax ;~ 2CAD:0052
cs=0x2cad;eip=0x000055; 	T(MOV(cl, 4));	// 90195 mov     cl, 4 ;~ 2CAD:0055
cs=0x2cad;eip=0x000057; 	X(SHR(*(dw*)(raddr(ss,bp+var_c)), cl));	// 90196 shr     [bp+var_C], cl ;~ 2CAD:0057
cs=0x2cad;eip=0x00005a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 90197 mov     ax, [bp+var_6] ;~ 2CAD:005A
cs=0x2cad;eip=0x00005d; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), ax));	// 90198 cmp     [bp+var_C], ax ;~ 2CAD:005D
cs=0x2cad;eip=0x000060; 	R(JBE(loc_3b118));	// 90199 jbe     short loc_3B118 ;~ 2CAD:0060
cs=0x2cad;eip=0x000062; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 90200 mov     ax, [bp+var_C] ;~ 2CAD:0062
cs=0x2cad;eip=0x000065; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 90201 mov     [bp+var_6], ax ;~ 2CAD:0065
loc_3b118:
	// 10568 
cs=0x2cad;eip=0x000068; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 90204 inc     [bp+var_8] ;~ 2CAD:0068
loc_3b11b:
	// 10569 
cs=0x2cad;eip=0x00006b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 90207 mov     ax, [bp+var_A] ;~ 2CAD:006B
cs=0x2cad;eip=0x00006e; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), ax));	// 90208 cmp     [bp+var_8], ax ;~ 2CAD:006E
cs=0x2cad;eip=0x000071; 	R(JL(loc_3b0de));	// 90209 jl      short loc_3B0DE ;~ 2CAD:0071
cs=0x2cad;eip=0x000073; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 90210 mov     ax, [bp+var_6] ;~ 2CAD:0073
cs=0x2cad;eip=0x000076; 	T(MOV(sp, bp));	// 90211 mov     sp, bp ;~ 2CAD:0076
cs=0x2cad;eip=0x000078; 	X(POP(bp));	// 90212 pop     bp ;~ 2CAD:0078
cs=0x2cad;eip=0x000079; 	R(RETF(0));	// 90213 retf ;~ 2CAD:0079

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_3b0de: 	goto loc_3b0de;
        case m2c::kloc_3b118: 	goto loc_3b118;
        case m2c::kloc_3b11b: 	goto loc_3b11b;
        case m2c::kret_2cad_a: 	goto ret_2cad_a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

