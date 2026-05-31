/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool sub_3702e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3702e:
    _begin:
#undef var_4
#define var_4 -4
	// 80997 var_4           = word ptr -4 ;~ 28A4:000E
#undef var_2
#define var_2 -2
	// 80998 var_2           = word ptr -2 ;~ 28A4:000E
#undef arg_0
#define arg_0 6
	// 80999 arg_0           = word ptr  6 ;~ 28A4:000E
#undef arg_2
#define arg_2 8
	// 81000 arg_2           = word ptr  8 ;~ 28A4:000E
#undef arg_4
#define arg_4 0x0A
	// 81001 arg_4           = word ptr  0Ah ;~ 28A4:000E
#undef arg_6
#define arg_6 0x0C
	// 81002 arg_6           = word ptr  0Ch ;~ 28A4:000E
#undef arg_8
#define arg_8 0x0E
	// 81003 arg_8           = word ptr  0Eh ;~ 28A4:000E
ret_28a4_e:
	// 9995 
cs=0x28a4;eip=0x00000e; 	X(PUSH(bp));	// 81005 push    bp ;~ 28A4:000E
cs=0x28a4;eip=0x00000f; 	T(MOV(bp, sp));	// 81006 mov     bp, sp ;~ 28A4:000F
cs=0x28a4;eip=0x000011; 	T(SUB(sp, 4));	// 81007 sub     sp, 4 ;~ 28A4:0011
cs=0x28a4;eip=0x000014; 	X(PUSH(si));	// 81008 push    si ;~ 28A4:0014
cs=0x28a4;eip=0x000015; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 81009 mov     ax, [bp+arg_4] ;~ 28A4:0015
cs=0x28a4;eip=0x000018; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 81010 sub     ax, [bp+arg_0] ;~ 28A4:0018
cs=0x28a4;eip=0x00001b; 	T(INC(ax));	// 81011 inc     ax ;~ 28A4:001B
cs=0x28a4;eip=0x00001c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 81012 mov     [bp+var_2], ax ;~ 28A4:001C
cs=0x28a4;eip=0x00001f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 81013 mov     ax, [bp+arg_6] ;~ 28A4:001F
cs=0x28a4;eip=0x000022; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 81014 sub     ax, [bp+arg_2] ;~ 28A4:0022
cs=0x28a4;eip=0x000025; 	T(DEC(ax));	// 81015 dec     ax ;~ 28A4:0025
cs=0x28a4;eip=0x000026; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 81016 mov     [bp+var_4], ax ;~ 28A4:0026
cs=0x28a4;eip=0x000029; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 81017 cmp     [bp+var_2], 0 ;~ 28A4:0029
cs=0x28a4;eip=0x00002d; 	R(JLE(loc_3707f));	// 81018 jle     short loc_3707F ;~ 28A4:002D
cs=0x28a4;eip=0x00002f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 81019 push    [bp+arg_8] ;~ 28A4:002F
cs=0x28a4;eip=0x000032; 	T(MOV(ax, 1));	// 81020 mov     ax, 1 ;~ 28A4:0032
cs=0x28a4;eip=0x000035; 	X(PUSH(ax));	// 81021 push    ax ;~ 28A4:0035
cs=0x28a4;eip=0x000036; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 81022 push    [bp+var_2] ;~ 28A4:0036
cs=0x28a4;eip=0x000039; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 81023 push    [bp+arg_2] ;~ 28A4:0039
cs=0x28a4;eip=0x00003c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 81024 push    [bp+arg_0] ;~ 28A4:003C
cs=0x28a4;eip=0x00003f; 	R(CALLF(sub_35b76,0));	// 81025 call    sub_35B76 ;~ 28A4:003F
cs=0x28a4;eip=0x000044; 	T(ADD(sp, 0x0A));	// 81026 add     sp, 0Ah ;~ 28A4:0044
cs=0x28a4;eip=0x000047; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 81027 push    [bp+arg_8] ;~ 28A4:0047
cs=0x28a4;eip=0x00004a; 	T(MOV(ax, 1));	// 81028 mov     ax, 1 ;~ 28A4:004A
cs=0x28a4;eip=0x00004d; 	X(PUSH(ax));	// 81029 push    ax ;~ 28A4:004D
cs=0x28a4;eip=0x00004e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 81030 push    [bp+var_2] ;~ 28A4:004E
cs=0x28a4;eip=0x000051; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 81031 push    [bp+arg_6] ;~ 28A4:0051
cs=0x28a4;eip=0x000054; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 81032 push    [bp+arg_0] ;~ 28A4:0054
cs=0x28a4;eip=0x000057; 	R(CALLF(sub_35b76,0));	// 81033 call    sub_35B76 ;~ 28A4:0057
cs=0x28a4;eip=0x00005c; 	T(ADD(sp, 0x0A));	// 81034 add     sp, 0Ah ;~ 28A4:005C
loc_3707f:
	// 9996 
