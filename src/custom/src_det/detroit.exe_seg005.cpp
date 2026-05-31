/* THIS IS GENERATED FILE */

        
#include "detroit.exe.h"

                

 bool seg005_22_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg005_22_proc:
    _begin:
cs=0x98f;eip=0x000022; 	X(PUSH(bp));	// 21218                  push    bp ;~ 098F:0022
cs=0x98f;eip=0x000023; 	T(bp = sp;);	// 21219                  mov     bp, sp ;~ 098F:0023
cs=0x98f;eip=0x000025; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 21220                  mov     dx, [bp+8] ;~ 098F:0025
cs=0x98f;eip=0x000028; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 21221                  mov     ax, [bp+6] ;~ 098F:0028
cs=0x98f;eip=0x00002b; 	T(bx = ax;);	// 21222                  mov     bx, ax ;~ 098F:002B
cs=0x98f;eip=0x00002d; 	T(cl = 4;);	// 21223                  mov     cl, 4 ;~ 098F:002D
cs=0x98f;eip=0x00002f; 	T(SHR(bx, cl));	// 21224                  shr     bx, cl ;~ 098F:002F
cs=0x98f;eip=0x000031; 	T(ADD(dx, bx));	// 21225                  add     dx, bx ;~ 098F:0031
cs=0x98f;eip=0x000033; 	T(AND(ax, 0x0F));	// 21226                  and     ax, 0Fh ;~ 098F:0033
cs=0x98f;eip=0x000036; 	X(POP(bp));	// 21227                  pop     bp ;~ 098F:0036
cs=0x98f;eip=0x000037; 	J(RETF(0));	// 21228                  retf ;~ 098F:0037
ret_98f_38:
	// 5478 
cs=0x98f;eip=0x000038; 	X(PUSH(bp));	// 21230                  push    bp ;~ 098F:0038
cs=0x98f;eip=0x000039; 	T(bp = sp;);	// 21231                  mov     bp, sp ;~ 098F:0039
cs=0x98f;eip=0x00003b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 21232                  mov     dx, [bp+8] ;~ 098F:003B
cs=0x98f;eip=0x00003e; 	T(XOR(bx, bx));	// 21233                  xor     bx, bx ;~ 098F:003E
cs=0x98f;eip=0x000040; 	T(SHL(dx, 1));	// 21234                  shl     dx, 1 ;~ 098F:0040
cs=0x98f;eip=0x000042; 	T(RCL(bx, 1));	// 21235                  rcl     bx, 1 ;~ 098F:0042
cs=0x98f;eip=0x000044; 	T(SHL(dx, 1));	// 21236                  shl     dx, 1 ;~ 098F:0044
cs=0x98f;eip=0x000046; 	T(RCL(bx, 1));	// 21237                  rcl     bx, 1 ;~ 098F:0046
cs=0x98f;eip=0x000048; 	T(SHL(dx, 1));	// 21238                  shl     dx, 1 ;~ 098F:0048
cs=0x98f;eip=0x00004a; 	T(RCL(bx, 1));	// 21239                  rcl     bx, 1 ;~ 098F:004A
cs=0x98f;eip=0x00004c; 	T(SHL(dx, 1));	// 21240                  shl     dx, 1 ;~ 098F:004C
cs=0x98f;eip=0x00004e; 	T(RCL(bx, 1));	// 21241                  rcl     bx, 1 ;~ 098F:004E
cs=0x98f;eip=0x000050; 	T(ADD(dx, *(dw*)(raddr(ss,bp+6))));	// 21242                  add     dx, [bp+6] ;~ 098F:0050
cs=0x98f;eip=0x000053; 	T(ADC(bx, 0));	// 21243                  adc     bx, 0 ;~ 098F:0053
cs=0x98f;eip=0x000056; 	T(ax = dx;);	// 21244                  mov     ax, dx ;~ 098F:0056
cs=0x98f;eip=0x000058; 	T(AND(ax, 0x0F));	// 21245                  and     ax, 0Fh ;~ 098F:0058
cs=0x98f;eip=0x00005b; 	T(ADD(ax, 0x0FFF0));	// 21246                  add     ax, 0FFF0h ;~ 098F:005B
cs=0x98f;eip=0x00005e; 	T(SHR(bx, 1));	// 21247                  shr     bx, 1 ;~ 098F:005E
cs=0x98f;eip=0x000060; 	T(RCR(dx, 1));	// 21248                  rcr     dx, 1 ;~ 098F:0060
cs=0x98f;eip=0x000062; 	T(SHR(bx, 1));	// 21249                  shr     bx, 1 ;~ 098F:0062
cs=0x98f;eip=0x000064; 	T(RCR(dx, 1));	// 21250                  rcr     dx, 1 ;~ 098F:0064
cs=0x98f;eip=0x000066; 	T(SHR(bx, 1));	// 21251                  shr     bx, 1 ;~ 098F:0066
cs=0x98f;eip=0x000068; 	T(RCR(dx, 1));	// 21252                  rcr     dx, 1 ;~ 098F:0068
cs=0x98f;eip=0x00006a; 	T(SHR(bx, 1));	// 21253                  shr     bx, 1 ;~ 098F:006A
cs=0x98f;eip=0x00006c; 	T(RCR(dx, 1));	// 21254                  rcr     dx, 1 ;~ 098F:006C
cs=0x98f;eip=0x00006e; 	T(ADD(dx, 0x0F001));	// 21255                  add     dx, 0F001h ;~ 098F:006E
cs=0x98f;eip=0x000072; 	T(CMP(ax, 0x0FFFF));	// 21256                  cmp     ax, 0FFFFh ;~ 098F:0072
cs=0x98f;eip=0x000075; 	J(JNZ(loc_17f4b));	// 21257                  jnz     short loc_17F4B ;~ 098F:0075
cs=0x98f;eip=0x000077; 	T(INC(dx));	// 21258                  inc     dx ;~ 098F:0077
cs=0x98f;eip=0x000078; 	T(SUB(ax, 0x10));	// 21259                  sub     ax, 10h ;~ 098F:0078
loc_17f4b:
	// 5479 
cs=0x98f;eip=0x00007b; 	X(POP(bp));	// 21262                  pop     bp ;~ 098F:007B
cs=0x98f;eip=0x00007c; 	J(RETF(0));	// 21263                  retf ;~ 098F:007C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_17f4b: 	goto loc_17f4b;
        case m2c::kret_98f_38: 	goto ret_98f_38;
        case m2c::kseg005_22_proc: 	goto seg005_22_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_17f4d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_17f4d:
    _begin:
#undef arg_0
#define arg_0 6
	// 21273 arg_0           = word ptr  6 ;~ 098F:007D
#undef arg_2
#define arg_2 8
	// 21274 arg_2           = word ptr  8 ;~ 098F:007D
#undef arg_4
#define arg_4 0x0A
	// 21275 arg_4           = word ptr  0Ah ;~ 098F:007D
#undef arg_6
#define arg_6 0x0C
	// 21276 arg_6           = word ptr  0Ch ;~ 098F:007D
