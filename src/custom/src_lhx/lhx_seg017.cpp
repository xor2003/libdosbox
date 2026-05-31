/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group15(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group15:
    _begin:
seg017_proc:
	// 74097 
cs=0x2243;eip=0x000000; 	R(RETF(0));	// 74097 retf ;~ 2243:0000
ret_2243_2:
	// 9209 
cs=0x2243;eip=0x000002; 	R(RETF(0));	// 74100 retf ;~ 2243:0002
sub_30a14:
	// 74108 
#undef arg_0
#define arg_0 6
	// 74111 arg_0           = word ptr  6 ;~ 2243:0004
#undef arg_2
#define arg_2 8
	// 74112 arg_2           = word ptr  8 ;~ 2243:0004
cs=0x2243;eip=0x000004; 	X(PUSH(bp));	// 74114 push    bp ;~ 2243:0004
cs=0x2243;eip=0x000005; 	T(MOV(bp, sp));	// 74115 mov     bp, sp ;~ 2243:0005
cs=0x2243;eip=0x000007; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 74116 push    [bp+arg_2] ;~ 2243:0007
cs=0x2243;eip=0x00000a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 74117 push    [bp+arg_0] ;~ 2243:000A
cs=0x2243;eip=0x00000d; 	T(MOV(ax, 1));	// 74118 mov     ax, 1 ;~ 2243:000D
cs=0x2243;eip=0x000010; 	X(PUSH(ax));	// 74119 push    ax ;~ 2243:0010
cs=0x2243;eip=0x000011; 	R(CALL(sub_30a28,0));	// 74120 call    sub_30A28 ;~ 2243:0011
cs=0x2243;eip=0x000014; 	X(POP(bp));	// 74121 pop     bp ;~ 2243:0014
cs=0x2243;eip=0x000015; 	R(RETF(4));	// 74122 retf    4 ;~ 2243:0015
sub_30a28:
	// 74130 
#undef var_a
#define var_a -0x0A
	// 74132 var_A           = word ptr -0Ah ;~ 2243:0018
#undef var_8
#define var_8 -8
	// 74133 var_8           = word ptr -8 ;~ 2243:0018
#undef var_6
#define var_6 -6
	// 74134 var_6           = word ptr -6 ;~ 2243:0018
#undef var_4
#define var_4 -4
	// 74135 var_4           = word ptr -4 ;~ 2243:0018
#undef var_2
#define var_2 -2
	// 74136 var_2           = word ptr -2 ;~ 2243:0018
#undef arg_0
#define arg_0 4
	// 74137 arg_0           = byte ptr  4 ;~ 2243:0018
#undef arg_2
#define arg_2 6
	// 74138 arg_2           = word ptr  6 ;~ 2243:0018
#undef arg_4
#define arg_4 8
	// 74139 arg_4           = word ptr  8 ;~ 2243:0018
cs=0x2243;eip=0x000018; 	X(PUSH(bp));	// 74141 push    bp ;~ 2243:0018
cs=0x2243;eip=0x000019; 	T(MOV(bp, sp));	// 74142 mov     bp, sp ;~ 2243:0019
cs=0x2243;eip=0x00001b; 	T(SUB(sp, 0x0A));	// 74143 sub     sp, 0Ah ;~ 2243:001B
cs=0x2243;eip=0x00001e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x0FFFF));	// 74144 mov     [bp+var_A], 0FFFFh ;~ 2243:001E
cs=0x2243;eip=0x000023; 	T(SUB(ax, ax));	// 74145 sub     ax, ax ;~ 2243:0023
cs=0x2243;eip=0x000025; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 74146 mov     [bp+var_6], ax ;~ 2243:0025
cs=0x2243;eip=0x000028; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 74147 mov     [bp+var_8], ax ;~ 2243:0028
cs=0x2243;eip=0x00002b; 	X(MOV(*(dw*)((&unk_571e7)), ax));	// 74148 mov     word ptr unk_571E7, ax ;~ 2243:002B
cs=0x2243;eip=0x00002e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 74149 push    [bp+arg_4] ;~ 2243:002E
cs=0x2243;eip=0x000031; 	R(CALLF(sub_30b18,0));	// 74150 call    sub_30B18 ;~ 2243:0031
cs=0x2243;eip=0x000036; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 74151 mov     [bp+var_4], ax ;~ 2243:0036
cs=0x2243;eip=0x000039; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 74152 mov     [bp+var_2], dx ;~ 2243:0039
cs=0x2243;eip=0x00003c; 	T(CMP(dx, 1));	// 74153 cmp     dx, 1 ;~ 2243:003C
cs=0x2243;eip=0x00003f; 	R(JL(loc_30a7e));	// 74154 jl      short loc_30A7E ;~ 2243:003F
loc_30a51:
	// 9210 
