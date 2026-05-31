/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "snake.h"

                

 bool asmmain(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    asmmain:
    _begin:
#undef argc
#define argc 2
	// 126 argc            = dword ptr  2 ;~ 01B2:0000
#undef argv
#define argv 6
	// 127 argv            = dword ptr  6 ;~ 01B2:0000
#undef envp
#define envp 0x0A
	// 128 envp            = dword ptr  0Ah ;~ 01B2:0000
cs=0x1b2;eip=0x000000; 	T(MOV(ax, seg_offset(data)));	// 130 mov     ax, seg DATA ;~ 01B2:0000
cs=0x1b2;eip=0x000003; 	T(MOV(ds, ax));	// 131 mov     ds, ax ;~ 01B2:0003
cs=0x1b2;eip=0x000005; 	T(MOV(ax, 0x0B800));	// 133 mov     ax, 0B800h ;~ 01B2:0005
cs=0x1b2;eip=0x000008; 	T(MOV(es, ax));	// 134 mov     es, ax ;~ 01B2:0008
cs=0x1b2;eip=0x00000a; 	T(MOV(ax, 3));	// 136 mov     ax, 3 ;~ 01B2:000A
cs=0x1b2;eip=0x00000d; 	R(_INT(0x10));	// 137 int     10h             ; - VIDEO - SET VIDEO MODE ;~ 01B2:000D
cs=0x1b2;eip=0x00000f; 	T(bx = offset(data,msg));	// 139 lea     bx, msg         ; "Welcome to the snake game!!" ;~ 01B2:000F
cs=0x1b2;eip=0x000013; 	T(MOV(dx, 0));	// 140 mov     dx, 0 ;~ 01B2:0013
cs=0x1b2;eip=0x000016; 	J(CALL(writestringat,0));	// 141 call    writestringat ;~ 01B2:0016
cs=0x1b2;eip=0x000019; 	T(dx = offset(data,instructions));	// 142 lea     dx, instructions ; "\n\rUse a, s, d and w to control your s"... ;~ 01B2:0019
cs=0x1b2;eip=0x00001d; 	T(MOV(ah, 9));	// 143 mov     ah, 9 ;~ 01B2:001D
cs=0x1b2;eip=0x00001f; 	R(_INT(0x21));	// 144 int     21h             ; DOS - PRINT STRING ;~ 01B2:001F
cs=0x1b2;eip=0x000021; 	T(MOV(ah, 7));	// 146 mov     ah, 7 ;~ 01B2:0021
cs=0x1b2;eip=0x000023; 	R(_INT(0x21));	// 147 int     21h             ; DOS - DIRECT STDIN INPUT, NO ECHO ;~ 01B2:0023
cs=0x1b2;eip=0x000025; 	T(MOV(ax, 3));	// 148 mov     ax, 3 ;~ 01B2:0025
cs=0x1b2;eip=0x000028; 	R(_INT(0x10));	// 149 int     10h             ; - VIDEO - SET VIDEO MODE ;~ 01B2:0028
cs=0x1b2;eip=0x00002a; 	J(CALL(printbox,0));	// 151 call    printbox ;~ 01B2:002A
loc_1012d:
	// 4369 
cs=0x1b2;eip=0x00002d; 	J(CALL(delay,0));	// 154 call    delay ;~ 01B2:002D
cs=0x1b2;eip=0x000030; 	T(bx = offset(data,msg));	// 155 lea     bx, msg         ; "Welcome to the snake game!!" ;~ 01B2:0030
cs=0x1b2;eip=0x000034; 	T(MOV(dx, 0));	// 156 mov     dx, 0 ;~ 01B2:0034
cs=0x1b2;eip=0x000037; 	J(CALL(writestringat,0));	// 157 call    writestringat ;~ 01B2:0037
cs=0x1b2;eip=0x00003a; 	J(CALL(shiftsnake,0));	// 158 call    shiftsnake ;~ 01B2:003A
cs=0x1b2;eip=0x00003d; 	T(CMP(gameover, 1));	// 159 cmp     gameover, 1 ;~ 01B2:003D
cs=0x1b2;eip=0x000042; 	J(JZ(loc_10156));	// 160 jz      short loc_10156 ;~ 01B2:0042
cs=0x1b2;eip=0x000044; 	J(CALL(keyboardfunctions,0));	// 161 call    keyboardfunctions ;~ 01B2:0044
cs=0x1b2;eip=0x000047; 	T(CMP(quit, 1));	// 162 cmp     quit, 1 ;~ 01B2:0047
cs=0x1b2;eip=0x00004c; 	J(JZ(loc_1016f));	// 163 jz      short loc_1016F ;~ 01B2:004C
cs=0x1b2;eip=0x00004e; 	J(CALL(fruitgeneration,0));	// 164 call    fruitgeneration ;~ 01B2:004E
cs=0x1b2;eip=0x000051; 	J(CALL(draw,0));	// 165 call    draw ;~ 01B2:0051
cs=0x1b2;eip=0x000054; 	J(JMP(loc_1012d));	// 166 jmp     short loc_1012D ;~ 01B2:0054
loc_10156:
	// 4370 
cs=0x1b2;eip=0x000056; 	T(MOV(ax, 3));	// 170 mov     ax, 3 ;~ 01B2:0056
cs=0x1b2;eip=0x000059; 	R(_INT(0x10));	// 171 int     10h             ; - VIDEO - SET VIDEO MODE ;~ 01B2:0059
cs=0x1b2;eip=0x00005b; 	X(MOV(delaytime, 100));	// 173 mov     delaytime, 100 ;~ 01B2:005B
cs=0x1b2;eip=0x000060; 	T(MOV(dx, 0));	// 174 mov     dx, 0 ;~ 01B2:0060
cs=0x1b2;eip=0x000063; 	T(bx = offset(data,gameovermsg));	// 175 lea     bx, gameovermsg ; "OOPS!! your snake died! :P " ;~ 01B2:0063
cs=0x1b2;eip=0x000067; 	J(CALL(writestringat,0));	// 176 call    writestringat ;~ 01B2:0067
cs=0x1b2;eip=0x00006a; 	J(CALL(delay,0));	// 177 call    delay ;~ 01B2:006A
cs=0x1b2;eip=0x00006d; 	J(JMP(loc_10188));	// 178 jmp     short loc_10188 ;~ 01B2:006D
loc_1016f:
	// 4371 
cs=0x1b2;eip=0x00006f; 	T(MOV(ax, 3));	// 182 mov     ax, 3 ;~ 01B2:006F
cs=0x1b2;eip=0x000072; 	R(_INT(0x10));	// 183 int     10h             ; - VIDEO - SET VIDEO MODE ;~ 01B2:0072
cs=0x1b2;eip=0x000074; 	X(MOV(delaytime, 0x64));	// 185 mov     delaytime, 64h ; 'd' ;~ 01B2:0074
cs=0x1b2;eip=0x000079; 	T(MOV(dx, 0));	// 186 mov     dx, 0 ;~ 01B2:0079
cs=0x1b2;eip=0x00007c; 	T(bx = offset(data,athanksforplayi));	// 187 lea     bx, aThanksForPlayi ; "Thanks for playing! hope you enjoyed" ;~ 01B2:007C
cs=0x1b2;eip=0x000080; 	J(CALL(writestringat,0));	// 188 call    writestringat ;~ 01B2:0080
cs=0x1b2;eip=0x000083; 	J(CALL(delay,0));	// 189 call    delay ;~ 01B2:0083
cs=0x1b2;eip=0x000086; 	J({;});	// 190 jmp     short $+2 ;~ 01B2:0086
loc_10188:
	// 4372 
cs=0x1b2;eip=0x000088; 	T(MOV(ax, 3));	// 195 mov     ax, 3 ;~ 01B2:0088
cs=0x1b2;eip=0x00008b; 	R(_INT(0x10));	// 196 int     10h             ; - VIDEO - SET VIDEO MODE ;~ 01B2:008B
cs=0x1b2;eip=0x00008d; 	T(MOV(ax, 0x4C00));	// 198 mov     ax, 4C00h ;~ 01B2:008D
cs=0x1b2;eip=0x000090; 	R(_INT(0x21));	// 199 int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 01B2:0090
exit(0);
	R(return delay(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1012d: 	goto loc_1012d;
        case m2c::kloc_10156: 	goto loc_10156;
        case m2c::kloc_1016f: 	goto loc_1016f;
        case m2c::kloc_10188: 	goto loc_10188;
        case m2c::kmain: 	goto asmmain;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool delay(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    delay:
    _begin:
cs=0x1b2;eip=0x000092; 	T(MOV(ah, 0));	// 208 mov     ah, 0 ;~ 01B2:0092
cs=0x1b2;eip=0x000094; 	R(_INT(0x1A));	// 209 int     1Ah             ; CLOCK - GET TIME OF DAY ;~ 01B2:0094
cs=0x1b2;eip=0x000096; 	T(MOV(bx, dx));	// 214 mov     bx, dx ;~ 01B2:0096
loc_10198:
	// 4373 
cs=0x1b2;eip=0x000098; 	R(_INT(0x1A));	// 217 int     1Ah ;~ 01B2:0098
cs=0x1b2;eip=0x00009a; 	T(SUB(dx, bx));	// 218 sub     dx, bx ;~ 01B2:009A
cs=0x1b2;eip=0x00009c; 	T(CMP(dl, delaytime));	// 219 cmp     dl, delaytime ;~ 01B2:009C
cs=0x1b2;eip=0x0000a0; 	J(JL(loc_10198));	// 220 jl      short loc_10198 ;~ 01B2:00A0
cs=0x1b2;eip=0x0000a2; 	J(RETN(0));	// 221 retn ;~ 01B2:00A2

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdelay: 	goto delay;
        case m2c::kloc_10198: 	goto loc_10198;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool fruitgeneration(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    fruitgeneration:
    _begin:
cs=0x1b2;eip=0x0000a3; 	T(MOV(ch, fruity));	// 229 mov     ch, fruity ;~ 01B2:00A3
cs=0x1b2;eip=0x0000a7; 	T(MOV(cl, fruitx));	// 230 mov     cl, fruitx ;~ 01B2:00A7
loc_101ab:
	// 4374 
cs=0x1b2;eip=0x0000ab; 	T(CMP(fruitactive, 1));	// 234 cmp     fruitactive, 1 ;~ 01B2:00AB
cs=0x1b2;eip=0x0000b0; 	J(JZ(locret_10221));	// 235 jz      short locret_10221 ;~ 01B2:00B0
cs=0x1b2;eip=0x0000b2; 	T(MOV(ah, 0));	// 236 mov     ah, 0 ;~ 01B2:00B2
cs=0x1b2;eip=0x0000b4; 	R(_INT(0x1A));	// 237 int     1Ah             ; CLOCK - GET TIME OF DAY ;~ 01B2:00B4
cs=0x1b2;eip=0x0000b6; 	X(PUSH(dx));	// 242 push    dx ;~ 01B2:00B6
cs=0x1b2;eip=0x0000b7; 	T(MOV(ax, dx));	// 243 mov     ax, dx ;~ 01B2:00B7
cs=0x1b2;eip=0x0000b9; 	T(XOR(dx, dx));	// 244 xor     dx, dx ;~ 01B2:00B9
cs=0x1b2;eip=0x0000bb; 	T(XOR(bh, bh));	// 245 xor     bh, bh ;~ 01B2:00BB
cs=0x1b2;eip=0x0000bd; 	T(MOV(bl, 15));	// 246 mov     bl, 15 ;~ 01B2:00BD
cs=0x1b2;eip=0x0000bf; 	T(DEC(bl));	// 247 dec     bl ;~ 01B2:00BF
cs=0x1b2;eip=0x0000c1; 	T(DIV2(bx));	// 248 div     bx ;~ 01B2:00C1
cs=0x1b2;eip=0x0000c3; 	X(MOV(fruity, dl));	// 249 mov     fruity, dl ;~ 01B2:00C3
cs=0x1b2;eip=0x0000c7; 	X(INC(fruity));	// 250 inc     fruity ;~ 01B2:00C7
cs=0x1b2;eip=0x0000cb; 	X(POP(ax));	// 251 pop     ax ;~ 01B2:00CB
cs=0x1b2;eip=0x0000cc; 	T(MOV(bl, 40));	// 252 mov     bl, 40 ;~ 01B2:00CC
cs=0x1b2;eip=0x0000ce; 	T(DEC(dl));	// 253 dec     dl ;~ 01B2:00CE
cs=0x1b2;eip=0x0000d0; 	T(XOR(bh, bh));	// 254 xor     bh, bh ;~ 01B2:00D0
cs=0x1b2;eip=0x0000d2; 	T(XOR(dx, dx));	// 255 xor     dx, dx ;~ 01B2:00D2
cs=0x1b2;eip=0x0000d4; 	T(DIV2(bx));	// 256 div     bx ;~ 01B2:00D4
cs=0x1b2;eip=0x0000d6; 	X(MOV(fruitx, dl));	// 257 mov     fruitx, dl ;~ 01B2:00D6
cs=0x1b2;eip=0x0000da; 	X(INC(fruitx));	// 258 inc     fruitx ;~ 01B2:00DA
cs=0x1b2;eip=0x0000de; 	T(CMP(fruitx, cl));	// 259 cmp     fruitx, cl ;~ 01B2:00DE
cs=0x1b2;eip=0x0000e2; 	J(JNZ(loc_101ec));	// 260 jnz     short loc_101EC ;~ 01B2:00E2
cs=0x1b2;eip=0x0000e4; 	T(CMP(fruity, ch));	// 261 cmp     fruity, ch ;~ 01B2:00E4
cs=0x1b2;eip=0x0000e8; 	J(JNZ(loc_101ec));	// 262 jnz     short loc_101EC ;~ 01B2:00E8
cs=0x1b2;eip=0x0000ea; 	J(JMP(loc_101ab));	// 263 jmp     short loc_101AB ;~ 01B2:00EA
loc_101ec:
	// 4375 
cs=0x1b2;eip=0x0000ec; 	T(MOV(al, fruitx));	// 268 mov     al, fruitx ;~ 01B2:00EC
cs=0x1b2;eip=0x0000ef; 	T(ROR(al, 1));	// 269 ror     al, 1 ;~ 01B2:00EF
cs=0x1b2;eip=0x0000f1; 	J(JC(loc_101ab));	// 270 jb      short loc_101AB ;~ 01B2:00F1
cs=0x1b2;eip=0x0000f3; 	X(ADD(fruity, 2));	// 271 add     fruity, 2 ;~ 01B2:00F3
cs=0x1b2;eip=0x0000f8; 	X(ADD(fruitx, 0));	// 272 add     fruitx, 0 ;~ 01B2:00F8
cs=0x1b2;eip=0x0000fd; 	T(MOV(dh, fruity));	// 273 mov     dh, fruity ;~ 01B2:00FD
cs=0x1b2;eip=0x000101; 	T(MOV(dl, fruitx));	// 274 mov     dl, fruitx ;~ 01B2:0101
cs=0x1b2;eip=0x000105; 	J(CALL(readcharat,0));	// 275 call    readcharat ;~ 01B2:0105
cs=0x1b2;eip=0x000108; 	T(CMP(bl, '*'));	// 276 cmp     bl, '*' ;~ 01B2:0108
cs=0x1b2;eip=0x00010b; 	J(JZ(loc_101ab));	// 277 jz      short loc_101AB ;~ 01B2:010B
cs=0x1b2;eip=0x00010d; 	T(CMP(bl, '^'));	// 278 cmp     bl, '^' ;~ 01B2:010D
cs=0x1b2;eip=0x000110; 	J(JZ(loc_101ab));	// 279 jz      short loc_101AB ;~ 01B2:0110
cs=0x1b2;eip=0x000112; 	T(CMP(bl, '<'));	// 280 cmp     bl, '<' ;~ 01B2:0112
cs=0x1b2;eip=0x000115; 	J(JZ(loc_101ab));	// 281 jz      short loc_101AB ;~ 01B2:0115
cs=0x1b2;eip=0x000117; 	T(CMP(bl, '>'));	// 282 cmp     bl, '>' ;~ 01B2:0117
cs=0x1b2;eip=0x00011a; 	J(JZ(loc_101ab));	// 283 jz      short loc_101AB ;~ 01B2:011A
cs=0x1b2;eip=0x00011c; 	T(CMP(bl, 'v'));	// 284 cmp     bl, 'v' ;~ 01B2:011C
cs=0x1b2;eip=0x00011f; 	J(JZ(loc_101ab));	// 285 jz      short loc_101AB ;~ 01B2:011F
locret_10221:
	// 4376 
cs=0x1b2;eip=0x000121; 	J(RETN(0));	// 288 retn ;~ 01B2:0121

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfruitgeneration: 	goto fruitgeneration;
        case m2c::kloc_101ab: 	goto loc_101ab;
        case m2c::kloc_101ec: 	goto loc_101ec;
        case m2c::klocret_10221: 	goto locret_10221;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool dispdigit(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    dispdigit:
    _begin:
cs=0x1b2;eip=0x000122; 	T(ADD(dl, 0x30));	// 296 add     dl, 30h ; '0' ;~ 01B2:0122
cs=0x1b2;eip=0x000125; 	T(MOV(ah, 2));	// 297 mov     ah, 2 ;~ 01B2:0125
cs=0x1b2;eip=0x000127; 	R(_INT(0x21));	// 298 int     21h             ; DOS - DISPLAY OUTPUT ;~ 01B2:0127
cs=0x1b2;eip=0x000129; 	J(RETN(0));	// 300 retn ;~ 01B2:0129

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdispdigit: 	goto dispdigit;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool dispnum(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    dispnum:
    _begin:
cs=0x1b2;eip=0x00012a; 	T(TEST(ax, ax));	// 309 test    ax, ax ;~ 01B2:012A
cs=0x1b2;eip=0x00012c; 	J(JZ(loc_1023e));	// 310 jz      short loc_1023E ;~ 01B2:012C
cs=0x1b2;eip=0x00012e; 	T(XOR(dx, dx));	// 311 xor     dx, dx ;~ 01B2:012E
cs=0x1b2;eip=0x000130; 	T(MOV(bx, 10));	// 312 mov     bx, 10 ;~ 01B2:0130
cs=0x1b2;eip=0x000133; 	T(DIV2(bx));	// 313 div     bx ;~ 01B2:0133
cs=0x1b2;eip=0x000135; 	X(PUSH(dx));	// 314 push    dx ;~ 01B2:0135
cs=0x1b2;eip=0x000136; 	J(CALL(dispnum,0));	// 315 call    dispnum ;~ 01B2:0136
cs=0x1b2;eip=0x000139; 	X(POP(dx));	// 316 pop     dx ;~ 01B2:0139
cs=0x1b2;eip=0x00013a; 	J(CALL(dispdigit,0));	// 317 call    dispdigit ;~ 01B2:013A
cs=0x1b2;eip=0x00013d; 	J(RETN(0));	// 318 retn ;~ 01B2:013D
loc_1023e:
	// 4377 
cs=0x1b2;eip=0x00013e; 	T(MOV(ah, 2));	// 322 mov     ah, 2 ;~ 01B2:013E
cs=0x1b2;eip=0x000140; 	J(RETN(0));	// 323 retn ;~ 01B2:0140

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdispnum: 	goto dispnum;
        case m2c::kloc_1023e: 	goto loc_1023e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool setcursorpos(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    setcursorpos:
    _begin:
cs=0x1b2;eip=0x000141; 	T(MOV(ah, 2));	// 331 mov     ah, 2 ;~ 01B2:0141
cs=0x1b2;eip=0x000143; 	X(PUSH(bx));	// 332 push    bx ;~ 01B2:0143
cs=0x1b2;eip=0x000144; 	T(MOV(bh, 0));	// 333 mov     bh, 0 ;~ 01B2:0144
cs=0x1b2;eip=0x000146; 	R(_INT(0x10));	// 334 int     10h             ; - VIDEO - SET CURSOR POSITION ;~ 01B2:0146
cs=0x1b2;eip=0x000148; 	X(POP(bx));	// 337 pop     bx ;~ 01B2:0148
cs=0x1b2;eip=0x000149; 	J(RETN(0));	// 338 retn ;~ 01B2:0149

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksetcursorpos: 	goto setcursorpos;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool draw(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    draw:
    _begin:
cs=0x1b2;eip=0x00014a; 	T(bx = offset(data,scoremsg));	// 346 lea     bx, scoremsg    ; "Score: " ;~ 01B2:014A
cs=0x1b2;eip=0x00014e; 	T(MOV(dx, 0x109));	// 347 mov     dx, 109h ;~ 01B2:014E
cs=0x1b2;eip=0x000151; 	J(CALL(writestringat,0));	// 348 call    writestringat ;~ 01B2:0151
cs=0x1b2;eip=0x000154; 	T(ADD(dx, 7));	// 349 add     dx, 7 ;~ 01B2:0154
cs=0x1b2;eip=0x000157; 	J(CALL(setcursorpos,0));	// 350 call    setcursorpos ;~ 01B2:0157
cs=0x1b2;eip=0x00015a; 	T(MOV(al, segmentcount));	// 351 mov     al, segmentcount ;~ 01B2:015A
cs=0x1b2;eip=0x00015d; 	T(DEC(al));	// 352 dec     al ;~ 01B2:015D
cs=0x1b2;eip=0x00015f; 	T(XOR(ah, ah));	// 353 xor     ah, ah ;~ 01B2:015F
cs=0x1b2;eip=0x000161; 	J(CALL(dispnum,0));	// 354 call    dispnum ;~ 01B2:0161
cs=0x1b2;eip=0x000164; 	T(si = offset(data,head));	// 355 lea     si, head ;~ 01B2:0164
loc_10268:
	// 4378 
cs=0x1b2;eip=0x000168; 	T(MOV(bl, *(raddr(ds,si))));	// 358 mov     bl, [si] ;~ 01B2:0168
cs=0x1b2;eip=0x00016a; 	T(TEST(bl, bl));	// 359 test    bl, bl ;~ 01B2:016A
cs=0x1b2;eip=0x00016c; 	J(JZ(loc_10279));	// 360 jz      short loc_10279 ;~ 01B2:016C
cs=0x1b2;eip=0x00016e; 	T(MOV(dx, *(dw*)(raddr(ds,si+1))));	// 361 mov     dx, [si+1] ;~ 01B2:016E
cs=0x1b2;eip=0x000171; 	J(CALL(writecharat,0));	// 362 call    writecharat ;~ 01B2:0171
cs=0x1b2;eip=0x000174; 	T(ADD(si, 3));	// 363 add     si, 3 ;~ 01B2:0174
cs=0x1b2;eip=0x000177; 	J(JMP(loc_10268));	// 364 jmp     short loc_10268 ;~ 01B2:0177
loc_10279:
	// 4379 
cs=0x1b2;eip=0x000179; 	T(MOV(bl, 'F'));	// 368 mov     bl, 'F' ;~ 01B2:0179
cs=0x1b2;eip=0x00017b; 	T(MOV(dh, fruity));	// 369 mov     dh, fruity ;~ 01B2:017B
cs=0x1b2;eip=0x00017f; 	T(MOV(dl, fruitx));	// 370 mov     dl, fruitx ;~ 01B2:017F
cs=0x1b2;eip=0x000183; 	J(CALL(writecharat,0));	// 371 call    writecharat ;~ 01B2:0183
cs=0x1b2;eip=0x000186; 	X(MOV(fruitactive, 1));	// 372 mov     fruitactive, 1 ;~ 01B2:0186
cs=0x1b2;eip=0x00018b; 	J(RETN(0));	// 373 retn ;~ 01B2:018B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdraw: 	goto draw;
        case m2c::kloc_10268: 	goto loc_10268;
        case m2c::kloc_10279: 	goto loc_10279;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool readchar(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    readchar:
    _begin:
cs=0x1b2;eip=0x00018c; 	T(MOV(ah, 1));	// 381 mov     ah, 1 ;~ 01B2:018C
cs=0x1b2;eip=0x00018e; 	R(_INT(0x16));	// 382 int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 01B2:018E
cs=0x1b2;eip=0x000190; 	J(JNZ(loc_10295));	// 386 jnz     short loc_10295 ;~ 01B2:0190
cs=0x1b2;eip=0x000192; 	T(XOR(dl, dl));	// 387 xor     dl, dl ;~ 01B2:0192
cs=0x1b2;eip=0x000194; 	J(RETN(0));	// 388 retn ;~ 01B2:0194
loc_10295:
	// 4380 
cs=0x1b2;eip=0x000195; 	T(MOV(ah, 0));	// 392 mov     ah, 0 ;~ 01B2:0195
cs=0x1b2;eip=0x000197; 	R(_INT(0x16));	// 393 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 01B2:0197
cs=0x1b2;eip=0x000199; 	T(MOV(dl, al));	// 395 mov     dl, al ;~ 01B2:0199
cs=0x1b2;eip=0x00019b; 	J(RETN(0));	// 396 retn ;~ 01B2:019B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_10295: 	goto loc_10295;
        case m2c::kreadchar: 	goto readchar;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool keyboardfunctions(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    keyboardfunctions:
    _begin:
cs=0x1b2;eip=0x00019c; 	J(CALL(readchar,0));	// 404 call    readchar ;~ 01B2:019C
cs=0x1b2;eip=0x00019f; 	T(CMP(dl, 0));	// 405 cmp     dl, 0 ;~ 01B2:019F
cs=0x1b2;eip=0x0001a2; 	J(JZ(loc_102eb));	// 406 jz      short loc_102EB ;~ 01B2:01A2
cs=0x1b2;eip=0x0001a4; 	T(CMP(dl, 'w'));	// 407 cmp     dl, 'w' ;~ 01B2:01A4
cs=0x1b2;eip=0x0001a7; 	J(JNZ(loc_102b6));	// 408 jnz     short loc_102B6 ;~ 01B2:01A7
cs=0x1b2;eip=0x0001a9; 	T(CMP(head[0], 'v'));	// 409 cmp     head, 'v' ;~ 01B2:01A9
cs=0x1b2;eip=0x0001ae; 	J(JZ(loc_102eb));	// 410 jz      short loc_102EB ;~ 01B2:01AE
cs=0x1b2;eip=0x0001b0; 	X(MOV(head[0], '^'));	// 411 mov     head, '^' ;~ 01B2:01B0
cs=0x1b2;eip=0x0001b5; 	J(RETN(0));	// 412 retn ;~ 01B2:01B5
loc_102b6:
	// 4381 
cs=0x1b2;eip=0x0001b6; 	T(CMP(dl, 's'));	// 416 cmp     dl, 's' ;~ 01B2:01B6
cs=0x1b2;eip=0x0001b9; 	J(JNZ(loc_102c8));	// 417 jnz     short loc_102C8 ;~ 01B2:01B9
cs=0x1b2;eip=0x0001bb; 	T(CMP(head[0], '^'));	// 418 cmp     head, '^' ;~ 01B2:01BB
cs=0x1b2;eip=0x0001c0; 	J(JZ(loc_102eb));	// 419 jz      short loc_102EB ;~ 01B2:01C0
cs=0x1b2;eip=0x0001c2; 	X(MOV(head[0], 'v'));	// 420 mov     head, 'v' ;~ 01B2:01C2
cs=0x1b2;eip=0x0001c7; 	J(RETN(0));	// 421 retn ;~ 01B2:01C7
loc_102c8:
	// 4382 
cs=0x1b2;eip=0x0001c8; 	T(CMP(dl, 'a'));	// 425 cmp     dl, 'a' ;~ 01B2:01C8
cs=0x1b2;eip=0x0001cb; 	J(JNZ(loc_102da));	// 426 jnz     short loc_102DA ;~ 01B2:01CB
cs=0x1b2;eip=0x0001cd; 	T(CMP(head[0], '>'));	// 427 cmp     head, '>' ;~ 01B2:01CD
cs=0x1b2;eip=0x0001d2; 	J(JZ(loc_102eb));	// 428 jz      short loc_102EB ;~ 01B2:01D2
cs=0x1b2;eip=0x0001d4; 	X(MOV(head[0], '<'));	// 429 mov     head, '<' ;~ 01B2:01D4
cs=0x1b2;eip=0x0001d9; 	J(RETN(0));	// 430 retn ;~ 01B2:01D9
loc_102da:
	// 4383 
cs=0x1b2;eip=0x0001da; 	T(CMP(dl, 'd'));	// 434 cmp     dl, 'd' ;~ 01B2:01DA
cs=0x1b2;eip=0x0001dd; 	J(JNZ(loc_102eb));	// 435 jnz     short loc_102EB ;~ 01B2:01DD
cs=0x1b2;eip=0x0001df; 	T(CMP(head[0], '<'));	// 436 cmp     head, '<' ;~ 01B2:01DF
cs=0x1b2;eip=0x0001e4; 	J(JZ(loc_102eb));	// 437 jz      short loc_102EB ;~ 01B2:01E4
cs=0x1b2;eip=0x0001e6; 	X(MOV(head[0], '>'));	// 438 mov     head, '>' ;~ 01B2:01E6
loc_102eb:
	// 4384 
cs=0x1b2;eip=0x0001eb; 	T(CMP(dl, 'q'));	// 442 cmp     dl, 'q' ;~ 01B2:01EB
cs=0x1b2;eip=0x0001ee; 	J(JZ(loc_102f1));	// 443 jz      short loc_102F1 ;~ 01B2:01EE
cs=0x1b2;eip=0x0001f0; 	J(RETN(0));	// 444 retn ;~ 01B2:01F0
loc_102f1:
	// 4385 
cs=0x1b2;eip=0x0001f1; 	X(INC(quit));	// 448 inc     quit ;~ 01B2:01F1
cs=0x1b2;eip=0x0001f5; 	J(RETN(0));	// 449 retn ;~ 01B2:01F5

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kkeyboardfunctions: 	goto keyboardfunctions;
        case m2c::kloc_102b6: 	goto loc_102b6;
        case m2c::kloc_102c8: 	goto loc_102c8;
        case m2c::kloc_102da: 	goto loc_102da;
        case m2c::kloc_102eb: 	goto loc_102eb;
        case m2c::kloc_102f1: 	goto loc_102f1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool shiftsnake(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    shiftsnake:
    _begin:
cs=0x1b2;eip=0x0001f6; 	T(MOV(bx, offset(data,head)));	// 457 mov     bx, offset head ;~ 01B2:01F6
cs=0x1b2;eip=0x0001f9; 	T(XOR(ax, ax));	// 458 xor     ax, ax ;~ 01B2:01F9
cs=0x1b2;eip=0x0001fb; 	T(MOV(al, *(raddr(ds,bx))));	// 459 mov     al, [bx] ;~ 01B2:01FB
cs=0x1b2;eip=0x0001fd; 	X(PUSH(ax));	// 460 push    ax ;~ 01B2:01FD
cs=0x1b2;eip=0x0001fe; 	T(INC(bx));	// 461 inc     bx ;~ 01B2:01FE
cs=0x1b2;eip=0x0001ff; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 462 mov     ax, [bx] ;~ 01B2:01FF
cs=0x1b2;eip=0x000201; 	T(INC(bx));	// 463 inc     bx ;~ 01B2:0201
cs=0x1b2;eip=0x000202; 	T(INC(bx));	// 464 inc     bx ;~ 01B2:0202
cs=0x1b2;eip=0x000203; 	T(XOR(cx, cx));	// 465 xor     cx, cx ;~ 01B2:0203
loc_10305:
	// 4386 
cs=0x1b2;eip=0x000205; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 468 mov     si, [bx] ;~ 01B2:0205
cs=0x1b2;eip=0x000207; 	T(TEST(*(dw*)(raddr(ds,bx)), si));	// 469 test    [bx], si ;~ 01B2:0207
cs=0x1b2;eip=0x000209; 	J(JZ(loc_10317));	// 470 jz      short loc_10317 ;~ 01B2:0209
cs=0x1b2;eip=0x00020b; 	T(INC(cx));	// 471 inc     cx ;~ 01B2:020B
cs=0x1b2;eip=0x00020c; 	T(INC(bx));	// 472 inc     bx ;~ 01B2:020C
cs=0x1b2;eip=0x00020d; 	T(MOV(dx, *(dw*)(raddr(ds,bx))));	// 473 mov     dx, [bx] ;~ 01B2:020D
cs=0x1b2;eip=0x00020f; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 474 mov     [bx], ax ;~ 01B2:020F
cs=0x1b2;eip=0x000211; 	T(MOV(ax, dx));	// 475 mov     ax, dx ;~ 01B2:0211
cs=0x1b2;eip=0x000213; 	T(INC(bx));	// 476 inc     bx ;~ 01B2:0213
cs=0x1b2;eip=0x000214; 	T(INC(bx));	// 477 inc     bx ;~ 01B2:0214
cs=0x1b2;eip=0x000215; 	J(JMP(loc_10305));	// 478 jmp     short loc_10305 ;~ 01B2:0215
loc_10317:
	// 4387 
cs=0x1b2;eip=0x000217; 	X(POP(ax));	// 482 pop     ax ;~ 01B2:0217
cs=0x1b2;eip=0x000218; 	X(PUSH(dx));	// 483 push    dx ;~ 01B2:0218
cs=0x1b2;eip=0x000219; 	T(bx = offset(data,head));	// 484 lea     bx, head ;~ 01B2:0219
cs=0x1b2;eip=0x00021d; 	T(INC(bx));	// 485 inc     bx ;~ 01B2:021D
cs=0x1b2;eip=0x00021e; 	T(MOV(dx, *(dw*)(raddr(ds,bx))));	// 486 mov     dx, [bx] ;~ 01B2:021E
cs=0x1b2;eip=0x000220; 	T(CMP(al, '<'));	// 487 cmp     al, '<' ;~ 01B2:0220
cs=0x1b2;eip=0x000222; 	J(JNZ(loc_1032a));	// 488 jnz     short loc_1032A ;~ 01B2:0222
cs=0x1b2;eip=0x000224; 	T(DEC(dl));	// 489 dec     dl ;~ 01B2:0224
cs=0x1b2;eip=0x000226; 	T(DEC(dl));	// 490 dec     dl ;~ 01B2:0226
cs=0x1b2;eip=0x000228; 	J(JMP(loc_1033e));	// 491 jmp     short loc_1033E ;~ 01B2:0228
loc_1032a:
	// 4388 
cs=0x1b2;eip=0x00022a; 	T(CMP(al, 0x3E));	// 495 cmp     al, 3Eh ; '>' ;~ 01B2:022A
cs=0x1b2;eip=0x00022c; 	J(JNZ(loc_10334));	// 496 jnz     short loc_10334 ;~ 01B2:022C
cs=0x1b2;eip=0x00022e; 	T(INC(dl));	// 497 inc     dl ;~ 01B2:022E
cs=0x1b2;eip=0x000230; 	T(INC(dl));	// 498 inc     dl ;~ 01B2:0230
cs=0x1b2;eip=0x000232; 	J(JMP(loc_1033e));	// 499 jmp     short loc_1033E ;~ 01B2:0232
loc_10334:
	// 4389 
cs=0x1b2;eip=0x000234; 	T(CMP(al, '^'));	// 503 cmp     al, '^' ;~ 01B2:0234
cs=0x1b2;eip=0x000236; 	J(JNZ(loc_1033c));	// 504 jnz     short loc_1033C ;~ 01B2:0236
cs=0x1b2;eip=0x000238; 	T(DEC(dh));	// 505 dec     dh ;~ 01B2:0238
cs=0x1b2;eip=0x00023a; 	J(JMP(loc_1033e));	// 506 jmp     short loc_1033E ;~ 01B2:023A
loc_1033c:
	// 4390 
cs=0x1b2;eip=0x00023c; 	T(INC(dh));	// 510 inc     dh ;~ 01B2:023C
loc_1033e:
	// 4391 
cs=0x1b2;eip=0x00023e; 	X(MOV(*(dw*)(raddr(ds,bx)), dx));	// 514 mov     [bx], dx ;~ 01B2:023E
cs=0x1b2;eip=0x000240; 	J(CALL(readcharat,0));	// 515 call    readcharat ;~ 01B2:0240
cs=0x1b2;eip=0x000243; 	T(CMP(bl, 'F'));	// 516 cmp     bl, 'F' ;~ 01B2:0243
cs=0x1b2;eip=0x000246; 	J(JZ(loc_10371));	// 517 jz      short loc_10371 ;~ 01B2:0246
cs=0x1b2;eip=0x000248; 	T(MOV(cx, dx));	// 518 mov     cx, dx ;~ 01B2:0248
cs=0x1b2;eip=0x00024a; 	X(POP(dx));	// 519 pop     dx ;~ 01B2:024A
cs=0x1b2;eip=0x00024b; 	T(CMP(bl, '*'));	// 520 cmp     bl, '*' ;~ 01B2:024B
cs=0x1b2;eip=0x00024e; 	J(JZ(loc_1036c));	// 521 jz      short loc_1036C ;~ 01B2:024E
cs=0x1b2;eip=0x000250; 	T(MOV(bl, 0));	// 522 mov     bl, 0 ;~ 01B2:0250
cs=0x1b2;eip=0x000252; 	J(CALL(writecharat,0));	// 523 call    writecharat ;~ 01B2:0252
cs=0x1b2;eip=0x000255; 	T(MOV(dx, cx));	// 524 mov     dx, cx ;~ 01B2:0255
cs=0x1b2;eip=0x000257; 	T(CMP(dh, 2));	// 525 cmp     dh, 2 ;~ 01B2:0257
cs=0x1b2;eip=0x00025a; 	J(JZ(loc_1036c));	// 526 jz      short loc_1036C ;~ 01B2:025A
cs=0x1b2;eip=0x00025c; 	T(CMP(dh, 0x11));	// 527 cmp     dh, 11h ;~ 01B2:025C
cs=0x1b2;eip=0x00025f; 	J(JZ(loc_1036c));	// 528 jz      short loc_1036C ;~ 01B2:025F
cs=0x1b2;eip=0x000261; 	T(CMP(dl, 0));	// 529 cmp     dl, 0 ;~ 01B2:0261
cs=0x1b2;eip=0x000264; 	J(JZ(loc_1036c));	// 530 jz      short loc_1036C ;~ 01B2:0264
cs=0x1b2;eip=0x000266; 	T(CMP(dl, 0x28));	// 531 cmp     dl, 28h ; '(' ;~ 01B2:0266
cs=0x1b2;eip=0x000269; 	J(JZ(loc_1036c));	// 532 jz      short loc_1036C ;~ 01B2:0269
cs=0x1b2;eip=0x00026b; 	J(RETN(0));	// 533 retn ;~ 01B2:026B
loc_1036c:
	// 4392 
cs=0x1b2;eip=0x00026c; 	X(INC(gameover));	// 538 inc     gameover ;~ 01B2:026C
cs=0x1b2;eip=0x000270; 	J(RETN(0));	// 539 retn ;~ 01B2:0270
loc_10371:
	// 4393 
cs=0x1b2;eip=0x000271; 	T(MOV(al, segmentcount));	// 543 mov     al, segmentcount ;~ 01B2:0271
cs=0x1b2;eip=0x000274; 	T(XOR(ah, ah));	// 544 xor     ah, ah ;~ 01B2:0274
cs=0x1b2;eip=0x000276; 	T(bx = offset(data,body));	// 545 lea     bx, body ;~ 01B2:0276
cs=0x1b2;eip=0x00027a; 	T(MOV(cx, 3));	// 546 mov     cx, 3 ;~ 01B2:027A
cs=0x1b2;eip=0x00027d; 	T(MUL1_2(cx));	// 547 mul     cx ;~ 01B2:027D
cs=0x1b2;eip=0x00027f; 	X(POP(dx));	// 548 pop     dx ;~ 01B2:027F
cs=0x1b2;eip=0x000280; 	T(ADD(bx, ax));	// 549 add     bx, ax ;~ 01B2:0280
cs=0x1b2;eip=0x000282; 	X(MOV(*(raddr(ds,bx)), '*'));	// 550 mov     byte ptr [bx], '*' ;~ 01B2:0282
cs=0x1b2;eip=0x000285; 	X(MOV(*(dw*)(raddr(ds,bx+1)), dx));	// 551 mov     [bx+1], dx ;~ 01B2:0285
cs=0x1b2;eip=0x000288; 	X(INC(segmentcount));	// 552 inc     segmentcount ;~ 01B2:0288
cs=0x1b2;eip=0x00028c; 	T(MOV(dh, fruity));	// 553 mov     dh, fruity ;~ 01B2:028C
cs=0x1b2;eip=0x000290; 	T(MOV(dl, fruitx));	// 554 mov     dl, fruitx ;~ 01B2:0290
cs=0x1b2;eip=0x000294; 	T(MOV(bl, 0));	// 555 mov     bl, 0 ;~ 01B2:0294
cs=0x1b2;eip=0x000296; 	J(CALL(writecharat,0));	// 556 call    writecharat ;~ 01B2:0296
cs=0x1b2;eip=0x000299; 	X(MOV(fruitactive, 0));	// 557 mov     fruitactive, 0 ;~ 01B2:0299
cs=0x1b2;eip=0x00029e; 	J(RETN(0));	// 558 retn ;~ 01B2:029E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_10305: 	goto loc_10305;
        case m2c::kloc_10317: 	goto loc_10317;
        case m2c::kloc_1032a: 	goto loc_1032a;
        case m2c::kloc_10334: 	goto loc_10334;
        case m2c::kloc_1033c: 	goto loc_1033c;
        case m2c::kloc_1033e: 	goto loc_1033e;
        case m2c::kloc_1036c: 	goto loc_1036c;
        case m2c::kloc_10371: 	goto loc_10371;
        case m2c::kshiftsnake: 	goto shiftsnake;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool printbox(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    printbox:
    _begin:
cs=0x1b2;eip=0x00029f; 	T(MOV(dh, 2));	// 566 mov     dh, 2 ;~ 01B2:029F
cs=0x1b2;eip=0x0002a1; 	T(MOV(dl, 0));	// 567 mov     dl, 0 ;~ 01B2:02A1
cs=0x1b2;eip=0x0002a3; 	T(MOV(cx, 0x28));	// 568 mov     cx, 28h ; '(' ;~ 01B2:02A3
cs=0x1b2;eip=0x0002a6; 	T(MOV(bl, '*'));	// 569 mov     bl, '*' ;~ 01B2:02A6
loc_103a8:
	// 4394 
cs=0x1b2;eip=0x0002a8; 	J(CALL(writecharat,0));	// 572 call    writecharat ;~ 01B2:02A8
cs=0x1b2;eip=0x0002ab; 	T(INC(dl));	// 573 inc     dl ;~ 01B2:02AB
cs=0x1b2;eip=0x0002ad; 	J(LOOP(loc_103a8));	// 574 loop    loc_103A8 ;~ 01B2:02AD
cs=0x1b2;eip=0x0002af; 	T(MOV(cx, 0x0F));	// 575 mov     cx, 0Fh ;~ 01B2:02AF
loc_103b2:
	// 4395 
cs=0x1b2;eip=0x0002b2; 	J(CALL(writecharat,0));	// 578 call    writecharat ;~ 01B2:02B2
cs=0x1b2;eip=0x0002b5; 	T(INC(dh));	// 579 inc     dh ;~ 01B2:02B5
cs=0x1b2;eip=0x0002b7; 	J(LOOP(loc_103b2));	// 580 loop    loc_103B2 ;~ 01B2:02B7
cs=0x1b2;eip=0x0002b9; 	T(MOV(cx, 0x28));	// 581 mov     cx, 28h ; '(' ;~ 01B2:02B9
loc_103bc:
	// 4396 
cs=0x1b2;eip=0x0002bc; 	J(CALL(writecharat,0));	// 584 call    writecharat ;~ 01B2:02BC
cs=0x1b2;eip=0x0002bf; 	T(DEC(dl));	// 585 dec     dl ;~ 01B2:02BF
cs=0x1b2;eip=0x0002c1; 	J(LOOP(loc_103bc));	// 586 loop    loc_103BC ;~ 01B2:02C1
cs=0x1b2;eip=0x0002c3; 	T(MOV(cx, 0x0F));	// 587 mov     cx, 0Fh ;~ 01B2:02C3
loc_103c6:
	// 4397 
cs=0x1b2;eip=0x0002c6; 	J(CALL(writecharat,0));	// 590 call    writecharat ;~ 01B2:02C6
cs=0x1b2;eip=0x0002c9; 	T(DEC(dh));	// 591 dec     dh ;~ 01B2:02C9
cs=0x1b2;eip=0x0002cb; 	J(LOOP(loc_103c6));	// 592 loop    loc_103C6 ;~ 01B2:02CB
cs=0x1b2;eip=0x0002cd; 	J(RETN(0));	// 593 retn ;~ 01B2:02CD

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_103a8: 	goto loc_103a8;
        case m2c::kloc_103b2: 	goto loc_103b2;
        case m2c::kloc_103bc: 	goto loc_103bc;
        case m2c::kloc_103c6: 	goto loc_103c6;
        case m2c::kprintbox: 	goto printbox;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool writecharat(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    writecharat:
    _begin:
cs=0x1b2;eip=0x0002ce; 	X(PUSH(dx));	// 602 push    dx ;~ 01B2:02CE
cs=0x1b2;eip=0x0002cf; 	T(MOV(ax, dx));	// 603 mov     ax, dx ;~ 01B2:02CF
cs=0x1b2;eip=0x0002d1; 	T(AND(ax, 0x0FF00));	// 604 and     ax, 0FF00h ;~ 01B2:02D1
cs=0x1b2;eip=0x0002d4; 	T(SHR(ax, 1));	// 605 shr     ax, 1 ;~ 01B2:02D4
cs=0x1b2;eip=0x0002d6; 	T(SHR(ax, 1));	// 606 shr     ax, 1 ;~ 01B2:02D6
cs=0x1b2;eip=0x0002d8; 	T(SHR(ax, 1));	// 607 shr     ax, 1 ;~ 01B2:02D8
cs=0x1b2;eip=0x0002da; 	T(SHR(ax, 1));	// 608 shr     ax, 1 ;~ 01B2:02DA
cs=0x1b2;eip=0x0002dc; 	T(SHR(ax, 1));	// 609 shr     ax, 1 ;~ 01B2:02DC
cs=0x1b2;eip=0x0002de; 	T(SHR(ax, 1));	// 610 shr     ax, 1 ;~ 01B2:02DE
cs=0x1b2;eip=0x0002e0; 	T(SHR(ax, 1));	// 611 shr     ax, 1 ;~ 01B2:02E0
cs=0x1b2;eip=0x0002e2; 	T(SHR(ax, 1));	// 612 shr     ax, 1 ;~ 01B2:02E2
cs=0x1b2;eip=0x0002e4; 	X(PUSH(bx));	// 613 push    bx ;~ 01B2:02E4
cs=0x1b2;eip=0x0002e5; 	T(MOV(bh, 0x0A0));	// 614 mov     bh, 0A0h ; ' ' ;~ 01B2:02E5
cs=0x1b2;eip=0x0002e7; 	T(MUL1_1(bh));	// 615 mul     bh ;~ 01B2:02E7
cs=0x1b2;eip=0x0002e9; 	X(POP(bx));	// 616 pop     bx ;~ 01B2:02E9
cs=0x1b2;eip=0x0002ea; 	T(AND(dx, 0x0FF));	// 617 and     dx, 0FFh ;~ 01B2:02EA
cs=0x1b2;eip=0x0002ee; 	T(SHL(dx, 1));	// 618 shl     dx, 1 ;~ 01B2:02EE
cs=0x1b2;eip=0x0002f0; 	T(ADD(ax, dx));	// 619 add     ax, dx ;~ 01B2:02F0
cs=0x1b2;eip=0x0002f2; 	T(MOV(di, ax));	// 620 mov     di, ax ;~ 01B2:02F2
cs=0x1b2;eip=0x0002f4; 	X(MOV(*(raddr(es,di)), bl));	// 621 mov     es:[di], bl ;~ 01B2:02F4
cs=0x1b2;eip=0x0002f7; 	X(POP(dx));	// 622 pop     dx ;~ 01B2:02F7
cs=0x1b2;eip=0x0002f8; 	J(RETN(0));	// 623 retn ;~ 01B2:02F8

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kwritecharat: 	goto writecharat;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool readcharat(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    readcharat:
    _begin:
cs=0x1b2;eip=0x0002f9; 	X(PUSH(dx));	// 632 push    dx ;~ 01B2:02F9
cs=0x1b2;eip=0x0002fa; 	T(MOV(ax, dx));	// 633 mov     ax, dx ;~ 01B2:02FA
cs=0x1b2;eip=0x0002fc; 	T(AND(ax, 0x0FF00));	// 634 and     ax, 0FF00h ;~ 01B2:02FC
cs=0x1b2;eip=0x0002ff; 	T(SHR(ax, 1));	// 635 shr     ax, 1 ;~ 01B2:02FF
cs=0x1b2;eip=0x000301; 	T(SHR(ax, 1));	// 636 shr     ax, 1 ;~ 01B2:0301
cs=0x1b2;eip=0x000303; 	T(SHR(ax, 1));	// 637 shr     ax, 1 ;~ 01B2:0303
cs=0x1b2;eip=0x000305; 	T(SHR(ax, 1));	// 638 shr     ax, 1 ;~ 01B2:0305
cs=0x1b2;eip=0x000307; 	T(SHR(ax, 1));	// 639 shr     ax, 1 ;~ 01B2:0307
cs=0x1b2;eip=0x000309; 	T(SHR(ax, 1));	// 640 shr     ax, 1 ;~ 01B2:0309
cs=0x1b2;eip=0x00030b; 	T(SHR(ax, 1));	// 641 shr     ax, 1 ;~ 01B2:030B
cs=0x1b2;eip=0x00030d; 	T(SHR(ax, 1));	// 642 shr     ax, 1 ;~ 01B2:030D
cs=0x1b2;eip=0x00030f; 	X(PUSH(bx));	// 643 push    bx ;~ 01B2:030F
cs=0x1b2;eip=0x000310; 	T(MOV(bh, 0x0A0));	// 644 mov     bh, 0A0h ; ' ' ;~ 01B2:0310
cs=0x1b2;eip=0x000312; 	T(MUL1_1(bh));	// 645 mul     bh ;~ 01B2:0312
cs=0x1b2;eip=0x000314; 	X(POP(bx));	// 646 pop     bx ;~ 01B2:0314
cs=0x1b2;eip=0x000315; 	T(AND(dx, 0x0FF));	// 647 and     dx, 0FFh ;~ 01B2:0315
cs=0x1b2;eip=0x000319; 	T(SHL(dx, 1));	// 648 shl     dx, 1 ;~ 01B2:0319
cs=0x1b2;eip=0x00031b; 	T(ADD(ax, dx));	// 649 add     ax, dx ;~ 01B2:031B
cs=0x1b2;eip=0x00031d; 	T(MOV(di, ax));	// 650 mov     di, ax ;~ 01B2:031D
cs=0x1b2;eip=0x00031f; 	T(MOV(bl, *(raddr(es,di))));	// 651 mov     bl, es:[di] ;~ 01B2:031F
cs=0x1b2;eip=0x000322; 	X(POP(dx));	// 652 pop     dx ;~ 01B2:0322
cs=0x1b2;eip=0x000323; 	J(RETN(0));	// 653 retn ;~ 01B2:0323

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kreadcharat: 	goto readcharat;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool writestringat(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    writestringat:
    _begin:
cs=0x1b2;eip=0x000324; 	X(PUSH(dx));	// 662 push    dx ;~ 01B2:0324
cs=0x1b2;eip=0x000325; 	T(MOV(ax, dx));	// 663 mov     ax, dx ;~ 01B2:0325
cs=0x1b2;eip=0x000327; 	T(AND(ax, 0x0FF00));	// 664 and     ax, 0FF00h ;~ 01B2:0327
cs=0x1b2;eip=0x00032a; 	T(SHR(ax, 1));	// 665 shr     ax, 1 ;~ 01B2:032A
cs=0x1b2;eip=0x00032c; 	T(SHR(ax, 1));	// 666 shr     ax, 1 ;~ 01B2:032C
cs=0x1b2;eip=0x00032e; 	T(SHR(ax, 1));	// 667 shr     ax, 1 ;~ 01B2:032E
cs=0x1b2;eip=0x000330; 	T(SHR(ax, 1));	// 668 shr     ax, 1 ;~ 01B2:0330
cs=0x1b2;eip=0x000332; 	T(SHR(ax, 1));	// 669 shr     ax, 1 ;~ 01B2:0332
cs=0x1b2;eip=0x000334; 	T(SHR(ax, 1));	// 670 shr     ax, 1 ;~ 01B2:0334
cs=0x1b2;eip=0x000336; 	T(SHR(ax, 1));	// 671 shr     ax, 1 ;~ 01B2:0336
cs=0x1b2;eip=0x000338; 	T(SHR(ax, 1));	// 672 shr     ax, 1 ;~ 01B2:0338
cs=0x1b2;eip=0x00033a; 	X(PUSH(bx));	// 673 push    bx ;~ 01B2:033A
cs=0x1b2;eip=0x00033b; 	T(MOV(bh, 0x0A0));	// 674 mov     bh, 0A0h ; ' ' ;~ 01B2:033B
cs=0x1b2;eip=0x00033d; 	T(MUL1_1(bh));	// 675 mul     bh ;~ 01B2:033D
cs=0x1b2;eip=0x00033f; 	X(POP(bx));	// 676 pop     bx ;~ 01B2:033F
cs=0x1b2;eip=0x000340; 	T(AND(dx, 0x0FF));	// 677 and     dx, 0FFh ;~ 01B2:0340
cs=0x1b2;eip=0x000344; 	T(SHL(dx, 1));	// 678 shl     dx, 1 ;~ 01B2:0344
cs=0x1b2;eip=0x000346; 	T(ADD(ax, dx));	// 679 add     ax, dx ;~ 01B2:0346
cs=0x1b2;eip=0x000348; 	T(MOV(di, ax));	// 680 mov     di, ax ;~ 01B2:0348
loc_1044a:
	// 4398 
cs=0x1b2;eip=0x00034a; 	T(MOV(al, *(raddr(ds,bx))));	// 683 mov     al, [bx] ;~ 01B2:034A
cs=0x1b2;eip=0x00034c; 	T(TEST(al, al));	// 684 test    al, al ;~ 01B2:034C
cs=0x1b2;eip=0x00034e; 	J(JZ(loc_10458));	// 685 jz      short loc_10458 ;~ 01B2:034E
cs=0x1b2;eip=0x000350; 	X(MOV(*(raddr(es,di)), al));	// 686 mov     es:[di], al ;~ 01B2:0350
cs=0x1b2;eip=0x000353; 	T(INC(di));	// 687 inc     di ;~ 01B2:0353
cs=0x1b2;eip=0x000354; 	T(INC(di));	// 688 inc     di ;~ 01B2:0354
cs=0x1b2;eip=0x000355; 	T(INC(bx));	// 689 inc     bx ;~ 01B2:0355
cs=0x1b2;eip=0x000356; 	J(JMP(loc_1044a));	// 690 jmp     short loc_1044A ;~ 01B2:0356
loc_10458:
	// 4399 
cs=0x1b2;eip=0x000358; 	X(POP(dx));	// 694 pop     dx ;~ 01B2:0358
cs=0x1b2;eip=0x000359; 	J(RETN(0));	// 695 retn ;~ 01B2:0359

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1044a: 	goto loc_1044a;
        case m2c::kloc_10458: 	goto loc_10458;
        case m2c::kwritestringat: 	goto writestringat;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