cs=0x98f;eip=0x00007d; 	X(PUSH(bp));	// 21278                  push    bp ;~ 098F:007D
cs=0x98f;eip=0x00007e; 	T(bp = sp;);	// 21279                  mov     bp, sp ;~ 098F:007E
cs=0x98f;eip=0x000080; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 21280                  mov     dx, [bp+arg_2] ;~ 098F:0080
cs=0x98f;eip=0x000083; 	T(XOR(bx, bx));	// 21281                  xor     bx, bx ;~ 098F:0083
cs=0x98f;eip=0x000085; 	T(SHL(dx, 1));	// 21282                  shl     dx, 1 ;~ 098F:0085
cs=0x98f;eip=0x000087; 	T(RCL(bx, 1));	// 21283                  rcl     bx, 1 ;~ 098F:0087
cs=0x98f;eip=0x000089; 	T(SHL(dx, 1));	// 21284                  shl     dx, 1 ;~ 098F:0089
cs=0x98f;eip=0x00008b; 	T(RCL(bx, 1));	// 21285                  rcl     bx, 1 ;~ 098F:008B
cs=0x98f;eip=0x00008d; 	T(SHL(dx, 1));	// 21286                  shl     dx, 1 ;~ 098F:008D
cs=0x98f;eip=0x00008f; 	T(RCL(bx, 1));	// 21287                  rcl     bx, 1 ;~ 098F:008F
cs=0x98f;eip=0x000091; 	T(SHL(dx, 1));	// 21288                  shl     dx, 1 ;~ 098F:0091
cs=0x98f;eip=0x000093; 	T(RCL(bx, 1));	// 21289                  rcl     bx, 1 ;~ 098F:0093
cs=0x98f;eip=0x000095; 	T(ADD(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 21290                  add     dx, [bp+arg_0] ;~ 098F:0095
cs=0x98f;eip=0x000098; 	T(ADC(bx, 0));	// 21291                  adc     bx, 0 ;~ 098F:0098
cs=0x98f;eip=0x00009b; 	T(ADD(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 21292                  add     dx, [bp+arg_4] ;~ 098F:009B
cs=0x98f;eip=0x00009e; 	T(ADC(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 21293                  adc     bx, [bp+arg_6] ;~ 098F:009E
cs=0x98f;eip=0x0000a1; 	T(ax = dx;);	// 21294                  mov     ax, dx ;~ 098F:00A1
cs=0x98f;eip=0x0000a3; 	T(AND(ax, 0x0F));	// 21295                  and     ax, 0Fh ;~ 098F:00A3
cs=0x98f;eip=0x0000a6; 	T(SHR(bx, 1));	// 21296                  shr     bx, 1 ;~ 098F:00A6
cs=0x98f;eip=0x0000a8; 	T(RCR(dx, 1));	// 21297                  rcr     dx, 1 ;~ 098F:00A8
cs=0x98f;eip=0x0000aa; 	T(SHR(bx, 1));	// 21298                  shr     bx, 1 ;~ 098F:00AA
cs=0x98f;eip=0x0000ac; 	T(RCR(dx, 1));	// 21299                  rcr     dx, 1 ;~ 098F:00AC
cs=0x98f;eip=0x0000ae; 	T(SHR(bx, 1));	// 21300                  shr     bx, 1 ;~ 098F:00AE
cs=0x98f;eip=0x0000b0; 	T(RCR(dx, 1));	// 21301                  rcr     dx, 1 ;~ 098F:00B0
cs=0x98f;eip=0x0000b2; 	T(SHR(bx, 1));	// 21302                  shr     bx, 1 ;~ 098F:00B2
cs=0x98f;eip=0x0000b4; 	T(RCR(dx, 1));	// 21303                  rcr     dx, 1 ;~ 098F:00B4
cs=0x98f;eip=0x0000b6; 	X(POP(bp));	// 21304                  pop     bp ;~ 098F:00B6
cs=0x98f;eip=0x0000b7; 	J(RETF(0));	// 21305                  retf ;~ 098F:00B7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_17f4d: 	goto sub_17f4d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg005_b8_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg005_b8_proc:
    _begin:
cs=0x98f;eip=0x0000b8; 	X(PUSH(bp));	// 21309                  push    bp ;~ 098F:00B8
cs=0x98f;eip=0x0000b9; 	T(bp = sp;);	// 21310                  mov     bp, sp ;~ 098F:00B9
cs=0x98f;eip=0x0000bb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 21311                  mov     ax, [bp+8] ;~ 098F:00BB
cs=0x98f;eip=0x0000be; 	T(dx = 0;);	// 21312                  mov     dx, 0 ;~ 098F:00BE
cs=0x98f;eip=0x0000c1; 	T(SHL(ax, 1));	// 21313                  shl     ax, 1 ;~ 098F:00C1
cs=0x98f;eip=0x0000c3; 	T(RCL(dx, 1));	// 21314                  rcl     dx, 1 ;~ 098F:00C3
cs=0x98f;eip=0x0000c5; 	T(SHL(ax, 1));	// 21315                  shl     ax, 1 ;~ 098F:00C5
cs=0x98f;eip=0x0000c7; 	T(RCL(dx, 1));	// 21316                  rcl     dx, 1 ;~ 098F:00C7
cs=0x98f;eip=0x0000c9; 	T(SHL(ax, 1));	// 21317                  shl     ax, 1 ;~ 098F:00C9
cs=0x98f;eip=0x0000cb; 	T(RCL(dx, 1));	// 21318                  rcl     dx, 1 ;~ 098F:00CB
cs=0x98f;eip=0x0000cd; 	T(SHL(ax, 1));	// 21319                  shl     ax, 1 ;~ 098F:00CD
cs=0x98f;eip=0x0000cf; 	T(RCL(dx, 1));	// 21320                  rcl     dx, 1 ;~ 098F:00CF
cs=0x98f;eip=0x0000d1; 	T(ADD(ax, *(dw*)(raddr(ss,bp+6))));	// 21321                  add     ax, [bp+6] ;~ 098F:00D1
cs=0x98f;eip=0x0000d4; 	T(ADC(dx, 0));	// 21322                  adc     dx, 0 ;~ 098F:00D4
cs=0x98f;eip=0x0000d7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 21323                  mov     bx, [bp+0Ch] ;~ 098F:00D7
cs=0x98f;eip=0x0000da; 	T(cx = 0;);	// 21324                  mov     cx, 0 ;~ 098F:00DA
cs=0x98f;eip=0x0000dd; 	T(SHL(bx, 1));	// 21325                  shl     bx, 1 ;~ 098F:00DD
cs=0x98f;eip=0x0000df; 	T(RCL(cx, 1));	// 21326                  rcl     cx, 1 ;~ 098F:00DF
cs=0x98f;eip=0x0000e1; 	T(SHL(bx, 1));	// 21327                  shl     bx, 1 ;~ 098F:00E1
cs=0x98f;eip=0x0000e3; 	T(RCL(cx, 1));	// 21328                  rcl     cx, 1 ;~ 098F:00E3
cs=0x98f;eip=0x0000e5; 	T(SHL(bx, 1));	// 21329                  shl     bx, 1 ;~ 098F:00E5
cs=0x98f;eip=0x0000e7; 	T(RCL(cx, 1));	// 21330                  rcl     cx, 1 ;~ 098F:00E7
cs=0x98f;eip=0x0000e9; 	T(SHL(bx, 1));	// 21331                  shl     bx, 1 ;~ 098F:00E9
cs=0x98f;eip=0x0000eb; 	T(RCL(cx, 1));	// 21332                  rcl     cx, 1 ;~ 098F:00EB
cs=0x98f;eip=0x0000ed; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 21333                  add     bx, [bp+0Ah] ;~ 098F:00ED
cs=0x98f;eip=0x0000f0; 	T(ADC(cx, 0));	// 21334                  adc     cx, 0 ;~ 098F:00F0
cs=0x98f;eip=0x0000f3; 	T(SUB(ax, bx));	// 21335                  sub     ax, bx ;~ 098F:00F3
cs=0x98f;eip=0x0000f5; 	T(SBB(dx, cx));	// 21336                  sbb     dx, cx ;~ 098F:00F5
cs=0x98f;eip=0x0000f7; 	X(POP(bp));	// 21337                  pop     bp ;~ 098F:00F7
cs=0x98f;eip=0x0000f8; 	J(RETF(0));	// 21338                  retf ;~ 098F:00F8
ret_98f_f9:
	// 5480 
cs=0x98f;eip=0x0000f9; 	X(PUSH(bp));	// 21340                  push    bp ;~ 098F:00F9
cs=0x98f;eip=0x0000fa; 	T(bp = sp;);	// 21341                  mov     bp, sp ;~ 098F:00FA
cs=0x98f;eip=0x0000fc; 	X(PUSH(ds));	// 21342                  push    ds ;~ 098F:00FC
cs=0x98f;eip=0x0000fd; 	X(PUSH(si));	// 21343                  push    si ;~ 098F:00FD
cs=0x98f;eip=0x0000fe; 	X(PUSH(di));	// 21344                  push    di ;~ 098F:00FE
cs=0x98f;eip=0x0000ff; 	T(CLD);	// 21345                  cld ;~ 098F:00FF
cs=0x98f;eip=0x000100; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0E))));	// 21346                  mov     ax, [bp+0Eh] ;~ 098F:0100
cs=0x98f;eip=0x000103; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x10))));	// 21347                  mov     dx, [bp+10h] ;~ 098F:0103
cs=0x98f;eip=0x000106; 	T(SUB(ax, 2));	// 21348                  sub     ax, 2 ;~ 098F:0106
cs=0x98f;eip=0x000109; 	T(SBB(dx, 0));	// 21349                  sbb     dx, 0 ;~ 098F:0109
cs=0x98f;eip=0x00010c; 	J(JNC(loc_17fe1));	// 21350                  jnb     short loc_17FE1 ;~ 098F:010C
cs=0x98f;eip=0x00010e; 	J(JMP(loc_18282));	// 21351                  jmp     loc_18282 ;~ 098F:010E
loc_17fe1:
	// 5481 