cs=0x2243;eip=0x000041; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x0FFFF));	// 74158 cmp     [bp+var_A], 0FFFFh ;~ 2243:0041
cs=0x2243;eip=0x000045; 	R(JZ(loc_30a5f));	// 74159 jz      short loc_30A5F ;~ 2243:0045
cs=0x2243;eip=0x000047; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 74160 push    [bp+var_A] ;~ 2243:0047
cs=0x2243;eip=0x00004a; 	R(CALLF(sub_30b72,0));	// 74161 call    sub_30B72 ;~ 2243:004A
loc_30a5f:
	// 9211 
cs=0x2243;eip=0x00004f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 74164 mov     ax, [bp+var_8] ;~ 2243:004F
cs=0x2243;eip=0x000052; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_6))));	// 74165 or      ax, [bp+var_6] ;~ 2243:0052
cs=0x2243;eip=0x000055; 	R(JNZ(loc_30a6a));	// 74166 jnz     short loc_30A6A ;~ 2243:0055
cs=0x2243;eip=0x000057; 	R(JMP(loc_30b09));	// 74167 jmp     loc_30B09 ;~ 2243:0057
loc_30a6a:
	// 9212 
cs=0x2243;eip=0x00005a; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 74171 cmp     [bp+arg_0], 0 ;~ 2243:005A
cs=0x2243;eip=0x00005e; 	R(JNZ(loc_30a73));	// 74172 jnz     short loc_30A73 ;~ 2243:005E
cs=0x2243;eip=0x000060; 	R(JMP(loc_30b01));	// 74173 jmp     loc_30B01 ;~ 2243:0060
loc_30a73:
	// 9213 
cs=0x2243;eip=0x000063; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 74177 push    [bp+var_6] ;~ 2243:0063
cs=0x2243;eip=0x000066; 	R(CALLF(sub_2397c,0));	// 74178 call    sub_2397C ;~ 2243:0066
cs=0x2243;eip=0x00006b; 	R(JMP(loc_30b09));	// 74179 jmp     loc_30B09 ;~ 2243:006B
loc_30a7e:
	// 9214 
cs=0x2243;eip=0x00006e; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 74183 cmp     [bp+arg_0], 0 ;~ 2243:006E
cs=0x2243;eip=0x000072; 	R(JZ(loc_30a9c));	// 74184 jz      short loc_30A9C ;~ 2243:0072
cs=0x2243;eip=0x000074; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 74185 push    [bp+var_4] ;~ 2243:0074
cs=0x2243;eip=0x000077; 	R(CALLF(sub_23961,0));	// 74186 call    sub_23961 ;~ 2243:0077
cs=0x2243;eip=0x00007c; 	T(MOV(dx, ax));	// 74187 mov     dx, ax ;~ 2243:007C
cs=0x2243;eip=0x00007e; 	T(SUB(ax, ax));	// 74188 sub     ax, ax ;~ 2243:007E
cs=0x2243;eip=0x000080; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 74189 mov     [bp+var_8], ax ;~ 2243:0080
cs=0x2243;eip=0x000083; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 74190 mov     [bp+var_6], dx ;~ 2243:0083
cs=0x2243;eip=0x000086; 	T(CMP(dx, ax));	// 74191 cmp     dx, ax ;~ 2243:0086
cs=0x2243;eip=0x000088; 	R(JNZ(loc_30aae));	// 74192 jnz     short loc_30AAE ;~ 2243:0088
cs=0x2243;eip=0x00008a; 	R(JMP(loc_30a51));	// 74193 jmp     short loc_30A51 ;~ 2243:008A
loc_30a9c:
	// 9215 
