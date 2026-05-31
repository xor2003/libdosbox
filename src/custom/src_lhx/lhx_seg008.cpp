/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group8:
    _begin:
sub_2ecf0:
	// 69137 
#undef arg_0
#define arg_0 6
	// 69139 arg_0           = word ptr  6 ;~ 2071:0000
#undef arg_2
#define arg_2 8
	// 69140 arg_2           = word ptr  8 ;~ 2071:0000
#undef arg_4
#define arg_4 0x0A
	// 69141 arg_4           = word ptr  0Ah ;~ 2071:0000
cs=0x2071;eip=0x000000; 	X(PUSH(bp));	// 69143 push    bp ;~ 2071:0000
cs=0x2071;eip=0x000001; 	T(MOV(bp, sp));	// 69144 mov     bp, sp ;~ 2071:0001
cs=0x2071;eip=0x000003; 	X(PUSH(si));	// 69145 push    si ;~ 2071:0003
cs=0x2071;eip=0x000004; 	X(PUSH(di));	// 69146 push    di ;~ 2071:0004
cs=0x2071;eip=0x000005; 	T(MOV(dx, 0x3D4));	// 69147 mov     dx, 3D4h ;~ 2071:0005
cs=0x2071;eip=0x000008; 	R(CALL(sub_2ed8e,0));	// 69148 call    sub_2ED8E ;~ 2071:0008
cs=0x2071;eip=0x00000b; 	X(MOV(*(dw*)((&unk_48068)), ax));	// 69149 mov     word ptr unk_48068, ax ;~ 2071:000B
cs=0x2071;eip=0x00000e; 	T(MOV(dx, 0x3B4));	// 69150 mov     dx, 3B4h ;~ 2071:000E
cs=0x2071;eip=0x000011; 	R(CALL(sub_2ed8e,0));	// 69151 call    sub_2ED8E ;~ 2071:0011
cs=0x2071;eip=0x000014; 	X(MOV(*(dw*)((&unk_48066)), ax));	// 69152 mov     word ptr unk_48066, ax ;~ 2071:0014
cs=0x2071;eip=0x000017; 	T(TEST(ax, ax));	// 69153 test    ax, ax ;~ 2071:0017
cs=0x2071;eip=0x000019; 	R(JZ(loc_2ed7a));	// 69154 jz      short loc_2ED7A ;~ 2071:0019
cs=0x2071;eip=0x00001b; 	X(PUSH(ds));	// 69155 push    ds ;~ 2071:001B
cs=0x2071;eip=0x00001c; 	X(PUSH(es));	// 69156 push    es ;~ 2071:001C
cs=0x2071;eip=0x00001d; 	T(MOV(ax, 0x0B000));	// 69157 mov     ax, 0B000h ;~ 2071:001D
cs=0x2071;eip=0x000020; 	T(MOV(ds, ax));	// 69158 mov     ds, ax ;~ 2071:0020
cs=0x2071;eip=0x000022; 	T(MOV(ax, ss));	// 69160 mov     ax, ss ;~ 2071:0022
cs=0x2071;eip=0x000024; 	T(MOV(es, ax));	// 69161 mov     es, ax ;~ 2071:0024
cs=0x2071;eip=0x000026; 	T(MOV(si, 0x4000));	// 69162 mov     si, 4000h ;~ 2071:0026
cs=0x2071;eip=0x000029; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 69163 mov     di, [bp+arg_0] ;~ 2071:0029
cs=0x2071;eip=0x00002c; 	T(MOV(cx, 0x20));	// 69164 mov     cx, 20h ; ' ' ;~ 2071:002C
loc_2ed1f:
	// 8856 
cs=0x2071;eip=0x00002f; 	X(MOVSW);	// 69167 movsw ;~ 2071:002F
cs=0x2071;eip=0x000030; 	T(ADD(si, 0x0FE));	// 69168 add     si, 0FEh ; 'ş' ;~ 2071:0030
cs=0x2071;eip=0x000034; 	R(LOOP(loc_2ed1f));	// 69169 loop    loc_2ED1F ;~ 2071:0034
cs=0x2071;eip=0x000036; 	T(MOV(ax, 0x0B000));	// 69170 mov     ax, 0B000h ;~ 2071:0036
cs=0x2071;eip=0x000039; 	T(MOV(es, ax));	// 69171 mov     es, ax ;~ 2071:0039
cs=0x2071;eip=0x00003b; 	T(MOV(ds, ax));	// 69173 mov     ds, ax ;~ 2071:003B
cs=0x2071;eip=0x00003d; 	T(MOV(di, 0x4000));	// 69174 mov     di, 4000h ;~ 2071:003D
cs=0x2071;eip=0x000040; 	T(MOV(cx, 0x20));	// 69175 mov     cx, 20h ; ' ' ;~ 2071:0040
cs=0x2071;eip=0x000043; 	T(MOV(ax, 0));	// 69176 mov     ax, 0 ;~ 2071:0043
loc_2ed36:
	// 8857 
