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
	// 80980 var_4           = word ptr -4 ;~ 28A4:000E
#undef var_2
#define var_2 -2
	// 80981 var_2           = word ptr -2 ;~ 28A4:000E
#undef arg_0
#define arg_0 6
	// 80982 arg_0           = word ptr  6 ;~ 28A4:000E
#undef arg_2
#define arg_2 8
	// 80983 arg_2           = word ptr  8 ;~ 28A4:000E
#undef arg_4
#define arg_4 0x0A
	// 80984 arg_4           = word ptr  0Ah ;~ 28A4:000E
#undef arg_6
#define arg_6 0x0C
	// 80985 arg_6           = word ptr  0Ch ;~ 28A4:000E
#undef arg_8
#define arg_8 0x0E
	// 80986 arg_8           = word ptr  0Eh ;~ 28A4:000E
cs=0x28a4;eip=0x00000e; 	X(PUSH(bp));	// 80988 push    bp ;~ 28A4:000E
cs=0x28a4;eip=0x00000f; 	T(MOV(bp, sp));	// 80989 mov     bp, sp ;~ 28A4:000F
cs=0x28a4;eip=0x000011; 	T(SUB(sp, 4));	// 80990 sub     sp, 4 ;~ 28A4:0011
cs=0x28a4;eip=0x000014; 	X(PUSH(si));	// 80991 push    si ;~ 28A4:0014
cs=0x28a4;eip=0x000015; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 80992 mov     ax, [bp+arg_4] ;~ 28A4:0015
cs=0x28a4;eip=0x000018; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 80993 sub     ax, [bp+arg_0] ;~ 28A4:0018
cs=0x28a4;eip=0x00001b; 	T(INC(ax));	// 80994 inc     ax ;~ 28A4:001B
cs=0x28a4;eip=0x00001c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 80995 mov     [bp+var_2], ax ;~ 28A4:001C
cs=0x28a4;eip=0x00001f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 80996 mov     ax, [bp+arg_6] ;~ 28A4:001F
cs=0x28a4;eip=0x000022; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 80997 sub     ax, [bp+arg_2] ;~ 28A4:0022
cs=0x28a4;eip=0x000025; 	T(DEC(ax));	// 80998 dec     ax ;~ 28A4:0025
cs=0x28a4;eip=0x000026; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 80999 mov     [bp+var_4], ax ;~ 28A4:0026
cs=0x28a4;eip=0x000029; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 81000 cmp     [bp+var_2], 0 ;~ 28A4:0029
cs=0x28a4;eip=0x00002d; 	J(JLE(loc_3707f));	// 81001 jle     short loc_3707F ;~ 28A4:002D
cs=0x28a4;eip=0x00002f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 81002 push    [bp+arg_8] ;~ 28A4:002F
cs=0x28a4;eip=0x000032; 	T(MOV(ax, 1));	// 81003 mov     ax, 1 ;~ 28A4:0032
cs=0x28a4;eip=0x000035; 	X(PUSH(ax));	// 81004 push    ax ;~ 28A4:0035
cs=0x28a4;eip=0x000036; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 81005 push    [bp+var_2] ;~ 28A4:0036
cs=0x28a4;eip=0x000039; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 81006 push    [bp+arg_2] ;~ 28A4:0039
cs=0x28a4;eip=0x00003c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 81007 push    [bp+arg_0] ;~ 28A4:003C
cs=0x28a4;eip=0x00003f; 	J(CALLF(sub_35b76,0));	// 81008 call    sub_35B76 ;~ 28A4:003F
cs=0x28a4;eip=0x000044; 	T(ADD(sp, 0x0A));	// 81009 add     sp, 0Ah ;~ 28A4:0044
cs=0x28a4;eip=0x000047; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 81010 push    [bp+arg_8] ;~ 28A4:0047
cs=0x28a4;eip=0x00004a; 	T(MOV(ax, 1));	// 81011 mov     ax, 1 ;~ 28A4:004A
cs=0x28a4;eip=0x00004d; 	X(PUSH(ax));	// 81012 push    ax ;~ 28A4:004D
cs=0x28a4;eip=0x00004e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 81013 push    [bp+var_2] ;~ 28A4:004E
cs=0x28a4;eip=0x000051; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 81014 push    [bp+arg_6] ;~ 28A4:0051
cs=0x28a4;eip=0x000054; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 81015 push    [bp+arg_0] ;~ 28A4:0054
cs=0x28a4;eip=0x000057; 	J(CALLF(sub_35b76,0));	// 81016 call    sub_35B76 ;~ 28A4:0057
cs=0x28a4;eip=0x00005c; 	T(ADD(sp, 0x0A));	// 81017 add     sp, 0Ah ;~ 28A4:005C
loc_3707f:
	// 9477 