cs=0x98f;eip=0x000111; 	T(LES(di, *(dw*)(raddr(ss,bp+0x0A))));	// 21355                  les     di, [bp+0Ah] ;~ 098F:0111
cs=0x98f;eip=0x000114; 	X(PUSH(ax));	// 21357                  push    ax ;~ 098F:0114
cs=0x98f;eip=0x000115; 	X(PUSH(bx));	// 21358                  push    bx ;~ 098F:0115
cs=0x98f;eip=0x000116; 	T(ax = es;);	// 21359                  mov     ax, es ;~ 098F:0116
cs=0x98f;eip=0x000118; 	T(bx = di;);	// 21360                  mov     bx, di ;~ 098F:0118
cs=0x98f;eip=0x00011a; 	T(SHR(bx, 1));	// 21361                  shr     bx, 1 ;~ 098F:011A
cs=0x98f;eip=0x00011c; 	T(SHR(bx, 1));	// 21362                  shr     bx, 1 ;~ 098F:011C
cs=0x98f;eip=0x00011e; 	T(SHR(bx, 1));	// 21363                  shr     bx, 1 ;~ 098F:011E
cs=0x98f;eip=0x000120; 	T(SHR(bx, 1));	// 21364                  shr     bx, 1 ;~ 098F:0120
cs=0x98f;eip=0x000122; 	T(ADD(ax, bx));	// 21365                  add     ax, bx ;~ 098F:0122
cs=0x98f;eip=0x000124; 	T(es = ax;);	// 21366                  mov     es, ax ;~ 098F:0124
cs=0x98f;eip=0x000126; 	T(AND(di, 0x0F));	// 21367                  and     di, 0Fh ;~ 098F:0126
cs=0x98f;eip=0x000129; 	X(POP(bx));	// 21368                  pop     bx ;~ 098F:0129
cs=0x98f;eip=0x00012a; 	X(POP(ax));	// 21369                  pop     ax ;~ 098F:012A
cs=0x98f;eip=0x00012b; 	X(*(dw*)(&byte_17ede) = di;);	// 21370                  mov     word ptr cs:byte_17EDE, di ;~ 098F:012B
cs=0x98f;eip=0x000130; 	X(*(dw*)(&byte_17ee0) = es;);	// 21371                  mov     word ptr cs:byte_17EE0, es ;~ 098F:0130
cs=0x98f;eip=0x000135; 	X(PUSH(bx));	// 21372                  push    bx ;~ 098F:0135
cs=0x98f;eip=0x000136; 	X(PUSH(cx));	// 21373                  push    cx ;~ 098F:0136
cs=0x98f;eip=0x000137; 	T(bx = es;);	// 21374                  mov     bx, es ;~ 098F:0137
cs=0x98f;eip=0x000139; 	T(XOR(cx, cx));	// 21375                  xor     cx, cx ;~ 098F:0139
cs=0x98f;eip=0x00013b; 	T(SHL(bx, 1));	// 21376                  shl     bx, 1 ;~ 098F:013B
cs=0x98f;eip=0x00013d; 	T(RCL(cx, 1));	// 21377                  rcl     cx, 1 ;~ 098F:013D
cs=0x98f;eip=0x00013f; 	T(SHL(bx, 1));	// 21378                  shl     bx, 1 ;~ 098F:013F
cs=0x98f;eip=0x000141; 	T(RCL(cx, 1));	// 21379                  rcl     cx, 1 ;~ 098F:0141
cs=0x98f;eip=0x000143; 	T(SHL(bx, 1));	// 21380                  shl     bx, 1 ;~ 098F:0143
cs=0x98f;eip=0x000145; 	T(RCL(cx, 1));	// 21381                  rcl     cx, 1 ;~ 098F:0145
cs=0x98f;eip=0x000147; 	T(SHL(bx, 1));	// 21382                  shl     bx, 1 ;~ 098F:0147
cs=0x98f;eip=0x000149; 	T(RCL(cx, 1));	// 21383                  rcl     cx, 1 ;~ 098F:0149
cs=0x98f;eip=0x00014b; 	T(ADD(bx, di));	// 21384                  add     bx, di ;~ 098F:014B
cs=0x98f;eip=0x00014d; 	T(ADC(cx, 0));	// 21385                  adc     cx, 0 ;~ 098F:014D
cs=0x98f;eip=0x000150; 	T(ADD(bx, ax));	// 21386                  add     bx, ax ;~ 098F:0150
cs=0x98f;eip=0x000152; 	T(ADC(cx, dx));	// 21387                  adc     cx, dx ;~ 098F:0152
cs=0x98f;eip=0x000154; 	T(di = bx;);	// 21388                  mov     di, bx ;~ 098F:0154
cs=0x98f;eip=0x000156; 	T(AND(di, 0x0F));	// 21389                  and     di, 0Fh ;~ 098F:0156
cs=0x98f;eip=0x000159; 	T(SHR(cx, 1));	// 21390                  shr     cx, 1 ;~ 098F:0159
cs=0x98f;eip=0x00015b; 	T(RCR(bx, 1));	// 21391                  rcr     bx, 1 ;~ 098F:015B
cs=0x98f;eip=0x00015d; 	T(SHR(cx, 1));	// 21392                  shr     cx, 1 ;~ 098F:015D
cs=0x98f;eip=0x00015f; 	T(RCR(bx, 1));	// 21393                  rcr     bx, 1 ;~ 098F:015F
cs=0x98f;eip=0x000161; 	T(SHR(cx, 1));	// 21394                  shr     cx, 1 ;~ 098F:0161
cs=0x98f;eip=0x000163; 	T(RCR(bx, 1));	// 21395                  rcr     bx, 1 ;~ 098F:0163
cs=0x98f;eip=0x000165; 	T(SHR(cx, 1));	// 21396                  shr     cx, 1 ;~ 098F:0165
cs=0x98f;eip=0x000167; 	T(RCR(bx, 1));	// 21397                  rcr     bx, 1 ;~ 098F:0167
cs=0x98f;eip=0x000169; 	T(es = bx;);	// 21398                  mov     es, bx ;~ 098F:0169
cs=0x98f;eip=0x00016b; 	X(POP(cx));	// 21399                  pop     cx ;~ 098F:016B
cs=0x98f;eip=0x00016c; 	X(POP(bx));	// 21400                  pop     bx ;~ 098F:016C
cs=0x98f;eip=0x00016d; 	X(*(dw*)(&byte_17ee2) = di;);	// 21401                  mov     word ptr cs:byte_17EE2, di ;~ 098F:016D
cs=0x98f;eip=0x000172; 	X(*(dw*)(&byte_17ee4) = es;);	// 21402                  mov     word ptr cs:byte_17EE4, es ;~ 098F:0172
cs=0x98f;eip=0x000177; 	T(LES(di, *(dw*)(raddr(ss,bp+6))));	// 21403                  les     di, [bp+6] ;~ 098F:0177
cs=0x98f;eip=0x00017a; 	X(PUSH(ax));	// 21404                  push    ax ;~ 098F:017A
cs=0x98f;eip=0x00017b; 	X(PUSH(bx));	// 21405                  push    bx ;~ 098F:017B
cs=0x98f;eip=0x00017c; 	T(ax = es;);	// 21406                  mov     ax, es ;~ 098F:017C
cs=0x98f;eip=0x00017e; 	T(bx = di;);	// 21407                  mov     bx, di ;~ 098F:017E
cs=0x98f;eip=0x000180; 	T(SHR(bx, 1));	// 21408                  shr     bx, 1 ;~ 098F:0180
cs=0x98f;eip=0x000182; 	T(SHR(bx, 1));	// 21409                  shr     bx, 1 ;~ 098F:0182
cs=0x98f;eip=0x000184; 	T(SHR(bx, 1));	// 21410                  shr     bx, 1 ;~ 098F:0184
cs=0x98f;eip=0x000186; 	T(SHR(bx, 1));	// 21411                  shr     bx, 1 ;~ 098F:0186
cs=0x98f;eip=0x000188; 	T(ADD(ax, bx));	// 21412                  add     ax, bx ;~ 098F:0188
cs=0x98f;eip=0x00018a; 	T(es = ax;);	// 21413                  mov     es, ax ;~ 098F:018A
cs=0x98f;eip=0x00018c; 	T(AND(di, 0x0F));	// 21414                  and     di, 0Fh ;~ 098F:018C
cs=0x98f;eip=0x00018f; 	X(POP(bx));	// 21415                  pop     bx ;~ 098F:018F
cs=0x98f;eip=0x000190; 	X(POP(ax));	// 21416                  pop     ax ;~ 098F:0190
cs=0x98f;eip=0x000191; 	X(*(dw*)(&byte_17ee6) = di;);	// 21417                  mov     word ptr cs:byte_17EE6, di ;~ 098F:0191
cs=0x98f;eip=0x000196; 	X(*(dw*)(&byte_17ee8) = es;);	// 21418                  mov     word ptr cs:byte_17EE8, es ;~ 098F:0196
cs=0x98f;eip=0x00019b; 	X(PUSH(bx));	// 21419                  push    bx ;~ 098F:019B
cs=0x98f;eip=0x00019c; 	X(PUSH(cx));	// 21420                  push    cx ;~ 098F:019C
cs=0x98f;eip=0x00019d; 	T(bx = es;);	// 21421                  mov     bx, es ;~ 098F:019D
cs=0x98f;eip=0x00019f; 	T(XOR(cx, cx));	// 21422                  xor     cx, cx ;~ 098F:019F
cs=0x98f;eip=0x0001a1; 	T(SHL(bx, 1));	// 21423                  shl     bx, 1 ;~ 098F:01A1
cs=0x98f;eip=0x0001a3; 	T(RCL(cx, 1));	// 21424                  rcl     cx, 1 ;~ 098F:01A3
cs=0x98f;eip=0x0001a5; 	T(SHL(bx, 1));	// 21425                  shl     bx, 1 ;~ 098F:01A5
cs=0x98f;eip=0x0001a7; 	T(RCL(cx, 1));	// 21426                  rcl     cx, 1 ;~ 098F:01A7
cs=0x98f;eip=0x0001a9; 	T(SHL(bx, 1));	// 21427                  shl     bx, 1 ;~ 098F:01A9
cs=0x98f;eip=0x0001ab; 	T(RCL(cx, 1));	// 21428                  rcl     cx, 1 ;~ 098F:01AB
cs=0x98f;eip=0x0001ad; 	T(SHL(bx, 1));	// 21429                  shl     bx, 1 ;~ 098F:01AD
cs=0x98f;eip=0x0001af; 	T(RCL(cx, 1));	// 21430                  rcl     cx, 1 ;~ 098F:01AF
cs=0x98f;eip=0x0001b1; 	T(ADD(bx, di));	// 21431                  add     bx, di ;~ 098F:01B1
cs=0x98f;eip=0x0001b3; 	T(ADC(cx, 0));	// 21432                  adc     cx, 0 ;~ 098F:01B3
cs=0x98f;eip=0x0001b6; 	T(ADD(bx, ax));	// 21433                  add     bx, ax ;~ 098F:01B6
cs=0x98f;eip=0x0001b8; 	T(ADC(cx, dx));	// 21434                  adc     cx, dx ;~ 098F:01B8
cs=0x98f;eip=0x0001ba; 	T(di = bx;);	// 21435                  mov     di, bx ;~ 098F:01BA
cs=0x98f;eip=0x0001bc; 	T(AND(di, 0x0F));	// 21436                  and     di, 0Fh ;~ 098F:01BC
cs=0x98f;eip=0x0001bf; 	T(SHR(cx, 1));	// 21437                  shr     cx, 1 ;~ 098F:01BF
cs=0x98f;eip=0x0001c1; 	T(RCR(bx, 1));	// 21438                  rcr     bx, 1 ;~ 098F:01C1
cs=0x98f;eip=0x0001c3; 	T(SHR(cx, 1));	// 21439                  shr     cx, 1 ;~ 098F:01C3
cs=0x98f;eip=0x0001c5; 	T(RCR(bx, 1));	// 21440                  rcr     bx, 1 ;~ 098F:01C5
cs=0x98f;eip=0x0001c7; 	T(SHR(cx, 1));	// 21441                  shr     cx, 1 ;~ 098F:01C7
cs=0x98f;eip=0x0001c9; 	T(RCR(bx, 1));	// 21442                  rcr     bx, 1 ;~ 098F:01C9
cs=0x98f;eip=0x0001cb; 	T(SHR(cx, 1));	// 21443                  shr     cx, 1 ;~ 098F:01CB
cs=0x98f;eip=0x0001cd; 	T(RCR(bx, 1));	// 21444                  rcr     bx, 1 ;~ 098F:01CD
cs=0x98f;eip=0x0001cf; 	T(es = bx;);	// 21445                  mov     es, bx ;~ 098F:01CF
cs=0x98f;eip=0x0001d1; 	X(POP(cx));	// 21446                  pop     cx ;~ 098F:01D1
cs=0x98f;eip=0x0001d2; 	X(POP(bx));	// 21447                  pop     bx ;~ 098F:01D2
cs=0x98f;eip=0x0001d3; 	X(*(dw*)(&byte_17eea) = di;);	// 21448                  mov     word ptr cs:byte_17EEA, di ;~ 098F:01D3
cs=0x98f;eip=0x0001d8; 	X(*(dw*)(&byte_17eec) = es;);	// 21449                  mov     word ptr cs:byte_17EEC, es ;~ 098F:01D8
cs=0x98f;eip=0x0001dd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0E))));	// 21450                  mov     ax, [bp+0Eh] ;~ 098F:01DD
cs=0x98f;eip=0x0001e0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x10))));	// 21451                  mov     dx, [bp+10h] ;~ 098F:01E0
cs=0x98f;eip=0x0001e3; 	T(bx = 0x0FFE0;);	// 21452                  mov     bx, 0FFE0h ;~ 098F:01E3
cs=0x98f;eip=0x0001e6; 	T(DIV2(bx));	// 21453                  div     bx ;~ 098F:01E6
cs=0x98f;eip=0x0001e8; 	X(*(dw*)(&byte_17eee) = ax;);	// 21454                  mov     word ptr cs:byte_17EEE, ax ;~ 098F:01E8
cs=0x98f;eip=0x0001ec; 	X(*(dw*)(&byte_17ef0) = dx;);	// 21455                  mov     word ptr cs:byte_17EF0, dx ;~ 098F:01EC
cs=0x98f;eip=0x0001f1; 	T(ax = *(dw*)(&byte_17ee0););	// 21456                  mov     ax, word ptr cs:byte_17EE0 ;~ 098F:01F1
cs=0x98f;eip=0x0001f5; 	T(CMP(ax, *(dw*)(&byte_17ee8)));	// 21457                  cmp     ax, word ptr cs:byte_17EE8 ;~ 098F:01F5
cs=0x98f;eip=0x0001fa; 	J(JA(loc_180e0));	// 21458                  ja      short loc_180E0 ;~ 098F:01FA
cs=0x98f;eip=0x0001fc; 	J(JC(loc_1813c));	// 21459                  jb      short loc_1813C ;~ 098F:01FC
cs=0x98f;eip=0x0001fe; 	T(ax = *(dw*)(&byte_17ede););	// 21460                  mov     ax, word ptr cs:byte_17EDE ;~ 098F:01FE
cs=0x98f;eip=0x000202; 	T(CMP(ax, *(dw*)(&byte_17ee6)));	// 21461                  cmp     ax, word ptr cs:byte_17EE6 ;~ 098F:0202
cs=0x98f;eip=0x000207; 	J(JA(loc_180e0));	// 21462                  ja      short loc_180E0 ;~ 098F:0207
cs=0x98f;eip=0x000209; 	J(JC(loc_1813c));	// 21463                  jb      short loc_1813C ;~ 098F:0209
cs=0x98f;eip=0x00020b; 	J(JNZ(loc_180e0));	// 21464                  jnz     short loc_180E0 ;~ 098F:020B
cs=0x98f;eip=0x00020d; 	J(JMP(loc_1827c));	// 21465                  jmp     loc_1827C ;~ 098F:020D
loc_180e0:
	// 5482 