cs=0x2071;eip=0x000046; 	X(STOSW);	// 69179 stosw ;~ 2071:0046
cs=0x2071;eip=0x000047; 	T(INC(ax));	// 69180 inc     ax ;~ 2071:0047
cs=0x2071;eip=0x000048; 	T(ADD(di, 0x0FE));	// 69181 add     di, 0FEh ; 'ş' ;~ 2071:0048
cs=0x2071;eip=0x00004c; 	R(LOOP(loc_2ed36));	// 69182 loop    loc_2ED36 ;~ 2071:004C
cs=0x2071;eip=0x00004e; 	T(MOV(si, 0x4000));	// 69183 mov     si, 4000h ;~ 2071:004E
cs=0x2071;eip=0x000051; 	T(MOV(dx, 0));	// 69184 mov     dx, 0 ;~ 2071:0051
cs=0x2071;eip=0x000054; 	T(MOV(cx, 0x20));	// 69185 mov     cx, 20h ; ' ' ;~ 2071:0054
loc_2ed47:
	// 8858 
cs=0x2071;eip=0x000057; 	T(LODSW);	// 69188 lodsw ;~ 2071:0057
cs=0x2071;eip=0x000058; 	T(CMP(ax, dx));	// 69189 cmp     ax, dx ;~ 2071:0058
cs=0x2071;eip=0x00005a; 	R(JNZ(loc_2ed71));	// 69190 jnz     short loc_2ED71 ;~ 2071:005A
cs=0x2071;eip=0x00005c; 	T(INC(dx));	// 69191 inc     dx ;~ 2071:005C
cs=0x2071;eip=0x00005d; 	T(ADD(si, 0x0FE));	// 69192 add     si, 0FEh ; 'ş' ;~ 2071:005D
cs=0x2071;eip=0x000061; 	R(LOOP(loc_2ed47));	// 69193 loop    loc_2ED47 ;~ 2071:0061
loc_2ed53:
	// 8859 
cs=0x2071;eip=0x000063; 	T(MOV(ax, ss));	// 69196 mov     ax, ss ;~ 2071:0063
cs=0x2071;eip=0x000065; 	T(MOV(ds, ax));	// 69197 mov     ds, ax ;~ 2071:0065
cs=0x2071;eip=0x000067; 	T(MOV(ax, 0x0B000));	// 69199 mov     ax, 0B000h ;~ 2071:0067
cs=0x2071;eip=0x00006a; 	T(MOV(es, ax));	// 69200 mov     es, ax ;~ 2071:006A
cs=0x2071;eip=0x00006c; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 69201 mov     si, [bp+arg_0] ;~ 2071:006C
cs=0x2071;eip=0x00006f; 	T(MOV(di, 0x4000));	// 69202 mov     di, 4000h ;~ 2071:006F
cs=0x2071;eip=0x000072; 	T(MOV(cx, 0x20));	// 69203 mov     cx, 20h ; ' ' ;~ 2071:0072
loc_2ed65:
	// 8860 
cs=0x2071;eip=0x000075; 	X(MOVSW);	// 69206 movsw ;~ 2071:0075
cs=0x2071;eip=0x000076; 	T(ADD(di, 0x0FE));	// 69207 add     di, 0FEh ; 'ş' ;~ 2071:0076
cs=0x2071;eip=0x00007a; 	R(LOOP(loc_2ed65));	// 69208 loop    loc_2ED65 ;~ 2071:007A
cs=0x2071;eip=0x00007c; 	X(POP(es));	// 69209 pop     es ;~ 2071:007C
cs=0x2071;eip=0x00007d; 	X(POP(ds));	// 69211 pop     ds ;~ 2071:007D
cs=0x2071;eip=0x00007e; 	R(JMP(loc_2ed7a));	// 69212 jmp     short loc_2ED7A ;~ 2071:007E
loc_2ed71:
	// 8861 