cs=0x2243;eip=0x00008c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 74197 push    [bp+var_4] ;~ 2243:008C
cs=0x2243;eip=0x00008f; 	R(CALLF(sub_239ff,0));	// 74198 call    sub_239FF ;~ 2243:008F
cs=0x2243;eip=0x000094; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 74199 mov     [bp+var_8], ax ;~ 2243:0094
cs=0x2243;eip=0x000097; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ds));	// 74200 mov     [bp+var_6], ds ;~ 2243:0097
cs=0x2243;eip=0x00009a; 	T(OR(ax, ax));	// 74201 or      ax, ax ;~ 2243:009A
cs=0x2243;eip=0x00009c; 	R(JZ(loc_30a51));	// 74202 jz      short loc_30A51 ;~ 2243:009C
loc_30aae:
	// 9216 
cs=0x2243;eip=0x00009e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 74205 push    [bp+arg_4] ;~ 2243:009E
cs=0x2243;eip=0x0000a1; 	T(SUB(ax, ax));	// 74206 sub     ax, ax ;~ 2243:00A1
cs=0x2243;eip=0x0000a3; 	X(PUSH(ax));	// 74207 push    ax ;~ 2243:00A3
cs=0x2243;eip=0x0000a4; 	R(CALLF(sub_30b47,0));	// 74208 call    sub_30B47 ;~ 2243:00A4
cs=0x2243;eip=0x0000a9; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 74209 mov     [bp+var_A], ax ;~ 2243:00A9
cs=0x2243;eip=0x0000ac; 	T(INC(ax));	// 74210 inc     ax ;~ 2243:00AC
cs=0x2243;eip=0x0000ad; 	R(JZ(loc_30a51));	// 74211 jz      short loc_30A51 ;~ 2243:00AD
cs=0x2243;eip=0x0000af; 	T(CMP(*(dw*)((&unk_571e7)), 0));	// 74212 cmp     word ptr unk_571E7, 0 ;~ 2243:00AF
cs=0x2243;eip=0x0000b4; 	R(JNZ(loc_30a51));	// 74213 jnz     short loc_30A51 ;~ 2243:00B4
cs=0x2243;eip=0x0000b6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 74214 push    [bp+var_A] ;~ 2243:00B6
cs=0x2243;eip=0x0000b9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 74215 push    [bp+var_6] ;~ 2243:00B9
cs=0x2243;eip=0x0000bc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 74216 push    [bp+var_8] ;~ 2243:00BC
cs=0x2243;eip=0x0000bf; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 74217 push    [bp+var_4] ;~ 2243:00BF
cs=0x2243;eip=0x0000c2; 	R(CALLF(sub_30b8e,0));	// 74218 call    sub_30B8E ;~ 2243:00C2
cs=0x2243;eip=0x0000c7; 	T(CMP(ax, 0x0FFFF));	// 74219 cmp     ax, 0FFFFh ;~ 2243:00C7
cs=0x2243;eip=0x0000ca; 	R(JNZ(loc_30adf));	// 74220 jnz     short loc_30ADF ;~ 2243:00CA
cs=0x2243;eip=0x0000cc; 	R(JMP(loc_30a51));	// 74221 jmp     loc_30A51 ;~ 2243:00CC
loc_30adf:
	// 9217 
