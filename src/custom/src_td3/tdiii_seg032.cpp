/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group22(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group22:
    _begin:
sub_28f32:
	// 48141 
cs=0x1a95;eip=0x000002; 	X(PUSH(bp));	// 48143 push    bp ;~ 1A95:0002
ret_1a95_3:
	// 7842 
cs=0x1a95;eip=0x000003; 	T(MOV(bp, sp));	// 48144 mov     bp, sp ;~ 1A95:0003
cs=0x1a95;eip=0x000005; 	X(PUSH(si));	// 48145 push    si ;~ 1A95:0005
cs=0x1a95;eip=0x000006; 	X(PUSH(di));	// 48146 push    di ;~ 1A95:0006
cs=0x1a95;eip=0x000007; 	T(CLD);	// 48147 cld ;~ 1A95:0007
cs=0x1a95;eip=0x000008; 	T(bx = offset(dseg,word_2bf00));	// 48148 lea     bx, word_2BF00 ;~ 1A95:0008
cs=0x1a95;eip=0x00000c; 	T(ADD(bx, word_37b84));	// 48149 add     bx, word_37B84 ;~ 1A95:000C
cs=0x1a95;eip=0x000010; __disp=*(dw*)(raddr(cs,bx));
	R(JMP(__dispatch_call));	// 48150 jmp     word ptr cs:[bx] ;~ 1A95:0010
seg032_proc:
	// 48155 
loc_28f43:
	// 7843 
cs=0x1a95;eip=0x000013; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 48156 mov     si, [bp+6] ;~ 1A95:0013
cs=0x1a95;eip=0x000016; 	T(XOR(cx, cx));	// 48157 xor     cx, cx ;~ 1A95:0016
cs=0x1a95;eip=0x000018; 	T(MOV(dx, 0x3DA));	// 48158 mov     dx, 3DAh ;~ 1A95:0018
loc_28f4b:
	// 7844 
cs=0x1a95;eip=0x00001b; 	R(IN(al, dx));	// 48161 in      al, dx          ; Video status bits: ;~ 1A95:001B
cs=0x1a95;eip=0x00001c; 	T(MOV(al, cl));	// 48166 mov     al, cl ;~ 1A95:001C
cs=0x1a95;eip=0x00001e; 	T(OR(al, 0x10));	// 48167 or      al, 10h ;~ 1A95:001E
cs=0x1a95;eip=0x000020; 	R(OUT(dx, al));	// 48168 out     dx, al          ; Video: bits 0-1 control ;~ 1A95:0020
cs=0x1a95;eip=0x000021; 	T(LODSW);	// 48170 lodsw ;~ 1A95:0021
cs=0x1a95;eip=0x000022; 	T(ADD(dl, 4));	// 48171 add     dl, 4 ;~ 1A95:0022
cs=0x1a95;eip=0x000025; 	R(OUT(dx, al));	// 48172 out     dx, al ;~ 1A95:0025
cs=0x1a95;eip=0x000026; 	T(SUB(dl, 4));	// 48173 sub     dl, 4 ;~ 1A95:0026
cs=0x1a95;eip=0x000029; 	T(INC(cx));	// 48174 inc     cx ;~ 1A95:0029
cs=0x1a95;eip=0x00002a; 	T(CMP(cx, 0x10));	// 48175 cmp     cx, 10h ;~ 1A95:002A
cs=0x1a95;eip=0x00002d; 	R(JL(loc_28f4b));	// 48176 jl      short loc_28F4B ;~ 1A95:002D
cs=0x1a95;eip=0x00002f; 	R(JMP(loc_28fea));	// 48177 jmp     loc_28FEA ;~ 1A95:002F
loc_28f62:
	// 7845 
cs=0x1a95;eip=0x000032; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 48181 mov     si, [bp+6] ;~ 1A95:0032
cs=0x1a95;eip=0x000035; 	T(di = offset(dseg,unk_2bf2a));	// 48182 lea     di, unk_2BF2A ;~ 1A95:0035
cs=0x1a95;eip=0x000039; 	T(MOV(dx, di));	// 48183 mov     dx, di ;~ 1A95:0039
cs=0x1a95;eip=0x00003b; 	T(MOV(ax, cs));	// 48184 mov     ax, cs ;~ 1A95:003B
cs=0x1a95;eip=0x00003d; 	T(MOV(es, ax));	// 48185 mov     es, ax ;~ 1A95:003D
cs=0x1a95;eip=0x00003f; 	T(MOV(cx, 0x10));	// 48187 mov     cx, 10h ;~ 1A95:003F
loc_28f72:
	// 7846 
cs=0x1a95;eip=0x000042; 	T(LODSW);	// 48190 lodsw ;~ 1A95:0042
cs=0x1a95;eip=0x000043; 	X(STOSB);	// 48191 stosb ;~ 1A95:0043
cs=0x1a95;eip=0x000044; 	R(LOOP(loc_28f72));	// 48192 loop    loc_28F72 ;~ 1A95:0044
cs=0x1a95;eip=0x000046; 	T(MOV(ah, 0x10));	// 48193 mov     ah, 10h ;~ 1A95:0046
cs=0x1a95;eip=0x000048; 	T(MOV(al, 2));	// 48194 mov     al, 2 ;~ 1A95:0048
cs=0x1a95;eip=0x00004a; 	R(_INT(0x10));	// 48195 int     10h             ; - VIDEO - SET ALL PALETTE REGISTERS (Jr, PS, TANDY 1000, EGA, VGA) ;~ 1A95:004A
cs=0x1a95;eip=0x00004c; 	R(JMP(loc_28fea));	// 48197 jmp     short loc_28FEA ;~ 1A95:004C
loc_28f7e:
	// 7847 
cs=0x1a95;eip=0x00004e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 48201 mov     bx, [bp+6] ;~ 1A95:004E
cs=0x1a95;eip=0x000051; 	T(di = offset(dseg,unk_2bf3b));	// 48202 lea     di, unk_2BF3B ;~ 1A95:0051
cs=0x1a95;eip=0x000055; 	T(dx = offset(dseg,unk_381c0));	// 48203 lea     dx, unk_381C0 ;~ 1A95:0055
cs=0x1a95;eip=0x000059; 	T(MOV(ax, cs));	// 48204 mov     ax, cs ;~ 1A95:0059
cs=0x1a95;eip=0x00005b; 	T(MOV(es, ax));	// 48205 mov     es, ax ;~ 1A95:005B
cs=0x1a95;eip=0x00005d; 	T(MOV(cx, 0x10));	// 48206 mov     cx, 10h ;~ 1A95:005D
loc_28f90:
	// 7848 
cs=0x1a95;eip=0x000060; 	X(PUSH(cx));	// 48209 push    cx ;~ 1A95:0060
cs=0x1a95;eip=0x000061; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 48210 mov     ax, [bx] ;~ 1A95:0061
cs=0x1a95;eip=0x000063; 	T(MOV(cl, al));	// 48211 mov     cl, al ;~ 1A95:0063
cs=0x1a95;eip=0x000065; 	T(AND(cl, 1));	// 48212 and     cl, 1 ;~ 1A95:0065
cs=0x1a95;eip=0x000068; 	T(SHR(al, 1));	// 48213 shr     al, 1 ;~ 1A95:0068
cs=0x1a95;eip=0x00006a; 	T(MOV(ch, al));	// 48214 mov     ch, al ;~ 1A95:006A
cs=0x1a95;eip=0x00006c; 	T(AND(ch, 1));	// 48215 and     ch, 1 ;~ 1A95:006C
cs=0x1a95;eip=0x00006f; 	T(SHR(al, 1));	// 48216 shr     al, 1 ;~ 1A95:006F
cs=0x1a95;eip=0x000071; 	T(MOV(ah, al));	// 48217 mov     ah, al ;~ 1A95:0071
cs=0x1a95;eip=0x000073; 	T(AND(ah, 1));	// 48218 and     ah, 1 ;~ 1A95:0073
cs=0x1a95;eip=0x000076; 	T(AND(al, 0x0FE));	// 48219 and     al, 0FEh ;~ 1A95:0076
cs=0x1a95;eip=0x000078; 	T(OR(cl, al));	// 48220 or      cl, al ;~ 1A95:0078
cs=0x1a95;eip=0x00007a; 	T(AND(cl, 3));	// 48221 and     cl, 3 ;~ 1A95:007A
cs=0x1a95;eip=0x00007d; 	T(SHR(al, 1));	// 48222 shr     al, 1 ;~ 1A95:007D
cs=0x1a95;eip=0x00007f; 	T(AND(al, 0x0FE));	// 48223 and     al, 0FEh ;~ 1A95:007F
cs=0x1a95;eip=0x000081; 	T(OR(ch, al));	// 48224 or      ch, al ;~ 1A95:0081
cs=0x1a95;eip=0x000083; 	T(AND(ch, 3));	// 48225 and     ch, 3 ;~ 1A95:0083
cs=0x1a95;eip=0x000086; 	T(SHR(al, 1));	// 48226 shr     al, 1 ;~ 1A95:0086
cs=0x1a95;eip=0x000088; 	T(AND(al, 0x0FE));	// 48227 and     al, 0FEh ;~ 1A95:0088
cs=0x1a95;eip=0x00008a; 	T(OR(ah, al));	// 48228 or      ah, al ;~ 1A95:008A
cs=0x1a95;eip=0x00008c; 	T(AND(ah, 3));	// 48229 and     ah, 3 ;~ 1A95:008C
cs=0x1a95;eip=0x00008f; 	T(MOV(si, dx));	// 48230 mov     si, dx ;~ 1A95:008F
cs=0x1a95;eip=0x000091; 	T(MOV(al, ah));	// 48231 mov     al, ah ;~ 1A95:0091
cs=0x1a95;eip=0x000093; 	T(CBW);	// 48232 cbw ;~ 1A95:0093
cs=0x1a95;eip=0x000094; 	T(ADD(si, ax));	// 48233 add     si, ax ;~ 1A95:0094
cs=0x1a95;eip=0x000096; 	X(MOVSB);	// 48234 movsb ;~ 1A95:0096
cs=0x1a95;eip=0x000097; 	T(MOV(si, dx));	// 48235 mov     si, dx ;~ 1A95:0097
cs=0x1a95;eip=0x000099; 	T(MOV(al, ch));	// 48236 mov     al, ch ;~ 1A95:0099
cs=0x1a95;eip=0x00009b; 	T(ADD(si, ax));	// 48237 add     si, ax ;~ 1A95:009B
cs=0x1a95;eip=0x00009d; 	X(MOVSB);	// 48238 movsb ;~ 1A95:009D
cs=0x1a95;eip=0x00009e; 	T(MOV(si, dx));	// 48239 mov     si, dx ;~ 1A95:009E
cs=0x1a95;eip=0x0000a0; 	T(MOV(al, cl));	// 48240 mov     al, cl ;~ 1A95:00A0
cs=0x1a95;eip=0x0000a2; 	T(ADD(si, ax));	// 48241 add     si, ax ;~ 1A95:00A2
cs=0x1a95;eip=0x0000a4; 	X(MOVSB);	// 48242 movsb ;~ 1A95:00A4
cs=0x1a95;eip=0x0000a5; 	T(ADD(bx, 2));	// 48243 add     bx, 2 ;~ 1A95:00A5
cs=0x1a95;eip=0x0000a8; 	X(POP(cx));	// 48244 pop     cx ;~ 1A95:00A8
cs=0x1a95;eip=0x0000a9; 	R(LOOP(loc_28f90));	// 48245 loop    loc_28F90 ;~ 1A95:00A9
cs=0x1a95;eip=0x0000ab; 	T(MOV(ah, 0x10));	// 48246 mov     ah, 10h ;~ 1A95:00AB
cs=0x1a95;eip=0x0000ad; 	T(MOV(al, 0x12));	// 48247 mov     al, 12h ;~ 1A95:00AD
cs=0x1a95;eip=0x0000af; 	T(XOR(bx, bx));	// 48248 xor     bx, bx ;~ 1A95:00AF
cs=0x1a95;eip=0x0000b1; 	T(MOV(cx, 0x10));	// 48249 mov     cx, 10h ;~ 1A95:00B1
cs=0x1a95;eip=0x0000b4; 	T(dx = offset(dseg,unk_2bf3b));	// 48250 lea     dx, unk_2BF3B ;~ 1A95:00B4
cs=0x1a95;eip=0x0000b8; 	R(_INT(0x10));	// 48251 int     10h             ; - VIDEO - SET BLOCK OF DAC REGISTERS (EGA, VGA/MCGA) ;~ 1A95:00B8
loc_28fea:
	// 7849 
cs=0x1a95;eip=0x0000ba; 	T(XOR(ax, ax));	// 48259 xor     ax, ax ;~ 1A95:00BA
cs=0x1a95;eip=0x0000bc; 	X(POP(di));	// 48260 pop     di ;~ 1A95:00BC
cs=0x1a95;eip=0x0000bd; 	X(POP(si));	// 48261 pop     si ;~ 1A95:00BD
cs=0x1a95;eip=0x0000be; 	X(POP(bp));	// 48262 pop     bp ;~ 1A95:00BE
cs=0x1a95;eip=0x0000bf; 	R(RETF(0));	// 48263 retf ;~ 1A95:00BF

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_28f43: 	goto loc_28f43;
        case m2c::kloc_28f4b: 	goto loc_28f4b;
        case m2c::kloc_28f62: 	goto loc_28f62;
        case m2c::kloc_28f72: 	goto loc_28f72;
        case m2c::kloc_28f7e: 	goto loc_28f7e;
        case m2c::kloc_28f90: 	goto loc_28f90;
        case m2c::kloc_28fea: 	goto loc_28fea;
        case m2c::kret_1a95_3: 	goto ret_1a95_3;
        case m2c::ksub_28f32: 	goto sub_28f32;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