cs=0x98f;eip=0x000210; 	T(LDS(si, *(dd*)(&byte_17ede)));	// 21470                  lds     si, dword ptr cs:byte_17EDE ;~ 098F:0210
cs=0x98f;eip=0x000215; 	T(LES(di, *(dd*)(&byte_17ee6)));	// 21471                  les     di, dword ptr cs:byte_17EE6 ;~ 098F:0215
cs=0x98f;eip=0x00021a; 	T(CMP(*(dw*)(&byte_17eee), 0));	// 21472                  cmp     word ptr cs:byte_17EEE, 0 ;~ 098F:021A
cs=0x98f;eip=0x000220; 	J(JZ(loc_1812c));	// 21473                  jz      short loc_1812C ;~ 098F:0220
loc_180f2:
	// 5483 
cs=0x98f;eip=0x000222; 	T(cx = 0x7FF0;);	// 21476                  mov     cx, 7FF0h ;~ 098F:0222
	// 21477                  rep movsw ;~ 098F:0225
cs=0x98f;eip=0x000225; 	X(	REP MOVSW);	// 21477                  rep movsw ;~ 098F:0225
cs=0x98f;eip=0x000227; 	X(PUSH(ax));	// 21478                  push    ax ;~ 098F:0227
cs=0x98f;eip=0x000228; 	X(PUSH(bx));	// 21479                  push    bx ;~ 098F:0228
cs=0x98f;eip=0x000229; 	T(ax = ds;);	// 21480                  mov     ax, ds ;~ 098F:0229
cs=0x98f;eip=0x00022b; 	T(bx = si;);	// 21481                  mov     bx, si ;~ 098F:022B
cs=0x98f;eip=0x00022d; 	T(SHR(bx, 1));	// 21482                  shr     bx, 1 ;~ 098F:022D
cs=0x98f;eip=0x00022f; 	T(SHR(bx, 1));	// 21483                  shr     bx, 1 ;~ 098F:022F
cs=0x98f;eip=0x000231; 	T(SHR(bx, 1));	// 21484                  shr     bx, 1 ;~ 098F:0231
cs=0x98f;eip=0x000233; 	T(SHR(bx, 1));	// 21485                  shr     bx, 1 ;~ 098F:0233
cs=0x98f;eip=0x000235; 	T(ADD(ax, bx));	// 21486                  add     ax, bx ;~ 098F:0235
cs=0x98f;eip=0x000237; 	T(ds = ax;);	// 21487                  mov     ds, ax ;~ 098F:0237
cs=0x98f;eip=0x000239; 	T(AND(si, 0x0F));	// 21488                  and     si, 0Fh ;~ 098F:0239
cs=0x98f;eip=0x00023c; 	X(POP(bx));	// 21489                  pop     bx ;~ 098F:023C
cs=0x98f;eip=0x00023d; 	X(POP(ax));	// 21490                  pop     ax ;~ 098F:023D
cs=0x98f;eip=0x00023e; 	X(PUSH(ax));	// 21491                  push    ax ;~ 098F:023E
cs=0x98f;eip=0x00023f; 	X(PUSH(bx));	// 21492                  push    bx ;~ 098F:023F
cs=0x98f;eip=0x000240; 	T(ax = es;);	// 21493                  mov     ax, es ;~ 098F:0240
cs=0x98f;eip=0x000242; 	T(bx = di;);	// 21494                  mov     bx, di ;~ 098F:0242
cs=0x98f;eip=0x000244; 	T(SHR(bx, 1));	// 21495                  shr     bx, 1 ;~ 098F:0244
cs=0x98f;eip=0x000246; 	T(SHR(bx, 1));	// 21496                  shr     bx, 1 ;~ 098F:0246
cs=0x98f;eip=0x000248; 	T(SHR(bx, 1));	// 21497                  shr     bx, 1 ;~ 098F:0248
cs=0x98f;eip=0x00024a; 	T(SHR(bx, 1));	// 21498                  shr     bx, 1 ;~ 098F:024A
cs=0x98f;eip=0x00024c; 	T(ADD(ax, bx));	// 21499                  add     ax, bx ;~ 098F:024C
cs=0x98f;eip=0x00024e; 	T(es = ax;);	// 21500                  mov     es, ax ;~ 098F:024E
cs=0x98f;eip=0x000250; 	T(AND(di, 0x0F));	// 21501                  and     di, 0Fh ;~ 098F:0250
cs=0x98f;eip=0x000253; 	X(POP(bx));	// 21502                  pop     bx ;~ 098F:0253
cs=0x98f;eip=0x000254; 	X(POP(ax));	// 21503                  pop     ax ;~ 098F:0254
cs=0x98f;eip=0x000255; 	X(DEC(*(dw*)(&byte_17eee)));	// 21504                  dec     word ptr cs:byte_17EEE ;~ 098F:0255
cs=0x98f;eip=0x00025a; 	J(JNZ(loc_180f2));	// 21505                  jnz     short loc_180F2 ;~ 098F:025A
loc_1812c:
	// 5484 