cs=0x2071;eip=0x000081; 	X(MOV(*(dw*)(raddr(ss,0x6B6)), 0));	// 69218 mov     word ptr ss:6B6h, 0 ;~ 2071:0081
cs=0x2071;eip=0x000088; 	R(JMP(loc_2ed53));	// 69219 jmp     short loc_2ED53 ;~ 2071:0088
loc_2ed7a:
	// 8862 
cs=0x2071;eip=0x00008a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 69224 mov     bx, [bp+arg_2] ;~ 2071:008A
cs=0x2071;eip=0x00008d; 	T(MOV(ax, *(dw*)((&unk_48066))));	// 69225 mov     ax, word ptr unk_48066 ;~ 2071:008D
cs=0x2071;eip=0x000090; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 69226 mov     [bx], ax ;~ 2071:0090
cs=0x2071;eip=0x000092; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 69227 mov     bx, [bp+arg_4] ;~ 2071:0092
cs=0x2071;eip=0x000095; 	T(MOV(ax, *(dw*)((&unk_48068))));	// 69228 mov     ax, word ptr unk_48068 ;~ 2071:0095
cs=0x2071;eip=0x000098; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 69229 mov     [bx], ax ;~ 2071:0098
cs=0x2071;eip=0x00009a; 	X(POP(di));	// 69230 pop     di ;~ 2071:009A
cs=0x2071;eip=0x00009b; 	X(POP(si));	// 69231 pop     si ;~ 2071:009B
cs=0x2071;eip=0x00009c; 	X(POP(bp));	// 69232 pop     bp ;~ 2071:009C
cs=0x2071;eip=0x00009d; 	R(RETF(0));	// 69233 retf ;~ 2071:009D
sub_2ed8e:
	// 69240 
cs=0x2071;eip=0x00009e; 	R(CALL(sub_2edbc,0));	// 69242 call    sub_2EDBC ;~ 2071:009E
cs=0x2071;eip=0x0000a1; 	X(PUSH(bx));	// 69243 push    bx ;~ 2071:00A1
cs=0x2071;eip=0x0000a2; 	T(INC(bx));	// 69244 inc     bx ;~ 2071:00A2
cs=0x2071;eip=0x0000a3; 	R(CALL(sub_2edab,0));	// 69245 call    sub_2EDAB ;~ 2071:00A3
cs=0x2071;eip=0x0000a6; 	R(CALL(sub_2edbc,0));	// 69246 call    sub_2EDBC ;~ 2071:00A6
cs=0x2071;eip=0x0000a9; 	T(MOV(cx, bx));	// 69247 mov     cx, bx ;~ 2071:00A9
cs=0x2071;eip=0x0000ab; 	X(POP(bx));	// 69248 pop     bx ;~ 2071:00AB
cs=0x2071;eip=0x0000ac; 	R(CALL(sub_2edab,0));	// 69249 call    sub_2EDAB ;~ 2071:00AC
cs=0x2071;eip=0x0000af; 	T(SUB(bx, cx));	// 69250 sub     bx, cx ;~ 2071:00AF
cs=0x2071;eip=0x0000b1; 	T(INC(bx));	// 69251 inc     bx ;~ 2071:00B1
cs=0x2071;eip=0x0000b2; 	R(JZ(loc_2eda7));	// 69252 jz      short loc_2EDA7 ;~ 2071:00B2
cs=0x2071;eip=0x0000b4; 	T(SUB(ax, ax));	// 69253 sub     ax, ax ;~ 2071:00B4
cs=0x2071;eip=0x0000b6; 	R(RETN(0));	// 69254 retn ;~ 2071:00B6
loc_2eda7:
	// 8863 
cs=0x2071;eip=0x0000b7; 	T(MOV(ax, 0x0FFFF));	// 69258 mov     ax, 0FFFFh ;~ 2071:00B7
cs=0x2071;eip=0x0000ba; 	R(RETN(0));	// 69259 retn ;~ 2071:00BA
sub_2edab:
	// 69266 
