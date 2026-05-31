/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool update_rpm_from_speed(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    update_rpm_from_speed:
    _begin:
#undef arg_0
#define arg_0 6
	// 18731 arg_0           = word ptr  6 ;~ 0B7E:0006
#undef arg_2
#define arg_2 8
	// 18732 arg_2           = word ptr  8 ;~ 0B7E:0006
#undef arg_4
#define arg_4 0x0A
	// 18733 arg_4           = word ptr  0Ah ;~ 0B7E:0006
#undef arg_6
#define arg_6 0x0C
	// 18734 arg_6           = word ptr  0Ch ;~ 0B7E:0006
#undef arg_8
#define arg_8 0x0E
	// 18735 arg_8           = word ptr  0Eh ;~ 0B7E:0006
cs=0xb7e;eip=0x000006; 	X(PUSH(bp));	// 18737 push    bp ;~ 0B7E:0006
cs=0xb7e;eip=0x000007; 	T(MOV(bp, sp));	// 18738 mov     bp, sp ;~ 0B7E:0007
cs=0xb7e;eip=0x000009; 	X(PUSH(bp));	// 18739 push    bp ;~ 0B7E:0009
cs=0xb7e;eip=0x00000a; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_0))));	// 18740 mov     cx, [bp+arg_0] ;~ 0B7E:000A
cs=0xb7e;eip=0x00000d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 18741 mov     ax, [bp+arg_2] ;~ 0B7E:000D
cs=0xb7e;eip=0x000010; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0));	// 18742 cmp     [bp+arg_6], 0 ;~ 0B7E:0010
cs=0xb7e;eip=0x000014; 	J(JNZ(loc_19ddb));	// 18743 jnz     short loc_19DDB ;~ 0B7E:0014
cs=0xb7e;eip=0x000016; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_4))));	// 18744 mul     [bp+arg_4] ;~ 0B7E:0016
cs=0xb7e;eip=0x000019; 	T(MOV(cx, dx));	// 18745 mov     cx, dx ;~ 0B7E:0019
loc_19ddb:
	// 5478 
cs=0xb7e;eip=0x00001b; 	T(CMP(cx, *(dw*)(raddr(ss,bp+arg_8))));	// 18748 cmp     cx, [bp+arg_8] ;~ 0B7E:001B
cs=0xb7e;eip=0x00001e; 	J(JNC(loc_19de3));	// 18749 jnb     short loc_19DE3 ;~ 0B7E:001E
cs=0xb7e;eip=0x000020; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_8))));	// 18750 mov     cx, [bp+arg_8] ;~ 0B7E:0020
loc_19de3:
	// 5479 
cs=0xb7e;eip=0x000023; 	T(MOV(ax, cx));	// 18753 mov     ax, cx ;~ 0B7E:0023
cs=0xb7e;eip=0x000025; 	X(POP(bp));	// 18754 pop     bp ;~ 0B7E:0025
cs=0xb7e;eip=0x000026; 	X(POP(bp));	// 18755 pop     bp ;~ 0B7E:0026
cs=0xb7e;eip=0x000027; 	J(RETF(0));	// 18756 retf ;~ 0B7E:0027

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_19ddb: 	goto loc_19ddb;
        case m2c::kloc_19de3: 	goto loc_19de3;
        case m2c::kupdate_rpm_from_speed: 	goto update_rpm_from_speed;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_19de8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_19de8:
    _begin:
#undef arg_0
#define arg_0 6
	// 18766 arg_0           = word ptr  6 ;~ 0B7E:0028