cs=0x98f;eip=0x00025c; 	T(cx = *(dw*)(&byte_17ef0););	// 21508                  mov     cx, word ptr cs:byte_17EF0 ;~ 098F:025C
cs=0x98f;eip=0x000261; 	T(SHR(cx, 1));	// 21509                  shr     cx, 1 ;~ 098F:0261
	// 21510                  rep movsw ;~ 098F:0263
cs=0x98f;eip=0x000263; 	X(	REP MOVSW);	// 21510                  rep movsw ;~ 098F:0263
cs=0x98f;eip=0x000265; 	T(RCL(cx, 1));	// 21511                  rcl     cx, 1 ;~ 098F:0265
	// 21512                  rep movsb ;~ 098F:0267
cs=0x98f;eip=0x000267; 	X(	REP MOVSB);	// 21512                  rep movsb ;~ 098F:0267
cs=0x98f;eip=0x000269; 	J(JMP(loc_1827c));	// 21513                  jmp     loc_1827C ;~ 098F:0269
loc_1813c:
	// 5485 
cs=0x98f;eip=0x00026c; 	T(STD);	// 21518                  std ;~ 098F:026C
cs=0x98f;eip=0x00026d; 	T(LDS(si, *(dd*)(&byte_17ee2)));	// 21519                  lds     si, dword ptr cs:byte_17EE2 ;~ 098F:026D
cs=0x98f;eip=0x000272; 	T(LES(di, *(dd*)(&byte_17eea)));	// 21520                  les     di, dword ptr cs:byte_17EEA ;~ 098F:0272
cs=0x98f;eip=0x000277; 	T(CMP(*(dw*)(&byte_17eee), 0));	// 21521                  cmp     word ptr cs:byte_17EEE, 0 ;~ 098F:0277
cs=0x98f;eip=0x00027d; 	J(JNZ(loc_18152));	// 21522                  jnz     short loc_18152 ;~ 098F:027D
cs=0x98f;eip=0x00027f; 	J(JMP(loc_181e7));	// 21523                  jmp     loc_181E7 ;~ 098F:027F
loc_18152:
	// 5486 