cs=0x2071;eip=0x0000bb; 	T(MOV(al, 0x0F));	// 69268 mov     al, 0Fh ;~ 2071:00BB
cs=0x2071;eip=0x0000bd; 	R(OUT(dx, al));	// 69269 out     dx, al ;~ 2071:00BD
cs=0x2071;eip=0x0000be; 	T(INC(dx));	// 69270 inc     dx ;~ 2071:00BE
cs=0x2071;eip=0x0000bf; 	T(MOV(ax, bx));	// 69271 mov     ax, bx ;~ 2071:00BF
cs=0x2071;eip=0x0000c1; 	R(OUT(dx, al));	// 69272 out     dx, al ;~ 2071:00C1
cs=0x2071;eip=0x0000c2; 	T(DEC(dx));	// 69273 dec     dx ;~ 2071:00C2
cs=0x2071;eip=0x0000c3; 	T(MOV(al, 0x0E));	// 69274 mov     al, 0Eh ;~ 2071:00C3
cs=0x2071;eip=0x0000c5; 	R(OUT(dx, al));	// 69275 out     dx, al ;~ 2071:00C5
cs=0x2071;eip=0x0000c6; 	T(INC(dx));	// 69276 inc     dx ;~ 2071:00C6
cs=0x2071;eip=0x0000c7; 	T(MOV(al, ah));	// 69277 mov     al, ah ;~ 2071:00C7
cs=0x2071;eip=0x0000c9; 	R(OUT(dx, al));	// 69278 out     dx, al ;~ 2071:00C9
cs=0x2071;eip=0x0000ca; 	T(DEC(dx));	// 69279 dec     dx ;~ 2071:00CA
cs=0x2071;eip=0x0000cb; 	R(RETN(0));	// 69280 retn ;~ 2071:00CB
sub_2edbc:
	// 69287 
cs=0x2071;eip=0x0000cc; 	T(MOV(al, 0x0F));	// 69289 mov     al, 0Fh ;~ 2071:00CC
cs=0x2071;eip=0x0000ce; 	R(OUT(dx, al));	// 69290 out     dx, al ;~ 2071:00CE
cs=0x2071;eip=0x0000cf; 	T(INC(dx));	// 69291 inc     dx ;~ 2071:00CF
cs=0x2071;eip=0x0000d0; 	R(IN(al, dx));	// 69292 in      al, dx ;~ 2071:00D0
cs=0x2071;eip=0x0000d1; 	T(MOV(bl, al));	// 69293 mov     bl, al ;~ 2071:00D1
	// 69294 nop ;~ 2071:00D3
	// 69295 nop ;~ 2071:00D4
	// 69296 nop ;~ 2071:00D5
	// 69297 nop ;~ 2071:00D6
	// 69298 nop ;~ 2071:00D7
	// 69299 nop ;~ 2071:00D8
	// 69300 nop ;~ 2071:00D9
	// 69301 nop ;~ 2071:00DA
	// 69302 nop ;~ 2071:00DB
	// 69303 nop ;~ 2071:00DC
cs=0x2071;eip=0x0000dd; 	T(DEC(dx));	// 69304 dec     dx ;~ 2071:00DD
cs=0x2071;eip=0x0000de; 	T(MOV(al, 0x0E));	// 69305 mov     al, 0Eh ;~ 2071:00DE
cs=0x2071;eip=0x0000e0; 	R(OUT(dx, al));	// 69306 out     dx, al ;~ 2071:00E0
cs=0x2071;eip=0x0000e1; 	T(INC(dx));	// 69307 inc     dx ;~ 2071:00E1
cs=0x2071;eip=0x0000e2; 	R(IN(al, dx));	// 69308 in      al, dx ;~ 2071:00E2
cs=0x2071;eip=0x0000e3; 	T(MOV(bh, al));	// 69309 mov     bh, al ;~ 2071:00E3
cs=0x2071;eip=0x0000e5; 	T(DEC(dx));	// 69310 dec     dx ;~ 2071:00E5
cs=0x2071;eip=0x0000e6; 	R(RETN(0));	// 69311 retn ;~ 2071:00E6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2ed1f: 	goto loc_2ed1f;
        case m2c::kloc_2ed36: 	goto loc_2ed36;
        case m2c::kloc_2ed47: 	goto loc_2ed47;
        case m2c::kloc_2ed53: 	goto loc_2ed53;
        case m2c::kloc_2ed65: 	goto loc_2ed65;
        case m2c::kloc_2ed71: 	goto loc_2ed71;
        case m2c::kloc_2ed7a: 	goto loc_2ed7a;
        case m2c::kloc_2eda7: 	goto loc_2eda7;
        case m2c::ksub_2ecf0: 	goto sub_2ecf0;
        case m2c::ksub_2ed8e: 	goto sub_2ed8e;
        case m2c::ksub_2edab: 	goto sub_2edab;
        case m2c::ksub_2edbc: 	goto sub_2edbc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