cs=0x2243;eip=0x0000cf; 	T(CMP(*(dw*)((&unk_571e7)), 0));	// 74225 cmp     word ptr unk_571E7, 0 ;~ 2243:00CF
cs=0x2243;eip=0x0000d4; 	R(JZ(loc_30ae9));	// 74226 jz      short loc_30AE9 ;~ 2243:00D4
cs=0x2243;eip=0x0000d6; 	R(JMP(loc_30a51));	// 74227 jmp     loc_30A51 ;~ 2243:00D6
loc_30ae9:
	// 9218 
cs=0x2243;eip=0x0000d9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 74231 push    [bp+var_A] ;~ 2243:00D9
cs=0x2243;eip=0x0000dc; 	R(CALLF(sub_30b72,0));	// 74232 call    sub_30B72 ;~ 2243:00DC
cs=0x2243;eip=0x0000e1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 74233 mov     bx, [bp+arg_2] ;~ 2243:00E1
cs=0x2243;eip=0x0000e4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 74234 mov     ax, [bp+var_4] ;~ 2243:00E4
cs=0x2243;eip=0x0000e7; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 74235 mov     [bx], ax ;~ 2243:00E7
cs=0x2243;eip=0x0000e9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 74236 mov     ax, [bp+var_8] ;~ 2243:00E9
cs=0x2243;eip=0x0000ec; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 74237 mov     dx, [bp+var_6] ;~ 2243:00EC
cs=0x2243;eip=0x0000ef; 	R(JMP(loc_30b12));	// 74238 jmp     short loc_30B12 ;~ 2243:00EF
loc_30b01:
	// 9219 
cs=0x2243;eip=0x0000f1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 74242 push    [bp+var_8] ;~ 2243:00F1
cs=0x2243;eip=0x0000f4; 	R(CALLF(sub_23a33,0));	// 74243 call    sub_23A33 ;~ 2243:00F4
loc_30b09:
	// 9220 
cs=0x2243;eip=0x0000f9; 	X(MOV(*(dw*)((&unk_571e7)), 0));	// 74247 mov     word ptr unk_571E7, 0 ;~ 2243:00F9
cs=0x2243;eip=0x0000ff; 	T(SUB(ax, ax));	// 74248 sub     ax, ax ;~ 2243:00FF
cs=0x2243;eip=0x000101; 	T(CWD);	// 74249 cwd ;~ 2243:0101
loc_30b12:
	// 9221 
cs=0x2243;eip=0x000102; 	T(MOV(sp, bp));	// 74252 mov     sp, bp ;~ 2243:0102
cs=0x2243;eip=0x000104; 	X(POP(bp));	// 74253 pop     bp ;~ 2243:0104
cs=0x2243;eip=0x000105; 	R(RETN(6));	// 74254 retn    6 ;~ 2243:0105

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_30a51: 	goto loc_30a51;
        case m2c::kloc_30a5f: 	goto loc_30a5f;
        case m2c::kloc_30a6a: 	goto loc_30a6a;
        case m2c::kloc_30a73: 	goto loc_30a73;
        case m2c::kloc_30a7e: 	goto loc_30a7e;
        case m2c::kloc_30a9c: 	goto loc_30a9c;
        case m2c::kloc_30aae: 	goto loc_30aae;
        case m2c::kloc_30adf: 	goto loc_30adf;
        case m2c::kloc_30ae9: 	goto loc_30ae9;
        case m2c::kloc_30b01: 	goto loc_30b01;
        case m2c::kloc_30b09: 	goto loc_30b09;
        case m2c::kloc_30b12: 	goto loc_30b12;
        case m2c::kret_2243_2: 	goto ret_2243_2;
        case m2c::kseg017_proc: 	goto seg017_proc;
        case m2c::ksub_30a14: 	goto sub_30a14;
        case m2c::ksub_30a28: 	goto sub_30a28;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