cs=0x98f;eip=0x000282; 	X(PUSH(ax));	// 21528                  push    ax ;~ 098F:0282
cs=0x98f;eip=0x000283; 	X(PUSH(bx));	// 21529                  push    bx ;~ 098F:0283
cs=0x98f;eip=0x000284; 	T(ax = ds;);	// 21530                  mov     ax, ds ;~ 098F:0284
cs=0x98f;eip=0x000286; 	T(XOR(bx, bx));	// 21531                  xor     bx, bx ;~ 098F:0286
cs=0x98f;eip=0x000288; 	T(SHL(ax, 1));	// 21532                  shl     ax, 1 ;~ 098F:0288
cs=0x98f;eip=0x00028a; 	T(RCL(bx, 1));	// 21533                  rcl     bx, 1 ;~ 098F:028A
cs=0x98f;eip=0x00028c; 	T(SHL(ax, 1));	// 21534                  shl     ax, 1 ;~ 098F:028C
cs=0x98f;eip=0x00028e; 	T(RCL(bx, 1));	// 21535                  rcl     bx, 1 ;~ 098F:028E
cs=0x98f;eip=0x000290; 	T(SHL(ax, 1));	// 21536                  shl     ax, 1 ;~ 098F:0290
cs=0x98f;eip=0x000292; 	T(RCL(bx, 1));	// 21537                  rcl     bx, 1 ;~ 098F:0292
cs=0x98f;eip=0x000294; 	T(SHL(ax, 1));	// 21538                  shl     ax, 1 ;~ 098F:0294
cs=0x98f;eip=0x000296; 	T(RCL(bx, 1));	// 21539                  rcl     bx, 1 ;~ 098F:0296
cs=0x98f;eip=0x000298; 	T(ADD(ax, si));	// 21540                  add     ax, si ;~ 098F:0298
cs=0x98f;eip=0x00029a; 	T(ADC(bx, 0));	// 21541                  adc     bx, 0 ;~ 098F:029A
cs=0x98f;eip=0x00029d; 	T(si = ax;);	// 21542                  mov     si, ax ;~ 098F:029D
cs=0x98f;eip=0x00029f; 	T(AND(si, 0x0F));	// 21543                  and     si, 0Fh ;~ 098F:029F
cs=0x98f;eip=0x0002a2; 	T(ADD(si, 0x0FFF0));	// 21544                  add     si, 0FFF0h ;~ 098F:02A2
cs=0x98f;eip=0x0002a5; 	T(SHR(bx, 1));	// 21545                  shr     bx, 1 ;~ 098F:02A5
cs=0x98f;eip=0x0002a7; 	T(RCR(ax, 1));	// 21546                  rcr     ax, 1 ;~ 098F:02A7
cs=0x98f;eip=0x0002a9; 	T(SHR(bx, 1));	// 21547                  shr     bx, 1 ;~ 098F:02A9
cs=0x98f;eip=0x0002ab; 	T(RCR(ax, 1));	// 21548                  rcr     ax, 1 ;~ 098F:02AB
cs=0x98f;eip=0x0002ad; 	T(SHR(bx, 1));	// 21549                  shr     bx, 1 ;~ 098F:02AD
cs=0x98f;eip=0x0002af; 	T(RCR(ax, 1));	// 21550                  rcr     ax, 1 ;~ 098F:02AF
cs=0x98f;eip=0x0002b1; 	T(SHR(bx, 1));	// 21551                  shr     bx, 1 ;~ 098F:02B1
cs=0x98f;eip=0x0002b3; 	T(RCR(ax, 1));	// 21552                  rcr     ax, 1 ;~ 098F:02B3
cs=0x98f;eip=0x0002b5; 	T(ADD(ax, 0x0F001));	// 21553                  add     ax, 0F001h ;~ 098F:02B5
cs=0x98f;eip=0x0002b8; 	T(CMP(si, 0x0FFFF));	// 21554                  cmp     si, 0FFFFh ;~ 098F:02B8
cs=0x98f;eip=0x0002bb; 	J(JNZ(loc_18191));	// 21555                  jnz     short loc_18191 ;~ 098F:02BB
cs=0x98f;eip=0x0002bd; 	T(INC(ax));	// 21556                  inc     ax ;~ 098F:02BD
cs=0x98f;eip=0x0002be; 	T(SUB(si, 0x10));	// 21557                  sub     si, 10h ;~ 098F:02BE
loc_18191:
	// 5487 
cs=0x98f;eip=0x0002c1; 	T(ds = ax;);	// 21560                  mov     ds, ax ;~ 098F:02C1
cs=0x98f;eip=0x0002c3; 	X(POP(bx));	// 21561                  pop     bx ;~ 098F:02C3
cs=0x98f;eip=0x0002c4; 	X(POP(ax));	// 21562                  pop     ax ;~ 098F:02C4
cs=0x98f;eip=0x0002c5; 	X(PUSH(ax));	// 21563                  push    ax ;~ 098F:02C5
cs=0x98f;eip=0x0002c6; 	X(PUSH(bx));	// 21564                  push    bx ;~ 098F:02C6
cs=0x98f;eip=0x0002c7; 	T(ax = es;);	// 21565                  mov     ax, es ;~ 098F:02C7
cs=0x98f;eip=0x0002c9; 	T(XOR(bx, bx));	// 21566                  xor     bx, bx ;~ 098F:02C9
cs=0x98f;eip=0x0002cb; 	T(SHL(ax, 1));	// 21567                  shl     ax, 1 ;~ 098F:02CB
cs=0x98f;eip=0x0002cd; 	T(RCL(bx, 1));	// 21568                  rcl     bx, 1 ;~ 098F:02CD
cs=0x98f;eip=0x0002cf; 	T(SHL(ax, 1));	// 21569                  shl     ax, 1 ;~ 098F:02CF
cs=0x98f;eip=0x0002d1; 	T(RCL(bx, 1));	// 21570                  rcl     bx, 1 ;~ 098F:02D1
cs=0x98f;eip=0x0002d3; 	T(SHL(ax, 1));	// 21571                  shl     ax, 1 ;~ 098F:02D3
cs=0x98f;eip=0x0002d5; 	T(RCL(bx, 1));	// 21572                  rcl     bx, 1 ;~ 098F:02D5
cs=0x98f;eip=0x0002d7; 	T(SHL(ax, 1));	// 21573                  shl     ax, 1 ;~ 098F:02D7
cs=0x98f;eip=0x0002d9; 	T(RCL(bx, 1));	// 21574                  rcl     bx, 1 ;~ 098F:02D9
cs=0x98f;eip=0x0002db; 	T(ADD(ax, di));	// 21575                  add     ax, di ;~ 098F:02DB
cs=0x98f;eip=0x0002dd; 	T(ADC(bx, 0));	// 21576                  adc     bx, 0 ;~ 098F:02DD
cs=0x98f;eip=0x0002e0; 	T(di = ax;);	// 21577                  mov     di, ax ;~ 098F:02E0
cs=0x98f;eip=0x0002e2; 	T(AND(di, 0x0F));	// 21578                  and     di, 0Fh ;~ 098F:02E2
cs=0x98f;eip=0x0002e5; 	T(ADD(di, 0x0FFF0));	// 21579                  add     di, 0FFF0h ;~ 098F:02E5
cs=0x98f;eip=0x0002e8; 	T(SHR(bx, 1));	// 21580                  shr     bx, 1 ;~ 098F:02E8
cs=0x98f;eip=0x0002ea; 	T(RCR(ax, 1));	// 21581                  rcr     ax, 1 ;~ 098F:02EA
cs=0x98f;eip=0x0002ec; 	T(SHR(bx, 1));	// 21582                  shr     bx, 1 ;~ 098F:02EC
cs=0x98f;eip=0x0002ee; 	T(RCR(ax, 1));	// 21583                  rcr     ax, 1 ;~ 098F:02EE
cs=0x98f;eip=0x0002f0; 	T(SHR(bx, 1));	// 21584                  shr     bx, 1 ;~ 098F:02F0
cs=0x98f;eip=0x0002f2; 	T(RCR(ax, 1));	// 21585                  rcr     ax, 1 ;~ 098F:02F2
cs=0x98f;eip=0x0002f4; 	T(SHR(bx, 1));	// 21586                  shr     bx, 1 ;~ 098F:02F4
cs=0x98f;eip=0x0002f6; 	T(RCR(ax, 1));	// 21587                  rcr     ax, 1 ;~ 098F:02F6
cs=0x98f;eip=0x0002f8; 	T(ADD(ax, 0x0F001));	// 21588                  add     ax, 0F001h ;~ 098F:02F8
cs=0x98f;eip=0x0002fb; 	T(CMP(di, 0x0FFFF));	// 21589                  cmp     di, 0FFFFh ;~ 098F:02FB
cs=0x98f;eip=0x0002fe; 	J(JNZ(loc_181d4));	// 21590                  jnz     short loc_181D4 ;~ 098F:02FE
cs=0x98f;eip=0x000300; 	T(INC(ax));	// 21591                  inc     ax ;~ 098F:0300
cs=0x98f;eip=0x000301; 	T(SUB(di, 0x10));	// 21592                  sub     di, 10h ;~ 098F:0301
loc_181d4:
	// 5488 
