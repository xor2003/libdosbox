/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool mouse_set_pixratio(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mouse_set_pixratio:
    _begin:
#undef arg_0
#define arg_0 6
	// 79912 arg_0           = word ptr  6 ;~ 282C:000A
#undef arg_2
#define arg_2 8
	// 79913 arg_2           = word ptr  8 ;~ 282C:000A
cs=0x282c;eip=0x00000a; 	X(PUSH(bp));	// 79915 push    bp ;~ 282C:000A
cs=0x282c;eip=0x00000b; 	T(MOV(bp, sp));	// 79916 mov     bp, sp ;~ 282C:000B
cs=0x282c;eip=0x00000d; 	X(MOV(*(dw*)((&regs_x86)), 0x0F));	// 79917 mov     word ptr regs_x86, 0Fh ;~ 282C:000D
cs=0x282c;eip=0x000013; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 79918 mov     ax, [bp+arg_0] ;~ 282C:0013
cs=0x282c;eip=0x000016; 	X(MOV(*(dw*)((&unk_4498e)), ax));	// 79919 mov     word ptr unk_4498E, ax ;~ 282C:0016
cs=0x282c;eip=0x000019; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 79920 mov     ax, [bp+arg_2] ;~ 282C:0019
cs=0x282c;eip=0x00001c; 	X(MOV(*(dw*)((&unk_44990)), ax));	// 79921 mov     word ptr unk_44990, ax ;~ 282C:001C
cs=0x282c;eip=0x00001f; 	T(MOV(ax, offset(dseg,regs_x86)));	// 79922 mov     ax, offset regs_x86 ;~ 282C:001F
cs=0x282c;eip=0x000022; 	X(PUSH(ax));	// 79923 push    ax              ; union REGS * ;~ 282C:0022
cs=0x282c;eip=0x000023; 	X(PUSH(ax));	// 79924 push    ax              ; union REGS * ;~ 282C:0023
cs=0x282c;eip=0x000024; 	T(MOV(ax, 0x33));	// 79925 mov     ax, 33h         ; int 33,f = set mouse mickey pixel ratio ;~ 282C:0024
cs=0x282c;eip=0x000027; 	X(PUSH(ax));	// 79926 push    ax              ; int ;~ 282C:0027
cs=0x282c;eip=0x000028; 	J(CALLF(_int86,0));	// 79927 call    _int86 ;~ 282C:0028
cs=0x282c;eip=0x00002d; 	T(ADD(sp, 6));	// 79928 add     sp, 6 ;~ 282C:002D
cs=0x282c;eip=0x000030; 	X(POP(bp));	// 79929 pop     bp ;~ 282C:0030
cs=0x282c;eip=0x000031; 	J(RETF(0));	// 79930 retf ;~ 282C:0031

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kmouse_set_pixratio: 	goto mouse_set_pixratio;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool mouse_init(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mouse_init:
    _begin:
#undef var_2
#define var_2 -2
	// 79940 var_2           = word ptr -2 ;~ 282C:0032
#undef arg_0
#define arg_0 6
	// 79941 arg_0           = word ptr  6 ;~ 282C:0032
#undef arg_2
#define arg_2 8
	// 79942 arg_2           = word ptr  8 ;~ 282C:0032
cs=0x282c;eip=0x000032; 	X(PUSH(bp));	// 79944 push    bp              ; union REGS * ;~ 282C:0032
cs=0x282c;eip=0x000033; 	T(MOV(bp, sp));	// 79945 mov     bp, sp ;~ 282C:0033
cs=0x282c;eip=0x000035; 	T(SUB(sp, 2));	// 79946 sub     sp, 2 ;~ 282C:0035
cs=0x282c;eip=0x000038; 	X(MOV(*(dw*)((&regs_x86)), 0x0C201));	// 79947 mov     word ptr regs_x86, 0C201h ;~ 282C:0038
cs=0x282c;eip=0x00003e; 	T(MOV(ax, offset(dseg,regs_x86)));	// 79948 mov     ax, offset regs_x86 ;~ 282C:003E
cs=0x282c;eip=0x000041; 	X(PUSH(ax));	// 79949 push    ax              ; union REGS * ;~ 282C:0041
cs=0x282c;eip=0x000042; 	X(PUSH(ax));	// 79950 push    ax              ; union REGS * ;~ 282C:0042
cs=0x282c;eip=0x000043; 	T(MOV(ax, 0x15));	// 79951 mov     ax, 15h         ; int 15,c201 = enable ps2 pointing device ;~ 282C:0043
cs=0x282c;eip=0x000046; 	X(PUSH(ax));	// 79952 push    ax              ; int ;~ 282C:0046
cs=0x282c;eip=0x000047; 	J(CALLF(_int86,0));	// 79953 call    _int86 ;~ 282C:0047
cs=0x282c;eip=0x00004c; 	T(ADD(sp, 6));	// 79954 add     sp, 6 ;~ 282C:004C
cs=0x282c;eip=0x00004f; 	X(MOV(*(dw*)((&regs_x86)), 0));	// 79955 mov     word ptr regs_x86, 0 ;~ 282C:004F
cs=0x282c;eip=0x000055; 	T(MOV(ax, 0x921A));	// 79956 mov     ax, 921Ah ;~ 282C:0055
cs=0x282c;eip=0x000058; 	X(PUSH(ax));	// 79957 push    ax              ; union REGS * ;~ 282C:0058
cs=0x282c;eip=0x000059; 	X(PUSH(ax));	// 79958 push    ax              ; union REGS * ;~ 282C:0059
cs=0x282c;eip=0x00005a; 	T(MOV(ax, 0x33));	// 79959 mov     ax, 33h         ; int 33,0 = mouse reset/get mouse installed ;~ 282C:005A
cs=0x282c;eip=0x00005d; 	X(PUSH(ax));	// 79960 push    ax              ; int ;~ 282C:005D
cs=0x282c;eip=0x00005e; 	J(CALLF(_int86,0));	// 79961 call    _int86 ;~ 282C:005E
cs=0x282c;eip=0x000063; 	T(ADD(sp, 6));	// 79962 add     sp, 6 ;~ 282C:0063
cs=0x282c;eip=0x000066; 	T(MOV(ax, *(dw*)((&regs_x86))));	// 79963 mov     ax, word ptr regs_x86 ;~ 282C:0066
cs=0x282c;eip=0x000069; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 79964 mov     [bp+var_2], ax ;~ 282C:0069
cs=0x282c;eip=0x00006c; 	T(MOV(ax, *(dw*)((&unk_4498c))));	// 79965 mov     ax, word ptr unk_4498C ;~ 282C:006C
cs=0x282c;eip=0x00006f; 	X(MOV(word_45d7c, ax));	// 79966 mov     word_45D7C, ax ;~ 282C:006F
cs=0x282c;eip=0x000072; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 79967 cmp     [bp+var_2], 0 ;~ 282C:0072
cs=0x282c;eip=0x000076; 	J(JZ(loc_36955));	// 79968 jz      short loc_36955 ;~ 282C:0076
cs=0x282c;eip=0x000078; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x140));	// 79969 cmp     [bp+arg_0], 140h ;~ 282C:0078
cs=0x282c;eip=0x00007d; 	J(JNZ(loc_36928));	// 79970 jnz     short loc_36928 ;~ 282C:007D
cs=0x282c;eip=0x00007f; 	X(MOV(mousehorscale, 1));	// 79971 mov     mousehorscale, 1 ;~ 282C:007F
cs=0x282c;eip=0x000085; 	J(JMP(loc_3692e));	// 79972 jmp     short loc_3692E ;~ 282C:0085
loc_36928:
	// 9451 
