/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool sub_26d92(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_26d92:
    _begin:
#undef arg_0
#define arg_0 6
	// 43092 arg_0           = word ptr  6 ;~ 187B:0002
#undef arg_2
#define arg_2 8
	// 43093 arg_2           = word ptr  8 ;~ 187B:0002
ret_187b_2:
	// 7540 
cs=0x187b;eip=0x000002; 	X(PUSH(bp));	// 43095 push    bp ;~ 187B:0002
cs=0x187b;eip=0x000003; 	T(MOV(bp, sp));	// 43096 mov     bp, sp ;~ 187B:0003
cs=0x187b;eip=0x000005; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 43097 mov     ax, [bp+arg_0] ;~ 187B:0005
cs=0x187b;eip=0x000008; 	T(MOV(bx, word_37b8b));	// 43098 mov     bx, word_37B8B ;~ 187B:0008
cs=0x187b;eip=0x00000c; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 43099 mov     cx, [bp+arg_2] ;~ 187B:000C
cs=0x187b;eip=0x00000f; 	T(MOV(dx, word_37b8d));	// 43100 mov     dx, word_37B8D ;~ 187B:000F
cs=0x187b;eip=0x000013; 	T(CMP(ax, bx));	// 43101 cmp     ax, bx ;~ 187B:0013
cs=0x187b;eip=0x000015; 	R(JZ(loc_26db5));	// 43102 jz      short loc_26DB5 ;~ 187B:0015
cs=0x187b;eip=0x000017; 	T(CMP(cx, dx));	// 43103 cmp     cx, dx ;~ 187B:0017
cs=0x187b;eip=0x000019; 	R(JNZ(loc_26dce));	// 43104 jnz     short loc_26DCE ;~ 187B:0019
cs=0x187b;eip=0x00001b; 	X(MOV(word_37b8b, ax));	// 43105 mov     word_37B8B, ax ;~ 187B:001B
cs=0x187b;eip=0x00001e; 	T(CMP(bx, ax));	// 43106 cmp     bx, ax ;~ 187B:001E
cs=0x187b;eip=0x000020; 	R(JLE(loc_26dbf));	// 43107 jle     short loc_26DBF ;~ 187B:0020
cs=0x187b;eip=0x000022; 	T(XCHG(ax, bx));	// 43108 xchg    ax, bx ;~ 187B:0022
cs=0x187b;eip=0x000023; 	R(JMP(loc_26dbf));	// 43109 jmp     short loc_26DBF ;~ 187B:0023
loc_26db5:
	// 7541 
cs=0x187b;eip=0x000025; 	X(MOV(word_37b8d, cx));	// 43113 mov     word_37B8D, cx ;~ 187B:0025
cs=0x187b;eip=0x000029; 	T(CMP(dx, cx));	// 43114 cmp     dx, cx ;~ 187B:0029
cs=0x187b;eip=0x00002b; 	R(JGE(loc_26dbf));	// 43115 jge     short loc_26DBF ;~ 187B:002B
cs=0x187b;eip=0x00002d; 	T(XCHG(dx, cx));	// 43116 xchg    dx, cx ;~ 187B:002D
loc_26dbf:
	// 7542 
cs=0x187b;eip=0x00002f; 	X(PUSH(dx));	// 43120 push    dx ;~ 187B:002F
cs=0x187b;eip=0x000030; 	X(PUSH(cx));	// 43121 push    cx ;~ 187B:0030
cs=0x187b;eip=0x000031; 	X(PUSH(ax));	// 43122 push    ax ;~ 187B:0031
cs=0x187b;eip=0x000032; 	X(PUSH(bx));	// 43123 push    bx ;~ 187B:0032
cs=0x187b;eip=0x000033; 	R(CALLF(sub_292e5,0));	// 43124 call    sub_292E5 ;~ 187B:0033
cs=0x187b;eip=0x000038; 	T(ADD(sp, 8));	// 43125 add     sp, 8 ;~ 187B:0038
cs=0x187b;eip=0x00003b; 	R(JMP(loc_26e53));	// 43126 jmp     loc_26E53 ;~ 187B:003B
loc_26dce:
	// 7543 
cs=0x187b;eip=0x00003e; 	X(PUSH(di));	// 43130 push    di ;~ 187B:003E
cs=0x187b;eip=0x00003f; 	X(PUSH(si));	// 43131 push    si ;~ 187B:003F
cs=0x187b;eip=0x000040; 	T(MOV(si, ax));	// 43132 mov     si, ax ;~ 187B:0040
cs=0x187b;eip=0x000042; 	T(MOV(ax, cx));	// 43133 mov     ax, cx ;~ 187B:0042
cs=0x187b;eip=0x000044; 	T(MOV(cx, 1));	// 43134 mov     cx, 1 ;~ 187B:0044
cs=0x187b;eip=0x000047; 	T(MOV(dx, cx));	// 43135 mov     dx, cx ;~ 187B:0047
cs=0x187b;eip=0x000049; 	T(SUB(ax, word_37b8d));	// 43136 sub     ax, word_37B8D ;~ 187B:0049
cs=0x187b;eip=0x00004d; 	R(JGE(loc_26de3));	// 43137 jge     short loc_26DE3 ;~ 187B:004D
cs=0x187b;eip=0x00004f; 	T(NEG(dx));	// 43138 neg     dx ;~ 187B:004F
cs=0x187b;eip=0x000051; 	T(NEG(ax));	// 43139 neg     ax ;~ 187B:0051
loc_26de3:
	// 7544 
cs=0x187b;eip=0x000053; 	X(MOV(word_38144, dx));	// 43142 mov     word_38144, dx ;~ 187B:0053
cs=0x187b;eip=0x000057; 	T(SUB(si, bx));	// 43143 sub     si, bx ;~ 187B:0057
cs=0x187b;eip=0x000059; 	R(JGE(loc_26def));	// 43144 jge     short loc_26DEF ;~ 187B:0059
cs=0x187b;eip=0x00005b; 	T(NEG(cx));	// 43145 neg     cx ;~ 187B:005B
cs=0x187b;eip=0x00005d; 	T(NEG(si));	// 43146 neg     si ;~ 187B:005D
loc_26def:
	// 7545 
cs=0x187b;eip=0x00005f; 	X(MOV(word_38142, cx));	// 43149 mov     word_38142, cx ;~ 187B:005F
cs=0x187b;eip=0x000063; 	T(CMP(si, ax));	// 43150 cmp     si, ax ;~ 187B:0063
cs=0x187b;eip=0x000065; 	R(JGE(loc_26dfc));	// 43151 jge     short loc_26DFC ;~ 187B:0065
cs=0x187b;eip=0x000067; 	T(XOR(cx, cx));	// 43152 xor     cx, cx ;~ 187B:0067
cs=0x187b;eip=0x000069; 	T(XCHG(ax, si));	// 43153 xchg    ax, si ;~ 187B:0069
cs=0x187b;eip=0x00006a; 	R(JMP(loc_26dfe));	// 43154 jmp     short loc_26DFE ;~ 187B:006A
loc_26dfc:
	// 7546 
cs=0x187b;eip=0x00006c; 	T(XOR(dx, dx));	// 43158 xor     dx, dx ;~ 187B:006C
loc_26dfe:
	// 7547 
cs=0x187b;eip=0x00006e; 	X(MOV(word_38146, cx));	// 43161 mov     word_38146, cx ;~ 187B:006E
cs=0x187b;eip=0x000072; 	X(MOV(word_38148, dx));	// 43162 mov     word_38148, dx ;~ 187B:0072
cs=0x187b;eip=0x000076; 	T(SHL(ax, 1));	// 43163 shl     ax, 1 ;~ 187B:0076
cs=0x187b;eip=0x000078; 	X(MOV(word_3814c, ax));	// 43164 mov     word_3814C, ax ;~ 187B:0078
cs=0x187b;eip=0x00007b; 	T(SUB(ax, si));	// 43165 sub     ax, si ;~ 187B:007B
cs=0x187b;eip=0x00007d; 	T(MOV(di, ax));	// 43166 mov     di, ax ;~ 187B:007D
cs=0x187b;eip=0x00007f; 	T(SUB(ax, si));	// 43167 sub     ax, si ;~ 187B:007F
cs=0x187b;eip=0x000081; 	X(MOV(word_3814a, ax));	// 43168 mov     word_3814A, ax ;~ 187B:0081
cs=0x187b;eip=0x000084; 	T(MOV(cx, word_37b8b));	// 43169 mov     cx, word_37B8B ;~ 187B:0084
cs=0x187b;eip=0x000088; 	T(MOV(dx, word_37b8d));	// 43170 mov     dx, word_37B8D ;~ 187B:0088
cs=0x187b;eip=0x00008c; 	T(INC(si));	// 43171 inc     si ;~ 187B:008C
loc_26e1d:
	// 7548 
cs=0x187b;eip=0x00008d; 	X(PUSH(dx));	// 43175 push    dx ;~ 187B:008D
cs=0x187b;eip=0x00008e; 	X(PUSH(cx));	// 43176 push    cx ;~ 187B:008E
cs=0x187b;eip=0x00008f; 	R(CALLF(sub_273c5,0));	// 43177 call    sub_273C5 ;~ 187B:008F
cs=0x187b;eip=0x000094; 	X(POP(cx));	// 43178 pop     cx ;~ 187B:0094
cs=0x187b;eip=0x000095; 	X(POP(dx));	// 43179 pop     dx ;~ 187B:0095
cs=0x187b;eip=0x000096; 	T(DEC(si));	// 43180 dec     si ;~ 187B:0096
cs=0x187b;eip=0x000097; 	R(JZ(loc_26e49));	// 43181 jz      short loc_26E49 ;~ 187B:0097
cs=0x187b;eip=0x000099; 	T(OR(di, di));	// 43182 or      di, di ;~ 187B:0099
cs=0x187b;eip=0x00009b; 	R(JGE(loc_26e3b));	// 43183 jge     short loc_26E3B ;~ 187B:009B
cs=0x187b;eip=0x00009d; 	T(ADD(cx, word_38146));	// 43184 add     cx, word_38146 ;~ 187B:009D
cs=0x187b;eip=0x0000a1; 	T(ADD(dx, word_38148));	// 43185 add     dx, word_38148 ;~ 187B:00A1
cs=0x187b;eip=0x0000a5; 	T(ADD(di, word_3814c));	// 43186 add     di, word_3814C ;~ 187B:00A5
cs=0x187b;eip=0x0000a9; 	R(JMP(loc_26e1d));	// 43187 jmp     short loc_26E1D ;~ 187B:00A9
loc_26e3b:
	// 7549 
cs=0x187b;eip=0x0000ab; 	T(ADD(cx, word_38142));	// 43191 add     cx, word_38142 ;~ 187B:00AB
cs=0x187b;eip=0x0000af; 	T(ADD(dx, word_38144));	// 43192 add     dx, word_38144 ;~ 187B:00AF
cs=0x187b;eip=0x0000b3; 	T(ADD(di, word_3814a));	// 43193 add     di, word_3814A ;~ 187B:00B3
cs=0x187b;eip=0x0000b7; 	R(JMP(loc_26e1d));	// 43194 jmp     short loc_26E1D ;~ 187B:00B7
loc_26e49:
	// 7550 
cs=0x187b;eip=0x0000b9; 	X(MOV(word_37b8b, cx));	// 43198 mov     word_37B8B, cx ;~ 187B:00B9
cs=0x187b;eip=0x0000bd; 	X(MOV(word_37b8d, dx));	// 43199 mov     word_37B8D, dx ;~ 187B:00BD
cs=0x187b;eip=0x0000c1; 	X(POP(si));	// 43200 pop     si ;~ 187B:00C1
cs=0x187b;eip=0x0000c2; 	X(POP(di));	// 43201 pop     di ;~ 187B:00C2
loc_26e53:
	// 7551 
cs=0x187b;eip=0x0000c3; 	T(XOR(ax, ax));	// 43204 xor     ax, ax ;~ 187B:00C3
cs=0x187b;eip=0x0000c5; 	X(POP(bp));	// 43205 pop     bp ;~ 187B:00C5
cs=0x187b;eip=0x0000c6; 	R(RETF(0));	// 43206 retf ;~ 187B:00C6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_26db5: 	goto loc_26db5;
        case m2c::kloc_26dbf: 	goto loc_26dbf;
        case m2c::kloc_26dce: 	goto loc_26dce;
        case m2c::kloc_26de3: 	goto loc_26de3;
        case m2c::kloc_26def: 	goto loc_26def;
        case m2c::kloc_26dfc: 	goto loc_26dfc;
        case m2c::kloc_26dfe: 	goto loc_26dfe;
        case m2c::kloc_26e1d: 	goto loc_26e1d;
        case m2c::kloc_26e3b: 	goto loc_26e3b;
        case m2c::kloc_26e49: 	goto loc_26e49;
        case m2c::kloc_26e53: 	goto loc_26e53;
        case m2c::kret_187b_2: 	goto ret_187b_2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