cs=0x98f;eip=0x000304; 	T(es = ax;);	// 21595                  mov     es, ax ;~ 098F:0304
cs=0x98f;eip=0x000306; 	X(POP(bx));	// 21596                  pop     bx ;~ 098F:0306
cs=0x98f;eip=0x000307; 	X(POP(ax));	// 21597                  pop     ax ;~ 098F:0307
cs=0x98f;eip=0x000308; 	T(cx = 0x7FF0;);	// 21598                  mov     cx, 7FF0h ;~ 098F:0308
	// 21599                  rep movsw ;~ 098F:030B
cs=0x98f;eip=0x00030b; 	X(	REP MOVSW);	// 21599                  rep movsw ;~ 098F:030B
cs=0x98f;eip=0x00030d; 	X(DEC(*(dw*)(&byte_17eee)));	// 21600                  dec     word ptr cs:byte_17EEE ;~ 098F:030D
cs=0x98f;eip=0x000312; 	J(JZ(loc_181e7));	// 21601                  jz      short loc_181E7 ;~ 098F:0312
cs=0x98f;eip=0x000314; 	J(JMP(loc_18152));	// 21602                  jmp     loc_18152 ;~ 098F:0314
loc_181e7:
	// 5489 
cs=0x98f;eip=0x000317; 	X(PUSH(ax));	// 21607                  push    ax ;~ 098F:0317
cs=0x98f;eip=0x000318; 	X(PUSH(bx));	// 21608                  push    bx ;~ 098F:0318
cs=0x98f;eip=0x000319; 	T(ax = ds;);	// 21609                  mov     ax, ds ;~ 098F:0319
cs=0x98f;eip=0x00031b; 	T(XOR(bx, bx));	// 21610                  xor     bx, bx ;~ 098F:031B
cs=0x98f;eip=0x00031d; 	T(SHL(ax, 1));	// 21611                  shl     ax, 1 ;~ 098F:031D
cs=0x98f;eip=0x00031f; 	T(RCL(bx, 1));	// 21612                  rcl     bx, 1 ;~ 098F:031F
cs=0x98f;eip=0x000321; 	T(SHL(ax, 1));	// 21613                  shl     ax, 1 ;~ 098F:0321
cs=0x98f;eip=0x000323; 	T(RCL(bx, 1));	// 21614                  rcl     bx, 1 ;~ 098F:0323
cs=0x98f;eip=0x000325; 	T(SHL(ax, 1));	// 21615                  shl     ax, 1 ;~ 098F:0325
cs=0x98f;eip=0x000327; 	T(RCL(bx, 1));	// 21616                  rcl     bx, 1 ;~ 098F:0327
cs=0x98f;eip=0x000329; 	T(SHL(ax, 1));	// 21617                  shl     ax, 1 ;~ 098F:0329
cs=0x98f;eip=0x00032b; 	T(RCL(bx, 1));	// 21618                  rcl     bx, 1 ;~ 098F:032B
cs=0x98f;eip=0x00032d; 	T(ADD(ax, si));	// 21619                  add     ax, si ;~ 098F:032D
cs=0x98f;eip=0x00032f; 	T(ADC(bx, 0));	// 21620                  adc     bx, 0 ;~ 098F:032F
cs=0x98f;eip=0x000332; 	T(si = ax;);	// 21621                  mov     si, ax ;~ 098F:0332
cs=0x98f;eip=0x000334; 	T(AND(si, 0x0F));	// 21622                  and     si, 0Fh ;~ 098F:0334
cs=0x98f;eip=0x000337; 	T(ADD(si, 0x0FFF0));	// 21623                  add     si, 0FFF0h ;~ 098F:0337
cs=0x98f;eip=0x00033a; 	T(SHR(bx, 1));	// 21624                  shr     bx, 1 ;~ 098F:033A
cs=0x98f;eip=0x00033c; 	T(RCR(ax, 1));	// 21625                  rcr     ax, 1 ;~ 098F:033C
cs=0x98f;eip=0x00033e; 	T(SHR(bx, 1));	// 21626                  shr     bx, 1 ;~ 098F:033E
cs=0x98f;eip=0x000340; 	T(RCR(ax, 1));	// 21627                  rcr     ax, 1 ;~ 098F:0340
cs=0x98f;eip=0x000342; 	T(SHR(bx, 1));	// 21628                  shr     bx, 1 ;~ 098F:0342
cs=0x98f;eip=0x000344; 	T(RCR(ax, 1));	// 21629                  rcr     ax, 1 ;~ 098F:0344
cs=0x98f;eip=0x000346; 	T(SHR(bx, 1));	// 21630                  shr     bx, 1 ;~ 098F:0346
cs=0x98f;eip=0x000348; 	T(RCR(ax, 1));	// 21631                  rcr     ax, 1 ;~ 098F:0348
cs=0x98f;eip=0x00034a; 	T(ADD(ax, 0x0F001));	// 21632                  add     ax, 0F001h ;~ 098F:034A
cs=0x98f;eip=0x00034d; 	T(CMP(si, 0x0FFFF));	// 21633                  cmp     si, 0FFFFh ;~ 098F:034D
cs=0x98f;eip=0x000350; 	J(JNZ(loc_18226));	// 21634                  jnz     short loc_18226 ;~ 098F:0350
cs=0x98f;eip=0x000352; 	T(INC(ax));	// 21635                  inc     ax ;~ 098F:0352
cs=0x98f;eip=0x000353; 	T(SUB(si, 0x10));	// 21636                  sub     si, 10h ;~ 098F:0353
loc_18226:
	// 5490 