cs=0x282c;eip=0x000088; 	X(MOV(mousehorscale, 0));	// 79977 mov     mousehorscale, 0 ;~ 282C:0088
loc_3692e:
	// 9452 
cs=0x282c;eip=0x00008e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 79980 mov     ax, [bp+arg_2] ;~ 282C:008E
cs=0x282c;eip=0x000091; 	T(DEC(ax));	// 79981 dec     ax ;~ 282C:0091
cs=0x282c;eip=0x000092; 	X(PUSH(ax));	// 79982 push    ax ;~ 282C:0092
cs=0x282c;eip=0x000093; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 79983 mov     ax, [bp+arg_0] ;~ 282C:0093
cs=0x282c;eip=0x000096; 	T(DEC(ax));	// 79984 dec     ax ;~ 282C:0096
cs=0x282c;eip=0x000097; 	X(PUSH(ax));	// 79985 push    ax ;~ 282C:0097
cs=0x282c;eip=0x000098; 	T(SUB(ax, ax));	// 79986 sub     ax, ax ;~ 282C:0098
cs=0x282c;eip=0x00009a; 	X(PUSH(ax));	// 79987 push    ax ;~ 282C:009A
cs=0x282c;eip=0x00009b; 	X(PUSH(ax));	// 79988 push    ax ;~ 282C:009B
cs=0x282c;eip=0x00009c; 	X(PUSH(cs));	// 79989 push    cs ;~ 282C:009C
cs=0x282c;eip=0x00009d; 	J(CALL(mouse_set_minmax,0));	// 79990 call    near ptr mouse_set_minmax ;~ 282C:009D
cs=0x282c;eip=0x0000a0; 	T(ADD(sp, 8));	// 79991 add     sp, 8 ;~ 282C:00A0
cs=0x282c;eip=0x0000a3; 	T(MOV(ax, 0x10));	// 79992 mov     ax, 10h ;~ 282C:00A3
cs=0x282c;eip=0x0000a6; 	X(PUSH(ax));	// 79993 push    ax ;~ 282C:00A6
cs=0x282c;eip=0x0000a7; 	X(PUSH(ax));	// 79994 push    ax ;~ 282C:00A7
cs=0x282c;eip=0x0000a8; 	X(PUSH(cs));	// 79995 push    cs ;~ 282C:00A8
cs=0x282c;eip=0x0000a9; 	J(CALL(mouse_set_pixratio,0));	// 79996 call    near ptr mouse_set_pixratio ;~ 282C:00A9
cs=0x282c;eip=0x0000ac; 	T(ADD(sp, 4));	// 79997 add     sp, 4 ;~ 282C:00AC
cs=0x282c;eip=0x0000af; 	X(MOV(word_40318, 0x0FFFF));	// 79998 mov     word_40318, 0FFFFh ;~ 282C:00AF
loc_36955:
	// 9453 
