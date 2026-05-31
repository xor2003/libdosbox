/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group27(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group27:
    _begin:
sub_2bd8e:
	// 56108 
cs=0x1d7a;eip=0x00000e; 	X(PUSH(cx));	// 56110 push    cx ;~ 1D7A:000E
ret_1d7a_f:
	// 8509 
cs=0x1d7a;eip=0x00000f; 	X(PUSH(dx));	// 56111 push    dx ;~ 1D7A:000F
cs=0x1d7a;eip=0x000010; 	T(MOV(dx, 0x388));	// 56112 mov     dx, 388h ;~ 1D7A:0010
cs=0x1d7a;eip=0x000013; 	R(OUT(dx, al));	// 56113 out     dx, al ;~ 1D7A:0013
cs=0x1d7a;eip=0x000014; 	T(MOV(cx, 6));	// 56114 mov     cx, 6 ;~ 1D7A:0014
loc_2bd97:
	// 8510 
cs=0x1d7a;eip=0x000017; 	R(IN(al, dx));	// 56117 in      al, dx ;~ 1D7A:0017
cs=0x1d7a;eip=0x000018; 	R(LOOP(loc_2bd97));	// 56118 loop    loc_2BD97 ;~ 1D7A:0018
cs=0x1d7a;eip=0x00001a; 	T(INC(dx));	// 56119 inc     dx ;~ 1D7A:001A
cs=0x1d7a;eip=0x00001b; 	T(MOV(al, ah));	// 56120 mov     al, ah ;~ 1D7A:001B
cs=0x1d7a;eip=0x00001d; 	R(OUT(dx, al));	// 56121 out     dx, al ;~ 1D7A:001D
cs=0x1d7a;eip=0x00001e; 	T(DEC(dx));	// 56122 dec     dx ;~ 1D7A:001E
cs=0x1d7a;eip=0x00001f; 	T(MOV(cx, 0x23));	// 56123 mov     cx, 23h ; '#' ;~ 1D7A:001F
loc_2bda2:
	// 8511 
cs=0x1d7a;eip=0x000022; 	R(IN(al, dx));	// 56126 in      al, dx ;~ 1D7A:0022
cs=0x1d7a;eip=0x000023; 	R(LOOP(loc_2bda2));	// 56127 loop    loc_2BDA2 ;~ 1D7A:0023
cs=0x1d7a;eip=0x000025; 	X(POP(dx));	// 56128 pop     dx ;~ 1D7A:0025
cs=0x1d7a;eip=0x000026; 	X(POP(cx));	// 56129 pop     cx ;~ 1D7A:0026
cs=0x1d7a;eip=0x000027; 	R(RETF(0));	// 56130 retf ;~ 1D7A:0027
sub_2bda8:
	// 56137 
cs=0x1d7a;eip=0x000028; 	X(PUSH(bx));	// 56139 push    bx ;~ 1D7A:0028
ret_1d7a_29:
	// 8512 
cs=0x1d7a;eip=0x000029; 	X(PUSH(cx));	// 56140 push    cx ;~ 1D7A:0029
cs=0x1d7a;eip=0x00002a; 	X(PUSH(dx));	// 56141 push    dx ;~ 1D7A:002A
cs=0x1d7a;eip=0x00002b; 	X(PUSH(si));	// 56142 push    si ;~ 1D7A:002B
cs=0x1d7a;eip=0x00002c; 	T(MOV(ax, 0x6004));	// 56143 mov     ax, 6004h ;~ 1D7A:002C
cs=0x1d7a;eip=0x00002f; 	R(CALLF(sub_2bd8e,0));	// 56144 call    sub_2BD8E ;~ 1D7A:002F
cs=0x1d7a;eip=0x000034; 	T(MOV(ax, 0x8004));	// 56145 mov     ax, 8004h ;~ 1D7A:0034
cs=0x1d7a;eip=0x000037; 	R(CALLF(sub_2bd8e,0));	// 56146 call    sub_2BD8E ;~ 1D7A:0037
cs=0x1d7a;eip=0x00003c; 	T(MOV(dx, 0x388));	// 56147 mov     dx, 388h ;~ 1D7A:003C
cs=0x1d7a;eip=0x00003f; 	R(IN(al, dx));	// 56148 in      al, dx ;~ 1D7A:003F
cs=0x1d7a;eip=0x000040; 	T(MOV(bl, al));	// 56149 mov     bl, al ;~ 1D7A:0040
cs=0x1d7a;eip=0x000042; 	T(MOV(ax, 0x0FF02));	// 56150 mov     ax, 0FF02h ;~ 1D7A:0042
cs=0x1d7a;eip=0x000045; 	R(CALLF(sub_2bd8e,0));	// 56151 call    sub_2BD8E ;~ 1D7A:0045
cs=0x1d7a;eip=0x00004a; 	T(MOV(ax, 0x2104));	// 56152 mov     ax, 2104h ;~ 1D7A:004A
cs=0x1d7a;eip=0x00004d; 	R(CALLF(sub_2bd8e,0));	// 56153 call    sub_2BD8E ;~ 1D7A:004D
cs=0x1d7a;eip=0x000052; 	T(MOV(cl, 0x0C8));	// 56154 mov     cl, 0C8h ; 'È' ;~ 1D7A:0052
cs=0x1d7a;eip=0x000054; 	T(MOV(dx, 0x388));	// 56155 mov     dx, 388h ;~ 1D7A:0054
loc_2bdd7:
	// 8513 
cs=0x1d7a;eip=0x000057; 	R(IN(al, dx));	// 56158 in      al, dx ;~ 1D7A:0057
cs=0x1d7a;eip=0x000058; 	R(LOOP(loc_2bdd7));	// 56159 loop    loc_2BDD7 ;~ 1D7A:0058
cs=0x1d7a;eip=0x00005a; 	R(IN(al, dx));	// 56160 in      al, dx ;~ 1D7A:005A
cs=0x1d7a;eip=0x00005b; 	T(MOV(bh, al));	// 56161 mov     bh, al ;~ 1D7A:005B
cs=0x1d7a;eip=0x00005d; 	T(MOV(ax, 0x6004));	// 56162 mov     ax, 6004h ;~ 1D7A:005D
cs=0x1d7a;eip=0x000060; 	R(CALLF(sub_2bd8e,0));	// 56163 call    sub_2BD8E ;~ 1D7A:0060
cs=0x1d7a;eip=0x000065; 	T(MOV(ax, 0x8004));	// 56164 mov     ax, 8004h ;~ 1D7A:0065
cs=0x1d7a;eip=0x000068; 	R(CALLF(sub_2bd8e,0));	// 56165 call    sub_2BD8E ;~ 1D7A:0068
cs=0x1d7a;eip=0x00006d; 	T(SUB(ax, ax));	// 56166 sub     ax, ax ;~ 1D7A:006D
cs=0x1d7a;eip=0x00006f; 	T(AND(bl, 0x0E0));	// 56167 and     bl, 0E0h ;~ 1D7A:006F
cs=0x1d7a;eip=0x000072; 	R(JNZ(loc_2bdfe));	// 56168 jnz     short loc_2BDFE ;~ 1D7A:0072
cs=0x1d7a;eip=0x000074; 	T(AND(bh, 0x0E0));	// 56169 and     bh, 0E0h ;~ 1D7A:0074
cs=0x1d7a;eip=0x000077; 	T(CMP(bh, 0x0C0));	// 56170 cmp     bh, 0C0h ; 'À' ;~ 1D7A:0077
cs=0x1d7a;eip=0x00007a; 	R(JNZ(loc_2bdfe));	// 56171 jnz     short loc_2BDFE ;~ 1D7A:007A
cs=0x1d7a;eip=0x00007c; 	T(MOV(al, 1));	// 56172 mov     al, 1 ;~ 1D7A:007C
loc_2bdfe:
	// 8514 
cs=0x1d7a;eip=0x00007e; 	T(OR(ax, ax));	// 56176 or      ax, ax ;~ 1D7A:007E
cs=0x1d7a;eip=0x000080; 	R(JZ(loc_2be2d));	// 56177 jz      short loc_2BE2D ;~ 1D7A:0080
cs=0x1d7a;eip=0x000082; 	T(MOV(cx, 0x0F5));	// 56178 mov     cx, 0F5h ; 'õ' ;~ 1D7A:0082
loc_2be05:
	// 8515 
cs=0x1d7a;eip=0x000085; 	T(MOV(ax, cx));	// 56181 mov     ax, cx ;~ 1D7A:0085
cs=0x1d7a;eip=0x000087; 	R(CALLF(sub_2bd8e,0));	// 56182 call    sub_2BD8E ;~ 1D7A:0087
cs=0x1d7a;eip=0x00008c; 	R(LOOP(loc_2be05));	// 56183 loop    loc_2BE05 ;~ 1D7A:008C
cs=0x1d7a;eip=0x00008e; 	T(MOV(ax, 0x6004));	// 56184 mov     ax, 6004h ;~ 1D7A:008E
cs=0x1d7a;eip=0x000091; 	R(CALLF(sub_2bd8e,0));	// 56185 call    sub_2BD8E ;~ 1D7A:0091
cs=0x1d7a;eip=0x000096; 	T(MOV(ax, 0x20BD));	// 56186 mov     ax, 20BDh ;~ 1D7A:0096
cs=0x1d7a;eip=0x000099; 	X(MOV(byte_38426, 0x20));	// 56187 mov     byte_38426, 20h ; ' ' ;~ 1D7A:0099
cs=0x1d7a;eip=0x00009e; 	R(CALLF(sub_2bd8e,0));	// 56188 call    sub_2BD8E ;~ 1D7A:009E
cs=0x1d7a;eip=0x0000a3; 	T(MOV(ax, 0x2001));	// 56189 mov     ax, 2001h ;~ 1D7A:00A3
cs=0x1d7a;eip=0x0000a6; 	R(CALLF(sub_2bd8e,0));	// 56190 call    sub_2BD8E ;~ 1D7A:00A6
cs=0x1d7a;eip=0x0000ab; 	T(MOV(al, 1));	// 56191 mov     al, 1 ;~ 1D7A:00AB
loc_2be2d:
	// 8516 
cs=0x1d7a;eip=0x0000ad; 	X(POP(si));	// 56194 pop     si ;~ 1D7A:00AD
cs=0x1d7a;eip=0x0000ae; 	X(POP(dx));	// 56195 pop     dx ;~ 1D7A:00AE
cs=0x1d7a;eip=0x0000af; 	X(POP(cx));	// 56196 pop     cx ;~ 1D7A:00AF
cs=0x1d7a;eip=0x0000b0; 	X(POP(bx));	// 56197 pop     bx ;~ 1D7A:00B0
cs=0x1d7a;eip=0x0000b1; 	R(RETF(0));	// 56198 retf ;~ 1D7A:00B1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2bd97: 	goto loc_2bd97;
        case m2c::kloc_2bda2: 	goto loc_2bda2;
        case m2c::kloc_2bdd7: 	goto loc_2bdd7;
        case m2c::kloc_2bdfe: 	goto loc_2bdfe;
        case m2c::kloc_2be05: 	goto loc_2be05;
        case m2c::kloc_2be2d: 	goto loc_2be2d;
        case m2c::kret_1d7a_29: 	goto ret_1d7a_29;
        case m2c::kret_1d7a_f: 	goto ret_1d7a_f;
        case m2c::ksub_2bd8e: 	goto sub_2bd8e;
        case m2c::ksub_2bda8: 	goto sub_2bda8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