cs=0x28a4;eip=0x00005f; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 81037 cmp     [bp+var_4], 0 ;~ 28A4:005F
cs=0x28a4;eip=0x000063; 	R(JLE(loc_370b5));	// 81038 jle     short loc_370B5 ;~ 28A4:0063
cs=0x28a4;eip=0x000065; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 81039 mov     si, [bp+arg_2] ;~ 28A4:0065
cs=0x28a4;eip=0x000068; 	T(INC(si));	// 81040 inc     si ;~ 28A4:0068
cs=0x28a4;eip=0x000069; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 81041 push    [bp+arg_8] ;~ 28A4:0069
cs=0x28a4;eip=0x00006c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 81042 push    [bp+var_4] ;~ 28A4:006C
cs=0x28a4;eip=0x00006f; 	T(MOV(ax, 1));	// 81043 mov     ax, 1 ;~ 28A4:006F
cs=0x28a4;eip=0x000072; 	X(PUSH(ax));	// 81044 push    ax ;~ 28A4:0072
cs=0x28a4;eip=0x000073; 	X(PUSH(si));	// 81045 push    si ;~ 28A4:0073
cs=0x28a4;eip=0x000074; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 81046 push    [bp+arg_0] ;~ 28A4:0074
cs=0x28a4;eip=0x000077; 	R(CALLF(sub_35b76,0));	// 81047 call    sub_35B76 ;~ 28A4:0077
cs=0x28a4;eip=0x00007c; 	T(ADD(sp, 0x0A));	// 81048 add     sp, 0Ah ;~ 28A4:007C
cs=0x28a4;eip=0x00007f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 81049 push    [bp+arg_8] ;~ 28A4:007F
cs=0x28a4;eip=0x000082; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 81050 push    [bp+var_4] ;~ 28A4:0082
cs=0x28a4;eip=0x000085; 	T(MOV(ax, 1));	// 81051 mov     ax, 1 ;~ 28A4:0085
cs=0x28a4;eip=0x000088; 	X(PUSH(ax));	// 81052 push    ax ;~ 28A4:0088
cs=0x28a4;eip=0x000089; 	X(PUSH(si));	// 81053 push    si ;~ 28A4:0089
cs=0x28a4;eip=0x00008a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 81054 push    [bp+arg_4] ;~ 28A4:008A
cs=0x28a4;eip=0x00008d; 	R(CALLF(sub_35b76,0));	// 81055 call    sub_35B76 ;~ 28A4:008D
cs=0x28a4;eip=0x000092; 	T(ADD(sp, 0x0A));	// 81056 add     sp, 0Ah ;~ 28A4:0092
loc_370b5:
	// 9997 
cs=0x28a4;eip=0x000095; 	X(POP(si));	// 81059 pop     si ;~ 28A4:0095
cs=0x28a4;eip=0x000096; 	T(MOV(sp, bp));	// 81060 mov     sp, bp ;~ 28A4:0096
cs=0x28a4;eip=0x000098; 	X(POP(bp));	// 81061 pop     bp ;~ 28A4:0098
cs=0x28a4;eip=0x000099; 	R(RETF(0));	// 81062 retf ;~ 28A4:0099

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_3707f: 	goto loc_3707f;
        case m2c::kloc_370b5: 	goto loc_370b5;
        case m2c::ksub_3702e: 	goto sub_3702e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

