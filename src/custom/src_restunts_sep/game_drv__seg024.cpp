/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool mat_rot_x(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mat_rot_x:
    _begin:
#undef var_4
#define var_4 -4
	// 80842 var_4           = word ptr -4 ;~ 2894:000A
#undef var_2
#define var_2 -2
	// 80843 var_2           = word ptr -2 ;~ 2894:000A
#undef arg_0
#define arg_0 6
	// 80844 arg_0           = word ptr  6 ;~ 2894:000A
#undef arg_2
#define arg_2 8
	// 80845 arg_2           = word ptr  8 ;~ 2894:000A
cs=0x2894;eip=0x00000a; 	X(PUSH(bp));	// 80847 push    bp ;~ 2894:000A
cs=0x2894;eip=0x00000b; 	T(MOV(bp, sp));	// 80848 mov     bp, sp ;~ 2894:000B
cs=0x2894;eip=0x00000d; 	T(SUB(sp, 4));	// 80849 sub     sp, 4 ;~ 2894:000D
cs=0x2894;eip=0x000010; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 80850 push    [bp+arg_2] ;~ 2894:0010
cs=0x2894;eip=0x000013; 	J(CALLF(cos_fast,0));	// 80851 call    cos_fast ;~ 2894:0013
cs=0x2894;eip=0x000018; 	T(ADD(sp, 2));	// 80852 add     sp, 2 ;~ 2894:0018
cs=0x2894;eip=0x00001b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 80853 mov     [bp+var_2], ax ;~ 2894:001B
cs=0x2894;eip=0x00001e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 80854 push    [bp+arg_2] ;~ 2894:001E
cs=0x2894;eip=0x000021; 	J(CALLF(sin_fast,0));	// 80855 call    sin_fast ;~ 2894:0021
cs=0x2894;eip=0x000026; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 80856 mov     [bp+var_4], ax ;~ 2894:0026
cs=0x2894;eip=0x000029; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 80857 mov     bx, [bp+arg_0] ;~ 2894:0029
cs=0x2894;eip=0x00002c; 	X(MOV(*(dw*)(raddr(ds,bx+0)), 0x4000));	// 80858 mov     word ptr [bx+0], 4000h ;~ 2894:002C
cs=0x2894;eip=0x000030; 	X(MOV(*(dw*)(raddr(ds,bx+2)), 0));	// 80859 mov     word ptr [bx+2], 0 ;~ 2894:0030
cs=0x2894;eip=0x000035; 	X(MOV(*(dw*)(raddr(ds,bx+4)), 0));	// 80860 mov     word ptr [bx+4], 0 ;~ 2894:0035
cs=0x2894;eip=0x00003a; 	X(MOV(*(dw*)(raddr(ds,bx+6)), 0));	// 80861 mov     word ptr [bx+6], 0 ;~ 2894:003A
cs=0x2894;eip=0x00003f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 80862 mov     ax, [bp+var_2] ;~ 2894:003F
cs=0x2894;eip=0x000042; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 80863 mov     [bx+8], ax ;~ 2894:0042
cs=0x2894;eip=0x000045; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 80864 mov     ax, [bp+var_4] ;~ 2894:0045
cs=0x2894;eip=0x000048; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), ax));	// 80865 mov     [bx+0Ah], ax ;~ 2894:0048
cs=0x2894;eip=0x00004b; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), 0));	// 80866 mov     word ptr [bx+0Ch], 0 ;~ 2894:004B
cs=0x2894;eip=0x000050; 	T(NEG(ax));	// 80867 neg     ax ;~ 2894:0050
cs=0x2894;eip=0x000052; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), ax));	// 80868 mov     [bx+0Eh], ax ;~ 2894:0052
cs=0x2894;eip=0x000055; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 80869 mov     ax, [bp+var_2] ;~ 2894:0055
cs=0x2894;eip=0x000058; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), ax));	// 80870 mov     [bx+10h], ax ;~ 2894:0058
cs=0x2894;eip=0x00005b; 	T(MOV(sp, bp));	// 80871 mov     sp, bp ;~ 2894:005B
cs=0x2894;eip=0x00005d; 	X(POP(bp));	// 80872 pop     bp ;~ 2894:005D
cs=0x2894;eip=0x00005e; 	J(RETF(0));	// 80873 retf ;~ 2894:005E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kmat_rot_x: 	goto mat_rot_x;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool mat_rot_y(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mat_rot_y:
    _begin:
#undef var_4
#define var_4 -4
	// 80886 var_4           = word ptr -4 ;~ 2894:0060
#undef var_2
#define var_2 -2
	// 80887 var_2           = word ptr -2 ;~ 2894:0060
#undef arg_0
#define arg_0 6
	// 80888 arg_0           = word ptr  6 ;~ 2894:0060
#undef arg_2
#define arg_2 8
	// 80889 arg_2           = word ptr  8 ;~ 2894:0060
cs=0x2894;eip=0x000060; 	X(PUSH(bp));	// 80891 push    bp ;~ 2894:0060
cs=0x2894;eip=0x000061; 	T(MOV(bp, sp));	// 80892 mov     bp, sp ;~ 2894:0061
cs=0x2894;eip=0x000063; 	T(SUB(sp, 4));	// 80893 sub     sp, 4 ;~ 2894:0063
cs=0x2894;eip=0x000066; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 80894 push    [bp+arg_2] ;~ 2894:0066
cs=0x2894;eip=0x000069; 	J(CALLF(cos_fast,0));	// 80895 call    cos_fast ;~ 2894:0069
cs=0x2894;eip=0x00006e; 	T(ADD(sp, 2));	// 80896 add     sp, 2 ;~ 2894:006E
cs=0x2894;eip=0x000071; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 80897 mov     [bp+var_2], ax ;~ 2894:0071
cs=0x2894;eip=0x000074; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 80898 push    [bp+arg_2] ;~ 2894:0074
cs=0x2894;eip=0x000077; 	J(CALLF(sin_fast,0));	// 80899 call    sin_fast ;~ 2894:0077
cs=0x2894;eip=0x00007c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 80900 mov     [bp+var_4], ax ;~ 2894:007C
cs=0x2894;eip=0x00007f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 80901 mov     bx, [bp+arg_0] ;~ 2894:007F
cs=0x2894;eip=0x000082; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 80902 mov     ax, [bp+var_2] ;~ 2894:0082
cs=0x2894;eip=0x000085; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 80903 mov     [bx+0], ax ;~ 2894:0085
cs=0x2894;eip=0x000087; 	X(MOV(*(dw*)(raddr(ds,bx+2)), 0));	// 80904 mov     word ptr [bx+2], 0 ;~ 2894:0087
cs=0x2894;eip=0x00008c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 80905 mov     ax, [bp+var_4] ;~ 2894:008C
cs=0x2894;eip=0x00008f; 	T(NEG(ax));	// 80906 neg     ax ;~ 2894:008F
cs=0x2894;eip=0x000091; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 80907 mov     [bx+4], ax ;~ 2894:0091
cs=0x2894;eip=0x000094; 	X(MOV(*(dw*)(raddr(ds,bx+6)), 0));	// 80908 mov     word ptr [bx+6], 0 ;~ 2894:0094
cs=0x2894;eip=0x000099; 	X(MOV(*(dw*)(raddr(ds,bx+8)), 0x4000));	// 80909 mov     word ptr [bx+8], 4000h ;~ 2894:0099
cs=0x2894;eip=0x00009e; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), 0));	// 80910 mov     word ptr [bx+0Ah], 0 ;~ 2894:009E
cs=0x2894;eip=0x0000a3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 80911 mov     ax, [bp+var_4] ;~ 2894:00A3
cs=0x2894;eip=0x0000a6; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 80912 mov     [bx+0Ch], ax ;~ 2894:00A6
cs=0x2894;eip=0x0000a9; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), 0));	// 80913 mov     word ptr [bx+0Eh], 0 ;~ 2894:00A9
cs=0x2894;eip=0x0000ae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 80914 mov     ax, [bp+var_2] ;~ 2894:00AE
cs=0x2894;eip=0x0000b1; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), ax));	// 80915 mov     [bx+10h], ax ;~ 2894:00B1
cs=0x2894;eip=0x0000b4; 	T(MOV(sp, bp));	// 80916 mov     sp, bp ;~ 2894:00B4
cs=0x2894;eip=0x0000b6; 	X(POP(bp));	// 80917 pop     bp ;~ 2894:00B6
cs=0x2894;eip=0x0000b7; 	J(RETF(0));	// 80918 retf ;~ 2894:00B7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kmat_rot_y: 	goto mat_rot_y;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool mat_rot_z(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mat_rot_z:
    _begin:
#undef var_4
#define var_4 -4
	// 80928 var_4           = word ptr -4 ;~ 2894:00B8
#undef var_2
#define var_2 -2
	// 80929 var_2           = word ptr -2 ;~ 2894:00B8
#undef arg_0
#define arg_0 6
	// 80930 arg_0           = word ptr  6 ;~ 2894:00B8
#undef arg_2
#define arg_2 8
	// 80931 arg_2           = word ptr  8 ;~ 2894:00B8
cs=0x2894;eip=0x0000b8; 	X(PUSH(bp));	// 80933 push    bp ;~ 2894:00B8
cs=0x2894;eip=0x0000b9; 	T(MOV(bp, sp));	// 80934 mov     bp, sp ;~ 2894:00B9
cs=0x2894;eip=0x0000bb; 	T(SUB(sp, 4));	// 80935 sub     sp, 4 ;~ 2894:00BB
cs=0x2894;eip=0x0000be; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 80936 push    [bp+arg_2] ;~ 2894:00BE
cs=0x2894;eip=0x0000c1; 	J(CALLF(cos_fast,0));	// 80937 call    cos_fast ;~ 2894:00C1
cs=0x2894;eip=0x0000c6; 	T(ADD(sp, 2));	// 80938 add     sp, 2 ;~ 2894:00C6
cs=0x2894;eip=0x0000c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 80939 mov     [bp+var_2], ax ;~ 2894:00C9
cs=0x2894;eip=0x0000cc; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 80940 push    [bp+arg_2] ;~ 2894:00CC
cs=0x2894;eip=0x0000cf; 	J(CALLF(sin_fast,0));	// 80941 call    sin_fast ;~ 2894:00CF
cs=0x2894;eip=0x0000d4; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 80942 mov     [bp+var_4], ax ;~ 2894:00D4
cs=0x2894;eip=0x0000d7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 80943 mov     bx, [bp+arg_0] ;~ 2894:00D7
cs=0x2894;eip=0x0000da; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 80944 mov     ax, [bp+var_2] ;~ 2894:00DA
cs=0x2894;eip=0x0000dd; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 80945 mov     [bx+0], ax ;~ 2894:00DD
cs=0x2894;eip=0x0000df; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 80946 mov     ax, [bp+var_4] ;~ 2894:00DF
cs=0x2894;eip=0x0000e2; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 80947 mov     [bx+2], ax ;~ 2894:00E2
cs=0x2894;eip=0x0000e5; 	X(MOV(*(dw*)(raddr(ds,bx+4)), 0));	// 80948 mov     word ptr [bx+4], 0 ;~ 2894:00E5
cs=0x2894;eip=0x0000ea; 	T(NEG(ax));	// 80949 neg     ax ;~ 2894:00EA
cs=0x2894;eip=0x0000ec; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 80950 mov     [bx+6], ax ;~ 2894:00EC
cs=0x2894;eip=0x0000ef; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 80951 mov     ax, [bp+var_2] ;~ 2894:00EF
cs=0x2894;eip=0x0000f2; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 80952 mov     [bx+8], ax ;~ 2894:00F2
cs=0x2894;eip=0x0000f5; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), 0));	// 80953 mov     word ptr [bx+0Ah], 0 ;~ 2894:00F5
cs=0x2894;eip=0x0000fa; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), 0));	// 80954 mov     word ptr [bx+0Ch], 0 ;~ 2894:00FA
cs=0x2894;eip=0x0000ff; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), 0));	// 80955 mov     word ptr [bx+0Eh], 0 ;~ 2894:00FF
cs=0x2894;eip=0x000104; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), 0x4000));	// 80956 mov     word ptr [bx+10h], 4000h ;~ 2894:0104
cs=0x2894;eip=0x000109; 	T(MOV(sp, bp));	// 80957 mov     sp, bp ;~ 2894:0109
cs=0x2894;eip=0x00010b; 	X(POP(bp));	// 80958 pop     bp ;~ 2894:010B
cs=0x2894;eip=0x00010c; 	J(RETF(0));	// 80959 retf ;~ 2894:010C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kmat_rot_z: 	goto mat_rot_z;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