cs=0xb7e;eip=0x000028; 	X(PUSH(bp));	// 18768 push    bp ;~ 0B7E:0028
cs=0xb7e;eip=0x000029; 	T(MOV(bp, sp));	// 18769 mov     bp, sp ;~ 0B7E:0029
cs=0xb7e;eip=0x00002b; 	X(PUSH(bp));	// 18770 push    bp ;~ 0B7E:002B
cs=0xb7e;eip=0x00002c; 	T(XOR(ax, ax));	// 18771 xor     ax, ax ;~ 0B7E:002C
cs=0xb7e;eip=0x00002e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 18772 mov     bx, [bp+arg_0] ;~ 0B7E:002E
cs=0xb7e;eip=0x000031; 	T(OR(bx, bx));	// 18773 or      bx, bx ;~ 0B7E:0031
cs=0xb7e;eip=0x000033; 	J(JZ(loc_19dfc));	// 18774 jz      short loc_19DFC ;~ 0B7E:0033
cs=0xb7e;eip=0x000035; 	J(JL(loc_19dfb));	// 18775 jl      short loc_19DFB ;~ 0B7E:0035
cs=0xb7e;eip=0x000037; 	T(INC(ax));	// 18776 inc     ax ;~ 0B7E:0037
cs=0xb7e;eip=0x000038; 	X(POP(bp));	// 18777 pop     bp ;~ 0B7E:0038
cs=0xb7e;eip=0x000039; 	X(POP(bp));	// 18778 pop     bp ;~ 0B7E:0039
cs=0xb7e;eip=0x00003a; 	J(RETF(0));	// 18779 retf ;~ 0B7E:003A
loc_19dfb:
	// 5480 
cs=0xb7e;eip=0x00003b; 	T(DEC(ax));	// 18783 dec     ax ;~ 0B7E:003B
loc_19dfc:
	// 5481 
