/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool file_load_shape2d_expandedsize(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    file_load_shape2d_expandedsize:
    _begin:
#undef var_e
#define var_e -0x0E
	// 90232 var_E           = word ptr -0Eh ;~ 2CB4:000A
#undef var_c
#define var_c -0x0C
	// 90233 var_C           = word ptr -0Ch ;~ 2CB4:000A
#undef var_a
#define var_a -0x0A
	// 90234 var_A           = word ptr -0Ah ;~ 2CB4:000A
#undef var_8
#define var_8 -8
	// 90235 var_8           = word ptr -8 ;~ 2CB4:000A
#undef var_6
#define var_6 -6
	// 90236 var_6           = word ptr -6 ;~ 2CB4:000A
#undef var_4
#define var_4 -4
	// 90237 var_4           = dword ptr -4 ;~ 2CB4:000A
#undef arg_0
#define arg_0 6
	// 90238 arg_0           = word ptr  6 ;~ 2CB4:000A
#undef arg_2
#define arg_2 8
	// 90239 arg_2           = word ptr  8 ;~ 2CB4:000A
ret_2cb4_a:
	// 10570 
cs=0x2cb4;eip=0x00000a; 	X(PUSH(bp));	// 90241 push    bp ;~ 2CB4:000A
cs=0x2cb4;eip=0x00000b; 	T(MOV(bp, sp));	// 90242 mov     bp, sp ;~ 2CB4:000B
cs=0x2cb4;eip=0x00000d; 	T(SUB(sp, 0x0E));	// 90243 sub     sp, 0Eh ;~ 2CB4:000D
cs=0x2cb4;eip=0x000010; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 90244 push    [bp+arg_2] ;~ 2CB4:0010
cs=0x2cb4;eip=0x000013; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 90245 push    [bp+arg_0] ;~ 2CB4:0013
cs=0x2cb4;eip=0x000016; 	R(CALLF(file_get_res_shape_count,0));	// 90246 call    file_get_res_shape_count ;~ 2CB4:0016
cs=0x2cb4;eip=0x00001b; 	T(ADD(sp, 4));	// 90247 add     sp, 4 ;~ 2CB4:001B
cs=0x2cb4;eip=0x00001e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 90248 mov     [bp+var_A], ax ;~ 2CB4:001E
cs=0x2cb4;eip=0x000021; 	T(MOV(cl, 3));	// 90249 mov     cl, 3 ;~ 2CB4:0021
cs=0x2cb4;eip=0x000023; 	T(SHL(ax, cl));	// 90250 shl     ax, cl ;~ 2CB4:0023
cs=0x2cb4;eip=0x000025; 	T(ADD(ax, 0x10));	// 90251 add     ax, 10h ;~ 2CB4:0025
cs=0x2cb4;eip=0x000028; 	T(CWD);	// 90252 cwd ;~ 2CB4:0028
cs=0x2cb4;eip=0x000029; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 90253 mov     [bp+var_E], ax ;~ 2CB4:0029
cs=0x2cb4;eip=0x00002c; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), dx));	// 90254 mov     [bp+var_C], dx ;~ 2CB4:002C
cs=0x2cb4;eip=0x00002f; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 90255 mov     [bp+var_8], 0 ;~ 2CB4:002F
cs=0x2cb4;eip=0x000034; 	R(JMP(loc_3b191));	// 90256 jmp     short loc_3B191 ;~ 2CB4:0034
loc_3b156:
	// 10571 
