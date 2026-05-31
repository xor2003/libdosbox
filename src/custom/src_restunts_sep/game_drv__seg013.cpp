/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool sprite_1_unk4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sprite_1_unk4:
    _begin:
#undef var_4
#define var_4 -4
	// 79058 var_4           = word ptr -4 ;~ 27BD:000C
#undef var_2
#define var_2 -2
	// 79059 var_2           = word ptr -2 ;~ 27BD:000C
#undef arg_0
#define arg_0 6
	// 79060 arg_0           = word ptr  6 ;~ 27BD:000C
#undef arg_2
#define arg_2 8
	// 79061 arg_2           = word ptr  8 ;~ 27BD:000C
#undef arg_4
#define arg_4 0x0A
	// 79062 arg_4           = word ptr  0Ah ;~ 27BD:000C
#undef arg_6
#define arg_6 0x0C
	// 79063 arg_6           = word ptr  0Ch ;~ 27BD:000C
#undef arg_8
#define arg_8 0x0E
	// 79064 arg_8           = word ptr  0Eh ;~ 27BD:000C
cs=0x27bd;eip=0x00000c; 	X(PUSH(bp));	// 79066 push    bp ;~ 27BD:000C
cs=0x27bd;eip=0x00000d; 	T(MOV(bp, sp));	// 79067 mov     bp, sp ;~ 27BD:000D
cs=0x27bd;eip=0x00000f; 	T(SUB(sp, 4));	// 79068 sub     sp, 4 ;~ 27BD:000F
cs=0x27bd;eip=0x000012; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 79069 mov     ax, [bp+arg_4] ;~ 27BD:0012
cs=0x27bd;eip=0x000015; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 79070 sub     ax, [bp+arg_0] ;~ 27BD:0015
cs=0x27bd;eip=0x000018; 	T(INC(ax));	// 79071 inc     ax ;~ 27BD:0018
cs=0x27bd;eip=0x000019; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 79072 mov     [bp+var_2], ax ;~ 27BD:0019
cs=0x27bd;eip=0x00001c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 79073 mov     ax, [bp+arg_6] ;~ 27BD:001C
cs=0x27bd;eip=0x00001f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 79074 sub     ax, [bp+arg_2] ;~ 27BD:001F
cs=0x27bd;eip=0x000022; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 79075 mov     [bp+var_4], ax ;~ 27BD:0022
cs=0x27bd;eip=0x000025; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 79076 cmp     [bp+var_2], 0 ;~ 27BD:0025
cs=0x27bd;eip=0x000029; 	J(JLE(loc_3620b));	// 79077 jle     short loc_3620B ;~ 27BD:0029
cs=0x27bd;eip=0x00002b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 79078 push    [bp+arg_8] ;~ 27BD:002B
cs=0x27bd;eip=0x00002e; 	T(MOV(ax, 1));	// 79079 mov     ax, 1 ;~ 27BD:002E
cs=0x27bd;eip=0x000031; 	X(PUSH(ax));	// 79080 push    ax ;~ 27BD:0031
cs=0x27bd;eip=0x000032; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 79081 push    [bp+var_2] ;~ 27BD:0032
cs=0x27bd;eip=0x000035; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 79082 push    [bp+arg_2] ;~ 27BD:0035
cs=0x27bd;eip=0x000038; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 79083 push    [bp+arg_0] ;~ 27BD:0038
cs=0x27bd;eip=0x00003b; 	J(CALLF(sprite_1_unk2,0));	// 79084 call    sprite_1_unk2 ;~ 27BD:003B
cs=0x27bd;eip=0x000040; 	T(ADD(sp, 0x0A));	// 79085 add     sp, 0Ah ;~ 27BD:0040
cs=0x27bd;eip=0x000043; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 79086 push    [bp+arg_8] ;~ 27BD:0043
cs=0x27bd;eip=0x000046; 	T(MOV(ax, 1));	// 79087 mov     ax, 1 ;~ 27BD:0046
cs=0x27bd;eip=0x000049; 	X(PUSH(ax));	// 79088 push    ax ;~ 27BD:0049
cs=0x27bd;eip=0x00004a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 79089 push    [bp+var_2] ;~ 27BD:004A
cs=0x27bd;eip=0x00004d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 79090 push    [bp+arg_6] ;~ 27BD:004D
cs=0x27bd;eip=0x000050; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 79091 push    [bp+arg_0] ;~ 27BD:0050
cs=0x27bd;eip=0x000053; 	J(CALLF(sprite_1_unk2,0));	// 79092 call    sprite_1_unk2 ;~ 27BD:0053
cs=0x27bd;eip=0x000058; 	T(ADD(sp, 0x0A));	// 79093 add     sp, 0Ah ;~ 27BD:0058
loc_3620b:
	// 9439 