cs=0x282c;eip=0x0000b5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 80001 mov     ax, [bp+var_2] ;~ 282C:00B5
cs=0x282c;eip=0x0000b8; 	T(MOV(sp, bp));	// 80002 mov     sp, bp ;~ 282C:00B8
cs=0x282c;eip=0x0000ba; 	X(POP(bp));	// 80003 pop     bp ;~ 282C:00BA
cs=0x282c;eip=0x0000bb; 	J(RETF(0));	// 80004 retf ;~ 282C:00BB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_36928: 	goto loc_36928;
        case m2c::kloc_3692e: 	goto loc_3692e;
        case m2c::kloc_36955: 	goto loc_36955;
        case m2c::kmouse_init: 	goto mouse_init;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool mouse_set_minmax(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mouse_set_minmax:
    _begin:
#undef arg_0
#define arg_0 6
	// 80015 arg_0           = word ptr  6 ;~ 282C:00BC
#undef arg_2
#define arg_2 8
	// 80016 arg_2           = word ptr  8 ;~ 282C:00BC
#undef arg_4
#define arg_4 0x0A
	// 80017 arg_4           = word ptr  0Ah ;~ 282C:00BC
#undef arg_6
#define arg_6 0x0C
	// 80018 arg_6           = word ptr  0Ch ;~ 282C:00BC
cs=0x282c;eip=0x0000bc; 	X(PUSH(bp));	// 80020 push    bp ;~ 282C:00BC
cs=0x282c;eip=0x0000bd; 	T(MOV(bp, sp));	// 80021 mov     bp, sp ;~ 282C:00BD
cs=0x282c;eip=0x0000bf; 	X(MOV(*(dw*)((&regs_x86)), 7));	// 80022 mov     word ptr regs_x86, 7 ;~ 282C:00BF
cs=0x282c;eip=0x0000c5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 80023 mov     ax, [bp+arg_0] ;~ 282C:00C5
cs=0x282c;eip=0x0000c8; 	T(MOV(cl, *(db*)(((db*)&mousehorscale))));	// 80024 mov     cl, byte ptr mousehorscale ;~ 282C:00C8
cs=0x282c;eip=0x0000cc; 	T(SHL(ax, cl));	// 80025 shl     ax, cl ;~ 282C:00CC
cs=0x282c;eip=0x0000ce; 	X(MOV(*(dw*)((&unk_4498e)), ax));	// 80026 mov     word ptr unk_4498E, ax ;~ 282C:00CE
cs=0x282c;eip=0x0000d1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 80027 mov     ax, [bp+arg_4] ;~ 282C:00D1
cs=0x282c;eip=0x0000d4; 	T(SHL(ax, cl));	// 80028 shl     ax, cl ;~ 282C:00D4
cs=0x282c;eip=0x0000d6; 	X(MOV(*(dw*)((&unk_44990)), ax));	// 80029 mov     word ptr unk_44990, ax ;~ 282C:00D6
cs=0x282c;eip=0x0000d9; 	T(MOV(ax, offset(dseg,regs_x86)));	// 80030 mov     ax, offset regs_x86 ;~ 282C:00D9
cs=0x282c;eip=0x0000dc; 	X(PUSH(ax));	// 80031 push    ax              ; union REGS * ;~ 282C:00DC
cs=0x282c;eip=0x0000dd; 	X(PUSH(ax));	// 80032 push    ax              ; union REGS * ;~ 282C:00DD
cs=0x282c;eip=0x0000de; 	T(MOV(ax, 0x33));	// 80033 mov     ax, 33h         ; int 33,0 = mouse reset/get mouse installed ;~ 282C:00DE
cs=0x282c;eip=0x0000e1; 	X(PUSH(ax));	// 80034 push    ax              ; int ;~ 282C:00E1
cs=0x282c;eip=0x0000e2; 	J(CALLF(_int86,0));	// 80035 call    _int86 ;~ 282C:00E2
cs=0x282c;eip=0x0000e7; 	T(ADD(sp, 6));	// 80036 add     sp, 6 ;~ 282C:00E7
cs=0x282c;eip=0x0000ea; 	X(MOV(*(dw*)((&regs_x86)), 8));	// 80037 mov     word ptr regs_x86, 8 ;~ 282C:00EA
cs=0x282c;eip=0x0000f0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 80038 mov     ax, [bp+arg_2] ;~ 282C:00F0
cs=0x282c;eip=0x0000f3; 	X(MOV(*(dw*)((&unk_4498e)), ax));	// 80039 mov     word ptr unk_4498E, ax ;~ 282C:00F3
cs=0x282c;eip=0x0000f6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 80040 mov     ax, [bp+arg_6] ;~ 282C:00F6
cs=0x282c;eip=0x0000f9; 	X(MOV(*(dw*)((&unk_44990)), ax));	// 80041 mov     word ptr unk_44990, ax ;~ 282C:00F9
cs=0x282c;eip=0x0000fc; 	T(MOV(ax, offset(dseg,regs_x86)));	// 80042 mov     ax, offset regs_x86 ;~ 282C:00FC
cs=0x282c;eip=0x0000ff; 	X(PUSH(ax));	// 80043 push    ax              ; union REGS * ;~ 282C:00FF
cs=0x282c;eip=0x000100; 	X(PUSH(ax));	// 80044 push    ax              ; union REGS * ;~ 282C:0100
cs=0x282c;eip=0x000101; 	T(MOV(ax, 0x33));	// 80045 mov     ax, 33h         ; int 33, 8 = set mouse vert min/max ;~ 282C:0101
cs=0x282c;eip=0x000104; 	X(PUSH(ax));	// 80046 push    ax              ; int ;~ 282C:0104
cs=0x282c;eip=0x000105; 	J(CALLF(_int86,0));	// 80047 call    _int86 ;~ 282C:0105
cs=0x282c;eip=0x00010a; 	T(ADD(sp, 6));	// 80048 add     sp, 6 ;~ 282C:010A
cs=0x282c;eip=0x00010d; 	X(POP(bp));	// 80049 pop     bp ;~ 282C:010D
cs=0x282c;eip=0x00010e; 	J(RETF(0));	// 80050 retf ;~ 282C:010E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kmouse_set_minmax: 	goto mouse_set_minmax;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg017_110_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg017_110_proc:
    _begin:
cs=0x282c;eip=0x000110; 	X(MOV(*(dw*)((&regs_x86)), 3));	// 80055 mov     word ptr regs_x86, 3 ;~ 282C:0110
cs=0x282c;eip=0x000116; 	T(MOV(ax, offset(dseg,regs_x86)));	// 80056 mov     ax, offset regs_x86 ;~ 282C:0116
cs=0x282c;eip=0x000119; 	X(PUSH(ax));	// 80057 push    ax ;~ 282C:0119
cs=0x282c;eip=0x00011a; 	X(PUSH(ax));	// 80058 push    ax ;~ 282C:011A
cs=0x282c;eip=0x00011b; 	T(MOV(ax, 0x33));	// 80059 mov     ax, 33h         ; int 33,3 = get mouse pos/but status ;~ 282C:011B
cs=0x282c;eip=0x00011e; 	X(PUSH(ax));	// 80060 push    ax ;~ 282C:011E
cs=0x282c;eip=0x00011f; 	J(CALLF(_int86,0));	// 80061 call    _int86 ;~ 282C:011F
cs=0x282c;eip=0x000124; 	T(ADD(sp, 6));	// 80062 add     sp, 6 ;~ 282C:0124
cs=0x282c;eip=0x000127; 	T(MOV(ax, *(dw*)((&unk_4498c))));	// 80063 mov     ax, word ptr unk_4498C ;~ 282C:0127
cs=0x282c;eip=0x00012a; 	X(MOV(word_45d7c, ax));	// 80064 mov     word_45D7C, ax ;~ 282C:012A
cs=0x282c;eip=0x00012d; 	T(MOV(ax, *(dw*)((&unk_4498e))));	// 80065 mov     ax, word ptr unk_4498E ;~ 282C:012D
cs=0x282c;eip=0x000130; 	T(MOV(cl, *(db*)(((db*)&mousehorscale))));	// 80066 mov     cl, byte ptr mousehorscale ;~ 282C:0130
cs=0x282c;eip=0x000134; 	T(SHR(ax, cl));	// 80067 shr     ax, cl ;~ 282C:0134
cs=0x282c;eip=0x000136; 	X(MOV(word_44d3c, ax));	// 80068 mov     word_44D3C, ax ;~ 282C:0136
cs=0x282c;eip=0x000139; 	T(MOV(ax, *(dw*)((&unk_44990))));	// 80069 mov     ax, word ptr unk_44990 ;~ 282C:0139
cs=0x282c;eip=0x00013c; 	X(MOV(word_44d62, ax));	// 80070 mov     word_44D62, ax ;~ 282C:013C
cs=0x282c;eip=0x00013f; 	T(MOV(ax, word_45d7c));	// 80071 mov     ax, word_45D7C ;~ 282C:013F
cs=0x282c;eip=0x000142; 	J(RETF(0));	// 80072 retf ;~ 282C:0142
ret_282c_144:
	// 9454 
cs=0x282c;eip=0x000144; 	X(INC(showmouse));	// 80075 inc     showmouse ;~ 282C:0144
cs=0x282c;eip=0x000148; 	T(CMP(showmouse, 1));	// 80076 cmp     showmouse, 1 ;~ 282C:0148
cs=0x282c;eip=0x00014d; 	J(JL(locret_36a0c));	// 80077 jl      short locret_36A0C ;~ 282C:014D
cs=0x282c;eip=0x00014f; 	X(MOV(showmouse, 1));	// 80078 mov     showmouse, 1 ;~ 282C:014F
cs=0x282c;eip=0x000155; 	X(MOV(*(dw*)((&regs_x86)), 1));	// 80079 mov     word ptr regs_x86, 1 ;~ 282C:0155
cs=0x282c;eip=0x00015b; 	T(MOV(ax, offset(dseg,regs_x86)));	// 80080 mov     ax, offset regs_x86 ;~ 282C:015B
cs=0x282c;eip=0x00015e; 	X(PUSH(ax));	// 80081 push    ax ;~ 282C:015E
cs=0x282c;eip=0x00015f; 	X(PUSH(ax));	// 80082 push    ax ;~ 282C:015F
cs=0x282c;eip=0x000160; 	T(MOV(ax, 0x33));	// 80083 mov     ax, 33h         ; int 33,1 = show mouse cursor ;~ 282C:0160
cs=0x282c;eip=0x000163; 	X(PUSH(ax));	// 80084 push    ax ;~ 282C:0163
cs=0x282c;eip=0x000164; 	J(CALLF(_int86,0));	// 80085 call    _int86 ;~ 282C:0164
cs=0x282c;eip=0x000169; 	T(ADD(sp, 6));	// 80086 add     sp, 6 ;~ 282C:0169
locret_36a0c:
	// 9455 
cs=0x282c;eip=0x00016c; 	J(RETF(0));	// 80089 retf ;~ 282C:016C
ret_282c_16e:
	// 9456 
cs=0x282c;eip=0x00016e; 	X(DEC(showmouse));	// 80092 dec     showmouse ;~ 282C:016E
cs=0x282c;eip=0x000172; 	J(JNZ(locret_36a2b));	// 80093 jnz     short locret_36A2B ;~ 282C:0172
cs=0x282c;eip=0x000174; 	X(MOV(*(dw*)((&regs_x86)), 2));	// 80094 mov     word ptr regs_x86, 2 ;~ 282C:0174
cs=0x282c;eip=0x00017a; 	T(MOV(ax, offset(dseg,regs_x86)));	// 80095 mov     ax, offset regs_x86 ;~ 282C:017A
cs=0x282c;eip=0x00017d; 	X(PUSH(ax));	// 80096 push    ax ;~ 282C:017D
cs=0x282c;eip=0x00017e; 	X(PUSH(ax));	// 80097 push    ax ;~ 282C:017E
cs=0x282c;eip=0x00017f; 	T(MOV(ax, 0x33));	// 80098 mov     ax, 33h         ; int 33,2 = hide mouse cursor ;~ 282C:017F
cs=0x282c;eip=0x000182; 	X(PUSH(ax));	// 80099 push    ax ;~ 282C:0182
cs=0x282c;eip=0x000183; 	J(CALLF(_int86,0));	// 80100 call    _int86 ;~ 282C:0183
cs=0x282c;eip=0x000188; 	T(ADD(sp, 6));	// 80101 add     sp, 6 ;~ 282C:0188
locret_36a2b:
	// 9457 
cs=0x282c;eip=0x00018b; 	J(RETF(0));	// 80104 retf ;~ 282C:018B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::klocret_36a0c: 	goto locret_36a0c;
        case m2c::klocret_36a2b: 	goto locret_36a2b;
        case m2c::kret_282c_144: 	goto ret_282c_144;
        case m2c::kret_282c_16e: 	goto ret_282c_16e;
        case m2c::kseg017_110_proc: 	goto seg017_110_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool mouse_set_position(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mouse_set_position:
    _begin:
#undef arg_0
#define arg_0 6
	// 80112 arg_0           = word ptr  6 ;~ 282C:018C
#undef arg_2
#define arg_2 8
	// 80113 arg_2           = word ptr  8 ;~ 282C:018C
cs=0x282c;eip=0x00018c; 	X(PUSH(bp));	// 80115 push    bp ;~ 282C:018C
cs=0x282c;eip=0x00018d; 	T(MOV(bp, sp));	// 80116 mov     bp, sp ;~ 282C:018D
cs=0x282c;eip=0x00018f; 	X(MOV(*(dw*)((&regs_x86)), 4));	// 80117 mov     word ptr regs_x86, 4 ;~ 282C:018F
cs=0x282c;eip=0x000195; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 80118 mov     ax, [bp+arg_0] ;~ 282C:0195
cs=0x282c;eip=0x000198; 	X(MOV(word_44d3c, ax));	// 80119 mov     word_44D3C, ax ;~ 282C:0198
cs=0x282c;eip=0x00019b; 	T(MOV(cl, *(db*)(((db*)&mousehorscale))));	// 80120 mov     cl, byte ptr mousehorscale ;~ 282C:019B
cs=0x282c;eip=0x00019f; 	T(SHL(ax, cl));	// 80121 shl     ax, cl ;~ 282C:019F
cs=0x282c;eip=0x0001a1; 	X(MOV(*(dw*)((&unk_4498e)), ax));	// 80122 mov     word ptr unk_4498E, ax ;~ 282C:01A1
cs=0x282c;eip=0x0001a4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 80123 mov     ax, [bp+arg_2] ;~ 282C:01A4
cs=0x282c;eip=0x0001a7; 	X(MOV(*(dw*)((&unk_44990)), ax));	// 80124 mov     word ptr unk_44990, ax ;~ 282C:01A7
cs=0x282c;eip=0x0001aa; 	X(MOV(word_44d62, ax));	// 80125 mov     word_44D62, ax ;~ 282C:01AA
cs=0x282c;eip=0x0001ad; 	T(MOV(ax, 0x921A));	// 80126 mov     ax, 921Ah ;~ 282C:01AD
cs=0x282c;eip=0x0001b0; 	X(PUSH(ax));	// 80127 push    ax              ; union REGS * ;~ 282C:01B0
cs=0x282c;eip=0x0001b1; 	X(PUSH(ax));	// 80128 push    ax              ; union REGS * ;~ 282C:01B1
cs=0x282c;eip=0x0001b2; 	T(MOV(ax, 0x33));	// 80129 mov     ax, 33h         ; int 33, 4 = set mouse cursor ;~ 282C:01B2
cs=0x282c;eip=0x0001b5; 	X(PUSH(ax));	// 80130 push    ax              ; int ;~ 282C:01B5
cs=0x282c;eip=0x0001b6; 	J(CALLF(_int86,0));	// 80131 call    _int86 ;~ 282C:01B6
cs=0x282c;eip=0x0001bb; 	T(ADD(sp, 6));	// 80132 add     sp, 6 ;~ 282C:01BB
cs=0x282c;eip=0x0001be; 	X(POP(bp));	// 80133 pop     bp ;~ 282C:01BE
cs=0x282c;eip=0x0001bf; 	J(RETF(0));	// 80134 retf ;~ 282C:01BF

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kmouse_set_position: 	goto mouse_set_position;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool mouse_get_state(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mouse_get_state:
    _begin:
#undef arg_0
#define arg_0 6
	// 80145 arg_0           = word ptr  6 ;~ 282C:01C0
#undef arg_2
#define arg_2 8
	// 80146 arg_2           = word ptr  8 ;~ 282C:01C0
#undef arg_4
#define arg_4 0x0A
	// 80147 arg_4           = word ptr  0Ah ;~ 282C:01C0
cs=0x282c;eip=0x0001c0; 	X(PUSH(bp));	// 80149 push    bp ;~ 282C:01C0
cs=0x282c;eip=0x0001c1; 	T(MOV(bp, sp));	// 80150 mov     bp, sp ;~ 282C:01C1
cs=0x282c;eip=0x0001c3; 	X(MOV(*(dw*)((&regs_x86)), 3));	// 80151 mov     word ptr regs_x86, 3 ;~ 282C:01C3
cs=0x282c;eip=0x0001c9; 	T(MOV(ax, 0x921A));	// 80152 mov     ax, 921Ah ;~ 282C:01C9
cs=0x282c;eip=0x0001cc; 	X(PUSH(ax));	// 80153 push    ax              ; union REGS * ;~ 282C:01CC
cs=0x282c;eip=0x0001cd; 	X(PUSH(ax));	// 80154 push    ax              ; union REGS * ;~ 282C:01CD
cs=0x282c;eip=0x0001ce; 	T(MOV(ax, 0x33));	// 80155 mov     ax, 33h         ; int 33, 3 = get mouse position and button ;~ 282C:01CE
cs=0x282c;eip=0x0001d1; 	X(PUSH(ax));	// 80156 push    ax              ; int ;~ 282C:01D1
cs=0x282c;eip=0x0001d2; 	J(CALLF(_int86,0));	// 80157 call    _int86 ;~ 282C:01D2
cs=0x282c;eip=0x0001d7; 	T(ADD(sp, 6));	// 80158 add     sp, 6 ;~ 282C:01D7
cs=0x282c;eip=0x0001da; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 80159 mov     bx, [bp+arg_0] ;~ 282C:01DA
cs=0x282c;eip=0x0001dd; 	T(MOV(ax, *(dw*)((&unk_4498c))));	// 80160 mov     ax, word ptr unk_4498C ;~ 282C:01DD
cs=0x282c;eip=0x0001e0; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 80161 mov     [bx], ax ;~ 282C:01E0
cs=0x282c;eip=0x0001e2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 80162 mov     bx, [bp+arg_2] ;~ 282C:01E2
cs=0x282c;eip=0x0001e5; 	T(MOV(ax, *(dw*)((&unk_4498e))));	// 80163 mov     ax, word ptr unk_4498E ;~ 282C:01E5
cs=0x282c;eip=0x0001e8; 	T(MOV(cl, *(db*)(((db*)&mousehorscale))));	// 80164 mov     cl, byte ptr mousehorscale ;~ 282C:01E8
cs=0x282c;eip=0x0001ec; 	T(SHR(ax, cl));	// 80165 shr     ax, cl ;~ 282C:01EC
cs=0x282c;eip=0x0001ee; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 80166 mov     [bx], ax ;~ 282C:01EE
cs=0x282c;eip=0x0001f0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 80167 mov     bx, [bp+arg_4] ;~ 282C:01F0
cs=0x282c;eip=0x0001f3; 	T(MOV(ax, *(dw*)((&unk_44990))));	// 80168 mov     ax, word ptr unk_44990 ;~ 282C:01F3
cs=0x282c;eip=0x0001f6; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 80169 mov     [bx], ax ;~ 282C:01F6
cs=0x282c;eip=0x0001f8; 	X(POP(bp));	// 80170 pop     bp ;~ 282C:01F8
cs=0x282c;eip=0x0001f9; 	J(RETF(0));	// 80171 retf ;~ 282C:01F9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kmouse_get_state: 	goto mouse_get_state;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_36a9a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_36a9a:
    _begin:
#undef arg_0
#define arg_0 6
	// 80181 arg_0           = word ptr  6 ;~ 282C:01FA
#undef arg_2
#define arg_2 8
	// 80182 arg_2           = word ptr  8 ;~ 282C:01FA
cs=0x282c;eip=0x0001fa; 	X(PUSH(bp));	// 80184 push    bp ;~ 282C:01FA
cs=0x282c;eip=0x0001fb; 	T(MOV(bp, sp));	// 80185 mov     bp, sp ;~ 282C:01FB
cs=0x282c;eip=0x0001fd; 	X(MOV(*(dw*)((&regs_x86)), 7));	// 80186 mov     word ptr regs_x86, 7 ;~ 282C:01FD
cs=0x282c;eip=0x000203; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 80187 mov     ax, [bp+arg_0] ;~ 282C:0203
cs=0x282c;eip=0x000206; 	T(MOV(cl, *(db*)(((db*)&mousehorscale))));	// 80188 mov     cl, byte ptr mousehorscale ;~ 282C:0206
cs=0x282c;eip=0x00020a; 	T(SAR(ax, cl));	// 80189 sar     ax, cl ;~ 282C:020A
cs=0x282c;eip=0x00020c; 	X(MOV(*(dw*)((&unk_4498e)), ax));	// 80190 mov     word ptr unk_4498E, ax ;~ 282C:020C
cs=0x282c;eip=0x00020f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 80191 mov     ax, [bp+arg_2] ;~ 282C:020F
cs=0x282c;eip=0x000212; 	T(SAR(ax, cl));	// 80192 sar     ax, cl ;~ 282C:0212
cs=0x282c;eip=0x000214; 	X(MOV(*(dw*)((&unk_44990)), ax));	// 80193 mov     word ptr unk_44990, ax ;~ 282C:0214
cs=0x282c;eip=0x000217; 	T(MOV(ax, 0x921A));	// 80194 mov     ax, 921Ah ;~ 282C:0217
cs=0x282c;eip=0x00021a; 	X(PUSH(ax));	// 80195 push    ax              ; union REGS * ;~ 282C:021A
cs=0x282c;eip=0x00021b; 	X(PUSH(ax));	// 80196 push    ax              ; union REGS * ;~ 282C:021B
cs=0x282c;eip=0x00021c; 	T(MOV(ax, 0x33));	// 80197 mov     ax, 33h ; '3' ;~ 282C:021C
cs=0x282c;eip=0x00021f; 	X(PUSH(ax));	// 80198 push    ax              ; int ;~ 282C:021F
cs=0x282c;eip=0x000220; 	J(CALLF(_int86,0));	// 80199 call    _int86 ;~ 282C:0220
cs=0x282c;eip=0x000225; 	T(ADD(sp, 6));	// 80200 add     sp, 6 ;~ 282C:0225
cs=0x282c;eip=0x000228; 	X(POP(bp));	// 80201 pop     bp ;~ 282C:0228
cs=0x282c;eip=0x000229; 	J(RETF(0));	// 80202 retf ;~ 282C:0229

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knopsub_36a9a: 	goto nopsub_36a9a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_36aca(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_36aca:
    _begin:
#undef arg_0
#define arg_0 6
	// 80212 arg_0           = word ptr  6 ;~ 282C:022A
#undef arg_2
#define arg_2 8
	// 80213 arg_2           = word ptr  8 ;~ 282C:022A
cs=0x282c;eip=0x00022a; 	X(PUSH(bp));	// 80215 push    bp ;~ 282C:022A
cs=0x282c;eip=0x00022b; 	T(MOV(bp, sp));	// 80216 mov     bp, sp ;~ 282C:022B
cs=0x282c;eip=0x00022d; 	X(MOV(*(dw*)((&regs_x86)), 8));	// 80217 mov     word ptr regs_x86, 8 ;~ 282C:022D
cs=0x282c;eip=0x000233; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 80218 mov     ax, [bp+arg_0] ;~ 282C:0233
cs=0x282c;eip=0x000236; 	X(MOV(*(dw*)((&unk_4498e)), ax));	// 80219 mov     word ptr unk_4498E, ax ;~ 282C:0236
cs=0x282c;eip=0x000239; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 80220 mov     ax, [bp+arg_2] ;~ 282C:0239
cs=0x282c;eip=0x00023c; 	X(MOV(*(dw*)((&unk_44990)), ax));	// 80221 mov     word ptr unk_44990, ax ;~ 282C:023C
cs=0x282c;eip=0x00023f; 	T(MOV(ax, 0x921A));	// 80222 mov     ax, 921Ah ;~ 282C:023F
cs=0x282c;eip=0x000242; 	X(PUSH(ax));	// 80223 push    ax              ; union REGS * ;~ 282C:0242
cs=0x282c;eip=0x000243; 	X(PUSH(ax));	// 80224 push    ax              ; union REGS * ;~ 282C:0243
cs=0x282c;eip=0x000244; 	T(MOV(ax, 0x33));	// 80225 mov     ax, 33h ; '3' ;~ 282C:0244
cs=0x282c;eip=0x000247; 	X(PUSH(ax));	// 80226 push    ax              ; int ;~ 282C:0247
cs=0x282c;eip=0x000248; 	J(CALLF(_int86,0));	// 80227 call    _int86 ;~ 282C:0248
cs=0x282c;eip=0x00024d; 	T(ADD(sp, 6));	// 80228 add     sp, 6 ;~ 282C:024D
cs=0x282c;eip=0x000250; 	X(POP(bp));	// 80229 pop     bp ;~ 282C:0250
cs=0x282c;eip=0x000251; 	J(RETF(0));	// 80230 retf ;~ 282C:0251

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knopsub_36aca: 	goto nopsub_36aca;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