cs=0x28a4;eip=0x00005f; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 81020 cmp     [bp+var_4], 0 ;~ 28A4:005F
cs=0x28a4;eip=0x000063; 	J(JLE(loc_370b5));	// 81021 jle     short loc_370B5 ;~ 28A4:0063
cs=0x28a4;eip=0x000065; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 81022 mov     si, [bp+arg_2] ;~ 28A4:0065
cs=0x28a4;eip=0x000068; 	T(INC(si));	// 81023 inc     si ;~ 28A4:0068
cs=0x28a4;eip=0x000069; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 81024 push    [bp+arg_8] ;~ 28A4:0069
cs=0x28a4;eip=0x00006c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 81025 push    [bp+var_4] ;~ 28A4:006C
cs=0x28a4;eip=0x00006f; 	T(MOV(ax, 1));	// 81026 mov     ax, 1 ;~ 28A4:006F
cs=0x28a4;eip=0x000072; 	X(PUSH(ax));	// 81027 push    ax ;~ 28A4:0072
cs=0x28a4;eip=0x000073; 	X(PUSH(si));	// 81028 push    si ;~ 28A4:0073
cs=0x28a4;eip=0x000074; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 81029 push    [bp+arg_0] ;~ 28A4:0074
cs=0x28a4;eip=0x000077; 	J(CALLF(sub_35b76,0));	// 81030 call    sub_35B76 ;~ 28A4:0077
cs=0x28a4;eip=0x00007c; 	T(ADD(sp, 0x0A));	// 81031 add     sp, 0Ah ;~ 28A4:007C
cs=0x28a4;eip=0x00007f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 81032 push    [bp+arg_8] ;~ 28A4:007F
cs=0x28a4;eip=0x000082; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 81033 push    [bp+var_4] ;~ 28A4:0082
cs=0x28a4;eip=0x000085; 	T(MOV(ax, 1));	// 81034 mov     ax, 1 ;~ 28A4:0085
cs=0x28a4;eip=0x000088; 	X(PUSH(ax));	// 81035 push    ax ;~ 28A4:0088
cs=0x28a4;eip=0x000089; 	X(PUSH(si));	// 81036 push    si ;~ 28A4:0089
cs=0x28a4;eip=0x00008a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 81037 push    [bp+arg_4] ;~ 28A4:008A
cs=0x28a4;eip=0x00008d; 	J(CALLF(sub_35b76,0));	// 81038 call    sub_35B76 ;~ 28A4:008D
cs=0x28a4;eip=0x000092; 	T(ADD(sp, 0x0A));	// 81039 add     sp, 0Ah ;~ 28A4:0092
loc_370b5:
	// 9478 
cs=0x28a4;eip=0x000095; 	X(POP(si));	// 81042 pop     si ;~ 28A4:0095
cs=0x28a4;eip=0x000096; 	T(MOV(sp, bp));	// 81043 mov     sp, bp ;~ 28A4:0096
cs=0x28a4;eip=0x000098; 	X(POP(bp));	// 81044 pop     bp ;~ 28A4:0098
cs=0x28a4;eip=0x000099; 	J(RETF(0));	// 81045 retf ;~ 28A4:0099

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3707f: 	goto loc_3707f;
        case m2c::kloc_370b5: 	goto loc_370b5;
        case m2c::ksub_3702e: 	goto sub_3702e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