cs=0xb7e;eip=0x00003c; 	X(POP(bp));	// 18786 pop     bp ;~ 0B7E:003C
cs=0xb7e;eip=0x00003d; 	X(POP(bp));	// 18787 pop     bp ;~ 0B7E:003D
cs=0xb7e;eip=0x00003e; 	J(RETF(0));	// 18788 retf ;~ 0B7E:003E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_19dfb: 	goto loc_19dfb;
        case m2c::kloc_19dfc: 	goto loc_19dfc;
        case m2c::knopsub_19de8: 	goto nopsub_19de8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_19dff(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_19dff:
    _begin:
#undef arg_0
#define arg_0 6
	// 18798 arg_0           = word ptr  6 ;~ 0B7E:003F
cs=0xb7e;eip=0x00003f; 	X(PUSH(bp));	// 18800 push    bp ;~ 0B7E:003F
cs=0xb7e;eip=0x000040; 	T(MOV(bp, sp));	// 18801 mov     bp, sp ;~ 0B7E:0040
cs=0xb7e;eip=0x000042; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 18802 mov     ax, [bp+arg_0] ;~ 0B7E:0042
cs=0xb7e;eip=0x000045; 	R(_INT(0x61));	// 18803 int     61h             ; reserved for user interrupt ;~ 0B7E:0045
cs=0xb7e;eip=0x000047; 	X(POP(bp));	// 18804 pop     bp ;~ 0B7E:0047
cs=0xb7e;eip=0x000048; 	J(RETF(0));	// 18805 retf ;~ 0B7E:0048

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knopsub_19dff: 	goto nopsub_19dff;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_19e09(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_19e09:
    _begin:
#undef arg_0
#define arg_0 6
	// 18815 arg_0           = word ptr  6 ;~ 0B7E:0049
cs=0xb7e;eip=0x000049; 	X(PUSH(bp));	// 18817 push    bp ;~ 0B7E:0049
cs=0xb7e;eip=0x00004a; 	T(MOV(bp, sp));	// 18818 mov     bp, sp ;~ 0B7E:004A
cs=0xb7e;eip=0x00004c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 18819 mov     ax, [bp+arg_0] ;~ 0B7E:004C
cs=0xb7e;eip=0x00004f; 	R(_INT(0x60));	// 18820 int     60h ;~ 0B7E:004F
cs=0xb7e;eip=0x000051; 	X(POP(bp));	// 18821 pop     bp ;~ 0B7E:0051
cs=0xb7e;eip=0x000052; 	J(RETF(0));	// 18822 retf ;~ 0B7E:0052

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knopsub_19e09: 	goto nopsub_19e09;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_19e13(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_19e13:
    _begin:
#undef arg_0
#define arg_0 6
	// 18832 arg_0           = word ptr  6 ;~ 0B7E:0053
cs=0xb7e;eip=0x000053; 	X(PUSH(bp));	// 18834 push    bp ;~ 0B7E:0053
cs=0xb7e;eip=0x000054; 	T(MOV(bp, sp));	// 18835 mov     bp, sp ;~ 0B7E:0054
cs=0xb7e;eip=0x000056; 	X(PUSH(bp));	// 18836 push    bp ;~ 0B7E:0056
cs=0xb7e;eip=0x000057; 	X(PUSH(si));	// 18837 push    si ;~ 0B7E:0057
cs=0xb7e;eip=0x000058; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 18838 mov     si, [bp+arg_0] ;~ 0B7E:0058
cs=0xb7e;eip=0x00005b; 	R(_INT(0x62));	// 18839 int     62h             ; reserved for user interrupt ;~ 0B7E:005B
cs=0xb7e;eip=0x00005d; 	X(POP(si));	// 18840 pop     si ;~ 0B7E:005D
cs=0xb7e;eip=0x00005e; 	X(POP(bp));	// 18841 pop     bp ;~ 0B7E:005E
cs=0xb7e;eip=0x00005f; 	X(POP(bp));	// 18842 pop     bp ;~ 0B7E:005F
cs=0xb7e;eip=0x000060; 	J(RETF(0));	// 18843 retf ;~ 0B7E:0060

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knopsub_19e13: 	goto nopsub_19e13;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool init_kevinrandom(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    init_kevinrandom:
    _begin:
#undef arg_0
#define arg_0 6
	// 18854 arg_0           = word ptr  6 ;~ 0B7E:0061
cs=0xb7e;eip=0x000061; 	X(PUSH(bp));	// 18856 push    bp ;~ 0B7E:0061
cs=0xb7e;eip=0x000062; 	T(MOV(bp, sp));	// 18857 mov     bp, sp ;~ 0B7E:0062
cs=0xb7e;eip=0x000064; 	X(PUSH(bp));	// 18858 push    bp ;~ 0B7E:0064
cs=0xb7e;eip=0x000065; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 18859 mov     bx, [bp+arg_0] ;~ 0B7E:0065
cs=0xb7e;eip=0x000068; 	T(MOV(al, *(raddr(ds,bx))));	// 18860 mov     al, [bx] ;~ 0B7E:0068
cs=0xb7e;eip=0x00006a; 	X(MOV(*(g_kevinrandom_seed), al));	// 18861 mov     g_kevinrandom_seed, al ;~ 0B7E:006A
cs=0xb7e;eip=0x00006d; 	T(MOV(al, *(raddr(ds,bx+1))));	// 18862 mov     al, [bx+1] ;~ 0B7E:006D
cs=0xb7e;eip=0x000070; 	X(MOV(*((g_kevinrandom_seed)+1), al));	// 18863 mov     g_kevinrandom_seed+1, al ;~ 0B7E:0070
cs=0xb7e;eip=0x000073; 	T(MOV(al, *(raddr(ds,bx+2))));	// 18864 mov     al, [bx+2] ;~ 0B7E:0073
cs=0xb7e;eip=0x000076; 	X(MOV(*((g_kevinrandom_seed)+2), al));	// 18865 mov     g_kevinrandom_seed+2, al ;~ 0B7E:0076
cs=0xb7e;eip=0x000079; 	T(MOV(al, *(raddr(ds,bx+3))));	// 18866 mov     al, [bx+3] ;~ 0B7E:0079
cs=0xb7e;eip=0x00007c; 	X(MOV(*((g_kevinrandom_seed)+3), al));	// 18867 mov     g_kevinrandom_seed+3, al ;~ 0B7E:007C
cs=0xb7e;eip=0x00007f; 	T(MOV(al, *(raddr(ds,bx+4))));	// 18868 mov     al, [bx+4] ;~ 0B7E:007F
cs=0xb7e;eip=0x000082; 	X(MOV(*((g_kevinrandom_seed)+4), al));	// 18869 mov     g_kevinrandom_seed+4, al ;~ 0B7E:0082
cs=0xb7e;eip=0x000085; 	T(MOV(al, *(raddr(ds,bx+5))));	// 18870 mov     al, [bx+5] ;~ 0B7E:0085
cs=0xb7e;eip=0x000088; 	X(MOV(*((g_kevinrandom_seed)+5), al));	// 18871 mov     g_kevinrandom_seed+5, al ;~ 0B7E:0088
cs=0xb7e;eip=0x00008b; 	X(POP(bp));	// 18872 pop     bp ;~ 0B7E:008B
cs=0xb7e;eip=0x00008c; 	X(POP(bp));	// 18873 pop     bp ;~ 0B7E:008C
cs=0xb7e;eip=0x00008d; 	J(RETF(0));	// 18874 retf ;~ 0B7E:008D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kinit_kevinrandom: 	goto init_kevinrandom;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool get_kevinrandom_seed(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    get_kevinrandom_seed:
    _begin:
#undef arg_0
#define arg_0 6
	// 18884 arg_0           = word ptr  6 ;~ 0B7E:008E
cs=0xb7e;eip=0x00008e; 	X(PUSH(bp));	// 18886 push    bp ;~ 0B7E:008E
cs=0xb7e;eip=0x00008f; 	T(MOV(bp, sp));	// 18887 mov     bp, sp ;~ 0B7E:008F
cs=0xb7e;eip=0x000091; 	X(PUSH(bp));	// 18888 push    bp ;~ 0B7E:0091
cs=0xb7e;eip=0x000092; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 18889 mov     bx, [bp+arg_0] ;~ 0B7E:0092
cs=0xb7e;eip=0x000095; 	T(MOV(al, *(g_kevinrandom_seed)));	// 18890 mov     al, g_kevinrandom_seed ;~ 0B7E:0095
cs=0xb7e;eip=0x000098; 	X(MOV(*(raddr(ds,bx)), al));	// 18891 mov     [bx], al ;~ 0B7E:0098
cs=0xb7e;eip=0x00009a; 	T(MOV(al, *((g_kevinrandom_seed)+1)));	// 18892 mov     al, g_kevinrandom_seed+1 ;~ 0B7E:009A
cs=0xb7e;eip=0x00009d; 	X(MOV(*(raddr(ds,bx+1)), al));	// 18893 mov     [bx+1], al ;~ 0B7E:009D
cs=0xb7e;eip=0x0000a0; 	T(MOV(al, *((g_kevinrandom_seed)+2)));	// 18894 mov     al, g_kevinrandom_seed+2 ;~ 0B7E:00A0
cs=0xb7e;eip=0x0000a3; 	X(MOV(*(raddr(ds,bx+2)), al));	// 18895 mov     [bx+2], al ;~ 0B7E:00A3
cs=0xb7e;eip=0x0000a6; 	T(MOV(al, *((g_kevinrandom_seed)+3)));	// 18896 mov     al, g_kevinrandom_seed+3 ;~ 0B7E:00A6
cs=0xb7e;eip=0x0000a9; 	X(MOV(*(raddr(ds,bx+3)), al));	// 18897 mov     [bx+3], al ;~ 0B7E:00A9
cs=0xb7e;eip=0x0000ac; 	T(MOV(al, *((g_kevinrandom_seed)+4)));	// 18898 mov     al, g_kevinrandom_seed+4 ;~ 0B7E:00AC
cs=0xb7e;eip=0x0000af; 	X(MOV(*(raddr(ds,bx+4)), al));	// 18899 mov     [bx+4], al ;~ 0B7E:00AF
cs=0xb7e;eip=0x0000b2; 	T(MOV(al, *((g_kevinrandom_seed)+5)));	// 18900 mov     al, g_kevinrandom_seed+5 ;~ 0B7E:00B2
cs=0xb7e;eip=0x0000b5; 	X(MOV(*(raddr(ds,bx+5)), al));	// 18901 mov     [bx+5], al ;~ 0B7E:00B5
cs=0xb7e;eip=0x0000b8; 	X(POP(bp));	// 18902 pop     bp ;~ 0B7E:00B8
cs=0xb7e;eip=0x0000b9; 	X(POP(bp));	// 18903 pop     bp ;~ 0B7E:00B9
cs=0xb7e;eip=0x0000ba; 	J(RETF(0));	// 18904 retf ;~ 0B7E:00BA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kget_kevinrandom_seed: 	goto get_kevinrandom_seed;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool get_kevinrandom(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    get_kevinrandom:
    _begin:
cs=0xb7e;eip=0x0000bb; 	T(MOV(al, *((g_kevinrandom_seed)+5)));	// 18913 mov     al, g_kevinrandom_seed+5 ;~ 0B7E:00BB
cs=0xb7e;eip=0x0000be; 	T(ADD(al, *((g_kevinrandom_seed)+4)));	// 18914 add     al, g_kevinrandom_seed+4 ;~ 0B7E:00BE
cs=0xb7e;eip=0x0000c2; 	X(MOV(*((g_kevinrandom_seed)+4), al));	// 18915 mov     g_kevinrandom_seed+4, al ;~ 0B7E:00C2
cs=0xb7e;eip=0x0000c5; 	T(ADD(al, *((g_kevinrandom_seed)+3)));	// 18916 add     al, g_kevinrandom_seed+3 ;~ 0B7E:00C5
cs=0xb7e;eip=0x0000c9; 	X(MOV(*((g_kevinrandom_seed)+3), al));	// 18917 mov     g_kevinrandom_seed+3, al ;~ 0B7E:00C9
cs=0xb7e;eip=0x0000cc; 	T(ADD(al, *((g_kevinrandom_seed)+2)));	// 18918 add     al, g_kevinrandom_seed+2 ;~ 0B7E:00CC
cs=0xb7e;eip=0x0000d0; 	X(MOV(*((g_kevinrandom_seed)+2), al));	// 18919 mov     g_kevinrandom_seed+2, al ;~ 0B7E:00D0
cs=0xb7e;eip=0x0000d3; 	T(ADD(al, *((g_kevinrandom_seed)+1)));	// 18920 add     al, g_kevinrandom_seed+1 ;~ 0B7E:00D3
cs=0xb7e;eip=0x0000d7; 	X(MOV(*((g_kevinrandom_seed)+1), al));	// 18921 mov     g_kevinrandom_seed+1, al ;~ 0B7E:00D7
cs=0xb7e;eip=0x0000da; 	T(ADD(al, *(g_kevinrandom_seed)));	// 18922 add     al, g_kevinrandom_seed ;~ 0B7E:00DA
cs=0xb7e;eip=0x0000de; 	X(MOV(*(g_kevinrandom_seed), al));	// 18923 mov     g_kevinrandom_seed, al ;~ 0B7E:00DE
cs=0xb7e;eip=0x0000e1; 	X(INC(*((g_kevinrandom_seed)+5)));	// 18924 inc     g_kevinrandom_seed+5 ;~ 0B7E:00E1
cs=0xb7e;eip=0x0000e5; 	J(JNZ(loc_19ec3));	// 18925 jnz     short loc_19EC3 ;~ 0B7E:00E5
cs=0xb7e;eip=0x0000e7; 	X(INC(*((g_kevinrandom_seed)+4)));	// 18926 inc     g_kevinrandom_seed+4 ;~ 0B7E:00E7
cs=0xb7e;eip=0x0000eb; 	J(JNZ(loc_19ec3));	// 18927 jnz     short loc_19EC3 ;~ 0B7E:00EB
cs=0xb7e;eip=0x0000ed; 	X(INC(*((g_kevinrandom_seed)+3)));	// 18928 inc     g_kevinrandom_seed+3 ;~ 0B7E:00ED
cs=0xb7e;eip=0x0000f1; 	J(JNZ(loc_19ec3));	// 18929 jnz     short loc_19EC3 ;~ 0B7E:00F1
cs=0xb7e;eip=0x0000f3; 	X(INC(*((g_kevinrandom_seed)+2)));	// 18930 inc     g_kevinrandom_seed+2 ;~ 0B7E:00F3
cs=0xb7e;eip=0x0000f7; 	J(JNZ(loc_19ec3));	// 18931 jnz     short loc_19EC3 ;~ 0B7E:00F7
cs=0xb7e;eip=0x0000f9; 	X(INC(*((g_kevinrandom_seed)+1)));	// 18932 inc     g_kevinrandom_seed+1 ;~ 0B7E:00F9
cs=0xb7e;eip=0x0000fd; 	J(JNZ(loc_19ec3));	// 18933 jnz     short loc_19EC3 ;~ 0B7E:00FD
cs=0xb7e;eip=0x0000ff; 	X(INC(*(g_kevinrandom_seed)));	// 18934 inc     g_kevinrandom_seed ;~ 0B7E:00FF
loc_19ec3:
	// 5482 
cs=0xb7e;eip=0x000103; 	T(MOV(al, *(g_kevinrandom_seed)));	// 18938 mov     al, g_kevinrandom_seed ;~ 0B7E:0103
cs=0xb7e;eip=0x000106; 	T(XOR(ah, ah));	// 18939 xor     ah, ah ;~ 0B7E:0106
cs=0xb7e;eip=0x000108; 	J(RETF(0));	// 18940 retf ;~ 0B7E:0108

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kget_kevinrandom: 	goto get_kevinrandom;
        case m2c::kloc_19ec3: 	goto loc_19ec3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
intr0_handler:
	// 18948 
#undef var_s4
#define var_s4 4
	// 18950 var_s4          = word ptr  4 ;~ 0B7E:0109
cs=0xb7e;eip=0x000109; 	X(PUSH(bp));	// 18952 push    bp ;~ 0B7E:0109
cs=0xb7e;eip=0x00010a; 	T(MOV(bp, sp));	// 18953 mov     bp, sp ;~ 0B7E:010A
cs=0xb7e;eip=0x00010c; 	X(PUSH(ds));	// 18954 push    ds ;~ 0B7E:010C
cs=0xb7e;eip=0x00010d; 	T(MOV(ax, seg_offset(dseg)));	// 18955 mov     ax, seg dseg ;~ 0B7E:010D
cs=0xb7e;eip=0x000110; 	T(MOV(ds, ax));	// 18956 mov     ds, ax ;~ 0B7E:0110
cs=0xb7e;eip=0x000112; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_s4))));	// 18957 mov     ax, [bp+var_s4] ;~ 0B7E:0112
cs=0xb7e;eip=0x000115; 	X(MOV(word_3be30, ax));	// 18958 mov     word_3BE30, ax ;~ 0B7E:0115
cs=0xb7e;eip=0x000118; 	T(MOV(ax, *(dw*)(raddr(ss,bp+2))));	// 18959 mov     ax, [bp+2] ;~ 0B7E:0118
cs=0xb7e;eip=0x00011b; 	X(MOV(word_3be32, ax));	// 18960 mov     word_3BE32, ax ;~ 0B7E:011B
cs=0xb7e;eip=0x00011e; 	T(INC(ax));	// 18961 inc     ax ;~ 0B7E:011E
cs=0xb7e;eip=0x00011f; 	T(INC(ax));	// 18962 inc     ax ;~ 0B7E:011F
cs=0xb7e;eip=0x000120; 	X(MOV(*(dw*)(raddr(ss,bp+2)), ax));	// 18963 mov     [bp+2], ax ;~ 0B7E:0120
cs=0xb7e;eip=0x000123; 	T(XOR(ax, ax));	// 18964 xor     ax, ax ;~ 0B7E:0123
cs=0xb7e;eip=0x000125; 	X(POP(ds));	// 18965 pop     ds ;~ 0B7E:0125
cs=0xb7e;eip=0x000126; 	X(POP(bp));	// 18966 pop     bp ;~ 0B7E:0126
cs=0xb7e;eip=0x000127; 	J(IRET);	// 18967 iret ;~ 0B7E:0127
init_div0:
	// 18974 