cs=0x2cb4;eip=0x000036; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 90260 push    [bp+var_8] ;~ 2CB4:0036
cs=0x2cb4;eip=0x000039; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 90261 push    [bp+arg_2] ;~ 2CB4:0039
cs=0x2cb4;eip=0x00003c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 90262 push    [bp+arg_0] ;~ 2CB4:003C
cs=0x2cb4;eip=0x00003f; 	R(CALLF(file_get_shape2d,0));	// 90263 call    file_get_shape2d ;~ 2CB4:003F
cs=0x2cb4;eip=0x000044; 	T(ADD(sp, 6));	// 90264 add     sp, 6 ;~ 2CB4:0044
cs=0x2cb4;eip=0x000047; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 90265 mov     word ptr [bp+var_4], ax ;~ 2CB4:0047
cs=0x2cb4;eip=0x00004a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 90266 mov     word ptr [bp+var_4+2], dx ;~ 2CB4:004A
cs=0x2cb4;eip=0x00004d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 90267 les     bx, [bp+var_4] ;~ 2CB4:004D
cs=0x2cb4;eip=0x000050; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 90268 mov     ax, es:[bx+2] ;~ 2CB4:0050
cs=0x2cb4;eip=0x000054; 	X(IMUL1_2(*(dw*)(raddr(es,bx+0))));	// 90269 imul    word ptr es:[bx+0] ;~ 2CB4:0054
cs=0x2cb4;eip=0x000057; 	T(MOV(cl, 3));	// 90270 mov     cl, 3 ;~ 2CB4:0057
cs=0x2cb4;eip=0x000059; 	T(SHL(ax, cl));	// 90271 shl     ax, cl ;~ 2CB4:0059
cs=0x2cb4;eip=0x00005b; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 90272 mov     [bp+var_6], ax ;~ 2CB4:005B
cs=0x2cb4;eip=0x00005e; 	T(SUB(dx, dx));	// 90273 sub     dx, dx ;~ 2CB4:005E
cs=0x2cb4;eip=0x000060; 	X(ADD(*(dw*)(raddr(ss,bp+var_e)), ax));	// 90274 add     [bp+var_E], ax ;~ 2CB4:0060
cs=0x2cb4;eip=0x000063; 	X(ADC(*(dw*)(raddr(ss,bp+var_c)), dx));	// 90275 adc     [bp+var_C], dx ;~ 2CB4:0063
cs=0x2cb4;eip=0x000066; 	X(ADD(*(dw*)(raddr(ss,bp+var_e)), 0x10));	// 90276 add     [bp+var_E], 10h ;~ 2CB4:0066
cs=0x2cb4;eip=0x00006a; 	X(ADC(*(dw*)(raddr(ss,bp+var_c)), 0));	// 90277 adc     [bp+var_C], 0 ;~ 2CB4:006A
cs=0x2cb4;eip=0x00006e; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 90278 inc     [bp+var_8] ;~ 2CB4:006E
loc_3b191:
	// 10572 
cs=0x2cb4;eip=0x000071; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 90281 mov     ax, [bp+var_A] ;~ 2CB4:0071
cs=0x2cb4;eip=0x000074; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), ax));	// 90282 cmp     [bp+var_8], ax ;~ 2CB4:0074
cs=0x2cb4;eip=0x000077; 	R(JL(loc_3b156));	// 90283 jl      short loc_3B156 ;~ 2CB4:0077
cs=0x2cb4;eip=0x000079; 	X(ADD(*(dw*)(raddr(ss,bp+var_e)), 0x10));	// 90284 add     [bp+var_E], 10h ;~ 2CB4:0079
cs=0x2cb4;eip=0x00007d; 	X(ADC(*(dw*)(raddr(ss,bp+var_c)), 0));	// 90285 adc     [bp+var_C], 0 ;~ 2CB4:007D
cs=0x2cb4;eip=0x000081; 	T(MOV(al, 4));	// 90286 mov     al, 4 ;~ 2CB4:0081
cs=0x2cb4;eip=0x000083; 	X(PUSH(ax));	// 90287 push    ax ;~ 2CB4:0083
cs=0x2cb4;eip=0x000084; 	T(ax = bp+var_e);	// 90288 lea     ax, [bp+var_E] ;~ 2CB4:0084
cs=0x2cb4;eip=0x000087; 	X(PUSH(ax));	// 90289 push    ax ;~ 2CB4:0087
cs=0x2cb4;eip=0x000088; 	R(CALLF(unknown_libname_4,0));	// 90290 call    unknown_libname_4 ; MS Quick C v1.0/v2.01 & MSC v5.1 DOS run-time & graphic ;~ 2CB4:0088
cs=0x2cb4;eip=0x00008d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 90291 mov     ax, [bp+var_E] ;~ 2CB4:008D
cs=0x2cb4;eip=0x000090; 	T(MOV(sp, bp));	// 90292 mov     sp, bp ;~ 2CB4:0090
cs=0x2cb4;eip=0x000092; 	X(POP(bp));	// 90293 pop     bp ;~ 2CB4:0092
cs=0x2cb4;eip=0x000093; 	R(RETF(0));	// 90294 retf ;~ 2CB4:0093

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kfile_load_shape2d_expandedsize: 	goto file_load_shape2d_expandedsize;
        case m2c::kloc_3b156: 	goto loc_3b156;
        case m2c::kloc_3b191: 	goto loc_3b191;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

