/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group11(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group11:
    _begin:
sub_2f74d:
	// 71146 
cs=0x2116;eip=0x00000d; 	R(_INT(0x12));	// 71147 int     12h             ; MEMORY SIZE - ;~ 2116:000D
cs=0x2116;eip=0x00000f; 	R(RETF(0));	// 71149 retf ;~ 2116:000F
sub_2f750:
	// 71156 
cs=0x2116;eip=0x000010; 	T(MOV(ax, 0x7000));	// 71157 mov     ax, 7000h ;~ 2116:0010
cs=0x2116;eip=0x000013; 	T(MOV(bx, 1));	// 71158 mov     bx, 1 ;~ 2116:0013
cs=0x2116;eip=0x000016; 	R(_INT(0x15));	// 71159 int     15h ;~ 2116:0016
cs=0x2116;eip=0x000018; 	T(STI);	// 71160 sti ;~ 2116:0018
cs=0x2116;eip=0x000019; 	T(MOV(ax, 0x10));	// 71161 mov     ax, 10h ;~ 2116:0019
cs=0x2116;eip=0x00001c; 	R(JC(locret_2f765));	// 71162 jb      short locret_2F765 ;~ 2116:001C
cs=0x2116;eip=0x00001e; 	T(AND(dh, 3));	// 71163 and     dh, 3 ;~ 2116:001E
cs=0x2116;eip=0x000021; 	T(MOV(cl, dh));	// 71164 mov     cl, dh ;~ 2116:0021
cs=0x2116;eip=0x000023; 	T(SHL(ax, cl));	// 71165 shl     ax, cl ;~ 2116:0023
locret_2f765:
	// 8965 
cs=0x2116;eip=0x000025; 	R(RETF(0));	// 71168 retf ;~ 2116:0025
sub_2f766:
	// 71176 
#undef arg_0
#define arg_0 6
	// 71178 arg_0           = word ptr  6 ;~ 2116:0026
cs=0x2116;eip=0x000026; 	X(PUSH(bp));	// 71180 push    bp ;~ 2116:0026
cs=0x2116;eip=0x000027; 	T(MOV(bp, sp));	// 71181 mov     bp, sp ;~ 2116:0027
cs=0x2116;eip=0x000029; 	X(PUSH(si));	// 71182 push    si ;~ 2116:0029
cs=0x2116;eip=0x00002a; 	X(PUSH(di));	// 71183 push    di ;~ 2116:002A
cs=0x2116;eip=0x00002b; 	X(PUSH(ds));	// 71184 push    ds ;~ 2116:002B
cs=0x2116;eip=0x00002c; 	T(MOV(ax, 0x5200));	// 71185 mov     ax, 5200h ;~ 2116:002C
cs=0x2116;eip=0x00002f; 	R(_INT(0x21));	// 71186 int     21h             ; DOS - 2+ internal - GET LIST OF LISTS ;~ 2116:002F
cs=0x2116;eip=0x000031; 	T(MOV(cx, *(dw*)(raddr(es,bx-2))));	// 71188 mov     cx, es:[bx-2] ;~ 2116:0031
cs=0x2116;eip=0x000035; 	T(XOR(si, si));	// 71189 xor     si, si ;~ 2116:0035
cs=0x2116;eip=0x000037; 	T(XOR(dx, dx));	// 71190 xor     dx, dx ;~ 2116:0037
loc_2f779:
	// 8966 
cs=0x2116;eip=0x000039; 	T(MOV(ds, cx));	// 71193 mov     ds, cx ;~ 2116:0039
cs=0x2116;eip=0x00003b; 	T(MOV(bx, word_479b1));	// 71194 mov     bx, word_479B1 ;~ 2116:003B
cs=0x2116;eip=0x00003f; 	T(MOV(ax, word_479b3));	// 71195 mov     ax, word_479B3 ;~ 2116:003F
cs=0x2116;eip=0x000042; 	T(INC(ax));	// 71196 inc     ax ;~ 2116:0042
cs=0x2116;eip=0x000043; 	T(TEST(bx, bx));	// 71197 test    bx, bx ;~ 2116:0043
cs=0x2116;eip=0x000045; 	R(JNZ(loc_2f78c));	// 71198 jnz     short loc_2F78C ;~ 2116:0045
cs=0x2116;eip=0x000047; 	T(ADD(dx, ax));	// 71199 add     dx, ax ;~ 2116:0047
cs=0x2116;eip=0x000049; 	R(JMP(loc_2f78e));	// 71200 jmp     short loc_2F78E ;~ 2116:0049
loc_2f78c:
	// 8967 
cs=0x2116;eip=0x00004c; 	T(MOV(di, bx));	// 71205 mov     di, bx ;~ 2116:004C
loc_2f78e:
	// 8968 
cs=0x2116;eip=0x00004e; 	T(CMP(ax, 1));	// 71208 cmp     ax, 1 ;~ 2116:004E
cs=0x2116;eip=0x000051; 	R(JBE(loc_2f7d8));	// 71209 jbe     short loc_2F7D8 ;~ 2116:0051
cs=0x2116;eip=0x000053; 	T(INC(si));	// 71210 inc     si ;~ 2116:0053
cs=0x2116;eip=0x000054; 	T(CMP(si, 0x7D0));	// 71211 cmp     si, 7D0h ;~ 2116:0054
cs=0x2116;eip=0x000058; 	R(JNC(loc_2f7d8));	// 71212 jnb     short loc_2F7D8 ;~ 2116:0058
cs=0x2116;eip=0x00005a; 	T(ADD(cx, ax));	// 71213 add     cx, ax ;~ 2116:005A
cs=0x2116;eip=0x00005c; 	T(CMP(byte_479b0, 0x5A));	// 71214 cmp     byte_479B0, 5Ah ; 'Z' ;~ 2116:005C
cs=0x2116;eip=0x000061; 	R(JNZ(loc_2f779));	// 71215 jnz     short loc_2F779 ;~ 2116:0061
cs=0x2116;eip=0x000063; 	T(TEST(bx, bx));	// 71216 test    bx, bx ;~ 2116:0063
cs=0x2116;eip=0x000065; 	R(JNZ(loc_2f7d8));	// 71217 jnz     short loc_2F7D8 ;~ 2116:0065
cs=0x2116;eip=0x000067; 	T(DEC(ax));	// 71218 dec     ax ;~ 2116:0067
cs=0x2116;eip=0x000068; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 71219 sub     ax, [bp+arg_0] ;~ 2116:0068
cs=0x2116;eip=0x00006b; 	R(JBE(loc_2f7d8));	// 71220 jbe     short loc_2F7D8 ;~ 2116:006B
cs=0x2116;eip=0x00006d; 	T(MOV(cx, ds));	// 71221 mov     cx, ds ;~ 2116:006D
cs=0x2116;eip=0x00006f; 	T(ADD(cx, ax));	// 71222 add     cx, ax ;~ 2116:006F
cs=0x2116;eip=0x000071; 	T(MOV(es, cx));	// 71223 mov     es, cx ;~ 2116:0071
cs=0x2116;eip=0x000073; 	X(MOV(*(raddr(es,0)), 0x5A));	// 71224 mov     byte ptr es:0, 5Ah ; 'Z' ;~ 2116:0073
cs=0x2116;eip=0x000079; 	X(PUSH(ax));	// 71225 push    ax ;~ 2116:0079
cs=0x2116;eip=0x00007a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 71226 mov     ax, [bp+arg_0] ;~ 2116:007A
cs=0x2116;eip=0x00007d; 	X(MOV(*(dw*)(raddr(es,3)), ax));	// 71227 mov     es:3, ax ;~ 2116:007D
cs=0x2116;eip=0x000081; 	X(POP(ax));	// 71228 pop     ax ;~ 2116:0081
cs=0x2116;eip=0x000082; 	X(MOV(*(dw*)(raddr(es,1)), di));	// 71229 mov     es:1, di ;~ 2116:0082
cs=0x2116;eip=0x000087; 	T(DEC(ax));	// 71230 dec     ax ;~ 2116:0087
cs=0x2116;eip=0x000088; 	X(MOV(word_479b3, ax));	// 71231 mov     word_479B3, ax ;~ 2116:0088
cs=0x2116;eip=0x00008b; 	X(MOV(byte_479b0, 0x4D));	// 71232 mov     byte_479B0, 4Dh ; 'M' ;~ 2116:008B
cs=0x2116;eip=0x000090; 	X(POP(ds));	// 71233 pop     ds ;~ 2116:0090
cs=0x2116;eip=0x000091; 	X(POP(di));	// 71234 pop     di ;~ 2116:0091
cs=0x2116;eip=0x000092; 	X(POP(si));	// 71235 pop     si ;~ 2116:0092
cs=0x2116;eip=0x000093; 	X(POP(bp));	// 71236 pop     bp ;~ 2116:0093
cs=0x2116;eip=0x000094; 	T(MOV(ax, es));	// 71237 mov     ax, es ;~ 2116:0094
cs=0x2116;eip=0x000096; 	T(INC(ax));	// 71238 inc     ax ;~ 2116:0096
cs=0x2116;eip=0x000097; 	R(RETF(0));	// 71239 retf ;~ 2116:0097
loc_2f7d8:
	// 8969 
cs=0x2116;eip=0x000098; 	X(POP(ds));	// 71244 pop     ds ;~ 2116:0098
cs=0x2116;eip=0x000099; 	X(POP(di));	// 71245 pop     di ;~ 2116:0099
cs=0x2116;eip=0x00009a; 	X(POP(si));	// 71246 pop     si ;~ 2116:009A
cs=0x2116;eip=0x00009b; 	X(POP(bp));	// 71247 pop     bp ;~ 2116:009B
cs=0x2116;eip=0x00009c; 	T(XOR(ax, ax));	// 71248 xor     ax, ax ;~ 2116:009C
cs=0x2116;eip=0x00009e; 	R(RETF(0));	// 71249 retf ;~ 2116:009E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2f779: 	goto loc_2f779;
        case m2c::kloc_2f78c: 	goto loc_2f78c;
        case m2c::kloc_2f78e: 	goto loc_2f78e;
        case m2c::kloc_2f7d8: 	goto loc_2f7d8;
        case m2c::klocret_2f765: 	goto locret_2f765;
        case m2c::ksub_2f74d: 	goto sub_2f74d;
        case m2c::ksub_2f750: 	goto sub_2f750;
        case m2c::ksub_2f766: 	goto sub_2f766;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