cs=0x98f;eip=0x000356; 	T(ds = ax;);	// 21639                  mov     ds, ax ;~ 098F:0356
cs=0x98f;eip=0x000358; 	X(POP(bx));	// 21640                  pop     bx ;~ 098F:0358
cs=0x98f;eip=0x000359; 	X(POP(ax));	// 21641                  pop     ax ;~ 098F:0359
cs=0x98f;eip=0x00035a; 	X(PUSH(ax));	// 21642                  push    ax ;~ 098F:035A
cs=0x98f;eip=0x00035b; 	X(PUSH(bx));	// 21643                  push    bx ;~ 098F:035B
cs=0x98f;eip=0x00035c; 	T(ax = es;);	// 21644                  mov     ax, es ;~ 098F:035C
cs=0x98f;eip=0x00035e; 	T(XOR(bx, bx));	// 21645                  xor     bx, bx ;~ 098F:035E
cs=0x98f;eip=0x000360; 	T(SHL(ax, 1));	// 21646                  shl     ax, 1 ;~ 098F:0360
cs=0x98f;eip=0x000362; 	T(RCL(bx, 1));	// 21647                  rcl     bx, 1 ;~ 098F:0362
cs=0x98f;eip=0x000364; 	T(SHL(ax, 1));	// 21648                  shl     ax, 1 ;~ 098F:0364
cs=0x98f;eip=0x000366; 	T(RCL(bx, 1));	// 21649                  rcl     bx, 1 ;~ 098F:0366
cs=0x98f;eip=0x000368; 	T(SHL(ax, 1));	// 21650                  shl     ax, 1 ;~ 098F:0368
cs=0x98f;eip=0x00036a; 	T(RCL(bx, 1));	// 21651                  rcl     bx, 1 ;~ 098F:036A
cs=0x98f;eip=0x00036c; 	T(SHL(ax, 1));	// 21652                  shl     ax, 1 ;~ 098F:036C
cs=0x98f;eip=0x00036e; 	T(RCL(bx, 1));	// 21653                  rcl     bx, 1 ;~ 098F:036E
cs=0x98f;eip=0x000370; 	T(ADD(ax, di));	// 21654                  add     ax, di ;~ 098F:0370
cs=0x98f;eip=0x000372; 	T(ADC(bx, 0));	// 21655                  adc     bx, 0 ;~ 098F:0372
cs=0x98f;eip=0x000375; 	T(di = ax;);	// 21656                  mov     di, ax ;~ 098F:0375
cs=0x98f;eip=0x000377; 	T(AND(di, 0x0F));	// 21657                  and     di, 0Fh ;~ 098F:0377
cs=0x98f;eip=0x00037a; 	T(ADD(di, 0x0FFF0));	// 21658                  add     di, 0FFF0h ;~ 098F:037A
cs=0x98f;eip=0x00037d; 	T(SHR(bx, 1));	// 21659                  shr     bx, 1 ;~ 098F:037D
cs=0x98f;eip=0x00037f; 	T(RCR(ax, 1));	// 21660                  rcr     ax, 1 ;~ 098F:037F
cs=0x98f;eip=0x000381; 	T(SHR(bx, 1));	// 21661                  shr     bx, 1 ;~ 098F:0381
cs=0x98f;eip=0x000383; 	T(RCR(ax, 1));	// 21662                  rcr     ax, 1 ;~ 098F:0383
cs=0x98f;eip=0x000385; 	T(SHR(bx, 1));	// 21663                  shr     bx, 1 ;~ 098F:0385
cs=0x98f;eip=0x000387; 	T(RCR(ax, 1));	// 21664                  rcr     ax, 1 ;~ 098F:0387
cs=0x98f;eip=0x000389; 	T(SHR(bx, 1));	// 21665                  shr     bx, 1 ;~ 098F:0389
cs=0x98f;eip=0x00038b; 	T(RCR(ax, 1));	// 21666                  rcr     ax, 1 ;~ 098F:038B
cs=0x98f;eip=0x00038d; 	T(ADD(ax, 0x0F001));	// 21667                  add     ax, 0F001h ;~ 098F:038D
cs=0x98f;eip=0x000390; 	T(CMP(di, 0x0FFFF));	// 21668                  cmp     di, 0FFFFh ;~ 098F:0390
cs=0x98f;eip=0x000393; 	J(JNZ(loc_18269));	// 21669                  jnz     short loc_18269 ;~ 098F:0393
cs=0x98f;eip=0x000395; 	T(INC(ax));	// 21670                  inc     ax ;~ 098F:0395
cs=0x98f;eip=0x000396; 	T(SUB(di, 0x10));	// 21671                  sub     di, 10h ;~ 098F:0396
loc_18269:
	// 5491 
cs=0x98f;eip=0x000399; 	T(es = ax;);	// 21674                  mov     es, ax ;~ 098F:0399
cs=0x98f;eip=0x00039b; 	X(POP(bx));	// 21675                  pop     bx ;~ 098F:039B
cs=0x98f;eip=0x00039c; 	X(POP(ax));	// 21676                  pop     ax ;~ 098F:039C
cs=0x98f;eip=0x00039d; 	T(cx = *(dw*)(&byte_17ef0););	// 21677                  mov     cx, word ptr cs:byte_17EF0 ;~ 098F:039D
cs=0x98f;eip=0x0003a2; 	T(SHR(cx, 1));	// 21678                  shr     cx, 1 ;~ 098F:03A2
	// 21679                  rep movsw ;~ 098F:03A4
cs=0x98f;eip=0x0003a4; 	X(	REP MOVSW);	// 21679                  rep movsw ;~ 098F:03A4
cs=0x98f;eip=0x0003a6; 	T(RCL(cx, 1));	// 21680                  rcl     cx, 1 ;~ 098F:03A6
cs=0x98f;eip=0x0003a8; 	T(INC(si));	// 21681                  inc     si ;~ 098F:03A8
cs=0x98f;eip=0x0003a9; 	T(INC(di));	// 21682                  inc     di ;~ 098F:03A9
	// 21683                  rep movsb ;~ 098F:03AA
cs=0x98f;eip=0x0003aa; 	X(	REP MOVSB);	// 21683                  rep movsb ;~ 098F:03AA
loc_1827c:
	// 5492 
cs=0x98f;eip=0x0003ac; 	T(CLD);	// 21687                  cld ;~ 098F:03AC
cs=0x98f;eip=0x0003ad; 	X(POP(di));	// 21688                  pop     di ;~ 098F:03AD
cs=0x98f;eip=0x0003ae; 	X(POP(si));	// 21689                  pop     si ;~ 098F:03AE
cs=0x98f;eip=0x0003af; 	X(POP(ds));	// 21690                  pop     ds ;~ 098F:03AF
cs=0x98f;eip=0x0003b0; 	X(POP(bp));	// 21691                  pop     bp ;~ 098F:03B0
cs=0x98f;eip=0x0003b1; 	J(RETF(0));	// 21692                  retf ;~ 098F:03B1
loc_18282:
	// 5493 
cs=0x98f;eip=0x0003b2; 	T(CMP(ax, 0x0FFFF));	// 21696                  cmp     ax, 0FFFFh ;~ 098F:03B2
cs=0x98f;eip=0x0003b5; 	J(JNZ(loc_1827c));	// 21697                  jnz     short loc_1827C ;~ 098F:03B5
cs=0x98f;eip=0x0003b7; 	T(LDS(si, *(dd*)(&byte_17ede)));	// 21698                  lds     si, dword ptr cs:byte_17EDE ;~ 098F:03B7
cs=0x98f;eip=0x0003bc; 	T(LES(di, *(dd*)(&byte_17ee6)));	// 21699                  les     di, dword ptr cs:byte_17EE6 ;~ 098F:03BC
cs=0x98f;eip=0x0003c1; 	X(MOVSB);	// 21700                  movsb ;~ 098F:03C1
cs=0x98f;eip=0x0003c2; 	J(JMP(loc_1827c));	// 21701                  jmp     short loc_1827C ;~ 098F:03C2
ret_98f_3c4:
	// 5494 
cs=0x98f;eip=0x0003c4; 	X(PUSH(bp));	// 21703                  push    bp ;~ 098F:03C4
cs=0x98f;eip=0x0003c5; 	T(bp = sp;);	// 21704                  mov     bp, sp ;~ 098F:03C5
cs=0x98f;eip=0x0003c7; 	T(MOV(dx, *(dw*)(raddr(ss,bp+6))));	// 21705                  mov     dx, [bp+6] ;~ 098F:03C7
cs=0x98f;eip=0x0003ca; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 21706                  mov     ax, [bp+8] ;~ 098F:03CA
cs=0x98f;eip=0x0003cd; 	T(XCHG(al, ah));	// 21707                  xchg    al, ah ;~ 098F:03CD
cs=0x98f;eip=0x0003cf; 	T(XCHG(dl, dh));	// 21708                  xchg    dl, dh ;~ 098F:03CF
cs=0x98f;eip=0x0003d1; 	X(POP(bp));	// 21709                  pop     bp ;~ 098F:03D1
cs=0x98f;eip=0x0003d2; 	J(RETF(0));	// 21710                  retf ;~ 098F:03D2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_17fe1: 	goto loc_17fe1;
        case m2c::kloc_180e0: 	goto loc_180e0;
        case m2c::kloc_180f2: 	goto loc_180f2;
        case m2c::kloc_1812c: 	goto loc_1812c;
        case m2c::kloc_1813c: 	goto loc_1813c;
        case m2c::kloc_18152: 	goto loc_18152;
        case m2c::kloc_18191: 	goto loc_18191;
        case m2c::kloc_181d4: 	goto loc_181d4;
        case m2c::kloc_181e7: 	goto loc_181e7;
        case m2c::kloc_18226: 	goto loc_18226;
        case m2c::kloc_18269: 	goto loc_18269;
        case m2c::kloc_1827c: 	goto loc_1827c;
        case m2c::kloc_18282: 	goto loc_18282;
        case m2c::kret_98f_3c4: 	goto ret_98f_3c4;
        case m2c::kret_98f_f9: 	goto ret_98f_f9;
        case m2c::kseg005_b8_proc: 	goto seg005_b8_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