cs=0xb7e;eip=0x000128; 	X(PUSH(ds));	// 18975 push    ds ;~ 0B7E:0128
cs=0xb7e;eip=0x000129; 	T(MOV(ah, 0x35));	// 18976 mov     ah, 35h ; '5' ;~ 0B7E:0129
cs=0xb7e;eip=0x00012b; 	T(MOV(al, 0));	// 18977 mov     al, 0 ;~ 0B7E:012B
cs=0xb7e;eip=0x00012d; 	R(_INT(0x21));	// 18978 int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 0B7E:012D
cs=0xb7e;eip=0x00012f; 	X(MOV(*(dw*)(((db*)&old_intr0_handler)+2), es));	// 18981 mov     word ptr old_intr0_handler+2, es ;~ 0B7E:012F
cs=0xb7e;eip=0x000133; 	X(MOV(*(dw*)(((db*)&old_intr0_handler)), bx));	// 18982 mov     word ptr old_intr0_handler, bx ;~ 0B7E:0133
cs=0xb7e;eip=0x000137; 	T(MOV(dx, seg_offset(seg002)));	// 18983 mov     dx, seg seg002 ;~ 0B7E:0137
cs=0xb7e;eip=0x00013a; 	T(MOV(ds, dx));	// 18984 mov     ds, dx ;~ 0B7E:013A
cs=0xb7e;eip=0x00013c; 	T(MOV(dx, m2c::kintr0_handler));	// 18986 mov     dx, offset intr0_handler ;~ 0B7E:013C
cs=0xb7e;eip=0x00013f; 	T(MOV(ah, 0x25));	// 18987 mov     ah, 25h ; '%' ;~ 0B7E:013F
cs=0xb7e;eip=0x000141; 	T(MOV(al, 0));	// 18988 mov     al, 0 ;~ 0B7E:0141
cs=0xb7e;eip=0x000143; 	R(_INT(0x21));	// 18989 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 0B7E:0143
cs=0xb7e;eip=0x000145; 	X(POP(ds));	// 18992 pop     ds ;~ 0B7E:0145
cs=0xb7e;eip=0x000146; 	J(RETF(0));	// 18994 retf ;~ 0B7E:0146

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kinit_div0: 	goto init_div0;
        case m2c::kintr0_handler: 	goto intr0_handler;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_147_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_147_proc:
    _begin:
cs=0xb7e;eip=0x000147; 	X(PUSH(ds));	// 18998 push    ds ;~ 0B7E:0147
cs=0xb7e;eip=0x000148; 	T(LDS(dx, old_intr0_handler));	// 18999 lds     dx, old_intr0_handler ;~ 0B7E:0148
cs=0xb7e;eip=0x00014c; 	T(MOV(ah, 0x25));	// 19000 mov     ah, 25h ; '%' ;~ 0B7E:014C
cs=0xb7e;eip=0x00014e; 	T(MOV(al, 0));	// 19001 mov     al, 0 ;~ 0B7E:014E
cs=0xb7e;eip=0x000150; 	R(_INT(0x21));	// 19002 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 0B7E:0150
cs=0xb7e;eip=0x000152; 	X(POP(ds));	// 19005 pop     ds ;~ 0B7E:0152
cs=0xb7e;eip=0x000153; 	J(RETF(0));	// 19006 retf ;~ 0B7E:0153

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg002_147_proc: 	goto seg002_147_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