cs=0x27bd;eip=0x00005b; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 79096 cmp     [bp+var_4], 0 ;~ 27BD:005B
cs=0x27bd;eip=0x00005f; 	J(JLE(loc_36241));	// 79097 jle     short loc_36241 ;~ 27BD:005F
cs=0x27bd;eip=0x000061; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 79098 push    [bp+arg_8] ;~ 27BD:0061
cs=0x27bd;eip=0x000064; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 79099 push    [bp+var_4] ;~ 27BD:0064
cs=0x27bd;eip=0x000067; 	T(MOV(ax, 1));	// 79100 mov     ax, 1 ;~ 27BD:0067
cs=0x27bd;eip=0x00006a; 	X(PUSH(ax));	// 79101 push    ax ;~ 27BD:006A
cs=0x27bd;eip=0x00006b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 79102 push    [bp+arg_2] ;~ 27BD:006B
cs=0x27bd;eip=0x00006e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 79103 push    [bp+arg_0] ;~ 27BD:006E
cs=0x27bd;eip=0x000071; 	J(CALLF(sprite_1_unk2,0));	// 79104 call    sprite_1_unk2 ;~ 27BD:0071
cs=0x27bd;eip=0x000076; 	T(ADD(sp, 0x0A));	// 79105 add     sp, 0Ah ;~ 27BD:0076
cs=0x27bd;eip=0x000079; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 79106 push    [bp+arg_8] ;~ 27BD:0079
cs=0x27bd;eip=0x00007c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 79107 push    [bp+var_4] ;~ 27BD:007C
cs=0x27bd;eip=0x00007f; 	T(MOV(ax, 1));	// 79108 mov     ax, 1 ;~ 27BD:007F
cs=0x27bd;eip=0x000082; 	X(PUSH(ax));	// 79109 push    ax ;~ 27BD:0082
cs=0x27bd;eip=0x000083; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 79110 push    [bp+arg_2] ;~ 27BD:0083
cs=0x27bd;eip=0x000086; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 79111 push    [bp+arg_4] ;~ 27BD:0086
cs=0x27bd;eip=0x000089; 	J(CALLF(sprite_1_unk2,0));	// 79112 call    sprite_1_unk2 ;~ 27BD:0089
cs=0x27bd;eip=0x00008e; 	T(ADD(sp, 0x0A));	// 79113 add     sp, 0Ah ;~ 27BD:008E
loc_36241:
	// 9440 
cs=0x27bd;eip=0x000091; 	T(MOV(sp, bp));	// 79116 mov     sp, bp ;~ 27BD:0091
cs=0x27bd;eip=0x000093; 	X(POP(bp));	// 79117 pop     bp ;~ 27BD:0093
cs=0x27bd;eip=0x000094; 	J(RETF(0));	// 79118 retf ;~ 27BD:0094

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3620b: 	goto loc_3620b;
        case m2c::kloc_36241: 	goto loc_36241;
        case m2c::ksprite_1_unk4: 	goto sprite_1_unk4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

